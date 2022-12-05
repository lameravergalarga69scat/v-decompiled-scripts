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
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
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
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96[130] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_97[130] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	var uLocal_101[4] = { 0, 0, 0, 0 };
	var uLocal_102[4] = { 0, 0, 0, 0 };
	int iLocal_103[4] = { 0, 0, 0, 0 };
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	struct<3> Local_113[130];
	var uLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	int iLocal_124[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_125 = 0;
	int iLocal_126[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	struct<2> Local_129 = { -1, -1 } ;
	struct<730> Local_130 = { 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10 } ;
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
	struct<535> Local_151 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 32, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32 } ;
	var uLocal_152 = -1;
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
	var uLocal_174 = -1082130432;
	var uLocal_175 = 3;
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
	var uLocal_191 = -1;
	var uLocal_192 = 0;
	var uLocal_193 = -1;
	var uLocal_194 = -1;
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
	var uLocal_216 = -1082130432;
	var uLocal_217 = 3;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = -1;
	var uLocal_234 = 0;
	var uLocal_235 = -1;
	var uLocal_236 = -1;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = -1082130432;
	var uLocal_259 = 3;
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
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = -1;
	var uLocal_276 = 0;
	var uLocal_277 = -1;
	var uLocal_278 = -1;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = -1082130432;
	var uLocal_301 = 3;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = -1;
	var uLocal_318 = 0;
	var uLocal_319 = -1;
	var uLocal_320 = -1;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = -1082130432;
	var uLocal_343 = 3;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = -1;
	var uLocal_360 = 0;
	var uLocal_361 = -1;
	var uLocal_362 = -1;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
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
	var uLocal_384 = -1082130432;
	var uLocal_385 = 3;
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
	var uLocal_401 = -1;
	var uLocal_402 = 0;
	var uLocal_403 = -1;
	var uLocal_404 = -1;
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
	var uLocal_426 = -1082130432;
	var uLocal_427 = 3;
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
	var uLocal_443 = -1;
	var uLocal_444 = 0;
	var uLocal_445 = -1;
	var uLocal_446 = -1;
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
	var uLocal_468 = -1082130432;
	var uLocal_469 = 3;
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
	var uLocal_485 = -1;
	var uLocal_486 = 0;
	var uLocal_487 = -1;
	var uLocal_488 = -1;
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
	var uLocal_510 = -1082130432;
	var uLocal_511 = 3;
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
	var uLocal_527 = -1;
	var uLocal_528 = 0;
	var uLocal_529 = -1;
	var uLocal_530 = -1;
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
	var uLocal_552 = -1082130432;
	var uLocal_553 = 3;
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
	var uLocal_569 = -1;
	var uLocal_570 = 0;
	var uLocal_571 = -1;
	var uLocal_572 = -1;
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
	var uLocal_594 = -1082130432;
	var uLocal_595 = 3;
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
	var uLocal_611 = -1;
	var uLocal_612 = 0;
	var uLocal_613 = -1;
	var uLocal_614 = -1;
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
	var uLocal_636 = -1082130432;
	var uLocal_637 = 3;
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
	var uLocal_653 = -1;
	var uLocal_654 = 0;
	var uLocal_655 = -1;
	var uLocal_656 = -1;
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
	var uLocal_678 = -1082130432;
	var uLocal_679 = 3;
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
	var uLocal_695 = -1;
	var uLocal_696 = 0;
	var uLocal_697 = -1;
	var uLocal_698 = -1;
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
	var uLocal_720 = -1082130432;
	var uLocal_721 = 3;
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
	var uLocal_737 = -1;
	var uLocal_738 = 0;
	var uLocal_739 = -1;
	var uLocal_740 = -1;
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
	var uLocal_762 = -1082130432;
	var uLocal_763 = 3;
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
	var uLocal_779 = -1;
	var uLocal_780 = 0;
	var uLocal_781 = -1;
	var uLocal_782 = -1;
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
	var uLocal_804 = -1082130432;
	var uLocal_805 = 3;
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
	var uLocal_821 = -1;
	var uLocal_822 = 0;
	var uLocal_823 = -1;
	var uLocal_824 = -1;
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
	var uLocal_846 = -1082130432;
	var uLocal_847 = 3;
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
	var uLocal_863 = -1;
	var uLocal_864 = 0;
	var uLocal_865 = -1;
	var uLocal_866 = -1;
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
	var uLocal_888 = -1082130432;
	var uLocal_889 = 3;
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
	var uLocal_905 = -1;
	var uLocal_906 = 0;
	var uLocal_907 = -1;
	var uLocal_908 = -1;
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
	var uLocal_930 = -1082130432;
	var uLocal_931 = 3;
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
	var uLocal_947 = -1;
	var uLocal_948 = 0;
	var uLocal_949 = -1;
	var uLocal_950 = -1;
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
	var uLocal_972 = -1082130432;
	var uLocal_973 = 3;
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
	var uLocal_989 = -1;
	var uLocal_990 = 0;
	var uLocal_991 = -1;
	var uLocal_992 = -1;
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
	var uLocal_1014 = -1082130432;
	var uLocal_1015 = 3;
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
	var uLocal_1031 = -1;
	var uLocal_1032 = 0;
	var uLocal_1033 = -1;
	var uLocal_1034 = -1;
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
	var uLocal_1056 = -1082130432;
	var uLocal_1057 = 3;
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
	var uLocal_1073 = -1;
	var uLocal_1074 = 0;
	var uLocal_1075 = -1;
	var uLocal_1076 = -1;
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
	var uLocal_1098 = -1082130432;
	var uLocal_1099 = 3;
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
	var uLocal_1115 = -1;
	var uLocal_1116 = 0;
	var uLocal_1117 = -1;
	var uLocal_1118 = -1;
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
	var uLocal_1140 = -1082130432;
	var uLocal_1141 = 3;
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
	var uLocal_1157 = -1;
	var uLocal_1158 = 0;
	var uLocal_1159 = -1;
	var uLocal_1160 = -1;
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
	var uLocal_1182 = -1082130432;
	var uLocal_1183 = 3;
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
	var uLocal_1199 = -1;
	var uLocal_1200 = 0;
	var uLocal_1201 = -1;
	var uLocal_1202 = -1;
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
	var uLocal_1224 = -1082130432;
	var uLocal_1225 = 3;
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
	var uLocal_1241 = -1;
	var uLocal_1242 = 0;
	var uLocal_1243 = -1;
	var uLocal_1244 = -1;
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
	var uLocal_1266 = -1082130432;
	var uLocal_1267 = 3;
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
	var uLocal_1283 = -1;
	var uLocal_1284 = 0;
	var uLocal_1285 = -1;
	var uLocal_1286 = -1;
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
	var uLocal_1308 = -1082130432;
	var uLocal_1309 = 3;
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
	var uLocal_1325 = -1;
	var uLocal_1326 = 0;
	var uLocal_1327 = -1;
	var uLocal_1328 = -1;
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
	var uLocal_1350 = -1082130432;
	var uLocal_1351 = 3;
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
	var uLocal_1367 = -1;
	var uLocal_1368 = 0;
	var uLocal_1369 = -1;
	var uLocal_1370 = -1;
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
	var uLocal_1392 = -1082130432;
	var uLocal_1393 = 3;
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
	var uLocal_1409 = -1;
	var uLocal_1410 = 0;
	var uLocal_1411 = -1;
	var uLocal_1412 = -1;
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
	var uLocal_1434 = -1082130432;
	var uLocal_1435 = 3;
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
	var uLocal_1451 = -1;
	var uLocal_1452 = 0;
	var uLocal_1453 = -1;
	var uLocal_1454 = -1;
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
	var uLocal_1476 = -1082130432;
	var uLocal_1477 = 3;
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
	var uLocal_1493 = -1;
	var uLocal_1494 = 0;
	var uLocal_1495 = -1;
	struct<12> Local_1496 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<5> Local_1497[32];
	struct<21> Local_1498 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!__LIB_4__.func_7(ScriptParam_1498))
		{
			__LIB_7__.func_5();
		}
	}
	while (true)
	{
		__LIB_0__.func_671();
		if (__LIB_6__.func_949() || __LIB_19__.func_764())
		{
			__LIB_7__.func_5();
		}
		__LIB_7__.func_2();
		switch (func_660(PLAYER::NETWORK_PLAYER_ID_TO_INT()))
		{
			case 0:
				if (__LIB_24__.func_824() == 1)
				{
					if (func_657())
					{
						func_656(PLAYER::NETWORK_PLAYER_ID_TO_INT(), 1);
					}
				}
				break;
			case 1:
				if (__LIB_24__.func_824() == 1)
				{
					func_143();
					func_131();
				}
				else if (__LIB_24__.func_824() == 3)
				{
					func_656(PLAYER::NETWORK_PLAYER_ID_TO_INT(), 3);
				}
				break;
			case 3:
				__LIB_7__.func_5();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (__LIB_24__.func_824())
			{
				case 0:
					if (func_113())
					{
						func_112(1);
					}
					break;
				case 1:
					if (Local_130.f_8 == 6)
					{
						func_112(2);
					}
					else
					{
						func_3();
					}
					break;
				case 2:
					if (__LIB_2__.func_47(&uLocal_111, 1000, 0))
					{
						func_112(3);
					}
					break;
				case 3:
					__LIB_7__.func_5();
					break;
				}
		}
	}
}

void func_3()//Position - 0x238
{
	if (func_35(2, 0, 0, 0, 0))
	{
		if (!BitTest(Local_130.f_2, 2))
		{
			Local_130.f_1 = NETWORK::GET_NETWORK_TIME();
			MISC::SET_BIT(&(Local_130.f_2), 2);
		}
	}
	switch (Local_130.f_8)
	{
		case 0:
			if (func_34())
			{
				if (func_24())
				{
					func_23(1);
				}
			}
			else
			{
				func_23(1);
			}
			break;
		case 1:
			if (__LIB_2__.func_47(&(Local_130.f_667), Global_262145.f_11586 /* Tunable: CHECKPOINT_EVENT_START_COUNTDOWN_TIME */, 0) || BitTest(Local_130.f_2, 2))
			{
				func_23(2);
			}
			func_24();
			break;
		case 2:
			Local_130.f_9 = NETWORK::GET_NETWORK_TIME();
			func_23(3);
			break;
		case 3:
			if ((func_22() || __LIB_2__.func_47(&(Local_130.f_661), Global_262145.f_11585 /* Tunable: CHECKPOINT_EVENT_TIME_LIMIT */, 0)) || BitTest(Local_130.f_2, 2))
			{
				if (!BitTest(Local_130.f_2, 1) && __LIB_0__.func_114())
				{
					__LIB_0__.func_495(&(Local_130.f_661), 0, 0);
					MISC::SET_BIT(&(Local_130.f_2), 1);
				}
				else
				{
					func_23(4);
					Local_130.f_1 = NETWORK::GET_NETWORK_TIME();
				}
			}
			func_8();
			iLocal_92++;
			if (iLocal_92 >= Local_130.f_709)
			{
				iLocal_92 = 0;
			}
			func_24();
			break;
		case 4:
			if (__LIB_2__.func_47(&(Local_130.f_663), 20000, 0) || func_5())
			{
				if (func_34())
				{
					__LIB_0__.func_495(&(Local_130.f_669), 0, 0);
					func_23(5);
				}
				else
				{
					func_23(6);
				}
			}
			func_24();
			break;
		case 5:
			if (func_4())
			{
				func_23(6);
			}
			break;
		case 6:
			break;
	}
}

int func_4()//Position - 0x3D8
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_130.f_729[iVar0 /*2*/].f_1) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_ENT(Local_130.f_729[iVar0 /*2*/].f_1), false))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_5()//Position - 0x426
{
	int iVar0;
	bool bVar1;
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			bVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			if (!__LIB_2__.func_197(bVar1))
			{
				if ((!BitTest(Local_1497[iVar0 /*5*/].f_2, 0) || Local_1497[iVar0 /*5*/].f_3 != 6) || (BitTest(Local_130.f_2, 0) && !BitTest(Local_1497[iVar0 /*5*/].f_2, 1)))
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

void func_8()//Position - 0x4E1
{
	int iVar0;
	int iVar1;
	bool bVar2;
	var uVar3;
	bVar2 = false;
	while (bVar2 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(bVar2)))
		{
			MISC::SET_BIT(&uVar3, bVar2);
		}
		else
		{
			func_19(bVar2);
		}
		bVar2++;
	}
	bVar2 = false;
	while (bVar2 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (BitTest(uVar3, bVar2))
		{
			if (func_18(bVar2))
			{
				iVar1++;
			}
			iVar0++;
			func_15(bVar2);
			func_9(bVar2);
			MISC::SET_BIT(&(Local_130.f_673), bVar2);
		}
		bVar2++;
	}
	if (iVar0 > Local_130.f_727)
	{
		Local_130.f_727 = iVar0;
	}
	else
	{
		Local_130.f_726 = (Local_130.f_727 - iVar0);
	}
	if (iVar1 > Local_130.f_728)
	{
		Local_130.f_728 = iVar1;
	}
}

void func_9(bool bParam0)//Position - 0x59E
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = Local_1497[bParam0 /*5*/].f_4;
	iVar2 = -2;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (Local_130.f_674[iVar1] == bParam0)
		{
			iVar1 = 32;
		}
		else if (iVar2 >= -1)
		{
			if (iVar2 >= 0)
			{
				__LIB_1__.func_418(&(Local_130.f_674[iVar1]), &iVar2);
			}
		}
		else if (Local_130.f_674[iVar1] < 0 || iVar0 > Local_1497[Local_130.f_674[iVar1] /*5*/].f_4)
		{
			iVar2 = Local_130.f_674[iVar1];
			if (iVar0 != 0)
			{
				func_10(Local_130.f_674[iVar1], bParam0, iVar1);
			}
			Local_130.f_674[iVar1] = bParam0;
			iVar3 = iVar1 + 1;
			while (iVar3 <= 31)
			{
				if (Local_130.f_674[iVar3] == bParam0)
				{
					Local_130.f_674[iVar3] = -1;
				}
				iVar3++;
			}
		}
		iVar1++;
	}
}

void func_10(var uParam0, int iParam1, int iParam2)//Position - 0x687
{
	struct<14> Var0;
	int iVar1;
	iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iParam1));
	if (iParam2 == 0)
	{
		Var0.f_2 = -1111422293;
		Var0.f_10 = iVar1;
		__LIB_1__.func_226(Var0, __LIB_6__.func_553(1));
	}
}

void func_15(bool bParam0)//Position - 0x7CE
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(bParam0));
	iVar0 = iVar3;
	if (Global_2815059.f_5043.f_38[iVar0] >= 0)
	{
		iVar4 = Global_2815059.f_5043.f_38[iVar0];
		iVar1 = Global_2815059.f_5043.f_5[iVar0];
		if (!BitTest(Local_130.f_3[__LIB_1__.func_403(iVar4)], __LIB_6__.func_950(iVar4)))
		{
			if (BitTest(Global_2815059.f_5043[__LIB_1__.func_403(iVar4)], __LIB_6__.func_950(iVar4)))
			{
				if (__LIB_2__.func_47(&uLocal_109, 750, 0))
				{
					if (iVar1 != 0)
					{
						if (iVar1 < iVar2 || iVar2 == 0)
						{
							iVar2 = iVar1;
							Local_130.f_10[iVar4 /*5*/].f_3 = bParam0;
							Global_2815059.f_5043.f_38[iVar0] = -1;
							MISC::SET_BIT(&(Local_130.f_3[__LIB_1__.func_403(iVar4)]), __LIB_6__.func_950(iVar4));
							Local_130.f_708 = (Local_130.f_708 - 1);
						}
					}
				}
			}
		}
	}
}

int func_18(bool bParam0)//Position - 0x907
{
	if (bParam0 >= 0 && bParam0 < 32)
	{
		return Local_1497[bParam0 /*5*/].f_4 > 0;
	}
	return 0;
}

void func_19(bool bParam0)//Position - 0x92F
{
	int iVar0;
	int iVar1;
	if (BitTest(Local_130.f_673, bParam0))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (Local_130.f_674[iVar0] == bParam0)
			{
				Local_130.f_674[iVar0] = -1;
				iVar0 = 32;
			}
			iVar0++;
		}
		iVar1 = 0;
		while (iVar1 < Local_130.f_709)
		{
			if (Local_130.f_10[iVar1 /*5*/].f_3 == bParam0)
			{
				Local_130.f_10[iVar1 /*5*/].f_3 = -1;
			}
			iVar1++;
		}
		MISC::CLEAR_BIT(&(Local_130.f_673), bParam0);
	}
}

int func_22()//Position - 0x9F9
{
	if (Local_130.f_708 > 0)
	{
		return 0;
	}
	if (__LIB_2__.func_47(&(Local_130.f_671), 750, 0))
	{
		MISC::SET_BIT(&(Local_130.f_2), 0);
		return 1;
	}
	return 0;
}

void func_23(int iParam0)//Position - 0xA2F
{
	Local_130.f_8 = iParam0;
}

int func_24()//Position - 0xA3E
{
	struct<2> Var0;
	struct<3> Var1;
	float fVar2;
	int iVar3;
	if (func_34())
	{
		Var0 = { Local_130.f_729[iLocal_94 /*2*/] };
		if (__LIB_0__.func_584(Var0.f_0))
		{
			if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Var0.f_1))
			{
				if (__LIB_1__.func_421(iLocal_94, &Var1, &fVar2))
				{
					Local_130.f_713[iLocal_94] = func_29(iLocal_94);
					if (BitTest(Local_1497[Local_130.f_713[iLocal_94] /*5*/].f_1, iLocal_94))
					{
						if (__LIB_18__.func_220(&(Local_130.f_729[iLocal_94 /*2*/].f_1), Var0.f_0, Var1, fVar2, 1, 1, 1, 0, 1, 0, 0, 0, 0, 0))
						{
							VEHICLE::SET_VEHICLE_DOORS_LOCKED(NETWORK::NET_TO_VEH(Local_130.f_729[iLocal_94 /*2*/].f_1), 1);
							ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(NETWORK::NET_TO_VEH(Local_130.f_729[iLocal_94 /*2*/].f_1), true);
							VEHICLE::SET_VEHICLE_INFLUENCES_WANTED_LEVEL(NETWORK::NET_TO_VEH(Local_130.f_729[iLocal_94 /*2*/].f_1), false);
							__LIB_1__.func_419(NETWORK::NET_TO_VEH(Local_130.f_729[iLocal_94 /*2*/].f_1), 1);
							if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Not_Allow_As_Saved_Veh", 3))
							{
								DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(Local_130.f_729[iLocal_94 /*2*/].f_1), "Not_Allow_As_Saved_Veh", 1);
							}
							if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
							{
								if (DECORATOR::DECOR_EXIST_ON(NETWORK::NET_TO_VEH(Local_130.f_729[iLocal_94 /*2*/].f_1), "MPBitset"))
								{
									iVar3 = DECORATOR::DECOR_GET_INT(NETWORK::NET_TO_VEH(Local_130.f_729[iLocal_94 /*2*/].f_1), "MPBitset");
								}
								MISC::SET_BIT(&iVar3, 10);
								MISC::SET_BIT(&iVar3, 11);
								DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(Local_130.f_729[iLocal_94 /*2*/].f_1), "MPBitset", iVar3);
							}
							Local_130.f_713[iLocal_94] = -1;
						}
					}
				}
			}
			iLocal_94++;
			if (iLocal_94 >= 10)
			{
				iLocal_94 = 0;
				return 1;
			}
		}
		return 0;
	}
	return 1;
}

int func_29(int iParam0)//Position - 0xE98
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	struct<3> Var4;
	var uVar5;
	bool bVar6;
	fVar2 = 1000000f;
	if (__LIB_1__.func_421(iParam0, &Var4, &uVar5))
	{
		iVar0 = 0;
		while (iVar0 <= (NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1))
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
			{
				bVar6 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
				if (__LIB_1__.func_264(bVar6, 1, 1))
				{
					fVar3 = __LIB_1__.func_420(__LIB_1__.func_265(bVar6), Var4);
					if (fVar3 < fVar2)
					{
						fVar2 = fVar3;
						iVar1 = iVar0;
					}
				}
			}
			iVar0++;
		}
	}
	return iVar1;
}

bool func_34()//Position - 0x10DC
{
	return Local_130.f_707;
}

int func_35(int iParam0, int iParam1, bool bParam2, char* sParam3, char* sParam4)//Position - 0x10EA
{
	if (__LIB_1__.func_425(PLAYER::PLAYER_ID(), 0) || __LIB_18__.func_259(PLAYER::PLAYER_ID(), 0))
	{
		if (__LIB_1__.func_570(PLAYER::PLAYER_ID()) || __LIB_2__.func_308(PLAYER::PLAYER_ID()))
		{
			bParam2 = false;
		}
	}
	if (NETWORK::NETWORK_GET_TOTAL_NUM_PLAYERS() < iParam0)
	{
		if (bParam2)
		{
			func_43(sParam3, sParam4, 1);
		}
		if (__LIB_2__.func_300(26, -1))
		{
			__LIB_2__.func_221(26, -1);
		}
		return 1;
	}
	if (__LIB_0__.func_649(&(Global_1836844.f_18)))
	{
		if (!__LIB_2__.func_47(&(Global_1836844.f_18), 7500, 0))
		{
			return 0;
		}
		__LIB_0__.func_579(&(Global_1836844.f_18));
	}
	if (__LIB_1__.func_422())
	{
		if (bParam2)
		{
			func_43(sParam3, sParam4, 0);
		}
		if (__LIB_2__.func_300(26, -1))
		{
			__LIB_2__.func_221(26, -1);
		}
		return 1;
	}
	if (iParam1 && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() < iParam0)
	{
		if (bParam2)
		{
			func_43(sParam3, sParam4, 1);
		}
		if (__LIB_2__.func_300(26, -1))
		{
			__LIB_2__.func_221(26, -1);
		}
		return 1;
	}
	return 0;
}

void func_43(char* sParam0, char* sParam1, bool bParam2)//Position - 0x12FB
{
	if ((!BitTest(Global_1836844.f_1, 2) && !__LIB_1__.func_417(PLAYER::PLAYER_ID())) && !__LIB_2__.func_197(PLAYER::PLAYER_ID()))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		{
			sParam0 = "FMEVEN_NUM1" /* GXT: EVENT OVER */;
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		{
			if (bParam2)
			{
				sParam1 = "FMEVEN_NUM2" /* GXT: Not enough players in the session */;
			}
			else
			{
				sParam1 = "FMEVEN_NUM3" /* GXT: Not enough players available in the session */;
			}
		}
		func_44(66, sParam0, sParam1, 1, -1, 2, 1, 0);
		MISC::SET_BIT(&(Global_1836844.f_1), 2);
	}
}

