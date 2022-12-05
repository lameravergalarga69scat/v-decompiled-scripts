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
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	var uLocal_48 = 0;
	float fLocal_49 = 0f;
	bool bLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56[4] = { 0, 0, 0, 0 };
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 4;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 4;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 4;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 4;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 4;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 4;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	int iLocal_96 = 0;
	float fLocal_97 = 0f;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	bool bLocal_100 = 0;
	bool bLocal_101 = 0;
	bool bLocal_102 = 0;
	bool bLocal_103 = 0;
	bool bLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	bool bLocal_107 = 0;
	bool bLocal_108 = 0;
	int iLocal_109 = 0;
	bool bLocal_110 = 0;
	bool bLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	var uLocal_115 = 0;
	bool bLocal_116 = 0;
	bool bLocal_117 = 0;
	bool bLocal_118 = 0;
	int iLocal_119 = 0;
	bool bLocal_120 = 0;
	int iLocal_121 = 0;
	bool bLocal_122 = 0;
	bool bLocal_123 = 0;
	bool bLocal_124 = 0;
	bool bLocal_125 = 0;
	bool bLocal_126 = 0;
	bool bLocal_127 = 0;
	bool bLocal_128 = 0;
	bool bLocal_129 = 0;
	bool bLocal_130 = 0;
	bool bLocal_131 = 0;
	float fLocal_132[144] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_133[144] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_134[144] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_135[144] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_136[144] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_137 = 0f;
	float fLocal_138 = 0f;
	float fLocal_139 = 0f;
	float fLocal_140 = 0f;
	float fLocal_141[28] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_142[28] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_143[28] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_144[28] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_145[28] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_146[28] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_147[35] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_148[35] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_149[35] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_150[35] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_151 = 0f;
	float fLocal_152 = 0f;
	float fLocal_153 = 0f;
	float fLocal_154 = 0f;
	float fLocal_155 = 0f;
	float fLocal_156 = 0f;
	float fLocal_157 = 0f;
	float fLocal_158 = 0f;
	float fLocal_159 = 0f;
	float fLocal_160 = 0f;
	float fLocal_161 = 0f;
	float fLocal_162 = 0f;
	float fLocal_163 = 0f;
	float fLocal_164 = 0f;
	float fLocal_165 = 0f;
	float fLocal_166 = 0f;
	float fLocal_167 = 0f;
	float fLocal_168 = 0f;
	float fLocal_169 = 0f;
	float fLocal_170 = 0f;
	float fLocal_171 = 0f;
	int iLocal_172[144] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_173[144] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_174[144] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_175[28] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_176[28] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_177[28] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_178[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_179 = 0;
	int iLocal_180 = 0;
	int iLocal_181 = 0;
	int iLocal_182 = 0;
	int iLocal_183 = 0;
	int iLocal_184 = 0;
	int iLocal_185 = 0;
	int iLocal_186 = 0;
	int iLocal_187 = 0;
	int iLocal_188 = 0;
	int iLocal_189 = 0;
	int iLocal_190 = 0;
	int iLocal_191 = 0;
	int iLocal_192 = 0;
	int iLocal_193 = 0;
	int iLocal_194 = 0;
	int iLocal_195 = 0;
	struct<3> Local_196[144];
	struct<3> Local_197[35];
	struct<3> Local_198[28];
	struct<3> Local_199 = { 0, 0, 0 } ;
	struct<3> Local_200 = { 0, 0, 0 } ;
	struct<3> Local_201 = { 0, 0, 0 } ;
	struct<3> Local_202 = { 0, 0, 0 } ;
	struct<3> Local_203 = { 0, 0, 0 } ;
	struct<3> Local_204 = { 0, 0, 0 } ;
	struct<3> Local_205 = { 0, 0, 0 } ;
	struct<3> Local_206 = { 0, 0, 0 } ;
	struct<3> Local_207 = { 0, 0, 0 } ;
	char cLocal_208[64] = "";
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	int iLocal_217 = 0;
	int iLocal_218[144] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_219[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_220[28] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_221 = 0;
	int iLocal_222 = 0;
	int iLocal_223 = 0;
	int iLocal_224[144] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_225[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_226[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_227[28] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_228[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_229 = 0;
	int iLocal_230 = 0;
	int iLocal_231 = 0;
	var uLocal_232 = 7;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	struct<3> Local_240 = { 0, 0, 0 } ;
	struct<3> Local_241 = { 0, 0, 0 } ;
	float fLocal_242 = 0f;
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
	int iLocal_253 = 0;
	struct<3> Local_254 = { 0, 0, 0 } ;
	struct<3> Local_255 = { 0, 0, 0 } ;
	struct<3> Local_256 = { 0, 0, 0 } ;
	int iLocal_257 = 0;
	int iLocal_258 = 0;
	float fLocal_259 = 0f;
	char* sLocal_260 = NULL;
	int iLocal_261 = 0;
	int iLocal_262 = 0;
	int iLocal_263 = 0;
	int iLocal_264 = 0;
	int iLocal_265 = 0;
	int iLocal_266 = 0;
	int iLocal_267 = 0;
	int iLocal_268 = 0;
	int iLocal_269 = 0;
	int iLocal_270 = 0;
	int iLocal_271 = 0;
	int iLocal_272 = 0;
	float fLocal_273[4] = { 0f, 0f, 0f, 0f };
	int iLocal_274 = 0;
	int iLocal_275 = 0;
	int iLocal_276 = 0;
	int iLocal_277 = 0;
	bool bLocal_278 = 0;
	int iLocal_279 = 0;
	int iLocal_280 = 0;
	int iLocal_281 = 0;
	int iLocal_282 = 0;
	struct<14> Local_283 = { 0, 3, 0, 0, 0, 0, 0, 1092616192, 1101004800, 0, 0, 0, 0, 0 } ;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 3;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	int iLocal_295 = 0;
	int iLocal_296 = 0;
	int iLocal_297 = 0;
	int iLocal_298 = 0;
	int iLocal_299 = 0;
	int iLocal_300 = 0;
	int iLocal_301 = 0;
	int iLocal_302 = 0;
	bool bLocal_303 = 0;
	int iLocal_304 = 0;
	int iLocal_305 = 0;
	int iLocal_306 = 0;
	int iLocal_307 = 0;
	int iLocal_308 = 0;
	int iLocal_309 = 0;
	int iLocal_310 = 0;
	int iLocal_311 = 0;
	int iLocal_312 = 0;
	int iLocal_313 = 0;
	int iLocal_314 = 0;
	int iLocal_315 = 0;
	int iLocal_316 = 0;
	int iLocal_317 = 0;
	int iLocal_318 = 0;
	int iLocal_319 = 0;
	int iLocal_320 = 0;
	int iLocal_321 = 0;
	int iLocal_322 = 0;
	int iLocal_323 = 0;
	int iLocal_324 = 0;
	int iLocal_325 = 0;
	int iLocal_326 = 0;
	int iLocal_327 = 0;
	int iLocal_328 = 0;
	struct<3> Local_329 = { 0, 0, 0 } ;
	int iLocal_330 = 0;
	int iLocal_331 = 0;
	int iLocal_332 = 0;
	int iLocal_333 = 0;
	float fLocal_334 = 0f;
	int iLocal_335 = 0;
	float fLocal_336 = 0f;
	int iLocal_337 = 0;
	int iLocal_338 = 0;
	int iLocal_339 = 0;
	int iLocal_340 = 0;
	int iLocal_341 = 0;
	int iLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	int iLocal_345 = 0;
	int iLocal_346 = 0;
	int iLocal_347[144] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_348[28] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_349 = 0;
	int iLocal_350 = 0;
	int iLocal_351 = 0;
	int iLocal_352 = 0;
	int iLocal_353 = 0;
	int iLocal_354 = 0;
	var uLocal_355 = 0;
	int iLocal_356 = 0;
	int iLocal_357 = 0;
	int iLocal_358 = 0;
	int iLocal_359 = 0;
	int iLocal_360 = 0;
	int iLocal_361 = 0;
	int iLocal_362 = 0;
	int iLocal_363 = 0;
	int iLocal_364 = 0;
	int iLocal_365 = 0;
	int iLocal_366 = 0;
	int iLocal_367 = 0;
	int iLocal_368 = 0;
	int iLocal_369 = 0;
	int iLocal_370 = 0;
	int iLocal_371 = 0;
	int iLocal_372 = 0;
	int iLocal_373 = 0;
	int iLocal_374 = 0;
	int iLocal_375 = 0;
	int iLocal_376 = 0;
	int iLocal_377 = 0;
	int iLocal_378 = 0;
	int iLocal_379 = 0;
	int iLocal_380 = 0;
	int iLocal_381 = 0;
	struct<3> Local_382 = { 0, 0, 0 } ;
	float fLocal_383 = 0f;
	struct<3> Local_384 = { 0, 0, 0 } ;
	float fLocal_385 = 0f;
	struct<3> Local_386 = { 0, 0, 0 } ;
	struct<3> Local_387 = { 0, 0, 0 } ;
	float fLocal_388 = 0f;
	float fLocal_389 = 0f;
	float fLocal_390 = 0f;
	float fLocal_391 = 0f;
	float fLocal_392 = 0f;
	float fLocal_393 = 0f;
	float fLocal_394 = 0f;
	float fLocal_395 = 0f;
	float fLocal_396 = 0f;
	float fLocal_397 = 0f;
	float fLocal_398 = 0f;
	float fLocal_399 = 0f;
	float fLocal_400 = 0f;
	float fLocal_401 = 0f;
	float fLocal_402 = 0f;
	int iLocal_403 = 0;
	float fLocal_404 = 0f;
	float fLocal_405 = 0f;
	float fLocal_406 = 0f;
	float fLocal_407 = 0f;
	float fLocal_408 = 0f;
	struct<3> Local_409 = { 0, 0, 0 } ;
	int iLocal_410 = 0;
	int iLocal_411 = 0;
	int iLocal_412 = 0;
	int iLocal_413 = 0;
	int iLocal_414 = 0;
	struct<3> Local_415 = { 0, 0, 0 } ;
	struct<3> Local_416 = { 0, 0, 0 } ;
	struct<3> Local_417 = { 0, 0, 0 } ;
	struct<3> Local_418 = { 0, 0, 0 } ;
	struct<3> Local_419 = { 0, 0, 0 } ;
	struct<3> Local_420 = { 0, 0, 0 } ;
	int iLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = -1;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 1000;
	var uLocal_432 = 1000;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = -1;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 1000;
	var uLocal_444 = 1000;
	var uLocal_445 = 0;
	var uLocal_446 = 16;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	int iLocal_611 = 0;
	int iLocal_612 = 0;
	var uLocal_613 = 800;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	var uLocal_700 = 0;
	var uLocal_701 = 0;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 0;
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	var uLocal_726 = 0;
	var uLocal_727 = 0;
	var uLocal_728 = 0;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	var uLocal_751 = 0;
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	var uLocal_764 = 0;
	var uLocal_765 = 0;
	var uLocal_766 = 0;
	var uLocal_767 = 0;
	var uLocal_768 = 0;
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	var uLocal_771 = 0;
	var uLocal_772 = 0;
	var uLocal_773 = 0;
	var uLocal_774 = 0;
	var uLocal_775 = 0;
	var uLocal_776 = 0;
	var uLocal_777 = 0;
	var uLocal_778 = 0;
	var uLocal_779 = 0;
	var uLocal_780 = 0;
	var uLocal_781 = 0;
	var uLocal_782 = 0;
	var uLocal_783 = 0;
	var uLocal_784 = 0;
	var uLocal_785 = 0;
	var uLocal_786 = 0;
	var uLocal_787 = 0;
	var uLocal_788 = 0;
	var uLocal_789 = 0;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	var uLocal_792 = 0;
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	var uLocal_795 = 0;
	var uLocal_796 = 0;
	var uLocal_797 = 0;
	var uLocal_798 = 0;
	var uLocal_799 = 0;
	var uLocal_800 = 0;
	var uLocal_801 = 0;
	var uLocal_802 = 0;
	var uLocal_803 = 0;
	var uLocal_804 = 0;
	var uLocal_805 = 0;
	var uLocal_806 = 0;
	var uLocal_807 = 0;
	var uLocal_808 = 0;
	var uLocal_809 = 0;
	var uLocal_810 = 0;
	var uLocal_811 = 0;
	var uLocal_812 = 0;
	var uLocal_813 = 0;
	var uLocal_814 = 0;
	var uLocal_815 = 0;
	var uLocal_816 = 0;
	var uLocal_817 = 0;
	var uLocal_818 = 0;
	var uLocal_819 = 0;
	var uLocal_820 = 0;
	var uLocal_821 = 0;
	var uLocal_822 = 0;
	var uLocal_823 = 0;
	var uLocal_824 = 0;
	var uLocal_825 = 0;
	var uLocal_826 = 0;
	var uLocal_827 = 0;
	var uLocal_828 = 0;
	var uLocal_829 = 0;
	var uLocal_830 = 0;
	var uLocal_831 = 0;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
	var uLocal_834 = 0;
	var uLocal_835 = 0;
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	var uLocal_839 = 0;
	var uLocal_840 = 0;
	var uLocal_841 = 0;
	var uLocal_842 = 0;
	var uLocal_843 = 0;
	var uLocal_844 = 0;
	var uLocal_845 = 0;
	var uLocal_846 = 0;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	var uLocal_849 = 0;
	var uLocal_850 = 0;
	var uLocal_851 = 0;
	var uLocal_852 = 0;
	var uLocal_853 = 0;
	var uLocal_854 = 0;
	var uLocal_855 = 0;
	var uLocal_856 = 0;
	var uLocal_857 = 0;
	var uLocal_858 = 0;
	var uLocal_859 = 0;
	var uLocal_860 = 0;
	var uLocal_861 = 0;
	var uLocal_862 = 0;
	var uLocal_863 = 0;
	var uLocal_864 = 0;
	var uLocal_865 = 0;
	var uLocal_866 = 0;
	var uLocal_867 = 0;
	var uLocal_868 = 0;
	var uLocal_869 = 0;
	var uLocal_870 = 0;
	var uLocal_871 = 0;
	var uLocal_872 = 0;
	var uLocal_873 = 0;
	var uLocal_874 = 0;
	var uLocal_875 = 0;
	var uLocal_876 = 0;
	var uLocal_877 = 0;
	var uLocal_878 = 0;
	var uLocal_879 = 0;
	var uLocal_880 = 0;
	var uLocal_881 = 0;
	var uLocal_882 = 0;
	var uLocal_883 = 0;
	var uLocal_884 = 0;
	var uLocal_885 = 0;
	var uLocal_886 = 0;
	var uLocal_887 = 0;
	var uLocal_888 = 0;
	var uLocal_889 = 0;
	var uLocal_890 = 0;
	var uLocal_891 = 0;
	var uLocal_892 = 0;
	var uLocal_893 = 0;
	var uLocal_894 = 0;
	var uLocal_895 = 0;
	var uLocal_896 = 0;
	var uLocal_897 = 0;
	var uLocal_898 = 0;
	var uLocal_899 = 0;
	var uLocal_900 = 0;
	var uLocal_901 = 0;
	var uLocal_902 = 0;
	var uLocal_903 = 0;
	var uLocal_904 = 0;
	var uLocal_905 = 0;
	var uLocal_906 = 0;
	var uLocal_907 = 0;
	var uLocal_908 = 0;
	var uLocal_909 = 0;
	var uLocal_910 = 0;
	var uLocal_911 = 0;
	var uLocal_912 = 0;
	var uLocal_913 = 0;
	var uLocal_914 = 0;
	var uLocal_915 = 0;
	var uLocal_916 = 0;
	var uLocal_917 = 0;
	var uLocal_918 = 0;
	var uLocal_919 = 0;
	var uLocal_920 = 0;
	var uLocal_921 = 0;
	var uLocal_922 = 0;
	var uLocal_923 = 0;
	var uLocal_924 = 0;
	var uLocal_925 = 0;
	var uLocal_926 = 0;
	var uLocal_927 = 0;
	var uLocal_928 = 0;
	var uLocal_929 = 0;
	var uLocal_930 = 0;
	var uLocal_931 = 0;
	var uLocal_932 = 0;
	var uLocal_933 = 0;
	var uLocal_934 = 0;
	var uLocal_935 = 0;
	var uLocal_936 = 0;
	var uLocal_937 = 0;
	var uLocal_938 = 0;
	var uLocal_939 = 0;
	var uLocal_940 = 0;
	var uLocal_941 = 0;
	var uLocal_942 = 0;
	var uLocal_943 = 0;
	var uLocal_944 = 0;
	var uLocal_945 = 0;
	var uLocal_946 = 0;
	var uLocal_947 = 0;
	var uLocal_948 = 0;
	var uLocal_949 = 0;
	var uLocal_950 = 0;
	var uLocal_951 = 0;
	var uLocal_952 = 0;
	var uLocal_953 = 0;
	var uLocal_954 = 0;
	var uLocal_955 = 0;
	var uLocal_956 = 0;
	var uLocal_957 = 0;
	var uLocal_958 = 0;
	var uLocal_959 = 0;
	var uLocal_960 = 0;
	var uLocal_961 = 0;
	var uLocal_962 = 0;
	var uLocal_963 = 0;
	var uLocal_964 = 0;
	var uLocal_965 = 0;
	var uLocal_966 = 0;
	var uLocal_967 = 0;
	var uLocal_968 = 0;
	var uLocal_969 = 0;
	var uLocal_970 = 0;
	var uLocal_971 = 0;
	var uLocal_972 = 0;
	var uLocal_973 = 0;
	var uLocal_974 = 0;
	var uLocal_975 = 0;
	var uLocal_976 = 0;
	var uLocal_977 = 0;
	var uLocal_978 = 0;
	var uLocal_979 = 0;
	var uLocal_980 = 0;
	var uLocal_981 = 0;
	var uLocal_982 = 0;
	var uLocal_983 = 0;
	var uLocal_984 = 0;
	var uLocal_985 = 0;
	var uLocal_986 = 0;
	var uLocal_987 = 0;
	var uLocal_988 = 0;
	var uLocal_989 = 0;
	var uLocal_990 = 0;
	var uLocal_991 = 0;
	var uLocal_992 = 0;
	var uLocal_993 = 0;
	var uLocal_994 = 0;
	var uLocal_995 = 0;
	var uLocal_996 = 0;
	var uLocal_997 = 0;
	var uLocal_998 = 0;
	var uLocal_999 = 0;
	var uLocal_1000 = 0;
	var uLocal_1001 = 0;
	var uLocal_1002 = 0;
	var uLocal_1003 = 0;
	var uLocal_1004 = 0;
	var uLocal_1005 = 0;
	var uLocal_1006 = 0;
	var uLocal_1007 = 0;
	var uLocal_1008 = 0;
	var uLocal_1009 = 0;
	var uLocal_1010 = 0;
	var uLocal_1011 = 0;
	var uLocal_1012 = 0;
	var uLocal_1013 = 0;
	var uLocal_1014 = 0;
	var uLocal_1015 = 0;
	var uLocal_1016 = 0;
	var uLocal_1017 = 0;
	var uLocal_1018 = 0;
	var uLocal_1019 = 0;
	var uLocal_1020 = 0;
	var uLocal_1021 = 0;
	var uLocal_1022 = 0;
	var uLocal_1023 = 0;
	var uLocal_1024 = 0;
	var uLocal_1025 = 0;
	var uLocal_1026 = 0;
	var uLocal_1027 = 0;
	var uLocal_1028 = 0;
	var uLocal_1029 = 0;
	var uLocal_1030 = 0;
	var uLocal_1031 = 0;
	var uLocal_1032 = 0;
	var uLocal_1033 = 0;
	var uLocal_1034 = 0;
	var uLocal_1035 = 0;
	var uLocal_1036 = 0;
	var uLocal_1037 = 0;
	var uLocal_1038 = 0;
	var uLocal_1039 = 0;
	var uLocal_1040 = 0;
	var uLocal_1041 = 0;
	var uLocal_1042 = 0;
	var uLocal_1043 = 0;
	var uLocal_1044 = 0;
	var uLocal_1045 = 0;
	var uLocal_1046 = 0;
	var uLocal_1047 = 0;
	var uLocal_1048 = 0;
	var uLocal_1049 = 0;
	var uLocal_1050 = 0;
	var uLocal_1051 = 0;
	var uLocal_1052 = 0;
	var uLocal_1053 = 0;
	var uLocal_1054 = 0;
	var uLocal_1055 = 0;
	var uLocal_1056 = 0;
	var uLocal_1057 = 0;
	var uLocal_1058 = 0;
	var uLocal_1059 = 0;
	var uLocal_1060 = 0;
	var uLocal_1061 = 0;
	var uLocal_1062 = 0;
	var uLocal_1063 = 0;
	var uLocal_1064 = 0;
	var uLocal_1065 = 0;
	var uLocal_1066 = 0;
	var uLocal_1067 = 0;
	var uLocal_1068 = 0;
	var uLocal_1069 = 0;
	var uLocal_1070 = 0;
	var uLocal_1071 = 0;
	var uLocal_1072 = 0;
	var uLocal_1073 = 0;
	var uLocal_1074 = 0;
	var uLocal_1075 = 0;
	var uLocal_1076 = 0;
	var uLocal_1077 = 0;
	var uLocal_1078 = 0;
	var uLocal_1079 = 0;
	var uLocal_1080 = 0;
	var uLocal_1081 = 0;
	var uLocal_1082 = 0;
	var uLocal_1083 = 0;
	var uLocal_1084 = 0;
	var uLocal_1085 = 0;
	var uLocal_1086 = 0;
	var uLocal_1087 = 0;
	var uLocal_1088 = 0;
	var uLocal_1089 = 0;
	var uLocal_1090 = 0;
	var uLocal_1091 = 0;
	var uLocal_1092 = 0;
	var uLocal_1093 = 0;
	var uLocal_1094 = 0;
	var uLocal_1095 = 0;
	var uLocal_1096 = 0;
	var uLocal_1097 = 0;
	var uLocal_1098 = 0;
	var uLocal_1099 = 0;
	var uLocal_1100 = 0;
	var uLocal_1101 = 0;
	var uLocal_1102 = 0;
	var uLocal_1103 = 0;
	var uLocal_1104 = 0;
	var uLocal_1105 = 0;
	var uLocal_1106 = 0;
	var uLocal_1107 = 0;
	var uLocal_1108 = 0;
	var uLocal_1109 = 0;
	var uLocal_1110 = 0;
	var uLocal_1111 = 0;
	var uLocal_1112 = 0;
	var uLocal_1113 = 0;
	var uLocal_1114 = 0;
	var uLocal_1115 = 0;
	var uLocal_1116 = 0;
	var uLocal_1117 = 0;
	var uLocal_1118 = 0;
	var uLocal_1119 = 0;
	var uLocal_1120 = 0;
	var uLocal_1121 = 0;
	var uLocal_1122 = 0;
	var uLocal_1123 = 0;
	var uLocal_1124 = 0;
	var uLocal_1125 = 0;
	var uLocal_1126 = 0;
	var uLocal_1127 = 0;
	var uLocal_1128 = 0;
	var uLocal_1129 = 0;
	var uLocal_1130 = 0;
	var uLocal_1131 = 0;
	var uLocal_1132 = 0;
	var uLocal_1133 = 0;
	var uLocal_1134 = 0;
	var uLocal_1135 = 0;
	var uLocal_1136 = 0;
	var uLocal_1137 = 0;
	var uLocal_1138 = 0;
	var uLocal_1139 = 0;
	var uLocal_1140 = 0;
	var uLocal_1141 = 0;
	var uLocal_1142 = 0;
	var uLocal_1143 = 0;
	var uLocal_1144 = 0;
	var uLocal_1145 = 0;
	var uLocal_1146 = 0;
	var uLocal_1147 = 0;
	var uLocal_1148 = 0;
	var uLocal_1149 = 0;
	var uLocal_1150 = 0;
	var uLocal_1151 = 0;
	var uLocal_1152 = 0;
	var uLocal_1153 = 0;
	var uLocal_1154 = 0;
	var uLocal_1155 = 0;
	var uLocal_1156 = 0;
	var uLocal_1157 = 0;
	var uLocal_1158 = 0;
	var uLocal_1159 = 0;
	var uLocal_1160 = 0;
	var uLocal_1161 = 0;
	var uLocal_1162 = 0;
	var uLocal_1163 = 0;
	var uLocal_1164 = 0;
	var uLocal_1165 = 0;
	var uLocal_1166 = 0;
	var uLocal_1167 = 0;
	var uLocal_1168 = 0;
	var uLocal_1169 = 0;
	var uLocal_1170 = 0;
	var uLocal_1171 = 0;
	var uLocal_1172 = 0;
	var uLocal_1173 = 0;
	var uLocal_1174 = 0;
	var uLocal_1175 = 0;
	var uLocal_1176 = 0;
	var uLocal_1177 = 0;
	var uLocal_1178 = 0;
	var uLocal_1179 = 0;
	var uLocal_1180 = 0;
	var uLocal_1181 = 0;
	var uLocal_1182 = 0;
	var uLocal_1183 = 0;
	var uLocal_1184 = 0;
	var uLocal_1185 = 0;
	var uLocal_1186 = 0;
	var uLocal_1187 = 0;
	var uLocal_1188 = 0;
	var uLocal_1189 = 0;
	var uLocal_1190 = 0;
	var uLocal_1191 = 0;
	var uLocal_1192 = 0;
	var uLocal_1193 = 0;
	var uLocal_1194 = 0;
	var uLocal_1195 = 0;
	var uLocal_1196 = 0;
	var uLocal_1197 = 0;
	var uLocal_1198 = 0;
	var uLocal_1199 = 0;
	var uLocal_1200 = 0;
	var uLocal_1201 = 0;
	var uLocal_1202 = 0;
	var uLocal_1203 = 0;
	var uLocal_1204 = 0;
	var uLocal_1205 = 0;
	var uLocal_1206 = 0;
	var uLocal_1207 = 0;
	var uLocal_1208 = 0;
	var uLocal_1209 = 0;
	var uLocal_1210 = 0;
	var uLocal_1211 = 0;
	var uLocal_1212 = 0;
	var uLocal_1213 = 0;
	var uLocal_1214 = 0;
	var uLocal_1215 = 0;
	var uLocal_1216 = 0;
	var uLocal_1217 = 0;
	var uLocal_1218 = 0;
	var uLocal_1219 = 0;
	var uLocal_1220 = 0;
	var uLocal_1221 = 0;
	var uLocal_1222 = 0;
	var uLocal_1223 = 0;
	var uLocal_1224 = 0;
	var uLocal_1225 = 0;
	var uLocal_1226 = 0;
	var uLocal_1227 = 0;
	var uLocal_1228 = 0;
	var uLocal_1229 = 0;
	var uLocal_1230 = 0;
	var uLocal_1231 = 0;
	var uLocal_1232 = 0;
	var uLocal_1233 = 0;
	var uLocal_1234 = 0;
	var uLocal_1235 = 0;
	var uLocal_1236 = 0;
	var uLocal_1237 = 0;
	var uLocal_1238 = 0;
	var uLocal_1239 = 0;
	var uLocal_1240 = 0;
	var uLocal_1241 = 0;
	var uLocal_1242 = 0;
	var uLocal_1243 = 0;
	var uLocal_1244 = 0;
	var uLocal_1245 = 0;
	var uLocal_1246 = 0;
	var uLocal_1247 = 0;
	var uLocal_1248 = 0;
	var uLocal_1249 = 0;
	var uLocal_1250 = 0;
	var uLocal_1251 = 0;
	var uLocal_1252 = 0;
	var uLocal_1253 = 0;
	var uLocal_1254 = 0;
	var uLocal_1255 = 0;
	var uLocal_1256 = 0;
	var uLocal_1257 = 0;
	var uLocal_1258 = 0;
	var uLocal_1259 = 0;
	var uLocal_1260 = 0;
	var uLocal_1261 = 0;
	var uLocal_1262 = 0;
	var uLocal_1263 = 0;
	var uLocal_1264 = 0;
	var uLocal_1265 = 0;
	var uLocal_1266 = 0;
	var uLocal_1267 = 0;
	var uLocal_1268 = 0;
	var uLocal_1269 = 0;
	var uLocal_1270 = 0;
	var uLocal_1271 = 0;
	var uLocal_1272 = 0;
	var uLocal_1273 = 0;
	var uLocal_1274 = 0;
	var uLocal_1275 = 0;
	var uLocal_1276 = 0;
	var uLocal_1277 = 0;
	var uLocal_1278 = 0;
	var uLocal_1279 = 0;
	var uLocal_1280 = 0;
	var uLocal_1281 = 0;
	var uLocal_1282 = 0;
	var uLocal_1283 = 0;
	var uLocal_1284 = 0;
	var uLocal_1285 = 0;
	var uLocal_1286 = 0;
	var uLocal_1287 = 0;
	var uLocal_1288 = 0;
	var uLocal_1289 = 0;
	var uLocal_1290 = 0;
	var uLocal_1291 = 0;
	var uLocal_1292 = 0;
	var uLocal_1293 = 0;
	var uLocal_1294 = 0;
	var uLocal_1295 = 0;
	var uLocal_1296 = 0;
	var uLocal_1297 = 0;
	var uLocal_1298 = 0;
	var uLocal_1299 = 0;
	var uLocal_1300 = 0;
	var uLocal_1301 = 0;
	var uLocal_1302 = 0;
	var uLocal_1303 = 0;
	var uLocal_1304 = 0;
	var uLocal_1305 = 0;
	var uLocal_1306 = 0;
	var uLocal_1307 = 0;
	var uLocal_1308 = 0;
	var uLocal_1309 = 0;
	var uLocal_1310 = 0;
	var uLocal_1311 = 0;
	var uLocal_1312 = 0;
	var uLocal_1313 = 0;
	var uLocal_1314 = 0;
	var uLocal_1315 = 0;
	var uLocal_1316 = 0;
	var uLocal_1317 = 0;
	var uLocal_1318 = 0;
	var uLocal_1319 = 0;
	var uLocal_1320 = 0;
	var uLocal_1321 = 0;
	var uLocal_1322 = 0;
	var uLocal_1323 = 0;
	var uLocal_1324 = 0;
	var uLocal_1325 = 0;
	var uLocal_1326 = 0;
	var uLocal_1327 = 0;
	var uLocal_1328 = 0;
	var uLocal_1329 = 0;
	var uLocal_1330 = 0;
	var uLocal_1331 = 0;
	var uLocal_1332 = 0;
	var uLocal_1333 = 0;
	var uLocal_1334 = 0;
	var uLocal_1335 = 0;
	var uLocal_1336 = 0;
	var uLocal_1337 = 0;
	var uLocal_1338 = 0;
	var uLocal_1339 = 0;
	var uLocal_1340 = 0;
	var uLocal_1341 = 0;
	var uLocal_1342 = 0;
	var uLocal_1343 = 0;
	var uLocal_1344 = 0;
	var uLocal_1345 = 0;
	var uLocal_1346 = 0;
	var uLocal_1347 = 0;
	var uLocal_1348 = 0;
	var uLocal_1349 = 0;
	var uLocal_1350 = 0;
	var uLocal_1351 = 0;
	var uLocal_1352 = 0;
	var uLocal_1353 = 0;
	var uLocal_1354 = 0;
	var uLocal_1355 = 0;
	var uLocal_1356 = 0;
	var uLocal_1357 = 0;
	var uLocal_1358 = 0;
	var uLocal_1359 = 0;
	var uLocal_1360 = 0;
	var uLocal_1361 = 0;
	var uLocal_1362 = 0;
	var uLocal_1363 = 0;
	var uLocal_1364 = 0;
	var uLocal_1365 = 0;
	var uLocal_1366 = 0;
	var uLocal_1367 = 0;
	var uLocal_1368 = 0;
	var uLocal_1369 = 0;
	var uLocal_1370 = 0;
	var uLocal_1371 = 0;
	var uLocal_1372 = 0;
	var uLocal_1373 = 0;
	var uLocal_1374 = 0;
	var uLocal_1375 = 0;
	var uLocal_1376 = 0;
	var uLocal_1377 = 0;
	var uLocal_1378 = 0;
	var uLocal_1379 = 0;
	var uLocal_1380 = 0;
	var uLocal_1381 = 0;
	var uLocal_1382 = 0;
	var uLocal_1383 = 0;
	var uLocal_1384 = 0;
	var uLocal_1385 = 0;
	var uLocal_1386 = 0;
	var uLocal_1387 = 0;
	var uLocal_1388 = 0;
	var uLocal_1389 = 0;
	var uLocal_1390 = 0;
	var uLocal_1391 = 0;
	var uLocal_1392 = 0;
	var uLocal_1393 = 0;
	var uLocal_1394 = 0;
	var uLocal_1395 = 0;
	var uLocal_1396 = 0;
	var uLocal_1397 = 0;
	var uLocal_1398 = 0;
	var uLocal_1399 = 0;
	var uLocal_1400 = 0;
	var uLocal_1401 = 0;
	var uLocal_1402 = 0;
	var uLocal_1403 = 0;
	var uLocal_1404 = 0;
	var uLocal_1405 = 0;
	var uLocal_1406 = 0;
	var uLocal_1407 = 0;
	var uLocal_1408 = 0;
	var uLocal_1409 = 0;
	var uLocal_1410 = 0;
	var uLocal_1411 = 0;
	var uLocal_1412 = 0;
	var uLocal_1413 = 0;
	var uLocal_1414 = 0;
	var uLocal_1415 = 0;
	var uLocal_1416 = 0;
	var uLocal_1417 = 0;
	var uLocal_1418 = 0;
	var uLocal_1419 = 0;
	var uLocal_1420 = 0;
	var uLocal_1421 = 0;
	var uLocal_1422 = 0;
	var uLocal_1423 = 0;
	var uLocal_1424 = 0;
	var uLocal_1425 = 0;
	var uLocal_1426 = 0;
	var uLocal_1427 = 0;
	var uLocal_1428 = 0;
	var uLocal_1429 = 0;
	var uLocal_1430 = 0;
	var uLocal_1431 = 0;
	var uLocal_1432 = 0;
	var uLocal_1433 = 0;
	var uLocal_1434 = 0;
	var uLocal_1435 = 0;
	var uLocal_1436 = 0;
	var uLocal_1437 = 0;
	var uLocal_1438 = 0;
	var uLocal_1439 = 0;
	var uLocal_1440 = 0;
	var uLocal_1441 = 0;
	var uLocal_1442 = 0;
	var uLocal_1443 = 0;
	var uLocal_1444 = 0;
	var uLocal_1445 = 0;
	var uLocal_1446 = 0;
	var uLocal_1447 = 0;
	var uLocal_1448 = 0;
	var uLocal_1449 = 0;
	var uLocal_1450 = 0;
	var uLocal_1451 = 0;
	var uLocal_1452 = 0;
	var uLocal_1453 = 0;
	var uLocal_1454 = 0;
	var uLocal_1455 = 0;
	var uLocal_1456 = 0;
	var uLocal_1457 = 0;
	var uLocal_1458 = 0;
	var uLocal_1459 = 0;
	var uLocal_1460 = 0;
	var uLocal_1461 = 0;
	var uLocal_1462 = 0;
	var uLocal_1463 = 0;
	var uLocal_1464 = 0;
	var uLocal_1465 = 0;
	var uLocal_1466 = 0;
	var uLocal_1467 = 0;
	var uLocal_1468 = 0;
	var uLocal_1469 = 0;
	var uLocal_1470 = 0;
	var uLocal_1471 = 0;
	var uLocal_1472 = 0;
	var uLocal_1473 = 0;
	var uLocal_1474 = 0;
	var uLocal_1475 = 0;
	var uLocal_1476 = 0;
	var uLocal_1477 = 0;
	var uLocal_1478 = 0;
	var uLocal_1479 = 0;
	var uLocal_1480 = 0;
	var uLocal_1481 = 0;
	var uLocal_1482 = 0;
	var uLocal_1483 = 0;
	var uLocal_1484 = 0;
	var uLocal_1485 = 0;
	var uLocal_1486 = 0;
	var uLocal_1487 = 0;
	var uLocal_1488 = 0;
	var uLocal_1489 = 0;
	var uLocal_1490 = 0;
	var uLocal_1491 = 0;
	var uLocal_1492 = 0;
	var uLocal_1493 = 0;
	var uLocal_1494 = 0;
	var uLocal_1495 = 0;
	var uLocal_1496 = 0;
	var uLocal_1497 = 0;
	var uLocal_1498 = 0;
	var uLocal_1499 = 0;
	var uLocal_1500 = 0;
	var uLocal_1501 = 0;
	var uLocal_1502 = 0;
	var uLocal_1503 = 0;
	var uLocal_1504 = 0;
	var uLocal_1505 = 0;
	var uLocal_1506 = 0;
	var uLocal_1507 = 0;
	var uLocal_1508 = 0;
	var uLocal_1509 = 0;
	var uLocal_1510 = 0;
	var uLocal_1511 = 0;
	var uLocal_1512 = 0;
	var uLocal_1513 = 0;
	var uLocal_1514 = 0;
	var uLocal_1515 = 0;
	var uLocal_1516 = 0;
	var uLocal_1517 = 0;
	var uLocal_1518 = 0;
	var uLocal_1519 = 0;
	var uLocal_1520 = 0;
	var uLocal_1521 = 0;
	var uLocal_1522 = 0;
	var uLocal_1523 = 0;
	var uLocal_1524 = 0;
	var uLocal_1525 = 0;
	var uLocal_1526 = 0;
	var uLocal_1527 = 0;
	var uLocal_1528 = 0;
	var uLocal_1529 = 0;
	var uLocal_1530 = 0;
	var uLocal_1531 = 0;
	var uLocal_1532 = 0;
	var uLocal_1533 = 0;
	var uLocal_1534 = 0;
	var uLocal_1535 = 0;
	var uLocal_1536 = 0;
	var uLocal_1537 = 0;
	var uLocal_1538 = 0;
	var uLocal_1539 = 0;
	var uLocal_1540 = 0;
	var uLocal_1541 = 0;
	var uLocal_1542 = 0;
	var uLocal_1543 = 0;
	var uLocal_1544 = 0;
	var uLocal_1545 = 0;
	var uLocal_1546 = 0;
	var uLocal_1547 = 0;
	var uLocal_1548 = 0;
	var uLocal_1549 = 0;
	var uLocal_1550 = 0;
	var uLocal_1551 = 0;
	var uLocal_1552 = 0;
	var uLocal_1553 = 0;
	var uLocal_1554 = 0;
	var uLocal_1555 = 0;
	var uLocal_1556 = 0;
	var uLocal_1557 = 0;
	var uLocal_1558 = 0;
	var uLocal_1559 = 0;
	var uLocal_1560 = 0;
	var uLocal_1561 = 0;
	var uLocal_1562 = 0;
	var uLocal_1563 = 0;
	var uLocal_1564 = 0;
	var uLocal_1565 = 0;
	var uLocal_1566 = 0;
	var uLocal_1567 = 0;
	var uLocal_1568 = 0;
	var uLocal_1569 = 0;
	var uLocal_1570 = 0;
	var uLocal_1571 = 0;
	var uLocal_1572 = 0;
	var uLocal_1573 = 0;
	var uLocal_1574 = 0;
	var uLocal_1575 = 0;
	var uLocal_1576 = 0;
	var uLocal_1577 = 0;
	var uLocal_1578 = 0;
	var uLocal_1579 = 0;
	var uLocal_1580 = 0;
	var uLocal_1581 = 0;
	var uLocal_1582 = 0;
	var uLocal_1583 = 0;
	var uLocal_1584 = 0;
	var uLocal_1585 = 0;
	var uLocal_1586 = 0;
	var uLocal_1587 = 0;
	var uLocal_1588 = 0;
	var uLocal_1589 = 0;
	var uLocal_1590 = 0;
	var uLocal_1591 = 0;
	var uLocal_1592 = 0;
	var uLocal_1593 = 0;
	var uLocal_1594 = 0;
	var uLocal_1595 = 0;
	var uLocal_1596 = 0;
	var uLocal_1597 = 0;
	var uLocal_1598 = 0;
	var uLocal_1599 = 0;
	var uLocal_1600 = 0;
	var uLocal_1601 = 0;
	var uLocal_1602 = 0;
	var uLocal_1603 = 0;
	var uLocal_1604 = 0;
	var uLocal_1605 = 0;
	var uLocal_1606 = 0;
	var uLocal_1607 = 0;
	var uLocal_1608 = 0;
	var uLocal_1609 = 0;
	var uLocal_1610 = 0;
	var uLocal_1611 = 0;
	var uLocal_1612 = 0;
	var uLocal_1613 = 0;
	var uLocal_1614 = 0;
	var uLocal_1615 = 0;
	var uLocal_1616 = 0;
	var uLocal_1617 = 0;
	var uLocal_1618 = 0;
	var uLocal_1619 = 0;
	var uLocal_1620 = 0;
	var uLocal_1621 = 0;
	var uLocal_1622 = 0;
	var uLocal_1623 = 0;
	var uLocal_1624 = 0;
	var uLocal_1625 = 0;
	var uLocal_1626 = 0;
	var uLocal_1627 = 0;
	var uLocal_1628 = 0;
	var uLocal_1629 = 0;
	var uLocal_1630 = 0;
	var uLocal_1631 = 0;
	var uLocal_1632 = 0;
	var uLocal_1633 = 0;
	var uLocal_1634 = 0;
	var uLocal_1635 = 0;
	var uLocal_1636 = 0;
	var uLocal_1637 = 0;
	var uLocal_1638 = 0;
	var uLocal_1639 = 0;
	var uLocal_1640 = 0;
	var uLocal_1641 = 0;
	var uLocal_1642 = 0;
	var uLocal_1643 = 0;
	var uLocal_1644 = 0;
	var uLocal_1645 = 0;
	var uLocal_1646 = 0;
	var uLocal_1647 = 0;
	var uLocal_1648 = 0;
	var uLocal_1649 = 0;
	var uLocal_1650 = 0;
	var uLocal_1651 = 0;
	var uLocal_1652 = 0;
	var uLocal_1653 = 0;
	var uLocal_1654 = 0;
	var uLocal_1655 = 0;
	var uLocal_1656 = 0;
	var uLocal_1657 = 0;
	var uLocal_1658 = 0;
	var uLocal_1659 = 0;
	var uLocal_1660 = 0;
	var uLocal_1661 = 0;
	var uLocal_1662 = 0;
	var uLocal_1663 = 0;
	var uLocal_1664 = 0;
	var uLocal_1665 = 0;
	var uLocal_1666 = 0;
	var uLocal_1667 = 0;
	var uLocal_1668 = 0;
	var uLocal_1669 = 0;
	var uLocal_1670 = 0;
	var uLocal_1671 = 0;
	var uLocal_1672 = 0;
	var uLocal_1673 = 0;
	var uLocal_1674 = 0;
	var uLocal_1675 = 0;
	var uLocal_1676 = 0;
	var uLocal_1677 = 0;
	var uLocal_1678 = 0;
	var uLocal_1679 = 0;
	var uLocal_1680 = 0;
	var uLocal_1681 = 0;
	var uLocal_1682 = 0;
	var uLocal_1683 = 0;
	var uLocal_1684 = 0;
	var uLocal_1685 = 0;
	var uLocal_1686 = 0;
	var uLocal_1687 = 0;
	var uLocal_1688 = 0;
	var uLocal_1689 = 0;
	var uLocal_1690 = 0;
	var uLocal_1691 = 0;
	var uLocal_1692 = 0;
	var uLocal_1693 = 0;
	var uLocal_1694 = 0;
	var uLocal_1695 = 0;
	var uLocal_1696 = 0;
	var uLocal_1697 = 0;
	var uLocal_1698 = 0;
	var uLocal_1699 = 0;
	var uLocal_1700 = 0;
	var uLocal_1701 = 0;
	var uLocal_1702 = 0;
	var uLocal_1703 = 0;
	var uLocal_1704 = 0;
	var uLocal_1705 = 0;
	var uLocal_1706 = 0;
	var uLocal_1707 = 0;
	var uLocal_1708 = 0;
	var uLocal_1709 = 0;
	var uLocal_1710 = 0;
	var uLocal_1711 = 0;
	var uLocal_1712 = 0;
	var uLocal_1713 = 0;
	var uLocal_1714 = 0;
	var uLocal_1715 = 0;
	var uLocal_1716 = 0;
	var uLocal_1717 = 0;
	var uLocal_1718 = 0;
	var uLocal_1719 = 0;
	var uLocal_1720 = 0;
	var uLocal_1721 = 0;
	var uLocal_1722 = 0;
	var uLocal_1723 = 0;
	var uLocal_1724 = 0;
	var uLocal_1725 = 0;
	var uLocal_1726 = 0;
	var uLocal_1727 = 0;
	var uLocal_1728 = 0;
	var uLocal_1729 = 0;
	var uLocal_1730 = 0;
	var uLocal_1731 = 0;
	var uLocal_1732 = 0;
	var uLocal_1733 = 0;
	var uLocal_1734 = 0;
	var uLocal_1735 = 0;
	var uLocal_1736 = 0;
	var uLocal_1737 = 0;
	var uLocal_1738 = 0;
	var uLocal_1739 = 0;
	var uLocal_1740 = 0;
	var uLocal_1741 = 0;
	var uLocal_1742 = 0;
	var uLocal_1743 = 0;
	var uLocal_1744 = 0;
	var uLocal_1745 = 0;
	var uLocal_1746 = 0;
	var uLocal_1747 = 0;
	var uLocal_1748 = 0;
	var uLocal_1749 = 0;
	var uLocal_1750 = 0;
	var uLocal_1751 = 0;
	var uLocal_1752 = 0;
	var uLocal_1753 = 0;
	var uLocal_1754 = 0;
	var uLocal_1755 = 0;
	var uLocal_1756 = 0;
	var uLocal_1757 = 0;
	var uLocal_1758 = 0;
	var uLocal_1759 = 0;
	var uLocal_1760 = 0;
	var uLocal_1761 = 0;
	var uLocal_1762 = 0;
	var uLocal_1763 = 0;
	var uLocal_1764 = 0;
	var uLocal_1765 = 0;
	var uLocal_1766 = 0;
	var uLocal_1767 = 0;
	var uLocal_1768 = 0;
	var uLocal_1769 = 0;
	var uLocal_1770 = 0;
	var uLocal_1771 = 0;
	var uLocal_1772 = 0;
	var uLocal_1773 = 0;
	var uLocal_1774 = 0;
	var uLocal_1775 = 0;
	var uLocal_1776 = 0;
	var uLocal_1777 = 0;
	var uLocal_1778 = 0;
	var uLocal_1779 = 0;
	var uLocal_1780 = 0;
	var uLocal_1781 = 0;
	var uLocal_1782 = 0;
	var uLocal_1783 = 0;
	var uLocal_1784 = 0;
	var uLocal_1785 = 0;
	var uLocal_1786 = 0;
	var uLocal_1787 = 0;
	var uLocal_1788 = 0;
	var uLocal_1789 = 0;
	var uLocal_1790 = 0;
	var uLocal_1791 = 0;
	var uLocal_1792 = 0;
	var uLocal_1793 = 0;
	var uLocal_1794 = 0;
	var uLocal_1795 = 0;
	var uLocal_1796 = 0;
	var uLocal_1797 = 0;
	var uLocal_1798 = 0;
	var uLocal_1799 = 0;
	var uLocal_1800 = 0;
	var uLocal_1801 = 0;
	var uLocal_1802 = 0;
	var uLocal_1803 = 0;
	var uLocal_1804 = 0;
	var uLocal_1805 = 0;
	var uLocal_1806 = 0;
	var uLocal_1807 = 0;
	var uLocal_1808 = 0;
	var uLocal_1809 = 0;
	var uLocal_1810 = 0;
	var uLocal_1811 = 0;
	var uLocal_1812 = 0;
	var uLocal_1813 = 0;
	var uLocal_1814 = 0;
	var uLocal_1815 = 0;
	var uLocal_1816 = 0;
	var uLocal_1817 = 0;
	var uLocal_1818 = 0;
	var uLocal_1819 = 0;
	var uLocal_1820 = 0;
	var uLocal_1821 = 0;
	var uLocal_1822 = 0;
	var uLocal_1823 = 0;
	var uLocal_1824 = 0;
	var uLocal_1825 = 0;
	var uLocal_1826 = 0;
	var uLocal_1827 = 0;
	var uLocal_1828 = 0;
	var uLocal_1829 = 0;
	var uLocal_1830 = 0;
	var uLocal_1831 = 0;
	var uLocal_1832 = 0;
	var uLocal_1833 = 0;
	var uLocal_1834 = 0;
	var uLocal_1835 = 0;
	var uLocal_1836 = 0;
	var uLocal_1837 = 0;
	var uLocal_1838 = 0;
	var uLocal_1839 = 0;
	var uLocal_1840 = 0;
	var uLocal_1841 = 0;
	var uLocal_1842 = 0;
	var uLocal_1843 = 0;
	var uLocal_1844 = 0;
	var uLocal_1845 = 0;
	var uLocal_1846 = 0;
	var uLocal_1847 = 0;
	var uLocal_1848 = 0;
	var uLocal_1849 = 0;
	var uLocal_1850 = 0;
	var uLocal_1851 = 0;
	var uLocal_1852 = 0;
	var uLocal_1853 = 0;
	var uLocal_1854 = 0;
	var uLocal_1855 = 0;
	var uLocal_1856 = 0;
	var uLocal_1857 = 0;
	var uLocal_1858 = 0;
	var uLocal_1859 = 0;
	var uLocal_1860 = 0;
	var uLocal_1861 = 0;
	var uLocal_1862 = 0;
	var uLocal_1863 = 0;
	var uLocal_1864 = 0;
	var uLocal_1865 = 0;
	var uLocal_1866 = 0;
	var uLocal_1867 = 0;
	var uLocal_1868 = 0;
	var uLocal_1869 = 0;
	var uLocal_1870 = 0;
	var uLocal_1871 = 0;
	var uLocal_1872 = 0;
	var uLocal_1873 = 0;
	var uLocal_1874 = 0;
	var uLocal_1875 = 0;
	var uLocal_1876 = 0;
	var uLocal_1877 = 0;
	var uLocal_1878 = 0;
	var uLocal_1879 = 0;
	var uLocal_1880 = 0;
	var uLocal_1881 = 0;
	var uLocal_1882 = 0;
	var uLocal_1883 = 0;
	var uLocal_1884 = 0;
	var uLocal_1885 = 0;
	var uLocal_1886 = 0;
	var uLocal_1887 = 0;
	var uLocal_1888 = 0;
	var uLocal_1889 = 0;
	var uLocal_1890 = 0;
	var uLocal_1891 = 0;
	var uLocal_1892 = 0;
	var uLocal_1893 = 0;
	var uLocal_1894 = 0;
	var uLocal_1895 = 0;
	var uLocal_1896 = 0;
	var uLocal_1897 = 0;
	var uLocal_1898 = 0;
	var uLocal_1899 = 0;
	var uLocal_1900 = 0;
	var uLocal_1901 = 0;
	var uLocal_1902 = 0;
	var uLocal_1903 = 0;
	var uLocal_1904 = 0;
	var uLocal_1905 = 0;
	var uLocal_1906 = 0;
	var uLocal_1907 = 0;
	var uLocal_1908 = 0;
	var uLocal_1909 = 0;
	var uLocal_1910 = 0;
	var uLocal_1911 = 0;
	var uLocal_1912 = 0;
	var uLocal_1913 = 0;
	var uLocal_1914 = 0;
	var uLocal_1915 = 0;
	var uLocal_1916 = 0;
	var uLocal_1917 = 0;
	var uLocal_1918 = 0;
	var uLocal_1919 = 0;
	var uLocal_1920 = 0;
	var uLocal_1921 = 0;
	var uLocal_1922 = 0;
	var uLocal_1923 = 0;
	var uLocal_1924 = 0;
	var uLocal_1925 = 0;
	var uLocal_1926 = 0;
	var uLocal_1927 = 0;
	var uLocal_1928 = 0;
	var uLocal_1929 = 0;
	var uLocal_1930 = 0;
	var uLocal_1931 = 0;
	var uLocal_1932 = 0;
	var uLocal_1933 = 0;
	var uLocal_1934 = 0;
	var uLocal_1935 = 0;
	var uLocal_1936 = 0;
	var uLocal_1937 = 0;
	var uLocal_1938 = 0;
	var uLocal_1939 = 0;
	var uLocal_1940 = 0;
	var uLocal_1941 = 0;
	var uLocal_1942 = 0;
	var uLocal_1943 = 0;
	var uLocal_1944 = 0;
	var uLocal_1945 = 0;
	var uLocal_1946 = 0;
	var uLocal_1947 = 0;
	var uLocal_1948 = 0;
	var uLocal_1949 = 0;
	var uLocal_1950 = 0;
	var uLocal_1951 = 0;
	var uLocal_1952 = 0;
	var uLocal_1953 = 0;
	var uLocal_1954 = 0;
	var uLocal_1955 = 0;
	var uLocal_1956 = 0;
	var uLocal_1957 = 0;
	var uLocal_1958 = 0;
	var uLocal_1959 = 0;
	var uLocal_1960 = 0;
	var uLocal_1961 = 0;
	var uLocal_1962 = 0;
	var uLocal_1963 = 0;
	var uLocal_1964 = 0;
	var uLocal_1965 = 0;
	var uLocal_1966 = 0;
	var uLocal_1967 = 0;
	var uLocal_1968 = 0;
	var uLocal_1969 = 0;
	var uLocal_1970 = 0;
	var uLocal_1971 = 0;
	var uLocal_1972 = 0;
	var uLocal_1973 = 0;
	var uLocal_1974 = 0;
	var uLocal_1975 = 0;
	var uLocal_1976 = 0;
	var uLocal_1977 = 0;
	var uLocal_1978 = 0;
	var uLocal_1979 = 0;
	var uLocal_1980 = 0;
	var uLocal_1981 = 0;
	var uLocal_1982 = 0;
	var uLocal_1983 = 0;
	var uLocal_1984 = 0;
	var uLocal_1985 = 0;
	var uLocal_1986 = 0;
	var uLocal_1987 = 0;
	var uLocal_1988 = 0;
	var uLocal_1989 = 0;
	var uLocal_1990 = 0;
	var uLocal_1991 = 0;
	var uLocal_1992 = 0;
	var uLocal_1993 = 0;
	var uLocal_1994 = 0;
	var uLocal_1995 = 0;
	var uLocal_1996 = 0;
	var uLocal_1997 = 0;
	var uLocal_1998 = 0;
	var uLocal_1999 = 0;
	var uLocal_2000 = 0;
	var uLocal_2001 = 0;
	var uLocal_2002 = 0;
	var uLocal_2003 = 0;
	var uLocal_2004 = 0;
	var uLocal_2005 = 0;
	var uLocal_2006 = 0;
	var uLocal_2007 = 0;
	var uLocal_2008 = 0;
	var uLocal_2009 = 0;
	var uLocal_2010 = 0;
	var uLocal_2011 = 0;
	var uLocal_2012 = 0;
	var uLocal_2013 = 0;
	var uLocal_2014 = 0;
	var uLocal_2015 = 0;
	var uLocal_2016 = 0;
	var uLocal_2017 = 0;
	var uLocal_2018 = 0;
	var uLocal_2019 = 0;
	var uLocal_2020 = 0;
	var uLocal_2021 = 0;
	var uLocal_2022 = 0;
	var uLocal_2023 = 0;
	var uLocal_2024 = 0;
	var uLocal_2025 = 0;
	var uLocal_2026 = 0;
	var uLocal_2027 = 0;
	var uLocal_2028 = 0;
	var uLocal_2029 = 0;
	var uLocal_2030 = 0;
	var uLocal_2031 = 0;
	var uLocal_2032 = 0;
	var uLocal_2033 = 0;
	var uLocal_2034 = 0;
	var uLocal_2035 = 0;
	var uLocal_2036 = 0;
	var uLocal_2037 = 0;
	var uLocal_2038 = 0;
	var uLocal_2039 = 0;
	var uLocal_2040 = 0;
	var uLocal_2041 = 0;
	var uLocal_2042 = 0;
	var uLocal_2043 = 0;
	var uLocal_2044 = 0;
	var uLocal_2045 = 0;
	var uLocal_2046 = 0;
	var uLocal_2047 = 0;
	var uLocal_2048 = 0;
	var uLocal_2049 = 0;
	var uLocal_2050 = 0;
	var uLocal_2051 = 0;
	var uLocal_2052 = 0;
	var uLocal_2053 = 0;
	var uLocal_2054 = 0;
	var uLocal_2055 = 0;
	var uLocal_2056 = 0;
	var uLocal_2057 = 0;
	var uLocal_2058 = 0;
	var uLocal_2059 = 0;
	var uLocal_2060 = 0;
	var uLocal_2061 = 0;
	var uLocal_2062 = 0;
	var uLocal_2063 = 0;
	var uLocal_2064 = 0;
	var uLocal_2065 = 0;
	var uLocal_2066 = 0;
	var uLocal_2067 = 0;
	var uLocal_2068 = 0;
	var uLocal_2069 = 0;
	var uLocal_2070 = 0;
	var uLocal_2071 = 0;
	var uLocal_2072 = 0;
	var uLocal_2073 = 0;
	var uLocal_2074 = 0;
	var uLocal_2075 = 0;
	var uLocal_2076 = 0;
	var uLocal_2077 = 0;
	var uLocal_2078 = 0;
	var uLocal_2079 = 0;
	var uLocal_2080 = 0;
	var uLocal_2081 = 0;
	var uLocal_2082 = 0;
	var uLocal_2083 = 0;
	var uLocal_2084 = 0;
	var uLocal_2085 = 0;
	var uLocal_2086 = 0;
	var uLocal_2087 = 0;
	var uLocal_2088 = 0;
	var uLocal_2089 = 0;
	var uLocal_2090 = 0;
	var uLocal_2091 = 0;
	var uLocal_2092 = 0;
	var uLocal_2093 = 0;
	var uLocal_2094 = 0;
	var uLocal_2095 = 0;
	var uLocal_2096 = 0;
	var uLocal_2097 = 0;
	var uLocal_2098 = 0;
	var uLocal_2099 = 0;
	var uLocal_2100 = 0;
	var uLocal_2101 = 0;
	var uLocal_2102 = 0;
	var uLocal_2103 = 0;
	var uLocal_2104 = 0;
	var uLocal_2105 = 0;
	var uLocal_2106 = 0;
	var uLocal_2107 = 0;
	var uLocal_2108 = 0;
	var uLocal_2109 = 0;
	var uLocal_2110 = 0;
	var uLocal_2111 = 0;
	var uLocal_2112 = 0;
	var uLocal_2113 = 0;
	var uLocal_2114 = 0;
	var uLocal_2115 = 0;
	var uLocal_2116 = 0;
	var uLocal_2117 = 0;
	var uLocal_2118 = 0;
	var uLocal_2119 = 0;
	var uLocal_2120 = 0;
	var uLocal_2121 = 0;
	var uLocal_2122 = 0;
	var uLocal_2123 = 0;
	var uLocal_2124 = 0;
	var uLocal_2125 = 0;
	var uLocal_2126 = 0;
	var uLocal_2127 = 0;
	var uLocal_2128 = 0;
	var uLocal_2129 = 0;
	var uLocal_2130 = 0;
	var uLocal_2131 = 0;
	var uLocal_2132 = 0;
	var uLocal_2133 = 0;
	var uLocal_2134 = 0;
	var uLocal_2135 = 0;
	var uLocal_2136 = 0;
	var uLocal_2137 = 0;
	var uLocal_2138 = 0;
	var uLocal_2139 = 0;
	var uLocal_2140 = 0;
	var uLocal_2141 = 0;
	var uLocal_2142 = 0;
	var uLocal_2143 = 0;
	var uLocal_2144 = 0;
	var uLocal_2145 = 0;
	var uLocal_2146 = 0;
	var uLocal_2147 = 0;
	var uLocal_2148 = 0;
	var uLocal_2149 = 0;
	var uLocal_2150 = 0;
	var uLocal_2151 = 0;
	var uLocal_2152 = 0;
	var uLocal_2153 = 0;
	var uLocal_2154 = 0;
	var uLocal_2155 = 0;
	var uLocal_2156 = 0;
	var uLocal_2157 = 0;
	var uLocal_2158 = 0;
	var uLocal_2159 = 0;
	var uLocal_2160 = 0;
	var uLocal_2161 = 0;
	var uLocal_2162 = 0;
	var uLocal_2163 = 0;
	var uLocal_2164 = 0;
	var uLocal_2165 = 0;
	var uLocal_2166 = 0;
	var uLocal_2167 = 0;
	var uLocal_2168 = 0;
	var uLocal_2169 = 0;
	var uLocal_2170 = 0;
	var uLocal_2171 = 0;
	var uLocal_2172 = 0;
	var uLocal_2173 = 0;
	var uLocal_2174 = 0;
	var uLocal_2175 = 0;
	var uLocal_2176 = 0;
	var uLocal_2177 = 0;
	var uLocal_2178 = 0;
	var uLocal_2179 = 0;
	var uLocal_2180 = 0;
	var uLocal_2181 = 0;
	var uLocal_2182 = 0;
	var uLocal_2183 = 0;
	var uLocal_2184 = 0;
	var uLocal_2185 = 0;
	var uLocal_2186 = 0;
	var uLocal_2187 = 0;
	var uLocal_2188 = 0;
	var uLocal_2189 = 0;
	var uLocal_2190 = 0;
	var uLocal_2191 = 0;
	var uLocal_2192 = 0;
	var uLocal_2193 = 0;
	var uLocal_2194 = 0;
	var uLocal_2195 = 0;
	var uLocal_2196 = 0;
	var uLocal_2197 = 0;
	var uLocal_2198 = 0;
	var uLocal_2199 = 0;
	var uLocal_2200 = 0;
	var uLocal_2201 = 0;
	var uLocal_2202 = 0;
	var uLocal_2203 = 0;
	var uLocal_2204 = 0;
	var uLocal_2205 = 0;
	var uLocal_2206 = 0;
	var uLocal_2207 = 0;
	var uLocal_2208 = 0;
	var uLocal_2209 = 0;
	var uLocal_2210 = 0;
	var uLocal_2211 = 0;
	var uLocal_2212 = 0;
	var uLocal_2213 = 0;
	var uLocal_2214 = 0;
	var uLocal_2215 = 0;
	var uLocal_2216 = 0;
	var uLocal_2217 = 0;
	var uLocal_2218 = 0;
	var uLocal_2219 = 0;
	var uLocal_2220 = 0;
	var uLocal_2221 = 0;
	var uLocal_2222 = 0;
	var uLocal_2223 = 0;
	var uLocal_2224 = 0;
	var uLocal_2225 = 0;
	var uLocal_2226 = 0;
	var uLocal_2227 = 0;
	var uLocal_2228 = 0;
	var uLocal_2229 = 0;
	var uLocal_2230 = 0;
	var uLocal_2231 = 0;
	var uLocal_2232 = 0;
	var uLocal_2233 = 0;
	var uLocal_2234 = 0;
	var uLocal_2235 = 0;
	var uLocal_2236 = 0;
	var uLocal_2237 = 0;
	var uLocal_2238 = 0;
	var uLocal_2239 = 0;
	var uLocal_2240 = 0;
	var uLocal_2241 = 0;
	var uLocal_2242 = 0;
	var uLocal_2243 = 0;
	var uLocal_2244 = 0;
	var uLocal_2245 = 0;
	var uLocal_2246 = 0;
	var uLocal_2247 = 0;
	var uLocal_2248 = 0;
	var uLocal_2249 = 0;
	var uLocal_2250 = 0;
	var uLocal_2251 = 0;
	var uLocal_2252 = 0;
	var uLocal_2253 = 0;
	var uLocal_2254 = 0;
	var uLocal_2255 = 0;
	var uLocal_2256 = 0;
	var uLocal_2257 = 0;
	var uLocal_2258 = 0;
	var uLocal_2259 = 0;
	var uLocal_2260 = 0;
	var uLocal_2261 = 0;
	var uLocal_2262 = 0;
	var uLocal_2263 = 0;
	var uLocal_2264 = 0;
	var uLocal_2265 = 0;
	var uLocal_2266 = 0;
	var uLocal_2267 = 0;
	var uLocal_2268 = 0;
	var uLocal_2269 = 0;
	var uLocal_2270 = 0;
	var uLocal_2271 = 0;
	var uLocal_2272 = 0;
	var uLocal_2273 = 0;
	var uLocal_2274 = 0;
	var uLocal_2275 = 0;
	var uLocal_2276 = 0;
	var uLocal_2277 = 0;
	var uLocal_2278 = 0;
	var uLocal_2279 = 0;
	var uLocal_2280 = 0;
	var uLocal_2281 = 0;
	var uLocal_2282 = 0;
	var uLocal_2283 = 0;
	var uLocal_2284 = 0;
	var uLocal_2285 = 0;
	var uLocal_2286 = 0;
	var uLocal_2287 = 0;
	var uLocal_2288 = 0;
	var uLocal_2289 = 0;
	var uLocal_2290 = 0;
	var uLocal_2291 = 0;
	var uLocal_2292 = 0;
	var uLocal_2293 = 0;
	var uLocal_2294 = 0;
	var uLocal_2295 = 0;
	var uLocal_2296 = 0;
	var uLocal_2297 = 0;
	var uLocal_2298 = 0;
	var uLocal_2299 = 0;
	var uLocal_2300 = 0;
	var uLocal_2301 = 0;
	var uLocal_2302 = 0;
	var uLocal_2303 = 0;
	var uLocal_2304 = 0;
	var uLocal_2305 = 0;
	var uLocal_2306 = 0;
	var uLocal_2307 = 0;
	var uLocal_2308 = 0;
	var uLocal_2309 = 0;
	var uLocal_2310 = 0;
	var uLocal_2311 = 0;
	var uLocal_2312 = 0;
	var uLocal_2313 = 0;
	var uLocal_2314 = 0;
	var uLocal_2315 = 0;
	var uLocal_2316 = 0;
	var uLocal_2317 = 0;
	var uLocal_2318 = 0;
	var uLocal_2319 = 0;
	var uLocal_2320 = 0;
	var uLocal_2321 = 0;
	var uLocal_2322 = 0;
	var uLocal_2323 = 0;
	var uLocal_2324 = 0;
	var uLocal_2325 = 0;
	var uLocal_2326 = 0;
	var uLocal_2327 = 0;
	var uLocal_2328 = 0;
	var uLocal_2329 = 0;
	var uLocal_2330 = 0;
	var uLocal_2331 = 0;
	var uLocal_2332 = 0;
	var uLocal_2333 = 0;
	var uLocal_2334 = 0;
	var uLocal_2335 = 0;
	var uLocal_2336 = 0;
	var uLocal_2337 = 0;
	var uLocal_2338 = 0;
	var uLocal_2339 = 0;
	var uLocal_2340 = 0;
	var uLocal_2341 = 0;
	var uLocal_2342 = 0;
	var uLocal_2343 = 0;
	var uLocal_2344 = 0;
	var uLocal_2345 = 0;
	var uLocal_2346 = 0;
	var uLocal_2347 = 0;
	var uLocal_2348 = 0;
	var uLocal_2349 = 0;
	var uLocal_2350 = 0;
	var uLocal_2351 = 0;
	var uLocal_2352 = 0;
	var uLocal_2353 = 0;
	var uLocal_2354 = 0;
	var uLocal_2355 = 0;
	var uLocal_2356 = 0;
	var uLocal_2357 = 0;
	var uLocal_2358 = 0;
	var uLocal_2359 = 0;
	var uLocal_2360 = 0;
	var uLocal_2361 = 0;
	var uLocal_2362 = 0;
	var uLocal_2363 = 0;
	var uLocal_2364 = 0;
	var uLocal_2365 = 0;
	var uLocal_2366 = 0;
	var uLocal_2367 = 0;
	var uLocal_2368 = 0;
	var uLocal_2369 = 0;
	var uLocal_2370 = 0;
	var uLocal_2371 = 0;
	var uLocal_2372 = 0;
	var uLocal_2373 = 0;
	var uLocal_2374 = 0;
	var uLocal_2375 = 0;
	var uLocal_2376 = 0;
	var uLocal_2377 = 0;
	var uLocal_2378 = 0;
	var uLocal_2379 = 0;
	var uLocal_2380 = 0;
	var uLocal_2381 = 0;
	var uLocal_2382 = 0;
	var uLocal_2383 = 0;
	var uLocal_2384 = 0;
	var uLocal_2385 = 0;
	var uLocal_2386 = 0;
	var uLocal_2387 = 0;
	var uLocal_2388 = 0;
	var uLocal_2389 = 0;
	var uLocal_2390 = 0;
	var uLocal_2391 = 0;
	var uLocal_2392 = 0;
	var uLocal_2393 = 0;
	var uLocal_2394 = 0;
	var uLocal_2395 = 0;
	var uLocal_2396 = 0;
	var uLocal_2397 = 0;
	var uLocal_2398 = 0;
	var uLocal_2399 = 0;
	var uLocal_2400 = 0;
	var uLocal_2401 = 0;
	var uLocal_2402 = 0;
	var uLocal_2403 = 0;
	var uLocal_2404 = 0;
	var uLocal_2405 = 0;
	var uLocal_2406 = 0;
	var uLocal_2407 = 0;
	var uLocal_2408 = 0;
	var uLocal_2409 = 0;
	var uLocal_2410 = 0;
	var uLocal_2411 = 0;
	var uLocal_2412 = 0;
	var uLocal_2413 = 0;
	var uLocal_2414 = 0;
	var uLocal_2415 = 0;
	var uLocal_2416 = 0;
	var uLocal_2417 = 0;
	var uLocal_2418 = 0;
	var uLocal_2419 = 0;
	var uLocal_2420 = 0;
	var uLocal_2421 = 0;
	var uLocal_2422 = 0;
	var uLocal_2423 = 0;
	var uLocal_2424 = 0;
	var uLocal_2425 = 0;
	var uLocal_2426 = 0;
	var uLocal_2427 = 0;
	var uLocal_2428 = 0;
	var uLocal_2429 = 0;
	var uLocal_2430 = 0;
	var uLocal_2431 = 0;
	var uLocal_2432 = 0;
	var uLocal_2433 = 0;
	var uLocal_2434 = 0;
	var uLocal_2435 = 0;
	var uLocal_2436 = 0;
	var uLocal_2437 = 0;
	var uLocal_2438 = 0;
	var uLocal_2439 = 0;
	var uLocal_2440 = 0;
	var uLocal_2441 = 0;
	var uLocal_2442 = 0;
	var uLocal_2443 = 0;
	var uLocal_2444 = 0;
	var uLocal_2445 = 0;
	var uLocal_2446 = 0;
	var uLocal_2447 = 0;
	var uLocal_2448 = 0;
	var uLocal_2449 = 0;
	var uLocal_2450 = 0;
	var uLocal_2451 = 0;
	var uLocal_2452 = 0;
	var uLocal_2453 = 0;
	var uLocal_2454 = 0;
	var uLocal_2455 = 0;
	var uLocal_2456 = 0;
	var uLocal_2457 = 0;
	var uLocal_2458 = 0;
	var uLocal_2459 = 0;
	var uLocal_2460 = 0;
	var uLocal_2461 = 0;
	var uLocal_2462 = 0;
	var uLocal_2463 = 0;
	var uLocal_2464 = 0;
	var uLocal_2465 = 0;
	var uLocal_2466 = 0;
	var uLocal_2467 = 0;
	var uLocal_2468 = 0;
	var uLocal_2469 = 0;
	var uLocal_2470 = 0;
	var uLocal_2471 = 0;
	var uLocal_2472 = 0;
	var uLocal_2473 = 0;
	var uLocal_2474 = 0;
	var uLocal_2475 = 0;
	var uLocal_2476 = 0;
	var uLocal_2477 = 0;
	var uLocal_2478 = 0;
	var uLocal_2479 = 0;
	var uLocal_2480 = 0;
	var uLocal_2481 = 0;
	var uLocal_2482 = 0;
	var uLocal_2483 = 0;
	var uLocal_2484 = 0;
	var uLocal_2485 = 0;
	var uLocal_2486 = 0;
	var uLocal_2487 = 0;
	var uLocal_2488 = 0;
	var uLocal_2489 = 0;
	var uLocal_2490 = 0;
	var uLocal_2491 = 0;
	var uLocal_2492 = 0;
	var uLocal_2493 = 0;
	var uLocal_2494 = 0;
	var uLocal_2495 = 0;
	var uLocal_2496 = 0;
	var uLocal_2497 = 0;
	var uLocal_2498 = 0;
	var uLocal_2499 = 0;
	var uLocal_2500 = 0;
	var uLocal_2501 = 0;
	var uLocal_2502 = 0;
	var uLocal_2503 = 0;
	var uLocal_2504 = 0;
	var uLocal_2505 = 0;
	var uLocal_2506 = 0;
	var uLocal_2507 = 0;
	var uLocal_2508 = 0;
	var uLocal_2509 = 0;
	var uLocal_2510 = 0;
	var uLocal_2511 = 0;
	var uLocal_2512 = 0;
	var uLocal_2513 = 0;
	var uLocal_2514 = 0;
	var uLocal_2515 = 0;
	var uLocal_2516 = 0;
	var uLocal_2517 = 0;
	var uLocal_2518 = 0;
	var uLocal_2519 = 0;
	var uLocal_2520 = 0;
	var uLocal_2521 = 0;
	var uLocal_2522 = 0;
	var uLocal_2523 = 0;
	var uLocal_2524 = 0;
	var uLocal_2525 = 0;
	var uLocal_2526 = 0;
	var uLocal_2527 = 0;
	var uLocal_2528 = 0;
	var uLocal_2529 = 0;
	var uLocal_2530 = 0;
	var uLocal_2531 = 0;
	var uLocal_2532 = 0;
	var uLocal_2533 = 0;
	var uLocal_2534 = 0;
	var uLocal_2535 = 0;
	var uLocal_2536 = 0;
	var uLocal_2537 = 0;
	var uLocal_2538 = 0;
	var uLocal_2539 = 0;
	var uLocal_2540 = 0;
	var uLocal_2541 = 0;
	var uLocal_2542 = 0;
	var uLocal_2543 = 0;
	var uLocal_2544 = 0;
	var uLocal_2545 = 0;
	var uLocal_2546 = 0;
	var uLocal_2547 = 0;
	var uLocal_2548 = 0;
	var uLocal_2549 = 0;
	var uLocal_2550 = 0;
	var uLocal_2551 = 0;
	var uLocal_2552 = 0;
	var uLocal_2553 = 0;
	var uLocal_2554 = 0;
	var uLocal_2555 = 0;
	var uLocal_2556 = 0;
	var uLocal_2557 = 0;
	var uLocal_2558 = 0;
	var uLocal_2559 = 0;
	var uLocal_2560 = 0;
	var uLocal_2561 = 0;
	var uLocal_2562 = 0;
	var uLocal_2563 = 0;
	var uLocal_2564 = 0;
	var uLocal_2565 = 0;
	var uLocal_2566 = 0;
	var uLocal_2567 = 0;
	var uLocal_2568 = 0;
	var uLocal_2569 = 0;
	var uLocal_2570 = 0;
	var uLocal_2571 = 0;
	var uLocal_2572 = 0;
	var uLocal_2573 = 0;
	var uLocal_2574 = 0;
	var uLocal_2575 = 0;
	var uLocal_2576 = 0;
	var uLocal_2577 = 0;
	var uLocal_2578 = 0;
	var uLocal_2579 = 0;
	var uLocal_2580 = 0;
	var uLocal_2581 = 0;
	var uLocal_2582 = 0;
	var uLocal_2583 = 0;
	var uLocal_2584 = 0;
	var uLocal_2585 = 0;
	var uLocal_2586 = 0;
	var uLocal_2587 = 0;
	var uLocal_2588 = 0;
	var uLocal_2589 = 0;
	var uLocal_2590 = 0;
	var uLocal_2591 = 0;
	var uLocal_2592 = 0;
	var uLocal_2593 = 0;
	var uLocal_2594 = 0;
	var uLocal_2595 = 0;
	var uLocal_2596 = 0;
	var uLocal_2597 = 0;
	var uLocal_2598 = 0;
	var uLocal_2599 = 0;
	var uLocal_2600 = 0;
	var uLocal_2601 = 0;
	var uLocal_2602 = 0;
	var uLocal_2603 = 0;
	var uLocal_2604 = 0;
	var uLocal_2605 = 0;
	var uLocal_2606 = 0;
	var uLocal_2607 = 0;
	var uLocal_2608 = 0;
	var uLocal_2609 = 0;
	var uLocal_2610 = 0;
	var uLocal_2611 = 0;
	var uLocal_2612 = 0;
	var uLocal_2613 = 0;
	var uLocal_2614 = 0;
	var uLocal_2615 = 0;
	var uLocal_2616 = 0;
	var uLocal_2617 = 0;
	var uLocal_2618 = 0;
	var uLocal_2619 = 0;
	var uLocal_2620 = 0;
	var uLocal_2621 = 0;
	var uLocal_2622 = 0;
	var uLocal_2623 = 0;
	var uLocal_2624 = 0;
	var uLocal_2625 = 0;
	var uLocal_2626 = 0;
	var uLocal_2627 = 0;
	var uLocal_2628 = 0;
	var uLocal_2629 = 0;
	var uLocal_2630 = 0;
	var uLocal_2631 = 0;
	var uLocal_2632 = 0;
	var uLocal_2633 = 0;
	var uLocal_2634 = 0;
	var uLocal_2635 = 0;
	var uLocal_2636 = 0;
	var uLocal_2637 = 0;
	var uLocal_2638 = 0;
	var uLocal_2639 = 0;
	var uLocal_2640 = 0;
	var uLocal_2641 = 0;
	var uLocal_2642 = 0;
	var uLocal_2643 = 0;
	var uLocal_2644 = 0;
	var uLocal_2645 = 0;
	var uLocal_2646 = 0;
	var uLocal_2647 = 0;
	var uLocal_2648 = 0;
	var uLocal_2649 = 0;
	var uLocal_2650 = 0;
	var uLocal_2651 = 0;
	var uLocal_2652 = 0;
	var uLocal_2653 = 0;
	var uLocal_2654 = 0;
	var uLocal_2655 = 0;
	var uLocal_2656 = 0;
	var uLocal_2657 = 0;
	var uLocal_2658 = 0;
	var uLocal_2659 = 0;
	var uLocal_2660 = 0;
	var uLocal_2661 = 0;
	var uLocal_2662 = 0;
	var uLocal_2663 = 0;
	var uLocal_2664 = 0;
	var uLocal_2665 = 0;
	var uLocal_2666 = 0;
	var uLocal_2667 = 0;
	var uLocal_2668 = 0;
	var uLocal_2669 = 0;
	var uLocal_2670 = 0;
	var uLocal_2671 = 0;
	var uLocal_2672 = 0;
	var uLocal_2673 = 0;
	var uLocal_2674 = 0;
	var uLocal_2675 = 0;
	var uLocal_2676 = 0;
	var uLocal_2677 = 0;
	var uLocal_2678 = 0;
	var uLocal_2679 = 0;
	var uLocal_2680 = 0;
	var uLocal_2681 = 0;
	var uLocal_2682 = 0;
	var uLocal_2683 = 0;
	var uLocal_2684 = 0;
	var uLocal_2685 = 0;
	var uLocal_2686 = 0;
	var uLocal_2687 = 0;
	var uLocal_2688 = 0;
	var uLocal_2689 = 0;
	var uLocal_2690 = 0;
	var uLocal_2691 = 0;
	var uLocal_2692 = 0;
	var uLocal_2693 = 0;
	var uLocal_2694 = 0;
	var uLocal_2695 = 0;
	var uLocal_2696 = 0;
	var uLocal_2697 = 0;
	var uLocal_2698 = 0;
	var uLocal_2699 = 0;
	var uLocal_2700 = 0;
	var uLocal_2701 = 0;
	var uLocal_2702 = 0;
	var uLocal_2703 = 0;
	var uLocal_2704 = 0;
	var uLocal_2705 = 0;
	var uLocal_2706 = 0;
	var uLocal_2707 = 0;
	var uLocal_2708 = 0;
	var uLocal_2709 = 0;
	var uLocal_2710 = 0;
	var uLocal_2711 = 0;
	var uLocal_2712 = 0;
	var uLocal_2713 = 0;
	var uLocal_2714 = 0;
	var uLocal_2715 = 0;
	var uLocal_2716 = 0;
	var uLocal_2717 = 0;
	var uLocal_2718 = 0;
	var uLocal_2719 = 0;
	var uLocal_2720 = 0;
	var uLocal_2721 = 0;
	var uLocal_2722 = 0;
	var uLocal_2723 = 0;
	var uLocal_2724 = 0;
	var uLocal_2725 = 0;
	var uLocal_2726 = 0;
	var uLocal_2727 = 0;
	var uLocal_2728 = 0;
	var uLocal_2729 = 0;
	var uLocal_2730 = 0;
	var uLocal_2731 = 0;
	var uLocal_2732 = 0;
	var uLocal_2733 = 0;
	var uLocal_2734 = 0;
	var uLocal_2735 = 0;
	var uLocal_2736 = 0;
	var uLocal_2737 = 0;
	var uLocal_2738 = 0;
	var uLocal_2739 = 0;
	var uLocal_2740 = 0;
	var uLocal_2741 = 0;
	var uLocal_2742 = 0;
	var uLocal_2743 = 0;
	var uLocal_2744 = 0;
	var uLocal_2745 = 0;
	var uLocal_2746 = 0;
	var uLocal_2747 = 0;
	var uLocal_2748 = 0;
	var uLocal_2749 = 0;
	var uLocal_2750 = 0;
	var uLocal_2751 = 0;
	var uLocal_2752 = 0;
	var uLocal_2753 = 0;
	var uLocal_2754 = 0;
	var uLocal_2755 = 0;
	var uLocal_2756 = 0;
	var uLocal_2757 = 0;
	var uLocal_2758 = 0;
	var uLocal_2759 = 0;
	var uLocal_2760 = 0;
	var uLocal_2761 = 0;
	var uLocal_2762 = 0;
	var uLocal_2763 = 0;
	var uLocal_2764 = 0;
	var uLocal_2765 = 0;
	var uLocal_2766 = 0;
	var uLocal_2767 = 0;
	var uLocal_2768 = 0;
	var uLocal_2769 = 0;
	var uLocal_2770 = 0;
	var uLocal_2771 = 0;
	var uLocal_2772 = 0;
	var uLocal_2773 = 0;
	var uLocal_2774 = 0;
	var uLocal_2775 = 0;
	var uLocal_2776 = 0;
	var uLocal_2777 = 0;
	var uLocal_2778 = 0;
	var uLocal_2779 = 0;
	var uLocal_2780 = 0;
	var uLocal_2781 = 0;
	var uLocal_2782 = 0;
	var uLocal_2783 = 0;
	var uLocal_2784 = 0;
	var uLocal_2785 = 0;
	var uLocal_2786 = 0;
	var uLocal_2787 = 0;
	var uLocal_2788 = 0;
	var uLocal_2789 = 0;
	var uLocal_2790 = 0;
	var uLocal_2791 = 0;
	var uLocal_2792 = 0;
	var uLocal_2793 = 0;
	var uLocal_2794 = 0;
	var uLocal_2795 = 0;
	var uLocal_2796 = 0;
	var uLocal_2797 = 0;
	var uLocal_2798 = 0;
	var uLocal_2799 = 0;
	var uLocal_2800 = 0;
	var uLocal_2801 = 0;
	var uLocal_2802 = 0;
	var uLocal_2803 = 0;
	var uLocal_2804 = 0;
	var uLocal_2805 = 0;
	var uLocal_2806 = 0;
	var uLocal_2807 = 0;
	var uLocal_2808 = 0;
	var uLocal_2809 = 0;
	var uLocal_2810 = 0;
	var uLocal_2811 = 0;
	var uLocal_2812 = 0;
	var uLocal_2813 = 0;
	var uLocal_2814 = 0;
	var uLocal_2815 = 0;
	var uLocal_2816 = 0;
	var uLocal_2817 = 0;
	var uLocal_2818 = 0;
	var uLocal_2819 = 0;
	var uLocal_2820 = 0;
	var uLocal_2821 = 0;
	var uLocal_2822 = 0;
	var uLocal_2823 = 0;
	var uLocal_2824 = 0;
	var uLocal_2825 = 0;
	var uLocal_2826 = 0;
	var uLocal_2827 = 0;
	var uLocal_2828 = 0;
	var uLocal_2829 = 0;
	var uLocal_2830 = 0;
	var uLocal_2831 = 0;
	var uLocal_2832 = 0;
	var uLocal_2833 = 0;
	var uLocal_2834 = 0;
	var uLocal_2835 = 0;
	var uLocal_2836 = 0;
	var uLocal_2837 = 0;
	var uLocal_2838 = 0;
	var uLocal_2839 = 0;
	var uLocal_2840 = 0;
	var uLocal_2841 = 0;
	var uLocal_2842 = 0;
	var uLocal_2843 = 0;
	var uLocal_2844 = 0;
	var uLocal_2845 = 0;
	var uLocal_2846 = 0;
	var uLocal_2847 = 0;
	var uLocal_2848 = 0;
	var uLocal_2849 = 0;
	var uLocal_2850 = 0;
	var uLocal_2851 = 0;
	var uLocal_2852 = 0;
	var uLocal_2853 = 0;
	var uLocal_2854 = 0;
	var uLocal_2855 = 0;
	var uLocal_2856 = 0;
	var uLocal_2857 = 0;
	var uLocal_2858 = 0;
	var uLocal_2859 = 0;
	var uLocal_2860 = 0;
	var uLocal_2861 = 0;
	var uLocal_2862 = 0;
	var uLocal_2863 = 0;
	var uLocal_2864 = 0;
	var uLocal_2865 = 0;
	var uLocal_2866 = 0;
	var uLocal_2867 = 0;
	var uLocal_2868 = 0;
	var uLocal_2869 = 0;
	var uLocal_2870 = 0;
	var uLocal_2871 = 0;
	var uLocal_2872 = 0;
	var uLocal_2873 = 0;
	var uLocal_2874 = 0;
	var uLocal_2875 = 0;
	var uLocal_2876 = 0;
	var uLocal_2877 = 0;
	var uLocal_2878 = 0;
	var uLocal_2879 = 0;
	var uLocal_2880 = 0;
	var uLocal_2881 = 0;
	var uLocal_2882 = 0;
	var uLocal_2883 = 0;
	var uLocal_2884 = 0;
	var uLocal_2885 = 0;
	var uLocal_2886 = 0;
	var uLocal_2887 = 0;
	var uLocal_2888 = 0;
	var uLocal_2889 = 0;
	var uLocal_2890 = 0;
	var uLocal_2891 = 0;
	var uLocal_2892 = 0;
	var uLocal_2893 = 0;
	var uLocal_2894 = 0;
	var uLocal_2895 = 0;
	var uLocal_2896 = 0;
	var uLocal_2897 = 0;
	var uLocal_2898 = 0;
	var uLocal_2899 = 0;
	var uLocal_2900 = 0;
	var uLocal_2901 = 0;
	var uLocal_2902 = 0;
	var uLocal_2903 = 0;
	var uLocal_2904 = 0;
	var uLocal_2905 = 0;
	var uLocal_2906 = 0;
	var uLocal_2907 = 0;
	var uLocal_2908 = 0;
	var uLocal_2909 = 0;
	var uLocal_2910 = 0;
	var uLocal_2911 = 0;
	var uLocal_2912 = 0;
	var uLocal_2913 = 0;
	var uLocal_2914 = 0;
	var uLocal_2915 = 0;
	var uLocal_2916 = 0;
	var uLocal_2917 = 0;
	var uLocal_2918 = 0;
	var uLocal_2919 = 0;
	var uLocal_2920 = 0;
	var uLocal_2921 = 0;
	var uLocal_2922 = 0;
	var uLocal_2923 = 0;
	var uLocal_2924 = 0;
	var uLocal_2925 = 0;
	var uLocal_2926 = 0;
	var uLocal_2927 = 0;
	var uLocal_2928 = 0;
	var uLocal_2929 = 0;
	var uLocal_2930 = 0;
	var uLocal_2931 = 0;
	var uLocal_2932 = 0;
	var uLocal_2933 = 0;
	var uLocal_2934 = 0;
	var uLocal_2935 = 0;
	var uLocal_2936 = 0;
	var uLocal_2937 = 0;
	var uLocal_2938 = 0;
	var uLocal_2939 = 0;
	var uLocal_2940 = 0;
	var uLocal_2941 = 0;
	var uLocal_2942 = 0;
	var uLocal_2943 = 0;
	var uLocal_2944 = 0;
	var uLocal_2945 = 0;
	var uLocal_2946 = 0;
	var uLocal_2947 = 0;
	var uLocal_2948 = 0;
	var uLocal_2949 = 0;
	var uLocal_2950 = 0;
	var uLocal_2951 = 0;
	var uLocal_2952 = 0;
	var uLocal_2953 = 0;
	var uLocal_2954 = 0;
	var uLocal_2955 = 0;
	var uLocal_2956 = 0;
	var uLocal_2957 = 0;
	var uLocal_2958 = 0;
	var uLocal_2959 = 0;
	var uLocal_2960 = 0;
	var uLocal_2961 = 0;
	var uLocal_2962 = 0;
	var uLocal_2963 = 0;
	var uLocal_2964 = 0;
	var uLocal_2965 = 0;
	var uLocal_2966 = 0;
	var uLocal_2967 = 0;
	var uLocal_2968 = 0;
	var uLocal_2969 = 0;
	var uLocal_2970 = 0;
	var uLocal_2971 = 0;
	var uLocal_2972 = 0;
	var uLocal_2973 = 0;
	var uLocal_2974 = 0;
	var uLocal_2975 = 0;
	var uLocal_2976 = 0;
	var uLocal_2977 = 0;
	var uLocal_2978 = 0;
	var uLocal_2979 = 0;
	var uLocal_2980 = 0;
	var uLocal_2981 = 0;
	var uLocal_2982 = 0;
	var uLocal_2983 = 0;
	var uLocal_2984 = 0;
	var uLocal_2985 = 0;
	var uLocal_2986 = 0;
	var uLocal_2987 = 0;
	var uLocal_2988 = 0;
	var uLocal_2989 = 0;
	var uLocal_2990 = 0;
	var uLocal_2991 = 0;
	var uLocal_2992 = 0;
	var uLocal_2993 = 0;
	var uLocal_2994 = 0;
	var uLocal_2995 = 0;
	var uLocal_2996 = 0;
	var uLocal_2997 = 0;
	var uLocal_2998 = 0;
	var uLocal_2999 = 0;
	var uLocal_3000 = 0;
	var uLocal_3001 = 0;
	var uLocal_3002 = 0;
	var uLocal_3003 = 0;
	var uLocal_3004 = 0;
	var uLocal_3005 = 0;
	var uLocal_3006 = 0;
	var uLocal_3007 = 0;
	var uLocal_3008 = 0;
	var uLocal_3009 = 0;
	var uLocal_3010 = 0;
	var uLocal_3011 = 0;
	var uLocal_3012 = 0;
	var uLocal_3013 = 0;
	bool bLocal_3014 = 0;
	bool bLocal_3015 = 0;
	bool bLocal_3016 = 0;
	int iLocal_3017 = 0;
	int iLocal_3018 = 0;
	int iLocal_3019 = 0;
	float fLocal_3020 = 0f;
	float fLocal_3021 = 0f;
	int iLocal_3022 = 0;
	int iLocal_3023 = 0;
	int iLocal_3024 = 0;
	bool bLocal_3025 = 0;
	var uLocal_3026 = 0;
	var uLocal_3027 = 0;
	var uLocal_3028 = 0;
	var uLocal_3029 = 0;
	var uLocal_3030 = 0;
	var uLocal_3031 = 0;
	var uLocal_3032 = 0;
	var uLocal_3033 = 0;
	var uLocal_3034 = 0;
	var uLocal_3035 = 21;
	var uLocal_3036 = 6;
	var uLocal_3037 = 0;
	var uLocal_3038 = 0;
	var uLocal_3039 = 0;
	int iLocal_3040 = 0;
	int iLocal_3041 = 0;
	int iLocal_3042 = 0;
	int iLocal_3043 = 0;
	int iLocal_3044 = 0;
	int iLocal_3045 = 0;
	int iLocal_3046 = 0;
	float fLocal_3047 = 0f;
	int iLocal_3048 = 0;
	int iLocal_3049 = 0;
	bool bLocal_3050 = 0;
	int iLocal_3051 = 0;
	var uLocal_3052 = 0;
	int iLocal_3053 = 0;
	int iLocal_3054 = 0;
	int iLocal_3055 = 0;
	bool bLocal_3056 = 0;
	int iLocal_3057 = 0;
	int iLocal_3058 = 0;
	int iLocal_3059 = 0;
	int iLocal_3060 = 0;
	int iLocal_3061 = 0;
	int iLocal_3062 = 0;
	int iLocal_3063 = 0;
	float fLocal_3064 = 0f;
	int iLocal_3065 = 0;
	bool bLocal_3066 = 0;
	int iLocal_3067 = 0;
	int iLocal_3068 = 0;
	int iLocal_3069 = 0;
	int iLocal_3070 = 0;
	int iLocal_3071 = 0;
	int iLocal_3072 = 0;
	int iLocal_3073 = 0;
	int iLocal_3074 = 0;
	int iLocal_3075 = 0;
	int iLocal_3076 = 0;
	int iLocal_3077 = 0;
	int iLocal_3078 = 0;
	int iLocal_3079 = 0;
	int iLocal_3080 = 0;
	struct<6> Local_3081 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_3082 = 0;
	int iLocal_3083 = 0;
	int iLocal_3084 = 0;
	int iLocal_3085 = 0;
	int iLocal_3086 = 0;
	int iLocal_3087 = 0;
	int iLocal_3088 = 0;
	int iLocal_3089 = 0;
	float fLocal_3090 = 0f;
	float fLocal_3091 = 0f;
	float fLocal_3092 = 0f;
	float fLocal_3093 = 0f;
	int iLocal_3094 = 0;
	struct<3> Local_3095 = { 0, 0, 0 } ;
	int iLocal_3096 = 0;
	int iLocal_3097 = 0;
	int iLocal_3098 = 0;
	int iLocal_3099 = 0;
	int iLocal_3100 = 0;
	int iLocal_3101 = 0;
	struct<6> Local_3102 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_3103 = 0;
	float fLocal_3104 = 0f;
	int iLocal_3105 = 0;
	int iLocal_3106 = 0;
	int iLocal_3107 = 0;
	int iLocal_3108 = 0;
	int iLocal_3109 = 0;
	int iLocal_3110 = 0;
	int iLocal_3111 = 0;
	int iLocal_3112 = 0;
	int iLocal_3113 = 0;
	int iLocal_3114 = 0;
	int iLocal_3115 = 0;
	int iLocal_3116 = 0;
	int iLocal_3117 = 0;
	int iLocal_3118 = 0;
	int iLocal_3119 = 0;
	int iLocal_3120 = 0;
	int iLocal_3121 = 0;
	int iLocal_3122 = 0;
	int iLocal_3123 = 0;
	int iLocal_3124 = 0;
	int iLocal_3125 = 0;
	int iLocal_3126 = 0;
	int iLocal_3127 = 0;
	int iLocal_3128 = 0;
	int iLocal_3129 = 0;
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
	iLocal_46 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	iLocal_47 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	fLocal_49 = 500f;
	bLocal_50 = true;
	iLocal_52 = 1;
	bLocal_101 = true;
	bLocal_108 = true;
	bLocal_130 = true;
	fLocal_151 = 120f;
	fLocal_152 = 0f;
	fLocal_154 = 1f;
	fLocal_155 = 0f;
	fLocal_156 = 1f;
	fLocal_157 = 30f;
	fLocal_159 = 1f;
	fLocal_160 = 5f;
	fLocal_161 = 1f;
	fLocal_162 = 1f;
	fLocal_163 = 100f;
	fLocal_164 = 100f;
	fLocal_165 = 0f;
	fLocal_166 = 7000f;
	fLocal_167 = 0f;
	fLocal_168 = 0f;
	fLocal_169 = 0.3f;
	fLocal_170 = 0.5f;
	fLocal_171 = 50f;
	iLocal_182 = -1;
	iLocal_190 = -1;
	iLocal_191 = -1;
	iLocal_257 = 2500;
	iLocal_261 = 1;
	iLocal_272 = 1200;
	iLocal_279 = -1;
	iLocal_327 = 28;
	Local_329 = { -2151.2722f, -268.0492f, 12.8775f };
	fLocal_336 = 5f;
	iLocal_369 = -1;
	iLocal_370 = -1;
	iLocal_371 = -1;
	iLocal_372 = -1;
	iLocal_373 = -1;
	iLocal_374 = -1;
	iLocal_375 = -1;
	iLocal_376 = -1;
	iLocal_377 = -1;
	iLocal_378 = -1;
	iLocal_379 = -1;
	Local_382 = { -2322.091f, -320.1779f, 12.8207f };
	fLocal_383 = 240.7513f;
	Local_384 = { -825.1512f, 178.9821f, 70.3781f };
	fLocal_385 = 145.2545f;
	Local_386 = { 0f, -17.5f, -0.5f };
	Local_387 = { -7f, 2.5f, -1f };
	fLocal_388 = 3f;
	fLocal_389 = 1f;
	fLocal_390 = 1f;
	fLocal_391 = 1f;
	fLocal_404 = -10f;
	fLocal_405 = 10f;
	fLocal_406 = 1f;
	fLocal_407 = 0.2f;
	fLocal_408 = 0.85f;
	iLocal_3024 = 1;
	iLocal_3053 = 93;
	iLocal_3054 = 6;
	iLocal_3068 = 900;
	iLocal_3069 = 1200;
	iLocal_3071 = 2;
	iLocal_3106 = 1;
	iLocal_3120 = 1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_935();
		func_933();
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	MISC::SET_MISSION_FLAG(true);
	__LIB_0__.func_54(0, 0);
	while (true)
	{
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("M_FatherAndSon", 0);
		func_931();
		switch (iLocal_3022)
		{
			case 0:
				func_869();
				break;
			case 1:
				func_853();
				break;
			case 2:
				func_848();
				break;
			case 3:
				func_489();
				break;
			case 4:
				func_469();
				break;
			case 5:
			case 6:
			case 7:
				func_379();
				break;
			case 8:
				func_318();
				break;
			case 9:
				func_262();
				break;
			case 10:
				func_100();
				break;
			case 11:
				func_92();
				break;
			case 12:
				func_3();
				break;
			default:
				break;
		}
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			func_1();
			iLocal_3129 = MISC::GET_GAME_TIMER();
		}
		else if ((MISC::GET_GAME_TIMER() - iLocal_3129) < 5000)
		{
			func_1();
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x31C
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_354, false))
	{
		PED::SET_PED_RESET_FLAG(iLocal_354, 287, true);
	}
	if (!ENTITY::IS_ENTITY_DEAD(func_2(), false))
	{
		PED::SET_PED_RESET_FLAG(func_2(), 287, true);
	}
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 287, true);
		}
	}
}

int func_2()//Position - 0x378
{
	return iLocal_56[1];
}

void func_3()//Position - 0x385
{
	CAM::SET_USE_HI_DOF();
	switch (iLocal_316)
	{
		case 0:
			AUDIO::TRIGGER_MUSIC_EVENT("FAM1_FAIL");
			func_83();
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("trailers2"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("trailers2"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_ld_test_01"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("G_M_Y_SalvaGoon_01"));
			STREAMING::REMOVE_PTFX_ASSET();
			STREAMING::REMOVE_ANIM_DICT("MISSFAM1_YACHTBATTLEinCar01_");
			STREAMING::REMOVE_ANIM_DICT("MISSFAM1_YACHTBATTLEonYacht01_");
			STREAMING::REMOVE_ANIM_DICT("MISSFAM1_YACHTBATTLEonYacht02_");
			STREAMING::REMOVE_ANIM_DICT("MISSFAM1_YACHTBATTLEinCar02_");
			STREAMING::REMOVE_ANIM_DICT("veh@drivebystd_ds");
			CUTSCENE::REMOVE_CUTSCENE();
			STREAMING::NEW_LOAD_SCENE_START(1207.5491f, -2559.342f, 37.093716f, __LIB_0__.func_79(Vector(37.0212f, -2559.4038f, 1206.6606f) - Vector(37.093716f, -2559.342f, 1207.5491f)), 80f, 0);
			iLocal_316++;
			break;
		case 1:
			HUD::CLEAR_PRINTS();
			VEHICLE::REQUEST_VEHICLE_RECORDING(2, "Fam1New");
			VEHICLE::REQUEST_VEHICLE_RECORDING(1, "Fam1New");
			VEHICLE::REQUEST_VEHICLE_RECORDING(1, "Fam1End");
			SYSTEM::SETTIMERA(0);
			while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED() || SYSTEM::TIMERA() < 2000)
			{
				SYSTEM::WAIT(0);
			}
			AUDIO::STOP_AUDIO_SCENE("FAM1_HIGHWAY_CHASE");
			__LIB_0__.func_202(&uLocal_446, 3);
			__LIB_0__.func_202(&uLocal_446, 5);
			__LIB_0__.func_203(&uLocal_446, 2, iLocal_354, "JIMMY", 0, 1);
			__LIB_0__.func_296();
			func_60(0, 1);
			iLocal_316++;
			break;
		case 2:
			if ((VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(2, "Fam1New") && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "Fam1New")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "Fam1End"))
			{
				if (iLocal_3023 > 27)
				{
					CUTSCENE::REQUEST_CUTSCENE("FAM_1_EXT_ALT2", 8);
				}
				else
				{
					CUTSCENE::REQUEST_CUTSCENE("FAM_1_EXT_ALT3", 8);
				}
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_345, 20000, 0, 2);
				if ((!PED::IS_PED_INJURED(func_2()) && !ENTITY::IS_ENTITY_DEAD(iLocal_345, false)) && !ENTITY::IS_ENTITY_DEAD(iLocal_342, false))
				{
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_342, false))
					{
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_342, -1);
					}
					if (iLocal_3023 >= 34)
					{
						TASK::CLEAR_PED_TASKS(func_2());
						TASK::TASK_LOOK_AT_ENTITY(func_2(), iLocal_345, 20000, 0, 2);
						if (!PED::IS_PED_IN_VEHICLE(func_2(), iLocal_342, false))
						{
							PED::SET_PED_INTO_VEHICLE(func_2(), iLocal_342, 0);
						}
					}
				}
				if ((!PED::IS_PED_INJURED(iLocal_354) && !ENTITY::IS_ENTITY_DEAD(iLocal_345, false)) && !ENTITY::IS_ENTITY_DEAD(iLocal_342, false))
				{
					if (iLocal_3023 >= 27)
					{
						TASK::CLEAR_PED_TASKS(iLocal_354);
						TASK::TASK_LOOK_AT_ENTITY(iLocal_354, iLocal_345, 20000, 0, 2);
						if (!PED::IS_PED_IN_VEHICLE(iLocal_354, iLocal_342, false))
						{
							PED::SET_PED_INTO_VEHICLE(iLocal_354, iLocal_342, 2);
						}
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_345, false))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_345);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_345, false);
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_345, 1, "Fam1New", true);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_345, 207553f);
					VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_345, true);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_346, false))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_346);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_346, false);
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_346, 2, "Fam1New", true);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_346, 207553f);
					VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_346, true);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_342, false))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_342);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_342, false);
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_342, 1, "Fam1End", true);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_342, 6000f);
					VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_342, true);
				}
				iLocal_323 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
				iLocal_324 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
				CAM::SET_CAM_COORD(iLocal_323, 1203.3606f, -2561.6458f, 36.01843f);
				CAM::SET_CAM_ROT(iLocal_323, -1.537818f, 0f, 87.2005f, 2);
				CAM::SET_CAM_FOV(iLocal_323, 36.856476f);
				CAM::SET_CAM_COORD(iLocal_324, 1203.1006f, -2563.0735f, 36.01843f);
				CAM::SET_CAM_ROT(iLocal_324, 0.612468f, 0f, 80.39472f, 2);
				CAM::SET_CAM_FOV(iLocal_324, 36.856476f);
				CAM::SET_CAM_FAR_DOF(iLocal_324, 290.5f);
				CAM::SET_CAM_NEAR_DOF(iLocal_324, 5f);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_324, iLocal_323, 5000, 2, 0);
				MISC::CLEAR_AREA(267.73044f, -2688.2683f, 18.785252f, 50f, true, false, false, false);
				SYSTEM::SETTIMERA(0);
				func_59(1, 0, 2000, 1, 1);
				__LIB_0__.func_296();
				OBJECT::DELETE_OBJECT(&iLocal_341);
				iLocal_316++;
				SYSTEM::SETTIMERA(0);
			}
			break;
		case 3:
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Michael", PLAYER::PLAYER_PED_ID(), 0);
			if (SYSTEM::TIMERA() > 3500 && __LIB_0__.func_90())
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_354, false) && iLocal_3023 > 27)
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_354, "JIMMY", 0, 0, 0);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_342, false))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_342, "AMANDAS_CAR", 0, 0, 0);
				}
				CUTSCENE::START_CUTSCENE(0);
				iLocal_316++;
				SYSTEM::SETTIMERA(0);
			}
			break;
		case 4:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				VEHICLE::DELETE_VEHICLE(&iLocal_54);
				VEHICLE::DELETE_VEHICLE(&iLocal_55);
				VEHICLE::DELETE_VEHICLE(&iLocal_345);
				func_59(0, 0, 2000, 1, 1);
				__LIB_7__.func_279(1, 1, 1, 0, 0, 0, 0);
				__LIB_8__.func_770(1);
				HUD::DISPLAY_HUD(false);
				HUD::DISPLAY_RADAR(false);
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_342, false))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_342);
				}
				iLocal_316++;
			}
			break;
		case 5:
			if (!CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				iLocal_316++;
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(PLAYER::PLAYER_PED_ID(), false);
				if (iLocal_3023 >= 27)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_342, false) && !PED::IS_PED_INJURED(iLocal_354))
					{
						PED::SET_PED_INTO_VEHICLE(iLocal_354, iLocal_342, 1);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_354, false, false);
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_342, false))
				{
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_342, -1);
				}
				TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
				ENTITY::SET_ENTITY_COORDS(iLocal_342, 1195.4417f, -2563.0918f, 35.0116f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(iLocal_342, 289.3138f);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_342, 5f);
				__LIB_12__.func_175(0);
				HUD::DISPLAY_HUD(true);
				HUD::DISPLAY_RADAR(true);
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					STREAMING::NEW_LOAD_SCENE_STOP();
				}
				func_40();
				func_6();
			}
			break;
	}
	if (__LIB_6__.func_841(1000) && iLocal_316 < 4)
	{
		CAM::DO_SCREEN_FADE_OUT(500);
		while (CAM::IS_SCREEN_FADING_OUT())
		{
			SYSTEM::WAIT(0);
		}
		while (!CUTSCENE::HAS_CUTSCENE_FINISHED())
		{
			SYSTEM::WAIT(0);
		}
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_342, false))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_342);
			PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_342, -1);
		}
		VEHICLE::DELETE_VEHICLE(&iLocal_345);
		VEHICLE::DELETE_VEHICLE(&iLocal_346);
		__LIB_12__.func_175(0);
		iLocal_316 = 5;
	}
}

void func_6()//Position - 0xA5A
{
	AUDIO::TRIGGER_MUSIC_EVENT("FAM1_FAIL");
	__LIB_0__.func_296();
	__LIB_32__.func_812(39, 0, 0);
	func_10(0);
	while (!__LIB_0__.func_204())
	{
		SYSTEM::WAIT(0);
	}
	__LIB_20__.func_603("YB_JIMTXT" /* GXT: Dad - Come quick! These guys are stealing ur yacht, we're headin down the freeway. Totes not my fault! */);
	PED::DELETE_PED(&iLocal_354);
	PED::DELETE_PED(&(iLocal_56[1]));
	func_933();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_10(int iParam0)//Position - 0xBDC
{
	int iVar0;
	if (Global_113386.f_9085 || __LIB_0__.func_2(0))
	{
		iVar0 = __LIB_0__.func_323();
		if (!func_11(iVar0))
		{
			return;
		}
		MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 5);
		Global_100477 = iParam0;
	}
}

int func_11(int iParam0)//Position - 0xC21
{
	int iVar0;
	int iVar1;
	__LIB_26__.func_546();
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::START_FIRING_AMNESTY(5000);
	}
	iVar0 = Global_91193[iParam0 /*5*/];
	iVar1 = Global_78588.f_109[iVar0 /*4*/];
	__LIB_0__.func_322(iVar1, 1);
	PLAYER::SPECIAL_ABILITY_CHARGE_ON_MISSION_FAILED(PLAYER::PLAYER_ID(), 0);
	PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
	func_12(&(Global_113386.f_2363.f_539), iVar1);
	if (Global_94616 == Global_100478)
	{
		Global_113386.f_9085.f_330[iVar1 /*6*/].f_1++;
	}
	if (!BitTest(Global_91229[iVar1 /*34*/].f_15, 1))
	{
		if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			MISC::SET_FADE_IN_AFTER_DEATH_ARREST(false);
		}
	}
	Global_113386.f_9085.f_330[iVar1 /*6*/].f_2++;
	Global_94616 = Global_100478;
	if (iParam0 == -1)
	{
		if (Global_113386.f_9085)
		{
		}
		return 0;
	}
	if (BitTest(Global_91193[iParam0 /*5*/].f_1, 4))
	{
		return 0;
	}
	if (BitTest(Global_91193[iParam0 /*5*/].f_1, 5))
	{
		return 0;
	}
	return 1;
}

void func_12(var uParam0, int iParam1)//Position - 0xD31
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar3;
	if (iParam1 == 94)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = Global_113386.f_18533[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !BitTest(Global_113386.f_9085.f_99.f_219[0], 9))
		{
		}
		else
		{
			Var2 = { 0f, 0f, 0f };
			fVar3 = 0f;
			if (!func_14(Global_113386.f_18533[iVar0], &Var2, &fVar3))
			{
				Global_113386.f_18533[iVar0] = 318;
				__LIB_0__.func_17(&(uParam0->f_2296[iVar0]));
				uParam0->f_2300[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2310[iVar0] = 0f;
				uParam0->f_2314[iVar0] = 0;
				uParam0->f_2318[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2328[iVar0] = 0;
				Global_97831[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_9 = 0f;
				Global_97831[iVar0 /*29*/].f_12 = 0f;
				Global_97831[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_10 = 0f;
				Global_97831[iVar0 /*29*/].f_13 = 0f;
				Global_97831[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_11 = 0f;
				Global_97831[iVar0 /*29*/].f_14 = 0f;
				Global_97831[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_26 = 0f;
				Global_97831[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_27 = 0f;
				Global_97831[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

int func_14(int iParam0, var uParam1, float fParam2)//Position - 0xF05
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = { 115.1569f, -1286.684f, 28.2613f };
			*fParam2 = 111f;
			return 1;
			break;
		case 8:
			*uParam1 = { -90.0089f, -1324.1947f, 28.3203f };
			*fParam2 = 194.1887f;
			return 1;
			break;
		case 9:
			return func_14(8, uParam1, fParam2);
			break;
		case 10:
			return func_14(8, uParam1, fParam2);
			break;
		case 13:
			*uParam1 = { -807.2979f, -48.4004f, 36.8173f };
			*fParam2 = 201.6328f;
			return 1;
			break;
		case 14:
			*uParam1 = { 1432.3402f, -1887.3832f, 70.5768f };
			*fParam2 = 350.0509f;
			return 1;
			break;
		case 15:
			*uParam1 = { 1666.204f, 1967.2504f, 143.3213f };
			*fParam2 = 0.7896f;
			return 1;
			break;
		case 12:
			*uParam1 = { -1440.22f, -127.02f, 50f };
			*fParam2 = 42f;
			return 1;
			break;
		case 16:
			*uParam1 = { 135.055f, -1759.6396f, 27.8957f };
			*fParam2 = -129f;
			return 1;
			break;
		case 17:
			*uParam1 = { 687.6992f, -1744.0299f, 28.3624f };
			*fParam2 = 267.1409f;
			return 1;
			break;
		case 18:
			*uParam1 = { 56.5117f, -744.6122f, 43.1356f };
			*fParam2 = 340.0526f;
			return 1;
			break;
		case 19:
			*uParam1 = { 506.485f, -1884.967f, 24.764f };
			*fParam2 = 22.9566f;
			return 1;
			break;
		case 20:
			*uParam1 = { 1555.9575f, 953.6136f, 77.2063f };
			*fParam2 = 152.8118f;
			return 1;
			break;
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 22:
			*uParam1 = { 220.72f, -64.4177f, 68.2922f };
			*fParam2 = (250.4535f - 360f);
			return 1;
			break;
		case 74:
			*uParam1 = { 2048.07f, 3840.84f, 34.2238f };
			*fParam2 = 119.603f;
			return 1;
			break;
		case 23:
			*uParam1 = { -464.22f, -1592.98f, 38.73f };
			*fParam2 = 168f;
			return 1;
			break;
		case 24:
			*uParam1 = { (744.79f + 0.0186f), (-465.86f - 0.0114f), 36.6399f };
			*fParam2 = 51.7279f;
			return 1;
			break;
		case 67:
			*uParam1 = { -9f, 508.1f, 173.6278f };
			*fParam2 = 151.2504f;
			return 1;
			break;
		case 25:
			*uParam1 = { 72.2278f, -1464.6798f, 28.2915f };
			*fParam2 = 156.8827f;
			return 1;
			break;
		case 27:
			*uParam1 = { 763f, -906f, 24.2312f };
			*fParam2 = 7.2736f;
			return 1;
			break;
		case 26:
			*uParam1 = { 257.9167f, -1120.7855f, 28.3684f };
			*fParam2 = 97.2736f;
			return 1;
			break;
		case 28:
			*uParam1 = { 422.5858f, -978.6332f, 69.7073f };
			*fParam2 = 4f;
			return 1;
			break;
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 58:
			*uParam1 = { 294.8521f, 882.9366f, 197.8527f };
			*fParam2 = 162.693f;
			return 1;
			break;
		case 59:
			*uParam1 = { -1771.8015f, 794.4316f, 138.4211f };
			*fParam2 = 128.9946f;
			return 1;
			break;
		case 60:
			*uParam1 = { 1495.5953f, -1848.8207f, 70.2075f };
			*fParam2 = 32.2721f;
			return 1;
			break;
		case 38:
			*uParam1 = { 2897.5544f, 4032.241f, 50.1419f };
			*fParam2 = 192.8091f;
			return 1;
			break;
		case 39:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		case 40:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		case 41:
			*uParam1 = { 1397f, 3725.8f, 33.0673f };
			*fParam2 = -3.7534f;
			return 1;
			break;
		case 42:
			*uParam1 = { Vector(4.0205f, -2975.3408f, 798.4536f) + Vector(1f, 0f, 0f) };
			*fParam2 = 90f;
			return 1;
			break;
		case 43:
			*uParam1 = { 709.0244f, -2916.4788f, 5.0589f };
			*fParam2 = 355.326f;
			return 1;
			break;
		case 44:
			*uParam1 = { 643.5248f, -2917.325f, 5.1337f };
			*fParam2 = 334.1068f;
			return 1;
			break;
		case 45:
			*uParam1 = { 595.2742f, -2819.1826f, 5.0559f };
			*fParam2 = 46.8853f;
			return 1;
			break;
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 47:
			*uParam1 = { 314.4171f, 965.207f, 208.4024f };
			*fParam2 = 165.9421f;
			return 1;
			break;
		case 49:
			*uParam1 = { 3321.5369f, 4975.4546f, 25.9097f };
			*fParam2 = 221.228f;
			return 1;
			break;
		case 48:
			*uParam1 = { -111.1318f, 6316.479f, 30.4904f };
			*fParam2 = (42f + 180f);
			return 1;
			break;
		case 50:
			*uParam1 = { -731.3261f, 106.68f, 54.7169f };
			*fParam2 = 98.9764f;
			return 1;
			break;
		case 51:
			*uParam1 = { -1257.5f, -526.9999f, 30.2361f };
			*fParam2 = 220.9554f;
			return 1;
			break;
		case 52:
			*uParam1 = { 736.9869f, -2050.678f, 28.2718f };
			*fParam2 = 83.9922f;
			return 1;
			break;
		case 66:
			*uParam1 = { 262.5499f, -2540.1504f, 4.8433f };
			*fParam2 = -64.1366f;
			return 1;
			break;
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 55:
			*uParam1 = { -315.7789f, 6201.355f, 30.4322f };
			*fParam2 = 127.7547f;
			return 1;
			break;
		case 56:
			*uParam1 = { 118.0988f, -1264.916f, 32.3637f };
			*fParam2 = -63f;
			return 1;
			break;
		case 57:
			*uParam1 = { 37.5988f, -1351.5203f, 28.2954f };
			*fParam2 = 90.0339f;
			return 1;
			break;
		case 61:
			*uParam1 = { -558.2693f, 261.1167f, 82.07f };
			*fParam2 = 84.6231f;
			return 1;
			break;
		case 62:
			*uParam1 = { -196.9999f, 507.9999f, 132.477f };
			*fParam2 = 99.6049f;
			return 1;
			break;
		case 63:
			*uParam1 = { 1312.01f, -1645.87f, 51.2f };
			*fParam2 = 120f;
			return 1;
			break;
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 69:
			*uParam1 = { -818.7374f, 6.4824f, 41.2432f };
			*fParam2 = 211.8223f;
			return 1;
			break;
		case 64:
			*uParam1 = { 2091.2583f, 4714.852f, 40.1936f };
			*fParam2 = 136.0867f;
			return 1;
			break;
		case 54:
			*uParam1 = { 1762.59f, 3247.212f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		case 65:
			*uParam1 = { 1764.013f, 3252.902f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		default:
			break;
	}
	return 0;
}

void func_40()//Position - 0x2533
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		__LIB_12__.func_175(0);
		MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 20f, true, true, false, false);
		if (!bLocal_3025)
		{
			STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
		}
		CAM::DO_SCREEN_FADE_IN(500);
	}
}

void func_59(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4)//Position - 0x2A65
{
	CAM::SET_WIDESCREEN_BORDERS(bParam0, 0);
	if (iParam3 == 1)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), !bParam0, 64);
	}
	else
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), !bParam0, 0);
	}
	CAM::RENDER_SCRIPT_CAMS(bParam0, bParam1, iParam2, true, false, 0);
	HUD::CLEAR_HELP(true);
	__LIB_7__.func_279(bParam0, 1, iParam4, 0, 0, 0, 0);
	__LIB_8__.func_770(bParam0);
	HUD::DISPLAY_HUD(!bParam0);
	HUD::DISPLAY_RADAR(!bParam0);
}

void func_60(bool bParam0, bool bParam1)//Position - 0x2AC9
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_208))
	{
		iLocal_114 = 0;
		__LIB_11__.func_126();
		PED::REMOVE_RELATIONSHIP_GROUP(iLocal_217);
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(-9999f, -9999f, -9999f, 9999f, 9999f, 9999f, 1);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
			PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), true);
			PED::SET_CREATE_RANDOM_COPS(true);
		}
		if (bLocal_130)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_76());
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_11__.func_125());
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_11__.func_124());
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_11__.func_123());
		if (!CAM::IS_SCREEN_FADED_OUT() && !bParam0)
		{
			func_72();
			func_71();
			func_68();
		}
		else
		{
			func_64();
			func_63();
		}
		if (bParam1)
		{
			__LIB_32__.func_762(0);
		}
	}
}

void func_63()//Position - 0x2BDF
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 144)
	{
		iLocal_224[iVar0] = 0;
		Local_196[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_132[iVar0] = 0f;
		fLocal_133[iVar0] = 0f;
		fLocal_134[iVar0] = 0f;
		fLocal_135[iVar0] = 0f;
		iLocal_172[iVar0] = 0;
		fLocal_136[iVar0] = 0f;
		iLocal_173[iVar0] = 0;
		iLocal_218[iVar0] = 0;
		iLocal_174[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		iLocal_225[iVar0] = 0;
		iVar0++;
	}
	iLocal_179 = 0;
	iVar0 = 0;
	while (iVar0 < 35)
	{
		iLocal_226[iVar0] = 0;
		Local_197[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_147[iVar0] = 0f;
		fLocal_148[iVar0] = 0f;
		fLocal_149[iVar0] = 0f;
		fLocal_150[iVar0] = 0f;
		iLocal_178[iVar0] = 0;
		iLocal_219[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iLocal_228[iVar0] = 0;
		iVar0++;
	}
	iLocal_181 = 0;
	iVar0 = 0;
	while (iVar0 < 28)
	{
		iLocal_227[iVar0] = 0;
		Local_198[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_141[iVar0] = 0f;
		fLocal_142[iVar0] = 0f;
		fLocal_143[iVar0] = 0f;
		fLocal_144[iVar0] = 0f;
		iLocal_175[iVar0] = 0;
		fLocal_145[iVar0] = 0f;
		iLocal_176[iVar0] = 0;
		iLocal_220[iVar0] = 0;
		iLocal_177[iVar0] = 0;
		iVar0++;
	}
	iLocal_180 = 0;
	iLocal_183 = 0;
	iLocal_186 = 0;
	iLocal_187 = 0;
	iLocal_188 = 0;
}

void func_64()//Position - 0x2D6B
{
	func_67();
	func_66();
	func_65();
}

void func_65()//Position - 0x2D7F
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 28)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_227[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_227[iVar0], false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_227[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_227[iVar0]);
				}
				iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_227[iVar0], -1, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != PLAYER::PLAYER_PED_ID())
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
					{
						PED::DELETE_PED(&iVar1);
					}
				}
			}
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_227[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_227[iVar0]));
			}
		}
		iLocal_176[iVar0] = 0;
		if (!bLocal_110 && !bLocal_123)
		{
			if (iLocal_175[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_175[iVar0], &cLocal_208);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 28)
	{
		if (!iLocal_220[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_220[iVar0]);
		}
		iVar0++;
	}
}

void func_66()//Position - 0x2E76
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_226[iVar0]))
		{
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_226[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_226[iVar0]));
			}
		}
		iLocal_178[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!iLocal_219[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_219[iVar0]);
		}
		iVar0++;
	}
	iLocal_184 = 0;
	iLocal_181 = 0;
}

void func_67()//Position - 0x2EF3
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 144)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_224[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_224[iVar0], false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_224[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_224[iVar0]);
				}
				iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_224[iVar0], -1, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != PLAYER::PLAYER_PED_ID())
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
					{
						PED::DELETE_PED(&iVar1);
					}
				}
			}
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_224[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_224[iVar0]));
			}
		}
		if (!bLocal_110 && !bLocal_123)
		{
			if (iLocal_172[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_172[iVar0], &cLocal_208);
			}
		}
		iLocal_173[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 144)
	{
		if (!iLocal_218[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_218[iVar0]);
		}
		iVar0++;
	}
	iLocal_183 = 0;
	iLocal_179 = 0;
}

void func_68()//Position - 0x2FF2
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 28)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_227[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_227[iVar0], false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_227[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_227[iVar0]);
				}
			}
			func_70(iLocal_227[iVar0]);
			__LIB_11__.func_122(iLocal_227[iVar0]);
		}
		iLocal_176[iVar0] = 0;
		iLocal_177[iVar0] = 0;
		if (!bLocal_110 && !bLocal_123)
		{
			if (iLocal_175[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_175[iVar0], &cLocal_208);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 28)
	{
		if (!iLocal_220[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_220[iVar0]);
		}
		iVar0++;
	}
	iLocal_185 = 0;
}

void func_70(int iParam0)//Position - 0x30D6
{
	float fVar0;
	int iVar1;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false);
		if (!PED::IS_PED_INJURED(iVar1))
		{
			if (!iVar1 == PLAYER::PLAYER_PED_ID())
			{
				fVar0 = ENTITY::GET_ENTITY_SPEED(iParam0);
				if (fVar0 < 8f)
				{
					fVar0 = 8f;
				}
				if (fVar0 > 62.9f)
				{
					fVar0 = 62.9f;
				}
				TASK::TASK_VEHICLE_MISSION(iVar1, iParam0, 0, 1, fVar0, 786603, 5f, 5f, true);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar1, 8192, true);
				if (bLocal_131)
				{
					PED::SET_PED_FLEE_ATTRIBUTES(iVar1, 65536, true);
					PED::SET_PED_FLEE_ATTRIBUTES(iVar1, 2, false);
				}
				PED::SET_PED_COMBAT_ATTRIBUTES(iVar1, 6, false);
			}
		}
	}
}

void func_71()//Position - 0x3170
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_226[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_226[iVar0], false))
			{
				ENTITY::SET_ENTITY_COLLISION(iLocal_226[iVar0], true, false);
			}
			__LIB_11__.func_122(iLocal_226[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!iLocal_219[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_219[iVar0]);
		}
		iVar0++;
	}
	iLocal_184 = 0;
	iLocal_181 = 0;
}

void func_72()//Position - 0x31F4
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 144)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_224[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_224[iVar0], false))
			{
				ENTITY::SET_ENTITY_COLLISION(iLocal_224[iVar0], true, false);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_224[iVar0], false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_224[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_224[iVar0]);
				}
			}
			func_70(iLocal_224[iVar0]);
			__LIB_11__.func_122(iLocal_224[iVar0]);
		}
		iLocal_173[iVar0] = 0;
		iLocal_174[iVar0] = 0;
		if (!bLocal_110 && !bLocal_123)
		{
			if (iLocal_172[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_172[iVar0], &cLocal_208);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 144)
	{
		if (!iLocal_218[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_218[iVar0]);
		}
		iVar0++;
	}
	iLocal_183 = 0;
	iLocal_179 = 0;
}

int func_76()//Position - 0x3309
{
	if (iLocal_221 == 0)
	{
		return joaat("A_M_Y_Business_01");
	}
	return iLocal_221;
}

void func_83()//Position - 0x34AE
{
	if (HUD::DOES_BLIP_EXIST(iLocal_337))
	{
		HUD::REMOVE_BLIP(&iLocal_337);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_338))
	{
		HUD::REMOVE_BLIP(&iLocal_338);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_339))
	{
		HUD::REMOVE_BLIP(&iLocal_339);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_328))
	{
		HUD::REMOVE_BLIP(&iLocal_328);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_410))
	{
		HUD::REMOVE_BLIP(&iLocal_410);
	}
	__LIB_7__.func_20(1);
	__LIB_20__.func_615(&Local_283, 0);
	HUD::CLEAR_PRINTS();
	if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		HUD::CLEAR_HELP(true);
	}
}

void func_92()//Position - 0x3839
{
	CAM::SET_USE_HI_DOF();
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_342, false))
	{
		VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_342, VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_342));
		ENTITY::SET_ENTITY_HEALTH(iLocal_342, ENTITY::GET_ENTITY_HEALTH(iLocal_342), 0);
	}
	if ((!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_342, false) || __LIB_11__.func_142(&iLocal_342)) || FIRE::IS_ENTITY_ON_FIRE(iLocal_342))
	{
	}
	if (PED::IS_PED_INJURED(iLocal_354))
	{
	}
	if (!PED::IS_PED_INJURED(func_2()))
	{
	}
	VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_342, false, false, false);
	switch (iLocal_314)
	{
		case 0:
			func_97();
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("trailers2"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_ld_test_01"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("G_M_Y_SalvaGoon_01"));
			STREAMING::REMOVE_PTFX_ASSET();
			STREAMING::REMOVE_ANIM_DICT("MISSFAM1_YACHTBATTLEinCar01_");
			STREAMING::REMOVE_ANIM_DICT("MISSFAM1_YACHTBATTLEonYacht01_");
			STREAMING::REMOVE_ANIM_DICT("MISSFAM1_YACHTBATTLEonYacht02_");
			STREAMING::REMOVE_ANIM_DICT("MISSFAM1_YACHTBATTLEinCar02_");
			STREAMING::REMOVE_ANIM_DICT("veh@drivebystd_ds");
			__LIB_0__.func_202(&uLocal_446, 3);
			__LIB_0__.func_202(&uLocal_446, 5);
			__LIB_0__.func_203(&uLocal_446, 2, iLocal_354, "JIMMY", 0, 1);
			CUTSCENE::REQUEST_CUTSCENE("FAM_1_EXT_2", 8);
			HUD::CLEAR_PRINTS();
			__LIB_7__.func_279(1, 1, 1, 0, 0, 0, 0);
			AUDIO::STOP_AUDIO_SCENE("FAM1_HIGHWAY_CHASE");
			__LIB_0__.func_202(&uLocal_446, 3);
			__LIB_0__.func_202(&uLocal_446, 5);
			__LIB_0__.func_203(&uLocal_446, 2, iLocal_354, "JIMMY", 0, 1);
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(PLAYER::PLAYER_PED_ID(), 0f);
			__LIB_0__.func_296();
			OBJECT::DELETE_OBJECT(&iLocal_341);
			iLocal_314++;
			break;
		case 1:
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Franklin", PLAYER::PLAYER_PED_ID(), 0);
			if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING() && __LIB_0__.func_90())
			{
				iLocal_314++;
			}
			break;
		case 2:
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_342, "Amandas_car", 0, 0, 0);
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_354, "Jimmy", 0, 0, 0);
			__LIB_6__.func_849(1);
			CUTSCENE::START_CUTSCENE(0);
			RECORDING::REPLAY_START_EVENT(4);
			iLocal_314++;
			break;
		case 3:
		case 4:
			if (iLocal_314 == 3)
			{
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					func_40();
					iLocal_314 = 4;
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
			{
				__LIB_12__.func_175(0);
			}
			if (CUTSCENE::GET_CUTSCENE_TIME() > 32000)
			{
				OBJECT::DOOR_SYSTEM_SET_HOLD_OPEN(Global_41748[4 /*31*/], false);
				OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(Global_41748[4 /*31*/], 1f, true, false);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0))
			{
				PED::DELETE_PED(&iLocal_354);
				PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 3000, 0f, true, false);
				PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Walk"), false, 1, false);
			}
			if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				RECORDING::REPLAY_STOP_EVENT();
				SYSTEM::SETTIMERA(0);
				iLocal_314 = 5;
			}
			break;
		case 5:
			if (SYSTEM::TIMERA() > 1000)
			{
				__LIB_7__.func_279(0, 1, 1, 0, 0, 0, 0);
				func_93();
			}
			break;
	}
}

void func_93()//Position - 0x3AB0
{
	func_59(0, 0, 2000, 1, 1);
	if (__LIB_20__.func_728() == 1)
	{
		__LIB_0__.func_387(4, PLAYER::PLAYER_PED_ID(), 0);
	}
	__LIB_6__.func_823(0, 0);
	HUD::CLEAR_PRINTS();
	func_933();
	func_40();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_97()//Position - 0x3CB5
{
	int iVar0;
	VEHICLE::REMOVE_VEHICLE_RECORDING(1, "Fam1New");
	VEHICLE::REMOVE_VEHICLE_RECORDING(1, "Fam1Cine");
	VEHICLE::REMOVE_VEHICLE_RECORDING(2, "Fam1New");
	VEHICLE::REMOVE_VEHICLE_RECORDING(3, "Fam1Cam");
	VEHICLE::REMOVE_VEHICLE_RECORDING(4, "Fam1Cam");
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("G_M_Y_SalvaGoon_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("phantom"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("tr3"));
	STREAMING::REMOVE_ANIM_DICT("MISSFAM1_YachtBattleincar01_");
	STREAMING::REMOVE_ANIM_SET("drive_by@low_ds");
	STREAMING::REMOVE_PTFX_ASSET();
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("FAMILY_1_CHASE_01");
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("FAMILY_1_CHASE_02");
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("CAR_CRASHES_01");
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("FAMILY_1_BOAT_STRAIN");
	iVar0 = 0;
	while (iVar0 <= 10)
	{
		if (iLocal_172[iVar0] != 0)
		{
			VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_172[iVar0], "Fam1");
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 10)
	{
		if (iLocal_175[iVar0] != 0)
		{
			VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_175[iVar0], "Fam1");
		}
		iVar0++;
	}
	func_98(&iLocal_348, 0);
	func_98(&iLocal_347, 0);
}

void func_98(int iParam0, bool bParam1)//Position - 0x3DA1
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST((*iParam0)[iVar0]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY((*iParam0)[iVar0], true, false);
			if (bParam1)
			{
				VEHICLE::DELETE_VEHICLE(iParam0[iVar0]);
			}
			else
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam0[iVar0]);
			}
		}
		iVar0++;
	}
}

void func_100()//Position - 0x3E4E
{
	func_261();
	if (iLocal_315 < 7 && !ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1127.7976f, -1980.4473f, 12.1875f, 75f, 75f, 75f, false, true, 0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_342, false))
		{
			if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_342) > 0f)
			{
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_342, 0f);
			}
			if (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iLocal_342) > 0f)
			{
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iLocal_342, 0f);
			}
			VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(iLocal_342, true);
		}
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_96))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_342, false))
		{
			if (ENTITY::IS_ENTITY_IN_WATER(iLocal_342))
			{
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(iLocal_96, "damage", 0f, false);
			}
			else
			{
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(iLocal_96, "damage", 1f, false);
			}
		}
		else
		{
			GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(iLocal_96, "damage", 0f, false);
		}
	}
	if (iLocal_315 > 0 && iLocal_315 < 5)
	{
		if (__LIB_26__.func_574(39) || !__LIB_10__.func_829(39))
		{
			__LIB_0__.func_324("YB_BLEWSHOP");
			func_6();
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_56[0]) && !CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		PED::DELETE_PED(&(iLocal_56[0]));
	}
	if ((!__LIB_20__.func_675(39) && CAM::IS_SCREEN_FADED_OUT()) && iLocal_315 <= 1)
	{
		if (!CAM::IS_SCREEN_FADING_IN())
		{
			CAM::DO_SCREEN_FADE_IN(500);
		}
	}
	switch (iLocal_315)
	{
		case 0:
			if ((!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING() && !__LIB_18__.func_197(&Local_283, 1)) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 9f, 3);
				func_97();
				func_253();
				iLocal_315++;
			}
			break;
		case 1:
			if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING() && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				if (!__LIB_0__.func_382(4, PLAYER::PLAYER_PED_ID()))
				{
					__LIB_11__.func_952(4, PLAYER::PLAYER_PED_ID());
				}
				__LIB_29__.func_730(1);
				__LIB_37__.func_433(39, 0);
				__LIB_0__.func_203(&uLocal_446, 3, 0, "HAO", 0, 1);
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(PLAYER::PLAYER_PED_ID(), false);
				__LIB_0__.func_203(&uLocal_446, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
				__LIB_37__.func_433(39, 1);
				iLocal_3123 = 0;
				iLocal_3119 = 0;
				__LIB_9__.func_981(&uLocal_422, 0, 0);
				Global_113386.f_668.f_70 = 0;
				iLocal_3116 = MISC::GET_GAME_TIMER();
				__LIB_0__.func_210("YB_OBJ6", 7500, 1);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_342, false);
				iLocal_3127 = MISC::GET_GAME_TIMER();
				iLocal_3118 = 0;
				iLocal_315++;
			}
			break;
		case 2:
		case 3:
		case 4:
		case 5:
			if (((iLocal_315 == 2 && !__LIB_18__.func_197(&Local_283, 1)) && (MISC::GET_GAME_TIMER() - iLocal_3127) > 5000) && CAM::IS_GAMEPLAY_CAM_RENDERING())
			{
				if (__LIB_35__.func_984(&uLocal_446, "FAM1AUD", "FAM1_FIX2", 9, 0, 0, 0))
				{
					iLocal_315 = 4;
				}
			}
			if ((iLocal_315 == 4 && !__LIB_18__.func_197(&Local_283, 1)) && !CAM::IS_GAMEPLAY_CAM_RENDERING())
			{
				if (Global_113386.f_18574.f_389 == 1 && !BitTest(Global_113386.f_24979.f_2, 0))
				{
					if (__LIB_35__.func_984(&uLocal_446, "FAM1AUD", "FAM1_HAO_SRL", 9, 0, 0, 0))
					{
						iLocal_315 = 5;
					}
				}
				if (Global_113386.f_18574.f_389 == 1 && BitTest(Global_113386.f_24979.f_2, 0))
				{
					if (__LIB_35__.func_984(&uLocal_446, "FAM1AUD", "FAM1_HAO_SRW", 9, 0, 0, 0))
					{
						iLocal_315 = 5;
					}
				}
				if (Global_113386.f_18574.f_389 == 0)
				{
					if (__LIB_35__.func_984(&uLocal_446, "FAM1AUD", "FAM1_HAO_SR", 9, 0, 0, 0))
					{
						iLocal_315 = 5;
					}
				}
			}
			func_232();
			if (__LIB_20__.func_674(39))
			{
				if (HUD::IS_MESSAGE_BEING_DISPLAYED() && !AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					HUD::CLEAR_PRINTS();
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_342, false))
			{
				if (ENTITY::GET_ENTITY_HEALTH(iLocal_342) >= 1000 && VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_342) >= 1000f)
				{
					AUDIO::SET_VEHICLE_AUDIO_ENGINE_DAMAGE_FACTOR(iLocal_342, 0f);
					AUDIO::ENABLE_VEHICLE_FANBELT_DAMAGE(iLocal_342, false);
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_1_CAR_BREAKS_DOWN"))
					{
						AUDIO::STOP_AUDIO_SCENE("FAMILY_1_CAR_BREAKS_DOWN");
					}
					if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_96))
					{
						GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_96, false);
					}
				}
				if ((ENTITY::GET_ENTITY_HEALTH(iLocal_342) >= 1000 && VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_342) >= 1000f) && !__LIB_20__.func_674(39))
				{
					__LIB_42__.func_613(7, "STAGE_FIX_CAR_AND_TAKE_JIMMY_HOME", 1, 0, 0, 1);
					PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
					HUD::REMOVE_BLIP(&iLocal_328);
					__LIB_0__.func_151("AM_H_CARMOD" /* GXT: Mod garages are available at ~BLIP_CAR_MOD_SHOP~ Visit a mod garage for repairs and upgrades. */, -1);
					__LIB_0__.func_320(iLocal_342, -1);
					iLocal_3124 = 0;
					iLocal_3125 = 0;
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(0f, 9f, 3);
					iLocal_315 = 6;
				}
			}
			break;
		case 6:
		case 7:
		case 8:
			if ((!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && iLocal_3124 == 0) && !Global_113386.f_20118.f_262)
			{
				if (!func_149())
				{
					__LIB_0__.func_151("YB_MODAPP", 12000);
				}
				iLocal_3124 = 1;
			}
			if (((!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && iLocal_3124) && iLocal_3125 == 0) && !Global_113386.f_20118.f_262)
			{
				if (!func_149())
				{
					__LIB_0__.func_151("YB_CARAPP", -1);
				}
				iLocal_3125 = 1;
			}
			if (iLocal_315 == 6)
			{
				__LIB_38__.func_169(&Local_283, -828.5845f, 172.413f, 69.4003f, 7f, 7f, 1.75f, 1, iLocal_354, 0, 0, iLocal_342, "YB_OBJ7", "CMN_JLEAVE" /* GXT: ~s~Return to ~b~Jimmy.~s~ */, "", "", "CMN_JLEAVE" /* GXT: ~s~Return to ~b~Jimmy.~s~ */, "YB_GETIN", "CMN_GENGETBCK" /* GXT: ~s~Get back in the ~b~car. */, 0, 1, 1, -1);
				if (__LIB_10__.func_488(39) > 20f)
				{
					if (__LIB_35__.func_984(&uLocal_446, "FAM1AUD", "FAM1_HOME", 9, 0, 0, 0))
					{
						iLocal_3126 = 0;
						iLocal_315 = 7;
					}
				}
			}
			switch (iLocal_3126)
			{
				case 0:
					if (__LIB_0__.func_529(PLAYER::PLAYER_PED_ID(), -828.5845f, 172.413f, 69.4503f, 1) < 100f)
					{
						CUTSCENE::REQUEST_CUTSCENE("FAM_1_EXT_2", 8);
						STREAMING::REQUEST_MODEL(joaat("prop_lrggate_02_ld"));
						iLocal_3126++;
					}
					break;
				case 1:
					if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
					{
						CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Franklin", PLAYER::PLAYER_PED_ID(), 0);
						iLocal_3126++;
					}
					break;
			}
			if (__LIB_38__.func_169(&Local_283, -828.5845f, 172.413f, 69.4003f, 5f, 5f, 1.75f, 1, iLocal_354, 0, 0, iLocal_342, "YB_OBJ7", "CMN_JLEAVE" /* GXT: ~s~Return to ~b~Jimmy.~s~ */, "", "", "CMN_JLEAVE" /* GXT: ~s~Return to ~b~Jimmy.~s~ */, "YB_GETIN", "CMN_GENGETBCK" /* GXT: ~s~Get back in the ~b~car. */, 0, 1, 1, -1))
			{
				while (!__LIB_6__.func_762(iLocal_342, 1093140480, 1, 1056964608, 0, 1, 0))
				{
					RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("M_FatherAndSon", 0);
					SYSTEM::WAIT(0);
				}
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 4f, 3);
				iLocal_313 = 0;
				iLocal_3022 = 11;
			}
			if (!__LIB_18__.func_197(&Local_283, 1) && iLocal_315 == 7)
			{
				if (__LIB_35__.func_984(&uLocal_446, "FAM1AUD", "FAM1_FJCHAT", 9, 0, 0, 0))
				{
					iLocal_315 = 8;
				}
			}
			if ((iLocal_315 == 8 && (MISC::GET_GAME_TIMER() - iLocal_3128) > 10000) && !__LIB_18__.func_197(&Local_283, 1))
			{
				if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
				{
					if (__LIB_35__.func_984(&uLocal_446, "FAM1AUD", "FAM1_FRKILL", 9, 0, 0, 0))
					{
						iLocal_3128 = MISC::GET_GAME_TIMER();
					}
				}
			}
			if (!HUD::DOES_BLIP_EXIST(Local_283.f_5) || ENTITY::IS_ENTITY_IN_WATER(iLocal_342))
			{
				if (!__LIB_0__.func_436())
				{
					__LIB_0__.func_488(1);
				}
			}
			else if (__LIB_0__.func_438(PLAYER::PLAYER_PED_ID(), iLocal_354))
			{
				if (__LIB_0__.func_436())
				{
					__LIB_0__.func_488(0);
				}
			}
			break;
	}
	if (iLocal_315 > 1 && iLocal_315 < 6)
	{
		func_101();
	}
}

void func_101()//Position - 0x458F
{
	int iVar0;
	int iVar1;
	if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_342, false))
	{
		iVar0 = __LIB_12__.func_172();
		iVar1 = iVar0;
		if (!iLocal_3119 && !ENTITY::IS_ENTITY_DEAD(iLocal_342, false))
		{
			if (ENTITY::GET_ENTITY_HEALTH(iLocal_342) >= 1000 && VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_342) >= 1000f)
			{
				if (__LIB_35__.func_984(&uLocal_446, "FAM1AUD", "FAM1_RECON", 9, 0, 0, 0))
				{
					iLocal_3120 = 0;
					iLocal_3119 = 1;
				}
			}
		}
		if ((((((!iLocal_3118 && !AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()) && !__LIB_18__.func_197(&Local_283, 1)) && iLocal_315 <= 4) && !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && __LIB_10__.func_488(39) < 6f) && ENTITY::GET_ENTITY_HEALTH(iLocal_342) < 1000)
		{
			if (__LIB_35__.func_984(&uLocal_446, "FAM1AUD", "FAM1_HAO", 9, 0, 0, 0))
			{
				iLocal_3118 = 1;
			}
		}
		if ((((MISC::GET_GAME_TIMER() - iLocal_3116) > 18000 && !AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()) && !__LIB_18__.func_197(&Local_283, 1)) || ((iLocal_3117 - iVar1) != 0 && !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())))
		{
			switch (iVar0)
			{
				case 10:
				case 53:
				case 12:
				case 50:
					if (__LIB_35__.func_984(&uLocal_446, "FAM1AUD", "FAM1_MOD4", 9, 0, 0, 0))
					{
						iLocal_3116 = MISC::GET_GAME_TIMER();
					}
					break;
				case 38:
					if (__LIB_35__.func_984(&uLocal_446, "FAM1AUD", "FAM1_MOD2", 9, 0, 0, 0))
					{
						iLocal_3116 = MISC::GET_GAME_TIMER();
					}
					break;
				case 56:
				case 58:
					if (__LIB_35__.func_984(&uLocal_446, "FAM1AUD", "FAM1_MOD1", 9, 0, 0, 0))
					{
						iLocal_3116 = MISC::GET_GAME_TIMER();
					}
					break;
				case 60:
					if (__LIB_35__.func_984(&uLocal_446, "FAM1AUD", "FAM1_MOD6", 9, 0, 0, 0))
					{
						iLocal_3116 = MISC::GET_GAME_TIMER();
					}
					break;
				case 47:
					if (__LIB_35__.func_984(&uLocal_446, "FAM1AUD", "FAM1_MOD3", 9, 0, 0, 0))
					{
						iLocal_3116 = MISC::GET_GAME_TIMER();
					}
					break;
				case 8:
					if (__LIB_35__.func_984(&uLocal_446, "FAM1AUD", "FAM1_MOD5", 9, 0, 0, 0))
					{
						iLocal_3116 = MISC::GET_GAME_TIMER();
					}
					break;
				case 3:
				case 4:
				case 5:
				case 7:
				case 9:
				case 13:
				case 15:
				case 23:
				case 26:
				case 27:
				case 31:
				case 28:
				case 33:
				case 40:
				case 44:
				case 46:
					if (__LIB_35__.func_984(&uLocal_446, "FAM1AUD", "FAM1_MODG", 9, 0, 0, 0))
					{
						iLocal_3116 = MISC::GET_GAME_TIMER();
					}
					break;
				}
		}
		if (((((iLocal_3117 == iVar1 && (MISC::GET_GAME_TIMER() - iLocal_3116) > 20000) && !__LIB_18__.func_197(&Local_283, 1)) && !AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()) && !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && !ENTITY::IS_ENTITY_DEAD(iLocal_342, false))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_342, false) && !TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_342))
			{
				if (iLocal_3120 == 0)
				{
					iLocal_3120 = 1;
				}
				else if (__LIB_35__.func_984(&uLocal_446, "FAM1AUD", "FAM1_NOMOD", 9, 0, 0, 0))
				{
					iLocal_3116 = MISC::GET_GAME_TIMER();
				}
			}
		}
		iLocal_3117 = iVar1;
	}
}

int func_149()//Position - 0x732B
{
	if (Global_113386.f_20118.f_262)
	{
		return 1;
	}
	return 0;
}

void func_232()//Position - 0xF982
{
	if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_342, false))
	{
		if (iLocal_3121 == 0)
		{
			iLocal_328 = __LIB_6__.func_825(iLocal_342, 0, 0);
			if (iLocal_3122 == 0)
			{
				__LIB_0__.func_210("CMN_GENGETBCK" /* GXT: ~s~Get back in the ~b~car. */, 7500, 1);
				iLocal_3122 = 1;
			}
			iLocal_3121 = 1;
		}
	}
	else if (iLocal_3121 == 1)
	{
		if (iLocal_3123 == 0)
		{
			__LIB_0__.func_210("YB_OBJ6", 7500, 1);
			iLocal_3123 = 1;
		}
		HUD::REMOVE_BLIP(&iLocal_328);
		iLocal_3121 = 0;
	}
}

void func_253()//Position - 0x1034B
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("trailers2"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("tr3"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("phantom"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("G_M_Y_SalvaGoon_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_ld_test_01"));
}

void func_261()//Position - 0x1048E
{
	int iVar0;
	int iVar1;
	if (CAM::IS_SCREEN_FADED_IN())
	{
		iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
		if (iVar0 == INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-812.0607f, 179.5117f, 71.1531f, "v_michael"))
		{
			if (INTERIOR::IS_VALID_INTERIOR(iVar0) && INTERIOR::IS_INTERIOR_READY(iVar0))
			{
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 47 /*INPUT_DETONATE*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 38 /*INPUT_PICKUP*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 46 /*INPUT_TALK*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 140 /*INPUT_MELEE_ATTACK_LIGHT*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 141 /*INPUT_MELEE_ATTACK_HEAVY*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 142 /*INPUT_MELEE_ATTACK_ALTERNATE*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 143 /*INPUT_MELEE_BLOCK*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 142 /*INPUT_MELEE_ATTACK_ALTERNATE*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 69 /*INPUT_VEH_ATTACK*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 70 /*INPUT_VEH_ATTACK2*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 92 /*INPUT_VEH_PASSENGER_ATTACK*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 99 /*INPUT_VEH_SELECT_NEXT_WEAPON*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 115 /*INPUT_VEH_FLY_SELECT_NEXT_WEAPON*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 99 /*INPUT_VEH_SELECT_NEXT_WEAPON*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 100 /*INPUT_VEH_SELECT_PREV_WEAPON*/, true);
				if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, true))
				{
					if (iVar1 != joaat("WEAPON_UNARMED") && iVar1 != joaat("OBJECT"))
					{
						WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
					}
				}
				if (WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1))
				{
					if (iVar1 != joaat("WEAPON_UNARMED") && iVar1 != joaat("OBJECT"))
					{
						WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"));
					}
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_342))
		{
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_342, false) || FIRE::IS_ENTITY_ON_FIRE(iLocal_342))
			{
				__LIB_0__.func_324("CMN_GENDEST" /* GXT: ~s~The car was destroyed. */);
				func_6();
			}
			if (__LIB_11__.func_142(&iLocal_342))
			{
				__LIB_0__.func_324("CMN_GENSTCK" /* GXT: ~s~The car got stuck. */);
				func_6();
			}
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_342, false))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_342, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true) > 150f)
				{
					if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_342))
					{
						__LIB_0__.func_324("YB_FAIL2");
						SYSTEM::SETTIMERA(0);
						AUDIO::TRIGGER_MUSIC_EVENT("FAM1_FAIL");
						func_6();
					}
				}
			}
		}
	}
}

void func_262()//Position - 0x1066E
{
	CAM::SET_USE_HI_DOF();
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_342, false))
	{
		VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_342, VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_342));
		ENTITY::SET_ENTITY_HEALTH(iLocal_342, ENTITY::GET_ENTITY_HEALTH(iLocal_342), 0);
	}
	if ((!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_342, false) || __LIB_11__.func_142(&iLocal_342)) || FIRE::IS_ENTITY_ON_FIRE(iLocal_342))
	{
		__LIB_0__.func_324("CMN_GENDEST" /* GXT: ~s~The car was destroyed. */);
		func_6();
	}
	if (PED::IS_PED_INJURED(iLocal_354))
	{
		__LIB_0__.func_324("YB_FAIL1");
		func_6();
	}
	if (!PED::IS_PED_INJURED(func_2()))
	{
	}
	switch (iLocal_313)
	{
		case 0:
			__LIB_32__.func_812(39, 1, 0);
			__LIB_32__.func_780(39, 0);
			func_97();
			func_253();
			__LIB_9__.func_981(&uLocal_422, 0, 0);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("trailers2"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_ld_test_01"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("G_M_Y_SalvaGoon_01"));
			STREAMING::REMOVE_PTFX_ASSET();
			STREAMING::REMOVE_ANIM_DICT("MISSFAM1_YACHTBATTLEinCar01_");
			STREAMING::REMOVE_ANIM_DICT("MISSFAM1_YACHTBATTLEonYacht01_");
			STREAMING::REMOVE_ANIM_DICT("MISSFAM1_YACHTBATTLEonYacht02_");
			STREAMING::REMOVE_ANIM_DICT("MISSFAM1_YACHTBATTLEinCar02_");
			STREAMING::REMOVE_ANIM_DICT("veh@drivebystd_ds");
			STREAMING::REQUEST_CLIP_SET("clipset@missfam1_jimmy_sit");
			CUTSCENE::REQUEST_CUTSCENE("FAM_1_MCS_2", 8);
			HUD::CLEAR_PRINTS();
			__LIB_7__.func_279(1, 1, 1, 0, 0, 0, 0);
			AUDIO::STOP_AUDIO_SCENE("FAM1_HIGHWAY_CHASE");
			__LIB_0__.func_202(&uLocal_446, 3);
			__LIB_0__.func_202(&uLocal_446, 5);
			iLocal_3114 = 0;
			iLocal_3115 = 0;
			__LIB_0__.func_296();
			__LIB_0__.func_203(&uLocal_446, 2, iLocal_354, "JIMMY", 0, 1);
			__LIB_6__.func_833();
			OBJECT::DELETE_OBJECT(&iLocal_341);
			iLocal_313++;
			break;
		case 1:
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Michael", PLAYER::PLAYER_PED_ID(), 0);
			}
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Jimmy", iLocal_354, 0);
			}
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Franklin", func_2(), 0);
			}
			if ((STREAMING::HAS_CLIP_SET_LOADED("clipset@missfam1_jimmy_sit") && !AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()) && __LIB_0__.func_90())
			{
				iLocal_313++;
			}
			break;
		case 2:
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_342, "Amandas_car", 0, 0, 0);
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(func_2(), "Franklin", 0, 0, 0);
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_354, "Jimmy", 0, 0, 0);
			iLocal_3113 = 0;
			CUTSCENE::SET_CUTSCENE_FADE_VALUES(false, true, false, false);
			RECORDING::REPLAY_START_EVENT(4);
			CUTSCENE::START_CUTSCENE(0);
			iLocal_313++;
			break;
		case 3:
			if (CUTSCENE::IS_CUTSCENE_PLAYING() && iLocal_3113 == 0)
			{
				MISC::CLEAR_AREA(-1127.7976f, -1980.4473f, 12.1875f, 150f, true, false, false, false);
				func_40();
				iLocal_3113 = 1;
			}
			if ((IntToFloat(CUTSCENE::GET_CUTSCENE_TIME()) > 11000f && CUTSCENE::HAS_CUTSCENE_CUT_THIS_FRAME()) && iLocal_3114 == 0)
			{
				__LIB_0__.func_151("YB_TAXI", 9000);
				iLocal_3114 = 1;
			}
			if (((IntToFloat(CUTSCENE::GET_CUTSCENE_TIME()) > 23000f && iLocal_3114 == 1) && iLocal_3115 == 0) && HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				HUD::CLEAR_HELP(true);
				iLocal_3115 = 1;
			}
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
			if (CUTSCENE::GET_CUTSCENE_TIME() >= 8332 && CUTSCENE::GET_CUTSCENE_TIME() < 14300)
			{
				MISC::CLEAR_AREA_OF_VEHICLES(-1127.7976f, -1980.4473f, 12.1875f, 150f, false, false, false, false, false, false, 0);
			}
			if (CUTSCENE::GET_CUTSCENE_TIME() > 27850)
			{
				__LIB_10__.func_490(1);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Amandas_car", joaat("sentinel2")))
			{
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_342, 5f);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_342, true);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
			{
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_342, 5f);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0) || CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0))
			{
				if (__LIB_20__.func_728() != 1)
				{
					__LIB_32__.func_807(&iLocal_56, 1);
					__LIB_41__.func_658(&iLocal_56, 1, 1, 1);
				}
			}
			if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_354, false) && !ENTITY::IS_ENTITY_DEAD(iLocal_342, false))
				{
					PED::SET_PED_IN_VEHICLE_CONTEXT(iLocal_354, MISC::GET_HASH_KEY("MISS_FAMILY1_JIMMY_SIT"));
					PED::SET_PED_INTO_VEHICLE(iLocal_354, iLocal_342, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_354, true, false);
				}
				if (__LIB_20__.func_728() != 1)
				{
					__LIB_32__.func_807(&iLocal_56, 1);
					__LIB_41__.func_658(&iLocal_56, 1, 1, 1);
				}
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(PLAYER::PLAYER_PED_ID(), false);
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_342, false))
				{
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_342, -1);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), true, false);
				}
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(PLAYER::PLAYER_PED_ID(), false);
				VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_342, true);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				RECORDING::REPLAY_STOP_EVENT();
				__LIB_7__.func_279(0, 1, 1, 0, 0, 0, 0);
				func_40();
				iLocal_3022 = 10;
				iLocal_313++;
			}
			break;
	}
}

void func_318()//Position - 0x166D8
{
	func_261();
	if (!PED::IS_PED_INJURED(func_2()))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_342, false))
		{
			if (!PED::IS_PED_IN_VEHICLE(func_2(), iLocal_342, false))
			{
				PED::SET_PED_CAN_RAGDOLL(func_2(), false);
			}
			else
			{
				PED::SET_PED_CAN_RAGDOLL(func_2(), true);
			}
		}
	}
	else
	{
		__LIB_0__.func_324("CMN_FDIED" /* GXT: ~s~Franklin died. */);
		func_83();
		AUDIO::TRIGGER_MUSIC_EVENT("FAM1_FAIL");
		func_6();
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_96))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_342, false))
		{
			if (ENTITY::IS_ENTITY_IN_WATER(iLocal_342))
			{
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(iLocal_96, "damage", 0f, false);
			}
			else
			{
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(iLocal_96, "damage", 1f, false);
			}
		}
		else
		{
			GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(iLocal_96, "damage", 0f, false);
		}
	}
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 101 /*INPUT_VEH_ROOF*/, true);
	if (PED::IS_PED_INJURED(iLocal_354))
	{
		__LIB_0__.func_324("YB_FAIL1");
		func_6();
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_346, false))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_346))
		{
			func_376();
		}
	}
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_371))
	{
		if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_371) >= 1f)
		{
			if (!ENTITY::IS_ENTITY_DEAD(func_2(), false) && !ENTITY::IS_ENTITY_DEAD(iLocal_342, false))
			{
				if (!PED::IS_PED_IN_VEHICLE(func_2(), iLocal_342, false))
				{
					PED::SET_PED_INTO_VEHICLE(func_2(), iLocal_342, 0);
				}
			}
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_346, false))
	{
		if (__LIB_0__.func_76(PLAYER::PLAYER_PED_ID(), iLocal_346, 1) > 500f || !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_346))
		{
			VEHICLE::DELETE_VEHICLE(&iLocal_346);
			VEHICLE::DELETE_VEHICLE(&iLocal_345);
			PED::DELETE_PED(&iLocal_349);
			PED::DELETE_PED(&iLocal_351);
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_345, false))
	{
		if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_345))
		{
			VEHICLE::DELETE_VEHICLE(&iLocal_345);
			PED::DELETE_PED(&iLocal_349);
		}
	}
	switch (iLocal_307)
	{
		case 0:
			func_97();
			func_253();
			iLocal_3111 = 0;
			iLocal_3112 = 0;
			iLocal_3110 = 0;
			iLocal_307++;
			break;
		case 1:
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.25f);
			if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (__LIB_35__.func_984(&uLocal_446, "FAM1AUD", "FAM1_COAX", 9, 0, 0, 0))
				{
					__LIB_9__.func_981(&uLocal_422, 0, 0);
					PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 3.95f);
					iLocal_307++;
				}
			}
			break;
		case 2:
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.25f);
			if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (__LIB_35__.func_984(&uLocal_446, "FAM1AUD", "FAM1_DIST", 9, 0, 0, 0))
				{
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3.5f, 5f, 3);
					iLocal_307++;
				}
			}
			break;
		case 3:
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.25f);
			HUD::SET_RADAR_ZOOM(0);
			PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 14.9f);
			iLocal_307++;
			break;
		case 4:
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.25f);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_345, false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_345))
				{
					func_349(iLocal_345, fLocal_389);
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_346, false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_346))
				{
					VEHICLE::SET_PLAYBACK_SPEED(iLocal_346, fLocal_389);
				}
			}
			if ((!ENTITY::DOES_ENTITY_EXIST(iLocal_346) || __LIB_0__.func_76(PLAYER::PLAYER_PED_ID(), iLocal_346, 1) > 250f) || !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_346))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("trailers2"));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_ld_test_01"));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("G_M_Y_SalvaGoon_01"));
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_350);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_351);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_352);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_353);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_349);
				STREAMING::REMOVE_PTFX_ASSET();
				STREAMING::REMOVE_ANIM_DICT("MISSFAM1_YACHTBATTLEinCar01_");
				STREAMING::REMOVE_ANIM_DICT("MISSFAM1_YACHTBATTLEonYacht01_");
				STREAMING::REMOVE_ANIM_DICT("MISSFAM1_YACHTBATTLEonYacht02_");
				STREAMING::REMOVE_ANIM_DICT("MISSFAM1_YACHTBATTLEinCar02_");
				STREAMING::REMOVE_ANIM_DICT("veh@drivebystd_ds");
				if (!PED::IS_PED_INJURED(func_2()))
				{
					PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(func_2(), true);
				}
				iLocal_3110 = 0;
				func_60(0, 1);
				CUTSCENE::REMOVE_CUTSCENE();
				func_83();
				PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 10.9f);
				__LIB_42__.func_613(5, "STAGE_TAKE_CAR_TO_CHOP_SHOP", 0, 0, 0, 1);
				if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_96) && !ENTITY::IS_ENTITY_DEAD(iLocal_342, false))
				{
					iLocal_96 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY_BONE("scr_fam1_veh_smoke", iLocal_342, 0f, 0f, 0f, 0f, 0f, 0f, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_342, "overheat"), 1f, false, false, false);
				}
				AUDIO::SET_VEHICLE_AUDIO_ENGINE_DAMAGE_FACTOR(iLocal_342, 0.75f);
				AUDIO::ENABLE_VEHICLE_FANBELT_DAMAGE(iLocal_342, true);
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(iLocal_96, "damage", 1f, false);
				VEHICLE::SET_VEHICLE_STRONG(iLocal_342, true);
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_342, true, true, false);
				}
				func_40();
				iLocal_307++;
			}
			break;
		case 5:
			if (PED::IS_PED_IN_VEHICLE(func_2(), iLocal_342, false))
			{
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.35f);
				if (__LIB_35__.func_984(&uLocal_446, "FAM1AUD", "FAM1_CHOP", 9, 0, 0, 0))
				{
					PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 7.9f);
					iLocal_307++;
				}
				else
				{
					__LIB_38__.func_169(&Local_283, -1104.3127f, -1975.6726f, 12.0489f, 3.9f, 3.9f, 2.25f, 1, func_2(), 0, 0, iLocal_342, "YB_OBJ5", "CMN_FLEAVE" /* GXT: ~s~Return to ~b~Franklin.~s~ */, "", "", "CMN_FLEAVE" /* GXT: ~s~Return to ~b~Franklin.~s~ */, "YB_GETIN", "CMN_GENGETBCK" /* GXT: ~s~Get back in the ~b~car. */, 0, 1, 1, -1);
				}
			}
			break;
		case 6:
			__LIB_38__.func_169(&Local_283, -1104.3127f, -1975.6726f, 12.0489f, 3.9f, 3.9f, 2.25f, 1, func_2(), 0, 0, iLocal_342, "YB_OBJ5", "CMN_FLEAVE" /* GXT: ~s~Return to ~b~Franklin.~s~ */, "", "", "CMN_FLEAVE" /* GXT: ~s~Return to ~b~Franklin.~s~ */, "YB_GETIN", "CMN_GENGETBCK" /* GXT: ~s~Get back in the ~b~car. */, 0, 1, 1, -1);
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.35f);
			if (!__LIB_18__.func_197(&Local_283, 2))
			{
				PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 6.9f);
				iLocal_307++;
			}
			break;
		case 7:
			__LIB_38__.func_169(&Local_283, -1104.3127f, -1975.6726f, 12.0489f, 3.9f, 3.9f, 2.25f, 1, func_2(), 0, 0, iLocal_342, "YB_OBJ5", "CMN_FLEAVE" /* GXT: ~s~Return to ~b~Franklin.~s~ */, "", "", "CMN_FLEAVE" /* GXT: ~s~Return to ~b~Franklin.~s~ */, "YB_GETIN", "CMN_GENGETBCK" /* GXT: ~s~Get back in the ~b~car. */, 0, 1, 1, -1);
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.75f);
			if (AUDIO::PREPARE_MUSIC_EVENT("FAM1_RADIO_START"))
			{
				PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 5.45f);
				AUDIO::TRIGGER_MUSIC_EVENT("FAM1_RADIO_START");
				iLocal_307++;
			}
			break;
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
			if (__LIB_38__.func_169(&Local_283, -1104.3127f, -1975.6726f, 12.0489f, 3.9f, 3.9f, 2.25f, 1, func_2(), 0, 0, iLocal_342, "YB_OBJ5", "CMN_FLEAVE" /* GXT: ~s~Return to ~b~Franklin.~s~ */, "", "", "CMN_FLEAVE" /* GXT: ~s~Return to ~b~Franklin.~s~ */, "YB_GETIN", "CMN_GENGETBCK" /* GXT: ~s~Get back in the ~b~car. */, 0, 1, 1, -1))
			{
				__LIB_6__.func_833();
				while (!__LIB_6__.func_762(iLocal_342, 4f, 1, 1056964608, 0, 1, 0))
				{
					SYSTEM::WAIT(0);
				}
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				__LIB_37__.func_433(39, 1);
				__LIB_32__.func_812(39, 1, 0);
				__LIB_20__.func_748(39);
				__LIB_20__.func_615(&Local_283, 0);
				iLocal_3022 = 9;
			}
			if (!__LIB_18__.func_197(&Local_283, 1) && iLocal_307 == 8)
			{
				if (__LIB_35__.func_984(&uLocal_446, "FAM1AUD", "FAM1_DRIVE", 9, 0, 0, 0))
				{
					iLocal_307 = 9;
				}
			}
			if (!__LIB_18__.func_197(&Local_283, 1) && iLocal_307 == 9)
			{
				if (__LIB_35__.func_984(&uLocal_446, "FAM1AUD", "FAM1_CAB", 9, 0, 0, 0))
				{
					iLocal_307 = 10;
				}
			}
			if (!__LIB_18__.func_197(&Local_283, 1) && iLocal_307 == 10)
			{
				if (__LIB_35__.func_984(&uLocal_446, "FAM1AUD", "FAM1_OKAY", 9, 0, 0, 0))
				{
					if (!PED::IS_PED_INJURED(func_2()))
					{
						TASK::TASK_USE_MOBILE_PHONE(func_2(), true, 1);
						PED::SET_PED_PHONE_PALETTE_IDX(func_2(), __LIB_11__.func_865(1));
					}
					SYSTEM::SETTIMERA(0);
					iLocal_307 = 11;
				}
			}
			if ((!__LIB_18__.func_197(&Local_283, 1) && iLocal_307 == 11) && SYSTEM::TIMERA() > 3300)
			{
				if (__LIB_35__.func_984(&uLocal_446, "FAM1AUD", "FAM1_FCALL", 9, 0, 0, 0))
				{
					iLocal_307 = 12;
				}
			}
			if (!__LIB_18__.func_197(&Local_283, 1) && iLocal_307 == 12)
			{
				if (__LIB_35__.func_984(&uLocal_446, "FAM1AUD", "FAM1_CHEERS", 9, 0, 0, 0))
				{
					if (!PED::IS_PED_INJURED(func_2()))
					{
						TASK::TASK_USE_MOBILE_PHONE(func_2(), false, 1);
					}
					iLocal_307 = 13;
				}
			}
			if (!__LIB_18__.func_197(&Local_283, 1) && iLocal_307 == 13)
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -1104.3127f, -1975.6726f, 12.0489f, true) > 700f)
				{
					if (__LIB_35__.func_984(&uLocal_446, "FAM1AUD", "FAM1_TALK1", 9, 0, 0, 0))
					{
						iLocal_307 = 14;
					}
				}
				else
				{
					iLocal_307 = 14;
				}
			}
			if (!__LIB_18__.func_197(&Local_283, 1) && iLocal_307 == 14)
			{
				if (__LIB_35__.func_984(&uLocal_446, "FAM1AUD", "FAM1_TALK2", 9, 0, 0, 0))
				{
					iLocal_3106 = 0;
					iLocal_307 = 15;
				}
			}
			if ((!__LIB_18__.func_197(&Local_283, 1) && !iLocal_3106) && iLocal_307 >= 15)
			{
				iLocal_3106 = 1;
			}
			if (!__LIB_18__.func_197(&Local_283, 1) && iLocal_3107 == 0)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -848.5854f, -1785.8088f, 39.20773f, -908.4215f, -1853.1115f, 31.637165f, 21.25f, false, true, 0))
				{
					if (__LIB_35__.func_984(&uLocal_446, "FAM1AUD", "FAM1_DIROFF", 9, 0, 0, 0))
					{
						iLocal_3107 = 1;
					}
				}
			}
			if (!__LIB_18__.func_197(&Local_283, 1) && iLocal_3108 == 0)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -769.8086f, -1758.8694f, 31.080801f, -803.90454f, -1764.792f, 27.92837f, 16.5f, false, true, 0))
				{
					if (__LIB_35__.func_984(&uLocal_446, "FAM1AUD", "FAM1_LEFT", 9, 0, 0, 0))
					{
						iLocal_3108 = 1;
					}
				}
			}
			if (!__LIB_18__.func_197(&Local_283, 1) && iLocal_3109 == 0)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -646.46576f, -1480.473f, 12.647015f, -653.4559f, -1520.6343f, 7.573039f, 16.5f, false, true, 0))
				{
					if (__LIB_35__.func_984(&uLocal_446, "FAM1AUD", "FAM1_LEFT", 9, 0, 0, 0))
					{
						iLocal_3109 = 1;
					}
				}
			}
			break;
	}
	if (iLocal_307 > 7)
	{
		if (__LIB_0__.func_529(PLAYER::PLAYER_PED_ID(), -1104.3127f, -1975.6726f, 12.0489f, 1) < (100f * 1.8f))
		{
			if (iLocal_3111 == 1 && iLocal_3112 == 0)
			{
				if (__LIB_35__.func_984(&uLocal_446, "FAM1AUD", "FAM1_ARRIVE", 9, 0, 0, 0))
				{
					iLocal_3112 = 1;
				}
			}
			if (iLocal_3111 == 0)
			{
				__LIB_0__.func_296();
				iLocal_307 = 15;
				iLocal_3106 = 1;
				iLocal_3111 = 1;
			}
		}
	}
	if (__LIB_0__.func_529(PLAYER::PLAYER_PED_ID(), -1104.3127f, -1975.6726f, 12.0489f, 1) < (100f * 1.6f))
	{
		if (iLocal_3110 == 0)
		{
			CUTSCENE::REQUEST_CUTSCENE("FAM_1_MCS_2", 8);
			__LIB_40__.func_942(1, 96, 2000, 0, 0);
			iLocal_3110 = 1;
		}
		else
		{
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Jimmy", iLocal_354, 0);
			}
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Franklin", func_2(), 0);
			}
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Michael", PLAYER::PLAYER_PED_ID(), 0);
			}
		}
	}
	if (!HUD::DOES_BLIP_EXIST(Local_283.f_5) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_342, false))
	{
		if (!__LIB_0__.func_436())
		{
			__LIB_0__.func_488(1);
		}
	}
	else if (__LIB_0__.func_436())
	{
		if (__LIB_0__.func_438(PLAYER::PLAYER_PED_ID(), func_2()))
		{
			__LIB_0__.func_488(0);
		}
	}
}

void func_349(int iParam0, float fParam1)//Position - 0x18440
{
	float fVar0;
	struct<3> Var1;
	int iVar2;
	fVar0 = MISC::GET_FRAME_TIME();
	fVar0 = (fVar0 * 1000f);
	bLocal_129 = false;
	if (!bLocal_111)
	{
		if (bLocal_110)
		{
			__LIB_11__.func_121();
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				MISC::CLEAR_AREA(Var1, 1000f, true, false, false, false);
			}
			bLocal_111 = true;
		}
	}
	else if (!bLocal_110)
	{
		__LIB_11__.func_126();
		bLocal_111 = false;
	}
	if (bLocal_110)
	{
		fParam1 = 1f;
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	}
	if (!bLocal_104)
	{
		if (iLocal_99)
		{
			fLocal_156 = 0f;
		}
		else
		{
			fLocal_156 = 1f;
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
			{
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					if (__LIB_11__.func_140(PLAYER::PLAYER_PED_ID(), iParam0))
					{
						iLocal_109 = 1;
					}
					else
					{
						iLocal_109 = 0;
					}
				}
				fLocal_153 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iParam0);
				VEHICLE::SET_PLAYBACK_SPEED(iParam0, ((fParam1 * fLocal_154) * fLocal_156));
				if (bLocal_108)
				{
					func_372(iParam0, fLocal_153);
					func_371(iParam0, fLocal_163);
					if (fLocal_158 > 1000f)
					{
						if (iLocal_195 == 0)
						{
							func_370(iParam0, fLocal_163);
						}
						fVar0 = ((fLocal_153 + 4000f) + (SYSTEM::TO_FLOAT(iLocal_195) * 2000f));
						func_369(iParam0, fVar0, fLocal_157);
						iLocal_195++;
						if (iLocal_195 > 2)
						{
							fLocal_158 = 0f;
						}
					}
					else
					{
						iLocal_195 = 0;
						fLocal_158 = (fLocal_158 + (MISC::GET_FRAME_TIME() * 1000f));
					}
				}
			}
		}
		iVar2 = 0;
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
			{
				iVar2 = 1;
			}
		}
		if (fLocal_153 == 0f || CAM::IS_SCREEN_FADED_OUT())
		{
			iVar2 = 1;
		}
		if (iVar2 && !bLocal_116)
		{
			if (!iLocal_98)
			{
				func_366(iParam0, ((fParam1 * fLocal_154) * fLocal_156), 0);
				if (!iLocal_119)
				{
				}
				iLocal_119 = 0;
			}
			if (bLocal_101)
			{
				func_365(iParam0);
			}
			if (!iLocal_98)
			{
				func_352(iParam0, ((fParam1 * fLocal_154) * fLocal_156), 0);
			}
		}
		if (iLocal_106)
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iLocal_229 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					Local_199 = { ENTITY::GET_ENTITY_COORDS(iLocal_229, true) };
					ENTITY::GET_ENTITY_QUATERNION(iLocal_229, &fLocal_137, &fLocal_138, &fLocal_139, &fLocal_140);
				}
			}
			iLocal_106 = 0;
		}
		if (iLocal_105)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_229))
			{
				__LIB_11__.func_122(iLocal_230);
				iLocal_230 = iLocal_229;
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_230, false))
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_230, Local_199, true, false, false, true);
				ENTITY::SET_ENTITY_QUATERNION(iLocal_230, fLocal_137, fLocal_138, fLocal_139, fLocal_140);
			}
			fLocal_152 = fLocal_155;
			iLocal_98 = 1;
			iLocal_105 = 0;
		}
		if (iLocal_98)
		{
			while (!func_350(&iParam0, fLocal_152))
			{
				SYSTEM::WAIT(0);
			}
			iLocal_99 = 1;
		}
		if (iLocal_112)
		{
			iLocal_112 = 0;
		}
	}
}

int func_350(int iParam0, float fParam1)//Position - 0x186DB
{
	if (!iLocal_113)
	{
		iLocal_98 = 1;
		func_64();
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*iParam0);
				VEHICLE::SET_VEHICLE_FIXED(*iParam0);
			}
			if (!iLocal_182 == -1)
			{
				while (!func_351(iParam0, iLocal_182, fParam1, 1, 0, 0, 0, 0))
				{
					SYSTEM::WAIT(0);
				}
				if (!bLocal_103)
				{
					iLocal_99 = 1;
					fLocal_156 = 0f;
					iLocal_183 = 0;
					iLocal_185 = 0;
					iLocal_184 = 0;
					iLocal_179 = 0;
					iLocal_180 = 0;
					iLocal_181 = 0;
					iLocal_186 = 0;
					iLocal_187 = 0;
					iLocal_188 = 0;
				}
			}
		}
		iLocal_113 = 1;
	}
	else
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0))
			{
				VEHICLE::SET_PLAYBACK_SPEED(*iParam0, ((1f * fLocal_154) * fLocal_156));
				func_351(iParam0, iLocal_182, fParam1, 1, 0, 0, 0, 0);
			}
		}
		fLocal_153 = fParam1;
		iLocal_189 = 0;
		iLocal_192 = 0;
		fLocal_168 = 0f;
		fLocal_167 = 0f;
		func_352(*iParam0, ((1f * fLocal_154) * fLocal_156), 1);
		func_366(*iParam0, ((1f * fLocal_154) * fLocal_156), 1);
		func_365(*iParam0);
		if ((iLocal_186 == 0 && iLocal_187 == 0) && iLocal_188 == 0)
		{
			iLocal_99 = 0;
			iLocal_98 = 0;
			iLocal_113 = 0;
			return 1;
		}
	}
	return 0;
}

int func_351(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x1880D
{
	float fVar0;
	if (iParam1 > 0)
	{
		VEHICLE::REQUEST_VEHICLE_RECORDING(iParam1, &cLocal_208);
		if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam1, &cLocal_208))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(*iParam0, false);
					if (bParam4)
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(*iParam0, iParam1, &cLocal_208, 10f, 786603);
					}
					else
					{
						if (iParam1 != iLocal_190 && iParam1 != iLocal_191)
						{
							if (bParam7)
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*iParam0, iParam1, &cLocal_208, 2 | 4, 0, 786603);
							}
							else if (bParam6)
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*iParam0, iParam1, &cLocal_208, 1 | 4, 0, 786603);
							}
							else
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*iParam0, iParam1, &cLocal_208, true);
							}
						}
						else
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*iParam0, iParam1, &cLocal_208, true);
						}
						VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*iParam0, fParam2);
						if (bParam5)
						{
							VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(*iParam0, true);
						}
						return 1;
					}
				}
				else if (VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(*iParam0) == VEHICLE::GET_VEHICLE_RECORDING_ID(iParam1, &cLocal_208))
				{
					fVar0 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(*iParam0);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*iParam0, (fParam2 - fVar0));
					if (!bParam3)
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*iParam0);
						VEHICLE::REQUEST_VEHICLE_RECORDING(iParam1, &cLocal_208);
					}
					if (bParam5)
					{
						VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(*iParam0, true);
					}
					return 1;
				}
				else
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*iParam0);
					ENTITY::FREEZE_ENTITY_POSITION(*iParam0, false);
					if (bParam4)
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(*iParam0, iParam1, &cLocal_208, 10f, 786603);
					}
					else if (iParam1 != iLocal_190 && iParam1 != iLocal_191)
					{
						if (bParam7)
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*iParam0, iParam1, &cLocal_208, 2 | 4, 0, 786603);
						}
						else if (bParam6)
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*iParam0, iParam1, &cLocal_208, 1 | 4, 0, 786603);
						}
						else
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*iParam0, iParam1, &cLocal_208, true);
						}
					}
					else
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*iParam0, iParam1, &cLocal_208, true);
					}
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*iParam0, fParam2);
					if (bParam5)
					{
						VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(*iParam0, true);
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_352(int iParam0, float fParam1, bool bParam2)//Position - 0x189F3
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	float fVar6;
	float fVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	int iVar13;
	int iVar14;
	bVar9 = PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID());
	bVar10 = PED::CAN_CREATE_RANDOM_DRIVER();
	bVar11 = PED::CAN_CREATE_RANDOM_BIKE_RIDER();
	bVar12 = false;
	if (bVar9)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		}
		Var5 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		iVar0 = iLocal_185;
		while (iVar0 < 28)
		{
			if (iLocal_176[iVar0] != 99)
			{
				if (iLocal_176[iVar0] == 0)
				{
					if (iLocal_175[iVar0] > 0)
					{
						if (!iLocal_98)
						{
							if (fLocal_153 > (fLocal_145[iVar0] - (7000f * fParam1)))
							{
								if (__LIB_11__.func_110(iLocal_220[iVar0]))
								{
									MISC::SET_BIT(&(iLocal_177[iVar0]), 0);
								}
								else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_220[iVar0]))
								{
									MISC::SET_BIT(&(iLocal_177[iVar0]), 2);
								}
								MISC::CLEAR_BIT(&(iLocal_177[iVar0]), 1);
								iLocal_176[iVar0]++;
								iLocal_187++;
							}
						}
						else
						{
							fVar6 = (fLocal_153 - fLocal_145[iVar0]);
							fVar6 = (fVar6 * fLocal_146[iVar0]);
							if (fVar6 >= 0f)
							{
								if (fVar6 < func_363(iLocal_175[iVar0]))
								{
									if (__LIB_11__.func_110(iLocal_220[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_177[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_220[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_177[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_177[iVar0]), 1);
									iLocal_176[iVar0]++;
									iLocal_187++;
								}
								else
								{
									iLocal_176[iVar0] = 99;
								}
							}
						}
					}
					else
					{
						iLocal_176[iVar0] = 99;
					}
				}
				else if (iLocal_176[iVar0] == 1)
				{
					bVar8 = false;
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_175[iVar0], &cLocal_208);
					if (BitTest(iLocal_177[iVar0], 0))
					{
						STREAMING::REQUEST_MODEL(__LIB_11__.func_123());
						bVar8 = STREAMING::HAS_MODEL_LOADED(__LIB_11__.func_123());
					}
					else if (!bLocal_125 && ((!BitTest(iLocal_177[iVar0], 2) && bVar10) || (BitTest(iLocal_177[iVar0], 2) && bVar11)))
					{
						bVar8 = true;
					}
					else
					{
						STREAMING::REQUEST_MODEL(func_76());
						bVar8 = STREAMING::HAS_MODEL_LOADED(func_76());
					}
					if (bVar8)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_227[iVar0]))
						{
							STREAMING::REQUEST_MODEL(iLocal_220[iVar0]);
							if (STREAMING::HAS_MODEL_LOADED(iLocal_220[iVar0]) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_175[iVar0], &cLocal_208))
							{
								if (fLocal_153 >= (fLocal_145[iVar0] - (fLocal_166 * fParam1)))
								{
									if ((iLocal_112 || bParam2) || (!bLocal_129 && !func_362(Local_198[iVar0 /*3*/], Var5, 5f, fLocal_164)))
									{
										if (bLocal_108)
										{
											func_361(Local_198[iVar0 /*3*/], Var5, fLocal_157);
										}
										iLocal_227[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_220[iVar0], Local_198[iVar0 /*3*/], 0f, false, false, false);
										if (iLocal_220[iVar0] == joaat("polmav"))
										{
											VEHICLE::SET_VEHICLE_LIVERY(iLocal_227[iVar0], 0);
										}
										if (iLocal_121 && !BitTest(iLocal_177[iVar0], 0))
										{
											func_360(iLocal_227[iVar0]);
										}
										if (BitTest(iLocal_177[iVar0], 3))
										{
											ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_227[iVar0], true);
										}
										ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_227[iVar0], Local_198[iVar0 /*3*/], false, false, true);
										ENTITY::SET_ENTITY_QUATERNION(iLocal_227[iVar0], fLocal_141[iVar0], fLocal_142[iVar0], fLocal_143[iVar0], fLocal_144[iVar0]);
										if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_220[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_220[iVar0]))
										{
											VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_227[iVar0], 5f);
										}
										if (!BitTest(iLocal_177[iVar0], 0))
										{
											VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_227[iVar0], true, true, false);
											if (CLOCK::GET_CLOCK_HOURS() > 19 || CLOCK::GET_CLOCK_HOURS() < 7)
											{
												VEHICLE::SET_VEHICLE_LIGHTS(iLocal_227[iVar0], 3);
											}
										}
										ENTITY::FREEZE_ENTITY_POSITION(iLocal_227[iVar0], true);
										STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_220[iVar0]);
										iLocal_187 = (iLocal_187 - 1);
										iLocal_176[iVar0]++;
										bLocal_129 = true;
									}
								}
							}
						}
						else if (!ENTITY::IS_ENTITY_DEAD(iLocal_227[iVar0], false) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_227[iVar0], false))
						{
							ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_227[iVar0], Local_198[iVar0 /*3*/], false, false, true);
							ENTITY::SET_ENTITY_QUATERNION(iLocal_227[iVar0], fLocal_141[iVar0], fLocal_142[iVar0], fLocal_143[iVar0], fLocal_144[iVar0]);
							if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_220[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_220[iVar0]))
							{
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_227[iVar0], 5f);
							}
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_227[iVar0], true);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_220[iVar0]);
							iLocal_187 = (iLocal_187 - 1);
							iLocal_176[iVar0]++;
						}
					}
				}
				else if (iLocal_176[iVar0] == 2)
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_175[iVar0], &cLocal_208);
					if (!BitTest(iLocal_177[iVar0], 1))
					{
						bVar8 = false;
						if (BitTest(iLocal_177[iVar0], 0))
						{
							STREAMING::REQUEST_MODEL(__LIB_11__.func_123());
							bVar8 = STREAMING::HAS_MODEL_LOADED(__LIB_11__.func_123());
							iVar13 = 2;
						}
						else if (!bLocal_125 && ((!BitTest(iLocal_177[iVar0], 2) && bVar10) || (BitTest(iLocal_177[iVar0], 2) && bVar11)))
						{
							bVar8 = true;
							iVar13 = 1;
						}
						else
						{
							STREAMING::REQUEST_MODEL(func_76());
							bVar8 = STREAMING::HAS_MODEL_LOADED(func_76());
							iVar13 = 0;
						}
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_227[iVar0], false))
						{
							if (!bLocal_129 && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_227[iVar0], -1, false))
							{
								if (bVar8)
								{
									if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_227[iVar0], true), Var5) < 10000f || bParam2) || iLocal_112)
									{
										func_358(&(iLocal_227[iVar0]), iVar13, 1);
										MISC::SET_BIT(&(iLocal_177[iVar0]), 1);
									}
								}
							}
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_227[iVar0], false))
					{
						if (fLocal_153 >= fLocal_145[iVar0])
						{
							if (5 > iLocal_180)
							{
								fVar6 = (fLocal_153 - fLocal_145[iVar0]);
								fVar6 = (fVar6 * fLocal_146[iVar0]);
								if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_175[iVar0], &cLocal_208))
								{
									if (fVar6 < VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_175[iVar0], &cLocal_208))
									{
										Var3 = { ENTITY::GET_ENTITY_COORDS(iLocal_227[iVar0], true) };
										Var4 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_175[iVar0], fVar6, &cLocal_208) };
										if (((!func_362(Var3, Var5, 5f, fLocal_164) && func_362(Var4, Var5, 5f, fLocal_164)) && !iLocal_112) && !bParam2)
										{
											if (!BitTest(iLocal_177[iVar0], 1))
											{
												func_358(&(iLocal_227[iVar0]), iVar13, 1);
											}
											iLocal_180++;
											iLocal_176[iVar0]++;
										}
										else if (((!bLocal_129 || BitTest(iLocal_177[iVar0], 1)) || iLocal_112) || bParam2)
										{
											if (func_351(&(iLocal_227[iVar0]), iLocal_175[iVar0], fVar6, 1, 0, 0, bLocal_127, bLocal_126))
											{
												VEHICLE::SET_PLAYBACK_SPEED(iLocal_227[iVar0], (fParam1 * fLocal_146[iVar0]));
												if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_227[iVar0], false))
												{
													if (BitTest(iLocal_177[iVar0], 0))
													{
														VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_227[iVar0], true, true, false);
														VEHICLE::SET_VEHICLE_SIREN(iLocal_227[iVar0], true);
														VEHICLE::SET_VEHICLE_LIGHTS(iLocal_227[iVar0], 2);
														if (!VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_220[iVar0]))
														{
															AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_227[iVar0], true);
														}
													}
												}
												if (!BitTest(iLocal_177[iVar0], 1))
												{
													func_358(&(iLocal_227[iVar0]), iVar13, 1);
												}
												iLocal_180++;
												iLocal_176[iVar0]++;
											}
										}
									}
									else
									{
										if (!BitTest(iLocal_177[iVar0], 1))
										{
											func_358(&(iLocal_227[iVar0]), iVar13, 1);
										}
										iLocal_180++;
										iLocal_176[iVar0]++;
									}
								}
							}
							else
							{
								if (!BitTest(iLocal_177[iVar0], 1))
								{
									func_358(&(iLocal_227[iVar0]), iVar13, 1);
								}
								iLocal_180++;
								iLocal_176[iVar0]++;
							}
						}
					}
					else
					{
						if (!BitTest(iLocal_177[iVar0], 1))
						{
							func_358(&(iLocal_227[iVar0]), iVar13, 1);
						}
						iLocal_180++;
						iLocal_176[iVar0]++;
					}
				}
				else if (iLocal_176[iVar0] == 3)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_227[iVar0], false))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_227[iVar0]))
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_227[iVar0], -1, false);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								if (bVar9)
								{
									if (((!bLocal_102 && !iLocal_99) && !bLocal_118) && (((!bLocal_127 && !bLocal_126) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_227[iVar0])) || __LIB_12__.func_175(iLocal_227[iVar0])))
									{
										if (ENTITY::DOES_ENTITY_EXIST(iVar2))
										{
											bVar8 = false;
											if (bLocal_120)
											{
												bVar8 = true;
											}
											else
											{
												fVar7 = ENTITY::GET_ENTITY_SPEED(iVar2);
												if (fVar7 < 1f)
												{
													bVar8 = true;
												}
												else if (MISC::ABSF((fVar7 - ENTITY::GET_ENTITY_SPEED(iLocal_227[iVar0]))) > 15f)
												{
													bVar8 = true;
												}
												else if (!__LIB_11__.func_138(iLocal_227[iVar0], iVar2, 45f))
												{
													bVar8 = true;
												}
												else if (__LIB_20__.func_444(iVar2, iLocal_227[iVar0], 0))
												{
													bVar8 = true;
												}
											}
											if (bVar8)
											{
												func_353(iLocal_227[iVar0]);
												iLocal_176[iVar0]++;
											}
										}
									}
									else
									{
										VEHICLE::SET_PLAYBACK_SPEED(iLocal_227[iVar0], (fParam1 * fLocal_146[iVar0]));
									}
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_227[iVar0]);
							}
						}
						else
						{
							iLocal_176[iVar0]++;
						}
					}
					else
					{
						iLocal_176[iVar0]++;
					}
				}
				else if (iLocal_176[iVar0] == 4)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_227[iVar0], false))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_227[iVar0]))
						{
							iLocal_176[iVar0]++;
						}
						else
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_227[iVar0], -1, false);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								VEHICLE::SET_PLAYBACK_SPEED(iLocal_227[iVar0], (fParam1 * fLocal_146[iVar0]));
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_227[iVar0]);
							}
							if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_175[iVar0], &cLocal_208))
							{
								if (fLocal_153 > (fLocal_145[iVar0] + VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_175[iVar0], &cLocal_208)))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_227[iVar0]);
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_227[iVar0]);
							}
						}
					}
					else
					{
						iLocal_176[iVar0]++;
					}
				}
				else if (iLocal_176[iVar0] == 5)
				{
					if (!iLocal_227[iVar0] == iLocal_231)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_227[iVar0], false))
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_227[iVar0], -1, false);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								iVar14 = TASK::GET_SCRIPT_TASK_STATUS(iVar1, joaat("SCRIPT_TASK_PERFORM_SEQUENCE"));
								if (iVar14 == 7)
								{
									fVar7 = ENTITY::GET_ENTITY_SPEED(iLocal_227[iVar0]);
									if (fVar7 < 8f)
									{
										fVar7 = 8f;
									}
									if (fVar7 > 62.9f)
									{
										fVar7 = 62.9f;
									}
									TASK::SET_DRIVE_TASK_CRUISE_SPEED(iVar1, fVar7);
								}
							}
						}
						if (!bLocal_110 && !bLocal_123)
						{
							if (iLocal_175[iVar0] > 0)
							{
								VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_175[iVar0], &cLocal_208);
							}
						}
						if (!bLocal_100)
						{
							if (!bLocal_128)
							{
								__LIB_11__.func_122(iLocal_227[iVar0]);
							}
						}
						else if (ENTITY::DOES_ENTITY_EXIST(iLocal_227[iVar0]))
						{
							VEHICLE::DELETE_VEHICLE(&(iLocal_227[iVar0]));
						}
					}
					iLocal_180 = (iLocal_180 - 1);
					iLocal_176[iVar0] = 99;
				}
				if (!bVar12)
				{
					iLocal_185 = iVar0;
					bVar12 = true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		func_68();
	}
}

void func_353(int iParam0)//Position - 0x195D0
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		func_70(iParam0);
		VEHICLE::SET_PLAYBACK_TO_USE_AI(iParam0, 786603);
	}
}

int func_358(var uParam0, int iParam1, bool bParam2)//Position - 0x19791
{
	int iVar0;
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0, false))
	{
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(*uParam0, -1, false))
		{
			if (iParam1 == 2)
			{
				iVar0 = PED::CREATE_PED_INSIDE_VEHICLE(*uParam0, 6, __LIB_11__.func_123(), -1, false, false);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, iLocal_217);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_11__.func_123());
			}
			else if (iParam1 == 1)
			{
				iVar0 = PED::CREATE_RANDOM_PED_AS_DRIVER(*uParam0, true);
				if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*uParam0)))
				{
					PED::GIVE_PED_HELMET(iVar0, true, 4096, -1);
				}
			}
			else
			{
				iVar0 = PED::CREATE_PED_INSIDE_VEHICLE(*uParam0, 4, func_76(), -1, false, false);
				if (bLocal_130)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_76());
				}
			}
			if (bParam2)
			{
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iVar0, true);
				PED::SET_PED_SUFFERS_CRITICAL_HITS(iVar0, false);
				PED::SET_PED_CONFIG_FLAG(iVar0, 32, false);
			}
			if (bLocal_131)
			{
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 8192, true);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 65536, true);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 2, false);
				VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(*uParam0, true);
			}
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
			__LIB_11__.func_109(iVar0);
			bLocal_129 = true;
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_360(int iParam0)//Position - 0x1989F
{
	int iVar0;
	int iVar1;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 12);
	if (iLocal_222 >= -1 && iLocal_223 >= -1)
	{
		while (iVar0 == iLocal_222 || iVar0 == iLocal_223)
		{
			iVar0++;
		}
	}
	else if (iLocal_222 >= -1)
	{
		if (iVar0 == iLocal_222)
		{
			iVar0++;
		}
	}
	iVar1 = iVar0;
	switch (iVar1)
	{
		case 0:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 0, 0);
			break;
		case 1:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 2, 2);
			break;
		case 2:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 4, 4);
			break;
		case 3:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 27, 27);
			break;
		case 4:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 7, 7);
			break;
		case 5:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 73, 73);
			break;
		case 6:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 68, 68);
			break;
		case 7:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 62, 62);
			break;
		case 8:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 132, 132);
			break;
		case 9:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 117, 0);
			break;
		case 10:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 52, 52);
			break;
		case 11:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 88, 88);
			break;
		case 12:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 1, 1);
			break;
		case 13:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 36, 36);
			break;
		case 14:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 95, 95);
			break;
		default:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 73, 73);
			break;
	}
}

void func_361(struct<3> Param0, struct<3> Param1, float fParam2)//Position - 0x19A18
{
	bool bVar0;
	int iVar1;
	bVar0 = true;
	if (!bLocal_111)
	{
		if (!func_362(Param0, Param1, fParam2, 200f))
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				if (!ENTITY::IS_ENTITY_DEAD(iVar1, false))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(iVar1, Param0, fParam2, fParam2, fParam2, false, true, 0))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				MISC::CLEAR_AREA_OF_VEHICLES(Param0, fParam2, false, false, false, false, false, false, 0);
			}
		}
	}
}

int func_362(struct<3> Param0, struct<3> Param1, float fParam2, float fParam3)//Position - 0x19A8B
{
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		if (!bLocal_111)
		{
			if (!iLocal_98)
			{
				if (SYSTEM::VMAG2(Param1 - Param0) - fParam2) < (fParam3 * fParam3)
				{
					if (CAM::IS_SPHERE_VISIBLE(Param0, fParam2))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

float func_363(int iParam0)//Position - 0x19AD2
{
	float fVar0;
	VEHICLE::REQUEST_VEHICLE_RECORDING(iParam0, &cLocal_208);
	while (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam0, &cLocal_208))
	{
		SYSTEM::WAIT(0);
	}
	fVar0 = VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iParam0, &cLocal_208);
	VEHICLE::REMOVE_VEHICLE_RECORDING(iParam0, &cLocal_208);
	return fVar0;
}

void func_365(int iParam0)//Position - 0x19B88
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	bool bVar3;
	bool bVar4;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		bVar3 = false;
		bVar4 = false;
		iVar0 = iLocal_184;
		while (iVar0 < 35)
		{
			switch (iLocal_178[iVar0])
			{
				case 0:
					if (!iLocal_219[iVar0] == 0)
					{
						if (ENTITY::IS_ENTITY_AT_COORD(iParam0, Local_197[iVar0 /*3*/], fLocal_151, fLocal_151, fLocal_151, false, true, 0))
						{
							iLocal_186++;
							iLocal_178[iVar0]++;
						}
					}
					else
					{
						iLocal_178[iVar0] = 99;
					}
					break;
				case 1:
					if (6 > iLocal_181)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_226[iVar0]))
						{
							STREAMING::REQUEST_MODEL(iLocal_219[iVar0]);
							if (STREAMING::HAS_MODEL_LOADED(iLocal_219[iVar0]))
							{
								if ((iLocal_98 || iLocal_112) || (!bLocal_129 && !func_362(Local_197[iVar0 /*3*/], Var1, 5f, fLocal_164)))
								{
									if (bLocal_108)
									{
										func_361(Local_197[iVar0 /*3*/], Var1, fLocal_157);
									}
									iLocal_226[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_219[iVar0], Local_197[iVar0 /*3*/], 0f, false, false, false);
									if (iLocal_219[iVar0] == joaat("polmav"))
									{
										VEHICLE::SET_VEHICLE_LIVERY(iLocal_226[iVar0], 0);
									}
									ENTITY::SET_ENTITY_QUATERNION(iLocal_226[iVar0], fLocal_147[iVar0], fLocal_148[iVar0], fLocal_149[iVar0], fLocal_150[iVar0]);
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_219[iVar0]);
									if (VEHICLE::IS_VEHICLE_MODEL(iLocal_226[iVar0], __LIB_11__.func_124()))
									{
										VEHICLE::SET_VEHICLE_SIREN(iLocal_226[iVar0], true);
										if (!VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_219[iVar0]))
										{
											AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_226[iVar0], true);
										}
									}
									if (VEHICLE::IS_VEHICLE_MODEL(iLocal_226[iVar0], __LIB_11__.func_125()))
									{
										VEHICLE::SET_VEHICLE_COLOURS(iLocal_226[iVar0], 0, 0);
									}
									ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_226[iVar0], true);
									iLocal_186 = (iLocal_186 - 1);
									iLocal_181++;
									iLocal_178[iVar0]++;
									bLocal_129 = true;
								}
							}
						}
						else
						{
							iLocal_186 = (iLocal_186 - 1);
							iLocal_181++;
							iLocal_178[iVar0]++;
						}
					}
					break;
				case 2:
					if (!bVar3)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_226[iVar0], false))
						{
							Var2 = { ENTITY::GET_ENTITY_COORDS(iLocal_226[iVar0], true) };
						}
						if (fLocal_165 == 0f || SYSTEM::VDIST2(Var1, Var2) < (fLocal_165 * fLocal_165))
						{
							if (!__LIB_20__.func_444(iLocal_226[iVar0], iParam0, 0))
							{
								if (!bLocal_100)
								{
									__LIB_11__.func_122(iLocal_226[iVar0]);
								}
								else
								{
									VEHICLE::DELETE_VEHICLE(&(iLocal_226[iVar0]));
								}
								iLocal_181 = (iLocal_181 - 1);
								iLocal_178[iVar0] = 99;
								bVar3 = true;
							}
						}
					}
					break;
			}
			if (iLocal_178[iVar0] != 99)
			{
				if (!bVar4)
				{
					iLocal_184 = iVar0;
					bVar4 = true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		func_71();
	}
}

void func_366(int iParam0, float fParam1, int iParam2)//Position - 0x19E7F
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<3> Var6;
	struct<3> Var7;
	struct<3> Var8;
	float fVar9;
	float fVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	int iVar15;
	int iVar16;
	bool bVar17;
	bool bVar18;
	struct<3> Var19;
	iVar5 = 0;
	bVar12 = PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID());
	bVar13 = PED::CAN_CREATE_RANDOM_DRIVER();
	bVar14 = PED::CAN_CREATE_RANDOM_BIKE_RIDER();
	if (bVar12)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar5 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		}
		Var8 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	}
	iVar1 = 0;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
		{
			fLocal_153 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iParam0);
		}
		iVar16 = -1;
		bVar17 = false;
		bVar18 = false;
		iVar0 = iLocal_183;
		while (iVar0 < 144 && !bVar17)
		{
			if (iLocal_173[iVar0] != 99)
			{
				if (iLocal_173[iVar0] == 0)
				{
					if (iLocal_172[iVar0] > 0 && iLocal_218[iVar0] != 0)
					{
						if (!iLocal_98)
						{
							if (fLocal_153 < (fLocal_136[iVar0] + 20000f))
							{
								if (fLocal_153 >= (fLocal_136[iVar0] - (7000f * fParam1)))
								{
									if (__LIB_11__.func_110(iLocal_218[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_174[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_218[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_174[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_174[iVar0]), 1);
									iLocal_188++;
									iLocal_173[iVar0]++;
								}
								else if (iVar1 > 2)
								{
									bVar17 = true;
								}
								else
								{
									iVar1++;
								}
							}
							else
							{
								func_368(iVar0, 1090519040);
							}
						}
						else
						{
							fVar9 = (fLocal_153 - fLocal_136[iVar0]);
							if (fVar9 >= 0f)
							{
								if (fVar9 < func_363(iLocal_172[iVar0]))
								{
									if (__LIB_11__.func_110(iLocal_218[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_174[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_218[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_174[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_174[iVar0]), 1);
									iLocal_188++;
									iLocal_173[iVar0]++;
								}
								else
								{
									func_368(iVar0, 1090519040);
								}
							}
						}
					}
					else
					{
						func_368(iVar0, 1090519040);
					}
				}
				else if (iLocal_173[iVar0] == 1)
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_172[iVar0], &cLocal_208);
					bVar11 = false;
					if (BitTest(iLocal_174[iVar0], 0))
					{
						STREAMING::REQUEST_MODEL(__LIB_11__.func_123());
						if (STREAMING::HAS_MODEL_LOADED(__LIB_11__.func_123()))
						{
							bVar11 = true;
						}
					}
					else if (!bLocal_125 && ((!BitTest(iLocal_174[iVar0], 2) && bVar13) || (BitTest(iLocal_174[iVar0], 2) && bVar14)))
					{
						bVar11 = true;
					}
					else
					{
						STREAMING::REQUEST_MODEL(func_76());
						bVar11 = STREAMING::HAS_MODEL_LOADED(func_76());
					}
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_224[iVar0]))
					{
						STREAMING::REQUEST_MODEL(iLocal_218[iVar0]);
						if ((STREAMING::HAS_MODEL_LOADED(iLocal_218[iVar0]) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_172[iVar0], &cLocal_208)) && bVar11)
						{
							if (fLocal_153 >= (fLocal_136[iVar0] - (fLocal_166 * fParam1)))
							{
								if ((iLocal_112 || iParam2) || (!bLocal_129 && !func_362(Local_196[iVar0 /*3*/], Var8, 5f, fLocal_164)))
								{
									if (bLocal_108)
									{
										func_361(Local_196[iVar0 /*3*/], Var8, fLocal_157);
									}
									iLocal_224[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_218[iVar0], Local_196[iVar0 /*3*/], 0f, false, false, false);
									if (iLocal_218[iVar0] == joaat("polmav"))
									{
										VEHICLE::SET_VEHICLE_LIVERY(iLocal_224[iVar0], 0);
									}
									if (iLocal_121 && !BitTest(iLocal_174[iVar0], 0))
									{
										func_360(iLocal_224[iVar0]);
									}
									ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_224[iVar0], Local_196[iVar0 /*3*/], false, false, true);
									ENTITY::SET_ENTITY_QUATERNION(iLocal_224[iVar0], fLocal_132[iVar0], fLocal_133[iVar0], fLocal_134[iVar0], fLocal_135[iVar0]);
									if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_218[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_218[iVar0]))
									{
										VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_224[iVar0], 5f);
									}
									if (BitTest(iLocal_174[iVar0], 3))
									{
										ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_224[iVar0], true);
									}
									if (!BitTest(iLocal_174[iVar0], 0))
									{
										VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_224[iVar0], true, true, false);
										if (CLOCK::GET_CLOCK_HOURS() > 19 || CLOCK::GET_CLOCK_HOURS() < 7)
										{
											VEHICLE::SET_VEHICLE_LIGHTS(iLocal_224[iVar0], 3);
										}
									}
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_224[iVar0], true);
									ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_224[iVar0], true);
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_218[iVar0]);
									iLocal_188 = (iLocal_188 - 1);
									iLocal_173[iVar0]++;
									bLocal_129 = true;
								}
								else if (fLocal_153 > fLocal_136[iVar0])
								{
									iLocal_188 = (iLocal_188 - 1);
									func_368(iVar0, 1090519040);
								}
							}
						}
					}
				}
				else if (iLocal_173[iVar0] == 2)
				{
					bVar11 = false;
					if (((iVar3 < 8 && (iVar0 > iLocal_194 || iLocal_194 == 0)) || iLocal_112) || iParam2)
					{
						if (!BitTest(iLocal_174[iVar0], 1))
						{
							if (BitTest(iLocal_174[iVar0], 0))
							{
								STREAMING::REQUEST_MODEL(__LIB_11__.func_123());
								bVar11 = STREAMING::HAS_MODEL_LOADED(__LIB_11__.func_123());
								iVar15 = 2;
							}
							else if (!bLocal_125 && ((!BitTest(iLocal_174[iVar0], 2) && bVar13) || (BitTest(iLocal_174[iVar0], 2) && bVar14)))
							{
								bVar11 = true;
								iVar15 = 1;
							}
							else
							{
								STREAMING::REQUEST_MODEL(func_76());
								bVar11 = STREAMING::HAS_MODEL_LOADED(func_76());
								iVar15 = 0;
							}
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_224[iVar0], false))
							{
								if (!bLocal_129 && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_224[iVar0], -1, false))
								{
									if (bVar11)
									{
										if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_224[iVar0], true), Var8) < 10000f || iParam2) || iLocal_112)
										{
											func_358(&(iLocal_224[iVar0]), iVar15, 0);
											MISC::SET_BIT(&(iLocal_174[iVar0]), 1);
										}
									}
								}
							}
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_224[iVar0], false))
						{
							VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_172[iVar0], &cLocal_208);
							if (fLocal_153 >= fLocal_136[iVar0])
							{
								if (7 > iLocal_179)
								{
									fVar9 = (fLocal_153 - fLocal_136[iVar0]);
									if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_172[iVar0], &cLocal_208))
									{
										if (fVar9 < VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_172[iVar0], &cLocal_208))
										{
											Var6 = { ENTITY::GET_ENTITY_COORDS(iLocal_224[iVar0], true) };
											Var7 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_172[iVar0], fVar9, &cLocal_208) };
											if (!func_362(Var6, Var8, 5f, fLocal_164) && func_362(Var7, Var8, 5f, fLocal_164))
											{
												if (!BitTest(iLocal_174[iVar0], 1))
												{
													func_358(&(iLocal_224[iVar0]), iVar15, 0);
												}
												func_368(iVar0, 1090519040);
											}
											else if (((!bLocal_129 || BitTest(iLocal_174[iVar0], 1)) || iLocal_112) || iParam2)
											{
												if (func_351(&(iLocal_224[iVar0]), iLocal_172[iVar0], fVar9, 1, 0, 0, 1, bLocal_126))
												{
													if (!BitTest(iLocal_174[iVar0], 1))
													{
														func_358(&(iLocal_224[iVar0]), iVar15, 0);
													}
													ENTITY::SET_ENTITY_COLLISION(iLocal_224[iVar0], true, false);
													VEHICLE::SET_PLAYBACK_SPEED(iLocal_224[iVar0], fParam1);
													iLocal_179++;
													iLocal_173[iVar0]++;
												}
											}
										}
										else
										{
											if (!BitTest(iLocal_174[iVar0], 1))
											{
												func_358(&(iLocal_224[iVar0]), iVar15, 0);
											}
											func_368(iVar0, 1090519040);
										}
									}
									else if (fVar9 > VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_172[iVar0], &cLocal_208))
									{
										if (!BitTest(iLocal_174[iVar0], 1))
										{
											func_358(&(iLocal_224[iVar0]), iVar15, 0);
										}
										func_368(iVar0, 1090519040);
									}
								}
								else
								{
									if (!BitTest(iLocal_174[iVar0], 1))
									{
										func_358(&(iLocal_224[iVar0]), iVar15, 0);
									}
									func_368(iVar0, 1090519040);
								}
							}
							else if (iLocal_109 && !bLocal_117)
							{
								if (!BitTest(iLocal_174[iVar0], 1))
								{
									func_358(&(iLocal_224[iVar0]), iVar15, 0);
								}
								func_368(iVar0, 1090519040);
							}
						}
						else
						{
							if (!BitTest(iLocal_174[iVar0], 1))
							{
								func_358(&(iLocal_224[iVar0]), iVar15, 0);
							}
							func_368(iVar0, 1090519040);
						}
						iVar3++;
						iLocal_194 = iVar0;
					}
				}
				else if (iLocal_173[iVar0] == 3)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_224[iVar0], false))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_224[iVar0]))
						{
							iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_224[iVar0], -1, false);
							if (!PED::IS_PED_INJURED(iVar4))
							{
								if (bVar12)
								{
									bVar18 = false;
									if (!bLocal_107)
									{
										if ((!bLocal_102 && !iLocal_99) && __LIB_12__.func_175(iLocal_224[iVar0]))
										{
											if (iVar2 < 3 && (iVar0 > iLocal_193 || iLocal_193 == 0))
											{
												if (!ENTITY::IS_ENTITY_DEAD(iVar5, false))
												{
													bVar11 = false;
													if (!__LIB_11__.func_139(iLocal_224[iVar0], iVar5) || __LIB_20__.func_444(iVar5, iLocal_224[iVar0], 0))
													{
														bVar18 = true;
													}
												}
												iLocal_193 = iVar0;
												iVar2++;
											}
										}
										else if (((!bLocal_122 && !BitTest(iLocal_174[iVar0], 4)) && iVar2 < 3) && (iVar0 > iLocal_193 || iLocal_193 == 0))
										{
											Var19 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam0, ENTITY::GET_ENTITY_COORDS(iLocal_224[iVar0], true)) };
											if (Var19.f_1 < 0f)
											{
												if (MISC::ABSF(Var19.f_1) > MISC::ABSF(Var19.f_0))
												{
													bVar18 = true;
												}
											}
											iVar2++;
											iLocal_193 = iVar0;
										}
									}
									if (bVar18)
									{
										func_353(iLocal_224[iVar0]);
										iLocal_173[iVar0]++;
									}
									else
									{
										VEHICLE::SET_PLAYBACK_SPEED(iLocal_224[iVar0], fParam1);
									}
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_224[iVar0]);
							}
						}
						else
						{
							iLocal_173[iVar0]++;
						}
					}
					else
					{
						iLocal_173[iVar0]++;
					}
				}
				else if (iLocal_173[iVar0] == 4)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_224[iVar0], false))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_224[iVar0]))
						{
							iLocal_173[iVar0]++;
						}
						else
						{
							iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_224[iVar0], -1, false);
							if (!PED::IS_PED_INJURED(iVar4))
							{
								VEHICLE::SET_PLAYBACK_SPEED(iLocal_224[iVar0], fParam1);
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_224[iVar0]);
							}
							if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_172[iVar0], &cLocal_208))
							{
								if (fLocal_153 > (fLocal_136[iVar0] + VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_172[iVar0], &cLocal_208)))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_224[iVar0]);
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_224[iVar0]);
							}
						}
					}
					else
					{
						iLocal_173[iVar0]++;
					}
				}
				else if (iLocal_173[iVar0] == 5)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_224[iVar0], false))
					{
						fVar10 = ENTITY::GET_ENTITY_SPEED(iLocal_224[iVar0]);
					}
					iLocal_179 = (iLocal_179 - 1);
					func_368(iVar0, fVar10);
				}
				if (iVar16 == -1)
				{
					iVar16 = iVar0;
				}
			}
			iVar0++;
		}
		if (iVar16 != -1)
		{
			iLocal_183 = iVar16;
		}
		if (iVar2 < 3)
		{
			iLocal_193 = 0;
		}
		if (iVar3 < 8)
		{
			iLocal_194 = 0;
		}
	}
	else
	{
		func_72();
	}
}

void func_368(int iParam0, float fParam1)//Position - 0x1AA1D
{
	int iVar0;
	if (!iLocal_218[iParam0] == 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_218[iParam0]);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_224[iParam0], false))
	{
		ENTITY::SET_ENTITY_COLLISION(iLocal_224[iParam0], true, false);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_224[iParam0], false);
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_224[iParam0], -1, false);
		if (!PED::IS_PED_INJURED(iVar0) && iVar0 != PLAYER::PLAYER_PED_ID())
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			if (fParam1 < 8f)
			{
				fParam1 = 8f;
			}
			if (fParam1 > 62.9f)
			{
				fParam1 = 62.9f;
			}
			TASK::TASK_VEHICLE_MISSION(iVar0, iLocal_224[iParam0], 0, 1, fParam1, 786603, 5f, 5f, true);
			PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 8192, true);
			if (bLocal_131)
			{
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 65536, true);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 2, false);
			}
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 6, false);
			TASK::SET_DRIVE_TASK_CRUISE_SPEED(iVar0, fParam1);
		}
	}
	if (!bLocal_100)
	{
		if (!bLocal_128)
		{
			__LIB_11__.func_109(iVar0);
			__LIB_11__.func_122(iLocal_224[iParam0]);
		}
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			PED::DELETE_PED(&iVar0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_224[iParam0]))
		{
			VEHICLE::DELETE_VEHICLE(&(iLocal_224[iParam0]));
		}
	}
	if (!bLocal_110 && !bLocal_123)
	{
		if (iLocal_172[iParam0] > 0)
		{
			VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_172[iParam0], &cLocal_208);
		}
	}
	iLocal_173[iParam0] = 99;
}

void func_369(int iParam0, float fParam1, float fParam2)//Position - 0x1AB78
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	float fVar5;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		Var4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
		{
			iVar0 = VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iParam0);
			Var1 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fParam1) };
			Var2 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
			Var3 = { Var2 - Var1 };
			fVar5 = SYSTEM::VMAG(Var3);
			if (fVar5 > fParam2)
			{
				fVar5 = fParam2;
			}
			func_361(Var1, Var4, fVar5);
		}
	}
}

void func_370(int iParam0, float fParam1)//Position - 0x1ABFB
{
	if (!bLocal_111)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > (fParam1 * fParam1))
				{
					STREAMING::SET_VEHICLE_POPULATION_BUDGET(1);
				}
				else
				{
					STREAMING::SET_VEHICLE_POPULATION_BUDGET(0);
				}
			}
		}
	}
}

void func_371(int iParam0, float fParam1)//Position - 0x1AC49
{
	if (!bLocal_111)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > (fParam1 * fParam1))
				{
					VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(1f);
				}
				else
				{
					VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				}
			}
		}
	}
}

void func_372(int iParam0, float fParam1)//Position - 0x1AC97
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
	{
		fVar1 = (fLocal_167 + 2000f);
		fVar2 = (fLocal_168 + 2000f);
		bVar4 = false;
		if (fVar1 < (fParam1 + 25000f))
		{
			iVar0 = VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iParam0);
			if (fVar1 <= VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID(iVar0))
			{
				if (iLocal_189 == 0)
				{
					Local_204 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fLocal_167) };
					iLocal_189++;
				}
				else if (iLocal_189 == 1)
				{
					Local_205 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fVar1) };
					iLocal_189++;
				}
				else if (!bLocal_129)
				{
					if (Local_204.f_0 > Local_205.f_0)
					{
						fVar3 = Local_204.f_0;
						Local_204.f_0 = Local_205.f_0;
						Local_205.f_0 = fVar3;
					}
					if (Local_204.f_1 > Local_205.f_1)
					{
						fVar3 = Local_204.f_1;
						Local_204.f_1 = Local_205.f_1;
						Local_205.f_1 = fVar3;
					}
					if (Local_204.f_2 > Local_205.f_2)
					{
						fVar3 = Local_204.f_2;
						Local_204.f_2 = Local_205.f_2;
						Local_205.f_2 = fVar3;
					}
					Local_204 = { Local_204 - Vector(fLocal_171, fLocal_171, fLocal_171) };
					Local_205 = { Local_205 + Vector(fLocal_171, fLocal_171, fLocal_171) };
					PATHFIND::SET_ROADS_IN_AREA(Local_204, Local_205, false, false);
					fLocal_167 = fVar1;
					iLocal_189 = 0;
				}
			}
		}
		if (fVar2 < (fParam1 - 8000f))
		{
			iVar0 = VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iParam0);
			if (iLocal_192 == 0)
			{
				Local_206 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fLocal_168) };
				iLocal_192++;
			}
			else if (iLocal_192 == 1)
			{
				Local_207 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fVar2) };
				iLocal_192++;
			}
			else if (!bLocal_129 && !bVar4)
			{
				if (Local_206.f_0 > Local_207.f_0)
				{
					fVar3 = Local_206.f_0;
					Local_206.f_0 = Local_207.f_0;
					Local_207.f_0 = fVar3;
				}
				if (Local_206.f_1 > Local_207.f_1)
				{
					fVar3 = Local_206.f_1;
					Local_206.f_1 = Local_207.f_1;
					Local_207.f_1 = fVar3;
				}
				if (Local_206.f_2 > Local_207.f_2)
				{
					fVar3 = Local_206.f_2;
					Local_206.f_2 = Local_207.f_2;
					Local_207.f_2 = fVar3;
				}
				Local_206 = { Local_206 - Vector(fLocal_171, fLocal_171, fLocal_171) };
				Local_207 = { Local_207 + Vector(fLocal_171, fLocal_171, fLocal_171) };
				PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Local_206, Local_207, 1);
				fLocal_168 = fVar2;
				iLocal_192 = 0;
			}
		}
	}
}

void func_376()//Position - 0x1B030
{
	int iVar0;
	float fVar1;
	iVar0 = iLocal_345;
	VEHICLE::MODIFY_VEHICLE_TOP_SPEED(iLocal_342, 0f);
	Local_409 = { 0f, 0f, 0f };
	switch (iLocal_3023)
	{
		case 3:
		case 4:
		case 5:
		case 6:
			fLocal_407 = 0.65f;
			fLocal_408 = 1.3f;
			Local_409.f_1 = -18f;
			break;
		case 8:
		case 9:
			fLocal_407 = 0.65f;
			fLocal_408 = 1.05f;
			Local_409.f_1 = -7f;
			break;
		case 10:
		case 11:
		case 12:
			fLocal_407 = 0.8f;
			fLocal_408 = 1.2f;
			Local_409.f_1 = -13f;
			break;
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
			fLocal_407 = 0.6f;
			fLocal_408 = 1.12f;
			Local_409.f_1 = -14f;
			break;
		case 18:
			fLocal_407 = 0.475f;
			fLocal_408 = 1.07f;
			Local_409.f_1 = -15.5f;
			break;
		case 19:
			fLocal_407 = 0.55f;
			fLocal_408 = 1.18f;
			Local_409.f_1 = -15.8f;
			break;
		case 20:
		case 21:
		case 22:
		case 23:
			fLocal_407 = 0.55f;
			fLocal_408 = 1.08f;
			Local_409.f_1 = -17.5f;
			break;
		case 24:
		case 25:
			fLocal_407 = 0.55f;
			fLocal_408 = 1.125f;
			Local_409.f_1 = -17f;
			break;
		case 28:
			fLocal_407 = 0.55f;
			fLocal_408 = 1.08f;
			Local_409.f_1 = -20f;
			break;
		case 26:
		case 27:
			fLocal_407 = 0.6f;
			fLocal_408 = 1.04f;
			Local_409.f_1 = 4f;
			break;
		case 29:
		case 30:
			fLocal_407 = 0.65f;
			fLocal_408 = 1.15f;
			Local_409.f_1 = -10.5f;
			break;
		case 33:
		case 34:
			fLocal_407 = 0.5f;
			fLocal_408 = 1f;
			Local_409.f_1 = -6.5f;
			break;
		case 35:
		case 36:
			fLocal_407 = 1f;
			fLocal_408 = 1.45f;
			Local_409.f_1 = -22.5f;
			break;
		case 38:
			fLocal_407 = 1.05f;
			fLocal_408 = 1.5f;
			Local_409.f_1 = -100.5f;
			break;
		case 39:
		case 37:
		case 40:
			fLocal_407 = 1.15f;
			fLocal_408 = 1.6f;
			Local_409.f_1 = -150.5f;
			break;
	}
	if (fLocal_392 < 48791.02f)
	{
		fLocal_407 = 0.8f;
		fLocal_408 = 1.3f;
		Local_409.f_1 = -39f;
	}
	if (fLocal_392 > 52368.33f && fLocal_392 < 54317.41f)
	{
		fLocal_407 = 0.6f;
		fLocal_408 = 1.125f;
		Local_409.f_1 = -5f;
	}
	if (fLocal_392 > 54368.33f && fLocal_392 < 55317.41f)
	{
		fLocal_407 = 0.6f;
		fLocal_408 = 1.15f;
		Local_409.f_1 = -10f;
	}
	if (fLocal_392 > 55368.33f && fLocal_392 < 63317.41f)
	{
		fLocal_407 = 0.6f;
		fLocal_408 = 1.18f;
		Local_409.f_1 = -20f;
	}
	if (fLocal_392 < 17356f)
	{
		fLocal_407 = 1f;
		fLocal_408 = 1.05f;
		Local_409.f_1 = -20f;
	}
	if ((!CAM::IS_CAM_ACTIVE(iLocal_322) || !CAM::IS_CAM_ACTIVE(iLocal_325)) || !CAM::IS_CAM_ACTIVE(iLocal_326))
	{
		if (!func_378())
		{
			if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
			{
				fLocal_97 = ENTITY::GET_ENTITY_SPEED(iVar0);
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iVar0))
				{
					fLocal_3091 = (fLocal_407 * 30f);
					fLocal_3092 = (fLocal_408 * 30f);
					if (fLocal_3091 == 0f)
					{
					}
					fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, Local_409), false);
					if (__LIB_0__.func_76(PLAYER::PLAYER_PED_ID(), iVar0, 0) < fVar1)
					{
						if (fVar1 > 40f)
						{
							fVar1 = 40f;
						}
						fLocal_391 = (fLocal_407 + ((fLocal_408 - fLocal_407) * (1f - (fVar1 / 40f))));
					}
					else
					{
						if (fVar1 > 40f)
						{
							fVar1 = 40f;
						}
						fLocal_391 = (fLocal_407 + ((fLocal_408 - fLocal_407) * (1f - (fVar1 / 40f))));
					}
					fLocal_3090 = (fLocal_391 * 30f);
					if (fLocal_97 < fLocal_3090 || func_377(Local_409.f_1))
					{
						if (fLocal_97 < fLocal_3092)
						{
							if (fLocal_97 < fLocal_3090)
							{
								fLocal_389 = (fLocal_389 + (((fLocal_3090 - fLocal_97) / 30f) * SYSTEM::TIMESTEP()));
							}
							else
							{
								fLocal_389 = (fLocal_389 + (0.04f * SYSTEM::TIMESTEP()));
							}
						}
					}
					else
					{
						fLocal_389 = (fLocal_389 - (((fLocal_389 - fLocal_391) / 7f) * SYSTEM::TIMESTEP()));
					}
				}
			}
		}
		else if (fLocal_389 < 2f)
		{
			fLocal_389 = (fLocal_389 + (0.2f * SYSTEM::TIMESTEP()));
		}
	}
}

bool func_377(float fParam0)//Position - 0x1B53B
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_345, false))
	{
		Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_345, -1f, fParam0, 0f) };
		Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_345, 1f, fParam0, 0f) };
		Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	}
	return (((Var1.f_0 - Var0.f_0) * (Var2.f_1 - Var0.f_1)) - ((Var1.f_1 - Var0.f_1) * (Var2.f_0 - Var0.f_0))) > 0f;
}

bool func_378()//Position - 0x1B59B
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_345, false))
	{
		Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_345, -1f, 6f, 0f) };
		Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_345, 1f, 6f, 0f) };
		Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	}
	return (((Var1.f_0 - Var0.f_0) * (Var2.f_1 - Var0.f_1)) - ((Var1.f_1 - Var0.f_1) * (Var2.f_0 - Var0.f_0))) > 0f;
}

void func_379()//Position - 0x1B5F9
{
	if (!CAM::IS_GAMEPLAY_CAM_RENDERING())
	{
		RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
	}
	PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0.1f);
	func_468();
	func_467();
	func_465();
	func_463();
	func_462();
	func_460();
	func_459();
	__LIB_0__.func_184();
	if (WEAPON::GET_SELECTED_PED_WEAPON(PLAYER::PLAYER_PED_ID()) == joaat("WEAPON_PROXMINE"))
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 69 /*INPUT_VEH_ATTACK*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 70 /*INPUT_VEH_ATTACK2*/, true);
	}
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 47 /*INPUT_DETONATE*/, true);
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS_FOR_AMBIENT_PEDS_THIS_FRAME(true);
	}
	if (iLocal_3023 <= 8)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_341))
		{
			if (CAM::IS_GAMEPLAY_CAM_RENDERING())
			{
			}
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_346, false))
	{
		VEHICLE::SET_FORCE_HD_VEHICLE(iLocal_346, true);
	}
	if (!PED::IS_PED_INJURED(func_2()))
	{
		PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(func_2(), false);
	}
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 101 /*INPUT_VEH_ROOF*/, true);
	func_457();
	func_349(iLocal_345, fLocal_389);
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_346, false))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_346))
		{
			VEHICLE::SET_PLAYBACK_SPEED(iLocal_346, fLocal_389);
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_342, false))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_342))
		{
			VEHICLE::SET_PLAYBACK_SPEED(iLocal_342, fLocal_389);
		}
	}
	if (Global_96870 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_227[1]))
		{
			Global_96870 = 1;
		}
	}
	if (Global_96871 == 0)
	{
		if (fLocal_392 > 72600f)
		{
			Global_96871 = 1;
		}
	}
	func_454();
	if (((!ENTITY::IS_ENTITY_DEAD(iLocal_346, false) && !ENTITY::IS_ENTITY_DEAD(iLocal_345, false)) && !ENTITY::IS_ENTITY_DEAD(iLocal_342, false)) && !PED::IS_PED_INJURED(func_2()))
	{
	}
	switch (iLocal_3023)
	{
		case 0:
			MISC::SET_INSTANCE_PRIORITY_HINT(2);
			func_453();
			func_452();
			__LIB_42__.func_613(2, "STAGE_DO_CHASE", 0, 0, 0, 1);
			AUDIO::SET_AGGRESSIVE_HORNS(true);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_345, false))
			{
				VEHICLE::START_VEHICLE_HORN(iLocal_345, 7000, 0, false);
				if (!ENTITY::IS_ENTITY_VISIBLE(iLocal_345))
				{
					ENTITY::SET_ENTITY_VISIBLE(iLocal_345, true, false);
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_346, false))
			{
				if (!ENTITY::IS_ENTITY_VISIBLE(iLocal_346))
				{
					ENTITY::SET_ENTITY_VISIBLE(iLocal_346, true, false);
				}
			}
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 5f, 4);
			TASK::TASK_LOOK_AT_ENTITY(func_2(), iLocal_346, -1, 2048, 2);
			WEAPON::SET_CURRENT_PED_WEAPON(func_2(), joaat("WEAPON_UNARMED"), true);
			AUDIO::START_AUDIO_SCENE("FAM1_HIGHWAY_CHASE");
			PLAYER::SET_MAX_WANTED_LEVEL(0);
			SYSTEM::SETTIMERA(0);
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
			iLocal_245 = 0;
			iLocal_368 = 0;
			iLocal_244 = 0;
			iLocal_277 = 0;
			iLocal_3105 = 0;
			bLocal_3015 = true;
			ENTITY::CREATE_FORCED_OBJECT(-2005.6289f, -441.1416f, 11.8253f, 5f, joaat("prop_streetlight_03d"), true);
			ENTITY::CREATE_FORCED_OBJECT(-1958.6633f, -479.5325f, 12.0568f, 5f, joaat("prop_streetlight_03d"), true);
			ENTITY::CREATE_FORCED_OBJECT(-1911.8635f, -517.8719f, 11.9657f, 5f, joaat("prop_streetlight_03d"), true);
			HUD::CLEAR_PRINTS();
			if (iLocal_3083 == 0)
			{
				iLocal_3084 = 1;
			}
			iLocal_3023 = 1;
			break;
		case 1:
			if (AUDIO::PREPARE_MUSIC_EVENT("FAM1_START"))
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT("FAM1_START"))
				{
					AUDIO::START_AUDIO_SCENE("FAMILY_1_YACHT_ARRIVES");
					iLocal_3023 = 2;
				}
			}
			break;
		case 2:
			if (iLocal_3083 == 1 && iLocal_3084 == 0)
			{
				__LIB_38__.func_139(&uLocal_446, "FAM1AUD", "FAM1_START", 9, 0, 0, 0, 0);
				iLocal_3084 = 1;
			}
			if (SYSTEM::TIMERA() > 500 && iLocal_3084 == 1)
			{
				__LIB_9__.func_990();
				iLocal_3023 = 3;
			}
			break;
		case 3:
			func_449(iLocal_322, func_2(), 0f, 0f, 0f, -0.05f, 0.05f, 2f, 2f);
			func_447(iLocal_322, 0f, 0f, 0f, -0.05f, 0.05f, 2f, 2f, 0);
			if (!__LIB_18__.func_197(&Local_283, 1) && !AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (iLocal_277 == 0 && iLocal_3099 == 1)
				{
					if (MISC::GET_RANDOM_INT_IN_RANGE(0, 10) > 5)
					{
						if (__LIB_35__.func_984(&uLocal_446, "FAM1AUD", "FAM1_INIT1", 9, 0, 0, 0))
						{
							iLocal_277 = 1;
						}
					}
					else if (__LIB_35__.func_984(&uLocal_446, "FAM1AUD", "FAM1_INIT2", 9, 0, 0, 0))
					{
						iLocal_277 = 1;
					}
					SYSTEM::SETTIMERA(0);
				}
				if (iLocal_3099 == 0)
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_342, false))
					{
						__LIB_0__.func_210("YB_OBJ1B", 7500, 1);
						iLocal_3099 = 1;
					}
				}
			}
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1840.4888f, -724.23285f, 7.849245f, -1738.859f, -591.0909f, 32.37764f, 27.5f, false, true, 0) || __LIB_0__.func_76(func_2(), iLocal_346, 0) < 20f)
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_342, false))
				{
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(1f, 5f, 4);
					if (!PED::IS_PED_INJURED(func_2()))
					{
						PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(func_2(), false);
					}
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(func_2());
					iLocal_377 = func_446(func_2(), 0, iLocal_342, "seat_pside_f", 0, "MISSFAM1_YachtBattleincar01_", "FRANKLINSTANDSINCAR_INTRO", "", 1, 1, 0);
					CAM::ATTACH_CAM_TO_ENTITY(iLocal_322, iLocal_346, -5f, -2f, -0.5f, true);
					CAM::POINT_CAM_AT_ENTITY(iLocal_322, func_2(), 0f, 0f, 0f, true);
					CAM::SET_CAM_FOV(iLocal_322, 15f);
					iLocal_296 = MISC::GET_GAME_TIMER();
					HUD::SET_RADAR_ZOOM(1);
					iLocal_3023 = 4;
				}
			}
			break;
		case 4:
			func_449(iLocal_322, func_2(), 0f, 0f, 0f, -0.05f, 0.05f, 2f, 2f);
			func_447(iLocal_322, 0f, 0f, 0f, -0.05f, 0.05f, 2f, 2f, 0);
			func_445();
			if (func_444(iLocal_377) >= 1f)
			{
				iLocal_377 = func_446(func_2(), 0, iLocal_342, "seat_pside_f", 1, "MISSFAM1_YachtBattleincar01_", "FRANKLINSTANDSINCAR_LOOP", "", 1, 1, 0);
				ENTITY::SET_ENTITY_HEALTH(func_2(), 1000, 0);
				iLocal_252 = 0;
				iLocal_3023 = 5;
			}
			break;
		case 5:
			func_449(iLocal_322, func_2(), 0f, 0f, 0f, -0.05f, 0.05f, 2f, 2f);
			func_447(iLocal_322, 0f, 0f, 0f, -0.05f, 0.05f, 2f, 2f, 0);
			if (((MISC::GET_GAME_TIMER() - iLocal_296) > iLocal_257 && iLocal_252 == 0) && MISC::ACOS(__LIB_0__.func_156(ENTITY::GET_ENTITY_FORWARD_VECTOR(iLocal_342), ENTITY::GET_ENTITY_FORWARD_VECTOR(iLocal_346))) < 45f)
			{
				if (MISC::GET_RANDOM_INT_IN_RANGE(0, 10) > 5)
				{
					iLocal_377 = func_446(func_2(), 0, iLocal_342, "seat_pside_f", 0, "MISSFAM1_YachtBattleincar01_", "FRANKLINSTANDSINCAR_LOOPD", "", 0, 1, 0);
				}
				else if (MISC::GET_RANDOM_INT_IN_RANGE(0, 10) > 5)
				{
					iLocal_377 = func_446(func_2(), 0, iLocal_342, "seat_pside_f", 0, "MISSFAM1_YachtBattleincar01_", "FRANKLINSTANDSINCAR_LOOPB", "", 0, 1, 0);
				}
				else
				{
					iLocal_377 = func_446(func_2(), 0, iLocal_342, "seat_pside_f", 0, "MISSFAM1_YachtBattleincar01_", "FRANKLINSTANDSINCAR_LOOPC", "", 0, 1, 0);
				}
				AUDIO::DISABLE_PED_PAIN_AUDIO(func_2(), true);
				iLocal_252 = 1;
			}
			else if (func_444(iLocal_377) >= 1f)
			{
				iLocal_377 = func_446(func_2(), 0, iLocal_342, "seat_pside_f", 1, "MISSFAM1_YachtBattleincar01_", "FRANKLINSTANDSINCAR_LOOP", "", 0, 1, 0);
				iLocal_296 = MISC::GET_GAME_TIMER();
				iLocal_257 = MISC::GET_RANDOM_INT_IN_RANGE(2500, 5000);
				iLocal_252 = 0;
			}
			switch (iLocal_306)
			{
				case 0:
					if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING() && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_342, false))
					{
						if (__LIB_35__.func_984(&uLocal_446, "FAM1AUD", "FAM1_DNTSHT", 8, 0, 0, 0))
						{
							iLocal_306++;
						}
					}
					break;
				case 1:
					if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING() && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_342, false))
					{
						if (__LIB_35__.func_984(&uLocal_446, "FAM1AUD", "FAM1_RESP1", 8, 0, 0, 0))
						{
							iLocal_306++;
						}
					}
					break;
			}
			func_445();
			if ((VEHICLE::GET_CONVERTIBLE_ROOF_STATE(iLocal_342) == 2 && __LIB_0__.func_76(func_2(), iLocal_346, 0) < 80f) && iLocal_252 == 0)
			{
				AUDIO::START_AUDIO_SCENE("FAMILY_1_FRANKLIN_CLIMBING");
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(2f, 6f, 4);
				iLocal_377 = func_446(func_2(), 0, iLocal_342, "seat_pside_f", 0, "MISSFAM1_YachtBattleincar01_", "FranklinOnBonnet_intro", "", 1, 1, 0);
				CAM::ATTACH_CAM_TO_ENTITY(iLocal_322, iLocal_346, -5f, -2f, -0.5f, true);
				CAM::POINT_CAM_AT_ENTITY(iLocal_322, func_2(), 0f, 0f, 0f, true);
				CAM::SET_CAM_FOV(iLocal_322, 15f);
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 2f, 3);
				iLocal_3023 = 6;
			}
			break;
		case 6:
			func_445();
			func_449(iLocal_322, func_2(), 0f, 0f, 0f, -0.05f, 0.05f, 2f, 2f);
			func_447(iLocal_322, 0f, 0f, 0f, -0.05f, 0.05f, 2f, 2f, 0);
			iLocal_258 = MISC::GET_GAME_TIMER();
			if (func_444(iLocal_377) >= 0.877f)
			{
				iLocal_377 = func_446(func_2(), 0, iLocal_342, "seat_pside_f", 1, "MISSFAM1_YachtBattleincar01_", "FranklinOnBonnet_loop", "", 1, 1, 0);
				iLocal_245 = 0;
				__LIB_0__.func_403(199, 0);
				iLocal_3023 = 7;
			}
			break;
		case 7:
			iLocal_3023 = 8;
			break;
		case 8:
			func_449(iLocal_322, func_2(), 0f, 0f, 0f, -0.05f, 0.05f, 2f, 2f);
			func_447(iLocal_322, 0f, 0f, 0f, -0.05f, 0.05f, 2f, 2f, 0);
			func_445();
			if ((!func_442(45f) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_345, Local_386), false) < fLocal_388) && iLocal_335 == 0)
			{
				__LIB_0__.func_151("YB_HELP1", -1);
				iLocal_335 = 1;
			}
			if (iLocal_245 == 0)
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_345, Local_386), false) < 22.5f)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("FAM1_CLOSE_YACHT");
					iLocal_245 = 1;
				}
			}
			if ((func_441(1065353216, 1) && func_442(1119092736)) && iLocal_3024 == 4)
			{
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
				if (!PED::IS_PED_INJURED(func_2()))
				{
					HUD::CLEAR_HELP(true);
					AUDIO::START_AUDIO_SCENE("FAMILY_1_FRANKLIN_JUMPS");
					__LIB_6__.func_771();
					TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), func_2(), 4000, 0, 2);
					CAM::ATTACH_CAM_TO_ENTITY(iLocal_322, iLocal_346, -3.3084f, -20.4882f, -0.6056f, true);
					CAM::POINT_CAM_AT_ENTITY(iLocal_322, iLocal_346, -2.2464f, -17.6954f, -0.3368f, true);
					CAM::SET_CAM_FOV(iLocal_322, 25f);
					iLocal_377 = func_446(func_2(), 0, iLocal_342, "seat_pside_f", 0, "MISSFAM1_YachtBattleincar01_", "FranklinOnBonnet_yachtJump_fail", "", 1, 1, 0);
					TASK::TASK_CLEAR_LOOK_AT(func_2());
					__LIB_7__.func_20(1);
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "FAMILY1_JUMPTOYACHT", func_2(), 0, false, 0);
					PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
					__LIB_0__.func_402(0, -1);
					iLocal_3023 = 9;
				}
			}
			func_436();
			break;
		case 9:
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
			if (iLocal_361 == 0 && AUDIO::PREPARE_MUSIC_EVENT("FAM1_FRANKLIN_JUMPS"))
			{
				if (__LIB_35__.func_984(&uLocal_446, "FAM1AUD", "FAM1_JUMP", 9, 0, 0, 0))
				{
					iLocal_362 = 0;
					iLocal_361 = 1;
				}
			}
			if (iLocal_361 == 1)
			{
				if (iLocal_362 == 0)
				{
					if (AUDIO::PREPARE_MUSIC_EVENT("FAM1_FRANKLIN_JUMPS"))
					{
						AUDIO::TRIGGER_MUSIC_EVENT("FAM1_FRANKLIN_JUMPS");
						iLocal_362 = 1;
					}
				}
			}
			PED::REQUEST_RAGDOLL_BOUNDS_UPDATE(func_2(), 1);
			if (__LIB_0__.func_76(func_2(), iLocal_346, 1) < 11.1f)
			{
				fLocal_3104 = 0.3f;
			}
			else
			{
				fLocal_3104 = 0.5f;
			}
			if (func_444(iLocal_377) >= fLocal_3104 && func_441(1.3f, 0))
			{
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(6.5f, 6f, 4);
				AUDIO::STOP_AUDIO_SCENE("FAMILY_1_FRANKLIN_CLIMBING");
				AUDIO::STOP_AUDIO_SCENE("FAMILY_1_YACHT_ARRIVES");
				AUDIO::START_AUDIO_SCENE("FAMILY_1_PROTECT_FRANKLIN");
				__LIB_0__.func_296();
				bLocal_50 = true;
				AUDIO::DISABLE_PED_PAIN_AUDIO(func_2(), false);
				Local_254 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_345, 0f, -5.64535f, 0f) };
				if (SYSTEM::VDIST(Local_254, Local_254) > 0f)
				{
				}
				Local_255 = { PED::GET_PED_BONE_COORDS(func_2(), 11816, 0f, 0f, 0f) };
				Local_256 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_346, Local_255) };
				Local_256 = { Local_256 - Vector(0f, -5.64535f, 0f) };
				iLocal_369 = func_446(func_2(), 0, iLocal_346, "chassis", 0, "MISSFAM1_YachtBattleincar01_", "franklinonYacht_clingIntro", "", 1, 1, 4);
				CAM::ATTACH_CAM_TO_ENTITY(iLocal_322, iLocal_346, -0.1273f, -5.4712f, 3.1607f, true);
				CAM::POINT_CAM_AT_ENTITY(iLocal_322, iLocal_346, 0.1256f, -8.0088f, 1.5807f, true);
				CAM::SET_CAM_FOV(iLocal_322, 45f);
				if (!CAM::DOES_CAM_EXIST(iLocal_323))
				{
					iLocal_323 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
				}
				if (!CAM::DOES_CAM_EXIST(iLocal_324))
				{
					iLocal_324 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
				}
				CAM::ATTACH_CAM_TO_ENTITY(iLocal_323, iLocal_346, -2.4481f, -8.7167f, -0.4626f, true);
				CAM::POINT_CAM_AT_ENTITY(iLocal_323, iLocal_346, -0.2318f, -8.5614f, 1.5534f, true);
				CAM::SET_CAM_FOV(iLocal_323, 32.0179f);
				CAM::SET_CAM_ACTIVE(iLocal_323, true);
				CAM::SHAKE_CAM(iLocal_323, "SKY_DIVING_SHAKE", 1f);
				CAM::ATTACH_CAM_TO_ENTITY(iLocal_324, iLocal_346, -2.0769f, -9.7101f, 0.3741f, true);
				CAM::POINT_CAM_AT_ENTITY(iLocal_324, iLocal_346, -0.3513f, -7.4178f, 1.2502f, true);
				CAM::SET_CAM_FOV(iLocal_324, 31.9652f);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_324, iLocal_323, 1500, 1, 0);
				CAM::SHAKE_CAM(iLocal_324, "SKY_DIVING_SHAKE", 1f);
				CAM::SET_CAM_MOTION_BLUR_STRENGTH(iLocal_324, 0.1f);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				HUD::DISPLAY_HUD(false);
				HUD::DISPLAY_RADAR(false);
				CAM::SET_WIDESCREEN_BORDERS(true, 0);
				ENTITY::SET_ENTITY_VISIBLE(iLocal_342, false, false);
				bLocal_50 = false;
				__LIB_9__.func_981(&uLocal_422, 0, 0);
				STREAMING::REMOVE_ANIM_DICT("MISSFAM1_YachtBattleincar01_");
				fLocal_334 = VEHICLE::GET_BOAT_BOOM_POSITION_RATIO(iLocal_346);
				iLocal_3023 = 10;
			}
			else if (func_444(iLocal_377) > 0.99f)
			{
				if (!PED::IS_PED_INJURED(func_2()))
				{
					ENTITY::PROCESS_ENTITY_ATTACHMENTS(func_2());
					PED::SET_PED_TO_RAGDOLL(func_2(), 0, 60000, 2, true, true, false);
				}
				iLocal_3023 = 41;
			}
			break;
		case 10:
			PED::REQUEST_RAGDOLL_BOUNDS_UPDATE(func_2(), 1);
			Local_256.f_0 = (Local_256.f_0 + (0f - ((Local_256.f_0 * MISC::GET_FRAME_TIME()) * 1.5f)));
			Local_256.f_1 = (Local_256.f_1 + (0f - ((Local_256.f_1 * MISC::GET_FRAME_TIME()) * 1.5f)));
			Local_256.f_2 = (Local_256.f_2 + (0f - ((Local_256.f_2 * MISC::GET_FRAME_TIME()) * 1.5f)));
			Local_256 = { 0f, 0f, 0f };
			if (func_444(iLocal_369) >= 0.33f)
			{
				bLocal_50 = true;
				ENTITY::SET_ENTITY_VISIBLE(iLocal_342, true, false);
				if (!ENTITY::IS_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID()))
				{
					ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
				}
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				HUD::DISPLAY_HUD(true);
				HUD::DISPLAY_RADAR(true);
				PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
				bLocal_3014 = false;
				bLocal_3015 = false;
			}
			func_435();
			if (func_444(iLocal_369) >= 1f)
			{
				iLocal_369 = func_446(func_2(), 0, iLocal_346, "chassis", 1, "MISSFAM1_YachtBattleincar01_", "onYacht_clingLoop_F", "", 1, 1, 4);
				CAM::ATTACH_CAM_TO_ENTITY(iLocal_322, iLocal_346, -1.6101f, -10.2165f, 0.1842f, true);
				CAM::POINT_CAM_AT_ENTITY(iLocal_322, iLocal_346, -0.5263f, -7.7526f, 1.5087f, true);
				CAM::SET_CAM_FOV(iLocal_322, 35.939f);
				STREAMING::REQUEST_ANIM_DICT("MISSFAM1_YachtBattleonYacht01_");
				PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
				bLocal_3014 = false;
				ENTITY::SET_ENTITY_VISIBLE(iLocal_342, true, false);
				if (!ENTITY::IS_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID()))
				{
					ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
				}
				bLocal_3015 = false;
				iLocal_3023 = 11;
			}
			break;
		case 11:
			func_435();
			if (!(fLocal_392 > 56671.18f && fLocal_392 < 62727.27f) && STREAMING::HAS_ANIM_DICT_LOADED("MISSFAM1_YachtBattleonYacht01_"))
			{
				if (__LIB_0__.func_76(iLocal_342, iLocal_346, 1) < 50f || iLocal_3065)
				{
					iLocal_3023 = 12;
				}
			}
			break;
		case 12:
			iLocal_350 = PED::CREATE_PED(26, joaat("G_M_Y_SalvaGoon_01"), 723.9294f, -1087.4998f, 21.1693f, 96.2191f, true, true);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_350, 0, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_350, 2, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_350, 3, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_350, 4, 1, 1, 0);
			ENTITY::SET_ENTITY_INVINCIBLE(iLocal_350, true);
			PED::SET_PED_SUFFERS_CRITICAL_HITS(iLocal_350, false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_350, true);
			PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_350, false);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_350, joaat("WEAPON_PISTOL"), -1, true, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_350, iLocal_282);
			ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_350, false);
			AUDIO::PREPARE_MUSIC_EVENT("FAM1_1ST_ENEMY_OS");
			iLocal_358 = 0;
			__LIB_0__.func_203(&uLocal_446, 3, iLocal_350, "YACHTPED1", 0, 1);
			iLocal_357 = 0;
			iLocal_369 = func_446(func_2(), iLocal_350, iLocal_346, "chassis", 0, "MISSFAM1_YachtBattleonYacht01_", "onYacht_Fight01intro_F", "onYacht_Fight01intro_thug", 1, 1, 4);
			iLocal_3023 = 13;
			break;
		case 13:
			if (!iLocal_246)
			{
				if (AUDIO::PREPARE_MUSIC_EVENT("FAM1_1ST_ENEMY_OS"))
				{
					AUDIO::TRIGGER_MUSIC_EVENT("FAM1_1ST_ENEMY_OS");
					iLocal_246 = 1;
				}
			}
			func_435();
			if (func_444(iLocal_369) > 0.1f && iLocal_358 == 0)
			{
				ENTITY::PLAY_ENTITY_ANIM(iLocal_346, "yacht_door_opening", "MISSFAM1_YachtBattle", 1000f, false, false, false, 0f, 0);
				iLocal_358 = 1;
			}
			if (func_444(iLocal_369) > 0.35f)
			{
				if (iLocal_357 == 0)
				{
					CAM::ATTACH_CAM_TO_ENTITY(iLocal_322, iLocal_346, -4.7607f, -7.0218f, 2.7643f, true);
					CAM::POINT_CAM_AT_ENTITY(iLocal_322, iLocal_346, -2.0131f, -5.9395f, 2.2357f, true);
					CAM::SET_CAM_FOV(iLocal_322, 43.042f);
					__LIB_0__.func_296();
					__LIB_10__.func_617(&uLocal_446, "FAM1AUD", "FAM1_NOISE", 9, 0, 0);
					iLocal_357 = 1;
				}
			}
			if (func_444(iLocal_369) >= 1f)
			{
				iLocal_369 = func_446(func_2(), iLocal_350, iLocal_346, "chassis", 1, "MISSFAM1_YachtBattleonYacht01_", "onYacht_Fight01loop_F", "onYacht_Fight01loop_thug", 1, 1, 4);
				SYSTEM::SETTIMERA(0);
				iLocal_3023 = 14;
			}
			break;
		case 14:
			if (__LIB_0__.func_76(PLAYER::PLAYER_PED_ID(), iLocal_346, 1) < 100f || iLocal_3065)
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_369))
				{
					PED::SET_SYNCHRONIZED_SCENE_RATE(iLocal_369, 1f);
				}
				switch (iLocal_264)
				{
					case 0:
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_369) >= 0.25f)
						{
							__LIB_0__.func_296();
							if (__LIB_35__.func_984(&uLocal_446, "FAM1AUD", "FAM1_WHO", 8, 0, 0, 0))
							{
								iLocal_264++;
							}
						}
						break;
					case 1:
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_369) >= 0.501f)
						{
							AUDIO::START_AUDIO_SCENE("FAM1_HIGHWAY_CHASE");
							AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_350, "FAM1_BOAT_SHOOTER", 0f);
							iLocal_264++;
						}
						break;
					case 2:
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_369) >= 0.531f)
						{
							PED::SET_PED_SHOOTS_AT_COORD(iLocal_350, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_342, 0.1f, 0.71f, 0f), false);
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_342, false))
							{
								AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "FAMILY1_FAKE_RICOCHET", iLocal_342, 0, false, 0);
							}
							__LIB_5__.func_759(PLAYER::PLAYER_PED_ID(), "GENERIC_FRIGHTENED_HIGH", "MICHAEL_NORMAL", 3);
							iLocal_264++;
						}
						break;
					case 3:
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_369) >= 0.533f)
						{
							PED::SET_PED_SHOOTS_AT_COORD(iLocal_350, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_342, 0.14f, 0.76f, 0f), false);
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_342, false))
							{
								AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "FAMILY1_FAKE_RICOCHET", iLocal_342, 0, false, 0);
							}
							iLocal_264++;
						}
						break;
					case 4:
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_369) >= 0.561f)
						{
							PED::SET_PED_SHOOTS_AT_COORD(iLocal_350, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_342, 1f, 1f, 0f), false);
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_342, false))
							{
								AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "FAMILY1_FAKE_RICOCHET", iLocal_342, 0, false, 0);
							}
							iLocal_264++;
						}
						break;
					case 5:
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_369) >= 0.637f)
						{
							PED::SET_PED_SHOOTS_AT_COORD(iLocal_350, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_342, -1f, 0f, 0f), false);
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_342, false))
							{
								AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "FAMILY1_FAKE_RICOCHET", iLocal_342, 0, false, 0);
							}
							STREAMING::REQUEST_PTFX_ASSET();
							iLocal_264++;
						}
						break;
					case 6:
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_369) >= 0.7f)
						{
							PED::SET_PED_SHOOTS_AT_COORD(iLocal_350, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_342, 0f, 0.5f, 0f), false);
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_342, false))
							{
								AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "FAMILY1_FAKE_RICOCHET", iLocal_342, 0, false, 0);
							}
							iLocal_264++;
						}
						break;
					case 7:
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_369) >= 0.92f)
						{
							PED::SET_PED_SHOOTS_AT_COORD(iLocal_350, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_342, 0.8f, 0.7f, 0f), false);
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_342, false))
							{
								AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "FAMILY1_FAKE_RICOCHET", iLocal_342, 0, false, 0);
							}
							__LIB_5__.func_759(PLAYER::PLAYER_PED_ID(), "GENERIC_FRIGHTENED_HIGH", "MICHAEL_NORMAL", 3);
							iLocal_264++;
						}
						break;
					case 8:
						if (STREAMING::HAS_PTFX_ASSET_LOADED())
						{
							iLocal_96 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY_BONE("scr_fam1_veh_smoke", iLocal_342, 0f, 0f, 0f, 0f, 0f, 0f, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_342, "overheat"), 1f, false, false, false);
							GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(iLocal_96, "damage", 0.5f, false);
							AUDIO::SET_VEHICLE_AUDIO_ENGINE_DAMAGE_FACTOR(iLocal_342, 0.25f);
							iLocal_264++;
						}
						break;
					case 9:
						if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							if (__LIB_35__.func_984(&uLocal_446, "FAM1AUD", "FAM1_CARSH", 9, 0, 0, 0))
							{
								iLocal_264++;
							}
						}
						break;
				}
			}
			else if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_369))
			{
				PED::SET_SYNCHRONIZED_SCENE_RATE(iLocal_369, 0f);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_350, false))
			{
				func_432(iLocal_350, 64, 1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(func_2(), false))
			{
				func_432(func_2(), 64, 1);
			}
			if ((((__LIB_0__.func_76(PLAYER::PLAYER_PED_ID(), iLocal_346, 0) < 50f && CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(iLocal_350, true), 1f)) && iLocal_264 > 7) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_369) >= 0.95f) || ENTITY::GET_ENTITY_HEALTH(iLocal_350) < 200)
			{
				if (SYSTEM::TIMERA() > 4000 || ENTITY::GET_ENTITY_HEALTH(iLocal_350) < 200)
				{
					iLocal_369 = func_446(func_2(), iLocal_350, iLocal_346, "chassis", 0, "MISSFAM1_YachtBattleonYacht01_", "onYacht_Fight01outro_F", "onYacht_Fight01outro_thug", 0, 1, 4);
					AUDIO::START_AUDIO_SCENE("FAM1_THROWN_OVERBOARD");
					PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_369, iLocal_346, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_346, "chassis"));
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3.5f, 2f, 3);
					iLocal_3023 = 15;
				}
			}
			break;
		case 15:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_350, false))
			{
				func_432(iLocal_350, 64, 1);
			}
			if (func_444(iLocal_369) >= 0.95f)
			{
				if (!PED::IS_PED_INJURED(iLocal_350))
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "FAMILY1_THROWN_OVERBOARD1", iLocal_350, 0, false, 0);
					ENTITY::PROCESS_ENTITY_ATTACHMENTS(iLocal_350);
					PED::SET_PED_TO_RAGDOLL(iLocal_350, 0, 10000, 0, true, true, false);
					ENTITY::SET_ENTITY_HEALTH(iLocal_350, 0, 0);
				}
				__LIB_0__.func_401(201, 1, 0);
				CAM::ATTACH_CAM_TO_ENTITY(iLocal_322, iLocal_346, 5.5868f, -10.9326f, 4.0687f, true);
				CAM::POINT_CAM_AT_ENTITY(iLocal_322, iLocal_346, 3.4853f, -8.8562f, 3.547f, true);
				CAM::SET_CAM_FOV(iLocal_322, 19.5173f);
				__LIB_10__.func_617(&uLocal_446, "FAM1AUD", "FAM1_ARG", 8, 0, 0);
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3.5f, 2f, 3);
				iLocal_3023 = 16;
			}
			break;
		case 16:
			iLocal_369 = func_446(func_2(), 0, iLocal_346, "chassis", 0, "MISSFAM1_YachtBattleonYacht01_", "onYacht_byWheelIntro_F", "", 1, 1, 4);
			CAM::ATTACH_CAM_TO_ENTITY(iLocal_322, iLocal_346, -2.1652f, -0.763f, 2.7882f, true);
			CAM::POINT_CAM_AT_ENTITY(iLocal_322, iLocal_346, -0.9706f, -3.5107f, 2.6373f, true);
			CAM::SET_CAM_FOV(iLocal_322, 34.904f);
			iLocal_3023 = 17;
			break;
		case 17:
			if (func_444(iLocal_369) >= 1f)
			{
				iLocal_369 = func_446(func_2(), 0, iLocal_346, "chassis", 1, "MISSFAM1_YachtBattleonYacht01_", "onYacht_byWheelLoop_F", "", 1, 1, 4);
				iLocal_3023 = 18;
			}
			break;
		case 18:
			if (__LIB_0__.func_76(PLAYER::PLAYER_PED_ID(), iLocal_346, 0) < 65f)
			{
				iLocal_351 = PED::CREATE_PED(26, joaat("G_M_Y_SalvaGoon_01"), 723.9294f, -1087.4998f, 21.1693f, 96.2191f, true, true);
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_351, "FAMILY_1_BOAT_PEDS", 0f);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_351, 0, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_351, 2, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_351, 3, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_351, 4, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_351, 9, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_351, 9, 0, 0, 0);
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_351, joaat("WEAPON_PISTOL"), -1, true, true);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_351, iLocal_282);
				ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_351, false);
				WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(iLocal_351, false);
				STREAMING::REQUEST_PTFX_ASSET();
				__LIB_0__.func_477(iLocal_351, 0);
				__LIB_0__.func_203(&uLocal_446, 4, iLocal_351, "YACHTPED2", 0, 1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_351, true);
				PED::SET_PED_SUFFERS_CRITICAL_HITS(iLocal_351, false);
				iLocal_369 = func_446(func_2(), iLocal_351, iLocal_346, "chassis", 0, "MISSFAM1_YachtBattleonYacht01_", "onYacht_fight02Intro_F", "onYacht_fight02Intro_thug", 0, 1, 4);
				AUDIO::START_AUDIO_SCENE("FAMILY_1_SHOOT_THE_ENEMY_02");
				ENTITY::PLAY_ENTITY_ANIM(iLocal_346, "yacht_door_opening", "MISSFAM1_YachtBattle", 1000f, false, false, false, 0f, 0);
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(1f, 2f, 3);
				iLocal_53 = 0;
				iLocal_3023 = 19;
			}
			break;
		case 19:
			func_429();
			if ((func_444(iLocal_369) > 0f && func_444(iLocal_369) < 0.2f) && iLocal_411 == 0)
			{
				if (__LIB_35__.func_984(&uLocal_446, "FAM1AUD", "FAM1_HIDE", 8, 0, 0, 0))
				{
					iLocal_411 = 1;
				}
			}
			if (func_444(iLocal_369) >= 0.35f)
			{
				CAM::ATTACH_CAM_TO_ENTITY(iLocal_322, iLocal_346, -3.012f, -2.7163f, 2.3151f, true);
				CAM::POINT_CAM_AT_ENTITY(iLocal_322, iLocal_346, -1.977f, -5.5249f, 2.5155f, true);
				CAM::SET_CAM_FOV(iLocal_322, 37.4049f);
				bLocal_3015 = true;
			}
			if (func_444(iLocal_369) >= 1f)
			{
				if (HUD::DOES_BLIP_EXIST(iLocal_337))
				{
					HUD::SET_BLIP_AS_FRIENDLY(iLocal_337, false);
				}
				HUD::SET_BLIP_DISPLAY(iLocal_410, 0);
				SYSTEM::SETTIMERA(0);
				iLocal_369 = func_446(func_2(), iLocal_351, iLocal_346, "chassis", 1, "MISSFAM1_YachtBattleonYacht01_", "onYacht_fight02Loop_f", "onYacht_fight02Loop_thug", 1, 1, 4);
				if (PED::IS_PED_INJURED(iLocal_351))
				{
					iLocal_3023 = 20;
				}
				STREAMING::REQUEST_MODEL(joaat("IG_JimmyDiSanto"));
				STREAMING::REQUEST_ANIM_DICT("MISSFAM1_YachtBattleonYacht02_");
				CAM::ATTACH_CAM_TO_ENTITY(iLocal_322, iLocal_346, -3.3454f, -1.9978f, 2.5094f, true);
				CAM::POINT_CAM_AT_ENTITY(iLocal_322, iLocal_346, -1.6431f, -4.4679f, 2.4869f, true);
				CAM::SET_CAM_FOV(iLocal_322, 36.8337f);
				bLocal_3015 = true;
				iLocal_3023 = 20;
			}
			if (!PED::IS_PED_INJURED(iLocal_351))
			{
				func_432(iLocal_351, 64, 1);
			}
			if ((SYSTEM::TIMERB() > 2500 && func_444(iLocal_369) > 0.535f) && __LIB_0__.func_76(PLAYER::PLAYER_PED_ID(), iLocal_346, 1) < 70f)
			{
				if (__LIB_18__.func_197(&Local_283, 1))
				{
					if (__LIB_0__.func_502())
					{
						__LIB_5__.func_759(func_2(), "FAM1_DDAA", "FRANKLIN", 4);
						SYSTEM::SETTIMERB(0);
					}
					else if (__LIB_35__.func_984(&uLocal_446, "FAM1AUD", "FAM1_ATTACK", 9, 1, 0, 0))
					{
						SYSTEM::SETTIMERB(0);
					}
				}
				else if (__LIB_0__.func_502())
				{
					if (__LIB_35__.func_984(&uLocal_446, "FAM1AUD", "FAM1_ENC4", 9, 0, 0, 0))
					{
						SYSTEM::SETTIMERB(0);
					}
				}
				else if (__LIB_35__.func_984(&uLocal_446, "FAM1AUD", "FAM1_ATTACK", 9, 0, 0, 0))
				{
					SYSTEM::SETTIMERB(0);
				}
			}
			if (func_444(iLocal_369) > 0.745f)
			{
				iLocal_53 = 1;
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_351, false) && iLocal_53 == 1)
			{
				if (ENTITY::GET_ENTITY_HEALTH(iLocal_351) < 200 || PED::IS_PED_RAGDOLL(iLocal_351))
				{
					__LIB_5__.func_759(func_2(), "GENERIC_FRIGHTENED_HIGH", "FRANKLIN_NORMAL", 4);
					ENTITY::SET_ENTITY_HEALTH(iLocal_351, 0, 0);
					HUD::REMOVE_BLIP(&iLocal_337);
					HUD::SET_BLIP_DISPLAY(iLocal_410, 4);
					__LIB_0__.func_210("YB_OBJ1", 7500, 1);
					iLocal_369 = func_446(func_2(), 0, iLocal_346, "chassis", 0, "MISSFAM1_YACHTBATTLEonYacht01_", "onYacht_fight02Success_f", "", 1, 1, 4);
					if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
					{
					}
					iLocal_271 = MISC::GET_GAME_TIMER();
					bLocal_3015 = false;
					iLocal_3023 = 21;
				}
			}
			break;
		case 20:
			func_429();
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_351, false))
			{
				func_432(iLocal_351, 64, 1);
			}
			if (!PED::IS_PED_INJURED(func_2()) && !ENTITY::IS_ENTITY_DEAD(iLocal_346, false))
			{
				if (!__LIB_18__.func_197(&Local_283, 1))
				{
					switch (iLocal_312)
					{
						case 0:
							if (__LIB_35__.func_984(&uLocal_446, "FAM1AUD", "FAM1_FIGHT", 8, 0, 0, 0))
							{
								iLocal_312++;
							}
							break;
						}
				}
				if ((SYSTEM::TIMERA() > 35000 && !PED::IS_PED_INJURED(iLocal_351)) && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_375))
				{
					iLocal_375 = func_446(func_2(), iLocal_351, iLocal_346, "chassis", 0, "MISSFAM1_YachtBattleonYacht01_", "onYacht_fight02Failure_f", "onYacht_fight02Failure_thug", 1, 1, 4);
					CAM::ATTACH_CAM_TO_ENTITY(iLocal_322, iLocal_346, -1.9076f, -5.696f, 5.4957f, true);
					CAM::POINT_CAM_AT_ENTITY(iLocal_322, iLocal_346, -1.9315f, -5.7537f, 2.4963f, true);
					CAM::SET_CAM_FOV(iLocal_322, 45f);
					func_83();
					AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(func_2());
					__LIB_5__.func_759(func_2(), "GENERIC_FRIGHTENED_HIGH", "FRANKLIN_NORMAL", 4);
				}
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_375))
				{
					if (func_444(iLocal_375) > 0.7f && iLocal_3103 == 0)
					{
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3.5f, 2f, 3);
						ENTITY::PROCESS_ENTITY_ATTACHMENTS(func_2());
						PED::SET_PED_TO_RAGDOLL(func_2(), 0, 10000, 0, true, true, false);
						ENTITY::SET_ENTITY_HEALTH(func_2(), 0, 0);
						SYSTEM::WAIT(2000);
						__LIB_0__.func_324("CMN_FDIED" /* GXT: ~s~Franklin died. */);
						func_6();
						iLocal_3103 = 1;
					}
				}
				if (((SYSTEM::TIMERB() > 2500 && !PED::IS_PED_INJURED(iLocal_351)) && !PED::IS_PED_INJURED(func_2())) && __LIB_0__.func_76(PLAYER::PLAYER_PED_ID(), iLocal_346, 1) < 70f)
				{
					if (__LIB_0__.func_502())
					{
						SYSTEM::SETTIMERB(0);
					}
				}
				if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_375))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_351, false))
					{
					}
					if (ENTITY::GET_ENTITY_HEALTH(iLocal_351) < 200 || (iLocal_267 > 0 && MISC::IS_BULLET_IN_AREA(PED::GET_PED_BONE_COORDS(iLocal_351, 31086, 0f, 0f, 0f), 1f, true)))
					{
						__LIB_6__.func_833();
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3.5f, 2f, 3);
						AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(func_2());
						__LIB_5__.func_759(func_2(), "GENERIC_FRIGHTENED_HIGH", "FRANKLIN_NORMAL", 4);
						HUD::REMOVE_BLIP(&iLocal_337);
						HUD::SET_BLIP_DISPLAY(iLocal_410, 4);
						HUD::CLEAR_HELP(true);
						__LIB_0__.func_210("YB_OBJ1", 7500, 1);
						iLocal_369 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(func_2(), iLocal_369, "MISSFAM1_YACHTBATTLEonYacht01_", "onYacht_fight02Success_f", 1000f, -1000f, 0, 0, 1000f, 0);
						if (!PED::IS_PED_INJURED(iLocal_351) && !PED::IS_PED_RAGDOLL(iLocal_351))
						{
							TASK::TASK_SYNCHRONIZED_SCENE(iLocal_351, iLocal_369, "MISSFAM1_YACHTBATTLEonYacht01_", "onYacht_fight02Success_thug", 1000f, -1000f, 0, 0, 1000f, 0);
						}
						else
						{
							ENTITY::SET_ENTITY_HEALTH(iLocal_351, 0, 0);
							iLocal_3023 = 21;
						}
						PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_369, false);
						PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_369, iLocal_346, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_346, "chassis"));
						CAM::ATTACH_CAM_TO_ENTITY(iLocal_322, iLocal_346, 0.417f, -8.8525f, 2.7537f, true);
						CAM::POINT_CAM_AT_ENTITY(iLocal_322, iLocal_346, -0.723f, -6.081f, 2.6157f, true);
						CAM::SET_CAM_FOV(iLocal_322, 29.0725f);
						if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
						{
						}
						bLocal_3015 = false;
						iLocal_3023 = 21;
					}
				}
			}
			break;
		case 21:
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_1_SHOOT_THE_ENEMY_02"))
			{
				AUDIO::STOP_AUDIO_SCENE("FAMILY_1_SHOOT_THE_ENEMY_02");
			}
			func_429();
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_351, false))
			{
				func_432(iLocal_351, 64, 1);
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_369))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_369) >= 0.02f && iLocal_363 == 0)
				{
					GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_fam1_blood_headshot", PED::GET_PED_BONE_COORDS(iLocal_351, 31086, 0f, 0f, 0f), 0f, 0f, 0f, 1f, false, false, false);
					iLocal_363 = 1;
				}
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_369))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_369) >= 1f)
				{
					if (!PED::IS_PED_INJURED(iLocal_351) && !PED::IS_PED_RAGDOLL(iLocal_351))
					{
						iLocal_370 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_351, iLocal_370, "MISSFAM1_YACHTBATTLEonYacht01_", "onYacht_fight02Success_thug", 1000f, -1000f, 0, 0, 1000f, 0);
						PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_370, false);
						PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_370, true);
						PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_370, iLocal_346, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_346, "chassis"));
						PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_370, 0.99f);
					}
					else if (!ENTITY::IS_ENTITY_DEAD(iLocal_351, false))
					{
						ENTITY::SET_ENTITY_HEALTH(iLocal_351, 0, 0);
					}
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3.5f, 2f, 3);
					iLocal_369 = func_446(func_2(), 0, iLocal_346, "chassis", 1, "MISSFAM1_YachtBattleonYacht01_", "onYacht_byWheelLoop02_F", "", 0, 1, 4);
					iLocal_3023 = 22;
				}
			}
			break;
		case 22:
			func_429();
			STREAMING::REQUEST_MODEL(joaat("IG_JimmyDiSanto"));
			STREAMING::REQUEST_ANIM_DICT("MISSFAM1_YachtBattleonYacht02_");
			STREAMING::REQUEST_ANIM_DICT("MISSFAM1_YachtBattle");
			STREAMING::REQUEST_MODEL(joaat("prop_champ_box_01"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("IG_JimmyDiSanto")) && !ENTITY::DOES_ENTITY_EXIST(iLocal_354))
			{
				func_427();
				ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_354, iLocal_346, 0, 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
			}
			if (((((((ENTITY::DOES_ENTITY_EXIST(iLocal_354) && !ENTITY::IS_ENTITY_DEAD(iLocal_354, false)) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_354)) && !PED::IS_PED_INJURED(func_2())) && !ENTITY::IS_ENTITY_DEAD(iLocal_345, false)) && !ENTITY::IS_ENTITY_DEAD(iLocal_346, false)) && STREAMING::HAS_ANIM_DICT_LOADED("MISSFAM1_YachtBattleonYacht02_")) && STREAMING::HAS_ANIM_DICT_LOADED("MISSFAM1_YachtBattle"))
			{
				if ((((MISC::GET_GAME_TIMER() - iLocal_271) > iLocal_272 && __LIB_0__.func_76(PLAYER::PLAYER_PED_ID(), iLocal_346, 1) < 60f) && (fLocal_392 < 88132f || fLocal_392 > 91399f)) || CAM::IS_SCREEN_FADED_OUT())
				{
					if (__LIB_35__.func_984(&uLocal_446, "FAM1AUD", "FAM1_FINDJIM", 9, 0, 0, 0))
					{
						__LIB_0__.func_401(201, 1, 0);
						bLocal_3014 = false;
						bLocal_3015 = false;
						__LIB_42__.func_613(3, "STAGE_JIMMY_APPEARS", 0, 0, 0, 1);
						ENTITY::DETACH_ENTITY(iLocal_354, false, false);
						if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_OBJECT(func_2()))
						{
							ENTITY::DETACH_ENTITY(func_2(), false, false);
						}
						iLocal_369 = func_446(func_2(), iLocal_354, iLocal_346, "chassis", 0, "MISSFAM1_YachtBattleonYacht02_", "onYacht_meetJimmy_F", "onYacht_meetJimmy_J", 0, 1, 4);
						CAM::ATTACH_CAM_TO_ENTITY(iLocal_322, iLocal_346, -0.179f, -14.9702f, 3.4881f, true);
						CAM::POINT_CAM_AT_ENTITY(iLocal_322, iLocal_346, -0.1063f, -11.9819f, 3.2332f, true);
						CAM::SET_CAM_FOV(iLocal_322, 13.5778f);
						ENTITY::PLAY_ENTITY_ANIM(iLocal_346, "yacht_door_opening", "MISSFAM1_YachtBattle", 1000f, false, false, false, 0f, 0);
						SYSTEM::SETTIMERA(0);
						if (CAM::IS_SCREEN_FADED_OUT())
						{
							func_426();
							HUD::CLEAR_PRINTS();
							func_40();
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_342, false))
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_342);
								VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_342, 30f);
							}
						}
						fLocal_334 = VEHICLE::GET_BOAT_BOOM_POSITION_RATIO(iLocal_346);
						bLocal_278 = false;
						iLocal_280 = 0;
						iLocal_3023 = 23;
					}
				}
			}
			break;
		case 23:
			func_435();
			if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING() && iLocal_280 == 0)
			{
				if (iLocal_279 < 0)
				{
					iLocal_279 = MISC::GET_GAME_TIMER();
				}
				if (__LIB_38__.func_139(&uLocal_446, "FAM1AUD", "FAM1_JIMX", 9, 0, 0, 0, 0))
				{
					iLocal_280 = 1;
				}
			}
			if (iLocal_280 == 1)
			{
				if (func_444(iLocal_369) > 0.2f)
				{
					if (bLocal_278 == 0)
					{
						__LIB_9__.func_990();
						bLocal_278 = true;
					}
				}
			}
			if (MISC::ARE_STRINGS_EQUAL("FAM1_JIMX", &Local_3081))
			{
				iLocal_3082 = 1;
			}
			STREAMING::REQUEST_MODEL(joaat("IG_JimmyDiSanto"));
			STREAMING::REQUEST_ANIM_DICT("MISSFAM1_YachtBattleonYacht02_");
			if (((((((!PED::IS_PED_INJURED(func_2()) && !PED::IS_PED_INJURED(iLocal_354)) && !ENTITY::IS_ENTITY_DEAD(iLocal_345, false)) && !ENTITY::IS_ENTITY_DEAD(iLocal_346, false)) && STREAMING::HAS_MODEL_LOADED(joaat("IG_JimmyDiSanto"))) && STREAMING::HAS_ANIM_DICT_LOADED("MISSFAM1_YachtBattleonYacht02_")) && bLocal_278) || (iLocal_279 > 0 && (MISC::GET_GAME_TIMER() - iLocal_279) > 10000))
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_369))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_369) >= 1f)
					{
						if (iLocal_280 && !bLocal_278)
						{
							__LIB_0__.func_296();
						}
						iLocal_3082 = 0;
						iLocal_369 = func_446(func_2(), iLocal_354, iLocal_346, "chassis", 1, "MISSFAM1_YachtBattleonYacht02_", "onYacht_signalPlayer_loop_F", "onYacht_signalPlayer_loop_J", 0, 1, 4);
						SYSTEM::SETTIMERA(0);
						iLocal_3023 = 24;
					}
				}
			}
			func_432(iLocal_354, 64, 1);
			break;
		case 24:
			VEHICLE::SWING_BOAT_BOOM_TO_RATIO(iLocal_346, fLocal_334);
			if (fLocal_334 < 0.85f)
			{
				fLocal_334 = (fLocal_334 + (1f * SYSTEM::TIMESTEP()));
			}
			else
			{
				fLocal_334 = 0.85f;
			}
			Local_3102 = { __LIB_9__.func_980() };
			Local_3081 = { __LIB_0__.func_390() };
			if (MISC::ARE_STRINGS_EQUAL("FAM1_JIMX", &Local_3081) || (MISC::GET_GAME_TIMER() - iLocal_279) > 10000)
			{
				iLocal_3082 = 1;
			}
			STREAMING::REQUEST_MODEL(joaat("IG_JimmyDiSanto"));
			STREAMING::REQUEST_ANIM_DICT("MISSFAM1_YachtBattleonYacht02_");
			if ((((((((!PED::IS_PED_INJURED(func_2()) && !PED::IS_PED_INJURED(iLocal_354)) && !ENTITY::IS_ENTITY_DEAD(iLocal_345, false)) && !ENTITY::IS_ENTITY_DEAD(iLocal_346, false)) && STREAMING::HAS_MODEL_LOADED(joaat("IG_JimmyDiSanto"))) && STREAMING::HAS_ANIM_DICT_LOADED("MISSFAM1_YachtBattleonYacht02_")) && iLocal_3082) && (((!MISC::ARE_STRINGS_EQUAL("FAM1_JIMX_1", &Local_3102) && !MISC::ARE_STRINGS_EQUAL("FAM1_JIMX_2", &Local_3102)) && !MISC::ARE_STRINGS_EQUAL("FAM1_JIMX_3", &Local_3102)) && !MISC::ARE_STRINGS_EQUAL("FAM1_JIMX_4", &Local_3102))) && (((((MISC::ARE_STRINGS_EQUAL("FAM1_JIMX_5", &Local_3102) || MISC::ARE_STRINGS_EQUAL("FAM1_JIMX_6", &Local_3102)) || MISC::ARE_STRINGS_EQUAL("FAM1_JIMX_7", &Local_3102)) || MISC::ARE_STRINGS_EQUAL("FAM1_JIMX_8", &Local_3102)) || MISC::ARE_STRINGS_EQUAL("FAM1_JIMX_9", &Local_3102)) || !__LIB_0__.func_75()))
			{
				if (__LIB_0__.func_75())
				{
					if (!MISC::ARE_STRINGS_EQUAL("FAM1_JIMX", &Local_3081))
					{
						__LIB_0__.func_296();
					}
				}
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4.5f, 4f, 4);
				iLocal_352 = PED::CREATE_PED(26, joaat("G_M_Y_SalvaGoon_01"), ENTITY::GET_ENTITY_COORDS(iLocal_346, true), 96.2191f, true, true);
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_352, "FAMILY_1_BOAT_PEDS", 0f);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_352, 0, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_352, 2, 2, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_352, 3, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_352, 4, 1, 0, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_352, true);
				PED::SET_PED_SUFFERS_CRITICAL_HITS(iLocal_352, false);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_352, iLocal_282);
				ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_352, false);
				ENTITY::SET_ENTITY_LOD_DIST(iLocal_352, 200);
				__LIB_0__.func_203(&uLocal_446, 5, iLocal_352, "YACHTPED4", 0, 1);
				__LIB_0__.func_477(iLocal_352, 0);
				iLocal_369 = func_446(func_2(), iLocal_352, iLocal_346, "chassis", 0, "MISSFAM1_YachtBattleonYacht02_", "onYacht_hitByBoom_F", "onYacht_hitByBoom_thugA", 1, 1, 4);
				iLocal_374 = func_446(iLocal_354, 0, iLocal_346, "misc_e", 0, "MISSFAM1_YachtBattleonYacht02_", "onYacht_hitByBoom_J", "", 0, 1, 4);
				PED::SET_SYNCHRONIZED_SCENE_ORIGIN(iLocal_374, 0f, 0f, 0.08f, 0f, 0f, 0f, 2);
				iLocal_367 = 0;
				AUDIO::START_AUDIO_SCENE("FAMILY_1_SAVE_JIMMY");
				ENTITY::PLAY_ENTITY_ANIM(iLocal_346, "onYacht_hitByBoom_boom", "MISSFAM1_YACHTBATTLEonYacht02_", 8f, false, true, true, 0f, 0);
				VEHICLE::SWING_BOAT_BOOM_FREELY(iLocal_346, true);
				VEHICLE::ALLOW_BOAT_BOOM_TO_ANIMATE(iLocal_346, true);
				ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_346);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_354, false, false);
				AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "FAMILY1_BOOM_SWING1", iLocal_346, 0, false, 0);
				AUDIO::START_AUDIO_SCENE("FAM1_BOOM_SWING");
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_354, joaat("PLAYER"));
				CAM::ATTACH_CAM_TO_ENTITY(iLocal_322, iLocal_346, -0.2979f, -8.6807f, 2.8214f, true);
				CAM::POINT_CAM_AT_ENTITY(iLocal_322, iLocal_346, -1.547f, -5.9555f, 2.7092f, true);
				CAM::SET_CAM_FOV(iLocal_322, 28.0593f);
				SYSTEM::SETTIMERB(0);
				SYSTEM::SETTIMERA(0);
				STREAMING::REMOVE_ANIM_DICT("MISSFAM1_YachtBattleonyacht01_");
				__LIB_5__.func_759(iLocal_352, "FAM1_HCAA", "JIMMY", 4);
				iLocal_3023 = 25;
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_352))
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_369))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_369) < 0.659f)
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_352, false))
						{
							ENTITY::SET_ENTITY_INVINCIBLE(iLocal_352, true);
							func_432(iLocal_352, 64, 1);
						}
					}
					else
					{
						ENTITY::SET_ENTITY_INVINCIBLE(iLocal_352, false);
					}
				}
				else
				{
					ENTITY::SET_ENTITY_INVINCIBLE(iLocal_352, false);
				}
			}
			func_432(iLocal_354, 64, 1);
			break;
		case 25:
			VEHICLE::SWING_BOAT_BOOM_FREELY(iLocal_346, true);
			VEHICLE::ALLOW_BOAT_BOOM_TO_ANIMATE(iLocal_346, true);
			if (!iLocal_281)
			{
				if (__LIB_35__.func_984(&uLocal_446, "FAM1AUD", "FAM1_HELP", 9, 0, 0, 0))
				{
					iLocal_281 = 1;
				}
			}
			if (!iLocal_247)
			{
				if (AUDIO::PREPARE_MUSIC_EVENT("FAM1_JIMMY_BOOM"))
				{
					AUDIO::TRIGGER_MUSIC_EVENT("FAM1_JIMMY_BOOM");
					iLocal_247 = 1;
				}
			}
			func_423();
			if ((!PED::IS_PED_INJURED(func_2()) && !ENTITY::IS_ENTITY_DEAD(iLocal_345, false)) && !ENTITY::IS_ENTITY_DEAD(iLocal_346, false))
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_369))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_369) >= 0.35f)
					{
						CAM::ATTACH_CAM_TO_ENTITY(iLocal_322, iLocal_346, -9.1614f, 5.5768f, 2.9331f, true);
						CAM::POINT_CAM_AT_ENTITY(iLocal_322, iLocal_346, -7.2843f, 3.2468f, 2.7138f, true);
						CAM::SET_CAM_FOV(iLocal_322, 30.4968f);
					}
				}
				if (!PED::IS_PED_INJURED(iLocal_352))
				{
					if (PED::IS_PED_RAGDOLL(iLocal_352))
					{
						ENTITY::SET_ENTITY_HEALTH(iLocal_352, 0, 0);
					}
				}
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_369))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_369) >= 1f || PED::IS_PED_INJURED(iLocal_352))
					{
						PED::SET_PED_LOD_MULTIPLIER(iLocal_352, 2f);
						if (!PED::IS_PED_INJURED(iLocal_352))
						{
							iLocal_369 = func_446(func_2(), iLocal_352, iLocal_346, "chassis", 0, "MISSFAM1_YachtBattleonYacht02_", "onYacht_overboardLoop_F", "onYacht_overboardLoop_thugA", 1, 1, 4);
						}
						else
						{
							iLocal_369 = func_446(func_2(), 0, iLocal_346, "chassis", 0, "MISSFAM1_YachtBattleonYacht02_", "onYacht_overboardLoop_F", "onYacht_overboardLoop_thugA", 1, 1, 4);
						}
						CAM::ATTACH_CAM_TO_ENTITY(iLocal_322, iLocal_346, -3.6975f, -1.815f, 3.8292f, true);
						CAM::POINT_CAM_AT_ENTITY(iLocal_322, iLocal_346, -2.449f, -4.2695f, 2.6389f, true);
						CAM::SET_CAM_FOV(iLocal_322, 37.4547f);
						bLocal_3016 = false;
						bLocal_3015 = true;
						fLocal_408 = 0.8f;
						HUD::SET_BLIP_DISPLAY(iLocal_410, 0);
						iLocal_339 = __LIB_6__.func_850(iLocal_354, 0, 145);
						__LIB_0__.func_325("YB_OBJ3", 7500, 1);
						__LIB_0__.func_151("YB_HELPJ", 15000);
						__LIB_0__.func_403(196, 0);
						iLocal_262 = 0;
						fLocal_259 = 0f;
						iLocal_3098 = 0;
						SYSTEM::SETTIMERA(0);
						iLocal_281 = 0;
						iLocal_3023 = 26;
					}
				}
			}
			else
			{
				iLocal_281 = 0;
				iLocal_3023 = 26;
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_354, false))
			{
				func_432(iLocal_354, 64, 1);
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_369))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_369) < 0.659f)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_352, false))
					{
						ENTITY::SET_ENTITY_INVINCIBLE(iLocal_352, true);
						func_432(iLocal_352, 64, 1);
					}
				}
				else
				{
					ENTITY::SET_ENTITY_INVINCIBLE(iLocal_352, false);
				}
			}
			else
			{
				ENTITY::SET_ENTITY_INVINCIBLE(iLocal_352, false);
			}
			break;
		case 26:
			func_423();
			func_420();
			func_419();
			switch (iLocal_268)
			{
				case 0:
					if ((!PED::IS_PED_INJURED(func_2()) && !ENTITY::IS_ENTITY_DEAD(iLocal_346, false)) && !ENTITY::IS_ENTITY_DEAD(iLocal_345, false))
					{
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_369))
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_369) >= 1f)
							{
								fLocal_408 = 0.7f;
								iLocal_268 = 1;
							}
						}
						else
						{
							iLocal_268 = 1;
						}
					}
					if (SYSTEM::TIMERB() > 4500 && __LIB_0__.func_76(PLAYER::PLAYER_PED_ID(), iLocal_346, 1) < 70f)
					{
						if (__LIB_0__.func_502())
						{
							__LIB_5__.func_759(iLocal_354, "FAM1_AYAA", "JIMMY", 4);
						}
						else if (!iLocal_366)
						{
							__LIB_5__.func_759(func_2(), "FAM1_CBAA", "FRANKLIN", 4);
							iLocal_366 = 1;
						}
						else
						{
							__LIB_5__.func_759(func_2(), "FAM1_DMAA", "FRANKLIN", 4);
						}
						SYSTEM::SETTIMERB(0);
					}
					break;
				case 1:
					if (SYSTEM::TIMERB() > 5000 && __LIB_0__.func_76(PLAYER::PLAYER_PED_ID(), iLocal_346, 1) < 70f)
					{
						if (MISC::GET_RANDOM_INT_IN_RANGE(0, 10) > 5)
						{
							if (iLocal_3100)
							{
								__LIB_5__.func_759(iLocal_354, "FAM1_GCAA", "JIMMY", 4);
								iLocal_3100 = 0;
							}
							else
							{
								__LIB_5__.func_759(iLocal_354, "FAM1_AYAA", "JIMMY", 4);
								iLocal_3100 = 1;
							}
						}
						else
						{
							__LIB_5__.func_759(func_2(), "FAM1_DMAA", "FRANKLIN", 4);
						}
						SYSTEM::SETTIMERB(0);
					}
					if ((MISC::GET_GAME_TIMER() - iLocal_297) > 30000)
					{
						iLocal_268 = 2;
					}
					break;
				case 2:
					if (SYSTEM::TIMERB() > 4000 && __LIB_0__.func_76(PLAYER::PLAYER_PED_ID(), iLocal_346, 1) < 70f)
					{
						if (__LIB_0__.func_502())
						{
							__LIB_5__.func_759(iLocal_354, "FAM1_GDAA", "JIMMY", 4);
							SYSTEM::SETTIMERB(0);
						}
					}
					break;
			}
			STREAMING::REQUEST_ANIM_DICT("MISSFAM1_YachtBattleinCar02_");
			STREAMING::REQUEST_CLIP_SET("clipset@missfam1_jimmy_sit");
			if ((!ENTITY::IS_ENTITY_DEAD(iLocal_354, false) && !ENTITY::IS_ENTITY_DEAD(iLocal_342, false)) && STREAMING::HAS_ANIM_DICT_LOADED("MISSFAM1_YachtBattleinCar02_"))
			{
				if (func_418(1065353216))
				{
					if (func_442(1119092736))
					{
						__LIB_7__.func_20(1);
						ENTITY::DETACH_ENTITY(iLocal_354, true, true);
						if (iLocal_3055 < 4)
						{
							iLocal_374 = func_446(iLocal_354, 0, iLocal_346, "misc_e", 0, "MISSFAM1_YachtBattleonYacht02_", "onBoom_dropToCar_J", "", 0, 1, 4);
						}
						else
						{
							iLocal_374 = func_446(iLocal_354, 0, iLocal_346, "misc_e", 0, "MISSFAM1_YachtBattleonYacht02_", "onBoom_twohand_drop", "", 0, 1, 4);
						}
						HUD::REMOVE_BLIP(&iLocal_339);
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(2.5f, 4f, 4);
						HUD::CLEAR_HELP(true);
						AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(iLocal_354);
						__LIB_5__.func_759(iLocal_354, "MAST_FALL", "JIMMY_NORMAL", 4);
						AUDIO::START_AUDIO_SCENE("FAM1_DROP_IN_CAR");
						iLocal_412 = OBJECT::CREATE_OBJECT(joaat("prop_ld_test_01"), ENTITY::GET_ENTITY_COORDS(iLocal_342, true), true, true, false);
						ENTITY::SET_ENTITY_COLLISION(iLocal_412, true, false);
						ENTITY::SET_ENTITY_VISIBLE(iLocal_412, false, false);
						ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_412, iLocal_342, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_342, "seat_pside_r"), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
						iLocal_414 = OBJECT::CREATE_OBJECT(joaat("prop_ld_test_01"), ENTITY::GET_ENTITY_COORDS(iLocal_346, true), true, true, false);
						ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_414, iLocal_346, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_346, "misc_e"), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
						ENTITY::SET_ENTITY_VISIBLE(iLocal_414, false, false);
						ENTITY::SET_ENTITY_COLLISION(iLocal_414, true, false);
						bLocal_3015 = false;
						iLocal_250 = 0;
						iLocal_3023 = 27;
						HUD::SET_BLIP_DISPLAY(iLocal_410, 4);
						__LIB_10__.func_617(&uLocal_446, "FAM1AUD", "FAM1_CATCH", 9, 0, 0);
					}
					else if (iLocal_250 == 0)
					{
						__LIB_6__.func_771();
						__LIB_35__.func_984(&uLocal_446, "FAM1AUD", "FAM1_STEADY", 9, 0, 0, 0);
						iLocal_250 = 1;
					}
				}
				else
				{
					iLocal_250 = 0;
				}
			}
			break;
		case 27:
			func_420();
			if (iLocal_250 == 0)
			{
				__LIB_6__.func_771();
				if (__LIB_35__.func_984(&uLocal_446, "FAM1AUD", "FAM1_CATCH2", 9, 0, 0, 0))
				{
					iLocal_250 = 1;
				}
			}
			func_419();
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_374))
			{
				if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_374) >= 1f && !ENTITY::IS_ENTITY_DEAD(iLocal_346, false)) && !PED::IS_PED_INJURED(func_2()))
				{
					AUDIO::STOP_PED_SPEAKING(iLocal_354, false);
					Local_415 = { 0f, 0f, 0f };
					Local_417 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("MISSFAM1_YACHTBATTLEinCar02_", "JimmyInCar_intro", Local_415, Local_416, 0f, 2) };
					iLocal_413 = OBJECT::CREATE_OBJECT(joaat("prop_ld_test_01"), ENTITY::GET_ENTITY_COORDS(iLocal_342, true), true, true, false);
					ENTITY::SET_ENTITY_COLLISION(iLocal_413, false, false);
					ENTITY::SET_ENTITY_VISIBLE(iLocal_413, false, false);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_413, iLocal_342, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_342, "seat_pside_r"), Local_417, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
					Local_418 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("MISSFAM1_YACHTBATTLEonYacht02_", "onBoom_dropToCar_J", ENTITY::GET_ENTITY_COORDS(iLocal_414, true), ENTITY::GET_ENTITY_ROTATION(iLocal_414, 2), 1f, 2) };
					Local_418 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_412, Local_418) };
					Local_419 = { Local_418 - Local_417 };
					iLocal_374 = func_417(Local_419, Local_420, iLocal_354, 0, iLocal_342, "seat_pside_r", 0, "MISSFAM1_YachtBattleincar02_", "JimmyInCar_intro", "", 1);
					PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
					__LIB_0__.func_402(0, -1);
					iLocal_421 = 0;
					iLocal_248 = 0;
					iLocal_3097 = 0;
					iLocal_263 = 0;
					iLocal_3087 = MISC::GET_GAME_TIMER();
					iLocal_3023 = 28;
				}
			}
			break;
		case 28:
			func_416();
			func_419();
			if (((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_374) && PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_380)) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_380) > 0.99f) || (ENTITY::GET_ENTITY_HEALTH(iLocal_352) < 200 && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_380)))
			{
				HUD::CLEAR_PRINTS();
				__LIB_0__.func_202(&uLocal_446, 4);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_356))
				{
					ENTITY::DETACH_ENTITY(iLocal_356, true, false);
					ENTITY::SET_ENTITY_VELOCITY(iLocal_356, ENTITY::GET_ENTITY_VELOCITY(iLocal_346));
				}
				HUD::REMOVE_BLIP(&iLocal_338);
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_352, false))
				{
					ENTITY::PROCESS_ENTITY_ATTACHMENTS(iLocal_352);
					PED::SET_PED_TO_RAGDOLL(iLocal_352, 0, 10000, 0, true, true, false);
				}
				HUD::REMOVE_BLIP(&iLocal_338);
				HUD::SET_BLIP_DISPLAY(iLocal_410, 4);
				iLocal_369 = func_446(func_2(), 0, iLocal_346, "chassis", 0, "MISSFAM1_YachtBattleonYacht02_", "onYacht_overboard_success_F", "", 0, 1, 4);
				PED::SET_SYNCHRONIZED_SCENE_RATE(iLocal_369, 1.25f);
				if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
				{
				}
				HUD::SET_BLIP_DISPLAY(iLocal_410, 4);
				__LIB_0__.func_401(201, 1, 0);
				SYSTEM::SETTIMERB(0);
				CAM::ATTACH_CAM_TO_ENTITY(iLocal_322, iLocal_346, -2.7513f, 0.6709f, 4.0208f, true);
				CAM::POINT_CAM_AT_ENTITY(iLocal_322, iLocal_346, -1.8015f, -2.0438f, 3.1672f, true);
				CAM::SET_CAM_FOV(iLocal_322, 32.6628f);
				iLocal_297 = MISC::GET_GAME_TIMER();
				iLocal_3023 = 29;
			}
			break;
		case 29:
			if ((MISC::GET_GAME_TIMER() - iLocal_297) > 1100 && iLocal_365 == 0)
			{
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_356);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_champ_box_01"));
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_352, false))
				{
					ENTITY::SET_ENTITY_HEALTH(iLocal_352, 0, 0);
				}
				CAM::ATTACH_CAM_TO_ENTITY(iLocal_322, iLocal_346, -7.4246f, 4.2393f, 2.5574f, true);
				CAM::POINT_CAM_AT_ENTITY(iLocal_322, iLocal_346, -5.7172f, 1.7728f, 2.5182f, true);
				CAM::SET_CAM_FOV(iLocal_322, 45f);
				bLocal_3015 = true;
				MISC::SET_TIME_SCALE(1f);
				iLocal_366 = 0;
				iLocal_365 = 1;
			}
			func_416();
			func_420();
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_374))
			{
			}
			if ((((!ENTITY::IS_ENTITY_DEAD(iLocal_346, false) && !PED::IS_PED_INJURED(func_2())) && iLocal_248 == 1) && iLocal_250 == 1) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_369) >= 1f)
			{
				AUDIO::STOP_AUDIO_SCENE("FAMILY_1_SAVE_JIMMY");
				iLocal_371 = func_446(func_2(), 0, iLocal_346, "chassis", 0, "MISSFAM1_YachtBattleonYacht02_", "onYacht_jumpToCarIntro_F", "", 1, 1, 4);
				CAM::ATTACH_CAM_TO_ENTITY(iLocal_322, iLocal_346, -0.0528f, -4.5224f, 2.7052f, true);
				CAM::POINT_CAM_AT_ENTITY(iLocal_322, iLocal_346, 0.1428f, -7.461f, 2.134f, true);
				CAM::SET_CAM_FOV(iLocal_322, 27.3552f);
				__LIB_0__.func_296();
				PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
				iLocal_3023 = 32;
			}
			break;
		case 32:
			func_420();
			__LIB_42__.func_613(4, "STAGE_FRANKLIN_JUMPS_BACK_ONTO_BOAT", 0, 0, 0, 1);
			iLocal_3023 = 30;
			break;
		case 30:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				func_426();
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_342, 20f);
				HUD::CLEAR_PRINTS();
				func_40();
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_342, false))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_342);
				}
			}
			if (!iLocal_364)
			{
				if (__LIB_35__.func_984(&uLocal_446, "FAM1AUD", "FAM1_LEAP", 8, 0, 0, 0))
				{
					iLocal_364 = 1;
				}
			}
			func_420();
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_371))
			{
				if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_371) >= 1f && !ENTITY::IS_ENTITY_DEAD(iLocal_346, false)) && !ENTITY::IS_ENTITY_DEAD(func_2(), false))
				{
					iLocal_371 = func_446(func_2(), 0, iLocal_346, "chassis", 1, "MISSFAM1_YachtBattleonYacht02_", "onYacht_jumpToCarLoop_F", "", 1, 1, 4);
					ENTITY::SET_ENTITY_INVINCIBLE(func_2(), false);
					HUD::SET_BLIP_DISPLAY(iLocal_410, 0);
					iLocal_340 = __LIB_6__.func_850(func_2(), 0, 145);
					iLocal_359 = 0;
					iLocal_3023 = 31;
				}
			}
			break;
		case 31:
			iLocal_3023 = 33;
			break;
		case 33:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_342, false))
			{
				if ((iLocal_359 == 0 && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_342, false)) && !__LIB_18__.func_197(&Local_283, 2))
				{
					__LIB_0__.func_210("YB_OBJ4", 7500, 1);
					iLocal_359 = 1;
				}
			}
			func_420();
			if ((SYSTEM::TIMERB() > 2500 && iLocal_359 == 1) && !func_441(1f, 1))
			{
				if (__LIB_18__.func_197(&Local_283, 1))
				{
					__LIB_5__.func_759(func_2(), "FAM1_AAAA", "FRANKLIN", 4);
					SYSTEM::SETTIMERB(0);
				}
				else if (__LIB_35__.func_984(&uLocal_446, "FAM1AUD", "FAM1_CTCHF", 8, 0, 0, 0))
				{
					SYSTEM::SETTIMERB(0);
				}
			}
			if ((!PED::IS_PED_INJURED(func_2()) && !ENTITY::IS_ENTITY_DEAD(iLocal_342, false)) && !ENTITY::IS_ENTITY_DEAD(iLocal_346, false))
			{
				if ((func_441(1f, 1) && func_442(1119092736)) && iLocal_3065 == 0)
				{
					__LIB_0__.func_296();
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3.5f, 9f, 4);
					AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(func_2());
					AUDIO::START_AUDIO_SCENE("FAMILY_1_CATCH_FRANKLIN");
					AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(func_2());
					__LIB_5__.func_759(func_2(), "GENERIC_FRIGHTENED_HIGH", "FRANKLIN_NORMAL", 4);
					__LIB_7__.func_20(1);
					iLocal_371 = func_446(func_2(), 0, iLocal_346, "chassis", 0, "MISSFAM1_YachtBattleonYacht02_", "onYacht_jumpToCar_F", "", 1, 1, 4);
					__LIB_9__.func_981(&uLocal_422, 0, 0);
					if (!CAM::DOES_CAM_EXIST(iLocal_323))
					{
						iLocal_323 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
					}
					if (!CAM::DOES_CAM_EXIST(iLocal_324))
					{
						iLocal_324 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
					}
					CAM::ATTACH_CAM_TO_ENTITY(iLocal_323, iLocal_346, -1.1738f, -6.6237f, 3.0274f, true);
					CAM::POINT_CAM_AT_ENTITY(iLocal_323, iLocal_346, 0.9368f, -7.5638f, 1.1138f, true);
					CAM::SET_CAM_FOV(iLocal_323, 29.9168f);
					CAM::SET_CAM_ACTIVE(iLocal_323, true);
					CAM::SHAKE_CAM(iLocal_323, "SKY_DIVING_SHAKE", 1f);
					CAM::ATTACH_CAM_TO_ENTITY(iLocal_324, iLocal_346, -0.7922f, -6.4277f, 3.3964f, true);
					CAM::POINT_CAM_AT_ENTITY(iLocal_324, iLocal_346, 0.1019f, -8.848f, 1.8657f, true);
					CAM::SET_CAM_FOV(iLocal_324, 30.6854f);
					CAM::ATTACH_CAM_TO_ENTITY(iLocal_324, iLocal_346, -0.7425f, -6.623f, 3.0168f, true);
					CAM::POINT_CAM_AT_ENTITY(iLocal_324, iLocal_346, 0.1238f, -9.3185f, 2.0247f, true);
					CAM::SET_CAM_FOV(iLocal_324, 30.6854f);
					CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_324, iLocal_323, 1500, 1, 0);
					CAM::SHAKE_CAM(iLocal_324, "SKY_DIVING_SHAKE", 1f);
					CAM::SET_CAM_MOTION_BLUR_STRENGTH(iLocal_324, 0.1f);
					CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
					HUD::DISPLAY_HUD(false);
					HUD::DISPLAY_RADAR(false);
					CAM::SET_WIDESCREEN_BORDERS(true, 0);
					bLocal_50 = false;
					HUD::CLEAR_PRINTS();
					HUD::REMOVE_BLIP(&iLocal_340);
					AUDIO::START_AUDIO_SCENE("FAM1_JUMP_TO_YACHT");
					STREAMING::REQUEST_PTFX_ASSET();
					iLocal_3023 = 34;
				}
			}
			break;
		case 34:
			func_420();
			if (!iLocal_249)
			{
				if (AUDIO::PREPARE_MUSIC_EVENT("FAM1_FRANK_LEAPS"))
				{
					AUDIO::TRIGGER_MUSIC_EVENT("FAM1_FRANK_LEAPS");
					iLocal_249 = 1;
				}
			}
			if (!CAM::IS_CINEMATIC_FIRST_PERSON_VEHICLE_INTERIOR_CAM_RENDERING())
			{
				CAM::DISABLE_CINEMATIC_BONNET_CAMERA_THIS_UPDATE();
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_371))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_371) > 0.1f && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_371) < 0.9f)
				{
				}
				if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_371) >= 1f && !ENTITY::IS_ENTITY_DEAD(iLocal_342, false)) && !ENTITY::IS_ENTITY_DEAD(func_2(), false))
				{
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					bLocal_50 = true;
					iLocal_371 = func_446(func_2(), 0, iLocal_342, "seat_pside_f", 0, "MISSFAM1_YachtBattleinCar02_", "FranklinOnBonnet_landOnCar", "", 1, 1, 4);
					PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_371, true);
					AUDIO::START_AUDIO_SCENE("FAM1_LAND_ON_BONNET");
					iLocal_3017 = 0;
					bLocal_3014 = false;
					PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 2.2f);
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 170, true);
					STREAMING::REMOVE_ANIM_DICT("MISSFAM1_YACHTBATTLEonYacht02_");
					iLocal_3023 = 36;
				}
			}
			break;
		case 36:
			func_420();
			if (!CAM::IS_CINEMATIC_FIRST_PERSON_VEHICLE_INTERIOR_CAM_RENDERING())
			{
				CAM::DISABLE_CINEMATIC_BONNET_CAMERA_THIS_UPDATE();
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_371))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_371) >= 0.022f && iLocal_3017 == 0)
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "FAMILY1_LAND_ON_BONNET", iLocal_342, 0, false, 0);
					__LIB_35__.func_984(&uLocal_446, "FAM1AUD", "FAM1_LEAP2", 9, 0, 0, 0);
					CAM::SHAKE_GAMEPLAY_CAM("JOLT_SHAKE", 0.7f);
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_342, false))
					{
						VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(iLocal_342, 4, true);
					}
					HUD::SET_BLIP_DISPLAY(iLocal_410, 4);
					PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 3.5f);
					VEHICLE::SET_VEHICLE_DAMAGE(iLocal_342, 0f, -0.9f, 0f, 0f, 150f, true);
					ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_342, 1, 0f, 0f, -1f, 0f, 1f, 0f, 0, true, true, true, false, true);
					AUDIO::SET_VEHICLE_AUDIO_ENGINE_DAMAGE_FACTOR(iLocal_342, 0.7f);
					VEHICLE::DELETE_VEHICLE(&iLocal_54);
					VEHICLE::DELETE_VEHICLE(&iLocal_55);
					bLocal_3014 = false;
					iLocal_3017 = 1;
				}
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_371))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_371) >= 0.325f)
				{
					if (__LIB_35__.func_984(&uLocal_446, "FAM1AUD", "FAM1_SAFE", 9, 0, 0, 0))
					{
						AUDIO::STOP_AUDIO_SCENE("FAMILY_1_CATCH_FRANKLIN");
						AUDIO::START_AUDIO_SCENE("FAMILY_1_GET_THE_YACHT");
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_342, false))
						{
							VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(iLocal_342, 4, true);
						}
						PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 7.5f);
						AUDIO::STOP_AUDIO_SCENE("FAMILY_1_PROTECT_FRANKLIN");
						iLocal_3023 = 37;
					}
				}
			}
			PED::SET_PED_RESET_FLAG(func_2(), 64, true);
			if (PED::IS_PED_INJURED(func_2()))
			{
				__LIB_0__.func_324("CMN_FDIED" /* GXT: ~s~Franklin died. */);
				func_6();
			}
			else if (FIRE::IS_ENTITY_ON_FIRE(func_2()))
			{
				ENTITY::SET_ENTITY_HEALTH(func_2(), 0, 0);
			}
			break;
		case 37:
			func_420();
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_371))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_371) >= 0.55f)
				{
					AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("FAMILY_1_CHASE_01");
					AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("FAMILY_1_CHASE_02");
					AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("CAR_CRASHES_01");
					AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("FAMILY_1_BOAT_STRAIN");
					AUDIO::STOP_AUDIO_SCENE("FAMILY_1_GET_THE_YACHT");
					AUDIO::START_AUDIO_SCENE("FAMILY_1_CAR_BREAKS_DOWN");
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_342, false))
					{
						VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_342, 70f);
						PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 14.9f);
					}
					if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_96))
					{
						iLocal_96 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY_BONE("scr_fam1_veh_smoke", iLocal_342, 0f, 0f, 0f, 0f, 0f, 0f, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_342, "overheat"), 1f, false, false, false);
					}
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3.5f, 5f, 3);
					GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(iLocal_96, "damage", 1f, false);
					AUDIO::SET_VEHICLE_AUDIO_ENGINE_DAMAGE_FACTOR(iLocal_342, 0.75f);
					AUDIO::ENABLE_VEHICLE_FANBELT_DAMAGE(iLocal_342, true);
					iLocal_3101 = MISC::GET_GAME_TIMER();
					iLocal_3023 = 38;
				}
			}
			break;
		case 38:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_371))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_371) >= 1f)
				{
					if (!ENTITY::IS_ENTITY_DEAD(func_2(), false) && !ENTITY::IS_ENTITY_DEAD(iLocal_342, false))
					{
						if (!PED::IS_PED_IN_VEHICLE(func_2(), iLocal_342, false))
						{
							PED::SET_PED_INTO_VEHICLE(func_2(), iLocal_342, 0);
						}
					}
				}
			}
			if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING() && AUDIO::REQUEST_AMBIENT_AUDIO_BANK("FAMILY_1_CAR_BREAKDOWN", false, -1))
			{
				if (__LIB_35__.func_984(&uLocal_446, "FAM1AUD", "FAM1_CARFUCK", 9, 0, 0, 0) || (MISC::GET_GAME_TIMER() - iLocal_3101) > 15000)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("FAM1_BROKE_CAR");
					if (HUD::DOES_BLIP_EXIST(iLocal_410))
					{
						HUD::REMOVE_BLIP(&iLocal_410);
					}
					AUDIO::PLAY_SOUND_FRONTEND(-1, "FAMILY_1_CAR_BREAKDOWN", "FAMILY1_BOAT", true);
					AUDIO::PLAY_SOUND_FRONTEND(-1, "FAMILY_1_CAR_BREAKDOWN_ADDITIONAL", "FAMILY1_BOAT", true);
					AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("FAMILY_1_CAR_BREAKDOWN");
					iLocal_3022 = 8;
				}
			}
			break;
		case 41:
			func_83();
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_375))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_375) >= 0.7f)
				{
					ENTITY::PROCESS_ENTITY_ATTACHMENTS(func_2());
					PED::SET_PED_TO_RAGDOLL(func_2(), 0, 60000, 1, true, true, false);
					iLocal_375 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_351))
					{
						if (!PED::IS_PED_INJURED(iLocal_351))
						{
							TASK::TASK_SYNCHRONIZED_SCENE(iLocal_351, iLocal_375, "MISSFAM1_YACHTBATTLEonYacht01_", "onYacht_failIdle_thug", 1000f, -1000f, 0, 0, 1000f, 0);
						}
					}
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_375, false);
					PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_375, iLocal_346, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_346, "chassis"));
					HUD::CLEAR_HELP(true);
					__LIB_0__.func_324("CMN_FDIED" /* GXT: ~s~Franklin died. */);
					AUDIO::TRIGGER_MUSIC_EVENT("FAM1_FAIL");
				}
			}
			if (!PED::IS_PED_INJURED(func_2()))
			{
				if (!ENTITY::IS_ENTITY_IN_AIR(func_2()))
				{
					if (PED::IS_PED_RAGDOLL(func_2()))
					{
						if (!PED::IS_PED_INJURED(func_2()))
						{
							ENTITY::SET_ENTITY_HEALTH(func_2(), 0, 0);
						}
						HUD::CLEAR_HELP(true);
						__LIB_0__.func_324("CMN_FDIED" /* GXT: ~s~Franklin died. */);
						func_83();
						AUDIO::TRIGGER_MUSIC_EVENT("FAM1_FAIL");
						func_6();
					}
				}
			}
			break;
		case 42:
			func_83();
			HUD::CLEAR_HELP(true);
			if (iLocal_3023 < 27)
			{
				while (__LIB_35__.func_984(&uLocal_446, "FAM1AUD", "FAM1_F1", 9, 0, 0, 0))
				{
					SYSTEM::WAIT(0);
				}
			}
			else if (iLocal_3023 < 8)
			{
				while (__LIB_35__.func_984(&uLocal_446, "FAM1AUD", "FAM1_F2", 9, 0, 0, 0))
				{
					SYSTEM::WAIT(0);
				}
				while (__LIB_35__.func_984(&uLocal_446, "FAM1AUD", "FAM1_F3", 9, 0, 0, 0))
				{
					SYSTEM::WAIT(0);
				}
			}
			__LIB_0__.func_324("YB_FAIL3");
			AUDIO::TRIGGER_MUSIC_EVENT("FAM1_FAIL");
			SYSTEM::SETTIMERA(0);
			func_6();
			break;
		case 43:
		case 44:
			func_83();
			if (iLocal_3023 == 44)
			{
				__LIB_0__.func_324("CMN_GENSTCK" /* GXT: ~s~The car got stuck. */);
			}
			else
			{
				__LIB_0__.func_324("CMN_GENDEST" /* GXT: ~s~The car was destroyed. */);
			}
			AUDIO::TRIGGER_MUSIC_EVENT("FAM1_FAIL");
			while (SYSTEM::TIMERA() < 200)
			{
				if (iLocal_3023 < 8)
				{
					func_436();
				}
				SYSTEM::WAIT(0);
			}
			func_6();
			break;
		case 46:
			func_83();
			__LIB_0__.func_324("YB_BLEWCOV");
			AUDIO::TRIGGER_MUSIC_EVENT("FAM1_FAIL");
			func_6();
			break;
	}
	if (fLocal_392 > 191000f && iLocal_3023 < 34)
	{
		switch (iLocal_368)
		{
			case 0:
				__LIB_6__.func_833();
				iLocal_368++;
				break;
			case 1:
				if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					if (__LIB_35__.func_984(&uLocal_446, "FAM1AUD", "FAM1_GNAFAIL", 9, 0, 0, 0))
					{
						iLocal_368 = 1;
					}
				}
				break;
			}
	}
	if (fLocal_392 > 195053f && iLocal_51 == 0)
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_410))
		{
			HUD::SET_BLIP_FLASHES(iLocal_410, true);
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_340))
		{
			HUD::SET_BLIP_FLASHES(iLocal_340, true);
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_339))
		{
			HUD::SET_BLIP_FLASHES(iLocal_339, true);
		}
		VEHICLE::REQUEST_VEHICLE_RECORDING(2, "Fam1New");
		VEHICLE::REQUEST_VEHICLE_RECORDING(1, "Fam1New");
		VEHICLE::REQUEST_VEHICLE_RECORDING(1, "Fam1End");
		iLocal_51 = 1;
	}
	if (fLocal_392 > 197000f && iLocal_3105 == 0)
	{
		if (AUDIO::REQUEST_AMBIENT_AUDIO_BANK("FAMILY_1_CAR_BREAKDOWN", false, -1))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "FAMILY_1_CAR_BREAKDOWN", "FAMILY1_BOAT", true);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "FAMILY_1_CAR_BREAKDOWN_ADDITIONAL", "FAMILY1_BOAT", true);
			AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("FAMILY_1_CAR_BREAKDOWN");
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3.5f, 2f, 3);
			iLocal_3105 = 1;
		}
	}
	if (fLocal_392 > 200053f)
	{
		__LIB_6__.func_833();
		if (iLocal_3023 < 34)
		{
			__LIB_0__.func_324("YB_FAIL");
			iLocal_3022 = 12;
		}
	}
	if (bLocal_50)
	{
		func_381();
	}
	if (func_418(2f) && (iLocal_3023 == 26 || iLocal_3023 == 27))
	{
		func_380(iLocal_346);
	}
	else if (iLocal_3023 != 9)
	{
		func_376();
	}
	if (iLocal_3023 > 27 && iLocal_3022 <= 8)
	{
		STREAMING::REQUEST_CLIP_SET("clipset@missfam1_jimmy_sit_rear");
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_374))
		{
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_374) >= 0.8f)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_354, false) && !ENTITY::IS_ENTITY_DEAD(iLocal_342, false))
				{
					if (!PED::IS_PED_IN_VEHICLE(iLocal_354, iLocal_342, false) && STREAMING::HAS_CLIP_SET_LOADED("clipset@missfam1_jimmy_sit_rear"))
					{
						ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_354, -2f, true);
						PED::SET_PED_INTO_VEHICLE(iLocal_354, iLocal_342, 1);
						PED::SET_PED_IN_VEHICLE_CONTEXT(iLocal_354, MISC::GET_HASH_KEY("MISS_FAMILY1_JIMMY_SIT_REAR"));
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_354, true, false);
					}
				}
			}
		}
	}
}

void func_380(int iParam0)//Position - 0x1F3E0
{
	float fVar0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
		{
			GRAPHICS::SET_DEBUG_LINES_AND_SPHERES_DRAWING_ACTIVE(true);
			VEHICLE::MODIFY_VEHICLE_TOP_SPEED(iLocal_342, 0f);
			fLocal_97 = ENTITY::GET_ENTITY_SPEED(iParam0);
			fLocal_3093 = ENTITY::GET_ENTITY_SPEED(iLocal_342);
			if (fLocal_3093 > fLocal_97)
			{
				if ((fLocal_3093 + 1f) > fLocal_97)
				{
					fVar0 = 0.05f;
				}
			}
			else
			{
				fVar0 = -0.06f;
			}
			fLocal_3090 = (fLocal_391 * 30f);
			fLocal_389 = (fLocal_389 + (fVar0 * SYSTEM::TIMESTEP()));
		}
	}
}

void func_381()//Position - 0x1F45A
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	if (func_415(&uLocal_613, 1, "Fam1New"))
	{
	}
	__LIB_31__.func_124(iLocal_325, iLocal_54, fLocal_389);
	__LIB_31__.func_124(iLocal_326, iLocal_55, fLocal_389);
	switch (iLocal_270)
	{
		case 0:
			if (fLocal_392 > 0f)
			{
				iLocal_321 = 0;
				iLocal_270++;
			}
		case 1:
			if (fLocal_392 > 10000.05f)
			{
				iLocal_321 = 1;
				iLocal_270++;
			}
		case 2:
			if (fLocal_392 > 37351.9f)
			{
				iLocal_321 = 2;
				iLocal_270++;
			}
		case 3:
			if (fLocal_392 > 64958.88f)
			{
				iLocal_321 = 1;
				iLocal_270++;
			}
		case 4:
			if (fLocal_392 > 67958.88f)
			{
				iLocal_321 = 2;
				iLocal_270++;
			}
		case 5:
			if (fLocal_392 > 73188.95f)
			{
				iLocal_321 = 1;
				iLocal_270++;
			}
		case 6:
			if (fLocal_392 > 96840.61f)
			{
				iLocal_321 = 2;
				iLocal_270++;
			}
		case 7:
			if (fLocal_392 > 106840.61f)
			{
				iLocal_321 = 1;
				iLocal_270++;
			}
		case 8:
			if (fLocal_392 > 109547.61f)
			{
				iLocal_321 = 2;
				iLocal_270++;
			}
		case 9:
			if (fLocal_392 > 116840.61f)
			{
				if (iLocal_298 == 0)
				{
					iLocal_299 = 0;
					iLocal_298 = 1;
				}
				iLocal_321 = 0;
				iLocal_270++;
			}
		case 10:
			if (fLocal_392 > 126840.61f)
			{
				iLocal_321 = 1;
				iLocal_270++;
			}
		case 11:
			if (fLocal_392 > 136840.61f)
			{
				iLocal_321 = 2;
				iLocal_270++;
			}
		case 12:
			if (fLocal_392 > 185840.61f)
			{
				iLocal_270++;
			}
		default:
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_342, false))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iLocal_342, true) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_346, false))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(iLocal_346, true) };
	}
	if (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/) || bLocal_3014)
	{
		if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_342))
		{
			fVar2 = MISC::ABSF((Var0.f_2 - Var1.f_2));
		}
		else
		{
			fVar2 = 0f;
		}
	}
	if ((((((((!ENTITY::IS_ENTITY_DEAD(iLocal_342, false) && iLocal_3023 > 8) && iLocal_3023 < 36) && PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_342)) && fVar2 < 3f) && !__LIB_0__.func_77(0)) && __LIB_4__.func_230(ENTITY::GET_ENTITY_HEADING(iLocal_342), ENTITY::GET_ENTITY_HEADING(iLocal_346), 50f)) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_342, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_346, Local_387), 8f, 14f, 5f, false, true, 0)) || bLocal_3014)
	{
		if (((((iLocal_299 == 0 && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !CAM::IS_CAM_ACTIVE(iLocal_322)) && !CAM::IS_CAM_ACTIVE(iLocal_325)) && !CAM::IS_CAM_ACTIVE(iLocal_326)) && iLocal_3023 > 9)
		{
			__LIB_0__.func_151("YB_HELP3", -1);
			iLocal_299 = 1;
		}
		if (__LIB_26__.func_362(&uLocal_434, 0, 0, 0) || bLocal_3014)
		{
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_1_FOCUS_ON_YACHT"))
			{
				AUDIO::START_AUDIO_SCENE("FAMILY_1_FOCUS_ON_YACHT");
			}
			if (!bLocal_3014)
			{
				iLocal_298 = 1;
			}
			if (fLocal_392 > 145840.61f)
			{
				iLocal_321 = 1;
			}
			if (!bLocal_3014 && !bLocal_3015)
			{
				switch (iLocal_321)
				{
					case 0:
						if (!bLocal_3014)
						{
							if (!CAM::IS_CAM_ACTIVE(iLocal_322))
							{
								CAM::SET_CAM_ACTIVE(iLocal_322, true);
								CAM::SHAKE_CAM(iLocal_322, "SKY_DIVING_SHAKE", 1f);
							}
						}
						CAM::SET_CAM_ACTIVE(iLocal_325, false);
						CAM::SET_CAM_ACTIVE(iLocal_326, false);
						CAM::SET_CAM_MOTION_BLUR_STRENGTH(iLocal_322, 0.1f);
						break;
					case 1:
						CAM::SET_CAM_ACTIVE(iLocal_322, false);
						CAM::SET_CAM_ACTIVE(iLocal_325, true);
						CAM::SET_CAM_ACTIVE(iLocal_326, false);
						CAM::SET_CAM_MOTION_BLUR_STRENGTH(iLocal_325, 0.1f);
						CAM::SET_CAM_NEAR_CLIP(iLocal_325, 0f);
						break;
					case 2:
						CAM::SET_CAM_ACTIVE(iLocal_322, false);
						CAM::SET_CAM_ACTIVE(iLocal_325, false);
						CAM::SET_CAM_ACTIVE(iLocal_326, true);
						CAM::SET_CAM_MOTION_BLUR_STRENGTH(iLocal_326, 0.1f);
						CAM::SET_CAM_NEAR_CLIP(iLocal_326, 0f);
						break;
					}
			}
			if (bLocal_3014 || bLocal_3015)
			{
				CAM::SET_CAM_ACTIVE(iLocal_322, true);
				CAM::SET_CAM_ACTIVE(iLocal_325, false);
				CAM::SET_CAM_ACTIVE(iLocal_326, false);
			}
			if (bLocal_3016)
			{
				CAM::SET_CAM_ACTIVE(iLocal_322, false);
				CAM::SET_CAM_ACTIVE(iLocal_325, true);
				CAM::SET_CAM_ACTIVE(iLocal_326, false);
			}
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			HUD::DISPLAY_HUD(false);
			HUD::DISPLAY_RADAR(false);
			CAM::SET_WIDESCREEN_BORDERS(true, 0);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(11);
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			}
			if (bLocal_3014 && bLocal_3015)
			{
			}
			else
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			}
			if (iLocal_267 == 0)
			{
				if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					HUD::CLEAR_HELP(true);
				}
			}
			iLocal_3065 = 1;
		}
		else
		{
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_1_FOCUS_ON_YACHT"))
			{
				AUDIO::STOP_AUDIO_SCENE("FAMILY_1_FOCUS_ON_YACHT");
			}
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			}
			CAM::SET_CAM_ACTIVE(iLocal_322, false);
			CAM::SET_CAM_ACTIVE(iLocal_325, false);
			CAM::SET_CAM_ACTIVE(iLocal_326, false);
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			HUD::DISPLAY_HUD(true);
			HUD::DISPLAY_RADAR(true);
			CAM::SET_WIDESCREEN_BORDERS(false, 0);
			iLocal_3065 = 0;
		}
	}
	else
	{
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_1_FOCUS_ON_YACHT"))
			{
				AUDIO::START_AUDIO_SCENE("FAMILY_1_FOCUS_ON_YACHT");
			}
		}
		else if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_1_FOCUS_ON_YACHT"))
		{
			AUDIO::STOP_AUDIO_SCENE("FAMILY_1_FOCUS_ON_YACHT");
		}
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		}
		iLocal_3065 = 0;
		CAM::SET_CAM_ACTIVE(iLocal_322, false);
		CAM::SET_CAM_ACTIVE(iLocal_325, false);
		CAM::SET_CAM_ACTIVE(iLocal_326, false);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		HUD::DISPLAY_HUD(true);
		HUD::DISPLAY_RADAR(true);
		CAM::SET_WIDESCREEN_BORDERS(false, 0);
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_346, false) && (iLocal_3023 < 8 || iLocal_3023 > 33))
		{
			if (iLocal_3023 > 33)
			{
				func_387(&uLocal_422, iLocal_346, "YB_FOCUS", 0, 1, 0, 1);
			}
			else
			{
				func_387(&uLocal_422, iLocal_346, "YB_FOCUS", 0, 1, (Global_100441.f_12[0] == 0 && iLocal_3023 > 9), 1);
			}
			if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				Global_100441.f_12[0] = 1;
			}
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_342, false))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_342))
		{
			func_1();
		}
	}
	func_382();
}

void func_382()//Position - 0x1FA9F
{
	float fVar0;
	var uVar1;
	float fVar2;
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_342, false) && !ENTITY::IS_ENTITY_DEAD(iLocal_345, false))
	{
		if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_342))
		{
			if ((CAM::IS_CAM_ACTIVE(iLocal_322) || CAM::IS_CAM_ACTIVE(iLocal_325)) || CAM::IS_CAM_ACTIVE(iLocal_326))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_342, false))
				{
					uVar1 = func_385(ENTITY::GET_ENTITY_COORDS(iLocal_345, true), 1, "Fam1New", &uLocal_613);
					if (!bLocal_3014)
					{
						fVar2 = __LIB_0__.func_76(iLocal_342, iLocal_345, 1);
						if (fVar2 < 25f)
						{
							fVar2 = 25f;
						}
						fVar0 = func_384(uVar1, fVar2);
					}
					else if (iLocal_3023 > 10)
					{
						fVar0 = func_384(uVar1, 23f);
					}
					else
					{
						fVar0 = func_384(uVar1, 24.5f);
					}
					fLocal_390 = fLocal_389;
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_342, 1, "Fam1Cine", true);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_342, fVar0);
					VEHICLE::SET_PLAYBACK_SPEED(iLocal_342, fLocal_389);
					VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_342, true);
				}
			}
		}
		else
		{
			VEHICLE::SET_PLAYBACK_SPEED(iLocal_345, fLocal_389);
			VEHICLE::SET_PLAYBACK_SPEED(iLocal_346, fLocal_389);
			if (iLocal_3023 > 10)
			{
				if (ENTITY::GET_ENTITY_SPEED(iLocal_342) > ENTITY::GET_ENTITY_SPEED(iLocal_346) && !func_383())
				{
					fLocal_390 = (fLocal_390 - (0.815f * SYSTEM::TIMESTEP()));
				}
				else
				{
					fLocal_390 = (fLocal_390 + (0.81f * SYSTEM::TIMESTEP()));
				}
			}
			else
			{
				GRAPHICS::SET_DEBUG_LINES_AND_SPHERES_DRAWING_ACTIVE(true);
				if (ENTITY::GET_ENTITY_SPEED(iLocal_342) > ENTITY::GET_ENTITY_SPEED(iLocal_346) && !func_383())
				{
					fLocal_390 = (fLocal_390 - (0.18f * SYSTEM::TIMESTEP()));
				}
				else
				{
					fLocal_390 = (fLocal_390 + (0.1f * SYSTEM::TIMESTEP()));
				}
			}
			VEHICLE::SET_PLAYBACK_SPEED(iLocal_342, fLocal_390);
			if (!((CAM::IS_CAM_ACTIVE(iLocal_322) || CAM::IS_CAM_ACTIVE(iLocal_325)) || CAM::IS_CAM_ACTIVE(iLocal_326)))
			{
				ENTITY::SET_ENTITY_COLLISION(iLocal_342, true, false);
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_342);
			}
		}
	}
}

int func_383()//Position - 0x1FC82
{
	if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_342) < (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_342) - fLocal_49))
	{
		return 1;
	}
	return 0;
}

float func_384(var uParam0, float fParam1)//Position - 0x1FCA4
{
	struct<3> Var0;
	fLocal_3064 = uParam0;
	Var0 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(502, fLocal_3064, "Fam1") };
	while (MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, ENTITY::GET_ENTITY_COORDS(iLocal_345, true), true) < fParam1)
	{
		Var0 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(502, fLocal_3064, "Fam1") };
		fLocal_3064 = (fLocal_3064 - 100f);
		if (fLocal_3064 < 0f)
		{
			return 0f;
		}
	}
	return (fLocal_3064 + 100f);
}

float func_385(struct<3> Param0, int iParam1, char* sParam2, var uParam3)//Position - 0x1FD10
{
	float fVar0;
	float fVar1;
	int iVar2;
	struct<3> Var3;
	float fVar4;
	float fVar5;
	if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam1, sParam2))
	{
		fVar0 = (VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iParam1, sParam2) / 800f);
		iVar2 = func_386(Param0, uParam3);
		fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(*(uParam3[iVar2 /*3*/]), *(uParam3[iVar2 + 1 /*3*/]), true);
		Var3 = { MISC::GET_CLOSEST_POINT_ON_LINE(Param0, *(uParam3[iVar2 /*3*/]), *(uParam3[iVar2 + 1 /*3*/]), true) };
		fVar4 = MISC::GET_DISTANCE_BETWEEN_COORDS(*(uParam3[iVar2 /*3*/]), Var3, true);
		fVar5 = ((fVar4 / fVar1) * fVar0);
	}
	return (fVar5 + (IntToFloat(iVar2) * fVar0));
}

int func_386(struct<3> Param0, var uParam1)//Position - 0x1FDA0
{
	int iVar0;
	float fVar1;
	float fVar2;
	fVar1 = 99999f;
	iVar0 = iLocal_611;
	while (iVar0 <= 798)
	{
		fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(MISC::GET_CLOSEST_POINT_ON_LINE(Param0, *(uParam1[iVar0 /*3*/]), *(uParam1[iVar0 + 1 /*3*/]), true), Param0, true);
		if (fVar2 < fVar1)
		{
			iLocal_611 = iVar0;
			fVar1 = fVar2;
		}
		iVar0++;
	}
	return iLocal_611;
}

void func_387(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x1FDFF
{
	__LIB_38__.func_132(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, bParam5, bParam6);
}

int func_415(var uParam0, int iParam1, char* sParam2)//Position - 0x20F15
{
	if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam1, sParam2) && iLocal_3019 > -1)
	{
		if (iLocal_3019 == 0)
		{
			fLocal_3020 = VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iParam1, sParam2);
			fLocal_3021 = (fLocal_3020 / 800f);
			*(uParam0[799 /*3*/]) = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iParam1, fLocal_3020, sParam2) };
		}
		if (iLocal_3019 < 799)
		{
			*(uParam0[iLocal_3019 /*3*/]) = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iParam1, (fLocal_3021 * IntToFloat(iLocal_3019)), sParam2) };
			if (iLocal_3019 + 1 < 799)
			{
				*(uParam0[iLocal_3019 + 1 /*3*/]) = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iParam1, (fLocal_3021 * IntToFloat(iLocal_3019 + 1)), sParam2) };
			}
			if (iLocal_3019 + 2 < 799)
			{
				*(uParam0[iLocal_3019 + 2 /*3*/]) = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iParam1, (fLocal_3021 * IntToFloat(iLocal_3019 + 2)), sParam2) };
			}
			if (iLocal_3019 + 3 < 799)
			{
				*(uParam0[iLocal_3019 + 3 /*3*/]) = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iParam1, (fLocal_3021 * IntToFloat(iLocal_3019 + 3)), sParam2) };
			}
			iLocal_3019 += 4;
			return 0;
		}
		else
		{
			iLocal_3019 = -1;
			return 1;
		}
	}
	return 0;
}

void func_416()//Position - 0x21016
{
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_374))
	{
		PED::SET_SYNCHRONIZED_SCENE_ORIGIN(iLocal_374, Local_419, Local_420, 2);
		Local_419.f_0 = (Local_419.f_0 * (1f - (2.5f * SYSTEM::TIMESTEP())));
		Local_419.f_1 = (Local_419.f_1 * (1f - (2.5f * SYSTEM::TIMESTEP())));
		Local_419.f_2 = (Local_419.f_2 * (1f - (8.5f * SYSTEM::TIMESTEP())));
		Local_420.f_0 = (Local_420.f_0 * (1f - (8.9f * SYSTEM::TIMESTEP())));
		Local_420.f_1 = (Local_420.f_1 * (1f - (8.9f * SYSTEM::TIMESTEP())));
		Local_420.f_2 = (Local_420.f_2 * (1f - (8.9f * SYSTEM::TIMESTEP())));
		if (iLocal_421 == 0)
		{
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_374))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_374) > 0.01f && iLocal_3097 == 0)
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "FAMILY1_DROP_IN_CAR", iLocal_354, 0, false, 0);
					iLocal_3097 = 1;
				}
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_374) > 0.024f)
				{
					if (SYSTEM::VDIST(Local_419, 0f, 0f, 0f) < 1.15f)
					{
						CAM::SHAKE_GAMEPLAY_CAM("JOLT_SHAKE", 0.42f);
						ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_342, 1, 0f, 0f, -5.4f, 0f, -0.9f, 0f, 0, true, true, true, false, true);
						Local_419.f_0 = 0f;
						Local_419.f_1 = 0f;
						Local_419.f_2 = 0f;
						Local_420.f_0 = 0f;
						Local_420.f_1 = 0f;
						Local_420.f_2 = 0f;
						iLocal_421 = 1;
					}
					else
					{
						PED::SET_PED_TO_RAGDOLL(iLocal_354, 0, 60000, 2, true, true, false);
						__LIB_0__.func_324("YB_FAIL1");
						if (!PED::IS_PED_INJURED(iLocal_354))
						{
							PED::APPLY_DAMAGE_TO_PED(iLocal_354, 1000, true, 0);
						}
						AUDIO::TRIGGER_MUSIC_EVENT("FAM1_FAIL");
						func_6();
					}
				}
			}
		}
		else if (!iLocal_248 && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_374) >= 0.021f)
		{
			if (AUDIO::PREPARE_MUSIC_EVENT("FAM1_JIMMY_LANDS"))
			{
				AUDIO::TRIGGER_MUSIC_EVENT("FAM1_JIMMY_LANDS");
				iLocal_248 = 1;
			}
		}
	}
}

int func_417(struct<3> Param0, struct<3> Param1, int iParam2, int iParam3, int iParam4, char* sParam5, bool bParam6, char* sParam7, char* sParam8, char* sParam9, bool bParam10)//Position - 0x211DF
{
	int iVar0;
	iVar0 = PED::CREATE_SYNCHRONIZED_SCENE(Param0, Param1, 2);
	TASK::TASK_SYNCHRONIZED_SCENE(iParam2, iVar0, sParam7, sParam8, 1000f, -1000f, 0, 0, 1000f, 0);
	if (iParam3 != 0)
	{
		TASK::TASK_SYNCHRONIZED_SCENE(iParam3, iVar0, sParam7, sParam9, 1000f, -1000f, 0, 0, 1000f, 0);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam4, false))
	{
		PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iVar0, iParam4, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam4, sParam5));
	}
	PED::SET_SYNCHRONIZED_SCENE_LOOPED(iVar0, bParam6);
	if (bParam10)
	{
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iParam2, false, false);
		if (iParam3 != 0)
		{
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iParam3, false, false);
		}
	}
	return iVar0;
}

bool func_418(float fParam0)//Position - 0x2127B
{
	bool bVar0;
	struct<3> Var1;
	struct<3> Var2;
	if (fParam0 > 1f)
	{
		bVar0 = false;
	}
	else
	{
		bVar0 = true;
	}
	Var1 = { Vector(1.75f, 2f, 2f) * Vector(fParam0, fParam0, fParam0) };
	Var2 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_346, Local_387.f_0, Local_387.f_1, 0.2f) };
	MISC::GET_GROUND_Z_FOR_3D_COORD(Var2, &(Var2.f_2), false, false);
	return ENTITY::IS_ENTITY_AT_COORD(iLocal_342, Var2, Var1, bVar0, bVar0, 0);
}

void func_419()//Position - 0x212DD
{
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_369))
	{
		if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_369) >= 1f)
		{
			iLocal_251 = 1;
		}
	}
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_372))
	{
		if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_372) >= 1f)
		{
			iLocal_251 = 1;
		}
	}
	if (iLocal_251 == 1 && !(iLocal_263 > 0 && iLocal_52))
	{
		if (!PED::IS_PED_INJURED(iLocal_352))
		{
			if ((!PED::IS_PED_RAGDOLL(iLocal_352) && !PED::IS_PED_RAGDOLL(func_2())) && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_380))
			{
				if (MISC::GET_RANDOM_INT_IN_RANGE(0, 10) > 5)
				{
					iLocal_369 = func_446(func_2(), iLocal_352, iLocal_346, "chassis", 0, "MISSFAM1_YachtBattleonYacht02_", "onYacht_overboardLoop_F", "onYacht_overboardLoop_thugA", 1, 1, 4);
				}
				else
				{
					iLocal_372 = func_446(func_2(), iLocal_352, iLocal_346, "chassis", 0, "MISSFAM1_YachtBattleonYacht02_", "onYacht_overboardLoop2_F", "onYacht_overboardLoop2_thugA", 1, 1, 4);
				}
			}
		}
		iLocal_263++;
		iLocal_262 = 0;
		fLocal_259 = 0f;
		iLocal_3098 = 0;
		iLocal_251 = 0;
	}
	if (iLocal_3023 > 27 || (iLocal_263 > 0 && iLocal_52))
	{
		switch (iLocal_3098)
		{
			case 0:
				iLocal_3098++;
				break;
			case 1:
				iLocal_3098++;
				break;
			case 2:
				if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_380))
				{
					iLocal_380 = func_446(func_2(), iLocal_352, iLocal_346, "chassis", 0, "MISSFAM1_YachtBattleonYacht02_", "onYacht_overboard_pulldown_F", "onYacht_overboard_pulldown_thugA", 1, 1, 4);
					iLocal_356 = OBJECT::CREATE_OBJECT(joaat("prop_champ_box_01"), ENTITY::GET_ENTITY_COORDS(iLocal_352, true), true, true, false);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_356, iLocal_352, PED::GET_PED_BONE_INDEX(iLocal_352, 28422), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, 0);
					iLocal_262 = 0;
					fLocal_259 = 0f;
					iLocal_3098++;
				}
				break;
			case 3:
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_380) >= 0.5f && ENTITY::DOES_ENTITY_EXIST(iLocal_356))
				{
					ENTITY::PROCESS_ENTITY_ATTACHMENTS(iLocal_356);
					ENTITY::DETACH_ENTITY(iLocal_356, true, true);
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "FAMILY1_BOX_HIT_FRANKLIN", iLocal_356, 0, false, 0);
					__LIB_6__.func_834(func_2(), "MELEE_LARGE_GRUNT", 3);
					ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_356);
				}
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_380) >= 0.544f)
				{
					__LIB_5__.func_759(iLocal_352, "SCREAM_TERROR", "WAVELOAD_PAIN_MALE", 3);
					ENTITY::PROCESS_ENTITY_ATTACHMENTS(iLocal_352);
					TASK::SET_HIGH_FALL_TASK(iLocal_352, 10000, 30000, 0);
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_352, false))
					{
						PED::APPLY_DAMAGE_TO_PED(iLocal_352, 1000, true, 0);
					}
					PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(iLocal_352, 512);
					iLocal_3098++;
				}
				break;
			case 4:
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_380) >= 0.99f)
				{
					iLocal_380 = func_446(func_2(), 0, iLocal_346, "chassis", 1, "MISSFAM1_YachtBattleonYacht02_", "onYacht_overboardLoop_F", "", 0, 1, 4);
					iLocal_3098++;
				}
				break;
		}
	}
	else
	{
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_369))
		{
			switch (iLocal_262)
			{
				case 0:
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_369) >= 0.02f)
					{
						iLocal_356 = OBJECT::CREATE_OBJECT(joaat("prop_champ_box_01"), ENTITY::GET_ENTITY_COORDS(iLocal_352, true), true, true, false);
						ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_356, iLocal_352, PED::GET_PED_BONE_INDEX(iLocal_352, 28422), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, 0);
						ENTITY::SET_ENTITY_LOD_DIST(iLocal_356, 300);
						iLocal_262++;
					}
					break;
				case 1:
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_369) >= 0.594f)
					{
						ENTITY::PROCESS_ENTITY_ATTACHMENTS(iLocal_356);
						ENTITY::DETACH_ENTITY(iLocal_356, true, false);
						AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "FAMILY1_BOX_HIT_FRANKLIN", iLocal_356, 0, false, 0);
						__LIB_6__.func_834(func_2(), "MELEE_LARGE_GRUNT", 3);
						ENTITY::SET_ENTITY_VELOCITY(iLocal_356, ENTITY::GET_ENTITY_VELOCITY(iLocal_346));
						ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_356);
						iLocal_262++;
					}
					break;
				case 2:
					if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						if (__LIB_35__.func_984(&uLocal_446, "FAM1AUD", "FAM1_B4", 8, 0, 0, 0))
						{
							iLocal_262++;
						}
					}
					else
					{
						iLocal_262++;
					}
					break;
				case 3:
					if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_369) - fLocal_259) < 0f)
					{
						iLocal_262 = 0;
					}
					break;
			}
			fLocal_259 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_369);
		}
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_372))
		{
			switch (iLocal_262)
			{
				case 0:
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_372) >= 0.007f)
					{
						iLocal_356 = OBJECT::CREATE_OBJECT(joaat("prop_champ_box_01"), ENTITY::GET_ENTITY_COORDS(iLocal_352, true), true, true, false);
						ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_356, iLocal_352, PED::GET_PED_BONE_INDEX(iLocal_352, 28422), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, 0);
						ENTITY::SET_ENTITY_LOD_DIST(iLocal_356, 200);
						iLocal_262++;
					}
					break;
				case 1:
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_372) >= 0.616f)
					{
						ENTITY::PROCESS_ENTITY_ATTACHMENTS(iLocal_356);
						ENTITY::DETACH_ENTITY(iLocal_356, true, false);
						AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "FAMILY1_BOX_HIT_FRANKLIN", iLocal_356, 0, false, 0);
						__LIB_6__.func_834(func_2(), "MELEE_LARGE_GRUNT", 3);
						ENTITY::SET_ENTITY_VELOCITY(iLocal_356, ENTITY::GET_ENTITY_VELOCITY(iLocal_346));
						ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_356);
						iLocal_262++;
					}
					break;
				case 2:
					if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						if (__LIB_35__.func_984(&uLocal_446, "FAM1AUD", "FAM1_B4", 8, 0, 0, 0))
						{
							iLocal_262++;
						}
					}
					else
					{
						iLocal_262++;
					}
					break;
				case 3:
					if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_372) - fLocal_259) < 0f)
					{
						iLocal_262 = 0;
					}
					break;
			}
			fLocal_259 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_372);
			if (PED::IS_PED_INJURED(iLocal_352))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_356))
				{
					ENTITY::PROCESS_ENTITY_ATTACHMENTS(iLocal_356);
					ENTITY::DETACH_ENTITY(iLocal_356, true, false);
					ENTITY::SET_ENTITY_VELOCITY(iLocal_356, ENTITY::GET_ENTITY_VELOCITY(iLocal_346));
				}
			}
		}
	}
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_375))
	{
		switch (iLocal_262)
		{
			case 0:
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_375) >= 0.05f)
				{
					iLocal_356 = OBJECT::CREATE_OBJECT(joaat("prop_champ_box_01"), ENTITY::GET_ENTITY_COORDS(iLocal_352, true), true, true, false);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_356, iLocal_352, PED::GET_PED_BONE_INDEX(iLocal_352, 28422), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, 0);
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "FAMILY1_BOX_HIT_FRANKLIN", iLocal_356, 0, false, 0);
					__LIB_6__.func_834(func_2(), "MELEE_LARGE_GRUNT", 3);
					ENTITY::SET_ENTITY_LOD_DIST(iLocal_356, 200);
					iLocal_262++;
				}
				break;
			case 1:
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_375) >= 0.6f)
				{
					iLocal_262++;
				}
				break;
			case 2:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_375))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_375) >= 0.61f)
					{
						ENTITY::SET_ENTITY_HEALTH(func_2(), 0, 0);
						iLocal_375 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
						PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_375, false);
						PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_375, iLocal_346, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_346, "chassis"));
						HUD::CLEAR_HELP(true);
						SYSTEM::SETTIMERB(0);
						iLocal_262++;
					}
				}
				break;
			case 3:
				if (SYSTEM::TIMERB() > 4000)
				{
					ENTITY::PROCESS_ENTITY_ATTACHMENTS(iLocal_356);
					ENTITY::DETACH_ENTITY(iLocal_356, true, false);
					ENTITY::SET_ENTITY_VELOCITY(iLocal_356, ENTITY::GET_ENTITY_VELOCITY(iLocal_346));
					ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_356);
					ENTITY::SET_ENTITY_HEALTH(func_2(), 0, 0);
					HUD::CLEAR_HELP(true);
					__LIB_0__.func_324("CMN_FDIED" /* GXT: ~s~Franklin died. */);
					func_83();
					AUDIO::TRIGGER_MUSIC_EVENT("FAM1_FAIL");
					func_6();
				}
				break;
		}
		fLocal_259 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_375);
		if (PED::IS_PED_INJURED(iLocal_352))
		{
			ENTITY::DETACH_ENTITY(iLocal_356, true, false);
			ENTITY::SET_ENTITY_VELOCITY(iLocal_356, ENTITY::GET_ENTITY_VELOCITY(iLocal_346));
		}
	}
	if (ENTITY::GET_ENTITY_HEALTH(iLocal_352) < 200)
	{
		if (iLocal_262 == 0 && iLocal_3098 <= 1)
		{
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_380))
			{
				if (func_444(iLocal_380) > 0.99f)
				{
					iLocal_380 = func_446(func_2(), 0, iLocal_346, "chassis", 1, "MISSFAM1_YachtBattleonYacht02_", "onYacht_overboardLoop_F", "", 0, 1, 4);
					iLocal_262 = -1;
				}
			}
		}
	}
}

void func_420()//Position - 0x21A3F
{
	switch (iLocal_3055)
	{
		case 0:
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) && (MISC::GET_GAME_TIMER() - iLocal_297) > 2200)
			{
				iLocal_3086 = 0;
				iLocal_353 = PED::CREATE_PED(26, joaat("G_M_Y_SalvaGoon_01"), 723.9294f, -1087.4998f, 21.1693f, 96.2191f, true, true);
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_353, "FAMILY_1_BOAT_PEDS", 0f);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_353, 0, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_353, 2, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_353, 3, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_353, 4, 0, 0, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_353, true);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_353, iLocal_282);
				ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_353, false);
				iLocal_373 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
				PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_373, iLocal_346, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_346, "chassis"));
				__LIB_0__.func_203(&uLocal_446, 6, iLocal_353, "YACHTPED3", 0, 1);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_373, false);
				PED::SET_SYNCHRONIZED_SCENE_ORIGIN(iLocal_373, 0f, 0f, 0f, 0f, 0f, 0f, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_353, iLocal_373, "MISSFAM1_YACHTBATTLEonYacht02_", "onYacht_getOnBoom_thug", 1000f, -1000f, 0, 0, 1000f, 0);
				__LIB_0__.func_477(iLocal_353, 0);
				iLocal_3085 = MISC::GET_GAME_TIMER();
				ENTITY::STOP_ENTITY_ANIM(iLocal_346, "onYacht_hitByBoom_boom", "MISSFAM1_YACHTBATTLEonYacht02_", -1000f);
				ENTITY::PLAY_ENTITY_ANIM(iLocal_346, "Yacht_Door_Opening_mastOUT", "MISSFAM1_YachtBattle", 1000f, false, false, true, 0f, 0);
				VEHICLE::SWING_BOAT_BOOM_FREELY(iLocal_346, true);
				VEHICLE::ALLOW_BOAT_BOOM_TO_ANIMATE(iLocal_346, true);
				ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_346);
				iLocal_3055 = 1;
			}
			break;
		case 1:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_346, false))
			{
				VEHICLE::ALLOW_BOAT_BOOM_TO_ANIMATE(iLocal_346, true);
			}
			if (iLocal_3023 > 28)
			{
				if (!PED::IS_PED_INJURED(iLocal_353))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_373) >= 1f)
					{
						iLocal_373 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
						PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_373, iLocal_346, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_346, "misc_e"));
						PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_373, false);
						PED::SET_SYNCHRONIZED_SCENE_ORIGIN(iLocal_373, 0f, 0f, 0f, 0f, 0f, 0f, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_353, iLocal_373, "MISSFAM1_YACHTBATTLEonYacht02_", "onBoom_shuffleAlong_Thug", 1000f, -1000f, 0, 0, 1000f, 0);
						iLocal_3055 = 2;
					}
				}
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_373) && !PED::IS_PED_INJURED(iLocal_353))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_373) >= 1f)
				{
					iLocal_373 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
					PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_373, iLocal_346, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_346, "misc_e"));
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_373, false);
					PED::SET_SYNCHRONIZED_SCENE_ORIGIN(iLocal_373, 0f, 0f, 0f, 0f, 0f, 0f, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_353, iLocal_373, "MISSFAM1_YACHTBATTLEonYacht02_", "onBoom_shuffleAlong_Thug", 1000f, -1000f, 0, 0, 1000f, 0);
					iLocal_3055 = 2;
				}
			}
			if (iLocal_365 == 1)
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_3085) > 3000)
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_353, PLAYER::PLAYER_PED_ID(), false))
					{
						iLocal_3055 = 6;
					}
				}
			}
			break;
		case 2:
			if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_373) && !PED::IS_PED_INJURED(iLocal_353)) && iLocal_3023 < 27)
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_373) >= 1f)
				{
					iLocal_373 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
					PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_373, iLocal_346, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_346, "misc_e"));
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_373, true);
					PED::SET_SYNCHRONIZED_SCENE_ORIGIN(iLocal_373, 0f, 0f, 0f, 0f, 0f, 0f, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_353, iLocal_373, "MISSFAM1_YACHTBATTLEonYacht02_", "onBoom_hitJimmyLoop_Thug", 1000f, -1000f, 0, 0, 1000f, 0);
					iLocal_3088 = MISC::GET_GAME_TIMER();
					iLocal_3055 = 3;
				}
			}
			if (iLocal_3023 > 28)
			{
				if (!PED::IS_PED_INJURED(iLocal_353) && !ENTITY::IS_ENTITY_DEAD(iLocal_346, false))
				{
					if ((ENTITY::IS_ENTITY_ON_SCREEN(iLocal_346) && ENTITY::IS_ENTITY_ON_SCREEN(iLocal_353)) && (MISC::GET_GAME_TIMER() - iLocal_3087) > 5000)
					{
						__LIB_5__.func_759(iLocal_353, "SCREAM_TERROR", "WAVELOAD_PAIN_MALE", 3);
						ENTITY::PROCESS_ENTITY_ATTACHMENTS(iLocal_353);
						PED::SET_PED_TO_RAGDOLL(iLocal_353, 0, 10000, 2, true, true, false);
						AUDIO::PLAY_SOUND_FROM_COORD(-1, "TEST_SCREAM_LONG", ENTITY::GET_ENTITY_COORDS(iLocal_353, true), 0, false, 0, false);
						iLocal_3055 = 7;
					}
				}
			}
			if (iLocal_365 == 1)
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_353, PLAYER::PLAYER_PED_ID(), false))
				{
					iLocal_3055 = 6;
				}
			}
			break;
		case 3:
			if (iLocal_3023 < 27)
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_3088) > 10000)
				{
					iLocal_374 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
					if (!PED::IS_PED_INJURED(iLocal_354))
					{
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_354, iLocal_374, "MISSFAM1_YACHTBATTLEonYacht02_", "onBoom_twohand_hang_enter", 1000f, -1000f, 0, 0, 1000f, 0);
					}
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_374, false);
					PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_374, iLocal_346, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_346, "misc_e"));
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_354, false, false);
					iLocal_265 = 100;
					iLocal_3055 = 4;
				}
			}
			else
			{
				iLocal_3055 = 9;
			}
			break;
		case 4:
			if (iLocal_3023 < 27)
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_374) >= 0.99f && iLocal_265 != 101)
				{
					iLocal_374 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
					if (!PED::IS_PED_INJURED(iLocal_354))
					{
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_354, iLocal_374, "MISSFAM1_YACHTBATTLEonYacht02_", "onBoom_twohand_hang_idle", 1000f, -1000f, 0, 0, 1000f, 0);
					}
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_374, false);
					PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_374, iLocal_346, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_346, "misc_e"));
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_354, false, false);
					iLocal_265 = 101;
				}
				if ((MISC::GET_GAME_TIMER() - iLocal_3088) > 20000)
				{
					AUDIO::STOP_PED_SPEAKING(iLocal_354, true);
					__LIB_5__.func_759(iLocal_354, "SCREAM_TERROR", "WAVELOAD_PAIN_MALE", 3);
					ENTITY::PROCESS_ENTITY_ATTACHMENTS(iLocal_354);
					PED::SET_PED_TO_RAGDOLL(iLocal_354, 10000, 30000, 1, true, true, false);
					iLocal_3055 = 5;
				}
			}
			else
			{
				iLocal_3055 = 9;
			}
			break;
		case 5:
			if ((MISC::GET_GAME_TIMER() - iLocal_3088) > 23000)
			{
				if (iLocal_3023 < 27)
				{
					if (!PED::IS_PED_INJURED(iLocal_354))
					{
						ENTITY::SET_ENTITY_HEALTH(iLocal_354, 0, 0);
					}
				}
				else
				{
					iLocal_3055 = 9;
				}
			}
			break;
		case 6:
			if (!PED::IS_PED_INJURED(iLocal_353))
			{
				__LIB_5__.func_759(iLocal_353, "SCREAM_TERROR", "WAVELOAD_PAIN_MALE", 3);
				ENTITY::PROCESS_ENTITY_ATTACHMENTS(iLocal_353);
				PED::SET_PED_TO_RAGDOLL(iLocal_353, 0, 10000, 2, true, true, false);
				AUDIO::PLAY_SOUND_FROM_COORD(-1, "TEST_SCREAM_LONG", ENTITY::GET_ENTITY_COORDS(iLocal_353, true), 0, false, 0, false);
			}
			iLocal_3018 = MISC::GET_GAME_TIMER();
			CAM::ATTACH_CAM_TO_ENTITY(iLocal_322, iLocal_346, 1.3624f, -7.9447f, 3.2304f, true);
			CAM::POINT_CAM_AT_ENTITY(iLocal_322, iLocal_346, -0.2507f, -5.4743f, 2.6868f, true);
			CAM::SET_CAM_FOV(iLocal_322, 50.7682f);
			iLocal_3055 = 7;
			break;
		case 9:
			if (iLocal_3089 == 0)
			{
				iLocal_373 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
				PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_373, iLocal_346, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_346, "misc_e"));
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_373, true);
				PED::SET_SYNCHRONIZED_SCENE_ORIGIN(iLocal_373, 0f, 0f, 0f, 0f, 0f, 0f, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_353, iLocal_373, "MISSFAM1_YACHTBATTLEonYacht02_", "onboom_loop_goon", 1000f, -1000f, 0, 0, 1000f, 0);
				iLocal_3089 = 1;
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_373) && !PED::IS_PED_INJURED(iLocal_353))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_373) >= 0.99f)
				{
					__LIB_5__.func_759(iLocal_353, "SCREAM_TERROR", "WAVELOAD_PAIN_MALE", 3);
					ENTITY::PROCESS_ENTITY_ATTACHMENTS(iLocal_353);
					PED::SET_PED_TO_RAGDOLL(iLocal_353, 0, 10000, 2, true, true, false);
					iLocal_3018 = MISC::GET_GAME_TIMER();
					iLocal_3055 = 7;
				}
			}
			break;
		case 7:
			if ((MISC::GET_GAME_TIMER() - iLocal_3018) > 3500)
			{
				ENTITY::SET_ENTITY_HEALTH(iLocal_353, 0, 0);
				iLocal_3055 = 8;
			}
			break;
	}
	if (PED::IS_PED_INJURED(iLocal_353) && iLocal_3086 == 0)
	{
		__LIB_0__.func_202(&uLocal_446, 5);
		__LIB_0__.func_401(201, 1, 0);
		iLocal_3086 = 1;
	}
	else if (!ENTITY::IS_ENTITY_DEAD(iLocal_353, false))
	{
		if (PED::IS_PED_RAGDOLL(iLocal_353) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_353, PLAYER::PLAYER_PED_ID(), true))
		{
			ENTITY::SET_ENTITY_HEALTH(iLocal_353, 0, 0);
		}
	}
	if (((!__LIB_18__.func_197(&Local_283, 1) && iLocal_3055 >= 2) && iLocal_3055 <= 6) && iLocal_3023 < 29)
	{
		if (!PED::IS_PED_INJURED(iLocal_353))
		{
			if (iLocal_360 == 0)
			{
				__LIB_35__.func_984(&uLocal_446, "FAM1AUD", "FAM1_B3", 7, 0, 0, 0);
				iLocal_360 = 1;
			}
		}
	}
}

void func_423()//Position - 0x22281
{
	switch (iLocal_265)
	{
		case 0:
			fLocal_273[0] = 97838.59f;
			fLocal_273[1] = 101355.2f;
			fLocal_273[2] = 103463.8f;
			fLocal_273[3] = 109879.9f;
			if (fLocal_392 > fLocal_273[0])
			{
				iLocal_266 = 1;
			}
			if (fLocal_392 > fLocal_273[1])
			{
				iLocal_266 = 2;
			}
			if (fLocal_392 > fLocal_273[2])
			{
				iLocal_266 = 3;
			}
			iLocal_265++;
			break;
		case 1:
			if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_374) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_374) >= 1f) || iLocal_367 == 1)
			{
				iLocal_374 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0.1f, 0f, 0f, 0f, 2);
				if (!PED::IS_PED_INJURED(iLocal_354))
				{
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_354, iLocal_374, "MISSFAM1_YACHTBATTLEonYacht02_", "onBoom_hangLoop_J", 1000f, -1000f, 0, 0, 1000f, 0);
				}
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_374, true);
				PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_374, iLocal_346, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_346, "misc_e"));
				iLocal_367 = 1;
				iLocal_265++;
			}
			break;
		case 2:
			if (iLocal_266 < 4)
			{
				if (fLocal_392 > fLocal_273[iLocal_266])
				{
					iLocal_266++;
					iLocal_265++;
				}
			}
			else
			{
				iLocal_374 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0.1f, 0f, 0f, 0f, 2);
				if (!PED::IS_PED_INJURED(iLocal_354))
				{
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_354, iLocal_374, "MISSFAM1_YACHTBATTLEonYacht02_", "onBoom_hangLoop_J", 1000f, -1000f, 0, 0, 1000f, 0);
				}
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_374, true);
				PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_374, iLocal_346, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_346, "misc_e"));
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_354, false, false);
				iLocal_265 = -1;
			}
			break;
		case 3:
			iLocal_379 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0.1f, 0f, 0f, 0f, 2);
			if (!PED::IS_PED_INJURED(iLocal_354))
			{
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_354, iLocal_379, "MISSFAM1_YACHTBATTLEonYacht02_", "onBoom_liftLegs_J", 1000f, -1000f, 0, 0, 1000f, 0);
			}
			PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_379, false);
			PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_379, iLocal_346, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_346, "misc_e"));
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_354, false, false);
			iLocal_265++;
			break;
		case 4:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_379))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_379) >= 1f)
				{
					iLocal_265 = 1;
				}
			}
			break;
	}
}

void func_426()//Position - 0x22536
{
	iLocal_112 = 1;
}

void func_427()//Position - 0x22541
{
	iLocal_354 = PED::CREATE_PED(26, joaat("IG_JimmyDiSanto"), 723.9294f, -1087.4998f, 21.1693f, 96.2191f, true, true);
	AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_354, "FAMILY_1_BOAT_PEDS", 0f);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_354, 2, 1, 0, 0);
	ENTITY::SET_ENTITY_HEALTH(iLocal_354, 1000, 0);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_354, true);
	PED::SET_PED_SUFFERS_CRITICAL_HITS(iLocal_354, false);
	ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_354, false);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_354, joaat("PLAYER"));
	__LIB_0__.func_203(&uLocal_446, 2, iLocal_354, "JIMMY", 0, 1);
}

void func_429()//Position - 0x225E1
{
	switch (iLocal_267)
	{
		case 0:
			PLAYER::SPECIAL_ABILITY_UNLOCK(joaat("Player_Zero"), 0);
			PLAYER::ENABLE_SPECIAL_ABILITY(PLAYER::PLAYER_ID(), true, 0);
			iLocal_267++;
			break;
		case 1:
		case 2:
			if ((!ENTITY::IS_ENTITY_DEAD(iLocal_351, false) && iLocal_267 == 1) && !__LIB_18__.func_197(&Local_283, 1))
			{
				__LIB_10__.func_617(&uLocal_446, "FAM1AUD", "FAM1_WHERE", 9, 0, 0);
				iLocal_267 = 2;
			}
			PLAYER::SPECIAL_ABILITY_CHARGE_CONTINUOUS(PLAYER::PLAYER_ID(), 1, 0);
			if (func_444(iLocal_369) > 0f)
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) != 4)
				{
					TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "MISSFAM1_YACHTBATTLEonYacht01_", "grab_pistol", 8f, -8f, -1, 40, 0f, false, false, false);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
				}
				STREAMING::REQUEST_ANIM_SET("drive_by@low_ds");
				__LIB_7__.func_279(1, 1, 0, 0, 0, 0, 0);
				iLocal_267 = 3;
			}
			break;
		case 3:
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "MISSFAM1_YACHTBATTLEonYacht01_", "grab_pistol", 3))
			{
				ENTITY::SET_ENTITY_ANIM_SPEED(PLAYER::PLAYER_PED_ID(), "MISSFAM1_YACHTBATTLEonYacht01_", "grab_pistol", 2f);
				if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "MISSFAM1_YACHTBATTLEonYacht01_", "grab_pistol") > 0.6f || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 4)
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 4)
					{
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					}
					WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PISTOL"), 160, true, true);
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PISTOL"), true);
					iLocal_267 = 4;
				}
			}
			else if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) != 4)
			{
				TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "MISSFAM1_YACHTBATTLEonYacht01_", "grab_pistol", 8f, -8f, -1, 40, 0f, false, false, false);
			}
			else
			{
				WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PISTOL"), 160, true, true);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PISTOL"), true);
				iLocal_267 = 4;
			}
			break;
		case 4:
			if (func_444(iLocal_369) > 0.35f)
			{
				CAM::ATTACH_CAM_TO_ENTITY(iLocal_322, iLocal_342, -1.1121f, -0.6545f, 0.7565f, true);
				CAM::POINT_CAM_AT_ENTITY(iLocal_322, iLocal_342, 0.8794f, 1.5678f, 0.4467f, true);
				CAM::SET_CAM_FOV(iLocal_322, 50.0013f);
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_351, false))
				{
					__LIB_0__.func_210("YB_OBJ2", 5500, 1);
					iLocal_337 = __LIB_6__.func_850(iLocal_351, 1, 145);
				}
				HUD::SET_BLIP_DISPLAY(iLocal_410, 0);
				__LIB_7__.func_279(0, 1, 0, 0, 0, 0, 0);
				iLocal_267++;
			}
			break;
		case 5:
			iLocal_267++;
			break;
		case 6:
			if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				if (!PAD::GET_IS_USING_ALTERNATE_DRIVEBY())
				{
					__LIB_0__.func_151("YB_HELP4", 15000);
				}
				else
				{
					__LIB_0__.func_151("YB_HELP4ALT", 15000);
				}
				iLocal_3096 = MISC::GET_GAME_TIMER();
				iLocal_267++;
			}
			break;
		case 7:
			if (PED::IS_PED_INJURED(iLocal_351) && (MISC::GET_GAME_TIMER() - iLocal_3096) > 3000)
			{
				HUD::CLEAR_HELP(true);
				iLocal_267++;
			}
			break;
		case 8:
			iLocal_267++;
			break;
	}
}

void func_432(int iParam0, int iParam1, bool bParam2)//Position - 0x22A09
{
	PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 64);
	PED::SET_PED_RESET_FLAG(iParam0, iParam1, bParam2);
	PED::REQUEST_RAGDOLL_BOUNDS_UPDATE(iParam0, 1);
	PED::SET_PED_RESET_FLAG(iParam0, 249, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 118, false);
	PED::SET_PED_CAN_EVASIVE_DIVE(iParam0, false);
}

void func_435()//Position - 0x22A97
{
	VEHICLE::SWING_BOAT_BOOM_TO_RATIO(iLocal_346, fLocal_334);
	if (fLocal_334 < 0.85f)
	{
		fLocal_334 = (fLocal_334 + (0.1f * SYSTEM::TIMESTEP()));
	}
	else
	{
		fLocal_334 = 0.85f;
	}
}

void func_436()//Position - 0x22AD1
{
	struct<3> Var0;
	if (!CAM::IS_CINEMATIC_FIRST_PERSON_VEHICLE_INTERIOR_CAM_RENDERING())
	{
		CAM::DISABLE_CINEMATIC_BONNET_CAMERA_THIS_UPDATE();
	}
	func_432(func_2(), 64, 1);
	if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_342, true))
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(func_2(), true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true) < 1.5f || FIRE::IS_ENTITY_ON_FIRE(func_2()))
		{
			ENTITY::PROCESS_ENTITY_ATTACHMENTS(func_2());
			PED::SET_PED_TO_RAGDOLL(func_2(), 0, 60000, 1, true, true, false);
			HUD::CLEAR_HELP(true);
			__LIB_0__.func_324("CMN_FDIED" /* GXT: ~s~Franklin died. */);
			AUDIO::TRIGGER_MUSIC_EVENT("FAM1_FAIL");
			func_6();
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_342, false) && !PED::IS_PED_INJURED(func_2()))
	{
		func_437();
		fLocal_399 = ENTITY::GET_ENTITY_SPEED(iLocal_342);
		if (iLocal_244 == 0)
		{
			fLocal_401 = ENTITY::GET_ENTITY_SPEED(iLocal_342);
			fLocal_402 = ENTITY::GET_ENTITY_SPEED(iLocal_342);
			iLocal_403 = ENTITY::GET_ENTITY_HEALTH(iLocal_342);
			iLocal_244 = 1;
		}
		fLocal_400 = ((fLocal_399 - ((fLocal_401 + fLocal_402) / 2f)) / MISC::GET_FRAME_TIME());
		fLocal_402 = fLocal_401;
		fLocal_401 = fLocal_399;
		Var0 = { ENTITY::GET_ENTITY_ROTATION(iLocal_342, 2) };
		if (((!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_342) && !ENTITY::IS_ENTITY_DEAD(iLocal_346, false)) && !ENTITY::IS_ENTITY_TOUCHING_ENTITY(iLocal_342, iLocal_346)) && (iLocal_403 - ENTITY::GET_ENTITY_HEALTH(iLocal_342)) > 0)
		{
			if ((MISC::ABSF(fLocal_400) > 65f || (Var0.f_1 > 90f && Var0.f_1 < 270f)) || (Var0.f_0 > 90f && Var0.f_0 < 270f))
			{
				__LIB_6__.func_771();
				__LIB_5__.func_759(PLAYER::PLAYER_PED_ID(), "GENERIC_FRIGHTENED_HIGH", "MICHAEL_NORMAL", 3);
				iLocal_3024 = 11;
			}
		}
		iLocal_403 = ENTITY::GET_ENTITY_HEALTH(iLocal_342);
		switch (iLocal_3024)
		{
			case 0:
				if (ENTITY::GET_ENTITY_SPEED(iLocal_342) > 3.5f)
				{
					iLocal_377 = func_446(func_2(), 0, iLocal_342, "seat_pside_f", 1, "MISSFAM1_YachtBattleinCar01_", "FranklinOnBonnet_loop", "", 0, 0, 0);
					iLocal_253 = 0;
					iLocal_3024 = 1;
				}
				break;
			case 1:
				iLocal_253 = 0;
				if (func_441(1065353216, 1))
				{
					fLocal_406 = 2f;
				}
				else
				{
					fLocal_406 = 1f;
				}
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_378))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_378) >= 0.95f)
					{
						iLocal_377 = func_446(func_2(), 0, iLocal_342, "seat_pside_f", 1, "MISSFAM1_YachtBattleinCar01_", "FranklinOnBonnet_loop", "", 0, 1, 0);
						iLocal_253 = 0;
					}
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_377))
					{
						if (func_441(1065353216, 1))
						{
							iLocal_3024 = 2;
						}
					}
				}
				else if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_377))
				{
					if (fLocal_400 < (-21f * fLocal_406))
					{
						iLocal_3024 = 7;
					}
					if (fLocal_394 < (fLocal_404 * fLocal_406))
					{
						iLocal_3024 = 5;
					}
					else if (fLocal_394 > (fLocal_405 * fLocal_406))
					{
						iLocal_3024 = 6;
					}
					if (fLocal_394 > fLocal_404 && fLocal_394 < fLocal_405)
					{
						iLocal_3024 = 1;
					}
					if (func_441(1065353216, 1))
					{
						iLocal_3024 = 2;
					}
					if (ENTITY::GET_ENTITY_SPEED(iLocal_342) < 3f)
					{
						if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_376))
						{
							iLocal_376 = func_446(func_2(), 0, iLocal_342, "seat_pside_f", 1, "MISSFAM1_YachtBattleinCar01_", "FranklinOnBonnet_loopStop", "", 0, 0, 0);
						}
						iLocal_3024 = 0;
					}
				}
				break;
			case 2:
				iLocal_378 = func_446(func_2(), 0, iLocal_342, "seat_pside_f", 0, "MISSFAM1_YachtBattleinCar01_", "FranklinOnBonnet_jumpPrep", "", 0, 1, 0);
				iLocal_3024 = 3;
				break;
			case 3:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_378))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_378) >= 1f)
					{
						iLocal_378 = func_446(func_2(), 0, iLocal_342, "seat_pside_f", 1, "MISSFAM1_YachtBattleinCar01_", "FranklinOnBonnet_jumpPrep_loop", "", 0, 0, 0);
						iLocal_3024 = 4;
					}
				}
				break;
			case 4:
				if (!func_441(1.35f, 1))
				{
					iLocal_378 = func_446(func_2(), 0, iLocal_342, "seat_pside_f", 0, "MISSFAM1_YachtBattleinCar01_", "FranklinOnBonnet_jumpPrep_cancel", "", 0, 0, 0);
					__LIB_5__.func_759(func_2(), "GENERIC_SHOCKED_MED", "FRANKLIN_NORMAL", 4);
					iLocal_3024 = 1;
				}
				break;
			case 5:
				switch (iLocal_253)
				{
					case 0:
						iLocal_378 = func_446(func_2(), 0, iLocal_342, "seat_pside_f", 0, "MISSFAM1_YachtBattleinCar01_", "FranklinOnBonnet_leanLeft_intro", "", 0, 1, 0);
						__LIB_5__.func_759(func_2(), "FAM1_BWAA", "FRANKLIN", 4);
						iLocal_253++;
						break;
					case 1:
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_378))
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_378) >= 1f)
							{
								iLocal_378 = func_446(func_2(), 0, iLocal_342, "seat_pside_f", 1, "MISSFAM1_YachtBattleinCar01_", "FranklinOnBonnet_leanLeft_loop", "", 0, 1, 0);
								iLocal_253++;
							}
						}
						break;
					case 2:
						if (fLocal_394 > fLocal_404)
						{
							iLocal_253++;
						}
						break;
					case 3:
						iLocal_378 = func_446(func_2(), 0, iLocal_342, "seat_pside_f", 0, "MISSFAM1_YachtBattleinCar01_", "FranklinOnBonnet_leanLeft_outro", "", 0, 1, 0);
						iLocal_3024 = 1;
						iLocal_253++;
						break;
				}
				break;
			case 6:
				switch (iLocal_253)
				{
					case 0:
						iLocal_378 = func_446(func_2(), 0, iLocal_342, "seat_pside_f", 0, "MISSFAM1_YachtBattleinCar01_", "FranklinOnBonnet_leanRight_intro", "", 0, 1, 0);
						iLocal_253++;
						break;
					case 1:
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_378))
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_378) >= 1f)
							{
								iLocal_378 = func_446(func_2(), 0, iLocal_342, "seat_pside_f", 1, "MISSFAM1_YachtBattleinCar01_", "FranklinOnBonnet_leanRight_loop", "", 0, 1, 0);
								__LIB_5__.func_759(func_2(), "GENERIC_FRIGHTENED_MED", "FRANKLIN_NORMAL", 4);
								iLocal_253++;
							}
						}
						break;
					case 2:
						if (fLocal_394 < fLocal_405)
						{
							iLocal_253++;
						}
						break;
					case 3:
						iLocal_378 = func_446(func_2(), 0, iLocal_342, "seat_pside_f", 0, "MISSFAM1_YachtBattleinCar01_", "FranklinOnBonnet_leanRight_outro", "", 0, 1, 0);
						iLocal_3024 = 1;
						iLocal_253++;
						break;
				}
				break;
			case 7:
				iLocal_378 = func_446(func_2(), 0, iLocal_342, "seat_pside_f", 0, "MISSFAM1_YachtBattleinCar01_", "FranklinOnBonnet_leanBrake", "", 0, 1, 0);
				__LIB_5__.func_759(func_2(), "GENERIC_SHOCKED_HIGH", "FRANKLIN_NORMAL", 4);
				iLocal_3024 = 1;
				break;
			case 11:
				__LIB_5__.func_759(func_2(), "GENERIC_FRIGHTENED_HIGH", "FRANKLIN_NORMAL", 4);
				ENTITY::PROCESS_ENTITY_ATTACHMENTS(func_2());
				PED::SET_PED_TO_RAGDOLL(func_2(), 0, 60000, 2, true, true, false);
				iLocal_3023 = 41;
				break;
			}
	}
}

void func_437()//Position - 0x2312B
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_342, false))
	{
		fLocal_397 = fLocal_396;
		fLocal_396 = ENTITY::GET_ENTITY_HEADING(iLocal_342);
		fLocal_398 = (fLocal_396 - fLocal_397);
		if (fLocal_398 > 180f)
		{
			fLocal_398 = (fLocal_398 - 360f);
		}
		else if (fLocal_398 < -180f)
		{
			fLocal_398 = (fLocal_398 + 360f);
		}
		if (fLocal_393 >= 0.1f)
		{
			fLocal_393 = 0f;
			fLocal_394 = ((fLocal_395 / IntToFloat(iLocal_381)) * 10f);
			fLocal_395 = 0f;
			iLocal_381 = 0;
		}
		else
		{
			fLocal_395 = (fLocal_395 + fLocal_398);
			fLocal_393 = (fLocal_393 + (1f * SYSTEM::TIMESTEP()));
			iLocal_381++;
		}
	}
}

int func_441(float fParam0, bool bParam1)//Position - 0x232A2
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	float fVar4;
	Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_346, 0f, -10f, 0f) };
	Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_346, 0f, -11f, 0f) };
	Var2 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_346, 0f, -13f, 0f) };
	Var3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_346, 0f, -14f, 0f) };
	fVar4 = (2.3f * fParam0);
	if (__LIB_0__.func_529(iLocal_342, Var0, 0) < fVar4)
	{
		if (bParam1)
		{
			if (ENTITY::GET_ENTITY_SPEED(iLocal_346) < ENTITY::GET_ENTITY_SPEED(iLocal_342))
			{
				PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 14f);
			}
			else
			{
				PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
			}
		}
		else
		{
			PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
		}
		return 1;
	}
	if (__LIB_0__.func_529(iLocal_342, Var1, 0) < fVar4)
	{
		if (bParam1)
		{
			if (ENTITY::GET_ENTITY_SPEED(iLocal_346) < ENTITY::GET_ENTITY_SPEED(iLocal_342))
			{
				PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 12.5f);
			}
			else
			{
				PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
			}
		}
		return 1;
	}
	if (__LIB_0__.func_529(iLocal_342, Var2, 0) < fVar4)
	{
		if (bParam1)
		{
			if (ENTITY::GET_ENTITY_SPEED(iLocal_346) < ENTITY::GET_ENTITY_SPEED(iLocal_342))
			{
				PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 10.5f);
			}
			else
			{
				PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
			}
		}
		return 1;
	}
	if (__LIB_0__.func_529(iLocal_342, Var3, 0) < fVar4)
	{
		if (bParam1)
		{
			if (ENTITY::GET_ENTITY_SPEED(iLocal_346) < ENTITY::GET_ENTITY_SPEED(iLocal_342))
			{
				PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 8.5f);
			}
			else
			{
				PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
			}
		}
		return 1;
	}
	PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
	return 0;
}

int func_442(float fParam0)//Position - 0x2342A
{
	struct<3> Var0;
	struct<3> Var1;
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_342, false) && !ENTITY::IS_ENTITY_DEAD(iLocal_346, false))
	{
		Var0 = { ENTITY::GET_ENTITY_ROTATION(iLocal_342, 2) };
		Var1 = { ENTITY::GET_ENTITY_ROTATION(iLocal_346, 2) };
		if ((Var0.f_1 > 90f && Var0.f_1 < 270f) || (Var0.f_0 > 90f && Var0.f_0 < 270f))
		{
			return 0;
		}
		if (MISC::ABSF((ENTITY::GET_ENTITY_SPEED(iLocal_342) - ENTITY::GET_ENTITY_SPEED(iLocal_346))) > fLocal_336)
		{
			return 0;
		}
		if (MISC::ABSF((Var0.f_2 - Var1.f_2)) > fParam0)
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}
	return 1;
}

float func_444(int iParam0)//Position - 0x23526
{
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iParam0))
	{
		return PED::GET_SYNCHRONIZED_SCENE_PHASE(iParam0);
	}
	return 1f;
}

void func_445()//Position - 0x23544
{
	func_432(func_2(), 64, 1);
	Local_3095 = { ENTITY::GET_ENTITY_ROTATION(iLocal_342, 2) };
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_342, false))
	{
		if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_342))
		{
			if ((Local_3095.f_1 > 90f && Local_3095.f_1 < 270f) || (Local_3095.f_0 > 90f && Local_3095.f_0 < 270f))
			{
				__LIB_6__.func_771();
				PED::SET_PED_TO_RAGDOLL(func_2(), 0, 60000, 1, true, true, false);
				HUD::CLEAR_HELP(true);
				__LIB_0__.func_324("CMN_FDIED" /* GXT: ~s~Franklin died. */);
				AUDIO::TRIGGER_MUSIC_EVENT("FAM1_FAIL");
				func_6();
			}
		}
	}
}

int func_446(int iParam0, int iParam1, int iParam2, char* sParam3, bool bParam4, char* sParam5, char* sParam6, char* sParam7, bool bParam8, bool bParam9, int iParam10)//Position - 0x235E5
{
	int iVar0;
	float fVar1;
	float fVar2;
	iVar0 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
	if (bParam9)
	{
		fVar1 = 1000f;
		fVar2 = -1000f;
	}
	else
	{
		fVar1 = 4f;
		fVar2 = -4f;
	}
	TASK::TASK_SYNCHRONIZED_SCENE(iParam0, iVar0, sParam5, sParam6, fVar1, fVar2, iParam10, 0, 1000f, 0);
	if (iParam1 != 0)
	{
		TASK::TASK_SYNCHRONIZED_SCENE(iParam1, iVar0, sParam5, sParam7, fVar1, fVar2, iParam10, 0, 1000f, 0);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam2, false))
	{
		PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iVar0, iParam2, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam2, sParam3));
	}
	PED::SET_SYNCHRONIZED_SCENE_LOOPED(iVar0, bParam4);
	if (bParam8)
	{
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iParam0, false, false);
		if (iParam1 != 0)
		{
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iParam1, false, false);
		}
	}
	return iVar0;
}

void func_447(int iParam0, struct<3> Param1, float fParam2, float fParam3, float fParam4, float fParam5, bool bParam6)//Position - 0x23695
{
	float fVar0;
	struct<3> Var1;
	if (Local_241.f_0 == Local_240.f_0)
	{
		Local_240.f_0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(fParam2, fParam3);
		if (bParam6)
		{
			Local_240.f_1 = MISC::GET_RANDOM_FLOAT_IN_RANGE(fParam2, fParam3);
		}
		Local_240.f_2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(fParam2, fParam3);
		fLocal_242 = MISC::GET_RANDOM_FLOAT_IN_RANGE(fParam4, fParam5);
	}
	else
	{
		Var1 = { MISC::ABSF((Local_241.f_0 - Local_240.f_0)), MISC::ABSF((Local_241.f_1 - Local_240.f_1)), MISC::ABSF((Local_241.f_2 - Local_240.f_2)) };
		if (Var1.f_0 > Var1.f_1 && Var1.f_0 > Var1.f_2)
		{
			fVar0 = (fLocal_242 / Var1.f_0);
		}
		else if (Var1.f_1 > Var1.f_2)
		{
			fVar0 = (fLocal_242 / Var1.f_1);
		}
		else
		{
			fVar0 = (fLocal_242 / Var1.f_2);
		}
		if (fVar0 > 1f)
		{
			fVar0 = 1f;
		}
		__LIB_11__.func_859(&Local_241, Local_240.f_0, fLocal_242, 0);
		if (bParam6)
		{
			__LIB_11__.func_859(&(Local_241.f_1), Local_240.f_1, (fVar0 * Var1.f_1), 0);
		}
		__LIB_11__.func_859(&(Local_241.f_2), Local_240.f_2, (fVar0 * Var1.f_2), 0);
	}
	CAM::SET_CAM_ROT(iParam0, Param1 + Local_241, 2);
}

void func_449(int iParam0, int iParam1, struct<3> Param2, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0x23805
{
	if ((Local_241.f_0 == Local_240.f_0 && Local_241.f_1 == Local_240.f_1) && Local_241.f_2 == Local_240.f_2)
	{
		Local_240.f_0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(fParam3, fParam4);
		Local_240.f_1 = MISC::GET_RANDOM_FLOAT_IN_RANGE(fParam3, fParam4);
		Local_240.f_2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(fParam3, fParam4);
		fLocal_242 = MISC::GET_RANDOM_FLOAT_IN_RANGE(fParam5, fParam6);
	}
	else
	{
		__LIB_11__.func_859(&Local_241, Local_240.f_0, fLocal_242, 0);
		__LIB_11__.func_859(&(Local_241.f_1), Local_240.f_1, fLocal_242, 0);
		__LIB_11__.func_859(&(Local_241.f_2), Local_240.f_2, fLocal_242, 0);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		if (CAM::DOES_CAM_EXIST(iParam0))
		{
			CAM::POINT_CAM_AT_ENTITY(iParam0, iParam1, Param2 + Local_241, true);
		}
	}
}

void func_452()//Position - 0x23926
{
	iLocal_3019 = 0;
}

void func_453()//Position - 0x23932
{
	if (HUD::DOES_BLIP_EXIST(iLocal_410))
	{
		HUD::REMOVE_BLIP(&iLocal_410);
	}
	iLocal_410 = HUD::ADD_BLIP_FOR_ENTITY(iLocal_341);
	HUD::SET_BLIP_AS_FRIENDLY(iLocal_410, true);
}

void func_454()//Position - 0x2395D
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_342, false))
	{
		if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_342, false))
		{
			if (!iLocal_274)
			{
				if (!HUD::DOES_BLIP_EXIST(iLocal_328))
				{
					iLocal_328 = __LIB_6__.func_825(iLocal_342, 0, 0);
				}
				HUD::SET_BLIP_DISPLAY(iLocal_328, 4);
				if (HUD::DOES_BLIP_EXIST(iLocal_339))
				{
					iLocal_317 = HUD::GET_BLIP_INFO_ID_DISPLAY(iLocal_339);
					HUD::SET_BLIP_DISPLAY(iLocal_339, 0);
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_337))
				{
					iLocal_318 = HUD::GET_BLIP_INFO_ID_DISPLAY(iLocal_337);
					HUD::SET_BLIP_DISPLAY(iLocal_337, 0);
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_338))
				{
					iLocal_319 = HUD::GET_BLIP_INFO_ID_DISPLAY(iLocal_338);
					HUD::SET_BLIP_DISPLAY(iLocal_338, 0);
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_410))
				{
					iLocal_320 = HUD::GET_BLIP_INFO_ID_DISPLAY(iLocal_410);
					HUD::SET_BLIP_DISPLAY(iLocal_410, 0);
				}
				if (iLocal_275 == 0)
				{
					__LIB_0__.func_210("CMN_GENGETBCK" /* GXT: ~s~Get back in the ~b~car. */, 7500, 1);
					iLocal_275 = 1;
				}
				HUD::CLEAR_HELP(true);
				iLocal_274 = 1;
			}
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(11);
		}
		else if (iLocal_274)
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_328))
			{
				HUD::SET_BLIP_DISPLAY(iLocal_328, 0);
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_339))
			{
				HUD::SET_BLIP_DISPLAY(iLocal_339, iLocal_317);
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_337))
			{
				HUD::SET_BLIP_DISPLAY(iLocal_337, iLocal_318);
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_338))
			{
				HUD::SET_BLIP_DISPLAY(iLocal_338, iLocal_319);
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_410))
			{
				HUD::SET_BLIP_DISPLAY(iLocal_410, iLocal_320);
			}
			if (__LIB_0__.func_405("CMN_GENGETBCK" /* GXT: ~s~Get back in the ~b~car. */, 0, 0))
			{
				HUD::CLEAR_PRINTS();
			}
			iLocal_274 = 0;
		}
	}
}

void func_457()//Position - 0x23AEE
{
	iLocal_119 = 1;
}

void func_459()//Position - 0x23B09
{
	int iVar0;
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_345, false))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_345))
		{
			iVar0 = iLocal_3053;
			while (iVar0 <= 143)
			{
				if ((ENTITY::DOES_ENTITY_EXIST(iLocal_224[iVar0]) && ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_224[iVar0])) && iVar0 != 99)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_224[iVar0], false))
					{
						if (ENTITY::IS_ENTITY_A_VEHICLE(iLocal_224[iVar0]))
						{
							if (ENTITY::GET_ENTITY_MODEL(iLocal_224[iVar0]) == joaat("phantom") || ENTITY::GET_ENTITY_MODEL(iLocal_224[iVar0]) == joaat("packer"))
							{
								STREAMING::REQUEST_MODEL(joaat("trailers2"));
								if (STREAMING::HAS_MODEL_LOADED(joaat("trailers2")))
								{
									if (!ENTITY::DOES_ENTITY_EXIST(iLocal_347[iVar0]))
									{
										if (__LIB_0__.func_502())
										{
											iLocal_347[iVar0] = VEHICLE::CREATE_VEHICLE(joaat("trailers2"), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_224[iVar0], 0f, 3f, 10f), ENTITY::GET_ENTITY_HEADING(iLocal_224[iVar0]), true, true, false);
										}
										else
										{
											iLocal_347[iVar0] = VEHICLE::CREATE_VEHICLE(joaat("trailers2"), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_224[iVar0], 0f, 3f, 10f), ENTITY::GET_ENTITY_HEADING(iLocal_224[iVar0]), true, true, false);
										}
										STREAMING::REQUEST_COLLISION_AT_COORD(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_224[iVar0], 0f, 3f, 10f));
										VEHICLE::SET_DISABLE_SUPERDUMMY(iLocal_224[iVar0], true);
										VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_347[iVar0], 5f);
										VEHICLE::ATTACH_VEHICLE_TO_TRAILER(iLocal_224[iVar0], iLocal_347[iVar0], 1f);
										ENTITY::SET_ENTITY_DYNAMIC(iLocal_347[iVar0], true);
									}
								}
							}
						}
					}
				}
				else if (ENTITY::DOES_ENTITY_EXIST(iLocal_347[iVar0]))
				{
					iLocal_3053 = iVar0;
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_347[iVar0]));
				}
				iVar0++;
			}
			iVar0 = iLocal_3054;
			while (iVar0 <= 27)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_227[iVar0]) && ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_227[iVar0]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_227[iVar0], false))
					{
						if (ENTITY::IS_ENTITY_A_VEHICLE(iLocal_227[iVar0]))
						{
							if (ENTITY::GET_ENTITY_MODEL(iLocal_227[iVar0]) == joaat("phantom") || ENTITY::GET_ENTITY_MODEL(iLocal_227[iVar0]) == joaat("packer"))
							{
								STREAMING::REQUEST_MODEL(joaat("trailers2"));
								if (STREAMING::HAS_MODEL_LOADED(joaat("trailers2")))
								{
									if (!ENTITY::DOES_ENTITY_EXIST(iLocal_348[iVar0]))
									{
										if (__LIB_0__.func_502())
										{
											iLocal_348[iVar0] = VEHICLE::CREATE_VEHICLE(joaat("trailers2"), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_227[iVar0], 0f, 3f, 10f), ENTITY::GET_ENTITY_HEADING(iLocal_227[iVar0]), true, true, false);
										}
										else
										{
											iLocal_348[iVar0] = VEHICLE::CREATE_VEHICLE(joaat("trailers2"), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_227[iVar0], 0f, 3f, 10f), ENTITY::GET_ENTITY_HEADING(iLocal_227[iVar0]), true, true, false);
										}
										STREAMING::REQUEST_COLLISION_AT_COORD(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_227[iVar0], 0f, 3f, 10f));
										VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_348[iVar0], 5f);
										VEHICLE::SET_DISABLE_SUPERDUMMY(iLocal_227[iVar0], true);
										VEHICLE::ATTACH_VEHICLE_TO_TRAILER(iLocal_227[iVar0], iLocal_348[iVar0], 1f);
										ENTITY::SET_ENTITY_DYNAMIC(iLocal_348[iVar0], true);
									}
								}
							}
						}
					}
				}
				else if (ENTITY::DOES_ENTITY_EXIST(iLocal_348[iVar0]))
				{
					iLocal_3054 = iVar0;
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_348[iVar0]));
				}
				iVar0++;
			}
		}
	}
}

void func_460()//Position - 0x23E33
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	if ((MISC::GET_GAME_TIMER() - iLocal_3094) > 3000)
	{
		if (!__LIB_0__.func_75())
		{
			iVar0 = VEHICLE::GET_CLOSEST_VEHICLE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 10f, 0, __LIB_11__.func_129());
			if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
			{
				bVar2 = false;
				iVar3 = 0;
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar0, iLocal_342))
				{
					bVar2 = true;
				}
				else if (MISC::ABSF(ENTITY::GET_ENTITY_SPEED(iVar0)) > 2f)
				{
					if (MISC::ABSF((ENTITY::GET_ENTITY_HEADING(iVar0) - ENTITY::GET_ENTITY_HEADING(iLocal_342))) > 60f)
					{
						iVar3 = 1;
					}
				}
				if (bVar2 || iVar3)
				{
					iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false);
					if (!PED::IS_PED_INJURED(iVar1))
					{
						if (bVar2)
						{
							__LIB_6__.func_834(iVar1, "GENERIC_CURSE_HIGH", 5);
						}
						else
						{
							__LIB_6__.func_834(iVar1, "GENERIC_INSULT_HIGH", 5);
						}
						iLocal_3094 = MISC::GET_GAME_TIMER();
					}
				}
			}
		}
	}
}

void func_462()//Position - 0x23F0B
{
	int iVar0;
	int iVar1;
	iVar0 = iLocal_183;
	while (iVar0 <= 143)
	{
		if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(iLocal_342))
		{
			iLocal_301 = 0;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_224[iVar0]))
		{
			if (__LIB_0__.func_76(iLocal_342, iLocal_224[iVar0], 0) < 8f && iLocal_3023 > 8)
			{
				iLocal_301 = 1;
				iLocal_302 = MISC::GET_GAME_TIMER();
			}
			if ((__LIB_0__.func_76(iLocal_224[iVar0], iLocal_345, 0) < 15f && (MISC::GET_GAME_TIMER() - iLocal_3067) > iLocal_3069) && bLocal_3066 == 0)
			{
				bLocal_3066 = true;
				iLocal_3070++;
				if ((iLocal_3070 % iLocal_3071) == 0)
				{
					iLocal_3069 = MISC::GET_RANDOM_INT_IN_RANGE(500, 1000);
					if (iLocal_3071 == 2)
					{
						iLocal_3071 = 3;
					}
					else
					{
						iLocal_3071 = 2;
					}
				}
				else
				{
					iLocal_3069 = MISC::GET_RANDOM_INT_IN_RANGE(200, 250);
				}
				iLocal_3067 = MISC::GET_GAME_TIMER();
			}
			if (bLocal_3066 == 1)
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_3067) > iLocal_3068)
				{
					if ((iLocal_3070 % iLocal_3071) == 0)
					{
						iLocal_3068 = MISC::GET_RANDOM_INT_IN_RANGE(900, 1200);
					}
					else
					{
						iLocal_3068 = MISC::GET_RANDOM_INT_IN_RANGE(400, 500);
					}
					iLocal_3067 = MISC::GET_GAME_TIMER();
					bLocal_3066 = false;
				}
			}
			if (bLocal_3066)
			{
				AUDIO::SET_HORN_PERMANENTLY_ON(iLocal_345);
			}
		}
		if (iLocal_301)
		{
			if ((MISC::GET_GAME_TIMER() - iLocal_302) > 500)
			{
				if (!__LIB_18__.func_197(&Local_283, 1))
				{
					if (__LIB_35__.func_984(&uLocal_446, "FAM1AUD", "FAM1_NEARMIS", 8, 0, 0, 0))
					{
						iLocal_301 = 0;
					}
				}
			}
		}
		iVar0++;
	}
	iVar0 = iLocal_183;
	while (iVar0 <= 27)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_227[iVar0]))
		{
			if (__LIB_0__.func_76(iLocal_227[iVar0], iLocal_345, 0) < 15f)
			{
				AUDIO::SET_HORN_PERMANENTLY_ON(iLocal_345);
			}
		}
		iVar0++;
	}
	iVar1 = VEHICLE::GET_CLOSEST_VEHICLE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 40f, 0, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && (MISC::GET_GAME_TIMER() - iLocal_3072) > 1000)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar1, false))
		{
			if (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iVar1)))
			{
				if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(iVar1)) > 0.5f)
				{
					AUDIO::SET_HORN_PERMANENTLY_ON_TIME(iVar1, 5000f);
					iLocal_3072 = MISC::GET_GAME_TIMER();
				}
			}
		}
	}
}

void func_463()//Position - 0x2412F
{
	int iVar0;
	float fVar1;
	iLocal_261 = 1;
	iVar0 = 3000;
	fVar1 = 150f;
	switch (iLocal_3023)
	{
		case 3:
		case 4:
			if ((iLocal_3073 % 2) == 0)
			{
				if (iLocal_3024 == 1)
				{
					sLocal_260 = "FAM1_CLOSERF";
				}
				else
				{
					sLocal_260 = "";
				}
			}
			else
			{
				sLocal_260 = "FAM1_ENC1";
			}
			iVar0 = 2750;
			break;
		case 5:
		case 6:
		case 8:
			if (!func_441(1f, 0))
			{
				if ((iLocal_3073 % 2) == 0)
				{
					sLocal_260 = "FAM1_CLOSERF";
					iVar0 = 1000;
				}
				else
				{
					sLocal_260 = "FAM1_ENC1";
					iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(1500, 2500);
				}
			}
			else if ((iLocal_3073 % 2) == 0)
			{
				sLocal_260 = "FAM1_ENC2";
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(1500, 2500);
			}
			else
			{
				sLocal_260 = "FAM1_CLOSERM";
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(1500, 2500);
			}
			if (func_464())
			{
				sLocal_260 = "FAM1_SIDE";
			}
			break;
		case 9:
		case 10:
		case 11:
			sLocal_260 = "FAM1_TLK2SLF";
			fVar1 = 100f;
			iVar0 = 8000;
			break;
		case 12:
		case 13:
			sLocal_260 = "FAM1_TROUBLE";
			fVar1 = 70f;
			break;
		case 14:
			sLocal_260 = "FAM1_ENC3";
			fVar1 = 70f;
			break;
		case 16:
		case 17:
			sLocal_260 = "FAM1_SHOUT";
			fVar1 = 100f;
			iVar0 = 8000;
			break;
		case 15:
			sLocal_260 = "FAM1_ATTACK";
			fVar1 = 70f;
			break;
		case 18:
		case 19:
			if (iLocal_267 >= 4 && !PED::IS_PED_INJURED(iLocal_351))
			{
				if (MISC::GET_RANDOM_INT_IN_RANGE(0, 10) > 5)
				{
					sLocal_260 = "FAM1_ENC4";
					fVar1 = 70f;
				}
				else
				{
					sLocal_260 = "FAM1_ATTACK";
					fVar1 = 70f;
				}
			}
			break;
		case 21:
			sLocal_260 = "";
			break;
		case 22:
		case 23:
			sLocal_260 = "";
			break;
		case 24:
			sLocal_260 = "FAM1_ATTACK";
			break;
		case 25:
			sLocal_260 = "";
			break;
		case 28:
			switch (iLocal_3073)
			{
				case 0:
					if (!PED::IS_PED_INJURED(iLocal_352))
					{
						sLocal_260 = "FAM1_ATTACK";
						fVar1 = 70f;
					}
					break;
				case 1:
					if (iLocal_421 == 0)
					{
						sLocal_260 = "FAM1_HANGON";
						fVar1 = 70f;
					}
					break;
				case 2:
					if (!PED::IS_PED_INJURED(iLocal_352))
					{
						sLocal_260 = "FAM1_ENC4";
						fVar1 = 70f;
					}
					break;
			}
			iVar0 = 1200;
			break;
		case 26:
		case 27:
			if (func_418(1065353216))
			{
				if (iLocal_421 == 0)
				{
				}
			}
			else
			{
				switch (iLocal_3073)
				{
					case 0:
						if (MISC::GET_RANDOM_INT_IN_RANGE(0, 10) > 7)
						{
							if (!PED::IS_PED_INJURED(iLocal_353))
							{
								sLocal_260 = "FAM1_ENC6";
							}
							else
							{
								sLocal_260 = "FAM1_ENC5";
							}
						}
						else
						{
							sLocal_260 = "FAM1_ENC5";
						}
						fVar1 = 70f;
						break;
					case 1:
						sLocal_260 = "FAM1_HANG";
						fVar1 = 70f;
						break;
					case 2:
						if (iLocal_421 == 0)
						{
							if (__LIB_0__.func_502())
							{
								sLocal_260 = "FAM1_REASSUR";
							}
							else
							{
								sLocal_260 = "FAM1_HANGN2";
							}
							fVar1 = 70f;
						}
						break;
					}
			}
			iVar0 = 1200;
			break;
		case 29:
			sLocal_260 = "FAM1_TROUBLE";
			fVar1 = 70f;
			break;
		case 30:
		case 33:
			sLocal_260 = "FAM1_CTCHF";
			fVar1 = 70f;
			break;
		case 38:
		case 35:
		case 36:
			sLocal_260 = 0;
			break;
		case 37:
			sLocal_260 = "FAM1_BAD";
			break;
		case 39:
		case 40:
			if (__LIB_0__.func_76(PLAYER::PLAYER_PED_ID(), iLocal_346, 0) < 45f)
			{
				sLocal_260 = "FAM1_PLLOVER";
				fVar1 = 120f;
			}
			else
			{
				sLocal_260 = "FAM1_GETYCHT";
				fVar1 = 120f;
			}
			iVar0 = 4000;
			break;
		default:
			iLocal_261 = 0;
			break;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_346, false) && iLocal_277 == 1)
	{
		switch (iLocal_269)
		{
			case 0:
				__LIB_0__.func_203(&uLocal_446, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
				iLocal_269++;
				break;
			case 1:
				if (fLocal_392 > 38813.05f)
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "FAMILY1_CAR_CRASH_BIG", iLocal_346, 0, false, 0);
					iLocal_269++;
				}
				break;
			case 2:
				if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING() && !__LIB_18__.func_197(&Local_283, 1))
				{
					if (__LIB_35__.func_984(&uLocal_446, "FAM1AUD", "FAM1_CRASH", 9, 0, 0, 0))
					{
						iLocal_269++;
					}
				}
				else
				{
					iLocal_269++;
				}
				break;
			case 3:
				if (fLocal_392 > 43880.47f)
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "FAMILY1_CAR_CRASH_BIG", iLocal_346, 0, false, 0);
					iLocal_269++;
				}
				break;
			case 4:
				if ((!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING() && !__LIB_18__.func_197(&Local_283, 1)) && __LIB_0__.func_76(PLAYER::PLAYER_PED_ID(), iLocal_345, 0) < fVar1)
				{
					if (__LIB_35__.func_984(&uLocal_446, "FAM1AUD", "FAM1_CRASH", 9, 0, 0, 0))
					{
						iLocal_269++;
					}
				}
				else
				{
					iLocal_269++;
				}
				break;
			case 5:
				if (fLocal_392 > 62000.47f)
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "FAMILY1_CAR_CRASH_BIG", iLocal_346, 0, false, 0);
					iLocal_269++;
				}
				break;
			case 6:
				if ((!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING() && !__LIB_18__.func_197(&Local_283, 1)) && __LIB_0__.func_76(PLAYER::PLAYER_PED_ID(), iLocal_345, 0) < fVar1)
				{
					if (__LIB_35__.func_984(&uLocal_446, "FAM1AUD", "FAM1_CRASH", 9, 0, 0, 0))
					{
						iLocal_269++;
					}
				}
				else
				{
					iLocal_269++;
				}
				break;
			case 7:
				if (fLocal_392 > 73145.52f)
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "FAMILY1_CAR_CRASH_BIG", iLocal_346, 0, false, 0);
					iLocal_269++;
				}
				break;
			case 8:
				if ((!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING() && !__LIB_18__.func_197(&Local_283, 1)) && __LIB_0__.func_76(PLAYER::PLAYER_PED_ID(), iLocal_345, 0) < fVar1)
				{
					if (__LIB_35__.func_984(&uLocal_446, "FAM1AUD", "FAM1_GARB", 9, 0, 0, 0))
					{
						iLocal_269++;
					}
				}
				else
				{
					iLocal_269++;
				}
				break;
			case 9:
				if (fLocal_392 > 133791.02f)
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "FAMILY1_CAR_CRASH_BIG", iLocal_346, 0, false, 0);
					iLocal_269++;
				}
				break;
			case 10:
				if (iLocal_3073 == 3)
				{
					iLocal_269++;
				}
				break;
			}
	}
	if ((!ENTITY::IS_ENTITY_DEAD(iLocal_342, false) && iLocal_277 == 1) && iLocal_261)
	{
		if (((MISC::GET_GAME_TIMER() - iLocal_258) > iVar0 && ENTITY::GET_ENTITY_SPEED(iLocal_342) > 0.1f) && __LIB_0__.func_76(PLAYER::PLAYER_PED_ID(), iLocal_345, 0) < fVar1)
		{
			if ((!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_260) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_342, false)) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				if ((!__LIB_18__.func_197(&Local_283, 1) && !AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(func_2()))
				{
					if (__LIB_35__.func_984(&uLocal_446, "FAM1AUD", sLocal_260, 9, 0, 0, 0))
					{
						if (iLocal_3073 < 3)
						{
							iLocal_3073++;
						}
						else
						{
							iLocal_3073 = 0;
						}
						iLocal_258 = MISC::GET_GAME_TIMER();
					}
				}
			}
		}
		if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(iLocal_342) || iLocal_300)
		{
			if ((!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING() && !__LIB_18__.func_197(&Local_283, 1)) && iLocal_3023 < 9)
			{
				iLocal_300 = 1;
				if (__LIB_35__.func_984(&uLocal_446, "FAM1AUD", "FAM1_COLLIDE", 7, 0, 0, 0))
				{
					iLocal_300 = 0;
				}
			}
		}
	}
}

bool func_464()//Position - 0x248DA
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_346, false))
	{
		Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_346, -1f, -7.5f, 0f) };
		Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_346, 1f, -7.5f, 0f) };
		Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	}
	return (((Var1.f_0 - Var0.f_0) * (Var2.f_1 - Var0.f_1)) - ((Var1.f_1 - Var0.f_1) * (Var2.f_0 - Var0.f_0))) > 0f;
}

int func_465()//Position - 0x24940
{
	if (CAM::IS_SCREEN_FADED_IN())
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_354))
		{
			if (PED::IS_PED_INJURED(iLocal_354))
			{
				__LIB_0__.func_324("YB_FAIL1");
				func_6();
				return 1;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_342))
		{
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_342, false) || ENTITY::IS_ENTITY_DEAD(iLocal_342, false))
			{
				if (!PED::IS_PED_INJURED(func_2()))
				{
					func_432(func_2(), 64, 1);
				}
				iLocal_3023 = 43;
				return 1;
			}
			if (__LIB_11__.func_142(&iLocal_342))
			{
				if (!PED::IS_PED_INJURED(func_2()))
				{
					func_432(func_2(), 64, 1);
				}
				iLocal_3023 = 44;
				return 1;
			}
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_342, false))
			{
				if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_342, 100f, 100f, 100f, false, true, 0))
				{
					__LIB_0__.func_324("YB_FAIL2");
					SYSTEM::SETTIMERA(0);
					AUDIO::TRIGGER_MUSIC_EVENT("FAM1_FAIL");
					while (SYSTEM::TIMERA() < 7500)
					{
						if (iLocal_3023 < 8)
						{
							func_436();
						}
						if (!ENTITY::IS_ENTITY_DEAD(func_2(), false))
						{
							ENTITY::SET_ENTITY_INVINCIBLE(func_2(), true);
							func_432(func_2(), 64, 1);
						}
						SYSTEM::WAIT(0);
					}
					AUDIO::TRIGGER_MUSIC_EVENT("FAM1_FAIL");
					PED::DELETE_PED(&(iLocal_56[1]));
					func_6();
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_345))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_345, false) && iLocal_3023 != 38)
				{
					if (iLocal_3023 < 34)
					{
						if (!ENTITY::IS_ENTITY_AT_ENTITY(iLocal_342, iLocal_345, 230f, 230f, 230f, false, false, 0))
						{
							if (((!__LIB_18__.func_197(&Local_283, 1) && !AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_342, false)) && iLocal_276 == 0)
							{
								__LIB_0__.func_210("YB_WARN1", 7500, 1);
								iLocal_276 = 1;
							}
							if (!ENTITY::IS_ENTITY_AT_ENTITY(iLocal_342, iLocal_345, 300f, 300f, 300f, false, false, 0))
							{
								iLocal_3023 = 42;
								return 1;
							}
						}
					}
					if (iLocal_276 == 1)
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_342, iLocal_345, 180f, 180f, 180f, false, false, 0))
						{
							iLocal_276 = 0;
						}
					}
				}
				__LIB_10__.func_618(iLocal_410, iLocal_346, 300f, 0.85f, 0);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_346, false))
			{
			}
		}
	}
	return 0;
}

void func_467()//Position - 0x24CD9
{
	switch (iLocal_309)
	{
		case 0:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_227[3]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_227[3], false))
				{
					VEHICLE::SET_VEHICLE_COLOURS(iLocal_227[3], 88, 1);
					iLocal_3074 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_227[3], -1, false);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3074))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_3074, true, true);
						ENTITY::SET_ENTITY_VISIBLE(iLocal_3074, false, false);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3074, true);
						iLocal_3075 = MISC::GET_GAME_TIMER();
						iLocal_309++;
					}
				}
			}
			break;
		case 1:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_227[3], false) && !ENTITY::IS_ENTITY_DEAD(iLocal_342, false))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_227[3], iLocal_342, true))
				{
					iLocal_3076 = 1;
				}
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iLocal_227[3], iLocal_342))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3074))
					{
						PED::DELETE_PED(&iLocal_3074);
					}
				}
			}
			if (IntToFloat((MISC::GET_GAME_TIMER() - iLocal_3075)) > (18000f / fLocal_389) || iLocal_3076)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3074))
				{
					PED::DELETE_PED(&iLocal_3074);
				}
				iLocal_309++;
			}
			break;
	}
	switch (iLocal_310)
	{
		case 0:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_227[9]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_227[9], false))
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_227[9]))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_227[9], PLAYER::PLAYER_PED_ID(), 8.75f, 8.75f, 3f, false, true, 0))
						{
							if (ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_227[9], -1, false)))
							{
								TASK::TASK_VEHICLE_TEMP_ACTION(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_227[9], -1, false), iLocal_227[9], 5, 10000);
								iLocal_310++;
							}
						}
					}
				}
			}
			break;
	}
	switch (iLocal_311)
	{
		case 0:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_224[8]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_224[8], false))
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_224[8]))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_224[8], PLAYER::PLAYER_PED_ID(), 12.75f, 12.75f, 3f, false, true, 0))
						{
							if (ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_224[8], -1, false)))
							{
								TASK::TASK_VEHICLE_TEMP_ACTION(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_224[8], -1, false), iLocal_224[8], 5, 10000);
								iLocal_311++;
							}
						}
					}
				}
			}
			break;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_227[4]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_227[4], false))
		{
			VEHICLE::SET_VEHICLE_COLOURS(iLocal_227[4], 73, 1);
		}
	}
}

void func_468()//Position - 0x24F46
{
	if (ENTITY::DOES_ENTITY_EXIST(func_2()))
	{
		if (!ENTITY::IS_ENTITY_DEAD(func_2(), false))
		{
			PED::SET_PED_RESET_FLAG(func_2(), 249, true);
			if (!((iLocal_3022 == 5 || iLocal_3022 == 7) || iLocal_3022 == 6))
			{
				if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), func_2(), 100f, 100f, 100f, false, true, 0))
				{
					__LIB_0__.func_324("CMN_FLEFT" /* GXT: ~s~Franklin was left behind. */);
					func_6();
				}
			}
		}
		if (PED::IS_PED_INJURED(func_2()) && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_375))
		{
			__LIB_0__.func_324("CMN_FDIED" /* GXT: ~s~Franklin died. */);
			func_6();
		}
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!ENTITY::IS_ENTITY_DEAD(func_2(), false))
		{
			if (!ENTITY::IS_ENTITY_DEAD(func_2(), false) && iLocal_3023 != 41)
			{
				func_432(func_2(), 64, 1);
			}
		}
	}
	else if (!ENTITY::IS_ENTITY_DEAD(func_2(), false))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(func_2(), false);
	}
}

void func_469()//Position - 0x25037
{
	func_261();
	func_468();
	if (!ENTITY::IS_ENTITY_DEAD(func_2(), false))
	{
		PED::SET_PED_IS_IGNORED_BY_AUTO_OPEN_DOORS(func_2(), true);
	}
	MISC::SET_BIT(&(Local_283.f_13), 11);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 101 /*INPUT_VEH_ROOF*/, true);
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_329, 130f, 130f, 30f, false, true, 0) || func_488())
	{
		if (iLocal_333 == 0)
		{
			AUDIO::TRIGGER_MUSIC_EVENT("FAM1_FADE_RADIO");
			MISC::CLEAR_AREA(Local_329, 20f, true, false, false, false);
			iLocal_333 = 1;
		}
	}
	if ((ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_329, 190f, 190f, 30f, false, true, 0) || func_488()) || iLocal_330 == 1)
	{
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	}
	if (!iLocal_331)
	{
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_329, 350f, 350f, 60f, false, true, 0) || func_488())
		{
			func_487();
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, true);
			iLocal_331 = 1;
		}
	}
	if (!iLocal_330)
	{
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_329, 300f, 300f, 60f, false, true, 0) || func_488())
		{
			func_485();
			iLocal_330 = 1;
		}
	}
	if ((iLocal_332 == 0 && iLocal_330 == 1) && iLocal_331 == 1)
	{
		if (func_483() && HUD::DOES_BLIP_EXIST(Local_283.f_5))
		{
			func_482();
			func_480();
			func_474(1179840512);
			Local_3081 = { __LIB_0__.func_390() };
			if (MISC::ARE_STRINGS_EQUAL(&Local_3081, "FAM1_BANT"))
			{
				__LIB_6__.func_833();
				iLocal_3083 = 1;
			}
			iLocal_332 = 1;
		}
	}
	if ((((__LIB_38__.func_169(&Local_283, Local_329, 0.0001f, 0.0001f, 2.01f, 0, func_2(), 0, 0, iLocal_342, "YB_GETTO", "CMN_FLEAVE" /* GXT: ~s~Return to ~b~Franklin.~s~ */, "", "", "CMN_FLEAVE" /* GXT: ~s~Return to ~b~Franklin.~s~ */, "YB_GETIN", "CMN_GENGETBCK" /* GXT: ~s~Get back in the ~b~car. */, 0, 1, 1, -1) || func_473(1)) || (HUD::DOES_BLIP_EXIST(Local_283.f_5) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2118.9526f, -224.51512f, 13.085728f, -2150.7231f, -279.30164f, 24.510395f, 53.5f, false, true, 0))) || ((((ENTITY::DOES_ENTITY_EXIST(iLocal_346) && ENTITY::IS_ENTITY_ON_SCREEN(iLocal_346)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2131.759f, -242.8564f, 11.266136f, -2153.0378f, -283.3767f, 19.493343f, 30.25f, false, true, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2136.6125f, -234.8743f, 11.222314f, -1999.3562f, -161.10213f, 35.76831f, 64.5f, false, true, 0)) && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_329, 130f, 130f, 30f, false, true, 0))) || (HUD::DOES_BLIP_EXIST(Local_283.f_5) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2206.6643f, -368.1008f, 10.999576f, -2370.6301f, -279.8921f, 16.89787f, 39.75f, false, true, 0)))
	{
		if (iLocal_332 == 1 && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_342, false))
		{
			if (func_473(1))
			{
				func_472();
			}
			AUDIO::STOP_AUDIO_SCENE("FAMILY_1_DRIVE_TO_HIGHWAY");
			func_471();
			__LIB_20__.func_615(&Local_283, 0);
			iLocal_3022 = 5;
		}
	}
	func_470();
	switch (iLocal_305)
	{
		case 0:
			iLocal_3083 = 0;
			iLocal_3084 = 0;
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_342, false))
			{
				if (VEHICLE::GET_CONVERTIBLE_ROOF_STATE(iLocal_342) != 2 && VEHICLE::GET_CONVERTIBLE_ROOF_STATE(iLocal_342) != 1)
				{
					VEHICLE::LOWER_CONVERTIBLE_ROOF(iLocal_342, false);
				}
			}
			MISC::SET_INSTANCE_PRIORITY_HINT(2);
			AUDIO::START_AUDIO_SCENE("FAMILY_1_DRIVE_TO_HIGHWAY");
			AUDIO::REQUEST_SCRIPT_AUDIO_BANK("FAMILY_1_CHASE_01", false, -1);
			AUDIO::REQUEST_SCRIPT_AUDIO_BANK("FAMILY_1_CHASE_02", false, -1);
			AUDIO::REQUEST_SCRIPT_AUDIO_BANK("CAR_CRASHES_01", false, -1);
			iLocal_330 = 0;
			iLocal_331 = 0;
			iLocal_305++;
			break;
		case 1:
			if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (__LIB_38__.func_139(&uLocal_446, "FAM1AUD", "FAM1_BANT", 9, 0, 0, 0, 0))
				{
					iLocal_305++;
				}
			}
			break;
		case 2:
			if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() && HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON()) || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
			{
				if (__LIB_0__.func_438(PLAYER::PLAYER_PED_ID(), func_2()))
				{
					__LIB_9__.func_990();
					iLocal_305++;
				}
			}
			break;
		case 3:
			if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (__LIB_38__.func_139(&uLocal_446, "FAM1AUD", "FAM1_START", 9, 0, 0, 0, 0))
				{
					iLocal_305++;
				}
			}
			break;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_342, false))
	{
		if (!HUD::DOES_BLIP_EXIST(Local_283.f_5) && iLocal_3022 != 5)
		{
			if (!__LIB_0__.func_436())
			{
				__LIB_0__.func_488(1);
			}
		}
		else if (__LIB_0__.func_436())
		{
			if (__LIB_0__.func_438(PLAYER::PLAYER_PED_ID(), func_2()))
			{
				__LIB_0__.func_488(0);
			}
		}
	}
}

void func_470()//Position - 0x25516
{
	if (HUD::DOES_BLIP_EXIST(Local_283.f_5))
	{
		if (!iLocal_295)
		{
			HUD::START_GPS_MULTI_ROUTE(156, true, false);
			HUD::ADD_POINT_TO_GPS_MULTI_ROUTE(-1461.1736f, -85.7604f, 49.9523f);
			HUD::ADD_POINT_TO_GPS_MULTI_ROUTE(Local_329);
			HUD::SET_GPS_MULTI_ROUTE_RENDER(true);
			iLocal_3077 = MISC::GET_GAME_TIMER();
			iLocal_3078 = 0;
			iLocal_295 = 1;
		}
		if ((iLocal_295 == 1 && (MISC::GET_GAME_TIMER() - iLocal_3077) > 10000) && iLocal_3078 == 0)
		{
			HUD::SET_BLIP_ROUTE(Local_283.f_6, false);
			iLocal_3078 = 1;
		}
	}
	else if (iLocal_295)
	{
		HUD::SET_GPS_MULTI_ROUTE_RENDER(false);
		HUD::CLEAR_GPS_MULTI_ROUTE();
		iLocal_295 = 0;
	}
}

void func_471()//Position - 0x255B0
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_345, false))
	{
		VEHICLE::UNPAUSE_PLAYBACK_RECORDED_VEHICLE(iLocal_345);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_346, false))
	{
		VEHICLE::UNPAUSE_PLAYBACK_RECORDED_VEHICLE(iLocal_346);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_54, false))
	{
		VEHICLE::UNPAUSE_PLAYBACK_RECORDED_VEHICLE(iLocal_54);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_55, false))
	{
		VEHICLE::UNPAUSE_PLAYBACK_RECORDED_VEHICLE(iLocal_55);
	}
}

void func_472()//Position - 0x25600
{
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2036.1f, -357f, 50.3f, -2035.1f, -382.8f, 42.7f, 30f, false, true, 0))
	{
		func_474(9000f);
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2222.1f, -240.3f, 90f, -2430.8f, -140.7f, 10.04f, 10f, false, true, 0))
	{
		func_474(5500f);
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1928.2f, -425.3f, 27.5f, -2063.9f, -634.6f, 0.04f, 10f, false, true, 0))
	{
		func_474(13100f);
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2443.9f, -248.3f, 15f, -2420.8f, -226.7f, 20.04f, 20f, false, true, 0))
	{
		func_474(16200f);
	}
}

int func_473(bool bParam0)//Position - 0x256F0
{
	int iVar0;
	if ((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2036.1f, -356f, 50.3f, -2035.1f, -382.8f, 42.7f, 30f, false, true, 0) && CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(iLocal_346, true), 1f)) || (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1928.2f, -425.3f, 27.5f, -2063.9f, -634.6f, 0.04f, 10f, false, true, 0) && CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(iLocal_346, true), 7f))) || (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2443.9f, -248.3f, 15f, -2420.8f, -226.7f, 20.04f, 40f, false, true, 0) && CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(iLocal_346, true), 7f))) || (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2222.1f, -225.3f, 90f, -2430.8f, -140.7f, 10.04f, 10f, false, true, 0) && CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(iLocal_346, true) + Vector(-8f, 0f, 0f), 7f)))
	{
		iVar0 = 1;
		if (bParam0)
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_342, false) && PED::IS_PED_IN_VEHICLE(func_2(), iLocal_342, false))
			{
				iVar0 = 1;
			}
			else
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

void func_474(float fParam0)//Position - 0x25848
{
	STREAMING::SET_REDUCE_VEHICLE_MODEL_BUDGET(true);
	STREAMING::SET_REDUCE_PED_MODEL_BUDGET(true);
	STREAMING::SET_VEHICLE_POPULATION_BUDGET(0);
	STREAMING::SET_PED_POPULATION_BUDGET(1);
	if (!PED::IS_PED_INJURED(iLocal_349))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_349, true);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_345, false) && !ENTITY::IS_ENTITY_DEAD(iLocal_346, false))
	{
		if (iLocal_243)
		{
			func_60(0, 1);
		}
		func_479("Fam1", 502, 0, 1);
		iLocal_243 = 1;
		func_482();
		func_478(joaat("G_M_Y_SalvaGoon_01"));
		func_477(1);
		ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_345, iLocal_346, false);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_345, false);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_346, false);
		ENTITY::SET_ENTITY_LOD_DIST(iLocal_345, 1000);
		ENTITY::SET_ENTITY_LOD_DIST(iLocal_346, 1000);
		VEHICLE::SET_VEHICLE_LOD_MULTIPLIER(iLocal_346, 3f);
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_345, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_345))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_345);
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_346, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_346))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_346);
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_54, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_54))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_54);
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_55, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_55))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_55);
			}
		}
		VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_345, 1, "Fam1New", true);
		VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_346, 2, "Fam1New", true);
		VEHICLE::SET_VEHICLE_ACTIVE_DURING_PLAYBACK(iLocal_345, true);
		VEHICLE::SET_VEHICLE_ACTIVE_DURING_PLAYBACK(iLocal_346, true);
		AUDIO::SET_AUDIO_VEHICLE_PRIORITY(iLocal_345, 3);
		__LIB_31__.func_125(iLocal_325, iLocal_54, "Fam1Cam", 3);
		__LIB_31__.func_125(iLocal_326, iLocal_55, "Fam1Cam", 4);
		func_475(iLocal_345, fParam0);
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_345, false))
		{
			VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_345, ((VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_345) * -1f) + fParam0));
			VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_345, true);
			VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(iLocal_345);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_346, false))
		{
			VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_346, ((VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_346) * -1f) + fParam0));
			VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_346, true);
			VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(iLocal_346);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_54, false))
		{
			VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_54, ((VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_54) * -1f) + fParam0));
			VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_54, true);
			VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(iLocal_54);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_55, false))
		{
			VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_55, ((VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_55) * -1f) + fParam0));
			VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_55, true);
			VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(iLocal_55);
		}
	}
	PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
}

void func_475(int iParam0, float fParam1)//Position - 0x25A73
{
	int iVar0;
	float fVar1;
	bool bVar2;
	struct<3> Var3;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
		{
			func_426();
			func_351(&iParam0, iLocal_182, fParam1, 1, 0, 1, 0, 0);
			fLocal_153 = fParam1;
			iVar0 = 0;
			while (iVar0 < 28)
			{
				if (iLocal_176[iVar0] > 2 && iLocal_176[iVar0] < 6)
				{
					bVar2 = false;
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_227[iVar0]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_227[iVar0], false))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_227[iVar0]))
							{
								fVar1 = (fParam1 - fLocal_145[iVar0]);
								fVar1 = (fVar1 * fLocal_146[iVar0]);
								if (fVar1 >= 0f)
								{
									if (fVar1 < func_363(iLocal_175[iVar0]))
									{
										func_351(&(iLocal_227[iVar0]), iLocal_175[iVar0], fVar1, 1, 0, 1, bLocal_127, bLocal_126);
									}
									else
									{
										bVar2 = true;
									}
								}
								else
								{
									bVar2 = true;
								}
							}
							else
							{
								bVar2 = true;
							}
						}
						else
						{
							bVar2 = true;
						}
					}
					else
					{
						bVar2 = true;
					}
					if (bVar2)
					{
						iLocal_176[iVar0] = 99;
						iLocal_180 = (iLocal_180 - 1);
					}
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < 144)
			{
				if (iLocal_173[iVar0] > 2 && iLocal_173[iVar0] < 6)
				{
					bVar2 = false;
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_224[iVar0]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_224[iVar0], false))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_224[iVar0]))
							{
								fVar1 = (fParam1 - fLocal_136[iVar0]);
								if (fVar1 >= 0f)
								{
									if (fVar1 < func_363(iLocal_172[iVar0]))
									{
										func_351(&(iLocal_224[iVar0]), iLocal_172[iVar0], fVar1, 1, 0, 1, 1, bLocal_126);
									}
									else
									{
										bVar2 = true;
									}
								}
								else
								{
									bVar2 = true;
								}
							}
							else
							{
								bVar2 = true;
							}
						}
						else
						{
							bVar2 = true;
						}
					}
					else
					{
						bVar2 = true;
					}
					if (bVar2)
					{
						iLocal_173[iVar0] = 99;
						iLocal_179 = (iLocal_179 - 1);
					}
				}
				iVar0++;
			}
			iLocal_183 = 0;
			iLocal_185 = 0;
			iVar0 = 0;
			while (iVar0 < 35)
			{
				if (iLocal_178[iVar0] > 2)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_226[iVar0]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_226[iVar0], false))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_226[iVar0], true, false);
							iLocal_181++;
							iLocal_178[iVar0] = 2;
						}
					}
					else
					{
						iLocal_178[iVar0] = 0;
					}
				}
				iVar0++;
			}
			iLocal_184 = 0;
			iLocal_189 = 0;
			iLocal_192 = 0;
			fLocal_168 = fParam1;
			fLocal_167 = fParam1;
			Var3 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
			Local_200 = { Var3 - Vector(100f, 100f, 100f) };
			Local_201 = { Var3 + Vector(100f, 100f, 100f) };
			PATHFIND::SET_ROADS_IN_AREA(Local_200, Local_201, false, false);
		}
	}
}

void func_477(int iParam0)//Position - 0x25D8B
{
	bLocal_125 = iParam0;
}

void func_478(int iParam0)//Position - 0x25D97
{
	iLocal_221 = iParam0;
}

void func_479(char* sParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x25DA4
{
	struct<3> Var0;
	StringCopy(&cLocal_208, sParam0, 64);
	bLocal_108 = true;
	iLocal_113 = 0;
	iLocal_179 = 0;
	iLocal_180 = 0;
	iLocal_181 = 0;
	iLocal_182 = iParam1;
	iLocal_183 = 0;
	iLocal_184 = 0;
	iLocal_185 = 0;
	iLocal_189 = 0;
	iLocal_192 = 0;
	iLocal_190 = -1;
	iLocal_191 = -1;
	iLocal_193 = 0;
	iLocal_194 = 0;
	fLocal_167 = 0f;
	fLocal_168 = 0f;
	fLocal_153 = 0f;
	iLocal_114 = 0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		Local_200.f_0 = (Var0.f_0 - 100f);
		Local_200.f_1 = (Var0.f_1 - 100f);
		Local_200.f_2 = (Var0.f_2 - 100f);
		Local_201.f_0 = (Var0.f_0 + 100f);
		Local_201.f_1 = (Var0.f_1 + 100f);
		Local_201.f_2 = (Var0.f_2 + 100f);
		PATHFIND::SET_ROADS_IN_AREA(Local_200, Local_201, false, false);
		if (bParam2)
		{
			MISC::CLEAR_AREA_OF_VEHICLES(Var0, 500f, false, false, false, false, false, false, 0);
		}
	}
	PED::ADD_RELATIONSHIP_GROUP("rgh_traffic", &iLocal_217);
	__LIB_11__.func_121();
	if (bParam3)
	{
		__LIB_32__.func_762(1);
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), false);
		PED::SET_CREATE_RANDOM_COPS(false);
	}
	func_63();
}

void func_480()//Position - 0x25EC7
{
	CAM::DESTROY_ALL_CAMS(false);
	iLocal_322 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
	iLocal_325 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
	iLocal_326 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
	CAM::SET_CAM_FOV(iLocal_325, 28f);
	CAM::SET_CAM_FOV(iLocal_326, 25f);
	func_487();
	while (!func_481())
	{
		SYSTEM::WAIT(0);
	}
	iLocal_345 = VEHICLE::CREATE_VEHICLE(joaat("phantom"), Local_382, fLocal_383, true, true, false);
	AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_345, "FAMILY_1_TARGET_TRUCK_AND_TRAILER", 0f);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_345, true);
	ENTITY::SET_ENTITY_PROOFS(iLocal_345, true, true, true, true, true, false, false, false);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_345, true);
	ENTITY::SET_ENTITY_INVINCIBLE(iLocal_345, true);
	if (iLocal_3022 < 5)
	{
		ENTITY::SET_ENTITY_VISIBLE(iLocal_345, false, false);
	}
	VEHICLE::DELETE_VEHICLE(&iLocal_54);
	VEHICLE::DELETE_VEHICLE(&iLocal_55);
	iLocal_54 = VEHICLE::CREATE_VEHICLE(joaat("phantom"), VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(3, 0f, "Fam1Cam"), fLocal_383, true, true, false);
	iLocal_55 = VEHICLE::CREATE_VEHICLE(joaat("phantom"), VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(4, 0f, "Fam1Cam"), fLocal_383, true, true, false);
	ENTITY::SET_ENTITY_INVINCIBLE(iLocal_54, true);
	ENTITY::SET_ENTITY_INVINCIBLE(iLocal_55, true);
	iLocal_346 = VEHICLE::CREATE_VEHICLE(joaat("tr3"), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_345, 0f, 3f, 0f), fLocal_383, true, true, false);
	AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_346, "FAMILY_1_TARGET_TRUCK_AND_TRAILER", 0f);
	VEHICLE::SET_VEHICLE_EXTRA(iLocal_346, 1, false);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_346, true);
	ENTITY::SET_ENTITY_PROOFS(iLocal_346, false, true, false, true, false, false, false, false);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_346, true);
	ENTITY::SET_ENTITY_INVINCIBLE(iLocal_346, true);
	iLocal_341 = OBJECT::CREATE_OBJECT(joaat("prop_ld_test_01"), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_346, 0f, -10f, 0f), true, true, false);
	ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_341, iLocal_346, 0, 0f, -7f, -0.5f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
	ENTITY::SET_ENTITY_VISIBLE(iLocal_341, false, false);
	if (iLocal_3022 < 5)
	{
		ENTITY::SET_ENTITY_VISIBLE(iLocal_346, false, false);
	}
	iLocal_349 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_345, 26, joaat("G_M_Y_SalvaGoon_01"), -1, true, true);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_349, joaat("PLAYER"));
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_349, true);
	HUD::REMOVE_BLIP(&iLocal_328);
	PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
	if (!PED::IS_PED_INJURED(func_2()))
	{
		PED::SET_PED_CONFIG_FLAG(func_2(), 32, false);
	}
}

int func_481()//Position - 0x260CA
{
	if (((STREAMING::HAS_MODEL_LOADED(joaat("tr3")) && STREAMING::HAS_MODEL_LOADED(joaat("phantom"))) && STREAMING::HAS_MODEL_LOADED(joaat("G_M_Y_SalvaGoon_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_test_01")))
	{
		return 1;
	}
	return 0;
}

void func_482()//Position - 0x2610D
{
	Local_196[0 /*3*/] = { -2104.2654f, -382.9811f, 12.1691f };
	fLocal_132[0] = -0.0194f;
	fLocal_133[0] = -0.019f;
	fLocal_134[0] = 0.8467f;
	fLocal_135[0] = -0.5314f;
	iLocal_172[0] = 979;
	fLocal_136[0] = 1f;
	iLocal_218[0] = joaat("comet2");
	Local_196[2 /*3*/] = { -2111.367f, -372.7313f, 12.7216f };
	fLocal_132[2] = 0.006f;
	fLocal_133[2] = -0.0187f;
	fLocal_134[2] = 0.8281f;
	fLocal_135[2] = -0.5602f;
	iLocal_172[2] = 674;
	fLocal_136[2] = 12000f;
	iLocal_218[2] = joaat("blista");
	Local_196[3 /*3*/] = { -2158.973f, -326.0327f, 12.9229f };
	fLocal_132[3] = 0.0006f;
	fLocal_133[3] = -0.0129f;
	fLocal_134[3] = -0.0595f;
	fLocal_135[3] = 0.9981f;
	iLocal_172[3] = 8;
	fLocal_136[3] = 12515f;
	iLocal_218[3] = joaat("burrito");
	Local_196[4 /*3*/] = { -2119.2563f, -352.3024f, 12.5434f };
	fLocal_132[4] = 0.0085f;
	fLocal_133[4] = -0.0024f;
	fLocal_134[4] = 0.5792f;
	fLocal_135[4] = 0.8151f;
	iLocal_172[4] = 10;
	fLocal_136[4] = 14561f;
	iLocal_218[4] = joaat("manana");
	Local_196[6 /*3*/] = { -2000.959f, -458.8005f, 11.1928f };
	fLocal_132[6] = 0.0046f;
	fLocal_133[6] = -0.0073f;
	fLocal_134[6] = 0.9001f;
	fLocal_135[6] = -0.4356f;
	iLocal_172[6] = 681;
	fLocal_136[6] = 16560f;
	iLocal_218[6] = joaat("issi2");
	Local_196[7 /*3*/] = { -2066.1736f, -391.4844f, 11.1701f };
	fLocal_132[7] = 0.01f;
	fLocal_133[7] = -0.0173f;
	fLocal_134[7] = 0.8823f;
	fLocal_135[7] = -0.4703f;
	iLocal_172[7] = 12;
	fLocal_136[7] = 16937f;
	iLocal_218[7] = joaat("buffalo");
	Local_196[8 /*3*/] = { -2143.9626f, -349.9859f, 12.6447f };
	fLocal_132[8] = -0.0008f;
	fLocal_133[8] = 0.0009f;
	fLocal_134[8] = 0.5944f;
	fLocal_135[8] = 0.8041f;
	iLocal_172[8] = 9;
	fLocal_136[8] = 17439f;
	iLocal_218[8] = joaat("penumbra");
	Local_196[9 /*3*/] = { -1960.158f, -491.4438f, 11.6188f };
	fLocal_132[9] = 0.0034f;
	fLocal_133[9] = -0.0071f;
	fLocal_134[9] = 0.9039f;
	fLocal_135[9] = -0.4277f;
	iLocal_172[9] = 675;
	fLocal_136[9] = 19142f;
	iLocal_218[9] = joaat("blista");
	Local_196[10 /*3*/] = { -1992.5828f, -438.6674f, 11.3191f };
	fLocal_132[10] = -0.0042f;
	fLocal_133[10] = -0.0042f;
	fLocal_134[10] = 0.4238f;
	fLocal_135[10] = 0.9057f;
	iLocal_172[10] = 13;
	fLocal_136[10] = 19907f;
	iLocal_218[10] = joaat("feltzer2");
	Local_196[11 /*3*/] = { -1980.8217f, -455.6247f, 11.3957f };
	fLocal_132[11] = -0.0042f;
	fLocal_133[11] = -0.0022f;
	fLocal_134[11] = 0.4303f;
	fLocal_135[11] = 0.9027f;
	iLocal_172[11] = 14;
	fLocal_136[11] = 20435f;
	iLocal_218[11] = joaat("feltzer2");
	Local_196[12 /*3*/] = { -1964.9023f, -454.8819f, 11.4294f };
	fLocal_132[12] = -0.0042f;
	fLocal_133[12] = -0.0023f;
	fLocal_134[12] = 0.4251f;
	fLocal_135[12] = 0.9051f;
	iLocal_172[12] = 15;
	fLocal_136[12] = 20897f;
	iLocal_218[12] = joaat("feltzer2");
	Local_196[13 /*3*/] = { -1943.2075f, -472.5447f, 11.4491f };
	fLocal_132[13] = -0.0021f;
	fLocal_133[13] = -0.0028f;
	fLocal_134[13] = 0.4255f;
	fLocal_135[13] = 0.9049f;
	iLocal_172[13] = 16;
	fLocal_136[13] = 21755f;
	iLocal_218[13] = joaat("feltzer2");
	Local_196[14 /*3*/] = { -1942.2732f, -478.8694f, 11.4584f };
	fLocal_132[14] = 0.0013f;
	fLocal_133[14] = 0.0001f;
	fLocal_134[14] = 0.4265f;
	fLocal_135[14] = 0.9045f;
	iLocal_172[14] = 17;
	fLocal_136[14] = 21887f;
	iLocal_218[14] = joaat("feltzer2");
	Local_196[15 /*3*/] = { -1914.1107f, -496.6292f, 11.4417f };
	fLocal_132[15] = -0.0021f;
	fLocal_133[15] = -0.0015f;
	fLocal_134[15] = 0.4272f;
	fLocal_135[15] = 0.9042f;
	iLocal_172[15] = 18;
	fLocal_136[15] = 22943f;
	iLocal_218[15] = joaat("feltzer2");
	Local_196[16 /*3*/] = { -1924.8973f, -513.712f, 11.5863f };
	fLocal_132[16] = -0.0007f;
	fLocal_133[16] = 0.0028f;
	fLocal_134[16] = 0.907f;
	fLocal_135[16] = -0.4211f;
	iLocal_172[16] = 19;
	fLocal_136[16] = 23009f;
	iLocal_218[16] = joaat("bison");
	Local_196[17 /*3*/] = { -1916.469f, -507.8683f, 11.2995f };
	fLocal_132[17] = -0.0032f;
	fLocal_133[17] = -0.0012f;
	fLocal_134[17] = 0.4258f;
	fLocal_135[17] = 0.9048f;
	iLocal_172[17] = 20;
	fLocal_136[17] = 23141f;
	iLocal_218[17] = joaat("manana");
	Local_196[19 /*3*/] = { -1884.2034f, -552.806f, 11.1889f };
	fLocal_132[19] = -0.0017f;
	fLocal_133[19] = 0.0034f;
	fLocal_134[19] = 0.9008f;
	fLocal_135[19] = -0.4341f;
	iLocal_172[19] = 23;
	fLocal_136[19] = 24857f;
	iLocal_218[19] = joaat("asterope");
	Local_196[21 /*3*/] = { -1813.3405f, -602.771f, 11.0781f };
	fLocal_132[21] = 0.0062f;
	fLocal_133[21] = -0.0129f;
	fLocal_134[21] = 0.8954f;
	fLocal_135[21] = -0.445f;
	iLocal_172[21] = 673;
	fLocal_136[21] = 25314f;
	iLocal_218[21] = joaat("blista");
	Local_196[22 /*3*/] = { -1874.709f, -555.2547f, 10.9783f };
	fLocal_132[22] = -0.001f;
	fLocal_133[22] = 0.0012f;
	fLocal_134[22] = 0.9012f;
	fLocal_135[22] = -0.4333f;
	iLocal_172[22] = 676;
	fLocal_136[22] = 25332f;
	iLocal_218[22] = joaat("dominator");
	Local_196[24 /*3*/] = { -1829.2272f, -607.2402f, 10.9377f };
	fLocal_132[24] = 0.0045f;
	fLocal_133[24] = -0.0096f;
	fLocal_134[24] = 0.9175f;
	fLocal_135[24] = -0.3976f;
	iLocal_172[24] = 27;
	fLocal_136[24] = 28223f;
	iLocal_218[24] = joaat("feltzer2");
	Local_196[25 /*3*/] = { -1799.1798f, -635.4329f, 10.5009f };
	fLocal_132[25] = 0.0015f;
	fLocal_133[25] = -0.0033f;
	fLocal_134[25] = 0.9153f;
	fLocal_135[25] = -0.4028f;
	iLocal_172[25] = 29;
	fLocal_136[25] = 30005f;
	iLocal_218[25] = joaat("asterope");
	Local_196[26 /*3*/] = { -1786.6638f, -647.2526f, 10.2952f };
	fLocal_132[26] = 0.0081f;
	fLocal_133[26] = -0.006f;
	fLocal_134[26] = 0.9232f;
	fLocal_135[26] = -0.3841f;
	iLocal_172[26] = 30;
	fLocal_136[26] = 30005f;
	iLocal_218[26] = joaat("feltzer2");
	Local_196[27 /*3*/] = { -1737.7423f, -634.0445f, 10.5597f };
	fLocal_132[27] = 0.0004f;
	fLocal_133[27] = -0.0202f;
	fLocal_134[27] = 0.5159f;
	fLocal_135[27] = 0.8564f;
	iLocal_172[27] = 31;
	fLocal_136[27] = 31853f;
	iLocal_218[27] = joaat("feltzer2");
	Local_196[28 /*3*/] = { -1719.3136f, -703.9955f, 10.08f };
	fLocal_132[28] = -0.0417f;
	fLocal_133[28] = -0.0105f;
	fLocal_134[28] = 0.9029f;
	fLocal_135[28] = -0.4276f;
	iLocal_172[28] = 32;
	fLocal_136[28] = 32645f;
	iLocal_218[28] = joaat("feltzer2");
	Local_196[29 /*3*/] = { -1672.975f, -687.3683f, 10.8393f };
	fLocal_132[29] = 0.0001f;
	fLocal_133[29] = -0.0017f;
	fLocal_134[29] = 0.4795f;
	fLocal_135[29] = 0.8776f;
	iLocal_172[29] = 33;
	fLocal_136[29] = 33503f;
	iLocal_218[29] = joaat("buffalo");
	Local_196[30 /*3*/] = { -1674.2244f, -693.2474f, 10.8404f };
	fLocal_132[30] = -0.0012f;
	fLocal_133[30] = -0.0021f;
	fLocal_134[30] = 0.4821f;
	fLocal_135[30] = 0.8761f;
	iLocal_172[30] = 34;
	fLocal_136[30] = 33569f;
	iLocal_218[30] = joaat("feltzer2");
	Local_196[31 /*3*/] = { -1649.4194f, -768.9033f, 9.4656f };
	fLocal_132[31] = -0.0164f;
	fLocal_133[31] = -0.0077f;
	fLocal_134[31] = 0.9084f;
	fLocal_135[31] = -0.4178f;
	iLocal_172[31] = 35;
	fLocal_136[31] = 35681f;
	iLocal_218[31] = joaat("feltzer2");
	Local_196[32 /*3*/] = { -1596.6958f, -727.3316f, 10.9103f };
	fLocal_132[32] = -0.0001f;
	fLocal_133[32] = -0.0045f;
	fLocal_134[32] = 0.5534f;
	fLocal_135[32] = 0.8329f;
	iLocal_172[32] = 36;
	fLocal_136[32] = 36341f;
	iLocal_218[32] = joaat("feltzer2");
	Local_196[34 /*3*/] = { -1587.6296f, -730.3649f, 10.9194f };
	fLocal_132[34] = -0.0019f;
	fLocal_133[34] = -0.0026f;
	fLocal_134[34] = 0.5655f;
	fLocal_135[34] = 0.8248f;
	iLocal_172[34] = 39;
	fLocal_136[34] = 36737f;
	iLocal_218[34] = joaat("feltzer2");
	Local_196[35 /*3*/] = { -1574.8739f, -746.168f, 10.9264f };
	fLocal_132[35] = -0.0022f;
	fLocal_133[35] = -0.0024f;
	fLocal_134[35] = 0.583f;
	fLocal_135[35] = 0.8124f;
	iLocal_172[35] = 40;
	fLocal_136[35] = 37463f;
	iLocal_218[35] = joaat("feltzer2");
	Local_196[36 /*3*/] = { -1308.0039f, -730.2979f, 10.0408f };
	fLocal_132[36] = 0.0001f;
	fLocal_133[36] = -0.0032f;
	fLocal_134[36] = 1f;
	fLocal_135[36] = -0.0015f;
	iLocal_172[36] = 981;
	fLocal_136[36] = 37878f;
	iLocal_218[36] = joaat("coach");
	Local_196[37 /*3*/] = { -1544.9573f, -744.9665f, 10.918f };
	fLocal_132[37] = 0.0043f;
	fLocal_133[37] = -0.0097f;
	fLocal_134[37] = 0.6112f;
	fLocal_135[37] = 0.7914f;
	iLocal_172[37] = 41;
	fLocal_136[37] = 38321f;
	iLocal_218[37] = joaat("feltzer2");
	Local_196[38 /*3*/] = { -1540.6364f, -751.1502f, 10.9216f };
	fLocal_132[38] = 0.0035f;
	fLocal_133[38] = -0.0014f;
	fLocal_134[38] = 0.6411f;
	fLocal_135[38] = 0.7675f;
	iLocal_172[38] = 42;
	fLocal_136[38] = 38519f;
	iLocal_218[38] = joaat("feltzer2");
	Local_196[39 /*3*/] = { -1525.6652f, -758.7118f, 10.9032f };
	fLocal_132[39] = 0.0007f;
	fLocal_133[39] = -0.0051f;
	fLocal_134[39] = 0.6528f;
	fLocal_135[39] = 0.7575f;
	iLocal_172[39] = 43;
	fLocal_136[39] = 39047f;
	iLocal_218[39] = joaat("feltzer2");
	Local_196[40 /*3*/] = { -1520.3099f, -783.9903f, 18.2027f };
	fLocal_132[40] = 0.0099f;
	fLocal_133[40] = -0.016f;
	fLocal_134[40] = 0.3778f;
	fLocal_135[40] = 0.9257f;
	iLocal_172[40] = 44;
	fLocal_136[40] = 39641f;
	iLocal_218[40] = joaat("feltzer2");
	Local_196[41 /*3*/] = { -1491.3031f, -784.0678f, 10.9133f };
	fLocal_132[41] = 0.0122f;
	fLocal_133[41] = 0.0252f;
	fLocal_134[41] = -0.7007f;
	fLocal_135[41] = 0.7129f;
	iLocal_172[41] = 672;
	fLocal_136[41] = 39796f;
	iLocal_218[41] = joaat("blista");
	Local_196[42 /*3*/] = { -1508.5243f, -776.6022f, 10.884f };
	fLocal_132[42] = -0.0014f;
	fLocal_133[42] = 0.0018f;
	fLocal_134[42] = 0.7176f;
	fLocal_135[42] = -0.6964f;
	iLocal_172[42] = 45;
	fLocal_136[42] = 39839f;
	iLocal_218[42] = joaat("feltzer2");
	Local_196[43 /*3*/] = { -1508.073f, -786.4115f, 18.3222f };
	fLocal_132[43] = 0.024f;
	fLocal_133[43] = -0.0103f;
	fLocal_134[43] = 0.3936f;
	fLocal_135[43] = 0.9189f;
	iLocal_172[43] = 46;
	fLocal_136[43] = 40103f;
	iLocal_218[43] = joaat("jackal");
	Local_196[44 /*3*/] = { -1511.6647f, -810.4238f, 13.8757f };
	fLocal_132[44] = -0.0073f;
	fLocal_133[44] = 0.0132f;
	fLocal_134[44] = 0.8309f;
	fLocal_135[44] = -0.5562f;
	iLocal_172[44] = 47;
	fLocal_136[44] = 40235f;
	iLocal_218[44] = joaat("feltzer2");
	Local_196[45 /*3*/] = { -1485.495f, -750.4311f, 10.9279f };
	fLocal_132[45] = -0.002f;
	fLocal_133[45] = -0.0046f;
	fLocal_134[45] = 0.7196f;
	fLocal_135[45] = 0.6943f;
	iLocal_172[45] = 48;
	fLocal_136[45] = 40499f;
	iLocal_218[45] = joaat("jackal");
	Local_196[46 /*3*/] = { -1408.1489f, -748.8594f, 10.8686f };
	fLocal_132[46] = 0.0037f;
	fLocal_133[46] = -0.0024f;
	fLocal_134[46] = 0.7565f;
	fLocal_135[46] = 0.654f;
	iLocal_172[46] = 49;
	fLocal_136[46] = 42809f;
	iLocal_218[46] = joaat("bison");
	Local_196[47 /*3*/] = { -1151.9882f, -655.5941f, 10.0751f };
	fLocal_132[47] = 0.0002f;
	fLocal_133[47] = -0.0061f;
	fLocal_134[47] = 1f;
	fLocal_135[47] = -0.0035f;
	iLocal_172[47] = 982;
	fLocal_136[47] = 42878f;
	iLocal_218[47] = joaat("coach");
	Local_196[48 /*3*/] = { -1376.3154f, -789.7238f, 18.9654f };
	fLocal_132[48] = 0.0038f;
	fLocal_133[48] = 0.0017f;
	fLocal_134[48] = 0.4158f;
	fLocal_135[48] = 0.9094f;
	iLocal_172[48] = 50;
	fLocal_136[48] = 44063f;
	iLocal_218[48] = joaat("feltzer2");
	Local_196[49 /*3*/] = { -1372.0023f, -800.3631f, 18.966f };
	fLocal_132[49] = -0.0004f;
	fLocal_133[49] = 0.0132f;
	fLocal_134[49] = 0.423f;
	fLocal_135[49] = 0.906f;
	iLocal_172[49] = 51;
	fLocal_136[49] = 44327f;
	iLocal_218[49] = joaat("jackal");
	Local_196[50 /*3*/] = { -1346.7297f, -752.2042f, 10.8556f };
	fLocal_132[50] = 0.0004f;
	fLocal_133[50] = -0.0004f;
	fLocal_134[50] = -0.6204f;
	fLocal_135[50] = 0.7843f;
	iLocal_172[50] = 52;
	fLocal_136[50] = 44921f;
	iLocal_218[50] = joaat("bison");
	Local_196[51 /*3*/] = { -1312.2633f, -724.9147f, 10.6913f };
	fLocal_132[51] = 0.0008f;
	fLocal_133[51] = -0.0037f;
	fLocal_134[51] = 0.8043f;
	fLocal_135[51] = 0.5942f;
	iLocal_172[51] = 53;
	fLocal_136[51] = 46175f;
	iLocal_218[51] = joaat("feltzer2");
	Local_196[52 /*3*/] = { -1291.6584f, -734.2235f, 10.7767f };
	fLocal_132[52] = -0.018f;
	fLocal_133[52] = -0.008f;
	fLocal_134[52] = -0.5769f;
	fLocal_135[52] = 0.8166f;
	iLocal_172[52] = 671;
	fLocal_136[52] = 46808f;
	iLocal_218[52] = joaat("blista");
	Local_196[53 /*3*/] = { -1287.1271f, -746.1357f, 10.6849f };
	fLocal_132[53] = 0.0001f;
	fLocal_133[53] = 0.0001f;
	fLocal_134[53] = -0.5769f;
	fLocal_135[53] = 0.8168f;
	iLocal_172[53] = 54;
	fLocal_136[53] = 46835f;
	iLocal_218[53] = joaat("feltzer2");
	Local_196[54 /*3*/] = { -1204.9954f, -712.9043f, 10.7888f };
	fLocal_132[54] = 0.0019f;
	fLocal_133[54] = 0.0212f;
	fLocal_134[54] = -0.536f;
	fLocal_135[54] = 0.844f;
	iLocal_172[54] = 670;
	fLocal_136[54] = 47964f;
	iLocal_218[54] = joaat("blista");
	Local_196[55 /*3*/] = { -1247.937f, -726.0201f, 10.6805f };
	fLocal_132[55] = 0.0043f;
	fLocal_133[55] = -0.0025f;
	fLocal_134[55] = -0.5481f;
	fLocal_135[55] = 0.8364f;
	iLocal_172[55] = 56;
	fLocal_136[55] = 48155f;
	iLocal_218[55] = joaat("feltzer2");
	Local_196[56 /*3*/] = { -1173.1163f, -670.5189f, 22.5925f };
	fLocal_132[56] = 0.0057f;
	fLocal_133[56] = -0.0161f;
	fLocal_134[56] = 0.9373f;
	fLocal_135[56] = -0.3481f;
	iLocal_172[56] = 58;
	fLocal_136[56] = 51323f;
	iLocal_218[56] = joaat("jackal");
	Local_196[57 /*3*/] = { -1166.5515f, -677.7913f, 22.3152f };
	fLocal_132[57] = 0.0015f;
	fLocal_133[57] = -0.0062f;
	fLocal_134[57] = 0.937f;
	fLocal_135[57] = -0.3493f;
	iLocal_172[57] = 59;
	fLocal_136[57] = 51455f;
	iLocal_218[57] = joaat("jackal");
	Local_196[58 /*3*/] = { -1152.4274f, -682.251f, 10.6786f };
	fLocal_132[58] = 0.0058f;
	fLocal_133[58] = -0.0013f;
	fLocal_134[58] = -0.491f;
	fLocal_135[58] = 0.8712f;
	iLocal_172[58] = 60;
	fLocal_136[58] = 51521f;
	iLocal_218[58] = joaat("feltzer2");
	Local_196[59 /*3*/] = { -1133.7329f, -656.754f, 11.3981f };
	fLocal_132[59] = 0.0161f;
	fLocal_133[59] = -0.0099f;
	fLocal_134[59] = -0.4822f;
	fLocal_135[59] = 0.8758f;
	iLocal_172[59] = 61;
	fLocal_136[59] = 52445f;
	iLocal_218[59] = joaat("jackal");
	Local_196[60 /*3*/] = { -1171.9824f, -680.8687f, 10.6805f };
	fLocal_132[60] = 0.0043f;
	fLocal_133[60] = -0.0025f;
	fLocal_134[60] = -0.4963f;
	fLocal_135[60] = 0.8681f;
	iLocal_172[60] = 57;
	fLocal_136[60] = 52993f;
	iLocal_218[60] = joaat("buffalo");
	Local_196[61 /*3*/] = { -1095.1566f, -645.9737f, 13.8981f };
	fLocal_132[61] = 0.0387f;
	fLocal_133[61] = -0.0218f;
	fLocal_134[61] = -0.4903f;
	fLocal_135[61] = 0.8704f;
	iLocal_172[61] = 62;
	fLocal_136[61] = 53699f;
	iLocal_218[61] = joaat("buffalo");
	Local_196[62 /*3*/] = { -1084.0941f, -633.212f, 15.324f };
	fLocal_132[62] = 0.0322f;
	fLocal_133[62] = -0.02f;
	fLocal_134[62] = -0.5058f;
	fLocal_135[62] = 0.8618f;
	iLocal_172[62] = 63;
	fLocal_136[62] = 54161f;
	iLocal_218[62] = joaat("bison");
	Local_196[65 /*3*/] = { -1042.5024f, -586.252f, 18.0793f };
	fLocal_132[65] = -0.0077f;
	fLocal_133[65] = -0.0085f;
	fLocal_134[65] = 0.8537f;
	fLocal_135[65] = 0.5206f;
	iLocal_172[65] = 66;
	fLocal_136[65] = 56075f;
	iLocal_218[65] = joaat("jackal");
	Local_196[66 /*3*/] = { -1043.7283f, -581.4434f, 17.9913f };
	fLocal_132[66] = -0.0051f;
	fLocal_133[66] = -0.0076f;
	fLocal_134[66] = 0.8554f;
	fLocal_135[66] = 0.5178f;
	iLocal_172[66] = 67;
	fLocal_136[66] = 56141f;
	iLocal_218[66] = joaat("feltzer2");
	Local_196[67 /*3*/] = { -999.3893f, -588.7261f, 18.0031f };
	fLocal_132[67] = 0.0023f;
	fLocal_133[67] = -0.0014f;
	fLocal_134[67] = -0.5369f;
	fLocal_135[67] = 0.8437f;
	iLocal_172[67] = 68;
	fLocal_136[67] = 57461f;
	iLocal_218[67] = joaat("feltzer2");
	Local_196[68 /*3*/] = { -958.671f, -576.3694f, 18.0496f };
	fLocal_132[68] = 0.0018f;
	fLocal_133[68] = -0.0014f;
	fLocal_134[68] = -0.5487f;
	fLocal_135[68] = 0.836f;
	iLocal_172[68] = 69;
	fLocal_136[68] = 59677f;
	iLocal_218[68] = joaat("buffalo");
	Local_196[69 /*3*/] = { -960.8952f, -546.3404f, 18.2592f };
	fLocal_132[69] = 0.0001f;
	fLocal_133[69] = -0.001f;
	fLocal_134[69] = 0.8323f;
	fLocal_135[69] = 0.5544f;
	iLocal_172[69] = 70;
	fLocal_136[69] = 59705f;
	iLocal_218[69] = joaat("bison");
	Local_196[71 /*3*/] = { -918.2991f, -524.3688f, 19.2461f };
	fLocal_132[71] = -0.0163f;
	fLocal_133[71] = -0.0184f;
	fLocal_134[71] = 0.8114f;
	fLocal_135[71] = 0.584f;
	iLocal_172[71] = 73;
	fLocal_136[71] = 61487f;
	iLocal_218[71] = joaat("manana");
	Local_196[72 /*3*/] = { -882.9097f, -509.5293f, 21.2244f };
	fLocal_132[72] = -0.0172f;
	fLocal_133[72] = -0.0187f;
	fLocal_134[72] = 0.7932f;
	fLocal_135[72] = 0.6084f;
	iLocal_172[72] = 75;
	fLocal_136[72] = 62807f;
	iLocal_218[72] = joaat("asterope");
	Local_196[73 /*3*/] = { -867.718f, -505.6333f, 22.0587f };
	fLocal_132[73] = -0.0179f;
	fLocal_133[73] = -0.0196f;
	fLocal_134[73] = 0.7789f;
	fLocal_135[73] = 0.6266f;
	iLocal_172[73] = 76;
	fLocal_136[73] = 63203f;
	iLocal_218[73] = joaat("manana");
	Local_196[74 /*3*/] = { -852.1915f, -518.4356f, 22.6722f };
	fLocal_132[74] = -0.0209f;
	fLocal_133[74] = -0.0218f;
	fLocal_134[74] = 0.7745f;
	fLocal_135[74] = 0.6318f;
	iLocal_172[74] = 77;
	fLocal_136[74] = 63467f;
	iLocal_218[74] = joaat("dilettante");
	Local_196[75 /*3*/] = { -826.5883f, -538.0093f, 23.7758f };
	fLocal_132[75] = 0.0184f;
	fLocal_133[75] = -0.0164f;
	fLocal_134[75] = -0.6495f;
	fLocal_135[75] = 0.76f;
	iLocal_172[75] = 78;
	fLocal_136[75] = 64457f;
	iLocal_218[75] = joaat("bison");
	Local_196[76 /*3*/] = { -813.6053f, -535.4616f, 24.0711f };
	fLocal_132[76] = 0.0176f;
	fLocal_133[76] = -0.0153f;
	fLocal_134[76] = -0.6574f;
	fLocal_135[76] = 0.7532f;
	iLocal_172[76] = 79;
	fLocal_136[76] = 64589f;
	iLocal_218[76] = joaat("asterope");
	Local_196[77 /*3*/] = { -778.2493f, -531.1539f, 24.6557f };
	fLocal_132[77] = 0.0028f;
	fLocal_133[77] = -0.0025f;
	fLocal_134[77] = -0.6848f;
	fLocal_135[77] = 0.7287f;
	iLocal_172[77] = 82;
	fLocal_136[77] = 65975f;
	iLocal_218[77] = joaat("dilettante");
	Local_196[78 /*3*/] = { -737.4198f, -535.4118f, 24.6755f };
	fLocal_132[78] = 0.0056f;
	fLocal_133[78] = -0.0056f;
	fLocal_134[78] = -0.7065f;
	fLocal_135[78] = 0.7077f;
	iLocal_172[78] = 83;
	fLocal_136[78] = 67361f;
	iLocal_218[78] = joaat("asterope");
	Local_196[79 /*3*/] = { -742.9792f, -536.2603f, 24.6668f };
	fLocal_132[79] = 0.0034f;
	fLocal_133[79] = -0.0037f;
	fLocal_134[79] = -0.7047f;
	fLocal_135[79] = 0.7095f;
	iLocal_172[79] = 84;
	fLocal_136[79] = 67757f;
	iLocal_218[79] = joaat("asterope");
	Local_196[80 /*3*/] = { -724.1472f, -529.7708f, 24.6895f };
	fLocal_132[80] = -0.0001f;
	fLocal_133[80] = 0.0001f;
	fLocal_134[80] = 0.7077f;
	fLocal_135[80] = -0.7065f;
	iLocal_172[80] = 85;
	fLocal_136[80] = 67757f;
	iLocal_218[80] = joaat("manana");
	Local_196[81 /*3*/] = { -701.8006f, -520.3475f, 24.7083f };
	fLocal_132[81] = -0.0051f;
	fLocal_133[81] = 0.0051f;
	fLocal_134[81] = 0.7075f;
	fLocal_135[81] = -0.7067f;
	iLocal_172[81] = 86;
	fLocal_136[81] = 68219f;
	iLocal_218[81] = joaat("asterope");
	Local_196[82 /*3*/] = { -692.2917f, -536.0488f, 24.753f };
	fLocal_132[82] = 0.0275f;
	fLocal_133[82] = 0.0244f;
	fLocal_134[82] = -0.6604f;
	fLocal_135[82] = 0.75f;
	iLocal_172[82] = 87;
	fLocal_136[82] = 68615f;
	iLocal_218[82] = joaat("dilettante");
	Local_196[83 /*3*/] = { -653.891f, -560.265f, 34.5999f };
	fLocal_132[83] = 0.0017f;
	fLocal_133[83] = 0.0128f;
	fLocal_134[83] = 0.731f;
	fLocal_135[83] = -0.6822f;
	iLocal_172[83] = 88;
	fLocal_136[83] = 69671f;
	iLocal_218[83] = joaat("bison");
	Local_196[84 /*3*/] = { -646.4771f, -559.4749f, 34.5956f };
	fLocal_132[84] = -0.0015f;
	fLocal_133[84] = 0.0221f;
	fLocal_134[84] = 0.9992f;
	fLocal_135[84] = -0.0342f;
	iLocal_172[84] = 89;
	fLocal_136[84] = 69935f;
	iLocal_218[84] = joaat("bison");
	Local_196[85 /*3*/] = { -640.9517f, -547.1611f, 34.3248f };
	fLocal_132[85] = 0.0001f;
	fLocal_133[85] = 0.0079f;
	fLocal_134[85] = 0.9996f;
	fLocal_135[85] = 0.0276f;
	iLocal_172[85] = 90;
	fLocal_136[85] = 70133f;
	iLocal_218[85] = joaat("dilettante");
	if (Global_96870 == 1)
	{
		Local_196[86 /*3*/] = { -640.7111f, -535.6561f, 34.2955f };
		fLocal_132[86] = 0.0016f;
		fLocal_133[86] = 0.002f;
		fLocal_134[86] = 0.9999f;
		fLocal_135[86] = 0.0167f;
		iLocal_172[86] = 91;
		fLocal_136[86] = 72793f;
		iLocal_218[86] = joaat("asterope");
	}
	Local_196[87 /*3*/] = { -543.951f, -578.3604f, 25.0337f };
	fLocal_132[87] = 0.0019f;
	fLocal_133[87] = 0f;
	fLocal_134[87] = 0.7044f;
	fLocal_135[87] = 0.7098f;
	iLocal_172[87] = 95;
	fLocal_136[87] = 73499f;
	iLocal_218[87] = joaat("bison");
	Local_196[88 /*3*/] = { -536.1589f, -520.3383f, 24.8108f };
	fLocal_132[88] = -0.0011f;
	fLocal_133[88] = 0.0011f;
	fLocal_134[88] = 0.7072f;
	fLocal_135[88] = -0.707f;
	iLocal_172[88] = 96;
	fLocal_136[88] = 74027f;
	iLocal_218[88] = joaat("manana");
	Local_196[89 /*3*/] = { -523.394f, -529.7448f, 24.8229f };
	fLocal_132[89] = -0.0049f;
	fLocal_133[89] = 0.0049f;
	fLocal_134[89] = 0.7079f;
	fLocal_135[89] = -0.7063f;
	iLocal_172[89] = 97;
	fLocal_136[89] = 74357f;
	iLocal_218[89] = joaat("asterope");
	Local_196[90 /*3*/] = { -492.4363f, -535.2606f, 25.072f };
	fLocal_132[90] = -0.0027f;
	fLocal_133[90] = 0.0037f;
	fLocal_134[90] = 0.7087f;
	fLocal_135[90] = -0.7055f;
	iLocal_172[90] = 98;
	fLocal_136[90] = 75545f;
	iLocal_218[90] = joaat("bison");
	Local_196[91 /*3*/] = { -477.6514f, -525.7468f, 24.8202f };
	fLocal_132[91] = -0.0048f;
	fLocal_133[91] = 0.0048f;
	fLocal_134[91] = 0.7074f;
	fLocal_135[91] = -0.7068f;
	iLocal_172[91] = 99;
	fLocal_136[91] = 76007f;
	iLocal_218[91] = joaat("asterope");
	Local_196[92 /*3*/] = { -464.8362f, -536.2483f, 24.845f };
	fLocal_132[92] = 0.0076f;
	fLocal_133[92] = -0.0077f;
	fLocal_134[92] = -0.7069f;
	fLocal_135[92] = 0.7072f;
	iLocal_172[92] = 100;
	fLocal_136[92] = 76535f;
	iLocal_218[92] = joaat("dilettante");
	Local_196[93 /*3*/] = { -422.1921f, -752.8593f, 37.353f };
	fLocal_132[93] = 0.0002f;
	fLocal_133[93] = -0.0061f;
	fLocal_134[93] = 1f;
	fLocal_135[93] = -0.0035f;
	iLocal_172[93] = 988;
	fLocal_136[93] = 83279f;
	iLocal_218[93] = joaat("phantom");
	Local_196[96 /*3*/] = { -390.7148f, -978.7253f, 37.1997f };
	fLocal_132[96] = -0.0054f;
	fLocal_133[96] = 0.0013f;
	fLocal_134[96] = 0.1264f;
	fLocal_135[96] = 0.992f;
	iLocal_172[96] = 102;
	fLocal_136[96] = 90527f;
	iLocal_218[96] = joaat("phantom");
	Local_196[97 /*3*/] = { -385.0823f, -1038.9622f, 37.2327f };
	fLocal_132[97] = 0.0044f;
	fLocal_133[97] = -0.0185f;
	fLocal_134[97] = -0.0039f;
	fLocal_135[97] = 0.9998f;
	iLocal_172[97] = 103;
	fLocal_136[97] = 92375f;
	iLocal_218[97] = joaat("phantom");
	Local_196[98 /*3*/] = { -380.3994f, -1039.6571f, 36.9645f };
	fLocal_132[98] = 0.0011f;
	fLocal_133[98] = -0.0033f;
	fLocal_134[98] = -0.0035f;
	fLocal_135[98] = 1f;
	iLocal_172[98] = 104;
	fLocal_136[98] = 92441f;
	iLocal_218[98] = joaat("bison");
	Local_196[99 /*3*/] = { -427.9002f, -1063.8818f, 39.1192f };
	fLocal_132[99] = 0.0032f;
	fLocal_133[99] = 0.0409f;
	fLocal_134[99] = 0.9964f;
	fLocal_135[99] = 0.0739f;
	iLocal_172[99] = 105;
	fLocal_136[99] = 93167f;
	iLocal_218[99] = joaat("phantom");
	Local_196[100 /*3*/] = { -432.0537f, -1093.825f, 41.9649f };
	fLocal_132[100] = -0.014f;
	fLocal_133[100] = 0.0647f;
	fLocal_134[100] = 0.9962f;
	fLocal_135[100] = 0.0567f;
	iLocal_172[100] = 106;
	fLocal_136[100] = 94157f;
	iLocal_218[100] = joaat("feltzer2");
	Local_196[101 /*3*/] = { -437.6666f, -1099.808f, 43.0629f };
	fLocal_132[101] = -0.0261f;
	fLocal_133[101] = 0.0659f;
	fLocal_134[101] = 0.9961f;
	fLocal_135[101] = 0.0525f;
	iLocal_172[101] = 107;
	fLocal_136[101] = 94355f;
	iLocal_218[101] = joaat("phantom");
	Local_196[102 /*3*/] = { -426.7242f, -1107.8737f, 28.5356f };
	fLocal_132[102] = -0.0133f;
	fLocal_133[102] = 0.0108f;
	fLocal_134[102] = 0.6069f;
	fLocal_135[102] = 0.7946f;
	iLocal_172[102] = 108;
	fLocal_136[102] = 94751f;
	iLocal_218[102] = joaat("manana");
	Local_196[103 /*3*/] = { -436.5396f, -1109.817f, 29.2992f };
	fLocal_132[103] = -0.013f;
	fLocal_133[103] = 0.0098f;
	fLocal_134[103] = 0.6011f;
	fLocal_135[103] = 0.799f;
	iLocal_172[103] = 109;
	fLocal_136[103] = 94817f;
	iLocal_218[103] = joaat("phantom");
	Local_196[104 /*3*/] = { -434.3285f, -1114.3945f, 45.2462f };
	fLocal_132[104] = -0.0134f;
	fLocal_133[104] = 0.0654f;
	fLocal_134[104] = 0.9959f;
	fLocal_135[104] = 0.0612f;
	iLocal_172[104] = 110;
	fLocal_136[104] = 94883f;
	iLocal_218[104] = joaat("phantom");
	Local_196[106 /*3*/] = { -411.273f, -1251.47f, 37.28f };
	fLocal_132[106] = 0.0194f;
	fLocal_133[106] = 0.0027f;
	fLocal_134[106] = 0.9998f;
	fLocal_135[106] = 0.0012f;
	iLocal_172[106] = 984;
	fLocal_136[106] = 98987f;
	iLocal_218[106] = joaat("phantom");
	Local_196[107 /*3*/] = { -409.7785f, -1299.3727f, 37.2757f };
	fLocal_132[107] = 0.0196f;
	fLocal_133[107] = -0.0029f;
	fLocal_134[107] = 0.9998f;
	fLocal_135[107] = 0.0018f;
	iLocal_172[107] = 983;
	fLocal_136[107] = 100637f;
	iLocal_218[107] = joaat("phantom");
	Local_196[109 /*3*/] = { -427.1969f, -1374.229f, 37.4014f };
	fLocal_132[109] = -0.0176f;
	fLocal_133[109] = -0.0086f;
	fLocal_134[109] = 0.9993f;
	fLocal_135[109] = -0.033f;
	iLocal_172[109] = 114;
	fLocal_136[109] = 103001f;
	iLocal_218[109] = joaat("phantom");
	Local_196[110 /*3*/] = { -399.1656f, -1376.4208f, 37.5457f };
	fLocal_132[110] = -0.0167f;
	fLocal_133[110] = -0.0208f;
	fLocal_134[110] = 0.0005f;
	fLocal_135[110] = 0.9996f;
	iLocal_172[110] = 115;
	fLocal_136[110] = 103133f;
	iLocal_218[110] = joaat("phantom");
	Local_196[111 /*3*/] = { -413.6619f, -1500.546f, 37.2355f };
	fLocal_132[111] = 0.0205f;
	fLocal_133[111] = -0.0077f;
	fLocal_134[111] = 0.9969f;
	fLocal_135[111] = 0.0754f;
	iLocal_172[111] = 687;
	fLocal_136[111] = 105268f;
	iLocal_218[111] = joaat("blista");
	Local_196[112 /*3*/] = { -438.6665f, -1573.3806f, 39.1088f };
	fLocal_132[112] = 0.0175f;
	fLocal_133[112] = -0.0066f;
	fLocal_134[112] = 0.9744f;
	fLocal_135[112] = 0.2238f;
	iLocal_172[112] = 685;
	fLocal_136[112] = 106595f;
	iLocal_218[112] = joaat("boxville");
	Local_196[113 /*3*/] = { -653.7279f, -1719.7207f, 37.0866f };
	fLocal_132[113] = 0.0054f;
	fLocal_133[113] = -0.0223f;
	fLocal_134[113] = 0.7512f;
	fLocal_135[113] = 0.6597f;
	iLocal_172[113] = 686;
	fLocal_136[113] = 115082f;
	iLocal_218[113] = joaat("regina");
	Local_196[114 /*3*/] = { -714.7027f, -1725.2677f, 38.5975f };
	fLocal_132[114] = 0.0216f;
	fLocal_133[114] = 0.0056f;
	fLocal_134[114] = 0.7227f;
	fLocal_135[114] = 0.6908f;
	iLocal_172[114] = 684;
	fLocal_136[114] = 116075f;
	iLocal_218[114] = joaat("boxville2");
	Local_196[115 /*3*/] = { -911.5505f, -1823.8572f, 35.3282f };
	fLocal_132[115] = 0.0261f;
	fLocal_133[115] = -0.0438f;
	fLocal_134[115] = 0.9755f;
	fLocal_135[115] = 0.214f;
	iLocal_172[115] = 688;
	fLocal_136[115] = 124268f;
	iLocal_218[115] = joaat("blista");
	Local_196[116 /*3*/] = { -469.3387f, -2281.9646f, 62.747f };
	fLocal_132[116] = -0.0081f;
	fLocal_133[116] = -0.0056f;
	fLocal_134[116] = 0.4754f;
	fLocal_135[116] = 0.8797f;
	iLocal_172[116] = 682;
	fLocal_136[116] = 127881f;
	iLocal_218[116] = joaat("boxville");
	Local_196[119 /*3*/] = { -752.348f, -2092.7856f, 35.6287f };
	fLocal_132[119] = -0.023f;
	fLocal_133[119] = 0.0481f;
	fLocal_134[119] = 0.8761f;
	fLocal_135[119] = -0.4791f;
	iLocal_172[119] = 116;
	fLocal_136[119] = 139470f;
	iLocal_218[119] = joaat("asterope");
	Local_196[120 /*3*/] = { -608.5975f, -2183.4438f, 53.3943f };
	fLocal_132[120] = -0.0367f;
	fLocal_133[120] = -0.0194f;
	fLocal_134[120] = 0.4665f;
	fLocal_135[120] = 0.8836f;
	iLocal_172[120] = 118;
	fLocal_136[120] = 143882f;
	iLocal_218[120] = joaat("manana");
	Local_196[122 /*3*/] = { -547.9759f, -2226.378f, 58.5132f };
	fLocal_132[122] = -0.0309f;
	fLocal_133[122] = -0.0168f;
	fLocal_134[122] = 0.4614f;
	fLocal_135[122] = 0.8865f;
	iLocal_172[122] = 120;
	fLocal_136[122] = 146258f;
	iLocal_218[122] = joaat("prairie");
	Local_196[123 /*3*/] = { -516.3538f, -2247.3684f, 60.1171f };
	fLocal_132[123] = -0.0195f;
	fLocal_133[123] = -0.0097f;
	fLocal_134[123] = 0.4611f;
	fLocal_135[123] = 0.8871f;
	iLocal_172[123] = 121;
	fLocal_136[123] = 147380f;
	iLocal_218[123] = joaat("penumbra");
	Local_196[124 /*3*/] = { -501.1565f, -2252.9497f, 60.8029f };
	fLocal_132[124] = -0.0186f;
	fLocal_133[124] = -0.0094f;
	fLocal_134[124] = 0.461f;
	fLocal_135[124] = 0.8871f;
	iLocal_172[124] = 122;
	fLocal_136[124] = 147842f;
	iLocal_218[124] = joaat("manana");
	Local_196[125 /*3*/] = { -478.5707f, -2275.4658f, 61.8251f };
	fLocal_132[125] = -0.0164f;
	fLocal_133[125] = -0.009f;
	fLocal_134[125] = 0.4631f;
	fLocal_135[125] = 0.8861f;
	iLocal_172[125] = 123;
	fLocal_136[125] = 148898f;
	iLocal_218[125] = joaat("manana");
	Local_196[126 /*3*/] = { -470.8296f, -2272.8818f, 62.1378f };
	fLocal_132[126] = -0.0162f;
	fLocal_133[126] = -0.0074f;
	fLocal_134[126] = 0.465f;
	fLocal_135[126] = 0.8851f;
	iLocal_172[126] = 125;
	fLocal_136[126] = 149096f;
	iLocal_218[126] = joaat("prairie");
	Local_196[127 /*3*/] = { -438.2917f, -2303.7395f, 63.2256f };
	fLocal_132[127] = -0.0142f;
	fLocal_133[127] = -0.0058f;
	fLocal_134[127] = 0.4674f;
	fLocal_135[127] = 0.8839f;
	iLocal_172[127] = 126;
	fLocal_136[127] = 150416f;
	iLocal_218[127] = joaat("baller");
	Local_196[128 /*3*/] = { -166.105f, -2493.9893f, 49.2098f };
	fLocal_132[128] = 0.0383f;
	fLocal_133[128] = 0.0205f;
	fLocal_134[128] = 0.4597f;
	fLocal_135[128] = 0.887f;
	iLocal_172[128] = 127;
	fLocal_136[128] = 160970f;
	iLocal_218[128] = joaat("sentinel");
	Local_196[129 /*3*/] = { -115.5276f, -2528.1096f, 42.8922f };
	fLocal_132[129] = 0.0459f;
	fLocal_133[129] = 0.0258f;
	fLocal_134[129] = 0.4626f;
	fLocal_135[129] = 0.885f;
	iLocal_172[129] = 128;
	fLocal_136[129] = 162884f;
	iLocal_218[129] = joaat("sentinel");
	Local_196[130 /*3*/] = { -95.0777f, -2536.1013f, 40.4089f };
	fLocal_132[130] = 0.0495f;
	fLocal_133[130] = 0.0272f;
	fLocal_134[130] = 0.4638f;
	fLocal_135[130] = 0.8841f;
	iLocal_172[130] = 129;
	fLocal_136[130] = 163544f;
	iLocal_218[130] = joaat("sentinel");
	Local_196[133 /*3*/] = { 53.9231f, -2636.0845f, 23.0517f };
	fLocal_132[133] = 0.0079f;
	fLocal_133[133] = -0.0276f;
	fLocal_134[133] = 0.8152f;
	fLocal_135[133] = -0.5785f;
	iLocal_172[133] = 133;
	fLocal_136[133] = 169220f;
	iLocal_218[133] = joaat("asterope");
	Local_196[134 /*3*/] = { 514.658f, -2672.6165f, 34.7354f };
	fLocal_132[134] = -0.0411f;
	fLocal_133[134] = -0.05f;
	fLocal_134[134] = 0.7582f;
	fLocal_135[134] = 0.6488f;
	iLocal_172[134] = 691;
	fLocal_136[134] = 173837f;
	iLocal_218[134] = joaat("pbus");
	Local_196[135 /*3*/] = { 341.4317f, -2660.4058f, 20.4027f };
	fLocal_132[135] = -0.0031f;
	fLocal_133[135] = -0.0368f;
	fLocal_134[135] = 0.6381f;
	fLocal_135[135] = 0.769f;
	iLocal_172[135] = 690;
	fLocal_136[135] = 173837f;
	iLocal_218[135] = joaat("boxville2");
	Local_196[136 /*3*/] = { 237.1271f, -2666.9763f, 17.6863f };
	fLocal_132[136] = 0.0006f;
	fLocal_133[136] = 0.001f;
	fLocal_134[136] = -0.681f;
	fLocal_135[136] = 0.7323f;
	iLocal_172[136] = 136;
	fLocal_136[136] = 175094f;
	iLocal_218[136] = joaat("sentinel");
	Local_196[137 /*3*/] = { 298.2273f, -2659.6318f, 18.0835f };
	fLocal_132[137] = 0.0058f;
	fLocal_133[137] = -0.0153f;
	fLocal_134[137] = 0.682f;
	fLocal_135[137] = 0.7312f;
	iLocal_172[137] = 138;
	fLocal_136[137] = 177074f;
	iLocal_218[137] = joaat("sentinel");
	Local_196[138 /*3*/] = { 576.3924f, -2655.9517f, 41.3115f };
	fLocal_132[138] = -0.0321f;
	fLocal_133[138] = -0.0386f;
	fLocal_134[138] = 0.7623f;
	fLocal_135[138] = 0.6453f;
	iLocal_172[138] = 692;
	fLocal_136[138] = 179000f;
	iLocal_218[138] = joaat("taxi");
	Local_196[139 /*3*/] = { 590.3512f, -2658.9763f, 42.6148f };
	fLocal_132[139] = -0.0267f;
	fLocal_133[139] = -0.0327f;
	fLocal_134[139] = 0.7583f;
	fLocal_135[139] = 0.6505f;
	iLocal_172[139] = 697;
	fLocal_136[139] = 182440f;
	iLocal_218[139] = joaat("tiptruck");
	Local_196[140 /*3*/] = { 595.0726f, -2666.9644f, 42.9179f };
	fLocal_132[140] = 0.0373f;
	fLocal_133[140] = -0.0303f;
	fLocal_134[140] = -0.6535f;
	fLocal_135[140] = 0.7554f;
	iLocal_172[140] = 696;
	fLocal_136[140] = 182440f;
	iLocal_218[140] = joaat("tiptruck");
	Local_196[141 /*3*/] = { 660.3993f, -2655.1409f, 48.2919f };
	fLocal_132[141] = 0.0226f;
	fLocal_133[141] = -0.019f;
	fLocal_134[141] = -0.6549f;
	fLocal_135[141] = 0.7552f;
	iLocal_172[141] = 689;
	fLocal_136[141] = 184837f;
	iLocal_218[141] = joaat("boxville2");
	Local_196[142 /*3*/] = { 246.1709f, -2723.94f, 17.3719f };
	fLocal_132[142] = 0.0142f;
	fLocal_133[142] = -0.0029f;
	fLocal_134[142] = -0.2114f;
	fLocal_135[142] = 0.9773f;
	iLocal_172[142] = 139;
	fLocal_136[142] = 186446f;
	iLocal_218[142] = joaat("mixer");
	Local_197[0 /*3*/] = { -2173.3704f, -371.1576f, 12.6234f };
	fLocal_147[0] = -0.0027f;
	fLocal_148[0] = 0.0008f;
	fLocal_149[0] = -0.0813f;
	fLocal_150[0] = 0.9967f;
	iLocal_219[0] = joaat("asterope");
	Local_197[1 /*3*/] = { -2164.9753f, -383.6164f, 13.0582f };
	fLocal_147[1] = 0.0057f;
	fLocal_148[1] = 0.0055f;
	fLocal_149[1] = 0.7699f;
	fLocal_150[1] = -0.6381f;
	iLocal_219[1] = joaat("burrito");
	Local_197[2 /*3*/] = { -2166.237f, -392.2645f, 13.1134f };
	fLocal_147[2] = 0.0039f;
	fLocal_148[2] = 0.0075f;
	fLocal_149[2] = 0.7664f;
	fLocal_150[2] = -0.6423f;
	iLocal_219[2] = joaat("bison");
	Local_197[3 /*3*/] = { -2166.4758f, -395.1155f, 12.8803f };
	fLocal_147[3] = 0.0009f;
	fLocal_148[3] = 0.0039f;
	fLocal_149[3] = 0.6205f;
	fLocal_150[3] = 0.7842f;
	iLocal_219[3] = joaat("asterope");
	Local_197[4 /*3*/] = { -2158.5652f, -386.8991f, 12.814f };
	fLocal_147[4] = -0.0046f;
	fLocal_148[4] = 0.0049f;
	fLocal_149[4] = 0.6179f;
	fLocal_150[4] = 0.7863f;
	iLocal_219[4] = joaat("dilettante");
	Local_197[5 /*3*/] = { -2158.989f, -390.0757f, 13.1374f };
	fLocal_147[5] = 0.0055f;
	fLocal_148[5] = 0.0044f;
	fLocal_149[5] = 0.765f;
	fLocal_150[5] = -0.644f;
	iLocal_219[5] = joaat("burrito");
	Local_197[6 /*3*/] = { -1940.7916f, -528.7653f, 11.2814f };
	fLocal_147[6] = -0.0012f;
	fLocal_148[6] = -0.003f;
	fLocal_149[6] = 0.9432f;
	fLocal_150[6] = 0.3321f;
	iLocal_219[6] = joaat("penumbra");
	Local_197[7 /*3*/] = { -1938.2628f, -530.9329f, 11.3676f };
	fLocal_147[7] = 0.001f;
	fLocal_148[7] = 0.0008f;
	fLocal_149[7] = -0.3625f;
	fLocal_150[7] = 0.932f;
	iLocal_219[7] = joaat("dilettante");
	Local_197[8 /*3*/] = { -1879.6661f, -579.1818f, 11.3935f };
	fLocal_147[8] = -0.0096f;
	fLocal_148[8] = 0.0033f;
	fLocal_149[8] = -0.3631f;
	fLocal_150[8] = 0.9317f;
	iLocal_219[8] = joaat("feltzer2");
	Local_197[9 /*3*/] = { -1870.9495f, -585.9692f, 11.2385f };
	fLocal_147[9] = 0.0043f;
	fLocal_148[9] = 0.0122f;
	fLocal_149[9] = 0.9382f;
	fLocal_150[9] = 0.3458f;
	iLocal_219[9] = joaat("penumbra");
	Local_197[10 /*3*/] = { -1845.7974f, -612.0888f, 10.861f };
	fLocal_147[10] = -0.0112f;
	fLocal_148[10] = -0.0034f;
	fLocal_149[10] = 0.9177f;
	fLocal_150[10] = -0.397f;
	iLocal_219[10] = joaat("feltzer2");
	Local_197[11 /*3*/] = { -1849.1945f, -616.7211f, 10.7627f };
	fLocal_147[11] = 0.0032f;
	fLocal_148[11] = 0f;
	fLocal_149[11] = 0.4186f;
	fLocal_150[11] = 0.9081f;
	iLocal_219[11] = joaat("feltzer2");
	Local_197[12 /*3*/] = { -1853.2931f, -622.0193f, 10.7611f };
	fLocal_147[12] = 0.0015f;
	fLocal_148[12] = 0.0042f;
	fLocal_149[12] = 0.9215f;
	fLocal_150[12] = -0.3882f;
	iLocal_219[12] = joaat("feltzer2");
	Local_197[13 /*3*/] = { -1805.9993f, -642.0218f, 10.5112f };
	fLocal_147[13] = 0.0159f;
	fLocal_148[13] = -0.0047f;
	fLocal_149[13] = -0.341f;
	fLocal_150[13] = 0.9399f;
	iLocal_219[13] = joaat("feltzer2");
	Local_197[14 /*3*/] = { -1751.6616f, -692.5601f, 9.647f };
	fLocal_147[14] = -0.0082f;
	fLocal_148[14] = 0.0015f;
	fLocal_149[14] = -0.3666f;
	fLocal_150[14] = 0.9304f;
	iLocal_219[14] = joaat("dilettante");
	Local_197[15 /*3*/] = { -1732.7915f, -711.775f, 9.5733f };
	fLocal_147[15] = -0.0003f;
	fLocal_148[15] = -0.0045f;
	fLocal_149[15] = 0.8933f;
	fLocal_150[15] = -0.4495f;
	iLocal_219[15] = joaat("penumbra");
	Local_197[16 /*3*/] = { -1736.6632f, -716.8813f, 9.84f };
	fLocal_147[16] = 0.0268f;
	fLocal_148[16] = 0.0097f;
	fLocal_149[16] = 0.8899f;
	fLocal_150[16] = -0.4553f;
	iLocal_219[16] = joaat("dilettante");
	Local_197[17 /*3*/] = { -1739.3f, -719.2399f, 9.9768f };
	fLocal_147[17] = 0.0011f;
	fLocal_148[17] = 0.0133f;
	fLocal_149[17] = 0.4318f;
	fLocal_150[17] = 0.9019f;
	iLocal_219[17] = joaat("asterope");
	Local_197[18 /*3*/] = { -1330.1243f, -790.8218f, 19.4837f };
	fLocal_147[18] = 0.0123f;
	fLocal_148[18] = -0.0133f;
	fLocal_149[18] = 0.8733f;
	fLocal_150[18] = 0.4869f;
	iLocal_219[18] = joaat("jackal");
	Local_197[19 /*3*/] = { -1321.3926f, -785.3258f, 19.3172f };
	fLocal_147[19] = 0.0185f;
	fLocal_148[19] = -0.0058f;
	fLocal_149[19] = 0.8856f;
	fLocal_150[19] = 0.464f;
	iLocal_219[19] = joaat("feltzer2");
	Local_197[20 /*3*/] = { -444.4617f, -531.1383f, 24.8485f };
	fLocal_147[20] = -0.004f;
	fLocal_148[20] = 0.004f;
	fLocal_149[20] = -0.7071f;
	fLocal_150[20] = 0.7071f;
	iLocal_219[20] = joaat("dilettante");
	Local_197[21 /*3*/] = { -404.1469f, -649.8705f, 31.067f };
	fLocal_147[21] = 0.0002f;
	fLocal_148[21] = -0.0009f;
	fLocal_149[21] = 0.7043f;
	fLocal_150[21] = 0.7099f;
	iLocal_219[21] = joaat("bison");
	Local_197[22 /*3*/] = { -391.1157f, -649.484f, 30.843f };
	fLocal_147[22] = 0.0009f;
	fLocal_148[22] = 0.001f;
	fLocal_149[22] = 0.7076f;
	fLocal_150[22] = 0.7066f;
	iLocal_219[22] = joaat("manana");
	Local_197[23 /*3*/] = { -397.3228f, -656.3524f, 31.0987f };
	fLocal_147[23] = 0.0011f;
	fLocal_148[23] = -0.0002f;
	fLocal_149[23] = 0.7043f;
	fLocal_150[23] = 0.7099f;
	iLocal_219[23] = joaat("bison");
	Local_197[24 /*3*/] = { -383.3736f, -655.1855f, 30.8697f };
	fLocal_147[24] = -0.0042f;
	fLocal_148[24] = -0.0042f;
	fLocal_149[24] = 0.7069f;
	fLocal_150[24] = 0.7073f;
	iLocal_219[24] = joaat("manana");
	Local_197[25 /*3*/] = { -397.5586f, -665.7125f, 30.8526f };
	fLocal_147[25] = 0.0015f;
	fLocal_148[25] = -0.0015f;
	fLocal_149[25] = -0.7071f;
	fLocal_150[25] = 0.7071f;
	iLocal_219[25] = joaat("manana");
	Local_197[27 /*3*/] = { -410.1394f, -1574.8274f, 38.319f };
	fLocal_147[27] = -0.0199f;
	fLocal_148[27] = 0.0216f;
	fLocal_149[27] = -0.2855f;
	fLocal_150[27] = 0.9579f;
	iLocal_219[27] = joaat("dilettante");
	Local_197[28 /*3*/] = { -423.7487f, -1607.9525f, 27.6239f };
	fLocal_147[28] = -0.0349f;
	fLocal_148[28] = 0.0535f;
	fLocal_149[28] = -0.159f;
	fLocal_150[28] = 0.9852f;
	iLocal_219[28] = joaat("phantom");
	Local_197[29 /*3*/] = { -495.3004f, -1617.7054f, 35.9875f };
	fLocal_147[29] = 0.0291f;
	fLocal_148[29] = 0.094f;
	fLocal_149[29] = 0.9243f;
	fLocal_150[29] = 0.3687f;
	iLocal_219[29] = joaat("feltzer2");
	Local_197[30 /*3*/] = { -499.6737f, -1622.2612f, 36.7879f };
	fLocal_147[30] = 0.0038f;
	fLocal_148[30] = 0.0305f;
	fLocal_149[30] = 0.9276f;
	fLocal_150[30] = 0.3723f;
	iLocal_219[30] = joaat("feltzer2");
	Local_197[31 /*3*/] = { -509.7415f, -1632.2365f, 36.6421f };
	fLocal_147[31] = 0.0085f;
	fLocal_148[31] = 0.0438f;
	fLocal_149[31] = 0.9163f;
	fLocal_150[31] = 0.398f;
	iLocal_219[31] = joaat("phantom");
	Local_197[32 /*3*/] = { -650.9254f, -2154.5872f, 48.9261f };
	fLocal_147[32] = -0.0441f;
	fLocal_148[32] = -0.0214f;
	fLocal_149[32] = 0.4611f;
	fLocal_150[32] = 0.886f;
	iLocal_219[32] = joaat("manana");
	Local_198[0 /*3*/] = { -622.8682f, -616.4202f, 32.5207f };
	fLocal_141[0] = 0.0196f;
	fLocal_142[0] = 0.0296f;
	fLocal_143[0] = 0.0009f;
	fLocal_144[0] = 0.9994f;
	iLocal_175[0] = 999;
	fLocal_145[0] = 68669f;
	fLocal_146[0] = 1f;
	iLocal_220[0] = joaat("jackal");
	if (Global_96870 == 0)
	{
		Local_198[1 /*3*/] = { -622.8682f, -616.4202f, 32.5207f };
		fLocal_141[1] = 0.0196f;
		fLocal_142[1] = 0.0296f;
		fLocal_143[1] = 0.0009f;
		fLocal_144[1] = 0.9994f;
		iLocal_175[1] = 998;
		fLocal_145[1] = 59669f;
		fLocal_146[1] = 1f;
		iLocal_220[1] = joaat("trash");
	}
	Local_198[2 /*3*/] = { -1126.4215f, -690.3713f, 20.2923f };
	fLocal_141[2] = 0.0196f;
	fLocal_142[2] = 0.0296f;
	fLocal_143[2] = 0.0009f;
	fLocal_144[2] = 0.9994f;
	iLocal_175[2] = 995;
	fLocal_145[2] = 48200f;
	fLocal_146[2] = 1.15f;
	iLocal_220[2] = joaat("flatbed");
	Local_198[3 /*3*/] = { -1126.4215f, -690.3713f, 20.2923f };
	fLocal_141[3] = 0.0196f;
	fLocal_142[3] = 0.0296f;
	fLocal_143[3] = 0.0009f;
	fLocal_144[3] = 0.9994f;
	iLocal_175[3] = 994;
	fLocal_145[3] = 48200f;
	fLocal_146[3] = 1.15f;
	iLocal_220[3] = joaat("gauntlet");
	if (Global_96871 == 1)
	{
		Local_198[4 /*3*/] = { -383.3884f, -498.7355f, 40.7443f };
		fLocal_141[4] = 0.0196f;
		fLocal_142[4] = 0.0296f;
		fLocal_143[4] = 0.0009f;
		fLocal_144[4] = 0.9994f;
		iLocal_175[4] = 967;
		fLocal_145[4] = 72450f;
		fLocal_146[4] = 1f;
		iLocal_220[4] = joaat("baller2");
	}
	Local_198[5 /*3*/] = { -238.5849f, -1205.8152f, 35.9661f };
	fLocal_141[5] = 0.0196f;
	fLocal_142[5] = 0.0296f;
	fLocal_143[5] = 0.0009f;
	fLocal_144[5] = 0.9994f;
	iLocal_175[5] = 990;
	fLocal_145[5] = 106000f;
	fLocal_146[5] = 1f;
	iLocal_220[5] = joaat("banshee");
	Local_198[6 /*3*/] = { -398.7839f, -1147.3693f, 37.3474f };
	fLocal_141[6] = 0f;
	fLocal_142[6] = -0.0159f;
	fLocal_143[6] = 0f;
	fLocal_144[6] = 0.9999f;
	iLocal_175[6] = 985;
	fLocal_145[6] = 95819f;
	fLocal_146[6] = 1f;
	iLocal_220[6] = joaat("phantom");
	Local_198[7 /*3*/] = { -2027.8131f, -381.2849f, 10.0633f };
	fLocal_141[7] = -0.0067f;
	fLocal_142[7] = 0.0002f;
	fLocal_143[7] = -0.0009f;
	fLocal_144[7] = 1f;
	iLocal_175[7] = 980;
	fLocal_145[7] = 13000f;
	fLocal_146[7] = 1.1f;
	iLocal_220[7] = joaat("surfer");
	Local_198[8 /*3*/] = { -1982.0554f, -481.225f, 11.5967f };
	fLocal_141[8] = 0.0001f;
	fLocal_142[8] = -0.001f;
	fLocal_143[8] = 0.9071f;
	fLocal_144[8] = -0.421f;
	iLocal_175[8] = 978;
	fLocal_145[8] = 20000f;
	fLocal_146[8] = 1f;
	iLocal_220[8] = joaat("jackal");
	Local_198[9 /*3*/] = { -1705.3868f, -689.9981f, 11.1523f };
	fLocal_141[9] = 0.0145f;
	fLocal_142[9] = 0.0039f;
	fLocal_143[9] = 0.8919f;
	fLocal_144[9] = -0.452f;
	iLocal_175[9] = 977;
	fLocal_145[9] = 32000f;
	fLocal_146[9] = 1f;
	iLocal_220[9] = joaat("jackal");
	Local_198[11 /*3*/] = { -859.6334f, -2006.7787f, 27.6975f };
	fLocal_141[11] = 0.0095f;
	fLocal_142[11] = -0.0133f;
	fLocal_143[11] = 0.4281f;
	fLocal_144[11] = 0.9036f;
	iLocal_175[11] = 973;
	fLocal_145[11] = 126150f;
	fLocal_146[11] = 1f;
	iLocal_220[11] = joaat("phantom");
	Local_198[12 /*3*/] = { -866.545f, -1779.6897f, 37.4865f };
	fLocal_141[12] = 0.0089f;
	fLocal_142[12] = 0.0018f;
	fLocal_143[12] = -0.4099f;
	fLocal_144[12] = 0.9121f;
	iLocal_175[12] = 972;
	fLocal_145[12] = 121150f;
	fLocal_146[12] = 1f;
	iLocal_220[12] = joaat("phantom");
	Local_198[13 /*3*/] = { -1629.0958f, -743.3837f, 11.1949f };
	fLocal_141[13] = 0.0072f;
	fLocal_142[13] = -0.0048f;
	fLocal_143[13] = 0.8415f;
	fLocal_144[13] = -0.5402f;
	iLocal_175[13] = 971;
	fLocal_145[13] = 36475f;
	fLocal_146[13] = 1f;
	iLocal_220[13] = joaat("tourbus");
	Local_198[14 /*3*/] = { -1465.2949f, -770.0398f, 10.7633f };
	fLocal_141[14] = -0.0128f;
	fLocal_142[14] = -0.0108f;
	fLocal_143[14] = -0.6759f;
	fLocal_144[14] = 0.7368f;
	iLocal_175[14] = 970;
	fLocal_145[14] = 41475f;
	fLocal_146[14] = 1f;
	iLocal_220[14] = joaat("stretch");
	Local_198[16 /*3*/] = { -370.3791f, -2359.6836f, 63.0124f };
	fLocal_141[16] = 0.002f;
	fLocal_142[16] = -0.004f;
	fLocal_143[16] = 0.8833f;
	fLocal_144[16] = -0.4688f;
	iLocal_175[16] = 968;
	fLocal_145[16] = 154280f;
	fLocal_146[16] = 1f;
	iLocal_220[16] = joaat("burrito");
	Local_198[17 /*3*/] = { 826.9321f, -2616.7432f, 52.1236f };
	fLocal_141[17] = 0.0072f;
	fLocal_142[17] = 0.0082f;
	fLocal_143[17] = 0.7724f;
	fLocal_144[17] = 0.635f;
	iLocal_175[17] = 695;
	fLocal_145[17] = 188440f;
	fLocal_146[17] = 1f;
	iLocal_220[17] = joaat("tiptruck");
	Local_198[18 /*3*/] = { 1022.212f, -2583.2656f, 40.5674f };
	fLocal_141[18] = 0.0324f;
	fLocal_142[18] = 0.0397f;
	fLocal_143[18] = 0.7572f;
	fLocal_144[18] = 0.6512f;
	iLocal_175[18] = 694;
	fLocal_145[18] = 196588f;
	fLocal_146[18] = 1f;
	iLocal_220[18] = joaat("taxi");
	Local_198[20 /*3*/] = { -842.8928f, -1750.5757f, 37.5273f };
	fLocal_141[20] = 0.0259f;
	fLocal_142[20] = -0.0149f;
	fLocal_143[20] = 0.8538f;
	fLocal_144[20] = 0.5198f;
	iLocal_175[20] = 679;
	fLocal_145[20] = 120952f;
	fLocal_146[20] = 1f;
	iLocal_220[20] = joaat("speedo");
	Local_198[21 /*3*/] = { -1896.5f, -544.8254f, 11.5101f };
	fLocal_141[21] = 0.0009f;
	fLocal_142[21] = -0.002f;
	fLocal_143[21] = 0.8961f;
	fLocal_144[21] = -0.4439f;
	iLocal_175[21] = 678;
	fLocal_145[21] = 23320f;
	fLocal_146[21] = 1f;
	iLocal_220[21] = joaat("speedo");
	Local_198[22 /*3*/] = { -1825.2657f, -603.6853f, 11.1391f };
	fLocal_141[22] = 0.0053f;
	fLocal_142[22] = -0.0114f;
	fLocal_143[22] = 0.9085f;
	fLocal_144[22] = -0.4177f;
	iLocal_175[22] = 669;
	fLocal_145[22] = 26662f;
	fLocal_146[22] = 1f;
	iLocal_220[22] = joaat("blista");
	Local_198[24 /*3*/] = { -417.5042f, -809.2904f, 36.9324f };
	fLocal_141[24] = -0.0126f;
	fLocal_142[24] = -0.0041f;
	fLocal_143[24] = 0.9999f;
	fLocal_144[24] = -0.0106f;
	iLocal_175[24] = 667;
	fLocal_145[24] = 77000f;
	fLocal_146[24] = 1f;
	iLocal_220[24] = joaat("fugitive");
	Local_198[25 /*3*/] = { -415.8903f, -773.4919f, 36.772f };
	fLocal_141[25] = -0.0161f;
	fLocal_142[25] = 0.0005f;
	fLocal_143[25] = 0.9999f;
	fLocal_144[25] = 0.0034f;
	iLocal_175[25] = 666;
	fLocal_145[25] = 77520f;
	fLocal_146[25] = 1f;
	iLocal_220[25] = joaat("washington");
	Local_198[26 /*3*/] = { -399.9667f, -900.1065f, 37.2774f };
	fLocal_141[26] = 0.0026f;
	fLocal_142[26] = -0.0176f;
	fLocal_143[26] = -0.0058f;
	fLocal_144[26] = 0.9998f;
	iLocal_175[26] = 101;
	fLocal_145[26] = 82942f;
	fLocal_146[26] = 1f;
	iLocal_220[26] = joaat("phantom");
	Local_198[27 /*3*/] = { -1606.4501f, -749.8375f, 11.0267f };
	fLocal_141[27] = -0.0031f;
	fLocal_142[27] = 0.0002f;
	fLocal_143[27] = 0.8433f;
	fLocal_144[27] = -0.5375f;
	iLocal_175[27] = 37;
	fLocal_145[27] = 36173f;
	fLocal_146[27] = 1f;
	iLocal_220[27] = joaat("jackal");
	iLocal_121 = 0;
}

int func_483()//Position - 0x2A81E
{
	if (((((((VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "Fam1New") && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "Fam1Cine")) && __LIB_31__.func_120(3, "Fam1Cam")) && __LIB_31__.func_120(4, "Fam1Cam")) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("FAMILY_1_CHASE_01", false, -1)) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("FAMILY_1_CHASE_02", false, -1)) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("CAR_CRASHES_01", false, -1)) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("FAMILY_1_BOAT_STRAIN", false, -1))
	{
		if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(2, "Fam1New"))
		{
			if (STREAMING::HAS_MODEL_LOADED(joaat("G_M_Y_SalvaGoon_01")))
			{
				if (STREAMING::HAS_MODEL_LOADED(joaat("phantom")))
				{
					if (STREAMING::HAS_MODEL_LOADED(joaat("tr3")))
					{
						if (STREAMING::HAS_ANIM_DICT_LOADED("MISSFAM1_YachtBattleincar01_"))
						{
							if (STREAMING::HAS_PTFX_ASSET_LOADED())
							{
								return 1;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

void func_485()//Position - 0x2A8ED
{
	func_482();
	VEHICLE::REQUEST_VEHICLE_RECORDING(1, "Fam1New");
	VEHICLE::REQUEST_VEHICLE_RECORDING(2, "Fam1New");
	VEHICLE::REQUEST_VEHICLE_RECORDING(1, "Fam1Cine");
	__LIB_31__.func_121(3, "Fam1Cam");
	__LIB_31__.func_121(4, "Fam1Cam");
	STREAMING::REQUEST_ANIM_DICT("MISSFAM1_YachtBattle");
	STREAMING::REQUEST_MODEL(joaat("G_M_Y_SalvaGoon_01"));
	STREAMING::REQUEST_MODEL(joaat("phantom"));
	STREAMING::REQUEST_MODEL(joaat("tr3"));
	STREAMING::REQUEST_ANIM_DICT("MISSFAM1_YachtBattleincar01_");
	STREAMING::REQUEST_PTFX_ASSET();
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("FAMILY_1_CHASE_01", false, -1);
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("FAMILY_1_CHASE_02", false, -1);
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("CAR_CRASHES_01", false, -1);
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("FAMILY_1_BOAT_STRAIN", false, -1);
}

void func_487()//Position - 0x2A98F
{
	STREAMING::REQUEST_MODEL(joaat("tr3"));
	STREAMING::REQUEST_MODEL(joaat("phantom"));
	STREAMING::REQUEST_MODEL(joaat("G_M_Y_SalvaGoon_01"));
	STREAMING::REQUEST_MODEL(joaat("prop_ld_test_01"));
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("FAMILY_1_CHASE_01", false, -1);
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("FAMILY_1_CHASE_02", false, -1);
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("CAR_CRASHES_01", false, -1);
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("FAMILY_1_BOAT_STRAIN", false, -1);
}

bool func_488()//Position - 0x2A9E7
{
	return ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2209.347f, -344.3203f, 12.5676f, -2493.1392f, -201.68755f, 55.29928f, 80.25f, false, true, 0);
}

void func_489()//Position - 0x2AA1D
{
	func_261();
	func_468();
	if (!ENTITY::IS_ENTITY_DEAD(func_2(), false))
	{
		if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_2(), -809.9013f, 184.73903f, 71.54013f, -812.34424f, 190.59727f, 74.04207f, 8.25f, false, true, 0))
		{
			PED::SET_PED_IS_IGNORED_BY_AUTO_OPEN_DOORS(func_2(), true);
		}
		PED::SET_PED_RESET_FLAG(func_2(), 60, true);
		__LIB_39__.func_848(40, 5);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_342, false))
	{
		if ((CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4 && !ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_342, 12f, 12f, 5f, false, true, 0)) && SYSTEM::TIMERA() < 4500)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
		}
	}
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 101 /*INPUT_VEH_ROOF*/, true);
	MISC::SET_BIT(&(Local_283.f_13), 11);
	switch (iLocal_304)
	{
		case 0:
			PED::SET_PED_CONFIG_FLAG(func_2(), 104, true);
			WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(func_2(), false);
			WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(func_2(), joaat("WEAPON_UNARMED"));
			func_795(1);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_342, false))
			{
				TASK::TASK_LOOK_AT_ENTITY(func_2(), PLAYER::PLAYER_PED_ID(), 30000, 0, 2);
				ENTITY::SET_ENTITY_COORDS(iLocal_342, Local_384, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(iLocal_342, fLocal_385);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_342, 5f);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_342, false))
			{
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_342, 30000, 0, 2);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_342, false))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_342, false);
			}
			CUTSCENE::REMOVE_CUTSCENE();
			__LIB_42__.func_613(1, "STAGE_GET_INTO_AMANDAS_CAR", 0, 0, 0, 1);
			Local_283.f_0 = __LIB_6__.func_825(iLocal_342, 0, 0);
			HUD::SET_BLIP_AS_FRIENDLY(Local_283.f_0, true);
			func_513(PLAYER::PLAYER_PED_ID(), 1);
			MISC::SET_BIT(&(Local_283.f_13), 3);
			__LIB_37__.func_409(15, 0);
			__LIB_37__.func_409(17, 0);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&uLocal_343);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&uLocal_344);
			__LIB_0__.func_203(&uLocal_446, 2, 0, "JIMMY", 0, 1);
			PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(func_2(), 0);
			PED::SET_GROUP_FORMATION_SPACING(PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID()), 3.5f, -1f, -1f);
			PED::SET_PED_AS_GROUP_MEMBER(func_2(), PED::GET_PED_GROUP_INDEX(PLAYER::PLAYER_PED_ID()));
			iLocal_3079 = 0;
			SYSTEM::SETTIMERA(0);
			iLocal_304++;
			break;
		case 1:
			if (__LIB_35__.func_984(&uLocal_446, "FAM1AUD", "FAM1_ACAR", 9, 0, 0, 0))
			{
				iLocal_304++;
			}
			break;
		case 2:
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_342, true))
			{
				if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					if (__LIB_35__.func_985(&uLocal_446, 14, "FAM1AUD", "FAM1_PHONEX", 9, 1, 0, 0, 1))
					{
						iLocal_304++;
					}
				}
			}
			else
			{
				iLocal_304++;
			}
			break;
		case 3:
			if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if ((__LIB_2__.func_371() || __LIB_1__.func_412()) || __LIB_11__.func_506())
				{
					if (iLocal_3079 == 0)
					{
						SYSTEM::SETTIMERB(0);
						iLocal_3079 = 1;
					}
				}
			}
			if (iLocal_3079 == 1 && SYSTEM::TIMERB() > 2000)
			{
				__LIB_36__.func_66(14, "YB_JIMTXT" /* GXT: Dad - Come quick! These guys are stealing ur yacht, we're headin down the freeway. Totes not my fault! */, 1, 1, 0, 0, 0, 1, 0, 1);
			}
			if (((SYSTEM::TIMERB() > 1000 && !AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()) && iLocal_3079 == 0) || (SYSTEM::TIMERB() > 4000 && iLocal_3079 == 1))
			{
				if (__LIB_35__.func_984(&uLocal_446, "FAM1AUD", "FAM1_CHANGE", 9, 0, 0, 0))
				{
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 5f, 4);
					iLocal_304++;
				}
			}
			break;
		case 4:
			if (__LIB_35__.func_984(&uLocal_446, "FAM1AUD", "FAM1_HELPOUT", 9, 0, 0, 0))
			{
				iLocal_304++;
			}
			break;
		case 5:
			if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (!__LIB_0__.func_294())
				{
					__LIB_0__.func_210("YB_GETIN", 7500, 1);
				}
				iLocal_304++;
			}
			break;
		case 6:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_342, false))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_342, false) && !PED::IS_PED_INJURED(func_2()))
				{
					PED::SET_PED_CONFIG_FLAG(func_2(), 104, false);
					iLocal_3022 = 4;
				}
			}
			break;
	}
	if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_342, 8f, 8f, 8f, false, true, 0))
	{
		if (!PED::IS_PED_INJURED(func_2()))
		{
			if (iLocal_3080 == 0)
			{
				TASK::TASK_LOOK_AT_ENTITY(func_2(), PLAYER::PLAYER_PED_ID(), 60000, 2048, 4);
				iLocal_3080 = 1;
			}
		}
	}
	if (SYSTEM::TIMERA() > 0)
	{
		__LIB_38__.func_169(&Local_283, Local_329, 0.0001f, 0.0001f, 2.01f, 0, func_2(), 0, 0, iLocal_342, "YB_GETTO", "CMN_FLEAVE" /* GXT: ~s~Return to ~b~Franklin.~s~ */, "", "", "CMN_FLEAVE" /* GXT: ~s~Return to ~b~Franklin.~s~ */, "YB_GETIN", "CMN_GENGETBCK" /* GXT: ~s~Get back in the ~b~car. */, 0, 1, 1, -1);
	}
	func_470();
}

void func_513(int iParam0, int iParam1)//Position - 0x2C437
{
	int iVar0;
	int iVar1;
	struct<65> Var2;
	int iVar3;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = __LIB_20__.func_509(iParam0);
		if (__LIB_0__.func_317(iVar0))
		{
			if (iVar0 == 2)
			{
				iVar1 = func_794(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					__LIB_10__.func_1(iVar0);
					func_519(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
				}
			}
			Var2 = 12;
			Var2.f_13 = 12;
			Var2.f_26 = 12;
			Var2.f_39 = 9;
			Var2.f_49 = 9;
			__LIB_26__.func_544(iParam0, &Var2, 1, -1);
			Global_100166[iVar0 /*65*/] = { Var2 };
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				__LIB_32__.func_797();
			}
			if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != MISC::GET_HASH_KEY("clothes_shop_sp") || (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("lester1")) == 0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("michael4")) == 0))
			{
				if (iParam1 || ((((((!__LIB_0__.func_39(0) && !__LIB_0__.func_39(1)) && !__LIB_0__.func_39(2)) && !__LIB_0__.func_39(3)) && !__LIB_0__.func_39(4)) && !__LIB_0__.func_39(9)) && !__LIB_0__.func_39(10)))
				{
					Global_113386.f_2363.f_539[iVar0 /*65*/] = { Var2 };
					Global_113386.f_2363.f_539.f_2391[iVar0] = __LIB_0__.func_352(iParam0);
					iVar3 = 0;
					while (iVar3 < 12)
					{
						Global_113386.f_2363.f_539.f_204[iVar3 /*4*/][iVar0] = __LIB_6__.func_795(iParam0, __LIB_0__.func_33(iVar3));
						iVar3++;
					}
					iVar3 = 0;
					while (iVar3 < 12)
					{
						Global_113386.f_2363.f_539.f_204[iVar3 /*4*/][iVar0] = __LIB_6__.func_795(iParam0, __LIB_0__.func_33(iVar3));
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

void func_519(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)//Position - 0x2C8C9
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
		iVar0 = __LIB_20__.func_509(iParam0);
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
		if (__LIB_0__.func_317(iVar0))
		{
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_59 = uParam1->f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = uParam1->f_60;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = uParam1->f_61;
			if (func_792(iParam0, iVar1, &iVar2, 0))
			{
				func_778(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_62 = uParam1->f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = uParam1->f_63;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = uParam1->f_64;
			if (func_719(iParam0, iVar1, &iVar2))
			{
				func_778(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			bVar4 = func_717(iParam0);
			__LIB_0__.func_427(754, uParam1->f_60, Global_78127, 1, 0);
			__LIB_0__.func_427(755, uParam1->f_61, Global_78127, 1, 0);
			iVar5 = __LIB_0__.func_350(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
			if (iVar5 != -99)
			{
				iVar6 = -99;
				if (iVar1 == joaat("MP_M_Freemode_01"))
				{
					iVar6 = __LIB_18__.func_181(iVar5);
				}
				else if (iVar1 == joaat("MP_F_Freemode_01"))
				{
					iVar6 = __LIB_18__.func_186(iVar5);
				}
				if (iVar6 != -99 && iVar5 != iVar6)
				{
					iVar5 = iVar6;
				}
			}
			func_529(iParam0, 2, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			if (!bParam2)
			{
				iVar7 = __LIB_0__.func_350(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_529(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			}
			if (!bParam3)
			{
				iVar8 = __LIB_6__.func_766(iParam0, uParam1->f_39[0], uParam1->f_49[0], 0);
				func_529(iParam0, 14, iVar8, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			}
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iParam0 == PLAYER::PLAYER_PED_ID())
		{
			iVar9 = uParam1->f_59;
			if (iVar1 == joaat("MP_M_Freemode_01"))
			{
				iVar9 = __LIB_18__.func_181(iVar9);
			}
			else
			{
				iVar9 = __LIB_18__.func_186(iVar9);
			}
			__LIB_0__.func_427(753, iVar9, Global_78127, 1, 0);
			__LIB_0__.func_427(2053, iVar9, Global_78127, 1, 0);
			__LIB_6__.func_796(161, 1, -1, 1);
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

int func_529(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)//Position - 0x2D587
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
		Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, iParam1, iParam2, -1) };
		if (!__LIB_0__.func_32(iParam3))
		{
			Global_78128 = (Global_78128 - 1);
			return 0;
		}
		if (iParam1 == 11 && Global_78128 > 1)
		{
		}
		else
		{
			func_666(iVar5, iParam1, iParam2, 1);
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
			uVar14 = { __LIB_18__.func_180(iVar5, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar14[iVar0] != -99)
			{
				if (iVar0 == 10 && uVar14.f_16)
				{
					Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, 10, 0, -1) };
					if (iParam4 == -1)
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, __LIB_0__.func_33(iVar0)));
					}
					else
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, iParam4);
					}
					if (BitTest(Global_78130[1 /*14*/].f_6, 1))
					{
						func_666(iVar5, 10, 0, 1);
					}
				}
				else
				{
					Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, iVar0, uVar14[iVar0], -1) };
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
								uVar15 = { __LIB_18__.func_247(iVar5, uVar14[iVar0]) };
							}
							iVar1 = 0;
							while (iVar1 <= 8)
							{
								Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, 14, uVar15[iVar1], -1) };
								__LIB_6__.func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
								if (BitTest(Global_78130[1 /*14*/].f_6, 1))
								{
									func_666(iVar5, iVar0, uVar14[iVar0], 1);
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
									PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, __LIB_0__.func_33(iVar0)));
								}
								else
								{
									PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, iParam4);
								}
							}
							else
							{
								func_529(iParam0, iVar0, uVar14[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (BitTest(Global_78130[1 /*14*/].f_6, 1))
							{
								func_666(iVar5, iVar0, uVar14[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, iVar0, func_657(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					uVar16 = { __LIB_18__.func_180(iVar5, 0) };
					func_529(iParam0, iVar0, uVar16[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			iVar0++;
		}
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1), 0);
		Global_2883588 = uVar12;
		Global_2883589 = uVar13;
		if (iParam5 == 0)
		{
			iVar17 = __LIB_18__.func_468();
			if (iVar17 != -1)
			{
				__LIB_25__.func_43(iVar17, 0, iParam10);
			}
			func_651(iParam0, 11, uVar14[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar18 = { __LIB_18__.func_247(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, 14, uVar18[iVar1], -1) };
			__LIB_6__.func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
			if (BitTest(Global_78130[1 /*14*/].f_6, 1))
			{
				func_666(iVar5, 14, uVar18[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_78128 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = __LIB_40__.func_849(iParam0, iVar5, 14, uVar18[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_529(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		__LIB_6__.func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
		if (BitTest(Global_78130[1 /*14*/].f_6, 1))
		{
			func_666(iVar5, iParam1, iParam2, 1);
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			if (BitTest(Global_78130[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HAIR"), 1))
			{
			}
			else if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 1, joaat("HAIR_SHRINK")))
			{
				func_529(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, iParam1, iParam2, -1) };
			}
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			func_642(iParam0);
		}
		if (iParam5 == 0)
		{
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = __LIB_40__.func_849(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_529(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = __LIB_40__.func_849(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_529(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
		}
	}
	else
	{
		iVar19 = __LIB_0__.func_33(iParam1);
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
				iVar23 = __LIB_6__.func_795(iParam0, 11);
				iVar24 = __LIB_6__.func_795(iParam0, 8);
				iVar25 = __LIB_6__.func_795(iParam0, 4);
				if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
				{
					if (iVar5 == joaat("MP_M_Freemode_01"))
					{
						iVar22 = __LIB_0__.func_420(iVar5, iParam2, 11, 3);
					}
					else if (iVar5 == joaat("MP_F_Freemode_01"))
					{
						iVar22 = __LIB_0__.func_420(iVar5, iParam2, 11, 4);
					}
					if ((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("SILK_ROBE"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("SILK_PYJAMAS"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("SMOKING_JACKET"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("SANTA_SUIT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("MORPH_SUIT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("GORKA_SUIT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("CAT_SUIT"), 0))
					{
					}
					else
					{
						iVar8 = __LIB_6__.func_795(iParam0, 8);
					}
				}
				iVar26 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar26, joaat("GLOVES"), 0))
				{
					iVar27 = func_640(iVar5, iVar24, iVar23, iVar25);
					if (iVar27 == -99)
					{
						iVar27 = __LIB_40__.func_849(iParam0, iVar5, 11, iVar23, 3, 0);
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
							iVar22 = __LIB_0__.func_420(iVar5, iParam2, 11, 4);
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
							if (__LIB_0__.func_254(iVar5, iVar27, iVar28) == iVar26)
							{
								iVar10 = iVar28;
								iVar11 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 3);
							}
							iVar28++;
						}
					}
				}
				iVar22 = -1;
				if ((iVar5 == joaat("MP_F_Freemode_01") && iParam2 >= 256) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__.func_420(iVar5, iParam2, 11, 4), joaat("VEST"), 0))
				{
					iVar23 = __LIB_6__.func_795(iParam0, 11);
					if (iVar23 >= 256)
					{
						iVar22 = __LIB_0__.func_420(iVar5, iVar23, 11, 4);
					}
					if (iVar23 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("VEST_SHIRT"), 0))
					{
						iVar29 = __LIB_6__.func_809(iVar5, iVar23, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
						if (iVar29 != -99)
						{
							func_529(iParam0, 8, iVar29, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				else if (__LIB_6__.func_808(iVar5, iParam2, -1))
				{
					if (iVar5 == joaat("MP_M_Freemode_01"))
					{
						if (iVar23 >= 237)
						{
							iVar22 = __LIB_0__.func_420(iVar5, iVar23, 11, 3);
						}
					}
					else if (iVar5 == joaat("MP_F_Freemode_01"))
					{
						if (iVar23 >= 256)
						{
							iVar22 = __LIB_0__.func_420(iVar5, iVar23, 11, 4);
						}
					}
					iVar8 = -99;
					if (!__LIB_6__.func_808(iVar5, iVar23, -1))
					{
						if ((iVar5 == joaat("MP_F_Freemode_01") && iVar23 >= 256) && (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("VEST"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("VEST_SHIRT"), 0)))
						{
						}
						else if ((iVar5 == joaat("MP_F_Freemode_01") && iVar23 >= 256) && ((((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_5"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_11"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_12"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("APART_DRAW_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("APART_DRAW_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("STUNT_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("STUNT_DRAW_9"), 0)))
						{
						}
						else
						{
							iVar30 = __LIB_37__.func_821(iParam0, iParam2);
							iVar31 = __LIB_6__.func_809(iVar5, iVar23, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
							if (iVar31 != -99)
							{
								func_529(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, iParam1, iParam2, -1) };
								iVar8 = -99;
							}
							else if (iVar30 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								func_529(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, iParam1, iParam2, -1) };
							}
							else
							{
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									iVar32 = __LIB_0__.func_356(iVar5, 11, -1);
									Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, 11, iVar32, -1) };
									iVar31 = __LIB_6__.func_809(iVar5, iVar32, iParam2, Global_78130[1 /*14*/].f_4);
									iVar33 = __LIB_0__.func_420(iVar5, iParam2, 11, 3);
									if ((iVar31 == -99 || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar33, joaat("BIKER_VEST"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar33, joaat("OPEN_SHORT"), 0))
									{
										iVar31 = 240;
									}
								}
								else if (iVar5 == joaat("MP_F_Freemode_01"))
								{
									if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__.func_420(iVar5, iParam2, 11, 4), joaat("BIKER_VEST"), 0))
									{
										iVar31 = 120;
									}
									else
									{
										iVar31 = 48;
									}
								}
								func_529(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, iParam1, iParam2, -1) };
							}
						}
					}
					else
					{
						Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, 11, iVar23, -1) };
						iVar34 = Global_78130[1 /*14*/].f_3;
						Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, 11, iParam2, -1) };
						iVar35 = Global_78130[1 /*14*/].f_3;
						if (iVar34 != iVar35)
						{
							iVar37 = __LIB_37__.func_821(iParam0, iParam2);
							Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, 8, iVar24, -1) };
							iVar36 = Global_78130[1 /*14*/].f_4;
							iVar38 = __LIB_6__.func_807(iVar5, iVar24, iVar36);
							if (iVar37 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								iVar39 = iVar37;
							}
							else if (iVar38 == -99)
							{
								iVar39 = iVar24;
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									iVar40 = __LIB_0__.func_420(iVar5, iParam2, 11, 3);
									if (((iParam2 >= 96 && iParam2 <= 107) || __LIB_0__.func_252(iVar40) == 6) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar40, joaat("BIKER_VEST"), 0))
									{
										iVar38 = __LIB_0__.func_356(iVar5, 11, -1);
										Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, 11, iVar38, -1) };
										iVar39 = __LIB_6__.func_809(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
									}
								}
								if (iVar5 == joaat("MP_F_Freemode_01") && ((iVar24 == 32 || iVar24 == 33) || iVar24 == 119))
								{
									if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__.func_420(iVar5, iParam2, 11, 4), joaat("JACKET_ONLY"), 0))
									{
										iVar38 = __LIB_0__.func_356(iVar5, 11, -1);
										Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, 11, iVar38, -1) };
										iVar39 = __LIB_6__.func_809(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
									}
								}
								iVar41 = -1;
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									iVar41 = __LIB_0__.func_420(iVar5, iVar24, 8, 3);
								}
								else if (iVar5 == joaat("MP_F_Freemode_01"))
								{
									iVar41 = __LIB_0__.func_420(iVar5, iVar24, 8, 4);
								}
								if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar41, joaat("OVERCOAT_ACCS"), 0))
								{
									iVar38 = __LIB_0__.func_356(iVar5, 11, -1);
									Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, 11, iVar38, -1) };
									iVar39 = __LIB_6__.func_809(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
								}
							}
							else
							{
								iVar39 = __LIB_6__.func_809(iVar5, iVar38, iParam2, iVar36);
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__.func_420(iVar5, iParam2, 11, 3), joaat("LOW2_OPEN_CHECK"), 0))
									{
										if (!__LIB_6__.func_806(iVar5, __LIB_6__.func_795(iParam0, 4), iVar38))
										{
											iVar39 = 240;
										}
									}
								}
								else if (iVar5 == joaat("MP_F_Freemode_01"))
								{
									if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__.func_420(iVar5, iParam2, 11, 4), joaat("LOW2_OPEN_CHECK"), 0))
									{
										if (!__LIB_6__.func_806(iVar5, __LIB_6__.func_795(iParam0, 4), iVar38))
										{
											iVar39 = 48;
										}
									}
								}
							}
							if (iVar39 != -99)
							{
								func_529(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_M_Freemode_01"))
							{
								iVar38 = __LIB_0__.func_356(iVar5, 11, -1);
								Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, 11, iVar38, -1) };
								iVar39 = __LIB_6__.func_809(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
								if (iVar39 == -99)
								{
									iVar39 = 240;
								}
								func_529(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_F_Freemode_01"))
							{
								func_529(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				__LIB_31__.func_927(iVar5, iParam2);
				if (!bParam13)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 10));
				}
			}
			func_651(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_640(iVar5, func_657(iParam0, 8, -1), iParam2, func_657(iParam0, 4, -1));
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam5 == 0)
			{
				if (iParam8 == -1)
				{
					iParam8 = __LIB_0__.func_534(2153, iParam10, 0);
				}
				if (iParam9 == -1)
				{
					iParam9 = __LIB_0__.func_534(2160, iParam10, 0);
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
						iVar42 = __LIB_18__.func_181(iParam2);
					}
					else if (iVar5 == joaat("MP_F_Freemode_01"))
					{
						iVar42 = __LIB_18__.func_186(iParam2);
					}
					if (iVar42 != -99 && iParam2 != iVar42)
					{
						iParam2 = iVar42;
					}
				}
				func_577(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar43 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar43, joaat("GLOVES"), 0))
			{
				iVar44 = __LIB_6__.func_795(iParam0, 11);
				iVar45 = __LIB_6__.func_795(iParam0, 4);
				iVar46 = func_640(iVar5, iParam2, iVar44, iVar45);
				if (iVar46 == -99)
				{
					iVar46 = __LIB_40__.func_849(iParam0, iVar5, 11, iVar44, 3, 0);
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
						iVar47 = __LIB_0__.func_420(iVar5, iParam2, 11, 4);
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
						if (__LIB_0__.func_254(iVar5, iVar46, iVar48) == iVar43)
						{
							iVar10 = iVar48;
							iVar11 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 3);
						}
						iVar48++;
					}
				}
			}
			func_651(iParam0, iParam1, iParam2, iParam6, 0);
			iVar49 = __LIB_6__.func_795(iParam0, 11);
			if (__LIB_6__.func_808(iVar5, iVar49, -1))
			{
				iVar50 = __LIB_6__.func_807(iVar5, iParam2, Global_78130[1 /*14*/].f_4);
				__LIB_31__.func_927(iVar5, iVar50);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_640(iVar5, iParam2, __LIB_6__.func_795(iParam0, 11), __LIB_6__.func_795(iParam0, 4));
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 1 && iParam2 <= 41)
			{
				iVar51 = __LIB_6__.func_795(iParam0, 7);
				if (!__LIB_24__.func_966(iVar5, iVar51, 9, -99, -99, -99, iParam0, 0, iParam2, -99, -99, -99))
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(7), 0, 0, 0);
				}
			}
		}
		else if (iParam1 == 1)
		{
			if (((iVar5 == joaat("MP_M_Freemode_01") && iParam2 >= 26) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HEAD"), 0)) || ((iVar5 == joaat("MP_F_Freemode_01") && iParam2 >= 26) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HEAD"), 0)))
			{
				iVar52 = __LIB_0__.func_534(2100, iParam10, 0);
				iVar53 = __LIB_0__.func_534(2101, iParam10, 0);
				iVar54 = __LIB_0__.func_534(2102, iParam10, 0);
				fVar55 = __LIB_0__.func_424(135, iParam10);
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
				__LIB_31__.func_910(iParam0, iParam10);
			}
		}
		else if (iParam1 == 4)
		{
			iVar57 = __LIB_6__.func_795(iParam0, 11);
			iVar58 = __LIB_6__.func_795(iParam0, 8);
			if (iVar5 == joaat("MP_M_Freemode_01"))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__.func_420(iVar5, iVar57, 11, 3), joaat("LOW2_OPEN_CHECK"), 0))
				{
					if (!__LIB_6__.func_806(iVar5, iParam2, __LIB_6__.func_807(iVar5, iVar58, 0)))
					{
						func_529(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			else if (iVar5 == joaat("MP_F_Freemode_01"))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__.func_420(iVar5, iVar57, 11, 4), joaat("LOW2_OPEN_CHECK"), 0))
				{
					if (!__LIB_6__.func_806(iVar5, iParam2, __LIB_6__.func_807(iVar5, iVar58, 0)))
					{
						func_529(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_640(iVar5, __LIB_6__.func_795(iParam0, 8), __LIB_6__.func_795(iParam0, 11), iParam2);
			}
			iVar59 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar59, joaat("GLOVES"), 0))
			{
				iVar60 = func_640(iVar5, iVar58, iVar57, iParam2);
				if (iVar60 == -99)
				{
					iVar60 = __LIB_40__.func_849(iParam0, iVar5, 11, iVar57, 3, 0);
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
						iVar61 = __LIB_0__.func_420(iVar5, iParam2, 11, 4);
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
						if (__LIB_0__.func_254(iVar5, iVar60, iVar62) == iVar59)
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
			PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(iParam1), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, __LIB_0__.func_33(iParam1)));
		}
		else
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(iParam1), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, iParam4);
		}
		if (iParam5 == 0)
		{
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = __LIB_40__.func_849(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_529(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
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
								iVar6 = func_640(iVar5, iVar3, __LIB_6__.func_795(iParam0, 11), __LIB_6__.func_795(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = __LIB_40__.func_849(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_529(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			if ((iParam1 == 11 || iParam1 == 8) || iParam1 == 4)
			{
				if (__LIB_0__.func_223(iParam0))
				{
					iVar63 = __LIB_6__.func_803(iParam0, iVar5, iParam1, iParam2);
					if (iVar63 > 0)
					{
						iVar63 = (iVar63 + PED::GET_PED_TEXTURE_VARIATION(iParam0, 9));
						if (!func_549(iParam0, 9, iVar63))
						{
							func_529(iParam0, 9, iVar63, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_529(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
					{
						func_529(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 8)
			{
				iVar64 = __LIB_0__.func_534(2042, -1, 0);
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 5) != 0)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 5, __LIB_18__.func_183(iParam0, iVar64), __LIB_0__.func_217(iParam0, iVar64), __LIB_0__.func_114(iParam0, iVar64));
				}
				if (iParam0 == PLAYER::PLAYER_PED_ID())
				{
					PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(PLAYER::PLAYER_ID(), 5, __LIB_18__.func_183(PLAYER::PLAYER_PED_ID(), iVar64), __LIB_0__.func_217(PLAYER::PLAYER_PED_ID(), iVar64), false);
					PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), __LIB_0__.func_114(PLAYER::PLAYER_PED_ID(), iVar64));
					__LIB_6__.func_782(PLAYER::PLAYER_ID(), iVar64);
				}
			}
			if (iParam1 == 7)
			{
				if ((iVar5 == joaat("MP_M_Freemode_01") && iParam2 >= 92) || (iVar5 == joaat("MP_F_Freemode_01") && iParam2 >= 55))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("BIG_CHAIN"), 0))
					{
						func_529(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("MP_F_Freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar65 = func_657(iParam0, 4, -1);
					iVar66 = iParam2;
				}
				else
				{
					iVar65 = iParam2;
					iVar66 = func_657(iParam0, 11, -1);
				}
				if (__LIB_6__.func_802(iVar5, 11, iVar66, -1))
				{
					if (!__LIB_6__.func_801(iVar5, 4, iVar65, -1))
					{
						if (__LIB_6__.func_800(iVar5, 4, iVar65, &uVar67))
						{
							func_529(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (__LIB_6__.func_801(iVar5, 4, iVar65, -1))
				{
					if (__LIB_6__.func_799(iVar5, 4, iVar65, &uVar67))
					{
						func_529(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				iVar74 = __LIB_6__.func_795(iParam0, 4);
				iVar75 = __LIB_6__.func_795(iParam0, 6);
				if (__LIB_0__.func_215(iVar5, iVar70))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar70, joaat("ALT_FEET"), 0) != __LIB_6__.func_798(iVar5, iVar74, iVar70))
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
										iVar75 = __LIB_6__.func_758(iVar5, iVar78, 6, 3);
										iVar70 = iVar78;
										func_529(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_6__.func_758(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_529(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar77 = iVar76 + 1;
								}
							}
							iVar77++;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar73, joaat("ALT_LEGS"), 0) != __LIB_6__.func_797(iVar5, iVar75, iVar73))
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
										iVar74 = __LIB_6__.func_758(iVar5, iVar78, 4, 3);
										iVar73 = iVar78;
										func_529(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_6__.func_758(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_529(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar77 = iVar76 + 1;
								}
							}
							iVar77++;
						}
					}
				}
				if (__LIB_0__.func_215(iVar5, iVar73))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar73, joaat("ALT_LEGS"), 0) != __LIB_6__.func_797(iVar5, iVar75, iVar73))
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
										iVar74 = __LIB_6__.func_758(iVar5, iVar78, 4, 3);
										iVar73 = iVar78;
										func_529(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_6__.func_758(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_529(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar77 = iVar76 + 1;
								}
							}
							iVar77++;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar70, joaat("ALT_FEET"), 0) != __LIB_6__.func_798(iVar5, iVar74, iVar70))
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
										iVar75 = __LIB_6__.func_758(iVar5, iVar78, 6, 3);
										iVar70 = iVar78;
										func_529(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_6__.func_758(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_529(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				func_642(iParam0);
				iVar81 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
				iVar82 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
				iVar83 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar81, iVar82);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar83, joaat("FORCE_PROP"), 0))
				{
					iVar3 = __LIB_40__.func_849(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_529(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = __LIB_40__.func_849(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_529(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_530(iParam0, &uVar4))
		{
			func_529(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_529(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar8 != -99)
	{
		func_529(iParam0, 8, iVar8, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_529(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar10 != -1)
	{
		iVar84 = __LIB_0__.func_254(iVar5, func_657(iParam0, 3, -1), iVar10);
		if (iVar84 != -1)
		{
			if (iVar5 == joaat("MP_M_Freemode_01"))
			{
				iVar9 = __LIB_6__.func_758(iVar5, iVar84, 3, 3);
			}
			else if (iVar5 == joaat("MP_F_Freemode_01"))
			{
				iVar9 = __LIB_6__.func_758(iVar5, iVar84, 3, 4);
			}
			if (iVar9 != -99)
			{
				iVar9 = (iVar9 + iVar11);
				func_529(iParam0, 3, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_530(int iParam0, var uParam1)//Position - 0x2F431
{
	int iVar0;
	int iVar1;
	*uParam1 = func_657(PLAYER::PLAYER_PED_ID(), 2, -1);
	if (__LIB_0__.func_534(754, Global_78127, 0) != -99 && __LIB_6__.func_781())
	{
		if (__LIB_0__.func_214() == 4)
		{
			return 1;
		}
		if (__LIB_0__.func_534(754, Global_78127, 0) == 0 && __LIB_0__.func_534(755, Global_78127, 0) == 0)
		{
			if (__LIB_0__.func_421(161, Global_78127))
			{
				if (__LIB_0__.func_534(2053, Global_78127, 0) == 0)
				{
					return 0;
				}
			}
			else if (__LIB_0__.func_534(753, Global_78127, 0) == 0)
			{
				return 0;
			}
		}
		iVar0 = __LIB_0__.func_534(754, Global_78127, 0);
		iVar1 = __LIB_0__.func_534(755, Global_78127, 0);
		if (!func_549(iParam0, iVar1, iVar0))
		{
			if (__LIB_0__.func_421(161, Global_78127))
			{
				*uParam1 = __LIB_0__.func_534(2053, Global_78127, 0);
			}
			else
			{
				*uParam1 = __LIB_0__.func_534(753, Global_78127, 0);
			}
			__LIB_0__.func_427(754, -99, Global_78127, 1, 0);
			__LIB_0__.func_427(755, 2, Global_78127, 1, 0);
			return 1;
		}
	}
	return 0;
}

int func_549(int iParam0, int iParam1, int iParam2)//Position - 0x336EC
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
	Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar0, iParam1, iParam2, -1) };
	uVar2 = Global_2883588;
	uVar3 = Global_2883589;
	if (!BitTest(Global_78130[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar8 = { __LIB_18__.func_180(iVar0, iParam2) };
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
				if (!func_549(iParam0, iVar4, uVar8[iVar4]))
				{
					Global_2883588 = uVar2;
					Global_2883589 = uVar3;
					return 0;
					if (iVar4 == 13)
					{
						uVar9 = { __LIB_18__.func_247(iVar0, uVar8[iVar4]) };
						iVar5 = 0;
						while (iVar5 <= 8)
						{
							if (!func_549(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_35__.func_544(iVar0, 14, iVar6, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar5)
									{
										if (func_549(iParam0, 14, iVar6))
										{
											if (!__LIB_24__.func_955(iVar0, iParam2, 14, iVar6, &uVar8, &(Global_78130[2 /*14*/])))
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
						iVar1 = __LIB_6__.func_795(iParam0, iVar4);
						Global_78130[2 /*14*/] = { __LIB_35__.func_544(iVar0, iVar4, iVar1, -1) };
						if (!__LIB_24__.func_955(iVar0, iParam2, iVar4, iVar1, &uVar8, &(Global_78130[2 /*14*/])))
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
			if (__LIB_0__.func_534(1759, Global_78127, 0) != uVar8[10])
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
		uVar11 = { __LIB_18__.func_247(iVar0, iParam2) };
		iVar10 = 0;
		while (iVar10 <= 8)
		{
			if (!func_549(iParam0, 14, uVar11[iVar10]))
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
		if (Global_78130[1 /*14*/].f_3 == PED::GET_PED_DRAWABLE_VARIATION(iParam0, __LIB_0__.func_33(iParam1)) && Global_78130[1 /*14*/].f_4 == PED::GET_PED_TEXTURE_VARIATION(iParam0, __LIB_0__.func_33(iParam1)))
		{
			return 1;
		}
		if (iParam1 == 4)
		{
			Global_78129++;
			if (Global_78129 == 1)
			{
				if (__LIB_6__.func_802(iVar0, 11, __LIB_6__.func_795(iParam0, 11), -1))
				{
					if (__LIB_6__.func_800(iVar0, 4, iParam2, &uVar18))
					{
						return func_549(iParam0, 4, uVar18);
					}
				}
				else if (__LIB_6__.func_799(iVar0, 4, iParam2, &uVar18))
				{
					return func_549(iParam0, 4, uVar18);
				}
			}
			Global_78129 = (Global_78129 - 1);
		}
	}
	return 0;
}

void func_577(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x3B437
{
	int iVar0;
	int iVar1;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	__LIB_31__.func_926(MISC::GET_HASH_KEY("hairOverlay"), iParam0);
	iVar1 = __LIB_6__.func_805(iVar0, iParam1);
	if (iVar1 != -1)
	{
		if (iParam2 == -1)
		{
			iParam2 = Global_78127;
		}
		__LIB_25__.func_43(iVar1, 1, iParam2);
	}
	func_578(iParam0, bParam3, 0, -1);
}

void func_578(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x3B484
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
		iVar2 = __LIB_0__.func_250(iParam0);
		bVar3 = func_620(iParam0, 0);
		bVar4 = __LIB_31__.func_887(iParam0);
		bVar5 = func_611(iParam0, iParam3);
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
			if (__LIB_18__.func_432(iVar6, iVar0))
			{
				if (__LIB_6__.func_785(&Var1, iVar6, iVar2, iParam0, -1))
				{
					if (__LIB_25__.func_69(iParam0, &Var1, iVar6, Var1.f_4, Var1.f_8, bVar3, bVar4, bParam1, bVar5))
					{
						PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var1.f_4, Var1.f_5);
					}
				}
			}
			iVar6++;
		}
		if (__LIB_18__.func_432(123, iVar0))
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
					if (__LIB_18__.func_432(iVar10, iVar0))
					{
						if (__LIB_25__.func_69(iParam0, &(Var9.f_7), iVar10, Var9.f_2, Var9.f_6, bVar3, bVar4, bParam1, bVar5))
						{
							if (!__LIB_31__.func_925(Var9.f_2, Var9.f_3, iVar10))
							{
								PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var9.f_2, Var9.f_3);
								__LIB_0__.func_235(iParam0, Var9.f_2, Var9.f_3);
							}
						}
					}
				}
			}
			iVar7++;
		}
	}
}

int func_611(int iParam0, int iParam1)//Position - 0x4A62B
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
			iVar2 = __LIB_0__.func_534(1759, -1, 0);
			if (iParam1 != -1)
			{
				iVar2 = iParam1;
			}
			if (iVar0 > 15)
			{
				iVar3 = func_657(iParam0, 11, -1);
				if (iVar3 >= 237)
				{
					iVar4 = __LIB_0__.func_420(joaat("MP_M_Freemode_01"), iVar3, 11, 3);
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
			iVar2 = __LIB_0__.func_534(1759, -1, 0);
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
				iVar5 = func_657(iParam0, 11, -1);
				if (iVar5 >= 256)
				{
					iVar6 = __LIB_0__.func_420(joaat("MP_F_Freemode_01"), iVar5, 11, 4);
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

int func_620(int iParam0, bool bParam1)//Position - 0x4AA89
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
							iVar2 = __LIB_18__.func_431(joaat("MP_M_Freemode_01"), 11, func_657(iParam0, 11, -1), 0);
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
						if (__LIB_18__.func_432(13, -1))
						{
							return 1;
						}
						else if (__LIB_18__.func_432(14, -1))
						{
							return 1;
						}
						else if (__LIB_18__.func_432(15, -1))
						{
							return 1;
						}
						else if (__LIB_18__.func_432(16, -1))
						{
							return 1;
						}
						else if (__LIB_18__.func_432(71, -1))
						{
							return 1;
						}
						else if (__LIB_18__.func_432(72, -1))
						{
						}
						else if (__LIB_18__.func_185(PLAYER::PLAYER_ID(), 1) && Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_76.f_21 != 0)
						{
							return 1;
						}
					}
					break;
				default:
					if (iVar0 > 15)
					{
						iVar3 = func_657(iParam0, 11, -1);
						if (iVar3 >= 237)
						{
							iVar4 = __LIB_0__.func_420(joaat("MP_M_Freemode_01"), iVar3, 11, 3);
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
						iVar5 = func_657(iParam0, 8, -1);
						if (iVar5 >= 241)
						{
							iVar6 = __LIB_0__.func_420(joaat("MP_M_Freemode_01"), iVar5, 8, 3);
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
							iVar7 = __LIB_18__.func_431(joaat("MP_F_Freemode_01"), 11, func_657(iParam0, 11, -1), 0);
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
						iVar8 = func_657(iParam0, 11, -1);
						if (iVar8 >= 256)
						{
							iVar9 = __LIB_0__.func_420(joaat("MP_F_Freemode_01"), iVar8, 11, 4);
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
							iVar10 = __LIB_18__.func_431(joaat("MP_F_Freemode_01"), 11, func_657(iParam0, 11, -1), 0);
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
							iVar11 = __LIB_18__.func_431(joaat("MP_F_Freemode_01"), 11, func_657(iParam0, 11, -1), 0);
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
						iVar12 = func_657(iParam0, 8, -1);
						if (iVar12 >= 136)
						{
							iVar13 = __LIB_0__.func_420(joaat("MP_F_Freemode_01"), iVar12, 8, 4);
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

int func_640(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x53917
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
				iVar2 = __LIB_0__.func_420(iParam0, iParam2, 11, 3);
				iVar1 = __LIB_0__.func_252(iVar2);
			}
			if (iParam1 >= 241)
			{
				iVar4 = __LIB_0__.func_420(iParam0, iParam1, 8, 3);
				iVar3 = __LIB_0__.func_252(iVar4);
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
						iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_M_TORSO_0_0"), 3, 3);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_1"), 0))
					{
						iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_M_TORSO_1_0"), 3, 3);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_2"), 0))
					{
						iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_M_TORSO_2_0"), 3, 3);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_5"), 0))
					{
						iVar0 = 5;
					}
				}
				else
				{
					iVar0 = func_640(iParam0, -99, __LIB_6__.func_807(iParam0, iParam1, 0), iParam3);
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
									iVar0 = __LIB_6__.func_758(iParam0, iVar7, 3, 3);
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
				iVar2 = __LIB_0__.func_420(iParam0, iParam2, 11, 4);
				iVar1 = __LIB_0__.func_252(iVar2);
			}
			if (iParam1 >= 136)
			{
				iVar4 = __LIB_0__.func_420(iParam0, iParam1, 8, 4);
				iVar3 = __LIB_0__.func_252(iVar4);
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
						iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_F_TORSO_0_0"), 3, 4);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_1"), 0))
					{
						iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_F_TORSO_1_0"), 3, 4);
					}
					else if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_2"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("X17_DRAW_6"), 0))
					{
						iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_F_TORSO_2_0"), 3, 4);
					}
				}
				else if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_9"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_10"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_11"), 0))
				{
					iVar0 = 11;
				}
				else
				{
					iVar0 = func_640(iParam0, -99, __LIB_6__.func_807(iParam0, iParam1, 0), iParam3);
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
					iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_H4_F_TORSO_0_0"), 3, 4);
				}
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("OVERCOAT_ACCS"), 0))
			{
				iVar0 = 3;
			}
			else if (((iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("VEST_SHIRT"), 0)) && !__LIB_6__.func_808(iParam0, iParam2, -1)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SILK_ROBE"), 0))
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
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__.func_420(iParam0, iParam3, 4, 4), joaat("HIGH_WAIST"), 0))
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
									iVar0 = __LIB_6__.func_758(iParam0, iVar12, 3, 4);
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

void func_642(int iParam0)//Position - 0x54D6E
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
		if (!func_647(iParam0, &bVar14, iVar9, iVar10, iVar12) || PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			if (__LIB_0__.func_258(iVar9, 0, 0, &iVar16))
			{
				FILES::GET_SHOP_PED_COMPONENT(iVar16, &Var15);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 11, Var15.f_3, Var15.f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, 11));
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 10) == 0 && __LIB_0__.func_257(iVar13, 11, -1))
				{
					if (__LIB_0__.func_257(iVar13, 11, Var15.f_1))
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, iVar7, iVar8, 0);
					}
					else if (__LIB_0__.func_256(iVar13, 10, &iVar17, -1))
					{
						if (__LIB_0__.func_257(iVar17, 11, Var15.f_1))
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
			if (__LIB_0__.func_258(iVar9, 1, 0, &iVar19))
			{
				FILES::GET_SHOP_PED_COMPONENT(iVar19, &Var15);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 11, Var15.f_3, Var15.f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, 11));
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 10) == 0 && __LIB_0__.func_257(iVar13, 11, -1))
				{
					if (__LIB_0__.func_257(iVar13, 11, Var15.f_1))
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, iVar7, iVar8, 0);
					}
					else if (__LIB_0__.func_256(iVar13, 10, &iVar20, -1))
					{
						if (__LIB_0__.func_257(iVar20, 11, Var15.f_1))
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
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar11, joaat("HAZ_HOOD"), 0) || __LIB_0__.func_255(iParam0, iVar9))
	{
		iVar6 = iVar2;
		if (!func_647(iParam0, &bVar14, iVar9, iVar10, iVar12))
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

int func_647(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x55738
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
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAZ_MASK"), 0) && !__LIB_0__.func_709(iVar0, 14, func_657(iParam0, 14, 0), -1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_651(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x58121
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (func_717(iParam0))
		{
			return;
		}
		if (iParam1 == 11 || iParam1 == 8)
		{
			iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
			if (iParam1 == 11)
			{
				if (__LIB_6__.func_808(iVar0, iParam2, -1))
				{
					iParam1 = 8;
					iParam2 = __LIB_6__.func_795(iParam0, iParam1);
				}
			}
			else if (iParam1 == 8)
			{
				iVar1 = __LIB_6__.func_795(iParam0, 11);
				if (!__LIB_6__.func_808(iVar0, iVar1, -1))
				{
					return;
				}
			}
			__LIB_31__.func_926(MISC::GET_HASH_KEY("torsoDecal"), iParam0);
			if (iParam1 == 11)
			{
				if (((((!__LIB_25__.func_42(iVar0, iParam2, 13) && !__LIB_25__.func_42(iVar0, iParam2, 14)) && !__LIB_25__.func_42(iVar0, iParam2, 15)) && !__LIB_25__.func_42(iVar0, iParam2, 16)) && !__LIB_25__.func_42(iVar0, iParam2, 71)) && !__LIB_25__.func_42(iVar0, iParam2, 72))
				{
					__LIB_31__.func_926(MISC::GET_HASH_KEY("crewLogo"), iParam0);
				}
			}
			iVar2 = __LIB_18__.func_431(iVar0, iParam1, iParam2, iParam4);
			if (iVar2 != -1)
			{
				if (iParam3 == 1)
				{
					__LIB_18__.func_467(iParam0, iVar2, 0);
				}
				else
				{
					__LIB_25__.func_43(iVar2, 1, Global_78127);
				}
			}
		}
	}
}

int func_657(int iParam0, int iParam1, int iParam2)//Position - 0x583D0
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
				if (func_549(iParam0, iParam1, iVar0))
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
				if (func_549(iParam0, iParam1, iVar1))
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
				return __LIB_6__.func_788(iParam0, iParam2);
			}
		}
		else
		{
			return __LIB_6__.func_795(iParam0, iParam1);
		}
	}
	return -99;
}

void func_666(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x5B093
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
		if (Global_78127 != __LIB_0__.func_5() || iParam2 == -99)
		{
			return;
		}
		Global_78130[2 /*14*/] = { __LIB_35__.func_544(iParam0, iParam1, iParam2, -1) };
		if (BitTest(Global_78130[2 /*14*/].f_6, 1) && BitTest(Global_78130[2 /*14*/].f_6, 6))
		{
			if (iParam1 == 12)
			{
				__LIB_7__.func_238(Global_2883588, 2, 1, 1, -1);
			}
			else if (iParam1 == 13)
			{
			}
			else if (iParam1 == 14)
			{
				__LIB_7__.func_238(Global_2883588, 2, 1, 1, -1);
			}
			else
			{
				__LIB_7__.func_238(Global_2883588, 2, 1, 1, -1);
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
							__LIB_7__.func_238(iVar2, 2, 1, 1, -1);
							if (iVar5 < Global_4538446)
							{
								Global_4538446[iVar5] = iVar2;
								Global_4538457[iVar5] = iVar4;
								iVar5++;
							}
						}
						else
						{
							func_666(iParam0, __LIB_0__.func_33(iVar4), uVar3, 0);
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
									func_666(iParam0, __LIB_0__.func_33(Global_4538457[iVar1]), __LIB_6__.func_758(iParam0, Global_4538446[iVar1], __LIB_0__.func_33(Global_4538457[iVar1]), 3), 1);
								}
								else
								{
									func_666(iParam0, __LIB_0__.func_33(Global_4538457[iVar1]), __LIB_6__.func_758(iParam0, Global_4538446[iVar1], __LIB_0__.func_33(Global_4538457[iVar1]), 4), 1);
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
			if (__LIB_0__.func_36(iParam1, Global_78130[1 /*14*/].f_2, &iVar6))
			{
				iVar7 = __LIB_0__.func_534(iVar6, Global_78127, 0);
				MISC::SET_BIT(&iVar7, Global_78130[2 /*14*/].f_1);
				__LIB_0__.func_427(iVar6, iVar7, Global_78127, 1, 0);
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
							func_666(iParam0, 14, iVar8, 0);
						}
						else if (iParam2 >= 75 && iParam2 <= 82)
						{
							iVar8 = (83 + Global_78130[2 /*14*/].f_4);
							func_666(iParam0, 14, iVar8, 0);
						}
					}
					else if (iParam1 == 8)
					{
						if (iParam2 >= 48 && iParam2 <= 63)
						{
							iVar8 = (64 + Global_78130[2 /*14*/].f_4);
							func_666(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 64 && iParam2 <= 79)
						{
							iVar8 = (48 + Global_78130[2 /*14*/].f_4);
							func_666(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 96 && iParam2 <= 111)
						{
							iVar8 = (112 + Global_78130[2 /*14*/].f_4);
							func_666(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 112 && iParam2 <= 127)
						{
							iVar8 = (96 + Global_78130[2 /*14*/].f_4);
							func_666(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 176 && iParam2 <= 191)
						{
							iVar8 = (160 + Global_78130[2 /*14*/].f_4);
							func_666(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 160 && iParam2 <= 175)
						{
							iVar8 = (176 + Global_78130[2 /*14*/].f_4);
							func_666(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 32 && iParam2 <= 47)
						{
							iVar8 = (0 + Global_78130[2 /*14*/].f_4);
							func_666(iParam0, 11, iVar8, 0);
						}
						else if (iParam2 >= 224 && iParam2 <= 239)
						{
							iVar8 = (16 + Global_78130[2 /*14*/].f_4);
							func_666(iParam0, 11, iVar8, 0);
						}
					}
					else if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar8 = (32 + Global_78130[2 /*14*/].f_4);
							func_666(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 16 && iParam2 <= 31)
						{
							iVar8 = (224 + Global_78130[2 /*14*/].f_4);
							func_666(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 220 && iParam2 <= 235)
						{
							switch (iParam2)
							{
								case 220:
									func_666(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_0"), 8, 3), 0);
									func_666(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_0"), 8, 3), 0);
									break;
								case 221:
									func_666(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_1"), 8, 3), 0);
									func_666(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_1"), 8, 3), 0);
									break;
								case 222:
									func_666(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_2"), 8, 3), 0);
									func_666(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_2"), 8, 3), 0);
									break;
								case 223:
									func_666(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_3"), 8, 3), 0);
									func_666(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_3"), 8, 3), 0);
									break;
								case 224:
									func_666(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_4"), 8, 3), 0);
									func_666(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_4"), 8, 3), 0);
									break;
								case 225:
									func_666(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_5"), 8, 3), 0);
									func_666(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_5"), 8, 3), 0);
									break;
								case 226:
									func_666(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_6"), 8, 3), 0);
									func_666(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_6"), 8, 3), 0);
									break;
								case 227:
									func_666(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_7"), 8, 3), 0);
									func_666(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_7"), 8, 3), 0);
									break;
								case 228:
									func_666(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_8"), 8, 3), 0);
									func_666(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_8"), 8, 3), 0);
									break;
								case 229:
									func_666(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_9"), 8, 3), 0);
									func_666(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_9"), 8, 3), 0);
									break;
								case 230:
									func_666(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_10"), 8, 3), 0);
									func_666(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_10"), 8, 3), 0);
									break;
								case 231:
									func_666(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_11"), 8, 3), 0);
									func_666(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_11"), 8, 3), 0);
									break;
								case 232:
									func_666(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_12"), 8, 3), 0);
									func_666(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_12"), 8, 3), 0);
									break;
								case 233:
									func_666(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_13"), 8, 3), 0);
									func_666(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_13"), 8, 3), 0);
									break;
								case 234:
									func_666(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_14"), 8, 3), 0);
									func_666(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_14"), 8, 3), 0);
									break;
								case 235:
									func_666(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_15"), 8, 3), 0);
									func_666(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_15"), 8, 3), 0);
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
									func_666(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_0"), 7, 3), 0);
									func_666(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_0"), 7, 3), 0);
									break;
								case 1:
									func_666(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_1"), 7, 3), 0);
									func_666(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_1"), 7, 3), 0);
									break;
								case 2:
									func_666(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_2"), 7, 3), 0);
									func_666(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_2"), 7, 3), 0);
									break;
								case 3:
									func_666(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_3"), 7, 3), 0);
									func_666(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_3"), 7, 3), 0);
									break;
								case 4:
									func_666(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_4"), 7, 3), 0);
									func_666(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_4"), 7, 3), 0);
									break;
								case 5:
									func_666(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_5"), 7, 3), 0);
									func_666(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_5"), 7, 3), 0);
									break;
								case 6:
									func_666(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_6"), 7, 3), 0);
									func_666(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_6"), 7, 3), 0);
									break;
								case 7:
									func_666(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_7"), 7, 3), 0);
									func_666(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_7"), 7, 3), 0);
									break;
								case 8:
									func_666(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_8"), 7, 3), 0);
									func_666(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_8"), 7, 3), 0);
									break;
								case 9:
									func_666(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_9"), 7, 3), 0);
									func_666(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_9"), 7, 3), 0);
									break;
								case 10:
									func_666(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_10"), 7, 3), 0);
									func_666(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_10"), 7, 3), 0);
									break;
								case 11:
									func_666(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_11"), 7, 3), 0);
									func_666(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_11"), 7, 3), 0);
									break;
								case 12:
									func_666(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_12"), 7, 3), 0);
									func_666(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_12"), 7, 3), 0);
									break;
								case 13:
									func_666(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_13"), 7, 3), 0);
									func_666(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_13"), 7, 3), 0);
									break;
								case 14:
									func_666(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_14"), 7, 3), 0);
									func_666(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_14"), 7, 3), 0);
									break;
								case 15:
									func_666(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_15"), 7, 3), 0);
									func_666(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_15"), 7, 3), 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_78130[2 /*14*/].f_4)
							{
								case 0:
									func_666(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_0"), 7, 3), 0);
									func_666(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_0"), 7, 3), 0);
									break;
								case 1:
									func_666(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_1"), 7, 3), 0);
									func_666(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_1"), 7, 3), 0);
									break;
								case 2:
									func_666(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_2"), 7, 3), 0);
									func_666(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_2"), 7, 3), 0);
									break;
								case 3:
									func_666(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_3"), 7, 3), 0);
									func_666(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_3"), 7, 3), 0);
									break;
								case 4:
									func_666(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_4"), 7, 3), 0);
									func_666(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_4"), 7, 3), 0);
									break;
								case 5:
									func_666(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_5"), 7, 3), 0);
									func_666(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_5"), 7, 3), 0);
									break;
								case 6:
									func_666(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_6"), 7, 3), 0);
									func_666(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_6"), 7, 3), 0);
									break;
								case 7:
									func_666(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_7"), 7, 3), 0);
									func_666(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_7"), 7, 3), 0);
									break;
								case 8:
									func_666(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_8"), 7, 3), 0);
									func_666(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_8"), 7, 3), 0);
									break;
								case 9:
									func_666(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_9"), 7, 3), 0);
									func_666(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_9"), 7, 3), 0);
									break;
								case 10:
									func_666(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_10"), 7, 3), 0);
									func_666(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_10"), 7, 3), 0);
									break;
								case 11:
									func_666(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_11"), 7, 3), 0);
									func_666(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_11"), 7, 3), 0);
									break;
								case 12:
									func_666(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_12"), 7, 3), 0);
									func_666(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_12"), 7, 3), 0);
									break;
								case 13:
									func_666(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_13"), 7, 3), 0);
									func_666(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_13"), 7, 3), 0);
									break;
								case 14:
									func_666(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_14"), 7, 3), 0);
									func_666(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_14"), 7, 3), 0);
									break;
								case 15:
									func_666(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_15"), 7, 3), 0);
									func_666(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_15"), 7, 3), 0);
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
							func_666(iParam0, 8, iVar8, 0);
						}
					}
				}
				Global_78130[2 /*14*/] = { __LIB_35__.func_544(iParam0, iParam1, iParam2, -1) };
				if (iParam1 == 11)
				{
					iVar9 = __LIB_6__.func_811(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_666(iParam0, 8, iVar9, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203)
					{
						switch (iParam2)
						{
							case 199:
								func_666(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_0"), 7, 4), 0);
								break;
							case 200:
								func_666(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_1"), 7, 4), 0);
								break;
							case 201:
								func_666(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_2"), 7, 4), 0);
								break;
							}
					}
				}
				else if (iParam1 == 8)
				{
					iVar9 = __LIB_6__.func_807(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_666(iParam0, 11, iVar9, 0);
					}
				}
			}
		}
	}
}

int func_717(int iParam0)//Position - 0x7822A
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
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != __LIB_0__.func_160() && __LIB_0__.func_357(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar1 = func_657(iParam0, 11, -1);
				if (iVar1 >= 237)
				{
					iVar2 = __LIB_0__.func_420(joaat("MP_M_Freemode_01"), iVar1, 11, 3);
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
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != __LIB_0__.func_160() && __LIB_0__.func_357(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar3 = func_657(iParam0, 11, -1);
				if (iVar3 >= 237)
				{
					iVar4 = __LIB_0__.func_420(joaat("MP_F_Freemode_01"), iVar3, 11, 4);
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

int func_719(int iParam0, int iParam1, int iParam2)//Position - 0x78584
{
	int iVar0;
	iVar0 = __LIB_0__.func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_720(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_720(int iParam0, int iParam1, int iParam2)//Position - 0x78610
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
	Global_78130[1 /*14*/] = { __LIB_35__.func_896(iVar0, iParam1, iParam2, -1) };
	if (!BitTest(Global_78130[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar5 = { __LIB_18__.func_180(iVar0, iParam2) };
		iVar2 = 0;
		while (iVar2 <= 14)
		{
			if ((uVar5[iVar2] != -99 && iVar2 != 12) && iVar2 != 14)
			{
				if (!func_720(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_18__.func_247(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_720(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_35__.func_896(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_720(iParam0, 14, iVar4))
										{
											if (!__LIB_24__.func_955(iVar0, iParam2, 14, iVar4, &uVar5, &(Global_78130[2 /*14*/])))
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
						iVar1 = __LIB_6__.func_795(iParam0, iVar2);
						Global_78130[2 /*14*/] = { __LIB_35__.func_896(iVar0, iVar2, iVar1, -1) };
						if (!__LIB_24__.func_955(iVar0, iParam2, iVar2, iVar1, &uVar5, &(Global_78130[2 /*14*/])))
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
		uVar8 = { __LIB_18__.func_247(iVar0, iParam2) };
		iVar7 = 0;
		while (iVar7 <= 8)
		{
			if (!func_720(iParam0, 14, uVar8[iVar7]))
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
	else if (Global_78130[1 /*14*/].f_3 == PED::GET_PED_DRAWABLE_VARIATION(iParam0, __LIB_0__.func_33(iParam1)) && Global_78130[1 /*14*/].f_4 == PED::GET_PED_TEXTURE_VARIATION(iParam0, __LIB_0__.func_33(iParam1)))
	{
		return 1;
	}
	return 0;
}

int func_778(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x8B3E9
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
		Global_78130[1 /*14*/] = { __LIB_35__.func_896(iVar10, iParam1, iParam2, -1) };
		if (!__LIB_0__.func_32(iParam3))
		{
			Global_78128 = (Global_78128 - 1);
			return 0;
		}
		__LIB_20__.func_322(iParam1);
	}
	if (iParam1 == 12)
	{
		if (iParam7 == 1)
		{
			if (iVar10 == joaat("Player_One"))
			{
				iVar5 = __LIB_6__.func_795(iParam0, 8);
				if (iVar5 != 9)
				{
					iVar5 = -99;
				}
			}
			iVar6 = __LIB_6__.func_795(iParam0, 9);
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
			iVar7 = __LIB_6__.func_788(iParam0, 1);
			if (!__LIB_6__.func_780(iVar10, 14, iVar7, -1))
			{
				iVar7 = -99;
			}
			iVar8 = __LIB_6__.func_788(iParam0, 0);
			if (!__LIB_6__.func_779(iVar10, 14, iVar8, -1) && !__LIB_6__.func_827(iVar10, 14, iVar8, -1))
			{
				iVar8 = -99;
			}
			if (iVar10 == joaat("Player_One"))
			{
				iVar9 = __LIB_6__.func_788(iParam0, 2);
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
			uVar11 = { __LIB_18__.func_180(iVar10, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar11[iVar0] != -99)
			{
				Global_78130[1 /*14*/] = { __LIB_35__.func_896(iVar10, iVar0, uVar11[iVar0], -1) };
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
							uVar12 = { __LIB_18__.func_247(iVar10, uVar11[iVar0]) };
						}
						iVar1 = 0;
						while (iVar1 <= 8)
						{
							Global_78130[1 /*14*/] = { __LIB_35__.func_896(iVar10, 14, uVar12[iVar1], -1) };
							__LIB_6__.func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
							__LIB_20__.func_322(14);
							if (Global_78128 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = __LIB_40__.func_943(iParam0, iVar10, 14, uVar12[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_778(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
							__LIB_0__.func_211(iVar10, 2, 20, &iVar4);
						}
						if (iParam4 == -1)
						{
							PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, __LIB_0__.func_33(iVar0)));
						}
						else
						{
							PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, iParam4);
						}
						__LIB_20__.func_322(iVar0);
						if (Global_78128 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								iVar3 = __LIB_40__.func_943(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_778(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_35__.func_896(iVar10, iVar0, func_794(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_792(iParam0, iVar10, &iVar4, 1))
							{
								func_778(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_18__.func_180(iVar10, 0) };
						func_778(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var14 = { __LIB_35__.func_896(iVar10, 8, iVar5, -1) };
			if (iVar5 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 8, iVar5, &uVar11, &Var14))
				{
					func_778(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__.func_896(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_778(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__.func_896(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_778(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__.func_896(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_778(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__.func_896(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_778(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
		}
	}
	else if (iParam1 == 13)
	{
		uVar15 = { __LIB_18__.func_247(iVar10, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_78130[1 /*14*/] = { __LIB_35__.func_896(iVar10, 14, uVar15[iVar1], -1) };
			__LIB_6__.func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
			__LIB_20__.func_322(14);
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = __LIB_40__.func_943(iParam0, iVar10, 14, uVar15[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_778(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		__LIB_6__.func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
		__LIB_20__.func_322(iParam1);
		if (Global_78128 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = __LIB_40__.func_943(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_778(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
	}
	else
	{
		if (iParam4 == -1)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(iParam1), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, __LIB_0__.func_33(iParam1)));
		}
		else
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(iParam1), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, iParam4);
		}
		if (Global_78128 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = __LIB_40__.func_943(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_778(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			__LIB_39__.func_857(iVar10, iParam1, iParam2);
		}
	}
	if (Global_78128 == 1)
	{
		if (func_792(iParam0, iVar10, &iVar4, 0))
		{
			func_778(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_719(iParam0, iVar10, &iVar4))
		{
			func_778(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_792(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x8D9A6
{
	int iVar0;
	iVar0 = __LIB_0__.func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_720(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_794(int iParam0, int iParam1, int iParam2)//Position - 0x8DC66
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
				if (func_720(iParam0, iParam1, iVar0))
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
				if (func_720(iParam0, iParam1, iVar1))
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
				return __LIB_6__.func_788(iParam0, iParam2);
			}
		}
		else
		{
			return __LIB_6__.func_795(iParam0, iParam1);
		}
	}
	return -99;
}

void func_795(int iParam0)//Position - 0x8DD07
{
	VEHICLE::REQUEST_VEHICLE_ASSET(joaat("sentinel2"), 3);
	__LIB_29__.func_752(17, 0);
	STREAMING::REQUEST_MODEL(__LIB_19__.func_811(1));
	HUD::REQUEST_ADDITIONAL_TEXT("FAMILY1", 0);
	HUD::REQUEST_ADDITIONAL_TEXT("FAM1AUD", 6);
	while ((((!VEHICLE::HAS_VEHICLE_ASSET_LOADED(joaat("sentinel2")) || !__LIB_34__.func_827(17, 0)) || !STREAMING::HAS_MODEL_LOADED(__LIB_19__.func_811(1))) || !HUD::HAS_ADDITIONAL_TEXT_LOADED(6)) || !HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
	{
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
		SYSTEM::WAIT(0);
	}
	HUD::DISPLAY_RADAR(true);
	HUD::DISPLAY_HUD(true);
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
	{
		if (!__LIB_6__.func_769(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0, 0))
		{
			__LIB_32__.func_796(-843.9858f, 158.65485f, 64.90799f, -777.54004f, 183.18657f, 81.33534f, 34.25f, -858.9615f, 147.4493f, 61.4344f, 357.0481f, 5f, 7f, 8.5f, 1, 1, 1, 1, 0);
		}
	}
	if (iParam0 != 1)
	{
		switch (iParam0)
		{
			case 3:
			case 4:
				Local_384 = { -825.1714f, 178.9298f, 70.3721f };
				break;
			case 5:
				Local_384 = { -2146.382f, -255.5757f, 13.9293f };
				break;
			case 6:
				Local_384 = { -416.0598f, -1124.7811f, 36.1469f };
				break;
			case 7:
				Local_384 = { -650.3306f, -2171.4126f, 49.4297f };
				break;
			}
	}
	func_829(&iLocal_342, 17, Local_384, fLocal_385, 1, 0);
	VEHICLE::SET_VEHICLE_EXTRA(iLocal_342, 1, true);
	VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iLocal_342, false, 0);
	VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(iLocal_342);
	VEHICLE::SET_VEHICLE_COLOURS(iLocal_342, iLocal_327, iLocal_327);
	VEHICLE::SET_VEHICLE_DIRT_LEVEL(iLocal_342, 0f);
	VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(iLocal_342, 4, false);
	VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(iLocal_342, 0, false);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_342, 5f);
	VEHICLE::SET_VEHICLE_STRONG(iLocal_342, true);
	VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(iLocal_342, false);
	VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(iLocal_342, false);
	ENTITY::SET_ENTITY_HEALTH(iLocal_342, 1200, 0);
	VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iLocal_342, false);
	VEHICLE::LOWER_CONVERTIBLE_ROOF(iLocal_342, true);
	VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_342, true);
	__LIB_0__.func_409(iLocal_342, -1);
	VEHICLE::GET_VEHICLE_COLOURS(iLocal_342, &uLocal_3026, &uLocal_3027);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("sentinel2"), true);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("sentinel"), true);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("tr3"), true);
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_56[1]))
	{
		func_796(&(iLocal_56[1]), 1, -794.9062f, 176.0349f, 71.8348f, 96.2191f, 1, 0, 0);
	}
	if (!PED::IS_PED_INJURED(func_2()))
	{
		PED::SET_PED_SUFFERS_CRITICAL_HITS(func_2(), false);
		PED::SET_PED_CONFIG_FLAG(func_2(), 32, false);
		ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(func_2(), false);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_2(), true);
		PED::SET_PED_CAN_BE_DRAGGED_OUT(func_2(), false);
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(func_2(), false);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(func_2(), true);
		WEAPON::SET_CURRENT_PED_WEAPON(func_2(), joaat("WEAPON_UNARMED"), true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(func_2(), joaat("PLAYER"));
		AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_56[1], "FAMILY_1_BOAT_PEDS", 0f);
	}
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("PLAYER"), iLocal_282);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_282, joaat("PLAYER"));
	PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
	__LIB_0__.func_203(&uLocal_446, 1, func_2(), "FRANKLIN", 0, 1);
}

int func_796(int* iParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x8E042
{
	int iVar0;
	if (__LIB_0__.func_317(iParam1))
	{
		iVar0 = __LIB_19__.func_811(iParam1);
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
			{
				PED::DELETE_PED(iParam0);
			}
			*iParam0 = PED::CREATE_PED(26, iVar0, Param2, fParam3, false, false);
			__LIB_26__.func_464(*iParam0, iParam1, bParam5);
			PED::SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(*iParam0, false, 0);
			func_820(*iParam0);
			__LIB_32__.func_730(*iParam0, 1, 0);
			__LIB_20__.func_721(*iParam0);
			__LIB_20__.func_720(*iParam0);
			func_798(*iParam0, bParam6);
			__LIB_0__.func_349(*iParam0);
			if (bParam4)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
			}
			return 1;
		}
	}
	return 0;
}

int func_798(int iParam0, bool bParam1)//Position - 0x8E15A
{
	int iVar0;
	bool bVar1;
	iVar0 = __LIB_20__.func_509(iParam0);
	if (__LIB_10__.func_3(iVar0))
	{
		func_802(iVar0, 0);
		func_778(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		func_513(iParam0, 1);
		return 1;
	}
	if (!bParam1)
	{
		if (__LIB_6__.func_843(iParam0))
		{
			func_802(iVar0, 0);
			func_778(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			func_513(iParam0, 1);
			return 1;
		}
	}
	bVar1 = false;
	switch (iVar0)
	{
		case 0:
			if (Global_113386.f_9085.f_99.f_58[120] && !Global_113386.f_9085.f_99.f_58[122])
			{
				func_778(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_113386.f_9085.f_99.f_58[121] = 1;
				return 1;
			}
			if (Global_113386.f_9085.f_99.f_58[123])
			{
				Global_113386.f_9085.f_99.f_58[123] = 0;
				if (!PED::IS_PED_INJURED(iParam0))
				{
					if (func_720(iParam0, 3, 169))
					{
						func_778(iParam0, 3, 85, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						return 1;
					}
				}
			}
			if (func_720(iParam0, 12, 6))
			{
				func_778(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_720(iParam0, 12, 17))
			{
				if (!__LIB_38__.func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_778(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_720(iParam0, 12, 20))
			{
				if (!__LIB_38__.func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 20))
				{
					func_778(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_720(iParam0, 12, 21))
			{
				if (!__LIB_38__.func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 21))
				{
					func_778(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_720(iParam0, 12, 22))
			{
				if (!__LIB_38__.func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 22))
				{
					func_778(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_720(iParam0, 12, 11))
			{
				func_778(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_720(iParam0, 12, 10))
			{
				func_778(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_720(iParam0, 12, 50))
			{
				func_778(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_720(iParam0, 14, 59))
			{
				func_778(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_720(iParam0, 8, 22))
			{
				func_778(iParam0, 8, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_720(iParam0, 12, 14))
			{
				func_778(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		case 1:
			if (func_720(iParam0, 12, 13))
			{
				if (!__LIB_38__.func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 13))
				{
					func_778(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_720(iParam0, 12, 14))
			{
				if (!__LIB_38__.func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 14))
				{
					func_778(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_720(iParam0, 12, 15))
			{
				if (!__LIB_38__.func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 15))
				{
					func_778(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_720(iParam0, 12, 4))
			{
				func_778(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_720(iParam0, 12, 3))
			{
				func_778(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_720(iParam0, 14, 82))
			{
				func_778(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_720(iParam0, 8, 76))
			{
				func_778(iParam0, 8, 26, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_720(iParam0, 12, 1))
			{
				func_778(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		case 2:
			if (func_720(iParam0, 12, 12))
			{
				func_778(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_720(iParam0, 12, 15))
			{
				func_778(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (!bParam1)
			{
				if (func_720(iParam0, 3, 71))
				{
					func_778(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_720(iParam0, 12, 17))
			{
				if (!__LIB_38__.func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_778(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_720(iParam0, 12, 18))
			{
				if (!__LIB_38__.func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 18))
				{
					func_778(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_720(iParam0, 12, 19))
			{
				if (!__LIB_38__.func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 19))
				{
					func_778(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_720(iParam0, 12, 7))
			{
				func_778(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_720(iParam0, 12, 6))
			{
				func_778(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_720(iParam0, 14, 88))
			{
				func_778(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_720(iParam0, 8, 17))
			{
				func_778(iParam0, 8, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_720(iParam0, 12, 11))
			{
				func_778(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
	}
	return 0;
}

void func_802(int iParam0, bool bParam1)//Position - 0x8E8EB
{
	if (!__LIB_0__.func_317(iParam0))
	{
		return;
	}
	Global_113386.f_2363.f_539.f_2332[iParam0] = bParam1;
}

void func_820(int iParam0)//Position - 0x8F95F
{
	int iVar0;
	int iVar1;
	bool bVar2;
	iVar0 = __LIB_20__.func_509(iParam0);
	if (__LIB_0__.func_317(iVar0))
	{
		if (!Global_100362[iVar0])
		{
			if (Global_113386.f_2363.f_539.f_2391[iVar0] != 0)
			{
				if (__LIB_0__.func_352(iParam0) != Global_113386.f_2363.f_539.f_2391[iVar0])
				{
					__LIB_10__.func_1(iVar0);
					Global_113386.f_2363.f_539.f_2391[iVar0] = __LIB_0__.func_352(iParam0);
				}
			}
		}
		func_519(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
		if (!Global_100362[iVar0])
		{
			bVar2 = false;
			if (iVar0 == 0)
			{
				if (!__LIB_0__.func_365(49))
				{
					iVar1 = func_794(iParam0, 12, -1);
					if (iVar1 == 16)
					{
						bVar2 = true;
					}
					func_821(__LIB_19__.func_811(0), 12, 16, 0, 0, 0, 0);
				}
				if (!__LIB_0__.func_365(44))
				{
					iVar1 = func_794(iParam0, 3, -1);
					if (((((iVar1 == 70 || iVar1 == 71) || iVar1 == 72) || iVar1 == 73) || iVar1 == 74) || iVar1 == 75)
					{
						bVar2 = true;
					}
					iVar1 = func_794(iParam0, 4, -1);
					if ((((iVar1 == 41 || iVar1 == 42) || iVar1 == 43) || iVar1 == 44) || iVar1 == 45)
					{
						bVar2 = true;
					}
					func_821(__LIB_19__.func_811(0), 3, 70, 1, 0, 0, 0);
					func_821(__LIB_19__.func_811(0), 3, 71, 1, 0, 0, 0);
					func_821(__LIB_19__.func_811(0), 3, 72, 1, 0, 0, 0);
					func_821(__LIB_19__.func_811(0), 3, 73, 1, 0, 0, 0);
					func_821(__LIB_19__.func_811(0), 3, 74, 1, 0, 0, 0);
					func_821(__LIB_19__.func_811(0), 3, 75, 1, 0, 0, 0);
					func_821(__LIB_19__.func_811(0), 4, 41, 1, 0, 0, 0);
					func_821(__LIB_19__.func_811(0), 4, 42, 1, 0, 0, 0);
					func_821(__LIB_19__.func_811(0), 4, 43, 1, 0, 0, 0);
					func_821(__LIB_19__.func_811(0), 4, 44, 1, 0, 0, 0);
					func_821(__LIB_19__.func_811(0), 4, 45, 1, 0, 0, 0);
				}
			}
			else if (iVar0 == 2)
			{
				iVar1 = func_794(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				__LIB_10__.func_1(iVar0);
				func_519(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
			}
		}
		Global_100362[iVar0] = 1;
	}
}

void func_821(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)//Position - 0x8FBBC
{
	__LIB_38__.func_82(iParam0, iParam1, iParam2, bParam3);
	func_824(iParam0, iParam1, iParam2, bParam4, 1);
	if (bParam5)
	{
		__LIB_0__.func_364(iParam0, iParam1, iParam2, 0);
	}
	if (iParam6 == 1)
	{
		__LIB_38__.func_81(iParam0, iParam1, iParam2, 0);
	}
}

int func_824(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x8FD77
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	Global_78130[1 /*14*/] = { __LIB_35__.func_896(iParam0, iParam1, iParam2, -1) };
	if (BitTest(Global_78130[1 /*14*/].f_6, 0) && !BitTest(Global_78130[1 /*14*/].f_6, 6))
	{
		if (bParam3)
		{
			__LIB_0__.func_31(iParam1, Global_78130[1 /*14*/].f_5, Global_78130[1 /*14*/].f_2, 1, Global_78130[1 /*14*/].f_1, 1, 0);
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
					uVar3 = { __LIB_18__.func_180(iParam0, iParam2) };
					iVar1 = 0;
					while (iVar1 <= 14)
					{
						if ((uVar3[iVar1] != -99 && iVar1 != 12) && iVar1 != 14)
						{
							if (iVar1 != 13)
							{
								func_824(iParam0, iVar1, uVar3[iVar1], 1, 1);
								__LIB_38__.func_82(iParam0, iVar1, uVar3[iVar1], 1);
							}
							else
							{
								uVar4 = { __LIB_18__.func_247(iParam0, uVar3[iVar1]) };
								iVar2 = 0;
								while (iVar2 <= 8)
								{
									func_824(iParam0, 14, uVar4[iVar2], 1, 1);
									__LIB_38__.func_82(iParam0, 14, uVar4[iVar2], 1);
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
			__LIB_0__.func_31(iParam1, Global_78130[1 /*14*/].f_5, Global_78130[1 /*14*/].f_2, 1, Global_78130[1 /*14*/].f_1, 0, 1);
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
								func_824(iParam0, 3, iVar5, 1, 0);
							}
							else if (iParam2 >= 227 && iParam2 <= 242)
							{
								iVar5 = (176 + Global_78130[1 /*14*/].f_4);
								func_824(iParam0, 3, iVar5, 1, 0);
							}
							break;
						case 11:
							if (iParam2 >= 9 && iParam2 <= 24)
							{
								iVar5 = (25 + Global_78130[1 /*14*/].f_4);
								func_824(iParam0, 11, iVar5, 1, 0);
							}
							else if (iParam2 >= 25 && iParam2 <= 40)
							{
								iVar5 = (9 + Global_78130[1 /*14*/].f_4);
								func_824(iParam0, 11, iVar5, 1, 0);
							}
							break;
						case 8:
							if (iParam2 >= 27 && iParam2 <= 42)
							{
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_824(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_824(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 43 && iParam2 <= 58)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_824(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_824(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 59 && iParam2 <= 74)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_824(iParam0, 8, iVar5, 1, 0);
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_824(iParam0, 8, iVar5, 1, 0);
							}
							break;
						case 14:
							if (iParam2 >= 64 && iParam2 <= 79)
							{
								iVar5 = (41 + Global_78130[1 /*14*/].f_4);
								func_824(iParam0, 14, iVar5, 1, 0);
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
								func_824(iParam0, 4, iVar5, 1, 0);
							}
							break;
						case 12:
							if (iParam2 == 2)
							{
								func_824(iParam0, 14, 17, 1, 0);
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

int func_829(int iParam0, bool bParam1, struct<3> Param2, float fParam3, bool bParam4, int iParam5)//Position - 0x90370
{
	struct<98> Var0;
	int iVar1;
	int iVar2;
	if (!__LIB_0__.func_317(bParam1))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		__LIB_11__.func_860(bParam1, &Var0, iParam5);
		if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			if (ENTITY::GET_ENTITY_MODEL(*iParam0) != Var0.f_0)
			{
			}
			return 1;
		}
		if ((bParam1 == 17 && Global_113386.f_2363.f_539.f_3618[0 /*197*/][0 /*98*/] == Var0.f_0) || (bParam1 == 15 && Global_113386.f_2363.f_539.f_3618[0 /*197*/][1 /*98*/] == Var0.f_0))
		{
			if (bParam1 == 17)
			{
				iVar1 = 0;
			}
			else if (bParam1 == 15)
			{
				iVar1 = 1;
			}
			STREAMING::REQUEST_MODEL(Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/]);
			if (STREAMING::HAS_MODEL_LOADED(Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/]))
			{
				*iParam0 = VEHICLE::CREATE_VEHICLE(Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/], Param2, fParam3, false, false, false);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0, 5f);
				VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(*iParam0, false);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*iParam0, false);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, true);
				ENTITY::SET_ENTITY_HEALTH(*iParam0, 1250, 0);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*iParam0, 1250f);
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*iParam0, 1250f);
				Var0.f_3 = 1250;
				VEHICLE::SET_VEHICLE_COLOURS(*iParam0, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_5, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_6);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*iParam0, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_7, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_8);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, Var0.f_2);
				iVar2 = 0;
				while (iVar2 < 12)
				{
					VEHICLE::SET_VEHICLE_EXTRA(*iParam0, iVar2 + 1, !Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_11[iVar2]);
					iVar2++;
				}
				if (Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_24)
				{
					if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(*iParam0, false))
					{
						if (Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_24)
						{
							VEHICLE::RAISE_CONVERTIBLE_ROOF(*iParam0, true);
						}
						else
						{
							VEHICLE::LOWER_CONVERTIBLE_ROOF(*iParam0, true);
						}
					}
				}
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &(Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_27));
				if (Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_26 >= 0 && Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_26 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_26);
				}
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*iParam0, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_84, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_85, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_86);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*iParam0, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_88);
				VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_87);
				VEHICLE::SET_VEHICLE_NEON_COLOUR(*iParam0, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_93, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_94, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_95);
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 2, BitTest(Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_92, 28));
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 3, BitTest(Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_92, 29));
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 0, BitTest(Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_92, 30));
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 1, BitTest(Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_92, 31));
				if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(*iParam0) > 1 && Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_89 >= 0)
				{
					VEHICLE::SET_VEHICLE_LIVERY(*iParam0, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_89);
				}
				if (Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_90 > -1)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
					{
						if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
						{
							if (Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_90 == 6)
							{
								VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_90);
							}
						}
						else
						{
							VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_90);
						}
					}
				}
				__LIB_18__.func_202(iParam0, &(Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_31), &(Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_81));
				VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*iParam0, Var0.f_96);
				if (bParam4)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/]);
				}
				__LIB_11__.func_861(*iParam0);
				return 1;
			}
		}
		else
		{
			STREAMING::REQUEST_MODEL(Var0.f_0);
			if (STREAMING::HAS_MODEL_LOADED(Var0.f_0))
			{
				*iParam0 = VEHICLE::CREATE_VEHICLE(Var0.f_0, Param2, fParam3, false, false, false);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0, 5f);
				VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(*iParam0, false);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*iParam0, false);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, true);
				__LIB_32__.func_784(iParam0, Var0);
				if (bParam1 == 17 || bParam1 == 15)
				{
					__LIB_11__.func_861(*iParam0);
				}
				if (bParam4)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Var0.f_0);
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_848()//Position - 0x91C5B
{
	if (iLocal_308 <= 3)
	{
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	}
	switch (iLocal_308)
	{
		case 0:
			iLocal_3061 = 0;
			iLocal_3062 = 0;
			iLocal_3063 = 0;
			CAM::DESTROY_ALL_CAMS(false);
			iLocal_322 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
			if (__LIB_0__.func_504(__LIB_20__.func_728()) == 1)
			{
				CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("family_1_int", 254, 8);
			}
			else
			{
				CUTSCENE::REQUEST_CUTSCENE("family_1_int", 8);
			}
			iLocal_308++;
			break;
		case 1:
			if (__LIB_20__.func_728() == 0)
			{
				__LIB_38__.func_130("Franklin", joaat("Player_One"), 21);
			}
			__LIB_38__.func_130("Michael", joaat("Player_Zero"), 34);
			if (__LIB_0__.func_90())
			{
				iLocal_308++;
			}
			break;
		case 2:
			__LIB_7__.func_279(1, 1, 1, 0, 0, 0, 0);
			if (__LIB_0__.func_504(__LIB_20__.func_728()) == 0)
			{
				if (!PED::IS_PED_INJURED(iLocal_56[1]))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_56[1], "Franklin", 0, joaat("Player_One"), 0);
				}
			}
			else if (!PED::IS_PED_INJURED(iLocal_56[0]))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_56[0], "Michael", 0, joaat("Player_Zero"), 0);
			}
			RECORDING::REPLAY_START_EVENT(4);
			CUTSCENE::START_CUTSCENE(0);
			iLocal_3059 = 0;
			iLocal_3060 = 0;
			iLocal_308++;
			break;
		case 3:
		case 4:
		case 5:
			if (CUTSCENE::IS_CUTSCENE_PLAYING() && iLocal_308 == 3)
			{
				if (__LIB_0__.func_504(__LIB_20__.func_728()) == 0)
				{
					PED::CLEAR_PED_BLOOD_DAMAGE(PLAYER::PLAYER_PED_ID());
					func_778(PLAYER::PLAYER_PED_ID(), 12, 34, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				else
				{
					GRAPHICS::SET_TIMECYCLE_MODIFIER("sunglasses");
					func_778(iLocal_56[0], 12, 34, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				OBJECT::DELETE_OBJECT(&iLocal_3048);
				OBJECT::DELETE_OBJECT(&iLocal_3049);
				ENTITY::REMOVE_MODEL_HIDE(-816.72f, 179.1f, 72.83f, 1f, joaat("v_ilev_mm_doorm_l"), false);
				ENTITY::REMOVE_MODEL_HIDE(-816.11f, 177.51f, 72.83f, 1f, joaat("v_ilev_mm_doorm_r"), false);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3045))
				{
					OBJECT::DELETE_OBJECT(&iLocal_3045);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3046))
				{
					OBJECT::DELETE_OBJECT(&iLocal_3046);
				}
				MISC::SET_WEATHER_TYPE_NOW_PERSIST("EXTRASUNNY");
				FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 150f);
				CLOCK::SET_CLOCK_TIME(16, 0, 0);
				__LIB_0__.func_296();
				__LIB_32__.func_723(&uLocal_3028, 0, 0, 2000, 1, 1, 0, 1);
				func_59(0, 0, 2000, 1, 0);
				__LIB_0__.func_372(17);
				iLocal_308 = 4;
			}
			if (iLocal_308 == 4)
			{
				if (__LIB_0__.func_504(__LIB_20__.func_728()) == 0)
				{
					iLocal_308 = 5;
				}
				else if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Michael", 0)))
				{
					iLocal_56[0] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Michael", 0));
					PED::CLEAR_PED_BLOOD_DAMAGE(iLocal_56[0]);
					iLocal_308 = 5;
				}
			}
			if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-2097039789))
			{
				OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-2097039789, 0f, false, false);
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-2097039789, 3, false, true);
			}
			if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-2127416656))
			{
				OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-2127416656, 0f, false, false);
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-2127416656, 3, false, true);
			}
			if (IntToFloat(CUTSCENE::GET_CUTSCENE_TIME()) > 40400f && IntToFloat(CUTSCENE::GET_CUTSCENE_TIME()) < 41434f)
			{
				if (iLocal_3059 == 0)
				{
					GRAPHICS::SET_TIMECYCLE_MODIFIER("sunglasses");
					CLOCK::SET_CLOCK_TIME(11, 0, 0);
					iLocal_3059 = 1;
				}
			}
			if (IntToFloat(CUTSCENE::GET_CUTSCENE_TIME()) > 46065.6f)
			{
				if (iLocal_3059 == 1)
				{
					GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
					iLocal_3059 = 0;
				}
			}
			if (IntToFloat(CUTSCENE::GET_CUTSCENE_TIME()) > 185532.34f)
			{
				if (iLocal_3060 == 0)
				{
					if (!bLocal_3050)
					{
						__LIB_29__.func_730(0);
					}
					iLocal_3060 = 1;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_56[0]))
			{
				CAM::SET_GAMEPLAY_CAM_FOLLOW_PED_THIS_UPDATE(iLocal_56[0]);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0))
			{
				if (!PED::IS_PED_INJURED(func_2()))
				{
					PED::FORCE_PED_MOTION_STATE(func_2(), joaat("MotionState_Walk"), false, 1, false);
				}
				iLocal_3061 = 1;
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
			{
				__LIB_12__.func_175(0);
				iLocal_3062 = 1;
			}
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 26 /*INPUT_LOOK_BEHIND*/, true);
			PAD::DISABLE_CONTROL_ACTION(1 /*CAMERA_CONTROL*/, 1 /*INPUT_LOOK_LR*/, true);
			PAD::DISABLE_CONTROL_ACTION(1 /*CAMERA_CONTROL*/, 2 /*INPUT_LOOK_UD*/, true);
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
			{
				if (__LIB_20__.func_728() != 0)
				{
					__LIB_32__.func_807(&iLocal_56, 0);
					__LIB_41__.func_658(&iLocal_56, 1, 0, 0);
				}
				iLocal_3062 = 1;
				if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
				{
					__LIB_12__.func_175(0);
				}
				GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
				PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2500, 0f, true, false);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
				__LIB_0__.func_372(17);
				__LIB_0__.func_203(&uLocal_446, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
				func_778(PLAYER::PLAYER_PED_ID(), 12, 34, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				func_513(func_2(), 1);
				RECORDING::REPLAY_STOP_EVENT();
				SYSTEM::SETTIMERB(0);
				iLocal_3063 = 1;
			}
			if ((iLocal_3061 && iLocal_3062) && iLocal_3063)
			{
				__LIB_7__.func_279(0, 1, 1, 0, 0, 0, 0);
				iLocal_3022 = 3;
			}
			break;
	}
	if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
	}
	if (ENTITY::DOES_ENTITY_EXIST(func_2()))
	{
		if (!ENTITY::IS_ENTITY_DEAD(func_2(), false))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(func_2(), 1f);
		}
	}
}

void func_853()//Position - 0x92438
{
	fLocal_151 = 180f;
	fLocal_166 = 13000f;
	fLocal_164 = 180f;
	HUD::ALLOW_SONAR_BLIPS(false);
	PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
	__LIB_32__.func_812(39, 0, 0);
	__LIB_26__.func_264(40, 1);
	__LIB_26__.func_264(41, 1);
	__LIB_26__.func_264(42, 1);
	__LIB_26__.func_264(43, 1);
	__LIB_26__.func_264(44, 1);
	AUDIO::SET_AUDIO_FLAG("ScriptedConvListenerMaySpeak", true);
	HUD::REQUEST_ADDITIONAL_TEXT("FAMILY1", 0);
	HUD::REQUEST_ADDITIONAL_TEXT("FAM1AUD", 6);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_282);
	PED::ADD_RELATIONSHIP_GROUP("THIEVES", &iLocal_282);
	PED::SET_PED_NON_CREATION_AREA(-822.418f, 177.4556f, 70.3269f, -822.418f, 177.4556f, 70.3269f);
	PATHFIND::SET_PED_PATHS_IN_AREA(-832.418f, 167.4556f, 60.3269f, -812.418f, 187.4556f, 80.3269f, false, 0);
	PED::SET_SCENARIO_PEDS_SPAWN_IN_SPHERE_AREA(-820.7206f, 178.5732f, 70.5724f, 30f, 0);
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(-2181.964f, -332.7052f, 11.149142f, -2112.7905f, -175.24347f, 44.184326f, 17f, false, false, true);
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(-2041.3999f, -157.06065f, 11.016596f, -2139.924f, -233.37296f, 34.054882f, 17f, false, false, true);
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1921.8967f, -166.51735f, 20.289425f, -2062.1912f, -168.29738f, 42.182777f, 23.25f, false, false, true);
	__LIB_11__.func_182(1);
	bLocal_303 = __LIB_10__.func_3(0);
	__LIB_0__.func_367(1);
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	__LIB_20__.func_603("YB_JIMTXT" /* GXT: Dad - Come quick! These guys are stealing ur yacht, we're headin down the freeway. Totes not my fault! */);
	iLocal_3022 = 2;
	if (__LIB_0__.func_294())
	{
		__LIB_0__.func_372(17);
		PED::DELETE_PED(&(iLocal_56[1]));
		func_863(0, 1);
		__LIB_0__.func_203(&uLocal_446, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
		iLocal_3058 = __LIB_0__.func_315();
		func_795(iLocal_3057);
		switch (iLocal_3058)
		{
			case 0:
			case 1:
				iLocal_3057 = 3;
				break;
			case 2:
				iLocal_3057 = 5;
				break;
			case 3:
				iLocal_3057 = 6;
				break;
			case 4:
				iLocal_3057 = 7;
				break;
			case 5:
				iLocal_3057 = 8;
				break;
			case 6:
				iLocal_3057 = 9;
				break;
			case 7:
				iLocal_3057 = 10;
				break;
		}
		if (Global_94618 == 1)
		{
			if (iLocal_3057 == 3)
			{
				iLocal_3057 = 5;
			}
			else if (iLocal_3057 == 5)
			{
				iLocal_3057 = 6;
			}
			else if (iLocal_3057 == 6)
			{
				iLocal_3057 = 7;
			}
			else if (iLocal_3057 == 7)
			{
				iLocal_3057 = 8;
			}
			else if (iLocal_3057 == 8)
			{
				iLocal_3057 = 9;
			}
			else if (iLocal_3057 == 9)
			{
				iLocal_3057 = 10;
			}
			else if (iLocal_3057 == 10)
			{
				iLocal_3057 = 11;
			}
			else if (iLocal_3057 == 11)
			{
				func_93();
			}
		}
		func_854(&iLocal_3057, 1);
	}
}

void func_854(int iParam0, bool bParam1)//Position - 0x926F5
{
	float fVar0;
	bLocal_3025 = bParam1;
	switch (*iParam0)
	{
		case 3:
			func_860(bParam1, -825.1714f, 178.9298f, 70.3721f, 145.3533f);
			func_820(PLAYER::PLAYER_PED_ID());
			func_802(0, bLocal_303);
			iLocal_304 = 0;
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(func_2());
			if (!PED::IS_PED_IN_VEHICLE(func_2(), iLocal_342, false))
			{
				PED::SET_PED_INTO_VEHICLE(func_2(), iLocal_342, 0);
			}
			iLocal_3022 = 3;
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			ENTITY::SET_ENTITY_ROTATION(PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 2, true);
			MISC::CLEAR_AREA(-825.1714f, 178.9298f, 70.3721f, 100f, true, false, false, false);
			iLocal_304 = 5;
			__LIB_12__.func_175(0f);
			__LIB_6__.func_775(iLocal_342, -1, 1);
			if (!ENTITY::IS_ENTITY_DEAD(func_2(), false))
			{
				bLocal_3056 = PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(func_2());
			}
			while (!bLocal_3056)
			{
				if (!ENTITY::IS_ENTITY_DEAD(func_2(), false))
				{
					bLocal_3056 = PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(func_2());
				}
				SYSTEM::WAIT(0);
			}
			if (!bParam1)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_342, false))
				{
					TASK::TASK_ENTER_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_342, 20000, -1, 1f, 3, 0);
				}
				while (!CAM::IS_FOLLOW_VEHICLE_CAM_ACTIVE())
				{
					SYSTEM::WAIT(0);
				}
			}
			__LIB_0__.func_203(&uLocal_446, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
			func_40();
			break;
		case 4:
			func_860(bParam1, -821.9089f, 178.7543f, 70.5698f, 78.66f);
			func_820(PLAYER::PLAYER_PED_ID());
			func_802(0, bLocal_303);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(func_2());
			if (!PED::IS_PED_IN_VEHICLE(func_2(), iLocal_342, false))
			{
				PED::SET_PED_INTO_VEHICLE(func_2(), iLocal_342, 0);
			}
			if (!ENTITY::IS_ENTITY_DEAD(func_2(), false))
			{
				bLocal_3056 = PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(func_2());
			}
			while (!bLocal_3056)
			{
				if (!ENTITY::IS_ENTITY_DEAD(func_2(), false))
				{
					bLocal_3056 = PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(func_2());
				}
				SYSTEM::WAIT(0);
			}
			MISC::CLEAR_AREA(-821.9089f, 178.7543f, 70.5698f, 100f, true, false, false, false);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_342, false))
			{
				PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_342, -1);
			}
			while (!CAM::IS_FOLLOW_VEHICLE_CAM_ACTIVE())
			{
				SYSTEM::WAIT(0);
			}
			__LIB_12__.func_175(0f);
			__LIB_6__.func_775(0, -1, 1);
			__LIB_0__.func_203(&uLocal_446, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
			func_40();
			break;
		case 5:
			func_860(bParam1, -2146.382f, -255.5757f, 13.9293f, 159.6675f);
			if (!PED::IS_PED_INJURED(func_2()) && !ENTITY::IS_ENTITY_DEAD(iLocal_342, false))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(func_2());
				if (!PED::IS_PED_IN_VEHICLE(func_2(), iLocal_342, false))
				{
					PED::SET_PED_INTO_VEHICLE(func_2(), iLocal_342, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_2(), false, false);
				}
				VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_342, true, true, false);
				VEHICLE::LOWER_CONVERTIBLE_ROOF(iLocal_342, true);
			}
			func_1();
			func_820(PLAYER::PLAYER_PED_ID());
			func_802(0, bLocal_303);
			MISC::CLEAR_AREA(-2146.382f, -255.5757f, 13.9293f, 20f, true, false, false, false);
			func_1();
			HUD::CLEAR_GPS_MULTI_ROUTE();
			iLocal_295 = 1;
			iLocal_305 = 3;
			AUDIO::TRIGGER_MUSIC_EVENT("FAM1_FADE_RADIO");
			func_487();
			func_485();
			while (!func_483())
			{
				func_1();
				SYSTEM::WAIT(0);
			}
			func_482();
			func_480();
			func_474(14000f);
			func_471();
			__LIB_20__.func_615(&Local_283, 0);
			__LIB_6__.func_833();
			iLocal_3023 = 0;
			iLocal_3022 = 5;
			__LIB_12__.func_175(0);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_342, false))
			{
				PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_342, -1);
				PED::SET_PED_COORDS_KEEP_VEHICLE(PLAYER::PLAYER_PED_ID(), -2146.382f, -255.5757f, 13.9293f);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_342, 5f);
				ENTITY::SET_ENTITY_HEADING(iLocal_342, 159.6675f);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_342, 5f);
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_342, 15f);
			}
			__LIB_6__.func_775(iLocal_342, -1, 1);
			if (bParam1)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_342, false))
				{
					VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_342, 15f);
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_345, false))
			{
				ENTITY::SET_ENTITY_VISIBLE(iLocal_345, true, false);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_346, false))
			{
				ENTITY::SET_ENTITY_VISIBLE(iLocal_346, true, false);
			}
			__LIB_0__.func_203(&uLocal_446, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
			__LIB_38__.func_139(&uLocal_446, "FAM1AUD", "FAM1_START", 9, 0, 0, 0, 0);
			func_40();
			break;
		case 6:
		case 7:
			if (*iParam0 == 6)
			{
				func_860(bParam1, -416.0598f, -1124.7811f, 36.1469f, 179.8945f);
			}
			else if (*iParam0 == 7)
			{
				func_860(bParam1, -650.3306f, -2171.4126f, 49.4297f, 235.8943f);
			}
			if (!PED::IS_PED_INJURED(func_2()))
			{
				PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(func_2(), false);
			}
			MISC::SET_INSTANCE_PRIORITY_HINT(2);
			AUDIO::TRIGGER_MUSIC_EVENT("FAM1_DO_CHASE_RT");
			iLocal_611 = 0;
			iLocal_612 = 0;
			iLocal_277 = 1;
			WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PISTOL"), 150, true, true);
			fLocal_389 = 1f;
			func_485();
			func_487();
			STREAMING::REQUEST_MODEL(joaat("IG_JimmyDiSanto"));
			STREAMING::REQUEST_ANIM_DICT("MISSFAM1_YachtBattleonYacht02_");
			STREAMING::REQUEST_ANIM_DICT("MISSFAM1_YachtBattleincar02_");
			STREAMING::REQUEST_PTFX_ASSET();
			STREAMING::REQUEST_MODEL(joaat("trailers2"));
			STREAMING::REQUEST_ANIM_DICT("MISSFAM1_YachtBattle");
			while (((((((!func_483() || !func_481()) || !STREAMING::HAS_MODEL_LOADED(joaat("IG_JimmyDiSanto"))) || !STREAMING::HAS_ANIM_DICT_LOADED("MISSFAM1_YachtBattleonYacht02_")) || !STREAMING::HAS_ANIM_DICT_LOADED("MISSFAM1_YachtBattleincar02_")) || !STREAMING::HAS_ANIM_DICT_LOADED("MISSFAM1_YachtBattle")) || !STREAMING::HAS_PTFX_ASSET_LOADED()) || !STREAMING::HAS_MODEL_LOADED(joaat("trailers2")))
			{
				SYSTEM::WAIT(0);
			}
			STREAMING::REMOVE_ANIM_DICT("MISSFAM1_YachtBattleincar01_");
			func_480();
			if (!PED::IS_PED_INJURED(func_2()) && !ENTITY::IS_ENTITY_DEAD(iLocal_342, false))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(func_2());
				PED::SET_PED_INTO_VEHICLE(func_2(), iLocal_342, 0);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_342, false))
			{
				VEHICLE::LOWER_CONVERTIBLE_ROOF(iLocal_342, true);
				VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_342, true, true, false);
			}
			func_482();
			ENTITY::SET_ENTITY_COORDS(iLocal_346, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_345, 0f, 3f, 0f), true, false, false, true);
			func_453();
			__LIB_20__.func_615(&Local_283, 0);
			func_474(1179840512);
			func_471();
			if (*iParam0 == 6)
			{
				if (Global_18)
				{
					fVar0 = 70000f;
					bLocal_108 = false;
					__LIB_11__.func_126();
					func_856();
					iLocal_271 = MISC::GET_GAME_TIMER();
					iLocal_272 = 10700;
				}
				else
				{
					fVar0 = 90000f;
					iLocal_272 = 1200;
				}
				AUDIO::TRIGGER_MUSIC_EVENT("FAM1_JIMMY_APPEARS_RT");
				__LIB_42__.func_613(3, "STAGE_JIMMY_APPEARS", 0, 0, 0, 1);
				VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_345, fVar0);
				VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_346, fVar0);
				VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_54, fVar0);
				VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_55, fVar0);
				CAM::ATTACH_CAM_TO_ENTITY(iLocal_322, iLocal_346, -0.2979f, -8.6807f, 2.8214f, true);
				CAM::POINT_CAM_AT_ENTITY(iLocal_322, iLocal_346, -1.547f, -5.9555f, 2.7092f, true);
				CAM::SET_CAM_FOV(iLocal_322, 28.0593f);
				func_475(iLocal_345, (fVar0 + 13500f));
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_342, false))
				{
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_342, 1, "Fam1Cine", true);
					fVar0 = (fVar0 + 12000f);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_342, fVar0);
					VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_342, true);
				}
				iLocal_267 = -1;
				iLocal_269 = 9;
			}
			else if (*iParam0 == 7)
			{
				iLocal_421 = 1;
				AUDIO::TRIGGER_MUSIC_EVENT("FAM1_FRANK_JUMPS_RT");
				ENTITY::PLAY_ENTITY_ANIM(iLocal_346, "onYacht_hitByBoom_boom", "MISSFAM1_YachtBattleonYacht02_", 8f, false, true, false, 0f, 0);
				__LIB_42__.func_613(4, "STAGE_FRANKLIN_JUMPS_BACK_ONTO_BOAT", 0, 0, 0, 1);
				VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_345, 134000f);
				VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_346, 134000f);
				VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_54, 134000f);
				VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_55, 134000f);
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_342, false))
				{
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_342, 1, "Fam1Cine", true);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_342, 145700f);
				}
				VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_342, true);
				func_427();
				iLocal_269 = 9;
				iLocal_3055 = 8;
				iLocal_374 = func_446(iLocal_354, 0, iLocal_342, "seat_pside_r", 0, "MISSFAM1_YachtBattleinCar02_", "JimmyInCar_intro", "", 1, 1, 4);
				PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_374, 0.45f);
				func_475(iLocal_345, 147500f);
			}
			__LIB_0__.func_296();
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(true);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_342, false))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_342);
			}
			HUD::REMOVE_BLIP(&iLocal_328);
			if (*iParam0 == 6)
			{
				STREAMING::REQUEST_ANIM_DICT("MISSFAM1_YachtBattleonYacht01_");
				while (!STREAMING::HAS_ANIM_DICT_LOADED("MISSFAM1_YachtBattleonYacht01_"))
				{
					SYSTEM::WAIT(0);
				}
				if (!PED::IS_PED_INJURED(func_2()))
				{
					iLocal_369 = func_446(func_2(), 0, iLocal_346, "chassis", 1, "MISSFAM1_YachtBattleonYacht01_", "onYacht_byWheelLoop02_F", "", 0, 1, 4);
				}
				iLocal_3023 = 22;
				iLocal_3022 = 6;
			}
			else if (*iParam0 == 7)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_346, false) && !PED::IS_PED_INJURED(func_2()))
				{
					iLocal_371 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(func_2(), iLocal_371, "MISSFAM1_YACHTBATTLEonYacht02_", "onYacht_jumpToCarIntro_F", 1000f, -1000f, 0, 0, 1000f, 0);
					PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_371, iLocal_346, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_346, "chassis"));
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_371, false);
					PED::SET_SYNCHRONIZED_SCENE_ORIGIN(iLocal_371, 0f, 0f, 0f, 0f, 0f, 0f, 2);
					CAM::ATTACH_CAM_TO_ENTITY(iLocal_322, iLocal_346, -0.0528f, -4.5224f, 2.7052f, true);
					CAM::POINT_CAM_AT_ENTITY(iLocal_322, iLocal_346, 0.1428f, -7.461f, 2.134f, true);
					CAM::SET_CAM_FOV(iLocal_322, 27.3552f);
					__LIB_0__.func_296();
					iLocal_3023 = 32;
				}
				iLocal_3022 = 7;
			}
			if (*iParam0 == 6)
			{
				iLocal_3023 = 22;
				iLocal_3022 = 6;
				AUDIO::START_AUDIO_SCENE("FAM1_HIGHWAY_CHASE");
			}
			else if (*iParam0 == 7)
			{
				iLocal_3023 = 32;
				*iParam0 = 7;
				AUDIO::START_AUDIO_SCENE("FAMILY_1_PROTECT_FRANKLIN");
				AUDIO::START_AUDIO_SCENE("FAM1_HIGHWAY_CHASE");
			}
			__LIB_6__.func_775(iLocal_342, -1, 1);
			SYSTEM::SETTIMERA(0);
			while (SYSTEM::TIMERA() < 1000)
			{
				func_426();
				func_349(iLocal_345, 1f);
				func_459();
				SYSTEM::WAIT(0);
			}
			func_855(&uLocal_613, 1, "Fam1New");
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_342, false))
			{
				PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_342, -1);
				AUDIO::SET_VEHICLE_AUDIO_ENGINE_DAMAGE_FACTOR(iLocal_342, 0.25f);
				iLocal_96 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY_BONE("scr_fam1_veh_smoke", iLocal_342, 0f, 0f, 0f, 0f, 0f, 0f, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_342, "overheat"), 1f, false, false, false);
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(iLocal_96, "damage", 0.5f, false);
			}
			if (!PED::IS_PED_INJURED(func_2()))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(func_2(), joaat("WEAPON_UNARMED"), true);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_2(), false, false);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_345, false))
			{
				ENTITY::SET_ENTITY_VISIBLE(iLocal_345, true, false);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_346, false))
			{
				ENTITY::SET_ENTITY_VISIBLE(iLocal_346, true, false);
			}
			__LIB_0__.func_203(&uLocal_446, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
			break;
		case 8:
			func_860(bParam1, 3.5141f, -2605.764f, 26.7756f, 61.8483f);
			__LIB_42__.func_613(5, "STAGE_TAKE_CAR_TO_CHOP_SHOP", 0, 0, 0, 1);
			STREAMING::REQUEST_MODEL(joaat("IG_JimmyDiSanto"));
			STREAMING::REQUEST_PTFX_ASSET();
			STREAMING::REQUEST_CLIP_SET("clipset@missfam1_jimmy_sit_rear");
			while ((!STREAMING::HAS_MODEL_LOADED(joaat("IG_JimmyDiSanto")) || !STREAMING::HAS_PTFX_ASSET_LOADED()) || !STREAMING::HAS_CLIP_SET_LOADED("clipset@missfam1_jimmy_sit_rear"))
			{
				SYSTEM::WAIT(0);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_342, false))
			{
				if (!PED::IS_PED_INJURED(func_2()))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(func_2());
					PED::SET_PED_INTO_VEHICLE(func_2(), iLocal_342, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_2(), false, false);
				}
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_342, -1);
					PED::SET_PED_COORDS_KEEP_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_329);
				}
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_342, 70f);
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_354))
				{
					iLocal_354 = PED::CREATE_PED(26, joaat("IG_JimmyDiSanto"), 3.5141f, -2605.764f, 32.7756f, 96.2191f, true, true);
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_354, "FAMILY_1_BOAT_PEDS", 0f);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_354, 2, 1, 0, 0);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_354, joaat("PLAYER"));
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_354, true);
					__LIB_0__.func_203(&uLocal_446, 2, iLocal_354, "JIMMY", 0, 1);
				}
				if (!PED::IS_PED_INJURED(iLocal_354))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_354);
					PED::SET_PED_INTO_VEHICLE(iLocal_354, iLocal_342, 1);
					PED::SET_PED_IN_VEHICLE_CONTEXT(iLocal_354, MISC::GET_HASH_KEY("MISS_FAMILY1_JIMMY_SIT_REAR"));
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_354, true, false);
				}
				VEHICLE::LOWER_CONVERTIBLE_ROOF(iLocal_342, true);
				VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_342, true, true, false);
			}
			MISC::CLEAR_AREA_OF_VEHICLES(3.5141f, -2605.764f, 26.7756f, 25f, false, false, false, false, false, false, 0);
			ENTITY::SET_ENTITY_COORDS(iLocal_342, 3.5141f, -2605.764f, 26.7756f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(iLocal_342, 61.8483f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_342, 15f);
			iLocal_307 = 3;
			__LIB_6__.func_775(iLocal_342, -1, 1);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_342, false))
			{
				PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_342, -1);
			}
			AUDIO::START_AUDIO_SCENE("FAMILY_1_CAR_BREAKS_DOWN");
			__LIB_0__.func_203(&uLocal_446, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
			iLocal_3022 = 8;
			break;
		case 9:
			func_860(bParam1, -1104.3104f, -1975.6715f, 12.0488f, 92.2029f);
			__LIB_42__.func_613(6, "STAGE_CHOP_SHOP_CUTSCENE", 0, 0, 0, 1);
			STREAMING::REQUEST_MODEL(joaat("IG_JimmyDiSanto"));
			while (!STREAMING::HAS_MODEL_LOADED(joaat("IG_JimmyDiSanto")))
			{
				SYSTEM::WAIT(0);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_342, false))
			{
				if (!PED::IS_PED_INJURED(func_2()))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(func_2());
					PED::SET_PED_INTO_VEHICLE(func_2(), iLocal_342, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_2(), false, false);
				}
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_342, -1);
					PED::SET_PED_COORDS_KEEP_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_329);
				}
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_342, 70f);
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_354))
				{
					iLocal_354 = PED::CREATE_PED(26, joaat("IG_JimmyDiSanto"), -1104.3104f, -1975.6715f, 15.0488f, 96.2191f, true, true);
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_354, "FAMILY_1_BOAT_PEDS", 0f);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_354, 2, 1, 0, 0);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_354, joaat("PLAYER"));
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_354, true);
					__LIB_0__.func_203(&uLocal_446, 2, iLocal_354, "JIMMY", 0, 1);
				}
				if (!PED::IS_PED_INJURED(iLocal_354))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_354);
					PED::SET_PED_INTO_VEHICLE(iLocal_354, iLocal_342, 1);
				}
				VEHICLE::LOWER_CONVERTIBLE_ROOF(iLocal_342, true);
				VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_342, true, true, false);
			}
			ENTITY::SET_ENTITY_COORDS(iLocal_342, -1104.3104f, -1975.6715f, 12.0488f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(iLocal_342, 92.2029f);
			__LIB_32__.func_780(39, 0);
			__LIB_32__.func_812(39, 1, 0);
			__LIB_20__.func_748(39);
			__LIB_6__.func_775(0, -1, 1);
			iLocal_3022 = 9;
			break;
		case 10:
			func_860(bParam1, -1137.9795f, -1985.8516f, 12.1666f, 294.9323f);
			__LIB_42__.func_613(7, "STAGE_FIX_CAR_AND_TAKE_JIMMY_HOME", 0, 0, 0, 1);
			__LIB_32__.func_812(39, 1, 0);
			__LIB_20__.func_748(39);
			__LIB_32__.func_780(39, 1);
			if (__LIB_0__.func_504(__LIB_20__.func_728()) != 1)
			{
				__LIB_32__.func_807(&iLocal_56, 1);
				__LIB_41__.func_658(&iLocal_56, 0, 0, 0);
			}
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(PLAYER::PLAYER_PED_ID(), false);
			PED::DELETE_PED(&(iLocal_56[0]));
			STREAMING::REQUEST_MODEL(joaat("IG_JimmyDiSanto"));
			STREAMING::REQUEST_CLIP_SET("clipset@missfam1_jimmy_sit");
			while (!STREAMING::HAS_MODEL_LOADED(joaat("IG_JimmyDiSanto")) || !STREAMING::HAS_CLIP_SET_LOADED("clipset@missfam1_jimmy_sit"))
			{
				SYSTEM::WAIT(0);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_342, false))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_342, -1);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_354))
				{
					iLocal_354 = PED::CREATE_PED(26, joaat("IG_JimmyDiSanto"), -1137.9795f, -1985.8516f, 14.1666f, 96.2191f, true, true);
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_354, "FAMILY_1_BOAT_PEDS", 0f);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_354, 2, 1, 0, 0);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_354, joaat("PLAYER"));
					__LIB_0__.func_203(&uLocal_446, 2, iLocal_354, "JIMMY", 0, 1);
				}
				if (!PED::IS_PED_INJURED(iLocal_354))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_354);
					PED::SET_PED_IN_VEHICLE_CONTEXT(iLocal_354, MISC::GET_HASH_KEY("MISS_FAMILY1_JIMMY_SIT"));
					PED::SET_PED_INTO_VEHICLE(iLocal_354, iLocal_342, 0);
				}
				VEHICLE::LOWER_CONVERTIBLE_ROOF(iLocal_342, true);
				VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_342, true, true, false);
			}
			ENTITY::SET_ENTITY_COORDS(iLocal_342, -1137.9795f, -1985.8516f, 12.1666f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(iLocal_342, 294.9323f);
			iLocal_315 = 5;
			iLocal_3022 = 10;
			PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_342, -1);
			__LIB_6__.func_775(iLocal_342, -1, 1);
			__LIB_0__.func_203(&uLocal_446, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
			func_40();
			break;
		case 11:
			func_860(bParam1, -834.7897f, 165.549f, 67.767f, 326.1774f);
			CUTSCENE::REMOVE_CUTSCENE();
			SYSTEM::WAIT(0);
			__LIB_32__.func_807(&iLocal_56, 1);
			__LIB_41__.func_658(&iLocal_56, 1, 0, 0);
			PED::DELETE_PED(&(iLocal_56[0]));
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(PLAYER::PLAYER_PED_ID(), false);
			STREAMING::REQUEST_MODEL(joaat("IG_JimmyDiSanto"));
			while (!STREAMING::HAS_MODEL_LOADED(joaat("IG_JimmyDiSanto")))
			{
				SYSTEM::WAIT(0);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_342, false))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_342, -1);
				}
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_342, 70f);
				ENTITY::SET_ENTITY_COORDS(iLocal_342, -834.7897f, 165.549f, 67.767f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(iLocal_342, 326.1774f);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_342, 5f);
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_354))
				{
					iLocal_354 = PED::CREATE_PED(26, joaat("IG_JimmyDiSanto"), 723.9294f, -1087.4998f, 21.1693f, 96.2191f, true, true);
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_354, "FAMILY_1_BOAT_PEDS", 0f);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_354, 2, 1, 0, 0);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_354, joaat("PLAYER"));
					__LIB_0__.func_203(&uLocal_446, 2, iLocal_354, "JIMMY", 0, 1);
				}
				if (!PED::IS_PED_INJURED(iLocal_354))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_354);
					PED::SET_PED_INTO_VEHICLE(iLocal_354, iLocal_342, 0);
				}
				VEHICLE::LOWER_CONVERTIBLE_ROOF(iLocal_342, true);
			}
			iLocal_3022 = 11;
			__LIB_6__.func_775(0, -1, 1);
			break;
		case 12:
			STREAMING::LOAD_SCENE(-655.76886f, -563.6648f, 34.35794f);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(500);
			}
			break;
	}
}

void func_855(var uParam0, int iParam1, char* sParam2)//Position - 0x9386E
{
	float fVar0;
	float fVar1;
	int iVar2;
	if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam1, sParam2))
	{
		fVar0 = VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iParam1, sParam2);
		fVar1 = (fVar0 / 800f);
		*(uParam0[799 /*3*/]) = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iParam1, fVar0, sParam2) };
		iVar2 = 0;
		while (iVar2 < *uParam0)
		{
			*(uParam0[iVar2 /*3*/]) = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iParam1, (fVar1 * IntToFloat(iVar2)), sParam2) };
			iVar2++;
		}
	}
}

void func_856()//Position - 0x938D2
{
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Local_202, Local_203, 1);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Local_200, Local_201, 1);
}

void func_860(bool bParam0, struct<3> Param1, float fParam2)//Position - 0x939F6
{
	if (bParam0)
	{
		__LIB_11__.func_728(Param1, fParam2, 1, 0);
	}
	else
	{
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Param1, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fParam2);
	}
}

int func_863(int iParam0, bool bParam1)//Position - 0x93AEB
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
	iVar0 = __LIB_0__.func_388(iParam0);
	iVar1 = __LIB_19__.func_811(iVar0);
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
		func_866(&(Global_22965[iParam0]), iVar0, iVar2, iVar3, bParam1, 0, 0);
	}
	else
	{
		Var4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		MISC::GET_GROUND_Z_FOR_3D_COORD(Var4, &(Var4.f_2), false, false);
		func_796(&(Global_22965[iParam0]), iVar0, Var4, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), bParam1, 0, 0);
	}
	Global_22965.f_7 = iParam0;
	Global_22965.f_39 = 1;
	__LIB_41__.func_658(&Global_22965, 0, 0, 0);
	__LIB_6__.func_846(iParam0);
	return 1;
}

int func_866(int* iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x93CA9
{
	int iVar0;
	if (__LIB_0__.func_317(iParam1))
	{
		iVar0 = __LIB_19__.func_811(iParam1);
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
				__LIB_26__.func_464(*iParam0, iParam1, bParam5);
				PED::SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(*iParam0, false, 0);
				func_820(*iParam0);
				__LIB_32__.func_730(*iParam0, 1, 0);
				__LIB_20__.func_721(*iParam0);
				__LIB_20__.func_720(*iParam0);
				func_798(*iParam0, bParam6);
				__LIB_0__.func_349(*iParam0);
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

void func_869()//Position - 0x93D97
{
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	if (__LIB_20__.func_728() == 0)
	{
		bLocal_3050 = true;
	}
	else
	{
		bLocal_3050 = false;
	}
	if (__LIB_0__.func_294())
	{
		iLocal_3042 = -1;
		iLocal_3022 = 1;
	}
	switch (iLocal_3042)
	{
		case 0:
			if (__LIB_0__.func_504(__LIB_20__.func_728()) == 0)
			{
				if (!Global_96938.f_357)
				{
					STREAMING::REQUEST_ANIM_DICT("MISSFAM2MCS_intp1");
					STREAMING::REQUEST_MODEL(joaat("v_ilev_mm_doorm_l"));
					STREAMING::REQUEST_MODEL(joaat("v_ilev_mm_doorm_r"));
					iLocal_3042 = 1;
				}
				else
				{
					iLocal_3042 = 4;
				}
			}
			else
			{
				SYSTEM::SETTIMERA(0);
				iLocal_3042 = 100;
			}
			break;
		case 1:
			if (STREAMING::HAS_ANIM_DICT_LOADED("MISSFAM2MCS_intp1"))
			{
				iLocal_3042++;
			}
			break;
		case 2:
			PED::SET_FORCE_FOOTSTEP_UPDATE(PLAYER::PLAYER_PED_ID(), true);
			if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-2097039789))
			{
				OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-2097039789, 1f, false, false);
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-2097039789, 1, false, true);
			}
			if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-2127416656))
			{
				OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-2127416656, -1f, false, false);
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-2127416656, 1, false, true);
			}
			ENTITY::CREATE_MODEL_HIDE(-816.72f, 179.1f, 72.83f, 1f, joaat("v_ilev_mm_doorm_l"), true);
			ENTITY::CREATE_MODEL_HIDE(-816.11f, 177.51f, 72.83f, 1f, joaat("v_ilev_mm_doorm_r"), true);
			iLocal_3044 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", false);
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			iLocal_3043 = PED::CREATE_SYNCHRONIZED_SCENE(-817.311f, 179.33f, 71.241f, 0f, 0f, -113f, 2);
			TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_3043, "MISSFAM2MCS_intp1", "FAM_2_INT_P1_MICHAEL", 1000f, -1000f, 0, 0, 1000f, 0);
			CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_3044, iLocal_3043, "FAM_2_INT_P1_CAM", "MISSFAM2MCS_intp1");
			CAM::SET_CAM_ACTIVE(iLocal_3044, true);
			CAM::SET_CAM_CONTROLS_MINI_MAP_HEADING(iLocal_3044, true);
			iLocal_3045 = OBJECT::CREATE_OBJECT(joaat("v_ilev_mm_doorm_l"), -816.72f, 179.1f, 72.83f, true, true, false);
			iLocal_3046 = OBJECT::CREATE_OBJECT(joaat("v_ilev_mm_doorm_r"), -816.11f, 177.51f, 72.83f, true, true, false);
			ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_3045, iLocal_3043, "FAM_2_INT_P1_doorL", "MISSFAM2MCS_intp1", 1000f, -1000f, 0, 1000f);
			ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_3046, iLocal_3043, "FAM_2_INT_P1_doorR", "MISSFAM2MCS_intp1", 1000f, -1000f, 0, 1000f);
			PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_3043, true);
			ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_3045);
			ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_3046);
			MISC::CLEAR_AREA_OF_PROJECTILES(-816.72f, 179.1f, 72.83f, 10f, 0);
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
			{
				if (!__LIB_6__.func_769(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0, 0))
				{
					__LIB_32__.func_796(-843.9858f, 158.65485f, 64.90799f, -777.54004f, 183.18657f, 81.33534f, 34.25f, -858.9615f, 147.4493f, 61.4344f, 357.0481f, 5f, 7f, 8.5f, 1, 1, 1, 0, 0);
					__LIB_36__.func_49(-825.1512f, 178.9821f, 70.3781f, 25f, 0);
					__LIB_41__.func_673(-858.9615f, 147.4493f, 61.4344f, 357.0481f, 0, 145);
				}
			}
			func_59(1, 0, 2000, 1, 1);
			func_40();
			iLocal_3042++;
			break;
		case 3:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_3043))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3043) >= 0.95f)
				{
					PED::SET_FORCE_FOOTSTEP_UPDATE(PLAYER::PLAYER_PED_ID(), false);
					iLocal_3042++;
				}
			}
			break;
		case 4:
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_56[1]))
			{
				if (func_796(&(iLocal_56[1]), 1, -794.9062f, 176.0349f, 71.8348f, 96.2191f, 1, 0, 0))
				{
					func_778(iLocal_56[1], 12, 21, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			if (__LIB_39__.func_910(17, &uLocal_3028, 1, 0, 0, 1, 0) && iLocal_3051 == 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_56[1]))
				{
					iLocal_3042++;
					SYSTEM::SETTIMERA(0);
				}
			}
			else
			{
				if (!iLocal_3040)
				{
					__LIB_32__.func_796(-843.9858f, 158.65485f, 64.90799f, -777.54004f, 183.18657f, 81.33534f, 34.25f, -858.9615f, 147.4493f, 61.4344f, 357.0481f, 5f, 7f, 8.5f, 1, 1, 1, 1, 0);
					__LIB_36__.func_49(-825.1512f, 178.9821f, 70.3781f, 25f, 0);
					__LIB_41__.func_673(-858.9615f, 147.4493f, 61.4344f, 357.0481f, 0, 145);
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !Global_96938.f_357)
					{
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -813.2593f, 179.4029f, 71.1592f, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 117.4587f);
					}
					if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-2097039789))
					{
						OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-2097039789, 0.025f, false, true);
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-2097039789, 4, false, true);
					}
					if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-2127416656))
					{
						OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-2127416656, 0.025f, false, true);
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-2127416656, 4, false, true);
					}
					if (__LIB_0__.func_504(__LIB_20__.func_728()) == 1)
					{
						CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("family_1_int", 254, 8);
					}
					else
					{
						CUTSCENE::REQUEST_CUTSCENE("family_1_int", 8);
					}
					__LIB_0__.func_203(&uLocal_446, 0, 0, "TRACEY", 0, 1);
					__LIB_38__.func_139(&uLocal_446, "FAM1AUD", "FAM1_INT_LI", 9, 0, 0, 0, 0);
					HUD::DISPLAY_RADAR(false);
					iLocal_3040 = 1;
				}
				if (func_872(&uLocal_3052, 5000))
				{
					if (__LIB_20__.func_728() == 0)
					{
						__LIB_38__.func_130("Franklin", joaat("Player_One"), 21);
					}
					__LIB_38__.func_130("Michael", joaat("Player_Zero"), 34);
					iLocal_3051 = 1;
				}
			}
			break;
		case 5:
			if ((iLocal_3040 == 1 && iLocal_3041 == 0) && __LIB_0__.func_504(__LIB_20__.func_728()) == 0)
			{
				__LIB_9__.func_990();
				iLocal_3042++;
				iLocal_3041 = 1;
			}
			break;
		case 6:
			if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				iLocal_3022 = 1;
			}
			break;
		case 100:
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			if ((__LIB_39__.func_910(17, &uLocal_3028, 1, 0, 0, 1, 0) && ENTITY::DOES_ENTITY_EXIST(iLocal_56[0])) && iLocal_3051 == 1)
			{
				iLocal_3042 = 101;
			}
			else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
			}
			if (iLocal_3040)
			{
				if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY() || SYSTEM::TIMERA() > 15000)
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Franklin", PLAYER::PLAYER_PED_ID(), 0);
					__LIB_38__.func_130("Michael", joaat("Player_Zero"), 34);
					iLocal_3051 = 1;
				}
			}
			if (!iLocal_3040)
			{
				CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("family_1_int", 254, 8);
				HUD::DISPLAY_RADAR(false);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
				iLocal_3040 = 1;
			}
			STREAMING::REQUEST_ANIM_DICT("missfam1leadinoutfamily_1_intp1_3");
			func_871(0);
			if ((!ENTITY::DOES_ENTITY_EXIST(iLocal_56[0]) && STREAMING::HAS_ANIM_DICT_LOADED("missfam1leadinoutfamily_1_intp1_3")) && func_870(0))
			{
				func_796(&(iLocal_56[0]), 0, -780.647f, 187.402f, 72.9f, 96.2191f, 1, 0, 0);
				func_778(iLocal_56[0], 12, 34, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				__LIB_32__.func_796(-843.9858f, 158.65485f, 64.90799f, -777.54004f, 183.18657f, 81.33534f, 34.25f, -858.9615f, 147.4493f, 61.4344f, 357.0481f, 5f, 7f, 8.5f, 1, 1, 1, 1, 0);
				__LIB_36__.func_49(-825.1512f, 178.9821f, 70.3781f, 25f, 0);
				__LIB_41__.func_673(-858.9615f, 147.4493f, 61.4344f, 357.0481f, 0, 145);
				PED::SET_PED_PROP_INDEX(iLocal_56[0], 1, 5, 0, false);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_56[0], true);
				TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_56[0], "missfam1leadinoutfamily_1_intp1_3", "base", -780.647f, 187.402f, 72.9f, 0f, 0f, 109.44f, 1000f, -1000f, -1, 1033, 0f, 2, 0);
				iLocal_3048 = OBJECT::CREATE_OBJECT(joaat("p_tumbler_02_s1"), ENTITY::GET_ENTITY_COORDS(iLocal_56[0], true), true, true, false);
				iLocal_3049 = OBJECT::CREATE_OBJECT(joaat("prop_cigar_02"), ENTITY::GET_ENTITY_COORDS(iLocal_56[0], true), true, true, false);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_3048, iLocal_56[0], PED::GET_PED_BONE_INDEX(iLocal_56[0], 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_3049, iLocal_56[0], PED::GET_PED_BONE_INDEX(iLocal_56[0], 60309), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
				AUDIO::STOP_PED_SPEAKING(iLocal_56[0], true);
			}
			break;
		case 101:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_56[0], false))
			{
				if (PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_56[0]))
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -790.2235f, 181.3467f, 71.8353f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 320.3507f);
					__LIB_12__.func_175(0);
					__LIB_32__.func_723(&uLocal_3028, 0, 0, 2000, 1, 1, 0, 1);
					iLocal_3042 = 102;
				}
			}
			break;
		case 102:
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 69 /*INPUT_VEH_ATTACK*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 70 /*INPUT_VEH_ATTACK2*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 257 /*INPUT_ATTACK2*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 99 /*INPUT_VEH_SELECT_NEXT_WEAPON*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 100 /*INPUT_VEH_SELECT_PREV_WEAPON*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 23 /*INPUT_ENTER*/, true);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_56[0]))
			{
				if (!PED::IS_PED_INJURED(iLocal_56[0]))
				{
					fLocal_3047 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_56[0], true), true);
				}
			}
			else
			{
				fLocal_3047 = 999.99f;
			}
			if ((fLocal_3047 > 45f || fLocal_3047 < 8.5f) || CLOCK::GET_CLOCK_HOURS() >= 16)
			{
				iLocal_3022 = 1;
			}
			break;
	}
}

int func_870(int iParam0)//Position - 0x94707
{
	if (__LIB_0__.func_317(iParam0))
	{
		return STREAMING::HAS_MODEL_LOADED(__LIB_19__.func_811(iParam0));
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_871(int iParam0)//Position - 0x94730
{
	if (__LIB_0__.func_317(iParam0))
	{
		STREAMING::REQUEST_MODEL(__LIB_19__.func_811(iParam0));
	}
	else if (iParam0 != 145)
	{
	}
}

bool func_872(var uParam0, int iParam1)//Position - 0x94755
{
	*uParam0 = (*uParam0 + SYSTEM::ROUND((MISC::GET_FRAME_TIME() * 1000f)));
	return (*uParam0 >= iParam1 || CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY());
}

void func_931()//Position - 0x9C671
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_345))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_345, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_345))
			{
				fLocal_392 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_345);
			}
		}
	}
}

void func_933()//Position - 0x9C6B7
{
	HUD::ALLOW_SONAR_BLIPS(true);
	AUDIO::TRIGGER_MUSIC_EVENT("FAM1_FAIL");
	AUDIO::STOP_AUDIO_SCENE("FAM1_RADIO_FADE");
	__LIB_0__.func_402(0, -1);
	__LIB_0__.func_54(1, 1);
	__LIB_37__.func_433(39, 0);
	__LIB_26__.func_264(40, 0);
	__LIB_26__.func_264(41, 0);
	__LIB_26__.func_264(42, 0);
	__LIB_26__.func_264(43, 0);
	__LIB_26__.func_264(44, 0);
	__LIB_9__.func_981(&uLocal_422, 0, 0);
	MISC::UNLOAD_ALL_CLOUD_HATS();
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	func_802(0, bLocal_303);
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		PED::SET_PED_IS_IGNORED_BY_AUTO_OPEN_DOORS(PLAYER::PLAYER_PED_ID(), false);
	}
	func_59(0, 0, 2000, 1, 1);
	__LIB_6__.func_849(0);
	PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
	HUD::SET_GPS_MULTI_ROUTE_RENDER(false);
	PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 170, false);
	func_60(0, 1);
	__LIB_0__.func_555();
	AUDIO::STOP_AUDIO_SCENE("FAM1_HIGHWAY_CHASE");
	STREAMING::SET_REDUCE_VEHICLE_MODEL_BUDGET(false);
	STREAMING::SET_REDUCE_PED_MODEL_BUDGET(false);
	__LIB_11__.func_182(0);
	STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_342, false))
	{
		VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(iLocal_342, 4, true);
	}
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("sentinel2"), false);
	PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), true);
	GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
	MISC::SET_TIME_SCALE(1f);
	VEHICLE::DELETE_VEHICLE(&iLocal_54);
	VEHICLE::DELETE_VEHICLE(&iLocal_55);
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_345);
		VEHICLE::DELETE_VEHICLE(&iLocal_346);
		OBJECT::DELETE_OBJECT(&uLocal_355);
		PED::DELETE_PED(&iLocal_350);
		PED::DELETE_PED(&iLocal_351);
		PED::DELETE_PED(&iLocal_352);
		PED::DELETE_PED(&iLocal_353);
		PED::DELETE_PED(&(iLocal_56[1]));
		PED::DELETE_PED(&iLocal_354);
	}
}

void func_935()//Position - 0x9C83C
{
	int iVar0;
	if (SCRIPT::HAS_SCRIPT_LOADED("buddyDeathResponse"))
	{
		SYSTEM::START_NEW_SCRIPT("buddyDeathResponse", 1424);
	}
	if (Global_113386.f_9085 || __LIB_0__.func_2(0))
	{
		if (!__LIB_0__.func_134())
		{
			iVar0 = __LIB_0__.func_323();
			if (iVar0 != -1)
			{
				if (!func_11(iVar0))
				{
					return;
				}
				MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			__LIB_26__.func_546();
		}
	}
}

