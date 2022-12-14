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
	bool bLocal_43 = 0;
	bool bLocal_44 = 0;
	bool bLocal_45 = 0;
	bool bLocal_46 = 0;
	bool bLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	bool bLocal_50 = 0;
	bool bLocal_51 = 0;
	int iLocal_52 = 0;
	bool bLocal_53 = 0;
	bool bLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	var uLocal_58 = 0;
	bool bLocal_59 = 0;
	bool bLocal_60 = 0;
	bool bLocal_61 = 0;
	int iLocal_62 = 0;
	bool bLocal_63 = 0;
	var uLocal_64 = 0;
	bool bLocal_65 = 0;
	bool bLocal_66 = 0;
	bool bLocal_67 = 0;
	bool bLocal_68 = 0;
	bool bLocal_69 = 0;
	bool bLocal_70 = 0;
	bool bLocal_71 = 0;
	bool bLocal_72 = 0;
	bool bLocal_73 = 0;
	bool bLocal_74 = 0;
	float fLocal_75[100] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_76[100] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_77[100] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_78[100] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_79[100] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_80 = 0f;
	float fLocal_81 = 0f;
	float fLocal_82 = 0f;
	float fLocal_83 = 0f;
	float fLocal_84[25] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_85[25] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_86[25] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_87[25] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_88[25] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_89[25] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_90[15] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_91[15] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_92[15] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_93[15] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_94 = 0f;
	float fLocal_95 = 0f;
	float fLocal_96 = 0f;
	float fLocal_97 = 0f;
	float fLocal_98 = 0f;
	float fLocal_99 = 0f;
	float fLocal_100 = 0f;
	float fLocal_101 = 0f;
	float fLocal_102 = 0f;
	float fLocal_103 = 0f;
	float fLocal_104 = 0f;
	float fLocal_105 = 0f;
	float fLocal_106 = 0f;
	float fLocal_107 = 0f;
	float fLocal_108 = 0f;
	float fLocal_109 = 0f;
	float fLocal_110 = 0f;
	float fLocal_111 = 0f;
	float fLocal_112 = 0f;
	float fLocal_113 = 0f;
	float fLocal_114 = 0f;
	int iLocal_115[100] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_116[100] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_117[100] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_118[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_119[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_120[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_121[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	int iLocal_138 = 0;
	struct<3> Local_139[100];
	struct<3> Local_140[15];
	struct<3> Local_141[25];
	struct<3> Local_142 = { 0, 0, 0 } ;
	struct<3> Local_143 = { 0, 0, 0 } ;
	struct<3> Local_144 = { 0, 0, 0 } ;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	struct<3> Local_151 = { 0, 0, 0 } ;
	struct<3> Local_152 = { 0, 0, 0 } ;
	struct<3> Local_153 = { 0, 0, 0 } ;
	struct<3> Local_154 = { 0, 0, 0 } ;
	char cLocal_155[64] = "";
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	int iLocal_164 = 0;
	int iLocal_165[100] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_166[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_167[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_168 = 0;
	int iLocal_169 = 0;
	int iLocal_170 = 0;
	int iLocal_171[100] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_172[22] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_173[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_174[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_175[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_176 = 0;
	int iLocal_177 = 0;
	int iLocal_178 = 0;
	var uLocal_179 = 22;
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
	int iLocal_205 = 0;
	int iLocal_206 = 0;
	int iLocal_207 = 0;
	int iLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	int iLocal_212 = 0;
	int iLocal_213 = 0;
	struct<61> Local_214 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<3> Local_215 = { 0, 0, 0 } ;
	float fLocal_216 = 0f;
	int iLocal_217 = 0;
	int iLocal_218 = 0;
	int iLocal_219 = 0;
	int iLocal_220 = 0;
	int iLocal_221 = 0;
	int iLocal_222 = 0;
	int iLocal_223 = 0;
	int iLocal_224 = 0;
	int iLocal_225 = 0;
	int iLocal_226 = 0;
	var uLocal_227 = 0;
	int iLocal_228 = 0;
	int iLocal_229 = 0;
	int iLocal_230 = 0;
	int iLocal_231 = 0;
	int iLocal_232 = 0;
	int iLocal_233 = 0;
	int iLocal_234 = 0;
	int iLocal_235 = 0;
	int iLocal_236 = 0;
	int iLocal_237 = 0;
	int iLocal_238 = 0;
	int iLocal_239 = 0;
	int iLocal_240 = 0;
	int iLocal_241 = 0;
	int iLocal_242 = 0;
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
	int iLocal_254 = 0;
	int iLocal_255 = 0;
	int iLocal_256 = 0;
	int iLocal_257 = 0;
	int iLocal_258 = 0;
	int iLocal_259 = 0;
	int iLocal_260 = 0;
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
	bool bLocal_272 = 0;
	int iLocal_273 = 0;
	int iLocal_274 = 0;
	int iLocal_275 = 0;
	int iLocal_276 = 0;
	int iLocal_277 = 0;
	int iLocal_278 = 0;
	int iLocal_279 = 0;
	int iLocal_280 = 0;
	int iLocal_281 = 0;
	int iLocal_282 = 0;
	int iLocal_283 = 0;
	bool bLocal_284 = 0;
	int iLocal_285 = 0;
	int iLocal_286 = 0;
	int iLocal_287 = 0;
	int iLocal_288 = 0;
	int iLocal_289 = 0;
	int iLocal_290 = 0;
	int iLocal_291 = 0;
	int iLocal_292 = 0;
	int iLocal_293 = 0;
	int iLocal_294 = 0;
	bool bLocal_295 = 0;
	int iLocal_296 = 0;
	int iLocal_297 = 0;
	int iLocal_298 = 0;
	int iLocal_299 = 0;
	int iLocal_300 = 0;
	int iLocal_301 = 0;
	int iLocal_302 = 0;
	int iLocal_303 = 0;
	int iLocal_304 = 0;
	int iLocal_305 = 0;
	int iLocal_306 = 0;
	int iLocal_307 = 0;
	int iLocal_308 = 0;
	int iLocal_309 = 0;
	bool bLocal_310 = 0;
	bool bLocal_311 = 0;
	bool bLocal_312 = 0;
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
	int iLocal_329 = 0;
	int iLocal_330 = 0;
	int iLocal_331 = 0;
	bool bLocal_332 = 0;
	int iLocal_333 = 0;
	int iLocal_334 = 0;
	int iLocal_335 = 0;
	int iLocal_336 = 0;
	float fLocal_337 = 0f;
	float fLocal_338 = 0f;
	float fLocal_339 = 0f;
	float fLocal_340 = 0f;
	float fLocal_341 = 0f;
	var uLocal_342 = 0;
	float fLocal_343 = 0f;
	float fLocal_344 = 0f;
	int iLocal_345 = 0;
	var uLocal_346 = 0;
	float fLocal_347 = 0f;
	int iLocal_348 = 0;
	int iLocal_349 = 0;
	int* iLocal_350 = NULL;
	int* iLocal_351 = NULL;
	int* iLocal_352 = NULL;
	int iLocal_353 = 0;
	int* iLocal_354 = NULL;
	int iLocal_355[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_356[5] = { 0, 0, 0, 0, 0 };
	int iLocal_357 = 0;
	int iLocal_358 = 0;
	bool bLocal_359 = 0;
	int iLocal_360 = 0;
	int iLocal_361 = 0;
	int iLocal_362[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_363[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int* iLocal_364 = NULL;
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
	int iLocal_456 = 0;
	int iLocal_457 = 0;
	struct<3> Local_458 = { 0, 0, 0 } ;
	struct<3> Local_459 = { 0, 0, 0 } ;
	struct<3> Local_460 = { 0, 0, 0 } ;
	struct<3> Local_461[3];
	struct<3> Local_462 = { 0, 0, 0 } ;
	struct<3> Local_463 = { 0, 0, 0 } ;
	struct<3> Local_464 = { 0, 0, 0 } ;
	struct<3> Local_465 = { 0, 0, 0 } ;
	struct<3> Local_466 = { 0, 0, 0 } ;
	struct<3> Local_467[8];
	float fLocal_468 = 0f;
	float fLocal_469 = 0f;
	float fLocal_470[3] = { 0f, 0f, 0f };
	int iLocal_471 = 0;
	char* sLocal_472 = NULL;
	struct<3> Local_473 = { 0, 0, 255 } ;
	struct<8> Local_474[4];
	int* iLocal_475 = NULL;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	struct<5> Local_480 = { 0, 0, 0, 0, 0 } ;
	struct<5> Local_481 = { 0, 0, 0, 0, 0 } ;
	struct<5> Local_482 = { 0, 0, 0, 0, 0 } ;
	struct<5> Local_483[2];
	struct<4> Local_484[2];
	struct<5> Local_485[5];
	struct<3> Local_486[3];
	int iLocal_487 = 0;
	int iLocal_488 = 0;
	var uLocal_489 = 16;
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
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
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
	int iLocal_654 = 0;
	int iLocal_655[3] = { 0, 0, 0 };
	int iLocal_656 = 0;
	int iLocal_657 = 0;
	int iLocal_658 = 0;
	int iLocal_659[2] = { 0, 0 };
	int* iLocal_660 = NULL;
	int* iLocal_661 = NULL;
	int iLocal_662 = 0;
	int iLocal_663 = 0;
	int iLocal_664 = 0;
	int iLocal_665 = 0;
	int iLocal_666 = 0;
	int iLocal_667 = 0;
	bool bLocal_668 = 0;
	int* iLocal_669 = NULL;
	int* iLocal_670 = NULL;
	float fLocal_671 = 0f;
	float fLocal_672 = 0f;
	bool bLocal_673 = 0;
	int iLocal_674 = 0;
	float fLocal_675 = 0f;
	float fLocal_676 = 0f;
	float fLocal_677 = 0f;
	float fLocal_678 = 0f;
	float fLocal_679 = 0f;
	float fLocal_680 = 0f;
	float fLocal_681 = 0f;
	float fLocal_682 = 0f;
	float fLocal_683 = 0f;
	float fLocal_684 = 0f;
	int iLocal_685 = 0;
	float fLocal_686 = 0f;
	float fLocal_687 = 0f;
	float fLocal_688 = 0f;
	float fLocal_689 = 0f;
	float fLocal_690 = 0f;
	int iLocal_691 = 0;
	int iLocal_692 = 0;
	int iLocal_693 = 0;
	int iLocal_694 = 0;
	int iLocal_695 = 0;
	int iLocal_696 = 0;
	int iLocal_697[2] = { 0, 0 };
	int iLocal_698 = 0;
	int iLocal_699 = 0;
	char* sLocal_700 = NULL;
	int iLocal_701 = 0;
	int iLocal_702 = 0;
	bool bLocal_703 = 0;
	int iLocal_704 = 0;
	int iLocal_705 = 0;
	int iLocal_706 = 0;
	int iLocal_707 = 0;
	int iLocal_708 = 0;
	int iLocal_709 = 0;
	bool bLocal_710 = 0;
	bool bLocal_711 = 0;
	bool bLocal_712 = 0;
	int iLocal_713 = 0;
	int iLocal_714 = 0;
	int iLocal_715 = 0;
	int iLocal_716 = 0;
	int iLocal_717 = 0;
	int iLocal_718 = 0;
	int iLocal_719 = 0;
	int iLocal_720 = 0;
	int iLocal_721 = 0;
	int iLocal_722 = 0;
	int iLocal_723 = 0;
	int iLocal_724 = 0;
	int iLocal_725 = 0;
	bool bLocal_726 = 0;
	bool bLocal_727 = 0;
	int iLocal_728 = 0;
	bool bLocal_729 = 0;
	bool bLocal_730 = 0;
	int iLocal_731 = 0;
	int iLocal_732 = 0;
	int iLocal_733 = 0;
	int iLocal_734 = 0;
	int iLocal_735 = 0;
	int iLocal_736 = 0;
	int iLocal_737 = 0;
	int iLocal_738 = 0;
	int iLocal_739 = 0;
	int iLocal_740 = 0;
	int iLocal_741 = 0;
	int iLocal_742 = 0;
	int iLocal_743 = 0;
	int iLocal_744 = 0;
	int iLocal_745 = 0;
	int iLocal_746 = 0;
	float fLocal_747 = 0f;
	var uLocal_748 = 0;
	struct<4> Local_749 = { 0, 0, 0, 0 } ;
	struct<4> Local_750 = { 0, 0, 0, 0 } ;
	char[] cLocal_751[8] = 0;
	char* sLocal_752 = NULL;
	char* sLocal_753 = NULL;
	int iLocal_754 = 0;
	int iLocal_755 = 0;
	int iLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758[3] = { 0, 0, 0 };
	int* iLocal_759 = NULL;
	int iLocal_760 = 0;
	int iLocal_761 = 0;
	int iLocal_762 = 0;
	int iLocal_763 = 0;
	int iLocal_764 = 0;
	int iLocal_765 = 0;
	int iLocal_766 = 0;
	struct<61> Local_767 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	fLocal_23 = -0.0375f;
	fLocal_24 = 0.17f;
	fLocal_28 = 80f;
	fLocal_29 = 140f;
	fLocal_30 = 180f;
	iLocal_33 = 3;
	uLocal_38 = __LIB_2__::func_910(50);
	iLocal_39 = joaat("pcj");
	bLocal_44 = true;
	bLocal_51 = true;
	bLocal_73 = true;
	fLocal_94 = 120f;
	fLocal_95 = 0f;
	fLocal_97 = 1f;
	fLocal_98 = 0f;
	fLocal_99 = 1f;
	fLocal_100 = 30f;
	fLocal_102 = 1f;
	fLocal_103 = 5f;
	fLocal_104 = 1f;
	fLocal_105 = 1f;
	fLocal_106 = 100f;
	fLocal_107 = 100f;
	fLocal_108 = 0f;
	fLocal_109 = 7000f;
	fLocal_110 = 0f;
	fLocal_111 = 0f;
	fLocal_112 = 0.3f;
	fLocal_113 = 0.5f;
	fLocal_114 = 50f;
	iLocal_125 = -1;
	iLocal_133 = -1;
	iLocal_134 = -1;
	iLocal_205 = 1;
	iLocal_206 = 65;
	iLocal_207 = 49;
	iLocal_208 = 64;
	iLocal_212 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	iLocal_213 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	Local_215 = { -70.3883f, 301.2539f, 105.8003f };
	fLocal_216 = 66.86f;
	fLocal_347 = 1f;
	iLocal_371 = AUDIO::GET_SOUND_ID();
	iLocal_372 = AUDIO::GET_SOUND_ID();
	iLocal_373 = AUDIO::GET_SOUND_ID();
	iLocal_374 = AUDIO::GET_SOUND_ID();
	Local_458 = { -74.1683f, 299.9258f, 105.4432f };
	Local_459 = { -74f, 300f, 102f };
	Local_460 = { -78.9112f, 299.3701f, 105.4327f };
	Local_462 = { 0f, 0f, 0f };
	Local_463 = { 0f, -2.1f, 0.6f };
	Local_464 = { -29.4167f, 302.7094f, 111.6957f };
	Local_465 = { -75.1476f, 359.3089f, 111.4346f };
	Local_466 = { 41.4266f, 312.7768f, 140.231f };
	fLocal_468 = 235.4094f;
	fLocal_469 = 249.8696f;
	sLocal_472 = "PAPARAZZO_02_SOUNDSETS";
	iLocal_487 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
	iLocal_488 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
	iLocal_654 = joaat("fq2");
	iLocal_656 = joaat("U_M_Y_Justin");
	iLocal_657 = joaat("U_F_Y_PoppyMich");
	iLocal_658 = joaat("S_M_M_Bouncer_01");
	fLocal_671 = 0f;
	fLocal_672 = 0f;
	iLocal_674 = 1;
	fLocal_675 = 0.013f;
	fLocal_676 = 0.013f;
	fLocal_677 = 0.46f;
	fLocal_678 = 0.457f;
	fLocal_679 = 0.54f;
	fLocal_680 = 0.457f;
	fLocal_681 = 0.46f;
	fLocal_682 = 0.548f;
	fLocal_683 = 0.54f;
	fLocal_684 = 0.548f;
	iLocal_685 = 1500;
	fLocal_686 = 1f;
	fLocal_687 = 0.4f;
	fLocal_688 = 0f;
	fLocal_689 = 0f;
	fLocal_690 = 0.877f;
	iLocal_701 = joaat("sadler");
	bLocal_712 = true;
	iLocal_713 = 1;
	fLocal_747 = 0.9f;
	StringCopy(&Local_749, "pap2_Bev_routeC", 16);
	StringCopy(&Local_750, "pap2_Bev_route9", 16);
	cLocal_751 = "PAP2AUD";
	sLocal_752 = "random@escape_paparazzi@standing@";
	sLocal_753 = "random@escape_paparazzi@standing@";
	Local_214 = { ScriptParam_767 };
	__LIB_14__::func_801(&Local_214);
	iLocal_369 = __LIB_38__::func_812();
	MISC::SET_MISSION_FLAG(true);
	__LIB_0__::func_424(1);
	STREAMING::REQUEST_ANIM_DICT("rcmpaparazzo_2");
	if (__LIB_0__::func_2(0))
	{
		while (!STREAMING::HAS_ANIM_DICT_LOADED("rcmpaparazzo_2"))
		{
			SYSTEM::WAIT(0);
		}
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		__LIB_0__::func_135("Force cleanup [TERMINATING]");
		__LIB_14__::func_872(1);
		func_662();
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (__LIB_0__::func_323())
	{
		Global_78564 = 1;
		iLocal_37 = 0;
		while (!func_654(&Local_214))
		{
			SYSTEM::WAIT(0);
		}
		__LIB_14__::func_800(&Local_214, 0, 1);
		Global_78564 = 0;
	}
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_40))
	{
		PED::TAKE_OWNERSHIP_OF_SYNCHRONIZED_SCENE(iLocal_40);
	}
	iLocal_759 = Local_214.f_35[0];
	Local_214.f_35[0] = 0;
	STREAMING::REQUEST_MODEL(joaat("prop_pap_camera_01"));
	STREAMING::REQUEST_CLIP_SET(sLocal_752);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
	AUDIO::SET_AMBIENT_ZONE_STATE("AZ_PAPARAZZO_02_AMBIENCE", true, true);
	MISC::CLEAR_AREA_OF_OBJECTS(-30.860102f, 301.192f, 112.11637f, 10f, 0);
	if (__LIB_0__::func_323() && iLocal_704 == 0)
	{
		iLocal_475 = Local_214.f_28[0];
		Local_214.f_28[0] = 0;
		if (__LIB_0__::func_692(iLocal_475))
		{
			PED::SET_PED_LEG_IK_MODE(iLocal_475, 1);
		}
	}
	else if (!__LIB_0__::func_323())
	{
		if ((__LIB_0__::func_692(Local_214.f_28[0]) && __LIB_0__::func_692(PLAYER::PLAYER_PED_ID())) && !__LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), Local_214.f_28[0], 4f, 1))
		{
			bLocal_359 = true;
		}
	}
	PED::ADD_RELATIONSHIP_GROUP("POPPY_GROUP", &iLocal_691);
	if (__LIB_0__::func_323())
	{
		MISC::SET_WEATHER_TYPE_NOW_PERSIST("EXTRASUNNY");
	}
	else
	{
		MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST("EXTRASUNNY", 10f);
	}
	__LIB_0__::func_712(50, 1, 0);
	while (true)
	{
		SYSTEM::WAIT(0);
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("SF_TST", 0);
		func_642();
		if (CAM::DOES_CAM_EXIST(iLocal_666))
		{
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			HUD::THEFEED_HIDE_THIS_FRAME();
			__LIB_1__::func_33(0);
			CAM::SET_USE_HI_DOF();
		}
		__LIB_14__::func_863(Local_214.f_9, 0, 0, 0, 0, 0);
		if (__LIB_0__::func_692(PLAYER::PLAYER_PED_ID()))
		{
			if ((iLocal_692 != 11 && iLocal_692 != 0) && iLocal_692 != 1)
			{
				func_615();
			}
			switch (iLocal_692)
			{
				case 0:
					func_596();
					break;
				case 1:
					func_585();
					break;
				case 2:
					func_524();
					break;
				case 3:
					func_524();
					break;
				case 4:
					func_524();
					break;
				case 5:
					func_523();
					break;
				case 6:
					func_510();
					break;
				case 7:
					func_489();
					break;
				case 8:
					func_337();
					break;
				case 9:
					func_236();
					break;
				case 10:
					func_27();
					break;
				case 11:
					func_1();
					break;
				case 12:
					break;
				case 13:
					break;
				case 14:
					break;
				}
		}
	}
}

void func_1()//Position - 0x5A3
{
	if (iLocal_222 != 0)
	{
		if (CAM::DOES_CAM_EXIST(iLocal_663))
		{
			fLocal_337 = CAM::GET_CAM_FOV(iLocal_663);
		}
		func_14(0);
	}
	switch (iLocal_693)
	{
		case 0:
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(true);
			AUDIO::TRIGGER_MUSIC_EVENT("PAP2_FAIL");
			if (iLocal_296 == 1)
			{
				__LIB_0__::func_467("TK bPutCamInFranksHand = TRUE");
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_353))
				{
					__LIB_0__::func_467("TK CAM EXISTS");
					ENTITY::DETACH_ENTITY(iLocal_353, true, true);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_353, PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, 0);
				}
			}
			if (!AUDIO::HAS_SOUND_FINISHED(iLocal_371))
			{
				AUDIO::STOP_SOUND(iLocal_371);
			}
			func_11();
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_700))
			{
				__LIB_14__::func_880(sLocal_700, 1);
			}
			else
			{
				__LIB_14__::func_872(1);
			}
			iLocal_693 = 1;
			break;
		case 1:
			if (__LIB_0__::func_223())
			{
				func_2();
				func_662();
				SCRIPT::TERMINATE_THIS_THREAD();
			}
			break;
	}
}

void func_2()//Position - 0x689
{
	int iVar0;
	__LIB_0__::func_0(&iLocal_475);
	__LIB_0__::func_0(&Local_480);
	__LIB_0__::func_0(&Local_481);
	__LIB_0__::func_0(&Local_482);
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		__LIB_0__::func_0(&(Local_483[iVar0 /*5*/]));
		iVar0++;
	}
	if (iLocal_289 == 1)
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			__LIB_8__::func_397(&(uLocal_758[iVar0]));
			iVar0++;
		}
	}
	if (iLocal_289 == 1)
	{
		__LIB_8__::func_397(&iLocal_759);
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		__LIB_0__::func_123(&(Local_474[iVar0 /*8*/]));
		iVar0++;
	}
}

void func_11()//Position - 0x8EC
{
	__LIB_0__::func_714(&iLocal_661);
	__LIB_0__::func_714(&iLocal_660);
}

void func_14(bool bParam0)//Position - 0x92A
{
	if ((CAM::DOES_CAM_EXIST(iLocal_663) && __LIB_0__::func_121(iLocal_759)) && __LIB_0__::func_692(PLAYER::PLAYER_PED_ID()))
	{
		if (CAM::DOES_CAM_EXIST(iLocal_664))
		{
			CAM::DESTROY_CAM(iLocal_664, false);
		}
		if (CAM::DOES_CAM_EXIST(iLocal_666))
		{
			CAM::DESTROY_CAM(iLocal_666, false);
		}
		if (CAM::DOES_CAM_EXIST(iLocal_667))
		{
			CAM::DESTROY_CAM(iLocal_667, false);
		}
		GRAPHICS::SET_TIMECYCLE_MODIFIER("player_transition_scanlines");
		GRAPHICS::SET_TIMECYCLE_MODIFIER_STRENGTH(0.15f);
		if (bParam0)
		{
			func_26();
		}
		else
		{
			func_19();
		}
		func_17();
		if (iLocal_674 && !HUD::IS_PAUSE_MENU_ACTIVE())
		{
			func_15(Local_480.f_0);
		}
		CAM::SET_CAM_NEAR_DOF(iLocal_663, 2f);
		CAM::SET_CAM_FAR_DOF(iLocal_663, 60f);
		CAM::SET_CAM_DOF_STRENGTH(iLocal_663, 0.5f);
		CAM::SET_USE_HI_DOF();
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 257 /*INPUT_ATTACK2*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 272 /*INPUT_LOOK_UP*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 273 /*INPUT_LOOK_DOWN*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 270 /*INPUT_LOOK_LEFT*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 271 /*INPUT_LOOK_RIGHT*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 281 /*INPUT_VEH_MOVE_DOWN*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 281 /*INPUT_VEH_MOVE_DOWN*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 81 /*INPUT_VEH_NEXT_RADIO*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 82 /*INPUT_VEH_PREV_RADIO*/, true);
	}
}

void func_15(int iParam0)//Position - 0xA41
{
	struct<3> Var0;
	float fVar1;
	fVar1 = func_16(iParam0, &Var0);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(73, 73);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	GRAPHICS::SET_DRAW_ORIGIN(Var0, false);
	fVar1 = (fVar1 * 0.03f);
	GRAPHICS::DRAW_SPRITE("helicopterhud", "hud_corner", (-fVar1 * 0.5f), -fVar1, 0.013f, 0.013f, 0f, Local_473.f_0, Local_473.f_1, Local_473.f_2, 200, true, 0);
	GRAPHICS::DRAW_SPRITE("helicopterhud", "hud_corner", (fVar1 * 0.5f), -fVar1, 0.013f, 0.013f, 90f, Local_473.f_0, Local_473.f_1, Local_473.f_2, 200, true, 0);
	GRAPHICS::DRAW_SPRITE("helicopterhud", "hud_corner", (-fVar1 * 0.5f), fVar1, 0.013f, 0.013f, 270f, Local_473.f_0, Local_473.f_1, Local_473.f_2, 200, true, 0);
	GRAPHICS::DRAW_SPRITE("helicopterhud", "hud_corner", (fVar1 * 0.5f), fVar1, 0.013f, 0.013f, 180f, Local_473.f_0, Local_473.f_1, Local_473.f_2, 200, true, 0);
	GRAPHICS::CLEAR_DRAW_ORIGIN();
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

float func_16(int iParam0, var uParam1)//Position - 0xB52
{
	int iVar0;
	float fVar1;
	float fVar2;
	if (__LIB_0__::func_692(iParam0))
	{
		iVar0 = PED::GET_PED_BONE_INDEX(iParam0, 31086);
		if (iVar0 != -1)
		{
			*uParam1 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iParam0, iVar0) };
			if (iLocal_692 == 5 || iLocal_692 == 6)
			{
				*uParam1 = { *uParam1 + Vector(fLocal_689, 0f, fLocal_688) };
			}
			else if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
			{
				if (((((((PED::IS_PED_IN_ANY_VEHICLE(iParam0, false) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "rcmpaparazzo_2ig_3", "pm_incar_fuckinlosers", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "rcmpaparazzo_2ig_3", "pm_incar_gimmethtcam", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "rcmpaparazzo_2ig_3", "pm_incar_ih8u", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "rcmpaparazzo_2ig_3", "pm_incar_illsueyou", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "rcmpaparazzo_2ig_3", "pm_incar_imavirgin", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "rcmpaparazzo_2ig_3", "pm_incar_itwasyoga", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "rcmpaparazzo_2ig_3", "pm_incar_notdoinanythin", 3))
				{
					ENTITY::PROCESS_ENTITY_ATTACHMENTS(iParam0);
					*uParam1 = { PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f) };
					uParam1->f_2 = (uParam1->f_2 + 0.08f);
				}
				else
				{
					ENTITY::PROCESS_ENTITY_ATTACHMENTS(iParam0);
					*uParam1 = { PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f) };
					uParam1->f_2 = (uParam1->f_2 + 0.08f);
				}
			}
			if (__LIB_0__::func_692(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::DOES_CAM_EXIST(iLocal_663))
				{
					fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(*uParam1, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true);
					fVar2 = (IntToFloat(iLocal_685) / (CAM::GET_CAM_FOV(iLocal_663) * fVar1));
					if (fVar2 < fLocal_687)
					{
						fVar2 = fLocal_687;
					}
					if (fVar2 > fLocal_686)
					{
						fVar2 = fLocal_686;
					}
					return fVar2;
				}
			}
		}
	}
	return 0f;
}

void func_17()//Position - 0xCF4
{
	if (iLocal_737 == 0)
	{
	}
	HUD::SET_TEXT_COLOUR(255, 0, 0, 255);
	__LIB_13__::func_84(0.8f, 0.78f, "PAP2_REC", 0);
	HUD::SET_TEXT_COLOUR(255, 255, 255, 255);
	iLocal_737++;
	GRAPHICS::DRAW_SPRITE("helicopterhud", "hud_corner", fLocal_677, fLocal_678, fLocal_676, fLocal_675, 0f, 255, 255, 255, 200, true, 0);
	GRAPHICS::DRAW_SPRITE("helicopterhud", "hud_corner", fLocal_679, fLocal_680, fLocal_676, fLocal_675, 90f, 255, 255, 255, 200, true, 0);
	GRAPHICS::DRAW_SPRITE("helicopterhud", "hud_corner", fLocal_681, fLocal_682, fLocal_676, fLocal_675, 270f, 255, 255, 255, 200, true, 0);
	GRAPHICS::DRAW_SPRITE("helicopterhud", "hud_corner", fLocal_683, fLocal_684, fLocal_676, fLocal_675, 180f, 255, 255, 255, 200, true, 0);
}

void func_19()//Position - 0xDDA
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	struct<3> Var3;
	struct<3> Var4;
	float fVar5;
	float fVar6;
	struct<3> Var7;
	struct<3> Var8;
	float fVar9;
	struct<3> Var10;
	Var0 = { CAM::GET_CAM_ROT(iLocal_663, 2) };
	fVar1 = CAM::GET_CAM_FOV(iLocal_663);
	fVar2 = (ENTITY::GET_ENTITY_HEADING(iLocal_759) - 180f);
	if (__LIB_0__::func_121(iLocal_759))
	{
		Var3 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iLocal_759) };
		ENTITY::PROCESS_ENTITY_ATTACHMENTS(iLocal_759);
	}
	Var3.f_0 = (Var3.f_0 * -1f);
	Var3.f_1 = (Var3.f_1 * -1f);
	Var3.f_2 = (Var3.f_2 * -1f);
	Var4.f_2 = MISC::GET_HEADING_FROM_VECTOR_2D(Var3.f_0, Var3.f_1);
	fVar5 = (Var4.f_2 + 78f);
	fVar6 = (Var4.f_2 - 78f);
	Var7 = { func_25(Var0.f_2) };
	Var8 = { func_25(fVar2) };
	fVar9 = MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var7.f_0, Var7.f_1, Var8.f_0, Var8.f_1);
	if (fVar9 >= 78f)
	{
		if (iLocal_334)
		{
			Var0.f_2 = fVar6;
		}
		else
		{
			Var0.f_2 = fVar5;
		}
	}
	else
	{
		iLocal_334 = 0;
	}
	if (bLocal_673)
	{
		func_22(&Var4, &fVar1, 0);
		Var4.f_2 = func_21(Var4.f_2, fVar6, fVar5);
		Var4.f_0 = func_20(Var4.f_0, -1035468800, 1109393408);
		Var4.f_1 = ENTITY::GET_ENTITY_ROLL(iLocal_759);
	}
	else
	{
		func_22(&Var0, &fVar1, 0);
		Var0.f_0 = func_20(Var0.f_0, -30f, 30f);
		Var0.f_1 = ENTITY::GET_ENTITY_ROLL(iLocal_759);
	}
	Var10 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_759, Local_463) };
	if (bLocal_673)
	{
		CAM::SET_CAM_PARAMS(iLocal_663, Var10, Var4, fVar1, 0, 1, 1, 2);
	}
	else
	{
		CAM::SET_CAM_PARAMS(iLocal_663, Var10, Var0.f_0, Var0.f_1, Var0.f_2, fVar1, 0, 1, 1, 2);
	}
}

float func_20(float fParam0, float fParam1, float fParam2)//Position - 0xF5F
{
	if (fParam0 < fParam1)
	{
		fParam0 = fParam1;
	}
	if (fParam0 > fParam2)
	{
		fParam0 = fParam2;
	}
	return fParam0;
}

float func_21(float fParam0, float fParam1, float fParam2)//Position - 0xF81
{
	if (fParam0 < fParam1)
	{
		__LIB_0__::func_467("YAW CAPPED ----------");
		fParam0 = fParam1;
	}
	if (fParam0 > fParam2)
	{
		__LIB_0__::func_467("YAW CAPPED ++++++++++");
		fParam0 = fParam2;
	}
	return fParam0;
}

void func_22(var uParam0, float fParam1, bool bParam2)//Position - 0xFB3
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	fVar7 = 25f;
	if (bParam2)
	{
		fVar7 = 7.5f;
	}
	if (MISC::IS_SNIPER_INVERTED())
	{
		__LIB_0__::func_341(&iVar1, &iVar0, &uVar2, &iVar3, 0, 0);
	}
	else
	{
		__LIB_0__::func_341(&uVar2, &iVar3, &iVar1, &iVar0, 0, 0);
	}
	if (!PAD::IS_LOOK_INVERTED())
	{
		iVar0 = (iVar0 * -1);
	}
	if (!bParam2)
	{
		if (CAM::IS_SPHERE_VISIBLE(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_759, -2f, -2.6f, 0f), 1f))
		{
			iLocal_334 = 1;
		}
	}
	iVar3 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 39 /*INPUT_SNIPER_ZOOM*/) * 127f));
	if (iVar3 < 0 || iVar3 > 0)
	{
		*fParam1 = (*fParam1 + ((SYSTEM::TO_FLOAT(iVar3) / 5f) * SYSTEM::TIMESTEP()));
		if (*fParam1 < fVar7)
		{
			*fParam1 = fVar7;
		}
		else if (*fParam1 > 45f)
		{
			*fParam1 = 45f;
		}
	}
	fVar6 = MISC::ABSF((SYSTEM::TO_FLOAT(iVar3) / 127f));
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_220))
	{
		fVar8 = (*fParam1 - 7.5f);
		fVar8 = (fVar8 / 37.5f);
		if (fVar8 > 0.6f)
		{
			fVar8 = 0.6f;
		}
	}
	if (fVar6 < 0f)
	{
		fVar6 = 0f;
	}
	if (fVar6 > 1f)
	{
		fVar6 = 1f;
	}
	if (fLocal_337 > *fParam1)
	{
		if (iLocal_239 == 1)
		{
			if (!AUDIO::HAS_SOUND_FINISHED(iLocal_371))
			{
				AUDIO::STOP_SOUND(iLocal_371);
			}
		}
		AUDIO::SET_VARIABLE_ON_SOUND(iLocal_371, "ZOOM_FUNCTION", 0f);
		AUDIO::SET_VARIABLE_ON_SOUND(iLocal_371, "ZOOM_SPEED", fVar6);
		if (AUDIO::HAS_SOUND_FINISHED(iLocal_371))
		{
			AUDIO::PLAY_SOUND_FRONTEND(iLocal_371, "ZOOM", "PAPARAZZO_02_SOUNDSETS", true);
			iLocal_239 = 0;
		}
		iLocal_333 = 1;
	}
	else if (fLocal_337 < *fParam1)
	{
		if (iLocal_239 == 0)
		{
			if (!AUDIO::HAS_SOUND_FINISHED(iLocal_371))
			{
				AUDIO::STOP_SOUND(iLocal_371);
			}
		}
		AUDIO::SET_VARIABLE_ON_SOUND(iLocal_371, "ZOOM_FUNCTION", 1f);
		AUDIO::SET_VARIABLE_ON_SOUND(iLocal_371, "ZOOM_SPEED", fVar6);
		if (AUDIO::HAS_SOUND_FINISHED(iLocal_371))
		{
			AUDIO::PLAY_SOUND_FRONTEND(iLocal_371, "ZOOM", "PAPARAZZO_02_SOUNDSETS", true);
			iLocal_239 = 1;
		}
		iLocal_333 = 1;
	}
	else if (fLocal_337 == *fParam1)
	{
		if (!AUDIO::HAS_SOUND_FINISHED(iLocal_371))
		{
			AUDIO::STOP_SOUND(iLocal_371);
		}
		iLocal_333 = 0;
	}
	if ((iVar1 < 0 || iVar1 > 0) || PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
		{
			fVar5 = (PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0 /*PLAYER_CONTROL*/, 290 /*INPUT_SCALED_LOOK_LR*/) * 20f);
		}
		else
		{
			fVar5 = (((SYSTEM::TO_FLOAT(iVar1) * *fParam1) * 0.0117f) * SYSTEM::TIMESTEP());
		}
		fLocal_671 = (fLocal_671 + fVar5);
		fLocal_671 = func_23(fLocal_671);
	}
	if ((iVar0 < 0 || iVar0 > 0) || PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
	{
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
		{
			fVar4 = (PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0 /*PLAYER_CONTROL*/, 291 /*INPUT_SCALED_LOOK_UD*/) * -20f);
		}
		else
		{
			fVar4 = (((SYSTEM::TO_FLOAT(iVar0) * *fParam1) * 0.0117f) * SYSTEM::TIMESTEP());
		}
		fLocal_672 = (fLocal_672 + fVar4);
		fLocal_672 = func_20(fLocal_672, -1035468800, 1109393408);
	}
	if (iLocal_692 == 8)
	{
		if (bLocal_673)
		{
			*uParam0 = { *uParam0 + Vector(-fLocal_671, 0f, fLocal_672) };
		}
		else
		{
			*uParam0 = { *uParam0 + Vector(-fVar5, 0f, fVar4) };
		}
	}
	else
	{
		*uParam0 = { *uParam0 + Vector(-fVar5, 0f, fVar4) };
	}
}

float func_23(float fParam0)//Position - 0x12C7
{
	if (fParam0 < -78f)
	{
		fParam0 = -78f;
	}
	if (fParam0 > 78f)
	{
		fParam0 = 78f;
	}
	return fParam0;
}

Vector3 func_25(float fParam0)//Position - 0x13F9
{
	return SYSTEM::SIN(fParam0), SYSTEM::COS(fParam0), 0f;
}

void func_26()//Position - 0x140E
{
	struct<3> Var0;
	float fVar1;
	ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), false, false);
	Var0 = { CAM::GET_CAM_ROT(iLocal_663, 2) };
	fVar1 = CAM::GET_CAM_FOV(iLocal_663);
	func_22(&Var0, &fVar1, 1);
	Var0.f_0 = func_20(Var0.f_0, -1035468800, 1109393408);
	CAM::SET_CAM_PARAMS(iLocal_663, -33.4707f, 318.6031f, 113.3355f, Var0.f_0, ENTITY::GET_ENTITY_ROLL(PLAYER::PLAYER_PED_ID()), Var0.f_2, fVar1, 0, 1, 1, 2);
}

void func_27()//Position - 0x147A
{
	HUD::CLEAR_PRINTS();
	__LIB_0__::func_325();
	__LIB_0__::func_714(&iLocal_660);
	__LIB_0__::func_714(&iLocal_661);
	if (bLocal_310)
	{
	}
	if (bLocal_311)
	{
	}
	iLocal_238 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iLocal_261) / 2271f) * 100f));
	if (iLocal_238 > 100)
	{
		iLocal_238 = 100;
	}
	__LIB_0__::func_497(801, iLocal_238, 0);
	if (iLocal_756)
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			__LIB_14__::func_659(PLAYER::PLAYER_PED_ID(), -71.0875f, -522.2567f, 39.3243f, 255.9742f, 0, 1);
			__LIB_0__::func_84(800, 0);
			iLocal_756 = 0;
		}
	}
	else
	{
		func_29(103, 1);
		func_662();
		if (func_28(PLAYER::PLAYER_PED_ID(), iLocal_759))
		{
			TASK::TASK_LEAVE_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_759, 0);
		}
		SCRIPT::TERMINATE_THIS_THREAD();
	}
}

int func_28(int iParam0, int iParam1)//Position - 0x153A
{
	if (iParam1 != 0)
	{
		if (__LIB_0__::func_121(iParam1))
		{
			if (__LIB_0__::func_692(iParam0))
			{
				if (PED::IS_PED_IN_VEHICLE(iParam0, iParam1, false))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_29(int iParam0, bool bParam1)//Position - 0x156B
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
	func_56();
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

void func_56()//Position - 0x26F5
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
				if (func_174(iVar1, 14, iVar2))
				{
					func_57(iVar1, 14, iVar2);
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

int func_57(int iParam0, int iParam1, int iParam2)//Position - 0x27B6
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
	if (!func_174(iParam0, iParam1, iParam2))
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
				func_57(iParam0, iVar1, uVar2[iVar1]);
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
			if (!func_57(iParam0, 14, uVar5[iVar3]))
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
	if (func_100(iParam0, iVar0, &iVar7, 0))
	{
		func_60(iParam0, 2, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (func_58(iParam0, iVar0, &iVar7))
	{
		func_60(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	return 1;
}

int func_58(int iParam0, int iParam1, int iParam2)//Position - 0x2972
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_174(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_60(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x2A39
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
										func_60(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
									func_60(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_13__::func_798(iVar10, iVar0, func_66(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_100(iParam0, iVar10, &iVar4, 1))
							{
								func_60(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_0__::func_459(iVar10, 0) };
						func_60(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_60(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_60(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_60(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_60(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_60(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
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
						func_60(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_60(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_60(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		if (func_100(iParam0, iVar10, &iVar4, 0))
		{
			func_60(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_58(iParam0, iVar10, &iVar4))
		{
			func_60(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_66(int iParam0, int iParam1, int iParam2)//Position - 0x3A76
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
				if (func_174(iParam0, iParam1, iVar0))
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
				if (func_174(iParam0, iParam1, iVar1))
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

int func_100(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xA15A
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_174(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_174(int iParam0, int iParam1, int iParam2)//Position - 0x208C3
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
				if (!func_174(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_0__::func_466(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_174(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_13__::func_798(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_174(iParam0, 14, iVar4))
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
			if (!func_174(iParam0, 14, uVar8[iVar7]))
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

void func_236()//Position - 0x2808B
{
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	HUD::THEFEED_HIDE_THIS_FRAME();
	CAM::SET_USE_HI_DOF();
	if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
	{
	}
	switch (iLocal_217)
	{
		case 0:
			if (func_248(9, bLocal_703))
			{
				if (__LIB_0__::func_90())
				{
					iLocal_301 = 0;
					iLocal_302 = 0;
					iLocal_303 = 0;
					iLocal_304 = 0;
					if (__LIB_0__::func_692(iLocal_475))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_475, "Beverly", 0, 0, 0);
					}
					if (__LIB_0__::func_695(iLocal_759))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_759, "Beverlys_Car", 0, joaat("fq2"), 0);
					}
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(10f, 0f, 0);
					RECORDING::REPLAY_START_EVENT(1);
					CUTSCENE::START_CUTSCENE(0);
					SYSTEM::WAIT(0);
					if (iLocal_349 == 1)
					{
						STREAMING::STREAMVOL_DELETE(iLocal_348);
					}
					__LIB_0__::func_84(800, 0);
					iLocal_217 = 1;
				}
			}
			break;
		case 1:
			if (iLocal_304 == 0)
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0))
				{
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
					iLocal_304 = 1;
				}
			}
			if (iLocal_301 == 0)
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
				{
					RECORDING::REPLAY_STOP_EVENT();
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					iLocal_301 = 1;
				}
			}
			if (iLocal_303 == 0 && iLocal_302 == 0)
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Beverly", 0) && CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Beverlys_Car", 0))
				{
					if (!func_28(iLocal_475, iLocal_759))
					{
						PED::SET_PED_INTO_VEHICLE(iLocal_475, iLocal_759, -1);
					}
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_475, false, false);
					VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(iLocal_759, true);
					VEHICLE::SET_VEHICLE_FIXED(iLocal_759);
					VEHICLE::SET_VEHICLE_DOOR_LATCHED(iLocal_759, 3, true, true, true);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_662);
					TASK::TASK_VEHICLE_DRIVE_WANDER(0, iLocal_759, 100f, 786468);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_662);
					PED::SET_PED_KEEP_TASK(iLocal_475, true);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_475, iLocal_662);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_662);
					iLocal_303 = 1;
					iLocal_302 = 1;
				}
			}
			if (((iLocal_303 == 1 && iLocal_302 == 1) && iLocal_301 == 1) && iLocal_304 == 1)
			{
				iLocal_217 = 2;
			}
			else
			{
				if (CAM::DOES_CAM_EXIST(iLocal_663))
				{
					CAM::DESTROY_CAM(iLocal_663, false);
				}
				if (CAM::DOES_CAM_EXIST(iLocal_665))
				{
					CAM::DESTROY_CAM(iLocal_665, false);
				}
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				CAM::DISABLE_FIRST_PERSON_FLASH_EFFECT_THIS_UPDATE();
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			}
			break;
		case 2:
			iLocal_692 = 10;
			__LIB_14__::func_870(1, 1, 1, 1);
			break;
	}
}

int func_248(int iParam0, bool bParam1)//Position - 0x28640
{
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				bLocal_703 = false;
				__LIB_14__::func_879(1, 1, 1);
			}
			else if (((func_324(26, Local_462, 0) && func_324(9, Local_460, fLocal_469)) && func_324(6, Local_462, 0)) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("PAPARAZZO_02_INTRO", false, -1))
			{
				return 1;
			}
			break;
		case 1:
			if (bParam1)
			{
				if (((func_324(0, Local_462, 0) && func_324(9, Local_460, fLocal_469)) && func_324(6, Local_462, 0)) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("PAPARAZZO_02_INTRO", false, -1))
				{
					func_323();
					if (__LIB_0__::func_692(iLocal_475))
					{
						func_322(iLocal_475, 0);
					}
					bLocal_703 = false;
					__LIB_14__::func_879(1, 1, 1);
				}
			}
			else if (func_324(1, Local_215, fLocal_216))
			{
				__LIB_14__::func_592(-10.662442f, 283.07034f, 110.23729f, -76.66436f, 301.18158f, 104.585754f, 6f, -88.6147f, 303.8292f, 105.9208f, 245.3452f, 1, 1, 1, 0, 0);
				__LIB_14__::func_592(-86.61621f, 297.2772f, 102.94322f, -55.158104f, 286.53983f, 109.6697f, 16.75f, -88.6147f, 303.8292f, 105.9208f, 245.3452f, 1, 1, 1, 0, 0);
				__LIB_14__::func_785(0f, 0f, 0f, 0f, 1, 1);
				func_262(Local_215, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
				iLocal_232 = MISC::GET_GAME_TIMER();
				return 1;
			}
			break;
		case 2:
			if (bParam1)
			{
				if (((func_324(1, Local_215, 124f) && func_324(9, Local_460, fLocal_469)) && func_324(6, Local_462, 0)) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("PAPARAZZO_02_INTRO", false, -1))
				{
					func_261();
					if (!__LIB_0__::func_324())
					{
						__LIB_14__::func_659(PLAYER::PLAYER_PED_ID(), -72.5612f, 298.2493f, 105.2336f, 247.2199f, 0, 1);
					}
					PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					__LIB_0__::func_325();
					func_323();
					MISC::CLEAR_AREA_OF_PEDS(-73.9858f, 299.3878f, 105.4073f, 80f, 0);
					if (__LIB_0__::func_692(iLocal_475))
					{
						func_322(iLocal_475, 0);
						__LIB_14__::func_659(iLocal_475, -70.7533f, 299.0078f, 105.3157f, 247.7592f, 1, 1);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_475, -60.9116f, 295.3501f, 105.0975f, 1f, 20000, 0.25f, 0, 40000f);
					}
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					__LIB_14__::func_659(PLAYER::PLAYER_PED_ID(), -70.9722f, 297.7738f, 105.2184f, 247.6793f, 1, 1);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(PLAYER::PLAYER_PED_ID(), -63.1068f, 294.9655f, 105.0442f, 1f, -1, 1f, 2113, 40000f);
					bLocal_703 = false;
					__LIB_0__::func_433(0, -1, 1);
					PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
					__LIB_14__::func_879(1, 0, 1);
					iLocal_232 = MISC::GET_GAME_TIMER();
					iLocal_309 = 1;
				}
			}
			else if ((func_324(6, Local_462, 0) && func_324(11, Local_462, 0)) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("PAPARAZZO_02_INTRO", false, -1))
			{
				iLocal_232 = MISC::GET_GAME_TIMER();
				return 1;
			}
			break;
		case 3:
			if (bParam1)
			{
				if (((func_324(1, -13.3842f, 282.4926f, 107.2337f, 257.872f) && func_324(9, Local_460, fLocal_469)) && func_324(6, Local_462, 0)) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("PAPARAZZO_02_INTRO", false, -1))
				{
					func_261();
					if (!__LIB_0__::func_324())
					{
						__LIB_14__::func_659(PLAYER::PLAYER_PED_ID(), -14.1493f, 280.7966f, 107.2078f, 317.7051f, 0, 1);
					}
					__LIB_0__::func_325();
					func_323();
					iLocal_744 = 3;
					if (__LIB_0__::func_692(iLocal_475))
					{
						func_322(iLocal_475, 0);
					}
					bLocal_703 = false;
					__LIB_14__::func_879(1, 1, 1);
				}
			}
			else
			{
				iLocal_232 = MISC::GET_GAME_TIMER();
				return 1;
			}
			break;
		case 4:
			if (bParam1)
			{
				if (((((func_324(1, -3.227f, 318.2857f, 109.9195f, 63.3365f) && func_324(9, Local_460, fLocal_469)) && func_324(6, Local_462, 0)) && func_324(2, Local_480.f_1, Local_480.f_4)) && func_324(3, Local_481.f_1, Local_481.f_4)) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("PAPARAZZO_02_INTRO", false, -1))
				{
					func_261();
					if (!__LIB_0__::func_324())
					{
						__LIB_14__::func_659(PLAYER::PLAYER_PED_ID(), -2.2002f, 317.2632f, 109.9189f, 60.7242f, 0, 1);
					}
					__LIB_14__::func_659(Local_483[0 /*5*/], 11.2819f, 324.9571f, 109.9188f, 252.0409f, 0, 1);
					__LIB_14__::func_659(Local_483[1 /*5*/], 12.4255f, 323.3313f, 109.9188f, 54.7387f, 0, 1);
					__LIB_0__::func_325();
					func_323();
					iLocal_744 = 6;
					if (__LIB_0__::func_692(iLocal_475))
					{
						func_322(iLocal_475, 0);
					}
					__LIB_14__::func_879(1, 1, 1);
					bLocal_703 = false;
				}
			}
			else if (func_324(17, Local_462, 0))
			{
				iLocal_720 = 1;
				iLocal_719 = 1;
				iLocal_707 = 1;
				iLocal_232 = MISC::GET_GAME_TIMER();
				return 1;
			}
			break;
		case 5:
			if (bParam1)
			{
				if ((((((func_324(1, -36.7532f, 323.5341f, 111.6957f, 165.7917f) && func_324(9, Local_460, fLocal_469)) && func_324(2, Local_480.f_1, Local_480.f_4)) && func_324(3, Local_481.f_1, Local_481.f_4)) && func_324(10, Local_462, 0)) && func_324(17, Local_462, 0)) && func_324(16, Local_462, 0))
				{
					if (iLocal_290 == 0)
					{
						__LIB_0__::func_433(0, -1, 1);
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_220))
						{
							AUDIO::STOP_SYNCHRONIZED_AUDIO_EVENT(iLocal_220);
						}
						if (__LIB_0__::func_121(Local_480.f_0))
						{
							AUDIO::INIT_SYNCH_SCENE_AUDIO_WITH_ENTITY("PAP2_IG1_POPPYSEX", Local_480.f_0);
						}
						__LIB_0__::func_467("TK************ SETTING SYNCH SCENE AUDIO POSITION THIS FRAME ************TK");
						iLocal_290 = 1;
					}
					if (AUDIO::PREPARE_SYNCHRONIZED_AUDIO_EVENT("PAP2_IG1_POPPYSEX", 0))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
						PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
						if (!__LIB_0__::func_324())
						{
							__LIB_14__::func_659(PLAYER::PLAYER_PED_ID(), -33.681f, 320.9442f, 111.6958f, 182.6031f, 0, 1);
						}
						__LIB_14__::func_659(PLAYER::PLAYER_PED_ID(), -33.8491f, 319.335f, 111.696f, 184.4715f, 0, 1);
						TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "rcmpaparazzo_2", "idle_d", 1000f, -1000f, -1, 1, 0.4f, false, false, false);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
						SYSTEM::WAIT(2000);
						func_323();
						STREAMING::REQUEST_ANIM_DICT("rcmpaparazzo_2");
						STREAMING::REQUEST_CLIP_SET(sLocal_752);
						STREAMING::REQUEST_CLIP_SET(sLocal_753);
						iLocal_244 = 1;
						func_258();
						func_261();
						func_256(1);
						func_255(1);
						if (CAM::DOES_CAM_EXIST(iLocal_663))
						{
							fLocal_337 = CAM::GET_CAM_FOV(iLocal_663);
						}
						func_14(1);
						if (CAM::DOES_CAM_EXIST(iLocal_663) && __LIB_0__::func_692(Local_480.f_0))
						{
							CAM::POINT_CAM_AT_ENTITY(iLocal_663, Local_480.f_0, Local_462, true);
						}
						AUDIO::TRIGGER_MUSIC_EVENT("PAP2_START");
						bLocal_703 = false;
					}
					else
					{
						__LIB_0__::func_467("TK************ PREPARE_SYNCHRONIZED_AUDIO_EVENT FAILED! ************TK");
					}
				}
			}
			else if (func_324(16, Local_462, 0) && func_324(17, Local_462, 0))
			{
				return 1;
			}
			break;
		case 6:
			if (bParam1)
			{
				if (((((((func_324(1, -36.7532f, 323.5341f, 111.6957f, 165.7917f) && func_324(4, Local_482.f_1, 0)) && func_324(9, Local_460, 0)) && func_324(2, Local_480.f_1, Local_480.f_4)) && func_324(3, Local_481.f_1, Local_481.f_4)) && func_324(10, Local_462, 0)) && func_324(17, Local_462, 0)) && func_324(16, Local_462, 0))
				{
					if (iLocal_290 == 0)
					{
						__LIB_0__::func_433(0, -1, 1);
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_220))
						{
							AUDIO::STOP_SYNCHRONIZED_AUDIO_EVENT(iLocal_220);
						}
						AUDIO::INIT_SYNCH_SCENE_AUDIO_WITH_ENTITY("PAP2_IG1_POPPYSEX", Local_480.f_0);
						__LIB_0__::func_467("TK************ SETTING SYNCH SCENE AUDIO POSITION THIS FRAME ************TK");
						iLocal_290 = 1;
					}
					if (AUDIO::PREPARE_SYNCHRONIZED_AUDIO_EVENT("PAP2_IG1_POPPYSEX", 0))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
						PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
						__LIB_14__::func_659(PLAYER::PLAYER_PED_ID(), -33.8491f, 319.335f, 111.696f, 184.4715f, 0, 1);
						TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "rcmpaparazzo_2", "idle_d", 1000f, -1000f, -1, 1, 0.4f, false, false, false);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
						SYSTEM::WAIT(2000);
						func_323();
						func_258();
						func_261();
						func_256(1);
						func_254();
						if (CAM::DOES_CAM_EXIST(iLocal_663))
						{
							fLocal_337 = CAM::GET_CAM_FOV(iLocal_663);
						}
						func_14(1);
						if (CAM::DOES_CAM_EXIST(iLocal_663) && __LIB_0__::func_692(Local_480.f_0))
						{
							CAM::POINT_CAM_AT_ENTITY(iLocal_663, Local_480.f_0, Local_462, true);
						}
						AUDIO::TRIGGER_MUSIC_EVENT("PAP2_START");
						PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 0);
						bLocal_703 = false;
					}
					else
					{
						__LIB_0__::func_467("TK************ PREPARE_SYNCHRONIZED_AUDIO_EVENT FAILED! ************TK");
					}
				}
			}
			else if (func_324(12, Local_462, 0))
			{
				if (__LIB_0__::func_121(iLocal_759))
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_759, Local_460, true, false, false, true);
					ENTITY::SET_ENTITY_QUATERNION(iLocal_759, -0.0022f, -0.0289f, 0.7901f, -0.6123f);
				}
				iLocal_694 = 0;
				return 1;
			}
			break;
		case 7:
			if (bParam1)
			{
				if (((((((func_324(1, -33.2434f, 319.02f, 111.6952f, 154.2353f) && func_324(5, Local_462, 0)) && func_324(9, Local_460, fLocal_469)) && func_324(2, Local_480.f_1, Local_480.f_4)) && func_324(3, Local_481.f_1, Local_481.f_4)) && func_324(12, Local_462, 0)) && func_324(25, Local_462, 0)) && func_324(10, Local_462, 0))
				{
					__LIB_14__::func_659(iLocal_475, -36.5195f, 326.093f, 111.6962f, 187.1461f, 0, 1);
					PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
					if (!__LIB_0__::func_324())
					{
						__LIB_14__::func_659(PLAYER::PLAYER_PED_ID(), -33.1227f, 318.9001f, 111.6958f, 154.1067f, 0, 1);
					}
					__LIB_0__::func_433(0, -1, 1);
					__LIB_14__::func_659(PLAYER::PLAYER_PED_ID(), -33.8491f, 319.335f, 111.696f, 184.4715f, 0, 1);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
					SYSTEM::WAIT(2000);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(10.7485f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-9.8457f, 1f);
					__LIB_0__::func_325();
					func_323();
					func_258();
					func_253();
					PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_221, fLocal_690);
					HUD::DISPLAY_HUD(true);
					HUD::DISPLAY_RADAR(true);
					AUDIO::TRIGGER_MUSIC_EVENT("PAP2_SPOTTED_RESTART");
					TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "rcmpaparazzo_2", "idle_d", 1000f, -4f, -1, 0, 0.739f, false, false, false);
					SYSTEM::WAIT(100);
					__LIB_0__::func_84(800, 0);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(10.7485f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-9.8457f, 1f);
					bLocal_703 = false;
				}
			}
			else
			{
				if (!HUD::DOES_BLIP_EXIST(iLocal_661))
				{
					iLocal_661 = __LIB_14__::func_661(iLocal_475, 1, 1, 5);
				}
				if (__LIB_0__::func_121(iLocal_759))
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_759, 1);
					func_251(iLocal_759);
				}
				if (((((func_324(4, Local_462, 0) && func_324(5, Local_462, 0)) && func_324(19, Local_462, 0)) && func_324(18, Local_462, 0)) && func_324(20, Local_462, 0)) && func_324(17, Local_462, 0))
				{
					iLocal_232 = MISC::GET_GAME_TIMER();
					if (__LIB_0__::func_692(iLocal_475))
					{
						func_322(iLocal_475, 0);
					}
					return 1;
				}
			}
			break;
		case 8:
			if (bParam1)
			{
				if ((((((((((func_324(1, Local_215, 344.7485f) && func_324(5, Local_462, 0)) && func_324(9, Local_460, fLocal_469)) && func_324(2, Local_480.f_1, Local_480.f_4)) && func_324(3, Local_481.f_1, Local_481.f_4)) && func_324(4, Local_482.f_1, Local_482.f_4)) && func_324(18, Local_462, 0)) && func_324(19, Local_462, 0)) && func_324(20, Local_462, 0)) && func_324(17, Local_462, 0)) && func_324(25, Local_462, 0))
				{
					func_323();
					__LIB_14__::func_659(iLocal_475, Local_215, 344.7485f, 0, 1);
					__LIB_0__::func_222(&uLocal_489, 3, iLocal_475, "BEVERLY", 0, 1);
					__LIB_0__::func_222(&uLocal_489, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					__LIB_0__::func_433(0, -1, 1);
					func_249();
					if (__LIB_0__::func_121(iLocal_759))
					{
						ENTITY::SET_ENTITY_QUATERNION(iLocal_759, -0.0022f, -0.0289f, 0.7901f, -0.6123f);
					}
					if (!func_28(iLocal_475, iLocal_759))
					{
						PED::SET_PED_INTO_VEHICLE(iLocal_475, iLocal_759, -1);
					}
					MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 200f, true, false, false, false);
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					iLocal_228 = MISC::GET_GAME_TIMER();
					iLocal_228 += 1000;
					iLocal_736 = 0;
					SYSTEM::WAIT(100);
					MISC::CLEAR_AREA_OF_PEDS(-73.9858f, 299.3878f, 105.4073f, 80f, 0);
					__LIB_14__::func_879(0, 0, 1);
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					AUDIO::TRIGGER_MUSIC_EVENT("PAP2_CAR_RESTART");
					bLocal_703 = false;
				}
			}
			else if (func_324(25, Local_462, 0))
			{
				__LIB_0__::func_714(&iLocal_660);
				iLocal_232 = MISC::GET_GAME_TIMER();
				return 1;
			}
			break;
		case 9:
			if (bParam1)
			{
				if (func_324(9, -69.2061f, -523.7703f, 39.2051f, 163.9675f))
				{
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					__LIB_0__::func_433(0, -1, 1);
					if (!func_28(PLAYER::PLAYER_PED_ID(), iLocal_759))
					{
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_759, 2);
					}
					if (!func_28(iLocal_475, iLocal_759))
					{
						PED::SET_PED_INTO_VEHICLE(iLocal_475, iLocal_759, -1);
					}
					CUTSCENE::REQUEST_CUTSCENE("pap_2_mcs_1", 8);
					if (__LIB_0__::func_121(iLocal_759))
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_759, -69.2061f, -523.7703f, 39.2051f, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(iLocal_759, 163.9675f);
					}
					func_323();
					bLocal_703 = false;
				}
			}
			else
			{
				iLocal_232 = MISC::GET_GAME_TIMER();
				return 1;
			}
			break;
		case 12:
			if (bParam1)
			{
				if (func_324(5, Local_462, 0) && func_324(1, Local_215, 344.7485f))
				{
					iLocal_736 = 0;
					__LIB_14__::func_879(1, 1, 1);
					bLocal_703 = false;
				}
			}
			else if ((func_324(9, Local_460, fLocal_469) && func_324(1, Local_215, 344.7485f)) && func_324(22, Local_462, 0))
			{
				if (!func_28(iLocal_475, iLocal_759))
				{
					TASK::TASK_WARP_PED_INTO_VEHICLE(iLocal_475, iLocal_759, 1);
				}
				return 1;
			}
			return 0;
			break;
		case 13:
			if (bParam1)
			{
				if (func_324(5, Local_462, 0) && func_324(1, Local_215, 344.7485f))
				{
					iLocal_736 = 0;
					__LIB_14__::func_879(1, 1, 1);
					bLocal_703 = false;
				}
			}
			else if (((func_324(9, Local_460, fLocal_469) && func_324(1, Local_459, 0)) && func_324(23, Local_462, 0)) && func_324(18, Local_462, 0))
			{
				if (__LIB_0__::func_121(iLocal_759))
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_759, Local_460, true, false, false, true);
					ENTITY::SET_ENTITY_QUATERNION(iLocal_759, -0.0022f, -0.0289f, 0.7901f, -0.6123f);
					return 1;
				}
			}
			return 0;
			break;
		case 14:
			if (bParam1)
			{
				__LIB_0__::func_467("JUMPED");
				iLocal_736 = 0;
				__LIB_14__::func_879(1, 1, 1);
				bLocal_703 = false;
			}
			else if (((func_324(9, Local_460, fLocal_469) && func_324(1, Local_459, 0)) && func_324(18, Local_462, 0)) && func_324(24, Local_462, 0))
			{
				if (__LIB_0__::func_121(iLocal_759))
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_759, Local_460, true, false, false, true);
					ENTITY::SET_ENTITY_QUATERNION(iLocal_759, -0.0022f, -0.0289f, 0.7901f, -0.6123f);
					return 1;
				}
			}
			return 0;
			break;
	}
	return 0;
}

void func_249()//Position - 0x29702
{
	if (iLocal_281 == 0)
	{
		if (!func_28(PLAYER::PLAYER_PED_ID(), iLocal_759))
		{
			PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_759, 1);
		}
	}
	if (__LIB_0__::func_692(iLocal_475))
	{
		if (!func_28(iLocal_475, iLocal_759))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_475);
			PED::SET_PED_INTO_VEHICLE(iLocal_475, iLocal_759, -1);
		}
	}
	if (__LIB_0__::func_692(Local_480.f_0))
	{
		if (!func_28(Local_480.f_0, uLocal_758[0]))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_480.f_0);
			PED::SET_PED_INTO_VEHICLE(Local_480.f_0, uLocal_758[0], -1);
		}
	}
	if (__LIB_0__::func_692(Local_481.f_0))
	{
		if (!func_28(Local_481.f_0, uLocal_758[1]))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_481.f_0);
			PED::SET_PED_INTO_VEHICLE(Local_481.f_0, uLocal_758[1], -1);
		}
	}
	if (__LIB_0__::func_692(Local_482.f_0))
	{
		if (__LIB_0__::func_121(uLocal_758[2]))
		{
			if (!func_28(Local_482.f_0, uLocal_758[2]))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_482.f_0);
				PED::SET_PED_INTO_VEHICLE(Local_482.f_0, uLocal_758[2], -1);
			}
		}
	}
}

int func_251(int iParam0)//Position - 0x2988E
{
	int iVar0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
		if (VEHICLE::IS_THIS_MODEL_A_CAR(iVar0) || VEHICLE::IS_THIS_MODEL_A_BIKE(iVar0))
		{
			return VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iParam0, 5f);
		}
	}
	return 0;
}

void func_253()//Position - 0x2991F
{
	if (iLocal_292 == 0)
	{
		iLocal_221 = PED::CREATE_SYNCHRONIZED_SCENE(-30.990408f, 301.09235f, 111.681885f, 0f, 0f, 0f, 2);
		PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_221, false);
		if (__LIB_0__::func_692(Local_480.f_0))
		{
			if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_480.f_0, PLAYER::PLAYER_PED_ID(), true))
			{
				TASK::TASK_LOOK_AT_ENTITY(Local_480.f_0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(Local_480.f_0, iLocal_221, "rcmpaparazzo_2", "shag_action_poppy", 4f, -4f, 0, 0, 1000f, 0);
			}
			else
			{
				TASK::TASK_SMART_FLEE_PED(Local_480.f_0, PLAYER::PLAYER_PED_ID(), 300f, -1, false, false);
			}
		}
		if (__LIB_0__::func_692(Local_481.f_0))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_481.f_0, true);
			if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_481.f_0, PLAYER::PLAYER_PED_ID(), true))
			{
				TASK::TASK_LOOK_AT_ENTITY(Local_481.f_0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(Local_481.f_0, iLocal_221, "rcmpaparazzo_2", "shag_action_a", 4f, -2f, 0, 0, 1000f, 0);
			}
			else
			{
				TASK::TASK_SMART_FLEE_PED(Local_481.f_0, PLAYER::PLAYER_PED_ID(), 300f, -1, false, false);
			}
		}
		PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_221, 0.835512f);
		iLocal_292 = 1;
	}
}

void func_254()//Position - 0x29A22
{
	Local_473.f_0 = 255;
	Local_473.f_1 = 0;
	Local_473.f_2 = 0;
}

int func_255(bool bParam0)//Position - 0x29A3B
{
	if (__LIB_0__::func_692(PLAYER::PLAYER_PED_ID()))
	{
		if (bParam0)
		{
			if (!CAM::DOES_CAM_EXIST(iLocal_663))
			{
				iLocal_663 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", -33.4707f, 318.6031f, 113.3355f, -1.6576f, 0f, -170.9825f, 45f, true, 2);
				if (iLocal_692 != 5)
				{
					CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				}
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				if (CAM::DOES_CAM_EXIST(iLocal_663))
				{
					GRAPHICS::CASCADE_SHADOWS_SET_DYNAMIC_DEPTH_MODE(true);
					GRAPHICS::CASCADE_SHADOWS_SET_DYNAMIC_DEPTH_VALUE(16f);
					return 1;
				}
			}
			else
			{
				GRAPHICS::CASCADE_SHADOWS_SET_DYNAMIC_DEPTH_MODE(true);
				GRAPHICS::CASCADE_SHADOWS_SET_DYNAMIC_DEPTH_VALUE(16f);
				return 1;
			}
		}
		else if (!CAM::DOES_CAM_EXIST(iLocal_663))
		{
			if (__LIB_0__::func_121(iLocal_759) && __LIB_0__::func_692(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_663 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_759, Local_463), 0f, 0f, -ENTITY::GET_ENTITY_HEADING(iLocal_759), 50f, true, 2);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				if (CAM::DOES_CAM_EXIST(iLocal_663))
				{
					return 1;
				}
			}
		}
		else if (__LIB_0__::func_121(iLocal_759) && __LIB_0__::func_692(PLAYER::PLAYER_PED_ID()))
		{
			CAM::SET_CAM_PARAMS(iLocal_663, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_759, Local_463), 0f, 0f, -ENTITY::GET_ENTITY_HEADING(iLocal_759), 50f, 0, 1, 1, 2);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			return 1;
		}
	}
	return 0;
}

void func_256(int iParam0)//Position - 0x29B8C
{
	if (__LIB_0__::func_692(Local_480.f_0) && __LIB_0__::func_692(Local_481.f_0))
	{
		switch (iParam0)
		{
			case 0:
				if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_218))
				{
					func_261();
					func_257();
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_481.f_0, true);
					iLocal_218 = PED::CREATE_SYNCHRONIZED_SCENE(-30.990408f, 301.09235f, 111.63188f, 0f, 0f, 0f, 2);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_218, true);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_480.f_0, iLocal_218, "rcmpaparazzo_2", "shag_loop_poppy", 1000f, -4f, 64, 0, 1000f, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_481.f_0, iLocal_218, "rcmpaparazzo_2", "shag_loop_a", 1000f, -4f, 64, 0, 1000f, 0);
					__LIB_0__::func_467("TK************ SYNCH SCENE1 STARTED ************TK");
				}
				break;
			case 1:
				if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_220))
				{
					func_261();
					func_257();
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_481.f_0, true);
					iLocal_220 = PED::CREATE_SYNCHRONIZED_SCENE(-30.990408f, 301.09235f, 111.681885f, 0f, 0f, 0f, 2);
					PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_220, false);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_480.f_0, iLocal_220, "rcmpaparazzo_2", "shag_action_poppy", 1000f, -4f, 0, 0, 1000f, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_481.f_0, iLocal_220, "rcmpaparazzo_2", "shag_action_a", 1000f, -2f, 0, 0, 1000f, 0);
					AUDIO::PLAY_SYNCHRONIZED_AUDIO_EVENT(iLocal_220);
					iLocal_290 = 0;
					__LIB_0__::func_467("TK************ SYNCH SCENE2 STARTED - RESET AUDIO POSITION BOOL ************TK");
				}
				break;
			}
	}
}

void func_257()//Position - 0x29CE7
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_352))
	{
		iLocal_352 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_npc_phone"), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_480.f_0, 0f, 0f, 10f), true, true, false);
		ENTITY::SET_ENTITY_LOD_DIST(iLocal_352, 100);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_352))
	{
		if (!ENTITY::IS_ENTITY_ATTACHED(iLocal_352))
		{
			ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_352, Local_480.f_0, PED::GET_PED_BONE_INDEX(Local_480.f_0, 28422), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, 0);
		}
	}
}

void func_258()//Position - 0x29D56
{
	if (iLocal_260 == 0)
	{
		STREAMING::REQUEST_CLIP_SET(sLocal_753);
		STREAMING::REQUEST_MODEL(joaat("prop_pap_camera_01"));
		iLocal_260 = 1;
	}
	else if (iLocal_260 == 1)
	{
		if (STREAMING::HAS_CLIP_SET_LOADED(sLocal_753) && STREAMING::HAS_MODEL_LOADED(joaat("prop_pap_camera_01")))
		{
			iLocal_260 = 2;
		}
	}
	else if (iLocal_260 == 2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_353))
		{
			iLocal_353 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_pap_camera_01"), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, 0f, 10f), true, true, false);
			ENTITY::SET_ENTITY_VISIBLE(iLocal_353, false, false);
			ENTITY::SET_ENTITY_COLLISION(iLocal_353, false, false);
		}
		else
		{
			if (STREAMING::HAS_CLIP_SET_LOADED(sLocal_753))
			{
				PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID(), sLocal_753);
			}
			else
			{
				STREAMING::REQUEST_CLIP_SET(sLocal_753);
				iLocal_260 = 1;
			}
			if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_353, PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(iLocal_353))
				{
					ENTITY::DETACH_ENTITY(iLocal_353, true, true);
				}
				ENTITY::SET_ENTITY_VISIBLE(iLocal_353, true, false);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_353, PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, 0);
			}
		}
	}
}

void func_261()//Position - 0x29F2D
{
	STREAMING::REQUEST_MODEL(joaat("prop_table_06"));
	STREAMING::REQUEST_MODEL(joaat("prop_parasol_03"));
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_350))
	{
		if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-30.860102f, 301.192f, 112.11637f, 5f, joaat("prop_table_06"), false))
		{
			iLocal_350 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-30.860102f, 301.192f, 112.11637f, 5f, joaat("prop_table_06"), true, false, true);
			ENTITY::SET_ENTITY_COORDS(iLocal_350, -30.860102f, 301.192f, 112.027374f, true, false, false, true);
			ENTITY::SET_ENTITY_ROTATION(iLocal_350, -0.100693f, -0.038488f, 80.437294f, 2, true);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_350, true);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_351))
	{
		if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-30.860102f, 301.192f, 112.11637f, 5f, joaat("prop_parasol_03"), false))
		{
			iLocal_351 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-30.860102f, 301.192f, 112.11637f, 5f, joaat("prop_parasol_03"), true, false, true);
			ENTITY::SET_ENTITY_COORDS(iLocal_351, -30.860102f, 301.192f, 111.680336f, true, false, false, true);
			ENTITY::SET_ENTITY_ROTATION(iLocal_351, -0.100693f, -0.038488f, 80.437294f, 2, true);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_351, true);
		}
	}
}

void func_262(struct<3> Param0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10)//Position - 0x2A049
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
					if (func_174(PLAYER::PLAYER_PED_ID(), 8, 15))
					{
						func_60(PLAYER::PLAYER_PED_ID(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (func_174(PLAYER::PLAYER_PED_ID(), 9, 6))
					{
						func_60(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				case 1:
					if (func_174(PLAYER::PLAYER_PED_ID(), 8, 1) || func_174(PLAYER::PLAYER_PED_ID(), 8, 10))
					{
						func_60(PLAYER::PLAYER_PED_ID(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				case 2:
					if (func_174(PLAYER::PLAYER_PED_ID(), 8, 4))
					{
						func_60(PLAYER::PLAYER_PED_ID(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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

void func_322(int iParam0, bool bParam1)//Position - 0x31268
{
	if (bParam1)
	{
		PED::SET_PED_STEALTH_MOVEMENT(iParam0, true, 0);
	}
	else
	{
		PED::SET_PED_STEALTH_MOVEMENT(iParam0, false, 0);
	}
}

void func_323()//Position - 0x31288
{
	iLocal_705 = 0;
	iLocal_706 = 0;
	iLocal_707 = 0;
	iLocal_709 = 0;
	bLocal_710 = false;
	iLocal_755 = 0;
	iLocal_760 = 0;
	iLocal_761 = 0;
	iLocal_762 = 0;
	iLocal_763 = 0;
	iLocal_764 = 0;
	iLocal_765 = 0;
	iLocal_285 = 0;
	iLocal_286 = 0;
	bLocal_284 = false;
	iLocal_289 = 0;
	iLocal_287 = 0;
	iLocal_288 = 0;
	iLocal_291 = 0;
	iLocal_292 = 0;
	iLocal_293 = 0;
	bLocal_295 = false;
	iLocal_297 = 0;
	iLocal_349 = 0;
	iLocal_298 = 0;
	iLocal_299 = 0;
	iLocal_300 = 0;
	iLocal_702 = 0;
	iLocal_714 = 0;
	iLocal_715 = 0;
	iLocal_716 = 0;
	iLocal_717 = 0;
	iLocal_278 = 0;
	iLocal_277 = 0;
	iLocal_279 = 0;
	iLocal_280 = 0;
	iLocal_718 = 0;
	iLocal_719 = 0;
	iLocal_720 = 0;
	iLocal_275 = 0;
	iLocal_721 = 0;
	iLocal_722 = 0;
	iLocal_723 = 0;
	iLocal_724 = 0;
	iLocal_725 = 0;
	bLocal_729 = false;
	bLocal_730 = false;
	iLocal_731 = 0;
	iLocal_733 = 0;
	iLocal_736 = 0;
	iLocal_740 = 0;
	iLocal_739 = 0;
	iLocal_754 = 0;
	iLocal_259 = 0;
	iLocal_244 = 0;
	iLocal_744 = 0;
	iLocal_245 = 0;
	iLocal_248 = 0;
	iLocal_745 = 0;
	iLocal_255 = 0;
	iLocal_260 = 0;
	bLocal_272 = false;
	iLocal_358 = 0;
	iLocal_357 = 0;
	iLocal_283 = 0;
	iLocal_305 = 0;
	iLocal_306 = 0;
	bLocal_332 = false;
	iLocal_219 = 0;
	iLocal_694 = 0;
	iLocal_695 = 0;
	iLocal_696 = 0;
}

int func_324(int iParam0, struct<3> Param1, float fParam2)//Position - 0x313B0
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			if (!CUTSCENE::HAS_THIS_CUTSCENE_LOADED("PAP_2_RCM_P2"))
			{
				__LIB_14__::func_851("PAP_2_RCM_P2", 0);
				while (!CUTSCENE::HAS_CUTSCENE_LOADED())
				{
					SYSTEM::WAIT(0);
				}
				return 1;
			}
			else
			{
				return 1;
			}
			break;
		case 1:
			if (__LIB_0__::func_692(iLocal_475))
			{
				if (!HUD::DOES_BLIP_EXIST(iLocal_661))
				{
					iLocal_661 = __LIB_14__::func_661(iLocal_475, 1, 1, 5);
				}
				HUD::SET_BLIP_SCALE(iLocal_661, 0.7f);
				PED::SET_PED_CAN_ARM_IK(iLocal_475, true);
				TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_475, true);
				PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_475, false);
				AUDIO::STOP_PED_SPEAKING(iLocal_475, true);
				AUDIO::DISABLE_PED_PAIN_AUDIO(iLocal_475, true);
				ENTITY::SET_ENTITY_PROOFS(iLocal_475, false, false, false, true, false, false, false, false);
				__LIB_14__::func_659(iLocal_475, Param1, fParam2, 0, 1);
				__LIB_0__::func_222(&uLocal_489, 3, iLocal_475, "BEVERLY", 0, 1);
				__LIB_0__::func_222(&uLocal_489, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
				while (!func_334(Local_750))
				{
					SYSTEM::WAIT(0);
				}
				return 1;
			}
			return 0;
			break;
		case 2:
			if (func_332(&Local_480, Param1, fParam2, iLocal_657, 0, "POPPY"))
			{
				__LIB_0__::func_222(&uLocal_489, 6, Local_480.f_0, "POPPY", 0, 1);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_480.f_0, iLocal_691);
				TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_480.f_0, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_480.f_0, 20, true);
				AUDIO::STOP_PED_SPEAKING(Local_480.f_0, true);
				PED::SET_PED_COMPONENT_VARIATION(Local_480.f_0, 0, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_480.f_0, 2, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_480.f_0, 3, 0, 0, 0);
				if (__LIB_0__::func_323() && __LIB_0__::func_344() >= 2)
				{
					PED::SET_PED_COMPONENT_VARIATION(Local_480.f_0, 4, 1, 0, 0);
				}
				else
				{
					PED::SET_PED_COMPONENT_VARIATION(Local_480.f_0, 4, 2, 0, 0);
				}
				PED::SET_PED_COMPONENT_VARIATION(Local_480.f_0, 8, 0, 0, 0);
				PED::SET_PED_LOD_MULTIPLIER(Local_480.f_0, 2f);
				return 1;
			}
			return 0;
			break;
		case 3:
			if (func_332(&Local_481, Param1, fParam2, iLocal_656, 0, "SHAGGER"))
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_481.f_0, iLocal_691);
				TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_481.f_0, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_481.f_0, 20, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_481.f_0, 0, false);
				PED::SET_PED_CONFIG_FLAG(Local_481.f_0, 114, true);
				ENTITY::SET_ENTITY_PROOFS(Local_481.f_0, false, false, false, true, false, false, false, false);
				PED::SET_PED_PROP_INDEX(Local_481.f_0, 1, 0, 0, false);
				PED::SET_PED_COMPONENT_VARIATION(Local_481.f_0, 0, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_481.f_0, 2, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_481.f_0, 3, 0, 0, 0);
				if (__LIB_0__::func_323() && __LIB_0__::func_344() >= 2)
				{
					PED::SET_PED_COMPONENT_VARIATION(Local_481.f_0, 4, 1, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_481.f_0, 6, 0, 0, 0);
				}
				else
				{
					PED::SET_PED_COMPONENT_VARIATION(Local_481.f_0, 4, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_481.f_0, 6, 1, 0, 0);
				}
				PED::SET_PED_COMPONENT_VARIATION(Local_481.f_0, 8, 0, 0, 0);
				__LIB_0__::func_222(&uLocal_489, 7, Local_481.f_0, "pap2lover", 0, 1);
				PED::SET_PED_LOD_MULTIPLIER(Local_481.f_0, 2f);
				return 1;
			}
			return 0;
			break;
		case 4:
			if (func_332(&Local_482, Local_482.f_1, Local_482.f_4, iLocal_658, 0, "BODYGUARD "))
			{
				PED::SET_PED_SEEING_RANGE(Local_482.f_0, 50f);
				PED::SET_PED_HEARING_RANGE(Local_482.f_0, 15f);
				PED::SET_PED_ID_RANGE(Local_482.f_0, 20f);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_482.f_0, iLocal_691);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_482.f_0, true);
				PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_482.f_0);
				PED::SET_PED_CONFIG_FLAG(Local_482.f_0, 114, true);
				AUDIO::STOP_PED_SPEAKING(Local_482.f_0, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_482.f_0, 0, false);
				ENTITY::SET_ENTITY_PROOFS(Local_482.f_0, false, false, false, true, false, false, false, false);
				return 1;
			}
			return 0;
			break;
		case 5:
			iLocal_734 = 0;
			while (iLocal_734 <= 2)
			{
				if (iLocal_734 == 1)
				{
					if (func_329(&(uLocal_758[0]), iLocal_655[0], Local_461[0 /*3*/], fLocal_470[0]))
					{
						VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_655[0], true);
						if (__LIB_0__::func_121(uLocal_758[0]))
						{
							VEHICLE::SET_VEHICLE_COLOURS(uLocal_758[0], 87, 87);
							VEHICLE::SET_VEHICLE_EXTRA_COLOURS(uLocal_758[0], 87, 87);
							VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(uLocal_758[0], false);
							VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(uLocal_758[0], false);
							VEHICLE::SET_VEHICLE_DOORS_LOCKED(uLocal_758[0], 3);
							ENTITY::SET_ENTITY_PROOFS(uLocal_758[0], false, false, false, false, false, false, false, false);
							VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(uLocal_758[0], 0);
							VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(uLocal_758[0], "P0PPYM14");
							iVar0++;
						}
					}
				}
				else if (iLocal_734 == 2)
				{
					if (func_329(&(uLocal_758[1]), iLocal_655[1], Local_461[1 /*3*/], fLocal_470[1]))
					{
						VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_655[1], true);
						if (__LIB_0__::func_121(uLocal_758[1]))
						{
							VEHICLE::SET_VEHICLE_COLOURS(uLocal_758[1], 0, 0);
							VEHICLE::SET_VEHICLE_EXTRA_COLOURS(uLocal_758[1], 0, 0);
							VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(uLocal_758[1], false);
							VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(uLocal_758[1], false);
							VEHICLE::SET_VEHICLE_DOORS_LOCKED(uLocal_758[1], 3);
							ENTITY::SET_ENTITY_PROOFS(uLocal_758[1], false, false, false, false, false, false, false, false);
							iVar0++;
						}
					}
				}
				else if (func_329(&(uLocal_758[2]), iLocal_655[2], Local_461[2 /*3*/], fLocal_470[2]))
				{
					VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_655[2], true);
					if (__LIB_0__::func_121(uLocal_758[2]))
					{
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(uLocal_758[2], 3);
						VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(uLocal_758[2], false);
						VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(uLocal_758[2], false);
						VEHICLE::SET_VEHICLE_COLOURS(uLocal_758[2], 0, 0);
						VEHICLE::SET_VEHICLE_EXTRA_COLOURS(uLocal_758[2], 0, 0);
						ENTITY::SET_ENTITY_PROOFS(uLocal_758[2], false, false, false, false, false, false, false, false);
						iVar0++;
					}
				}
				if (iVar0 == 3)
				{
					return 1;
				}
				iLocal_734++;
			}
			return 0;
			break;
		case 6:
			iVar1 = 0;
			iLocal_734 = 0;
			while (iLocal_734 <= 1)
			{
				if (iLocal_734 == 0)
				{
					iVar1 = iLocal_659[0];
				}
				else
				{
					iVar1 = iLocal_659[1];
				}
				if (iVar1 != 0)
				{
					if (func_332(&(Local_483[iLocal_734 /*5*/]), Local_483[iLocal_734 /*5*/].f_1, Local_483[iLocal_734 /*5*/].f_4, iVar1, iLocal_734, "HOTEL STAFF "))
					{
						if (iLocal_734 == 0)
						{
							TASK::TASK_USE_MOBILE_PHONE(Local_483[0 /*5*/], true, 1);
							__LIB_0__::func_222(&uLocal_489, 4, Local_483[iLocal_734 /*5*/], "Pap2Maid", 0, 1);
						}
						else
						{
							__LIB_0__::func_222(&uLocal_489, 5, Local_483[iLocal_734 /*5*/], "Pap2BusBoy", 0, 1);
						}
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_483[iLocal_734 /*5*/], iLocal_691);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_483[iLocal_734 /*5*/], true);
						iVar0++;
						if (iVar0 >= 2)
						{
							return 1;
						}
					}
				}
				iLocal_734++;
			}
			break;
		case 7:
			if (__LIB_0__::func_692(Local_483[1 /*5*/]))
			{
				if (func_328(&iLocal_669, joaat("prop_tool_broom"), Local_483[1 /*5*/].f_1, 0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_669, false))
					{
						ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_669, Local_483[1 /*5*/], PED::GET_PED_BONE_INDEX(Local_483[1 /*5*/], 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
						if (ENTITY::IS_ENTITY_ATTACHED(iLocal_669))
						{
							return 1;
						}
					}
				}
			}
			break;
		case 8:
			if (__LIB_0__::func_692(Local_483[0 /*5*/]))
			{
				if (func_328(&iLocal_670, joaat("prop_rag_01"), Local_483[0 /*5*/].f_1, 0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_670, false))
					{
						ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_670, Local_483[0 /*5*/], PED::GET_PED_BONE_INDEX(Local_483[0 /*5*/], 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
						if (ENTITY::IS_ENTITY_ATTACHED(iLocal_670))
						{
							return 1;
						}
					}
				}
			}
			break;
		case 9:
			if (func_329(&iLocal_759, iLocal_654, Param1, fParam2))
			{
				__LIB_0__::func_679(iLocal_759, 0);
				if (__LIB_0__::func_121(iLocal_759))
				{
					VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_654, true);
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_759, 7);
					VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(iLocal_759, false);
					VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(iLocal_759, false);
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iLocal_759, 0);
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iLocal_759, "P4P4R4Z0");
					ENTITY::SET_ENTITY_PROOFS(iLocal_759, false, false, false, false, false, false, false, false);
					if (iLocal_692 != 7)
					{
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_759, 3);
					}
					return 1;
				}
			}
			return 0;
			break;
		case 10:
			STREAMING::REQUEST_ANIM_DICT("rcmpaparazzo_2");
			STREAMING::REQUEST_MODEL(joaat("prop_npc_phone"));
			if (STREAMING::HAS_ANIM_DICT_LOADED("rcmpaparazzo_2") && STREAMING::HAS_MODEL_LOADED(joaat("prop_npc_phone")))
			{
				return 1;
			}
			return 0;
			break;
		case 11:
			return 1;
			break;
		case 12:
			if (func_334(Local_749))
			{
				return 1;
			}
			return 0;
			break;
		case 16:
			if (func_255(1))
			{
				return 1;
			}
			return 0;
			break;
		case 13:
			if (func_255(0))
			{
				return 1;
			}
			return 0;
			break;
		case 14:
			if (!CAM::DOES_CAM_EXIST(iLocal_663))
			{
				iLocal_663 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", Param1, 0f, 0f, fParam2, 50f, true, 2);
				if (CAM::DOES_CAM_EXIST(iLocal_663))
				{
					return 1;
				}
			}
			else
			{
				return 1;
			}
			return 0;
			break;
		case 17:
			GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("helicopterhud", false);
			if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("helicopterhud"))
			{
				return 1;
			}
			break;
		case 15:
			STREAMING::REQUEST_ANIM_DICT("veh@std@ds@base");
			if (STREAMING::HAS_ANIM_DICT_LOADED("veh@std@ds@base"))
			{
				return 1;
			}
			return 0;
			break;
		case 18:
			VEHICLE::REQUEST_VEHICLE_RECORDING(1, "PAP2UBA");
			if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "PAP2UBA"))
			{
				if (__LIB_0__::func_121(iLocal_759))
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_759, Local_460, true, false, false, true);
					ENTITY::SET_ENTITY_QUATERNION(iLocal_759, -0.0022f, -0.0289f, 0.7901f, -0.6123f);
					return 1;
				}
			}
			return 0;
			break;
		case 19:
			VEHICLE::REQUEST_VEHICLE_RECORDING(101, "PAP2UBA");
			if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "PAP2UBA"))
			{
				if (__LIB_0__::func_121(uLocal_758[0]))
				{
					ENTITY::SET_ENTITY_COORDS(uLocal_758[0], -61.579f, 337.5999f, 111.1908f, true, false, false, true);
					ENTITY::SET_ENTITY_QUATERNION(uLocal_758[0], -0.0013f, -0.0482f, 0.9656f, 0.2557f);
					return 1;
				}
			}
			return 0;
			break;
		case 20:
			VEHICLE::REQUEST_VEHICLE_RECORDING(102, "PAP2UBA");
			if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(102, "PAP2UBA"))
			{
				if (__LIB_0__::func_121(uLocal_758[1]))
				{
					ENTITY::SET_ENTITY_COORDS(uLocal_758[1], -62.3523f, 322.6747f, 109.7139f, true, false, false, true);
					ENTITY::SET_ENTITY_QUATERNION(uLocal_758[1], -0.023f, -0.0644f, 0.9756f, 0.2086f);
					return 1;
				}
			}
			return 0;
			break;
		case 21:
			VEHICLE::REQUEST_VEHICLE_RECORDING(103, "PAP2UBA");
			if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(103, "PAP2UBA"))
			{
				if (__LIB_0__::func_121(uLocal_758[2]))
				{
					ENTITY::SET_ENTITY_COORDS(uLocal_758[2], -68.0034f, 309.4698f, 107.7925f, true, false, false, true);
					ENTITY::SET_ENTITY_QUATERNION(uLocal_758[2], -0.0176f, -0.0678f, 0.9756f, 0.2082f);
					return 1;
				}
			}
			return 0;
			break;
		case 22:
			if (__LIB_0__::func_121(iLocal_759))
			{
				PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_759, -1);
				if (func_28(PLAYER::PLAYER_PED_ID(), iLocal_759))
				{
				}
			}
			return 0;
			break;
		case 23:
			VEHICLE::REQUEST_VEHICLE_RECORDING(1, "PAP2UBA");
			if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "PAP2UBA") && func_325(iLocal_655[0], "POPPY CAR", 0))
			{
				if (func_329(&(uLocal_758[0]), iLocal_655[0], -61.5607f, 337.6627f, 110.5456f, 150.2983f))
				{
					if (__LIB_0__::func_121(uLocal_758[0]) && __LIB_0__::func_121(iLocal_759))
					{
						if (__LIB_0__::func_692(PLAYER::PLAYER_PED_ID()) && __LIB_0__::func_692(iLocal_475))
						{
							PED::SET_PED_INTO_VEHICLE(iLocal_475, iLocal_759, -1);
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), uLocal_758[0], -1);
							if (func_28(PLAYER::PLAYER_PED_ID(), uLocal_758[0]) && func_28(iLocal_475, iLocal_759))
							{
								return 1;
							}
						}
					}
				}
			}
			return 0;
			break;
		case 24:
			if (__LIB_0__::func_121(iLocal_759))
			{
				if (__LIB_0__::func_692(iLocal_475))
				{
					PED::SET_PED_INTO_VEHICLE(iLocal_475, iLocal_759, -1);
					if (func_28(iLocal_475, iLocal_759))
					{
						return 1;
					}
				}
			}
			break;
		case 25:
			if (!iLocal_375)
			{
				return 1;
			}
			if ((AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\PAPARAZZO_02_A", false, -1) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\PAPARAZZO_02_B", false, -1)) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\PAPARAZZO_02_C", false, -1))
			{
				return 1;
			}
			break;
		case 26:
			HUD::REQUEST_ADDITIONAL_TEXT("PAP2", 0);
			if (HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_325(int iParam0, char* sParam1, int iParam2)//Position - 0x31FAA
{
	STREAMING::REQUEST_MODEL(iParam0);
	if (iParam2 == 9999)
	{
		__LIB_0__::func_467(sParam1, iParam2);
	}
	if (STREAMING::HAS_MODEL_LOADED(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_328(int* iParam0, int iParam1, struct<3> Param2, float fParam3)//Position - 0x31FF2
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (func_325(iParam1, "Loading", 0))
		{
			*iParam0 = OBJECT::CREATE_OBJECT(iParam1, Param2, true, true, false);
			if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
			{
				ENTITY::SET_ENTITY_HEADING(*iParam0, fParam3);
				PHYSICS::ACTIVATE_PHYSICS(*iParam0);
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_329(int iParam0, int iParam1, struct<3> Param2, float fParam3)//Position - 0x32049
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (func_325(iParam1, "Loading", 0))
		{
			*iParam0 = VEHICLE::CREATE_VEHICLE(iParam1, Param2, fParam3, true, true, false);
			if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
			{
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, false);
				}
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0, 5f);
				func_330(iParam1);
				return 1;
			}
		}
	}
	else if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, false);
		return 1;
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_330(int iParam0)//Position - 0x320D4
{
	if (STREAMING::HAS_MODEL_LOADED(iParam0))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0);
	}
}

int func_332(var uParam0, struct<3> Param1, float fParam2, int iParam3, int iParam4, char* sParam5)//Position - 0x32115
{
	char cVar0[16];
	if (func_333(uParam0, iParam3, Param1, fParam2))
	{
		if (__LIB_0__::func_692(*uParam0))
		{
			StringCopy(&cVar0, sParam5, 16);
			StringIntConCat(&cVar0, iParam4, 16);
			PED::SET_PED_NAME_DEBUG(*uParam0, &cVar0);
			return 1;
		}
	}
	return 0;
}

int func_333(var uParam0, int iParam1, struct<3> Param2, float fParam3)//Position - 0x32152
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (func_325(iParam1, "Loading", 0))
		{
			*uParam0 = PED::CREATE_PED(26, iParam1, Param2, fParam3, true, true);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*uParam0);
			if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
			{
				func_330(iParam1);
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_334(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3)//Position - 0x321A9
{
	if (!MISC::IS_STRING_NULL(&cParam0))
	{
		if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(&cParam0))
		{
			TASK::REQUEST_WAYPOINT_RECORDING(&cParam0);
			if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(&cParam0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_337()//Position - 0x3222A
{
	struct<6> Var0;
	bool bVar1;
	PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOUT(2 /*FRONTEND_CONTROL*/);
	Var0 = { __LIB_13__::func_743() };
	if (MISC::ARE_STRINGS_EQUAL(&Var0, "PAP2_CHASE1_3"))
	{
		__LIB_0__::func_638();
	}
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_220))
	{
		AUDIO::STOP_SYNCHRONIZED_AUDIO_EVENT(iLocal_220);
	}
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	HUD::THEFEED_HIDE_THIS_FRAME();
	__LIB_1__::func_33(0);
	if (__LIB_0__::func_725(PLAYER::PLAYER_PED_ID(), -60.2805f, -493.5712f, 39.261f, 100f, 1))
	{
		CUTSCENE::REQUEST_CUTSCENE("pap_2_mcs_1", 8);
	}
	if (!bLocal_729 && ENTITY::IS_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID()))
	{
		ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), false, false);
	}
	switch (iLocal_693)
	{
		case 0:
			if (func_248(8, bLocal_703))
			{
				HUD::CLEAR_PRINTS();
				CUTSCENE::STOP_CUTSCENE_IMMEDIATELY();
				if (__LIB_0__::func_692(iLocal_475))
				{
					PED::RESET_PED_WEAPON_MOVEMENT_CLIPSET(iLocal_475);
				}
				if (__LIB_0__::func_692(PLAYER::PLAYER_PED_ID()))
				{
					PED::RESET_PED_WEAPON_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID());
				}
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PAPARAZZO_02_INTRO"))
				{
					AUDIO::STOP_AUDIO_SCENE("PAPARAZZO_02_INTRO");
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_353))
				{
					if (ENTITY::IS_ENTITY_ATTACHED(iLocal_353))
					{
						ENTITY::DETACH_ENTITY(iLocal_353, true, true);
					}
					OBJECT::DELETE_OBJECT(&iLocal_353);
				}
				MISC::SET_INSTANCE_PRIORITY_HINT(2);
				__LIB_0__::func_122(&iLocal_352, 0);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_pap_camera_01"));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_npc_phone"));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_table_06"));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_parasol_03"));
				STREAMING::REMOVE_CLIP_SET("move_f@sexy@a");
				STREAMING::REMOVE_CLIP_SET(sLocal_752);
				STREAMING::REMOVE_CLIP_SET(sLocal_753);
				STREAMING::REMOVE_ANIM_DICT("RANDOM@CAR_THIEF@waiting_ig_4");
				STREAMING::REMOVE_ANIM_DICT("cover@move@base@core");
				PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), false, -1, 0);
				__LIB_0__::func_130();
				__LIB_14__::func_874(3, "CHASE", 1, 0, 0, 1);
				if (__LIB_0__::func_692(Local_480.f_0))
				{
					TASK::TASK_LOOK_AT_ENTITY(Local_480.f_0, PLAYER::PLAYER_PED_ID(), -1, 2096, 2);
				}
				if (__LIB_0__::func_695(iLocal_759))
				{
					ENTITY::SET_ENTITY_INVINCIBLE(iLocal_759, true);
					VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(iLocal_759);
				}
				STREAMING::REQUEST_ANIM_DICT("rcmpaparazzo_2ig_3");
				iLocal_695 = 0;
				iLocal_289 = 1;
				iLocal_693 = 1;
				iLocal_694 = 0;
				func_429();
				iLocal_754 = 0;
				fLocal_688 = 0f;
				fLocal_689 = 0f;
				iLocal_238 = 0;
				iLocal_241 = 0;
				iLocal_248 = 0;
				iLocal_738 = 0;
				iLocal_746 = 0;
				fLocal_339 = 0f;
				fLocal_340 = 0f;
				fLocal_341 = 0f;
				iLocal_271 = 0;
				iLocal_755 = 0;
				bLocal_668 = false;
				iLocal_281 = 0;
				iLocal_349 = 0;
				iLocal_300 = 0;
				iLocal_308 = 0;
				iLocal_313 = 0;
				func_254();
				func_428();
				bLocal_50 = true;
				bLocal_61 = true;
				iLocal_314 = 0;
				iLocal_315 = 0;
				iLocal_316 = 0;
				iLocal_317 = 0;
				iLocal_318 = 0;
				iLocal_319 = 0;
				iLocal_320 = 0;
				iLocal_321 = 0;
				iLocal_322 = 0;
				iLocal_323 = 0;
				iLocal_324 = 0;
				iLocal_325 = 0;
				iLocal_326 = 0;
				iLocal_327 = 0;
				iLocal_328 = 0;
				iLocal_330 = 0;
				iLocal_266 = 0;
				iLocal_267 = 0;
				iLocal_268 = 0;
				iLocal_269 = 0;
				iLocal_335 = 0;
				func_375();
				PED::SET_PED_NON_CREATION_AREA(Vector(60.0327f, -160.2005f, 252.7712f) - Vector(50f, 100f, 100f), Vector(60.0327f, -160.2005f, 252.7712f) + Vector(50f, 100f, 100f));
			}
			break;
		case 1:
			if (__LIB_0__::func_121(iLocal_759))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_759))
				{
					if (__LIB_0__::func_323())
					{
						if (!iLocal_335)
						{
							if (fLocal_338 < 8847.924f)
							{
							}
							else
							{
								iLocal_335 = 1;
							}
						}
					}
					uLocal_342 = uLocal_342;
					if (iLocal_268 == 0)
					{
						iLocal_268 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(85 /*EVENT_SHOCKING_DRIVING_ON_PAVEMENT*/, iLocal_759, -1f);
					}
					if (fLocal_338 > 10000f && !bLocal_729)
					{
						iLocal_366 = PED::GET_RANDOM_PED_AT_COORD(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_759, 0f, 10f, 0f), 4f, 4f, 4f, 26);
						if ((__LIB_0__::func_692(iLocal_366) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_366, joaat("SCRIPT_TASK_REACT_AND_FLEE_PED")) != 1) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_366, joaat("SCRIPT_TASK_SMART_FLEE_PED")) != 1)
						{
							TASK::CLEAR_PED_TASKS(iLocal_366);
							PED::SET_PED_KEEP_TASK(iLocal_366, true);
							if (__LIB_0__::func_121(iLocal_475))
							{
								if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
								{
									TASK::TASK_REACT_AND_FLEE_PED(iLocal_366, iLocal_475);
									__LIB_0__::func_467("PED REACT AND FLEE FROM BEVERLY");
								}
								else
								{
									TASK::TASK_SMART_FLEE_PED(iLocal_366, iLocal_475, 50f, -1, true, false);
									__LIB_0__::func_467("PED SMART FLEE FROM BEVERLY");
								}
							}
							ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_366);
						}
					}
					if (__LIB_0__::func_121(uLocal_758[2]))
					{
						if (iLocal_266 == 0)
						{
							iLocal_266 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(85 /*EVENT_SHOCKING_DRIVING_ON_PAVEMENT*/, uLocal_758[2], -1f);
						}
					}
					fLocal_338 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_759);
					if (__LIB_0__::func_695(uLocal_758[1]))
					{
						if (iLocal_269 == 0)
						{
							iLocal_269 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(85 /*EVENT_SHOCKING_DRIVING_ON_PAVEMENT*/, uLocal_758[1], -1f);
						}
						iLocal_365 = PED::GET_RANDOM_PED_AT_COORD(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_758[1], 0f, 10f, 0f), 4f, 4f, 4f, 26);
						if ((__LIB_0__::func_692(iLocal_365) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_365, joaat("SCRIPT_TASK_REACT_AND_FLEE_PED")) != 1) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_365, joaat("SCRIPT_TASK_SMART_FLEE_PED")) != 1)
						{
							TASK::CLEAR_PED_TASKS(iLocal_365);
							PED::SET_PED_KEEP_TASK(iLocal_365, true);
							if (__LIB_0__::func_121(Local_481.f_0))
							{
								if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
								{
									TASK::TASK_REACT_AND_FLEE_PED(iLocal_365, Local_481.f_0);
									__LIB_0__::func_467("PED REACT AND FLEE FROM JUSTIN");
								}
								else
								{
									TASK::TASK_SMART_FLEE_PED(iLocal_365, Local_481.f_0, 50f, -1, true, false);
									__LIB_0__::func_467("PED SMART FLEE FROM JUSTIN");
								}
							}
							ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_365);
						}
						if (iLocal_287 == 0)
						{
							if (fLocal_338 >= 28753.053f)
							{
								VEHICLE::SET_VEHICLE_DAMAGE(uLocal_758[1], 431.1f, 295.63f, 102.8f, 150f, 110f, false);
								if (!ENTITY::IS_ENTITY_DEAD(iLocal_361, false))
								{
									VEHICLE::SET_VEHICLE_DAMAGE(iLocal_361, 431.1f, 295.63f, 103f, 200f, 200f, false);
									VEHICLE::SMASH_VEHICLE_WINDOW(iLocal_361, 0);
								}
								AUDIO::PLAY_SOUND_FROM_COORD(-1, "SMALL_CRASH", 431.1f, 295.63f, 102.8f, "PAPARAZZO_02_SOUNDSETS", false, 0, false);
								iLocal_287 = 1;
							}
						}
					}
					if (__LIB_0__::func_121(uLocal_758[0]))
					{
						if (iLocal_267 == 0)
						{
							iLocal_267 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(85 /*EVENT_SHOCKING_DRIVING_ON_PAVEMENT*/, uLocal_758[0], -1f);
						}
						if (iLocal_288 == 0)
						{
							if (fLocal_338 >= 49422.613f)
							{
								RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 1);
								VEHICLE::SET_VEHICLE_DAMAGE(uLocal_758[0], 643.32f, 33.03f, 86f, 200f, 200f, false);
								iLocal_288 = 1;
							}
						}
						if (iLocal_313 == 0)
						{
							if (AUDIO::HAS_SOUND_FINISHED(iLocal_372))
							{
								AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_372, "LOOP_REV", uLocal_758[0], "PAPARAZZO_02_SOUNDSETS", false, 0);
							}
							if (iLocal_267 == 0)
							{
								iLocal_267 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(85 /*EVENT_SHOCKING_DRIVING_ON_PAVEMENT*/, uLocal_758[0], -1f);
							}
							iLocal_364 = PED::GET_RANDOM_PED_AT_COORD(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_758[0], 0f, 10f, 0f), 4f, 4f, 4f, 26);
							if ((__LIB_0__::func_692(iLocal_364) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_364, joaat("SCRIPT_TASK_REACT_AND_FLEE_PED")) != 1) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_364, joaat("SCRIPT_TASK_SMART_FLEE_PED")) != 1)
							{
								TASK::CLEAR_PED_TASKS(iLocal_364);
								PED::SET_PED_KEEP_TASK(iLocal_364, true);
								if (__LIB_0__::func_121(Local_480.f_0))
								{
									if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
									{
										TASK::TASK_REACT_AND_FLEE_PED(iLocal_364, Local_480.f_0);
										__LIB_0__::func_467("PED REACT AND FLEE FROM POPPY");
									}
									else
									{
										TASK::TASK_SMART_FLEE_PED(iLocal_364, Local_480.f_0, 50f, -1, true, false);
										__LIB_0__::func_467("PED SMART FLEE FROM POPPY");
									}
								}
								ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_364);
							}
							if (fLocal_338 >= 92227.95f)
							{
								RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 0);
								VEHICLE::SMASH_VEHICLE_WINDOW(uLocal_758[0], 6);
								VEHICLE::SET_VEHICLE_DAMAGE(uLocal_758[0], 99.92f, -396.72f, 40.74f, 200f, 200f, false);
								VEHICLE::SET_VEHICLE_TYRE_BURST(uLocal_758[0], 0, false, 1000f);
								VEHICLE::SET_VEHICLE_TYRE_BURST(uLocal_758[0], 1, false, 1000f);
								AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "BUILDING_SITE_CRASH", uLocal_758[0], "PAPARAZZO_02_SOUNDSETS", false, 0);
								AUDIO::TRIGGER_MUSIC_EVENT("PAP2_STOP");
								if (__LIB_0__::func_692(iLocal_356[0]))
								{
									TASK::TASK_GO_TO_ENTITY(iLocal_356[0], uLocal_758[0], -1, 10f, 2f, 2f, 0);
								}
								if (__LIB_0__::func_692(iLocal_356[1]))
								{
									TASK::TASK_GO_TO_ENTITY(iLocal_356[1], uLocal_758[0], -1, 5f, 2f, 2f, 0);
								}
								if (__LIB_0__::func_692(iLocal_356[2]))
								{
									TASK::TASK_GO_TO_ENTITY(iLocal_356[2], uLocal_758[0], -1, 15f, 2f, 2f, 0);
								}
								if (__LIB_0__::func_692(iLocal_356[3]))
								{
									TASK::TASK_GO_TO_ENTITY(iLocal_356[3], uLocal_758[0], -1, 10f, 2f, 2f, 0);
								}
								if (__LIB_0__::func_692(iLocal_356[4]))
								{
									TASK::TASK_START_SCENARIO_IN_PLACE(iLocal_356[4], "WORLD_HUMAN_MOBILE_FILM_SHOCKING", -1, true);
								}
								iLocal_267 = 0;
								__LIB_0__::func_124(&iLocal_364, 1, 0, 1);
								RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 0f, 0);
								iLocal_313 = 1;
							}
						}
						else
						{
							if (!AUDIO::HAS_SOUND_FINISHED(iLocal_372))
							{
								AUDIO::STOP_SOUND(iLocal_372);
							}
							if (iLocal_270 == 0)
							{
								iLocal_270 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(79 /*EVENT_SHOCKING_CAR_CRASH*/, uLocal_758[0], -1f);
							}
						}
					}
					if (fLocal_338 >= 40577.41f && fLocal_338 < 42025.582f)
					{
						if (fLocal_340 < 2.5f)
						{
							fLocal_340 = (fLocal_340 + 0.1f);
						}
						if (__LIB_0__::func_121(uLocal_758[2]))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_758[2]))
							{
								VEHICLE::SET_POSITION_OFFSET_FOR_RECORDED_VEHICLE_PLAYBACK(uLocal_758[2], fLocal_340, 0f, 0f);
							}
						}
					}
					else if (fLocal_340 != 0f)
					{
						if (fLocal_338 >= 42025.582f)
						{
							if (fLocal_340 > 0f)
							{
								fLocal_340 = (fLocal_340 - 0.1f);
							}
							if (fLocal_340 < 0f)
							{
								fLocal_340 = 0f;
							}
							if (__LIB_0__::func_121(uLocal_758[2]))
							{
								if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_758[2]))
								{
									VEHICLE::SET_POSITION_OFFSET_FOR_RECORDED_VEHICLE_PLAYBACK(uLocal_758[2], fLocal_340, 0f, 0f);
								}
							}
						}
					}
					if (!iLocal_330)
					{
						if (fLocal_338 >= 39807.453f && fLocal_338 < 41084.42f)
						{
							if (fLocal_339 < 0.1f)
							{
								fLocal_339 = (fLocal_339 + 0.01f);
							}
							if (fLocal_341 > -0.3f)
							{
								fLocal_341 = (fLocal_341 - 0.01f);
							}
							VEHICLE::SET_POSITION_OFFSET_FOR_RECORDED_VEHICLE_PLAYBACK(uLocal_758[0], fLocal_341, 0f, fLocal_339);
						}
						else if (fLocal_338 >= 41084.42f)
						{
							iLocal_330 = 1;
						}
					}
					else if (fLocal_338 >= 45980.902f && fLocal_338 < 48093.19f)
					{
						if (fLocal_339 < 0.1f)
						{
							fLocal_339 = (fLocal_339 + 0.02f);
						}
						VEHICLE::SET_POSITION_OFFSET_FOR_RECORDED_VEHICLE_PLAYBACK(uLocal_758[0], fLocal_341, 0f, fLocal_339);
					}
					else
					{
						if (fLocal_339 != 0f)
						{
							if (fLocal_339 > 0f)
							{
								fLocal_339 = (fLocal_339 - 0.02f);
							}
							if (fLocal_339 < 0f)
							{
								fLocal_339 = 0f;
							}
						}
						if (fLocal_341 != 0f)
						{
							if (fLocal_341 < 0f)
							{
								fLocal_341 = (fLocal_341 + 0.01f);
							}
							if (fLocal_341 > 0f)
							{
								fLocal_341 = 0f;
							}
						}
						if (fLocal_339 != 0f || fLocal_341 != 0f)
						{
							VEHICLE::SET_POSITION_OFFSET_FOR_RECORDED_VEHICLE_PLAYBACK(uLocal_758[0], fLocal_341, 0f, fLocal_339);
						}
					}
					if (fLocal_338 >= 3472.1975f && fLocal_338 < 94887.29f)
					{
						iLocal_674 = 1;
					}
					else
					{
						iLocal_674 = 0;
					}
					if (__LIB_0__::func_695(uLocal_758[0]))
					{
						if (fLocal_338 >= 48117.37f && fLocal_338 < 50493.31f)
						{
							PHYSICS::ACTIVATE_PHYSICS(uLocal_758[0]);
						}
						if (fLocal_338 >= 87079.42f)
						{
							PHYSICS::ACTIVATE_PHYSICS(uLocal_758[0]);
						}
					}
					if (__LIB_0__::func_695(uLocal_758[1]))
					{
						if (fLocal_338 >= 27450.809f && fLocal_338 < 30024.781f)
						{
							if (__LIB_0__::func_695(iLocal_361))
							{
								PHYSICS::ACTIVATE_PHYSICS(iLocal_361);
							}
							PHYSICS::ACTIVATE_PHYSICS(uLocal_758[1]);
						}
						if (fLocal_338 >= 87079.42f)
						{
							PHYSICS::ACTIVATE_PHYSICS(uLocal_758[1]);
						}
						if (iLocal_298 == 0)
						{
							if (fLocal_338 > 88060.51f && fLocal_338 < 89076.586f)
							{
								AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "HIGHREV", uLocal_758[1], "PAPARAZZO_02_SOUNDSETS", false, 0);
								__LIB_0__::func_467("HIGH REV SOUND");
								iLocal_298 = 1;
							}
						}
					}
					if (__LIB_0__::func_695(uLocal_758[2]))
					{
						if (fLocal_338 >= 52142.996f && fLocal_338 < 56000f)
						{
							PHYSICS::ACTIVATE_PHYSICS(uLocal_758[2]);
						}
						if (fLocal_338 >= 64722.496f && fLocal_338 < 67652.06f)
						{
							PHYSICS::ACTIVATE_PHYSICS(uLocal_758[2]);
						}
						if (fLocal_338 >= 87079.42f)
						{
							PHYSICS::ACTIVATE_PHYSICS(uLocal_758[2]);
						}
					}
					if (fLocal_338 >= 500f && iLocal_241 != 7)
					{
						func_372();
					}
					if (iLocal_222 == 0)
					{
						if (fLocal_338 >= 91365.81f)
						{
							iLocal_728 = 0;
							iLocal_732 = 1;
						}
					}
					if (fLocal_338 > 0f)
					{
						if (iLocal_293 == 0)
						{
							VEHICLE::SET_VEHICLE_DOOR_BROKEN(iLocal_759, 5, true);
							ENTITY::SET_ENTITY_VISIBLE(iLocal_759, true, false);
							iLocal_293 = 1;
						}
						else if (iLocal_300 == 0)
						{
							iLocal_300 = 1;
						}
						else if (iLocal_308 == 0)
						{
							iLocal_308 = 1;
						}
					}
					if (iLocal_291 == 0)
					{
						if (fLocal_338 >= 91715.73f)
						{
							if (!__LIB_0__::func_75())
							{
								if (__LIB_2__::func_859(&uLocal_489, cLocal_751, "PAP2_PIPES", 8, 0, 0, 0))
								{
									iLocal_291 = 1;
								}
							}
						}
					}
					if (iLocal_349 == 0)
					{
						if (fLocal_338 >= 85000f)
						{
							iLocal_348 = STREAMING::STREAMVOL_CREATE_FRUSTUM(-71.5438f, -549.907f, 40.5579f, 2.4313f, 1.2491f, -20.7899f, 200f, 13, 127);
							STREAMING::REQUEST_MODEL(joaat("prop_pipes_02b"));
							STREAMING::REQUEST_MODEL(joaat("prop_cablespool_02"));
							STREAMING::REQUEST_MODEL(joaat("prop_barrier_wat_04c"));
							STREAMING::REQUEST_MODEL(joaat("prop_consign_01a"));
							STREAMING::REQUEST_MODEL(joaat("prop_barrier_work06a"));
							STREAMING::REQUEST_MODEL(joaat("prop_sign_road_03g"));
							STREAMING::REQUEST_MODEL(joaat("prop_sign_road_03m"));
							PED::SET_PED_NON_CREATION_AREA(Vector(38.4052f, -403.4291f, 1.9758f) - Vector(10f, 30f, 30f), Vector(38.4052f, -403.4291f, 1.9758f) + Vector(10f, 30f, 30f));
							iLocal_349 = 1;
						}
					}
					if (fLocal_338 >= 80000f)
					{
						func_369();
					}
					if (fLocal_338 < 15000f)
					{
						if (CAM::IS_SCREEN_FADED_OUT())
						{
							if (!CAM::IS_SCREEN_FADING_IN())
							{
								__LIB_0__::func_84(800, 0);
							}
						}
					}
					func_368();
					if (__LIB_0__::func_692(Local_480.f_0))
					{
						PED::SET_PED_LOD_MULTIPLIER(Local_480.f_0, 2f);
						if (fLocal_338 >= 47849.195f && fLocal_338 < 49546.555f)
						{
							if (!PED::IS_PED_DOING_DRIVEBY(Local_480.f_0))
							{
								TASK::TASK_DRIVE_BY(Local_480.f_0, PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 7f, 100, false, joaat("FIRING_PATTERN_BURST_FIRE_DRIVEBY"));
							}
						}
					}
					if (iLocal_329 == 1)
					{
						if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_759) < 80000f)
						{
							VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_759, 80000f);
						}
					}
				}
				if (VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iLocal_759, 2) > 0f)
				{
					VEHICLE::SET_VEHICLE_DOOR_CONTROL(iLocal_759, 2, 0, (VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iLocal_759, 2) - 0.08f));
				}
				if (VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iLocal_759, 3) > 0f)
				{
					VEHICLE::SET_VEHICLE_DOOR_CONTROL(iLocal_759, 3, 0, (VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iLocal_759, 3) - 0.08f));
				}
			}
			if (!iLocal_728)
			{
				if (!iLocal_731)
				{
					iLocal_731 = 1;
				}
				else
				{
					if (bLocal_730)
					{
						if (CAM::DOES_CAM_EXIST(iLocal_663))
						{
							CAM::STOP_CAM_POINTING(iLocal_663);
						}
						if (!bLocal_729)
						{
							if (CAM::DOES_CAM_EXIST(iLocal_665))
							{
								CAM::DESTROY_CAM(iLocal_665, false);
							}
							if (CAM::DOES_CAM_EXIST(iLocal_663))
							{
								fLocal_337 = CAM::GET_CAM_FOV(iLocal_663);
							}
							if (!iLocal_281)
							{
								func_14(0);
							}
						}
					}
					else if (iLocal_293 == 1)
					{
						if (bLocal_730 == 0)
						{
							if (func_324(13, Local_462, 0))
							{
								if (CAM::DOES_CAM_EXIST(iLocal_663))
								{
									CAM::SHAKE_CAM(iLocal_663, "HAND_SHAKE", 0.1f);
									CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
								}
								func_14(0);
								ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), false, false);
								bLocal_730 = true;
							}
						}
					}
					func_367();
					if (bLocal_730)
					{
						if (func_28(PLAYER::PLAYER_PED_ID(), iLocal_759))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_759))
							{
								if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_759) <= 86982.21f)
								{
									if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_759) >= 1000f)
									{
										func_362(Local_480.f_0, &bVar1, 1);
										if (!bVar1)
										{
											if (!iLocal_732)
											{
												func_360();
											}
										}
									}
								}
							}
						}
					}
					func_357();
				}
			}
			else
			{
				if (CAM::DOES_CAM_EXIST(iLocal_663))
				{
					fLocal_337 = CAM::GET_CAM_FOV(iLocal_663);
				}
				func_14(0);
				if (func_356())
				{
					func_354(4);
				}
			}
			func_339();
			func_375();
			break;
		case 2:
			func_338(0);
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
			__LIB_0__::func_714(&iLocal_660);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			break;
		case 3:
			if (func_28(PLAYER::PLAYER_PED_ID(), iLocal_759))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_759))
				{
					VEHICLE::SKIP_TO_END_AND_STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_759);
					if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_759, 2, false))
					{
						TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(PLAYER::PLAYER_PED_ID(), iLocal_759, false);
					}
					CUTSCENE::REQUEST_CUTSCENE("pap_2_mcs_1", 8);
					iLocal_693 = 2;
				}
			}
			break;
	}
}

void func_338(bool bParam0)//Position - 0x331FC
{
	iLocal_735 = iLocal_692;
	if (!bParam0)
	{
		iLocal_692 = iLocal_735 + 1;
	}
	else if (iLocal_735 > 0)
	{
		iLocal_692 = (iLocal_735 - 1);
	}
	iLocal_702 = 0;
	iLocal_693 = 0;
}

void func_339()//Position - 0x33232
{
	if (!__LIB_0__::func_75())
	{
		if (__LIB_0__::func_692(Local_480.f_0))
		{
			if (__LIB_0__::func_687(Local_480.f_0, PLAYER::PLAYER_PED_ID(), 16f, 1))
			{
				if (__LIB_0__::func_695(iLocal_759))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_759))
					{
						if (fLocal_338 > 50000f && fLocal_338 < 60000f)
						{
							if (iLocal_764 == 0)
							{
								if (__LIB_14__::func_535(&uLocal_489, cLocal_751, "PAP2_POP", "PAP2_POP_6", 7, 0, 0))
								{
									TASK::TASK_PLAY_ANIM(Local_480.f_0, "rcmpaparazzo_2ig_3", "pm_incar_fuckinlosers", 8f, -2f, -1, 0, 0f, false, false, false);
									iLocal_764 = 1;
									iLocal_766 = MISC::GET_GAME_TIMER();
									return;
								}
							}
						}
						if (fLocal_338 > 72000f && fLocal_338 < 84000f)
						{
							if (iLocal_763 == 0)
							{
								if (__LIB_14__::func_535(&uLocal_489, cLocal_751, "PAP2_POP", "PAP2_POP_5", 7, 0, 0))
								{
									TASK::TASK_PLAY_ANIM(Local_480.f_0, "rcmpaparazzo_2ig_3", "pm_incar_ih8u", 8f, -2f, -1, 0, 0f, false, false, false);
									iLocal_763 = 1;
									iLocal_766 = MISC::GET_GAME_TIMER();
									return;
								}
							}
						}
					}
				}
			}
			if (__LIB_0__::func_687(Local_480.f_0, PLAYER::PLAYER_PED_ID(), 12f, 1))
			{
				if (iLocal_760 == 0)
				{
					if (__LIB_14__::func_535(&uLocal_489, cLocal_751, "PAP2_POP", "PAP2_POP_1", 7, 0, 0))
					{
						TASK::TASK_PLAY_ANIM(Local_480.f_0, "rcmpaparazzo_2ig_3", "pm_incar_gimmethtcam", 8f, -2f, -1, 0, 0f, false, false, false);
						iLocal_760 = 1;
						iLocal_766 = MISC::GET_GAME_TIMER();
						return;
					}
				}
				if (MISC::GET_GAME_TIMER() > iLocal_766 + 9000)
				{
					if (iLocal_761 == 0)
					{
						if (__LIB_14__::func_535(&uLocal_489, cLocal_751, "PAP2_POP", "PAP2_POP_2", 7, 0, 0))
						{
							TASK::TASK_PLAY_ANIM(Local_480.f_0, "rcmpaparazzo_2ig_3", "pm_incar_illsueyou", 8f, -2f, -1, 0, 0f, false, false, false);
							iLocal_761 = 1;
							iLocal_766 = MISC::GET_GAME_TIMER();
							return;
						}
					}
					if (iLocal_762 == 0)
					{
						if (__LIB_14__::func_535(&uLocal_489, cLocal_751, "PAP2_POP", "PAP2_POP_4", 7, 0, 0))
						{
							TASK::TASK_PLAY_ANIM(Local_480.f_0, "rcmpaparazzo_2ig_3", "pm_incar_imavirgin", 8f, -2f, -1, 0, 0f, false, false, false);
							iLocal_762 = 1;
							iLocal_766 = MISC::GET_GAME_TIMER();
							return;
						}
					}
					if (__LIB_0__::func_695(iLocal_759))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_759))
						{
							if (fLocal_338 > 80000f)
							{
								if (iLocal_765 == 0)
								{
									if (__LIB_14__::func_535(&uLocal_489, cLocal_751, "PAP2_POP", "PAP2_POP_7", 7, 0, 0))
									{
										TASK::TASK_PLAY_ANIM(Local_480.f_0, "rcmpaparazzo_2ig_3", "pm_incar_itwasyoga", 8f, -2f, -1, 0, 0f, false, false, false);
										iLocal_765 = 1;
										iLocal_766 = MISC::GET_GAME_TIMER();
										return;
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

void func_354(int iParam0)//Position - 0x33B84
{
	if (iLocal_222 == 0)
	{
		func_355(0);
	}
	else
	{
		if (CAM::DOES_CAM_EXIST(iLocal_663))
		{
			fLocal_337 = CAM::GET_CAM_FOV(iLocal_663);
		}
		func_14(0);
	}
	if (iParam0 != 4)
	{
		HUD::CLEAR_PRINTS();
		__LIB_0__::func_325();
	}
	__LIB_0__::func_714(&iLocal_660);
	__LIB_0__::func_714(&iLocal_661);
	iLocal_728 = 1;
	switch (iParam0)
	{
		case 2:
			sLocal_700 = "PAP2_FAILBUD";
			break;
		case 1:
			sLocal_700 = "PAP2_FAILBD";
			break;
		case 3:
			sLocal_700 = "PAP2_FAILTHR";
			break;
		case 4:
			__LIB_0__::func_467("TRYING TO PULL OVER");
			sLocal_700 = "PAP2_BADCAM";
			break;
		case 0:
			func_253();
			sLocal_700 = "PAP2_FAILPAT";
			break;
		case 6:
			func_253();
			sLocal_700 = "PAP2_FAILATT";
			break;
		case 5:
			sLocal_700 = "PAP2_FAILATT";
			break;
		case 7:
			sLocal_700 = "PAP2_FAILATT";
			break;
		case 8:
			if (iLocal_692 < 5)
			{
				func_253();
			}
			sLocal_700 = "PAP2_FAILKPOP";
			break;
		case 9:
			if (iLocal_692 < 5)
			{
				func_253();
			}
			sLocal_700 = "PAP2_FAILPOP";
			break;
		case 14:
			sLocal_700 = "PAP2_FAILCAR";
			break;
		case 15:
			sLocal_700 = "PAP2_FAILWANT";
			break;
		case 10:
			if (iLocal_692 < 5)
			{
				func_253();
			}
			sLocal_700 = "PAP2_FAILKLOV";
			break;
		case 11:
			if (iLocal_692 < 5)
			{
				func_253();
			}
			sLocal_700 = "PAP2_FAILHLOV";
			break;
		case 13:
			sLocal_700 = "PAP2_FAILLEFT";
			break;
		case 16:
			sLocal_700 = "PAP2_FAILONG";
			break;
		case 17:
			sLocal_700 = "PAP2_FAILHIND";
			break;
		case 18:
			sLocal_700 = "PAP2_FAILFR";
			break;
		case 19:
			break;
	}
	iLocal_692 = 11;
	iLocal_693 = 0;
}

void func_355(bool bParam0)//Position - 0x33D4C
{
	if (__LIB_0__::func_692(PLAYER::PLAYER_PED_ID()))
	{
		if (CAM::DOES_CAM_EXIST(iLocal_663))
		{
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			CAM::DESTROY_CAM(iLocal_663, false);
		}
		if (!bParam0)
		{
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
		}
		else
		{
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
		}
	}
	GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
	GRAPHICS::CASCADE_SHADOWS_SET_DYNAMIC_DEPTH_VALUE(-1f);
	GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
}

int func_356()//Position - 0x33DA7
{
	if (__LIB_0__::func_692(PLAYER::PLAYER_PED_ID()))
	{
		if (iLocal_222 == 0)
		{
			iLocal_223 = MISC::GET_GAME_TIMER();
			iLocal_222 = 1;
		}
		else if (iLocal_222 == 1)
		{
			if (MISC::GET_GAME_TIMER() > iLocal_223 + 3000)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_357()//Position - 0x33DE8
{
	if (bLocal_729)
	{
		if (__LIB_0__::func_121(iLocal_759))
		{
			CAM::SET_USE_HI_DOF();
			switch (iLocal_695)
			{
				case 0:
					iLocal_674 = 0;
					iLocal_728 = 0;
					iLocal_732 = 1;
					iLocal_281 = 1;
					if (__LIB_0__::func_692(iLocal_475))
					{
						TASK::TASK_CLEAR_LOOK_AT(iLocal_475);
					}
					iLocal_240 = MISC::GET_GAME_TIMER();
					iLocal_695 = 1;
					break;
				case 1:
					if (iLocal_286 == 0)
					{
						if (!__LIB_0__::func_75())
						{
							if (__LIB_2__::func_859(&uLocal_489, cLocal_751, "PAP2_ENDCUT", 9, 0, 0, 0))
							{
								iLocal_286 = 1;
							}
						}
					}
					if (func_28(PLAYER::PLAYER_PED_ID(), iLocal_759))
					{
						if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_759, 2, false))
						{
							TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(PLAYER::PLAYER_PED_ID(), iLocal_759, false);
						}
					}
					if (MISC::GET_GAME_TIMER() > iLocal_240 + 2000)
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_759) || VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_759) > 101275.63f)
						{
							GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
							if (CAM::DOES_CAM_EXIST(iLocal_663))
							{
								CAM::DESTROY_CAM(iLocal_663, false);
							}
							if (!CAM::DOES_CAM_EXIST(iLocal_663))
							{
								iLocal_663 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
							}
							CAM::SET_CAM_PARAMS(iLocal_663, -66.1f, -515.3f, 42.3f, 1.3f, 0f, -27f, 22.5f, 0, 1, 1, 2);
							CAM::SET_CAM_NEAR_DOF(iLocal_663, 0f);
							CAM::SET_CAM_FAR_DOF(iLocal_663, 200f);
							CAM::SET_CAM_DOF_STRENGTH(iLocal_663, 0.5f);
							AUDIO::STOP_SOUND(iLocal_371);
							if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PAPARAZZO_02_CHASE"))
							{
								AUDIO::STOP_AUDIO_SCENE("PAPARAZZO_02_CHASE");
							}
							if (__LIB_0__::func_695(iLocal_759))
							{
								VEHICLE::SET_VEHICLE_FIXED(iLocal_759);
							}
							if (CAM::DOES_CAM_EXIST(iLocal_665))
							{
								CAM::DESTROY_CAM(iLocal_665, false);
							}
							if (!CAM::DOES_CAM_EXIST(iLocal_665))
							{
								iLocal_665 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
							}
							CAM::SET_CAM_PARAMS(iLocal_665, -71.4f, -529f, 39.8f, 0.8f, 0f, -25.9f, 22.5f, 0, 1, 1, 2);
							CAM::SET_CAM_NEAR_DOF(iLocal_665, 0f);
							CAM::SET_CAM_FAR_DOF(iLocal_665, 200f);
							CAM::SET_CAM_DOF_STRENGTH(iLocal_665, 0.5f);
							CAM::SET_CAM_ACTIVE(iLocal_663, true);
							CAM::SET_CAM_ACTIVE(iLocal_665, true);
							CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_665, iLocal_663, 7000, 3, 1);
							CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
							ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
							if (CAM::DOES_CAM_EXIST(iLocal_663))
							{
								CAM::SHAKE_CAM(iLocal_663, "HAND_SHAKE", 0.6f);
							}
							if (CAM::DOES_CAM_EXIST(iLocal_665))
							{
								CAM::SHAKE_CAM(iLocal_665, "HAND_SHAKE", 0.6f);
							}
							iLocal_695 = 2;
						}
						else
						{
							if (CAM::DOES_CAM_EXIST(iLocal_663))
							{
								CAM::STOP_CAM_POINTING(iLocal_663);
							}
							if (CAM::DOES_CAM_EXIST(iLocal_665))
							{
								CAM::DESTROY_CAM(iLocal_665, false);
							}
							if (CAM::DOES_CAM_EXIST(iLocal_663))
							{
								fLocal_337 = CAM::GET_CAM_FOV(iLocal_663);
							}
							func_14(0);
						}
					}
					else
					{
						if (CAM::DOES_CAM_EXIST(iLocal_663))
						{
							CAM::STOP_CAM_POINTING(iLocal_663);
						}
						if (CAM::DOES_CAM_EXIST(iLocal_665))
						{
							CAM::DESTROY_CAM(iLocal_665, false);
						}
						if (CAM::DOES_CAM_EXIST(iLocal_663))
						{
							fLocal_337 = CAM::GET_CAM_FOV(iLocal_663);
						}
						func_14(0);
					}
					break;
				case 2:
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_759) || VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_759) > 108426.35f)
					{
						while (!__LIB_0__::func_213(iLocal_759, 3f, 1, 1056964608, 0, 1, 0) && iLocal_271 < 500)
						{
							SYSTEM::WAIT(0);
							iLocal_271++;
							HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
							HUD::THEFEED_HIDE_THIS_FRAME();
						}
						if (VEHICLE::IS_VEHICLE_STOPPED(iLocal_759) && CUTSCENE::HAS_CUTSCENE_LOADED())
						{
							iLocal_692 = 9;
							return;
						}
					}
					break;
				case 3:
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_759, -25.8393f, -481.6992f, 39.416f, -58.2834f, -470.9109f, 39.416f, 5f, false, false, 0))
					{
						iLocal_695 = 4;
					}
					break;
				case 4:
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_759, -62.2864f, -491.9415f, 39.4151f, -30.931f, -504.4111f, 39.416f, 5f, false, false, 0))
					{
						iLocal_695 = 5;
					}
					break;
				case 5:
					break;
				}
			}
	}
}

void func_360()//Position - 0x34383
{
	struct<6> Var0;
	if ((IntToFloat(Local_473.f_0) > 200f && IntToFloat(Local_473.f_1) < 100f) && IntToFloat(Local_473.f_2) < 100f)
	{
		Var0 = { __LIB_0__::func_486() };
		if (MISC::ARE_STRINGS_EQUAL(&Var0, "PAP2_CHASE2"))
		{
			__LIB_0__::func_638();
			iLocal_755 = 0;
		}
		if (!__LIB_0__::func_75())
		{
			if (iLocal_738 < 6)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_231 + 8000)
				{
					if (__LIB_2__::func_859(&uLocal_489, cLocal_751, "PAP2_BADCAM2", 7, 0, 0, 0))
					{
						iLocal_738++;
						iLocal_755 = 1;
						iLocal_231 = MISC::GET_GAME_TIMER();
					}
				}
			}
			else if (iLocal_738 >= 6)
			{
				if (__LIB_2__::func_859(&uLocal_489, cLocal_751, "PAP2_FAILCAM", 7, 0, 0, 0))
				{
					if (iLocal_738 >= 6)
					{
						iLocal_728 = 1;
					}
				}
			}
		}
	}
}

void func_362(int iParam0, var uParam1, bool bParam2)//Position - 0x3446C
{
	float* fVar0;
	float* fVar1;
	fVar0 = 0f;
	fVar1 = 0f;
	*uParam1 = func_365(iParam0, &fVar0, &fVar1);
	if (*uParam1)
	{
		if (bParam2)
		{
		}
		if (CAM::DOES_CAM_EXIST(iLocal_663))
		{
			if (bParam2)
			{
				if (CAM::GET_CAM_FOV(iLocal_663) < 13f)
				{
					func_364(1, 1);
					iLocal_746 = (iLocal_746 - 1);
					iLocal_746 = (iLocal_746 - 1);
				}
				else
				{
					func_364(1, 0);
					iLocal_746 = (iLocal_746 - 1);
				}
			}
			else if (CAM::GET_CAM_FOV(iLocal_663) < 13f)
			{
				func_364(1, 1);
			}
			else
			{
				func_364(1, 0);
			}
		}
	}
	else if (__LIB_0__::func_692(iParam0))
	{
		if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
		{
			func_364(0, 0);
			iLocal_746 = (iLocal_746 - 1);
		}
		else
		{
			func_363();
			iLocal_746++;
		}
	}
	if (iLocal_746 < 0)
	{
		iLocal_746 = 0;
	}
	if (iLocal_746 > 61)
	{
		iLocal_746 = 61;
	}
}

void func_363()//Position - 0x34544
{
	Local_473.f_1 = (Local_473.f_1 - 5);
	Local_473.f_2 = (Local_473.f_2 - 5);
	Local_473.f_0 += 5;
	if (Local_473.f_0 >= 255)
	{
		Local_473.f_0 = 255;
	}
	if (Local_473.f_1 <= 0)
	{
		Local_473.f_1 = 0;
	}
	if (Local_473.f_2 <= 0)
	{
		Local_473.f_2 = 0;
	}
	iLocal_248++;
}

void func_364(bool bParam0, bool bParam1)//Position - 0x3459F
{
	if (bParam0)
	{
		if (bParam1)
		{
			Local_473.f_1 += 4;
			Local_473.f_2 += 4;
			Local_473.f_0 = (Local_473.f_0 - 4);
		}
		else
		{
			Local_473.f_1 += 3;
			Local_473.f_2 += 3;
			Local_473.f_0 = (Local_473.f_0 - 3);
		}
		if (Local_473.f_0 <= 0)
		{
			Local_473.f_0 = 0;
		}
		if (Local_473.f_1 >= 255)
		{
			Local_473.f_1 = 255;
		}
		if (Local_473.f_2 >= 123)
		{
			Local_473.f_2 = 123;
		}
	}
	else
	{
		Local_473.f_1 -= 3;
		Local_473.f_2 -= 3;
		Local_473.f_0 = (Local_473.f_0 - -3);
		if (Local_473.f_1 >= 255)
		{
			Local_473.f_1 = 255;
		}
		if (Local_473.f_2 >= 123)
		{
			Local_473.f_2 = 123;
		}
		if (Local_473.f_0 <= 0)
		{
			Local_473.f_0 = 0;
		}
	}
	if (Local_473.f_1 == 255)
	{
		iLocal_261++;
	}
}

int func_365(int iParam0, float* fParam1, float* fParam2)//Position - 0x34687
{
	int iVar0;
	struct<3> Var1;
	if (__LIB_0__::func_692(iParam0))
	{
		iVar0 = PED::GET_PED_BONE_INDEX(iParam0, 31086);
		if (iVar0 != -1)
		{
			Var1 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iParam0, iVar0) };
			if (func_366(Var1, 2f, 150))
			{
				GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(Var1, fParam1, fParam2);
				if (CAM::DOES_CAM_EXIST(iLocal_663))
				{
					if (CAM::GET_CAM_FOV(iLocal_663) < 10f && iLocal_692 == 5)
					{
						if (((*fParam1 > 0.2f && *fParam1 < 0.8f) && *fParam2 > 0.2f) && *fParam2 < 0.8f)
						{
							return 1;
						}
					}
					else if (((*fParam1 > 0.35f && *fParam1 < 0.65f) && *fParam2 > 0.35f) && *fParam2 < 0.65f)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_366(struct<3> Param0, float fParam1, int iParam2)//Position - 0x3476C
{
	if (__LIB_0__::func_692(PLAYER::PLAYER_PED_ID()))
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Param0, true) <= IntToFloat(iParam2))
		{
			if (CAM::IS_SPHERE_VISIBLE(Param0, fParam1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_367()//Position - 0x347AA
{
	int iVar0;
	if (iLocal_694 != 3)
	{
		iVar0 = iLocal_694;
		switch (iLocal_694)
		{
			case 0:
				if (__LIB_2__::func_859(&uLocal_489, cLocal_751, "PAP2_CHASE1", 7, 0, 0, 0))
				{
					iLocal_694 = iVar0 + 1;
				}
				break;
			case 1:
				if (!__LIB_0__::func_75())
				{
					if (fLocal_338 > 11596f && fLocal_338 < 14864f)
					{
						if (!iLocal_314)
						{
							if (__LIB_14__::func_535(&uLocal_489, cLocal_751, "PAP2_CHASE2", "PAP2_CHASE2_1", 7, 0, 0))
							{
								iLocal_314 = 1;
							}
						}
					}
					if (fLocal_338 > 15284.76f && fLocal_338 < 21515f)
					{
						if (!iLocal_315)
						{
							if (__LIB_14__::func_535(&uLocal_489, cLocal_751, "PAP2_CHASE2", "PAP2_CHASE2_2", 7, 0, 0))
							{
								iLocal_315 = 1;
							}
						}
					}
					if (fLocal_338 > 21655.77f && fLocal_338 < 25915f)
					{
						if (!iLocal_316)
						{
							if (__LIB_14__::func_535(&uLocal_489, cLocal_751, "PAP2_CHASE2", "PAP2_CHASE2_3", 7, 0, 0))
							{
								iLocal_316 = 1;
							}
						}
					}
					if (fLocal_338 > 27990.73f && fLocal_338 < 28915f)
					{
						if (!iLocal_317)
						{
							if (__LIB_14__::func_535(&uLocal_489, cLocal_751, "PAP2_CHASE2", "PAP2_CHASE2_4", 7, 0, 0))
							{
								iLocal_317 = 1;
							}
						}
					}
					if (fLocal_338 > 31990.73f && fLocal_338 < 32990f)
					{
						if (!iLocal_318)
						{
							if (__LIB_14__::func_535(&uLocal_489, cLocal_751, "PAP2_CHASE2", "PAP2_CHASE2_5", 7, 0, 0))
							{
								iLocal_318 = 1;
							}
						}
					}
					if (fLocal_338 > 34769.36f && fLocal_338 < 38562.85f)
					{
						if (!iLocal_319)
						{
							if (__LIB_14__::func_535(&uLocal_489, cLocal_751, "PAP2_CHASE2", "PAP2_CHASE2_6", 7, 0, 0))
							{
								iLocal_319 = 1;
							}
						}
					}
					if (fLocal_338 > 45138.23f && fLocal_338 < 46245.23f)
					{
						if (!iLocal_320)
						{
							if (__LIB_14__::func_535(&uLocal_489, cLocal_751, "PAP2_CHASE2", "PAP2_CHASE2_7", 7, 0, 0))
							{
								iLocal_320 = 1;
							}
						}
					}
					if (fLocal_338 > 49645.43f && fLocal_338 < 51045.23f)
					{
						if (!iLocal_321)
						{
							if (__LIB_14__::func_535(&uLocal_489, cLocal_751, "PAP2_CHASE2", "PAP2_CHASE2_8", 7, 0, 0))
							{
								iLocal_321 = 1;
							}
						}
					}
					if (fLocal_338 > 53299.31f && fLocal_338 < 59399.23f)
					{
						if (!iLocal_322)
						{
							if (__LIB_14__::func_535(&uLocal_489, cLocal_751, "PAP2_CHASE2", "PAP2_CHASE2_9", 7, 0, 0))
							{
								iLocal_322 = 1;
							}
						}
					}
					if (fLocal_338 > 64999.31f && fLocal_338 < 66320.23f)
					{
						if (!iLocal_323)
						{
							if (__LIB_14__::func_535(&uLocal_489, cLocal_751, "PAP2_CHASE2", "PAP2_CHASE2_10", 7, 0, 0))
							{
								iLocal_323 = 1;
							}
						}
					}
					if (fLocal_338 > 67320.23f && fLocal_338 < 69648.89f)
					{
						if (!iLocal_324)
						{
							if (__LIB_14__::func_535(&uLocal_489, cLocal_751, "PAP2_CHASE2", "PAP2_CHASE2_11", 7, 0, 0))
							{
								iLocal_324 = 1;
							}
						}
					}
					if (fLocal_338 > 71493.89f && fLocal_338 < 73176.11f)
					{
						if (!iLocal_325)
						{
							if (__LIB_14__::func_535(&uLocal_489, cLocal_751, "PAP2_CHASE2", "PAP2_CHASE2_12", 7, 0, 0))
							{
								iLocal_325 = 1;
							}
						}
					}
					if (fLocal_338 > 75924.03f && fLocal_338 < 77366.81f)
					{
						if (!iLocal_326)
						{
							if (__LIB_14__::func_535(&uLocal_489, cLocal_751, "PAP2_CHASE2", "PAP2_CHASE2_13", 7, 0, 0))
							{
								iLocal_326 = 1;
							}
						}
					}
					if (fLocal_338 > 79366.81f && fLocal_338 < 81397.3f)
					{
						if (!iLocal_327)
						{
							if (__LIB_14__::func_535(&uLocal_489, cLocal_751, "PAP2_CHASE2", "PAP2_CHASE2_14", 7, 0, 0))
							{
								iLocal_327 = 1;
							}
						}
					}
					if (fLocal_338 > 83615.89f && fLocal_338 < 85489.72f)
					{
						if (!iLocal_328)
						{
							if (__LIB_14__::func_535(&uLocal_489, cLocal_751, "PAP2_CHASE2", "PAP2_CHASE2_15", 7, 0, 0))
							{
								iLocal_328 = 1;
								iLocal_694 = 2;
							}
						}
					}
					if (fLocal_338 > 90000f)
					{
						iLocal_694 = 2;
					}
				}
				break;
			case 2:
				if (__LIB_0__::func_121(iLocal_759))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_759))
					{
						if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_759) >= 94365.81f)
						{
							if (__LIB_2__::func_859(&uLocal_489, cLocal_751, "PAP2_CHASE3", 9, 0, 0, 0) || VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_759) >= 100000f)
							{
								RECORDING::REPLAY_RECORD_BACK_FOR_TIME(10f, 3f, 1);
								PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
								bLocal_729 = true;
								iLocal_694 = iVar0 + 1;
							}
						}
					}
				}
				break;
			default:
				break;
			}
	}
}

void func_368()//Position - 0x34C3C
{
	if (fLocal_338 > 7244.102f && fLocal_338 < 14124.618f)
	{
		if (!CAM::IS_SPHERE_VISIBLE(26.13f, 275.37f, 108.55f, 25f))
		{
			MISC::CLEAR_AREA_OF_PEDS(26.13f, 275.37f, 108.55f, 25f, 0);
		}
	}
	if (fLocal_338 > 36326.59f && fLocal_338 < 45647.02f)
	{
		if (!CAM::IS_SPHERE_VISIBLE(672.9f, 202.11f, 92.69f, 15f))
		{
			MISC::CLEAR_AREA_OF_PEDS(672.9f, 202.11f, 92.69f, 15f, 0);
		}
	}
	if (fLocal_338 > 44000f && fLocal_338 < 50000f)
	{
		if (!CAM::IS_SPHERE_VISIBLE(622.15f, 63.69f, 89.07f, 15f))
		{
			MISC::CLEAR_AREA_OF_PEDS(622.15f, 63.69f, 89.07f, 15f, 0);
		}
	}
	if (fLocal_338 > 49000f && fLocal_338 < 56000f)
	{
		if (!CAM::IS_SPHERE_VISIBLE(670.06f, 2.94f, 83.1f, 20f))
		{
			MISC::CLEAR_AREA_OF_PEDS(670.06f, 2.94f, 83.1f, 20f, 0);
		}
	}
	if (fLocal_338 > 58000f && fLocal_338 < 67694.29f)
	{
		if (!CAM::IS_SPHERE_VISIBLE(493.26f, -138.52f, 58.97f, 15f))
		{
			MISC::CLEAR_AREA_OF_PEDS(493.26f, -138.52f, 58.97f, 15f, 0);
		}
	}
	if (fLocal_338 > 70936.15f && fLocal_338 < 76888.99f)
	{
		if (!CAM::IS_SPHERE_VISIBLE(299.61f, -111.56f, 68.51f, 15f))
		{
			MISC::CLEAR_AREA_OF_PEDS(299.61f, -111.56f, 68.51f, 15f, 0);
		}
	}
}

void func_369()//Position - 0x34E1E
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_356[0]))
	{
		STREAMING::REQUEST_MODEL(joaat("S_M_Y_Construct_01"));
		if (!STREAMING::HAS_MODEL_LOADED(joaat("S_M_Y_Construct_01")))
		{
			return;
		}
		else
		{
			iLocal_356[0] = PED::CREATE_PED(26, joaat("S_M_Y_Construct_01"), 76.0832f, -346.6293f, 41.6255f, 247.2738f, true, true);
			iLocal_356[1] = PED::CREATE_PED(26, joaat("S_M_Y_Construct_01"), 94.7224f, -361.5001f, 41.5291f, 247.5127f, true, true);
			TASK::TASK_GO_TO_ENTITY(iLocal_356[0], iLocal_356[1], -1, 1f, 1f, 2f, 0);
			TASK::TASK_LOOK_AT_ENTITY(iLocal_356[1], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
			iLocal_356[2] = PED::CREATE_PED(26, joaat("S_M_Y_Construct_01"), 76.8379f, -378.1883f, 38.9214f, 124.7959f, true, true);
			TASK::TASK_START_SCENARIO_IN_PLACE(iLocal_356[2], "WORLD_HUMAN_CLIPBOARD", 0, false);
			iLocal_356[3] = PED::CREATE_PED(26, joaat("S_M_Y_Construct_01"), 74.4935f, -379.7711f, 38.9214f, 291.4748f, true, true);
			TASK::TASK_START_SCENARIO_IN_PLACE(iLocal_356[0], "WORLD_HUMAN_STAND_MOBILE", 0, false);
			iLocal_356[4] = PED::CREATE_PED(26, joaat("S_M_Y_Construct_01"), 68.7581f, -402.9993f, 38.9192f, 291.2518f, true, true);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_Y_Construct_01"));
		}
	}
}

void func_372()//Position - 0x34FD8
{
	if (iLocal_241 == 0)
	{
		STREAMING::REQUEST_MODEL(joaat("taxi"));
		STREAMING::REQUEST_MODEL(joaat("bus"));
		if (STREAMING::HAS_MODEL_LOADED(joaat("taxi")) && STREAMING::HAS_MODEL_LOADED(joaat("bus")))
		{
			iLocal_241 = 1;
		}
	}
	else if (iLocal_241 == 1)
	{
		iLocal_362[0] = VEHICLE::CREATE_VEHICLE(joaat("taxi"), -61.57f, 263.696f, 102.3952f, 96.8514f, true, true, false);
		iLocal_363[0] = PED::CREATE_RANDOM_PED_AS_DRIVER(iLocal_362[0], true);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_362[0], 5f);
		TASK::TASK_VEHICLE_DRIVE_TO_COORD(iLocal_363[0], iLocal_362[0], -196.7214f, 263.6796f, 91.2333f, 8f, 0, joaat("taxi"), 262144, 5f, 5f);
		iLocal_362[1] = VEHICLE::CREATE_VEHICLE(joaat("bus"), -129.3595f, 257.7685f, 94.998f, 87.635f, true, true, false);
		iLocal_363[1] = PED::CREATE_RANDOM_PED_AS_DRIVER(iLocal_362[1], true);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_362[1], 5f);
		TASK::TASK_VEHICLE_DRIVE_TO_COORD(iLocal_363[1], iLocal_362[1], -196.7214f, 263.6796f, 91.2333f, 8f, 0, joaat("bus"), 262144, 5f, 5f);
		iLocal_362[3] = VEHICLE::CREATE_VEHICLE(joaat("taxi"), -189.8024f, 253.4723f, 91.4575f, 262.6279f, true, true, false);
		iLocal_363[3] = PED::CREATE_RANDOM_PED_AS_DRIVER(iLocal_362[3], true);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_362[3], 5f);
		TASK::TASK_VEHICLE_DRIVE_TO_COORD(iLocal_363[3], iLocal_362[3], 13.1838f, 255.6287f, 108.5748f, 8f, 0, joaat("taxi"), 262144, 5f, 5f);
		iLocal_362[6] = VEHICLE::CREATE_VEHICLE(joaat("bus"), -175.1252f, 247.2091f, 91.991f, 265.0136f, true, true, false);
		iLocal_363[6] = PED::CREATE_RANDOM_PED_AS_DRIVER(iLocal_362[6], true);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_362[6], 5f);
		TASK::TASK_VEHICLE_DRIVE_TO_COORD(iLocal_363[6], iLocal_362[6], 7.4758f, 252.7416f, 108.411f, 8f, 0, joaat("bus"), 262144, 5f, 5f);
		iLocal_362[7] = VEHICLE::CREATE_VEHICLE(joaat("taxi"), -98.9022f, 246.2435f, 97.7797f, 274.0935f, true, true, false);
		iLocal_363[7] = PED::CREATE_RANDOM_PED_AS_DRIVER(iLocal_362[7], true);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_362[7], 5f);
		TASK::TASK_VEHICLE_DRIVE_TO_COORD(iLocal_363[7], iLocal_362[7], 7.4758f, 252.7416f, 108.411f, 8f, 0, joaat("taxi"), 262144, 5f, 5f);
		iLocal_241 = 2;
	}
	else if (iLocal_241 == 2)
	{
		if (fLocal_338 > 15815.715f)
		{
			__LIB_0__::func_124(&(iLocal_363[0]), 1, 0, 1);
			__LIB_0__::func_124(&(iLocal_363[1]), 1, 0, 1);
			__LIB_0__::func_124(&(iLocal_363[2]), 1, 0, 1);
			__LIB_0__::func_124(&(iLocal_363[3]), 1, 0, 1);
			__LIB_0__::func_124(&(iLocal_363[4]), 1, 0, 1);
			__LIB_0__::func_124(&(iLocal_363[5]), 1, 0, 1);
			__LIB_0__::func_124(&(iLocal_363[6]), 1, 0, 1);
			__LIB_0__::func_124(&(iLocal_363[7]), 1, 0, 1);
			__LIB_0__::func_106(&(iLocal_362[0]));
			__LIB_0__::func_106(&(iLocal_362[1]));
			__LIB_0__::func_106(&(iLocal_362[2]));
			__LIB_0__::func_106(&(iLocal_362[3]));
			__LIB_0__::func_106(&(iLocal_362[4]));
			__LIB_0__::func_106(&(iLocal_362[5]));
			__LIB_0__::func_106(&(iLocal_362[6]));
			__LIB_0__::func_106(&(iLocal_362[7]));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("bus"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("taxi"));
			iLocal_241 = 7;
		}
	}
	else if (iLocal_241 == 3)
	{
		if (fLocal_338 > 41719.38f)
		{
			iLocal_362[8] = VEHICLE::CREATE_VEHICLE(joaat("bus"), 706.0617f, 35.9678f, 83.2352f, 146.9535f, true, true, false);
			iLocal_363[8] = PED::CREATE_RANDOM_PED_AS_DRIVER(iLocal_362[8], true);
			VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_362[8], true, true, false);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_362[8], 5f);
			iLocal_362[9] = VEHICLE::CREATE_VEHICLE(joaat("blista"), 699.3248f, 35.4587f, 83.1331f, 147.9884f, true, true, false);
			iLocal_363[9] = PED::CREATE_RANDOM_PED_AS_DRIVER(iLocal_362[9], true);
			VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_362[9], true, true, false);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_362[9], 5f);
			iLocal_241 = 4;
		}
	}
	else if (iLocal_241 == 4)
	{
		if (fLocal_338 > 58743.74f)
		{
			__LIB_0__::func_124(&(iLocal_363[8]), 1, 0, 1);
			__LIB_0__::func_124(&(iLocal_363[9]), 1, 0, 1);
			__LIB_0__::func_106(&(iLocal_362[8]));
			__LIB_0__::func_106(&(iLocal_362[9]));
			iLocal_241 = 5;
		}
	}
	else if (iLocal_241 == 5)
	{
		if (fLocal_338 > 58743.74f)
		{
			iLocal_362[10] = VEHICLE::CREATE_VEHICLE(joaat("taxi"), 511.5198f, -180.571f, 52.8702f, 10.063f, true, true, false);
			iLocal_363[10] = PED::CREATE_RANDOM_PED_AS_DRIVER(iLocal_362[10], true);
			VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_362[10], true, true, false);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_362[10], 5f);
			iLocal_362[11] = VEHICLE::CREATE_VEHICLE(joaat("blista"), 516.6854f, -179.7204f, 53.0255f, 11.7232f, true, true, false);
			iLocal_363[11] = PED::CREATE_RANDOM_PED_AS_DRIVER(iLocal_362[11], true);
			VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_362[11], true, true, false);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_362[11], 5f);
			iLocal_241 = 6;
		}
	}
	else if (iLocal_241 == 6)
	{
		if (fLocal_338 > 72153.65f)
		{
			__LIB_0__::func_124(&(iLocal_363[10]), 1, 0, 1);
			__LIB_0__::func_124(&(iLocal_363[11]), 1, 0, 1);
			__LIB_0__::func_106(&(iLocal_362[10]));
			__LIB_0__::func_106(&(iLocal_362[11]));
			iLocal_241 = 7;
		}
	}
}

void func_375()//Position - 0x35614
{
	switch (iLocal_736)
	{
		case 0:
			func_427("PAP2UBA", 1, 1, 1);
			func_426();
			func_425();
			iLocal_736++;
			break;
		case 1:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_759, false))
			{
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_759, 1, "PAP2UBA", true);
				VEHICLE::SET_PLAYBACK_SPEED(iLocal_759, fLocal_747);
				func_424();
				iLocal_736++;
			}
			break;
		case 2:
			func_249();
			if (iLocal_692 == 13 || iLocal_692 == 14)
			{
				func_398(iLocal_759, fLocal_747);
			}
			else if (!iLocal_728)
			{
				if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_759, false) && __LIB_0__::func_121(uLocal_758[0])) && __LIB_0__::func_121(uLocal_758[1]))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_759))
					{
						if (iLocal_692 == 8)
						{
							func_398(iLocal_759, fLocal_747);
						}
						else if (iLocal_692 == 13 || iLocal_692 == 14)
						{
							func_398(iLocal_759, fLocal_747);
						}
					}
					else
					{
						iLocal_693 = 2;
						func_376(1, 1);
					}
				}
			}
			else
			{
				if (__LIB_0__::func_121(uLocal_758[0]) && __LIB_0__::func_692(Local_480.f_0))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_758[0]))
					{
					}
				}
				if (__LIB_0__::func_121(uLocal_758[1]) && __LIB_0__::func_692(Local_481.f_0))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_758[1]))
					{
					}
				}
				if (__LIB_0__::func_121(uLocal_758[2]) && __LIB_0__::func_692(Local_482.f_0))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_758[2]))
					{
					}
				}
			}
			break;
	}
}

void func_376(bool bParam0, bool bParam1)//Position - 0x3579F
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_155))
	{
		iLocal_57 = 0;
		__LIB_15__::func_910();
		PED::REMOVE_RELATIONSHIP_GROUP(iLocal_164);
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(-9999f, -9999f, -9999f, 9999f, 9999f, 9999f, 1);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
			PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), true);
			PED::SET_CREATE_RANDOM_COPS(true);
		}
		if (bLocal_73)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_396());
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_15__::func_909());
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_15__::func_908());
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_15__::func_907());
		if (!CAM::IS_SCREEN_FADED_OUT() && !bParam0)
		{
			func_392();
			func_391();
			func_388();
		}
		else
		{
			func_384();
			func_383();
		}
		if (bParam1)
		{
			__LIB_14__::func_804(0);
		}
	}
}

void func_383()//Position - 0x35D75
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		iLocal_171[iVar0] = 0;
		Local_139[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_75[iVar0] = 0f;
		fLocal_76[iVar0] = 0f;
		fLocal_77[iVar0] = 0f;
		fLocal_78[iVar0] = 0f;
		iLocal_115[iVar0] = 0;
		fLocal_79[iVar0] = 0f;
		iLocal_116[iVar0] = 0;
		iLocal_165[iVar0] = 0;
		iLocal_117[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 22)
	{
		iLocal_172[iVar0] = 0;
		iVar0++;
	}
	iLocal_122 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		iLocal_173[iVar0] = 0;
		Local_140[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_90[iVar0] = 0f;
		fLocal_91[iVar0] = 0f;
		fLocal_92[iVar0] = 0f;
		fLocal_93[iVar0] = 0f;
		iLocal_121[iVar0] = 0;
		iLocal_166[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iLocal_175[iVar0] = 0;
		iVar0++;
	}
	iLocal_124 = 0;
	iVar0 = 0;
	while (iVar0 < 25)
	{
		iLocal_174[iVar0] = 0;
		Local_141[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_84[iVar0] = 0f;
		fLocal_85[iVar0] = 0f;
		fLocal_86[iVar0] = 0f;
		fLocal_87[iVar0] = 0f;
		iLocal_118[iVar0] = 0;
		fLocal_88[iVar0] = 0f;
		iLocal_119[iVar0] = 0;
		iLocal_167[iVar0] = 0;
		iLocal_120[iVar0] = 0;
		iVar0++;
	}
	iLocal_123 = 0;
	iLocal_126 = 0;
	iLocal_129 = 0;
	iLocal_130 = 0;
	iLocal_131 = 0;
}

void func_384()//Position - 0x35F01
{
	func_387();
	func_386();
	func_385();
}

void func_385()//Position - 0x35F15
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 25)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_174[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_174[iVar0], false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_174[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_174[iVar0]);
				}
				iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_174[iVar0], -1, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != PLAYER::PLAYER_PED_ID())
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
					{
						PED::DELETE_PED(&iVar1);
					}
				}
			}
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_174[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_174[iVar0]));
			}
		}
		iLocal_119[iVar0] = 0;
		if (!bLocal_53 && !bLocal_66)
		{
			if (iLocal_118[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_118[iVar0], &cLocal_155);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 25)
	{
		if (!iLocal_167[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_167[iVar0]);
		}
		iVar0++;
	}
}

void func_386()//Position - 0x3600C
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_173[iVar0]))
		{
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_173[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_173[iVar0]));
			}
		}
		iLocal_121[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!iLocal_166[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_166[iVar0]);
		}
		iVar0++;
	}
	iLocal_127 = 0;
	iLocal_124 = 0;
}

void func_387()//Position - 0x36089
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_171[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_171[iVar0], false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_171[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_171[iVar0]);
				}
				iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_171[iVar0], -1, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != PLAYER::PLAYER_PED_ID())
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
					{
						PED::DELETE_PED(&iVar1);
					}
				}
			}
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_171[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_171[iVar0]));
			}
		}
		if (!bLocal_53 && !bLocal_66)
		{
			if (iLocal_115[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_115[iVar0], &cLocal_155);
			}
		}
		iLocal_116[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 100)
	{
		if (!iLocal_165[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_165[iVar0]);
		}
		iVar0++;
	}
	iLocal_126 = 0;
	iLocal_122 = 0;
}

void func_388()//Position - 0x36188
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 25)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_174[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_174[iVar0], false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_174[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_174[iVar0]);
				}
			}
			func_390(iLocal_174[iVar0]);
			__LIB_15__::func_906(iLocal_174[iVar0]);
		}
		iLocal_119[iVar0] = 0;
		iLocal_120[iVar0] = 0;
		if (!bLocal_53 && !bLocal_66)
		{
			if (iLocal_118[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_118[iVar0], &cLocal_155);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 25)
	{
		if (!iLocal_167[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_167[iVar0]);
		}
		iVar0++;
	}
	iLocal_128 = 0;
}

void func_390(int iParam0)//Position - 0x3626C
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
				if (bLocal_74)
				{
					PED::SET_PED_FLEE_ATTRIBUTES(iVar1, 65536, true);
					PED::SET_PED_FLEE_ATTRIBUTES(iVar1, 2, false);
				}
				PED::SET_PED_COMBAT_ATTRIBUTES(iVar1, 6, false);
			}
		}
	}
}

void func_391()//Position - 0x36306
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_173[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_173[iVar0], false))
			{
				ENTITY::SET_ENTITY_COLLISION(iLocal_173[iVar0], true, false);
			}
			__LIB_15__::func_906(iLocal_173[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!iLocal_166[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_166[iVar0]);
		}
		iVar0++;
	}
	iLocal_127 = 0;
	iLocal_124 = 0;
}

void func_392()//Position - 0x3638A
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_171[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_171[iVar0], false))
			{
				ENTITY::SET_ENTITY_COLLISION(iLocal_171[iVar0], true, false);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_171[iVar0], false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_171[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_171[iVar0]);
				}
			}
			func_390(iLocal_171[iVar0]);
			__LIB_15__::func_906(iLocal_171[iVar0]);
		}
		iLocal_116[iVar0] = 0;
		iLocal_117[iVar0] = 0;
		if (!bLocal_53 && !bLocal_66)
		{
			if (iLocal_115[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_115[iVar0], &cLocal_155);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 100)
	{
		if (!iLocal_165[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_165[iVar0]);
		}
		iVar0++;
	}
	iLocal_126 = 0;
	iLocal_122 = 0;
}

int func_396()//Position - 0x3649F
{
	if (iLocal_168 == 0)
	{
		return joaat("A_M_Y_Business_01");
	}
	return iLocal_168;
}

void func_398(int iParam0, float fParam1)//Position - 0x364E6
{
	float fVar0;
	struct<3> Var1;
	int iVar2;
	fVar0 = MISC::GET_FRAME_TIME();
	fVar0 = (fVar0 * 1000f);
	bLocal_72 = false;
	if (!bLocal_54)
	{
		if (bLocal_53)
		{
			__LIB_15__::func_905();
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				MISC::CLEAR_AREA(Var1, 1000f, true, false, false, false);
			}
			bLocal_54 = true;
		}
	}
	else if (!bLocal_53)
	{
		__LIB_15__::func_910();
		bLocal_54 = false;
	}
	if (bLocal_53)
	{
		fParam1 = 1f;
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	}
	if (!bLocal_47)
	{
		if (iLocal_42)
		{
			fLocal_99 = 0f;
		}
		else
		{
			fLocal_99 = 1f;
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
			{
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					if (__LIB_15__::func_925(PLAYER::PLAYER_PED_ID(), iParam0))
					{
						iLocal_52 = 1;
					}
					else
					{
						iLocal_52 = 0;
					}
				}
				fLocal_96 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iParam0);
				VEHICLE::SET_PLAYBACK_SPEED(iParam0, ((fParam1 * fLocal_97) * fLocal_99));
				if (bLocal_51)
				{
					func_421(iParam0, fLocal_96);
					func_420(iParam0, fLocal_106);
					if (fLocal_101 > 1000f)
					{
						if (iLocal_138 == 0)
						{
							func_419(iParam0, fLocal_106);
						}
						fVar0 = ((fLocal_96 + 4000f) + (SYSTEM::TO_FLOAT(iLocal_138) * 2000f));
						func_418(iParam0, fVar0, fLocal_100);
						iLocal_138++;
						if (iLocal_138 > 2)
						{
							fLocal_101 = 0f;
						}
					}
					else
					{
						iLocal_138 = 0;
						fLocal_101 = (fLocal_101 + (MISC::GET_FRAME_TIME() * 1000f));
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
		if (fLocal_96 == 0f || CAM::IS_SCREEN_FADED_OUT())
		{
			iVar2 = 1;
		}
		if (iVar2 && !bLocal_59)
		{
			if (!iLocal_41)
			{
				func_415(iParam0, ((fParam1 * fLocal_97) * fLocal_99), 0);
				if (!iLocal_62)
				{
				}
				iLocal_62 = 0;
			}
			if (bLocal_44)
			{
				func_414(iParam0);
			}
			if (!iLocal_41)
			{
				func_401(iParam0, ((fParam1 * fLocal_97) * fLocal_99), 0);
			}
		}
		if (iLocal_49)
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iLocal_176 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					Local_142 = { ENTITY::GET_ENTITY_COORDS(iLocal_176, true) };
					ENTITY::GET_ENTITY_QUATERNION(iLocal_176, &fLocal_80, &fLocal_81, &fLocal_82, &fLocal_83);
				}
			}
			iLocal_49 = 0;
		}
		if (iLocal_48)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_176))
			{
				__LIB_15__::func_906(iLocal_177);
				iLocal_177 = iLocal_176;
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_177, false))
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_177, Local_142, true, false, false, true);
				ENTITY::SET_ENTITY_QUATERNION(iLocal_177, fLocal_80, fLocal_81, fLocal_82, fLocal_83);
			}
			fLocal_95 = fLocal_98;
			iLocal_41 = 1;
			iLocal_48 = 0;
		}
		if (iLocal_41)
		{
			while (!func_399(&iParam0, fLocal_95))
			{
				SYSTEM::WAIT(0);
			}
			iLocal_42 = 1;
		}
		if (iLocal_55)
		{
			iLocal_55 = 0;
		}
	}
}

int func_399(int iParam0, float fParam1)//Position - 0x36781
{
	if (!iLocal_56)
	{
		iLocal_41 = 1;
		func_384();
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*iParam0);
				VEHICLE::SET_VEHICLE_FIXED(*iParam0);
			}
			if (!iLocal_125 == -1)
			{
				while (!func_400(iParam0, iLocal_125, fParam1, 1, 0, 0, 0, 0))
				{
					SYSTEM::WAIT(0);
				}
				if (!bLocal_46)
				{
					iLocal_42 = 1;
					fLocal_99 = 0f;
					iLocal_126 = 0;
					iLocal_128 = 0;
					iLocal_127 = 0;
					iLocal_122 = 0;
					iLocal_123 = 0;
					iLocal_124 = 0;
					iLocal_129 = 0;
					iLocal_130 = 0;
					iLocal_131 = 0;
				}
			}
		}
		iLocal_56 = 1;
	}
	else
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0))
			{
				VEHICLE::SET_PLAYBACK_SPEED(*iParam0, ((1f * fLocal_97) * fLocal_99));
				func_400(iParam0, iLocal_125, fParam1, 1, 0, 0, 0, 0);
			}
		}
		fLocal_96 = fParam1;
		iLocal_132 = 0;
		iLocal_135 = 0;
		fLocal_111 = 0f;
		fLocal_110 = 0f;
		func_401(*iParam0, ((1f * fLocal_97) * fLocal_99), 1);
		func_415(*iParam0, ((1f * fLocal_97) * fLocal_99), 1);
		func_414(*iParam0);
		if ((iLocal_129 == 0 && iLocal_130 == 0) && iLocal_131 == 0)
		{
			iLocal_42 = 0;
			iLocal_41 = 0;
			iLocal_56 = 0;
			return 1;
		}
	}
	return 0;
}

int func_400(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x368B3
{
	float fVar0;
	if (iParam1 > 0)
	{
		VEHICLE::REQUEST_VEHICLE_RECORDING(iParam1, &cLocal_155);
		if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam1, &cLocal_155))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false))
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*uParam0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(*uParam0, false);
					if (bParam4)
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(*uParam0, iParam1, &cLocal_155, 10f, 786603);
					}
					else
					{
						if (iParam1 != iLocal_133 && iParam1 != iLocal_134)
						{
							if (bParam7)
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*uParam0, iParam1, &cLocal_155, 2 | 4, 0, 786603);
							}
							else if (bParam6)
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*uParam0, iParam1, &cLocal_155, 1 | 4, 0, 786603);
							}
							else
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*uParam0, iParam1, &cLocal_155, true);
							}
						}
						else
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*uParam0, iParam1, &cLocal_155, true);
						}
						VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*uParam0, fParam2);
						if (bParam5)
						{
							VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(*uParam0, true);
						}
						return 1;
					}
				}
				else if (VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(*uParam0) == VEHICLE::GET_VEHICLE_RECORDING_ID(iParam1, &cLocal_155))
				{
					fVar0 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(*uParam0);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*uParam0, (fParam2 - fVar0));
					if (!bParam3)
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*uParam0);
						VEHICLE::REQUEST_VEHICLE_RECORDING(iParam1, &cLocal_155);
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
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(*uParam0, iParam1, &cLocal_155, 10f, 786603);
					}
					else if (iParam1 != iLocal_133 && iParam1 != iLocal_134)
					{
						if (bParam7)
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*uParam0, iParam1, &cLocal_155, 2 | 4, 0, 786603);
						}
						else if (bParam6)
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*uParam0, iParam1, &cLocal_155, 1 | 4, 0, 786603);
						}
						else
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*uParam0, iParam1, &cLocal_155, true);
						}
					}
					else
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*uParam0, iParam1, &cLocal_155, true);
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

void func_401(int iParam0, float fParam1, bool bParam2)//Position - 0x36A99
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
		iVar0 = iLocal_128;
		while (iVar0 < 25)
		{
			if (iLocal_119[iVar0] != 99)
			{
				if (iLocal_119[iVar0] == 0)
				{
					if (iLocal_118[iVar0] > 0)
					{
						if (!iLocal_41)
						{
							if (fLocal_96 > (fLocal_88[iVar0] - (7000f * fParam1)))
							{
								if (__LIB_15__::func_894(iLocal_167[iVar0]))
								{
									MISC::SET_BIT(&(iLocal_120[iVar0]), 0);
								}
								else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_167[iVar0]))
								{
									MISC::SET_BIT(&(iLocal_120[iVar0]), 2);
								}
								MISC::CLEAR_BIT(&(iLocal_120[iVar0]), 1);
								iLocal_119[iVar0]++;
								iLocal_130++;
							}
						}
						else
						{
							fVar6 = (fLocal_96 - fLocal_88[iVar0]);
							fVar6 = (fVar6 * fLocal_89[iVar0]);
							if (fVar6 >= 0f)
							{
								if (fVar6 < func_412(iLocal_118[iVar0]))
								{
									if (__LIB_15__::func_894(iLocal_167[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_120[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_167[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_120[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_120[iVar0]), 1);
									iLocal_119[iVar0]++;
									iLocal_130++;
								}
								else
								{
									iLocal_119[iVar0] = 99;
								}
							}
						}
					}
					else
					{
						iLocal_119[iVar0] = 99;
					}
				}
				else if (iLocal_119[iVar0] == 1)
				{
					bVar8 = false;
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_118[iVar0], &cLocal_155);
					if (BitTest(iLocal_120[iVar0], 0))
					{
						STREAMING::REQUEST_MODEL(__LIB_15__::func_907());
						bVar8 = STREAMING::HAS_MODEL_LOADED(__LIB_15__::func_907());
					}
					else if (!bLocal_68 && ((!BitTest(iLocal_120[iVar0], 2) && bVar10) || (BitTest(iLocal_120[iVar0], 2) && bVar11)))
					{
						bVar8 = true;
					}
					else
					{
						STREAMING::REQUEST_MODEL(func_396());
						bVar8 = STREAMING::HAS_MODEL_LOADED(func_396());
					}
					if (bVar8)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_174[iVar0]))
						{
							STREAMING::REQUEST_MODEL(iLocal_167[iVar0]);
							if (STREAMING::HAS_MODEL_LOADED(iLocal_167[iVar0]) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_118[iVar0], &cLocal_155))
							{
								if (fLocal_96 >= (fLocal_88[iVar0] - (fLocal_109 * fParam1)))
								{
									if ((iLocal_55 || bParam2) || (!bLocal_72 && !func_411(Local_141[iVar0 /*3*/], Var5, 5f, fLocal_107)))
									{
										if (bLocal_51)
										{
											func_410(Local_141[iVar0 /*3*/], Var5, fLocal_100);
										}
										iLocal_174[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_167[iVar0], Local_141[iVar0 /*3*/], 0f, false, false, false);
										if (iLocal_167[iVar0] == joaat("polmav"))
										{
											VEHICLE::SET_VEHICLE_LIVERY(iLocal_174[iVar0], 0);
										}
										if (uLocal_64 && !BitTest(iLocal_120[iVar0], 0))
										{
											func_409(iLocal_174[iVar0]);
										}
										if (BitTest(iLocal_120[iVar0], 3))
										{
											ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_174[iVar0], true);
										}
										ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_174[iVar0], Local_141[iVar0 /*3*/], false, false, true);
										ENTITY::SET_ENTITY_QUATERNION(iLocal_174[iVar0], fLocal_84[iVar0], fLocal_85[iVar0], fLocal_86[iVar0], fLocal_87[iVar0]);
										if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_167[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_167[iVar0]))
										{
											VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_174[iVar0], 5f);
										}
										if (!BitTest(iLocal_120[iVar0], 0))
										{
											VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_174[iVar0], true, true, false);
											if (CLOCK::GET_CLOCK_HOURS() > 19 || CLOCK::GET_CLOCK_HOURS() < 7)
											{
												VEHICLE::SET_VEHICLE_LIGHTS(iLocal_174[iVar0], 3);
											}
										}
										ENTITY::FREEZE_ENTITY_POSITION(iLocal_174[iVar0], true);
										STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_167[iVar0]);
										iLocal_130 = (iLocal_130 - 1);
										iLocal_119[iVar0]++;
										bLocal_72 = true;
									}
								}
							}
						}
						else if (!ENTITY::IS_ENTITY_DEAD(iLocal_174[iVar0], false) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_174[iVar0], false))
						{
							ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_174[iVar0], Local_141[iVar0 /*3*/], false, false, true);
							ENTITY::SET_ENTITY_QUATERNION(iLocal_174[iVar0], fLocal_84[iVar0], fLocal_85[iVar0], fLocal_86[iVar0], fLocal_87[iVar0]);
							if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_167[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_167[iVar0]))
							{
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_174[iVar0], 5f);
							}
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_174[iVar0], true);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_167[iVar0]);
							iLocal_130 = (iLocal_130 - 1);
							iLocal_119[iVar0]++;
						}
					}
				}
				else if (iLocal_119[iVar0] == 2)
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_118[iVar0], &cLocal_155);
					if (!BitTest(iLocal_120[iVar0], 1))
					{
						bVar8 = false;
						if (BitTest(iLocal_120[iVar0], 0))
						{
							STREAMING::REQUEST_MODEL(__LIB_15__::func_907());
							bVar8 = STREAMING::HAS_MODEL_LOADED(__LIB_15__::func_907());
							iVar13 = 2;
						}
						else if (!bLocal_68 && ((!BitTest(iLocal_120[iVar0], 2) && bVar10) || (BitTest(iLocal_120[iVar0], 2) && bVar11)))
						{
							bVar8 = true;
							iVar13 = 1;
						}
						else
						{
							STREAMING::REQUEST_MODEL(func_396());
							bVar8 = STREAMING::HAS_MODEL_LOADED(func_396());
							iVar13 = 0;
						}
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_174[iVar0], false))
						{
							if (!bLocal_72 && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_174[iVar0], -1, false))
							{
								if (bVar8)
								{
									if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_174[iVar0], true), Var5) < 10000f || bParam2) || iLocal_55)
									{
										func_407(&(iLocal_174[iVar0]), iVar13, 1);
										MISC::SET_BIT(&(iLocal_120[iVar0]), 1);
									}
								}
							}
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_174[iVar0], false))
					{
						if (fLocal_96 >= fLocal_88[iVar0])
						{
							if (12 > iLocal_123)
							{
								fVar6 = (fLocal_96 - fLocal_88[iVar0]);
								fVar6 = (fVar6 * fLocal_89[iVar0]);
								if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_118[iVar0], &cLocal_155))
								{
									if (fVar6 < VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_118[iVar0], &cLocal_155))
									{
										Var3 = { ENTITY::GET_ENTITY_COORDS(iLocal_174[iVar0], true) };
										Var4 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_118[iVar0], fVar6, &cLocal_155) };
										if (((!func_411(Var3, Var5, 5f, fLocal_107) && func_411(Var4, Var5, 5f, fLocal_107)) && !iLocal_55) && !bParam2)
										{
											if (!BitTest(iLocal_120[iVar0], 1))
											{
												func_407(&(iLocal_174[iVar0]), iVar13, 1);
											}
											iLocal_123++;
											iLocal_119[iVar0]++;
										}
										else if (((!bLocal_72 || BitTest(iLocal_120[iVar0], 1)) || iLocal_55) || bParam2)
										{
											if (func_400(&(iLocal_174[iVar0]), iLocal_118[iVar0], fVar6, 1, 0, 0, bLocal_70, bLocal_69))
											{
												VEHICLE::SET_PLAYBACK_SPEED(iLocal_174[iVar0], (fParam1 * fLocal_89[iVar0]));
												if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_174[iVar0], false))
												{
													if (BitTest(iLocal_120[iVar0], 0))
													{
														VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_174[iVar0], true, true, false);
														VEHICLE::SET_VEHICLE_SIREN(iLocal_174[iVar0], true);
														VEHICLE::SET_VEHICLE_LIGHTS(iLocal_174[iVar0], 2);
														if (!VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_167[iVar0]))
														{
															AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_174[iVar0], true);
														}
													}
												}
												if (!BitTest(iLocal_120[iVar0], 1))
												{
													func_407(&(iLocal_174[iVar0]), iVar13, 1);
												}
												iLocal_123++;
												iLocal_119[iVar0]++;
											}
										}
									}
									else
									{
										if (!BitTest(iLocal_120[iVar0], 1))
										{
											func_407(&(iLocal_174[iVar0]), iVar13, 1);
										}
										iLocal_123++;
										iLocal_119[iVar0]++;
									}
								}
							}
							else
							{
								if (!BitTest(iLocal_120[iVar0], 1))
								{
									func_407(&(iLocal_174[iVar0]), iVar13, 1);
								}
								iLocal_123++;
								iLocal_119[iVar0]++;
							}
						}
					}
					else
					{
						if (!BitTest(iLocal_120[iVar0], 1))
						{
							func_407(&(iLocal_174[iVar0]), iVar13, 1);
						}
						iLocal_123++;
						iLocal_119[iVar0]++;
					}
				}
				else if (iLocal_119[iVar0] == 3)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_174[iVar0], false))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_174[iVar0]))
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_174[iVar0], -1, false);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								if (bVar9)
								{
									if (((!bLocal_45 && !iLocal_42) && !bLocal_61) && (((!bLocal_70 && !bLocal_69) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_174[iVar0])) || func_406(iLocal_174[iVar0])))
									{
										if (ENTITY::DOES_ENTITY_EXIST(iVar2))
										{
											bVar8 = false;
											if (bLocal_63)
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
												else if (MISC::ABSF((fVar7 - ENTITY::GET_ENTITY_SPEED(iLocal_174[iVar0]))) > 15f)
												{
													bVar8 = true;
												}
												else if (!__LIB_15__::func_923(iLocal_174[iVar0], iVar2, 45f))
												{
													bVar8 = true;
												}
												else if (__LIB_15__::func_939(iVar2, iLocal_174[iVar0], 0))
												{
													bVar8 = true;
												}
											}
											if (bVar8)
											{
												func_402(iLocal_174[iVar0]);
												iLocal_119[iVar0]++;
											}
										}
									}
									else
									{
										VEHICLE::SET_PLAYBACK_SPEED(iLocal_174[iVar0], (fParam1 * fLocal_89[iVar0]));
									}
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_174[iVar0]);
							}
						}
						else
						{
							iLocal_119[iVar0]++;
						}
					}
					else
					{
						iLocal_119[iVar0]++;
					}
				}
				else if (iLocal_119[iVar0] == 4)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_174[iVar0], false))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_174[iVar0]))
						{
							iLocal_119[iVar0]++;
						}
						else
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_174[iVar0], -1, false);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								VEHICLE::SET_PLAYBACK_SPEED(iLocal_174[iVar0], (fParam1 * fLocal_89[iVar0]));
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_174[iVar0]);
							}
							if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_118[iVar0], &cLocal_155))
							{
								if (fLocal_96 > (fLocal_88[iVar0] + VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_118[iVar0], &cLocal_155)))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_174[iVar0]);
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_174[iVar0]);
							}
						}
					}
					else
					{
						iLocal_119[iVar0]++;
					}
				}
				else if (iLocal_119[iVar0] == 5)
				{
					if (!iLocal_174[iVar0] == iLocal_178)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_174[iVar0], false))
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_174[iVar0], -1, false);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								iVar14 = TASK::GET_SCRIPT_TASK_STATUS(iVar1, joaat("SCRIPT_TASK_PERFORM_SEQUENCE"));
								if (iVar14 == 7)
								{
									fVar7 = ENTITY::GET_ENTITY_SPEED(iLocal_174[iVar0]);
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
						if (!bLocal_53 && !bLocal_66)
						{
							if (iLocal_118[iVar0] > 0)
							{
								VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_118[iVar0], &cLocal_155);
							}
						}
						if (!bLocal_43)
						{
							if (!bLocal_71)
							{
								__LIB_15__::func_906(iLocal_174[iVar0]);
							}
						}
						else if (ENTITY::DOES_ENTITY_EXIST(iLocal_174[iVar0]))
						{
							VEHICLE::DELETE_VEHICLE(&(iLocal_174[iVar0]));
						}
					}
					iLocal_123 = (iLocal_123 - 1);
					iLocal_119[iVar0] = 99;
				}
				if (!bVar12)
				{
					iLocal_128 = iVar0;
					bVar12 = true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		func_388();
	}
}

void func_402(int iParam0)//Position - 0x37677
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		func_390(iParam0);
		VEHICLE::SET_PLAYBACK_TO_USE_AI(iParam0, 786603);
	}
}

int func_406(int iParam0)//Position - 0x377DA
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (bLocal_67)
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

int func_407(var uParam0, int iParam1, bool bParam2)//Position - 0x37838
{
	int iVar0;
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0, false))
	{
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(*uParam0, -1, false))
		{
			if (iParam1 == 2)
			{
				iVar0 = PED::CREATE_PED_INSIDE_VEHICLE(*uParam0, 6, __LIB_15__::func_907(), -1, false, false);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, iLocal_164);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_15__::func_907());
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
				iVar0 = PED::CREATE_PED_INSIDE_VEHICLE(*uParam0, 4, func_396(), -1, false, false);
				if (bLocal_73)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_396());
				}
			}
			if (bParam2)
			{
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iVar0, true);
				PED::SET_PED_SUFFERS_CRITICAL_HITS(iVar0, false);
				PED::SET_PED_CONFIG_FLAG(iVar0, 32, false);
			}
			if (bLocal_74)
			{
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 8192, true);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 65536, true);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 2, false);
				VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(*uParam0, true);
			}
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
			__LIB_15__::func_893(iVar0);
			bLocal_72 = true;
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_409(int iParam0)//Position - 0x37946
{
	int iVar0;
	int iVar1;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 12);
	if (iLocal_169 >= -1 && iLocal_170 >= -1)
	{
		while (iVar0 == iLocal_169 || iVar0 == iLocal_170)
		{
			iVar0++;
		}
	}
	else if (iLocal_169 >= -1)
	{
		if (iVar0 == iLocal_169)
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

void func_410(struct<3> Param0, struct<3> Param1, float fParam2)//Position - 0x37ABF
{
	bool bVar0;
	int iVar1;
	bVar0 = true;
	if (!bLocal_54)
	{
		if (!func_411(Param0, Param1, fParam2, 200f))
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

int func_411(struct<3> Param0, struct<3> Param1, float fParam2, float fParam3)//Position - 0x37B32
{
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		if (!bLocal_54)
		{
			if (!iLocal_41)
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

float func_412(int iParam0)//Position - 0x37B79
{
	float fVar0;
	VEHICLE::REQUEST_VEHICLE_RECORDING(iParam0, &cLocal_155);
	while (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam0, &cLocal_155))
	{
		SYSTEM::WAIT(0);
	}
	fVar0 = VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iParam0, &cLocal_155);
	VEHICLE::REMOVE_VEHICLE_RECORDING(iParam0, &cLocal_155);
	return fVar0;
}

void func_414(int iParam0)//Position - 0x37C2F
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
		iVar0 = iLocal_127;
		while (iVar0 < 15)
		{
			switch (iLocal_121[iVar0])
			{
				case 0:
					if (!iLocal_166[iVar0] == 0)
					{
						if (ENTITY::IS_ENTITY_AT_COORD(iParam0, Local_140[iVar0 /*3*/], fLocal_94, fLocal_94, fLocal_94, false, true, 0))
						{
							iLocal_129++;
							iLocal_121[iVar0]++;
						}
					}
					else
					{
						iLocal_121[iVar0] = 99;
					}
					break;
				case 1:
					if (6 > iLocal_124)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_173[iVar0]))
						{
							STREAMING::REQUEST_MODEL(iLocal_166[iVar0]);
							if (STREAMING::HAS_MODEL_LOADED(iLocal_166[iVar0]))
							{
								if ((iLocal_41 || iLocal_55) || (!bLocal_72 && !func_411(Local_140[iVar0 /*3*/], Var1, 5f, fLocal_107)))
								{
									if (bLocal_51)
									{
										func_410(Local_140[iVar0 /*3*/], Var1, fLocal_100);
									}
									iLocal_173[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_166[iVar0], Local_140[iVar0 /*3*/], 0f, false, false, false);
									if (iLocal_166[iVar0] == joaat("polmav"))
									{
										VEHICLE::SET_VEHICLE_LIVERY(iLocal_173[iVar0], 0);
									}
									ENTITY::SET_ENTITY_QUATERNION(iLocal_173[iVar0], fLocal_90[iVar0], fLocal_91[iVar0], fLocal_92[iVar0], fLocal_93[iVar0]);
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_166[iVar0]);
									if (VEHICLE::IS_VEHICLE_MODEL(iLocal_173[iVar0], __LIB_15__::func_908()))
									{
										VEHICLE::SET_VEHICLE_SIREN(iLocal_173[iVar0], true);
										if (!VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_166[iVar0]))
										{
											AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_173[iVar0], true);
										}
									}
									if (VEHICLE::IS_VEHICLE_MODEL(iLocal_173[iVar0], __LIB_15__::func_909()))
									{
										VEHICLE::SET_VEHICLE_COLOURS(iLocal_173[iVar0], 0, 0);
									}
									ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_173[iVar0], true);
									iLocal_129 = (iLocal_129 - 1);
									iLocal_124++;
									iLocal_121[iVar0]++;
									bLocal_72 = true;
								}
							}
						}
						else
						{
							iLocal_129 = (iLocal_129 - 1);
							iLocal_124++;
							iLocal_121[iVar0]++;
						}
					}
					break;
				case 2:
					if (!bVar3)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_173[iVar0], false))
						{
							Var2 = { ENTITY::GET_ENTITY_COORDS(iLocal_173[iVar0], true) };
						}
						if (fLocal_108 == 0f || SYSTEM::VDIST2(Var1, Var2) < (fLocal_108 * fLocal_108))
						{
							if (!__LIB_15__::func_939(iLocal_173[iVar0], iParam0, 0))
							{
								if (!bLocal_43)
								{
									__LIB_15__::func_906(iLocal_173[iVar0]);
								}
								else
								{
									VEHICLE::DELETE_VEHICLE(&(iLocal_173[iVar0]));
								}
								iLocal_124 = (iLocal_124 - 1);
								iLocal_121[iVar0] = 99;
								bVar3 = true;
							}
						}
					}
					break;
			}
			if (iLocal_121[iVar0] != 99)
			{
				if (!bVar4)
				{
					iLocal_127 = iVar0;
					bVar4 = true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		func_391();
	}
}

void func_415(int iParam0, float fParam1, int iParam2)//Position - 0x37F26
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
			fLocal_96 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iParam0);
		}
		iVar16 = -1;
		bVar17 = false;
		bVar18 = false;
		iVar0 = iLocal_126;
		while (iVar0 < 100 && !bVar17)
		{
			if (iLocal_116[iVar0] != 99)
			{
				if (iLocal_116[iVar0] == 0)
				{
					if (iLocal_115[iVar0] > 0 && iLocal_165[iVar0] != 0)
					{
						if (!iLocal_41)
						{
							if (fLocal_96 < (fLocal_79[iVar0] + 20000f))
							{
								if (fLocal_96 >= (fLocal_79[iVar0] - (7000f * fParam1)))
								{
									if (__LIB_15__::func_894(iLocal_165[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_117[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_165[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_117[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_117[iVar0]), 1);
									iLocal_131++;
									iLocal_116[iVar0]++;
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
								func_417(iVar0, 1090519040);
							}
						}
						else
						{
							fVar9 = (fLocal_96 - fLocal_79[iVar0]);
							if (fVar9 >= 0f)
							{
								if (fVar9 < func_412(iLocal_115[iVar0]))
								{
									if (__LIB_15__::func_894(iLocal_165[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_117[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_165[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_117[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_117[iVar0]), 1);
									iLocal_131++;
									iLocal_116[iVar0]++;
								}
								else
								{
									func_417(iVar0, 1090519040);
								}
							}
						}
					}
					else
					{
						func_417(iVar0, 1090519040);
					}
				}
				else if (iLocal_116[iVar0] == 1)
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_115[iVar0], &cLocal_155);
					bVar11 = false;
					if (BitTest(iLocal_117[iVar0], 0))
					{
						STREAMING::REQUEST_MODEL(__LIB_15__::func_907());
						if (STREAMING::HAS_MODEL_LOADED(__LIB_15__::func_907()))
						{
							bVar11 = true;
						}
					}
					else if (!bLocal_68 && ((!BitTest(iLocal_117[iVar0], 2) && bVar13) || (BitTest(iLocal_117[iVar0], 2) && bVar14)))
					{
						bVar11 = true;
					}
					else
					{
						STREAMING::REQUEST_MODEL(func_396());
						bVar11 = STREAMING::HAS_MODEL_LOADED(func_396());
					}
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_171[iVar0]))
					{
						STREAMING::REQUEST_MODEL(iLocal_165[iVar0]);
						if ((STREAMING::HAS_MODEL_LOADED(iLocal_165[iVar0]) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_115[iVar0], &cLocal_155)) && bVar11)
						{
							if (fLocal_96 >= (fLocal_79[iVar0] - (fLocal_109 * fParam1)))
							{
								if ((iLocal_55 || iParam2) || (!bLocal_72 && !func_411(Local_139[iVar0 /*3*/], Var8, 5f, fLocal_107)))
								{
									if (bLocal_51)
									{
										func_410(Local_139[iVar0 /*3*/], Var8, fLocal_100);
									}
									iLocal_171[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_165[iVar0], Local_139[iVar0 /*3*/], 0f, false, false, false);
									if (iLocal_165[iVar0] == joaat("polmav"))
									{
										VEHICLE::SET_VEHICLE_LIVERY(iLocal_171[iVar0], 0);
									}
									if (uLocal_64 && !BitTest(iLocal_117[iVar0], 0))
									{
										func_409(iLocal_171[iVar0]);
									}
									ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_171[iVar0], Local_139[iVar0 /*3*/], false, false, true);
									ENTITY::SET_ENTITY_QUATERNION(iLocal_171[iVar0], fLocal_75[iVar0], fLocal_76[iVar0], fLocal_77[iVar0], fLocal_78[iVar0]);
									if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_165[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_165[iVar0]))
									{
										VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_171[iVar0], 5f);
									}
									if (BitTest(iLocal_117[iVar0], 3))
									{
										ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_171[iVar0], true);
									}
									if (!BitTest(iLocal_117[iVar0], 0))
									{
										VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_171[iVar0], true, true, false);
										if (CLOCK::GET_CLOCK_HOURS() > 19 || CLOCK::GET_CLOCK_HOURS() < 7)
										{
											VEHICLE::SET_VEHICLE_LIGHTS(iLocal_171[iVar0], 3);
										}
									}
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_171[iVar0], true);
									ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_171[iVar0], true);
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_165[iVar0]);
									iLocal_131 = (iLocal_131 - 1);
									iLocal_116[iVar0]++;
									bLocal_72 = true;
								}
								else if (fLocal_96 > fLocal_79[iVar0])
								{
									iLocal_131 = (iLocal_131 - 1);
									func_417(iVar0, 1090519040);
								}
							}
						}
					}
				}
				else if (iLocal_116[iVar0] == 2)
				{
					bVar11 = false;
					if (((iVar3 < 8 && (iVar0 > iLocal_137 || iLocal_137 == 0)) || iLocal_55) || iParam2)
					{
						if (!BitTest(iLocal_117[iVar0], 1))
						{
							if (BitTest(iLocal_117[iVar0], 0))
							{
								STREAMING::REQUEST_MODEL(__LIB_15__::func_907());
								bVar11 = STREAMING::HAS_MODEL_LOADED(__LIB_15__::func_907());
								iVar15 = 2;
							}
							else if (!bLocal_68 && ((!BitTest(iLocal_117[iVar0], 2) && bVar13) || (BitTest(iLocal_117[iVar0], 2) && bVar14)))
							{
								bVar11 = true;
								iVar15 = 1;
							}
							else
							{
								STREAMING::REQUEST_MODEL(func_396());
								bVar11 = STREAMING::HAS_MODEL_LOADED(func_396());
								iVar15 = 0;
							}
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_171[iVar0], false))
							{
								if (!bLocal_72 && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_171[iVar0], -1, false))
								{
									if (bVar11)
									{
										if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_171[iVar0], true), Var8) < 10000f || iParam2) || iLocal_55)
										{
											func_407(&(iLocal_171[iVar0]), iVar15, 0);
											MISC::SET_BIT(&(iLocal_117[iVar0]), 1);
										}
									}
								}
							}
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_171[iVar0], false))
						{
							VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_115[iVar0], &cLocal_155);
							if (fLocal_96 >= fLocal_79[iVar0])
							{
								if (22 > iLocal_122)
								{
									fVar9 = (fLocal_96 - fLocal_79[iVar0]);
									if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_115[iVar0], &cLocal_155))
									{
										if (fVar9 < VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_115[iVar0], &cLocal_155))
										{
											Var6 = { ENTITY::GET_ENTITY_COORDS(iLocal_171[iVar0], true) };
											Var7 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_115[iVar0], fVar9, &cLocal_155) };
											if (!func_411(Var6, Var8, 5f, fLocal_107) && func_411(Var7, Var8, 5f, fLocal_107))
											{
												if (!BitTest(iLocal_117[iVar0], 1))
												{
													func_407(&(iLocal_171[iVar0]), iVar15, 0);
												}
												func_417(iVar0, 1090519040);
											}
											else if (((!bLocal_72 || BitTest(iLocal_117[iVar0], 1)) || iLocal_55) || iParam2)
											{
												if (func_400(&(iLocal_171[iVar0]), iLocal_115[iVar0], fVar9, 1, 0, 0, 1, bLocal_69))
												{
													if (!BitTest(iLocal_117[iVar0], 1))
													{
														func_407(&(iLocal_171[iVar0]), iVar15, 0);
													}
													ENTITY::SET_ENTITY_COLLISION(iLocal_171[iVar0], true, false);
													VEHICLE::SET_PLAYBACK_SPEED(iLocal_171[iVar0], fParam1);
													iLocal_122++;
													iLocal_116[iVar0]++;
												}
											}
										}
										else
										{
											if (!BitTest(iLocal_117[iVar0], 1))
											{
												func_407(&(iLocal_171[iVar0]), iVar15, 0);
											}
											func_417(iVar0, 1090519040);
										}
									}
									else if (fVar9 > VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_115[iVar0], &cLocal_155))
									{
										if (!BitTest(iLocal_117[iVar0], 1))
										{
											func_407(&(iLocal_171[iVar0]), iVar15, 0);
										}
										func_417(iVar0, 1090519040);
									}
								}
								else
								{
									if (!BitTest(iLocal_117[iVar0], 1))
									{
										func_407(&(iLocal_171[iVar0]), iVar15, 0);
									}
									func_417(iVar0, 1090519040);
								}
							}
							else if (iLocal_52 && !bLocal_60)
							{
								if (!BitTest(iLocal_117[iVar0], 1))
								{
									func_407(&(iLocal_171[iVar0]), iVar15, 0);
								}
								func_417(iVar0, 1090519040);
							}
						}
						else
						{
							if (!BitTest(iLocal_117[iVar0], 1))
							{
								func_407(&(iLocal_171[iVar0]), iVar15, 0);
							}
							func_417(iVar0, 1090519040);
						}
						iVar3++;
						iLocal_137 = iVar0;
					}
				}
				else if (iLocal_116[iVar0] == 3)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_171[iVar0], false))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_171[iVar0]))
						{
							iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_171[iVar0], -1, false);
							if (!PED::IS_PED_INJURED(iVar4))
							{
								if (bVar12)
								{
									bVar18 = false;
									if (!bLocal_50)
									{
										if ((!bLocal_45 && !iLocal_42) && func_406(iLocal_171[iVar0]))
										{
											if (iVar2 < 3 && (iVar0 > iLocal_136 || iLocal_136 == 0))
											{
												if (!ENTITY::IS_ENTITY_DEAD(iVar5, false))
												{
													bVar11 = false;
													if (!__LIB_15__::func_924(iLocal_171[iVar0], iVar5) || __LIB_15__::func_939(iVar5, iLocal_171[iVar0], 0))
													{
														bVar18 = true;
													}
												}
												iLocal_136 = iVar0;
												iVar2++;
											}
										}
										else if (((!bLocal_65 && !BitTest(iLocal_117[iVar0], 4)) && iVar2 < 3) && (iVar0 > iLocal_136 || iLocal_136 == 0))
										{
											Var19 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam0, ENTITY::GET_ENTITY_COORDS(iLocal_171[iVar0], true)) };
											if (Var19.f_1 < 0f)
											{
												if (MISC::ABSF(Var19.f_1) > MISC::ABSF(Var19.f_0))
												{
													bVar18 = true;
												}
											}
											iVar2++;
											iLocal_136 = iVar0;
										}
									}
									if (bVar18)
									{
										func_402(iLocal_171[iVar0]);
										iLocal_116[iVar0]++;
									}
									else
									{
										VEHICLE::SET_PLAYBACK_SPEED(iLocal_171[iVar0], fParam1);
									}
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_171[iVar0]);
							}
						}
						else
						{
							iLocal_116[iVar0]++;
						}
					}
					else
					{
						iLocal_116[iVar0]++;
					}
				}
				else if (iLocal_116[iVar0] == 4)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_171[iVar0], false))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_171[iVar0]))
						{
							iLocal_116[iVar0]++;
						}
						else
						{
							iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_171[iVar0], -1, false);
							if (!PED::IS_PED_INJURED(iVar4))
							{
								VEHICLE::SET_PLAYBACK_SPEED(iLocal_171[iVar0], fParam1);
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_171[iVar0]);
							}
							if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_115[iVar0], &cLocal_155))
							{
								if (fLocal_96 > (fLocal_79[iVar0] + VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_115[iVar0], &cLocal_155)))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_171[iVar0]);
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_171[iVar0]);
							}
						}
					}
					else
					{
						iLocal_116[iVar0]++;
					}
				}
				else if (iLocal_116[iVar0] == 5)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_171[iVar0], false))
					{
						fVar10 = ENTITY::GET_ENTITY_SPEED(iLocal_171[iVar0]);
					}
					iLocal_122 = (iLocal_122 - 1);
					func_417(iVar0, fVar10);
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
			iLocal_126 = iVar16;
		}
		if (iVar2 < 3)
		{
			iLocal_136 = 0;
		}
		if (iVar3 < 8)
		{
			iLocal_137 = 0;
		}
	}
	else
	{
		func_392();
	}
}

void func_417(int iParam0, float fParam1)//Position - 0x38AC5
{
	int iVar0;
	if (!iLocal_165[iParam0] == 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_165[iParam0]);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_171[iParam0], false))
	{
		ENTITY::SET_ENTITY_COLLISION(iLocal_171[iParam0], true, false);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_171[iParam0], false);
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_171[iParam0], -1, false);
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
			TASK::TASK_VEHICLE_MISSION(iVar0, iLocal_171[iParam0], 0, 1, fParam1, 786603, 5f, 5f, true);
			PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 8192, true);
			if (bLocal_74)
			{
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 65536, true);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 2, false);
			}
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 6, false);
			TASK::SET_DRIVE_TASK_CRUISE_SPEED(iVar0, fParam1);
		}
	}
	if (!bLocal_43)
	{
		if (!bLocal_71)
		{
			__LIB_15__::func_893(iVar0);
			__LIB_15__::func_906(iLocal_171[iParam0]);
		}
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			PED::DELETE_PED(&iVar0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_171[iParam0]))
		{
			VEHICLE::DELETE_VEHICLE(&(iLocal_171[iParam0]));
		}
	}
	if (!bLocal_53 && !bLocal_66)
	{
		if (iLocal_115[iParam0] > 0)
		{
			VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_115[iParam0], &cLocal_155);
		}
	}
	iLocal_116[iParam0] = 99;
}

void func_418(int iParam0, float fParam1, float fParam2)//Position - 0x38C20
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
			func_410(Var1, Var4, fVar5);
		}
	}
}

void func_419(int iParam0, float fParam1)//Position - 0x38CA3
{
	if (!bLocal_54)
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

void func_420(int iParam0, float fParam1)//Position - 0x38CF1
{
	if (!bLocal_54)
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

void func_421(int iParam0, float fParam1)//Position - 0x38D3F
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
	{
		fVar1 = (fLocal_110 + 2000f);
		fVar2 = (fLocal_111 + 2000f);
		bVar4 = false;
		if (fVar1 < (fParam1 + 25000f))
		{
			iVar0 = VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iParam0);
			if (fVar1 <= VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID(iVar0))
			{
				if (iLocal_132 == 0)
				{
					Local_151 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fLocal_110) };
					iLocal_132++;
				}
				else if (iLocal_132 == 1)
				{
					Local_152 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fVar1) };
					iLocal_132++;
				}
				else if (!bLocal_72)
				{
					if (Local_151.f_0 > Local_152.f_0)
					{
						fVar3 = Local_151.f_0;
						Local_151.f_0 = Local_152.f_0;
						Local_152.f_0 = fVar3;
					}
					if (Local_151.f_1 > Local_152.f_1)
					{
						fVar3 = Local_151.f_1;
						Local_151.f_1 = Local_152.f_1;
						Local_152.f_1 = fVar3;
					}
					if (Local_151.f_2 > Local_152.f_2)
					{
						fVar3 = Local_151.f_2;
						Local_151.f_2 = Local_152.f_2;
						Local_152.f_2 = fVar3;
					}
					Local_151 = { Local_151 - Vector(fLocal_114, fLocal_114, fLocal_114) };
					Local_152 = { Local_152 + Vector(fLocal_114, fLocal_114, fLocal_114) };
					PATHFIND::SET_ROADS_IN_AREA(Local_151, Local_152, false, false);
					fLocal_110 = fVar1;
					iLocal_132 = 0;
				}
			}
		}
		if (fVar2 < (fParam1 - 8000f))
		{
			iVar0 = VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iParam0);
			if (iLocal_135 == 0)
			{
				Local_153 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fLocal_111) };
				iLocal_135++;
			}
			else if (iLocal_135 == 1)
			{
				Local_154 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fVar2) };
				iLocal_135++;
			}
			else if (!bLocal_72 && !bVar4)
			{
				if (Local_153.f_0 > Local_154.f_0)
				{
					fVar3 = Local_153.f_0;
					Local_153.f_0 = Local_154.f_0;
					Local_154.f_0 = fVar3;
				}
				if (Local_153.f_1 > Local_154.f_1)
				{
					fVar3 = Local_153.f_1;
					Local_153.f_1 = Local_154.f_1;
					Local_154.f_1 = fVar3;
				}
				if (Local_153.f_2 > Local_154.f_2)
				{
					fVar3 = Local_153.f_2;
					Local_153.f_2 = Local_154.f_2;
					Local_154.f_2 = fVar3;
				}
				Local_153 = { Local_153 - Vector(fLocal_114, fLocal_114, fLocal_114) };
				Local_154 = { Local_154 + Vector(fLocal_114, fLocal_114, fLocal_114) };
				PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Local_153, Local_154, 1);
				fLocal_111 = fVar2;
				iLocal_135 = 0;
			}
		}
	}
}

int func_424()//Position - 0x3907A
{
	if (__LIB_0__::func_121(iLocal_759))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_759))
		{
			ENTITY::SET_ENTITY_VISIBLE(iLocal_759, false, false);
			if (CAM::DOES_CAM_EXIST(iLocal_665))
			{
				CAM::DESTROY_CAM(iLocal_665, false);
			}
			func_255(0);
			iLocal_674 = 0;
			if (CAM::DOES_CAM_EXIST(iLocal_663))
			{
				CAM::SET_CAM_COORD(iLocal_663, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_759, Local_463));
				CAM::POINT_CAM_AT_COORD(iLocal_663, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_759, 0f, -5f, 0.6f));
				CAM::SET_CAM_FOV(iLocal_663, 45f);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			}
			if (__LIB_0__::func_695(uLocal_758[0]))
			{
				VEHICLE::LOWER_CONVERTIBLE_ROOF(uLocal_758[0], true);
			}
			func_14(0);
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), false, false);
			bLocal_730 = true;
			return 1;
			if (bLocal_668)
			{
			}
		}
	}
	WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 257 /*INPUT_ATTACK2*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 272 /*INPUT_LOOK_UP*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 273 /*INPUT_LOOK_DOWN*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 270 /*INPUT_LOOK_LEFT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 271 /*INPUT_LOOK_RIGHT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 281 /*INPUT_VEH_MOVE_DOWN*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 281 /*INPUT_VEH_MOVE_DOWN*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 81 /*INPUT_VEH_NEXT_RADIO*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 82 /*INPUT_VEH_PREV_RADIO*/, true);
	func_367();
	return 0;
}

void func_425()//Position - 0x391B0
{
	Local_141[0 /*3*/] = { -61.5962f, 337.5525f, 111.1293f };
	fLocal_84[0] = -0.0046f;
	fLocal_85[0] = -0.0506f;
	fLocal_86[0] = 0.98f;
	fLocal_87[0] = 0.1923f;
	iLocal_118[0] = 101;
	fLocal_88[0] = 59.4f;
	fLocal_89[0] = 1f;
	iLocal_167[0] = joaat("rapidgt2");
	iLocal_174[0] = uLocal_758[0];
	Local_141[1 /*3*/] = { -62.3594f, 322.6118f, 109.7076f };
	fLocal_84[1] = -0.0241f;
	fLocal_85[1] = -0.0644f;
	fLocal_86[1] = 0.9804f;
	fLocal_87[1] = 0.1845f;
	iLocal_118[1] = 102;
	fLocal_88[1] = 1961.6f;
	fLocal_89[1] = 1f;
	iLocal_167[1] = joaat("landstalker");
	iLocal_174[1] = uLocal_758[1];
	Local_141[2 /*3*/] = { -68.0978f, 309.2655f, 107.7569f };
	fLocal_84[2] = -0.0147f;
	fLocal_85[2] = -0.07f;
	fLocal_86[2] = 0.9755f;
	fLocal_87[2] = 0.2082f;
	iLocal_118[2] = 103;
	fLocal_88[2] = 5416.196f;
	fLocal_89[2] = 1f;
	iLocal_167[2] = joaat("landstalker");
	iLocal_174[2] = uLocal_758[2];
	Local_141[3 /*3*/] = { 654.7409f, 37.7855f, 85.6549f };
	fLocal_84[3] = 0.0329f;
	fLocal_85[3] = 0.0239f;
	fLocal_86[3] = 0.5549f;
	fLocal_87[3] = 0.8309f;
	iLocal_118[3] = 125;
	fLocal_88[3] = 44719.992f;
	fLocal_89[3] = 1f;
	iLocal_167[3] = joaat("taxi");
	Local_141[4 /*3*/] = { 435.1409f, -57.207f, 74.137f };
	fLocal_84[4] = -0.0062f;
	fLocal_85[4] = -0.0807f;
	fLocal_86[4] = 0.956f;
	fLocal_87[4] = 0.2818f;
	iLocal_118[4] = 150;
	fLocal_88[4] = 60000f;
	fLocal_89[4] = 1f;
	iLocal_167[4] = joaat("taxi");
	Local_141[5 /*3*/] = { 371.1497f, -244.7208f, 53.7699f };
	fLocal_84[5] = 0.0223f;
	fLocal_85[5] = -0.0044f;
	fLocal_86[5] = -0.1527f;
	fLocal_87[5] = 0.988f;
	iLocal_118[5] = 151;
	fLocal_88[5] = 60000f;
	fLocal_89[5] = 1f;
	iLocal_167[5] = joaat("fq2");
	Local_141[6 /*3*/] = { 443.9521f, -32.4616f, 78.8341f };
	fLocal_84[6] = -0.0301f;
	fLocal_85[6] = -0.0745f;
	fLocal_86[6] = 0.9603f;
	fLocal_87[6] = 0.2672f;
	iLocal_118[6] = 152;
	fLocal_88[6] = 60000f;
	fLocal_89[6] = 1f;
	iLocal_167[6] = joaat("mule");
	Local_141[7 /*3*/] = { 540.6125f, -93.1815f, 65.6238f };
	fLocal_84[7] = 0.1322f;
	fLocal_85[7] = -0.1121f;
	fLocal_86[7] = 0.8787f;
	fLocal_87[7] = 0.4447f;
	iLocal_118[7] = 120;
	fLocal_88[7] = 60610.3f;
	fLocal_89[7] = 1f;
	iLocal_167[7] = joaat("faggio2");
	Local_141[8 /*3*/] = { 243.451f, -202.3356f, 53.8657f };
	fLocal_84[8] = 0.0356f;
	fLocal_85[8] = 0.0122f;
	fLocal_86[8] = -0.1815f;
	fLocal_87[8] = 0.9827f;
	iLocal_118[8] = 130;
	fLocal_88[8] = 70000f;
	fLocal_89[8] = 1f;
	iLocal_167[8] = joaat("surfer2");
}

void func_426()//Position - 0x3958C
{
	Local_139[0 /*3*/] = { 25.6387f, 266.4447f, 109.3633f };
	fLocal_75[0] = -0.0002f;
	fLocal_76[0] = -0.0004f;
	fLocal_77[0] = 0.6374f;
	fLocal_78[0] = 0.7705f;
	iLocal_115[0] = 2;
	fLocal_79[0] = 3498f;
	iLocal_165[0] = joaat("felon");
	Local_139[1 /*3*/] = { 53.3845f, 259.2507f, 109.0939f };
	fLocal_75[1] = 0.0028f;
	fLocal_76[1] = 0.0014f;
	fLocal_77[1] = 0.5719f;
	fLocal_78[1] = 0.8203f;
	iLocal_115[1] = 4;
	fLocal_79[1] = 5346f;
	iLocal_165[1] = 0;
	Local_139[2 /*3*/] = { 54.699f, 249.2125f, 109.5105f };
	fLocal_75[2] = -0.0053f;
	fLocal_76[2] = -0.0038f;
	fLocal_77[2] = 0.5759f;
	fLocal_78[2] = 0.8175f;
	iLocal_115[2] = 5;
	fLocal_79[2] = 5478f;
	iLocal_165[2] = joaat("rocoto");
	Local_139[3 /*3*/] = { 61.6959f, 252.0383f, 109.0729f };
	fLocal_75[3] = 0.0073f;
	fLocal_76[3] = 0.0053f;
	fLocal_77[3] = 0.577f;
	fLocal_78[3] = 0.8167f;
	iLocal_115[3] = 6;
	fLocal_79[3] = 5742f;
	iLocal_165[3] = joaat("infernus");
	Local_139[4 /*3*/] = { 69.9301f, 249.1113f, 108.8189f };
	fLocal_75[4] = 0.0138f;
	fLocal_76[4] = 0.0098f;
	fLocal_77[4] = 0.576f;
	fLocal_78[4] = 0.8173f;
	iLocal_115[4] = 7;
	fLocal_79[4] = 6336f;
	iLocal_165[4] = 0;
	Local_139[5 /*3*/] = { 69.6693f, 243.7877f, 108.6399f };
	fLocal_75[5] = 0.0136f;
	fLocal_76[5] = 0.01f;
	fLocal_77[5] = 0.5746f;
	fLocal_78[5] = 0.8183f;
	iLocal_115[5] = 8;
	fLocal_79[5] = 6402f;
	iLocal_165[5] = joaat("taxi");
	Local_139[6 /*3*/] = { 237.0279f, 346.2748f, 105.4462f };
	fLocal_75[6] = 0.002f;
	fLocal_76[6] = -0.0029f;
	fLocal_77[6] = 0.8184f;
	fLocal_78[6] = -0.5746f;
	iLocal_115[6] = 9;
	fLocal_79[6] = 16434f;
	iLocal_165[6] = joaat("rocoto");
	Local_139[7 /*3*/] = { 347.382f, 320.5341f, 103.8621f };
	fLocal_75[7] = 0.0011f;
	fLocal_76[7] = 0.0012f;
	fLocal_77[7] = 0.6188f;
	fLocal_78[7] = 0.7855f;
	iLocal_115[7] = 10;
	fLocal_79[7] = 20328f;
	iLocal_165[7] = joaat("bus");
	Local_139[8 /*3*/] = { 424.6772f, 305.5897f, 102.4288f };
	fLocal_75[8] = -0.0055f;
	fLocal_76[8] = 0.023f;
	fLocal_77[8] = 0.4f;
	fLocal_78[8] = 0.9162f;
	iLocal_115[8] = 11;
	fLocal_79[8] = 23958f;
	iLocal_165[8] = joaat("penumbra");
	Local_139[9 /*3*/] = { 423.819f, 290.4329f, 102.8873f };
	fLocal_75[9] = -0.0257f;
	fLocal_76[9] = -0.0017f;
	fLocal_77[9] = 0.805f;
	fLocal_78[9] = -0.5927f;
	iLocal_115[9] = 12;
	fLocal_79[9] = 24024f;
	iLocal_165[9] = joaat("rocoto");
	Local_139[10 /*3*/] = { 418.2715f, 279.2705f, 102.5196f };
	fLocal_75[10] = 0.0001f;
	fLocal_76[10] = 0f;
	fLocal_77[10] = -0.1905f;
	fLocal_78[10] = 0.9817f;
	iLocal_115[10] = 13;
	fLocal_79[10] = 24486f;
	iLocal_165[10] = joaat("futo");
	iLocal_171[10] = iLocal_361;
	Local_139[11 /*3*/] = { 436.6275f, 293.4052f, 102.9222f };
	fLocal_75[11] = 0.0057f;
	fLocal_76[11] = 0.0037f;
	fLocal_77[11] = 0.5851f;
	fLocal_78[11] = 0.8109f;
	iLocal_115[11] = 14;
	fLocal_79[11] = 24552f;
	iLocal_165[11] = joaat("rocoto");
	Local_139[12 /*3*/] = { 568.5327f, 245.2966f, 102.6008f };
	fLocal_75[12] = -0.0038f;
	fLocal_76[12] = 0.0103f;
	fLocal_77[12] = 0.6916f;
	fLocal_78[12] = 0.7222f;
	iLocal_115[12] = 15;
	fLocal_79[12] = 30294f;
	iLocal_165[12] = joaat("futo");
	Local_139[13 /*3*/] = { 563.3254f, 226.8358f, 102.5454f };
	fLocal_75[13] = 0.0315f;
	fLocal_76[13] = -0.0056f;
	fLocal_77[13] = -0.1653f;
	fLocal_78[13] = 0.9857f;
	iLocal_115[13] = 16;
	fLocal_79[13] = 30360f;
	iLocal_165[13] = joaat("taxi");
	Local_139[14 /*3*/] = { 585.7031f, 250.9805f, 102.9546f };
	fLocal_75[14] = 0.0005f;
	fLocal_76[14] = -0.0193f;
	fLocal_77[14] = 0.3598f;
	fLocal_78[14] = 0.9328f;
	iLocal_115[14] = 17;
	fLocal_79[14] = 30888f;
	iLocal_165[14] = joaat("rocoto");
	Local_139[15 /*3*/] = { 641.6404f, 224.289f, 97.99f };
	fLocal_75[15] = 0.0522f;
	fLocal_76[15] = 0.038f;
	fLocal_77[15] = 0.6146f;
	fLocal_78[15] = 0.7862f;
	iLocal_115[15] = 18;
	fLocal_79[15] = 33264f;
	iLocal_165[15] = joaat("penumbra");
	Local_139[16 /*3*/] = { 651.6318f, 221.3143f, 96.7827f };
	fLocal_75[16] = 0.0519f;
	fLocal_76[16] = 0.0379f;
	fLocal_77[16] = 0.5888f;
	fLocal_78[16] = 0.8057f;
	iLocal_115[16] = 19;
	fLocal_79[16] = 33726f;
	iLocal_165[16] = joaat("taxi");
	Local_139[17 /*3*/] = { 686.7967f, 203.5349f, 92.1762f };
	fLocal_75[17] = 0.0316f;
	fLocal_76[17] = -0.0462f;
	fLocal_77[17] = 0.8192f;
	fLocal_78[17] = -0.5708f;
	iLocal_115[17] = 20;
	fLocal_79[17] = 35244f;
	iLocal_165[17] = joaat("bus");
	Local_139[18 /*3*/] = { 558.3951f, 44.7597f, 94.2669f };
	fLocal_75[18] = -0.0174f;
	fLocal_76[18] = -0.0487f;
	fLocal_77[18] = 0.7204f;
	fLocal_78[18] = -0.6916f;
	iLocal_115[18] = 110;
	fLocal_79[18] = 44000f;
	iLocal_165[18] = joaat("bus");
	Local_139[19 /*3*/] = { 648.9051f, 39.3727f, 86.1631f };
	fLocal_75[19] = 0.0453f;
	fLocal_76[19] = 0.0236f;
	fLocal_77[19] = 0.5662f;
	fLocal_78[19] = 0.8227f;
	iLocal_115[19] = 111;
	fLocal_79[19] = 44000f;
	iLocal_165[19] = 0;
	Local_139[20 /*3*/] = { 657.6167f, 23.9452f, 84.8269f };
	fLocal_75[20] = 0.0184f;
	fLocal_76[20] = -0.0273f;
	fLocal_77[20] = 0.8442f;
	fLocal_78[20] = -0.5349f;
	iLocal_115[20] = 21;
	fLocal_79[20] = 46596f;
	iLocal_165[20] = joaat("stratum");
	Local_139[21 /*3*/] = { 702.3966f, 16.4575f, 83.7715f };
	fLocal_75[21] = 0.0095f;
	fLocal_76[21] = 0.0053f;
	fLocal_77[21] = 0.4853f;
	fLocal_78[21] = 0.8743f;
	iLocal_115[21] = 22;
	fLocal_79[21] = 50292f;
	iLocal_165[21] = 0;
	Local_139[22 /*3*/] = { 685.0597f, -109.3147f, 74.1404f };
	fLocal_75[22] = -0.0189f;
	fLocal_76[22] = 0.0245f;
	fLocal_77[22] = 0.4845f;
	fLocal_78[22] = 0.8742f;
	iLocal_115[22] = 114;
	fLocal_79[22] = 50610.3f;
	iLocal_165[22] = joaat("rocoto");
	Local_139[23 /*3*/] = { 702.9434f, 9.8203f, 83.7822f };
	fLocal_75[23] = 0.0098f;
	fLocal_76[23] = 0.0046f;
	fLocal_77[23] = 0.4938f;
	fLocal_78[23] = 0.8695f;
	iLocal_115[23] = 23;
	fLocal_79[23] = 51612f;
	iLocal_165[23] = 0;
	Local_139[24 /*3*/] = { 611.2632f, -68.2602f, 72.7379f };
	fLocal_75[24] = 0.0478f;
	fLocal_76[24] = -0.0234f;
	fLocal_77[24] = -0.5413f;
	fLocal_78[24] = 0.8391f;
	iLocal_115[24] = 24;
	fLocal_79[24] = 55506f;
	iLocal_165[24] = joaat("felon");
	Local_139[25 /*3*/] = { 558.8278f, -89.5658f, 67.1954f };
	fLocal_75[25] = 0.0763f;
	fLocal_76[25] = 0.0202f;
	fLocal_77[25] = -0.57f;
	fLocal_78[25] = 0.8179f;
	iLocal_115[25] = 112;
	fLocal_79[25] = 55610.3f;
	iLocal_165[25] = joaat("taxi");
	Local_139[26 /*3*/] = { 525.6269f, -124.3243f, 60.7692f };
	fLocal_75[26] = 0.0799f;
	fLocal_76[26] = 0.0173f;
	fLocal_77[26] = -0.2839f;
	fLocal_78[26] = 0.9554f;
	iLocal_115[26] = 113;
	fLocal_79[26] = 55610.3f;
	iLocal_165[26] = joaat("bus");
	Local_139[27 /*3*/] = { 546.617f, -83.762f, 67.0976f };
	fLocal_75[27] = 0.1902f;
	fLocal_76[27] = -0.1282f;
	fLocal_77[27] = 0.8789f;
	fLocal_78[27] = 0.4182f;
	iLocal_115[27] = 25;
	fLocal_79[27] = 58542f;
	iLocal_165[27] = joaat("taxi");
	Local_139[28 /*3*/] = { 512.8046f, -125.0119f, 60.1147f };
	fLocal_75[28] = 0.0016f;
	fLocal_76[28] = -0.0689f;
	fLocal_77[28] = 0.9713f;
	fLocal_78[28] = 0.2277f;
	iLocal_115[28] = 26;
	fLocal_79[28] = 60588f;
	iLocal_165[28] = 0;
	Local_139[29 /*3*/] = { 321.9392f, -109.2699f, 67.8426f };
	fLocal_75[29] = 0.0084f;
	fLocal_76[29] = -0.0199f;
	fLocal_77[29] = 0.8069f;
	fLocal_78[29] = -0.5903f;
	iLocal_115[29] = 27;
	fLocal_79[29] = 69234f;
	iLocal_165[29] = joaat("carbonizzare");
	Local_139[30 /*3*/] = { 278.0286f, -73.8002f, 69.533f };
	fLocal_75[30] = 0.0043f;
	fLocal_76[30] = 0.0017f;
	fLocal_77[30] = 0.9776f;
	fLocal_78[30] = 0.2105f;
	iLocal_115[30] = 28;
	fLocal_79[30] = 71346f;
	iLocal_165[30] = joaat("penumbra");
	Local_139[31 /*3*/] = { 276.3335f, -111.556f, 69.3416f };
	fLocal_75[31] = 0.023f;
	fLocal_76[31] = -0.0041f;
	fLocal_77[31] = -0.1834f;
	fLocal_78[31] = 0.9828f;
	iLocal_115[31] = 29;
	fLocal_79[31] = 71676f;
	iLocal_165[31] = joaat("futo");
	Local_139[32 /*3*/] = { 254.9427f, -76.6293f, 69.4554f };
	fLocal_75[32] = -0.003f;
	fLocal_76[32] = 0.0042f;
	fLocal_77[32] = 0.8139f;
	fLocal_78[32] = -0.581f;
	iLocal_115[32] = 30;
	fLocal_79[32] = 72204f;
	iLocal_165[32] = joaat("penumbra");
	Local_139[33 /*3*/] = { 236.3161f, -186.5169f, 54.7485f };
	fLocal_75[33] = -0.0102f;
	fLocal_76[33] = -0.0531f;
	fLocal_77[33] = 0.9836f;
	fLocal_78[33] = 0.172f;
	iLocal_115[33] = 31;
	fLocal_79[33] = 76230f;
	iLocal_165[33] = joaat("futo");
	Local_139[34 /*3*/] = { 229.294f, -204.6162f, 53.4777f };
	fLocal_75[34] = 0.0007f;
	fLocal_76[34] = -0.0002f;
	fLocal_77[34] = 0.9141f;
	fLocal_78[34] = 0.4055f;
	iLocal_115[34] = 32;
	fLocal_79[34] = 76230f;
	iLocal_165[34] = joaat("penumbra");
	Local_139[35 /*3*/] = { 234.9658f, -223.4058f, 53.6191f };
	fLocal_75[35] = 0.0056f;
	fLocal_76[35] = 0.0012f;
	fLocal_77[35] = 0.5698f;
	fLocal_78[35] = 0.8218f;
	iLocal_115[35] = 34;
	fLocal_79[35] = 77352f;
	iLocal_165[35] = joaat("taxi");
	Local_139[36 /*3*/] = { 221.0836f, -222.9086f, 54.1788f };
	fLocal_75[36] = -0.0031f;
	fLocal_76[36] = 0.0061f;
	fLocal_77[36] = 0.8252f;
	fLocal_78[36] = -0.5647f;
	iLocal_115[36] = 35;
	fLocal_79[36] = 77682f;
	iLocal_165[36] = joaat("mule");
	Local_139[37 /*3*/] = { 220.7465f, -228.1144f, 53.4656f };
	fLocal_75[37] = -0.0019f;
	fLocal_76[37] = 0.003f;
	fLocal_77[37] = 0.8178f;
	fLocal_78[37] = -0.5754f;
	iLocal_115[37] = 36;
	fLocal_79[37] = 79134f;
	iLocal_165[37] = joaat("penumbra");
	Local_139[38 /*3*/] = { 203.5953f, -342.6908f, 43.634f };
	fLocal_75[38] = 0.002f;
	fLocal_76[38] = 0.0006f;
	fLocal_77[38] = 0.5637f;
	fLocal_78[38] = 0.826f;
	iLocal_115[38] = 37;
	fLocal_79[38] = 82632f;
	iLocal_165[38] = joaat("taxi");
	Local_139[39 /*3*/] = { 176.7323f, -365.8312f, 43.0022f };
	fLocal_75[39] = 0.0245f;
	fLocal_76[39] = -0.0051f;
	fLocal_77[39] = -0.202f;
	fLocal_78[39] = 0.9791f;
	iLocal_115[39] = 38;
	fLocal_79[39] = 84018f;
	iLocal_165[39] = joaat("dubsta");
	Local_139[40 /*3*/] = { 168.5778f, -336.4375f, 43.5013f };
	fLocal_75[40] = -0.0022f;
	fLocal_76[40] = 0.0015f;
	fLocal_77[40] = 0.8002f;
	fLocal_78[40] = -0.5997f;
	iLocal_115[40] = 39;
	fLocal_79[40] = 84084f;
	iLocal_165[40] = joaat("penumbra");
	Local_139[41 /*3*/] = { 4.1466f, -372.4675f, 39.302f };
	fLocal_75[41] = 0.0469f;
	fLocal_76[41] = 0.0063f;
	fLocal_77[41] = -0.188f;
	fLocal_78[41] = 0.981f;
	iLocal_115[41] = 40;
	fLocal_79[41] = 93060f;
	iLocal_165[41] = joaat("taxi");
	Local_139[42 /*3*/] = { 14.6536f, -491.7607f, 33.9844f };
	fLocal_75[42] = -0.001f;
	fLocal_76[42] = -0.0049f;
	fLocal_77[42] = 0.7513f;
	fLocal_78[42] = 0.6599f;
	iLocal_115[42] = 41;
	fLocal_79[42] = 96624f;
	iLocal_165[42] = joaat("bus");
	Local_139[43 /*3*/] = { -10.2838f, -420.3103f, 39.1597f };
	fLocal_75[43] = -0.0141f;
	fLocal_76[43] = 0.0241f;
	fLocal_77[43] = -0.144f;
	fLocal_78[43] = 0.9892f;
	iLocal_115[43] = 42;
	fLocal_79[43] = 97350f;
	iLocal_165[43] = joaat("tornado3");
	Local_139[44 /*3*/] = { -14.9425f, -417.0332f, 39.2908f };
	fLocal_75[44] = -0.0119f;
	fLocal_76[44] = 0.0229f;
	fLocal_77[44] = -0.1418f;
	fLocal_78[44] = 0.9896f;
	iLocal_115[44] = 43;
	fLocal_79[44] = 97746f;
	iLocal_165[44] = joaat("tornado3");
}

void func_427(char* sParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x3A733
{
	struct<3> Var0;
	StringCopy(&cLocal_155, sParam0, 64);
	bLocal_51 = true;
	iLocal_56 = 0;
	iLocal_122 = 0;
	iLocal_123 = 0;
	iLocal_124 = 0;
	iLocal_125 = iParam1;
	iLocal_126 = 0;
	iLocal_127 = 0;
	iLocal_128 = 0;
	iLocal_132 = 0;
	iLocal_135 = 0;
	iLocal_133 = -1;
	iLocal_134 = -1;
	iLocal_136 = 0;
	iLocal_137 = 0;
	fLocal_110 = 0f;
	fLocal_111 = 0f;
	fLocal_96 = 0f;
	iLocal_57 = 0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		Local_143.f_0 = (Var0.f_0 - 100f);
		Local_143.f_1 = (Var0.f_1 - 100f);
		Local_143.f_2 = (Var0.f_2 - 100f);
		Local_144.f_0 = (Var0.f_0 + 100f);
		Local_144.f_1 = (Var0.f_1 + 100f);
		Local_144.f_2 = (Var0.f_2 + 100f);
		PATHFIND::SET_ROADS_IN_AREA(Local_143, Local_144, false, false);
		if (bParam2)
		{
			MISC::CLEAR_AREA_OF_VEHICLES(Var0, 500f, false, false, false, false, false, false, 0);
		}
	}
	PED::ADD_RELATIONSHIP_GROUP("rgh_traffic", &iLocal_164);
	__LIB_15__::func_905();
	if (bParam3)
	{
		__LIB_14__::func_804(1);
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), false);
		PED::SET_CREATE_RANDOM_COPS(false);
	}
	func_383();
}

void func_428()//Position - 0x3A857
{
	if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("PAPARAZZO_02_CHASE"))
	{
		if (__LIB_0__::func_695(uLocal_758[0]))
		{
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(uLocal_758[0], "PAPARAZZO_02_POPPY_CARS", 0f);
		}
		if (__LIB_0__::func_695(uLocal_758[1]))
		{
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(uLocal_758[1], "PAPARAZZO_02_CHASE_JUSTIN_CAR", 0f);
		}
		if (__LIB_0__::func_695(uLocal_758[2]))
		{
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(uLocal_758[2], "PAPARAZZO_02_CHASE_SECURITY_CAR", 0f);
		}
		AUDIO::START_AUDIO_SCENE("PAPARAZZO_02_CHASE");
	}
}

void func_429()//Position - 0x3A8CD
{
	__LIB_0__::func_0(&(Local_483[0 /*5*/]));
	__LIB_0__::func_0(&(Local_483[1 /*5*/]));
	__LIB_0__::func_0(&(iLocal_355[0]));
	__LIB_0__::func_0(&(iLocal_355[1]));
	__LIB_0__::func_0(&(iLocal_355[2]));
	__LIB_0__::func_0(&(iLocal_355[3]));
	__LIB_0__::func_0(&(iLocal_355[4]));
	__LIB_0__::func_0(&(iLocal_355[5]));
}

void func_489()//Position - 0x40A5D
{
	int iVar0;
	if (bLocal_284 == 1)
	{
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
		HUD::THEFEED_HIDE_THIS_FRAME();
		__LIB_1__::func_33(0);
	}
	WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 157 /*INPUT_SELECT_WEAPON_UNARMED*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 158 /*INPUT_SELECT_WEAPON_MELEE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 159 /*INPUT_SELECT_WEAPON_HANDGUN*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 160 /*INPUT_SELECT_WEAPON_SHOTGUN*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 161 /*INPUT_SELECT_WEAPON_SMG*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 162 /*INPUT_SELECT_WEAPON_AUTO_RIFLE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 163 /*INPUT_SELECT_WEAPON_SNIPER*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 164 /*INPUT_SELECT_WEAPON_HEAVY*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 165 /*INPUT_SELECT_WEAPON_SPECIAL*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 14 /*INPUT_WEAPON_WHEEL_NEXT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 15 /*INPUT_WEAPON_WHEEL_PREV*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 257 /*INPUT_ATTACK2*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 142 /*INPUT_MELEE_ATTACK_ALTERNATE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 141 /*INPUT_MELEE_ATTACK_HEAVY*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 140 /*INPUT_MELEE_ATTACK_LIGHT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 263 /*INPUT_MELEE_ATTACK1*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 264 /*INPUT_MELEE_ATTACK2*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 44 /*INPUT_COVER*/, true);
	if (!CAM::IS_SPHERE_VISIBLE(-75.608f, 300.6798f, 105.5206f, 30f))
	{
		MISC::CLEAR_AREA_OF_PEDS(-75.608f, 300.6798f, 105.5206f, 30f, 0);
	}
	OBJECT::SET_LOCKED_UNSTREAMED_IN_DOOR_OF_TYPE(joaat("prop_ss1_14_garage_door"), -62.22f, 352.75f, 113.01f, true, 0f, 0f, 0f);
	__LIB_0__::func_631(Local_480.f_0, &uLocal_416, -1, 0, 1, 0, -1082130432, 0, -1, -1, 1, 0);
	__LIB_0__::func_631(Local_481.f_0, &uLocal_424, -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0);
	__LIB_0__::func_631(Local_482.f_0, &uLocal_432, -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0);
	PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0.3f);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_475, false);
	__LIB_1__::func_33(0);
	if (iLocal_305 == 0)
	{
		if ((PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 30 /*INPUT_MOVE_LR*/)) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 31 /*INPUT_MOVE_UD*/))
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			iLocal_305 = 1;
		}
	}
	if (bLocal_284 == 0)
	{
		func_258();
	}
	if (bLocal_284 == 0)
	{
		PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 44 /*INPUT_COVER*/, true);
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		}
	}
	else
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 44 /*INPUT_COVER*/, true);
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
		}
	}
	if (!AUDIO::HAS_SOUND_FINISHED(iLocal_371))
	{
		AUDIO::STOP_SOUND(iLocal_371);
	}
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_691, PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()), iLocal_691);
	MISC::CLEAR_AREA_OF_PEDS(-47.8788f, 353.6657f, 112.0601f, 20f, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_352))
	{
		if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(iLocal_352))
		{
			ENTITY::DETACH_ENTITY(iLocal_352, true, true);
		}
	}
	PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 223, true);
	if (__LIB_0__::func_121(iLocal_759))
	{
		VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(iLocal_759);
	}
	switch (iLocal_693)
	{
		case 0:
			if (func_248(7, bLocal_703))
			{
				if (__LIB_0__::func_692(iLocal_475))
				{
					if (func_508(iLocal_475, Local_749))
					{
						if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_475))
						{
							PED::SET_PED_TO_LOAD_COVER(iLocal_475, false);
							PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, "DEFAULT_ACTION");
							__LIB_14__::func_874(2, "GET TO THE CAR", 0, 0, 0, 1);
							VEHICLE::REQUEST_VEHICLE_ASSET(joaat("fq2"), 3);
							ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(PLAYER::PLAYER_PED_ID(), false);
							HUD::DISPLAY_HUD(true);
							HUD::DISPLAY_RADAR(true);
							PED::RESET_PED_WEAPON_MOVEMENT_CLIPSET(iLocal_475);
							__LIB_0__::func_122(&iLocal_350, 0);
							__LIB_0__::func_122(&iLocal_351, 0);
							__LIB_0__::func_122(&iLocal_352, 0);
							__LIB_0__::func_131();
							TASK::TASK_CLEAR_LOOK_AT(iLocal_475);
							TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_475, -1, 0, 2);
							iLocal_246 = MISC::GET_GAME_TIMER();
							iLocal_252 = 0;
							iLocal_294 = 0;
							iLocal_273 = 0;
							iLocal_274 = 0;
							bLocal_295 = false;
							iLocal_248 = 0;
							iLocal_253 = 0;
							iLocal_251 = 0;
							MISC::CLEAR_AREA_OF_VEHICLES(-64.1056f, 325.3524f, 109.3568f, 100f, false, false, false, false, false, false, 0);
							PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), true, -1, 0);
							RECORDING::REPLAY_RECORD_BACK_FOR_TIME(8f, 5f, 0);
							iLocal_693 = 1;
						}
					}
				}
			}
			break;
		case 1:
			if (__LIB_0__::func_695(uLocal_758[0]))
			{
				if (!ENTITY::IS_ENTITY_AT_ENTITY(Local_480.f_0, uLocal_758[0], 5f, 5f, 2.5f, false, true, 0))
				{
					if (iLocal_273 == 0)
					{
						if (__LIB_0__::func_692(Local_480.f_0))
						{
							if (__LIB_0__::func_687(Local_480.f_0, PLAYER::PLAYER_PED_ID(), 2f, 1))
							{
								if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_220) || PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_221))
								{
									TASK::CLEAR_PED_TASKS(Local_480.f_0);
								}
								ENTITY::SET_ENTITY_COLLISION(Local_480.f_0, true, false);
							}
							if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_220))
							{
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_220) >= 0.99f)
								{
									iLocal_273 = 1;
								}
							}
							if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_221))
							{
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_221) >= 0.99f)
								{
									iLocal_273 = 1;
								}
							}
							if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_220) && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_221))
							{
								TASK::TASK_COMBAT_PED(Local_481.f_0, PLAYER::PLAYER_PED_ID(), 0, 16);
								iLocal_274 = 1;
								iLocal_273 = 1;
							}
						}
					}
					else if (!iLocal_294)
					{
						if (__LIB_0__::func_692(Local_480.f_0))
						{
							if (!__LIB_0__::func_687(Local_480.f_0, PLAYER::PLAYER_PED_ID(), 20f, 1))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_480.f_0, joaat("SCRIPT_TASK_GO_TO_ENTITY")) != 1)
								{
									if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_480.f_0, "RANDOM@CAR_THIEF@waiting_ig_4", "waiting", 3))
									{
										TASK::STOP_ANIM_TASK(Local_480.f_0, "RANDOM@CAR_THIEF@waiting_ig_4", "waiting", -4f);
									}
									TASK::TASK_GO_TO_ENTITY(Local_480.f_0, PLAYER::PLAYER_PED_ID(), -1, 8f, 2f, 2f, 0);
								}
							}
							else
							{
								if (!PED::IS_PED_HEADTRACKING_PED(Local_480.f_0, PLAYER::PLAYER_PED_ID()))
								{
									TASK::TASK_LOOK_AT_ENTITY(Local_480.f_0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
								}
								if (!PED::IS_PED_FACING_PED(Local_480.f_0, PLAYER::PLAYER_PED_ID(), 30f))
								{
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_480.f_0, PLAYER::PLAYER_PED_ID(), 0);
								}
								else
								{
									func_506();
								}
							}
						}
					}
				}
			}
			if (iLocal_274 == 0)
			{
				if (__LIB_0__::func_692(Local_481.f_0))
				{
					if (__LIB_0__::func_687(Local_481.f_0, PLAYER::PLAYER_PED_ID(), 3f, 1))
					{
						TASK::TASK_COMBAT_PED(Local_481.f_0, PLAYER::PLAYER_PED_ID(), 0, 16);
						iLocal_274 = 1;
					}
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_220))
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_220) >= 0.97f)
						{
							TASK::TASK_COMBAT_PED(Local_481.f_0, PLAYER::PLAYER_PED_ID(), 0, 16);
							iLocal_274 = 1;
						}
					}
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_221))
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_221) >= 0.97f)
						{
							TASK::TASK_COMBAT_PED(Local_481.f_0, PLAYER::PLAYER_PED_ID(), 0, 16);
							iLocal_274 = 1;
						}
					}
					if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_220) && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_221))
					{
						TASK::TASK_COMBAT_PED(Local_481.f_0, PLAYER::PLAYER_PED_ID(), 0, 16);
						iLocal_274 = 1;
					}
				}
			}
			if (bLocal_727)
			{
				func_505();
			}
			else
			{
				if (bLocal_295 == 0)
				{
					func_504();
				}
				func_503();
				if (iLocal_274 == 1)
				{
					func_502();
				}
				func_501();
				func_500();
				if (func_499())
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_759, 4);
					iLocal_725 = 0;
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_353))
					{
						if (ENTITY::IS_ENTITY_ATTACHED(iLocal_353))
						{
							ENTITY::DETACH_ENTITY(iLocal_353, true, true);
						}
						OBJECT::DELETE_OBJECT(&iLocal_353);
					}
					iLocal_693 = 2;
				}
				func_495();
				if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -50.615166f, 329.1848f, 111.50788f, -65.104324f, 297.99844f, 115.67342f, 11.35f, false, true, 0))
				{
					if (iLocal_279 == 0)
					{
						if (__LIB_2__::func_859(&uLocal_489, cLocal_751, "PAP2_ESCAPE", 7, 0, 0, 0))
						{
							iLocal_279 = 1;
						}
					}
					else if (iLocal_280 == 0)
					{
						if (__LIB_2__::func_859(&uLocal_489, cLocal_751, "PAP2_ESCAPEA", 7, 0, 0, 0))
						{
							iLocal_280 = 1;
							bLocal_710 = true;
						}
					}
				}
				if (iLocal_709 == 0)
				{
				}
				if (iLocal_253 < 2)
				{
					func_494();
				}
				if ((!PED::IS_PED_RAGDOLL(iLocal_475) && !TASK::IS_PED_GETTING_UP(iLocal_475)) && !bLocal_295)
				{
					if (iLocal_253 > 2)
					{
						func_492();
					}
					if (iLocal_253 < 2)
					{
						func_490();
					}
				}
			}
			if (bLocal_295)
			{
				if (!__LIB_0__::func_75())
				{
					func_354(16);
				}
			}
			if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
			{
				func_354(18);
			}
			break;
		case 2:
			if (ENTITY::IS_ENTITY_DEAD(Local_482.f_0, false))
			{
				bLocal_311 = true;
			}
			else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_482.f_0, PLAYER::PLAYER_PED_ID(), false))
			{
				bLocal_311 = true;
			}
			func_338(0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			TASK::REMOVE_WAYPOINT_RECORDING(&Local_749);
			STREAMING::REMOVE_ANIM_DICT("rcmpaparazzo_2");
			iVar0 = 0;
			while (iVar0 <= 3)
			{
				__LIB_0__::func_123(&(Local_474[iVar0 /*8*/]));
				iVar0++;
			}
			break;
		case 3:
			__LIB_0__::func_325();
			HUD::CLEAR_PRINTS();
			func_249();
			TASK::TASK_CLEAR_LOOK_AT(iLocal_475);
			if (func_324(14, -81.45494f, 296.80762f, 107.02806f, -49.93427f))
			{
				if (CAM::DOES_CAM_EXIST(iLocal_663))
				{
					if (__LIB_0__::func_692(PLAYER::PLAYER_PED_ID()))
					{
						iLocal_228 = MISC::GET_GAME_TIMER();
					}
				}
			}
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(10f, 3f, 1);
			iLocal_693 = 2;
			break;
	}
}

void func_490()//Position - 0x4129C
{
	if (iLocal_745 < 3)
	{
		if (!__LIB_0__::func_75())
		{
			if (__LIB_0__::func_76(iLocal_475, iLocal_759, 1) >= 15f)
			{
				if (__LIB_2__::func_859(&uLocal_489, cLocal_751, "PAP2_BSH", 7, 0, 0, 0))
				{
					iLocal_745++;
				}
			}
		}
	}
}

void func_492()//Position - 0x41343
{
	int iVar0;
	int iVar1;
	struct<6> Var2;
	if (!__LIB_0__::func_501("PAP2_00", 0, 0) && !__LIB_0__::func_501("PAP2_06", 0, 0))
	{
		iVar0 = 0;
	}
	else
	{
		iVar0 = 1;
	}
	if (iLocal_716 == 0 && __LIB_0__::func_76(iLocal_475, iLocal_759, 1) < 4f)
	{
		iVar0 = 1;
	}
	if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_759, true))
	{
		iVar1 = MISC::GET_GAME_TIMER();
		if (__LIB_0__::func_692(iLocal_475))
		{
			if (bLocal_284 == 0)
			{
				if (iVar1 > iLocal_743 + 6000)
				{
					if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -50.615166f, 329.1848f, 111.50788f, -65.104324f, 297.99844f, 115.67342f, 11.35f, false, true, 0))
					{
						if (__LIB_0__::func_76(iLocal_475, iLocal_759, 1) < 15f)
						{
							if (__LIB_0__::func_75())
							{
								Var2 = { __LIB_0__::func_486() };
								if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var2))
								{
									if (MISC::ARE_STRINGS_EQUAL(&Var2, "PAP2_ESCCHAT"))
									{
										__LIB_0__::func_638();
									}
								}
							}
							if (__LIB_0__::func_76(iLocal_475, PLAYER::PLAYER_PED_ID(), 1) <= 60f)
							{
								if (!__LIB_0__::func_75())
								{
									if (__LIB_2__::func_859(&uLocal_489, cLocal_751, "PAP2_ESCCAR", 7, iVar0, 0, 0))
									{
										iLocal_743 = MISC::GET_GAME_TIMER();
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

void func_494()//Position - 0x4148D
{
	if (iLocal_253 < 3)
	{
		if (bLocal_710)
		{
			if (MISC::GET_GAME_TIMER() > iLocal_232 + 5000 && MISC::GET_GAME_TIMER() > iLocal_233 + 5000)
			{
				if (iLocal_754 < 3)
				{
					if (!__LIB_0__::func_75() && !__LIB_0__::func_501("PAP2_00", 0, 0))
					{
						if (__LIB_2__::func_859(&uLocal_489, cLocal_751, "PAP2_ESCCHAT", 6, 0, 0, 0))
						{
							iLocal_754++;
							iLocal_233 = MISC::GET_GAME_TIMER();
						}
					}
				}
			}
		}
	}
}

void func_495()//Position - 0x41505
{
	if (!iLocal_725)
	{
		if (func_28(iLocal_475, iLocal_759) && !func_28(PLAYER::PLAYER_PED_ID(), iLocal_759))
		{
			__LIB_0__::func_714(&iLocal_661);
			if (!HUD::DOES_BLIP_EXIST(iLocal_661))
			{
				iLocal_660 = __LIB_14__::func_866(iLocal_759, 1, 7);
			}
			HUD::SET_BLIP_AS_FRIENDLY(iLocal_660, true);
			TASK::TASK_LOOK_AT_ENTITY(iLocal_475, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
			if (!iLocal_716)
			{
				__LIB_0__::func_229("PAP2_00", 7500, 0);
				iLocal_716 = 1;
			}
			iLocal_725 = 1;
			iLocal_235 = MISC::GET_GAME_TIMER();
		}
	}
	else if (!__LIB_0__::func_501("PAP2_00", 0, 0))
	{
		if (MISC::GET_GAME_TIMER() > iLocal_235 + 12000)
		{
			if (!__LIB_0__::func_75())
			{
				if ((func_28(iLocal_475, iLocal_759) && bLocal_284 == 0) && !func_28(PLAYER::PLAYER_PED_ID(), iLocal_759))
				{
					func_496();
				}
			}
		}
	}
}

void func_496()//Position - 0x415DC
{
	if (!iLocal_717)
	{
		if (__LIB_0__::func_76(iLocal_475, PLAYER::PLAYER_PED_ID(), 1) <= 40f && bLocal_284 == 0)
		{
			if (!__LIB_0__::func_75())
			{
				if (__LIB_14__::func_535(&uLocal_489, cLocal_751, "PAP2_GETCAR", "PAP2_GETCAR_2", 7, 0, 0))
				{
					iLocal_717 = 1;
					if (__LIB_0__::func_692(iLocal_475))
					{
						TASK::TASK_VEHICLE_DRIVE_WANDER(iLocal_475, iLocal_759, 150f, 262144);
						bLocal_295 = true;
					}
				}
			}
		}
		else if (!__LIB_0__::func_75())
		{
			if (bLocal_284 == 0)
			{
				iLocal_717 = 1;
				if (__LIB_0__::func_692(iLocal_475))
				{
					TASK::TASK_VEHICLE_DRIVE_WANDER(iLocal_475, iLocal_759, 150f, 262144);
					bLocal_295 = true;
				}
			}
		}
	}
}

int func_499()//Position - 0x416D6
{
	if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_759, false) && PED::IS_PED_IN_VEHICLE(iLocal_475, iLocal_759, false))
	{
		return 1;
	}
	return 0;
}

void func_500()//Position - 0x41702
{
	if (!func_28(iLocal_475, iLocal_759))
	{
		if (__LIB_0__::func_692(iLocal_475) && __LIB_0__::func_121(iLocal_759))
		{
			if (iLocal_253 != 3)
			{
				PED::SET_PED_CAN_RAGDOLL(iLocal_475, false);
			}
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_475))
			{
				if (iLocal_253 == 0)
				{
					if (TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_475) > 31)
					{
						iLocal_254 = MISC::GET_GAME_TIMER();
						iLocal_253 = 1;
					}
				}
				else if (iLocal_253 == 1)
				{
					if (MISC::GET_GAME_TIMER() > iLocal_254 + 2000 && ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_475, -67.82763f, 304.8669f, 104.54303f, -76.68293f, 308.60608f, 115.56219f, 14.75f, false, true, 0))
					{
						AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForRagdoll", true);
						iLocal_253 = 2;
					}
				}
				else if (iLocal_253 == 2)
				{
					if (!PED::IS_PED_RAGDOLL(iLocal_475))
					{
						iLocal_253 = 3;
					}
				}
				else if (iLocal_253 == 3)
				{
					if (TASK::IS_PED_GETTING_UP(iLocal_475) || ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(iLocal_475))
					{
						if (iLocal_297 == 0)
						{
							iLocal_297 = 1;
						}
					}
				}
				if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_475, iLocal_759, 20f, 20f, 2f, false, true, 0))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_475, joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_475, joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 0)
					{
						if (!PED::IS_PED_RAGDOLL(iLocal_475) && !TASK::IS_PED_GETTING_UP(iLocal_475))
						{
							TASK::WAYPOINT_PLAYBACK_PAUSE(iLocal_475, false, false);
							TASK::TASK_ENTER_VEHICLE(iLocal_475, iLocal_759, 20000, -1, 2f, 1, 0);
							AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForRagdoll", false);
							PED::SET_PED_CAN_RAGDOLL(iLocal_475, true);
							iLocal_253 = 3;
						}
					}
				}
				else if (iLocal_253 == 0)
				{
					if ((TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_475) == 29 && !__LIB_0__::func_687(iLocal_475, PLAYER::PLAYER_PED_ID(), 17f, 1)) && iLocal_252 < 150)
					{
						iLocal_252++;
						if (__LIB_0__::func_692(Local_482.f_0))
						{
							if (__LIB_0__::func_687(Local_482.f_0, iLocal_475, 10f, 1))
							{
								iLocal_252 = 600;
							}
						}
						if (!TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(iLocal_475))
						{
							TASK::WAYPOINT_PLAYBACK_PAUSE(iLocal_475, true, false);
						}
					}
					else if (TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(iLocal_475))
					{
						TASK::WAYPOINT_PLAYBACK_RESUME(iLocal_475, false, 31, 0);
						TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_475, 3f, false);
					}
				}
			}
			if (MISC::GET_GAME_TIMER() > iLocal_246 + 30000)
			{
				PED::SET_PED_CAN_RAGDOLL(iLocal_475, true);
				PED::SET_PED_INTO_VEHICLE(iLocal_475, iLocal_759, -1);
			}
		}
	}
}

void func_501()//Position - 0x41946
{
	if (!func_28(Local_482.f_0, uLocal_758[2]))
	{
		if (__LIB_0__::func_692(Local_482.f_0) && __LIB_0__::func_121(uLocal_758[2]))
		{
			if (bLocal_284)
			{
				if (bLocal_284 && !ENTITY::IS_ENTITY_AT_COORD(Local_482.f_0, -68.9113f, 314.4095f, 107.8141f, 7f, 7f, 7f, false, true, 0))
				{
					__LIB_14__::func_659(Local_482.f_0, -68.9113f, 314.4095f, 107.8141f, 0, 0, 1);
				}
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(Local_482.f_0, joaat("SCRIPT_TASK_COMBAT")) != 1)
			{
				TASK::TASK_COMBAT_PED(Local_482.f_0, PLAYER::PLAYER_PED_ID(), 0, 16);
				TASK::TASK_LOOK_AT_ENTITY(Local_482.f_0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
			}
		}
	}
}

void func_502()//Position - 0x419EF
{
	if (!func_28(Local_481.f_0, uLocal_758[1]))
	{
		if (__LIB_0__::func_692(Local_481.f_0) && __LIB_0__::func_121(uLocal_758[1]))
		{
			if (bLocal_284)
			{
				if (bLocal_284 && !ENTITY::IS_ENTITY_AT_COORD(Local_481.f_0, -63.2851f, 327.3911f, 109.581f, 7f, 7f, 7f, false, true, 0))
				{
					__LIB_14__::func_659(Local_481.f_0, -63.2851f, 327.3911f, 109.581f, 0, 0, 1);
				}
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(Local_481.f_0, joaat("SCRIPT_TASK_COMBAT")) != 1)
			{
				TASK::TASK_COMBAT_PED(Local_481.f_0, PLAYER::PLAYER_PED_ID(), 0, 16);
				TASK::TASK_LOOK_AT_ENTITY(Local_481.f_0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
			}
		}
	}
}

void func_503()//Position - 0x41A98
{
	if (!func_28(Local_480.f_0, uLocal_758[0]))
	{
		if (__LIB_0__::func_692(Local_480.f_0) && __LIB_0__::func_121(uLocal_758[0]))
		{
			if (!iLocal_294)
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(Local_480.f_0, uLocal_758[0], 5f, 5f, 2.5f, false, true, 0) || ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_759, 20f, 20f, 2f, false, true, 0))
				{
					iLocal_294 = 1;
				}
				if ((TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_475) && TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_475) > 24) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -43.12919f, 298.26468f, 111.39443f, -67.07028f, 306.12558f, 114.89873f, 9.25f, false, true, 0))
				{
					iLocal_294 = 1;
				}
			}
			else
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_480.f_0, "RANDOM@CAR_THIEF@waiting_ig_4", "waiting", 3))
				{
					TASK::STOP_ANIM_TASK(Local_480.f_0, "RANDOM@CAR_THIEF@waiting_ig_4", "waiting", -4f);
				}
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_480.f_0, joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1)
				{
					TASK::TASK_ENTER_VEHICLE(Local_480.f_0, uLocal_758[0], -1, -1, 2f, 1, 0);
				}
			}
		}
	}
}

void func_504()//Position - 0x41BB0
{
	if (__LIB_0__::func_692(PLAYER::PLAYER_PED_ID()) && __LIB_0__::func_121(iLocal_759))
	{
		if (__LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), iLocal_759, 12f, 1) && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1)
		{
			if (func_324(14, -81.45494f, 296.80762f, 107.02806f, -49.93427f))
			{
				if (CAM::DOES_CAM_EXIST(iLocal_663))
				{
					if (__LIB_0__::func_692(PLAYER::PLAYER_PED_ID()))
					{
					}
				}
			}
		}
		if ((bLocal_284 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1) && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 0)
		{
			TASK::TASK_ENTER_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_759, 20000, 1, 2f, 1, 0);
		}
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_759, 10f, 10f, 3f, false, true, 0))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1)
			{
				if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 23 /*INPUT_ENTER*/))
				{
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
					HUD::THEFEED_HIDE_THIS_FRAME();
					if (iLocal_255 != 3)
					{
						if (AUDIO::TRIGGER_MUSIC_EVENT("PAP2_CAR"))
						{
							iLocal_255 = 3;
						}
					}
					bLocal_284 = true;
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -78.24787f, 299.37558f, 109.26119f, -81.98504f, 289.75613f, 103.68964f, 26.25f, false, true, 0))
					{
						if (__LIB_0__::func_692(PLAYER::PLAYER_PED_ID()))
						{
							PED::RESET_PED_WEAPON_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID());
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_353))
						{
							if (ENTITY::IS_ENTITY_ATTACHED(iLocal_353))
							{
								ENTITY::DETACH_ENTITY(iLocal_353, true, true);
							}
							OBJECT::DELETE_OBJECT(&iLocal_353);
						}
					}
					if (CAM::DOES_CAM_EXIST(iLocal_663))
					{
						CAM::STOP_CAM_POINTING(iLocal_663);
						if (!CAM::DOES_CAM_EXIST(iLocal_665))
						{
							iLocal_665 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
						}
						else
						{
							CAM::STOP_CAM_POINTING(iLocal_665);
						}
						iLocal_664 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
						CAM::SET_CAM_PARAMS(iLocal_664, -74.7f, 297f, 106f, 8.7f, 0f, 52.9f, 34.5f, 0, 1, 1, 2);
						CAM::SET_CAM_PARAMS(iLocal_665, -76.2f, 295.9f, 106.1f, 6.3f, 0f, 38.8f, 34.5f, 0, 1, 1, 2);
						CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_665, iLocal_664, 8000, 0, 1);
						CAM::SET_CAM_ACTIVE(iLocal_664, true);
						CAM::SET_CAM_ACTIVE(iLocal_665, true);
						CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
						if (CAM::DOES_CAM_EXIST(iLocal_664))
						{
							CAM::SHAKE_CAM(iLocal_664, "HAND_SHAKE", 1f);
						}
						if (CAM::DOES_CAM_EXIST(iLocal_665))
						{
							CAM::SHAKE_CAM(iLocal_665, "HAND_SHAKE", 1f);
						}
						MISC::CLEAR_AREA_OF_VEHICLES(Local_460, 200f, false, false, false, false, false, false, 0);
						MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 200f, true, false, false, false);
						iLocal_230 = MISC::GET_GAME_TIMER();
						if (!func_28(Local_480.f_0, uLocal_758[0]))
						{
							__LIB_14__::func_659(Local_480.f_0, -46.3393f, 351.7322f, 112.5621f, 62.2187f, 0, 1);
							if (TASK::GET_SCRIPT_TASK_STATUS(Local_480.f_0, joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1)
							{
								TASK::TASK_ENTER_VEHICLE(Local_480.f_0, uLocal_758[0], -1, -1, 2f, 1, 0);
							}
						}
						TASK::TASK_ENTER_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_759, 20000, 1, 2f, 1, 0);
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 7.5f, 1);
					}
				}
			}
		}
		if (bLocal_284 == 1)
		{
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 257 /*INPUT_ATTACK2*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 272 /*INPUT_LOOK_UP*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 273 /*INPUT_LOOK_DOWN*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 270 /*INPUT_LOOK_LEFT*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 271 /*INPUT_LOOK_RIGHT*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 281 /*INPUT_VEH_MOVE_DOWN*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 281 /*INPUT_VEH_MOVE_DOWN*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 81 /*INPUT_VEH_NEXT_RADIO*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 82 /*INPUT_VEH_PREV_RADIO*/, true);
		}
	}
}

void func_505()//Position - 0x41F36
{
	if (!bLocal_711)
	{
		bLocal_711 = __LIB_2__::func_859(&uLocal_489, cLocal_751, "PAP2_FLEE", 9, 0, 0, 0);
	}
	else if (!__LIB_0__::func_75())
	{
		if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
		{
			func_354(5);
		}
		else
		{
			func_354(3);
		}
	}
}

void func_506()//Position - 0x41F80
{
	if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_220) && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_221))
	{
		if (iLocal_251 == 0)
		{
			STREAMING::REQUEST_ANIM_DICT("RANDOM@CAR_THIEF@waiting_ig_4");
			iLocal_251 = 1;
		}
		else if (iLocal_251 == 1)
		{
			if (STREAMING::HAS_ANIM_DICT_LOADED("RANDOM@CAR_THIEF@waiting_ig_4"))
			{
				iLocal_251 = 2;
				TASK::TASK_PLAY_ANIM(Local_480.f_0, "RANDOM@CAR_THIEF@waiting_ig_4", "waiting", 4f, -4f, -1, 32, 0f, false, false, false);
			}
		}
		else if (iLocal_251 == 2)
		{
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_480.f_0, "RANDOM@CAR_THIEF@waiting_ig_4", "waiting", 3))
			{
				TASK::TASK_PLAY_ANIM(Local_480.f_0, "RANDOM@CAR_THIEF@waiting_ig_4", "waiting", 4f, -4f, -1, 32, 0f, false, false, false);
			}
		}
	}
}

int func_508(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0x42033
{
	if (__LIB_0__::func_692(iParam0))
	{
		if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iParam0))
		{
			if (!MISC::IS_STRING_NULL(&uParam1))
			{
				if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(&uParam1))
				{
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iParam0, &uParam1, 0, 524, -1);
					return 1;
				}
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_510()//Position - 0x42268
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	__LIB_0__::func_646();
	STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1.8f);
	PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOUT(2 /*FRONTEND_CONTROL*/);
	func_258();
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_220))
	{
		fLocal_343 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_220);
		if (!iLocal_345)
		{
			if (__LIB_7__::func_691())
			{
				if (fLocal_343 > 0.872f)
				{
					GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, false);
					AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
					iLocal_345 = 1;
				}
			}
		}
		if (fLocal_343 > 0.835512f)
		{
			if (iLocal_255 != 2)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("PAP2_SPOTTED");
				iLocal_255 = 2;
			}
			iLocal_728 = 0;
		}
		if (fLocal_343 >= 0.97f)
		{
			if (__LIB_0__::func_692(Local_481.f_0))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_481.f_0, joaat("SCRIPT_TASK_COMBAT")) != 1)
				{
					TASK::TASK_COMBAT_PED(Local_481.f_0, PLAYER::PLAYER_PED_ID(), 0, 16);
					TASK::TASK_LOOK_AT_ENTITY(Local_481.f_0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				}
			}
			iLocal_721 = 1;
		}
		if (fLocal_343 >= 0.97262f)
		{
			iLocal_721 = 1;
		}
		if (fLocal_343 > fLocal_690)
		{
			iLocal_693 = 2;
		}
	}
	else if (iLocal_693 > 0)
	{
		if (MISC::GET_GAME_TIMER() > iLocal_232 + 6000)
		{
			__LIB_0__::func_467(" IS_SYNCHRONIZED_SCENE_RUNNING = FALSE! Something went wrong, probably the audio stream ");
			iLocal_693 = 2;
		}
	}
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_221))
	{
		if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_221) > fLocal_690)
		{
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(8f, 3f, 1);
			iLocal_693 = 2;
		}
	}
	func_261();
	if (iLocal_248 > 500)
	{
		if (!__LIB_0__::func_75())
		{
			if (iLocal_738 != 7)
			{
				if (__LIB_2__::func_859(&uLocal_489, cLocal_751, "PAP2_FAILFIL", 8, 0, 0, 0))
				{
					iLocal_296 = 1;
					iLocal_738 = 7;
				}
			}
		}
	}
	PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0.3f);
	if (!AUDIO::HAS_SOUND_FINISHED(iLocal_373))
	{
		AUDIO::STOP_SOUND(iLocal_373);
		__LIB_0__::func_467("TK************ STOP SEX SOUNDS ************");
	}
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	HUD::THEFEED_HIDE_THIS_FRAME();
	__LIB_1__::func_33(0);
	if (CAM::DOES_CAM_EXIST(iLocal_663))
	{
		fLocal_337 = CAM::GET_CAM_FOV(iLocal_663);
	}
	if (iLocal_693 != 2)
	{
		func_14(1);
	}
	switch (iLocal_693)
	{
		case 0:
			if (func_248(6, bLocal_703))
			{
				__LIB_0__::func_130();
				if (CAM::DOES_CAM_EXIST(iLocal_663))
				{
					CAM::STOP_CAM_POINTING(iLocal_663);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(PLAYER::PLAYER_PED_ID(), true);
				AUDIO::STOP_SOUND(iLocal_374);
				AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
				iLocal_375 = 1;
				func_519();
				iLocal_232 = MISC::GET_GAME_TIMER();
				iLocal_250 = MISC::GET_GAME_TIMER();
				fLocal_688 = -0.05f;
				fLocal_689 = -0.03f;
				iLocal_219 = 0;
				iLocal_263 = 0;
				__LIB_0__::func_467("TK************ INIT FILM POPPY ************TK");
				iLocal_256 = 0;
				if (__LIB_0__::func_692(iLocal_475))
				{
					__LIB_14__::func_659(iLocal_475, -37.2184f, 325.397f, 111.6958f, 242.3437f, 0, 1);
				}
				iLocal_345 = 0;
				iLocal_693 = 1;
			}
			break;
		case 1:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_220))
			{
				if (HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
				{
					if (iLocal_263 == 0)
					{
						if (fLocal_343 > 0.029383f)
						{
							HUD::FORCE_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS_LIST(1);
							__LIB_0__::func_229("PAP2_SEX1", 7500, 0);
							iLocal_263++;
						}
					}
					else if (iLocal_263 == 1)
					{
						if (fLocal_343 > 0.051792f)
						{
							HUD::FORCE_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS_LIST(1);
							__LIB_0__::func_229("PAP2_SEX2", 7500, 0);
							iLocal_263++;
						}
					}
					else if (iLocal_263 == 2)
					{
						if (fLocal_343 > 0.095256f)
						{
							HUD::FORCE_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS_LIST(1);
							__LIB_0__::func_229("PAP2_SEX3", 7500, 0);
							iLocal_263++;
						}
					}
					else if (iLocal_263 == 3)
					{
						if (fLocal_343 > 0.111642f)
						{
							HUD::FORCE_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS_LIST(1);
							__LIB_0__::func_229("PAP2_SEX4", 7500, 0);
							iLocal_263++;
						}
					}
					else if (iLocal_263 == 4)
					{
						if (fLocal_343 > 0.160527f)
						{
							HUD::FORCE_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS_LIST(1);
							__LIB_0__::func_229("PAP2_SEX5", 7500, 0);
							iLocal_263++;
						}
					}
					else if (iLocal_263 == 5)
					{
						if (fLocal_343 > 0.250271f)
						{
							HUD::FORCE_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS_LIST(1);
							__LIB_0__::func_229("PAP2_SEX6", 7500, 0);
							iLocal_263++;
						}
					}
					else if (iLocal_263 == 6)
					{
						if (fLocal_343 > 0.296955f)
						{
							HUD::FORCE_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS_LIST(1);
							__LIB_0__::func_229("PAP2_SEX7", 7500, 0);
							iLocal_263++;
						}
					}
					else if (iLocal_263 == 7)
					{
						if (fLocal_343 > 0.320319f)
						{
							HUD::FORCE_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS_LIST(1);
							__LIB_0__::func_229("PAP2_SEX8", 7500, 0);
							iLocal_263++;
						}
					}
					else if (iLocal_263 == 8)
					{
						if (fLocal_343 > 0.376536f)
						{
							HUD::FORCE_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS_LIST(1);
							__LIB_0__::func_229("PAP2_SEX9", 7500, 0);
							iLocal_263++;
						}
					}
					else if (iLocal_263 == 9)
					{
						if (fLocal_343 > 0.397816f)
						{
							HUD::FORCE_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS_LIST(1);
							__LIB_0__::func_229("PAP2_SEX10", 7500, 0);
							iLocal_263++;
						}
					}
					else if (iLocal_263 == 10)
					{
						if (fLocal_343 > 0.477816f)
						{
							HUD::FORCE_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS_LIST(1);
							__LIB_0__::func_229("PAP2_SEX11", 7500, 0);
							iLocal_263++;
						}
					}
					else if (iLocal_263 == 11)
					{
						if (fLocal_343 > 0.549232f)
						{
							HUD::FORCE_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS_LIST(1);
							__LIB_0__::func_229("PAP2_SEX12", 7500, 0);
							iLocal_263++;
						}
					}
					else if (iLocal_263 == 12)
					{
						if (fLocal_343 > 0.608102f)
						{
							HUD::FORCE_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS_LIST(1);
							__LIB_0__::func_229("PAP2_SEX13", 7500, 0);
							iLocal_263++;
						}
					}
					else if (iLocal_263 == 13)
					{
						if (fLocal_343 > 0.650271f)
						{
							HUD::FORCE_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS_LIST(1);
							__LIB_0__::func_229("PAP2_SEX14", 7500, 0);
							iLocal_263++;
						}
					}
					else if (iLocal_263 == 14)
					{
						if (fLocal_343 > 0.685452f)
						{
							HUD::FORCE_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS_LIST(1);
							__LIB_0__::func_229("PAP2_SEX15", 7500, 0);
							iLocal_263++;
						}
					}
					else if (iLocal_263 == 15)
					{
						if (fLocal_343 > 0.707621f)
						{
							HUD::FORCE_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS_LIST(1);
							__LIB_0__::func_229("PAP2_SEX16", 7500, 0);
							iLocal_263++;
						}
					}
					else if (iLocal_263 == 16)
					{
						if (fLocal_343 > 0.860467f)
						{
							HUD::FORCE_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS_LIST(1);
							__LIB_0__::func_229("PAP2_SEX17", 7500, 0);
							iLocal_263++;
						}
					}
				}
				if (fLocal_343 > 0.6f)
				{
					func_248(7, 0);
				}
			}
			if (!iLocal_728)
			{
				if (func_518(Local_480.f_0, 5f, 5f, 1.5f) && iLocal_692 != 11)
				{
					func_354(0);
				}
				if (MISC::GET_GAME_TIMER() > iLocal_250)
				{
					if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
					{
						__LIB_0__::func_84(800, 0);
					}
				}
				if (iLocal_256 == 0)
				{
					__LIB_0__::func_151("PAP2_HELP1", -1);
					iLocal_257 = MISC::GET_GAME_TIMER();
					iLocal_256 = 1;
				}
				else if (iLocal_256 == 1)
				{
					if (MISC::GET_GAME_TIMER() > iLocal_257 + 7000)
					{
						__LIB_0__::func_151("PAP2_HELP2", -1);
						iLocal_257 = MISC::GET_GAME_TIMER();
						iLocal_256 = 2;
					}
				}
				else if (iLocal_256 == 2)
				{
					if (MISC::GET_GAME_TIMER() > iLocal_257 + 7000)
					{
						if (Local_473.f_1 != 255)
						{
							__LIB_0__::func_151("PAP2_HELP3", -1);
							iLocal_256 = 3;
						}
						else
						{
							iLocal_256 = 3;
						}
					}
				}
				if (__LIB_0__::func_692(iLocal_475))
				{
					func_516();
					if (!PED::IS_PED_IN_COVER(iLocal_475, false))
					{
						if ((!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_475, "rcmpaparazzo_2", "idle_l_corner_a", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_475, "rcmpaparazzo_2", "idle_l_corner_b", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_475, "rcmpaparazzo_2", "idle_l_corner_c", 3))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_475, joaat("SCRIPT_TASK_PUT_PED_DIRECTLY_INTO_COVER")) != 1)
							{
								PED::SET_PED_TO_LOAD_COVER(iLocal_475, true);
								if (!TASK::DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS(-37.2396f, 325.3983f, 111.6961f))
								{
									iLocal_471 = TASK::ADD_COVER_POINT(-37.2396f, 325.3983f, 111.6961f, 156.696f, 0, 2, 2, false);
								}
								TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(iLocal_475, -37.2022f, 325.4253f, 111.6954f, -1, true, 0f, true, true, iLocal_471, false);
								PED::SET_PED_CAN_PEEK_IN_COVER(iLocal_475, true);
								PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_475, 34, true);
							}
						}
					}
					if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -32.75797f, 319.5059f, 111.49536f, -33.26295f, 318.43796f, 113.49536f, 1.5f, false, true, 0))
					{
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(32.2338f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-13.3076f, 1f);
					}
				}
				if (!iLocal_721)
				{
					func_362(Local_480.f_0, &bVar0, 0);
					if (bVar0)
					{
						func_515(&bVar1);
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_220) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_220) > 0.85f)
						{
							func_514();
							iLocal_721 = 1;
						}
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_220) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_220) > 0.82f)
						{
							fLocal_688 = (fLocal_688 + 0.00067f);
							if (fLocal_688 > 0f)
							{
								fLocal_688 = 0f;
							}
							fLocal_689 = (fLocal_689 + 0.00067f);
							if (fLocal_689 > 0f)
							{
								fLocal_689 = 0f;
							}
						}
						if (bVar1)
						{
							func_513();
						}
					}
					else
					{
						func_511();
					}
				}
				else
				{
					if (__LIB_0__::func_692(iLocal_475))
					{
						func_322(iLocal_475, 0);
					}
					if (MISC::GET_GAME_TIMER() > iLocal_224 + 8000)
					{
					}
					func_362(Local_480.f_0, &uVar2, 0);
					fLocal_688 = (fLocal_688 + 0.00067f);
					if (fLocal_688 > 0f)
					{
						fLocal_688 = 0f;
					}
					fLocal_689 = (fLocal_689 + 0.00067f);
					if (fLocal_689 > 0f)
					{
						fLocal_689 = 0f;
					}
					if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() > 0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_352))
						{
							if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(iLocal_352))
							{
								ENTITY::DETACH_ENTITY(iLocal_352, true, true);
							}
						}
					}
				}
			}
			else if (!__LIB_0__::func_75())
			{
				func_354(4);
			}
			break;
		case 2:
			if (__LIB_0__::func_692(Local_480.f_0))
			{
				PED::SET_PED_COMPONENT_VARIATION(Local_480.f_0, 4, 1, 0, 0);
			}
			if (__LIB_0__::func_692(Local_481.f_0))
			{
				PED::SET_PED_COMPONENT_VARIATION(Local_481.f_0, 4, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_481.f_0, 6, 0, 0, 0);
			}
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
			TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "rcmpaparazzo_2", "idle_d", 1000f, -4f, -1, 0, 0.739f, false, false, false);
			func_355(1);
			HUD::CLEAR_PRINTS();
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(10.7485f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-9.8457f, 1f);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			iLocal_755 = 0;
			HUD::CLEAR_HELP(true);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_352))
			{
				if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(iLocal_352))
				{
					ENTITY::DETACH_ENTITY(iLocal_352, true, true);
				}
			}
			func_338(0);
			break;
		case 3:
			iLocal_693 = 2;
			__LIB_0__::func_325();
			func_514();
			iLocal_721 = 1;
			break;
	}
}

void func_511()//Position - 0x42C47
{
	if (iLocal_674)
	{
		if (Local_473.f_1 < 200)
		{
			if (MISC::GET_GAME_TIMER() > (iLocal_229 + MISC::GET_RANDOM_INT_IN_RANGE(6000, 7000)))
			{
				if (iLocal_692 != 5)
				{
					func_512();
				}
				else
				{
					func_512();
				}
			}
		}
	}
	else if (iLocal_739 > 20 && !__LIB_0__::func_75())
	{
		if (!iLocal_715)
		{
			iLocal_715 = 1;
		}
		if (iLocal_738 < 7)
		{
			iLocal_738++;
			iLocal_229 = MISC::GET_GAME_TIMER();
		}
		func_512();
	}
	if (iLocal_738 >= 7)
	{
		iLocal_728 = 1;
	}
}

void func_512()//Position - 0x42CCC
{
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_220) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_220) > 0.108f)
	{
		if (!__LIB_0__::func_75())
		{
			if (iLocal_738 < 7)
			{
				if (__LIB_0__::func_692(iLocal_475))
				{
					if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_475))
					{
						if (__LIB_2__::func_859(&uLocal_489, cLocal_751, "PAP2_NOTME", 7, 1, 0, 0))
						{
							iLocal_738++;
							iLocal_229 = MISC::GET_GAME_TIMER();
							iLocal_234 = MISC::GET_GAME_TIMER();
						}
					}
					else
					{
						if (iLocal_219 == 3)
						{
							if (__LIB_14__::func_535(&uLocal_489, cLocal_751, "PAP2_BADCAM1", "PAP2_BADCAM1_4", 7, 1, 0))
							{
								iLocal_219 = 4;
							}
						}
						else if (iLocal_219 == 2)
						{
							if (__LIB_14__::func_535(&uLocal_489, cLocal_751, "PAP2_BADCAM1", "PAP2_BADCAM1_3", 7, 1, 0))
							{
								iLocal_219 = 3;
							}
						}
						else if (iLocal_219 == 1)
						{
							if (__LIB_14__::func_535(&uLocal_489, cLocal_751, "PAP2_BADCAM1", "PAP2_BADCAM1_2", 7, 1, 0))
							{
								iLocal_219 = 2;
							}
						}
						else if (iLocal_219 == 0)
						{
							if (__LIB_14__::func_535(&uLocal_489, cLocal_751, "PAP2_BADCAM1", "PAP2_BADCAM1_1", 7, 1, 0))
							{
								iLocal_219 = 1;
							}
						}
						iLocal_738++;
						iLocal_229 = MISC::GET_GAME_TIMER();
					}
				}
			}
		}
	}
}

void func_513()//Position - 0x42DEE
{
	if (iLocal_674)
	{
		if (Local_473.f_1 > 200)
		{
			iLocal_739++;
		}
	}
	else
	{
		iLocal_739++;
	}
}

void func_514()//Position - 0x42E19
{
	if (__LIB_0__::func_692(Local_480.f_0) && __LIB_0__::func_692(Local_481.f_0))
	{
		ENTITY::FREEZE_ENTITY_POSITION(Local_480.f_0, false);
		ENTITY::FREEZE_ENTITY_POSITION(Local_481.f_0, false);
		iLocal_224 = MISC::GET_GAME_TIMER();
	}
}

void func_515(var uParam0)//Position - 0x42E4E
{
	if (CAM::DOES_CAM_EXIST(iLocal_663))
	{
		if (CAM::GET_CAM_FOV(iLocal_663) > 13f)
		{
			if (MISC::GET_GAME_TIMER() > iLocal_232 + 10000 && MISC::GET_GAME_TIMER() > iLocal_234 + 10000)
			{
				if (__LIB_2__::func_859(&uLocal_489, cLocal_751, "PAP2_BADCAMA", 7, 1, 0, 0))
				{
					iLocal_234 = MISC::GET_GAME_TIMER();
				}
			}
			*uParam0 = 0;
		}
		else
		{
			*uParam0 = 1;
			iLocal_234 = MISC::GET_GAME_TIMER();
		}
	}
}

void func_516()//Position - 0x42EBD
{
	int iVar0;
	int iVar1;
	if (PED::IS_PED_IN_COVER(iLocal_475, false))
	{
		if (iLocal_692 == 4 || iLocal_692 == 3)
		{
			if (iLocal_285 == 0)
			{
				if (!bLocal_272)
				{
					if (__LIB_2__::func_859(&uLocal_489, cLocal_751, "PAP2_PASS", 8, 0, 0, 0))
					{
						iLocal_285 = 1;
					}
				}
				else
				{
					iLocal_285 = 1;
				}
			}
			else if (!__LIB_0__::func_75())
			{
				if (iLocal_299 == 0)
				{
					if (bLocal_272 == 0)
					{
						__LIB_0__::func_229("PAP2_08", 7500, 0);
						iLocal_299 = 1;
					}
				}
			}
		}
		if (iLocal_244 == 0)
		{
			STREAMING::REQUEST_ANIM_DICT("rcmpaparazzo_2");
			STREAMING::REQUEST_CLIP_SET(sLocal_752);
			STREAMING::REQUEST_CLIP_SET(sLocal_753);
			iLocal_244 = 1;
		}
		else if (iLocal_244 == 1)
		{
			if (STREAMING::HAS_ANIM_DICT_LOADED("rcmpaparazzo_2"))
			{
				iLocal_244 = 2;
				TASK::OPEN_SEQUENCE_TASK(&iVar1);
				TASK::TASK_PLAY_ANIM(0, "rcmpaparazzo_2", "idle_l_corner_a", 4f, -4f, -1, 0, 0f, false, false, false);
				TASK::TASK_PLAY_ANIM(0, "rcmpaparazzo_2", "idle_l_corner_b", 4f, -4f, -1, 0, 0f, false, false, false);
				TASK::TASK_PLAY_ANIM(0, "rcmpaparazzo_2", "idle_l_corner_c", 4f, -4f, -1, 0, 0f, false, false, false);
				TASK::TASK_PLAY_ANIM(0, "rcmpaparazzo_2", "idle_l_corner_b", 4f, -4f, -1, 0, 0f, false, false, false);
				TASK::TASK_PLAY_ANIM(0, "rcmpaparazzo_2", "idle_l_corner_c", 4f, -4f, -1, 0, 0f, false, false, false);
				TASK::TASK_PLAY_ANIM(0, "rcmpaparazzo_2", "idle_l_corner_a", 4f, -4f, -1, 0, 0f, false, false, false);
				TASK::TASK_PLAY_ANIM(0, "rcmpaparazzo_2", "idle_l_corner_c", 4f, -4f, -1, 0, 0f, false, false, false);
				TASK::SET_SEQUENCE_TO_REPEAT(iVar1, true);
				TASK::CLOSE_SEQUENCE_TASK(iVar1);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_475, iVar1);
			}
		}
		else if (iLocal_244 == 2)
		{
			if ((!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_475, "rcmpaparazzo_2", "idle_l_corner_a", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_475, "rcmpaparazzo_2", "idle_l_corner_b", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_475, "rcmpaparazzo_2", "idle_l_corner_c", 3))
			{
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 40);
				if (iVar0 == 1)
				{
					TASK::TASK_PLAY_ANIM(iLocal_475, "rcmpaparazzo_2", "idle_l_corner_a", 4f, -4f, -1, 0, 0f, false, false, false);
				}
				if (iVar0 == 2)
				{
					TASK::TASK_PLAY_ANIM(iLocal_475, "rcmpaparazzo_2", "idle_l_corner_b", 4f, -4f, -1, 0, 0f, false, false, false);
				}
				if (iVar0 == 3)
				{
					TASK::TASK_PLAY_ANIM(iLocal_475, "rcmpaparazzo_2", "idle_l_corner_c", 4f, -4f, -1, 0, 0f, false, false, false);
				}
			}
		}
	}
}

int func_518(int iParam0, struct<3> Param1)//Position - 0x4310D
{
	if (__LIB_0__::func_692(PLAYER::PLAYER_PED_ID()) && __LIB_0__::func_121(iParam0))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0, Param1, false, true, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_519()//Position - 0x43144
{
	__LIB_0__::func_124(&(Local_483[0 /*5*/]), 1, 0, 1);
	__LIB_0__::func_124(&(Local_483[1 /*5*/]), 1, 0, 1);
	__LIB_0__::func_124(&(iLocal_355[0]), 1, 0, 1);
	__LIB_0__::func_124(&(iLocal_355[1]), 1, 0, 1);
	__LIB_0__::func_124(&(iLocal_355[2]), 1, 0, 1);
	__LIB_0__::func_124(&(iLocal_355[3]), 1, 0, 1);
	__LIB_0__::func_124(&(iLocal_355[4]), 1, 0, 1);
	__LIB_0__::func_124(&(iLocal_355[5]), 1, 0, 1);
}

void func_523()//Position - 0x431EB
{
	__LIB_0__::func_646();
	STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1.8f);
	func_261();
	if (iLocal_248 > 500)
	{
		if (!__LIB_0__::func_75())
		{
			if (iLocal_738 != 7)
			{
				if (__LIB_2__::func_859(&uLocal_489, cLocal_751, "PAP2_FAILFIL", 8, 1, 0, 0))
				{
					iLocal_296 = 1;
					iLocal_738 = 7;
				}
			}
		}
	}
	PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOUT(2 /*FRONTEND_CONTROL*/);
	PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0.3f);
	if (!AUDIO::HAS_SOUND_FINISHED(iLocal_373))
	{
		AUDIO::STOP_SOUND(iLocal_373);
		__LIB_0__::func_467("TK************ STOP SEX SOUNDS ************");
	}
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	HUD::THEFEED_HIDE_THIS_FRAME();
	__LIB_1__::func_33(0);
	if (iLocal_693 > 0 && iLocal_696 > 0)
	{
		if (CAM::DOES_CAM_EXIST(iLocal_663))
		{
			CAM::STOP_CAM_POINTING(iLocal_663);
		}
		if (CAM::DOES_CAM_EXIST(iLocal_663))
		{
			fLocal_337 = CAM::GET_CAM_FOV(iLocal_663);
		}
		func_14(1);
	}
	switch (iLocal_693)
	{
		case 0:
			if (func_248(5, bLocal_703))
			{
				__LIB_0__::func_130();
				__LIB_14__::func_874(1, "FILM POPPY", 0, 0, 0, 1);
				HUD::CLEAR_PRINTS();
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(PLAYER::PLAYER_PED_ID(), true);
				if (CAM::DOES_CAM_EXIST(iLocal_663) && __LIB_0__::func_692(Local_480.f_0))
				{
					CAM::SET_CAM_ROT(iLocal_663, -1.6576f, 0f, -170.9825f, 2);
				}
				AUDIO::STOP_SOUND(iLocal_374);
				AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
				iLocal_375 = 1;
				func_256(1);
				func_254();
				iLocal_723 = 0;
				iLocal_219 = 0;
				fLocal_688 = -0.05f;
				fLocal_689 = -0.03f;
				iLocal_232 = MISC::GET_GAME_TIMER();
				iLocal_250 = MISC::GET_GAME_TIMER();
				if (__LIB_0__::func_692(iLocal_475))
				{
					__LIB_14__::func_659(iLocal_475, -37.2184f, 325.397f, 111.6958f, 242.3437f, 0, 1);
				}
				iLocal_693 = 1;
			}
			break;
		case 1:
			switch (iLocal_696)
			{
				case 0:
					if (CAM::DOES_CAM_EXIST(iLocal_663))
					{
						CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
					}
					if (__LIB_0__::func_692(iLocal_475) && __LIB_0__::func_692(PLAYER::PLAYER_PED_ID()))
					{
						TASK::TASK_LOOK_AT_ENTITY(iLocal_475, Local_480.f_0, -1, 0, 2);
					}
					iLocal_702 = 0;
					iLocal_696 = 1;
					break;
				case 1:
					iLocal_696 = 2;
					break;
				case 2:
					iLocal_693 = 2;
					break;
			}
			break;
		case 2:
			iLocal_755 = 0;
			iLocal_721 = 0;
			iLocal_739 = 0;
			func_338(0);
			break;
		case 3:
			iLocal_693 = 2;
			__LIB_0__::func_325();
			iLocal_721 = 1;
			break;
	}
}

void func_524()//Position - 0x4342A
{
	struct<6> Var0;
	struct<6> Var1;
	struct<6> Var2;
	__LIB_0__::func_646();
	if (((__LIB_0__::func_323() && iLocal_309) && MISC::GET_GAME_TIMER() > iLocal_232 + 900) && CAM::IS_SCREEN_FADED_OUT())
	{
		__LIB_0__::func_84(800, 0);
	}
	if (iLocal_255 == 0)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("PAP2_START");
		iLocal_255 = 1;
	}
	if (iLocal_692 == 2 && PED::IS_PED_RAGDOLL(iLocal_475))
	{
		func_354(2);
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 26.14576f, 302.1105f, 109.463455f, -51.901978f, 337.52612f, 124.382706f, 40.75f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -6.873048f, 293.62445f, 111.96266f, -11.449873f, 283.59448f, 107.31447f, 2f, false, true, 0))
		{
			func_354(5);
		}
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -6.007325f, 363.13138f, 112.00663f, -24.759676f, 322.2206f, 115.7538f, 27.5f, false, true, 0))
	{
		if (__LIB_15__::func_46() || __LIB_15__::func_46())
		{
			if (__LIB_0__::func_692(iLocal_355[5]))
			{
				PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(iLocal_355[5]);
				TASK::TASK_REACT_AND_FLEE_PED(iLocal_355[5], PLAYER::PLAYER_PED_ID());
			}
			func_354(5);
		}
	}
	if (iLocal_744 < 2)
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) == 1)
		{
			if (((((((PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 30 /*INPUT_MOVE_LR*/) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 31 /*INPUT_MOVE_UD*/)) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 23 /*INPUT_ENTER*/)) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 21 /*INPUT_SPRINT*/)) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/)) || (__LIB_7__::func_691() && PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 1 /*INPUT_LOOK_LR*/))) || (__LIB_7__::func_691() && PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 2 /*INPUT_LOOK_UD*/))) || (__LIB_7__::func_691() && PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 32 /*INPUT_MOVE_UP_ONLY*/)))
			{
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			}
		}
	}
	PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0.3f);
	if (__LIB_0__::func_692(iLocal_355[1]))
	{
		__LIB_0__::func_631(iLocal_355[1], &uLocal_376, -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0);
	}
	if (__LIB_0__::func_692(iLocal_355[2]))
	{
		__LIB_0__::func_631(iLocal_355[2], &uLocal_384, -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0);
	}
	if (__LIB_0__::func_692(iLocal_355[3]))
	{
		__LIB_0__::func_631(iLocal_355[3], &uLocal_392, -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0);
	}
	if (__LIB_0__::func_692(iLocal_355[4]))
	{
		__LIB_0__::func_631(iLocal_355[4], &uLocal_400, -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0);
	}
	if (__LIB_0__::func_692(Local_483[0 /*5*/]))
	{
		__LIB_0__::func_631(Local_483[0 /*5*/], &uLocal_440, -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0);
	}
	if (__LIB_0__::func_692(Local_483[1 /*5*/]))
	{
		__LIB_0__::func_631(Local_483[1 /*5*/], &uLocal_448, -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0);
	}
	if (__LIB_0__::func_692(Local_480.f_0))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_480.f_0, 18f, 18f, 2f, false, true, 0) && PED::IS_PED_FACING_PED(Local_480.f_0, PLAYER::PLAYER_PED_ID(), 60f))
		{
			func_354(0);
		}
		else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_480.f_0, 7f, 7f, 2f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -20.678993f, 298.96625f, 111.26266f, -35.815018f, 306.08594f, 115.48137f, 24f, false, true, 0))
		{
			func_354(0);
		}
		__LIB_0__::func_631(Local_480.f_0, &uLocal_416, -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0);
	}
	if (__LIB_0__::func_692(Local_481.f_0))
	{
		__LIB_0__::func_631(Local_481.f_0, &uLocal_424, -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0);
	}
	if (__LIB_0__::func_692(Local_482.f_0))
	{
		__LIB_0__::func_631(Local_482.f_0, &uLocal_432, -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0);
	}
	if (__LIB_0__::func_692(iLocal_475))
	{
		PED::SET_PED_INCREASED_AVOIDANCE_RADIUS(iLocal_475);
		PED::SET_PED_TO_LOAD_COVER(iLocal_475, true);
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_475, -7.914861f, 290.7026f, 106.42525f, -13.110273f, 279.6898f, 112.53349f, 5.5f, false, true, 0))
		{
			Var0 = { __LIB_0__::func_486() };
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
			{
				if (MISC::ARE_STRINGS_EQUAL(&Var0, "PAP2_WALKA"))
				{
					__LIB_0__::func_325();
				}
			}
		}
		if (iLocal_692 == 2)
		{
			if (!__LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), iLocal_475, 20f, 1))
			{
				Var1 = { __LIB_0__::func_486() };
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var1))
				{
					if (MISC::ARE_STRINGS_EQUAL(&Var1, "PAP2_WALKA"))
					{
						__LIB_0__::func_638();
					}
				}
			}
		}
		if (__LIB_0__::func_692(Local_483[0 /*5*/]))
		{
			Var2 = { __LIB_13__::func_743() };
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var2))
			{
				if (MISC::ARE_STRINGS_EQUAL(&Var2, "PAP2_STAFF_7"))
				{
					if (PED::IS_PED_RUNNING_MOBILE_PHONE_TASK(Local_483[0 /*5*/]))
					{
						TASK::TASK_USE_MOBILE_PHONE(Local_483[0 /*5*/], false, 1);
					}
				}
			}
			if ((__LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), iLocal_475, 30f, 1) && PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_475, 70f)) && !PED::IS_PED_HEADTRACKING_PED(iLocal_475, Local_483[0 /*5*/]))
			{
				if (!PED::IS_PED_HEADTRACKING_PED(PLAYER::PLAYER_PED_ID(), iLocal_475))
				{
					TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_475, -1, 0, 2);
				}
			}
			else if (PED::IS_PED_HEADTRACKING_PED(iLocal_475, Local_483[0 /*5*/]))
			{
				if (!PED::IS_PED_HEADTRACKING_PED(PLAYER::PLAYER_PED_ID(), Local_483[0 /*5*/]))
				{
					TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_483[0 /*5*/], -1, 0, 2);
				}
			}
			else if (PED::IS_PED_HEADTRACKING_PED(PLAYER::PLAYER_PED_ID(), iLocal_475))
			{
				TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
			}
		}
		func_516();
		if (iLocal_283)
		{
			if (MISC::GET_GAME_TIMER() > iLocal_249 + 1000)
			{
				bLocal_332 = true;
			}
		}
		if (__LIB_0__::func_725(iLocal_475, -37.203f, 325.4259f, 112.31f, 2f, 1) && bLocal_726 == 0)
		{
			if (iLocal_285 == 0)
			{
				if (!bLocal_272 && !__LIB_0__::func_725(PLAYER::PLAYER_PED_ID(), -37.203f, 325.4259f, 112.31f, 2f, 1))
				{
					if (__LIB_2__::func_859(&uLocal_489, cLocal_751, "PAP2_PASS", 8, 0, 0, 0))
					{
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(9f, 4f, 1);
						iLocal_285 = 1;
						iLocal_264 = MISC::GET_GAME_TIMER();
					}
				}
				else
				{
					iLocal_285 = 1;
					iLocal_264 = MISC::GET_GAME_TIMER();
				}
			}
			if (!PED::IS_PED_IN_COVER(iLocal_475, false))
			{
				if ((!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_475, "rcmpaparazzo_2", "idle_l_corner_a", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_475, "rcmpaparazzo_2", "idle_l_corner_b", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_475, "rcmpaparazzo_2", "idle_l_corner_c", 3))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -37.25669f, 325.4652f, 112.69628f, 0.05f, 0.05f, 0.05f, false, true, 0))
					{
					}
					else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_475, joaat("SCRIPT_TASK_PUT_PED_DIRECTLY_INTO_COVER")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_475, joaat("SCRIPT_TASK_PUT_PED_DIRECTLY_INTO_COVER")) != 0)
					{
						if (!TASK::DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS(-37.2396f, 325.3983f, 111.6961f))
						{
							iLocal_471 = TASK::ADD_COVER_POINT(-37.2396f, 325.3983f, 111.6961f, 156.696f, 0, 2, 2, false);
						}
						TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(iLocal_475, -37.2022f, 325.4253f, 111.6954f, -1, true, 0f, true, true, iLocal_471, false);
						if (__LIB_0__::func_121(iLocal_353))
						{
							ENTITY::DETACH_ENTITY(iLocal_353, true, true);
							ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_353, iLocal_475, PED::GET_PED_BONE_INDEX(iLocal_475, 28422), 0.06f, 0f, -0.06f, 0f, 0f, 90f, true, true, false, false, 2, true, 0);
						}
						PED::RESET_PED_WEAPON_MOVEMENT_CLIPSET(iLocal_475);
						iLocal_262 = MISC::GET_GAME_TIMER();
						if (iLocal_283 == 0)
						{
							iLocal_249 = MISC::GET_GAME_TIMER();
						}
						iLocal_283 = 1;
					}
					else if (MISC::GET_GAME_TIMER() > iLocal_262 + 2000)
					{
						TASK::CLEAR_PED_TASKS(iLocal_475);
					}
				}
			}
			else if (ENTITY::IS_ENTITY_AT_COORD(iLocal_475, -37.25669f, 325.4652f, 112.69628f, 0.1f, 0.1f, 0.1f, false, true, 0))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_475, true);
			}
		}
	}
	if (bLocal_272 == 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_353))
		{
			iLocal_353 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_pap_camera_01"), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_475, 0f, 0f, 10f), true, true, false);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_353))
		{
			if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_353, iLocal_475))
			{
				ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_353, iLocal_475, PED::GET_PED_BONE_INDEX(iLocal_475, 28422), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, 0);
			}
		}
	}
	func_579();
	if (iLocal_283)
	{
		func_578();
	}
	if (bLocal_272 == 1)
	{
		WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
	}
	switch (iLocal_693)
	{
		case 0:
			iLocal_720 = 1;
			if (func_248(iLocal_692, bLocal_703))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_475, false);
				iLocal_693 = 1;
			}
			break;
		case 1:
			func_577();
			if (iLocal_357 == 0)
			{
				func_576();
			}
			else
			{
				func_575();
			}
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -11.128758f, 354.31754f, 109.160736f, -24.442318f, 326.81436f, 114.161804f, 18.75f, false, true, 0) && ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
			{
				if (!bLocal_310)
				{
					__LIB_0__::func_630(800);
					bLocal_310 = true;
				}
			}
			func_573();
			func_572();
			if (!bLocal_726 && !bLocal_727)
			{
				func_571();
				func_570();
				if (MISC::GET_GAME_TIMER() > iLocal_237)
				{
					func_529(iLocal_692);
				}
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_475, 2f);
				func_261();
				if (!bLocal_272)
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -36.275143f, 328.58643f, 110.58393f, -37.693676f, 325.32025f, 113.739784f, 3.25f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -37.62184f, 328.4344f, 109.44581f, -41.964497f, 330.40207f, 113.44581f, 5.75f, false, true, 0))
					{
					}
					else
					{
						PLAYER::SET_PLAYER_CAN_USE_COVER(PLAYER::PLAYER_ID(), true);
					}
				}
				else
				{
					PLAYER::SET_PLAYER_CAN_USE_COVER(PLAYER::PLAYER_ID(), true);
				}
			}
			else if (bLocal_727)
			{
				if (__LIB_0__::func_692(Local_483[0 /*5*/]))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_483[0 /*5*/], false);
				}
				if (__LIB_0__::func_692(Local_483[1 /*5*/]))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_483[1 /*5*/], false);
				}
				func_505();
			}
			else if (bLocal_726)
			{
				if (__LIB_0__::func_692(Local_483[0 /*5*/]))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_483[0 /*5*/], false);
					if (bLocal_312)
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(Local_483[0 /*5*/], joaat("SCRIPT_TASK_REACT_AND_FLEE_PED")) != 1)
						{
							TASK::TASK_REACT_AND_FLEE_PED(Local_483[0 /*5*/], PLAYER::PLAYER_PED_ID());
						}
					}
				}
				if (__LIB_0__::func_692(Local_483[1 /*5*/]))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_483[1 /*5*/], false);
					if (bLocal_312)
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(Local_483[1 /*5*/], joaat("SCRIPT_TASK_REACT_AND_FLEE_PED")) != 1)
						{
							TASK::TASK_REACT_AND_FLEE_PED(Local_483[1 /*5*/], PLAYER::PLAYER_PED_ID());
						}
					}
				}
				if (bLocal_312)
				{
					__LIB_0__::func_429();
				}
				if (!bLocal_332)
				{
					if (!iLocal_708)
					{
						if (__LIB_0__::func_76(iLocal_475, PLAYER::PLAYER_PED_ID(), 1) < 12f)
						{
							iLocal_708 = __LIB_2__::func_859(&uLocal_489, cLocal_751, "PAP2_SPOT", 8, 0, 0, 0);
						}
						else
						{
							iLocal_708 = 1;
						}
					}
					else if (!__LIB_0__::func_75())
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -21.921995f, 295.47623f, 111.57172f, -62.670685f, 314.49554f, 113.83631f, 33.75f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -31.052395f, 322.6476f, 111.402245f, -53.921097f, 333.266f, 114.37752f, 17.75f, false, true, 0))
						{
							func_354(0);
						}
						else
						{
							func_354(5);
						}
					}
				}
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_661))
			{
				if (__LIB_0__::func_501("PAP2_06", 0, 0) || !__LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), iLocal_475, 70f, 1))
				{
					HUD::SET_BLIP_FLASHES(iLocal_661, true);
				}
				else if (__LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), iLocal_475, 70f, 1))
				{
					HUD::SET_BLIP_FLASHES(iLocal_661, false);
				}
			}
			break;
		case 2:
			func_526();
			break;
		case 3:
			func_525(iLocal_692);
			break;
	}
}

void func_525(int iParam0)//Position - 0x43FD6
{
	int iVar0;
	switch (iParam0)
	{
		case 2:
			if (__LIB_0__::func_692(iLocal_475))
			{
				TASK::CLEAR_PED_TASKS(iLocal_475);
			}
			iLocal_744 = 3;
			__LIB_14__::func_659(iLocal_475, Local_467[2 /*3*/], 338.4024f, 0, 1);
			__LIB_14__::func_659(PLAYER::PLAYER_PED_ID(), -14.1493f, 280.7966f, 107.2078f, 317.7051f, 0, 1);
			iLocal_706 = 1;
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			iLocal_693 = 1;
			break;
		case 3:
			if (__LIB_0__::func_692(iLocal_475))
			{
				TASK::CLEAR_PED_TASKS(iLocal_475);
			}
			iVar0 = 0;
			while (iVar0 <= 1)
			{
				if (__LIB_0__::func_692(Local_483[iVar0 /*5*/]))
				{
					TASK::CLEAR_PED_TASKS(Local_483[iVar0 /*5*/]);
				}
				iVar0++;
			}
			__LIB_14__::func_659(iLocal_475, Local_467[5 /*3*/], 63.3365f, 0, 1);
			__LIB_14__::func_659(PLAYER::PLAYER_PED_ID(), -2.2002f, 317.2632f, 109.9189f, 60.7242f, 0, 1);
			iLocal_744 = 6;
			iLocal_707 = 1;
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			iLocal_693 = 1;
			break;
		case 4:
			if (__LIB_0__::func_692(iLocal_475))
			{
				TASK::CLEAR_PED_TASKS(iLocal_475);
			}
			iLocal_720 = 1;
			func_572();
			iLocal_744 = 7;
			__LIB_14__::func_659(iLocal_475, -36.7532f, 323.5341f, 111.6957f, 165.7917f, 0, 1);
			__LIB_14__::func_659(PLAYER::PLAYER_PED_ID(), -35.1361f, 320.0255f, 111.6955f, 199.6725f, 0, 1);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			iLocal_693 = 1;
			break;
	}
}

void func_526()//Position - 0x4415E
{
	int iVar0;
	if (iLocal_692 == 4)
	{
		iVar0 = 0;
		while (iVar0 <= 1)
		{
			__LIB_0__::func_0(&(Local_483[iVar0 /*5*/]));
			iVar0++;
		}
	}
	iLocal_705 = 0;
	iLocal_706 = 0;
	func_338(0);
}

void func_529(int iParam0)//Position - 0x441C8
{
	struct<3> Var0;
	struct<3> Var1;
	struct<6> Var2;
	int iVar3;
	func_567();
	if (__LIB_0__::func_692(Local_483[0 /*5*/]) && __LIB_0__::func_692(Local_483[1 /*5*/]))
	{
		func_563();
		func_540();
	}
	Var2 = { __LIB_0__::func_486() };
	switch (iParam0)
	{
		case 2:
			if (!MISC::IS_POSITION_OCCUPIED(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_475, 0f, 3f, 0f), 0.1f, false, true, false, false, false, 0, false))
			{
				iLocal_336 = 0;
				if (func_537(2, 2.5f, 2.5f, 2.5f, 0))
				{
					iLocal_693 = 2;
				}
				if (iLocal_278 == 0 && ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_475, -70.08491f, 298.55832f, 104.78032f, -62.144356f, 295.83832f, 108.37286f, 5.5f, false, true, 0))
				{
					if (CAM::IS_SCREEN_FADED_IN())
					{
						if (__LIB_2__::func_859(&uLocal_489, cLocal_751, "PAP2_WALKA", 7, 0, 0, 0))
						{
							iLocal_278 = 1;
						}
					}
				}
				else if (__LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), iLocal_475, 25f, 1) && !__LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), Local_483[0 /*5*/], 15f, 1))
				{
					if (iLocal_277 == 0)
					{
						iLocal_277 = 1;
					}
					else if (__LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), Local_483[0 /*5*/], 15f, 1))
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var2))
						{
							if (MISC::ARE_STRINGS_EQUAL(&Var2, "PAP2_WALKB"))
							{
								__LIB_0__::func_325();
							}
						}
					}
				}
				func_534(1, 1);
			}
			else
			{
				iLocal_336 = 1;
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_475))
				{
					TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_475, 0f, false);
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2.997917f, 292.14975f, 109.16393f, 7.916159f, 316.19492f, 116.919395f, 40.75f, false, true, 0))
				{
					if (__LIB_0__::func_692(Local_483[0 /*5*/]))
					{
						TASK::TASK_LOOK_AT_ENTITY(Local_483[0 /*5*/], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
						TASK::TASK_USE_MOBILE_PHONE(Local_483[0 /*5*/], false, 1);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_483[0 /*5*/], PLAYER::PLAYER_PED_ID(), 0);
						func_354(5);
					}
				}
			}
			break;
		case 3:
			if (func_537(5, 2.5f, 2.5f, 2.5f, 0))
			{
				__LIB_0__::func_467("CLEANUP FOLLOW BEV GUARDS");
				iLocal_693 = 2;
			}
			func_533(&iLocal_705, &iLocal_707);
			func_534(0, -1);
			break;
		case 4:
			STREAMING::REQUEST_ANIM_DICT("cover@move@base@core");
			if (fLocal_347 < 1f)
			{
				fLocal_347 = 0f;
			}
			else if (fLocal_347 < 1.8f)
			{
				fLocal_347 = (fLocal_347 + 0.005f);
			}
			if (fLocal_347 > 1.8f)
			{
				fLocal_347 = 1.8f;
			}
			STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(fLocal_347);
			func_532();
			if (bLocal_272 == 1)
			{
				if (func_531())
				{
					if (AUDIO::HAS_SOUND_FINISHED(iLocal_374))
					{
						AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_374, "AMBIENT_SEX", Local_480.f_0, "PAPARAZZO_02_SOUNDSETS", false, 0);
					}
				}
				fLocal_344 = (fLocal_344 + 0.005f);
				if (fLocal_344 > 0.6f)
				{
					fLocal_344 = 0.6f;
				}
				AUDIO::SET_VARIABLE_ON_SOUND(iLocal_374, "ONESHOT_VOLUME", fLocal_344);
				func_258();
				if (STREAMING::HAS_CLIP_SET_LOADED(sLocal_753))
				{
					PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID(), sLocal_753);
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -32.75797f, 319.5059f, 111.49536f, -33.26295f, 318.43796f, 113.49536f, 1f, false, true, 0))
				{
					__LIB_0__::func_467("TK~~~~Player in cover spot~~~~");
					iLocal_245++;
				}
				if (MISC::GET_GAME_TIMER() > iLocal_225 + 200)
				{
					iLocal_245 = iLocal_245;
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "rcmpaparazzo_2", "idle_d", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "rcmpaparazzo_2", "idle_d") >= 0.4f)
					{
						if (iLocal_290 == 0)
						{
							AUDIO::INIT_SYNCH_SCENE_AUDIO_WITH_ENTITY("PAP2_IG1_POPPYSEX", Local_480.f_0);
							__LIB_0__::func_467("TK************ SETTING SYNCH SCENE AUDIO POSITION THIS FRAME ************TK");
							iLocal_290 = 1;
						}
						if (AUDIO::PREPARE_SYNCHRONIZED_AUDIO_EVENT("PAP2_IG1_POPPYSEX", 0) == 1)
						{
							PED::SET_PED_CAN_ARM_IK(PLAYER::PLAYER_PED_ID(), true);
							PED::SET_PED_CAN_TORSO_IK(PLAYER::PLAYER_PED_ID(), true);
							PED::SET_PED_CAN_TORSO_REACT_IK(PLAYER::PLAYER_PED_ID(), true);
							iLocal_693 = 2;
						}
					}
					if (MISC::GET_GAME_TIMER() > iLocal_225 + 10000)
					{
						if (iLocal_290 == 0)
						{
							AUDIO::INIT_SYNCH_SCENE_AUDIO_WITH_ENTITY("PAP2_IG1_POPPYSEX", Local_480.f_0);
							__LIB_0__::func_467("TK************ SETTING SYNCH SCENE AUDIO POSITION THIS FRAME ************TK");
							iLocal_290 = 1;
						}
						if (AUDIO::PREPARE_SYNCHRONIZED_AUDIO_EVENT("PAP2_IG1_POPPYSEX", 0) == 1)
						{
							PED::SET_PED_CAN_ARM_IK(PLAYER::PLAYER_PED_ID(), true);
							PED::SET_PED_CAN_TORSO_IK(PLAYER::PLAYER_PED_ID(), true);
							PED::SET_PED_CAN_TORSO_REACT_IK(PLAYER::PLAYER_PED_ID(), true);
							iLocal_693 = 2;
						}
					}
				}
			}
			if (!bLocal_332)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -35.765366f, 324.9915f, 111.696045f, -37.292095f, 327.32632f, 113.446045f, 1f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -38.161537f, 326.24573f, 111.696045f, -36.30027f, 325.41608f, 113.446045f, 1.25f, false, true, 0))
				{
					if (__LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), iLocal_475, 2f, 1))
					{
						TASK::TASK_STAND_STILL(iLocal_475, -1);
						if (iLocal_285 == 0)
						{
							if (!__LIB_0__::func_75())
							{
								if (!bLocal_272)
								{
									if (__LIB_2__::func_859(&uLocal_489, cLocal_751, "PAP2_PASS", 8, 0, 0, 0))
									{
										iLocal_285 = 1;
									}
								}
								else
								{
									iLocal_285 = 1;
								}
							}
						}
						iLocal_283 = 1;
						bLocal_332 = true;
					}
				}
			}
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -36.526478f, 324.28467f, 111.44526f, -38.700287f, 327.49136f, 114.19526f, 3f, false, true, 0))
			{
				__LIB_1__::func_33(0);
			}
			if (iLocal_275 == 1)
			{
				if (bLocal_332)
				{
					if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -37.842674f, 323.4267f, 100.18081f, -31.976759f, 320.66608f, 113.69595f, 5.25f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -35.976223f, 326.20206f, 111.196075f, -37.204895f, 325.14755f, 113.49536f, 1f, false, true, 0)) || __LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), iLocal_475, 1.8f, 1))
					{
						if (bLocal_272 == 0)
						{
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 128);
							HUD::CLEAR_PRINTS();
							PED::SET_PED_CAN_ARM_IK(PLAYER::PLAYER_PED_ID(), false);
							PED::SET_PED_CAN_TORSO_IK(PLAYER::PLAYER_PED_ID(), false);
							PED::SET_PED_CAN_TORSO_REACT_IK(PLAYER::PLAYER_PED_ID(), false);
							PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
							if (STREAMING::HAS_CLIP_SET_LOADED(sLocal_753))
							{
								PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID(), sLocal_753);
							}
							else
							{
								STREAMING::REQUEST_CLIP_SET(sLocal_753);
							}
							WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
							func_258();
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_353))
							{
								ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_353, PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, 0);
							}
							if (!PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
							{
								PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), true, "DEFAULT_ACTION");
							}
							if ((((!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -35.552845f, 324.44305f, 111.696045f, -37.76319f, 327.7456f, 113.696045f, 1f, false, true, 0) || TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID())) || TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_JUMPING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
							{
								__LIB_14__::func_659(PLAYER::PLAYER_PED_ID(), -37.0561f, 326.647f, 111.696f, 203.1247f, 0, 1);
								PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Walk"), false, 1, false);
							}
							Var0 = { ENTITY::GET_ENTITY_COORDS(iLocal_475, true) };
							Var1 = { -37.224827f, 325.53125f, 112.69603f };
							if (((Var0.f_0 < (Var1.f_0 - 0.2f) || Var0.f_0 > (Var1.f_0 + 0.2f)) || Var0.f_1 < (Var1.f_1 - 0.2f)) || Var0.f_1 > (Var1.f_1 + 0.2f))
							{
								__LIB_14__::func_659(iLocal_475, -39.2954f, 328.3034f, 111.696f, 218.8305f, 0, 1);
							}
							TASK::OPEN_SEQUENCE_TASK(&iVar3);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -33.8491f, 319.335f, 111.696f, 1.4f, -1, 1f, 1024, 184.4715f);
							TASK::TASK_PLAY_ANIM(0, "rcmpaparazzo_2", "idle_d", 2f, -1000f, -1, 1, 0f, false, false, false);
							TASK::CLOSE_SEQUENCE_TASK(iVar3);
							TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iVar3);
							TASK::CLEAR_SEQUENCE_TASK(&iVar3);
							if (CAM::DOES_CAM_EXIST(iLocal_666))
							{
								CAM::DESTROY_CAM(iLocal_666, false);
							}
							if (CAM::DOES_CAM_EXIST(iLocal_667))
							{
								CAM::DESTROY_CAM(iLocal_667, false);
							}
							iLocal_666 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
							iLocal_667 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
							CAM::SET_CAM_PARAMS(iLocal_666, -37.813f, 328.5478f, 113.3867f, -5.9528f, 0.0001f, -163.8669f, 23.8f, 0, 1, 1, 2);
							CAM::SET_CAM_PARAMS(iLocal_667, -34.8325f, 320.8304f, 113.3748f, -6.6594f, -0.0146f, -161.67f, 34f, 0, 1, 1, 2);
							CAM::SET_CAM_NEAR_DOF(iLocal_666, 2f);
							CAM::SET_CAM_FAR_DOF(iLocal_666, 40f);
							CAM::SET_CAM_DOF_STRENGTH(iLocal_666, 0.5f);
							CAM::SET_CAM_NEAR_DOF(iLocal_667, 2f);
							CAM::SET_CAM_FAR_DOF(iLocal_667, 40f);
							CAM::SET_CAM_DOF_STRENGTH(iLocal_667, 0.5f);
							CAM::SET_CAM_ACTIVE(iLocal_667, true);
							CAM::SET_CAM_ACTIVE(iLocal_666, true);
							CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_667, iLocal_666, 7000, 1, 1);
							CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
							if (CAM::DOES_CAM_EXIST(iLocal_666))
							{
								CAM::SHAKE_CAM(iLocal_666, "HAND_SHAKE", 1f);
							}
							if (CAM::DOES_CAM_EXIST(iLocal_667))
							{
								CAM::SHAKE_CAM(iLocal_667, "HAND_SHAKE", 1f);
							}
							iLocal_225 = MISC::GET_GAME_TIMER();
							bLocal_272 = true;
							fLocal_344 = 0.1f;
							AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "CAMERA_FOLEY", PLAYER::PLAYER_PED_ID(), "PAPARAZZO_02_SOUNDSETS", false, 0);
							HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
							HUD::THEFEED_HIDE_THIS_FRAME();
						}
					}
				}
			}
			if (bLocal_712)
			{
				func_530(&iLocal_705, &iLocal_706);
			}
			func_534(1, 6);
			break;
	}
}

void func_530(int iParam0, int iParam1)//Position - 0x44ADF
{
	struct<6> Var0;
	if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_475))
	{
		if (TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_475) >= 99)
		{
			if (!*iParam0)
			{
				*iParam0 = 1;
			}
		}
	}
	if (!*iParam0)
	{
		if (!__LIB_0__::func_75())
		{
			if (__LIB_0__::func_76(iLocal_475, PLAYER::PLAYER_PED_ID(), 1) <= 16f && !PED::IS_PED_FACING_PED(iLocal_475, PLAYER::PLAYER_PED_ID(), 90f))
			{
				*iParam0 = __LIB_2__::func_859(&uLocal_489, cLocal_751, "PAP2_GO", 8, 0, 0, 0);
			}
		}
		else if (__LIB_0__::func_76(Local_483[0 /*5*/], PLAYER::PLAYER_PED_ID(), 1) >= 23f)
		{
			Var0 = { __LIB_13__::func_743() };
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
			{
				if (MISC::ARE_STRINGS_EQUAL(&Var0, "PAP2_STAFF"))
				{
					__LIB_0__::func_429();
				}
			}
		}
	}
	else if (iLocal_744 == 7)
	{
		if (!*iParam1)
		{
			if (!__LIB_0__::func_75())
			{
				*iParam1 = __LIB_2__::func_859(&uLocal_489, cLocal_751, "PAP2_PREFILM", 9, 0, 0, 0);
			}
		}
	}
}

int func_531()//Position - 0x44BC8
{
	float fVar0;
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_218))
	{
		fVar0 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_218);
		if (fVar0 >= 0.069f && fVar0 < (0.069f + 0.05f))
		{
			return 1;
		}
		if (fVar0 >= 0.249f && fVar0 < (0.249f + 0.05f))
		{
			return 1;
		}
		if (fVar0 >= 0.486f && fVar0 < (0.486f + 0.05f))
		{
			return 1;
		}
		if (fVar0 >= 0.668f && fVar0 < (0.668f + 0.05f))
		{
			return 1;
		}
		if (fVar0 >= 0.881f && fVar0 < (0.881f + 0.05f))
		{
			return 1;
		}
	}
	return 0;
}

void func_532()//Position - 0x44C8E
{
	struct<6> Var0;
	if (__LIB_0__::func_75())
	{
		if (__LIB_0__::func_76(Local_483[0 /*5*/], PLAYER::PLAYER_PED_ID(), 1) > 28f || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -4.814245f, 316.41736f, 109.39838f, 2.642797f, 313.3375f, 113.1552f, 5.5f, false, true, 0))
		{
			Var0 = { __LIB_0__::func_486() };
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
			{
				if (MISC::ARE_STRINGS_EQUAL(&Var0, "PAP2_STAFF"))
				{
					__LIB_0__::func_638();
				}
			}
		}
	}
}

void func_533(int iParam0, int iParam1)//Position - 0x44D0D
{
	if (!*iParam0)
	{
		if (iLocal_744 == 3 || __LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), Local_483[0 /*5*/], 12f, 1))
		{
			if (!__LIB_0__::func_75())
			{
				if (!__LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), Local_483[0 /*5*/], 12f, 1))
				{
					if (__LIB_2__::func_859(&uLocal_489, cLocal_751, "PAP2_STAIRS", 7, 0, 0, 0))
					{
						if (__LIB_0__::func_692(Local_483[0 /*5*/]))
						{
							iLocal_226 = MISC::GET_GAME_TIMER();
							iLocal_697[0] = 1;
							iLocal_697[1] = 1;
							*iParam0 = 1;
						}
					}
				}
				else if (__LIB_0__::func_692(Local_483[0 /*5*/]))
				{
					iLocal_226 = MISC::GET_GAME_TIMER();
					iLocal_697[0] = 1;
					iLocal_697[1] = 1;
					*iParam0 = 1;
				}
			}
		}
	}
	else if (!*iParam1)
	{
		if (!__LIB_0__::func_75())
		{
			if (__LIB_0__::func_76(Local_483[0 /*5*/], PLAYER::PLAYER_PED_ID(), 1) < 23f)
			{
				*iParam1 = __LIB_2__::func_859(&uLocal_489, cLocal_751, "PAP2_STAFF", 7, 0, 0, 0);
			}
		}
	}
	else
	{
		func_532();
	}
}

void func_534(bool bParam0, int iParam1)//Position - 0x44E0A
{
	struct<3> Var0;
	if ((__LIB_0__::func_692(iLocal_475) && !bLocal_727) && !iLocal_283)
	{
		if (iLocal_744 < 8)
		{
			if (iLocal_276 == 1)
			{
			}
			if (iLocal_744 < 2)
			{
				Var0 = { 4f, 4f, 2.5f };
			}
			else
			{
				Var0 = { 2f, 2f, 2.5f };
			}
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_475))
			{
				if (TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_475) >= 105 && MISC::GET_GAME_TIMER() > iLocal_247 + 1200)
				{
					if (iLocal_282 == 0)
					{
					}
					if (!PED::GET_PED_STEALTH_MOVEMENT(iLocal_475))
					{
						iLocal_331 = 1;
						PED::SET_PED_STEALTH_MOVEMENT(iLocal_475, true, "DEFAULT_ACTION");
						TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_475, &Local_750, 0, 1032, -1);
						__LIB_0__::func_467("MAKE BEV STEALTH");
					}
					else if (iLocal_331)
					{
						iLocal_331 = 0;
					}
				}
				if (TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_475) >= 107)
				{
				}
				if (TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_475) < 100)
				{
					PED::SET_PED_RESET_FLAG(iLocal_475, 247, true);
				}
			}
			if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_475, Local_467[iLocal_744 /*3*/], Var0, false, true, 0))
			{
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_475) && !TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(iLocal_475))
				{
					if (iLocal_744 < 2)
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_475) < 41)
						{
							TASK::WAYPOINT_PLAYBACK_USE_DEFAULT_SPEED(iLocal_475);
						}
						else if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 1.9f)
						{
							if ((!__LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), iLocal_475, 5f, 1) && TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_475) < 35) && !PED::IS_PED_FACING_PED(iLocal_475, PLAYER::PLAYER_PED_ID(), 90f))
							{
								TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_475, 2f, false);
							}
							else
							{
								TASK::WAYPOINT_PLAYBACK_USE_DEFAULT_SPEED(iLocal_475);
							}
						}
						else if (TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_475) < 35)
						{
							TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_475, 1f, false);
						}
					}
					else if (__LIB_0__::func_692(Local_483[0 /*5*/]))
					{
						if (__LIB_0__::func_687(iLocal_475, Local_483[0 /*5*/], 25f, 1))
						{
							TASK::TASK_LOOK_AT_ENTITY(iLocal_475, Local_483[0 /*5*/], 8000, 0, 2);
						}
						if (TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(&Local_750, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iLocal_258))
						{
							if (TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_475) < iLocal_258 && !__LIB_0__::func_687(iLocal_475, Local_483[0 /*5*/], 8f, 1))
							{
								TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_475, 2f, false);
							}
							else
							{
								TASK::WAYPOINT_PLAYBACK_USE_DEFAULT_SPEED(iLocal_475);
							}
						}
					}
				}
				else if (__LIB_0__::func_687(iLocal_475, PLAYER::PLAYER_PED_ID(), 7f, 1))
				{
					if (STREAMING::HAS_CLIP_SET_LOADED(sLocal_752))
					{
						if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_475, -38.226f, 320.31857f, 111.051186f, -36.41312f, 323.9704f, 113.69536f, 4.75f, false, true, 0))
						{
							TASK::TASK_CLEAR_LOOK_AT(iLocal_475);
							PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(iLocal_475, sLocal_752);
							TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_475, &Local_750, 0, 8, -1);
							iLocal_247 = MISC::GET_GAME_TIMER();
							iLocal_276 = 0;
						}
					}
				}
			}
			else if (!bParam0)
			{
				if (iLocal_744 < 8)
				{
					iLocal_744++;
				}
			}
			else if (iParam1 > -1)
			{
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_475) && TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_475) >= 112)
				{
				}
				else if (!func_518(iLocal_475, 7f, 7f, 3.5f) || !func_536(Local_467[iLocal_744 /*3*/], 13f, 13f, 5f))
				{
					if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -41.702267f, 336.29404f, 111.171974f, -17.27828f, 324.6822f, 115.13795f, 12.5f, false, true, 0))
					{
						if (!__LIB_14__::func_855(iLocal_475, PLAYER::PLAYER_PED_ID(), 40f) && iLocal_744 <= 6)
						{
							if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_475))
							{
								TASK::TASK_LOOK_AT_ENTITY(iLocal_475, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
								TASK::WAYPOINT_PLAYBACK_PAUSE(iLocal_475, true, false);
							}
							iLocal_276 = 1;
						}
					}
					if (bLocal_712)
					{
						iLocal_740++;
						if (iLocal_740 > 125)
						{
							bLocal_712 = false;
							iLocal_740 = 0;
						}
					}
					else if (iLocal_713)
					{
						iLocal_741++;
						if (iLocal_741 > 220)
						{
							iLocal_713 = 0;
							iLocal_741 = 0;
						}
					}
				}
				else
				{
					iLocal_740 = 0;
					if (iLocal_744 < 8)
					{
						iLocal_744++;
					}
				}
			}
		}
	}
}

int func_536(struct<3> Param0, struct<3> Param1)//Position - 0x45241
{
	if (__LIB_0__::func_692(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Param0, Param1, false, true, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_537(int iParam0, struct<3> Param1, bool bParam2)//Position - 0x4526F
{
	if (!bParam2)
	{
		if (ENTITY::IS_ENTITY_AT_COORD(iLocal_475, Local_467[iParam0 /*3*/], Param1, false, true, 0) || func_536(Local_467[iParam0 /*3*/], Param1))
		{
			return 1;
		}
	}
	else if (ENTITY::IS_ENTITY_AT_COORD(iLocal_475, Local_467[iParam0 /*3*/], 2.5f, 2.5f, 2.5f, false, true, 0))
	{
		if (func_518(iLocal_475, 2.5f, 2.5f, 2.5f))
		{
			iLocal_740 = 0;
			return 1;
		}
		else
		{
			if (bLocal_712 && iLocal_702)
			{
				iLocal_740++;
				if (iLocal_740 > 100)
				{
					bLocal_712 = false;
					iLocal_740 = 0;
				}
			}
			if (!iLocal_713)
			{
				iLocal_741++;
				if (iLocal_741 > 175)
				{
					func_539();
				}
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_475, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 7)
			{
				iLocal_713 = 0;
				iLocal_741 = 0;
			}
			if (bLocal_272 == 0)
			{
				func_538("PAP2_08");
			}
		}
	}
	return 0;
}

void func_538(char* sParam0)//Position - 0x4536B
{
	if (!iLocal_702)
	{
		__LIB_0__::func_229(sParam0, 7500, 0);
		iLocal_702 = 1;
	}
}

void func_539()//Position - 0x45388
{
	int iVar0;
	if (!iLocal_713)
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_475, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1 || TASK::GET_SCRIPT_TASK_STATUS(iLocal_475, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 0)
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
			if (!func_518(iLocal_475, 10f, 10f, 10f))
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
			}
			if (iLocal_744 == 7)
			{
				TASK::TASK_TURN_PED_TO_FACE_COORD(0, Local_464, 0);
			}
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_475, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
		}
		iLocal_713 = 1;
	}
}

void func_540()//Position - 0x4541D
{
	struct<6> Var0;
	func_544();
	Var0 = { __LIB_0__::func_486() };
	switch (iLocal_697[1])
	{
		case 0:
			break;
		case 1:
			break;
		case 2:
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
			{
				func_543(Var0);
			}
			if (ENTITY::IS_ENTITY_AT_COORD(Local_483[1 /*5*/], 15.7815f, 333.5496f, 109.919f, 4f, 4f, 2f, false, true, 0))
			{
			}
			break;
		case 3:
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
			{
				func_543(Var0);
				if (!MISC::ARE_STRINGS_EQUAL(&Var0, "PAP2_"))
				{
					if (func_324(7, Local_462, 0))
					{
						TASK::CLEAR_PED_TASKS(Local_483[1 /*5*/]);
						func_542(Local_486[iLocal_488 /*3*/]);
						iLocal_697[1] = 4;
					}
				}
			}
			break;
		case 4:
			switch (iLocal_699)
			{
				case 0:
					if (ENTITY::IS_ENTITY_AT_COORD(Local_483[1 /*5*/], Local_486[iLocal_488 /*3*/], 1f, 1f, 1.5f, false, true, 0))
					{
					}
					else if (TASK::GET_SCRIPT_TASK_STATUS(Local_483[1 /*5*/], joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_483[1 /*5*/], joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) != 0)
					{
						func_542(Local_486[iLocal_488 /*3*/]);
					}
					break;
				case 1:
					if (TASK::GET_SCRIPT_TASK_STATUS(Local_483[1 /*5*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_483[1 /*5*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 0)
					{
						iLocal_488 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
						func_542(Local_486[iLocal_488 /*3*/]);
					}
					break;
			}
			break;
		case 8:
			if (__LIB_0__::func_76(Local_483[1 /*5*/], PLAYER::PLAYER_PED_ID(), 1) < 20f)
			{
				if (__LIB_2__::func_859(&uLocal_489, cLocal_751, "PAP2_BSFLEEB", 9, 0, 0, 0))
				{
					iLocal_697[0] = 4;
					iLocal_697[1] = 4;
					bLocal_726 = true;
				}
			}
			else
			{
				iLocal_697[0] = 4;
				iLocal_697[1] = 4;
				bLocal_726 = true;
			}
			break;
		case 5:
			if (__LIB_0__::func_76(Local_483[1 /*5*/], PLAYER::PLAYER_PED_ID(), 1) < 12f)
			{
				if (__LIB_2__::func_859(&uLocal_489, cLocal_751, "PAP2_BSFLEE1", 9, 0, 0, 0))
				{
					func_541(Local_483[0 /*5*/]);
					bLocal_312 = true;
					iLocal_697[0] = 9;
					iLocal_697[1] = 9;
				}
			}
			else
			{
				bLocal_312 = true;
				func_541(Local_483[0 /*5*/]);
				iLocal_697[0] = 9;
				iLocal_697[1] = 9;
			}
			break;
		case 7:
			if (__LIB_0__::func_76(Local_483[1 /*5*/], PLAYER::PLAYER_PED_ID(), 1) < 12f)
			{
				if (__LIB_2__::func_859(&uLocal_489, cLocal_751, "PAP2_BSFLEE2", 9, 0, 0, 0))
				{
					bLocal_312 = true;
					func_541(Local_483[0 /*5*/]);
					iLocal_697[0] = 9;
					iLocal_697[1] = 9;
				}
			}
			else
			{
				bLocal_312 = true;
				func_541(Local_483[0 /*5*/]);
				iLocal_697[0] = 9;
				iLocal_697[1] = 9;
			}
			break;
		case 6:
			if (__LIB_0__::func_76(Local_483[1 /*5*/], PLAYER::PLAYER_PED_ID(), 1) < 12f)
			{
				if (__LIB_2__::func_859(&uLocal_489, cLocal_751, "PAP2_BSFLEE3", 9, 0, 0, 0))
				{
					bLocal_312 = true;
					func_541(Local_483[0 /*5*/]);
					iLocal_697[0] = 9;
					iLocal_697[1] = 9;
				}
			}
			else
			{
				bLocal_312 = true;
				func_541(Local_483[0 /*5*/]);
				iLocal_697[0] = 9;
				iLocal_697[1] = 9;
			}
			break;
		case 9:
			bLocal_726 = true;
			break;
	}
}

void func_541(int iParam0)//Position - 0x45773
{
	if (__LIB_0__::func_692(iParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, true))
		{
			if (__LIB_0__::func_695(PED::GET_VEHICLE_PED_IS_IN(iParam0, true)))
			{
				TASK::TASK_VEHICLE_MISSION_PED_TARGET(iParam0, PED::GET_VEHICLE_PED_IS_IN(iParam0, true), PLAYER::PLAYER_PED_ID(), 8, 100f, 786468, 100f, 100f, true);
			}
		}
		else
		{
			PED::SET_PED_FLEE_ATTRIBUTES(iParam0, 4, true);
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("SCRIPT_TASK_SMART_FLEE_PED")) != 1)
			{
				TASK::CLEAR_PED_TASKS(iParam0);
				TASK::TASK_SMART_FLEE_PED(iParam0, PLAYER::PLAYER_PED_ID(), 100f, -1, false, true);
			}
		}
		PED::SET_PED_KEEP_TASK(iParam0, true);
	}
}

void func_542(struct<3> Param0)//Position - 0x457FC
{
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_483[1 /*5*/], Param0, 1f, -1, 0.25f, 0, 40000f);
	iLocal_699 = 0;
}

void func_543(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x45823
{
	int iVar0;
	if (MISC::ARE_STRINGS_EQUAL(&uParam0, "PAP2_STAFF"))
	{
		iVar0 = AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
		if (TASK::GET_SCRIPT_TASK_STATUS(Local_483[1 /*5*/], joaat("SCRIPT_TASK_PLAY_ANIM")) != 1)
		{
			switch (iVar0)
			{
				case 6:
					break;
				case 8:
					break;
				}
			}
	}
}

void func_544()//Position - 0x4586B
{
	if (iLocal_697[0] <= 4 && iLocal_697[1] <= 4)
	{
		if ((func_562(Local_483[1 /*5*/]) || __LIB_0__::func_687(Local_483[1 /*5*/], PLAYER::PLAYER_PED_ID(), 12f, 1)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 14.255188f, 335.39124f, 109.13077f, 24.29033f, 330.66702f, 113.985596f, 3.5f, false, true, 0))
		{
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
			{
				iLocal_697[1] = 5;
			}
			else
			{
				iLocal_697[1] = 8;
			}
			__LIB_0__::func_429();
		}
		if (__LIB_17__::func_123(Local_483[1 /*5*/], 1, 1116471296, 1126825984, 0, 0, 0, 0))
		{
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
			{
				func_541(Local_483[1 /*5*/]);
				iLocal_697[1] = 7;
			}
			else
			{
				func_545(Local_483[1 /*5*/]);
				iLocal_697[1] = 6;
			}
			__LIB_0__::func_429();
		}
	}
}

void func_545(int iParam0)//Position - 0x45959
{
	if (__LIB_0__::func_692(iParam0))
	{
		TASK::CLEAR_PED_TASKS(iParam0);
		TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iParam0, 100f, 0);
		PED::SET_PED_KEEP_TASK(iParam0, true);
	}
}

int func_562(int iParam0)//Position - 0x4624D
{
	if (__LIB_0__::func_692(iParam0))
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, PLAYER::PLAYER_PED_ID()))
		{
			return 1;
		}
	}
	return 0;
}

void func_563()//Position - 0x46270
{
	struct<6> Var0;
	struct<6> Var1;
	int iVar2;
	func_566();
	Var0 = { __LIB_0__::func_486() };
	Var1 = { __LIB_13__::func_743() };
	switch (iLocal_697[0])
	{
		case 0:
			break;
		case 1:
			if (iLocal_744 == 4 || func_536(Local_467[3 /*3*/], 5f, 2f, 2.5f))
			{
			}
			break;
		case 2:
			func_565();
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
			{
				func_564(Var0);
			}
			if (ENTITY::IS_ENTITY_AT_COORD(Local_483[0 /*5*/], 15.7815f, 333.5496f, 109.919f, 4f, 4f, 2f, false, true, 0))
			{
				TASK::TASK_LOOK_AT_ENTITY(Local_483[0 /*5*/], Local_483[1 /*5*/], -1, 0, 2);
				iLocal_697[0] = 3;
			}
			break;
		case 3:
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0) && !MISC::IS_STRING_NULL_OR_EMPTY(&Var1))
			{
				func_564(Var0);
				if (MISC::ARE_STRINGS_EQUAL(&Var1, "PAP2_STAFF_11") || !MISC::ARE_STRINGS_EQUAL(&Var0, "PAP2_STAFF"))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(Local_483[0 /*5*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1)
					{
						TASK::TASK_CLEAR_LOOK_AT(Local_483[0 /*5*/]);
						TASK::OPEN_SEQUENCE_TASK(&iVar2);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 18.6864f, 334.4601f, 109.9186f, 1f, -1, 1f, 1, 40000f);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 22.6585f, 333.7577f, 109.9186f, 1f, -1, 1f, 1, 40000f);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 24.7426f, 334.8422f, 110.49f, 1f, -1, 1f, 1, 40000f);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 31.3388f, 335.7056f, 114.3914f, 1f, -1, 1f, 1, 40000f);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 11.6968f, 345.9524f, 114.3914f, 1f, -1, 1f, 1, 40000f);
						TASK::CLOSE_SEQUENCE_TASK(iVar2);
						TASK::TASK_PERFORM_SEQUENCE(Local_483[0 /*5*/], iVar2);
						TASK::CLEAR_SEQUENCE_TASK(&iVar2);
					}
				}
			}
			break;
		case 4:
			switch (iLocal_698)
			{
				case 0:
					if (ENTITY::IS_ENTITY_AT_COORD(Local_483[0 /*5*/], Local_485[iLocal_487 /*5*/], 1f, 1f, 1.5f, false, true, 0))
					{
						switch (Local_485[iLocal_487 /*5*/].f_4)
						{
							case 1:
								break;
							case 2:
								break;
						}
					}
					else if (TASK::GET_SCRIPT_TASK_STATUS(Local_483[0 /*5*/], joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_483[0 /*5*/], joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) != 0)
					{
					}
					break;
				case 2:
					if (TASK::GET_SCRIPT_TASK_STATUS(Local_483[0 /*5*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_483[0 /*5*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 0)
					{
						iLocal_487 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
					}
					break;
				case 1:
					if (TASK::GET_SCRIPT_TASK_STATUS(Local_483[0 /*5*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_483[0 /*5*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 0)
					{
						iLocal_487 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
					}
					break;
			}
			break;
		case 8:
			if (__LIB_0__::func_76(Local_483[0 /*5*/], PLAYER::PLAYER_PED_ID(), 1) < 12f)
			{
				if (__LIB_2__::func_859(&uLocal_489, cLocal_751, "PAP2_MDFLEEB", 9, 0, 0, 0))
				{
					iLocal_697[0] = 4;
					iLocal_697[1] = 4;
					bLocal_726 = true;
				}
			}
			else
			{
				iLocal_697[0] = 4;
				iLocal_697[1] = 4;
				bLocal_726 = true;
			}
			break;
		case 5:
			if (__LIB_0__::func_76(Local_483[0 /*5*/], PLAYER::PLAYER_PED_ID(), 1) < 12f)
			{
				if (__LIB_2__::func_859(&uLocal_489, cLocal_751, "PAP2_MDFLEE1", 9, 0, 0, 0))
				{
					func_541(Local_483[1 /*5*/]);
					iLocal_697[0] = 9;
					iLocal_697[1] = 9;
				}
			}
			else
			{
				func_541(Local_483[1 /*5*/]);
				iLocal_697[0] = 9;
				iLocal_697[1] = 9;
			}
			break;
		case 7:
			if (__LIB_0__::func_76(Local_483[0 /*5*/], PLAYER::PLAYER_PED_ID(), 1) < 12f)
			{
				if (__LIB_2__::func_859(&uLocal_489, cLocal_751, "PAP2_MDFLEE2", 9, 0, 0, 0))
				{
					func_541(Local_483[1 /*5*/]);
					iLocal_697[0] = 9;
					iLocal_697[1] = 9;
				}
			}
			else
			{
				func_541(Local_483[1 /*5*/]);
				iLocal_697[0] = 9;
				iLocal_697[1] = 9;
			}
			break;
		case 6:
			if (__LIB_0__::func_76(Local_483[0 /*5*/], PLAYER::PLAYER_PED_ID(), 1) < 12f)
			{
				if (__LIB_2__::func_859(&uLocal_489, cLocal_751, "PAP2_MDFLEE3", 9, 0, 0, 0))
				{
					func_545(Local_483[1 /*5*/]);
					iLocal_697[0] = 9;
					iLocal_697[1] = 9;
				}
			}
			else
			{
				func_545(Local_483[1 /*5*/]);
				iLocal_697[0] = 9;
				iLocal_697[1] = 9;
			}
			break;
		case 9:
			bLocal_726 = true;
			break;
	}
}

void func_564(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x466F2
{
	int iVar0;
	if (MISC::ARE_STRINGS_EQUAL(&uParam0, "PAP2_STAFF"))
	{
		iVar0 = AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
		if (TASK::GET_SCRIPT_TASK_STATUS(Local_483[0 /*5*/], joaat("SCRIPT_TASK_PLAY_ANIM")) != 1)
		{
			switch (iVar0)
			{
				case 5:
					break;
				case 9:
					break;
				case 11:
					break;
				}
			}
	}
}

void func_565()//Position - 0x46743
{
	int iVar0;
	if (MISC::GET_GAME_TIMER() > iLocal_226 + 13000 && MISC::GET_GAME_TIMER() < iLocal_226 + 15000)
	{
		if (__LIB_0__::func_692(Local_483[0 /*5*/]))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(Local_483[0 /*5*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1)
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 15.7815f, 333.5496f, 109.919f, 1.2f, 30000, 0.25f, 0, 40000f);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::TASK_PERFORM_SEQUENCE(Local_483[0 /*5*/], iVar0);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			}
		}
	}
}

void func_566()//Position - 0x467CE
{
	if (iLocal_697[0] <= 4 && iLocal_697[1] <= 4)
	{
		if (func_562(Local_483[0 /*5*/]))
		{
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
			{
				iLocal_697[0] = 5;
			}
			else
			{
				iLocal_697[0] = 8;
			}
			TASK::TASK_LOOK_AT_ENTITY(Local_483[0 /*5*/], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
			__LIB_0__::func_429();
		}
		else if (PED::IS_PED_FACING_PED(Local_483[0 /*5*/], PLAYER::PLAYER_PED_ID(), 90f) && __LIB_0__::func_687(Local_483[0 /*5*/], PLAYER::PLAYER_PED_ID(), 15f, 1))
		{
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
			{
				iLocal_697[0] = 5;
			}
			else
			{
				iLocal_697[0] = 8;
			}
			TASK::TASK_LOOK_AT_ENTITY(Local_483[0 /*5*/], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
			__LIB_0__::func_429();
		}
		if (__LIB_17__::func_123(Local_483[0 /*5*/], 1, 1116471296, 1126825984, 0, 0, 0, 0))
		{
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
			{
				func_541(Local_483[0 /*5*/]);
				iLocal_697[0] = 7;
			}
			else
			{
				func_541(Local_483[0 /*5*/]);
				func_545(Local_483[1 /*5*/]);
				iLocal_697[0] = 6;
			}
			__LIB_0__::func_429();
		}
	}
}

void func_567()//Position - 0x468EE
{
	if (__LIB_0__::func_692(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_SHOOTING_IN_AREA(PLAYER::PLAYER_PED_ID(), Local_465, Local_466, false, true))
		{
			func_354(6);
		}
	}
	if (func_568(Local_465, Local_466))
	{
		func_354(6);
	}
}

int func_568(struct<3> Param0, struct<3> Param1)//Position - 0x46933
{
	if (func_28(PLAYER::PLAYER_PED_ID(), func_569(PLAYER::PLAYER_PED_ID())))
	{
		if (ENTITY::IS_ENTITY_IN_AREA(PLAYER::PLAYER_PED_ID(), Param0, Param1, false, true, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_569(int iParam0)//Position - 0x46969
{
	int iVar0;
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, false);
		if (__LIB_0__::func_121(iVar0))
		{
			return iVar0;
		}
	}
	return 0;
}

void func_570()//Position - 0x46993
{
	if (!bLocal_726 && !bLocal_727)
	{
		if (__LIB_0__::func_692(PLAYER::PLAYER_PED_ID()))
		{
			if (iLocal_692 != 11)
			{
				if (__LIB_0__::func_692(Local_482.f_0))
				{
					if (__LIB_17__::func_123(Local_482.f_0, 1, 1116471296, 1126825984, 0, 0, 0, 0))
					{
						if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
						{
							TASK::TASK_SMART_FLEE_PED(Local_482.f_0, PLAYER::PLAYER_PED_ID(), 300f, -1, false, false);
						}
						else
						{
							TASK::TASK_COMBAT_PED(Local_482.f_0, PLAYER::PLAYER_PED_ID(), 0, 16);
						}
						bLocal_726 = true;
					}
				}
				if (__LIB_0__::func_692(Local_480.f_0))
				{
					if (__LIB_0__::func_692(Local_481.f_0))
					{
						if (__LIB_17__::func_123(Local_480.f_0, 1, 1116471296, 1126825984, 0, 0, 0, 0))
						{
							bLocal_726 = true;
						}
					}
				}
			}
			if (__LIB_0__::func_692(Local_480.f_0))
			{
				if ((func_518(Local_480.f_0, 10f, 10f, 1.5f) && iLocal_692 != 11) && !iLocal_714)
				{
					HUD::CLEAR_PRINTS();
					iLocal_714 = 1;
				}
			}
			if (__LIB_0__::func_692(Local_480.f_0))
			{
				if (__LIB_0__::func_692(Local_481.f_0))
				{
					if ((func_518(Local_480.f_0, 6f, 6f, 2.5f) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -42.5662f, 301.8173f, 111.6957f, -37.569f, 313.1216f, 111.6957f, 5f, false, false, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -44.4977f, 296.7267f, 111.5461f, -23.9906f, 291.6258f, 111.5461f, 9.5f, false, false, 0))
					{
						ENTITY::FREEZE_ENTITY_POSITION(Local_480.f_0, false);
						ENTITY::FREEZE_ENTITY_POSITION(Local_481.f_0, false);
						bLocal_726 = true;
					}
					if (iLocal_283 == 0 && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -33.33354f, 324.25146f, 111.67474f, -36.29159f, 317.22824f, 115.44581f, 7.75f, false, false, 0))
					{
						bLocal_726 = true;
					}
				}
			}
		}
		if (bLocal_726 || bLocal_727)
		{
			__LIB_0__::func_325();
		}
	}
}

void func_571()//Position - 0x46B74
{
	int iVar0;
	char* sVar1;
	iVar0 = 12;
	sVar1 = "PAP2_INACT";
	if (iLocal_744 == 7)
	{
		sVar1 = "PAP2_INACT2";
		iVar0 = 5;
	}
	if (!bLocal_712)
	{
		if (__LIB_0__::func_76(iLocal_475, PLAYER::PLAYER_PED_ID(), 1) < IntToFloat(iVar0))
		{
			if (!__LIB_0__::func_75())
			{
				if (iLocal_744 > 3)
				{
					bLocal_712 = __LIB_2__::func_859(&uLocal_489, cLocal_751, sVar1, 9, 0, 0, 0);
				}
				else
				{
					bLocal_712 = true;
				}
			}
		}
	}
}

void func_572()//Position - 0x46BDC
{
	if (iLocal_720)
	{
		if (func_324(10, Local_462, 0))
		{
			if (func_324(2, Local_480.f_1, Local_480.f_4) && func_324(3, Local_481.f_1, Local_481.f_4))
			{
				iLocal_720 = 0;
				iLocal_275 = 1;
			}
		}
	}
}

void func_573()//Position - 0x46C2B
{
	struct<6> Var0;
	if (iLocal_357 == 1)
	{
		if (__LIB_0__::func_692(Local_483[0 /*5*/]))
		{
			Var0 = { __LIB_0__::func_486() };
			if (iLocal_259 == 0)
			{
				if (__LIB_0__::func_692(iLocal_475) && !iLocal_336)
				{
					if (__LIB_0__::func_687(Local_483[0 /*5*/], iLocal_475, 12f, 1) || __LIB_0__::func_687(Local_483[0 /*5*/], PLAYER::PLAYER_PED_ID(), 12f, 1))
					{
						iLocal_236 = MISC::GET_GAME_TIMER();
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_483[0 /*5*/], 16.6655f, 332.9557f, 109.9194f, 1.3f, -1, 2f, 1024, 351.8812f);
						iLocal_259 = 1;
					}
				}
			}
			if (iLocal_259 == 1)
			{
				if (MISC::ARE_STRINGS_EQUAL(&Var0, "PAP2_STAFF"))
				{
					if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() > 2)
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_483[0 /*5*/], 16.6655f, 332.9557f, 109.9194f, 1.3f, -1, 2f, 1024, 351.8812f);
						iLocal_259 = 2;
					}
				}
				if (!__LIB_0__::func_75())
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_483[0 /*5*/], 16.6655f, 332.9557f, 109.9194f, 1.3f, -1, 2f, 1024, 351.8812f);
					iLocal_259 = 2;
				}
			}
			if (iLocal_259 == 2)
			{
				if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("Pap2_Maid"))
				{
					if (!__LIB_0__::func_75() && MISC::GET_GAME_TIMER() > iLocal_236 + 5000)
					{
						TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_483[0 /*5*/], "Pap2_Maid", 0, 8, -1);
						iLocal_259 = 3;
					}
				}
			}
		}
	}
}

void func_575()//Position - 0x46DFC
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_355[5]))
	{
		if (__LIB_0__::func_692(iLocal_355[5]))
		{
			__LIB_0__::func_631(iLocal_355[5], &uLocal_408, -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0);
			if ((PED::IS_PED_RAGDOLL(iLocal_355[5]) || __LIB_17__::func_123(iLocal_355[5], 1, 1116471296, 1126825984, 0, 0, 0, 0)) || PED::IS_PED_FLEEING(iLocal_355[5]))
			{
				bLocal_312 = true;
				bLocal_726 = true;
			}
		}
		else
		{
			bLocal_312 = true;
			bLocal_726 = true;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_355[1]))
	{
		if (__LIB_0__::func_692(iLocal_355[1]))
		{
			__LIB_0__::func_631(iLocal_355[1], &uLocal_376, -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0);
			if ((PED::IS_PED_RAGDOLL(iLocal_355[1]) || __LIB_17__::func_123(iLocal_355[1], 1, 1116471296, 1126825984, 0, 0, 0, 0)) || PED::IS_PED_FLEEING(iLocal_355[1]))
			{
				bLocal_312 = true;
				bLocal_726 = true;
			}
		}
		else
		{
			bLocal_312 = true;
			bLocal_726 = true;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_355[3]))
	{
		if (__LIB_0__::func_692(iLocal_355[3]))
		{
			__LIB_0__::func_631(iLocal_355[3], &uLocal_392, -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0);
			if ((PED::IS_PED_RAGDOLL(iLocal_355[3]) || __LIB_17__::func_123(iLocal_355[3], 1, 1116471296, 1126825984, 0, 0, 0, 0)) || PED::IS_PED_FLEEING(iLocal_355[3]))
			{
				bLocal_312 = true;
				bLocal_726 = true;
			}
		}
		else
		{
			bLocal_312 = true;
			bLocal_726 = true;
		}
	}
}

void func_576()//Position - 0x46F93
{
	if (__LIB_0__::func_692(Local_483[1 /*5*/]) && __LIB_0__::func_692(Local_483[0 /*5*/]))
	{
		if (((STREAMING::HAS_MODEL_LOADED(joaat("S_M_Y_BusBoy_01")) && STREAMING::HAS_MODEL_LOADED(joaat("S_F_M_Maid_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("A_M_M_Beach_02"))) && STREAMING::HAS_CLIP_SET_LOADED("move_f@sexy@a"))
		{
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_483[1 /*5*/], "PAPARAZZO_HECTOR", 0f);
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("PAPARAZZO_02_INTRO"))
			{
				AUDIO::START_AUDIO_SCENE("PAPARAZZO_02_INTRO");
			}
			iLocal_355[2] = PED::CREATE_PED(26, joaat("S_M_Y_BusBoy_01"), 15.1052f, 336.1419f, 109.9186f, 237.5365f, true, true);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_355[2], 0, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_355[2], 3, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_355[2], 4, 0, 0, 0);
			TASK::TASK_START_SCENARIO_IN_PLACE(iLocal_355[2], "WORLD_HUMAN_SMOKING", 0, false);
			iLocal_355[3] = PED::CREATE_PED(26, joaat("S_F_M_Maid_01"), 16.381054f, 314.90598f, 110.91867f, -119.928345f, true, true);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_355[3], 0, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_355[3], 2, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_355[3], 3, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_355[3], 4, 0, 2, 0);
			TASK::TASK_START_SCENARIO_IN_PLACE(iLocal_355[3], "WORLD_HUMAN_MAID_CLEAN", 0, false);
			iLocal_355[4] = PED::CREATE_PED(26, joaat("A_M_M_Beach_02"), 20.0922f, 336.7069f, 114.3914f, 154.9176f, true, true);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_355[4], 0, 1, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_355[4], 3, 1, 4, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_355[4], 4, 0, 5, 0);
			TASK::TASK_START_SCENARIO_IN_PLACE(iLocal_355[4], "WORLD_HUMAN_AA_COFFEE", 0, false);
			iLocal_355[5] = PED::CREATE_PED(26, joaat("A_M_M_Beach_02"), -8.6062f, 337.2177f, 112.161f, 206.6986f, true, true);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_355[5], 0, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_355[5], 3, 1, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_355[5], 4, 0, 0, 0);
			TASK::TASK_START_SCENARIO_IN_PLACE(iLocal_355[5], "WORLD_HUMAN_DRINKING", 0, false);
			TASK::TASK_START_SCENARIO_AT_POSITION(Local_483[1 /*5*/], "WORLD_HUMAN_SEAT_STEPS", 16.984f, 336.9486f, 110.319f, 157.6965f, 0, false, true);
			PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_483[1 /*5*/], false);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_Y_BusBoy_01"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_F_M_Maid_01"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_M_M_Beach_02"));
			PED::SET_PED_MOVEMENT_CLIPSET(Local_483[0 /*5*/], "move_f@sexy@a", 0.25f);
			iLocal_357 = 1;
		}
	}
}

void func_577()//Position - 0x4720A
{
	if (iLocal_358 == 0)
	{
		STREAMING::REQUEST_MODEL(joaat("S_M_Y_BusBoy_01"));
		STREAMING::REQUEST_MODEL(joaat("S_F_M_Maid_01"));
		STREAMING::REQUEST_MODEL(joaat("A_M_M_Beach_02"));
		STREAMING::REQUEST_CLIP_SET("move_f@sexy@a");
		TASK::REQUEST_WAYPOINT_RECORDING("Pap2_Maid");
		iLocal_358 = 1;
	}
}

void func_578()//Position - 0x47249
{
	if (!__LIB_0__::func_501("PAP2_08", 0, 0) && !bLocal_272)
	{
		if (iLocal_265 < 4)
		{
			if (!__LIB_0__::func_75())
			{
				if (MISC::GET_GAME_TIMER() > iLocal_264 + 10000)
				{
					if (__LIB_0__::func_76(iLocal_475, PLAYER::PLAYER_PED_ID(), 1) < 30f)
					{
						if (__LIB_2__::func_859(&uLocal_489, cLocal_751, "PAP2_INACT2", 7, 0, 0, 0))
						{
							iLocal_264 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(0, 2000));
							iLocal_265++;
						}
					}
				}
			}
		}
		else if (!__LIB_0__::func_75())
		{
			if (MISC::GET_GAME_TIMER() > iLocal_264 + 10000)
			{
				if (__LIB_2__::func_859(&uLocal_489, cLocal_751, "PAP2_FAILCAM", 7, 0, 0, 0))
				{
				}
				func_354(4);
			}
		}
	}
}

void func_579()//Position - 0x472FB
{
	iLocal_243 = 2;
	if (iLocal_275 == 1)
	{
		if (iLocal_243 == 1)
		{
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_220))
			{
				AUDIO::STOP_SYNCHRONIZED_AUDIO_EVENT(iLocal_220);
				iLocal_243 = 2;
			}
		}
		else if (iLocal_243 == 0)
		{
			if (iLocal_290 == 0)
			{
				AUDIO::INIT_SYNCH_SCENE_AUDIO_WITH_ENTITY("PAP2_IG1_POPPYSEX", Local_480.f_0);
				__LIB_0__::func_467("TK************ SETTING SYNCH SCENE AUDIO POSITION THIS FRAME ************TK");
				iLocal_290 = 1;
			}
			if (AUDIO::PREPARE_SYNCHRONIZED_AUDIO_EVENT("PAP2_IG1_POPPYSEX", 0) == 1)
			{
				func_256(1);
				iLocal_243 = 1;
			}
		}
		else if (iLocal_243 == 2)
		{
			if (__LIB_0__::func_692(Local_480.f_0))
			{
				if (bLocal_272 == 0)
				{
					func_256(0);
				}
			}
		}
	}
}

void func_585()//Position - 0x47432
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	__LIB_0__::func_646();
	func_593();
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	HUD::THEFEED_HIDE_THIS_FRAME();
	if (!func_592())
	{
		return;
	}
	if (!iLocal_722)
	{
		if (func_248(1, bLocal_703))
		{
			iLocal_722 = 1;
		}
	}
	if ((CUTSCENE::WAS_CUTSCENE_SKIPPED() || CAM::IS_SCREEN_FADED_OUT()) || CAM::IS_SCREEN_FADING_OUT())
	{
		iLocal_306 = 1;
	}
	switch (iLocal_693)
	{
		case 0:
			if (__LIB_0__::func_494(1, 0, 1))
			{
				if (__LIB_14__::func_740(1, 1093140480, 0))
				{
					if (!bLocal_359 || MISC::GET_GAME_TIMER() > iLocal_360 + 3000)
					{
						if (iLocal_704 == 0)
						{
							iLocal_475 = Local_214.f_28[0];
							Local_214.f_28[0] = 0;
							if (__LIB_0__::func_692(iLocal_475))
							{
								PED::SET_PED_LEG_IK_MODE(iLocal_475, 2);
							}
						}
						iLocal_301 = 0;
						iLocal_302 = 0;
						iLocal_304 = 0;
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_475))
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_475, false))
							{
								CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_475, "Beverley", 0, 0, 0);
							}
						}
						if (!ENTITY::DOES_ENTITY_EXIST(Local_214.f_41[0]))
						{
							Local_214.f_41[0] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_pap_camera_01"), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_475, 0f, 0f, 20f), true, true, false);
						}
						if (ENTITY::IS_ENTITY_ATTACHED(Local_214.f_41[0]))
						{
							ENTITY::DETACH_ENTITY(Local_214.f_41[0], true, true);
						}
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_214.f_41[0], "Beverlys_camera", 0, joaat("prop_pap_camera_01"), 0);
						__LIB_14__::func_841();
						CUTSCENE::START_CUTSCENE(0);
						RECORDING::REPLAY_START_EVENT(1);
						SYSTEM::WAIT(0);
						__LIB_13__::func_789();
						CAM::STOP_GAMEPLAY_HINT(false);
						if (__LIB_0__::func_121(iLocal_759))
						{
							__LIB_14__::func_659(iLocal_759, -78.101295f, 298.96756f, 106.04703f, -109.118706f, 0, 1);
							VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_759, 5f);
						}
						iVar0 = ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYERS_LAST_VEHICLE());
						if (VEHICLE::IS_THIS_MODEL_A_HELI(iVar0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iVar0))
						{
							Var1 = { -201.52f, 307.55f, 96.84f };
							fVar2 = 261.18f;
						}
						else if (iVar0 == joaat("blimp") || iVar0 == joaat("blimp2"))
						{
							Var1 = { -211.02f, 474.41f, 133.36f };
							fVar2 = 281.42f;
						}
						else
						{
							Var1 = { -88.6147f, 303.8292f, 105.9208f };
							fVar2 = 245.3452f;
						}
						__LIB_14__::func_592(-10.662442f, 283.07034f, 110.23729f, -76.66436f, 301.18158f, 104.585754f, 6f, Var1, fVar2, 1, 1, 1, 0, 0);
						__LIB_14__::func_592(-86.61621f, 297.2772f, 102.94322f, -55.158104f, 286.53983f, 109.6697f, 16.75f, Var1, fVar2, 1, 1, 1, 0, 0);
						__LIB_14__::func_592(-55.969414f, 318.224f, 109.39438f, 14.169346f, 300.16077f, 117.99812f, 41.75f, Var1, fVar2, 1, 1, 1, 0, 0);
						__LIB_14__::func_785(0f, 0f, 0f, 0f, 1, 1);
						func_262(Local_215, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
						MISC::CLEAR_AREA_OF_PEDS(-28.7403f, 303.3516f, 111.6961f, 40f, 0);
						MISC::CLEAR_AREA_OF_PEDS(-17.3155f, 340.0973f, 110.4743f, 50f, 0);
						MISC::CLEAR_AREA_OF_PEDS(12.2397f, 319.1199f, 109.8446f, 50f, 0);
						MISC::CLEAR_AREA_OF_VEHICLES(-12.2142f, 280.2522f, 107.3232f, 20f, false, false, false, false, false, false, 0);
						MISC::CLEAR_AREA_OF_VEHICLES(-48.1975f, 352.4658f, 112.0536f, 5f, false, false, false, false, false, false, 0);
						MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(-55.969414f, 318.224f, 109.39438f, 14.169346f, 300.16077f, 117.99812f, 41.75f, false, false, false, false, false, 0, 0);
						if (CAM::IS_SCREEN_FADED_OUT())
						{
							if (!CAM::IS_SCREEN_FADING_IN())
							{
								__LIB_0__::func_84(800, 0);
							}
						}
						iLocal_693 = 1;
					}
				}
			}
			break;
		case 1:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_214.f_41[0]))
			{
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Beverlys_camera", 0)))
				{
					Local_214.f_41[0] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Beverlys_camera", 0));
					__LIB_0__::func_467("BEVERLYS CAMERA - GOT HANDLE FROM CS");
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_475))
			{
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Beverley", 0)))
				{
					iLocal_475 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Beverley", 0));
				}
			}
			else if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Beverley", 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_214.f_41[0]))
				{
					ENTITY::DETACH_ENTITY(Local_214.f_41[0], true, true);
					OBJECT::DELETE_OBJECT(&(Local_214.f_41[0]));
				}
				else if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Beverlys_camera", 0)))
				{
					Local_214.f_41[0] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Beverlys_camera", 0));
					ENTITY::DETACH_ENTITY(Local_214.f_41[0], true, true);
					OBJECT::DELETE_OBJECT(&(Local_214.f_41[0]));
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_353))
				{
					iLocal_353 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_pap_camera_01"), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_475, 0f, 0f, 20f), true, true, false);
				}
				if (__LIB_0__::func_121(iLocal_475))
				{
					if (__LIB_0__::func_121(iLocal_353))
					{
						ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_353, iLocal_475, PED::GET_PED_BONE_INDEX(iLocal_475, 28422), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, 0);
					}
					if (STREAMING::HAS_CLIP_SET_LOADED(sLocal_752))
					{
						PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(iLocal_475, sLocal_752);
					}
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_475, false, false);
					TASK::TASK_LOOK_AT_ENTITY(iLocal_475, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_475, -60.9116f, 295.3501f, 105.0975f, 1f, 20000, 0.25f, 0, 40000f);
					iLocal_302 = 1;
				}
			}
			if (iLocal_301 == 0)
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
				{
					RECORDING::REPLAY_STOP_EVENT();
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(0f, 10f, 0);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(16.1556f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-6.6252f, 1f);
					iLocal_301 = 1;
				}
			}
			if (iLocal_304 == 0)
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0))
				{
					PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Walk"), false, 1, false);
					PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(PLAYER::PLAYER_PED_ID(), -63.1068f, 294.9655f, 105.0442f, 1f, -1, 1f, 2113, 40000f);
					iLocal_304 = 1;
				}
			}
			if (((iLocal_301 == 1 && iLocal_302 == 1) && iLocal_304 == 1) && !CAM::IS_SCREEN_FADING_OUT())
			{
				iLocal_693 = 2;
			}
			break;
		case 2:
			__LIB_14__::func_870(1, 1, 1, 1);
			__LIB_14__::func_800(&Local_214, 0, 1);
			iLocal_237 = MISC::GET_GAME_TIMER();
			if (iLocal_306 == 1)
			{
			}
			func_338(0);
			break;
		case 3:
			iLocal_693 = 2;
			break;
	}
}

int func_592()//Position - 0x47D8E
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_214.f_28[0]))
	{
		return 1;
	}
	else if (__LIB_0__::func_692(Local_214.f_28[0]))
	{
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_40))
		{
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_40) >= 0.21f && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_40) <= 0.91f)
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	__LIB_0__::func_91();
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -69.11025f, 302.94745f, 105.33438f, -77.48595f, 306.754f, 110.55698f, 7f, false, true, 0) || __LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), Local_214.f_28[0], 3f, 1))
	{
		return 1;
	}
	return 0;
}

void func_593()//Position - 0x47E3E
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	fVar0 = 35f;
	fVar1 = 0.4f;
	fVar2 = 0f;
	fVar3 = 0.1f;
	fVar4 = 0.02f;
	if (((!__LIB_0__::func_323() && __LIB_0__::func_692(Local_214.f_28[0])) && __LIB_0__::func_692(PLAYER::PLAYER_PED_ID())) && bLocal_359 == 1)
	{
		if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_214.f_28[0], -1, 0, 2);
			CAM::SET_GAMEPLAY_HINT_CAMERA_BLEND_TO_FOLLOW_PED_MEDIUM_VIEW_MODE(true);
			CAM::SET_GAMEPLAY_ENTITY_HINT(Local_214.f_28[0], 0f, 0f, 0f, true, 30000, 2000, 2000, 0);
			CAM::SET_GAMEPLAY_HINT_FOV(fVar0);
			CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(fVar1);
			CAM::SET_GAMEPLAY_HINT_BASE_ORBIT_PITCH_OFFSET(fVar2);
			CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_SIDE_OFFSET(fVar3);
			CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_VERTICAL_OFFSET(fVar4);
			iLocal_360 = MISC::GET_GAME_TIMER();
			__LIB_17__::func_465(1);
		}
		else
		{
			__LIB_16__::func_306(1, 0);
			if (__LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), Local_214.f_28[0], 3f, 1) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -69.11025f, 302.94745f, 105.33438f, -77.48595f, 306.754f, 110.55698f, 7f, false, true, 0))
			{
				iLocal_360 = (iLocal_360 - 5000);
			}
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
			CAM::STOP_GAMEPLAY_HINT_BEING_CANCELLED_THIS_UPDATE(true);
		}
	}
}

void func_596()//Position - 0x48097
{
	func_593();
	switch (iLocal_693)
	{
		case 0:
			func_604();
			if (func_248(0, 0))
			{
				func_603(0);
				PED::SET_PED_NON_CREATION_AREA(Local_465, Local_466);
				if (__LIB_0__::func_692(PLAYER::PLAYER_PED_ID()))
				{
					PED::RESET_PED_WEAPON_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID());
				}
				iLocal_367 = PED::ADD_SCENARIO_BLOCKING_AREA(-66.2521f, 288f, 109f, -14.3327f, 334f, 114f, false, true, true, true);
				iLocal_368 = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(105.1975f, 297.3521f, -67.5738f) - Vector(10f, 10f, 10f), Vector(105.1975f, 297.3521f, -67.5738f) + Vector(10f, 10f, 10f), false, true, true, true);
				iLocal_370 = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(39.8813f, -391.7834f, 82.135f) - Vector(20f, 80f, 80f), Vector(39.8813f, -391.7834f, 82.135f) + Vector(20f, 80f, 80f), false, true, true, true);
				if (__LIB_0__::func_323())
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_214.f_41[0]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_214.f_41[0], false))
						{
							OBJECT::DELETE_OBJECT(&(Local_214.f_41[0]));
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_353))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_353, false))
						{
							OBJECT::DELETE_OBJECT(&iLocal_353);
						}
					}
					iLocal_242 = __LIB_0__::func_344();
					if (Global_94618 == 1)
					{
						iLocal_242++;
					}
					switch (iLocal_242)
					{
						case 0:
							__LIB_14__::func_785(0f, 0f, 0f, 0f, 1, 1);
							MISC::CLEAR_AREA_OF_PEDS(-28.7403f, 303.3516f, 111.6961f, 40f, 0);
							MISC::CLEAR_AREA_OF_PEDS(-17.3155f, 340.0973f, 110.4743f, 50f, 0);
							MISC::CLEAR_AREA_OF_PEDS(12.2397f, 319.1199f, 109.8446f, 50f, 0);
							MISC::CLEAR_AREA_OF_VEHICLES(-12.2142f, 280.2522f, 107.3232f, 20f, false, false, false, false, false, false, 0);
							MISC::CLEAR_AREA_OF_VEHICLES(-48.1975f, 352.4658f, 112.0536f, 5f, false, false, false, false, false, false, 0);
							__LIB_0__::func_427(-72.5612f, 298.2493f, 105.2336f, 247.2199f, 1, 0);
							func_597(2);
							break;
						case 1:
							iLocal_375 = 1;
							__LIB_0__::func_427(-33.681f, 320.9442f, 111.6958f, 182.6031f, 1, 0);
							func_597(5);
							break;
						case 2:
							iLocal_375 = 1;
							__LIB_0__::func_427(-33.1227f, 318.9001f, 111.6958f, 154.1067f, 1, 0);
							func_597(7);
							break;
						case 3:
							iLocal_375 = 1;
							__LIB_0__::func_427(-79.0609f, 296.3315f, 105.3698f, 69.2271f, 1, 0);
							func_597(8);
							break;
						case 4:
							iLocal_375 = 1;
							__LIB_0__::func_427(-69.2061f, -523.7703f, 39.2051f, 163.9675f, 1, 0);
							func_597(9);
							break;
					}
				}
				else if (func_324(0, Local_462, 0))
				{
					iLocal_693 = 2;
				}
			}
			break;
		case 2:
			func_338(0);
			break;
	}
}

void func_597(int iParam0)//Position - 0x4839D
{
	func_600(1, 1);
	bLocal_703 = true;
	iLocal_692 = iParam0;
	if (iLocal_692 == 0)
	{
		iLocal_692 = 1;
	}
	iLocal_243 = 0;
	iLocal_722 = 0;
	iLocal_702 = 0;
	iLocal_704 = 1;
	iLocal_693 = 0;
	iLocal_217 = 0;
	func_598();
}

void func_598()//Position - 0x483DB
{
	__LIB_0__::func_131();
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	func_429();
	if (func_28(PLAYER::PLAYER_PED_ID(), iLocal_759))
	{
		if (VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(iLocal_759) == 4)
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_759, 1);
		}
		if (__LIB_0__::func_692(PLAYER::PLAYER_PED_ID()))
		{
			__LIB_14__::func_659(PLAYER::PLAYER_PED_ID(), Local_458, fLocal_468, 0, 1);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_759))
	{
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_654, false);
		__LIB_8__::func_397(&iLocal_759);
	}
	if (__LIB_0__::func_692(iLocal_475))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_475);
	}
	__LIB_0__::func_0(&Local_480);
	__LIB_0__::func_0(&Local_482);
	__LIB_0__::func_0(&Local_481);
	iLocal_734 = 0;
	while (iLocal_734 <= 1)
	{
		__LIB_0__::func_0(&(Local_483[iLocal_734 /*5*/]));
		iLocal_734++;
	}
	if (iLocal_289 == 0)
	{
		iLocal_734 = 0;
		while (iLocal_734 <= 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_758[iLocal_734]))
			{
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_655[iLocal_734], false);
				if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(uLocal_758[iLocal_734]))
				{
					__LIB_8__::func_397(&(uLocal_758[iLocal_734]));
				}
			}
			iLocal_734++;
		}
	}
	else
	{
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_655[iLocal_734], false);
	}
	if (!MISC::IS_STRING_NULL(&Local_749))
	{
		if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(&Local_749))
		{
			TASK::REMOVE_WAYPOINT_RECORDING(&Local_749);
		}
	}
	if (!MISC::IS_STRING_NULL(&Local_750))
	{
		if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(&Local_750))
		{
			TASK::REMOVE_WAYPOINT_RECORDING(&Local_750);
		}
	}
	func_355(1);
	func_355(0);
	__LIB_0__::func_429();
	HUD::CLEAR_PRINTS();
	__LIB_0__::func_221(&uLocal_489, 0);
	__LIB_0__::func_221(&uLocal_489, 1);
	__LIB_0__::func_221(&uLocal_489, 2);
	__LIB_0__::func_221(&uLocal_489, 3);
	__LIB_0__::func_221(&uLocal_489, 4);
	__LIB_0__::func_714(&iLocal_660);
	ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
	func_376(1, 1);
}

void func_600(bool bParam0, bool bParam1)//Position - 0x4859F
{
	if (bParam0)
	{
		__LIB_17__::func_25(0, 1, 1);
	}
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	func_262(0f, 0f, 0f, 0, 0, 0, 1, 1, 1, bParam1, 1, 1, 1);
}

void func_603(bool bParam0)//Position - 0x486C6
{
	MISC::ENABLE_DISPATCH_SERVICE(1, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(2, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(3, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(4, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(5, bParam0);
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_HUMAN_PAPARAZZI", bParam0);
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		PLAYER::SET_MAX_WANTED_LEVEL(5);
	}
	else
	{
		PLAYER::SET_MAX_WANTED_LEVEL(1);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	}
}

void func_604()//Position - 0x48718
{
	func_614();
	func_611();
	func_610();
	func_607();
	func_605();
}

void func_605()//Position - 0x48734
{
	Local_484[0 /*4*/] = { func_606(91798, "BUILDING_SITE_CRASH", 3) };
	Local_484[1 /*4*/] = { func_606(92411, "BUILDING_SITE_CRASH", 0) };
}

struct<4> func_606(int iParam0, char* sParam1, int iParam2)//Position - 0x48766
{
	struct<4> Var0;
	Var0.f_0 = iParam0;
	Var0.f_2 = sParam1;
	Var0.f_3 = iParam2;
	Var0.f_1 = 0;
	return Var0;
}

void func_607()//Position - 0x48787
{
	__LIB_0__::func_467();
	__LIB_0__::func_467();
}

void func_610()//Position - 0x487A7
{
	Local_467[0 /*3*/] = { -70.2823f, 298.6007f, 105.2842f };
	Local_467[1 /*3*/] = { -12.8842f, 283.1092f, 107.2567f };
	Local_467[2 /*3*/] = { -9.737f, 286.8741f, 108.4575f };
	Local_467[3 /*3*/] = { -2.8843f, 291.4941f, 109.9209f };
	Local_467[4 /*3*/] = { 5.6191f, 309.9637f, 109.9198f };
	Local_467[5 /*3*/] = { -4.6429f, 318.5697f, 109.9198f };
	Local_467[6 /*3*/] = { -34.2534f, 332.7881f, 112.1618f };
	Local_467[7 /*3*/] = { -33.4322f, 319.0293f, 111.6957f };
}

void func_611()//Position - 0x48867
{
	Local_480.f_1 = { -30.5144f, 308.4476f, 111.6949f };
	Local_480.f_4 = 50.6254f;
	Local_481.f_1 = { -31.584f, 306.8474f, 111.6949f };
	Local_481.f_4 = 21.4212f;
	Local_483[0 /*5*/].f_1 = { 1.1046f, 300.3212f, 109.919f };
	Local_483[0 /*5*/].f_4 = 335.6462f;
	Local_483[1 /*5*/].f_1 = { 16.984f, 336.9486f, 110.319f };
	Local_483[1 /*5*/].f_4 = 157.6965f;
	Local_482.f_1 = { -46.9907f, 328.4976f, 111.6962f };
	Local_482.f_4 = 303.7287f;
	iLocal_659[0] = joaat("S_F_M_Maid_01");
	iLocal_697[0] = 0;
	iLocal_659[1] = joaat("S_M_Y_BusBoy_01");
	iLocal_697[1] = 0;
	func_612();
}

void func_612()//Position - 0x48943
{
	Local_485[0 /*5*/] = { func_613(17.7501f, 339.8129f, 114.3926f, 157.8568f, 2) };
	Local_485[1 /*5*/] = { func_613(21.1623f, 341.5796f, 114.3926f, 338.0048f, 1) };
	Local_485[2 /*5*/] = { func_613(38.4316f, 340.2473f, 114.3926f, 66.9258f, 1) };
	Local_485[3 /*5*/] = { func_613(11.1311f, 327.7826f, 109.9198f, 110.9247f, 1) };
	Local_485[4 /*5*/] = { func_613(22.3298f, 305.797f, 109.9198f, 255.7478f, 2) };
	Local_486[0 /*3*/] = { 1.7382f, 301.8018f, 109.9198f };
	Local_486[1 /*3*/] = { 19.2729f, 326.7421f, 109.9198f };
	Local_486[2 /*3*/] = { 12.4255f, 323.3313f, 109.9188f };
}

struct<5> func_613(struct<3> Param0, float fParam1, int iParam2)//Position - 0x48A35
{
	struct<5> Var0;
	Var0 = { Param0 };
	Var0.f_3 = fParam1;
	Var0.f_4 = iParam2;
	return Var0;
}

void func_614()//Position - 0x48A55
{
	iLocal_655[0] = joaat("rapidgt2");
	iLocal_655[1] = joaat("landstalker");
	iLocal_655[2] = joaat("landstalker");
	Local_461[0 /*3*/] = { -61.5802f, 337.5996f, 111.1479f };
	fLocal_470[0] = 157.8698f;
	Local_461[1 /*3*/] = { -62.3344f, 322.6908f, 109.2141f };
	fLocal_470[1] = 155.9353f;
	Local_461[2 /*3*/] = { -68.0634f, 309.3348f, 107.2594f };
	fLocal_470[2] = 155.9353f;
}

void func_615()//Position - 0x48AE4
{
	if (iLocal_692 < 10)
	{
		func_617();
		func_616();
		if (!bLocal_727)
		{
			if (__LIB_17__::func_123(iLocal_475, 1, 1116471296, 1126825984, 0, 0, 0, 0) || (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) && iLocal_692 < 5))
			{
				__LIB_0__::func_429();
				func_541(iLocal_475);
				func_541(Local_483[0 /*5*/]);
				func_541(Local_483[1 /*5*/]);
				func_541(Local_480.f_0);
				func_541(Local_481.f_0);
				func_541(Local_482.f_0);
				bLocal_727 = true;
			}
		}
	}
}

void func_616()//Position - 0x48B6D
{
	if (!bLocal_703)
	{
		switch (iLocal_692)
		{
			case 2:
				if (__LIB_0__::func_692(iLocal_475))
				{
					if (func_536(-46.2972f, 351.4437f, 112.5526f, 3f, 3f, 5f) || !__LIB_0__::func_687(iLocal_475, PLAYER::PLAYER_PED_ID(), 120f, 1))
					{
						func_354(13);
					}
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -51.9864f, 340.5381f, 111.0746f, -62.178f, 344.6878f, 114.3459f, 20f, false, true, 0))
				{
					if (!iLocal_715)
					{
						HUD::CLEAR_PRINTS();
						__LIB_0__::func_325();
						__LIB_0__::func_229("PAP2_06", 7500, 0);
						iLocal_715 = 1;
					}
				}
			case 3:
			case 4:
			case 6:
			case 7:
				if (iLocal_692 >= 3)
				{
					if (!func_518(iLocal_475, 25f, 25f, 40f))
					{
						if (iLocal_742 > 300)
						{
							if (iLocal_692 == 7)
							{
							}
							else
							{
								func_354(17);
							}
						}
						else
						{
							iLocal_742++;
						}
						if (iLocal_692 != 7)
						{
							if (!iLocal_715)
							{
								__LIB_0__::func_229("PAP2_06", 7500, 0);
								iLocal_715 = 1;
							}
						}
					}
					else
					{
						iLocal_742 = 0;
					}
				}
				break;
			}
	}
}

void func_617()//Position - 0x48CA2
{
	switch (iLocal_692)
	{
		case 2:
		case 3:
		case 4:
		case 6:
		case 7:
			if (func_619(iLocal_475))
			{
				if (ENTITY::IS_ENTITY_DEAD(iLocal_475, false))
				{
					func_354(1);
				}
				else
				{
					func_541(iLocal_475);
					func_354(2);
				}
			}
			if (func_619(Local_480.f_0))
			{
				if (ENTITY::IS_ENTITY_DEAD(Local_480.f_0, false))
				{
					func_354(8);
					if (__LIB_0__::func_692(Local_481.f_0))
					{
						func_541(Local_481.f_0);
					}
				}
				else
				{
					if (__LIB_0__::func_692(Local_480.f_0))
					{
						func_541(Local_480.f_0);
					}
					if (__LIB_0__::func_692(Local_481.f_0))
					{
						func_541(Local_481.f_0);
					}
					func_354(9);
				}
			}
			if (func_619(Local_481.f_0))
			{
				if (ENTITY::IS_ENTITY_DEAD(Local_481.f_0, false))
				{
					func_354(10);
					if (__LIB_0__::func_692(Local_481.f_0))
					{
						func_541(Local_481.f_0);
					}
				}
			}
			if (func_618(iLocal_759))
			{
				func_354(14);
			}
			if ((func_618(uLocal_758[0]) || func_618(uLocal_758[1])) || func_618(uLocal_758[2]))
			{
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 1, false);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
				func_354(15);
			}
			iLocal_734 = 0;
			while (iLocal_734 <= 1)
			{
				if (func_619(Local_483[iLocal_734 /*5*/]))
				{
					func_354(7);
					func_541(Local_483[0 /*5*/]);
					func_541(Local_483[1 /*5*/]);
					break;
				}
				iLocal_734++;
			}
			break;
		case 8:
			if (func_619(Local_480.f_0))
			{
				if (ENTITY::IS_ENTITY_DEAD(Local_480.f_0, false))
				{
					func_354(8);
				}
				else
				{
					func_354(9);
				}
			}
			if (func_619(Local_481.f_0))
			{
				if (ENTITY::IS_ENTITY_DEAD(Local_481.f_0, false))
				{
					func_354(10);
				}
			}
			break;
	}
}

int func_618(int iParam0)//Position - 0x48E5E
{
	if (!bLocal_703)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_619(int iParam0)//Position - 0x48E86
{
	if (!bLocal_703)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), true))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_642()//Position - 0x49A91
{
	if (!iLocal_307)
	{
		iLocal_456 = __LIB_0__::func_464();
		iLocal_457 = __LIB_0__::func_199(iLocal_456);
		if (iLocal_457 > 22 || iLocal_457 < 5)
		{
			MISC::CLEAR_WEATHER_TYPE_PERSIST();
			MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST("OVERCAST", 10f);
			iLocal_307 = 1;
		}
	}
}

int func_654(var uParam0)//Position - 0x49F0B
{
	int iVar0[3];
	int iVar1;
	bool bVar2;
	iVar0[0] = uLocal_38;
	iVar0[1] = joaat("fq2");
	iVar0[2] = joaat("prop_pap_camera_01");
	switch (iLocal_37)
	{
		case 0:
			uParam0->f_16 = 5;
			uParam0->f_17[0 /*3*/] = { -82.641426f, 302.73065f, 104.63494f };
			uParam0->f_17[1 /*3*/] = { -68.78405f, 296.6317f, 107.89578f };
			uParam0->f_24 = 11f;
			uParam0->f_27 = 0;
			uParam0->f_26 = 1;
			uParam0->f_25 = 1;
			StringCopy(&(uParam0->f_9), "PAP_2_RCM_P2", 24);
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar1]);
				iVar1++;
			}
			STREAMING::REQUEST_ANIM_DICT("rcmpaparazzo_2");
			iLocal_37 = 1;
			break;
		case 1:
			if (!__LIB_14__::func_824(&iVar0) || !STREAMING::HAS_ANIM_DICT_LOADED("rcmpaparazzo_2"))
			{
				return 0;
			}
			iLocal_37 = 2;
			break;
		case 2:
			bVar2 = true;
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]))
			{
				if (__LIB_14__::func_842(&(uParam0->f_28[0]), 50, -71.283f, 301.557f, 106.711f, 4.659f, "PAPARAZZO LAUNCHER RC", 1))
				{
					PED::SET_PED_DEFAULT_COMPONENT_VARIATION(uParam0->f_28[0]);
					PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 9, 1, 0, 0);
				}
				else
				{
					bVar2 = false;
				}
			}
			if (__LIB_0__::func_692(uParam0->f_28[0]))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[0]))
				{
					__LIB_14__::func_807(&(uParam0->f_41[0]), iVar0[2], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_28[0], 0f, 0f, 2.5f), 0f);
					if (__LIB_0__::func_121(uParam0->f_41[0]))
					{
						ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_41[0], uParam0->f_28[0], PED::GET_PED_BONE_INDEX(uParam0->f_28[0], 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[2]);
					}
					else
					{
						bVar2 = false;
					}
				}
				else
				{
					bVar2 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[0]))
			{
				__LIB_17__::func_22(&(uParam0->f_35[0]), iVar0[1], -78.0873f, 299.0679f, 105.3972f, 249.8696f);
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(uParam0->f_35[0], 7);
				VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(uParam0->f_35[0], false);
				VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(uParam0->f_35[0], false);
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(uParam0->f_35[0], 0);
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(uParam0->f_35[0], "P4P4R4Z0");
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(uParam0->f_35[0], 3);
			}
			if (bVar2)
			{
				iLocal_37 = 3;
			}
			break;
		case 3:
			if (__LIB_0__::func_121(uParam0->f_28[0]) && __LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
			{
				TASK::TASK_LOOK_AT_ENTITY(uParam0->f_28[0], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				iLocal_40 = PED::CREATE_SYNCHRONIZED_SCENE(-71.283f, 301.557f, 106.711f, 0f, 0f, 4.659f, 2);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_40, true);
				TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_28[0], iLocal_40, "rcmpaparazzo_2", "pap_2_rcm_base", 2f, -4f, 1, 0, 1000f, 0);
				PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(uParam0->f_28[0], false);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_28[0], 185, true);
			}
			STREAMING::REMOVE_ANIM_DICT("rcmpaparazzo_2");
			TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_HUMAN_PAPARAZZI", false);
			MISC::CLEAR_AREA_OF_PEDS(-70.12f, 298.33f, 105.25f, 30f, 0);
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

void func_662()//Position - 0x4A43A
{
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_220))
	{
		AUDIO::STOP_SYNCHRONIZED_AUDIO_EVENT(iLocal_220);
	}
	PED::CLEAR_PED_NON_CREATION_AREA();
	AUDIO::TRIGGER_MUSIC_EVENT("PAP2_FAIL");
	__LIB_14__::func_841();
	__LIB_0__::func_131();
	MISC::SET_INSTANCE_PRIORITY_HINT(0);
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
	if (__LIB_0__::func_692(PLAYER::PLAYER_PED_ID()))
	{
		PED::RESET_PED_WEAPON_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID());
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(PLAYER::PLAYER_PED_ID(), false);
	}
	if (iLocal_349 == 1)
	{
		STREAMING::STREAMVOL_DELETE(iLocal_348);
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PAPARAZZO_02_CHASE"))
	{
		AUDIO::STOP_AUDIO_SCENE("PAPARAZZO_02_CHASE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PAPARAZZO_02_INTRO"))
	{
		AUDIO::STOP_AUDIO_SCENE("PAPARAZZO_02_INTRO");
	}
	AUDIO::SET_AMBIENT_ZONE_STATE("AZ_PAPARAZZO_02_AMBIENCE", false, true);
	PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), false, -1, 0);
	AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForRagdoll", false);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_369, false);
	TASK::REMOVE_COVER_POINT(iLocal_471);
	__LIB_0__::func_424(0);
	if (__LIB_14__::func_843())
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_475))
		{
			if (__LIB_0__::func_692(iLocal_475))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_475, false))
				{
					TASK::TASK_WANDER_STANDARD(iLocal_475, 40000f, 0);
				}
				PED::SET_PED_KEEP_TASK(iLocal_475, true);
			}
			__LIB_0__::func_124(&iLocal_475, 1, 0, 1);
		}
		func_670();
		CUTSCENE::STOP_CUTSCENE_IMMEDIATELY();
		OBJECT::SET_LOCKED_UNSTREAMED_IN_DOOR_OF_TYPE(joaat("prop_ss1_14_garage_door"), -62.22f, 352.75f, 113.01f, false, 0f, 0f, 0f);
		AUDIO::STOP_SOUND(iLocal_371);
		PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 44 /*INPUT_COVER*/, true);
		__LIB_0__::func_123(&iLocal_352);
		__LIB_0__::func_122(&iLocal_354, 0);
		if (ENTITY::DOES_ENTITY_EXIST(Local_214.f_41[0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_214.f_41[0], false))
			{
				OBJECT::DELETE_OBJECT(&(Local_214.f_41[0]));
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_353))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_353, false))
			{
				OBJECT::DELETE_OBJECT(&iLocal_353);
			}
		}
		PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_370, false);
		PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_367, false);
		PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_368, false);
		MISC::CLEAR_WEATHER_TYPE_PERSIST();
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_759))
		{
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_654, false);
			__LIB_0__::func_106(&iLocal_759);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_481.f_0))
		{
			__LIB_0__::func_124(&Local_481, 1, 0, 1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_480.f_0))
		{
			__LIB_0__::func_124(&Local_480, 1, 0, 1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_482.f_0))
		{
			__LIB_0__::func_124(&Local_482, 1, 0, 1);
		}
		iLocal_734 = 0;
		while (iLocal_734 <= 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_483[iLocal_734 /*5*/]))
			{
				__LIB_0__::func_124(&(Local_483[iLocal_734 /*5*/]), 1, 0, 1);
			}
			iLocal_734++;
		}
		if (__LIB_0__::func_695(uLocal_758[0]))
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(uLocal_758[0], 1);
		}
		iLocal_734 = 0;
		while (iLocal_734 <= 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_758[iLocal_734]))
			{
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_655[iLocal_734], false);
				if (__LIB_0__::func_695(uLocal_758[iLocal_734]))
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(uLocal_758[iLocal_734], 1);
				}
			}
			iLocal_734++;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_669))
		{
			__LIB_0__::func_122(&iLocal_669, 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_670))
		{
			__LIB_0__::func_122(&iLocal_670, 0);
		}
		PED::REMOVE_RELATIONSHIP_GROUP(iLocal_691);
		MISC::ENABLE_DISPATCH_SERVICE(1, true);
		MISC::ENABLE_DISPATCH_SERVICE(2, true);
		MISC::ENABLE_DISPATCH_SERVICE(3, true);
		MISC::ENABLE_DISPATCH_SERVICE(4, true);
		MISC::ENABLE_DISPATCH_SERVICE(5, true);
		PED::CLEAR_PED_NON_CREATION_AREA();
		func_603(1);
		func_598();
		AUDIO::UNREGISTER_SCRIPT_WITH_AUDIO();
	}
	else
	{
		__LIB_14__::func_871(&Local_214, 1, 0, 0);
	}
}

void func_670()//Position - 0x4A84A
{
	__LIB_0__::func_0(&(iLocal_363[0]));
	__LIB_0__::func_0(&(iLocal_363[1]));
	__LIB_0__::func_0(&(iLocal_363[2]));
	__LIB_0__::func_0(&(iLocal_363[3]));
	__LIB_0__::func_0(&(iLocal_363[4]));
	__LIB_0__::func_0(&(iLocal_363[5]));
	__LIB_0__::func_0(&(iLocal_363[6]));
	__LIB_0__::func_0(&(iLocal_363[7]));
	__LIB_8__::func_397(&(iLocal_362[0]));
	__LIB_8__::func_397(&(iLocal_362[1]));
	__LIB_8__::func_397(&(iLocal_362[2]));
	__LIB_8__::func_397(&(iLocal_362[3]));
	__LIB_8__::func_397(&(iLocal_362[4]));
	__LIB_8__::func_397(&(iLocal_362[5]));
	__LIB_8__::func_397(&(iLocal_362[6]));
	__LIB_8__::func_397(&(iLocal_362[7]));
}

