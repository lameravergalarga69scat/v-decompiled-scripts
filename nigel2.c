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
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = -1;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 1000;
	var uLocal_30 = 1000;
	var uLocal_31 = 0;
	char* sLocal_32 = NULL;
	float fLocal_33 = 0f;
	struct<3> Local_34 = { 0, 0, 0 } ;
	float fLocal_35 = 0f;
	float fLocal_36 = 0f;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	float fLocal_40 = 0f;
	float fLocal_41 = 0f;
	float fLocal_42 = 0f;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	var uLocal_47 = 10;
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
	int iLocal_92 = 0;
	int iLocal_93 = 0;
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
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	bool bLocal_120 = 0;
	bool bLocal_121 = 0;
	bool bLocal_122 = 0;
	bool bLocal_123 = 0;
	bool bLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	bool bLocal_127 = 0;
	bool bLocal_128 = 0;
	int iLocal_129 = 0;
	bool bLocal_130 = 0;
	bool bLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	bool bLocal_136 = 0;
	bool bLocal_137 = 0;
	bool bLocal_138 = 0;
	int iLocal_139 = 0;
	bool bLocal_140 = 0;
	int iLocal_141 = 0;
	bool bLocal_142 = 0;
	bool bLocal_143 = 0;
	bool bLocal_144 = 0;
	bool bLocal_145 = 0;
	bool bLocal_146 = 0;
	bool bLocal_147 = 0;
	bool bLocal_148 = 0;
	bool bLocal_149 = 0;
	bool bLocal_150 = 0;
	bool bLocal_151 = 0;
	float fLocal_152[85] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_153[85] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_154[85] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_155[85] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_156[85] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_157 = 0f;
	float fLocal_158 = 0f;
	float fLocal_159 = 0f;
	float fLocal_160 = 0f;
	float fLocal_161[70] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_162[70] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_163[70] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_164[70] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_165[70] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_166[70] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_167[70] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_168[70] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_169[70] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_170[70] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_171 = 0f;
	float fLocal_172 = 0f;
	float fLocal_173 = 0f;
	float fLocal_174 = 0f;
	float fLocal_175 = 0f;
	float fLocal_176 = 0f;
	float fLocal_177 = 0f;
	float fLocal_178 = 0f;
	float fLocal_179 = 0f;
	float fLocal_180 = 0f;
	float fLocal_181 = 0f;
	float fLocal_182 = 0f;
	float fLocal_183 = 0f;
	float fLocal_184 = 0f;
	float fLocal_185 = 0f;
	float fLocal_186 = 0f;
	float fLocal_187 = 0f;
	float fLocal_188 = 0f;
	float fLocal_189 = 0f;
	float fLocal_190 = 0f;
	float fLocal_191 = 0f;
	int iLocal_192[85] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_193[85] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_194[85] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_195[70] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_196[70] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_197[70] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_198[70] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_199 = 0;
	int iLocal_200 = 0;
	int iLocal_201 = 0;
	int iLocal_202 = 0;
	int iLocal_203 = 0;
	int iLocal_204 = 0;
	int iLocal_205 = 0;
	int iLocal_206 = 0;
	int iLocal_207 = 0;
	int iLocal_208 = 0;
	int iLocal_209 = 0;
	int iLocal_210 = 0;
	int iLocal_211 = 0;
	int iLocal_212 = 0;
	int iLocal_213 = 0;
	int iLocal_214 = 0;
	int iLocal_215 = 0;
	struct<3> Local_216[85];
	struct<3> Local_217[70];
	struct<3> Local_218[70];
	struct<3> Local_219 = { 0, 0, 0 } ;
	struct<3> Local_220 = { 0, 0, 0 } ;
	struct<3> Local_221 = { 0, 0, 0 } ;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	struct<3> Local_228 = { 0, 0, 0 } ;
	struct<3> Local_229 = { 0, 0, 0 } ;
	struct<3> Local_230 = { 0, 0, 0 } ;
	struct<3> Local_231 = { 0, 0, 0 } ;
	char cLocal_232[64] = "";
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	int iLocal_241 = 0;
	int iLocal_242[85] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_243[70] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_244[70] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_245 = 0;
	int iLocal_246 = 0;
	int iLocal_247 = 0;
	int iLocal_248[85] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_249[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_250[70] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_251[70] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_252[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_253 = 0;
	int iLocal_254 = 0;
	int iLocal_255 = 0;
	var uLocal_256 = 15;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	int iLocal_272 = 0;
	int iLocal_273 = 0;
	int iLocal_274 = 0;
	struct<61> Local_275 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_276 = 0;
	int iLocal_277 = 0;
	int iLocal_278[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_279[3] = { 0, 0, 0 };
	int iLocal_280 = 0;
	int iLocal_281[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_282 = 0;
	int iLocal_283[2] = { 0, 0 };
	int iLocal_284 = 0;
	int iLocal_285 = 0;
	int iLocal_286 = 0;
	int iLocal_287 = 0;
	int iLocal_288 = 0;
	int iLocal_289 = 0;
	int iLocal_290 = 0;
	int iLocal_291 = 0;
	int iLocal_292 = 0;
	bool bLocal_293 = 0;
	int iLocal_294 = 0;
	bool bLocal_295 = 0;
	int iLocal_296 = 0;
	int iLocal_297 = 0;
	bool bLocal_298 = 0;
	int iLocal_299 = 0;
	bool bLocal_300 = 0;
	bool bLocal_301 = 0;
	bool bLocal_302 = 0;
	int iLocal_303[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_304 = 0;
	bool bLocal_305 = 0;
	bool bLocal_306 = 0;
	int iLocal_307 = 0;
	int iLocal_308 = 0;
	int iLocal_309 = 0;
	int iLocal_310 = 0;
	int iLocal_311 = 0;
	int iLocal_312 = 0;
	int iLocal_313 = 0;
	int iLocal_314 = 0;
	bool bLocal_315 = 0;
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
	int iLocal_329 = 0;
	int iLocal_330 = 0;
	int iLocal_331 = 0;
	int iLocal_332 = 0;
	int iLocal_333 = 0;
	int iLocal_334 = 0;
	int iLocal_335 = 0;
	int iLocal_336 = 0;
	int iLocal_337 = 0;
	int iLocal_338 = 0;
	float fLocal_339 = 0f;
	float fLocal_340 = 0f;
	float fLocal_341 = 0f;
	float fLocal_342 = 0f;
	float fLocal_343 = 0f;
	float fLocal_344 = 0f;
	int iLocal_345 = 0;
	int iLocal_346 = 0;
	int iLocal_347 = 0;
	int iLocal_348 = 0;
	struct<8> Local_349 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_350 = 0;
	int iLocal_351 = 0;
	int iLocal_352 = 0;
	int iLocal_353 = 0;
	int iLocal_354 = 0;
	int iLocal_355 = 0;
	int iLocal_356 = 0;
	int iLocal_357 = 0;
	int iLocal_358[5] = { 0, 0, 0, 0, 0 };
	char* sLocal_359 = NULL;
	char* sLocal_360 = NULL;
	char* sLocal_361 = NULL;
	char* sLocal_362 = NULL;
	char* sLocal_363 = NULL;
	char* sLocal_364 = NULL;
	char* sLocal_365 = NULL;
	char* sLocal_366 = NULL;
	var uLocal_367 = 16;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
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
	struct<7> Local_532 = { 0, 0, 0, 0, 0, 0, 0 } ;
	struct<7> Local_533 = { 0, 0, 0, 0, 0, 0, 0 } ;
	struct<7> Local_534 = { 0, 0, 0, 0, 0, 0, 0 } ;
	struct<7> Local_535 = { 0, 0, 0, 0, 0, 0, 0 } ;
	struct<7> Local_536 = { 0, 0, 0, 0, 0, 0, 0 } ;
	struct<2> Local_537 = { 0, 0 } ;
	struct<2> Local_538[9];
	struct<2> Local_539[4];
	struct<2> Local_540[3];
	struct<2> Local_541 = { 0, 0 } ;
	int iLocal_542 = 0;
	struct<3> Local_543 = { 0, 0, 0 } ;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	struct<3> Local_547 = { 0, 0, 0 } ;
	struct<3> Local_548 = { 0, 0, 0 } ;
	struct<3> Local_549 = { 0, 0, 0 } ;
	struct<3> Local_550 = { 0, 0, 0 } ;
	struct<3> Local_551 = { 0, 0, 0 } ;
	struct<61> Local_552 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	sLocal_32 = "NULL";
	fLocal_33 = 0f;
	fLocal_35 = -0.0375f;
	fLocal_36 = 0.17f;
	fLocal_40 = 80f;
	fLocal_41 = 140f;
	fLocal_42 = 180f;
	iLocal_45 = 3;
	uLocal_90 = __LIB_2__.func_108(64);
	uLocal_91 = __LIB_2__.func_108(63);
	iLocal_92 = joaat("U_M_M_Aldinapoli");
	iLocal_93 = joaat("premier");
	iLocal_109 = 1;
	iLocal_110 = 65;
	iLocal_111 = 49;
	iLocal_112 = 64;
	iLocal_116 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	iLocal_117 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	bLocal_121 = true;
	bLocal_128 = true;
	bLocal_150 = true;
	fLocal_171 = 120f;
	fLocal_172 = 0f;
	fLocal_174 = 1f;
	fLocal_175 = 0f;
	fLocal_176 = 1f;
	fLocal_177 = 30f;
	fLocal_179 = 1f;
	fLocal_180 = 5f;
	fLocal_181 = 1f;
	fLocal_182 = 1f;
	fLocal_183 = 100f;
	fLocal_184 = 100f;
	fLocal_185 = 0f;
	fLocal_186 = 7000f;
	fLocal_187 = 0f;
	fLocal_188 = 0f;
	fLocal_189 = 0.3f;
	fLocal_190 = 0.5f;
	fLocal_191 = 50f;
	iLocal_202 = -1;
	iLocal_210 = -1;
	iLocal_211 = -1;
	bLocal_276 = true;
	sLocal_359 = "Nigel2U";
	sLocal_360 = "Nigel2Outro";
	sLocal_361 = "Mrs_Thornhill";
	sLocal_362 = "Nigel";
	sLocal_363 = "Trevor";
	sLocal_364 = __LIB_30__.func_423();
	sLocal_365 = "Showroom_Car";
	sLocal_366 = "EXL_2_abandoned_car";
	StringCopy(&Local_543, "NMT_2_MCS_2", 24);
	Local_275 = { ScriptParam_552 };
	__LIB_20__.func_264(&Local_275);
	MISC::SET_MISSION_FLAG(true);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		__LIB_0__.func_135("Force cleanup [TERMINATING]");
		__LIB_38__.func_39(1);
		func_565();
	}
	func_553();
	if (__LIB_0__.func_294())
	{
		__LIB_10__.func_700(&Local_275, 0, 1);
		iVar0 = __LIB_0__.func_315();
		if (Global_94618 == 1)
		{
			iVar0++;
		}
		switch (iVar0)
		{
			case 0:
				__LIB_0__.func_370(-1309.0155f, -641.8671f, 25.5017f, 242.3463f, 0, 0);
				iLocal_283[0] = 1;
				func_539(1, 0);
				break;
			case 1:
				__LIB_0__.func_370(391.08f, -615.87f, 28.33f, 333.66f, 0, 0);
				func_539(3, 0);
				break;
			default:
				break;
			}
	}
	while (true)
	{
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("SF_VSADN", 0);
		__LIB_40__.func_687(Local_275.f_9, 0, 0, 0, 0, 0);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			func_520();
			Local_549 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
			PLAYER::SET_ALL_NEUTRAL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
			switch (iLocal_272)
			{
				case 0:
					func_438();
					break;
				case 1:
					func_386();
					break;
				case 2:
					func_303();
					break;
				case 3:
					func_295();
					break;
				case 4:
					func_96();
					break;
				case 5:
					func_50();
					break;
				case 6:
					break;
				case 7:
					break;
				case 8:
					break;
				case 9:
					break;
				case 10:
					break;
				}
		}
		if (bLocal_276 == 0)
		{
			func_1(iLocal_273);
		}
		SYSTEM::WAIT(0);
	}
}

void func_1(int iParam0)//Position - 0x2F7
{
	int iVar0;
	if (iLocal_272 == iParam0)
	{
		if (__LIB_0__.func_295())
		{
			iVar0 = 0;
			if (iLocal_272 == 2 || iLocal_272 == 3)
			{
				iVar0 = Local_535.f_0;
			}
			__LIB_6__.func_775(iVar0, -1, 0);
		}
		func_37(iLocal_272);
		func_35(iLocal_272);
		if (iLocal_272 == 3)
		{
			__LIB_41__.func_436(1, 0, 1);
		}
		else if (iLocal_272 == 1)
		{
			__LIB_41__.func_436(0, 1, 1);
		}
		else
		{
			__LIB_41__.func_436(1, 1, 1);
		}
		bLocal_276 = true;
		iLocal_277 = 0;
		if (iLocal_272 == 4)
		{
			__LIB_0__.func_84(500, 1);
		}
	}
	else
	{
		func_2();
	}
}

void func_2()//Position - 0x386
{
	struct<3> Var0;
	if (__LIB_1__.func_197(PLAYER::PLAYER_PED_ID()))
	{
		__LIB_0__.func_296();
		HUD::CLEAR_PRINTS();
		switch (iLocal_272)
		{
			case 0:
				if (iLocal_274 == 1)
				{
					if (CUTSCENE::IS_CUTSCENE_PLAYING())
					{
						CUTSCENE::STOP_CUTSCENE(false);
					}
				}
				break;
			case 1:
				if (iLocal_274 == 1)
				{
					bLocal_298 = true;
					func_16(Local_533.f_0, &Local_535, 0);
					func_16(Local_532.f_0, &Local_535, 2);
					func_16(Local_534.f_0, &Local_536, -1);
					if (__LIB_1__.func_183(Local_536.f_0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_536.f_0))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_536.f_0);
						}
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_536.f_0, 393.4298f, -621.3337f, 28.4891f, false, false, true);
						ENTITY::SET_ENTITY_QUATERNION(Local_536.f_0, -0.0081f, -0.0061f, 0.7994f, -0.6007f);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_536.f_0, 5f);
					}
					STREAMING::REQUEST_ANIM_DICT("rcmnigel2");
					while (!STREAMING::HAS_ANIM_DICT_LOADED("rcmnigel2"))
					{
						SYSTEM::WAIT(0);
					}
					func_14(1, 0);
					MISC::CLEAR_AREA_OF_VEHICLES(393.38f, -617.53f, 27.91f, 50f, false, false, false, false, false, false, 0);
					if (!__LIB_0__.func_295())
					{
						func_16(PLAYER::PLAYER_PED_ID(), &Local_535, -1);
						func_13(&Local_535, 364.7079f, -608.3558f, 27.7364f, 246.4916f, 0);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
						if (iLocal_277 == 0)
						{
							if (iLocal_273 == 2)
							{
								if (__LIB_0__.func_121(PLAYER::PLAYER_PED_ID()))
								{
									__LIB_20__.func_665(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 25f, 13, 5000, 0, 0);
									iLocal_277 = 1;
								}
							}
						}
					}
					VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
					MISC::CLEAR_AREA_OF_VEHICLES(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 150f, false, false, false, false, false, false, 0);
					iLocal_274 = 2;
				}
				break;
			case 2:
				if (iLocal_274 == 1)
				{
					func_16(Local_533.f_0, &Local_535, 0);
					func_16(Local_532.f_0, &Local_535, 2);
					if (!__LIB_0__.func_295())
					{
						func_16(PLAYER::PLAYER_PED_ID(), &Local_535, -1);
						Var0 = { 391.08f, -615.87f, 28.33f };
						func_13(&Local_535, Var0, 333.66f, 0);
						if (iLocal_277 == 0)
						{
							if (iLocal_273 == 3)
							{
								if (__LIB_0__.func_121(PLAYER::PLAYER_PED_ID()))
								{
									__LIB_20__.func_665(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 25f, 13, 5000, 0, 0);
									iLocal_277 = 1;
								}
							}
						}
					}
					iLocal_274 = 2;
				}
				break;
			case 3:
				if (iLocal_274 == 1)
				{
					if (CUTSCENE::IS_CUTSCENE_PLAYING())
					{
						CUTSCENE::STOP_CUTSCENE(false);
					}
				}
				break;
			default:
				break;
			}
	}
}

void func_13(int iParam0, struct<3> Param1, float fParam2, bool bParam3)//Position - 0x84E
{
	if (__LIB_0__.func_121(*iParam0))
	{
		if (bParam3)
		{
			Param1.f_2 = -200f;
		}
		ENTITY::SET_ENTITY_COORDS(*iParam0, Param1, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(*iParam0, fParam2);
	}
}

void func_14(bool bParam0, bool bParam1)//Position - 0x886
{
	float fVar0;
	float fVar1;
	if (!ENTITY::DOES_ENTITY_EXIST(Local_541.f_0))
	{
		fVar0 = 115000f;
		fVar1 = 116821f;
		if (bParam1)
		{
			if (fLocal_341 < (fVar0 - 3000f))
			{
				return;
			}
		}
		STREAMING::REQUEST_MODEL(Local_541.f_1);
		if (bParam0)
		{
			while (!STREAMING::HAS_MODEL_LOADED(Local_541.f_1))
			{
				SYSTEM::WAIT(0);
			}
		}
		if (bParam1)
		{
			if (fLocal_341 < fVar0 || fLocal_341 > fVar1)
			{
				return;
			}
		}
		if (STREAMING::HAS_MODEL_LOADED(Local_541.f_1))
		{
			Local_541.f_0 = VEHICLE::CREATE_VEHICLE(Local_541.f_1, 419.3891f, -604.8867f, 27.7732f, 0f, true, true, false);
		}
		if (__LIB_1__.func_183(Local_541.f_0))
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_541.f_1);
			ENTITY::SET_ENTITY_QUATERNION(Local_541.f_0, 0f, 0.0006f, 0.9996f, -0.0275f);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_541.f_0, 1);
		}
	}
}

void func_16(int iParam0, int iParam1, int iParam2)//Position - 0x985
{
	int iVar0;
	if (__LIB_0__.func_121(iParam0) && __LIB_1__.func_183(*iParam1))
	{
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(*iParam1, iParam2, false))
		{
			__LIB_7__.func_421(iParam0, *iParam1, iParam2, 0);
		}
		else
		{
			iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*iParam1, iParam2, false);
			if (iVar0 != iParam0)
			{
				if (__LIB_0__.func_121(iVar0))
				{
					__LIB_37__.func_482(iVar0);
					func_16(iParam0, iParam1, iParam2);
				}
			}
		}
	}
}

void func_35(int iParam0)//Position - 0xF2A
{
	switch (iParam0)
	{
		case 2:
			if (iLocal_330 == 0)
			{
				while (!__LIB_30__.func_421("NIGEL2_START", 0))
				{
					SYSTEM::WAIT(0);
				}
				iLocal_330++;
			}
			if (iLocal_330 == 1)
			{
				while (!__LIB_30__.func_421("NIGEL2_CAR", 0))
				{
					SYSTEM::WAIT(0);
				}
				iLocal_330++;
			}
			if (iLocal_330 == 2)
			{
				while (!__LIB_30__.func_421("NIGEL2_JUMP", 1))
				{
					SYSTEM::WAIT(0);
				}
				iLocal_330++;
			}
			break;
	}
}

void func_37(int iParam0)//Position - 0xFD4
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		switch (iParam0)
		{
			case 1:
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(22f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				break;
			case 3:
				if (iLocal_273 == 3)
				{
					func_16(PLAYER::PLAYER_PED_ID(), &Local_535, -1);
					func_13(&Local_535, 391.08f, -615.87f, 28.33f, 333.66f, 0);
					__LIB_39__.func_485(&Local_543);
					func_45();
					while (!__LIB_18__.func_170(1, 1093140480, 0))
					{
						__LIB_39__.func_485(&Local_543);
						func_45();
						SYSTEM::WAIT(0);
					}
				}
				break;
			}
	}
}

void func_45()//Position - 0x13D1
{
	if (__LIB_0__.func_121(Local_533.f_0))
	{
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED(sLocal_362, Local_533.f_0, 0);
		}
	}
	if (__LIB_0__.func_121(Local_532.f_0))
	{
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED(sLocal_361, Local_532.f_0, 0);
		}
	}
	if (__LIB_0__.func_121(Local_534.f_0))
	{
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED(sLocal_364, Local_534.f_0, 0);
		}
	}
}

void func_50()//Position - 0x1546
{
	char* sVar0;
	int iVar1;
	sVar0 = 0;
	switch (iLocal_274)
	{
		case 0:
			if (__LIB_30__.func_421("NIGEL2_MISSION_FAIL", 0))
			{
				HUD::CLEAR_PRINTS();
				HUD::CLEAR_HELP(true);
				if (__LIB_0__.func_75())
				{
					__LIB_0__.func_296();
				}
				func_94();
				if (__LIB_1__.func_183(Local_535.f_0))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_535.f_0, false) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
					{
						VEHICLE::BRING_VEHICLE_TO_HALT(Local_535.f_0, 6f, 2, false);
					}
				}
				if (__LIB_1__.func_197(Local_533.f_0))
				{
					if (PED::IS_PED_IN_GROUP(Local_533.f_0))
					{
						PED::REMOVE_PED_FROM_GROUP(Local_533.f_0);
					}
					TASK::CLEAR_PED_TASKS(Local_533.f_0);
					if ((iLocal_321 == 7 || iLocal_321 == 6) || iLocal_321 == 4)
					{
						PED::SET_PED_FLEE_ATTRIBUTES(Local_533.f_0, 2, false);
						TASK::OPEN_SEQUENCE_TASK(&iVar1);
						if (PED::IS_PED_IN_ANY_VEHICLE(Local_533.f_0, false))
						{
							TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 320);
						}
						TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 300f, -1, false, false);
						TASK::CLOSE_SEQUENCE_TASK(iVar1);
						TASK::TASK_PERFORM_SEQUENCE(Local_533.f_0, iVar1);
						TASK::CLEAR_SEQUENCE_TASK(&iVar1);
						PED::SET_PED_KEEP_TASK(Local_533.f_0, true);
					}
				}
				if (__LIB_1__.func_197(Local_532.f_0))
				{
					if (PED::IS_PED_IN_GROUP(Local_532.f_0))
					{
						PED::REMOVE_PED_FROM_GROUP(Local_532.f_0);
					}
					TASK::CLEAR_PED_TASKS(Local_532.f_0);
					if ((iLocal_321 == 5 || iLocal_321 == 4) || iLocal_321 == 6)
					{
						PED::SET_PED_FLEE_ATTRIBUTES(Local_532.f_0, 2, false);
						if (PED::IS_PED_IN_ANY_VEHICLE(Local_532.f_0, false))
						{
							TASK::OPEN_SEQUENCE_TASK(&iVar1);
							TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 320);
							TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 300f, -1, false, false);
							TASK::CLOSE_SEQUENCE_TASK(iVar1);
							TASK::TASK_PERFORM_SEQUENCE(Local_532.f_0, iVar1);
							TASK::CLEAR_SEQUENCE_TASK(&iVar1);
							PED::SET_PED_KEEP_TASK(Local_532.f_0, true);
						}
						else
						{
							TASK::TASK_SMART_FLEE_PED(Local_532.f_0, PLAYER::PLAYER_PED_ID(), 300f, -1, false, false);
							PED::SET_PED_KEEP_TASK(Local_532.f_0, true);
						}
					}
				}
				if (__LIB_1__.func_183(Local_536.f_0))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_536.f_0))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_536.f_0);
					}
					if (!bLocal_300)
					{
						func_68(0, 1);
					}
				}
				if (__LIB_1__.func_197(Local_534.f_0))
				{
					if (bLocal_300)
					{
						PED::SET_PED_KEEP_TASK(Local_534.f_0, true);
					}
					else
					{
						TASK::CLEAR_PED_TASKS(Local_534.f_0);
						PED::SET_PED_FLEE_ATTRIBUTES(Local_534.f_0, 2, true);
						PED::SET_PED_FLEE_ATTRIBUTES(Local_534.f_0, 8, false);
						PED::SET_PED_FLEE_ATTRIBUTES(Local_534.f_0, 1, false);
						PED::SET_PED_FLEE_ATTRIBUTES(Local_534.f_0, 32, false);
						PED::SET_PED_FLEE_ATTRIBUTES(Local_534.f_0, 64, false);
						if ((__LIB_1__.func_183(Local_536.f_0) && PED::IS_PED_IN_VEHICLE(Local_534.f_0, Local_536.f_0, false)) && __LIB_1__.func_183(Local_535.f_0))
						{
							TASK::OPEN_SEQUENCE_TASK(&iVar1);
							TASK::TASK_VEHICLE_MISSION_PED_TARGET(0, Local_536.f_0, PLAYER::PLAYER_PED_ID(), 8, 80f, 786468, 500f, -1f, true);
							TASK::CLOSE_SEQUENCE_TASK(iVar1);
							TASK::TASK_PERFORM_SEQUENCE(Local_534.f_0, iVar1);
							TASK::CLEAR_SEQUENCE_TASK(&iVar1);
						}
						else
						{
							TASK::OPEN_SEQUENCE_TASK(&iVar1);
							TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 300f, -1, false, false);
							TASK::CLOSE_SEQUENCE_TASK(iVar1);
							TASK::TASK_PERFORM_SEQUENCE(Local_534.f_0, iVar1);
							TASK::CLEAR_SEQUENCE_TASK(&iVar1);
						}
						PED::SET_PED_KEEP_TASK(Local_534.f_0, true);
					}
				}
				switch (iLocal_321)
				{
					case 1:
						sVar0 = "NIGEL2_F1";
						break;
					case 2:
						sVar0 = "NIGEL2_F2";
						break;
					case 3:
						sVar0 = "NIGEL2_F3";
						break;
					case 4:
						sVar0 = "NIGEL2_F7";
						break;
					case 5:
						sVar0 = "NIGEL2_F4";
						break;
					case 6:
						sVar0 = "NIGEL2_F8";
						break;
					case 7:
						sVar0 = "NIGEL2_F5";
						break;
					case 8:
						sVar0 = "NIGEL2_F6";
						break;
					case 9:
						sVar0 = "NIGEL2_F10";
						break;
					case 10:
						sVar0 = "NIGEL2_F9";
						break;
					default:
						break;
				}
				if (iLocal_321 == 0)
				{
					__LIB_38__.func_39(1);
				}
				else
				{
					__LIB_39__.func_861(sVar0, 1);
				}
				iLocal_274 = 1;
			}
			break;
		case 1:
			if (__LIB_0__.func_204())
			{
				if (func_63(PLAYER::PLAYER_PED_ID()))
				{
					__LIB_0__.func_428(279.4137f, -585.8815f, 42.3102f, 48.8028f);
					__LIB_20__.func_165(276.27f, -584f, 42.73f, 337.4f);
				}
				func_51(1);
				func_565();
			}
			break;
	}
}

void func_51(bool bParam0)//Position - 0x190F
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		__LIB_20__.func_241(&(Local_538[iVar0 /*2*/]), bParam0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		__LIB_20__.func_241(&(Local_539[iVar0 /*2*/]), bParam0);
		iVar0++;
	}
	if (__LIB_0__.func_121(Local_534.f_0))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_534.f_0, false, 1);
		if (!PED::IS_PED_INJURED(Local_534.f_0))
		{
			PED::SET_PED_KEEP_TASK(Local_534.f_0, true);
		}
	}
	PED::SET_PED_MODEL_IS_SUPPRESSED(Local_534.f_1, false);
	__LIB_20__.func_241(&Local_534, bParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(Local_532.f_1, false);
	if (__LIB_1__.func_197(Local_532.f_0))
	{
		PED::SET_PED_KEEP_TASK(Local_532.f_0, true);
	}
	__LIB_20__.func_241(&Local_532, bParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(Local_533.f_1, false);
	if (__LIB_1__.func_197(Local_533.f_0))
	{
		PED::SET_PED_KEEP_TASK(Local_533.f_0, true);
	}
	__LIB_20__.func_241(&Local_533, bParam0);
	__LIB_0__.func_123(&Local_349);
	if (__LIB_1__.func_183(Local_535.f_0))
	{
		VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(Local_535.f_0, true);
		VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_535.f_0, true);
		VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(Local_535.f_0, true);
		if (iLocal_318)
		{
			VEHICLE::SET_FORCE_HD_VEHICLE(Local_535.f_0, false);
			iLocal_318 = 0;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_535.f_0))
	{
		VEHICLE::REMOVE_VEHICLE_UPSIDEDOWN_CHECK(Local_535.f_0);
	}
	__LIB_32__.func_566(&Local_535, bParam0);
	if (__LIB_1__.func_183(Local_536.f_0))
	{
		ENTITY::SET_ENTITY_PROOFS(Local_536.f_0, false, false, false, false, false, false, false, false);
		VEHICLE::SET_DISABLE_VEHICLE_ENGINE_FIRES(Local_536.f_0, false);
		VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(Local_536.f_0, true);
		VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_536.f_0, true);
		VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(Local_536.f_0, true);
		if (bLocal_300)
		{
			VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_536.f_0, 0f);
		}
	}
	__LIB_32__.func_566(&Local_536, bParam0);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		__LIB_32__.func_566(&(Local_540[iVar0 /*2*/]), bParam0);
		iVar0++;
	}
	__LIB_32__.func_566(&Local_541, bParam0);
	__LIB_20__.func_241(&Local_537, bParam0);
}

int func_63(int iParam0)//Position - 0x1D1F
{
	int iVar0;
	struct<3> Var1;
	if (!INTERIOR::IS_VALID_INTERIOR(iLocal_337))
	{
		return 0;
	}
	if (__LIB_0__.func_121(iParam0))
	{
		iVar0 = INTERIOR::GET_KEY_FOR_ENTITY_IN_ROOM(iParam0);
		if (func_64(iVar0))
		{
			return 1;
		}
	}
	else
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
		if (INTERIOR::GET_INTERIOR_AT_COORDS(Var1) == iLocal_337)
		{
			return 1;
		}
	}
	return 0;
}

int func_64(int iParam0)//Position - 0x1D75
{
	if ((((iParam0 == MISC::GET_HASH_KEY("v_40_Room1") || iParam0 == MISC::GET_HASH_KEY("v_40_Room2")) || iParam0 == MISC::GET_HASH_KEY("v_40_Room3")) || iParam0 == MISC::GET_HASH_KEY("v_40_Room4")) || iParam0 == MISC::GET_HASH_KEY("V_40_Room005"))
	{
		return 1;
	}
	return 0;
}

void func_68(bool bParam0, bool bParam1)//Position - 0x1E55
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_232))
	{
		iLocal_134 = 0;
		__LIB_11__.func_126();
		PED::REMOVE_RELATIONSHIP_GROUP(iLocal_241);
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(-9999f, -9999f, -9999f, 9999f, 9999f, 9999f, 1);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
			PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), true);
			PED::SET_CREATE_RANDOM_COPS(true);
		}
		if (bLocal_150)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_92());
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_11__.func_125());
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_11__.func_124());
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_11__.func_123());
		if (!CAM::IS_SCREEN_FADED_OUT() && !bParam0)
		{
			func_88();
			func_87();
			func_84();
		}
		else
		{
			func_80();
			func_79();
		}
		if (bParam1)
		{
			__LIB_32__.func_762(0);
		}
	}
}

void func_79()//Position - 0x24D7
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 85)
	{
		iLocal_248[iVar0] = 0;
		Local_216[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_152[iVar0] = 0f;
		fLocal_153[iVar0] = 0f;
		fLocal_154[iVar0] = 0f;
		fLocal_155[iVar0] = 0f;
		iLocal_192[iVar0] = 0;
		fLocal_156[iVar0] = 0f;
		iLocal_193[iVar0] = 0;
		iLocal_242[iVar0] = 0;
		iLocal_194[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		iLocal_249[iVar0] = 0;
		iVar0++;
	}
	iLocal_199 = 0;
	iVar0 = 0;
	while (iVar0 < 70)
	{
		iLocal_250[iVar0] = 0;
		Local_217[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_167[iVar0] = 0f;
		fLocal_168[iVar0] = 0f;
		fLocal_169[iVar0] = 0f;
		fLocal_170[iVar0] = 0f;
		iLocal_198[iVar0] = 0;
		iLocal_243[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iLocal_252[iVar0] = 0;
		iVar0++;
	}
	iLocal_201 = 0;
	iVar0 = 0;
	while (iVar0 < 70)
	{
		iLocal_251[iVar0] = 0;
		Local_218[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_161[iVar0] = 0f;
		fLocal_162[iVar0] = 0f;
		fLocal_163[iVar0] = 0f;
		fLocal_164[iVar0] = 0f;
		iLocal_195[iVar0] = 0;
		fLocal_165[iVar0] = 0f;
		iLocal_196[iVar0] = 0;
		iLocal_244[iVar0] = 0;
		iLocal_197[iVar0] = 0;
		iVar0++;
	}
	iLocal_200 = 0;
	iLocal_203 = 0;
	iLocal_206 = 0;
	iLocal_207 = 0;
	iLocal_208 = 0;
}

void func_80()//Position - 0x2664
{
	func_83();
	func_82();
	func_81();
}

void func_81()//Position - 0x2678
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 70)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_251[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_251[iVar0], false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_251[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_251[iVar0]);
				}
				iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_251[iVar0], -1, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != PLAYER::PLAYER_PED_ID())
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
					{
						PED::DELETE_PED(&iVar1);
					}
				}
			}
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_251[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_251[iVar0]));
			}
		}
		iLocal_196[iVar0] = 0;
		if (!bLocal_130 && !bLocal_143)
		{
			if (iLocal_195[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_195[iVar0], &cLocal_232);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 70)
	{
		if (!iLocal_244[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_244[iVar0]);
		}
		iVar0++;
	}
}

void func_82()//Position - 0x276F
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 70)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_250[iVar0]))
		{
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_250[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_250[iVar0]));
			}
		}
		iLocal_198[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 70)
	{
		if (!iLocal_243[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_243[iVar0]);
		}
		iVar0++;
	}
	iLocal_204 = 0;
	iLocal_201 = 0;
}

void func_83()//Position - 0x27EC
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 85)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_248[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_248[iVar0], false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_248[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_248[iVar0]);
				}
				iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_248[iVar0], -1, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != PLAYER::PLAYER_PED_ID())
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
					{
						PED::DELETE_PED(&iVar1);
					}
				}
			}
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_248[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_248[iVar0]));
			}
		}
		if (!bLocal_130 && !bLocal_143)
		{
			if (iLocal_192[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_192[iVar0], &cLocal_232);
			}
		}
		iLocal_193[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 85)
	{
		if (!iLocal_242[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_242[iVar0]);
		}
		iVar0++;
	}
	iLocal_203 = 0;
	iLocal_199 = 0;
}

void func_84()//Position - 0x28EB
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 70)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_251[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_251[iVar0], false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_251[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_251[iVar0]);
				}
			}
			func_86(iLocal_251[iVar0]);
			__LIB_11__.func_122(iLocal_251[iVar0]);
		}
		iLocal_196[iVar0] = 0;
		iLocal_197[iVar0] = 0;
		if (!bLocal_130 && !bLocal_143)
		{
			if (iLocal_195[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_195[iVar0], &cLocal_232);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 70)
	{
		if (!iLocal_244[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_244[iVar0]);
		}
		iVar0++;
	}
	iLocal_205 = 0;
}

void func_86(int iParam0)//Position - 0x29CF
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
				if (bLocal_151)
				{
					PED::SET_PED_FLEE_ATTRIBUTES(iVar1, 65536, true);
					PED::SET_PED_FLEE_ATTRIBUTES(iVar1, 2, false);
				}
				PED::SET_PED_COMBAT_ATTRIBUTES(iVar1, 6, false);
			}
		}
	}
}

void func_87()//Position - 0x2A69
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 70)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_250[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_250[iVar0], false))
			{
				ENTITY::SET_ENTITY_COLLISION(iLocal_250[iVar0], true, false);
			}
			__LIB_11__.func_122(iLocal_250[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 70)
	{
		if (!iLocal_243[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_243[iVar0]);
		}
		iVar0++;
	}
	iLocal_204 = 0;
	iLocal_201 = 0;
}

