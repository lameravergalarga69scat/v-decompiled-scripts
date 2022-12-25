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
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
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
	var uLocal_85 = -1;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	int iLocal_93 = 0;
	bool bLocal_94 = 0;
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
	struct<3> Local_109 = { 0, 0, 0 } ;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	struct<1653> Local_115 = { 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, -1, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 6, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 13, 5, 13, 2, 2, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 1090519040, -998637568, 0, 1065353216, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, -1, -1, 1090519040, -998637568, 0, 1065353216, 0, 0, 0, 0, -1, -1, 1090519040, -998637568, 0, 1065353216, 0, 0, 0, 0, -1, -1, 1090519040, -998637568, 0, 1065353216, 0, 0, 0, 0, -1, -1, 1090519040, -998637568, 0, 1065353216, 0, 0, 0, 0, -1, -1, 1090519040, -998637568, 0, 1065353216, 0, 0, 0, 0, -1, -1, 1090519040, -998637568, 0, 1065353216, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 32 } ;
	var uLocal_116 = -1;
	var uLocal_117 = -1;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 10;
	var uLocal_121 = -1;
	var uLocal_122 = 0;
	var uLocal_123 = -1;
	var uLocal_124 = 0;
	var uLocal_125 = -1;
	var uLocal_126 = 0;
	var uLocal_127 = -1;
	var uLocal_128 = 0;
	var uLocal_129 = -1;
	var uLocal_130 = 0;
	var uLocal_131 = -1;
	var uLocal_132 = 0;
	var uLocal_133 = -1;
	var uLocal_134 = 0;
	var uLocal_135 = -1;
	var uLocal_136 = 0;
	var uLocal_137 = -1;
	var uLocal_138 = 0;
	var uLocal_139 = -1;
	var uLocal_140 = 0;
	var uLocal_141 = 1;
	var uLocal_142 = 6;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = -1;
	var uLocal_150 = -1;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 10;
	var uLocal_154 = -1;
	var uLocal_155 = 0;
	var uLocal_156 = -1;
	var uLocal_157 = 0;
	var uLocal_158 = -1;
	var uLocal_159 = 0;
	var uLocal_160 = -1;
	var uLocal_161 = 0;
	var uLocal_162 = -1;
	var uLocal_163 = 0;
	var uLocal_164 = -1;
	var uLocal_165 = 0;
	var uLocal_166 = -1;
	var uLocal_167 = 0;
	var uLocal_168 = -1;
	var uLocal_169 = 0;
	var uLocal_170 = -1;
	var uLocal_171 = 0;
	var uLocal_172 = -1;
	var uLocal_173 = 0;
	var uLocal_174 = 1;
	var uLocal_175 = 6;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = -1;
	var uLocal_183 = -1;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 10;
	var uLocal_187 = -1;
	var uLocal_188 = 0;
	var uLocal_189 = -1;
	var uLocal_190 = 0;
	var uLocal_191 = -1;
	var uLocal_192 = 0;
	var uLocal_193 = -1;
	var uLocal_194 = 0;
	var uLocal_195 = -1;
	var uLocal_196 = 0;
	var uLocal_197 = -1;
	var uLocal_198 = 0;
	var uLocal_199 = -1;
	var uLocal_200 = 0;
	var uLocal_201 = -1;
	var uLocal_202 = 0;
	var uLocal_203 = -1;
	var uLocal_204 = 0;
	var uLocal_205 = -1;
	var uLocal_206 = 0;
	var uLocal_207 = 1;
	var uLocal_208 = 6;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = -1;
	var uLocal_216 = -1;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 10;
	var uLocal_220 = -1;
	var uLocal_221 = 0;
	var uLocal_222 = -1;
	var uLocal_223 = 0;
	var uLocal_224 = -1;
	var uLocal_225 = 0;
	var uLocal_226 = -1;
	var uLocal_227 = 0;
	var uLocal_228 = -1;
	var uLocal_229 = 0;
	var uLocal_230 = -1;
	var uLocal_231 = 0;
	var uLocal_232 = -1;
	var uLocal_233 = 0;
	var uLocal_234 = -1;
	var uLocal_235 = 0;
	var uLocal_236 = -1;
	var uLocal_237 = 0;
	var uLocal_238 = -1;
	var uLocal_239 = 0;
	var uLocal_240 = 1;
	var uLocal_241 = 6;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = -1;
	var uLocal_249 = -1;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 10;
	var uLocal_253 = -1;
	var uLocal_254 = 0;
	var uLocal_255 = -1;
	var uLocal_256 = 0;
	var uLocal_257 = -1;
	var uLocal_258 = 0;
	var uLocal_259 = -1;
	var uLocal_260 = 0;
	var uLocal_261 = -1;
	var uLocal_262 = 0;
	var uLocal_263 = -1;
	var uLocal_264 = 0;
	var uLocal_265 = -1;
	var uLocal_266 = 0;
	var uLocal_267 = -1;
	var uLocal_268 = 0;
	var uLocal_269 = -1;
	var uLocal_270 = 0;
	var uLocal_271 = -1;
	var uLocal_272 = 0;
	var uLocal_273 = 1;
	var uLocal_274 = 6;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = -1;
	var uLocal_282 = -1;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 10;
	var uLocal_286 = -1;
	var uLocal_287 = 0;
	var uLocal_288 = -1;
	var uLocal_289 = 0;
	var uLocal_290 = -1;
	var uLocal_291 = 0;
	var uLocal_292 = -1;
	var uLocal_293 = 0;
	var uLocal_294 = -1;
	var uLocal_295 = 0;
	var uLocal_296 = -1;
	var uLocal_297 = 0;
	var uLocal_298 = -1;
	var uLocal_299 = 0;
	var uLocal_300 = -1;
	var uLocal_301 = 0;
	var uLocal_302 = -1;
	var uLocal_303 = 0;
	var uLocal_304 = -1;
	var uLocal_305 = 0;
	var uLocal_306 = 1;
	var uLocal_307 = 6;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = -1;
	var uLocal_315 = -1;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 10;
	var uLocal_319 = -1;
	var uLocal_320 = 0;
	var uLocal_321 = -1;
	var uLocal_322 = 0;
	var uLocal_323 = -1;
	var uLocal_324 = 0;
	var uLocal_325 = -1;
	var uLocal_326 = 0;
	var uLocal_327 = -1;
	var uLocal_328 = 0;
	var uLocal_329 = -1;
	var uLocal_330 = 0;
	var uLocal_331 = -1;
	var uLocal_332 = 0;
	var uLocal_333 = -1;
	var uLocal_334 = 0;
	var uLocal_335 = -1;
	var uLocal_336 = 0;
	var uLocal_337 = -1;
	var uLocal_338 = 0;
	var uLocal_339 = 1;
	var uLocal_340 = 6;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = -1;
	var uLocal_348 = -1;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 10;
	var uLocal_352 = -1;
	var uLocal_353 = 0;
	var uLocal_354 = -1;
	var uLocal_355 = 0;
	var uLocal_356 = -1;
	var uLocal_357 = 0;
	var uLocal_358 = -1;
	var uLocal_359 = 0;
	var uLocal_360 = -1;
	var uLocal_361 = 0;
	var uLocal_362 = -1;
	var uLocal_363 = 0;
	var uLocal_364 = -1;
	var uLocal_365 = 0;
	var uLocal_366 = -1;
	var uLocal_367 = 0;
	var uLocal_368 = -1;
	var uLocal_369 = 0;
	var uLocal_370 = -1;
	var uLocal_371 = 0;
	var uLocal_372 = 1;
	var uLocal_373 = 6;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = -1;
	var uLocal_381 = -1;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 10;
	var uLocal_385 = -1;
	var uLocal_386 = 0;
	var uLocal_387 = -1;
	var uLocal_388 = 0;
	var uLocal_389 = -1;
	var uLocal_390 = 0;
	var uLocal_391 = -1;
	var uLocal_392 = 0;
	var uLocal_393 = -1;
	var uLocal_394 = 0;
	var uLocal_395 = -1;
	var uLocal_396 = 0;
	var uLocal_397 = -1;
	var uLocal_398 = 0;
	var uLocal_399 = -1;
	var uLocal_400 = 0;
	var uLocal_401 = -1;
	var uLocal_402 = 0;
	var uLocal_403 = -1;
	var uLocal_404 = 0;
	var uLocal_405 = 1;
	var uLocal_406 = 6;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = -1;
	var uLocal_414 = -1;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 10;
	var uLocal_418 = -1;
	var uLocal_419 = 0;
	var uLocal_420 = -1;
	var uLocal_421 = 0;
	var uLocal_422 = -1;
	var uLocal_423 = 0;
	var uLocal_424 = -1;
	var uLocal_425 = 0;
	var uLocal_426 = -1;
	var uLocal_427 = 0;
	var uLocal_428 = -1;
	var uLocal_429 = 0;
	var uLocal_430 = -1;
	var uLocal_431 = 0;
	var uLocal_432 = -1;
	var uLocal_433 = 0;
	var uLocal_434 = -1;
	var uLocal_435 = 0;
	var uLocal_436 = -1;
	var uLocal_437 = 0;
	var uLocal_438 = 1;
	var uLocal_439 = 6;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = -1;
	var uLocal_447 = -1;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 10;
	var uLocal_451 = -1;
	var uLocal_452 = 0;
	var uLocal_453 = -1;
	var uLocal_454 = 0;
	var uLocal_455 = -1;
	var uLocal_456 = 0;
	var uLocal_457 = -1;
	var uLocal_458 = 0;
	var uLocal_459 = -1;
	var uLocal_460 = 0;
	var uLocal_461 = -1;
	var uLocal_462 = 0;
	var uLocal_463 = -1;
	var uLocal_464 = 0;
	var uLocal_465 = -1;
	var uLocal_466 = 0;
	var uLocal_467 = -1;
	var uLocal_468 = 0;
	var uLocal_469 = -1;
	var uLocal_470 = 0;
	var uLocal_471 = 1;
	var uLocal_472 = 6;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = -1;
	var uLocal_480 = -1;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 10;
	var uLocal_484 = -1;
	var uLocal_485 = 0;
	var uLocal_486 = -1;
	var uLocal_487 = 0;
	var uLocal_488 = -1;
	var uLocal_489 = 0;
	var uLocal_490 = -1;
	var uLocal_491 = 0;
	var uLocal_492 = -1;
	var uLocal_493 = 0;
	var uLocal_494 = -1;
	var uLocal_495 = 0;
	var uLocal_496 = -1;
	var uLocal_497 = 0;
	var uLocal_498 = -1;
	var uLocal_499 = 0;
	var uLocal_500 = -1;
	var uLocal_501 = 0;
	var uLocal_502 = -1;
	var uLocal_503 = 0;
	var uLocal_504 = 1;
	var uLocal_505 = 6;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = -1;
	var uLocal_513 = -1;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 10;
	var uLocal_517 = -1;
	var uLocal_518 = 0;
	var uLocal_519 = -1;
	var uLocal_520 = 0;
	var uLocal_521 = -1;
	var uLocal_522 = 0;
	var uLocal_523 = -1;
	var uLocal_524 = 0;
	var uLocal_525 = -1;
	var uLocal_526 = 0;
	var uLocal_527 = -1;
	var uLocal_528 = 0;
	var uLocal_529 = -1;
	var uLocal_530 = 0;
	var uLocal_531 = -1;
	var uLocal_532 = 0;
	var uLocal_533 = -1;
	var uLocal_534 = 0;
	var uLocal_535 = -1;
	var uLocal_536 = 0;
	var uLocal_537 = 1;
	var uLocal_538 = 6;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = -1;
	var uLocal_546 = -1;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 10;
	var uLocal_550 = -1;
	var uLocal_551 = 0;
	var uLocal_552 = -1;
	var uLocal_553 = 0;
	var uLocal_554 = -1;
	var uLocal_555 = 0;
	var uLocal_556 = -1;
	var uLocal_557 = 0;
	var uLocal_558 = -1;
	var uLocal_559 = 0;
	var uLocal_560 = -1;
	var uLocal_561 = 0;
	var uLocal_562 = -1;
	var uLocal_563 = 0;
	var uLocal_564 = -1;
	var uLocal_565 = 0;
	var uLocal_566 = -1;
	var uLocal_567 = 0;
	var uLocal_568 = -1;
	var uLocal_569 = 0;
	var uLocal_570 = 1;
	var uLocal_571 = 6;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = -1;
	var uLocal_579 = -1;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 10;
	var uLocal_583 = -1;
	var uLocal_584 = 0;
	var uLocal_585 = -1;
	var uLocal_586 = 0;
	var uLocal_587 = -1;
	var uLocal_588 = 0;
	var uLocal_589 = -1;
	var uLocal_590 = 0;
	var uLocal_591 = -1;
	var uLocal_592 = 0;
	var uLocal_593 = -1;
	var uLocal_594 = 0;
	var uLocal_595 = -1;
	var uLocal_596 = 0;
	var uLocal_597 = -1;
	var uLocal_598 = 0;
	var uLocal_599 = -1;
	var uLocal_600 = 0;
	var uLocal_601 = -1;
	var uLocal_602 = 0;
	var uLocal_603 = 1;
	var uLocal_604 = 6;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = -1;
	var uLocal_612 = -1;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 10;
	var uLocal_616 = -1;
	var uLocal_617 = 0;
	var uLocal_618 = -1;
	var uLocal_619 = 0;
	var uLocal_620 = -1;
	var uLocal_621 = 0;
	var uLocal_622 = -1;
	var uLocal_623 = 0;
	var uLocal_624 = -1;
	var uLocal_625 = 0;
	var uLocal_626 = -1;
	var uLocal_627 = 0;
	var uLocal_628 = -1;
	var uLocal_629 = 0;
	var uLocal_630 = -1;
	var uLocal_631 = 0;
	var uLocal_632 = -1;
	var uLocal_633 = 0;
	var uLocal_634 = -1;
	var uLocal_635 = 0;
	var uLocal_636 = 1;
	var uLocal_637 = 6;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	var uLocal_644 = -1;
	var uLocal_645 = -1;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 10;
	var uLocal_649 = -1;
	var uLocal_650 = 0;
	var uLocal_651 = -1;
	var uLocal_652 = 0;
	var uLocal_653 = -1;
	var uLocal_654 = 0;
	var uLocal_655 = -1;
	var uLocal_656 = 0;
	var uLocal_657 = -1;
	var uLocal_658 = 0;
	var uLocal_659 = -1;
	var uLocal_660 = 0;
	var uLocal_661 = -1;
	var uLocal_662 = 0;
	var uLocal_663 = -1;
	var uLocal_664 = 0;
	var uLocal_665 = -1;
	var uLocal_666 = 0;
	var uLocal_667 = -1;
	var uLocal_668 = 0;
	var uLocal_669 = 1;
	var uLocal_670 = 6;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = -1;
	var uLocal_678 = -1;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 10;
	var uLocal_682 = -1;
	var uLocal_683 = 0;
	var uLocal_684 = -1;
	var uLocal_685 = 0;
	var uLocal_686 = -1;
	var uLocal_687 = 0;
	var uLocal_688 = -1;
	var uLocal_689 = 0;
	var uLocal_690 = -1;
	var uLocal_691 = 0;
	var uLocal_692 = -1;
	var uLocal_693 = 0;
	var uLocal_694 = -1;
	var uLocal_695 = 0;
	var uLocal_696 = -1;
	var uLocal_697 = 0;
	var uLocal_698 = -1;
	var uLocal_699 = 0;
	var uLocal_700 = -1;
	var uLocal_701 = 0;
	var uLocal_702 = 1;
	var uLocal_703 = 6;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = -1;
	var uLocal_711 = -1;
	var uLocal_712 = 0;
	var uLocal_713 = 0;
	var uLocal_714 = 10;
	var uLocal_715 = -1;
	var uLocal_716 = 0;
	var uLocal_717 = -1;
	var uLocal_718 = 0;
	var uLocal_719 = -1;
	var uLocal_720 = 0;
	var uLocal_721 = -1;
	var uLocal_722 = 0;
	var uLocal_723 = -1;
	var uLocal_724 = 0;
	var uLocal_725 = -1;
	var uLocal_726 = 0;
	var uLocal_727 = -1;
	var uLocal_728 = 0;
	var uLocal_729 = -1;
	var uLocal_730 = 0;
	var uLocal_731 = -1;
	var uLocal_732 = 0;
	var uLocal_733 = -1;
	var uLocal_734 = 0;
	var uLocal_735 = 1;
	var uLocal_736 = 6;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = -1;
	var uLocal_744 = -1;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 10;
	var uLocal_748 = -1;
	var uLocal_749 = 0;
	var uLocal_750 = -1;
	var uLocal_751 = 0;
	var uLocal_752 = -1;
	var uLocal_753 = 0;
	var uLocal_754 = -1;
	var uLocal_755 = 0;
	var uLocal_756 = -1;
	var uLocal_757 = 0;
	var uLocal_758 = -1;
	var uLocal_759 = 0;
	var uLocal_760 = -1;
	var uLocal_761 = 0;
	var uLocal_762 = -1;
	var uLocal_763 = 0;
	var uLocal_764 = -1;
	var uLocal_765 = 0;
	var uLocal_766 = -1;
	var uLocal_767 = 0;
	var uLocal_768 = 1;
	var uLocal_769 = 6;
	var uLocal_770 = 0;
	var uLocal_771 = 0;
	var uLocal_772 = 0;
	var uLocal_773 = 0;
	var uLocal_774 = 0;
	var uLocal_775 = 0;
	var uLocal_776 = -1;
	var uLocal_777 = -1;
	var uLocal_778 = 0;
	var uLocal_779 = 0;
	var uLocal_780 = 10;
	var uLocal_781 = -1;
	var uLocal_782 = 0;
	var uLocal_783 = -1;
	var uLocal_784 = 0;
	var uLocal_785 = -1;
	var uLocal_786 = 0;
	var uLocal_787 = -1;
	var uLocal_788 = 0;
	var uLocal_789 = -1;
	var uLocal_790 = 0;
	var uLocal_791 = -1;
	var uLocal_792 = 0;
	var uLocal_793 = -1;
	var uLocal_794 = 0;
	var uLocal_795 = -1;
	var uLocal_796 = 0;
	var uLocal_797 = -1;
	var uLocal_798 = 0;
	var uLocal_799 = -1;
	var uLocal_800 = 0;
	var uLocal_801 = 1;
	var uLocal_802 = 6;
	var uLocal_803 = 0;
	var uLocal_804 = 0;
	var uLocal_805 = 0;
	var uLocal_806 = 0;
	var uLocal_807 = 0;
	var uLocal_808 = 0;
	var uLocal_809 = -1;
	var uLocal_810 = -1;
	var uLocal_811 = 0;
	var uLocal_812 = 0;
	var uLocal_813 = 10;
	var uLocal_814 = -1;
	var uLocal_815 = 0;
	var uLocal_816 = -1;
	var uLocal_817 = 0;
	var uLocal_818 = -1;
	var uLocal_819 = 0;
	var uLocal_820 = -1;
	var uLocal_821 = 0;
	var uLocal_822 = -1;
	var uLocal_823 = 0;
	var uLocal_824 = -1;
	var uLocal_825 = 0;
	var uLocal_826 = -1;
	var uLocal_827 = 0;
	var uLocal_828 = -1;
	var uLocal_829 = 0;
	var uLocal_830 = -1;
	var uLocal_831 = 0;
	var uLocal_832 = -1;
	var uLocal_833 = 0;
	var uLocal_834 = 1;
	var uLocal_835 = 6;
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	var uLocal_839 = 0;
	var uLocal_840 = 0;
	var uLocal_841 = 0;
	var uLocal_842 = -1;
	var uLocal_843 = -1;
	var uLocal_844 = 0;
	var uLocal_845 = 0;
	var uLocal_846 = 10;
	var uLocal_847 = -1;
	var uLocal_848 = 0;
	var uLocal_849 = -1;
	var uLocal_850 = 0;
	var uLocal_851 = -1;
	var uLocal_852 = 0;
	var uLocal_853 = -1;
	var uLocal_854 = 0;
	var uLocal_855 = -1;
	var uLocal_856 = 0;
	var uLocal_857 = -1;
	var uLocal_858 = 0;
	var uLocal_859 = -1;
	var uLocal_860 = 0;
	var uLocal_861 = -1;
	var uLocal_862 = 0;
	var uLocal_863 = -1;
	var uLocal_864 = 0;
	var uLocal_865 = -1;
	var uLocal_866 = 0;
	var uLocal_867 = 1;
	var uLocal_868 = 6;
	var uLocal_869 = 0;
	var uLocal_870 = 0;
	var uLocal_871 = 0;
	var uLocal_872 = 0;
	var uLocal_873 = 0;
	var uLocal_874 = 0;
	var uLocal_875 = -1;
	var uLocal_876 = -1;
	var uLocal_877 = 0;
	var uLocal_878 = 0;
	var uLocal_879 = 10;
	var uLocal_880 = -1;
	var uLocal_881 = 0;
	var uLocal_882 = -1;
	var uLocal_883 = 0;
	var uLocal_884 = -1;
	var uLocal_885 = 0;
	var uLocal_886 = -1;
	var uLocal_887 = 0;
	var uLocal_888 = -1;
	var uLocal_889 = 0;
	var uLocal_890 = -1;
	var uLocal_891 = 0;
	var uLocal_892 = -1;
	var uLocal_893 = 0;
	var uLocal_894 = -1;
	var uLocal_895 = 0;
	var uLocal_896 = -1;
	var uLocal_897 = 0;
	var uLocal_898 = -1;
	var uLocal_899 = 0;
	var uLocal_900 = 1;
	var uLocal_901 = 6;
	var uLocal_902 = 0;
	var uLocal_903 = 0;
	var uLocal_904 = 0;
	var uLocal_905 = 0;
	var uLocal_906 = 0;
	var uLocal_907 = 0;
	var uLocal_908 = -1;
	var uLocal_909 = -1;
	var uLocal_910 = 0;
	var uLocal_911 = 0;
	var uLocal_912 = 10;
	var uLocal_913 = -1;
	var uLocal_914 = 0;
	var uLocal_915 = -1;
	var uLocal_916 = 0;
	var uLocal_917 = -1;
	var uLocal_918 = 0;
	var uLocal_919 = -1;
	var uLocal_920 = 0;
	var uLocal_921 = -1;
	var uLocal_922 = 0;
	var uLocal_923 = -1;
	var uLocal_924 = 0;
	var uLocal_925 = -1;
	var uLocal_926 = 0;
	var uLocal_927 = -1;
	var uLocal_928 = 0;
	var uLocal_929 = -1;
	var uLocal_930 = 0;
	var uLocal_931 = -1;
	var uLocal_932 = 0;
	var uLocal_933 = 1;
	var uLocal_934 = 6;
	var uLocal_935 = 0;
	var uLocal_936 = 0;
	var uLocal_937 = 0;
	var uLocal_938 = 0;
	var uLocal_939 = 0;
	var uLocal_940 = 0;
	var uLocal_941 = -1;
	var uLocal_942 = -1;
	var uLocal_943 = 0;
	var uLocal_944 = 0;
	var uLocal_945 = 10;
	var uLocal_946 = -1;
	var uLocal_947 = 0;
	var uLocal_948 = -1;
	var uLocal_949 = 0;
	var uLocal_950 = -1;
	var uLocal_951 = 0;
	var uLocal_952 = -1;
	var uLocal_953 = 0;
	var uLocal_954 = -1;
	var uLocal_955 = 0;
	var uLocal_956 = -1;
	var uLocal_957 = 0;
	var uLocal_958 = -1;
	var uLocal_959 = 0;
	var uLocal_960 = -1;
	var uLocal_961 = 0;
	var uLocal_962 = -1;
	var uLocal_963 = 0;
	var uLocal_964 = -1;
	var uLocal_965 = 0;
	var uLocal_966 = 1;
	var uLocal_967 = 6;
	var uLocal_968 = 0;
	var uLocal_969 = 0;
	var uLocal_970 = 0;
	var uLocal_971 = 0;
	var uLocal_972 = 0;
	var uLocal_973 = 0;
	var uLocal_974 = -1;
	var uLocal_975 = -1;
	var uLocal_976 = 0;
	var uLocal_977 = 0;
	var uLocal_978 = 10;
	var uLocal_979 = -1;
	var uLocal_980 = 0;
	var uLocal_981 = -1;
	var uLocal_982 = 0;
	var uLocal_983 = -1;
	var uLocal_984 = 0;
	var uLocal_985 = -1;
	var uLocal_986 = 0;
	var uLocal_987 = -1;
	var uLocal_988 = 0;
	var uLocal_989 = -1;
	var uLocal_990 = 0;
	var uLocal_991 = -1;
	var uLocal_992 = 0;
	var uLocal_993 = -1;
	var uLocal_994 = 0;
	var uLocal_995 = -1;
	var uLocal_996 = 0;
	var uLocal_997 = -1;
	var uLocal_998 = 0;
	var uLocal_999 = 1;
	var uLocal_1000 = 6;
	var uLocal_1001 = 0;
	var uLocal_1002 = 0;
	var uLocal_1003 = 0;
	var uLocal_1004 = 0;
	var uLocal_1005 = 0;
	var uLocal_1006 = 0;
	var uLocal_1007 = -1;
	var uLocal_1008 = -1;
	var uLocal_1009 = 0;
	var uLocal_1010 = 0;
	var uLocal_1011 = 10;
	var uLocal_1012 = -1;
	var uLocal_1013 = 0;
	var uLocal_1014 = -1;
	var uLocal_1015 = 0;
	var uLocal_1016 = -1;
	var uLocal_1017 = 0;
	var uLocal_1018 = -1;
	var uLocal_1019 = 0;
	var uLocal_1020 = -1;
	var uLocal_1021 = 0;
	var uLocal_1022 = -1;
	var uLocal_1023 = 0;
	var uLocal_1024 = -1;
	var uLocal_1025 = 0;
	var uLocal_1026 = -1;
	var uLocal_1027 = 0;
	var uLocal_1028 = -1;
	var uLocal_1029 = 0;
	var uLocal_1030 = -1;
	var uLocal_1031 = 0;
	var uLocal_1032 = 1;
	var uLocal_1033 = 6;
	var uLocal_1034 = 0;
	var uLocal_1035 = 0;
	var uLocal_1036 = 0;
	var uLocal_1037 = 0;
	var uLocal_1038 = 0;
	var uLocal_1039 = 0;
	var uLocal_1040 = -1;
	var uLocal_1041 = -1;
	var uLocal_1042 = 0;
	var uLocal_1043 = 0;
	var uLocal_1044 = 10;
	var uLocal_1045 = -1;
	var uLocal_1046 = 0;
	var uLocal_1047 = -1;
	var uLocal_1048 = 0;
	var uLocal_1049 = -1;
	var uLocal_1050 = 0;
	var uLocal_1051 = -1;
	var uLocal_1052 = 0;
	var uLocal_1053 = -1;
	var uLocal_1054 = 0;
	var uLocal_1055 = -1;
	var uLocal_1056 = 0;
	var uLocal_1057 = -1;
	var uLocal_1058 = 0;
	var uLocal_1059 = -1;
	var uLocal_1060 = 0;
	var uLocal_1061 = -1;
	var uLocal_1062 = 0;
	var uLocal_1063 = -1;
	var uLocal_1064 = 0;
	var uLocal_1065 = 1;
	var uLocal_1066 = 6;
	var uLocal_1067 = 0;
	var uLocal_1068 = 0;
	var uLocal_1069 = 0;
	var uLocal_1070 = 0;
	var uLocal_1071 = 0;
	var uLocal_1072 = 0;
	var uLocal_1073 = -1;
	var uLocal_1074 = -1;
	var uLocal_1075 = 0;
	var uLocal_1076 = 0;
	var uLocal_1077 = 10;
	var uLocal_1078 = -1;
	var uLocal_1079 = 0;
	var uLocal_1080 = -1;
	var uLocal_1081 = 0;
	var uLocal_1082 = -1;
	var uLocal_1083 = 0;
	var uLocal_1084 = -1;
	var uLocal_1085 = 0;
	var uLocal_1086 = -1;
	var uLocal_1087 = 0;
	var uLocal_1088 = -1;
	var uLocal_1089 = 0;
	var uLocal_1090 = -1;
	var uLocal_1091 = 0;
	var uLocal_1092 = -1;
	var uLocal_1093 = 0;
	var uLocal_1094 = -1;
	var uLocal_1095 = 0;
	var uLocal_1096 = -1;
	var uLocal_1097 = 0;
	var uLocal_1098 = 1;
	var uLocal_1099 = 6;
	var uLocal_1100 = 0;
	var uLocal_1101 = 0;
	var uLocal_1102 = 0;
	var uLocal_1103 = 0;
	var uLocal_1104 = 0;
	var uLocal_1105 = 0;
	var uLocal_1106 = -1;
	var uLocal_1107 = -1;
	var uLocal_1108 = 0;
	var uLocal_1109 = 0;
	var uLocal_1110 = 10;
	var uLocal_1111 = -1;
	var uLocal_1112 = 0;
	var uLocal_1113 = -1;
	var uLocal_1114 = 0;
	var uLocal_1115 = -1;
	var uLocal_1116 = 0;
	var uLocal_1117 = -1;
	var uLocal_1118 = 0;
	var uLocal_1119 = -1;
	var uLocal_1120 = 0;
	var uLocal_1121 = -1;
	var uLocal_1122 = 0;
	var uLocal_1123 = -1;
	var uLocal_1124 = 0;
	var uLocal_1125 = -1;
	var uLocal_1126 = 0;
	var uLocal_1127 = -1;
	var uLocal_1128 = 0;
	var uLocal_1129 = -1;
	var uLocal_1130 = 0;
	var uLocal_1131 = 1;
	var uLocal_1132 = 6;
	var uLocal_1133 = 0;
	var uLocal_1134 = 0;
	var uLocal_1135 = 0;
	var uLocal_1136 = 0;
	var uLocal_1137 = 0;
	var uLocal_1138 = 0;
	var uLocal_1139 = -1;
	var uLocal_1140 = -1;
	var uLocal_1141 = 0;
	var uLocal_1142 = 0;
	var uLocal_1143 = 10;
	var uLocal_1144 = -1;
	var uLocal_1145 = 0;
	var uLocal_1146 = -1;
	var uLocal_1147 = 0;
	var uLocal_1148 = -1;
	var uLocal_1149 = 0;
	var uLocal_1150 = -1;
	var uLocal_1151 = 0;
	var uLocal_1152 = -1;
	var uLocal_1153 = 0;
	var uLocal_1154 = -1;
	var uLocal_1155 = 0;
	var uLocal_1156 = -1;
	var uLocal_1157 = 0;
	var uLocal_1158 = -1;
	var uLocal_1159 = 0;
	var uLocal_1160 = -1;
	var uLocal_1161 = 0;
	var uLocal_1162 = -1;
	var uLocal_1163 = 0;
	var uLocal_1164 = 1;
	var uLocal_1165 = 6;
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
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	Local_109 = { 1140.7462f, 258.6841f, -52.4408f };
	iLocal_114 = -1;
	func_5595();
	while (true)
	{
		SYSTEM::WAIT(0);
		func_1();
	}
}

void func_1()//Position - 0xAE
{
	if (func_5566())
	{
		return;
	}
	func_4792(&Local_115);
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_2(&Local_115);
	}
}

void func_2(int* iParam0)//Position - 0xD3
{
	int iVar0;
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	func_4788(iParam0);
	func_4781(iParam0);
	func_4780();
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_4779(iVar0))
		{
		}
		else
		{
			switch (iParam0->f_1357.f_14[iVar0])
			{
				case 0:
					func_4775(iParam0, iVar0);
					break;
				case 1:
					func_104(iParam0, iVar0);
					func_103(iParam0, iVar0);
					break;
				case 2:
					func_104(iParam0, iVar0);
					func_3(iParam0, iVar0);
					break;
				}
		}
		iVar0++;
	}
}

void func_3(int* iParam0, int iParam1)//Position - 0x16A
{
	if (!func_37(iParam0, iParam1))
	{
		func_7(iParam0, iParam1, 1);
		func_4(iParam0, iParam1, 1, 447/*__LIB_0__::func_467*/, 439/*__LIB_0__::func_467*/);
	}
}

void func_4(int* iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x198
{
	Stack.Push(iParam0);
	Call_Loc(iParam3);
	iParam0->f_1357.f_14[iParam1] = iParam2;
	Stack.Push(iParam0);
	Call_Loc(iParam4);
}

void func_7(int* iParam0, int iParam1, int iParam2)//Position - 0x1C7
{
	if (!func_35(iParam0, iParam1, 1063675494))
	{
		return;
	}
	if (iParam0->f_1357.f_182[iParam1 /*10*/] == 19 && iParam2)
	{
		func_26(iParam0, iParam1);
	}
	else
	{
		func_8(iParam0, iParam1, 0, 0, 1065353216);
	}
}

void func_8(var uParam0, int iParam1, bool bParam2, float fParam3, float fParam4)//Position - 0x215
{
	struct<6> Var0;
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = 1090519040;
	Var0.f_3 = -998637568;
	Var0.f_5 = 1065353216;
	func_21(uParam0, iParam1, &Var0);
	if (bParam2)
	{
		Var0.f_4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(fParam3, fParam4);
	}
	func_9(uParam0, iParam1, &Var0);
}

void func_9(var uParam0, int iParam1, var uParam2)//Position - 0x26D
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	char* sVar3;
	char* sVar4;
	if (!STREAMING::HAS_ANIM_DICT_LOADED(__LIB_16__::func_152(uParam2->f_1)))
	{
		return;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_1357.f_288[iParam1]))
	{
		return;
	}
	iVar0 = NETWORK::NET_TO_PED(uParam0->f_1357.f_288[iParam1]);
	Var1 = { __LIB_16__::func_151(iParam1) };
	fVar2 = func_16(iParam1);
	if (!__LIB_0__::func_121(iVar0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iVar0))
	{
		return;
	}
	sVar3 = __LIB_16__::func_152(uParam2->f_1);
	sVar4 = func_10(*uParam2, uParam2->f_1, uParam2->f_6);
	uParam0->f_1357.f_175[iParam1] = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(Var1, 0f, 0f, fVar2, 2, uParam2->f_8, uParam2->f_7, 1f, 0f, 1f);
	NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(iVar0, uParam0->f_1357.f_175[iParam1], sVar3, sVar4, uParam2->f_2, uParam2->f_3, uParam2->f_9, 16, 1000f, 0);
	NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam0->f_1357.f_175[iParam1]);
	uParam0->f_1357.f_182[iParam1 /*10*/] = { *uParam2 };
}

char* func_10(int iParam0, int iParam1, int iParam2)//Position - 0x36E
{
	if (iParam1 == 3)
	{
		switch (iParam0)
		{
			case 20:
				return func_14(iParam2);
			case 21:
				return func_13(iParam2);
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 20:
				return func_12(iParam2);
			case 21:
				return func_11(iParam2);
			}
		default:
	}
	switch (iParam0)
	{
		case 19:
			return "idle";
		case 22:
			return "spin_wheel";
		case 27:
			return "clear_chips_intro";
		case 24:
			return "clear_chips_zone1";
		case 25:
			return "clear_chips_zone2";
		case 26:
			return "clear_chips_zone3";
		case 28:
			return "clear_chips_outro";
		case 23:
			return "no_more_bets";
		default:
	}
	return "";
}

char* func_11(int iParam0)//Position - 0x432
{
	switch (iParam0)
	{
		case 0:
			return "EMPTY_TABLE_IDLE_VAR01";
		case 1:
			return "EMPTY_TABLE_IDLE_VAR02";
		default:
	}
	return "EMPTY_TABLE_IDLE_VAR01";
}

char* func_12(int iParam0)//Position - 0x45C
{
	switch (iParam0)
	{
		case 0:
			return "IDLE_VAR01";
		case 1:
			return "IDLE_VAR02";
		case 2:
			return "IDLE_VAR03";
		case 3:
			return "IDLE_VAR04";
		case 4:
			return "IDLE_VAR05";
		default:
	}
	return "IDLE_VAR01";
}

char* func_13(int iParam0)//Position - 0x4AA
{
	switch (iParam0)
	{
		case 0:
			return "EMPTY_TABLE_IDLE_VAR01";
		case 1:
			return "EMPTY_TABLE_IDLE_VAR02";
		case 2:
			return "EMPTY_TABLE_IDLE_VAR03";
		case 3:
			return "EMPTY_TABLE_IDLE_VAR04";
		default:
	}
	return "EMPTY_TABLE_IDLE_VAR01";
}

char* func_14(int iParam0)//Position - 0x4EC
{
	switch (iParam0)
	{
		case 0:
			return "IDLE_VAR01";
		case 1:
			return "IDLE_VAR02";
		case 2:
			return "IDLE_VAR03";
		case 3:
			return "IDLE_VAR04";
		case 4:
			return "IDLE_VAR05";
		case 5:
			return "IDLE_VAR06";
		default:
	}
	return "IDLE_VAR01";
}

float func_16(int iParam0)//Position - 0x568
{
	float fVar0;
	float fVar1;
	float fVar2;
	fVar0 = 0f;
	fVar1 = __LIB_16__::func_150(iParam0);
	fVar2 = (fVar1 - fVar0);
	fVar2 = __LIB_1__::func_9(fVar2, 0f, 360f);
	return fVar2;
}

void func_21(var uParam0, int iParam1, var uParam2)//Position - 0x72D
{
	uParam2->f_9 = 77;
	uParam2->f_2 = 2f;
	uParam2->f_3 = -2f;
	uParam2->f_6 = 0;
	uParam2->f_7 = 1;
	*uParam2 = 19;
	uParam2->f_1 = func_22(uParam0, iParam1);
}

int func_22(var uParam0, int iParam1)//Position - 0x764
{
	if (func_23(uParam0, iParam1))
	{
		return 3;
	}
	return 2;
}

bool func_23(var uParam0, int iParam1)//Position - 0x77C
{
	int iVar0;
	int iVar1;
	if (!func_25(iParam1))
	{
		return 0;
	}
	iVar0 = uParam0->f_1357.f_288[iParam1];
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iVar0))
	{
		return 0;
	}
	iVar1 = NETWORK::NET_TO_PED(iVar0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return 0;
	}
	return ENTITY::GET_ENTITY_MODEL(iVar1) == func_24(1);
}

int func_24(bool bParam0)//Position - 0x7D0
{
	if (bParam0)
	{
		return MISC::GET_HASH_KEY("s_f_y_casino_01");
	}
	return MISC::GET_HASH_KEY("S_M_Y_Casino_01");
}

int func_25(int iParam0)//Position - 0x7F0
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 >= 6)
	{
		return 0;
	}
	return 1;
}

void func_26(var uParam0, int iParam1)//Position - 0x80D
{
	if (uParam0->f_1357.f_14[iParam1] == 2)
	{
		func_32(uParam0, iParam1);
		return;
	}
	func_27(uParam0, iParam1);
}

void func_27(var uParam0, int iParam1)//Position - 0x837
{
	struct<6> Var0;
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = 1090519040;
	Var0.f_3 = -998637568;
	Var0.f_5 = 1065353216;
	func_28(uParam0, iParam1, &Var0);
	func_9(uParam0, iParam1, &Var0);
}

void func_28(var uParam0, int iParam1, var uParam2)//Position - 0x87E
{
	uParam2->f_9 = 13;
	uParam2->f_2 = 2f;
	uParam2->f_3 = -2f;
	uParam2->f_8 = 1;
	uParam2->f_6 = func_29(uParam0, iParam1);
	*uParam2 = 21;
	uParam2->f_1 = func_22(uParam0, iParam1);
}

int func_29(var uParam0, int iParam1)//Position - 0x8BC
{
	int iVar0;
	if (!func_25(iParam1))
	{
		return 0;
	}
	iVar0 = uParam0->f_1357.f_182[iParam1 /*10*/].f_6;
	if (func_23(uParam0, iParam1))
	{
		return func_30(iVar0, 4);
	}
	return func_30(iVar0, 2);
}

int func_30(int iParam0, int iParam1)//Position - 0x8FD
{
	int iVar0;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, iParam1);
	if (iVar0 == iParam0)
	{
		iVar0++;
		iVar0 = __LIB_4__::func_892(iVar0, (iParam1 - 1));
	}
	return iVar0;
}

void func_32(var uParam0, int iParam1)//Position - 0x93C
{
	struct<6> Var0;
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = 1090519040;
	Var0.f_3 = -998637568;
	Var0.f_5 = 1065353216;
	func_33(uParam0, iParam1, &Var0);
	func_9(uParam0, iParam1, &Var0);
}

void func_33(var uParam0, int iParam1, var uParam2)//Position - 0x983
{
	uParam2->f_9 = 13;
	uParam2->f_2 = 2f;
	uParam2->f_3 = -2f;
	uParam2->f_8 = 1;
	uParam2->f_6 = func_34(uParam0, iParam1);
	*uParam2 = 20;
	uParam2->f_1 = func_22(uParam0, iParam1);
}

int func_34(var uParam0, int iParam1)//Position - 0x9C1
{
	int iVar0;
	if (!func_25(iParam1))
	{
		return 0;
	}
	iVar0 = uParam0->f_1357.f_182[iParam1 /*10*/].f_6;
	if (func_23(uParam0, iParam1))
	{
		return func_30(iVar0, 6);
	}
	return func_30(iVar0, 5);
}

bool func_35(var uParam0, int iParam1, float fParam2)//Position - 0xA02
{
	return func_36(uParam0, iParam1, &(uParam0->f_1357.f_182[iParam1 /*10*/]), fParam2);
}

bool func_36(var uParam0, int iParam1, var uParam2, float fParam3)//Position - 0xA1F
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	int iVar3;
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_1357.f_288[iParam1]))
	{
		return 0;
	}
	iVar0 = NETWORK::NET_TO_PED(uParam0->f_1357.f_288[iParam1]);
	if (!__LIB_0__::func_121(iVar0))
	{
		return 0;
	}
	sVar1 = __LIB_16__::func_152(uParam2->f_1);
	sVar2 = func_10(*uParam2, uParam2->f_1, uParam2->f_6);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		return 1;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
	{
		return 1;
	}
	if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iVar0, sVar1, sVar2, 3))
	{
		return 1;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar0, MISC::GET_HASH_KEY("BLEND_OUT")))
	{
		return 1;
	}
	if (uParam0->f_1357.f_175[iParam1] == -1)
	{
		return 0;
	}
	iVar3 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam0->f_1357.f_175[iParam1]);
	if (iVar3 == -1)
	{
		return 0;
	}
	return PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar3) >= fParam3;
}

int func_37(int* iParam0, int iParam1)//Position - 0xAF3
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return 0;
	}
	func_101(iParam0, iParam1);
	switch (iParam0->f_1357[iParam1])
	{
		case 1:
			func_100(iParam0, iParam1);
			break;
		case 2:
			func_78(iParam0, iParam1);
			break;
		case 4:
			func_74(iParam0, iParam1);
			break;
		case 5:
			func_60(iParam0, iParam1);
			break;
		case 6:
			func_41(iParam0, iParam1);
			break;
		case 7:
			func_38(iParam0, iParam1);
			return 0;
	}
	return 1;
}

void func_38(int* iParam0, int iParam1)//Position - 0xB85
{
	func_40(iParam0, iParam1);
	iParam0->f_1357[iParam1] = 1;
	__LIB_0__::func_794(&(iParam0->f_1357.f_250[iParam1 /*2*/]));
}

void func_40(var uParam0, int iParam1)//Position - 0xBBB
{
	MISC::CLEAR_BIT(&(uParam0->f_1357.f_167[iParam1]), 1);
}

void func_41(int* iParam0, int iParam1)//Position - 0xBD3
{
	func_7(iParam0, iParam1, 1);
	if (func_52(iParam0, iParam1))
	{
		if (iParam0->f_1357.f_28[iParam1] > 0)
		{
			if (!func_45(iParam0, iParam1))
			{
				return;
			}
		}
		func_7(iParam0, iParam1, 1);
		func_43(iParam0, iParam1);
		__LIB_0__::func_794(&(iParam0->f_1357.f_250[iParam1 /*2*/]));
		__LIB_0__::func_795(&(iParam0->f_1357.f_250[iParam1 /*2*/]), 0, 0);
		func_40(iParam0, iParam1);
		iParam0->f_1357[iParam1] = 2;
		iParam0->f_1357.f_21[iParam1]++;
	}
}

void func_43(var uParam0, int iParam1)//Position - 0xCAD
{
	int iVar0;
	iVar0 = uParam0->f_1357.f_28[iParam1];
	uParam0->f_1357.f_35[iParam1] = func_44(iVar0);
}

int func_44(int iParam0)//Position - 0xCD3
{
	switch (iParam0)
	{
		case 1:
		case 2:
			return 40000;
		case 3:
			return 50000;
		case 4:
			return 60000;
		default:
	}
	return 60000;
}

int func_45(var uParam0, int iParam1)//Position - 0xD13
{
	char* sVar0;
	if (!__LIB_0__::func_953(uParam0->f_1357.f_288[iParam1]))
	{
		return 0;
	}
	sVar0 = __LIB_31__::func_830(12, 0);
	func_46(uParam0, sVar0, iParam1, 0, 0, 1);
	return 1;
}

void func_46(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0xD4A
{
	int iVar0;
	char* sVar1;
	if (!func_25(iParam2))
	{
		return;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_1357.f_288[iParam2]))
	{
		return;
	}
	iVar0 = NETWORK::NET_TO_PED(uParam0->f_1357.f_288[iParam2]);
	if (!__LIB_0__::func_121(iVar0))
	{
		return;
	}
	if (iParam3 && AUDIO::IS_AMBIENT_SPEECH_PLAYING(iVar0))
	{
		return;
	}
	sVar1 = __LIB_0__::func_471(iParam4);
	AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iVar0, sParam1, sVar1, iParam5);
}

int func_52(var uParam0, int iParam1)//Position - 0x1562
{
	if (__LIB_0__::func_937(&(uParam0->f_1357.f_250[iParam1 /*2*/]), 30000, 0))
	{
		return 1;
	}
	return func_53(uParam0, iParam1, 6);
}

int func_53(var uParam0, int iParam1, int iParam2)//Position - 0x158D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = func_58(iVar0, iParam1);
		iVar2 = uParam0->f_1357.f_263[iVar1];
		if (iVar2 != __LIB_0__::func_162())
		{
			if (func_54(uParam0, iVar1))
			{
				iVar3 = iVar2;
				if (uParam0->f_1652[iVar3 /*33*/].f_25 != iParam2)
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

int func_54(var uParam0, int iParam1)//Position - 0x15EC
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!func_56(iParam1))
	{
		return 0;
	}
	iVar0 = uParam0->f_1357.f_263[iParam1];
	iVar1 = iVar0;
	if (iVar0 == __LIB_0__::func_162())
	{
		return 0;
	}
	if (!func_56(uParam0->f_1652[iVar1 /*33*/]))
	{
		return 0;
	}
	if (!__LIB_1__::func_693(iVar0, 1, 1))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0)))
	{
		return 0;
	}
	iVar2 = uParam0->f_1652[iVar1 /*33*/].f_1;
	if (!func_25(iVar2))
	{
		return 0;
	}
	return 1;
}

bool func_56(int iParam0)//Position - 0x16E2
{
	return (iParam0 > -1 && iParam0 < 24);
}

int func_58(int iParam0, int iParam1)//Position - 0x1701
{
	return (iParam1 * 4 + iParam0);
}

void func_60(int* iParam0, int iParam1)//Position - 0x176E
{
	if (func_61(iParam0, iParam1))
	{
		iParam0->f_1357[iParam1] = 6;
	}
}

int func_61(var uParam0, int iParam1)//Position - 0x178B
{
	switch (uParam0->f_1357.f_182[iParam1 /*10*/])
	{
		case 27:
			func_73(uParam0, iParam1);
			break;
		case 26:
			func_72(uParam0, iParam1);
			break;
		case 25:
			func_68(uParam0, iParam1);
			break;
		case 24:
			func_65(uParam0, iParam1);
			break;
		case 28:
			return func_35(uParam0, iParam1, 1063675494);
		default:
			if (func_64(uParam0, iParam1))
			{
				return 1;
			}
			func_62(uParam0, iParam1);
			break;
	}
	return 0;
}

void func_62(var uParam0, int iParam1)//Position - 0x1818
{
	struct<6> Var0;
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = 1090519040;
	Var0.f_3 = -998637568;
	Var0.f_5 = 1065353216;
	func_63(uParam0, iParam1, &Var0);
	func_9(uParam0, iParam1, &Var0);
}

void func_63(var uParam0, int iParam1, var uParam2)//Position - 0x185F
{
	uParam2->f_9 = 13;
	uParam2->f_2 = 2f;
	uParam2->f_3 = -2f;
	uParam2->f_8 = 1;
	*uParam2 = 27;
	uParam2->f_1 = func_22(uParam0, iParam1);
}

bool func_64(var uParam0, int iParam1)//Position - 0x1891
{
	return ((!BitTest(uParam0->f_1357.f_243[iParam1], 1) && !BitTest(uParam0->f_1357.f_243[iParam1], 2)) && !BitTest(uParam0->f_1357.f_243[iParam1], 3));
}

void func_65(var uParam0, int iParam1)//Position - 0x18CD
{
	if (func_35(uParam0, iParam1, 1063675494))
	{
		MISC::CLEAR_BIT(&(uParam0->f_1357.f_243[iParam1]), 1);
		func_66(uParam0, iParam1);
	}
}

void func_66(var uParam0, int iParam1)//Position - 0x18FD
{
	struct<6> Var0;
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = 1090519040;
	Var0.f_3 = -998637568;
	Var0.f_5 = 1065353216;
	func_67(uParam0, iParam1, &Var0);
	func_9(uParam0, iParam1, &Var0);
}

void func_67(var uParam0, int iParam1, var uParam2)//Position - 0x1944
{
	uParam2->f_9 = 13;
	uParam2->f_2 = 2f;
	uParam2->f_3 = -2f;
	uParam2->f_8 = 1;
	*uParam2 = 28;
	uParam2->f_1 = func_22(uParam0, iParam1);
}

void func_68(var uParam0, int iParam1)//Position - 0x1976
{
	if (!func_35(uParam0, iParam1, 1063675494))
	{
		return;
	}
	MISC::CLEAR_BIT(&(uParam0->f_1357.f_243[iParam1]), 2);
	if (func_69(uParam0, iParam1))
	{
		return;
	}
	func_66(uParam0, iParam1);
}

int func_69(var uParam0, int iParam1)//Position - 0x19B8
{
	if (BitTest(uParam0->f_1357.f_243[iParam1], 3))
	{
		func_70(uParam0, iParam1, 26);
		return 1;
	}
	if (BitTest(uParam0->f_1357.f_243[iParam1], 2))
	{
		func_70(uParam0, iParam1, 25);
		return 1;
	}
	if (BitTest(uParam0->f_1357.f_243[iParam1], 1))
	{
		func_70(uParam0, iParam1, 24);
		return 1;
	}
	return 0;
}

void func_70(var uParam0, int iParam1, int iParam2)//Position - 0x1A1B
{
	struct<6> Var0;
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = 1090519040;
	Var0.f_3 = -998637568;
	Var0.f_5 = 1065353216;
	func_71(uParam0, iParam1, &Var0, iParam2);
	func_9(uParam0, iParam1, &Var0);
}

void func_71(var uParam0, int iParam1, var uParam2, var uParam3)//Position - 0x1A64
{
	uParam2->f_9 = 13;
	uParam2->f_2 = 2f;
	uParam2->f_3 = -2f;
	uParam2->f_8 = 1;
	*uParam2 = uParam3;
	uParam2->f_1 = func_22(uParam0, iParam1);
}

void func_72(var uParam0, int iParam1)//Position - 0x1A96
{
	if (!func_35(uParam0, iParam1, 1063675494))
	{
		return;
	}
	MISC::CLEAR_BIT(&(uParam0->f_1357.f_243[iParam1]), 3);
	if (func_69(uParam0, iParam1))
	{
		return;
	}
	func_66(uParam0, iParam1);
}

void func_73(var uParam0, int iParam1)//Position - 0x1AD8
{
	if (!func_35(uParam0, iParam1, 1063675494))
	{
		return;
	}
	if (func_69(uParam0, iParam1))
	{
		return;
	}
	func_66(uParam0, iParam1);
}

void func_74(int* iParam0, int iParam1)//Position - 0x1B0A
{
	func_7(iParam0, iParam1, 0);
	if (func_77(iParam0, iParam1))
	{
		iParam0->f_1357[iParam1] = 5;
		__LIB_0__::func_794(&(iParam0->f_1357.f_250[iParam1 /*2*/]));
		__LIB_0__::func_795(&(iParam0->f_1357.f_250[iParam1 /*2*/]), 0, 0);
		func_76(iParam0, iParam1);
		func_40(iParam0, iParam1);
		func_75(iParam0, iParam1, 0);
	}
}

void func_75(var uParam0, int iParam1, bool bParam2)//Position - 0x1B69
{
	if (bParam2)
	{
		MISC::SET_BIT(&(uParam0->f_1357.f_167[iParam1]), 2);
		return;
	}
	MISC::CLEAR_BIT(&(uParam0->f_1357.f_167[iParam1]), 2);
}

void func_76(var uParam0, int iParam1)//Position - 0x1B99
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = -1;
	uParam0->f_1357.f_243[iParam1] = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		iVar2 = func_58(iVar1, iParam1);
		if (!func_54(uParam0, iVar2))
		{
		}
		else
		{
			iVar3 = uParam0->f_1357.f_263[iVar2];
			if (iVar3 == __LIB_0__::func_162())
			{
			}
			else
			{
				iVar0 = iVar3;
				if (BitTest(uParam0->f_1652[iVar0 /*33*/].f_2, 3))
				{
					MISC::SET_BIT(&(uParam0->f_1357.f_243[iParam1]), 3);
				}
				if (BitTest(uParam0->f_1652[iVar0 /*33*/].f_2, 2))
				{
					MISC::SET_BIT(&(uParam0->f_1357.f_243[iParam1]), 2);
				}
				if (BitTest(uParam0->f_1652[iVar0 /*33*/].f_2, 1))
				{
					MISC::SET_BIT(&(uParam0->f_1357.f_243[iParam1]), 1);
				}
				if ((BitTest(uParam0->f_1357.f_243[iParam1], 3) && BitTest(uParam0->f_1357.f_243[iParam1], 2)) && BitTest(uParam0->f_1357.f_243[iParam1], 1))
				{
					return;
				}
			}
		}
		iVar1++;
	}
}

int func_77(var uParam0, int iParam1)//Position - 0x1C93
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = func_58(iVar0, iParam1);
		iVar2 = uParam0->f_1357.f_263[iVar1];
		if (iVar2 != __LIB_0__::func_162())
		{
			if (func_54(uParam0, iVar1))
			{
				iVar3 = iVar2;
				if (uParam0->f_1652[iVar3 /*33*/].f_25 != 5 && uParam0->f_1652[iVar3 /*33*/].f_25 != 6)
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

void func_78(int* iParam0, int iParam1)//Position - 0x1D04
{
	int iVar0;
	iVar0 = iParam0->f_1357.f_7[iParam1];
	switch (iVar0)
	{
		case 0:
			func_96(iParam0, iParam1);
			break;
		case 1:
			func_94(iParam0, iParam1);
			break;
		case 2:
			func_90(iParam0, iParam1);
			break;
		case 3:
			func_85(iParam0, iParam1);
			break;
		case 4:
			func_79(iParam0, iParam1);
			break;
	}
}

void func_79(int* iParam0, int iParam1)//Position - 0x1D75
{
	int iVar0;
	iVar0 = func_84(iParam0, iParam1);
	func_81(iParam0, iParam1);
	if ((!func_35(iParam0, iParam1, 1063675494) && !func_80(iParam0, iParam1, MISC::GET_HASH_KEY("READY_UP_START"), 0)) && !__LIB_0__::func_937(&(iParam0->f_1357.f_250[iParam1 /*2*/]), iVar0 + 10000, 0))
	{
		return;
	}
	MISC::CLEAR_BIT(&(iParam0->f_1357.f_167[iParam1]), 5);
	iParam0->f_1357[iParam1] = 4;
	iParam0->f_1357.f_7[iParam1] = 0;
}

bool func_80(int* iParam0, int iParam1, int iParam2, float fParam3)//Position - 0x1DFB
{
	int iVar0;
	int iVar1;
	float fVar2;
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0->f_1357.f_288[iParam1]))
	{
		return 0;
	}
	iVar0 = NETWORK::NET_TO_PED(iParam0->f_1357.f_288[iParam1]);
	if (!__LIB_0__::func_121(iVar0))
	{
		return 0;
	}
	if (iParam0->f_1357.f_175[iParam1] == -1)
	{
		return 0;
	}
	iVar1 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(iParam0->f_1357.f_175[iParam1]);
	if (iVar1 == -1)
	{
		return 0;
	}
	fVar2 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar1);
	return (ENTITY::HAS_ANIM_EVENT_FIRED(iVar0, iParam2) && fVar2 >= fParam3);
}

void func_81(var uParam0, int iParam1)//Position - 0x1E83
{
	if (uParam0->f_1357.f_28[iParam1] <= 0)
	{
		return;
	}
	if (BitTest(uParam0->f_1357.f_167[iParam1], 5))
	{
		return;
	}
	if (func_83(uParam0, iParam1))
	{
		return;
	}
	if (!func_82(uParam0, iParam1))
	{
		return;
	}
	MISC::SET_BIT(&(uParam0->f_1357.f_167[iParam1]), 5);
}

int func_82(var uParam0, int iParam1)//Position - 0x1EDD
{
	char* sVar0;
	if (!__LIB_0__::func_953(uParam0->f_1357.f_288[iParam1]))
	{
		return 0;
	}
	sVar0 = __LIB_31__::func_830(11, 0);
	func_46(uParam0, sVar0, iParam1, 0, 0, 1);
	return 1;
}

bool func_83(var uParam0, int iParam1)//Position - 0x1F14
{
	int iVar0;
	if (!func_25(iParam1))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_1357.f_288[iParam1]))
	{
		return 0;
	}
	iVar0 = NETWORK::NET_TO_PED(uParam0->f_1357.f_288[iParam1]);
	if (!__LIB_0__::func_121(iVar0))
	{
		return 0;
	}
	return AUDIO::IS_AMBIENT_SPEECH_PLAYING(iVar0);
}

int func_84(var uParam0, int iParam1)//Position - 0x1F68
{
	return uParam0->f_1357.f_35[iParam1];
}

void func_85(var uParam0, int iParam1)//Position - 0x1F7B
{
	int iVar0;
	func_7(uParam0, iParam1, 1);
	iVar0 = func_84(uParam0, iParam1);
	__LIB_0__::func_953(uParam0->f_1357.f_288[iParam1]);
	if (!__LIB_0__::func_937(&(uParam0->f_1357.f_250[iParam1 /*2*/]), iVar0, 0))
	{
		return;
	}
	func_88(uParam0, iParam1);
	if (uParam0->f_1357.f_28[iParam1] > 0)
	{
		func_86(uParam0, iParam1);
	}
	MISC::CLEAR_BIT(&(uParam0->f_1357.f_167[iParam1]), 5);
	uParam0->f_1357.f_7[iParam1] = 4;
}

void func_86(var uParam0, int iParam1)//Position - 0x1FFB
{
	struct<6> Var0;
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = 1090519040;
	Var0.f_3 = -998637568;
	Var0.f_5 = 1065353216;
	func_87(uParam0, iParam1, &Var0);
	func_9(uParam0, iParam1, &Var0);
}

void func_87(var uParam0, int iParam1, var uParam2)//Position - 0x2042
{
	uParam2->f_9 = 13;
	uParam2->f_2 = 2f;
	uParam2->f_3 = -2f;
	uParam2->f_8 = 1;
	*uParam2 = 23;
	uParam2->f_1 = func_22(uParam0, iParam1);
}

void func_88(var uParam0, int iParam1)//Position - 0x2074
{
	uParam0->f_1357.f_153[iParam1] = func_89();
}

int func_89()//Position - 0x208B
{
	return MISC::GET_RANDOM_MWC_INT_IN_RANGE(0, 38);
}

void func_90(var uParam0, int iParam1)//Position - 0x209A
{
	if (func_91(uParam0, iParam1))
	{
		func_75(uParam0, iParam1, 1);
		uParam0->f_1357.f_7[iParam1] = 3;
	}
}

int func_91(var uParam0, int iParam1)//Position - 0x20C2
{
	switch (uParam0->f_1357.f_182[iParam1 /*10*/])
	{
		case 22:
			return func_35(uParam0, iParam1, 1063675494);
		case 23:
			return 1;
		default:
	}
	func_92(uParam0, iParam1);
	return 0;
	return 0;
}

void func_92(var uParam0, int iParam1)//Position - 0x2107
{
	struct<6> Var0;
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = 1090519040;
	Var0.f_3 = -998637568;
	Var0.f_5 = 1065353216;
	func_93(uParam0, iParam1, &Var0);
	func_9(uParam0, iParam1, &Var0);
}

void func_93(var uParam0, int iParam1, var uParam2)//Position - 0x214E
{
	uParam2->f_9 = 13;
	uParam2->f_2 = 2f;
	uParam2->f_3 = -2f;
	uParam2->f_8 = 1;
	*uParam2 = 22;
	uParam2->f_1 = func_22(uParam0, iParam1);
}

void func_94(var uParam0, int iParam1)//Position - 0x2180
{
	int iVar0;
	iVar0 = func_84(uParam0, iParam1);
	if (func_95(uParam0, iParam1) || __LIB_0__::func_937(&(uParam0->f_1357.f_250[iParam1 /*2*/]), iVar0 + 10000, 0))
	{
		func_75(uParam0, iParam1, 0);
		uParam0->f_1357.f_7[iParam1] = 2;
		return;
	}
	func_7(uParam0, iParam1, 0);
}

int func_95(var uParam0, int iParam1)//Position - 0x21D9
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			if (BitTest(uParam0->f_1652[iVar1 /*33*/].f_26[iParam1], 1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_96(var uParam0, int iParam1)//Position - 0x2228
{
	int iVar0;
	iVar0 = func_84(uParam0, iParam1);
	func_98(uParam0, iParam1);
	if (__LIB_0__::func_937(&(uParam0->f_1357.f_250[iParam1 /*2*/]), (iVar0 - 15000), 0))
	{
		func_97(uParam0, iParam1);
		MISC::SET_BIT(&(uParam0->f_1357.f_167[iParam1]), 1);
		MISC::CLEAR_BIT(&(uParam0->f_1357.f_167[iParam1]), 4);
		uParam0->f_1357.f_7[iParam1] = 1;
		return;
	}
	func_7(uParam0, iParam1, 0);
}

void func_97(var uParam0, int iParam1)//Position - 0x229B
{
	uParam0->f_1357.f_160[iParam1] = MISC::GET_RANDOM_INT_IN_RANGE(3, 5);
}

void func_98(var uParam0, int iParam1)//Position - 0x22B4
{
	if (uParam0->f_1357.f_28[iParam1] <= 0)
	{
		return;
	}
	if (BitTest(uParam0->f_1357.f_167[iParam1], 4))
	{
		return;
	}
	if (func_83(uParam0, iParam1))
	{
		return;
	}
	if (!__LIB_0__::func_937(&(uParam0->f_1357.f_250[iParam1 /*2*/]), 5000, 0))
	{
		return;
	}
	if (!func_99(uParam0, iParam1))
	{
		return;
	}
	MISC::SET_BIT(&(uParam0->f_1357.f_167[iParam1]), 4);
}

int func_99(var uParam0, int iParam1)//Position - 0x2328
{
	char* sVar0;
	if (!__LIB_0__::func_953(uParam0->f_1357.f_288[iParam1]))
	{
		return 0;
	}
	sVar0 = __LIB_31__::func_830(9, 0);
	func_46(uParam0, sVar0, iParam1, 0, 0, 1);
	return 1;
}

void func_100(var uParam0, int iParam1)//Position - 0x235F
{
	func_43(uParam0, iParam1);
	__LIB_0__::func_794(&(uParam0->f_1357.f_250[iParam1 /*2*/]));
	__LIB_0__::func_795(&(uParam0->f_1357.f_250[iParam1 /*2*/]), 0, 0);
	uParam0->f_1357[iParam1] = 2;
	uParam0->f_1357.f_7[iParam1] = 0;
	MISC::CLEAR_BIT(&(uParam0->f_1357.f_167[iParam1]), 4);
	MISC::CLEAR_BIT(&(uParam0->f_1357.f_167[iParam1]), 5);
	func_40(uParam0, iParam1);
	func_75(uParam0, iParam1, 0);
	uParam0->f_1357.f_21[iParam1]++;
}

void func_101(var uParam0, int iParam1)//Position - 0x23EE
{
	if (!func_102(uParam0, iParam1) && func_95(uParam0, iParam1))
	{
		uParam0->f_1357[iParam1] = 7;
	}
}

bool func_102(var uParam0, int iParam1)//Position - 0x2419
{
	int iVar0;
	int iVar1;
	uParam0->f_1357.f_28[iParam1] = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = func_58(iVar0, iParam1);
		if (uParam0->f_1357.f_263[iVar1] != __LIB_0__::func_162())
		{
			uParam0->f_1357.f_28[iParam1]++;
		}
		iVar0++;
	}
	return uParam0->f_1357.f_28[iParam1] > 0;
}

void func_103(var uParam0, int iParam1)//Position - 0x2481
{
	int iVar0;
	int iVar1;
	int iVar2;
	func_7(uParam0, iParam1, 1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = func_58(iVar0, iParam1);
		iVar2 = uParam0->f_1357.f_263[iVar1];
		if (iVar2 != __LIB_0__::func_162() && BitTest(uParam0->f_1652[iVar2 /*33*/].f_2, 6))
		{
			uParam0->f_1357[iParam1] = 1;
			__LIB_0__::func_795(&(uParam0->f_1357.f_250[iParam1 /*2*/]), 0, 0);
			func_4(uParam0, iParam1, 2, 447, 439);
			return;
		}
		iVar0++;
	}
}

void func_104(var uParam0, int iParam1)//Position - 0x2508
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uParam0->f_1357.f_288[iParam1]) || func_4779(iParam1))
	{
		return;
	}
	if (!BitTest(uParam0->f_1357.f_167[iParam1], 6))
	{
		NETWORK::RESERVE_NETWORK_MISSION_PEDS(NETWORK::GET_NUM_CREATED_MISSION_PEDS(false) + 1);
		MISC::SET_BIT(&(uParam0->f_1357.f_167[iParam1]), 6);
	}
	if (func_105(uParam0, iParam1))
	{
		func_8(uParam0, iParam1, 0, 0, 1065353216);
		MISC::CLEAR_BIT(&(uParam0->f_1357.f_167[iParam1]), 6);
	}
}

int func_105(var uParam0, int iParam1)//Position - 0x2588
{
	bool bVar0;
	int iVar1;
	int iVar2;
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return 0;
	}
	func_4774();
	if (!func_4773())
	{
		return 0;
	}
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		return 0;
	}
	bVar0 = func_4772(iParam1);
	iVar1 = func_24(bVar0);
	iVar2 = PED::CREATE_PED(26, iVar1, func_4769(iParam1), func_16(iParam1), true, true);
	ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iVar2, false);
	PED::SET_PED_AS_ENEMY(iVar2, false);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar2, true);
	PED::SET_PED_RESET_FLAG(iVar2, 249, true);
	PED::SET_PED_CONFIG_FLAG(iVar2, 185, true);
	PED::SET_PED_CONFIG_FLAG(iVar2, 108, true);
	ENTITY::SET_ENTITY_CAN_ONLY_BE_DAMAGED_BY_SCRIPT_PARTICIPANTS(iVar2, true);
	PED::SET_PED_CAN_EVASIVE_DIVE(iVar2, false);
	PED::SET_TREAT_AS_AMBIENT_PED_FOR_DRIVER_LOCKON(iVar2, true);
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iVar2, false);
	PED::SET_PED_CONFIG_FLAG(iVar2, 208, true);
	ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar2, true, false);
	func_109(&iVar2, bVar0, iParam1);
	func_107(&iVar2, bVar0, iParam1);
	func_106();
	uParam0->f_1357.f_288[iParam1] = NETWORK::PED_TO_NET(iVar2);
	return 1;
}

void func_106()//Position - 0x2669
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_24(1));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_24(0));
}

void func_107(int iParam0, bool bParam1, int iParam2)//Position - 0x2683
{
	func_108(Global_2788852[iParam2], iParam0);
}

void func_108(int iParam0, var uParam1)//Position - 0x2699
{
	switch (iParam0)
	{
		case 0:
			AUDIO::SET_PED_VOICE_GROUP(*uParam1, MISC::GET_HASH_KEY("S_M_Y_Casino_01_WHITE_01"));
			break;
		case 1:
			AUDIO::SET_PED_VOICE_GROUP(*uParam1, MISC::GET_HASH_KEY("S_M_Y_Casino_01_ASIAN_01"));
			break;
		case 2:
			AUDIO::SET_PED_VOICE_GROUP(*uParam1, MISC::GET_HASH_KEY("S_M_Y_Casino_01_ASIAN_02"));
			break;
		case 3:
			AUDIO::SET_PED_VOICE_GROUP(*uParam1, MISC::GET_HASH_KEY("S_M_Y_Casino_01_ASIAN_01"));
			break;
		case 4:
			AUDIO::SET_PED_VOICE_GROUP(*uParam1, MISC::GET_HASH_KEY("S_M_Y_Casino_01_WHITE_01"));
			break;
		case 5:
			AUDIO::SET_PED_VOICE_GROUP(*uParam1, MISC::GET_HASH_KEY("S_M_Y_Casino_01_WHITE_02"));
			break;
		case 6:
			AUDIO::SET_PED_VOICE_GROUP(*uParam1, MISC::GET_HASH_KEY("S_M_Y_Casino_01_WHITE_01"));
			break;
		case 7:
			AUDIO::SET_PED_VOICE_GROUP(*uParam1, MISC::GET_HASH_KEY("S_F_Y_Casino_01_ASIAN_01"));
			break;
		case 8:
			AUDIO::SET_PED_VOICE_GROUP(*uParam1, MISC::GET_HASH_KEY("S_F_Y_Casino_01_ASIAN_02"));
			break;
		case 9:
			AUDIO::SET_PED_VOICE_GROUP(*uParam1, MISC::GET_HASH_KEY("S_F_Y_Casino_01_ASIAN_01"));
			break;
		case 10:
			AUDIO::SET_PED_VOICE_GROUP(*uParam1, MISC::GET_HASH_KEY("S_F_Y_Casino_01_ASIAN_02"));
			break;
		case 11:
			AUDIO::SET_PED_VOICE_GROUP(*uParam1, MISC::GET_HASH_KEY("S_F_Y_Casino_01_LATINA_01"));
			break;
		case 12:
			AUDIO::SET_PED_VOICE_GROUP(*uParam1, MISC::GET_HASH_KEY("S_F_Y_Casino_01_LATINA_02"));
			break;
		case 13:
			AUDIO::SET_PED_VOICE_GROUP(*uParam1, MISC::GET_HASH_KEY("S_F_Y_Casino_01_LATINA_01"));
			break;
	}
}

void func_109(int iParam0, bool bParam1, int iParam2)//Position - 0x27F8
{
	func_4768(Global_2788852[iParam2], iParam0);
	func_111();
	if (!INTERIOR::IS_VALID_INTERIOR(iLocal_112))
	{
		return;
	}
	if (!INTERIOR::IS_INTERIOR_READY(iLocal_112))
	{
		return;
	}
	if (__LIB_16__::func_155(iParam2))
	{
		INTERIOR::FORCE_ROOM_FOR_ENTITY(*iParam0, iLocal_112, joaat("rm_GamingFloor_02"));
	}
	else
	{
		INTERIOR::FORCE_ROOM_FOR_ENTITY(*iParam0, iLocal_112, joaat("rm_GamingFloor_03"));
	}
}

void func_111()//Position - 0x2880
{
	var uVar0;
	struct<3> Var1;
	var uVar2;
	if (iLocal_112 != 0)
	{
		return;
	}
	func_112(123, &uVar0, &Var1, &uVar2, 1);
	iLocal_112 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Var1, &uVar0);
}

void func_112(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4)//Position - 0x28AA
{
	struct<31> Var0;
	func_113(iParam0, &Var0, 1);
	Stack.Push(iParam0);
	Stack.Push(uParam1);
	Stack.Push(uParam2);
	Stack.Push(uParam3);
	Stack.Push(iParam4);
	Call_Loc(Var0.f_30);
}

void func_113(int iParam0, var uParam1, int iParam2)//Position - 0x28CA
{
	func_4763(uParam1, iParam2);
	func_4757(uParam1, iParam2);
	func_4749(uParam1, iParam2);
	func_114(__LIB_0__::func_172(iParam0), uParam1, iParam2);
}

void func_114(int iParam0, var uParam1, int iParam2)//Position - 0x28F8
{
	switch (iParam0)
	{
		case 0:
			func_4675(uParam1, iParam2);
			break;
		case 1:
			func_4542(uParam1, iParam2);
			break;
		case 2:
			func_4465(uParam1, iParam2);
			break;
		case 3:
			func_4387(uParam1, iParam2);
			break;
		case 4:
			func_4213(uParam1, iParam2);
			break;
		case 5:
			func_4047(uParam1, iParam2);
			break;
		case 6:
			func_3982(uParam1, iParam2);
			break;
		case 7:
			func_3814(uParam1, iParam2);
			break;
		case 8:
			func_3640(uParam1, iParam2);
			break;
		case 9:
			func_3394(uParam1, iParam2);
			break;
		case 10:
			func_3316(uParam1, iParam2);
			break;
		case 11:
			func_3085(uParam1, iParam2);
			break;
		case 12:
			func_2939(uParam1, iParam2);
			break;
		case 13:
			func_2771(uParam1, iParam2);
			break;
		case 14:
			func_2596(uParam1, iParam2);
			break;
		case 15:
			func_2417(uParam1, iParam2);
			break;
		case 16:
			func_2307(uParam1, iParam2);
			break;
		case 17:
			func_2049(uParam1, iParam2);
			break;
		case 18:
			func_1955(uParam1, iParam2);
			break;
		case 19:
			func_1832(uParam1, iParam2);
			break;
		case 20:
			func_1383(uParam1, iParam2);
			break;
		case 21:
			func_1261(uParam1, iParam2);
			break;
		case 22:
			func_1088(uParam1, iParam2);
			break;
		case 23:
			func_865(uParam1, iParam2);
			break;
		case 24:
			func_115(uParam1, iParam2);
			break;
	}
}

void func_115(var uParam0, int iParam1)//Position - 0x2AB0
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 324156/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 324142/*__LIB_5__::func_448*/;
			break;
		case 1:
			uParam0->f_30 = 324046/*__LIB_5__::func_447*/;
			break;
		case 2:
			uParam0->f_31 = 322703/*__LIB_5__::func_446*/;
			break;
		case 3:
			uParam0->f_34 = 322474/*__LIB_3__::func_732*/;
			break;
		case 4:
			uParam0->f_12 = 322462/*__LIB_3__::func_731*/;
			break;
		case 5:
			uParam0->f_11 = 322452/*__LIB_3__::func_730*/;
			break;
		case 37:
			uParam0->f_18 = 322264/*__LIB_5__::func_200*/;
			break;
		case 38:
			uParam0->f_9 = 322217/*__LIB_7__::func_731*/;
			break;
		case 42:
			uParam0->f_10 = 322189/*__LIB_7__::func_730*/;
			break;
		case 6:
			uParam0->f_32 = 321880/*__LIB_4__::func_915*/;
			break;
		case 11:
			uParam0->f_11 = 321871/*__LIB_3__::func_729*/;
			break;
		case 12:
			uParam0->f_33 = 319203/*__LIB_9__::func_524*/;
			break;
		case 14:
			uParam0->f_11 = 319194/*__LIB_0__::func_114*/;
			break;
		case 109:
			uParam0->f_56 = 312611/*__LIB_9__::func_299*/;
			break;
		case 8:
			uParam0->f_37 = 311736/*__LIB_3__::func_724*/;
			break;
		case 7:
			uParam0->f_36 = 311619/*__LIB_3__::func_723*/;
			break;
		case 79:
			*uParam0 = 311563/*__LIB_5__::func_265*/;
			break;
		case 9:
			uParam0->f_29 = 311410/*__LIB_5__::func_445*/;
			break;
		case 10:
			uParam0->f_27 = 311264/*__LIB_5__::func_444*/;
			break;
		case 13:
			uParam0->f_2 = 311182/*__LIB_9__::func_783*/;
			break;
		case 15:
			uParam0->f_2 = 309348/*__LIB_9__::func_814*/;
			break;
		case 16:
			uParam0->f_5 = 308151/*__LIB_9__::func_976*/;
			break;
		case 108:
			uParam0->f_55 = 250374/*__LIB_10__::func_76*/;
			break;
		case 17:
			uParam0->f_17 = 248648/*__LIB_9__::func_260*/;
			break;
		case 19:
			uParam0->f_17 = 248498/*__LIB_6__::func_30*/;
			break;
		case 18:
			uParam0->f_8 = 248473/*__LIB_3__::func_688*/;
			break;
		case 20:
			uParam0->f_3 = 248253/*__LIB_6__::func_934*/;
			break;
		case 21:
			uParam0->f_3 = 246812/*__LIB_9__::func_313*/;
			break;
		case 74:
			uParam0->f_53 = 246622/*__LIB_5__::func_209*/;
			break;
		case 75:
			uParam0->f_4 = 245286/*__LIB_5__::func_711*/;
			break;
		case 22:
			uParam0->f_24 = 245169/*__LIB_5__::func_432*/;
			break;
		case 23:
			uParam0->f_26 = 245126/*__LIB_3__::func_683*/;
			break;
		case 24:
			uParam0->f_26 = 245092/*__LIB_3__::func_682*/;
			break;
		case 26:
			uParam0->f_38 = 245084/*__LIB_0__::func_467*/;
			break;
		case 25:
			uParam0->f_23 = 242097/*func_585*/;
			break;
		case 27:
			uParam0->f_25 = 242089/*__LIB_0__::func_467*/;
			break;
		case 28:
			uParam0->f_24 = 242081/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 241931/*__LIB_5__::func_710*/;
			break;
		case 31:
			uParam0->f_39 = 241712/*__LIB_5__::func_709*/;
			break;
		case 33:
			uParam0->f_40 = 240719/*__LIB_7__::func_49*/;
			break;
		case 32:
			*uParam0 = 240664/*__LIB_6__::func_932*/;
			break;
		case 76:
			uParam0->f_13 = 240653/*__LIB_3__::func_554*/;
			break;
		case 34:
			uParam0->f_41 = 236901/*__LIB_6__::func_931*/;
			break;
		case 36:
			uParam0->f_58 = 236856/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 215854/*__LIB_5__::func_946*/;
			break;
		case 45:
			uParam0->f_14 = 215845/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 215836/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 215828/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 215805/*__LIB_3__::func_665*/;
			break;
		case 82:
			uParam0->f_19 = 215759/*__LIB_5__::func_267*/;
			break;
		case 47:
			uParam0->f_43 = 215627/*__LIB_4__::func_910*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 214374/*__LIB_6__::func_930*/;
			break;
		case 49:
			uParam0->f_8 = 214356/*__LIB_3__::func_658*/;
			break;
		case 50:
			*uParam0 = 214007/*__LIB_6__::func_929*/;
			break;
		case 51:
			*uParam0 = 213905/*__LIB_5__::func_707*/;
			break;
		case 52:
			uParam0->f_15 = 213894/*__LIB_3__::func_657*/;
			break;
		case 53:
			uParam0->f_13 = 213768/*func_534*/;
			break;
		case 54:
			uParam0->f_45 = 213381/*func_533*/;
			break;
		case 56:
			uParam0->f_46 = 213362/*__LIB_3__::func_656*/;
			break;
		case 57:
			uParam0->f_11 = 212116/*__LIB_7__::func_48*/;
			break;
		case 58:
			uParam0->f_13 = 211990/*__LIB_3__::func_655*/;
			break;
		case 59:
			*uParam0 = 210327/*__LIB_7__::func_868*/;
			break;
		case 60:
			*uParam0 = 210318/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 210307/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 210181/*__LIB_3__::func_646*/;
			break;
		case 55:
			uParam0->f_45 = 210173/*__LIB_0__::func_467*/;
			break;
		case 63:
			uParam0->f_11 = 210159/*__LIB_7__::func_867*/;
			break;
		case 64:
			uParam0->f_47 = 210151/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 208556/*__LIB_7__::func_47*/;
			break;
		case 66:
			uParam0->f_21 = 207821/*__LIB_5__::func_422*/;
			break;
		case 67:
			uParam0->f_21 = 207681/*__LIB_5__::func_216*/;
			break;
		case 68:
			*uParam0 = 206476/*__LIB_7__::func_773*/;
			break;
		case 69:
			*uParam0 = 206467/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 206455/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 206446/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 206434/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 205952/*__LIB_5__::func_945*/;
			break;
		case 84:
			uParam0->f_1 = 205943/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 32370/*func_273*/;
			break;
		case 87:
			uParam0->f_1 = 28517/*__LIB_6__::func_439*/;
			break;
		case 88:
			uParam0->f_1 = 28508/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 28500/*__LIB_0__::func_467*/;
			break;
		case 90:
			uParam0->f_1 = 27550/*__LIB_7__::func_0*/;
			break;
		case 91:
			uParam0->f_1 = 27516/*__LIB_3__::func_614*/;
			break;
		case 92:
			uParam0->f_1 = 25588/*__LIB_7__::func_864*/;
			break;
		case 94:
			uParam0->f_1 = 23577/*__LIB_7__::func_875*/;
			break;
		case 95:
			uParam0->f_22 = 19286/*__LIB_7__::func_883*/;
			break;
		case 96:
			uParam0->f_1 = 19277/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 19268/*__LIB_0__::func_109*/;
			break;
		case 98:
			uParam0->f_1 = 19259/*__LIB_0__::func_109*/;
			break;
		case 100:
			uParam0->f_22 = 19251/*__LIB_0__::func_467*/;
			break;
		case 101:
			uParam0->f_22 = 19243/*__LIB_0__::func_467*/;
			break;
		case 112:
			uParam0->f_13 = 19129/*__LIB_3__::func_606*/;
			break;
		case 113:
			uParam0->f_3 = 18975/*__LIB_5__::func_701*/;
			break;
		case 114:
			uParam0->f_16 = 18307/*__LIB_3__::func_605*/;
			break;
		case 115:
			uParam0->f_3 = 18298/*__LIB_0__::func_114*/;
			break;
		case 116:
			*uParam0 = 18289/*__LIB_0__::func_114*/;
			break;
		case 117:
			uParam0->f_16 = 13871/*__LIB_3__::func_604*/;
			break;
		case 118:
			uParam0->f_11 = 13862/*__LIB_3__::func_603*/;
			break;
		case 119:
			uParam0->f_27 = 13735/*__LIB_7__::func_44*/;
			break;
		case 120:
			uParam0->f_19 = 13680/*__LIB_5__::func_700*/;
			break;
		case 78:
			uParam0->f_59 = 12740/*__LIB_7__::func_828*/;
			break;
		case 124:
			uParam0->f_1 = 12731/*__LIB_0__::func_109*/;
			break;
		case 125:
			uParam0->f_19 = 12723/*__LIB_0__::func_467*/;
			break;
	}
}

int func_273(int iParam0, var uParam1)//Position - 0x7E72
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	struct<3> Var7;
	struct<3> Var8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	bool bVar13;
	bool bVar14;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || ENTITY::DOES_ENTITY_EXIST(uParam1->f_262))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_262))
		{
			iVar0 = uParam1->f_262;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
		{
			func_371(&iVar0, &(uParam1->f_109), 60);
			__LIB_3__::func_633(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_282(&iVar0, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 1, 0, 1))
		{
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
		}
		else
		{
			return 0;
		}
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(uParam1->f_109), &(uParam1->f_189[0 /*3*/]), &(uParam1->f_189[1 /*3*/]));
		__LIB_3__::func_632(iParam0, &Var1, &Var3, &uVar9, 1);
		__LIB_3__::func_632(iParam0, &Var2, &Var4, &uVar10, 0);
		__LIB_3__::func_631(iParam0, &Var5, &Var7, &uVar11, 1);
		__LIB_3__::func_631(iParam0, &Var6, &Var8, &uVar12, 0);
		bVar13 = VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar0));
		bVar14 = !(uParam1->f_189[1 /*3*/].f_1 - uParam1->f_189[0 /*3*/].f_1) > 7f;
		if (bVar13)
		{
			MISC::SET_BIT(&(uParam1->f_188), 1);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_188), 1);
		}
		__LIB_6__::func_820(&(Global_1946250.f_3638), Var1, Var3, uVar9, Var2, Var4, uVar10, bVar13, Var5, Var7, uVar11, Var6, Var8, uVar12, bVar14, 1056964608, 1036831949);
	}
	return 1;
}

int func_282(int iParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)//Position - 0x85E8
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		return 0;
	}
	iVar2 = 8;
	if (bParam7)
	{
		iVar2 = -1;
	}
	iVar0 = -1;
	while (iVar0 <= iVar2)
	{
		iVar1 = iVar0 + 1;
		iVar3 = iVar0;
		if (!VEHICLE::IS_VEHICLE_SEAT_FREE(*iParam0, iVar3, false))
		{
			iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*iParam0, iVar3, false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar4) && (__LIB_0__::func_121(iVar4) || bParam5))
			{
				if (bParam3 && !PED::IS_PED_A_PLAYER(iVar4))
				{
				}
				else
				{
					if (!ENTITY::DOES_ENTITY_EXIST((*uParam2)[iVar1]))
					{
						func_283(uParam2[iVar1], iVar4, bParam8, bParam6);
					}
					if (ENTITY::DOES_ENTITY_EXIST((*uParam2)[iVar1]) && (__LIB_0__::func_121((*uParam2)[iVar1]) || bParam5))
					{
						if (!PED::HAS_PED_HEAD_BLEND_FINISHED((*uParam2)[iVar1]) || !PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED((*uParam2)[iVar1]))
						{
							if (bParam4)
							{
								return 0;
							}
						}
						iVar5 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam1, iVar3, false);
						if (!ENTITY::DOES_ENTITY_EXIST(iVar5))
						{
							if (__LIB_0__::func_121(*uParam1))
							{
								ENTITY::FREEZE_ENTITY_POSITION((*uParam2)[iVar1], false);
								PED::SET_PED_INTO_VEHICLE((*uParam2)[iVar1], *uParam1, iVar3);
							}
						}
						if (iVar0 == 7 && ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("insurgent3"))
						{
							VEHICLE::SET_VEHICLE_DOOR_CONTROL(*uParam1, 5, 5, 1f);
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 1;
}

int func_283(var uParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x874A
{
	struct<3> Var0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return 0;
	}
	*uParam0 = PED::CLONE_PED(iParam1, false, false, bParam2);
	if (__LIB_0__::func_121(iParam1))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(*uParam0, true);
		__LIB_1__::func_494(*uParam0);
		if (func_298(iParam1) || __LIB_1__::func_554(iParam1))
		{
			PED::SET_PED_HELMET(*uParam0, true);
		}
		else
		{
			PED::SET_PED_HELMET(*uParam0, false);
			PED::REMOVE_PED_HELMET(*uParam0, true);
			PED::CLEAR_PED_PROP(*uParam0, 0);
		}
		if (bParam3)
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(*uParam0, false) };
			Var0.f_2 = (Var0.f_2 - 10f);
			ENTITY::SET_ENTITY_COORDS(*uParam0, Var0, false, false, false, true);
			ENTITY::FREEZE_ENTITY_POSITION(*uParam0, true);
			ENTITY::SET_ENTITY_COLLISION(*uParam0, false, false);
		}
		PED::FINALIZE_HEAD_BLEND(*uParam0);
		return 1;
	}
	return 0;
}

int func_298(int iParam0)//Position - 0x95CF
{
	if (!PED::IS_PED_WEARING_HELMET(iParam0) && !__LIB_0__::func_348(ENTITY::GET_ENTITY_MODEL(iParam0), 14, func_300(iParam0, 14, 0), -1))
	{
		return 0;
	}
	return 1;
}

int func_300(int iParam0, int iParam1, int iParam2)//Position - 0x96D0
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
				if (func_301(iParam0, iParam1, iVar0))
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
				if (func_301(iParam0, iParam1, iVar1))
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

int func_301(int iParam0, int iParam1, int iParam2)//Position - 0x9771
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
				if (!func_301(iParam0, iVar4, uVar8[iVar4]))
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
							if (!func_301(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_6__::func_38(iVar0, 14, iVar6, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar5)
									{
										if (func_301(iParam0, 14, iVar6))
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
			if (!func_301(iParam0, 14, uVar11[iVar10]))
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
						return func_301(iParam0, 4, uVar18);
					}
				}
				else if (__LIB_0__::func_352(iVar0, 4, iParam2, &uVar18))
				{
					return func_301(iParam0, 4, uVar18);
				}
			}
			Global_78129 = (Global_78129 - 1);
		}
	}
	return 0;
}

int func_371(int iParam0, var uParam1, int iParam2)//Position - 0x28B3E
{
	struct<101> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0) || ENTITY::IS_ENTITY_DEAD(*iParam0, false))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		if (__LIB_0__::func_703(iParam2, 1))
		{
			ENTITY::FREEZE_ENTITY_POSITION(*uParam1, true);
		}
		if (!ENTITY::IS_ENTITY_DEAD(*uParam1, false))
		{
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(*uParam1, ENTITY::GET_ENTITY_COORDS(*iParam0, true), false, false, true);
			ENTITY::SET_ENTITY_ROTATION(*uParam1, ENTITY::GET_ENTITY_ROTATION(*iParam0, 2), 2, true);
		}
		if (__LIB_0__::func_703(iParam2, 2))
		{
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*uParam1, 5f);
		}
		if (__LIB_0__::func_703(iParam2, 4))
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_12) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_12, false))
			{
				VEHICLE::ATTACH_VEHICLE_TO_TRAILER(*uParam1, uParam1->f_12, 1f);
			}
		}
		return 1;
	}
	else if (__LIB_17__::func_833(uParam1, *iParam0, 10f, 20f, 15f, ENTITY::GET_ENTITY_HEADING(*iParam0), 0, 0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
		{
			Var0.f_9 = 49;
			Var0.f_59 = 2;
			Var0.f_78 = -1;
			Var0.f_79 = -1;
			Var0.f_96 = -1;
			Var0.f_97 = 1;
			Var0.f_99 = 132;
			Var0.f_100 = -1;
			__LIB_9__::func_494(*iParam0, &Var0);
			__LIB_16__::func_190(*uParam1, &Var0, 1, 1, 0);
			__LIB_1__::func_495(*iParam0, uParam1);
			ENTITY::SET_ENTITY_COLLISION(*uParam1, false, false);
			ENTITY::SET_ENTITY_VISIBLE(*uParam1, false, false);
			ENTITY::SET_ENTITY_INVINCIBLE(*uParam1, true);
			VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(*uParam1, false);
			iVar1 = ENTITY::GET_ENTITY_MODEL(*uParam1);
			if (((((!VEHICLE::IS_THIS_MODEL_A_BIKE(iVar1) && !VEHICLE::IS_THIS_MODEL_A_BICYCLE(iVar1)) && !VEHICLE::IS_THIS_MODEL_A_BOAT(iVar1)) && !__LIB_0__::func_867(iVar1)) && !iVar1 == joaat("oppressor")) && !iVar1 == joaat("kosatka"))
			{
				VEHICLE::SET_VEHICLE_CAN_BREAK(*uParam1, false);
			}
			VEHICLE::GET_VEHICLE_LIGHTS_STATE(*iParam0, &iVar2, &iVar3);
			if (iVar2 != 0)
			{
				VEHICLE::SET_VEHICLE_LIGHTS(*uParam1, 2);
			}
			if (iVar3 != 0)
			{
				VEHICLE::SET_VEHICLE_FULLBEAM(*uParam1, true);
			}
			VEHICLE::SET_VEHICLE_ENGINE_ON(*uParam1, true, true, false);
			if (!__LIB_0__::func_703(iParam2, 32))
			{
				func_282(iParam0, uParam1, &(uParam1->f_1), __LIB_0__::func_703(iParam2, 16), __LIB_0__::func_703(iParam2, 128), __LIB_0__::func_703(iParam2, 64), !__LIB_0__::func_703(iParam2, 256), 0, 1);
			}
			if (__LIB_0__::func_703(iParam2, 4))
			{
				__LIB_31__::func_175(iParam0, &(uParam1->f_12));
				if (__LIB_0__::func_703(iParam2, 8))
				{
					iVar4 = 0;
					while (iVar4 <= 7)
					{
						if (VEHICLE::IS_VEHICLE_TYRE_BURST(*uParam1, 0, false))
						{
							VEHICLE::SET_VEHICLE_TYRE_FIXED(*uParam1, iVar4);
						}
						iVar4++;
					}
				}
			}
			if (__LIB_0__::func_703(iParam2, 8))
			{
				iVar5 = 0;
				while (iVar5 <= 7)
				{
					if (VEHICLE::IS_VEHICLE_TYRE_BURST(*uParam1, 0, false))
					{
						VEHICLE::SET_VEHICLE_TYRE_FIXED(*uParam1, iVar5);
					}
					iVar5++;
				}
			}
		}
	}
	return 0;
}

void func_533(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0x34185
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	int iVar4;
	if (__LIB_5__::func_423(iParam0))
	{
		if (*uParam3 != 1 && *uParam3 != 2)
		{
			HUD::SET_BLIP_ROUTE(*uParam1, true);
			HUD::SET_BLIP_SCALE(*uParam1, 1.4f);
			HUD::SET_BLIP_FLASH_TIMER(*uParam1, 7000);
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, "BLIP_826" /* GXT: Agency */);
			*uParam3 = 1;
			return;
		}
		else if (*uParam3 == 1)
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				HUD::SET_BLIP_ROUTE(*uParam1, false);
				*uParam3 = 2;
			}
		}
		else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
		{
			HUD::SET_BLIP_ROUTE(*uParam1, true);
			*uParam3 = 1;
		}
	}
	else
	{
		if (*uParam3 == 1)
		{
			HUD::SET_BLIP_ROUTE(*uParam1, false);
			HUD::SET_BLIP_SCALE(*uParam1, 1f);
			*uParam3 = 0;
		}
		bVar0 = false;
		if (!__LIB_3__::func_649(PLAYER::PLAYER_ID(), __LIB_3__::func_650(iParam0)) && __LIB_3__::func_649(__LIB_0__::func_797(), __LIB_3__::func_650(iParam0)))
		{
			iVar2 = 0;
			while (iVar2 < 32)
			{
				iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
				if (__LIB_1__::func_693(iVar1, 1, 1) && iVar1 != PLAYER::PLAYER_ID())
				{
					if (__LIB_3__::func_649(iVar1, __LIB_3__::func_650(iParam0)))
					{
						Var3 = { __LIB_1__::func_696(iVar1) };
						if (__LIB_0__::func_800(Var3))
						{
							if (NETWORK::NETWORK_IS_FRIEND(&Var3))
							{
								iVar4 = joaat("FHQ_FRIEND");
								if (iVar4 != *uParam4)
								{
									*uParam4 = iVar4;
									HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, "FHQ_FRIEND" /* GXT: Friend's Agency */);
								}
								bVar0 = true;
							}
							else
							{
								iVar2++;
							}
							if (!bVar0 && *uParam4 == joaat("FHQ_FRIEND"))
							{
								*uParam4 = joaat("BLIP_826");
								HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, "BLIP_826" /* GXT: Agency */);
							}
						}
Vector3 func_534(int iParam0)//Position - 0x34308
{
	switch (iParam0)
	{
		case 155:
			return 388.3036f, -74.6683f, 67.1805f;
			break;
		case 156:
			return -1016.5347f, -413.186f, 38.6161f;
			break;
		case 157:
			return -589.4908f, -707.4646f, 35.2844f;
			break;
		case 158:
			return -1039.0834f, -756.4792f, 18.8395f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_585(int iParam0, int iParam1)//Position - 0x3B1B1
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	struct<3> Var3;
	iVar2 = __LIB_3__::func_616();
	Var3 = { __LIB_3__::func_681(iParam0, iVar2) };
	if (__LIB_6__::func_934(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_596(iParam0, Var3, &bVar0, &bVar1, 1, 0);
		if (bVar1)
		{
			__LIB_5__::func_189(iParam1, 1, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_5__::func_189(iParam1, 2, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 2, 0);
		}
		if (!Global_2667225.f_2680 && !BitTest(Global_1946250, 27))
		{
			if ((((iVar2 == 0 || iVar2 == 1) || iVar2 == 4) || iVar2 == 5) || iVar2 == 6)
			{
				__LIB_3__::func_664(0);
			}
			else
			{
				__LIB_3__::func_664(1);
			}
		}
		if (__LIB_3__::func_661(0, iParam1))
		{
			__LIB_7__::func_49(iParam0, -1);
		}
		else if (__LIB_3__::func_661(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var3, 1, 0, 0, 0, -1, -1, __LIB_0__::func_509());
			}
			__LIB_7__::func_830(iParam0, __LIB_0__::func_509());
		}
		else if (__LIB_3__::func_661(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var3, 0, 0, 1, 0, -1, -1, __LIB_0__::func_509());
			}
			__LIB_7__::func_830(iParam0, __LIB_0__::func_509());
		}
	}
	else
	{
		if (__LIB_2__::func_159(0))
		{
			if (iVar2 == 3 && __LIB_3__::func_494(__LIB_0__::func_797()) == iParam0)
			{
				__LIB_3__::func_664(1);
			}
		}
		__LIB_5__::func_189(iParam1, 1, 0);
		__LIB_5__::func_189(iParam1, 2, 0);
	}
}

void func_596(int iParam0, struct<3> Param1, int iParam2, int iParam3, bool bParam4, bool bParam5)//Position - 0x3B80F
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	struct<13> Var7;
	bool bVar8;
	iVar0 = -1;
	if (__LIB_1__::func_526())
	{
		iVar0 = __LIB_3__::func_680();
	}
	fVar1 = SYSTEM::POW(SYSTEM::TO_FLOAT(__LIB_3__::func_679(iParam0)), 2f);
	iVar2 = PLAYER::PLAYER_ID();
	iVar3 = Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7;
	iVar4 = 0;
	while (iVar4 < 32)
	{
		iVar5 = iVar4;
		if (iVar2 == iVar5 || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar5))
		{
		}
		else
		{
			iVar6 = PLAYER::GET_PLAYER_PED(iVar5);
			if (ENTITY::IS_ENTITY_DEAD(iVar6, false))
			{
			}
			else if (bParam5)
			{
				if (iVar3 != Global_2689235[iVar5 /*453*/].f_318.f_7)
				{
				}
				else
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iVar6, true), Param1) <= fVar1)
					{
						Var7 = { __LIB_1__::func_696(iVar5) };
						bVar8 = false;
						if (__LIB_3__::func_678(iVar5) > -1)
						{
							if (iParam0 == 123 || iParam0 == 124)
							{
								bVar8 = true;
							}
						}
						if (bParam4 && !*iParam2)
						{
							if ((iVar0 != -1 && iVar0 == __LIB_3__::func_106(&Var7)) || NETWORK::NETWORK_IS_FRIEND(&Var7))
							{
								if (((((((((!__LIB_1__::func_907(iVar5, 1) && !__LIB_5__::func_424(iVar5)) && !PED::IS_PED_IN_ANY_VEHICLE(iVar6, true)) && !__LIB_1__::func_101(iVar6)) && !__LIB_4__::func_972(iVar5)) && !__LIB_4__::func_976(iVar5, 1)) && !((__LIB_2__::func_72(iVar5, 1) && !__LIB_3__::func_360(iVar2, iVar5)) && __LIB_0__::func_509() != 0)) && !func_597(iVar5)) && !__LIB_3__::func_171(iVar5)) && !bVar8)
								{
									*iParam2 = 1;
								}
							}
						}
						if ((((((((((!*iParam3 && __LIB_3__::func_360(PLAYER::PLAYER_ID(), iVar5)) && !__LIB_5__::func_424(iVar5)) && !PED::IS_PED_IN_ANY_VEHICLE(iVar6, true)) && !__LIB_1__::func_101(iVar6)) && !__LIB_4__::func_972(iVar5)) && !__LIB_4__::func_976(iVar5, 1)) && __LIB_1__::func_744(PLAYER::PLAYER_ID())) && !func_597(iVar5)) && !__LIB_3__::func_171(iVar5)) && !bVar8)
						{
							*iParam3 = 1;
						}
					}
					if (*iParam3 && *iParam2)
					{
					}
					else
					{
						iVar4++;
					}
				}
int func_597(bool bParam0)//Position - 0x3BA4A
{
	int iVar0;
	int iVar1;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (bParam0 == PLAYER::PLAYER_ID())
	{
		return Global_2788198;
	}
	else
	{
		iVar0 = PLAYER::GET_PLAYER_PED(bParam0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
			if (iVar1 == joaat("MP_M_Freemode_01") || iVar1 == joaat("MP_F_Freemode_01"))
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

void func_865(var uParam0, int iParam1)//Position - 0x4F245
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 380636/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 380627/*__LIB_0__::func_162*/;
			break;
		case 1:
			uParam0->f_30 = 380548/*__LIB_5__::func_466*/;
			break;
		case 2:
			uParam0->f_31 = 379912/*__LIB_5__::func_715*/;
			break;
		case 3:
			uParam0->f_34 = 379646/*__LIB_3__::func_797*/;
			break;
		case 4:
			uParam0->f_12 = 379634/*__LIB_3__::func_796*/;
			break;
		case 6:
			uParam0->f_32 = 379535/*__LIB_4__::func_918*/;
			break;
		case 37:
			uParam0->f_18 = 379405/*__LIB_3__::func_795*/;
			break;
		case 38:
			uParam0->f_9 = 379358/*__LIB_6__::func_866*/;
			break;
		case 39:
			uParam0->f_11 = 379323/*__LIB_7__::func_734*/;
			break;
		case 41:
			uParam0->f_20 = 379204/*__LIB_9__::func_300*/;
			break;
		case 42:
			uParam0->f_10 = 379176/*__LIB_6__::func_865*/;
			break;
		case 11:
			uParam0->f_11 = 379166/*__LIB_3__::func_793*/;
			break;
		case 12:
			uParam0->f_33 = 377015/*__LIB_5__::func_856*/;
			break;
		case 14:
			uParam0->f_11 = 377006/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 374439/*__LIB_5__::func_465*/;
			break;
		case 8:
			uParam0->f_37 = 374431/*__LIB_0__::func_467*/;
			break;
		case 7:
			uParam0->f_36 = 374422/*__LIB_0__::func_114*/;
			break;
		case 79:
			*uParam0 = 374413/*__LIB_0__::func_114*/;
			break;
		case 13:
			uParam0->f_2 = 374351/*__LIB_9__::func_783*/;
			break;
		case 15:
			uParam0->f_2 = 374270/*__LIB_9__::func_784*/;
			break;
		case 16:
			uParam0->f_5 = 373917/*__LIB_6__::func_940*/;
			break;
		case 108:
			uParam0->f_55 = 369484/*__LIB_10__::func_67*/;
			break;
		case 17:
			uParam0->f_17 = 368344/*__LIB_9__::func_261*/;
			break;
		case 19:
			uParam0->f_17 = 368319/*__LIB_5__::func_953*/;
			break;
		case 20:
			uParam0->f_3 = 368310/*__LIB_0__::func_109*/;
			break;
		case 21:
			uParam0->f_3 = 368179/*__LIB_6__::func_939*/;
			break;
		case 74:
			uParam0->f_53 = 368075/*__LIB_5__::func_209*/;
			break;
		case 75:
			uParam0->f_4 = 368059/*__LIB_5__::func_464*/;
			break;
		case 22:
			uParam0->f_24 = 367909/*__LIB_5__::func_463*/;
			break;
		case 23:
			uParam0->f_26 = 367901/*__LIB_0__::func_467*/;
			break;
		case 26:
			uParam0->f_38 = 360061/*func_991*/;
			break;
		case 25:
			uParam0->f_23 = 359012/*func_987*/;
			break;
		case 27:
			uParam0->f_25 = 358798/*__LIB_5__::func_854*/;
			break;
		case 28:
			uParam0->f_24 = 358760/*__LIB_3__::func_777*/;
			break;
		case 29:
			uParam0->f_28 = 358737/*__LIB_6__::func_864*/;
			break;
		case 30:
			uParam0->f_8 = 357978/*__LIB_5__::func_714*/;
			break;
		case 31:
			uParam0->f_39 = 357950/*__LIB_3__::func_775*/;
			break;
		case 43:
			uParam0->f_8 = 357836/*__LIB_5__::func_205*/;
			break;
		case 33:
			uParam0->f_40 = 357718/*__LIB_6__::func_863*/;
			break;
		case 76:
			uParam0->f_13 = 357669/*__LIB_4__::func_917*/;
			break;
		case 34:
			uParam0->f_41 = 348831/*__LIB_5__::func_459*/;
			break;
		case 36:
			uParam0->f_58 = 348783/*__LIB_3__::func_774*/;
			break;
		case 35:
			uParam0->f_42 = 337613/*__LIB_6__::func_415*/;
			break;
		case 45:
			uParam0->f_14 = 337604/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 337595/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 337587/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 337576/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 337459/*__LIB_4__::func_916*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 336526/*__LIB_8__::func_920*/;
			break;
		case 49:
			uParam0->f_8 = 336517/*__LIB_0__::func_114*/;
			break;
		case 50:
			*uParam0 = 336348/*__LIB_6__::func_937*/;
			break;
		case 51:
			*uParam0 = 336339/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 336328/*__LIB_3__::func_766*/;
			break;
		case 53:
			uParam0->f_13 = 336305/*__LIB_3__::func_765*/;
			break;
		case 54:
			uParam0->f_45 = 336257/*__LIB_3__::func_764*/;
			break;
		case 56:
			uParam0->f_46 = 336239/*__LIB_3__::func_763*/;
			break;
		case 57:
			uParam0->f_11 = 336197/*__LIB_5__::func_456*/;
			break;
		case 58:
			uParam0->f_13 = 336155/*__LIB_3__::func_761*/;
			break;
		case 59:
			*uParam0 = 336026/*__LIB_7__::func_779*/;
			break;
		case 60:
			*uParam0 = 336017/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 336006/*__LIB_3__::func_760*/;
			break;
		case 62:
			uParam0->f_13 = 335983/*__LIB_3__::func_759*/;
			break;
		case 63:
			uParam0->f_11 = 335974/*__LIB_1__::func_804*/;
			break;
		case 55:
			uParam0->f_45 = 335933/*__LIB_3__::func_758*/;
			break;
		case 64:
			uParam0->f_47 = 335925/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 335917/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 335646/*__LIB_5__::func_455*/;
			break;
		case 67:
			uParam0->f_21 = 335576/*__LIB_3__::func_757*/;
			break;
		case 68:
			*uParam0 = 334904/*__LIB_5__::func_454*/;
			break;
		case 69:
			*uParam0 = 334895/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 334883/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 334663/*__LIB_3__::func_756*/;
			break;
		case 107:
			uParam0->f_50 = 334651/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 334115/*__LIB_7__::func_732*/;
			break;
		case 84:
			uParam0->f_1 = 334000/*__LIB_5__::func_874*/;
			break;
		case 85:
			uParam0->f_1 = 333097/*func_908*/;
			break;
		case 87:
			uParam0->f_1 = 330468/*__LIB_6__::func_414*/;
			break;
		case 88:
			uParam0->f_1 = 330459/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 330451/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 330442/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 330433/*__LIB_0__::func_109*/;
			break;
		case 98:
			uParam0->f_1 = 330424/*__LIB_0__::func_109*/;
			break;
		case 100:
			uParam0->f_22 = 330416/*__LIB_0__::func_467*/;
			break;
		case 101:
			uParam0->f_22 = 330408/*__LIB_0__::func_467*/;
			break;
		case 112:
			uParam0->f_13 = 330373/*__LIB_5__::func_214*/;
			break;
		case 113:
			uParam0->f_3 = 330364/*__LIB_0__::func_114*/;
			break;
		case 114:
			uParam0->f_16 = 328426/*__LIB_5__::func_451*/;
			break;
		case 115:
			uParam0->f_3 = 328417/*__LIB_0__::func_114*/;
			break;
		case 116:
			*uParam0 = 328408/*__LIB_0__::func_114*/;
			break;
		case 117:
			uParam0->f_16 = 327187/*__LIB_3__::func_744*/;
			break;
		case 121:
			*uParam0 = 327105/*__LIB_3__::func_743*/;
			break;
		case 122:
			*uParam0 = 327088/*__LIB_3__::func_742*/;
			break;
		case 123:
			uParam0->f_19 = 327056/*__LIB_5__::func_450*/;
			break;
		case 78:
			uParam0->f_59 = 325840/*__LIB_9__::func_323*/;
			break;
		case 124:
			uParam0->f_1 = 325831/*__LIB_0__::func_109*/;
			break;
		case 125:
			uParam0->f_19 = 325823/*__LIB_0__::func_467*/;
			break;
	}
}

int func_908(int iParam0, var uParam1)//Position - 0x51529
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	var uVar6;
	var uVar7;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = __LIB_3__::func_616();
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
		{
			func_371(&iVar1, &(uParam1->f_109), 60);
			__LIB_3__::func_633(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_282(&iVar1, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 1, 0, 1))
		{
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
		}
		else
		{
			return 0;
		}
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(uParam1->f_109), &(uParam1->f_189[0 /*3*/]), &(uParam1->f_189[1 /*3*/]));
		__LIB_3__::func_752(iParam0, &Var2, &Var4, &uVar6, 1, iVar0);
		__LIB_3__::func_752(iParam0, &Var3, &Var5, &uVar7, 0, iVar0);
		__LIB_6__::func_27(&(Global_1946250.f_3638), 5000, "TD Shot", Var2, Var4, uVar6, Var3, Var5, uVar7, 0.2f, 0, 1000, 0, 0, 0);
	}
	return 1;
}

void func_987(int iParam0, int iParam1)//Position - 0x57A64
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<3> Var5;
	bVar2 = !BitTest(iParam1->f_2, 7);
	iVar3 = __LIB_3__::func_616();
	iVar4 = 0;
	Var5 = { __LIB_3__::func_780(iVar3) };
	func_596(iParam0, Var5, &bVar0, &bVar1, 1, 0);
	if (!bVar0 && !bVar1)
	{
		switch (iVar3)
		{
			case 12:
			case 13:
			case 14:
			case 15:
				__LIB_5__::func_189(iParam1, 0, 1);
				__LIB_5__::func_189(iParam1, 1, 0);
				__LIB_5__::func_189(iParam1, 2, 0);
				if (__LIB_3__::func_661(0, iParam1))
				{
					__LIB_3__::func_664(1);
				}
				break;
			default:
				__LIB_5__::func_189(iParam1, 0, !bVar2);
				__LIB_5__::func_189(iParam1, 1, 0);
				__LIB_5__::func_189(iParam1, 2, 0);
				__LIB_3__::func_664(0);
				MISC::SET_BIT(&(iParam1->f_2), 6);
				break;
		}
		return;
	}
	else if (__LIB_0__::func_109(PLAYER::PLAYER_ID(), iParam0))
	{
		__LIB_5__::func_189(iParam1, 0, 1);
		if (bVar1)
		{
			__LIB_5__::func_189(iParam1, 1, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_5__::func_189(iParam1, 2, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 2, 0);
		}
		if ((bVar1 || bVar0) && !__LIB_3__::func_779())
		{
			__LIB_6__::func_863(iParam0, -1);
		}
		if (((iVar3 == 12 || iVar3 == 13) || iVar3 == 14) || iVar3 == 15)
		{
			iVar4 = 1;
		}
		if (__LIB_3__::func_661(0, iParam1))
		{
			__LIB_6__::func_863(iParam0, -1);
			__LIB_3__::func_664(iVar4);
		}
		else if (__LIB_3__::func_661(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var5, 1, 0, 0, 0, -2, -1, iVar4);
			}
			__LIB_7__::func_781(iVar4, 1);
		}
		else if (__LIB_3__::func_661(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var5, 0, 0, 1, 0, -2, -1, iVar4);
			}
			__LIB_7__::func_781(iVar4, 1);
		}
	}
	else
	{
		__LIB_3__::func_664(iVar4);
		__LIB_5__::func_189(iParam1, 1, 0);
		__LIB_5__::func_189(iParam1, 2, 0);
	}
}

void func_991(var uParam0, var uParam1)//Position - 0x57E7D
{
	int iVar0;
	iVar0 = __LIB_3__::func_785();
	if (!__LIB_5__::func_797() && iVar0 != 1)
	{
		__LIB_3__::func_784(1);
	}
	iVar0 = __LIB_3__::func_785();
	switch (iVar0)
	{
		case 0:
			__LIB_8__::func_959(uParam0, uParam1);
			break;
		case 1:
			func_992(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_992(var uParam0, var uParam1)//Position - 0x57ED3
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4[3];
	var uVar5[3];
	char* sVar6;
	int iVar7;
	int iVar8;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	uParam1->f_2 = 0;
	bVar2 = __LIB_5__::func_208();
	func_596(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &bVar0, &bVar1, 1, 0);
	if (!bVar0 && !bVar1)
	{
		if (bVar2 || (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23150.f_79[0 /*6*/])) || !MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_79[0 /*6*/]), __LIB_5__::func_207(0))))
		{
			uParam1->f_6 = 1;
			if (__LIB_3__::func_785() == 1)
			{
				uParam1->f_8 = 1;
				uParam1->f_11 = 10;
				uParam1->f_1 = 1;
				uParam1->f_10 = 1;
				__LIB_5__::func_462();
				if (bVar2)
				{
					__LIB_3__::func_664(1);
				}
				else if (BitTest(Global_1946250.f_8, 22))
				{
					__LIB_5__::func_202(PLAYER::PLAYER_ID());
				}
			}
			return;
		}
	}
	sVar6 = __LIB_3__::func_770();
	iVar8 = 0;
	while (iVar8 < 3)
	{
		uVar5[iVar7] = __LIB_5__::func_207(iVar8);
		if (__LIB_3__::func_782(iVar8, bVar0, bVar1))
		{
			iVar4[iVar7] = iVar8;
			if (!bVar3 && !MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_79[iVar7 /*6*/]), uVar5[iVar7]))
			{
				bVar3 = true;
			}
			iVar7++;
		}
		else if (!bVar3)
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_79[iVar7 /*6*/]), uVar5[iVar7]))
			{
				bVar3 = true;
			}
		}
		iVar8++;
	}
	if (uParam0->f_5 || bVar3)
	{
		__LIB_1__::func_602(0, 1);
		__LIB_1__::func_767("CAR_MET_EXT_T" /* GXT: LS Car Meet */);
		__LIB_3__::func_566(1, sVar6, sVar6);
		__LIB_5__::func_270();
		iVar8 = 0;
		while (iVar8 < iVar7)
		{
			__LIB_8__::func_233(iVar8, uVar5[iVar8], 0, 1, 0, 0, 0);
			iVar8++;
		}
		__LIB_5__::func_460(0, 1, 1);
	}
	else if (uParam0->f_2)
	{
		uParam1->f_6 = 1;
		if (__LIB_3__::func_785() == 1)
		{
			uParam1->f_8 = 1;
			uParam1->f_11 = 10;
			uParam1->f_1 = 1;
			uParam1->f_10 = 1;
			__LIB_5__::func_462();
			if (bVar2)
			{
				__LIB_3__::func_664(1);
			}
			else if (BitTest(Global_1946250.f_8, 22))
			{
				__LIB_5__::func_202(PLAYER::PLAYER_ID());
			}
			if (iVar4[uParam0->f_4] != 0)
			{
				__LIB_8__::func_958(iVar4[uParam0->f_4], 154);
			}
		}
	}
	else if (uParam0->f_3)
	{
		uParam1->f_4 = !__LIB_5__::func_797();
		__LIB_5__::func_462();
		MISC::CLEAR_BIT(&(Global_1946250.f_8), 22);
	}
}

void func_1088(var uParam0, int iParam1)//Position - 0x5CEE5
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 421058/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 421044/*__LIB_5__::func_475*/;
			break;
		case 1:
			uParam0->f_30 = 420953/*__LIB_5__::func_474*/;
			break;
		case 2:
			uParam0->f_31 = 420734/*__LIB_5__::func_473*/;
			break;
		case 3:
			uParam0->f_34 = 420577/*__LIB_3__::func_841*/;
			break;
		case 4:
			uParam0->f_12 = 420565/*__LIB_3__::func_840*/;
			break;
		case 5:
			uParam0->f_11 = 420555/*__LIB_3__::func_839*/;
			break;
		case 37:
			uParam0->f_18 = 420441/*__LIB_3__::func_838*/;
			break;
		case 38:
			uParam0->f_9 = 420394/*__LIB_6__::func_381*/;
			break;
		case 42:
			uParam0->f_10 = 420366/*__LIB_6__::func_380*/;
			break;
		case 6:
			uParam0->f_32 = 420278/*__LIB_3__::func_837*/;
			break;
		case 11:
			uParam0->f_11 = 420269/*__LIB_3__::func_603*/;
			break;
		case 12:
			uParam0->f_33 = 418524/*__LIB_9__::func_499*/;
			break;
		case 14:
			uParam0->f_11 = 418515/*__LIB_0__::func_114*/;
			break;
		case 109:
			uParam0->f_56 = 414482/*func_1237*/;
			break;
		case 8:
			uParam0->f_37 = 414005/*__LIB_3__::func_835*/;
			break;
		case 7:
			uParam0->f_36 = 413911/*__LIB_3__::func_834*/;
			break;
		case 79:
			*uParam0 = 413902/*__LIB_0__::func_114*/;
			break;
		case 13:
			uParam0->f_2 = 413840/*__LIB_9__::func_783*/;
			break;
		case 15:
			uParam0->f_2 = 413759/*__LIB_9__::func_785*/;
			break;
		case 16:
			uParam0->f_5 = 412861/*__LIB_9__::func_264*/;
			break;
		case 108:
			uParam0->f_55 = 409582/*__LIB_10__::func_68*/;
			break;
		case 17:
			uParam0->f_17 = 408340/*__LIB_9__::func_263*/;
			break;
		case 19:
			uParam0->f_17 = 408315/*__LIB_5__::func_954*/;
			break;
		case 20:
			uParam0->f_3 = 408101/*__LIB_6__::func_944*/;
			break;
		case 21:
			uParam0->f_3 = 408037/*__LIB_6__::func_867*/;
			break;
		case 74:
			uParam0->f_53 = 407933/*__LIB_5__::func_209*/;
			break;
		case 75:
			uParam0->f_4 = 407917/*__LIB_5__::func_472*/;
			break;
		case 22:
			uParam0->f_24 = 407815/*__LIB_5__::func_471*/;
			break;
		case 23:
			uParam0->f_26 = 407807/*__LIB_0__::func_467*/;
			break;
		case 26:
			uParam0->f_38 = 403795/*func_1187*/;
			break;
		case 25:
			uParam0->f_23 = 403345/*func_1184*/;
			break;
		case 27:
			uParam0->f_25 = 403337/*__LIB_0__::func_467*/;
			break;
		case 28:
			uParam0->f_24 = 403329/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 402692/*__LIB_6__::func_942*/;
			break;
		case 31:
			uParam0->f_39 = 402562/*__LIB_5__::func_217*/;
			break;
		case 33:
			uParam0->f_40 = 401688/*__LIB_7__::func_8*/;
			break;
		case 32:
			*uParam0 = 401485/*__LIB_7__::func_7*/;
			break;
		case 76:
			uParam0->f_13 = 401332/*__LIB_3__::func_821*/;
			break;
		case 34:
			uParam0->f_41 = 399720/*__LIB_5__::func_469*/;
			break;
		case 36:
			uParam0->f_58 = 399675/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 390637/*__LIB_5__::func_468*/;
			break;
		case 45:
			uParam0->f_14 = 390628/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 390619/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 390611/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 390588/*__LIB_3__::func_815*/;
			break;
		case 47:
			uParam0->f_43 = 390539/*__LIB_3__::func_814*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 390402/*__LIB_5__::func_859*/;
			break;
		case 49:
			uParam0->f_8 = 390384/*__LIB_3__::func_658*/;
			break;
		case 50:
			*uParam0 = 389552/*__LIB_7__::func_835*/;
			break;
		case 51:
			*uParam0 = 389450/*__LIB_5__::func_716*/;
			break;
		case 52:
			uParam0->f_15 = 389439/*__LIB_3__::func_811*/;
			break;
		case 53:
			uParam0->f_13 = 389286/*func_1139*/;
			break;
		case 54:
			uParam0->f_45 = 389053/*func_1138*/;
			break;
		case 56:
			uParam0->f_46 = 389044/*__LIB_3__::func_729*/;
			break;
		case 57:
			uParam0->f_11 = 388631/*__LIB_7__::func_6*/;
			break;
		case 58:
			uParam0->f_13 = 388478/*__LIB_3__::func_808*/;
			break;
		case 59:
			*uParam0 = 388469/*__LIB_0__::func_114*/;
			break;
		case 60:
			*uParam0 = 388460/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 388449/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 388438/*__LIB_3__::func_554*/;
			break;
		case 63:
			uParam0->f_11 = 388429/*__LIB_1__::func_804*/;
			break;
		case 64:
			uParam0->f_47 = 388421/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 387365/*__LIB_7__::func_51*/;
			break;
		case 66:
			uParam0->f_21 = 387145/*__LIB_3__::func_807*/;
			break;
		case 67:
			uParam0->f_21 = 387070/*__LIB_5__::func_216*/;
			break;
		case 68:
			*uParam0 = 386381/*__LIB_5__::func_215*/;
			break;
		case 69:
			*uParam0 = 386372/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 386360/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 386268/*__LIB_3__::func_806*/;
			break;
		case 107:
			uParam0->f_50 = 386256/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 385889/*__LIB_5__::func_858*/;
			break;
		case 84:
			uParam0->f_1 = 385880/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 385088/*func_1112*/;
			break;
		case 87:
			uParam0->f_1 = 383710/*__LIB_6__::func_416*/;
			break;
		case 88:
			uParam0->f_1 = 383701/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 383693/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 383684/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 383675/*__LIB_0__::func_109*/;
			break;
		case 98:
			uParam0->f_1 = 383666/*__LIB_0__::func_109*/;
			break;
		case 100:
			uParam0->f_22 = 383658/*__LIB_0__::func_467*/;
			break;
		case 101:
			uParam0->f_22 = 383650/*__LIB_0__::func_467*/;
			break;
		case 112:
			uParam0->f_13 = 383638/*__LIB_5__::func_214*/;
			break;
		case 113:
			uParam0->f_3 = 383629/*__LIB_0__::func_114*/;
			break;
		case 114:
			uParam0->f_16 = 328426/*__LIB_5__::func_451*/;
			break;
		case 115:
			uParam0->f_3 = 383620/*__LIB_0__::func_114*/;
			break;
		case 116:
			*uParam0 = 383611/*__LIB_0__::func_114*/;
			break;
		case 117:
			uParam0->f_16 = 382391/*__LIB_3__::func_800*/;
			break;
		case 78:
			uParam0->f_59 = 382219/*__LIB_7__::func_783*/;
			break;
		case 124:
			uParam0->f_1 = 382210/*__LIB_0__::func_109*/;
			break;
		case 125:
			uParam0->f_19 = 382202/*__LIB_0__::func_467*/;
			break;
	}
}

int func_1112(int iParam0, var uParam1)//Position - 0x5E040
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	var uVar5;
	var uVar6;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
		{
			func_371(&iVar0, &(uParam1->f_109), 60);
			__LIB_3__::func_633(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_282(&iVar0, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 1, 0, 1))
		{
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
		}
		else
		{
			return 0;
		}
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(uParam1->f_109), &(uParam1->f_189[0 /*3*/]), &(uParam1->f_189[1 /*3*/]));
		__LIB_3__::func_805(iParam0, &Var1, &Var3, &uVar5, 1);
		__LIB_3__::func_805(iParam0, &Var2, &Var4, &uVar6, 0);
		__LIB_6__::func_27(&(Global_1946250.f_3638), 5000, "TD Shot", Var1, Var3, uVar5, Var2, Var4, uVar6, 0.2f, 0, 1000, 0, 0, 0);
	}
	return 1;
}

void func_1138(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0x5EFBD
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	int iVar4;
	bVar0 = false;
	if (!__LIB_3__::func_809(PLAYER::PLAYER_ID(), __LIB_3__::func_810(iParam0)) && !__LIB_3__::func_809(__LIB_0__::func_797(), __LIB_3__::func_810(iParam0)))
	{
		iVar2 = 0;
		while (iVar2 < 32)
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
			if (__LIB_1__::func_693(iVar1, 1, 1) && iVar1 != PLAYER::PLAYER_ID())
			{
				if (__LIB_3__::func_809(iVar1, __LIB_3__::func_810(iParam0)) && __LIB_1__::func_688(iVar1))
				{
					Var3 = { __LIB_1__::func_696(iVar1) };
					if (__LIB_0__::func_800(Var3))
					{
						if (NETWORK::NETWORK_IS_FRIEND(&Var3))
						{
							iVar4 = joaat("AUT_SHP_FRIEND");
							if (iVar4 != *uParam4)
							{
								*uParam4 = iVar4;
								HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, "AUT_SHP_FRIEND" /* GXT: Friend's Auto Shop */);
							}
							bVar0 = true;
						}
						else
						{
							iVar2++;
						}
						if (!bVar0 && *uParam4 == joaat("AUT_SHP_FRIEND"))
						{
							*uParam4 = joaat("AUT_SHP_EXT_T");
							HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, "AUT_SHP_EXT_T" /* GXT: Auto Shop */);
						}
					}
Vector3 func_1139(int iParam0)//Position - 0x5F0A6
{
	switch (iParam0)
	{
		case 149:
			return 759.8774f, -677.6455f, 27.8356f;
			break;
		case 150:
			return -147.1386f, -1341.7018f, 28.9145f;
			break;
		case 151:
			return -171.7504f, -33.8705f, 51.256f;
			break;
		case 152:
			return 233.9541f, -1873.8497f, 25.5283f;
			break;
		case 153:
			return 489.2497f, -894.8347f, 24.7408f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_1184(int iParam0, int iParam1)//Position - 0x62791
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	Var2 = { __LIB_3__::func_830(iParam0) };
	if (__LIB_6__::func_944(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_596(iParam0, Var2, &bVar0, &bVar1, 1, 0);
		if (bVar1)
		{
			__LIB_5__::func_189(iParam1, 1, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_5__::func_189(iParam1, 2, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 2, 0);
		}
		if (__LIB_3__::func_661(0, iParam1))
		{
			__LIB_7__::func_8(iParam0, -1);
		}
		else if (__LIB_3__::func_661(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var2, 1, 0, 0, 0, -1, -1, -1);
			}
			__LIB_7__::func_784(iParam0);
		}
		else if (__LIB_3__::func_661(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var2, 0, 0, 1, 0, -1, -1, -1);
			}
			__LIB_7__::func_784(iParam0);
		}
	}
	else
	{
		__LIB_5__::func_189(iParam1, 1, 0);
		__LIB_5__::func_189(iParam1, 2, 0);
	}
}

void func_1187(var uParam0, var uParam1)//Position - 0x62953
{
	if (__LIB_3__::func_616() == 2 || __LIB_3__::func_616() == 1)
	{
		func_1190(uParam0, uParam1);
	}
	else if (__LIB_2__::func_72(PLAYER::PLAYER_ID(), 0) && __LIB_3__::func_809(__LIB_2__::func_39(PLAYER::PLAYER_ID()), __LIB_3__::func_810(*uParam0)))
	{
		__LIB_5__::func_218(uParam0, uParam1);
	}
	else
	{
		__LIB_3__::func_831(uParam1);
	}
}

void func_1190(var uParam0, var uParam1)//Position - 0x62A32
{
	int iVar0;
	iVar0 = __LIB_3__::func_785();
	switch (iVar0)
	{
		case 0:
			__LIB_9__::func_262(uParam0, uParam1);
			break;
		case 1:
			func_1204(uParam0, uParam1);
			break;
		case 2:
			__LIB_16__::func_187(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_1204(var uParam0, var uParam1)//Position - 0x63630
{
	var uVar0;
	var uVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_596(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &uVar0, &uVar1, 1, 0);
	bVar2 = (uVar0 || uVar1);
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_10 = PLAYER::PLAYER_ID();
		bVar2 = false;
	}
	if (!bVar2)
	{
		uParam1->f_8 = 1;
		uParam1->f_6 = 1;
		uParam1->f_1 = 0;
		uParam1->f_9 = 1;
		*uParam1 = 1;
		uParam1->f_11 = 10;
		MISC::SET_BIT(&(Global_1946250.f_3), 9);
		__LIB_5__::func_462();
		return;
	}
	if (uParam0->f_3 && !uParam0->f_5)
	{
		__LIB_5__::func_462();
		if (__LIB_8__::func_922(*uParam0))
		{
			*uParam1 = 1;
		}
		else
		{
			uParam1->f_4 = 1;
		}
	}
	else
	{
		uParam1->f_2 = 1;
		if (uParam0->f_5)
		{
			uParam1->f_3 = 1;
			__LIB_1__::func_767("AUTOS_PROP_ET" /* GXT: AUTO SHOP */);
		}
		else if (uParam0->f_2)
		{
			uParam1->f_5 = 1;
			uParam1->f_1 = 0;
			MISC::SET_BIT(&(Global_1946250.f_3), 9);
			__LIB_7__::func_8(*uParam0, -1);
			__LIB_5__::func_462();
		}
	}
}

void func_1237(int iParam0, var uParam1, int iParam2)//Position - 0x65312
{
	var uVar0;
	var uVar1;
	bool bVar2;
	__LIB_3__::func_836(iParam0, &(uParam1->f_22.f_59), &(uParam1->f_22.f_62), &(uParam1->f_22.f_65), &(uParam1->f_22.f_66), 0);
	switch (iParam0)
	{
		case 149:
			switch (iParam2)
			{
				case 0:
				case 2:
					if (__LIB_5__::func_719(iParam0))
					{
						uParam1->f_22.f_13 = { 759.2274f, -676.1144f, 28.4832f };
						uParam1->f_22.f_16 = { 1.6526f, -0.0281f, 163.8247f };
						uParam1->f_22.f_20 = { 759.1586f, -676.3341f, 28.4767f };
						uParam1->f_22.f_23 = { -1.2492f, -0.0281f, 162.718f };
						uParam1->f_22.f_28 = { 758.865f, -677.805f, 27.851f };
						uParam1->f_22.f_31 = { 0f, 0f, -169.56f };
						uParam1->f_22.f_69[0] = "";
						uParam1->f_22.f_69[1] = "";
						uParam1->f_22.f_72[0] = 0.251f;
						uParam1->f_22.f_72[1] = 0.35f;
						uParam1->f_22.f_75 = "GTAO_SCRIPT_DOORS_SOUNDS";
						uParam1->f_22.f_80 = "GTAO_Script_Doors_Faded_Screen_Sounds";
						uParam1->f_22.f_79 = "Garage_Door_Close";
						uParam1->f_22.f_88 = "GTAO_Script_Doors_Faded_Screen_Sounds";
						uParam1->f_22.f_87 = "Garage_Door_Close";
						uParam1->f_22.f_4 = "";
						uParam1->f_22.f_6 = "";
						uParam1->f_22.f_19 = 35.9236f;
						uParam1->f_22.f_40 = 0.1f;
						uParam1->f_22.f_26 = 35.9236f;
						uParam1->f_22.f_3 = "anim@apt_trans@garage";
						uParam1->f_22.f_5 = "gar_open_1_left";
						uParam1->f_22.f_34 = 0.1f;
						uParam1->f_22.f_35 = 0.45f;
						uParam1->f_22.f_37 = 2000;
					}
					else
					{
						uParam1->f_22.f_13 = { 762.6814f, -670.9703f, 29.2607f };
						uParam1->f_22.f_16 = { -2.2932f, 0f, 155.9849f };
						uParam1->f_22.f_19 = 49.6936f;
						uParam1->f_22.f_20 = { 761.751f, -671.6803f, 29.2137f };
						uParam1->f_22.f_23 = { -2.2932f, 0f, 142.145f };
						uParam1->f_22.f_26 = 46.912f;
						uParam1->f_22.f_3 = "anim@apt_trans@buzzer";
						uParam1->f_22.f_28 = { 758.817f, -675.19f, 27.859f };
						uParam1->f_22.f_31 = { 0f, 0f, 86.76f };
						uParam1->f_22.f_5 = "buzz_short";
						uParam1->f_22.f_34 = 0.2f;
						uParam1->f_22.f_35 = 0.8f;
						uParam1->f_22.f_69[0] = "DOOR_BUZZ_ONESHOT_MASTER";
						uParam1->f_22.f_72[0] = 0.353f;
						uParam1->f_22.f_75 = "GTAO_APT_DOOR_DOWNSTAIRS_GLASS_SOUNDS";
						uParam1->f_22.f_80 = "";
						uParam1->f_22.f_79 = "";
						uParam1->f_22.f_88 = "";
						uParam1->f_22.f_87 = "";
						if (__LIB_0__::func_338(PLAYER::PLAYER_ID()))
						{
							uParam1->f_22.f_4 = "amb@world_human_hang_out_street@female_arms_crossed@enter";
							uParam1->f_22.f_6 = "enter";
						}
						else
						{
							uParam1->f_22.f_4 = "amb@world_human_hang_out_street@male_c@enter";
							uParam1->f_22.f_6 = "enter";
						}
					}
					break;
			}
			break;
		case 150:
			switch (iParam2)
			{
				case 0:
				case 2:
					if (__LIB_5__::func_719(iParam0))
					{
						uParam1->f_22.f_13 = { -148.8068f, -1342.0701f, 30.7246f };
						uParam1->f_22.f_16 = { -34.2644f, -0.0028f, -60.8442f };
						uParam1->f_22.f_20 = { -148.5539f, -1341.93f, 30.5286f };
						uParam1->f_22.f_23 = { -29.8713f, -0.0028f, -66.758f };
						uParam1->f_22.f_28 = { -147.294f, -1341.401f, 29.079f };
						uParam1->f_22.f_31 = { 0f, 0f, 90f };
						uParam1->f_22.f_69[0] = "";
						uParam1->f_22.f_69[1] = "";
						uParam1->f_22.f_72[0] = 0.251f;
						uParam1->f_22.f_72[1] = 0.35f;
						uParam1->f_22.f_75 = "GTAO_SCRIPT_DOORS_SOUNDS";
						uParam1->f_22.f_80 = "GTAO_Script_Doors_Faded_Screen_Sounds";
						uParam1->f_22.f_79 = "Garage_Door_Close";
						uParam1->f_22.f_88 = "GTAO_Script_Doors_Faded_Screen_Sounds";
						uParam1->f_22.f_87 = "Garage_Door_Close";
						uParam1->f_22.f_4 = "";
						uParam1->f_22.f_6 = "";
						uParam1->f_22.f_19 = 32.2852f;
						uParam1->f_22.f_40 = 0.1f;
						uParam1->f_22.f_26 = 32.2852f;
						uParam1->f_22.f_3 = "anim@apt_trans@garage";
						uParam1->f_22.f_5 = "gar_open_1_right";
						uParam1->f_22.f_34 = 0.1f;
						uParam1->f_22.f_35 = 0.45f;
						uParam1->f_22.f_37 = 2000;
					}
					else
					{
						uParam1->f_22.f_13 = { -141.0062f, -1343.925f, 30.1565f };
						uParam1->f_22.f_16 = { -1.2453f, 0f, 70.4482f };
						uParam1->f_22.f_19 = 49.6936f;
						uParam1->f_22.f_20 = { -141.8038f, -1342.8387f, 30.1565f };
						uParam1->f_22.f_23 = { -1.4974f, 0f, 68.1876f };
						uParam1->f_22.f_26 = 46.912f;
						uParam1->f_22.f_3 = "anim@apt_trans@buzzer";
						uParam1->f_22.f_28 = { -144.657f, -1340.95f, 29.104f };
						uParam1->f_22.f_31 = { 0f, 0f, 0f };
						uParam1->f_22.f_5 = "buzz_short";
						uParam1->f_22.f_34 = 0.2f;
						uParam1->f_22.f_35 = 0.8f;
						uParam1->f_22.f_69[0] = "DOOR_BUZZ_ONESHOT_MASTER";
						uParam1->f_22.f_72[0] = 0.353f;
						uParam1->f_22.f_75 = "GTAO_APT_DOOR_DOWNSTAIRS_GLASS_SOUNDS";
						uParam1->f_22.f_80 = "";
						uParam1->f_22.f_79 = "";
						uParam1->f_22.f_88 = "";
						uParam1->f_22.f_87 = "";
						if (__LIB_0__::func_338(PLAYER::PLAYER_ID()))
						{
							uParam1->f_22.f_4 = "amb@world_human_hang_out_street@female_arms_crossed@enter";
							uParam1->f_22.f_6 = "enter";
						}
						else
						{
							uParam1->f_22.f_4 = "amb@world_human_hang_out_street@male_c@enter";
							uParam1->f_22.f_6 = "enter";
						}
					}
					break;
			}
			break;
		case 151:
			switch (iParam2)
			{
				case 0:
				case 2:
					if (__LIB_5__::func_719(iParam0))
					{
						uParam1->f_22.f_13 = { -171.5194f, -36.1929f, 51.856f };
						uParam1->f_22.f_16 = { -3.0092f, -0.0019f, 21.9527f };
						uParam1->f_22.f_20 = { -171.757f, -35.6036f, 51.825f };
						uParam1->f_22.f_23 = { 0.3106f, -0.0019f, 21.9527f };
						uParam1->f_22.f_28 = { -172.462f, -33.763f, 51.213f };
						uParam1->f_22.f_31 = { 0f, 0f, 166.32f };
						uParam1->f_22.f_69[0] = "";
						uParam1->f_22.f_69[1] = "";
						uParam1->f_22.f_72[0] = 0.251f;
						uParam1->f_22.f_72[1] = 0.35f;
						uParam1->f_22.f_75 = "GTAO_SCRIPT_DOORS_SOUNDS";
						uParam1->f_22.f_80 = "GTAO_Script_Doors_Faded_Screen_Sounds";
						uParam1->f_22.f_79 = "Garage_Door_Close";
						uParam1->f_22.f_88 = "GTAO_Script_Doors_Faded_Screen_Sounds";
						uParam1->f_22.f_87 = "Garage_Door_Close";
						uParam1->f_22.f_4 = "";
						uParam1->f_22.f_6 = "";
						uParam1->f_22.f_19 = 27.0608f;
						uParam1->f_22.f_40 = 0.1f;
						uParam1->f_22.f_26 = 27.0608f;
						uParam1->f_22.f_3 = "anim@apt_trans@garage";
						uParam1->f_22.f_5 = "gar_open_1_right";
						uParam1->f_22.f_34 = 0.1f;
						uParam1->f_22.f_35 = 0.45f;
						uParam1->f_22.f_37 = 2000;
					}
					else
					{
						uParam1->f_22.f_13 = { -168.9393f, -35.3119f, 53.2555f };
						uParam1->f_22.f_16 = { -6.5936f, 0f, 28.147f };
						uParam1->f_22.f_19 = 49.6936f;
						uParam1->f_22.f_20 = { -169.9362f, -34.4523f, 53.1079f };
						uParam1->f_22.f_23 = { -5.7999f, 0f, 21.853f };
						uParam1->f_22.f_26 = 46.912f;
						uParam1->f_22.f_3 = "anim@apt_trans@buzzer";
						uParam1->f_22.f_28 = { -171.681f, -31.278f, 51.263f };
						uParam1->f_22.f_31 = { 0f, 0f, 66.96f };
						uParam1->f_22.f_5 = "buzz_short";
						uParam1->f_22.f_34 = 0.2f;
						uParam1->f_22.f_35 = 0.8f;
						uParam1->f_22.f_69[0] = "DOOR_BUZZ_ONESHOT_MASTER";
						uParam1->f_22.f_72[0] = 0.353f;
						uParam1->f_22.f_75 = "GTAO_APT_DOOR_DOWNSTAIRS_GLASS_SOUNDS";
						uParam1->f_22.f_80 = "";
						uParam1->f_22.f_79 = "";
						uParam1->f_22.f_88 = "";
						uParam1->f_22.f_87 = "";
						if (__LIB_0__::func_338(PLAYER::PLAYER_ID()))
						{
							uParam1->f_22.f_4 = "amb@world_human_hang_out_street@female_arms_crossed@enter";
							uParam1->f_22.f_6 = "enter";
						}
						else
						{
							uParam1->f_22.f_4 = "amb@world_human_hang_out_street@male_c@enter";
							uParam1->f_22.f_6 = "enter";
						}
					}
					break;
			}
			break;
		case 152:
			switch (iParam2)
			{
				case 0:
				case 2:
					if (__LIB_5__::func_719(iParam0))
					{
						uParam1->f_22.f_13 = { 232.6328f, -1874.2069f, 26.443f };
						uParam1->f_22.f_16 = { -21.7924f, 0.0013f, -18.5176f };
						uParam1->f_22.f_20 = { 232.7041f, -1873.9943f, 26.4045f };
						uParam1->f_22.f_23 = { -8.5978f, 0.0013f, -18.5176f };
						uParam1->f_22.f_28 = { 233.075f, -1873.188f, 25.563f };
						uParam1->f_22.f_31 = { -4.32f, 0f, 167.76f };
						uParam1->f_22.f_69[0] = "";
						uParam1->f_22.f_69[1] = "";
						uParam1->f_22.f_72[0] = 0.251f;
						uParam1->f_22.f_72[1] = 0.35f;
						uParam1->f_22.f_75 = "GTAO_SCRIPT_DOORS_SOUNDS";
						uParam1->f_22.f_80 = "GTAO_Script_Doors_Faded_Screen_Sounds";
						uParam1->f_22.f_79 = "Garage_Door_Close";
						uParam1->f_22.f_88 = "GTAO_Script_Doors_Faded_Screen_Sounds";
						uParam1->f_22.f_87 = "Garage_Door_Close";
						uParam1->f_22.f_4 = "";
						uParam1->f_22.f_6 = "";
						uParam1->f_22.f_19 = 35.3225f;
						uParam1->f_22.f_40 = 0.1f;
						uParam1->f_22.f_26 = 35.3225f;
						uParam1->f_22.f_3 = "anim@apt_trans@garage";
						uParam1->f_22.f_5 = "gar_open_1_left";
						uParam1->f_22.f_34 = 0.1f;
						uParam1->f_22.f_35 = 0.45f;
						uParam1->f_22.f_37 = 2000;
					}
					else
					{
						uParam1->f_22.f_13 = { 235.8221f, -1874.9221f, 26.8194f };
						uParam1->f_22.f_16 = { -3.3056f, 0f, 105.796f };
						uParam1->f_22.f_19 = 49.6936f;
						uParam1->f_22.f_20 = { 234.5172f, -1874.7244f, 26.7432f };
						uParam1->f_22.f_23 = { -3.3056f, 0f, 115.5265f };
						uParam1->f_22.f_26 = 46.912f;
						uParam1->f_22.f_3 = "anim@apt_trans@buzzer";
						uParam1->f_22.f_28 = { 231.176f, -1875.411f, 25.388f };
						uParam1->f_22.f_31 = { 0f, 0f, 44.28f };
						uParam1->f_22.f_5 = "buzz_short";
						uParam1->f_22.f_34 = 0.2f;
						uParam1->f_22.f_35 = 0.8f;
						uParam1->f_22.f_69[0] = "DOOR_BUZZ_ONESHOT_MASTER";
						uParam1->f_22.f_72[0] = 0.353f;
						uParam1->f_22.f_75 = "GTAO_APT_DOOR_DOWNSTAIRS_GLASS_SOUNDS";
						uParam1->f_22.f_80 = "";
						uParam1->f_22.f_79 = "";
						uParam1->f_22.f_88 = "";
						uParam1->f_22.f_87 = "";
						if (__LIB_0__::func_338(PLAYER::PLAYER_ID()))
						{
							uParam1->f_22.f_4 = "amb@world_human_hang_out_street@female_arms_crossed@enter";
							uParam1->f_22.f_6 = "enter";
						}
						else
						{
							uParam1->f_22.f_4 = "amb@world_human_hang_out_street@male_c@enter";
							uParam1->f_22.f_6 = "enter";
						}
					}
					break;
			}
			break;
		case 153:
			switch (iParam2)
			{
				case 0:
				case 2:
					if (__LIB_5__::func_719(iParam0))
					{
						uParam1->f_22.f_13 = { 488.4486f, -893.36f, 25.3835f };
						uParam1->f_22.f_16 = { -0.6473f, 0.0003f, 172.6925f };
						uParam1->f_22.f_20 = { 488.4122f, -893.6423f, 25.3794f };
						uParam1->f_22.f_23 = { 0.1603f, 0.0201f, 172.7169f };
						uParam1->f_22.f_28 = { 488.413f, -895.15f, 24.75f };
						uParam1->f_22.f_31 = { 0f, 0f, -180f };
						uParam1->f_22.f_69[0] = "";
						uParam1->f_22.f_69[1] = "";
						uParam1->f_22.f_72[0] = 0.251f;
						uParam1->f_22.f_72[1] = 0.35f;
						uParam1->f_22.f_75 = "GTAO_SCRIPT_DOORS_SOUNDS";
						uParam1->f_22.f_80 = "GTAO_Script_Doors_Faded_Screen_Sounds";
						uParam1->f_22.f_79 = "Garage_Door_Close";
						uParam1->f_22.f_88 = "GTAO_Script_Doors_Faded_Screen_Sounds";
						uParam1->f_22.f_87 = "Garage_Door_Close";
						uParam1->f_22.f_4 = "";
						uParam1->f_22.f_6 = "";
						uParam1->f_22.f_19 = 33.1011f;
						uParam1->f_22.f_40 = 0.1f;
						uParam1->f_22.f_26 = 33.1011f;
						uParam1->f_22.f_3 = "anim@apt_trans@garage";
						uParam1->f_22.f_5 = "gar_open_1_left";
						uParam1->f_22.f_34 = 0.1f;
						uParam1->f_22.f_35 = 0.45f;
						uParam1->f_22.f_37 = 2000;
					}
					else
					{
						uParam1->f_22.f_13 = { 491.9715f, -894.7998f, 26.1521f };
						uParam1->f_22.f_16 = { -3.0471f, 0f, 145.4612f };
						uParam1->f_22.f_19 = 49.6936f;
						uParam1->f_22.f_20 = { 490.8015f, -895.3118f, 26.0841f };
						uParam1->f_22.f_23 = { -1.2604f, 0f, 144.274f };
						uParam1->f_22.f_26 = 46.912f;
						uParam1->f_22.f_3 = "anim@apt_trans@buzzer";
						uParam1->f_22.f_28 = { 488.463f, -897.537f, 24.813f };
						uParam1->f_22.f_31 = { 0f, 0f, 90f };
						uParam1->f_22.f_5 = "buzz_short";
						uParam1->f_22.f_34 = 0.2f;
						uParam1->f_22.f_35 = 0.8f;
						uParam1->f_22.f_69[0] = "DOOR_BUZZ_ONESHOT_MASTER";
						uParam1->f_22.f_72[0] = 0.353f;
						uParam1->f_22.f_75 = "GTAO_APT_DOOR_DOWNSTAIRS_GLASS_SOUNDS";
						uParam1->f_22.f_80 = "";
						uParam1->f_22.f_79 = "";
						uParam1->f_22.f_88 = "";
						uParam1->f_22.f_87 = "";
						if (__LIB_0__::func_338(PLAYER::PLAYER_ID()))
						{
							uParam1->f_22.f_4 = "amb@world_human_hang_out_street@female_arms_crossed@enter";
							uParam1->f_22.f_6 = "enter";
						}
						else
						{
							uParam1->f_22.f_4 = "amb@world_human_hang_out_street@male_c@enter";
							uParam1->f_22.f_6 = "enter";
						}
					}
					break;
			}
			break;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_22.f_5) && MISC::GET_HASH_KEY(uParam1->f_22.f_5) != joaat("buzz_short"))
	{
		if (iParam2 == 0)
		{
			uParam1->f_22.f_42 = 1;
		}
		else
		{
			if (!__LIB_2__::func_159(1) || (__LIB_2__::func_50() && __LIB_3__::func_809(PLAYER::PLAYER_ID(), __LIB_3__::func_810(iParam0))))
			{
				func_596(iParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &uVar0, &uVar1, 1, 0);
				bVar2 = (uVar0 || uVar1);
			}
			if (!bVar2 && !__LIB_8__::func_922(iParam0))
			{
				uParam1->f_22.f_42 = 1;
			}
			else
			{
				uParam1->f_22.f_42 = 0;
			}
		}
	}
	else
	{
		uParam1->f_22.f_42 = 0;
	}
}

void func_1261(var uParam0, int iParam1)//Position - 0x66CCB
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 437433/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 437424/*__LIB_0__::func_162*/;
			break;
		case 1:
			uParam0->f_30 = 437357/*__LIB_5__::func_484*/;
			break;
		case 2:
			uParam0->f_31 = 436919/*__LIB_5__::func_861*/;
			break;
		case 3:
			uParam0->f_34 = 436771/*__LIB_3__::func_867*/;
			break;
		case 4:
			uParam0->f_12 = 436759/*__LIB_3__::func_866*/;
			break;
		case 37:
			uParam0->f_18 = 436545/*__LIB_5__::func_230*/;
			break;
		case 38:
			uParam0->f_9 = 436456/*__LIB_6__::func_870*/;
			break;
		case 39:
			uParam0->f_11 = 436436/*__LIB_5__::func_229*/;
			break;
		case 40:
			uParam0->f_6 = 436331/*__LIB_6__::func_869*/;
			break;
		case 41:
			uParam0->f_20 = 436306/*__LIB_5__::func_228*/;
			break;
		case 42:
			uParam0->f_10 = 436293/*__LIB_3__::func_865*/;
			break;
		case 6:
			uParam0->f_32 = 436229/*__LIB_3__::func_864*/;
			break;
		case 11:
			uParam0->f_11 = 436220/*__LIB_3__::func_603*/;
			break;
		case 12:
			uParam0->f_33 = 435683/*__LIB_5__::func_483*/;
			break;
		case 14:
			uParam0->f_11 = 435674/*__LIB_0__::func_114*/;
			break;
		case 109:
			uParam0->f_56 = 434752/*__LIB_5__::func_482*/;
			break;
		case 8:
			uParam0->f_37 = 434744/*__LIB_0__::func_467*/;
			break;
		case 7:
			uParam0->f_36 = 434735/*__LIB_0__::func_114*/;
			break;
		case 79:
			*uParam0 = 434726/*__LIB_0__::func_114*/;
			break;
		case 13:
			uParam0->f_2 = 434664/*__LIB_9__::func_783*/;
			break;
		case 15:
			uParam0->f_2 = 434583/*__LIB_9__::func_786*/;
			break;
		case 16:
			uParam0->f_5 = 434256/*__LIB_9__::func_302*/;
			break;
		case 108:
			uParam0->f_55 = 434247/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 434236/*__LIB_3__::func_860*/;
			break;
		case 19:
			uParam0->f_17 = 434225/*__LIB_3__::func_860*/;
			break;
		case 18:
			uParam0->f_8 = 434183/*__LIB_6__::func_382*/;
			break;
		case 20:
			uParam0->f_3 = 434174/*__LIB_0__::func_109*/;
			break;
		case 21:
			uParam0->f_3 = 434126/*__LIB_5__::func_227*/;
			break;
		case 74:
			uParam0->f_53 = 433971/*__LIB_5__::func_284*/;
			break;
		case 75:
			uParam0->f_4 = 433962/*__LIB_0__::func_114*/;
			break;
		case 22:
			uParam0->f_24 = 433860/*__LIB_5__::func_481*/;
			break;
		case 23:
			uParam0->f_26 = 433852/*__LIB_0__::func_467*/;
			break;
		case 25:
			uParam0->f_23 = 433425/*func_1338*/;
			break;
		case 27:
			uParam0->f_25 = 433417/*__LIB_0__::func_467*/;
			break;
		case 28:
			uParam0->f_24 = 433409/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 433374/*__LIB_5__::func_226*/;
			break;
		case 31:
			uParam0->f_39 = 433346/*__LIB_3__::func_775*/;
			break;
		case 33:
			uParam0->f_40 = 433179/*__LIB_6__::func_868*/;
			break;
		case 76:
			uParam0->f_13 = 433156/*__LIB_3__::func_849*/;
			break;
		case 34:
			uParam0->f_41 = 429542/*__LIB_5__::func_480*/;
			break;
		case 36:
			uParam0->f_58 = 429497/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 426303/*__LIB_5__::func_955*/;
			break;
		case 45:
			uParam0->f_14 = 426294/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 426285/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 426277/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 426266/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 426104/*__LIB_5__::func_478*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 424830/*func_1311*/;
			break;
		case 49:
			uParam0->f_8 = 424821/*__LIB_0__::func_114*/;
			break;
		case 50:
			*uParam0 = 424396/*__LIB_7__::func_869*/;
			break;
		case 51:
			*uParam0 = 424387/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 424376/*__LIB_3__::func_850*/;
			break;
		case 53:
			uParam0->f_13 = 424353/*__LIB_3__::func_849*/;
			break;
		case 54:
			uParam0->f_45 = 424345/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 424336/*__LIB_3__::func_729*/;
			break;
		case 57:
			uParam0->f_11 = 424323/*__LIB_3__::func_848*/;
			break;
		case 58:
			uParam0->f_13 = 424281/*__LIB_3__::func_847*/;
			break;
		case 59:
			*uParam0 = 424272/*__LIB_0__::func_114*/;
			break;
		case 60:
			*uParam0 = 424263/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 424252/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 424241/*__LIB_3__::func_554*/;
			break;
		case 63:
			uParam0->f_11 = 424232/*__LIB_1__::func_804*/;
			break;
		case 64:
			uParam0->f_47 = 424224/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 424216/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 423603/*__LIB_5__::func_476*/;
			break;
		case 67:
			uParam0->f_21 = 423533/*__LIB_3__::func_757*/;
			break;
		case 68:
			*uParam0 = 422844/*__LIB_5__::func_215*/;
			break;
		case 69:
			*uParam0 = 422835/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 422823/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 422814/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 422802/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 422793/*__LIB_0__::func_114*/;
			break;
		case 84:
			uParam0->f_1 = 422784/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 422775/*__LIB_0__::func_109*/;
			break;
		case 87:
			uParam0->f_1 = 422766/*__LIB_0__::func_109*/;
			break;
		case 88:
			uParam0->f_1 = 422757/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 422749/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 422740/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 422731/*__LIB_0__::func_109*/;
			break;
		case 98:
			uParam0->f_1 = 422722/*__LIB_0__::func_109*/;
			break;
		case 100:
			uParam0->f_22 = 422714/*__LIB_0__::func_467*/;
			break;
		case 101:
			uParam0->f_22 = 422706/*__LIB_0__::func_467*/;
			break;
		case 112:
			uParam0->f_13 = 422694/*__LIB_5__::func_214*/;
			break;
		case 113:
			uParam0->f_3 = 422685/*__LIB_0__::func_114*/;
			break;
		case 114:
			uParam0->f_16 = 328426/*__LIB_5__::func_451*/;
			break;
		case 115:
			uParam0->f_3 = 422676/*__LIB_0__::func_114*/;
			break;
		case 116:
			*uParam0 = 422667/*__LIB_0__::func_114*/;
			break;
		case 117:
			uParam0->f_16 = 382391/*__LIB_3__::func_800*/;
			break;
		case 78:
			uParam0->f_59 = 422659/*__LIB_0__::func_467*/;
			break;
		case 124:
			uParam0->f_1 = 422650/*__LIB_0__::func_109*/;
			break;
		case 125:
			uParam0->f_19 = 422642/*__LIB_0__::func_467*/;
			break;
	}
}

void func_1311(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0x67B7E
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	bool bVar4;
	int iVar5;
	iVar0 = 0;
	iParam1 = (iParam1 - 1);
	iParam3->f_46 = __LIB_3__::func_854();
	MISC::SET_BIT(&(iParam3->f_2), 4);
	switch (iParam1)
	{
		case 0:
			__LIB_5__::func_189(iParam3, 0, 1);
			__LIB_5__::func_189(iParam3, 1, 0);
			__LIB_5__::func_189(iParam3, 2, 0);
			__LIB_5__::func_189(iParam3, 3, 1);
			__LIB_5__::func_189(iParam3, 4, 0);
			__LIB_5__::func_189(iParam3, 5, 0);
			break;
		case 1:
			__LIB_5__::func_189(iParam3, 0, 0);
			__LIB_5__::func_189(iParam3, 1, 0);
			__LIB_5__::func_189(iParam3, 2, 1);
			__LIB_5__::func_189(iParam3, 3, 1);
			__LIB_5__::func_189(iParam3, 4, 0);
			__LIB_5__::func_189(iParam3, 5, 0);
			break;
		case 3:
			__LIB_5__::func_189(iParam3, 0, 1);
			__LIB_5__::func_189(iParam3, 1, 0);
			__LIB_5__::func_189(iParam3, 2, 0);
			__LIB_5__::func_189(iParam3, 3, 0);
			__LIB_5__::func_189(iParam3, 4, 0);
			__LIB_5__::func_189(iParam3, 5, 0);
			break;
		case 2:
			__LIB_5__::func_189(iParam3, 0, 1);
			__LIB_5__::func_189(iParam3, 1, 0);
			__LIB_5__::func_189(iParam3, 2, 0);
			__LIB_5__::func_189(iParam3, 3, 0);
			break;
	}
	if (iParam1 == 2)
	{
		MISC::SET_BIT(&uVar3, PLAYER::PLAYER_ID());
		if (__LIB_6__::func_869(PLAYER::PLAYER_ID(), 148, uVar3, 1))
		{
			bVar1 = false;
			bVar2 = false;
		}
		else
		{
			func_596(iParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &bVar1, &bVar2, 1, 1);
		}
		__LIB_5__::func_189(iParam3, 4, bVar1);
		__LIB_5__::func_189(iParam3, 5, bVar2);
	}
	if (iParam3->f_3 != 0 && (iParam3->f_5 < iVar0 || iParam3->f_1 != 1))
	{
		return;
	}
	if (iParam3->f_3 == 0)
	{
		Global_1946250.f_4693 = 1;
		return;
	}
	bVar4 = false;
	if (__LIB_3__::func_661(0, iParam3) || __LIB_3__::func_661(1, iParam3))
	{
		if (iParam1 == 2 || iParam1 == 3)
		{
			bVar4 = true;
			MISC::CLEAR_BIT(&(iParam3->f_2), 1);
		}
		else
		{
			return;
		}
	}
	else if (__LIB_3__::func_661(3, iParam3))
	{
		MISC::SET_BIT(&(Global_1946250.f_9), 26);
		iParam3->f_5 = 0;
	}
	else if (__LIB_3__::func_661(2, iParam3))
	{
		MISC::SET_BIT(&(Global_1946250.f_9), 27);
		iParam3->f_5 = 0;
	}
	else if (__LIB_3__::func_661(4, iParam3) || __LIB_3__::func_661(5, iParam3))
	{
		iVar5 = __LIB_6__::func_945(__LIB_3__::func_661(4, iParam3));
		__LIB_3__::func_852(iVar5);
		bVar4 = true;
	}
	if (bVar4)
	{
		if (__LIB_3__::func_845())
		{
			MISC::SET_BIT(&(Global_1946250.f_10), 1);
		}
		else
		{
			MISC::SET_BIT(&(Global_1946250.f_10), 0);
		}
		if (__LIB_5__::func_223())
		{
			MISC::SET_BIT(&(Global_1946250.f_6), 19);
		}
		else
		{
			__LIB_3__::func_768(iParam0, -1);
		}
	}
}

void func_1338(int iParam0, int iParam1)//Position - 0x69D11
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	int iVar3;
	if (__LIB_0__::func_109(PLAYER::PLAYER_ID(), iParam0))
	{
		iVar3 = __LIB_3__::func_616();
		Var2 = { __LIB_3__::func_859(iParam0, iVar3) };
		func_596(iParam0, Var2, &bVar0, &bVar1, 1, 0);
		if (bVar1)
		{
			__LIB_5__::func_189(iParam1, 1, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_5__::func_189(iParam1, 2, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 2, 0);
		}
		if (((bVar1 || bVar0) && !__LIB_3__::func_779()) && Global_1946250.f_3606 != 148)
		{
			__LIB_6__::func_868(iParam0, -1);
		}
		if (__LIB_3__::func_661(0, iParam1))
		{
			__LIB_6__::func_868(iParam0, -1);
		}
		else if (__LIB_3__::func_661(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var2, 1, 0, 0, 0, -1, -1, -1);
			}
			__LIB_7__::func_787();
		}
		else if (__LIB_3__::func_661(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var2, 0, 0, 1, 0, -1, -1, -1);
			}
			__LIB_7__::func_787();
		}
	}
	else
	{
		__LIB_5__::func_189(iParam1, 1, 0);
		__LIB_5__::func_189(iParam1, 2, 0);
	}
}

void func_1383(var uParam0, int iParam1)//Position - 0x6ACC2
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 713598/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 713543/*__LIB_3__::func_975*/;
			break;
		case 2:
			uParam0->f_31 = 712883/*__LIB_5__::func_965*/;
			break;
		case 3:
			uParam0->f_34 = 712756/*__LIB_3__::func_974*/;
			break;
		case 4:
			uParam0->f_12 = 712724/*__LIB_3__::func_973*/;
			break;
		case 5:
			uParam0->f_11 = 712713/*__LIB_3__::func_972*/;
			break;
		case 6:
			uParam0->f_32 = 712649/*__LIB_3__::func_971*/;
			break;
		case 111:
			uParam0->f_35 = 712626/*__LIB_5__::func_245*/;
			break;
		case 79:
			*uParam0 = 712617/*__LIB_0__::func_114*/;
			break;
		case 37:
			uParam0->f_18 = 712504/*__LIB_3__::func_970*/;
			break;
		case 38:
			uParam0->f_9 = 712408/*__LIB_6__::func_946*/;
			break;
		case 11:
			uParam0->f_11 = 712399/*__LIB_3__::func_969*/;
			break;
		case 12:
			uParam0->f_33 = 712009/*__LIB_8__::func_851*/;
			break;
		case 109:
			uParam0->f_56 = 711706/*__LIB_7__::func_741*/;
			break;
		case 15:
			uParam0->f_2 = 709739/*__LIB_7__::func_876*/;
			break;
		case 13:
			uParam0->f_2 = 709730/*__LIB_0__::func_109*/;
			break;
		case 75:
			uParam0->f_4 = 709721/*__LIB_0__::func_109*/;
			break;
		case 16:
			uParam0->f_5 = 709338/*__LIB_9__::func_2*/;
			break;
		case 108:
			uParam0->f_55 = 705383/*__LIB_9__::func_529*/;
			break;
		case 17:
			uParam0->f_17 = 704659/*__LIB_9__::func_267*/;
			break;
		case 19:
			uParam0->f_17 = 704634/*__LIB_5__::func_963*/;
			break;
		case 20:
			uParam0->f_3 = 704464/*__LIB_8__::func_925*/;
			break;
		case 21:
			uParam0->f_3 = 704401/*__LIB_5__::func_243*/;
			break;
		case 74:
			uParam0->f_53 = 704249/*__LIB_5__::func_242*/;
			break;
		case 22:
			uParam0->f_24 = 704168/*__LIB_3__::func_957*/;
			break;
		case 25:
			uParam0->f_23 = 703231/*func_1766*/;
			break;
		case 30:
			uParam0->f_8 = 701903/*__LIB_7__::func_837*/;
			break;
		case 31:
			uParam0->f_39 = 701327/*__LIB_8__::func_924*/;
			break;
		case 33:
			uParam0->f_40 = 700092/*__LIB_8__::func_963*/;
			break;
		case 14:
			uParam0->f_11 = 700083/*__LIB_1__::func_806*/;
			break;
		case 34:
			uParam0->f_41 = 697316/*__LIB_5__::func_495*/;
			break;
		case 36:
			uParam0->f_58 = 697263/*__LIB_3__::func_945*/;
			break;
		case 35:
			uParam0->f_42 = 691811/*__LIB_5__::func_962*/;
			break;
		case 45:
			uParam0->f_14 = 691802/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 691793/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 691785/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 691762/*__LIB_3__::func_943*/;
			break;
		case 47:
			uParam0->f_43 = 691713/*__LIB_3__::func_942*/;
			break;
		case 49:
			uParam0->f_8 = 691688/*__LIB_3__::func_941*/;
			break;
		case 50:
			*uParam0 = 691650/*__LIB_5__::func_725*/;
			break;
		case 51:
			*uParam0 = 691576/*__LIB_6__::func_899*/;
			break;
		case 52:
			uParam0->f_15 = 691565/*__LIB_3__::func_940*/;
			break;
		case 53:
			uParam0->f_13 = 691486/*__LIB_6__::func_874*/;
			break;
		case 54:
			uParam0->f_45 = 691478/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 691469/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 691459/*__LIB_3__::func_938*/;
			break;
		case 58:
			uParam0->f_13 = 691212/*__LIB_7__::func_737*/;
			break;
		case 64:
			uParam0->f_47 = 690049/*__LIB_9__::func_756*/;
			break;
		case 65:
			uParam0->f_21 = 688857/*__LIB_7__::func_870*/;
			break;
		case 66:
			uParam0->f_21 = 687749/*__LIB_7__::func_54*/;
			break;
		case 67:
			uParam0->f_21 = 687573/*__LIB_5__::func_866*/;
			break;
		case 68:
			*uParam0 = 685913/*__LIB_7__::func_836*/;
			break;
		case 69:
			*uParam0 = 685904/*__LIB_0__::func_109*/;
			break;
		case 70:
			uParam0->f_48 = 685892/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 685883/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 685871/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 685038/*__LIB_5__::func_961*/;
			break;
		case 73:
			uParam0->f_51 = 685029/*__LIB_0__::func_114*/;
			break;
		case 84:
			uParam0->f_1 = 684377/*__LIB_9__::func_517*/;
			break;
		case 85:
			uParam0->f_1 = 683505/*func_1668*/;
			break;
		case 87:
			uParam0->f_1 = 682294/*__LIB_9__::func_525*/;
			break;
		case 88:
			uParam0->f_1 = 682274/*__LIB_3__::func_918*/;
			break;
		case 89:
			uParam0->f_54 = 682180/*__LIB_3__::func_917*/;
			break;
		case 90:
			uParam0->f_1 = 682049/*__LIB_5__::func_865*/;
			break;
		case 91:
			uParam0->f_1 = 681421/*__LIB_5__::func_801*/;
			break;
		case 92:
			uParam0->f_1 = 680654/*func_1650*/;
			break;
		case 94:
			uParam0->f_1 = 680102/*__LIB_5__::func_960*/;
			break;
		case 95:
			uParam0->f_22 = 679508/*__LIB_6__::func_383*/;
			break;
		case 18:
			uParam0->f_8 = 679150/*__LIB_5__::func_959*/;
			break;
		case 96:
			uParam0->f_1 = 679057/*__LIB_5__::func_800*/;
			break;
		case 97:
			uParam0->f_1 = 678211/*__LIB_5__::func_864*/;
			break;
		case 98:
			uParam0->f_1 = 444069/*func_1438*/;
			break;
		case 100:
			uParam0->f_22 = 440787/*__LIB_6__::func_440*/;
			break;
		case 101:
			uParam0->f_22 = 439631/*__LIB_6__::func_417*/;
			break;
		case 78:
			uParam0->f_59 = 439423/*__LIB_7__::func_788*/;
			break;
		case 104:
			uParam0->f_1 = 438955/*__LIB_5__::func_957*/;
			break;
		case 102:
			uParam0->f_1 = 438946/*__LIB_0__::func_109*/;
			break;
		case 103:
			uParam0->f_22 = 438836/*__LIB_5__::func_956*/;
			break;
		case 81:
			*uParam0 = 438793/*__LIB_3__::func_870*/;
			break;
	}
}

int func_1438(var uParam0, var uParam1)//Position - 0x6C6A5
{
	bool bVar0;
	struct<3> Var1;
	struct<3> Var2;
	char* sVar3;
	char* sVar4;
	int iVar5;
	struct<3> Var6;
	struct<3> Var7;
	int iVar8;
	int iVar9;
	int iVar10;
	if (__LIB_3__::func_894())
	{
		MISC::SET_BIT(&(Global_1946250.f_2), 20);
		MISC::SET_BIT(&(Global_1946250.f_7), 24);
		if (uParam1->f_218 != -1)
		{
			uParam1->f_218 = -1;
		}
		return 1;
	}
	else if (__LIB_5__::func_232())
	{
		func_1455(&(uParam1->f_140[0]), PLAYER::PLAYER_ID(), 1, 1);
		if (__LIB_0__::func_121(uParam1->f_140[0]))
		{
			if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(uParam1->f_140[0]))
			{
				return 0;
			}
			bVar0 = (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && __LIB_1__::func_365(PLAYER::PLAYER_PED_ID()));
			Var1 = { __LIB_3__::func_903(Global_1946250.f_3377) };
			Var2 = { __LIB_3__::func_902(Global_1946250.f_3377) };
			sVar3 = __LIB_3__::func_888(0, 1);
			sVar4 = __LIB_3__::func_901(0, 1);
			__LIB_3__::func_900(&(Global_1946250.f_4073), 2600, "sub_exit", Var1, Var2, sVar3, sVar4, 0, 0, 500, 0, 2);
			sVar3 = __LIB_3__::func_888(bVar0, 0);
			sVar4 = __LIB_3__::func_901(bVar0, 0);
			Global_1946250.f_4073.f_394 = PED::CREATE_SYNCHRONIZED_SCENE(Var1, Var2, 2);
			TASK::TASK_SYNCHRONIZED_SCENE(uParam1->f_140[0], Global_1946250.f_4073.f_394, sVar3, sVar4, 1000f, -1000f, 0, 0, 1000f, 0);
			ENTITY::SET_ENTITY_VISIBLE(uParam1->f_140[0], false, false);
			MISC::SET_BIT(&(Global_1946250.f_2), 20);
			MISC::SET_BIT(&(Global_1946250.f_5), 27);
			NETWORK::NETWORK_FADE_OUT_ENTITY(PLAYER::PLAYER_PED_ID(), true, true);
			return 1;
		}
	}
	else
	{
		Var6 = { uParam1->f_28 };
		Var7 = { uParam1->f_31 };
		iVar8 = -1;
		if (__LIB_3__::func_887(PLAYER::PLAYER_ID()))
		{
			iVar5 = joaat("seasparrow3");
			iVar8 = 0;
			if (PLAYER::PLAYER_ID() == Global_1853194)
			{
				STREAMING::REQUEST_MODEL(joaat("seasparrow2"));
			}
			if (!__LIB_5__::func_863(uParam1, iVar8))
			{
				return 0;
			}
		}
		else if (__LIB_3__::func_886(PLAYER::PLAYER_ID()))
		{
			iVar5 = joaat("avisa");
			iVar8 = 1;
			if (!__LIB_5__::func_863(uParam1, iVar8))
			{
				return 0;
			}
		}
		else if (__LIB_3__::func_879(PLAYER::PLAYER_ID()))
		{
			iVar5 = ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false));
			iVar8 = 2;
			if (!__LIB_5__::func_863(uParam1, iVar8))
			{
				return 0;
			}
		}
		else
		{
			return 1;
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
		{
			iVar9 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			Var6 = { ENTITY::GET_ENTITY_COORDS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), true) };
			Var7 = { ENTITY::GET_ENTITY_ROTATION(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 2) };
			func_371(&iVar9, &(uParam1->f_109), 4);
			__LIB_3__::func_633(&(uParam1->f_109));
			ENTITY::SET_ENTITY_COLLISION(uParam1->f_109, false, false);
			ENTITY::SET_ENTITY_INVINCIBLE(uParam1->f_109, true);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_109, Var6, false, false, true);
			ENTITY::SET_ENTITY_ROTATION(uParam1->f_109, Var7, 2, true);
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_109, true);
			VEHICLE::SET_VEHICLE_ENGINE_ON(uParam1->f_109, false, true, false);
			ENTITY::SET_ENTITY_VISIBLE(uParam1->f_109, false, false);
			if (__LIB_3__::func_879(PLAYER::PLAYER_ID()))
			{
				VEHICLE::SET_VEHICLE_CAN_DEFORM_WHEELS(uParam1->f_109, false);
				VEHICLE::TRANSFORM_TO_SUBMARINE(uParam1->f_109, true);
			}
			__LIB_5__::func_489(uParam1->f_109);
			return 0;
		}
		__LIB_3__::func_882(1);
		if (__LIB_5__::func_488())
		{
			__LIB_5__::func_862(iVar8);
			__LIB_3__::func_900(&(Global_1946250.f_4073), 6000, "Submarine INT exit", uParam1->f_28, uParam1->f_31, uParam1->f_3, uParam1->f_8, 1, 0, 500, 0, 2);
			Global_1946250.f_4073.f_394 = PED::CREATE_SYNCHRONIZED_SCENE(uParam1->f_28, uParam1->f_31, 2);
			iVar10 = 0;
			while (iVar10 < uParam1->f_219)
			{
				if (iVar10 < 3)
				{
					if (__LIB_0__::func_121(uParam1->f_176[iVar10]))
					{
						if (iVar10 == 0)
						{
							if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_228))
							{
								uParam1->f_218 = AUDIO::GET_SOUND_ID();
								AUDIO::PLAY_SOUND_FROM_ENTITY(uParam1->f_218, uParam1->f_230, uParam1->f_176[iVar10], uParam1->f_228, false, 0);
							}
							__LIB_3__::func_896(uParam1, uParam1->f_176[iVar10]);
						}
						__LIB_3__::func_895(&Var6, &Var7, uParam1, iVar10);
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_176[iVar10], Var6, false, false, true);
						ENTITY::SET_ENTITY_ROTATION(uParam1->f_176[iVar10], Var7, 2, true);
						if (!ENTITY::IS_ENTITY_VISIBLE(uParam1->f_176[iVar10]))
						{
							ENTITY::SET_ENTITY_VISIBLE(uParam1->f_176[iVar10], true, false);
						}
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(uParam1->f_176[iVar10], Global_1946250.f_4073.f_394, uParam1->f_221[iVar10], uParam1->f_3, 1000f, -1000f, 0, 1000f);
					}
				}
				iVar10++;
			}
			if (__LIB_0__::func_121(uParam1->f_109))
			{
				ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(uParam1->f_109, Global_1946250.f_4073.f_394, uParam1->f_7, uParam1->f_3, 1000f, -1000f, 0, 1000f);
			}
			MISC::SET_BIT(&(Global_1946250.f_7), 29);
			MISC::SET_BIT(&(Global_1946250.f_2), 20);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar5);
			return 1;
		}
	}
	return 0;
}

int func_1455(var uParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x6D2D0
{
	int iVar0;
	iVar0 = PLAYER::GET_PLAYER_PED(bParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (!func_283(uParam0, iVar0, bParam2, bParam3))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0) && !ENTITY::IS_ENTITY_DEAD(*uParam0, false))
	{
		if (!func_1456(uParam0, bParam1))
		{
		}
		PED::FINALIZE_HEAD_BLEND(*uParam0);
	}
	return 1;
}

int func_1456(var uParam0, int iParam1)//Position - 0x6D32E
{
	int iVar0;
	struct<10> Var1;
	if (__LIB_3__::func_140(iParam1))
	{
		iVar0 = __LIB_7__::func_53(iParam1);
		Var1.f_1 = -1;
		Var1.f_2 = -1;
		Var1.f_3 = -1;
		Var1.f_4 = -1;
		Var1.f_8 = -1;
		Var1.f_9 = 50;
		Var1.f_0 = *uParam0;
		Var1.f_6 = 1;
		func_1460(&Var1, __LIB_3__::func_353(iVar0), 0, 1, 1, !__LIB_5__::func_723(), 0, __LIB_7__::func_52(), __LIB_3__::func_904(__LIB_5__::func_491(iParam1), 0), __LIB_3__::func_352(iVar0));
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(__LIB_2__::func_508(iParam1, 0), false);
		if (GRAPHICS::OVERRIDE_PED_CREW_LOGO_TEXTURE(*uParam0, __LIB_2__::func_508(iParam1, 0), __LIB_5__::func_490(iParam1, 2)))
		{
		}
		return 1;
	}
	return 0;
}

int func_1460(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, bool bParam9)//Position - 0x6D44B
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	bool bVar11;
	struct<14> Var12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	struct<4> Var17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	bool bVar24;
	int iVar25;
	var uVar26;
	var uVar27;
	int iVar28;
	int iVar29;
	bool bVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	bool bVar34;
	struct<7> Var35;
	struct<9> Var36;
	int iVar37;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		Global_78200[iVar0] = -1;
		Global_78200.f_13[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_78200.f_26)
	{
		Global_78200.f_26[iVar0] = -1;
		Global_78200.f_36[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_78200.f_46)
	{
		Global_78200.f_46[iVar0] = -1;
		iVar0++;
	}
	if (!PED::IS_PED_DEAD_OR_DYING(*uParam0, true))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(*uParam0);
		if (iVar1 == joaat("MP_M_Freemode_01") || iVar1 == joaat("MP_F_Freemode_01"))
		{
			bVar2 = false;
			if (uParam0->f_1 != -1 && uParam0->f_1 != 1711)
			{
				bVar2 = true;
			}
			if (uParam0->f_2 != -1 && uParam0->f_2 != 334)
			{
				bVar2 = true;
			}
			else if ((uParam0->f_2 == -1 && bParam1) && bParam2)
			{
				bVar2 = true;
			}
			if (bVar2)
			{
				bVar3 = false;
				if (!bParam2)
				{
					if (__LIB_7__::func_886(&Global_78200, *uParam0, bParam1))
					{
						bVar3 = true;
					}
				}
				if ((bParam1 && uParam0->f_1 != 32) && uParam0->f_1 != 81)
				{
					if (__LIB_3__::func_344(&Global_78200, *uParam0, bParam2, bParam4))
					{
						bVar3 = true;
					}
				}
				iVar4 = -1;
				if (uParam0->f_3 != -1)
				{
					if (__LIB_3__::func_376(*uParam0, &Global_78200, uParam0->f_3, &iVar4))
					{
						bVar3 = true;
					}
				}
				if (uParam0->f_4 != -1)
				{
					if (__LIB_3__::func_376(*uParam0, &Global_78200, uParam0->f_4, &iVar4))
					{
						bVar3 = true;
					}
				}
				if (bVar3)
				{
					switch (uParam0->f_6)
					{
						case 0:
							bVar5 = true;
							if (!__LIB_3__::func_337(uParam0, &Global_78200))
							{
								bVar5 = false;
							}
							if (bVar5)
							{
								uParam0->f_6 = 1;
							}
							break;
						case 1:
							if (!bParam6)
							{
								PED::CLEAR_ALL_PED_PROPS(*uParam0);
								PED::CLEAR_PED_STORED_HAT_PROP(*uParam0);
								PED::REMOVE_PED_HELMET(*uParam0, true);
								if (bParam3)
								{
									PED::CLEAR_PED_WETNESS(*uParam0);
									PED::CLEAR_PED_BLOOD_DAMAGE(*uParam0);
								}
								iVar6 = 0;
								iVar7 = PED::GET_PED_DRAWABLE_VARIATION(*uParam0, 5);
								iVar8 = -1;
								iVar7 = iVar7;
								iVar8 = iVar8;
								if (__LIB_1__::func_608(*uParam0))
								{
									iVar6 = 1;
								}
								if (iVar6 && bParam5)
								{
									Global_78200[5] = 0;
									if (Global_78200.f_13[5] == -1)
									{
										Global_78200.f_13[5] = 0;
									}
								}
								if (bParam1)
								{
									if (((uParam0->f_2 != -1 && uParam0->f_2 != -2) && uParam0->f_1 != 32) && uParam0->f_1 != 81)
									{
										if (__LIB_3__::func_336(uParam0->f_2) == 22)
										{
											Global_78200.f_26[2] = -1;
										}
										else if ((((__LIB_3__::func_336(uParam0->f_2) == 8 || __LIB_3__::func_336(uParam0->f_2) == 50) || __LIB_3__::func_336(uParam0->f_2) == 47) || uParam0->f_2 == 286) || uParam0->f_2 == 287)
										{
											Global_78200.f_26[1] = -1;
											Global_78200.f_26[2] = -1;
										}
										else
										{
											Global_78200.f_26[1] = -1;
											Global_78200.f_26[2] = -1;
											Global_78200.f_26[0] = -1;
											if (PED::IS_PED_IN_ANY_VEHICLE(*uParam0, false))
											{
												PED::CLEAR_PED_STORED_HAT_PROP(*uParam0);
											}
										}
										if (ENTITY::GET_ENTITY_MODEL(*uParam0) == joaat("MP_F_Freemode_01"))
										{
											if (__LIB_3__::func_343(iVar1, 7, __LIB_0__::func_206(*uParam0, Global_78200[7], Global_78200.f_13[7], 7), -1))
											{
												Global_78200[7] = 0;
												Global_78200.f_13[7] = 0;
											}
										}
									}
									else if (uParam0->f_2 == -2)
									{
										iVar9 = FILES::GET_HASH_NAME_FOR_COMPONENT(*uParam0, 1, Global_78200[1], Global_78200.f_13[1]);
										if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("FORCE_PROP"), 0) && PED::GET_PED_DRAWABLE_VARIATION(*uParam0, 1) == Global_78200[1])
										{
										}
										else
										{
											Global_78200.f_26[1] = -1;
											Global_78200.f_26[2] = -1;
											Global_78200.f_26[0] = -1;
											if (ENTITY::GET_ENTITY_MODEL(*uParam0) == joaat("MP_F_Freemode_01"))
											{
												if (__LIB_3__::func_343(iVar1, 7, __LIB_0__::func_206(*uParam0, Global_78200[7], Global_78200.f_13[7], 7), -1))
												{
													Global_78200[7] = 0;
													Global_78200.f_13[7] = 0;
												}
											}
											if (PED::IS_PED_IN_ANY_VEHICLE(*uParam0, false))
											{
												PED::CLEAR_PED_STORED_HAT_PROP(*uParam0);
											}
										}
									}
									else if (uParam0->f_2 == -1 && bParam2)
									{
										Global_78200.f_26[1] = -1;
										Global_78200.f_26[2] = -1;
										Global_78200.f_26[0] = -1;
										if (PED::IS_PED_IN_ANY_VEHICLE(*uParam0, false))
										{
											PED::CLEAR_PED_STORED_HAT_PROP(*uParam0);
										}
									}
								}
								__LIB_4__::func_984(*uParam0, &Global_78200, uParam0->f_8);
								if ((Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 != -1 && Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 < 4) && PLAYER::PLAYER_ID() != -1)
								{
									if (BitTest(Global_4718592.f_658[Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 /*22957*/].f_12179, 4))
									{
										if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_119 == 7 || Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_119 == 2)
										{
											PED::SET_PED_HEAD_OVERLAY(*uParam0, 4, 0, 0f);
										}
									}
								}
								GRAPHICS::OVERRIDE_PED_CREW_LOGO_TEXTURE(*uParam0, "", "");
								bVar11 = false;
								iVar0 = 0;
								while (iVar0 < 12)
								{
									if (Global_78200[iVar0] != -1)
									{
										if (iVar0 == 10 && iParam7 != -1)
										{
											iVar10 = __LIB_0__::func_206(*uParam0, Global_78200[iVar0], Global_78200.f_13[iVar0], 10);
											if (__LIB_3__::func_342(iVar1, 10, iVar10, -1))
											{
												if (iParam7 == 0)
												{
													PED::SET_PED_COMPONENT_VARIATION(*uParam0, iVar0, 0, 0, 0);
												}
												else if (iParam7 == 1)
												{
													if (*uParam0 == PLAYER::PLAYER_PED_ID() && !__LIB_1__::func_526())
													{
														PED::SET_PED_COMPONENT_VARIATION(*uParam0, iVar0, 0, 0, 0);
													}
													else
													{
														PED::SET_PED_COMPONENT_VARIATION(*uParam0, iVar0, Global_78200[iVar0], Global_78200.f_13[iVar0], 0);
														PED::SET_PED_ENABLE_CREW_EMBLEM(*uParam0, true);
													}
												}
												else if (iParam7 == 2)
												{
													GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(__LIB_2__::func_508(PLAYER::PLAYER_ID(), 0), false);
													GRAPHICS::OVERRIDE_PED_CREW_LOGO_TEXTURE(*uParam0, __LIB_2__::func_508(PLAYER::PLAYER_ID(), 0), __LIB_5__::func_490(PLAYER::PLAYER_ID(), 2));
													PED::SET_PED_COMPONENT_VARIATION(*uParam0, iVar0, Global_78200[iVar0], Global_78200.f_13[iVar0], 0);
												}
												else
												{
													PED::SET_PED_COMPONENT_VARIATION(*uParam0, iVar0, 0, 0, 0);
												}
											}
											else
											{
												PED::SET_PED_COMPONENT_VARIATION(*uParam0, iVar0, Global_78200[iVar0], Global_78200.f_13[iVar0], 0);
											}
										}
										else
										{
											if (iVar0 == 1)
											{
											}
											else if (iVar0 == 2)
											{
												PED::SET_PED_COMPONENT_VARIATION(*uParam0, iVar0, Global_78200[iVar0], Global_78200.f_13[iVar0], 0);
												PED::SET_PED_COMPONENT_VARIATION(*uParam0, 1, Global_78200[1], Global_78200.f_13[1], 0);
												bVar11 = true;
											}
											else if (Global_78200[iVar0] >= PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(*uParam0, iVar0) || Global_78200.f_13[iVar0] >= PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(*uParam0, iVar0, Global_78200[iVar0]))
											{
											}
											else
											{
												PED::SET_PED_COMPONENT_VARIATION(*uParam0, iVar0, Global_78200[iVar0], Global_78200.f_13[iVar0], 0);
											}
											if (iVar0 == 10)
											{
												iVar10 = __LIB_0__::func_206(*uParam0, Global_78200[iVar0], Global_78200.f_13[iVar0], 10);
												if (__LIB_3__::func_342(iVar1, 10, iVar10, -1))
												{
													PED::SET_PED_ENABLE_CREW_EMBLEM(*uParam0, true);
												}
											}
										}
									}
									iVar0++;
								}
								if (!bVar11 && Global_78200[1] != -1)
								{
									PED::SET_PED_COMPONENT_VARIATION(*uParam0, 1, Global_78200[1], Global_78200.f_13[1], 0);
								}
								iVar0 = 0;
								while (iVar0 < Global_78200.f_26)
								{
									if (Global_78200.f_26[iVar0] != -1 && Global_78200.f_26[iVar0] != 255)
									{
										__LIB_0__::func_454(*uParam0, iVar0, Global_78200.f_26[iVar0], Global_78200.f_36[iVar0]);
									}
									iVar0++;
								}
								if (*uParam0 == PLAYER::PLAYER_PED_ID())
								{
									if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(*uParam0, 8, joaat("SCUBA_GEAR")))
									{
										if (iVar1 == joaat("MP_M_Freemode_01"))
										{
											PLAYER::SET_PLAYER_PREVIOUS_VARIATION_DATA(PLAYER::PLAYER_ID(), 8, 15, 0, 0, 0);
										}
										else if (iVar1 == joaat("MP_F_Freemode_01"))
										{
											PLAYER::SET_PLAYER_PREVIOUS_VARIATION_DATA(PLAYER::PLAYER_ID(), 8, 3, 0, 0, 0);
										}
									}
								}
								if ((iVar6 && !bParam5) && *uParam0 == PLAYER::PLAYER_PED_ID())
								{
									__LIB_5__::func_722(PLAYER::PLAYER_ID(), -1, -1);
								}
								if (!func_298(*uParam0))
								{
									if (uParam0->f_2 >= 52 && uParam0->f_2 <= 59)
									{
										PED::SET_PED_HELMET_PROP_INDEX(*uParam0, Global_78200.f_26[0], true);
										PED::SET_PED_HELMET_TEXTURE_INDEX(*uParam0, Global_78200.f_36[0]);
										__LIB_3__::func_335(*uParam0, Global_78200.f_26[0], Global_78200.f_36[0], 1);
									}
									else
									{
										Var12 = { __LIB_6__::func_38(iVar1, 14, __LIB_1__::func_360(589, -1, 0), -1) };
										if (Var12.f_3 != -1 && Var12.f_4 != -1)
										{
											if (__LIB_0__::func_348(iVar1, 14, __LIB_1__::func_360(589, -1, 0), -1))
											{
												PED::SET_PED_HELMET_PROP_INDEX(*uParam0, Var12.f_3, true);
												PED::SET_PED_HELMET_TEXTURE_INDEX(*uParam0, Var12.f_4);
												__LIB_3__::func_335(*uParam0, Var12.f_3, Var12.f_4, 1);
											}
										}
										PED::SET_PED_CONFIG_FLAG(*uParam0, 34, false);
										PED::SET_PED_CONFIG_FLAG(*uParam0, 36, false);
									}
								}
								else if (Global_78200.f_26[0] != -1 && Global_78200.f_26[0] != 255)
								{
									__LIB_3__::func_335(*uParam0, Global_78200.f_26[0], Global_78200.f_36[0], 0);
								}
								if (!__LIB_0__::func_157(0))
								{
									if (uParam0->f_3 != -1)
									{
										func_1584(*uParam0, uParam0->f_3, uParam0->f_8);
									}
									if ((uParam0->f_4 != -1 && uParam0->f_1 != 32) && uParam0->f_1 != 81)
									{
										func_1584(*uParam0, uParam0->f_4, uParam0->f_8);
									}
									if ((*uParam0 == PLAYER::PLAYER_PED_ID() && uParam0->f_1 != 0) && uParam0->f_1 != -1)
									{
										__LIB_1__::func_354(2065, 1, -1, 1, 0);
									}
									if ((((((((((((((((__LIB_1__::func_102(*uParam0, 7) && uParam0->f_1 != 1147) && uParam0->f_1 != 1148) && uParam0->f_1 != 1149) && uParam0->f_1 != 1150) && uParam0->f_1 != 1155) && uParam0->f_1 != 1156) && uParam0->f_1 != 1157) && uParam0->f_1 != 1158) && uParam0->f_1 != 1265) && uParam0->f_1 != 1266) && uParam0->f_1 != 1267) && uParam0->f_1 != 1268) && uParam0->f_1 != 1261) && uParam0->f_1 != 1262) && uParam0->f_1 != 1263) && uParam0->f_1 != 1264)
									{
										if (!bParam1 || uParam0->f_2 == -1)
										{
											PED::SET_PED_COMPONENT_VARIATION(*uParam0, 7, 0, 0, 0);
											PED::CLEAR_PED_PROP(*uParam0, 0);
										}
									}
									else if (__LIB_3__::func_334(*uParam0))
									{
										iVar13 = __LIB_3__::func_333(*uParam0, 1);
										iVar14 = PED::GET_PED_TEXTURE_VARIATION(*uParam0, 8);
										PED::SET_PED_COMPONENT_VARIATION(*uParam0, 8, iVar13, iVar14, 0);
										PED::CLEAR_PED_PROP(*uParam0, 0);
									}
									else if (!__LIB_3__::func_334(*uParam0) && __LIB_3__::func_332(*uParam0))
									{
										iVar15 = __LIB_3__::func_333(*uParam0, 0);
										iVar16 = PED::GET_PED_TEXTURE_VARIATION(*uParam0, 8);
										PED::SET_PED_COMPONENT_VARIATION(*uParam0, 8, iVar15, iVar16, 0);
										PED::CLEAR_PED_PROP(*uParam0, 0);
									}
									if (!bParam9)
									{
										func_1573(*uParam0);
									}
									if (uParam0->f_3 != 4 && uParam0->f_1 == 0)
									{
										if (iVar1 == joaat("MP_M_Freemode_01"))
										{
											FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_HEIST_M_HAIR_0_0"), &Var17);
										}
										else if (iVar1 == joaat("MP_F_Freemode_01"))
										{
											FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_HEIST_F_HAIR_0_0"), &Var17);
										}
										if (Global_78200[2] == Var17.f_3)
										{
											Global_78200[2] = -1;
										}
									}
									if (__LIB_3__::func_331(uParam0->f_1))
									{
										if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_76.f_20 == 0)
										{
											PED::SET_PED_COMPONENT_VARIATION(*uParam0, 0, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(*uParam0, 1, 0, 0, 0);
											__LIB_0__::func_454(*uParam0, 0, -1, 0);
											__LIB_0__::func_454(*uParam0, 1, -1, 0);
											__LIB_0__::func_454(*uParam0, 2, -1, 0);
											func_1504(*uParam0, 14, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
											PED::SET_PED_CONFIG_FLAG(*uParam0, 380, true);
										}
									}
									if (Global_78200[2] == -1)
									{
										if ((uParam0->f_8 != -1 && PLAYER::INT_TO_PLAYERINDEX(uParam0->f_8) != PLAYER::PLAYER_ID()) && !*uParam0 == PLAYER::PLAYER_PED_ID())
										{
											iVar18 = Global_2689235[uParam0->f_8 /*453*/].f_249;
											iVar19 = Global_2689235[uParam0->f_8 /*453*/].f_250;
											iVar20 = 1;
											func_1504(*uParam0, 2, Global_2689235[uParam0->f_8 /*453*/].f_248, 0, -1, 0, 0, iVar20, iVar18, iVar19, uParam0->f_8, 1, 0, 0);
										}
										else
										{
											iVar18 = __LIB_1__::func_360(2153, -1, 0);
											iVar19 = __LIB_1__::func_360(2160, -1, 0);
											if (__LIB_1__::func_342(161, -1))
											{
												iVar21 = __LIB_1__::func_360(2053, -1, 0);
												if (iVar21 != -99)
												{
													iVar22 = -99;
													if (ENTITY::GET_ENTITY_MODEL(*uParam0) == joaat("MP_M_Freemode_01"))
													{
														iVar22 = __LIB_0__::func_463(iVar21);
													}
													else if (ENTITY::GET_ENTITY_MODEL(*uParam0) == joaat("MP_F_Freemode_01"))
													{
														iVar22 = __LIB_0__::func_462(iVar21);
													}
													if (iVar22 != -99 && iVar21 != iVar22)
													{
														iVar21 = iVar22;
													}
												}
												if (MISC::IS_PC_VERSION())
												{
													if (iVar1 == joaat("MP_M_Freemode_01"))
													{
														iVar21 = __LIB_0__::func_463(iVar21);
													}
													else if (iVar1 == joaat("MP_F_Freemode_01"))
													{
														iVar21 = __LIB_0__::func_462(iVar21);
														if (iVar21 == __LIB_0__::func_204(iVar1, joaat("DLC_MP_BIKER_F_HAIR_6_0"), 2, 4) || iVar21 == __LIB_0__::func_462(__LIB_0__::func_204(iVar1, joaat("DLC_MP_BIKER_F_HAIR_6_0"), 2, 4)))
														{
															iVar21 = __LIB_0__::func_462(__LIB_0__::func_204(iVar1, joaat("DLC_MP_BIKER_F_HAIR_5_0"), 2, 4));
														}
														else if (iVar21 == __LIB_0__::func_204(iVar1, joaat("DLC_MP_BIKER_F_HAIR_5_0"), 2, 4) || iVar21 == __LIB_0__::func_462(__LIB_0__::func_204(iVar1, joaat("DLC_MP_BIKER_F_HAIR_5_0"), 2, 4)))
														{
															iVar21 = __LIB_0__::func_462(__LIB_0__::func_204(iVar1, joaat("DLC_MP_BIKER_F_HAIR_6_0"), 2, 4));
														}
													}
												}
												func_1504(*uParam0, 2, iVar21, 0, -1, 0, 0, 0, iVar18, iVar19, -1, 0, 0, 0);
											}
											else
											{
												iVar23 = __LIB_1__::func_360(753, -1, 0);
												func_1504(*uParam0, 2, iVar23, 0, -1, 0, 0, 0, iVar18, iVar19, -1, 0, 0, 0);
											}
										}
										PED::SET_PED_COMPONENT_VARIATION(*uParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(*uParam0, 1), PED::GET_PED_TEXTURE_VARIATION(*uParam0, 1), 0);
									}
								}
							}
							if (!__LIB_0__::func_157(0))
							{
								iVar25 = -1;
								if (uParam0->f_1 == 0)
								{
									bVar24 = false;
								}
								else
								{
									bVar24 = true;
									if (uParam0->f_1 == 1642)
									{
										iVar25 = Global_78200.f_46[0];
									}
								}
								if (uParam0->f_8 != -1)
								{
									func_1499(*uParam0, &(Global_1886249[uParam0->f_8 /*51*/]), bVar24, iVar25);
								}
								else
								{
									func_1470(*uParam0, bVar24, 0, iVar25);
								}
								if (iParam8 != -1)
								{
									iVar28 = FILES::GET_HASH_NAME_FOR_COMPONENT(*uParam0, 11, PED::GET_PED_DRAWABLE_VARIATION(*uParam0, 11), PED::GET_PED_TEXTURE_VARIATION(*uParam0, 11));
									if (__LIB_3__::func_330(iVar28, iParam8, &uVar26, &uVar27))
									{
										Global_78200.f_46[0] = uVar27;
									}
								}
								iVar29 = 0;
								while (iVar29 < Global_78200.f_46)
								{
									if (Global_78200.f_46[iVar29] != -1)
									{
										bVar30 = true;
									}
									iVar29++;
								}
								if (bVar30)
								{
									iVar37 = __LIB_0__::func_276(*uParam0);
									iVar33 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(iVar37);
									iVar31 = 0;
									while (iVar31 < 127)
									{
										if (__LIB_0__::func_445(&Var36, iVar31, iVar37, *uParam0, -1))
										{
											iVar29 = 0;
											while (iVar29 < Global_78200.f_46)
											{
												if (Global_78200.f_46[iVar29] == Var36.f_5 && Global_78200.f_46[iVar29] != -1)
												{
													bVar34 = false;
													if (Var36.f_8 == joaat("crewLogo"))
													{
														if (iParam7 == 0)
														{
															bVar34 = true;
														}
														else if (iParam7 == 1)
														{
														}
														else if (iParam7 == 2)
														{
															GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(__LIB_2__::func_508(PLAYER::PLAYER_ID(), 0), false);
															GRAPHICS::OVERRIDE_PED_CREW_LOGO_TEXTURE(*uParam0, __LIB_2__::func_508(PLAYER::PLAYER_ID(), 0), __LIB_5__::func_490(PLAYER::PLAYER_ID(), 2));
														}
													}
													if (!bVar34)
													{
														PED::ADD_PED_DECORATION_FROM_HASHES(*uParam0, Var36.f_4, Var36.f_5);
														__LIB_0__::func_260(*uParam0, Var36.f_4, Var36.f_5);
													}
												}
												iVar29++;
											}
										}
										iVar31++;
									}
									iVar32 = 0;
									while (iVar32 < iVar33)
									{
										if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(iVar37, iVar32, &Var35))
										{
											iVar29 = 0;
											while (iVar29 < Global_78200.f_46)
											{
												if (Global_78200.f_46[iVar29] == Var35.f_3 && Global_78200.f_46[iVar29] != -1)
												{
													bVar34 = false;
													if (Var35.f_6 == joaat("crewLogo"))
													{
														if (iParam7 == 0)
														{
															bVar34 = true;
														}
														else if (iParam7 == 1)
														{
														}
														else if (iParam7 == 2)
														{
															GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(__LIB_2__::func_508(PLAYER::PLAYER_ID(), 0), false);
															GRAPHICS::OVERRIDE_PED_CREW_LOGO_TEXTURE(*uParam0, __LIB_2__::func_508(PLAYER::PLAYER_ID(), 0), __LIB_5__::func_490(PLAYER::PLAYER_ID(), 2));
														}
													}
													if (!bVar34)
													{
														PED::ADD_PED_DECORATION_FROM_HASHES(*uParam0, Var35.f_2, Var35.f_3);
														__LIB_0__::func_260(*uParam0, Var35.f_2, Var35.f_3);
													}
												}
												iVar29++;
											}
										}
										iVar32++;
									}
								}
							}
							PED::SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(*uParam0, false, 0);
							__LIB_3__::func_329(*uParam0);
							uParam0->f_6 = 2;
							break;
						case 2:
							if (!__LIB_0__::func_157(0))
							{
								if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(*uParam0) || !PED::HAS_PED_HEAD_BLEND_FINISHED(*uParam0))
								{
									return 0;
								}
								else
								{
									PED::FINALIZE_HEAD_BLEND(*uParam0);
									__LIB_3__::func_329(*uParam0);
									uParam0->f_7 = 1;
									uParam0->f_6 = 0;
									uParam0->f_5 = 0;
									return 1;
								}
							}
							else
							{
								__LIB_3__::func_329(*uParam0);
								uParam0->f_7 = 1;
								uParam0->f_6 = 0;
								uParam0->f_5 = 0;
								return 1;
							}
							break;
					}
				}
				else
				{
					return 1;
				}
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_1470(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x73270
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
		bVar3 = func_1497(iParam0, 0);
		bVar4 = __LIB_1__::func_37(iParam0);
		bVar5 = func_1488(iParam0, iParam3);
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

int func_1488(int iParam0, int iParam1)//Position - 0x7D722
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
				iVar3 = func_300(iParam0, 11, -1);
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
				iVar5 = func_300(iParam0, 11, -1);
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

int func_1497(int iParam0, bool bParam1)//Position - 0x7DB80
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
							iVar2 = __LIB_5__::func_29(joaat("MP_M_Freemode_01"), 11, func_300(iParam0, 11, -1), 0);
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
						iVar3 = func_300(iParam0, 11, -1);
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
						iVar5 = func_300(iParam0, 8, -1);
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
							iVar7 = __LIB_5__::func_29(joaat("MP_F_Freemode_01"), 11, func_300(iParam0, 11, -1), 0);
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
						iVar8 = func_300(iParam0, 11, -1);
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
							iVar10 = __LIB_5__::func_29(joaat("MP_F_Freemode_01"), 11, func_300(iParam0, 11, -1), 0);
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
							iVar11 = __LIB_5__::func_29(joaat("MP_F_Freemode_01"), 11, func_300(iParam0, 11, -1), 0);
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
						iVar12 = func_300(iParam0, 8, -1);
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

void func_1499(int iParam0, var uParam1, bool bParam2, int iParam3)//Position - 0x7EBDE
{
	struct<9> Var0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	struct<8> Var8;
	int iVar9;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		PED::CLEAR_PED_DECORATIONS_LEAVE_SCARS(iParam0);
		iVar1 = __LIB_0__::func_276(iParam0);
		bVar2 = func_1497(iParam0, 0);
		bVar3 = __LIB_1__::func_37(iParam0);
		bVar4 = func_1488(iParam0, iParam3);
		if (bParam2)
		{
			bVar3 = true;
		}
		iVar5 = 0;
		while (iVar5 < 127)
		{
			if (BitTest((*uParam1)[(iVar5 / 32)], (iVar5 % 32)))
			{
				if (__LIB_0__::func_445(&Var0, iVar5, iVar1, iParam0, -1))
				{
					if (__LIB_2__::func_998(iParam0, &Var0, iVar5, Var0.f_4, Var0.f_8, bVar2, bVar3, bParam2, bVar4))
					{
						PED::ADD_PED_DECORATION_FROM_HASHES_IN_CORONA(iParam0, Var0.f_4, Var0.f_5);
					}
				}
			}
			iVar5++;
		}
		if (BitTest((*uParam1)[(123 / 32)], (123 % 32)))
		{
			if (PED::GET_PED_DECORATION_ZONE_FROM_HASHES(joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz")) != 7)
			{
				PED::ADD_PED_DECORATION_FROM_HASHES_IN_CORONA(iParam0, joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz"));
			}
		}
		iVar7 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(iVar1);
		iVar6 = 0;
		while (iVar6 < iVar7)
		{
			if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(iVar1, iVar6, &Var8))
			{
				if (!FILES::IS_CONTENT_ITEM_LOCKED(Var8.f_0))
				{
					iVar9 = (129 + iVar6);
					if ((iVar9 / 32) >= *uParam1)
					{
					}
					else if (BitTest((*uParam1)[(iVar9 / 32)], (iVar9 % 32)))
					{
						if (__LIB_2__::func_998(iParam0, &(Var8.f_7), iVar9, Var8.f_2, Var8.f_6, bVar2, bVar3, bParam2, bVar4))
						{
							PED::ADD_PED_DECORATION_FROM_HASHES_IN_CORONA(iParam0, Var8.f_2, Var8.f_3);
							__LIB_0__::func_260(iParam0, Var8.f_2, Var8.f_3);
						}
					}
				}
			}
			iVar6++;
		}
	}
}

int func_1504(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)//Position - 0x7FC39
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
			func_1568(iVar5, iParam1, iParam2, 1);
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
						func_1568(iVar5, 10, 0, 1);
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
									func_1568(iVar5, iVar0, uVar14[iVar0], 1);
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
								func_1504(iParam0, iVar0, uVar14[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (BitTest(Global_78130[1 /*14*/].f_6, 1))
							{
								func_1568(iVar5, iVar0, uVar14[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, iVar0, func_300(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					uVar16 = { __LIB_0__::func_459(iVar5, 0) };
					func_1504(iParam0, iVar0, uVar16[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_1562(iParam0, 11, uVar14[11], iParam6, 0);
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
				func_1568(iVar5, 14, uVar18[iVar1], 1);
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
							func_1504(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_1568(iVar5, iParam1, iParam2, 1);
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			if (BitTest(Global_78130[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HAIR"), 1))
			{
			}
			else if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 1, joaat("HAIR_SHRINK")))
			{
				func_1504(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, iParam1, iParam2, -1) };
			}
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			func_1573(iParam0);
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
						func_1504(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = __LIB_9__::func_528(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_1504(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					iVar27 = func_1559(iVar5, iVar24, iVar23, iVar25);
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
							func_1504(iParam0, 8, iVar29, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_1504(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, iParam1, iParam2, -1) };
								iVar8 = -99;
							}
							else if (iVar30 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								func_1504(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_1504(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_1504(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_1504(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_F_Freemode_01"))
							{
								func_1504(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_1562(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_1559(iVar5, func_300(iParam0, 8, -1), iParam2, func_300(iParam0, 4, -1));
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
				func_1545(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar43 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar43, joaat("GLOVES"), 0))
			{
				iVar44 = __LIB_0__::func_350(iParam0, 11);
				iVar45 = __LIB_0__::func_350(iParam0, 4);
				iVar46 = func_1559(iVar5, iParam2, iVar44, iVar45);
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
			func_1562(iParam0, iParam1, iParam2, iParam6, 0);
			iVar49 = __LIB_0__::func_350(iParam0, 11);
			if (__LIB_0__::func_280(iVar5, iVar49, -1))
			{
				iVar50 = __LIB_0__::func_357(iVar5, iParam2, Global_78130[1 /*14*/].f_4);
				__LIB_6__::func_37(iVar5, iVar50);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_1559(iVar5, iParam2, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
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
						func_1504(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						func_1504(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_1559(iVar5, __LIB_0__::func_350(iParam0, 8), __LIB_0__::func_350(iParam0, 11), iParam2);
			}
			iVar59 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar59, joaat("GLOVES"), 0))
			{
				iVar60 = func_1559(iVar5, iVar58, iVar57, iParam2);
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
						func_1504(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
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
								iVar6 = func_1559(iVar5, iVar3, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = __LIB_9__::func_528(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_1504(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						if (!func_301(iParam0, 9, iVar63))
						{
							func_1504(iParam0, 9, iVar63, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_1504(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
					{
						func_1504(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						func_1504(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("MP_F_Freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar65 = func_300(iParam0, 4, -1);
					iVar66 = iParam2;
				}
				else
				{
					iVar65 = iParam2;
					iVar66 = func_300(iParam0, 11, -1);
				}
				if (__LIB_0__::func_240(iVar5, 11, iVar66, -1))
				{
					if (!__LIB_0__::func_239(iVar5, 4, iVar65, -1))
					{
						if (__LIB_0__::func_353(iVar5, 4, iVar65, &uVar67))
						{
							func_1504(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (__LIB_0__::func_239(iVar5, 4, iVar65, -1))
				{
					if (__LIB_0__::func_352(iVar5, 4, iVar65, &uVar67))
					{
						func_1504(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_1504(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_1504(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_1504(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_1504(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_1504(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_1504(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_1504(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_1504(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				func_1573(iParam0);
				iVar81 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
				iVar82 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
				iVar83 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar81, iVar82);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar83, joaat("FORCE_PROP"), 0))
				{
					iVar3 = __LIB_9__::func_528(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_1504(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = __LIB_9__::func_528(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_1504(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_1505(iParam0, &uVar4))
		{
			func_1504(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_1504(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar8 != -99)
	{
		func_1504(iParam0, 8, iVar8, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_1504(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar10 != -1)
	{
		iVar84 = __LIB_0__::func_282(iVar5, func_300(iParam0, 3, -1), iVar10);
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
				func_1504(iParam0, 3, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_1505(int iParam0, var uParam1)//Position - 0x81AE5
{
	int iVar0;
	int iVar1;
	*uParam1 = func_300(PLAYER::PLAYER_PED_ID(), 2, -1);
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
		if (!func_301(iParam0, iVar1, iVar0))
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

void func_1545(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x8C4E7
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
	func_1470(iParam0, bParam3, 0, -1);
}

int func_1559(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x940DB
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
					iVar0 = func_1559(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
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
					iVar0 = func_1559(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
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

void func_1562(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x97686
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (func_1564(iParam0))
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

int func_1564(int iParam0)//Position - 0x97815
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
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != __LIB_0__::func_162() && __LIB_3__::func_140(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar1 = func_300(iParam0, 11, -1);
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
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != __LIB_0__::func_162() && __LIB_3__::func_140(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar3 = func_300(iParam0, 11, -1);
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

void func_1568(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x97C6E
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
							func_1568(iParam0, __LIB_0__::func_33(iVar4), uVar3, 0);
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
									func_1568(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 3), 1);
								}
								else
								{
									func_1568(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 4), 1);
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
							func_1568(iParam0, 14, iVar8, 0);
						}
						else if (iParam2 >= 75 && iParam2 <= 82)
						{
							iVar8 = (83 + Global_78130[2 /*14*/].f_4);
							func_1568(iParam0, 14, iVar8, 0);
						}
					}
					else if (iParam1 == 8)
					{
						if (iParam2 >= 48 && iParam2 <= 63)
						{
							iVar8 = (64 + Global_78130[2 /*14*/].f_4);
							func_1568(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 64 && iParam2 <= 79)
						{
							iVar8 = (48 + Global_78130[2 /*14*/].f_4);
							func_1568(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 96 && iParam2 <= 111)
						{
							iVar8 = (112 + Global_78130[2 /*14*/].f_4);
							func_1568(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 112 && iParam2 <= 127)
						{
							iVar8 = (96 + Global_78130[2 /*14*/].f_4);
							func_1568(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 176 && iParam2 <= 191)
						{
							iVar8 = (160 + Global_78130[2 /*14*/].f_4);
							func_1568(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 160 && iParam2 <= 175)
						{
							iVar8 = (176 + Global_78130[2 /*14*/].f_4);
							func_1568(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 32 && iParam2 <= 47)
						{
							iVar8 = (0 + Global_78130[2 /*14*/].f_4);
							func_1568(iParam0, 11, iVar8, 0);
						}
						else if (iParam2 >= 224 && iParam2 <= 239)
						{
							iVar8 = (16 + Global_78130[2 /*14*/].f_4);
							func_1568(iParam0, 11, iVar8, 0);
						}
					}
					else if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar8 = (32 + Global_78130[2 /*14*/].f_4);
							func_1568(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 16 && iParam2 <= 31)
						{
							iVar8 = (224 + Global_78130[2 /*14*/].f_4);
							func_1568(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 220 && iParam2 <= 235)
						{
							switch (iParam2)
							{
								case 220:
									func_1568(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_0"), 8, 3), 0);
									func_1568(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_0"), 8, 3), 0);
									break;
								case 221:
									func_1568(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_1"), 8, 3), 0);
									func_1568(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_1"), 8, 3), 0);
									break;
								case 222:
									func_1568(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_2"), 8, 3), 0);
									func_1568(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_2"), 8, 3), 0);
									break;
								case 223:
									func_1568(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_3"), 8, 3), 0);
									func_1568(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_3"), 8, 3), 0);
									break;
								case 224:
									func_1568(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_4"), 8, 3), 0);
									func_1568(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_4"), 8, 3), 0);
									break;
								case 225:
									func_1568(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_5"), 8, 3), 0);
									func_1568(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_5"), 8, 3), 0);
									break;
								case 226:
									func_1568(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_6"), 8, 3), 0);
									func_1568(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_6"), 8, 3), 0);
									break;
								case 227:
									func_1568(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_7"), 8, 3), 0);
									func_1568(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_7"), 8, 3), 0);
									break;
								case 228:
									func_1568(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_8"), 8, 3), 0);
									func_1568(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_8"), 8, 3), 0);
									break;
								case 229:
									func_1568(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_9"), 8, 3), 0);
									func_1568(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_9"), 8, 3), 0);
									break;
								case 230:
									func_1568(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_10"), 8, 3), 0);
									func_1568(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_10"), 8, 3), 0);
									break;
								case 231:
									func_1568(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_11"), 8, 3), 0);
									func_1568(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_11"), 8, 3), 0);
									break;
								case 232:
									func_1568(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_12"), 8, 3), 0);
									func_1568(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_12"), 8, 3), 0);
									break;
								case 233:
									func_1568(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_13"), 8, 3), 0);
									func_1568(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_13"), 8, 3), 0);
									break;
								case 234:
									func_1568(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_14"), 8, 3), 0);
									func_1568(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_14"), 8, 3), 0);
									break;
								case 235:
									func_1568(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_15"), 8, 3), 0);
									func_1568(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_15"), 8, 3), 0);
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
									func_1568(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_0"), 7, 3), 0);
									func_1568(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_0"), 7, 3), 0);
									break;
								case 1:
									func_1568(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_1"), 7, 3), 0);
									func_1568(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_1"), 7, 3), 0);
									break;
								case 2:
									func_1568(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_2"), 7, 3), 0);
									func_1568(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_2"), 7, 3), 0);
									break;
								case 3:
									func_1568(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_3"), 7, 3), 0);
									func_1568(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_3"), 7, 3), 0);
									break;
								case 4:
									func_1568(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_4"), 7, 3), 0);
									func_1568(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_4"), 7, 3), 0);
									break;
								case 5:
									func_1568(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_5"), 7, 3), 0);
									func_1568(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_5"), 7, 3), 0);
									break;
								case 6:
									func_1568(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_6"), 7, 3), 0);
									func_1568(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_6"), 7, 3), 0);
									break;
								case 7:
									func_1568(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_7"), 7, 3), 0);
									func_1568(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_7"), 7, 3), 0);
									break;
								case 8:
									func_1568(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_8"), 7, 3), 0);
									func_1568(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_8"), 7, 3), 0);
									break;
								case 9:
									func_1568(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_9"), 7, 3), 0);
									func_1568(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_9"), 7, 3), 0);
									break;
								case 10:
									func_1568(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_10"), 7, 3), 0);
									func_1568(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_10"), 7, 3), 0);
									break;
								case 11:
									func_1568(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_11"), 7, 3), 0);
									func_1568(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_11"), 7, 3), 0);
									break;
								case 12:
									func_1568(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_12"), 7, 3), 0);
									func_1568(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_12"), 7, 3), 0);
									break;
								case 13:
									func_1568(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_13"), 7, 3), 0);
									func_1568(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_13"), 7, 3), 0);
									break;
								case 14:
									func_1568(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_14"), 7, 3), 0);
									func_1568(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_14"), 7, 3), 0);
									break;
								case 15:
									func_1568(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_15"), 7, 3), 0);
									func_1568(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_15"), 7, 3), 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_78130[2 /*14*/].f_4)
							{
								case 0:
									func_1568(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_0"), 7, 3), 0);
									func_1568(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_0"), 7, 3), 0);
									break;
								case 1:
									func_1568(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_1"), 7, 3), 0);
									func_1568(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_1"), 7, 3), 0);
									break;
								case 2:
									func_1568(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_2"), 7, 3), 0);
									func_1568(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_2"), 7, 3), 0);
									break;
								case 3:
									func_1568(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_3"), 7, 3), 0);
									func_1568(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_3"), 7, 3), 0);
									break;
								case 4:
									func_1568(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_4"), 7, 3), 0);
									func_1568(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_4"), 7, 3), 0);
									break;
								case 5:
									func_1568(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_5"), 7, 3), 0);
									func_1568(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_5"), 7, 3), 0);
									break;
								case 6:
									func_1568(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_6"), 7, 3), 0);
									func_1568(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_6"), 7, 3), 0);
									break;
								case 7:
									func_1568(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_7"), 7, 3), 0);
									func_1568(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_7"), 7, 3), 0);
									break;
								case 8:
									func_1568(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_8"), 7, 3), 0);
									func_1568(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_8"), 7, 3), 0);
									break;
								case 9:
									func_1568(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_9"), 7, 3), 0);
									func_1568(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_9"), 7, 3), 0);
									break;
								case 10:
									func_1568(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_10"), 7, 3), 0);
									func_1568(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_10"), 7, 3), 0);
									break;
								case 11:
									func_1568(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_11"), 7, 3), 0);
									func_1568(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_11"), 7, 3), 0);
									break;
								case 12:
									func_1568(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_12"), 7, 3), 0);
									func_1568(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_12"), 7, 3), 0);
									break;
								case 13:
									func_1568(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_13"), 7, 3), 0);
									func_1568(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_13"), 7, 3), 0);
									break;
								case 14:
									func_1568(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_14"), 7, 3), 0);
									func_1568(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_14"), 7, 3), 0);
									break;
								case 15:
									func_1568(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_15"), 7, 3), 0);
									func_1568(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_15"), 7, 3), 0);
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
							func_1568(iParam0, 8, iVar8, 0);
						}
					}
				}
				Global_78130[2 /*14*/] = { __LIB_6__::func_38(iParam0, iParam1, iParam2, -1) };
				if (iParam1 == 11)
				{
					iVar9 = __LIB_0__::func_358(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_1568(iParam0, 8, iVar9, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203)
					{
						switch (iParam2)
						{
							case 199:
								func_1568(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_0"), 7, 4), 0);
								break;
							case 200:
								func_1568(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_1"), 7, 4), 0);
								break;
							case 201:
								func_1568(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_2"), 7, 4), 0);
								break;
							}
					}
				}
				else if (iParam1 == 8)
				{
					iVar9 = __LIB_0__::func_357(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_1568(iParam0, 11, iVar9, 0);
					}
				}
			}
		}
	}
}

void func_1573(int iParam0)//Position - 0x99371
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
		if (!func_1578(iParam0, &bVar14, iVar9, iVar10, iVar12) || PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
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
		if (!func_1578(iParam0, &bVar14, iVar9, iVar10, iVar12))
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

int func_1578(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x99D3B
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
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAZ_MASK"), 0) && !__LIB_0__::func_348(iVar0, 14, func_300(iParam0, 14, 0), -1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_1584(int iParam0, int iParam1, int iParam2)//Position - 0x9A4F8
{
	struct<37> Var0;
	int iVar1;
	int iVar2;
	Var0 = 12;
	Var0.f_13 = 12;
	Var0.f_26 = 9;
	Var0.f_36 = 9;
	Var0.f_46 = 3;
	iVar1 = -1;
	if (iParam2 == -1)
	{
		iParam2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0);
	}
	iVar2 = 0;
	while (iVar2 < 12)
	{
		Var0[iVar2] = -1;
		Var0.f_13[iVar2] = -1;
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 < Var0.f_26)
	{
		Var0.f_26[iVar2] = -1;
		Var0.f_36[iVar2] = -1;
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 < Var0.f_46)
	{
		Var0.f_46[iVar2] = -1;
		iVar2++;
	}
	if (__LIB_3__::func_376(iParam0, &Var0, iParam1, &iVar1))
	{
		if ((iParam1 == 1 || iParam1 == 4) || iParam1 == 3)
		{
			func_1585(iParam0);
			__LIB_4__::func_984(iParam0, &Var0, iParam2);
		}
		if (iParam1 == 11)
		{
			if (iVar1 != -1)
			{
				if (__LIB_3__::func_336(iVar1) == 22)
				{
					Var0.f_26[2] = -1;
				}
				else if (__LIB_3__::func_336(iVar1) == 8)
				{
					Var0.f_26[1] = -1;
					Var0.f_26[2] = -1;
				}
				else
				{
					Var0.f_26[1] = -1;
					Var0.f_26[2] = -1;
					Var0.f_26[0] = -1;
				}
				if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_F_Freemode_01"))
				{
					if (__LIB_3__::func_343(ENTITY::GET_ENTITY_MODEL(iParam0), 7, func_300(iParam0, 7, -1), -1))
					{
						Var0[7] = 0;
						Var0.f_13[7] = 0;
					}
				}
			}
			__LIB_4__::func_984(iParam0, &Var0, iParam2);
		}
		else if (iParam1 == 3)
		{
			PLAYER::SET_PLAYER_UNDERWATER_BREATH_PERCENT_REMAINING(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0), 100f);
		}
		iVar2 = 0;
		while (iVar2 < 12)
		{
			if (Var0[iVar2] != -1)
			{
				PED::SET_PED_COMPONENT_VARIATION(iParam0, iVar2, Var0[iVar2], Var0.f_13[iVar2], 0);
			}
			iVar2++;
		}
		iVar2 = 0;
		while (iVar2 < Var0.f_26)
		{
			if (Var0.f_26[iVar2] != -1 && Var0.f_26[iVar2] != 255)
			{
				PED::SET_PED_PROP_INDEX(iParam0, iVar2, Var0.f_26[iVar2], Var0.f_36[iVar2], true);
			}
			iVar2++;
		}
	}
}

void func_1585(int iParam0)//Position - 0x9A704
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 77)
	{
		if (__LIB_3__::func_521(iParam0, iVar0, -1))
		{
			if (((((((((iVar0 == 0 || iVar0 == 1) || iVar0 == 3) || iVar0 == 4) || iVar0 == 5) || iVar0 == 6) || iVar0 == 7) || iVar0 == 8) || iVar0 == 10) || iVar0 == 11)
			{
				func_1586(iParam0, iVar0, -1, -1);
			}
		}
		iVar0++;
	}
}

void func_1586(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x9A799
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	if (iParam2 == -1)
	{
		iParam2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0);
	}
	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		Global_78200[iVar1] = -1;
		Global_78200.f_13[iVar1] = -1;
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < Global_78200.f_26)
	{
		Global_78200.f_26[iVar1] = -1;
		Global_78200.f_36[iVar1] = -1;
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < Global_78200.f_46)
	{
		Global_78200.f_46[iVar1] = -1;
		iVar1++;
	}
	bVar2 = false;
	if (__LIB_3__::func_376(iParam0, &Global_78200, iParam1, &iParam3))
	{
		iVar1 = 0;
		while (iVar1 < 12)
		{
			if (Global_78200[iVar1] != -1)
			{
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, iVar1) == Global_78200[iVar1] && PED::GET_PED_TEXTURE_VARIATION(iParam0, iVar1) == Global_78200.f_13[iVar1])
				{
					if (iVar1 == 2)
					{
						bVar0 = true;
					}
					if (iVar1 == 1)
					{
						bVar2 = true;
					}
					PED::SET_PED_COMPONENT_VARIATION(iParam0, iVar1, 0, 0, 0);
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < Global_78200.f_26)
		{
			if (Global_78200.f_26[iVar1] != -1 && Global_78200.f_26[iVar1] != 255)
			{
				if (PED::GET_PED_PROP_INDEX(iParam0, iVar1) == Global_78200.f_26[iVar1] && PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, iVar1) == Global_78200.f_36[iVar1])
				{
					PED::CLEAR_PED_PROP(iParam0, iVar1);
				}
			}
			iVar1++;
		}
		if (bVar0)
		{
			if (!__LIB_0__::func_157(0))
			{
				if (__LIB_1__::func_342(161, -1))
				{
					func_1504(iParam0, 2, __LIB_1__::func_360(2053, Global_78127, 0), 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				else
				{
					func_1504(iParam0, 2, __LIB_1__::func_360(753, Global_78127, 0), 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
		}
		if (iParam1 == 4)
		{
			if (bVar2)
			{
				if (iParam2 != -1 && iParam2 != PLAYER::PLAYER_ID())
				{
					if (NETWORK::NETWORK_HAS_CACHED_PLAYER_HEAD_BLEND_DATA(PLAYER::INT_TO_PLAYERINDEX(iParam2)))
					{
						NETWORK::NETWORK_APPLY_CACHED_PLAYER_HEAD_BLEND_DATA(iParam0, PLAYER::INT_TO_PLAYERINDEX(iParam2));
					}
				}
				else
				{
					__LIB_2__::func_996(iParam0, -1);
				}
			}
			__LIB_1__::func_207(0);
			__LIB_2__::func_467(1, 2);
		}
	}
}

int func_1650(var uParam0, var uParam1)//Position - 0xA62CE
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = __LIB_3__::func_616();
	iVar2 = 0;
	iVar3 = -1;
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		iVar1 = ENTITY::GET_ENTITY_MODEL(iVar2);
	}
	else
	{
		iVar1 = __LIB_3__::func_915();
	}
	__LIB_3__::func_914(&iVar1);
	switch (iVar0)
	{
		case 4:
			switch (iVar1)
			{
				case joaat("avisa"):
					iVar3 = 1;
					if (!__LIB_5__::func_863(uParam1, iVar3))
					{
						return 0;
					}
					break;
				default:
					iVar3 = 2;
					if (!__LIB_5__::func_863(uParam1, iVar3))
					{
						return 0;
					}
					break;
			}
			break;
		case 3:
			switch (iVar1)
			{
				case joaat("seasparrow3"):
					iVar3 = 0;
					if (!__LIB_5__::func_863(uParam1, iVar3))
					{
						return 0;
					}
					break;
				default:
					return 1;
					break;
			}
			break;
		default:
			return 1;
			break;
	}
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && iVar2 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
		{
			func_371(&iVar2, &(uParam1->f_109), 4);
			__LIB_3__::func_633(&(uParam1->f_109));
			ENTITY::SET_ENTITY_COLLISION(uParam1->f_109, false, false);
			ENTITY::SET_ENTITY_INVINCIBLE(uParam1->f_109, true);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_109, uParam1->f_28, false, false, true);
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_109, true);
			VEHICLE::SET_VEHICLE_ENGINE_ON(uParam1->f_109, false, true, false);
			ENTITY::SET_ENTITY_VISIBLE(uParam1->f_109, false, false);
			AUDIO::SET_VEHICLE_RADIO_ENABLED(uParam1->f_109, false);
			__LIB_5__::func_489(uParam1->f_109);
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2))
			{
				AUDIO::SET_VEHICLE_RADIO_ENABLED(iVar2, false);
			}
			if (iVar1 == joaat("stromberg") || iVar1 == joaat("toreador"))
			{
				VEHICLE::SET_VEHICLE_CAN_DEFORM_WHEELS(uParam1->f_109, false);
				VEHICLE::TRANSFORM_TO_SUBMARINE(uParam1->f_109, true);
			}
			return 0;
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
	{
		uParam1->f_109 = VEHICLE::CREATE_VEHICLE(iVar1, uParam1->f_28, 0f, false, false, true);
		__LIB_3__::func_633(&(uParam1->f_109));
		ENTITY::SET_ENTITY_COLLISION(uParam1->f_109, false, false);
		ENTITY::SET_ENTITY_INVINCIBLE(uParam1->f_109, true);
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_109, uParam1->f_28, false, false, true);
		VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_109, true);
		VEHICLE::SET_VEHICLE_ENGINE_ON(uParam1->f_109, false, true, false);
		ENTITY::SET_ENTITY_VISIBLE(uParam1->f_109, false, false);
		AUDIO::SET_VEHICLE_RADIO_ENABLED(uParam1->f_109, false);
		__LIB_5__::func_489(uParam1->f_109);
		return 0;
	}
	if (iVar2 == 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_2))
		{
			func_1455(&(uParam1->f_2), PLAYER::PLAYER_ID(), 1, 0);
			ENTITY::SET_ENTITY_VISIBLE(uParam1->f_2, false, false);
			return 0;
		}
		if (__LIB_0__::func_121(uParam1->f_2) && __LIB_0__::func_121(uParam1->f_109))
		{
			if (__LIB_2__::func_899())
			{
				PED::SET_PED_INTO_VEHICLE(uParam1->f_2, uParam1->f_109, __LIB_3__::func_890());
			}
			else
			{
				PED::SET_PED_INTO_VEHICLE(uParam1->f_2, uParam1->f_109, -1);
			}
		}
	}
	__LIB_5__::func_862(iVar3);
	__LIB_3__::func_900(&(Global_1946250.f_4073), 6000, "Submarine INT enter", uParam1->f_28, uParam1->f_31, uParam1->f_3, uParam1->f_8, 1, 0, 500, 0, 2);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar1);
	return 1;
}

int func_1668(int iParam0, var uParam1)//Position - 0xA6DF1
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	int iVar5;
	if (__LIB_5__::func_236())
	{
		return 1;
	}
	if (__LIB_9__::func_315())
	{
		return 1;
	}
	iVar0 = __LIB_3__::func_616();
	iVar1 = __LIB_5__::func_493();
	Var2 = { __LIB_7__::func_791(iParam0, iVar0) };
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_2))
	{
		if (func_1455(&(uParam1->f_2), PLAYER::PLAYER_ID(), 1, 0))
		{
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_2, __LIB_3__::func_921(iParam0, iVar0, iVar1), false, false, true);
			ENTITY::SET_ENTITY_HEADING(uParam1->f_2, __LIB_7__::func_736(iParam0, iVar0));
			ENTITY::SET_ENTITY_VISIBLE(uParam1->f_2, false, false);
		}
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
	{
		func_371(&iVar1, &(uParam1->f_109), 32);
		__LIB_3__::func_633(&(uParam1->f_109));
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_109, Var2, false, false, true);
		ENTITY::SET_ENTITY_HEADING(uParam1->f_109, __LIB_7__::func_790(iParam0, iVar0));
		VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_109, true);
		ENTITY::SET_ENTITY_COLLISION(uParam1->f_109, true, false);
		ENTITY::SET_ENTITY_VISIBLE(uParam1->f_109, false, false);
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109) && __LIB_0__::func_121(uParam1->f_109))
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(uParam1->f_109, true) };
		Var4 = { ENTITY::GET_ENTITY_ROTATION(uParam1->f_109, 2) };
		iVar5 = __LIB_3__::func_920(iParam0, iVar0);
		__LIB_3__::func_900(&(Global_1946250.f_3638), iVar5, "Submarine enter", Var3, Var4, uParam1->f_3, uParam1->f_8, 1, 0, 0, 0, 2);
		return 1;
	}
	return 0;
}

void func_1766(int iParam0, int iParam1)//Position - 0xABAFF
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5[10];
	struct<3> Var6;
	int iVar7;
	struct<13> Var8;
	iVar4 = -1;
	if (__LIB_8__::func_925(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_1__::func_526())
		{
			iVar4 = __LIB_3__::func_680();
		}
		Var6 = { __LIB_1__::func_694(PLAYER::PLAYER_ID()) };
		iVar3 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar5, -1);
		if (iVar3 > 0)
		{
			iVar2 = 0;
			while (iVar2 < iVar3)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar5[iVar2], false) && PED::IS_PED_A_PLAYER(uVar5[iVar2]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar5[iVar2], true), Var6) <= IntToFloat(__LIB_3__::func_679(iParam0)))
					{
						iVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar5[iVar2]);
						Var8 = { __LIB_1__::func_696(iVar7) };
						if (!bVar0)
						{
							if ((iVar4 != -1 && iVar4 == __LIB_3__::func_106(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if (((!__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(iVar7)) && !__LIB_1__::func_907(iVar7, 1)) && !__LIB_5__::func_424(iVar7)) && !__LIB_3__::func_728(iVar7, 14))
								{
									bVar0 = true;
								}
							}
						}
						if (((((!bVar1 && __LIB_3__::func_360(PLAYER::PLAYER_ID(), iVar7)) && !__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(iVar7))) && !__LIB_1__::func_907(iVar7, 1)) && !__LIB_5__::func_424(iVar7)) && !__LIB_3__::func_728(iVar7, 14))
						{
							bVar1 = true;
						}
						if (!bVar1 && __LIB_3__::func_360(iVar7, PLAYER::PLAYER_ID()))
						{
							bVar1 = true;
						}
					}
					if (bVar1 && bVar0)
					{
					}
					else
					{
						iVar2++;
					}
					if (bVar1)
					{
						__LIB_5__::func_189(iParam1, 1, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 1, 0);
					}
					if (bVar0)
					{
						__LIB_5__::func_189(iParam1, 2, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 2, 0);
					}
					if (((bVar1 || bVar0) && !__LIB_3__::func_779()) && !__LIB_5__::func_241(PLAYER::PLAYER_ID()))
					{
						__LIB_8__::func_963(iParam0, -1);
					}
					if (__LIB_3__::func_661(0, iParam1))
					{
						__LIB_8__::func_963(iParam0, -1);
					}
					else if (__LIB_3__::func_661(1, iParam1))
					{
						if (bVar1)
						{
							__LIB_7__::func_738(1);
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var6, 1, 0, 0, 0, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_1767(iParam0, 0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_7__::func_738(1);
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var6, 0, 0, 1, 0, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_1767(iParam0, 0);
					}
					Jump @652; //curOff = 633
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_1767(int iParam0, bool bParam1)//Position - 0xABD8E
{
	__LIB_8__::func_963(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
	if (bParam1)
	{
		__LIB_5__::func_457(2);
	}
}

void func_1832(var uParam0, int iParam1)//Position - 0xAE387
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 734173/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 734164/*__LIB_0__::func_162*/;
			break;
		case 1:
			uParam0->f_30 = 734097/*__LIB_5__::func_506*/;
			break;
		case 2:
			uParam0->f_31 = 733773/*__LIB_5__::func_505*/;
			break;
		case 3:
			uParam0->f_34 = 733612/*__LIB_4__::func_4*/;
			break;
		case 4:
			uParam0->f_12 = 733600/*__LIB_4__::func_3*/;
			break;
		case 6:
			uParam0->f_32 = 733536/*__LIB_4__::func_2*/;
			break;
		case 11:
			uParam0->f_11 = 733527/*__LIB_0__::func_109*/;
			break;
		case 12:
			uParam0->f_33 = 733191/*__LIB_5__::func_869*/;
			break;
		case 14:
			uParam0->f_11 = 733182/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 732452/*__LIB_5__::func_504*/;
			break;
		case 8:
			uParam0->f_37 = 732444/*__LIB_0__::func_467*/;
			break;
		case 7:
			uParam0->f_36 = 732435/*__LIB_0__::func_114*/;
			break;
		case 79:
			*uParam0 = 732426/*__LIB_0__::func_114*/;
			break;
		case 72:
			uParam0->f_12 = 732414/*__LIB_3__::func_999*/;
			break;
		case 13:
			uParam0->f_2 = 732405/*__LIB_0__::func_109*/;
			break;
		case 15:
			uParam0->f_2 = 732326/*__LIB_9__::func_787*/;
			break;
		case 16:
			uParam0->f_5 = 731982/*__LIB_6__::func_950*/;
			break;
		case 108:
			uParam0->f_55 = 731973/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 731465/*__LIB_6__::func_949*/;
			break;
		case 19:
			uParam0->f_17 = 731412/*__LIB_6__::func_948*/;
			break;
		case 18:
			uParam0->f_8 = 731324/*__LIB_5__::func_502*/;
			break;
		case 20:
			uParam0->f_3 = 731304/*__LIB_5__::func_251*/;
			break;
		case 21:
			uParam0->f_3 = 731277/*__LIB_3__::func_997*/;
			break;
		case 74:
			uParam0->f_53 = 731255/*__LIB_3__::func_996*/;
			break;
		case 75:
			uParam0->f_4 = 731246/*__LIB_0__::func_114*/;
			break;
		case 22:
			uParam0->f_24 = 731144/*__LIB_5__::func_501*/;
			break;
		case 23:
			uParam0->f_26 = 731136/*__LIB_0__::func_467*/;
			break;
		case 26:
			uParam0->f_38 = 731128/*__LIB_0__::func_467*/;
			break;
		case 25:
			uParam0->f_23 = 730367/*func_1913*/;
			break;
		case 27:
			uParam0->f_25 = 730359/*__LIB_0__::func_467*/;
			break;
		case 28:
			uParam0->f_24 = 730351/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 730240/*__LIB_5__::func_250*/;
			break;
		case 31:
			uParam0->f_39 = 730193/*__LIB_3__::func_994*/;
			break;
		case 33:
			uParam0->f_40 = 730124/*__LIB_6__::func_880*/;
			break;
		case 76:
			uParam0->f_13 = 730101/*__LIB_3__::func_993*/;
			break;
		case 34:
			uParam0->f_41 = 726028/*__LIB_5__::func_868*/;
			break;
		case 36:
			uParam0->f_58 = 725971/*__LIB_3__::func_991*/;
			break;
		case 35:
			uParam0->f_42 = 719751/*__LIB_5__::func_966*/;
			break;
		case 45:
			uParam0->f_14 = 719742/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 719733/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 719725/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 719714/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 719610/*__LIB_3__::func_983*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 718543/*__LIB_7__::func_839*/;
			break;
		case 49:
			uParam0->f_8 = 718534/*__LIB_0__::func_114*/;
			break;
		case 50:
			*uParam0 = 718137/*__LIB_7__::func_742*/;
			break;
		case 51:
			*uParam0 = 718128/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 718118/*__LIB_3__::func_980*/;
			break;
		case 53:
			uParam0->f_13 = 718095/*__LIB_3__::func_979*/;
			break;
		case 54:
			uParam0->f_45 = 717601/*__LIB_5__::func_867*/;
			break;
		case 56:
			uParam0->f_46 = 717592/*__LIB_3__::func_969*/;
			break;
		case 57:
			uParam0->f_11 = 717583/*__LIB_1__::func_804*/;
			break;
		case 58:
			uParam0->f_13 = 717541/*__LIB_3__::func_978*/;
			break;
		case 59:
			*uParam0 = 717532/*__LIB_0__::func_114*/;
			break;
		case 60:
			*uParam0 = 717523/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 717512/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 717501/*__LIB_3__::func_554*/;
			break;
		case 63:
			uParam0->f_11 = 717492/*__LIB_1__::func_804*/;
			break;
		case 64:
			uParam0->f_47 = 717484/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 717476/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 717166/*__LIB_5__::func_246*/;
			break;
		case 67:
			uParam0->f_21 = 717096/*__LIB_3__::func_757*/;
			break;
		case 68:
			*uParam0 = 716407/*__LIB_5__::func_215*/;
			break;
		case 69:
			*uParam0 = 716398/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 716386/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 716377/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 716365/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 716356/*__LIB_0__::func_114*/;
			break;
		case 84:
			uParam0->f_1 = 716347/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 716338/*__LIB_0__::func_109*/;
			break;
		case 87:
			uParam0->f_1 = 716329/*__LIB_0__::func_109*/;
			break;
		case 88:
			uParam0->f_1 = 716320/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 716312/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 716287/*__LIB_3__::func_977*/;
			break;
		case 97:
			uParam0->f_1 = 716178/*__LIB_3__::func_976*/;
			break;
		case 98:
			uParam0->f_1 = 715467/*func_1842*/;
			break;
		case 100:
			uParam0->f_22 = 715305/*__LIB_4__::func_315*/;
			break;
		case 101:
			uParam0->f_22 = 715178/*__LIB_7__::func_877*/;
			break;
		case 112:
			uParam0->f_13 = 715166/*__LIB_5__::func_214*/;
			break;
		case 113:
			uParam0->f_3 = 715157/*__LIB_0__::func_114*/;
			break;
		case 114:
			uParam0->f_16 = 328426/*__LIB_5__::func_451*/;
			break;
		case 115:
			uParam0->f_3 = 715148/*__LIB_0__::func_114*/;
			break;
		case 116:
			*uParam0 = 715139/*__LIB_0__::func_114*/;
			break;
		case 117:
			uParam0->f_16 = 382391/*__LIB_3__::func_800*/;
			break;
		case 78:
			uParam0->f_59 = 715131/*__LIB_0__::func_467*/;
			break;
		case 124:
			uParam0->f_1 = 715122/*__LIB_0__::func_109*/;
			break;
		case 125:
			uParam0->f_19 = 715114/*__LIB_0__::func_467*/;
			break;
	}
}

int func_1842(var uParam0, var uParam1)//Position - 0xAEACB
{
	struct<3> Var0;
	struct<3> Var1;
	char* sVar2;
	int iVar3;
	Var0 = { 1569.249f, 248.978f, -46.378f };
	Var1 = { 0f, 0f, 146.98f };
	sVar2 = "mini@strip_club@throwout_d@";
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[0]))
	{
		uParam1->f_140[0] = PED::CREATE_PED(4, joaat("S_M_Y_ClubBar_01"), Var0 + Vector(-10f, 0f, 0f), 0f, false, true);
		PED::SET_PED_DEFAULT_COMPONENT_VARIATION(uParam1->f_140[0]);
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[0], true);
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[1]))
	{
		uParam1->f_140[1] = PED::CREATE_PED(4, joaat("S_M_M_Bouncer_01"), Var0 + Vector(-10f, 0f, 0f), 0f, false, true);
		PED::SET_PED_DEFAULT_COMPONENT_VARIATION(uParam1->f_140[1]);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 0, 0, 2, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 2, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 3, 1, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 4, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 11, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 8, 1, 0, 0);
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[1], true);
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[2]))
	{
		func_1455(&(uParam1->f_140[2]), PLAYER::PLAYER_ID(), 1, 0);
		ENTITY::SET_ENTITY_COORDS(uParam1->f_140[2], Var0 + Vector(-10f, 0f, 0f), false, false, false, true);
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[2], true);
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		if (__LIB_0__::func_121(uParam1->f_140[iVar3]))
		{
			if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(uParam1->f_140[iVar3]))
			{
				return 0;
			}
		}
		iVar3++;
	}
	MISC::SET_BIT(&(Global_1946250.f_2), 20);
	Var0 = { Var0 + Vector(0f, 4f, 0f) };
	__LIB_3__::func_900(&(Global_1946250.f_4073), 5000, "Club Tout", Var0, Var1, sVar2, "throwout_d_cam", 0, 0, 0, 0, 2);
	NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(PLAYER::PLAYER_PED_ID(), true, true);
	__LIB_1__::func_376(PLAYER::PLAYER_ID(), 0, 262144, 0);
	uParam1->f_27 = PED::CREATE_SYNCHRONIZED_SCENE(Var0, Var1, 2);
	if (__LIB_0__::func_121(uParam1->f_140[0]))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[0], false);
		TASK::TASK_SYNCHRONIZED_SCENE(uParam1->f_140[0], uParam1->f_27, sVar2, "throwout_d_bouncer_a", 1000f, -2f, 0, 0, 1000f, 0);
	}
	if (__LIB_0__::func_121(uParam1->f_140[1]))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[1], false);
		TASK::TASK_SYNCHRONIZED_SCENE(uParam1->f_140[1], uParam1->f_27, sVar2, "throwout_d_bouncer_b", 1000f, -2f, 0, 0, 1000f, 0);
	}
	if (__LIB_0__::func_121(uParam1->f_140[2]))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[2], false);
		TASK::TASK_SYNCHRONIZED_SCENE(uParam1->f_140[2], uParam1->f_27, sVar2, "throwout_d_victim", 1000f, -2f, 0, 0, 1000f, 0);
	}
	return 1;
}

void func_1913(int iParam0, int iParam1)//Position - 0xB24FF
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5[10];
	struct<3> Var6;
	int iVar7;
	struct<13> Var8;
	iVar4 = -1;
	if (__LIB_5__::func_251(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_1__::func_526())
		{
			iVar4 = __LIB_3__::func_680();
		}
		Var6 = { __LIB_3__::func_995(iParam0) };
		iVar3 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar5, -1);
		if (iVar3 > 0)
		{
			iVar2 = 0;
			while (iVar2 < iVar3)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar5[iVar2], false) && PED::IS_PED_A_PLAYER(uVar5[iVar2]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar5[iVar2], true), Var6) <= IntToFloat(__LIB_3__::func_679(iParam0)))
					{
						iVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar5[iVar2]);
						Var8 = { __LIB_1__::func_696(iVar7) };
						if (!bVar0)
						{
							if ((iVar4 != -1 && iVar4 == __LIB_3__::func_106(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if (((((!__LIB_1__::func_907(iVar7, 1) && !__LIB_5__::func_424(iVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar5[iVar2], true)) && !__LIB_1__::func_101(PLAYER::PLAYER_PED_ID())) && !__LIB_3__::func_728(iVar7, 14)) && !func_597(iVar7))
								{
									bVar0 = true;
								}
							}
						}
						if ((((((!bVar1 && __LIB_3__::func_360(PLAYER::PLAYER_ID(), iVar7)) && !__LIB_5__::func_424(iVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar5[iVar2], true)) && !__LIB_1__::func_101(PLAYER::PLAYER_PED_ID())) && !__LIB_3__::func_728(iVar7, 14)) && !func_597(iVar7))
						{
							bVar1 = true;
						}
					}
					if (bVar1 && bVar0)
					{
					}
					else
					{
						iVar2++;
					}
					if (bVar1)
					{
						__LIB_5__::func_189(iParam1, 1, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 1, 0);
					}
					if (bVar0)
					{
						__LIB_5__::func_189(iParam1, 2, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 2, 0);
					}
					if (__LIB_3__::func_661(0, iParam1))
					{
						__LIB_6__::func_880(iParam0, -1);
						MISC::SET_BIT(&(iParam1->f_2), 5);
					}
					else if (__LIB_3__::func_661(1, iParam1))
					{
						if (bVar1)
						{
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 1, 0, 0, 0, -1, -1, -1);
						}
						__LIB_7__::func_792(iParam0);
						MISC::SET_BIT(&(iParam1->f_2), 5);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 0, 0, 1, 0, -1, -1, -1);
						}
						__LIB_7__::func_792(iParam0);
						MISC::SET_BIT(&(iParam1->f_2), 5);
					}
					else if ((!bVar1 && !bVar0) && !func_1914())
					{
						MISC::SET_BIT(&(iParam1->f_2), 5);
						MISC::SET_BIT(&(iParam1->f_2), 6);
					}
					Jump @651; //curOff = 632
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
bool func_1914()//Position - 0xB278D
{
	return BitTest(Global_1946250.f_3, 2);
}

void func_1955(var uParam0, int iParam1)//Position - 0xB33E6
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 742476/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 742467/*__LIB_0__::func_162*/;
			break;
		case 1:
			uParam0->f_30 = 742396/*__LIB_5__::func_511*/;
			break;
		case 2:
			uParam0->f_31 = 742160/*__LIB_5__::func_510*/;
			break;
		case 3:
			uParam0->f_34 = 742109/*__LIB_4__::func_25*/;
			break;
		case 4:
			uParam0->f_12 = 742097/*__LIB_4__::func_24*/;
			break;
		case 6:
			uParam0->f_32 = 742033/*__LIB_4__::func_23*/;
			break;
		case 11:
			uParam0->f_11 = 742024/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 741584/*__LIB_5__::func_509*/;
			break;
		case 14:
			uParam0->f_11 = 741575/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 740907/*__LIB_5__::func_508*/;
			break;
		case 8:
			uParam0->f_37 = 740899/*__LIB_0__::func_467*/;
			break;
		case 7:
			uParam0->f_36 = 740890/*__LIB_0__::func_114*/;
			break;
		case 79:
			*uParam0 = 740881/*__LIB_0__::func_114*/;
			break;
		case 13:
			uParam0->f_2 = 740819/*__LIB_9__::func_783*/;
			break;
		case 15:
			uParam0->f_2 = 740739/*__LIB_9__::func_788*/;
			break;
		case 16:
			uParam0->f_5 = 740370/*__LIB_6__::func_952*/;
			break;
		case 108:
			uParam0->f_55 = 740361/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 740350/*__LIB_3__::func_860*/;
			break;
		case 19:
			uParam0->f_17 = 740339/*__LIB_3__::func_860*/;
			break;
		case 20:
			uParam0->f_3 = 740330/*__LIB_0__::func_114*/;
			break;
		case 21:
			uParam0->f_3 = 740321/*__LIB_0__::func_114*/;
			break;
		case 74:
			uParam0->f_53 = 740299/*__LIB_4__::func_18*/;
			break;
		case 75:
			uParam0->f_4 = 740290/*__LIB_0__::func_114*/;
			break;
		case 22:
			uParam0->f_24 = 740278/*__LIB_4__::func_17*/;
			break;
		case 23:
			uParam0->f_26 = 740270/*__LIB_0__::func_467*/;
			break;
		case 26:
			uParam0->f_38 = 740262/*__LIB_0__::func_467*/;
			break;
		case 25:
			uParam0->f_23 = 740254/*__LIB_0__::func_467*/;
			break;
		case 27:
			uParam0->f_25 = 740246/*__LIB_0__::func_467*/;
			break;
		case 28:
			uParam0->f_24 = 740238/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 740203/*__LIB_5__::func_226*/;
			break;
		case 31:
			uParam0->f_39 = 740175/*__LIB_3__::func_775*/;
			break;
		case 33:
			uParam0->f_40 = 740105/*__LIB_6__::func_881*/;
			break;
		case 76:
			uParam0->f_13 = 740082/*__LIB_4__::func_16*/;
			break;
		case 34:
			uParam0->f_41 = 739986/*__LIB_4__::func_15*/;
			break;
		case 36:
			uParam0->f_58 = 739941/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 737428/*__LIB_5__::func_507*/;
			break;
		case 45:
			uParam0->f_14 = 737419/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 737410/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 737402/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 737391/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 737351/*__LIB_4__::func_13*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 737241/*__LIB_5__::func_802*/;
			break;
		case 49:
			uParam0->f_8 = 737232/*__LIB_0__::func_114*/;
			break;
		case 50:
			*uParam0 = 737029/*__LIB_6__::func_951*/;
			break;
		case 51:
			*uParam0 = 737020/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 737009/*__LIB_4__::func_12*/;
			break;
		case 53:
			uParam0->f_13 = 736986/*__LIB_4__::func_11*/;
			break;
		case 54:
			uParam0->f_45 = 736978/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 736969/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 736956/*__LIB_4__::func_10*/;
			break;
		case 58:
			uParam0->f_13 = 736914/*__LIB_4__::func_9*/;
			break;
		case 59:
			*uParam0 = 736905/*__LIB_0__::func_114*/;
			break;
		case 60:
			*uParam0 = 736896/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 736885/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 736874/*__LIB_3__::func_554*/;
			break;
		case 63:
			uParam0->f_11 = 736865/*__LIB_1__::func_804*/;
			break;
		case 64:
			uParam0->f_47 = 736857/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 736849/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 736616/*__LIB_4__::func_8*/;
			break;
		case 67:
			uParam0->f_21 = 736546/*__LIB_3__::func_757*/;
			break;
		case 68:
			*uParam0 = 735857/*__LIB_5__::func_215*/;
			break;
		case 69:
			*uParam0 = 735848/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 735836/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 735827/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 735815/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 735806/*__LIB_0__::func_114*/;
			break;
		case 84:
			uParam0->f_1 = 735797/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 735788/*__LIB_0__::func_109*/;
			break;
		case 87:
			uParam0->f_1 = 735779/*__LIB_0__::func_109*/;
			break;
		case 88:
			uParam0->f_1 = 735770/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 735762/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 735753/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 735744/*__LIB_0__::func_109*/;
			break;
		case 98:
			uParam0->f_1 = 735735/*__LIB_0__::func_109*/;
			break;
		case 100:
			uParam0->f_22 = 735727/*__LIB_0__::func_467*/;
			break;
		case 101:
			uParam0->f_22 = 735719/*__LIB_0__::func_467*/;
			break;
		case 112:
			uParam0->f_13 = 735707/*__LIB_5__::func_214*/;
			break;
		case 113:
			uParam0->f_3 = 735698/*__LIB_0__::func_114*/;
			break;
		case 114:
			uParam0->f_16 = 328426/*__LIB_5__::func_451*/;
			break;
		case 115:
			uParam0->f_3 = 735689/*__LIB_0__::func_114*/;
			break;
		case 116:
			*uParam0 = 735680/*__LIB_0__::func_114*/;
			break;
		case 117:
			uParam0->f_16 = 382391/*__LIB_3__::func_800*/;
			break;
		case 78:
			uParam0->f_59 = 735672/*__LIB_0__::func_467*/;
			break;
		case 124:
			uParam0->f_1 = 735663/*__LIB_0__::func_109*/;
			break;
		case 125:
			uParam0->f_19 = 735655/*__LIB_0__::func_467*/;
			break;
	}
}

void func_2049(var uParam0, int iParam1)//Position - 0xB5455
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 821732/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 821718/*__LIB_5__::func_530*/;
			break;
		case 1:
			uParam0->f_30 = 821562/*__LIB_5__::func_529*/;
			break;
		case 2:
			uParam0->f_31 = 821086/*__LIB_5__::func_528*/;
			break;
		case 3:
			uParam0->f_34 = 820887/*__LIB_4__::func_98*/;
			break;
		case 4:
			uParam0->f_12 = 820765/*__LIB_4__::func_97*/;
			break;
		case 5:
			uParam0->f_11 = 820755/*__LIB_4__::func_96*/;
			break;
		case 37:
			uParam0->f_18 = 820618/*__LIB_4__::func_95*/;
			break;
		case 38:
			uParam0->f_9 = 820574/*__LIB_7__::func_743*/;
			break;
		case 42:
			uParam0->f_10 = 820490/*__LIB_7__::func_797*/;
			break;
		case 6:
			uParam0->f_32 = 820396/*__LIB_4__::func_94*/;
			break;
		case 11:
			uParam0->f_11 = 820387/*__LIB_1__::func_804*/;
			break;
		case 12:
			uParam0->f_33 = 819209/*__LIB_9__::func_526*/;
			break;
		case 14:
			uParam0->f_11 = 819196/*__LIB_0__::func_114*/;
			break;
		case 109:
			uParam0->f_56 = 812734/*__LIB_5__::func_731*/;
			break;
		case 8:
			uParam0->f_37 = 812434/*__LIB_4__::func_92*/;
			break;
		case 7:
			uParam0->f_36 = 812377/*__LIB_4__::func_91*/;
			break;
		case 79:
			*uParam0 = 812133/*__LIB_5__::func_527*/;
			break;
		case 13:
			uParam0->f_2 = 812071/*__LIB_9__::func_783*/;
			break;
		case 15:
			uParam0->f_2 = 811991/*__LIB_9__::func_789*/;
			break;
		case 16:
			uParam0->f_5 = 811271/*__LIB_9__::func_270*/;
			break;
		case 108:
			uParam0->f_55 = 808080/*__LIB_10__::func_69*/;
			break;
		case 17:
			uParam0->f_17 = 805775/*__LIB_9__::func_269*/;
			break;
		case 19:
			uParam0->f_17 = 805749/*__LIB_5__::func_971*/;
			break;
		case 20:
			uParam0->f_3 = 805573/*__LIB_6__::func_885*/;
			break;
		case 21:
			uParam0->f_3 = 805509/*__LIB_6__::func_867*/;
			break;
		case 74:
			uParam0->f_53 = 805405/*__LIB_5__::func_209*/;
			break;
		case 75:
			uParam0->f_4 = 805389/*__LIB_5__::func_526*/;
			break;
		case 22:
			uParam0->f_24 = 805286/*__LIB_5__::func_525*/;
			break;
		case 23:
			uParam0->f_26 = 805239/*__LIB_4__::func_89*/;
			break;
		case 24:
			uParam0->f_26 = 805202/*__LIB_4__::func_88*/;
			break;
		case 26:
			uParam0->f_38 = 803159/*func_2239*/;
			break;
		case 25:
			uParam0->f_23 = 802837/*func_2237*/;
			break;
		case 30:
			uParam0->f_8 = 801978/*func_2235*/;
			break;
		case 31:
			uParam0->f_39 = 801844/*__LIB_5__::func_257*/;
			break;
		case 33:
			uParam0->f_40 = 801272/*__LIB_6__::func_884*/;
			break;
		case 32:
			*uParam0 = 800987/*__LIB_7__::func_15*/;
			break;
		case 34:
			uParam0->f_41 = 798501/*__LIB_5__::func_872*/;
			break;
		case 36:
			uParam0->f_58 = 798444/*__LIB_4__::func_85*/;
			break;
		case 35:
			uParam0->f_42 = 771446/*__LIB_5__::func_524*/;
			break;
		case 45:
			uParam0->f_14 = 771437/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 771428/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 771420/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 771397/*__LIB_4__::func_82*/;
			break;
		case 47:
			uParam0->f_43 = 771325/*__LIB_5__::func_523*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 771197/*__LIB_5__::func_871*/;
			break;
		case 49:
			uParam0->f_8 = 771171/*__LIB_4__::func_80*/;
			break;
		case 50:
			*uParam0 = 770484/*__LIB_7__::func_841*/;
			break;
		case 51:
			*uParam0 = 770214/*__LIB_6__::func_955*/;
			break;
		case 52:
			uParam0->f_15 = 770203/*__LIB_4__::func_76*/;
			break;
		case 53:
			uParam0->f_13 = 770031/*__LIB_4__::func_75*/;
			break;
		case 54:
			uParam0->f_45 = 769507/*func_2198*/;
			break;
		case 56:
			uParam0->f_46 = 769489/*__LIB_3__::func_763*/;
			break;
		case 57:
			uParam0->f_11 = 769237/*__LIB_7__::func_14*/;
			break;
		case 58:
			uParam0->f_13 = 769075/*__LIB_4__::func_73*/;
			break;
		case 59:
			*uParam0 = 768579/*__LIB_7__::func_13*/;
			break;
		case 60:
			*uParam0 = 768564/*__LIB_6__::func_883*/;
			break;
		case 61:
			uParam0->f_15 = 768553/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 768391/*__LIB_4__::func_69*/;
			break;
		case 55:
			uParam0->f_45 = 768212/*__LIB_6__::func_882*/;
			break;
		case 63:
			uParam0->f_11 = 768185/*__LIB_7__::func_840*/;
			break;
		case 64:
			uParam0->f_47 = 766650/*__LIB_5__::func_970*/;
			break;
		case 65:
			uParam0->f_21 = 765263/*__LIB_7__::func_55*/;
			break;
		case 66:
			uParam0->f_21 = 764904/*__LIB_5__::func_254*/;
			break;
		case 67:
			uParam0->f_21 = 764790/*__LIB_4__::func_64*/;
			break;
		case 68:
			*uParam0 = 763830/*__LIB_6__::func_954*/;
			break;
		case 69:
			*uParam0 = 763821/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 763809/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 763265/*__LIB_4__::func_62*/;
			break;
		case 107:
			uParam0->f_50 = 763253/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 763065/*__LIB_5__::func_870*/;
			break;
		case 84:
			uParam0->f_1 = 763056/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 761470/*func_2158*/;
			break;
		case 87:
			uParam0->f_1 = 759954/*__LIB_6__::func_418*/;
			break;
		case 88:
			uParam0->f_1 = 759945/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 759937/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 759907/*__LIB_5__::func_519*/;
			break;
		case 97:
			uParam0->f_1 = 759462/*__LIB_5__::func_518*/;
			break;
		case 98:
			uParam0->f_1 = 753655/*__LIB_8__::func_985*/;
			break;
		case 100:
			uParam0->f_22 = 745130/*__LIB_7__::func_871*/;
			break;
		case 101:
			uParam0->f_22 = 744208/*__LIB_8__::func_984*/;
			break;
		case 112:
			uParam0->f_13 = 744197/*__LIB_3__::func_554*/;
			break;
		case 113:
			uParam0->f_3 = 744188/*__LIB_0__::func_114*/;
			break;
		case 114:
			uParam0->f_16 = 744179/*__LIB_0__::func_114*/;
			break;
		case 117:
			uParam0->f_16 = 744170/*__LIB_0__::func_114*/;
			break;
		case 78:
			uParam0->f_59 = 743998/*__LIB_7__::func_783*/;
			break;
		case 76:
			uParam0->f_13 = 743975/*__LIB_4__::func_29*/;
			break;
	}
}

int func_2158(int iParam0, var uParam1)//Position - 0xB9E7E
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	struct<3> Var7;
	struct<3> Var8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	bool bVar13;
	bool bVar14;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
		{
			func_371(&iVar0, &(uParam1->f_109), 60);
			__LIB_3__::func_633(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_282(&iVar0, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 1, 0, 1))
		{
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
		}
		else
		{
			return 0;
		}
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(uParam1->f_109), &(uParam1->f_189[0 /*3*/]), &(uParam1->f_189[1 /*3*/]));
		__LIB_4__::func_61(iParam0, &Var1, &Var3, &uVar9, 1);
		__LIB_4__::func_61(iParam0, &Var2, &Var4, &uVar10, 0);
		__LIB_4__::func_60(iParam0, &Var5, &Var7, &uVar11, 1);
		__LIB_4__::func_60(iParam0, &Var6, &Var8, &uVar12, 0);
		bVar13 = VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar0));
		bVar14 = !(uParam1->f_189[1 /*3*/].f_1 - uParam1->f_189[0 /*3*/].f_1) > 7f;
		if (bVar13)
		{
			MISC::SET_BIT(&(uParam1->f_188), 1);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_188), 1);
		}
		__LIB_6__::func_820(&(Global_1946250.f_3638), Var1, Var3, uVar9, Var2, Var4, uVar10, bVar13, Var5, Var7, uVar11, Var6, Var8, uVar12, bVar14, 1056964608, 1036831949);
	}
	return 1;
}

void func_2198(int iParam0, var uParam1, int* iParam2, var uParam3, var uParam4)//Position - 0xBBDE3
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	int iVar4;
	struct<3> Var5;
	int iVar6;
	bVar0 = false;
	if (!__LIB_4__::func_70(PLAYER::PLAYER_ID(), __LIB_4__::func_71(iParam0)) && !__LIB_4__::func_70(__LIB_0__::func_797(), __LIB_4__::func_71(iParam0)))
	{
		iVar2 = 0;
		while (iVar2 < 32)
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
			if (__LIB_1__::func_693(iVar1, 1, 1) && iVar1 != PLAYER::PLAYER_ID())
			{
				if (__LIB_4__::func_70(iVar1, __LIB_4__::func_71(iParam0)) && __LIB_5__::func_773(iVar1))
				{
					Var3 = { __LIB_1__::func_696(iVar1) };
					if (__LIB_0__::func_800(Var3))
					{
						if (NETWORK::NETWORK_IS_FRIEND(&Var3))
						{
							iVar4 = joaat("ARC_FRIEND");
							if (iVar4 != *uParam4)
							{
								*uParam4 = iVar4;
								HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, "ARC_FRIEND" /* GXT: Friend's Arcade */);
							}
							bVar0 = true;
						}
						else
						{
							iVar2++;
						}
						if (!bVar0 && *uParam4 == joaat("ARC_FRIEND"))
						{
							*uParam4 = joaat("BLIP_740");
							HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, "BLIP_740" /* GXT: Arcade */);
						}
						if (HUD::DOES_BLIP_EXIST(*uParam1) && __LIB_5__::func_781(iParam0))
						{
							if (!HUD::DOES_BLIP_EXIST(*iParam2))
							{
								Var5 = { __LIB_4__::func_75(iParam0) };
								iVar6 = __LIB_4__::func_74(iParam0);
								*iParam2 = __LIB_0__::func_488(Var5, 0);
								HUD::SET_BLIP_SPRITE(*iParam2, iVar6);
								HUD::SET_BLIP_SCALE(*iParam2, 1f);
								HUD::SET_BLIP_PRIORITY(*iParam2, 7);
								func_2199(iParam2, 18);
								HUD::SET_BLIP_AS_SHORT_RANGE(*iParam2, false);
								HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam2, "BASE_HEIST_BLIP" /* GXT: The Doomsday Heist */);
								HUD::SET_BLIP_HIDDEN_ON_LEGEND(*iParam2, true);
							}
						}
						else if (HUD::DOES_BLIP_EXIST(*iParam2))
						{
							HUD::REMOVE_BLIP(iParam2);
						}
					}
void func_2199(var uParam0, int iParam1)//Position - 0xBBF5C
{
	int iVar0;
	if (HUD::DOES_BLIP_EXIST(*uParam0))
	{
		iVar0 = __LIB_1__::func_389(iParam1);
		HUD::SET_BLIP_COLOUR(*uParam0, iVar0);
	}
}

int func_2235(int iParam0, var uParam1)//Position - 0xC3CBA
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<2> Var4;
	int iVar5;
	iVar0 = PLAYER::PLAYER_ID();
	if (BitTest(Global_1946250.f_6, 24) || BitTest(Global_1946250.f_6, 25))
	{
		return 0;
	}
	if (!__LIB_0__::func_983())
	{
		if (__LIB_1__::func_2())
		{
			return 1;
		}
	}
	if (__LIB_3__::func_675())
	{
		return 0;
	}
	if (Global_1946250.f_506 == 0)
	{
		return 1;
	}
	if (BitTest(Global_1946250.f_506, 3))
	{
		if (!__LIB_0__::func_983())
		{
			return 1;
		}
		return 0;
	}
	if (!BitTest(Global_1946250.f_4523, 16))
	{
		if (Global_2714762.f_15 > -1)
		{
			return 0;
		}
	}
	if (!BitTest(Global_1946250.f_506, 30))
	{
		iVar0 = Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9;
	}
	if (!BitTest(Global_1946250.f_506, 30))
	{
		if (!__LIB_1__::func_693(iVar0, 0, 1))
		{
			MISC::SET_BIT(&(Global_1946250.f_506), 1);
			return 1;
		}
		if (iParam0 != __LIB_4__::func_937(iVar0))
		{
			MISC::SET_BIT(&Global_1946250, 18);
			return 1;
		}
	}
	if (__LIB_2__::func_72(PLAYER::PLAYER_ID(), 1))
	{
		if ((__LIB_1__::func_907(PLAYER::PLAYER_ID(), 1) && __LIB_4__::func_897(PLAYER::PLAYER_ID())) && Global_2667225.f_2879 == -1)
		{
			if (__LIB_5__::func_185(PLAYER::PLAYER_ID()) == 158)
			{
				Var4 = 8;
				Var4.f_1.f_1 = -1;
				Var4.f_1.f_2.f_1 = -1;
				Var4.f_1.f_2.f_2.f_1 = -1;
				Var4.f_1.f_2.f_2.f_2.f_1 = -1;
				Var4.f_1.f_2.f_2.f_2.f_2.f_1 = -1;
				Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
				Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
				Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = -1;
				func_2236(21, __LIB_0__::func_797(), &Var4);
				iVar1 = 0;
				while (iVar1 < 8)
				{
					if (__LIB_3__::func_487(Var4[iVar1 /*2*/]))
					{
						iVar5 = __LIB_5__::func_194(Var4[iVar1 /*2*/]);
						iVar3++;
						if (iVar5 == 0)
						{
							iVar2++;
						}
					}
					iVar1++;
				}
				if (iVar2 == iVar3)
				{
					Global_1946250.f_3377 = 2;
					return 1;
				}
				else if (iVar2 > 0)
				{
					if (CAM::IS_SCREEN_FADED_IN())
					{
						if (!__LIB_0__::func_864(&(Global_1946250.f_4724)))
						{
							__LIB_0__::func_795(&(Global_1946250.f_4724), 0, 0);
						}
						else if (__LIB_0__::func_937(&(Global_1946250.f_4724), 5000, 0))
						{
							__LIB_0__::func_794(&(Global_1946250.f_4724));
							return 1;
						}
					}
				}
				else
				{
					__LIB_0__::func_794(&(Global_1946250.f_4724));
				}
			}
			else
			{
				return 1;
			}
		}
		else
		{
			__LIB_0__::func_794(&(Global_1946250.f_4724));
		}
	}
	else
	{
		__LIB_0__::func_794(&(Global_1946250.f_4724));
	}
	return 0;
}

void func_2236(int iParam0, int iParam1, var uParam2)//Position - 0xC3F22
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	Var2.f_1 = -1;
	Var2.f_0 = __LIB_0__::func_162();
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		*(uParam2[iVar0 /*2*/]) = { Var2 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 64)
	{
		if ((Global_2681762.f_199.f_1[iVar0 /*15*/].f_1.f_1 != -1 && Global_2681762.f_199.f_1[iVar0 /*15*/].f_3 == iParam0) && (iParam1 == __LIB_0__::func_162() || iParam1 == Global_2681762.f_199.f_1[iVar0 /*15*/].f_1))
		{
			iVar1 = 0;
			while (iVar1 < *uParam2)
			{
				if (*uParam2)[iVar1 /*2*/] == __LIB_0__::func_162()
				{
					*(uParam2[iVar1 /*2*/]) = { Global_2681762.f_199.f_1[iVar0 /*15*/].f_1 };
					if (iVar1 + 1 == *uParam2)
					{
						return;
					}
					Jump @231; //curOff = 201
				}
				else if (iVar1 + 1 == *uParam2)
				{
					return;
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_2237(int iParam0, int iParam1)//Position - 0xC4015
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	Var2 = { __LIB_4__::func_67(iParam0, 0) };
	if (__LIB_6__::func_885(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_596(iParam0, Var2, &bVar0, &bVar1, 1, 0);
		if (bVar1)
		{
			__LIB_5__::func_189(iParam1, 1, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_5__::func_189(iParam1, 2, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 2, 0);
		}
		if ((bVar1 || bVar0) && !__LIB_3__::func_779())
		{
			__LIB_6__::func_884(iParam0, -1);
		}
		if (__LIB_3__::func_661(0, iParam1))
		{
			__LIB_6__::func_884(iParam0, -1);
		}
		else if (__LIB_3__::func_661(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var2, 1, 0, 0, 0, -1, -1, -1);
			}
			__LIB_7__::func_793(iParam0);
		}
		else if (__LIB_3__::func_661(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var2, 0, 0, 1, 0, -1, -1, -1);
			}
			__LIB_7__::func_793(iParam0);
		}
	}
	else
	{
		__LIB_5__::func_189(iParam1, 1, 0);
		__LIB_5__::func_189(iParam1, 2, 0);
	}
}

void func_2239(var uParam0, var uParam1)//Position - 0xC4157
{
	if (__LIB_3__::func_616() == 3)
	{
		func_2243(uParam0, uParam1);
	}
	else if (__LIB_2__::func_72(PLAYER::PLAYER_ID(), 0) && __LIB_4__::func_70(__LIB_2__::func_39(PLAYER::PLAYER_ID()), __LIB_4__::func_71(*uParam0)))
	{
		__LIB_5__::func_258(uParam0, uParam1);
	}
	else if (__LIB_3__::func_616() == 2)
	{
		func_2241(uParam0, uParam1);
	}
	else
	{
		__LIB_4__::func_87(uParam1);
	}
}

void func_2241(var uParam0, var uParam1)//Position - 0xC41E0
{
	int iVar0;
	int iVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_596(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, 1, 0);
	bVar2 = (iVar0 || iVar1);
	if (!bVar2)
	{
		uParam1->f_8 = 1;
		uParam1->f_1 = 1;
		uParam1->f_6 = 1;
		uParam1->f_9 = 1;
		*uParam1 = 1;
		uParam1->f_11 = 10;
		MISC::SET_BIT(&(Global_1946250.f_3), 9);
		__LIB_5__::func_462();
		return;
	}
	if (uParam0->f_3 && !uParam0->f_5)
	{
		uParam1->f_4 = 1;
		__LIB_5__::func_462();
	}
	else
	{
		uParam1->f_2 = 1;
		if (uParam0->f_5)
		{
			uParam1->f_3 = 1;
		}
		else if (uParam0->f_2)
		{
			uParam1->f_1 = 1;
			uParam1->f_5 = 1;
			MISC::SET_BIT(&(Global_1946250.f_3), 9);
			__LIB_6__::func_884(*uParam0, -1);
			__LIB_5__::func_462();
		}
	}
}

void func_2243(var uParam0, var uParam1)//Position - 0xC42FE
{
	int iVar0;
	iVar0 = __LIB_3__::func_785();
	switch (iVar0)
	{
		case 0:
			__LIB_9__::func_268(uParam0, uParam1);
			break;
		case 1:
			func_2248(uParam0, uParam1);
			break;
		case 2:
			__LIB_16__::func_186(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_2248(var uParam0, var uParam1)//Position - 0xC467F
{
	int iVar0;
	int iVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_596(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, 1, 0);
	bVar2 = (iVar0 || iVar1);
	if (!bVar2)
	{
		uParam1->f_8 = 1;
		uParam1->f_6 = 1;
		uParam1->f_1 = 1;
		uParam1->f_9 = 1;
		*uParam1 = 1;
		uParam1->f_11 = 10;
		MISC::SET_BIT(&(Global_1946250.f_3), 9);
		__LIB_5__::func_462();
		return;
	}
	if (uParam0->f_3 && !uParam0->f_5)
	{
		__LIB_5__::func_462();
		if (__LIB_8__::func_926(*uParam0))
		{
			*uParam1 = 1;
		}
		else
		{
			uParam1->f_4 = 1;
		}
	}
	else
	{
		uParam1->f_2 = 1;
		if (uParam0->f_5)
		{
			uParam1->f_3 = 1;
			if (__LIB_3__::func_616() == 3)
			{
				__LIB_1__::func_767("CLUB_TITLE" /* GXT: NIGHTCLUB */);
			}
			else
			{
				__LIB_1__::func_767("HUB_TITLE_2" /* GXT: NIGHTCLUB GARAGE */);
			}
		}
		else if (uParam0->f_2)
		{
			uParam1->f_5 = 1;
			uParam1->f_1 = 1;
			MISC::SET_BIT(&(Global_1946250.f_3), 9);
			__LIB_6__::func_884(*uParam0, -1);
			__LIB_5__::func_462();
		}
	}
}

void func_2307(var uParam0, int iParam1)//Position - 0xC89ED
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 837938/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 837929/*__LIB_0__::func_162*/;
			break;
		case 1:
			uParam0->f_30 = 837861/*__LIB_5__::func_536*/;
			break;
		case 2:
			uParam0->f_31 = 837415/*__LIB_5__::func_535*/;
			break;
		case 3:
			uParam0->f_34 = 837310/*__LIB_4__::func_120*/;
			break;
		case 4:
			uParam0->f_12 = 837297/*__LIB_4__::func_119*/;
			break;
		case 6:
			uParam0->f_32 = 837233/*__LIB_4__::func_118*/;
			break;
		case 11:
			uParam0->f_11 = 837224/*__LIB_1__::func_804*/;
			break;
		case 12:
			uParam0->f_33 = 836763/*__LIB_5__::func_534*/;
			break;
		case 14:
			uParam0->f_11 = 836754/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 836367/*__LIB_5__::func_533*/;
			break;
		case 8:
			uParam0->f_37 = 836359/*__LIB_0__::func_467*/;
			break;
		case 7:
			uParam0->f_36 = 836350/*__LIB_0__::func_114*/;
			break;
		case 79:
			*uParam0 = 836326/*__LIB_5__::func_265*/;
			break;
		case 13:
			uParam0->f_2 = 836264/*__LIB_9__::func_783*/;
			break;
		case 15:
			uParam0->f_2 = 836185/*__LIB_9__::func_790*/;
			break;
		case 16:
			uParam0->f_5 = 835888/*__LIB_6__::func_958*/;
			break;
		case 108:
			uParam0->f_55 = 835879/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 835868/*__LIB_3__::func_860*/;
			break;
		case 19:
			uParam0->f_17 = 835842/*__LIB_5__::func_973*/;
			break;
		case 20:
			uParam0->f_3 = 835833/*__LIB_0__::func_114*/;
			break;
		case 21:
			uParam0->f_3 = 835824/*__LIB_0__::func_114*/;
			break;
		case 74:
			uParam0->f_53 = 835802/*__LIB_4__::func_18*/;
			break;
		case 75:
			uParam0->f_4 = 835793/*__LIB_0__::func_114*/;
			break;
		case 22:
			uParam0->f_24 = 835785/*__LIB_0__::func_467*/;
			break;
		case 23:
			uParam0->f_26 = 835777/*__LIB_0__::func_467*/;
			break;
		case 26:
			uParam0->f_38 = 835769/*__LIB_0__::func_467*/;
			break;
		case 25:
			uParam0->f_23 = 835436/*func_2379*/;
			break;
		case 27:
			uParam0->f_25 = 835428/*__LIB_0__::func_467*/;
			break;
		case 28:
			uParam0->f_24 = 835420/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 835099/*__LIB_7__::func_745*/;
			break;
		case 31:
			uParam0->f_39 = 835071/*__LIB_3__::func_775*/;
			break;
		case 33:
			uParam0->f_40 = 835002/*__LIB_6__::func_880*/;
			break;
		case 34:
			uParam0->f_41 = 831270/*__LIB_5__::func_264*/;
			break;
		case 36:
			uParam0->f_58 = 831225/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 828058/*__LIB_5__::func_532*/;
			break;
		case 45:
			uParam0->f_14 = 828049/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 828040/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 828032/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 828021/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 827913/*__LIB_4__::func_113*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 826798/*__LIB_7__::func_799*/;
			break;
		case 49:
			uParam0->f_8 = 826789/*__LIB_0__::func_114*/;
			break;
		case 50:
			*uParam0 = 826780/*__LIB_0__::func_114*/;
			break;
		case 51:
			*uParam0 = 826771/*__LIB_0__::func_114*/;
			break;
		case 52:
			uParam0->f_15 = 826760/*__LIB_4__::func_112*/;
			break;
		case 53:
			uParam0->f_13 = 826749/*__LIB_3__::func_554*/;
			break;
		case 54:
			uParam0->f_45 = 826741/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 826732/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 826723/*__LIB_1__::func_804*/;
			break;
		case 58:
			uParam0->f_13 = 826681/*__LIB_4__::func_111*/;
			break;
		case 59:
			*uParam0 = 826672/*__LIB_0__::func_114*/;
			break;
		case 60:
			*uParam0 = 826663/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 826652/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 826641/*__LIB_3__::func_554*/;
			break;
		case 63:
			uParam0->f_11 = 826632/*__LIB_1__::func_804*/;
			break;
		case 64:
			uParam0->f_47 = 826624/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 826616/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 826313/*__LIB_5__::func_263*/;
			break;
		case 67:
			uParam0->f_21 = 826243/*__LIB_3__::func_757*/;
			break;
		case 68:
			*uParam0 = 825594/*__LIB_5__::func_262*/;
			break;
		case 69:
			*uParam0 = 825585/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 825577/*__LIB_0__::func_467*/;
			break;
		case 71:
			uParam0->f_49 = 825568/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 825556/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 825122/*__LIB_7__::func_744*/;
			break;
		case 18:
			uParam0->f_8 = 825097/*__LIB_4__::func_110*/;
			break;
		case 84:
			uParam0->f_1 = 825080/*__LIB_5__::func_874*/;
			break;
		case 85:
			uParam0->f_1 = 824538/*func_2329*/;
			break;
		case 87:
			uParam0->f_1 = 823497/*__LIB_6__::func_799*/;
			break;
		case 88:
			uParam0->f_1 = 823488/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 823480/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 823471/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 823462/*__LIB_0__::func_109*/;
			break;
		case 98:
			uParam0->f_1 = 823453/*__LIB_0__::func_109*/;
			break;
		case 100:
			uParam0->f_22 = 823445/*__LIB_0__::func_467*/;
			break;
		case 101:
			uParam0->f_22 = 823437/*__LIB_0__::func_467*/;
			break;
		case 112:
			uParam0->f_13 = 823425/*__LIB_5__::func_214*/;
			break;
		case 113:
			uParam0->f_3 = 823416/*__LIB_0__::func_114*/;
			break;
		case 78:
			uParam0->f_59 = 823113/*__LIB_7__::func_798*/;
			break;
	}
}

int func_2329(var uParam0, var uParam1)//Position - 0xC94DA
{
	return func_2330(uParam1);
}

int func_2330(var uParam0)//Position - 0xC94E8
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	struct<3> Var7;
	struct<3> Var8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	bool bVar13;
	bool bVar14;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_109))
		{
			func_371(&iVar0, &(uParam0->f_109), 60);
			__LIB_3__::func_633(&(uParam0->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam0->f_109);
			return 0;
		}
		else if (func_282(&iVar0, &(uParam0->f_109), &(uParam0->f_109.f_1), 1, 1, 0, 1, 0, 1))
		{
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam0->f_109);
		}
		else
		{
			return 0;
		}
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(uParam0->f_109), &(uParam0->f_189[1 /*3*/]), &(uParam0->f_189[0 /*3*/]));
		__LIB_4__::func_109(&Var1, &Var3, &uVar9, 1);
		__LIB_4__::func_109(&Var2, &Var4, &uVar10, 0);
		__LIB_4__::func_108(&Var5, &Var7, &uVar11, 1);
		__LIB_4__::func_108(&Var6, &Var8, &uVar12, 0);
		bVar13 = VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar0));
		bVar14 = !(uParam0->f_189[0 /*3*/].f_1 - uParam0->f_189[1 /*3*/].f_1) > 7f;
		if (bVar13)
		{
			MISC::SET_BIT(&(uParam0->f_188), 1);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam0->f_188), 1);
		}
		__LIB_6__::func_820(&(Global_1946250.f_3638), Var1, Var3, uVar9, Var2, Var4, uVar10, bVar13, Var5, Var7, uVar11, Var6, Var8, uVar12, bVar14, 1056964608, 1036831949);
	}
	return 1;
}

void func_2379(int iParam0, int iParam1)//Position - 0xCBF6C
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	Var2 = { __LIB_3__::func_554(iParam0) };
	if (__LIB_0__::func_114(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_596(iParam0, Var2, &bVar0, &bVar1, 1, 0);
		if (bVar1)
		{
			__LIB_5__::func_189(iParam1, 1, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_5__::func_189(iParam1, 2, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 2, 0);
		}
		if ((bVar1 || bVar0) && !__LIB_3__::func_779())
		{
			__LIB_6__::func_880(iParam0, -1);
		}
		if (__LIB_3__::func_661(0, iParam1))
		{
			__LIB_6__::func_880(iParam0, -1);
		}
		else if (__LIB_3__::func_661(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var2, 1, 0, 0, 0, -1, -1, -1);
			}
			__LIB_7__::func_792(iParam0);
		}
		else if (__LIB_3__::func_661(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var2, 0, 0, 1, 0, -1, -1, -1);
			}
			__LIB_7__::func_792(iParam0);
		}
	}
	else
	{
		__LIB_5__::func_189(iParam1, 1, 0);
		__LIB_5__::func_189(iParam1, 2, 0);
	}
}

void func_2417(var uParam0, int iParam1)//Position - 0xCC93B
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 873032/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 873009/*__LIB_4__::func_174*/;
			break;
		case 1:
			uParam0->f_30 = 872879/*__LIB_5__::func_547*/;
			break;
		case 2:
			uParam0->f_31 = 872214/*__LIB_6__::func_894*/;
			break;
		case 3:
			uParam0->f_34 = 871951/*__LIB_4__::func_169*/;
			break;
		case 4:
			uParam0->f_12 = 871938/*__LIB_4__::func_168*/;
			break;
		case 5:
			uParam0->f_11 = 871928/*__LIB_4__::func_167*/;
			break;
		case 37:
			uParam0->f_18 = 871730/*__LIB_5__::func_274*/;
			break;
		case 38:
			uParam0->f_9 = 871682/*__LIB_6__::func_964*/;
			break;
		case 42:
			uParam0->f_10 = 871646/*__LIB_6__::func_893*/;
			break;
		case 6:
			uParam0->f_32 = 871531/*__LIB_4__::func_941*/;
			break;
		case 11:
			uParam0->f_11 = 871522/*__LIB_3__::func_729*/;
			break;
		case 12:
			uParam0->f_33 = 870592/*__LIB_8__::func_928*/;
			break;
		case 14:
			uParam0->f_11 = 870583/*__LIB_3__::func_603*/;
			break;
		case 109:
			uParam0->f_56 = 869440/*__LIB_7__::func_805*/;
			break;
		case 8:
			uParam0->f_37 = 869396/*__LIB_4__::func_163*/;
			break;
		case 7:
			uParam0->f_36 = 869373/*__LIB_4__::func_162*/;
			break;
		case 79:
			*uParam0 = 869349/*__LIB_5__::func_265*/;
			break;
		case 13:
			uParam0->f_2 = 869287/*__LIB_9__::func_783*/;
			break;
		case 15:
			uParam0->f_2 = 869208/*__LIB_9__::func_791*/;
			break;
		case 16:
			uParam0->f_5 = 868534/*__LIB_8__::func_927*/;
			break;
		case 108:
			uParam0->f_55 = 865251/*__LIB_10__::func_70*/;
			break;
		case 17:
			uParam0->f_17 = 864333/*__LIB_9__::func_272*/;
			break;
		case 19:
			uParam0->f_17 = 864288/*__LIB_6__::func_962*/;
			break;
		case 20:
			uParam0->f_3 = 864115/*__LIB_6__::func_892*/;
			break;
		case 21:
			uParam0->f_3 = 864030/*__LIB_6__::func_891*/;
			break;
		case 74:
			uParam0->f_53 = 863890/*__LIB_5__::func_271*/;
			break;
		case 75:
			uParam0->f_4 = 863874/*__LIB_5__::func_464*/;
			break;
		case 22:
			uParam0->f_24 = 863771/*__LIB_5__::func_546*/;
			break;
		case 23:
			uParam0->f_26 = 863724/*__LIB_4__::func_159*/;
			break;
		case 24:
			uParam0->f_26 = 863687/*__LIB_4__::func_88*/;
			break;
		case 26:
			uParam0->f_38 = 862282/*func_2526*/;
			break;
		case 25:
			uParam0->f_23 = 861916/*func_2523*/;
			break;
		case 27:
			uParam0->f_25 = 861103/*__LIB_6__::func_961*/;
			break;
		case 28:
			uParam0->f_24 = 861064/*__LIB_4__::func_152*/;
			break;
		case 29:
			uParam0->f_28 = 860829/*__LIB_5__::func_876*/;
			break;
		case 30:
			uParam0->f_8 = 860504/*__LIB_7__::func_802*/;
			break;
		case 31:
			uParam0->f_39 = 860307/*__LIB_5__::func_545*/;
			break;
		case 43:
			uParam0->f_8 = 860201/*__LIB_7__::func_801*/;
			break;
		case 33:
			uParam0->f_40 = 859885/*__LIB_6__::func_890*/;
			break;
		case 34:
			uParam0->f_41 = 854893/*__LIB_6__::func_889*/;
			break;
		case 36:
			uParam0->f_58 = 854836/*__LIB_4__::func_85*/;
			break;
		case 35:
			uParam0->f_42 = 848631/*__LIB_6__::func_960*/;
			break;
		case 45:
			uParam0->f_14 = 848622/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 848613/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 848605/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 848582/*__LIB_4__::func_146*/;
			break;
		case 82:
			uParam0->f_19 = 848569/*__LIB_5__::func_267*/;
			break;
		case 47:
			uParam0->f_43 = 848277/*__LIB_5__::func_543*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 846054/*__LIB_8__::func_964*/;
			break;
		case 49:
			uParam0->f_8 = 846006/*__LIB_4__::func_938*/;
			break;
		case 50:
			*uParam0 = 845814/*__LIB_5__::func_733*/;
			break;
		case 51:
			*uParam0 = 845805/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 845794/*__LIB_3__::func_647*/;
			break;
		case 53:
			uParam0->f_13 = 845752/*__LIB_4__::func_141*/;
			break;
		case 54:
			uParam0->f_45 = 845744/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 845735/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 845726/*__LIB_1__::func_804*/;
			break;
		case 58:
			uParam0->f_13 = 845684/*__LIB_4__::func_140*/;
			break;
		case 59:
			*uParam0 = 845675/*__LIB_0__::func_114*/;
			break;
		case 60:
			*uParam0 = 845666/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 845655/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 845625/*__LIB_4__::func_139*/;
			break;
		case 63:
			uParam0->f_11 = 845616/*__LIB_1__::func_804*/;
			break;
		case 64:
			uParam0->f_47 = 845608/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 844522/*__LIB_7__::func_56*/;
			break;
		case 66:
			uParam0->f_21 = 844181/*__LIB_5__::func_541*/;
			break;
		case 67:
			uParam0->f_21 = 844067/*__LIB_4__::func_64*/;
			break;
		case 68:
			*uParam0 = 843239/*__LIB_6__::func_959*/;
			break;
		case 69:
			*uParam0 = 843230/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 843218/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 843126/*__LIB_4__::func_138*/;
			break;
		case 107:
			uParam0->f_50 = 843114/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 842926/*__LIB_5__::func_870*/;
			break;
		case 84:
			uParam0->f_1 = 842917/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 842903/*func_2456*/;
			break;
		case 87:
			uParam0->f_1 = 842887/*__LIB_6__::func_799*/;
			break;
		case 88:
			uParam0->f_1 = 842878/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 842870/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 842861/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 842418/*__LIB_6__::func_420*/;
			break;
		case 98:
			uParam0->f_1 = 840956/*func_2438*/;
			break;
		case 100:
			uParam0->f_22 = 840077/*__LIB_6__::func_389*/;
			break;
		case 101:
			uParam0->f_22 = 839900/*__LIB_5__::func_538*/;
			break;
		case 112:
			uParam0->f_13 = 839888/*__LIB_5__::func_214*/;
			break;
		case 113:
			uParam0->f_3 = 839874/*__LIB_4__::func_126*/;
			break;
		case 114:
			uParam0->f_16 = 328426/*__LIB_5__::func_451*/;
			break;
		case 117:
			uParam0->f_16 = 382391/*__LIB_3__::func_800*/;
			break;
		case 118:
			uParam0->f_11 = 839865/*__LIB_3__::func_939*/;
			break;
		case 119:
			uParam0->f_27 = 839764/*__LIB_7__::func_17*/;
			break;
		case 120:
			uParam0->f_19 = 839739/*__LIB_5__::func_537*/;
			break;
		case 78:
			uParam0->f_59 = 839567/*__LIB_7__::func_783*/;
			break;
		case 125:
			uParam0->f_19 = 839540/*__LIB_4__::func_124*/;
			break;
	}
}

int func_2438(int iParam0, var uParam1)//Position - 0xCD4FC
{
	if (__LIB_4__::func_128(iParam0))
	{
		return func_2439(iParam0, uParam1);
	}
	return 1;
}

int func_2439(int iParam0, var uParam1)//Position - 0xCD519
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	struct<3> Var5;
	char* sVar6;
	int iVar7;
	if (PED::IS_PED_IN_ANY_VEHICLE(Global_1946250.f_4716.f_7, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(Global_1946250.f_4716.f_7, false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
		}
		iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false);
		if (func_283(&(uParam1->f_109.f_1[0]), iVar1, 1, 1) && __LIB_0__::func_121(uParam1->f_109.f_1[0]))
		{
			if (__LIB_0__::func_121(uParam1->f_109))
			{
				VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			}
			if (PED::IS_PED_MALE(uParam1->f_109.f_1[0]))
			{
				MISC::SET_BIT(&(uParam1->f_188), 4);
			}
		}
		else
		{
			return 0;
		}
		if (!__LIB_5__::func_539(&(uParam1->f_2), 926.6437f, 50.7593f, 70.0961f, 1))
		{
			return 0;
		}
		uParam1->f_176[0] = OBJECT::CREATE_OBJECT(__LIB_4__::func_134(), 926.6437f, 50.7593f, 75.0961f, false, false, false);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_4__::func_134());
		if (__LIB_0__::func_121(uParam1->f_176[0]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_176[0], true);
		}
		else
		{
			return 0;
		}
		iVar2 = __LIB_4__::func_133(-395939522);
		iVar3 = __LIB_4__::func_133(-401740561);
		if (!BitTest(uParam1->f_188, 5))
		{
			__LIB_4__::func_131(__LIB_4__::func_132(-395939522), iVar2);
			__LIB_4__::func_131(__LIB_4__::func_132(-401740561), iVar3);
			MISC::SET_BIT(&(uParam1->f_188), 5);
		}
		if (!__LIB_4__::func_130(&(uParam1->f_50), __LIB_4__::func_132(-395939522), -48f, iVar2))
		{
			return 0;
		}
		if (!__LIB_4__::func_130(&(uParam1->f_58), __LIB_4__::func_132(-401740561), 157f, iVar3))
		{
			return 0;
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar2);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar3);
		Var4 = { 925.9088f, 51.242f, 80.095f };
		Var5 = { 0f, 0f, 58f };
		sVar6 = __LIB_5__::func_266(uParam1, 6);
		iVar7 = 3500;
		__LIB_3__::func_900(&(Global_1946250.f_4073), iVar7, "valet exit", Var4, Var5, uParam1->f_3, sVar6, 1, 0, 0, 0, 2);
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_2456(var uParam0, var uParam1)//Position - 0xCDC97
{
	return func_2330(uParam1);
}

void func_2523(int iParam0, int iParam1)//Position - 0xD26DC
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	Var2 = { __LIB_4__::func_154(iParam0) };
	if (__LIB_6__::func_892(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_596(iParam0, Var2, &bVar0, &bVar1, 1, 0);
		if (bVar1)
		{
			__LIB_5__::func_189(iParam1, 1, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_5__::func_189(iParam1, 2, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 2, 0);
		}
		if ((bVar1 || bVar0) && !__LIB_3__::func_779())
		{
			__LIB_6__::func_890(iParam0, -1);
		}
		if (__LIB_3__::func_661(0, iParam1))
		{
			__LIB_6__::func_890(iParam0, -1);
		}
		else if (__LIB_3__::func_661(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var2, 1, 0, 0, 0, -1, -1, -1);
			}
			__LIB_7__::func_803(iParam0);
		}
		else if (__LIB_3__::func_661(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var2, 0, 0, 1, 0, -1, -1, -1);
			}
			__LIB_7__::func_803(iParam0);
		}
	}
	else
	{
		__LIB_5__::func_189(iParam1, 1, 0);
		__LIB_5__::func_189(iParam1, 2, 0);
	}
}

void func_2526(var uParam0, var uParam1)//Position - 0xD284A
{
	if (__LIB_1__::func_124(PLAYER::PLAYER_ID()) || __LIB_4__::func_153(PLAYER::PLAYER_ID()))
	{
		func_2527(uParam0, uParam1);
	}
}

void func_2527(var uParam0, var uParam1)//Position - 0xD2876
{
	int iVar0;
	if (__LIB_3__::func_616() == 2 && __LIB_3__::func_785() != 1)
	{
		uParam1->f_1 = 1;
		if (func_2538(*uParam0, 0, 0))
		{
			__LIB_3__::func_664(0);
			__LIB_3__::func_784(1);
		}
		else
		{
			__LIB_5__::func_878(uParam1, 0);
			return;
		}
	}
	iVar0 = __LIB_3__::func_785();
	switch (iVar0)
	{
		case 0:
			func_2533(uParam0, uParam1);
			break;
		case 1:
			func_2529(uParam0, uParam1);
			break;
		case 2:
			__LIB_5__::func_877(*uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_2529(var uParam0, var uParam1)//Position - 0xD2935
{
	bool bVar0;
	int iVar1[3];
	var uVar2[3];
	char* sVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	uParam1->f_2 = 0;
	sVar3 = __LIB_4__::func_155();
	func_596(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &bVar6, &bVar7, 1, 0);
	iVar5 = 0;
	while (iVar5 < 3)
	{
		uVar2[iVar4] = __LIB_5__::func_207(iVar5);
		if (__LIB_3__::func_782(iVar5, bVar6, bVar7))
		{
			iVar1[iVar4] = iVar5;
			if (!bVar0 && !MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_79[iVar4 /*6*/]), uVar2[iVar4]))
			{
				bVar0 = true;
			}
			iVar4++;
		}
		else if (!bVar0)
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_79[iVar4 /*6*/]), uVar2[iVar4]))
			{
				bVar0 = true;
			}
		}
		iVar5++;
	}
	if (uParam0->f_5 || bVar0)
	{
		__LIB_1__::func_602(0, 1);
		__LIB_1__::func_767("CASINO_ENT_T" /* GXT: THE DIAMOND CASINO & RESORT */);
		__LIB_3__::func_566(1, sVar3, sVar3);
		__LIB_5__::func_270();
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			__LIB_8__::func_233(iVar5, uVar2[iVar5], 0, 1, 0, 0, 0);
			iVar5++;
		}
		__LIB_5__::func_460(0, 1, 1);
	}
	else if (uParam0->f_2)
	{
		uParam1->f_8 = 1;
		uParam1->f_6 = 1;
		uParam1->f_1 = 1;
		uParam1->f_11 = 10;
		__LIB_5__::func_457(5);
		__LIB_5__::func_462();
		if (iVar1[uParam0->f_4] != 0)
		{
			__LIB_8__::func_965(iVar1[uParam0->f_4]);
		}
	}
	else if (uParam0->f_3)
	{
		__LIB_5__::func_462();
		if (__LIB_3__::func_616() == 2)
		{
			uParam1->f_4 = 1;
		}
	}
}

void func_2533(var uParam0, var uParam1)//Position - 0xD2B34
{
	bool bVar0;
	var uVar1[2];
	var uVar2[2];
	var uVar3[2];
	char* sVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	sVar4 = __LIB_4__::func_155();
	iVar6 = 0;
	while (iVar6 < 2)
	{
		uVar3[iVar6] = __LIB_4__::func_158(iVar6);
		uVar1[iVar6] = __LIB_4__::func_157(iVar6);
		uVar2[iVar6] = uVar1[iVar6];
		if (!bVar0 && (Global_23150.f_1616[iVar6] != uVar2[iVar6] || !MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_79[iVar6 /*6*/]), uVar3[iVar6])))
		{
			bVar0 = true;
		}
		iVar5++;
		iVar6++;
	}
	if (!__LIB_1__::func_124(PLAYER::PLAYER_ID()) && __LIB_4__::func_153(PLAYER::PLAYER_ID()))
	{
		__LIB_5__::func_877(*uParam0, uParam1);
	}
	else if (uParam0->f_5 || bVar0)
	{
		__LIB_1__::func_602(0, 1);
		__LIB_1__::func_767("CASINO_ENT_T" /* GXT: THE DIAMOND CASINO & RESORT */);
		__LIB_3__::func_566(1, sVar4, sVar4);
		__LIB_5__::func_270();
		iVar6 = 0;
		while (iVar6 < iVar5)
		{
			__LIB_8__::func_233(iVar6, uVar3[iVar6], 0, uVar2[iVar6], 0, 0, 0);
			iVar6++;
		}
		__LIB_5__::func_460(0, 1, 1);
	}
	else
	{
		iVar7 = uParam0->f_4;
		__LIB_1__::func_789(__LIB_4__::func_156(uVar1[iVar7], iVar7), 0, 0);
		if (uParam0->f_2 && uVar2[iVar7])
		{
			if (iVar7 == 0)
			{
				*uParam1 = 1;
				__LIB_3__::func_784(2);
			}
			else if (func_2538(*uParam0, 0, 0))
			{
				*uParam1 = 1;
				__LIB_3__::func_664(1);
				__LIB_3__::func_784(1);
			}
			else
			{
				__LIB_5__::func_878(uParam1, 1);
			}
		}
		else if (uParam0->f_3)
		{
			uParam1->f_4 = 1;
		}
	}
}

int func_2538(int iParam0, bool bParam1, bool bParam2)//Position - 0xD2D95
{
	int iVar0;
	int iVar1;
	func_596(iParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, 1, bParam2);
	if (bParam1)
	{
		return iVar1;
	}
	return (iVar0 || iVar1);
}

void func_2596(var uParam0, int iParam1)//Position - 0xD5251
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 903586/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 903577/*__LIB_0__::func_162*/;
			break;
		case 1:
			uParam0->f_30 = 903509/*__LIB_5__::func_557*/;
			break;
		case 2:
			uParam0->f_31 = 903158/*__LIB_5__::func_556*/;
			break;
		case 3:
			uParam0->f_34 = 902925/*__LIB_4__::func_211*/;
			break;
		case 4:
			uParam0->f_12 = 902912/*__LIB_4__::func_210*/;
			break;
		case 6:
			uParam0->f_32 = 902848/*__LIB_4__::func_209*/;
			break;
		case 11:
			uParam0->f_11 = 902839/*__LIB_3__::func_939*/;
			break;
		case 12:
			uParam0->f_33 = 902114/*__LIB_6__::func_967*/;
			break;
		case 14:
			uParam0->f_11 = 902105/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 900980/*__LIB_5__::func_285*/;
			break;
		case 8:
			uParam0->f_37 = 900972/*__LIB_0__::func_467*/;
			break;
		case 7:
			uParam0->f_36 = 900963/*__LIB_0__::func_114*/;
			break;
		case 79:
			*uParam0 = 900939/*__LIB_5__::func_265*/;
			break;
		case 13:
			uParam0->f_2 = 900867/*__LIB_9__::func_793*/;
			break;
		case 15:
			uParam0->f_2 = 900778/*__LIB_9__::func_792*/;
			break;
		case 16:
			uParam0->f_5 = 900418/*__LIB_6__::func_966*/;
			break;
		case 108:
			uParam0->f_55 = 900279/*__LIB_8__::func_218*/;
			break;
		case 17:
			uParam0->f_17 = 899623/*__LIB_8__::func_852*/;
			break;
		case 19:
			uParam0->f_17 = 899597/*__LIB_5__::func_976*/;
			break;
		case 20:
			uParam0->f_3 = 899588/*__LIB_0__::func_114*/;
			break;
		case 21:
			uParam0->f_3 = 899540/*__LIB_5__::func_227*/;
			break;
		case 74:
			uParam0->f_53 = 899485/*__LIB_5__::func_284*/;
			break;
		case 75:
			uParam0->f_4 = 899372/*__LIB_5__::func_555*/;
			break;
		case 22:
			uParam0->f_24 = 899364/*__LIB_0__::func_467*/;
			break;
		case 23:
			uParam0->f_26 = 899356/*__LIB_0__::func_467*/;
			break;
		case 26:
			uParam0->f_38 = 896814/*func_2722*/;
			break;
		case 25:
			uParam0->f_23 = 896806/*__LIB_0__::func_467*/;
			break;
		case 27:
			uParam0->f_25 = 896798/*__LIB_0__::func_467*/;
			break;
		case 28:
			uParam0->f_24 = 896790/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 896509/*__LIB_7__::func_749*/;
			break;
		case 31:
			uParam0->f_39 = 896481/*__LIB_3__::func_775*/;
			break;
		case 33:
			uParam0->f_40 = 896412/*__LIB_6__::func_880*/;
			break;
		case 76:
			uParam0->f_13 = 896389/*__LIB_4__::func_204*/;
			break;
		case 34:
			uParam0->f_41 = 893835/*__LIB_5__::func_881*/;
			break;
		case 36:
			uParam0->f_58 = 893790/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 893694/*__LIB_5__::func_283*/;
			break;
		case 45:
			uParam0->f_14 = 893685/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 893676/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 893668/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 893657/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 893550/*__LIB_4__::func_202*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 892712/*__LIB_7__::func_808*/;
			break;
		case 49:
			uParam0->f_8 = 892703/*__LIB_0__::func_114*/;
			break;
		case 50:
			*uParam0 = 892490/*__LIB_7__::func_748*/;
			break;
		case 51:
			*uParam0 = 892481/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 892470/*__LIB_4__::func_201*/;
			break;
		case 53:
			uParam0->f_13 = 892428/*__LIB_4__::func_200*/;
			break;
		case 54:
			uParam0->f_45 = 892389/*__LIB_4__::func_199*/;
			break;
		case 56:
			uParam0->f_46 = 892380/*__LIB_3__::func_729*/;
			break;
		case 57:
			uParam0->f_11 = 892338/*__LIB_5__::func_553*/;
			break;
		case 58:
			uParam0->f_13 = 892296/*__LIB_4__::func_197*/;
			break;
		case 59:
			*uParam0 = 892287/*__LIB_0__::func_114*/;
			break;
		case 60:
			*uParam0 = 892278/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 892267/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 892256/*__LIB_3__::func_554*/;
			break;
		case 63:
			uParam0->f_11 = 892247/*__LIB_1__::func_804*/;
			break;
		case 64:
			uParam0->f_47 = 892161/*__LIB_5__::func_552*/;
			break;
		case 65:
			uParam0->f_21 = 892153/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 891812/*__LIB_5__::func_282*/;
			break;
		case 67:
			uParam0->f_21 = 891742/*__LIB_3__::func_757*/;
			break;
		case 68:
			*uParam0 = 891045/*__LIB_5__::func_281*/;
			break;
		case 69:
			*uParam0 = 891036/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 890963/*__LIB_4__::func_195*/;
			break;
		case 71:
			uParam0->f_49 = 890954/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 890942/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 890933/*__LIB_0__::func_114*/;
			break;
		case 84:
			uParam0->f_1 = 890408/*__LIB_6__::func_965*/;
			break;
		case 85:
			uParam0->f_1 = 888852/*func_2672*/;
			break;
		case 87:
			uParam0->f_1 = 885625/*__LIB_7__::func_843*/;
			break;
		case 88:
			uParam0->f_1 = 885610/*__LIB_5__::func_803*/;
			break;
		case 89:
			uParam0->f_54 = 885249/*__LIB_5__::func_880*/;
			break;
		case 96:
			uParam0->f_1 = 884887/*__LIB_7__::func_20*/;
			break;
		case 97:
			uParam0->f_1 = 884376/*func_2650*/;
			break;
		case 98:
			uParam0->f_1 = 882747/*func_2648*/;
			break;
		case 100:
			uParam0->f_22 = 882470/*__LIB_6__::func_317*/;
			break;
		case 101:
			uParam0->f_22 = 881921/*__LIB_7__::func_880*/;
			break;
		case 112:
			uParam0->f_13 = 881909/*__LIB_5__::func_214*/;
			break;
		case 113:
			uParam0->f_3 = 881900/*__LIB_0__::func_114*/;
			break;
		case 114:
			uParam0->f_16 = 328426/*__LIB_5__::func_451*/;
			break;
		case 115:
			uParam0->f_3 = 881763/*__LIB_7__::func_807*/;
			break;
		case 116:
			*uParam0 = 881715/*__LIB_5__::func_278*/;
			break;
		case 117:
			uParam0->f_16 = 382391/*__LIB_3__::func_800*/;
			break;
		case 118:
			uParam0->f_11 = 839865/*__LIB_3__::func_939*/;
			break;
		case 119:
			uParam0->f_27 = 839764/*__LIB_7__::func_17*/;
			break;
		case 120:
			uParam0->f_19 = 839739/*__LIB_5__::func_537*/;
			break;
		case 78:
			uParam0->f_59 = 881707/*__LIB_0__::func_467*/;
			break;
		case 124:
			uParam0->f_1 = 874621/*func_2598*/;
			break;
		case 125:
			uParam0->f_19 = 874565/*__LIB_4__::func_175*/;
			break;
	}
}

int func_2598(int iParam0, int* iParam1)//Position - 0xD587D
{
	float fVar0;
	var uVar1;
	struct<3> Var2;
	struct<3> Var3;
	float fVar4;
	var uVar5;
	if (!Global_2814119 || Global_2815059.f_6757)
	{
		if (iParam1->f_258 > 0)
		{
			__LIB_10__::func_26(iParam1);
		}
		return 0;
	}
	switch (iParam1->f_258)
	{
		case 0:
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				__LIB_5__::func_276(iParam0, &uVar1, &Var2, &Var3, &fVar4, &uVar5, 0, 0);
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(__LIB_1__::func_694(PLAYER::PLAYER_ID()), Var2, Var3, fVar4, false, true))
				{
					__LIB_5__::func_457(0);
					__LIB_4__::func_181(iParam1, 1);
				}
				__LIB_5__::func_276(iParam0, &uVar1, &Var2, &Var3, &fVar4, &uVar5, 3, 0);
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(__LIB_1__::func_694(PLAYER::PLAYER_ID()), Var2, Var3, fVar4, true, true))
				{
					__LIB_5__::func_457(3);
					__LIB_4__::func_181(iParam1, 1);
				}
				__LIB_5__::func_276(iParam0, &uVar1, &Var2, &Var3, &fVar4, &uVar5, 4, 0);
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(__LIB_1__::func_694(PLAYER::PLAYER_ID()), Var2, Var3, fVar4, true, true))
				{
					__LIB_5__::func_457(4);
					__LIB_4__::func_181(iParam1, 1);
				}
				__LIB_5__::func_276(iParam0, &uVar1, &Var2, &Var3, &fVar4, &uVar5, 1, 0);
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(__LIB_1__::func_694(PLAYER::PLAYER_ID()), Var2, Var3, fVar4, true, true))
				{
					__LIB_5__::func_457(1);
					__LIB_4__::func_181(iParam1, 1);
				}
			}
			break;
		case 1:
			if (__LIB_3__::func_616() == 0)
			{
				if (__LIB_6__::func_965(iParam0, iParam1))
				{
					__LIB_4__::func_180();
					__LIB_4__::func_181(iParam1, 2);
				}
			}
			else
			{
				__LIB_5__::func_548(iParam0, iParam1, __LIB_3__::func_616());
				__LIB_4__::func_181(iParam1, 2);
			}
			break;
		case 2:
			if (__LIB_3__::func_616() == 0)
			{
				if (func_2672(iParam0, iParam1))
				{
					__LIB_4__::func_178(&(Global_1946250.f_3638), 60);
					__LIB_4__::func_181(iParam1, 3);
				}
			}
			else if (func_2624(iParam1))
			{
				__LIB_4__::func_181(iParam1, 3);
			}
			break;
		case 3:
			if (__LIB_3__::func_616() == 0)
			{
				__LIB_9__::func_3(&(Global_1946250.f_3638), 0, 1);
				__LIB_7__::func_843(iParam0, iParam1);
				if (__LIB_3__::func_630(&(Global_1946250.f_3638), 0))
				{
					__LIB_9__::func_324(&iParam0);
					MISC::SET_BIT(&(Global_1946250.f_6), 26);
					__LIB_4__::func_181(iParam1, 4);
				}
			}
			else
			{
				__LIB_7__::func_842(iParam1);
				__LIB_9__::func_324(&iParam0);
				MISC::SET_BIT(&(Global_1946250.f_6), 26);
				__LIB_4__::func_181(iParam1, 4);
			}
			break;
		case 4:
			if (__LIB_3__::func_616() == 0)
			{
				if (!BitTest(*iParam1, 16))
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iParam1->f_27) && __LIB_0__::func_121(iParam1->f_50))
					{
						fVar0 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iParam1->f_27);
						if (fVar0 > 0.55f)
						{
							CAM::DO_SCREEN_FADE_OUT(500);
							MISC::SET_BIT(iParam1, 16);
						}
					}
				}
				__LIB_9__::func_3(&(Global_1946250.f_3638), 0, 1);
				if (__LIB_7__::func_843(iParam0, iParam1) && BitTest(Global_1946250.f_6, 27))
				{
					__LIB_10__::func_26(iParam1);
				}
			}
			else if (__LIB_7__::func_842(iParam1) && BitTest(Global_1946250.f_6, 27))
			{
				__LIB_10__::func_26(iParam1);
			}
			break;
	}
	return 1;
}

int func_2624(int* iParam0)//Position - 0xD6AD5
{
	STREAMING::REQUEST_ANIM_DICT(iParam0->f_3);
	if (!STREAMING::HAS_ANIM_DICT_LOADED(iParam0->f_3))
	{
		return 0;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_4))
	{
		STREAMING::REQUEST_ANIM_DICT(iParam0->f_4);
		if (!STREAMING::HAS_ANIM_DICT_LOADED(iParam0->f_4))
		{
			return 0;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_2))
	{
		func_1455(&(iParam0->f_2), PLAYER::PLAYER_ID(), 1, 1);
		return 0;
	}
	if ((__LIB_0__::func_121(iParam0->f_2) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iParam0->f_2)) && PED::HAS_PED_HEAD_BLEND_FINISHED(iParam0->f_2))
	{
		ENTITY::SET_ENTITY_VISIBLE(iParam0->f_2, true, false);
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_2648(int iParam0, var uParam1)//Position - 0xD783B
{
	struct<3> Var0;
	struct<3> Var1;
	char* sVar2;
	int iVar3;
	if (__LIB_4__::func_128(iParam0))
	{
		return func_2439(iParam0, uParam1);
	}
	else if (BitTest(Global_1946250.f_6, 20))
	{
		if (Global_1946250.f_4539 == __LIB_0__::func_162())
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "MP_1", 0, 0, 64);
			}
		}
		else if (!PED::IS_PED_INJURED(uParam1->f_2))
		{
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uParam1->f_2, "MP_1", 0, 0, 64);
		}
		__LIB_5__::func_412(1, 1, 1, 0, 0, 0, 0);
		NETWORK::NETWORK_SET_IN_MP_CUTSCENE(true, true);
		CUTSCENE::START_CUTSCENE(0);
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_2))
		{
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
			NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(PLAYER::PLAYER_PED_ID(), true, false);
		}
		MISC::SET_BIT(&(Global_1946250.f_6), 19);
		MISC::SET_BIT(&(Global_1946250.f_2), 20);
		return 1;
	}
	else
	{
		Var0 = { 1082.001f, 187.749f, -49.349f };
		Var1 = { 0f, 0f, -110.19f };
		sVar2 = "mini@strip_club@throwout_d@";
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[0]))
		{
			uParam1->f_140[0] = PED::CREATE_PED(4, joaat("S_M_Y_Casino_01"), Var0 + Vector(-10f, 0f, 0f), 0f, false, true);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(uParam1->f_140[0]);
			PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[0], 6, 0, 0, 0);
			ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[0], true);
			return 0;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[1]))
		{
			uParam1->f_140[1] = PED::CREATE_PED(4, joaat("S_M_Y_Casino_01"), Var0 + Vector(-10f, 0f, 0f), 0f, false, true);
			__LIB_4__::func_185(MISC::GET_RANDOM_INT_IN_RANGE(0, 6), &(uParam1->f_140[1]));
			ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[1], true);
			return 0;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[2]))
		{
			func_1455(&(uParam1->f_140[2]), PLAYER::PLAYER_ID(), 1, 0);
			ENTITY::SET_ENTITY_COORDS(uParam1->f_140[2], Var0 + Vector(-10f, 0f, 0f), false, false, false, true);
			ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[2], true);
			return 0;
		}
		iVar3 = 0;
		while (iVar3 < 3)
		{
			if (__LIB_0__::func_121(uParam1->f_140[iVar3]))
			{
				if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(uParam1->f_140[iVar3]))
				{
					return 0;
				}
			}
			iVar3++;
		}
		MISC::SET_BIT(&(Global_1946250.f_2), 20);
		Var0 = { Var0 + Vector(0f, 0.5f, 3f) };
		__LIB_3__::func_900(&(Global_1946250.f_4073), 5000, "Casino Tout", Var0, Var1, sVar2, "throwout_d_cam", 0, 0, 0, 0, 2);
		NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(PLAYER::PLAYER_PED_ID(), true, true);
		__LIB_1__::func_376(PLAYER::PLAYER_ID(), 0, 262144, 0);
		uParam1->f_27 = PED::CREATE_SYNCHRONIZED_SCENE(Var0, Var1, 2);
		if (__LIB_0__::func_121(uParam1->f_140[0]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[0], false);
			TASK::TASK_SYNCHRONIZED_SCENE(uParam1->f_140[0], uParam1->f_27, sVar2, "throwout_d_bouncer_a", 1000f, -2f, 4, 0, 1000f, 0);
		}
		if (__LIB_0__::func_121(uParam1->f_140[1]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[1], false);
			TASK::TASK_SYNCHRONIZED_SCENE(uParam1->f_140[1], uParam1->f_27, sVar2, "throwout_d_bouncer_b", 1000f, -2f, 4, 0, 1000f, 0);
		}
		if (__LIB_0__::func_121(uParam1->f_140[2]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[2], false);
			TASK::TASK_SYNCHRONIZED_SCENE(uParam1->f_140[2], uParam1->f_27, sVar2, "throwout_d_victim", 1000f, -2f, 4, 0, 1000f, 0);
		}
	}
	return 1;
}

int func_2650(int iParam0, var uParam1)//Position - 0xD7E98
{
	char* sVar0;
	bool bVar1;
	if (__LIB_4__::func_128(iParam0))
	{
		return __LIB_5__::func_974(iParam0, uParam1);
	}
	else if (BitTest(Global_1946250.f_6, 20))
	{
		MISC::CLEAR_BIT(&(Global_1946250.f_2), 21);
		STREAMING::REQUEST_IPL("ch_cutscene_casino");
		if (Global_1946250.f_4539 != __LIB_0__::func_162())
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_2))
			{
				if (!func_2651(&(uParam1->f_2), Global_1946250.f_4539))
				{
					return 0;
				}
			}
		}
		if (!BitTest(uParam1->f_188, 1))
		{
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				CUTSCENE::SET_CUTSCENE_ENTITY_STREAMING_FLAGS("MP_1", 0, 1);
				MISC::SET_BIT(&(uParam1->f_188), 1);
			}
		}
		if (CUTSCENE::HAS_CUTSCENE_LOADED())
		{
			ENTITY::CREATE_MODEL_HIDE(959.0179f, 40.0682f, 116.2767f, 1f, joaat("hei_ch3_12_casinonew_penthouse"), false);
			return 1;
		}
		return 0;
	}
	else
	{
		MISC::SET_BIT(&(Global_1946250.f_5), 27);
		sVar0 = "mini@strip_club@throwout_d@";
		bVar1 = true;
		STREAMING::REQUEST_ANIM_DICT(sVar0);
		if (!STREAMING::HAS_ANIM_DICT_LOADED(sVar0))
		{
			bVar1 = false;
		}
		STREAMING::REQUEST_MODEL(joaat("S_M_Y_Casino_01"));
		if (!STREAMING::HAS_MODEL_LOADED(joaat("S_M_Y_Casino_01")))
		{
			bVar1 = false;
		}
		if (!bVar1)
		{
			return 0;
		}
	}
	return 1;
}

int func_2651(var uParam0, int iParam1)//Position - 0xD7FA6
{
	int iVar0;
	int iVar1;
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1))
		{
			if (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iParam1)))
			{
				iVar0 = ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(iParam1));
				iVar1 = 4;
				if (__LIB_0__::func_338(iParam1))
				{
					iVar1 = 5;
				}
				*uParam0 = PED::CREATE_PED(iVar1, iVar0, 962.5547f, 59.6398f, 111.553f, 180f, false, false);
				ENTITY::SET_ENTITY_INVINCIBLE(*uParam0, true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, true);
				PED::CLONE_PED_TO_TARGET(PLAYER::GET_PLAYER_PED(iParam1), *uParam0);
				if (__LIB_0__::func_348(ENTITY::GET_ENTITY_MODEL(*uParam0), 14, func_300(*uParam0, 14, 0), -1))
				{
					PED::CLEAR_PED_PROP(*uParam0, 0);
				}
				if (__LIB_1__::func_102(*uParam0, 7))
				{
					PED::SET_PED_COMPONENT_VARIATION(*uParam0, 7, 0, 0, 0);
				}
			}
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return 0;
	}
	if (!PED::IS_PED_INJURED(*uParam0))
	{
		if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(*uParam0))
		{
			return 0;
		}
	}
	return 1;
}

int func_2672(int iParam0, int* iParam1)//Position - 0xD9014
{
	var uVar0[25];
	int iVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var4;
	char* sVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	struct<3> Var9;
	struct<3> Var10;
	char* sVar11;
	int iVar12;
	if (BitTest(iParam1->f_188, 12))
	{
		if (!func_283(&(iParam1->f_140[0]), PLAYER::PLAYER_PED_ID(), 1, 1))
		{
			return 0;
		}
		if (!__LIB_5__::func_539(&(iParam1->f_2), 926.6437f, 50.7593f, 70.0961f, 1))
		{
			return 0;
		}
		if (!BitTest(iParam1->f_188, 5))
		{
			__LIB_4__::func_131(__LIB_4__::func_132(-1805228339), __LIB_4__::func_133(-1805228339));
			MISC::SET_BIT(&(iParam1->f_188), 5);
		}
		if (!__LIB_4__::func_130(&(iParam1->f_50), __LIB_4__::func_132(-1805228339), __LIB_4__::func_193(-1805228339), __LIB_4__::func_133(-1805228339)))
		{
			return 0;
		}
		iVar1 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar0, -1);
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (((ENTITY::DOES_ENTITY_EXIST(uVar0[iVar2]) && __LIB_0__::func_121(uVar0[iVar2])) && TASK::IS_PED_ACTIVE_IN_SCENARIO(uVar0[iVar2])) && ENTITY::GET_ENTITY_MODEL(uVar0[iVar2]) == __LIB_4__::func_136())
			{
				NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(uVar0[iVar2], false, false);
			}
			else
			{
				iVar2++;
			}
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_4__::func_133(-1805228339));
		Var3 = { __LIB_4__::func_132(-1805228339) };
		Var4 = { 0f, 0f, -122f };
		sVar5 = __LIB_4__::func_191(6);
		__LIB_3__::func_900(&(Global_1946250.f_3638), 12000, "valet intro", Var3, Var4, iParam1->f_3, sVar5, 1, 0, 0, 0, 2);
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar6 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (((__LIB_0__::func_121(iVar6) && __LIB_0__::func_872(iVar6, 0)) && __LIB_6__::func_854(iVar6) == PLAYER::PLAYER_ID()) && __LIB_0__::func_336(PLAYER::PLAYER_PED_ID(), 0) == -1)
			{
				MISC::SET_BIT(&(iParam1->f_188), 13);
				iParam1->f_135[0] = iVar6;
			}
			MISC::SET_BIT(&(iParam1->f_188), 14);
		}
	}
	else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar7 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar7))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_109))
		{
			func_371(&iVar7, &(iParam1->f_109), 60);
			__LIB_3__::func_633(&(iParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(iParam1->f_109);
			return 0;
		}
		else
		{
			iVar8 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar7, -1, false);
			if (func_283(&(iParam1->f_109.f_1[0]), iVar8, 1, 1) && __LIB_0__::func_121(iParam1->f_109.f_1[0]))
			{
				if (__LIB_0__::func_121(iParam1->f_109))
				{
					VEHICLE::SET_DISABLE_MAP_COLLISION(iParam1->f_109);
				}
				if (PED::IS_PED_MALE(iParam1->f_109.f_1[0]))
				{
					MISC::SET_BIT(&(iParam1->f_188), 4);
				}
				if (iVar8 == PLAYER::PLAYER_PED_ID())
				{
					MISC::SET_BIT(&(iParam1->f_188), 11);
				}
			}
			else
			{
				return 0;
			}
		}
		if (!__LIB_5__::func_539(&(iParam1->f_2), 926.6437f, 50.7593f, 70.0961f, 1))
		{
			return 0;
		}
		iParam1->f_176[0] = OBJECT::CREATE_OBJECT(__LIB_4__::func_134(), 926.6437f, 50.7593f, 75.0961f, false, false, false);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_4__::func_134());
		if (__LIB_0__::func_121(iParam1->f_176[0]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iParam1->f_176[0], true);
		}
		else
		{
			return 0;
		}
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam1->f_109), &(iParam1->f_189[0 /*3*/]), &(iParam1->f_189[1 /*3*/]));
		Var9 = { 925.9088f, 51.242f, 80.095f };
		Var10 = { 0f, 0f, 58f };
		sVar11 = __LIB_5__::func_550(iParam1, 6);
		iVar12 = __LIB_4__::func_192(__LIB_4__::func_189(iParam1));
		__LIB_3__::func_900(&(Global_1946250.f_3638), iVar12, "valet", Var9, Var10, iParam1->f_3, sVar11, 1, 0, 0, 0, 2);
	}
	else if (__LIB_3__::func_616() == 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_2))
		{
			func_1455(&(iParam1->f_2), PLAYER::PLAYER_ID(), 1, 1);
			return 0;
		}
		if ((__LIB_0__::func_121(iParam1->f_2) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iParam1->f_2)) && PED::HAS_PED_HEAD_BLEND_FINISHED(iParam1->f_2))
		{
			ENTITY::CREATE_MODEL_HIDE(__LIB_4__::func_132(-1805228339), 0.1f, __LIB_4__::func_133(-1805228339), false);
			iParam1->f_50 = OBJECT::CREATE_OBJECT(__LIB_4__::func_133(-1805228339), __LIB_4__::func_132(-1805228339), false, false, true);
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
			{
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_50))
			{
				return 0;
			}
			else
			{
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam1->f_50, __LIB_4__::func_132(-1805228339), false, false, false);
				ENTITY::SET_ENTITY_ROTATION(iParam1->f_50, 0f, 0f, -122f, 2, true);
				ENTITY::FREEZE_ENTITY_POSITION(iParam1->f_50, true);
				ENTITY::SET_ENTITY_COLLISION(iParam1->f_50, false, false);
			}
			ENTITY::SET_ENTITY_VISIBLE(iParam1->f_2, true, false);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_4__::func_133(-1805228339));
			__LIB_6__::func_27(&(Global_1946250.f_3638), 4000, "Enter_Casino", 916.7877f, 63.0506f, 81.6854f, 0.3236f, 0f, -151.6214f, 35.7535f, 916.9896f, 62.7016f, 81.6876f, 0.3236f, 0f, -149.9406f, 34.8284f, 0.1f, 0, 0, 0, 0, 0);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_2722(var uParam0, var uParam1)//Position - 0xDAF2E
{
	int iVar0;
	iVar0 = __LIB_3__::func_785();
	if (__LIB_3__::func_616() == 0 || __LIB_3__::func_616() == 2)
	{
		if (!__LIB_3__::func_998(PLAYER::PLAYER_ID()) || __LIB_3__::func_597())
		{
			if (!__LIB_3__::func_597())
			{
				if (__LIB_1__::func_744(PLAYER::PLAYER_ID()))
				{
					__LIB_8__::func_967(1, *uParam0);
				}
			}
			if (__LIB_1__::func_744(PLAYER::PLAYER_ID()))
			{
				__LIB_8__::func_967(1, *uParam0);
			}
			uParam1->f_8 = 1;
			uParam1->f_6 = 1;
			uParam1->f_9 = 1;
			uParam1->f_3 = 1;
			uParam1->f_10 = 0;
			uParam1->f_11 = 10;
			__LIB_5__::func_462();
			if (__LIB_3__::func_597())
			{
				uParam1->f_1 = 1;
			}
			return;
		}
	}
	if (__LIB_3__::func_597())
	{
		if ((__LIB_3__::func_616() == 3 || __LIB_3__::func_616() == 4) || __LIB_3__::func_616() == 1)
		{
			uParam1->f_8 = 1;
			uParam1->f_6 = 1;
			uParam1->f_9 = 1;
			uParam1->f_3 = 1;
			uParam1->f_1 = 1;
			uParam1->f_10 = 0;
			uParam1->f_11 = 10;
			__LIB_5__::func_462();
			return;
		}
	}
	switch (iVar0)
	{
		case 0:
			func_2726(uParam0, uParam1);
			break;
		case 4:
			__LIB_5__::func_882(*uParam0, uParam1);
			break;
		case 2:
		case 3:
		case 1:
		case 5:
			func_2723(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_2723(var uParam0, var uParam1)//Position - 0xDB06C
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5[3];
	var uVar6[3];
	char* sVar7;
	int iVar8;
	int iVar9;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	uParam1->f_2 = 0;
	bVar0 = true;
	iVar1 = __LIB_3__::func_785();
	bVar0 = iVar1 != 5;
	func_596(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &bVar2, &bVar3, bVar0, 0);
	sVar7 = __LIB_4__::func_155();
	iVar9 = 0;
	while (iVar9 < 3)
	{
		uVar6[iVar8] = __LIB_5__::func_207(iVar9);
		if (__LIB_3__::func_782(iVar9, bVar2, bVar3))
		{
			iVar5[iVar8] = iVar9;
			if (!bVar4 && !MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_79[iVar8 /*6*/]), uVar6[iVar8]))
			{
				bVar4 = true;
			}
			iVar8++;
		}
		else if (!bVar4)
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_79[iVar8 /*6*/]), uVar6[iVar8]))
			{
				bVar4 = true;
			}
		}
		iVar9++;
	}
	if (uParam0->f_5 || bVar4)
	{
		__LIB_1__::func_602(0, 1);
		__LIB_1__::func_767("CASINO_ENT_T" /* GXT: THE DIAMOND CASINO & RESORT */);
		__LIB_3__::func_566(1, sVar7, sVar7);
		__LIB_5__::func_270();
		iVar9 = 0;
		while (iVar9 < iVar8)
		{
			__LIB_8__::func_233(iVar9, uVar6[iVar9], 0, 1, 0, 0, 0);
			iVar9++;
		}
		__LIB_5__::func_460(0, 1, 1);
	}
	else if (uParam0->f_2)
	{
		uParam1->f_6 = 1;
		if (__LIB_3__::func_785() == 1)
		{
			uParam1->f_8 = 1;
			uParam1->f_11 = 10;
			uParam1->f_1 = 1;
			__LIB_5__::func_462();
			if ((__LIB_3__::func_616() == 1 || __LIB_3__::func_616() == 3) || __LIB_3__::func_616() == 4)
			{
				__LIB_4__::func_143();
			}
			else
			{
				uParam1->f_10 = 1;
			}
			if (iVar5[uParam0->f_4] != 0)
			{
				__LIB_8__::func_967(iVar5[uParam0->f_4], 123);
			}
		}
		else if (__LIB_3__::func_785() == 5)
		{
			uParam1->f_11 = 22;
			uParam1->f_1 = 1;
			__LIB_5__::func_462();
			__LIB_4__::func_151(*uParam0, 146);
			if (iVar5[uParam0->f_4] != 0)
			{
				__LIB_8__::func_967(iVar5[uParam0->f_4], 146);
			}
		}
		else
		{
			uParam1->f_11 = 22;
			uParam1->f_1 = 1;
			__LIB_5__::func_462();
			__LIB_4__::func_151(*uParam0, 124);
			__LIB_5__::func_457(0);
			__LIB_3__::func_767(1);
			if (__LIB_3__::func_785() == 3)
			{
				__LIB_4__::func_143();
			}
			if (iVar5[uParam0->f_4] != 0)
			{
				__LIB_8__::func_967(iVar5[uParam0->f_4], 124);
			}
		}
	}
	else if (uParam0->f_3)
	{
		__LIB_5__::func_462();
	}
}

void func_2726(var uParam0, var uParam1)//Position - 0xDB2F6
{
	var uVar0;
	var uVar1[5];
	var uVar2[5];
	var uVar3[5];
	char* sVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	sVar4 = __LIB_4__::func_155();
	if (__LIB_3__::func_616() == 0)
	{
		uVar0 = __LIB_5__::func_554(&uVar1, &uVar2, &uVar3, &iVar5);
	}
	else
	{
		uVar0 = __LIB_8__::func_966(&uVar1, &uVar2, &uVar3, &iVar5);
	}
	if (uParam0->f_5 || uVar0)
	{
		__LIB_1__::func_602(0, 1);
		__LIB_1__::func_767("CASINO_ENT_T" /* GXT: THE DIAMOND CASINO & RESORT */);
		__LIB_3__::func_566(1, sVar4, sVar4);
		__LIB_5__::func_270();
		iVar6 = 0;
		while (iVar6 < iVar5)
		{
			__LIB_8__::func_233(iVar6, uVar3[iVar6], 0, uVar2[iVar6], 0, 0, 0);
			iVar6++;
		}
		__LIB_5__::func_460(0, 1, 1);
	}
	else
	{
		iVar7 = uParam0->f_4;
		if (__LIB_3__::func_616() == 0)
		{
			__LIB_1__::func_789(__LIB_4__::func_205(uVar1[iVar7], iVar7), 0, 0);
		}
		else
		{
			__LIB_1__::func_789(__LIB_5__::func_883(uVar1[iVar7], iVar7), 0, 0);
		}
		if (uParam0->f_2 && uVar2[iVar7])
		{
			if (__LIB_3__::func_616() == 0)
			{
				func_2728(*uParam0, iVar7, uParam1, uParam1);
			}
			else
			{
				func_2727(*uParam0, iVar7, uParam1, uParam1);
			}
		}
		else if (uParam0->f_3)
		{
			uParam1->f_4 = 1;
		}
	}
}

void func_2727(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0xDB413
{
	if (iParam1 == 0)
	{
		if (func_2538(iParam0, 0, 0))
		{
			__LIB_3__::func_784(1);
		}
		else
		{
			uParam3->f_8 = 1;
			uParam3->f_6 = 1;
			uParam3->f_11 = 10;
			uParam3->f_1 = 1;
			__LIB_4__::func_143();
		}
	}
	else if (iParam1 == 1)
	{
		__LIB_3__::func_664(0);
		if (func_2538(iParam0, 0, 0))
		{
			__LIB_3__::func_784(2);
		}
		else
		{
			uParam3->f_6 = 1;
			uParam3->f_11 = 22;
			uParam3->f_1 = 1;
			__LIB_4__::func_151(iParam0, 124);
			__LIB_5__::func_457(0);
			__LIB_3__::func_767(1);
		}
	}
	else if (iParam1 == 4)
	{
		if (func_2538(iParam0, 1, 0))
		{
			__LIB_3__::func_784(5);
		}
		else
		{
			uParam3->f_6 = 1;
			uParam3->f_11 = 22;
			uParam3->f_1 = 1;
			__LIB_4__::func_151(iParam0, 146);
		}
	}
	else if (iParam1 == 3)
	{
		__LIB_3__::func_784(4);
		__LIB_4__::func_143();
	}
	else
	{
		__LIB_3__::func_664(1);
		if (func_2538(iParam0, 0, 0))
		{
			__LIB_3__::func_784(3);
		}
		else
		{
			uParam3->f_6 = 1;
			uParam3->f_11 = 22;
			uParam3->f_1 = 1;
			__LIB_4__::func_151(iParam0, 124);
			__LIB_5__::func_457(0);
			__LIB_3__::func_767(1);
			__LIB_4__::func_143();
		}
	}
	*uParam2 = 1;
}

void func_2728(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0xDB51B
{
	if (iParam1 == 0)
	{
		if (func_2538(iParam0, 0, 0))
		{
			__LIB_3__::func_784(1);
			*uParam2 = 1;
		}
		else
		{
			uParam3->f_8 = 1;
			uParam3->f_6 = 1;
			uParam3->f_10 = 1;
			uParam3->f_1 = 1;
			uParam3->f_11 = 10;
		}
	}
	else if (iParam1 == 1)
	{
		__LIB_3__::func_664(0);
		if (func_2538(iParam0, 0, 0))
		{
			__LIB_3__::func_784(2);
			*uParam2 = 1;
		}
		else
		{
			uParam3->f_6 = 1;
			uParam3->f_11 = 22;
			uParam3->f_1 = 1;
			__LIB_4__::func_151(iParam0, 124);
			__LIB_5__::func_457(0);
			__LIB_3__::func_767(1);
		}
	}
}

void func_2771(var uParam0, int iParam1)//Position - 0xDC9AB
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 939182/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 939168/*__LIB_5__::func_565*/;
			break;
		case 1:
			uParam0->f_30 = 939069/*__LIB_4__::func_945*/;
			break;
		case 2:
			uParam0->f_31 = 938007/*__LIB_6__::func_898*/;
			break;
		case 3:
			uParam0->f_34 = 937853/*__LIB_4__::func_265*/;
			break;
		case 4:
			uParam0->f_12 = 937800/*__LIB_5__::func_564*/;
			break;
		case 5:
			uParam0->f_11 = 937745/*__LIB_4__::func_263*/;
			break;
		case 37:
			uParam0->f_18 = 937627/*__LIB_4__::func_262*/;
			break;
		case 38:
			uParam0->f_9 = 937495/*__LIB_5__::func_981*/;
			break;
		case 6:
			uParam0->f_32 = 937380/*__LIB_4__::func_944*/;
			break;
		case 11:
			uParam0->f_11 = 937370/*__LIB_4__::func_261*/;
			break;
		case 12:
			uParam0->f_33 = 936201/*__LIB_6__::func_973*/;
			break;
		case 14:
			uParam0->f_11 = 936192/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 934880/*__LIB_7__::func_753*/;
			break;
		case 8:
			uParam0->f_37 = 934836/*__LIB_4__::func_258*/;
			break;
		case 7:
			uParam0->f_36 = 934813/*__LIB_4__::func_162*/;
			break;
		case 79:
			*uParam0 = 934789/*__LIB_5__::func_265*/;
			break;
		case 13:
			uParam0->f_2 = 934726/*__LIB_9__::func_795*/;
			break;
		case 15:
			uParam0->f_2 = 934646/*__LIB_9__::func_794*/;
			break;
		case 16:
			uParam0->f_5 = 934003/*__LIB_8__::func_929*/;
			break;
		case 108:
			uParam0->f_55 = 930861/*func_2892*/;
			break;
		case 17:
			uParam0->f_17 = 930160/*__LIB_9__::func_274*/;
			break;
		case 19:
			uParam0->f_17 = 930134/*__LIB_5__::func_979*/;
			break;
		case 20:
			uParam0->f_3 = 929955/*__LIB_6__::func_897*/;
			break;
		case 21:
			uParam0->f_3 = 929891/*__LIB_6__::func_867*/;
			break;
		case 74:
			uParam0->f_53 = 929617/*__LIB_6__::func_971*/;
			break;
		case 75:
			uParam0->f_4 = 929601/*__LIB_5__::func_562*/;
			break;
		case 22:
			uParam0->f_24 = 929498/*__LIB_5__::func_561*/;
			break;
		case 23:
			uParam0->f_26 = 929451/*__LIB_4__::func_256*/;
			break;
		case 24:
			uParam0->f_26 = 929414/*__LIB_4__::func_255*/;
			break;
		case 26:
			uParam0->f_38 = 928587/*func_2875*/;
			break;
		case 25:
			uParam0->f_23 = 928221/*func_2872*/;
			break;
		case 27:
			uParam0->f_25 = 927839/*__LIB_5__::func_885*/;
			break;
		case 28:
			uParam0->f_24 = 927788/*__LIB_4__::func_250*/;
			break;
		case 29:
			uParam0->f_28 = 927780/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 927543/*__LIB_5__::func_737*/;
			break;
		case 31:
			uParam0->f_39 = 927422/*__LIB_5__::func_296*/;
			break;
		case 33:
			uParam0->f_40 = 927002/*__LIB_6__::func_896*/;
			break;
		case 34:
			uParam0->f_41 = 915705/*__LIB_7__::func_844*/;
			break;
		case 36:
			uParam0->f_58 = 915660/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 912573/*__LIB_5__::func_559*/;
			break;
		case 45:
			uParam0->f_14 = 912564/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 912555/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 912547/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 912498/*__LIB_4__::func_942*/;
			break;
		case 47:
			uParam0->f_43 = 912416/*__LIB_4__::func_243*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 911652/*__LIB_6__::func_970*/;
			break;
		case 49:
			uParam0->f_8 = 911605/*__LIB_4__::func_237*/;
			break;
		case 50:
			*uParam0 = 911546/*__LIB_5__::func_736*/;
			break;
		case 51:
			*uParam0 = 911314/*__LIB_6__::func_969*/;
			break;
		case 52:
			uParam0->f_15 = 911303/*__LIB_4__::func_234*/;
			break;
		case 53:
			uParam0->f_13 = 911261/*__LIB_4__::func_233*/;
			break;
		case 54:
			uParam0->f_45 = 911253/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 911244/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 911235/*__LIB_1__::func_804*/;
			break;
		case 58:
			uParam0->f_13 = 911193/*__LIB_4__::func_232*/;
			break;
		case 59:
			*uParam0 = 911184/*__LIB_0__::func_114*/;
			break;
		case 60:
			*uParam0 = 911175/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 911164/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 911122/*__LIB_4__::func_231*/;
			break;
		case 63:
			uParam0->f_11 = 911113/*__LIB_1__::func_804*/;
			break;
		case 64:
			uParam0->f_47 = 911105/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 910043/*__LIB_7__::func_57*/;
			break;
		case 66:
			uParam0->f_21 = 909740/*__LIB_5__::func_263*/;
			break;
		case 67:
			uParam0->f_21 = 909626/*__LIB_4__::func_64*/;
			break;
		case 68:
			*uParam0 = 908783/*__LIB_6__::func_968*/;
			break;
		case 69:
			*uParam0 = 908774/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 908701/*__LIB_4__::func_230*/;
			break;
		case 71:
			uParam0->f_49 = 908692/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 908680/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 908478/*__LIB_5__::func_884*/;
			break;
		case 84:
			uParam0->f_1 = 908469/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 906736/*func_2790*/;
			break;
		case 87:
			uParam0->f_1 = 905283/*__LIB_6__::func_421*/;
			break;
		case 88:
			uParam0->f_1 = 905274/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 905266/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 905257/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 905248/*__LIB_0__::func_109*/;
			break;
		case 98:
			uParam0->f_1 = 905239/*__LIB_0__::func_109*/;
			break;
		case 100:
			uParam0->f_22 = 905231/*__LIB_0__::func_467*/;
			break;
		case 101:
			uParam0->f_22 = 905223/*__LIB_0__::func_467*/;
			break;
		case 78:
			uParam0->f_59 = 905051/*__LIB_7__::func_783*/;
			break;
		case 125:
			uParam0->f_19 = 905018/*__LIB_4__::func_215*/;
			break;
	}
}

int func_2790(int iParam0, var uParam1)//Position - 0xDD5F0
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	var uVar3;
	struct<3> Var4;
	struct<3> Var5;
	var uVar6;
	struct<3> Var7;
	struct<3> Var8;
	var uVar9;
	struct<3> Var10;
	struct<3> Var11;
	var uVar12;
	bool bVar13;
	bool bVar14;
	if (__LIB_4__::func_977())
	{
		return 1;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
		{
			func_371(&iVar0, &(uParam1->f_109), 60);
			__LIB_3__::func_633(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_282(&iVar0, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 1, 0, 1))
		{
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
		}
		else
		{
			return 0;
		}
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(uParam1->f_109), &(uParam1->f_189[2 /*3*/]), &(uParam1->f_189[1 /*3*/]));
		Var1 = { __LIB_4__::func_229(iParam0, __LIB_3__::func_616()) };
		Var2 = { __LIB_4__::func_228(iParam0, __LIB_3__::func_616()) };
		uVar3 = __LIB_4__::func_225(iParam0, __LIB_3__::func_616());
		Var4 = { __LIB_4__::func_227(iParam0, __LIB_3__::func_616()) };
		Var5 = { __LIB_4__::func_226(iParam0, __LIB_3__::func_616()) };
		uVar6 = __LIB_4__::func_225(iParam0, __LIB_3__::func_616());
		Var7 = { __LIB_4__::func_224(iParam0, __LIB_3__::func_616()) };
		Var8 = { __LIB_4__::func_223(iParam0, __LIB_3__::func_616()) };
		uVar9 = __LIB_4__::func_220(iParam0, __LIB_3__::func_616());
		Var10 = { __LIB_4__::func_222(iParam0, __LIB_3__::func_616()) };
		Var11 = { __LIB_4__::func_221(iParam0, __LIB_3__::func_616()) };
		uVar12 = __LIB_4__::func_220(iParam0, __LIB_3__::func_616());
		bVar13 = VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar0));
		bVar14 = !(uParam1->f_189[1 /*3*/].f_1 - uParam1->f_189[2 /*3*/].f_1) > 7f;
		if (bVar13)
		{
			MISC::SET_BIT(&(uParam1->f_188), 5);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_188), 5);
		}
		return __LIB_6__::func_820(&(Global_1946250.f_3638), Var1, Var2, uVar3, Var4, Var5, uVar6, bVar13, Var7, Var8, uVar9, Var10, Var11, uVar12, bVar14, 1056964608, 1036831949);
	}
	return 1;
}

void func_2872(int iParam0, int iParam1)//Position - 0xE29DD
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	Var2 = { __LIB_4__::func_252(iParam0) };
	if (__LIB_6__::func_897(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_596(iParam0, Var2, &bVar0, &bVar1, 1, 0);
		if (bVar1)
		{
			__LIB_5__::func_189(iParam1, 1, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_5__::func_189(iParam1, 2, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 2, 0);
		}
		if ((bVar1 || bVar0) && !__LIB_3__::func_779())
		{
			__LIB_6__::func_896(iParam0, -1);
		}
		if (__LIB_3__::func_661(0, iParam1))
		{
			__LIB_6__::func_896(iParam0, -1);
		}
		else if (__LIB_3__::func_661(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var2, 1, 0, 0, 0, -1, -1, -1);
			}
			__LIB_7__::func_809(iParam0);
		}
		else if (__LIB_3__::func_661(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var2, 0, 0, 1, 0, -1, -1, -1);
			}
			__LIB_7__::func_809(iParam0);
		}
	}
	else
	{
		__LIB_5__::func_189(iParam1, 1, 0);
		__LIB_5__::func_189(iParam1, 2, 0);
	}
}

void func_2875(var uParam0, var uParam1)//Position - 0xE2B4B
{
	if (__LIB_3__::func_929(PLAYER::PLAYER_ID()))
	{
		func_2876(uParam0, uParam1);
	}
}

void func_2876(var uParam0, var uParam1)//Position - 0xE2B69
{
	int iVar0;
	iVar0 = __LIB_3__::func_785();
	switch (iVar0)
	{
		case 0:
			__LIB_9__::func_273(uParam0, uParam1);
			break;
		case 1:
			func_2877(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_2877(var uParam0, var uParam1)//Position - 0xE2BA3
{
	int iVar0;
	int iVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_596(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, 1, 0);
	bVar2 = (iVar0 || iVar1);
	if (!bVar2)
	{
		uParam1->f_8 = 1;
		uParam1->f_6 = 1;
		uParam1->f_11 = 10;
		__LIB_5__::func_462();
		if (!__LIB_4__::func_251())
		{
			*uParam1 = 1;
			uParam1->f_9 = 1;
		}
		return;
	}
	if (uParam0->f_3 && !uParam0->f_5)
	{
		*uParam1 = 1;
		__LIB_5__::func_462();
		if (!__LIB_4__::func_251())
		{
			uParam1->f_4 = 1;
		}
	}
	else
	{
		uParam1->f_2 = 1;
		if (uParam0->f_5)
		{
			uParam1->f_3 = 1;
			__LIB_1__::func_767("ARENA_ENT_T" /* GXT: ARENA WORKSHOP */);
		}
		else if (uParam0->f_2)
		{
			uParam1->f_8 = 1;
			uParam1->f_5 = 1;
			__LIB_5__::func_462();
		}
	}
}

int func_2892(var uParam0, var uParam1, var uParam2)//Position - 0xE342D
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	*uParam2 = 0;
	if (__LIB_3__::func_717(uParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			iVar3 = __LIB_4__::func_236(*uParam0);
			if (__LIB_1__::func_588(iVar2))
			{
				__LIB_7__::func_21(uParam1);
				return 0;
			}
			if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iVar2))
			{
				__LIB_7__::func_21(uParam1);
				return 0;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iVar2) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
			{
				__LIB_7__::func_21(uParam1);
				return 0;
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !__LIB_3__::func_561(ENTITY::GET_ENTITY_MODEL(iVar2), 18))
			{
				__LIB_7__::func_21(uParam1);
				return 0;
			}
			iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1, false);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar4) || PED::IS_PED_INJURED(iVar4))
			{
				__LIB_7__::func_21(uParam1);
				return 0;
			}
			iVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar4);
			if ((__LIB_0__::func_872(iVar2, 1) && __LIB_6__::func_854(iVar2) != iVar5) && !Global_1852994.f_171)
			{
				__LIB_7__::func_21(uParam1);
				return 0;
			}
			if ((((__LIB_0__::func_872(iVar2, 1) && __LIB_6__::func_854(iVar2) == iVar5) && __LIB_2__::func_734()) && __LIB_5__::func_187(PLAYER::PLAYER_ID(), -1)) && !__LIB_3__::func_644(PLAYER::PLAYER_ID()))
			{
				__LIB_7__::func_21(uParam1);
				return 0;
			}
			if (__LIB_3__::func_689(iVar2))
			{
				__LIB_7__::func_21(uParam1);
				return 0;
			}
			if (__LIB_0__::func_870(iVar2, 1) && __LIB_6__::func_856(iVar2, 1, 0) != iVar5)
			{
				__LIB_7__::func_21(uParam1);
				return 0;
			}
			if (__LIB_2__::func_116(iVar2, 1))
			{
				__LIB_7__::func_21(uParam1);
				return 0;
			}
			if (__LIB_0__::func_871(iVar2, 1))
			{
				__LIB_7__::func_21(uParam1);
				return 0;
			}
			if ((__LIB_1__::func_693(iVar5, 1, 1) && __LIB_3__::func_561(ENTITY::GET_ENTITY_MODEL(iVar2), 18)) && __LIB_4__::func_235(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar4), iVar3))
			{
				if (__LIB_5__::func_187(PLAYER::PLAYER_ID(), -1))
				{
					if (__LIB_0__::func_872(iVar2, 1) && !Global_1852994.f_171)
					{
						if (__LIB_1__::func_463() >= 0)
						{
							if ((BitTest(Global_1585857[__LIB_1__::func_463() /*142*/].f_103, 1) || BitTest(Global_1585857[__LIB_1__::func_463() /*142*/].f_103, 6)) || BitTest(Global_1585857[__LIB_1__::func_463() /*142*/].f_103, 10))
							{
								return 0;
							}
						}
						else
						{
							return 0;
						}
					}
					if (!TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2) && !PED::GET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 373))
					{
						if (func_2901(uParam0, iVar2, ENTITY::GET_ENTITY_MODEL(iVar2)) && (!VEHICLE::IS_VEHICLE_MODEL(iVar2, joaat("oppressor2")) || (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 15f && ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(iVar2) <= 1f)))
						{
							if (__LIB_9__::func_996(uParam1, iVar2, !Global_1852994.f_171))
							{
								if ((VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iVar2) || ENTITY::IS_ENTITY_IN_AIR(iVar2)) || !ENTITY::IS_ENTITY_IN_AIR(iVar2))
								{
									__LIB_0__::func_627(&(uParam1->f_397), 1, 0);
								}
								if (__LIB_0__::func_864(&(uParam1->f_397)) && !__LIB_0__::func_937(&(uParam1->f_397), 750, 1))
								{
									iVar1 = 1;
								}
								if (iVar1 || ((__LIB_5__::func_187(PLAYER::PLAYER_ID(), -1) && __LIB_3__::func_644(PLAYER::PLAYER_ID())) && __LIB_0__::func_172(__LIB_5__::func_196(PLAYER::PLAYER_ID())) == 13))
								{
									if (__LIB_5__::func_210() || (__LIB_3__::func_644(PLAYER::PLAYER_ID()) && __LIB_0__::func_172(__LIB_5__::func_196(PLAYER::PLAYER_ID())) == 13))
									{
										if ((func_2901(uParam0, iVar2, ENTITY::GET_ENTITY_MODEL(iVar2)) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1, 30)) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_3, 2))
										{
											__LIB_3__::func_122(&(uParam1->f_22.f_94));
											__LIB_5__::func_435(1, *uParam0);
											__LIB_5__::func_783(uParam1, 0);
											__LIB_7__::func_804(iVar2);
											return 1;
										}
										else if ((__LIB_5__::func_187(PLAYER::PLAYER_ID(), -1) && __LIB_3__::func_644(PLAYER::PLAYER_ID())) && __LIB_0__::func_172(__LIB_5__::func_196(PLAYER::PLAYER_ID())) == 13)
										{
											__LIB_3__::func_122(&(uParam1->f_22.f_94));
											__LIB_7__::func_804(iVar2);
											return 1;
										}
										else if ((__LIB_3__::func_701(PLAYER::PLAYER_PED_ID()) && __LIB_5__::func_187(PLAYER::PLAYER_ID(), -1)) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1, 30))
										{
											__LIB_5__::func_435(1, *uParam0);
											__LIB_5__::func_783(uParam1, 0);
											__LIB_7__::func_804(iVar2);
											return 1;
										}
									}
								}
							}
						}
					}
				}
				else
				{
					__LIB_10__::func_31(*uParam0);
					bVar6 = __LIB_3__::func_698(iVar5) == uParam0->f_1;
					if (bVar6)
					{
						if (!__LIB_4__::func_257(uParam0->f_1))
						{
							bVar6 = false;
						}
					}
					else if (BitTest(Global_1946250.f_4523, 30))
					{
						bVar6 = true;
					}
					if (__LIB_3__::func_643(PLAYER::PLAYER_ID()) && bVar6)
					{
						__LIB_3__::func_122(&(uParam1->f_22.f_94));
						PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 1);
						__LIB_1__::func_33(0);
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, true);
						__LIB_3__::func_642();
						return 1;
					}
				}
			}
			else
			{
				if (!bVar0)
				{
					__LIB_3__::func_122(&(uParam1->f_22.f_94));
				}
				if (BitTest(uParam1->f_22, 9))
				{
					__LIB_5__::func_435(0, -1);
				}
				__LIB_5__::func_783(uParam1, 1);
				return 0;
			}
		}
	}
	if (__LIB_3__::func_717(uParam0))
	{
		if (!bVar0)
		{
			__LIB_3__::func_122(&(uParam1->f_22.f_94));
		}
	}
	if (BitTest(uParam1->f_22, 9))
	{
		__LIB_5__::func_435(0, -1);
	}
	__LIB_5__::func_783(uParam1, 1);
	return 0;
}

int func_2901(var uParam0, int iParam1, int iParam2)//Position - 0xE3DBD
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	struct<3> Var7;
	struct<3> Var8;
	struct<3> Var9;
	struct<3> Var10;
	struct<3> Var11;
	struct<3> Var12;
	struct<3> Var13;
	__LIB_3__::func_716(iParam1, iParam2, &Var0, &Var1, &Var2, &Var3);
	__LIB_3__::func_715(iParam1, iParam2, &Var4, &Var5, &Var6, &Var7);
	Var8 = { func_2902(Var4, Var0, 0f, 1f, 0.5f) };
	Var9 = { func_2902(Var5, Var1, 0f, 1f, 0.5f) };
	Var10 = { func_2902(Var6, Var2, 0f, 1f, 0.5f) };
	Var11 = { func_2902(Var7, Var3, 0f, 1f, 0.5f) };
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var8, uParam0->f_7, uParam0->f_10, uParam0->f_13, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(Var9, uParam0->f_7, uParam0->f_10, uParam0->f_13, false, true))
	{
		if (__LIB_3__::func_526(ENTITY::GET_ENTITY_HEADING(iParam1), uParam0->f_14, 75f))
		{
			return 1;
		}
	}
	Var12 = { func_2902(Var4, Var5, 0f, 1f, 0.5f) };
	Var13 = { func_2902(Var0, Var1, 0f, 1f, 0.5f) };
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var12, uParam0->f_7, uParam0->f_10, uParam0->f_13, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(Var13, uParam0->f_7, uParam0->f_10, uParam0->f_13, false, true))
	{
		if (__LIB_3__::func_526(ENTITY::GET_ENTITY_HEADING(iParam1), uParam0->f_14, 75f))
		{
			return 1;
		}
	}
	else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var10, uParam0->f_7, uParam0->f_10, uParam0->f_13, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(Var11, uParam0->f_7, uParam0->f_10, uParam0->f_13, false, true))
	{
		if (__LIB_3__::func_526(ENTITY::GET_ENTITY_HEADING(iParam1), (uParam0->f_14 - 180f), 75f))
		{
			return 1;
		}
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam1, uParam0->f_7, uParam0->f_10, uParam0->f_13, false, true, 0))
	{
		if (__LIB_3__::func_526(ENTITY::GET_ENTITY_HEADING(iParam1), uParam0->f_14, 75f) || __LIB_3__::func_526(ENTITY::GET_ENTITY_HEADING(iParam1), (uParam0->f_14 - 180f), 75f))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_2902(struct<3> Param0, struct<2> Param1, var uParam2, float fParam3, float fParam4, float fParam5)//Position - 0xE3FD3
{
	return __LIB_3__::func_714(Param0.f_0, Param1.f_0, fParam3, fParam4, fParam5), __LIB_3__::func_714(Param0.f_1, Param1.f_1, fParam3, fParam4, fParam5), __LIB_3__::func_714(Param0.f_2, Param1.f_2, fParam3, fParam4, fParam5);
}

void func_2939(var uParam0, int iParam1)//Position - 0xE54B7
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1030924/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1030868/*__LIB_4__::func_312*/;
			break;
		case 2:
			uParam0->f_31 = 1030524/*__LIB_5__::func_307*/;
			break;
		case 3:
			uParam0->f_34 = 1030485/*__LIB_4__::func_311*/;
			break;
		case 4:
			uParam0->f_12 = 1030452/*__LIB_4__::func_310*/;
			break;
		case 5:
			uParam0->f_11 = 1030441/*__LIB_4__::func_309*/;
			break;
		case 6:
			uParam0->f_32 = 1030377/*__LIB_4__::func_308*/;
			break;
		case 111:
			uParam0->f_35 = 1030354/*__LIB_5__::func_306*/;
			break;
		case 79:
			*uParam0 = 1030330/*__LIB_5__::func_265*/;
			break;
		case 37:
			uParam0->f_18 = 1030212/*__LIB_4__::func_307*/;
			break;
		case 38:
			uParam0->f_9 = 1030133/*__LIB_5__::func_888*/;
			break;
		case 11:
			uParam0->f_11 = 1030124/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 1029528/*__LIB_9__::func_316*/;
			break;
		case 109:
			uParam0->f_56 = 1029520/*__LIB_0__::func_467*/;
			break;
		case 15:
			uParam0->f_2 = 1024324/*__LIB_9__::func_796*/;
			break;
		case 13:
			uParam0->f_2 = 1024315/*__LIB_0__::func_114*/;
			break;
		case 75:
			uParam0->f_4 = 1024300/*__LIB_5__::func_303*/;
			break;
		case 16:
			uParam0->f_5 = 1023825/*__LIB_9__::func_277*/;
			break;
		case 108:
			uParam0->f_55 = 1019855/*__LIB_10__::func_72*/;
			break;
		case 17:
			uParam0->f_17 = 1019079/*__LIB_9__::func_276*/;
			break;
		case 19:
			uParam0->f_17 = 1019053/*__LIB_5__::func_982*/;
			break;
		case 20:
			uParam0->f_3 = 1018842/*__LIB_9__::func_306*/;
			break;
		case 21:
			uParam0->f_3 = 1018679/*__LIB_7__::func_847*/;
			break;
		case 74:
			uParam0->f_53 = 1018070/*__LIB_7__::func_846*/;
			break;
		case 22:
			uParam0->f_24 = 1017988/*__LIB_4__::func_288*/;
			break;
		case 25:
			uParam0->f_23 = 1017072/*func_3011*/;
			break;
		case 30:
			uParam0->f_8 = 1015821/*__LIB_7__::func_873*/;
			break;
		case 31:
			uParam0->f_39 = 1015144/*__LIB_9__::func_275*/;
			break;
		case 33:
			uParam0->f_40 = 1014241/*__LIB_9__::func_305*/;
			break;
		case 14:
			uParam0->f_11 = 1014232/*__LIB_0__::func_162*/;
			break;
		case 34:
			uParam0->f_41 = 1013457/*__LIB_5__::func_568*/;
			break;
		case 36:
			uParam0->f_58 = 1013404/*__LIB_3__::func_945*/;
			break;
		case 35:
			uParam0->f_42 = 944977/*__LIB_7__::func_845*/;
			break;
		case 45:
			uParam0->f_14 = 944968/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 944959/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 944951/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 944928/*__LIB_4__::func_273*/;
			break;
		case 47:
			uParam0->f_43 = 944788/*__LIB_4__::func_272*/;
			break;
		case 49:
			uParam0->f_8 = 944753/*__LIB_4__::func_271*/;
			break;
		case 50:
			*uParam0 = 944715/*__LIB_5__::func_725*/;
			break;
		case 51:
			*uParam0 = 944691/*__LIB_6__::func_899*/;
			break;
		case 52:
			uParam0->f_15 = 944680/*__LIB_4__::func_270*/;
			break;
		case 53:
			uParam0->f_13 = 944601/*__LIB_8__::func_854*/;
			break;
		case 54:
			uParam0->f_45 = 944593/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 944584/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 944574/*__LIB_3__::func_938*/;
			break;
		case 58:
			uParam0->f_13 = 944285/*__LIB_8__::func_853*/;
			break;
		case 64:
			uParam0->f_47 = 942695/*__LIB_9__::func_978*/;
			break;
		case 65:
			uParam0->f_21 = 941732/*__LIB_7__::func_58*/;
			break;
		case 66:
			uParam0->f_21 = 941537/*__LIB_5__::func_887*/;
			break;
		case 67:
			uParam0->f_21 = 941434/*__LIB_5__::func_886*/;
			break;
		case 68:
			*uParam0 = 940745/*__LIB_5__::func_215*/;
			break;
		case 69:
			*uParam0 = 940736/*__LIB_0__::func_109*/;
			break;
		case 70:
			uParam0->f_48 = 940724/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 940715/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 940703/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 940329/*__LIB_6__::func_974*/;
			break;
		case 73:
			uParam0->f_51 = 940320/*__LIB_0__::func_114*/;
			break;
		case 78:
			uParam0->f_59 = 940203/*__LIB_7__::func_810*/;
			break;
	}
}

void func_3011(int iParam0, int iParam1)//Position - 0xF84F0
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5[10];
	struct<3> Var6;
	int iVar7;
	struct<13> Var8;
	bool bVar9;
	iVar4 = -1;
	if (__LIB_9__::func_306(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_1__::func_526())
		{
			iVar4 = __LIB_3__::func_680();
		}
		Var6 = { __LIB_1__::func_694(PLAYER::PLAYER_ID()) };
		iVar3 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar5, -1);
		if (iVar3 > 0)
		{
			iVar2 = 0;
			while (iVar2 < iVar3)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar5[iVar2], false) && PED::IS_PED_A_PLAYER(uVar5[iVar2]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar5[iVar2], true), Var6) <= IntToFloat(__LIB_3__::func_679(iParam0)))
					{
						iVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar5[iVar2]);
						Var8 = { __LIB_1__::func_696(iVar7) };
						if (!bVar0)
						{
							if ((iVar4 != -1 && iVar4 == __LIB_3__::func_106(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if (((!__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(iVar7)) && !__LIB_1__::func_907(iVar7, 1)) && !__LIB_5__::func_424(iVar7)) && !__LIB_3__::func_728(iVar7, 14))
								{
									bVar0 = true;
								}
							}
						}
						if (((((!bVar1 && __LIB_3__::func_360(PLAYER::PLAYER_ID(), iVar7)) && !__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(iVar7))) && !__LIB_1__::func_907(iVar7, 1)) && !__LIB_5__::func_424(iVar7)) && !__LIB_3__::func_728(iVar7, 14))
						{
							bVar1 = true;
						}
						if ((!bVar1 && __LIB_7__::func_22(PLAYER::PLAYER_ID())) && __LIB_3__::func_360(iVar7, PLAYER::PLAYER_ID()))
						{
							bVar1 = true;
						}
					}
					if (bVar1 && bVar0)
					{
					}
					else
					{
						iVar2++;
					}
					if (bVar1)
					{
						__LIB_5__::func_189(iParam1, 1, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 1, 0);
					}
					if (bVar0)
					{
						__LIB_5__::func_189(iParam1, 2, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 2, 0);
					}
					if (((bVar1 || bVar0) && !__LIB_3__::func_779()) && !__LIB_5__::func_241(PLAYER::PLAYER_ID()))
					{
						__LIB_9__::func_305(iParam0, -1);
					}
					bVar9 = __LIB_1__::func_637(PLAYER::PLAYER_ID());
					if (__LIB_3__::func_661(0, iParam1))
					{
						__LIB_9__::func_305(iParam0, -1);
					}
					else if (__LIB_3__::func_661(1, iParam1))
					{
						if (bVar1)
						{
							__LIB_8__::func_855(1);
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var6, 1, 0, 0, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						if (!__LIB_4__::func_947(PLAYER::PLAYER_ID()))
						{
							func_3012(iParam0);
						}
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_8__::func_855(1);
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var6, 0, 0, 1, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						if (!__LIB_4__::func_947(PLAYER::PLAYER_ID()))
						{
							func_3012(iParam0);
						}
					}
					Jump @693; //curOff = 674
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_3012(int iParam0)//Position - 0xF87A8
{
	__LIB_9__::func_305(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_3085(var uParam0, int iParam1)//Position - 0xFBB15
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1094008/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1093768/*__LIB_5__::func_592*/;
			break;
		case 2:
			uParam0->f_31 = 1091467/*__LIB_5__::func_591*/;
			break;
		case 3:
			uParam0->f_34 = 1091258/*__LIB_4__::func_393*/;
			break;
		case 4:
			uParam0->f_12 = 1091052/*__LIB_5__::func_590*/;
			break;
		case 5:
			uParam0->f_11 = 1090974/*__LIB_4__::func_391*/;
			break;
		case 37:
			uParam0->f_18 = 1090835/*__LIB_4__::func_951*/;
			break;
		case 38:
			uParam0->f_9 = 1090779/*__LIB_6__::func_904*/;
			break;
		case 42:
			uParam0->f_10 = 1090618/*__LIB_5__::func_988*/;
			break;
		case 6:
			uParam0->f_32 = 1090382/*__LIB_4__::func_390*/;
			break;
		case 111:
			uParam0->f_35 = 1090368/*__LIB_5__::func_589*/;
			break;
		case 11:
			uParam0->f_11 = 1090359/*__LIB_1__::func_804*/;
			break;
		case 12:
			uParam0->f_33 = 1086989/*__LIB_9__::func_500*/;
			break;
		case 14:
			uParam0->f_11 = 1086980/*__LIB_1__::func_806*/;
			break;
		case 109:
			uParam0->f_56 = 1073291/*__LIB_5__::func_316*/;
			break;
		case 79:
			*uParam0 = 1073035/*__LIB_5__::func_588*/;
			break;
		case 13:
			uParam0->f_2 = 1072986/*__LIB_5__::func_745*/;
			break;
		case 15:
			uParam0->f_2 = 1072775/*__LIB_9__::func_797*/;
			break;
		case 44:
			*uParam0 = 1072766/*__LIB_0__::func_114*/;
			break;
		case 75:
			uParam0->f_4 = 1072737/*__LIB_5__::func_587*/;
			break;
		case 16:
			uParam0->f_5 = 1072010/*__LIB_9__::func_280*/;
			break;
		case 108:
			uParam0->f_55 = 1068156/*__LIB_10__::func_73*/;
			break;
		case 17:
			uParam0->f_17 = 1066843/*__LIB_9__::func_279*/;
			break;
		case 19:
			uParam0->f_17 = 1066798/*__LIB_6__::func_983*/;
			break;
		case 20:
			uParam0->f_3 = 1066633/*__LIB_6__::func_903*/;
			break;
		case 21:
			uParam0->f_3 = 1066569/*__LIB_6__::func_867*/;
			break;
		case 74:
			uParam0->f_53 = 1066342/*__LIB_6__::func_982*/;
			break;
		case 22:
			uParam0->f_24 = 1066219/*__LIB_5__::func_585*/;
			break;
		case 26:
			uParam0->f_38 = 1062839/*func_3223*/;
			break;
		case 25:
			uParam0->f_23 = 1062518/*func_3221*/;
			break;
		case 27:
			uParam0->f_25 = 1061370/*__LIB_8__::func_970*/;
			break;
		case 28:
			uParam0->f_24 = 1061258/*__LIB_4__::func_371*/;
			break;
		case 29:
			uParam0->f_28 = 1061177/*__LIB_4__::func_370*/;
			break;
		case 30:
			uParam0->f_8 = 1060287/*__LIB_8__::func_969*/;
			break;
		case 31:
			uParam0->f_39 = 1059740/*__LIB_5__::func_740*/;
			break;
		case 33:
			uParam0->f_40 = 1059058/*__LIB_7__::func_59*/;
			break;
		case 32:
			*uParam0 = 1058965/*__LIB_6__::func_980*/;
			break;
		case 34:
			uParam0->f_41 = 1049699/*__LIB_5__::func_986*/;
			break;
		case 36:
			uParam0->f_58 = 1049641/*__LIB_4__::func_359*/;
			break;
		case 35:
			uParam0->f_42 = 945846/*__LIB_6__::func_975*/;
			break;
		case 45:
			uParam0->f_14 = 1049632/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 1049623/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 1049615/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1049566/*__LIB_4__::func_950*/;
			break;
		case 47:
			uParam0->f_43 = 1049274/*__LIB_4__::func_949*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 1046249/*__LIB_8__::func_986*/;
			break;
		case 49:
			uParam0->f_8 = 1046145/*__LIB_4__::func_948*/;
			break;
		case 50:
			*uParam0 = 1045862/*__LIB_7__::func_814*/;
			break;
		case 51:
			*uParam0 = 1045700/*__LIB_6__::func_978*/;
			break;
		case 52:
			uParam0->f_15 = 1045689/*__LIB_4__::func_344*/;
			break;
		case 53:
			uParam0->f_13 = 1045431/*__LIB_4__::func_343*/;
			break;
		case 54:
			uParam0->f_45 = 1045169/*__LIB_7__::func_813*/;
			break;
		case 56:
			uParam0->f_46 = 1045160/*__LIB_3__::func_969*/;
			break;
		case 57:
			uParam0->f_11 = 1044003/*__LIB_7__::func_848*/;
			break;
		case 58:
			uParam0->f_13 = 1043745/*__LIB_4__::func_338*/;
			break;
		case 59:
			*uParam0 = 1043466/*__LIB_5__::func_738*/;
			break;
		case 60:
			*uParam0 = 1043457/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 1043446/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 1043188/*__LIB_4__::func_336*/;
			break;
		case 55:
			uParam0->f_45 = 1043180/*__LIB_0__::func_467*/;
			break;
		case 63:
			uParam0->f_11 = 1043122/*__LIB_5__::func_985*/;
			break;
		case 64:
			uParam0->f_47 = 1042972/*__LIB_7__::func_812*/;
			break;
		case 65:
			uParam0->f_21 = 1041266/*__LIB_7__::func_874*/;
			break;
		case 66:
			uParam0->f_21 = 1040955/*__LIB_5__::func_575*/;
			break;
		case 67:
			uParam0->f_21 = 1040803/*__LIB_4__::func_334*/;
			break;
		case 68:
			*uParam0 = 1039803/*__LIB_6__::func_976*/;
			break;
		case 69:
			*uParam0 = 1039794/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 1039345/*__LIB_4__::func_331*/;
			break;
		case 71:
			uParam0->f_49 = 1039066/*__LIB_4__::func_330*/;
			break;
		case 107:
			uParam0->f_50 = 1039054/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1038821/*__LIB_5__::func_889*/;
			break;
		case 84:
			uParam0->f_1 = 1038812/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 1036717/*func_3106*/;
			break;
		case 87:
			uParam0->f_1 = 1033822/*__LIB_6__::func_422*/;
			break;
		case 88:
			uParam0->f_1 = 1033813/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 1033805/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 1033779/*__LIB_4__::func_316*/;
			break;
		case 97:
			uParam0->f_1 = 1033670/*__LIB_3__::func_976*/;
			break;
		case 98:
			uParam0->f_1 = 1032959/*func_3092*/;
			break;
		case 100:
			uParam0->f_22 = 1032797/*__LIB_4__::func_315*/;
			break;
		case 101:
			uParam0->f_22 = 1032670/*__LIB_7__::func_877*/;
			break;
		case 78:
			uParam0->f_59 = 1032380/*__LIB_7__::func_811*/;
			break;
		case 125:
			uParam0->f_19 = 1032356/*__LIB_4__::func_313*/;
			break;
	}
}

int func_3092(var uParam0, var uParam1)//Position - 0xFC2FF
{
	struct<3> Var0;
	struct<3> Var1;
	char* sVar2;
	int iVar3;
	Var0 = { -1560.336f, -3019.0583f, -74.8061f };
	Var1 = { 0f, 0f, -30f };
	sVar2 = "mini@strip_club@throwout_d@";
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[0]))
	{
		uParam1->f_140[0] = PED::CREATE_PED(4, joaat("S_M_Y_ClubBar_01"), Var0 + Vector(-10f, 0f, 0f), 0f, false, true);
		PED::SET_PED_DEFAULT_COMPONENT_VARIATION(uParam1->f_140[0]);
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[0], true);
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[1]))
	{
		uParam1->f_140[1] = PED::CREATE_PED(4, joaat("S_M_M_Bouncer_01"), Var0 + Vector(-10f, 0f, 0f), 0f, false, true);
		PED::SET_PED_DEFAULT_COMPONENT_VARIATION(uParam1->f_140[1]);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 0, 0, 2, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 2, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 3, 1, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 4, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 11, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam1->f_140[1], 8, 1, 0, 0);
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[1], true);
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[2]))
	{
		func_1455(&(uParam1->f_140[2]), PLAYER::PLAYER_ID(), 1, 0);
		ENTITY::SET_ENTITY_COORDS(uParam1->f_140[2], Var0 + Vector(-10f, 0f, 0f), false, false, false, true);
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[2], true);
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		if (__LIB_0__::func_121(uParam1->f_140[iVar3]))
		{
			if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(uParam1->f_140[iVar3]))
			{
				return 0;
			}
		}
		iVar3++;
	}
	MISC::SET_BIT(&(Global_1946250.f_2), 20);
	Var0 = { Var0 + Vector(0f, 4f, 0f) };
	__LIB_3__::func_900(&(Global_1946250.f_4073), 5000, "Club Tout", Var0, Var1, sVar2, "throwout_d_cam", 0, 0, 0, 0, 2);
	NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(PLAYER::PLAYER_PED_ID(), true, true);
	__LIB_1__::func_376(PLAYER::PLAYER_ID(), 0, 262144, 0);
	uParam1->f_27 = PED::CREATE_SYNCHRONIZED_SCENE(Var0, Var1, 2);
	if (__LIB_0__::func_121(uParam1->f_140[0]))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[0], false);
		TASK::TASK_SYNCHRONIZED_SCENE(uParam1->f_140[0], uParam1->f_27, sVar2, "throwout_d_bouncer_a", 1000f, -2f, 0, 0, 1000f, 0);
	}
	if (__LIB_0__::func_121(uParam1->f_140[1]))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[1], false);
		TASK::TASK_SYNCHRONIZED_SCENE(uParam1->f_140[1], uParam1->f_27, sVar2, "throwout_d_bouncer_b", 1000f, -2f, 0, 0, 1000f, 0);
	}
	if (__LIB_0__::func_121(uParam1->f_140[2]))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[2], false);
		TASK::TASK_SYNCHRONIZED_SCENE(uParam1->f_140[2], uParam1->f_27, sVar2, "throwout_d_victim", 1000f, -2f, 0, 0, 1000f, 0);
	}
	return 1;
}

int func_3106(int iParam0, var uParam1)//Position - 0xFD1AD
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var3;
	float fVar4;
	float fVar5;
	bool bVar6;
	struct<3> Var7;
	struct<3> Var8;
	float fVar9;
	iVar0 = __LIB_4__::func_322(iParam0);
	if (__LIB_4__::func_980(iVar0))
	{
		return 1;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
		{
			func_371(&iVar1, &(uParam1->f_109), 60);
			__LIB_3__::func_633(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_282(&iVar1, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 0, 0, 1))
		{
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
		}
		else
		{
			return 0;
		}
		Var2 = { __LIB_4__::func_329(iVar0) };
		Var3 = { __LIB_4__::func_328(iVar0) };
		fVar4 = __LIB_4__::func_327(iVar0);
		fVar5 = __LIB_4__::func_326(iVar0);
		bVar6 = false;
		Var7 = { __LIB_4__::func_325(iVar0) };
		Var8 = { __LIB_4__::func_324(iVar0) };
		fVar9 = __LIB_4__::func_323(iVar0);
		return __LIB_6__::func_423(&(Global_1946250.f_3638), Var2, Var3, fVar4, fVar5, bVar6, Var7, Var8, fVar9);
	}
	return 1;
}

void func_3221(int iParam0, int iParam1)//Position - 0x103676
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	Var2 = { __LIB_4__::func_301(iParam0) };
	if (__LIB_6__::func_903(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_596(iParam0, Var2, &bVar0, &bVar1, 1, 0);
		if (bVar1)
		{
			__LIB_5__::func_189(iParam1, 1, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 1, 0);
		}
		if (bVar0)
		{
			__LIB_5__::func_189(iParam1, 2, 1);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 2, 0);
		}
		if ((bVar1 || bVar0) && !__LIB_3__::func_779())
		{
			__LIB_7__::func_59(iParam0, -1);
		}
		if (__LIB_3__::func_661(0, iParam1))
		{
			__LIB_7__::func_59(iParam0, -1);
		}
		else if (__LIB_3__::func_661(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var2, 1, 0, 0, 0, -1, -1, -1);
			}
			__LIB_7__::func_850(iParam0);
		}
		else if (__LIB_3__::func_661(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var2, 0, 0, 1, 0, -1, -1, -1);
			}
			__LIB_7__::func_850(iParam0);
		}
	}
	else
	{
		__LIB_5__::func_189(iParam1, 1, 0);
		__LIB_5__::func_189(iParam1, 2, 0);
	}
}

void func_3223(var uParam0, var uParam1)//Position - 0x1037B7
{
	if (__LIB_3__::func_616() == 2)
	{
		func_3237(uParam0, uParam1);
	}
	else if (__LIB_3__::func_616() == 0)
	{
		if (__LIB_2__::func_72(PLAYER::PLAYER_ID(), 0))
		{
			__LIB_7__::func_851(uParam0, uParam1);
		}
		else
		{
			func_3225(uParam0, uParam1);
		}
	}
	else if (__LIB_3__::func_616() == 3)
	{
		if (__LIB_2__::func_72(PLAYER::PLAYER_ID(), 0))
		{
			__LIB_7__::func_851(uParam0, uParam1);
		}
		else
		{
			__LIB_4__::func_376(uParam1);
		}
	}
}

void func_3225(var uParam0, var uParam1)//Position - 0x103842
{
	int iVar0;
	iVar0 = __LIB_3__::func_785();
	switch (iVar0)
	{
		case 0:
			__LIB_9__::func_307(uParam0, uParam1);
			break;
		case 1:
			func_3226(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_3226(var uParam0, var uParam1)//Position - 0x10387C
{
	int iVar0;
	int iVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_596(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, __LIB_5__::func_576(PLAYER::PLAYER_ID()), 0);
	bVar2 = (iVar0 || iVar1);
	if (!bVar2)
	{
		uParam1->f_8 = 1;
		uParam1->f_6 = 1;
		uParam1->f_11 = 10;
		__LIB_5__::func_462();
		if (!__LIB_4__::func_375())
		{
			*uParam1 = 1;
			uParam1->f_9 = 1;
		}
		return;
	}
	if (uParam0->f_3 && !uParam0->f_5)
	{
		*uParam1 = 1;
		__LIB_5__::func_462();
		if (!__LIB_4__::func_375())
		{
			uParam1->f_4 = 1;
		}
	}
	else
	{
		uParam1->f_2 = 1;
		if (uParam0->f_5)
		{
			uParam1->f_3 = 1;
			if (__LIB_3__::func_616() == 2)
			{
				__LIB_1__::func_767("CLUB_TITLE" /* GXT: NIGHTCLUB */);
			}
			else
			{
				__LIB_1__::func_767("HUB_TITLE_2" /* GXT: NIGHTCLUB GARAGE */);
			}
		}
		else if (uParam0->f_2)
		{
			uParam1->f_8 = 1;
			uParam1->f_5 = 1;
			__LIB_5__::func_462();
		}
	}
}

void func_3237(var uParam0, var uParam1)//Position - 0x103D96
{
	int iVar0;
	iVar0 = __LIB_3__::func_785();
	switch (iVar0)
	{
		case 0:
			__LIB_9__::func_278(uParam0, uParam1);
			break;
		case 1:
			func_3246(uParam0, uParam1);
			break;
		case 2:
			__LIB_16__::func_188(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_3246(var uParam0, var uParam1)//Position - 0x104245
{
	int iVar0;
	int iVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_596(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, 1, 0);
	bVar2 = (iVar0 || iVar1);
	if (!bVar2)
	{
		uParam1->f_8 = 1;
		uParam1->f_6 = 1;
		uParam1->f_9 = 1;
		*uParam1 = 1;
		uParam1->f_11 = 10;
		MISC::SET_BIT(&(Global_1946250.f_3), 9);
		__LIB_5__::func_462();
		return;
	}
	if (uParam0->f_3 && !uParam0->f_5)
	{
		__LIB_5__::func_462();
		if (__LIB_8__::func_931(*uParam0))
		{
			*uParam1 = 1;
		}
		else
		{
			uParam1->f_4 = 1;
		}
	}
	else
	{
		uParam1->f_2 = 1;
		if (uParam0->f_5)
		{
			uParam1->f_3 = 1;
			if (__LIB_3__::func_616() == 2)
			{
				__LIB_1__::func_767("CLUB_TITLE" /* GXT: NIGHTCLUB */);
			}
			else
			{
				__LIB_1__::func_767("HUB_TITLE_2" /* GXT: NIGHTCLUB GARAGE */);
			}
		}
		else if (uParam0->f_2)
		{
			uParam1->f_5 = 1;
			MISC::SET_BIT(&(Global_1946250.f_3), 9);
			__LIB_7__::func_59(*uParam0, -1);
			__LIB_5__::func_462();
		}
	}
}

void func_3316(var uParam0, int iParam1)//Position - 0x10B181
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1101541/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1101485/*__LIB_4__::func_411*/;
			break;
		case 2:
			uParam0->f_31 = 1101216/*__LIB_5__::func_324*/;
			break;
		case 3:
			uParam0->f_34 = 1101155/*__LIB_4__::func_410*/;
			break;
		case 4:
			uParam0->f_12 = 1101124/*__LIB_4__::func_409*/;
			break;
		case 6:
			uParam0->f_32 = 1101060/*__LIB_4__::func_408*/;
			break;
		case 111:
			uParam0->f_35 = 1101051/*__LIB_0__::func_162*/;
			break;
		case 11:
			uParam0->f_11 = 1101042/*__LIB_0__::func_109*/;
			break;
		case 14:
			uParam0->f_11 = 1101033/*__LIB_0__::func_162*/;
			break;
		case 12:
			uParam0->f_33 = 1100822/*__LIB_9__::func_133*/;
			break;
		case 109:
			uParam0->f_56 = 1100814/*__LIB_0__::func_467*/;
			break;
		case 79:
			*uParam0 = 1100790/*__LIB_5__::func_265*/;
			break;
		case 13:
			uParam0->f_2 = 1100781/*__LIB_0__::func_114*/;
			break;
		case 15:
			uParam0->f_2 = 1099839/*__LIB_9__::func_501*/;
			break;
		case 75:
			uParam0->f_4 = 1099830/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1099805/*__LIB_5__::func_323*/;
			break;
		case 108:
			uParam0->f_55 = 1099796/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 1099771/*__LIB_5__::func_322*/;
			break;
		case 19:
			uParam0->f_17 = 1099760/*__LIB_3__::func_860*/;
			break;
		case 20:
			uParam0->f_3 = 1099751/*__LIB_0__::func_114*/;
			break;
		case 21:
			uParam0->f_3 = 1099742/*__LIB_0__::func_114*/;
			break;
		case 74:
			uParam0->f_53 = 1099274/*__LIB_8__::func_934*/;
			break;
		case 22:
			uParam0->f_24 = 1099155/*__LIB_5__::func_596*/;
			break;
		case 25:
			uParam0->f_23 = 1098385/*func_3358*/;
			break;
		case 30:
			uParam0->f_8 = 1098239/*__LIB_5__::func_595*/;
			break;
		case 31:
			uParam0->f_39 = 1098228/*__LIB_3__::func_860*/;
			break;
		case 33:
			uParam0->f_40 = 1098021/*__LIB_9__::func_282*/;
			break;
		case 34:
			uParam0->f_41 = 1097694/*__LIB_5__::func_594*/;
			break;
		case 36:
			uParam0->f_58 = 1097641/*__LIB_3__::func_945*/;
			break;
		case 35:
			uParam0->f_42 = 1096868/*__LIB_5__::func_891*/;
			break;
		case 45:
			uParam0->f_14 = 1096859/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 1096850/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 1096842/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1096831/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1096592/*__LIB_5__::func_890*/;
			break;
		case 49:
			uParam0->f_8 = 1096583/*__LIB_0__::func_114*/;
			break;
		case 50:
			*uParam0 = 1096574/*__LIB_0__::func_114*/;
			break;
		case 51:
			*uParam0 = 1096565/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 1096554/*__LIB_4__::func_401*/;
			break;
		case 53:
			uParam0->f_13 = 1096543/*__LIB_3__::func_554*/;
			break;
		case 54:
			uParam0->f_45 = 1096535/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 1096526/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1096517/*__LIB_1__::func_804*/;
			break;
		case 58:
			uParam0->f_13 = 1096224/*__LIB_8__::func_186*/;
			break;
		case 64:
			uParam0->f_47 = 1095680/*__LIB_8__::func_222*/;
			break;
		case 65:
			uParam0->f_21 = 1095672/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 1095604/*__LIB_5__::func_319*/;
			break;
		case 67:
			uParam0->f_21 = 1095464/*__LIB_5__::func_593*/;
			break;
		case 68:
			*uParam0 = 1095020/*__LIB_5__::func_318*/;
			break;
		case 69:
			*uParam0 = 1095011/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 1094999/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1094990/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1094978/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1094969/*__LIB_0__::func_114*/;
			break;
		case 78:
			uParam0->f_59 = 1094961/*__LIB_0__::func_467*/;
			break;
	}
}

void func_3358(int iParam0, int iParam1)//Position - 0x10C291
{
	var uVar0[10];
	int iVar1;
	bool bVar2;
	bool bVar3;
	struct<3> Var4;
	int iVar5;
	int iVar6;
	int iVar7;
	struct<13> Var8;
	iVar1 = -1;
	if (__LIB_0__::func_114(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_1__::func_526())
		{
			iVar1 = __LIB_3__::func_680();
		}
		Var4 = { __LIB_8__::func_933(iParam0) };
		iVar5 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar0, -1);
		if (iVar5 > 0)
		{
			iVar6 = 0;
			while (iVar6 < iVar5)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar0[iVar6], false) && PED::IS_PED_A_PLAYER(uVar0[iVar6]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar0[iVar6], true), Var4) <= IntToFloat(__LIB_3__::func_679(iParam0)))
					{
						iVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar0[iVar6]);
						Var8 = { __LIB_1__::func_696(iVar7) };
						if (!bVar2)
						{
							if ((iVar1 != -1 && iVar1 == __LIB_3__::func_106(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if (((!__LIB_1__::func_907(iVar7, 1) && !__LIB_5__::func_424(iVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_1__::func_101(PLAYER::PLAYER_PED_ID()))
								{
									bVar2 = true;
								}
							}
						}
						if ((((!bVar3 && __LIB_3__::func_360(PLAYER::PLAYER_ID(), iVar7)) && !__LIB_5__::func_424(iVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_1__::func_101(PLAYER::PLAYER_PED_ID()))
						{
							bVar3 = true;
						}
					}
					if (bVar3 && bVar2)
					{
					}
					else
					{
						iVar6++;
					}
					if (bVar3)
					{
						__LIB_5__::func_189(iParam1, 1, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 1, 0);
					}
					if (bVar2)
					{
						__LIB_5__::func_189(iParam1, 2, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 2, 0);
					}
					if ((bVar3 || bVar2) && !__LIB_3__::func_779())
					{
						__LIB_9__::func_282(iParam0, -1);
					}
					if (__LIB_3__::func_661(0, iParam1))
					{
						__LIB_9__::func_282(iParam0, -1);
					}
					else if (__LIB_3__::func_661(1, iParam1))
					{
						if (bVar3)
						{
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 1, 0, 0, 0, -1, -1, -1);
						}
						func_3359(iParam0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar2)
						{
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 0, 0, 1, 0, -1, -1, -1);
						}
						func_3359(iParam0);
					}
					Jump @551; //curOff = 532
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_3359(int iParam0)//Position - 0x10C4BB
{
	__LIB_9__::func_282(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_3394(var uParam0, int iParam1)//Position - 0x10CEEE
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1200520/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1200416/*__LIB_4__::func_515*/;
			break;
		case 2:
			uParam0->f_31 = 1199681/*__LIB_5__::func_620*/;
			break;
		case 3:
			uParam0->f_34 = 1199599/*__LIB_4__::func_513*/;
			break;
		case 4:
			uParam0->f_12 = 1199456/*__LIB_4__::func_512*/;
			break;
		case 5:
			uParam0->f_11 = 1199446/*__LIB_4__::func_511*/;
			break;
		case 37:
			uParam0->f_18 = 1199311/*__LIB_4__::func_510*/;
			break;
		case 42:
			uParam0->f_10 = 1199244/*__LIB_5__::func_897*/;
			break;
		case 6:
			uParam0->f_32 = 1199132/*__LIB_4__::func_509*/;
			break;
		case 111:
			uParam0->f_35 = 1198893/*__LIB_5__::func_751*/;
			break;
		case 11:
			uParam0->f_11 = 1198884/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 1198384/*__LIB_5__::func_619*/;
			break;
		case 14:
			uParam0->f_11 = 1198375/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 1198367/*__LIB_0__::func_467*/;
			break;
		case 79:
			*uParam0 = 1198343/*__LIB_5__::func_265*/;
			break;
		case 38:
			uParam0->f_9 = 1198263/*__LIB_5__::func_896*/;
			break;
		case 13:
			uParam0->f_2 = 1198167/*__LIB_5__::func_750*/;
			break;
		case 15:
			uParam0->f_2 = 1197962/*__LIB_9__::func_798*/;
			break;
		case 75:
			uParam0->f_4 = 1197946/*__LIB_5__::func_618*/;
			break;
		case 16:
			uParam0->f_5 = 1197137/*__LIB_8__::func_936*/;
			break;
		case 108:
			uParam0->f_55 = 1192431/*__LIB_10__::func_74*/;
			break;
		case 17:
			uParam0->f_17 = 1191614/*__LIB_10__::func_19*/;
			break;
		case 19:
			uParam0->f_17 = 1191588/*__LIB_5__::func_994*/;
			break;
		case 20:
			uParam0->f_3 = 1191504/*__LIB_5__::func_616*/;
			break;
		case 21:
			uParam0->f_3 = 1191440/*__LIB_5__::func_798*/;
			break;
		case 74:
			uParam0->f_53 = 1191288/*__LIB_5__::func_330*/;
			break;
		case 22:
			uParam0->f_24 = 1191121/*__LIB_5__::func_615*/;
			break;
		case 25:
			uParam0->f_23 = 1189975/*func_3582*/;
			break;
		case 30:
			uParam0->f_8 = 1189357/*__LIB_6__::func_675*/;
			break;
		case 31:
			uParam0->f_39 = 1189046/*__LIB_5__::func_749*/;
			break;
		case 33:
			uParam0->f_40 = 1188107/*__LIB_7__::func_62*/;
			break;
		case 34:
			uParam0->f_41 = 1186747/*__LIB_4__::func_500*/;
			break;
		case 36:
			uParam0->f_58 = 1186689/*__LIB_4__::func_499*/;
			break;
		case 35:
			uParam0->f_42 = 1138986/*__LIB_5__::func_614*/;
			break;
		case 45:
			uParam0->f_14 = 1138977/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 1138968/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 1138960/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1138937/*__LIB_4__::func_496*/;
			break;
		case 47:
			uParam0->f_43 = 1138809/*__LIB_4__::func_495*/;
			break;
		case 49:
			uParam0->f_8 = 1138768/*__LIB_4__::func_494*/;
			break;
		case 50:
			*uParam0 = 1138500/*__LIB_5__::func_747*/;
			break;
		case 51:
			*uParam0 = 1138431/*__LIB_6__::func_335*/;
			break;
		case 52:
			uParam0->f_15 = 1138420/*__LIB_4__::func_492*/;
			break;
		case 53:
			uParam0->f_13 = 1138186/*__LIB_4__::func_296*/;
			break;
		case 54:
			uParam0->f_45 = 1137836/*func_3557*/;
			break;
		case 56:
			uParam0->f_46 = 1137827/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1137756/*__LIB_7__::func_28*/;
			break;
		case 58:
			uParam0->f_13 = 1137522/*__LIB_4__::func_296*/;
			break;
		case 64:
			uParam0->f_47 = 1137322/*__LIB_5__::func_613*/;
			break;
		case 65:
			uParam0->f_21 = 1136424/*__LIB_7__::func_61*/;
			break;
		case 66:
			uParam0->f_21 = 1135698/*__LIB_6__::func_35*/;
			break;
		case 67:
			uParam0->f_21 = 1133399/*__LIB_6__::func_986*/;
			break;
		case 68:
			*uParam0 = 1132766/*__LIB_6__::func_985*/;
			break;
		case 69:
			*uParam0 = 1132757/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 1132745/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1132736/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1132724/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1132031/*__LIB_6__::func_984*/;
			break;
		case 84:
			uParam0->f_1 = 1131491/*func_3505*/;
			break;
		case 85:
			uParam0->f_1 = 1127388/*func_3497*/;
			break;
		case 87:
			uParam0->f_1 = 1123401/*__LIB_7__::func_27*/;
			break;
		case 88:
			uParam0->f_1 = 1122887/*__LIB_7__::func_60*/;
			break;
		case 89:
			uParam0->f_54 = 1122716/*__LIB_5__::func_894*/;
			break;
		case 90:
			uParam0->f_1 = 1122510/*__LIB_6__::func_333*/;
			break;
		case 91:
			uParam0->f_1 = 1122314/*__LIB_5__::func_328*/;
			break;
		case 92:
			uParam0->f_1 = 1120862/*func_3469*/;
			break;
		case 94:
			uParam0->f_1 = 1116725/*__LIB_6__::func_34*/;
			break;
		case 95:
			uParam0->f_22 = 1116429/*__LIB_5__::func_605*/;
			break;
		case 96:
			uParam0->f_1 = 1116399/*__LIB_5__::func_326*/;
			break;
		case 97:
			uParam0->f_1 = 1115732/*__LIB_5__::func_992*/;
			break;
		case 98:
			uParam0->f_1 = 1113082/*func_3432*/;
			break;
		case 100:
			uParam0->f_22 = 1105021/*__LIB_7__::func_882*/;
			break;
		case 101:
			uParam0->f_22 = 1103078/*__LIB_7__::func_881*/;
			break;
		case 78:
			uParam0->f_59 = 1102858/*__LIB_7__::func_817*/;
			break;
		case 125:
			uParam0->f_19 = 1102834/*__LIB_4__::func_412*/;
			break;
	}
}

int func_3432(int iParam0, int* iParam1)//Position - 0x10FBFA
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	struct<4> Var4;
	struct<4> Var5;
	struct<3> Var6;
	struct<3> Var7;
	char* sVar8;
	struct<3> Var9;
	struct<3> Var10;
	if ((__LIB_0__::func_177() || __LIB_3__::func_719()) || NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (Global_2824886)
		{
			if (!BitTest(*iParam1, 13))
			{
				if (__LIB_0__::func_893() || __LIB_4__::func_54())
				{
					if (!BitTest(Global_1946250.f_2, 21))
					{
						__LIB_0__::func_627(&(iParam1->f_101), 1, 0);
						STREAMING::SET_FOCUS_POS_AND_VEL(482.435f, 4812.798f, -59.383f, 0f, 0f, 0f);
						STREAMING::NEW_LOAD_SCENE_START_SPHERE(482.435f, 4812.798f, -59.383f, 20f, 1);
					}
				}
				__LIB_0__::func_627(&(iParam1->f_101), 1, 0);
				MISC::SET_BIT(iParam1, 13);
			}
		}
		if (((Global_2824886 && __LIB_0__::func_937(&(iParam1->f_101), 1000, 1)) && __LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1)) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()))
		{
			if (!BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_3, 0))
			{
				MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_3), 0);
			}
		}
		else
		{
			return 0;
		}
		if (!BitTest(Global_1946250.f_2, 21))
		{
			bVar3 = false;
		}
		else
		{
			bVar3 = true;
			if (!BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_3, 1))
			{
				MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_3), 1);
			}
		}
		iVar0 = 0;
		while (iVar0 < 32)
		{
			bVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if ((__LIB_1__::func_693(bVar2, 1, 1) && !__LIB_4__::func_972(bVar2)) && !Global_2824892)
			{
				if (!BitTest(Global_2689235[bVar2 /*453*/].f_318.f_3, bVar3) || !PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::GET_PLAYER_PED(bVar2)))
				{
					return 0;
				}
			}
			iVar0++;
		}
		if (!BitTest(*iParam1, 12))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_176[0]))
			{
				ENTITY::CREATE_MODEL_HIDE_EXCLUDING_SCRIPT_OBJECTS(482.435f, 4812.798f, -59.383f, 0.5f, __LIB_4__::func_417(0), false);
				Var4 = { __LIB_4__::func_426() };
				__LIB_5__::func_893(&(iParam1->f_176[0]), Var4, Var4.f_3, 1, 1);
			}
			Global_2824887 = -1;
			if (Global_1853191 != __LIB_0__::func_162())
			{
				if (__LIB_0__::func_121(PLAYER::GET_PLAYER_PED(Global_1853191)))
				{
					if (iVar1 < 4)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_140[0]))
						{
							func_1455(&(iParam1->f_140[0]), Global_1853191, 1, 0);
							if (Global_1853191 == PLAYER::PLAYER_ID())
							{
								Global_2824887 = iVar1;
							}
							iVar1++;
						}
					}
				}
			}
			iVar0 = 0;
			while (iVar0 < 32)
			{
				bVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
				if (Global_1853191 != bVar2)
				{
					if (__LIB_1__::func_693(bVar2, 0, 1) && !__LIB_4__::func_972(bVar2))
					{
						if (iVar1 < 4)
						{
							if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_140[iVar1]))
							{
								func_1455(&(iParam1->f_140[iVar1]), bVar2, 1, 0);
								if (__LIB_0__::func_121(iParam1->f_140[iVar1]))
								{
									PED::SET_DISABLE_PED_MAP_COLLISION(iParam1->f_140[iVar1]);
								}
								if (bVar2 == PLAYER::PLAYER_ID())
								{
									Global_2824887 = iVar1;
								}
								iVar1++;
							}
						}
					}
				}
				iVar0++;
			}
			__LIB_4__::func_442();
			MISC::SET_BIT(iParam1, 12);
			return 0;
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_140[iVar0]) && __LIB_0__::func_121(iParam1->f_140[iVar0]))
				{
					if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iParam1->f_140[iVar0]))
					{
						return 0;
					}
				}
				iVar0++;
			}
		}
		if (__LIB_1__::func_614() || BitTest(Global_1574942, 4))
		{
			if (__LIB_0__::func_893() || __LIB_4__::func_54())
			{
			}
			else
			{
				__LIB_7__::func_872(0, 1, 0, 1, 0, 1, 0, 1, 1, 0);
				return 0;
			}
		}
		Var5 = { __LIB_6__::func_424(iParam0, 0) };
		if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_176[1]))
		{
			__LIB_5__::func_892(&(iParam1->f_176[1]), Var5, Var5.f_3);
		}
		Var5 = { __LIB_6__::func_424(iParam0, 3) };
		if (BitTest(Global_1946250.f_2, 21))
		{
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam1->f_176[0], Var5 + Vector(-2f, 0f, 0f), false, false, true);
			ENTITY::SET_ENTITY_ROTATION(iParam1->f_176[0], Var5.f_3, 2, true);
		}
		Var5 = { __LIB_6__::func_424(iParam0, 0) };
		if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_176[3]))
		{
			__LIB_5__::func_991(&(iParam1->f_176[3]), Var5, Var5.f_3);
		}
		iParam1->f_11 = CAM::CREATE_CAMERA(joaat("DEFAULT_ANIMATED_CAMERA"), false);
		if (BitTest(Global_1946250.f_2, 21))
		{
		}
	}
	else
	{
		if (!BitTest(*iParam1, 12))
		{
			func_1455(&(iParam1->f_140[0]), PLAYER::PLAYER_ID(), 1, 0);
			MISC::SET_BIT(iParam1, 12);
			return 0;
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_140[0]) && __LIB_0__::func_121(iParam1->f_140[0]))
		{
			if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iParam1->f_140[0]))
			{
				return 0;
			}
		}
		iParam1->f_176[1] = 0;
		if (__LIB_0__::func_121(iParam1->f_140[0]))
		{
			Var6 = { ENTITY::GET_ENTITY_COORDS(iParam1->f_140[0], false) };
			Var6.f_2 = (Var6.f_2 - 20f);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam1->f_140[0], Var6, false, false, true);
			ENTITY::FREEZE_ENTITY_POSITION(iParam1->f_140[0], true);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_176[0]))
		{
			Var7 = { __LIB_4__::func_426() };
			__LIB_5__::func_893(&(iParam1->f_176[0]), Var7, Var7.f_3, 1, 0);
			Var7.f_2 = (Var7.f_2 - 10f);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam1->f_176[0], Var7, false, false, true);
			ENTITY::SET_ENTITY_COLLISION(iParam1->f_176[0], true, false);
			ENTITY::SET_ENTITY_VISIBLE(iParam1->f_176[0], true, false);
		}
		sVar8 = "anim@amb@facility@hangerdoors@base@enter_exit@male@";
		Var9 = { 481.253f, 4813.742f, -59.148f };
		Var10 = { 0f, 0f, -10f };
		if (__LIB_1__::func_394())
		{
			sVar8 = "anim@amb@facility@hangerdoors@base@enter_exit@female@";
		}
		__LIB_3__::func_900(&(Global_1946250.f_4073), 6500, "Base exit", Var9, Var10, sVar8, "control_operation_cam", 0, 0, 0, 0, 2);
		__LIB_4__::func_428(&(iParam1->f_176[1]), 1);
		MISC::SET_BIT(&(Global_1946250.f_5), 27);
	}
	__LIB_5__::func_514(iParam1, 0);
	__LIB_0__::func_627(&(iParam1->f_101), 1, 0);
	return 1;
}

int func_3469(int iParam0, int* iParam1)//Position - 0x111A5E
{
	struct<4> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_176[0]))
	{
		Var0 = { __LIB_4__::func_427() };
		__LIB_5__::func_893(&(iParam1->f_176[0]), Var0, Var0.f_3, 1, 0);
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_109))
		{
			MISC::SET_BIT(&(iParam1->f_188), 1);
			if (ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("avenger"))
			{
				__LIB_17__::func_834(&iVar1, &(iParam1->f_109), 48, 10f, 20f, 15f);
			}
			else
			{
				func_371(&iVar1, &(iParam1->f_109), 40);
			}
			VEHICLE::SET_DISABLE_MAP_COLLISION(iParam1->f_109);
			return 0;
		}
		else if (func_3471(&iVar1, &(iParam1->f_109), &(iParam1->f_109.f_1), &(Global_1946250.f_4508), 1))
		{
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iParam1->f_109, "dlc_xm_facility_enter/exit_fake_heli_group", 0f);
		}
		else
		{
			return 0;
		}
	}
	else
	{
		iVar3 = 0;
		iVar2 = 0;
		while (iVar2 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			iVar4 = iVar2;
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4))
			{
				bVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar4);
				if (iVar2 < 30)
				{
					if ((__LIB_1__::func_693(bVar5, 1, 1) && __LIB_2__::func_717(bVar5) == iParam0) && __LIB_3__::func_171(bVar5))
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_140[iVar3]))
						{
							func_1455(&(iParam1->f_140[iVar3]), bVar5, 1, 0);
							if (__LIB_0__::func_121(iParam1->f_140[iVar3]))
							{
								PED::SET_DISABLE_PED_MAP_COLLISION(iParam1->f_140[iVar3]);
								if (ENTITY::GET_ENTITY_MODEL(iParam1->f_140[iVar3]) == joaat("MP_M_Freemode_01"))
								{
									MISC::SET_BIT(&(iParam1->f_188), 27);
								}
								else
								{
									MISC::SET_BIT(&(iParam1->f_188), 28);
								}
								if (!PED::HAS_PED_HEAD_BLEND_FINISHED(iParam1->f_140[iVar3]) || !PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iParam1->f_140[iVar3]))
								{
									return 0;
								}
								else
								{
									PED::FINALIZE_HEAD_BLEND(iParam1->f_140[iVar3]);
								}
							}
							iVar3++;
						}
						else if (__LIB_0__::func_121(iParam1->f_140[iVar3]))
						{
							if (!PED::HAS_PED_HEAD_BLEND_FINISHED(iParam1->f_140[iVar3]) || !PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iParam1->f_140[iVar3]))
							{
								return 0;
							}
							else
							{
								PED::FINALIZE_HEAD_BLEND(iParam1->f_140[iVar3]);
							}
							iVar3++;
						}
					}
				}
			}
			iVar2++;
		}
	}
	__LIB_5__::func_514(iParam1, 0);
	iParam1->f_183[0] = 0.4f;
	__LIB_5__::func_602(&(iParam1->f_176[0]), iParam1->f_183[0], 0);
	__LIB_6__::func_425(iParam0, &(Global_1946250.f_4073));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_4__::func_417(0));
	return 1;
}

int func_3471(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x111D70
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		return 0;
	}
	iVar0 = -1;
	while (iVar0 <= 8)
	{
		iVar1 = iVar0 + 1;
		iVar2 = iVar0;
		if ((*uParam3)[iVar1] != __LIB_0__::func_162() && __LIB_1__::func_693((*uParam3)[iVar1], 1, 1))
		{
			iVar3 = PLAYER::GET_PLAYER_PED((*uParam3)[iVar1]);
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				if (!ENTITY::DOES_ENTITY_EXIST((*uParam2)[iVar1]))
				{
					func_283(uParam2[iVar1], iVar3, 1, 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST((*uParam2)[iVar1]) && __LIB_0__::func_121((*uParam2)[iVar1]))
				{
					if (!PED::HAS_PED_HEAD_BLEND_FINISHED((*uParam2)[iVar1]) || !PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED((*uParam2)[iVar1]))
					{
						if (bParam4)
						{
							return 0;
						}
					}
					else
					{
						PED::FINALIZE_HEAD_BLEND((*uParam2)[iVar1]);
					}
					iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam1, iVar2, false);
					if (!ENTITY::DOES_ENTITY_EXIST(iVar4))
					{
						if (__LIB_0__::func_121(*uParam1))
						{
							PED::SET_PED_INTO_VEHICLE((*uParam2)[iVar1], *uParam1, iVar2);
						}
					}
					if (iVar0 == 7 && ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("insurgent3"))
					{
						VEHICLE::SET_VEHICLE_DOOR_CONTROL(*uParam1, 5, 5, 1f);
					}
				}
			}
		}
		iVar0++;
	}
	return 1;
}

int func_3497(int iParam0, int* iParam1)//Position - 0x1133DC
{
	int iVar0;
	struct<4> Var1;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_109))
		{
			MISC::SET_BIT(&(iParam1->f_188), 1);
			func_371(&iVar0, &(iParam1->f_109), 60);
			__LIB_3__::func_633(&(iParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(iParam1->f_109);
			if (__LIB_4__::func_453(ENTITY::GET_ENTITY_MODEL(iVar0)))
			{
				MISC::SET_BIT(&(iParam1->f_188), 9);
				if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("avenger"))
				{
					if (VEHICLE::GET_LANDING_GEAR_STATE(iVar0) == 4 || VEHICLE::GET_LANDING_GEAR_STATE(iVar0) == 1)
					{
						MISC::SET_BIT(&(iParam1->f_188), 14);
					}
					MISC::SET_BIT(&(iParam1->f_188), 13);
				}
			}
			return 0;
		}
		else if (func_282(&iVar0, &(iParam1->f_109), &(iParam1->f_109.f_1), 1, 1, 0, 0, 0, 1))
		{
			VEHICLE::SET_DISABLE_MAP_COLLISION(iParam1->f_109);
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iParam1->f_109, "dlc_xm_facility_enter/exit_fake_heli_group", 0f);
			__LIB_4__::func_465(iVar0);
		}
		else
		{
			return 0;
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_140[0]))
	{
		func_1455(&(iParam1->f_140[0]), PLAYER::PLAYER_ID(), 1, 0);
		if (__LIB_0__::func_121(iParam1->f_140[0]))
		{
			if (PED::HAS_PED_HEAD_BLEND_FINISHED(iParam1->f_140[0]) || PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iParam1->f_140[0]))
			{
				PED::SET_DISABLE_PED_MAP_COLLISION(iParam1->f_140[0]);
				PED::FINALIZE_HEAD_BLEND(iParam1->f_140[0]);
			}
			else
			{
				return 0;
			}
		}
	}
	Var1 = { __LIB_6__::func_424(iParam0, 0) };
	__LIB_5__::func_892(&(iParam1->f_176[1]), Var1, Var1.f_3);
	Var1 = { 0f, 0f, 0f };
	Var1.f_3 = { 0f, 0f, 0f };
	Var1 = { __LIB_6__::func_424(iParam0, 3) };
	__LIB_5__::func_893(&(iParam1->f_176[0]), Var1, Var1.f_3, 1, 1);
	if (BitTest(iParam1->f_188, 1) && __LIB_5__::func_609(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
	{
		Var1 = { __LIB_6__::func_424(iParam0, 19) };
		Var1.f_2 = (Var1.f_2 - 1f);
		__LIB_5__::func_893(&(iParam1->f_176[4]), Var1, Var1.f_3, 0, 0);
		ENTITY::SET_ENTITY_VISIBLE(iParam1->f_176[4], false, false);
		ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iParam1->f_176[4]);
	}
	Var1 = { __LIB_6__::func_424(iParam0, 0) };
	__LIB_5__::func_991(&(iParam1->f_176[3]), Var1, Var1.f_3);
	__LIB_6__::func_805(iParam0, &(iParam1->f_176[0]), 0f, 1, 1f);
	__LIB_6__::func_426(iParam0, &(Global_1946250.f_3638), 0, -1);
	__LIB_5__::func_514(iParam1, 0);
	return 1;
}

int func_3505(int iParam0, var uParam1)//Position - 0x1143E3
{
	bool bVar0;
	int iVar1;
	struct<3> Var2;
	char* sVar3;
	bVar0 = true;
	if (!BitTest(uParam1->f_188, 17))
	{
		__LIB_5__::func_604(iParam0);
		MISC::SET_BIT(&(uParam1->f_188), 17);
	}
	STREAMING::REQUEST_MODEL(__LIB_4__::func_459(iParam0));
	if (!STREAMING::HAS_MODEL_LOADED(__LIB_4__::func_459(iParam0)))
	{
		bVar0 = false;
	}
	STREAMING::REQUEST_MODEL(__LIB_4__::func_441());
	if (!STREAMING::HAS_MODEL_LOADED(__LIB_4__::func_441()))
	{
		bVar0 = false;
	}
	STREAMING::REQUEST_MODEL(__LIB_4__::func_440());
	if (!STREAMING::HAS_MODEL_LOADED(__LIB_4__::func_440()))
	{
		bVar0 = false;
	}
	STREAMING::REQUEST_ANIM_DICT("anim@amb@facility@hanger_doors");
	if (!STREAMING::HAS_ANIM_DICT_LOADED("anim@amb@facility@hanger_doors"))
	{
		bVar0 = false;
	}
	STREAMING::REQUEST_MODEL(joaat("xm_prop_out_hanger_lift"));
	if (!STREAMING::HAS_MODEL_LOADED(joaat("xm_prop_out_hanger_lift")))
	{
		bVar0 = false;
	}
	if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_CHRISTMAS2017/XM_FACILITY_ENTRY_EXIT", false, -1))
	{
		MISC::CLEAR_BIT(&(uParam1->f_188), 22);
		bVar0 = false;
	}
	else
	{
		MISC::SET_BIT(&(uParam1->f_188), 22);
	}
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (__LIB_0__::func_121(iVar1) && ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("avenger"))
			{
				Var2 = { ENTITY::GET_ENTITY_COORDS(iVar1, true) };
				Var2.f_2 = (Var2.f_2 - 10f);
				__LIB_0__::func_799(__LIB_4__::func_445());
				if (!STREAMING::HAS_MODEL_LOADED(__LIB_4__::func_445()))
				{
					bVar0 = false;
				}
				else if (!__LIB_17__::func_834(&iVar1, &(uParam1->f_122), 16, Var2))
				{
					bVar0 = false;
				}
				else
				{
					func_371(&iVar1, &(uParam1->f_122), 24);
					__LIB_4__::func_456(uParam1->f_122, 0);
					if (__LIB_0__::func_121(uParam1->f_122))
					{
						ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_122, true);
						AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(uParam1->f_122, "dlc_xm_facility_enter/exit_fake_heli_group", 0f);
					}
					__LIB_4__::func_466(uParam1->f_122, 1);
				}
			}
		}
		else
		{
			sVar3 = "anim@amb@facility@hangerdoors@base@enter_exit@male@";
			if (__LIB_1__::func_394())
			{
				sVar3 = "anim@amb@facility@hangerdoors@base@enter_exit@female@";
			}
			STREAMING::REQUEST_ANIM_DICT(sVar3);
			if (!STREAMING::HAS_ANIM_DICT_LOADED(sVar3))
			{
				bVar0 = false;
			}
		}
	}
	if (!bVar0)
	{
		return 0;
	}
	return 1;
}

void func_3557(int iParam0, var uParam1, int* iParam2, var uParam3, var uParam4)//Position - 0x115CAC
{
	struct<3> Var0;
	int iVar1;
	if (__LIB_5__::func_423(iParam0))
	{
		if (*uParam3 != 1 && *uParam3 != 2)
		{
			HUD::SET_BLIP_ROUTE(*uParam1, true);
			HUD::SET_BLIP_SCALE(*uParam1, 1.1f);
			HUD::SET_BLIP_PRIORITY(*uParam1, 7);
			HUD::SET_BLIP_FLASH_TIMER(*uParam1, 7000);
			*uParam3 = 1;
			return;
		}
		else if (*uParam3 == 1)
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				HUD::SET_BLIP_ROUTE(*uParam1, false);
				*uParam3 = 2;
			}
		}
		else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
		{
			HUD::SET_BLIP_ROUTE(*uParam1, true);
			*uParam3 = 1;
		}
	}
	else if (*uParam3 == 1)
	{
		HUD::SET_BLIP_ROUTE(*uParam1, false);
		HUD::SET_BLIP_SCALE(*uParam1, 1f);
		HUD::SET_BLIP_PRIORITY(*uParam1, 5);
		*uParam3 = 0;
	}
	if (__LIB_0__::func_172(iParam0) == 9)
	{
		if (__LIB_0__::func_109(iParam0))
		{
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				if (!HUD::DOES_BLIP_EXIST(*iParam2))
				{
					Var0 = { __LIB_4__::func_296(iParam0) };
					iVar1 = __LIB_4__::func_74(iParam0);
					*iParam2 = __LIB_0__::func_488(Var0, 0);
					HUD::SET_BLIP_SPRITE(*iParam2, iVar1);
					HUD::SET_BLIP_SCALE(*iParam2, 1f);
					HUD::SET_BLIP_PRIORITY(*iParam2, 5);
					func_2199(iParam2, 166);
					HUD::SET_BLIP_AS_SHORT_RANGE(*iParam2, false);
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam2, "BASE_HEIST_BLIP" /* GXT: The Doomsday Heist */);
					HUD::SET_BLIP_HIDDEN_ON_LEGEND(*iParam2, true);
				}
			}
			else if (HUD::DOES_BLIP_EXIST(*iParam2))
			{
				HUD::REMOVE_BLIP(iParam2);
			}
		}
	}
}

void func_3582(int iParam0, int iParam1)//Position - 0x122857
{
	var uVar0[10];
	int iVar1;
	bool bVar2;
	bool bVar3;
	struct<3> Var4;
	int iVar5;
	int iVar6;
	bool bVar7;
	struct<13> Var8;
	iVar1 = -1;
	if (__LIB_5__::func_616(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_1__::func_526())
		{
			iVar1 = __LIB_3__::func_680();
		}
		Var4 = { __LIB_4__::func_296(iParam0) };
		iVar5 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar0, -1);
		if (iVar5 > 0)
		{
			iVar6 = 0;
			while (iVar6 < iVar5)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar0[iVar6], false) && PED::IS_PED_A_PLAYER(uVar0[iVar6]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar0[iVar6], true), Var4) <= IntToFloat(__LIB_3__::func_679(iParam0)))
					{
						bVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar0[iVar6]);
						Var8 = { __LIB_1__::func_696(bVar7) };
						if (!bVar2)
						{
							if ((iVar1 != -1 && iVar1 == __LIB_3__::func_106(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if (((((((!__LIB_1__::func_907(bVar7, 1) && !__LIB_5__::func_424(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_1__::func_101(uVar0[iVar6])) && !__LIB_4__::func_972(bVar7)) && !__LIB_4__::func_976(bVar7, 1)) && !__LIB_6__::func_336(bVar7)) && !func_597(bVar7))
								{
									bVar2 = true;
								}
							}
						}
						if ((((((((!bVar3 && __LIB_3__::func_360(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_5__::func_424(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_1__::func_101(uVar0[iVar6])) && !__LIB_4__::func_972(bVar7)) && !__LIB_4__::func_976(bVar7, 1)) && !__LIB_6__::func_336(bVar7)) && !func_597(bVar7))
						{
							bVar3 = true;
						}
					}
					if (bVar3 && bVar2)
					{
					}
					else
					{
						iVar6++;
					}
					if (bVar3)
					{
						__LIB_5__::func_189(iParam1, 1, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 1, 0);
					}
					if (bVar2)
					{
						__LIB_5__::func_189(iParam1, 2, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 2, 0);
					}
					if ((bVar3 || bVar2) && !__LIB_3__::func_779())
					{
						__LIB_7__::func_62(iParam0, -1);
					}
					if (__LIB_3__::func_661(0, iParam1))
					{
						__LIB_7__::func_62(iParam0, -1);
					}
					else if (__LIB_3__::func_661(1, iParam1))
					{
						if (bVar3)
						{
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 1, 0, 0, 0, -1, -1, -1);
						}
						func_3583(iParam0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar2)
						{
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 0, 0, 1, 0, -1, -1, -1);
						}
						func_3583(iParam0);
					}
					Jump @653; //curOff = 634
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_3583(int iParam0)//Position - 0x122AE7
{
	__LIB_7__::func_62(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_3640(var uParam0, int iParam1)//Position - 0x125191
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1228820/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1228763/*__LIB_4__::func_571*/;
			break;
		case 2:
			uParam0->f_31 = 1228494/*__LIB_5__::func_341*/;
			break;
		case 3:
			uParam0->f_34 = 1228435/*__LIB_4__::func_570*/;
			break;
		case 4:
			uParam0->f_12 = 1228404/*__LIB_4__::func_569*/;
			break;
		case 37:
			uParam0->f_18 = 1228286/*__LIB_4__::func_568*/;
			break;
		case 38:
			uParam0->f_9 = 1228202/*__LIB_5__::func_898*/;
			break;
		case 6:
			uParam0->f_32 = 1228138/*__LIB_4__::func_567*/;
			break;
		case 111:
			uParam0->f_35 = 1228115/*__LIB_5__::func_340*/;
			break;
		case 11:
			uParam0->f_11 = 1228106/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 1227653/*__LIB_12__::func_69*/;
			break;
		case 14:
			uParam0->f_11 = 1227644/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 1227636/*__LIB_0__::func_467*/;
			break;
		case 79:
			*uParam0 = 1227612/*__LIB_5__::func_265*/;
			break;
		case 13:
			uParam0->f_2 = 1227603/*__LIB_0__::func_114*/;
			break;
		case 15:
			uParam0->f_2 = 1222533/*__LIB_12__::func_283*/;
			break;
		case 75:
			uParam0->f_4 = 1222524/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1222340/*__LIB_5__::func_805*/;
			break;
		case 108:
			uParam0->f_55 = 1219241/*__LIB_16__::func_189*/;
			break;
		case 17:
			uParam0->f_17 = 1218735/*__LIB_10__::func_22*/;
			break;
		case 19:
			uParam0->f_17 = 1218709/*__LIB_5__::func_997*/;
			break;
		case 20:
			uParam0->f_3 = 1218631/*__LIB_5__::func_628*/;
			break;
		case 21:
			uParam0->f_3 = 1218568/*__LIB_5__::func_336*/;
			break;
		case 74:
			uParam0->f_53 = 1218353/*__LIB_9__::func_134*/;
			break;
		case 22:
			uParam0->f_24 = 1218234/*__LIB_5__::func_627*/;
			break;
		case 25:
			uParam0->f_23 = 1217287/*func_3742*/;
			break;
		case 30:
			uParam0->f_8 = 1216723/*__LIB_5__::func_626*/;
			break;
		case 31:
			uParam0->f_39 = 1216545/*__LIB_5__::func_625*/;
			break;
		case 33:
			uParam0->f_40 = 1215433/*__LIB_12__::func_9*/;
			break;
		case 34:
			uParam0->f_41 = 1214739/*__LIB_5__::func_624*/;
			break;
		case 36:
			uParam0->f_58 = 1214686/*__LIB_3__::func_945*/;
			break;
		case 35:
			uParam0->f_42 = 1214109/*__LIB_6__::func_908*/;
			break;
		case 45:
			uParam0->f_14 = 1214100/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 1214091/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 1213914/*__LIB_10__::func_21*/;
			break;
		case 77:
			uParam0->f_13 = 1213903/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1213405/*__LIB_7__::func_821*/;
			break;
		case 49:
			uParam0->f_8 = 1213364/*__LIB_4__::func_550*/;
			break;
		case 50:
			*uParam0 = 1213355/*__LIB_0__::func_114*/;
			break;
		case 51:
			*uParam0 = 1213346/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 1213335/*__LIB_4__::func_549*/;
			break;
		case 53:
			uParam0->f_13 = 1213324/*__LIB_3__::func_554*/;
			break;
		case 54:
			uParam0->f_45 = 1213316/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 1213307/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1213298/*__LIB_1__::func_804*/;
			break;
		case 58:
			uParam0->f_13 = 1213069/*__LIB_11__::func_983*/;
			break;
		case 64:
			uParam0->f_47 = 1207076/*__LIB_13__::func_81*/;
			break;
		case 65:
			uParam0->f_21 = 1205344/*__LIB_10__::func_23*/;
			break;
		case 66:
			uParam0->f_21 = 1205018/*__LIB_6__::func_392*/;
			break;
		case 67:
			uParam0->f_21 = 1204293/*__LIB_7__::func_819*/;
			break;
		case 68:
			*uParam0 = 1203748/*__LIB_6__::func_987*/;
			break;
		case 69:
			*uParam0 = 1203739/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 1203727/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1203718/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1203706/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1201990/*__LIB_7__::func_30*/;
			break;
		case 78:
			uParam0->f_59 = 1201540/*__LIB_8__::func_987*/;
			break;
		case 125:
			uParam0->f_19 = 1201524/*__LIB_4__::func_516*/;
			break;
	}
}

void func_3742(int iParam0, int iParam1)//Position - 0x129307
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5[10];
	struct<3> Var6;
	bool bVar7;
	struct<13> Var8;
	bool bVar9;
	iVar4 = -1;
	if (__LIB_5__::func_628(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_1__::func_526())
		{
			iVar4 = __LIB_3__::func_680();
		}
		Var6 = { __LIB_1__::func_694(PLAYER::PLAYER_ID()) };
		iVar3 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar5, -1);
		if (iVar3 > 0)
		{
			iVar2 = 0;
			while (iVar2 < iVar3)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar5[iVar2], false) && PED::IS_PED_A_PLAYER(uVar5[iVar2]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar5[iVar2], true), Var6) <= IntToFloat(__LIB_3__::func_679(iParam0)))
					{
						bVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar5[iVar2]);
						Var8 = { __LIB_1__::func_696(bVar7) };
						if (!bVar0)
						{
							if ((iVar4 != -1 && iVar4 == __LIB_3__::func_106(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if ((((!__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar7)) && !__LIB_1__::func_907(bVar7, 1)) && !__LIB_5__::func_424(bVar7)) && !__LIB_3__::func_728(bVar7, 14)) && !func_597(bVar7))
								{
									bVar0 = true;
								}
							}
						}
						if ((((((!bVar1 && __LIB_3__::func_360(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar7))) && !__LIB_1__::func_907(bVar7, 1)) && !__LIB_5__::func_424(bVar7)) && !__LIB_3__::func_728(bVar7, 14)) && !func_597(bVar7))
						{
							bVar1 = true;
						}
					}
					if (bVar1 && bVar0)
					{
					}
					else
					{
						iVar2++;
					}
					if (bVar1)
					{
						__LIB_5__::func_189(iParam1, 1, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 1, 0);
					}
					if (bVar0)
					{
						__LIB_5__::func_189(iParam1, 2, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 2, 0);
					}
					if (((bVar1 || bVar0) && !__LIB_3__::func_779()) && !__LIB_5__::func_241(PLAYER::PLAYER_ID()))
					{
						__LIB_12__::func_9(iParam0, -1);
					}
					bVar9 = __LIB_4__::func_557(PLAYER::PLAYER_ID());
					if (__LIB_3__::func_661(0, iParam1))
					{
						__LIB_12__::func_9(iParam0, -1);
					}
					else if (__LIB_3__::func_661(1, iParam1))
					{
						if (bVar1)
						{
							__LIB_11__::func_984(1);
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var6, 1, 0, 0, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_3743(iParam0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_11__::func_984(1);
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var6, 0, 0, 1, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_3743(iParam0);
					}
					Jump @656; //curOff = 637
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_3743(int iParam0)//Position - 0x12959A
{
	__LIB_12__::func_9(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_3814(var uParam0, int iParam1)//Position - 0x12C01D
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1281566/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1281486/*__LIB_4__::func_631*/;
			break;
		case 2:
			uParam0->f_31 = 1280987/*__LIB_5__::func_348*/;
			break;
		case 3:
			uParam0->f_34 = 1280937/*__LIB_4__::func_630*/;
			break;
		case 4:
			uParam0->f_12 = 1280850/*__LIB_4__::func_629*/;
			break;
		case 5:
			uParam0->f_11 = 1280840/*__LIB_4__::func_628*/;
			break;
		case 37:
			uParam0->f_18 = 1280722/*__LIB_4__::func_627*/;
			break;
		case 38:
			uParam0->f_9 = 1280600/*__LIB_5__::func_905*/;
			break;
		case 6:
			uParam0->f_32 = 1280512/*__LIB_4__::func_626*/;
			break;
		case 111:
			uParam0->f_35 = 1280498/*__LIB_5__::func_904*/;
			break;
		case 11:
			uParam0->f_11 = 1280489/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 1280110/*__LIB_5__::func_645*/;
			break;
		case 14:
			uParam0->f_11 = 1280101/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 1280093/*__LIB_0__::func_467*/;
			break;
		case 79:
			*uParam0 = 1280069/*__LIB_5__::func_265*/;
			break;
		case 13:
			uParam0->f_2 = 1279937/*__LIB_6__::func_394*/;
			break;
		case 15:
			uParam0->f_2 = 1279655/*__LIB_9__::func_799*/;
			break;
		case 75:
			uParam0->f_4 = 1279641/*__LIB_4__::func_624*/;
			break;
		case 16:
			uParam0->f_5 = 1279123/*__LIB_8__::func_224*/;
			break;
		case 108:
			uParam0->f_55 = 1275498/*__LIB_10__::func_75*/;
			break;
		case 17:
			uParam0->f_17 = 1274962/*__LIB_8__::func_939*/;
			break;
		case 19:
			uParam0->f_17 = 1274936/*__LIB_6__::func_3*/;
			break;
		case 20:
			uParam0->f_3 = 1274852/*__LIB_5__::func_643*/;
			break;
		case 21:
			uParam0->f_3 = 1274788/*__LIB_5__::func_798*/;
			break;
		case 74:
			uParam0->f_53 = 1274608/*__LIB_6__::func_910*/;
			break;
		case 22:
			uParam0->f_24 = 1274465/*__LIB_5__::func_642*/;
			break;
		case 25:
			uParam0->f_23 = 1273841/*func_3938*/;
			break;
		case 30:
			uParam0->f_8 = 1273326/*__LIB_6__::func_685*/;
			break;
		case 31:
			uParam0->f_39 = 1273041/*__LIB_5__::func_756*/;
			break;
		case 33:
			uParam0->f_40 = 1272370/*__LIB_7__::func_65*/;
			break;
		case 34:
			uParam0->f_41 = 1271106/*__LIB_4__::func_620*/;
			break;
		case 36:
			uParam0->f_58 = 1271061/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 1244766/*__LIB_5__::func_755*/;
			break;
		case 45:
			uParam0->f_14 = 1244757/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 1244748/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 1244740/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1244717/*__LIB_4__::func_616*/;
			break;
		case 47:
			uParam0->f_43 = 1244613/*__LIB_4__::func_615*/;
			break;
		case 49:
			uParam0->f_8 = 1244572/*__LIB_4__::func_494*/;
			break;
		case 50:
			*uParam0 = 1244358/*__LIB_5__::func_754*/;
			break;
		case 51:
			*uParam0 = 1244289/*__LIB_6__::func_335*/;
			break;
		case 52:
			uParam0->f_15 = 1244278/*__LIB_4__::func_613*/;
			break;
		case 53:
			uParam0->f_13 = 1244140/*__LIB_4__::func_302*/;
			break;
		case 54:
			uParam0->f_45 = 1243952/*__LIB_5__::func_347*/;
			break;
		case 56:
			uParam0->f_46 = 1243943/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1243766/*__LIB_6__::func_2*/;
			break;
		case 58:
			uParam0->f_13 = 1243628/*__LIB_4__::func_302*/;
			break;
		case 64:
			uParam0->f_47 = 1243620/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 1242784/*__LIB_7__::func_64*/;
			break;
		case 66:
			uParam0->f_21 = 1242677/*__LIB_4__::func_611*/;
			break;
		case 67:
			uParam0->f_21 = 1242613/*__LIB_4__::func_610*/;
			break;
		case 68:
			*uParam0 = 1242125/*__LIB_5__::func_346*/;
			break;
		case 69:
			*uParam0 = 1242116/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 1242104/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1242095/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1242083/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1241380/*__LIB_6__::func_1*/;
			break;
		case 84:
			uParam0->f_1 = 1241280/*__LIB_5__::func_902*/;
			break;
		case 85:
			uParam0->f_1 = 1239296/*func_3887*/;
			break;
		case 87:
			uParam0->f_1 = 1236873/*__LIB_6__::func_428*/;
			break;
		case 88:
			uParam0->f_1 = 1236864/*__LIB_0__::func_109*/;
			break;
		case 96:
			uParam0->f_1 = 1236801/*__LIB_4__::func_600*/;
			break;
		case 97:
			uParam0->f_1 = 1236480/*__LIB_6__::func_0*/;
			break;
		case 98:
			uParam0->f_1 = 1232473/*func_3836*/;
			break;
		case 100:
			uParam0->f_22 = 1230197/*__LIB_6__::func_441*/;
			break;
		case 78:
			uParam0->f_59 = 1229993/*__LIB_5__::func_998*/;
			break;
		case 125:
			uParam0->f_19 = 1229977/*__LIB_4__::func_516*/;
			break;
	}
}

int func_3836(int iParam0, int* iParam1)//Position - 0x12CE59
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	__LIB_6__::func_427(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_109) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
		func_371(&iVar0, &(iParam1->f_109), 12);
		__LIB_5__::func_638(iParam0, &(iParam1->f_109));
	}
	__LIB_7__::func_63(iParam0, Global_1853189, &(iParam1->f_176[3]), &(iParam1->f_176[0]), &(iParam1->f_176[1]), &(iParam1->f_176[2]), &(iParam1->f_176[4]), 0);
	if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_176[3]))
	{
		OBJECT::DELETE_OBJECT(&(iParam1->f_176[3]));
	}
	Var1 = { __LIB_5__::func_343(iParam0) };
	STREAMING::SET_FOCUS_POS_AND_VEL(Var1, 0f, 0f, 0f);
	fVar2 = 2f;
	__LIB_5__::func_899(iParam0, &(iParam1->f_176[1]), &(iParam1->f_176[2]), &fVar2);
	__LIB_5__::func_514(iParam1, 0);
	iParam1->f_188 = 0;
	return 1;
}

int func_3887(int iParam0, int* iParam1)//Position - 0x12E900
{
	int iVar0;
	bool bVar1;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_109))
		{
			MISC::SET_BIT(&(iParam1->f_188), 1);
			func_371(&iVar0, &(iParam1->f_109), 60);
			__LIB_3__::func_633(&(iParam1->f_109));
			return 0;
		}
		else
		{
			func_282(&iVar0, &(iParam1->f_109), &(iParam1->f_109.f_1), 1, 0, 0, 0, 0, 1);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_140[0]))
	{
		func_1455(&(iParam1->f_140[0]), PLAYER::PLAYER_ID(), 1, 0);
	}
	bVar1 = false;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_109))
	{
		bVar1 = __LIB_4__::func_607(iParam0, &(iParam1->f_109));
	}
	__LIB_6__::func_429(iParam0, &(Global_1946250.f_3638), 0, bVar1);
	__LIB_7__::func_63(iParam0, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9, &(iParam1->f_176[3]), &(iParam1->f_176[0]), &(iParam1->f_176[1]), &(iParam1->f_176[2]), &(iParam1->f_176[4]), 0);
	__LIB_5__::func_514(iParam1, 0);
	return 1;
}

void func_3938(int iParam0, int iParam1)//Position - 0x136FF1
{
	var uVar0[10];
	int iVar1;
	bool bVar2;
	bool bVar3;
	struct<3> Var4;
	int iVar5;
	int iVar6;
	bool bVar7;
	struct<13> Var8;
	iVar1 = -1;
	if (__LIB_5__::func_643(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_1__::func_526())
		{
			iVar1 = __LIB_3__::func_680();
		}
		Var4 = { __LIB_4__::func_302(iParam0) };
		iVar5 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar0, -1);
		if (iVar5 > 0)
		{
			iVar6 = 0;
			while (iVar6 < iVar5)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar0[iVar6], false) && PED::IS_PED_A_PLAYER(uVar0[iVar6]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar0[iVar6], true), Var4) <= IntToFloat(__LIB_3__::func_679(iParam0)))
					{
						bVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar0[iVar6]);
						Var8 = { __LIB_1__::func_696(bVar7) };
						if (!bVar2)
						{
							if ((iVar1 != -1 && iVar1 == __LIB_3__::func_106(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if ((((!__LIB_1__::func_907(bVar7, 1) && !__LIB_5__::func_424(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_1__::func_101(PLAYER::PLAYER_PED_ID())) && !func_597(bVar7))
								{
									bVar2 = true;
								}
							}
						}
						if (((((!bVar3 && __LIB_3__::func_360(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_5__::func_424(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_1__::func_101(PLAYER::PLAYER_PED_ID())) && !func_597(bVar7))
						{
							bVar3 = true;
						}
					}
					if (bVar3 && bVar2)
					{
					}
					else
					{
						iVar6++;
					}
					if (bVar3)
					{
						__LIB_5__::func_189(iParam1, 1, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 1, 0);
					}
					if (bVar2)
					{
						__LIB_5__::func_189(iParam1, 2, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 2, 0);
					}
					if ((bVar3 || bVar2) && !__LIB_3__::func_779())
					{
						__LIB_7__::func_65(iParam0, -1);
					}
					if (__LIB_3__::func_661(0, iParam1))
					{
						__LIB_7__::func_65(iParam0, -1);
					}
					else if (__LIB_3__::func_661(1, iParam1))
					{
						if (bVar3)
						{
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 1, 0, 0, 0, -1, -1, -1);
						}
						func_3939(iParam0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar2)
						{
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 0, 0, 1, 0, -1, -1, -1);
						}
						func_3939(iParam0);
					}
					Jump @575; //curOff = 556
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_3939(int iParam0)//Position - 0x137233
{
	__LIB_7__::func_65(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_3982(var uParam0, int iParam1)//Position - 0x138E27
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1291077/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1291021/*__LIB_4__::func_641*/;
			break;
		case 2:
			uParam0->f_31 = 1290802/*__LIB_5__::func_807*/;
			break;
		case 3:
			uParam0->f_34 = 1290751/*__LIB_4__::func_640*/;
			break;
		case 4:
			uParam0->f_12 = 1290718/*__LIB_4__::func_639*/;
			break;
		case 6:
			uParam0->f_32 = 1290654/*__LIB_4__::func_638*/;
			break;
		case 111:
			uParam0->f_35 = 1290645/*__LIB_0__::func_162*/;
			break;
		case 79:
			*uParam0 = 1290621/*__LIB_5__::func_265*/;
			break;
		case 11:
			uParam0->f_11 = 1290612/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 1290520/*__LIB_8__::func_274*/;
			break;
		case 14:
			uParam0->f_11 = 1290511/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 1290503/*__LIB_0__::func_467*/;
			break;
		case 15:
			uParam0->f_2 = 1290251/*__LIB_8__::func_196*/;
			break;
		case 13:
			uParam0->f_2 = 1290242/*__LIB_0__::func_114*/;
			break;
		case 75:
			uParam0->f_4 = 1290233/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1290224/*__LIB_0__::func_109*/;
			break;
		case 108:
			uParam0->f_55 = 1290215/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 1290171/*__LIB_5__::func_351*/;
			break;
		case 19:
			uParam0->f_17 = 1290160/*__LIB_3__::func_860*/;
			break;
		case 20:
			uParam0->f_3 = 1290113/*__LIB_8__::func_863*/;
			break;
		case 21:
			uParam0->f_3 = 1290061/*__LIB_5__::func_350*/;
			break;
		case 74:
			uParam0->f_53 = 1290005/*__LIB_5__::func_806*/;
			break;
		case 22:
			uParam0->f_24 = 1289923/*__LIB_4__::func_637*/;
			break;
		case 25:
			uParam0->f_23 = 1288956/*func_4019*/;
			break;
		case 30:
			uParam0->f_8 = 1288651/*__LIB_5__::func_647*/;
			break;
		case 31:
			uParam0->f_39 = 1288620/*__LIB_4__::func_635*/;
			break;
		case 33:
			uParam0->f_40 = 1288430/*__LIB_9__::func_285*/;
			break;
		case 34:
			uParam0->f_41 = 1284427/*__LIB_5__::func_646*/;
			break;
		case 36:
			uParam0->f_58 = 1284374/*__LIB_3__::func_945*/;
			break;
		case 35:
			uParam0->f_42 = 1283183/*__LIB_5__::func_906*/;
			break;
		case 45:
			uParam0->f_14 = 1283174/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 1283165/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 1283157/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1283146/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1283043/*__LIB_4__::func_632*/;
			break;
		case 49:
			uParam0->f_8 = 1283018/*__LIB_3__::func_941*/;
			break;
		case 50:
			*uParam0 = 1282980/*__LIB_5__::func_725*/;
			break;
		case 51:
			*uParam0 = 1282971/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 1282960/*__LIB_4__::func_270*/;
			break;
		case 53:
			uParam0->f_13 = 1282879/*__LIB_8__::func_193*/;
			break;
		case 54:
			uParam0->f_45 = 1282871/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 1282862/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1282852/*__LIB_3__::func_938*/;
			break;
		case 58:
			uParam0->f_13 = 1282645/*__LIB_8__::func_192*/;
			break;
		case 64:
			uParam0->f_47 = 1282637/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 1282629/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 1282621/*__LIB_0__::func_467*/;
			break;
		case 67:
			uParam0->f_21 = 1282613/*__LIB_0__::func_467*/;
			break;
		case 68:
			*uParam0 = 1282604/*__LIB_0__::func_109*/;
			break;
		case 69:
			*uParam0 = 1282595/*__LIB_0__::func_109*/;
			break;
		case 70:
			uParam0->f_48 = 1282583/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1282574/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1282562/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1282553/*__LIB_0__::func_114*/;
			break;
		case 73:
			uParam0->f_51 = 1282544/*__LIB_0__::func_114*/;
			break;
		case 78:
			uParam0->f_59 = 1282536/*__LIB_0__::func_467*/;
			break;
	}
}

void func_4019(int iParam0, int iParam1)//Position - 0x13AAFC
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5[10];
	struct<3> Var6;
	bool bVar7;
	struct<13> Var8;
	bool bVar9;
	iVar4 = -1;
	if (__LIB_8__::func_863(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_1__::func_526())
		{
			iVar4 = __LIB_3__::func_680();
		}
		__LIB_8__::func_195(iParam0, &Var6);
		iVar3 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar5, -1);
		if (iVar3 > 0)
		{
			iVar2 = 0;
			while (iVar2 < iVar3)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar5[iVar2], false) && PED::IS_PED_A_PLAYER(uVar5[iVar2]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar5[iVar2], true), Var6) <= IntToFloat(__LIB_3__::func_679(iParam0)))
					{
						bVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar5[iVar2]);
						Var8 = { __LIB_1__::func_696(bVar7) };
						if (!bVar0)
						{
							if ((iVar4 != -1 && iVar4 == __LIB_3__::func_106(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if ((!__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar7)) && !__LIB_1__::func_907(bVar7, 1)) && !__LIB_5__::func_424(bVar7))
								{
									bVar0 = true;
								}
							}
						}
						if ((((!bVar1 && __LIB_3__::func_360(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar7))) && !__LIB_1__::func_907(bVar7, 1)) && !__LIB_5__::func_424(bVar7))
						{
							bVar1 = true;
						}
					}
					if (bVar1 && bVar0)
					{
					}
					else
					{
						iVar2++;
					}
					if (bVar1)
					{
						__LIB_5__::func_189(iParam1, 1, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 1, 0);
					}
					if (bVar0)
					{
						__LIB_5__::func_189(iParam1, 2, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 2, 0);
					}
					if ((bVar1 || bVar0) && !__LIB_3__::func_779())
					{
						__LIB_9__::func_285(iParam0, -1);
					}
					bVar9 = __LIB_4__::func_636(PLAYER::PLAYER_ID());
					if (__LIB_3__::func_661(0, iParam1))
					{
						__LIB_9__::func_285(iParam0, -1);
					}
					else if (__LIB_3__::func_661(1, iParam1))
					{
						if (bVar1)
						{
							__LIB_8__::func_194(1);
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(__LIB_7__::func_758(), true), ENTITY::GET_ENTITY_HEADING(__LIB_7__::func_758()), 2f, -13f, 0f), 0, 0, 1, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_4020(iParam0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_8__::func_194(1);
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(__LIB_7__::func_758(), true), ENTITY::GET_ENTITY_HEADING(__LIB_7__::func_758()), 2f, -13f, 0f), 0, 0, 1, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_4020(iParam0);
					}
					Jump @634; //curOff = 615
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_4020(int iParam0)//Position - 0x13AD79
{
	__LIB_9__::func_285(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_4047(var uParam0, int iParam1)//Position - 0x13B34E
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1370563/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1370507/*__LIB_4__::func_687*/;
			break;
		case 2:
			uParam0->f_31 = 1368962/*__LIB_11__::func_992*/;
			break;
		case 3:
			uParam0->f_34 = 1368913/*__LIB_4__::func_686*/;
			break;
		case 4:
			uParam0->f_12 = 1368880/*__LIB_4__::func_685*/;
			break;
		case 6:
			uParam0->f_32 = 1368816/*__LIB_4__::func_684*/;
			break;
		case 111:
			uParam0->f_35 = 1368793/*__LIB_5__::func_360*/;
			break;
		case 79:
			*uParam0 = 1368769/*__LIB_5__::func_265*/;
			break;
		case 37:
			uParam0->f_18 = 1368651/*__LIB_4__::func_683*/;
			break;
		case 38:
			uParam0->f_9 = 1368584/*__LIB_5__::func_910*/;
			break;
		case 11:
			uParam0->f_11 = 1368575/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 1368230/*__LIB_12__::func_78*/;
			break;
		case 14:
			uParam0->f_11 = 1368221/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 1368213/*__LIB_0__::func_467*/;
			break;
		case 15:
			uParam0->f_2 = 1362889/*__LIB_12__::func_285*/;
			break;
		case 13:
			uParam0->f_2 = 1362880/*__LIB_0__::func_114*/;
			break;
		case 75:
			uParam0->f_4 = 1362871/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1362846/*__LIB_5__::func_323*/;
			break;
		case 108:
			uParam0->f_55 = 1354650/*__LIB_17__::func_835*/;
			break;
		case 17:
			uParam0->f_17 = 1354068/*__LIB_12__::func_77*/;
			break;
		case 19:
			uParam0->f_17 = 1354042/*__LIB_6__::func_5*/;
			break;
		case 20:
			uParam0->f_3 = 1353981/*__LIB_12__::func_71*/;
			break;
		case 21:
			uParam0->f_3 = 1353861/*__LIB_5__::func_810*/;
			break;
		case 74:
			uParam0->f_53 = 1353805/*__LIB_5__::func_809*/;
			break;
		case 22:
			uParam0->f_24 = 1353723/*__LIB_4__::func_676*/;
			break;
		case 25:
			uParam0->f_23 = 1352751/*func_4141*/;
			break;
		case 30:
			uParam0->f_8 = 1352011/*__LIB_5__::func_650*/;
			break;
		case 31:
			uParam0->f_39 = 1351741/*__LIB_5__::func_760*/;
			break;
		case 33:
			uParam0->f_40 = 1350805/*__LIB_12__::func_76*/;
			break;
		case 34:
			uParam0->f_41 = 1347461/*__LIB_5__::func_355*/;
			break;
		case 36:
			uParam0->f_58 = 1347408/*__LIB_3__::func_945*/;
			break;
		case 35:
			uParam0->f_42 = 1346725/*__LIB_5__::func_909*/;
			break;
		case 45:
			uParam0->f_14 = 1346716/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 1346707/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 1346264/*__LIB_16__::func_191*/;
			break;
		case 77:
			uParam0->f_13 = 1346253/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1346150/*__LIB_4__::func_672*/;
			break;
		case 49:
			uParam0->f_8 = 1346125/*__LIB_3__::func_941*/;
			break;
		case 50:
			*uParam0 = 1346087/*__LIB_5__::func_725*/;
			break;
		case 51:
			*uParam0 = 1346063/*__LIB_6__::func_899*/;
			break;
		case 52:
			uParam0->f_15 = 1346052/*__LIB_4__::func_270*/;
			break;
		case 53:
			uParam0->f_13 = 1345973/*__LIB_11__::func_988*/;
			break;
		case 54:
			uParam0->f_45 = 1345965/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 1345956/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1345946/*__LIB_3__::func_938*/;
			break;
		case 58:
			uParam0->f_13 = 1345717/*__LIB_11__::func_987*/;
			break;
		case 64:
			uParam0->f_47 = 1299320/*__LIB_16__::func_193*/;
			break;
		case 65:
			uParam0->f_21 = 1298182/*__LIB_10__::func_24*/;
			break;
		case 66:
			uParam0->f_21 = 1297959/*__LIB_5__::func_908*/;
			break;
		case 67:
			uParam0->f_21 = 1297064/*__LIB_5__::func_907*/;
			break;
		case 68:
			*uParam0 = 1296519/*__LIB_6__::func_989*/;
			break;
		case 69:
			*uParam0 = 1296510/*__LIB_0__::func_109*/;
			break;
		case 70:
			uParam0->f_48 = 1296498/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1296489/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1296477/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1294383/*__LIB_9__::func_503*/;
			break;
		case 73:
			uParam0->f_51 = 1292614/*func_4054*/;
			break;
		case 78:
			uParam0->f_59 = 1292081/*__LIB_8__::func_974*/;
			break;
	}
}

int func_4054(int iParam0, var uParam1)//Position - 0x13B946
{
	int iVar0;
	int iVar1;
	struct<101> Var2;
	int iVar3;
	struct<3> Var4;
	float fVar5;
	float fVar6;
	if (!__LIB_0__::func_799(joaat("trailerlarge")))
	{
		return 0;
	}
	if (!__LIB_0__::func_799(__LIB_4__::func_650(PLAYER::PLAYER_ID())))
	{
		return 0;
	}
	if (!__LIB_5__::func_187(PLAYER::PLAYER_ID(), -1))
	{
		return 0;
	}
	iVar0 = Global_2815059.f_304[1];
	if (!ENTITY::IS_ENTITY_DEAD(iVar0, false) && !__LIB_0__::func_86(uParam1->f_22.f_250))
	{
		STREAMING::SET_FOCUS_POS_AND_VEL(uParam1->f_22.f_250, 0f, 0f, 0f);
	}
	PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME((uParam1->f_22.f_250 - 100f), (uParam1->f_22.f_250.f_1 - 100f), (uParam1->f_22.f_250 + 100f), (uParam1->f_22.f_250.f_1 + 100f));
	if ((__LIB_5__::func_187(PLAYER::PLAYER_ID(), -1) && ENTITY::DOES_ENTITY_EXIST(iVar0)) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, false))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
			{
				Var2.f_9 = 49;
				Var2.f_59 = 2;
				Var2.f_78 = -1;
				Var2.f_79 = -1;
				Var2.f_96 = -1;
				Var2.f_97 = 1;
				Var2.f_99 = 132;
				Var2.f_100 = -1;
				iVar3 = PLAYER::PLAYER_PED_ID();
				__LIB_4__::func_562(uParam1->f_22.f_250, 25f, 0);
				if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_22.f_105) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_22.f_105, false))
				{
					VEHICLE::SET_TRAILER_LEGS_LOWERED(uParam1->f_22.f_105);
				}
				switch (uParam1->f_22.f_217)
				{
					case 0:
						if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_22.f_105))
						{
							if (__LIB_4__::func_649())
							{
								uParam1->f_22.f_250 = { 842.616f, -3239.21f, -96.8731f };
								uParam1->f_22.f_253 = 62.260525f;
								uParam1->f_22.f_189[0 /*3*/] = { 1.47961f, 0.00453185f, 62.2534f };
							}
							else if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
							{
								uParam1->f_22.f_250 = { ENTITY::GET_ENTITY_COORDS(iVar0, true) };
								uParam1->f_22.f_253 = ENTITY::GET_ENTITY_HEADING(iVar0);
								uParam1->f_22.f_189[0 /*3*/] = { ENTITY::GET_ENTITY_ROTATION(iVar0, 2) };
							}
							uParam1->f_22.f_105 = VEHICLE::CREATE_VEHICLE(joaat("trailerlarge"), uParam1->f_22.f_250, uParam1->f_22.f_250.f_1, (uParam1->f_22.f_250.f_2 - 70f), uParam1->f_22.f_253, false, false, false);
							ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_22.f_105, true);
							ENTITY::SET_ENTITY_COLLISION(uParam1->f_22.f_105, false, false);
							__LIB_9__::func_494(iVar0, &Var2);
							__LIB_16__::func_190(uParam1->f_22.f_105, &Var2, 1, 1, 0);
						}
						else
						{
							uParam1->f_22.f_217 = 1;
						}
						break;
					case 1:
						if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_22.f_105))
						{
							if (!NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
							{
								NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(iVar1, true, false);
								NETWORK::SET_LOCAL_PLAYER_VISIBLE_IN_CUTSCENE(true, false);
								NETWORK::NETWORK_SET_IN_MP_CUTSCENE(true, false);
								if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_GR_MOC_Drive_Up_Ramp_Scene"))
								{
									AUDIO::START_AUDIO_SCENE("DLC_GR_MOC_Drive_Up_Ramp_Scene");
								}
							}
							if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
							{
								if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_22.f_105, false))
								{
									ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_22.f_105, uParam1->f_22.f_250, false, false, true);
									ENTITY::SET_ENTITY_HEADING(uParam1->f_22.f_105, uParam1->f_22.f_253);
									ENTITY::SET_ENTITY_ROTATION(uParam1->f_22.f_105, uParam1->f_22.f_189[0 /*3*/], 2, true);
									ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_22.f_105, false);
									ENTITY::SET_ENTITY_COLLISION(uParam1->f_22.f_105, true, false);
									ENTITY::SET_ENTITY_INVINCIBLE(uParam1->f_22.f_105, true);
									AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Enter_Car_Ramp_Deploy", uParam1->f_22.f_105, "DLC_GR_MOC_Enter_Exit_Sounds", false, 0);
									VEHICLE::SET_VEHICLE_DOOR_OPEN(uParam1->f_22.f_105, 5, false, false);
									VEHICLE::SET_TRAILER_LEGS_LOWERED(uParam1->f_22.f_105);
									ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(uParam1->f_22.f_105);
									__LIB_11__::func_992(iParam0, uParam1, 0, 0);
									uParam1->f_22.f_11 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), true);
									CAM::SET_CAM_PARAMS(uParam1->f_22.f_11, uParam1->f_22.f_13, uParam1->f_22.f_16, uParam1->f_22.f_19, 0, 1, 1, 2);
									CAM::SET_CAM_FAR_CLIP(uParam1->f_22.f_11, 1000f);
									CAM::SHAKE_CAM(uParam1->f_22.f_11, "HAND_SHAKE", uParam1->f_22.f_40);
									CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
									Var4 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uParam1->f_22.f_250, uParam1->f_22.f_253, 0f, -16.5f, 0f) };
									MISC::GET_GROUND_Z_FOR_3D_COORD(Var4, &fVar5, false, false);
									MISC::CLEAR_AREA(Var4.f_0, Var4.f_1, fVar5, 5f, false, false, false, false);
									GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(Var4.f_0, Var4.f_1, fVar5, 5f);
									ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_22.f_105, uParam1->f_22.f_250, false, false, true);
									if (__LIB_4__::func_649())
									{
										ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iVar1, Var4, false, false, true);
									}
									else
									{
										ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iVar1, Var4.f_0, Var4.f_1, fVar5, false, false, true);
									}
									ENTITY::SET_ENTITY_HEADING(iVar1, uParam1->f_22.f_253);
									VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar1, 0f);
									__LIB_17__::func_936();
									ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iVar1);
									uParam1->f_22.f_217 = 2;
								}
							}
						}
						break;
					case 2:
						if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_22.f_105, false) && NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
						{
							VEHICLE::MODIFY_VEHICLE_TOP_SPEED(iVar1, 0f);
							VEHICLE::SET_VEHICLE_MAX_SPEED(iVar1, -1f);
							VEHICLE::STOP_BRINGING_VEHICLE_TO_HALT(iVar1);
							__LIB_5__::func_648(iVar1, &fVar6);
							AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Enter_Car_Ramp_Hits_Ground", uParam1->f_22.f_105, "DLC_GR_MOC_Enter_Exit_Sounds", false, 0);
							__LIB_4__::func_647(&iVar3, &iVar1, 3000, fVar6, 32);
							uParam1->f_22.f_217 = 0;
							__LIB_4__::func_646(0);
							__LIB_4__::func_645(0);
							return 1;
						}
						break;
				}
			}
			else
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iVar0);
			}
		}
	}
	return 0;
}

void func_4141(int iParam0, int iParam1)//Position - 0x14A42F
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5[10];
	struct<3> Var6;
	bool bVar7;
	struct<13> Var8;
	bool bVar9;
	iVar4 = -1;
	if (__LIB_12__::func_71(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_1__::func_526())
		{
			iVar4 = __LIB_3__::func_680();
		}
		Var6 = { __LIB_1__::func_694(PLAYER::PLAYER_ID()) };
		iVar3 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar5, -1);
		if (iVar3 > 0)
		{
			iVar2 = 0;
			while (iVar2 < iVar3)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar5[iVar2], false) && PED::IS_PED_A_PLAYER(uVar5[iVar2]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar5[iVar2], true), Var6) <= IntToFloat(__LIB_3__::func_679(iParam0)))
					{
						bVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar5[iVar2]);
						Var8 = { __LIB_1__::func_696(bVar7) };
						if (!bVar0)
						{
							if ((iVar4 != -1 && iVar4 == __LIB_3__::func_106(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if ((((!__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar7)) && !__LIB_1__::func_907(bVar7, 1)) && !__LIB_5__::func_424(bVar7)) && !__LIB_3__::func_728(bVar7, 14)) && !func_597(bVar7))
								{
									bVar0 = true;
								}
							}
						}
						if ((((((!bVar1 && __LIB_3__::func_360(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar7))) && !__LIB_1__::func_907(bVar7, 1)) && !__LIB_5__::func_424(bVar7)) && !__LIB_3__::func_728(bVar7, 14)) && !func_597(bVar7))
						{
							bVar1 = true;
						}
					}
					if (bVar1 && bVar0)
					{
					}
					else
					{
						iVar2++;
					}
					if (bVar1)
					{
						__LIB_5__::func_189(iParam1, 1, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 1, 0);
					}
					if (bVar0)
					{
						__LIB_5__::func_189(iParam1, 2, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 2, 0);
					}
					if (((bVar1 || bVar0) && !__LIB_3__::func_779()) && !__LIB_5__::func_241(PLAYER::PLAYER_ID()))
					{
						__LIB_12__::func_76(iParam0, -1);
					}
					bVar9 = __LIB_4__::func_636(PLAYER::PLAYER_ID());
					if (__LIB_3__::func_661(0, iParam1))
					{
						__LIB_12__::func_76(iParam0, -1);
					}
					else if (__LIB_3__::func_661(1, iParam1))
					{
						if (bVar1)
						{
							__LIB_11__::func_989(1);
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var6, 1, 0, 0, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_4142(iParam0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_11__::func_989(1);
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var6, 0, 0, 1, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_4142(iParam0);
					}
					Jump @656; //curOff = 637
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_4142(int iParam0)//Position - 0x14A6C2
{
	__LIB_12__::func_76(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_4213(var uParam0, int iParam1)//Position - 0x14E9CC
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1406535/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1406419/*__LIB_4__::func_745*/;
			break;
		case 2:
			uParam0->f_31 = 1405189/*__LIB_7__::func_67*/;
			break;
		case 3:
			uParam0->f_34 = 1405119/*__LIB_4__::func_744*/;
			break;
		case 4:
			uParam0->f_12 = 1404946/*__LIB_4__::func_743*/;
			break;
		case 6:
			uParam0->f_32 = 1404822/*__LIB_4__::func_742*/;
			break;
		case 106:
			uParam0->f_52 = 1404599/*__LIB_6__::func_399*/;
			break;
		case 111:
			uParam0->f_35 = 1404585/*__LIB_5__::func_924*/;
			break;
		case 79:
			*uParam0 = 1404561/*__LIB_5__::func_265*/;
			break;
		case 37:
			uParam0->f_18 = 1404443/*__LIB_4__::func_741*/;
			break;
		case 38:
			uParam0->f_9 = 1404205/*__LIB_6__::func_398*/;
			break;
		case 11:
			uParam0->f_11 = 1404196/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 1402492/*__LIB_5__::func_663*/;
			break;
		case 14:
			uParam0->f_11 = 1402483/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 1402475/*__LIB_0__::func_467*/;
			break;
		case 15:
			uParam0->f_2 = 1401969/*__LIB_9__::func_801*/;
			break;
		case 13:
			uParam0->f_2 = 1401930/*__LIB_5__::func_370*/;
			break;
		case 44:
			*uParam0 = 1401921/*__LIB_0__::func_114*/;
			break;
		case 75:
			uParam0->f_4 = 1401912/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1401444/*__LIB_9__::func_509*/;
			break;
		case 108:
			uParam0->f_55 = 1399405/*__LIB_9__::func_508*/;
			break;
		case 17:
			uParam0->f_17 = 1397271/*__LIB_9__::func_507*/;
			break;
		case 19:
			uParam0->f_17 = 1397245/*__LIB_6__::func_10*/;
			break;
		case 20:
			uParam0->f_3 = 1397161/*__LIB_5__::func_919*/;
			break;
		case 21:
			uParam0->f_3 = 1397061/*__LIB_6__::func_918*/;
			break;
		case 74:
			uParam0->f_53 = 1396894/*__LIB_5__::func_369*/;
			break;
		case 22:
			uParam0->f_24 = 1396791/*__LIB_5__::func_662*/;
			break;
		case 25:
			uParam0->f_23 = 1396139/*func_4335*/;
			break;
		case 30:
			uParam0->f_8 = 1395639/*__LIB_6__::func_691*/;
			break;
		case 31:
			uParam0->f_39 = 1395346/*__LIB_5__::func_762*/;
			break;
		case 33:
			uParam0->f_40 = 1394348/*__LIB_9__::func_506*/;
			break;
		case 32:
			*uParam0 = 1394244/*__LIB_5__::func_814*/;
			break;
		case 34:
			uParam0->f_41 = 1392096/*__LIB_5__::func_367*/;
			break;
		case 35:
			uParam0->f_42 = 1304768/*__LIB_5__::func_649*/;
			break;
		case 36:
			uParam0->f_58 = 1392036/*__LIB_5__::func_366*/;
			break;
		case 45:
			uParam0->f_14 = 1392027/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 1392018/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 1391752/*__LIB_5__::func_813*/;
			break;
		case 77:
			uParam0->f_13 = 1391741/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1391601/*__LIB_4__::func_731*/;
			break;
		case 49:
			uParam0->f_8 = 1391560/*__LIB_4__::func_550*/;
			break;
		case 50:
			*uParam0 = 1391363/*__LIB_6__::func_9*/;
			break;
		case 51:
			*uParam0 = 1391279/*__LIB_6__::func_916*/;
			break;
		case 52:
			uParam0->f_15 = 1391268/*__LIB_4__::func_730*/;
			break;
		case 53:
			uParam0->f_13 = 1390986/*__LIB_4__::func_729*/;
			break;
		case 54:
			uParam0->f_45 = 1390978/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 1390969/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1390908/*__LIB_6__::func_8*/;
			break;
		case 58:
			uParam0->f_13 = 1390626/*__LIB_4__::func_729*/;
			break;
		case 64:
			uParam0->f_47 = 1388711/*__LIB_10__::func_25*/;
			break;
		case 65:
			uParam0->f_21 = 1388668/*__LIB_5__::func_916*/;
			break;
		case 66:
			uParam0->f_21 = 1387965/*__LIB_6__::func_7*/;
			break;
		case 67:
			uParam0->f_21 = 1386881/*__LIB_5__::func_915*/;
			break;
		case 68:
			*uParam0 = 1386290/*__LIB_6__::func_991*/;
			break;
		case 69:
			*uParam0 = 1386281/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 1386269/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1386260/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1386248/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1383574/*__LIB_9__::func_520*/;
			break;
		case 84:
			uParam0->f_1 = 1381728/*func_4258*/;
			break;
		case 85:
			uParam0->f_1 = 1379394/*__LIB_6__::func_813*/;
			break;
		case 87:
			uParam0->f_1 = 1375168/*__LIB_7__::func_551*/;
			break;
		case 88:
			uParam0->f_1 = 1375159/*__LIB_0__::func_109*/;
			break;
		case 90:
			uParam0->f_1 = 1375116/*__LIB_5__::func_363*/;
			break;
		case 91:
			uParam0->f_1 = 1374815/*__LIB_5__::func_656*/;
			break;
		case 92:
			uParam0->f_1 = 1374052/*func_4225*/;
			break;
		case 94:
			uParam0->f_1 = 1372552/*__LIB_5__::func_362*/;
			break;
		case 102:
			uParam0->f_1 = 1371984/*__LIB_6__::func_6*/;
			break;
		case 103:
			uParam0->f_22 = 1371976/*__LIB_0__::func_467*/;
			break;
		case 104:
			uParam0->f_1 = 1371901/*__LIB_4__::func_689*/;
			break;
		case 78:
			uParam0->f_59 = 1371827/*__LIB_8__::func_975*/;
			break;
		case 125:
			uParam0->f_19 = 1371803/*__LIB_4__::func_688*/;
			break;
	}
}

int func_4225(var uParam0, var uParam1)//Position - 0x14F764
{
	__LIB_6__::func_27(&(Global_1946250.f_4073), 7500, "TruckTunel1", 919.1599f, -3242.047f, -97.191f, -4.6979f, 0.1417f, -118.0924f, 36.2643f, 920.1234f, -3242.478f, -97.1018f, 7.9062f, 0.1417f, -113.0609f, 36.2643f, 1f, 50, 0, 0, 0, 0);
	__LIB_6__::func_27(&(Global_1946250.f_4073), 6000, "TruckPark", 826.3912f, -3231.1902f, -98.5252f, 1.494f, -0.1848f, -114.9899f, 38.3697f, 826.9343f, -3231.013f, -97.8158f, -0.7301f, -0.1848f, -118.0463f, 38.3697f, 1f, 0, 0, 0, 0, 0);
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_248))
	{
		func_371(&(uParam1->f_248), &(uParam1->f_109), 14);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
	{
		uParam1->f_109 = VEHICLE::CREATE_VEHICLE(joaat("phantom3"), 0f, 10f, 0f, 0f, false, false, false);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109.f_12))
	{
		uParam1->f_109.f_12 = VEHICLE::CREATE_VEHICLE(joaat("trailerlarge"), 0f, 10f, 10f, 0f, false, false, false);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109.f_1[0]))
	{
		uParam1->f_109.f_1[0] = PED::CREATE_PED(26, joaat("MP_M_WeapExp_01"), 832.953f, -3243.084f, -98.716f, -18f, false, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
	{
		VEHICLE::SET_VEHICLE_FORWARD_SPEED_XY(uParam1->f_109, 8f);
		ENTITY::SET_ENTITY_COORDS(uParam1->f_109, 942.387f, -3245.778f, -94.91f, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(uParam1->f_109, 87.91f);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam1->f_109, 5f);
		uParam1->f_140[1] = PED::CREATE_PED(26, joaat("MP_M_WeapExp_01"), 832.953f, -3243.084f, -98.716f, -18f, false, false);
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_140[1], true);
		__LIB_4__::func_37(&(uParam1->f_109), 1);
		VEHICLE::SET_VEHICLE_ENGINE_ON(uParam1->f_109, true, true, false);
		VEHICLE::SET_VEHICLE_LIGHTS(uParam1->f_109, 3);
		if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109.f_12))
		{
			VEHICLE::ATTACH_VEHICLE_TO_TRAILER(uParam1->f_109, uParam1->f_109.f_12, 1f);
			VEHICLE::VEHICLE_SET_OVERRIDE_EXTENABLE_SIDE_RATIO(uParam1->f_109.f_12, 1);
			VEHICLE::VEHICLE_SET_EXTENABLE_SIDE_TARGET_RATIO(uParam1->f_109.f_12, 0f);
			VEHICLE::VEHICLE_SET_OVERRIDE_SIDE_RATIO(uParam1->f_109.f_12, 0f);
		}
	}
	__LIB_4__::func_693(&Global_1640742, &Global_1640743, &(uParam1->f_109), &(uParam1->f_109.f_12));
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109.f_1[0]))
	{
		ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(uParam1->f_109.f_1[0], PLAYER::PLAYER_PED_ID(), false);
	}
	return 1;
}

int func_4258(int iParam0, var uParam1)//Position - 0x151560
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	__LIB_4__::func_694(uParam1);
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (__LIB_3__::func_616() == 1)
		{
			__LIB_5__::func_457(0);
		}
	}
	switch (__LIB_3__::func_616())
	{
		case 0:
			if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[0]))
			{
				func_1455(&(uParam1->f_140[0]), PLAYER::PLAYER_ID(), 1, 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[0]))
			{
				iVar0 = 1;
				__LIB_5__::func_911(iParam0, &(uParam1->f_140[0]));
				ENTITY::SET_ENTITY_VISIBLE(uParam1->f_140[0], false, false);
				ENTITY::SET_ENTITY_COLLISION(uParam1->f_140[0], false, false);
			}
			break;
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_248))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_248) == joaat("trailersmall2"))
				{
					if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(uParam1->f_248))
					{
						iVar1 = ENTITY::GET_ENTITY_ATTACHED_TO(uParam1->f_248);
						if (ENTITY::IS_ENTITY_A_VEHICLE(iVar1))
						{
							iVar2 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar1);
							if (ENTITY::DOES_ENTITY_EXIST(iVar2))
							{
								func_371(&iVar2, &(uParam1->f_109), 14);
								func_282(&(uParam1->f_248), &(uParam1->f_109.f_12), &(uParam1->f_140), 0, 0, 0, 0, 0, 1);
							}
						}
						else
						{
							func_371(&(uParam1->f_248), &(uParam1->f_109), 10);
						}
					}
					else
					{
						func_371(&(uParam1->f_248), &(uParam1->f_109), 10);
					}
				}
				else
				{
					func_371(&(uParam1->f_248), &(uParam1->f_109), 14);
					if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_249))
					{
						if (ENTITY::GET_ENTITY_MODEL(uParam1->f_249) == joaat("trailersmall2"))
						{
							func_282(&(uParam1->f_249), &(uParam1->f_109.f_12), &(uParam1->f_140), 0, 0, 0, 0, 0, 1);
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
				{
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_109, 0f, 50f, 10f, false, false, true);
					__LIB_5__::func_911(iParam0, &(uParam1->f_109));
				}
				if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109.f_12))
				{
					if (!ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(uParam1->f_109.f_12))
					{
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_109.f_12, 50f, 50f, 50f, false, false, true);
					}
					__LIB_5__::func_911(iParam0, &(uParam1->f_109.f_12));
				}
				if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
				{
					iVar0 = 1;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109) && ENTITY::DOES_ENTITY_EXIST(uParam1->f_248))
			{
				ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(uParam1->f_109, uParam1->f_248, false);
			}
			__LIB_4__::func_693(&Global_1640742, &Global_1640743, &(uParam1->f_109), &(uParam1->f_109.f_12));
			break;
	}
	if (!__LIB_5__::func_914(iParam0, uParam1))
	{
		return 0;
	}
	if (__LIB_6__::func_769(iParam0, &(uParam1->f_176[0]), &(uParam1->f_176[1]), 1101004800))
	{
		uParam1->f_183[0] = 0f;
		uParam1->f_183[1] = 0f;
		ENTITY::SET_ENTITY_VISIBLE(uParam1->f_176[0], false, false);
		ENTITY::SET_ENTITY_VISIBLE(uParam1->f_176[1], false, false);
		uParam1->f_189[8 /*3*/] = { ENTITY::GET_ENTITY_ROTATION(uParam1->f_176[0], 2) };
	}
	if ((ENTITY::DOES_ENTITY_EXIST(uParam1->f_176[0]) && ENTITY::DOES_ENTITY_EXIST(uParam1->f_176[1])) && iVar0)
	{
		if (__LIB_3__::func_616() == 1)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109.f_1[0]))
			{
				func_1455(&(uParam1->f_109.f_1[0]), PLAYER::PLAYER_ID(), 1, 0);
				if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
				{
					PED::SET_PED_INTO_VEHICLE(uParam1->f_109.f_1[0], uParam1->f_109, -1);
				}
			}
		}
		__LIB_4__::func_709(&(uParam1->f_109.f_1), 5f);
		if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
		{
			VEHICLE::SET_VEHICLE_STEER_FOR_BUILDINGS(uParam1->f_109, 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[0]) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_140[0], false))
		{
			PED::SET_PED_LOD_MULTIPLIER(uParam1->f_140[0], 5f);
			if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(uParam1->f_140[0]))
			{
				return 0;
			}
		}
		if (!__LIB_5__::func_658(&(uParam1->f_109)))
		{
			return 0;
		}
		if (!__LIB_4__::func_707(&(uParam1->f_188), 15))
		{
			return 0;
		}
		STREAMING::SET_FOCUS_POS_AND_VEL(uParam1->f_189[6 /*3*/], 0f, 0f, 0f);
		return 1;
	}
	return 0;
}

void func_4335(int iParam0, int iParam1)//Position - 0x154DAB
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5[10];
	struct<3> Var6;
	bool bVar7;
	struct<13> Var8;
	iVar4 = -1;
	if (__LIB_5__::func_919(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_1__::func_526())
		{
			iVar4 = __LIB_3__::func_680();
		}
		Var6 = { __LIB_4__::func_303(iParam0) };
		iVar3 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar5, -1);
		if (iVar3 > 0)
		{
			iVar2 = 0;
			while (iVar2 < iVar3)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar5[iVar2], false) && PED::IS_PED_A_PLAYER(uVar5[iVar2]))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uVar5[iVar2], true), Var6) <= IntToFloat(__LIB_3__::func_679(iParam0)))
					{
						bVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar5[iVar2]);
						Var8 = { __LIB_1__::func_696(bVar7) };
						if (!bVar0)
						{
							if ((iVar4 != -1 && iVar4 == __LIB_3__::func_106(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if (((((!__LIB_1__::func_907(bVar7, 1) && !__LIB_5__::func_424(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar5[iVar2], true)) && !__LIB_1__::func_101(PLAYER::PLAYER_PED_ID())) && !__LIB_3__::func_728(bVar7, 14)) && !func_597(bVar7))
								{
									bVar0 = true;
								}
							}
						}
						if ((((((!bVar1 && __LIB_3__::func_360(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_5__::func_424(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar5[iVar2], true)) && !__LIB_1__::func_101(PLAYER::PLAYER_PED_ID())) && !__LIB_3__::func_728(bVar7, 14)) && !func_597(bVar7))
						{
							bVar1 = true;
						}
					}
					if (bVar1 && bVar0)
					{
					}
					else
					{
						iVar2++;
					}
					if (bVar1)
					{
						__LIB_5__::func_189(iParam1, 1, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 1, 0);
					}
					if (bVar0)
					{
						__LIB_5__::func_189(iParam1, 2, 1);
					}
					else
					{
						__LIB_5__::func_189(iParam1, 2, 0);
					}
					if ((bVar1 || bVar0) && !__LIB_3__::func_779())
					{
						__LIB_9__::func_506(iParam0, -1);
					}
					if (__LIB_3__::func_661(0, iParam1))
					{
						__LIB_9__::func_506(iParam0, -1);
					}
					else if (__LIB_3__::func_661(1, iParam1))
					{
						if (bVar1)
						{
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 1, 0, 0, 0, -1, -1, -1);
						}
						func_4336(iParam0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 0, 0, 1, 0, -1, -1, -1);
						}
						func_4336(iParam0);
					}
					Jump @603; //curOff = 584
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_4336(int iParam0)//Position - 0x155009
{
	__LIB_9__::func_506(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_4387(var uParam0, int iParam1)//Position - 0x157650
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1448535/*__LIB_5__::func_926*/;
			break;
		case 1:
			uParam0->f_30 = 1446217/*__LIB_6__::func_11*/;
			break;
		case 2:
			uParam0->f_31 = 1446154/*__LIB_5__::func_669*/;
			break;
		case 3:
			uParam0->f_34 = 1446098/*__LIB_4__::func_758*/;
			break;
		case 4:
			uParam0->f_12 = 1445383/*__LIB_4__::func_757*/;
			break;
		case 6:
			uParam0->f_32 = 1445375/*__LIB_0__::func_467*/;
			break;
		case 111:
			uParam0->f_35 = 1445366/*__LIB_0__::func_162*/;
			break;
		case 79:
			*uParam0 = 1445342/*__LIB_5__::func_265*/;
			break;
		case 11:
			uParam0->f_11 = 1445333/*__LIB_0__::func_109*/;
			break;
		case 12:
			uParam0->f_33 = 1443505/*__LIB_5__::func_668*/;
			break;
		case 14:
			uParam0->f_11 = 1443496/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 1443488/*__LIB_0__::func_467*/;
			break;
		case 13:
			uParam0->f_2 = 1443479/*__LIB_0__::func_109*/;
			break;
		case 15:
			uParam0->f_2 = 1443470/*__LIB_0__::func_109*/;
			break;
		case 75:
			uParam0->f_4 = 1443461/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1443452/*__LIB_0__::func_114*/;
			break;
		case 108:
			uParam0->f_55 = 1443443/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 1443418/*__LIB_5__::func_322*/;
			break;
		case 19:
			uParam0->f_17 = 1443407/*__LIB_3__::func_860*/;
			break;
		case 20:
			uParam0->f_3 = 1443398/*__LIB_0__::func_114*/;
			break;
		case 21:
			uParam0->f_3 = 1443389/*__LIB_0__::func_114*/;
			break;
		case 74:
			uParam0->f_53 = 1443380/*__LIB_0__::func_114*/;
			break;
		case 22:
			uParam0->f_24 = 1443372/*__LIB_0__::func_467*/;
			break;
		case 25:
			uParam0->f_23 = 1443364/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 1442203/*__LIB_5__::func_667*/;
			break;
		case 31:
			uParam0->f_39 = 1442192/*__LIB_3__::func_860*/;
			break;
		case 33:
			uParam0->f_40 = 1442164/*__LIB_4__::func_755*/;
			break;
		case 34:
			uParam0->f_41 = 1442155/*__LIB_0__::func_114*/;
			break;
		case 36:
			uParam0->f_58 = 1442110/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 1408428/*__LIB_5__::func_666*/;
			break;
		case 45:
			uParam0->f_14 = 1408419/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 1408410/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 1408402/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1408391/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1408383/*__LIB_0__::func_467*/;
			break;
		case 49:
			uParam0->f_8 = 1408374/*__LIB_0__::func_114*/;
			break;
		case 50:
			*uParam0 = 1408054/*__LIB_7__::func_34*/;
			break;
		case 51:
			*uParam0 = 1408025/*__LIB_4__::func_751*/;
			break;
		case 52:
			uParam0->f_15 = 1407994/*__LIB_4__::func_750*/;
			break;
		case 53:
			uParam0->f_13 = 1407960/*__LIB_5__::func_373*/;
			break;
		case 54:
			uParam0->f_45 = 1407916/*__LIB_4__::func_749*/;
			break;
		case 56:
			uParam0->f_46 = 1407887/*__LIB_4__::func_748*/;
			break;
		case 57:
			uParam0->f_11 = 1407878/*__LIB_0__::func_114*/;
			break;
		case 58:
			uParam0->f_13 = 1407821/*__LIB_5__::func_373*/;
			break;
		case 64:
			uParam0->f_47 = 1407813/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 1407805/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 1407797/*__LIB_0__::func_467*/;
			break;
		case 67:
			uParam0->f_21 = 1407789/*__LIB_0__::func_467*/;
			break;
		case 68:
			*uParam0 = 1407763/*__LIB_4__::func_746*/;
			break;
		case 69:
			*uParam0 = 1407737/*__LIB_4__::func_746*/;
			break;
		case 70:
			uParam0->f_48 = 1407725/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1407716/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1407704/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1407695/*__LIB_0__::func_114*/;
			break;
		case 78:
			uParam0->f_59 = 1407687/*__LIB_0__::func_467*/;
			break;
		case 126:
			*uParam0 = 1407504/*__LIB_7__::func_855*/;
			break;
	}
}

void func_4465(var uParam0, int iParam1)//Position - 0x161F48
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1492400/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1492090/*__LIB_4__::func_786*/;
			break;
		case 2:
			uParam0->f_31 = 1487154/*__LIB_5__::func_674*/;
			break;
		case 3:
			uParam0->f_34 = 1487125/*__LIB_4__::func_780*/;
			break;
		case 4:
			uParam0->f_12 = 1486931/*__LIB_4__::func_779*/;
			break;
		case 6:
			uParam0->f_32 = 1486581/*__LIB_4__::func_778*/;
			break;
		case 111:
			uParam0->f_35 = 1486439/*__LIB_5__::func_929*/;
			break;
		case 79:
			*uParam0 = 1486415/*__LIB_5__::func_265*/;
			break;
		case 37:
			uParam0->f_18 = 1485879/*__LIB_5__::func_673*/;
			break;
		case 38:
			uParam0->f_9 = 1485774/*__LIB_7__::func_823*/;
			break;
		case 11:
			uParam0->f_11 = 1485765/*__LIB_0__::func_109*/;
			break;
		case 12:
			uParam0->f_33 = 1485660/*__LIB_5__::func_672*/;
			break;
		case 14:
			uParam0->f_11 = 1485651/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 1485643/*__LIB_0__::func_467*/;
			break;
		case 13:
			uParam0->f_2 = 1485634/*__LIB_0__::func_114*/;
			break;
		case 44:
			*uParam0 = 1485625/*__LIB_0__::func_114*/;
			break;
		case 15:
			uParam0->f_2 = 1485336/*__LIB_9__::func_802*/;
			break;
		case 75:
			uParam0->f_4 = 1485327/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1485243/*__LIB_7__::func_39*/;
			break;
		case 108:
			uParam0->f_55 = 1485234/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 1484614/*__LIB_7__::func_859*/;
			break;
		case 19:
			uParam0->f_17 = 1484414/*__LIB_6__::func_12*/;
			break;
		case 20:
			uParam0->f_3 = 1484350/*__LIB_7__::func_768*/;
			break;
		case 21:
			uParam0->f_3 = 1484290/*__LIB_7__::func_37*/;
			break;
		case 74:
			uParam0->f_53 = 1484281/*__LIB_0__::func_109*/;
			break;
		case 22:
			uParam0->f_24 = 1484040/*__LIB_4__::func_777*/;
			break;
		case 25:
			uParam0->f_23 = 1483667/*func_4504*/;
			break;
		case 30:
			uParam0->f_8 = 1483529/*__LIB_7__::func_858*/;
			break;
		case 31:
			uParam0->f_39 = 1483089/*__LIB_7__::func_857*/;
			break;
		case 33:
			uParam0->f_40 = 1482424/*__LIB_7__::func_856*/;
			break;
		case 34:
			uParam0->f_41 = 1479846/*__LIB_4__::func_776*/;
			break;
		case 36:
			uParam0->f_58 = 1479801/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 1453951/*__LIB_4__::func_775*/;
			break;
		case 45:
			uParam0->f_14 = 1453723/*__LIB_4__::func_774*/;
			break;
		case 46:
			uParam0->f_14 = 1453547/*__LIB_4__::func_773*/;
			break;
		case 110:
			uParam0->f_57 = 1453539/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1453528/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1453286/*__LIB_4__::func_772*/;
			break;
		case 49:
			uParam0->f_8 = 1453254/*__LIB_4__::func_771*/;
			break;
		case 50:
			*uParam0 = 1453188/*__LIB_10__::func_5*/;
			break;
		case 51:
			*uParam0 = 1453164/*__LIB_6__::func_899*/;
			break;
		case 52:
			uParam0->f_15 = 1452981/*__LIB_4__::func_770*/;
			break;
		case 53:
			uParam0->f_13 = 1452386/*__LIB_5__::func_671*/;
			break;
		case 54:
			uParam0->f_45 = 1452149/*__LIB_4__::func_768*/;
			break;
		case 56:
			uParam0->f_46 = 1452140/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1452075/*__LIB_7__::func_35*/;
			break;
		case 58:
			uParam0->f_13 = 1451653/*__LIB_5__::func_375*/;
			break;
		case 64:
			uParam0->f_47 = 1451645/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 1451637/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 1451577/*__LIB_4__::func_767*/;
			break;
		case 67:
			uParam0->f_21 = 1451559/*__LIB_4__::func_766*/;
			break;
		case 68:
			*uParam0 = 1451550/*__LIB_0__::func_109*/;
			break;
		case 69:
			*uParam0 = 1451541/*__LIB_0__::func_109*/;
			break;
		case 70:
			uParam0->f_48 = 1451037/*__LIB_4__::func_765*/;
			break;
		case 71:
			uParam0->f_49 = 1450889/*__LIB_4__::func_764*/;
			break;
		case 107:
			uParam0->f_50 = 1450844/*__LIB_4__::func_763*/;
			break;
		case 80:
			uParam0->f_7 = 1450835/*__LIB_0__::func_114*/;
			break;
		case 78:
			uParam0->f_59 = 1450827/*__LIB_0__::func_467*/;
			break;
		case 125:
			uParam0->f_19 = 1450811/*__LIB_4__::func_516*/;
			break;
	}
}

void func_4504(int iParam0, int iParam1)//Position - 0x16A393
{
	struct<3> Var0;
	struct<3> Var1;
	bool bVar2;
	int iVar3;
	int iVar4;
	if (__LIB_1__::func_802(PLAYER::PLAYER_ID()) && __LIB_7__::func_768(PLAYER::PLAYER_ID(), iParam0))
	{
		__LIB_4__::func_769(iParam0, &Var0);
		Var0.f_2 = 0f;
		iVar4 = 0;
		while (iVar4 < __LIB_5__::func_928())
		{
			bVar2 = __LIB_3__::func_594(PLAYER::PLAYER_ID(), iVar4);
			if (((((bVar2 != __LIB_0__::func_162() && bVar2 != PLAYER::PLAYER_ID()) && __LIB_1__::func_693(bVar2, 1, 1)) && !__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar2))) && !__LIB_3__::func_728(bVar2, 14)) && !func_597(bVar2))
			{
				Var1 = { __LIB_1__::func_694(bVar2) };
				Var1.f_2 = 0f;
				if (SYSTEM::VDIST(Var1, Var0) <= IntToFloat(__LIB_3__::func_679(iParam0)))
				{
					iVar3++;
				}
			}
			iVar4++;
		}
		if (iVar3 == 0)
		{
			__LIB_5__::func_189(iParam1, 1, 0);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 1, 1);
		}
		if (__LIB_3__::func_661(1, iParam1))
		{
			if (iVar3 > 0)
			{
				__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 1, 0, 0, 0, -1, -1, -1);
			}
			Global_1946250.f_504 = -1;
			__LIB_5__::func_947(1, iParam0);
			Global_1946250.f_3607 = 0;
			Global_1946250.f_3612 = 1;
		}
	}
	else
	{
		__LIB_5__::func_189(iParam1, 1, 0);
	}
}

void func_4542(var uParam0, int iParam1)//Position - 0x16C5B9
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1527442/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1527332/*__LIB_4__::func_833*/;
			break;
		case 2:
			uParam0->f_31 = 1524878/*__LIB_5__::func_686*/;
			break;
		case 3:
			uParam0->f_34 = 1524849/*__LIB_4__::func_780*/;
			break;
		case 4:
			uParam0->f_12 = 1524689/*__LIB_4__::func_828*/;
			break;
		case 6:
			uParam0->f_32 = 1524571/*__LIB_4__::func_827*/;
			break;
		case 111:
			uParam0->f_35 = 1524354/*__LIB_6__::func_20*/;
			break;
		case 79:
			*uParam0 = 1524330/*__LIB_5__::func_265*/;
			break;
		case 37:
			uParam0->f_18 = 1524212/*__LIB_4__::func_826*/;
			break;
		case 38:
			uParam0->f_9 = 1524061/*__LIB_6__::func_404*/;
			break;
		case 11:
			uParam0->f_11 = 1524052/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 1523047/*__LIB_5__::func_684*/;
			break;
		case 14:
			uParam0->f_11 = 1523038/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 1523030/*__LIB_0__::func_467*/;
			break;
		case 13:
			uParam0->f_2 = 1523021/*__LIB_0__::func_114*/;
			break;
		case 15:
			uParam0->f_2 = 1522867/*__LIB_9__::func_803*/;
			break;
		case 75:
			uParam0->f_4 = 1522858/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1522770/*__LIB_7__::func_40*/;
			break;
		case 108:
			uParam0->f_55 = 1521983/*__LIB_6__::func_430*/;
			break;
		case 17:
			uParam0->f_17 = 1521355/*__LIB_7__::func_69*/;
			break;
		case 19:
			uParam0->f_17 = 1521329/*__LIB_6__::func_18*/;
			break;
		case 20:
			uParam0->f_3 = 1521290/*__LIB_5__::func_820*/;
			break;
		case 21:
			uParam0->f_3 = 1521230/*__LIB_5__::func_933*/;
			break;
		case 74:
			uParam0->f_53 = 1521221/*__LIB_0__::func_109*/;
			break;
		case 22:
			uParam0->f_24 = 1521168/*__LIB_5__::func_682*/;
			break;
		case 25:
			uParam0->f_23 = 1520864/*func_4631*/;
			break;
		case 30:
			uParam0->f_8 = 1520741/*__LIB_7__::func_861*/;
			break;
		case 31:
			uParam0->f_39 = 1520521/*__LIB_5__::func_765*/;
			break;
		case 33:
			uParam0->f_40 = 1520236/*__LIB_5__::func_932*/;
			break;
		case 34:
			uParam0->f_41 = 1519830/*__LIB_4__::func_822*/;
			break;
		case 36:
			uParam0->f_58 = 1519785/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 1502253/*__LIB_4__::func_821*/;
			break;
		case 45:
			uParam0->f_14 = 1502244/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 1502160/*__LIB_4__::func_820*/;
			break;
		case 110:
			uParam0->f_57 = 1502152/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1502129/*__LIB_4__::func_819*/;
			break;
		case 47:
			uParam0->f_43 = 1502077/*__LIB_4__::func_818*/;
			break;
		case 49:
			uParam0->f_8 = 1502045/*__LIB_4__::func_771*/;
			break;
		case 50:
			*uParam0 = 1501867/*__LIB_8__::func_977*/;
			break;
		case 51:
			*uParam0 = 1501770/*__LIB_9__::func_319*/;
			break;
		case 52:
			uParam0->f_15 = 1501759/*__LIB_4__::func_817*/;
			break;
		case 53:
			uParam0->f_13 = 1501444/*__LIB_5__::func_681*/;
			break;
		case 54:
			uParam0->f_45 = 1500580/*__LIB_9__::func_318*/;
			break;
		case 56:
			uParam0->f_46 = 1500571/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1495764/*__LIB_9__::func_325*/;
			break;
		case 58:
			uParam0->f_13 = 1495750/*__LIB_6__::func_14*/;
			break;
		case 64:
			uParam0->f_47 = 1494242/*__LIB_9__::func_522*/;
			break;
		case 65:
			uParam0->f_21 = 1494234/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 1494183/*__LIB_4__::func_790*/;
			break;
		case 67:
			uParam0->f_21 = 1494155/*__LIB_4__::func_789*/;
			break;
		case 68:
			*uParam0 = 1494146/*__LIB_0__::func_109*/;
			break;
		case 69:
			*uParam0 = 1494137/*__LIB_0__::func_109*/;
			break;
		case 70:
			uParam0->f_48 = 1493853/*__LIB_4__::func_788*/;
			break;
		case 71:
			uParam0->f_49 = 1493757/*__LIB_4__::func_787*/;
			break;
		case 107:
			uParam0->f_50 = 1493745/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1493559/*__LIB_5__::func_930*/;
			break;
		case 78:
			uParam0->f_59 = 1493387/*__LIB_6__::func_13*/;
			break;
	}
}

void func_4631(int iParam0, int iParam1)//Position - 0x1734E0
{
	struct<3> Var0;
	struct<3> Var1;
	bool bVar2;
	int iVar3;
	int iVar4;
	if (__LIB_1__::func_744(PLAYER::PLAYER_ID()) && __LIB_5__::func_820(PLAYER::PLAYER_ID(), iParam0))
	{
		__LIB_4__::func_816(iParam0, &Var0);
		Var0.f_2 = 0f;
		iVar4 = 0;
		while (iVar4 < __LIB_5__::func_928())
		{
			bVar2 = __LIB_3__::func_594(PLAYER::PLAYER_ID(), iVar4);
			if (((((bVar2 != __LIB_0__::func_162() && bVar2 != PLAYER::PLAYER_ID()) && __LIB_1__::func_693(bVar2, 1, 1)) && !__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar2))) && !__LIB_3__::func_728(bVar2, 14)) && !func_597(bVar2))
			{
				Var1 = { __LIB_1__::func_694(bVar2) };
				Var1.f_2 = 0f;
				if (SYSTEM::VDIST(Var1, Var0) <= IntToFloat(__LIB_3__::func_679(iParam0)))
				{
					iVar3++;
				}
			}
			iVar4++;
		}
		if (iVar3 == 0)
		{
			__LIB_5__::func_189(iParam1, 1, 0);
		}
		else
		{
			__LIB_5__::func_189(iParam1, 1, 1);
		}
		if (__LIB_3__::func_661(1, iParam1))
		{
			if (iVar3 > 0)
			{
				__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 1, 0, 0, 0, -1, -1, -1);
			}
			Global_1946250.f_504 = -1;
			__LIB_5__::func_947(1, iParam0);
			Global_1946250.f_3607 = 0;
			Global_1946250.f_3612 = 1;
		}
	}
	else
	{
		__LIB_5__::func_189(iParam1, 1, 0);
	}
}

void func_4675(var uParam0, int iParam1)//Position - 0x174E9B
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1555326/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1555180/*__LIB_5__::func_822*/;
			break;
		case 2:
			uParam0->f_31 = 1549992/*__LIB_6__::func_348*/;
			break;
		case 3:
			uParam0->f_34 = 1549963/*__LIB_4__::func_780*/;
			break;
		case 4:
			uParam0->f_12 = 1549553/*__LIB_5__::func_692*/;
			break;
		case 6:
			uParam0->f_32 = 1549383/*__LIB_5__::func_821*/;
			break;
		case 111:
			uParam0->f_35 = 1548988/*__LIB_5__::func_691*/;
			break;
		case 79:
			*uParam0 = 1548964/*__LIB_5__::func_265*/;
			break;
		case 11:
			uParam0->f_11 = 1548955/*__LIB_0__::func_109*/;
			break;
		case 12:
			uParam0->f_33 = 1548860/*__LIB_5__::func_690*/;
			break;
		case 14:
			uParam0->f_11 = 1548851/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 1548843/*__LIB_0__::func_467*/;
			break;
		case 13:
			uParam0->f_2 = 1548834/*__LIB_0__::func_114*/;
			break;
		case 15:
			uParam0->f_2 = 1548549/*__LIB_10__::func_63*/;
			break;
		case 75:
			uParam0->f_4 = 1548540/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1548452/*__LIB_7__::func_42*/;
			break;
		case 108:
			uParam0->f_55 = 1548443/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 1548190/*__LIB_7__::func_825*/;
			break;
		case 19:
			uParam0->f_17 = 1548164/*__LIB_6__::func_22*/;
			break;
		case 20:
			uParam0->f_3 = 1548155/*__LIB_0__::func_114*/;
			break;
		case 21:
			uParam0->f_3 = 1548146/*__LIB_0__::func_114*/;
			break;
		case 74:
			uParam0->f_53 = 1548137/*__LIB_0__::func_114*/;
			break;
		case 22:
			uParam0->f_24 = 1548129/*__LIB_0__::func_467*/;
			break;
		case 25:
			uParam0->f_23 = 1548121/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 1547998/*__LIB_7__::func_863*/;
			break;
		case 31:
			uParam0->f_39 = 1547752/*__LIB_7__::func_824*/;
			break;
		case 33:
			uParam0->f_40 = 1547496/*__LIB_6__::func_347*/;
			break;
		case 34:
			uParam0->f_41 = 1545343/*__LIB_5__::func_936*/;
			break;
		case 36:
			uParam0->f_58 = 1545298/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 1530753/*__LIB_4__::func_838*/;
			break;
		case 45:
			uParam0->f_14 = 1530744/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 1530735/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 1530727/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1530716/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1530664/*__LIB_4__::func_837*/;
			break;
		case 49:
			uParam0->f_8 = 1530632/*__LIB_4__::func_771*/;
			break;
		case 50:
			*uParam0 = 1530503/*__LIB_7__::func_41*/;
			break;
		case 51:
			*uParam0 = 1530479/*__LIB_6__::func_899*/;
			break;
		case 52:
			uParam0->f_15 = 1530468/*__LIB_4__::func_270*/;
			break;
		case 53:
			uParam0->f_13 = 1529817/*__LIB_5__::func_689*/;
			break;
		case 54:
			uParam0->f_45 = 1529181/*__LIB_7__::func_862*/;
			break;
		case 56:
			uParam0->f_46 = 1529172/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1529105/*__LIB_6__::func_779*/;
			break;
		case 58:
			uParam0->f_13 = 1529091/*__LIB_6__::func_21*/;
			break;
		case 64:
			uParam0->f_47 = 1528712/*__LIB_5__::func_387*/;
			break;
		case 65:
			uParam0->f_21 = 1528637/*__LIB_5__::func_687*/;
			break;
		case 66:
			uParam0->f_21 = 1528586/*__LIB_4__::func_835*/;
			break;
		case 67:
			uParam0->f_21 = 1528568/*__LIB_4__::func_766*/;
			break;
		case 68:
			*uParam0 = 1528559/*__LIB_0__::func_109*/;
			break;
		case 69:
			*uParam0 = 1528550/*__LIB_0__::func_109*/;
			break;
		case 70:
			uParam0->f_48 = 1528433/*__LIB_4__::func_834*/;
			break;
		case 71:
			uParam0->f_49 = 1528424/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1528412/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1528403/*__LIB_0__::func_114*/;
			break;
		case 78:
			uParam0->f_59 = 1528395/*__LIB_0__::func_467*/;
			break;
	}
}

void func_4749(var uParam0, int iParam1)//Position - 0x17C00F
{
	switch (iParam1)
	{
		case 96:
			uParam0->f_1 = 1556953/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 1556944/*__LIB_0__::func_109*/;
			break;
		case 98:
			uParam0->f_1 = 1556935/*__LIB_0__::func_109*/;
			break;
		case 99:
			uParam0->f_1 = 1556775/*__LIB_5__::func_390*/;
			break;
		case 100:
			uParam0->f_22 = 1556767/*__LIB_0__::func_467*/;
			break;
		case 101:
			uParam0->f_22 = 1556612/*__LIB_8__::func_991*/;
			break;
	}
}

void func_4757(var uParam0, int iParam1)//Position - 0x17C1E2
{
	switch (iParam1)
	{
		case 90:
			uParam0->f_1 = 1557170/*__LIB_0__::func_114*/;
			break;
		case 91:
			uParam0->f_1 = 1557161/*__LIB_0__::func_109*/;
			break;
		case 92:
			uParam0->f_1 = 1557152/*__LIB_0__::func_109*/;
			break;
		case 93:
			uParam0->f_1 = 1556775/*__LIB_5__::func_390*/;
			break;
		case 94:
			uParam0->f_1 = 1557143/*__LIB_0__::func_109*/;
			break;
		case 95:
			uParam0->f_22 = 1557079/*__LIB_8__::func_991*/;
			break;
	}
}

void func_4763(var uParam0, int iParam1)//Position - 0x17C2BB
{
	switch (iParam1)
	{
		case 84:
			uParam0->f_1 = 1557397/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 1557388/*__LIB_0__::func_109*/;
			break;
		case 86:
			uParam0->f_1 = 1556775/*__LIB_5__::func_390*/;
			break;
		case 87:
			uParam0->f_1 = 1557379/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 1557279/*__LIB_8__::func_992*/;
			break;
	}
}

void func_4768(int iParam0, var uParam1)//Position - 0x17C39E
{
	switch (iParam0)
	{
		case 0:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*uParam1);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 0, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 1, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 2, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 3, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 6, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 7, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 8, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 10, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 11, 1, 0, 0);
			break;
		case 1:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*uParam1);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 0, 2, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 1, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 2, 4, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 3, 0, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 6, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 7, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 8, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 10, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 11, 1, 0, 0);
			break;
		case 2:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*uParam1);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 0, 2, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 1, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 2, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 3, 0, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 6, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 7, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 8, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 10, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 11, 1, 0, 0);
			break;
		case 3:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*uParam1);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 0, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 1, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 2, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 3, 1, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 6, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 7, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 8, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 10, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 11, 1, 0, 0);
			break;
		case 4:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*uParam1);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 0, 4, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 1, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 2, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 3, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 6, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 7, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 8, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 10, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 11, 1, 0, 0);
			break;
		case 5:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*uParam1);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 0, 4, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 1, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 2, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 3, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 6, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 7, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 8, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 10, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 11, 1, 0, 0);
			break;
		case 6:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*uParam1);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 0, 4, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 1, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 2, 4, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 3, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 6, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 7, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 8, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 10, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 11, 1, 0, 0);
			break;
		case 7:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*uParam1);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 0, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 2, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 3, 0, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 6, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 7, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 8, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 11, 0, 0, 0);
			break;
		case 8:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*uParam1);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 0, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 2, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 3, 1, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 6, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 7, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 8, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 11, 0, 0, 0);
			break;
		case 9:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*uParam1);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 0, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 2, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 3, 2, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 6, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 7, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 8, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 11, 0, 0, 0);
			break;
		case 10:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*uParam1);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 0, 2, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 2, 2, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 3, 3, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 4, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 6, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 7, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 8, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 11, 0, 0, 0);
			break;
		case 11:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*uParam1);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 0, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 2, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 3, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 4, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 6, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 7, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 8, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 11, 0, 0, 0);
			PED::SET_PED_PROP_INDEX(*uParam1, 1, 0, 0, false);
			break;
		case 12:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*uParam1);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 0, 3, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 2, 3, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 3, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 4, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 6, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 7, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 8, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 11, 0, 0, 0);
			break;
		case 13:
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*uParam1);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 0, 4, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 2, 4, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 3, 2, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 4, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 6, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 7, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 8, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(*uParam1, 11, 0, 0, 0);
			PED::SET_PED_PROP_INDEX(*uParam1, 1, 0, 0, false);
			break;
	}
}

Vector3 func_4769(int iParam0)//Position - 0x17CAD1
{
	return func_4770(func_4771(), iParam0) + __LIB_16__::func_151(iParam0);
}

Vector3 func_4770(struct<3> Param0, int iParam1)//Position - 0x17CAEA
{
	float fVar0;
	fVar0 = __LIB_16__::func_150(iParam1);
	return __LIB_0__::func_327(Param0, fVar0);
}

Vector3 func_4771()//Position - 0x17CB04
{
	return -0.68f, 0.97f, 0f;
}

bool func_4772(int iParam0)//Position - 0x17CB17
{
	return Global_2788852[iParam0] >= 7;
}

bool func_4773()//Position - 0x17CB29
{
	return (STREAMING::HAS_MODEL_LOADED(func_24(1)) && STREAMING::HAS_MODEL_LOADED(func_24(0)));
}

void func_4774()//Position - 0x17CB48
{
	STREAMING::REQUEST_MODEL(func_24(1));
	STREAMING::REQUEST_MODEL(func_24(0));
}

void func_4775(var uParam0, int iParam1)//Position - 0x17CB62
{
	if (!func_4778(uParam0))
	{
		return;
	}
	if (!func_4777())
	{
		return;
	}
	func_4776(uParam0, 1, 0, 1065353216);
	func_4(uParam0, iParam1, 1, 447, 439);
}

void func_4776(var uParam0, bool bParam1, float fParam2, float fParam3)//Position - 0x17CB9E
{
	struct<6> Var0;
	int iVar1;
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = 1090519040;
	Var0.f_3 = -998637568;
	Var0.f_5 = 1065353216;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 6)
	{
		func_21(uParam0, iVar1, &Var0);
		if (bParam1)
		{
			Var0.f_4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(fParam2, fParam3);
		}
		func_9(uParam0, iVar1, &Var0);
		iVar1++;
	}
}

bool func_4777()//Position - 0x17CC0B
{
	return (STREAMING::HAS_ANIM_DICT_LOADED(__LIB_16__::func_152(2)) && STREAMING::HAS_ANIM_DICT_LOADED(__LIB_16__::func_152(3)));
}

int func_4778(var uParam0)//Position - 0x17CC2A
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return 1;
	}
	func_4774();
	if (!func_4773())
	{
		return 0;
	}
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(6))
	{
		return 0;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_1357.f_288[iVar0]) && !func_4779(iVar0))
		{
			bVar1 = func_4772(iVar0);
			iVar2 = func_24(bVar1);
			iVar3 = PED::CREATE_PED(26, iVar2, func_4769(iVar0), func_16(iVar0), true, true);
			uParam0->f_1357.f_288[iVar0] = NETWORK::PED_TO_NET(iVar3);
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iVar3, false);
			PED::SET_PED_AS_ENEMY(iVar3, false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar3, true);
			PED::SET_PED_RESET_FLAG(iVar3, 249, true);
			PED::SET_PED_CONFIG_FLAG(iVar3, 185, true);
			PED::SET_PED_CONFIG_FLAG(iVar3, 108, true);
			ENTITY::SET_ENTITY_CAN_ONLY_BE_DAMAGED_BY_SCRIPT_PARTICIPANTS(iVar3, true);
			PED::SET_PED_CAN_EVASIVE_DIVE(iVar3, false);
			PED::SET_TREAT_AS_AMBIENT_PED_FOR_DRIVER_LOCKON(iVar3, true);
			PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iVar3, false);
			PED::SET_PED_CONFIG_FLAG(iVar3, 208, true);
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar3, true, false);
			func_109(&iVar3, bVar1, iVar0);
			func_107(&iVar3, bVar1, iVar0);
		}
		iVar0++;
	}
	func_106();
	return 1;
}

bool func_4779(int iParam0)//Position - 0x17CD40
{
	return Global_2788830 == iParam0;
}

void func_4780()//Position - 0x17CD4F
{
	STREAMING::REQUEST_ANIM_DICT(__LIB_16__::func_152(2));
	STREAMING::REQUEST_ANIM_DICT(__LIB_16__::func_152(3));
}

void func_4781(var uParam0)//Position - 0x17CD69
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (BitTest(uParam0->f_1652[iVar0 /*33*/].f_2, 5))
		{
			func_4782(uParam0);
			MISC::SET_BIT(&(uParam0->f_1357.f_174), 1);
			return;
		}
		iVar0++;
	}
	MISC::CLEAR_BIT(&(uParam0->f_1357.f_174), 1);
}

void func_4782(var uParam0)//Position - 0x17CDB8
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		func_4785(uParam0, iVar0);
		iVar0++;
	}
	func_4783(uParam0);
}

void func_4783(var uParam0)//Position - 0x17CDE3
{
	func_4784(&(uParam0->f_1357.f_109), &(uParam0->f_727));
	func_4784(&(uParam0->f_1357.f_146), &(uParam0->f_764));
}

void func_4784(var uParam0, var uParam1)//Position - 0x17CE0B
{
	int iVar0;
	int iVar1;
	if (*uParam0 != *uParam1)
	{
		return;
	}
	iVar0 = 0;
	iVar1 = *uParam0;
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		(*uParam0)[iVar0] = (*uParam1)[iVar0];
		iVar0++;
	}
}

void func_4785(var uParam0, int iParam1)//Position - 0x17CE46
{
	struct<11> Var0;
	Var0 = { func_4786(&(uParam0->f_1212[iParam1 /*23*/])) };
	if (Var0.f_4 == 31)
	{
		Var0.f_1 = uParam0->f_1357.f_153[iParam1];
	}
	MISC::COPY_SCRIPT_STRUCT(&(uParam0->f_1357.f_42[iParam1 /*11*/]), &Var0, 11);
}

struct<11> func_4786(var uParam0)//Position - 0x17CE8B
{
	char* sVar0;
	if (!__LIB_16__::func_156(uParam0))
	{
		return uParam0->f_10;
	}
	sVar0 = __LIB_16__::func_152(4);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_22))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, sVar0, uParam0->f_22, 3))
		{
			uParam0->f_10.f_10 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*uParam0, sVar0, uParam0->f_22);
		}
		else
		{
			uParam0->f_10.f_10 = 0f;
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_21))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_1, sVar0, uParam0->f_21, 3))
		{
			uParam0->f_10.f_9 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uParam0->f_1, sVar0, uParam0->f_21);
		}
		else
		{
			uParam0->f_10.f_9 = 0f;
		}
	}
	return uParam0->f_10;
}

void func_4788(var uParam0)//Position - 0x17CF72
{
	func_4790(uParam0);
	func_4789(uParam0);
}

void func_4789(var uParam0)//Position - 0x17CF86
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = uParam0->f_1357.f_263;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 8)
	{
		uParam0->f_17++;
		uParam0->f_17 = __LIB_4__::func_892(uParam0->f_17, iVar0);
		iVar2 = uParam0->f_1357.f_263[uParam0->f_17];
		if (iVar2 == __LIB_0__::func_162())
		{
		}
		else if (func_54(uParam0, uParam0->f_17))
		{
		}
		else
		{
			uParam0->f_1357.f_263[uParam0->f_17] = __LIB_0__::func_162();
		}
		iVar1++;
	}
}

void func_4790(var uParam0)//Position - 0x17D004
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 8)
	{
		uParam0->f_16++;
		uParam0->f_16 = __LIB_4__::func_892(uParam0->f_16, 32);
		iVar0 = uParam0->f_16;
		iVar2 = uParam0->f_1652[iVar0 /*33*/];
		if (!func_56(iVar2))
		{
		}
		else
		{
			iVar3 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			iVar4 = uParam0->f_1357.f_263[iVar2];
			if (iVar3 == iVar4)
			{
			}
			else if (iVar4 != __LIB_0__::func_162())
			{
			}
			else if (!__LIB_1__::func_693(iVar3, 1, 1))
			{
			}
			else
			{
				iVar5 = func_4791(iVar2);
				if (!func_25(iVar5))
				{
				}
				else
				{
					uParam0->f_1357.f_263[iVar2] = iVar3;
				}
			}
		}
		iVar1++;
	}
}

int func_4791(int iParam0)//Position - 0x17D0B6
{
	float fVar0;
	fVar0 = (SYSTEM::TO_FLOAT(iParam0) / 4f);
	return SYSTEM::FLOOR(fVar0);
}

void func_4792(int* iParam0)//Position - 0x17D0CE
{
	switch (iParam0->f_8)
	{
		case 0:
			func_5552(iParam0);
			return;
		case 1:
			func_5551(iParam0);
			break;
		case 2:
			func_5535(iParam0);
			break;
		case 3:
			func_5522(iParam0);
			break;
		case 4:
			func_5516(iParam0);
			break;
		case 5:
			func_5501(iParam0);
			break;
		case 6:
			func_5490(iParam0);
			break;
		case 7:
			func_5005(iParam0);
			break;
		case 8:
			func_4927(iParam0);
			break;
	}
	func_4900(iParam0);
	func_4793(iParam0);
}

void func_4793(int* iParam0)//Position - 0x17D172
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_4779(iVar0))
		{
		}
		else
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_1212[iVar0 /*23*/].f_1))
			{
				iParam0->f_1212[iVar0 /*23*/].f_1 = func_4894(iVar0, 1);
			}
			func_4892(iParam0, iVar0);
			func_4890(iParam0, iVar0);
			func_4820(iParam0, iVar0);
			if (func_4819(iParam0, iVar0))
			{
				func_4794(iParam0, iVar0);
			}
		}
		iVar0++;
	}
}

int func_4794(int* iParam0, int iParam1)//Position - 0x17D1EC
{
	if (func_4818(iParam0, iParam1))
	{
		func_4817(iParam0, iParam1);
		return 0;
	}
	if (func_4816(iParam0, iParam1))
	{
		func_4815(iParam0, iParam1);
		return 0;
	}
	if (func_4813(iParam0, iParam1))
	{
		func_4796(iParam0, iParam1);
		return 0;
	}
	return func_4795(iParam0, iParam1);
}

bool func_4795(int* iParam0, int iParam1)//Position - 0x17D241
{
	bool bVar0;
	if (iParam0->f_1357[iParam1] != 5)
	{
		return 1;
	}
	bVar0 = ((BitTest(iParam0->f_1[iParam1], 4) || BitTest(iParam0->f_1[iParam1], 5)) || BitTest(iParam0->f_1[iParam1], 6));
	return !bVar0;
}

void func_4796(int* iParam0, int iParam1)//Position - 0x17D289
{
	int iVar0;
	iVar0 = func_4802(iParam0, iParam1, 3);
	func_4797(iParam0, iParam1, 3, iVar0);
	MISC::CLEAR_BIT(&(iParam0->f_1[iParam1]), 6);
}

void func_4797(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x17D2B4
{
	struct<3> Var0;
	Var0 = { uParam0->f_1104[iParam1 /*10*/][(iParam2 - 1) /*3*/] };
	__LIB_42__::func_950(Var0, iParam3);
}

int func_4802(var uParam0, int iParam1, int iParam2)//Position - 0x17D382
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	iVar1 = 0;
	uParam0->f_1104[iParam1 /*10*/][(iParam2 - 1) /*3*/] = { 0f, 0f, 0f };
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar2 = func_58(iVar0, iParam1);
		iVar1 = (iVar1 + func_4803(uParam0, iParam1, iVar2, iParam2));
		iVar0++;
	}
	return iVar1;
}

int func_4803(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x17D3D3
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	struct<3> Var7;
	if (iParam2 == -1)
	{
		return 0;
	}
	iVar0 = func_4812(uParam0, iParam2);
	if (iVar0 == __LIB_0__::func_162())
	{
		return 0;
	}
	iVar1 = 0;
	iVar2 = 0;
	iVar3 = 0;
	iVar4 = iVar0;
	iVar5 = 0;
	iVar6 = 0;
	iVar1 = 0;
	while (iVar1 < 10)
	{
		func_4811(uParam0->f_1652[iVar4 /*33*/].f_4[iVar1 /*2*/], &iVar2, &iVar3);
		if ((uParam0->f_839[iParam2 /*11*/][iVar1] == 0 || !ENTITY::DOES_ENTITY_EXIST(uParam0->f_839[iParam2 /*11*/][iVar1])) || !func_4807(iVar2, iVar3, iParam3))
		{
		}
		else
		{
			iVar6++;
			iVar5 = (iVar5 + __LIB_31__::func_831(uParam0->f_1652[iVar4 /*33*/].f_4[iVar1 /*2*/].f_1));
			uParam0->f_1104[iParam1 /*10*/][(iParam3 - 1) /*3*/] = { uParam0->f_1104[iParam1 /*10*/][(iParam3 - 1) /*3*/] + ENTITY::GET_ENTITY_COORDS(uParam0->f_839[iParam2 /*11*/][iVar1], true) };
			OBJECT::DELETE_OBJECT(&(uParam0->f_839[iParam2 /*11*/][iVar1]));
			uParam0->f_839[iParam2 /*11*/][iVar1] = 0;
		}
		iVar1++;
	}
	if (iVar6 <= 0)
	{
		return iVar5;
	}
	Var7 = { uParam0->f_1104[iParam1 /*10*/][(iParam3 - 1) /*3*/] };
	uParam0->f_1104[iParam1 /*10*/][(iParam3 - 1) /*3*/] = { (Var7.f_0 / IntToFloat(iVar6)), (Var7.f_1 / IntToFloat(iVar6)), (Var7.f_2 / IntToFloat(iVar6)) };
	return iVar5;
}

int func_4807(int iParam0, int iParam1, int iParam2)//Position - 0x17D603
{
	switch (iParam2)
	{
		case 1:
			return func_4810(iParam0, iParam1);
		case 2:
			return func_4809(iParam0, iParam1);
		case 3:
			return func_4808(iParam0, iParam1);
		default:
	}
	return 0;
}

bool func_4808(int iParam0, int iParam1)//Position - 0x17D646
{
	switch (iParam0)
	{
		case 0:
			return iParam1 > 3;
		case 1:
			return iParam1 > 1;
		default:
	}
	return (iParam1 > 16 && iParam1 > 8);
}

bool func_4809(int iParam0, int iParam1)//Position - 0x17D67E
{
	switch (iParam0)
	{
		case 0:
			return (iParam1 < 4 && iParam1 > 1);
		case 1:
			return (iParam1 < 2 && iParam1 > 0);
		default:
	}
	return (iParam1 < 17 && iParam1 > 8);
}

bool func_4810(int iParam0, int iParam1)//Position - 0x17D6C8
{
	switch (iParam0)
	{
		case 0:
			return iParam1 < 2;
		case 1:
			return iParam1 < 1;
		default:
	}
	return iParam1 < 9;
}

void func_4811(int iParam0, int iParam1, int iParam2)//Position - 0x17D6F6
{
	*iParam1 = (iParam0 % 8);
	*iParam2 = (iParam0 / 8);
}

int func_4812(var uParam0, int iParam1)//Position - 0x17D70E
{
	if (!func_56(iParam1))
	{
		return __LIB_0__::func_162();
	}
	if (!func_54(uParam0, iParam1))
	{
		return __LIB_0__::func_162();
	}
	return uParam0->f_1357.f_263[iParam1];
}

int func_4813(int* iParam0, int iParam1)//Position - 0x17D746
{
	if (!BitTest(iParam0->f_1[iParam1], 6))
	{
		return 0;
	}
	if (!func_4814(iParam0, iParam1, 26, 0))
	{
		return 0;
	}
	if (func_80(iParam0, iParam1, MISC::GET_HASH_KEY("CLEAR_CHIPS_ZONE_THREE"), 0))
	{
		return 1;
	}
	return 0;
}

bool func_4814(int* iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x17D78D
{
	int iVar0;
	int iVar1;
	char* sVar2;
	char* sVar3;
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0->f_1357.f_288[iParam1]))
	{
		return 0;
	}
	if (iParam0->f_1357.f_175[iParam1] == -1)
	{
		return 0;
	}
	iVar0 = NETWORK::NET_TO_PED(iParam0->f_1357.f_288[iParam1]);
	if (!__LIB_0__::func_121(iVar0))
	{
		return 0;
	}
	iVar1 = func_22(iParam0, iParam1);
	sVar2 = __LIB_16__::func_152(iVar1);
	sVar3 = func_10(iParam2, iVar1, iParam3);
	return ENTITY::IS_ENTITY_PLAYING_ANIM(iVar0, sVar2, sVar3, 3);
}

void func_4815(int* iParam0, int iParam1)//Position - 0x17D809
{
	int iVar0;
	iVar0 = func_4802(iParam0, iParam1, 2);
	func_4797(iParam0, iParam1, 2, iVar0);
	MISC::CLEAR_BIT(&(iParam0->f_1[iParam1]), 5);
}

int func_4816(int* iParam0, int iParam1)//Position - 0x17D834
{
	if (!BitTest(iParam0->f_1[iParam1], 5))
	{
		return 0;
	}
	if (!func_4814(iParam0, iParam1, 25, 0))
	{
		return 0;
	}
	if (func_80(iParam0, iParam1, MISC::GET_HASH_KEY("CLEAR_CHIPS_ZONE_TWO"), 0))
	{
		return 1;
	}
	return 0;
}

void func_4817(int* iParam0, int iParam1)//Position - 0x17D87B
{
	int iVar0;
	iVar0 = func_4802(iParam0, iParam1, 1);
	func_4797(iParam0, iParam1, 1, iVar0);
	MISC::CLEAR_BIT(&(iParam0->f_1[iParam1]), 4);
}

int func_4818(int* iParam0, int iParam1)//Position - 0x17D8A6
{
	if (!BitTest(iParam0->f_1[iParam1], 4))
	{
		return 0;
	}
	if (!func_4814(iParam0, iParam1, 24, 0))
	{
		return 0;
	}
	if (func_80(iParam0, iParam1, MISC::GET_HASH_KEY("CLEAR_CHIPS_ZONE_ONE"), 0))
	{
		return 1;
	}
	return 0;
}

bool func_4819(int* iParam0, int iParam1)//Position - 0x17D8ED
{
	int iVar0;
	iVar0 = iParam0->f_1357[iParam1];
	return (iVar0 == 5 || iVar0 == 6);
}

void func_4820(int* iParam0, int iParam1)//Position - 0x17D90E
{
	func_4880(iParam0, iParam1);
	func_4877(iParam0, iParam1);
	func_4876(iParam0, iParam1);
	func_4874(iParam0, iParam1);
	__LIB_44__::func_238(&(iParam0->f_1212[iParam1 /*23*/]));
	func_4821(iParam0, iParam1);
}

void func_4821(int* iParam0, int iParam1)//Position - 0x17D94C
{
	int iVar0;
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if ((BitTest(iParam0->f_1652[iVar0 /*33*/].f_26[iParam1], 1) && !BitTest(iParam0->f_1652[iVar0 /*33*/].f_26[iParam1], 2)) && __LIB_40__::func_974(&(iParam0->f_1212[iParam1 /*23*/])))
	{
		if (iParam0->f_1357.f_28[iParam1] > 0)
		{
			func_4824(iParam0, iParam1);
		}
		func_4822(iParam0, iParam1);
		MISC::SET_BIT(&(iParam0->f_1652[iVar0 /*33*/].f_26[iParam1]), 2);
	}
}

void func_4822(var uParam0, int iParam1)//Position - 0x17D9CB
{
	var uVar0;
	int iVar1;
	int iVar2;
	uVar0 = func_4823(uParam0, iParam1);
	iVar1 = (iParam1 * 6 + uParam0->f_764[iParam1]);
	uParam0->f_764[iParam1]++;
	if (iVar1 > uParam0->f_727)
	{
		return;
	}
	if (uParam0->f_764[iParam1] > 6)
	{
		iVar2 = 0;
		iVar2 = 0;
		while (iVar2 < 5)
		{
			uParam0->f_727[(iParam1 * 6 + iVar2)] = uParam0->f_727[(iParam1 * 6 + iVar2 + 1)];
			iVar2++;
		}
		uParam0->f_727[iParam1 * 6 + 5] = uVar0;
		uParam0->f_764[iParam1] = __LIB_0__::func_340(uParam0->f_764[iParam1], 0, 6);
		return;
	}
	uParam0->f_764[iParam1] = __LIB_0__::func_340(uParam0->f_764[iParam1], 0, 6);
	uParam0->f_727[iVar1] = uVar0;
}

var func_4823(int* iParam0, int iParam1)//Position - 0x17DA9B
{
	var uVar0;
	uVar0 = iParam0->f_1357.f_153[iParam1];
	return uVar0;
}

int func_4824(var uParam0, int iParam1)//Position - 0x17DAB2
{
	int iVar0;
	char* sVar1;
	if (!func_25(iParam1))
	{
		return 0;
	}
	iVar0 = func_4823(uParam0, iParam1);
	if (iVar0 < 0)
	{
		return 0;
	}
	sVar1 = __LIB_31__::func_830(8, iVar0);
	func_46(uParam0, sVar1, iParam1, 1, 0, 0);
	return 1;
}

void func_4874(int* iParam0, int iParam1)//Position - 0x17EB72
{
	int iVar0;
	iVar0 = func_84(iParam0, iParam1);
	if (__LIB_0__::func_937(&(iParam0->f_1357.f_250[iParam1 /*2*/]), (iVar0 - 18000), 0) && iParam0->f_1357[iParam1] == 2)
	{
		func_4875(&(iParam0->f_1212[iParam1 /*23*/]));
	}
}

void func_4875(var uParam0)//Position - 0x17EBBA
{
	uParam0->f_7 = 1;
}

void func_4876(int* iParam0, int iParam1)//Position - 0x17EBC7
{
	int iVar0;
	float fVar1;
	if (iParam0->f_1212[iParam1 /*23*/].f_10.f_4 == -1 || iParam0->f_1212[iParam1 /*23*/].f_10.f_4 == 31)
	{
		iParam0->f_1212[iParam1 /*23*/].f_10.f_1 = -1;
		return;
	}
	iVar0 = __LIB_42__::func_953(&(iParam0->f_1212[iParam1 /*23*/]));
	fVar1 = iParam0->f_1212[iParam1 /*23*/].f_10;
	if ((IntToFloat(iVar0) - fVar1) < 2000f)
	{
		iParam0->f_1212[iParam1 /*23*/].f_10.f_1 = func_4823(iParam0, iParam1);
	}
}

void func_4877(int* iParam0, int iParam1)//Position - 0x17EC48
{
	bool bVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_1212[iParam1 /*23*/]))
	{
		bVar0 = iParam0->f_1212[iParam1 /*23*/].f_10.f_4 == -1;
		func_4878(iParam0, iParam1, bVar0);
	}
}

int func_4878(var uParam0, int iParam1, bool bParam2)//Position - 0x17EC7D
{
	int iVar0;
	if (func_4779(iParam1))
	{
		return 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1212[iParam1 /*23*/]))
	{
		return 1;
	}
	iVar0 = func_4879();
	if (!STREAMING::HAS_MODEL_LOADED(iVar0))
	{
		return 0;
	}
	uParam0->f_1212[iParam1 /*23*/] = OBJECT::CREATE_OBJECT_NO_OFFSET(iVar0, __LIB_16__::func_151(iParam1), false, true, false);
	ENTITY::SET_ENTITY_VISIBLE(uParam0->f_1212[iParam1 /*23*/], !bParam2, false);
	return 1;
}

int func_4879()//Position - 0x17ECE4
{
	return joaat("vw_prop_roulette_ball");
}

void func_4880(int* iParam0, int iParam1)//Position - 0x17ECF1
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	bVar1 = ENTITY::DOES_ENTITY_EXIST(iParam0->f_1212[iParam1 /*23*/].f_1);
	bVar2 = false;
	if (bVar1)
	{
		bVar2 = ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iParam0->f_1212[iParam1 /*23*/].f_1);
	}
	if (!bVar1 || !bVar2)
	{
		MISC::CLEAR_BIT(&(iParam0->f_1652[iVar0 /*33*/].f_26[iParam1]), 1);
	}
	if (iParam0->f_1212[iParam1 /*23*/].f_10.f_4 != -1)
	{
		return;
	}
	MISC::CLEAR_BIT(&(iParam0->f_1652[iVar0 /*33*/].f_26[iParam1]), 1);
	MISC::CLEAR_BIT(&(iParam0->f_1652[iVar0 /*33*/].f_26[iParam1]), 2);
	if (!func_4889(iParam0, iParam1))
	{
		return;
	}
	if (!func_4814(iParam0, iParam1, 22, 0))
	{
		return;
	}
	iVar3 = func_4888(iParam0, iParam1);
	if (__LIB_44__::func_229(&(iParam0->f_1212[iParam1 /*23*/]), iVar3, 0))
	{
		MISC::SET_BIT(&(iParam0->f_1652[iVar0 /*33*/].f_26[iParam1]), 1);
	}
}

int func_4888(int* iParam0, int iParam1)//Position - 0x17F231
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	iVar0 = func_84(iParam0, iParam1);
	iVar1 = (iVar0 - 15000);
	iVar2 = (func_84(iParam0, iParam1) - iVar1);
	fVar3 = (__LIB_40__::func_983() * 1000f);
	fVar4 = (IntToFloat(iVar2) / fVar3);
	iVar5 = SYSTEM::CEIL(fVar4);
	iVar6 = iParam0->f_1357.f_160[iParam1];
	iVar7 = (iVar5 + iVar6);
	return iVar7;
}

bool func_4889(var uParam0, int iParam1)//Position - 0x17F28A
{
	var uVar0;
	uVar0 = func_4823(uParam0, iParam1);
	return BitTest(uParam0->f_1357.f_167[iParam1], 1);
}

void func_4890(var uParam0, int iParam1)//Position - 0x17F2A9
{
	int iVar0;
	if (func_4779(iParam1))
	{
		return;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_1357.f_288[iParam1]))
	{
		return;
	}
	iVar0 = NETWORK::NET_TO_PED(uParam0->f_1357.f_288[iParam1]);
	if (__LIB_0__::func_121(iVar0))
	{
		AUDIO::STOP_PED_SPEAKING(iVar0, !func_4891(iParam1));
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_1357.f_288[iParam1]))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		NETWORK::SET_NETWORK_ID_CAN_MIGRATE(uParam0->f_1357.f_288[iParam1], true);
	}
}

int func_4891(int iParam0)//Position - 0x17F32C
{
	if (BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_4, 2) || BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_4, 3))
	{
		return 0;
	}
	return 1;
}

void func_4892(var uParam0, int iParam1)//Position - 0x17F366
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1212[iParam1 /*23*/]))
	{
		return;
	}
	if (func_4893(iParam1))
	{
		ENTITY::SET_ENTITY_VISIBLE(uParam0->f_1212[iParam1 /*23*/], false, false);
		return;
	}
	ENTITY::SET_ENTITY_VISIBLE(uParam0->f_1212[iParam1 /*23*/], true, false);
}

bool func_4893(int iParam0)//Position - 0x17F3AC
{
	return CUTSCENE::IS_CUTSCENE_ACTIVE();
}

int func_4894(int iParam0, bool bParam1)//Position - 0x17F3B8
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar3;
	int iVar4;
	iVar0 = __LIB_31__::func_843(iParam0);
	if (bParam1)
	{
		STREAMING::REQUEST_MODEL(iVar0);
	}
	if (!STREAMING::HAS_MODEL_LOADED(iVar0))
	{
		return 0;
	}
	iVar1 = __LIB_16__::func_170(iParam0, __LIB_16__::func_155(iParam0));
	Var2 = { __LIB_16__::func_151(iParam0) };
	fVar3 = __LIB_16__::func_150(iParam0);
	if (Global_1966194)
	{
		iVar4 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Var2, 1f, iVar0, false, false, false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar4))
		{
			iVar4 = OBJECT::CREATE_OBJECT_NO_OFFSET(iVar0, Var2, false, false, false);
		}
		else
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar4, false, true);
		}
	}
	else
	{
		iVar4 = OBJECT::CREATE_OBJECT_NO_OFFSET(iVar0, Var2, false, false, false);
	}
	ENTITY::SET_ENTITY_HEADING(iVar4, fVar3);
	OBJECT::SET_OBJECT_TINT_INDEX(iVar4, iVar1);
	func_4895(&iVar4, iParam0);
	if (bParam1)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
	}
	return iVar4;
}

void func_4895(int iParam0, int iParam1)//Position - 0x17F473
{
	func_111();
	if (!INTERIOR::IS_VALID_INTERIOR(iLocal_112))
	{
		return;
	}
	if (!INTERIOR::IS_INTERIOR_READY(iLocal_112))
	{
		return;
	}
	if (__LIB_16__::func_155(iParam1))
	{
		INTERIOR::FORCE_ROOM_FOR_ENTITY(*iParam0, iLocal_112, joaat("rm_GamingFloor_02"));
	}
	else
	{
		INTERIOR::FORCE_ROOM_FOR_ENTITY(*iParam0, iLocal_112, joaat("rm_GamingFloor_03"));
	}
}

void func_4900(int* iParam0)//Position - 0x17F509
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	iVar0 = 0;
	iVar1 = 0;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 < 24)
	{
		iVar3 = func_4791(iVar0);
		bVar4 = false;
		if (!func_54(iParam0, iVar0))
		{
			bVar4 = true;
		}
		if (!func_4925())
		{
			bVar4 = true;
			iParam0->f_1165[iVar1] = 0;
		}
		if (bVar4)
		{
			func_4924(iParam0, iVar0);
		}
		else
		{
			iVar2 = func_4812(iParam0, iVar0);
			iVar1 = iVar2;
			if (iParam0->f_1652[iVar1 /*33*/].f_3 == iParam0->f_1165[iVar1])
			{
			}
			else if (func_4819(iParam0, iVar3) || !func_4925())
			{
			}
			else
			{
				iParam0->f_1165[iVar1] = iParam0->f_1652[iVar1 /*33*/].f_3;
				func_4901(iParam0, iVar3);
			}
		}
		iVar0++;
	}
}

void func_4901(var uParam0, int iParam1)//Position - 0x17F5C9
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = func_58(iVar0, iParam1);
		if (func_54(uParam0, iVar1))
		{
			iVar2 = uParam0->f_1357.f_263[iVar1];
			func_4902(uParam0, iVar2);
		}
		iVar0++;
	}
}

void func_4902(var uParam0, int iParam1)//Position - 0x17F60E
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<2> Var3;
	iVar0 = uParam0->f_1652[iParam1 /*33*/];
	if (!func_54(uParam0, iVar0))
	{
		return;
	}
	iVar1 = uParam0->f_1652[iParam1 /*33*/].f_1;
	func_4924(uParam0, iVar0);
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 10)
	{
		Var3 = { uParam0->f_1652[iParam1 /*33*/].f_4[iVar2 /*2*/] };
		if (Var3.f_0 == -1)
		{
		}
		else if (Var3.f_1 <= 0)
		{
		}
		else if (!func_4922(uParam0, iParam1, Var3.f_0))
		{
		}
		else
		{
			uParam0->f_839[iVar0 /*11*/][iVar2] = func_4904(&Var3, iVar1);
			func_4903(uParam0, iVar1, Var3.f_0);
		}
		iVar2++;
	}
}

void func_4903(var uParam0, int iParam1, int iParam2)//Position - 0x17F6B4
{
	int iVar0;
	int iVar1;
	func_4811(iParam2, &iVar0, &iVar1);
	if (func_4810(iVar0, iVar1))
	{
		MISC::SET_BIT(&(uParam0->f_1[iParam1]), 4);
	}
	if (func_4809(iVar0, iVar1))
	{
		MISC::SET_BIT(&(uParam0->f_1[iParam1]), 5);
	}
	if (func_4808(iVar0, iVar1))
	{
		MISC::SET_BIT(&(uParam0->f_1[iParam1]), 6);
	}
}

int func_4904(int iParam0, int iParam1)//Position - 0x17F70E
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	int iVar3;
	iVar0 = iParam0->f_1;
	Var1 = { func_4907(*iParam0, iParam1) };
	Var1 = { Var1 - Vector(0.06f, 0f, 0f) };
	iVar2 = (__LIB_31__::func_831(iVar0) - 1);
	Var1 = { Var1 + Vector(((0.06f / 12f) * IntToFloat(iVar2)), 0f, 0f) };
	iVar3 = OBJECT::CREATE_OBJECT(func_4905(iVar0), Var1, false, true, false);
	ENTITY::SET_ENTITY_HEADING(iVar3, (__LIB_16__::func_150(iParam1) + 0f));
	return iVar3;
}

int func_4905(int iParam0)//Position - 0x17F780
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	iVar1 = 7;
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		iVar2 = ((iVar1 - iVar0) - 1);
		if (iParam0 >= __LIB_16__::func_159(iVar2))
		{
			return func_4906(iVar2);
		}
		iVar0++;
	}
	return func_4906(0);
}

int func_4906(int iParam0)//Position - 0x17F7C3
{
	switch (iParam0)
	{
		case 0:
			return joaat("vw_prop_chip_10dollar_st");
		case 1:
			return joaat("vw_prop_chip_50dollar_st");
		case 2:
			return joaat("vw_prop_chip_100dollar_st");
		case 3:
			return joaat("vw_prop_chip_500dollar_st");
		case 4:
			return joaat("vw_prop_chip_1kdollar_st");
		case 5:
			return joaat("vw_prop_chip_5kdollar_st");
		case 6:
			return joaat("vw_prop_chip_10kdollar_st");
		default:
	}
	return 0;
}

Vector3 func_4907(int iParam0, int iParam1)//Position - 0x17F835
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	func_4811(iParam0, &iVar0, &iVar1);
	return func_4908(iParam1, iVar0, iVar1);
}

Vector3 func_4908(int iParam0, int iParam1, int iParam2)//Position - 0x17F857
{
	struct<3> Var0;
	Var0 = { 0f, 0f, 0f };
	if (func_4920(iParam1, iParam2))
	{
		Var0 = { func_4919(iParam1, iParam2) };
	}
	else
	{
		Var0 = { func_4911(iParam1, iParam2) };
	}
	return func_4909(iParam0) + func_4770(Var0, iParam0);
}

Vector3 func_4909(int iParam0)//Position - 0x17F89D
{
	return func_4770(func_4910(), iParam0) + __LIB_16__::func_151(iParam0);
}

Vector3 func_4910()//Position - 0x17F8B6
{
	return -0.097f, -0.42f, 0.947f;
}

Vector3 func_4911(int iParam0, int iParam1)//Position - 0x17F8CD
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	fVar0 = 0f;
	fVar1 = 0f;
	fVar2 = func_4914(iParam0, iParam1);
	fVar3 = func_4912(iParam0, iParam1);
	fVar0 = (IntToFloat(iParam0) * fVar2);
	fVar1 = (IntToFloat(iParam1) * fVar3);
	fVar0 = (fVar0 + (fVar2 * 0.5f));
	fVar1 = (fVar1 + (fVar3 * 0.5f));
	return fVar1, fVar0, 0f;
}

float func_4912(int iParam0, int iParam1)//Position - 0x17F91E
{
	if (func_4913(iParam0, iParam1))
	{
		return 0.1f;
	}
	switch (iParam0)
	{
		case 0:
			return (0.081287f * 2f);
		case 1:
			return (0.081287f * 4f);
		default:
	}
	return 0.081287f;
}

bool func_4913(int iParam0, int iParam1)//Position - 0x17F965
{
	return ((iParam1 == 0 && iParam0 >= 2) && iParam0 != 3);
}

float func_4914(int iParam0, int iParam1)//Position - 0x17F983
{
	if (func_4918(iParam0, iParam1))
	{
		return func_4917();
	}
	if (__LIB_9__::func_869(iParam0, iParam1) || __LIB_11__::func_717(iParam0, iParam1))
	{
		return 0.074f;
	}
	return 0.083013f;
}

float func_4917()//Position - 0x17F9DB
{
	return ((0.083013f * 3f) * 0.5f);
}

bool func_4918(int iParam0, int iParam1)//Position - 0x17F9F0
{
	return (iParam1 == 0 && iParam0 >= 2);
}

Vector3 func_4919(int iParam0, int iParam1)//Position - 0x17FA05
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	fVar0 = 0f;
	fVar1 = 0f;
	fVar2 = func_4914(iParam0, iParam1);
	fVar3 = func_4912(iParam0, iParam1);
	iVar4 = (iParam0 - 2);
	fVar0 = ((IntToFloat(iVar4) * fVar2) + (2f * 0.074f));
	fVar1 = (IntToFloat(iParam1) * fVar3);
	fVar1 = (fVar1 * 0.5f);
	if (iParam1 != 25)
	{
		fVar1 = (fVar1 - (fVar3 * 0.5f));
		if (iParam1 == 0)
		{
			fVar0 = (fVar0 + fVar2);
		}
	}
	else
	{
		iVar5 = (iParam0 - 3);
		fVar0 = (fVar0 + (fVar2 * IntToFloat(iVar5)));
	}
	return fVar1, fVar0, 0f;
}

bool func_4920(int iParam0, int iParam1)//Position - 0x17FA89
{
	return !func_4921(iParam0, iParam1);
}

bool func_4921(int iParam0, var uParam1)//Position - 0x17FA9A
{
	return iParam0 < 2;
}

bool func_4922(var uParam0, int iParam1, int iParam2)//Position - 0x17FAA6
{
	int iVar0;
	bool bVar1;
	iVar0 = PLAYER::PLAYER_ID();
	bVar1 = iParam1 == iVar0;
	if (bVar1)
	{
		return 1;
	}
	return !func_4923(&(uParam0->f_1652[iVar0 /*33*/].f_4), iParam2);
}

int func_4923(var uParam0, int iParam1)//Position - 0x17FAD6
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = *uParam0;
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if ((*uParam0)[iVar0 /*2*/] == iParam1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_4924(var uParam0, int iParam1)//Position - 0x17FB09
{
	int iVar0;
	iVar0 = 0;
	if (iParam1 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_839[iParam1 /*11*/][iVar0]))
		{
		}
		else
		{
			OBJECT::DELETE_OBJECT(&(uParam0->f_839[iParam1 /*11*/][iVar0]));
			uParam0->f_839[iParam1 /*11*/][iVar0] = 0;
		}
		iVar0++;
	}
}

bool func_4925()//Position - 0x17FB67
{
	return (__LIB_4__::func_63(joaat("rm_GamingFloor_02")) || __LIB_4__::func_63(joaat("rm_GamingFloor_03")));
}

void func_4927(int* iParam0)//Position - 0x17FB99
{
	struct<3> Var0;
	__LIB_29__::func_926();
	func_4996(iParam0);
	Var0 = { PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 218 /*INPUT_SCRIPT_LEFT_AXIS_X*/), PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 219 /*INPUT_SCRIPT_LEFT_AXIS_Y*/), 0f };
	if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), MISC::GET_HASH_KEY("BREAK_OUT")) && SYSTEM::VMAG(Var0) >= 0.24f)
	{
		func_4946(iParam0, 2, 1576923/*func_4990*/, 1574608/*func_4947*/);
		return;
	}
	if (func_4928(iParam0, 1063675494))
	{
		func_4946(iParam0, 1, 1576923/*func_4990*/, 439);
	}
}

bool func_4928(int* iParam0, float fParam1)//Position - 0x17FC13
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!__LIB_0__::func_121(iVar0))
	{
		return 0;
	}
	sVar1 = __LIB_16__::func_152(iParam0->f_1202.f_1);
	sVar2 = func_4929(iParam0->f_1202, iParam0->f_1202.f_6, func_4944(iParam0));
	if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iVar0, sVar1, sVar2, 3))
	{
		return 0;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar0, MISC::GET_HASH_KEY("BLEND_OUT")))
	{
		return 1;
	}
	if (iParam0->f_1200 == -1)
	{
		return 0;
	}
	iParam0->f_1201 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(iParam0->f_1200);
	return PED::GET_SYNCHRONIZED_SCENE_PHASE(iParam0->f_1201) >= fParam1;
}

char* func_4929(int iParam0, int iParam1, int iParam2)//Position - 0x17FCA3
{
	switch (iParam0)
	{
		case 2:
			return "sit_enter_left";
		case 4:
			return "sit_enter_left_side";
		case 3:
			return "sit_enter_right_side";
		case 5:
			return "sit_exit_left";
		case 6:
			return "sit_exit_right";
		case 0:
			return func_4943(iParam1);
		case 1:
			return func_4942(iParam1);
		case 8:
			return func_4941(iParam2, iParam1);
		case 10:
			return func_4940(iParam2, iParam1);
		case 9:
			return func_4939(iParam2, iParam1);
		case 7:
			return func_4938(iParam2, iParam1);
		case 11:
			return func_4937(iParam2, iParam1);
		case 12:
			return func_4936(iParam2, iParam1);
		case 13:
			return func_4935(iParam2);
		case 14:
			return func_4934(iParam2);
		case 15:
			return func_4933(iParam2);
		case 16:
			return func_4932(iParam2);
		case 17:
			return func_4931(iParam2);
		case 18:
			return func_4930(iParam2);
		default:
	}
	return "";
}

char* func_4930(int iParam0)//Position - 0x17FDD9
{
	switch (iParam0)
	{
		case 0:
			return "READY_UP_HIGH_BET_LOOP_SEAT1";
		case 1:
			return "READY_UP_HIGH_BET_LOOP_SEAT2";
		case 2:
			return "READY_UP_HIGH_BET_LOOP_SEAT3";
		case 3:
			return "READY_UP_HIGH_BET_LOOP_SEAT4";
		default:
	}
	return "READY_UP_HIGH_BET_LOOP_SEAT1";
}

char* func_4931(int iParam0)//Position - 0x17FE25
{
	switch (iParam0)
	{
		case 0:
			return "READY_UP_MID_BET_LOOP_SEAT1";
		case 1:
			return "READY_UP_MID_BET_LOOP_SEAT2";
		case 2:
			return "READY_UP_MID_BET_LOOP_SEAT3";
		case 3:
			return "READY_UP_MID_BET_LOOP_SEAT4";
		default:
	}
	return "READY_UP_MID_BET_LOOP_SEAT1";
}

char* func_4932(int iParam0)//Position - 0x17FE71
{
	switch (iParam0)
	{
		case 0:
			return "READY_UP_NO_BET_LOOP_SEAT1";
		case 1:
			return "READY_UP_NO_BET_LOOP_SEAT2";
		case 2:
			return "READY_UP_NO_BET_LOOP_SEAT3";
		case 3:
			return "READY_UP_NO_BET_LOOP_SEAT4";
		default:
	}
	return "READY_UP_NO_BET_LOOP_SEAT1";
}

char* func_4933(int iParam0)//Position - 0x17FEBD
{
	switch (iParam0)
	{
		case 0:
			return "READY_UP_HIGH_BET_INTRO_SEAT1";
		case 1:
			return "READY_UP_HIGH_BET_INTRO_SEAT2";
		case 2:
			return "READY_UP_HIGH_BET_INTRO_SEAT3";
		case 3:
			return "READY_UP_HIGH_BET_INTRO_SEAT4";
		default:
	}
	return "READY_UP_HIGH_BET_INTRO_SEAT1";
}

char* func_4934(int iParam0)//Position - 0x17FF09
{
	switch (iParam0)
	{
		case 0:
			return "READY_UP_MID_BET_INTRO_SEAT1";
		case 1:
			return "READY_UP_MID_BET_INTRO_SEAT2";
		case 2:
			return "READY_UP_MID_BET_INTRO_SEAT3";
		case 3:
			return "READY_UP_MID_BET_INTRO_SEAT4";
		default:
	}
	return "READY_UP_MID_BET_INTRO_SEAT1";
}

char* func_4935(int iParam0)//Position - 0x17FF55
{
	switch (iParam0)
	{
		case 0:
			return "READY_UP_NO_BET_INTRO_SEAT1";
		case 1:
			return "READY_UP_NO_BET_INTRO_SEAT2";
		case 2:
			return "READY_UP_NO_BET_INTRO_SEAT3";
		case 3:
			return "READY_UP_NO_BET_INTRO_SEAT4";
		default:
	}
	return "READY_UP_NO_BET_INTRO_SEAT1";
}

char* func_4936(int iParam0, int iParam1)//Position - 0x17FFA1
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return "REACTION_DEFLATED_VAR01_SEAT1";
				case 1:
					return "REACTION_DEFLATED_VAR02_SEAT1";
				default:
			}
			return "REACTION_DEFLATED_VAR01_SEAT1";
		case 1:
			switch (iParam1)
			{
				case 0:
					return "REACTION_DEFLATED_VAR01_SEAT2";
				case 1:
					return "REACTION_DEFLATED_VAR02_SEAT2";
				default:
			}
			return "REACTION_DEFLATED_VAR01_SEAT2";
		case 2:
			switch (iParam1)
			{
				case 0:
					return "REACTION_DEFLATED_VAR01_SEAT3";
				case 1:
					return "REACTION_DEFLATED_VAR02_SEAT3";
				default:
			}
			return "REACTION_DEFLATED_VAR01_SEAT3";
		case 3:
			switch (iParam1)
			{
				case 0:
					return "REACTION_DEFLATED_VAR01_SEAT4";
				case 1:
					return "REACTION_DEFLATED_VAR02_SEAT4";
				default:
			}
			return "REACTION_DEFLATED_VAR01_SEAT4";
		default:
	}
	return "REACTION_DEFLATED_VAR01_SEAT1";
}

char* func_4937(int iParam0, int iParam1)//Position - 0x180079
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return "REACTION_TERRIBLE_VAR01_SEAT1";
				case 1:
					return "REACTION_TERRIBLE_VAR02_SEAT1";
				case 2:
					return "REACTION_TERRIBLE_VAR03_SEAT1";
				case 3:
					return "REACTION_TERRIBLE_VAR04_SEAT1";
				default:
			}
			return "REACTION_TERRIBLE_VAR01_SEAT1";
		case 1:
			switch (iParam1)
			{
				case 0:
					return "REACTION_TERRIBLE_VAR01_SEAT2";
				case 1:
					return "REACTION_TERRIBLE_VAR02_SEAT2";
				case 2:
					return "REACTION_TERRIBLE_VAR03_SEAT2";
				case 3:
					return "REACTION_TERRIBLE_VAR04_SEAT2";
				default:
			}
			return "REACTION_TERRIBLE_VAR01_SEAT2";
		case 2:
			switch (iParam1)
			{
				case 0:
					return "REACTION_TERRIBLE_VAR01_SEAT3";
				case 1:
					return "REACTION_TERRIBLE_VAR02_SEAT3";
				case 2:
					return "REACTION_TERRIBLE_VAR03_SEAT3";
				case 3:
					return "REACTION_TERRIBLE_VAR04_SEAT3";
				default:
			}
			return "REACTION_TERRIBLE_VAR01_SEAT3";
		case 3:
			switch (iParam1)
			{
				case 0:
					return "REACTION_TERRIBLE_VAR01_SEAT4";
				case 1:
					return "REACTION_TERRIBLE_VAR02_SEAT4";
				case 2:
					return "REACTION_TERRIBLE_VAR03_SEAT4";
				default:
			}
			return "REACTION_TERRIBLE_VAR01_SEAT4";
		default:
	}
	return "REACTION_TERRIBLE_VAR01_SEAT1";
}

char* func_4938(int iParam0, int iParam1)//Position - 0x1801B3
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return "REACTION_NO_BET_VAR01_SEAT1";
				case 1:
					return "REACTION_NO_BET_VAR02_SEAT1";
				case 2:
					return "REACTION_NO_BET_VAR03_SEAT1";
				default:
			}
			return "REACTION_NO_BET_VAR01_SEAT1";
		case 1:
			switch (iParam1)
			{
				case 0:
					return "REACTION_NO_BET_VAR01_SEAT2";
				case 1:
					return "REACTION_NO_BET_VAR02_SEAT2";
				case 2:
					return "REACTION_NO_BET_VAR03_SEAT2";
				default:
			}
			return "REACTION_NO_BET_VAR01_SEAT2";
		case 2:
			switch (iParam1)
			{
				case 0:
					return "REACTION_NO_BET_VAR01_SEAT3";
				case 1:
					return "REACTION_NO_BET_VAR02_SEAT3";
				case 2:
					return "REACTION_NO_BET_VAR03_SEAT3";
				default:
			}
			return "REACTION_NO_BET_VAR01_SEAT3";
		case 3:
			switch (iParam1)
			{
				case 0:
					return "REACTION_NO_BET_VAR01_SEAT4";
				case 1:
					return "REACTION_NO_BET_VAR02_SEAT4";
				case 2:
					return "REACTION_NO_BET_VAR03_SEAT4";
				default:
			}
			return "REACTION_NO_BET_VAR01_SEAT4";
		default:
	}
	return "REACTION_NO_BET_VAR01_SEAT1";
}

char* func_4939(int iParam0, int iParam1)//Position - 0x1802C3
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return "REACTION_GREAT_VAR01_SEAT1";
				case 1:
					return "REACTION_GREAT_VAR02_SEAT1";
				case 2:
					return "REACTION_GREAT_VAR03_SEAT1";
				case 3:
					return "REACTION_GREAT_VAR04_SEAT1";
				default:
			}
			return "REACTION_GREAT_VAR01_SEAT1";
		case 1:
			switch (iParam1)
			{
				case 0:
					return "REACTION_GREAT_VAR01_SEAT2";
				case 1:
					return "REACTION_GREAT_VAR02_SEAT2";
				case 2:
					return "REACTION_GREAT_VAR03_SEAT2";
				default:
			}
			return "REACTION_GREAT_VAR01_SEAT2";
		case 2:
			switch (iParam1)
			{
				case 0:
					return "REACTION_GREAT_VAR01_SEAT3";
				case 1:
					return "REACTION_GREAT_VAR02_SEAT3";
				case 2:
					return "REACTION_GREAT_VAR03_SEAT3";
				default:
			}
			return "REACTION_GREAT_VAR01_SEAT3";
		case 3:
			switch (iParam1)
			{
				case 0:
					return "REACTION_GREAT_VAR01_SEAT4";
				case 1:
					return "REACTION_GREAT_VAR02_SEAT4";
				case 2:
					return "REACTION_GREAT_VAR03_SEAT4";
				default:
			}
			return "REACTION_GREAT_VAR01_SEAT4";
		default:
	}
	return "REACTION_GREAT_VAR01_SEAT1";
}

char* func_4940(int iParam0, int iParam1)//Position - 0x1803E1
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return "REACTION_BAD_VAR01_SEAT1";
				case 1:
					return "REACTION_BAD_VAR02_SEAT1";
				case 2:
					return "REACTION_BAD_VAR03_SEAT1";
				default:
			}
			return "REACTION_BAD_VAR01_SEAT1";
		case 1:
			switch (iParam1)
			{
				case 0:
					return "REACTION_BAD_VAR01_SEAT2";
				case 1:
					return "REACTION_BAD_VAR02_SEAT2";
				case 2:
					return "REACTION_BAD_VAR03_SEAT2";
				default:
			}
			return "REACTION_BAD_VAR01_SEAT2";
		case 2:
			switch (iParam1)
			{
				case 0:
					return "REACTION_BAD_VAR01_SEAT3";
				case 1:
					return "REACTION_BAD_VAR02_SEAT3";
				case 2:
					return "REACTION_BAD_VAR03_SEAT3";
				default:
			}
			return "REACTION_BAD_VAR01_SEAT3";
		case 3:
			switch (iParam1)
			{
				case 0:
					return "REACTION_BAD_VAR01_SEAT4";
				case 1:
					return "REACTION_BAD_VAR02_SEAT4";
				case 2:
					return "REACTION_BAD_VAR03_SEAT4";
				default:
			}
			return "REACTION_BAD_VAR01_SEAT4";
		default:
	}
	return "REACTION_BAD_VAR01_SEAT1";
}

char* func_4941(int iParam0, int iParam1)//Position - 0x1804F1
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return "REACTION_GOOD_VAR01_SEAT1";
				case 1:
					return "REACTION_GOOD_VAR02_SEAT1";
				case 2:
					return "REACTION_GOOD_VAR03_SEAT1";
				default:
			}
			return "REACTION_GOOD_VAR01_SEAT1";
		case 1:
			switch (iParam1)
			{
				case 0:
					return "REACTION_GOOD_VAR01_SEAT2";
				case 1:
					return "REACTION_GOOD_VAR02_SEAT2";
				case 2:
					return "REACTION_GOOD_VAR03_SEAT2";
				default:
			}
			return "REACTION_GOOD_VAR01_SEAT2";
		case 2:
			switch (iParam1)
			{
				case 0:
					return "REACTION_GOOD_VAR01_SEAT3";
				case 1:
					return "REACTION_GOOD_VAR02_SEAT3";
				case 2:
					return "REACTION_GOOD_VAR03_SEAT3";
				default:
			}
			return "REACTION_GOOD_VAR01_SEAT3";
		case 3:
			switch (iParam1)
			{
				case 0:
					return "REACTION_GOOD_VAR01_SEAT4";
				case 1:
					return "REACTION_GOOD_VAR02_SEAT4";
				case 2:
					return "REACTION_GOOD_VAR03_SEAT4";
				default:
			}
			return "REACTION_GOOD_VAR01_SEAT4";
		default:
	}
	return "REACTION_GOOD_VAR01_SEAT1";
}

char* func_4942(int iParam0)//Position - 0x180601
{
	switch (iParam0)
	{
		case 0:
			return "idle_var_01";
		case 1:
			return "idle_var_02";
		case 2:
			return "idle_var_03";
		case 3:
			return "idle_var_04";
		default:
	}
	return "idle_var_01";
}

char* func_4943(int iParam0)//Position - 0x18064D
{
	switch (iParam0)
	{
		case 0:
			return "idle_a";
		case 1:
			return "idle_b";
		case 2:
			return "idle_c";
		case 3:
			return "idle_d";
		default:
	}
	return "idle_a";
}

int func_4944(int* iParam0)//Position - 0x180699
{
	return func_4945(iParam0->f_11);
}

int func_4945(int iParam0)//Position - 0x1806A9
{
	return __LIB_4__::func_892(iParam0, 4);
}

void func_4946(int* iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1806B8
{
	Stack.Push(iParam0);
	Call_Loc(iParam2);
	iParam0->f_8 = iParam1;
	Stack.Push(iParam0);
	Call_Loc(iParam3);
}

void func_4947(var uParam0)//Position - 0x1806D0
{
	if (func_4957(uParam0))
	{
		return;
	}
	func_4948(uParam0);
}

void func_4948(var uParam0)//Position - 0x1806EA
{
	__LIB_5__::func_569(&(uParam0->f_15), 4, func_4949(uParam0->f_12), 0, 0, 0, 0);
}

char* func_4949(int iParam0)//Position - 0x180707
{
	iLocal_113 = 0;
	if ((func_4955() && !__LIB_1__::func_124(PLAYER::PLAYER_ID())) && __LIB_16__::func_155(iParam0))
	{
		iLocal_113 = 1;
		return func_4953();
	}
	if (func_4951() && !__LIB_9__::func_558())
	{
		iLocal_113 = 1;
		return func_4953();
	}
	iLocal_113 = 0;
	return "ROUL_PROMPT" /* GXT: Press ~INPUT_CONTEXT~ to play Roulette. */;
}

int func_4951()//Position - 0x18077D
{
	return func_4952(PLAYER::PLAYER_ID());
}

int func_4952(int iParam0)//Position - 0x18078D
{
	int iVar0;
	if (iParam0 == __LIB_0__::func_162())
	{
		return 0;
	}
	iVar0 = __LIB_2__::func_39(iParam0);
	if (iVar0 != __LIB_0__::func_162())
	{
		return __LIB_4__::func_153(iVar0);
	}
	return 0;
}

char* func_4953()//Position - 0x1807BD
{
	int iVar0;
	iVar0 = __LIB_2__::func_39(PLAYER::PLAYER_ID());
	if (iVar0 == __LIB_0__::func_162())
	{
		return "ROUL_PROMPT" /* GXT: Press ~INPUT_CONTEXT~ to play Roulette. */;
	}
	if (__LIB_15__::func_450(iVar0) == 1)
	{
		iLocal_114 = 2;
		return "ROUL_PROMPT_A" /* GXT: Press ~INPUT_CONTEXT~ to play Roulette using your MC President's casino membership. */;
	}
	else if (__LIB_3__::func_673(iVar0))
	{
		iLocal_114 = 1;
		return "ROUL_PROMPT_B" /* GXT: Press ~INPUT_CONTEXT~ to play Roulette using your CEO's casino membership. */;
	}
	else
	{
		iLocal_114 = 0;
		return "ROUL_PROMPT_C" /* GXT: Press ~INPUT_CONTEXT~ to play Roulette using your VIP's casino membership. */;
	}
	iLocal_114 = -1;
	return "ROUL_PROMPT" /* GXT: Press ~INPUT_CONTEXT~ to play Roulette. */;
}

int func_4955()//Position - 0x180848
{
	return func_4956(PLAYER::PLAYER_ID());
}

int func_4956(int iParam0)//Position - 0x180858
{
	int iVar0;
	if (iParam0 == __LIB_0__::func_162())
	{
		return 0;
	}
	iVar0 = __LIB_2__::func_39(iParam0);
	if (iVar0 != __LIB_0__::func_162())
	{
		return __LIB_1__::func_124(iVar0);
	}
	return 0;
}

int func_4957(var uParam0)//Position - 0x180888
{
	int iVar0;
	int iVar1;
	iVar0 = func_4987(uParam0->f_12);
	if (func_4779(uParam0->f_12))
	{
		return 1;
	}
	iVar1 = MISC::GET_HASH_KEY("none" /* GXT: None */);
	return func_4958(uParam0->f_11, uParam0->f_12, iVar0, &iVar1, 0);
}

int func_4958(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x1808C5
{
	bool bVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	bVar0 = __LIB_16__::func_155(iParam1);
	iVar1 = -1;
	if (bParam4)
	{
		iVar1 = 10000;
	}
	if (func_4986() || func_4985())
	{
		return 1;
	}
	if (__LIB_3__::func_597())
	{
		return 1;
	}
	if (__LIB_31__::func_779())
	{
		*iParam3 = func_4983();
		if (__LIB_16__::func_266() == 2)
		{
			__LIB_0__::func_151("CAS_MG_CTIME" /* GXT: This feature is not available now.  Please come back later. */, iVar1);
			return 1;
		}
		__LIB_0__::func_151("CAS_MG_CBAN" /* GXT: This feature is not available now.  Please come back later. */, iVar1);
		return 1;
	}
	if (__LIB_9__::func_559(3, &uVar2))
	{
		*iParam3 = MISC::GET_HASH_KEY("roulette is blocked");
		__LIB_0__::func_151("CAS_MG_REGBAN" /* GXT: This feature is not available for you. */, iVar1);
		return 1;
	}
	if (!func_4975() && bVar0)
	{
		*iParam3 = MISC::GET_HASH_KEY("no access to highstakes tables");
		if (bParam4 && iLocal_113)
		{
			func_4974();
			return 1;
		}
		__LIB_0__::func_151("CAS_MG_SUITE2" /* GXT: A VIP Membership is required to play High Limit. Purchase a Penthouse from www.thediamondcasinoandresort.com to become a VIP member. */, iVar1);
		return 1;
	}
	if (!func_4972())
	{
		*iParam3 = MISC::GET_HASH_KEY("no membership");
		if (bParam4 && iLocal_113)
		{
			func_4974();
			return 1;
		}
		return !func_4968();
	}
	iVar3 = __LIB_9__::func_483();
	if (iVar3 <= 0)
	{
		*iParam3 = MISC::GET_HASH_KEY("no chips");
		if (!func_4962())
		{
			__LIB_0__::func_151("CAS_MG_NOCHIPS4" /* GXT: Chips are required to play Roulette. Speak to the Cashier ~BLIP_CASINO_CHIPS~ to acquire them. */, iVar1);
		}
		return 1;
	}
	if (iVar3 < iParam2)
	{
		*iParam3 = MISC::GET_HASH_KEY("low chips");
		if (!func_4962())
		{
			__LIB_0__::func_151("CAS_MG_LOWCHIPS4" /* GXT: You don't have enough Chips to play Roulette. Speak to the Cashier ~BLIP_CASINO_CHIPS~ to acquire more. */, iVar1);
		}
		return 1;
	}
	if (Global_262145.f_26947 /* Tunable: VC_CASINO_DISABLE_ROULETTE */)
	{
		return 1;
	}
	if (bVar0 && Global_262145.f_26948 /* Tunable: VC_CASINO_DISABLE_ROULETTE_HIGH */)
	{
		return 1;
	}
	if (!bVar0 && Global_262145.f_26949 /* Tunable: VC_CASINO_DISABLE_ROULETTE_LOW */)
	{
		return 1;
	}
	if (__LIB_31__::func_844())
	{
		return 1;
	}
	if (__LIB_4__::func_911())
	{
		return 1;
	}
	return 0;
}

bool func_4962()//Position - 0x180B1A
{
	int iVar0;
	if (BitTest(Global_1966179, 6))
	{
		return 1;
	}
	iVar0 = __LIB_3__::func_534();
	if (iVar0 == -1)
	{
		return 0;
	}
	return !__LIB_2__::func_835(iVar0);
}

bool func_4968()//Position - 0x180C0F
{
	int iVar0;
	bool bVar1;
	iVar0 = __LIB_9__::func_562(0);
	if (!__LIB_0__::func_1("CAS_MG_MEMB_PF" /* GXT: Unable to purchase a membership at this time. Please try again later or speak to Guest Services ~BLIP_CASINO_CONCIERGE~. */) && !__LIB_15__::func_264())
	{
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP("CAS_MG_MEMB2" /* GXT: A Standard Membership is required to play. Speak to Guest Services ~BLIP_CASINO_CONCIERGE~ to purchase this or press ~INPUT_CONTEXT_SECONDARY~ to buy now for $~1~. */);
		HUD::ADD_TEXT_COMPONENT_INTEGER(iVar0);
		HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, -1);
	}
	if (!__LIB_15__::func_264() && !__LIB_0__::func_1("CAS_MG_MEMB_PF" /* GXT: Unable to purchase a membership at this time. Please try again later or speak to Guest Services ~BLIP_CASINO_CONCIERGE~. */))
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 52 /*INPUT_CONTEXT_SECONDARY*/))
		{
			__LIB_16__::func_178();
		}
		return 0;
	}
	if (BitTest(Global_1946250.f_5, 31) || __LIB_0__::func_1("CAS_MG_MEMB_PF" /* GXT: Unable to purchase a membership at this time. Please try again later or speak to Guest Services ~BLIP_CASINO_CONCIERGE~. */))
	{
		return 0;
	}
	bVar1 = __LIB_9__::func_558();
	if (bVar1)
	{
		HUD::CLEAR_HELP(true);
	}
	return bVar1;
}

bool func_4972()//Position - 0x180D25
{
	return func_4973(PLAYER::PLAYER_ID());
}

var func_4973(int iParam0)//Position - 0x180D35
{
	return (__LIB_4__::func_153(iParam0) || func_4952(iParam0));
}

void func_4974()//Position - 0x180D4F
{
	switch (iLocal_114)
	{
		case 2:
			__LIB_0__::func_151("ROUL_DISBAND_A" /* GXT: The MC has disbanded. You can no longer play using your MC President's casino membership. */, 10000);
			return;
		case 1:
			__LIB_0__::func_151("ROUL_DISBAND_B" /* GXT: The gang has disbanded. You can no longer play using your CEO's casino membership. */, 10000);
			return;
		case 0:
			__LIB_0__::func_151("ROUL_DISBAND_C" /* GXT: The gang has disbanded. You can no longer play using your VIP's casino membership. */, 10000);
			return;
		default:
	}
}

bool func_4975()//Position - 0x180D9D
{
	return (__LIB_1__::func_124(PLAYER::PLAYER_ID()) || func_4955());
}

int func_4983()//Position - 0x180ECA
{
	switch (__LIB_16__::func_266())
	{
		case 0:
			return MISC::GET_HASH_KEY("win cutoff");
		case 1:
			return MISC::GET_HASH_KEY("loss cutoff");
		case 2:
			return MISC::GET_HASH_KEY("time cutoff");
		default:
	}
	return -1;
}

bool func_4985()//Position - 0x180F20
{
	return Global_2715699.f_6468.f_1 == 2;
}

var func_4986()//Position - 0x180F33
{
	int iVar0;
	iVar0 = PLAYER::PLAYER_ID();
	return (((BitTest(Global_2689235[iVar0 /*453*/].f_318.f_4, 2) || BitTest(Global_2689235[iVar0 /*453*/].f_318.f_4, 3)) || BitTest(Global_2689235[iVar0 /*453*/].f_318.f_4, 6)) || BitTest(Global_2689235[iVar0 /*453*/].f_318.f_4, 7));
}

int func_4987(int iParam0)//Position - 0x180F93
{
	return __LIB_3__::func_778(func_4988(iParam0), func_4988(iParam0));
}

int func_4988(int iParam0)//Position - 0x180FAB
{
	if (__LIB_16__::func_155(iParam0))
	{
		return 100;
	}
	return 10;
}

void func_4990(int* iParam0)//Position - 0x180FDB
{
	func_4995(iParam0);
	func_4994(iParam0);
	func_4993(0);
	func_4992(1);
	__LIB_1__::func_91();
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
	TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
	func_4991();
	MISC::CLEAR_BIT(iParam0, 19);
	MISC::CLEAR_BIT(&(iParam0->f_1652[PLAYER::PLAYER_ID() /*33*/].f_2), 6);
}

void func_4991()//Position - 0x18102F
{
	STREAMING::REMOVE_ANIM_DICT(__LIB_16__::func_152(0));
	STREAMING::REMOVE_ANIM_DICT(__LIB_16__::func_152(1));
}

void func_4992(bool bParam0)//Position - 0x181049
{
	__LIB_1__::func_376(PLAYER::PLAYER_ID(), bParam0, 256, 0);
	PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 185, !bParam0);
}

void func_4993(bool bParam0)//Position - 0x18106C
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_4), 5);
		return;
	}
	MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_4), 5);
}

void func_4994(int* iParam0)//Position - 0x1810A6
{
	iParam0->f_1652[PLAYER::PLAYER_ID() /*33*/] = -1;
	iParam0->f_1652[PLAYER::PLAYER_ID() /*33*/].f_1 = -1;
}

void func_4995(var uParam0)//Position - 0x1810C8
{
	if (uParam0->f_1200 == -1)
	{
		return;
	}
	NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(uParam0->f_1200);
	uParam0->f_1200 = -1;
	uParam0->f_1201 = -1;
}

void func_4996(int* iParam0)//Position - 0x1810F1
{
	if (BitTest(*iParam0, 19))
	{
		return;
	}
	switch (iParam0->f_2766)
	{
		case joaat("win cutoff"):
		case joaat("loss cutoff"):
		case joaat("time cutoff"):
			if (!func_5000(iParam0))
			{
				return;
			}
			break;
		case joaat("QUIT"):
			if (!func_4997(iParam0))
			{
				return;
			}
			break;
	}
	MISC::SET_BIT(iParam0, 19);
}

int func_4997(var uParam0)//Position - 0x18114F
{
	int iVar0;
	int iVar1;
	char* sVar2;
	iVar0 = uParam0->f_12;
	if (!__LIB_0__::func_953(uParam0->f_1357.f_288[iVar0]))
	{
		return 0;
	}
	iVar1 = func_4998(uParam0);
	sVar2 = __LIB_31__::func_830(iVar1, 0);
	func_46(uParam0, sVar2, iVar0, 0, 0, 1);
	return 1;
}

int func_4998(var uParam0)//Position - 0x181194
{
	int iVar0;
	int iVar1;
	iVar0 = func_4999();
	iVar1 = (iVar0 - uParam0->f_798);
	if (iVar1 < 0)
	{
		return 7;
	}
	if (iVar1 > 0)
	{
		return 6;
	}
	return 5;
}

int func_4999()//Position - 0x1811C1
{
	return __LIB_9__::func_483();
}

int func_5000(var uParam0)//Position - 0x1811CD
{
	int iVar0;
	char* sVar1;
	iVar0 = uParam0->f_12;
	if (!__LIB_0__::func_953(uParam0->f_1357.f_288[iVar0]))
	{
		return 0;
	}
	sVar1 = __LIB_31__::func_830(10, 0);
	func_46(uParam0, sVar1, iVar0, 0, 0, 1);
	return 1;
}

void func_5005(int* iParam0)//Position - 0x1812C6
{
	__LIB_29__::func_926();
	CAM::SET_TABLE_GAMES_CAMERA_THIS_UPDATE(joaat("CASINO_ROULETTE_CAMERA"));
	if (!func_5015(iParam0))
	{
		func_4946(iParam0, 8, 447, 1577717/*func_5006*/);
	}
}

void func_5006(int* iParam0)//Position - 0x1812F5
{
	func_4992(0);
	func_5009(iParam0);
	func_5008(iParam0);
	func_5007();
	MISC::CLEAR_BIT(iParam0, 19);
}

void func_5007()//Position - 0x18131A
{
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_VW_Casino_Table_Games"))
	{
		AUDIO::STOP_AUDIO_SCENE("DLC_VW_Casino_Table_Games");
	}
}

void func_5008(int* iParam0)//Position - 0x181337
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = iParam0->f_12;
	if (!func_25(iVar0))
	{
		return;
	}
	iVar1 = iParam0->f_1357.f_288[iVar0];
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iVar1))
	{
		return;
	}
	iVar2 = NETWORK::NET_TO_PED(iVar1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		return;
	}
	AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iVar2, 0f);
}

void func_5009(int* iParam0)//Position - 0x181389
{
	struct<6> Var0;
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = 1090519040;
	Var0.f_3 = -998637568;
	Var0.f_5 = 1065353216;
	func_5013(iParam0, &Var0);
	func_5010(iParam0, &Var0);
}

void func_5010(int* iParam0, var uParam1)//Position - 0x1813CC
{
	int iVar0;
	int iVar1;
	char* sVar2;
	struct<3> Var3;
	struct<3> Var4;
	char* sVar5;
	char* sVar6;
	if (!STREAMING::HAS_ANIM_DICT_LOADED(__LIB_16__::func_152(uParam1->f_1)))
	{
		return;
	}
	if (!__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_HAVE_DRAWABLE(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	iVar0 = func_5012(iParam0, iParam0->f_12);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	iVar1 = func_4944(iParam0);
	sVar2 = func_5011(iVar1);
	Var3 = { __LIB_31__::func_836(iVar0, sVar2) };
	Var4 = { __LIB_31__::func_835(iVar0, sVar2, 1) };
	sVar5 = __LIB_16__::func_152(uParam1->f_1);
	sVar6 = func_4929(*uParam1, uParam1->f_6, iVar1);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar5))
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar6))
	{
		return;
	}
	iParam0->f_1200 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(Var3, Var4, 2, uParam1->f_8, uParam1->f_7, uParam1->f_5, uParam1->f_4, 1f);
	NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iParam0->f_1200, sVar5, sVar6, uParam1->f_2, uParam1->f_3, uParam1->f_9, 16, uParam1->f_2, 0);
	NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iParam0->f_1200);
	iParam0->f_1202 = { *uParam1 };
}

char* func_5011(int iParam0)//Position - 0x1814D9
{
	switch (iParam0)
	{
		case 0:
			return "Chair_Base_01";
		case 1:
			return "Chair_Base_02";
		case 2:
			return "Chair_Base_03";
		case 3:
			return "Chair_Base_04";
		default:
	}
	return "";
}

int func_5012(int* iParam0, int iParam1)//Position - 0x181523
{
	if (!func_25(iParam1))
	{
		return 0;
	}
	return iParam0->f_1212[iParam1 /*23*/].f_1;
}

void func_5013(var uParam0, var uParam1)//Position - 0x181544
{
	uParam1->f_9 = 13;
	*uParam1 = func_5014(uParam0);
	uParam1->f_2 = 2f;
	uParam1->f_3 = -2f;
	uParam1->f_1 = 1;
}

int func_5014(var uParam0)//Position - 0x18156E
{
	if (uParam0->f_1198 == 3)
	{
		return 6;
	}
	return 5;
}

int func_5015(int* iParam0)//Position - 0x181584
{
	func_5489(iParam0);
	__LIB_29__::func_926();
	switch (iParam0->f_1652[PLAYER::PLAYER_ID() /*33*/].f_25)
	{
		case 1:
			func_5474(iParam0);
			break;
		case 2:
			func_5409(iParam0);
			break;
		case 3:
			func_5385(iParam0);
			func_5323(iParam0);
			break;
		case 4:
			func_5323(iParam0);
			break;
		case 5:
			func_5275(iParam0);
			break;
		case 6:
			func_5120(iParam0);
			break;
		case 7:
			func_5016(iParam0);
			return 0;
	}
	return 1;
}

void func_5016(int* iParam0)//Position - 0x181619
{
	iParam0->f_2766 = iParam0->f_2750.f_2;
	func_5109();
	if (func_5108(iParam0))
	{
		func_5100(iParam0);
	}
	func_5098(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_817))
	{
		ENTITY::SET_ENTITY_VISIBLE(iParam0->f_817, false, false);
	}
	func_5027(iParam0);
	func_5026(iParam0);
	func_5025(iParam0, 0, 0);
	func_5021(iParam0);
	func_5020(iParam0);
	func_5019(iParam0);
	func_5018();
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_5017(iParam0);
	}
	iParam0->f_799 = 0;
	iParam0->f_796 = 0;
	iParam0->f_800 = 0;
	iParam0->f_801 = 0;
	iParam0->f_802 = 0;
	iParam0->f_797 = 0;
	iParam0->f_1652[PLAYER::PLAYER_ID() /*33*/].f_25 = 0;
}

void func_5017(int* iParam0)//Position - 0x1816C7
{
	if (!func_25(iParam0->f_12))
	{
		return;
	}
	__LIB_0__::func_794(&(iParam0->f_1357.f_250[iParam0->f_12 /*2*/]));
}

void func_5018()//Position - 0x1816EF
{
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_VW_Casino_Roulette_Focus_Wheel"))
	{
		AUDIO::STOP_AUDIO_SCENE("DLC_VW_Casino_Roulette_Focus_Wheel");
	}
}

void func_5019(int* iParam0)//Position - 0x18170C
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_818[iVar0]))
		{
			OBJECT::DELETE_OBJECT(&(iParam0->f_818[iVar0]));
			iParam0->f_818[iVar0] = 0;
		}
		iVar0++;
	}
}

void func_5020(int* iParam0)//Position - 0x181751
{
	int iVar0;
	iVar0 = iParam0->f_1652[PLAYER::PLAYER_ID() /*33*/];
	if (iVar0 > -1)
	{
		func_4924(iParam0, iVar0);
	}
}

void func_5021(int* iParam0)//Position - 0x181774
{
	func_5023(&(iParam0->f_1652[PLAYER::PLAYER_ID() /*33*/].f_4));
	func_5022(iParam0);
	iParam0->f_794 = 0;
}

void func_5022(var uParam0)//Position - 0x181799
{
	int iVar0;
	iVar0 = PLAYER::PLAYER_ID();
	MISC::CLEAR_BIT(&(uParam0->f_1652[iVar0 /*33*/].f_2), 3);
	MISC::CLEAR_BIT(&(uParam0->f_1652[iVar0 /*33*/].f_2), 2);
	MISC::CLEAR_BIT(&(uParam0->f_1652[iVar0 /*33*/].f_2), 1);
}

void func_5023(var uParam0)//Position - 0x1817D7
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = *uParam0;
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		func_5024(uParam0[iVar0 /*2*/]);
		SECURITY::UNREGISTER_SCRIPT_VARIABLE(&((uParam0[iVar0 /*2*/])->f_1));
		iVar0++;
	}
}

void func_5024(var uParam0)//Position - 0x181810
{
	uParam0->f_1 = 0;
	*uParam0 = -1;
}

void func_5025(int* iParam0, bool bParam1, bool bParam2)//Position - 0x181821
{
	if (iParam0->f_771 == 0)
	{
		return;
	}
	CAM::SET_CAM_ACTIVE(iParam0->f_771, bParam1);
	CAM::RENDER_SCRIPT_CAMS(bParam1, bParam2, 3000, true, false, 0);
}

void func_5026(int* iParam0)//Position - 0x18184E
{
	func_5023(&(iParam0->f_1652[PLAYER::PLAYER_ID() /*33*/].f_4));
	func_5020(iParam0);
}

void func_5027(int* iParam0)//Position - 0x18186D
{
	iParam0->f_811 = 5;
	iParam0->f_812 = 13;
	func_5028(iParam0);
	iParam0->f_804 = { ENTITY::GET_ENTITY_COORDS(iParam0->f_817, true) };
}

void func_5028(int* iParam0)//Position - 0x181899
{
	int iVar0;
	float fVar1;
	float fVar2;
	iVar0 = func_4791(iParam0->f_11);
	iParam0->f_804 = { func_4908(iVar0, iParam0->f_811, iParam0->f_812) };
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(iParam0->f_804, &fVar1, &fVar2);
		fVar1 = __LIB_0__::func_331(fVar1, 0f, 1f);
		fVar2 = __LIB_0__::func_331(fVar2, 0f, 1f);
		PAD::SET_CURSOR_POSITION(fVar1, fVar2);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_817))
	{
		return;
	}
	ENTITY::SET_ENTITY_COORDS(iParam0->f_817, iParam0->f_804, true, false, false, true);
	ENTITY::SET_ENTITY_HEADING(iParam0->f_817, (__LIB_16__::func_150(iVar0) + 0f));
	func_5029(iParam0);
}

void func_5029(int* iParam0)//Position - 0x181932
{
	var uVar0[37];
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	func_5097(iParam0);
	if (iParam0->f_811 < 0 || iParam0->f_812 < 0)
	{
		return;
	}
	iVar1 = func_5096(iParam0->f_811, iParam0->f_812);
	func_5048(&uVar0, iVar1);
	iVar2 = 0;
	if (func_5041(iVar1) == 0)
	{
		func_5030(iParam0, func_5038(iVar1), iVar2);
		return;
	}
	iVar3 = 0;
	iVar3 = 0;
	while (iVar3 < 37)
	{
		iVar4 = uVar0[iVar3];
		if (iVar4 == -1)
		{
		}
		else
		{
			func_5030(iParam0, iVar4, iVar2);
			iVar2++;
			iVar3++;
		}
	}
}

void func_5030(var uParam0, int iParam1, int iParam2)//Position - 0x1819CD
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	float fVar4;
	int iVar5;
	int iVar6;
	iVar0 = uParam0->f_12;
	iVar1 = func_5035(iParam1);
	iVar2 = func_5033(iVar1);
	Var3 = { func_4907(iVar1, iVar0) };
	Var3 = { Var3 + Vector(-0.0025f, 0f, 0f) };
	if (iVar2 == func_5032(1))
	{
		fVar4 = 0.0088f;
		Var3 = { Var3 + func_4770(fVar4, 0f, 0f, iVar0) };
	}
	func_5031(uParam0, iParam2, iVar2, Var3);
	if (uParam0->f_818[iParam2] == 0 || !ENTITY::DOES_ENTITY_EXIST(uParam0->f_818[iParam2]))
	{
		return;
	}
	OBJECT::ROTATE_OBJECT(uParam0->f_818[iParam2], 90f, 90f, false);
	ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam0->f_818[iParam2], Var3, false, false, true);
	ENTITY::SET_ENTITY_HEADING(uParam0->f_818[iParam2], __LIB_16__::func_150(iVar0));
	ENTITY::SET_ENTITY_DYNAMIC(uParam0->f_818[iParam2], false);
	ENTITY::SET_ENTITY_HAS_GRAVITY(uParam0->f_818[iParam2], false);
	ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_818[iParam2], false, false);
	ENTITY::SET_ENTITY_ALPHA(uParam0->f_818[iParam2], 200, true);
	iVar5 = func_5012(uParam0, iVar0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar5))
	{
		return;
	}
	iVar6 = OBJECT::GET_OBJECT_TINT_INDEX(iVar5);
	OBJECT::SET_OBJECT_TINT_INDEX(uParam0->f_818[iParam2], iVar6);
	if (iVar1 == 4)
	{
		ENTITY::SET_ENTITY_ROTATION(uParam0->f_818[iParam2], ENTITY::GET_ENTITY_ROTATION(iVar5, 2) + Vector(0f, 0f, 180f), 2, true);
	}
}

void func_5031(var uParam0, int iParam1, int iParam2, struct<3> Param3)//Position - 0x181B2B
{
	if (uParam0->f_818[iParam1] == 0 || !ENTITY::DOES_ENTITY_EXIST(uParam0->f_818[iParam1]))
	{
		uParam0->f_818[iParam1] = OBJECT::CREATE_OBJECT(iParam2, Param3, false, true, false);
		return;
	}
	if (ENTITY::GET_ENTITY_MODEL(uParam0->f_818[iParam1]) != iParam2)
	{
		if ((uParam0->f_818[iParam1] != 0 && ENTITY::DOES_ENTITY_EXIST(uParam0->f_818[iParam1])) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(uParam0->f_818[iParam1], true))
		{
			OBJECT::DELETE_OBJECT(&(uParam0->f_818[iParam1]));
		}
		uParam0->f_818[iParam1] = OBJECT::CREATE_OBJECT(iParam2, Param3, false, true, false);
		return;
	}
	ENTITY::SET_ENTITY_VISIBLE(uParam0->f_818[iParam1], true, false);
}

int func_5032(bool bParam0)//Position - 0x181BE8
{
	if (bParam0)
	{
		return MISC::GET_HASH_KEY("vw_prop_vw_marker_01a");
	}
	return MISC::GET_HASH_KEY("vw_prop_vw_marker_02a");
}

int func_5033(int iParam0)//Position - 0x181C0A
{
	return func_5032(func_5034(iParam0));
}

bool func_5034(int iParam0)//Position - 0x181C1C
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	func_4811(iParam0, &iVar0, &iVar1);
	return func_4918(iVar0, iVar1);
}

int func_5035(int iParam0)//Position - 0x181C3C
{
	int iVar0;
	iVar0 = func_5037(iParam0);
	return func_5036(iVar0);
}

int func_5036(int iParam0)//Position - 0x181C52
{
	switch (iParam0)
	{
		case 0:
			return 2;
		case 1:
			return 19;
		case 2:
			return 21;
		case 3:
			return 23;
		case 4:
			return 35;
		case 5:
			return 37;
		case 6:
			return 39;
		case 7:
			return 51;
		case 8:
			return 53;
		case 9:
			return 55;
		case 10:
			return 67;
		case 11:
			return 69;
		case 12:
			return 71;
		case 13:
			return 83;
		case 14:
			return 85;
		case 15:
			return 87;
		case 16:
			return 99;
		case 17:
			return 101;
		case 18:
			return 103;
		case 19:
			return 115;
		case 20:
			return 117;
		case 21:
			return 119;
		case 22:
			return 131;
		case 23:
			return 133;
		case 24:
			return 135;
		case 25:
			return 147;
		case 26:
			return 149;
		case 27:
			return 151;
		case 28:
			return 163;
		case 29:
			return 165;
		case 30:
			return 167;
		case 31:
			return 179;
		case 32:
			return 181;
		case 33:
			return 183;
		case 34:
			return 195;
		case 35:
			return 197;
		case 36:
			return 199;
		case 37:
			return 4;
		default:
	}
	return -1;
}

int func_5037(int iParam0)//Position - 0x181E02
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 28;
		case 2:
			return 9;
		case 3:
			return 26;
		case 4:
			return 30;
		case 5:
			return 11;
		case 6:
			return 7;
		case 7:
			return 20;
		case 8:
			return 32;
		case 9:
			return 17;
		case 10:
			return 5;
		case 11:
			return 22;
		case 12:
			return 34;
		case 13:
			return 15;
		case 14:
			return 3;
		case 15:
			return 24;
		case 16:
			return 36;
		case 17:
			return 13;
		case 18:
			return 1;
		case 19:
			return 37;
		case 20:
			return 27;
		case 21:
			return 10;
		case 22:
			return 25;
		case 23:
			return 29;
		case 24:
			return 12;
		case 25:
			return 8;
		case 26:
			return 19;
		case 27:
			return 31;
		case 28:
			return 18;
		case 29:
			return 6;
		case 30:
			return 21;
		case 31:
			return 33;
		case 32:
			return 16;
		case 33:
			return 4;
		case 34:
			return 23;
		case 35:
			return 35;
		case 36:
			return 14;
		case 37:
			return 2;
		default:
	}
	return -1;
}

int func_5038(int iParam0)//Position - 0x181FAC
{
	int iVar0;
	iVar0 = func_5040(iParam0);
	return func_5039(iVar0);
}

int func_5039(int iParam0)//Position - 0x181FC2
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 28:
			return 1;
		case 9:
			return 2;
		case 26:
			return 3;
		case 30:
			return 4;
		case 11:
			return 5;
		case 7:
			return 6;
		case 20:
			return 7;
		case 32:
			return 8;
		case 17:
			return 9;
		case 5:
			return 10;
		case 22:
			return 11;
		case 34:
			return 12;
		case 15:
			return 13;
		case 3:
			return 14;
		case 24:
			return 15;
		case 36:
			return 16;
		case 13:
			return 17;
		case 1:
			return 18;
		case 37:
			return 19;
		case 27:
			return 20;
		case 10:
			return 21;
		case 25:
			return 22;
		case 29:
			return 23;
		case 12:
			return 24;
		case 8:
			return 25;
		case 19:
			return 26;
		case 31:
			return 27;
		case 18:
			return 28;
		case 6:
			return 29;
		case 21:
			return 30;
		case 33:
			return 31;
		case 16:
			return 32;
		case 4:
			return 33;
		case 23:
			return 34;
		case 35:
			return 35;
		case 14:
			return 36;
		case 2:
			return 37;
		default:
	}
	return -1;
}

int func_5040(int iParam0)//Position - 0x18216C
{
	switch (iParam0)
	{
		case 2:
			return 0;
		case 4:
			return 37;
		case 19:
			return 1;
		case 21:
			return 2;
		case 23:
			return 3;
		case 35:
			return 4;
		case 37:
			return 5;
		case 39:
			return 6;
		case 51:
			return 7;
		case 53:
			return 8;
		case 55:
			return 9;
		case 67:
			return 10;
		case 69:
			return 11;
		case 71:
			return 12;
		case 83:
			return 13;
		case 85:
			return 14;
		case 87:
			return 15;
		case 99:
			return 16;
		case 101:
			return 17;
		case 103:
			return 18;
		case 115:
			return 19;
		case 117:
			return 20;
		case 119:
			return 21;
		case 131:
			return 22;
		case 133:
			return 23;
		case 135:
			return 24;
		case 147:
			return 25;
		case 149:
			return 26;
		case 151:
			return 27;
		case 163:
			return 28;
		case 165:
			return 29;
		case 167:
			return 30;
		case 179:
			return 31;
		case 181:
			return 32;
		case 183:
			return 33;
		case 195:
			return 34;
		case 197:
			return 35;
		case 199:
			return 36;
		default:
	}
	return -1;
}

int func_5041(int iParam0)//Position - 0x182316
{
	int iVar0;
	int iVar1;
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = -1;
	iVar1 = -1;
	func_4811(iParam0, &iVar0, &iVar1);
	return func_5042(iVar0, iVar1);
}

int func_5042(int iParam0, int iParam1)//Position - 0x182340
{
	if (func_4913(iParam0, iParam1))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			return func_5047(iParam1);
		case 1:
			return func_5046(iParam1);
		case 2:
			return func_5045(iParam1);
		default:
	}
	if (iParam1 == 25)
	{
		return func_5044(iParam0);
	}
	return func_5043(iParam0, iParam1);
}

int func_5043(int iParam0, int iParam1)//Position - 0x1823A3
{
	if (iParam1 == 1 && ((iParam0 % 2) == 0 || iParam0 == 5))
	{
		return 3;
	}
	if ((iParam1 % 2) != 0 && (iParam0 % 2) == 0)
	{
		return 4;
	}
	if (((iParam1 % 2) != 0 || (iParam0 % 2) == 0) || (iParam1 == 0 && iParam0 == 3))
	{
		return 1;
	}
	return 0;
}

int func_5044(int iParam0)//Position - 0x182410
{
	switch (iParam0)
	{
		case 3:
			return 16;
		case 4:
			return 17;
		case 5:
			return 18;
		default:
	}
	return -1;
}

int func_5045(int iParam0)//Position - 0x182441
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (iParam0 == 1)
	{
		return 5;
	}
	if (iParam0 > 24)
	{
		return -1;
	}
	if ((iParam0 % 2) == 0)
	{
		return 2;
	}
	return 6;
}

int func_5046(int iParam0)//Position - 0x182475
{
	switch (iParam0)
	{
		case 0:
			return 13;
		case 1:
			return 14;
		case 2:
			return 15;
		default:
	}
	return -1;
}

int func_5047(int iParam0)//Position - 0x1824A6
{
	switch (iParam0)
	{
		case 0:
			return 11;
		case 1:
			return 10;
		case 2:
			return 7;
		case 3:
			return 8;
		case 4:
			return 9;
		case 5:
			return 12;
		default:
	}
	return -1;
}

void func_5048(var uParam0, int iParam1)//Position - 0x1824F7
{
	int iVar0;
	iVar0 = func_5041(iParam1);
	func_5095(uParam0, -1);
	switch (iVar0)
	{
		case -1:
			return;
		case 0:
			return;
		case 1:
			func_5092(uParam0, iParam1);
			break;
		case 2:
			func_5091(uParam0, iParam1);
			break;
		case 3:
			func_5090(uParam0, iParam1);
			break;
		case 4:
			func_5089(uParam0, iParam1);
			break;
		case 5:
			func_5088(uParam0);
			break;
		case 6:
			func_5064(uParam0, iParam1);
			break;
		case 7:
			func_5062(uParam0, 7);
			break;
		case 8:
			func_5062(uParam0, 8);
			break;
		case 9:
			func_5059(uParam0);
			break;
		case 10:
			func_5056(uParam0);
			break;
		case 11:
			func_5052(uParam0, 11);
			break;
		case 12:
			func_5052(uParam0, 12);
			break;
		case 13:
			func_5052(uParam0, 13);
			break;
		case 14:
			func_5052(uParam0, 14);
			break;
		case 15:
			func_5052(uParam0, 15);
			break;
		case 16:
			func_5049(uParam0, 16);
			break;
		case 17:
			func_5049(uParam0, 17);
			break;
		case 18:
			func_5049(uParam0, 18);
			break;
	}
}

void func_5049(var uParam0, int iParam1)//Position - 0x182652
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 38)
	{
		if (func_5050(iVar0, iParam1))
		{
			(*uParam0)[iVar1] = iVar0;
			iVar1++;
		}
		iVar0++;
	}
}

bool func_5050(int iParam0, int iParam1)//Position - 0x18268C
{
	int iVar0;
	iVar0 = func_5035(iParam0);
	return func_5051(iVar0, iParam1);
}

int func_5051(int iParam0, int iParam1)//Position - 0x1826A4
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	func_4811(iParam0, &iVar0, &iVar1);
	if (iVar1 == 0)
	{
		return 0;
	}
	switch (iParam1)
	{
		case 16:
			return iVar0 == 3;
		case 17:
			return iVar0 == 5;
		case 18:
			return iVar0 == 7;
		default:
	}
	return 0;
}

void func_5052(var uParam0, int iParam1)//Position - 0x1826F5
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = 0;
	iVar1 = 0;
	func_5055(&iVar0, &iVar1, iParam1);
	iVar2 = 0;
	iVar3 = 0;
	iVar2 = 0;
	while (iVar2 < 38)
	{
		if (func_5053(iVar2, iVar0, iVar1))
		{
			(*uParam0)[iVar3] = iVar2;
			iVar3++;
		}
		iVar2++;
	}
}

bool func_5053(int iParam0, int iParam1, int iParam2)//Position - 0x182741
{
	int iVar0;
	iVar0 = func_5037(iParam0);
	return func_5054(iVar0, iParam1, iParam2);
}

bool func_5054(int iParam0, int iParam1, int iParam2)//Position - 0x18275B
{
	return (iParam0 >= iParam1 && iParam0 <= iParam2);
}

void func_5055(int iParam0, int iParam1, int iParam2)//Position - 0x182772
{
	switch (iParam2)
	{
		case 11:
			*iParam0 = 1;
			*iParam1 = 18;
			break;
		case 12:
			*iParam0 = 19;
			*iParam1 = 36;
			break;
		case 13:
			*iParam0 = 1;
			*iParam1 = 12;
			break;
		case 14:
			*iParam0 = 13;
			*iParam1 = 24;
			break;
		case 15:
			*iParam0 = 25;
			*iParam1 = 36;
			break;
	}
}

void func_5056(var uParam0)//Position - 0x1827DE
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 38)
	{
		if (func_5057(iVar0))
		{
			(*uParam0)[iVar1] = iVar0;
			iVar1++;
		}
		iVar0++;
	}
}

bool func_5057(int iParam0)//Position - 0x182816
{
	int iVar0;
	iVar0 = func_5037(iParam0);
	return func_5058(iVar0);
}

bool func_5058(int iParam0)//Position - 0x18282C
{
	if (iParam0 == 0 || iParam0 == 37)
	{
		return 0;
	}
	return (iParam0 % 2) == 0;
}

void func_5059(var uParam0)//Position - 0x182850
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 38)
	{
		if (func_5060(iVar0))
		{
			(*uParam0)[iVar1] = iVar0;
			iVar1++;
		}
		iVar0++;
	}
}

bool func_5060(int iParam0)//Position - 0x182888
{
	int iVar0;
	iVar0 = func_5037(iParam0);
	return func_5061(iVar0);
}

bool func_5061(int iParam0)//Position - 0x18289E
{
	if (iParam0 == 0 || iParam0 == 37)
	{
		return 0;
	}
	return (iParam0 % 2) != 0;
}

void func_5062(var uParam0, int iParam1)//Position - 0x1828C2
{
	int iVar0;
	int iVar1;
	if (iParam1 != 7 && iParam1 != 8)
	{
		return;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 38)
	{
		if (func_5063(iVar0) == iParam1)
		{
			(*uParam0)[iVar1] = iVar0;
			iVar1++;
		}
		iVar0++;
	}
}

int func_5063(int iParam0)//Position - 0x182910
{
	if (iParam0 == func_5039(0) || iParam0 == func_5039(37))
	{
		return -1;
	}
	if ((iParam0 % 2) == 0)
	{
		return 7;
	}
	return 8;
}

void func_5064(var uParam0, int iParam1)//Position - 0x182944
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar0 = -1;
	iVar1 = -1;
	iVar2 = -1;
	func_4811(iParam1, &iVar1, &iVar2);
	iVar3 = iVar1;
	iVar4 = iVar2;
	func_5065(&iVar3, &iVar4, 0, -1, 1);
	func_5065(&iVar3, &iVar4, 1, 0, 1);
	iVar0 = func_5096(iVar3, iVar4);
	(*uParam0)[0] = func_5038(iVar0);
	func_5065(&iVar3, &iVar4, 2, 0, 1);
	iVar0 = func_5096(iVar3, iVar4);
	(*uParam0)[1] = func_5038(iVar0);
	func_5065(&iVar3, &iVar4, 2, 0, 1);
	iVar0 = func_5096(iVar3, iVar4);
	(*uParam0)[2] = func_5038(iVar0);
	iVar3 = iVar1;
	iVar4 = iVar2;
	func_5065(&iVar3, &iVar4, 0, 1, 1);
	func_5065(&iVar3, &iVar4, 1, 0, 1);
	iVar0 = func_5096(iVar3, iVar4);
	(*uParam0)[3] = func_5038(iVar0);
	func_5065(&iVar3, &iVar4, 2, 0, 1);
	iVar0 = func_5096(iVar3, iVar4);
	(*uParam0)[4] = func_5038(iVar0);
	func_5065(&iVar3, &iVar4, 2, 0, 1);
	iVar0 = func_5096(iVar3, iVar4);
	(*uParam0)[5] = func_5038(iVar0);
}

void func_5065(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x182A45
{
	if (func_5073(iParam0, iParam1, iParam2, iParam3))
	{
		return;
	}
	if (!bParam4)
	{
		if (iParam2 > 0 || iParam2 < 0)
		{
			iParam3 = 0;
		}
	}
	*iParam0 = (*iParam0 + iParam2);
	*iParam1 = (*iParam1 + iParam3);
	func_5066(iParam0, iParam1);
}

void func_5066(var uParam0, var uParam1)//Position - 0x182A93
{
	int iVar0;
	int iVar1;
	iVar0 = *uParam1;
	iVar1 = *uParam0;
	*uParam1 = __LIB_0__::func_340(iVar0, func_5072(iVar1, iVar0), func_5071(iVar1, iVar0));
	*uParam0 = __LIB_0__::func_340(iVar1, func_5069(iVar1, iVar0), func_5067(iVar1, iVar0));
}

int func_5067(int iParam0, int iParam1)//Position - 0x182AD7
{
	if (func_4913(iParam0, iParam1))
	{
		return 4;
	}
	if (func_5068(iParam0, iParam1))
	{
		return 5;
	}
	return 7;
}

bool func_5068(int iParam0, int iParam1)//Position - 0x182AFE
{
	return (iParam0 >= 3 && iParam1 == 25);
}

int func_5069(int iParam0, int iParam1)//Position - 0x182B14
{
	if (func_5070(iParam0, iParam1))
	{
		return 2;
	}
	if (func_4913(iParam0, iParam1))
	{
		return 2;
	}
	if (func_5068(iParam0, iParam1))
	{
		return 3;
	}
	if (func_4920(iParam0, iParam1))
	{
		return 2;
	}
	return 0;
}

bool func_5070(int iParam0, int iParam1)//Position - 0x182B59
{
	return (iParam0 == 2 && iParam1 == 1);
}

int func_5071(int iParam0, int iParam1)//Position - 0x182B6E
{
	switch (iParam0)
	{
		case 0:
			return 5;
		case 1:
			return 2;
		case 2:
			return 24;
		default:
	}
	return 25;
}

int func_5072(int iParam0, int iParam1)//Position - 0x182B9E
{
	if ((iParam0 == 2 && iParam1 != 1) || iParam0 == 5)
	{
		return 1;
	}
	return 0;
}

int func_5073(var uParam0, var uParam1, int iParam2, int iParam3)//Position - 0x182BC5
{
	if (func_4918(*uParam0, *uParam1))
	{
		return func_5086(uParam0, uParam1, iParam2, iParam3);
	}
	if (func_5085(*uParam0, *uParam1))
	{
		return func_5084(uParam0, uParam1, iParam2, iParam3);
	}
	if (func_5068(*uParam0, *uParam1))
	{
		return func_5082(uParam0, uParam1, iParam2, iParam3);
	}
	if (func_5081(*uParam0, *uParam1))
	{
		return func_5080(uParam0, uParam1, iParam2, iParam3);
	}
	if (func_5079(*uParam0, *uParam1))
	{
		return func_5077(uParam0, uParam1, iParam2, iParam3);
	}
	if (__LIB_9__::func_869(*uParam0, *uParam1))
	{
		return func_5075(uParam0, uParam1, iParam2);
	}
	if (__LIB_11__::func_717(*uParam0, *uParam1))
	{
		return func_5074(uParam0, uParam1, iParam2, iParam3);
	}
	return 0;
}

int func_5074(var uParam0, var uParam1, int iParam2, int iParam3)//Position - 0x182C90
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bVar0 = iParam3 < 0;
	bVar1 = iParam3 > 0;
	bVar2 = iParam2 < 0;
	bVar3 = iParam2 > 0;
	if (bVar0 && bVar3)
	{
		*uParam0++;
		switch (*uParam1)
		{
			case 0:
				*uParam1 = 4;
				break;
			case 1:
				*uParam1 = 12;
				break;
			case 2:
				*uParam1 = 20;
				break;
		}
		return 1;
	}
	if (bVar3)
	{
		*uParam0++;
		switch (*uParam1)
		{
			case 0:
				*uParam1 = 5;
				break;
			case 1:
				*uParam1 = 13;
				break;
			case 2:
				*uParam1 = 21;
				break;
		}
		return 1;
	}
	if (bVar1 && bVar2)
	{
		*uParam0 = (*uParam0 - 1);
		switch (*uParam1)
		{
			case 0:
				*uParam1 = 1;
				break;
			case 1:
				*uParam1 = 3;
				break;
			case 2:
				*uParam1 = 5;
				break;
		}
		return 1;
	}
	if (bVar2)
	{
		*uParam0 = (*uParam0 - 1);
		switch (*uParam1)
		{
			case 0:
				*uParam1 = 0;
				break;
			case 1:
				*uParam1 = 2;
				break;
			case 2:
				*uParam1 = 4;
				break;
		}
		return 1;
	}
	return 0;
}

int func_5075(var uParam0, var uParam1, int iParam2)//Position - 0x182DC3
{
	bool bVar0;
	bVar0 = iParam2 > 0;
	if (bVar0)
	{
		*uParam0++;
		*uParam1 = func_5076(*uParam1);
		return 1;
	}
	return 0;
}

int func_5076(int iParam0)//Position - 0x182DED
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return 0;
		case 2:
		case 3:
			return 1;
		case 4:
		case 5:
			return 2;
		default:
	}
	return iParam0;
}

int func_5077(var uParam0, var uParam1, int iParam2, int iParam3)//Position - 0x182E2E
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bVar0 = iParam2 < 0;
	bVar1 = iParam2 > 0;
	bVar2 = iParam3 < 0;
	bVar3 = iParam3 > 0;
	if (bVar0)
	{
		if (*uParam1 == 1)
		{
			return 1;
		}
		*uParam0 = (*uParam0 - 1);
		*uParam1 = func_5078(*uParam1);
		return 1;
	}
	if ((bVar2 || bVar3) && bVar0)
	{
		return 1;
	}
	if ((bVar2 && bVar1) && *uParam1 == 1)
	{
		*uParam0 = 2;
		*uParam1 = 0;
		return 1;
	}
	return 0;
}

int func_5078(int iParam0)//Position - 0x182EAF
{
	if (iParam0 < 9)
	{
		return 0;
	}
	else if (iParam0 < 17)
	{
		return 1;
	}
	else
	{
		return 2;
	}
	return iParam0;
}

bool func_5079(int iParam0, int iParam1)//Position - 0x182ED9
{
	return (iParam0 == 2 && iParam1 >= 1);
}

int func_5080(var uParam0, var uParam1, int iParam2, int iParam3)//Position - 0x182EEE
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	if (!func_5081(*uParam0, *uParam1))
	{
		return 0;
	}
	bVar0 = iParam2 < 0;
	bVar1 = iParam2 > 0;
	bVar2 = iParam3 > 0;
	if (!bVar2)
	{
		return 0;
	}
	if (bVar2)
	{
		*uParam1++;
		if (bVar0)
		{
			if (*uParam0 == 4)
			{
				*uParam0 = 3;
				return 1;
			}
			if (*uParam0 == 6)
			{
				*uParam0 = 4;
				return 1;
			}
		}
		if (bVar1)
		{
			if (*uParam0 == 4)
			{
				return 1;
			}
			if (*uParam0 == 6)
			{
				*uParam0 = 5;
				return 1;
			}
		}
		if (*uParam0 == 5)
		{
			*uParam0 = 4;
			return 1;
		}
		else if (*uParam0 == 7)
		{
			*uParam0 = 5;
			return 1;
		}
		if (*uParam0 == 4)
		{
			*uParam0 = 3;
			return 1;
		}
		if (*uParam0 == 6)
		{
			*uParam0 = 4;
			return 1;
		}
		return 1;
	}
	return 0;
}

bool func_5081(int iParam0, int iParam1)//Position - 0x182FB7
{
	return (iParam0 >= 3 && iParam1 == 24);
}

int func_5082(var uParam0, var uParam1, int iParam2, int iParam3)//Position - 0x182FCD
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	if (!func_5068(*uParam0, *uParam1))
	{
		return 0;
	}
	bVar0 = iParam2 < 0;
	bVar1 = iParam2 > 0;
	bVar2 = iParam3 > 0;
	bVar3 = iParam3 < 0;
	if (!bVar2 && !bVar3)
	{
		return 0;
	}
	if (bVar3)
	{
		func_5083(uParam0, uParam1, bVar1, bVar0);
		return 1;
	}
	return 0;
}

void func_5083(var uParam0, var uParam1, bool bParam2, bool bParam3)//Position - 0x183027
{
	*uParam1 = (*uParam1 - 1);
	if (!bParam3 && !bParam2)
	{
		if (*uParam0 == 4)
		{
			*uParam0 = 5;
		}
		else if (*uParam0 == 5)
		{
			*uParam0 = 7;
		}
		return;
	}
	if (bParam3)
	{
		if (*uParam0 == 4)
		{
			return;
		}
		if (*uParam0 == 5)
		{
			*uParam0 = 6;
			return;
		}
	}
	if (bParam2)
	{
		if (*uParam0 == 4)
		{
			*uParam0 = 6;
			return;
		}
		if (*uParam0 == 3)
		{
			*uParam0 = 3;
		}
	}
}

int func_5084(var uParam0, var uParam1, int iParam2, int iParam3)//Position - 0x18309C
{
	bool bVar0;
	if (!func_5085(*uParam0, *uParam1))
	{
		return 0;
	}
	bVar0 = iParam3 < 0;
	if (bVar0)
	{
		if (*uParam0 <= 5)
		{
			*uParam1 = (*uParam1 - 1);
			*uParam0 = 2;
			return 1;
		}
		if (*uParam0 > 5)
		{
			*uParam1 = (*uParam1 - 1);
			*uParam0 = 4;
			return 1;
		}
	}
	return 0;
}

bool func_5085(int iParam0, int iParam1)//Position - 0x1830F0
{
	return (iParam0 > 2 && iParam1 == 1);
}

int func_5086(var uParam0, var uParam1, int iParam2, int iParam3)//Position - 0x183105
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	if (!func_4918(*uParam0, *uParam1))
	{
		return 0;
	}
	bVar0 = iParam2 < 0;
	bVar1 = iParam2 > 0;
	bVar2 = iParam3 > 0;
	if (bVar2)
	{
		func_5087(uParam0, uParam1, bVar1, bVar0);
		return 1;
	}
	if (bVar0)
	{
		*uParam0 = (*uParam0 - 1);
	}
	if (bVar1)
	{
		*uParam0++;
	}
	*uParam0 = __LIB_0__::func_340(*uParam0, 2, 4);
	return 1;
}

void func_5087(var uParam0, var uParam1, bool bParam2, bool bParam3)//Position - 0x18316D
{
	*uParam1++;
	if (bParam2)
	{
		if (*uParam0 == 4)
		{
			*uParam0 = 7;
			return;
		}
		*uParam0 = 4;
		return;
	}
	if (bParam3)
	{
		if (*uParam0 == 4)
		{
			*uParam0 = 6;
			return;
		}
		*uParam0 = 3;
		return;
	}
	if (*uParam0 == 4)
	{
		*uParam0 = 6;
		return;
	}
	*uParam0 = 3;
}

void func_5088(var uParam0)//Position - 0x1831C3
{
	(*uParam0)[0] = func_5038(2);
	(*uParam0)[1] = func_5038(4);
	(*uParam0)[2] = func_5038(19);
	(*uParam0)[3] = func_5038(21);
	(*uParam0)[4] = func_5038(23);
}

void func_5089(var uParam0, int iParam1)//Position - 0x183200
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar0 = -1;
	iVar1 = -1;
	iVar2 = -1;
	func_4811(iParam1, &iVar1, &iVar2);
	iVar3 = iVar1;
	iVar4 = iVar2;
	func_5065(&iVar3, &iVar4, -1, -1, 1);
	iVar0 = func_5096(iVar3, iVar4);
	(*uParam0)[0] = func_5038(iVar0);
	iVar3 = iVar1;
	iVar4 = iVar2;
	func_5065(&iVar3, &iVar4, 1, -1, 1);
	iVar0 = func_5096(iVar3, iVar4);
	(*uParam0)[1] = func_5038(iVar0);
	iVar3 = iVar1;
	iVar4 = iVar2;
	func_5065(&iVar3, &iVar4, -1, 1, 1);
	iVar0 = func_5096(iVar3, iVar4);
	(*uParam0)[2] = func_5038(iVar0);
	iVar3 = iVar1;
	iVar4 = iVar2;
	func_5065(&iVar3, &iVar4, 1, 1, 1);
	iVar0 = func_5096(iVar3, iVar4);
	(*uParam0)[3] = func_5038(iVar0);
}

void func_5090(var uParam0, int iParam1)//Position - 0x1832BB
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar0 = -1;
	iVar1 = -1;
	iVar2 = -1;
	func_4811(iParam1, &iVar1, &iVar2);
	if (iVar1 == 5)
	{
		(*uParam0)[0] = func_5038(21);
		(*uParam0)[1] = func_5038(2);
		(*uParam0)[2] = func_5038(4);
		return;
	}
	iVar3 = iVar1;
	iVar4 = iVar2;
	func_5065(&iVar3, &iVar4, 0, -1, 1);
	iVar0 = func_5096(iVar3, iVar4);
	(*uParam0)[0] = func_5038(iVar0);
	iVar3 = iVar1;
	iVar4 = iVar2;
	func_5065(&iVar3, &iVar4, -1, 1, 1);
	iVar0 = func_5096(iVar3, iVar4);
	(*uParam0)[1] = func_5038(iVar0);
	iVar3 = iVar1;
	iVar4 = iVar2;
	func_5065(&iVar3, &iVar4, 1, 1, 1);
	iVar0 = func_5096(iVar3, iVar4);
	(*uParam0)[2] = func_5038(iVar0);
}

void func_5091(var uParam0, int iParam1)//Position - 0x183376
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = -1;
	iVar1 = -1;
	iVar2 = -1;
	func_4811(iParam1, &iVar1, &iVar2);
	func_5065(&iVar1, &iVar2, 1, 0, 1);
	iVar0 = func_5096(iVar1, iVar2);
	(*uParam0)[0] = func_5038(iVar0);
	func_5065(&iVar1, &iVar2, 2, 0, 1);
	iVar0 = func_5096(iVar1, iVar2);
	(*uParam0)[1] = func_5038(iVar0);
	func_5065(&iVar1, &iVar2, 2, 0, 1);
	iVar0 = func_5096(iVar1, iVar2);
	(*uParam0)[2] = func_5038(iVar0);
}

void func_5092(var uParam0, int iParam1)//Position - 0x1833F1
{
	int iVar0;
	int iVar1;
	iVar0 = -1;
	iVar1 = -1;
	func_4811(iParam1, &iVar0, &iVar1);
	if (iVar1 == 0 && iVar0 == 3)
	{
		func_5094(uParam0, iVar0, iVar1);
		return;
	}
	if ((iVar1 % 2) != 0)
	{
		func_5093(uParam0, iVar0, iVar1);
		return;
	}
	func_5094(uParam0, iVar0, iVar1);
}

void func_5093(var uParam0, int iParam1, int iParam2)//Position - 0x183445
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = iParam1;
	iVar1 = iParam2;
	func_5065(&iVar0, &iVar1, 0, -1, 1);
	iVar2 = func_5096(iVar0, iVar1);
	(*uParam0)[0] = func_5038(iVar2);
	iVar0 = iParam1;
	iVar1 = iParam2;
	func_5065(&iVar0, &iVar1, 0, 1, 1);
	iVar3 = func_5096(iVar0, iVar1);
	(*uParam0)[1] = func_5038(iVar3);
}

void func_5094(var uParam0, int iParam1, int iParam2)//Position - 0x18349D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = iParam1;
	iVar1 = iParam2;
	func_5065(&iVar0, &iVar1, -1, 0, 1);
	iVar2 = func_5096(iVar0, iVar1);
	(*uParam0)[0] = func_5038(iVar2);
	iVar0 = iParam1;
	iVar1 = iParam2;
	func_5065(&iVar0, &iVar1, 1, 0, 1);
	iVar3 = func_5096(iVar0, iVar1);
	(*uParam0)[1] = func_5038(iVar3);
}

void func_5095(var uParam0, int iParam1)//Position - 0x1834F5
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = *uParam0;
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		(*uParam0)[iVar0] = iParam1;
		iVar0++;
	}
}

int func_5096(int iParam0, int iParam1)//Position - 0x183520
{
	return (iParam1 * 8 + iParam0);
}

void func_5097(int* iParam0)//Position - 0x18352F
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_818[iVar0]))
		{
			ENTITY::SET_ENTITY_VISIBLE(iParam0->f_818[iVar0], false, false);
		}
		iVar0++;
	}
}

void func_5098(int* iParam0)//Position - 0x18356C
{
	int iVar0;
	iVar0 = func_4999();
	iParam0->f_2750.f_3 = (iVar0 - iParam0->f_797);
	iParam0->f_2750.f_4 = iVar0;
	iParam0->f_2750.f_5 = __LIB_1__::func_724(&(iParam0->f_2711), 0, 0);
	iParam0->f_2750.f_9 = -1;
	if (Global_262145.f_26819 /* Tunable: ENABLE_ROULETTE_LIGHT */)
	{
		STATS::PLAYSTATS_CASINO_ROULETTE_LIGHT(&(iParam0->f_2750));
	}
	iParam0->f_2750.f_2 = MISC::GET_HASH_KEY("none" /* GXT: None */);
}

void func_5100(int* iParam0)//Position - 0x183616
{
	char* sVar0;
	bool bVar1;
	bVar1 = __LIB_16__::func_155(iParam0->f_12);
	sVar0 = func_5107(bVar1);
	iParam0->f_18 = 0;
	func_5106(iParam0, 0);
	func_5105(iParam0, 0);
	func_5104(iParam0, 1);
	__LIB_1__::func_895(1, -1);
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sVar0);
}

void func_5104(int* iParam0, bool bParam1)//Position - 0x1837DD
{
	if (bParam1)
	{
		MISC::SET_BIT(iParam0, 15);
		return;
	}
	MISC::CLEAR_BIT(iParam0, 15);
}

void func_5105(int* iParam0, bool bParam1)//Position - 0x1837FD
{
	if (bParam1)
	{
		MISC::SET_BIT(iParam0, 12);
	}
	else
	{
		MISC::CLEAR_BIT(iParam0, 12);
	}
}

void func_5106(int* iParam0, bool bParam1)//Position - 0x18381D
{
	if (bParam1)
	{
		MISC::SET_BIT(iParam0, 13);
		return;
	}
	MISC::CLEAR_BIT(iParam0, 13);
}

char* func_5107(bool bParam0)//Position - 0x18383D
{
	if (bParam0)
	{
		return "CasinoUI_Roulette_High";
	}
	return "CasinoUI_Roulette";
}

bool func_5108(int* iParam0)//Position - 0x183857
{
	return BitTest(*iParam0, 13);
}

void func_5109()//Position - 0x183865
{
	__LIB_31__::func_780();
	iLocal_113 = 0;
	iLocal_114 = -1;
}

void func_5120(int* iParam0)//Position - 0x183C00
{
	bool bVar0;
	bool bVar1;
	bVar0 = func_5246(iParam0);
	bVar1 = (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/) && !bVar0);
	if (bVar1)
	{
		func_5245(iParam0, "quit");
	}
	if (bVar1)
	{
		func_5244(iParam0, 7, 447, 439);
		return;
	}
	func_5239(iParam0, 1);
	func_5223(iParam0);
	if (!bVar0)
	{
		func_5188(iParam0, 1);
	}
	if (func_5185(iParam0))
	{
		func_5244(iParam0, 7, 447, 1592350/*func_5184*/);
		return;
	}
	if (func_5183(iParam0) == 2)
	{
		func_5244(iParam0, 2, 447, 1588370/*func_5121*/);
	}
}

void func_5121(int* iParam0)//Position - 0x183C92
{
	func_5180(iParam0, 1);
	if (!func_5176(iParam0))
	{
		func_5162(iParam0, 0);
	}
	__LIB_18__::func_763(iParam0, 1);
	ENTITY::SET_ENTITY_VISIBLE(iParam0->f_817, true, false);
	func_5029(iParam0);
	iParam0->f_802 = 0;
	iParam0->f_800 = 0;
	iParam0->f_801 = 0;
	iParam0->f_795 = 0;
	iParam0->f_798 = func_4999();
	func_5135(iParam0);
	func_5134(iParam0, 1);
	func_5021(iParam0);
	func_5132(iParam0);
	func_5131(iParam0);
	func_5123(iParam0);
	__LIB_0__::func_467();
}

void func_5123(int* iParam0)//Position - 0x183D1C
{
	func_5129(iParam0);
	func_5124(iParam0);
}

void func_5124(var uParam0)//Position - 0x183D30
{
	var uVar0;
	MISC::COPY_SCRIPT_STRUCT(&(uParam0->f_2713), &uVar0, 37);
	func_5125(uParam0);
	__LIB_0__::func_794(&(uParam0->f_2709));
	__LIB_0__::func_795(&(uParam0->f_2709), 0, 0);
}

void func_5125(var uParam0)//Position - 0x183D5F
{
	int iVar0;
	uParam0->f_2713 = MISC::GET_HASH_KEY("Roulette");
	uParam0->f_2713.f_11 = __LIB_1__::func_124(PLAYER::PLAYER_ID());
	uParam0->f_2713.f_20 = func_5128();
	uParam0->f_2713.f_10 = func_5127();
	uParam0->f_2713.f_18 = NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT();
	if (NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT() != __LIB_0__::func_162())
	{
		uParam0->f_2713.f_19 = NETWORK::NETWORK_GET_PLAYER_ACCOUNT_ID(NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT()));
	}
	iVar0 = uParam0->f_12;
	uParam0->f_2713.f_2 = iVar0;
	if (iVar0 <= -1)
	{
		return;
	}
	if (__LIB_16__::func_155(iVar0))
	{
		uParam0->f_2713.f_1 = MISC::GET_HASH_KEY("high stakes");
		return;
	}
	uParam0->f_2713.f_1 = MISC::GET_HASH_KEY("standard");
}

bool func_5127()//Position - 0x183E10
{
	return BitTest(Global_1946250.f_5, 23);
}

int func_5128()//Position - 0x183E21
{
	if (__LIB_1__::func_124(PLAYER::PLAYER_ID()))
	{
		return MISC::GET_HASH_KEY("VIP membership");
	}
	if (__LIB_9__::func_558())
	{
		return MISC::GET_HASH_KEY("Paid membership");
	}
	if (func_4955() || func_4951())
	{
		return MISC::GET_HASH_KEY("Gang membership");
	}
	return MISC::GET_HASH_KEY("No membership");
}

void func_5129(var uParam0)//Position - 0x183E79
{
	func_5130(uParam0);
}

void func_5130(var uParam0)//Position - 0x183E87
{
	int iVar0;
	uParam0->f_2750.f_6 = func_5127();
	uParam0->f_2750.f_10 = NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT();
	if (NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT() != __LIB_0__::func_162())
	{
		uParam0->f_2750.f_11 = NETWORK::NETWORK_GET_PLAYER_ACCOUNT_ID(NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT()));
	}
	uParam0->f_2750.f_15 = func_5128();
	iVar0 = uParam0->f_1652[PLAYER::PLAYER_ID() /*33*/].f_1;
	if (iVar0 <= -1)
	{
		return;
	}
	uParam0->f_2750.f_1 = iVar0;
	if (__LIB_16__::func_155(iVar0))
	{
		uParam0->f_2750 = MISC::GET_HASH_KEY("high stakes");
		return;
	}
	uParam0->f_2750 = MISC::GET_HASH_KEY("standard");
}

void func_5131(int* iParam0)//Position - 0x183F17
{
	int iVar0;
	iVar0 = PLAYER::PLAYER_ID();
	iParam0->f_1652[iVar0 /*33*/].f_3 = NETWORK::GET_NETWORK_TIME();
}

void func_5132(int* iParam0)//Position - 0x183F34
{
	int iVar0;
	iVar0 = iParam0->f_12;
	if (iVar0 < 0)
	{
		return;
	}
	func_5133(iParam0, iVar0);
}

void func_5133(var uParam0, int iParam1)//Position - 0x183F53
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = func_58(iVar0, iParam1);
		func_4924(uParam0, iVar1);
		iVar0++;
	}
	MISC::CLEAR_BIT(&(uParam0->f_1[iParam1]), 4);
	MISC::CLEAR_BIT(&(uParam0->f_1[iParam1]), 5);
	MISC::CLEAR_BIT(&(uParam0->f_1[iParam1]), 6);
}

void func_5134(int* iParam0, bool bParam1)//Position - 0x183FA9
{
	if (bParam1)
	{
		MISC::SET_BIT(iParam0, 1);
	}
	else
	{
		MISC::CLEAR_BIT(iParam0, 1);
	}
}

void func_5135(int* iParam0)//Position - 0x183FC7
{
	func_5027(iParam0);
	func_5028(iParam0);
	func_5029(iParam0);
	iParam0->f_815 = func_5160(iParam0);
	func_5159(iParam0, 1);
	func_5136(iParam0);
	ENTITY::SET_ENTITY_VISIBLE(iParam0->f_817, true, false);
}

void func_5136(int* iParam0)//Position - 0x184007
{
	func_5149(iParam0);
	func_5137(iParam0);
}

void func_5137(int* iParam0)//Position - 0x18401B
{
	struct<3> Var0;
	float fVar1;
	fVar1 = 0f;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_817))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0->f_817, true) };
		fVar1 = ENTITY::GET_ENTITY_HEADING(iParam0->f_817);
		OBJECT::DELETE_OBJECT(&(iParam0->f_817));
		iParam0->f_817 = 0;
	}
	else
	{
		Var0 = { __LIB_16__::func_151(0) };
	}
	iParam0->f_815 = func_5139(iParam0, iParam0->f_815, -1);
	iParam0->f_817 = OBJECT::CREATE_OBJECT_NO_OFFSET(func_5138(iParam0->f_815), Var0, false, false, false);
	ENTITY::SET_ENTITY_HEADING(iParam0->f_817, fVar1);
}

int func_5138(int iParam0)//Position - 0x18409B
{
	switch (iParam0)
	{
		case 0:
			return joaat("vw_prop_chip_10dollar_x1");
		case 1:
			return joaat("vw_prop_chip_50dollar_x1");
		case 2:
			return joaat("vw_prop_chip_100dollar_x1");
		case 3:
			return joaat("vw_prop_chip_500dollar_x1");
		case 4:
			return joaat("vw_prop_chip_1kdollar_x1");
		case 5:
			return joaat("vw_prop_chip_5kdollar_x1");
		case 6:
			return joaat("vw_prop_chip_10kdollar_x1");
		default:
	}
	return joaat("vw_prop_chip_10dollar_x1");
}

int func_5139(var uParam0, int iParam1, int iParam2)//Position - 0x184111
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar0 = __LIB_16__::func_159(iParam1);
	iVar1 = 0;
	iVar2 = 0;
	func_5141(uParam0, uParam0->f_811, uParam0->f_812, &iVar1, &iVar2);
	iVar3 = 0;
	iVar4 = 7;
	while (!func_5054(iVar0, iVar1, iVar2) && iVar3 <= iVar4)
	{
		iParam1 = func_5140(iParam1, iParam2);
		iVar0 = __LIB_16__::func_159(iParam1);
		iVar3++;
	}
	return iParam1;
}

int func_5140(int iParam0, int iParam1)//Position - 0x184176
{
	int iVar0;
	iVar0 = iParam0;
	iVar0 = (iVar0 + iParam1);
	iVar0 = __LIB_4__::func_892(iVar0, 7);
	return iVar0;
}

void func_5141(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x184194
{
	if (func_5148(iParam1, iParam2))
	{
		*iParam3 = func_5147(uParam0);
		*iParam4 = func_5145(uParam0);
		return;
	}
	*iParam3 = func_5144(uParam0);
	*iParam4 = func_5142(uParam0);
}

int func_5142(var uParam0)//Position - 0x1841CE
{
	return func_5143(uParam0->f_12);
}

int func_5143(int iParam0)//Position - 0x1841DE
{
	if (__LIB_16__::func_155(iParam0))
	{
		return 50000;
	}
	return 5000;
}

int func_5144(var uParam0)//Position - 0x1841F9
{
	return func_4988(uParam0->f_12);
}

int func_5145(var uParam0)//Position - 0x184209
{
	return func_5146(uParam0->f_12);
}

int func_5146(int iParam0)//Position - 0x184219
{
	if (__LIB_16__::func_155(iParam0))
	{
		return 5000;
	}
	return 500;
}

int func_5147(var uParam0)//Position - 0x184233
{
	return func_4988(uParam0->f_12);
}

bool func_5148(int iParam0, int iParam1)//Position - 0x184243
{
	return (func_4913(iParam0, iParam1) || (iParam0 >= 2 && iParam1 < 25));
}

void func_5149(var uParam0)//Position - 0x184267
{
	int iVar0;
	func_5155(uParam0);
	ENTITY::SET_ENTITY_COORDS(uParam0->f_817, uParam0->f_804, true, false, false, true);
	iVar0 = uParam0->f_12;
	ENTITY::SET_ENTITY_HEADING(uParam0->f_817, (__LIB_16__::func_150(iVar0) + 0f));
	if (func_5151(uParam0))
	{
		func_5029(uParam0);
		func_5150();
	}
}

void func_5150()//Position - 0x1842B3
{
	AUDIO::PLAY_SOUND_FRONTEND(-1, __LIB_31__::func_830(14, 0), __LIB_16__::func_157(1), true);
}

bool func_5151(var uParam0)//Position - 0x1842CD
{
	bool bVar0;
	func_5152(uParam0->f_804, &(uParam0->f_811), &(uParam0->f_812), uParam0->f_12);
	bVar0 = (uParam0->f_813 != uParam0->f_811 || uParam0->f_814 != uParam0->f_812);
	uParam0->f_813 = uParam0->f_811;
	uParam0->f_814 = uParam0->f_812;
	return bVar0;
}

void func_5152(struct<3> Param0, var uParam1, var uParam2, int iParam3)//Position - 0x184322
{
	struct<3> Var0;
	var uVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	Var0 = { func_4909(iParam3) };
	Param0 = { Param0 - Var0 };
	Param0 = { func_5154(Param0, iParam3) };
	uVar1 = Param0.f_0;
	Param0.f_0 = Param0.f_1;
	Param0.f_1 = uVar1;
	fVar2 = (2f * 0.074f);
	fVar3 = ((0.081287f * 0.5f) * 26f);
	fVar4 = -0.1f;
	fVar5 = (fVar2 + ((0.083013f * 2f) * 3f));
	if (((Param0.f_0 < 0f || Param0.f_0 > fVar5) || Param0.f_1 > fVar3) || Param0.f_1 < fVar4)
	{
		*uParam1 = -1;
		*uParam2 = -1;
		return;
	}
	if (Param0.f_0 < (1f * 0.074f))
	{
		fVar6 = (0.081287f * 2f);
		*uParam1 = 0;
		*uParam2 = SYSTEM::ROUND(((Param0.f_1 - (fVar6 * 0.5f)) / fVar6));
		func_5153(uParam1, uParam2);
		return;
	}
	if (Param0.f_0 < (2f * 0.074f))
	{
		fVar7 = (0.081287f * 4f);
		*uParam1 = 1;
		*uParam2 = SYSTEM::ROUND(((Param0.f_1 - (fVar7 * 0.5f)) / fVar7));
		func_5153(uParam1, uParam2);
		return;
	}
	fVar8 = ((Param0.f_0 - (0.083013f * 0.5f)) + fVar2);
	fVar9 = ((fVar8 / 0.083013f) - fVar2);
	*uParam2 = SYSTEM::ROUND((Param0.f_1 / (0.081287f * 0.5f))) + 1;
	*uParam1 = (SYSTEM::ROUND(fVar9) - 1);
	if (*uParam1 == 8)
	{
		*uParam1 = 7;
	}
	func_5153(uParam1, uParam2);
	if (Param0.f_1 < -(0.081287f * 0.25f))
	{
		*uParam2 = 0;
		*uParam1 = 2;
		fVar10 = (0.083013f * 0.8f);
		if (Param0.f_0 > ((fVar2 + (0.083013f * 3f)) + fVar10))
		{
			*uParam1 = 4;
			return;
		}
		if (Param0.f_0 > ((fVar2 + (0.083013f * 2f)) + fVar10))
		{
			*uParam1 = 3;
		}
		return;
	}
	if (Param0.f_1 >= ((0.081287f * 0.5f) * 24f))
	{
		if (Param0.f_0 > (fVar2 + ((0.083013f * 2f) * 2f)))
		{
			*uParam1 = 5;
		}
		else if (Param0.f_0 > (fVar2 + (0.083013f * 2f)))
		{
			*uParam1 = 4;
		}
		else
		{
			*uParam1 = 3;
		}
		*uParam2 = 25;
		func_5153(uParam1, uParam2);
		return;
	}
	if (Param0.f_1 >= ((0.081287f * 0.5f) * 23f))
	{
		*uParam2 = 24;
		func_5153(uParam1, uParam2);
	}
}

void func_5153(var uParam0, var uParam1)//Position - 0x184577
{
	if (!func_5054(*uParam0, func_5069(*uParam0, *uParam1), func_5067(*uParam0, *uParam1)))
	{
		*uParam0 = -1;
		*uParam1 = -1;
	}
	if (!func_5054(*uParam1, func_5072(*uParam0, *uParam1), func_5071(*uParam0, *uParam1)))
	{
		*uParam0 = -1;
		*uParam1 = -1;
	}
}

Vector3 func_5154(struct<3> Param0, int iParam1)//Position - 0x1845CD
{
	float fVar0;
	fVar0 = -__LIB_16__::func_150(iParam1);
	return __LIB_0__::func_327(Param0, fVar0);
}

void func_5155(var uParam0)//Position - 0x1845E8
{
	struct<3> Var0;
	struct<3> Var1;
	int iVar2;
	Var0 = { func_5158() };
	Var1 = { func_5157() };
	iVar2 = uParam0->f_12;
	uParam0->f_804 = { uParam0->f_804 - func_4909(iVar2) };
	uParam0->f_804 = { func_5154(uParam0->f_804, iVar2) };
	uParam0->f_804 = __LIB_1__::func_712(uParam0->f_804, Var0.f_0);
	uParam0->f_804.f_1 = __LIB_1__::func_712(uParam0->f_804.f_1, Var0.f_1);
	uParam0->f_804 = __LIB_3__::func_480(uParam0->f_804, Var1.f_0);
	uParam0->f_804.f_1 = __LIB_3__::func_480(uParam0->f_804.f_1, Var1.f_1);
	uParam0->f_804 = { func_4770(uParam0->f_804, iVar2) + func_4909(iVar2) };
}

Vector3 func_5157()//Position - 0x1846AD
{
	return -0.14f, -0.03f, 0f;
}

Vector3 func_5158()//Position - 0x1846C0
{
	return 1.09f, 0.67f, 0f;
}

void func_5159(int* iParam0, bool bParam1)//Position - 0x1846D3
{
	if (bParam1)
	{
		MISC::SET_BIT(iParam0, 2);
	}
	else
	{
		MISC::CLEAR_BIT(iParam0, 2);
	}
}

int func_5160(int* iParam0)//Position - 0x1846F1
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = 0;
	iVar1 = 0;
	func_5141(iParam0, iParam0->f_811, iParam0->f_812, &iVar0, &iVar1);
	iVar2 = 0;
	iVar3 = __LIB_16__::func_159(iVar2);
	while (iVar3 < iVar0)
	{
		iVar2 = func_5140(iVar2, 1);
		iVar3 = __LIB_16__::func_159(iVar2);
	}
	return iVar2;
}

void func_5162(int* iParam0, int iParam1)//Position - 0x184759
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var3;
	float fVar4;
	int iVar5;
	if (iParam0->f_771 == 0)
	{
		return;
	}
	if (iParam1 == 2)
	{
		func_5175(iParam0);
		return;
	}
	if (iParam1 == 3)
	{
		func_5174(iParam0);
		return;
	}
	if (iParam1 == 4)
	{
		func_5172(iParam0);
		return;
	}
	iVar0 = func_5012(iParam0, iParam0->f_12);
	if (!__LIB_0__::func_121(iVar0))
	{
		return;
	}
	iVar1 = func_4944(iParam0);
	Var2 = { func_5171(iParam1, iVar1) };
	Var3 = { func_5170(iParam1, iVar1) };
	fVar4 = func_5168(iParam1, iVar1);
	iVar5 = iParam0->f_771;
	if (func_5163(iParam0))
	{
		CAM::ATTACH_CAM_TO_ENTITY(iVar5, iVar0, Var2, true);
		CAM::POINT_CAM_AT_ENTITY(iVar5, iVar0, Var3, true);
		CAM::SET_CAM_FOV(iVar5, fVar4);
		__LIB_1__::func_376(PLAYER::PLAYER_ID(), 0, 0, 0);
		func_5025(iParam0, 1, 0);
	}
	else
	{
		CAM::ATTACH_CAM_TO_ENTITY(iVar5, iVar0, Var2, true);
		CAM::POINT_CAM_AT_ENTITY(iVar5, iVar0, Var3, true);
		CAM::SET_CAM_FOV(iVar5, fVar4);
	}
	iParam0->f_785 = { Var2 };
	iParam0->f_788 = { Var3 };
	iParam0->f_791 = { Var3 };
	iParam0->f_773 = iParam1;
}

bool func_5163(int* iParam0)//Position - 0x18486F
{
	return ((!func_5167(iParam0) || !func_5166(iParam0)) || func_5164(iParam0));
}

var func_5164(var uParam0)//Position - 0x184897
{
	return (func_5165(uParam0, 2) || func_5165(uParam0, 3));
}

bool func_5165(int* iParam0, int iParam1)//Position - 0x1848B3
{
	return iParam0->f_773 == iParam1;
}

bool func_5166(var uParam0)//Position - 0x1848C3
{
	return CAM::IS_CAM_ACTIVE(uParam0->f_771);
}

bool func_5167(var uParam0)//Position - 0x1848D4
{
	return CAM::IS_CAM_RENDERING(uParam0->f_771);
}

float func_5168(int iParam0, int iParam1)//Position - 0x1848E5
{
	switch (iParam0)
	{
		case 0:
			return 41.1502f;
		case 1:
			return 50f;
		case 4:
			return func_5169(iParam1);
		default:
	}
	return 0f;
}

float func_5169(int iParam0)//Position - 0x184920
{
	switch (iParam0)
	{
		case 0:
			return 41.3121f;
		case 1:
			return 34.6329f;
		case 2:
			return 34.6703f;
		case 3:
			return 32.7758f;
		default:
	}
	return 34.6329f;
}

Vector3 func_5170(int iParam0, int iParam1)//Position - 0x18496C
{
	switch (iParam0)
	{
		case 0:
			return 0.0677f, -0.0155f, 0.1634f;
		case 1:
			return -1.7807f, 0.5194f, -0.8033f;
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_5171(int iParam0, int iParam1)//Position - 0x1849AE
{
	switch (iParam0)
	{
		case 0:
			return 0.068f, -0.2737f, 3.1523f;
		case 1:
			return -0.2713f, -0.2519f, 1.6719f;
		default:
	}
	return 0f, 0f, 0f;
}

void func_5172(int* iParam0)//Position - 0x1849F0
{
	__LIB_1__::func_376(PLAYER::PLAYER_ID(), 0, 0, 0);
	func_5025(iParam0, 0, 0);
	func_5173(iParam0, 1);
	iParam0->f_773 = 4;
}

void func_5173(int* iParam0, bool bParam1)//Position - 0x184A18
{
	if (iParam0->f_772 == 0)
	{
		return;
	}
	CAM::SET_CAM_ACTIVE(iParam0->f_772, bParam1);
	CAM::RENDER_SCRIPT_CAMS(bParam1, false, 3000, true, false, 0);
}

void func_5174(var uParam0)//Position - 0x184A44
{
	CAM::SET_CAM_ACTIVE(uParam0->f_771, false);
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	__LIB_1__::func_376(PLAYER::PLAYER_ID(), 0, 256, 0);
	CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(0, 4);
	uParam0->f_773 = 3;
	uParam0->f_774 = 4;
}

void func_5175(var uParam0)//Position - 0x184A81
{
	CAM::SET_CAM_ACTIVE(uParam0->f_771, false);
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	__LIB_1__::func_376(PLAYER::PLAYER_ID(), 0, 256, 0);
	CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(0, 1);
	uParam0->f_773 = 2;
	uParam0->f_774 = 1;
}

bool func_5176(int* iParam0)//Position - 0x184ABE
{
	return ((func_5179(iParam0) || func_5178(iParam0)) || func_5177(iParam0));
}

bool func_5177(var uParam0)//Position - 0x184AE4
{
	return (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 207 /*INPUT_FRONTEND_LT*/) && uParam0->f_773 == 4);
}

bool func_5178(var uParam0)//Position - 0x184AFF
{
	return (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 207 /*INPUT_FRONTEND_LT*/) && uParam0->f_773 == 1);
}

bool func_5179(var uParam0)//Position - 0x184B1A
{
	return (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 208 /*INPUT_FRONTEND_RT*/) && uParam0->f_773 == 0);
}

void func_5180(int* iParam0, bool bParam1)//Position - 0x184B35
{
	bool bVar0;
	func_5182(iParam0);
	iParam0->f_775[0] = 0;
	bVar0 = ((iParam0->f_774 == 1 || iParam0->f_774 == 1) || iParam0->f_774 == 0);
	if (bVar0)
	{
		iParam0->f_775[1] = 2;
		iParam0->f_775[2] = 3;
	}
	else
	{
		iParam0->f_775[1] = 3;
		iParam0->f_775[2] = 2;
	}
	iParam0->f_780 = 1;
	CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(0, func_5181(iParam0->f_775[1]));
	if (!bParam1)
	{
		iParam0->f_779 = 1;
		return;
	}
	iParam0->f_779 = 0;
}

int func_5181(int iParam0)//Position - 0x184BC7
{
	if (iParam0 == 2)
	{
		return 1;
	}
	if (iParam0 == 3)
	{
		return 4;
	}
	return 1;
}

void func_5182(int* iParam0)//Position - 0x184BE4
{
	MISC::SET_BIT(iParam0, 8);
	iParam0->f_774 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0);
}

int func_5183(int* iParam0)//Position - 0x184BFE
{
	int iVar0;
	iVar0 = iParam0->f_1652[PLAYER::PLAYER_ID() /*33*/].f_1;
	return iParam0->f_1357[iVar0];
}

void func_5184(int* iParam0)//Position - 0x184C1E
{
	if (!BitTest(*iParam0, 8))
	{
		return;
	}
	MISC::CLEAR_BIT(iParam0, 8);
	CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(0, func_5181(iParam0->f_775[iParam0->f_780]));
}

int func_5185(int* iParam0)//Position - 0x184C50
{
	int iVar0;
	int iVar1;
	bool bVar2;
	iVar0 = iParam0->f_12;
	iVar1 = func_4987(iVar0);
	if (func_4779(iVar0))
	{
		func_5245(iParam0, "table disabled");
		return 1;
	}
	bVar2 = func_4958(iParam0->f_11, iVar0, iVar1, &(iParam0->f_2750.f_2), 1);
	func_5187(iParam0, iParam0->f_2750.f_2);
	if (bVar2)
	{
		return 1;
	}
	if (func_5186(iParam0))
	{
		func_5245(iParam0, "bet skip limit");
		return 1;
	}
	return 0;
}

bool func_5186(int* iParam0)//Position - 0x184CC3
{
	return (iParam0->f_799 >= -1 && 0);
}

void func_5187(int* iParam0, var uParam1)//Position - 0x184CD8
{
	iParam0->f_2750.f_2 = uParam1;
	iParam0->f_2713.f_4 = uParam1;
}

void func_5188(int* iParam0, int iParam1)//Position - 0x184CF2
{
	if (func_5222(iParam0))
	{
		return;
	}
	if (func_5221(iParam0))
	{
		func_5212(iParam0, iParam1);
	}
	func_5201(iParam0);
	if (!func_5197(iParam0))
	{
		func_5189(iParam0);
	}
}

void func_5189(int* iParam0)//Position - 0x184D2D
{
	int iVar0;
	char* sVar1;
	int iVar2;
	iVar0 = func_4823(iParam0, iParam0->f_12);
	sVar1 = func_5195(iVar0);
	iVar2 = func_5194(iParam0);
	if (iVar2 <= 0)
	{
		func_5193(iVar0, sVar1);
		return;
	}
	if (iParam0->f_795 > 0)
	{
		func_5192(iVar0, sVar1, iParam0->f_795);
	}
	else
	{
		func_5190(iVar0, sVar1);
	}
}

void func_5190(int iParam0, char* sParam1)//Position - 0x184D83
{
	if (iParam0 == 37)
	{
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(func_5191(30));
		HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, false, -1);
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(func_5191(31));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam0);
		HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, false, -1);
	}
}

char* func_5191(int iParam0)//Position - 0x184DC5
{
	switch (iParam0)
	{
		case 0:
			return "ROUL_EXIT" /* GXT: Quit */;
		case 1:
			return "ROUL_CONT" /* GXT: Continue */;
		case 2:
			return "ROUL_PLACE" /* GXT: Place Bet */;
		case 3:
			return "ROUL_PLACE_MAX" /* GXT: Max Bet */;
		case 4:
			return "ROUL_REMOVE" /* GXT: Remove This Bet */;
		case 5:
			return "ROUL_SNAP" /* GXT: Nudge Cursor */;
		case 6:
			return "ROUL_MOVE" /* GXT: Move Cursor */;
		case 7:
			return "ROUL_AMOUNT" /* GXT: Adjust Bet */;
		case 8:
			return "ROUL_HISTORY" /* GXT: History */;
		case 9:
			return "ROUL_SHOW_RULES" /* GXT: Rules */;
		case 10:
			return "ROUL_TIME" /* GXT: TIME */;
		case 11:
			return "ROUL_TOTAL_BET" /* GXT: TOTAL BET */;
		case 12:
			return "ROUL_BET" /* GXT: BET */;
		case 13:
			return "ROUL_THIS_BET" /* GXT: THIS BET */;
		case 14:
			return "ROUL_BET_REMAIN" /* GXT: BETS REMAINING */;
		case 15:
			return "ROUL_CAM_LAYOUT" /* GXT: Layout Cam */;
		case 16:
			return "ROUL_CAM_WHEEL" /* GXT: Wheel Cam */;
		case 17:
			return "ROUL_CAM_TP" /* GXT: Third Person Cam */;
		case 18:
			return "ROUL_CAM_FP" /* GXT: First Person Cam */;
		case 19:
			return "ROUL_CAM_REACT" /* GXT: Reaction Cam */;
		case 20:
			return "ROUL_NO_HISTORY" /* GXT: There is no result history for this table. */;
		case 21:
			return "ROUL_HISTORY_";
		case 22:
			return "ROUL_BLIP_";
		case 23:
			return "ROUL_BLACK" /* GXT: Black */;
		case 24:
			return "ROUL_GREEN" /* GXT: Green */;
		case 25:
			return "ROUL_RED" /* GXT: Red */;
		case 26:
			return "ROUL_NO_BET_DOUBLE_ZERO" /* GXT: Green 00.~n~You did not bet. */;
		case 27:
			return "ROUL_NO_BET" /* GXT: ~a~ ~1~.~n~You did not bet. */;
		case 28:
			return "ROUL_WIN_DOUBLE_ZERO" /* GXT: Green 00.~n~You win ~1~ Chips! */;
		case 29:
			return "ROUL_WIN" /* GXT: ~a~ ~1~.~n~You win ~1~ Chips! */;
		case 30:
			return "ROUL_LOSE_DOUBLE_ZERO" /* GXT: Green 00.~n~You lose. */;
		case 31:
			return "ROUL_LOSE" /* GXT: ~a~ ~1~.~n~You lose. */;
		case 32:
			return "ROUL_MAX_WARN_I" /* GXT: Maximum inside bet limit reached. */;
		case 33:
			return "ROUL_MAX_WARN_O" /* GXT: Maximum outside bet limit reached. */;
		case 34:
			return "ROUL_NO_CHIP_WARN" /* GXT: Not enough chips to place this bet. */;
		case 35:
			return "ROUL_NO_BETS_REMAIN_WARN" /* GXT: Maximum number of bets placed. */;
		case 36:
			return "ROUL_BET_STAGE_PC" /* GXT: Move with ~INPUTGROUP_LOOK~ and press ~INPUT_CURSOR_ACCEPT~ to bet. */;
		case 37:
			return "ROUL_BET_STAGE" /* GXT: Move with ~INPUTGROUP_SCRIPT_LSTICK_ALL~ and press ~INPUT_FRONTEND_ACCEPT~ to bet. */;
		case 38:
			return "ROUL_BET_END" /* GXT: Betting is now finished. */;
		case 39:
			return "ROUL_BET_LAYOUT" /* GXT: Bets can only be placed on the layout view. */;
		case 40:
			return "ROUL_TITLE" /* GXT: ROULETTE */;
		case 41:
			return "ROUL_DIS" /* GXT: ~a~~n~~n~~a~~n~~n~~a~ */;
		case 42:
			return "ROUL_DIS1" /* GXT: The objective of Roulette is to predict which number and/or color the ball will land on. This can be done by placing a single bet on a color, individual number, or by placing bets that cover a range of numbers, or whether the number will be an even/odd number. */;
		case 43:
			return "ROUL_DIS2" /* GXT: A maximum of 10 bets can be placed at a time on the table. */;
		case 44:
			return "ROUL_DIS3" /* GXT: This table uses the American style layout, which includes double zero. */;
		case 45:
			return "ROUL_RULES" /* GXT: RULES */;
		case 46:
			return "ROUL_RULE_1" /* GXT: Inside Bets~n~~n~Straight-up: A bet on an individual number. This pays 35 to 1.~n~~n~Split: A two-number bet that's placed on the line connecting two numbers. This pays 17 to 1.~n~~n~Trio: A three-number bet that includes zero, double zero, or both. This pays 11 to 1.~n~~n~Corner: A four-number bet that's placed at the corner of four numbers. This pays 8 to 1.~n~~n~Street: A three-number bet that's placed at the end of a row of numbers. This pays 11 to 1.~n~~n~Line: A six-number bet that's placed at the junction of two street bets. This pays 5 to 1.~n~~n~Five-Number: A five-number bet covering 0, 00, 1, 2, and 3. This pays 6 to 1. */;
		case 47:
			return "ROUL_RULE_2" /* GXT: Outside Bets~n~~n~Red: An eighteen-number bet that covers all of the red numbers. This pays 1 to 1.~n~~n~Black: An eighteen-number bet that covers all of the black numbers. This pays 1 to 1.~n~~n~Even: An eighteen-number bet that covers all of the even numbers. This pays 1 to 1.~n~~n~Odd: An eighteen-number bet that covers all of the odd numbers. This pays 1 to 1.~n~~n~Halves: An eighteen-number bet that covers the 1st half (1-18) or the 2nd half (19-36). This pays 1 to 1.~n~~n~Column: A twelve-number bet that covers all of the numbers in the corresponding column. This pays 2 to 1.~n~~n~Dozen: A twelve-number bet that covers 1-12, 13-24, or 25-36. This pays 2 to 1. */;
		case 48:
			return "ROUL_RULE_3" /* GXT: Bet Limits~n~~n~Inside Bets:~n~- Minimum: 10 Chips~n~- Maximum: 500 Chips~n~~n~Outside Bets:~n~- Minimum: 10 Chips~n~- Maximum: 5000 Chips */;
		case 49:
			return "ROUL_RULE_3_H" /* GXT: Bet Limits~n~~n~Inside Bets:~n~- Minimum: 100 Chips~n~- Maximum: 5000 Chips~n~~n~Outside Bets:~n~- Minimum: 100 Chips~n~- Maximum: 50000 Chips */;
		case 51:
			return "IB_BACK" /* GXT: Back */;
		case 50:
			return "IB_TAB" /* GXT: Previous/Next Page */;
		default:
	}
	return "";
}

void func_5192(int iParam0, char* sParam1, int iParam2)//Position - 0x1850AF
{
	if (iParam0 == 37)
	{
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(func_5191(28));
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
		HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, false, -1);
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(func_5191(29));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam0);
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
		HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, false, -1);
	}
}

void func_5193(int iParam0, char* sParam1)//Position - 0x1850FD
{
	if (iParam0 == 37)
	{
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(func_5191(26));
		HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, false, -1);
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(func_5191(27));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam0);
		HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, false, -1);
	}
}

int func_5194(int* iParam0)//Position - 0x18513F
{
	return (iParam0->f_800 + iParam0->f_801);
}

var func_5195(int iParam0)//Position - 0x185152
{
	int iVar0;
	iVar0 = func_5196(iParam0);
	if (iVar0 == 8)
	{
		return func_5191(23);
	}
	if (iVar0 == 7)
	{
		return func_5191(25);
	}
	return func_5191(24);
}

int func_5196(int iParam0)//Position - 0x185187
{
	return func_5063(func_5039(iParam0));
}

int func_5197(int* iParam0)//Position - 0x185199
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<4> Var6;
	iVar0 = iParam0->f_12;
	if (iVar0 < 0)
	{
		return 0;
	}
	if (!PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 206 /*INPUT_FRONTEND_RB*/))
	{
		return 0;
	}
	iVar1 = iParam0->f_764[iVar0];
	if (iVar1 <= 0)
	{
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(func_5191(20));
		HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, false, -1);
		return 1;
	}
	Var2 = { func_5200(iVar1) };
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(__LIB_1__::func_601(&Var2));
	iVar3 = 0;
	iVar3 = 0;
	while (iVar3 < 6)
	{
		iVar4 = (iVar0 * 6 + iVar3);
		iVar5 = iParam0->f_727[iVar4];
		if (iVar5 != -1)
		{
			Var6 = { func_5198(iVar5) };
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Var6);
		}
		iVar3++;
	}
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, false, -1);
	return 1;
}

struct<4> func_5198(int iParam0)//Position - 0x185243
{
	struct<4> Var0;
	StringCopy(&Var0, func_5191(22), 16);
	StringIntConCat(&Var0, iParam0, 16);
	return Var0;
}

struct<4> func_5200(int iParam0)//Position - 0x185269
{
	struct<4> Var0;
	iParam0 = __LIB_0__::func_340(iParam0, 1, 6);
	StringCopy(&Var0, func_5191(21), 16);
	StringIntConCat(&Var0, iParam0, 16);
	return Var0;
}

void func_5201(int* iParam0)//Position - 0x18528F
{
	struct<9> Var0;
	Var0 = { __LIB_1__::func_404() };
	__LIB_6__::func_206(&(iParam0->f_20), 1f);
	__LIB_5__::func_693(&(iParam0->f_19), &Var0, &(iParam0->f_20), __LIB_1__::func_402(&(iParam0->f_20)));
	__LIB_0__::func_876(1);
}

void func_5212(int* iParam0, var uParam1)//Position - 0x185734
{
	__LIB_1__::func_539(&(iParam0->f_20));
	if (uParam1 || func_5194(iParam0) <= 0)
	{
		func_5218(iParam0);
	}
	if (!func_5176(iParam0))
	{
		func_5217(iParam0);
		func_5216(iParam0);
	}
	func_5215(iParam0);
	func_5213(iParam0);
}

void func_5213(int* iParam0)//Position - 0x18577F
{
	__LIB_2__::func_817(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 206 /*INPUT_FRONTEND_RB*/, true), func_5191(8), &(iParam0->f_20), 0);
}

void func_5215(int* iParam0)//Position - 0x1857EE
{
	__LIB_2__::func_817(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 210 /*INPUT_FRONTEND_RS*/, true), func_5191(9), &(iParam0->f_20), 0);
}

void func_5216(int* iParam0)//Position - 0x18580D
{
	if (func_5179(iParam0))
	{
		return;
	}
	__LIB_2__::func_817(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 207 /*INPUT_FRONTEND_LT*/, true), func_5191(19), &(iParam0->f_20), 0);
}

void func_5217(int* iParam0)//Position - 0x185838
{
	__LIB_2__::func_817(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 208 /*INPUT_FRONTEND_RT*/, true), func_5191(15), &(iParam0->f_20), 0);
}

void func_5218(int* iParam0)//Position - 0x185857
{
	__LIB_2__::func_817(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/, true), func_5191(0), &(iParam0->f_20), 0);
}

bool func_5221(int* iParam0)//Position - 0x18596E
{
	return (BitTest(*iParam0, 1) || PAD::HAVE_CONTROLS_CHANGED(0 /*PLAYER_CONTROL*/));
}

bool func_5222(int* iParam0)//Position - 0x185986
{
	return BitTest(*iParam0, 15);
}

void func_5223(int* iParam0)//Position - 0x185994
{
	PLAYER::DISABLE_CAMERA_VIEW_MODE_CYCLE(PLAYER::PLAYER_ID());
	if (func_5238(iParam0))
	{
		return;
	}
	if (func_5237(iParam0))
	{
		return;
	}
	if (func_5165(iParam0, 0))
	{
		func_5162(iParam0, 2);
	}
	func_5224(iParam0, 0);
}

int func_5224(int* iParam0, bool bParam1)//Position - 0x1859D5
{
	int iVar0;
	if (!bParam1 && iParam0->f_779 == 0)
	{
		func_5236(iParam0, 0);
		return 1;
	}
	if (!PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 0 /*INPUT_NEXT_CAMERA*/))
	{
		return 0;
	}
	iVar0 = iParam0->f_775;
	iParam0->f_779 = __LIB_4__::func_892(iParam0->f_779 + 1, iVar0);
	if (!bParam1 && iParam0->f_779 == 0)
	{
		iParam0->f_779 = 1;
	}
	if (iParam0->f_779 != 0)
	{
		iParam0->f_780 = iParam0->f_779;
	}
	else
	{
		iParam0->f_780 = 1;
	}
	func_5162(iParam0, iParam0->f_775[iParam0->f_779]);
	if (iParam0->f_779 == 0)
	{
		CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(0, func_5181(iParam0->f_775[1]));
	}
	func_5225(iParam0);
	return 1;
}

void func_5225(int* iParam0)//Position - 0x185A88
{
	__LIB_1__::func_539(&(iParam0->f_20));
	func_5218(iParam0);
	if (!func_5235(iParam0))
	{
		func_5229(iParam0);
		func_5227(iParam0);
	}
	if (!(func_5178(iParam0) || (func_5179(iParam0) && iParam0->f_779 != 0)))
	{
		if (iParam0->f_779 != 0)
		{
			func_5217(iParam0);
		}
		func_5226(iParam0);
	}
	func_5215(iParam0);
	func_5213(iParam0);
}

void func_5226(int* iParam0)//Position - 0x185AF7
{
	__LIB_2__::func_817(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 207 /*INPUT_FRONTEND_LT*/, true), func_5191(16), &(iParam0->f_20), 0);
}

void func_5227(var uParam0)//Position - 0x185B16
{
	__LIB_16__::func_173(2, 7, func_5191(7), &(uParam0->f_20));
}

void func_5229(var uParam0)//Position - 0x185B91
{
	func_5234(uParam0);
	if (uParam0->f_802 > 0)
	{
		func_5233(uParam0);
	}
	if (uParam0->f_815 != func_5231(uParam0))
	{
		func_5230(uParam0);
	}
}

void func_5230(var uParam0)//Position - 0x185BC2
{
	__LIB_2__::func_817(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 204 /*INPUT_FRONTEND_Y*/, true), func_5191(3), &(uParam0->f_20), 0);
}

int func_5231(var uParam0)//Position - 0x185BE0
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	func_5141(uParam0, uParam0->f_811, uParam0->f_812, &iVar0, &iVar1);
	return func_5232(__LIB_3__::func_778(iVar1, func_4999()));
}

int func_5232(int iParam0)//Position - 0x185C10
{
	if (iParam0 >= 10000)
	{
		return 6;
	}
	if (iParam0 >= 5000)
	{
		return 5;
	}
	if (iParam0 >= 1000)
	{
		return 4;
	}
	if (iParam0 >= 500)
	{
		return 3;
	}
	if (iParam0 >= 100)
	{
		return 2;
	}
	if (iParam0 >= 50)
	{
		return 1;
	}
	return 0;
}

void func_5233(var uParam0)//Position - 0x185C5F
{
	int iVar0;
	iVar0 = 214;
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		iVar0 = 238;
	}
	__LIB_2__::func_817(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, iVar0, true), func_5191(4), &(uParam0->f_20), 0);
}

void func_5234(var uParam0)//Position - 0x185C8D
{
	int iVar0;
	iVar0 = 201;
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		iVar0 = 237;
	}
	__LIB_2__::func_817(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, iVar0, true), func_5191(2), &(uParam0->f_20), 0);
}

bool func_5235(int* iParam0)//Position - 0x185CBB
{
	return BitTest(*iParam0, 27);
}

void func_5236(int* iParam0, bool bParam1)//Position - 0x185CC9
{
	if (!bParam1)
	{
		iParam0->f_779 = iParam0->f_780;
	}
	func_5162(iParam0, iParam0->f_775[iParam0->f_779]);
}

int func_5237(int* iParam0)//Position - 0x185CF3
{
	if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 208 /*INPUT_FRONTEND_RT*/))
	{
		if (func_5178(iParam0))
		{
			return 0;
		}
		if (iParam0->f_773 != 0)
		{
			func_5162(iParam0, 0);
			func_5225(iParam0);
		}
		return 1;
	}
	else if (iParam0->f_773 == 0)
	{
		func_5236(iParam0, 1);
		func_5225(iParam0);
	}
	return 0;
}

int func_5238(int* iParam0)//Position - 0x185D46
{
	if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 207 /*INPUT_FRONTEND_LT*/))
	{
		if (iParam0->f_773 != 4)
		{
			func_5162(iParam0, 4);
			func_5225(iParam0);
		}
		return 1;
	}
	else if (iParam0->f_773 == 4)
	{
		func_5236(iParam0, 1);
		func_5225(iParam0);
	}
	return 0;
}

void func_5239(int* iParam0, int iParam1)//Position - 0x185D8C
{
	if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD")) != 7)
	{
		return;
	}
	if (!func_4928(iParam0, 1063675494))
	{
		return;
	}
	if (iParam0->f_1202 == 0 && iParam1)
	{
		func_5242(iParam0);
	}
	else
	{
		func_5240(iParam0);
	}
}

void func_5240(int* iParam0)//Position - 0x185DDA
{
	struct<6> Var0;
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = 1090519040;
	Var0.f_3 = -998637568;
	Var0.f_5 = 1065353216;
	func_5241(&Var0);
	func_5010(iParam0, &Var0);
}

void func_5241(var uParam0)//Position - 0x185E1B
{
	*uParam0 = 0;
	uParam0->f_1 = 1;
	uParam0->f_6 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
	uParam0->f_7 = 1;
	uParam0->f_2 = 1.5f;
	uParam0->f_3 = -1.5f;
	uParam0->f_9 = 77;
}

void func_5242(int* iParam0)//Position - 0x185E53
{
	struct<6> Var0;
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = 1090519040;
	Var0.f_3 = -998637568;
	Var0.f_5 = 1065353216;
	func_5243(&Var0);
	func_5010(iParam0, &Var0);
}

void func_5243(var uParam0)//Position - 0x185E94
{
	*uParam0 = 1;
	uParam0->f_1 = 1;
	uParam0->f_6 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
	uParam0->f_8 = 1;
	uParam0->f_2 = 1.5f;
	uParam0->f_3 = -1.5f;
	uParam0->f_9 = 13;
}

void func_5244(int* iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x185ECC
{
	int iVar0;
	iVar0 = PLAYER::PLAYER_ID();
	Stack.Push(iParam0);
	Call_Loc(iParam2);
	iParam0->f_1652[iVar0 /*33*/].f_25 = iParam1;
	Stack.Push(iParam0);
	Call_Loc(iParam3);
}

void func_5245(int* iParam0, char* sParam1)//Position - 0x185EF1
{
	iParam0->f_2750.f_2 = MISC::GET_HASH_KEY(sParam1);
	iParam0->f_2713.f_4 = MISC::GET_HASH_KEY(sParam1);
}

int func_5246(int* iParam0)//Position - 0x185F13
{
	PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 210 /*INPUT_FRONTEND_RS*/, true);
	PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 210 /*INPUT_FRONTEND_RS*/);
	if (func_5222(iParam0))
	{
		func_5104(iParam0, 0);
	}
	if (!func_5108(iParam0))
	{
		if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 210 /*INPUT_FRONTEND_RS*/))
		{
			func_5106(iParam0, 1);
			func_5274();
		}
		else
		{
			return 0;
		}
	}
	if (!func_5249(iParam0))
	{
		return 0;
	}
	if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/))
	{
		func_5248();
		func_5100(iParam0);
		return 0;
	}
	if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 190 /*INPUT_FRONTEND_RIGHT*/))
	{
		func_5247(iParam0, 1);
		return 1;
	}
	if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 189 /*INPUT_FRONTEND_LEFT*/))
	{
		func_5247(iParam0, -1);
		return 1;
	}
	return 1;
}

void func_5247(int* iParam0, int iParam1)//Position - 0x185FB1
{
	int iVar0;
	iVar0 = iParam0->f_18;
	iVar0 = (iVar0 + iParam1);
	iVar0 = __LIB_4__::func_892(iVar0, 3);
	iParam0->f_18 = iVar0;
	func_5105(iParam0, 0);
}

void func_5248()//Position - 0x185FDC
{
	AUDIO::PLAY_SOUND_FRONTEND(-1, __LIB_31__::func_830(18, 0), __LIB_16__::func_157(1), true);
}

int func_5249(int* iParam0)//Position - 0x185FF6
{
	if (!__LIB_25__::func_922(iParam0))
	{
		if (!func_5265(iParam0))
		{
			return 0;
		}
	}
	__LIB_9__::func_296(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
	return 1;
}

int func_5265(int* iParam0)//Position - 0x189763
{
	char* sVar0;
	bool bVar1;
	bVar1 = __LIB_16__::func_155(iParam0->f_12);
	sVar0 = func_5107(bVar1);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sVar0, false);
	if (!(__LIB_3__::func_67(0, -1, 0) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sVar0)))
	{
		return 0;
	}
	__LIB_1__::func_602(0, 0);
	__LIB_3__::func_566(1, sVar0, sVar0);
	__LIB_1__::func_767(func_5191(45));
	func_5270(1, iParam0->f_18 + 1, 3);
	__LIB_4__::func_846(1, 1, 1, 1, 1);
	__LIB_3__::func_781(-1, 1, 1);
	func_5268(iParam0);
	__LIB_1__::func_791(202, func_5191(51), -1);
	__LIB_6__::func_170(8, func_5191(50), -1);
	func_5105(iParam0, 1);
	return 1;
}

void func_5268(var uParam0)//Position - 0x189958
{
	switch (uParam0->f_18)
	{
		case 0:
			__LIB_1__::func_789(func_5191(46), 0, 0);
			break;
		case 1:
			__LIB_1__::func_789(func_5191(47), 0, 0);
			break;
		case 2:
			if (__LIB_16__::func_155(uParam0->f_12))
			{
				__LIB_1__::func_789(func_5191(49), 0, 0);
				return;
			}
			__LIB_1__::func_789(func_5191(48), 0, 0);
			break;
	}
}

void func_5270(int iParam0, var uParam1, int iParam2)//Position - 0x189A01
{
	Global_23150.f_6126 = iParam0;
	Global_23150.f_6127 = uParam1;
	Global_23150.f_6128 = iParam2;
}

void func_5274()//Position - 0x189BC8
{
	AUDIO::PLAY_SOUND_FRONTEND(-1, __LIB_31__::func_830(17, 0), __LIB_16__::func_157(1), true);
}

void func_5275(int* iParam0)//Position - 0x189BE2
{
	bool bVar0;
	bool bVar1;
	bVar0 = func_5246(iParam0);
	bVar1 = ((PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/) && !bVar0) && func_5194(iParam0) <= 0);
	if (bVar1)
	{
		func_5245(iParam0, "quit");
	}
	if (bVar1)
	{
		func_5244(iParam0, 7, 447, 1592350/*func_5184*/);
		return;
	}
	if (!iParam0->f_9.f_1)
	{
		__LIB_0__::func_794(&(iParam0->f_9));
		__LIB_0__::func_795(&(iParam0->f_9), 0, 0);
	}
	func_5223(iParam0);
	if (!bVar0)
	{
		func_5188(iParam0, 0);
	}
	func_5239(iParam0, 1);
	if ((func_5322(iParam0) && __LIB_0__::func_937(&(iParam0->f_9), 5000, 0)) || __LIB_0__::func_937(&(iParam0->f_9), 10000, 0))
	{
		if (iParam0->f_795 <= 0)
		{
			func_5244(iParam0, 6, 1619717/*__LIB_19__::func_922*/, 1618703/*func_5312*/);
			return;
		}
		switch (func_5276(iParam0->f_795))
		{
			case 3:
				func_5244(iParam0, 7, 447, 1592350/*func_5184*/);
				return;
			case 2:
				func_5244(iParam0, 6, 1619717/*__LIB_19__::func_922*/, 1618703/*func_5312*/);
				return;
			case 1:
			case 0:
				break;
			}
	}
}

int func_5276(int iParam0)//Position - 0x189CFF
{
	func_5277(iParam0, &uLocal_111, 3);
	return uLocal_111;
}

int func_5277(int iParam0, var uParam1, int iParam2)//Position - 0x189D13
{
	return func_5278(iParam0, 3, uParam1, iParam2, -1);
}

int func_5278(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4)//Position - 0x189D27
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<7> Var5;
	if (iParam0 <= 0)
	{
	}
	else if (!__LIB_9__::func_605(iParam1))
	{
	}
	else
	{
		iVar0 = __LIB_9__::func_483();
		iVar1 = (Global_262145.f_27174 /* Tunable: VC_CASINO_CHIP_MAX_HELD */ - iVar0);
		iVar2 = 0;
		if (iParam1 == 0)
		{
			iVar3 = __LIB_16__::func_181();
			if (iVar1 > iVar3)
			{
				iVar1 = iVar3;
			}
		}
		if (iParam0 > iVar1)
		{
			iVar2 = (iVar1 + iVar0);
		}
		else
		{
			iVar2 = (iParam0 + iVar0);
		}
		if (func_5296(uParam2, iParam1, (iVar2 - iVar0)))
		{
			iVar4 = (__LIB_9__::func_483() - Global_1966106);
			__LIB_9__::func_604(iVar4, 1);
			__LIB_13__::func_362();
			__LIB_9__::func_602();
			Global_1966106 = (Global_1966106 + iVar4);
			if (iParam1 == 0)
			{
				__LIB_15__::func_272(iVar4);
				Global_2725354 = 1;
			}
			else if (iParam1 == 3)
			{
				__LIB_15__::func_271(iVar4);
				if (iVar4 >= Global_262145.f_27182 /* Tunable: -1684709496 */)
				{
					Global_2725353 = 1;
				}
				else if (iVar4 >= Global_262145.f_27181 /* Tunable: 1971152414 */)
				{
					Global_2725354 = 1;
				}
			}
			Var5.f_0 = __LIB_9__::func_596(iParam1);
			Var5.f_1 = __LIB_9__::func_595(iParam1, iParam3, iParam4);
			if (__LIB_9__::func_594(iParam1))
			{
				Var5.f_2 = iVar4;
			}
			else
			{
				Var5.f_2 = 0;
			}
			Var5.f_3 = iVar4;
			Var5.f_4 = iParam1;
			Var5.f_5 = (MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1) + MONEY::NETWORK_GET_VC_BANK_BALANCE());
			Var5.f_6 = Global_1966106;
			STATS::PLAYSTATS_CASINO_CHIP(&Var5);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_5296(var uParam0, int iParam1, int iParam2)//Position - 0x18A323
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	iVar0 = iParam2;
	iVar1 = 1;
	bVar2 = __LIB_9__::func_594(iParam1);
	if (!bVar2)
	{
		iVar0 = 0;
		iVar1 = 0;
	}
	if (*uParam0 == 3 || *uParam0 == 2)
	{
		*uParam0 = 0;
	}
	if (__LIB_0__::func_112())
	{
		if (*uParam0 == 0)
		{
			if (__LIB_3__::func_534() != -1)
			{
				return 0;
			}
			iVar3 = joaat("CASINO_CHIPS_v0");
			iVar4 = __LIB_9__::func_596(iParam1);
			iVar5 = joaat("NET_SHOP_ACTION_SELL_CASINO_CHIPS");
			if (__LIB_9__::func_605(iParam1))
			{
				iVar5 = joaat("NET_SHOP_ACTION_BUY_CASINO_CHIPS");
			}
			if (__LIB_10__::func_752(joaat("NET_SHOP_TTYPE_BASKET"), joaat("CATEGORY_CASINO_CHIPS"), iVar3, iVar5, iParam2, iVar1, 0, 4, 0, 3))
			{
				if (__LIB_10__::func_752(joaat("NET_SHOP_TTYPE_BASKET"), joaat("CATEGORY_CASINO_CHIP_REASON"), iVar4, iVar5, 1, 0, 0, 4, 0, 3))
				{
					if (__LIB_6__::func_360())
					{
						*uParam0 = 1;
					}
					else
					{
						*uParam0 = 3;
					}
				}
				else
				{
					*uParam0 = 3;
				}
			}
			else
			{
				*uParam0 = 3;
			}
		}
		else if (*uParam0 == 1)
		{
			if (__LIB_2__::func_835(__LIB_3__::func_534()))
			{
				if (__LIB_2__::func_834(__LIB_3__::func_534()) == 2)
				{
					NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(__LIB_1__::func_818(__LIB_3__::func_534()));
					if (__LIB_9__::func_605(iParam1))
					{
						MONEY::NETWORK_CASINO_BUY_CHIPS(iVar0, iParam2);
					}
					else
					{
						MONEY::NETWORK_CASINO_SELL_CHIPS(iVar0, iParam2);
					}
					*uParam0 = 2;
				}
				else
				{
					*uParam0 = 3;
				}
				__LIB_1__::func_34(__LIB_3__::func_534());
			}
		}
	}
	else if (iVar0 > 0 || MONEY::NETWORK_CAN_SPEND_MONEY(iVar0, false, true, false, -1, 0))
	{
		if (__LIB_9__::func_605(iParam1))
		{
			MONEY::NETWORK_CASINO_BUY_CHIPS(iVar0, iParam2);
		}
		else
		{
			MONEY::NETWORK_CASINO_SELL_CHIPS(iVar0, iParam2);
		}
		*uParam0 = 2;
	}
	else
	{
		*uParam0 = 3;
	}
	return *uParam0 != 1;
}

void func_5312(int* iParam0)//Position - 0x18B30F
{
	func_5316(iParam0);
	func_5315(iParam0);
	func_5313(iParam0);
	func_5021(iParam0);
	func_5134(iParam0, 1);
}

void func_5313(int* iParam0)//Position - 0x18B336
{
	iParam0->f_2750.f_7 = (iParam0->f_2750.f_7 + iParam0->f_800);
	iParam0->f_2750.f_8 = (iParam0->f_2750.f_8 + iParam0->f_801);
	iParam0->f_2750.f_12++;
	if (iParam0->f_795 > 0)
	{
		iParam0->f_2750.f_13++;
	}
	else if (func_5194(iParam0) > 0)
	{
		iParam0->f_2750.f_14++;
	}
	func_5314(iParam0);
}

void func_5314(int* iParam0)//Position - 0x18B3B2
{
	if (iParam0->f_795 > 0)
	{
		func_5245(iParam0, "win");
		return;
	}
	if (func_5194(iParam0) > 0)
	{
		func_5245(iParam0, "lose");
		return;
	}
	func_5245(iParam0, "no bet");
}

void func_5315(int* iParam0)//Position - 0x18B3F4
{
	int iVar0;
	iVar0 = func_4999();
	iParam0->f_2713.f_6 = (iVar0 - iParam0->f_798);
	iParam0->f_2713.f_7 = iVar0;
	iParam0->f_2713.f_17 = __LIB_1__::func_724(&(iParam0->f_2709), 0, 0);
	iParam0->f_2713.f_16 = 0;
	if (Global_262145.f_26813 /* Tunable: ENABLE_ROULETTE_HEAVY */ && func_5194(iParam0) > 0)
	{
		STATS::PLAYSTATS_CASINO_ROULETTE(&(iParam0->f_2713));
	}
	iParam0->f_2713.f_4 = MISC::GET_HASH_KEY("none" /* GXT: None */);
}

void func_5316(int* iParam0)//Position - 0x18B464
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	iParam0->f_2713.f_12 = iParam0->f_800;
	iParam0->f_2713.f_13 = iParam0->f_801;
	iParam0->f_2713.f_14 = iParam0->f_795;
	iParam0->f_2713.f_5 = func_5319(iParam0);
	iParam0->f_2713.f_15 = iParam0->f_795 > 0;
	iVar0 = func_4823(iParam0, iParam0->f_12);
	iParam0->f_2713.f_35 = iVar0;
	iParam0->f_2713.f_36 = func_5317(iVar0);
	iParam0->f_2713.f_17 = __LIB_1__::func_724(&(iParam0->f_2709), 0, 0);
	iParam0->f_2713.f_7 = func_4999();
	func_5314(iParam0);
	iVar1 = 0;
	iVar2 = PLAYER::PLAYER_ID();
	iVar1 = 0;
	while (iVar1 < 10)
	{
		iVar3 = iParam0->f_1652[iVar2 /*33*/].f_4[iVar1 /*2*/];
		iVar4 = func_5041(iVar3);
		switch (iVar4)
		{
			case 0:
				iParam0->f_2713.f_21 = 1;
				break;
			case 1:
				iParam0->f_2713.f_22 = 1;
				break;
			case 2:
				iParam0->f_2713.f_23 = 1;
				break;
			case 3:
				break;
			case 4:
				iParam0->f_2713.f_24 = 1;
				break;
			case 5:
				iParam0->f_2713.f_25 = 1;
				break;
			case 6:
				iParam0->f_2713.f_26 = 1;
				break;
			case 7:
				iParam0->f_2713.f_27 = 1;
				break;
			case 8:
				iParam0->f_2713.f_28 = 1;
				break;
			case 9:
				iParam0->f_2713.f_29 = 1;
				break;
			case 10:
				iParam0->f_2713.f_30 = 1;
				break;
			case 11:
				iParam0->f_2713.f_31 = 1;
				break;
			case 12:
				iParam0->f_2713.f_32 = 1;
				break;
			case 13:
			case 14:
			case 15:
				iParam0->f_2713.f_33 = 1;
				break;
			case 16:
			case 17:
			case 18:
				iParam0->f_2713.f_34 = 1;
				break;
		}
		iVar1++;
	}
	iVar5 = iParam0->f_12;
	if (iVar5 <= -1)
	{
		return;
	}
	iParam0->f_2713.f_9 = iParam0->f_1357.f_28[iVar5];
	iParam0->f_2713.f_3 = iParam0->f_1357.f_21[iVar5];
}

int func_5317(int iParam0)//Position - 0x18B66E
{
	int iVar0;
	iVar0 = func_5039(iParam0);
	return func_5318(iVar0);
}

int func_5318(int iParam0)//Position - 0x18B684
{
	int iVar0;
	iVar0 = func_5063(iParam0);
	switch (iVar0)
	{
		case 8:
			return MISC::GET_HASH_KEY("black" /* GXT: Black */);
		case 7:
			return MISC::GET_HASH_KEY("red" /* GXT: Red */);
		default:
	}
	return MISC::GET_HASH_KEY("green" /* GXT: Green */);
}

bool func_5319(var uParam0)//Position - 0x18B6C8
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	iVar0 = uParam0->f_800;
	iVar1 = uParam0->f_801;
	iVar2 = func_5145(uParam0);
	iVar3 = func_5142(uParam0);
	bVar4 = iVar0 >= iVar2;
	bVar5 = iVar1 >= iVar3;
	return (bVar4 && bVar5);
}

int func_5322(int* iParam0)//Position - 0x18B719
{
	int iVar0;
	iVar0 = iParam0->f_12;
	if (!func_25(iVar0))
	{
		return 1;
	}
	return func_4795(iParam0, iVar0);
}

void func_5323(int* iParam0)//Position - 0x18B73D
{
	bool bVar0;
	bool bVar1;
	bVar0 = func_5246(iParam0);
	bVar1 = ((PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/) && !bVar0) && func_5194(iParam0) <= 0);
	if (bVar1)
	{
		func_5245(iParam0, "quit");
	}
	if (bVar1)
	{
		func_5244(iParam0, 7, 1624093/*func_5384*/, 1592350/*func_5184*/);
		return;
	}
	if (func_80(iParam0, iParam0->f_12, MISC::GET_HASH_KEY("READY_UP_START"), 0))
	{
		func_5383(iParam0, 1);
	}
	if (__LIB_16__::func_174(iParam0))
	{
		func_5374(iParam0);
	}
	else
	{
		func_5239(iParam0, 1);
	}
	func_5367(iParam0);
	if (!bVar0)
	{
		func_5364(iParam0);
	}
	if (__LIB_40__::func_974(&(iParam0->f_1212[iParam0->f_12 /*23*/])) || func_5363(iParam0))
	{
		func_5244(iParam0, 5, 1624093/*func_5384*/, 1619975/*func_5324*/);
	}
}

void func_5324(int* iParam0)//Position - 0x18B807
{
	int iVar0;
	iParam0->f_795 = func_5343(iParam0);
	iVar0 = (iParam0->f_795 - func_5194(iParam0));
	iParam0->f_796 = (iParam0->f_796 + iVar0);
	if (iVar0 < 0)
	{
		func_5341(MISC::ABSI(iVar0));
		iParam0->f_803++;
	}
	else if (iVar0 > 0)
	{
		__LIB_0__::func_467(iVar0);
		func_5339();
		iParam0->f_803 = 0;
	}
	if (func_5338() && func_5336(iParam0))
	{
		func_5327(iParam0);
	}
	func_5325(iParam0);
	func_5134(iParam0, 1);
	__LIB_0__::func_794(&(iParam0->f_9));
	__LIB_0__::func_795(&(iParam0->f_9), 0, 0);
}

void func_5325(int* iParam0)//Position - 0x18B8A1
{
	int iVar0;
	int iVar1;
	char* sVar2;
	struct<3> Var3;
	struct<3> Var4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	iVar0 = func_5012(iParam0, iParam0->f_12);
	if (!__LIB_0__::func_121(iVar0))
	{
		return;
	}
	iVar1 = func_4944(iParam0);
	sVar2 = func_5011(iVar1);
	Var3 = { __LIB_31__::func_836(iVar0, sVar2) };
	Var4 = { __LIB_31__::func_835(iVar0, sVar2, 1) };
	sVar5 = func_5326(iVar1);
	sVar6 = __LIB_16__::func_152(0);
	iVar7 = iParam0->f_772;
	CAM::PLAY_CAM_ANIM(iVar7, sVar5, sVar6, Var3, Var4, false, 2);
}

char* func_5326(int iParam0)//Position - 0x18B916
{
	switch (iParam0)
	{
		case 0:
			return "REACTION_BAD_VAR03_SEAT1_Cam";
		case 1:
			return "REACTION_BAD_VAR03_SEAT2_Cam";
		case 2:
			return "REACTION_BAD_VAR03_SEAT3_Cam";
		case 3:
			return "REACTION_BAD_VAR03_SEAT4_Cam";
		default:
	}
	return "REACTION_BAD_VAR03_SEAT1_Cam";
}

void func_5327(int* iParam0)//Position - 0x18B962
{
	struct<6> Var0;
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = 1090519040;
	Var0.f_3 = -998637568;
	Var0.f_5 = 1065353216;
	func_5328(iParam0, &Var0);
	func_5010(iParam0, &Var0);
}

void func_5328(var uParam0, var uParam1)//Position - 0x18B9A5
{
	*uParam1 = func_5332(uParam0);
	uParam1->f_1 = 0;
	uParam1->f_6 = func_5329(uParam0, *uParam1);
	uParam1->f_8 = 1;
	uParam1->f_2 = 4f;
	uParam1->f_3 = -2f;
	uParam1->f_9 = 13;
}

int func_5329(var uParam0, int iParam1)//Position - 0x18B9E1
{
	int iVar0;
	int iVar1;
	iVar0 = func_5331(iParam1);
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0);
	switch (iParam1)
	{
		case 10:
			func_5330(&iVar1, &(uParam0->f_1352), iVar0);
			break;
		case 8:
			func_5330(&iVar1, &(uParam0->f_1351), iVar0);
			break;
		case 7:
			func_5330(&iVar1, &(uParam0->f_1356), iVar0);
			break;
		case 12:
			func_5330(&iVar1, &(uParam0->f_1355), iVar0);
			break;
		case 9:
			func_5330(&iVar1, &(uParam0->f_1353), iVar0);
			break;
		case 11:
			func_5330(&iVar1, &(uParam0->f_1354), iVar0);
			break;
	}
	return iVar1;
}

void func_5330(int iParam0, var uParam1, int iParam2)//Position - 0x18BA87
{
	if (*iParam0 != *uParam1)
	{
		*uParam1 = *iParam0;
		return;
	}
	*iParam0 = __LIB_4__::func_892(*iParam0 + 1, iParam2);
	*uParam1 = *iParam0;
}

int func_5331(int iParam0)//Position - 0x18BAB5
{
	switch (iParam0)
	{
		case 9:
			return 4;
		case 8:
			return 4;
		case 7:
			return 3;
		case 10:
			return 4;
		case 11:
			return 4;
		case 12:
			return 4;
		default:
	}
	return 0;
}

int func_5332(var uParam0)//Position - 0x18BB01
{
	switch (uParam0->f_1199)
	{
		case 15:
			return func_5334(uParam0);
		case 14:
			return func_5333(uParam0);
		case 13:
			return 7;
		default:
	}
	return 7;
}

int func_5333(var uParam0)//Position - 0x18BB3C
{
	if (uParam0->f_795 > 0)
	{
		return 8;
	}
	return 10;
}

int func_5334(var uParam0)//Position - 0x18BB54
{
	if (BitTest(*uParam0, 22))
	{
		return 9;
	}
	if (func_5335(uParam0))
	{
		return 11;
	}
	return 12;
}

bool func_5335(var uParam0)//Position - 0x18BB7A
{
	if (!BitTest(*uParam0, 23))
	{
		return 0;
	}
	if (BitTest(*uParam0, 24))
	{
		return 1;
	}
	if (func_4999() < func_4987(uParam0->f_12))
	{
		return 1;
	}
	return uParam0->f_803 >= 4;
}

var func_5336(int* iParam0)//Position - 0x18BBB7
{
	int iVar0;
	iVar0 = func_4944(iParam0);
	return ((func_5337(18, 0, iVar0, 0) || func_5337(17, 0, iVar0, 0)) || func_5337(16, 0, iVar0, 0));
}

bool func_5337(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x18BBF1
{
	char* sVar0;
	char* sVar1;
	if (!__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	sVar0 = __LIB_16__::func_152(iParam1);
	sVar1 = func_4929(iParam0, iParam3, iParam2);
	return ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sVar0, sVar1, 3);
}

bool func_5338()//Position - 0x18BC2A
{
	return ((!func_5337(4, 1, 0, 0) && !func_5337(3, 1, 0, 0)) && !func_5337(2, 1, 0, 0));
}

void func_5339()//Position - 0x18BC57
{
	AUDIO::PLAY_SOUND_FRONTEND(-1, __LIB_31__::func_830(21, 0), __LIB_16__::func_157(1), true);
}

void func_5341(int iParam0)//Position - 0x18BC79
{
	__LIB_16__::func_182(iParam0);
}

int func_5343(int* iParam0)//Position - 0x18BD00
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;
	int iVar6;
	iVar0 = func_4823(iParam0, iParam0->f_12);
	if (iVar0 == -1)
	{
		return 0;
	}
	iVar1 = func_5039(iVar0);
	iVar2 = PLAYER::PLAYER_ID();
	iVar3 = 0;
	iVar4 = 0;
	func_5362(iParam0);
	SECURITY::FORCE_CHECK_SCRIPT_VARIABLES();
	iVar4 = 0;
	while (iVar4 < 10)
	{
		Var5 = { iParam0->f_1652[iVar2 /*33*/].f_4[iVar4 /*2*/] };
		iVar6 = func_5346(&Var5, iVar1);
		iVar3 = (iVar3 + iVar6);
		func_5344(iParam0, &Var5, iVar6, iVar1);
		iVar4++;
	}
	return iVar3;
}

void func_5344(int* iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x18BD83
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	iVar0 = func_5041(*uParam1);
	if (iVar0 != 0)
	{
		return;
	}
	iVar1 = func_5038(*uParam1);
	uVar2 = func_5345(iVar1, iParam3);
	iVar3 = func_5146(iParam0->f_12);
	bVar4 = uParam1->f_1 >= iVar3;
	bVar5 = iParam2 > 0;
	if (!bVar5 && bVar4)
	{
		MISC::SET_BIT(iParam0, 23);
	}
	if (!bVar5 && uVar2)
	{
		MISC::SET_BIT(iParam0, 24);
	}
	if (bVar5 && bVar4)
	{
		MISC::SET_BIT(iParam0, 22);
	}
}

bool func_5345(int iParam0, int iParam1)//Position - 0x18BE07
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_4__::func_892((iParam0 - 1), 37);
	iVar1 = __LIB_4__::func_892(iParam0 + 1, 37);
	return (iVar0 == iParam1 || iVar1 == iParam1);
}

int func_5346(var uParam0, int iParam1)//Position - 0x18BE37
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = func_5041(*uParam0);
	switch (iVar1)
	{
		case -1:
			return iVar0;
		case 0:
			iVar0 = func_5361(*uParam0, iParam1);
			break;
		case 1:
			iVar0 = func_5360(*uParam0, iParam1);
			break;
		case 2:
			iVar0 = func_5359(*uParam0, iParam1);
			break;
		case 3:
			iVar0 = func_5358(*uParam0, iParam1);
			break;
		case 4:
			iVar0 = func_5357(*uParam0, iParam1);
			break;
		case 5:
			iVar0 = func_5356(*uParam0, iParam1);
			break;
		case 6:
			iVar0 = func_5354(*uParam0, iParam1);
			break;
		case 7:
			iVar0 = func_5353(*uParam0, iParam1, 7);
			break;
		case 8:
			iVar0 = func_5353(*uParam0, iParam1, 8);
			break;
		case 9:
			iVar0 = func_5352(*uParam0, iParam1);
			break;
		case 10:
			iVar0 = func_5351(*uParam0, iParam1);
			break;
		case 11:
			iVar0 = func_5350(*uParam0, iParam1, 11);
			break;
		case 12:
			iVar0 = func_5350(*uParam0, iParam1, 12);
			break;
		case 13:
			iVar0 = func_5350(*uParam0, iParam1, 13);
			break;
		case 14:
			iVar0 = func_5350(*uParam0, iParam1, 14);
			break;
		case 15:
			iVar0 = func_5350(*uParam0, iParam1, 15);
			break;
		case 16:
			iVar0 = func_5347(*uParam0, iParam1, 16);
			break;
		case 17:
			iVar0 = func_5347(*uParam0, iParam1, 17);
			break;
		case 18:
			iVar0 = func_5347(*uParam0, iParam1, 18);
			break;
	}
	return iVar0;
}

int func_5347(struct<2> Param0, int iParam1, int iParam2)//Position - 0x18C003
{
	switch (iParam2)
	{
		case 16:
		case 17:
		case 18:
			if (func_5050(iParam1, iParam2))
			{
				return func_5348(Param0.f_1, iParam2);
			}
			break;
		default:
			return 0;
	}
	return 0;
}

int func_5348(int iParam0, int iParam1)//Position - 0x18C044
{
	int iVar0;
	iVar0 = func_5349(iParam1);
	return (iParam0 + (iParam0 * iVar0));
}

int func_5349(int iParam0)//Position - 0x18C05C
{
	switch (iParam0)
	{
		case 0:
			return 35;
		case 1:
			return 17;
		case 2:
			return 11;
		case 3:
			return 11;
		case 4:
			return 8;
		case 5:
			return 6;
		case 6:
			return 5;
		case 7:
		case 8:
			return 1;
		case 9:
		case 10:
			return 1;
		case 11:
		case 12:
			return 1;
		case 13:
		case 14:
		case 15:
			return 2;
		case 16:
		case 17:
		case 18:
			return 2;
		default:
	}
	return 0;
}

int func_5350(struct<2> Param0, int iParam1, int iParam2)//Position - 0x18C113
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	func_5055(&iVar0, &iVar1, iParam2);
	if (func_5053(iParam1, iVar0, iVar1))
	{
		return func_5348(Param0.f_1, iParam2);
	}
	return 0;
}

int func_5351(struct<2> Param0, int iParam1)//Position - 0x18C146
{
	if (func_5057(iParam1))
	{
		return func_5348(Param0.f_1, 10);
	}
	return 0;
}

int func_5352(struct<2> Param0, int iParam1)//Position - 0x18C165
{
	if (func_5060(iParam1))
	{
		return func_5348(Param0.f_1, 9);
	}
	return 0;
}

int func_5353(struct<2> Param0, int iParam1, int iParam2)//Position - 0x18C184
{
	if (iParam2 != 7 && iParam2 != 8)
	{
		return 0;
	}
	if (func_5063(iParam1) == iParam2)
	{
		return func_5348(Param0.f_1, iParam2);
	}
	return 0;
}

int func_5354(struct<2> Param0, int iParam1)//Position - 0x18C1BA
{
	var uVar0;
	uVar0 = 6;
	func_5064(&uVar0, Param0.f_0);
	if (func_5355(&uVar0, iParam1))
	{
		return (Param0.f_1 + Param0.f_1 * 5);
	}
	return 0;
}

int func_5355(var uParam0, int iParam1)//Position - 0x18C1E9
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = *uParam0;
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_5356(struct<2> Param0, int iParam1)//Position - 0x18C21C
{
	var uVar0;
	uVar0 = 5;
	func_5088(&uVar0);
	if (func_5355(&uVar0, iParam1))
	{
		return (Param0.f_1 + Param0.f_1 * 6);
	}
	return 0;
}

int func_5357(struct<2> Param0, int iParam1)//Position - 0x18C249
{
	var uVar0;
	uVar0 = 4;
	func_5089(&uVar0, Param0.f_0);
	if (func_5355(&uVar0, iParam1))
	{
		return (Param0.f_1 + Param0.f_1 * 8);
	}
	return 0;
}

int func_5358(struct<2> Param0, int iParam1)//Position - 0x18C278
{
	var uVar0;
	uVar0 = 3;
	func_5090(&uVar0, Param0.f_0);
	if (func_5355(&uVar0, iParam1))
	{
		return (Param0.f_1 + Param0.f_1 * 11);
	}
	return 0;
}

int func_5359(struct<2> Param0, int iParam1)//Position - 0x18C2A7
{
	var uVar0;
	uVar0 = 3;
	func_5091(&uVar0, Param0.f_0);
	if (func_5355(&uVar0, iParam1))
	{
		return (Param0.f_1 + Param0.f_1 * 11);
	}
	return 0;
}

int func_5360(struct<2> Param0, int iParam1)//Position - 0x18C2D6
{
	var uVar0;
	uVar0 = 2;
	func_5092(&uVar0, Param0.f_0);
	if (func_5355(&uVar0, iParam1))
	{
		return (Param0.f_1 + Param0.f_1 * 17);
	}
	return 0;
}

int func_5361(struct<2> Param0, int iParam1)//Position - 0x18C305
{
	int iVar0;
	iVar0 = func_5038(Param0.f_0);
	if (iVar0 == iParam1)
	{
		return (Param0.f_1 + Param0.f_1 * 35);
	}
	return 0;
}

void func_5362(int* iParam0)//Position - 0x18C32B
{
	MISC::CLEAR_BIT(iParam0, 23);
	MISC::CLEAR_BIT(iParam0, 24);
	MISC::CLEAR_BIT(iParam0, 22);
}

bool func_5363(int* iParam0)//Position - 0x18C34B
{
	int iVar0;
	iVar0 = iParam0->f_12;
	return (iParam0->f_1212[iVar0 /*23*/].f_10.f_4 == -1 && __LIB_40__::func_976(&(iParam0->f_1212[iVar0 /*23*/]), 1065353216));
}

void func_5364(int* iParam0)//Position - 0x18C37F
{
	if (func_5222(iParam0))
	{
		return;
	}
	if (func_5221(iParam0))
	{
		func_5366(iParam0);
	}
	func_5201(iParam0);
	if (!func_5197(iParam0))
	{
		func_5365();
	}
}

void func_5365()//Position - 0x18C3B6
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(func_5191(38));
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, false, -1);
}

void func_5366(int* iParam0)//Position - 0x18C3D0
{
	__LIB_1__::func_539(&(iParam0->f_20));
	if (func_5194(iParam0) <= 0)
	{
		func_5218(iParam0);
	}
	if (!func_5176(iParam0))
	{
		func_5217(iParam0);
		func_5226(iParam0);
	}
	func_5215(iParam0);
	func_5213(iParam0);
}

void func_5367(int* iParam0)//Position - 0x18C412
{
	PLAYER::DISABLE_CAMERA_VIEW_MODE_CYCLE(PLAYER::PLAYER_ID());
	func_5371(iParam0);
	if (func_5368(iParam0))
	{
		return;
	}
	if (func_5237(iParam0))
	{
		return;
	}
	if (func_5165(iParam0, 0))
	{
		func_5162(iParam0, 2);
	}
	func_5224(iParam0, 0);
}

int func_5368(int* iParam0)//Position - 0x18C459
{
	if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 207 /*INPUT_FRONTEND_LT*/))
	{
		if (func_5179(iParam0))
		{
			return 0;
		}
		func_5370();
		func_5369(iParam0, 0, iParam0->f_12, 1);
		if (iParam0->f_773 != 1)
		{
			func_5162(iParam0, 1);
			func_5225(iParam0);
		}
		return 1;
	}
	else if (iParam0->f_773 == 1)
	{
		func_5018();
		func_5236(iParam0, 1);
		func_5225(iParam0);
	}
	func_5369(iParam0, 0, iParam0->f_12, 0);
	return 0;
}

void func_5369(int* iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x18C4CC
{
	int iVar0;
	int iVar1;
	iVar0 = func_58(iParam1, iParam2);
	iVar1 = func_4812(iParam0, iVar0);
	if (iVar1 == __LIB_0__::func_162())
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
	{
		return;
	}
	if (bParam3)
	{
		NETWORK::SET_PLAYER_INVISIBLE_LOCALLY(iVar1, false);
		return;
	}
	NETWORK::SET_PLAYER_VISIBLE_LOCALLY(iVar1, false);
}

void func_5370()//Position - 0x18C51B
{
	if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_VW_Casino_Roulette_Focus_Wheel"))
	{
		AUDIO::START_AUDIO_SCENE("DLC_VW_Casino_Roulette_Focus_Wheel");
	}
}

void func_5371(int* iParam0)//Position - 0x18C53A
{
	float fVar0;
	iParam0->f_784 = (iParam0->f_784 + MISC::GET_FRAME_TIME());
	fVar0 = __LIB_11__::func_102(iParam0->f_784, 0f, iParam0->f_783, 0f, 1f);
	if (fVar0 > 1f)
	{
		return;
	}
	iParam0->f_781 = __LIB_0__::func_504(iParam0->f_782, 40f, fVar0);
	if (func_5165(iParam0, 1))
	{
		CAM::SET_CAM_FOV(iParam0->f_771, iParam0->f_781);
	}
}

void func_5374(int* iParam0)//Position - 0x18C5CC
{
	switch (iParam0->f_1202)
	{
		case 15:
		case 14:
		case 13:
			if (func_4928(iParam0, 1063675494))
			{
				func_5379(iParam0);
			}
			break;
		case 16:
		case 17:
		case 18:
			return;
		default:
			func_5375(iParam0);
			break;
	}
}

void func_5375(int* iParam0)//Position - 0x18C625
{
	struct<6> Var0;
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = 1090519040;
	Var0.f_3 = -998637568;
	Var0.f_5 = 1065353216;
	func_5376(iParam0, &Var0);
	iParam0->f_1199 = Var0.f_0;
	func_5010(iParam0, &Var0);
}

void func_5376(int* iParam0, var uParam1)//Position - 0x18C66F
{
	*uParam1 = func_5377(iParam0);
	uParam1->f_1 = 0;
	uParam1->f_6 = 0;
	uParam1->f_8 = 1;
	uParam1->f_2 = 2f;
	uParam1->f_3 = -2f;
	uParam1->f_9 = 13;
}

int func_5377(int* iParam0)//Position - 0x18C6A3
{
	int iVar0;
	func_5378(iParam0);
	if (BitTest(*iParam0, 25))
	{
		return 15;
	}
	iVar0 = func_5194(iParam0);
	if (iVar0 > 0)
	{
		return 14;
	}
	return 13;
}

void func_5378(int* iParam0)//Position - 0x18C6D4
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<2> Var3;
	int iVar4;
	MISC::CLEAR_BIT(iParam0, 25);
	iVar0 = func_5146(iParam0->f_12);
	iVar1 = PLAYER::PLAYER_ID();
	iVar2 = 0;
	while (iVar2 < 10)
	{
		Var3 = { iParam0->f_1652[iVar1 /*33*/].f_4[iVar2 /*2*/] };
		if (Var3.f_0 == -1)
		{
		}
		else
		{
			iVar4 = func_5041(Var3.f_0);
			if (iVar4 == 0 && Var3.f_1 >= iVar0)
			{
				MISC::SET_BIT(iParam0, 25);
			}
		}
		iVar2++;
	}
}

void func_5379(int* iParam0)//Position - 0x18C748
{
	struct<6> Var0;
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = 1090519040;
	Var0.f_3 = -998637568;
	Var0.f_5 = 1065353216;
	func_5380(iParam0, &Var0);
	func_5010(iParam0, &Var0);
}

void func_5380(var uParam0, var uParam1)//Position - 0x18C78B
{
	*uParam1 = func_5381(uParam0);
	uParam1->f_1 = 0;
	uParam1->f_7 = 1;
	uParam1->f_2 = 2f;
	uParam1->f_3 = -2f;
	uParam1->f_9 = 77;
}

int func_5381(var uParam0)//Position - 0x18C7BA
{
	switch (uParam0->f_1199)
	{
		case 15:
			return 18;
		case 14:
			return 17;
		case 13:
			return 16;
		default:
	}
	return 16;
}

void func_5383(int* iParam0, bool bParam1)//Position - 0x18C7FD
{
	if (bParam1)
	{
		MISC::SET_BIT(iParam0, 16);
		return;
	}
	MISC::CLEAR_BIT(iParam0, 16);
}

void func_5384(int* iParam0)//Position - 0x18C81D
{
	func_5018();
	func_5383(iParam0, 0);
}

void func_5385(int* iParam0)//Position - 0x18C830
{
	int iVar0;
	iVar0 = func_5194(iParam0);
	switch (func_5405(iVar0))
	{
		case 3:
			func_5398(iParam0);
			func_5244(iParam0, 7, 447, 1592350/*func_5184*/);
			return;
		case 2:
			func_5398(iParam0);
			func_5244(iParam0, 4, 1624274/*func_5388*/, 1624252/*func_5387*/);
			return;
		case 1:
		case 0:
			func_5386(iParam0, 1);
			break;
	}
}

void func_5386(int* iParam0, bool bParam1)//Position - 0x18C89C
{
	if (bParam1)
	{
		MISC::SET_BIT(iParam0, 27);
		return;
	}
	MISC::CLEAR_BIT(iParam0, 27);
}

void func_5387(int* iParam0)//Position - 0x18C8BC
{
	func_5134(iParam0, 1);
	func_5383(iParam0, 0);
}

void func_5388(int* iParam0)//Position - 0x18C8D2
{
	int iVar0;
	func_5390(iParam0);
	iVar0 = func_5194(iParam0);
	if (iVar0 <= 0)
	{
		iParam0->f_799++;
	}
	else
	{
		iParam0->f_799 = 0;
	}
	ENTITY::SET_ENTITY_VISIBLE(iParam0->f_817, false, false);
	func_5097(iParam0);
	func_5389(iParam0);
	func_5398(iParam0);
}

void func_5389(int* iParam0)//Position - 0x18C920
{
	int iVar0;
	var uVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	int iVar5;
	char* sVar6;
	float fVar7;
	float fVar8;
	var uVar9;
	float fVar10;
	int iVar11;
	float fVar12;
	iVar0 = func_4944(iParam0);
	uVar1 = func_5168(1, iVar0);
	iParam0->f_781 = uVar1;
	iParam0->f_782 = uVar1;
	iVar2 = iParam0->f_12;
	if (!func_25(iVar2))
	{
		return;
	}
	sVar3 = __LIB_16__::func_152(4);
	iVar4 = func_4823(iParam0, iVar2);
	iVar5 = __LIB_16__::func_166(iVar4);
	sVar6 = __LIB_31__::func_837(34, iVar5);
	fVar7 = ENTITY::GET_ANIM_DURATION(sVar3, sVar6);
	ENTITY::FIND_ANIM_EVENT_PHASE(sVar3, sVar6, "end_result", &fVar8, &uVar9);
	fVar10 = (fVar7 * fVar8);
	iVar11 = __LIB_42__::func_953(&(iParam0->f_1212[iParam0->f_12 /*23*/]));
	fVar12 = iParam0->f_1212[iVar2 /*23*/].f_10;
	iParam0->f_783 = ((IntToFloat(iVar11) - fVar12) / 1000f);
	iParam0->f_783 = (iParam0->f_783 + fVar10);
	iParam0->f_784 = 0f;
}

void func_5390(var uParam0)//Position - 0x18C9E2
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	bVar0 = false;
	bVar1 = !func_5397(uParam0);
	iVar2 = 0;
	iVar3 = PLAYER::PLAYER_ID();
	iVar4 = -1;
	bVar5 = false;
	iVar2 = 0;
	while (iVar2 < 10)
	{
		iVar4 = uParam0->f_1652[iVar3 /*33*/].f_4[iVar2 /*2*/];
		bVar5 = func_5396(iVar4);
		bVar0 = !func_5395(uParam0, iVar3, iVar2);
		if ((bVar0 && !bVar5) || (bVar1 && bVar5))
		{
			func_5391(uParam0, iVar2, iVar3);
		}
		iVar2++;
	}
}

void func_5391(var uParam0, int iParam1, int iParam2)//Position - 0x18CA64
{
	int iVar0;
	int iVar1;
	if (func_5396(uParam0->f_1652[iParam2 /*33*/].f_4[iParam1 /*2*/]))
	{
		func_5394(&(uParam0->f_800), -uParam0->f_1652[iParam2 /*33*/].f_4[iParam1 /*2*/].f_1);
	}
	else
	{
		func_5394(&(uParam0->f_801), -uParam0->f_1652[iParam2 /*33*/].f_4[iParam1 /*2*/].f_1);
	}
	iVar0 = 0;
	iVar1 = 0;
	func_4811(uParam0->f_1652[iParam2 /*33*/].f_4[iParam1 /*2*/], &iVar0, &iVar1);
	func_5392(uParam0, iVar0, iVar1);
	uParam0->f_1652[iParam2 /*33*/].f_4[iParam1 /*2*/] = -1;
	uParam0->f_1652[iParam2 /*33*/].f_4[iParam1 /*2*/].f_1 = 0;
}

void func_5392(var uParam0, int iParam1, int iParam2)//Position - 0x18CB04
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	iVar0 = func_5393(iParam1, iParam2);
	iVar1 = 0;
	iVar2 = 0;
	iVar3 = 0;
	iVar4 = PLAYER::PLAYER_ID();
	iVar5 = -1;
	iVar1 = 0;
	while (iVar1 < 10)
	{
		MISC::COPY_SCRIPT_STRUCT(&iVar5, &(uParam0->f_1652[iVar4 /*33*/].f_4[iVar1 /*2*/]), 2);
		if (iVar5 != -1)
		{
			func_4811(iVar5, &iVar2, &iVar3);
			if (iVar2 != iParam1 && iVar3 != iParam2)
			{
				if (func_4807(iVar2, iVar3, iVar0))
				{
					return;
				}
			}
		}
		iVar1++;
	}
	MISC::CLEAR_BIT(&(uParam0->f_1652[iVar4 /*33*/].f_2), iVar0);
}

int func_5393(int iParam0, int iParam1)//Position - 0x18CB98
{
	if (func_4808(iParam0, iParam1))
	{
		return 3;
	}
	else if (func_4809(iParam0, iParam1))
	{
		return 2;
	}
	else if (func_4810(iParam0, iParam1))
	{
		return 1;
	}
	return -1;
}

void func_5394(var uParam0, int iParam1)//Position - 0x18CBD4
{
	*uParam0 = (*uParam0 + iParam1);
	*uParam0 = __LIB_1__::func_723(*uParam0, 0);
}

bool func_5395(var uParam0, int iParam1, int iParam2)//Position - 0x18CBF0
{
	int iVar0;
	iVar0 = uParam0->f_1652[iParam1 /*33*/].f_4[iParam2 /*2*/].f_1;
	return (iVar0 <= 0 || iVar0 >= func_5144(uParam0));
}

bool func_5396(int iParam0)//Position - 0x18CC1E
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	func_4811(iParam0, &iVar0, &iVar1);
	return func_5148(iVar0, iVar1);
}

bool func_5397(var uParam0)//Position - 0x18CC3E
{
	return (uParam0->f_800 <= 0 || uParam0->f_800 >= func_5147(uParam0));
}

void func_5398(int* iParam0)//Position - 0x18CC5F
{
	bool bVar0;
	if (func_5404(iParam0))
	{
		func_5402(iParam0);
	}
	bVar0 = func_5401(iParam0);
	if (bVar0)
	{
		func_5399(iParam0);
	}
	if ((func_5221(iParam0) || bVar0) && !func_5222(iParam0))
	{
		func_5225(iParam0);
	}
}

void func_5399(int* iParam0)//Position - 0x18CCAC
{
	iParam0->f_802 = func_5400(iParam0, iParam0->f_811, iParam0->f_812);
	func_5159(iParam0, 0);
}

int func_5400(var uParam0, int iParam1, int iParam2)//Position - 0x18CCD0
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = func_5096(iParam1, iParam2);
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 10)
	{
		if (uParam0->f_1652[iVar0 /*33*/].f_4[iVar2 /*2*/] == iVar1)
		{
			return uParam0->f_1652[iVar0 /*33*/].f_4[iVar2 /*2*/].f_1;
		}
		iVar2++;
	}
	return 0;
}

bool func_5401(int* iParam0)//Position - 0x18CD27
{
	return (BitTest(*iParam0, 2) || PAD::HAVE_CONTROLS_CHANGED(0 /*PLAYER_CONTROL*/));
}

void func_5402(int* iParam0)//Position - 0x18CD3F
{
	if (!func_5397(iParam0))
	{
		MISC::SET_BIT(iParam0, 4);
	}
	else
	{
		MISC::CLEAR_BIT(iParam0, 4);
	}
	if (!func_5403(iParam0))
	{
		MISC::SET_BIT(iParam0, 5);
	}
	else
	{
		MISC::CLEAR_BIT(iParam0, 5);
	}
	__LIB_18__::func_763(iParam0, 0);
}

int func_5403(int* iParam0)//Position - 0x18CD84
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = PLAYER::PLAYER_ID();
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!func_5396(iParam0->f_1652[iVar1 /*33*/].f_4[iVar0 /*2*/]))
		{
			if (!func_5395(iParam0, iVar1, iVar0))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

bool func_5404(var uParam0)//Position - 0x18CDD2
{
	return BitTest(*uParam0, 3);
}

int func_5405(int iParam0)//Position - 0x18CDDF
{
	if (iParam0 <= 0)
	{
		return 2;
	}
	func_5406(iParam0, &uLocal_110, 3, 0);
	return uLocal_110;
}

int func_5406(int iParam0, var uParam1, int iParam2, bool bParam3)//Position - 0x18CDFE
{
	if (__LIB_0__::func_112() && *uParam1 == 1)
	{
		bParam3 = false;
	}
	if (!bParam3 || __LIB_31__::func_858(iParam0))
	{
		return func_5407(iParam0, 2, uParam1, iParam2, -1, -1);
	}
	else
	{
		*uParam1 = 3;
	}
	return 1;
}

int func_5407(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5)//Position - 0x18CE44
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<8> Var3;
	if (iParam0 <= 0)
	{
	}
	else if (__LIB_9__::func_605(iParam1))
	{
	}
	else
	{
		iVar0 = __LIB_9__::func_483();
		iVar1 = (iVar0 - iParam0);
		if (iVar1 < 0 && (!__LIB_0__::func_112() || *uParam2 != 1))
		{
			iVar1 = iVar0;
			iParam0 = iVar0;
		}
		if (func_5296(uParam2, iParam1, iParam0))
		{
			iVar2 = (Global_1966106 - __LIB_9__::func_483());
			if (iParam1 == 1)
			{
				Global_2725353 = 1;
			}
			else if (iVar2 >= Global_262145.f_27183 /* Tunable: 1906061901 */)
			{
				Global_2725354 = 1;
			}
			__LIB_9__::func_604(iVar2, 0);
			__LIB_13__::func_362();
			__LIB_9__::func_602();
			Global_1966106 = (Global_1966106 - iVar2);
			Var3.f_0 = __LIB_9__::func_596(iParam1);
			Var3.f_1 = __LIB_9__::func_595(iParam1, iParam3, iParam4);
			if (__LIB_9__::func_594(iParam1))
			{
				Var3.f_2 = iVar2;
			}
			else
			{
				Var3.f_2 = 0;
			}
			Var3.f_3 = iVar2;
			Var3.f_4 = iParam1;
			Var3.f_5 = (MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1) + MONEY::NETWORK_GET_VC_BANK_BALANCE());
			Var3.f_6 = Global_1966106;
			Var3.f_7 = iParam5;
			STATS::PLAYSTATS_CASINO_CHIP(&Var3);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_5409(int* iParam0)//Position - 0x18CF6B
{
	bool bVar0;
	bool bVar1;
	bVar0 = func_5246(iParam0);
	bVar1 = (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/) && !bVar0);
	if (bVar1)
	{
		func_5245(iParam0, "quit");
	}
	if (bVar1 || func_5185(iParam0))
	{
		func_5244(iParam0, 7, 447, 1592350/*func_5184*/);
		return;
	}
	func_5386(iParam0, ((bVar0 || !func_5165(iParam0, 0)) || func_4814(iParam0, iParam0->f_12, 23, 0)));
	if (func_5183(iParam0) == 4)
	{
		func_5244(iParam0, 3, 1624274/*func_5388*/, 439);
	}
	func_5239(iParam0, 1);
	if (func_5473(iParam0))
	{
		return;
	}
	func_5464(iParam0);
	func_5445(iParam0, bVar0);
	if (func_5235(iParam0))
	{
		func_5444(iParam0);
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
		{
			func_5443(iParam0);
		}
		return;
	}
	func_5442(iParam0);
	func_5410(iParam0);
}

void func_5410(int* iParam0)//Position - 0x18D04C
{
	func_5439(iParam0);
	func_5432(iParam0);
	func_5411(iParam0);
}

void func_5411(int* iParam0)//Position - 0x18D066
{
	bool bVar0;
	bool bVar1;
	bVar0 = false;
	bVar1 = false;
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		bVar0 = PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/);
		bVar1 = PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 238 /*INPUT_CURSOR_CANCEL*/);
	}
	else
	{
		bVar0 = PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/);
		bVar1 = PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 214 /*INPUT_FRONTEND_DELETE*/);
	}
	if (bVar0)
	{
		func_5423(iParam0);
	}
	else if (bVar1)
	{
		func_5412(iParam0);
	}
}

void func_5412(int* iParam0)//Position - 0x18D0BC
{
	int iVar0;
	iVar0 = func_5415(iParam0, -iParam0->f_802);
	if (iVar0 != 1)
	{
		return;
	}
	func_5159(iParam0, 1);
	__LIB_18__::func_763(iParam0, 1);
	func_5414(iParam0);
	func_5131(iParam0);
	func_5413();
}

void func_5413()//Position - 0x18D0F9
{
	AUDIO::PLAY_SOUND_FRONTEND(-1, __LIB_31__::func_830(20, 0), __LIB_16__::func_157(1), true);
}

void func_5414(int* iParam0)//Position - 0x18D113
{
	func_4902(iParam0, PLAYER::PLAYER_ID());
}

int func_5415(var uParam0, int iParam1)//Position - 0x18D125
{
	if (uParam0->f_811 == -1 || uParam0->f_812 == -1)
	{
		return 0;
	}
	if (!func_5421(uParam0))
	{
		return 0;
	}
	return func_5416(uParam0, iParam1, uParam0->f_811, uParam0->f_812);
}

int func_5416(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x18D168
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = func_5096(iParam2, iParam3);
	iVar2 = func_5420(&(uParam0->f_1652[iVar0 /*33*/].f_4), iVar1);
	bVar3 = func_5148(iParam2, iParam3);
	if (!func_5419(iVar2))
	{
		return 6;
	}
	iVar4 = uParam0->f_1652[iVar0 /*33*/].f_4[iVar2 /*2*/].f_1;
	if (iVar4 <= 0 && iParam1 <= 0)
	{
		return 0;
	}
	iVar7 = 0;
	if (bVar3)
	{
		iVar5 = func_5145(uParam0);
		iVar6 = uParam0->f_800;
		iVar7 = 3;
	}
	else
	{
		iVar5 = func_5142(uParam0);
		iVar6 = uParam0->f_801;
		iVar7 = 4;
	}
	if (iVar6 >= iVar5 && iParam1 > 0)
	{
		return iVar7;
	}
	iVar8 = func_5194(uParam0);
	bVar9 = (iVar8 + iParam1) <= func_4999();
	if (!bVar9)
	{
		return 5;
	}
	iVar10 = (iVar5 - iVar6);
	iParam1 = __LIB_0__::func_340(iParam1, -iVar4, iVar10);
	if (bVar3)
	{
		func_5394(&(uParam0->f_800), iParam1);
	}
	else
	{
		func_5394(&(uParam0->f_801), iParam1);
	}
	iVar11 = (iVar4 + iParam1);
	iVar11 = __LIB_0__::func_340(iVar11, 0, iVar5);
	uParam0->f_1652[iVar0 /*33*/].f_4[iVar2 /*2*/] = iVar1;
	uParam0->f_1652[iVar0 /*33*/].f_4[iVar2 /*2*/].f_1 = iVar11;
	SECURITY::REGISTER_SCRIPT_VARIABLE(&(uParam0->f_1652[iVar0 /*33*/].f_4[iVar2 /*2*/].f_1));
	if (iVar11 <= 0)
	{
		uParam0->f_1652[iVar0 /*33*/].f_4[iVar2 /*2*/] = -1;
		func_5392(uParam0, iParam2, iParam3);
	}
	else
	{
		func_5418(uParam0, iParam2, iParam3);
	}
	uParam0->f_794 = func_5417(uParam0);
	return 1;
}

int func_5417(var uParam0)//Position - 0x18D2EB
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = 0;
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 10)
	{
		if (uParam0->f_1652[iVar0 /*33*/].f_4[iVar2 /*2*/] != -1)
		{
			iVar1++;
		}
		iVar2++;
	}
	return iVar1;
}

void func_5418(var uParam0, int iParam1, int iParam2)//Position - 0x18D32D
{
	int iVar0;
	iVar0 = PLAYER::PLAYER_ID();
	if (func_4808(iParam1, iParam2))
	{
		MISC::SET_BIT(&(uParam0->f_1652[iVar0 /*33*/].f_2), 3);
		return;
	}
	if (func_4809(iParam1, iParam2))
	{
		MISC::SET_BIT(&(uParam0->f_1652[iVar0 /*33*/].f_2), 2);
		return;
	}
	if (func_4810(iParam1, iParam2))
	{
		MISC::SET_BIT(&(uParam0->f_1652[iVar0 /*33*/].f_2), 1);
	}
}

bool func_5419(int iParam0)//Position - 0x18D392
{
	return (iParam0 >= 0 && iParam0 < 10);
}

int func_5420(var uParam0, int iParam1)//Position - 0x18D3A8
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	iVar1 = -1;
	iVar2 = *uParam0;
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		if ((*uParam0)[iVar0 /*2*/] == iParam1)
		{
			return iVar0;
		}
		if (iVar1 == -1 && (*uParam0)[iVar0 /*2*/] == -1)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_5421(var uParam0)//Position - 0x18D3F8
{
	int iVar0;
	iVar0 = PLAYER::PLAYER_ID();
	return func_5422(uParam0, iVar0);
}

int func_5422(var uParam0, int iParam1)//Position - 0x18D40E
{
	int iVar0;
	iVar0 = uParam0->f_1652[iParam1 /*33*/].f_1;
	return func_25(iVar0);
}

void func_5423(int* iParam0)//Position - 0x18D429
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<3> Var5;
	iVar0 = __LIB_16__::func_159(iParam0->f_815);
	uVar1 = func_5194(iParam0);
	if (!func_5431(iVar0, uVar1))
	{
		return;
	}
	iVar2 = iParam0->f_802;
	iVar3 = func_5232(iParam0->f_802);
	iVar4 = func_5415(iParam0, iVar0);
	Var5 = { func_4908(iParam0->f_12, iParam0->f_811, iParam0->f_812) };
	switch (iVar4)
	{
		case 1:
			func_5159(iParam0, 1);
			func_5399(iParam0);
			__LIB_18__::func_763(iParam0, 1);
			func_5414(iParam0);
			func_5131(iParam0);
			if (iVar2 > 0 && func_5232(iParam0->f_802) != iVar3)
			{
				func_5430(Var5);
			}
			else
			{
				func_5429(Var5);
			}
			break;
		case 3:
			HUD::CLEAR_HELP(true);
			func_5428(5000);
			func_5427();
			break;
		case 4:
			HUD::CLEAR_HELP(true);
			func_5426(5000);
			func_5427();
			break;
		case 6:
			HUD::CLEAR_HELP(true);
			func_5425(5000);
			func_5427();
			break;
		case 5:
			HUD::CLEAR_HELP(true);
			func_5424(5000);
			func_5427();
			break;
	}
}

void func_5424(int iParam0)//Position - 0x18D544
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(func_5191(34));
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, false, iParam0);
}

void func_5425(int iParam0)//Position - 0x18D55F
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(func_5191(35));
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, false, iParam0);
}

void func_5426(int iParam0)//Position - 0x18D57A
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(func_5191(33));
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, false, iParam0);
}

void func_5427()//Position - 0x18D595
{
	AUDIO::PLAY_SOUND_FRONTEND(-1, __LIB_31__::func_830(13, 0), __LIB_16__::func_157(1), true);
}

void func_5428(int iParam0)//Position - 0x18D5AF
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(func_5191(32));
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, false, iParam0);
}

void func_5429(struct<3> Param0)//Position - 0x18D5CA
{
	AUDIO::PLAY_SOUND_FROM_COORD(-1, __LIB_31__::func_830(22, 0), Param0, __LIB_16__::func_157(0), true, 0, false);
}

void func_5430(struct<3> Param0)//Position - 0x18D5EA
{
	AUDIO::PLAY_SOUND_FROM_COORD(-1, __LIB_31__::func_830(23, 0), Param0, __LIB_16__::func_157(0), true, 0, false);
}

bool func_5431(int iParam0, var uParam1)//Position - 0x18D60A
{
	return !__LIB_31__::func_779();
}

void func_5432(int* iParam0)//Position - 0x18D617
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	iVar0 = func_5231(iParam0);
	if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 204 /*INPUT_FRONTEND_Y*/) && iParam0->f_815 != iVar0)
	{
		iParam0->f_815 = iVar0;
		func_5134(iParam0, 1);
		func_5137(iParam0);
		func_5438();
		return;
	}
	bVar1 = false;
	bVar2 = false;
	bVar3 = __LIB_0__::func_937(&(iParam0->f_807), 100, 0);
	bVar1 = (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/) && bVar3);
	bVar2 = (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/) && bVar3);
	if (bVar1)
	{
		func_5436(iParam0);
		return;
	}
	if (bVar2)
	{
		func_5433(iParam0);
	}
}

void func_5433(int* iParam0)//Position - 0x18D6A6
{
	bool bVar0;
	bVar0 = iParam0->f_815 == func_5160(iParam0);
	iParam0->f_816 = iParam0->f_815;
	if (!bVar0)
	{
		iParam0->f_815 = func_5435(iParam0, iParam0->f_815, -1);
		func_5134(iParam0, 1);
		func_5137(iParam0);
		__LIB_0__::func_794(&(iParam0->f_807));
		func_5434();
		MISC::CLEAR_BIT(iParam0, 20);
		return;
	}
	if (!BitTest(*iParam0, 20) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/))
	{
		func_5427();
		MISC::SET_BIT(iParam0, 20);
	}
}

void func_5434()//Position - 0x18D725
{
	AUDIO::PLAY_SOUND_FRONTEND(-1, __LIB_31__::func_830(16, 0), __LIB_16__::func_157(1), true);
}

int func_5435(var uParam0, int iParam1, int iParam2)//Position - 0x18D73F
{
	int iVar0;
	iVar0 = func_5140(iParam1, iParam2);
	return func_5139(uParam0, iVar0, iParam2);
}

void func_5436(int* iParam0)//Position - 0x18D75B
{
	bool bVar0;
	bVar0 = iParam0->f_815 == func_5231(iParam0);
	if (!bVar0)
	{
		iParam0->f_815 = func_5435(iParam0, iParam0->f_815, 1);
		func_5134(iParam0, 1);
		func_5137(iParam0);
		func_5437();
		__LIB_0__::func_794(&(iParam0->f_807));
		MISC::CLEAR_BIT(iParam0, 20);
		return;
	}
	if (!BitTest(*iParam0, 20) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/))
	{
		func_5427();
		MISC::SET_BIT(iParam0, 20);
	}
}

void func_5437()//Position - 0x18D7D0
{
	AUDIO::PLAY_SOUND_FRONTEND(-1, __LIB_31__::func_830(15, 0), __LIB_16__::func_157(1), true);
}

void func_5438()//Position - 0x18D7EA
{
	AUDIO::PLAY_SOUND_FRONTEND(-1, __LIB_31__::func_830(19, 0), __LIB_16__::func_157(1), true);
}

void func_5439(int* iParam0)//Position - 0x18D804
{
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		func_5443(iParam0);
		func_5159(iParam0, 1);
		func_5136(iParam0);
	}
	else
	{
		func_5440(iParam0);
	}
}

void func_5440(int* iParam0)//Position - 0x18D830
{
	struct<3> Var0;
	func_5441(&Var0);
	Var0 = { func_4770(Var0, iParam0->f_12) };
	if (Var0.f_0 == 0f && Var0.f_1 == 0f)
	{
		return;
	}
	iParam0->f_804 = { iParam0->f_804 + Var0 * FtoV(MISC::GET_FRAME_TIME()) * Vector(0.6f, 0.6f, 0.6f) };
	func_5159(iParam0, 1);
	func_5136(iParam0);
}

void func_5441(var uParam0)//Position - 0x18D890
{
	*uParam0 = PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 218 /*INPUT_SCRIPT_LEFT_AXIS_X*/);
	uParam0->f_1 = -PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 219 /*INPUT_SCRIPT_LEFT_AXIS_Y*/);
}

void func_5442(int* iParam0)//Position - 0x18D8AE
{
	if (!BitTest(*iParam0, 21))
	{
		return;
	}
	ENTITY::SET_ENTITY_VISIBLE(iParam0->f_817, true, false);
	func_5029(iParam0);
	MISC::CLEAR_BIT(iParam0, 21);
}

void func_5443(int* iParam0)//Position - 0x18D8DC
{
	struct<2> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	int iVar4;
	Var0.f_0 = PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 239 /*INPUT_CURSOR_X*/);
	Var0.f_1 = PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 240 /*INPUT_CURSOR_Y*/);
	Var0.f_1 = (1f - Var0.f_1);
	Var1 = { func_5158() };
	Var2 = { func_5157() };
	Var3.f_0 = __LIB_11__::func_102(Var0.f_0, 0f, 1f, Var2.f_0, Var1.f_0);
	Var3.f_1 = __LIB_11__::func_102(Var0.f_1, 0f, 1f, Var2.f_1, Var1.f_1);
	iVar4 = iParam0->f_12;
	iParam0->f_804 = { func_4770(Var3, iVar4) + func_4909(iVar4) };
	func_5155(iParam0);
}

void func_5444(int* iParam0)//Position - 0x18D95A
{
	if (BitTest(*iParam0, 21))
	{
		return;
	}
	func_5097(iParam0);
	ENTITY::SET_ENTITY_VISIBLE(iParam0->f_817, false, false);
	MISC::SET_BIT(iParam0, 21);
}

void func_5445(int* iParam0, bool bParam1)//Position - 0x18D987
{
	func_5398(iParam0);
	func_5446(iParam0, bParam1);
}

void func_5446(int* iParam0, bool bParam1)//Position - 0x18D99D
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	if (!bParam1 && !func_5222(iParam0))
	{
		func_5201(iParam0);
	}
	func_5454(iParam0);
	bVar0 = func_5197(iParam0);
	bVar1 = iParam0->f_773 == false;
	bVar2 = func_5176(iParam0);
	bVar3 = func_5449();
	if (bVar0)
	{
		return;
	}
	if (bVar3)
	{
		return;
	}
	if (bVar1)
	{
		func_5448();
		return;
	}
	if (!bVar2)
	{
		func_5447();
	}
}

void func_5447()//Position - 0x18DA08
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(func_5191(39));
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, false, -1);
}

void func_5448()//Position - 0x18DA22
{
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(func_5191(36));
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(func_5191(37));
	}
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, false, -1);
}

var func_5449()//Position - 0x18DA51
{
	return (((func_5453() || func_5452()) || func_5451()) || func_5450());
}

bool func_5450()//Position - 0x18DA7B
{
	return __LIB_0__::func_1(func_5191(35));
}

bool func_5451()//Position - 0x18DA8D
{
	return __LIB_0__::func_1(func_5191(34));
}

bool func_5452()//Position - 0x18DA9F
{
	return __LIB_0__::func_1(func_5191(33));
}

bool func_5453()//Position - 0x18DAB1
{
	return __LIB_0__::func_1(func_5191(32));
}

void func_5454(int* iParam0)//Position - 0x18DAC3
{
	func_5461(iParam0, 6);
	func_5460(iParam0, 5);
	func_5459(iParam0, 4);
	func_5455(iParam0, 3);
}

void func_5455(var uParam0, int iParam1)//Position - 0x18DAE7
{
	int iVar0;
	iVar0 = __LIB_16__::func_159(uParam0->f_815);
	func_5456(iVar0, func_5191(12), -1, 1, iParam1, 0, 0, 1, 0, 0, 0, 0, 0, 0, -1);
}

void func_5456(int iParam0, char* sParam1, int iParam2, int iParam3, var uParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)//Position - 0x18DB14
{
	int iVar0;
	int iVar1;
	if (__LIB_1__::func_76(sParam6))
	{
		sParam6 = "NUMBER";
	}
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (__LIB_0__::func_929(3, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1649593.f_1 = 1;
		__LIB_0__::func_928(3, iVar0);
		Global_1649593.f_2839[iVar0] = iParam0;
		StringCopy(&(Global_1649593.f_2839.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1649593.f_2839.f_183[iVar0] = iParam3;
		Global_1649593.f_2839.f_172[iVar0] = iParam2;
		Global_1649593.f_2839.f_205[iVar0] = uParam4;
		Global_1649593.f_2839.f_216[iVar0] = iParam5;
		StringCopy(&(Global_1649593.f_2839.f_259[iVar0 /*16*/]), sParam6, 64);
		Global_1649593.f_2839.f_420[iVar0] = iParam7;
		Global_1649593.f_2839.f_453[iVar0] = iParam8;
		Global_1649593.f_2839.f_431[iVar0] = iParam9;
		Global_1649593.f_2839.f_442[iVar0] = iParam10;
		Global_1649593.f_2839.f_464[iVar0] = iParam11;
		Global_1649593.f_2839.f_475[iVar0] = iParam12;
		Global_1649593.f_2839.f_486[iVar0] = iParam13;
		Global_1649593.f_2839.f_497[iVar0] = iParam14;
	}
}

void func_5459(var uParam0, int iParam1)//Position - 0x18DC86
{
	func_5456(uParam0->f_802, func_5191(13), -1, 1, iParam1, 0, 0, 1, 0, 0, 0, 0, 0, 0, -1);
}

void func_5460(var uParam0, int iParam1)//Position - 0x18DCAB
{
	int iVar0;
	char* sVar1;
	iVar0 = (10 - uParam0->f_794);
	sVar1 = func_5191(14);
	if (iVar0 <= 0)
	{
		func_5456(iVar0, sVar1, -1, 6, iParam1, 0, 0, 1, 0, 0, 0, 0, 0, 0, -1);
		return;
	}
	func_5456(iVar0, sVar1, -1, 1, iParam1, 0, 0, 1, 0, 0, 0, 0, 0, 0, -1);
}

void func_5461(var uParam0, int iParam1)//Position - 0x18DCFA
{
	int iVar0;
	int iVar1;
	iVar0 = func_5463(uParam0);
	iVar1 = 1;
	if (iVar0 <= 6000)
	{
		iVar1 = 6;
	}
	func_5462(func_5463(uParam0), func_5191(10), 0, 0, -1, 0, iParam1, 0, iVar1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
}

void func_5462(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)//Position - 0x18DD3A
{
	int iVar0;
	int iVar1;
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (__LIB_0__::func_929(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1649593.f_1 = 1;
		__LIB_0__::func_928(7, iVar0);
		Global_1649593.f_4659[iVar0] = uParam0;
		StringCopy(&(Global_1649593.f_4659.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1649593.f_4659.f_172[iVar0] = iParam2;
		Global_1649593.f_4659.f_216[iVar0] = iParam3;
		Global_1649593.f_4659.f_183[iVar0] = iParam4;
		Global_1649593.f_4659.f_194[iVar0] = iParam5;
		Global_1649593.f_4659.f_249[iVar0] = uParam6;
		Global_1649593.f_4659.f_260[iVar0] = iParam7;
		Global_1649593.f_4659.f_205[iVar0] = iParam8;
		Global_1649593.f_4659.f_314[iVar0] = iParam9;
		Global_1649593.f_4659.f_325[iVar0] = iParam10;
		Global_1649593.f_4659.f_357[iVar0] = iParam11;
		Global_1649593.f_4659.f_238[iVar0] = iParam12;
		Global_1649593.f_4659.f_271[iVar0] = iParam13;
		Global_1649593.f_4659.f_368[iVar0] = iParam14;
		Global_1649593.f_4659.f_379[iVar0] = iParam15;
		Global_1649593.f_4659.f_390[iVar0] = iParam16;
		Global_1649593.f_4659.f_227[iVar0] = iParam17;
	}
}

int func_5463(var uParam0)//Position - 0x18DE97
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = uParam0->f_12;
	if (!func_25(iVar0))
	{
		return 0;
	}
	iVar1 = func_84(uParam0, iVar0);
	if (!__LIB_0__::func_864(&(uParam0->f_1357.f_250[iVar0 /*2*/])))
	{
		return iVar1;
	}
	iVar2 = __LIB_1__::func_724(&(uParam0->f_1357.f_250[iVar0 /*2*/]), 0, 0);
	iVar2 = (iVar1 - iVar2);
	return __LIB_0__::func_340(iVar2, 0, iVar1);
}

void func_5464(int* iParam0)//Position - 0x18DEF8
{
	PLAYER::DISABLE_CAMERA_VIEW_MODE_CYCLE(PLAYER::PLAYER_ID());
	if (iParam0->f_773 == 0)
	{
		func_5466(iParam0);
	}
	else
	{
		func_5465(iParam0);
	}
	if (func_5368(iParam0))
	{
		return;
	}
	if (iParam0->f_779 != 0)
	{
		if (func_5237(iParam0))
		{
			return;
		}
	}
	func_5224(iParam0, 1);
}

void func_5465(int* iParam0)//Position - 0x18DF49
{
	struct<3> Var0;
	struct<3> Var1;
	Var0 = { func_5171(0, 0) };
	Var1 = { func_5170(0, 0) };
	iParam0->f_785 = { Var0 };
	iParam0->f_788 = { Var1 };
}

void func_5466(int* iParam0)//Position - 0x18DF7B
{
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		func_5472(iParam0);
		return;
	}
	func_5467(iParam0);
}

void func_5467(int* iParam0)//Position - 0x18DF9A
{
	struct<3> Var0;
	Var0.f_0 = PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 220 /*INPUT_SCRIPT_RIGHT_AXIS_X*/);
	Var0.f_1 = PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 221 /*INPUT_SCRIPT_RIGHT_AXIS_Y*/);
	func_5468(iParam0, Var0);
}

void func_5468(int* iParam0, struct<3> Param1)//Position - 0x18DFC0
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	struct<3> Var7;
	struct<3> Var8;
	iVar0 = func_5012(iParam0, iParam0->f_12);
	if (!__LIB_0__::func_121(iVar0))
	{
		return;
	}
	Var1 = { func_5470(Param1) };
	Var2 = { func_5171(0, 0) };
	Var3 = { func_5170(0, 0) };
	Var4 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iVar0, CAM::GET_CAM_COORD(iParam0->f_771)) };
	Var5 = { Var2 + Var1 * Vector(0.8f, 0.8f, 0.8f) };
	Var6 = { Var3 + Var1 };
	Var7 = { func_5469(Var4, iParam0->f_785, Var5, 3.2f) };
	Var8 = { func_5469(iParam0->f_791, iParam0->f_788, Var6, 3.2f) };
	iParam0->f_785 = { Var5 };
	iParam0->f_788 = { Var6 };
	CAM::ATTACH_CAM_TO_ENTITY(iParam0->f_771, iVar0, Var7, true);
	CAM::POINT_CAM_AT_ENTITY(iParam0->f_771, iVar0, Var8, true);
	iParam0->f_791 = { Var8 };
}

Vector3 func_5469(struct<3> Param0, struct<3> Param1, struct<3> Param2, float fParam3)//Position - 0x18E0B1
{
	float fVar0;
	struct<3> Var1;
	struct<3> Var2;
	fVar0 = (MISC::GET_FRAME_TIME() * fParam3);
	Var1 = { Param2 - Param1 / Vector(fVar0, fVar0, fVar0) };
	Var2 = { Param0 - Param1 + Var1 };
	return Param2 - Var1 + Var2 * FtoV(SYSTEM::POW(2.7182817f, -fVar0));
}

Vector3 func_5470(struct<2> Param0, var uParam1)//Position - 0x18E101
{
	struct<3> Var0;
	Var0 = { 0f, 0f, 0f };
	if (Param0.f_0 < 0f)
	{
		Var0.f_0 = __LIB_3__::func_569(0f, -0.15f, -Param0.f_0);
	}
	else
	{
		Var0.f_0 = __LIB_3__::func_569(0f, 0.15f, Param0.f_0);
	}
	if (Param0.f_1 < 0f)
	{
		Var0.f_1 = __LIB_3__::func_569(0f, 0.15f, -Param0.f_1);
	}
	else
	{
		Var0.f_1 = __LIB_3__::func_569(0f, -0.15f, Param0.f_1);
	}
	return Var0;
}

void func_5472(int* iParam0)//Position - 0x18E19B
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	iVar0 = iParam0->f_12;
	Var1 = { iParam0->f_804 };
	Var2 = { func_4909(iVar0) };
	Var1 = { Var1 - Var2 };
	Var1 = { func_5154(Var1, iVar0) };
	Var1.f_0 = __LIB_11__::func_102(Var1.f_0, -0.14f, 1.09f, -1f, 1f);
	Var1.f_1 = __LIB_11__::func_102(Var1.f_1, -0.03f, 0.67f, 1f, -1f);
	if (SYSTEM::VMAG(Var1) < 0.5f)
	{
		Var1 = { 0f, 0f, 0f };
	}
	else
	{
		Var1 = { Var1 * Vector(0.5f, 0.5f, 0.5f) };
	}
	func_5468(iParam0, Var1);
}

bool func_5473(int* iParam0)//Position - 0x18E239
{
	if (iParam0->f_771 != 0)
	{
		return (CAM::IS_CAM_INTERPOLATING(iParam0->f_771) || CAM::IS_INTERPOLATING_TO_SCRIPT_CAMS());
	}
	return CAM::IS_INTERPOLATING_TO_SCRIPT_CAMS();
}

void func_5474(int* iParam0)//Position - 0x18E264
{
	__LIB_1__::func_376(PLAYER::PLAYER_ID(), 0, 0, 0);
	MISC::SET_BIT(&(iParam0->f_1[iParam0->f_12]), 17);
	func_5488(iParam0);
	iParam0->f_799 = 0;
	iParam0->f_797 = func_4999();
	func_5484(iParam0);
	func_5483(iParam0);
	func_5475();
}

void func_5475()//Position - 0x18E2AC
{
	__LIB_16__::func_269(3);
}

void func_5483(int* iParam0)//Position - 0x18E3DC
{
	iParam0->f_2750.f_2 = MISC::GET_HASH_KEY("none" /* GXT: None */);
	iParam0->f_2750.f_7 = 0;
	iParam0->f_2750.f_8 = 0;
	iParam0->f_2750.f_12 = 0;
	iParam0->f_2750.f_13 = 0;
	iParam0->f_2750.f_14 = 0;
	iParam0->f_2750.f_9 = 0;
	__LIB_0__::func_794(&(iParam0->f_2711));
	__LIB_0__::func_795(&(iParam0->f_2711), 0, 0);
	iParam0->f_2713.f_4 = MISC::GET_HASH_KEY("none" /* GXT: None */);
	iParam0->f_2713.f_16 = 0;
	__LIB_0__::func_794(&(iParam0->f_2709));
	__LIB_0__::func_795(&(iParam0->f_2709), 0, 0);
}

void func_5484(int* iParam0)//Position - 0x18E464
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = func_5183(iParam0);
	iVar1 = iParam0->f_12;
	iVar2 = func_84(iParam0, iVar1);
	switch (iVar0)
	{
		case 1:
		case 0:
			func_5487(iParam0);
			break;
		case 2:
			if (__LIB_0__::func_937(&(iParam0->f_1357.f_250[iVar1 /*2*/]), (iVar2 - 6000), 0))
			{
				func_5486(iParam0);
				return;
			}
			func_5487(iParam0);
			break;
		case 4:
			func_5486(iParam0);
			break;
		default:
			func_5485(iParam0);
			break;
	}
}

void func_5485(int* iParam0)//Position - 0x18E4E9
{
	func_5236(iParam0, 0);
	func_5244(iParam0, 6, 439, 447);
	func_5180(iParam0, 0);
	__LIB_1__::func_376(PLAYER::PLAYER_ID(), 0, 256, 0);
}

void func_5486(int* iParam0)//Position - 0x18E519
{
	func_5244(iParam0, 4, 1624252/*func_5387*/, 447);
	func_5180(iParam0, 0);
	__LIB_1__::func_376(PLAYER::PLAYER_ID(), 0, 256, 0);
}

void func_5487(int* iParam0)//Position - 0x18E543
{
	func_5244(iParam0, 2, 1588370/*func_5121*/, 447);
	func_5180(iParam0, 1);
	func_5162(iParam0, 0);
}

void func_5488(int* iParam0)//Position - 0x18E567
{
	iParam0->f_796 = 0;
	iParam0->f_800 = 0;
	iParam0->f_801 = 0;
	iParam0->f_802 = 0;
	func_5134(iParam0, 1);
	func_5159(iParam0, 1);
	__LIB_18__::func_763(iParam0, 1);
	func_5104(iParam0, 0);
}

void func_5489(var uParam0)//Position - 0x18E5A3
{
	if (func_5183(uParam0) == 7)
	{
		func_5244(uParam0, 7, 447, 439);
	}
}

void func_5490(int* iParam0)//Position - 0x18E5C2
{
	__LIB_29__::func_926();
	CAM::SET_TABLE_GAMES_CAMERA_THIS_UPDATE(joaat("CASINO_ROULETTE_CAMERA"));
	if ((!BitTest(*iParam0, 18) && func_4928(iParam0, 0.15f)) && func_5497(iParam0))
	{
		MISC::SET_BIT(iParam0, 18);
	}
	if (func_5496(iParam0, MISC::GET_HASH_KEY("SHOWUI")) || func_4928(iParam0, 1063675494))
	{
		func_4946(iParam0, 7, 1631981/*func_5495*/, 1631799/*func_5491*/);
	}
}

void func_5491(var uParam0)//Position - 0x18E637
{
	func_5494(uParam0);
	func_5493();
	MISC::SET_BIT(&(uParam0->f_1652[PLAYER::PLAYER_ID() /*33*/].f_2), 6);
	func_5492(uParam0);
}

void func_5492(var uParam0)//Position - 0x18E661
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = uParam0->f_12;
	if (!func_25(iVar0))
	{
		return;
	}
	iVar1 = uParam0->f_1357.f_288[iVar0];
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iVar1))
	{
		return;
	}
	iVar2 = NETWORK::NET_TO_PED(iVar1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		return;
	}
	AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iVar2, "DLC_VW_Casino_Table_Games_Dealer_Group", 0f);
}

void func_5493()//Position - 0x18E6B8
{
	if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_VW_Casino_Table_Games"))
	{
		AUDIO::START_AUDIO_SCENE("DLC_VW_Casino_Table_Games");
	}
}

void func_5494(var uParam0)//Position - 0x18E6D7
{
	uParam0->f_1652[PLAYER::PLAYER_ID() /*33*/].f_25 = 1;
}

void func_5495(var uParam0)//Position - 0x18E6ED
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

int func_5496(int* iParam0, int iParam1)//Position - 0x18E701
{
	char* sVar0;
	char* sVar1;
	if (!__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	sVar0 = __LIB_16__::func_152(1);
	sVar1 = func_4929(iParam0->f_1202, iParam0->f_1202.f_6, 0);
	if (!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sVar0, sVar1, 3))
	{
		return 0;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), iParam1))
	{
		return 1;
	}
	return 0;
}

int func_5497(var uParam0)//Position - 0x18E75A
{
	int iVar0;
	int iVar1;
	char* sVar2;
	iVar0 = uParam0->f_12;
	if (!__LIB_0__::func_953(uParam0->f_1357.f_288[iVar0]))
	{
		return 0;
	}
	iVar1 = func_5498(uParam0, iVar0);
	sVar2 = __LIB_31__::func_830(iVar1, 0);
	func_46(uParam0, sVar2, iVar0, 0, 0, 1);
	return 1;
}

int func_5498(var uParam0, int iParam1)//Position - 0x18E7A1
{
	if (__LIB_4__::func_962(PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	if (func_25(iParam1))
	{
		if (BitTest(uParam0->f_1[iParam1], 17))
		{
			return 4;
		}
	}
	if (!__LIB_16__::func_155(iParam1))
	{
		return 0;
	}
	if (__LIB_1__::func_394())
	{
		return 3;
	}
	return 2;
}

void func_5501(int* iParam0)//Position - 0x18E85A
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	bool bVar3;
	__LIB_29__::func_926();
	if (!func_5515())
	{
		return;
	}
	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD"));
	iVar1 = (iVar0 == 7 && BitTest(*iParam0, 14));
	Var2 = { func_5514(iParam0, iParam0->f_11, iParam0->f_1198, 0) };
	bVar3 = (iVar1 || __LIB_0__::func_725(PLAYER::PLAYER_PED_ID(), Var2, 0.45f, 1));
	if (bVar3)
	{
		func_4946(iParam0, 6, 447, 1633109/*func_5510*/);
		return;
	}
	func_5506(iParam0);
	if (!BitTest(*iParam0, 14))
	{
		func_5502(iParam0);
		MISC::SET_BIT(iParam0, 14);
	}
}

void func_5502(int* iParam0)//Position - 0x18E8F5
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	iVar0 = iParam0->f_11;
	iParam0->f_1198 = func_5504(iParam0, iVar0);
	Var1 = { func_5514(iParam0, iVar0, iParam0->f_1198, 0) };
	Var2 = { func_5503(iParam0, iVar0, iParam0->f_1198, 0) };
	TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), Var1, 1f, 5000, Var2.f_2, 0.35f);
}

Vector3 func_5503(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x18E94D
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	struct<3> Var4;
	struct<3> Var5;
	char* sVar6;
	char* sVar7;
	iVar0 = func_4791(iParam1);
	iVar1 = func_5012(uParam0, iVar0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return 0f, 0f, 0f;
	}
	iVar2 = func_4945(iParam1);
	sVar3 = func_5011(iVar2);
	Var4 = { __LIB_31__::func_836(iVar1, sVar3) };
	Var5 = { __LIB_31__::func_835(iVar1, sVar3, 1) };
	sVar6 = __LIB_16__::func_152(1);
	sVar7 = func_4929(iParam2, iParam3, iVar2);
	return PED::GET_ANIM_INITIAL_OFFSET_ROTATION(sVar6, sVar7, Var4, Var5, 0.01f, 2);
}

int func_5504(var uParam0, int iParam1)//Position - 0x18E9C9
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	fVar0 = __LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), func_5514(uParam0, iParam1, 2, 0), 1);
	fVar1 = __LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), func_5514(uParam0, iParam1, 4, 0), 1);
	fVar2 = __LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), func_5514(uParam0, iParam1, 3, 0), 1);
	iVar3 = func_4945(iParam1);
	if (fVar1 < fVar2 && fVar1 < fVar0)
	{
		if (func_5505(iVar3, 0))
		{
			return 2;
		}
		return 4;
	}
	if (fVar2 < fVar1 && fVar2 < fVar0)
	{
		if (func_5505(iVar3, 1))
		{
			return 2;
		}
		return 3;
	}
	return 2;
}

int func_5505(int iParam0, int iParam1)//Position - 0x18EA61
{
	switch (iParam0)
	{
		case 3:
			return iParam1;
		default:
	}
	return 0;
}

void func_5506(int* iParam0)//Position - 0x18EA7C
{
	if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4 && !CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::SET_GAMEPLAY_COORD_HINT(func_5507(iParam0), 2000, 2000, 2000, 0);
	}
}

Vector3 func_5507(var uParam0)//Position - 0x18EAAC
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	Var0 = { func_5509(uParam0, uParam0->f_11) };
	Var1 = { func_5508(uParam0, uParam0->f_11) };
	Var2 = { 0f, 1f, 1f };
	Var0 = { Var0 + __LIB_0__::func_327(Var2, Var1.f_2) };
	return Var0;
}

Vector3 func_5508(var uParam0, int iParam1)//Position - 0x18EAF0
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	iVar0 = func_4791(iParam1);
	iVar1 = func_5012(uParam0, iVar0);
	iVar2 = func_4945(iParam1);
	sVar3 = func_5011(iVar2);
	return __LIB_31__::func_835(iVar1, sVar3, 1);
}

Vector3 func_5509(var uParam0, int iParam1)//Position - 0x18EB23
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	iVar0 = func_4791(iParam1);
	iVar1 = func_5012(uParam0, iVar0);
	iVar2 = func_4945(iParam1);
	sVar3 = func_5011(iVar2);
	return __LIB_31__::func_836(iVar1, sVar3);
}

void func_5510(int* iParam0)//Position - 0x18EB55
{
	CAM::SET_TABLE_GAMES_CAMERA_THIS_UPDATE(joaat("CASINO_ROULETTE_CAMERA"));
	func_5511(iParam0);
	MISC::CLEAR_BIT(iParam0, 18);
	MISC::CLEAR_BIT(&(iParam0->f_1652[PLAYER::PLAYER_ID() /*33*/].f_2), 6);
}

void func_5511(int* iParam0)//Position - 0x18EB87
{
	struct<6> Var0;
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = 1090519040;
	Var0.f_3 = -998637568;
	Var0.f_5 = 1065353216;
	func_5512(iParam0, &Var0);
	func_5010(iParam0, &Var0);
}

void func_5512(var uParam0, var uParam1)//Position - 0x18EBCA
{
	*uParam1 = uParam0->f_1198;
	uParam1->f_1 = 1;
	uParam1->f_8 = 1;
	uParam1->f_2 = 2f;
	uParam1->f_3 = -2f;
	uParam1->f_9 = 13;
}

Vector3 func_5514(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x18EC16
{
	struct<3> Var0;
	struct<3> Var1;
	int iVar2;
	char* sVar3;
	char* sVar4;
	Var0 = { func_5509(uParam0, iParam1) };
	Var1 = { func_5508(uParam0, iParam1) };
	iVar2 = func_4945(iParam1);
	sVar3 = __LIB_16__::func_152(1);
	sVar4 = func_4929(iParam2, iParam3, iVar2);
	return PED::GET_ANIM_INITIAL_OFFSET_POSITION(sVar3, sVar4, Var0, Var1, 0.01f, 2);
}

bool func_5515()//Position - 0x18EC67
{
	return (STREAMING::HAS_ANIM_DICT_LOADED(__LIB_16__::func_152(0)) && STREAMING::HAS_ANIM_DICT_LOADED(__LIB_16__::func_152(1)));
}

void func_5516(int* iParam0)//Position - 0x18EC86
{
	__LIB_29__::func_926();
	if (__LIB_0__::func_937(&(iParam0->f_13), 5000, 0) || func_5521(iParam0))
	{
		func_4946(iParam0, 2, 1633569/*func_5520*/, 1574608/*func_4947*/);
		return;
	}
	if (func_5519(iParam0, iParam0->f_11))
	{
		func_4946(iParam0, 5, 447, 1633498/*func_5517*/);
	}
}

void func_5517(int* iParam0)//Position - 0x18ECDA
{
	func_5518();
	MISC::CLEAR_BIT(iParam0, 14);
}

void func_5518()//Position - 0x18ECEE
{
	STREAMING::REQUEST_ANIM_DICT(__LIB_16__::func_152(0));
	STREAMING::REQUEST_ANIM_DICT(__LIB_16__::func_152(1));
}

bool func_5519(int* iParam0, int iParam1)//Position - 0x18ED08
{
	return iParam0->f_1357.f_263[iParam1] == PLAYER::PLAYER_ID();
}

void func_5520(int* iParam0)//Position - 0x18ED21
{
	func_4992(1);
	func_4993(0);
	func_4994(iParam0);
}

bool func_5521(var uParam0)//Position - 0x18ED39
{
	int iVar0;
	iVar0 = uParam0->f_11;
	if (iVar0 < 0)
	{
		return 0;
	}
	return (uParam0->f_1357.f_263[iVar0] != __LIB_0__::func_162() && uParam0->f_1357.f_263[iVar0] != PLAYER::GET_PLAYER_INDEX());
}

void func_5522(int* iParam0)//Position - 0x18ED78
{
	int iVar0;
	iVar0 = func_5526(iParam0);
	if (iVar0 == 2)
	{
		func_4946(iParam0, 4, 447, 1633737/*func_5524*/);
		return;
	}
	if (iVar0 == 1)
	{
		func_4946(iParam0, 1, 1633715/*func_5523*/, 439);
	}
}

void func_5523(var uParam0)//Position - 0x18EDB3
{
	func_4992(1);
	func_4993(0);
	__LIB_1__::func_91();
}

void func_5524(var uParam0)//Position - 0x18EDC9
{
	func_4992(0);
	__LIB_0__::func_794(&(uParam0->f_13));
	func_5525(uParam0);
}

void func_5525(var uParam0)//Position - 0x18EDE4
{
	uParam0->f_1652[PLAYER::PLAYER_ID() /*33*/] = uParam0->f_11;
	uParam0->f_1652[PLAYER::PLAYER_ID() /*33*/].f_1 = uParam0->f_12;
}

int func_5526(int* iParam0)//Position - 0x18EE0C
{
	func_5534();
	if (func_5127())
	{
		return 2;
	}
	if (!func_5530(iParam0))
	{
		return 0;
	}
	if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/))
	{
		func_5528(iParam0);
		func_5248();
		return 1;
	}
	else if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
	{
		func_5528(iParam0);
		func_5527(1);
		func_5248();
		return 2;
	}
	return 0;
}

void func_5527(bool bParam0)//Position - 0x18EE6A
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1946250.f_5), 23);
		return;
	}
	MISC::CLEAR_BIT(&(Global_1946250.f_5), 23);
}

void func_5528(int* iParam0)//Position - 0x18EE92
{
	char* sVar0;
	bool bVar1;
	bVar1 = __LIB_16__::func_155(iParam0->f_12);
	sVar0 = func_5107(bVar1);
	__LIB_1__::func_895(1, -1);
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sVar0);
	func_5529(iParam0, 0);
	MISC::CLEAR_BIT(iParam0, 26);
}

void func_5529(int* iParam0, bool bParam1)//Position - 0x18EEC7
{
	if (bParam1)
	{
		MISC::SET_BIT(iParam0, 10);
	}
	else
	{
		MISC::CLEAR_BIT(iParam0, 10);
	}
}

int func_5530(int* iParam0)//Position - 0x18EEE7
{
	if (!__LIB_16__::func_175(iParam0))
	{
		if (!func_5531(iParam0))
		{
			return 0;
		}
	}
	if (!BitTest(*iParam0, 26))
	{
		func_5274();
		MISC::SET_BIT(iParam0, 26);
	}
	__LIB_9__::func_296(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
	return 1;
}

int func_5531(int* iParam0)//Position - 0x18EF2F
{
	char* sVar0;
	bool bVar1;
	bVar1 = __LIB_16__::func_155(iParam0->f_12);
	sVar0 = func_5107(bVar1);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sVar0, false);
	if (!(__LIB_3__::func_67(0, -1, 0) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sVar0)))
	{
		return 0;
	}
	__LIB_1__::func_602(0, 0);
	__LIB_3__::func_566(1, sVar0, sVar0);
	__LIB_1__::func_767(func_5191(40));
	__LIB_3__::func_781(-1, 1, 1);
	__LIB_1__::func_789(func_5191(41), 0, 0);
	__LIB_3__::func_542(func_5191(42));
	__LIB_3__::func_542(func_5191(43));
	__LIB_3__::func_542(func_5191(44));
	__LIB_1__::func_791(202, func_5191(0), -1);
	__LIB_1__::func_791(201, func_5191(1), -1);
	func_5529(iParam0, 1);
	MISC::CLEAR_BIT(iParam0, 26);
	return 1;
}

void func_5534()//Position - 0x18F04B
{
	if (!PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED() && !HUD::IS_PAUSE_MENU_ACTIVE())
	{
		HUD::DISABLE_FRONTEND_THIS_FRAME();
		PAD::DISABLE_ALL_CONTROL_ACTIONS(0 /*PLAYER_CONTROL*/);
		PAD::ENABLE_ALL_CONTROL_ACTIONS(1 /*CAMERA_CONTROL*/);
		PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/, true);
		PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/, true);
		PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/);
		PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/);
		PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/);
		PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/);
		PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/);
		PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/);
		PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/);
	}
}

void func_5535(var uParam0)//Position - 0x18F0B4
{
	bool bVar0;
	bool bVar1;
	bVar0 = (func_5550(uParam0, uParam0->f_11) && !func_54(uParam0, uParam0->f_11));
	if (!bVar0)
	{
		__LIB_1__::func_707("CAS_MG_SEAT_IN_USE" /* GXT: This seat is currently in use. */, -1);
	}
	if (!func_5545(uParam0, uParam0->f_11) || !func_5539())
	{
		func_4946(uParam0, 1, 1634689/*func_5538*/, 439);
		return;
	}
	bVar1 = func_4957(uParam0);
	if (!bVar1)
	{
		if (!func_5537(uParam0))
		{
			func_4948(uParam0);
		}
	}
	if ((!bVar1 && bVar0) && __LIB_3__::func_113(uParam0->f_15, 1))
	{
		func_4946(uParam0, 3, 1634689/*func_5538*/, 1634650/*func_5536*/);
	}
}

void func_5536(var uParam0)//Position - 0x18F15A
{
	func_4992(0);
	__LIB_1__::func_92();
	func_4993(1);
}

bool func_5537(var uParam0)//Position - 0x18F170
{
	return __LIB_3__::func_363(uParam0->f_15, 0);
}

void func_5538(var uParam0)//Position - 0x18F181
{
	__LIB_3__::func_122(&(uParam0->f_15));
	uParam0->f_15 = -1;
	HUD::CLEAR_HELP(true);
}

bool func_5539()//Position - 0x18F19B
{
	return ((((((((((((((__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && !__LIB_4__::func_849()) && !__LIB_3__::func_558()) && !__LIB_1__::func_512()) && __LIB_4__::func_850(PLAYER::PLAYER_PED_ID()) <= 9) && !Global_2667225.f_2681) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) && !__LIB_1__::func_16()) && !__LIB_0__::func_626()) && !__LIB_39__::func_245(PLAYER::PLAYER_ID())) && !CAM::IS_SCREEN_FADED_OUT()) && !CAM::IS_SCREEN_FADING_OUT()) && !Global_2725439.f_12) && Global_1946244 != 33);
}

bool func_5545(var uParam0, int iParam1)//Position - 0x18F334
{
	return (func_5547(uParam0, iParam1) && func_5546(uParam0, iParam1));
}

int func_5546(var uParam0, int iParam1)//Position - 0x18F351
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	float fVar3;
	Var0 = { func_5509(uParam0, iParam1) };
	Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	fVar2 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
	fVar3 = __LIB_0__::func_932(Var1, Var0);
	return __LIB_3__::func_526(fVar3, fVar2, 60f);
}

bool func_5547(var uParam0, int iParam1)//Position - 0x18F397
{
	return func_5548(uParam0, iParam1, PLAYER::PLAYER_ID());
}

bool func_5548(var uParam0, int iParam1, int iParam2)//Position - 0x18F3AB
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	Var0 = { func_5509(uParam0, iParam1) };
	Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam2), true) };
	fVar2 = __LIB_11__::func_99(Var0 + Vector(0.5f, 0f, 0f), Var1);
	return fVar2 <= (1f + 1f);
}

int func_5550(var uParam0, int iParam1)//Position - 0x18F3FE
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (__LIB_1__::func_693(iVar1, 1, 1) && !NETWORK::NETWORK_IS_PLAYER_CONCEALED(iVar1))
		{
			if (iVar1 != PLAYER::PLAYER_ID())
			{
				iVar2 = PLAYER::GET_PLAYER_PED(iVar1);
				if ((ENTITY::DOES_ENTITY_EXIST(iVar2) && func_5548(uParam0, iParam1, iVar1)) && uParam0->f_1357.f_263[iParam1] == iVar1)
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

void func_5551(var uParam0)//Position - 0x18F47A
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		uParam0->f_11++;
		uParam0->f_11 = ((uParam0->f_11 % 24) + 24 % 24);
		uParam0->f_12 = func_4791(uParam0->f_11);
		if (func_5545(uParam0, uParam0->f_11))
		{
			if (func_5539())
			{
				func_4946(uParam0, 2, 447, 1574608/*func_4947*/);
				return;
			}
		}
		iVar0++;
	}
}

void func_5552(var uParam0)//Position - 0x18F4E3
{
	if (!func_5563())
	{
		return;
	}
	if (!func_5562())
	{
		return;
	}
	if (!func_5561(uParam0))
	{
		return;
	}
	if (!func_5560(uParam0))
	{
		return;
	}
	func_5553(uParam0);
	func_5137(uParam0);
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_817))
	{
		ENTITY::SET_ENTITY_VISIBLE(uParam0->f_817, false, false);
	}
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
	func_4946(uParam0, 1, 447, 439);
}

void func_5553(var uParam0)//Position - 0x18F555
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = PLAYER::PLAYER_ID();
	iVar0 = 0;
	while (iVar0 < 6)
	{
		func_4877(uParam0, iVar0);
		func_5555(&(uParam0->f_1212[iVar0 /*23*/]), &(uParam0->f_1357.f_42[iVar0 /*11*/]));
		if (uParam0->f_1357.f_42[iVar0 /*11*/].f_4 != -1)
		{
			MISC::SET_BIT(&(uParam0->f_1652[iVar1 /*33*/].f_26[iVar0]), 1);
		}
		iVar0++;
	}
	func_5554(uParam0);
}

void func_5554(var uParam0)//Position - 0x18F5C3
{
	func_4784(&(uParam0->f_727), &(uParam0->f_1357.f_109));
	func_4784(&(uParam0->f_764), &(uParam0->f_1357.f_146));
}

void func_5555(var uParam0, var* uParam1)//Position - 0x18F5EB
{
	MISC::COPY_SCRIPT_STRUCT(&(uParam0->f_10), uParam1, 11);
	switch (uParam0->f_10.f_4)
	{
		case -1:
			func_5559(uParam0);
			break;
		case 29:
			func_5558(uParam0);
			break;
		case 30:
			func_5557(uParam0);
			break;
		case 31:
			func_5556(uParam0);
			break;
	}
}

void func_5556(var uParam0)//Position - 0x18F646
{
	int iVar0;
	if (!__LIB_16__::func_156(uParam0))
	{
		return;
	}
	iVar0 = __LIB_16__::func_166(uParam0->f_10.f_1);
	__LIB_44__::func_123(uParam0, iVar0, uParam0->f_10.f_10);
	__LIB_40__::func_981(uParam0, iVar0, uParam0->f_10.f_9);
	ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(*uParam0);
	ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(uParam0->f_1);
	ENTITY::SET_ENTITY_VISIBLE(*uParam0, true, false);
}

void func_5557(var uParam0)//Position - 0x18F69D
{
	if (!__LIB_16__::func_156(uParam0))
	{
		return;
	}
	__LIB_44__::func_122(uParam0, uParam0->f_10.f_10);
	__LIB_40__::func_986(uParam0, uParam0->f_10.f_9);
	ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(*uParam0);
	ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(uParam0->f_1);
	ENTITY::SET_ENTITY_VISIBLE(*uParam0, true, false);
}

void func_5558(var uParam0)//Position - 0x18F6E4
{
	if (!__LIB_16__::func_156(uParam0))
	{
		return;
	}
	__LIB_44__::func_124(uParam0, uParam0->f_10.f_10);
	__LIB_40__::func_988(uParam0, uParam0->f_10.f_9);
	ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(*uParam0);
	ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(uParam0->f_1);
}

void func_5559(var uParam0)//Position - 0x18F722
{
	if (!__LIB_16__::func_156(uParam0))
	{
		return;
	}
	if (uParam0->f_10.f_3 <= -1)
	{
		return;
	}
	__LIB_44__::func_204(uParam0, uParam0->f_10.f_3, 1f);
	ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(*uParam0);
	ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(uParam0->f_1);
	ENTITY::SET_ENTITY_VISIBLE(*uParam0, true, false);
}

int func_5560(var uParam0)//Position - 0x18F769
{
	bool bVar0;
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return 1;
	}
	bVar0 = BitTest(uParam0->f_1357.f_174, 1);
	if (!bVar0)
	{
		MISC::SET_BIT(&(uParam0->f_1652[PLAYER::PLAYER_ID() /*33*/].f_2), 5);
		return 0;
	}
	MISC::CLEAR_BIT(&(uParam0->f_1652[PLAYER::PLAYER_ID() /*33*/].f_2), 5);
	return 1;
}

int func_5561(var uParam0)//Position - 0x18F7B6
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = __LIB_16__::func_171();
	iVar1 = __LIB_16__::func_172();
	STREAMING::REQUEST_MODEL(iVar0);
	STREAMING::REQUEST_MODEL(iVar1);
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if (!func_4878(uParam0, iVar2, 1))
		{
			return 0;
		}
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1212[iVar2 /*23*/].f_1))
		{
		}
		else
		{
			uParam0->f_1212[iVar2 /*23*/].f_1 = func_4894(iVar2, 0);
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1212[iVar2 /*23*/].f_1))
			{
				return 0;
			}
		}
		iVar2++;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar1);
	return 1;
}

bool func_5562()//Position - 0x18F847
{
	return STREAMING::HAS_ANIM_DICT_LOADED(__LIB_16__::func_152(4));
}

bool func_5563()//Position - 0x18F858
{
	return ((((func_5565() && func_5564()) && STREAMING::HAS_MODEL_LOADED(func_5032(0))) && STREAMING::HAS_MODEL_LOADED(func_5032(1))) && STREAMING::HAS_MODEL_LOADED(func_4879()));
}

bool func_5564()//Position - 0x18F896
{
	return ((((((STREAMING::HAS_MODEL_LOADED(func_4906(0)) && STREAMING::HAS_MODEL_LOADED(func_4906(1))) && STREAMING::HAS_MODEL_LOADED(func_4906(2))) && STREAMING::HAS_MODEL_LOADED(func_4906(3))) && STREAMING::HAS_MODEL_LOADED(func_4906(4))) && STREAMING::HAS_MODEL_LOADED(func_4906(5))) && STREAMING::HAS_MODEL_LOADED(func_4906(6)));
}

bool func_5565()//Position - 0x18F8FB
{
	return ((((((STREAMING::HAS_MODEL_LOADED(func_5138(0)) && STREAMING::HAS_MODEL_LOADED(func_5138(1))) && STREAMING::HAS_MODEL_LOADED(func_5138(2))) && STREAMING::HAS_MODEL_LOADED(func_5138(3))) && STREAMING::HAS_MODEL_LOADED(func_5138(4))) && STREAMING::HAS_MODEL_LOADED(func_5138(5))) && STREAMING::HAS_MODEL_LOADED(func_5138(6)));
}

int func_5566()//Position - 0x18F960
{
	if (Global_1966100)
	{
		Global_1966100 = 0;
		func_5575();
		return 1;
	}
	if (__LIB_0__::func_959())
	{
		func_5575();
		return 1;
	}
	if (Global_2667225.f_2681 && Global_2671449 != 0)
	{
		if (Global_2671449 != 6)
		{
			func_5575();
			return 1;
		}
	}
	if (func_1914() && CAM::IS_SCREEN_FADED_OUT())
	{
		func_5575();
		return 1;
	}
	if (func_5567())
	{
		func_5575();
		return 1;
	}
	return 0;
}

int func_5567()//Position - 0x18F9D8
{
	if (!__LIB_4__::func_900(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if ((ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && __LIB_11__::func_99(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_109) > 441f) && !__LIB_16__::func_176())
	{
		return 1;
	}
	return 0;
}

void func_5575()//Position - 0x18FB69
{
	func_5581(&Local_115);
	func_5577(&Local_115);
	__LIB_0__::func_202();
}

void func_5577(int* iParam0)//Position - 0x18FB8D
{
	if (NETWORK::NETWORK_GET_NUM_PARTICIPANTS() <= 1)
	{
		func_5578(iParam0);
	}
}

void func_5578(var uParam0)//Position - 0x18FBA3
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		func_5580(uParam0, iVar0);
		func_5579(&(uParam0->f_1357.f_288[iVar0]));
		iVar0++;
	}
}

void func_5579(var uParam0)//Position - 0x18FBD8
{
	int iVar0;
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		return;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(*uParam0))
	{
		return;
	}
	iVar0 = NETWORK::NET_TO_PED(*uParam0);
	PED::DELETE_PED(&iVar0);
	__LIB_1__::func_445(uParam0);
	*uParam0 = 0;
}

void func_5580(var uParam0, int iParam1)//Position - 0x18FC15
{
	if (uParam0->f_1357.f_175[iParam1] == -1)
	{
		return;
	}
	NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(uParam0->f_1357.f_175[iParam1]);
}

void func_5581(int* iParam0)//Position - 0x18FC3E
{
	int iVar0;
	__LIB_3__::func_122(&(iParam0->f_15));
	iParam0->f_15 = -1;
	func_4993(0);
	if (func_5593(iParam0))
	{
		func_4992(1);
	}
	func_5008(iParam0);
	func_5007();
	__LIB_1__::func_91();
	if (iParam0->f_8 == 7)
	{
		func_5016(iParam0);
	}
	func_5592(iParam0);
	func_4994(iParam0);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		__LIB_40__::func_989(&(iParam0->f_1212[iVar0 /*23*/]));
		iVar0++;
	}
	func_5589();
	func_5582(iParam0);
	HUD::CLEAR_HELP(true);
}

void func_5582(int* iParam0)//Position - 0x18FCBF
{
	func_5586();
	func_5585(iParam0);
	func_5583(iParam0);
	func_5585(iParam0);
}

void func_5583(int* iParam0)//Position - 0x18FCDD
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_817))
	{
		OBJECT::DELETE_OBJECT(&(iParam0->f_817));
		iParam0->f_817 = 0;
	}
	func_5584(iParam0);
	func_5019(iParam0);
}

void func_5584(var uParam0)//Position - 0x18FD0C
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 24)
	{
		func_4924(uParam0, iVar0);
		iVar0++;
	}
}

void func_5585(int* iParam0)//Position - 0x18FD32
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_1212[iVar0 /*23*/]))
		{
			OBJECT::DELETE_OBJECT(&(iParam0->f_1212[iVar0 /*23*/]));
			iParam0->f_1212[iVar0 /*23*/] = 0;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_1212[iVar0 /*23*/].f_1))
		{
			OBJECT::DELETE_OBJECT(&(iParam0->f_1212[iVar0 /*23*/].f_1));
			iParam0->f_1212[iVar0 /*23*/].f_1 = 0;
		}
		iVar0++;
	}
}

void func_5586()//Position - 0x18FDA3
{
	func_5588();
	func_5587();
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_5032(0));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_5032(1));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_4879());
}

void func_5587()//Position - 0x18FDCD
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_4906(0));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_4906(1));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_4906(2));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_4906(3));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_4906(4));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_4906(5));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_4906(6));
}

void func_5588()//Position - 0x18FE14
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_5138(0));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_5138(1));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_5138(2));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_5138(3));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_5138(4));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_5138(5));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_5138(6));
}

void func_5589()//Position - 0x18FE5B
{
	func_4991();
	func_5590();
}

void func_5590()//Position - 0x18FE6B
{
	STREAMING::REMOVE_ANIM_DICT(__LIB_16__::func_152(4));
}

void func_5592(int* iParam0)//Position - 0x18FE90
{
	if (iParam0->f_771 != 0)
	{
		CAM::DESTROY_CAM(iParam0->f_771, false);
	}
	if (iParam0->f_772 != 0)
	{
		CAM::DESTROY_CAM(iParam0->f_772, false);
	}
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
}

bool func_5593(var uParam0)//Position - 0x18FECA
{
	return (((((((!__LIB_3__::func_366() && !__LIB_1__::func_584()) && !__LIB_0__::func_629()) && !__LIB_5__::func_845()) && !__LIB_3__::func_171(PLAYER::PLAYER_ID())) && !PLAYER::IS_PLAYER_TELEPORT_ACTIVE()) && !Global_2667225.f_2681) && uParam0->f_8 > 2);
}

void func_5595()//Position - 0x18FF3F
{
	if (Global_1966100)
	{
		Global_1966100 = 0;
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, false, -1);
	__LIB_0__::func_895(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&(Local_115.f_1357), 295, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&(Local_115.f_1652), 1057, 0);
	if (!__LIB_0__::func_934())
	{
		func_5575();
	}
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_5602(&Local_115);
	}
	func_5596(&Local_115);
	while (func_1914() && CAM::IS_SCREEN_FADED_OUT())
	{
		if (Global_1966100)
		{
			Global_1966100 = 0;
			func_5575();
			return;
		}
		if (__LIB_0__::func_959())
		{
			func_5575();
			return;
		}
		SYSTEM::WAIT(0);
	}
}

void func_5596(int* iParam0)//Position - 0x18FFD5
{
	func_5601(iParam0);
	func_5598();
	func_5597();
}

void func_5597()//Position - 0x18FFEB
{
	STREAMING::REQUEST_ANIM_DICT(__LIB_16__::func_152(4));
}

void func_5598()//Position - 0x18FFFC
{
	func_5600();
	func_5599();
	STREAMING::REQUEST_MODEL(func_5032(0));
	STREAMING::REQUEST_MODEL(func_5032(1));
	STREAMING::REQUEST_MODEL(func_4879());
}

void func_5599()//Position - 0x19002A
{
	STREAMING::REQUEST_MODEL(func_4906(0));
	STREAMING::REQUEST_MODEL(func_4906(1));
	STREAMING::REQUEST_MODEL(func_4906(2));
	STREAMING::REQUEST_MODEL(func_4906(3));
	STREAMING::REQUEST_MODEL(func_4906(4));
	STREAMING::REQUEST_MODEL(func_4906(5));
	STREAMING::REQUEST_MODEL(func_4906(6));
}

void func_5600()//Position - 0x190071
{
	STREAMING::REQUEST_MODEL(func_5138(0));
	STREAMING::REQUEST_MODEL(func_5138(1));
	STREAMING::REQUEST_MODEL(func_5138(2));
	STREAMING::REQUEST_MODEL(func_5138(3));
	STREAMING::REQUEST_MODEL(func_5138(4));
	STREAMING::REQUEST_MODEL(func_5138(5));
	STREAMING::REQUEST_MODEL(func_5138(6));
}

void func_5601(var uParam0)//Position - 0x1900B8
{
	struct<3> Var0;
	Var0 = { __LIB_16__::func_151(0) };
	uParam0->f_771 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), Var0, 0f, 0f, 0f, 65f, false, 2);
	uParam0->f_772 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_ANIMATED_CAMERA"), Var0, 0f, 0f, 0f, 65f, false, 2);
}

void func_5602(int* iParam0)//Position - 0x190101
{
	func_5604(iParam0);
	func_5603();
	func_4774();
	func_4780();
	func_5095(&(iParam0->f_727), -1);
	func_5095(&(iParam0->f_1357.f_175), -1);
	MISC::SET_BIT(&(iParam0->f_1357.f_174), 1);
}

void func_5603()//Position - 0x19013D
{
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(NETWORK::GET_NUM_CREATED_MISSION_PEDS(false) + 6);
}

void func_5604(var uParam0)//Position - 0x190150
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = uParam0->f_1357.f_263;
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		uParam0->f_1357.f_263[iVar0] = __LIB_0__::func_162();
		iVar0++;
	}
}