int func_44(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x136F
{
	struct<80> Var0;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	__LIB_0__.func_975(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam5;
	Var0.f_16 = iParam6;
	if (iParam7 != 0)
	{
		__LIB_6__.func_896(&(Var0.f_69), iParam7);
	}
	return func_45(&Var0);
}

int func_45(var uParam0)//Position - 0x13EF
{
	int iVar0;
	if (uParam0->f_1 == 1)
	{
		if (Global_2703735.f_2722)
		{
			return 0;
		}
	}
	func_60(uParam0, uParam0->f_17);
	__LIB_6__.func_928(uParam0);
	if (__LIB_0__.func_175())
	{
		__LIB_6__.func_928(uParam0);
	}
	if (__LIB_0__.func_968(uParam0->f_1))
	{
		__LIB_24__.func_964();
		if (Global_2703735.f_2400[0 /*80*/].f_2 == 0)
		{
			Global_2703735.f_2400[0 /*80*/] = { *uParam0 };
			if (__LIB_0__.func_517(uParam0->f_69, 8192))
			{
				Global_1931432 = 1;
			}
			return 1;
		}
		if (((Global_2703735.f_2400[0 /*80*/].f_1 == 13 || Global_2703735.f_2400[0 /*80*/].f_1 == 53) || Global_2703735.f_2400[0 /*80*/].f_1 == 54) || Global_2703735.f_2400[0 /*80*/].f_1 == 58)
		{
			Global_2703735.f_2400[0 /*80*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2703735.f_2400[iVar0 + 1 /*80*/] = { Global_2703735.f_2400[iVar0 /*80*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2703735.f_2400[1 /*80*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2703735.f_2400[iVar0 /*80*/].f_2 == 0)
		{
			Global_2703735.f_2400[iVar0 /*80*/] = { *uParam0 };
			if (iVar0 == 0)
			{
				__LIB_24__.func_964();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				__LIB_6__.func_896(&(Global_2703735.f_2400[iVar0 /*80*/].f_69), 2);
				Global_2703735.f_2400[iVar0 /*80*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !__LIB_0__.func_517(uParam0->f_69, 128))
			{
				if (__LIB_0__.func_966(Global_2703735.f_2400[iVar0 /*80*/].f_1))
				{
					Global_2703735.f_2400[iVar0 /*80*/].f_2 = 5;
					__LIB_6__.func_896(&(Global_2703735.f_2400[iVar0 /*80*/].f_69), 1);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_60(var uParam0, bool bParam1)//Position - 0x1A4E
{
	if (__LIB_0__.func_970(uParam0->f_1))
	{
		uParam0->f_73 = 1;
	}
	if (bParam1 == __LIB_0__.func_160() || !__LIB_1__.func_264(bParam1, 0, 1))
	{
		return;
	}
	if (__LIB_0__.func_966(uParam0->f_1))
	{
		if (uParam0->f_71 == 1)
		{
			uParam0->f_73 = func_61(bParam1, -2, 0, 0, 0);
		}
	}
}

int func_61(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x1AA5
{
	int iVar0;
	int iVar1;
	if (__LIB_7__.func_211(bParam0) && !bParam4)
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam1 == -2)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(bParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4718592.f_111249[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((__LIB_7__.func_211(PLAYER::PLAYER_ID()) || (__LIB_0__.func_80() && __LIB_0__.func_728())) && !BitTest(Global_2815059.f_4660, 31)) && !bParam4)
	{
		iVar1 = __LIB_0__.func_727();
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (PED::IS_PED_A_PLAYER(iVar1))
			{
				if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) != -1)
				{
					if (__LIB_1__.func_264(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
						{
							if (Global_4718592.f_111249[iParam1] != -1)
							{
								return func_92(iParam1, bParam0, 0);
							}
							else
							{
								return func_74(bParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_74(bParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
			{
				if (Global_4718592.f_111249[iParam1] != -1)
				{
					return func_92(iParam1, bParam0, 0);
				}
				else
				{
					return __LIB_7__.func_82(0, -1, 0);
				}
			}
			else
			{
				return __LIB_7__.func_82(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
	{
		if (Global_4718592.f_111249[iParam1] != -1)
		{
			return func_92(iParam1, bParam0, 0);
		}
		else
		{
			return func_74(bParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
		}
	}
	return func_74(bParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}

int func_74(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x21F1
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (iParam2 == -2)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(bParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = bParam0;
	if (iVar2 > -1)
	{
		if (Global_1853348[iVar2 /*834*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (__LIB_7__.func_63())
			{
				iVar3 = __LIB_7__.func_177(bParam0);
				if (!iVar3 == -1)
				{
					return __LIB_6__.func_890(iVar3);
				}
			}
			if ((__LIB_1__.func_423(bParam1, bParam0, iVar0, 0) && !BitTest(Global_4718592.f_15, 18)) || ((__LIB_0__.func_610(PLAYER::GET_PLAYER_TEAM(bParam1), PLAYER::GET_PLAYER_TEAM(bParam0), 0) && BitTest(Global_4718592.f_15, 23)) && !BitTest(Global_4718592.f_15, 18)))
			{
				return __LIB_0__.func_720(1);
			}
			else if (BitTest(Global_4718592.f_15, 26))
			{
				return __LIB_0__.func_722(1);
			}
			else
			{
				return __LIB_24__.func_962(bParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1836584 || Global_1836575) || Global_1853348[bParam0 /*834*/] == 0)
		{
			if (bParam0 == bParam1 || (Global_1836584 == 1 && Global_1836594 == 0))
			{
				return __LIB_0__.func_720(1);
			}
			else
			{
				return __LIB_24__.func_962(bParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1836579 && Global_1836068.f_14 == bParam0)
		{
			return 28;
		}
	}
	iVar4 = __LIB_7__.func_177(bParam0);
	if (!iVar4 == -1)
	{
		return __LIB_6__.func_890(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_92(int iParam0, bool bParam1, bool bParam2)//Position - 0x26DB
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar1 = Global_1058069.f_14[iParam0];
	if (__LIB_7__.func_63())
	{
		iVar2 = __LIB_7__.func_177(bParam1);
		if (!iVar2 == -1)
		{
			return __LIB_6__.func_890(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (BitTest(Global_4718592.f_658[iParam0 /*22957*/].f_7911[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && bParam1 != __LIB_0__.func_160())
	{
		if (Global_4718592.f_111249[iParam0] != -1 && Global_4718592.f_111249[iParam0] <= 4)
		{
			if (Global_4718592.f_111249[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4718592.f_111249[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4718592.f_111249[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4718592.f_111249[iParam0] == 4)
			{
				if (BitTest(Global_4718592.f_15, 29))
				{
					iVar0 = 21;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else
			{
				iVar0 = Global_4718592.f_111249[iParam0];
			}
		}
		else
		{
			iVar0 = __LIB_24__.func_962(bParam1, !bParam2, iParam0, 0);
		}
		if (BitTest(Global_4718592.f_21, 13))
		{
			iVar0 = __LIB_0__.func_726(iParam0);
		}
		if (BitTest(Global_4718592.f_24, 29))
		{
			iVar0 = 0;
		}
		if (BitTest(Global_4718592.f_15, 26) && !__LIB_0__.func_610(iParam0, PLAYER::GET_PLAYER_TEAM(bParam1), 0))
		{
			iVar0 = __LIB_0__.func_722(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

void func_112(int iParam0)//Position - 0x2C7C
{
	Local_130.f_0 = iParam0;
}

int func_113()//Position - 0x2C89
{
	int iVar0;
	if (__LIB_2__.func_47(&(Local_130.f_665), 750, 0))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			Local_130.f_674[iVar0] = -1;
			iVar0++;
		}
		__LIB_0__.func_579(&(Local_130.f_661));
		func_116();
		if (func_34())
		{
			iVar0 = 0;
			while (iVar0 < 10)
			{
				Local_130.f_713[iVar0] = func_29(iVar0);
				iVar0++;
			}
			func_114();
		}
		return 1;
	}
	return 0;
}

void func_114()//Position - 0x2D01
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Local_130.f_729[iVar0 /*2*/] = func_115();
		iVar0++;
	}
}

int func_115()//Position - 0x2D2A
{
	int iVar0;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
	switch (iVar0)
	{
		case 0:
			return joaat("maverick");
		case 1:
			return joaat("mammatus");
		default:
	}
	return 0;
}

void func_116()//Position - 0x2D5E
{
	int iVar0;
	int iVar1;
	int iVar2;
	Local_130.f_709 = __LIB_6__.func_969();
	Local_130.f_708 = Local_130.f_709;
	Local_130.f_712 = func_126();
	Local_130.f_707 = func_123();
	iVar0 = func_122();
	if (Local_130.f_707)
	{
		iVar1 = 1;
	}
	func_118(__LIB_2__.func_231(132, Local_130.f_712, iVar1, 0));
	if (Local_130.f_712 == 1 && !Local_130.f_707)
	{
		Local_130.f_710 = 1;
	}
	iVar2 = 0;
	while (iVar2 < Local_130.f_709)
	{
		Local_130.f_10[iVar2 /*5*/].f_4 = iVar2;
		Local_130.f_10[iVar2 /*5*/] = { func_117(Local_130.f_712, Local_130.f_707, iVar0, iVar2) };
		iVar2++;
	}
}

Vector3 func_117(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x2E16
{
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				switch (iParam2)
				{
					case 0:
						switch (iParam3)
						{
							case 0:
								return 623.5349f, 1614.6509f, 283.748f;
							case 1:
								return 742.6324f, 1271.0992f, 388.9925f;
							case 2:
								return 682.1757f, 1204.2948f, 350.0934f;
							case 3:
								return 1779.2795f, 668.7821f, 276.3788f;
							case 4:
								return 1927.2144f, 129.7589f, 174.4281f;
							case 5:
								return 1056.9426f, -699.1728f, 78.8831f;
							case 6:
								return 2026.5355f, -1594.8741f, 262.0831f;
							case 7:
								return 2139.4236f, -2613.5798f, 20.5914f;
							case 8:
								return 1041.685f, -2882.9011f, 27.0959f;
							case 9:
								return 796.1402f, -2624.6445f, 95.127f;
							case 10:
								return 504.6169f, -3311.8013f, 22.9858f;
							case 11:
								return 416.9175f, -2684.4192f, 10.1246f;
							case 12:
								return 561.767f, -2100.6746f, 60.143f;
							case 13:
								return 872.454f, -1929.2372f, 104.4083f;
							case 14:
								return 636.6328f, -1429.945f, 15.5f;
							case 15:
								return 591.386f, -852.2912f, 50.7211f;
							case 16:
								return 471.2209f, -102.4007f, 149.7505f;
							case 17:
								return 533.762f, 143.6576f, 125.7511f;
							case 18:
								return 1112.1902f, 74.8892f, 117.7713f;
							case 19:
								return 683.9346f, 570.1795f, 165.7115f;
							case 20:
								return 1453.8324f, 1113.6754f, 134.9644f;
							case 21:
								return 1539.3142f, 1716.1719f, 125.0574f;
							case 22:
								return 1875.1918f, 1698.9182f, 109.9103f;
							case 23:
								return 2320.32f, 1669.4021f, 86.7663f;
							case 24:
								return 2337.8914f, 1358.5363f, 100.8737f;
							case 25:
								return 2727.7856f, 1558.7285f, 83.66f;
							case 26:
								return 3112.1768f, 1153.66f, 25.3827f;
							case 27:
								return 2580.8167f, 476.8322f, 121.7549f;
							case 28:
								return 2458.7f, -384.0464f, 127.5513f;
							case 29:
								return 2381.2063f, -939.2949f, 185.6516f;
							case 30:
								return 1669.2944f, -1652.9478f, 154.2478f;
							case 31:
								return 1096.7933f, -1141.6932f, 96.1055f;
							case 32:
								return 3042.8997f, -291.4662f, 22.8304f;
							case 33:
								return 2645.3508f, -1492.0433f, 30.646f;
							case 34:
								return 1214.3737f, -2353.274f, 66.8f;
							case 35:
								return 1841.6165f, -2497.9714f, 101.8039f;
							case 36:
								return 1872.0353f, -761.149f, 105f;
							case 37:
								return 1657.6649f, -413.7629f, 228.448f;
							case 38:
								return 1589.2289f, -1981.9009f, 161.2293f;
							case 39:
								return 991.7729f, -1477.0642f, 60.0276f;
							case 40:
								return 2609.9119f, -2096.3584f, 35.0044f;
							case 41:
								return 1121.1902f, 725.4341f, 170.3273f;
							case 42:
								return 2117.316f, 1024.0846f, 197f;
							case 43:
								return 727.6708f, -452.6442f, 25f;
							case 44:
								return 1211.9645f, -3285.5398f, 19.5936f;
							case 45:
								return 1499.8833f, -1276.2072f, 131.5493f;
							case 46:
								return 3381.4421f, -826.2608f, 42.8967f;
							case 47:
								return 1562.097f, 292.1506f, 494.2574f;
							case 48:
								return 2021.578f, -1993.6892f, 120f;
							case 49:
								return 757.5558f, -1196.3629f, 232.0553f;
							case 50:
								return 1887.7737f, -3474.9705f, 77.8727f;
							case 51:
								return 1083.2245f, -229.6182f, 68.6364f;
							case 52:
								return 2344.084f, -406.1672f, 91f;
							case 53:
								return 2184.8213f, 529.1252f, 241.1723f;
							case 54:
								return 1251.5414f, -1883.8093f, 50f;
							case 55:
								return 847.74f, 1781.9033f, 160.9508f;
							case 56:
								return 288.3698f, -1601.3456f, 52f;
							case 57:
								return 2648.1313f, -731.5316f, 99.7f;
							case 58:
								return 1937.1173f, 1337.4464f, 529.8608f;
							case 59:
								return 1512.681f, -2539.276f, 208.3091f;
							case 60:
								return 2352.986f, -1763.9081f, 136.1568f;
							case 61:
								return 2099.7317f, -1212.7279f, 178.3343f;
							case 62:
								return 1945.1599f, -957.8221f, 96.04f;
							case 63:
								return 1872.8097f, -830.1746f, 171.44f;
							case 64:
								return 1256.3923f, -1571.6293f, 90.566f;
							case 65:
								return 1818.0228f, -244.6768f, 305.9837f;
							case 66:
								return 2839.0505f, -748.0399f, 21.5008f;
							case 67:
								return 1268.6459f, -2126.0718f, 60.6975f;
							case 68:
								return 1088.6792f, -1982.8197f, 84.1204f;
							case 69:
								return 1597.2175f, -2817.0425f, 19.0498f;
							case 70:
								return 356.3379f, -2319.2256f, 67.6058f;
							case 71:
								return 692.5012f, -2330.5833f, 60.7022f;
							case 72:
								return 1070.3999f, -1835.1484f, 100.8235f;
							case 73:
								return 478.3501f, -1682.3177f, 59.7763f;
							case 74:
								return 845.2267f, -2186.3203f, 46.5743f;
							case 75:
								return 2651.6392f, -1230.8496f, 40.5824f;
							case 76:
								return 461.851f, -1460.1727f, 65.7889f;
							case 77:
								return 775.8362f, -852.0386f, 31f;
							case 78:
								return 913.9593f, -976.4005f, 81.0321f;
							case 79:
								return 970.9194f, -2510.112f, 64f;
							case 80:
								return 1096.6661f, 1222.3273f, 202.4859f;
							case 81:
								return 1978.5428f, 690.4552f, 174.2517f;
							case 82:
								return 1571.9934f, -36.6251f, 140.5239f;
							case 83:
								return 918.2688f, -675.462f, 76.6019f;
							case 84:
								return 798.097f, -1194.0201f, 32f;
							case 85:
								return 382.4527f, -31.8431f, 143.6312f;
							case 86:
								return 672.1725f, -1745.0121f, 16f;
							case 87:
								return 620.2905f, -588.2725f, 22.6129f;
							case 88:
								return 1204.3184f, 196.6229f, 79.9329f;
							case 89:
								return 2028.4021f, -2179.3965f, 105.5733f;
							case 90:
								return 1131.1833f, -2929.7693f, 33.2799f;
							case 91:
								return 654.5255f, -2634.7358f, 26.063f;
							case 92:
								return 757.272f, -30.6019f, 66.9464f;
							case 93:
								return 262.5532f, -1046.9685f, 73.6448f;
							case 94:
								return 638.4819f, -1020.9998f, 43.5236f;
							case 95:
								return 351.6616f, -2758.046f, 29.2267f;
							case 96:
								return 1613.9851f, -2243.761f, 136f;
							case 97:
								return 2947.7463f, 792.9475f, 45f;
							case 98:
								return 2608.7327f, 822.9318f, 118.6201f;
							case 99:
								return 1357.2085f, 674.4443f, 100f;
							case 100:
								return 978.4934f, -2073.071f, 1000f;
							case 101:
								return 2848.5134f, -2701.795f, 547.5851f;
							case 102:
								return 2322.2185f, -2129.6113f, 13.6809f;
							case 103:
								return 1248.603f, -2675.0422f, 145.6704f;
							case 104:
								return 2052.6917f, -252.931f, 228.334f;
							case 105:
								return 2394.9023f, 388.1578f, 194.5342f;
							case 106:
								return 3337.711f, 56.3844f, 764.684f;
							case 107:
								return 1573.0494f, 1472.5686f, 179.2061f;
							case 108:
								return 1898.3542f, 1020.6713f, 277.9648f;
							case 109:
								return 745.1586f, 232.868f, 177.0828f;
							case 110:
								return 1551.5793f, -685.6392f, 126f;
							case 111:
								return 2734.2344f, 61.798f, 25.1296f;
							case 112:
								return 2404.63f, -1485.8055f, 86.3959f;
							case 113:
								return 3033.1602f, 321.8385f, 908.0805f;
							case 114:
								return 1353.3225f, 373.6808f, 184.937f;
							case 115:
								return 1317.2625f, -737.488f, 125.2729f;
							case 116:
								return 1737.6957f, -966.1904f, 119.8332f;
							case 117:
								return 923.2643f, 978.5736f, 605.3384f;
							case 118:
								return 2823.7769f, -1483.905f, 26.8193f;
							case 119:
								return 1333.4746f, -275.2598f, 1000f;
							default:
						}
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						switch (iParam3)
						{
							case 0:
								return 2360.4287f, 1273.0941f, 63.9814f;
							case 1:
								return 2545.4219f, 342.8004f, 107.4641f;
							case 2:
								return 2483.1711f, -363.0696f, 92.7352f;
							case 3:
								return 1491.8348f, -1005.5316f, 50.5682f;
							case 4:
								return 1078.8529f, -688.3618f, 56.6151f;
							case 5:
								return 657.7627f, -1500.8582f, 8.6817f;
							case 6:
								return 1216.2662f, -2907.2776f, 4.8661f;
							case 7:
								return 958.6841f, -3079.0935f, 13.3327f;
							case 8:
								return 459.5267f, -2429.2349f, 4.7518f;
							case 9:
								return 1130.2137f, -2082.8108f, 30.0089f;
							case 10:
								return 1506.7013f, -2135.6372f, 75.4567f;
							case 11:
								return 1759.2767f, -1579.9696f, 117.9f;
							case 12:
								return 2510.4497f, -1219.3317f, 1.89f;
							case 13:
								return 2855.6038f, -1339.6016f, 14.7183f;
							case 14:
								return 2826.4104f, -743.3448f, 0.3071f;
							case 15:
								return 1236.5992f, -83.0057f, 58.7636f;
							case 16:
								return 1660.5343f, 0.3033f, 172.7744f;
							case 17:
								return 1917.6082f, 301.6851f, 161.8848f;
							case 18:
								return 2145.0034f, 146.688f, 224.1061f;
							case 19:
								return 1456.7374f, 1111.8481f, 113.334f;
							case 20:
								return 1135.6199f, 58.6667f, 79.7561f;
							case 21:
								return 680.794f, 559.0409f, 128.0462f;
							case 22:
								return 716.7936f, 141.21f, 79.7545f;
							case 23:
								return 875.606f, -476.7556f, 29.0746f;
							case 24:
								return 536.7303f, -2817.502f, 5.0421f;
							case 25:
								return 984.1771f, -2410.6863f, 29.4333f;
							case 26:
								return 863.2344f, -2151.808f, 29.4816f;
							case 27:
								return 1002.9417f, -1918.7502f, 30.1432f;
							case 28:
								return 1183.3127f, -1550.9458f, 38.5953f;
							case 29:
								return 694.0918f, 1283.0587f, 359.296f;
							case 30:
								return 745.2003f, 1199.0901f, 325.4016f;
							case 31:
								return 887.6219f, 873.548f, 178.5657f;
							case 32:
								return 1828.967f, 1571.7255f, 99.7219f;
							case 33:
								return 2805.81f, 1676.1002f, 23.5193f;
							case 34:
								return 1405.6907f, -601.7893f, 73.3473f;
							case 35:
								return 1710.3667f, -464.7253f, 169.8001f;
							case 36:
								return 1946.3922f, 1331.992f, 160.1707f;
							case 37:
								return 2271.3796f, 1711.9495f, 67.0413f;
							case 38:
								return 2307.0034f, -1750.4208f, 133.7737f;
							case 39:
								return 2172.2263f, -1069.3674f, 176.0087f;
							case 40:
								return 595.0312f, -851.27f, 40.4327f;
							case 41:
								return 456.9577f, -752.8668f, 26.3578f;
							case 42:
								return 531.9203f, -1034.7968f, 27.2597f;
							case 43:
								return 1289.9077f, -3341.78f, 4.9016f;
							case 44:
								return 533.8767f, -1969.1707f, 23.9846f;
							case 45:
								return 689.5218f, -1774.1862f, 8.6f;
							case 46:
								return 848.6605f, -1211.7699f, 30.3237f;
							case 47:
								return 1874.7408f, -2202.331f, 166.2907f;
							case 48:
								return 1458.7603f, -2623.696f, 47.69f;
							case 49:
								return 1538.9073f, 784.3685f, 76.4501f;
							case 50:
								return 800.149f, -109.5107f, 79.533f;
							case 51:
								return 2687.0898f, 889.5835f, 76.4359f;
							case 52:
								return 939.7744f, -1496.8242f, 29.1156f;
							case 53:
								return 547.5936f, -455.3327f, 23.7304f;
							case 54:
								return 709.3f, -2285f, 33.8f;
							case 55:
								return 454.0637f, -2177.92f, 4.9177f;
							case 56:
								return 1468.1042f, -1759.1979f, 78.3022f;
							case 57:
								return 1239.343f, -1097.545f, 37.5256f;
							case 58:
								return 851.4936f, -956.856f, 25.2824f;
							case 59:
								return 512.4025f, 221.9917f, 103.7442f;
							case 60:
								return 1545.082f, 1701.0814f, 108.769f;
							case 61:
								return 1188.1104f, 1556.9788f, 107.8028f;
							case 62:
								return 1033.948f, -273.4799f, 49.8443f;
							case 63:
								return 743.4129f, -591.6385f, 26.0061f;
							case 64:
								return 1975.4843f, -749.9232f, 96.2513f;
							case 65:
								return 1968.117f, 708.8224f, 161.8571f;
							case 66:
								return 2296.0273f, 1152.2218f, 64.0942f;
							case 67:
								return 2474.0903f, 1484.1034f, 35.2029f;
							case 68:
								return 482.1839f, 664.4731f, 195.1235f;
							case 69:
								return 1505.1063f, -1271.169f, 121.655f;
							case 70:
								return 1220.7286f, -1865.861f, 37.4982f;
							case 71:
								return 476.6311f, -1283.4331f, 28.5393f;
							case 72:
								return 952.6752f, -2248.2195f, 29.5831f;
							case 73:
								return 1434.7068f, -2315.0417f, 65.927f;
							case 74:
								return 1882.2542f, -1873.2075f, 191.477f;
							case 75:
								return 2014.572f, -1591.4055f, 249.303f;
							case 76:
								return 1969.7476f, -992.8931f, 79.6204f;
							case 77:
								return 2267.4316f, -331.317f, 92.9784f;
							case 78:
								return 1205.4655f, 336.8802f, 80.9909f;
							case 79:
								return 531.8229f, -27.4548f, 69.6295f;
							case 80:
								return 304.7162f, 262.4799f, 104.337f;
							case 81:
								return 572.4857f, -2147.2932f, 7.9233f;
							case 82:
								return 1223.1305f, -2338.6213f, 59.8673f;
							case 83:
								return 1747.1515f, -2679.91f, 1.4587f;
							case 84:
								return 939.6769f, -1342.533f, 11.4778f;
							case 85:
								return 1435.6455f, -1476.4724f, 62.2245f;
							case 86:
								return 2273.048f, -539.2752f, 102.9436f;
							case 87:
								return 1522.0752f, -381.5488f, 200.3996f;
							case 88:
								return 2778.5789f, 1073.3276f, 0.6607f;
							case 89:
								return 609.4634f, -1333.5895f, 20.7017f;
							case 90:
								return 1360.9276f, -946.584f, 55.9209f;
							case 91:
								return 1147.3726f, -431.5072f, 65.9987f;
							case 92:
								return 2391.644f, -932.7006f, 151.3306f;
							case 93:
								return 2897.5105f, -314.7418f, 17.1346f;
							case 94:
								return 2963.3606f, 513.4398f, 35.0981f;
							case 95:
								return 2415.814f, 763.4792f, 124.8302f;
							case 96:
								return 2054.985f, 953.5229f, 218.5845f;
							case 97:
								return 1522.8307f, 461.3894f, 224.2793f;
							case 98:
								return 1301.596f, 1445.4712f, 98.4293f;
							case 99:
								return 1071.8425f, -1841.3043f, 36.3069f;
							case 100:
								return 1133.0865f, -2602.795f, 17.3834f;
							case 101:
								return 484.4286f, -3064.647f, 5.084f;
							case 102:
								return 1610.9121f, -2385.5503f, 90.6982f;
							case 103:
								return 695.2822f, -2534.997f, 17.6967f;
							case 104:
								return 554.7129f, -1634.238f, 26.9479f;
							case 105:
								return 1723.686f, -1038.6063f, 129.0783f;
							case 106:
								return 2637.012f, -1863.2129f, 17.7764f;
							case 107:
								return 2638.0774f, 1346.6411f, 25.4338f;
							case 108:
								return 1910.6632f, 29.3172f, 159.5f;
							case 109:
								return 2952.9666f, 797.8872f, 0.1f;
							case 110:
								return 2937.1196f, 1471.5317f, 0f;
							case 111:
								return 2348.98f, -2281.0046f, 0.1697f;
							case 112:
								return 2681.4158f, -1560.3545f, -0.0123f;
							case 113:
								return 2812.644f, -27.1503f, 0.7016f;
							case 114:
								return 3201.036f, -102.7169f, 0.2f;
							case 115:
								return 651.1428f, -3112.596f, 0.0233f;
							case 116:
								return 2313.4233f, -2194.061f, 0.025f;
							case 117:
								return 3055.1917f, 185.0506f, 0.4391f;
							case 118:
								return 2729.4597f, -1073.7024f, 0.6712f;
							case 119:
								return 1423.5059f, -2790.9116f, 0.7109f;
							default:
						}
						break;
					}
			}
			break;
		case 1:
			if (bParam1)
			{
				switch (iParam2)
				{
					case 0:
						switch (iParam3)
						{
							case 0:
								return -915.445f, -2520.0068f, 58f;
							case 1:
								return -1343.7191f, -3336.7954f, 30.5601f;
							case 2:
								return -1336.2388f, -3044.0593f, 300.803f;
							case 3:
								return -1833.8517f, -1191.0569f, 41.1411f;
							case 4:
								return -1955.7803f, 1776.5697f, 195.8577f;
							case 5:
								return -2166.6292f, 1607.5665f, 260f;
							case 6:
								return -417.0685f, 1153.3469f, 347.5894f;
							case 7:
								return -2503.341f, 754.9435f, 342.9515f;
							case 8:
								return -2626.1272f, 136.1493f, 118.1611f;
							case 9:
								return -2246.8037f, 266.7578f, 194.8923f;
							case 10:
								return -1364.0376f, 56.9618f, 70.9416f;
							case 11:
								return -94.2512f, 880.448f, 265f;
							case 12:
								return -162.3738f, -999.6118f, 286.6717f;
							case 13:
								return 140.5345f, -698.5123f, 92.6658f;
							case 14:
								return -104.079f, -755.4847f, 59.1614f;
							case 15:
								return -284.6401f, -446.2669f, 91.5901f;
							case 16:
								return -795.1664f, -736.1061f, 78.6788f;
							case 17:
								return -971.361f, -1305.3682f, 50f;
							case 18:
								return -1357.9733f, -1476.3955f, 40.9274f;
							case 19:
								return -2004.3339f, -556.4324f, 20.3771f;
							case 20:
								return -1034.3809f, 640.7464f, 163.7504f;
							case 21:
								return -1238.5632f, -848.6133f, 89.7682f;
							case 22:
								return -1169.283f, -467.3812f, 69.0157f;
							case 23:
								return -324.4008f, -1968.6938f, 71.7904f;
							case 24:
								return -269.9813f, -2425.728f, 95.05f;
							case 25:
								return 247.3292f, -3308.0818f, 59.9012f;
							case 26:
								return 219.492f, -2318.923f, 43.917f;
							case 27:
								return 18.8233f, -1504.0001f, 54.686f;
							case 28:
								return 8.9788f, 1715.0565f, 249.4028f;
							case 29:
								return -667.7844f, 404.7751f, 125.5105f;
							case 30:
								return 216.2372f, 236.2603f, 125.7443f;
							case 31:
								return -3079.696f, 766.6476f, 33.988f;
							case 32:
								return -1105.5894f, 1428.9675f, 238.1016f;
							case 33:
								return -474.9906f, 1529.5255f, 500.0109f;
							case 34:
								return -1621.8411f, 929.212f, 193.8022f;
							case 35:
								return -767.9827f, -21.7202f, 69.0007f;
							case 36:
								return -472.9492f, -1444.1433f, 92.8559f;
							case 37:
								return -1879.5746f, -2634.0015f, 11.491f;
							case 38:
								return -1459.7344f, -2141.9648f, 23.7189f;
							case 39:
								return -75.0934f, -818.6606f, 599.9617f;
							case 40:
								return -230.7478f, -241.4196f, 76.4557f;
							case 41:
								return -1608.0134f, -537.3172f, 73.1431f;
							case 42:
								return -1806.964f, -125.5317f, 118.0094f;
							case 43:
								return -3170.2217f, 1543.2274f, 33.8091f;
							case 44:
								return -2753.0872f, 1229.0054f, 140.7239f;
							case 45:
								return -306.4009f, 202.0892f, 180.3099f;
							case 46:
								return 396.1246f, -1528.2404f, 46.6041f;
							case 47:
								return 389.6704f, -356.0437f, 61.5436f;
							case 48:
								return 324.4086f, -988.9622f, 92.2799f;
							case 49:
								return -657.5551f, -1105.1987f, 67.647f;
							case 50:
								return -439.2123f, -1003.0714f, 58.7819f;
							case 51:
								return -208.3349f, -1800.9827f, 12.0207f;
							case 52:
								return 104.7709f, -1940.2928f, 33.3786f;
							case 53:
								return -80.1589f, 364.0139f, 180.4526f;
							case 54:
								return -1064.8127f, 7.4781f, 69.6885f;
							case 55:
								return -1997.4425f, 722.7387f, 175.1271f;
							case 56:
								return -254.3736f, -3074.5354f, 75.4412f;
							case 57:
								return -830.1344f, -1880.0549f, 33.9615f;
							case 58:
								return -2775.497f, -788.6588f, 36.447f;
							case 59:
								return 43.0406f, -413.7074f, 89.5811f;
							case 60:
								return -3209.4211f, 1110.1798f, 37.6606f;
							case 61:
								return -2256.7175f, -339.6835f, 43.3005f;
							case 62:
								return -1957.0941f, 1330.4803f, 236.7105f;
							case 63:
								return -1030.2206f, 996.1059f, 182.364f;
							case 64:
								return -1529.4282f, 441.7661f, 134.8705f;
							case 65:
								return 145.6732f, 1154.9943f, 253.3341f;
							case 66:
								return -520.5256f, 659.5372f, 177.0043f;
							case 67:
								return 18.1044f, 638.951f, 224.5906f;
							case 68:
								return 128.1127f, -27.8183f, 91.0755f;
							case 69:
								return -634.6116f, -367.6195f, 56.3093f;
							case 70:
								return -402.9568f, -655.0366f, 60.6586f;
							case 71:
								return -1034.5049f, -1070.0377f, 21.0905f;
							case 72:
								return -1013.9092f, -1763.9242f, 20.6112f;
							case 73:
								return -734.4069f, -1448.0613f, 26.2766f;
							case 74:
								return -202.7723f, -1322.2694f, 53.6863f;
							case 75:
								return 388.6693f, -1368.0679f, 50.7767f;
							case 76:
								return -7.0116f, -2230.6743f, 39.1959f;
							case 77:
								return 33.8391f, -2745.6487f, 33.5782f;
							case 78:
								return -1100.7927f, -2846.7046f, 53.132f;
							case 79:
								return -1274.3236f, -2448.8486f, 99.9299f;
							case 80:
								return -473.7719f, -2675.3184f, 19.2771f;
							case 81:
								return -727.3944f, -3494.9004f, 23.1103f;
							case 82:
								return -1907.1514f, -3034.5771f, 39.2742f;
							case 83:
								return 416.2226f, -2912.8342f, 5.0678f;
							case 84:
								return 414.82f, -2616.128f, 22.3517f;
							case 85:
								return 233.9356f, -1474.4908f, 45.7138f;
							case 86:
								return 93.563f, -1189.7456f, 51.969f;
							case 87:
								return -607.8086f, -2189.1565f, 76.1713f;
							case 88:
								return -1106.9393f, -2019.405f, 33.3166f;
							case 89:
								return -1210.8302f, -1806.382f, 246.2572f;
							case 90:
								return -1309.4479f, -1043.7633f, 29.6876f;
							case 91:
								return -1618.3667f, -827.8159f, 42.3072f;
							case 92:
								return -2257.555f, -9.0938f, 121.4433f;
							case 93:
								return -777.472f, -376.5067f, 72.7751f;
							case 94:
								return -1371.5116f, -172.8742f, 99.1525f;
							case 95:
								return -1842.7985f, 302.3257f, 105.5376f;
							case 96:
								return -1165.4581f, 367.7476f, 95.3869f;
							case 97:
								return -3107.3586f, 276.277f, 56.9633f;
							case 98:
								return -2548.7861f, 1441.129f, 190.8976f;
							case 99:
								return -2644.523f, 1868.6207f, 168.2627f;
							case 100:
								return -3029.2344f, 1883.871f, 35.4705f;
							case 101:
								return -1119.2069f, 1736.032f, 195.1095f;
							case 102:
								return -644.2039f, 1743.7484f, 227.7433f;
							case 103:
								return -577.6026f, 2038.9946f, 209.9244f;
							case 104:
								return -302.0078f, 1871.026f, 196.7599f;
							case 105:
								return 351.8685f, 1748.149f, 260.866f;
							case 106:
								return -11.935f, 1320.3481f, 288.0058f;
							case 107:
								return 295.5885f, 753.7887f, 200.7135f;
							case 108:
								return 305.6451f, 501.4699f, 350.4832f;
							case 109:
								return 353.2237f, 58.5094f, 119.2648f;
							case 110:
								return 377.5104f, -695.2125f, 102.9432f;
							case 111:
								return 392.4507f, -1204.2394f, 50f;
							case 112:
								return 397.6461f, -1929.7805f, 43.4559f;
							case 113:
								return 470.8737f, -2451.431f, 30f;
							case 114:
								return -418.7521f, -2424.3962f, 20.0582f;
							case 115:
								return -2440.5273f, -1654.1301f, 6.3248f;
							case 116:
								return -888.3994f, -2938.0261f, 26.3869f;
							case 117:
								return -1374.6372f, -2647.817f, 26.4425f;
							case 118:
								return -1082.1765f, -620.1375f, 27.491f;
							case 119:
								return -1471.0901f, 1324.1405f, 193.4433f;
							default:
						}
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						switch (iParam3)
						{
							case 0:
								return -2303.1377f, 218.8738f, 166.6017f;
							case 1:
								return -2994.291f, 39.7167f, 7.4636f;
							case 2:
								return -3410.2002f, 967.5133f, 7.3517f;
							case 3:
								return -3041.9602f, 1209.5901f, 13.7743f;
							case 4:
								return -2502.5288f, 756.2985f, 301.2459f;
							case 5:
								return -1352.5457f, 120.6978f, 55.2388f;
							case 6:
								return -1729.2104f, -193.1235f, 57.5038f;
							case 7:
								return -1635.4001f, -1054.2262f, 12.1522f;
							case 8:
								return -1268.6067f, -1915.845f, 4.8616f;
							case 9:
								return -18.3427f, -1297.6146f, 28.3575f;
							case 10:
								return -145.3585f, 930.7858f, 234.6711f;
							case 11:
								return -424.3762f, 1587.7982f, 355.2649f;
							case 12:
								return -112.2256f, 354.4933f, 111.6961f;
							case 13:
								return 67.6185f, -673.5317f, 28.7056f;
							case 14:
								return 338.3054f, -1394.2786f, 31.5093f;
							case 15:
								return -19.2884f, -1426.187f, 29.6575f;
							case 16:
								return -251.9772f, -2029.2584f, 28.946f;
							case 17:
								return -432.7254f, -2440.4885f, 5.0008f;
							case 18:
								return -956.3549f, -3053.302f, 12.9451f;
							case 19:
								return -1662.76f, -3177.9182f, 12.9914f;
							case 20:
								return -457.7008f, -1507.7855f, 12.0586f;
							case 21:
								return 188.8895f, 300.349f, 104.515f;
							case 22:
								return 3.4946f, -2452.8853f, 13.4665f;
							case 23:
								return -966.3007f, -973.4243f, 2.876f;
							case 24:
								return -1536.4352f, 868.5392f, 180.16f;
							case 25:
								return -1521.5298f, 1493.7648f, 110.5947f;
							case 26:
								return -1173.2635f, -2037.8196f, 12.776f;
							case 27:
								return -0.4394f, -1037.7375f, 37.152f;
							case 28:
								return 137.7382f, -3092.7996f, 4.8963f;
							case 29:
								return -1177.2716f, -507.6518f, 34.5662f;
							case 30:
								return -575.4523f, -142.0386f, 36.2353f;
							case 31:
								return -723.2367f, 655.733f, 154.5475f;
							case 32:
								return -455.0906f, -999.9053f, 22.8657f;
							case 33:
								return -1133.9344f, -1447.0367f, 4f;
							case 34:
								return -231.0999f, -242.6378f, 49.0062f;
							case 35:
								return 69.8444f, -62.9348f, 67.8751f;
							case 36:
								return -1981.1616f, -296.7468f, 47.1062f;
							case 37:
								return 98.9504f, -1979.6643f, 19.6635f;
							case 38:
								return 324.168f, -2758.195f, 5.0028f;
							case 39:
								return 219.5919f, -2310.0776f, 7.4018f;
							case 40:
								return -693.2001f, -592.6827f, 30.5552f;
							case 41:
								return -1044.5354f, 500.5195f, 83.1617f;
							case 42:
								return -1792.4644f, 395.7471f, 111.7909f;
							case 43:
								return -425.5935f, 1123.6049f, 324.8547f;
							case 44:
								return -523.835f, -2902.0679f, 5.0004f;
							case 45:
								return -1213.84f, -2724.5466f, 12.9541f;
							case 46:
								return -656.7547f, -1708.6864f, 23.8153f;
							case 47:
								return -1024.8899f, 1012.2385f, 159.6649f;
							case 48:
								return -850.8826f, 1708.716f, 193.9906f;
							case 49:
								return -2253.348f, 1324.2896f, 291.0074f;
							case 50:
								return -876.7352f, -210.6213f, 38.2135f;
							case 51:
								return -309.9497f, -609.0406f, 32.5568f;
							case 52:
								return -743.9313f, -2283.3716f, 12.06f;
							case 53:
								return -2971.7314f, 584.4294f, 19.423f;
							case 54:
								return 288.4228f, -1601.1375f, 30.2709f;
							case 55:
								return 97.6932f, -348.3357f, 41.3071f;
							case 56:
								return -1065.9119f, -12.7356f, 49.4423f;
							case 57:
								return -388.1416f, -2283.2563f, 6.6082f;
							case 58:
								return -1213.1215f, -945.0177f, 1.1502f;
							case 59:
								return -1605.8069f, -588.1375f, 32.1103f;
							case 60:
								return -1573.01f, 400.7232f, 106.194f;
							case 61:
								return -2751.1904f, 1185.7819f, 93.6924f;
							case 62:
								return 287.3323f, -3014.9917f, 8.8106f;
							case 63:
								return -96.4867f, -2744.17f, 5.1062f;
							case 64:
								return -1350.7883f, -1435.0022f, 3.325f;
							case 65:
								return -156.4393f, -979.7114f, 20.2769f;
							case 66:
								return -671.3023f, 399.0416f, 101.68f;
							case 67:
								return 169.03f, 667.5479f, 205.7125f;
							case 68:
								return -726.8502f, -410.5149f, 34.5413f;
							case 69:
								return -671.4555f, -891.9421f, 23.4991f;
							case 70:
								return -190.4528f, 1299.3552f, 302.9701f;
							case 71:
								return -1284.4252f, -3403.2993f, 12.9452f;
							case 72:
								return -825.6949f, -3337.7793f, 12.9445f;
							case 73:
								return -1368.524f, -2335.0615f, 12.9446f;
							case 74:
								return -1098.009f, -2415.5261f, 12.9452f;
							case 75:
								return -1336.2744f, -3044.1025f, 12.9444f;
							case 76:
								return -821.012f, -1992.5189f, 9.6439f;
							case 77:
								return -350.2334f, -2640.808f, 5.0003f;
							case 78:
								return -219.3889f, -2386.8809f, 5.0014f;
							case 79:
								return 109.4531f, -2816.0366f, 9.7899f;
							case 80:
								return 208.6273f, -3327.8938f, 4.8177f;
							case 81:
								return 370.2768f, -2128.4368f, 15.2365f;
							case 82:
								return -53.6978f, -1688.638f, 28.4917f;
							case 83:
								return -1009.0515f, -1759.3016f, 5.5498f;
							case 84:
								return -988.1508f, -2106.5906f, 10.5382f;
							case 85:
								return -708.1929f, -1517.804f, 4.4121f;
							case 86:
								return -228.0423f, -1514.5037f, 30.4622f;
							case 87:
								return 297.5852f, -1204.3859f, 28.1985f;
							case 88:
								return 383.1396f, -904.1862f, 28.4376f;
							case 89:
								return -630.6f, -1071.2f, 21.7f;
							case 90:
								return -1207.4319f, -1796.611f, 2.9086f;
							case 91:
								return -876.3531f, -1501.7078f, 4.1775f;
							case 92:
								return -1271.531f, -1099.6127f, 6.5852f;
							case 93:
								return -1730.8298f, -725.0892f, 9.3941f;
							case 94:
								return -1431.0054f, -271.0002f, 45.2077f;
							case 95:
								return -1966.8158f, 182.3251f, 85.7706f;
							case 96:
								return -2293.7769f, 371.4213f, 173.6017f;
							case 97:
								return -2156.6882f, 1551.6466f, 272.9088f;
							case 98:
								return -2780.1494f, 1423.379f, 99.9284f;
							case 99:
								return -2587.9355f, 1930.8761f, 166.0052f;
							case 100:
								return -3017.5708f, 1860.0577f, 28.4173f;
							case 101:
								return 142.7543f, 1689.0972f, 233.0739f;
							case 102:
								return 186.6585f, 1162.8601f, 224.5946f;
							case 103:
								return -461.6094f, 640.4639f, 143.1886f;
							case 104:
								return -440.1514f, 184.2777f, 74.2476f;
							case 105:
								return -186.476f, 25.015f, 63.554f;
							case 106:
								return 26.7096f, -660.0318f, 30.6286f;
							case 107:
								return 156.6823f, -565.1396f, 42.893f;
							case 108:
								return -1834.908f, -1221.9192f, 0.8054f;
							case 109:
								return -707.5134f, -1340.2247f, -0.0558f;
							case 110:
								return -544.5794f, -2580.8306f, 0.2096f;
							case 111:
								return 103.7708f, -2461.2915f, 0.1193f;
							case 112:
								return -3046.1326f, 1570.5392f, -0.3275f;
							case 113:
								return -2241.345f, -530.6988f, -0.3275f;
							case 114:
								return 44.8316f, 844.4984f, 195.5816f;
							case 115:
								return -1894.2308f, -2724.3145f, -0.3275f;
							case 116:
								return -1029.4409f, -1778.1066f, -0.3275f;
							case 117:
								return -95.1061f, -2313.9973f, 0.4963f;
							case 118:
								return -1546.0536f, -1509.9126f, 0.409f;
							case 119:
								return -1678.1943f, -2238.9858f, 0.9841f;
							default:
						}
						break;
					}
			}
			break;
		case 2:
			if (bParam1)
			{
				switch (iParam2)
				{
					case 0:
						switch (iParam3)
						{
							case 0:
								return -1874.714f, 2055.2424f, 164.0655f;
							case 1:
								return -2398.2444f, 2197.3228f, 103.0324f;
							case 2:
								return -2470.9666f, 2693.0068f, 16.093f;
							case 3:
								return -1417.1256f, 2634.2346f, 3.8116f;
							case 4:
								return -1617.5188f, 3185.984f, 52.4819f;
							case 5:
								return -1187.5358f, 3851.9265f, 510.4073f;
							case 6:
								return -1243.2103f, 4536.3325f, 198.2652f;
							case 7:
								return -766.5436f, 4335.3345f, 181.1521f;
							case 8:
								return -515.496f, 4425.5493f, 56.3238f;
							case 9:
								return -210.6103f, 3651.887f, 80.5153f;
							case 10:
								return 90.0834f, 3766.9617f, 52.4048f;
							case 11:
								return 267.8927f, 2866.5798f, 81.5228f;
							case 12:
								return 180.018f, 2272.2268f, 109.032f;
							case 13:
								return -618.2112f, 2031.4565f, 238.4183f;
							case 14:
								return -1185.3284f, 2439.395f, 110.052f;
							case 15:
								return -2881.4158f, 3363.4365f, 44.4458f;
							case 16:
								return -2188.7888f, 4395.888f, 71.8569f;
							case 17:
								return -2166.2676f, 5204.9966f, 32.4229f;
							case 18:
								return 239.3275f, 5576.0225f, 610.5799f;
							case 19:
								return -549.4456f, 5308.46f, 118.8087f;
							case 20:
								return -686.6255f, 5674.634f, 64.1394f;
							case 21:
								return 25.1643f, 7643.3687f, 32.4106f;
							case 22:
								return -162.8882f, 6422.088f, 46.3268f;
							case 23:
								return 269.3018f, 5863.5103f, 425.1252f;
							case 24:
								return 158.6423f, 4622.6235f, 213.8925f;
							case 25:
								return 31.6062f, 4328.1406f, 56.7127f;
							case 26:
								return -959.6198f, 4843.2017f, 317.838f;
							case 27:
								return -1179.4015f, 4926.9224f, 230.3542f;
							case 28:
								return -1801.7695f, 4513.373f, 40.2242f;
							case 29:
								return -2146.7214f, 3964.1711f, 111.159f;
							case 30:
								return -668.1703f, 3607.985f, 305.8568f;
							case 31:
								return -409.327f, 2963.4136f, 38.182f;
							case 32:
								return -290.9469f, 2533.4746f, 92.1749f;
							case 33:
								return -3029.401f, 1883.9596f, 35.4066f;
							case 34:
								return -2597.6538f, 1922.0712f, 179.5395f;
							case 35:
								return 80.7072f, 5032.9463f, 490.6172f;
							case 36:
								return -899.8328f, 6042.451f, 53.0212f;
							case 37:
								return -1576.676f, 5160.7627f, 26.8806f;
							case 38:
								return 145.5836f, 6866.114f, 38.7097f;
							case 39:
								return -50.5306f, 6236.916f, 79.3327f;
							case 40:
								return -368.4536f, 6104.7197f, 53f;
							case 41:
								return -1599.9713f, 2104.1846f, 80.8163f;
							case 42:
								return -1626.4868f, 2585.598f, 12.1104f;
							case 43:
								return -2064.0005f, 3361.181f, 48.6443f;
							case 44:
								return -2357.318f, 3250.9163f, 117.4892f;
							case 45:
								return -2684.9463f, 2304.948f, 39.1557f;
							case 46:
								return -772.2781f, 4704.5522f, 242.9476f;
							case 47:
								return 125.5518f, 3365.379f, 35.8003f;
							case 48:
								return -113.0094f, 2803.8757f, 67.1096f;
							case 49:
								return -179.3538f, 1907.5616f, 221.1006f;
							case 50:
								return -1235.5541f, 1879.0356f, 150.8745f;
							case 51:
								return 341.9869f, 3569.3142f, 63.2875f;
							case 52:
								return 391.3682f, 5485.655f, 1000f;
							case 53:
								return 311.9317f, 6432.635f, 80.2925f;
							case 54:
								return -292.9588f, 5839.533f, 129.366f;
							case 55:
								return -1502.4677f, 5984.9546f, 34.7383f;
							case 56:
								return -3449.053f, 2645.4365f, 55.2519f;
							case 57:
								return -1096.9625f, 3225.6072f, 147.7444f;
							case 58:
								return -278.2971f, 6637.778f, 45.611f;
							case 59:
								return 297.8872f, 4013.2524f, 33.872f;
							case 60:
								return -271.6442f, 5586.137f, 250.6218f;
							case 61:
								return -821f, 5419.5f, 58.4f;
							case 62:
								return -1734.6f, 3968.5f, 302.8f;
							case 63:
								return -2664.1f, 2594f, 3.8f;
							case 64:
								return -897.3f, 2797.5f, 28.3f;
							case 65:
								return -1158.6f, 4625.5f, 156.7f;
							case 66:
								return 618f, 6426.7f, 103.2f;
							case 67:
								return 435.1f, 6772.9f, 18.9f;
							case 68:
								return -677.8f, 6035f, 27.3f;
							case 69:
								return -1445.2f, 5428.6f, 53.5f;
							case 70:
								return -384.2f, 4711.1f, 278.4f;
							case 71:
								return 911.8f, 4338.1f, 61.8f;
							case 72:
								return 518.5f, 5944.8f, 525.2f;
							case 73:
								return -1631.5f, 4741.2f, 66.9f;
							case 74:
								return -1352.5f, 4147.1f, 125.1f;
							case 75:
								return -1138.5f, 2807.2f, 250.4f;
							case 76:
								return -540.3f, 4190.5f, 203.6f;
							case 77:
								return -166.9f, 4250.2f, 61.7f;
							case 78:
								return -88.2f, 4579f, 135.4f;
							case 79:
								return -3051.213f, 4178.12f, 72.7681f;
							case 80:
								return -2606.2598f, 2993.814f, 30.4219f;
							case 81:
								return -2302.7595f, 2011.2108f, 153.3448f;
							case 82:
								return -2254.3137f, 1680.5056f, 298.8981f;
							case 83:
								return -1955.917f, 1772.4076f, 201.629f;
							case 84:
								return -1751.7631f, 1998.5481f, 129.1121f;
							case 85:
								return -1453.8889f, 2069.2202f, 65.2848f;
							case 86:
								return -1479.3862f, 2405.9797f, 37.5402f;
							case 87:
								return -1041.6007f, 3963.552f, 344.3259f;
							case 88:
								return -775.5471f, 4048.385f, 310.1201f;
							case 89:
								return -883.0366f, 4411.045f, 29.2546f;
							case 90:
								return -1215.2303f, 4370.065f, 38.5217f;
							case 91:
								return -1269.5232f, 4386.9385f, 1000f;
							case 92:
								return -1508.0304f, 4446.5464f, 59.4166f;
							case 93:
								return -1449.3313f, 4602.479f, 336.1419f;
							case 94:
								return -1640.1833f, 5440.6304f, 43.1539f;
							case 95:
								return -891.0049f, 5157.28f, 187.01f;
							case 96:
								return 724.7438f, 5251.831f, 586.2138f;
							case 97:
								return 537.1121f, 4647.938f, 274.9371f;
							case 98:
								return 64.3661f, 4022.3625f, 575.3698f;
							case 99:
								return 907.8411f, 3627.4348f, 53.8748f;
							case 100:
								return 591.9018f, 2977.4355f, 82.2499f;
							case 101:
								return 259.6137f, 1788.4592f, 256.6769f;
							case 102:
								return -2092.0813f, 2518.0164f, 800f;
							case 103:
								return -2536.6838f, 1678.4497f, 196.0372f;
							case 104:
								return 52.1855f, 7343.6396f, 518.5611f;
							case 105:
								return -521.5972f, 6960.141f, 172.8203f;
							case 106:
								return -684.2739f, 6467.878f, 165.8478f;
							case 107:
								return -1060.2322f, 5711.0635f, 333.8782f;
							case 108:
								return -1786.0522f, 5471.512f, 614.6761f;
							case 109:
								return -1501.1886f, 3295.0955f, 245.8079f;
							case 110:
								return -2149.1445f, 3521.295f, 186.103f;
							case 111:
								return 887.6612f, 5610.0923f, 697.7338f;
							case 112:
								return 451.4696f, 5020.9893f, 610.8222f;
							case 113:
								return 693.6552f, 4097.276f, 53.8927f;
							case 114:
								return -99.6831f, 3960.6362f, 80.8691f;
							case 115:
								return -579.6645f, 3979.6753f, 136.2872f;
							case 116:
								return -996.2939f, 4194.288f, 151.0646f;
							case 117:
								return -1542.3983f, 2886.0444f, 1000f;
							case 118:
								return -3004.9878f, 2333.0999f, 209.9484f;
							case 119:
								return -3622.204f, 4740.6196f, 19.17f;
							default:
						}
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						switch (iParam3)
						{
							case 0:
								return -2200.7861f, 3429.2134f, 31.6018f;
							case 1:
								return -1873.9148f, 2090.5955f, 139.9944f;
							case 2:
								return -1674.2521f, 2301.497f, 59.0047f;
							case 3:
								return -506.3776f, 4358.9375f, 66.4342f;
							case 4:
								return -83.7414f, 4580.993f, 122.1646f;
							case 5:
								return -207.3853f, 3598.5168f, 60.323f;
							case 6:
								return 233.0533f, 3547.9268f, 30.2697f;
							case 7:
								return 93.7029f, 3597.8599f, 38.7393f;
							case 8:
								return 327f, 2858f, 42.4386f;
							case 9:
								return 158.1294f, 3136.305f, 42.4573f;
							case 10:
								return -210.5036f, 2955.3577f, 28.941f;
							case 11:
								return -288.922f, 2524.7224f, 73.6685f;
							case 12:
								return -734.5254f, 5594.9834f, 34.288f;
							case 13:
								return 88.2503f, 6368.1294f, 30.2271f;
							case 14:
								return -344.4945f, 6242.8457f, 30.4877f;
							case 15:
								return -267.3751f, 6639.4443f, 6.3939f;
							case 16:
								return -1444.4702f, 5418.419f, 22.2866f;
							case 17:
								return -1611.0414f, 5258.6846f, 2.9791f;
							case 18:
								return -1823.2031f, 4464.67f, 37.4717f;
							case 19:
								return -2488.1113f, 2740.8389f, 1.8909f;
							case 20:
								return -1626.5487f, 2587.9238f, 1.6362f;
							case 21:
								return -1575.2991f, 2105.205f, 66.0545f;
							case 22:
								return -543.6063f, 1983.754f, 126.0263f;
							case 23:
								return -563.8864f, 1886.811f, 122.0349f;
							case 24:
								return -592.4536f, 2076.6404f, 130.3709f;
							case 25:
								return -2497.361f, 2307.1936f, 33.1315f;
							case 26:
								return -2584.9226f, 1931.1104f, 166.3129f;
							case 27:
								return -1618.1613f, 3184.1265f, 31.8513f;
							case 28:
								return -913.2203f, 2562.701f, 57.2099f;
							case 29:
								return -1163.9229f, 2408.9934f, 92.402f;
							case 30:
								return 188.3494f, 2295.0298f, 92.7443f;
							case 31:
								return -96.8265f, 2224.7505f, 159.4986f;
							case 32:
								return -834.779f, 4178.5576f, 214.3525f;
							case 33:
								return -790.3221f, 2901.1248f, 18.2471f;
							case 34:
								return -799.6998f, 3478.0144f, 172.9345f;
							case 35:
								return -1347.7264f, 4127.4155f, 61.6295f;
							case 36:
								return -1364.7091f, 4848.779f, 144.9459f;
							case 37:
								return -2168.3364f, 5186.728f, 14.9725f;
							case 38:
								return -987.1982f, 5075.1147f, 186.5395f;
							case 39:
								return 231.926f, 5246.8306f, 601.2042f;
							case 40:
								return -1.0985f, 5029.4585f, 446.6905f;
							case 41:
								return -134.3454f, 4916.509f, 353.0826f;
							case 42:
								return -434.7882f, 4885.8613f, 189.7331f;
							case 43:
								return -592.1419f, 5361.79f, 69.3186f;
							case 44:
								return 64.7121f, 7052.2964f, 15.7854f;
							case 45:
								return -577.7616f, 5954.945f, 25.1362f;
							case 46:
								return -945.8056f, 4613.7583f, 238.1628f;
							case 47:
								return -2228.8174f, 4218.2476f, 45.7951f;
							case 48:
								return -2493.3613f, 4193.219f, 1.0754f;
							case 49:
								return -3073.0884f, 3200.4133f, 0.9527f;
							case 50:
								return 376.4925f, 6630.836f, 27.7626f;
							case 51:
								return -1692.9249f, 4597.169f, 46.8227f;
							case 52:
								return -2587.7976f, 3193.551f, 12.9622f;
							case 53:
								return -922.5162f, 6131.0967f, 6.1891f;
							case 54:
								return -112.5477f, 7285.7847f, 16.1674f;
							case 55:
								return -170.1744f, 6049.7163f, 30.1726f;
							case 56:
								return 57.7188f, 6673.0757f, 30.9499f;
							case 57:
								return -501.3606f, 5567.93f, 70.0852f;
							case 58:
								return -292.4363f, 5839.495f, 120.8191f;
							case 59:
								return -436.1143f, 5707.903f, 61.0179f;
							case 60:
								return -494.1112f, 5290.4795f, 79.6187f;
							case 61:
								return -421.0542f, 5187.812f, 122.5195f;
							case 62:
								return -835.7191f, 5261.788f, 79.1947f;
							case 63:
								return -873.3408f, 4786.0073f, 299.4599f;
							case 64:
								return -299.7797f, 4676.5f, 245.6817f;
							case 65:
								return -903.4214f, 5176.0864f, 153.3577f;
							case 66:
								return -869.6852f, 5553.7104f, 1.4216f;
							case 67:
								return -1210.241f, 5228.6733f, 88.4579f;
							case 68:
								return -1224.511f, 3854.1726f, 488.3926f;
							case 69:
								return -688.3312f, 3764.9836f, 272.5302f;
							case 70:
								return -1829.375f, 3982.9968f, 271.9911f;
							case 71:
								return -2432.3372f, 3535.9397f, 33.3233f;
							case 72:
								return -1440.5262f, 5106.688f, 62.4016f;
							case 73:
								return -2258.899f, 3831.7593f, 118.1093f;
							case 74:
								return -1577.4941f, 5162.519f, 18.6627f;
							case 75:
								return -2046.3337f, 4525.6006f, 27.6239f;
							case 76:
								return -2189.855f, 4616.937f, 0.5382f;
							case 77:
								return 423.4926f, 5613.09f, 765.7494f;
							case 78:
								return 501.2704f, 5598.329f, 795.0286f;
							case 79:
								return 625.9471f, 5675.894f, 747.5628f;
							case 80:
								return -555.5328f, 5321.4487f, 72.5996f;
							case 81:
								return -685.9285f, 5233.7383f, 92.4703f;
							case 82:
								return -213.783f, 6348.9893f, 30.5355f;
							case 83:
								return -391.0858f, 6341.1753f, 25.425f;
							case 84:
								return 0.9189f, 3691.5942f, 38.5039f;
							case 85:
								return -225.4021f, 3664.7502f, 63.4125f;
							case 86:
								return 714.1616f, 4136.578f, 34.7842f;
							case 87:
								return 825.1304f, 4223.4897f, 50.8188f;
							case 88:
								return 858.3134f, 4423.847f, 30.2196f;
							case 89:
								return 335.1393f, 4373.4707f, 63.3434f;
							case 90:
								return -1474.2874f, 2687.972f, 16.6437f;
							case 91:
								return -1183.1458f, 4927.8086f, 222.0748f;
							case 92:
								return -892.4783f, 4529.449f, 113.9803f;
							case 93:
								return 761.0254f, 6455.407f, 30.7286f;
							case 94:
								return 370.5299f, 5453.1826f, 691.2834f;
							case 95:
								return -376.5987f, 3840.7778f, 73.9626f;
							case 96:
								return -2077.6355f, 3390.068f, 30.1962f;
							case 97:
								return -2317.722f, 3398.1135f, 29.7812f;
							case 98:
								return -2686.1533f, 3554.439f, 1.0289f;
							case 99:
								return -1869.3872f, 4649.4917f, 56.0019f;
							case 100:
								return -1854.183f, 4809.8457f, 1.9984f;
							case 101:
								return -683.5417f, 5823.635f, 16.3313f;
							case 102:
								return -790.6581f, 5479.023f, 25.889f;
							case 103:
								return 482.4343f, 6486.61f, 29.0864f;
							case 104:
								return 183.3372f, 7008.858f, 11.2392f;
							case 105:
								return 50.2346f, 4325.2314f, 43.3996f;
							case 106:
								return -28.0941f, 4430.7944f, 57.1619f;
							case 107:
								return -187.3603f, 4019.4214f, 30.6801f;
							case 108:
								return -1804.9352f, 5315.242f, 0.8688f;
							case 109:
								return 81.2546f, 4050.0576f, 29.4f;
							case 110:
								return -1191.0557f, 4389.1504f, 4.3f;
							case 111:
								return -2188.3345f, 2590.9434f, -0.4f;
							case 112:
								return -2825.633f, 2358.0908f, 0.5703f;
							case 113:
								return -2047.6958f, 4852.3037f, 0.6241f;
							case 114:
								return -2664.6147f, 2597.589f, -0.4f;
							case 115:
								return 271.9201f, 7512.879f, -0.5084f;
							case 116:
								return -215.5849f, 4284.967f, 29.5257f;
							case 117:
								return -2879.157f, 2879.6035f, 0.4205f;
							case 118:
								return -920.2339f, 5871.843f, 0.4382f;
							case 119:
								return -34.7086f, 7618.572f, 0.4933f;
							default:
						}
						break;
					}
			}
			break;
		case 3:
			if (bParam1)
			{
				switch (iParam2)
				{
					case 0:
						switch (iParam3)
						{
							case 0:
								return 867.3339f, 4198.743f, 75f;
							case 1:
								return 1254.1764f, 4848.0747f, 247.0701f;
							case 2:
								return 1676.7766f, 5140.2563f, 160.2494f;
							case 3:
								return 1995.3395f, 5021.6704f, 68.695f;
							case 4:
								return 2599.9524f, 5032.021f, 112.432f;
							case 5:
								return 2967.3093f, 5197.417f, 148.5921f;
							case 6:
								return 2876.9922f, 5911.252f, 378.2234f;
							case 7:
								return 3438.9043f, 6144.4165f, 10.0202f;
							case 8:
								return 3431.1064f, 5174.187f, 46.1572f;
							case 9:
								return 4080.0906f, 4476.533f, 17.0407f;
							case 10:
								return 3492.8005f, 4619.8936f, 65f;
							case 11:
								return 3378.0361f, 4079.5244f, 229.1767f;
							case 12:
								return 3944.4033f, 3729.6572f, 19.5046f;
							case 13:
								return 3556.3828f, 3684.9868f, 67.2346f;
							case 14:
								return 3296.1213f, 3365.1982f, 125f;
							case 15:
								return 3289.9995f, 3140.4368f, 275.7202f;
							case 16:
								return 2948.726f, 2791.748f, 48.6755f;
							case 17:
								return 1597.427f, 2599.1707f, 95f;
							case 18:
								return 1397.0093f, 2116.5027f, 137.1597f;
							case 19:
								return 723.7358f, 2322.6946f, 64.6875f;
							case 20:
								return 753.2642f, 2581.4136f, 161f;
							case 21:
								return 564.4257f, 3392.3542f, 96.1353f;
							case 22:
								return 1191.005f, 3400.2646f, 78.9779f;
							case 23:
								return 1279.7393f, 3100.2595f, 53.8507f;
							case 24:
								return 1415.4867f, 3833.4768f, 52.6619f;
							case 25:
								return 1488.6566f, 3946.2244f, 305.2148f;
							case 26:
								return 2065.697f, 6451.6147f, 149.8928f;
							case 27:
								return 2559.717f, 6155.7915f, 171f;
							case 28:
								return 1502.5463f, 6159.0796f, 230.8224f;
							case 29:
								return 1163.8906f, 5965.0967f, 413.3012f;
							case 30:
								return 772.3428f, 5523.894f, 600f;
							case 31:
								return 501.8089f, 5604.274f, 1000.5984f;
							case 32:
								return 1002.1407f, 4786.2705f, 185.7696f;
							case 33:
								return 587.414f, 5114.912f, 405f;
							case 34:
								return 1345.8699f, 6384.9634f, 52.4688f;
							case 35:
								return 754.4042f, 6465.9995f, 49f;
							case 36:
								return 1042.2163f, 6799.529f, 40.2945f;
							case 37:
								return 1779.1155f, 5662.172f, 274f;
							case 38:
								return 2898.0984f, 4327.4565f, 107.9208f;
							case 39:
								return 2634.3499f, 3661.461f, 111.1731f;
							case 40:
								return 2045.418f, 3429.5237f, 56.3868f;
							case 41:
								return 1563.0648f, 3572.8215f, 41f;
							case 42:
								return 2276.492f, 1955.5419f, 146.9525f;
							case 43:
								return 2379.7468f, 2604.9822f, 89.7836f;
							case 44:
								return 543.5116f, 3080.7087f, 63f;
							case 45:
								return 2264.6035f, 4455.955f, 62.2539f;
							case 46:
								return 2410.1868f, 2908.3357f, 373.9144f;
							case 47:
								return 3510.4792f, 2569.0525f, 16.1615f;
							case 48:
								return 3073.721f, 2084.0789f, 30f;
							case 49:
								return 3319.3398f, 2272.2173f, 14.2949f;
							case 50:
								return 2822.12f, 4977.3354f, 70f;
							case 51:
								return 1299.971f, 4219.281f, 41f;
							case 52:
								return 503.1913f, 4450.17f, 112f;
							case 53:
								return 2489.6204f, 3760.0535f, 53f;
							case 54:
								return 1824.4987f, 2031.218f, 60.1953f;
							case 55:
								return 1153.7646f, 2384.3997f, 75.2003f;
							case 56:
								return 1339.664f, 2747.6167f, 79.0765f;
							case 57:
								return 542.5154f, 2488.1936f, 84.9932f;
							case 58:
								return 2767.5425f, 2047.1622f, 126.1494f;
							case 59:
								return 2061.3596f, 3941.4512f, 200f;
							case 60:
								return 873.5367f, 2867.7366f, 73.5925f;
							case 61:
								return 1752.1415f, 3052.5417f, 78.6478f;
							case 62:
								return 2100.787f, 2339.8853f, 133.921f;
							case 63:
								return 2738.826f, 3476.4663f, 81.564f;
							case 64:
								return 2285.0886f, 3289.1294f, 86.2814f;
							case 65:
								return 1745.8994f, 3756.1274f, 53.8457f;
							case 66:
								return 2504.338f, 4418.7583f, 55f;
							case 67:
								return 1552.003f, 2186.4058f, 96f;
							case 68:
								return 2716.3765f, 4132.6562f, 63.7827f;
							case 69:
								return 3809.8135f, 4462.08f, 36.1286f;
							case 70:
								return 3257.8203f, 4308.5405f, 140f;
							case 71:
								return 2268.876f, 5381.4316f, 328.4639f;
							case 72:
								return 2236.3894f, 5604.6826f, 71.034f;
							case 73:
								return 1986.6572f, 6201.7393f, 66.4804f;
							case 74:
								return 3356.059f, 5696.29f, 20f;
							case 75:
								return 2457.2634f, 6684.452f, 63.14f;
							case 76:
								return 1914.9834f, 6702.2334f, 14.7976f;
							case 77:
								return 2149.8113f, 3844.9988f, 88.0922f;
							case 78:
								return 1880.169f, 4244.354f, 80.3363f;
							case 79:
								return 1791.8972f, 4595.9546f, 48.6224f;
							case 80:
								return 1181.1326f, 5151.4165f, 772.3138f;
							case 81:
								return 431.2495f, 4768.5356f, 665.041f;
							case 82:
								return 1410.6505f, 6569.377f, 26.5039f;
							case 83:
								return 1522.4656f, 6617.973f, 8f;
							case 84:
								return 2316.162f, 6378.7383f, 143.7605f;
							case 85:
								return 3127.772f, 5566.866f, 317.7646f;
							case 86:
								return 3684.367f, 4916.1523f, 618.67f;
							case 87:
								return 3941.7615f, 4652.369f, 92.7624f;
							case 88:
								return 3900.5806f, 4262.1035f, 887.18f;
							case 89:
								return 3535.1663f, 3778.2424f, 46.4187f;
							case 90:
								return 3638.8545f, 3108.9526f, 8.7037f;
							case 91:
								return 931.8565f, 2446.3755f, 59f;
							case 92:
								return 1052.2137f, 2277.729f, 95.5547f;
							case 93:
								return 411.0964f, 4298.8223f, 40.8556f;
							case 94:
								return 970.339f, 5647.13f, 650.7467f;
							case 95:
								return 2137.105f, 4785.5186f, 59.9326f;
							case 96:
								return 2333.533f, 4801.554f, 467.9726f;
							case 97:
								return 2800.7444f, 4745.3916f, 370.3547f;
							case 98:
								return 2721.0613f, 1556.4155f, 101.1161f;
							case 99:
								return 1855.2839f, 1600.6653f, 116.8989f;
							case 100:
								return 1623.4694f, 1518.1221f, 294.3194f;
							case 101:
								return 923.4011f, 1635.3481f, 218.3212f;
							case 102:
								return 829.6124f, 1892.8708f, 135.5203f;
							case 103:
								return 1294.0507f, 5675.865f, 472.5645f;
							case 104:
								return 1716.85f, 6416.6367f, 81.5075f;
							case 105:
								return 2140.929f, 5892.89f, 161.9607f;
							case 106:
								return 1604.3999f, 5793.905f, 429.8526f;
							case 107:
								return 1589.6504f, 4160.2153f, 883.122f;
							case 108:
								return 2191.1565f, 4208.336f, 477.8802f;
							case 109:
								return 1427.6396f, 4515.944f, 85.3721f;
							case 110:
								return 1206.398f, 4546.814f, 83.0875f;
							case 111:
								return 222.2962f, 4746.2065f, 280.8666f;
							case 112:
								return 287.655f, 5361.1143f, 659.2646f;
							case 113:
								return 194.6948f, 7393.7095f, 1000f;
							case 114:
								return 469.5136f, 6745.1055f, 14.1624f;
							case 115:
								return 537.5068f, 6663.253f, 447.8182f;
							case 116:
								return 3227.7927f, 6940.11f, 111.4631f;
							case 117:
								return 3614.2307f, 5883.145f, 9.5207f;
							case 118:
								return 3010.2542f, 5697.739f, 463.4349f;
							case 119:
								return 2874.3237f, 6196.4893f, 1000f;
							default:
						}
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						switch (iParam3)
						{
							case 0:
								return 1581.9629f, 2200.2444f, 78.0226f;
							case 1:
								return 1104.1044f, 2399.3965f, 53.529f;
							case 2:
								return 1089.4886f, 2132.9426f, 57.0757f;
							case 3:
								return 932.5687f, 2434.2637f, 49.6778f;
							case 4:
								return 586.3744f, 2935.3125f, 39.9577f;
							case 5:
								return 437.5278f, 3537.2847f, 32.3159f;
							case 6:
								return 917.2156f, 3648.1167f, 35.1053f;
							case 7:
								return 1528.5854f, 3916.301f, 30.6709f;
							case 8:
								return 1924.3997f, 3468.0645f, 50.6772f;
							case 9:
								return 2482.272f, 3761.5398f, 40.6483f;
							case 10:
								return 2722.3074f, 2895.323f, 46.873f;
							case 11:
								return 3021.2578f, 2881.7495f, 85.959f;
							case 12:
								return 2096.6426f, 2504.604f, 89.6423f;
							case 13:
								return 2974.6575f, 3485.9587f, 70.4429f;
							case 14:
								return 3390.0796f, 3704.603f, 34.9975f;
							case 15:
								return 2908.2136f, 4342.968f, 49.3031f;
							case 16:
								return 1796.1014f, 4920.626f, 47.3851f;
							case 17:
								return 2241.987f, 5382.8096f, 144.0017f;
							case 18:
								return 2218.899f, 5946.2627f, 49.634f;
							case 19:
								return 1601.4633f, 6624.7603f, 14.7707f;
							case 20:
								return 1406.9279f, 6568.6206f, 19.3763f;
							case 21:
								return 439.5467f, 6459.8657f, 34.8699f;
							case 22:
								return 1503.6865f, 6360.8555f, 15.6193f;
							case 23:
								return 3316.647f, 5190.3594f, 17.4152f;
							case 24:
								return 3632.8904f, 5003.482f, 11.6053f;
							case 25:
								return 3057.6587f, 5064.144f, 17.7153f;
							case 26:
								return 2822.5337f, 4978.232f, 62.4826f;
							case 27:
								return 3930.095f, 4399.0146f, 15.6116f;
							case 28:
								return 3859.2837f, 4226.9053f, 2.7151f;
							case 29:
								return 3692.6836f, 4570.5947f, 24.1191f;
							case 30:
								return 1830.9161f, 2542.0051f, 44.8856f;
							case 31:
								return 2424.3083f, 3131.437f, 47.2055f;
							case 32:
								return 1340.228f, 2988.9343f, 45.0809f;
							case 33:
								return 817.1245f, 3379.4683f, 76.9467f;
							case 34:
								return 563.2202f, 2456.9836f, 58.1331f;
							case 35:
								return 2041.7131f, 2002.4792f, 84.9881f;
							case 36:
								return 2431.8535f, 1986.8691f, 82.1812f;
							case 37:
								return 1190.8721f, 3401.1887f, 67.3338f;
							case 38:
								return 1943.9834f, 3817.8528f, 31.0619f;
							case 39:
								return 1977.6792f, 3054.874f, 49.3235f;
							case 40:
								return 452.5827f, 5587.175f, 780.1891f;
							case 41:
								return 807.1406f, 5701.082f, 696.9146f;
							case 42:
								return 1600.8683f, 5804.8296f, 414.5815f;
							case 43:
								return 1412.0156f, 5558.528f, 459.5185f;
							case 44:
								return 2279.983f, 5788.728f, 154.1637f;
							case 45:
								return 2346.1729f, 4997.5474f, 41.5868f;
							case 46:
								return 2391.9185f, 4296.647f, 34.1954f;
							case 47:
								return 1364.9434f, 4385.9746f, 43.3491f;
							case 48:
								return 998.6568f, 4453.989f, 59.924f;
							case 49:
								return 1058.949f, 4219.405f, 34.273f;
							case 50:
								return 870.7486f, 6627.962f, 1.1131f;
							case 51:
								return 2721.632f, 4513.4995f, 41.1966f;
							case 52:
								return 1219.4437f, 2744.5312f, 37.0054f;
							case 53:
								return 2564.3203f, 2578.4934f, 36.9367f;
							case 54:
								return 2827.7437f, 5963.866f, 350.6364f;
							case 55:
								return 2946.3967f, 5326.4736f, 100.269f;
							case 56:
								return 2211.1536f, 3593.3242f, 55.1756f;
							case 57:
								return 3079.837f, 6027.1445f, 129.2854f;
							case 58:
								return 3345.3003f, 5555.332f, 17.907f;
							case 59:
								return 528.5965f, 3092.7852f, 39.4652f;
							case 60:
								return 2184.8909f, 3724.3684f, 37.4901f;
							case 61:
								return 1471.091f, 4948.712f, 75.0594f;
							case 62:
								return 2713.9963f, 4141.762f, 42.8723f;
							case 63:
								return 2476.5576f, 5783.607f, 68.702f;
							case 64:
								return 2647.7498f, 3281.4016f, 54.2127f;
							case 65:
								return 2210.9763f, 5610.793f, 52.8602f;
							case 66:
								return 2898.3276f, 2389.586f, 170.4231f;
							case 67:
								return 2728.33f, 2616.2915f, 95.3074f;
							case 68:
								return 1844.4783f, 4591.953f, 29.6629f;
							case 69:
								return 2432.1277f, 4616.881f, 28.1137f;
							case 70:
								return 2574.2944f, 4653.86f, 33.0768f;
							case 71:
								return 1574.0092f, 3591.0657f, 34.3615f;
							case 72:
								return 2008.2645f, 4986.431f, 40.3378f;
							case 73:
								return 1975.0587f, 5182.086f, 46.8906f;
							case 74:
								return 1955.8948f, 4620.182f, 39.6384f;
							case 75:
								return 2279.7563f, 4846.217f, 39.2283f;
							case 76:
								return 2418.2915f, 4784.6743f, 33.6784f;
							case 77:
								return 2005.1091f, 3765.983f, 31.1808f;
							case 78:
								return 1719.6768f, 3692.7432f, 33.513f;
							case 79:
								return 1530.7114f, 3076.231f, 39.9815f;
							case 80:
								return 1686.3663f, 3301.0066f, 40.1368f;
							case 81:
								return 3481.6025f, 3740.4883f, 35.6427f;
							case 82:
								return 2392.4253f, 3334.924f, 46.3672f;
							case 83:
								return 2192.1538f, 3168.9421f, 50.5572f;
							case 84:
								return 2354.4958f, 2577.063f, 45.6677f;
							case 85:
								return 640.7736f, 2777.9377f, 40.9601f;
							case 86:
								return 2768.528f, 1701.8193f, 23.6943f;
							case 87:
								return 3239.6626f, 3501.2231f, 67.723f;
							case 88:
								return 2672.9524f, 3516.45f, 51.712f;
							case 89:
								return 2619.9617f, 3661.8643f, 100.2808f;
							case 90:
								return 2437.504f, 4069.2297f, 37.0001f;
							case 91:
								return 1685.5979f, 6435.691f, 31.3515f;
							case 92:
								return 1417.6531f, 3818.3943f, 31.1351f;
							case 93:
								return 3300.7f, 5941.6475f, 93.3217f;
							case 94:
								return 870.0084f, 2870.5645f, 55.9249f;
							case 95:
								return 1352.4126f, 6401.655f, 32.4101f;
							case 96:
								return 1960.8578f, 5376.274f, 185.2074f;
							case 97:
								return 1974.8472f, 6219.9585f, 41.2546f;
							case 98:
								return 3684.152f, 3795.9685f, 15.0641f;
							case 99:
								return 2625.7957f, 2809.9785f, 32.439f;
							case 100:
								return 1302.9315f, 4234.5405f, 32.9137f;
							case 101:
								return 577.5187f, 4169.561f, 37.8946f;
							case 102:
								return 1069.3113f, 2259.363f, 43.4741f;
							case 103:
								return 1381.4872f, 3633.717f, 34.0073f;
							case 104:
								return 3046.2493f, 6219.2285f, 111.0105f;
							case 105:
								return 985.3563f, 5642.3f, 627.7075f;
							case 106:
								return 2504.378f, 5178.0884f, 67.6632f;
							case 107:
								return 2537.3413f, 4476.488f, 36.1789f;
							case 108:
								return 1291.7302f, 4112.564f, 29.6645f;
							case 109:
								return 2176.2324f, 4605.335f, 29.194f;
							case 110:
								return 3456.6238f, 5135.3765f, -0.3837f;
							case 111:
								return 4054.2263f, 4518.3857f, 0.4f;
							case 112:
								return 1074.3125f, 6738.594f, 1.3817f;
							case 113:
								return 409.7385f, 4290.737f, 29.5f;
							case 114:
								return 2551.2747f, 6151.5703f, 161.1609f;
							case 115:
								return 3646.3347f, 2977.0486f, 0.6928f;
							case 116:
								return 1938.3722f, 4287.003f, 29.6693f;
							case 117:
								return 3630.215f, 5625.8413f, 1.2201f;
							case 118:
								return 1582.6128f, 6753.431f, 0.4436f;
							case 119:
								return 3449.314f, 2677.5195f, 0.0895f;
							default:
						}
						break;
					}
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_118(var uParam0)//Position - 0x8B51
{
	struct<3> Var0;
	int iVar1;
	Var0.f_0 = -1257646007;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = uParam0;
	iVar1 = __LIB_18__.func_554(1, 1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 3, iVar1);
	}
}

int func_122()//Position - 0x95CE
{
	return MISC::GET_RANDOM_INT_IN_RANGE(0, 1);
}

bool func_123()//Position - 0x95DC
{
	if (func_125(Local_130.f_712))
	{
		return 0;
	}
	else if (func_124(Local_130.f_712))
	{
		return 1;
	}
	return MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 1;
}

int func_124(int iParam0)//Position - 0x9611
{
	switch (iParam0)
	{
		case 0:
			return (Global_262145.f_11597 /* Tunable: CHECKPOINT_DISABLE_SE_QUARTER_LAND_VARIATION */ || Global_262145.f_11589 /* Tunable: CHECKPOINT_DISABLE_ALL_LAND_VARIATIONS */);
		case 1:
			return (Global_262145.f_11596 /* Tunable: CHECKPOINT_DISABLE_SW_QUARTER_LAND_VARIATION */ || Global_262145.f_11589 /* Tunable: CHECKPOINT_DISABLE_ALL_LAND_VARIATIONS */);
		case 2:
			return (Global_262145.f_11594 /* Tunable: CHECKPOINT_DISABLE_NW_QUARTER_LAND_VARIATION */ || Global_262145.f_11589 /* Tunable: CHECKPOINT_DISABLE_ALL_LAND_VARIATIONS */);
		case 3:
			return (Global_262145.f_11595 /* Tunable: CHECKPOINT_DISABLE_NE_QUARTER_LAND_VARIATION */ || Global_262145.f_11589 /* Tunable: CHECKPOINT_DISABLE_ALL_LAND_VARIATIONS */);
		default:
	}
	return 0;
}

int func_125(int iParam0)//Position - 0x9695
{
	switch (iParam0)
	{
		case 0:
			return (Global_262145.f_11593 /* Tunable: CHECKPOINT_DISABLE_SE_QUARTER_AIR_VARIATION */ || Global_262145.f_11588 /* Tunable: CHECKPOINT_DISABLE_ALL_AIR_VARIATIONS */);
		case 1:
			return (Global_262145.f_11592 /* Tunable: CHECKPOINT_DISABLE_SW_QUARTER_AIR_VARIATION */ || Global_262145.f_11588 /* Tunable: CHECKPOINT_DISABLE_ALL_AIR_VARIATIONS */);
		case 2:
			return (Global_262145.f_11590 /* Tunable: CHECKPOINT_DISABLE_NW_QUARTER_AIR_VARIATION */ || Global_262145.f_11588 /* Tunable: CHECKPOINT_DISABLE_ALL_AIR_VARIATIONS */);
		case 3:
			return (Global_262145.f_11591 /* Tunable: CHECKPOINT_DISABLE_NE_QUARTER_AIR_VARIATION */ || Global_262145.f_11588 /* Tunable: CHECKPOINT_DISABLE_ALL_AIR_VARIATIONS */);
		default:
	}
	return 0;
}

int func_126()//Position - 0x9719
{
	var uVar0[4];
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iLocal_105 = 1;
	switch (iLocal_105)
	{
		case 0:
			return MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
			break;
		case 1:
			iVar1 = func_127(&uVar0);
			iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar1);
			iVar3 = 0;
			while (iVar3 < 4)
			{
				if (iVar2 >= iVar4 && iVar2 < (uVar0[iVar3] + iVar4))
				{
					return iVar3;
				}
				iVar4 = (iVar4 + uVar0[iVar3]);
				iVar3++;
			}
			break;
		case 2:
			break;
		case 3:
			break;
	}
	return MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
}

int func_127(var uParam0)//Position - 0x97B1
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var3;
	bool bVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	bVar4 = true;
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			bVar6 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			if (__LIB_1__.func_264(bVar6, 1, 1))
			{
				iVar7 = PLAYER::GET_PLAYER_PED(bVar6);
				if (!PED::IS_PED_INJURED(iVar7))
				{
					iVar5 = 0;
					while (iVar5 < 4)
					{
						if (!func_129(iVar5))
						{
							if (__LIB_24__.func_859(iVar5, &Var2, &Var3))
							{
								if (ENTITY::IS_ENTITY_IN_AREA(iVar7, Var2, Var3, false, false, 0))
								{
									bVar4 = false;
									(*uParam0)[iVar5]++;
									iVar1++;
								}
							}
						}
						iVar5++;
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar4)
	{
		iVar5 = 0;
		while (iVar5 < 4)
		{
			if (!func_129(iVar5))
			{
				(*uParam0)[iVar5] = 1;
			}
			iVar5++;
		}
	}
	return iVar1;
}

bool func_129(int iParam0)//Position - 0x9935
{
	return (func_125(iParam0) && func_124(iParam0));
}

void func_131()//Position - 0x99D4
{
	bool bVar0;
	if (func_34())
	{
		bVar0 = false;
		while (bVar0 < 10)
		{
			if (Local_130.f_713[bVar0] == NETWORK::PARTICIPANT_ID_TO_INT())
			{
				if (__LIB_6__.func_970(bVar0))
				{
					if (!BitTest(Local_1497[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_1, bVar0))
					{
						MISC::SET_BIT(&(Local_1497[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_1), bVar0);
					}
				}
				else if (BitTest(Local_1497[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_1, bVar0))
				{
					MISC::CLEAR_BIT(&(Local_1497[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_1), bVar0);
				}
			}
			else if (BitTest(Local_1497[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_1, bVar0))
			{
				MISC::CLEAR_BIT(&(Local_1497[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_1), bVar0);
			}
			bVar0++;
		}
	}
}

void func_143()//Position - 0xA02E
{
	int iVar0;
	int iVar1;
	func_653();
	if (__LIB_18__.func_425())
	{
		func_530();
	}
	if (__LIB_7__.func_101(PLAYER::PLAYER_ID()) || __LIB_6__.func_991(PLAYER::PLAYER_ID()))
	{
		func_527();
	}
	if (!__LIB_2__.func_197(PLAYER::PLAYER_ID()) && !__LIB_6__.func_989(__LIB_1__.func_487(132)))
	{
		if (func_498(0, 1, 1))
		{
			if (BitTest(uLocal_95, 3))
			{
				MISC::CLEAR_BIT(&uLocal_95, 3);
			}
			switch (Local_1497[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3)
			{
				case 0:
					if (Local_130.f_8 == 1)
					{
						__LIB_1__.func_481(1);
						func_496(1);
					}
					else if (Local_130.f_8 >= 2)
					{
						func_496(1);
					}
					break;
				case 1:
					func_492(6);
					if (Local_130.f_8 >= 2)
					{
						func_496(2);
					}
					func_492(2);
					func_490(0);
					__LIB_1__.func_479((Global_262145.f_11586 /* Tunable: CHECKPOINT_EVENT_START_COUNTDOWN_TIME */ - __LIB_1__.func_295(&(Local_130.f_667), 0, 0)));
					__LIB_18__.func_267(__LIB_1__.func_294((Global_262145.f_11586 /* Tunable: CHECKPOINT_EVENT_START_COUNTDOWN_TIME */ - __LIB_1__.func_295(&(Local_130.f_667), 0, 0)), 0), __LIB_1__.func_478(-1));
					func_466();
					break;
				case 2:
					if (Local_130.f_8 > 2)
					{
						__LIB_1__.func_481(0);
						__LIB_6__.func_990(132, 1065353216, 1065353216, 0, 0, 0, 0);
						if (!__LIB_2__.func_197(PLAYER::PLAYER_ID()))
						{
							func_446();
						}
						else
						{
							MISC::SET_BIT(&uLocal_95, 5);
						}
						if (Local_130.f_710)
						{
							__LIB_1__.func_468();
						}
						if (Local_130.f_707)
						{
							Global_2815059.f_5114 = 1;
						}
						else
						{
							Global_2815059.f_5114 = 0;
						}
						func_444();
						if (!__LIB_2__.func_197(PLAYER::PLAYER_ID()))
						{
							if (func_34())
							{
								func_429(678f, 794f, 206f, 8f, 0);
								func_429(1911.3f, 4714.6f, 41.1f, 8f, 0);
								func_429(688.5021f, 735.4581f, 181.296f, 8f, 0);
							}
						}
						func_496(3);
					}
					break;
				case 3:
					if (Local_130.f_8 > 3)
					{
						func_496(4);
					}
					else
					{
						if (!iLocal_115)
						{
							if (func_428())
							{
								iLocal_115 = 1;
							}
						}
						iVar1 = 0;
						while (iVar1 < Local_130.f_709)
						{
							if (uLocal_97[iVar1] || iLocal_115)
							{
								__LIB_6__.func_983(iVar1);
							}
							iVar1++;
						}
						iVar0 = 0;
						while (iVar0 < 3)
						{
							uLocal_97[iLocal_91] = func_326(iLocal_91);
							uLocal_96[iLocal_91] = func_324(iLocal_91);
							if (!uLocal_96[iLocal_91])
							{
								__LIB_6__.func_983(iLocal_91);
							}
							iLocal_91++;
							if (iLocal_91 >= Local_130.f_709)
							{
								iLocal_91 = 0;
							}
							iVar0++;
						}
						func_490(0);
						func_492(4);
						func_492(5);
						if (func_322(0) && !func_321(0))
						{
							__LIB_1__.func_455();
						}
						if ((!__LIB_1__.func_454(PLAYER::PLAYER_ID()) && !HUD::IS_PAUSE_MENU_ACTIVE()) && !HUD::IS_HELP_MESSAGE_ON_SCREEN())
						{
							func_318();
						}
						func_317();
					}
					func_314();
					func_313();
					func_446();
					func_293();
					func_466();
					break;
				case 4:
					func_199();
					func_182();
					func_181();
					func_490(1);
					__LIB_1__.func_433();
					func_293();
					if (func_168(&uLocal_117, !BitTest(Local_130.f_2, 2)) || BitTest(Local_130.f_2, 2))
					{
						if (func_34())
						{
							func_496(5);
						}
						else
						{
							func_496(6);
						}
					}
					break;
				case 5:
					if (Local_130.f_8 > 5)
					{
						func_496(6);
					}
					break;
				case 6:
					break;
			}
		}
		else
		{
			func_163();
		}
	}
	else
	{
		func_527();
		func_163();
	}
	func_150();
	func_145();
	func_144();
}

void func_144()//Position - 0xA3AD
{
	struct<2> Var0;
	int iVar1;
	if (func_34())
	{
		Var0 = { Local_130.f_729[iLocal_106 /*2*/] };
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Var0.f_1))
		{
			iVar1 = NETWORK::NET_TO_VEH(Var0.f_1);
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
			{
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, false))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar1);
				}
			}
		}
		iLocal_106++;
		if (iLocal_106 >= 10)
		{
			iLocal_106 = 0;
			iLocal_128 = iLocal_127;
			iLocal_127 = 0;
		}
	}
}

void func_145()//Position - 0xA41A
{
	if (Local_130.f_8 == 5)
	{
		if (__LIB_0__.func_649(&(Local_130.f_669)))
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_130.f_729[iLocal_106 /*2*/].f_1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_130.f_729[iLocal_106 /*2*/].f_1), false))
				{
					if (!BitTest(uLocal_125, iLocal_106))
					{
						MISC::SET_BIT(&uLocal_125, iLocal_106);
						iLocal_126[iLocal_106] = AUDIO::GET_SOUND_ID();
						AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_126[iLocal_106], "Explosion_Countdown", NETWORK::NET_TO_VEH(Local_130.f_729[iLocal_106 /*2*/].f_1), "GTAO_FM_Events_Soundset", false, 0);
						AUDIO::SET_VARIABLE_ON_SOUND(iLocal_126[iLocal_106], "Time", 30f);
					}
					if ((30000 - __LIB_1__.func_295(&(Local_130.f_669), 0, 0)) >= 0)
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_130.f_729[iLocal_106 /*2*/].f_1), false))
						{
							func_492(3);
							iLocal_127 = 1;
						}
					}
					else if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_130.f_729[iLocal_106 /*2*/].f_1))
					{
						ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(NETWORK::NET_TO_VEH(Local_130.f_729[iLocal_106 /*2*/].f_1));
						NETWORK::NETWORK_EXPLODE_VEHICLE(NETWORK::NET_TO_VEH(Local_130.f_729[iLocal_106 /*2*/].f_1), true, false, -1);
					}
				}
				else if (BitTest(uLocal_125, iLocal_106) && !AUDIO::HAS_SOUND_FINISHED(iLocal_126[iLocal_106]))
				{
					AUDIO::STOP_SOUND(iLocal_126[iLocal_106]);
				}
			}
			if (iLocal_128)
			{
				if (!__LIB_7__.func_211(PLAYER::PLAYER_ID()))
				{
					__LIB_6__.func_985(__LIB_1__.func_294((30000 - __LIB_1__.func_295(&(Local_130.f_669), 0, 0)), 0), "HTV_DESTR" /* GXT: SELF-DESTRUCT */, 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
					__LIB_1__.func_428();
				}
			}
		}
	}
}

void func_150()//Position - 0xA748
{
	char* sVar0;
	if (((__LIB_1__.func_264(PLAYER::PLAYER_ID(), 1, 1) && !__LIB_2__.func_197(PLAYER::PLAYER_ID())) && !__LIB_6__.func_991(PLAYER::PLAYER_ID())) && func_498(0, 1, 1))
	{
		if (Local_1497[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3 == 1)
		{
			if (Local_130.f_707)
			{
				sVar0 = "CPC_TILELA" /* GXT: Air Checkpoints */;
			}
			else
			{
				sVar0 = "CPC_TILEL" /* GXT: Checkpoints */;
			}
			if (func_34() && !PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				func_151("CPC_PREPAIR" /* GXT: Find an air vehicle and prepare for ~a~ in the ~a~. */, sVar0, func_162(), 0);
			}
			else
			{
				func_151("CPC_PREP" /* GXT: Prepare for ~a~ in the ~a~. */, sVar0, func_162(), 0);
			}
		}
		else
		{
			func_444();
		}
	}
	else
	{
		func_444();
	}
}

int func_151(char* sParam0, char* sParam1, char* sParam2, bool bParam3)//Position - 0xA7EE
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23)
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam1) > 23)
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return 0;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam2) > 23)
	{
		return 0;
	}
	if (__LIB_2__.func_10(sParam0, sParam1, sParam2))
	{
		return 0;
	}
	func_155();
	Global_1574757 = 4;
	StringCopy(&(Global_1574757.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1574757.f_9 = MISC::GET_HASH_KEY(&(Global_1574757.f_1));
	StringCopy(&(Global_1574757.f_12), sParam0, 16);
	StringCopy(&(Global_1574757.f_16), sParam1, 64);
	StringCopy(&(Global_1574757.f_32), sParam2, 64);
	__LIB_1__.func_270();
	__LIB_1__.func_269(bParam3);
	__LIB_1__.func_268();
	return 1;
}

void func_155()//Position - 0xA90B
{
	__LIB_1__.func_555();
	__LIB_1__.func_271(0);
}

char* func_162()//Position - 0xAD03
{
	switch (Local_130.f_712)
	{
		case 0:
			return "CPC_WARN0" /* GXT: South East */;
			break;
		case 1:
			return "CPC_WARN1" /* GXT: South West */;
			break;
		case 2:
			return "CPC_WARN2" /* GXT: North West */;
			break;
		case 3:
			return "CPC_WARN3" /* GXT: North East */;
			break;
	}
	return "";
}

void func_163()//Position - 0xAD55
{
	if (!BitTest(uLocal_95, 3))
	{
		iLocal_115 = 1;
		func_181();
		HUD::CLEAR_ALL_HELP_MESSAGES();
		func_490(1);
		__LIB_1__.func_431();
		__LIB_7__.func_177();
		MISC::SET_BIT(&uLocal_95, 3);
		__LIB_1__.func_430();
	}
}

int func_168(var uParam0, bool bParam1)//Position - 0xAE3A
{
	bool bVar0;
	if ((((*uParam0 > 0 && !__LIB_1__.func_159()) && !(__LIB_1__.func_425(PLAYER::PLAYER_ID(), 0) && (__LIB_1__.func_570(PLAYER::PLAYER_ID()) || __LIB_1__.func_575(PLAYER::PLAYER_ID())))) && !__LIB_2__.func_295(PLAYER::PLAYER_ID())) && !__LIB_1__.func_279(PLAYER::PLAYER_ID()))
	{
		__LIB_1__.func_432();
	}
	switch (*uParam0)
	{
		case 0:
			if (!__LIB_0__.func_649(&(uParam0->f_3)))
			{
				__LIB_0__.func_580(&(uParam0->f_3), 0, 0);
			}
			else if (__LIB_2__.func_47(&(uParam0->f_3), 1000, 0))
			{
				MISC::SET_BIT(&(Global_1836844.f_1), 25);
				if (bParam1)
				{
					MISC::SET_BIT(&(Global_2815059.f_4657), 0);
					__LIB_0__.func_580(&(uParam0->f_5), 0, 0);
				}
				__LIB_0__.func_580(&(uParam0->f_1), 0, 0);
				__LIB_1__.func_0(uParam0, 1);
			}
			break;
		case 1:
			if (__LIB_0__.func_649(&(uParam0->f_5)))
			{
				if (__LIB_2__.func_47(&(uParam0->f_5), 3000, 0))
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
				__LIB_18__.func_264();
				__LIB_1__.func_0(uParam0, 2);
			}
			break;
		case 2:
			__LIB_18__.func_264();
			if (__LIB_2__.func_47(&(uParam0->f_1), 15000, 0))
			{
				if (__LIB_0__.func_1("AMEV_LBD_HELP" /* GXT: Press ~INPUT_MULTIPLAYER_INFO~ to show the Freemode Event leaderboard. */))
				{
					HUD::CLEAR_HELP(true);
				}
				__LIB_1__.func_0(uParam0, 3);
			}
			break;
		case 3:
			if (__LIB_2__.func_47(&(uParam0->f_1), 23500, 0))
			{
				MISC::CLEAR_BIT(&(Global_2815059.f_4657), 1);
				__LIB_1__.func_0(uParam0, 4);
				return 1;
			}
			break;
		case 4:
			MISC::CLEAR_BIT(&(Global_2815059.f_4657), 1);
			return 1;
	}
	return 0;
}

void func_181()//Position - 0xB663
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_130.f_709)
	{
		if (HUD::DOES_BLIP_EXIST(Local_113[iVar0 /*3*/]))
		{
			HUD::REMOVE_BLIP(&(Local_113[iVar0 /*3*/]));
			GRAPHICS::DELETE_CHECKPOINT(Local_113[iVar0 /*3*/].f_1);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iLocal_103[iVar0] = 0;
		iVar0++;
	}
}

void func_182()//Position - 0xB6C2
{
	char* sVar0;
	int iVar1;
	bool bVar2;
	char* sVar3;
	if (!BitTest(Local_1497[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2, 0) && (__LIB_1__.func_438() || BitTest(Local_130.f_2, 2)))
	{
		if (__LIB_0__.func_970(__LIB_1__.func_437()))
		{
			__LIB_6__.func_952();
		}
		if (!BitTest(Local_130.f_2, 2))
		{
			if (func_322(0))
			{
				if (func_321(0))
				{
					if (!BitTest(Local_130.f_2, 0))
					{
						sVar0 = "CPC_END" /* GXT: You won Checkpoints with a score of ~1~ */;
					}
					else
					{
						sVar0 = "CPC_ENDBONUS" /* GXT: You won Checkpoints with a score of ~1~. You received a bonus for helping collect all the checkpoints. */;
					}
					func_195(64, Local_1497[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, sVar0, "AMCH_WIN" /* GXT: WINNER */, 1, 15000, -1082130432, 2, 0);
				}
				else
				{
					iVar1 = PLAYER::INT_TO_PARTICIPANTINDEX(Local_130.f_674[0]);
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar1))
					{
						bVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar1);
						if (func_321(1))
						{
							if (!BitTest(Local_130.f_2, 0))
							{
								sVar0 = "CPC_2ND" /* GXT: You came second in Checkpoints with a score of ~1~ */;
							}
							else
							{
								sVar0 = "CPC_2NDBONUS" /* GXT: You came second in Checkpoints with a score of ~1~. You received a bonus for helping collect all the checkpoints. */;
							}
							func_195(67, Local_1497[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, sVar0, "CPC_OVER" /* GXT: EVENT OVER */, 1, 15000, -1082130432, 2, 0);
						}
						else if (func_321(2))
						{
							if (!BitTest(Local_130.f_2, 0))
							{
								sVar0 = "CPC_3RD" /* GXT: You came third in Checkpoints with a score of ~1~ */;
							}
							else
							{
								sVar0 = "CPC_3RDBONUS" /* GXT: You came third in Checkpoints with a score of ~1~. You received a bonus for helping collect all the checkpoints. */;
							}
							func_195(67, Local_1497[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, sVar0, "CPC_OVER" /* GXT: EVENT OVER */, 1, 15000, -1082130432, 2, 0);
						}
						else
						{
							if (BitTest(Local_130.f_2, 0) && Local_1497[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4 >= Global_262145.f_11746 /* Tunable: CHECKPOINT_PARTICIPATION_THRESHOLD_MIN_CHECKPOINTS_COLLECTED */)
							{
								sVar0 = "CPC_LOSEBONUS" /* GXT: <C>~a~</C>~s~ won Checkpoints with a score of ~1~. You received a bonus for helping collect all the checkpoints. */;
							}
							else
							{
								sVar0 = "CPC_LOSE" /* GXT: <C>~a~</C>~s~ won Checkpoints with a score of ~1~ */;
							}
							sVar3 = PLAYER::GET_PLAYER_NAME(bVar2);
							if (__LIB_6__.func_978(bVar2, 1))
							{
								sVar3 = __LIB_31__.func_905(bVar2);
							}
							__LIB_1__.func_911(66, Local_1497[Local_130.f_674[0] /*5*/].f_4, sVar0, sVar3, "CPC_OVER" /* GXT: EVENT OVER */, 1, 15000, 2);
						}
					}
				}
			}
			else
			{
				func_44(66, "CPC_OVER" /* GXT: EVENT OVER */, "CPC_NOWIN" /* GXT: No checkpoints were collected */, 1, 15000, 2, 1, 0);
			}
		}
		else
		{
			func_43("", "", 1);
		}
		MISC::SET_BIT(&(Local_1497[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2), 0);
		__LIB_1__.func_434(132);
	}
}

int func_195(int iParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0xBBFF
{
	struct<80> Var0;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	__LIB_0__.func_975(iParam0, &Var0, iParam1, sParam2, sParam3);
	Var0.f_71 = iParam4;
	Var0.f_6 = iParam5;
	Var0.f_7 = iParam6;
	Var0.f_72 = iParam7;
	if (iParam8 != 0)
	{
		__LIB_6__.func_896(&(Var0.f_69), iParam8);
	}
	return func_45(&Var0);
}

void func_199()//Position - 0xBCF0
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	if (!BitTest(Local_1497[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2, 1))
	{
		if (__LIB_2__.func_197(PLAYER::PLAYER_ID()))
		{
			MISC::SET_BIT(&(Local_1497[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2), 1);
			return;
		}
		if (__LIB_6__.func_991(PLAYER::PLAYER_ID()))
		{
			MISC::SET_BIT(&(Local_1497[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2), 1);
			return;
		}
		if (Local_1497[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4 >= Global_262145.f_11746 /* Tunable: CHECKPOINT_PARTICIPATION_THRESHOLD_MIN_CHECKPOINTS_COLLECTED */)
		{
			iVar3 = SYSTEM::FLOOR(((SYSTEM::TO_FLOAT((Local_130.f_1 - iLocal_93)) / 60f) / 1000f));
			if (iVar3 > Global_262145.f_11907 /* Tunable: PARTICIPATION_T_CAP */)
			{
				iVar3 = Global_262145.f_11907 /* Tunable: PARTICIPATION_T_CAP */;
			}
			else if (iVar3 < 1)
			{
				iVar3 = 1;
			}
			iVar2 = (func_292() * iVar3);
			iVar1 = (func_291() * iVar3);
		}
		else
		{
			__LIB_7__.func_247(0);
		}
		if (!BitTest(Local_130.f_2, 2))
		{
			if (Local_1497[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4 >= Global_262145.f_11746 /* Tunable: CHECKPOINT_PARTICIPATION_THRESHOLD_MIN_CHECKPOINTS_COLLECTED */)
			{
				if (BitTest(Local_130.f_2, 0))
				{
					iVar0 = (iVar0 + SYSTEM::ROUND((IntToFloat(func_288()) * Global_262145.f_11918 /* Tunable: CHECKPOINTS_EVENT_MULTIPLIER_CASH */)));
				}
			}
			if (func_321(0))
			{
				Local_1496.f_5 = 1;
				iVar1 = (iVar1 + SYSTEM::ROUND((IntToFloat(func_287()) * Global_262145.f_11919 /* Tunable: CHECKPOINTS_EVENT_MULTIPLIER_RP */)));
			}
			if ((Local_130.f_674[0] != NETWORK::PARTICIPANT_ID_TO_INT() && Local_130.f_674[1] != NETWORK::PARTICIPANT_ID_TO_INT()) && Local_130.f_674[2] != NETWORK::PARTICIPANT_ID_TO_INT())
			{
				if (Local_1497[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4 >= Global_262145.f_11746 /* Tunable: CHECKPOINT_PARTICIPATION_THRESHOLD_MIN_CHECKPOINTS_COLLECTED */)
				{
					__LIB_7__.func_247(1);
				}
			}
		}
		func_268(&iVar0, 1);
		iVar0 = (iVar0 + iVar2);
		if (iVar0 > 0)
		{
			if (__LIB_0__.func_112())
			{
				__LIB_35__.func_547(joaat("SERVICE_EARN_AMBIENT_JOB_CHECKPOINT_COLLECTION"), iVar0, &uVar4, 0, 1, 0);
			}
			else
			{
				MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(iVar0, "AM_CP_COLLECTION", &uVar5);
			}
		}
		Local_1496.f_6 = iVar0;
		if (!Global_262145.f_11971 /* Tunable: CHECKPOINTS_DISABLE_SHARE_CASH */)
		{
			if (Local_1496.f_6 > 0)
			{
				__LIB_1__.func_445(8, Local_1496.f_6);
			}
		}
		Global_2727753 = iVar0;
		__LIB_1__.func_444();
		__LIB_41__.func_573(0, PLAYER::PLAYER_PED_ID(), "", joaat("XPTYPE_COMPLETE"), joaat("XPCATEGORY_COMPLETE_CHALLENGES"), iVar1, 1, -1, 0, 0, 0);
		Local_1496.f_7 = (Local_1496.f_7 + iVar1);
		MISC::SET_BIT(&(Local_1497[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2), 1);
	}
}

void func_268(int iParam0, int iParam1)//Position - 0xECEB
{
	int iVar0;
	if (*iParam0 > 0)
	{
		if (!__LIB_2__.func_232())
		{
			if (func_285(0))
			{
				if (!__LIB_18__.func_436(0))
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(__LIB_0__.func_582()))
					{
						if (__LIB_1__.func_449() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * __LIB_1__.func_449());
							*iParam0 = (*iParam0 - iVar0);
						}
						__LIB_6__.func_976(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_273("GB_BCUT_TICK1" /* GXT: You paid ~a~ ~s~a $~1~ ~s~cut. */, __LIB_0__.func_582(), iVar0, 0, 0, 1);
						}
						__LIB_1__.func_447(20);
						__LIB_6__.func_982(__LIB_0__.func_582(), iVar0, 1);
					}
				}
			}
		}
	}
}

int func_273(char* sParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, int iParam5)//Position - 0xEE38
{
	int iVar0;
	struct<8> Var1;
	iVar0 = -1;
	if (NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), bParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(bParam1), 64);
		}
		else
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(bParam1), 64);
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Var1))
		{
		}
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_61(bParam1, -2, 1, 0, 0));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(__LIB_6__.func_957(&Var1));
		if (!iParam3 == 0)
		{
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam3);
		}
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
		iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
		__LIB_18__.func_263(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

bool func_285(bool bParam0)//Position - 0xF140
{
	return __LIB_6__.func_978(PLAYER::PLAYER_ID(), bParam0);
}

int func_287()//Position - 0xF162
{
	return Global_262145.f_11729 /* Tunable: CHECKPOINT_BONUS_RP */;
}

int func_288()//Position - 0xF171
{
	return Global_262145.f_11728 /* Tunable: CHECKPOINT_BONUS_CASH */;
}

int func_291()//Position - 0xF25F
{
	return Global_262145.f_11748 /* Tunable: CHECKPOINT_MINIMUM_PARTICIPATION_RP */;
}

int func_292()//Position - 0xF26E
{
	return Global_262145.f_11747 /* Tunable: CHECKPOINT_MINIMUM_PARTICIPATION_CASH */;
}

void func_293()//Position - 0xF27D
{
	if (BitTest(uLocal_95, 5))
	{
		func_294();
	}
	func_530();
}

void func_294()//Position - 0xF294
{
	bool bVar0[3];
	bool bVar1;
	var uVar2[3];
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11[3];
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	if (Local_130.f_674[0] > -1)
	{
		iVar9 = 0;
		iVar7 = 0;
		while (iVar7 < 3)
		{
			bVar0[iVar7] = __LIB_0__.func_160();
			iVar7++;
		}
		iVar7 = 0;
		while (iVar7 < 3)
		{
			if (Local_130.f_674[iVar7] > -1)
			{
				iVar12 = PLAYER::INT_TO_PARTICIPANTINDEX(Local_130.f_674[iVar7]);
				if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar12))
				{
					bVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar12);
					if (__LIB_1__.func_264(bVar1, 0, 1))
					{
						if (!__LIB_6__.func_978(bVar1, 0))
						{
							bVar0[iVar7] = bVar1;
							uVar2[iVar7] = Local_1497[Local_130.f_674[iVar7] /*5*/].f_4;
							if (func_285(1))
							{
								if (__LIB_6__.func_978(bVar1, 1))
								{
									uVar11[iVar7] = func_61(bVar1, -2, 0, 0, 0);
								}
							}
						}
					}
				}
			}
			iVar7++;
		}
		iVar8 = NETWORK::PARTICIPANT_ID_TO_INT();
		if (__LIB_7__.func_211(PLAYER::PLAYER_ID()))
		{
			iVar13 = __LIB_6__.func_544();
			iVar14 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar13);
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar14))
			{
				iVar15 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar14);
				if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar15))
				{
					iVar8 = iVar15;
				}
			}
		}
		iVar3 = __LIB_1__.func_294(0, Local_130.f_708);
		iVar4 = Local_130.f_709;
		iVar5 = __LIB_1__.func_294(0, Local_1497[iVar8 /*5*/].f_4);
		iVar6 = __LIB_1__.func_294(0, (Global_262145.f_11585 /* Tunable: CHECKPOINT_EVENT_TIME_LIMIT */ - __LIB_1__.func_295(&(Local_130.f_661), 0, 0)));
		__LIB_18__.func_265(iVar6);
		if (iVar6 > 30000)
		{
			iVar10 = 1;
		}
		else
		{
			iVar10 = 6;
		}
		func_295(bVar0[0], bVar0[1], bVar0[2], uVar2[0], uVar2[1], uVar2[2], iVar3, iVar4, iVar5, iVar6, &iVar9, iVar10, __LIB_7__.func_178(), uVar11[0], uVar11[1], uVar11[2]);
	}
}

void func_295(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, char* sParam12, var uParam13, var uParam14, var uParam15)//Position - 0xF446
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	if (__LIB_6__.func_987(0) == 0)
	{
		return;
	}
	__LIB_1__.func_451();
	iVar1 = 0;
	if (((Global_2726607[0] != iParam0 || Global_2726607[1] != iParam1) || Global_2726607[2] != iParam2) || *iParam10)
	{
		iVar1 = 1;
	}
	Global_2726607[0] = iParam0;
	Global_2726607[1] = iParam1;
	Global_2726607[2] = iParam2;
	Global_2726607[3] = 0;
	Global_2726607[4] = 0;
	if (Global_2726607[0] != __LIB_0__.func_160())
	{
		if (iVar1 == 1)
		{
			sVar0 = PLAYER::GET_PLAYER_NAME(Global_2726607[0]);
			Global_2726613[0 /*16*/] = { __LIB_1__.func_450(1, sVar0) };
		}
		if (iParam3 > 0)
		{
			__LIB_6__.func_986(iParam3, &(Global_2726613[0 /*16*/]), -1, 109, 8, 1, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, uParam13, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	if (Global_2726607[1] != __LIB_0__.func_160())
	{
		if (iVar1 == 1)
		{
			sVar0 = PLAYER::GET_PLAYER_NAME(Global_2726607[1]);
			Global_2726613[1 /*16*/] = { __LIB_1__.func_450(2, sVar0) };
		}
		if (iParam4 > 0)
		{
			__LIB_6__.func_986(iParam4, &(Global_2726613[1 /*16*/]), -1, 108, 7, 1, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, uParam14, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	if (Global_2726607[2] != __LIB_0__.func_160())
	{
		if (iVar1 == 1)
		{
			sVar0 = PLAYER::GET_PLAYER_NAME(Global_2726607[2]);
			Global_2726613[2 /*16*/] = { __LIB_1__.func_450(3, sVar0) };
		}
		if (iParam5 > 0)
		{
			__LIB_6__.func_986(iParam5, &(Global_2726613[2 /*16*/]), -1, 107, 6, 1, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, uParam15, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	__LIB_2__.func_295(iParam6, iParam7, "HUD_CHECKPOINTS" /* GXT: REMAINING */, -1, 1, 5, 0, 0, 0, 0, 1, 1, 1, 0, 255, 0);
	if (__LIB_6__.func_991(PLAYER::PLAYER_ID()) == 0)
	{
		__LIB_6__.func_986(iParam8, "HUD_USCORE" /* GXT: YOUR SCORE */, -1, 1, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	sVar2 = "HUD_COUNTDOWN" /* GXT: EVENT END */;
	if (!__LIB_0__.func_786(sParam12))
	{
		sVar2 = sParam12;
	}
	__LIB_6__.func_985(iParam9, sVar2, 0, 0, -1, 0, 3, 0, iParam11, 0, 0, 0, iParam11, 0, 0, 0, 0, -1);
	*iParam10 = 0;
	__LIB_1__.func_428();
}

void func_313()//Position - 0x10228
{
	int iVar0;
	struct<42> Var1;
	bool bVar2;
	int iVar3;
	var uVar4;
	Var1 = -1;
	Var1.f_22 = -1082130432;
	Var1.f_23 = 3;
	Var1.f_39 = -1;
	Var1.f_41 = -1;
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		Local_151.f_534[iVar0 /*42*/] = { Var1 };
		Local_151.f_534[iVar0 /*42*/].f_1 = __LIB_0__.func_160();
		if (Local_130.f_674[iVar0] > -1)
		{
			iVar3 = PLAYER::INT_TO_PARTICIPANTINDEX(Local_130.f_674[iVar0]);
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3))
			{
				bVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar3);
				if (!__LIB_6__.func_978(bVar2, 0))
				{
					Local_151.f_534[iVar0 /*42*/] = Local_130.f_674[iVar0];
					Local_151.f_534[iVar0 /*42*/].f_1 = bVar2;
					uVar4 = Local_1497[Local_130.f_674[iVar0] /*5*/].f_4;
					Local_151.f_534[iVar0 /*42*/].f_9 = uVar4;
					Local_151.f_534[iVar0 /*42*/].f_31 = -1;
				}
			}
		}
		iVar0++;
	}
}

void func_314()//Position - 0x10314
{
	if (Local_129.f_0 != -1 && Local_129.f_1 != -1)
	{
		if (NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT() != __LIB_0__.func_160() && NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT()))
		{
			__LIB_18__.func_263(Local_129.f_1, Local_129.f_0, __LIB_1__.func_276(NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT())));
			Local_129.f_0 = -1;
			Local_129.f_1 = -1;
		}
	}
}

void func_317()//Position - 0x103AC
{
	if (func_321(0))
	{
		if (!BitTest(uLocal_95, 4))
		{
			if (__LIB_18__.func_436(1))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Enter_1st", "GTAO_Biker_Modes_Soundset", false);
			}
			else
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Enter_1st", "GTAO_FM_Events_Soundset", false);
			}
			MISC::SET_BIT(&uLocal_95, 4);
		}
	}
	else if (BitTest(uLocal_95, 4))
	{
		if (__LIB_18__.func_436(1))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Lose_1st", "GTAO_Biker_Modes_Soundset", false);
		}
		else
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Lose_1st", "GTAO_FM_Events_Soundset", false);
		}
		MISC::CLEAR_BIT(&uLocal_95, 4);
	}
}

void func_318()//Position - 0x10428
{
	MISC::SET_BIT(&(Global_2815059.f_1797), 26);
}

int func_321(int iParam0)//Position - 0x104DB
{
	if (iParam0 >= 0)
	{
		if (Local_130.f_674[iParam0] == NETWORK::PARTICIPANT_ID_TO_INT() && Local_1497[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4 > 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_322(int iParam0)//Position - 0x10512
{
	int iVar0;
	if (iParam0 >= 0)
	{
		iVar0 = Local_130.f_674[iParam0];
		if (iVar0 >= 0)
		{
			if (__LIB_1__.func_577(Local_1497[iVar0 /*5*/].f_4, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_324(int iParam0)//Position - 0x10555
{
	return __LIB_0__.func_529(PLAYER::PLAYER_PED_ID(), Local_130.f_10[iParam0 /*5*/], 1) < 500f;
}

bool func_326(int iParam0)//Position - 0x105B1
{
	return __LIB_0__.func_529(PLAYER::PLAYER_PED_ID(), Local_130.f_10[iParam0 /*5*/], 1) < 750f;
}

void func_328(struct<4> Param0, var uParam1, int iParam2)//Position - 0x1061E
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	if (Param0.f_3 == NETWORK::PARTICIPANT_ID_TO_INT() && !BitTest(uLocal_102[__LIB_1__.func_403(iParam2)], __LIB_6__.func_950(iParam2)))
	{
		Local_1497[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4++;
		if (iLocal_93 == 0)
		{
			iLocal_93 = NETWORK::GET_NETWORK_TIME();
		}
		iVar0 = func_353(SYSTEM::CEIL((IntToFloat(Local_1497[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4) / __LIB_6__.func_976())));
		iVar1 = __LIB_1__.func_574(SYSTEM::CEIL((IntToFloat(Local_1497[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4) / func_352())));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * Global_262145.f_11918 /* Tunable: CHECKPOINTS_EVENT_MULTIPLIER_CASH */));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * Global_262145.f_11919 /* Tunable: CHECKPOINTS_EVENT_MULTIPLIER_RP */));
		if (func_34())
		{
			iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * __LIB_1__.func_573()));
			iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * func_349()));
		}
		if (__LIB_0__.func_112())
		{
			__LIB_35__.func_547(joaat("SERVICE_EARN_AMBIENT_JOB_CHECKPOINT_COLLECTION"), iVar0, &uVar2, 0, 1, 0);
		}
		else
		{
			MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(iVar0, "AM_CP_COLLECTION", &uVar3);
		}
		__LIB_1__.func_444();
		__LIB_41__.func_573(0, PLAYER::PLAYER_PED_ID(), "", joaat("XPTYPE_SKILL"), joaat("XPCATEGORY_COLLECT_CHECKPOINT"), iVar1, 1, -1, 0, 0, 0);
		iLocal_104 = (iLocal_104 + iVar0);
		Global_2727753 = iVar0;
		Local_1496.f_7 = (Local_1496.f_7 + iVar1);
		MISC::SET_BIT(&(uLocal_102[__LIB_1__.func_403(iParam2)]), __LIB_6__.func_950(iParam2));
		if (Local_1496.f_11 == 0)
		{
			Local_1496.f_11 = NETWORK::GET_CLOUD_TIME_AS_INT();
		}
		func_329();
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Checkpoint_Cash_Hit", "GTAO_FM_Events_Soundset", false);
	}
}

void func_329()//Position - 0x10785
{
	if (!BitTest(Local_1497[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2, 2))
	{
		MISC::SET_BIT(&(Local_1497[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2), 2);
		__LIB_25__.func_34(1);
	}
}

float func_349()//Position - 0x10CED
{
	return Global_262145.f_11731 /* Tunable: CHECKPOINT_AIR_CHECKPOINT_MULTIPLIER_RP */;
}

float func_352()//Position - 0x10D61
{
	return Global_262145.f_11490 /* Tunable: CP_COLLECTION_RP_REWARD_CHECKPOINT_SPACER */;
}

var func_353(int iParam0)//Position - 0x10D70
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_11732 /* Tunable: CHECKPOINT_SET_1CASH_VALUE */;
		case 2:
			return Global_262145.f_11733 /* Tunable: CHECKPOINT_SET_2_CASH_VALUE */;
		case 3:
			return Global_262145.f_11734 /* Tunable: CHECKPOINT_SET_3_CASH_VALUE */;
		case 4:
			return Global_262145.f_11735 /* Tunable: CHECKPOINT_SET_4_CASH_VALUE */;
		case 5:
			return Global_262145.f_11736 /* Tunable: CHECKPOINT_SET_5_CASH_VALUE */;
		case 6:
			return Global_262145.f_11737 /* Tunable: CHECKPOINT_SET_6_CASH_VALUE */;
		case 7:
			return Global_262145.f_11738 /* Tunable: CHECKPOINT_SET_7_CASH_VALUE */;
		case 8:
			return Global_262145.f_11739 /* Tunable: CHECKPOINT_SET_8_CASH_VALUE */;
		case 9:
		case 10:
		case 11:
		case 12:
			return Global_262145.f_11740 /* Tunable: CHECKPOINT_SET_9_CASH_VALUE */;
		default:
	}
	return Global_262145.f_11741 /* Tunable: CHECKPOINT_SET_10_CASH_VALUE */;
}

void func_355(struct<3> Param0, var uParam1, var uParam2, int iParam3)//Position - 0x10E37
{
	float fVar0;
	float fVar1;
	float fVar2;
	if (!BitTest(Local_130.f_3[__LIB_1__.func_403(iParam3)], __LIB_6__.func_950(iParam3)))
	{
		if (!BitTest(uLocal_101[__LIB_1__.func_403(iParam3)], __LIB_6__.func_950(iParam3)))
		{
			if (func_34())
			{
				fVar0 = 6f;
				fVar1 = 6f;
				fVar2 = 4f;
			}
			else
			{
				fVar0 = 3f;
				fVar1 = 2.5f;
				fVar2 = 2.8f;
			}
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Param0 + Vector(fVar2, 0f, 0f), fVar1, fVar1, fVar0, false, true, 0))
			{
				if (func_356())
				{
					iLocal_100 = NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_130.f_9);
					if (NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT() != __LIB_0__.func_160() && NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT()))
					{
						__LIB_18__.func_263(iLocal_100, iParam3, __LIB_1__.func_276(NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT())));
						Local_129.f_0 = -1;
						Local_129.f_1 = -1;
					}
					else
					{
						Local_129.f_0 = iParam3;
						Local_129.f_1 = iLocal_100;
					}
					MISC::SET_BIT(&(uLocal_101[__LIB_1__.func_403(iParam3)]), __LIB_6__.func_950(iParam3));
				}
			}
		}
		else if (__LIB_2__.func_47(&uLocal_107, 250, 0))
		{
			if (NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT() != __LIB_0__.func_160() && NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT()))
			{
				__LIB_18__.func_263(iLocal_100, iParam3, __LIB_1__.func_276(NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT())));
				Local_129.f_1 = -1;
				Local_129.f_0 = -1;
			}
			else
			{
				Local_129.f_0 = iParam3;
				Local_129.f_1 = iLocal_100;
			}
			__LIB_0__.func_579(&uLocal_107);
		}
	}
}

int func_356()//Position - 0x10F81
{
	if (!__LIB_1__.func_264(PLAYER::PLAYER_ID(), 1, 1))
	{
		return 0;
	}
	if (__LIB_6__.func_991(PLAYER::PLAYER_ID()))
	{
		if (((__LIB_0__.func_674() && !__LIB_1__.func_459()) || __LIB_0__.func_702(PLAYER::PLAYER_ID(), 21)) || __LIB_0__.func_702(PLAYER::PLAYER_ID(), 25))
		{
			func_492(0);
		}
		else
		{
			func_492(7);
		}
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (__LIB_0__.func_306(PLAYER::PLAYER_PED_ID(), 0) != -1)
		{
			return 0;
		}
	}
	if (__LIB_6__.func_978(PLAYER::PLAYER_ID(), 0))
	{
		return 0;
	}
	if (!func_34())
	{
		if (PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			func_492(1);
			return 0;
		}
	}
	return 1;
}

void func_360(int* iParam0, struct<3> Param1, var uParam2, var uParam3, int iParam4)//Position - 0x110DB
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	Var0 = { Param1 };
	HUD::GET_HUD_COLOUR(12, &iVar1, &iVar2, &iVar3, &uVar4);
	if (!BitTest(uLocal_101[__LIB_1__.func_403(iParam4)], __LIB_6__.func_950(iParam4)) && !BitTest(Local_130.f_3[__LIB_1__.func_403(iParam4)], __LIB_6__.func_950(iParam4)))
	{
		if (!HUD::DOES_BLIP_EXIST(*iParam0))
		{
			if (!__LIB_0__.func_78(Var0, 0f, 0f, 0f, 0) && !__LIB_0__.func_78(Var0, 0f, 0f, -2000f, 0))
			{
				*iParam0 = HUD::ADD_BLIP_FOR_COORD(Var0);
				HUD::SET_BLIP_SPRITE(*iParam0, 431);
				HUD::SET_BLIP_PRIORITY(*iParam0, 9);
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam0, "CPC_BLIP" /* GXT: Checkpoint */);
				func_367(*iParam0, 25, 1152319488, 1137180672);
				__LIB_6__.func_958(iParam0, 12);
				HUD::SHOW_HEIGHT_ON_BLIP(*iParam0, true);
			}
		}
		else if (HUD::IS_PAUSE_MENU_ACTIVE())
		{
			HUD::SET_BLIP_ALPHA(*iParam0, 255);
		}
		else
		{
			func_367(*iParam0, 25, 1152319488, 1137180672);
		}
		if (uLocal_97[iParam4])
		{
			if (!BitTest(iLocal_103[__LIB_1__.func_403(iParam4)], __LIB_6__.func_950(iParam4)))
			{
				iVar5 = 54;
				if (func_34())
				{
					iParam0->f_1 = GRAPHICS::CREATE_CHECKPOINT(iVar5, Var0 + Vector(4f, 0f, 0f), Var0, 10f, iVar1, iVar2, iVar3, iParam0->f_2, 0);
					GRAPHICS::SET_CHECKPOINT_CYLINDER_HEIGHT(iParam0->f_1, 7.5f, 7.5f, 100f);
				}
				else
				{
					iParam0->f_1 = GRAPHICS::CREATE_CHECKPOINT(iVar5, Var0 + Vector(2.8f, 0f, 0f), Var0, 5f, iVar1, iVar2, iVar3, iParam0->f_2, 0);
					GRAPHICS::SET_CHECKPOINT_CYLINDER_HEIGHT(iParam0->f_1, 5f, 5f, 100f);
				}
				MISC::SET_BIT(&(iLocal_103[__LIB_1__.func_403(iParam4)]), __LIB_6__.func_950(iParam4));
			}
			else
			{
				__LIB_29__.func_25(&(iParam0->f_1), &(iParam0->f_2));
			}
			func_363(&Param1);
		}
		else if (BitTest(iLocal_103[__LIB_1__.func_403(iParam4)], __LIB_6__.func_950(iParam4)))
		{
			if (__LIB_18__.func_264(&(iParam0->f_1), &(iParam0->f_2)))
			{
				GRAPHICS::DELETE_CHECKPOINT(iParam0->f_1);
				MISC::CLEAR_BIT(&(iLocal_103[__LIB_1__.func_403(iParam4)]), __LIB_6__.func_950(iParam4));
			}
		}
	}
	else if (BitTest(iLocal_103[__LIB_1__.func_403(iParam4)], __LIB_6__.func_950(iParam4)))
	{
		func_361(&(iParam0->f_1), &(iParam0->f_2), iParam0, iParam4);
	}
	else if (HUD::DOES_BLIP_EXIST(*iParam0))
	{
		HUD::REMOVE_BLIP(iParam0);
	}
}

void func_361(var uParam0, var uParam1, int* iParam2, int iParam3)//Position - 0x11318
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	if (*uParam0 != 0)
	{
		*uParam1 = (*uParam1 - 25);
		if (*uParam1 > 0)
		{
			HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &uVar3);
			GRAPHICS::SET_CHECKPOINT_RGBA(*uParam0, iVar0, iVar1, iVar2, *uParam1);
			GRAPHICS::SET_CHECKPOINT_RGBA2(*uParam0, iVar0, iVar1, iVar2, *uParam1);
		}
		else
		{
			if (HUD::DOES_BLIP_EXIST(*iParam2))
			{
				HUD::REMOVE_BLIP(iParam2);
			}
			GRAPHICS::DELETE_CHECKPOINT(*uParam0);
			*uParam0 = 0;
			MISC::CLEAR_BIT(&(iLocal_103[__LIB_1__.func_403(iParam3)]), __LIB_6__.func_950(iParam3));
		}
	}
}

void func_363(var uParam0)//Position - 0x113EC
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	iVar0 = 239;
	iVar1 = 250;
	iVar2 = 187;
	fVar3 = 5f;
	fVar5 = 64f;
	if (func_34())
	{
		fVar4 = 40f;
	}
	else
	{
		fVar4 = 15f;
	}
	if (!__LIB_0__.func_86(*uParam0))
	{
		*uParam0 = { *uParam0 + Vector(1.7f, 1.7f, 1.7f) };
		GRAPHICS::DRAW_LIGHT_WITH_RANGEEX(*uParam0, iVar0, iVar1, iVar2, fVar4, fVar3, fVar5);
	}
}

void func_367(int iParam0, int iParam1, float fParam2, float fParam3)//Position - 0x11731
{
	HUD::SET_BLIP_ALPHA(iParam0, __LIB_1__.func_575(iParam0, iParam1, fParam2, fParam3));
}

int func_428()//Position - 0x12CD0
{
	if (__LIB_1__.func_454(PLAYER::PLAYER_ID()))
	{
		if (!BitTest(uLocal_95, 2))
		{
			MISC::SET_BIT(&uLocal_95, 2);
			return 1;
		}
	}
	else if (BitTest(uLocal_95, 2))
	{
		MISC::CLEAR_BIT(&uLocal_95, 2);
		return 1;
	}
	return 0;
}

int func_429(struct<3> Param0, float fParam1, int iParam2)//Position - 0x12D0C
{
	int iVar0;
	iVar0 = -1;
	if (__LIB_0__.func_617() < 10)
	{
		iVar0 = __LIB_1__.func_467();
		__LIB_41__.func_218(Param0, fParam1, iVar0, iParam2);
	}
	return iVar0;
}

void func_444()//Position - 0x131D2
{
	if (!__LIB_1__.func_273())
	{
		return;
	}
	if (!MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == Global_1574757.f_9)
	{
		return;
	}
	func_155();
}

void func_446()//Position - 0x13308
{
	char* sVar0;
	if (!BitTest(uLocal_95, 5) && !HUD::IS_RADAR_HIDDEN())
	{
		if (Local_130.f_707)
		{
			sVar0 = "CPC_TITLEA" /* GXT: AIR CHECKPOINTS */;
		}
		else
		{
			sVar0 = "CPC_TITLE" /* GXT: CHECKPOINTS */;
		}
		func_44(63, sVar0, "CPC_START" /* GXT: Compete to collect the most checkpoints in the given time */, __LIB_0__.func_969(), -1, __LIB_0__.func_969(), 1, 0);
		HUD::FLASH_MINIMAP_DISPLAY();
		MISC::SET_BIT(&uLocal_95, 5);
	}
}

void func_466()//Position - 0x13911
{
	struct<3> Var0;
	var uVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	var uVar5;
	struct<3> Var6;
	bool bVar7;
	bool bVar8;
	int iVar9;
	struct<3> Var10;
	float fVar11;
	if (__LIB_1__.func_264(PLAYER::PLAYER_ID(), 1, 1))
	{
		if ((!__LIB_0__.func_706() && !func_484(PLAYER::PLAYER_ID(), 0, -1)) && !__LIB_1__.func_154(PLAYER::PLAYER_ID()))
		{
			fVar3 = 2.1474836E+09f;
			iVar4 = -1;
			Var6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			bVar7 = PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false);
			bVar8 = func_482();
			iVar2 = 0;
			while (iVar2 < 10)
			{
				iVar9 = Local_130.f_729[iVar2 /*2*/].f_1;
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iVar9) && VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(iVar9), false))
				{
					if (!bVar8)
					{
						if (bVar7 && PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false) == NETWORK::NET_TO_VEH(iVar9))
						{
							__LIB_25__.func_34(1);
						}
					}
					if (__LIB_1__.func_421(iVar2, &Var0, &uVar1))
					{
						Var10 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(iVar9), true) };
						if (SYSTEM::VDIST(Var10, Var0) <= 10f)
						{
							if (func_481(Var10))
							{
								MISC::SET_BIT(&uVar5, iVar2);
							}
							if (func_479(Var10, Var6))
							{
								if (!func_477(Var0, 100f))
								{
									fVar11 = SYSTEM::VDIST(Var10, Var6);
									if (fVar11 < fVar3)
									{
										fVar3 = fVar11;
										iVar4 = iVar2;
									}
								}
							}
						}
					}
				}
				iVar2++;
			}
			Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_7 = uVar5;
			if ((PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()) || (ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))) || Local_1497[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4 > 0)
			{
				if ((fVar3 < 2.1474836E+09f && iVar4 >= 0) && iVar4 < 10)
				{
					if (__LIB_1__.func_421(iVar4, &Var0, &uVar1))
					{
						iLocal_116 = 1;
						__LIB_31__.func_893(Var0, 0f, 60f, 1, 20f, 0, 0, 10f, 1, 1, 0, 1, -1082130432);
						__LIB_1__.func_477(Var0, 1, 0);
						__LIB_31__.func_900(10, 0, 0, 0, 0);
					}
				}
			}
			else
			{
				func_467();
			}
		}
		else
		{
			func_467();
		}
	}
}