void func_88()//Position - 0x2AED
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 85)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_248[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_248[iVar0], false))
			{
				ENTITY::SET_ENTITY_COLLISION(iLocal_248[iVar0], true, false);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_248[iVar0], false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_248[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_248[iVar0]);
				}
			}
			func_86(iLocal_248[iVar0]);
			__LIB_11__.func_122(iLocal_248[iVar0]);
		}
		iLocal_193[iVar0] = 0;
		iLocal_194[iVar0] = 0;
		if (!bLocal_130 && !bLocal_143)
		{
			if (iLocal_192[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_192[iVar0], &cLocal_232);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 85)
	{
		if (!iLocal_242[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_242[iVar0]);
		}
		iVar0++;
	}
	iLocal_203 = 0;
	iLocal_199 = 0;
}

int func_92()//Position - 0x2C02
{
	if (iLocal_245 == 0)
	{
		return joaat("A_M_Y_Business_01");
	}
	return iLocal_245;
}

void func_94()//Position - 0x2C49
{
	__LIB_0__.func_523(&(Local_534.f_2));
	__LIB_0__.func_523(&(Local_535.f_2));
	__LIB_0__.func_523(&(Local_533.f_2));
	__LIB_0__.func_523(&(Local_532.f_2));
}

void func_96()//Position - 0x2C95
{
	if (__LIB_10__.func_638(iLocal_335, 1000))
	{
		if (__LIB_1__.func_197(Local_533.f_0) && __LIB_1__.func_183(Local_535.f_0))
		{
			if (PED::IS_PED_IN_VEHICLE(Local_533.f_0, Local_535.f_0, false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_535.f_0))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_535.f_0);
					VEHICLE::REMOVE_VEHICLE_RECORDING(1, sLocal_360);
				}
				if (!__LIB_4__.func_465(Local_533.f_0, joaat("SCRIPT_TASK_VEHICLE_DRIVE_WANDER")))
				{
					TASK::TASK_VEHICLE_DRIVE_WANDER(Local_533.f_0, Local_535.f_0, 60f, 786469);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_533.f_0, true);
					PED::SET_PED_KEEP_TASK(Local_533.f_0, true);
				}
			}
		}
		__LIB_0__.func_84(500, 1);
		func_97(100, 1);
		func_565();
	}
}

void func_97(int iParam0, bool bParam1)//Position - 0x2D30
{
	int iVar0;
	char* sVar1;
	iVar0 = __LIB_18__.func_205();
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
	__LIB_38__.func_136(iVar0, 0);
	MISC::SET_BIT(&Global_78567, 1);
	if (Global_112473[iVar0 /*10*/].f_9 == -1)
	{
	}
	else
	{
		__LIB_0__.func_56(&(Global_112473[iVar0 /*10*/].f_9));
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
	__LIB_32__.func_577(iVar0, 1, 0, 0);
	__LIB_0__.func_46(0, 0);
	MemCopy(&sVar1, {__LIB_0__.func_339(iVar0)}, 4);
	__LIB_0__.func_44(&sVar1, __LIB_26__.func_250());
	func_122();
	if (BitTest(Global_113386.f_10016.f_25, 3))
	{
		__LIB_0__.func_18();
	}
	__LIB_35__.func_897();
	if (iParam0 == 210 || iParam0 == 211)
	{
		__LIB_24__.func_943(iParam0, 406.38f, -1635.86f);
	}
	else if (iParam0 == 111)
	{
		__LIB_24__.func_943(iParam0, 1973.84f, 3814.89f);
	}
	else if (iParam0 != 322)
	{
		__LIB_24__.func_943(iParam0, 0, 0);
	}
	__LIB_0__.func_533();
}

void func_122()//Position - 0x3EA7
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
			iVar3 = __LIB_18__.func_168(iVar1);
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
				if (func_237(iVar1, 14, iVar2))
				{
					func_123(iVar1, 14, iVar2);
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

int func_123(int iParam0, int iParam1, int iParam2)//Position - 0x3F68
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
	Global_78130[1 /*14*/] = { __LIB_35__.func_896(iVar0, iParam1, iParam2, -1) };
	if (!BitTest(Global_78130[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (!func_237(iParam0, iParam1, iParam2))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar2 = { __LIB_18__.func_180(iVar0, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 14)
		{
			if (uVar2[iVar1] != -99)
			{
				func_123(iParam0, iVar1, uVar2[iVar1]);
			}
			iVar1++;
		}
	}
	else if (iParam1 == 13)
	{
		uVar5 = { __LIB_18__.func_247(iVar0, iParam2) };
		iVar3 = 0;
		while (iVar3 <= 8)
		{
			if (!func_123(iParam0, 14, uVar5[iVar3]))
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
		uVar6 = { __LIB_18__.func_180(iVar0, 0) };
		Global_78130[1 /*14*/] = { __LIB_35__.func_896(iVar0, iParam1, uVar6[iParam1], -1) };
		if (PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(iParam0, __LIB_0__.func_33(iParam1)) > 0 && PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(iParam0, __LIB_0__.func_33(iParam1), Global_78130[1 /*14*/].f_3) > 0)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(iParam1), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, 0);
		}
	}
	if (func_163(iParam0, iVar0, &iVar7, 0))
	{
		func_126(iParam0, 2, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (func_124(iParam0, iVar0, &iVar7))
	{
		func_126(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	return 1;
}

int func_124(int iParam0, int iParam1, int iParam2)//Position - 0x4124
{
	int iVar0;
	iVar0 = __LIB_0__.func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_237(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_126(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x41EB
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
										func_126(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
									func_126(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_35__.func_896(iVar10, iVar0, func_132(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_163(iParam0, iVar10, &iVar4, 1))
							{
								func_126(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_18__.func_180(iVar10, 0) };
						func_126(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_126(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__.func_896(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_126(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__.func_896(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_126(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__.func_896(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_126(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__.func_896(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_126(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
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
						func_126(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_126(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_126(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		if (func_163(iParam0, iVar10, &iVar4, 0))
		{
			func_126(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_124(iParam0, iVar10, &iVar4))
		{
			func_126(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_132(int iParam0, int iParam1, int iParam2)//Position - 0x5228
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
				if (func_237(iParam0, iParam1, iVar0))
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
				if (func_237(iParam0, iParam1, iVar1))
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

int func_163(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xB85F
{
	int iVar0;
	iVar0 = __LIB_0__.func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_237(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_237(int iParam0, int iParam1, int iParam2)//Position - 0x21FBC
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
				if (!func_237(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_18__.func_247(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_237(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_35__.func_896(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_237(iParam0, 14, iVar4))
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
			if (!func_237(iParam0, 14, uVar8[iVar7]))
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

void func_295()//Position - 0x29683
{
	PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0.3f);
	switch (iLocal_274)
	{
		case 0:
			if (!bLocal_276)
			{
				if (!__LIB_0__.func_295())
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				}
				iLocal_274 = 2;
			}
			else
			{
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
				__LIB_39__.func_485(&Local_543);
				VEHICLE::REQUEST_VEHICLE_RECORDING(1, sLocal_360);
				func_45();
				if (__LIB_0__.func_121(Local_536.f_0))
				{
					ENTITY::SET_ENTITY_PROOFS(Local_536.f_0, false, false, false, true, false, false, false, false);
				}
				if ((VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, sLocal_360) && !func_302(&Local_532)) && !func_302(&Local_533))
				{
					if (__LIB_18__.func_170(1, 1093140480, 0))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), sLocal_363, 0, 0, 0);
						if (__LIB_0__.func_121(Local_533.f_0))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_533.f_0, sLocal_362, 0, 0, 0);
						}
						if (__LIB_0__.func_121(Local_532.f_0))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_532.f_0, sLocal_361, 0, 0, 0);
						}
						if (__LIB_0__.func_121(Local_534.f_0))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_534.f_0, sLocal_364, 0, 0, 0);
						}
						if (__LIB_0__.func_121(Local_535.f_0))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_535.f_0, sLocal_365, 0, 0, 0);
						}
						if (__LIB_0__.func_121(Local_536.f_0))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_536.f_0, sLocal_366, 0, 0, 0);
							GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(ENTITY::GET_ENTITY_COORDS(Local_536.f_0, false), 4f);
						}
						RECORDING::REPLAY_START_EVENT(1);
						CUTSCENE::START_CUTSCENE(0);
						SYSTEM::WAIT(0);
						__LIB_0__.func_84(800, 0);
						MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(418.28375f, -571.6629f, 24.697943f, 362.0258f, -663.1398f, 38.339985f, 28f, false, false, false, true, true, 0, 0);
						func_298(392.86f, -621.04f, 27.97f, 1, 1, 1, 0, 1, 1, 0, 1, 1, 1);
						func_297(1);
						VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
						PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0.3f);
						iLocal_274 = 1;
					}
				}
				else
				{
					if (__LIB_1__.func_183(Local_535.f_0))
					{
						__LIB_6__.func_762(Local_535.f_0, 10.5f, 1, 0f, 0, 1, 0);
					}
					__LIB_8__.func_611(0);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 21 /*INPUT_SPRINT*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 141 /*INPUT_MELEE_ATTACK_HEAVY*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 140 /*INPUT_MELEE_ATTACK_LIGHT*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 257 /*INPUT_ATTACK2*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 23 /*INPUT_ENTER*/, true);
				}
			}
			break;
		case 1:
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_363, 0))
			{
				RECORDING::REPLAY_STOP_EVENT();
				if (CUTSCENE::WAS_CUTSCENE_SKIPPED() && CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				}
				bLocal_315 = true;
			}
			if ((__LIB_1__.func_197(Local_533.f_0) && __LIB_1__.func_197(Local_532.f_0)) && __LIB_1__.func_183(Local_535.f_0))
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_362, 0))
				{
					if (!PED::IS_PED_SITTING_IN_VEHICLE(Local_533.f_0, Local_535.f_0))
					{
						PED::SET_PED_INTO_VEHICLE(Local_533.f_0, Local_535.f_0, -1);
					}
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_533.f_0, true);
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_361, 0))
				{
					if (!PED::IS_PED_SITTING_IN_VEHICLE(Local_532.f_0, Local_535.f_0))
					{
						PED::SET_PED_INTO_VEHICLE(Local_532.f_0, Local_535.f_0, 0);
					}
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_532.f_0, true);
					PED::SET_PED_KEEP_TASK(Local_532.f_0, true);
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_365, 0))
				{
					VEHICLE::SET_VEHICLE_ENGINE_ON(Local_535.f_0, true, true, false);
					VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_535.f_0, 17f);
					VEHICLE::SET_VEHICLE_DOORS_SHUT(Local_535.f_0, true);
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_535.f_0))
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(Local_535.f_0, 1, sLocal_360, 35f, 786468);
					}
				}
			}
			if (__LIB_1__.func_197(Local_534.f_0))
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_364, 0))
				{
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_534.f_0, false, 1);
					__LIB_20__.func_241(&Local_534, 1);
				}
			}
			if (!bLocal_315)
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			}
			if (!CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				iLocal_274 = 2;
			}
			else
			{
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0.3f);
			}
			break;
		case 2:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				CUTSCENE::STOP_CUTSCENE(false);
			}
			else
			{
				if (CUTSCENE::HAS_CUTSCENE_LOADED())
				{
					CUTSCENE::REMOVE_CUTSCENE();
				}
				if (__LIB_0__.func_121(Local_534.f_0))
				{
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_534.f_0, false, 1);
				}
				__LIB_20__.func_241(&Local_534, 1);
				if (__LIB_1__.func_183(Local_535.f_0))
				{
					if (__LIB_1__.func_197(Local_533.f_0))
					{
						if (!__LIB_4__.func_465(Local_533.f_0, joaat("SCRIPT_TASK_VEHICLE_DRIVE_WANDER")))
						{
							if (PED::IS_PED_SITTING_IN_VEHICLE(Local_533.f_0, Local_535.f_0))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_533.f_0, true);
							}
						}
					}
					if (__LIB_1__.func_197(Local_532.f_0))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_532.f_0, true);
						PED::SET_PED_KEEP_TASK(Local_532.f_0, true);
					}
				}
				if (__LIB_0__.func_121(Local_536.f_0))
				{
					ENTITY::SET_ENTITY_PROOFS(Local_536.f_0, false, false, false, false, false, false, false, false);
				}
				if (bLocal_276)
				{
					__LIB_40__.func_678(1, 1, 1, 1);
				}
				iLocal_335 = MISC::GET_GAME_TIMER();
				func_296(4);
			}
			break;
	}
}

void func_296(int iParam0)//Position - 0x29AC7
{
	iLocal_272 = iParam0;
	iLocal_274 = 0;
}

void func_297(bool bParam0)//Position - 0x29AD8
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	Var1 = { 341.2f, -645.83f, 25f };
	Var2 = { 429.1f, -572.89f, 35f };
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Var1, Var2, false, true);
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(418.28375f, -571.6629f, 24.697943f, 362.0258f, -663.1398f, 38.339985f, 28f, false, false, true);
	if (bParam0)
	{
		VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(Var1, Var2, 0);
		MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(418.28375f, -571.6629f, 24.697943f, 362.0258f, -663.1398f, 38.339985f, 28f, false, false, false, false, false, 0, 0);
	}
	PATHFIND::SET_PED_PATHS_IN_AREA(Var1, Var2, false, 0);
	PED::SET_PED_NON_CREATION_AREA(Var1, Var2);
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (iVar0 != 1)
		{
			PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_358[iVar0], false);
		}
		iVar0++;
	}
	iLocal_357 = PED::ADD_SCENARIO_BLOCKING_AREA(Var1, Var2, false, true, true, true);
	if (bParam0)
	{
		MISC::CLEAR_AREA_OF_OBJECTS(395.24756f, -615.01337f, 27.87107f, 20f, 0);
		MISC::CLEAR_AREA(395.24756f, -615.01337f, 27.87107f, 20f, true, false, false, false);
	}
}

void func_298(struct<3> Param0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10)//Position - 0x29C09
{
	int iVar0;
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_PLAYING(iVar0))
	{
		__LIB_26__.func_502(0);
		if (bParam7)
		{
			PLAYER::REMOVE_PLAYER_HELMET(PLAYER::GET_PLAYER_INDEX(), true);
		}
		if (bParam6)
		{
			switch (__LIB_18__.func_173())
			{
				case 0:
					if (func_237(PLAYER::PLAYER_PED_ID(), 8, 15))
					{
						func_126(PLAYER::PLAYER_PED_ID(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (func_237(PLAYER::PLAYER_PED_ID(), 9, 6))
					{
						func_126(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				case 1:
					if (func_237(PLAYER::PLAYER_PED_ID(), 8, 1) || func_237(PLAYER::PLAYER_PED_ID(), 8, 10))
					{
						func_126(PLAYER::PLAYER_PED_ID(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				case 2:
					if (func_237(PLAYER::PLAYER_PED_ID(), 8, 4))
					{
						func_126(PLAYER::PLAYER_PED_ID(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				}
		}
		if (iParam4 == 1)
		{
			MISC::CLEAR_AREA_OF_PEDS(__LIB_0__.func_85(PLAYER::GET_PLAYER_INDEX()), 50f, 0);
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
			iLocal_46 = 0;
			if (__LIB_0__.func_121(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_46 = WEAPON::GET_SELECTED_PED_WEAPON(PLAYER::PLAYER_PED_ID());
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
			}
		}
		if (iParam3 == 1)
		{
			__LIB_0__.func_84(500, 0);
		}
	}
}

int func_302(int iParam0)//Position - 0x29E32
{
	if (__LIB_1__.func_197(*iParam0))
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_303()//Position - 0x29E53
{
	PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0.3f);
	VEHICLE::REQUEST_VEHICLE_RECORDING(1, sLocal_360);
	func_384();
	func_383(1090519040);
	switch (iLocal_274)
	{
		case 0:
			func_380();
			iLocal_336 = MISC::GET_GAME_TIMER();
			if (__LIB_1__.func_197(Local_534.f_0))
			{
				if (iLocal_292)
				{
					__LIB_40__.func_938(&uLocal_20, Local_534.f_0, 0, 0, 1, 1, 1);
				}
			}
			iLocal_274 = 1;
			break;
		case 1:
			if (__LIB_1__.func_197(Local_534.f_0))
			{
				if (iLocal_292)
				{
					__LIB_40__.func_938(&uLocal_20, Local_534.f_0, 0, 0, 1, 1, 1);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_536.f_0))
				{
					fLocal_340 = SYSTEM::VDIST(Local_549, ENTITY::GET_ENTITY_COORDS(Local_536.f_0, false));
				}
				if ((__LIB_1__.func_183(Local_535.f_0) && __LIB_1__.func_197(Local_533.f_0)) && __LIB_1__.func_197(Local_532.f_0))
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_535.f_0))
					{
						if (__LIB_0__.func_405("NIGEL2_04", 0, 0))
						{
							HUD::CLEAR_THIS_PRINT("NIGEL2_04");
						}
						iLocal_294 = 0;
						__LIB_0__.func_523(&(Local_535.f_2));
						func_345(&iLocal_317);
						if (!HUD::DOES_BLIP_EXIST(Local_534.f_2))
						{
							Local_534.f_2 = __LIB_10__.func_711(Local_534.f_0, 1, 0, 5);
						}
						else
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(Local_534.f_0, false))
							{
								HUD::SET_BLIP_SCALE(Local_534.f_2, 1f);
							}
							__LIB_10__.func_618(Local_534.f_2, Local_534.f_0, 200f, 0.7f, iLocal_317);
						}
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_535.f_0, 381.91562f, -628.10144f, 22.932293f, 394.47723f, -606.12695f, 35.774826f, 18.5f, false, true, 0))
						{
							if (func_342(&Local_535))
							{
								if (__LIB_10__.func_638(iLocal_336, 500))
								{
									iLocal_274 = 2;
								}
							}
							else
							{
								iLocal_336 = MISC::GET_GAME_TIMER();
							}
						}
						else
						{
							iLocal_336 = MISC::GET_GAME_TIMER();
						}
					}
					else
					{
						__LIB_0__.func_523(&(Local_534.f_2));
						if (!HUD::DOES_BLIP_EXIST(Local_535.f_2))
						{
							Local_535.f_2 = __LIB_10__.func_727(Local_535.f_0, 1, 7);
						}
						if (!iLocal_294)
						{
							if (__LIB_0__.func_75())
							{
								__LIB_6__.func_771();
							}
							iLocal_294 = 1;
						}
						if (!iLocal_289)
						{
							__LIB_0__.func_210("NIGEL2_04", 7500, 1);
							iLocal_326 = MISC::GET_GAME_TIMER();
							iLocal_289 = 1;
						}
						else if (!__LIB_0__.func_75())
						{
							if (fLocal_342 < 20f)
							{
								if (MISC::GET_GAME_TIMER() - iLocal_326) > MISC::GET_RANDOM_INT_IN_RANGE(4500, 6500)
								{
									if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_535.f_0, false))
									{
										if (MISC::GET_RANDOM_INT_IN_RANGE(0, 11) > 5)
										{
											if (__LIB_41__.func_635(&uLocal_367, "NIG2AUD", "NIG2_GIC", 8, 0, 0, 0))
											{
											}
										}
										else if (__LIB_41__.func_635(&uLocal_367, "NIG2AUD", "NIG2_GIC2", 8, 0, 0, 0))
										{
										}
									}
								}
							}
						}
						else
						{
							iLocal_326 = MISC::GET_GAME_TIMER();
						}
						__LIB_0__.func_400();
						iLocal_336 = MISC::GET_GAME_TIMER();
					}
				}
				func_321();
			}
			func_380();
			func_310();
			break;
		case 2:
			__LIB_0__.func_523(&(Local_535.f_2));
			__LIB_0__.func_523(&(Local_534.f_2));
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(true);
			__LIB_9__.func_981(&uLocal_20, 0, 0);
			if (__LIB_0__.func_75())
			{
				__LIB_6__.func_833();
			}
			if (!iLocal_292)
			{
				func_305(0);
				RECORDING::REPLAY_STOP_EVENT();
				iLocal_292 = 1;
			}
			if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_351))
			{
				GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_351, false);
			}
			iLocal_542 = 2;
			__LIB_0__.func_123(&Local_349);
			STREAMING::REMOVE_PTFX_ASSET();
			if (!__LIB_0__.func_295() && bLocal_276)
			{
				__LIB_30__.func_421("NIGEL2_STOP", 0);
			}
			func_304(3);
			func_296(3);
			break;
	}
}

void func_304(int iParam0)//Position - 0x2A185
{
	if (!__LIB_0__.func_295() && bLocal_276)
	{
		if (iParam0 == iLocal_330)
		{
			switch (iLocal_330)
			{
				case 0:
					if (__LIB_30__.func_421("NIGEL2_START", 0))
					{
						iLocal_330++;
					}
					break;
				case 1:
					if (__LIB_30__.func_421("NIGEL2_CAR", 0))
					{
						AUDIO::PREPARE_MUSIC_EVENT("NIGEL2_JUMP");
						iLocal_330++;
					}
					break;
				case 2:
					if (__LIB_30__.func_421("NIGEL2_JUMP", 1))
					{
						iLocal_330++;
					}
					break;
				case 3:
					if (__LIB_30__.func_421("NIGEL2_STOP", 0))
					{
						iLocal_330++;
					}
					break;
				default:
					break;
				}
			}
	}
}

void func_305(bool bParam0)//Position - 0x2A229
{
	if (bParam0)
	{
		if (!CAM::DOES_CAM_EXIST(iLocal_320))
		{
			iLocal_320 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);
		}
		if (CAM::DOES_CAM_EXIST(iLocal_320))
		{
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			CAM::SET_CAM_COORD(iLocal_320, Local_550);
			CAM::SET_CAM_FOV(iLocal_320, 14f);
			CAM::POINT_CAM_AT_ENTITY(iLocal_320, Local_535.f_0, Local_551, true);
			AUDIO::ACTIVATE_AUDIO_SLOWMO_MODE("NIGEL_02_SLOWMO_SETTING");
		}
	}
	else
	{
		CAM::STOP_SCRIPT_GLOBAL_SHAKING(false);
		if (CAM::DOES_CAM_EXIST(iLocal_320))
		{
			if (CAM::IS_CAM_ACTIVE(iLocal_320))
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				CAM::SET_CAM_ACTIVE(iLocal_320, false);
			}
			CAM::DESTROY_CAM(iLocal_320, false);
		}
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		MISC::SET_TIME_SCALE(1f);
		AUDIO::DEACTIVATE_AUDIO_SLOWMO_MODE("NIGEL_02_SLOWMO_SETTING");
		bLocal_293 = true;
	}
}

void func_310()//Position - 0x2A40C
{
	if (!iLocal_314)
	{
		if (__LIB_1__.func_148(Local_549, 307.3065f, -589.9595f, 42.302f, 200f))
		{
			if (func_312())
			{
				__LIB_0__.func_498(794);
				iLocal_314 = 1;
			}
		}
	}
}

int func_312()//Position - 0x2A4BE
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	iVar0 = 0;
	if (__LIB_10__.func_550())
	{
		iVar2 = __LIB_9__.func_973();
		if (iVar2 != 0)
		{
			bVar3 = false;
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < iVar2)
			{
				iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(__LIB_9__.func_972(iVar0));
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (func_316(ENTITY::GET_ENTITY_COORDS(iVar1, false)))
					{
						if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar1, PLAYER::PLAYER_PED_ID(), true))
						{
							bVar3 = true;
						}
					}
				}
				iVar0++;
			}
			if (bVar3)
			{
				return 1;
			}
		}
	}
	if (__LIB_29__.func_685())
	{
		iVar4 = __LIB_29__.func_684();
		if (iVar4 != 0)
		{
			bVar5 = false;
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < iVar4)
			{
				iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(__LIB_29__.func_683(iVar0));
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (func_316(ENTITY::GET_ENTITY_COORDS(iVar1, false)))
					{
						if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar1, PLAYER::PLAYER_PED_ID(), true))
						{
							bVar5 = true;
						}
					}
				}
				iVar0++;
			}
			if (bVar5)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_316(struct<3> Param0)//Position - 0x2A5C9
{
	int iVar0;
	if (!INTERIOR::IS_VALID_INTERIOR(iLocal_337))
	{
		return 0;
	}
	if (!INTERIOR::IS_COLLISION_MARKED_OUTSIDE(Param0))
	{
		iVar0 = INTERIOR::GET_INTERIOR_FROM_COLLISION(Param0);
		if (iVar0 == iLocal_337)
		{
			return 1;
		}
	}
	return 0;
}

void func_321()//Position - 0x2A64A
{
	float fVar0;
	fVar0 = 100f;
	if (iLocal_312)
	{
		if (fLocal_340 > fVar0)
		{
			__LIB_0__.func_498(793);
			iLocal_312 = 0;
		}
	}
}

int func_342(int iParam0)//Position - 0x2AE6B
{
	struct<3> Var0;
	if (ENTITY::IS_ENTITY_IN_AIR(*iParam0))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_UPRIGHT(*iParam0, 5f))
	{
		return 0;
	}
	if (VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(*iParam0))
	{
		return 1;
	}
	Var0 = { ENTITY::GET_ENTITY_ROTATION_VELOCITY(*iParam0) };
	if (Var0.f_0 > 0.2f || Var0.f_0 < -0.2f)
	{
		return 0;
	}
	if (Var0.f_1 > 0.2f || Var0.f_1 < -0.2f)
	{
		return 0;
	}
	return 1;
}

void func_345(int iParam0)//Position - 0x2B094
{
	int iVar0;
	char cVar1[32];
	int iVar2;
	if (__LIB_0__.func_75())
	{
		iLocal_325 = MISC::GET_GAME_TIMER();
	}
	else
	{
		iLocal_308 = 0;
	}
	if (iLocal_309)
	{
		if (__LIB_1__.func_197(iLocal_350))
		{
			if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_350))
			{
				iLocal_350 = 0;
				iLocal_309 = 0;
			}
		}
		else
		{
			iLocal_350 = 0;
			iLocal_309 = 0;
		}
	}
	if (!ENTITY::IS_ENTITY_IN_AIR(Local_535.f_0))
	{
		iLocal_327 = MISC::GET_GAME_TIMER();
	}
	if (iLocal_272 == 1)
	{
		if (fLocal_340 < ((200f / 100f) * (0.7f * 100f)))
		{
			if (fLocal_341 > 3000f && fLocal_341 < 7500f)
			{
				if (!iLocal_282)
				{
					if (!__LIB_0__.func_75())
					{
						iVar2 = 0;
						if (HUD::IS_MESSAGE_BEING_DISPLAYED())
						{
							iVar2 = 1;
						}
						if (__LIB_42__.func_7(&uLocal_367, "NIG2AUD", "NIG2_INSTR", "NIG2_INSTR_13", 8, iVar2, 0))
						{
							iLocal_308 = 1;
							iLocal_282 = 1;
						}
					}
				}
			}
			if (fLocal_341 > 15500f && fLocal_341 < 16000f)
			{
				if (!iLocal_281[0])
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_535.f_0, -1237.7784f, -763.4679f, 26.422665f, -1186.7028f, -829.47723f, 10.580473f, 31f, false, true, 0))
					{
						if (!__LIB_0__.func_75())
						{
							if (__LIB_42__.func_7(&uLocal_367, "NIG2AUD", "NIG2_INSTR", "NIG2_INSTR_1", 8, 0, 0))
							{
								iLocal_308 = 1;
								iLocal_281[0] = 1;
							}
						}
					}
				}
			}
			if (fLocal_341 > 45500f && fLocal_341 < 47500f)
			{
				if (!iLocal_281[1])
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_535.f_0, -664.5371f, -580.7943f, 29.308285f, -590.7203f, -581.19324f, 23.308285f, 13.5f, false, true, 0))
					{
						if (__LIB_0__.func_75())
						{
							__LIB_6__.func_771();
						}
						if (__LIB_41__.func_635(&uLocal_367, "NIG2AUD", "NIG_SP1", 8, 0, 0, 0))
						{
							RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 3f, 0);
							iLocal_308 = 1;
							iLocal_281[1] = 1;
						}
					}
				}
			}
			if (fLocal_341 > 69000f && fLocal_341 < 71000f)
			{
				if (!iLocal_281[2])
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_535.f_0, -440.78574f, -828.3237f, 35.735603f, -511.81116f, -826.65594f, 27.668936f, 60f, false, true, 0))
					{
						if (__LIB_0__.func_75())
						{
							__LIB_6__.func_771();
						}
						if (__LIB_41__.func_635(&uLocal_367, "NIG2AUD", "NIG_SP2", 8, 0, 0, 0))
						{
							RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 3f, 0);
							iLocal_308 = 1;
							iLocal_281[2] = 1;
						}
					}
				}
			}
			if (fLocal_341 > 85000f && fLocal_341 < 89000f)
			{
				if (!iLocal_281[3])
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_535.f_0, -432.32776f, -540.98804f, 44.071632f, -433.24832f, -485.56494f, 22.470394f, 60f, false, true, 0))
					{
						if (__LIB_0__.func_75())
						{
							__LIB_6__.func_771();
						}
						if (__LIB_41__.func_635(&uLocal_367, "NIG2AUD", "NIG_SP3", 8, 0, 0, 0))
						{
							iLocal_308 = 1;
							iLocal_281[3] = 1;
						}
					}
				}
			}
			if (fLocal_341 > 104000f && fLocal_341 < 110000f)
			{
				if (!iLocal_281[4])
				{
					if (__LIB_0__.func_75())
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_535.f_0, 81.94607f, -518.6024f, 38.074284f, -107.36858f, -519.7444f, 27.815357f, 60f, false, true, 0))
						{
							if (__LIB_0__.func_75())
							{
								__LIB_0__.func_296();
							}
							if (__LIB_42__.func_7(&uLocal_367, "NIG2AUD", "NIG2_INSTR", "NIG2_INSTR_12", 8, 0, 0))
							{
								iLocal_308 = 1;
								iLocal_281[4] = 1;
							}
						}
					}
				}
			}
			if (fLocal_341 > 113000f && fLocal_341 < 116000f)
			{
				if (!iLocal_281[5])
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_535.f_0, 254.99944f, -594.3826f, 49.60252f, 270.4643f, -527.226f, 39.68248f, 70f, false, true, 0))
					{
						if (__LIB_0__.func_75())
						{
							__LIB_6__.func_771();
						}
						if (__LIB_41__.func_635(&uLocal_367, "NIG2AUD", "NIG2_HOSP01", 8, 0, 0, 0))
						{
							RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 3f, 0);
							iLocal_308 = 1;
							iLocal_281[5] = 1;
						}
					}
				}
			}
			if (fLocal_341 > 118000f)
			{
				if (!iLocal_281[6])
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_535.f_0, 338.01114f, -581.90546f, 41.577534f, 350.98694f, -586.7529f, 46.077515f, 6.75f, false, true, 0))
					{
						if (__LIB_0__.func_75())
						{
							__LIB_6__.func_771();
						}
						if (__LIB_41__.func_635(&uLocal_367, "NIG2AUD", "NIG2_HWH", 8, 0, 0, 0))
						{
							iLocal_308 = 1;
							iLocal_281[6] = 1;
						}
					}
				}
				if (!iLocal_281[7])
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_535.f_0, 368.57144f, -594.94666f, 45.542202f, 389.5015f, -614.1279f, 27.117891f, 20.75f, false, true, 0))
					{
						if (!__LIB_20__.func_245("NIG2_HWH", 1))
						{
							if (__LIB_0__.func_75())
							{
								__LIB_6__.func_771();
							}
							if (__LIB_41__.func_635(&uLocal_367, "NIG2AUD", "NIG2_HWS", 8, 0, 0, 0))
							{
								iLocal_308 = 1;
								iLocal_281[7] = 1;
							}
						}
					}
				}
			}
		}
	}
	if (!iLocal_309)
	{
		if (!iLocal_288)
		{
			if (((VEHICLE::IS_VEHICLE_STUCK_ON_ROOF(Local_535.f_0) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(Local_535.f_0, 0, 1000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(Local_535.f_0, 1, 1000)) || __LIB_10__.func_638(iLocal_331, 500))
			{
				StringCopy(&cVar1, "NIG2_FLIP_", 32);
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(1, 3);
				StringIntConCat(&cVar1, iVar0, 32);
				if (iVar0 == 1)
				{
					AUDIO::INTERRUPT_CONVERSATION(Local_533.f_0, "NIG2_CCAA", "NIGEL");
					iLocal_288 = 1;
					iLocal_350 = Local_533.f_0;
					iLocal_309 = 1;
					return;
				}
				else
				{
					AUDIO::INTERRUPT_CONVERSATION(Local_532.f_0, "NIG2_CCAB", "MRSTHORNHILL");
					iLocal_288 = 1;
					iLocal_350 = Local_532.f_0;
					iLocal_309 = 1;
					return;
				}
			}
			else if (ENTITY::IS_ENTITY_IN_AIR(Local_535.f_0))
			{
				if (__LIB_10__.func_638(iLocal_327, 500))
				{
					if (!__LIB_20__.func_245("NIG2_HWH", 1) && !__LIB_20__.func_245("NIG2_HWS", 1))
					{
						if (MISC::GET_RANDOM_INT_IN_RANGE(0, 11) > 5)
						{
							StringCopy(&cVar1, "NIG2_CDAA", 32);
							AUDIO::INTERRUPT_CONVERSATION(Local_533.f_0, &cVar1, "NIGEL");
							iLocal_350 = Local_533.f_0;
						}
						else
						{
							StringCopy(&cVar1, "NIG2_CDAB", 32);
							AUDIO::INTERRUPT_CONVERSATION(Local_532.f_0, &cVar1, "MRSTHORNHILL");
							iLocal_350 = Local_532.f_0;
						}
						iLocal_327 = MISC::GET_GAME_TIMER();
						iLocal_309 = 1;
						iLocal_288 = 1;
						return;
					}
				}
			}
		}
		else if (!ENTITY::IS_ENTITY_IN_AIR(Local_535.f_0))
		{
			if (VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(Local_535.f_0) || ((!VEHICLE::IS_VEHICLE_STUCK_ON_ROOF(Local_535.f_0) && !VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(Local_535.f_0, 0, 1000)) && !VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(Local_535.f_0, 1, 1000)))
			{
				iLocal_288 = 0;
			}
		}
		if (!iLocal_308)
		{
			if (PLAYER::GET_TIME_SINCE_PLAYER_HIT_PED(PLAYER::PLAYER_ID()) >= 0 && PLAYER::GET_TIME_SINCE_PLAYER_HIT_PED(PLAYER::PLAYER_ID()) < 500)
			{
				if (MISC::GET_RANDOM_INT_IN_RANGE(0, 11) > 5)
				{
					StringCopy(&cVar1, "NIG2_CQAA", 32);
					AUDIO::INTERRUPT_CONVERSATION(Local_533.f_0, &cVar1, "NIGEL");
					iLocal_350 = Local_533.f_0;
				}
				else
				{
					StringCopy(&cVar1, "NIG2_CPAA", 32);
					AUDIO::INTERRUPT_CONVERSATION(Local_532.f_0, &cVar1, "MRSTHORNHILL");
					iLocal_350 = Local_532.f_0;
				}
				iLocal_309 = 1;
				return;
			}
			if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(Local_535.f_0))
			{
				if (MISC::GET_RANDOM_INT_IN_RANGE(0, 11) > 5)
				{
					StringCopy(&cVar1, "NIG2_COAA", 32);
					AUDIO::INTERRUPT_CONVERSATION(Local_533.f_0, &cVar1, "NIGEL");
					iLocal_350 = Local_533.f_0;
				}
				else
				{
					StringCopy(&cVar1, "NIG2_CNAA", 32);
					AUDIO::INTERRUPT_CONVERSATION(Local_532.f_0, &cVar1, "MRSTHORNHILL");
					iLocal_350 = Local_532.f_0;
				}
				iLocal_309 = 1;
				return;
			}
		}
	}
	if (!iLocal_308 && !iLocal_309)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_536.f_0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_536.f_0, PLAYER::PLAYER_PED_ID(), true) && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				if (!__LIB_20__.func_245("NIG2_SHOOTS", 1) && !__LIB_20__.func_245("NIG2_SHOOTSN", 1))
				{
					if (__LIB_0__.func_75())
					{
						__LIB_6__.func_771();
					}
					if (MISC::GET_RANDOM_INT_IN_RANGE(0, 11) > 5)
					{
						if (__LIB_41__.func_635(&uLocal_367, "NIG2AUD", "NIG2_SHOOTS", 8, 0, 0, 0))
						{
							ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_536.f_0);
							iLocal_309 = 1;
							return;
						}
					}
					else if (__LIB_41__.func_635(&uLocal_367, "NIG2AUD", "NIG2_SHOOTSN", 8, 0, 0, 0))
					{
						ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_536.f_0);
						iLocal_309 = 1;
						return;
					}
				}
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_536.f_0);
			}
			if (!iLocal_284)
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_536.f_0, PLAYER::PLAYER_PED_ID(), true))
				{
					if (__LIB_0__.func_75())
					{
						__LIB_6__.func_771();
					}
					if (__LIB_41__.func_635(&uLocal_367, "NIG2AUD", "NIG2_CHASE01", 8, 0, 0, 0))
					{
						ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_536.f_0);
						iLocal_308 = 1;
						iLocal_284 = 1;
						return;
					}
				}
			}
		}
		if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
		{
			if (!iLocal_285)
			{
				if (__LIB_0__.func_75())
				{
					__LIB_6__.func_833();
				}
				if (__LIB_41__.func_635(&uLocal_367, "NIG2AUD", "NIG2_WANTED", 8, 0, 0, 0))
				{
					iLocal_285 = 1;
					iLocal_308 = 1;
				}
			}
			else if (!iLocal_286)
			{
				if (!__LIB_20__.func_245("NIG2_WANTED", 1))
				{
					if (__LIB_0__.func_75())
					{
						__LIB_6__.func_771();
					}
					if (__LIB_41__.func_635(&uLocal_367, "NIG2AUD", "NIG2_POLICE", 8, 0, 0, 0))
					{
						iLocal_286 = 1;
						iLocal_308 = 1;
					}
				}
			}
		}
		if (iLocal_272 == 1)
		{
			if (fLocal_340 < ((200f / 100f) * (0.7f * 100f)))
			{
				if (!iLocal_308 && !__LIB_0__.func_75())
				{
					if (__LIB_10__.func_638(iLocal_325, 500))
					{
						if (fLocal_341 < 116000f)
						{
							if (!iLocal_287)
							{
								if (fLocal_341 > 20000f)
								{
									if (func_346())
									{
										if (__LIB_41__.func_635(&uLocal_367, "NIG2AUD", "NIG2_LEFT", 8, 0, 0, 0))
										{
											iLocal_287 = 1;
										}
									}
								}
							}
							if (!iLocal_278[0])
							{
								if (__LIB_41__.func_635(&uLocal_367, "NIG2AUD", "NIG2_CHASE02", 8, 0, 0, 0))
								{
									iLocal_278[0] = 1;
								}
							}
							if (!iLocal_278[1])
							{
								if (iLocal_281[0] || fLocal_341 > 16500f)
								{
									if (__LIB_41__.func_635(&uLocal_367, "NIG2AUD", "NIG2_CHASE05", 8, 0, 0, 0))
									{
										iLocal_278[1] = 1;
									}
								}
							}
							else if (!iLocal_278[2])
							{
								if (__LIB_41__.func_635(&uLocal_367, "NIG2AUD", "NIG2_CHASE08", 8, 0, 0, 0))
								{
									iLocal_278[2] = 1;
								}
							}
							else if (!iLocal_278[3])
							{
								if (iLocal_281[1] || fLocal_341 > 52500f)
								{
									if (__LIB_41__.func_635(&uLocal_367, "NIG2AUD", "NIG2_CHASE06", 8, 0, 0, 0))
									{
										iLocal_278[3] = 1;
									}
								}
							}
							else if (!iLocal_278[4])
							{
								if (iLocal_281[2] || fLocal_341 > 71500f)
								{
									if (__LIB_41__.func_635(&uLocal_367, "NIG2AUD", "NIG2_CHASE03", 8, 0, 0, 0))
									{
										iLocal_278[4] = 1;
									}
								}
							}
							else if (!iLocal_278[5])
							{
								if (iLocal_281[3] || fLocal_341 > 89500f)
								{
									if (__LIB_41__.func_635(&uLocal_367, "NIG2AUD", "NIG2_CHASE04", 8, 0, 0, 0))
									{
										iLocal_278[5] = 1;
									}
								}
							}
							else if (!iLocal_278[6])
							{
								if (!iLocal_281[5])
								{
									if (iLocal_281[4] || fLocal_341 > 106500f)
									{
										if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_535.f_0, 81.94607f, -518.6024f, 38.074284f, -107.36858f, -519.7444f, 27.815357f, 60f, false, true, 0))
										{
											if (__LIB_41__.func_635(&uLocal_367, "NIG2AUD", "NIG2_CHASE07", 8, 0, 0, 0))
											{
												iLocal_278[6] = 1;
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	if (fLocal_340 > ((200f / 100f) * (0.7f * 100f)))
	{
		if (!iLocal_308)
		{
			if (!iLocal_279[2])
			{
				if (__LIB_0__.func_75())
				{
					__LIB_6__.func_833();
				}
				else if (!iLocal_279[0])
				{
					if (__LIB_41__.func_635(&uLocal_367, "NIG2AUD", "NIG2_CU01", 8, 0, 0, 0))
					{
						iLocal_308 = 1;
						iLocal_279[0] = 1;
					}
				}
				else if (!iLocal_279[1])
				{
					if (__LIB_41__.func_635(&uLocal_367, "NIG2AUD", "NIG2_CU02", 8, 0, 0, 0))
					{
						iLocal_308 = 1;
						iLocal_279[1] = 1;
					}
				}
				else if (!iLocal_279[2])
				{
					if (__LIB_41__.func_635(&uLocal_367, "NIG2AUD", "NIG2_CU03", 8, 0, 0, 0))
					{
						iLocal_308 = 1;
						iLocal_279[2] = 1;
					}
				}
			}
		}
	}
	else if (fLocal_341 > 40000f)
	{
		if (fLocal_341 < 58000f)
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -731.6891f, -657.82416f, 26.269114f, -448.3936f, -657.125f, 40.717342f, 40f, false, true, 0))
			{
				if (!iLocal_280)
				{
					if (!iLocal_279[1])
					{
						if (__LIB_0__.func_75())
						{
							__LIB_6__.func_771();
						}
						if (__LIB_41__.func_635(&uLocal_367, "NIG2AUD", "NIG2_CU02", 8, 0, 0, 0))
						{
							iLocal_308 = 1;
							iLocal_279[1] = 1;
							iLocal_280 = 1;
						}
					}
					else
					{
						if (__LIB_0__.func_75())
						{
							__LIB_6__.func_771();
						}
						if (__LIB_41__.func_635(&uLocal_367, "NIG2AUD", "NIG2_CU03", 8, 0, 0, 0))
						{
							iLocal_308 = 1;
							iLocal_279[2] = 1;
							iLocal_280 = 1;
						}
					}
				}
				*iParam0 = 1;
			}
		}
	}
}

int func_346()//Position - 0x2BD30
{
	if (PLAYER::GET_IS_PLAYER_DRIVING_WRECKLESS(PLAYER::PLAYER_ID(), 2))
	{
		return 1;
	}
	return 0;
}

void func_380()//Position - 0x2CECB
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	if (!bLocal_293)
	{
		if (__LIB_1__.func_183(Local_535.f_0))
		{
			if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_535.f_0))
			{
				if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_535.f_0, 373.2886f, -580.87103f, 37.239483f, 359.66025f, -605.2207f, 29.13826f, 20f, false, true, 0) && (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_535.f_0, Local_547, Local_548, fLocal_339, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_535.f_0, 370.70535f, -596.1437f, 45.439484f, 361.38342f, -600.7f, 33.239487f, 6f, false, true, 0)))
				{
					func_304(2);
					if (iLocal_292)
					{
						func_305(1);
						__LIB_9__.func_981(&uLocal_20, 0, 0);
						iLocal_292 = 0;
						iLocal_319 = 1;
						fLocal_344 = 1f;
						RECORDING::REPLAY_START_EVENT(0);
					}
					if (iLocal_313)
					{
						__LIB_0__.func_320(0, 795);
						iLocal_313 = 0;
					}
					Var0 = { ENTITY::GET_ENTITY_COORDS(Local_535.f_0, true) };
					fVar1 = 0.2f;
					fVar2 = 0.9f;
					fVar3 = 2f;
					if (Var0.f_2 > 35.25f)
					{
						if (fLocal_344 > fVar1)
						{
							fLocal_344 = (fLocal_344 - (fVar2 * SYSTEM::TIMESTEP()));
							if (fLocal_344 < fVar1)
							{
								fLocal_344 = fVar1;
							}
							MISC::SET_TIME_SCALE(fLocal_344);
						}
					}
					else if (Var0.f_2 < 35f)
					{
						if (fLocal_344 < 1f)
						{
							fLocal_344 = (fLocal_344 + (fVar3 * SYSTEM::TIMESTEP()));
							if (fLocal_344 > 1f)
							{
								fLocal_344 = 1f;
							}
							MISC::SET_TIME_SCALE(fLocal_344);
						}
					}
					if (Var0.f_2 < 40f)
					{
						if (VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(Local_535.f_0))
						{
							if (!iLocal_292)
							{
								func_305(0);
								RECORDING::REPLAY_STOP_EVENT();
								iLocal_292 = 1;
							}
						}
					}
				}
				else if (!iLocal_292)
				{
					func_305(0);
					RECORDING::REPLAY_STOP_EVENT();
					iLocal_292 = 1;
				}
			}
			else if (!iLocal_292)
			{
				func_305(0);
				RECORDING::REPLAY_STOP_EVENT();
				iLocal_319 = 0;
				iLocal_292 = 1;
			}
		}
		else if (!iLocal_292)
		{
			func_305(0);
			RECORDING::REPLAY_STOP_EVENT();
			iLocal_319 = 0;
			iLocal_292 = 1;
		}
	}
	func_381();
}

void func_381()//Position - 0x2D0B4
{
	struct<3> Var0;
	if (iLocal_319)
	{
		if (__LIB_1__.func_183(Local_535.f_0))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(Local_535.f_0, false) };
			if (Var0.f_2 < 35f)
			{
				if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(Local_535.f_0) || VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(Local_535.f_0))
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "CAR_DROP_WRAP", Local_535.f_0, 0, false, 0);
					iLocal_319 = 0;
				}
			}
		}
	}
}

void func_383(float fParam0)//Position - 0x2D17A
{
	if (__LIB_1__.func_197(Local_534.f_0))
	{
		if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_534.f_0, "rcmnigel2", "die_horn", 3))
		{
			STREAMING::REQUEST_ANIM_DICT("rcmnigel2");
			if (STREAMING::HAS_ANIM_DICT_LOADED("rcmnigel2"))
			{
				TASK::TASK_PLAY_ANIM(Local_534.f_0, "rcmnigel2", "die_horn", fParam0, -8f, -1, 2, 0.9f, false, false, false);
			}
		}
	}
}

void func_384()//Position - 0x2D1CF
{
	struct<3> Var0;
	Var0 = { 392.9445f, -619.5032f, 27.9764f };
	if (__LIB_1__.func_148(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var0, 100f))
	{
		if (!__LIB_4__.func_234())
		{
			CUTSCENE::REQUEST_CUTSCENE(&Local_543, 8);
			func_45();
			iLocal_316 = 1;
		}
	}
	else if (iLocal_316)
	{
		if (!__LIB_1__.func_148(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var0, 120f))
		{
			if (CUTSCENE::HAS_CUTSCENE_LOADED())
			{
				CUTSCENE::REMOVE_CUTSCENE();
				iLocal_316 = 0;
			}
		}
		else
		{
			func_45();
		}
	}
	if (iLocal_316)
	{
		if (__LIB_4__.func_234())
		{
			CUTSCENE::REMOVE_CUTSCENE();
			iLocal_316 = 0;
		}
	}
}

void func_386()//Position - 0x2D276
{
	PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0.3f);
	switch (iLocal_274)
	{
		case 0:
			if (__LIB_1__.func_197(Local_534.f_0) && __LIB_1__.func_183(Local_536.f_0))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_534.f_0, true);
				PED::SET_PED_RESET_FLAG(Local_534.f_0, 237, true);
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_536.f_0, "NIGEL_02_CHASE_CAR_MG", 0f);
			}
			if (__LIB_1__.func_197(Local_532.f_0))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_532.f_0, true);
			}
			if (__LIB_1__.func_197(Local_533.f_0))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_533.f_0, true);
			}
			if (__LIB_1__.func_183(Local_535.f_0))
			{
				if (!iLocal_313)
				{
					__LIB_0__.func_320(Local_535.f_0, 795);
					iLocal_313 = 1;
				}
				VEHICLE::SET_FORCE_HD_VEHICLE(Local_535.f_0, true);
				iLocal_318 = 1;
			}
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(0f, 15f, 1);
			func_437(fLocal_343, Local_549);
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 170, true);
			PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
			iLocal_274 = 1;
			break;
		case 1:
			func_304(0);
			func_436();
			iLocal_317 = 0;
			if (ENTITY::DOES_ENTITY_EXIST(Local_536.f_0))
			{
				fLocal_340 = SYSTEM::VDIST(Local_549, ENTITY::GET_ENTITY_COORDS(Local_536.f_0, false));
			}
			if (__LIB_1__.func_197(Local_534.f_0))
			{
				if (__LIB_1__.func_183(Local_536.f_0))
				{
					if (!bLocal_298)
					{
						PED::SET_PED_RESET_FLAG(Local_534.f_0, 237, true);
						if (PED::IS_PED_SITTING_IN_VEHICLE(Local_534.f_0, Local_536.f_0) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(Local_536.f_0, -1, false) == Local_534.f_0)
						{
							if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_536.f_0))
							{
								ENTITY::FREEZE_ENTITY_POSITION(Local_536.f_0, false);
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_536.f_0, iLocal_333, sLocal_359, true);
								VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_536.f_0, true);
								fLocal_341 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_536.f_0);
								fLocal_343 = 0.85f;
								VEHICLE::SET_PLAYBACK_SPEED(Local_536.f_0, fLocal_343);
								func_435();
								func_413(Local_536.f_0, fLocal_343);
								func_409();
								if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("NIGEL_02_CHASE"))
								{
									if (!__LIB_0__.func_295() && bLocal_276)
									{
										AUDIO::START_AUDIO_SCENE("NIGEL_02_CHASE");
									}
								}
								bLocal_298 = true;
							}
						}
					}
					else if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_536.f_0))
					{
						fLocal_341 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_536.f_0);
						func_400(&fLocal_343, fLocal_341);
						VEHICLE::SET_PLAYBACK_SPEED(Local_536.f_0, fLocal_343);
						func_435();
						func_413(Local_536.f_0, fLocal_343);
						func_409();
						func_399();
						func_398();
						func_14(0, 1);
						if (fLocal_341 > 82000f && fLocal_341 < 105000f)
						{
							func_397();
						}
						if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(Local_536.f_0) < 800f)
						{
							VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_536.f_0, 800f);
						}
					}
					else if (!bLocal_300)
					{
						func_68(0, 1);
						func_396();
						VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_333, sLocal_359);
						AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_536.f_0, 0f);
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("NIGEL_02_CHASE"))
						{
							AUDIO::STOP_AUDIO_SCENE("NIGEL_02_CHASE");
						}
						func_297(0);
						func_395();
						if (fLocal_341 < 124136f)
						{
							fLocal_341 = (124136f + 1000f);
						}
						func_398();
						bLocal_300 = true;
					}
					else
					{
						func_383(1090519040);
					}
				}
				if (iLocal_292)
				{
					__LIB_40__.func_938(&uLocal_20, Local_534.f_0, 0, 0, 1, 1, 1);
				}
				func_394();
				func_393();
				func_392(fLocal_341);
				func_389(Local_549);
				func_388();
				func_321();
				func_437(fLocal_343, Local_549);
				if ((__LIB_1__.func_183(Local_535.f_0) && __LIB_1__.func_197(Local_533.f_0)) && __LIB_1__.func_197(Local_532.f_0))
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_535.f_0))
					{
						if (__LIB_0__.func_405("NIGEL2_03", 0, 0))
						{
							HUD::CLEAR_THIS_PRINT("NIGEL2_03");
						}
						if (__LIB_0__.func_405("NIGEL2_04", 0, 0))
						{
							HUD::CLEAR_THIS_PRINT("NIGEL2_04");
						}
						__LIB_0__.func_523(&(Local_535.f_2));
						if (iLocal_318)
						{
							VEHICLE::SET_FORCE_HD_VEHICLE(Local_535.f_0, false);
							iLocal_318 = 0;
						}
						if (!PED::IS_PED_SITTING_IN_VEHICLE(Local_533.f_0, Local_535.f_0) || !PED::IS_PED_SITTING_IN_VEHICLE(Local_532.f_0, Local_535.f_0))
						{
							__LIB_0__.func_523(&(Local_534.f_2));
							if (__LIB_0__.func_405("NIGEL2_04", 0, 0))
							{
								HUD::CLEAR_THIS_PRINT("NIGEL2_04");
							}
						}
						else
						{
							if (!iLocal_299)
							{
								if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(Local_535.f_0, -1, false) == PLAYER::PLAYER_PED_ID())
								{
									VEHICLE::SET_VEHICLE_ENGINE_ON(Local_535.f_0, true, false, false);
									iLocal_299 = 1;
								}
							}
							func_304(1);
							if (!bLocal_295)
							{
								__LIB_0__.func_210("NIGEL2_01", 7500, 1);
								bLocal_295 = true;
							}
							iLocal_294 = 0;
							if (__LIB_0__.func_405("NIGEL2_05", 0, 0))
							{
								HUD::CLEAR_THIS_PRINT("NIGEL2_05");
							}
							if (__LIB_0__.func_405("NIGEL2_08", 0, 0))
							{
								HUD::CLEAR_THIS_PRINT("NIGEL2_08");
							}
							if (__LIB_0__.func_405("NIGEL2_09", 0, 0))
							{
								HUD::CLEAR_THIS_PRINT("NIGEL2_09");
							}
							func_345(&iLocal_317);
							if (!HUD::DOES_BLIP_EXIST(Local_534.f_2))
							{
								Local_534.f_2 = __LIB_10__.func_711(Local_534.f_0, 1, 0, 5);
							}
							else
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(Local_534.f_0, false))
								{
									HUD::SET_BLIP_SCALE(Local_534.f_2, 1f);
								}
								__LIB_10__.func_618(Local_534.f_2, Local_534.f_0, 200f, 0.7f, iLocal_317);
							}
							if (bLocal_298)
							{
								if (bLocal_300)
								{
									if (fLocal_340 < 25f)
									{
										iLocal_274 = 2;
									}
								}
							}
						}
						func_387();
					}
					else
					{
						if (iLocal_318)
						{
							VEHICLE::SET_FORCE_HD_VEHICLE(Local_535.f_0, true);
							iLocal_318 = 1;
						}
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 170, false);
						__LIB_0__.func_523(&(Local_534.f_2));
						if (!HUD::DOES_BLIP_EXIST(Local_535.f_2))
						{
							Local_535.f_2 = __LIB_10__.func_727(Local_535.f_0, 1, 7);
						}
						if (!bLocal_295)
						{
							if (!iLocal_283[0])
							{
								if (__LIB_0__.func_75())
								{
									__LIB_6__.func_771();
								}
								if (__LIB_41__.func_635(&uLocal_367, "NIG2AUD", "NIG2_DAWDM", 7, 0, 0, 0))
								{
									iLocal_283[0] = 1;
								}
							}
							else if (!iLocal_290)
							{
								if (!__LIB_0__.func_75())
								{
									__LIB_0__.func_210("NIGEL2_03", 7500, 1);
									iLocal_290 = 1;
								}
							}
							else if (!iLocal_283[1])
							{
								if ((!__LIB_0__.func_75() && PED::IS_PED_SITTING_IN_VEHICLE(Local_533.f_0, Local_535.f_0)) && PED::IS_PED_SITTING_IN_VEHICLE(Local_532.f_0, Local_535.f_0))
								{
									if (__LIB_41__.func_635(&uLocal_367, "NIG2AUD", "NIG2_SPOTSP", 8, 0, 0, 0))
									{
										iLocal_283[1] = 1;
									}
								}
							}
						}
						else
						{
							if (!iLocal_294)
							{
								if (__LIB_0__.func_75())
								{
									__LIB_6__.func_771();
								}
								iLocal_294 = 1;
							}
							if (!iLocal_289)
							{
								__LIB_0__.func_210("NIGEL2_04", 7500, 1);
								iLocal_326 = MISC::GET_GAME_TIMER();
								iLocal_289 = 1;
							}
							else if (!__LIB_0__.func_75())
							{
								if (fLocal_342 < 20f)
								{
									if (MISC::GET_GAME_TIMER() - iLocal_326) > MISC::GET_RANDOM_INT_IN_RANGE(4500, 6500)
									{
										if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_535.f_0, false))
										{
											if (MISC::GET_RANDOM_INT_IN_RANGE(0, 11) > 5)
											{
												if (__LIB_41__.func_635(&uLocal_367, "NIG2AUD", "NIG2_GIC", 8, 0, 0, 0))
												{
												}
											}
											else if (__LIB_41__.func_635(&uLocal_367, "NIG2AUD", "NIG2_GIC2", 8, 0, 0, 0))
											{
											}
										}
									}
								}
							}
							else
							{
								iLocal_326 = MISC::GET_GAME_TIMER();
							}
						}
						__LIB_0__.func_400();
					}
				}
			}
			func_380();
			func_310();
			break;
		case 2:
			if (!bLocal_300)
			{
				func_68(0, 1);
				func_396();
				if (__LIB_0__.func_121(Local_536.f_0))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_536.f_0))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_536.f_0);
					}
					ENTITY::FREEZE_ENTITY_POSITION(Local_536.f_0, true);
				}
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_333, sLocal_359);
				func_297(0);
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("NIGEL_02_CHASE"))
				{
					AUDIO::STOP_AUDIO_SCENE("NIGEL_02_CHASE");
				}
				if (fLocal_341 < 124136f)
				{
					fLocal_341 = (124136f + 1000f);
				}
				func_398();
				func_395();
				bLocal_300 = true;
			}
			if (__LIB_0__.func_121(Local_534.f_0))
			{
				if (iLocal_292)
				{
					__LIB_40__.func_938(&uLocal_20, Local_534.f_0, 0, 0, 1, 1, 1);
				}
			}
			func_380();
			if (iLocal_313)
			{
				__LIB_0__.func_320(0, 795);
				iLocal_313 = 0;
			}
			MISC::SET_INSTANCE_PRIORITY_HINT(0);
			if (bLocal_305)
			{
				if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_352))
				{
					GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_352, false);
				}
			}
			AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
			func_296(2);
			break;
	}
}

void func_387()//Position - 0x2D9B7
{
	float fVar0;
	if (!bLocal_305)
	{
		fVar0 = 115225f;
		if (fLocal_341 > fVar0)
		{
			STREAMING::REQUEST_PTFX_ASSET();
			if (STREAMING::HAS_PTFX_ASSET_LOADED())
			{
				if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_352))
				{
					if (ENTITY::GET_ENTITY_SPEED(Local_535.f_0) > 8f)
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_535.f_0, 368.91098f, -599.17255f, 41.238842f, 366.0153f, -596.1f, 44.985764f, 6.5f, false, true, 0))
						{
							iLocal_352 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_rcn2_debris_trail", Local_535.f_0, 0f, -1.5f, -0.4f, 0f, 0f, 0f, 0.3f, false, false, false);
							bLocal_305 = true;
						}
					}
				}
			}
		}
	}
	else if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_352))
	{
		if (ENTITY::GET_ENTITY_SPEED(Local_535.f_0) < 4f || !ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_535.f_0, 368.91098f, -599.17255f, 41.238842f, 366.0153f, -596.1f, 44.985764f, 6.5f, false, true, 0))
		{
			GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_352, false);
			bLocal_305 = false;
		}
	}
}

void func_388()//Position - 0x2DAAD
{
	float fVar0;
	fVar0 = 115225f;
	if (!iLocal_310)
	{
		if (!iLocal_307)
		{
			if (fLocal_341 > (fVar0 - 5000f))
			{
				STREAMING::REQUEST_PTFX_ASSET();
				iLocal_307 = 1;
			}
		}
		else
		{
			if (fLocal_341 > fVar0)
			{
				if (STREAMING::HAS_PTFX_ASSET_LOADED())
				{
					if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_351))
					{
						iLocal_351 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_rcn2_ceiling_debris", 325f, -589f, 45f, 0f, 0f, 0f, 1f, false, false, false, false);
						iLocal_310 = 1;
					}
				}
			}
			if (!STREAMING::HAS_PTFX_ASSET_LOADED())
			{
				STREAMING::REQUEST_PTFX_ASSET();
			}
		}
	}
}

void func_389(struct<3> Param0)//Position - 0x2DB35
{
	bool bVar0;
	int iVar1;
	struct<3> Var2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bVar0 = false;
	iVar4 = 250;
	if (__LIB_0__.func_121(Local_534.f_0))
	{
		iVar5 = 0;
		while (iVar5 <= 3)
		{
			if (Local_539[iVar5 /*2*/].f_1 == 0)
			{
				if (!bVar0)
				{
					if (fLocal_341 >= 500f)
					{
						switch (iVar5)
						{
							case 0:
								iVar1 = iLocal_345;
								Var2 = { -1262.53f, -731.25f, 21.88f };
								fVar3 = 47.38f;
								break;
							case 1:
								iVar1 = iLocal_348;
								Var2 = { -1300.17f, -704.1f, 24.61f };
								fVar3 = -87.53f;
								break;
							case 2:
								iVar1 = iLocal_348;
								Var2 = { -1298.33f, -704.16f, 24.53f };
								fVar3 = 83.96f;
								break;
							case 3:
								iVar1 = iLocal_348;
								Var2 = { -1209.92f, -817.51f, 15.62f };
								fVar3 = 15.06f;
								break;
						}
						STREAMING::REQUEST_MODEL(iVar1);
						if (STREAMING::HAS_MODEL_LOADED(iVar1))
						{
							Local_539[iVar5 /*2*/] = PED::CREATE_PED(26, iVar1, Var2, fVar3, true, true);
							if (__LIB_1__.func_197(Local_539[iVar5 /*2*/]))
							{
								Local_539[iVar5 /*2*/].f_1 = 1;
								PED::SET_PED_RANDOM_COMPONENT_VARIATION(Local_539[iVar5 /*2*/], 0);
								PED::SET_PED_KEEP_TASK(Local_539[iVar5 /*2*/], true);
							}
							if (iVar5 != 0)
							{
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar1);
							}
							bVar0 = true;
						}
					}
				}
			}
			else if ((MISC::GET_GAME_TIMER() - iLocal_328) > iVar4)
			{
				if (__LIB_1__.func_197(Local_539[iVar5 /*2*/]))
				{
					switch (Local_539[iVar5 /*2*/].f_1)
					{
						case 1:
							if (__LIB_0__.func_508(Local_534.f_0, Local_539[iVar5 /*2*/], 150f, 1))
							{
								if (iVar5 == 0 || iVar5 == 3)
								{
									TASK::TASK_USE_MOBILE_PHONE(Local_539[iVar5 /*2*/], true, 1);
									PED::SET_PED_KEEP_TASK(Local_539[iVar5 /*2*/], false);
									Local_539[iVar5 /*2*/].f_1 = 4;
								}
								else if (iVar5 == 1)
								{
									if (__LIB_1__.func_197(Local_539[iVar5 + 1 /*2*/]))
									{
										TASK::TASK_CHAT_TO_PED(Local_539[iVar5 /*2*/], Local_539[iVar5 + 1 /*2*/], 17, 0f, 0f, 0f, 0f, 0f);
										PED::SET_PED_KEEP_TASK(Local_539[iVar5 /*2*/], false);
										Local_539[iVar5 /*2*/].f_1 = 4;
									}
								}
								else if (iVar5 == 2)
								{
									if (__LIB_1__.func_197(Local_539[(iVar5 - 1) /*2*/]))
									{
										TASK::TASK_CHAT_TO_PED(Local_539[iVar5 /*2*/], Local_539[(iVar5 - 1) /*2*/], 16, 0f, 0f, 0f, 0f, 0f);
										PED::SET_PED_KEEP_TASK(Local_539[iVar5 /*2*/], false);
										Local_539[iVar5 /*2*/].f_1 = 4;
									}
								}
							}
							break;
						case 4:
							if (__LIB_0__.func_508(Local_534.f_0, Local_539[iVar5 /*2*/], 3f, 1))
							{
								TASK::CLEAR_PED_TASKS(Local_539[iVar5 /*2*/]);
								TASK::OPEN_SEQUENCE_TASK(&iVar6);
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_534.f_0, -1);
								TASK::CLOSE_SEQUENCE_TASK(iVar6);
								TASK::TASK_PERFORM_SEQUENCE(Local_539[iVar5 /*2*/], iVar6);
								TASK::CLEAR_SEQUENCE_TASK(&iVar6);
								Local_539[iVar5 /*2*/].f_1 = 6;
							}
							if (!__LIB_0__.func_530(Local_539[iVar5 /*2*/], Param0, 300f, 1))
							{
								__LIB_20__.func_241(&(Local_539[iVar5 /*2*/]), 0);
								Local_539[iVar5 /*2*/].f_1 = 7;
							}
							break;
						case 6:
							if (!__LIB_0__.func_530(Local_539[iVar5 /*2*/], Param0, 150f, 1))
							{
								__LIB_20__.func_241(&(Local_539[iVar5 /*2*/]), 0);
								Local_539[iVar5 /*2*/].f_1 = 7;
							}
							break;
						}
					}
			}
			iVar5++;
		}
		iVar5 = 0;
		while (iVar5 <= 8)
		{
			if (Local_538[iVar5 /*2*/].f_1 == 0)
			{
				if (!bVar0)
				{
					if (fLocal_341 >= 111161f && iLocal_338 > 1)
					{
						if (INTERIOR::IS_VALID_INTERIOR(iLocal_337) && INTERIOR::IS_INTERIOR_READY(iLocal_337))
						{
							switch (iVar5)
							{
								case 0:
									iVar1 = iLocal_347;
									Var2 = { 309.34f, -596.87f, 43.31f };
									fVar3 = 14.8f;
									break;
								case 1:
									iVar1 = iLocal_347;
									Var2 = { 309.52f, -594.85f, 43.31f };
									fVar3 = 153.4102f;
									break;
								case 2:
									iVar1 = iLocal_347;
									Var2 = { 316f, -588.77f, 42.3f };
									fVar3 = 207.556f;
									break;
								case 3:
									iVar1 = iLocal_346;
									Var2 = { 317.1715f, -590.084f, 42.302f };
									fVar3 = 60.6f;
									break;
								case 4:
									iVar1 = iLocal_347;
									Var2 = { 332.54f, -588.5f, 43.3f };
									fVar3 = 70.64f;
									break;
								case 5:
									iVar1 = iLocal_347;
									Var2 = { 331.68f, -578.6f, 43.32f };
									fVar3 = 234.5983f;
									break;
								case 6:
									iVar1 = iLocal_347;
									Var2 = { 362.56f, -589.32f, 43.33f };
									fVar3 = -21.77f;
									break;
								case 7:
									iVar1 = iLocal_347;
									Var2 = { 363.3849f, -587.8508f, 42.3275f };
									fVar3 = 161.2689f;
									break;
								case 8:
									iVar1 = iLocal_346;
									Var2 = { 358.5161f, -586.02f, 42.3275f };
									fVar3 = 67.7037f;
									break;
							}
							STREAMING::REQUEST_MODEL(iVar1);
							if (STREAMING::HAS_MODEL_LOADED(iVar1))
							{
								Local_538[iVar5 /*2*/] = PED::CREATE_PED(26, iVar1, Var2, fVar3, true, true);
								if (__LIB_1__.func_197(Local_538[iVar5 /*2*/]))
								{
									Local_538[iVar5 /*2*/].f_1 = 4;
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_538[iVar5 /*2*/], true);
									PED::SET_PED_FLEE_ATTRIBUTES(Local_538[iVar5 /*2*/], 4, true);
									PED::SET_PED_KEEP_TASK(Local_538[iVar5 /*2*/], true);
									switch (iVar5)
									{
										case 0:
											PED::SET_PED_COMPONENT_VARIATION(Local_538[iVar5 /*2*/], 0, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_538[iVar5 /*2*/], 2, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_538[iVar5 /*2*/], 3, 0, 1, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_538[iVar5 /*2*/], 4, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_538[iVar5 /*2*/], 5, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_538[iVar5 /*2*/], 8, 0, 0, 0);
											break;
										case 1:
											PED::SET_PED_COMPONENT_VARIATION(Local_538[iVar5 /*2*/], 0, 1, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_538[iVar5 /*2*/], 2, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_538[iVar5 /*2*/], 3, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_538[iVar5 /*2*/], 4, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_538[iVar5 /*2*/], 5, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_538[iVar5 /*2*/], 8, 0, 0, 0);
											break;
										case 2:
											PED::SET_PED_COMPONENT_VARIATION(Local_538[2 /*2*/], 0, 1, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_538[2 /*2*/], 2, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_538[2 /*2*/], 3, 0, 1, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_538[2 /*2*/], 4, 0, 1, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_538[2 /*2*/], 5, 0, 1, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_538[2 /*2*/], 8, 0, 0, 0);
											break;
										case 3:
											PED::SET_PED_COMPONENT_VARIATION(Local_538[3 /*2*/], 0, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_538[3 /*2*/], 3, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_538[3 /*2*/], 4, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_538[3 /*2*/], 8, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_538[3 /*2*/], 11, 0, 0, 0);
											break;
										case 4:
											PED::SET_PED_COMPONENT_VARIATION(Local_538[4 /*2*/], 0, 1, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_538[4 /*2*/], 2, 1, 1, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_538[4 /*2*/], 3, 1, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_538[4 /*2*/], 4, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_538[4 /*2*/], 5, 1, 1, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_538[4 /*2*/], 8, 0, 0, 0);
											break;
										case 5:
											PED::SET_PED_COMPONENT_VARIATION(Local_538[5 /*2*/], 0, 1, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_538[5 /*2*/], 2, 1, 1, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_538[5 /*2*/], 3, 0, 2, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_538[5 /*2*/], 4, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_538[5 /*2*/], 5, 0, 2, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_538[5 /*2*/], 8, 0, 0, 0);
											break;
										case 6:
											PED::SET_PED_COMPONENT_VARIATION(Local_538[6 /*2*/], 0, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_538[6 /*2*/], 2, 0, 1, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_538[6 /*2*/], 3, 1, 1, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_538[6 /*2*/], 4, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_538[6 /*2*/], 5, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_538[6 /*2*/], 8, 0, 0, 0);
											break;
										case 7:
											PED::SET_PED_COMPONENT_VARIATION(Local_538[7 /*2*/], 0, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_538[7 /*2*/], 2, 1, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_538[7 /*2*/], 3, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_538[7 /*2*/], 4, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_538[7 /*2*/], 5, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_538[7 /*2*/], 8, 0, 0, 0);
											break;
										case 8:
											PED::SET_PED_COMPONENT_VARIATION(Local_538[8 /*2*/], 0, 1, 1, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_538[8 /*2*/], 3, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_538[8 /*2*/], 4, 1, 2, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_538[8 /*2*/], 8, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_538[8 /*2*/], 11, 1, 2, 0);
											break;
										}
								}
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar1);
								bVar0 = true;
							}
						}
					}
				}
			}
			else if ((MISC::GET_GAME_TIMER() - iLocal_328) > iVar4)
			{
				if (__LIB_1__.func_197(Local_538[iVar5 /*2*/]))
				{
					switch (Local_538[iVar5 /*2*/].f_1)
					{
						case 4:
							if (__LIB_0__.func_530(Local_538[iVar5 /*2*/], Param0, 5f, 1) || __LIB_0__.func_508(Local_534.f_0, Local_538[iVar5 /*2*/], 8f, 1))
							{
								TASK::TASK_COWER(Local_538[iVar5 /*2*/], -1);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_538[iVar5 /*2*/], true);
								Local_538[iVar5 /*2*/].f_1 = 6;
							}
							break;
						case 5:
							break;
						case 6:
							if ((PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), Local_538[iVar5 /*2*/])) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), Local_538[iVar5 /*2*/]))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_538[iVar5 /*2*/], joaat("SCRIPT_TASK_COWER")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_538[iVar5 /*2*/], joaat("SCRIPT_TASK_COWER")) != 0)
								{
									TASK::TASK_COWER(Local_538[iVar5 /*2*/], -1);
								}
							}
							else if (!__LIB_0__.func_530(Local_538[iVar5 /*2*/], Param0, 250f, 1))
							{
								__LIB_20__.func_241(&(Local_538[iVar5 /*2*/]), 0);
								Local_538[iVar5 /*2*/].f_1 = 7;
							}
							break;
						}
					}
			}
			iVar5++;
		}
	}
	if ((MISC::GET_GAME_TIMER() - iLocal_328) > iVar4)
	{
		iLocal_328 = MISC::GET_GAME_TIMER();
	}
}