void func_467()//Position - 0x13B19
{
	if (iLocal_116)
	{
		__LIB_1__.func_431();
		__LIB_7__.func_177();
		iLocal_116 = 0;
	}
}

bool func_477(struct<3> Param0, float fParam1)//Position - 0x13E07
{
	return __LIB_4__.func_678(Param0, fParam1, PLAYER::PLAYER_ID(), 0, 0);
}

int func_479(struct<3> Param0, struct<3> Param1)//Position - 0x13F3C
{
	struct<3> Var0;
	if (Local_130.f_8 == 3)
	{
		Var0 = { func_480(Local_130.f_712) };
		if (SYSTEM::VDIST(Param1, Var0) < 3500f)
		{
			if (SYSTEM::VDIST(Param0, Var0) > 3500f)
			{
				return 0;
			}
		}
	}
	return 1;
}

Vector3 func_480(int iParam0)//Position - 0x13F8A
{
	switch (iParam0)
	{
		case 0:
			return 1710.3667f, -464.7253f, 169.8001f;
		case 1:
			return -966.3996f, -973.0624f, 2.8632f;
		case 2:
			return -1347.0602f, 4123.0723f, 62.2841f;
		case 3:
			return 1941.7789f, 3847.1667f, 34.3796f;
		default:
	}
	return 0f, 0f, 0f;
}