void func_392(float fParam0)//Position - 0x2E562
{
	int iVar0;
	switch (iLocal_334)
	{
		case 0:
			if (fParam0 > 5000f)
			{
				PED::SET_PED_NON_CREATION_AREA(-1332.3508f, -763.45764f, 10f, -1229.1422f, -654.3546f, 42f);
				iLocal_334++;
			}
			break;
		case 1:
			if (fParam0 > 10000f)
			{
				PED::SET_PED_NON_CREATION_AREA(-1274.1476f, -842.63574f, 10f, -1139.8356f, -703.74365f, 42f);
				iLocal_334++;
			}
			break;
		case 2:
			if (fParam0 > 40000f)
			{
				iVar0 = 0;
				while (iVar0 <= 4)
				{
					PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_358[iVar0], false);
					iVar0++;
				}
				PATHFIND::SET_ROADS_IN_ANGLED_AREA(-668.36346f, -658.38007f, 27.433815f, -440.02197f, -657.42377f, 40.251266f, 40f, false, false, true);
				iLocal_334++;
			}
			break;
		case 3:
			if (fParam0 > 54000f)
			{
				iVar0 = 0;
				while (iVar0 <= 4)
				{
					PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_358[iVar0], false);
					iVar0++;
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -513.48773f, -598.49554f, 30.898241f, -695.001f, -593.83844f, 19.307816f, 60f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -518.4041f, -622.82935f, 32.301056f, -608.4054f, -622.3588f, 26.787561f, 11f, false, true, 0))
				{
					MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(-668.36346f, -658.38007f, 27.433815f, -440.02197f, -657.42377f, 40.251266f, 40f, false, false, false, false, false, 0, 0);
					MISC::CLEAR_AREA_OF_PEDS(-497.22577f, -710.6161f, 32.22013f, 5.85f, 0);
					MISC::CLEAR_AREA_OF_PEDS(-498.18228f, -719.31335f, 32.21197f, 2.15f, 0);
					MISC::CLEAR_AREA_OF_PEDS(-497.90323f, -724.97406f, 32.21197f, 3.8f, 0);
					MISC::CLEAR_AREA_OF_PEDS(-499.56677f, -731.96655f, 32.21197f, 7.3f, 0);
				}
				PATHFIND::SET_PED_PATHS_IN_AREA(-496.28848f, -681.55994f, 25f, -481.59882f, -668.74115f, 38f, false, 0);
				PED::SET_PED_NON_CREATION_AREA(-496.28848f, -681.55994f, 25f, -481.59882f, -668.74115f, 38f);
				iLocal_358[0] = PED::ADD_SCENARIO_BLOCKING_AREA(-497.21988f, -679.97705f, 22.0126f, -486.8124f, -672.0134f, 41.80794f, false, true, true, true);
				iLocal_358[1] = PED::ADD_SCENARIO_BLOCKING_AREA(-489.72855f, -680.74554f, 22.0126f, -497.19778f, -690.007f, 41.80794f, false, true, true, true);
				iLocal_334++;
			}
			break;
		case 4:
			if (fParam0 > 61000f)
			{
				iVar0 = 0;
				while (iVar0 <= 4)
				{
					PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_358[iVar0], false);
					iVar0++;
				}
				PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(-668.36346f, -658.38007f, 27.433815f, -440.02197f, -657.42377f, 40.251266f, 40f, 1);
				PED::SET_PED_NON_CREATION_AREA(-508.7908f, -764.6354f, 28f, -488.04373f, -702.8006f, 38f);
				iLocal_358[0] = PED::ADD_SCENARIO_BLOCKING_AREA(-503.09494f, -754.9647f, 29f, -494.79437f, -730.12964f, 37f, false, true, true, true);
				iLocal_334++;
			}
			break;
		case 5:
			if (fParam0 > 65000f)
			{
				iVar0 = 0;
				while (iVar0 <= 4)
				{
					PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_358[iVar0], false);
					iVar0++;
				}
				PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(-496.28848f, -681.55994f, 25f, -481.59882f, -668.74115f, 38f, 0);
				PATHFIND::SET_PED_PATHS_IN_AREA(-463.2153f, -829.0475f, 22.4812f, -445.46454f, -813.1011f, 36.56588f, false, 0);
				PED::SET_PED_NON_CREATION_AREA(-463.2153f, -829.0475f, 22.4812f, -445.46454f, -813.1011f, 36.56588f);
				iLocal_358[0] = PED::ADD_SCENARIO_BLOCKING_AREA(-497.21988f, -679.97705f, 22.0126f, -486.8124f, -672.0134f, 41.80794f, false, true, true, true);
				iLocal_334++;
			}
			break;
		case 6:
			if (fParam0 > 75000f)
			{
				PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(-463.2153f, -829.0475f, 22.4812f, -445.46454f, -813.1011f, 36.56588f, 0);
				iLocal_358[1] = PED::ADD_SCENARIO_BLOCKING_AREA(291.5848f, -588.8806f, 37f, 303.76028f, -579.5882f, 48f, false, true, true, true);
				iLocal_334++;
			}
			break;
		case 7:
			if (fParam0 > 114500f)
			{
				func_297(1);
				iLocal_334++;
			}
			break;
	}
}

void func_393()//Position - 0x2EA2C
{
	if (!iLocal_296)
	{
		if (fLocal_341 > (114436f - 4000f))
		{
			AUDIO::REQUEST_SCRIPT_AUDIO_BANK("NIGEL_02_CRASH_A", false, -1);
			AUDIO::REQUEST_SCRIPT_AUDIO_BANK("NIGEL_02_CRASH_B", false, -1);
			AUDIO::REQUEST_SCRIPT_AUDIO_BANK("PANIC_WALLA_INTERIOR", false, -1);
			if ((AUDIO::REQUEST_SCRIPT_AUDIO_BANK("NIGEL_02_CRASH_A", false, -1) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("NIGEL_02_CRASH_B", false, -1)) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("PANIC_WALLA_INTERIOR", false, -1))
			{
				iLocal_296 = 1;
			}
		}
	}
	else
	{
		switch (iLocal_322)
		{
			case 0:
				if (fLocal_341 >= 114436f)
				{
					AUDIO::PLAY_SOUND_FROM_COORD(-1, "DOOR_CRASH", 299.5664f, -584.6757f, 42.302f, "NIGEL_02_SOUNDSET", false, 0, false);
					iLocal_322++;
				}
				break;
			case 1:
				if (fLocal_341 >= 114936f)
				{
					AUDIO::PLAY_SOUND_FROM_COORD(-1, "SCREAMS", 310.5149f, -595.4158f, 42.302f, "NIGEL_02_SOUNDSET", false, 0, false);
					AUDIO::FORCE_PED_PANIC_WALLA();
					AUDIO::PLAY_SOUND_FROM_COORD(-1, "PANIC_WALLA", 316.4345f, -589.3902f, 42.2919f, "NIGEL_02_SOUNDSET", false, 0, false);
					iLocal_322++;
				}
				break;
			case 2:
				if (fLocal_341 >= 117166f)
				{
					AUDIO::PLAY_SOUND_FROM_COORD(-1, "WALL_CRASH", 325.66f, -589.01f, 42.3f, "NIGEL_02_SOUNDSET", false, 0, false);
					iLocal_322++;
				}
				break;
			case 3:
				if (fLocal_341 >= 117736f)
				{
					AUDIO::PLAY_SOUND_FROM_COORD(-1, "WALL_CRASH", 330.13f, -585.72f, 42.42f, "NIGEL_02_SOUNDSET", false, 0, false);
					iLocal_322++;
				}
				break;
			case 4:
				if (fLocal_341 >= 118186f)
				{
					AUDIO::PLAY_SOUND_FROM_COORD(-1, "SCREAMS", 331.7845f, -578.5184f, 42.3167f, "NIGEL_02_SOUNDSET", false, 0, false);
					AUDIO::PLAY_SOUND_FROM_COORD(-1, "PANIC_WALLA", 354.6585f, -584.2177f, 42.315f, "NIGEL_02_SOUNDSET", false, 0, false);
					iLocal_322++;
				}
				break;
			case 5:
				if (fLocal_341 >= 118496f)
				{
					AUDIO::PLAY_SOUND_FROM_COORD(-1, "WALL_CRASH", 337.89f, -582.38f, 42.33f, "NIGEL_02_SOUNDSET", false, 0, false);
					iLocal_322++;
				}
				break;
			case 6:
				if (fLocal_341 >= 120986f)
				{
					AUDIO::PLAY_SOUND_FROM_COORD(-1, "WINDOW_CRASH", 364.64f, -595.43f, 42.54f, "NIGEL_02_SOUNDSET", false, 0, false);
					iLocal_322++;
				}
				break;
			default:
				break;
			}
	}
}

void func_394()//Position - 0x2EC91
{
	if (!__LIB_0__.func_295() && bLocal_276)
	{
		if (iLocal_542 == 0)
		{
			if (fLocal_341 >= 99000f)
			{
				if (__LIB_1__.func_148(Local_549, 308.96793f, -591.075f, 43.29187f, 500f))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(Local_349.f_0))
					{
						STREAMING::REQUEST_MODEL(Local_349.f_7);
						if (STREAMING::HAS_MODEL_LOADED(Local_349.f_7))
						{
							Local_349.f_0 = OBJECT::CREATE_OBJECT(Local_349.f_7, Local_349.f_1, true, true, false);
							if (__LIB_0__.func_121(Local_349.f_0))
							{
								ENTITY::SET_ENTITY_ROTATION(Local_349.f_0, Local_349.f_4, 2, true);
								ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_349.f_0, Local_349.f_1, false, false, true);
								ENTITY::FREEZE_ENTITY_POSITION(Local_349.f_0, true);
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_349.f_7);
								iLocal_542 = 1;
							}
						}
					}
				}
			}
		}
		else if (iLocal_542 == 1)
		{
			if (fLocal_341 >= 114436f)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_349.f_0))
				{
					__LIB_0__.func_123(&Local_349);
					iLocal_542 = 2;
				}
			}
		}
		else if (iLocal_542 == 2)
		{
		}
		if (iLocal_324 == 0)
		{
			if (fLocal_341 >= 99000f)
			{
				if (__LIB_1__.func_148(Local_549, 308.96793f, -591.075f, 43.29187f, 500f))
				{
					if (iLocal_338 > 3)
					{
						iLocal_353 = OBJECT::GET_RAYFIRE_MAP_OBJECT(299.4302f, -584.8925f, 42.2629f, 100f, "DES_hospitaldoors");
						if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_353))
						{
							OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_353, 11);
							iLocal_324++;
						}
					}
				}
			}
		}
		else if (iLocal_324 == 1)
		{
			if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_353))
			{
				if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_353) == 5)
				{
					if (fLocal_341 >= 114436f)
					{
						OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_353, 6);
						iLocal_324++;
					}
				}
				else if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_353) != 4)
				{
					OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_353, 4);
				}
			}
			else
			{
				iLocal_324 = (iLocal_324 - 1);
			}
		}
	}
}

void func_395()//Position - 0x2EE57
{
	STREAMING::REQUEST_ANIM_DICT("rcmnigel2");
	if (__LIB_0__.func_121(Local_536.f_0))
	{
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_536.f_0, 5f);
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_536.f_0, 0f);
		ENTITY::FREEZE_ENTITY_POSITION(Local_536.f_0, true);
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_536.f_0, false);
		VEHICLE::SET_DISABLE_VEHICLE_ENGINE_FIRES(Local_536.f_0, true);
		VEHICLE::SET_VEHICLE_ENGINE_ON(Local_536.f_0, true, true, false);
		AUDIO::SET_VEHICLE_AUDIO_BODY_DAMAGE_FACTOR(Local_536.f_0, 1f);
		VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_536.f_0, 0f);
	}
	if (__LIB_1__.func_197(Local_534.f_0))
	{
		func_383(1090519040);
		if (ENTITY::GET_ENTITY_HEALTH(Local_534.f_0) > 110)
		{
			ENTITY::SET_ENTITY_HEALTH(Local_534.f_0, 110, 0);
			PED::SET_PED_SUFFERS_CRITICAL_HITS(Local_534.f_0, true);
		}
	}
	if (!CAM::IS_SPHERE_VISIBLE(393.38f, -617.53f, 27.91f, 30f))
	{
		MISC::CLEAR_AREA_OF_PEDS(393.38f, -617.53f, 27.91f, 35f, 0);
		MISC::CLEAR_AREA_OF_OBJECTS(393.38f, -617.53f, 27.91f, 8f, 0);
	}
}

void func_396()//Position - 0x2EF36
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = iLocal_248;
	iVar1 = iLocal_251;
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < iVar0)
	{
		if (iLocal_192[iVar2] > 0)
		{
			VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_192[iVar2], sLocal_359);
		}
		iVar2++;
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		if (iLocal_195[iVar2] > 0)
		{
			VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_195[iVar2], sLocal_359);
		}
		iVar2++;
	}
}

void func_397()//Position - 0x2EFA6
{
	iLocal_132 = 1;
}

void func_398()//Position - 0x2EFB1
{
	if (!iLocal_304)
	{
		if (fLocal_341 > 124136f)
		{
			if (__LIB_1__.func_197(Local_534.f_0))
			{
				if (ENTITY::GET_ENTITY_HEALTH(Local_534.f_0) < 200)
				{
					ENTITY::SET_ENTITY_HEALTH(Local_534.f_0, 200, 0);
				}
			}
			if (__LIB_1__.func_183(Local_536.f_0))
			{
				ENTITY::SET_ENTITY_HEALTH(Local_536.f_0, 1000, 0);
				if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(Local_536.f_0, 4))
				{
					VEHICLE::SET_VEHICLE_DOOR_BROKEN(Local_536.f_0, 4, true);
				}
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_536.f_0, true);
				VEHICLE::SMASH_VEHICLE_WINDOW(Local_536.f_0, 0);
				VEHICLE::SMASH_VEHICLE_WINDOW(Local_536.f_0, 1);
				VEHICLE::POP_OUT_VEHICLE_WINDSCREEN(Local_536.f_0);
				VEHICLE::SET_VEHICLE_DAMAGE(Local_536.f_0, 0f, 1f, 0.1f, 800f, 1850f, true);
				VEHICLE::SET_VEHICLE_DAMAGE(Local_536.f_0, -0.2f, 1f, 0.5f, 50f, 650f, true);
				VEHICLE::SET_VEHICLE_DAMAGE(Local_536.f_0, -0.7f, -0.2f, 0.3f, 50f, 500f, true);
				iLocal_304 = 1;
			}
		}
	}
}

void func_399()//Position - 0x2F090
{
	if (((((((((((fLocal_341 > 3000f && fLocal_341 < 3800f) || (fLocal_341 > 14750f && fLocal_341 < 15250f)) || (fLocal_341 > 28500f && fLocal_341 < 29400f)) || (fLocal_341 > 34000f && fLocal_341 < 35250f)) || (fLocal_341 > 38800f && fLocal_341 < 41000f)) || (fLocal_341 > 47000f && fLocal_341 < 48300f)) || (fLocal_341 > 56000f && fLocal_341 < 57200f)) || (fLocal_341 > 66750f && fLocal_341 < 67250f)) || (fLocal_341 > 68500f && fLocal_341 < 70500f)) || (fLocal_341 > 101500f && fLocal_341 < 102500f)) || (fLocal_341 > 114500f && fLocal_341 < 116500f))
	{
		VEHICLE::SET_VEHICLE_BRAKE_LIGHTS(Local_536.f_0, true);
	}
	if ((((((fLocal_341 > 6500f && fLocal_341 < 7000f) || (fLocal_341 > 7500f && fLocal_341 < 8500f)) || (fLocal_341 > 10500f && fLocal_341 < 11250f)) || (fLocal_341 > 11750f && fLocal_341 < 12250f)) || (fLocal_341 > 13250f && fLocal_341 < 13500f)) || (fLocal_341 > 14000f && fLocal_341 < 14500f))
	{
		AUDIO::SET_HORN_PERMANENTLY_ON(Local_536.f_0);
	}
}

void func_400(float fParam0, float fParam1)//Position - 0x2F28E
{
	bool bVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	bVar0 = true;
	if (bVar0)
	{
		if (__LIB_1__.func_183(Local_535.f_0))
		{
			fVar1 = *fParam0;
			fVar2 = 9f;
			fVar3 = 20f;
			fVar4 = 36f;
			fVar5 = ((200f / 100f) * (0.7f * 100f));
			fVar6 = 30f;
			fVar7 = 0.7f;
			fVar8 = 0.45f;
			fVar9 = 1.6f;
			fVar10 = 0.04f;
			if (fParam1 > 0f && fParam1 < 6000f)
			{
				fVar2 = 1f;
				fVar3 = 10f;
				fVar4 = 22f;
				fVar6 = 45f;
				fVar9 = 1f;
				fVar10 = 0.02f;
			}
			else if (fParam1 > 12000f && fParam1 < 20000f)
			{
				fVar2 = 10.5f;
				fVar3 = 22f;
				fVar6 = 15f;
				fVar10 = 0.05f;
			}
			else if (fParam1 > 31000f && fParam1 < 35500f)
			{
				fVar2 = 9f;
				fVar3 = 20f;
				fVar6 = 20f;
				fVar9 = 1.8f;
			}
			else if (fParam1 > 37000f && fParam1 < 42500f)
			{
				fVar2 = 8f;
				fVar3 = 21f;
			}
			else if (fParam1 > 54500f && fParam1 < 58000f)
			{
				fVar2 = 8f;
				fVar3 = 22f;
			}
			else if (fParam1 > 58000f && fParam1 < 63500f)
			{
				fVar2 = 15f;
				fVar3 = 22f;
				fVar10 = 0.35f;
			}
			else if (fParam1 > 63500f && fParam1 < 72500f)
			{
				fVar2 = 10f;
				fVar3 = 20f;
				fVar4 = 30f;
			}
			else if (fParam1 > 72500f && fParam1 < 81500f)
			{
				fVar4 = 30f;
			}
			else if (fParam1 > 81500f && fParam1 < 84000f)
			{
				fVar4 = 25f;
			}
			else if (fParam1 > 88000f && fParam1 < 96500f)
			{
				fVar4 = 30f;
				fVar6 = 20f;
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -423.23508f, -528.1853f, 22.334507f, -234.67183f, -527.77405f, 30.579157f, 27f, false, true, 0))
				{
					fVar2 = 20f;
					fVar3 = 35f;
					fVar4 = 60f;
					fVar6 = 15f;
				}
			}
			else if (fParam1 > 96500f && fParam1 < 102500f)
			{
				fVar2 = 15f;
				fVar3 = 20f;
				fVar4 = 25f;
				fVar6 = 20f;
				fVar10 = 0.35f;
			}
			else if (fParam1 > 102500f && fParam1 < 107500f)
			{
				fVar2 = 15f;
				fVar3 = 25f;
				fVar4 = 40f;
			}
			else if (fParam1 > 107500f && fParam1 < 110500f)
			{
				fVar2 = 17f;
				fVar3 = 30f;
				fVar4 = 50f;
				fVar9 = 1.9f;
			}
			else if (fParam1 > 110500f && fParam1 < 114000f)
			{
				fVar2 = 20f;
				fVar3 = 35f;
				fVar4 = 55f;
				fVar9 = 1.9f;
			}
			else if (fParam1 > 114500f && fParam1 < 118000f)
			{
				fVar2 = 22f;
				fVar3 = 37f;
				fVar4 = 60f;
				fVar9 = 2f;
			}
			else if (fParam1 > 118000f)
			{
				fVar2 = 27f;
				fVar3 = 45f;
				fVar4 = 70f;
				fVar9 = 2f;
			}
			__LIB_30__.func_550(&fVar1, &Local_535, Local_536.f_0, fVar2, fVar3, fVar4, fVar5, fVar6, 1f, fVar7, fVar8, fVar9, 1, 0, 1097859072, 1);
			if (fParam1 > 114500f)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 290.1243f, -545.2184f, 38.397015f, 448.90536f, -554.20013f, 48.652863f, 19.25f, false, true, 0))
				{
					fVar1 = 1.2f;
				}
				else if (fParam1 < 120000f)
				{
					fVar1 = 2.2f;
					fVar10 = 1f;
				}
			}
			__LIB_11__.func_824(fParam0, fVar1, fVar10);
		}
	}
	else
	{
		fVar11 = *fParam0;
		fVar12 = 6f;
		fVar13 = 18f;
		fVar14 = 35f;
		fVar15 = 1.5f;
		if (fParam1 > 37000f && fParam1 < 42500f)
		{
			fVar12 = 8f;
			fVar13 = 22f;
			fVar15 = 1.6f;
		}
		else if (fParam1 > 54500f && fParam1 < 58000f)
		{
			fVar12 = 8f;
			fVar13 = 20f;
			fVar15 = 1.6f;
		}
		else if (fParam1 > 58000f && fParam1 < 63500f)
		{
			fVar13 = 15f;
			fVar14 = 22f;
		}
		else if (fParam1 > 63500f && fParam1 < 72500f)
		{
			fVar12 = 10f;
			fVar13 = 20f;
			fVar14 = 30f;
			fVar15 = 1.6f;
		}
		else if (fParam1 > 72500f && fParam1 < 81500f)
		{
			fVar14 = 30f;
			fVar15 = 1.6f;
		}
		else if (fParam1 > 81500f && fParam1 < 84000f)
		{
			fVar14 = 25f;
			fVar15 = 1.6f;
		}
		else if (fParam1 > 88000f && fParam1 < 96500f)
		{
			fVar14 = 20f;
			fVar15 = 1.6f;
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -423.23508f, -528.1853f, 22.334507f, -234.67183f, -527.77405f, 30.579157f, 27f, false, true, 0))
			{
				fVar12 = 12f;
				fVar13 = 30f;
				fVar14 = 45f;
				fVar15 = 1.6f;
			}
		}
		else if (fParam1 > 96500f && fParam1 < 102500f)
		{
			fVar14 = 20f;
			fVar15 = 1.6f;
		}
		else if (fParam1 > 102500f && fParam1 < 107500f)
		{
			fVar12 = 12f;
			fVar13 = 25f;
			fVar14 = 40f;
			fVar15 = 1.6f;
		}
		else if (fParam1 > 107500f && fParam1 < 110500f)
		{
			fVar12 = 14f;
			fVar13 = 30f;
			fVar14 = 50f;
			fVar15 = 1.6f;
		}
		else if (fParam1 > 110500f && fParam1 < 114000f)
		{
			fVar12 = 20f;
			fVar13 = 35f;
			fVar14 = 55f;
			fVar15 = 1.9f;
		}
		else if (fParam1 > 114500f && fParam1 < 118000f)
		{
			fVar12 = 40f;
			fVar13 = 50f;
			fVar14 = 70f;
			fVar15 = 3f;
		}
		else if (fParam1 > 118000f)
		{
			fVar12 = 20f;
			fVar13 = 35f;
			fVar14 = 65f;
			fVar15 = 2f;
		}
		func_401(Local_536.f_0, PLAYER::PLAYER_PED_ID(), &fVar11, 1f, fVar12, fVar13, fVar14, fVar15, 1065353216, 1060320051, 1);
		if (fParam1 > 114500f && fParam1 < 118000f)
		{
			fVar11 = 2.2f;
		}
		if (fParam1 > 114500f)
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 290.1243f, -545.2184f, 38.397015f, 448.90536f, -554.20013f, 48.652863f, 19.25f, false, true, 0))
			{
				fVar11 = 1.2f;
			}
		}
		*fParam0 = fVar11;
	}
}

void func_401(int iParam0, int iParam1, var uParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9, bool bParam10)//Position - 0x2FA21
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	int iVar10;
	if (iLocal_134 == 0)
	{
		if (*uParam2 < fParam3)
		{
			*uParam2 = fParam3;
			iLocal_134 = 1;
		}
	}
	if (fParam8 < 0f)
	{
		fParam8 = fLocal_182;
	}
	fVar0 = (fParam3 * fParam7);
	if (!fVar0 > fParam3)
	{
		fVar0 = (fParam3 + 0.1f);
	}
	fVar5 = (fParam3 * fParam9);
	fVar6 = (((fParam6 - fParam5) * 0.4f) + fParam5);
	fVar2 = __LIB_12__.func_35(iParam0, iParam1);
	if (fVar2 < 0f)
	{
		fVar2 = (fVar2 * -1f);
	}
	fVar3 = fVar2;
	if (fVar3 < fParam4)
	{
		fVar3 = fParam4;
	}
	if (fVar3 > fVar6)
	{
		fVar3 = fVar6;
	}
	fVar4 = fParam3;
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		if (__LIB_11__.func_140(iParam1, iParam0))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(iParam1, false))
			{
				fVar4 = fVar0;
			}
			else if (fVar2 < 50f)
			{
				fVar4 = fParam3;
			}
			else
			{
				fVar4 = fVar0;
			}
		}
		else if (fVar2 < fParam5)
		{
			if (__LIB_12__.func_34(iParam0, iParam1) < fParam5)
			{
				fVar1 = __LIB_12__.func_33(iParam0, iParam1);
				fVar1 = (fVar1 + -15f);
				if (fVar1 < 0f)
				{
					fVar1 = 0f;
				}
				if (fVar1 > 75f)
				{
					fVar1 = 75f;
				}
				fVar7 = ((75f - fVar1) / 75f);
			}
			else
			{
				fVar7 = 1f;
			}
			fVar4 = ((((((fParam5 - fParam4) - (fVar3 - fParam4)) / (fParam5 - fParam4)) * (fVar0 - fParam3)) * fVar7) + fParam3);
		}
		else if (fVar2 > fParam6)
		{
			fVar4 = fVar5;
			iLocal_135 = 1;
		}
		else if (iLocal_135)
		{
			if (fVar2 < fVar6)
			{
				fVar4 = fParam3;
				iLocal_135 = 0;
			}
			else
			{
				fVar4 = fVar5;
			}
		}
		else
		{
			fVar4 = fParam3;
		}
	}
	fVar1 = (fVar4 - *uParam2);
	if (fVar1 > 0f)
	{
		fVar1 = MISC::GET_FRAME_TIME();
		fVar8 = ((fLocal_189 * fParam3) * fVar1);
		fVar1 = (fVar4 - *uParam2);
		if (fVar1 > fVar8)
		{
			fVar1 = fVar8;
		}
		*uParam2 = (*uParam2 + fVar1);
	}
	else
	{
		fVar1 = MISC::GET_FRAME_TIME();
		fVar8 = ((fLocal_190 * fParam3) * fVar1);
		fVar1 = (fVar4 - *uParam2);
		if (fVar1 < (fVar8 * -1f))
		{
			fVar1 = (fVar8 * -1f);
		}
		*uParam2 = (*uParam2 + fVar1);
	}
	if (bParam10)
	{
		if (!PED::IS_PED_INJURED(iParam1))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(iParam1, false))
			{
				iVar9 = PED::GET_VEHICLE_PED_IS_IN(iParam1, false);
				if (!ENTITY::IS_ENTITY_DEAD(iVar9, false))
				{
					iVar10 = ENTITY::GET_ENTITY_MODEL(iVar9);
					if (VEHICLE::IS_THIS_MODEL_A_CAR(iVar10) || VEHICLE::IS_THIS_MODEL_A_BIKE(iVar10))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar9, false))
						{
							fVar1 = fVar4;
							if (fVar1 < fParam3)
							{
								fVar1 = fParam3;
							}
							fVar1 = (fVar1 - fParam3);
							fVar1 = (fVar1 / (fVar0 - fParam3));
							fVar1 = (fVar1 * fParam8);
							fVar1 = (fVar1 * (fLocal_180 - fLocal_181));
							fVar1 = (fVar1 + fLocal_181);
							fLocal_179 = fVar1;
							if (fLocal_179 < fLocal_181)
							{
								fLocal_179 = fLocal_181;
							}
							if (fLocal_179 > fLocal_180)
							{
								fLocal_179 = fLocal_180;
							}
							PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), fLocal_179);
						}
					}
				}
			}
		}
	}
}

void func_409()//Position - 0x30119
{
	int iVar0;
	int iVar1;
	if ((MISC::GET_GAME_TIMER() - iLocal_329) > 50)
	{
		if (__LIB_1__.func_183(iLocal_251[3]))
		{
			if (fLocal_341 > 28750f && fLocal_341 < 29750f)
			{
				VEHICLE::SET_VEHICLE_LIGHTS(iLocal_251[3], 2);
				VEHICLE::SET_VEHICLE_LIGHT_MULTIPLIER(iLocal_251[3], 2f);
				if (!iLocal_303[0])
				{
					VEHICLE::START_VEHICLE_HORN(iLocal_251[3], 3500, MISC::GET_HASH_KEY("HELDDOWN"), false);
					iLocal_303[0] = 1;
				}
			}
			else
			{
				VEHICLE::SET_VEHICLE_LIGHTS(iLocal_251[3], 1);
				VEHICLE::SET_VEHICLE_LIGHT_MULTIPLIER(iLocal_251[3], 1f);
			}
		}
		if (__LIB_1__.func_183(iLocal_251[5]))
		{
			if (fLocal_341 > 34500f && fLocal_341 < 35500f)
			{
				VEHICLE::SET_VEHICLE_LIGHTS(iLocal_251[5], 2);
				VEHICLE::SET_VEHICLE_LIGHT_MULTIPLIER(iLocal_251[5], 2f);
				if (!iLocal_303[1])
				{
					VEHICLE::START_VEHICLE_HORN(iLocal_251[5], 3000, MISC::GET_HASH_KEY("HELDDOWN"), false);
					iLocal_303[1] = 1;
				}
			}
			else
			{
				VEHICLE::SET_VEHICLE_LIGHTS(iLocal_251[5], 1);
				VEHICLE::SET_VEHICLE_LIGHT_MULTIPLIER(iLocal_251[5], 1f);
			}
		}
		if (__LIB_1__.func_183(iLocal_251[8]))
		{
			if (!bLocal_301)
			{
				bLocal_301 = func_410(iLocal_251[8], joaat("S_M_Y_Garbage"), 26);
			}
			if (fLocal_341 > 46000f && fLocal_341 < 47000f)
			{
				VEHICLE::SET_VEHICLE_LIGHTS(iLocal_251[8], 2);
				VEHICLE::SET_VEHICLE_LIGHT_MULTIPLIER(iLocal_251[8], 2f);
				if (!iLocal_303[2])
				{
					VEHICLE::START_VEHICLE_HORN(iLocal_251[8], 3500, MISC::GET_HASH_KEY("HELDDOWN"), false);
					iLocal_303[2] = 1;
				}
			}
			else if (fLocal_341 > 47500f && fLocal_341 < 48500f)
			{
				VEHICLE::SET_VEHICLE_LIGHTS(iLocal_251[8], 2);
				VEHICLE::SET_VEHICLE_LIGHT_MULTIPLIER(iLocal_251[8], 2f);
			}
			else
			{
				VEHICLE::SET_VEHICLE_LIGHTS(iLocal_251[8], 1);
				VEHICLE::SET_VEHICLE_LIGHT_MULTIPLIER(iLocal_251[8], 1f);
			}
		}
		if (__LIB_1__.func_183(iLocal_251[9]))
		{
			if (!bLocal_302)
			{
				bLocal_302 = func_410(iLocal_251[9], joaat("A_M_Y_Cyclist_01"), 26);
			}
		}
		if (__LIB_1__.func_183(iLocal_251[16]))
		{
			if (fLocal_341 > 69000f && fLocal_341 < 71000f)
			{
				VEHICLE::SET_VEHICLE_LIGHTS(iLocal_251[16], 2);
				VEHICLE::SET_VEHICLE_LIGHT_MULTIPLIER(iLocal_251[16], 2f);
				if (!iLocal_303[3])
				{
					VEHICLE::START_VEHICLE_HORN(iLocal_251[16], 3500, MISC::GET_HASH_KEY("HELDDOWN"), false);
					iLocal_303[3] = 1;
				}
			}
			else
			{
				VEHICLE::SET_VEHICLE_LIGHTS(iLocal_251[16], 1);
				VEHICLE::SET_VEHICLE_LIGHT_MULTIPLIER(iLocal_251[16], 1f);
			}
		}
		if (__LIB_1__.func_183(iLocal_248[17]))
		{
			if (!iLocal_303[4])
			{
				if (fLocal_341 > 78700f && fLocal_341 < 79300f)
				{
					VEHICLE::START_VEHICLE_HORN(iLocal_248[17], 3000, MISC::GET_HASH_KEY("HELDDOWN"), false);
					iLocal_303[4] = 1;
				}
			}
		}
		if (__LIB_1__.func_183(iLocal_248[19]))
		{
			if (!iLocal_303[4])
			{
				if (fLocal_341 > 79950f && fLocal_341 < 82300f)
				{
					VEHICLE::START_VEHICLE_HORN(iLocal_248[19], 3000, MISC::GET_HASH_KEY("HELDDOWN"), false);
					iLocal_303[4] = 1;
				}
			}
		}
		if (__LIB_1__.func_183(iLocal_251[20]))
		{
			if (!iLocal_303[5])
			{
				if (fLocal_341 > 84000f && fLocal_341 < 84750f)
				{
					VEHICLE::START_VEHICLE_HORN(iLocal_251[20], 3000, MISC::GET_HASH_KEY("HELDDOWN"), false);
					iLocal_303[5] = 1;
				}
			}
		}
		if (__LIB_1__.func_183(iLocal_251[21]))
		{
			if (fLocal_341 > 88000f && fLocal_341 < 90502f)
			{
				VEHICLE::SET_VEHICLE_LIGHTS(iLocal_251[21], 2);
				VEHICLE::SET_VEHICLE_LIGHT_MULTIPLIER(iLocal_251[21], 2f);
				if (!iLocal_303[6])
				{
					VEHICLE::START_VEHICLE_HORN(iLocal_251[21], 3500, MISC::GET_HASH_KEY("HELDDOWN"), false);
					iLocal_303[6] = 1;
				}
			}
			else
			{
				VEHICLE::SET_VEHICLE_LIGHTS(iLocal_251[21], 1);
				VEHICLE::SET_VEHICLE_LIGHT_MULTIPLIER(iLocal_251[21], 1f);
			}
		}
		if (__LIB_1__.func_183(iLocal_251[23]))
		{
			if (fLocal_341 > 84800f && fLocal_341 < 87000f)
			{
				VEHICLE::SET_VEHICLE_LIGHTS(iLocal_251[23], 2);
				VEHICLE::SET_VEHICLE_LIGHT_MULTIPLIER(iLocal_251[23], 2f);
				if (!iLocal_303[7])
				{
					VEHICLE::START_VEHICLE_HORN(iLocal_251[23], 3500, MISC::GET_HASH_KEY("HELDDOWN"), false);
					iLocal_303[7] = 1;
				}
			}
			else
			{
				VEHICLE::SET_VEHICLE_LIGHTS(iLocal_251[23], 1);
				VEHICLE::SET_VEHICLE_LIGHT_MULTIPLIER(iLocal_251[23], 1f);
			}
		}
		if (__LIB_1__.func_183(iLocal_248[21]))
		{
			if (!iLocal_303[8])
			{
				if (fLocal_341 > 98800f && fLocal_341 < 99400f)
				{
					VEHICLE::START_VEHICLE_HORN(iLocal_248[21], 2000, MISC::GET_HASH_KEY("HELDDOWN"), false);
					iLocal_303[8] = 1;
				}
			}
		}
		if (__LIB_1__.func_183(iLocal_248[23]))
		{
			if (fLocal_341 > 91200f && fLocal_341 < 92200f)
			{
				VEHICLE::SET_VEHICLE_LIGHTS(iLocal_248[23], 2);
				VEHICLE::SET_VEHICLE_LIGHT_MULTIPLIER(iLocal_248[23], 2f);
				if (!iLocal_303[9])
				{
					VEHICLE::START_VEHICLE_HORN(iLocal_248[23], 2000, MISC::GET_HASH_KEY("HELDDOWN"), false);
					iLocal_303[9] = 1;
				}
			}
			else
			{
				VEHICLE::SET_VEHICLE_LIGHTS(iLocal_248[23], 1);
				VEHICLE::SET_VEHICLE_LIGHT_MULTIPLIER(iLocal_248[23], 1f);
			}
		}
		if (__LIB_1__.func_183(iLocal_251[28]))
		{
			if (fLocal_341 > 93500f && fLocal_341 < 95000f)
			{
				VEHICLE::SET_VEHICLE_LIGHTS(iLocal_251[28], 2);
				VEHICLE::SET_VEHICLE_LIGHT_MULTIPLIER(iLocal_251[28], 2f);
				if (!iLocal_303[10])
				{
					VEHICLE::START_VEHICLE_HORN(iLocal_251[28], 3500, MISC::GET_HASH_KEY("HELDDOWN"), false);
					iLocal_303[10] = 1;
				}
			}
			else
			{
				VEHICLE::SET_VEHICLE_LIGHTS(iLocal_251[28], 1);
				VEHICLE::SET_VEHICLE_LIGHT_MULTIPLIER(iLocal_251[28], 1f);
			}
		}
		if (__LIB_1__.func_183(iLocal_251[29]))
		{
			if (!iLocal_303[11])
			{
				if (fLocal_341 > 104500f && fLocal_341 < 105000f)
				{
					VEHICLE::START_VEHICLE_HORN(iLocal_251[29], 2000, MISC::GET_HASH_KEY("HELDDOWN"), false);
					iLocal_303[11] = 1;
				}
			}
		}
		if (__LIB_1__.func_183(iLocal_250[31]))
		{
			if (!VEHICLE::IS_VEHICLE_DOOR_FULLY_OPEN(iLocal_250[31], 2))
			{
				VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_250[31], 2, false, false);
			}
			if (!VEHICLE::IS_VEHICLE_DOOR_FULLY_OPEN(iLocal_250[31], 3))
			{
				VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_250[31], 3, false, false);
			}
			if (!VEHICLE::IS_VEHICLE_SIREN_ON(iLocal_250[31]))
			{
				VEHICLE::SET_VEHICLE_SIREN(iLocal_250[31], true);
			}
		}
		if (__LIB_1__.func_183(iLocal_251[22]))
		{
			if (!VEHICLE::IS_VEHICLE_SIREN_ON(iLocal_251[22]))
			{
				VEHICLE::SET_VEHICLE_SIREN(iLocal_251[22], true);
			}
		}
		if (__LIB_1__.func_183(iLocal_251[19]))
		{
			iVar0 = -1;
			iVar1 = -1;
			VEHICLE::GET_VEHICLE_LIGHTS_STATE(iLocal_251[19], &iVar0, &iVar1);
			if (iVar0 != 1)
			{
				VEHICLE::SET_VEHICLE_LIGHTS(iLocal_251[19], 2);
				VEHICLE::SET_VEHICLE_LIGHT_MULTIPLIER(iLocal_251[19], 2f);
			}
			if (iLocal_332 == -1)
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_251[19]))
				{
					iLocal_332 = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_332, "FAKE_REVS_VEHICLE_02", iLocal_251[19], "NIGEL_02_SOUNDSET", false, 0);
				}
			}
			else if (!AUDIO::HAS_SOUND_FINISHED(iLocal_332))
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_251[19]))
				{
					AUDIO::STOP_SOUND(iLocal_332);
					AUDIO::RELEASE_SOUND_ID(iLocal_332);
					iLocal_332 = -1;
				}
			}
		}
		iLocal_329 = MISC::GET_GAME_TIMER();
	}
}

int func_410(int iParam0, int iParam1, int iParam2)//Position - 0x30887
{
	bool bVar0;
	int iVar1;
	int iVar2;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		bVar0 = false;
		iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (iVar1 != PLAYER::PLAYER_PED_ID())
			{
				if (ENTITY::GET_ENTITY_MODEL(iVar1) != iParam1)
				{
					bVar0 = true;
				}
				else
				{
					return 1;
				}
			}
		}
		else
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			STREAMING::REQUEST_MODEL(iParam1);
			if (STREAMING::HAS_MODEL_LOADED(iParam1))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar1, true, false);
					PED::DELETE_PED(&iVar1);
				}
				iVar2 = PED::CREATE_PED_INSIDE_VEHICLE(iParam0, iParam2, iParam1, -1, false, false);
				if (__LIB_11__.func_110(ENTITY::GET_ENTITY_MODEL(iParam0)))
				{
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar2, iLocal_241);
				}
				PED::SET_PED_RANDOM_COMPONENT_VARIATION(iVar2, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar2, true);
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iVar2, true);
				PED::SET_PED_SUFFERS_CRITICAL_HITS(iVar2, false);
				PED::SET_PED_CONFIG_FLAG(iVar2, 32, false);
				if (bLocal_151)
				{
					PED::SET_PED_FLEE_ATTRIBUTES(iVar2, 8192, true);
					PED::SET_PED_FLEE_ATTRIBUTES(iVar2, 65536, true);
					PED::SET_PED_FLEE_ATTRIBUTES(iVar2, 2, false);
					VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(iParam0, true);
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam1);
				__LIB_11__.func_109(iVar2);
				return 1;
			}
		}
	}
	return 0;
}

void func_413(int iParam0, float fParam1)//Position - 0x30A13
{
	float fVar0;
	struct<3> Var1;
	int iVar2;
	fVar0 = MISC::GET_FRAME_TIME();
	fVar0 = (fVar0 * 1000f);
	bLocal_149 = false;
	if (!bLocal_131)
	{
		if (bLocal_130)
		{
			__LIB_11__.func_121();
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				MISC::CLEAR_AREA(Var1, 1000f, true, false, false, false);
			}
			bLocal_131 = true;
		}
	}
	else if (!bLocal_130)
	{
		__LIB_11__.func_126();
		bLocal_131 = false;
	}
	if (bLocal_130)
	{
		fParam1 = 1f;
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	}
	if (!bLocal_124)
	{
		if (iLocal_119)
		{
			fLocal_176 = 0f;
		}
		else
		{
			fLocal_176 = 1f;
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
			{
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					if (__LIB_11__.func_140(PLAYER::PLAYER_PED_ID(), iParam0))
					{
						iLocal_129 = 1;
					}
					else
					{
						iLocal_129 = 0;
					}
				}
				fLocal_173 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iParam0);
				VEHICLE::SET_PLAYBACK_SPEED(iParam0, ((fParam1 * fLocal_174) * fLocal_176));
				if (bLocal_128)
				{
					func_433(iParam0, fLocal_173);
					func_432(iParam0, fLocal_183);
					if (fLocal_178 > 1000f)
					{
						if (iLocal_215 == 0)
						{
							func_431(iParam0, fLocal_183);
						}
						fVar0 = ((fLocal_173 + 4000f) + (SYSTEM::TO_FLOAT(iLocal_215) * 2000f));
						func_430(iParam0, fVar0, fLocal_177);
						iLocal_215++;
						if (iLocal_215 > 2)
						{
							fLocal_178 = 0f;
						}
					}
					else
					{
						iLocal_215 = 0;
						fLocal_178 = (fLocal_178 + (MISC::GET_FRAME_TIME() * 1000f));
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
		if (fLocal_173 == 0f || CAM::IS_SCREEN_FADED_OUT())
		{
			iVar2 = 1;
		}
		if (iVar2 && !bLocal_136)
		{
			if (!iLocal_118)
			{
				func_427(iParam0, ((fParam1 * fLocal_174) * fLocal_176), 0);
				if (!iLocal_139)
				{
				}
				iLocal_139 = 0;
			}
			if (bLocal_121)
			{
				func_426(iParam0);
			}
			if (!iLocal_118)
			{
				func_416(iParam0, ((fParam1 * fLocal_174) * fLocal_176), 0);
			}
		}
		if (iLocal_126)
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iLocal_253 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					Local_219 = { ENTITY::GET_ENTITY_COORDS(iLocal_253, true) };
					ENTITY::GET_ENTITY_QUATERNION(iLocal_253, &fLocal_157, &fLocal_158, &fLocal_159, &fLocal_160);
				}
			}
			iLocal_126 = 0;
		}
		if (iLocal_125)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_253))
			{
				__LIB_11__.func_122(iLocal_254);
				iLocal_254 = iLocal_253;
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_254, false))
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_254, Local_219, true, false, false, true);
				ENTITY::SET_ENTITY_QUATERNION(iLocal_254, fLocal_157, fLocal_158, fLocal_159, fLocal_160);
			}
			fLocal_172 = fLocal_175;
			iLocal_118 = 1;
			iLocal_125 = 0;
		}
		if (iLocal_118)
		{
			while (!func_414(&iParam0, fLocal_172))
			{
				SYSTEM::WAIT(0);
			}
			iLocal_119 = 1;
		}
		if (iLocal_132)
		{
			iLocal_132 = 0;
		}
	}
}

int func_414(int iParam0, float fParam1)//Position - 0x30CAE
{
	if (!iLocal_133)
	{
		iLocal_118 = 1;
		func_80();
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*iParam0);
				VEHICLE::SET_VEHICLE_FIXED(*iParam0);
			}
			if (!iLocal_202 == -1)
			{
				while (!func_415(iParam0, iLocal_202, fParam1, 1, 0, 0, 0, 0))
				{
					SYSTEM::WAIT(0);
				}
				if (!bLocal_123)
				{
					iLocal_119 = 1;
					fLocal_176 = 0f;
					iLocal_203 = 0;
					iLocal_205 = 0;
					iLocal_204 = 0;
					iLocal_199 = 0;
					iLocal_200 = 0;
					iLocal_201 = 0;
					iLocal_206 = 0;
					iLocal_207 = 0;
					iLocal_208 = 0;
				}
			}
		}
		iLocal_133 = 1;
	}
	else
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0))
			{
				VEHICLE::SET_PLAYBACK_SPEED(*iParam0, ((1f * fLocal_174) * fLocal_176));
				func_415(iParam0, iLocal_202, fParam1, 1, 0, 0, 0, 0);
			}
		}
		fLocal_173 = fParam1;
		iLocal_209 = 0;
		iLocal_212 = 0;
		fLocal_188 = 0f;
		fLocal_187 = 0f;
		func_416(*iParam0, ((1f * fLocal_174) * fLocal_176), 1);
		func_427(*iParam0, ((1f * fLocal_174) * fLocal_176), 1);
		func_426(*iParam0);
		if ((iLocal_206 == 0 && iLocal_207 == 0) && iLocal_208 == 0)
		{
			iLocal_119 = 0;
			iLocal_118 = 0;
			iLocal_133 = 0;
			return 1;
		}
	}
	return 0;
}

int func_415(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x30DE0
{
	float fVar0;
	if (iParam1 > 0)
	{
		VEHICLE::REQUEST_VEHICLE_RECORDING(iParam1, &cLocal_232);
		if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam1, &cLocal_232))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false))
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*uParam0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(*uParam0, false);
					if (bParam4)
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(*uParam0, iParam1, &cLocal_232, 10f, 786603);
					}
					else
					{
						if (iParam1 != iLocal_210 && iParam1 != iLocal_211)
						{
							if (bParam7)
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*uParam0, iParam1, &cLocal_232, 2 | 4, 0, 786603);
							}
							else if (bParam6)
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*uParam0, iParam1, &cLocal_232, 1 | 4, 0, 786603);
							}
							else
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*uParam0, iParam1, &cLocal_232, true);
							}
						}
						else
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*uParam0, iParam1, &cLocal_232, true);
						}
						VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*uParam0, fParam2);
						if (bParam5)
						{
							VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(*uParam0, true);
						}
						return 1;
					}
				}
				else if (VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(*uParam0) == VEHICLE::GET_VEHICLE_RECORDING_ID(iParam1, &cLocal_232))
				{
					fVar0 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(*uParam0);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*uParam0, (fParam2 - fVar0));
					if (!bParam3)
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*uParam0);
						VEHICLE::REQUEST_VEHICLE_RECORDING(iParam1, &cLocal_232);
					}
					if (bParam5)
					{
						VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(*uParam0, true);
					}
					return 1;
				}
				else
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*uParam0);
					ENTITY::FREEZE_ENTITY_POSITION(*uParam0, false);
					if (bParam4)
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(*uParam0, iParam1, &cLocal_232, 10f, 786603);
					}
					else if (iParam1 != iLocal_210 && iParam1 != iLocal_211)
					{
						if (bParam7)
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*uParam0, iParam1, &cLocal_232, 2 | 4, 0, 786603);
						}
						else if (bParam6)
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*uParam0, iParam1, &cLocal_232, 1 | 4, 0, 786603);
						}
						else
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*uParam0, iParam1, &cLocal_232, true);
						}
					}
					else
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*uParam0, iParam1, &cLocal_232, true);
					}
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*uParam0, fParam2);
					if (bParam5)
					{
						VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(*uParam0, true);
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_416(int iParam0, float fParam1, bool bParam2)//Position - 0x30FC6
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
		iVar0 = iLocal_205;
		while (iVar0 < 70)
		{
			if (iLocal_196[iVar0] != 99)
			{
				if (iLocal_196[iVar0] == 0)
				{
					if (iLocal_195[iVar0] > 0)
					{
						if (!iLocal_118)
						{
							if (fLocal_173 > (fLocal_165[iVar0] - (7000f * fParam1)))
							{
								if (__LIB_11__.func_110(iLocal_244[iVar0]))
								{
									MISC::SET_BIT(&(iLocal_197[iVar0]), 0);
								}
								else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_244[iVar0]))
								{
									MISC::SET_BIT(&(iLocal_197[iVar0]), 2);
								}
								MISC::CLEAR_BIT(&(iLocal_197[iVar0]), 1);
								iLocal_196[iVar0]++;
								iLocal_207++;
							}
						}
						else
						{
							fVar6 = (fLocal_173 - fLocal_165[iVar0]);
							fVar6 = (fVar6 * fLocal_166[iVar0]);
							if (fVar6 >= 0f)
							{
								if (fVar6 < func_425(iLocal_195[iVar0]))
								{
									if (__LIB_11__.func_110(iLocal_244[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_197[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_244[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_197[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_197[iVar0]), 1);
									iLocal_196[iVar0]++;
									iLocal_207++;
								}
								else
								{
									iLocal_196[iVar0] = 99;
								}
							}
						}
					}
					else
					{
						iLocal_196[iVar0] = 99;
					}
				}
				else if (iLocal_196[iVar0] == 1)
				{
					bVar8 = false;
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_195[iVar0], &cLocal_232);
					if (BitTest(iLocal_197[iVar0], 0))
					{
						STREAMING::REQUEST_MODEL(__LIB_11__.func_123());
						bVar8 = STREAMING::HAS_MODEL_LOADED(__LIB_11__.func_123());
					}
					else if (!bLocal_145 && ((!BitTest(iLocal_197[iVar0], 2) && bVar10) || (BitTest(iLocal_197[iVar0], 2) && bVar11)))
					{
						bVar8 = true;
					}
					else
					{
						STREAMING::REQUEST_MODEL(func_92());
						bVar8 = STREAMING::HAS_MODEL_LOADED(func_92());
					}
					if (bVar8)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_251[iVar0]))
						{
							STREAMING::REQUEST_MODEL(iLocal_244[iVar0]);
							if (STREAMING::HAS_MODEL_LOADED(iLocal_244[iVar0]) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_195[iVar0], &cLocal_232))
							{
								if (fLocal_173 >= (fLocal_165[iVar0] - (fLocal_186 * fParam1)))
								{
									if ((iLocal_132 || bParam2) || (!bLocal_149 && !func_424(Local_218[iVar0 /*3*/], Var5, 5f, fLocal_184)))
									{
										if (bLocal_128)
										{
											func_423(Local_218[iVar0 /*3*/], Var5, fLocal_177);
										}
										iLocal_251[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_244[iVar0], Local_218[iVar0 /*3*/], 0f, false, false, false);
										if (iLocal_244[iVar0] == joaat("polmav"))
										{
											VEHICLE::SET_VEHICLE_LIVERY(iLocal_251[iVar0], 0);
										}
										if (iLocal_141 && !BitTest(iLocal_197[iVar0], 0))
										{
											func_422(iLocal_251[iVar0]);
										}
										if (BitTest(iLocal_197[iVar0], 3))
										{
											ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_251[iVar0], true);
										}
										ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_251[iVar0], Local_218[iVar0 /*3*/], false, false, true);
										ENTITY::SET_ENTITY_QUATERNION(iLocal_251[iVar0], fLocal_161[iVar0], fLocal_162[iVar0], fLocal_163[iVar0], fLocal_164[iVar0]);
										if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_244[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_244[iVar0]))
										{
											VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_251[iVar0], 5f);
										}
										if (!BitTest(iLocal_197[iVar0], 0))
										{
											VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_251[iVar0], true, true, false);
											if (CLOCK::GET_CLOCK_HOURS() > 19 || CLOCK::GET_CLOCK_HOURS() < 7)
											{
												VEHICLE::SET_VEHICLE_LIGHTS(iLocal_251[iVar0], 3);
											}
										}
										ENTITY::FREEZE_ENTITY_POSITION(iLocal_251[iVar0], true);
										STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_244[iVar0]);
										iLocal_207 = (iLocal_207 - 1);
										iLocal_196[iVar0]++;
										bLocal_149 = true;
									}
								}
							}
						}
						else if (!ENTITY::IS_ENTITY_DEAD(iLocal_251[iVar0], false) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_251[iVar0], false))
						{
							ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_251[iVar0], Local_218[iVar0 /*3*/], false, false, true);
							ENTITY::SET_ENTITY_QUATERNION(iLocal_251[iVar0], fLocal_161[iVar0], fLocal_162[iVar0], fLocal_163[iVar0], fLocal_164[iVar0]);
							if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_244[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_244[iVar0]))
							{
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_251[iVar0], 5f);
							}
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_251[iVar0], true);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_244[iVar0]);
							iLocal_207 = (iLocal_207 - 1);
							iLocal_196[iVar0]++;
						}
					}
				}
				else if (iLocal_196[iVar0] == 2)
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_195[iVar0], &cLocal_232);
					if (!BitTest(iLocal_197[iVar0], 1))
					{
						bVar8 = false;
						if (BitTest(iLocal_197[iVar0], 0))
						{
							STREAMING::REQUEST_MODEL(__LIB_11__.func_123());
							bVar8 = STREAMING::HAS_MODEL_LOADED(__LIB_11__.func_123());
							iVar13 = 2;
						}
						else if (!bLocal_145 && ((!BitTest(iLocal_197[iVar0], 2) && bVar10) || (BitTest(iLocal_197[iVar0], 2) && bVar11)))
						{
							bVar8 = true;
							iVar13 = 1;
						}
						else
						{
							STREAMING::REQUEST_MODEL(func_92());
							bVar8 = STREAMING::HAS_MODEL_LOADED(func_92());
							iVar13 = 0;
						}
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_251[iVar0], false))
						{
							if (!bLocal_149 && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_251[iVar0], -1, false))
							{
								if (bVar8)
								{
									if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_251[iVar0], true), Var5) < 10000f || bParam2) || iLocal_132)
									{
										func_421(&(iLocal_251[iVar0]), iVar13, 1);
										MISC::SET_BIT(&(iLocal_197[iVar0]), 1);
									}
								}
							}
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_251[iVar0], false))
					{
						if (fLocal_173 >= fLocal_165[iVar0])
						{
							if (11 > iLocal_200)
							{
								fVar6 = (fLocal_173 - fLocal_165[iVar0]);
								fVar6 = (fVar6 * fLocal_166[iVar0]);
								if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_195[iVar0], &cLocal_232))
								{
									if (fVar6 < VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_195[iVar0], &cLocal_232))
									{
										Var3 = { ENTITY::GET_ENTITY_COORDS(iLocal_251[iVar0], true) };
										Var4 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_195[iVar0], fVar6, &cLocal_232) };
										if (((!func_424(Var3, Var5, 5f, fLocal_184) && func_424(Var4, Var5, 5f, fLocal_184)) && !iLocal_132) && !bParam2)
										{
											if (!BitTest(iLocal_197[iVar0], 1))
											{
												func_421(&(iLocal_251[iVar0]), iVar13, 1);
											}
											iLocal_200++;
											iLocal_196[iVar0]++;
										}
										else if (((!bLocal_149 || BitTest(iLocal_197[iVar0], 1)) || iLocal_132) || bParam2)
										{
											if (func_415(&(iLocal_251[iVar0]), iLocal_195[iVar0], fVar6, 1, 0, 0, bLocal_147, bLocal_146))
											{
												VEHICLE::SET_PLAYBACK_SPEED(iLocal_251[iVar0], (fParam1 * fLocal_166[iVar0]));
												if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_251[iVar0], false))
												{
													if (BitTest(iLocal_197[iVar0], 0))
													{
														VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_251[iVar0], true, true, false);
														VEHICLE::SET_VEHICLE_SIREN(iLocal_251[iVar0], true);
														VEHICLE::SET_VEHICLE_LIGHTS(iLocal_251[iVar0], 2);
														if (!VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_244[iVar0]))
														{
															AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_251[iVar0], true);
														}
													}
												}
												if (!BitTest(iLocal_197[iVar0], 1))
												{
													func_421(&(iLocal_251[iVar0]), iVar13, 1);
												}
												iLocal_200++;
												iLocal_196[iVar0]++;
											}
										}
									}
									else
									{
										if (!BitTest(iLocal_197[iVar0], 1))
										{
											func_421(&(iLocal_251[iVar0]), iVar13, 1);
										}
										iLocal_200++;
										iLocal_196[iVar0]++;
									}
								}
							}
							else
							{
								if (!BitTest(iLocal_197[iVar0], 1))
								{
									func_421(&(iLocal_251[iVar0]), iVar13, 1);
								}
								iLocal_200++;
								iLocal_196[iVar0]++;
							}
						}
					}
					else
					{
						if (!BitTest(iLocal_197[iVar0], 1))
						{
							func_421(&(iLocal_251[iVar0]), iVar13, 1);
						}
						iLocal_200++;
						iLocal_196[iVar0]++;
					}
				}
				else if (iLocal_196[iVar0] == 3)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_251[iVar0], false))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_251[iVar0]))
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_251[iVar0], -1, false);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								if (bVar9)
								{
									if (((!bLocal_122 && !iLocal_119) && !bLocal_138) && (((!bLocal_147 && !bLocal_146) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_251[iVar0])) || func_420(iLocal_251[iVar0])))
									{
										if (ENTITY::DOES_ENTITY_EXIST(iVar2))
										{
											bVar8 = false;
											if (bLocal_140)
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
												else if (MISC::ABSF((fVar7 - ENTITY::GET_ENTITY_SPEED(iLocal_251[iVar0]))) > 15f)
												{
													bVar8 = true;
												}
												else if (!__LIB_11__.func_138(iLocal_251[iVar0], iVar2, 45f))
												{
													bVar8 = true;
												}
												else if (__LIB_20__.func_444(iVar2, iLocal_251[iVar0], 0))
												{
													bVar8 = true;
												}
											}
											if (bVar8)
											{
												func_417(iLocal_251[iVar0]);
												iLocal_196[iVar0]++;
											}
										}
									}
									else
									{
										VEHICLE::SET_PLAYBACK_SPEED(iLocal_251[iVar0], (fParam1 * fLocal_166[iVar0]));
									}
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_251[iVar0]);
							}
						}
						else
						{
							iLocal_196[iVar0]++;
						}
					}
					else
					{
						iLocal_196[iVar0]++;
					}
				}
				else if (iLocal_196[iVar0] == 4)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_251[iVar0], false))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_251[iVar0]))
						{
							iLocal_196[iVar0]++;
						}
						else
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_251[iVar0], -1, false);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								VEHICLE::SET_PLAYBACK_SPEED(iLocal_251[iVar0], (fParam1 * fLocal_166[iVar0]));
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_251[iVar0]);
							}
							if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_195[iVar0], &cLocal_232))
							{
								if (fLocal_173 > (fLocal_165[iVar0] + VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_195[iVar0], &cLocal_232)))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_251[iVar0]);
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_251[iVar0]);
							}
						}
					}
					else
					{
						iLocal_196[iVar0]++;
					}
				}
				else if (iLocal_196[iVar0] == 5)
				{
					if (!iLocal_251[iVar0] == iLocal_255)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_251[iVar0], false))
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_251[iVar0], -1, false);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								iVar14 = TASK::GET_SCRIPT_TASK_STATUS(iVar1, joaat("SCRIPT_TASK_PERFORM_SEQUENCE"));
								if (iVar14 == 7)
								{
									fVar7 = ENTITY::GET_ENTITY_SPEED(iLocal_251[iVar0]);
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
						if (!bLocal_130 && !bLocal_143)
						{
							if (iLocal_195[iVar0] > 0)
							{
								VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_195[iVar0], &cLocal_232);
							}
						}
						if (!bLocal_120)
						{
							if (!bLocal_148)
							{
								__LIB_11__.func_122(iLocal_251[iVar0]);
							}
						}
						else if (ENTITY::DOES_ENTITY_EXIST(iLocal_251[iVar0]))
						{
							VEHICLE::DELETE_VEHICLE(&(iLocal_251[iVar0]));
						}
					}
					iLocal_200 = (iLocal_200 - 1);
					iLocal_196[iVar0] = 99;
				}
				if (!bVar12)
				{
					iLocal_205 = iVar0;
					bVar12 = true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		func_84();
	}
}

void func_417(int iParam0)//Position - 0x31BA4
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		func_86(iParam0);
		VEHICLE::SET_PLAYBACK_TO_USE_AI(iParam0, 786603);
	}
}

int func_420(int iParam0)//Position - 0x31CE6
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (bLocal_144)
	{
		iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (!ENTITY::IS_ENTITY_DEAD(iVar1, false))
		{
			iVar2 = ENTITY::GET_ENTITY_MODEL(iVar1);
			if (iVar2 == joaat("phantom"))
			{
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iVar1))
				{
					if (VEHICLE::GET_VEHICLE_TRAILER_VEHICLE(iVar1, &iVar0))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar0, iParam0))
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

int func_421(var uParam0, int iParam1, bool bParam2)//Position - 0x31D44
{
	int iVar0;
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0, false))
	{
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(*uParam0, -1, false))
		{
			if (iParam1 == 2)
			{
				iVar0 = PED::CREATE_PED_INSIDE_VEHICLE(*uParam0, 6, __LIB_11__.func_123(), -1, false, false);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, iLocal_241);
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
				iVar0 = PED::CREATE_PED_INSIDE_VEHICLE(*uParam0, 4, func_92(), -1, false, false);
				if (bLocal_150)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_92());
				}
			}
			if (bParam2)
			{
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iVar0, true);
				PED::SET_PED_SUFFERS_CRITICAL_HITS(iVar0, false);
				PED::SET_PED_CONFIG_FLAG(iVar0, 32, false);
			}
			if (bLocal_151)
			{
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 8192, true);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 65536, true);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 2, false);
				VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(*uParam0, true);
			}
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
			__LIB_11__.func_109(iVar0);
			bLocal_149 = true;
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_422(int iParam0)//Position - 0x31E3B
{
	int iVar0;
	int iVar1;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 12);
	if (iLocal_246 >= -1 && iLocal_247 >= -1)
	{
		while (iVar0 == iLocal_246 || iVar0 == iLocal_247)
		{
			iVar0++;
		}
	}
	else if (iLocal_246 >= -1)
	{
		if (iVar0 == iLocal_246)
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

void func_423(struct<3> Param0, struct<3> Param1, float fParam2)//Position - 0x31FB4
{
	bool bVar0;
	int iVar1;
	bVar0 = true;
	if (!bLocal_131)
	{
		if (!func_424(Param0, Param1, fParam2, 200f))
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

int func_424(struct<3> Param0, struct<3> Param1, float fParam2, float fParam3)//Position - 0x32027
{
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		if (!bLocal_131)
		{
			if (!iLocal_118)
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

float func_425(int iParam0)//Position - 0x3206E
{
	float fVar0;
	VEHICLE::REQUEST_VEHICLE_RECORDING(iParam0, &cLocal_232);
	while (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam0, &cLocal_232))
	{
		SYSTEM::WAIT(0);
	}
	fVar0 = VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iParam0, &cLocal_232);
	VEHICLE::REMOVE_VEHICLE_RECORDING(iParam0, &cLocal_232);
	return fVar0;
}

void func_426(int iParam0)//Position - 0x320AA
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
		iVar0 = iLocal_204;
		while (iVar0 < 70)
		{
			switch (iLocal_198[iVar0])
			{
				case 0:
					if (!iLocal_243[iVar0] == 0)
					{
						if (ENTITY::IS_ENTITY_AT_COORD(iParam0, Local_217[iVar0 /*3*/], fLocal_171, fLocal_171, fLocal_171, false, true, 0))
						{
							iLocal_206++;
							iLocal_198[iVar0]++;
						}
					}
					else
					{
						iLocal_198[iVar0] = 99;
					}
					break;
				case 1:
					if (10 > iLocal_201)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_250[iVar0]))
						{
							STREAMING::REQUEST_MODEL(iLocal_243[iVar0]);
							if (STREAMING::HAS_MODEL_LOADED(iLocal_243[iVar0]))
							{
								if ((iLocal_118 || iLocal_132) || (!bLocal_149 && !func_424(Local_217[iVar0 /*3*/], Var1, 5f, fLocal_184)))
								{
									if (bLocal_128)
									{
										func_423(Local_217[iVar0 /*3*/], Var1, fLocal_177);
									}
									iLocal_250[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_243[iVar0], Local_217[iVar0 /*3*/], 0f, false, false, false);
									if (iLocal_243[iVar0] == joaat("polmav"))
									{
										VEHICLE::SET_VEHICLE_LIVERY(iLocal_250[iVar0], 0);
									}
									ENTITY::SET_ENTITY_QUATERNION(iLocal_250[iVar0], fLocal_167[iVar0], fLocal_168[iVar0], fLocal_169[iVar0], fLocal_170[iVar0]);
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_243[iVar0]);
									if (VEHICLE::IS_VEHICLE_MODEL(iLocal_250[iVar0], __LIB_11__.func_124()))
									{
										VEHICLE::SET_VEHICLE_SIREN(iLocal_250[iVar0], true);
										if (!VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_243[iVar0]))
										{
											AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_250[iVar0], true);
										}
									}
									if (VEHICLE::IS_VEHICLE_MODEL(iLocal_250[iVar0], __LIB_11__.func_125()))
									{
										VEHICLE::SET_VEHICLE_COLOURS(iLocal_250[iVar0], 0, 0);
									}
									ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_250[iVar0], true);
									iLocal_206 = (iLocal_206 - 1);
									iLocal_201++;
									iLocal_198[iVar0]++;
									bLocal_149 = true;
								}
							}
						}
						else
						{
							iLocal_206 = (iLocal_206 - 1);
							iLocal_201++;
							iLocal_198[iVar0]++;
						}
					}
					break;
				case 2:
					if (!bVar3)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_250[iVar0], false))
						{
							Var2 = { ENTITY::GET_ENTITY_COORDS(iLocal_250[iVar0], true) };
						}
						if (fLocal_185 == 0f || SYSTEM::VDIST2(Var1, Var2) < (fLocal_185 * fLocal_185))
						{
							if (!__LIB_20__.func_444(iLocal_250[iVar0], iParam0, 0))
							{
								if (!bLocal_120)
								{
									__LIB_11__.func_122(iLocal_250[iVar0]);
								}
								else
								{
									VEHICLE::DELETE_VEHICLE(&(iLocal_250[iVar0]));
								}
								iLocal_201 = (iLocal_201 - 1);
								iLocal_198[iVar0] = 99;
								bVar3 = true;
							}
						}
					}
					break;
			}
			if (iLocal_198[iVar0] != 99)
			{
				if (!bVar4)
				{
					iLocal_204 = iVar0;
					bVar4 = true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		func_87();
	}
}