int func_481(struct<3> Param0)//Position - 0x13FFC
{
	struct<3> Var0;
	if (Local_130.f_8 == 3)
	{
		Var0 = { func_480(Local_130.f_712) };
		if (SYSTEM::VDIST(Param0, Var0) > 2500f)
		{
			return 0;
		}
	}
	return 1;
}

int func_482()//Position - 0x14039
{
	if ((((((__LIB_1__.func_476(PLAYER::PLAYER_ID()) || __LIB_0__.func_674()) || __LIB_1__.func_459()) || __LIB_0__.func_702(PLAYER::PLAYER_ID(), 21)) || __LIB_0__.func_702(PLAYER::PLAYER_ID(), 25)) || __LIB_1__.func_417(PLAYER::PLAYER_ID())) || __LIB_2__.func_197(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_484(bool bParam0, bool bParam1, int iParam2)//Position - 0x140DA
{
	if (Global_1853348[bParam0 /*834*/].f_267.f_32 > 0)
	{
		if (bParam1)
		{
			if (BitTest(Global_1853348[bParam0 /*834*/].f_267.f_30, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (Global_2689235[bParam0 /*453*/].f_318.f_6 != -1)
	{
		if (iParam2 == -1 || __LIB_0__.func_170(Global_2689235[bParam0 /*453*/].f_318.f_6) != iParam2)
		{
			if (bParam1)
			{
				return __LIB_6__.func_987(bParam0) == bParam0;
			}
			return 1;
		}
	}
	return 0;
}

void func_490(bool bParam0)//Position - 0x1445B
{
	int iVar0;
	struct<3> Var1;
	if (func_34())
	{
		if (__LIB_1__.func_264(PLAYER::PLAYER_ID(), 1, 1))
		{
			iVar0 = 0;
			while (iVar0 < 10)
			{
				if (((!bParam0 && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_130.f_729[iVar0 /*2*/].f_1)) && VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(Local_130.f_729[iVar0 /*2*/].f_1), false)) && VEHICLE::IS_VEHICLE_SEAT_FREE(NETWORK::NET_TO_VEH(Local_130.f_729[iVar0 /*2*/].f_1), -1, false))
				{
					if (!HUD::DOES_BLIP_EXIST(iLocal_124[iVar0]))
					{
						iLocal_124[iVar0] = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_ENT(Local_130.f_729[iVar0 /*2*/].f_1));
						HUD::SET_BLIP_PRIORITY(iLocal_124[iVar0], 9);
						HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_124[iVar0], "AMCH_AC" /* GXT: Air Vehicle */);
						HUD::SET_BLIP_SPRITE(iLocal_124[iVar0], func_491(iVar0));
						__LIB_6__.func_958(&(iLocal_124[iVar0]), 9);
					}
					else
					{
						Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
						if (SYSTEM::VDIST(Var1, ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_130.f_729[iVar0 /*2*/].f_1), true)) <= 150f)
						{
							HUD::SHOW_HEIGHT_ON_BLIP(iLocal_124[iVar0], true);
						}
						else
						{
							HUD::SHOW_HEIGHT_ON_BLIP(iLocal_124[iVar0], false);
						}
					}
				}
				else if (HUD::DOES_BLIP_EXIST(iLocal_124[iVar0]))
				{
					HUD::REMOVE_BLIP(&(iLocal_124[iVar0]));
				}
				iVar0++;
			}
		}
	}
}

int func_491(int iParam0)//Position - 0x145AB
{
	switch (Local_130.f_729[iParam0 /*2*/])
	{
		case joaat("maverick"):
			return 64;
		case joaat("mammatus"):
			return 423;
		default:
	}
	return -1;
}

void func_492(bool bParam0)//Position - 0x145DA
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	if (!HUD::IS_RADAR_HIDDEN())
	{
		switch (bParam0)
		{
			case 0:
				if (!BitTest(uLocal_114, bParam0))
				{
					if (!HUD::IS_PAUSE_MENU_ACTIVE())
					{
						__LIB_0__.func_151("CPC_PASSIVE" /* GXT: Checkpoints may not be collected in passive mode. */, 30000);
						__LIB_2__.func_239(1);
						MISC::SET_BIT(&uLocal_114, bParam0);
					}
				}
				break;
			case 1:
				if (!BitTest(uLocal_114, bParam0))
				{
					if (!HUD::IS_PAUSE_MENU_ACTIVE())
					{
						__LIB_0__.func_151("CPC_NOAIR" /* GXT: These checkpoints cannot be collected in an air vehicle. */, 30000);
						__LIB_2__.func_239(1);
						MISC::SET_BIT(&uLocal_114, bParam0);
					}
				}
				break;
			case 2:
				if (!BitTest(uLocal_114, bParam0))
				{
					if ((!HUD::IS_PAUSE_MENU_ACTIVE() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && func_34())
					{
						__LIB_0__.func_151("AMCH_AIRAV" /* GXT: Air vehicles ~HUD_COLOUR_BLUE~~BLIP_HELICOPTER~ ~BLIP_PLANE_DROP~~s~ are available at several locations. These will self-destruct once the event is over. */, 30000);
						__LIB_2__.func_239(1);
						MISC::SET_BIT(&uLocal_114, bParam0);
					}
				}
				break;
			case 3:
				if (!BitTest(uLocal_114, bParam0))
				{
					if (!HUD::IS_PAUSE_MENU_ACTIVE())
					{
						__LIB_0__.func_151("AMCH_BLOW" /* GXT: This vehicle will now self-destruct. */, 30000);
						__LIB_2__.func_239(1);
						MISC::SET_BIT(&uLocal_114, bParam0);
					}
				}
				break;
			case 4:
				if (!BitTest(uLocal_114, bParam0))
				{
					if (!HUD::IS_PAUSE_MENU_ACTIVE() && !__LIB_1__.func_480(63))
					{
						if (Local_130.f_707)
						{
							sVar0 = "CPC_HELPA" /* GXT: Collect checkpoints ~HUD_COLOUR_YELLOW~~BLIP_TEMP_3~~s~ in the air for cash and RP. All participating players will receive a bonus if all checkpoints are collected. */;
						}
						else
						{
							sVar0 = "CPC_HELP" /* GXT: Collect checkpoints ~HUD_COLOUR_YELLOW~~BLIP_TEMP_3~~s~ for cash and RP. All participating players will receive a bonus if all checkpoints are collected. */;
						}
						__LIB_0__.func_151(sVar0, 30000);
						__LIB_2__.func_239(1);
						MISC::SET_BIT(&uLocal_114, bParam0);
					}
				}
				break;
			case 5:
				if (!BitTest(uLocal_114, bParam0))
				{
					if (((!HUD::IS_PAUSE_MENU_ACTIVE() && !__LIB_1__.func_480(63)) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && BitTest(uLocal_114, 4))
					{
						if (Local_130.f_707)
						{
							sVar1 = "CPC_HELPA2" /* GXT: Checkpoints may be collected in an air vehicle, by parachute, or while freefalling. */;
						}
						else
						{
							sVar1 = "CPC_HELP2" /* GXT: Checkpoints may be collected on foot or in a land or sea vehicle. */;
						}
						__LIB_0__.func_151(sVar1, 30000);
						__LIB_2__.func_239(1);
						MISC::SET_BIT(&uLocal_114, bParam0);
					}
				}
				break;
			case 6:
				if (!BitTest(uLocal_114, bParam0))
				{
					if (((!HUD::IS_PAUSE_MENU_ACTIVE() && !__LIB_1__.func_480(63)) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && BitTest(uLocal_114, 5))
					{
						if (Local_130.f_707)
						{
							sVar2 = "CPC_WARNA" /* GXT: Air Checkpoints will begin shortly in the ~a~. Compete to collect the most checkpoints in the given time. You will receive cash and RP for each checkpoint collected. */;
						}
						else
						{
							sVar2 = "CPC_WARN" /* GXT: Checkpoints will begin shortly in the ~a~. Compete to collect the most checkpoints in the given time. You will receive cash and RP for each checkpoint collected. */;
						}
						__LIB_2__.func_238(sVar2, func_162(), 30000);
						__LIB_2__.func_239(1);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Event_Start_Text", "GTAO_FM_Events_Soundset", false);
						MISC::SET_BIT(&uLocal_114, bParam0);
					}
				}
				break;
			case 7:
				if (!BitTest(uLocal_114, bParam0))
				{
					if (!HUD::IS_PAUSE_MENU_ACTIVE())
					{
						__LIB_0__.func_151("CPC_PASSIV1" /* GXT: Checkpoints cannot be collected if removed from an event by entering passive mode. */, 30000);
						__LIB_2__.func_239(1);
						MISC::SET_BIT(&uLocal_114, bParam0);
					}
				}
				break;
			}
	}
}

void func_496(int iParam0)//Position - 0x1488E
{
	Local_1497[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3 = iParam0;
}

int func_498(bool bParam0, bool bParam1, bool bParam2)//Position - 0x148D7
{
	if (__LIB_1__.func_298(PLAYER::PLAYER_ID(), 14))
	{
		return 0;
	}
	if (__LIB_0__.func_702(PLAYER::PLAYER_ID(), 21))
	{
		return 0;
	}
	if (__LIB_0__.func_702(PLAYER::PLAYER_ID(), 25))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
	{
		return 0;
	}
	if (bParam1)
	{
		if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
		{
			return 0;
		}
	}
	if (__LIB_7__.func_829(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (__LIB_1__.func_41())
	{
		return 0;
	}
	if (bParam2)
	{
		if (__LIB_1__.func_486(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (__LIB_0__.func_698())
	{
		return 0;
	}
	if (bParam0)
	{
		if (__LIB_2__.func_308(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	else if (func_514(PLAYER::PLAYER_ID()) == 3)
	{
		return 0;
	}
	if (__LIB_1__.func_483(PLAYER::PLAYER_ID()) != __LIB_0__.func_160() && __LIB_1__.func_483(PLAYER::PLAYER_ID()) == __LIB_2__.func_191(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (__LIB_7__.func_81(PLAYER::PLAYER_ID(), 3))
	{
		return 0;
	}
	if (__LIB_1__.func_482(__LIB_1__.func_437()) && !__LIB_1__.func_458(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (__LIB_0__.func_497())
	{
		return 0;
	}
	if (__LIB_0__.func_706())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	if (__LIB_6__.func_869(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!__LIB_4__.func_715())
	{
		return 0;
	}
	if (__LIB_0__.func_702(PLAYER::PLAYER_ID(), 0) || __LIB_0__.func_702(PLAYER::PLAYER_ID(), 3))
	{
		return 0;
	}
	if ((__LIB_0__.func_702(PLAYER::PLAYER_ID(), 12) || __LIB_0__.func_702(PLAYER::PLAYER_ID(), 14)) || __LIB_0__.func_702(PLAYER::PLAYER_ID(), 13))
	{
		return 0;
	}
	if (__LIB_1__.func_155(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (!__LIB_0__.func_93() && !Global_2787784)
		{
			return 0;
		}
	}
	if (__LIB_1__.func_296(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (__LIB_0__.func_527())
	{
		return 0;
	}
	if (Global_1931426)
	{
		return 0;
	}
	if (__LIB_1__.func_466(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (__LIB_0__.func_810())
	{
		return 0;
	}
	if (__LIB_2__.func_246(PLAYER::PLAYER_ID()) && Global_1852994.f_172)
	{
		return 0;
	}
	if (__LIB_0__.func_618())
	{
		return 0;
	}
	if (__LIB_1__.func_288())
	{
		return 0;
	}
	if (Global_2814118)
	{
		return 0;
	}
	if (Global_1963980)
	{
		return 0;
	}
	if (__LIB_1__.func_279(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!__LIB_1__.func_476(PLAYER::PLAYER_ID()))
	{
		if (__LIB_1__.func_385(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	return 1;
}

int func_514(bool bParam0)//Position - 0x14F67
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	iVar0 = 2;
	bVar1 = ((__LIB_2__.func_7(bParam0) && !__LIB_1__.func_417(bParam0)) && !BitTest(Global_1892703[bParam0 /*599*/].f_1, 8));
	bVar2 = __LIB_2__.func_308(bParam0);
	uVar3 = __LIB_0__.func_674();
	uVar4 = func_515();
	if ((bVar1 && (__LIB_1__.func_476(bParam0) || __LIB_1__.func_471(bParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !__LIB_1__.func_570(bParam0)) && !__LIB_1__.func_575(bParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2815059.f_5195.f_220 != iVar0)
	{
		Global_2815059.f_5195.f_220 = iVar0;
	}
	return iVar0;
}

int func_515()//Position - 0x15022
{
	if ((__LIB_1__.func_424(PLAYER::PLAYER_ID(), 21) || __LIB_1__.func_424(PLAYER::PLAYER_ID(), 22)) || __LIB_7__.func_186())
	{
		return 1;
	}
	if (__LIB_6__.func_994())
	{
		__LIB_1__.func_484(22);
		return 1;
	}
	return 0;
}

void func_527()//Position - 0x15251
{
	if (Local_1497[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4 != 0)
	{
		Local_1497[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4 = 0;
	}
}

void func_530()//Position - 0x1531F
{
	__LIB_1__.func_582(&(Local_151.f_534), &Local_151, 27, &(Local_151.f_1), &(Local_151.f_117), -1, 0, 0);
}

void func_544(bool bParam0, char* sParam1, int* iParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)//Position - 0x15CCD
{
	int iVar0;
	char* sVar1;
	if (iParam4 >= __LIB_1__.func_498() && iParam4 < __LIB_1__.func_497())
	{
		iParam4 = (iParam4 % 16);
		iVar0 = iParam4 + 1;
		if (Global_1836359)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1836580 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam2, sVar1))
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
			if (BitTest(uParam3->f_33, 8) || uParam3->f_108 == 6)
			{
				__LIB_0__.func_514("");
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam10);
			}
			__LIB_0__.func_514(sParam1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam11);
			if (uParam3->f_108 == 6)
			{
				__LIB_0__.func_514("");
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(65);
			}
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
			__LIB_0__.func_514("");
			if (uParam3->f_108 == 6)
			{
				__LIB_0__.func_514("");
			}
			else
			{
				__LIB_0__.func_514(&sParam5);
			}
			func_549(uParam3, bParam0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam9);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam9);
			if (__LIB_1__.func_581(uParam3))
			{
				__LIB_0__.func_478("DPAD_FRIEND" /* GXT: F */);
			}
			else if (__LIB_1__.func_496(uParam3))
			{
				__LIB_0__.func_478("DPAD_FRIEND" /* GXT: F */);
			}
			else if (__LIB_1__.func_495(uParam3))
			{
				__LIB_0__.func_478("DPAD_CREW" /* GXT: C */);
			}
			else
			{
				__LIB_0__.func_478("");
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

void func_549(var uParam0, bool bParam1)//Position - 0x15E43
{
	if (func_557(bParam1))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(121);
	}
	else if (func_553(bParam1))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(122);
	}
	else if (((BitTest(Global_4718592.f_27, 15) && bParam1 > -1) && bParam1 < 32) && BitTest(Global_2689235[bParam1 /*453*/].f_425, 0))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(123);
	}
	else
	{
		if (__LIB_16__.func_405())
		{
			uParam0->f_36 = 0;
		}
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(uParam0->f_36);
	}
}

int func_553(bool bParam0)//Position - 0x15F41
{
	if ((__LIB_1__.func_264(bParam0, 0, 1) && func_554()) && __LIB_18__.func_367(bParam0, 1))
	{
		return 1;
	}
	return 0;
}

int func_554()//Position - 0x15F6E
{
	if (__LIB_2__.func_7(PLAYER::PLAYER_ID()) || __LIB_7__.func_102())
	{
		if (!__LIB_1__.func_582(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	return 1;
}

int func_557(bool bParam0)//Position - 0x16007
{
	if (__LIB_16__.func_405())
	{
		if (__LIB_1__.func_264(bParam0, 0, 1))
		{
			return __LIB_2__.func_192(bParam0);
		}
	}
	if ((__LIB_1__.func_264(bParam0, 0, 1) && func_554()) && __LIB_1__.func_436(bParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_561(bool bParam0, int* iParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)//Position - 0x16091
{
	int iVar0;
	char* sVar1;
	if (iParam3 >= __LIB_1__.func_498() && iParam3 < __LIB_1__.func_497())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1836359)
		{
			iVar0 += 16;
		}
		if (bParam19)
		{
			iVar0 = iParam18;
			if (iVar0 == -2)
			{
				iParam10 = -1;
			}
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1836580 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam1))
		{
			if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam1, sVar1))
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
				if (BitTest(uParam2->f_33, 8) || uParam2->f_108 == 6)
				{
					__LIB_0__.func_514("");
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam9);
				}
				if (uParam2->f_108 == 6 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					__LIB_0__.func_478(sParam16);
				}
				else
				{
					__LIB_0__.func_514(&(uParam2->f_1));
				}
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam11);
				if (uParam2->f_108 == 6)
				{
					__LIB_0__.func_514("");
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(65);
				}
				if (iParam12 == 1)
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
				}
				if (func_585())
				{
					__LIB_0__.func_514("");
				}
				else if (uParam2->f_108 == 6 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_ONE_INT" /* GXT: ~a~ ~1~ */);
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam17);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 5 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_ONE_INT" /* GXT: ~a~ ~1~ */);
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam17);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 7 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_TWO_INT" /* GXT: ~a~ ~a~ ~1~ */);
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam17);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 8 && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_104)))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_UNIT" /* GXT: ~1~~a~ */);
					if (fParam13 != -1f)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(fParam13, 1);
					}
					if (iParam10 != -1)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(iParam10);
					}
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(uParam2->f_104));
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 9)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_CASH" /* GXT: $~a~ */);
					HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, true);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 10)
				{
					if (iParam10 == 0)
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_CASH" /* GXT: $~a~ */);
						HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, true);
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_NG_CASH" /* GXT: -$~a~ */);
						HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, true);
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
				}
				else if (iParam15 > -1)
				{
					if (iParam15 == 0 && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_104)))
					{
						__LIB_0__.func_478(&(uParam2->f_104));
					}
					else
					{
						__LIB_0__.func_514("");
					}
				}
				else if (iParam14 != -1)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam14, 6);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (fParam13 != -1f)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
					HUD::ADD_TEXT_COMPONENT_FLOAT(fParam13, 1);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (iParam10 != -1)
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam10);
				}
				else
				{
					__LIB_0__.func_514("");
				}
				if (uParam2->f_108 == 6)
				{
					__LIB_0__.func_514("");
				}
				else
				{
					__LIB_0__.func_514(&sParam4);
				}
				func_549(uParam2, bParam0);
				if (iParam12 == 1 || MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
				{
					__LIB_0__.func_514("");
					__LIB_0__.func_514("");
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam8);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam8);
				}
				if (__LIB_1__.func_581(uParam2))
				{
					__LIB_0__.func_478("DPAD_FRIEND" /* GXT: F */);
				}
				else if (__LIB_1__.func_496(uParam2))
				{
					__LIB_0__.func_478("DPAD_FRIEND" /* GXT: F */);
				}
				else if (__LIB_1__.func_495(uParam2))
				{
					__LIB_0__.func_478("DPAD_CREW" /* GXT: C */);
				}
				else
				{
					__LIB_0__.func_478("");
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
	}
}

int func_570(bool bParam0)//Position - 0x16752
{
	int iVar0;
	iVar0 = __LIB_6__.func_997(bParam0);
	if (iVar0 == -1)
	{
		func_571(bParam0, 1);
		return 0;
	}
	Global_1660783[iVar0 /*5*/].f_4 = 1;
	return Global_1660783[iVar0 /*5*/].f_2;
}

void func_571(bool bParam0, bool bParam1)//Position - 0x16788
{
	if (!__LIB_1__.func_264(bParam0, 0, 1))
	{
		return;
	}
	if (__LIB_6__.func_997(bParam0) != -1)
	{
		return;
	}
	if (Global_1660946)
	{
		if (bParam0 == Global_1660946.f_1)
		{
			return;
		}
	}
	if (__LIB_1__.func_504(bParam0))
	{
		return;
	}
	if (Global_1660984 >= 32)
	{
		return;
	}
	Global_1660951[Global_1660984] = bParam0;
	Global_1660984++;
	if (bParam1)
	{
	}
}

int func_585()//Position - 0x16B82
{
	switch (__LIB_1__.func_911(PLAYER::PLAYER_ID()))
	{
		case 179:
		case 180:
		case 182:
		case 183:
		case 184:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 195:
		case 197:
		case 198:
		case 200:
		case 201:
		case 202:
		case 203:
		case 204:
		case 206:
		case 207:
		case 208:
		case 209:
		case 211:
			return 1;
		default:
	}
	switch (__LIB_1__.func_182(PLAYER::PLAYER_ID()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (__LIB_2__.func_308(PLAYER::PLAYER_ID()))
	{
		switch (__LIB_1__.func_911(PLAYER::PLAYER_ID()))
		{
			case 148:
			case 151:
			case 152:
			case 153:
			case 157:
			case 159:
			case 162:
			case 164:
			case 142:
				return 1;
				break;
			}
	}
	if (__LIB_1__.func_582(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_650(int iParam0)//Position - 0x18810
{
	if (iParam0 == 28)
	{
		if ((__LIB_2__.func_7(PLAYER::PLAYER_ID()) && !__LIB_2__.func_308(PLAYER::PLAYER_ID())) && !__LIB_1__.func_582(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	if (iParam0 == 27)
	{
		if (__LIB_1__.func_425(PLAYER::PLAYER_ID(), 0) && __LIB_2__.func_308(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
		if (func_514(PLAYER::PLAYER_ID()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

void func_653()//Position - 0x188BD
{
	bool bVar0;
	if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_99)))
	{
		bVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_99));
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bVar0))
		{
			__LIB_7__.func_106(bVar0, 2);
		}
	}
	iLocal_99++;
	if (iLocal_99 >= NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		iLocal_99 = 0;
	}
}

void func_656(int iParam0, int iParam1)//Position - 0x189E1
{
	Local_1497[iParam0 /*5*/] = iParam1;
}

int func_657()//Position - 0x189F2
{
	struct<71> Var0;
	int iVar1;
	int iVar2;
	Var0 = 4;
	Var0.f_5 = 32;
	Var0.f_38 = 32;
	Global_2815059.f_5043 = { Var0 };
	iVar1 = 0;
	while (iVar1 < __LIB_1__.func_527())
	{
		Global_2815059.f_5043.f_38[iVar1] = -1;
		iVar1++;
	}
	iVar2 = 0;
	while (iVar2 < 32)
	{
		Local_151.f_534[iVar2 /*42*/].f_1 = __LIB_0__.func_160();
		iVar2++;
	}
	return 1;
}

int func_660(int iParam0)//Position - 0x18A8B
{
	return Local_1497[iParam0 /*5*/];
}

void func_699(int* iParam0)//Position - 0x19CA2
{
	bool bVar0;
	bVar0 = false;
	while (bVar0 < 32)
	{
		if (BitTest(*iParam0, bVar0))
		{
			MISC::CLEAR_BIT(iParam0, bVar0);
		}
		else
		{
			MISC::SET_BIT(iParam0, bVar0);
		}
		bVar0++;
	}
}

void func_700(int iParam0, bool bParam1, bool bParam2)//Position - 0x19CD9
{
	var uVar0;
	int iVar1;
	if (iParam0 == 0)
	{
	}
	if (PLAYER::PLAYER_ID() != -1)
	{
		if (BitTest(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1, 13))
		{
			MISC::CLEAR_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1), 13);
		}
		if (BitTest(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1, 14))
		{
			MISC::CLEAR_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1), 14);
		}
	}
	if (BitTest(Global_1836844.f_1, 21))
	{
		MISC::CLEAR_BIT(&(Global_1836844.f_1), 21);
	}
	__LIB_2__.func_230();
	AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", false);
	AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", false);
	if (bParam1)
	{
		uVar0 = __LIB_1__.func_587(__LIB_1__.func_182(PLAYER::PLAYER_ID()));
		__LIB_1__.func_103(__LIB_1__.func_475(iParam0), 0);
	}
	else
	{
		if ((bParam2 && PLAYER::PLAYER_ID() != -1) && __LIB_0__.func_846(PLAYER::PLAYER_ID()) >= 12)
		{
			__LIB_2__.func_281(2549, -1);
			iVar1 = __LIB_1__.func_556(2549, -1, 0);
			if (iVar1 == 2)
			{
				MISC::SET_BIT(&Global_1836870, 0);
			}
			else if (iVar1 == 4)
			{
				MISC::SET_BIT(&Global_1836870, 1);
			}
			else if (iVar1 == 6)
			{
				MISC::SET_BIT(&Global_1836870, 2);
			}
			else if (iVar1 == 8)
			{
				MISC::SET_BIT(&Global_1836870, 3);
			}
			else if (iVar1 == 10)
			{
				MISC::SET_BIT(&Global_1836870, 4);
			}
			else if (iVar1 == 12)
			{
				MISC::SET_BIT(&Global_1836870, 5);
			}
		}
		__LIB_1__.func_547();
		__LIB_1__.func_546();
		__LIB_1__.func_545();
		if ((!__LIB_1__.func_570(PLAYER::PLAYER_ID()) && !__LIB_1__.func_575(PLAYER::PLAYER_ID())) && !__LIB_1__.func_224())
		{
			func_708();
		}
		__LIB_1__.func_540();
		if (!BitTest(Global_1943920.f_3, 0) && !BitTest(Global_1943920.f_3, 1))
		{
			__LIB_7__.func_2();
		}
		__LIB_1__.func_539();
		MISC::CLEAR_BIT(&(Global_2815059.f_1811), 2);
		__LIB_1__.func_433();
		__LIB_1__.func_430();
	}
	if (HUD::PAUSE_MENU_IS_CONTEXT_ACTIVE(joaat("DisableSpectateScript")))
	{
		HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(joaat("DisableSpectateScript"));
	}
	if (!bParam1 || uVar0)
	{
		if (((PLAYER::PLAYER_ID() != -1 && !__LIB_0__.func_702(PLAYER::PLAYER_ID(), 21)) && !__LIB_0__.func_702(PLAYER::PLAYER_ID(), 25)) && !__LIB_1__.func_425(PLAYER::PLAYER_ID(), 0))
		{
			__LIB_6__.func_990(0);
			__LIB_6__.func_960(0);
			if (!bParam1)
			{
				__LIB_1__.func_538();
			}
		}
	}
	if (bParam2 && !bParam1)
	{
		if (__LIB_2__.func_300(26, -1))
		{
			Global_2727723 = -1;
			__LIB_2__.func_221(26, -1);
		}
	}
	if (!__LIB_7__.func_3())
	{
		Global_2787396 = 1;
	}
}

void func_708()//Position - 0x1A104
{
	MISC::COPY_SCRIPT_STRUCT(&(Global_2667225.f_24), &Global_2671509, 2);
	MISC::COPY_SCRIPT_STRUCT(&(Global_2667225.f_26), &Global_2671511, 19);
	__LIB_2__.func_222();
	__LIB_1__.func_587(1, 1, 0);
	__LIB_7__.func_4();
}

void func_736(int iParam0)//Position - 0x1A82D
{
	__LIB_1__.func_539();
	__LIB_1__.func_551();
	__LIB_1__.func_545();
	Global_1836844.f_4 = iParam0;
	Global_1836844.f_5 = iParam0;
	__LIB_18__.func_267(iParam0, -1);
	__LIB_0__.func_495(&(Global_1836844.f_18), 0, 0);
	Global_2815059.f_4657 = 0;
	Global_2726607[0] = __LIB_0__.func_160();
	Global_2726607[1] = __LIB_0__.func_160();
	Global_2726607[2] = __LIB_0__.func_160();
	Global_2726607[3] = __LIB_0__.func_160();
	Global_2726607[4] = __LIB_0__.func_160();
	__LIB_1__.func_430();
	if (!__LIB_1__.func_482(__LIB_1__.func_437()))
	{
		__LIB_6__.func_952();
	}
	if (__LIB_0__.func_674() && !__LIB_1__.func_459())
	{
		MISC::SET_BIT(&(Global_1836844.f_1), 16);
	}
	else
	{
		MISC::SET_BIT(&(Global_1836844.f_1), 17);
	}
}