void func_427(int iParam0, float fParam1, int iParam2)//Position - 0x323A2
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
			fLocal_173 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iParam0);
		}
		iVar16 = -1;
		bVar17 = false;
		bVar18 = false;
		iVar0 = iLocal_203;
		while (iVar0 < 85 && !bVar17)
		{
			if (iLocal_193[iVar0] != 99)
			{
				if (iLocal_193[iVar0] == 0)
				{
					if (iLocal_192[iVar0] > 0 && iLocal_242[iVar0] != 0)
					{
						if (!iLocal_118)
						{
							if (fLocal_173 < (fLocal_156[iVar0] + 20000f))
							{
								if (fLocal_173 >= (fLocal_156[iVar0] - (7000f * fParam1)))
								{
									if (__LIB_11__.func_110(iLocal_242[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_194[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_242[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_194[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_194[iVar0]), 1);
									iLocal_208++;
									iLocal_193[iVar0]++;
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
								func_429(iVar0, 1090519040);
							}
						}
						else
						{
							fVar9 = (fLocal_173 - fLocal_156[iVar0]);
							if (fVar9 >= 0f)
							{
								if (fVar9 < func_425(iLocal_192[iVar0]))
								{
									if (__LIB_11__.func_110(iLocal_242[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_194[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_242[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_194[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_194[iVar0]), 1);
									iLocal_208++;
									iLocal_193[iVar0]++;
								}
								else
								{
									func_429(iVar0, 1090519040);
								}
							}
						}
					}
					else
					{
						func_429(iVar0, 1090519040);
					}
				}
				else if (iLocal_193[iVar0] == 1)
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_192[iVar0], &cLocal_232);
					bVar11 = false;
					if (BitTest(iLocal_194[iVar0], 0))
					{
						STREAMING::REQUEST_MODEL(__LIB_11__.func_123());
						if (STREAMING::HAS_MODEL_LOADED(__LIB_11__.func_123()))
						{
							bVar11 = true;
						}
					}
					else if (!bLocal_145 && ((!BitTest(iLocal_194[iVar0], 2) && bVar13) || (BitTest(iLocal_194[iVar0], 2) && bVar14)))
					{
						bVar11 = true;
					}
					else
					{
						STREAMING::REQUEST_MODEL(func_92());
						bVar11 = STREAMING::HAS_MODEL_LOADED(func_92());
					}
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_248[iVar0]))
					{
						STREAMING::REQUEST_MODEL(iLocal_242[iVar0]);
						if ((STREAMING::HAS_MODEL_LOADED(iLocal_242[iVar0]) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_192[iVar0], &cLocal_232)) && bVar11)
						{
							if (fLocal_173 >= (fLocal_156[iVar0] - (fLocal_186 * fParam1)))
							{
								if ((iLocal_132 || iParam2) || (!bLocal_149 && !func_424(Local_216[iVar0 /*3*/], Var8, 5f, fLocal_184)))
								{
									if (bLocal_128)
									{
										func_423(Local_216[iVar0 /*3*/], Var8, fLocal_177);
									}
									iLocal_248[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_242[iVar0], Local_216[iVar0 /*3*/], 0f, false, false, false);
									if (iLocal_242[iVar0] == joaat("polmav"))
									{
										VEHICLE::SET_VEHICLE_LIVERY(iLocal_248[iVar0], 0);
									}
									if (iLocal_141 && !BitTest(iLocal_194[iVar0], 0))
									{
										func_422(iLocal_248[iVar0]);
									}
									ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_248[iVar0], Local_216[iVar0 /*3*/], false, false, true);
									ENTITY::SET_ENTITY_QUATERNION(iLocal_248[iVar0], fLocal_152[iVar0], fLocal_153[iVar0], fLocal_154[iVar0], fLocal_155[iVar0]);
									if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_242[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_242[iVar0]))
									{
										VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_248[iVar0], 5f);
									}
									if (BitTest(iLocal_194[iVar0], 3))
									{
										ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_248[iVar0], true);
									}
									if (!BitTest(iLocal_194[iVar0], 0))
									{
										VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_248[iVar0], true, true, false);
										if (CLOCK::GET_CLOCK_HOURS() > 19 || CLOCK::GET_CLOCK_HOURS() < 7)
										{
											VEHICLE::SET_VEHICLE_LIGHTS(iLocal_248[iVar0], 3);
										}
									}
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_248[iVar0], true);
									ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_248[iVar0], true);
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_242[iVar0]);
									iLocal_208 = (iLocal_208 - 1);
									iLocal_193[iVar0]++;
									bLocal_149 = true;
								}
								else if (fLocal_173 > fLocal_156[iVar0])
								{
									iLocal_208 = (iLocal_208 - 1);
									func_429(iVar0, 1090519040);
								}
							}
						}
					}
				}
				else if (iLocal_193[iVar0] == 2)
				{
					bVar11 = false;
					if (((iVar3 < 8 && (iVar0 > iLocal_214 || iLocal_214 == 0)) || iLocal_132) || iParam2)
					{
						if (!BitTest(iLocal_194[iVar0], 1))
						{
							if (BitTest(iLocal_194[iVar0], 0))
							{
								STREAMING::REQUEST_MODEL(__LIB_11__.func_123());
								bVar11 = STREAMING::HAS_MODEL_LOADED(__LIB_11__.func_123());
								iVar15 = 2;
							}
							else if (!bLocal_145 && ((!BitTest(iLocal_194[iVar0], 2) && bVar13) || (BitTest(iLocal_194[iVar0], 2) && bVar14)))
							{
								bVar11 = true;
								iVar15 = 1;
							}
							else
							{
								STREAMING::REQUEST_MODEL(func_92());
								bVar11 = STREAMING::HAS_MODEL_LOADED(func_92());
								iVar15 = 0;
							}
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_248[iVar0], false))
							{
								if (!bLocal_149 && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_248[iVar0], -1, false))
								{
									if (bVar11)
									{
										if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_248[iVar0], true), Var8) < 10000f || iParam2) || iLocal_132)
										{
											func_421(&(iLocal_248[iVar0]), iVar15, 0);
											MISC::SET_BIT(&(iLocal_194[iVar0]), 1);
										}
									}
								}
							}
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_248[iVar0], false))
						{
							VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_192[iVar0], &cLocal_232);
							if (fLocal_173 >= fLocal_156[iVar0])
							{
								if (15 > iLocal_199)
								{
									fVar9 = (fLocal_173 - fLocal_156[iVar0]);
									if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_192[iVar0], &cLocal_232))
									{
										if (fVar9 < VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_192[iVar0], &cLocal_232))
										{
											Var6 = { ENTITY::GET_ENTITY_COORDS(iLocal_248[iVar0], true) };
											Var7 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_192[iVar0], fVar9, &cLocal_232) };
											if (!func_424(Var6, Var8, 5f, fLocal_184) && func_424(Var7, Var8, 5f, fLocal_184))
											{
												if (!BitTest(iLocal_194[iVar0], 1))
												{
													func_421(&(iLocal_248[iVar0]), iVar15, 0);
												}
												func_429(iVar0, 1090519040);
											}
											else if (((!bLocal_149 || BitTest(iLocal_194[iVar0], 1)) || iLocal_132) || iParam2)
											{
												if (func_415(&(iLocal_248[iVar0]), iLocal_192[iVar0], fVar9, 1, 0, 0, 1, bLocal_146))
												{
													if (!BitTest(iLocal_194[iVar0], 1))
													{
														func_421(&(iLocal_248[iVar0]), iVar15, 0);
													}
													ENTITY::SET_ENTITY_COLLISION(iLocal_248[iVar0], true, false);
													VEHICLE::SET_PLAYBACK_SPEED(iLocal_248[iVar0], fParam1);
													iLocal_199++;
													iLocal_193[iVar0]++;
												}
											}
										}
										else
										{
											if (!BitTest(iLocal_194[iVar0], 1))
											{
												func_421(&(iLocal_248[iVar0]), iVar15, 0);
											}
											func_429(iVar0, 1090519040);
										}
									}
									else if (fVar9 > VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_192[iVar0], &cLocal_232))
									{
										if (!BitTest(iLocal_194[iVar0], 1))
										{
											func_421(&(iLocal_248[iVar0]), iVar15, 0);
										}
										func_429(iVar0, 1090519040);
									}
								}
								else
								{
									if (!BitTest(iLocal_194[iVar0], 1))
									{
										func_421(&(iLocal_248[iVar0]), iVar15, 0);
									}
									func_429(iVar0, 1090519040);
								}
							}
							else if (iLocal_129 && !bLocal_137)
							{
								if (!BitTest(iLocal_194[iVar0], 1))
								{
									func_421(&(iLocal_248[iVar0]), iVar15, 0);
								}
								func_429(iVar0, 1090519040);
							}
						}
						else
						{
							if (!BitTest(iLocal_194[iVar0], 1))
							{
								func_421(&(iLocal_248[iVar0]), iVar15, 0);
							}
							func_429(iVar0, 1090519040);
						}
						iVar3++;
						iLocal_214 = iVar0;
					}
				}
				else if (iLocal_193[iVar0] == 3)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_248[iVar0], false))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_248[iVar0]))
						{
							iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_248[iVar0], -1, false);
							if (!PED::IS_PED_INJURED(iVar4))
							{
								if (bVar12)
								{
									bVar18 = false;
									if (!bLocal_127)
									{
										if ((!bLocal_122 && !iLocal_119) && func_420(iLocal_248[iVar0]))
										{
											if (iVar2 < 3 && (iVar0 > iLocal_213 || iLocal_213 == 0))
											{
												if (!ENTITY::IS_ENTITY_DEAD(iVar5, false))
												{
													bVar11 = false;
													if (!__LIB_11__.func_139(iLocal_248[iVar0], iVar5) || __LIB_20__.func_444(iVar5, iLocal_248[iVar0], 0))
													{
														bVar18 = true;
													}
												}
												iLocal_213 = iVar0;
												iVar2++;
											}
										}
										else if (((!bLocal_142 && !BitTest(iLocal_194[iVar0], 4)) && iVar2 < 3) && (iVar0 > iLocal_213 || iLocal_213 == 0))
										{
											Var19 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam0, ENTITY::GET_ENTITY_COORDS(iLocal_248[iVar0], true)) };
											if (Var19.f_1 < 0f)
											{
												if (MISC::ABSF(Var19.f_1) > MISC::ABSF(Var19.f_0))
												{
													bVar18 = true;
												}
											}
											iVar2++;
											iLocal_213 = iVar0;
										}
									}
									if (bVar18)
									{
										func_417(iLocal_248[iVar0]);
										iLocal_193[iVar0]++;
									}
									else
									{
										VEHICLE::SET_PLAYBACK_SPEED(iLocal_248[iVar0], fParam1);
									}
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_248[iVar0]);
							}
						}
						else
						{
							iLocal_193[iVar0]++;
						}
					}
					else
					{
						iLocal_193[iVar0]++;
					}
				}
				else if (iLocal_193[iVar0] == 4)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_248[iVar0], false))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_248[iVar0]))
						{
							iLocal_193[iVar0]++;
						}
						else
						{
							iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_248[iVar0], -1, false);
							if (!PED::IS_PED_INJURED(iVar4))
							{
								VEHICLE::SET_PLAYBACK_SPEED(iLocal_248[iVar0], fParam1);
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_248[iVar0]);
							}
							if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_192[iVar0], &cLocal_232))
							{
								if (fLocal_173 > (fLocal_156[iVar0] + VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_192[iVar0], &cLocal_232)))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_248[iVar0]);
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_248[iVar0]);
							}
						}
					}
					else
					{
						iLocal_193[iVar0]++;
					}
				}
				else if (iLocal_193[iVar0] == 5)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_248[iVar0], false))
					{
						fVar10 = ENTITY::GET_ENTITY_SPEED(iLocal_248[iVar0]);
					}
					iLocal_199 = (iLocal_199 - 1);
					func_429(iVar0, fVar10);
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
			iLocal_203 = iVar16;
		}
		if (iVar2 < 3)
		{
			iLocal_213 = 0;
		}
		if (iVar3 < 8)
		{
			iLocal_214 = 0;
		}
	}
	else
	{
		func_88();
	}
}

void func_429(int iParam0, float fParam1)//Position - 0x32F40
{
	int iVar0;
	if (!iLocal_242[iParam0] == 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_242[iParam0]);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_248[iParam0], false))
	{
		ENTITY::SET_ENTITY_COLLISION(iLocal_248[iParam0], true, false);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_248[iParam0], false);
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_248[iParam0], -1, false);
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
			TASK::TASK_VEHICLE_MISSION(iVar0, iLocal_248[iParam0], 0, 1, fParam1, 786603, 5f, 5f, true);
			PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 8192, true);
			if (bLocal_151)
			{
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 65536, true);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 2, false);
			}
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 6, false);
			TASK::SET_DRIVE_TASK_CRUISE_SPEED(iVar0, fParam1);
		}
	}
	if (!bLocal_120)
	{
		if (!bLocal_148)
		{
			__LIB_11__.func_109(iVar0);
			__LIB_11__.func_122(iLocal_248[iParam0]);
		}
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			PED::DELETE_PED(&iVar0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_248[iParam0]))
		{
			VEHICLE::DELETE_VEHICLE(&(iLocal_248[iParam0]));
		}
	}
	if (!bLocal_130 && !bLocal_143)
	{
		if (iLocal_192[iParam0] > 0)
		{
			VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_192[iParam0], &cLocal_232);
		}
	}
	iLocal_193[iParam0] = 99;
}

void func_430(int iParam0, float fParam1, float fParam2)//Position - 0x3309B
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
			func_423(Var1, Var4, fVar5);
		}
	}
}

void func_431(int iParam0, float fParam1)//Position - 0x3311E
{
	if (!bLocal_131)
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

void func_432(int iParam0, float fParam1)//Position - 0x3316C
{
	if (!bLocal_131)
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

void func_433(int iParam0, float fParam1)//Position - 0x331BA
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
	{
		fVar1 = (fLocal_187 + 2000f);
		fVar2 = (fLocal_188 + 2000f);
		bVar4 = false;
		if (fVar1 < (fParam1 + 25000f))
		{
			iVar0 = VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iParam0);
			if (fVar1 <= VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID(iVar0))
			{
				if (iLocal_209 == 0)
				{
					Local_228 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fLocal_187) };
					iLocal_209++;
				}
				else if (iLocal_209 == 1)
				{
					Local_229 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fVar1) };
					iLocal_209++;
				}
				else if (!bLocal_149)
				{
					if (Local_228.f_0 > Local_229.f_0)
					{
						fVar3 = Local_228.f_0;
						Local_228.f_0 = Local_229.f_0;
						Local_229.f_0 = fVar3;
					}
					if (Local_228.f_1 > Local_229.f_1)
					{
						fVar3 = Local_228.f_1;
						Local_228.f_1 = Local_229.f_1;
						Local_229.f_1 = fVar3;
					}
					if (Local_228.f_2 > Local_229.f_2)
					{
						fVar3 = Local_228.f_2;
						Local_228.f_2 = Local_229.f_2;
						Local_229.f_2 = fVar3;
					}
					Local_228 = { Local_228 - Vector(fLocal_191, fLocal_191, fLocal_191) };
					Local_229 = { Local_229 + Vector(fLocal_191, fLocal_191, fLocal_191) };
					PATHFIND::SET_ROADS_IN_AREA(Local_228, Local_229, false, false);
					fLocal_187 = fVar1;
					iLocal_209 = 0;
				}
			}
		}
		if (fVar2 < (fParam1 - 8000f))
		{
			iVar0 = VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iParam0);
			if (iLocal_212 == 0)
			{
				Local_230 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fLocal_188) };
				iLocal_212++;
			}
			else if (iLocal_212 == 1)
			{
				Local_231 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fVar2) };
				iLocal_212++;
			}
			else if (!bLocal_149 && !bVar4)
			{
				if (Local_230.f_0 > Local_231.f_0)
				{
					fVar3 = Local_230.f_0;
					Local_230.f_0 = Local_231.f_0;
					Local_231.f_0 = fVar3;
				}
				if (Local_230.f_1 > Local_231.f_1)
				{
					fVar3 = Local_230.f_1;
					Local_230.f_1 = Local_231.f_1;
					Local_231.f_1 = fVar3;
				}
				if (Local_230.f_2 > Local_231.f_2)
				{
					fVar3 = Local_230.f_2;
					Local_230.f_2 = Local_231.f_2;
					Local_231.f_2 = fVar3;
				}
				Local_230 = { Local_230 - Vector(fLocal_191, fLocal_191, fLocal_191) };
				Local_231 = { Local_231 + Vector(fLocal_191, fLocal_191, fLocal_191) };
				PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Local_230, Local_231, 1);
				fLocal_188 = fVar2;
				iLocal_212 = 0;
			}
		}
	}
}

void func_435()//Position - 0x33452
{
	int iVar0;
	int iVar1;
	int iVar2;
	if ((MISC::GET_GAME_TIMER() - iLocal_323) > 3)
	{
		iVar0 = 0;
		iVar1 = iLocal_251;
		iVar2 = iLocal_248;
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (iLocal_195[iVar0] > 0)
			{
				if (fLocal_341 > (fLocal_165[iVar0] - 5000f))
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_195[iVar0], sLocal_359);
				}
				else if (fLocal_341 > (fLocal_165[iVar0] + 3000f))
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_251[iVar0]))
					{
						VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_195[iVar0], sLocal_359);
					}
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < iVar2)
		{
			if (iLocal_192[iVar0] > 0)
			{
				if (fLocal_341 > (fLocal_156[iVar0] - 5000f))
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_192[iVar0], sLocal_359);
				}
				else if (fLocal_341 > (fLocal_156[iVar0] + 3000f))
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_248[iVar0]))
					{
						VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_192[iVar0], sLocal_359);
					}
				}
			}
			iVar0++;
		}
		iLocal_323 = MISC::GET_GAME_TIMER();
	}
}

void func_436()//Position - 0x33562
{
	if (iLocal_338 == 0)
	{
		__LIB_18__.func_191(75, 1, 0, 1, 0);
		__LIB_18__.func_191(76, 0, 0, 1, 0);
		iLocal_337 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(307.3065f, -589.9595f, 43.302f, "v_hospital");
		iLocal_338 = 1;
	}
	else if (iLocal_338 == 1)
	{
		if (!__LIB_0__.func_295())
		{
			if (INTERIOR::IS_VALID_INTERIOR(iLocal_337))
			{
				if (!INTERIOR::IS_INTERIOR_READY(iLocal_337))
				{
					INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_337);
				}
				else
				{
					STREAMING::SET_INTERIOR_ACTIVE(iLocal_337, true);
					iLocal_338 = 2;
				}
			}
			else
			{
				iLocal_337 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(307.3065f, -589.9595f, 43.302f, "v_hospital");
			}
		}
	}
	else if (iLocal_338 == 2)
	{
		if (INTERIOR::IS_VALID_INTERIOR(iLocal_337))
		{
			if (INTERIOR::IS_INTERIOR_READY(iLocal_337))
			{
				__LIB_18__.func_191(181, 0, 0, 1, 0);
				iLocal_338 = 3;
			}
			else
			{
				iLocal_338 = 1;
			}
		}
		else
		{
			iLocal_338 = 1;
		}
	}
	else if (iLocal_338 == 3)
	{
		if (!__LIB_0__.func_295())
		{
			if (INTERIOR::IS_VALID_INTERIOR(iLocal_337))
			{
				if (INTERIOR::IS_INTERIOR_READY(iLocal_337))
				{
					INTERIOR::REFRESH_INTERIOR(iLocal_337);
					iLocal_338 = 4;
				}
				else
				{
					INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_337);
				}
			}
			else
			{
				iLocal_337 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(307.3065f, -589.9595f, 43.302f, "v_hospital");
			}
		}
	}
	else if (iLocal_338 == 4)
	{
		if (INTERIOR::IS_VALID_INTERIOR(iLocal_337))
		{
			if (!INTERIOR::IS_INTERIOR_READY(iLocal_337))
			{
				INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_337);
			}
		}
		else
		{
			iLocal_337 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(307.3065f, -589.9595f, 43.302f, "v_hospital");
		}
	}
}

void func_437(float fParam0, struct<3> Param1)//Position - 0x336D2
{
	float fVar0;
	if (__LIB_1__.func_183(Local_540[0 /*2*/]))
	{
		VEHICLE::SET_VEHICLE_INDICATOR_LIGHTS(Local_540[0 /*2*/], 1, true);
		VEHICLE::SET_VEHICLE_INDICATOR_LIGHTS(Local_540[0 /*2*/], 0, true);
		if (fLocal_341 > 10000f)
		{
			fVar0 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_540[0 /*2*/], true), Param1);
			if (fVar0 > 14400f)
			{
				__LIB_32__.func_566(&(Local_540[0 /*2*/]), 0);
			}
		}
	}
	if (__LIB_1__.func_183(Local_540[1 /*2*/]))
	{
		if (fLocal_341 > 10000f)
		{
			fVar0 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_540[1 /*2*/], true), Param1);
			if (fVar0 > 14400f)
			{
				__LIB_32__.func_566(&(Local_540[1 /*2*/]), 0);
			}
		}
	}
	if (__LIB_1__.func_183(Local_540[2 /*2*/]))
	{
		if (Local_537.f_1 == 0)
		{
			STREAMING::REQUEST_MODEL(iLocal_345);
			if (STREAMING::HAS_MODEL_LOADED(iLocal_345))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_537.f_0))
				{
					Local_537.f_0 = PED::CREATE_PED_INSIDE_VEHICLE(Local_540[2 /*2*/], 26, iLocal_345, -1, true, true);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_345);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_537.f_0, true);
					Local_537.f_1 = 1;
				}
			}
			if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_540[2 /*2*/]))
			{
				ENTITY::SET_ENTITY_QUATERNION(Local_540[2 /*2*/], 0.0269f, 0.0079f, -0.4791f, 0.8773f);
			}
		}
		if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_540[2 /*2*/]))
		{
			if (!iLocal_311)
			{
				if (fLocal_341 >= 200f)
				{
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_540[2 /*2*/], 2, sLocal_359, true);
					VEHICLE::SET_PLAYBACK_SPEED(Local_540[2 /*2*/], fParam0);
					iLocal_311 = 1;
				}
			}
		}
		else
		{
			VEHICLE::SET_PLAYBACK_SPEED(Local_540[2 /*2*/], fParam0);
			if (!iLocal_297)
			{
				if (fLocal_341 > 3500f && fLocal_341 < 4500f)
				{
					VEHICLE::START_VEHICLE_HORN(Local_540[2 /*2*/], 2000, MISC::GET_HASH_KEY("HELDDOWN"), false);
					iLocal_297 = 1;
				}
			}
		}
		if (fLocal_341 > 10000f)
		{
			fVar0 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_540[2 /*2*/], true), Param1);
			if (fVar0 > 14400f)
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_540[2 /*2*/]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_540[2 /*2*/]);
				}
				VEHICLE::REMOVE_VEHICLE_RECORDING(2, sLocal_359);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_345);
				__LIB_20__.func_241(&Local_537, 0);
				__LIB_32__.func_566(&(Local_540[2 /*2*/]), 0);
			}
		}
	}
}

void func_438()//Position - 0x338F1
{
	switch (iLocal_274)
	{
		case 0:
			if (!bLocal_276)
			{
				if (!__LIB_0__.func_295())
				{
					__LIB_30__.func_547(PLAYER::PLAYER_PED_ID(), -1309.0155f, -641.8671f, 25.5017f, 242.3463f, 0, 0);
					if (iLocal_277 == 0)
					{
						if (iLocal_273 == 1)
						{
							if (__LIB_0__.func_121(PLAYER::PLAYER_PED_ID()))
							{
								__LIB_20__.func_665(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 50f, 13, 5000, 0, 0);
								iLocal_277 = 1;
							}
						}
					}
					__LIB_30__.func_547(PLAYER::PLAYER_PED_ID(), -1309.0155f, -641.8671f, 25.5017f, 242.3463f, 1, 1);
				}
				__LIB_0__.func_0(&(Local_275.f_28[0]));
				__LIB_11__.func_32(&(Local_275.f_35[0]));
				__LIB_11__.func_32(&(Local_275.f_35[1]));
				func_461();
				func_459(1);
				func_456();
				if (__LIB_1__.func_183(Local_535.f_0))
				{
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_535.f_0, 5f);
				}
				func_437(fLocal_343, Local_549);
				func_449(1);
				iLocal_274 = 2;
			}
			else
			{
				__LIB_26__.func_541("NMT_2_RCM", 0);
				if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION(sLocal_364, 4, 0, 0, Local_534.f_1);
				}
				if (__LIB_18__.func_170(1, 1093140480, 0))
				{
					if (__LIB_0__.func_121(Local_275.f_35[0]))
					{
						__LIB_10__.func_734(&Local_535, &(Local_275.f_35[0]));
					}
					if (__LIB_0__.func_121(Local_535.f_0))
					{
						VEHICLE::SET_VEHICLE_FIXED(Local_535.f_0);
						ENTITY::SET_ENTITY_PROOFS(Local_535.f_0, false, false, false, false, false, false, false, false);
					}
					if (__LIB_0__.func_121(Local_275.f_35[1]))
					{
						__LIB_10__.func_734(&Local_536, &(Local_275.f_35[1]));
					}
					if (__LIB_0__.func_121(Local_536.f_0))
					{
						VEHICLE::SET_VEHICLE_FIXED(Local_536.f_0);
						ENTITY::SET_ENTITY_PROOFS(Local_536.f_0, false, false, false, false, false, false, false, false);
					}
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), sLocal_363, 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_533.f_0, sLocal_362, 2, Local_533.f_1, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_532.f_0, sLocal_361, 2, Local_532.f_1, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_534.f_0, sLocal_364, 2, Local_534.f_1, 0);
					if (__LIB_1__.func_183(Local_535.f_0))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_535.f_0, sLocal_365, 0, 0, 0);
					}
					else
					{
						__LIB_11__.func_32(&(Local_275.f_35[0]));
						__LIB_11__.func_32(&Local_535);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_535.f_0, sLocal_365, 2, Local_535.f_1, 0);
					}
					if (__LIB_1__.func_183(Local_536.f_0))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_536.f_0, sLocal_366, 0, 0, 0);
					}
					else
					{
						__LIB_11__.func_32(&(Local_275.f_35[1]));
						__LIB_11__.func_32(&Local_536);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_536.f_0, sLocal_366, 2, Local_536.f_1, 0);
					}
					__LIB_0__.func_84(800, 0);
					RECORDING::REPLAY_START_EVENT(1);
					CUTSCENE::START_CUTSCENE(0);
					SYSTEM::WAIT(0);
					__LIB_26__.func_252();
					func_298(-1310.7f, -640.22f, 26.54f, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
					func_461();
					__LIB_0__.func_0(&(Local_275.f_28[0]));
					VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.3f);
					PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0.3f);
					func_459(0);
					func_437(fLocal_343, Local_549);
					iLocal_274 = 1;
				}
			}
			break;
		case 1:
			func_437(fLocal_343, Local_549);
			if (!ENTITY::DOES_ENTITY_EXIST(Local_533.f_0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(sLocal_362, 0)))
				{
					Local_533.f_0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(sLocal_362, 0));
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_532.f_0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(sLocal_361, 0)))
				{
					Local_532.f_0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(sLocal_361, 0));
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_534.f_0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(sLocal_364, 0)))
				{
					Local_534.f_0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(sLocal_364, 0));
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_535.f_0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(sLocal_365, 0)))
				{
					Local_535.f_0 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(sLocal_365, 0));
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_536.f_0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(sLocal_366, 0)))
				{
					Local_536.f_0 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(sLocal_366, 0));
				}
			}
			if ((__LIB_1__.func_183(Local_535.f_0) && __LIB_1__.func_197(Local_533.f_0)) && __LIB_1__.func_197(Local_532.f_0))
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_362, 0))
				{
					RECORDING::REPLAY_STOP_EVENT();
					if (!PED::IS_PED_SITTING_IN_VEHICLE(Local_533.f_0, Local_535.f_0))
					{
						PED::SET_PED_INTO_VEHICLE(Local_533.f_0, Local_535.f_0, 0);
					}
					func_445();
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_361, 0))
				{
					if (!PED::IS_PED_SITTING_IN_VEHICLE(Local_532.f_0, Local_535.f_0))
					{
						PED::SET_PED_INTO_VEHICLE(Local_532.f_0, Local_535.f_0, 2);
					}
					func_444();
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_365, 0))
				{
					func_443();
					VEHICLE::SET_VEHICLE_DOORS_SHUT(Local_535.f_0, true);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_535.f_0, 5f);
					ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_535.f_0);
				}
				VEHICLE::SET_FORCE_HD_VEHICLE(Local_535.f_0, true);
				iLocal_318 = 1;
			}
			if (__LIB_1__.func_183(Local_536.f_0) && __LIB_1__.func_197(Local_534.f_0))
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_364, 0))
				{
					if (!PED::IS_PED_SITTING_IN_VEHICLE(Local_534.f_0, Local_536.f_0))
					{
						PED::SET_PED_INTO_VEHICLE(Local_534.f_0, Local_536.f_0, -1);
					}
					func_441();
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_366, 0))
				{
					func_439();
					VEHICLE::SET_VEHICLE_DOORS_SHUT(Local_536.f_0, true);
					ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_536.f_0);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(22f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			}
			if (CUTSCENE::WAS_CUTSCENE_SKIPPED() && CAM::IS_SCREEN_FADED_OUT())
			{
				MISC::CLEAR_AREA_OF_VEHICLES(-1312.556f, -664.3428f, 25.5716f, 150f, false, false, false, false, false, false, 0);
			}
			if (!CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				func_459(1);
				func_456();
				func_449(0);
				iLocal_274 = 2;
			}
			else
			{
				if (CUTSCENE::GET_CUTSCENE_TIME() >= 104000)
				{
					PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 18 /*INPUT_SKIP_CUTSCENE*/, true);
				}
				if (CUTSCENE::GET_CUTSCENE_TIME() > 900 && CUTSCENE::GET_CUTSCENE_TIME() < 1480)
				{
					VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
					PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				}
				else
				{
					VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.3f);
					PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0.3f);
				}
				func_459(0);
			}
			break;
		case 2:
			if (__LIB_1__.func_183(Local_535.f_0))
			{
				VEHICLE::SET_FORCE_HD_VEHICLE(Local_535.f_0, true);
				iLocal_318 = 1;
			}
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				CUTSCENE::STOP_CUTSCENE(false);
			}
			else
			{
				if (CUTSCENE::HAS_CUTSCENE_LOADED())
				{
					CUTSCENE::REMOVE_CUTSCENE();
				}
				if (bLocal_276)
				{
					__LIB_40__.func_678(1, 1, 1, 1);
					__LIB_0__.func_686(0, 0, 1, 0);
				}
				iLocal_317 = 0;
				__LIB_10__.func_700(&Local_275, 0, 1);
				func_437(fLocal_343, Local_549);
				func_296(1);
			}
			break;
	}
}

void func_439()//Position - 0x33ECF
{
	if (__LIB_1__.func_183(Local_536.f_0))
	{
		VEHICLE::SET_VEHICLE_FIXED(Local_536.f_0);
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_536.f_0, 1);
		VEHICLE::SET_VEHICLE_COLOURS(Local_536.f_0, 0, 0);
		VEHICLE::SET_VEHICLE_ENGINE_ON(Local_536.f_0, true, true, false);
		VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_536.f_0, false);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_536.f_0, true);
		VEHICLE::SET_VEHICLE_STRONG(Local_536.f_0, true);
		ENTITY::SET_ENTITY_HEALTH(Local_536.f_0, 2000, 0);
		VEHICLE::SET_DISABLE_VEHICLE_ENGINE_FIRES(Local_536.f_0, true);
		VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(Local_536.f_0, false);
		VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_536.f_0, false);
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_536.f_0, false);
		VEHICLE::SET_VEHICLE_DOOR_SHUT(Local_536.f_0, 0, true);
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_536.f_0, 3);
		VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(Local_536.f_0, 0, false);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_536.f_1, true);
		__LIB_0__.func_501(Local_536.f_0, 1);
		ENTITY::SET_ENTITY_COORDS(Local_536.f_0, Local_536.f_3, true, false, false, true);
		ENTITY::SET_ENTITY_QUATERNION(Local_536.f_0, -0.0248f, 0.0004f, 0.8949f, 0.4456f);
		ENTITY::FREEZE_ENTITY_POSITION(Local_536.f_0, true);
	}
}

void func_441()//Position - 0x33FBB
{
	if (__LIB_1__.func_197(Local_534.f_0))
	{
		PED::SET_PED_COMPONENT_VARIATION(Local_534.f_0, 4, 0, 0, 0);
		PED::SET_PED_MODEL_IS_SUPPRESSED(Local_534.f_1, true);
		PED::SET_PED_CAN_BE_TARGETTED(Local_534.f_0, false);
		PED::SET_PED_CAN_BE_DRAGGED_OUT(Local_534.f_0, false);
		PED::SET_PED_CONFIG_FLAG(Local_534.f_0, 32, false);
		PED::SET_PED_CONFIG_FLAG(Local_534.f_0, 29, false);
		PED::SET_PED_CONFIG_FLAG(Local_534.f_0, 116, false);
		PED::SET_PED_DIES_WHEN_INJURED(Local_534.f_0, true);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_534.f_0, true, 1);
		if (PED::IS_PED_IN_GROUP(Local_534.f_0))
		{
			PED::REMOVE_PED_FROM_GROUP(Local_534.f_0);
		}
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_534.f_0, iLocal_354);
		__LIB_0__.func_203(&uLocal_367, 3, Local_534.f_0, "DINAPOLI", 0, 1);
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Local_534.f_0, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_534.f_0, true);
	}
}

void func_443()//Position - 0x340F9
{
	if (__LIB_1__.func_183(Local_535.f_0))
	{
		VEHICLE::SET_VEHICLE_FIXED(Local_535.f_0);
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_535.f_0, 1);
		VEHICLE::SET_VEHICLE_COLOURS(Local_535.f_0, 65, 0);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_535.f_0, true);
		VEHICLE::SET_VEHICLE_STRONG(Local_535.f_0, true);
		ENTITY::SET_ENTITY_HEALTH(Local_535.f_0, 2000, 0);
		VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(Local_535.f_0, false);
		VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_535.f_0, false);
		VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(Local_535.f_0, 5, false);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_535.f_1, true);
		VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(Local_535.f_0);
		__LIB_0__.func_501(Local_535.f_0, 0);
	}
}

void func_444()//Position - 0x34171
{
	if (__LIB_1__.func_197(Local_532.f_0))
	{
		PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_532.f_0);
		PED::SET_PED_MODEL_IS_SUPPRESSED(Local_532.f_1, true);
		PED::SET_PED_CAN_BE_TARGETTED(Local_532.f_0, false);
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_532.f_0, false);
		PED::SET_PED_CONFIG_FLAG(Local_532.f_0, 32, false);
		PED::SET_PED_CONFIG_FLAG(Local_532.f_0, 132, true);
		PED::SET_PED_CONFIG_FLAG(Local_532.f_0, 29, false);
		PED::SET_PED_CONFIG_FLAG(Local_532.f_0, 116, false);
		if (PED::IS_PED_IN_GROUP(Local_532.f_0))
		{
			PED::REMOVE_PED_FROM_GROUP(Local_532.f_0);
		}
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_532.f_0, iLocal_355);
		__LIB_0__.func_203(&uLocal_367, 5, Local_532.f_0, "MRSTHORNHILL", 0, 1);
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Local_532.f_0, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_532.f_0, true);
	}
}

void func_445()//Position - 0x34208
{
	if (__LIB_1__.func_197(Local_533.f_0))
	{
		PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_533.f_0);
		PED::SET_PED_MODEL_IS_SUPPRESSED(Local_533.f_1, true);
		PED::SET_PED_CAN_BE_TARGETTED(Local_533.f_0, false);
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_533.f_0, false);
		PED::SET_PED_CONFIG_FLAG(Local_533.f_0, 32, false);
		PED::SET_PED_CONFIG_FLAG(Local_533.f_0, 132, true);
		PED::SET_PED_CONFIG_FLAG(Local_533.f_0, 29, false);
		PED::SET_PED_CONFIG_FLAG(Local_533.f_0, 116, false);
		if (PED::IS_PED_IN_GROUP(Local_533.f_0))
		{
			PED::REMOVE_PED_FROM_GROUP(Local_533.f_0);
		}
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_533.f_0, iLocal_355);
		__LIB_0__.func_203(&uLocal_367, 4, Local_533.f_0, "NIGEL", 0, 1);
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Local_533.f_0, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_533.f_0, true);
	}
}

void func_449(bool bParam0)//Position - 0x342E7
{
	func_455(sLocal_359, iLocal_333, bParam0, 1);
	func_454();
	func_453(1);
	func_452(joaat("A_M_M_BevHills_02"));
	func_397();
	fLocal_183 = 250f;
	bLocal_140 = true;
	func_451(1);
	bLocal_146 = true;
	func_450(1, 0, -1);
	MISC::SET_INSTANCE_PRIORITY_HINT(2);
}

void func_450(bool bParam0, int iParam1, int iParam2)//Position - 0x34331
{
	if (bParam0)
	{
		iLocal_141 = 1;
		iLocal_246 = iParam1;
		iLocal_247 = iParam2;
	}
}

void func_451(bool bParam0)//Position - 0x3434B
{
	bLocal_151 = bParam0;
}

void func_452(int iParam0)//Position - 0x34357
{
	iLocal_245 = iParam0;
}

void func_453(int iParam0)//Position - 0x34364
{
	bLocal_145 = iParam0;
}

void func_454()//Position - 0x34370
{
	int iVar0;
	int iVar1;
	int iVar2;
	Local_216[0 /*3*/] = { -1189.919f, -864.3419f, 13.5062f };
	fLocal_152[0] = 0.011f;
	fLocal_153[0] = -0.0057f;
	fLocal_154[0] = -0.4728f;
	fLocal_155[0] = 0.8811f;
	iLocal_192[0] = 3;
	fLocal_156[0] = 12794f;
	iLocal_242[0] = joaat("f620");
	Local_216[1 /*3*/] = { -1168.0251f, -846.5394f, 13.8245f };
	fLocal_152[1] = 0.0067f;
	fLocal_153[1] = 0.0025f;
	fLocal_154[1] = 0.3507f;
	fLocal_155[1] = 0.9364f;
	iLocal_192[1] = 4;
	fLocal_156[1] = 12926f;
	iLocal_242[1] = joaat("washington");
	Local_216[2 /*3*/] = { -1052.3594f, -730.7704f, 18.729f };
	fLocal_152[2] = -0.0125f;
	fLocal_153[2] = -0.0121f;
	fLocal_154[2] = 0.9079f;
	fLocal_155[2] = 0.4187f;
	iLocal_192[2] = 14;
	fLocal_156[2] = 19594.96f;
	iLocal_242[2] = joaat("serrano");
	Local_216[3 /*3*/] = { -1050.4532f, -743.3076f, 18.7718f };
	fLocal_152[3] = -0.0019f;
	fLocal_153[3] = -0.0002f;
	fLocal_154[3] = -0.3894f;
	fLocal_155[3] = 0.9211f;
	iLocal_192[3] = 6;
	fLocal_156[3] = 20400f;
	iLocal_242[3] = joaat("washington");
	Local_216[4 /*3*/] = { -1032.5537f, -734.0855f, 19.1223f };
	fLocal_152[4] = 0.0233f;
	fLocal_153[4] = -0.0077f;
	fLocal_154[4] = -0.4212f;
	fLocal_155[4] = 0.9066f;
	iLocal_192[4] = 16;
	fLocal_156[4] = 19960.85f;
	iLocal_242[4] = joaat("serrano");
	Local_216[5 /*3*/] = { -865.4848f, -623.928f, 28.3187f };
	fLocal_152[5] = 0.0038f;
	fLocal_153[5] = -0.0257f;
	fLocal_154[5] = 0.9893f;
	fLocal_155[5] = -0.1433f;
	iLocal_192[5] = 7;
	fLocal_156[5] = 28417f;
	iLocal_242[5] = joaat("washington");
	Local_216[6 /*3*/] = { -869.6063f, -612.9931f, 28.5539f };
	fLocal_152[6] = 0.005f;
	fLocal_153[6] = -0.0119f;
	fLocal_154[6] = 0.9777f;
	fLocal_155[6] = -0.2094f;
	iLocal_192[6] = 8;
	fLocal_156[6] = 28417f;
	iLocal_242[6] = joaat("serrano");
	Local_216[7 /*3*/] = { -853.7338f, -652.7806f, 27.3348f };
	fLocal_152[7] = -0.0022f;
	fLocal_153[7] = -0.0021f;
	fLocal_154[7] = 0.7085f;
	fLocal_155[7] = 0.7057f;
	iLocal_192[7] = 9;
	fLocal_156[7] = 28549f;
	iLocal_242[7] = joaat("serrano");
	Local_216[8 /*3*/] = { -797.3943f, -667.453f, 28.1434f };
	fLocal_152[8] = 0.0434f;
	fLocal_153[8] = 0.0031f;
	fLocal_154[8] = -0.7039f;
	fLocal_155[8] = 0.709f;
	iLocal_192[8] = 10;
	fLocal_156[8] = 30654f;
	iLocal_242[8] = joaat("feltzer2");
	Local_216[9 /*3*/] = { -728.5153f, -661.8074f, 29.8396f };
	fLocal_152[9] = -0.0017f;
	fLocal_153[9] = 0.0032f;
	fLocal_154[9] = -0.7028f;
	fLocal_155[9] = 0.7114f;
	iLocal_192[9] = 11;
	fLocal_156[9] = 33027f;
	iLocal_242[9] = joaat("rapidgt");
	Local_216[10 /*3*/] = { -595.1748f, -661.9557f, 31.8497f };
	fLocal_152[10] = 0.0098f;
	fLocal_153[10] = -0.0088f;
	fLocal_154[10] = -0.7017f;
	fLocal_155[10] = 0.7123f;
	iLocal_192[10] = 15;
	fLocal_156[10] = 48186f;
	iLocal_242[10] = joaat("sultan");
	Local_216[11 /*3*/] = { -477.1852f, -644.7173f, 32.0538f };
	fLocal_152[11] = -0.0087f;
	fLocal_153[11] = 0.0318f;
	fLocal_154[11] = 0.0461f;
	fLocal_155[11] = 0.9984f;
	iLocal_192[11] = 17;
	fLocal_156[11] = 55765.85f;
	iLocal_242[11] = joaat("serrano");
	Local_216[12 /*3*/] = { -489.0458f, -666.3751f, 32.3303f };
	fLocal_152[12] = 0.0113f;
	fLocal_153[12] = 0.0176f;
	fLocal_154[12] = -0.7063f;
	fLocal_155[12] = 0.7076f;
	iLocal_192[12] = 23;
	fLocal_156[12] = 58613f;
	iLocal_242[12] = joaat("asterope");
	Local_216[13 /*3*/] = { -487.5655f, -744.9453f, 32.6015f };
	fLocal_152[13] = -0.0937f;
	fLocal_153[13] = 0.045f;
	fLocal_154[13] = 0.8793f;
	fLocal_155[13] = 0.4648f;
	iLocal_192[13] = 19;
	fLocal_156[13] = 60459.32f;
	iLocal_242[13] = joaat("bmx");
	Local_216[14 /*3*/] = { -478.1905f, -835.1024f, 29.9746f };
	fLocal_152[14] = -0.0021f;
	fLocal_153[14] = -0.0021f;
	fLocal_154[14] = 0.7008f;
	fLocal_155[14] = 0.7134f;
	iLocal_192[14] = 18;
	fLocal_156[14] = 64923.85f;
	iLocal_242[14] = joaat("serrano");
	Local_216[15 /*3*/] = { -430.6053f, -816.6718f, 36.8249f };
	fLocal_152[15] = -0.0001f;
	fLocal_153[15] = 0.0048f;
	fLocal_154[15] = 0.9993f;
	fLocal_155[15] = 0.0373f;
	iLocal_192[15] = 28;
	fLocal_156[15] = 68551f;
	iLocal_242[15] = joaat("asterope");
	Local_216[16 /*3*/] = { -427.4086f, -762.012f, 36.6573f };
	fLocal_152[16] = 0.0001f;
	fLocal_153[16] = 0.0049f;
	fLocal_154[16] = 1f;
	fLocal_155[16] = 0.0047f;
	iLocal_192[16] = 30;
	fLocal_156[16] = 70333f;
	iLocal_242[16] = joaat("sultan");
	Local_216[17 /*3*/] = { -476.9606f, -664.9507f, 31.9901f };
	fLocal_152[17] = -0.003f;
	fLocal_153[17] = -0.0083f;
	fLocal_154[17] = 0.7264f;
	fLocal_155[17] = -0.6872f;
	iLocal_192[17] = 70;
	fLocal_156[17] = 77000f;
	iLocal_242[17] = joaat("sultan");
	Local_216[18 /*3*/] = { -436.342f, -650.5261f, 30.4239f };
	fLocal_152[18] = 0.0056f;
	fLocal_153[18] = 0.0224f;
	fLocal_154[18] = 0.7071f;
	fLocal_155[18] = 0.7068f;
	iLocal_192[18] = 13;
	fLocal_156[18] = 77590f;
	iLocal_242[18] = joaat("sultan");
	Local_216[19 /*3*/] = { -420.96f, -656.3897f, 30.5754f };
	fLocal_152[19] = 0.0112f;
	fLocal_153[19] = 0.0112f;
	fLocal_154[19] = 0.707f;
	fLocal_155[19] = 0.707f;
	iLocal_192[19] = 12;
	fLocal_156[19] = 78000f;
	iLocal_242[19] = joaat("packer");
	Local_216[20 /*3*/] = { -455.2408f, -535.85f, 24.7102f };
	fLocal_152[20] = -0.0022f;
	fLocal_153[20] = 0.0022f;
	fLocal_154[20] = -0.707f;
	fLocal_155[20] = 0.7072f;
	iLocal_192[20] = 31;
	fLocal_156[20] = 80849f;
	iLocal_242[20] = joaat("sultan");
	Local_216[21 /*3*/] = { -421.8391f, -535.8503f, 24.7099f };
	fLocal_152[21] = -0.0024f;
	fLocal_153[21] = 0.0024f;
	fLocal_154[21] = -0.7071f;
	fLocal_155[21] = 0.7071f;
	iLocal_192[21] = 32;
	fLocal_156[21] = 80849f;
	iLocal_242[21] = joaat("sultan");
	Local_216[22 /*3*/] = { -323.2696f, -519.5041f, 24.769f };
	fLocal_152[22] = -0.0086f;
	fLocal_153[22] = -0.0166f;
	fLocal_154[22] = -0.7001f;
	fLocal_155[22] = 0.7138f;
	iLocal_192[22] = 34;
	fLocal_156[22] = 85280f;
	iLocal_242[22] = joaat("asterope");
	Local_216[23 /*3*/] = { -384.7831f, -496.5516f, 24.806f };
	fLocal_152[23] = -0.0022f;
	fLocal_153[23] = -0.0022f;
	fLocal_154[23] = 0.7072f;
	fLocal_155[23] = 0.7071f;
	iLocal_192[23] = 33;
	fLocal_156[23] = 85722f;
	iLocal_242[23] = joaat("landstalker");
	Local_216[24 /*3*/] = { -299.8336f, -519.6835f, 24.804f };
	fLocal_152[24] = -0.0071f;
	fLocal_153[24] = -0.0166f;
	fLocal_154[24] = -0.7047f;
	fLocal_155[24] = 0.7093f;
	iLocal_192[24] = 35;
	fLocal_156[24] = 86195f;
	iLocal_242[24] = joaat("asterope");
	Local_216[25 /*3*/] = { -296.6222f, -496.012f, 24.8684f };
	fLocal_152[25] = -0.0026f;
	fLocal_153[25] = -0.0022f;
	fLocal_154[25] = 0.7084f;
	fLocal_155[25] = 0.7058f;
	iLocal_192[25] = 21;
	fLocal_156[25] = 87170.85f;
	iLocal_242[25] = joaat("landstalker");
	Local_216[26 /*3*/] = { -242.5362f, -502.0159f, 25.6451f };
	fLocal_152[26] = -0.0096f;
	fLocal_153[26] = -0.0094f;
	fLocal_154[26] = 0.7194f;
	fLocal_155[26] = 0.6945f;
	iLocal_192[26] = 36;
	fLocal_156[26] = 88537f;
	iLocal_242[26] = joaat("landstalker");
	Local_216[27 /*3*/] = { -234.2082f, -530.1547f, 25.9344f };
	fLocal_152[27] = -0.0058f;
	fLocal_153[27] = 0.0064f;
	fLocal_154[27] = 0.7091f;
	fLocal_155[27] = -0.705f;
	iLocal_192[27] = 39;
	fLocal_156[27] = 90066f;
	iLocal_242[27] = joaat("rapidgt");
	Local_216[28 /*3*/] = { -204.8521f, -534.9627f, 26.6094f };
	fLocal_152[28] = 0.0281f;
	fLocal_153[28] = 0.0002f;
	fLocal_154[28] = -0.6936f;
	fLocal_155[28] = 0.7198f;
	iLocal_192[28] = 37;
	fLocal_156[28] = 91140f;
	iLocal_242[28] = joaat("asterope");
	Local_216[29 /*3*/] = { -186.2448f, -518.6406f, 27.3221f };
	fLocal_152[29] = -0.0061f;
	fLocal_153[29] = -0.0197f;
	fLocal_154[29] = -0.7053f;
	fLocal_155[29] = 0.7086f;
	iLocal_192[29] = 41;
	fLocal_156[29] = 91890f;
	iLocal_242[29] = joaat("fq2");
	Local_216[30 /*3*/] = { -181.6259f, -523.8001f, 27.2923f };
	fLocal_152[30] = 0.0116f;
	fLocal_153[30] = -0.0124f;
	fLocal_154[30] = -0.7029f;
	fLocal_155[30] = 0.7111f;
	iLocal_192[30] = 38;
	fLocal_156[30] = 92230f;
	iLocal_242[30] = joaat("sultan");
	Local_216[31 /*3*/] = { -152.8287f, -489.4706f, 28.3269f };
	fLocal_152[31] = -0.0213f;
	fLocal_153[31] = 0.0018f;
	fLocal_154[31] = 0.7254f;
	fLocal_155[31] = 0.688f;
	iLocal_192[31] = 24;
	fLocal_156[31] = 92554.85f;
	iLocal_242[31] = joaat("landstalker");
	Local_216[32 /*3*/] = { -172.1277f, -500.8638f, 27.8326f };
	fLocal_152[32] = -0.0252f;
	fLocal_153[32] = -0.0296f;
	fLocal_154[32] = 0.7083f;
	fLocal_155[32] = 0.7048f;
	iLocal_192[32] = 40;
	fLocal_156[32] = 94528f;
	iLocal_242[32] = joaat("fq2");
	Local_216[33 /*3*/] = { -114.866f, -500.2346f, 29.8111f };
	fLocal_152[33] = -0.0104f;
	fLocal_153[33] = -0.0098f;
	fLocal_154[33] = 0.7021f;
	fLocal_155[33] = 0.7119f;
	iLocal_192[33] = 78;
	fLocal_156[33] = 95865.44f;
	iLocal_242[33] = joaat("asterope");
	Local_216[34 /*3*/] = { -129.1858f, -505.694f, 29.242f };
	fLocal_152[34] = -0.015f;
	fLocal_153[34] = -0.0163f;
	fLocal_154[34] = 0.7139f;
	fLocal_155[34] = 0.6999f;
	iLocal_192[34] = 42;
	fLocal_156[34] = 95886f;
	iLocal_242[34] = joaat("asterope");
	Local_216[35 /*3*/] = { -55.6079f, -499.5939f, 31.8493f };
	fLocal_152[35] = -0.0116f;
	fLocal_153[35] = -0.0112f;
	fLocal_154[35] = 0.7134f;
	fLocal_155[35] = 0.7006f;
	iLocal_192[35] = 25;
	fLocal_156[35] = 96787.85f;
	iLocal_242[35] = joaat("landstalker");
	Local_216[36 /*3*/] = { -87.112f, -504.988f, 30.9077f };
	fLocal_152[36] = -0.0159f;
	fLocal_153[36] = -0.0149f;
	fLocal_154[36] = 0.7118f;
	fLocal_155[36] = 0.702f;
	iLocal_192[36] = 43;
	fLocal_156[36] = 97140f;
	iLocal_242[36] = joaat("fq2");
	Local_216[37 /*3*/] = { 26.5103f, -499.3918f, 34.2088f };
	fLocal_152[37] = -0.0005f;
	fLocal_153[37] = -0.0002f;
	fLocal_154[37] = 0.7186f;
	fLocal_155[37] = 0.6954f;
	iLocal_192[37] = 79;
	fLocal_156[37] = 100001.4f;
	iLocal_242[37] = joaat("packer");
	Local_216[39 /*3*/] = { 70.5888f, -526.8503f, 33.7031f };
	fLocal_152[39] = -0.0004f;
	fLocal_153[39] = -0.0004f;
	fLocal_154[39] = -0.7039f;
	fLocal_155[39] = 0.7103f;
	iLocal_192[39] = 46;
	fLocal_156[39] = 102948f;
	iLocal_242[39] = joaat("ninef2");
	Local_216[40 /*3*/] = { 99.8609f, -521.5526f, 33.5624f };
	fLocal_152[40] = 0.0145f;
	fLocal_153[40] = -0.0145f;
	fLocal_154[40] = 0.707f;
	fLocal_155[40] = -0.7069f;
	iLocal_192[40] = 47;
	fLocal_156[40] = 104004f;
	iLocal_242[40] = joaat("landstalker");
	Local_216[41 /*3*/] = { 196.1974f, -526.9512f, 33.5498f };
	fLocal_152[41] = 0.0178f;
	fLocal_153[41] = -0.0178f;
	fLocal_154[41] = 0.7069f;
	fLocal_155[41] = -0.7068f;
	iLocal_192[41] = 48;
	fLocal_156[41] = 107502f;
	iLocal_242[41] = joaat("landstalker");
	Local_216[42 /*3*/] = { 230.2825f, -516.1511f, 33.5591f };
	fLocal_152[42] = -0.0023f;
	fLocal_153[42] = 0.0023f;
	fLocal_154[42] = -0.7071f;
	fLocal_155[42] = 0.7071f;
	iLocal_192[42] = 49;
	fLocal_156[42] = 108624f;
	iLocal_242[42] = joaat("landstalker");
	Local_216[44 /*3*/] = { 301.1906f, -521.55f, 33.4621f };
	fLocal_152[44] = 0.0001f;
	fLocal_153[44] = -0.0001f;
	fLocal_154[44] = 0.7071f;
	fLocal_155[44] = -0.7071f;
	iLocal_192[44] = 50;
	fLocal_156[44] = 111198f;
	iLocal_242[44] = joaat("sultan");
	Local_217[0 /*3*/] = { -1200.0914f, -849.0596f, 13.5431f };
	fLocal_167[0] = -0.0171f;
	fLocal_168[0] = -0.0063f;
	fLocal_169[0] = 0.88f;
	fLocal_170[0] = 0.4747f;
	iLocal_243[0] = joaat("feltzer2");
	Local_217[1 /*3*/] = { -1058.3451f, -772.2757f, 18.8924f };
	fLocal_167[1] = -0.0028f;
	fLocal_168[1] = 0.0149f;
	fLocal_169[1] = 0.3553f;
	fLocal_170[1] = 0.9346f;
	iLocal_243[1] = joaat("feltzer2");
	Local_217[2 /*3*/] = { -1070.664f, -739.6081f, 18.8482f };
	fLocal_167[2] = -0.0111f;
	fLocal_168[2] = 0.0192f;
	fLocal_169[2] = 0.9254f;
	fLocal_170[2] = 0.3784f;
	iLocal_243[2] = joaat("feltzer2");
	Local_217[3 /*3*/] = { -1121.0957f, -880.1656f, 7.6752f };
	fLocal_167[3] = 0.0021f;
	fLocal_168[3] = -0.0011f;
	fLocal_169[3] = -0.4944f;
	fLocal_170[3] = 0.8692f;
	iLocal_243[3] = joaat("serrano");
	Local_217[4 /*3*/] = { -1115.6182f, -807.3134f, 16.6315f };
	fLocal_167[4] = -0.0414f;
	fLocal_168[4] = -0.0257f;
	fLocal_169[4] = 0.8471f;
	fLocal_170[4] = -0.5292f;
	iLocal_243[4] = joaat("serrano");
	Local_217[5 /*3*/] = { -1112.4027f, -774.3158f, 18.3801f };
	fLocal_167[5] = -0.0097f;
	fLocal_168[5] = -0.0319f;
	fLocal_169[5] = 0.5058f;
	fLocal_170[5] = 0.862f;
	iLocal_243[5] = joaat("serrano");
	Local_217[6 /*3*/] = { -1130.5292f, -792.3233f, 16.5972f };
	fLocal_167[6] = -0.0307f;
	fLocal_168[6] = -0.0293f;
	fLocal_169[6] = 0.9133f;
	fLocal_170[6] = 0.4051f;
	iLocal_243[6] = joaat("feltzer2");
	Local_217[7 /*3*/] = { -1045.3898f, -778.9995f, 18.3863f };
	fLocal_167[7] = 0.0118f;
	fLocal_168[7] = 0.037f;
	fLocal_169[7] = 0.5106f;
	fLocal_170[7] = 0.859f;
	iLocal_243[7] = joaat("serrano");
	Local_217[8 /*3*/] = { -1034.8263f, -739.7039f, 18.881f };
	fLocal_167[8] = 0.0195f;
	fLocal_168[8] = 0.019f;
	fLocal_169[8] = -0.4353f;
	fLocal_170[8] = 0.8999f;
	iLocal_243[8] = joaat("radi");
	Local_217[9 /*3*/] = { -1033.9292f, -712.6562f, 19.4857f };
	fLocal_167[9] = -0.0193f;
	fLocal_168[9] = -0.0194f;
	fLocal_169[9] = 0.9056f;
	fLocal_170[9] = 0.4231f;
	iLocal_243[9] = joaat("serrano");
	Local_217[10 /*3*/] = { -1005.5381f, -715.5715f, 20.3848f };
	fLocal_167[10] = -0.044f;
	fLocal_168[10] = -0.1329f;
	fLocal_169[10] = -0.3895f;
	fLocal_170[10] = 0.9103f;
	iLocal_243[10] = joaat("bati");
	Local_217[11 /*3*/] = { -980.4462f, -670.3936f, 22.8034f };
	fLocal_167[11] = -0.0432f;
	fLocal_168[11] = -0.0121f;
	fLocal_169[11] = 0.8701f;
	fLocal_170[11] = 0.4908f;
	iLocal_243[11] = joaat("washington");
	Local_217[12 /*3*/] = { -969.1606f, -664.5714f, 23.887f };
	fLocal_167[12] = -0.046f;
	fLocal_168[12] = -0.0213f;
	fLocal_169[12] = 0.8534f;
	fLocal_170[12] = 0.5187f;
	iLocal_243[12] = joaat("rapidgt");
	Local_217[13 /*3*/] = { -928.2644f, -652.7425f, 26.6901f };
	fLocal_167[13] = -0.0303f;
	fLocal_168[13] = -0.0054f;
	fLocal_169[13] = 0.7573f;
	fLocal_170[13] = 0.6524f;
	iLocal_243[13] = joaat("rapidgt");
	Local_217[14 /*3*/] = { -916.6693f, -650.6878f, 27.0863f };
	fLocal_167[14] = -0.024f;
	fLocal_168[14] = 0.0101f;
	fLocal_169[14] = 0.7742f;
	fLocal_170[14] = 0.6324f;
	iLocal_243[14] = joaat("feltzer2");
	Local_217[15 /*3*/] = { -790.8272f, -667.5106f, 28.4613f };
	fLocal_167[15] = -0.0369f;
	fLocal_168[15] = -0.005f;
	fLocal_169[15] = 0.7209f;
	fLocal_170[15] = -0.6921f;
	iLocal_243[15] = joaat("rapidgt");
	Local_217[16 /*3*/] = { -790.0645f, -647.0408f, 28.4882f };
	fLocal_167[16] = -0.037f;
	fLocal_168[16] = 0.0003f;
	fLocal_169[16] = 0.7201f;
	fLocal_170[16] = 0.6929f;
	iLocal_243[16] = joaat("feltzer2");
	Local_217[17 /*3*/] = { -716.8614f, -667.7233f, 29.6724f };
	fLocal_167[17] = -0.0267f;
	fLocal_168[17] = -0.0106f;
	fLocal_169[17] = 0.7068f;
	fLocal_170[17] = -0.7068f;
	iLocal_243[17] = joaat("sultan");
	Local_217[18 /*3*/] = { -653.5672f, -605.7774f, 32.8442f };
	fLocal_167[18] = 0.0008f;
	fLocal_168[18] = -0.0298f;
	fLocal_169[18] = 0.9991f;
	fLocal_170[18] = 0.031f;
	iLocal_243[18] = joaat("radi");
	Local_217[19 /*3*/] = { -598.4409f, -647.7642f, 31.2207f };
	fLocal_167[19] = 0.0659f;
	fLocal_168[19] = -0.1257f;
	fLocal_169[19] = 0.6417f;
	fLocal_170[19] = 0.7537f;
	iLocal_243[19] = joaat("bati");
	Local_217[20 /*3*/] = { -457.3376f, -774.9608f, 29.9679f };
	fLocal_167[20] = -0.0002f;
	fLocal_168[20] = 0f;
	fLocal_169[20] = 0.7033f;
	fLocal_170[20] = 0.7109f;
	iLocal_243[20] = joaat("sultan");
	Local_217[21 /*3*/] = { -506.0643f, -614.7634f, 29.6699f };
	fLocal_167[21] = -0.0131f;
	fLocal_168[21] = -0.1302f;
	fLocal_169[21] = -0.0218f;
	fLocal_170[21] = 0.9912f;
	iLocal_243[21] = joaat("bati");
	Local_217[22 /*3*/] = { -487.6026f, -614.804f, 30.58f };
	fLocal_167[22] = 0.0002f;
	fLocal_168[22] = 0f;
	fLocal_169[22] = 0.9999f;
	fLocal_170[22] = 0.0166f;
	iLocal_243[22] = joaat("sultan");
	Local_217[23 /*3*/] = { -856.7647f, -679.063f, 27.2491f };
	fLocal_167[23] = -0.008f;
	fLocal_168[23] = 0.0277f;
	fLocal_169[23] = 0.0148f;
	fLocal_170[23] = 0.9995f;
	iLocal_243[23] = joaat("sultan");
	Local_217[24 /*3*/] = { -750.8827f, -607.8928f, 29.5466f };
	fLocal_167[24] = 0.0609f;
	fLocal_168[24] = 0.0021f;
	fLocal_169[24] = 0.9978f;
	fLocal_170[24] = -0.0261f;
	iLocal_243[24] = joaat("sultan");
	Local_217[25 /*3*/] = { -477.1844f, -757.5135f, 30.1527f };
	fLocal_167[25] = -0.0022f;
	fLocal_168[25] = -0.0021f;
	fLocal_169[25] = 0.7233f;
	fLocal_170[25] = 0.6905f;
	iLocal_243[25] = joaat("rapidgt");
	Local_217[26 /*3*/] = { -471.01f, -624.55f, 30.58f };
	fLocal_167[26] = 0.0001f;
	fLocal_168[26] = -0.0002f;
	fLocal_169[26] = -0.0144f;
	fLocal_170[26] = 0.9999f;
	iLocal_243[26] = joaat("sultan");
	Local_217[27 /*3*/] = { -679.3469f, -593.3812f, 24.7059f };
	fLocal_167[27] = -0.0011f;
	fLocal_168[27] = 0.0004f;
	fLocal_169[27] = 0.6772f;
	fLocal_170[27] = 0.7358f;
	iLocal_243[27] = joaat("sultan");
	Local_217[28 /*3*/] = { 433.6576f, -608.7065f, 27.7732f };
	fLocal_167[28] = -0.0003f;
	fLocal_168[28] = 0.0005f;
	fLocal_169[28] = 0.7774f;
	fLocal_170[28] = -0.629f;
	iLocal_243[28] = joaat("sultan");
	Local_217[29 /*3*/] = { 416.3534f, -638.7431f, 27.8704f };
	fLocal_167[29] = 0.0891f;
	fLocal_168[29] = -0.0957f;
	fLocal_169[29] = 0.7111f;
	fLocal_170[29] = 0.6908f;
	iLocal_243[29] = joaat("bati");
	Local_217[30 /*3*/] = { 433.9501f, -603.2841f, 27.8743f };
	fLocal_167[30] = 0.0794f;
	fLocal_168[30] = -0.1039f;
	fLocal_169[30] = 0.6505f;
	fLocal_170[30] = 0.7482f;
	iLocal_243[30] = joaat("bati");
	Local_217[31 /*3*/] = { 291.0103f, -589.8865f, 42.9593f };
	fLocal_167[31] = 0.0053f;
	fLocal_168[31] = -0.0026f;
	fLocal_169[31] = 0.9489f;
	fLocal_170[31] = 0.3156f;
	iLocal_243[31] = joaat("ambulance");
	Local_218[0 /*3*/] = { -1104.2826f, -775.1389f, 18.8468f };
	fLocal_161[0] = -0.0068f;
	fLocal_162[0] = -0.0121f;
	fLocal_163[0] = 0.9186f;
	fLocal_164[0] = 0.3949f;
	iLocal_195[0] = 52;
	fLocal_165[0] = 16000f;
	fLocal_166[0] = 1f;
	iLocal_244[0] = joaat("feltzer2");
	Local_218[1 /*3*/] = { -1129.4855f, -805.7412f, 15.9592f };
	fLocal_161[1] = 0.0303f;
	fLocal_162[1] = -0.0208f;
	fLocal_163[1] = -0.3298f;
	fLocal_164[1] = 0.9433f;
	iLocal_195[1] = 5;
	fLocal_165[1] = 16488f;
	fLocal_166[1] = 1f;
	iLocal_244[1] = joaat("washington");
	Local_218[2 /*3*/] = { -998.2445f, -692.8199f, 21.5328f };
	fLocal_161[2] = -0.0136f;
	fLocal_162[2] = -0.0158f;
	fLocal_163[2] = 0.8929f;
	fLocal_164[2] = 0.4498f;
	iLocal_195[2] = 53;
	fLocal_165[2] = 21412f;
	fLocal_166[2] = 1f;
	iLocal_244[2] = joaat("feltzer2");
	Local_218[3 /*3*/] = { -883.8546f, -655.3506f, 27.5493f };
	fLocal_161[3] = 0.0032f;
	fLocal_162[3] = -0.0018f;
	fLocal_163[3] = 0.712f;
	fLocal_164[3] = 0.7021f;
	iLocal_195[3] = 54;
	fLocal_165[3] = 25000f;
	fLocal_166[3] = 1f;
	iLocal_244[3] = joaat("feltzer2");
	Local_218[4 /*3*/] = { -850.7409f, -661.5627f, 27.3668f };
	fLocal_161[4] = -0.0015f;
	fLocal_162[4] = 0.0017f;
	fLocal_163[4] = -0.6912f;
	fLocal_164[4] = 0.7227f;
	iLocal_195[4] = 55;
	fLocal_165[4] = 28500f;
	fLocal_166[4] = 1f;
	iLocal_244[4] = joaat("serrano");
	Local_218[5 /*3*/] = { -721.2928f, -652.8879f, 29.816f };
	fLocal_161[5] = -0.0024f;
	fLocal_162[5] = -0.0102f;
	fLocal_163[5] = 0.6908f;
	fLocal_164[5] = 0.723f;
	iLocal_195[5] = 56;
	fLocal_165[5] = 32500f;
	fLocal_166[5] = 1f;
	iLocal_244[5] = joaat("serrano");
	Local_218[6 /*3*/] = { -724.7061f, -648.64f, 29.7668f };
	fLocal_161[6] = -0.0212f;
	fLocal_162[6] = 0.005f;
	fLocal_163[6] = 0.7061f;
	fLocal_164[6] = 0.7078f;
	iLocal_195[6] = 57;
	fLocal_165[6] = 32750f;
	fLocal_166[6] = 1f;
	iLocal_244[6] = joaat("washington");
	Local_218[7 /*3*/] = { -688.4173f, -579.6989f, 24.8499f };
	fLocal_161[7] = 0.0026f;
	fLocal_162[7] = -0.0029f;
	fLocal_163[7] = 0.7397f;
	fLocal_164[7] = -0.673f;
	iLocal_195[7] = 58;
	fLocal_165[7] = 40273f;
	fLocal_166[7] = 1f;
	iLocal_244[7] = joaat("washington");
	Local_218[8 /*3*/] = { -563.1786f, -579.4122f, 25.3124f };
	fLocal_161[8] = 0.002f;
	fLocal_162[8] = 0.0021f;
	fLocal_163[8] = 0.7032f;
	fLocal_164[8] = 0.711f;
	iLocal_195[8] = 59;
	fLocal_165[8] = 43500f;
	fLocal_166[8] = 1f;
	iLocal_244[8] = joaat("trash");
	Local_218[9 /*3*/] = { -556.1506f, -631.2017f, 30.562f };
	fLocal_161[9] = -0.0352f;
	fLocal_162[9] = 0.0378f;
	fLocal_163[9] = -0.6805f;
	fLocal_164[9] = 0.7309f;
	iLocal_195[9] = 60;
	fLocal_165[9] = 51889f;
	fLocal_166[9] = 1f;
	iLocal_244[9] = joaat("bmx");
	Local_218[10 /*3*/] = { -445.0543f, -655.1606f, 31.3466f };
	fLocal_161[10] = 0.0076f;
	fLocal_162[10] = 0.0093f;
	fLocal_163[10] = 0.7136f;
	fLocal_164[10] = 0.7005f;
	iLocal_195[10] = 61;
	fLocal_165[10] = 56772f;
	fLocal_166[10] = 1f;
	iLocal_244[10] = joaat("sultan");
	Local_218[11 /*3*/] = { -519.4122f, -666.3391f, 32.7365f };
	fLocal_161[11] = 0.0105f;
	fLocal_162[11] = 0.0179f;
	fLocal_163[11] = -0.6817f;
	fLocal_164[11] = 0.7313f;
	iLocal_195[11] = 62;
	fLocal_165[11] = 57772f;
	fLocal_166[11] = 1f;
	iLocal_244[11] = joaat("washington");
	Local_218[12 /*3*/] = { -491.8959f, -716.5375f, 32.5585f };
	fLocal_161[12] = 0.1433f;
	fLocal_162[12] = 0.0787f;
	fLocal_163[12] = 0.9609f;
	fLocal_164[12] = -0.2234f;
	iLocal_195[12] = 63;
	fLocal_165[12] = 60800f;
	fLocal_166[12] = 1.2f;
	iLocal_244[12] = joaat("bmx");
	Local_218[13 /*3*/] = { -492.3147f, -827.8944f, 29.9952f };
	fLocal_161[13] = -0.005f;
	fLocal_162[13] = 0.0046f;
	fLocal_163[13] = 0.0169f;
	fLocal_164[13] = 0.9998f;
	iLocal_195[13] = 64;
	fLocal_165[13] = 64030f;
	fLocal_166[13] = 1f;
	iLocal_244[13] = joaat("washington");
	Local_218[14 /*3*/] = { -518.8372f, -756.7956f, 31.5421f };
	fLocal_161[14] = -0.0147f;
	fLocal_162[14] = -0.0264f;
	fLocal_163[14] = 0.9686f;
	fLocal_164[14] = -0.2467f;
	iLocal_195[14] = 65;
	fLocal_165[14] = 64230f;
	fLocal_166[14] = 1f;
	iLocal_244[14] = joaat("washington");
	Local_218[15 /*3*/] = { -477.6166f, -806.7344f, 30.0523f };
	fLocal_161[15] = 0f;
	fLocal_162[15] = 0.0025f;
	fLocal_163[15] = -0.701f;
	fLocal_164[15] = 0.7132f;
	iLocal_195[15] = 66;
	fLocal_165[15] = 66084f;
	fLocal_166[15] = 1f;
	iLocal_244[15] = joaat("washington");
	Local_218[16 /*3*/] = { -417.4774f, -836.1498f, 31.442f };
	fLocal_161[16] = -0.0077f;
	fLocal_162[16] = -0.0047f;
	fLocal_163[16] = 0.7025f;
	fLocal_164[16] = 0.7117f;
	iLocal_195[16] = 67;
	fLocal_165[16] = 65384f;
	fLocal_166[16] = 1f;
	iLocal_244[16] = joaat("benson");
	Local_218[17 /*3*/] = { -413.1984f, -831.7321f, 30.8216f };
	fLocal_161[17] = -0.0237f;
	fLocal_162[17] = 0.0144f;
	fLocal_163[17] = 0.7088f;
	fLocal_164[17] = 0.7049f;
	iLocal_195[17] = 68;
	fLocal_165[17] = 67078f;
	fLocal_166[17] = 1f;
	iLocal_244[17] = joaat("sultan");
	Local_218[18 /*3*/] = { -528.5989f, -840.7145f, 29.413f };
	fLocal_161[18] = -0.0237f;
	fLocal_162[18] = 0.0236f;
	fLocal_163[18] = 0.7098f;
	fLocal_164[18] = -0.7036f;
	iLocal_195[18] = 69;
	fLocal_165[18] = 64606.32f;
	fLocal_166[18] = 1f;
	iLocal_244[18] = joaat("sultan");
	Local_218[19 /*3*/] = { -446.0574f, -767.6522f, 29.9676f };
	fLocal_161[19] = -0.0002f;
	fLocal_162[19] = 0.0001f;
	fLocal_163[19] = 0.711f;
	fLocal_164[19] = 0.7032f;
	iLocal_195[19] = 51;
	fLocal_165[19] = 70071.85f;
	fLocal_166[19] = 1f;
	iLocal_244[19] = joaat("sultan");
	Local_218[20 /*3*/] = { -488.5203f, -523.8471f, 24.8363f };
	fLocal_161[20] = -0.001f;
	fLocal_162[20] = 0.0015f;
	fLocal_163[20] = 0.7208f;
	fLocal_164[20] = -0.6931f;
	iLocal_195[20] = 71;
	fLocal_165[20] = 81355.85f;
	fLocal_166[20] = 1f;
	iLocal_244[20] = joaat("landstalker");
	Local_218[21 /*3*/] = { -305.7855f, -508.727f, 24.7583f };
	fLocal_161[21] = 0.0168f;
	fLocal_162[21] = -0.0137f;
	fLocal_163[21] = 0.7019f;
	fLocal_164[21] = 0.7119f;
	iLocal_195[21] = 72;
	fLocal_165[21] = 86290.85f;
	fLocal_166[21] = 1f;
	iLocal_244[21] = joaat("landstalker");
	Local_218[22 /*3*/] = { 294.6554f, -576.5358f, 42.9547f };
	fLocal_161[22] = 0.0001f;
	fLocal_162[22] = 0.0078f;
	fLocal_163[22] = 0.2262f;
	fLocal_164[22] = 0.974f;
	iLocal_195[22] = 73;
	fLocal_165[22] = 109000f;
	fLocal_166[22] = 1f;
	iLocal_244[22] = joaat("ambulance");
	Local_218[23 /*3*/] = { -393.8603f, -503.4236f, 25.4432f };
	fLocal_161[23] = 0.0016f;
	fLocal_162[23] = 0.0018f;
	fLocal_163[23] = 0.7075f;
	fLocal_164[23] = 0.7067f;
	iLocal_195[23] = 74;
	fLocal_165[23] = 82431.85f;
	fLocal_166[23] = 1f;
	iLocal_244[23] = joaat("packer");
	Local_218[24 /*3*/] = { -527.6368f, -846.5891f, 29.9361f };
	fLocal_161[24] = 0.0422f;
	fLocal_162[24] = -0.0031f;
	fLocal_163[24] = -0.7009f;
	fLocal_164[24] = 0.712f;
	iLocal_195[24] = 75;
	fLocal_165[24] = 62500f;
	fLocal_166[24] = 1f;
	iLocal_244[24] = joaat("bus");
	Local_218[25 /*3*/] = { 3.4457f, -533.8352f, 33.2443f };
	fLocal_161[25] = 0.0232f;
	fLocal_162[25] = 0.0045f;
	fLocal_163[25] = -0.6929f;
	fLocal_164[25] = 0.7206f;
	iLocal_195[25] = 80;
	fLocal_165[25] = 100001.4f;
	fLocal_166[25] = 1f;
	iLocal_244[25] = joaat("asterope");
	Local_218[26 /*3*/] = { -483.5551f, -531.6314f, 24.8571f };
	fLocal_161[26] = 0.0034f;
	fLocal_162[26] = -0.0031f;
	fLocal_163[26] = -0.6972f;
	fLocal_164[26] = 0.7168f;
	iLocal_195[26] = 76;
	fLocal_165[26] = 81217.44f;
	fLocal_166[26] = 1f;
	iLocal_244[26] = joaat("asterope");
	Local_218[27 /*3*/] = { -277.6243f, -508.3559f, 24.9767f };
	fLocal_161[27] = 0.0108f;
	fLocal_162[27] = -0.0139f;
	fLocal_163[27] = 0.7117f;
	fLocal_164[27] = 0.7023f;
	iLocal_195[27] = 77;
	fLocal_165[27] = 87256.44f;
	fLocal_166[27] = 1f;
	iLocal_244[27] = joaat("asterope");
	Local_218[28 /*3*/] = { -201.7354f, -496.1847f, 27.3531f };
	fLocal_161[28] = -0.0125f;
	fLocal_162[28] = -0.0117f;
	fLocal_163[28] = 0.7296f;
	fLocal_164[28] = 0.6837f;
	iLocal_195[28] = 82;
	fLocal_165[28] = 90798.32f;
	fLocal_166[28] = 1f;
	iLocal_244[28] = joaat("packer");
	Local_218[29 /*3*/] = { -118.4835f, -529.6654f, 29.6739f };
	fLocal_161[29] = 0.0116f;
	fLocal_162[29] = -0.0127f;
	fLocal_163[29] = -0.686f;
	fLocal_164[29] = 0.7274f;
	iLocal_195[29] = 44;
	fLocal_165[29] = 94954.86f;
	fLocal_166[29] = 1f;
	iLocal_244[29] = joaat("landstalker");
	iVar0 = 0;
	iVar1 = iLocal_251;
	iVar2 = iLocal_248;
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (fLocal_165[iVar0] >= 41011f)
		{
			fLocal_165[iVar0] = (fLocal_165[iVar0] - 43.5f);
		}
		if (fLocal_165[iVar0] >= 77018.5f)
		{
			fLocal_165[iVar0] = (fLocal_165[iVar0] - 78.5f);
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		if (fLocal_156[iVar0] >= 41011f)
		{
			fLocal_156[iVar0] = (fLocal_156[iVar0] - 43.5f);
		}
		if (fLocal_156[iVar0] >= 77018.5f)
		{
			fLocal_156[iVar0] = (fLocal_156[iVar0] - 78.5f);
		}
		iVar0++;
	}
}

void func_455(char* sParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x36C47
{
	struct<3> Var0;
	StringCopy(&cLocal_232, sParam0, 64);
	bLocal_128 = true;
	iLocal_133 = 0;
	iLocal_199 = 0;
	iLocal_200 = 0;
	iLocal_201 = 0;
	iLocal_202 = iParam1;
	iLocal_203 = 0;
	iLocal_204 = 0;
	iLocal_205 = 0;
	iLocal_209 = 0;
	iLocal_212 = 0;
	iLocal_210 = -1;
	iLocal_211 = -1;
	iLocal_213 = 0;
	iLocal_214 = 0;
	fLocal_187 = 0f;
	fLocal_188 = 0f;
	fLocal_173 = 0f;
	iLocal_134 = 0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		Local_220.f_0 = (Var0.f_0 - 100f);
		Local_220.f_1 = (Var0.f_1 - 100f);
		Local_220.f_2 = (Var0.f_2 - 100f);
		Local_221.f_0 = (Var0.f_0 + 100f);
		Local_221.f_1 = (Var0.f_1 + 100f);
		Local_221.f_2 = (Var0.f_2 + 100f);
		PATHFIND::SET_ROADS_IN_AREA(Local_220, Local_221, false, false);
		if (bParam2)
		{
			MISC::CLEAR_AREA_OF_VEHICLES(Var0, 500f, false, false, false, false, false, false, 0);
		}
	}
	PED::ADD_RELATIONSHIP_GROUP("rgh_traffic", &iLocal_241);
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
	func_79();
}

void func_456()//Position - 0x36D6A
{
	int iVar0;
	__LIB_11__.func_32(&(Local_275.f_35[0]));
	if (!ENTITY::DOES_ENTITY_EXIST(Local_535.f_0))
	{
		MISC::CLEAR_AREA(Local_535.f_3, 2f, true, false, false, false);
		func_457(&Local_535, Local_535.f_3, Local_535.f_6, 0, 1);
		func_443();
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_535.f_1);
	__LIB_11__.func_32(&(Local_275.f_35[1]));
	if (!ENTITY::DOES_ENTITY_EXIST(Local_536.f_0))
	{
		MISC::CLEAR_AREA(Local_536.f_3, 2f, true, false, false, false);
		Local_536.f_0 = VEHICLE::CREATE_VEHICLE(Local_536.f_1, Local_536.f_3, Local_536.f_6, true, true, false);
		if (__LIB_1__.func_183(Local_536.f_0))
		{
			ENTITY::SET_ENTITY_COORDS(Local_536.f_0, Local_536.f_3, true, false, false, true);
			ENTITY::SET_ENTITY_QUATERNION(Local_536.f_0, -0.0248f, 0.0004f, 0.8949f, 0.4456f);
		}
		func_439();
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_536.f_1);
	if (__LIB_1__.func_183(Local_535.f_0))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_532.f_0))
		{
			Local_532.f_0 = PED::CREATE_PED_INSIDE_VEHICLE(Local_535.f_0, 26, Local_532.f_1, 2, true, true);
			func_444();
		}
		__LIB_0__.func_0(&(Local_275.f_28[0]));
		if (!ENTITY::DOES_ENTITY_EXIST(Local_533.f_0))
		{
			Local_533.f_0 = PED::CREATE_PED_INSIDE_VEHICLE(Local_535.f_0, 26, Local_533.f_1, 0, true, true);
			func_445();
		}
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_532.f_1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_533.f_1);
	if (__LIB_1__.func_183(Local_536.f_0))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_534.f_0))
		{
			Local_534.f_0 = PED::CREATE_PED_INSIDE_VEHICLE(Local_536.f_0, 26, Local_534.f_1, -1, true, true);
			func_441();
		}
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_534.f_1);
	if (__LIB_1__.func_197(PLAYER::PLAYER_PED_ID()))
	{
		__LIB_0__.func_203(&uLocal_367, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(PLAYER::PLAYER_PED_ID(), true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_540[0 /*2*/]))
	{
		MISC::CLEAR_AREA(-1329.7417f, -665.3537f, 26.3413f, 2f, true, false, false, false);
		Local_540[0 /*2*/] = VEHICLE::CREATE_VEHICLE(Local_540[0 /*2*/].f_1, -1329.7417f, -665.3537f, 26.3413f, 126.9722f, true, true, false);
	}
	if (__LIB_1__.func_183(Local_540[0 /*2*/]))
	{
		ENTITY::SET_ENTITY_QUATERNION(Local_540[0 /*2*/], -0.0318f, 0.0067f, 0.8936f, 0.4476f);
		if (!VEHICLE::IS_VEHICLE_DOOR_FULLY_OPEN(Local_540[0 /*2*/], 2))
		{
			VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_540[0 /*2*/], 2, false, false);
		}
		if (!VEHICLE::IS_VEHICLE_DOOR_FULLY_OPEN(Local_540[0 /*2*/], 3))
		{
			VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_540[0 /*2*/], 3, false, false);
		}
		VEHICLE::SET_VEHICLE_INDICATOR_LIGHTS(Local_540[0 /*2*/], 1, true);
		VEHICLE::SET_VEHICLE_INDICATOR_LIGHTS(Local_540[0 /*2*/], 0, true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_540[1 /*2*/]))
	{
		MISC::CLEAR_AREA(-1329.7509f, -676.4864f, 25.8557f, 2f, true, false, false, false);
		Local_540[1 /*2*/] = VEHICLE::CREATE_VEHICLE(Local_540[1 /*2*/].f_1, -1329.7509f, -676.4864f, 25.8557f, 307.7227f, true, true, false);
	}
	if (__LIB_1__.func_183(Local_540[1 /*2*/]))
	{
		ENTITY::SET_ENTITY_QUATERNION(Local_540[1 /*2*/], 0.0248f, 0.0142f, -0.4405f, 0.8973f);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_540[2 /*2*/]))
	{
		MISC::CLEAR_AREA(-1336.3171f, -680.9752f, 25.5144f, 2f, true, false, false, false);
		Local_540[2 /*2*/] = VEHICLE::CREATE_VEHICLE(Local_540[2 /*2*/].f_1, -1336.3171f, -680.9752f, 25.5144f, 307.7227f, true, true, false);
	}
	if (__LIB_1__.func_183(Local_540[2 /*2*/]))
	{
		ENTITY::SET_ENTITY_QUATERNION(Local_540[2 /*2*/], 0.0269f, 0.0079f, -0.4791f, 0.8773f);
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (__LIB_1__.func_183(Local_540[iVar0 /*2*/]))
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_540[iVar0 /*2*/].f_1);
		}
		iVar0++;
	}
	func_437(fLocal_343, Local_549);
	if (bLocal_276)
	{
		if (bLocal_306)
		{
			if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
			{
				__LIB_0__.func_84(800, 0);
			}
		}
	}
}

int func_457(int* iParam0, struct<3> Param1, float fParam2, int iParam3, int iParam4)//Position - 0x3712C
{
	STREAMING::REQUEST_MODEL(iLocal_93);
	if (iParam4 == 1)
	{
		while (!STREAMING::HAS_MODEL_LOADED(iLocal_93))
		{
			SYSTEM::WAIT(0);
		}
	}
	else if (!STREAMING::HAS_MODEL_LOADED(iLocal_93))
	{
		return 0;
	}
	__LIB_20__.func_649(iParam0, iLocal_93, Param1, fParam2);
	if (__LIB_0__.func_121(*iParam0))
	{
		VEHICLE::SET_VEHICLE_COLOURS(*iParam0, 65, 0);
		VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(*iParam0, 5, false);
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, "28BNT310");
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, 0);
		if (iParam3 == 1)
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(*iParam0, 10);
		}
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_93);
	return 1;
}

void func_459(bool bParam0)//Position - 0x371F9
{
	HUD::REQUEST_ADDITIONAL_TEXT("NIGEL2", 0);
	VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_333, sLocal_359);
	STREAMING::REQUEST_MODEL(Local_536.f_1);
	STREAMING::REQUEST_MODEL(Local_535.f_1);
	STREAMING::REQUEST_MODEL(Local_534.f_1);
	STREAMING::REQUEST_MODEL(Local_532.f_1);
	STREAMING::REQUEST_MODEL(Local_533.f_1);
	STREAMING::REQUEST_MODEL(Local_540[0 /*2*/].f_1);
	STREAMING::REQUEST_MODEL(Local_540[1 /*2*/].f_1);
	STREAMING::REQUEST_MODEL(Local_540[2 /*2*/].f_1);
	VEHICLE::REQUEST_VEHICLE_RECORDING(2, sLocal_359);
	if (bParam0)
	{
		while ((((((((((!HUD::HAS_ADDITIONAL_TEXT_LOADED(0) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_333, sLocal_359)) || !STREAMING::HAS_MODEL_LOADED(Local_536.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_535.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_534.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_532.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_533.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_540[0 /*2*/].f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_540[1 /*2*/].f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_540[2 /*2*/].f_1)) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(2, sLocal_359))
		{
			if (bLocal_276)
			{
				if (!CAM::IS_SCREEN_FADED_OUT())
				{
					__LIB_10__.func_696(0, 1);
					bLocal_306 = true;
				}
			}
			SYSTEM::WAIT(0);
		}
	}
}

void func_461()//Position - 0x37376
{
	struct<3> Var0;
	float fVar1;
	Var0 = { -1290f, -646.1f, 26.05f };
	fVar1 = 307.66f;
	__LIB_32__.func_755(-1311.4094f, -648.4133f, 24.925262f, -1289.0276f, -632.04297f, 29.552197f, 17.5f, Var0, fVar1, __LIB_9__.func_996(), 1, 0, 1, 0, 0);
	__LIB_32__.func_755(-1319.6898f, -655.77734f, 29.458387f, -1184.4613f, -834.82007f, 12.343782f, 30f, Var0, fVar1, __LIB_9__.func_996(), 1, 0, 1, 0, 0);
	if (__LIB_20__.func_739(0f, 0f, 0f, 1))
	{
		__LIB_41__.func_636(Var0, fVar1, 0, 145);
	}
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-1409.3435f, -756.381f, 17.59896f, -1239.1476f, -587.12195f, 31.25266f, false, true);
	VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(-1409.3435f, -756.381f, 17.59896f, -1239.1476f, -587.12195f, 31.25266f, 0);
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1415.9039f, -732.5489f, 17.545492f, -1236.6282f, -601.0265f, 31.153446f, 23f, false, false, true);
	MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(-1415.9039f, -732.5489f, 17.545492f, -1236.6282f, -601.0265f, 31.153446f, 23f, false, false, false, true, true, 0, 0);
	PATHFIND::SET_PED_PATHS_IN_AREA(-1318.5005f, -678.88257f, 23f, -1296.6278f, -631.5449f, 29f, false, 0);
	PED::SET_PED_NON_CREATION_AREA(-1318.5005f, -678.88257f, 23f, -1296.6278f, -631.5449f, 29f);
	iLocal_356 = PED::ADD_SCENARIO_BLOCKING_AREA(-1318.5005f, -678.88257f, 23f, -1296.6278f, -631.5449f, 29f, false, true, true, true);
	MISC::CLEAR_AREA_OF_OBJECTS(-1297.8f, -637.42f, 25.55f, 16f, 0);
	iLocal_358[0] = PED::ADD_SCENARIO_BLOCKING_AREA(-1315.6798f, -682.7614f, 23.24123f, -1295.2665f, -670.37604f, 27.9768f, false, true, true, true);
	MISC::CLEAR_AREA(-1305.332f, -676.3739f, 25.79325f, 10f, true, false, false, false);
	iLocal_358[1] = PED::ADD_SCENARIO_BLOCKING_AREA(-1286.9061f, -697.55927f, 21.7392f, -1279.6984f, -691.5876f, 26.33636f, false, true, true, true);
	MISC::CLEAR_AREA(-1287.702f, -698.19574f, 27.50166f, 10f, true, false, false, false);
	iLocal_358[2] = PED::ADD_SCENARIO_BLOCKING_AREA(-1270.7201f, -723.89026f, 19.46898f, -1262.898f, -718.27856f, 24.43682f, false, true, true, true);
	MISC::CLEAR_AREA(-1269.8602f, -722.4664f, 21.54627f, 8f, true, false, false, false);
	iLocal_358[3] = PED::ADD_SCENARIO_BLOCKING_AREA(-1268.0575f, -731.51825f, 18.92047f, -1263.5745f, -727.55023f, 24.05783f, false, true, true, true);
	MISC::CLEAR_AREA(-1266.4307f, -728.92267f, 21.08542f, 2.5f, true, false, false, false);
	iLocal_358[3] = PED::ADD_SCENARIO_BLOCKING_AREA(-1237.0238f, -777.42224f, 15.58289f, -1221.889f, -764.5969f, 20.58871f, false, true, true, true);
	MISC::CLEAR_AREA(-1231.4406f, -770.94794f, 17.70891f, 8.5f, true, false, false, false);
	iLocal_358[4] = PED::ADD_SCENARIO_BLOCKING_AREA(-1222.4478f, -786.73486f, 13.60073f, -1215.773f, -780.20215f, 20.43715f, false, true, true, true);
	MISC::CLEAR_AREA(-1222.0077f, -783.6834f, 16.73119f, 7.5f, true, false, false, false);
	MISC::CLEAR_AREA_OF_VEHICLES(-1459.2f, -736.9f, 23.6f, 50f, false, false, false, true, false, false, 0);
	MISC::CLEAR_AREA_OF_VEHICLES(-1332.2f, -537.6f, 31.5f, 30f, false, false, false, true, false, false, 0);
}

void func_520()//Position - 0x3E784
{
	if (bLocal_276)
	{
		if (((iLocal_272 != 5 && iLocal_272 != 0) && iLocal_272 != 3) && iLocal_272 != 4)
		{
			func_521();
			if (iLocal_321 != 0)
			{
				func_296(5);
			}
		}
	}
}

void func_521()//Position - 0x3E7C8
{
	struct<3> Var0;
	struct<3> Var1;
	if (ENTITY::DOES_ENTITY_EXIST(Local_533.f_0) && ENTITY::DOES_ENTITY_EXIST(Local_532.f_0))
	{
		if (ENTITY::IS_ENTITY_DEAD(Local_533.f_0, false) || PED::IS_PED_INJURED(Local_533.f_0))
		{
			iLocal_321 = 5;
			return;
		}
		if (ENTITY::IS_ENTITY_DEAD(Local_532.f_0, false) || PED::IS_PED_INJURED(Local_532.f_0))
		{
			iLocal_321 = 7;
			return;
		}
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_533.f_0, PLAYER::PLAYER_PED_ID(), true))
		{
			PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
			iLocal_321 = 4;
			return;
		}
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_532.f_0, PLAYER::PLAYER_PED_ID(), true))
		{
			PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
			iLocal_321 = 6;
			return;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_534.f_0))
	{
		if (ENTITY::IS_ENTITY_DEAD(Local_534.f_0, false) || PED::IS_PED_INJURED(Local_534.f_0))
		{
			iLocal_321 = 1;
			return;
		}
		else if (ENTITY::DOES_ENTITY_EXIST(Local_536.f_0))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_536.f_0, false) && FIRE::IS_ENTITY_ON_FIRE(Local_536.f_0))
			{
				VEHICLE::EXPLODE_VEHICLE(Local_536.f_0, true, false);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_535.f_0))
	{
		if ((ENTITY::IS_ENTITY_DEAD(Local_535.f_0, false) || ENTITY::IS_ENTITY_IN_WATER(Local_535.f_0)) || !VEHICLE::IS_VEHICLE_DRIVEABLE(Local_535.f_0, false))
		{
			iLocal_321 = 3;
			return;
		}
		else if (iLocal_272 != 0)
		{
			if (VEHICLE::IS_VEHICLE_STUCK_ON_ROOF(Local_535.f_0))
			{
				if (__LIB_10__.func_638(iLocal_331, 3000))
				{
					iLocal_321 = 3;
					return;
				}
			}
			else
			{
				iLocal_331 = MISC::GET_GAME_TIMER();
			}
		}
	}
	if (((iLocal_321 == 8 || iLocal_321 == 9) || iLocal_321 == 10) || iLocal_321 == 2)
	{
		return;
	}
	if (iLocal_272 == 1 || iLocal_272 == 2)
	{
		if (__LIB_1__.func_197(Local_534.f_0))
		{
			if (fLocal_340 > 200f)
			{
				iLocal_321 = 2;
				return;
			}
			if (fLocal_341 > 50000f && fLocal_341 < 58000f)
			{
				if (iLocal_280 || !PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_535.f_0))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -668.36346f, -658.38007f, 27.433815f, -440.02197f, -657.42377f, 40.251266f, 40f, false, true, 0))
					{
						iLocal_321 = 2;
						return;
					}
				}
			}
		}
		if ((__LIB_1__.func_183(Local_535.f_0) && __LIB_0__.func_121(Local_533.f_0)) && __LIB_0__.func_121(Local_532.f_0))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			if (!PED::IS_PED_SITTING_IN_VEHICLE(Local_533.f_0, Local_535.f_0))
			{
				if (!PED::IS_PED_SITTING_IN_VEHICLE(Local_532.f_0, Local_535.f_0))
				{
					if (!iLocal_291)
					{
						if (!__LIB_0__.func_530(Local_533.f_0, Var0, 60f, 1) || !__LIB_0__.func_530(Local_532.f_0, Var0, 60f, 1))
						{
							__LIB_0__.func_296();
							__LIB_0__.func_210("NIGEL2_08", 7500, 1);
							iLocal_291 = 1;
						}
					}
					else if (__LIB_0__.func_530(Local_533.f_0, Var0, 30f, 1) && __LIB_0__.func_530(Local_532.f_0, Var0, 30f, 1))
					{
						if (__LIB_0__.func_405("NIGEL2_08", 0, 0))
						{
							HUD::CLEAR_THIS_PRINT("NIGEL2_08");
						}
						iLocal_291 = 0;
					}
					else if (!__LIB_0__.func_530(Local_533.f_0, Var0, 100f, 1) && !__LIB_0__.func_530(Local_532.f_0, Var0, 100f, 1))
					{
						iLocal_321 = 8;
						return;
					}
				}
				else if (!iLocal_291)
				{
					if (!__LIB_0__.func_530(Local_533.f_0, Var0, 60f, 1))
					{
						__LIB_0__.func_296();
						__LIB_0__.func_210("NIGEL2_05", 7500, 1);
						iLocal_291 = 1;
					}
				}
				else if (__LIB_0__.func_530(Local_533.f_0, Var0, 30f, 1))
				{
					if (__LIB_0__.func_405("NIGEL2_05", 0, 0))
					{
						HUD::CLEAR_THIS_PRINT("NIGEL2_05");
					}
					iLocal_291 = 0;
				}
				else if (!__LIB_0__.func_530(Local_533.f_0, Var0, 100f, 1))
				{
					iLocal_321 = 9;
					return;
				}
			}
			else if (!PED::IS_PED_SITTING_IN_VEHICLE(Local_532.f_0, Local_535.f_0))
			{
				if (!iLocal_291)
				{
					if (!__LIB_0__.func_530(Local_532.f_0, Var0, 60f, 1))
					{
						__LIB_0__.func_296();
						__LIB_0__.func_210("NIGEL2_09", 7500, 1);
						iLocal_291 = 1;
					}
				}
				else if (__LIB_0__.func_530(Local_532.f_0, Var0, 30f, 1))
				{
					if (__LIB_0__.func_405("NIGEL2_09", 0, 0))
					{
						HUD::CLEAR_THIS_PRINT("NIGEL2_09");
					}
					iLocal_291 = 0;
				}
				else if (!__LIB_0__.func_530(Local_532.f_0, Var0, 100f, 1))
				{
					iLocal_321 = 10;
					return;
				}
			}
			else if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_535.f_0))
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(Local_535.f_0, true) };
				fLocal_342 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var1);
				if (!iLocal_291)
				{
					if (fLocal_342 > 60f)
					{
						__LIB_0__.func_296();
						__LIB_0__.func_210("NIGEL2_08", 7500, 1);
						iLocal_291 = 1;
					}
				}
				else if (fLocal_342 > 100f)
				{
					iLocal_321 = 8;
					return;
				}
				else if (fLocal_342 < 30f)
				{
					if (__LIB_0__.func_405("NIGEL2_08", 0, 0))
					{
						HUD::CLEAR_THIS_PRINT("NIGEL2_08");
					}
					iLocal_291 = 0;
				}
				if (bLocal_300)
				{
					if (fLocal_340 < 35f)
					{
						if (func_522(Local_535.f_0))
						{
							iLocal_321 = 8;
							return;
						}
					}
				}
			}
		}
	}
}

int func_522(int iParam0)//Position - 0x3ECCA
{
	struct<3> Var0;
	int iVar1;
	if (!INTERIOR::IS_VALID_INTERIOR(iLocal_337))
	{
		return 0;
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
		if (INTERIOR::GET_INTERIOR_AT_COORDS(Var0) == iLocal_337)
		{
			iVar1 = INTERIOR::GET_KEY_FOR_ENTITY_IN_ROOM(iParam0);
			if (func_64(iVar1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_539(int iParam0, bool bParam1)//Position - 0x3F73C
{
	func_548(bParam1, 1);
	if (!__LIB_0__.func_295())
	{
		__LIB_30__.func_421("NIGEL2_MISSION_FAIL", 0);
	}
	if (bParam1)
	{
		func_540();
	}
	iLocal_273 = iParam0;
	bLocal_276 = false;
	if (__LIB_0__.func_295())
	{
		iLocal_277 = 1;
	}
	else
	{
		iLocal_277 = 0;
	}
	if (!__LIB_0__.func_295())
	{
		if (iLocal_273 == 0)
		{
			if (__LIB_0__.func_121(PLAYER::PLAYER_PED_ID()))
			{
				__LIB_30__.func_547(PLAYER::PLAYER_PED_ID(), -1309.0155f, -641.8671f, 25.5017f, 242.3463f, 0, 0);
				__LIB_20__.func_665(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 50f, 13, 5000, 0, 0);
				iLocal_277 = 1;
			}
		}
	}
	func_1(iLocal_273);
}

void func_540()//Position - 0x3F7DC
{
	func_541(1, 0);
	if (!__LIB_0__.func_295() && bLocal_276)
	{
		while (!__LIB_30__.func_421("NIGEL2_MISSION_FAIL", 0))
		{
			SYSTEM::WAIT(0);
		}
	}
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (!__LIB_0__.func_295())
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
		}
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
	}
	func_553();
	func_296(0);
}

void func_541(bool bParam0, bool bParam1)//Position - 0x3F852
{
	int iVar0;
	HUD::CLEAR_PRINTS();
	if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		HUD::CLEAR_HELP(true);
	}
	__LIB_0__.func_296();
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	__LIB_8__.func_770(0);
	__LIB_40__.func_678(1, 1, 1, 1);
	CAM::STOP_SCRIPT_GLOBAL_SHAKING(false);
	MISC::SET_INSTANCE_PRIORITY_HINT(0);
	func_305(0);
	if (!iLocal_292)
	{
		RECORDING::REPLAY_STOP_EVENT();
	}
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(-1415.9039f, -732.5489f, 17.545492f, -1236.6282f, -601.0265f, 31.153446f, 23f, 1);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(418.28375f, -571.6629f, 24.697943f, 362.0258f, -663.1398f, 38.339985f, 28f, 1);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(-668.36346f, -658.38007f, 27.433815f, -440.02197f, -657.42377f, 40.251266f, 40f, 1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-1409.3435f, -756.381f, 17.59896f, -1239.1476f, -587.12195f, 31.25266f, true, true);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(341.2f, -645.83f, 25f, 429.1f, -572.89f, 35f, true, true);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_356, false);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_357, false);
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_358[iVar0], false);
		iVar0++;
	}
	PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(-1318.5005f, -678.88257f, 23f, -1296.6278f, -631.5449f, 28f, 0);
	PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(-496.28848f, -681.55994f, 25f, -481.59882f, -668.74115f, 38f, 0);
	PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(-463.2153f, -829.0475f, 22.4812f, -445.46454f, -813.1011f, 36.56588f, 0);
	PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(341.2f, -645.83f, 25f, 429.1f, -572.89f, 35f, 0);
	PED::CLEAR_PED_NON_CREATION_AREA();
	AUDIO::SET_AGGRESSIVE_HORNS(false);
	__LIB_0__.func_367(0);
	if (!__LIB_0__.func_295() && bLocal_276)
	{
		__LIB_30__.func_421("NIGEL2_MISSION_FAIL", 0);
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 170, false);
	}
	if (CAM::DOES_CAM_EXIST(iLocal_320))
	{
		CAM::SET_CAM_ACTIVE(iLocal_320, false);
		CAM::DESTROY_CAM(iLocal_320, false);
	}
	__LIB_41__.func_437(1, 1, 1);
	__LIB_0__.func_202(&uLocal_367, 2);
	__LIB_0__.func_202(&uLocal_367, 3);
	__LIB_0__.func_202(&uLocal_367, 4);
	__LIB_0__.func_202(&uLocal_367, 5);
	__LIB_9__.func_981(&uLocal_20, 0, 0);
	CAM::SET_FOLLOW_VEHICLE_CAM_VIEW_MODE(1);
	MISC::SET_TIME_SCALE(1f);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_354);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_535.f_1, false);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_536.f_1, false);
	func_94();
	func_51(bParam0);
	func_542(bParam1);
	if (iLocal_272 == 4)
	{
		__LIB_18__.func_191(75, 2, 1, 1, 0);
		__LIB_18__.func_191(76, 1, 1, 1, 0);
		__LIB_18__.func_191(181, 2, 1, 1, 0);
	}
	else
	{
		__LIB_18__.func_191(75, 0, 0, 1, 0);
		__LIB_18__.func_191(76, 1, 0, 1, 0);
		__LIB_18__.func_191(181, 1, 0, 1, 0);
	}
}

void func_542(bool bParam0)//Position - 0x3FB1F
{
	int iVar0;
	iVar0 = 0;
	if (INTERIOR::IS_VALID_INTERIOR(iLocal_337))
	{
		if (INTERIOR::IS_INTERIOR_READY(iLocal_337))
		{
			STREAMING::SET_INTERIOR_ACTIVE(iLocal_337, false);
			INTERIOR::UNPIN_INTERIOR(iLocal_337);
		}
	}
	if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_353))
	{
		if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_353) != 10)
		{
			OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_353, 9);
		}
	}
	VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_333, sLocal_359);
	VEHICLE::REMOVE_VEHICLE_RECORDING(2, sLocal_359);
	VEHICLE::REMOVE_VEHICLE_RECORDING(1, sLocal_360);
	func_396();
	func_68(0, 1);
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_351))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_351, false);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_352))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_352, false);
	}
	STREAMING::REMOVE_PTFX_ASSET();
	if (__LIB_1__.func_183(Local_536.f_0))
	{
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_536.f_0, 0f);
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("NIGEL_02_CHASE"))
	{
		AUDIO::STOP_AUDIO_SCENE("NIGEL_02_CHASE");
	}
	AUDIO::RELEASE_SOUND_ID(iLocal_332);
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	AUDIO::UNREGISTER_SCRIPT_WITH_AUDIO();
	STREAMING::REMOVE_ANIM_DICT("rcmnigel2");
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_349.f_7);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_536.f_1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_535.f_1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_534.f_1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_532.f_1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_533.f_1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_345);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_346);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_347);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_348);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_540[iVar0 /*2*/].f_1);
		iVar0++;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_541.f_1);
	if (bParam0)
	{
		HUD::CLEAR_ADDITIONAL_TEXT(0, true);
	}
}

void func_548(bool bParam0, bool bParam1)//Position - 0x3FDAC
{
	if (bParam0)
	{
		__LIB_41__.func_437(0, 1, 1);
	}
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	func_298(0f, 0f, 0f, 0, 0, 0, 1, 1, 1, bParam1, 1, 1, 1);
}

void func_553()//Position - 0x3FFB7
{
	func_562();
	__LIB_24__.func_951(64, 2, 0);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.2f);
	MISC::ENABLE_DISPATCH_SERVICE(2, false);
	MISC::ENABLE_DISPATCH_SERVICE(3, false);
	MISC::ENABLE_DISPATCH_SERVICE(4, false);
	MISC::ENABLE_DISPATCH_SERVICE(5, false);
	AUDIO::SET_AGGRESSIVE_HORNS(true);
	__LIB_0__.func_367(1);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
	__LIB_29__.func_735();
}

void func_562()//Position - 0x402F3
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		iLocal_281[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		iLocal_278[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		iLocal_279[iVar0] = 0;
		iVar0++;
	}
	iLocal_282 = 0;
	iLocal_284 = 0;
	iLocal_291 = 0;
	iLocal_288 = 0;
	iLocal_289 = 0;
	iLocal_285 = 0;
	iLocal_286 = 0;
	iLocal_287 = 0;
	bLocal_300 = false;
	bLocal_298 = false;
	bLocal_295 = false;
	iLocal_290 = 0;
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		iLocal_283[iVar0] = 0;
		iVar0++;
	}
	iLocal_310 = 0;
	iLocal_307 = 0;
	iLocal_308 = 0;
	iLocal_309 = 0;
	iLocal_311 = 0;
	iLocal_312 = 1;
	iLocal_313 = 0;
	iLocal_314 = 0;
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		iLocal_303[iVar0] = 0;
		iVar0++;
	}
	iLocal_297 = 0;
	iLocal_299 = 0;
	iLocal_292 = 1;
	bLocal_293 = false;
	iLocal_296 = 0;
	iLocal_294 = 0;
	bLocal_306 = false;
	iLocal_304 = 0;
	bLocal_305 = false;
	bLocal_301 = false;
	bLocal_302 = false;
	bLocal_315 = false;
	iLocal_316 = 0;
	iLocal_317 = 0;
	iLocal_318 = 0;
	iLocal_319 = 0;
	iLocal_321 = 0;
	iLocal_328 = 0;
	iLocal_323 = 0;
	iLocal_329 = 0;
	iLocal_330 = 0;
	iLocal_331 = 0;
	iLocal_324 = 0;
	iLocal_325 = 0;
	iLocal_322 = 0;
	iLocal_326 = 0;
	iLocal_327 = 0;
	iLocal_332 = -1;
	iLocal_333 = 1;
	iLocal_334 = 0;
	fLocal_340 = 0f;
	fLocal_341 = 0f;
	fLocal_339 = 20.75f;
	fLocal_342 = 0f;
	Local_547 = { 368.57144f, -594.94666f, 45.542202f };
	Local_548 = { 389.5015f, -614.1279f, 29.618f };
	iLocal_338 = 0;
	Local_540[0 /*2*/].f_1 = joaat("boxville2");
	Local_540[1 /*2*/].f_1 = joaat("washington");
	Local_540[2 /*2*/].f_1 = joaat("washington");
	Local_541.f_1 = joaat("sultan");
	iLocal_345 = joaat("A_M_Y_Business_01");
	iLocal_346 = joaat("S_M_M_Doctor_01");
	iLocal_347 = joaat("S_F_Y_Scrubs_01");
	iLocal_348 = joaat("A_F_Y_BevHills_03");
	Local_536.f_1 = joaat("dubsta");
	Local_536.f_3 = { -1290.73f, -634.603f, 26.1004f };
	Local_536.f_6 = 126.961f;
	Local_535.f_1 = func_564();
	Local_535.f_3 = { -1304.01f, -644.58f, 25.91f };
	Local_535.f_6 = 127.67f;
	Local_534.f_1 = __LIB_30__.func_422();
	Local_534.f_3 = { -1290.0477f, -631.459f, 25.6863f };
	Local_534.f_6 = 121.506f;
	Local_532.f_1 = __LIB_2__.func_108(63);
	Local_532.f_3 = { -1309.61f, -640.33f, 26.53f };
	Local_532.f_6 = -124f;
	Local_533.f_1 = __LIB_2__.func_108(64);
	Local_533.f_3 = { -1310.24f, -640.19f, 26.53f };
	Local_533.f_6 = -73.78f;
	Local_349.f_1 = { 299.48f, -584.84f, 41.445f };
	Local_349.f_4 = { 0f, 0f, -20f };
	Local_349.f_7 = joaat("prop_hospitaldoors_start");
	iLocal_542 = 0;
	Local_550 = { 394.5f, -619.1f, 28.2f };
	Local_551 = { 0f, 0f, 0f };
	PED::ADD_RELATIONSHIP_GROUP("ENEMIES", &iLocal_354);
	iLocal_355 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID());
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_354, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("PLAYER"), iLocal_354);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_354, iLocal_355);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_355, iLocal_354);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_355, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("PLAYER"), iLocal_355);
}

int func_564()//Position - 0x40665
{
	return iLocal_93;
}

void func_565()//Position - 0x4066F
{
	__LIB_26__.func_252();
	if (__LIB_26__.func_257())
	{
		func_541(0, 1);
	}
	__LIB_32__.func_757(&Local_275, 1, 0, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

