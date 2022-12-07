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
	float fLocal_109 = 0f;
	float fLocal_110 = 0f;
	float fLocal_111 = 0f;
	float fLocal_112 = 0f;
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
	int iLocal_123 = 0;
	var uLocal_124 = 0;
	float fLocal_125 = 0f;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	int iLocal_131 = 0;
	var uLocal_132 = 0;
	struct<489> Local_133 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 7200000, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, -1, -1, 0, -1, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 5000, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, -1, -1, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<16> Local_134 = { 0, 0, 1065353216, 1065353216, 1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = -1;
	var uLocal_138 = -1;
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
	var uLocal_152[2] = { 0, 0 };
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	int iLocal_156 = 0;
	struct<2> Local_157[4];
	int* iLocal_158 = NULL;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 8;
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
	int iLocal_182 = 0;
	struct<984> Local_183 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, -1, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 10, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, -1, -1, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, -1, 4, 0, 0, 0, 0, -1082130432, 0, 15, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1 } ;
	struct<29> Local_184[8];
	int iLocal_185 = 0;
	int iLocal_186 = 0;
	bool bLocal_187 = 0;
	var uLocal_188 = 16;
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
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
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
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
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
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
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
	var uLocal_300 = 0;
	var uLocal_301 = 0;
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
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
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
	var uLocal_342 = 0;
	var uLocal_343 = 0;
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
	bool bLocal_356 = 0;
	int iLocal_357 = 0;
	struct<21> Local_358 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	fLocal_109 = 3f;
	fLocal_110 = 0f;
	fLocal_111 = 2f;
	fLocal_112 = 100f;
	iLocal_123 = -1;
	fLocal_125 = 0.5f;
	iLocal_185 = -1;
	iLocal_186 = -1;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (__LIB_1__::func_264(PLAYER::PLAYER_ID(), 0, 1))
		{
			if (!func_2172(ScriptParam_358))
			{
				func_2170(0, 1);
				func_2023(0);
			}
		}
		else
		{
			func_2023(0);
		}
	}
	else
	{
		func_2170(0, 1);
		func_2023(0);
	}
	bLocal_356 = __LIB_4__::func_728();
	while (true)
	{
		__LIB_0__::func_671();
		if (func_2011(1))
		{
			func_2170(0, 1);
			func_2023(0);
		}
		if (__LIB_6__::func_949())
		{
			func_2170(0, 1);
			func_2023(1);
		}
		func_2002();
		func_1989();
		switch (func_1988(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if (__LIB_24__::func_858() == 1)
				{
					if (__LIB_4__::func_728() && !__LIB_0__::func_114())
					{
						if (func_1985())
						{
							if (Local_184[NETWORK::PARTICIPANT_ID_TO_INT() /*29*/].f_25 == -1)
							{
								Local_184[NETWORK::PARTICIPANT_ID_TO_INT() /*29*/].f_25 = func_1984();
							}
							func_1968(Local_183.f_0, func_1984(), 0, 1, 1, &iLocal_182);
							if (iLocal_182 == 2 || iLocal_182 == 3)
							{
								if (iLocal_182 == 2)
								{
									Local_184[NETWORK::PARTICIPANT_ID_TO_INT() /*29*/].f_26 = __LIB_4__::func_473(PLAYER::PLAYER_ID(), Local_183.f_0);
								}
								else if (iLocal_182 == 3)
								{
									Local_184[NETWORK::PARTICIPANT_ID_TO_INT() /*29*/].f_25 = 0;
									Local_184[NETWORK::PARTICIPANT_ID_TO_INT() /*29*/].f_26 = __LIB_4__::func_473(PLAYER::PLAYER_ID(), Local_183.f_0);
								}
								if (func_1959())
								{
									func_1958(NETWORK::PARTICIPANT_ID_TO_INT(), 1);
									func_1957();
								}
							}
						}
						else
						{
							Local_184[NETWORK::PARTICIPANT_ID_TO_INT() /*29*/].f_26 = __LIB_4__::func_473(PLAYER::PLAYER_ID(), Local_183.f_0);
							Local_184[NETWORK::PARTICIPANT_ID_TO_INT() /*29*/].f_25 = 0;
							if (func_1959())
							{
								func_1958(NETWORK::PARTICIPANT_ID_TO_INT(), 1);
								func_1957();
							}
						}
					}
					else if (func_1959())
					{
						func_1958(NETWORK::PARTICIPANT_ID_TO_INT(), 1);
						func_1957();
					}
				}
				else if (__LIB_24__::func_858() == 3)
				{
					func_1958(NETWORK::PARTICIPANT_ID_TO_INT(), 3);
				}
				break;
			case 1:
				if (__LIB_24__::func_858() == 1)
				{
					func_621();
				}
				else if (__LIB_24__::func_858() == 3)
				{
					func_1958(NETWORK::PARTICIPANT_ID_TO_INT(), 3);
				}
				break;
			case 3:
				func_2023(0);
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			if (__LIB_10__::func_923())
			{
				func_619(3);
			}
			switch (__LIB_24__::func_858())
			{
				case 0:
					if (func_556())
					{
						func_619(1);
					}
					break;
				case 1:
					func_84();
					func_1();
					break;
				case 3:
					break;
				}
		}
	}
}

void func_1()//Position - 0x2E3
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3[4];
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7[4];
	bool bVar8;
	bool bVar9;
	bool bVar10;
	int iVar11;
	bool bVar12;
	int iVar13;
	bool bVar14;
	bool bVar15;
	int iVar16;
	int iVar17;
	bVar6 = true;
	bVar8 = true;
	bVar9 = false;
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
		{
			iVar4 = iVar0;
			bVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar4);
			iVar5 = PLAYER::GET_PLAYER_PED(bVar2);
			iVar1 = bVar2;
			func_75(&(Local_183.f_154), iVar0);
			MISC::SET_BIT(&uLocal_154, iVar0);
			if (__LIB_1__::func_264(bVar2, 0, 1))
			{
				iVar11++;
				if (Local_184[iVar0 /*29*/] != 3)
				{
					bVar8 = false;
				}
				MISC::SET_BIT(&uLocal_153, iVar1);
				if (ENTITY::IS_ENTITY_DEAD(iVar5, false))
				{
					MISC::SET_BIT(&uLocal_155, iVar1);
				}
				if (func_74())
				{
					bVar12 = false;
					while (bVar12 < func_72())
					{
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_64[bVar12]))
						{
							if (!BitTest(Local_183.f_166, bVar12))
							{
								if (BitTest(Local_184[iVar0 /*29*/].f_3, bVar12))
								{
									func_71(1);
									MISC::SET_BIT(&(Local_183.f_166), bVar12);
								}
							}
						}
						bVar12++;
					}
				}
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_59[0]))
				{
					if (func_70(0, PLAYER::GET_PLAYER_PED(bVar2)))
					{
						bVar3[0] = bVar2;
						iVar7[0] = 1;
					}
					func_69(iVar0, 0, 0);
					func_64(bVar2, 0);
				}
				else
				{
					func_69(iVar0, 0, 1);
				}
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_59[1]))
				{
					if (func_70(1, PLAYER::GET_PLAYER_PED(bVar2)))
					{
						bVar3[1] = bVar2;
						iVar7[1] = 1;
					}
					func_69(iVar0, 1, 0);
					func_64(bVar2, 1);
				}
				else
				{
					func_69(iVar0, 1, 1);
				}
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_59[2]))
				{
					if (func_70(2, PLAYER::GET_PLAYER_PED(bVar2)))
					{
						bVar3[2] = bVar2;
						iVar7[2] = 1;
					}
					func_69(iVar0, 2, 0);
					func_64(bVar2, 2);
				}
				else
				{
					func_69(iVar0, 2, 1);
				}
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_59[3]))
				{
					if (func_70(3, PLAYER::GET_PLAYER_PED(bVar2)))
					{
						bVar3[3] = bVar2;
						iVar7[3] = 1;
					}
					func_69(iVar0, 3, 0);
					func_64(bVar2, 3);
				}
				else
				{
					func_69(iVar0, 3, 1);
				}
				if (!bVar9)
				{
					if (func_63(iVar4, 14))
					{
						if (!BitTest(Local_183.f_961, 0))
						{
							if (func_62(10) || !func_61())
							{
								bVar9 = true;
							}
							else
							{
								MISC::SET_BIT(&(Local_183.f_961), 0);
							}
						}
					}
					else if (func_63(iVar4, 15))
					{
						if (!BitTest(Local_183.f_961, 1))
						{
							if (func_62(11) || !func_61())
							{
								bVar9 = true;
							}
							else
							{
								MISC::SET_BIT(&(Local_183.f_961), 1);
							}
						}
					}
					else if (func_63(iVar4, 16))
					{
						if (!BitTest(Local_183.f_961, 2))
						{
							if (func_62(12) || !func_61())
							{
								bVar9 = true;
							}
							else
							{
								MISC::SET_BIT(&(Local_183.f_961), 2);
							}
						}
					}
					else if (func_63(iVar4, 17))
					{
						if (!BitTest(Local_183.f_961, 3))
						{
							if (func_62(13) || !func_61())
							{
								bVar9 = true;
							}
							else
							{
								MISC::SET_BIT(&(Local_183.f_961), 3);
							}
						}
					}
				}
				if (!func_63(iVar4, 0))
				{
					bVar6 = false;
				}
				if (func_63(iVar4, 20))
				{
					bVar10 = true;
				}
				if (!func_60(0))
				{
					if (func_63(iVar4, 22) && Local_184[iVar0 /*29*/].f_15 != __LIB_0__::func_160())
					{
						func_51(Local_184[iVar0 /*29*/].f_15);
						func_50(0);
					}
				}
				if (!func_60(1))
				{
					if (func_63(iVar4, 23) && Local_184[iVar0 /*29*/].f_15 != __LIB_0__::func_160())
					{
						func_51(Local_184[iVar0 /*29*/].f_15);
						func_50(1);
					}
				}
				if (!func_60(2))
				{
					if (func_63(iVar4, 24) && Local_184[iVar0 /*29*/].f_15 != __LIB_0__::func_160())
					{
						func_51(Local_184[iVar0 /*29*/].f_15);
						func_50(2);
					}
				}
				if (!func_60(3))
				{
					if (func_63(iVar4, 25) && Local_184[iVar0 /*29*/].f_15 != __LIB_0__::func_160())
					{
						func_51(Local_184[iVar0 /*29*/].f_15);
						func_50(3);
					}
				}
				if (!func_60(4))
				{
					if (func_63(iVar4, 26) && Local_184[iVar0 /*29*/].f_15 != __LIB_0__::func_160())
					{
						func_51(Local_184[iVar0 /*29*/].f_15);
						func_50(4);
					}
				}
				if (!func_60(5))
				{
					if (func_63(iVar4, 27) && Local_184[iVar0 /*29*/].f_15 != __LIB_0__::func_160())
					{
						func_51(Local_184[iVar0 /*29*/].f_15);
						func_50(5);
					}
				}
				if (!func_60(6))
				{
					if (func_63(iVar4, 28) && Local_184[iVar0 /*29*/].f_15 != __LIB_0__::func_160())
					{
						func_51(Local_184[iVar0 /*29*/].f_15);
						func_50(6);
					}
				}
				if (!func_60(7))
				{
					if (func_63(iVar4, 29) && Local_184[iVar0 /*29*/].f_15 != __LIB_0__::func_160())
					{
						func_51(Local_184[iVar0 /*29*/].f_15);
						func_50(7);
					}
				}
				if (!func_49(0))
				{
					if (func_63(iVar4, 8))
					{
						func_48(21);
						func_47(0);
						func_38(4, 0);
					}
				}
				if (!func_49(1))
				{
					if (func_63(iVar4, 9))
					{
						func_48(22);
						func_47(1);
						func_38(4, 1);
					}
				}
				if (!func_49(2))
				{
					if (func_63(iVar4, 10))
					{
						func_48(23);
						func_47(2);
						func_38(4, 2);
					}
				}
				if (!func_62(9))
				{
					if (func_63(iVar4, 4))
					{
						func_48(9);
					}
				}
				if (!func_62(20))
				{
					if (func_63(iVar4, 7))
					{
						iVar13 = func_30();
						if (iVar13 > -1)
						{
							Local_183.f_966 = iVar13;
							func_48(20);
						}
					}
				}
				if (!func_62(24))
				{
					if (func_63(iVar4, 12))
					{
						func_48(24);
					}
				}
				if (!func_29(0))
				{
					if (func_63(iVar4, 13))
					{
						func_28(0);
					}
				}
				if (!func_29(6))
				{
					if (func_63(iVar4, 18))
					{
						func_28(6);
					}
				}
				if (!func_62(30))
				{
					if (func_63(iVar4, 2))
					{
						func_48(30);
						if (func_27())
						{
							func_48(6);
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (__LIB_24__::func_858() == 1)
	{
		if (iLocal_357 != iVar11 && __LIB_2__::func_47(&(Local_183.f_10), 15000, 0))
		{
			iLocal_357 = iVar11;
			if (func_25())
			{
				bVar15 = false;
				while (bVar15 < 32)
				{
					iVar16 = PLAYER::INT_TO_PLAYERINDEX(bVar15);
					if ((iVar16 == __LIB_0__::func_160() || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar16)) || !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar16))
					{
						bVar14 = false;
						while (bVar14 < func_24())
						{
							if (Local_183.f_101[bVar14] == bVar15)
							{
								func_71(func_20(bVar14));
								Local_183.f_101[bVar14] = -1;
							}
							bVar14++;
						}
					}
					bVar15++;
				}
			}
			else
			{
				func_19();
				bVar15 = false;
				while (bVar15 < 32)
				{
					iVar17 = PLAYER::INT_TO_PLAYERINDEX(bVar15);
					bVar14 = false;
					while (bVar14 < func_14())
					{
						if (ENTITY::DOES_ENTITY_EXIST(func_13(bVar14)) && !func_12(bVar14))
						{
							if (func_11(bVar14, bVar15))
							{
								if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar17) || !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar17))
								{
									func_71(func_20(bVar14));
									func_10(bVar14);
									func_9(0, bVar2, bVar14);
									__LIB_24__::func_858(bVar14, Local_183.f_175[bVar14]);
									func_7(bVar14);
								}
							}
						}
						bVar14++;
					}
					bVar15++;
				}
			}
		}
	}
	if (!func_29(27))
	{
		if (bVar10)
		{
			func_28(27);
		}
	}
	if (bVar3[0] != Local_183.f_54[0])
	{
		Local_183.f_54[0] = bVar3[0];
	}
	if (bVar3[1] != Local_183.f_54[1])
	{
		Local_183.f_54[1] = bVar3[1];
	}
	if (bVar3[2] != Local_183.f_54[2])
	{
		Local_183.f_54[2] = bVar3[2];
	}
	if (bVar3[3] != Local_183.f_54[3])
	{
		Local_183.f_54[3] = bVar3[3];
	}
	if (iVar7[0])
	{
		if (!func_62(10))
		{
			func_3(1);
			func_48(10);
		}
		if (!func_62(14))
		{
			func_48(14);
		}
	}
	else if (func_62(14))
	{
		func_2(14);
	}
	if (iVar7[1])
	{
		if (!func_62(11))
		{
			func_3(1);
			func_48(11);
		}
		if (!func_62(15))
		{
			func_48(15);
		}
	}
	else if (func_62(15))
	{
		func_2(15);
	}
	if (iVar7[2])
	{
		if (!func_62(12))
		{
			func_3(1);
			func_48(12);
		}
		if (!func_62(16))
		{
			func_48(16);
		}
	}
	else if (func_62(16))
	{
		func_2(16);
	}
	if (iVar7[3])
	{
		if (!func_62(13))
		{
			func_3(1);
			func_48(13);
		}
		if (!func_62(17))
		{
			func_48(17);
		}
	}
	else if (func_62(17))
	{
		func_2(17);
	}
	if (bVar8)
	{
		if (!func_62(18))
		{
			func_48(18);
		}
	}
	if (bVar6)
	{
		if (!func_62(0))
		{
			func_48(0);
		}
	}
	else if (func_62(0))
	{
		func_2(0);
	}
}

void func_2(int iParam0)//Position - 0xBFD
{
	MISC::CLEAR_BIT(&(Local_183.f_6), iParam0);
}

void func_3(int iParam0)//Position - 0xC10
{
	if (func_25() || iParam0)
	{
		if (func_6())
		{
			if (!__LIB_0__::func_649(&(Local_183.f_959)))
			{
				__LIB_0__::func_580(&(Local_183.f_959), 0, 0);
			}
		}
		else
		{
			func_28(3);
		}
	}
}

int func_6()//Position - 0xCA1
{
	switch (Local_183.f_1)
	{
		case 4:
			if (Global_262145.f_16760 /* Tunable: EXEC_HARD_SELL_BLIP_DELAY */ > 0)
			{
				return 1;
			}
			break;
		case 0:
		case 2:
		case 3:
		case 1:
			return 1;
	}
	return 0;
}

void func_7(bool bParam0)//Position - 0xCE8
{
	if (BitTest(Local_183.f_21, bParam0))
	{
		MISC::CLEAR_BIT(&(Local_183.f_21), bParam0);
	}
}

void func_9(bool bParam0, bool bParam1, bool bParam2)//Position - 0xD1D
{
	bool bVar0;
	if (bParam1 != __LIB_0__::func_160())
	{
		bVar0 = bParam1;
		if (bParam0)
		{
			if (!BitTest(Local_183.f_22[bParam2], bVar0))
			{
				MISC::SET_BIT(&(Local_183.f_22[bParam2]), bVar0);
			}
		}
		else if (BitTest(Local_183.f_22[bParam2], bVar0))
		{
			MISC::CLEAR_BIT(&(Local_183.f_22[bParam2]), bVar0);
		}
	}
}

void func_10(bool bParam0)//Position - 0xD77
{
	Local_183.f_168[bParam0]++;
}

bool func_11(bool bParam0, bool bParam1)//Position - 0xD93
{
	return BitTest(Local_183.f_22[bParam0], bParam1);
}

int func_12(bool bParam0)//Position - 0xDA7
{
	switch (bParam0)
	{
		case 0:
			return func_29(15);
		case 1:
			return func_29(16);
		case 2:
			return func_29(17);
		case 3:
			return func_29(18);
		case 4:
			return func_29(19);
		case 5:
			return func_29(20);
		case 6:
			return func_29(21);
		case 7:
			return func_29(22);
		default:
	}
	return 0;
}

int func_13(bool bParam0)//Position - 0xE2F
{
	int iVar0;
	if (bParam0 != -1)
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_183.f_59[bParam0]))
		{
			iVar0 = NETWORK::NET_TO_VEH(Local_183.f_59[bParam0]);
		}
	}
	return iVar0;
}

int func_14()//Position - 0xE5E
{
	if ((func_18() || func_17()) || func_15())
	{
		return 1;
	}
	switch (Local_183.f_957)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			if (func_74() || func_27())
			{
				return 4;
			}
			return 3;
		default:
	}
	return 1;
}

bool func_15()//Position - 0xEC4
{
	return func_16() == 12;
}

int func_16()//Position - 0xED3
{
	return Local_183.f_17;
}

bool func_17()//Position - 0xEE0
{
	return func_16() == 7;
}

bool func_18()//Position - 0xEEE
{
	return func_16() == 0;
}

bool func_19()//Position - 0xEFC
{
	return func_16() == 5;
}

int func_20(bool bParam0)//Position - 0xF0A
{
	int iVar0;
	iVar0 = 1;
	if (func_23())
	{
		iVar0 = ((((func_22() * func_21()) / func_24()) - Local_183.f_124[bParam0]) - Local_183.f_184[bParam0]);
	}
	else if (func_15())
	{
		iVar0 = (3 - Local_183.f_124[bParam0]);
	}
	return iVar0;
}

int func_21()//Position - 0xF59
{
	switch (Local_183.f_957)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 3;
		default:
	}
	return 0;
}

int func_22()//Position - 0xF8B
{
	switch (func_16())
	{
		case 6:
		case 8:
		case 0:
		case 10:
		case 11:
			return 1;
		case 3:
		case 5:
		case 1:
		case 12:
		case 2:
			return 5;
		case 4:
			return 4;
		case 9:
			return 5;
		default:
	}
	return 1;
}

bool func_23()//Position - 0xFF5
{
	return func_16() == 4;
}

int func_24()//Position - 0x1003
{
	if (func_23())
	{
		if (Local_183.f_112 == 3 && (Local_183.f_957 == 0 || Local_183.f_957 == 1))
		{
			return 2;
		}
		if (Local_183.f_112 > Global_262145.f_18569 /* Tunable: 249977398 */)
		{
			return Global_262145.f_18569 /* Tunable: 249977398 */;
		}
	}
	return Local_183.f_112;
}

int func_25()//Position - 0x1059
{
	switch (Local_183.f_17)
	{
		case 10:
		case 11:
		case 12:
		case 4:
			return 1;
		default:
	}
	return 0;
}

bool func_27()//Position - 0x10E6
{
	return func_16() == 6;
}

void func_28(int iParam0)//Position - 0x10F4
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	MISC::SET_BIT(&(Local_183.f_7), iParam0);
}

bool func_29(int iParam0)//Position - 0x1112
{
	return BitTest(Local_183.f_7, iParam0);
}

int func_30()//Position - 0x1122
{
	bool bVar0;
	bVar0 = false;
	while (bVar0 < func_14())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_59[bVar0]))
		{
			if (__LIB_2__::func_63(Local_183.f_59[bVar0]))
			{
				if (!__LIB_36__::func_988(NETWORK::NET_TO_VEH(Local_183.f_59[bVar0]), Local_183.f_110, 350f))
				{
					if (func_31(bVar0))
					{
						return bVar0;
					}
				}
			}
		}
		bVar0++;
	}
	return -1;
}

int func_31(bool bParam0)//Position - 0x118D
{
	switch (bParam0)
	{
		case 0:
			return func_62(14);
		case 1:
			return func_62(15);
		case 2:
			return func_62(16);
		case 3:
			return func_62(17);
		default:
	}
	return 0;
}

void func_38(bool bParam0, bool bParam1)//Position - 0x1560
{
	if ((((func_45() || func_15()) || func_23()) || func_44()) || func_43())
	{
		if (bParam1 >= 0)
		{
			Local_183.f_124[bParam1]++;
		}
	}
	Local_183.f_122++;
	if (func_15() && func_40(0))
	{
		func_39(bParam0);
	}
	else if (func_23() || func_74())
	{
		func_39(bParam0);
	}
	else
	{
		__LIB_24__::func_858(bParam1, bParam0);
	}
}

void func_39(int iParam0)//Position - 0x15F9
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		__LIB_24__::func_858(iVar0, iParam0);
		iVar0++;
	}
}

int func_40(int iParam0)//Position - 0x161C
{
	bool bVar0;
	int iVar1;
	int iVar2;
	if (func_42(iParam0))
	{
		iVar1 = 0;
		while (iVar1 < func_24())
		{
			bVar0 = false;
			while (bVar0 < 32)
			{
				if (BitTest(Local_183.f_145[iVar1], bVar0))
				{
					MISC::CLEAR_BIT(&(Local_183.f_145[iVar1]), bVar0);
					bVar0 = 32;
				}
				bVar0++;
			}
			Local_183.f_113[iVar1] = 0;
			iVar1++;
		}
		Local_183.f_123++;
		if (!func_41())
		{
			if (func_29(25) || func_29(24))
			{
				if (Local_183.f_123 == 2)
				{
					func_48(6);
				}
				else
				{
					iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
					if (iVar2 > 50)
					{
						func_48(6);
					}
				}
			}
		}
		Local_183.f_680 = -1;
		return 1;
	}
	return 0;
}

bool func_41()//Position - 0x16DC
{
	return func_62(6);
}

int func_42(var uParam0)//Position - 0x16E9
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < func_24())
	{
		if (Local_183.f_101[iVar1] != -1)
		{
			if (Local_183.f_124[iVar1] == 0)
			{
				return 0;
			}
			else
			{
				if (iVar0 == 0)
				{
					iVar0 = Local_183.f_124[iVar1];
					iVar2 = iVar1;
				}
				else
				{
					iVar2 = -1;
				}
				if (Local_183.f_124[iVar1] != iVar0)
				{
					return 0;
				}
				if (Local_183.f_124[iVar1] <= Local_183.f_123)
				{
					return 0;
				}
			}
		}
		iVar1++;
	}
	if (uParam0 && iVar2 != -1)
	{
		if (Local_183.f_124[iVar2] == Local_183.f_123)
		{
			return 0;
		}
	}
	return 1;
}

bool func_43()//Position - 0x1790
{
	return func_16() == 10;
}

bool func_44()//Position - 0x179F
{
	return func_16() == 11;
}

int func_45()//Position - 0x17AE
{
	switch (func_46())
	{
		case 1:
			if (!func_18() && !func_17())
			{
				return 1;
			}
			break;
		case 2:
			if (!func_18() && !func_17())
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_46()//Position - 0x17FE
{
	return Local_183.f_957;
}

void func_47(bool bParam0)//Position - 0x180C
{
	switch (bParam0)
	{
		case 0:
			if (!func_29(15))
			{
				func_28(15);
			}
			break;
		case 1:
			if (!func_29(16))
			{
				func_28(16);
			}
			break;
		case 2:
			if (!func_29(17))
			{
				func_28(17);
			}
			break;
		case 3:
			if (!func_29(18))
			{
				func_28(18);
			}
			break;
		case 4:
			if (!func_29(19))
			{
				func_28(19);
			}
			break;
		case 5:
			if (!func_29(20))
			{
				func_28(20);
			}
			break;
		case 6:
			if (!func_29(21))
			{
				func_28(21);
			}
			break;
		case 7:
			if (!func_29(22))
			{
				func_28(22);
			}
			break;
	}
}

void func_48(int iParam0)//Position - 0x18E3
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	MISC::SET_BIT(&(Local_183.f_6), iParam0);
}

int func_49(int iParam0)//Position - 0x1901
{
	switch (iParam0)
	{
		case 0:
			return func_62(21);
		case 1:
			return func_62(22);
		case 2:
			return func_62(23);
		default:
	}
	return 0;
}

void func_50(int iParam0)//Position - 0x193E
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	MISC::SET_BIT(&(Local_183.f_8), iParam0);
}

void func_51(var uParam0)//Position - 0x195C
{
	__LIB_11__::func_60(__LIB_18__::func_554(1, 0), __LIB_1__::func_301(), uParam0);
}

bool func_60(int iParam0)//Position - 0x1AEF
{
	return BitTest(Local_183.f_8, iParam0);
}

int func_61()//Position - 0x1AFF
{
	switch (func_16())
	{
		case 6:
		case 0:
		case 3:
		case 4:
		case 5:
		case 7:
		case 8:
		case 10:
		case 11:
		case 12:
			return 1;
		default:
	}
	return 0;
}

bool func_62(int iParam0)//Position - 0x1B51
{
	return BitTest(Local_183.f_6, iParam0);
}

bool func_63(int iParam0, int iParam1)//Position - 0x1B61
{
	return BitTest(Local_184[iParam0 /*29*/].f_2, iParam1);
}

void func_64(bool bParam0, bool bParam1)//Position - 0x1B75
{
	int iVar0;
	bool bVar1;
	switch (func_16())
	{
		case 5:
			if (func_11(bParam1, bParam0))
			{
				if (__LIB_34__::func_628(bParam0, &(Local_183.f_173)))
				{
					func_71(1);
					func_9(0, bParam0, bParam1);
					__LIB_24__::func_858(bParam1, Local_183.f_175[bParam1]);
					func_7(bParam1);
					func_10(bParam1);
				}
				else if (!func_66(bParam1))
				{
					func_9(0, bParam0, bParam1);
					__LIB_24__::func_858(bParam1, Local_183.f_175[bParam1]);
					func_7(bParam1);
				}
			}
			break;
	}
	if (func_25())
	{
		bVar1 = -1;
		if (__LIB_1__::func_264(bParam0, 0, 1) && bParam0 != __LIB_0__::func_160())
		{
			if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(bParam0))
			{
				iVar0 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(bParam0);
				if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
				{
					if (func_63(iVar0, 19))
					{
						if (__LIB_34__::func_628(bParam0, &(Local_183.f_173)) || func_63(iVar0, 21))
						{
							bVar1 = func_65(bParam0);
							if (bVar1 != -1 && !func_12(bVar1))
							{
								func_71(func_20(bVar1));
								__LIB_24__::func_858(bParam1, Local_183.f_175[bParam1]);
								Local_183.f_101[bVar1] = -1;
								if (func_15())
								{
									func_40(1);
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_65(bool bParam0)//Position - 0x1CA9
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar1 = -1;
	iVar2 = bParam0;
	iVar0 = 0;
	while (iVar0 < func_24())
	{
		if (Local_183.f_101[iVar0] == iVar2)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	return iVar1;
}

int func_66(bool bParam0)//Position - 0x1CE1
{
	if (ENTITY::DOES_ENTITY_EXIST(func_67(bParam0)) && !ENTITY::IS_ENTITY_DEAD(func_67(bParam0), false))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(func_13(bParam0), false))
		{
			return 1;
		}
	}
	return 0;
}

int func_67(bool bParam0)//Position - 0x1D1A
{
	int iVar0;
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_183.f_59[bParam0]))
	{
		iVar0 = NETWORK::NET_TO_ENT(Local_183.f_59[bParam0]);
	}
	return iVar0;
}

void func_69(int iParam0, int iParam1, int iParam2)//Position - 0x1D85
{
	if (iParam2 || Local_184[iParam0 /*29*/].f_9[iParam1] == 2)
	{
		if (Local_183.f_970[iParam1] != 2)
		{
			Local_183.f_970[iParam1] = 2;
		}
	}
	else if (Local_184[iParam0 /*29*/].f_9[iParam1] == 1)
	{
		if (Local_183.f_970[iParam1] != 1)
		{
			Local_183.f_970[iParam1] = 1;
		}
	}
}

int func_70(bool bParam0, int iParam1)//Position - 0x1DED
{
	if (func_66(bParam0))
	{
		if (iParam1 == VEHICLE::GET_PED_IN_VEHICLE_SEAT(func_13(bParam0), -1, false))
		{
			return 1;
		}
	}
	return 0;
}

void func_71(int iParam0)//Position - 0x1E14
{
	Local_183.f_167 = (Local_183.f_167 + iParam0);
}

int func_72()//Position - 0x1E29
{
	switch (func_16())
	{
		case 1:
			return func_73(-1);
		case 9:
			return func_22();
		case 8:
			return func_14();
		default:
	}
	return 0;
}

int func_73(int iParam0)//Position - 0x1E63
{
	int iVar0;
	iVar0 = -1;
	if (func_18() || func_17())
	{
		return (func_22() - Local_183.f_167);
	}
	if (func_15())
	{
		return (func_24() * 3 - Local_183.f_167);
	}
	if (func_43() || func_44())
	{
		return (func_24() - Local_183.f_167);
	}
	switch (Local_183.f_957)
	{
		case 0:
			return (func_22() - Local_183.f_167);
		case 1:
			return (func_22() * 2 - Local_183.f_167);
		case 2:
			if (func_27() || func_74())
			{
				return (func_22() * 4 - Local_183.f_167);
			}
			if (func_25())
			{
				if (iParam0 != -1)
				{
					return (func_22() * 3 - Local_183.f_184[iParam0]);
				}
			}
			return (func_22() * 3 - Local_183.f_167);
		default:
	}
	return iVar0;
}

bool func_74()//Position - 0x1F4A
{
	return func_16() == 8;
}

void func_75(var uParam0, int iParam1)//Position - 0x1F59
{
	int iVar0;
	if (!__LIB_24__::func_792(uParam0) || *uParam0)
	{
		iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iParam1));
		if ((__LIB_1__::func_298(iVar0, 7) && !__LIB_1__::func_298(iVar0, 6)) && __LIB_36__::func_875(iVar0, __LIB_1__::func_301(), 1))
		{
			__LIB_24__::func_798(&(uParam0->f_2), iParam1);
		}
	}
}

void func_84()//Position - 0x2141
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	func_543();
	func_525();
	func_511();
	func_500();
	func_486();
	func_484();
	func_478();
	func_473();
	func_472();
	bVar0 = true;
	switch (func_471())
	{
		case 0:
			if (func_454())
			{
				if (!func_414())
				{
					bVar0 = false;
				}
				if (!func_360())
				{
					bVar0 = false;
				}
				if (!func_348())
				{
					bVar0 = false;
				}
				if (!func_322())
				{
					bVar0 = false;
				}
				if (!func_260())
				{
					bVar0 = false;
				}
				if (!func_249())
				{
					bVar0 = false;
				}
				if (bVar0)
				{
					func_3(0);
					Local_183.f_983 = NETWORK::GET_CLOUD_TIME_AS_INT();
					func_248(1);
					if (func_247())
					{
						bVar1 = false;
						while (bVar1 < func_246())
						{
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_244(bVar1));
							bVar1++;
						}
					}
					if (func_243())
					{
						bVar1 = false;
						while (bVar1 < func_242())
						{
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_240(bVar1));
							bVar1++;
						}
					}
				}
			}
			break;
		case 1:
			if (func_239() == 0)
			{
				if (!__LIB_0__::func_649(&(Local_183.f_10)))
				{
					__LIB_0__::func_580(&(Local_183.f_10), 0, 0);
				}
				else if (__LIB_2__::func_47(&(Local_183.f_10), func_237(), 0))
				{
					func_236(1);
				}
				else if (__LIB_2__::func_47(&(Local_183.f_10), 600000, 0))
				{
					if (!func_62(3))
					{
						func_48(3);
					}
				}
				bVar1 = false;
				while (bVar1 < func_14())
				{
					if (func_62(1))
					{
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_59[bVar1]) && !func_66(bVar1))
						{
							if (func_74())
							{
								if (!BitTest(Local_183.f_165, bVar1))
								{
									func_71(1);
									MISC::SET_BIT(&(Local_183.f_165), bVar1);
								}
							}
							if (func_235() || func_19())
							{
								if (!BitTest(Local_183.f_165, bVar1))
								{
									func_71(((func_234(bVar1) - Local_183.f_124[bVar1]) - Local_183.f_168[bVar1]));
									MISC::SET_BIT(&(Local_183.f_165), bVar1);
								}
							}
							if (!BitTest(Local_183.f_133, bVar1))
							{
								if (!func_12(bVar1))
								{
									MISC::SET_BIT(&(Local_183.f_133), bVar1);
									func_232(bVar1);
								}
							}
						}
					}
					bVar1++;
				}
				if (func_25())
				{
					iVar4 = func_24();
				}
				else
				{
					iVar4 = func_14();
				}
				bVar1 = false;
				while (bVar1 < iVar4)
				{
					if (BitTest(Local_183.f_133, bVar1))
					{
						iVar2++;
					}
					if (BitTest(Local_183.f_133, bVar1) || func_12(bVar1))
					{
						iVar3++;
					}
					bVar1++;
				}
				if (iVar2 == iVar4)
				{
					if (!func_230(0))
					{
						if (func_239() != 4)
						{
							func_236(4);
						}
					}
				}
				if (func_25())
				{
					if (func_229())
					{
						if (!func_230(0))
						{
							if (func_239() != 4)
							{
								func_236(4);
							}
						}
					}
				}
				if (func_17())
				{
					if (func_239() != 6)
					{
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_707[0 /*8*/]) && ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_PED(Local_183.f_707[0 /*8*/]), false))
						{
							func_236(6);
						}
					}
				}
				if (func_62(18) || iVar3 == iVar4)
				{
					if (func_239() == 0)
					{
						if (func_227())
						{
							func_236(7);
						}
						else
						{
							func_236(6);
						}
					}
				}
			}
			else
			{
				func_248(2);
			}
			func_85();
			break;
		case 2:
			if (func_62(0))
			{
				func_248(3);
			}
			break;
		case 3:
			func_619(3);
			break;
	}
}

void func_85()//Position - 0x2493
{
	bool bVar0;
	struct<31> Var1;
	struct<3> Var2;
	float fVar3;
	int iVar4;
	if (!func_61())
	{
		return;
	}
	Var1.f_4 = 1125515264;
	Var1.f_5 = 1;
	Var1.f_6 = 1;
	Var1.f_8 = 1082130432;
	Var1.f_9 = 1176255488;
	Var1.f_10 = 1;
	Var1.f_13 = 1;
	Var1.f_15 = 2;
	Var1.f_22 = 2;
	Var1.f_25 = 1;
	Var1.f_26 = 1;
	Var1.f_29 = 1123024896;
	Var1.f_30 = 1;
	bVar0 = false;
	while (bVar0 < func_14())
	{
		if (BitTest(Local_183.f_961, bVar0))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(func_13(bVar0), false))
			{
				if (Local_183.f_965 == -1 || Local_183.f_965 == bVar0)
				{
					if (Local_183.f_965 == -1)
					{
						Local_183.f_965 = bVar0;
						Local_183.f_962 = { ENTITY::GET_ENTITY_COORDS(func_13(bVar0), true) };
					}
					Var1.f_0 = 10f;
					Var1.f_1 = 0;
					Var1.f_4 = 100f;
					Var1.f_5 = 0;
					Var1.f_6 = 1;
					Var1.f_12 = 1;
					Var1.f_3 = 0;
					Var2 = { 0f, 0f, 0f };
					fVar3 = 0f;
					iVar4 = ENTITY::GET_ENTITY_MODEL(func_13(bVar0));
					if (func_87(Local_183.f_962, 0f, 0f, 0f, iVar4, 0, &Var2, &fVar3, &Var1))
					{
						if (__LIB_3__::func_686(func_13(bVar0)))
						{
							ENTITY::SET_ENTITY_COORDS(func_13(bVar0), Var2, true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(func_13(bVar0), fVar3);
							VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(func_13(bVar0), 5f);
							Local_183.f_965 = -1;
							MISC::CLEAR_BIT(&(Local_183.f_961), bVar0);
						}
					}
				}
			}
		}
		bVar0++;
	}
}

int func_87(struct<3> Param0, struct<3> Param1, int iParam2, int iParam3, var uParam4, float fParam5, var uParam6)//Position - 0x2651
{
	bool bVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	struct<61> Var5;
	struct<61> Var6;
	bVar0 = false;
	if (uParam6->f_14)
	{
		if (uParam6->f_25)
		{
			uParam6->f_25 = 0;
		}
	}
	if (!__LIB_2__::func_61())
	{
		return 0;
	}
	if (__LIB_1__::func_122() && !Global_2667225.f_680 == MISC::GET_FRAME_COUNT())
	{
		if (!Global_2667225.f_676 == 0)
		{
			Global_2667225.f_676 = 0;
			__LIB_0__::func_639();
			__LIB_0__::func_599();
		}
	}
	if (!SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2667225.f_675)
	{
		if (!Global_2667225.f_676 == 0)
		{
			if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_679) < __LIB_0__::func_638(0))
			{
				return 0;
			}
			else
			{
				Global_2667225.f_676 = 0;
			}
		}
	}
	else
	{
		if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_677) > 30000)
		{
			Global_2667225.f_676 = 0;
		}
		if (!Global_2667225.f_676 == 0)
		{
			if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_679) > __LIB_0__::func_638(1))
			{
				Global_2667225.f_676 = 0;
			}
		}
	}
	if (uParam6->f_6)
	{
		if (func_213(Param0))
		{
			if (__LIB_2__::func_60(&Param0, 1))
			{
			}
		}
	}
	if (!Global_2667225.f_676 == 0)
	{
		if (SYSTEM::VDIST(Global_2667225.f_695, Param0) > 50f)
		{
			return 0;
		}
		if (Global_2667225.f_698 != iParam2)
		{
			return 0;
		}
	}
	PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME((Param0.f_0 - 100f), (Param0.f_1 - 100f), (Param0.f_0 + 100f), (Param0.f_1 + 100f));
	if (Global_2667225.f_676 == 0)
	{
		Global_2667225.f_682 = 0;
		Global_2667225.f_677 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		Global_2667225.f_675 = SCRIPT::GET_ID_OF_THIS_THREAD();
		Global_2667225.f_679 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		Global_2667225.f_695 = { Param0 };
		Global_2667225.f_698 = iParam2;
		Global_2667225.f_681 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		__LIB_0__::func_636();
		__LIB_0__::func_639();
		if (!uParam6->f_27 || (((((((__LIB_31__::func_903(Param0, 1, 1133903872) && !uParam6->f_28) && !Global_2815059.f_924) && !Global_2815059.f_913) && !Global_2815059.f_921) && !Global_2815059.f_925) && !Global_2815059.f_933) && !Global_2815059.f_945))
		{
			__LIB_41__::func_306(Param0, iParam2);
		}
		if (__LIB_41__::func_887(Param0))
		{
			__LIB_41__::func_306(Param0, iParam2);
		}
		Global_2667225.f_676 = 2;
	}
	switch (Global_2667225.f_676)
	{
		case 2:
			if (PATHFIND::ARE_NODES_LOADED_FOR_AREA((Param0.f_0 - 100f), (Param0.f_1 - 100f), (Param0.f_0 + 100f), (Param0.f_1 + 100f)))
			{
				Global_2667225.f_683 = { Param0 };
				Global_2667225.f_686 = 0f;
				if (Global_2815059.f_924)
				{
					fVar2 = 10f;
					fVar3 = 5f;
					fVar4 = 5f;
				}
				else
				{
					fVar2 = 4f;
					fVar3 = 1f;
					fVar4 = 1f;
				}
				if (((uParam6->f_3 && __LIB_36__::func_561(Param0, fVar2, fVar3, fVar4, 1f, 0, 0, 0, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0)) && !uParam6->f_7) && !__LIB_25__::func_133(Param0, *fParam5, iParam2, PLAYER::PLAYER_ID(), 0))
				{
					Global_2667225.f_683 = { Param0 };
					Global_2667225.f_686 = *fParam5;
				}
				else
				{
					Var5.f_6 = 1082130432;
					Var5.f_7 = 1176255488;
					Var5.f_8 = 1;
					Var5.f_10 = 1;
					Var5.f_13 = 1;
					Var5.f_15 = 1;
					Var5.f_16 = 1;
					Var5.f_31 = 1;
					Var5.f_34 = joaat("tailgater");
					Var5.f_38 = 2;
					Var5.f_45 = 2;
					Var5.f_49 = 1123024896;
					Var5.f_53 = 999;
					Var5.f_54 = 1176256410;
					Var5.f_55 = 1;
					Var5.f_56 = 1;
					Var5.f_57 = 1;
					Var5.f_9 = iParam3;
					Var5.f_3 = 7f;
					Var5.f_10 = uParam6->f_5;
					Var5.f_4 = *uParam6;
					Var5.f_13 = uParam6->f_1;
					Var5.f_14 = uParam6->f_2;
					Var5.f_5 = uParam6->f_4;
					Var5.f_15 = uParam6->f_6;
					Var5.f_11 = uParam6->f_7;
					Var5.f_6 = uParam6->f_8;
					Var5.f_7 = uParam6->f_9;
					Var5.f_16 = uParam6->f_10;
					Var5.f_17 = uParam6->f_11;
					Var5 = { Param1 };
					Var5.f_12 = 1;
					Var5.f_34 = iParam2;
					Var5.f_31 = uParam6->f_13;
					if (uParam6->f_32 && Global_2667225.f_682 > 0)
					{
						Var5.f_30 = 0;
						Var5.f_29 = 1;
					}
					else
					{
						Var5.f_30 = uParam6->f_30;
						Var5.f_29 = uParam6->f_31;
					}
					Var5.f_48 = uParam6->f_14;
					Var5.f_56 = uParam6->f_25;
					Var5.f_57 = uParam6->f_26;
					Var5.f_49 = uParam6->f_29;
					Var5.f_59 = uParam6->f_33;
					Var5.f_60 = uParam6->f_34;
					iVar1 = 0;
					while (iVar1 < 2)
					{
						Var5.f_38[iVar1 /*3*/] = { uParam6->f_15[iVar1 /*3*/] };
						Var5.f_45[iVar1] = uParam6->f_22[iVar1];
						iVar1++;
					}
					func_114(&(Global_2667225.f_683), &(Global_2667225.f_686), &Var5);
				}
				__LIB_19__::func_497(Global_2667225.f_683, Global_2667225.f_686, iParam2, &(Global_2667225.f_673));
				Global_2667225.f_671 = 0;
				Global_2667225.f_672 = 0;
				Global_2667225.f_682++;
				Global_2667225.f_678 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				Global_2667225.f_677 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				Global_2667225.f_676 = 3;
			}
			break;
		case 3:
			if (Global_2667225.f_671)
			{
				if (Global_2667225.f_673 == Global_2667225.f_674)
				{
					if (Global_2667225.f_672)
					{
						if (uParam6->f_12 && !uParam6->f_11)
						{
							if (__LIB_18__::func_420(Global_2667225.f_683, Global_2667225.f_686, iParam2, 1, 1036831949))
							{
								Global_2667225.f_676 = 4;
								Global_2667225.f_700 = NETWORK::GET_NETWORK_TIME_ACCURATE();
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
					}
					else
					{
						func_109(Global_2667225.f_683, 0);
						__LIB_0__::func_606(-1);
					}
				}
				else
				{
					Global_2667225.f_671 = 0;
					Global_2667225.f_672 = 0;
				}
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_678) > 3000)
			{
				__LIB_0__::func_606(-1);
			}
			break;
		case 4:
			if (uParam6->f_12 && !uParam6->f_11)
			{
				if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_700) < 10000)
				{
					if (NETWORK::NETWORK_ENTITY_AREA_DOES_EXIST(Global_2667225.f_699))
					{
						if (NETWORK::NETWORK_ENTITY_AREA_HAVE_ALL_REPLIED(Global_2667225.f_699))
						{
							if (!NETWORK::NETWORK_ENTITY_AREA_IS_OCCUPIED(Global_2667225.f_699))
							{
								if (__LIB_25__::func_50(Global_2667225.f_683, Global_2667225.f_686, iParam2, PLAYER::PLAYER_ID(), 0) || __LIB_32__::func_230(Global_2667225.f_683, Global_2667225.f_686, iParam2, 1, 0, 0, 0, 1, 0))
								{
									func_109(Global_2667225.f_683, 0);
									__LIB_0__::func_606(-1);
								}
								else
								{
									bVar0 = true;
								}
							}
							else
							{
								func_109(Global_2667225.f_683, 0);
								__LIB_0__::func_606(-1);
							}
						}
					}
					else
					{
						__LIB_0__::func_606(-1);
					}
				}
				else
				{
					__LIB_0__::func_606(1);
				}
			}
			else
			{
				bVar0 = true;
			}
			break;
		case 5:
			Global_2667225.f_683 = { Param0 };
			Global_2667225.f_686 = 0f;
			Var6.f_6 = 1082130432;
			Var6.f_7 = 1176255488;
			Var6.f_8 = 1;
			Var6.f_10 = 1;
			Var6.f_13 = 1;
			Var6.f_15 = 1;
			Var6.f_16 = 1;
			Var6.f_31 = 1;
			Var6.f_34 = joaat("tailgater");
			Var6.f_38 = 2;
			Var6.f_45 = 2;
			Var6.f_49 = 1123024896;
			Var6.f_53 = 999;
			Var6.f_54 = 1176256410;
			Var6.f_55 = 1;
			Var6.f_56 = 1;
			Var6.f_57 = 1;
			Var6.f_9 = iParam3;
			Var6.f_3 = 3.5f;
			Var6.f_10 = uParam6->f_5;
			Var6.f_4 = *uParam6;
			Var6.f_12 = 1;
			Var6.f_13 = 0;
			Var6.f_15 = uParam6->f_6;
			Var6.f_11 = uParam6->f_7;
			Var6.f_6 = uParam6->f_8;
			Var6.f_7 = uParam6->f_9;
			Var6 = { Param1 };
			Var6.f_34 = iParam2;
			Var6.f_31 = uParam6->f_13;
			Var6.f_30 = 1;
			Var6.f_48 = uParam6->f_14;
			Var6.f_56 = uParam6->f_25;
			Var6.f_57 = uParam6->f_26;
			Var6.f_30 = uParam6->f_30;
			Var6.f_29 = uParam6->f_31;
			Var6.f_59 = uParam6->f_33;
			Var6.f_60 = uParam6->f_34;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				Var6.f_38[iVar1 /*3*/] = { uParam6->f_15[iVar1 /*3*/] };
				Var6.f_45[iVar1] = uParam6->f_22[iVar1];
				iVar1++;
			}
			Var6.f_49 = uParam6->f_29;
			func_114(&(Global_2667225.f_683), &(Global_2667225.f_686), &Var6);
			Global_2667225.f_676 = 6;
			break;
		case 6:
			bVar0 = true;
			break;
	}
	Global_2667225.f_695 = { Param0 };
	Global_2667225.f_698 = iParam2;
	Global_2667225.f_679 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (bVar0)
	{
		Global_2667225.f_516 = 0;
		*uParam4 = { Global_2667225.f_683 };
		*fParam5 = Global_2667225.f_686;
		__LIB_6__::func_912(1);
		return 1;
	}
	return 0;
}

void func_109(struct<3> Param0, int iParam1)//Position - 0x3A75
{
	struct<3> Var0;
	if (iParam1 == 0 && __LIB_0__::func_607(Param0, 0.01f))
	{
		return;
	}
	if (iParam1 < 30 && SYSTEM::VMAG(Param0) > 0f)
	{
		Var0 = { Global_2667225.f_2737[iParam1 /*3*/] };
		Global_2667225.f_2737[iParam1 /*3*/] = { Param0 };
		func_109(Var0, iParam1 + 1);
	}
}

void func_114(var uParam0, var uParam1, var uParam2)//Position - 0x3C87
{
	int iVar0;
	iVar0 = 0;
	if (Global_2667225.f_1754 > 0)
	{
		iVar0 = 0;
		while (func_163(uParam0, uParam1, uParam2) == 0 && iVar0 < 2)
		{
			iVar0++;
		}
		if (iVar0 == 2)
		{
			uParam2->f_33 = 0;
		}
		else
		{
			return;
		}
	}
	iVar0 = 0;
	while (func_115(uParam0, uParam1, uParam2) == 0 && iVar0 < 6)
	{
		iVar0++;
	}
}

int func_115(var uParam0, var uParam1, var uParam2)//Position - 0x3CF6
{
	int iVar0;
	struct<3> Var1;
	float* fVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	float fVar11;
	float fVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	bool bVar16;
	int iVar17;
	bool bVar18;
	int iVar19;
	float fVar20;
	int iVar21;
	int iVar22;
	float fVar23;
	int iVar24;
	struct<3> Var25;
	var uVar26;
	struct<3> Var27;
	float* fVar28;
	bool bVar29;
	iVar0 = 0;
	if (!SYSTEM::VMAG(uParam2->f_35) > 0f)
	{
		uParam2->f_35 = { *uParam0 };
	}
	if (uParam2->f_15)
	{
		if (func_159(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
	}
	if (uParam2->f_51)
	{
		uParam2->f_6 = 9999.9f;
	}
	if (uParam2->f_48)
	{
		if (__LIB_18__::func_371(uParam0, 1))
		{
		}
	}
	if (uParam0->f_2 < -80f)
	{
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
	}
	iVar3 = 0;
	bVar8 = true;
	if (uParam2->f_11)
	{
		iVar3 += 2;
		iVar3++;
		bVar8 = false;
	}
	else if (uParam2->f_10 == 0 || (uParam2->f_33 > 0 && uParam2->f_16))
	{
		iVar3++;
		bVar8 = false;
	}
	iVar3 += 4;
	fVar11 = 3f;
	fVar12 = 5f;
	switch (uParam2->f_33)
	{
		case 0:
			fVar11 = 3f;
			fVar12 = 5f;
			break;
		case 1:
			fVar11 = 2.75f;
			fVar12 = 7.5f;
			break;
		default:
			fVar11 = 2.5f;
			fVar12 = 10f;
			break;
	}
	iVar13 = 0;
	Global_2674786.f_162 = 0;
	Global_2674786.f_163 = 0;
	Global_2674786.f_164 = -99;
	Global_2674786.f_165 = { 0f, 0f, 0f };
	iVar14 = 0;
	while (iVar14 < 40)
	{
		Global_2674786[iVar14 /*3*/] = { 0f, 0f, 0f };
		Global_2674786.f_121[iVar14] = 0f;
		iVar14++;
	}
	iVar15 = 1;
	if (__LIB_6__::func_902(uParam2->f_34) != 0)
	{
		iVar15 = 3;
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
		uParam2->f_18 = 0;
	}
	while (true)
	{
		iVar6 = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID_WITH_HEADING(*uParam0, (iVar0 * iVar15), &fVar2, &iVar7, iVar3, fVar11, fVar12);
		if (PATHFIND::IS_VEHICLE_NODE_ID_VALID(iVar6))
		{
			PATHFIND::GET_VEHICLE_NODE_POSITION(iVar6, &Var1);
			bVar10 = false;
			if (Global_2674786.f_164 == iVar6)
			{
				bVar10 = true;
			}
			Global_2674786.f_165 = { Var1 };
			if (((uParam2->f_10 || uParam2->f_33 > 0) || !PATHFIND::GET_VEHICLE_NODE_IS_SWITCHED_OFF(iVar6)) || PATHFIND::GET_VEHICLE_NODE_IS_GPS_ALLOWED(iVar6))
			{
				PATHFIND::GET_VEHICLE_NODE_PROPERTIES(Var1, &uVar4, &uVar5);
				if (SYSTEM::VDIST(Var1, uParam2->f_35) > uParam2->f_4)
				{
					if (!__LIB_24__::func_959(&Var1, 0))
					{
						if ((uParam2->f_13 || uVar5 & 64 == 0) || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || uVar5 & 16 == 0)
							{
								if ((uVar5 & 128 == 0 && uVar5 & 256 == 0) && uVar5 & 512 == 0)
								{
									if (!__LIB_2__::func_38(Var1))
									{
										Var1 = { __LIB_24__::func_992(Var1, &fVar2, iVar7, uParam2->f_9, *uParam2, bVar8, uParam2->f_11, uParam2->f_34, &bVar9, bVar10, 1, uParam2->f_51, uParam2->f_60) };
										if (SYSTEM::VMAG(Var1) > 0f)
										{
											if (!__LIB_25__::func_52(Var1, 5f))
											{
												if (Var1.f_2 >= (uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
												{
													if (Var1.f_2 <= (uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
													{
														if (__LIB_7__::func_119(Var1, uParam2))
														{
															if ((uParam2->f_48 && !__LIB_18__::func_371(&Var1, 0)) || uParam2->f_48 == 0)
															{
																bVar16 = true;
																if (!bVar10)
																{
																	if (bVar9)
																	{
																		iVar0 = (iVar0 + -1);
																		bVar16 = false;
																	}
																}
																if (SYSTEM::VMAG(Var1) > 0f)
																{
																	if (((uParam2->f_5 > 0f && SYSTEM::VDIST(Var1.f_0, Var1.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f) || uParam2->f_33 >= 2)
																	{
																		if ((uParam2->f_12 && !__LIB_32__::func_142(Var1, fVar2, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12)
																		{
																			if (!uParam2->f_15 || !func_159(uParam2->f_35, &Var1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
																			{
																				if (uParam2->f_8)
																				{
																					iVar17 = uParam2->f_31;
																					bVar18 = true;
																					iVar19 = 1;
																					fVar20 = uParam2->f_49;
																					if (!uParam2->f_55)
																					{
																						iVar17 = 0;
																						bVar18 = false;
																						iVar19 = 0;
																						fVar20 = 1f;
																					}
																					else if (uParam2->f_17)
																					{
																						iVar17 = 0;
																						bVar18 = false;
																						iVar19 = 0;
																						if (uParam2->f_33 == 1)
																						{
																							fVar20 = (fVar20 * 0.375f);
																						}
																					}
																					else
																					{
																						bVar18 = true;
																						iVar19 = 1;
																						if (uParam2->f_28)
																						{
																							if (uParam2->f_33 == 1)
																							{
																								fVar20 = (fVar20 * 0.375f);
																							}
																						}
																					}
																					iVar21 = 0;
																					if (!__LIB_25__::func_72(Var1, fVar2, uParam2->f_34))
																					{
																						if (uParam2->f_3 > 7f)
																						{
																							if (__LIB_36__::func_561(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
																							{
																								iVar21 = 1;
																							}
																						}
																						else if (__LIB_36__::func_561(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !__LIB_32__::func_230(Var1, fVar2, uParam2->f_34, 1, 1, 0, 0, 0, 0))
																						{
																							iVar21 = 1;
																						}
																					}
																					if (iVar21 || uParam2->f_33 >= 2)
																					{
																						if (((uParam2->f_29 || uParam2->f_30) || uParam2->f_52) || uParam2->f_33 >= 2)
																						{
																							fVar23 = 0f;
																							if (uParam2->f_52)
																							{
																								iVar22 = __LIB_32__::func_231(Var1, uParam2->f_54, &fVar23);
																							}
																							if (!uParam2->f_52 || (uParam2->f_52 && iVar22 <= uParam2->f_53))
																							{
																								if (uParam2->f_52)
																								{
																									if (iVar22 < uParam2->f_53)
																									{
																										iVar14 = 0;
																										while (iVar14 < Global_2674786.f_162)
																										{
																											Global_2674786[iVar14 /*3*/] = { 0f, 0f, 0f };
																											Global_2674786.f_121[iVar14] = 0f;
																											iVar14++;
																										}
																										Global_2674786.f_162 = 0;
																										uParam2->f_53 = iVar22;
																									}
																								}
																								if (uParam2->f_30)
																								{
																									if (Global_2674786.f_162 == 0)
																									{
																										Global_2674786[0 /*3*/] = { Var1 };
																										Global_2674786.f_121[0] = fVar2;
																									}
																									else
																									{
																										iVar14 = 0;
																										while (iVar14 < Global_2674786.f_162 + 1)
																										{
																											if (iVar14 < 40)
																											{
																												if (SYSTEM::VDIST2(Var1, uParam2->f_35) < SYSTEM::VDIST2(Global_2674786[iVar14 /*3*/], uParam2->f_35))
																												{
																													func_123(Var1, fVar2, iVar14);
																													iVar14 = Global_2674786.f_162 + 1;
																												}
																											}
																											iVar14++;
																										}
																									}
																									Global_2674786.f_162++;
																									if (Global_2674786.f_162 >= 5)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2674786.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																								else
																								{
																									Global_2674786[Global_2674786.f_162 /*3*/] = { Var1 };
																									Global_2674786.f_121[Global_2674786.f_162] = fVar2;
																									Global_2674786.f_162++;
																									if (__LIB_7__::func_119(Var1, uParam2))
																									{
																										Global_2674786.f_163++;
																									}
																									if (Global_2674786.f_162 >= 10)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2674786.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																							}
																						}
																						else
																						{
																							*uParam0 = { Var1 };
																							*uParam1 = fVar2;
																							return 1;
																						}
																					}
																					else if (bVar16)
																					{
																						iVar0++;
																					}
																				}
																				else
																				{
																					*uParam0 = { Var1 };
																					*uParam1 = fVar2;
																					return 1;
																				}
																			}
																		}
																		else
																		{
																			iVar13++;
																		}
																	}
																	else
																	{
																		iVar0 = 100;
																	}
																}
															}
															else
															{
																iVar0++;
															}
														}
														else if (!uParam2->f_32)
														{
															iVar0 = 100;
														}
													}
													else
													{
														iVar0++;
													}
												}
												else
												{
													iVar0++;
												}
											}
										}
									}
									else
									{
										iVar0++;
									}
								}
							}
							else
							{
								iVar0++;
							}
						}
						else
						{
							iVar0++;
						}
					}
					else
					{
						iVar13++;
					}
				}
				else
				{
					iVar13++;
				}
			}
			iVar0++;
			if (iVar0 >= (40 + iVar13) || iVar0 >= 100)
			{
				if (Global_2674786.f_162 > 0 && ((uParam2->f_29 || uParam2->f_30) || uParam2->f_33 >= 2))
				{
					if (uParam2->f_30)
					{
						*uParam0 = { Global_2674786[0 /*3*/] };
						*uParam1 = Global_2674786.f_121[0];
						return 1;
					}
					else
					{
						if (Global_2674786.f_163 > 0 && !Global_2674786.f_163 == Global_2674786.f_162)
						{
							func_121(0, uParam2);
						}
						iVar24 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2674786.f_162);
						if (uParam2->f_18 && uParam2->f_30)
						{
							iVar24 = 0;
						}
						Var25 = { Global_2674786[0 /*3*/] };
						uVar26 = Global_2674786.f_121[0];
						Global_2674786[0 /*3*/] = { Global_2674786[iVar24 /*3*/] };
						Global_2674786.f_121[0] = Global_2674786.f_121[iVar24];
						Global_2674786[iVar24 /*3*/] = { Var25 };
						Global_2674786.f_121[iVar24] = uVar26;
						*uParam0 = { Global_2674786[0 /*3*/] };
						*uParam1 = Global_2674786.f_121[0];
						return 1;
					}
				}
				else
				{
					uParam2->f_33++;
					if (uParam2->f_33 < 3)
					{
						return 0;
					}
					else
					{
						__LIB_31__::func_894(iVar13, *uParam0, &iVar0, &Var1, &fVar2, uParam2, bVar8, iVar7, iVar3, fVar11, fVar12, bVar9);
						Var27 = { Var1 };
						fVar28 = fVar2;
						if (!uParam2->f_50)
						{
							bVar29 = true;
						}
						else
						{
							bVar29 = false;
						}
						if (func_159(uParam2->f_35, &Var27, &(uParam2->f_38), &(uParam2->f_45), bVar29, 1) || __LIB_18__::func_371(&Var27, bVar29))
						{
							if (!uParam2->f_50)
							{
								uParam2->f_33 = 0;
								uParam2->f_50 = 1;
								*uParam0 = { Var27 };
								*uParam1 = fVar28;
								uParam2->f_6 = 9999.9f;
								uParam2->f_7 = 9999.9f;
								return 0;
							}
							else
							{
								*uParam0 = { Var27 };
								*uParam1 = fVar28;
								return 1;
							}
						}
						else
						{
							*uParam0 = { Var27 };
							*uParam1 = fVar28;
							return 1;
						}
					}
				}
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 3)
			{
				return 0;
			}
			else
			{
				__LIB_35__::func_676(&Global_1574205, uParam0, uParam1, *uParam0);
				if (uParam2->f_11)
				{
					uParam2->f_27 = 1;
				}
				return 1;
			}
		}
		Global_2674786.f_164 = iVar6;
	}
	return 0;
}

void func_121(int iParam0, var uParam1)//Position - 0x4A57
{
	if (!__LIB_7__::func_119(Global_2674786[iParam0 /*3*/], uParam1))
	{
		Global_2674786.f_162 = (Global_2674786.f_162 - 1);
		__LIB_0__::func_609(iParam0);
		if (Global_2674786.f_162 > Global_2674786.f_163)
		{
			func_121(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_121(iParam0 + 1, uParam1);
	}
}

void func_123(struct<3> Param0, float fParam1, int iParam2)//Position - 0x4AFD
{
	struct<3> Var0;
	var uVar1;
	Var0 = { Global_2674786[iParam2 /*3*/] };
	uVar1 = Global_2674786.f_121[iParam2];
	Global_2674786[iParam2 /*3*/] = { Param0 };
	Global_2674786.f_121[iParam2] = fParam1;
	if (iParam2 <= Global_2674786.f_162 && iParam2 < 39)
	{
		if (SYSTEM::VMAG(Var0) > 0f)
		{
			func_123(Var0, uVar1, iParam2 + 1);
		}
	}
}

int func_159(struct<3> Param0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)//Position - 0x64C2
{
	int iVar0;
	bool bVar1;
	if (func_213(Param0))
	{
		if (func_162(uParam1, bParam4, 0, 1, 1))
		{
			if (bParam4)
			{
			}
			return 1;
		}
	}
	if (__LIB_18__::func_494(uParam1, bParam4, 1))
	{
		if (bParam4)
		{
		}
		return 1;
	}
	if (bParam5)
	{
		if (__LIB_0__::func_607(*uParam1, 1056964608))
		{
			return 1;
		}
	}
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		if (SYSTEM::VDIST(*uParam1, *(uParam2[iVar0 /*3*/])) < (*uParam3)[iVar0])
		{
			if (bParam4)
			{
				__LIB_1__::func_120(uParam1, *(uParam2[iVar0 /*3*/]), (*uParam3)[iVar0], 1036831949, 0, 0);
			}
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
		return 1;
	}
	return 0;
}

int func_162(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x670C
{
	int iVar0;
	struct<3> Var1;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_2672169[iVar0 /*17*/].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_2672169[iVar0 /*17*/].f_16))
			{
				if (__LIB_6__::func_922(*uParam0, &(Global_2672169[iVar0 /*17*/]), 1008981770, bParam4, 0))
				{
					if (bParam1)
					{
						if (Global_2672169[iVar0 /*17*/].f_12)
						{
							*uParam0 = { Global_2672169[iVar0 /*17*/].f_13 };
						}
						else
						{
							Var1 = { *uParam0 };
							__LIB_7__::func_254(&Var1, &(Global_2672169[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_162(&Var1, 0, 0, 0, 1))
							{
								Var1 = { *uParam0 };
								__LIB_7__::func_254(&Var1, &(Global_2672169[iVar0 /*17*/]), 1036831949, 1, 0);
							}
							*uParam0 = { Var1 };
						}
					}
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_163(var uParam0, var uParam1, var uParam2)//Position - 0x67E7
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	float fVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	float fVar9;
	bool bVar10;
	int iVar11;
	float fVar12;
	struct<3> Var13;
	var uVar14;
	if (Global_2667225.f_1754 > 0)
	{
		iVar1 = 0;
		iVar2 = 0;
		if (!SYSTEM::VMAG(uParam2->f_35) > 0f)
		{
			uParam2->f_35 = { *uParam0 };
		}
		if (uParam2->f_15)
		{
			if (func_159(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam2->f_48)
		{
			if (__LIB_18__::func_371(uParam0, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam0->f_2 < -80f)
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
		Global_2674786.f_162 = 0;
		Global_2674786.f_163 = 0;
		iVar5 = 0;
		while (iVar5 < 40)
		{
			Global_2674786[iVar5 /*3*/] = { 0f, 0f, 0f };
			Global_2674786.f_121[iVar5] = 0f;
			iVar5++;
		}
		if (uParam2->f_30)
		{
			__LIB_6__::func_904(*uParam0);
		}
		else if (uParam2->f_29)
		{
			__LIB_0__::func_623();
		}
		else
		{
			__LIB_0__::func_622();
		}
		iVar1 = 0;
		while (iVar1 < Global_2667225.f_1754)
		{
			iVar2 = Global_2667225.f_2160[iVar1];
			if (iVar2 > -1 && iVar2 < 101)
			{
				Var3 = { Global_2667225.f_1755[iVar2 /*4*/] };
				fVar4 = Global_2667225.f_1755[iVar2 /*4*/].f_3;
				if (SYSTEM::VMAG(Var3) > 0f)
				{
					if ((uParam2->f_57 && SYSTEM::VDIST(Var3, uParam2->f_35) > uParam2->f_4) || uParam2->f_57 == 0)
					{
						if ((uParam2->f_5 > 0f && SYSTEM::VDIST(Var3.f_0, Var3.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f)
						{
							if ((uParam2->f_12 && !__LIB_32__::func_142(Var3, fVar4, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12)
							{
								if (!uParam2->f_15 || !func_159(uParam2->f_35, &Var3, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
								{
									if (uParam2->f_8)
									{
										iVar6 = uParam2->f_31;
										bVar7 = true;
										iVar8 = 1;
										fVar9 = uParam2->f_49;
										if (!uParam2->f_55)
										{
											iVar6 = 0;
											bVar7 = false;
											iVar8 = 0;
											fVar9 = 1f;
										}
										else if (uParam2->f_17)
										{
											iVar6 = 0;
											bVar7 = false;
											iVar8 = 0;
											if (uParam2->f_33 == 1)
											{
												fVar9 = (fVar9 * 0.375f);
											}
										}
										else
										{
											bVar7 = true;
											iVar8 = 1;
											if (uParam2->f_28)
											{
												if (uParam2->f_33 == 1)
												{
													fVar9 = (fVar9 * 0.375f);
												}
											}
										}
										bVar10 = false;
										if (!__LIB_25__::func_72(Var3, fVar4, uParam2->f_34))
										{
											if (uParam2->f_3 > 7f)
											{
												if (__LIB_36__::func_561(Var3, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
												{
													bVar10 = true;
												}
											}
											else if (__LIB_36__::func_561(Var3, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !__LIB_32__::func_230(Var3, fVar4, uParam2->f_34, 1, 1, 0, 0, uParam2->f_58, 0))
											{
												bVar10 = true;
											}
										}
										if (bVar10)
										{
											if ((uParam2->f_29 || uParam2->f_30) || uParam2->f_52)
											{
												fVar12 = 0f;
												if (uParam2->f_52)
												{
													iVar11 = __LIB_32__::func_231(Var3, uParam2->f_54, &fVar12);
												}
												if (!uParam2->f_52 || (uParam2->f_52 && iVar11 <= uParam2->f_53))
												{
													if (uParam2->f_52)
													{
														if (iVar11 < uParam2->f_53)
														{
															iVar5 = 0;
															while (iVar5 < Global_2674786.f_162)
															{
																Global_2674786[iVar5 /*3*/] = { 0f, 0f, 0f };
																Global_2674786.f_121[iVar5] = 0f;
																iVar5++;
															}
															Global_2674786.f_162 = 0;
															uParam2->f_53 = iVar11;
														}
													}
													if (uParam2->f_30)
													{
														if (Global_2674786.f_162 == 0)
														{
															Global_2674786[0 /*3*/] = { Var3 };
															Global_2674786.f_121[0] = fVar4;
														}
														else
														{
															iVar5 = 0;
															while (iVar5 < Global_2674786.f_162 + 1)
															{
																if (iVar5 < 40)
																{
																	if (SYSTEM::VDIST2(Var3, uParam2->f_35) < SYSTEM::VDIST2(Global_2674786[iVar5 /*3*/], uParam2->f_35))
																	{
																		func_123(Var3, fVar4, iVar5);
																		iVar5 = Global_2674786.f_162 + 1;
																	}
																}
																iVar5++;
															}
														}
														Global_2674786.f_162++;
														if (Global_2674786.f_162 >= 5)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar1 = Global_2667225.f_1754;
															}
															else if (Global_2674786.f_162 == 40)
															{
																iVar1 = Global_2667225.f_1754;
															}
														}
													}
													else
													{
														Global_2674786[Global_2674786.f_162 /*3*/] = { Var3 };
														Global_2674786.f_121[Global_2674786.f_162] = fVar4;
														Global_2674786.f_162++;
														if (Global_2674786.f_162 >= 10)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar1 = Global_2667225.f_1754;
															}
															else if (Global_2674786.f_162 == 40)
															{
																iVar1 = Global_2667225.f_1754;
															}
														}
													}
												}
											}
											else
											{
												*uParam0 = { Var3 };
												*uParam1 = fVar4;
												return 1;
											}
										}
									}
									else
									{
										*uParam0 = { Var3 };
										*uParam1 = fVar4;
										return 1;
									}
								}
							}
						}
					}
				}
			}
			iVar1++;
		}
		if (Global_2674786.f_162 > 0)
		{
			if (uParam2->f_30)
			{
				*uParam0 = { Global_2674786[0 /*3*/] };
				*uParam1 = Global_2674786.f_121[0];
				return 1;
			}
			else
			{
				if (Global_2674786.f_163 > 0 && !Global_2674786.f_163 == Global_2674786.f_162)
				{
					func_121(0, uParam2);
				}
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2674786.f_162);
				Var13 = { Global_2674786[0 /*3*/] };
				uVar14 = Global_2674786.f_121[0];
				Global_2674786[0 /*3*/] = { Global_2674786[iVar0 /*3*/] };
				Global_2674786.f_121[0] = Global_2674786.f_121[iVar0];
				Global_2674786[iVar0 /*3*/] = { Var13 };
				Global_2674786.f_121[iVar0] = uVar14;
				*uParam0 = { Global_2674786[0 /*3*/] };
				*uParam1 = Global_2674786.f_121[0];
				return 1;
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 2)
			{
				return 0;
			}
			else if (uParam2->f_59 && Global_2667225.f_1754 > 0)
			{
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2667225.f_1754);
				*uParam0 = { Global_2667225.f_1755[iVar0 /*4*/] };
				*uParam1 = Global_2667225.f_1755[iVar0 /*4*/].f_3;
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_213(struct<3> Param0)//Position - 0x1026B
{
	int iVar0;
	struct<3> Var1;
	if (!Global_2667225.f_515 && !Global_2667225.f_516)
	{
		if (!Global_2667225.f_45.f_317)
		{
			if (!__LIB_7__::func_732(PLAYER::PLAYER_ID(), 1))
			{
				return 1;
			}
			if (!__LIB_7__::func_137(Param0, 1008981770))
			{
				if (!func_162(&Param0, 0, 0, 0, 1))
				{
					return 1;
				}
				else if (func_162(&Param0, 0, 1, 0, 1))
				{
					return 1;
				}
			}
			else
			{
				iVar0 = __LIB_7__::func_136(Param0, 1008981770);
				if (iVar0 > -1)
				{
					Var1 = { __LIB_0__::func_637(&(Global_2667225.f_45[iVar0 /*12*/])) };
					if (!func_162(&Var1, 0, 0, 0, 1))
					{
						if (!func_162(&Param0, 0, 0, 0, 1))
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

bool func_227()//Position - 0x10618
{
	return func_228() > 0;
}

int func_228()//Position - 0x10626
{
	return Local_183.f_122;
}

int func_229()//Position - 0x10633
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < func_24())
	{
		if (Local_183.f_101[iVar0] != -1)
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool func_230(bool bParam0)//Position - 0x10662
{
	if (bParam0)
	{
		return func_228() >= func_231();
	}
	return func_228() >= func_73(-1);
}

int func_231()//Position - 0x10685
{
	return Local_183.f_174;
}

void func_232(bool bParam0)//Position - 0x10692
{
	bool bVar0;
	if (func_45())
	{
		bVar0 = false;
		while (bVar0 < func_233())
		{
			if (BitTest(Local_183.f_134[bParam0], bVar0))
			{
				MISC::CLEAR_BIT(&(Local_183.f_134[bParam0]), bVar0);
			}
			bVar0++;
		}
	}
}

int func_233()//Position - 0x106D4
{
	if (func_74())
	{
		return 15;
	}
	if (func_15())
	{
		return 10;
	}
	return 20;
}

int func_234(bool bParam0)//Position - 0x106F6
{
	if (func_15())
	{
		return 3;
	}
	if (func_43() || func_44())
	{
		return 1;
	}
	if (func_23())
	{
		return (func_231() / func_24());
	}
	if (func_25())
	{
		return (func_73(bParam0) / func_24());
	}
	return (func_231() / func_14());
}

bool func_235()//Position - 0x1074F
{
	return func_16() == 3;
}

void func_236(int iParam0)//Position - 0x1075D
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	Local_183.f_15 = iParam0;
}

int func_237()//Position - 0x10777
{
	return func_238();
}

var func_238()//Position - 0x10783
{
	switch (Local_183.f_17)
	{
		case 0:
			return Global_262145.f_18557 /* Tunable: BIKER_SELL_CONVOY_TIME_LIMIT */;
		case 3:
			return Global_262145.f_18561 /* Tunable: BIKER_SELL_TRASHMASTER_TIME_LIMIT */;
		case 7:
			return Global_262145.f_18563 /* Tunable: BIKER_SELL_PROVEN_TIME_LIMIT */;
		case 4:
			return Global_262145.f_18567 /* Tunable: -605226498 */;
		case 9:
			return Global_262145.f_18570 /* Tunable: BIKER_SELL_BORDER_PATROL_TIME_LIMIT */;
		case 2:
			return Global_262145.f_18594 /* Tunable: BIKER_SELL_HELICOPTER_DROP_TIME_LIMIT */;
		case 5:
			return Global_262145.f_18597 /* Tunable: BIKER_SELL_POSTMAN_TIME_LIMIT */;
		case 1:
			return Global_262145.f_18599 /* Tunable: -2110637751 */;
		case 6:
			return Global_262145.f_18604 /* Tunable: BIKER_SELL_STING_OP_TIME_LIMIT */;
		case 8:
			return Global_262145.f_18608 /* Tunable: BIKER_SELL_BENSON_TIME_LIMIT */;
		case 10:
			return Global_262145.f_18612 /* Tunable: BIKER_SELL_BAG_DROP_TIME_LIMIT */;
		case 11:
			return Global_262145.f_18617 /* Tunable: BIKER_SELL_RACE_TIME_LIMIT */;
		case 12:
			return Global_262145.f_18622 /* Tunable: BIKER_SELL_CLUB_RUN_TIME_LIMIT */;
		default:
	}
	return Global_262145.f_15622 /* Tunable: EXEC_CONTRABAND_SELL_EXPIRY */;
}

int func_239()//Position - 0x1086C
{
	return Local_183.f_15;
}

int func_240(bool bParam0)//Position - 0x10879
{
	switch (func_16())
	{
		case 3:
			switch (Local_183.f_679)
			{
				case 0:
					switch (bParam0)
					{
						case 0:
							return joaat("G_M_M_ChiBoss_01");
						case 1:
							return joaat("G_M_M_ChiGoon_02");
						case 2:
							return joaat("G_M_M_ChiGoon_02");
						default:
					}
					break;
				case 1:
					switch (bParam0)
					{
						case 0:
							return joaat("G_M_M_ArmBoss_01");
						case 1:
							return joaat("G_M_M_ArmGoon_01");
						case 2:
							return joaat("G_M_M_ArmGoon_01");
						default:
					}
					break;
				case 2:
					switch (bParam0)
					{
						case 0:
							return joaat("G_M_M_KorBoss_01");
						case 1:
							return joaat("G_M_Y_Korean_01");
						case 2:
							return joaat("G_M_Y_Korean_01");
						default:
					}
					break;
				case 3:
					switch (bParam0)
					{
						case 0:
							return joaat("G_M_M_MexBoss_01");
						case 1:
							return joaat("G_F_Y_Vagos_01");
						case 2:
							return joaat("G_M_Y_MexGoon_02");
						default:
					}
					break;
				case 4:
					switch (bParam0)
					{
						case 0:
							return joaat("G_M_Y_SalvaBoss_01");
						case 1:
							return joaat("G_M_Y_SalvaGoon_01");
						case 2:
							return joaat("G_M_Y_SalvaGoon_01");
						default:
					}
					break;
				case 5:
					switch (bParam0)
					{
						case 0:
							return joaat("G_M_M_ArmBoss_01");
						case 1:
							return joaat("G_M_M_ArmGoon_01");
						case 2:
							return joaat("G_M_M_ArmGoon_01");
						default:
					}
					break;
				case 6:
					switch (bParam0)
					{
						case 0:
							return joaat("G_M_M_KorBoss_01");
						case 1:
							return joaat("G_M_Y_Korean_01");
						case 2:
							return joaat("G_M_Y_Korean_01");
						default:
					}
					break;
				case 7:
					switch (bParam0)
					{
						case 0:
							return joaat("G_M_M_ChiBoss_01");
						case 1:
							return joaat("G_M_M_ChiGoon_02");
						case 2:
							return joaat("G_M_M_ChiGoon_02");
						default:
					}
					break;
				case 8:
					switch (bParam0)
					{
						case 0:
							return joaat("G_M_Y_Azteca_01");
						case 1:
							return joaat("G_M_Y_Azteca_01");
						case 2:
							return joaat("G_M_Y_Azteca_01");
						default:
					}
					break;
				case 9:
					switch (bParam0)
					{
						case 0:
							return joaat("G_M_M_ChiBoss_01");
						case 1:
							return joaat("G_M_M_ChiGoon_02");
						case 2:
							return joaat("G_M_M_ChiGoon_02");
						default:
					}
					break;
			}
			break;
		case 4:
		case 5:
			return joaat("G_M_Y_StrPunk_01");
		case 7:
			return joaat("A_M_Y_Hippy_01");
		case 6:
			switch (Local_183.f_981)
			{
				case 0:
					return joaat("G_M_Y_StrPunk_01");
				case 1:
					if (Local_183.f_679 == 2)
					{
						return joaat("A_F_Y_Business_04");
					}
					return joaat("A_M_Y_Business_03");
				case 2:
					if (Local_183.f_679 == 2)
					{
						return joaat("G_M_Y_BallaOrig_01");
					}
					return joaat("G_M_M_ArmBoss_01");
				default:
			}
			break;
		case 1:
			if (__LIB_0__::func_160(bParam0) == -1)
			{
				return joaat("A_M_Y_Beach_02");
			}
			return joaat("A_M_Y_BusiCas_01");
	}
	return joaat("G_M_Y_StrPunk_01");
}

int func_242()//Position - 0x10B94
{
	switch (func_16())
	{
		case 4:
			return 5;
		case 1:
			return func_72();
		case 9:
			return 5;
		default:
	}
	return 0;
}

int func_243()//Position - 0x10BC7
{
	switch (func_16())
	{
		case 1:
		case 9:
			return 1;
		default:
	}
	return 0;
}

int func_244(bool bParam0)//Position - 0x10BE9
{
	switch (func_16())
	{
		case 7:
			return joaat("A_M_Y_Hippy_01");
		case 4:
			switch (bParam0)
			{
				case 0:
					return joaat("A_M_M_SouCent_04");
				case 1:
					return joaat("A_M_Y_BeachVesp_01");
				case 2:
					return joaat("A_M_Y_Vinewood_01");
				case 3:
					return joaat("A_F_Y_BevHills_02");
				case 4:
					return joaat("A_F_Y_EastSA_03");
				case 5:
					return joaat("A_M_M_SouCent_04");
				case 6:
					return joaat("A_M_Y_BeachVesp_01");
				case 7:
					return joaat("A_M_Y_Vinewood_01");
				case 8:
					return joaat("A_F_Y_BevHills_02");
				case 9:
					return joaat("A_F_Y_EastSA_03");
				case 10:
					return joaat("A_M_M_SouCent_04");
				case 11:
					return joaat("A_M_Y_BeachVesp_01");
				default:
			}
			break;
		case 12:
			return joaat("G_M_M_ArmGoon_01");
		case 0:
			return Local_183.f_884;
		case 6:
			if (func_245())
			{
				switch (Local_183.f_679)
				{
					case 0:
						switch (bParam0)
						{
							case 0:
								return joaat("A_M_M_Hillbilly_02");
							case 1:
								return joaat("S_M_Y_Construct_01");
							case 2:
								return joaat("S_M_Y_Construct_01");
							case 3:
								return joaat("S_M_Y_Construct_01");
							case 4:
								return joaat("S_M_Y_Construct_01");
							case 5:
								return joaat("S_M_Y_Construct_01");
							case 6:
								return joaat("S_M_Y_Construct_01");
							case 7:
								return joaat("S_M_M_CIASec_01");
							case 8:
								return joaat("S_M_M_CIASec_01");
							default:
						}
						break;
					case 1:
						switch (bParam0)
						{
							case 0:
								return joaat("G_M_Y_FamCA_01");
							case 1:
								return joaat("S_M_M_CIASec_01");
							case 2:
								return joaat("S_M_M_CIASec_01");
							case 3:
								return joaat("S_M_Y_Construct_01");
							case 4:
								return joaat("S_M_Y_Construct_01");
							case 5:
								return joaat("S_M_Y_Construct_01");
							case 6:
								return joaat("S_M_Y_Construct_01");
							case 7:
								return joaat("S_M_Y_Construct_01");
							case 8:
								return joaat("S_M_Y_Construct_01");
							default:
						}
						break;
					case 2:
						switch (bParam0)
						{
							case 0:
								return joaat("A_M_Y_Hippy_01");
							case 1:
								return joaat("S_M_M_CIASec_01");
							case 2:
								return joaat("S_M_M_CIASec_01");
							case 3:
								return joaat("A_F_Y_Runner_01");
							case 4:
								return joaat("A_F_Y_Runner_01");
							case 5:
								return joaat("A_M_Y_Hipster_01");
							case 6:
								return joaat("A_M_Y_Beach_03");
							case 7:
								return joaat("A_M_Y_Runner_02");
							case 8:
								return joaat("A_M_O_Tramp_01");
							default:
						}
						break;
					case 3:
						switch (bParam0)
						{
							case 0:
								return joaat("S_M_Y_Robber_01");
							case 1:
								return joaat("S_M_M_CIASec_01");
							case 2:
								return joaat("S_M_M_CIASec_01");
							case 3:
								return joaat("A_M_Y_Hipster_01");
							case 4:
								return joaat("A_F_Y_Hippie_01");
							case 5:
								return joaat("A_M_Y_Hippy_01");
							case 6:
								return joaat("A_M_O_Tramp_01");
							case 7:
								return joaat("A_F_Y_Runner_01");
							case 8:
								return joaat("A_M_Y_Runner_02");
							default:
						}
						break;
					case 4:
						switch (bParam0)
						{
							case 0:
								return joaat("A_M_M_Hillbilly_02");
							case 1:
								return joaat("A_M_M_Hillbilly_02");
							case 2:
								return joaat("S_M_Y_Construct_01");
							case 3:
								return joaat("A_F_Y_Runner_01");
							case 4:
								return joaat("A_F_Y_Business_04");
							case 5:
								return joaat("A_M_O_Tramp_01");
							case 6:
								return joaat("A_M_O_Tramp_01");
							case 7:
								return joaat("S_M_M_CIASec_01");
							case 8:
								return joaat("S_M_M_CIASec_01");
							default:
						}
						break;
				}
			}
			else
			{
				switch (Local_183.f_679)
				{
					case 0:
						switch (bParam0)
						{
							case 0:
								return joaat("G_M_Y_StrPunk_01");
							case 1:
								return joaat("S_M_M_CIASec_01");
							case 2:
								return joaat("S_M_M_CIASec_01");
							case 3:
								return joaat("A_M_Y_Beach_03");
							case 4:
								return joaat("A_M_Y_Beach_03");
							case 5:
								return joaat("A_M_Y_Business_03");
							case 6:
								return joaat("A_M_Y_Business_03");
							case 7:
								return joaat("A_M_O_Tramp_01");
							case 8:
								return joaat("A_F_Y_Runner_01");
							default:
						}
						break;
					case 1:
						switch (bParam0)
						{
							case 0:
								return joaat("A_M_Y_Hipster_01");
							case 1:
								return joaat("S_M_M_CIASec_01");
							case 2:
								return joaat("S_M_M_CIASec_01");
							case 3:
								return joaat("A_M_Y_Runner_02");
							case 4:
								return joaat("A_M_Y_BusiCas_01");
							case 5:
								return joaat("A_M_Y_BusiCas_01");
							case 6:
								return joaat("A_M_Y_MusclBeac_01");
							case 7:
								return joaat("A_F_Y_Runner_01");
							case 8:
								return joaat("A_M_Y_Runner_02");
							default:
						}
						break;
					case 2:
						switch (bParam0)
						{
							case 0:
								return joaat("G_M_Y_BallaOrig_01");
							case 1:
								return joaat("A_M_Y_BusiCas_01");
							case 2:
								return joaat("A_M_Y_Hipster_01");
							case 3:
								return joaat("A_M_Y_Runner_02");
							case 4:
								return joaat("A_F_Y_Business_04");
							case 5:
								return joaat("S_M_M_CIASec_01");
							case 6:
								return joaat("S_M_M_CIASec_01");
							case 7:
								return joaat("A_M_O_Tramp_01");
							case 8:
								return joaat("A_F_Y_Runner_01");
							default:
						}
						break;
					case 3:
						switch (bParam0)
						{
							case 0:
								return joaat("S_M_Y_Robber_01");
							case 1:
								return joaat("A_M_Y_BusiCas_01");
							case 2:
								return joaat("A_F_Y_Business_04");
							case 3:
								return joaat("A_M_Y_Beach_02");
							case 4:
								return joaat("A_F_Y_Fitness_01");
							case 5:
								return joaat("A_M_Y_Hipster_01");
							case 6:
								return joaat("A_M_Y_Business_03");
							case 7:
								return joaat("S_M_M_CIASec_01");
							case 8:
								return joaat("S_M_M_CIASec_01");
							default:
						}
						break;
					case 4:
						switch (bParam0)
						{
							case 0:
								return joaat("S_M_Y_Robber_01");
							case 1:
								return joaat("A_M_Y_BusiCas_01");
							case 2:
								return joaat("A_F_Y_Business_04");
							case 3:
								return joaat("A_F_Y_Runner_01");
							case 4:
								return joaat("A_M_Y_Runner_02");
							case 5:
								return joaat("A_M_Y_Hipster_01");
							case 6:
								return joaat("A_M_Y_Business_03");
							case 7:
								return joaat("S_M_M_CIASec_01");
							case 8:
								return joaat("S_M_M_CIASec_01");
							default:
						}
						break;
					}
			}
			break;
	}
	return joaat("G_M_M_ArmGoon_01");
}

int func_245()//Position - 0x11297
{
	switch (Local_183.f_0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
			if (Local_183.f_2 == 0)
			{
				return 1;
			}
			break;
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
			if (Local_183.f_2 == 1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_246()//Position - 0x11340
{
	switch (func_16())
	{
		case 12:
		case 0:
			return 4;
		case 6:
			return 9;
		case 7:
			return 1;
		case 4:
			switch (Local_183.f_957)
			{
				case 0:
					return func_22();
				case 1:
					return func_22() * 2;
				case 2:
					return func_22() * 3;
				default:
			}
			break;
	}
	return 0;
}

int func_247()//Position - 0x113B6
{
	switch (func_16())
	{
		case 4:
		case 7:
		case 6:
			return 1;
		default:
	}
	return 0;
}

void func_248(int iParam0)//Position - 0x113DE
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	Local_183.f_14 = iParam0;
}

int func_249()//Position - 0x113F8
{
	bool bVar0;
	if (func_259())
	{
		bVar0 = false;
		while (bVar0 < func_14())
		{
			if (!func_250(bVar0))
			{
				return 0;
			}
			bVar0++;
		}
	}
	return 1;
}

int func_250(bool bParam0)//Position - 0x1142B
{
	int iVar0;
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_674[bParam0]))
	{
		if (__LIB_0__::func_584(func_258()))
		{
			if (NETWORK::CAN_REGISTER_MISSION_OBJECTS(bParam0 + 1))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_59[bParam0]) && func_66(bParam0))
				{
					iVar0 = NETWORK::NET_TO_VEH(Local_183.f_59[bParam0]);
					if (__LIB_1__::func_262(&(Local_183.f_674[bParam0]), func_258(), ENTITY::GET_ENTITY_COORDS(func_13(bParam0), true) + Vector(5f, 0f, 0f), 1, 1, 0, 1, 0, 0, 0))
					{
						if (func_251(iVar0, bParam0))
						{
							ENTITY::SET_ENTITY_LOD_DIST(NETWORK::NET_TO_OBJ(Local_183.f_674[bParam0]), 100);
							ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_183.f_674[bParam0]), true, false);
							ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_OBJ(Local_183.f_674[bParam0]), true);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_258());
							ENTITY::SET_ENTITY_PROOFS(NETWORK::NET_TO_OBJ(Local_183.f_674[bParam0]), true, true, true, true, true, true, true, true);
							return 1;
						}
					}
				}
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_251(int iParam0, bool bParam1)//Position - 0x11524
{
	char* sVar0;
	if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(NETWORK::NET_TO_VEH(Local_183.f_674[bParam1]), iParam0))
	{
		sVar0 = func_255();
		ENTITY::ATTACH_ENTITY_TO_ENTITY(NETWORK::NET_TO_OBJ(Local_183.f_674[bParam1]), iParam0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, sVar0), func_254(), func_252(), true, false, true, false, 2, true, 0);
	}
	else
	{
		return 1;
	}
	return 0;
}

Vector3 func_252()//Position - 0x1157D
{
	if (func_253())
	{
		return 0f, 0f, 0f;
	}
	return 0f, 0f, 90f;
}

bool func_253()//Position - 0x11599
{
	return func_16() == 2;
}

Vector3 func_254()//Position - 0x115A7
{
	switch (func_16())
	{
		case 5:
			return 0f, -1f, -0.3f;
			break;
		case 7:
		case 0:
			if (Local_183.f_957 == 0)
			{
				return 0f, -1f, 0.75f;
			}
			else if (Local_183.f_957 == 1)
			{
				return 0f, -1f, 0f;
			}
			break;
		case 9:
			return 0f, -0.75f, 0.35f;
			break;
		case 2:
			return 0f, -0.05f, 0f;
			break;
	}
	return 0f, 0f, 0f;
}

char* func_255()//Position - 0x1162E
{
	if (func_253())
	{
		return "chassis";
	}
	return "chassis_dummy";
}

int func_258()//Position - 0x11708
{
	switch (func_16())
	{
		case 5:
			return joaat("prop_box_wood01a");
		case 7:
		case 0:
			if (Local_183.f_957 == 0)
			{
				return joaat("prop_box_wood01a");
			}
			else if (Local_183.f_957 == 1)
			{
				return joaat("prop_box_wood04a");
			}
			break;
		case 2:
			return joaat("prop_cardbordbox_03a");
			break;
		case 9:
			return joaat("prop_cs_duffel_01");
			break;
	}
	return 0;
}

int func_259()//Position - 0x11780
{
	switch (func_16())
	{
		case 7:
		case 0:
			if (Local_183.f_957 == 0 || Local_183.f_957 == 1)
			{
				return 1;
			}
			break;
		case 9:
		case 2:
		case 5:
			return 1;
			break;
	}
	return 0;
}

int func_260()//Position - 0x117D7
{
	int iVar0;
	if (!func_321())
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < func_320())
	{
		if (func_261(iVar0))
		{
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < func_320())
	{
		if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_830[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_261(int iParam0)//Position - 0x11835
{
	struct<3> Var0;
	struct<3> Var1;
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_830[iParam0]))
	{
		if (__LIB_0__::func_584(func_319()))
		{
			Var0 = { func_318() };
			Var1 = { func_317() };
			if (NETWORK::CAN_REGISTER_MISSION_PEDS(__LIB_41__::func_246(190, -1, -1, -1, -1, -1) + 1))
			{
				if (__LIB_1__::func_262(&(Local_183.f_830[iParam0]), func_319(), Var0, 1, 1, 0, 1, 0, 0, 0))
				{
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(NETWORK::NET_TO_ENT(Local_183.f_830[iParam0]), Var0, false, false, true);
					ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_ENT(Local_183.f_830[iParam0]), Var1, 2, true);
				}
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

Vector3 func_317()//Position - 0x13816
{
	switch (func_16())
	{
		case 11:
			if (func_245())
			{
				switch (Local_183.f_679)
				{
					case 0:
						return 0f, 0f, -74.2005f;
					case 1:
						return 0f, 0f, 35.4f;
					case 2:
						return 0f, 0f, -124.4004f;
					case 3:
						return 0f, 0f, 0f;
					case 4:
						return 0f, 0f, -120.0002f;
					case 5:
						return -4.023f, -0.652f, 62.577f;
					case 6:
						return -1.792f, -5.5507f, 178.5623f;
					case 7:
						return 0f, 0f, 160.1995f;
					case 9:
						return 5.4894f, 3.5551f, 15.6291f;
					default:
				}
			}
			else
			{
				switch (Local_183.f_679)
				{
					case 1:
						return 0f, 0f, 123.1998f;
					case 2:
						return 0f, 0f, 83.3999f;
					case 4:
						return 3.7412f, 4.9362f, 80.6382f;
					case 5:
						return 0f, 0f, -57.6019f;
					case 6:
						return 0f, 0f, 143.9997f;
					case 7:
						return -1.2379f, 3.8753f, -50.5581f;
					case 8:
						return 0f, 0f, 162.9996f;
					case 9:
						return -3.2998f, 2.0099f, -74.1426f;
					}
				default:
			}
			break;
	}
	return 0f, 0f, 134.7998f;
}

Vector3 func_318()//Position - 0x13993
{
	switch (func_16())
	{
		case 11:
			if (func_245())
			{
				switch (Local_183.f_679)
				{
					case 0:
						return 2569.8992f, 1817.3585f, 23.8469f;
					case 1:
						return -1612.944f, 3177.102f, 29.717f;
					case 2:
						return 2833.9504f, 1629.8049f, 24.0762f;
					case 3:
						return 3776.898f, 4493.0283f, 6.0035f;
					case 4:
						return 1529.4628f, 816.2299f, 76.9559f;
					case 5:
						return -2998.659f, 3454.522f, 8.975f;
					case 6:
						return -1632.4678f, 4725.3516f, 52.4276f;
					case 7:
						return -1916.5605f, 2028.2367f, 140.2642f;
					case 9:
						return 3340.6025f, 5495.48f, 19.5593f;
					default:
				}
			}
			else
			{
				switch (Local_183.f_679)
				{
					case 1:
						return -1549.4108f, 857.0125f, 181.3712f;
					case 2:
						return -3149.0337f, 1174.239f, 20.0117f;
					case 4:
						return -1541.226f, 1384.4067f, 124.7998f;
					case 5:
						return 1332.413f, 1259.2135f, 105.2253f;
					case 6:
						return -511.8456f, 1182.6824f, 324.4567f;
					case 7:
						return 2745.4956f, -695.4677f, 10.1195f;
					case 8:
						return 752.2509f, 1191.3833f, 326.1712f;
					case 9:
						return 1526.1196f, 1598.5894f, 110.9273f;
					}
				default:
			}
			break;
	}
	return -320.6169f, 6306.3438f, 31.4942f;
}

int func_319()//Position - 0x13B74
{
	switch (func_16())
	{
		case 11:
			return joaat("prop_makeup_trail_01_cr");
		default:
	}
	return joaat("prop_conc_blocks01a");
}

int func_320()//Position - 0x13B98
{
	switch (func_16())
	{
		case 11:
			if (func_245())
			{
				if (Local_183.f_679 == 9)
				{
					return 0;
				}
			}
			else if (Local_183.f_679 == 0 || Local_183.f_679 == 3)
			{
				return 0;
			}
			return 1;
		default:
	}
	return 0;
}

int func_321()//Position - 0x13BEA
{
	switch (func_16())
	{
		case 11:
			if (func_245())
			{
				if (Local_183.f_679 == 9)
				{
					return 0;
				}
			}
			else if (Local_183.f_679 == 0 || Local_183.f_679 == 3)
			{
				return 0;
			}
			return 1;
		default:
	}
	return 0;
}

int func_322()//Position - 0x13C3C
{
	bool bVar0;
	int iVar1;
	if (!func_347())
	{
		return 1;
	}
	if (!func_247())
	{
		return 1;
	}
	iVar1 = 1;
	bVar0 = false;
	while (bVar0 < func_246())
	{
		if (!func_323(bVar0, 1))
		{
			iVar1 = 0;
		}
		bVar0++;
	}
	return iVar1;
}

int func_323(bool bParam0, bool bParam1)//Position - 0x13C84
{
	char* sVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	if (__LIB_0__::func_584(func_244(bParam0)))
	{
		if (!func_346(bParam0))
		{
			if (func_345(bParam0))
			{
				iVar2 = func_344(bParam0);
				iVar3 = func_343(bParam0);
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iVar2))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iVar2) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(iVar2) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
					{
						if (__LIB_0__::func_682(iVar2))
						{
							if (__LIB_0__::func_668(&(Local_183.f_707[bParam0 /*8*/]), iVar2, 26, func_244(bParam0), iVar3, 1, 1, 1))
							{
								iVar1 = NETWORK::NET_TO_PED(Local_183.f_707[bParam0 /*8*/]);
								MISC::CLEAR_BIT(&(Local_183.f_885), bParam0);
								Local_183.f_707[bParam0 /*8*/].f_1 = { 0f, 0f, 0f };
								Local_183.f_707[bParam0 /*8*/].f_4 = 0f;
								__LIB_0__::func_579(&(Local_183.f_707[bParam0 /*8*/].f_6));
								Local_183.f_980++;
								if (func_27())
								{
									sVar0 = func_339(bParam0);
									if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
									{
										TASK::TASK_START_SCENARIO_IN_PLACE(iVar1, sVar0, 0, false);
									}
									func_338(iVar1);
								}
								else if (func_15())
								{
									func_337(iVar1, 75);
									func_336(bParam0, 9);
								}
								if (func_17())
								{
									func_335(iVar1, 75);
									PED::SET_PED_CONFIG_FLAG(iVar1, 398, true);
									PED::SET_PED_CAN_PLAY_IN_CAR_IDLES(iVar1, true);
									PED::SET_PED_CAN_BE_TARGETTED(iVar1, false);
									AUDIO::SET_AMBIENT_VOICE_NAME(iVar1, "A_M_Y_Hippy_01_white_FULL_01");
									PED::SET_PED_TREATED_AS_FRIENDLY(iVar1, 1, 0);
								}
							}
						}
					}
				}
			}
			else if (bParam1)
			{
				Var4 = { func_334(bParam0) };
				if (__LIB_1__::func_263(&(Local_183.f_707[bParam0 /*8*/]), 26, func_244(bParam0), Var4, func_333(bParam0), 1, 1, 1))
				{
					iVar1 = NETWORK::NET_TO_PED(Local_183.f_707[bParam0 /*8*/]);
					MISC::CLEAR_BIT(&(Local_183.f_885), bParam0);
					Local_183.f_707[bParam0 /*8*/].f_1 = { 0f, 0f, 0f };
					Local_183.f_707[bParam0 /*8*/].f_4 = 0f;
					__LIB_0__::func_579(&(Local_183.f_707[bParam0 /*8*/].f_6));
					if (func_23() || func_17())
					{
						func_335(iVar1, 75);
						PED::SET_PED_TREATED_AS_FRIENDLY(iVar1, 1, 0);
					}
					else
					{
						func_328(iVar1, 75);
					}
					if (func_27())
					{
						sVar0 = func_339(bParam0);
						if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
						{
							TASK::TASK_START_SCENARIO_IN_PLACE(iVar1, sVar0, 0, false);
						}
						func_338(iVar1);
						PED::SET_PED_COMBAT_MOVEMENT(iVar1, 1);
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(iVar1, Var4, 100f, false, false);
					}
					if (func_23())
					{
						PED::SET_PED_CAN_BE_TARGETTED(iVar1, false);
						func_324(iVar1, func_326(0), 0);
					}
					Local_183.f_980++;
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

void func_324(int iParam0, char* sParam1, int iParam2)//Position - 0x13EFF
{
	if (!func_325(iParam0) || iParam2)
	{
		TASK::TASK_START_SCENARIO_IN_PLACE(iParam0, sParam1, 0, false);
	}
}

int func_325(int iParam0)//Position - 0x13F23
{
	if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("SCRIPT_TASK_START_SCENARIO_IN_PLACE")) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("SCRIPT_TASK_START_SCENARIO_IN_PLACE")) == 0)
	{
		return 1;
	}
	return 0;
}

char* func_326(bool bParam0)//Position - 0x13F53
{
	char* sVar0;
	if (bParam0)
	{
		sVar0 = "WORLD_HUMAN_CHEERING";
	}
	else
	{
		Local_133.f_479 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10000);
		if (__LIB_11__::func_49(Local_133.f_479, 8000, 10000))
		{
			sVar0 = "WORLD_HUMAN_SMOKING";
		}
		else if (__LIB_11__::func_49(Local_133.f_479, 6000, 8000))
		{
			sVar0 = "WORLD_HUMAN_SMOKING_POT";
		}
		else if (__LIB_11__::func_49(Local_133.f_479, 4000, 6000))
		{
			sVar0 = "WORLD_HUMAN_DRINKING";
		}
		else if (__LIB_11__::func_49(Local_133.f_479, 2000, 4000))
		{
			sVar0 = "WORLD_HUMAN_STAND_MOBILE";
		}
		else
		{
			sVar0 = "WORLD_HUMAN_TOURIST_MAP";
		}
	}
	return sVar0;
}

void func_328(int iParam0, int iParam1)//Position - 0x14004
{
	int iVar0;
	int iVar1;
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
	PED::SET_PED_DIES_WHEN_INJURED(iParam0, true);
	iVar0 = __LIB_31__::func_175();
	WEAPON::GIVE_WEAPON_TO_PED(iParam0, iVar0, 9999999, false, true);
	iVar1 = 3;
	PED::SET_PED_COMBAT_MOVEMENT(iParam0, iVar1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 42, false);
	PED::SET_PED_HIGHLY_PERCEPTIVE(iParam0, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 43, true);
	PED::SET_PED_TARGET_LOSS_RESPONSE(iParam0, 1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 146, true);
	PED::SET_PED_ACCURACY(iParam0, iParam1);
	func_329(iParam0);
	PED::SET_PED_KEEP_TASK(iParam0, true);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, Global_1837197);
}

void func_329(int iParam0)//Position - 0x14081
{
	float fVar0;
	int iVar1;
	fVar0 = 1f;
	if (func_330() == 1)
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 24, false);
		PED::SET_PED_COMBAT_ABILITY(iParam0, 0);
		PED::SET_PED_SHOOT_RATE(iParam0, Global_262145.f_18546 /* Tunable: BIKER_SELL_EASY_ENEMY_FIRE_RATE */);
		PED::SET_PED_ACCURACY(iParam0, Global_262145.f_18540 /* Tunable: BIKER_SELL_EASY_ENEMY_ACCURACY */);
		fVar0 = Global_262145.f_18543 /* Tunable: BIKER_SELL_EASY_ENEMY_HEALTH */;
	}
	else if (func_330() == 2)
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 24, false);
		PED::SET_PED_SHOOT_RATE(iParam0, Global_262145.f_18547 /* Tunable: BIKER_SELL_MEDIUM_ENEMY_FIRE_RATE */);
		PED::SET_PED_ACCURACY(iParam0, Global_262145.f_18541 /* Tunable: BIKER_SELL_MEDIUM_ENEMY_ACCURACY */);
		fVar0 = Global_262145.f_18544 /* Tunable: BIKER_SELL_MEDIUM_ENEMY_HEALTH */;
	}
	else if (func_330() == 3)
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 24, false);
		PED::SET_PED_SHOOT_RATE(iParam0, Global_262145.f_18548 /* Tunable: BIKER_SELL_HARD_ENEMY_FIRE_RATE */);
		PED::SET_PED_ACCURACY(iParam0, Global_262145.f_18542 /* Tunable: BIKER_SELL_HARD_ENEMY_ACCURACY */);
		fVar0 = Global_262145.f_18545 /* Tunable: BIKER_SELL_HARD_ENEMY_HEALTH */;
	}
	iVar1 = SYSTEM::ROUND((100f + (100f * fVar0)));
	if (ENTITY::GET_ENTITY_HEALTH(iParam0) > iVar1)
	{
		ENTITY::SET_ENTITY_MAX_HEALTH(iParam0, iVar1);
		ENTITY::SET_ENTITY_HEALTH(iParam0, iVar1, 0);
	}
}

int func_330()//Position - 0x14165
{
	return Local_183.f_16;
}

float func_333(bool bParam0)//Position - 0x141DE
{
	switch (func_16())
	{
		case 4:
			if (func_245())
			{
				switch (bParam0)
				{
					case 0:
						return 351.3999f;
					case 1:
						return 237.7996f;
					case 2:
						return 297.5995f;
					case 3:
						return 160.1991f;
					case 4:
						return 0f;
					case 5:
						return 133.1999f;
					case 6:
						return 183.9992f;
					case 7:
						return 178.7996f;
					case 8:
						return 342.7993f;
					case 9:
						return 236.1996f;
					case 10:
						return 151.7995f;
					case 11:
						return 327.7988f;
					case 12:
						return 179.3996f;
					case 13:
						return 37.2f;
					case 14:
						return 61.5995f;
					case 15:
						return 288.3993f;
					case 16:
						return 47.3989f;
					case 17:
						return 301.3981f;
					case 18:
						return 7.5978f;
					case 19:
						return 257.1972f;
					default:
				}
			}
			else
			{
				switch (bParam0)
				{
					case 0:
						return 142.5997f;
					case 1:
						return 273.9993f;
					case 2:
						return 90.1998f;
					case 3:
						return 153.1995f;
					case 4:
						return 219.9995f;
					case 5:
						return 206.7996f;
					case 6:
						return 151.7992f;
					case 7:
						return 310.7996f;
					case 8:
						return 291.1991f;
					case 9:
						return 354.3999f;
					case 10:
						return 0f;
					case 11:
						return 46.3999f;
					case 12:
						return 295.9995f;
					case 13:
						return 200.1998f;
					case 14:
						return 245.3996f;
					case 15:
						return 37.7992f;
					case 16:
						return 127.1989f;
					case 17:
						return 203.1994f;
					case 18:
						return 250.3991f;
					case 19:
						return 333.9992f;
					}
				default:
			}
			break;
		case 6:
			if (func_245())
			{
				switch (Local_183.f_679)
				{
					case 0:
						switch (bParam0)
						{
							case 0:
								return 284.1993f;
							case 1:
								return 258.1984f;
							case 2:
								return 258.1984f;
							case 3:
								return 10.5978f;
							case 4:
								return 135.9974f;
							case 5:
								return 140.3968f;
							case 6:
								return 242.7967f;
							case 7:
								return 0.1999f;
							case 8:
								return 215.3995f;
							default:
						}
						break;
					case 1:
						switch (bParam0)
						{
							case 0:
								return 50.5989f;
							case 1:
								return 46.2f;
							case 2:
								return 46.2f;
							case 3:
								return 136.5992f;
							case 4:
								return 148.9982f;
							case 5:
								return 280.3973f;
							case 6:
								return 210.9966f;
							case 7:
								return 231.7995f;
							case 8:
								return 225.5995f;
							default:
						}
						break;
					case 2:
						switch (bParam0)
						{
							case 0:
								return 143.7997f;
							case 1:
								return 63.9969f;
							case 2:
								return 164.3986f;
							case 3:
								return 89.5979f;
							case 4:
								return 254.3969f;
							case 5:
								return 0f;
							case 6:
								return 0f;
							case 7:
								return 194.9993f;
							case 8:
								return 57.199f;
							default:
						}
						break;
					case 3:
						switch (bParam0)
						{
							case 0:
								return 151.7966f;
							case 1:
								return 170.7957f;
							case 2:
								return 115.5955f;
							case 3:
								return 301.3933f;
							case 4:
								return 195.9928f;
							case 5:
								return 309.1923f;
							case 6:
								return 236.7919f;
							case 7:
								return 127.391f;
							case 8:
								return 72.1909f;
							default:
						}
						break;
					case 4:
						switch (bParam0)
						{
							case 0:
								return 341.5992f;
							case 1:
								return 54.1994f;
							case 2:
								return 236.7991f;
							case 3:
								return 57.7988f;
							case 4:
								return 177.7986f;
							case 5:
								return 105.1981f;
							case 6:
								return 343.5978f;
							case 7:
								return 343.5978f;
							case 8:
								return 343.5978f;
							default:
						}
						break;
				}
			}
			else
			{
				switch (Local_183.f_679)
				{
					case 0:
						switch (bParam0)
						{
							case 0:
								return 167.9995f;
							case 1:
								return 130.1985f;
							case 2:
								return 310.5978f;
							case 3:
								return 154.5973f;
							case 4:
								return 31.397f;
							case 5:
								return 217.9965f;
							case 6:
								return 352.5964f;
							case 7:
								return 352.5964f;
							case 8:
								return 352.5964f;
							default:
						}
						break;
					case 1:
						switch (bParam0)
						{
							case 0:
								return 316.5994f;
							case 1:
								return 69.7991f;
							case 2:
								return 69.7991f;
							case 3:
								return 76.1979f;
							case 4:
								return 272.1978f;
							case 5:
								return 190.9975f;
							case 6:
								return 186.7976f;
							case 7:
								return 275.997f;
							case 8:
								return 235.9969f;
							default:
						}
						break;
					case 2:
						switch (bParam0)
						{
							case 0:
								return 278.9996f;
							case 1:
								return 237.3995f;
							case 2:
								return 237.3995f;
							case 3:
								return 323.3992f;
							case 4:
								return 285.399f;
							case 5:
								return 215.7987f;
							case 6:
								return 306.3984f;
							case 7:
								return 336.9982f;
							case 8:
								return 78.9976f;
							default:
						}
						break;
					case 3:
						switch (bParam0)
						{
							case 0:
								return 126.9996f;
							case 1:
								return 303.3995f;
							case 2:
								return 303.3995f;
							case 3:
								return 54.5988f;
							case 4:
								return 227.7984f;
							case 5:
								return 157.5983f;
							case 6:
								return 137.7982f;
							case 7:
								return 77.998f;
							case 8:
								return 239.9978f;
							default:
						}
						break;
					case 4:
						switch (bParam0)
						{
							case 0:
								return 154.1996f;
							case 1:
								return 55.3991f;
							case 2:
								return 55.3991f;
							case 3:
								return 343.3988f;
							case 4:
								return 166.3979f;
							case 5:
								return 227.3975f;
							case 6:
								return 66.9971f;
							case 7:
								return 0f;
							case 8:
								return 0f;
							default:
						}
						break;
					}
			}
			break;
	}
	return 0f;
}

Vector3 func_334(bool bParam0)//Position - 0x149DE
{
	switch (func_16())
	{
		case 4:
			if (func_245())
			{
				switch (bParam0)
				{
					case 0:
						return 2854.2065f, 4557.8374f, 46.1526f;
					case 1:
						return 3313.4045f, 5175.109f, 18.6105f;
					case 2:
						return 2705.1687f, 4134.4854f, 42.9269f;
					case 3:
						return 2055.2654f, 3169.848f, 44.1689f;
					case 4:
						return 863.803f, 3675.6f, 31.7954f;
					case 5:
						return 886.2111f, 2853.0051f, 56.0054f;
					case 6:
						return 163.784f, 3118.2854f, 42.431f;
					case 7:
						return 1745.9296f, 6415.2554f, 34.0135f;
					case 8:
						return 749.3223f, 4184.2075f, 40.0928f;
					case 9:
						return 763.2497f, 6460.267f, 30.6682f;
					case 10:
						return -742.2768f, 5553.1113f, 32.56f;
					case 11:
						return -1586.7655f, 5152.2437f, 18.6596f;
					case 12:
						return -134.4378f, 4622.6963f, 124.729f;
					case 13:
						return 165.1716f, 2229.7917f, 89.7487f;
					case 14:
						return 1607.2446f, 6630.7266f, 14.3514f;
					case 15:
						return -208.5306f, 3656.938f, 50.7525f;
					case 16:
						return 1627.2822f, 3517.4294f, 36.0498f;
					case 17:
						return 1261.0618f, 1920.4825f, 77.5035f;
					case 18:
						return -776.8787f, 5395.571f, 32.8563f;
					case 19:
						return 2492.8596f, 2602.9924f, 41.8819f;
					default:
				}
			}
			else
			{
				switch (bParam0)
				{
					case 0:
						return -883.7501f, 267.4142f, 74.0781f;
					case 1:
						return -401.2874f, -130.6327f, 37.5323f;
					case 2:
						return -835.4493f, -1054.3304f, 9.9708f;
					case 3:
						return -1161.0803f, -322.3042f, 36.6192f;
					case 4:
						return -163.9208f, -1456.0813f, 30.6095f;
					case 5:
						return 570.5107f, 122.0472f, 97.0415f;
					case 6:
						return 891.511f, -2206.342f, 29.5095f;
					case 7:
						return -3052.8809f, 104.9589f, 11.3463f;
					case 8:
						return 429.0299f, -1966.2754f, 22.289f;
					case 9:
						return 1285.6918f, -1602.6584f, 53.83f;
					case 10:
						return -1540.0908f, -949.7162f, 10.5661f;
					case 11:
						return -2016.2649f, 559.5696f, 107.3068f;
					case 12:
						return 258.2718f, 894.1854f, 208.1772f;
					case 13:
						return -1040.2798f, -1588.1158f, 4.0416f;
					case 14:
						return -1658.2506f, 242.2557f, 61.391f;
					case 15:
						return -1952.5573f, -279.8821f, 40.9733f;
					case 16:
						return 1694.6156f, -1602.1582f, 111.473f;
					case 17:
						return -430.3886f, 1205.2119f, 324.7585f;
					case 18:
						return 1662.3169f, -69.9203f, 173.1693f;
					case 19:
						return 1428.4083f, -2610.0237f, 47.2267f;
					}
				default:
			}
			break;
		case 6:
			if (func_245())
			{
				switch (Local_183.f_679)
				{
					case 0:
						switch (bParam0)
						{
							case 0:
								return 308.2296f, 2892.979f, 42.5482f;
							case 1:
								return 318.1932f, 2879.9302f, 48.5734f;
							case 2:
								return 291.4029f, 2895.131f, 42.6065f;
							case 3:
								return 316.6138f, 2856.3447f, 42.6214f;
							case 4:
								return 312.3143f, 2896.0623f, 45.4681f;
							case 5:
								return 290.6992f, 2873.8835f, 42.6424f;
							case 6:
								return 305.9541f, 2863.3904f, 43.3918f;
							case 7:
								return 325.973f, 2871.8982f, 43.8916f;
							case 8:
								return 274.017f, 2878.4846f, 44.0444f;
							default:
						}
						break;
					case 1:
						switch (bParam0)
						{
							case 0:
								return 2348.9114f, 3033.4697f, 47.1738f;
							case 1:
								return 2388.4658f, 3038.9148f, 48.6456f;
							case 2:
								return 2366.0083f, 3078.644f, 48.648f;
							case 3:
								return 2335.9202f, 3049.6924f, 47.1517f;
							case 4:
								return 2354.3887f, 3054.3806f, 47.1526f;
							case 5:
								return 2335.3828f, 3033.607f, 47.1513f;
							case 6:
								return 2371.4988f, 3039.9285f, 47.1524f;
							case 7:
								return 2373.6116f, 3051.792f, 47.1526f;
							case 8:
								return 2345.9067f, 3068.643f, 47.1521f;
							default:
						}
						break;
					case 2:
						switch (bParam0)
						{
							case 0:
								return 281.6046f, 6782.363f, 14.6965f;
							case 1:
								return 255.1581f, 6841.423f, 16.9099f;
							case 2:
								return 243.2855f, 6761.583f, 15.6422f;
							case 3:
								return 313.0555f, 6788.7456f, 16.1106f;
							case 4:
								return 276.1815f, 6815.7856f, 14.7039f;
							case 5:
								return 304.0913f, 6740.887f, 14.6805f;
							case 6:
								return 331.0639f, 6779.333f, 16.3542f;
							case 7:
								return 250.6801f, 6767.1475f, 15.0135f;
							case 8:
								return 275.9807f, 6789.4604f, 14.6957f;
							default:
						}
						break;
					case 3:
						switch (bParam0)
						{
							case 0:
								return 2699.279f, 4314.33f, 44.852f;
							case 1:
								return 2693.62f, 4362.4614f, 46.7702f;
							case 2:
								return 2717.853f, 4295.437f, 47.7755f;
							case 3:
								return 2701.4197f, 4327.9946f, 44.852f;
							case 4:
								return 2693.9263f, 4324.9746f, 44.8519f;
							case 5:
								return 2691.9392f, 4290.637f, 45.0544f;
							case 6:
								return 2708.4165f, 4308.5405f, 45.3998f;
							case 7:
								return 2680.529f, 4311.7104f, 44.8519f;
							case 8:
								return 2679.5103f, 4312.198f, 44.852f;
							default:
						}
						break;
					case 4:
						switch (bParam0)
						{
							case 0:
								return 1695.3761f, 6430.466f, 31.6781f;
							case 1:
								return 1692.5193f, 6435.478f, 31.7642f;
							case 2:
								return 1682.1309f, 6425.435f, 31.1307f;
							case 3:
								return 1702.405f, 6426.481f, 31.6374f;
							case 4:
								return 1710.1195f, 6423.5386f, 31.7638f;
							case 5:
								return 1692.5096f, 6404.768f, 30.801f;
							case 6:
								return 1680.1201f, 6436.7344f, 30.9586f;
							case 7:
								return 1650.8694f, 6419.119f, 29.1215f;
							case 8:
								return 1713.9735f, 6424.3354f, 33.263f;
							default:
						}
						break;
				}
			}
			else
			{
				switch (Local_183.f_679)
				{
					case 0:
						switch (bParam0)
						{
							case 0:
								return 1125.7975f, -645.2601f, 55.7337f;
							case 1:
								return 1171.2786f, -646.054f, 62.6715f;
							case 2:
								return 1165.5559f, -618.1664f, 63.871f;
							case 3:
								return 1136.13f, -661.4698f, 56.0826f;
							case 4:
								return 1136.8542f, -632.9972f, 56.3743f;
							case 5:
								return 1123.2476f, -661.5654f, 55.7665f;
							case 6:
								return 1118.4984f, -632.6472f, 55.8085f;
							case 7:
								return 1146.0476f, -635.6122f, 55.7223f;
							case 8:
								return 1146.9315f, -652.1199f, 55.7868f;
							default:
						}
						break;
					case 1:
						switch (bParam0)
						{
							case 0:
								return -813.8159f, 47.817f, 47.5815f;
							case 1:
								return -792.0341f, 36.543f, 48.1447f;
							case 2:
								return -812.02f, 16.9962f, 44.2169f;
							case 3:
								return -805.6351f, 63.7177f, 49.7905f;
							case 4:
								return -809.7114f, 36.6121f, 46.8549f;
							case 5:
								return -834.7526f, 43.4699f, 46.8769f;
							case 6:
								return -829.7305f, 68.9156f, 51.3815f;
							case 7:
								return -829.5859f, 56.8535f, 49.6704f;
							case 8:
								return -828.4629f, 57.7785f, 49.9247f;
							default:
						}
						break;
					case 2:
						switch (bParam0)
						{
							case 0:
								return -95.5806f, -418.2466f, 35.3348f;
							case 1:
								return -121.0947f, -444.8833f, 34.9121f;
							case 2:
								return -94.0296f, -391.0595f, 35.981f;
							case 3:
								return -69.851f, -426.6504f, 36.7117f;
							case 4:
								return -122.0492f, -444.4511f, 34.9121f;
							case 5:
								return -43.4647f, -438.7908f, 40.7075f;
							case 6:
								return -156.7404f, -423.1685f, 34.079f;
							case 7:
								return -132.7098f, -412.4948f, 33.2462f;
							case 8:
								return -94.2203f, -447.643f, 34.9121f;
							default:
						}
						break;
					case 3:
						switch (bParam0)
						{
							case 0:
								return -1313.7642f, -765.1419f, 19.2445f;
							case 1:
								return -1333.6787f, -742.8681f, 23.1737f;
							case 2:
								return -1300.9862f, -778.6068f, 18.4695f;
							case 3:
								return -1333.0636f, -787.5348f, 18.8938f;
							case 4:
								return -1332.2869f, -786.1912f, 18.9137f;
							case 5:
								return -1309.6951f, -795.2505f, 16.5935f;
							case 6:
								return -1340.2997f, -759.342f, 19.3298f;
							case 7:
								return -1282.2538f, -805.6615f, 17.68f;
							case 8:
								return -1343.5845f, -754.9631f, 22.8771f;
							default:
						}
						break;
					case 4:
						switch (bParam0)
						{
							case 0:
								return -425.7827f, 1122.5511f, 324.8541f;
							case 1:
								return -420.6537f, 1148.0938f, 324.8583f;
							case 2:
								return -421.566f, 1148.923f, 324.8605f;
							case 3:
								return -408.7002f, 1130.4884f, 324.9044f;
							case 4:
								return -441.4777f, 1147.0471f, 324.8543f;
							case 5:
								return -447.1815f, 1130.182f, 324.8559f;
							case 6:
								return -426.4003f, 1110.2483f, 326.6821f;
							case 7:
								return -385.3321f, 1172.6654f, 325.897f;
							case 8:
								return -423.4293f, 1180.3184f, 325.9146f;
							default:
						}
						break;
					}
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_335(int iParam0, int iParam1)//Position - 0x1570C
{
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
	PED::SET_PED_DIES_WHEN_INJURED(iParam0, true);
	PED::SET_PED_KEEP_TASK(iParam0, true);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, Global_1837194);
}

void func_336(bool bParam0, int iParam1)//Position - 0x15733
{
	Local_183.f_707[bParam0 /*8*/].f_5 = iParam1;
}

void func_337(int iParam0, int iParam1)//Position - 0x15749
{
	int iVar0;
	PED::SET_PED_DIES_WHEN_INJURED(iParam0, true);
	iVar0 = __LIB_31__::func_175();
	WEAPON::GIVE_WEAPON_TO_PED(iParam0, iVar0, 9999999, true, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 42, false);
	PED::SET_PED_HIGHLY_PERCEPTIVE(iParam0, true);
	PED::SET_PED_TARGET_LOSS_RESPONSE(iParam0, 1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 146, true);
	PED::SET_PED_ACCURACY(iParam0, iParam1);
	func_329(iParam0);
	PED::SET_PED_KEEP_TASK(iParam0, true);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, Global_1837197);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 2, true);
	if (func_15() || func_18())
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
		PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iParam0, 1);
	}
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 53, true);
	if (func_15())
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 2, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 3, false);
	}
}

void func_338(int iParam0)//Position - 0x157F2
{
	PED::SET_PED_CONFIG_FLAG(iParam0, 330, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 272, true);
	PED::SET_PED_AS_COP(iParam0, false);
	PED::SET_PED_TARGET_LOSS_RESPONSE(iParam0, 2);
	PED::SET_PED_CONFIG_FLAG(iParam0, 324, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 249, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 365, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 396, true);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, Global_1836877[1 /*94*/][1 /*31*/][1 /*10*/][1 /*3*/][1]);
}

char* func_339(bool bParam0)//Position - 0x1585C
{
	switch (func_16())
	{
		case 6:
			if (func_245())
			{
				switch (Local_183.f_679)
				{
					case 0:
						switch (bParam0)
						{
							case 0:
								return "WORLD_HUMAN_SMOKING_POT";
							case 1:
								return "";
							case 2:
								return "";
							case 3:
								return "WORLD_HUMAN_STAND_MOBILE";
							case 4:
								return "WORLD_HUMAN_PICNIC";
							case 5:
								return "WORLD_HUMAN_BINOCULARS";
							case 6:
								return "WORLD_HUMAN_SMOKING";
							case 7:
								return "WORLD_HUMAN_BUM_STANDING";
							case 8:
								return "WORLD_HUMAN_JOG_STANDING";
							default:
						}
						break;
					case 1:
						switch (bParam0)
						{
							case 0:
								return "WORLD_HUMAN_SMOKING_POT";
							case 1:
								return "";
							case 2:
								return "";
							case 3:
								return "WORLD_HUMAN_PICNIC";
							case 4:
								return "WORLD_HUMAN_SMOKING";
							case 5:
								return "WORLD_HUMAN_STAND_MOBILE";
							case 6:
								return "WORLD_HUMAN_YOGA";
							case 7:
								return "WORLD_HUMAN_SUNBATHE";
							case 8:
								return "WORLD_HUMAN_SUNBATHE";
							default:
						}
						break;
					case 2:
						switch (bParam0)
						{
							case 0:
								return "WORLD_HUMAN_SMOKING_POT";
							case 1:
								return "WORLD_HUMAN_HANG_OUT_STREET";
							case 2:
								return "WORLD_HUMAN_SMOKING";
							case 3:
								return "WORLD_HUMAN_PICNIC";
							case 4:
								return "WORLD_HUMAN_HANG_OUT_STREET";
							case 5:
								return "";
							case 6:
								return "";
							case 7:
								return "WORLD_HUMAN_BUM_FREEWAY";
							case 8:
								return "WORLD_HUMAN_JOG_STANDING";
							default:
						}
						break;
					case 3:
						switch (bParam0)
						{
							case 0:
								return "WORLD_HUMAN_SMOKING_POT";
							case 1:
								return "WORLD_HUMAN_SMOKING";
							case 2:
								return "WORLD_HUMAN_STAND_MOBILE";
							case 3:
								return "WORLD_HUMAN_HANG_OUT_STREET";
							case 4:
								return "WORLD_HUMAN_DRINKING";
							case 5:
								return "WORLD_HUMAN_STAND_MOBILE";
							case 6:
								return "WORLD_HUMAN_STAND_MOBILE";
							case 7:
								return "";
							case 8:
								return "";
							default:
						}
						break;
					case 4:
						switch (bParam0)
						{
							case 0:
								return "WORLD_HUMAN_SMOKING_POT";
							case 1:
								return "WORLD_HUMAN_HANG_OUT_STREET";
							case 2:
								return "WORLD_HUMAN_HANG_OUT_STREET";
							case 3:
								return "WORLD_HUMAN_PICNIC";
							case 4:
								return "WORLD_HUMAN_JOG_STANDING";
							case 5:
								return "WORLD_HUMAN_BINOCULARS";
							case 6:
								return "WORLD_HUMAN_SMOKING";
							case 7:
								return "";
							case 8:
								return "";
							default:
						}
						break;
				}
			}
			else
			{
				switch (Local_183.f_679)
				{
					case 0:
						switch (bParam0)
						{
							case 0:
								return "WORLD_HUMAN_SMOKING_POT";
							case 1:
								return "WORLD_HUMAN_CLIPBOARD";
							case 2:
								return "WORLD_HUMAN_WINDOW_SHOP_BROWSE	";
							case 3:
								return "WORLD_HUMAN_CLIPBOARD";
							case 4:
								return "WORLD_HUMAN_HANG_OUT_STREET";
							case 5:
								return "WORLD_HUMAN_SMOKING";
							case 6:
								return "WORLD_HUMAN_STAND_MOBILE";
							case 7:
								return "";
							case 8:
								return "";
							default:
						}
						break;
					case 1:
						switch (bParam0)
						{
							case 0:
								return "WORLD_HUMAN_SMOKING_POT";
							case 1:
								return "";
							case 2:
								return "";
							case 3:
								return "WORLD_HUMAN_CLIPBOARD";
							case 4:
								return "WORLD_HUMAN_WELDING";
							case 5:
								return "WORLD_HUMAN_CLIPBOARD";
							case 6:
								return "WORLD_HUMAN_WELDING";
							case 7:
								return "WORLD_HUMAN_SMOKING";
							case 8:
								return "WORLD_HUMAN_SMOKING";
							default:
						}
						break;
					case 2:
						switch (bParam0)
						{
							case 0:
								return "WORLD_HUMAN_SMOKING_POT";
							case 1:
								return "";
							case 2:
								return "";
							case 3:
								return "WORLD_HUMAN_BINOCULARS";
							case 4:
								return "WORLD_HUMAN_JOG_STANDING";
							case 5:
								return "WORLD_HUMAN_STAND_MOBILE";
							case 6:
								return "WORLD_HUMAN_PICNIC";
							case 7:
								return "WORLD_HUMAN_JOG_STANDING";
							case 8:
								return "WORLD_HUMAN_STUPOR";
							default:
						}
						break;
					case 3:
						switch (bParam0)
						{
							case 0:
								return "WORLD_HUMAN_SMOKING_POT";
							case 1:
								return "";
							case 2:
								return "";
							case 3:
								return "WORLD_HUMAN_SMOKING";
							case 4:
								return "WORLD_HUMAN_DRINKING";
							case 5:
								return "WORLD_HUMAN_PICNIC";
							case 6:
								return "WORLD_HUMAN_WINDOW_SHOP_BROWSE";
							case 7:
								return "WORLD_HUMAN_HANG_OUT_STREET";
							case 8:
								return "WORLD_HUMAN_HANG_OUT_STREET";
							default:
						}
						break;
					case 4:
						switch (bParam0)
						{
							case 0:
								return "WORLD_HUMAN_SMOKING_POT";
							case 1:
								return "WORLD_HUMAN_SMOKING";
							case 2:
								return "WORLD_HUMAN_HAMMERING";
							case 3:
								return "WORLD_HUMAN_WINDOW_SHOP_BROWSE";
							case 4:
								return "WORLD_HUMAN_DRINKING";
							case 5:
								return "WORLD_HUMAN_BUM_FREEWAY";
							case 6:
								return "PROP_HUMAN_BUM_BIN";
							case 7:
								return "";
							case 8:
								return "";
							default:
						}
						break;
					}
			}
			break;
	}
	return "WORLD_HUMAN_GUARD_STAND";
}

int func_343(bool bParam0)//Position - 0x15E33
{
	switch (func_16())
	{
		case 12:
		case 0:
			switch (bParam0)
			{
				case 0:
				case 2:
					return -1;
				case 1:
				case 3:
					return 0;
				default:
			}
			break;
		case 7:
			return 0;
		case 6:
			if (func_245())
			{
				switch (Local_183.f_679)
				{
					case 1:
					case 2:
					case 3:
						if (bParam0 == 1)
						{
							return -1;
						}
						return 0;
					case 0:
					case 4:
						if (bParam0 == 7)
						{
							return -1;
						}
						return 0;
					default:
				}
			}
			else
			{
				switch (Local_183.f_679)
				{
					case 0:
					case 1:
						if (bParam0 == 1)
						{
							return -1;
						}
						return 0;
					case 2:
						if (bParam0 == 5)
						{
							return -1;
						}
						return 0;
					case 3:
					case 4:
						if (bParam0 == 7)
						{
							return -1;
						}
						return 0;
					}
				default:
			}
			break;
	}
	return -1;
}

int func_344(bool bParam0)//Position - 0x15F30
{
	switch (func_16())
	{
		case 12:
		case 0:
			switch (bParam0)
			{
				case 0:
				case 1:
					return Local_183.f_837[0 /*6*/];
				case 2:
				case 3:
					return Local_183.f_837[1 /*6*/];
				default:
			}
			break;
		case 7:
			return Local_183.f_59[0];
		case 6:
			return Local_183.f_837[0 /*6*/];
	}
	return -1;
}

int func_345(bool bParam0)//Position - 0x15FAB
{
	switch (func_16())
	{
		case 7:
		case 12:
		case 0:
			return 1;
		case 6:
			if (func_245())
			{
				switch (Local_183.f_679)
				{
					case 1:
					case 2:
					case 3:
						if (bParam0 == 1 || bParam0 == 2)
						{
							return 1;
						}
						return 0;
					case 0:
					case 4:
						if (bParam0 == 7 || bParam0 == 8)
						{
							return 1;
						}
						return 0;
					default:
				}
			}
			else
			{
				switch (Local_183.f_679)
				{
					case 0:
					case 1:
						if (bParam0 == 1 || bParam0 == 2)
						{
							return 1;
						}
						return 0;
					case 2:
						if (bParam0 == 5 || bParam0 == 6)
						{
							return 1;
						}
						return 0;
					case 3:
					case 4:
						if (bParam0 == 7 || bParam0 == 8)
						{
							return 1;
						}
						return 0;
					}
				default:
			}
			break;
	}
	return 0;
}

bool func_346(bool bParam0)//Position - 0x160B7
{
	return NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_707[bParam0 /*8*/]);
}

int func_347()//Position - 0x160CD
{
	switch (func_16())
	{
		case 6:
		case 12:
		case 4:
		case 7:
		case 0:
			return 1;
		default:
	}
	return 0;
}

bool func_348()//Position - 0x16101
{
	int iVar0;
	bool bVar1;
	if (!func_359())
	{
		return 1;
	}
	bVar1 = true;
	iVar0 = 0;
	while (iVar0 < func_358())
	{
		if (!func_350(iVar0))
		{
			bVar1 = false;
		}
		iVar0++;
	}
	if (bVar1)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_349());
	}
	return bVar1;
}

int func_349()//Position - 0x16149
{
	switch (func_16())
	{
		case 12:
			return joaat("huntley");
		case 0:
			return joaat("sanchez");
		case 6:
			return joaat("police4");
		default:
	}
	return 0;
}

int func_350(int iParam0)//Position - 0x16185
{
	struct<3> Var0;
	float fVar1;
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_837[iParam0 /*6*/]))
	{
		if (__LIB_0__::func_584(func_349()))
		{
			Var0 = { func_357(iParam0) };
			fVar1 = func_356(iParam0);
			if (__LIB_18__::func_220(&(Local_183.f_837[iParam0 /*6*/]), func_349(), Var0, fVar1, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
			{
				func_352(iParam0);
				__LIB_1__::func_119(NETWORK::NET_TO_VEH(Local_183.f_837[iParam0 /*6*/]));
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

void func_352(int iParam0)//Position - 0x1621F
{
	int iVar0;
	iVar0 = NETWORK::NET_TO_VEH(Local_183.f_837[iParam0 /*6*/]);
	if (!VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(iVar0)))
	{
		VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iVar0, true);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iVar0, false);
	}
	VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(iVar0, true);
	VEHICLE::SET_VEHICLE_ENGINE_ON(iVar0, true, true, false);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_NON_SCRIPT_PLAYERS(iVar0, true);
	VEHICLE::SET_DONT_ALLOW_PLAYER_TO_ENTER_VEHICLE_IF_LOCKED_FOR_PLAYER(iVar0, true);
}

float func_356(int iParam0)//Position - 0x164EB
{
	if (func_245())
	{
		switch (Local_183.f_679)
		{
			case 0:
				switch (iParam0)
				{
					case 0:
						return 160.7998f;
					case 1:
						return 301.9992f;
					default:
				}
				break;
			case 1:
				switch (iParam0)
				{
					case 0:
						return 107.7992f;
					case 1:
						return 69.7991f;
					default:
				}
				break;
			case 2:
				switch (iParam0)
				{
					case 0:
						return 250.9996f;
					case 1:
						return 237.3995f;
					default:
				}
				break;
			case 3:
				switch (iParam0)
				{
					case 0:
						return 100.5997f;
					case 1:
						return 303.3995f;
					default:
				}
				break;
			case 4:
				switch (iParam0)
				{
					case 0:
						return 70.9999f;
					case 1:
						return 154.7995f;
					default:
				}
				break;
		}
	}
	else
	{
		switch (Local_183.f_679)
		{
			case 0:
				switch (iParam0)
				{
					case 0:
						return 190.599f;
					case 1:
						return 190.599f;
					default:
				}
				break;
			case 1:
				switch (iParam0)
				{
					case 0:
						return 74.1999f;
					case 1:
						return 300.9994f;
					default:
				}
				break;
			case 2:
				switch (iParam0)
				{
					case 0:
						return 342.8f;
					case 1:
						return 158.9997f;
					default:
				}
				break;
			case 3:
				switch (iParam0)
				{
					case 0:
						return 38.5987f;
					case 1:
						return 128.5969f;
					default:
				}
				break;
			case 4:
				switch (iParam0)
				{
					case 0:
						return 72.5998f;
					case 1:
						return 220.1996f;
					default:
				}
				break;
			}
	}
	return 0f;
}

Vector3 func_357(int iParam0)//Position - 0x166CC
{
	if (func_245())
	{
		switch (Local_183.f_679)
		{
			case 0:
				switch (iParam0)
				{
					case 0:
						return 326.3047f, 2872.0027f, 42.4538f;
					case 1:
						return 273.864f, 2878.1736f, 42.6107f;
					default:
				}
				break;
			case 1:
				switch (iParam0)
				{
					case 0:
						return 2365.3845f, 3078.5051f, 47.1581f;
					case 1:
						return 2388.2717f, 3039.5408f, 47.1529f;
					default:
				}
				break;
			case 2:
				switch (iParam0)
				{
					case 0:
						return 243.1329f, 6760.87f, 14.3175f;
					case 1:
						return 254.9448f, 6840.6006f, 15.7468f;
					default:
				}
				break;
			case 3:
				switch (iParam0)
				{
					case 0:
						return 2718.6184f, 4295.328f, 46.6625f;
					case 1:
						return 2695.139f, 4363.16f, 45.4893f;
					default:
				}
				break;
			case 4:
				switch (iParam0)
				{
					case 0:
						return 1650.2755f, 6420.025f, 27.6565f;
					case 1:
						return 1713.893f, 6424.4106f, 31.776f;
					default:
				}
				break;
		}
	}
	else
	{
		switch (Local_183.f_679)
		{
			case 0:
				switch (iParam0)
				{
					case 0:
						return 1172.109f, -646.3614f, 61.222f;
					case 1:
						return 1166.181f, -618.4933f, 62.4457f;
					default:
				}
				break;
			case 1:
				switch (iParam0)
				{
					case 0:
						return -791.1071f, 36.0586f, 47.0641f;
					case 1:
						return -812.9344f, 16.3316f, 43.1182f;
					default:
				}
				break;
			case 2:
				switch (iParam0)
				{
					case 0:
						return -157.1936f, -423.6889f, 32.8548f;
					case 1:
						return -43.208f, -440.1863f, 39.3939f;
					default:
				}
				break;
			case 3:
				switch (iParam0)
				{
					case 0:
						return -1343.5446f, -755.2953f, 21.4565f;
					case 1:
						return -1281.9713f, -804.7698f, 16.5323f;
					default:
				}
				break;
			case 4:
				switch (iParam0)
				{
					case 0:
						return -385.0421f, 1171.759f, 324.7181f;
					case 1:
						return -424.3064f, 1180.2855f, 324.6416f;
					default:
				}
				break;
			}
	}
	return 1713.893f, 6424.4106f, 31.776f;
}

int func_358()//Position - 0x16983
{
	switch (func_16())
	{
		case 6:
			return 2;
		default:
	}
	return 0;
}

bool func_359()//Position - 0x1699F
{
	return func_27();
}

int func_360()//Position - 0x169AB
{
	int iVar0;
	int iVar1;
	if (!func_243())
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < func_242())
	{
		if (func_361(iVar0))
		{
		}
		iVar0++;
	}
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < func_242())
	{
		if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_80[iVar0]))
		{
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

int func_361(int iParam0)//Position - 0x16A0B
{
	struct<3> Var0;
	float fVar1;
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_80[iParam0]))
	{
		if (__LIB_0__::func_584(func_240(iParam0)))
		{
			Var0 = { func_411() };
			fVar1 = func_410();
			if (NETWORK::CAN_REGISTER_MISSION_PEDS(__LIB_35__::func_935(190, -1, -1, -1) + 1))
			{
				if (func_368())
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(func_365(iParam0)))
					{
						if (__LIB_0__::func_668(&(Local_183.f_80[iParam0]), func_365(iParam0), 26, func_240(iParam0), __LIB_0__::func_160(iParam0), 1, 1, 1))
						{
							ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_PED(Local_183.f_80[iParam0]), true);
							ENTITY::SET_ENTITY_CAN_BE_DAMAGED(NETWORK::NET_TO_PED(Local_183.f_80[iParam0]), false);
							PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_183.f_80[iParam0]), 3, false);
							PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_183.f_80[iParam0]), 229, true);
							PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_183.f_80[iParam0]), 128, false);
							PED::SET_PED_CAN_BE_DRAGGED_OUT(NETWORK::NET_TO_PED(Local_183.f_80[iParam0]), false);
							PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_183.f_80[iParam0]), 398, true);
							PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_183.f_80[iParam0]), 512, true);
							PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_183.f_80[iParam0]), Global_1837194);
							PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_183.f_80[iParam0]), true);
							AUDIO::STOP_PED_SPEAKING(NETWORK::NET_TO_PED(Local_183.f_80[iParam0]), true);
							TASK::TASK_STAND_STILL(NETWORK::NET_TO_PED(Local_183.f_80[iParam0]), -1);
							Local_183.f_979++;
						}
					}
				}
				else if (__LIB_0__::func_114())
				{
					if (func_362())
					{
						Local_183.f_979++;
					}
				}
				else if (__LIB_1__::func_263(&(Local_183.f_80[iParam0]), 26, func_240(iParam0), Var0, fVar1, 1, 1, 1))
				{
					ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_PED(Local_183.f_80[iParam0]), true);
					ENTITY::SET_ENTITY_CAN_BE_DAMAGED(NETWORK::NET_TO_PED(Local_183.f_80[iParam0]), false);
					PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_183.f_80[iParam0]), true);
					AUDIO::STOP_PED_SPEAKING(NETWORK::NET_TO_PED(Local_183.f_80[iParam0]), true);
					Local_183.f_979++;
				}
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_362()//Position - 0x16C21
{
	bool bVar0;
	struct<3> Var1;
	float fVar2;
	int iVar3;
	int iVar4;
	bVar0 = false;
	while (bVar0 < func_14())
	{
		Var1 = { func_363(bVar0, 0, Local_183.f_110, Local_183.f_957, 0) };
		if (!ENTITY::DOES_ENTITY_EXIST(NETWORK::NET_TO_ENT(Local_183.f_80[bVar0])))
		{
			if (__LIB_1__::func_263(&(Local_183.f_80[bVar0]), 26, func_240(bVar0), Var1, fVar2, 1, 1, 1))
			{
				iVar4 = NETWORK::NET_TO_PED(Local_183.f_80[bVar0]);
				ENTITY::SET_ENTITY_INVINCIBLE(iVar4, true);
				ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iVar4, false);
				PED::SET_PED_KEEP_TASK(iVar4, true);
				AUDIO::STOP_PED_SPEAKING(iVar4, true);
				PED::SET_PED_CONFIG_FLAG(iVar4, 294, true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar4, true);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(NETWORK::NET_TO_ENT(Local_183.f_80[bVar0]), func_67(bVar0), ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(func_13(bVar0), func_255()), 0f, -1.4f, 0.55f, 0f, 0f, -90f, false, false, false, false, 2, true, 0);
				func_335(iVar4, 75);
				PED::SET_PED_TREATED_AS_FRIENDLY(iVar4, 1, 0);
			}
		}
		else
		{
			iVar3++;
		}
		bVar0++;
	}
	return iVar3 == func_14();
}

Vector3 func_363(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4)//Position - 0x16D25
{
	int iVar0;
	iVar0 = uParam2;
	if (iParam4 && iParam3 == 2)
	{
		switch (iVar0)
		{
			case 7:
				return 149.3549f, 152.8602f, 104.7787f;
			case 10:
				return 313.4909f, -822.9637f, 28.1564f;
			case 8:
				return -1520.9794f, -393.1905f, 40.1197f;
			case 9:
				return -1201.3682f, -1372.7651f, 3.2609f;
			case 6:
				return 1436.7166f, -1677.0326f, 63.5393f;
			case 17:
				return 145.4915f, -2505.5286f, 5f;
			case 20:
				return -326.8011f, -2741.1477f, 6.0907f;
			case 16:
				return 1153.6779f, -3093.0579f, 5.8698f;
			case 19:
				return 646.6414f, -2652.5857f, 6.155f;
			case 18:
				return -235.4306f, -2563.1533f, 6.0509f;
			case 12:
				return 2859.976f, 4411.673f, 48.0934f;
			case 15:
				return 1659.0615f, 4804.715f, 42.1896f;
			case 13:
				return 365.8367f, 3589.2344f, 32.3738f;
			case 14:
				return 646.2524f, 2805.8127f, 40.7804f;
			case 11:
				return 210.1556f, 2439.0344f, 58.0282f;
			case 2:
				return 422.4615f, 6503.9155f, 26.7609f;
			case 5:
				return -168.0869f, 6292.8657f, 30.4893f;
			case 3:
				return 95.4456f, 6490.3813f, 30.2949f;
			case 4:
				return -435.375f, 6119.4976f, 30.1965f;
			case 1:
				return 74.3165f, 6316.3657f, 30.2273f;
			default:
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				switch (iVar0)
				{
					case 7:
						switch (iParam0)
						{
							case 0:
								return 144.7052f, 174.0004f, 104.7989f;
							case 1:
								return 156.2407f, 172.1833f, 104.8413f;
							case 2:
								return 152.3495f, 162.122f, 104.5681f;
							case 3:
								return 149.3549f, 152.8602f, 104.7787f;
							default:
						}
						break;
					case 10:
						switch (iParam0)
						{
							case 0:
								return 303.1082f, -777.2009f, 28.2145f;
							case 1:
								return 306.6073f, -766.842f, 28.217f;
							case 2:
								return 310.2051f, -756.255f, 28.2203f;
							case 3:
								return 313.4909f, -822.9637f, 28.1564f;
							default:
						}
						break;
					case 8:
						switch (iParam0)
						{
							case 0:
								return -1505.7045f, -407.3392f, 37.9183f;
							case 1:
								return -1498.2539f, -414.4433f, 36.8173f;
							case 2:
								return -1512.9229f, -400.4784f, 38.9836f;
							case 3:
								return -1520.9794f, -393.1905f, 40.1197f;
							default:
						}
						break;
					case 9:
						switch (iParam0)
						{
							case 0:
								return -1170.7698f, -1358.8207f, 3.8793f;
							case 1:
								return -1180.1741f, -1363.1769f, 3.83f;
							case 2:
								return -1189.4374f, -1367.4215f, 3.6581f;
							case 3:
								return -1201.3682f, -1372.7651f, 3.2609f;
							default:
						}
						break;
					case 6:
						switch (iParam0)
						{
							case 0:
								return 1416.0983f, -1643.6406f, 59.6165f;
							case 1:
								return 1422.4036f, -1653.303f, 60.7606f;
							case 2:
								return 1428.712f, -1663.6318f, 62.0263f;
							case 3:
								return 1436.7166f, -1677.0326f, 63.5393f;
							default:
						}
						break;
					case 17:
						switch (iParam0)
						{
							case 0:
								return 148.9618f, -2492.8938f, 4.9962f;
							case 1:
								return 146.8011f, -2496.1926f, 5f;
							case 2:
								return 144.4075f, -2499.553f, 5f;
							case 3:
								return 145.4915f, -2505.5286f, 5f;
							default:
						}
						break;
					case 20:
						switch (iParam0)
						{
							case 0:
								return -349.1915f, -2783.202f, 4.7145f;
							case 1:
								return -344.4598f, -2783.313f, 4.7134f;
							case 2:
								return -329.3253f, -2764.1965f, 4.7158f;
							case 3:
								return -326.8011f, -2741.1477f, 6.0907f;
							default:
						}
						break;
					case 16:
						switch (iParam0)
						{
							case 0:
								return 1177.498f, -3107.5286f, 5.028f;
							case 1:
								return 1173.5944f, -3111.5322f, 5.6435f;
							case 2:
								return 1173.6024f, -3123.754f, 5.6486f;
							case 3:
								return 1153.6779f, -3093.0579f, 5.8698f;
							default:
						}
						break;
					case 19:
						switch (iParam0)
						{
							case 0:
								return 671.2275f, -2652.3733f, 5.7929f;
							case 1:
								return 667.0157f, -2650.5063f, 5.7929f;
							case 2:
								return 656.0261f, -2650.482f, 5.7928f;
							case 3:
								return 646.6414f, -2652.5857f, 6.155f;
							default:
						}
						break;
					case 18:
						switch (iParam0)
						{
							case 0:
								return -254.0566f, -2600.409f, 5.7123f;
							case 1:
								return -242.6433f, -2601.8599f, 5.713f;
							case 2:
								return -233.7325f, -2601.958f, 5.713f;
							case 3:
								return -235.4306f, -2563.1533f, 6.0509f;
							default:
						}
						break;
					case 12:
						switch (iParam0)
						{
							case 0:
								return 2868.489f, 4438.962f, 47.6502f;
							case 1:
								return 2878.3452f, 4443.1177f, 47.4421f;
							case 2:
								return 2888.115f, 4448.735f, 47.528f;
							case 3:
								return 2859.976f, 4411.673f, 48.0934f;
							default:
						}
						break;
					case 15:
						switch (iParam0)
						{
							case 0:
								return 1638.8333f, 4838.842f, 41.0227f;
							case 1:
								return 1654.9028f, 4824.8315f, 40.9962f;
							case 2:
								return 1643.3938f, 4828.428f, 41.0252f;
							case 3:
								return 1659.0615f, 4804.715f, 42.1896f;
							default:
						}
						break;
					case 13:
						switch (iParam0)
						{
							case 0:
								return 399.1866f, 3592.7754f, 32.2605f;
							case 1:
								return 388.2984f, 3594.6665f, 32.2891f;
							case 2:
								return 377.6639f, 3596.6338f, 32.4635f;
							case 3:
								return 365.8367f, 3589.2344f, 32.3738f;
							default:
						}
						break;
					case 14:
						switch (iParam0)
						{
							case 0:
								return 649.8233f, 2767.469f, 40.9497f;
							case 1:
								return 648.6895f, 2779.7048f, 40.904f;
							case 2:
								return 647.6401f, 2790.8875f, 40.9137f;
							case 3:
								return 646.2524f, 2805.8127f, 40.7804f;
							default:
						}
						break;
					case 11:
						switch (iParam0)
						{
							case 0:
								return 217.2443f, 2476.5317f, 54.5448f;
							case 1:
								return 214.8707f, 2465.348f, 55.0394f;
							case 2:
								return 212.683f, 2454.7947f, 55.8661f;
							case 3:
								return 210.1556f, 2439.0344f, 58.0282f;
							default:
						}
						break;
					case 2:
						switch (iParam0)
						{
							case 0:
								return 425.974f, 6541.852f, 26.6953f;
							case 1:
								return 424.2257f, 6530.2856f, 26.6576f;
							case 2:
								return 422.175f, 6517.8926f, 26.7314f;
							case 3:
								return 422.4615f, 6503.9155f, 26.7609f;
							default:
						}
						break;
					case 5:
						switch (iParam0)
						{
							case 0:
								return -144.8243f, 6315.08f, 30.5034f;
							case 1:
								return -152.579f, 6307.761f, 30.3932f;
							case 2:
								return -160.0474f, 6300.6694f, 30.2302f;
							case 3:
								return -168.0869f, 6292.8657f, 30.4893f;
							default:
						}
						break;
					case 3:
						switch (iParam0)
						{
							case 0:
								return 69.3182f, 6464.313f, 30.3712f;
							case 1:
								return 77.6554f, 6472.552f, 30.402f;
							case 2:
								return 85.5971f, 6480.53f, 30.3719f;
							case 3:
								return 95.4456f, 6490.3813f, 30.2949f;
							default:
						}
						break;
					case 4:
						switch (iParam0)
						{
							case 0:
								return -424.7343f, 6127.6685f, 30.4525f;
							case 1:
								return -432.4558f, 6134.9097f, 30.4784f;
							case 2:
								return -440.5509f, 6142.593f, 30.4784f;
							case 3:
								return -435.375f, 6119.4976f, 30.1965f;
							default:
						}
						break;
					case 1:
						switch (iParam0)
						{
							case 0:
								return 56.7992f, 6346.4043f, 30.229f;
							case 1:
								return 62.2523f, 6336.9424f, 30.2259f;
							case 2:
								return 67.5678f, 6327.642f, 30.2259f;
							case 3:
								return 74.3165f, 6316.3657f, 30.2273f;
							default:
						}
						break;
				}
				break;
			case 1:
				switch (iVar0)
				{
					case 7:
						switch (iParam0)
						{
							case 0:
								return 126.7303f, 163.1857f, 104.341f;
							case 1:
								return 87.1795f, 175.3191f, 104.2598f;
							case 2:
								return 92.9219f, 162.1079f, 104.348f;
							case 3:
								return 81.3758f, 169.4485f, 104.6149f;
							default:
						}
						break;
					case 10:
						switch (iParam0)
						{
							case 0:
								return 326.136f, -785.2573f, 28.2144f;
							case 1:
								return 322.6066f, -796.3894f, 28.1706f;
							case 2:
								return 318.0972f, -809.7634f, 28.1823f;
							case 3:
								return 314.0462f, -743.4577f, 28.2014f;
							default:
						}
						break;
					case 8:
						switch (iParam0)
						{
							case 0:
								return -1440.2391f, -413.3762f, 34.8174f;
							case 1:
								return -1431.1678f, -407.85f, 34.9821f;
							case 2:
								return -1422.0809f, -402.2156f, 35.1566f;
							case 3:
								return -1412.1238f, -396.1587f, 35.199f;
							default:
						}
						break;
					case 9:
						switch (iParam0)
						{
							case 0:
								return -1211.9701f, -1356.4846f, 3.2077f;
							case 1:
								return -1202.6787f, -1352.0457f, 3.5031f;
							case 2:
								return -1192.861f, -1347.3868f, 3.7444f;
							case 3:
								return -1179.8468f, -1341.4154f, 3.8704f;
							default:
						}
						break;
					case 6:
						switch (iParam0)
						{
							case 0:
								return 1430.2734f, -1642.9763f, 60.7876f;
							case 1:
								return 1440.7297f, -1647.0917f, 62.6074f;
							case 2:
								return 1451.9922f, -1646.5864f, 65.313f;
							case 3:
								return 1465.3352f, -1639.6774f, 67.9453f;
							default:
						}
						break;
					case 17:
						switch (iParam0)
						{
							case 0:
								return 149.6812f, -2454.4788f, 5f;
							case 1:
								return 143.9008f, -2450.1616f, 5f;
							case 2:
								return 140.2904f, -2447.9167f, 5f;
							case 3:
								return 141.2641f, -2442.4717f, 5f;
							default:
						}
						break;
					case 20:
						switch (iParam0)
						{
							case 0:
								return -361.5018f, -2780.2202f, 5.7183f;
							case 1:
								return -357.0598f, -2780.4026f, 5.8195f;
							case 2:
								return -365.9717f, -2779.9907f, 5.7418f;
							case 3:
								return -351.6208f, -2740.528f, 6.1187f;
							default:
						}
						break;
					case 16:
						switch (iParam0)
						{
							case 0:
								return 1194.8112f, -3104.5212f, 5.7054f;
							case 1:
								return 1199.2551f, -3104.4211f, 5.6831f;
							case 2:
								return 1193.6235f, -3083.2078f, 5.6556f;
							case 3:
								return 1166.3252f, -3078.0632f, 5.9384f;
							default:
						}
						break;
					case 19:
						switch (iParam0)
						{
							case 0:
								return 654.0573f, -2693.0369f, 5.8024f;
							case 1:
								return 666.6396f, -2692.8533f, 5.7917f;
							case 2:
								return 657.1966f, -2705.6953f, 5.9325f;
							case 3:
								return 663.0167f, -2687.5042f, 6.1543f;
							default:
						}
						break;
					case 18:
						switch (iParam0)
						{
							case 0:
								return -250.8277f, -2572.1155f, 5.7129f;
							case 1:
								return -250.6818f, -2564.549f, 5.7133f;
							case 2:
								return -241.3862f, -2565.994f, 5.7129f;
							case 3:
								return -247.4174f, -2552.1206f, 6.0745f;
							default:
						}
						break;
					case 12:
						switch (iParam0)
						{
							case 0:
								return 2845.5088f, 4483.769f, 47.5946f;
							case 1:
								return 2856.061f, 4481.3154f, 47.397f;
							case 2:
								return 2866.6604f, 4477.9385f, 47.2923f;
							case 3:
								return 2873.481f, 4485.8823f, 47.6688f;
							default:
						}
						break;
					case 15:
						switch (iParam0)
						{
							case 0:
								return 1683.0245f, 4785.376f, 40.8715f;
							case 1:
								return 1683.8612f, 4774.2446f, 40.8633f;
							case 2:
								return 1685.9447f, 4763.556f, 40.8653f;
							case 3:
								return 1659.6353f, 4798.614f, 42.1739f;
							default:
						}
						break;
					case 13:
						switch (iParam0)
						{
							case 0:
								return 407.3274f, 3607.456f, 32.2305f;
							case 1:
								return 396.5025f, 3610.196f, 32.2266f;
							case 2:
								return 384.9869f, 3612.1848f, 32.3465f;
							case 3:
								return 370.307f, 3612.629f, 32.3487f;
							default:
						}
						break;
					case 14:
						switch (iParam0)
						{
							case 0:
								return 618.8763f, 2813.685f, 40.9183f;
							case 1:
								return 607.5377f, 2812.979f, 40.9482f;
							case 2:
								return 595.9734f, 2812.2964f, 40.947f;
							case 3:
								return 613.4562f, 2794.5898f, 41.0611f;
							default:
						}
						break;
					case 11:
						switch (iParam0)
						{
							case 0:
								return 231.411f, 2485.1487f, 54.1002f;
							case 1:
								return 230.1177f, 2474.666f, 54.4998f;
							case 2:
								return 228.3704f, 2463.4321f, 55.0091f;
							case 3:
								return 225.9784f, 2449.663f, 56.0529f;
							default:
						}
						break;
					case 2:
						switch (iParam0)
						{
							case 0:
								return 414.5212f, 6557.7964f, 26.3661f;
							case 1:
								return 403.8975f, 6558.3706f, 26.4371f;
							case 2:
								return 393.2283f, 6559.076f, 26.5887f;
							case 3:
								return 375.7357f, 6559.92f, 26.8811f;
							default:
						}
						break;
					case 5:
						switch (iParam0)
						{
							case 0:
								return -198.7337f, 6322.492f, 30.4176f;
							case 1:
								return -186.4931f, 6325.6943f, 30.5028f;
							case 2:
								return -177.9904f, 6317.3716f, 30.2112f;
							case 3:
								return -167.8821f, 6307.144f, 30.2122f;
							default:
						}
						break;
					case 3:
						switch (iParam0)
						{
							case 0:
								return 30.6972f, 6426.0596f, 30.3401f;
							case 1:
								return 38.5376f, 6434.0063f, 30.3431f;
							case 2:
								return 46.5618f, 6442.031f, 30.3487f;
							case 3:
								return 56.3076f, 6451.9536f, 30.356f;
							default:
						}
						break;
					case 4:
						switch (iParam0)
						{
							case 0:
								return -391.1923f, 6184.0776f, 30.4618f;
							case 1:
								return -404.3702f, 6202.154f, 30.5146f;
							case 2:
								return -404.9331f, 6213.31f, 30.482f;
							case 3:
								return -394.9436f, 6212.8247f, 30.4886f;
							default:
						}
						break;
					case 1:
						switch (iParam0)
						{
							case 0:
								return 63.2694f, 6350.123f, 30.2268f;
							case 1:
								return 68.0914f, 6340.6675f, 30.2258f;
							case 2:
								return 73.2089f, 6330.6133f, 30.2258f;
							case 3:
								return 79.0435f, 6319.4194f, 30.2364f;
							default:
						}
						break;
				}
				break;
			case 2:
				switch (iVar0)
				{
					case 7:
						switch (iParam0)
						{
							case 0:
								return 74.9695f, 167.98f, 104.3503f;
							case 1:
								return 60.7318f, 156.4501f, 104.3953f;
							case 2:
								return 62.5776f, 161.2384f, 104.4801f;
							case 3:
								return 79.1059f, 163.5721f, 104.7526f;
							default:
						}
						break;
					case 10:
						switch (iParam0)
						{
							case 0:
								return 344.6402f, -730.1158f, 28.181f;
							case 1:
								return 340.6898f, -741.6677f, 28.1341f;
							case 2:
								return 336.9805f, -752.3841f, 28.1515f;
							case 3:
								return 332.6159f, -765.8456f, 28.1761f;
							default:
						}
						break;
					case 8:
						switch (iParam0)
						{
							case 0:
								return -1425.2672f, -358.664f, 39.8621f;
							case 1:
								return -1432.0325f, -350.9521f, 41.9045f;
							case 2:
								return -1438.9481f, -343.1571f, 43.1232f;
							case 3:
								return -1447.1016f, -334.0293f, 43.2706f;
							default:
						}
						break;
					case 9:
						switch (iParam0)
						{
							case 0:
								return -1152.8654f, -1396.8909f, 3.9901f;
							case 1:
								return -1161.7094f, -1403.4165f, 3.7883f;
							case 2:
								return -1170.0386f, -1409.4557f, 3.603f;
							case 3:
								return -1179.9218f, -1416.5524f, 3.4254f;
							default:
						}
						break;
					case 6:
						switch (iParam0)
						{
							case 0:
								return 1465.3967f, -1677.7762f, 65.1317f;
							case 1:
								return 1468.4321f, -1666.4369f, 65.1823f;
							case 2:
								return 1473.4048f, -1653.851f, 66.3969f;
							case 3:
								return 1479.3816f, -1640.0901f, 68.4911f;
							default:
						}
						break;
					case 17:
						switch (iParam0)
						{
							case 0:
								return 168.1579f, -2467.4663f, 5.013f;
							case 1:
								return 168.2115f, -2479.4116f, 5.015f;
							case 2:
								return 168.085f, -2492.1877f, 4.991f;
							case 3:
								return 167.6928f, -2455.2375f, 4.9877f;
							default:
						}
						break;
					case 20:
						switch (iParam0)
						{
							case 0:
								return -371.8721f, -2768.8374f, 5.7118f;
							case 1:
								return -368.8315f, -2771.617f, 5.7128f;
							case 2:
								return -376.6873f, -2748.8196f, 5.7447f;
							case 3:
								return -331.9699f, -2729.261f, 6.0959f;
							default:
						}
						break;
					case 16:
						switch (iParam0)
						{
							case 0:
								return 1151.975f, -3148.3262f, 5.6115f;
							case 1:
								return 1156.494f, -3148.1558f, 5.6117f;
							case 2:
								return 1141.3284f, -3145.6833f, 5.6123f;
							case 3:
								return 1176.409f, -3142.3445f, 5.7975f;
							default:
						}
						break;
					case 19:
						switch (iParam0)
						{
							case 0:
								return 625.344f, -2676.2192f, 5.8074f;
							case 1:
								return 630.9755f, -2688.167f, 5.8092f;
							case 2:
								return 623.7214f, -2685.0476f, 5.7944f;
							case 3:
								return 641.0204f, -2652.4946f, 6.1576f;
							default:
						}
						break;
					case 18:
						switch (iParam0)
						{
							case 0:
								return -282.5058f, -2566.0737f, 5.7144f;
							case 1:
								return -292.4669f, -2585.14f, 5.715f;
							case 2:
								return -302.3321f, -2576.5317f, 5.7159f;
							case 3:
								return -263.0872f, -2542.5518f, 6.0743f;
							default:
						}
						break;
					case 12:
						switch (iParam0)
						{
							case 0:
								return 2913.7935f, 4456.578f, 47.0743f;
							case 1:
								return 2924.0674f, 4460.802f, 46.5843f;
							case 2:
								return 2934.2188f, 4465.292f, 46.1155f;
							case 3:
								return 2940.8215f, 4449.5815f, 46.1837f;
							default:
						}
						break;
					case 15:
						switch (iParam0)
						{
							case 0:
								return 1662.2534f, 4849.201f, 40.913f;
							case 1:
								return 1660.8262f, 4860.0566f, 40.9121f;
							case 2:
								return 1658.9059f, 4875.2036f, 41.0773f;
							case 3:
								return 1658.4261f, 4811.152f, 42.043f;
							default:
						}
						break;
					case 13:
						switch (iParam0)
						{
							case 0:
								return 342.6013f, 3601.9204f, 32.5934f;
							case 1:
								return 333.5355f, 3594.5176f, 32.5538f;
							case 2:
								return 326.2228f, 3586.5508f, 32.3555f;
							case 3:
								return 320.5603f, 3573.1104f, 32.3695f;
							default:
						}
						break;
					case 14:
						switch (iParam0)
						{
							case 0:
								return 665.3925f, 2724.05f, 40.7514f;
							case 1:
								return 664.7371f, 2734.814f, 40.837f;
							case 2:
								return 663.9374f, 2746.1484f, 40.9304f;
							case 3:
								return 660.5984f, 2758.6558f, 40.9246f;
							default:
						}
						break;
					case 11:
						switch (iParam0)
						{
							case 0:
								return 264.4133f, 2475.3284f, 52.5213f;
							case 1:
								return 254.5964f, 2469.1868f, 53.1732f;
							case 2:
								return 246.5093f, 2461.836f, 53.6126f;
							case 3:
								return 238.3004f, 2453.4556f, 54.7109f;
							default:
						}
						break;
					case 2:
						switch (iParam0)
						{
							case 0:
								return 438.7546f, 6555.551f, 26.083f;
							case 1:
								return 449.5543f, 6554.0303f, 26.0292f;
							case 2:
								return 460.5455f, 6552.418f, 26.0041f;
							case 3:
								return 443.321f, 6555.394f, 26.0568f;
							default:
						}
						break;
					case 5:
						switch (iParam0)
						{
							case 0:
								return -134.716f, 6328.3555f, 30.5927f;
							case 1:
								return -126.8547f, 6320.537f, 30.5044f;
							case 2:
								return -119.3266f, 6312.979f, 30.5045f;
							case 3:
								return -132.5326f, 6339.82f, 30.4904f;
							default:
						}
						break;
					case 3:
						switch (iParam0)
						{
							case 0:
								return 18.3968f, 6426.5464f, 30.4162f;
							case 1:
								return 10.8481f, 6433.8477f, 30.4252f;
							case 2:
								return 3.1266f, 6441.352f, 30.4252f;
							case 3:
								return -5.633f, 6449.7437f, 30.4252f;
							default:
						}
						break;
					case 4:
						switch (iParam0)
						{
							case 0:
								return -439.1614f, 6111.74f, 30.2942f;
							case 1:
								return -441.554f, 6106.8936f, 30.3087f;
							case 2:
								return -443.6328f, 6102.508f, 30.2969f;
							case 3:
								return -446.7796f, 6098.214f, 30.2083f;
							default:
						}
						break;
					case 1:
						switch (iParam0)
						{
							case 0:
								return 74.6876f, 6348.288f, 30.376f;
							case 1:
								return 82.7511f, 6337.771f, 30.2258f;
							case 2:
								return 77.8867f, 6335.6055f, 30.2258f;
							case 3:
								return 86.1207f, 6325.027f, 30.2358f;
							default:
						}
						break;
				}
				break;
			}
	}
	return 131.7841f, -2230.2332f, 5.0333f;
}

int func_365(int iParam0)//Position - 0x1899D
{
	if ((func_367() || func_366()) || func_27())
	{
		return Local_183.f_64[iParam0];
	}
	return Local_183.f_64[0];
}

bool func_366()//Position - 0x189D4
{
	return func_16() == 9;
}

bool func_367()//Position - 0x189E3
{
	return func_16() == 1;
}

int func_368()//Position - 0x189F1
{
	if ((func_366() || func_367()) || func_27())
	{
		return 1;
	}
	return 0;
}

float func_410()//Position - 0x1AA66
{
	switch (func_16())
	{
		case 3:
			return 124.5999f;
		case 4:
			return 124.5999f;
		case 5:
			return 124.5999f;
		case 7:
			return 124.5999f;
		default:
	}
	return 124.5999f;
}

Vector3 func_411()//Position - 0x1AAB4
{
	bool bVar0;
	switch (func_16())
	{
		case 6:
			bVar0 = false;
			while (bVar0 < func_233())
			{
				if (BitTest(Local_183.f_134[0], bVar0))
				{
					return func_412(func_16(), bVar0, Local_183.f_679, 0, 0, 0);
				}
				bVar0++;
			}
			break;
		case 3:
			return 1678.6343f, 2307.834f, 74.3844f;
		case 4:
			return 1678.6343f, 2307.834f, 74.3844f;
		case 5:
			return 1678.6343f, 2307.834f, 74.3844f;
		case 7:
			return 1678.6343f, 2307.834f, 74.3844f;
	}
	return 1678.6343f, 2307.834f, 74.3844f;
}

Vector3 func_412(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x1AB76
{
	switch (iParam0)
	{
		case 4:
			if (func_245())
			{
				switch (bParam1)
				{
					case 0:
						return 2855.103f, 4562.4116f, 45.9071f;
					case 1:
						return 3316.9734f, 5172.291f, 17.4618f;
					case 2:
						return 2708.735f, 4135.4785f, 42.8745f;
					case 3:
						return 2053.6125f, 3166.0308f, 44.2098f;
					case 4:
						return 863.7849f, 3679.3115f, 31.561f;
					case 5:
						return 883.5331f, 2849.8545f, 55.6733f;
					case 6:
						return 164.7644f, 3114.5195f, 41.4837f;
					case 7:
						return 1745.0026f, 6410.5664f, 34.2547f;
					case 8:
						return 750.2117f, 4188.375f, 39.7546f;
					case 9:
						return 759.8706f, 6460.903f, 30.5887f;
					case 10:
						return -744.3207f, 5550.4917f, 32.5851f;
					case 11:
						return -1584.256f, 5155.3906f, 18.6781f;
					case 12:
						return -135.6222f, 4617.994f, 124.5161f;
					case 13:
						return 161.2865f, 2232.6797f, 89.151f;
					case 14:
						return 1603.2764f, 6631.872f, 14.4338f;
					case 15:
						return -205.1835f, 3657.7627f, 50.8854f;
					case 16:
						return 1624.0653f, 3518.6775f, 36.1863f;
					case 17:
						return 1263.9915f, 1922.3169f, 77.6406f;
					case 18:
						return -777.9739f, 5399.3804f, 33.3171f;
					case 19:
						return 2496.1545f, 2601.807f, 41.9696f;
					default:
				}
			}
			else
			{
				switch (bParam1)
				{
					case 0:
						return -885.3888f, 265.3505f, 74.0379f;
					case 1:
						return -397.254f, -128.9808f, 37.5323f;
					case 2:
						return -839.3116f, -1054.7385f, 9.6889f;
					case 3:
						return -1163.0284f, -325.2383f, 36.6153f;
					case 4:
						return -162.2476f, -1457.6099f, 30.6858f;
					case 5:
						return 572.7383f, 117.3382f, 97.0415f;
					case 6:
						return 888.4307f, -2209.7734f, 29.5121f;
					case 7:
						return -3050.0542f, 107.81f, 11.3462f;
					case 8:
						return 433.4743f, -1968.3896f, 22.185f;
					case 9:
						return 1284.7584f, -1597.1655f, 53.2252f;
					case 10:
						return -1540.8274f, -945.9845f, 10.5661f;
					case 11:
						return -2018.4219f, 562.5836f, 107.1442f;
					case 12:
						return 262.0412f, 896.3593f, 208.2672f;
					case 13:
						return -1037.8135f, -1592.4087f, 4.0178f;
					case 14:
						return -1653.9344f, 241.1802f, 61.5274f;
					case 15:
						return -1954.1903f, -277.441f, 41.1101f;
					case 16:
						return 1691.0618f, -1604.9905f, 111.6066f;
					case 17:
						return -427.6465f, 1201.2151f, 324.8949f;
					case 18:
						return 1667.233f, -71.2133f, 172.4527f;
					case 19:
						return 1430.2513f, -2605.6309f, 47.2306f;
					}
				default:
			}
			break;
		case 5:
			if (func_245())
			{
				if (bParam5)
				{
					switch (bParam1)
					{
						case 0:
							return 2617.8984f, 1693.1005f, 26.5987f;
						case 1:
							return -1090.493f, 2714.8665f, 18.0742f;
						case 2:
							return 957.9468f, 3618.776f, 31.68f;
						case 3:
							return 1584.3419f, 2905.5728f, 55.9087f;
						case 4:
							return 2709.535f, 3452.487f, 54.5399f;
						case 5:
							return 2720.387f, 4285.945f, 46.259f;
						case 6:
							return 1879.3295f, 3920.3083f, 32.1766f;
						case 7:
							return 1683.182f, 4689.506f, 42.0657f;
						case 8:
							return 3323.277f, 5165.221f, 17.382f;
						case 9:
							return 6.1407f, 3037.2725f, 39.8761f;
						case 10:
							return 1534.667f, 2231.99f, 76.704f;
						case 11:
							return 733.3676f, 2523.3862f, 72.2238f;
						case 12:
							return -90.154f, 1982.596f, 182.0488f;
						case 13:
							return 3680.798f, 4497.241f, 23.1072f;
						case 14:
							return 1591.857f, 6449.925f, 24.3172f;
						case 15:
							return 2336.251f, 2603.98f, 45.6676f;
						default:
					}
				}
				else
				{
					switch (bParam1)
					{
						case 0:
							return 2631.2744f, 1649.5704f, 25.4685f;
						case 1:
							return -1092.811f, 2694.7195f, 18.9463f;
						case 2:
							return 950.2559f, 3626.4297f, 31.3657f;
						case 3:
							return 1591.9623f, 2883.801f, 56.1303f;
						case 4:
							return 2698.5474f, 3436.8164f, 54.8121f;
						case 5:
							return 2712.8086f, 4264.86f, 46.1423f;
						case 6:
							return 1870.1969f, 3916.8494f, 31.9349f;
						case 7:
							return 1703.2672f, 4693.0225f, 41.8364f;
						case 8:
							return 3315.7573f, 5147.607f, 17.283f;
						case 9:
							return -6.2277f, 3022.2188f, 39.6263f;
						case 10:
							return 1525.615f, 2225.177f, 75.2f;
						case 11:
							return 748.7995f, 2510.5598f, 72.2693f;
						case 12:
							return -94.5431f, 1998.2146f, 181.7387f;
						case 13:
							return 3663.3416f, 4485.44f, 27.443f;
						case 14:
							return 1584.454f, 6442.569f, 24.056f;
						case 15:
							return 2325.6685f, 2620.5415f, 45.6226f;
						}
					default:
				}
			}
			else if (bParam5)
			{
				switch (bParam1)
				{
					case 0:
						return -3186.419f, 1273.716f, 11.642f;
					case 1:
						return -2973.857f, 642.226f, 24.7975f;
					case 2:
						return -1995.021f, 590.951f, 116.9083f;
					case 3:
						return -895.774f, -4.552f, 42.8039f;
					case 4:
						return -494.924f, 796.746f, 183.3535f;
					case 5:
						return 212.151f, -102.686f, 72.2853f;
					case 6:
						return 988.117f, -433.602f, 62.8957f;
					case 7:
						return 1193.099f, -1623.448f, 44.2215f;
					case 8:
						return 418.036f, -1735.894f, 28.6077f;
					case 9:
						return -46.345f, -1446.107f, 31.4346f;
					case 10:
						return 371.531f, -827.181f, 28.2927f;
					case 11:
						return -238.559f, -773.351f, 33.0967f;
					case 12:
						return -1642.121f, -412.467f, 41.0739f;
					case 13:
						return -743.009f, -981.219f, 16.0549f;
					case 14:
						return -240.619f, 381.349f, 111.4326f;
					case 15:
						return 1271.058f, -682.863f, 65.0367f;
					default:
				}
			}
			else
			{
				switch (bParam1)
				{
					case 0:
						return -3164.9463f, 1268.8542f, 11.3158f;
					case 1:
						return -2993.823f, 637.489f, 20.086f;
					case 2:
						return -1973.286f, 579.597f, 115.8f;
					case 3:
						return -873.85f, 2.024f, 42.843f;
					case 4:
						return -480.775f, 799.763f, 179.956f;
					case 5:
						return 206.093f, -111.377f, 67.88f;
					case 6:
						return 1005.416f, -443.672f, 63.059f;
					case 7:
						return 1198.257f, -1630.183f, 43.671f;
					case 8:
						return 407.584f, -1730.363f, 28.282f;
					case 9:
						return -48.583f, -1459.337f, 30.825f;
					case 10:
						return 358.6393f, -838.0125f, 28.3194f;
					case 11:
						return -248.987f, -768.004f, 31.764f;
					case 12:
						return -1629.561f, -419.992f, 38.824f;
					case 13:
						return -744.481f, -969.493f, 15.994f;
					case 14:
						return -259.168f, 398.993f, 108.896f;
					case 15:
						return 1288.041f, -680.553f, 64.778f;
					}
				default:
			}
			break;
		case 7:
			if (func_245())
			{
				switch (bParam1)
				{
					case 0:
						return 2357.599f, 2530.1025f, 45.6678f;
					case 1:
						return 2373.4316f, 2572.6497f, 45.6677f;
					case 2:
						return 2184.7021f, 3511.6787f, 44.4123f;
					case 3:
						return 2170.231f, 3504.0679f, 44.5259f;
					case 4:
						return 860.169f, 2849.632f, 56.4467f;
					case 5:
						return 870.8168f, 2867.49f, 55.8524f;
					case 6:
						return 413.1571f, 2985.3958f, 39.6084f;
					case 7:
						return 393.024f, 2990.3835f, 39.7003f;
					case 8:
						return -492.9596f, 6266.1855f, 11.1948f;
					case 9:
						return -447.8156f, 6350.2437f, 11.6295f;
					default:
				}
			}
			else
			{
				switch (bParam1)
				{
					case 0:
						return -1178.0414f, -1576.6422f, 3.3286f;
					case 1:
						return -1136.833f, -352.7127f, 36.6737f;
					case 2:
						return -1139.6503f, -320.505f, 36.6735f;
					case 3:
						return -18.236f, -216.3413f, 45.1815f;
					case 4:
						return 32.7873f, -211.881f, 51.8573f;
					case 5:
						return -1290.9268f, -276.2561f, 37.8304f;
					case 6:
						return -1223.5345f, -1320.9851f, 3.3066f;
					case 7:
						return -1204.8127f, -1333.1809f, 3.8196f;
					case 8:
						return -1119.2269f, -1606.9021f, 3.3277f;
					case 9:
						return -121.8735f, -364.7843f, 35.3104f;
					}
				default:
			}
			break;
		case 3:
			if (func_245())
			{
				switch (bParam1)
				{
					case 0:
						return 1946.553f, 3848.936f, 31.173f;
					case 1:
						return 1841.0621f, 3895.4836f, 32.2833f;
					case 2:
						return 1560.2172f, 3800.1453f, 33.2544f;
					case 3:
						return 1588.55f, 2900.709f, 56.058f;
					case 4:
						return 1409.9146f, 2167.9956f, 96.5534f;
					case 5:
						return 1309.2335f, 1110.1659f, 104.6029f;
					case 6:
						return -1138.1389f, 2676.5068f, 17.0939f;
					case 7:
						return -255.5927f, 2185.608f, 129.4257f;
					case 8:
						return 163.042f, 2232.03f, 89.145f;
					case 9:
						return 215.6581f, 3040.2183f, 41.2306f;
					case 10:
						return 518.198f, 3081.815f, 39.56f;
					case 11:
						return 1026.5967f, 2654.7815f, 38.5511f;
					case 12:
						return 470.1515f, 2613.4294f, 42.1769f;
					case 13:
						return 2166.7666f, 3359.9106f, 44.514f;
					case 14:
						return 1764.448f, 3309.9673f, 40.1595f;
					case 15:
						return 650.7023f, 3502.2173f, 33.1276f;
					case 16:
						return 807.696f, 2180.311f, 51.2812f;
					case 17:
						return 1529.466f, 1724.381f, 109.119f;
					case 18:
						return 1412.718f, 3614.222f, 33.912f;
					case 19:
						return -39.492f, 2857.8f, 58.224f;
					case 20:
						return 2727.714f, 4291.594f, 47.3187f;
					case 21:
						return 2523.709f, 4213.176f, 38.934f;
					case 22:
						return 1963.6824f, 4638.882f, 39.7992f;
					case 23:
						return 1681.745f, 4680.968f, 42.0554f;
					case 24:
						return 1709.24f, 4713.9995f, 41.3369f;
					case 25:
						return 1687.665f, 4971.679f, 41.773f;
					case 26:
						return 1905.494f, 4924.755f, 47.902f;
					case 27:
						return 1600.1311f, 6447.8086f, 24.268f;
					case 28:
						return 1074.053f, 6507.302f, 19.959f;
					case 29:
						return 406.933f, 6641.465f, 27.304f;
					case 30:
						return -11.297f, 6613.899f, 30.393f;
					case 31:
						return -157.479f, 6450.529f, 30.441f;
					case 32:
						return -110.5607f, 6251.0977f, 30.2798f;
					case 33:
						return -425.5597f, 6208.7197f, 29.9159f;
					case 34:
						return -773.2371f, 5531.055f, 32.4779f;
					case 35:
						return -841.17f, 5406.444f, 33.615f;
					case 36:
						return 2237.8005f, 5161.4385f, 58.2713f;
					case 37:
						return 1421.668f, 4368.633f, 43.304f;
					case 38:
						return 763.354f, 4176.299f, 39.58f;
					case 39:
						return 2540.658f, 4677.303f, 32.779f;
					default:
				}
			}
			else
			{
				switch (bParam1)
				{
					case 0:
						return 467.219f, -1540.298f, 28.293f;
					case 1:
						return -1311.157f, -598.695f, 27.296f;
					case 2:
						return -1021.5643f, -1127.7118f, 1.1025f;
					case 3:
						return -634.427f, -1223.875f, 11.136f;
					case 4:
						return -599.348f, 175.415f, 64.207f;
					case 5:
						return -705.872f, -302.134f, 35.751f;
					case 6:
						return 3.266f, -1824.835f, 24.368f;
					case 7:
						return -356.377f, 81.446f, 62.787f;
					case 8:
						return 455.4892f, -725.7125f, 26.3591f;
					case 9:
						return -1306.9952f, -168.6501f, 43.0315f;
					case 10:
						return -22.5962f, 215.1706f, 105.5648f;
					case 11:
						return 971.0678f, -633.0916f, 56.4665f;
					case 12:
						return 1397.1593f, -1535.6527f, 56.7074f;
					case 13:
						return 852.9148f, -2307.1426f, 29.3404f;
					case 14:
						return 475.8266f, -1062.6473f, 28.2115f;
					case 15:
						return -1966.0613f, -500.5934f, 10.826f;
					case 16:
						return -307.141f, -275.295f, 30.389f;
					case 17:
						return 315.878f, -181.709f, 56.382f;
					case 18:
						return -246.67f, -774.785f, 31.459f;
					case 19:
						return -109.298f, -1458.554f, 32.464f;
					case 20:
						return -1017.3215f, 504.8095f, 78.4535f;
					case 21:
						return -1630.454f, 81.513f, 61.2486f;
					case 22:
						return -1514.6327f, -413.2709f, 34.597f;
					case 23:
						return -1428.5638f, -649.4637f, 27.6734f;
					case 24:
						return -663.382f, -967.998f, 20.1988f;
					case 25:
						return -572.2941f, -858.0829f, 25.2536f;
					case 26:
						return -82.0467f, -1315.4186f, 28.2145f;
					case 27:
						return 488.1603f, -1278.8959f, 28.4124f;
					case 28:
						return 1268.7533f, -1583.3154f, 51.6875f;
					case 29:
						return 159.3053f, -1816.8137f, 27.2342f;
					case 30:
						return 953.2253f, -1719.2828f, 29.6613f;
					case 31:
						return -759.6809f, 365.0873f, 86.8667f;
					case 32:
						return 1244.3738f, -346.5426f, 68.0822f;
					case 33:
						return 414.6804f, -2067.89f, 20.4995f;
					case 34:
						return -313.8132f, -1537.8275f, 26.6973f;
					case 35:
						return -1263.3208f, -1373.7311f, 3.1453f;
					case 36:
						return -3049.436f, 173.3395f, 10.6054f;
					case 37:
						return 1384.9103f, -2044.3638f, 50.9985f;
					case 38:
						return -154.4409f, 987.5869f, 233.9823f;
					case 39:
						return 149.4402f, -2400.073f, 5.0003f;
					}
				default:
			}
			break;
		case 6:
			if (func_41() && !bParam4)
			{
				return func_413();
			}
			else if (func_245())
			{
				switch (iParam2)
				{
					case 0:
						return 307.7284f, 2890.2678f, 42.4904f;
					case 1:
						return 2350.7183f, 3035.8467f, 47.1521f;
					case 2:
						return 283.8634f, 6782.829f, 14.6962f;
					case 3:
						return 2697.2566f, 4312.563f, 44.852f;
					case 4:
						return 1694.1171f, 6427.7227f, 31.6272f;
					default:
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						return 1128.3625f, -644.7004f, 55.7914f;
					case 1:
						return -815.2786f, 48.4003f, 47.6111f;
					case 2:
						return -96.7229f, -419.5907f, 35.3127f;
					case 3:
						return -1315.4597f, -767.4545f, 19.1859f;
					case 4:
						return -425.1262f, 1124.9425f, 324.8532f;
					}
				default:
			}
			break;
		case 10:
			if (func_245())
			{
				switch (bParam1)
				{
					case 0:
						return 2660.42f, 3275.803f, 54.241f;
					case 1:
						return 863.122f, 2147.322f, 51.453f;
					case 2:
						return 1479.641f, 2718.687f, 36.858f;
					case 3:
						return 2982.0103f, 3489.0637f, 70.3823f;
					case 4:
						return -2503.177f, 3614.4753f, 13.0208f;
					case 5:
						return -1087.905f, 2713.253f, 18.074f;
					case 6:
						return 1979.431f, 3708.85f, 31.121f;
					case 7:
						return -251.122f, 2190.708f, 128.991f;
					case 8:
						return 1514.374f, 1830.64f, 105.641f;
					case 9:
						return 3352.5f, 5552.192f, 17.1629f;
					case 10:
						return 165.549f, 3113.142f, 41.495f;
					case 11:
						return 1481.549f, 3674.336f, 33.339f;
					case 12:
						return 1738.479f, 3040.162f, 60.388f;
					case 13:
						return 2529.567f, 2617.236f, 36.945f;
					case 14:
						return 2715.349f, 4132.248f, 42.899f;
					case 15:
						return 2288.987f, 4968.037f, 40.583f;
					case 16:
						return 352.369f, 4420.294f, 62.74f;
					case 17:
						return -838.502f, 5403.729f, 33.614f;
					case 18:
						return -1492.637f, 4981.798f, 62.115f;
					case 19:
						return 1603.832f, 6451.723f, 24.159f;
					default:
				}
			}
			else
			{
				switch (bParam1)
				{
					case 0:
						return -1675.3346f, -1069.808f, 12.1536f;
					case 1:
						return 1927.203f, -974.9163f, 77.7849f;
					case 2:
						return -63.5708f, -2248.5422f, 6.8122f;
					case 3:
						return -516.0604f, -294.2748f, 34.2238f;
					case 4:
						return 795.0582f, -78.4309f, 79.5934f;
					case 5:
						return -886.8562f, -2104.2915f, 7.8599f;
					case 6:
						return 770.206f, -1892.9545f, 28.264f;
					case 7:
						return 1251.0371f, -601.1376f, 68.2468f;
					case 8:
						return 262.5444f, -1347.44f, 30.9188f;
					case 9:
						return -279.5683f, -1064.7151f, 24.801f;
					case 10:
						return -105.1761f, -1602.351f, 30.7514f;
					case 11:
						return -816.12f, -744.9531f, 22.5518f;
					case 12:
						return -3080.962f, 365.9827f, 6.1309f;
					case 13:
						return -1124.6765f, 378.6771f, 69.6817f;
					case 14:
						return -500.1782f, -44.6982f, 43.5184f;
					case 15:
						return 299.6276f, -189.955f, 60.5704f;
					case 16:
						return 1501.3906f, -2522.4268f, 54.8799f;
					case 17:
						return 223.8582f, 679.4021f, 188.368f;
					case 18:
						return 883.8307f, -1021.6785f, 31.6119f;
					case 19:
						return 2569.21f, 479.7553f, 107.5291f;
					}
				default:
			}
			break;
		case 12:
			if (func_245())
			{
				switch (bParam1)
				{
					case 0:
						return 2687.8674f, 2764.891f, 36.883f;
					case 1:
						return 856.8327f, 2375.3687f, 54.3039f;
					case 2:
						return 2468.7654f, 3428.797f, 49.0652f;
					case 3:
						return 1611.7566f, 3718.7075f, 33.2478f;
					case 4:
						return 433.4957f, 3088.647f, 41.1607f;
					case 5:
						return 2649.5188f, 4257.3096f, 43.7585f;
					case 6:
						return 1971.3754f, 4646.429f, 40.0244f;
					case 7:
						return 1582.1522f, 6441.1807f, 23.9314f;
					case 8:
						return -50.9144f, 6586.478f, 30.0231f;
					case 9:
						return -576.7059f, 5329.034f, 69.2571f;
					default:
				}
			}
			else
			{
				switch (bParam1)
				{
					case 0:
						return -719.5996f, -2228.105f, 4.9328f;
					case 1:
						return -26.5003f, -1678.8231f, 28.4612f;
					case 2:
						return 861.2762f, -2118.541f, 29.6091f;
					case 3:
						return -781.009f, -809.6935f, 19.8545f;
					case 4:
						return -366.3344f, 30.9147f, 46.9221f;
					case 5:
						return 805.3323f, -282.7911f, 65.4618f;
					case 6:
						return 1195.7172f, -1264.7721f, 34.2194f;
					case 7:
						return 332.2172f, -999.6744f, 28.2362f;
					case 8:
						return -1862.2125f, -304.8989f, 48.1449f;
					case 9:
						return -896.0381f, -1493.9164f, 4.024f;
					}
				default:
			}
			break;
		case 11:
			if (func_245())
			{
				switch (iParam2)
				{
					case 0:
						return 2565.3115f, 1814.6835f, 23.3794f;
					case 1:
						return -1608.012f, 3169.268f, 29.1f;
					case 2:
						return 2828.4954f, 1635.0588f, 23.5566f;
					case 3:
						return 3777.2593f, 4487.087f, 5.4462f;
					case 4:
						return 1522.3809f, 818.6603f, 76.4634f;
					case 5:
						return -2991.825f, 3451.685f, 8.592f;
					case 6:
						return -1631.7115f, 4731.057f, 51.9242f;
					case 7:
						return -1914.6838f, 2032.7537f, 139.7386f;
					case 8:
						return -2201.572f, 4257.217f, 46.778f;
					case 9:
						return 3341.9404f, 5488.9453f, 19.0216f;
					default:
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						return -2960.6711f, 442.2663f, 14.2607f;
					case 1:
						return -1545.1389f, 860.0988f, 180.4627f;
					case 2:
						return -3142.2776f, 1174.544f, 19.3651f;
					case 3:
						return 1921.121f, 579.848f, 174.533f;
					case 4:
						return -1534.1985f, 1383.8403f, 123.8455f;
					case 5:
						return 1328.6592f, 1255.8872f, 104.7663f;
					case 6:
						return -509.8177f, 1186.7019f, 323.8416f;
					case 7:
						return 2739.7742f, -700.0862f, 9.7813f;
					case 8:
						return 754.2864f, 1196.1571f, 325.3212f;
					case 9:
						return 1521.2902f, 1597.8691f, 110.6245f;
					}
				default:
			}
			break;
		case 8:
			if (func_245())
			{
				switch (bParam1)
				{
					case 0:
						return -638.0535f, 6068.0176f, 7.2136f;
					case 1:
						return 1590.2454f, 3900.8206f, 31.0911f;
					case 2:
						return 1776.0797f, 4598.296f, 36.7055f;
					case 3:
						return 1647.6282f, 3643.3232f, 33.988f;
					case 4:
						return 879.3905f, 2339.7302f, 50.6724f;
					case 5:
						return 2685.232f, 2801.4717f, 39.2155f;
					case 6:
						return -468.9186f, 2971.3684f, 25.0515f;
					case 7:
						return 1407.4281f, 2589.3745f, 35.8217f;
					case 8:
						return 2680.0085f, 3923.7158f, 42.1682f;
					case 9:
						return 1867.4082f, 6407.559f, 45.5299f;
					case 10:
						return -2328.7522f, 4270.8237f, 27.5226f;
					case 11:
						return 2456.0837f, 1544.4867f, 34.0485f;
					case 12:
						return 2788.2703f, 1408.8013f, 23.4383f;
					case 13:
						return -3185.0815f, 1093.1023f, 19.8556f;
					case 14:
						return 146.1344f, 2280.448f, 93.797f;
					default:
				}
			}
			else
			{
				switch (bParam1)
				{
					case 0:
						return -614.9329f, -2296.9407f, 12.8282f;
					case 1:
						return -1189.0726f, -2789.5813f, 12.9444f;
					case 2:
						return 271.6261f, -3159.5286f, 4.7903f;
					case 3:
						return 548.4889f, -2616.2634f, 4.704f;
					case 4:
						return 1251.333f, -1125.0045f, 37.4375f;
					case 5:
						return 1072.5715f, -2444.2214f, 28.2642f;
					case 6:
						return -208.6263f, -1091.3898f, 20.6892f;
					case 7:
						return 108.6183f, -445.3468f, 40.1308f;
					case 8:
						return 2550.5525f, 442.1817f, 107.4511f;
					case 9:
						return -457.7061f, -969.7913f, 22.5454f;
					case 10:
						return 76.9457f, -1631.0955f, 28.3918f;
					case 11:
						return -291.7224f, -1000.2001f, 29.3598f;
					case 12:
						return 252.3284f, 378.7073f, 104.5296f;
					case 13:
						return 29.3364f, -1247.9761f, 28.481f;
					case 14:
						return -457.6662f, 374.5519f, 103.7792f;
					}
				default:
			}
			break;
		case 2:
			if (func_245())
			{
				switch (bParam1)
				{
					case 0:
						return -80.1467f, 6508.823f, 40.3666f;
					case 1:
						return 3926.4705f, 4390.782f, 15.58f;
					case 2:
						return -250.693f, 2205.2327f, 128.8621f;
					case 3:
						return -1175.9214f, 4926.93f, 222.3389f;
					case 4:
						return 465.6409f, 5593.752f, 779.9684f;
					case 5:
						return 2824.8706f, 5967.99f, 350.1f;
					case 6:
						return -2590.5945f, 1883.7139f, 170.4922f;
					case 7:
						return 589.7837f, 2763.997f, 50.1451f;
					case 8:
						return 2685.0872f, 3494.8015f, 60.5256f;
					case 9:
						return -449.2787f, 1588.0001f, 358.0149f;
					case 10:
						return 2269.357f, 4844.731f, 39.6032f;
					case 11:
						return 1428.51f, 6345.937f, 22.9855f;
					case 12:
						return 2100.8484f, 2333.275f, 93.2859f;
					case 13:
						return 1524.8528f, 3785.2036f, 40.7334f;
					case 14:
						return -2184.2979f, 4292.6924f, 52.8159f;
					default:
				}
			}
			else
			{
				switch (bParam1)
				{
					case 0:
						return 774.4489f, -144.0929f, 87.5073f;
					case 1:
						return 798.255f, -2980.762f, 16.7776f;
					case 2:
						return -909.593f, -1511.588f, 16.977f;
					case 3:
						return -1394.9714f, 275.6436f, 88.8643f;
					case 4:
						return 2803.231f, 1454.9907f, 33.3519f;
					case 5:
						return -149.7433f, 935.2665f, 234.6255f;
					case 6:
						return -222.1787f, -826.9172f, 125.7931f;
					case 7:
						return 788.4523f, -1641.4594f, 43.147f;
					case 8:
						return -1587.1395f, -431.0891f, 55.7093f;
					case 9:
						return -2823.2458f, 1424.1766f, 99.8196f;
					case 10:
						return -395.6497f, -343.5754f, 69.9681f;
					case 11:
						return -724.5102f, -2269.5393f, 87.7333f;
					case 12:
						return 335.9479f, -1640.7682f, 97.496f;
					case 13:
						return -2207.7131f, 263.8248f, 197.1092f;
					case 14:
						return 948.6151f, -1023.1222f, 53.0681f;
					}
				default:
			}
			break;
		case 1:
			if (func_245())
			{
				switch (bParam1)
				{
					case 0:
						return 2428.5369f, 6901.1113f, 0.7501f;
					case 1:
						return 3288.9465f, 6714.458f, 0.5623f;
					case 2:
						return 4061.4756f, 4959.7373f, 0.5624f;
					case 3:
						return 4255.996f, 2967.701f, 1.3125f;
					case 4:
						return -2899.0144f, 2519.6553f, 0.5625f;
					case 5:
						return -2567.543f, 5183.713f, -0.1875f;
					case 6:
						return -1897.2671f, 5848.3604f, 0.5625f;
					case 7:
						return 4.7105f, 7951.5894f, -0.1875f;
					case 8:
						return 825.3421f, 3897.0867f, 29.8125f;
					case 9:
						return 3401.5056f, 1606.7958f, 0.75f;
					case 10:
						return -3719.2546f, 3505.4346f, 0.375f;
					case 11:
						return -1259.5303f, 7343.1294f, 0f;
					case 12:
						return 1213.939f, 7390.842f, -1.125f;
					case 13:
						return 4440.604f, 6104.9165f, 2.25f;
					case 14:
						return 2044.8656f, 4256.562f, 30.1875f;
					default:
				}
			}
			else
			{
				switch (bParam1)
				{
					case 0:
						return 3462.1099f, 888.5763f, -0.1875f;
					case 1:
						return 3842.8674f, -171.3662f, -0.375f;
					case 2:
						return 1485.5343f, -3655.866f, 0.5625f;
					case 3:
						return 409.4799f, -3597.1577f, 0.75f;
					case 4:
						return -2471.5474f, -1730.5311f, 0.5625f;
					case 5:
						return -2373.4517f, -3071.0657f, 0.1875f;
					case 6:
						return -1920.7579f, -3517.6746f, -0.75f;
					case 7:
						return 3055.3718f, -2303.6255f, 1.6875f;
					case 8:
						return -3749.4827f, 988.1151f, 0.5625f;
					case 9:
						return 1970.9617f, 179.8923f, 160.339f;
					case 10:
						return -194.8751f, -3019.768f, 0f;
					case 11:
						return -3413.7444f, 536.8126f, 0f;
					case 12:
						return -2713.8494f, -922.2804f, 0f;
					case 13:
						return 4061.4019f, -1351.1227f, 0.1875f;
					case 14:
						return 2745.643f, -3239.9736f, 0f;
					}
				default:
			}
			break;
		case 9:
			if (func_245())
			{
				switch (Local_183.f_679)
				{
					case 0:
						switch (bParam1)
						{
							case 0:
								return 808.2712f, 4046.062f, 30.1889f;
							case 1:
								return -447.0919f, 4439.1094f, 30.0048f;
							case 2:
								return -1598.3081f, 4390.777f, -0.008f;
							case 3:
								return -2514.802f, 4179.379f, -0.048f;
							case 4:
								return -3341.2449f, 3490.262f, 0.0191f;
							default:
						}
						break;
					case 1:
						switch (bParam1)
						{
							case 0:
								return -2121.9883f, 5038.509f, 0.5625f;
							case 1:
								return -1739.6345f, 5151.1885f, 0.3751f;
							case 2:
								return -1509.4686f, 5725.4653f, 0.1875f;
							case 3:
								return -960.0118f, 6100.051f, -0.1875f;
							case 4:
								return -425.1715f, 6702.211f, 0f;
							default:
						}
						break;
					case 2:
						switch (bParam1)
						{
							case 0:
								return 606.3173f, 7342.8506f, -0.1875f;
							case 1:
								return -169.2163f, 7762.534f, 1.125f;
							case 2:
								return -417.715f, 7142.0864f, 0.1875f;
							case 3:
								return -716.0834f, 6112.288f, -0.1875f;
							case 4:
								return -832.1136f, 7014.8564f, 0f;
							default:
						}
						break;
					case 3:
						switch (bParam1)
						{
							case 0:
								return 3967.2598f, 4029.9158f, 0f;
							case 1:
								return 4342.264f, 3667.8804f, -0.1875f;
							case 2:
								return 3665.222f, 3008.768f, -0.1875f;
							case 3:
								return 3709.6162f, 2254.4443f, 0.1875f;
							case 4:
								return 3627.1978f, 1661.066f, -0.1875f;
							default:
						}
						break;
					case 4:
						switch (bParam1)
						{
							case 0:
								return 4066.1716f, 5057.3447f, 0f;
							case 1:
								return 3464.7134f, 6143.588f, 0f;
							case 2:
								return 3084.7764f, 7029.6875f, -0.1875f;
							case 3:
								return 2188.7356f, 7499.77f, 0.2849f;
							case 4:
								return 1631.862f, 6822.671f, 0f;
							default:
						}
						break;
				}
			}
			else
			{
				switch (Local_183.f_679)
				{
					case 0:
						switch (bParam1)
						{
							case 0:
								return 3572.3052f, -511.0375f, -0.1875f;
							case 1:
								return 2941.0337f, 175.8028f, 0f;
							case 2:
								return 2944.3357f, 798.1301f, 0.1874f;
							case 3:
								return 3232.8027f, 1592.632f, 0.5625f;
							case 4:
								return 3120.3257f, 2173.747f, 0.3476f;
							default:
						}
						break;
					case 1:
						switch (bParam1)
						{
							case 0:
								return 2990.7686f, -1106.8007f, 0.1875f;
							case 1:
								return 3297.6428f, -1959.0717f, 0f;
							case 2:
								return 2504.6545f, -2305.0417f, 1.3125f;
							case 3:
								return 1742.4065f, -2807.717f, -0.375f;
							case 4:
								return 824.868f, -2654.722f, 0.375f;
							default:
						}
						break;
					case 2:
						switch (bParam1)
						{
							case 0:
								return 1347.839f, -3066.1494f, -0.5625f;
							case 1:
								return 675.9639f, -3253.6257f, 0f;
							case 2:
								return 251.1761f, -3645.4863f, -0.5625f;
							case 3:
								return -220.8856f, -2769.2131f, -0.5625f;
							case 4:
								return -540.3663f, -2587.3726f, 0.1875f;
							default:
						}
						break;
					case 3:
						switch (bParam1)
						{
							case 0:
								return -1727.4579f, -1781.4122f, -0.1875f;
							case 1:
								return -2155.4941f, -938.1028f, 0f;
							case 2:
								return -3068f, -484.3531f, 0f;
							case 3:
								return -3755.9397f, 404.5808f, 0.9375f;
							case 4:
								return -3355.5723f, 1176.286f, 0.5625f;
							default:
						}
						break;
					case 4:
						switch (bParam1)
						{
							case 0:
								return -3107.4763f, 1547.7842f, -0.375f;
							case 1:
								return -2527.2893f, 2562.0237f, -0.1875f;
							case 2:
								return -3180.5046f, 3368.533f, 0f;
							case 3:
								return -2528.755f, 4265.9336f, -0.3749f;
							case 4:
								return -2108.5166f, 5217.1235f, 0.375f;
							default:
						}
						break;
					}
			}
			break;
		case 0:
			if (func_245())
			{
				switch (bParam1)
				{
					case 0:
						return 1216.8092f, 2390.0403f, 64.5991f;
					case 1:
						return 2825.7395f, 1672.7787f, 23.6868f;
					case 2:
						return 1558.718f, 3795.3289f, 33.1075f;
					case 3:
						return -2173.835f, 4271.7466f, 47.9632f;
					case 4:
						return -2025.1311f, 3386.134f, 30.1418f;
					case 5:
						return 2734.5361f, 2781.9553f, 34.9415f;
					case 6:
						return 1217.9451f, 1842.5464f, 78.017f;
					case 7:
						return 1424.351f, 4379.4834f, 43.1031f;
					case 8:
						return 1578.1517f, 2200.2834f, 78.118f;
					case 9:
						return 2385.328f, 3149.508f, 46.1485f;
					default:
				}
			}
			else
			{
				switch (bParam1)
				{
					case 0:
						return 1250.3112f, -1912.972f, 37.5002f;
					case 1:
						return -642.7444f, -1726.9796f, 23.4018f;
					case 2:
						return -859.8107f, -2411.807f, 12.9444f;
					case 3:
						return -1180.4185f, -742.4754f, 18.931f;
					case 4:
						return -420.3352f, -328.6894f, 32.1081f;
					case 5:
						return 178.907f, -1481.6245f, 28.1418f;
					case 6:
						return 387.9558f, 61.9439f, 96.9779f;
					case 7:
						return 1374.4055f, -761.5962f, 66.2718f;
					case 8:
						return 2555.3665f, 406.5885f, 107.455f;
					case 9:
						return -3181.745f, 1096.728f, 19.8407f;
					}
				default:
			}
			break;
		default:
			switch (bParam3)
			{
				case 0:
					switch (bParam1)
					{
						case 0:
							return -1143.777f, -2223.1814f, 12.1958f;
						case 1:
							return -815.8469f, -771.4702f, 20.0395f;
						case 2:
							return -247.3628f, -252.8104f, 35.519f;
						case 3:
							return -20.1711f, -196.9198f, 51.3703f;
						case 4:
							return -1206.2441f, 332.5545f, 69.9894f;
						case 5:
							return -737.7712f, -271.9272f, 35.9486f;
						case 6:
							return -10.6554f, -1032.7806f, 27.9804f;
						case 7:
							return 203.926f, -1469.3774f, 28.1446f;
						case 8:
							return 1242.2141f, -3156.2065f, 4.5283f;
						case 9:
							return -3157.4482f, 1127.8721f, 19.844f;
						case 10:
							return -1805.8086f, -406.731f, 43.6066f;
						case 11:
							return -2091.8076f, -295.2459f, 12.0469f;
						case 12:
							return 1499.6403f, -1888.1902f, 70.8845f;
						case 13:
							return 521.9511f, -2731.8757f, 5.0571f;
						case 14:
							return 620.4022f, 193.6013f, 97.381f;
						case 15:
							return -2190.606f, -414.4555f, 12.1441f;
						case 16:
							return 2528.0896f, -311.8917f, 91.9929f;
						case 17:
							return 1475.0928f, 1140.7708f, 113.3343f;
						case 18:
							return -164.1015f, 976.5763f, 234.9009f;
						case 19:
							return -125.636f, -2244.6597f, 6.8117f;
						default:
					}
					break;
				case 1:
					switch (bParam1)
					{
						case 0:
							return -1133.3865f, -2229.2734f, 12.1957f;
						case 1:
							return -834.9979f, -771.7531f, 20.0186f;
						case 2:
							return -242.6335f, -240.8987f, 35.519f;
						case 3:
							return 1.871f, -202.816f, 51.742f;
						case 4:
							return -1208.8444f, 340.3609f, 70.0006f;
						case 5:
							return -727.7335f, -287.528f, 35.9482f;
						case 6:
							return -28.01f, -1030.5559f, 27.8435f;
						case 7:
							return 190.617f, -1454.1287f, 28.1416f;
						case 8:
							return 1242.0881f, -3148.6748f, 4.5282f;
						case 9:
							return -3170.3228f, 1126.0115f, 19.9681f;
						case 10:
							return -1792.4104f, -394.6852f, 44.0166f;
						case 11:
							return -2104.0642f, -294.0901f, 12.0469f;
						case 12:
							return 1458.824f, -1937.2811f, 70.3057f;
						case 13:
							return 529.5776f, -2736.3481f, 5.0569f;
						case 14:
							return 602.5372f, 147.507f, 97.0363f;
						case 15:
							return -2189.2864f, -384.7161f, 12.3121f;
						case 16:
							return 2490.0193f, -332.8641f, 91.9927f;
						case 17:
							return 1481.6548f, 1140.735f, 113.3343f;
						case 18:
							return -130.6895f, 1005.8308f, 234.732f;
						case 19:
							return -125.1937f, -2249.1235f, 6.8117f;
						default:
					}
					break;
				case 2:
					switch (bParam1)
					{
						case 0:
							return -1190.6583f, -2196.3591f, 12.1951f;
						case 1:
							return -810.0179f, -747.1166f, 22.3082f;
						case 2:
							return -243.9944f, -218.211f, 35.519f;
						case 3:
							return -47.888f, -188.9245f, 51.1469f;
						case 4:
							return -1194.6648f, 323.0352f, 69.7224f;
						case 5:
							return -703.6254f, -299.056f, 35.6984f;
						case 6:
							return -20.652f, -1017.7872f, 27.9166f;
						case 7:
							return 182.8745f, -1485.7114f, 28.1416f;
						case 8:
							return 1242.4669f, -3142.3396f, 4.5282f;
						case 9:
							return -3183.809f, 1088.8976f, 19.8407f;
						case 10:
							return -1784.5775f, -378.8281f, 43.9675f;
						case 11:
							return -2077.491f, -336.0633f, 12.1576f;
						case 12:
							return 1484.1759f, -1923.2976f, 70.2404f;
						case 13:
							return 492.0316f, -2718.3252f, 5.0576f;
						case 14:
							return 611.6172f, 168.9255f, 97.2794f;
						case 15:
							return -2205.85f, -370.1107f, 12.283f;
						case 16:
							return 2527.8977f, -307.077f, 91.9929f;
						case 17:
							return 1497.4729f, 1130.5264f, 113.3343f;
						case 18:
							return -105.4721f, 1004.1418f, 234.7601f;
						case 19:
							return -125.1227f, -2253.7258f, 6.8117f;
						default:
					}
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_413()//Position - 0x1DE3B
{
	if (func_245())
	{
		switch (Local_183.f_981)
		{
			case 0:
				return 1359.9974f, 3618.9417f, 33.8907f;
			case 1:
				return -111.2065f, 2804.2449f, 52.1193f;
			case 2:
				return 2647.5903f, 4256.4365f, 43.7722f;
			default:
		}
	}
	else
	{
		switch (Local_183.f_981)
		{
			case 0:
				return -3180.438f, 1027.7369f, 19.8186f;
			case 1:
				return 810.8981f, -1665.9731f, 28.3998f;
			case 2:
				return -828.5842f, -1263.4987f, 4.0004f;
			}
		default:
	}
	return -1193.2894f, -2245.7986f, 12.9446f;
}

int func_414()//Position - 0x1DF02
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	int* iVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	bVar4 = true;
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		Var0 = { __LIB_9__::func_861(Local_183.f_110) };
	}
	if (!func_453())
	{
		func_48(2);
		return 1;
	}
	if (!func_62(2))
	{
		if (func_453() || func_452(Var0, &Var1, &fVar2, &iVar3, 1, 1, 1))
		{
			bVar5 = false;
			while (bVar5 < func_72())
			{
				if (func_367())
				{
					iVar6 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
				}
				if (__LIB_0__::func_584(func_450(bVar5, iVar6)) && !NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_64[bVar5]))
				{
					if (func_453())
					{
						Var1 = { func_449(bVar5) };
						if (func_74())
						{
							iVar7 = 0;
							iVar8 = 0;
							fVar2 = -1f;
							iVar8 = 0;
							while (iVar8 < 32)
							{
								if (BitTest(Local_183.f_144, iVar8) && fVar2 == -1f)
								{
									if (iVar7 == bVar5)
									{
										fVar2 = func_447(iVar8);
									}
									else
									{
										iVar7++;
									}
								}
								iVar8++;
							}
						}
						else
						{
							fVar2 = func_447(bVar5);
						}
					}
					if (NETWORK::CAN_REGISTER_MISSION_VEHICLES(__LIB_41__::func_243(190, -1, 1, -1, -1, -1) + 1))
					{
						if (__LIB_18__::func_220(&(Local_183.f_64[bVar5]), func_450(bVar5, iVar6), Var1, fVar2, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
						{
							MISC::CLEAR_AREA(Var1, 5f, true, false, false, true);
							if (VEHICLE::IS_THIS_MODEL_A_BOAT(func_450(bVar5, iVar6)))
							{
								VEHICLE::SET_BOAT_ANCHOR(NETWORK::NET_TO_VEH(Local_183.f_64[bVar5]), true);
							}
							VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(NETWORK::NET_TO_VEH(Local_183.f_64[bVar5]), false);
							if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
							{
								if (DECORATOR::DECOR_EXIST_ON(NETWORK::NET_TO_ENT(Local_183.f_64[bVar5]), "MPBitset"))
								{
									iVar9 = DECORATOR::DECOR_GET_INT(NETWORK::NET_TO_ENT(Local_183.f_64[bVar5]), "MPBitset");
								}
								MISC::SET_BIT(&iVar9, 10);
								MISC::SET_BIT(&iVar9, 11);
								DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_ENT(Local_183.f_64[bVar5]), "MPBitset", iVar9);
							}
							if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Not_Allow_As_Saved_Veh", 3))
							{
								DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_ENT(Local_183.f_64[bVar5]), "Not_Allow_As_Saved_Veh", 1);
							}
							VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON_SYNCED(NETWORK::NET_TO_VEH(Local_183.f_64[bVar5]), false, false);
							if (func_74())
							{
								VEHICLE::SET_VEHICLE_DOOR_LATCHED(NETWORK::NET_TO_VEH(Local_183.f_64[bVar5]), 5, false, false, true);
								VEHICLE::SET_VEHICLE_DOOR_AUTO_LOCK(NETWORK::NET_TO_VEH(Local_183.f_64[bVar5]), 5, false);
								VEHICLE::SET_VEHICLE_DOOR_OPEN(NETWORK::NET_TO_VEH(Local_183.f_64[bVar5]), 5, false, true);
								VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(NETWORK::NET_TO_VEH(Local_183.f_64[bVar5]), 5, false);
							}
							VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(NETWORK::NET_TO_ENT(Local_183.f_64[bVar5]), false, 0);
							VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(NETWORK::NET_TO_VEH(Local_183.f_64[bVar5]), false);
							ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_ENT(Local_183.f_64[bVar5]), true);
							ENTITY::SET_ENTITY_CAN_BE_DAMAGED(NETWORK::NET_TO_ENT(Local_183.f_64[bVar5]), false);
							VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_NON_SCRIPT_PLAYERS(NETWORK::NET_TO_VEH(Local_183.f_64[bVar5]), true);
							VEHICLE::SET_DONT_ALLOW_PLAYER_TO_ENTER_VEHICLE_IF_LOCKED_FOR_PLAYER(NETWORK::NET_TO_VEH(Local_183.f_64[bVar5]), true);
							VEHICLE::SET_VEHICLE_CAN_BE_USED_BY_FLEEING_PEDS(NETWORK::NET_TO_VEH(Local_183.f_64[bVar5]), false);
							__LIB_1__::func_119(NETWORK::NET_TO_VEH(Local_183.f_64[bVar5]));
						}
					}
				}
				bVar5++;
			}
			bVar5 = false;
			while (bVar5 < func_72())
			{
				if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_64[bVar5]))
				{
					bVar4 = false;
				}
				bVar5++;
			}
		}
	}
	if (bVar4)
	{
		func_48(2);
	}
	return func_62(2);
}

float func_447(bool bParam0)//Position - 0x20C83
{
	switch (func_16())
	{
		case 8:
			if (func_245())
			{
				switch (bParam0)
				{
					case 0:
						return 326.1744f;
					case 1:
						return 64.0816f;
					case 2:
						return 3.6694f;
					case 3:
						return 289.179f;
					case 4:
						return 133.1368f;
					case 5:
						return 182.2973f;
					case 6:
						return 73.2189f;
					case 7:
						return 280.3667f;
					case 8:
						return 191.965f;
					case 9:
						return 284.7794f;
					case 10:
						return 123.9193f;
					case 11:
						return 90.1645f;
					case 12:
						return 267.8796f;
					case 13:
						return 157.3811f;
					case 14:
						return 251.7047f;
					default:
				}
			}
			else
			{
				switch (bParam0)
				{
					case 0:
						return 319.4816f;
					case 1:
						return 150.6088f;
					case 2:
						return 163.4438f;
					case 3:
						return 182.3829f;
					case 4:
						return 303.5831f;
					case 5:
						return 268.3745f;
					case 6:
						return 345.4465f;
					case 7:
						return 160.8462f;
					case 8:
						return 134.0958f;
					case 9:
						return 271.4576f;
					case 10:
						return 120.1265f;
					case 11:
						return 70.193f;
					case 12:
						return 250.75f;
					case 13:
						return 78.6663f;
					case 14:
						return 179.7139f;
					}
				default:
			}
			break;
		case 6:
			switch (Local_183.f_679)
			{
				case 0:
				case 1:
				case 2:
				case 3:
					switch (Local_183.f_981)
					{
						case 0:
							return 219.7995f;
						case 1:
							return 139.5962f;
						case 2:
							return 95.3967f;
						default:
					}
					break;
				case 4:
				case 5:
				case 6:
					switch (Local_183.f_981)
					{
						case 0:
							return 328.1974f;
						case 1:
							return 349.9958f;
						case 2:
							return 349.7461f;
						default:
					}
					break;
				case 7:
				case 8:
				case 9:
					switch (Local_183.f_981)
					{
						case 0:
							return 119.3972f;
						case 1:
							return 144.5977f;
						case 2:
							return 128.1968f;
						default:
					}
					break;
			}
			break;
		case 1:
			switch (bParam0)
			{
				case 0:
					return 218.1963f;
				case 1:
					return 207.9963f;
				case 2:
					return 142.7958f;
				case 3:
					return 32.1944f;
				case 4:
					return 164.5931f;
				case 5:
					return 46.3913f;
				case 6:
					return 19.9906f;
				case 7:
					return 61.7906f;
				case 8:
					return 278.1903f;
				case 9:
					return 338.1901f;
				case 10:
					return 168.5894f;
				case 11:
					return 324.4387f;
				case 12:
					return 143.2384f;
				case 13:
					return 213.0383f;
				case 14:
					return 38.4376f;
				case 15:
					return 186.6374f;
				case 16:
					return 334.4369f;
				case 17:
					return 29.6368f;
				case 18:
					return 50.6368f;
				case 19:
					return 213.2365f;
				default:
			}
			break;
		case 9:
			switch (Local_183.f_679)
			{
				case 0:
					switch (bParam0)
					{
						case 0:
							return 243.7813f;
						case 1:
							return 342.9691f;
						case 2:
							return 26.9593f;
						case 3:
							return 55.5273f;
						case 4:
							return 300.052f;
						case 5:
							return 329.7003f;
						case 6:
							return 328.7108f;
						case 7:
							return 314.9074f;
						case 8:
							return 144.371f;
						case 9:
							return 309.1066f;
						default:
					}
					break;
				case 1:
					switch (bParam0)
					{
						case 0:
							return 85.3844f;
						case 1:
							return 81.5624f;
						case 2:
							return 81.8903f;
						case 3:
							return 103.037f;
						case 4:
							return 71.677f;
						case 5:
							return 25.1165f;
						case 6:
							return 84.1133f;
						case 7:
							return 162.2021f;
						case 8:
							return 95.6473f;
						case 9:
							return 91.1218f;
						default:
					}
					break;
				case 2:
					switch (bParam0)
					{
						case 0:
							return 102.5394f;
						case 1:
							return 82.6778f;
						case 2:
							return 84.7616f;
						case 3:
							return 158.4868f;
						case 4:
							return 26.6431f;
						case 5:
							return 345.8311f;
						case 6:
							return 282.2448f;
						case 7:
							return 339.7124f;
						case 8:
							return 40.2085f;
						case 9:
							return 315.6408f;
						default:
					}
					break;
				case 3:
					switch (bParam0)
					{
						case 0:
							return 276.2263f;
						case 1:
							return 67.2248f;
						case 2:
							return 343.5057f;
						case 3:
							return 265.3102f;
						case 4:
							return 9.3989f;
						case 5:
							return 319.7345f;
						case 6:
							return 315.535f;
						case 7:
							return 17.7265f;
						case 8:
							return 298.2788f;
						case 9:
							return 299.6168f;
						default:
					}
					break;
				case 4:
					switch (bParam0)
					{
						case 0:
							return 266.1005f;
						case 1:
							return 29.6892f;
						case 2:
							return 6.8292f;
						case 3:
							return 38.3601f;
						case 4:
							return 174.9427f;
						case 5:
							return 139.6967f;
						case 6:
							return 125.0149f;
						case 7:
							return 137.8794f;
						case 8:
							return 44.445f;
						case 9:
							return 316.8491f;
						default:
					}
					break;
				case 5:
					switch (bParam0)
					{
						case 0:
							return 215.4694f;
						case 1:
							return 134.7844f;
						case 2:
							return 344.4861f;
						case 3:
							return 212.165f;
						case 4:
							return 180.2893f;
						case 5:
							return 147.6595f;
						case 6:
							return 163.6596f;
						case 7:
							return 230.3922f;
						case 8:
							return 157.3126f;
						case 9:
							return 228.4206f;
						default:
					}
					break;
				case 6:
					switch (bParam0)
					{
						case 0:
							return 170.3571f;
						case 1:
							return 126.5275f;
						case 2:
							return 165.452f;
						case 3:
							return 239.1617f;
						case 4:
							return 144.2343f;
						case 5:
							return 116.3512f;
						case 6:
							return 211.8666f;
						case 7:
							return 87.0125f;
						case 8:
							return 72.9686f;
						case 9:
							return 54.7701f;
						default:
					}
					break;
				case 7:
					switch (bParam0)
					{
						case 0:
							return 189.9574f;
						case 1:
							return 196.9416f;
						case 2:
							return 108.9773f;
						case 3:
							return 85.5548f;
						case 4:
							return 36.8923f;
						case 5:
							return 115.7591f;
						case 6:
							return 3.8811f;
						case 7:
							return 103.9374f;
						case 8:
							return 100.9714f;
						case 9:
							return 322.1032f;
						default:
					}
					break;
				case 8:
					switch (bParam0)
					{
						case 0:
							return 130.2432f;
						case 1:
							return 97.4911f;
						case 2:
							return 65.9888f;
						case 3:
							return 334.2624f;
						case 4:
							return 45.7468f;
						case 5:
							return 112.9685f;
						case 6:
							return 354.8338f;
						case 7:
							return 88.0793f;
						case 8:
							return 309.572f;
						case 9:
							return 1.5184f;
						default:
					}
					break;
				case 9:
					switch (bParam0)
					{
						case 0:
							return 182.8093f;
						case 1:
							return 299.7529f;
						case 2:
							return 14.2047f;
						case 3:
							return 344.0418f;
						case 4:
							return 47.0222f;
						case 5:
							return 1.9719f;
						case 6:
							return 132.8726f;
						case 7:
							return 77.8579f;
						case 8:
							return 11.4493f;
						case 9:
							return 153.1859f;
						default:
					}
					break;
			}
			break;
	}
	if (func_448())
	{
		return 100.5717f;
	}
	return 114.2482f;
}

int func_448()//Position - 0x216B9
{
	switch (func_16())
	{
		case 2:
		case 1:
			return 1;
		default:
	}
	return 0;
}

Vector3 func_449(bool bParam0)//Position - 0x216DB
{
	int iVar0;
	bool bVar1;
	switch (func_16())
	{
		case 8:
		case 1:
			bVar1 = false;
			while (bVar1 < 32)
			{
				if (BitTest(Local_183.f_144, bVar1))
				{
					if (iVar0 == bParam0)
					{
						return func_412(func_16(), bVar1, -1, -1, 0, 0);
					}
					else
					{
						iVar0++;
					}
				}
				bVar1++;
			}
			break;
		case 6:
			switch (Local_183.f_679)
			{
				case 0:
				case 1:
				case 2:
				case 3:
					switch (Local_183.f_981)
					{
						case 0:
							return 436.6976f, 3549.6567f, 32.2386f;
						case 1:
							return -105.0853f, 2796.5205f, 52.3561f;
						case 2:
							return 2644.6733f, 4252.4087f, 43.7828f;
						default:
					}
					break;
				case 4:
				case 5:
				case 6:
					switch (Local_183.f_981)
					{
						case 0:
							return -55.6317f, -2237.4856f, 6.8116f;
						case 1:
							return 793.4781f, -1598.91f, 30.2601f;
						case 2:
							return -826.1995f, -1263.9568f, 4.0004f;
						default:
					}
					break;
				case 7:
				case 8:
				case 9:
					switch (Local_183.f_981)
					{
						case 0:
							return -3195.3184f, 947.9199f, 15.6207f;
						case 1:
							return 1303.0455f, 1446.0508f, 98.3667f;
						case 2:
							return 260.1804f, 894.4424f, 208.2057f;
						default:
					}
					break;
			}
			break;
		case 9:
			return func_412(9, bParam0, Local_183.f_679, bParam0, 0, 0);
			break;
		case 3:
			return -1193.2894f, -2245.7986f, 12.9446f;
		case 4:
			return -1193.2894f, -2245.7986f, 12.9446f;
		case 5:
			return -1193.2894f, -2245.7986f, 12.9446f;
		case 7:
			return -1193.2894f, -2245.7986f, 12.9446f;
	}
	return -1193.2894f, -2245.7986f, 12.9446f;
}

int func_450(bool bParam0, int iParam1)//Position - 0x21919
{
	switch (func_16())
	{
		case 1:
			return func_451(iParam1);
		case 8:
			return joaat("benson");
		case 9:
			switch (Local_183.f_679)
			{
				case 1:
					if (((bParam0 == 4 || bParam0 == 6) || bParam0 == 7) || bParam0 == 8)
					{
						return joaat("rebel");
					}
					break;
				case 2:
					if ((bParam0 == 3 || bParam0 == 6) || bParam0 == 7)
					{
						return joaat("rebel");
					}
					break;
				case 3:
					if ((bParam0 == 4 || bParam0 == 6) || bParam0 == 7)
					{
						return joaat("rebel");
					}
					break;
				case 4:
					if (bParam0 == 7)
					{
						return joaat("rebel");
					}
					break;
				case 5:
					if (bParam0 == 1)
					{
						return joaat("rebel");
					}
					break;
				case 6:
					if (bParam0 == 2)
					{
						return joaat("rebel");
					}
					break;
				case 8:
					if (bParam0 == 4)
					{
						return joaat("rebel");
					}
					break;
			}
			return joaat("suntrap");
		case 6:
			switch (Local_183.f_981)
			{
				case 0:
					return joaat("landstalker");
				case 1:
					if (Local_183.f_679 == 0)
					{
						return joaat("schafter3");
					}
					return joaat("schafter2");
				case 2:
					if (Local_183.f_679 == 2)
					{
						return joaat("baller");
					}
					return joaat("zion");
				default:
			}
			break;
	}
	return joaat("gburrito");
}

int func_451(int iParam0)//Position - 0x21AB2
{
	int iVar0;
	if (iParam0 == 0)
	{
		iVar0 = joaat("marquis");
	}
	else if (iParam0 == 1)
	{
		iVar0 = joaat("dinghy3");
	}
	else if (iParam0 == 2)
	{
		iVar0 = joaat("tropic");
	}
	else
	{
		iVar0 = joaat("tug");
	}
	return iVar0;
}

int func_452(struct<3> Param0, var* uParam1, float* fParam2, int* iParam3, int iParam4, int iParam5, bool bParam6)//Position - 0x21AF3
{
	int iVar0;
	while (true)
	{
		if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(Param0, iParam4, uParam1, fParam2, iParam3, 1, 3f, 0f))
		{
			if (__LIB_36__::func_561(*uParam1, 10f, 1f, 1f, 5f, iParam5, bParam6, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
			{
				return 1;
			}
		}
		iParam4++;
		iVar0++;
		if (iVar0 > 75)
		{
			*uParam1 = { Param0 };
			return 0;
		}
	}
	return 0;
}

int func_453()//Position - 0x21B65
{
	switch (func_16())
	{
		case 1:
		case 8:
		case 9:
			return 1;
		default:
	}
	return 0;
}

int func_454()//Position - 0x21B8D
{
	bool bVar0;
	if (func_62(1))
	{
		return 1;
	}
	if (!func_25())
	{
		bVar0 = false;
		while (bVar0 < func_14())
		{
			if (func_455(bVar0))
			{
			}
			bVar0++;
		}
		bVar0 = false;
		while (bVar0 < func_14())
		{
			if (!ENTITY::DOES_ENTITY_EXIST(func_13(bVar0)))
			{
				return 0;
			}
			bVar0++;
		}
	}
	func_48(1);
	return 1;
}

int func_455(bool bParam0)//Position - 0x21BF4
{
	struct<31> Var0;
	struct<3> Var1;
	int iVar2;
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_59[bParam0]))
	{
		if (func_463(bParam0, &(Local_183.f_48), &(Local_183.f_51)))
		{
			if (!__LIB_0__::func_78(Local_183.f_48, 0f, 0f, 0f, 0))
			{
				if (bParam0 == 0 || (bParam0 > 0 && BitTest(Local_183.f_46, (bParam0 - 1))))
				{
					if (!BitTest(Local_183.f_46, bParam0))
					{
						if (__LIB_0__::func_584(func_462()))
						{
							Var0.f_4 = 1125515264;
							Var0.f_5 = 1;
							Var0.f_6 = 1;
							Var0.f_8 = 1082130432;
							Var0.f_9 = 1176255488;
							Var0.f_10 = 1;
							Var0.f_13 = 1;
							Var0.f_15 = 2;
							Var0.f_22 = 2;
							Var0.f_25 = 1;
							Var0.f_26 = 1;
							Var0.f_29 = 1123024896;
							Var0.f_30 = 1;
							Var0.f_0 = 0f;
							Var0.f_1 = 0;
							Var0.f_4 = 200f;
							Var0.f_5 = 0;
							if (!func_448() && !func_461())
							{
								Var0.f_6 = 1;
							}
							else
							{
								Var0.f_6 = 0;
							}
							Var0.f_12 = 1;
							Var0.f_3 = 1;
							Var1 = { __LIB_28__::func_369(Local_183.f_48, Local_183.f_51, 20f) };
							if (func_87(Local_183.f_48, Var1, func_462(), 0, &(Local_183.f_28[bParam0 /*3*/]), &(Local_183.f_41[bParam0]), &Var0))
							{
								MISC::SET_BIT(&(Local_183.f_46), bParam0);
							}
						}
					}
				}
			}
		}
		if (func_461())
		{
			func_463(bParam0, &(Local_183.f_28[bParam0 /*3*/]), &(Local_183.f_41[bParam0]));
		}
		if (__LIB_0__::func_584(func_462()))
		{
			if (NETWORK::CAN_REGISTER_MISSION_VEHICLES(__LIB_41__::func_243(190, -1, 1, -1, -1, -1)))
			{
				if (BitTest(Local_183.f_46, bParam0))
				{
					if (__LIB_18__::func_220(&(Local_183.f_59[bParam0]), func_462(), Local_183.f_28[bParam0 /*3*/], Local_183.f_41[bParam0], 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
					{
						NETWORK::NETWORK_FADE_IN_ENTITY(NETWORK::NET_TO_VEH(Local_183.f_59[bParam0]), true, 1);
						MISC::CLEAR_AREA_OF_VEHICLES(Local_183.f_28[bParam0 /*3*/], 20f, false, false, false, false, false, false, 0);
						if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
						{
							if (DECORATOR::DECOR_EXIST_ON(func_13(bParam0), "MPBitset"))
							{
								iVar2 = DECORATOR::DECOR_GET_INT(func_13(bParam0), "MPBitset");
							}
							MISC::SET_BIT(&iVar2, 10);
							MISC::SET_BIT(&iVar2, 11);
							DECORATOR::DECOR_SET_INT(func_13(bParam0), "MPBitset", iVar2);
						}
						if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Not_Allow_As_Saved_Veh", 3))
						{
							DECORATOR::DECOR_SET_INT(func_13(bParam0), "Not_Allow_As_Saved_Veh", 1);
						}
						if (!func_6())
						{
							__LIB_34__::func_469(func_13(bParam0), bParam0, 1623637790, 0, 0);
						}
						if (func_461())
						{
							if (VEHICLE::CAN_ANCHOR_BOAT_HERE_IGNORE_PLAYERS(func_13(bParam0)))
							{
								VEHICLE::SET_BOAT_ANCHOR(func_13(bParam0), true);
							}
							VEHICLE::SET_VEHICLE_COLOURS(func_13(bParam0), 12, 12);
							VEHICLE::SET_VEHICLE_EXTRA_COLOURS(func_13(bParam0), 12, 0);
						}
						if (func_448())
						{
							ENTITY::SET_ENTITY_MAX_HEALTH(func_13(bParam0), Global_262145.f_15623 /* Tunable: EXEC_SELL_PLANE_HEALTH */);
							ENTITY::SET_ENTITY_HEALTH(func_13(bParam0), Global_262145.f_15623 /* Tunable: EXEC_SELL_PLANE_HEALTH */, 0);
							VEHICLE::SET_VEHICLE_CAN_BREAK(func_13(bParam0), false);
							if (func_367())
							{
								VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(func_13(bParam0), false);
							}
						}
						else
						{
							VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(func_13(bParam0), SYSTEM::TO_FLOAT(Global_262145.f_15627 /* Tunable: EXEC_SELL_BRICKADE_HEALTH */));
							VEHICLE::SET_VEHICLE_BODY_HEALTH(func_13(bParam0), SYSTEM::TO_FLOAT(Global_262145.f_15627 /* Tunable: EXEC_SELL_BRICKADE_HEALTH */));
							VEHICLE::SET_VEHICLE_ENGINE_HEALTH(func_13(bParam0), SYSTEM::TO_FLOAT(Global_262145.f_15627 /* Tunable: EXEC_SELL_BRICKADE_HEALTH */));
							VEHICLE::SET_VEHICLE_COLOURS(func_13(bParam0), 17, 12);
							VEHICLE::SET_VEHICLE_EXTRA_COLOURS(func_13(bParam0), 1, 156);
							VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(func_13(bParam0), false);
						}
						VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(func_13(bParam0), false, 0);
						VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_NON_SCRIPT_PLAYERS(func_13(bParam0), true);
						VEHICLE::SET_DONT_ALLOW_PLAYER_TO_ENTER_VEHICLE_IF_LOCKED_FOR_PLAYER(func_13(bParam0), true);
						VEHICLE::SET_VEHICLE_CAN_BE_USED_BY_FLEEING_PEDS(func_13(bParam0), false);
						VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(func_13(bParam0), false);
						if (!func_448())
						{
							VEHICLE::SET_VEHICLE_STRONG(func_13(bParam0), true);
						}
						VEHICLE::SET_VEHICLE_USES_MP_PLAYER_DAMAGE_MULTIPLIER(func_13(bParam0), 0);
						VEHICLE::SET_VEHICLE_DAMAGE_SCALE(func_13(bParam0), Global_262145.f_18555 /* Tunable: -1700317793 */);
						ENTITY::SET_ENTITY_INVINCIBLE(func_13(bParam0), true);
						ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(func_13(bParam0), true);
						if (func_19() || (func_17() && Local_183.f_957 != 0))
						{
							VEHICLE::SET_VEHICLE_INDIVIDUAL_DOORS_LOCKED(func_13(bParam0), 2, 2);
							VEHICLE::SET_VEHICLE_INDIVIDUAL_DOORS_LOCKED(func_13(bParam0), 3, 2);
						}
						__LIB_1__::func_119(func_13(bParam0));
						Local_183.f_48 = { 0f, 0f, 0f };
						Local_183.f_52 = 0;
						return 1;
					}
				}
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_461()//Position - 0x221AC
{
	switch (func_16())
	{
		case 9:
			return 1;
		default:
	}
	return 0;
}

int func_462()//Position - 0x221C8
{
	switch (func_16())
	{
		case 3:
			return joaat("trash2");
		case 6:
			return joaat("bagger");
		case 4:
			return joaat("vindicator");
		case 8:
			return joaat("bagger");
		case 11:
			return joaat("bagger");
		case 5:
			return joaat("boxville4");
		case 2:
			return joaat("buzzard2");
		case 9:
			return joaat("dinghy3");
		case 1:
			return joaat("dodo");
		case 0:
		case 7:
			if (Local_183.f_957 == 0)
			{
				return joaat("ratloader2");
			}
			else if (Local_183.f_957 == 1)
			{
				return joaat("gburrito2");
			}
			return joaat("pounder");
			break;
	}
	return joaat("slamvan2");
}

int func_463(bool bParam0, var uParam1, var uParam2)//Position - 0x2229A
{
	struct<31> Var0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	bool bVar4;
	if (func_61())
	{
		if (bParam0 == 0 || (bParam0 > 0 && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_59[(bParam0 - 1)])))
		{
			if (!__LIB_0__::func_86(*uParam1))
			{
				return 1;
			}
			Var0.f_4 = 1125515264;
			Var0.f_5 = 1;
			Var0.f_6 = 1;
			Var0.f_8 = 1082130432;
			Var0.f_9 = 1176255488;
			Var0.f_10 = 1;
			Var0.f_13 = 1;
			Var0.f_15 = 2;
			Var0.f_22 = 2;
			Var0.f_25 = 1;
			Var0.f_26 = 1;
			Var0.f_29 = 1123024896;
			Var0.f_30 = 1;
			Var0.f_0 = 0f;
			Var0.f_1 = 0;
			Var0.f_4 = 200f;
			Var0.f_6 = 1;
			Var0.f_5 = 0;
			Var0.f_12 = 1;
			Var0.f_3 = 1;
			Var2 = { func_363(bParam0, Local_183.f_52, Local_183.f_110, Local_183.f_957, func_470()) };
			fVar3 = func_469(bParam0, Local_183.f_52, Local_183.f_110, Local_183.f_957, func_470());
			Var1 = { __LIB_28__::func_369(Var2, fVar3, 20f) };
			if (func_87(Var2, Var1, func_462(), 0, &Var2, &fVar3, &Var0))
			{
				*uParam1 = { Var2 };
				*uParam2 = fVar3;
				Local_183.f_28[bParam0 /*3*/] = { *uParam1 };
				Local_183.f_41[bParam0] = *uParam2;
				return 1;
			}
			else
			{
				if (Global_2667225.f_682 > 1)
				{
					if (Global_2667225.f_676 > 2)
					{
						bVar4 = true;
					}
				}
				if (!__LIB_0__::func_86(Global_2667225.f_683))
				{
					if (Global_2667225.f_676 > 2)
					{
						if (!__LIB_0__::func_78(Global_2667225.f_683, Var2, 0))
						{
							bVar4 = true;
						}
					}
				}
				if (bVar4)
				{
					Global_2667225.f_676 = 0;
					__LIB_0__::func_639();
					__LIB_0__::func_599();
					Local_183.f_52++;
					if (Local_183.f_52 > 2)
					{
						*uParam1 = { func_363(bParam0, 0, Local_183.f_110, Local_183.f_957, 0) };
						*uParam2 = func_469(bParam0, 0, Local_183.f_110, Local_183.f_957, 0);
						Local_183.f_28[bParam0 /*3*/] = { *uParam1 };
						Local_183.f_41[bParam0] = *uParam2;
						return 1;
					}
				}
			}
		}
	}
	else if (func_448())
	{
		*uParam1 = { func_468(bParam0) };
		*uParam2 = func_466(bParam0);
		return 1;
	}
	else if (func_461())
	{
		*uParam1 = { func_465(bParam0) };
		*uParam2 = func_464(bParam0);
		return 1;
	}
	return 0;
}

float func_464(int iParam0)//Position - 0x22504
{
	switch (func_16())
	{
		case 9:
			if (func_245())
			{
				switch (Local_183.f_679)
				{
					case 0:
						switch (iParam0)
						{
							case 0:
								return 147.5271f;
							case 1:
								return 154.7648f;
							case 2:
								return 174.3838f;
							default:
						}
						break;
					case 1:
						switch (iParam0)
						{
							case 0:
								return 327.4666f;
							case 1:
								return 357.546f;
							case 2:
								return 39.2522f;
							default:
						}
						break;
					case 2:
						switch (iParam0)
						{
							case 0:
								return 266.595f;
							case 1:
								return 324.9111f;
							case 2:
								return 356.9818f;
							default:
						}
						break;
					case 3:
						switch (iParam0)
						{
							case 0:
								return 293.786f;
							case 1:
								return 314.3035f;
							case 2:
								return 279.6294f;
							default:
						}
						break;
					case 4:
						switch (iParam0)
						{
							case 0:
								return 299.3501f;
							case 1:
								return 298.1051f;
							case 2:
								return 327.6068f;
							default:
						}
						break;
				}
			}
			else
			{
				switch (Local_183.f_679)
				{
					case 0:
						switch (iParam0)
						{
							case 0:
								return 280.2248f;
							case 1:
								return 290f;
							case 2:
								return 292.9998f;
							default:
						}
						break;
					case 1:
						switch (iParam0)
						{
							case 0:
								return 272.0344f;
							case 1:
								return 268.581f;
							case 2:
								return 271.7284f;
							default:
						}
						break;
					case 2:
						switch (iParam0)
						{
							case 0:
								return 96.4944f;
							case 1:
								return 78.458f;
							case 2:
								return 101.9711f;
							default:
						}
						break;
					case 3:
						switch (iParam0)
						{
							case 0:
								return 111.1444f;
							case 1:
								return 129.8609f;
							case 2:
								return 118.5472f;
							default:
						}
						break;
					case 4:
						switch (iParam0)
						{
							case 0:
								return 87.1994f;
							case 1:
								return 87.1994f;
							case 2:
								return 87.1995f;
							default:
						}
						break;
					}
			}
			break;
	}
	return 0f;
}

Vector3 func_465(int iParam0)//Position - 0x22783
{
	switch (func_16())
	{
		case 9:
			if (func_245())
			{
				switch (Local_183.f_679)
				{
					case 0:
						switch (iParam0)
						{
							case 0:
								return 1669.8384f, 4463.1235f, 30.2346f;
							case 1:
								return 1639.4177f, 4463.4346f, 30.2346f;
							case 2:
								return 1689.9756f, 4447.0337f, 30.2346f;
							default:
						}
						break;
					case 1:
						switch (iParam0)
						{
							case 0:
								return -2474.6245f, 4298.621f, -0.5996f;
							case 1:
								return -2466.8176f, 4320.2007f, 0.7852f;
							case 2:
								return -2482.8577f, 4284.5923f, 0.7852f;
							default:
						}
						break;
					case 2:
						switch (iParam0)
						{
							case 0:
								return 210.034f, 7105.6245f, 0.8233f;
							case 1:
								return 222.346f, 7102.231f, 0.8233f;
							case 2:
								return 192.3831f, 7113.8994f, 0.7619f;
							default:
						}
						break;
					case 3:
						switch (iParam0)
						{
							case 0:
								return 3875.1858f, 4438.681f, 0f;
							case 1:
								return 3890.5002f, 4431.8433f, 0.2249f;
							case 2:
								return 3874.457f, 4451.473f, 0.3764f;
							default:
						}
						break;
					case 4:
						switch (iParam0)
						{
							case 0:
								return 3383.3645f, 5199.885f, 0.334f;
							case 1:
								return 3392.5571f, 5191.6997f, 0.334f;
							case 2:
								return 3374.513f, 5207.5205f, 0.334f;
							default:
						}
						break;
				}
			}
			else
			{
				switch (Local_183.f_679)
				{
					case 0:
						switch (iParam0)
						{
							case 0:
								return 2861.4062f, -589.7202f, 0.0375f;
							case 1:
								return 2854.2185f, -571.7832f, -0.0609f;
							case 2:
								return 2866.6196f, -606.0164f, -0.1215f;
							default:
						}
						break;
					case 1:
						switch (iParam0)
						{
							case 0:
								return 2861.6638f, -772.0405f, 0.4f;
							case 1:
								return 2864.028f, -797.7262f, 0.4f;
							case 2:
								return 2852.859f, -761.8168f, 0.4937f;
							default:
						}
						break;
					case 2:
						switch (iParam0)
						{
							case 0:
								return 1153.1974f, -2707.234f, 0.2712f;
							case 1:
								return 1152.6727f, -2722.8694f, 0.2712f;
							case 2:
								return 1146.2687f, -2696.7698f, 0.3314f;
							default:
						}
						break;
					case 3:
						switch (iParam0)
						{
							case 0:
								return -823.7054f, -1421.909f, 0.3542f;
							case 1:
								return -814.55f, -1428.7703f, 0.3542f;
							case 2:
								return -820.3769f, -1412.6f, 0.3492f;
							default:
						}
						break;
					case 4:
						switch (iParam0)
						{
							case 0:
								return -3142.3296f, 603.1377f, -0.1875f;
							case 1:
								return -3145.5972f, 590.7033f, 0f;
							case 2:
								return -3140.239f, 596.7289f, 0.3751f;
							default:
						}
						break;
					}
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_466(int iParam0)//Position - 0x22B28
{
	if (func_467())
	{
		if (func_367())
		{
			switch (iParam0)
			{
				case 0:
					return 125.7982f;
				case 1:
					return 138.1985f;
				case 2:
					return 120.5984f;
				}
			default:
		}
		switch (iParam0)
		{
			case 0:
				return 59.9954f;
			case 1:
				return 59.9954f;
			case 2:
				return 59.9954f;
			default:
		}
	}
	else
	{
		if (func_367())
		{
			switch (iParam0)
			{
				case 0:
					return 231.1979f;
				case 1:
					return 220.9979f;
				case 2:
					return 200.5979f;
				}
			default:
		}
		switch (iParam0)
		{
			case 0:
				return 329.1958f;
			case 1:
				return 88.7981f;
			case 2:
				return 11.9956f;
			}
		default:
	}
	return 0f;
}

int func_467()//Position - 0x22C0D
{
	switch (Local_183.f_0)
	{
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
			return 1;
			break;
	}
	return 0;
}

Vector3 func_468(int iParam0)//Position - 0x22C61
{
	if (func_467())
	{
		if (func_367())
		{
			switch (iParam0)
			{
				case 0:
					return -2167.467f, -464.1693f, 1.2103f;
				case 1:
					return -2140.7605f, -497.2295f, 1.142f;
				case 2:
					return -2117.4033f, -518.1268f, 1.1092f;
				}
			default:
		}
		switch (iParam0)
		{
			case 0:
				return -981.4223f, -2994.7407f, 12.9451f;
			case 1:
				return -1009.0402f, -3014.9033f, 12.9451f;
			case 2:
				return -1008.8029f, -2992.5898f, 12.9451f;
			default:
		}
	}
	else
	{
		if (func_367())
		{
			switch (iParam0)
			{
				case 0:
					return 2110.3616f, 4605.95f, 32.5004f;
				case 1:
					return 2098.7617f, 4580.9136f, 31.7869f;
				case 2:
					return 2067.8223f, 4568.9736f, 32.3914f;
				}
			default:
		}
		switch (iParam0)
		{
			case 0:
				return 2090.6863f, 4757.17f, 40.5952f;
			case 1:
				return 2106.5464f, 4768.953f, 40.2101f;
			case 2:
				return 2066.1453f, 4752.323f, 40.5033f;
			}
		default:
	}
	return 0f, 0f, 0f;
}

float func_469(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4)//Position - 0x22DC0
{
	int iVar0;
	iVar0 = uParam2;
	if (iParam4 && iParam3 == 2)
	{
		switch (iVar0)
		{
			case 7:
				return 249.5883f;
			case 10:
				return 340.799f;
			case 8:
				return 226.7973f;
			case 9:
				return 295.592f;
			case 6:
				return 20.1886f;
			case 17:
				return 233.9995f;
			case 20:
				return 44.233f;
			case 16:
				return 150.9631f;
			case 19:
				return 178.5457f;
			case 18:
				return 0.3221f;
			case 12:
				return 25.2f;
			case 15:
				return 257.1545f;
			case 13:
				return 336.3971f;
			case 14:
				return 189.1967f;
			case 11:
				return 355.5965f;
			case 2:
				return 357.7957f;
			case 5:
				return 314.995f;
			case 3:
				return 134.594f;
			case 4:
				return 228.9938f;
			case 1:
				return 30.7923f;
			default:
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				switch (iVar0)
				{
					case 7:
						switch (iParam0)
						{
							case 0:
								return 341.5062f;
							case 1:
								return 339.2488f;
							case 2:
								return 340.5622f;
							case 3:
								return 249.5883f;
							default:
						}
						break;
					case 10:
						switch (iParam0)
						{
							case 0:
								return 160.7998f;
							case 1:
								return 160.5997f;
							case 2:
								return 159.9997f;
							case 3:
								return 340.799f;
							default:
						}
						break;
					case 8:
						switch (iParam0)
						{
							case 0:
								return 226.9976f;
							case 1:
								return 226.9976f;
							case 2:
								return 226.9976f;
							case 3:
								return 226.7973f;
							default:
						}
						break;
					case 9:
						switch (iParam0)
						{
							case 0:
								return 294.9953f;
							case 1:
								return 294.9953f;
							case 2:
								return 294.9953f;
							case 3:
								return 295.592f;
							default:
						}
						break;
					case 6:
						switch (iParam0)
						{
							case 0:
								return 34.9908f;
							case 1:
								return 32.9908f;
							case 2:
								return 30.9908f;
							case 3:
								return 20.1886f;
							default:
						}
						break;
					case 17:
						switch (iParam0)
						{
							case 0:
								return 234.6001f;
							case 1:
								return 234.6001f;
							case 2:
								return 234.6001f;
							case 3:
								return 233.9995f;
							default:
						}
						break;
					case 20:
						switch (iParam0)
						{
							case 0:
								return 358.7308f;
							case 1:
								return 358.7193f;
							case 2:
								return 90.2674f;
							case 3:
								return 44.233f;
							default:
						}
						break;
					case 16:
						switch (iParam0)
						{
							case 0:
								return 90.5574f;
							case 1:
								return 359.4268f;
							case 2:
								return 358.5126f;
							case 3:
								return 150.9631f;
							default:
						}
						break;
					case 19:
						switch (iParam0)
						{
							case 0:
								return 139.0354f;
							case 1:
								return 140.0933f;
							case 2:
								return 180.4328f;
							case 3:
								return 178.5457f;
							default:
						}
						break;
					case 18:
						switch (iParam0)
						{
							case 0:
								return 89.4132f;
							case 1:
								return 147.4095f;
							case 2:
								return 149.9085f;
							case 3:
								return 0.3221f;
							default:
						}
						break;
					case 12:
						switch (iParam0)
						{
							case 0:
								return 112.1987f;
							case 1:
								return 110.3987f;
							case 2:
								return 127.1985f;
							case 3:
								return 25.2f;
							default:
						}
						break;
					case 15:
						switch (iParam0)
						{
							case 0:
								return 192.5977f;
							case 1:
								return 277.5977f;
							case 2:
								return 223.1979f;
							case 3:
								return 257.1545f;
							default:
						}
						break;
					case 13:
						switch (iParam0)
						{
							case 0:
								return 260.3974f;
							case 1:
								return 260.3974f;
							case 2:
								return 260.3974f;
							case 3:
								return 336.3971f;
							default:
						}
						break;
					case 14:
						switch (iParam0)
						{
							case 0:
								return 184.1966f;
							case 1:
								return 184.1966f;
							case 2:
								return 184.1966f;
							case 3:
								return 189.1967f;
							default:
						}
						break;
					case 11:
						switch (iParam0)
						{
							case 0:
								return 348.1965f;
							case 1:
								return 348.1965f;
							case 2:
								return 348.1965f;
							case 3:
								return 355.5965f;
							default:
						}
						break;
					case 2:
						switch (iParam0)
						{
							case 0:
								return 354.1997f;
							case 1:
								return 350.1997f;
							case 2:
								return 353.1997f;
							case 3:
								return 357.7957f;
							default:
						}
						break;
					case 5:
						switch (iParam0)
						{
							case 0:
								return 314.995f;
							case 1:
								return 314.995f;
							case 2:
								return 314.995f;
							case 3:
								return 314.995f;
							default:
						}
						break;
					case 3:
						switch (iParam0)
						{
							case 0:
								return 134.594f;
							case 1:
								return 134.594f;
							case 2:
								return 134.594f;
							case 3:
								return 134.594f;
							default:
						}
						break;
					case 4:
						switch (iParam0)
						{
							case 0:
								return 226.9938f;
							case 1:
								return 226.9938f;
							case 2:
								return 226.9938f;
							case 3:
								return 228.9938f;
							default:
						}
						break;
					case 1:
						switch (iParam0)
						{
							case 0:
								return 30.7923f;
							case 1:
								return 30.7923f;
							case 2:
								return 30.7923f;
							case 3:
								return 30.7923f;
							default:
						}
						break;
				}
				break;
			case 1:
				switch (iVar0)
				{
					case 7:
						switch (iParam0)
						{
							case 0:
								return 249.8551f;
							case 1:
								return 248.7611f;
							case 2:
								return 341.4139f;
							case 3:
								return 251.1714f;
							default:
						}
						break;
					case 10:
						switch (iParam0)
						{
							case 0:
								return 341.399f;
							case 1:
								return 341.399f;
							case 2:
								return 341.399f;
							case 3:
								return 161.5993f;
							default:
						}
						break;
					case 8:
						switch (iParam0)
						{
							case 0:
								return 121.9971f;
							case 1:
								return 121.9971f;
							case 2:
								return 121.9971f;
							case 3:
								return 123.3971f;
							default:
						}
						break;
					case 9:
						switch (iParam0)
						{
							case 0:
								return 115.1943f;
							case 1:
								return 115.1943f;
							case 2:
								return 115.1943f;
							case 3:
								return 114.7914f;
							default:
						}
						break;
					case 6:
						switch (iParam0)
						{
							case 0:
								return 62.3901f;
							case 1:
								return 75.79f;
							case 2:
								return 109.9899f;
							case 3:
								return 120.7884f;
							default:
						}
						break;
					case 17:
						switch (iParam0)
						{
							case 0:
								return 299.9998f;
							case 1:
								return 299.9998f;
							case 2:
								return 299.9998f;
							case 3:
								return 269.7981f;
							default:
						}
						break;
					case 20:
						switch (iParam0)
						{
							case 0:
								return 1.0299f;
							case 1:
								return 0.7598f;
							case 2:
								return 0.8382f;
							case 3:
								return 333.4183f;
							default:
						}
						break;
					case 16:
						switch (iParam0)
						{
							case 0:
								return 0.1963f;
							case 1:
								return 0.2369f;
							case 2:
								return 89.2356f;
							case 3:
								return 111.3352f;
							default:
						}
						break;
					case 19:
						switch (iParam0)
						{
							case 0:
								return 91.643f;
							case 1:
								return 90.3414f;
							case 2:
								return 22.7655f;
							case 3:
								return 90.5753f;
							default:
						}
						break;
					case 18:
						switch (iParam0)
						{
							case 0:
								return 88.9654f;
							case 1:
								return 88.9654f;
							case 2:
								return 0.489f;
							case 3:
								return 91.5284f;
							default:
						}
						break;
					case 12:
						switch (iParam0)
						{
							case 0:
								return 78.9995f;
							case 1:
								return 73.9995f;
							case 2:
								return 68.9994f;
							case 3:
								return 74.1999f;
							default:
						}
						break;
					case 15:
						switch (iParam0)
						{
							case 0:
								return 0.9999f;
							case 1:
								return 7.1999f;
							case 2:
								return 13.3999f;
							case 3:
								return 258.3402f;
							default:
						}
						break;
					case 13:
						switch (iParam0)
						{
							case 0:
								return 255.3967f;
							case 1:
								return 256.5966f;
							case 2:
								return 262.7966f;
							case 3:
								return 271.996f;
							default:
						}
						break;
					case 14:
						switch (iParam0)
						{
							case 0:
								return 273.1965f;
							case 1:
								return 273.1965f;
							case 2:
								return 273.1965f;
							case 3:
								return 5.5963f;
							default:
						}
						break;
					case 11:
						switch (iParam0)
						{
							case 0:
								return 352.9965f;
							case 1:
								return 352.9965f;
							case 2:
								return 351.1965f;
							case 3:
								return 348.3964f;
							default:
						}
						break;
					case 2:
						switch (iParam0)
						{
							case 0:
								return 265.1992f;
							case 1:
								return 266.3993f;
							case 2:
								return 266.3993f;
							case 3:
								return 267.7954f;
							default:
						}
						break;
					case 5:
						switch (iParam0)
						{
							case 0:
								return 314.7944f;
							case 1:
								return 44.3943f;
							case 2:
								return 43.1943f;
							case 3:
								return 45.1943f;
							default:
						}
						break;
					case 3:
						switch (iParam0)
						{
							case 0:
								return 134.594f;
							case 1:
								return 134.594f;
							case 2:
								return 134.594f;
							case 3:
								return 134.594f;
							default:
						}
						break;
					case 4:
						switch (iParam0)
						{
							case 0:
								return 224.994f;
							case 1:
								return 194.3941f;
							case 2:
								return 177.7943f;
							case 3:
								return 143.5941f;
							default:
						}
						break;
					case 1:
						switch (iParam0)
						{
							case 0:
								return 27.1922f;
							case 1:
								return 27.1922f;
							case 2:
								return 27.1922f;
							case 3:
								return 27.1922f;
							default:
						}
						break;
				}
				break;
			case 2:
				switch (iVar0)
				{
					case 7:
						switch (iParam0)
						{
							case 0:
								return 339.6511f;
							case 1:
								return 250.1768f;
							case 2:
								return 250.5529f;
							case 3:
								return 250.8644f;
							default:
						}
						break;
					case 10:
						switch (iParam0)
						{
							case 0:
								return 340.5994f;
							case 1:
								return 340.5994f;
							case 2:
								return 340.5994f;
							case 3:
								return 341.399f;
							default:
						}
						break;
					case 8:
						switch (iParam0)
						{
							case 0:
								return 223.3969f;
							case 1:
								return 223.3969f;
							case 2:
								return 223.3969f;
							case 3:
								return 222.1969f;
							default:
						}
						break;
					case 9:
						switch (iParam0)
						{
							case 0:
								return 305.9928f;
							case 1:
								return 305.9928f;
							case 2:
								return 305.9928f;
							case 3:
								return 305.391f;
							default:
						}
						break;
					case 6:
						switch (iParam0)
						{
							case 0:
								return 168.3895f;
							case 1:
								return 159.1894f;
							case 2:
								return 157.1893f;
							case 3:
								return 153.7882f;
							default:
						}
						break;
					case 17:
						switch (iParam0)
						{
							case 0:
								return 178.5991f;
							case 1:
								return 178.5991f;
							case 2:
								return 178.5991f;
							case 3:
								return 179.797f;
							default:
						}
						break;
					case 20:
						switch (iParam0)
						{
							case 0:
								return 315.1037f;
							case 1:
								return 316.1562f;
							case 2:
								return 316.2499f;
							case 3:
								return 44.6831f;
							default:
						}
						break;
					case 16:
						switch (iParam0)
						{
							case 0:
								return 0.5054f;
							case 1:
								return 359.6695f;
							case 2:
								return 89.329f;
							case 3:
								return 90.2361f;
							default:
						}
						break;
					case 19:
						switch (iParam0)
						{
							case 0:
								return 204.477f;
							case 1:
								return 206.2505f;
							case 2:
								return 205.6789f;
							case 3:
								return 179.8434f;
							default:
						}
						break;
					case 18:
						switch (iParam0)
						{
							case 0:
								return 158.7604f;
							case 1:
								return 228.9877f;
							case 2:
								return 229.1641f;
							case 3:
								return 130.5588f;
							default:
						}
						break;
					case 12:
						switch (iParam0)
						{
							case 0:
								return 113.3989f;
							case 1:
								return 113.3989f;
							case 2:
								return 115.7988f;
							case 3:
								return 108.9997f;
							default:
						}
						break;
					case 15:
						switch (iParam0)
						{
							case 0:
								return 187.5977f;
							case 1:
								return 187.7977f;
							case 2:
								return 187.7977f;
							case 3:
								return 255.16f;
							default:
						}
						break;
					case 13:
						switch (iParam0)
						{
							case 0:
								return 303.3963f;
							case 1:
								return 314.3961f;
							case 2:
								return 321.7961f;
							case 3:
								return 342.1961f;
							default:
						}
						break;
					case 14:
						switch (iParam0)
						{
							case 0:
								return 182.3966f;
							case 1:
								return 182.3966f;
							case 2:
								return 182.3966f;
							case 3:
								return 205.5968f;
							default:
						}
						break;
					case 11:
						switch (iParam0)
						{
							case 0:
								return 293.396f;
							case 1:
								return 305.5958f;
							case 2:
								return 314.5957f;
							case 3:
								return 314.5957f;
							default:
						}
						break;
					case 2:
						switch (iParam0)
						{
							case 0:
								return 263.1992f;
							case 1:
								return 263.1992f;
							case 2:
								return 263.1992f;
							case 3:
								return 263.9953f;
							default:
						}
						break;
					case 5:
						switch (iParam0)
						{
							case 0:
								return 45.1943f;
							case 1:
								return 45.1943f;
							case 2:
								return 45.1943f;
							case 3:
								return 135.794f;
							default:
						}
						break;
					case 3:
						switch (iParam0)
						{
							case 0:
								return 226.9938f;
							case 1:
								return 226.9938f;
							case 2:
								return 226.9938f;
							case 3:
								return 226.9938f;
							default:
						}
						break;
					case 4:
						switch (iParam0)
						{
							case 0:
								return 224.1938f;
							case 1:
								return 224.1938f;
							case 2:
								return 224.1938f;
							case 3:
								return 224.1938f;
							default:
						}
						break;
					case 1:
						switch (iParam0)
						{
							case 0:
								return 27.1922f;
							case 1:
								return 27.1922f;
							case 2:
								return 27.1922f;
							case 3:
								return 27.1922f;
							default:
						}
						break;
				}
				break;
			}
	}
	return 269.4978f;
}

int func_470()//Position - 0x24019
{
	if (func_18() || func_17())
	{
		return 1;
	}
	return 0;
}

int func_471()//Position - 0x24037
{
	return Local_183.f_14;
}

void func_472()//Position - 0x24044
{
	if (__LIB_0__::func_582() == __LIB_0__::func_160() && func_239() == 0)
	{
		func_236(2);
	}
}

void func_473()//Position - 0x24068
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bVar0 = false;
	while (bVar0 < func_14())
	{
		if (func_12(bVar0))
		{
			iVar1++;
		}
		if (func_19())
		{
			if (func_477(bVar0))
			{
				bVar3 = func_476(bVar0);
				if (bVar3 != __LIB_0__::func_160())
				{
					if (__LIB_1__::func_264(bVar3, 1, 1))
					{
						bVar2 = bVar3;
						if (!func_11(bVar0, bVar2))
						{
							func_474(bVar0, 1);
						}
					}
				}
			}
		}
		bVar0++;
	}
	if (Local_183.f_978 != iVar1)
	{
		Local_183.f_978 = iVar1;
	}
}

void func_474(bool bParam0, int iParam1)//Position - 0x240EA
{
	if ((func_475(bParam0, 0) && (!func_448() || iParam1)) && !func_461())
	{
		TASK::TASK_LEAVE_VEHICLE(PLAYER::PLAYER_PED_ID(), func_13(bParam0), 0);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 23 /*INPUT_ENTER*/, true);
	}
}

int func_475(int iParam0, bool bParam1)//Position - 0x2412F
{
	if (!func_66(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_12(iParam0))
		{
			return 0;
		}
	}
	if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_183.f_59[iParam0]), false))
	{
		return 0;
	}
	return 1;
}

int func_476(bool bParam0)//Position - 0x24176
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (func_31(bParam0))
	{
		iVar0 = 0;
		while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
			{
				iVar1 = iVar0;
				iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar1);
				if (__LIB_1__::func_264(iVar2, 0, 1))
				{
					iVar3 = PLAYER::GET_PLAYER_PED(iVar2);
					if (!PED::IS_PED_INJURED(iVar3))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(iVar3, false))
						{
							if (PED::GET_VEHICLE_PED_IS_IN(iVar3, false) == NETWORK::NET_TO_VEH(Local_183.f_59[bParam0]))
							{
								if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(iVar3, false), -1, false) == iVar3)
								{
									return iVar2;
								}
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
	return __LIB_0__::func_160();
}

int func_477(bool bParam0)//Position - 0x2420A
{
	if (func_19())
	{
		return BitTest(Local_183.f_21, bParam0);
	}
	return 0;
}

void func_478()//Position - 0x24225
{
	bool bVar0;
	if (func_6() && func_239() == 0)
	{
		if (!func_29(3))
		{
			if (__LIB_0__::func_649(&(Local_183.f_959)) && __LIB_2__::func_47(&(Local_183.f_959), func_483(), 0))
			{
				if (!func_25())
				{
					bVar0 = false;
					while (bVar0 < func_14())
					{
						__LIB_34__::func_469(func_13(bVar0), bVar0, 1623637790, 0, 0);
						bVar0++;
					}
				}
				func_479(0);
				func_28(3);
			}
		}
	}
}

void func_479(bool bParam0)//Position - 0x242A3
{
	struct<14> Var0;
	Var0.f_2 = -97742300;
	Var0.f_10 = PLAYER::PLAYER_ID();
	Var0.f_11 = __LIB_0__::func_582();
	if (bParam0)
	{
		__LIB_1__::func_226(Var0, __LIB_1__::func_276(PLAYER::PLAYER_ID()));
	}
	else
	{
		__LIB_1__::func_226(Var0, __LIB_4__::func_511(1));
	}
}

int func_483()//Position - 0x2438D
{
	switch (Local_183.f_16)
	{
		case 1:
			return Global_262145.f_18294 /* Tunable: BIKER_GLOBAL_SIGNAL_EASY */;
		case 2:
			return Global_262145.f_18295 /* Tunable: BIKER_GLOBAL_SIGNAL_MEDIUM */;
		case 3:
			return Global_262145.f_18296 /* Tunable: BIKER_GLOBAL_SIGNAL_HARD */;
		default:
	}
	return Global_262145.f_18295 /* Tunable: BIKER_GLOBAL_SIGNAL_MEDIUM */;
}

void func_484()//Position - 0x243D6
{
	struct<3> Var0;
	Var0 = { __LIB_9__::func_861(Local_183.f_110) };
	if (!__LIB_0__::func_86(Var0))
	{
		__LIB_24__::func_827(&(Local_183.f_953), Var0, 1, 1103626240);
	}
}

void func_486()//Position - 0x2444F
{
	if (func_347() && func_499())
	{
		if (!func_498())
		{
			if (func_496())
			{
				__LIB_0__::func_580(&(Local_183.f_856), 0, 0);
			}
		}
		else if (func_494())
		{
			if (!__LIB_0__::func_649(&(Local_183.f_858)))
			{
				if (func_491() && func_488())
				{
					__LIB_0__::func_579(&(Local_183.f_856));
					__LIB_0__::func_580(&(Local_183.f_858), 0, 0);
					if (func_45())
					{
						if (!func_18())
						{
							Local_183.f_966 = MISC::GET_RANDOM_INT_IN_RANGE(0, func_14());
						}
					}
				}
			}
		}
		else if (__LIB_0__::func_114())
		{
			func_491();
			func_488();
			if (func_45())
			{
				if (!func_18())
				{
					Local_183.f_966 = MISC::GET_RANDOM_INT_IN_RANGE(0, func_14());
				}
			}
		}
	}
}

int func_488()//Position - 0x24519
{
	bool bVar0;
	bVar0 = false;
	while (bVar0 < func_246())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_707[bVar0 /*8*/]))
		{
			if ((NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_183.f_707[bVar0 /*8*/]) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_183.f_707[bVar0 /*8*/]) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())) || (NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_183.f_707[bVar0 /*8*/]) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
			{
				if (__LIB_0__::func_682(Local_183.f_707[bVar0 /*8*/]))
				{
					if (!func_18())
					{
						NETWORK::NETWORK_FADE_OUT_ENTITY(NETWORK::NET_TO_ENT(Local_183.f_707[bVar0 /*8*/]), true, true);
						__LIB_1__::func_96(&(Local_183.f_707[bVar0 /*8*/]));
					}
					else
					{
						__LIB_1__::func_46(&(Local_183.f_707[bVar0 /*8*/]));
					}
					func_336(bVar0, 1);
				}
			}
		}
		bVar0++;
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < func_246())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_707[bVar0 /*8*/]))
		{
			return 0;
		}
		bVar0++;
	}
	return 1;
}

int func_491()//Position - 0x24671
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < func_493())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_837[iVar0 /*6*/]))
		{
			if ((NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_183.f_837[iVar0 /*6*/]) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_183.f_837[iVar0 /*6*/]) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())) || (NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_183.f_837[iVar0 /*6*/]) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
			{
				if (__LIB_0__::func_682(Local_183.f_837[iVar0 /*6*/]))
				{
					if (!func_18())
					{
						NETWORK::NETWORK_FADE_OUT_ENTITY(NETWORK::NET_TO_ENT(Local_183.f_837[iVar0 /*6*/]), true, true);
					}
					__LIB_1__::func_46(&(Local_183.f_837[iVar0 /*6*/]));
					__LIB_0__::func_579(&(Local_183.f_915[iVar0 /*2*/]));
					func_492(iVar0, 1);
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < func_493())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_837[iVar0 /*6*/]))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_492(int iParam0, int iParam1)//Position - 0x24769
{
	Local_183.f_837[iParam0 /*6*/].f_5 = iParam1;
}

int func_493()//Position - 0x2477F
{
	switch (func_16())
	{
		case 12:
		case 0:
			return 2;
		default:
	}
	return 0;
}

int func_494()//Position - 0x247A1
{
	if (__LIB_0__::func_649(&(Local_183.f_856)))
	{
		if (__LIB_2__::func_47(&(Local_183.f_856), __LIB_13__::func_303(), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_496()//Position - 0x247D8
{
	int iVar0;
	iVar0 = 0;
	switch (func_16())
	{
		case 0:
			if ((Local_183.f_837[0 /*6*/].f_5 == 4 && Local_183.f_837[1 /*6*/].f_5 == 4) || func_497())
			{
				iVar0 = 1;
			}
			break;
	}
	return iVar0;
}

int func_497()//Position - 0x24826
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < func_246())
	{
		if (Local_183.f_707[iVar0 /*8*/].f_5 != 18)
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool func_498()//Position - 0x24859
{
	return __LIB_0__::func_649(&(Local_183.f_856));
}

int func_499()//Position - 0x2486B
{
	switch (func_16())
	{
		case 12:
		case 0:
			return 1;
		default:
	}
	return 0;
}

void func_500()//Position - 0x2488D
{
	int iVar0;
	bool bVar1;
	if (func_499())
	{
		iVar0 = 0;
		while (iVar0 < func_493())
		{
			switch (func_510(iVar0))
			{
				case 0:
					break;
				case 1:
					if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_837[iVar0 /*6*/]))
					{
						if (func_507())
						{
							if (__LIB_0__::func_649(&(Local_183.f_858)))
							{
								__LIB_0__::func_579(&(Local_183.f_858));
							}
							if (__LIB_0__::func_584(func_349()))
							{
								if (func_503(iVar0, func_349()))
								{
									func_492(iVar0, 2);
								}
							}
						}
					}
					break;
				case 2:
					if (func_347())
					{
						bVar1 = false;
						while (bVar1 < func_246())
						{
							if (func_323(bVar1, 0))
							{
							}
							bVar1++;
						}
					}
					if (func_501(iVar0))
					{
						func_492(iVar0, 3);
						if (!func_29(29) && func_15())
						{
							func_28(29);
						}
					}
					break;
				case 3:
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_837[iVar0 /*6*/]))
					{
						if (!VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(Local_183.f_837[iVar0 /*6*/]), false) || ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_183.f_837[iVar0 /*6*/]), false))
						{
							func_492(iVar0, 4);
						}
					}
					break;
				case 4:
					break;
				case 5:
					break;
			}
			iVar0++;
		}
	}
}

int func_501(int iParam0)//Position - 0x249DB
{
	int iVar0;
	int iVar1;
	iVar0 = 1;
	switch (func_16())
	{
		case 12:
		case 0:
			iVar1 = 0;
			while (iVar1 < func_246())
			{
				if (iParam0 == 0)
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_707[0 /*8*/]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_707[1 /*8*/]))
					{
						if (!__LIB_2__::func_15(NETWORK::NET_TO_PED(Local_183.f_707[0 /*8*/]), NETWORK::NET_TO_VEH(Local_183.f_837[iParam0 /*6*/]), 0) || !__LIB_2__::func_15(NETWORK::NET_TO_PED(Local_183.f_707[1 /*8*/]), NETWORK::NET_TO_VEH(Local_183.f_837[iParam0 /*6*/]), 0))
						{
							iVar0 = 0;
						}
					}
					else
					{
						iVar0 = 0;
					}
				}
				else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_707[2 /*8*/]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_707[3 /*8*/]))
				{
					if (!__LIB_2__::func_15(NETWORK::NET_TO_PED(Local_183.f_707[2 /*8*/]), NETWORK::NET_TO_VEH(Local_183.f_837[iParam0 /*6*/]), 0) || !__LIB_2__::func_15(NETWORK::NET_TO_PED(Local_183.f_707[3 /*8*/]), NETWORK::NET_TO_VEH(Local_183.f_837[iParam0 /*6*/]), 0))
					{
						iVar0 = 0;
					}
				}
				else
				{
					iVar0 = 0;
				}
				iVar1++;
			}
			break;
	}
	return iVar0;
}

int func_503(int iParam0, int iParam1)//Position - 0x24B5B
{
	int iVar0;
	float fVar1;
	bool bVar2;
	float fVar3;
	struct<3> Var4;
	float fVar5;
	bool bVar6;
	float fVar7;
	struct<3> Var8;
	switch (func_16())
	{
		case 12:
			if (Local_183.f_860.f_6 == -1 || Local_183.f_860.f_6 == iParam0)
			{
				iVar0 = func_506();
				Local_183.f_860.f_6 = iParam0;
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (__LIB_0__::func_86(Local_183.f_860.f_7))
					{
						if (__LIB_0__::func_86(Local_183.f_860.f_13))
						{
							Local_183.f_860.f_13 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iVar0) };
						}
						else
						{
							if ((Local_183.f_860.f_13.f_2 >= 0f && Local_183.f_860.f_13.f_2 < 90f) || (Local_183.f_860.f_13.f_2 >= 270f && Local_183.f_860.f_13.f_2 < 360f))
							{
								fVar1 = 220f;
							}
							else
							{
								fVar1 = 120f;
							}
							bVar2 = true;
							if (MISC::FIND_SPAWN_POINT_IN_DIRECTION(ENTITY::GET_ENTITY_COORDS(iVar0, true), Local_183.f_860.f_13, fVar1, &(Local_183.f_860.f_7)))
							{
								fVar3 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_183.f_860.f_7, ENTITY::GET_ENTITY_COORDS(iVar0, false), true);
								Var4 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iVar0, Local_183.f_860.f_7) };
								if (fVar3 > 290f)
								{
									bVar2 = false;
								}
								if (!__LIB_36__::func_561(Local_183.f_860.f_7, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 190f, 0, -1, 1, 0, 0, 0, 0, 0))
								{
									bVar2 = false;
								}
								if (MISC::ABSF(Var4.f_0) > 100f)
								{
									bVar2 = false;
								}
								if (!bVar2)
								{
									Local_183.f_860.f_7 = { 0f, 0f, 0f };
								}
								else
								{
									Local_183.f_860.f_10 = __LIB_0__::func_670(Local_183.f_860.f_7, ENTITY::GET_ENTITY_COORDS(iVar0, true));
								}
							}
							else
							{
								func_504(&(Local_183.f_860.f_13));
							}
						}
					}
					if (!__LIB_0__::func_86(Local_183.f_860.f_7))
					{
						if (__LIB_18__::func_220(&(Local_183.f_837[iParam0 /*6*/]), iParam1, Local_183.f_860.f_7, Local_183.f_860.f_10, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
						{
							func_352(iParam0);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam1);
							Local_183.f_860.f_6 = -1;
							Local_183.f_860.f_7 = { 0f, 0f, 0f };
							Local_183.f_860.f_10 = 0f;
							Local_183.f_860.f_12 = 0;
							Local_183.f_860.f_11 = 0;
							Local_183.f_882 = (Local_183.f_882 + 1f);
							return 1;
						}
					}
				}
			}
			break;
		case 0:
			if (Local_183.f_860 == -1)
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_59[Local_183.f_966]))
				{
					if (__LIB_2__::func_63(Local_183.f_59[Local_183.f_966]))
					{
						if (Local_183.f_860.f_6 == -1 || Local_183.f_860.f_6 == iParam0)
						{
							Local_183.f_860.f_6 = iParam0;
							if (__LIB_0__::func_86(Local_183.f_860.f_7))
							{
								if (__LIB_0__::func_86(Local_183.f_860.f_13))
								{
									Local_183.f_860.f_13 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(NETWORK::NET_TO_VEH(Local_183.f_59[Local_183.f_966])) };
								}
								else
								{
									if ((Local_183.f_860.f_13.f_2 >= 0f && Local_183.f_860.f_13.f_2 < 90f) || (Local_183.f_860.f_13.f_2 >= 270f && Local_183.f_860.f_13.f_2 < 360f))
									{
										fVar5 = 220f;
									}
									else
									{
										fVar5 = 120f;
									}
									bVar6 = true;
									if (MISC::FIND_SPAWN_POINT_IN_DIRECTION(ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(Local_183.f_59[Local_183.f_966]), true), Local_183.f_860.f_13, fVar5, &(Local_183.f_860.f_7)))
									{
										fVar7 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_183.f_860.f_7, ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_183.f_59[Local_183.f_966]), false), true);
										Var8 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(NETWORK::NET_TO_VEH(Local_183.f_59[Local_183.f_966]), Local_183.f_860.f_7) };
										if (fVar7 > 290f)
										{
											bVar6 = false;
										}
										if (!__LIB_36__::func_561(Local_183.f_860.f_7, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 190f, 0, -1, 1, 0, 0, 0, 0, 0))
										{
											bVar6 = false;
										}
										if (MISC::ABSF(Var8.f_0) > 100f)
										{
											bVar6 = false;
										}
										if (!bVar6)
										{
											Local_183.f_860.f_7 = { 0f, 0f, 0f };
										}
										else
										{
											Local_183.f_860.f_10 = __LIB_0__::func_670(Local_183.f_860.f_7, ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(Local_183.f_59[Local_183.f_966]), true));
										}
									}
									else
									{
										func_504(&(Local_183.f_860.f_13));
									}
								}
							}
							if (!__LIB_0__::func_86(Local_183.f_860.f_7))
							{
								if (__LIB_18__::func_220(&(Local_183.f_837[iParam0 /*6*/]), iParam1, Local_183.f_860.f_7, Local_183.f_860.f_10, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
								{
									func_352(iParam0);
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam1);
									Local_183.f_860.f_6 = -1;
									Local_183.f_860.f_7 = { 0f, 0f, 0f };
									Local_183.f_860.f_10 = 0f;
									Local_183.f_860.f_12 = 0;
									Local_183.f_860.f_11 = 0;
									Local_183.f_882 = (Local_183.f_882 + 1f);
									return 1;
								}
							}
						}
					}
				}
			}
			break;
	}
	return 0;
}

void func_504(var uParam0)//Position - 0x2507D
{
	Local_183.f_860.f_12++;
	if (Local_183.f_860.f_12 < 5)
	{
		switch (Local_183.f_860.f_12)
		{
			case 1:
			case 2:
				*uParam0 = { *uParam0 + Vector(10f, 0f, 0f) };
				break;
			case 3:
				*uParam0 = { *uParam0 - Vector(30f, 0f, 0f) };
				break;
			case 4:
				*uParam0 = { *uParam0 - Vector(10f, 0f, 0f) };
				break;
		}
		if (uParam0->f_2 > 360f)
		{
			uParam0->f_2 = (uParam0->f_2 - 360f);
		}
	}
	else
	{
		Local_183.f_860.f_12 = 0;
		*uParam0 = { *uParam0 + Vector(20f, 0f, 0f) };
	}
}

int func_506()//Position - 0x25152
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < func_24())
	{
		if (Local_183.f_101[iVar0] != -1)
		{
			iVar1 = PLAYER::GET_PLAYER_PED(PLAYER::INT_TO_PLAYERINDEX(Local_183.f_101[iVar0]));
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				return iVar1;
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_507()//Position - 0x2519F
{
	if (func_239() != 0)
	{
		return 0;
	}
	if (func_18())
	{
		if (Local_183.f_882 >= IntToFloat(func_509()))
		{
			return 0;
		}
	}
	if (func_15())
	{
		if (func_41())
		{
			if (func_29(24))
			{
				return 1;
			}
		}
	}
	if (func_18())
	{
		if (func_62(20))
		{
			if (__LIB_0__::func_649(&(Local_183.f_856)))
			{
				return 0;
			}
		}
	}
	if (__LIB_0__::func_649(&(Local_183.f_858)))
	{
		if (!__LIB_2__::func_47(&(Local_183.f_858), 3000, 0))
		{
			return 0;
		}
	}
	if (func_508())
	{
		if (func_62(9))
		{
			return 1;
		}
	}
	if (func_62(20))
	{
		return 1;
	}
	return 0;
}

int func_508()//Position - 0x2524E
{
	if (((func_62(10) || func_62(11)) || func_62(12)) || func_62(13))
	{
		return 1;
	}
	return 0;
}

int func_509()//Position - 0x25288
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = Global_1946100;
	if (Global_1946098 == 1)
	{
		iVar1 = 3;
	}
	if (func_18())
	{
		switch (iVar1)
		{
			case 1:
			case 4:
				iVar0 = Global_262145.f_16775 /* Tunable: EXEC_SELL_LAND_ATTACKED_HARD_ENEMY_WAVES */ * 2;
				if (iVar0 > 6)
				{
					iVar0 = 6;
				}
				break;
			case 2:
				iVar0 = Global_262145.f_16774 /* Tunable: EXEC_SELL_LAND_ATTACKED_MEDIUM_ENEMY_WAVES */ * 2;
				if (iVar0 > 6)
				{
					iVar0 = 6;
				}
				break;
			case 3:
				iVar0 = Global_262145.f_16773 /* Tunable: EXEC_SELL_LAND_ATTACKED_EASY_ENEMY_WAVES */ * 2;
				if (iVar0 > 6)
				{
					iVar0 = 6;
				}
				break;
			default:
				iVar0 = 6;
				break;
			}
	}
	return iVar0;
}

int func_510(int iParam0)//Position - 0x25317
{
	return Local_183.f_837[iParam0 /*6*/].f_5;
}

void func_511()//Position - 0x2532B
{
	bool bVar0;
	bool bVar1;
	if (func_347())
	{
		bVar0 = false;
		while (bVar0 < func_246())
		{
			switch (func_524(bVar0))
			{
				case 0:
					break;
				case 1:
					if (func_346(bVar0))
					{
						if (func_17())
						{
							func_336(bVar0, 19);
						}
						else if (func_15())
						{
							func_336(bVar0, 9);
						}
						else
						{
							func_336(bVar0, 2);
						}
					}
					break;
				case 11:
					if (func_523())
					{
						if (func_346(bVar0))
						{
							if (ENTITY::IS_ENTITY_DEAD(func_522(bVar0), false))
							{
								func_336(bVar0, 18);
							}
							else if (BitTest(Local_183.f_9, bVar0))
							{
								func_336(bVar0, 10);
							}
						}
					}
					break;
				case 19:
					break;
				case 2:
					if (func_346(bVar0))
					{
						switch (func_16())
						{
							case 0:
							case 4:
								if (!ENTITY::IS_ENTITY_DEAD(func_522(bVar0), false))
								{
									func_336(bVar0, func_521(bVar0));
								}
								else
								{
									func_336(bVar0, 18);
								}
								break;
							}
					}
					break;
				case 6:
					if (func_346(bVar0))
					{
						if (ENTITY::IS_ENTITY_DEAD(func_520(bVar0), false))
						{
							func_336(bVar0, 18);
						}
						else
						{
							if (func_18())
							{
								func_514(bVar0);
							}
							if (BitTest(Local_183.f_886, bVar0))
							{
								func_336(bVar0, 14);
							}
						}
					}
					break;
				case 9:
					if (func_346(bVar0))
					{
						if (ENTITY::IS_ENTITY_DEAD(func_520(bVar0), false))
						{
							func_336(bVar0, 18);
						}
						else
						{
							if (func_15() || func_18())
							{
								func_514(bVar0);
							}
							if (BitTest(Local_183.f_886, bVar0))
							{
								func_336(bVar0, 14);
							}
							if (func_15() && func_230(0))
							{
								func_336(bVar0, 10);
							}
						}
					}
					break;
				case 8:
					if (func_346(bVar0))
					{
						if (ENTITY::IS_ENTITY_DEAD(func_520(bVar0), false))
						{
							func_336(bVar0, 18);
						}
						else if (func_18())
						{
							func_514(bVar0);
						}
					}
					break;
				case 12:
					break;
				case 13:
					break;
				case 17:
					break;
				case 14:
					if (func_346(bVar0))
					{
						if (ENTITY::IS_ENTITY_DEAD(func_520(bVar0), false))
						{
							func_336(bVar0, 18);
						}
						else
						{
							if (func_471() > 1)
							{
								func_336(bVar0, 10);
							}
							func_514(bVar0);
						}
					}
					break;
				case 15:
					break;
				case 16:
					break;
				case 18:
					if (func_23())
					{
						bVar1 = func_512(bVar0);
						if (bVar1 != -1)
						{
							func_71(1);
							Local_183.f_184[bVar1]++;
							__LIB_24__::func_858(bVar1, Local_183.f_175[bVar1]);
							__LIB_1__::func_46(&(Local_183.f_707[bVar0 /*8*/]));
							func_336(bVar0, 10);
						}
					}
					break;
				case 20:
					break;
			}
			bVar0++;
		}
	}
}

int func_512(bool bParam0)//Position - 0x25604
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	fVar1 = 9999.99f;
	if (func_346(bParam0))
	{
		iVar0 = 0;
		while (iVar0 < func_24())
		{
			iVar4 = PLAYER::INT_TO_PLAYERINDEX(Local_183.f_101[iVar0]);
			if (Local_183.f_101[iVar0] != -1 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar4))
			{
				fVar2 = __LIB_0__::func_76(PLAYER::GET_PLAYER_PED(iVar4), func_522(bParam0), 1);
				if (fVar2 < fVar1)
				{
					fVar1 = fVar2;
					iVar3 = iVar0;
				}
			}
			iVar0++;
		}
	}
	return iVar3;
}

void func_514(bool bParam0)//Position - 0x256DC
{
	float fVar0;
	float fVar1;
	bool bVar2;
	int iVar3;
	struct<3> Var4;
	float fVar5;
	fVar0 = __LIB_14__::func_591();
	fVar1 = __LIB_29__::func_37();
	if (func_15())
	{
		iVar3 = func_517(bParam0, &bVar2);
	}
	else
	{
		iVar3 = func_516(bParam0, &bVar2, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		if (!BitTest(Local_183.f_885, bParam0))
		{
			if (__LIB_0__::func_76(func_520(bParam0), iVar3, 1) > fVar0)
			{
				MISC::SET_BIT(&(Local_183.f_885), bParam0);
			}
			else if (__LIB_0__::func_76(func_520(bParam0), iVar3, 1) > fVar1)
			{
				if (!__LIB_0__::func_649(&(Local_183.f_707[bParam0 /*8*/].f_6)))
				{
					__LIB_0__::func_580(&(Local_183.f_707[bParam0 /*8*/].f_6), 0, 0);
				}
				else if (__LIB_2__::func_47(&(Local_183.f_707[bParam0 /*8*/].f_6), __LIB_13__::func_303(), 0))
				{
					MISC::SET_BIT(&(Local_183.f_885), bParam0);
				}
			}
			else if (__LIB_0__::func_649(&(Local_183.f_707[bParam0 /*8*/].f_6)))
			{
				__LIB_0__::func_579(&(Local_183.f_707[bParam0 /*8*/].f_6));
			}
		}
		if (func_15() || func_18())
		{
			if (!BitTest(Local_183.f_885, bParam0))
			{
				if (!BitTest(Local_183.f_886, bParam0))
				{
					if (Local_183.f_175[bVar2] >= 0)
					{
						Var4 = { func_412(func_16(), Local_183.f_175[bVar2], Local_183.f_679, bVar2, 0, 0) };
						fVar5 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(func_520(bParam0), false), Var4, true);
						if (fVar5 < 100f)
						{
							MISC::SET_BIT(&(Local_183.f_886), bParam0);
						}
					}
				}
			}
		}
	}
}

int func_516(bool bParam0, var uParam1, int iParam2)//Position - 0x2585C
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	fVar1 = 9999.99f;
	iVar3 = -1;
	if (func_45())
	{
		iVar0 = 0;
		while (iVar0 < func_14())
		{
			if (ENTITY::DOES_ENTITY_EXIST(func_13(iVar0)))
			{
				if (!func_12(iVar0) || iParam2)
				{
					fVar2 = __LIB_0__::func_76(NETWORK::NET_TO_PED(Local_183.f_707[bParam0 /*8*/]), func_13(iVar0), 1);
					if (fVar2 < fVar1)
					{
						fVar1 = fVar2;
						iVar3 = func_13(iVar0);
						*uParam1 = iVar0;
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar3 = func_13(0);
		*uParam1 = 0;
	}
	return iVar3;
}

int func_517(int iParam0, var uParam1)//Position - 0x258ED
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	fVar3 = 9999.99f;
	iVar0 = 0;
	while (iVar0 < func_24())
	{
		if (Local_183.f_101[iVar0] != -1)
		{
			iVar2 = PLAYER::GET_PLAYER_PED(PLAYER::INT_TO_PLAYERINDEX(Local_183.f_101[iVar0]));
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				fVar4 = __LIB_0__::func_76(NETWORK::NET_TO_PED(Local_183.f_707[iParam0 /*8*/]), iVar2, 1);
				if (fVar4 < fVar3)
				{
					fVar3 = fVar4;
					iVar1 = iVar2;
					*uParam1 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_520(bool bParam0)//Position - 0x25982
{
	if (func_346(bParam0))
	{
		return NETWORK::NET_TO_ENT(Local_183.f_707[bParam0 /*8*/]);
	}
	return 0;
}

int func_521(bool bParam0)//Position - 0x259A5
{
	switch (func_16())
	{
		case 7:
			return 19;
		case 0:
			switch (bParam0)
			{
				case 0:
				case 2:
					return 6;
				case 1:
				case 3:
					return 8;
				default:
			}
			break;
	}
	return 2;
}

int func_522(bool bParam0)//Position - 0x259F3
{
	if (func_346(bParam0))
	{
		return NETWORK::NET_TO_PED(Local_183.f_707[bParam0 /*8*/]);
	}
	return 0;
}

int func_523()//Position - 0x25A16
{
	switch (Local_183.f_17)
	{
		case 4:
			return 1;
		default:
	}
	return 0;
}

int func_524(int iParam0)//Position - 0x25A33
{
	return Local_183.f_707[iParam0 /*8*/].f_5;
}

void func_525()//Position - 0x25A47
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	if (func_25())
	{
		if (!func_230(0))
		{
			bVar2 = false;
			while (bVar2 < func_24())
			{
				bVar3 = PLAYER::INT_TO_PLAYERINDEX(Local_183.f_101[bVar2]);
				if (Local_183.f_101[bVar2] != -1)
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bVar3))
					{
						if (!func_12(bVar2))
						{
							func_64(bVar3, bVar2);
							func_541(&iVar0, bVar2);
							if (Local_183.f_175[bVar2] != iVar0)
							{
								Local_183.f_175[bVar2] = iVar0;
							}
							iVar0 = 0;
						}
					}
				}
				bVar2++;
			}
		}
	}
	else if (func_45())
	{
		bVar1 = false;
		while (bVar1 < func_14())
		{
			if (ENTITY::DOES_ENTITY_EXIST(func_13(bVar1)) && !func_12(bVar1))
			{
				func_526(func_13(bVar1), bVar1, &iVar0);
				if (Local_183.f_175[bVar1] != iVar0)
				{
					Local_183.f_175[bVar1] = iVar0;
				}
				iVar0 = 0;
			}
			bVar1++;
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(func_13(0)))
	{
		func_526(func_13(0), 0, &iVar0);
		if (Local_183.f_175[0] != iVar0)
		{
			Local_183.f_175[0] = iVar0;
		}
	}
}

void func_526(int iParam0, bool bParam1, int iParam2)//Position - 0x25B69
{
	bool bVar0;
	int iVar1;
	struct<3> Var2;
	bool bVar3;
	float fVar4;
	float fVar5;
	int iVar6;
	bool bVar7;
	struct<3> Var8;
	struct<3> Var9;
	bVar3 = -1;
	fVar5 = 10000000f;
	if (!func_230(0))
	{
		if (func_539() && !func_19())
		{
			if (func_538(bParam1))
			{
			}
			iVar1 = func_537(bParam1);
			if (iVar1 < 10)
			{
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_183.f_193[iVar1 /*47*/][bParam1]))
				{
					iVar6 = NETWORK::NET_TO_ENT(Local_183.f_193[iVar1 /*47*/][bParam1]);
				}
			}
		}
		else if (func_19() && __LIB_1__::func_264(Local_183.f_27, 0, 1))
		{
			iVar6 = PLAYER::GET_PLAYER_PED(Local_183.f_27);
		}
		else
		{
			iVar6 = iParam0;
		}
		bVar0 = false;
		while (bVar0 < func_233())
		{
			if (func_366())
			{
				if (bVar3 == -1)
				{
					if (BitTest(Local_183.f_134[bParam1], bVar0))
					{
						bVar3 = bVar0;
					}
				}
			}
			else if (BitTest(Local_183.f_134[bParam1], bVar0) && !func_536(bVar0))
			{
				Var2 = { func_412(func_16(), bVar0, Local_183.f_679, bParam1, 0, func_477(bParam1)) };
				fVar4 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var2, ENTITY::GET_ENTITY_COORDS(iParam0, false), true);
				if (fVar4 < fVar5)
				{
					fVar5 = fVar4;
					*iParam2 = bVar0;
				}
			}
			bVar0++;
		}
		if (func_366())
		{
			if (bVar3 != -1)
			{
				*iParam2 = bVar3;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar6) && !ENTITY::IS_ENTITY_DEAD(iVar6, false))
		{
			Var8 = { func_412(func_16(), *iParam2, Local_183.f_679, bParam1, 0, func_477(bParam1)) };
			if (((func_74() && func_535(iParam0, bParam1)) || ((func_27() && func_532(Var8, iVar6, 1)) && PLAYER::GET_PLAYER_WANTED_LEVEL(func_476(bParam1)) == 0)) || ((!func_74() && !func_27()) && func_532(Var8, iVar6, 1)))
			{
				if (func_74())
				{
					if (!BitTest(Local_183.f_4, bParam1))
					{
						MISC::SET_BIT(&(Local_183.f_4), bParam1);
					}
				}
				if (!func_29(23))
				{
					func_28(23);
				}
				if (func_27() && !func_41())
				{
					func_48(6);
					func_531(2);
				}
				else if (func_19() && !BitTest(Local_183.f_21, bParam1))
				{
					bVar7 = func_476(bParam1);
					if (bVar7 != __LIB_0__::func_160())
					{
						func_530(bParam1);
						func_9(1, bVar7, bParam1);
					}
				}
				else
				{
					func_38(*iParam2, bParam1);
					if (func_539() || func_74())
					{
						if (!func_448())
						{
							Var9 = { func_529(bParam1, 0) };
							if (func_19())
							{
								if (ENTITY::DOES_ENTITY_EXIST(iVar6) && !ENTITY::IS_ENTITY_DEAD(iVar6, false))
								{
									Var9 = { ENTITY::GET_ENTITY_COORDS(iVar6, true) };
								}
							}
							AUDIO::PLAY_SOUND_FROM_COORD(-1, func_528(), Var9, func_527(), true, 0, false);
						}
					}
					if (func_45())
					{
						if (func_537(bParam1) == func_234(bParam1) || func_74())
						{
							func_47(bParam1);
						}
					}
					else if (func_230(0))
					{
						func_47(bParam1);
					}
					if (func_19())
					{
						func_7(bParam1);
						func_9(0, Local_183.f_27, bParam1);
						Local_183.f_27 = __LIB_0__::func_160();
					}
				}
			}
		}
	}
}

char* func_527()//Position - 0x25E87
{
	switch (func_16())
	{
		case 3:
			return "DLC_Biker_Sell_Trash_Sounds";
		case 5:
			return "DLC_Biker_Sell_Postman_Sounds";
		case 2:
			return "DLC_Biker_Air_Drop_Sounds";
		case 4:
		case 8:
			return "GTAO_Biker_Modes_Soundset";
		default:
	}
	if (func_25())
	{
		return "GTAO_Biker_Modes_Soundset";
	}
	return "DLC_Biker_Sell_Sea_Sounds";
}

char* func_528()//Position - 0x25EE4
{
	switch (func_16())
	{
		case 4:
		case 8:
			return "Deliver_Item";
		default:
	}
	if (func_25())
	{
		return "Deliver_Item";
	}
	return "Drop_Package";
}

Vector3 func_529(bool bParam0, bool bParam1)//Position - 0x25F1A
{
	struct<3> Var0;
	if (func_66(bParam0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(func_67(bParam0), true) };
	}
	if (bParam1)
	{
		Var0 = { Var0 + Vector(0f, 5f, 5f) };
	}
	return Var0;
}

void func_530(bool bParam0)//Position - 0x25F4F
{
	if (!BitTest(Local_183.f_21, bParam0))
	{
		MISC::SET_BIT(&(Local_183.f_21), bParam0);
	}
}

void func_531(int iParam0)//Position - 0x25F6E
{
	MISC::SET_BIT(&(Local_184[NETWORK::PARTICIPANT_ID_TO_INT() /*29*/].f_2), iParam0);
}

int func_532(struct<3> Param0, int iParam1, bool bParam2)//Position - 0x25F87
{
	if (ENTITY::IS_ENTITY_AT_COORD(iParam1, Param0, func_533(bParam2), false, true, 0))
	{
		return 1;
	}
	return 0;
}

Vector3 func_533(bool bParam0)//Position - 0x25FAA
{
	if (func_23())
	{
		return 2f, 2f, 2f;
	}
	if (func_448())
	{
		if (func_253())
		{
			if (bParam0)
			{
				return (150f / 3f), (150f / 3f), (150f * 1.5f);
			}
			return (150f / 4f), (150f / 4f), (150f * 1.5f);
		}
		return (150f / 2f), (150f / 2f), (150f * 1.5f);
	}
	else if (func_534() && !func_19())
	{
		if (func_366())
		{
			return (20f * 1.2f), (20f * 1.2f), (3f * 2f);
		}
		else if (bParam0)
		{
			return (20f * 1.5f), (20f * 1.5f), 3f;
		}
		else
		{
			return (20f * 1.2f), (20f * 1.2f), 3f;
		}
	}
	if (func_43())
	{
		return 3f, 3f, 5f;
	}
	return 3f, 3f, 3f;
}

int func_534()//Position - 0x260AC
{
	switch (Local_183.f_17)
	{
		case 3:
		case 4:
		case 5:
		case 9:
			return 1;
		default:
	}
	return 0;
}

int func_535(int iParam0, bool bParam1)//Position - 0x260DB
{
	int iVar0;
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_64[bParam1]))
	{
		iVar0 = NETWORK::NET_TO_VEH(Local_183.f_64[bParam1]);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, 0f, 0.3f, 0.1f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, 0f, -3.4f, 1.4f), 2.1f, false, true, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_536(bool bParam0)//Position - 0x2614F
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (BitTest(Local_183.f_145[iVar0], bParam0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_537(bool bParam0)//Position - 0x2617D
{
	if (bParam0 == -1)
	{
		return Local_183.f_122;
	}
	if ((((func_45() || func_15()) || func_23()) || func_44()) || func_43())
	{
		return Local_183.f_124[bParam0];
	}
	else
	{
		return Local_183.f_122;
	}
	return 0;
}

int func_538(int iParam0)//Position - 0x261DA
{
	if (func_19())
	{
		return BitTest(Local_183.f_21, iParam0);
	}
	return 1;
}

int func_539()//Position - 0x261F5
{
	if (func_366())
	{
		return 0;
	}
	if (func_448() || (func_534() && func_540()))
	{
		if (!func_523())
		{
			return 1;
		}
	}
	return 0;
}

bool func_540()//Position - 0x2622F
{
	if (func_235() || func_19())
	{
		return 1;
	}
	return func_228() < (func_73(-1) - 1);
}

void func_541(var uParam0, bool bParam1)//Position - 0x26258
{
	int iVar0;
	int iVar1;
	iVar1 = PLAYER::INT_TO_PLAYERINDEX(Local_183.f_101[bParam1]);
	if (Local_183.f_101[bParam1] != -1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
			iVar0 = PLAYER::GET_PLAYER_PED(iVar1);
			func_542(bParam1, iVar0, uParam0);
		}
	}
}

void func_542(bool bParam0, int iParam1, var uParam2)//Position - 0x2629D
{
	bool bVar0;
	struct<3> Var1;
	float fVar2;
	float fVar3;
	struct<3> Var4;
	fVar3 = 10000000f;
	Var4 = { ENTITY::GET_ENTITY_COORDS(iParam1, false) };
	bVar0 = false;
	while (bVar0 < func_233())
	{
		if (BitTest(Local_183.f_134[bParam0], bVar0))
		{
			if (!func_536(bVar0))
			{
				Var1 = { func_412(func_16(), bVar0, Local_183.f_679, bParam0, 0, 0) };
				fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var1, Var4, true);
				if (fVar2 < fVar3)
				{
					fVar3 = fVar2;
					*uParam2 = bVar0;
				}
			}
		}
		bVar0++;
	}
}

void func_543()//Position - 0x2631D
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	func_555();
	if (func_539())
	{
		if (func_553())
		{
			bVar0 = false;
			while (bVar0 < func_14())
			{
				iVar1 = (25 + bVar0);
				iVar2 = iVar1;
				if (func_62(iVar2))
				{
					if (Local_183.f_664[bVar0] < 10)
					{
						switch (Local_183.f_669[bVar0])
						{
							case 0:
								Local_183.f_669[bVar0]++;
								break;
							case 1:
								if (BitTest(Local_183.f_967, bVar0))
								{
									Var3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(func_67(bVar0), func_552()) };
									if (func_66(bVar0) && func_547(Var3, func_551(bVar0), bVar0))
									{
										Local_183.f_664[bVar0]++;
										func_2(iVar2);
										Local_183.f_669[bVar0] = 0;
										MISC::CLEAR_BIT(&(Local_183.f_967), bVar0);
									}
								}
								else
								{
									func_2(iVar2);
								}
								break;
							}
						}
				}
				bVar0++;
			}
		}
	}
	func_544();
}

void func_544()//Position - 0x26422
{
	struct<3> Var0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	iVar5 = 0;
	while (iVar5 < func_14())
	{
		iVar4 = 0;
		while (iVar4 < 10)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_183.f_193[iVar4 /*47*/][iVar5]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_193[iVar4 /*47*/][iVar5]))
			{
				if (__LIB_0__::func_682(Local_183.f_193[iVar4 /*47*/][iVar5]))
				{
					ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_ENT(Local_183.f_193[iVar4 /*47*/][iVar5]), 0, 0f, 0f, 5f, false, false, true, false);
				}
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_183.f_193[iVar4 /*47*/][iVar5]) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_183.f_193[iVar4 /*47*/][iVar5]) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
				{
					if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_183.f_193[iVar4 /*47*/].f_5[iVar5]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_193[iVar4 /*47*/].f_5[iVar5]))
					{
						iVar2 = NETWORK::NET_TO_OBJ(Local_183.f_193[iVar4 /*47*/][iVar5]);
						iVar3 = NETWORK::NET_TO_OBJ(Local_183.f_193[iVar4 /*47*/].f_5[iVar5]);
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_183.f_193[iVar4 /*47*/].f_5[iVar5]) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_183.f_193[iVar4 /*47*/].f_5[iVar5]) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
						{
							if (__LIB_0__::func_682(Local_183.f_193[iVar4 /*47*/][iVar5]) && __LIB_0__::func_682(Local_183.f_193[iVar4 /*47*/].f_5[iVar5]))
							{
								if (!BitTest(Local_183.f_193[iVar4 /*47*/].f_15[iVar5], 2) && !BitTest(Local_184[NETWORK::PARTICIPANT_ID_TO_INT() /*29*/].f_4[iVar5], 2))
								{
									if (BitTest(Local_183.f_193[iVar4 /*47*/].f_15[iVar5], 1) || BitTest(Local_184[NETWORK::PARTICIPANT_ID_TO_INT() /*29*/].f_4[iVar5], 1))
									{
										if (ENTITY::DOES_ENTITY_EXIST(iVar3))
										{
											if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iVar3, "P_cargo_chute_S", "P_cargo_chute_S_crumple", 3))
											{
												MISC::SET_BIT(&(Local_184[NETWORK::PARTICIPANT_ID_TO_INT() /*29*/].f_4[iVar5]), 2);
												__LIB_1__::func_96(&(Local_183.f_193[iVar4 /*47*/].f_5[iVar5]));
												MISC::CLEAR_BIT(&(Local_184[NETWORK::PARTICIPANT_ID_TO_INT() /*29*/].f_4[iVar5]), 0);
												MISC::CLEAR_BIT(&(Local_184[NETWORK::PARTICIPANT_ID_TO_INT() /*29*/].f_4[iVar5]), 1);
												MISC::CLEAR_BIT(&(Local_184[NETWORK::PARTICIPANT_ID_TO_INT() /*29*/].f_4[iVar5]), 2);
											}
										}
									}
								}
								if (!BitTest(Local_183.f_193[iVar4 /*47*/].f_15[iVar5], 1) && !BitTest(Local_184[NETWORK::PARTICIPANT_ID_TO_INT() /*29*/].f_4[iVar5], 1))
								{
									if (BitTest(Local_183.f_193[iVar4 /*47*/].f_15[iVar5], 0) || BitTest(Local_184[NETWORK::PARTICIPANT_ID_TO_INT() /*29*/].f_4[iVar5], 0))
									{
										if (ENTITY::DOES_ENTITY_EXIST(iVar3))
										{
											if (ENTITY::IS_ENTITY_PLAYING_ANIM(iVar3, "P_cargo_chute_S", "P_cargo_chute_S_crumple", 3))
											{
												MISC::SET_BIT(&(Local_184[NETWORK::PARTICIPANT_ID_TO_INT() /*29*/].f_4[iVar5]), 1);
											}
										}
									}
								}
								if (!BitTest(Local_183.f_193[iVar4 /*47*/].f_15[iVar5], 0))
								{
									if (func_545(iVar4, iVar5))
									{
										ENTITY::PLAY_ENTITY_ANIM(iVar3, "P_cargo_chute_S_crumple", "P_cargo_chute_S", 1000f, false, false, false, 0f, 0);
										MISC::SET_BIT(&(Local_183.f_193[iVar4 /*47*/].f_15[iVar5]), 0);
										AUDIO::PLAY_SOUND_FROM_ENTITY(Local_133.f_473, "Parachute_Land", iVar3, "DLC_Exec_Air_Drop_Sounds", false, 0);
									}
									else
									{
										PHYSICS::SET_DAMPING(iVar2, 2, 0.0245f);
									}
								}
							}
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iVar2))
					{
						Var0 = { ENTITY::GET_ENTITY_COORDS(iVar2, true) };
						if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &fVar1, false, false))
						{
							if (Var0.f_2 < fVar1 && !ENTITY::IS_ENTITY_IN_WATER(iVar2))
							{
								if (__LIB_0__::func_682(Local_183.f_193[iVar4 /*47*/][iVar5]))
								{
									ENTITY::SET_ENTITY_COORDS(iVar2, Var0.f_0, Var0.f_1, fVar1, true, false, false, true);
								}
							}
						}
					}
					if (func_61())
					{
						if (!__LIB_0__::func_649(&(Local_183.f_193[iVar4 /*47*/].f_29[iVar5 /*2*/])))
						{
							__LIB_0__::func_580(&(Local_183.f_193[iVar4 /*47*/].f_29[iVar5 /*2*/]), 0, 0);
						}
						else if (__LIB_2__::func_47(&(Local_183.f_193[iVar4 /*47*/].f_29[iVar5 /*2*/]), 30000, 0))
						{
							__LIB_1__::func_46(&(Local_183.f_193[iVar4 /*47*/][iVar5]));
						}
					}
				}
			}
			iVar4++;
		}
		iVar5++;
	}
}

int func_545(int iParam0, int iParam1)//Position - 0x26833
{
	if (__LIB_2__::func_47(&(Local_183.f_193[iParam0 /*47*/].f_20[iParam1 /*2*/]), 3000, 0))
	{
		if (!ENTITY::IS_ENTITY_IN_AIR(NETWORK::NET_TO_OBJ(Local_183.f_193[iParam0 /*47*/][iParam1])))
		{
			return 1;
		}
	}
	if (ENTITY::IS_ENTITY_IN_WATER(NETWORK::NET_TO_OBJ(Local_183.f_193[iParam0 /*47*/][iParam1])))
	{
		return 1;
	}
	if (func_546(iParam0, iParam1))
	{
		return 1;
	}
	return 0;
}

int func_546(int iParam0, int iParam1)//Position - 0x2689E
{
	float fVar0;
	fVar0 = ENTITY::GET_ENTITY_PITCH(NETWORK::NET_TO_OBJ(Local_183.f_193[iParam0 /*47*/][iParam1]));
	if (fVar0 > 10f || fVar0 < -10f)
	{
		return 1;
	}
	fVar0 = ENTITY::GET_ENTITY_ROLL(NETWORK::NET_TO_OBJ(Local_183.f_193[iParam0 /*47*/][iParam1]));
	if (fVar0 > 10f || fVar0 < -10f)
	{
		return 1;
	}
	return 0;
}

int func_547(struct<3> Param0, float fParam1, bool bParam2)//Position - 0x2690F
{
	struct<3> Var0;
	int iVar1;
	iVar1 = Local_183.f_664[bParam2];
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_183.f_193[iVar1 /*47*/][bParam2]))
	{
		if (NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
		{
			Local_183.f_193[iVar1 /*47*/][bParam2] = NETWORK::OBJ_TO_NET(OBJECT::CREATE_PORTABLE_PICKUP(joaat("PICKUP_PORTABLE_CRATE_UNFIXED_INCAR"), Param0, false, func_550()));
			ENTITY::SET_ENTITY_HEADING(NETWORK::NET_TO_OBJ(Local_183.f_193[iVar1 /*47*/][bParam2]), fParam1);
			NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(Local_183.f_193[iVar1 /*47*/][bParam2], true);
			if (!func_19())
			{
				ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_OBJ(Local_183.f_193[iVar1 /*47*/][bParam2]), true);
			}
			OBJECT::SET_OBJECT_FORCE_VEHICLES_TO_AVOID(NETWORK::NET_TO_OBJ(Local_183.f_193[iVar1 /*47*/][bParam2]), true);
			OBJECT::SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(NETWORK::NET_TO_OBJ(Local_183.f_193[iVar1 /*47*/][bParam2]), true);
			PHYSICS::ACTIVATE_PHYSICS(NETWORK::NET_TO_OBJ(Local_183.f_193[iVar1 /*47*/][bParam2]));
			ENTITY::SET_ENTITY_VELOCITY(NETWORK::NET_TO_OBJ(Local_183.f_193[iVar1 /*47*/][bParam2]), 0f, 0f, -0.2f);
			if (!func_19())
			{
				OBJECT::PREVENT_COLLECTION_OF_PORTABLE_PICKUP(NETWORK::NET_TO_OBJ(Local_183.f_193[iVar1 /*47*/][bParam2]), true, false);
			}
			ENTITY::SET_ENTITY_LOD_DIST(NETWORK::NET_TO_OBJ(Local_183.f_193[iVar1 /*47*/][bParam2]), 1200);
			if (__LIB_0__::func_649(&(Local_183.f_193[iVar1 /*47*/].f_29[bParam2 /*2*/])))
			{
				__LIB_0__::func_579(&(Local_183.f_193[iVar1 /*47*/].f_29[bParam2 /*2*/]));
			}
			if (func_235())
			{
				ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_183.f_193[iVar1 /*47*/][bParam2]), false, false);
				OBJECT::SET_PORTABLE_PICKUP_PERSIST(NETWORK::NET_TO_OBJ(Local_183.f_193[iVar1 /*47*/][bParam2]), true);
			}
			if (func_253())
			{
				ENTITY::SET_ENTITY_COLLISION(NETWORK::NET_TO_OBJ(Local_183.f_193[iVar1 /*47*/][bParam2]), false, false);
			}
			Local_183.f_3 = NETWORK::NET_TO_ENT(Local_183.f_193[iVar1 /*47*/][bParam2]);
		}
	}
	if (func_549())
	{
		if (NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_183.f_193[iVar1 /*47*/][bParam2]))
			{
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_183.f_193[iVar1 /*47*/].f_5[bParam2]))
				{
					Var0 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_183.f_193[iVar1 /*47*/][bParam2]), true) };
					if (__LIB_1__::func_262(&(Local_183.f_193[iVar1 /*47*/].f_5[bParam2]), __LIB_24__::func_828(), Var0 + Vector(1f, 0f, 0f), 1, 1, 0, 1, 0, 0, 0))
					{
						if (func_253())
						{
							ENTITY::SET_ENTITY_COLLISION(NETWORK::NET_TO_OBJ(Local_183.f_193[iVar1 /*47*/].f_5[bParam2]), false, false);
						}
						ENTITY::ATTACH_ENTITY_TO_ENTITY(NETWORK::NET_TO_OBJ(Local_183.f_193[iVar1 /*47*/].f_5[bParam2]), NETWORK::NET_TO_OBJ(Local_183.f_193[iVar1 /*47*/][bParam2]), 0, 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
						OBJECT::SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(NETWORK::NET_TO_OBJ(Local_183.f_193[iVar1 /*47*/].f_5[bParam2]), true);
						ENTITY::PLAY_ENTITY_ANIM(NETWORK::NET_TO_OBJ(Local_183.f_193[iVar1 /*47*/].f_5[bParam2]), "P_cargo_chute_S_deploy", "P_cargo_chute_S", 1000f, false, false, false, 0f, 0);
						ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(NETWORK::NET_TO_OBJ(Local_183.f_193[iVar1 /*47*/].f_5[bParam2]));
						ENTITY::SET_ENTITY_LOD_DIST(NETWORK::NET_TO_OBJ(Local_183.f_193[iVar1 /*47*/].f_5[bParam2]), 1200);
						__LIB_0__::func_580(&(Local_183.f_193[iVar1 /*47*/].f_38[bParam2 /*2*/]), 0, 0);
						__LIB_0__::func_579(&(Local_183.f_193[iVar1 /*47*/].f_20[bParam2 /*2*/]));
					}
				}
			}
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_183.f_193[iVar1 /*47*/][bParam2]) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_183.f_193[iVar1 /*47*/].f_5[bParam2]))
			{
				return 1;
			}
		}
	}
	else if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_183.f_193[iVar1 /*47*/][bParam2]))
	{
		return 1;
	}
	return 0;
}

int func_549()//Position - 0x26C9C
{
	if (func_448())
	{
		return 1;
	}
	return 0;
}

int func_550()//Position - 0x26CB0
{
	switch (func_16())
	{
		case 3:
			return joaat("hei_prop_heist_binbag");
		case 7:
			return joaat("prop_drug_package");
		case 5:
			return joaat("prop_cs_box_clothes");
		default:
	}
	if (func_61())
	{
		return joaat("ex_prop_adv_case_sm");
	}
	else if (func_448())
	{
		return joaat("ex_prop_adv_case_sm_flash");
	}
	return joaat("prop_drug_package");
}

float func_551(bool bParam0)//Position - 0x26D11
{
	float fVar0;
	if (func_66(bParam0))
	{
		fVar0 = ENTITY::GET_ENTITY_HEADING(func_67(bParam0));
	}
	return fVar0;
}

Vector3 func_552()//Position - 0x26D30
{
	if (func_235())
	{
		return 0f, -5.2f, 1f;
	}
	if (!func_448())
	{
		return 0f, -6f, -0.32f;
	}
	return 0f, 0f, -1f;
}

int func_553()//Position - 0x26D62
{
	STREAMING::REQUEST_MODEL(func_550());
	STREAMING::REQUEST_MODEL(__LIB_24__::func_828());
	STREAMING::REQUEST_ANIM_DICT(__LIB_24__::func_829());
	if ((STREAMING::HAS_MODEL_LOADED(func_550()) && STREAMING::HAS_MODEL_LOADED(__LIB_24__::func_828())) && STREAMING::HAS_ANIM_DICT_LOADED(__LIB_24__::func_829()))
	{
		return 1;
	}
	return 0;
}

void func_555()//Position - 0x26DB8
{
	if (func_235())
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_183.f_3) && !ENTITY::IS_ENTITY_DEAD(Local_183.f_3, false))
		{
			if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(Local_183.f_3))
			{
				if (__LIB_0__::func_649(&(Local_183.f_12)))
				{
					__LIB_0__::func_579(&(Local_183.f_12));
				}
			}
			else if (__LIB_0__::func_649(&(Local_183.f_12)))
			{
				if (__LIB_2__::func_47(&(Local_183.f_12), 500, 0))
				{
					ENTITY::SET_ENTITY_VISIBLE(Local_183.f_3, true, false);
				}
			}
			else
			{
				__LIB_0__::func_580(&(Local_183.f_12), 0, 0);
			}
		}
	}
}

int func_556()//Position - 0x26E3C
{
	func_618();
	func_617();
	func_610();
	func_608();
	if (((((func_594() && func_592()) && func_584()) && func_582()) && func_580()) && func_579())
	{
		func_578();
		func_577();
		func_576();
		if (func_562())
		{
			func_561();
			if (func_45() && !func_15())
			{
				Local_183.f_966 = MISC::GET_RANDOM_INT_IN_RANGE(0, func_14());
			}
			Local_183.f_174 = func_73(-1);
			func_559();
			if (func_44())
			{
				__LIB_24__::func_830(&(Local_183.f_154));
			}
			Local_183.f_53 = PLAYER::PLAYER_ID();
			Local_183.f_27 = __LIB_0__::func_160();
			func_557();
			STATS::PLAYSTATS_CREATE_MATCH_HISTORY_ID_2(&(Local_183.f_19), &(Local_183.f_20));
			return 1;
		}
	}
	return 0;
}

void func_557()//Position - 0x26F0D
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < func_14())
	{
		if (func_61())
		{
			Local_183.f_28[iVar0 /*3*/] = { func_363(iVar0, 0, Local_183.f_110, Local_183.f_957, 0) };
			Local_183.f_41[iVar0] = func_469(iVar0, 0, Local_183.f_110, Local_183.f_957, 0);
		}
		else if (func_448())
		{
			Local_183.f_28[iVar0 /*3*/] = { func_468(iVar0) };
			Local_183.f_41[iVar0] = func_466(iVar0);
		}
		if (!__LIB_36__::func_561(Local_183.f_28[iVar0 /*3*/], 4f, 1f, 1f, 1f, 0, 0, 0, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
		{
			MISC::CLEAR_AREA(Local_183.f_28[iVar0 /*3*/], 4f, true, false, false, true);
		}
		iVar0++;
	}
}

void func_559()//Position - 0x26FDC
{
	if (func_366())
	{
		if (func_14() == 1)
		{
			Local_183.f_893[0] = func_560();
		}
		else if (func_14() == 2)
		{
			Local_183.f_893[0] = (func_560() / 2);
			Local_183.f_893[1] = (func_560() / 2);
		}
		else if (func_14() == 3)
		{
			Local_183.f_893[0] = (func_560() / 3);
			Local_183.f_893[1] = (func_560() / 3);
			Local_183.f_893[2] = (func_560() / 3);
		}
	}
}

int func_560()//Position - 0x27061
{
	return Global_262145.f_19114 /* Tunable: -473084455 */;
}

void func_561()//Position - 0x27070
{
	int iVar0;
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (func_18())
		{
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
			if (iVar0 == 0)
			{
				Local_183.f_884 = joaat("A_M_M_Hillbilly_01");
			}
			Local_183.f_884 = joaat("A_M_M_Hillbilly_02");
			Local_183.f_883 = joaat("sanchez");
		}
	}
}

bool func_562()//Position - 0x270B8
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	bool bVar7;
	if (func_575())
	{
		bVar1 = func_574();
		iVar2 = 1;
	}
	else if (!func_573())
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, func_233());
		iVar2 = 1;
		if (__LIB_28__::func_694(iVar0))
		{
			return 0;
		}
		if ((func_15() || func_74()) || func_43())
		{
			bVar1 = iVar0;
		}
		else
		{
			bVar1 = (iVar0 + Local_183.f_143);
		}
	}
	else if (func_253() || func_367())
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, func_571());
		if (((func_253() && func_245()) && iVar0 == 3) && Local_183.f_977 == 0)
		{
			Local_183.f_977 = 1;
		}
		iVar2 = 1;
		bVar1 = iVar0;
	}
	else if (func_19())
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, func_233());
		iVar2 = 1;
		bVar1 = iVar0;
	}
	else if (func_366())
	{
		bVar1 = Local_183.f_143;
	}
	else if (func_235())
	{
		bVar1 = Local_183.f_143;
		iVar2 = 1;
	}
	else if (func_23())
	{
		bVar1 = Local_183.f_143;
		iVar2 = 1;
	}
	else
	{
		bVar1 = (iVar0 + Local_183.f_143);
	}
	if (func_74())
	{
		if (bVar1 >= 20)
		{
			bVar1 = false;
		}
	}
	else if (((!func_367() && !func_253()) && !func_15()) && !func_43())
	{
		if (bVar1 >= func_73(-1))
		{
			bVar1 = false;
		}
	}
	iVar3 = func_73(-1);
	if (func_366())
	{
		iVar3 = (func_73(-1) / func_14());
	}
	else if (func_15())
	{
		iVar3 = 3;
	}
	if (bVar1 > -1)
	{
		if (func_566(bVar1))
		{
			if (Local_183.f_143 < iVar3)
			{
				if (!BitTest(Local_183.f_144, bVar1))
				{
					Local_183.f_143++;
					if (iVar2 || bVar1 < __LIB_2__::func_720())
					{
						iVar4 = 0;
						bVar5 = func_564();
						iVar6 = func_14();
						bVar7 = func_15();
						if (((bVar7 || func_43()) || func_44()) || func_23())
						{
							iVar6 = func_24();
						}
						iVar4 = 0;
						while (iVar4 < iVar6)
						{
							if (bVar5)
							{
								if (Local_183.f_681[iVar4] < (iVar3 / iVar6))
								{
									func_563(iVar4, bVar1);
									Local_183.f_681[iVar4]++;
									iVar4 = iVar6;
								}
							}
							else
							{
								if (bVar7 && Local_183.f_143 != 1)
								{
									MISC::SET_BIT(&(Local_183.f_145[iVar4]), bVar1);
								}
								func_563(iVar4, bVar1);
							}
							iVar4++;
						}
						MISC::SET_BIT(&(Local_183.f_144), bVar1);
					}
					if ((((!func_573() && !func_74()) && !func_15()) && !func_43()) || func_27())
					{
						return 1;
					}
				}
			}
		}
	}
	return Local_183.f_143 == iVar3;
}

void func_563(int iParam0, bool bParam1)//Position - 0x2738D
{
	MISC::SET_BIT(&(Local_183.f_134[iParam0]), bParam1);
}

int func_564()//Position - 0x273A4
{
	if (((((func_235() || func_253()) || func_19()) || func_367()) || func_43()) || func_74())
	{
		return 1;
	}
	return 0;
}

int func_566(bool bParam0)//Position - 0x273F3
{
	float fVar0;
	struct<3> Var1;
	bool bVar2;
	if (func_570())
	{
		Var1 = { __LIB_4__::func_771(Local_183.f_0) };
		bVar2 = false;
		while (bVar2 < func_14())
		{
			fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(func_412(func_16(), bParam0, Local_183.f_679, bVar2, 0, 0), Var1, true);
			if (fVar0 >= func_567())
			{
				return 1;
			}
			bVar2++;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

float func_567()//Position - 0x27457
{
	return Global_262145.f_18556 /* Tunable: BIKER_SELL_MINIMUM_DISTANCE */;
}

int func_570()//Position - 0x2766F
{
	switch (func_16())
	{
		case 3:
		case 8:
		case 10:
		case 6:
			return 1;
		default:
	}
	return 0;
}

int func_571()//Position - 0x2769D
{
	if (func_253() || func_367())
	{
		return 15;
	}
	return 10;
}

int func_573()//Position - 0x2780D
{
	if ((func_534() || func_448()) || func_18())
	{
		return 1;
	}
	return 0;
}

int func_574()//Position - 0x27835
{
	bool bVar0;
	bool bVar1[3];
	float fVar2;
	float fVar3[3];
	struct<3> Var4;
	struct<3> Var5;
	int iVar6;
	fVar3[0] = 0f;
	fVar3[1] = 0f;
	fVar3[2] = 0f;
	bVar1[0] = -1;
	bVar1[1] = -1;
	bVar1[2] = -1;
	Var4 = { __LIB_4__::func_771(Local_183.f_0) };
	bVar0 = false;
	while (bVar0 < 10)
	{
		Var5 = { func_412(func_16(), bVar0, bVar0, -1, 0, 0) };
		fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var4, Var5, false);
		if (fVar2 > fVar3[0])
		{
			fVar3[2] = fVar3[1];
			bVar1[2] = bVar1[1];
			fVar3[1] = fVar3[0];
			bVar1[1] = bVar1[0];
			fVar3[0] = fVar2;
			bVar1[0] = bVar0;
		}
		else if (fVar2 < fVar3[0] && fVar2 > fVar3[1])
		{
			fVar3[2] = fVar3[1];
			bVar1[2] = bVar1[1];
			fVar3[1] = fVar2;
			bVar1[1] = bVar0;
		}
		else if (fVar2 < fVar3[1] && fVar2 > fVar3[2])
		{
			fVar3[2] = fVar2;
			bVar1[2] = bVar0;
		}
		bVar0++;
	}
	if ((bVar1[0] != -1 && bVar1[1] != -1) && bVar1[2] != -1)
	{
		iVar6 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
		return bVar1[iVar6];
	}
	return -1;
}

int func_575()//Position - 0x27986
{
	switch (func_16())
	{
		case 7:
		case 0:
		case 11:
		case 12:
			return 1;
			break;
	}
	return 0;
}

void func_576()//Position - 0x279B7
{
	int iVar0;
	if (func_453() && !func_367())
	{
		iVar0 = 0;
		while (iVar0 < func_72())
		{
			__LIB_0__::func_584(func_450(iVar0, 0));
			iVar0++;
		}
	}
	if (func_243())
	{
		iVar0 = 0;
		while (iVar0 < func_242())
		{
			__LIB_0__::func_584(func_240(iVar0));
			iVar0++;
		}
	}
	if (func_359())
	{
		__LIB_0__::func_584(func_349());
	}
	if (func_347() && func_247())
	{
		iVar0 = 0;
		while (iVar0 < func_246())
		{
			__LIB_0__::func_584(func_244(iVar0));
			iVar0++;
		}
	}
	if (func_321())
	{
		__LIB_0__::func_584(func_319());
	}
	if (func_259())
	{
		__LIB_0__::func_584(func_258());
	}
}

void func_577()//Position - 0x27A78
{
	int iVar0;
	if (Local_183.f_694 == -1 && func_17())
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(30000, 120000);
		Local_183.f_694 = iVar0;
	}
}

void func_578()//Position - 0x27AA9
{
	if (Local_183.f_693 == -1 && (func_27() || func_17()))
	{
		Local_183.f_693 = 0;
	}
}

int func_579()//Position - 0x27AD6
{
	int iVar0;
	if (func_15())
	{
		if ((!func_29(25) && !func_29(24)) && !func_29(28))
		{
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 150);
			if (iVar0 > 100)
			{
				func_28(28);
			}
			else if (iVar0 > 50)
			{
				func_28(25);
			}
			else
			{
				func_28(24);
			}
		}
	}
	return 1;
}

int func_580()//Position - 0x27B37
{
	int iVar0;
	int iVar1;
	if (!func_62(29))
	{
		if ((((func_573() || func_27()) || func_43()) || func_44()) || func_15())
		{
			iVar1 = 5;
			if (func_44() || func_15())
			{
				iVar1 = 10;
			}
			else if (func_43())
			{
				iVar1 = 20;
			}
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar1);
			if (func_581(iVar0))
			{
				return 0;
			}
			Local_183.f_679 = iVar0;
			if (Local_183.f_981 == -1)
			{
				Local_183.f_981 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
			}
			func_48(29);
		}
		else
		{
			func_48(29);
			return 1;
		}
	}
	return func_62(29);
}

int func_581(int iParam0)//Position - 0x27BEB
{
	switch (func_16())
	{
		case 9:
			if (func_245())
			{
				switch (iParam0)
				{
					case 0:
						return Global_262145.f_18574 /* Tunable: BIKER_DISABLE_SELL_BORDER_PATROL_0 */;
					case 1:
						return Global_262145.f_18575 /* Tunable: BIKER_DISABLE_SELL_BORDER_PATROL_1 */;
					case 2:
						return Global_262145.f_18576 /* Tunable: BIKER_DISABLE_SELL_BORDER_PATROL_2 */;
					case 3:
						return Global_262145.f_18577 /* Tunable: BIKER_DISABLE_SELL_BORDER_PATROL_3 */;
					case 4:
						return Global_262145.f_18578 /* Tunable: BIKER_DISABLE_SELL_BORDER_PATROL_4 */;
					default:
				}
			}
			else
			{
				switch (iParam0)
				{
					case 0:
						return Global_262145.f_18579 /* Tunable: BIKER_DISABLE_SELL_BORDER_PATROL_5 */;
					case 1:
						return Global_262145.f_18580 /* Tunable: BIKER_DISABLE_SELL_BORDER_PATROL_6 */;
					case 2:
						return Global_262145.f_18581 /* Tunable: BIKER_DISABLE_SELL_BORDER_PATROL_7 */;
					case 3:
						return Global_262145.f_18582 /* Tunable: BIKER_DISABLE_SELL_BORDER_PATROL_8 */;
					case 4:
						return Global_262145.f_18583 /* Tunable: BIKER_DISABLE_SELL_BORDER_PATROL_9 */;
					}
				default:
			}
			break;
	}
	return 0;
}

int func_582()//Position - 0x27CBE
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (!func_62(28))
	{
		iVar3 = __LIB_24__::func_831(PLAYER::PLAYER_ID());
		if (func_448())
		{
			switch (func_46())
			{
				case 0:
					iVar0 = iVar3 * 3;
					break;
				case 1:
					iVar0 = iVar3 * 3;
					iVar1 = iVar0 + 1;
					if (iVar0 == iVar1)
					{
						return 0;
					}
					break;
				case 2:
					iVar0 = iVar3 * 3;
					iVar1 = iVar0 + 1;
					iVar2 = iVar1 + 1;
					if ((iVar0 == iVar1 || iVar0 == iVar2) || iVar1 == iVar2)
					{
						return 0;
					}
					break;
			}
		}
		else
		{
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
		}
		Local_183.f_700[0] = iVar0;
		Local_183.f_700[1] = iVar1;
		Local_183.f_700[2] = iVar2;
		func_48(28);
	}
	return func_62(28);
}

int func_584()//Position - 0x27DC9
{
	var uVar0;
	var uVar1;
	if (Local_183.f_957 == -1)
	{
		uVar1 = func_587(&uVar0);
		func_586(uVar1);
		func_585(uVar0);
		return 1;
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_585(var uParam0)//Position - 0x27DFB
{
	Local_183.f_958 = uParam0;
}

void func_586(var uParam0)//Position - 0x27E0B
{
	Local_183.f_957 = uParam0;
}

int func_587(var uParam0)//Position - 0x27E1B
{
	struct<2> Var0;
	int iVar1;
	int iVar2;
	Var0 = { __LIB_10__::func_933() };
	iVar1 = __LIB_1__::func_347(Var0.f_0);
	iVar2 = __LIB_4__::func_473(PLAYER::PLAYER_ID(), Var0.f_0);
	if (iVar2 > func_590(iVar1, Var0.f_0))
	{
		*uParam0 = iVar2;
		return 2;
	}
	else if (iVar2 > func_588(iVar1, Var0.f_0) && iVar2 <= func_590(iVar1, Var0.f_0))
	{
		*uParam0 = iVar2;
		return 1;
	}
	else if (iVar2 > 0 && iVar2 <= func_588(iVar1, Var0.f_0))
	{
		*uParam0 = iVar2;
		return 0;
	}
	*uParam0 = 1;
	return -1;
}

int func_588(int iParam0, int iParam1)//Position - 0x27EA7
{
	float fVar0;
	float fVar1;
	float fVar2;
	fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_18552 /* Tunable: BIKER_SELL_MEDIUM_THRESHOLD */);
	fVar1 = (fVar0 / 100f);
	fVar2 = fVar1;
	switch (iParam0)
	{
		case 4:
			return SYSTEM::CEIL((IntToFloat(__LIB_4__::func_474(iParam1)) * fVar2));
		case 0:
			return SYSTEM::CEIL((IntToFloat(__LIB_4__::func_474(iParam1)) * fVar2));
		case 2:
			return SYSTEM::CEIL((IntToFloat(__LIB_4__::func_474(iParam1)) * fVar2));
		case 3:
			return SYSTEM::CEIL((IntToFloat(__LIB_4__::func_474(iParam1)) * fVar2));
		case 1:
			return SYSTEM::CEIL((IntToFloat(__LIB_4__::func_474(iParam1)) * fVar2));
		default:
	}
	return 5;
}

int func_590(int iParam0, int iParam1)//Position - 0x28195
{
	float fVar0;
	float fVar1;
	float fVar2;
	fVar0 = SYSTEM::TO_FLOAT(Global_262145.f_18553 /* Tunable: BIKER_SELL_LARGE_THRESHOLD */);
	fVar1 = (fVar0 / 100f);
	fVar2 = fVar1;
	switch (iParam0)
	{
		case 4:
			return SYSTEM::CEIL((IntToFloat(__LIB_4__::func_474(iParam1)) * fVar2));
		case 0:
			return SYSTEM::CEIL((IntToFloat(__LIB_4__::func_474(iParam1)) * fVar2));
		case 2:
			return SYSTEM::CEIL((IntToFloat(__LIB_4__::func_474(iParam1)) * fVar2));
		case 3:
			return SYSTEM::CEIL((IntToFloat(__LIB_4__::func_474(iParam1)) * fVar2));
		case 1:
			return SYSTEM::CEIL((IntToFloat(__LIB_4__::func_474(iParam1)) * fVar2));
		default:
	}
	return 5;
}

int func_592()//Position - 0x2824C
{
	if (Local_183.f_110 == -1)
	{
		Local_183.f_110 = Local_133.f_195;
		if (Local_183.f_110 < 1)
		{
			Local_183.f_110 = 1;
		}
		Local_183.f_111 = func_593();
		if (Local_183.f_111 <= 0)
		{
			Local_183.f_111 = 1;
			func_28(2);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

var func_593()//Position - 0x2829A
{
	return Local_183.f_969;
}

int func_594()//Position - 0x282A8
{
	int iVar0;
	if (func_16() == 13)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 13);
		if (((((!func_606(iVar0) && !func_605(iVar0)) && !func_601(iVar0)) && func_600(iVar0)) && func_599(iVar0)) && func_598(iVar0))
		{
			Local_183.f_17 = iVar0;
			func_597(iVar0);
			func_595(iVar0);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_595(int iParam0)//Position - 0x28320
{
	Global_2815059.f_5195.f_368 = func_596(iParam0);
}

int func_596(int iParam0)//Position - 0x28338
{
	if (iParam0 == 13)
	{
		iParam0 = func_16();
	}
	if (func_61())
	{
		return 0;
	}
	else if (func_448())
	{
		return 1;
	}
	else
	{
		return 2;
	}
	return -1;
}

void func_597(int iParam0)//Position - 0x2836E
{
	if (Global_2815059.f_5195.f_357[0] == 13)
	{
		Global_2815059.f_5195.f_357[0] = iParam0;
		return;
	}
	else
	{
		Global_2815059.f_5195.f_357[3] = Global_2815059.f_5195.f_357[2];
		Global_2815059.f_5195.f_357[2] = Global_2815059.f_5195.f_357[1];
		Global_2815059.f_5195.f_357[1] = Global_2815059.f_5195.f_357[0];
		Global_2815059.f_5195.f_357[0] = iParam0;
	}
}

int func_598(int iParam0)//Position - 0x283FA
{
	float fVar0;
	fVar0 = SYSTEM::TO_FLOAT((__LIB_4__::func_473(PLAYER::PLAYER_ID(), Local_183.f_0) / Local_183.f_112));
	switch (iParam0)
	{
		case 10:
			if (fVar0 < IntToFloat(Global_262145.f_18614 /* Tunable: 1825889027 */))
			{
				return 0;
			}
			break;
		case 11:
			if (fVar0 < IntToFloat(Global_262145.f_18619 /* Tunable: -1088321679 */))
			{
				return 0;
			}
			break;
		case 12:
			if (fVar0 < IntToFloat(Global_262145.f_18624 /* Tunable: 274451606 */))
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_599(int iParam0)//Position - 0x28472
{
	switch (iParam0)
	{
		case 10:
			if (Local_183.f_112 < Global_262145.f_18613 /* Tunable: BIKER_SELL_BAG_DROP_PLAYERS_REQUIRED */)
			{
				return 0;
			}
			break;
		case 11:
			if (Local_183.f_112 < Global_262145.f_18618 /* Tunable: BIKER_SELL_RACE_PLAYERS_REQUIRED */)
			{
				return 0;
			}
			break;
		case 12:
			if (Local_183.f_112 < Global_262145.f_18623 /* Tunable: BIKER_SELL_CLUB_RUN_PLAYERS_REQUIRED */)
			{
				return 0;
			}
			break;
		case 7:
			if (__LIB_19__::func_834() + 1 < Global_262145.f_18565 /* Tunable: BIKER_SELL_PROVEN_MIN_PLAYERS */)
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_600(int iParam0)//Position - 0x284F3
{
	if (((((((((iParam0 == 0 || iParam0 == 9) || iParam0 == 2) || iParam0 == 1) || iParam0 == 3) || iParam0 == 5) || iParam0 == 8) || iParam0 == 10) || iParam0 == 11) || iParam0 == 12)
	{
		return 1;
	}
	if (iParam0 == 6 && Local_183.f_1 == 4)
	{
		return 1;
	}
	if (iParam0 == 4 && Local_183.f_1 == 0)
	{
		return 1;
	}
	if (iParam0 == 3 && Local_183.f_1 == 1)
	{
		return 1;
	}
	if (iParam0 == 7 && Local_183.f_1 == 1)
	{
		return 1;
	}
	return 0;
}

int func_601(int iParam0)//Position - 0x285C2
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)))
		{
			iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (__LIB_0__::func_581(iVar2))
			{
				if (__LIB_0__::func_396(iVar2) == 190)
				{
					iVar1 = func_602(iVar2);
					if (iParam0 == iVar1)
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_602(int iParam0)//Position - 0x2861A
{
	if (__LIB_0__::func_292(iParam0, 0))
	{
		return Global_1892703[iParam0 /*599*/].f_10.f_473;
	}
	return -1;
}

int func_605(int iParam0)//Position - 0x2869C
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_18560 /* Tunable: BIKER_DISABLE_SELL_CONVOY */;
		case 3:
			return Global_262145.f_18562 /* Tunable: BIKER_DISABLE_SELL_TRASHMASTER */;
		case 7:
			return Global_262145.f_18566 /* Tunable: BIKER_DISABLE_SELL_PROVEN */;
		case 4:
			return Global_262145.f_18568 /* Tunable: 864548199 */;
		case 9:
			return Global_262145.f_18573 /* Tunable: BIKER_DISABLE_SELL_BORDER_PATROL */;
		case 2:
			return Global_262145.f_18595 /* Tunable: BIKER_DISABLE_SELL_HELICOPTER_DROP */;
		case 5:
			return Global_262145.f_18598 /* Tunable: BIKER_DISABLE_SELL_POSTMAN */;
		case 1:
			return Global_262145.f_18600 /* Tunable: -1893108522 */;
		case 6:
			return Global_262145.f_18607 /* Tunable: BIKER_DISABLE_SELL_STING_OP */;
		case 8:
			return Global_262145.f_18609 /* Tunable: BIKER_DISABLE_SELL_BENSON */;
		case 10:
			return Global_262145.f_18615 /* Tunable: BIKER_DISABLE_SELL_BAG_DROP */;
		case 11:
			return Global_262145.f_18620 /* Tunable: BIKER_DISABLE_SELL_RACE */;
		case 12:
			return Global_262145.f_18625 /* Tunable: BIKER_DISABLE_CLUB_RUN */;
		default:
	}
	return 0;
}

int func_606(int iParam0)//Position - 0x2877C
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < func_607())
	{
		if (Global_2815059.f_5195.f_357[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_607()//Position - 0x287B1
{
	return Global_262145.f_18554 /* Tunable: 731581918 */;
}

void func_608()//Position - 0x287C0
{
	if (Local_183.f_16 == 0)
	{
		switch (Local_183.f_1)
		{
			case 4:
				Local_183.f_16 = __LIB_28__::func_669(Global_262145.f_18301 /* Tunable: BIKER_COCAINE_MISSION_DIFFICULTY */);
				break;
			case 0:
				Local_183.f_16 = __LIB_28__::func_669(Global_262145.f_18298 /* Tunable: BIKER_DOCUMENTS_MISSION_DIFFICULTY */);
				break;
			case 2:
				Local_183.f_16 = __LIB_28__::func_669(Global_262145.f_18299 /* Tunable: BIKER_COUNTERFEIT_CASH_MISSION_DIFFICULTY */);
				break;
			case 3:
				Local_183.f_16 = __LIB_28__::func_669(Global_262145.f_18300 /* Tunable: BIKER_METH_MISSION_DIFFICULTY */);
				break;
			case 1:
				Local_183.f_16 = __LIB_28__::func_669(Global_262145.f_18297 /* Tunable: BIKER_WEED_MISSION_DIFFICULTY */);
				break;
			}
	}
}

void func_610()//Position - 0x28886
{
	int iVar0;
	struct<2> Var1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	if (Local_183.f_0 == 0)
	{
		Var1.f_1 = -1;
		Var1 = { __LIB_10__::func_933() };
		iVar2 = __LIB_1__::func_347(Var1.f_0);
		Local_183.f_0 = Var1.f_0;
		Local_183.f_1 = iVar2;
		Local_183.f_2 = Var1.f_1;
		iVar5 = 8;
		if (func_23())
		{
			iVar5 = Global_262145.f_18569 /* Tunable: 249977398 */;
		}
		iVar4 = 0;
		while (iVar4 < 32)
		{
			if (iVar0 < iVar5 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar4)))
			{
				bVar6 = PLAYER::INT_TO_PLAYERINDEX(iVar4);
				if (func_615(bVar6, __LIB_0__::func_582(), 1))
				{
					uVar3 = (Global_1946112 && __LIB_4__::func_355(bVar6));
					if (__LIB_6__::func_984(bVar6) || uVar3)
					{
						if (func_611(bVar6) == Local_183.f_0 || uVar3)
						{
							Local_183.f_101[iVar0] = iVar4;
							iVar0++;
						}
					}
				}
			}
			iVar4++;
		}
		Local_183.f_112 = iVar0;
	}
}

int func_611(bool bParam0)//Position - 0x2896C
{
	if (__LIB_6__::func_984(bParam0))
	{
		return __LIB_3__::func_499(Global_2689235[bParam0 /*453*/].f_318.f_6);
	}
	return 0;
}

int func_615(int iParam0, bool bParam1, bool bParam2)//Position - 0x28BDB
{
	if (bParam1 != __LIB_0__::func_160())
	{
		if (!bParam2)
		{
			if (__LIB_1__::func_144(iParam0, bParam1))
			{
				return 0;
			}
		}
		if (Global_1892703[iParam0 /*599*/].f_10 != __LIB_0__::func_160())
		{
			return bParam1 == Global_1892703[iParam0 /*599*/].f_10;
		}
	}
	return 0;
}

void func_617()//Position - 0x28C6A
{
	if (Local_183.f_969 == -1)
	{
		Local_183.f_969 = Global_1946098;
	}
}

void func_618()//Position - 0x28C86
{
	if (Local_183.f_968 == -1)
	{
		Local_183.f_968 = Global_1946100;
	}
}

void func_619(int iParam0)//Position - 0x28CA2
{
	Local_183.f_5 = iParam0;
}

void func_621()//Position - 0x28CD4
{
	func_1951();
	func_1946();
	__LIB_0__::func_371();
	func_1940();
	func_1937();
	func_1936();
	func_1934();
	func_1933();
	func_1932();
	func_1931();
	func_1911();
	func_1910();
	if (PLAYER::GET_MAX_WANTED_LEVEL() == 0)
	{
		PLAYER::SET_LAW_PEDS_CAN_ATTACK_NON_WANTED_PLAYER_THIS_FRAME(PLAYER::PLAYER_ID());
	}
	switch (func_471())
	{
		case 0:
			break;
		case 1:
			if (!func_1909(2))
			{
				func_1887(190, 1, Local_183.f_17, 0);
				__LIB_21__::func_123();
				func_1884(1);
				if (func_1883())
				{
					__LIB_1__::func_468();
				}
				if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(210.93f, -2022.58f, 17.65f, 6f, joaat("prop_fnclink_03gate1"), false))
				{
					OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_fnclink_03gate1"), 210.93f, -2022.58f, 17.65f, true, 1f, false);
				}
				func_1881(2);
				if (func_44())
				{
					func_1878(&iLocal_158, &(Local_183.f_154), func_412(func_16(), 0, Local_183.f_679, 0, 0, 0), Local_133.f_28[0]);
				}
			}
			else if (!func_1909(3))
			{
				if (__LIB_2__::func_47(&(Local_183.f_10), 10000, 0))
				{
					__LIB_11__::func_64();
					func_1881(3);
				}
			}
			if (__LIB_6__::func_984(PLAYER::PLAYER_ID()) && func_611(PLAYER::PLAYER_ID()) == Local_183.f_0)
			{
				func_1876();
			}
			else
			{
				if (__LIB_6__::func_984(PLAYER::PLAYER_ID()))
				{
				}
				if ((!__LIB_25__::func_938() && !__LIB_0__::func_114()) && !__LIB_36__::func_855(190))
				{
					if (func_239() == 0)
					{
						if (Global_2703735.f_4.f_10 || func_230(0))
						{
							if (!func_1909(4))
							{
								func_1768(func_16(), Local_183.f_0, 0, -1, 0, 0);
								func_1881(4);
							}
							func_1657(&(Global_1637407.f_534), &Global_1637407, 28, &(Global_1637407.f_1), &(Global_1637407.f_117), -1, 0, 0);
							func_1497();
							if (!Global_1946250.f_519)
							{
								func_1450(0);
								func_1385(0);
								func_1367();
							}
							HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
							HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
							HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
							func_1364();
							func_1362();
							func_1360();
							func_1359();
							func_1358();
							func_1357();
							func_1354();
							func_1343();
							if (func_15() && func_41())
							{
								if (!func_1342(4))
								{
									if (func_29(25))
									{
										func_1341(4);
										if (PLAYER::GET_MAX_WANTED_LEVEL() < func_1340())
										{
											PLAYER::SET_MAX_WANTED_LEVEL(func_1340());
										}
										func_1337(func_1340());
										func_531(5);
									}
									else
									{
										func_1341(4);
									}
								}
								if (!func_1336(30))
								{
									if (func_1909(29))
									{
										if (__LIB_2__::func_47(&(Local_133.f_261), 10000, 0))
										{
											if (func_29(25) || func_29(24))
											{
												if (!func_29(28))
												{
													func_1335(29);
												}
											}
											__LIB_29__::func_82(30);
										}
									}
								}
							}
							if (func_44())
							{
								func_1256(&iLocal_158, &(Local_183.f_154), 5f);
								if (!func_1255() && !__LIB_1__::func_298(PLAYER::PLAYER_ID(), 6))
								{
									if (!__LIB_1__::func_298(PLAYER::PLAYER_ID(), 7))
									{
										__LIB_9__::func_333(6);
									}
								}
								if (!__LIB_9__::func_367())
								{
									__LIB_24__::func_834();
								}
							}
							if (((func_367() || func_253()) || func_27()) || func_534())
							{
								func_1206();
							}
							if (iLocal_156 > -1)
							{
								if (iLocal_156 == NETWORK::PARTICIPANT_ID_TO_INT())
								{
								}
							}
						}
					}
				}
				else
				{
					__LIB_3__::func_647(24);
					__LIB_18__::func_455();
				}
			}
			break;
		case 2:
			if (func_239() != 7)
			{
				if (!BitTest(Global_1943920.f_3, 4))
				{
					MISC::SET_BIT(&(Global_1943920.f_3), 4);
				}
			}
			else
			{
				func_1196();
			}
			func_1195();
			func_1193();
			func_1185();
			func_1165(0);
			func_1164();
			func_1450(1);
			func_1385(1);
			func_860();
			func_856(Local_183.f_110);
			func_849();
			func_847(0);
			if (__LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1))
			{
				if (__LIB_25__::func_111(PLAYER::PLAYER_PED_ID(), 2, -1))
				{
					func_624(PLAYER::PLAYER_PED_ID(), 2, -1, -1);
				}
			}
			func_622();
			break;
		case 3:
			break;
	}
}

void func_622()//Position - 0x290A8
{
	bool bVar0;
	bVar0 = false;
	while (bVar0 < func_14())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_59[bVar0]))
		{
			if (ENTITY::DOES_ENTITY_EXIST(func_67(bVar0)))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(func_67(bVar0)))
				{
					if (!ENTITY::IS_ENTITY_DEAD(func_67(bVar0), false))
					{
						__LIB_11__::func_72(func_13(bVar0));
					}
				}
			}
		}
		bVar0++;
	}
}

void func_624(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x29158
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
	if (__LIB_18__::func_485(iParam0, &Global_78200, iParam1, &iParam3))
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
			if (!__LIB_0__::func_155(0))
			{
				if (__LIB_1__::func_563(161, -1))
				{
					func_646(iParam0, 2, __LIB_1__::func_556(2053, Global_78127, 0), 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				else
				{
					func_646(iParam0, 2, __LIB_1__::func_556(753, Global_78127, 0), 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					__LIB_25__::func_44(iParam0, -1);
				}
			}
			__LIB_0__::func_917(0);
			__LIB_18__::func_775(1, 2);
		}
	}
}

int func_646(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)//Position - 0x2A3C9
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
		Global_78130[1 /*14*/] = { __LIB_35__::func_588(iVar5, iParam1, iParam2, -1) };
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
			func_790(iVar5, iParam1, iParam2, 1);
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
					Global_78130[1 /*14*/] = { __LIB_35__::func_588(iVar5, 10, 0, -1) };
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
						func_790(iVar5, 10, 0, 1);
					}
				}
				else
				{
					Global_78130[1 /*14*/] = { __LIB_35__::func_588(iVar5, iVar0, uVar14[iVar0], -1) };
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
								Global_78130[1 /*14*/] = { __LIB_35__::func_588(iVar5, 14, uVar15[iVar1], -1) };
								__LIB_6__::func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
								if (BitTest(Global_78130[1 /*14*/].f_6, 1))
								{
									func_790(iVar5, iVar0, uVar14[iVar0], 1);
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
								func_646(iParam0, iVar0, uVar14[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (BitTest(Global_78130[1 /*14*/].f_6, 1))
							{
								func_790(iVar5, iVar0, uVar14[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_35__::func_588(iVar5, iVar0, func_777(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					uVar16 = { __LIB_18__::func_180(iVar5, 0) };
					func_646(iParam0, iVar0, uVar16[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			iVar0++;
		}
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1), 0);
		Global_2883588 = uVar12;
		Global_2883589 = uVar13;
		if (iParam5 == 0)
		{
			iVar17 = __LIB_18__::func_395();
			if (iVar17 != -1)
			{
				__LIB_18__::func_394(iVar17, 0, iParam10);
			}
			func_769(iParam0, 11, uVar14[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar18 = { __LIB_18__::func_247(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_78130[1 /*14*/] = { __LIB_35__::func_588(iVar5, 14, uVar18[iVar1], -1) };
			__LIB_6__::func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
			if (BitTest(Global_78130[1 /*14*/].f_6, 1))
			{
				func_790(iVar5, 14, uVar18[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_78128 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = __LIB_39__::func_721(iParam0, iVar5, 14, uVar18[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_646(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_790(iVar5, iParam1, iParam2, 1);
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			if (BitTest(Global_78130[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HAIR"), 1))
			{
			}
			else if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 1, joaat("HAIR_SHRINK")))
			{
				func_646(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_78130[1 /*14*/] = { __LIB_35__::func_588(iVar5, iParam1, iParam2, -1) };
			}
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			func_760(iParam0);
		}
		if (iParam5 == 0)
		{
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = __LIB_39__::func_721(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_646(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = __LIB_39__::func_721(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_646(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					iVar27 = func_756(iVar5, iVar24, iVar23, iVar25);
					if (iVar27 == -99)
					{
						iVar27 = __LIB_39__::func_721(iParam0, iVar5, 11, iVar23, 3, 0);
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
							func_646(iParam0, 8, iVar29, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							Global_78130[1 /*14*/] = { __LIB_35__::func_588(iVar5, iParam1, iParam2, -1) };
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
							iVar30 = __LIB_37__::func_827(iParam0, iParam2);
							iVar31 = __LIB_6__::func_809(iVar5, iVar23, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
							if (iVar31 != -99)
							{
								func_646(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_35__::func_588(iVar5, iParam1, iParam2, -1) };
								iVar8 = -99;
							}
							else if (iVar30 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								func_646(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_35__::func_588(iVar5, iParam1, iParam2, -1) };
							}
							else
							{
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									iVar32 = __LIB_0__::func_356(iVar5, 11, -1);
									Global_78130[1 /*14*/] = { __LIB_35__::func_588(iVar5, 11, iVar32, -1) };
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
								func_646(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_35__::func_588(iVar5, iParam1, iParam2, -1) };
							}
						}
					}
					else
					{
						Global_78130[1 /*14*/] = { __LIB_35__::func_588(iVar5, 11, iVar23, -1) };
						iVar34 = Global_78130[1 /*14*/].f_3;
						Global_78130[1 /*14*/] = { __LIB_35__::func_588(iVar5, 11, iParam2, -1) };
						iVar35 = Global_78130[1 /*14*/].f_3;
						if (iVar34 != iVar35)
						{
							iVar37 = __LIB_37__::func_827(iParam0, iParam2);
							Global_78130[1 /*14*/] = { __LIB_35__::func_588(iVar5, 8, iVar24, -1) };
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
										Global_78130[1 /*14*/] = { __LIB_35__::func_588(iVar5, 11, iVar38, -1) };
										iVar39 = __LIB_6__::func_809(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
									}
								}
								if (iVar5 == joaat("MP_F_Freemode_01") && ((iVar24 == 32 || iVar24 == 33) || iVar24 == 119))
								{
									if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_420(iVar5, iParam2, 11, 4), joaat("JACKET_ONLY"), 0))
									{
										iVar38 = __LIB_0__::func_356(iVar5, 11, -1);
										Global_78130[1 /*14*/] = { __LIB_35__::func_588(iVar5, 11, iVar38, -1) };
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
									Global_78130[1 /*14*/] = { __LIB_35__::func_588(iVar5, 11, iVar38, -1) };
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
								func_646(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_M_Freemode_01"))
							{
								iVar38 = __LIB_0__::func_356(iVar5, 11, -1);
								Global_78130[1 /*14*/] = { __LIB_35__::func_588(iVar5, 11, iVar38, -1) };
								iVar39 = __LIB_6__::func_809(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
								if (iVar39 == -99)
								{
									iVar39 = 240;
								}
								func_646(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_F_Freemode_01"))
							{
								func_646(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							Global_78130[1 /*14*/] = { __LIB_35__::func_588(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				__LIB_31__::func_931(iVar5, iParam2);
				if (!bParam13)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 10));
				}
			}
			func_769(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_756(iVar5, func_777(iParam0, 8, -1), iParam2, func_777(iParam0, 4, -1));
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam5 == 0)
			{
				if (iParam8 == -1)
				{
					iParam8 = __LIB_1__::func_556(2153, iParam10, 0);
				}
				if (iParam9 == -1)
				{
					iParam9 = __LIB_1__::func_556(2160, iParam10, 0);
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
				func_686(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar43 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar43, joaat("GLOVES"), 0))
			{
				iVar44 = __LIB_6__::func_795(iParam0, 11);
				iVar45 = __LIB_6__::func_795(iParam0, 4);
				iVar46 = func_756(iVar5, iParam2, iVar44, iVar45);
				if (iVar46 == -99)
				{
					iVar46 = __LIB_39__::func_721(iParam0, iVar5, 11, iVar44, 3, 0);
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
			func_769(iParam0, iParam1, iParam2, iParam6, 0);
			iVar49 = __LIB_6__::func_795(iParam0, 11);
			if (__LIB_6__::func_808(iVar5, iVar49, -1))
			{
				iVar50 = __LIB_6__::func_807(iVar5, iParam2, Global_78130[1 /*14*/].f_4);
				__LIB_31__::func_931(iVar5, iVar50);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_756(iVar5, iParam2, __LIB_6__::func_795(iParam0, 11), __LIB_6__::func_795(iParam0, 4));
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
				iVar52 = __LIB_1__::func_556(2100, iParam10, 0);
				iVar53 = __LIB_1__::func_556(2101, iParam10, 0);
				iVar54 = __LIB_1__::func_556(2102, iParam10, 0);
				fVar55 = __LIB_2__::func_97(135, iParam10);
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
				__LIB_25__::func_44(iParam0, iParam10);
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
						func_646(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_35__::func_588(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			else if (iVar5 == joaat("MP_F_Freemode_01"))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_420(iVar5, iVar57, 11, 4), joaat("LOW2_OPEN_CHECK"), 0))
				{
					if (!__LIB_6__::func_806(iVar5, iParam2, __LIB_6__::func_807(iVar5, iVar58, 0)))
					{
						func_646(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_35__::func_588(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_756(iVar5, __LIB_6__::func_795(iParam0, 8), __LIB_6__::func_795(iParam0, 11), iParam2);
			}
			iVar59 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar59, joaat("GLOVES"), 0))
			{
				iVar60 = func_756(iVar5, iVar58, iVar57, iParam2);
				if (iVar60 == -99)
				{
					iVar60 = __LIB_39__::func_721(iParam0, iVar5, 11, iVar57, 3, 0);
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
					iVar3 = __LIB_39__::func_721(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_646(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
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
								iVar6 = func_756(iVar5, iVar3, __LIB_6__::func_795(iParam0, 11), __LIB_6__::func_795(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = __LIB_39__::func_721(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_646(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						if (!func_674(iParam0, 9, iVar63))
						{
							func_646(iParam0, 9, iVar63, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_646(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
					{
						func_646(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 8)
			{
				iVar64 = __LIB_1__::func_556(2042, -1, 0);
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
						func_646(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("MP_F_Freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar65 = func_777(iParam0, 4, -1);
					iVar66 = iParam2;
				}
				else
				{
					iVar65 = iParam2;
					iVar66 = func_777(iParam0, 11, -1);
				}
				if (__LIB_6__::func_802(iVar5, 11, iVar66, -1))
				{
					if (!__LIB_6__::func_801(iVar5, 4, iVar65, -1))
					{
						if (__LIB_6__::func_800(iVar5, 4, iVar65, &uVar67))
						{
							func_646(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (__LIB_6__::func_801(iVar5, 4, iVar65, -1))
				{
					if (__LIB_6__::func_799(iVar5, 4, iVar65, &uVar67))
					{
						func_646(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_646(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_6__::func_758(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_646(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_646(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_6__::func_758(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_646(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_646(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_6__::func_758(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_646(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_646(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_6__::func_758(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_646(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				func_760(iParam0);
				iVar81 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
				iVar82 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
				iVar83 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar81, iVar82);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar83, joaat("FORCE_PROP"), 0))
				{
					iVar3 = __LIB_39__::func_721(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_646(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = __LIB_39__::func_721(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_646(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_647(iParam0, &uVar4))
		{
			func_646(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_646(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar8 != -99)
	{
		func_646(iParam0, 8, iVar8, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_646(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar10 != -1)
	{
		iVar84 = __LIB_0__::func_254(iVar5, func_777(iParam0, 3, -1), iVar10);
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
				func_646(iParam0, 3, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_647(int iParam0, var uParam1)//Position - 0x2C275
{
	int iVar0;
	int iVar1;
	*uParam1 = func_777(PLAYER::PLAYER_PED_ID(), 2, -1);
	if (__LIB_1__::func_556(754, Global_78127, 0) != -99 && __LIB_6__::func_781())
	{
		if (__LIB_0__::func_214() == 4)
		{
			return 1;
		}
		if (__LIB_1__::func_556(754, Global_78127, 0) == 0 && __LIB_1__::func_556(755, Global_78127, 0) == 0)
		{
			if (__LIB_1__::func_563(161, Global_78127))
			{
				if (__LIB_1__::func_556(2053, Global_78127, 0) == 0)
				{
					return 0;
				}
			}
			else if (__LIB_1__::func_556(753, Global_78127, 0) == 0)
			{
				return 0;
			}
		}
		iVar0 = __LIB_1__::func_556(754, Global_78127, 0);
		iVar1 = __LIB_1__::func_556(755, Global_78127, 0);
		if (!func_674(iParam0, iVar1, iVar0))
		{
			if (__LIB_1__::func_563(161, Global_78127))
			{
				*uParam1 = __LIB_1__::func_556(2053, Global_78127, 0);
			}
			else
			{
				*uParam1 = __LIB_1__::func_556(753, Global_78127, 0);
			}
			__LIB_1__::func_597(754, -99, Global_78127, 1, 0);
			__LIB_1__::func_597(755, 2, Global_78127, 1, 0);
			return 1;
		}
	}
	return 0;
}

int func_674(int iParam0, int iParam1, int iParam2)//Position - 0x30AC4
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
	Global_78130[1 /*14*/] = { __LIB_35__::func_588(iVar0, iParam1, iParam2, -1) };
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
				if (!func_674(iParam0, iVar4, uVar8[iVar4]))
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
							if (!func_674(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_35__::func_588(iVar0, 14, iVar6, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar5)
									{
										if (func_674(iParam0, 14, iVar6))
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
						Global_78130[2 /*14*/] = { __LIB_35__::func_588(iVar0, iVar4, iVar1, -1) };
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
			if (__LIB_1__::func_556(1759, Global_78127, 0) != uVar8[10])
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
			if (!func_674(iParam0, 14, uVar11[iVar10]))
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
						return func_674(iParam0, 4, uVar18);
					}
				}
				else if (__LIB_6__::func_799(iVar0, 4, iParam2, &uVar18))
				{
					return func_674(iParam0, 4, uVar18);
				}
			}
			Global_78129 = (Global_78129 - 1);
		}
	}
	return 0;
}

void func_686(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x37A37
{
	int iVar0;
	int iVar1;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	__LIB_25__::func_74(MISC::GET_HASH_KEY("hairOverlay"), iParam0);
	iVar1 = __LIB_6__::func_805(iVar0, iParam1);
	if (iVar1 != -1)
	{
		if (iParam2 == -1)
		{
			iParam2 = Global_78127;
		}
		__LIB_18__::func_394(iVar1, 1, iParam2);
	}
	func_687(iParam0, bParam3, 0, -1);
}

void func_687(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x37A84
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
		bVar3 = func_731(iParam0, 0);
		bVar4 = __LIB_31__::func_887(iParam0);
		bVar5 = func_722(iParam0, iParam3);
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
			if (__LIB_18__::func_373(iVar6, iVar0))
			{
				if (__LIB_6__::func_785(&Var1, iVar6, iVar2, iParam0, -1))
				{
					if (__LIB_25__::func_27(iParam0, &Var1, iVar6, Var1.f_4, Var1.f_8, bVar3, bVar4, bParam1, bVar5))
					{
						PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var1.f_4, Var1.f_5);
					}
				}
			}
			iVar6++;
		}
		if (__LIB_18__::func_373(123, iVar0))
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
					if (__LIB_18__::func_373(iVar10, iVar0))
					{
						if (__LIB_25__::func_27(iParam0, &(Var9.f_7), iVar10, Var9.f_2, Var9.f_6, bVar3, bVar4, bParam1, bVar5))
						{
							if (!__LIB_31__::func_901(Var9.f_2, Var9.f_3, iVar10))
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

int func_722(int iParam0, int iParam1)//Position - 0x46B0E
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
			iVar2 = __LIB_1__::func_556(1759, -1, 0);
			if (iParam1 != -1)
			{
				iVar2 = iParam1;
			}
			if (iVar0 > 15)
			{
				iVar3 = func_777(iParam0, 11, -1);
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
			iVar2 = __LIB_1__::func_556(1759, -1, 0);
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
				iVar5 = func_777(iParam0, 11, -1);
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

int func_731(int iParam0, bool bParam1)//Position - 0x46F6C
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
							iVar2 = __LIB_25__::func_18(joaat("MP_M_Freemode_01"), 11, func_777(iParam0, 11, -1), 0);
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
						if (__LIB_18__::func_373(13, -1))
						{
							return 1;
						}
						else if (__LIB_18__::func_373(14, -1))
						{
							return 1;
						}
						else if (__LIB_18__::func_373(15, -1))
						{
							return 1;
						}
						else if (__LIB_18__::func_373(16, -1))
						{
							return 1;
						}
						else if (__LIB_18__::func_373(71, -1))
						{
							return 1;
						}
						else if (__LIB_18__::func_373(72, -1))
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
						iVar3 = func_777(iParam0, 11, -1);
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
						iVar5 = func_777(iParam0, 8, -1);
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
							iVar7 = __LIB_25__::func_18(joaat("MP_F_Freemode_01"), 11, func_777(iParam0, 11, -1), 0);
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
						iVar8 = func_777(iParam0, 11, -1);
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
							iVar10 = __LIB_25__::func_18(joaat("MP_F_Freemode_01"), 11, func_777(iParam0, 11, -1), 0);
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
							iVar11 = __LIB_25__::func_18(joaat("MP_F_Freemode_01"), 11, func_777(iParam0, 11, -1), 0);
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
						iVar12 = func_777(iParam0, 8, -1);
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

int func_756(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x50D71
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
					iVar0 = func_756(iParam0, -99, __LIB_6__::func_807(iParam0, iParam1, 0), iParam3);
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
					iVar0 = func_756(iParam0, -99, __LIB_6__::func_807(iParam0, iParam1, 0), iParam3);
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

void func_760(int iParam0)//Position - 0x5227D
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
		if (!func_765(iParam0, &bVar14, iVar9, iVar10, iVar12) || PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
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
		if (!func_765(iParam0, &bVar14, iVar9, iVar10, iVar12))
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

int func_765(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x52C47
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
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAZ_MASK"), 0) && !__LIB_0__::func_709(iVar0, 14, func_777(iParam0, 14, 0), -1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_769(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x5562F
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (func_771(iParam0))
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
			__LIB_25__::func_74(MISC::GET_HASH_KEY("torsoDecal"), iParam0);
			if (iParam1 == 11)
			{
				if (((((!__LIB_25__::func_28(iVar0, iParam2, 13) && !__LIB_25__::func_28(iVar0, iParam2, 14)) && !__LIB_25__::func_28(iVar0, iParam2, 15)) && !__LIB_25__::func_28(iVar0, iParam2, 16)) && !__LIB_25__::func_28(iVar0, iParam2, 71)) && !__LIB_25__::func_28(iVar0, iParam2, 72))
				{
					__LIB_25__::func_74(MISC::GET_HASH_KEY("crewLogo"), iParam0);
				}
			}
			iVar2 = __LIB_25__::func_18(iVar0, iParam1, iParam2, iParam4);
			if (iVar2 != -1)
			{
				if (iParam3 == 1)
				{
					__LIB_18__::func_393(iParam0, iVar2, 0);
				}
				else
				{
					__LIB_18__::func_394(iVar2, 1, Global_78127);
				}
			}
		}
	}
}

int func_771(int iParam0)//Position - 0x557BE
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
				iVar1 = func_777(iParam0, 11, -1);
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
				iVar3 = func_777(iParam0, 11, -1);
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

int func_777(int iParam0, int iParam1, int iParam2)//Position - 0x55C3F
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
				if (func_674(iParam0, iParam1, iVar0))
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
				if (func_674(iParam0, iParam1, iVar1))
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

void func_790(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x58C9D
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
		Global_78130[2 /*14*/] = { __LIB_35__::func_588(iParam0, iParam1, iParam2, -1) };
		if (BitTest(Global_78130[2 /*14*/].f_6, 1) && BitTest(Global_78130[2 /*14*/].f_6, 6))
		{
			if (iParam1 == 12)
			{
				__LIB_7__::func_86(Global_2883588, 2, 1, 1, -1);
			}
			else if (iParam1 == 13)
			{
			}
			else if (iParam1 == 14)
			{
				__LIB_7__::func_86(Global_2883588, 2, 1, 1, -1);
			}
			else
			{
				__LIB_7__::func_86(Global_2883588, 2, 1, 1, -1);
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
							__LIB_7__::func_86(iVar2, 2, 1, 1, -1);
							if (iVar5 < Global_4538446)
							{
								Global_4538446[iVar5] = iVar2;
								Global_4538457[iVar5] = iVar4;
								iVar5++;
							}
						}
						else
						{
							func_790(iParam0, __LIB_0__::func_33(iVar4), uVar3, 0);
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
									func_790(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_6__::func_758(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 3), 1);
								}
								else
								{
									func_790(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_6__::func_758(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 4), 1);
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
				iVar7 = __LIB_1__::func_556(iVar6, Global_78127, 0);
				MISC::SET_BIT(&iVar7, Global_78130[2 /*14*/].f_1);
				__LIB_1__::func_597(iVar6, iVar7, Global_78127, 1, 0);
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
							func_790(iParam0, 14, iVar8, 0);
						}
						else if (iParam2 >= 75 && iParam2 <= 82)
						{
							iVar8 = (83 + Global_78130[2 /*14*/].f_4);
							func_790(iParam0, 14, iVar8, 0);
						}
					}
					else if (iParam1 == 8)
					{
						if (iParam2 >= 48 && iParam2 <= 63)
						{
							iVar8 = (64 + Global_78130[2 /*14*/].f_4);
							func_790(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 64 && iParam2 <= 79)
						{
							iVar8 = (48 + Global_78130[2 /*14*/].f_4);
							func_790(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 96 && iParam2 <= 111)
						{
							iVar8 = (112 + Global_78130[2 /*14*/].f_4);
							func_790(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 112 && iParam2 <= 127)
						{
							iVar8 = (96 + Global_78130[2 /*14*/].f_4);
							func_790(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 176 && iParam2 <= 191)
						{
							iVar8 = (160 + Global_78130[2 /*14*/].f_4);
							func_790(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 160 && iParam2 <= 175)
						{
							iVar8 = (176 + Global_78130[2 /*14*/].f_4);
							func_790(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 32 && iParam2 <= 47)
						{
							iVar8 = (0 + Global_78130[2 /*14*/].f_4);
							func_790(iParam0, 11, iVar8, 0);
						}
						else if (iParam2 >= 224 && iParam2 <= 239)
						{
							iVar8 = (16 + Global_78130[2 /*14*/].f_4);
							func_790(iParam0, 11, iVar8, 0);
						}
					}
					else if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar8 = (32 + Global_78130[2 /*14*/].f_4);
							func_790(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 16 && iParam2 <= 31)
						{
							iVar8 = (224 + Global_78130[2 /*14*/].f_4);
							func_790(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 220 && iParam2 <= 235)
						{
							switch (iParam2)
							{
								case 220:
									func_790(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_0"), 8, 3), 0);
									func_790(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_0"), 8, 3), 0);
									break;
								case 221:
									func_790(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_1"), 8, 3), 0);
									func_790(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_1"), 8, 3), 0);
									break;
								case 222:
									func_790(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_2"), 8, 3), 0);
									func_790(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_2"), 8, 3), 0);
									break;
								case 223:
									func_790(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_3"), 8, 3), 0);
									func_790(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_3"), 8, 3), 0);
									break;
								case 224:
									func_790(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_4"), 8, 3), 0);
									func_790(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_4"), 8, 3), 0);
									break;
								case 225:
									func_790(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_5"), 8, 3), 0);
									func_790(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_5"), 8, 3), 0);
									break;
								case 226:
									func_790(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_6"), 8, 3), 0);
									func_790(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_6"), 8, 3), 0);
									break;
								case 227:
									func_790(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_7"), 8, 3), 0);
									func_790(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_7"), 8, 3), 0);
									break;
								case 228:
									func_790(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_8"), 8, 3), 0);
									func_790(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_8"), 8, 3), 0);
									break;
								case 229:
									func_790(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_9"), 8, 3), 0);
									func_790(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_9"), 8, 3), 0);
									break;
								case 230:
									func_790(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_10"), 8, 3), 0);
									func_790(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_10"), 8, 3), 0);
									break;
								case 231:
									func_790(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_11"), 8, 3), 0);
									func_790(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_11"), 8, 3), 0);
									break;
								case 232:
									func_790(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_12"), 8, 3), 0);
									func_790(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_12"), 8, 3), 0);
									break;
								case 233:
									func_790(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_13"), 8, 3), 0);
									func_790(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_13"), 8, 3), 0);
									break;
								case 234:
									func_790(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_14"), 8, 3), 0);
									func_790(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_14"), 8, 3), 0);
									break;
								case 235:
									func_790(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_15"), 8, 3), 0);
									func_790(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_15"), 8, 3), 0);
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
									func_790(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_0"), 7, 3), 0);
									func_790(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_0"), 7, 3), 0);
									break;
								case 1:
									func_790(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_1"), 7, 3), 0);
									func_790(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_1"), 7, 3), 0);
									break;
								case 2:
									func_790(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_2"), 7, 3), 0);
									func_790(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_2"), 7, 3), 0);
									break;
								case 3:
									func_790(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_3"), 7, 3), 0);
									func_790(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_3"), 7, 3), 0);
									break;
								case 4:
									func_790(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_4"), 7, 3), 0);
									func_790(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_4"), 7, 3), 0);
									break;
								case 5:
									func_790(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_5"), 7, 3), 0);
									func_790(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_5"), 7, 3), 0);
									break;
								case 6:
									func_790(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_6"), 7, 3), 0);
									func_790(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_6"), 7, 3), 0);
									break;
								case 7:
									func_790(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_7"), 7, 3), 0);
									func_790(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_7"), 7, 3), 0);
									break;
								case 8:
									func_790(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_8"), 7, 3), 0);
									func_790(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_8"), 7, 3), 0);
									break;
								case 9:
									func_790(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_9"), 7, 3), 0);
									func_790(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_9"), 7, 3), 0);
									break;
								case 10:
									func_790(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_10"), 7, 3), 0);
									func_790(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_10"), 7, 3), 0);
									break;
								case 11:
									func_790(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_11"), 7, 3), 0);
									func_790(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_11"), 7, 3), 0);
									break;
								case 12:
									func_790(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_12"), 7, 3), 0);
									func_790(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_12"), 7, 3), 0);
									break;
								case 13:
									func_790(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_13"), 7, 3), 0);
									func_790(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_13"), 7, 3), 0);
									break;
								case 14:
									func_790(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_14"), 7, 3), 0);
									func_790(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_14"), 7, 3), 0);
									break;
								case 15:
									func_790(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_15"), 7, 3), 0);
									func_790(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_15"), 7, 3), 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_78130[2 /*14*/].f_4)
							{
								case 0:
									func_790(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_0"), 7, 3), 0);
									func_790(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_0"), 7, 3), 0);
									break;
								case 1:
									func_790(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_1"), 7, 3), 0);
									func_790(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_1"), 7, 3), 0);
									break;
								case 2:
									func_790(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_2"), 7, 3), 0);
									func_790(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_2"), 7, 3), 0);
									break;
								case 3:
									func_790(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_3"), 7, 3), 0);
									func_790(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_3"), 7, 3), 0);
									break;
								case 4:
									func_790(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_4"), 7, 3), 0);
									func_790(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_4"), 7, 3), 0);
									break;
								case 5:
									func_790(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_5"), 7, 3), 0);
									func_790(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_5"), 7, 3), 0);
									break;
								case 6:
									func_790(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_6"), 7, 3), 0);
									func_790(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_6"), 7, 3), 0);
									break;
								case 7:
									func_790(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_7"), 7, 3), 0);
									func_790(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_7"), 7, 3), 0);
									break;
								case 8:
									func_790(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_8"), 7, 3), 0);
									func_790(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_8"), 7, 3), 0);
									break;
								case 9:
									func_790(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_9"), 7, 3), 0);
									func_790(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_9"), 7, 3), 0);
									break;
								case 10:
									func_790(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_10"), 7, 3), 0);
									func_790(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_10"), 7, 3), 0);
									break;
								case 11:
									func_790(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_11"), 7, 3), 0);
									func_790(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_11"), 7, 3), 0);
									break;
								case 12:
									func_790(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_12"), 7, 3), 0);
									func_790(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_12"), 7, 3), 0);
									break;
								case 13:
									func_790(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_13"), 7, 3), 0);
									func_790(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_13"), 7, 3), 0);
									break;
								case 14:
									func_790(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_14"), 7, 3), 0);
									func_790(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_14"), 7, 3), 0);
									break;
								case 15:
									func_790(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_15"), 7, 3), 0);
									func_790(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_15"), 7, 3), 0);
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
							func_790(iParam0, 8, iVar8, 0);
						}
					}
				}
				Global_78130[2 /*14*/] = { __LIB_35__::func_588(iParam0, iParam1, iParam2, -1) };
				if (iParam1 == 11)
				{
					iVar9 = __LIB_6__::func_811(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_790(iParam0, 8, iVar9, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203)
					{
						switch (iParam2)
						{
							case 199:
								func_790(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_0"), 7, 4), 0);
								break;
							case 200:
								func_790(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_1"), 7, 4), 0);
								break;
							case 201:
								func_790(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_2"), 7, 4), 0);
								break;
							}
					}
				}
				else if (iParam1 == 8)
				{
					iVar9 = __LIB_6__::func_807(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_790(iParam0, 11, iVar9, 0);
					}
				}
			}
		}
	}
}

void func_847(bool bParam0)//Position - 0x7CD14
{
	if (func_367())
	{
		if (bParam0)
		{
			HUD::SET_FAKE_MINIMAP_MAX_ALTIMETER_HEIGHT((Local_133.f_264 + func_848()), false, 21);
		}
		else
		{
			HUD::SET_FAKE_MINIMAP_MAX_ALTIMETER_HEIGHT(0f, false, 21);
		}
	}
}

float func_848()//Position - 0x7CD44
{
	switch (func_330())
	{
		case 1:
			return Global_262145.f_18601 /* Tunable: 385578208 */;
		case 2:
			return Global_262145.f_18602 /* Tunable: 1890413608 */;
		case 3:
			return Global_262145.f_18603 /* Tunable: 534333219 */;
		default:
	}
	return Global_262145.f_18603 /* Tunable: 534333219 */;
}

void func_849()//Position - 0x7CD8C
{
	if (!func_855(1))
	{
		if (__LIB_0__::func_109())
		{
			if (func_855(0))
			{
				if (iLocal_131 == 0)
				{
					if (func_239() == 7)
					{
						func_851(func_853(1));
					}
					else
					{
						func_851(func_853(0));
					}
				}
				AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", false);
				AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", false);
			}
		}
		func_850(1);
	}
}

void func_850(int iParam0)//Position - 0x7CDE6
{
	int iVar0;
	int iVar1;
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(uLocal_152[iVar0]), iVar1);
}

void func_851(int iParam0)//Position - 0x7CE09
{
	if (!func_855(iParam0))
	{
		AUDIO::TRIGGER_MUSIC_EVENT(func_852(iParam0));
		func_850(iParam0);
	}
}

char* func_852(int iParam0)//Position - 0x7CE2C
{
	switch (iParam0)
	{
		case 3:
			return "BIKER_MP_MUSIC_STOP";
		case 4:
			return "BIKER_MP_MUSIC_FAIL";
		case 5:
			return "WEED_SELL_PROVEN_START";
		case 6:
			return "WEED_SELL_PROVEN_WANTED";
		case 7:
			return "WEED_SELL_PROVEN_DELIVERING";
		case 2:
			return "WEED_SELL_TRASHMASTER_START";
		case 8:
			return "METH_SELL_TACO_VAN_START";
		case 9:
			return "CRACK_SELL_AIRDROP_SEA_START";
		case 10:
			return "CRACK_SELL_RUBBLE_START";
		case 11:
			return "FAKEID_SELL_FRIENDS_IN_NEED_START";
		case 12:
			return "FAKEID_SELL_BORDER_PATROL_START";
		case 13:
			return "FAKEID_SELL_HELI_DROP_START";
		case 14:
			return "COUNTERFEIT_CASH_SELL_POSTMAN_START";
		case 15:
			return "CRACK_SELL_STING_OP_START";
		case 16:
			return "CRACK_SELL_STING_OP_WANTED";
		case 17:
			return "CRACK_SELL_STING_OP_DELIVERING";
		case 18:
			return "BIKER_SELL_CONVOY_START";
		case 19:
			return "METH_SELL_TACO_VAN_DELIVERED";
		case 20:
			return "METH_SELL_TACO_VAN_DELIVERING";
		case 21:
			return "BIKER_BAG_RACE_START";
		case 22:
			return "BIKER_SELL_CLUB_RUN_START";
		case 23:
			return "BIKER_BAG_DROP_START";
		case 24:
			return "BIKER_SELL_CLUB_RUN_WANTED";
		case 25:
			return "BIKER_SELL_CLUB_RUN_COPS_LOST";
		default:
	}
	return "";
}

int func_853(bool bParam0)//Position - 0x7CF75
{
	if (bParam0)
	{
		switch (func_16())
		{
			case 3:
			case 7:
			case 1:
			case 8:
			case 4:
			case 9:
			case 5:
			case 2:
			case 6:
			case 0:
			case 11:
			case 12:
			case 10:
				return 3;
			default:
		}
	}
	else
	{
		switch (func_16())
		{
			case 3:
			case 7:
			case 1:
			case 8:
			case 4:
			case 9:
			case 5:
			case 2:
			case 0:
			case 6:
			case 11:
			case 12:
			case 10:
				return 4;
			}
		default:
	}
	return 3;
}

bool func_855(int iParam0)//Position - 0x7D045
{
	int iVar0;
	int iVar1;
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return BitTest(uLocal_152[iVar0], iVar1);
}

void func_856(int iParam0)//Position - 0x7D065
{
	int iVar0;
	if (__LIB_2__::func_141(iParam0))
	{
		if (!func_1909(7))
		{
			if (func_239() == 7)
			{
				if (__LIB_4__::func_728())
				{
					if (__LIB_4__::func_660(iParam0))
					{
						iVar0 = __LIB_5__::func_133(iParam0);
						Global_2815059.f_5195.f_369[iVar0] = NETWORK::GET_CLOUD_TIME_AS_INT();
						__LIB_1__::func_597(__LIB_24__::func_832(iVar0), Global_2815059.f_5195.f_369[iVar0], -1, 1, 0);
						func_1881(7);
					}
				}
			}
		}
	}
}

void func_860()//Position - 0x7D1A2
{
	bool bVar0;
	struct<14> Var1;
	int iVar2;
	struct<2> Var3;
	if (!func_1909(1))
	{
		if (__LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (func_239() != 0)
			{
				bVar0 = PLAYER::PLAYER_ID();
				if (func_239() == 7)
				{
					bLocal_187 = true;
					if (__LIB_4__::func_728())
					{
						Local_134.f_7 = func_593();
						if (func_366())
						{
							if (((Local_183.f_893[0] + Local_183.f_893[1]) + Local_183.f_893[2]) > 0)
							{
								Local_134.f_6 = 1;
								Local_134.f_0 = ((Local_183.f_893[0] + Local_183.f_893[1]) + Local_183.f_893[2]);
							}
						}
						if (func_1161(__LIB_0__::func_5()) >= 3 && !__LIB_19__::func_819(PLAYER::PLAYER_ID(), Local_183.f_0, 1))
						{
							__LIB_13__::func_829(2);
						}
					}
				}
				Local_134.f_12 = func_16();
				Local_134.f_9 = Local_183.f_968;
				Local_134.f_10 = func_1158();
				Local_134.f_11 = func_1157();
				if (func_1156() != -1)
				{
					Local_134.f_8 = func_1156();
					Local_134.f_15 = func_1155();
				}
				if (func_44())
				{
					if (Local_183.f_154.f_2[0] == NETWORK::PARTICIPANT_ID())
					{
						Local_134.f_6 = 1;
						Local_134.f_0 = (Global_262145.f_19113 /* Tunable: 706040100 */ * __LIB_19__::func_834() + 1);
					}
				}
				func_985(190, bLocal_187, &Local_134, 0);
				if (bLocal_187)
				{
					__LIB_28__::func_306(1, bVar0);
					Var1.f_2 = -1423230718;
					Var1.f_10 = bVar0;
					Var1.f_3 = Local_183.f_1;
					if (__LIB_4__::func_728())
					{
						__LIB_1__::func_226(Var1, __LIB_18__::func_554(0, 1));
					}
					if (__LIB_4__::func_728())
					{
						func_979(Local_183.f_0, Local_183.f_2);
						__LIB_20__::func_401(Local_183.f_0, Global_2727753);
					}
				}
				else
				{
					__LIB_28__::func_696();
					__LIB_28__::func_306(1, __LIB_0__::func_160());
					if (__LIB_4__::func_728() && Local_134.f_10 > 0)
					{
						__LIB_33__::func_46(Local_183.f_0, 0);
					}
				}
				func_2170(bLocal_187, 0);
				func_1881(1);
			}
		}
	}
	else
	{
		if (!func_29(0))
		{
			if (__LIB_4__::func_728())
			{
				if (!func_63(NETWORK::PARTICIPANT_ID(), 13))
				{
					if (bLocal_187 || func_956() > 0)
					{
						iVar2 = 3;
					}
					else if (func_239() == 4)
					{
						iVar2 = 2;
					}
					else
					{
						iVar2 = 2;
					}
					Var3 = { __LIB_10__::func_933() };
					func_1968(Var3.f_0, __LIB_4__::func_473(PLAYER::PLAYER_ID(), Var3.f_0), Global_2727753, 1, iVar2, &iLocal_182);
					if (iLocal_182 == 2)
					{
						Global_2815059.f_5195.f_386 = 0;
						func_531(13);
						if (iVar2 == 3)
						{
							__LIB_2__::func_8(func_955());
						}
					}
					if (iLocal_182 == 3)
					{
						Global_2815059.f_5195.f_386 = 0;
						func_531(13);
					}
				}
			}
			else if (__LIB_0__::func_582() == __LIB_0__::func_160())
			{
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					func_28(0);
				}
			}
		}
		if (Global_2703735.f_4.f_10)
		{
			if ((!__LIB_25__::func_938() && !__LIB_0__::func_114()) && !__LIB_36__::func_855(190))
			{
				if (!func_1909(26))
				{
					switch (func_239())
					{
						case 2:
							HUD::CLEAR_HELP(true);
							break;
						case 3:
							HUD::CLEAR_HELP(true);
							func_895(2);
							break;
						case 1:
							HUD::CLEAR_HELP(true);
							func_895(2);
							break;
						case 4:
						case 5:
							HUD::CLEAR_HELP(true);
							func_895(2);
							break;
						case 6:
							HUD::CLEAR_HELP(true);
							func_895(2);
							break;
						case 7:
							HUD::CLEAR_HELP(true);
							func_895(1);
							break;
					}
					func_1881(26);
				}
			}
		}
	}
	if (__LIB_41__::func_244(&uLocal_142, 0, 0) && func_29(0))
	{
		func_531(0);
	}
}

void func_895(int iParam0)//Position - 0x7E22A
{
	char* sVar0;
	char* sVar1;
	int iVar2;
	if ((__LIB_28__::func_416() || iParam0 == 2) || iParam0 == 1)
	{
		if (!func_951(iParam0))
		{
			switch (iParam0)
			{
				case 0:
					iVar2 = 86;
					sVar0 = "SB_SELL_BM_01" /* GXT: SELL PRODUCT */;
					sVar1 = "SB_SELL_BMOPN" /* GXT: Deliver the product to the buyers */;
					func_950(iVar2, sVar0, sVar1, 1, -1, 2, 1, 0);
					func_949(iParam0);
					break;
				case 1:
					sVar0 = "EXEC_SOLD" /* GXT: SOLD */;
					iVar2 = 87;
					if (func_948() || func_947())
					{
						sVar1 = "SB_SELL_BM_03" /* GXT: You successfully delivered the ~a~ */;
						func_945(iVar2, func_946(), sVar1, sVar0, -1, -1, -1082130432, 0, 1, 2, 0);
					}
					else
					{
						sVar1 = func_944();
						func_896(iVar2, func_1158(), func_1157(), sVar1, 1, -1, 2, sVar0, 0);
					}
					func_949(iParam0);
					break;
				case 2:
					sVar0 = "BIKER_UNSOLD" /* GXT: UNSOLD */;
					iVar2 = 89;
					sVar1 = "SB_SELL_BM_04" /* GXT: You failed to deliver the ~a~ */;
					func_945(iVar2, func_946(), sVar1, sVar0, -1, -1, -1082130432, 0, 1, 2, 0);
					func_949(iParam0);
					break;
				}
			}
	}
}

int func_896(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, char* sParam7, char* sParam8)//Position - 0x7E330
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
	__LIB_0__::func_975(iParam0, &Var0, iParam1, sParam3, sParam7);
	Var0.f_4 = iParam2;
	Var0.f_71 = iParam4;
	Var0.f_6 = iParam5;
	Var0.f_72 = iParam6;
	StringCopy(&(Var0.f_57), sParam8, 16);
	return func_897(&Var0);
}

int func_897(var uParam0)//Position - 0x7E3A9
{
	int iVar0;
	if (uParam0->f_1 == 1)
	{
		if (Global_2703735.f_2722)
		{
			return 0;
		}
	}
	func_913(uParam0, uParam0->f_17);
	__LIB_6__::func_928(uParam0);
	if (__LIB_0__::func_175())
	{
		__LIB_6__::func_928(uParam0);
	}
	if (__LIB_0__::func_968(uParam0->f_1))
	{
		__LIB_24__::func_964();
		if (Global_2703735.f_2400[0 /*80*/].f_2 == 0)
		{
			Global_2703735.f_2400[0 /*80*/] = { *uParam0 };
			if (__LIB_0__::func_517(uParam0->f_69, 8192))
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
				__LIB_24__::func_964();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				__LIB_6__::func_896(&(Global_2703735.f_2400[iVar0 /*80*/].f_69), 2);
				Global_2703735.f_2400[iVar0 /*80*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !__LIB_0__::func_517(uParam0->f_69, 128))
			{
				if (__LIB_0__::func_966(Global_2703735.f_2400[iVar0 /*80*/].f_1))
				{
					Global_2703735.f_2400[iVar0 /*80*/].f_2 = 5;
					__LIB_6__::func_896(&(Global_2703735.f_2400[iVar0 /*80*/].f_69), 1);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_913(var uParam0, int iParam1)//Position - 0x7EA1C
{
	if (__LIB_0__::func_970(uParam0->f_1))
	{
		uParam0->f_73 = 1;
	}
	if (iParam1 == __LIB_0__::func_160() || !__LIB_1__::func_264(iParam1, 0, 1))
	{
		return;
	}
	if (__LIB_0__::func_966(uParam0->f_1))
	{
		if (uParam0->f_71 == 1)
		{
			uParam0->f_73 = func_914(iParam1, -2, 0, 0, 0);
		}
	}
}

int func_914(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x7EA73
{
	int iVar0;
	int iVar1;
	if (__LIB_7__::func_211(iParam0) && !bParam4)
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
		iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4718592.f_111249[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((__LIB_7__::func_211(PLAYER::PLAYER_ID()) || (__LIB_0__::func_80() && __LIB_0__::func_728())) && !BitTest(Global_2815059.f_4660, 31)) && !bParam4)
	{
		iVar1 = __LIB_0__::func_727();
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (PED::IS_PED_A_PLAYER(iVar1))
			{
				if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) != -1)
				{
					if (__LIB_1__::func_264(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
						{
							if (Global_4718592.f_111249[iParam1] != -1)
							{
								return __LIB_26__::func_802(iParam1, iParam0, 0);
							}
							else
							{
								return __LIB_32__::func_907(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return __LIB_32__::func_907(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
			{
				if (Global_4718592.f_111249[iParam1] != -1)
				{
					return __LIB_26__::func_802(iParam1, iParam0, 0);
				}
				else
				{
					return __LIB_19__::func_520(0, -1, 0);
				}
			}
			else
			{
				return __LIB_19__::func_520(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
	{
		if (Global_4718592.f_111249[iParam1] != -1)
		{
			return __LIB_26__::func_802(iParam1, iParam0, 0);
		}
		else
		{
			return __LIB_32__::func_907(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
		}
	}
	return __LIB_32__::func_907(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}

char* func_944()//Position - 0x7F723
{
	switch (Local_183.f_1)
	{
		case 0:
			return "SB_SELL_BM_05a" /* GXT: ~1~ of ~1~ Forged Documents ~s~delivered */;
		case 1:
			return "SB_SELL_BM_05b" /* GXT: ~1~ of ~1~ Weed ~s~delivered */;
		case 4:
			return "SB_SELL_BM_05c" /* GXT: ~1~ of ~1~ Cocaine ~s~delivered */;
		case 3:
			return "SB_SELL_BM_05d" /* GXT: ~1~ of ~1~ Meth ~s~delivered */;
		case 2:
			return "SB_SELL_BM_05e" /* GXT: ~1~ of ~1~ Counterfeit Money ~s~delivered */;
		default:
	}
	return "SB_SELL_BM_05f" /* GXT: ~1~ of ~1~ Product ~s~delivered */;
}

int func_945(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10)//Position - 0x7F77A
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
	__LIB_0__::func_975(iParam0, &Var0, iParam5, sParam2, sParam3);
	StringCopy(&(Var0.f_57), sParam1, 16);
	StringCopy(&(Var0.f_61), sParam7, 16);
	Var0.f_6 = iParam4;
	Var0.f_7 = iParam6;
	Var0.f_71 = iParam8;
	Var0.f_72 = iParam9;
	if (iParam10 != 0)
	{
		__LIB_6__::func_896(&(Var0.f_69), iParam10);
	}
	return func_897(&Var0);
}

char* func_946()//Position - 0x7F80B
{
	switch (func_16())
	{
		case 6:
			return "SBCONTRA_COKE" /* GXT: Cocaine */;
		case 4:
			return "SBCONTRA_IDS" /* GXT: Forged Documents */;
		case 7:
			return "SBCONTRA_WEED" /* GXT: Weed */;
		case 0:
		case 9:
		case 2:
		case 1:
		case 3:
		case 5:
		case 8:
		case 12:
		case 11:
		case 10:
			switch (Local_183.f_1)
			{
				case 4:
					return "SBCONTRA_COKE" /* GXT: Cocaine */;
				case 0:
					return "SBCONTRA_IDS" /* GXT: Forged Documents */;
				case 2:
					return "SBCONTRA_MONEY" /* GXT: Counterfeit Money */;
				case 3:
					return "SBCONTRA_METH" /* GXT: Meth */;
				case 1:
					return "SBCONTRA_WEED" /* GXT: Weed */;
				default:
			}
			break;
	}
	return "SBCONTRA_DEF" /* GXT: Product */;
}

int func_947()//Position - 0x7F8D1
{
	if (func_18())
	{
		return 1;
	}
	return 0;
}

bool func_948()//Position - 0x7F8E5
{
	if (func_25())
	{
		if (Local_183.f_167 > 0)
		{
			return 0;
		}
	}
	return func_1158() == func_1157();
}

void func_949(int iParam0)//Position - 0x7F90A
{
	MISC::SET_BIT(&(Local_133.f_21), iParam0);
}

int func_950(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x7F91C
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
	__LIB_0__::func_975(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam5;
	Var0.f_16 = iParam6;
	if (iParam7 != 0)
	{
		__LIB_6__::func_896(&(Var0.f_69), iParam7);
	}
	return func_897(&Var0);
}

bool func_951(int iParam0)//Position - 0x7F99C
{
	return BitTest(Local_133.f_21, iParam0);
}

int func_955()//Position - 0x7FA51
{
	switch (Local_183.f_1)
	{
		case 4:
			return 147;
		case 1:
			return 148;
		case 2:
			return 149;
		case 3:
			return 150;
		case 0:
			return 151;
		default:
	}
	return -1;
}

int func_956()//Position - 0x7FA9B
{
	switch (func_16())
	{
		case 0:
			return Local_183.f_978;
		default:
	}
	if (func_253())
	{
		return func_957();
	}
	return func_228();
}

int func_957()//Position - 0x7FACD
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = func_228();
	if (iVar0 == func_73(-1))
	{
		return iVar0;
	}
	if (iVar0 > 0)
	{
		iVar1 = 0;
		while (iVar1 < iVar0)
		{
			if (!__LIB_0__::func_649(&(Local_133.f_90[iVar1 /*2*/])))
			{
				__LIB_0__::func_580(&(Local_133.f_90[iVar1 /*2*/]), 0, 0);
			}
			else if (__LIB_2__::func_47(&(Local_133.f_90[iVar1 /*2*/]), Global_262145.f_20332 /* Tunable: -1914271177 */, 0))
			{
				iVar2++;
			}
			iVar1++;
		}
	}
	return iVar2;
}

void func_979(int iParam0, int iParam1)//Position - 0x80283
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar1 = __LIB_4__::func_816(iParam0);
	if (__LIB_24__::func_833(iParam0))
	{
		if (iParam1 == 0)
		{
			iVar0 = __LIB_9__::func_544(iVar1);
		}
		else
		{
			iVar0 = __LIB_9__::func_542(iVar1);
		}
	}
	else if (iParam1 == 0)
	{
		iVar0 = __LIB_9__::func_542(iVar1);
	}
	else
	{
		iVar0 = __LIB_9__::func_544(iVar1);
	}
	iVar2 = __LIB_1__::func_556(iVar0, -1, 0) + 1;
	__LIB_1__::func_597(iVar0, iVar2, -1, 1, 0);
	__LIB_33__::func_46(iParam0, 0);
}

void func_985(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x80486
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	func_1153(iParam0, &fVar2, &fVar3);
	if (iParam2->f_6 == 0)
	{
		iVar1 = (iVar1 + iParam2->f_1);
		iVar0 = (iVar0 + *iParam2);
	}
	if (bParam1)
	{
		iVar1 = (iVar1 + __LIB_34__::func_470(iParam0, iParam2->f_13, bParam3));
		if (iParam0 == 233)
		{
			iVar6 = (iParam2->f_10 / iParam2->f_11) * 100;
			iVar1 = ((iVar1 / 100) * iVar6);
		}
		if ((iParam0 == 158 && iParam2->f_21 == 1) && !iParam2->f_22)
		{
			iVar1 = 200;
		}
		iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(iParam2->f_4)));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * fVar3));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * iParam2->f_3));
		iVar0 = (iVar0 + __LIB_10__::func_941(iParam0, bParam3));
		iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(iParam2->f_4)));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * fVar2));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * iParam2->f_2));
	}
	else if ((iParam0 == 185 || iParam0 == 220) || iParam0 == 221)
	{
		iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(iParam2->f_4)));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * fVar3));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * iParam2->f_3));
		iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(iParam2->f_4)));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * fVar2));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * iParam2->f_2));
	}
	if (iParam2->f_18 > -1)
	{
		iVar0 = (iVar0 + iParam2->f_18);
	}
	if (iParam2->f_19 > -1)
	{
		iVar1 = (iVar1 + iParam2->f_19);
	}
	if (__LIB_36__::func_992(iParam0))
	{
		if (bParam1)
		{
			if (Global_262145.f_24496 /* Tunable: -76964080 */)
			{
				if (__LIB_10__::func_940(PLAYER::PLAYER_ID()) <= 0)
				{
					__LIB_21__::func_78();
				}
			}
			else if (__LIB_10__::func_940(PLAYER::PLAYER_ID()) > 0)
			{
				__LIB_21__::func_77();
			}
			else
			{
				__LIB_21__::func_78();
			}
		}
		else
		{
			__LIB_19__::func_903();
		}
	}
	func_1132(iParam0, bParam1, iParam2, &iVar0, &iVar4);
	func_1130(iParam0, iParam2, &iVar0, &iVar5);
	func_1123(iParam0, iParam2, &iVar0, &iVar5);
	func_1120(iParam0, iParam2, &iVar0, &iVar5, &iVar7);
	func_1113(iParam0, iParam2, &iVar0, &iVar5);
	if (iParam0 == 168)
	{
		Global_2815059.f_5195.f_387 = iVar4;
	}
	else
	{
		Global_2815059.f_5195.f_387 = iVar5;
	}
	iVar8 = __LIB_1__::func_301();
	if (iVar8 != __LIB_0__::func_160() && iParam0 != 148)
	{
		if (__LIB_13__::func_258(PLAYER::PLAYER_ID(), 0))
		{
			if (!func_615(PLAYER::PLAYER_ID(), iVar8, 1))
			{
				func_1103(&iVar0, 1);
			}
		}
	}
	__LIB_36__::func_809(iParam0, &iVar9, &iVar10);
	iVar1 = (iVar1 + iVar9);
	iVar0 = (iVar0 + iVar10);
	if (iVar1 > 0)
	{
		Global_1943929.f_10 = iVar1;
		__LIB_1__::func_444();
		func_1052(0, PLAYER::PLAYER_PED_ID(), "", joaat("XPTYPE_SKILL"), joaat("XPCATEGORY_COLLECT_CHECKPOINT"), iVar1, 1, -1, 0, 0, 0);
	}
	if (iVar0 > 0)
	{
		Global_1943929.f_9 = iVar0;
		func_1025(iParam0, iVar0, iVar7, iVar4, iVar5, iParam2);
		__LIB_26__::func_304(iParam0, iVar0);
		if (__LIB_10__::func_932(iParam0))
		{
			if (__LIB_10__::func_931(iParam0) > -1)
			{
				__LIB_1__::func_445(__LIB_10__::func_931(iParam0), iVar0);
			}
		}
		Global_2727753 = iVar0;
		__LIB_0__::func_495(&Global_2725869, 0, 0);
	}
	if (__LIB_0__::func_286(PLAYER::PLAYER_ID()) || __LIB_0__::func_431(PLAYER::PLAYER_ID()))
	{
		__LIB_34__::func_235(iParam0);
	}
	if ((__LIB_10__::func_929(iParam0) || iParam0 == 293) || iParam0 == 291)
	{
		Global_1943947.f_13 = iVar0;
		Global_1943947.f_14 = iVar1;
	}
	if (__LIB_9__::func_286(iParam0))
	{
		Global_1944003.f_13 = iVar0;
		Global_1944003.f_14 = iVar1;
	}
	if (((__LIB_3__::func_524(iParam0) || iParam0 == 297) || iParam0 == 296) || iParam0 == 298)
	{
		Global_1944066.f_12 = iVar0;
		Global_1944066.f_13 = iVar1;
	}
	if (__LIB_1__::func_204(iParam0))
	{
		Global_1944113.f_12 = iVar0;
		Global_1944113.f_13 = iVar1;
	}
	if (__LIB_0__::func_787(iParam0))
	{
		Global_1944167.f_12 = iVar0;
		Global_1944167.f_13 = iVar1;
	}
	if (__LIB_2__::func_859(iParam0))
	{
		if (__LIB_10__::func_909(iParam0))
		{
			Global_1944249.f_12 = iVar0;
			Global_1944249.f_13 = iVar1;
		}
		else if (((__LIB_29__::func_159(iParam0) || iParam0 == 299) || iParam0 == 300) || iParam0 == 301)
		{
			Global_1944303.f_12 = iVar0;
			Global_1944303.f_13 = iVar1;
		}
	}
	if (__LIB_9__::func_415(iParam0))
	{
		Global_1944390.f_12 = iVar0;
		Global_1944390.f_13 = iVar1;
	}
	if (__LIB_2__::func_965(iParam0))
	{
		Global_1944465.f_16 = iVar0;
		Global_1944465.f_17 = iVar1;
	}
	if (__LIB_9__::func_29(iParam0))
	{
		Global_1944552.f_16 = iVar0;
		Global_1944552.f_17 = iVar1;
	}
	if (__LIB_2__::func_473(iParam0) || __LIB_10__::func_894(iParam0))
	{
		Global_1944685.f_15 = iVar0;
		Global_1944685.f_16 = iVar1;
	}
	__LIB_41__::func_698(bParam1, iParam0);
}

void func_1025(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5)//Position - 0x8C5D7
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	struct<2> Var9;
	char* sVar10;
	bVar6 = __LIB_0__::func_582();
	if (bVar6 != __LIB_0__::func_160())
	{
		__LIB_24__::func_786(bVar6, &iVar0, &iVar1);
	}
	bVar7 = !__LIB_19__::func_760(1);
	bVar8 = __LIB_19__::func_760(0);
	Var9.f_1 = -1;
	switch (iParam0)
	{
		case 168:
			if (!__LIB_0__::func_112())
			{
				MONEY::NETWORK_EARN_FROM_CONTRABAND(iParam1, iParam3);
			}
			if (bVar8)
			{
				bVar5 = true;
			}
			break;
		case 190:
			if (__LIB_4__::func_728())
			{
				if (!__LIB_0__::func_112())
				{
					Var9 = { __LIB_10__::func_933() };
					MONEY::NETWORK_EARN_FROM_BUSINESS_PRODUCT(iParam1, MISC::GET_HASH_KEY(__LIB_9__::func_389(Var9.f_0)), __LIB_1__::func_347(Var9.f_0), iParam4);
				}
			}
			else if (__LIB_0__::func_112())
			{
				__LIB_35__::func_933(joaat("SERVICE_EARN_BOSS_AGENCY"), iParam1, &iVar4, 0, 1, 0);
				Global_4534105[iVar4 /*85*/].f_6 = iVar0;
				Global_4534105[iVar4 /*85*/].f_7 = iVar1;
				Global_4534105[iVar4 /*85*/].f_8 = bVar7;
			}
			else
			{
				MONEY::NETWORK_EARN_FROM_CONTRABAND(iParam1, iParam4);
			}
			if (bVar8)
			{
				bVar5 = true;
			}
			break;
		case 226:
			if (__LIB_1__::func_145())
			{
				if (!__LIB_0__::func_112())
				{
					MONEY::NETWORK_EARN_FROM_BUSINESS_PRODUCT(iParam1, MISC::GET_HASH_KEY(__LIB_9__::func_389(__LIB_1__::func_292(PLAYER::PLAYER_ID()))), 5, iParam4);
				}
			}
			else if (__LIB_0__::func_112())
			{
				__LIB_35__::func_933(joaat("SERVICE_EARN_BOSS_AGENCY"), iParam1, &iVar4, 0, 1, 0);
				Global_4534105[iVar4 /*85*/].f_6 = iVar0;
				Global_4534105[iVar4 /*85*/].f_7 = iVar1;
				Global_4534105[iVar4 /*85*/].f_8 = bVar7;
			}
			else
			{
				MONEY::NETWORK_EARN_FROM_CONTRABAND(iParam1, iParam4);
			}
			if (bVar8)
			{
				bVar5 = true;
			}
			break;
		case 230:
			if (__LIB_1__::func_145())
			{
				if (!__LIB_0__::func_112())
				{
					iVar2 = __LIB_26__::func_334(uParam5->f_16, iParam4);
					iVar3 = iParam1;
					if (iVar2 > 0)
					{
						iVar3 = (iVar3 - iVar2);
					}
					if (iParam2 > 0)
					{
						iVar3 = (iVar3 - iParam2);
					}
					MONEY::NETWORK_EARN_FROM_SMUGGLER_WORK(iVar3, iParam4, iParam2, iVar2, uParam5->f_16);
				}
			}
			else
			{
				if (__LIB_0__::func_112())
				{
					__LIB_35__::func_933(joaat("SERVICE_EARN_SMUGGLER_AGENCY"), iParam1, &iVar4, 0, 1, 0);
					Global_4534105[iVar4 /*85*/].f_6 = iVar0;
					Global_4534105[iVar4 /*85*/].f_7 = iVar1;
					Global_4534105[iVar4 /*85*/].f_8 = bVar7;
				}
				else
				{
					MONEY::NETWORK_EARN_SMUGGLER_AGENCY(iVar0, iVar1, iParam1, bVar7);
				}
				if (bVar8)
				{
					bVar5 = true;
				}
			}
			break;
		case 233:
			if (__LIB_0__::func_112())
			{
				__LIB_35__::func_933(joaat("SERVICE_EARN_GANGOPS_PREP_PARTICIPATION"), iParam1, &iVar4, 0, 1, 0);
				Global_4534105[iVar4 /*85*/].f_6 = iVar0;
				Global_4534105[iVar4 /*85*/].f_7 = iVar1;
				Global_4534105[iVar4 /*85*/].f_8 = bVar7;
			}
			else
			{
				MONEY::NETWORK_EARN_GANGOPS_PREP_PARTICIPATION(iParam1);
			}
			break;
		case 237:
			if (__LIB_1__::func_145())
			{
				if (!__LIB_0__::func_112())
				{
					MONEY::NETWORK_EARN_FROM_BUSINESS_HUB_SELL(iParam1, uParam5->f_20, iParam4);
				}
			}
			else
			{
				if (__LIB_0__::func_112())
				{
					__LIB_35__::func_933(joaat("SERVICE_EARN_BOSS_AGENCY"), iParam1, &iVar4, 0, 1, 0);
					Global_4534105[iVar4 /*85*/].f_6 = iVar0;
					Global_4534105[iVar4 /*85*/].f_7 = iVar1;
					Global_4534105[iVar4 /*85*/].f_8 = bVar7;
				}
				else
				{
					MONEY::NETWORK_EARN_FROM_CONTRABAND(iParam1, iParam4);
				}
				if (bVar8)
				{
					bVar5 = true;
				}
			}
			break;
		case 250:
			if (__LIB_0__::func_112())
			{
				__LIB_35__::func_933(joaat("SERVICE_EARN_FROM_CLUB_MANAGEMENT_PARTICIPATION"), iParam1, &iVar4, 0, 1, 0);
				Global_4534105[iVar4 /*85*/].f_6 = iVar0;
				Global_4534105[iVar4 /*85*/].f_7 = iVar1;
				Global_4534105[iVar4 /*85*/].f_8 = bVar7;
				Global_4534105[iVar4 /*85*/] = 1781827765;
			}
			else
			{
				MONEY::NETWORK_EARN_FROM_CLUB_MANAGEMENT_PARTICIPATION(iParam1, 1781827765);
			}
			break;
		case 249:
			if (__LIB_0__::func_112())
			{
				__LIB_35__::func_933(joaat("SERVICE_EARN_FROM_FMBB_PHONECALL_MISSION"), iParam1, &iVar4, 0, 1, 0);
				Global_4534105[iVar4 /*85*/].f_6 = iVar0;
				Global_4534105[iVar4 /*85*/].f_7 = iVar1;
				Global_4534105[iVar4 /*85*/].f_8 = bVar7;
			}
			else
			{
				MONEY::NETWORK_EARN_FROM_FMBB_PHONECALL_MISSION(iParam1);
			}
			break;
		case 242:
		case 244:
		case 248:
		case 241:
		case 239:
		case 240:
			if (__LIB_0__::func_112())
			{
				__LIB_35__::func_933(joaat("SERVICE_EARN_FROM_FMBB_BOSS_WORK"), iParam1, &iVar4, 0, 1, 0);
				Global_4534105[iVar4 /*85*/].f_6 = iVar0;
				Global_4534105[iVar4 /*85*/].f_7 = iVar1;
				Global_4534105[iVar4 /*85*/].f_8 = bVar7;
			}
			else
			{
				MONEY::NETWORK_EARN_FROM_FMBB_BOSS_WORK(iParam1);
			}
			break;
		case 243:
			if (__LIB_0__::func_112())
			{
				__LIB_35__::func_933(joaat("SERVICE_EARN_CASINO_MISSION_REWARD"), iParam1, &iVar4, 0, 1, 0);
				Global_4534105[iVar4 /*85*/].f_6 = iVar0;
				Global_4534105[iVar4 /*85*/].f_7 = iVar1;
				Global_4534105[iVar4 /*85*/].f_8 = bVar7;
			}
			else
			{
				MONEY::NETWORK_EARN_CASINO_MISSION_REWARD(iParam1);
			}
			break;
		case 158:
			if (uParam5->f_22)
			{
				if (__LIB_0__::func_112())
				{
					__LIB_35__::func_933(joaat("SERVICE_EARN_CASINO_HEIST_SETUP_MISSION"), iParam1, &iVar4, 0, 1, 0);
				}
				else
				{
					MONEY::NETWORK_EARN_CASINO_HEIST(iParam1, 0, 0, 1, iParam1, 0, 0);
				}
			}
			else if (__LIB_0__::func_112())
			{
				__LIB_35__::func_933(joaat("SERVICE_EARN_CASINO_HEIST_PREP_MISSION"), iParam1, &iVar4, 0, 1, 0);
			}
			else
			{
				MONEY::NETWORK_EARN_CASINO_HEIST(iParam1, 1, iParam1, 0, 0, 0, 0);
			}
			break;
		default:
			if (__LIB_0__::func_112())
			{
				__LIB_35__::func_933(joaat("SERVICE_EARN_BOSS_AGENCY"), iParam1, &iVar4, 0, 1, 0);
				Global_4534105[iVar4 /*85*/].f_6 = iVar0;
				Global_4534105[iVar4 /*85*/].f_7 = iVar1;
				Global_4534105[iVar4 /*85*/].f_8 = bVar7;
			}
			else
			{
				MONEY::NETWORK_EARN_AGENCY(iVar0, iVar1, iParam1, bVar7);
			}
			break;
	}
	if (bVar5)
	{
		sVar10 = "GBMR_SELLTICK0" /* GXT: You earned $~1~ for helping your VIP to complete a Sell mission. */;
		if (__LIB_18__::func_447(1))
		{
			sVar10 = "GBMR_SELLTICK2" /* GXT: You earned $~1~ for helping your MC President to complete a Sell mission. */;
		}
		else if (__LIB_2__::func_456(bVar6))
		{
			sVar10 = "GBMR_SELLTICK1" /* GXT: You earned $~1~ for helping your CEO to complete a Sell mission. */;
		}
		__LIB_25__::func_828(sVar10, iParam1, 0);
	}
}

int func_1052(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)//Position - 0x8DF44
{
	return func_1053(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_1053(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)//Position - 0x8DF66
{
	int iVar0;
	int iVar1;
	iVar0 = func_1063(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && BitTest(Global_4718592.f_39, 19))
	{
		return iVar0;
	}
	if (iParam4 == joaat("XPCATEGORY_COMPLETED_SHOWER") || iParam4 == joaat("XPCATEGORY_COMPLETED_ROLLERCOASTER"))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (ENTITY::IS_ENTITY_A_PED(iParam1))
			{
				iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
				__LIB_6__::func_970(PED::GET_PED_BONE_COORDS(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		__LIB_18__::func_311(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

var func_1063(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x8E30B
{
	var uVar0;
	uVar0 = func_1064(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_1064(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x8E32E
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	iVar2 = __LIB_18__::func_261();
	if (__LIB_0__::func_786(sParam2))
	{
	}
	if (__LIB_0__::func_109())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = __LIB_6__::func_973(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1 /* Tunable: XP_MULTIPLIER */);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = __LIB_1__::func_275(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					__LIB_19__::func_627(0, &iVar1);
					break;
				case 3:
					__LIB_19__::func_627(1, &iVar1);
					break;
				case 1:
					__LIB_6__::func_954(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1957716)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			__LIB_6__::func_981(1165, iVar1, -1);
			if (iParam1 == 0)
			{
				__LIB_18__::func_258((__LIB_1__::func_555(PLAYER::PLAYER_ID()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_36.f_2 != -1)
				{
					__LIB_6__::func_981(1166, iVar1, -1);
				}
				__LIB_6__::func_953(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				__LIB_6__::func_930((__LIB_6__::func_980(PLAYER::PLAYER_ID()) + iVar1));
			}
			else
			{
				__LIB_6__::func_930((__LIB_6__::func_980(PLAYER::PLAYER_ID()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_1103(int iParam0, int iParam1)//Position - 0x8FBBB
{
	int iVar0;
	if (*iParam0 > 0)
	{
		if (!__LIB_1__::func_145())
		{
			if (__LIB_19__::func_760(0))
			{
				if (!__LIB_18__::func_447(0))
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(__LIB_0__::func_582()))
					{
						if (__LIB_1__::func_449() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * __LIB_1__::func_449());
							*iParam0 = (*iParam0 - iVar0);
						}
						__LIB_6__::func_976(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_1107("GB_BCUT_TICK1" /* GXT: You paid ~a~ ~s~a $~1~ ~s~cut. */, __LIB_0__::func_582(), iVar0, 0, 0, 1);
						}
						__LIB_1__::func_447(20);
						__LIB_6__::func_982(__LIB_0__::func_582(), iVar0, 1);
					}
				}
			}
		}
	}
}

int func_1107(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)//Position - 0x8FCEF
{
	int iVar0;
	struct<8> Var1;
	iVar0 = -1;
	if (NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Var1))
		{
		}
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_914(iParam1, -2, 1, 0, 0));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(__LIB_6__::func_957(&Var1));
		if (!iParam3 == 0)
		{
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam3);
		}
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
		iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
		__LIB_18__::func_263(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_1113(int iParam0, var uParam1, int iParam2, var uParam3)//Position - 0x8FE1E
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	int iVar17;
	bool bVar18;
	bool bVar19;
	int iVar20;
	bVar18 = __LIB_18__::func_447(1);
	bVar19 = false;
	if (iParam0 == 237 && !uParam1->f_22)
	{
		if (__LIB_1__::func_145())
		{
			iVar17 = PLAYER::PLAYER_ID();
		}
		else
		{
			iVar17 = __LIB_0__::func_582();
		}
		iVar11 = iVar17;
		if (iVar11 != -1)
		{
			iVar0 = Global_1853348[iVar11 /*834*/].f_811.f_1;
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
				bVar19 = true;
			}
			else
			{
				fVar12 = SYSTEM::TO_FLOAT(uParam1->f_10);
				fVar13 = SYSTEM::TO_FLOAT(uParam1->f_11);
				fVar14 = ((fVar12 / fVar13) * 100f);
				fVar15 = ((IntToFloat(iVar0) / 100f) * fVar14);
				iVar1 = SYSTEM::CEIL(fVar15);
			}
			*uParam3 = iVar1;
			if (bVar19)
			{
				iVar2 = Global_1853348[iVar11 /*834*/].f_811.f_2;
			}
			else
			{
				iVar2 = __LIB_10__::func_935(Global_1853348[iVar11 /*834*/].f_811.f_4, Global_1853348[iVar11 /*834*/].f_811.f_1, *uParam3, Global_1853348[iVar11 /*834*/].f_811.f_2, Global_1853348[iVar11 /*834*/].f_811.f_3);
			}
			if (uParam1->f_17)
			{
				iVar20 = (iVar2 - SYSTEM::CEIL((IntToFloat(iVar2) * 0.9f)));
				if (iVar20 > 100000)
				{
					iVar20 = 100000;
				}
				iVar2 = (iVar2 - iVar20);
			}
			*iParam2 = (*iParam2 + iVar2);
			iVar10 = __LIB_10__::func_934(*iParam2);
			if (iVar10 > 0)
			{
				if (iVar17 == PLAYER::PLAYER_ID())
				{
					__LIB_25__::func_828("TICK_TCUT" /* GXT: Tony's laundering cut: $~1~. */, iVar10, 0);
				}
				*iParam2 = (*iParam2 - iVar10);
			}
			Global_1944249.f_49 = *uParam3;
			if (iVar17 == PLAYER::PLAYER_ID())
			{
				if (iVar2 > 0)
				{
					__LIB_20__::func_397(iVar2);
				}
				if (*uParam3 > 0)
				{
					__LIB_22__::func_50(*uParam3);
				}
				iVar6 = func_1114(&uVar5);
				iVar7 = Global_262145.f_24523 /* Tunable: 249027540 */;
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar9 = SYSTEM::CEIL((IntToFloat(iVar6) * Global_262145.f_24522 /* Tunable: -540578960 */));
				iVar8 = ((*iParam2 / 100) * iVar9);
				*iParam2 = (*iParam2 + iVar8);
				if (Global_262145.f_32969 /* Tunable: 2010545334 */)
				{
					if (!__LIB_0__::func_137(32356, -1))
					{
						*iParam2 = (*iParam2 * Global_262145.f_32977 /* Tunable: -492941246 */);
						__LIB_0__::func_521(32356, 1, -1);
					}
				}
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						__LIB_1__::func_447(140);
					}
				}
				Global_2815059.f_5195.f_386 = *iParam2;
			}
			else
			{
				fVar16 = Global_262145.f_24489 /* Tunable: -1073212210 */;
				if (!bVar18)
				{
					fVar16 = Global_262145.f_24490 /* Tunable: -787828473 */;
				}
				iVar3 = SYSTEM::CEIL((IntToFloat(*iParam2) * fVar16));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_24491 /* Tunable: 390735097 */;
				if (!bVar18)
				{
					iVar4 = Global_262145.f_24492 /* Tunable: -1911840744 */;
				}
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
			}
		}
	}
	else if (uParam1->f_22)
	{
	}
}

int func_1114(var uParam0)//Position - 0x900B1
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)))
		{
			iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (!__LIB_6__::func_978(iVar2, 0) && !func_615(iVar2, PLAYER::PLAYER_ID(), 1))
			{
				iVar1++;
			}
			else if (__LIB_6__::func_978(iVar2, 0))
			{
				*uParam0++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_1120(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4)//Position - 0x901F6
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	bool bVar16;
	bool bVar17;
	*uParam4 = 0;
	bVar16 = __LIB_18__::func_447(1);
	bVar17 = false;
	if (iParam0 == 229)
	{
	}
	else if (iParam0 == 230)
	{
		if (__LIB_1__::func_145())
		{
			iVar15 = PLAYER::PLAYER_ID();
		}
		else
		{
			iVar15 = __LIB_0__::func_582();
		}
		if (iVar15 != -1)
		{
			iVar0 = (uParam1->f_15 + uParam1->f_8);
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
				bVar17 = true;
			}
			else
			{
				fVar10 = SYSTEM::TO_FLOAT(uParam1->f_10);
				fVar11 = SYSTEM::TO_FLOAT(uParam1->f_11);
				fVar12 = ((fVar10 / fVar11) * 100f);
				fVar13 = ((IntToFloat(iVar0) / 100f) * fVar12);
				iVar1 = SYSTEM::CEIL(fVar13);
			}
			*uParam3 = iVar1;
			iVar2 = __LIB_20__::func_349(uParam1->f_16, *uParam3);
			*iParam2 = (*iParam2 + iVar2);
			if (bVar17)
			{
				iVar9 = __LIB_26__::func_334(uParam1->f_16, *uParam3);
				if (iVar9 > 0)
				{
					*iParam2 = (*iParam2 + iVar9);
				}
			}
			if (__LIB_10__::func_936(*iParam2) > 0)
			{
				if (iVar15 == PLAYER::PLAYER_ID())
				{
					__LIB_25__::func_828("SMTICK_RONCUT" /* GXT: Ron's Cut: $~1~. */, __LIB_10__::func_936(*iParam2), 0);
				}
				*iParam2 = (*iParam2 - __LIB_10__::func_936(*iParam2));
			}
			if (iVar15 == PLAYER::PLAYER_ID())
			{
				__LIB_20__::func_398(iVar2, iVar9);
				iVar6 = func_1114(&uVar5);
				iVar7 = Global_262145.f_22854 /* Tunable: 1245415334 */;
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = SYSTEM::CEIL((IntToFloat(iVar6) * Global_262145.f_22853 /* Tunable: -2011721386 */));
				*uParam4 = ((*iParam2 / 100) * iVar8);
				*iParam2 = (*iParam2 + *uParam4);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						__LIB_1__::func_447(44);
					}
				}
				Global_2815059.f_5195.f_386 = *iParam2;
			}
			else
			{
				fVar14 = Global_262145.f_22785 /* Tunable: 1359115930 */;
				if (!bVar16)
				{
					fVar14 = Global_262145.f_22786 /* Tunable: 304396062 */;
				}
				iVar3 = SYSTEM::CEIL((IntToFloat(*iParam2) * fVar14));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_22787 /* Tunable: -1817764260 */;
				if (!bVar16)
				{
					iVar4 = Global_262145.f_22788 /* Tunable: -1446893415 */;
				}
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
			}
		}
	}
}

void func_1123(int iParam0, var uParam1, int iParam2, var uParam3)//Position - 0x90438
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	int iVar16;
	bool bVar17;
	bVar17 = __LIB_18__::func_447(1);
	if (iParam0 == 225)
	{
	}
	else if (iParam0 == 226)
	{
		if (__LIB_1__::func_145())
		{
			iVar15 = PLAYER::PLAYER_ID();
		}
		else
		{
			iVar15 = __LIB_0__::func_582();
		}
		if (iVar15 != -1)
		{
			iVar16 = __LIB_1__::func_292(iVar15);
			iVar0 = (__LIB_4__::func_473(iVar15, iVar16) + uParam1->f_8);
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
			}
			else
			{
				fVar10 = SYSTEM::TO_FLOAT(uParam1->f_10);
				fVar11 = SYSTEM::TO_FLOAT(uParam1->f_11);
				fVar12 = ((fVar10 / fVar11) * 100f);
				fVar13 = ((IntToFloat(iVar0) / 100f) * fVar12);
				iVar1 = SYSTEM::CEIL(fVar13);
			}
			*uParam3 = iVar1;
			iVar2 = __LIB_25__::func_997(iVar15, iVar16, iVar1, 0);
			if (uParam1->f_14 == 0)
			{
				iVar2 = SYSTEM::CEIL((IntToFloat(iVar2) * Global_262145.f_21554 /* Tunable: 1021567941 */));
			}
			else
			{
				iVar2 = SYSTEM::CEIL((IntToFloat(iVar2) * Global_262145.f_21553 /* Tunable: 1865029244 */));
			}
			*iParam2 = (*iParam2 + iVar2);
			if (iVar15 == PLAYER::PLAYER_ID())
			{
				__LIB_20__::func_401(iVar16, iVar2);
				if (__LIB_20__::func_400(iVar16) >= Global_262145.f_21100 /* Tunable: -376544159 */ || iVar2 >= Global_262145.f_21100 /* Tunable: -376544159 */)
				{
					__LIB_33__::func_82(5);
				}
				iVar6 = func_1114(&uVar5);
				iVar7 = SYSTEM::ROUND(Global_262145.f_21556 /* Tunable: -556480345 */);
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = SYSTEM::CEIL((IntToFloat(iVar6) * Global_262145.f_21555 /* Tunable: 1413334331 */));
				iVar9 = ((*iParam2 / 100) * iVar8);
				*iParam2 = (*iParam2 + iVar9);
				if (Global_262145.f_32970 /* Tunable: 1598011694 */)
				{
					if (!__LIB_0__::func_137(32357, -1))
					{
						*iParam2 = (*iParam2 * Global_262145.f_32978 /* Tunable: -278088930 */);
						__LIB_0__::func_521(32357, 1, -1);
					}
				}
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						__LIB_1__::func_447(108);
					}
					else
					{
						__LIB_1__::func_447(110);
					}
				}
				Global_2815059.f_5195.f_386 = *iParam2;
			}
			else
			{
				fVar14 = Global_262145.f_21557 /* Tunable: 426264033 */;
				if (!bVar17)
				{
					fVar14 = Global_262145.f_21558 /* Tunable: -1471492989 */;
				}
				iVar3 = SYSTEM::CEIL((IntToFloat(*iParam2) * fVar14));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_21559 /* Tunable: -165611423 */;
				if (!bVar17)
				{
					iVar4 = Global_262145.f_21560 /* Tunable: 301168766 */;
				}
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
			}
		}
	}
	else if (iParam0 == 227)
	{
	}
}

void func_1130(int iParam0, var uParam1, int iParam2, var uParam3)//Position - 0x9189A
{
	struct<2> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	int iVar6;
	float fVar7;
	float fVar8;
	var uVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	struct<2> Var14;
	float fVar15;
	float fVar16;
	float fVar17;
	int iVar18;
	float fVar19;
	int iVar20;
	float fVar21;
	int iVar22;
	int iVar23;
	if (iParam0 == 192)
	{
	}
	else if (iParam0 == 190)
	{
		if (uParam1->f_10 > 0)
		{
			if (__LIB_4__::func_728())
			{
				Var0 = { __LIB_10__::func_933() };
				if (uParam1->f_10 == uParam1->f_11)
				{
					*uParam3 = (uParam1->f_15 + uParam1->f_8);
				}
				else
				{
					fVar1 = SYSTEM::TO_FLOAT(uParam1->f_10);
					fVar2 = SYSTEM::TO_FLOAT(uParam1->f_11);
					fVar3 = ((fVar1 / fVar2) * 100f);
					iVar4 = (uParam1->f_15 + uParam1->f_8);
					fVar5 = ((IntToFloat(iVar4) / 100f) * fVar3);
					*uParam3 = SYSTEM::CEIL(fVar5);
				}
				iVar6 = __LIB_25__::func_997(PLAYER::PLAYER_ID(), Var0.f_0, *uParam3, 0);
				if (Var0.f_1 == 1)
				{
					fVar7 = (SYSTEM::TO_FLOAT(iVar6) * Global_262145.f_19112 /* Tunable: 1763638426 */);
					iVar6 = SYSTEM::ROUND(fVar7);
				}
				else
				{
					fVar8 = (SYSTEM::TO_FLOAT(iVar6) * Global_262145.f_19111 /* Tunable: -823848572 */);
					iVar6 = SYSTEM::ROUND(fVar8);
				}
				*iParam2 = (*iParam2 + iVar6);
				iVar10 = func_1114(&uVar9);
				iVar11 = SYSTEM::ROUND(Global_262145.f_19102 /* Tunable: -444616278 */);
				if (iVar10 > iVar11)
				{
					iVar10 = iVar11;
				}
				iVar12 = SYSTEM::CEIL((IntToFloat(iVar10) * Global_262145.f_19101 /* Tunable: -309450581 */));
				iVar13 = ((*iParam2 / 100) * iVar12);
				*iParam2 = (*iParam2 + iVar13);
				if (uParam1->f_6)
				{
					*iParam2 = (*iParam2 + *uParam1);
				}
				if (uParam1->f_6)
				{
					if (uParam1->f_12 == 11)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
					else if (uParam1->f_12 == 9)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
				}
				switch (__LIB_9__::func_288(Var0.f_0))
				{
					case 1:
						if (Global_262145.f_32964 /* Tunable: 648076385 */)
						{
							if (!__LIB_0__::func_137(32351, -1))
							{
								*iParam2 = (*iParam2 * Global_262145.f_32972 /* Tunable: -793049781 */);
								__LIB_0__::func_521(32351, 1, -1);
							}
						}
						break;
					case 3:
						if (Global_262145.f_32965 /* Tunable: 1057315128 */)
						{
							if (!__LIB_0__::func_137(32352, -1))
							{
								*iParam2 = (*iParam2 * Global_262145.f_32973 /* Tunable: -1035386051 */);
								__LIB_0__::func_521(32352, 1, -1);
							}
						}
						break;
					case 4:
						if (Global_262145.f_32966 /* Tunable: 2074826178 */)
						{
							if (!__LIB_0__::func_137(32353, -1))
							{
								*iParam2 = (*iParam2 * Global_262145.f_32974 /* Tunable: 1011759977 */);
								__LIB_0__::func_521(32353, 1, -1);
							}
						}
						break;
					case 0:
						if (Global_262145.f_32967 /* Tunable: 98893693 */)
						{
							if (!__LIB_0__::func_137(32354, -1))
							{
								*iParam2 = (*iParam2 * Global_262145.f_32975 /* Tunable: -1980822412 */);
								__LIB_0__::func_521(32354, 1, -1);
							}
						}
						break;
					case 2:
						if (Global_262145.f_32968 /* Tunable: 328208647 */)
						{
							if (!__LIB_0__::func_137(32355, -1))
							{
								*iParam2 = (*iParam2 * Global_262145.f_32976 /* Tunable: 667598560 */);
								__LIB_0__::func_521(32355, 1, -1);
							}
						}
						break;
				}
				if (iVar10 > 0)
				{
					__LIB_1__::func_447(86);
				}
				Global_2815059.f_5195.f_386 = *iParam2;
			}
			else if (__LIB_18__::func_447(0))
			{
				Var14 = { __LIB_4__::func_811(__LIB_0__::func_582()) };
				if (uParam1->f_10 == uParam1->f_11)
				{
					*uParam3 = (uParam1->f_15 + uParam1->f_8);
				}
				else
				{
					fVar15 = SYSTEM::TO_FLOAT(uParam1->f_10);
					fVar16 = SYSTEM::TO_FLOAT(uParam1->f_11);
					fVar17 = ((fVar15 / fVar16) * 100f);
					iVar18 = (uParam1->f_15 + uParam1->f_8);
					fVar19 = ((IntToFloat(iVar18) / 100f) * fVar17);
					*uParam3 = SYSTEM::CEIL(fVar19);
				}
				iVar20 = __LIB_25__::func_997(__LIB_0__::func_582(), Var14.f_0, *uParam3, 0);
				if (Var14.f_1 == 1)
				{
					iVar20 = SYSTEM::CEIL((IntToFloat(iVar20) * Global_262145.f_19112 /* Tunable: 1763638426 */));
				}
				else if (Var14.f_1 == 0)
				{
					iVar20 = SYSTEM::CEIL((IntToFloat(iVar20) * Global_262145.f_19111 /* Tunable: -823848572 */));
				}
				*iParam2 = (*iParam2 + iVar20);
				fVar21 = Global_262145.f_19151 /* Tunable: -1680154074 */;
				iVar22 = SYSTEM::CEIL((IntToFloat(*iParam2) * fVar21));
				*iParam2 = iVar22;
				iVar23 = Global_262145.f_19152 /* Tunable: 997747887 */;
				if (*iParam2 > iVar23)
				{
					*iParam2 = iVar23;
				}
				if (uParam1->f_6)
				{
					if (uParam1->f_12 == 11)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
				}
			}
		}
	}
}

void func_1132(int iParam0, bool bParam1, var uParam2, int iParam3, var uParam4)//Position - 0x91CAB
{
	bool bVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	float fVar8;
	int iVar9;
	int iVar10;
	bVar0 = __LIB_0__::func_581(PLAYER::PLAYER_ID());
	if (iParam0 == 167)
	{
		if (__LIB_0__::func_581(PLAYER::PLAYER_ID()))
		{
			if (bParam1)
			{
				__LIB_11__::func_25();
			}
			__LIB_11__::func_24();
		}
	}
	else if (iParam0 == 168)
	{
		if (bParam1)
		{
			if (uParam2->f_5)
			{
				*iParam3 = (*iParam3 + __LIB_32__::func_639(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_183));
			}
			else
			{
				*uParam4 = uParam2->f_7;
				if (uParam2->f_8 > 0)
				{
					*uParam4 = (*uParam4 + uParam2->f_8);
				}
				iVar1 = __LIB_9__::func_858(*uParam4);
				iVar2 = (iVar1 * *uParam4);
				*iParam3 = (*iParam3 + iVar2);
				if (bVar0)
				{
					iVar4 = func_1114(&uVar3);
					iVar5 = Global_262145.f_16656 /* Tunable: EXEC_CONTRABAND_HIGH_DEMAND_BONUS_CAP */;
					if (iVar4 > iVar5)
					{
						iVar4 = iVar5;
					}
					iVar6 = SYSTEM::CEIL((IntToFloat(iVar4) * Global_262145.f_15864 /* Tunable: EXEC_CONTRABAND_HIGH_DEMAND_BONUS_PERCENTAGE */));
					iVar7 = ((*iParam3 / 100) * iVar6);
					*iParam3 = (*iParam3 + iVar7);
					if (uParam2->f_6)
					{
						*iParam3 = (*iParam3 + *uParam2);
					}
					if (iVar4 > 0 && uParam2->f_9 != 4)
					{
						__LIB_1__::func_447(44);
					}
				}
			}
			if (bVar0)
			{
				if (Global_262145.f_32963 /* Tunable: -1292749091 */)
				{
					if (!__LIB_0__::func_137(32350, -1))
					{
						*iParam3 = (*iParam3 * Global_262145.f_32971 /* Tunable: -364133001 */);
						__LIB_0__::func_521(32350, 1, -1);
					}
				}
				__LIB_20__::func_403(*iParam3);
				__LIB_11__::func_23();
				Global_2815059.f_5195.f_386 = *iParam3;
			}
			else
			{
				fVar8 = Global_262145.f_24493 /* Tunable: -623310017 */;
				iVar9 = SYSTEM::CEIL((IntToFloat(*iParam3) * fVar8));
				*iParam3 = iVar9;
				iVar10 = Global_262145.f_24494 /* Tunable: -223487172 */;
				if (*iParam3 > iVar10)
				{
					*iParam3 = iVar10;
				}
			}
		}
		if (bVar0)
		{
			__LIB_11__::func_22();
		}
	}
}

void func_1153(int iParam0, var uParam1, var uParam2)//Position - 0x93408
{
	int iVar0;
	if (iParam0 == 157)
	{
		*uParam1 = 1f;
		*uParam2 = 1f;
		return;
	}
	if (__LIB_10__::func_942(iParam0))
	{
		if (!__LIB_1__::func_145())
		{
			*uParam1 = 1f;
			*uParam2 = Global_262145.f_12872 /* Tunable: GB_CHALLENGE_GOON_RP_REWARD_PERCENTAGE */;
		}
		else
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
		return;
	}
	if (__LIB_13__::func_258(PLAYER::PLAYER_ID(), 1))
	{
		if (__LIB_10__::func_929(iParam0))
		{
			*uParam1 = (Global_262145.f_18658 /* Tunable: -1082665723 */ / 100f);
			*uParam2 = (Global_262145.f_18658 /* Tunable: -1082665723 */ / 100f);
		}
		else if (iParam0 == 242)
		{
			*uParam1 = Global_262145.f_24650 /* Tunable: 1063368282 */;
			*uParam2 = Global_262145.f_24650 /* Tunable: 1063368282 */;
		}
		else if (iParam0 == 244)
		{
			*uParam1 = Global_262145.f_24651 /* Tunable: 1249038613 */;
			*uParam2 = Global_262145.f_24651 /* Tunable: 1249038613 */;
		}
		else if (iParam0 == 248)
		{
			*uParam1 = Global_262145.f_24653 /* Tunable: -488524036 */;
			*uParam2 = Global_262145.f_24653 /* Tunable: -488524036 */;
		}
		else if (iParam0 == 241)
		{
			*uParam1 = Global_262145.f_24654 /* Tunable: 787287514 */;
			*uParam2 = Global_262145.f_24654 /* Tunable: 787287514 */;
		}
		else if (iParam0 == 239)
		{
			*uParam1 = Global_262145.f_24655 /* Tunable: 1624617753 */;
			*uParam2 = Global_262145.f_24655 /* Tunable: 1624617753 */;
		}
		else if (iParam0 == 240)
		{
			*uParam1 = Global_262145.f_24656 /* Tunable: 987927512 */;
			*uParam2 = Global_262145.f_24656 /* Tunable: 987927512 */;
		}
		else
		{
			*uParam1 = Global_262145.f_12869 /* Tunable: GB_RIVAL_ORG_CASH_REWARD_PERCENTAGE */;
			*uParam2 = Global_262145.f_12868 /* Tunable: GB_RIVAL_ORG_RP_REWARD_PERCENTAGE */;
		}
	}
	else if (__LIB_10__::func_929(iParam0))
	{
		*uParam1 = (Global_262145.f_18659 /* Tunable: -1704843668 */ / 100f);
		*uParam2 = (Global_262145.f_18659 /* Tunable: -1704843668 */ / 100f);
	}
	else if (iParam0 == 242)
	{
		*uParam1 = Global_262145.f_24657 /* Tunable: -1262379258 */;
		*uParam2 = Global_262145.f_24657 /* Tunable: -1262379258 */;
	}
	else if (iParam0 == 244)
	{
		*uParam1 = Global_262145.f_24658 /* Tunable: 1108489437 */;
		*uParam2 = Global_262145.f_24658 /* Tunable: 1108489437 */;
	}
	else if (iParam0 == 248)
	{
		*uParam1 = Global_262145.f_24660 /* Tunable: -989876675 */;
		*uParam2 = Global_262145.f_24660 /* Tunable: -989876675 */;
	}
	else if (iParam0 == 241)
	{
		*uParam1 = Global_262145.f_24661 /* Tunable: -1361915386 */;
		*uParam2 = Global_262145.f_24661 /* Tunable: -1361915386 */;
	}
	else if (iParam0 == 239)
	{
		*uParam1 = Global_262145.f_24662 /* Tunable: -1419284063 */;
		*uParam2 = Global_262145.f_24662 /* Tunable: -1419284063 */;
	}
	else if (iParam0 == 240)
	{
		*uParam1 = Global_262145.f_24663 /* Tunable: 2112977251 */;
		*uParam2 = Global_262145.f_24663 /* Tunable: 2112977251 */;
	}
	else
	{
		*uParam1 = Global_262145.f_12871 /* Tunable: GB_SOLO_CASH_REWARD_PERCENTAGE */;
		*uParam2 = Global_262145.f_12870 /* Tunable: GB_SOLO_RP_REWARD_PERCENTAGE */;
	}
	iVar0 = __LIB_1__::func_301();
	if (iVar0 != __LIB_0__::func_160())
	{
		if (func_615(PLAYER::PLAYER_ID(), iVar0, 1))
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
	}
}

int func_1155()//Position - 0x936AF
{
	int iVar0;
	if (__LIB_4__::func_728())
	{
		return Local_184[NETWORK::PARTICIPANT_ID_TO_INT() /*29*/].f_26;
	}
	else if (__LIB_0__::func_582() != -1)
	{
		iVar0 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(__LIB_0__::func_582());
		if (iVar0 != -1)
		{
			return Local_184[iVar0 /*29*/].f_26;
		}
	}
	return -1;
}

int func_1156()//Position - 0x936F4
{
	int iVar0;
	if (__LIB_4__::func_728())
	{
		return Local_184[NETWORK::PARTICIPANT_ID_TO_INT() /*29*/].f_25;
	}
	else if (__LIB_0__::func_582() != -1)
	{
		iVar0 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(__LIB_0__::func_582());
		if (iVar0 != -1)
		{
			return Local_184[iVar0 /*29*/].f_25;
		}
	}
	return -1;
}

int func_1157()//Position - 0x93739
{
	if (func_18())
	{
		return func_14();
	}
	if (func_25())
	{
		return (func_73(-1) + Local_183.f_167);
	}
	return func_231();
}

int func_1158()//Position - 0x93768
{
	if (func_18())
	{
		return Local_183.f_978;
	}
	return func_228();
}

int func_1161(int iParam0)//Position - 0x937E5
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < 6)
	{
		iVar0 = (iVar0 + __LIB_34__::func_565(iParam0, iVar1));
		iVar0 = (iVar0 + __LIB_34__::func_564(iParam0, iVar1));
		iVar1++;
	}
	return iVar0;
}

void func_1164()//Position - 0x93845
{
	int iVar0;
	if (func_259())
	{
		iVar0 = 0;
		while (iVar0 < func_14())
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_674[iVar0]))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_183.f_674[iVar0]) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_183.f_674[iVar0]) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
				{
					if (__LIB_0__::func_682(Local_183.f_674[iVar0]))
					{
						NETWORK::NETWORK_FADE_OUT_ENTITY(NETWORK::NET_TO_ENT(Local_183.f_674[iVar0]), true, true);
						__LIB_1__::func_46(&(Local_183.f_674[iVar0]));
					}
				}
			}
			iVar0++;
		}
	}
}

void func_1165(int iParam0)//Position - 0x938DC
{
	if (func_1909(23) || iParam0)
	{
		if (!__LIB_0__::func_695(PLAYER::PLAYER_ID(), 0, 0))
		{
			func_1335(23);
			func_1335(24);
			__LIB_6__::func_967();
			__LIB_13__::func_731(0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0);
			__LIB_36__::func_174(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
		}
	}
}

void func_1185()//Position - 0x94018
{
	if (func_1190(0) && func_239() == 0)
	{
		__LIB_13__::func_283(1);
		if (func_1190(1))
		{
			__LIB_21__::func_79(1);
		}
	}
	else
	{
		__LIB_13__::func_283(-1);
		__LIB_21__::func_79(0);
	}
}

int func_1190(bool bParam0)//Position - 0x940D5
{
	if (bParam0)
	{
		if (!func_29(3))
		{
			return 0;
		}
	}
	if (func_25())
	{
		return func_1255();
	}
	return func_1191();
}

int func_1191()//Position - 0x94101
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < func_14())
	{
		if (func_1192(iVar0, 1))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_1192(bool bParam0, bool bParam1)//Position - 0x9412D
{
	if (func_475(bParam0, bParam1))
	{
		if (__LIB_1__::func_264(PLAYER::PLAYER_ID(), 0, 1))
		{
			if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(func_13(bParam0), -1, false))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_1193()//Position - 0x94165
{
	if (__LIB_3__::func_648(27))
	{
		__LIB_3__::func_647(27);
	}
	if (__LIB_3__::func_648(23))
	{
		__LIB_3__::func_647(23);
	}
	if (__LIB_3__::func_648(32))
	{
		__LIB_3__::func_647(32);
	}
	if (__LIB_3__::func_648(65))
	{
		__LIB_3__::func_647(65);
	}
	if (__LIB_3__::func_648(85))
	{
		__LIB_3__::func_647(85);
	}
	if (((((__LIB_0__::func_1("SCONTRA_HLP8" /* GXT: Press ~INPUT_FRONTEND_RIGHT~ to drop Special Cargo when you are flying above a drop-off. */) || __LIB_0__::func_1("SCONTRA_HLP14" /* GXT: Press ~INPUT_ENTER~ to climb aboard the tug boat. */)) || __LIB_0__::func_1("SCONTRA_HLP6" /* GXT: The Special Cargo ~HUD_COLOUR_BLUE~~BLIP_CONTRABAND~~HUD_COLOUR_WHITE~ has been transferred to the delivery vehicle. Deliver the goods to the drop-off to receive payment. */)) || __LIB_0__::func_1("SCONTRA_HLP6P" /* GXT: The Special Cargo ~HUD_COLOUR_BLUE~~BLIP_CONTRABAND~~HUD_COLOUR_WHITE~ has been transferred to the delivery vehicle. Deliver the goods to the drop-offs to receive payment. */)) || __LIB_0__::func_1("SCONTRA_HLP7" /* GXT: Help deliver the Special Cargo ~HUD_COLOUR_BLUE~~BLIP_CONTRABAND~~HUD_COLOUR_WHITE~ to the drop-off. */)) || __LIB_0__::func_1("SCONTRA_HLP7P" /* GXT: Help deliver the Special Cargo ~HUD_COLOUR_BLUE~~BLIP_CONTRABAND~~HUD_COLOUR_WHITE~ to the drop-offs. */))
	{
		HUD::CLEAR_HELP(true);
	}
}

void func_1195()//Position - 0x9423A
{
	if (Local_133.f_472 != -1)
	{
		AUDIO::STOP_SOUND(Local_133.f_472);
		AUDIO::RELEASE_SOUND_ID(Local_133.f_472);
		Local_133.f_472 = -1;
	}
}

void func_1196()//Position - 0x94263
{
	bool bVar0;
	switch (func_16())
	{
		case 3:
		case 8:
		case 0:
			bVar0 = false;
			while (bVar0 < func_14())
			{
				func_474(bVar0, 0);
				func_1197(bVar0, 1, 0);
				bVar0++;
			}
			break;
	}
}

void func_1197(bool bParam0, bool bParam1, int iParam2)//Position - 0x942AD
{
	var uVar0;
	if (ENTITY::DOES_ENTITY_EXIST(func_67(bParam0)))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(func_67(bParam0)) || (iParam2 && __LIB_3__::func_686(func_67(bParam0))))
		{
			if (bParam1)
			{
				if (func_66(bParam0))
				{
					if (VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(func_13(bParam0)) != 2)
					{
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(func_13(bParam0), 2);
						if (func_74())
						{
							uVar0 = func_13(bParam0);
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&uVar0);
						}
						if (iParam2 && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
						{
							MISC::SET_BIT(&(Local_183.f_976), bParam0);
						}
					}
				}
			}
			else if (func_66(bParam0))
			{
				if (VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(func_13(bParam0)) != 1)
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(func_13(bParam0), 1);
					if (iParam2 && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
					{
						MISC::CLEAR_BIT(&(Local_183.f_976), bParam0);
					}
				}
			}
		}
	}
}

void func_1206()//Position - 0x94747
{
	struct<3> Var0;
	var uVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	if (func_539() || func_366())
	{
		if (!func_230(0))
		{
			if (func_553() || func_523())
			{
				uVar1 = func_1251();
				bVar2 = false;
				while (bVar2 < func_14())
				{
					if ((uVar1 && func_1250()) && func_477(bVar2))
					{
						if (Local_183.f_664[bVar2] < 10)
						{
							if (func_1249(bVar2) && !__LIB_0__::func_77(0))
							{
								if (!BitTest(Local_133.f_199[bVar2], Local_183.f_175[bVar2]))
								{
									Var0 = { func_412(func_16(), Local_183.f_175[bVar2], Local_183.f_679, bVar2, 0, 1) };
									if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Var0, (4f * 0.5f), (4f * 0.5f), 2f, true, true, 0) && !__LIB_3__::func_633())
									{
										func_1246(bVar2);
										if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 190 /*INPUT_FRONTEND_RIGHT*/))
										{
											__LIB_34__::func_472(bVar2, Local_183.f_175[bVar2], Local_183.f_983);
											func_1242();
											MISC::SET_BIT(&(Local_133.f_199[bVar2]), Local_183.f_175[bVar2]);
											MISC::SET_BIT(&(Local_133.f_237), 0);
										}
									}
								}
							}
						}
					}
					if ((func_1192(bVar2, 1) || func_1241(bVar2, 1)) && Local_183.f_664[bVar2] < 10)
					{
						bVar6 = ENTITY::IS_ENTITY_AT_COORD(func_67(bVar2), func_412(func_16(), Local_183.f_175[bVar2], Local_183.f_679, bVar2, 0, func_477(bVar2)), func_533(0), false, true, 0);
						func_1234(bVar2);
						if (((func_66(bVar2) && bVar6) && func_1249(bVar2)) && (!func_74() || (func_74() && ENTITY::GET_ENTITY_SPEED(func_13(bVar2)) < 1f)))
						{
							if (!func_235() || (func_235() && func_1233(func_13(bVar2), func_412(func_16(), Local_183.f_175[bVar2], Local_183.f_679, bVar2, 0, func_477(bVar2)))))
							{
								func_1232(0);
								iVar4 = 1;
								func_1231();
								PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 74 /*INPUT_VEH_HEADLIGHT*/, true);
							}
							else
							{
								func_1232(1);
							}
						}
						else
						{
							func_1232(0);
							func_1195();
							if (func_448() && func_1336(0))
							{
								VEHICLE::CLOSE_BOMB_BAY_DOORS(func_13(func_1230()));
								func_1229(0);
							}
							func_1228(0, bVar2);
							func_1225(func_13(func_1230()), func_1230(), 0);
						}
						bVar5 = (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) != 0 || func_63(NETWORK::PARTICIPANT_ID(), 6));
						if ((func_27() && Local_133.f_194 != -1) && !__LIB_7__::func_260("BYCB_CLY_LSC0" /* GXT: Lose the Cops. */))
						{
							bVar5 = false;
						}
						if (func_366())
						{
							bVar5 = false;
						}
						if (__LIB_7__::func_260("BYCB_CLY_LSC0" /* GXT: Lose the Cops. */))
						{
							bVar5 = true;
						}
						if ((iVar4 && !bVar5) && !BitTest(Local_133.f_199[bVar2], Local_183.f_175[bVar2]))
						{
							if (func_1221(bVar2))
							{
								if (!(VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(func_13(bVar2), 0, 500) && !VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(func_13(bVar2), 1, 500)))
								{
									if (func_366())
									{
										if (func_1192(bVar2, 1))
										{
											iVar3 = 1;
										}
									}
									else if (((func_1192(bVar2, 1) && !func_1220(bVar2, 1)) || ((func_1241(bVar2, 1) && func_31(bVar2)) && !func_235())) || (func_1192(bVar2, 1) && func_235()))
									{
										iVar3 = 1;
									}
									if (func_1218())
									{
										func_1246(bVar2);
									}
									func_1217(bVar2);
								}
							}
							else if (func_253())
							{
								if (func_1192(bVar2, 1) && !func_1220(bVar2, 1))
								{
									__LIB_4__::func_936("BIKER_TOOLOW" /* GXT: Increase your altitude to drop off the ~a~. */, func_946(), -1);
								}
								else if (func_1192(bVar2, 1) && func_1220(bVar2, 1))
								{
									__LIB_4__::func_936("BIKER_TOOLOW2" /* GXT: Increase your altitude so your passenger can drop off the ~a~. */, func_946(), -1);
								}
								else if (func_1241(bVar2, 1) && func_31(bVar2))
								{
									__LIB_4__::func_936("BIKER_TOOLOW3" /* GXT: Your pilot needs to increase their altitude for you to drop off the ~a~. */, func_946(), -1);
								}
							}
						}
						else if ((__LIB_2__::func_161(func_1215(bVar2), func_946()) || __LIB_2__::func_161("SBIKER_LAND" /* GXT: Land the plane at the drop-off to deliver the ~a~. */, func_946())) || __LIB_2__::func_161("BIKER_TOOLOW" /* GXT: Increase your altitude to drop off the ~a~. */, func_946()))
						{
							HUD::CLEAR_HELP(true);
						}
						switch (Local_133.f_198)
						{
							case 0:
								if ((((iVar3 && (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 190 /*INPUT_FRONTEND_RIGHT*/) || func_366())) && !BitTest(Local_133.f_199[bVar2], Local_183.f_175[bVar2])) && !bVar5) && !func_523())
								{
									if (func_366())
									{
										bVar7 = func_1230();
										if (bVar7 != -1)
										{
											if (__LIB_0__::func_649(&(Local_184[NETWORK::PARTICIPANT_ID_TO_INT() /*29*/].f_16[bVar7 /*2*/])))
											{
												__LIB_0__::func_495(&(Local_184[NETWORK::PARTICIPANT_ID_TO_INT() /*29*/].f_16[bVar7 /*2*/]), 0, 0);
												if (func_1336(13))
												{
													func_1229(13);
												}
											}
											func_1208(Local_183.f_175[bVar2]);
										}
									}
									func_1228(1, bVar2);
									__LIB_34__::func_472(bVar2, Local_183.f_175[bVar2], Local_183.f_983);
									MISC::SET_BIT(&(Local_133.f_199[bVar2]), Local_183.f_175[bVar2]);
									Local_133.f_198++;
								}
								break;
							case 1:
								Local_133.f_198 = 0;
								break;
						}
					}
					else if (!func_1241(bVar2, 0))
					{
						func_1195();
					}
					bVar2++;
				}
			}
		}
		else
		{
			if ((__LIB_2__::func_161(func_1215(-1), func_946()) || __LIB_2__::func_161("SBIKER_LAND" /* GXT: Land the plane at the drop-off to deliver the ~a~. */, func_946())) || __LIB_2__::func_161("BIKER_TOOLOW" /* GXT: Increase your altitude to drop off the ~a~. */, func_946()))
			{
				HUD::CLEAR_HELP(true);
			}
			func_1195();
		}
	}
	if (func_23())
	{
		bVar8 = func_65(PLAYER::PLAYER_ID());
		if (bVar8 != -1)
		{
			if (!BitTest(Local_133.f_484, Local_183.f_175[bVar8]))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), func_412(func_16(), Local_183.f_175[bVar8], Local_183.f_679, bVar8, 0, 0), func_533(0), false, true, 0))
				{
					func_1207();
					MISC::SET_BIT(&(Local_133.f_484), Local_183.f_175[bVar8]);
				}
			}
		}
	}
}

void func_1207()//Position - 0x94D5D
{
	AUDIO::PLAY_SOUND_FRONTEND(-1, func_528(), func_527(), false);
}

void func_1208(int iParam0)//Position - 0x94D73
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	float fVar3;
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_64[iParam0]))
	{
		if (__LIB_0__::func_121(NETWORK::NET_TO_VEH(Local_183.f_64[iParam0])))
		{
			fVar3 = __LIB_20__::func_614(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_183.f_64[iParam0]), 1);
			if (fVar3 > 315f || fVar3 <= 45f)
			{
				iVar0 = 2;
			}
			else if (fVar3 > 45f && fVar3 <= 135f)
			{
				iVar0 = 1;
			}
			else if (fVar3 > 135f && fVar3 <= 225f)
			{
				iVar0 = 3;
			}
			else if (fVar3 > 225f && fVar3 < 315f)
			{
				iVar0 = 0;
			}
		}
	}
	sVar1 = func_1210(iVar0);
	sVar2 = func_1209(iVar0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1) && !MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
	{
		if (STREAMING::HAS_ANIM_DICT_LOADED(sVar1))
		{
			TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), sVar1, sVar2, 8f, -8f, -1, 0, 0f, false, false, false);
		}
	}
}

char* func_1209(int iParam0)//Position - 0x94E78
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return "throw";
		case 3:
			return "drop_grenade";
		case 2:
			return "throw_0";
		default:
	}
	return "";
}

char* func_1210(int iParam0)//Position - 0x94EB9
{
	if (iParam0 == 0)
	{
		return "veh@drivebystd_ds_grenades";
	}
	else if ((iParam0 == 1 || iParam0 == 2) || iParam0 == 3)
	{
		return "veh@drivebystd_ps_grenades";
	}
	return "";
}

char* func_1215(bool bParam0)//Position - 0x94FC2
{
	if (func_19())
	{
		return "SBIKER_POST1" /* GXT: Press ~INPUT_FRONTEND_RIGHT~ to post ~a~. */;
	}
	if (func_23())
	{
		return "SBIKER_FDROP" /* GXT: Press ~INPUT_FRONTEND_RIGHT~ to sell ~a~. */;
	}
	if (func_253() || func_367())
	{
		if (bParam0 > -1)
		{
			if ((func_1192(bParam0, 1) && !func_1220(bParam0, 1)) || (func_1241(bParam0, 1) && func_31(bParam0)))
			{
				return "SBIKER_DROP" /* GXT: Press ~INPUT_FRONTEND_RIGHT~ to drop ~a~. */;
			}
			else if (func_1192(bParam0, 1) && func_1220(bParam0, 1))
			{
				return "SBIKER_DROP2" /* GXT: Remain in the area while your passenger makes the drop. */;
			}
		}
	}
	return "SBIKER_DROP" /* GXT: Press ~INPUT_FRONTEND_RIGHT~ to drop ~a~. */;
}

void func_1217(bool bParam0)//Position - 0x95079
{
	switch (func_16())
	{
		case 4:
			if (func_1192(bParam0, 1))
			{
				if (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 190 /*INPUT_FRONTEND_RIGHT*/))
				{
					func_1228(1, bParam0);
				}
			}
			break;
		case 5:
			break;
	}
}

int func_1218()//Position - 0x950B7
{
	if (func_23())
	{
		if (func_1219(NETWORK::PARTICIPANT_ID_TO_INT(), func_1230()))
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (func_19())
	{
		return 0;
	}
	if (func_366())
	{
		return 0;
	}
	if (func_235())
	{
		return func_1191();
	}
	return 1;
}

bool func_1219(int iParam0, bool bParam1)//Position - 0x95105
{
	return Local_184[iParam0 /*29*/].f_9[bParam1] == 1;
}

int func_1220(bool bParam0, bool bParam1)//Position - 0x9511C
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_59[bParam0]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(func_13(bParam0), false))
		{
			if (bParam1)
			{
				iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(func_13(bParam0), 0, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar2))
				{
					return 1;
				}
			}
			else
			{
				iVar1 = 0;
				while (iVar1 < 9)
				{
					iVar0 = iVar1;
					iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(func_13(bParam0), iVar0, false);
					if (ENTITY::DOES_ENTITY_EXIST(iVar2))
					{
						return 1;
					}
					iVar1++;
				}
			}
		}
	}
	return 0;
}

int func_1221(bool bParam0)//Position - 0x9519A
{
	float fVar0;
	if (!func_253())
	{
		return 1;
	}
	if (func_66(bParam0))
	{
		fVar0 = ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(func_13(bParam0));
		if (fVar0 >= Global_262145.f_18596 /* Tunable: -701239500 */)
		{
			return 1;
		}
	}
	return 0;
}

void func_1225(int iParam0, bool bParam1, bool bParam2)//Position - 0x9529F
{
	switch (func_16())
	{
		case 5:
			if (bParam1 != -1)
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_183.f_59[bParam1]))
				{
					if (bParam2)
					{
						if (__LIB_6__::func_762(iParam0, 1093140480, 1, 1056964608, 0, 1, 0))
						{
							ENTITY::FREEZE_ENTITY_POSITION(iParam0, true);
						}
					}
					else if (!func_538(bParam1))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iParam0, false);
					}
				}
			}
			break;
	}
}

void func_1228(bool bParam0, bool bParam1)//Position - 0x954CA
{
	if (bParam0)
	{
		if (Local_184[NETWORK::PARTICIPANT_ID_TO_INT() /*29*/].f_9[bParam1] != 1)
		{
			Local_184[NETWORK::PARTICIPANT_ID_TO_INT() /*29*/].f_9[bParam1] = 1;
		}
	}
	else if (Local_184[NETWORK::PARTICIPANT_ID_TO_INT() /*29*/].f_9[bParam1] != 2)
	{
		Local_184[NETWORK::PARTICIPANT_ID_TO_INT() /*29*/].f_9[bParam1] = 2;
	}
}

void func_1229(int iParam0)//Position - 0x95520
{
	MISC::CLEAR_BIT(&uLocal_150, iParam0);
}

int func_1230()//Position - 0x95531
{
	int iVar0;
	int iVar1;
	if (__LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			iVar1 = 0;
			while (iVar1 < func_14())
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_59[iVar1]))
				{
					if (iVar0 == NETWORK::NET_TO_VEH(Local_183.f_59[iVar1]))
					{
						return iVar1;
					}
				}
				iVar1++;
			}
		}
	}
	return -1;
}

void func_1231()//Position - 0x9559A
{
	if (func_448())
	{
		if (Local_133.f_472 == -1)
		{
			Local_133.f_472 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FRONTEND(Local_133.f_472, "Drop_Zone_Alarm", func_527(), false);
		}
	}
}

void func_1232(bool bParam0)//Position - 0x955CE
{
	switch (func_16())
	{
		case 3:
			if (bParam0)
			{
				__LIB_4__::func_936("SBIKERT_HREAR" /* GXT: Navigate the rear of the Trashmaster into the drop-off area ~HUD_COLOUR_YELLOW~~BLIP_OBJECTIVE~~s~ to drop the bag of ~a~. */, func_946(), -1);
			}
			else if (__LIB_2__::func_161("SBIKERT_HREAR" /* GXT: Navigate the rear of the Trashmaster into the drop-off area ~HUD_COLOUR_YELLOW~~BLIP_OBJECTIVE~~s~ to drop the bag of ~a~. */, func_946()))
			{
				HUD::CLEAR_HELP(true);
			}
			break;
	}
}

int func_1233(int iParam0, struct<3> Param1)//Position - 0x95613
{
	char* sVar0;
	int iVar1;
	struct<3> Var2;
	sVar0 = "platelight";
	switch (func_16())
	{
		case 3:
			iVar1 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, sVar0);
			Var2 = { ENTITY::GET_ENTITY_BONE_POSTION(iParam0, iVar1) };
			return MISC::GET_DISTANCE_BETWEEN_COORDS(Var2, Param1, true) < 4f;
			break;
	}
	return 0;
}

void func_1234(bool bParam0)//Position - 0x9565D
{
	if (func_1240())
	{
		if (func_1219(NETWORK::PARTICIPANT_ID_TO_INT(), bParam0))
		{
			if (!__LIB_0__::func_649(&(Local_133.f_6)))
			{
				__LIB_0__::func_580(&(Local_133.f_6), 0, 0);
			}
			else
			{
				func_1239(bParam0);
			}
		}
		else if (__LIB_0__::func_649(&(Local_133.f_6)) || __LIB_0__::func_114())
		{
			if (__LIB_2__::func_47(&(Local_133.f_6), 3000, 0) || __LIB_0__::func_114())
			{
				__LIB_0__::func_579(&(Local_133.f_6));
				func_1235(bParam0);
			}
			else
			{
				func_1239(bParam0);
			}
		}
	}
}

void func_1235(bool bParam0)//Position - 0x956E0
{
	VEHICLE::SET_VEHICLE_DOOR_SHUT(func_13(bParam0), __LIB_2__::func_720(), false);
	if (func_1236())
	{
		VEHICLE::SET_VEHICLE_DOOR_SHUT(func_13(bParam0), __LIB_2__::func_720(), false);
	}
}

int func_1236()//Position - 0x9570D
{
	switch (func_16())
	{
		case 5:
			return 1;
		default:
	}
	return 0;
}

void func_1239(bool bParam0)//Position - 0x9573B
{
	VEHICLE::SET_VEHICLE_DOOR_OPEN(func_13(bParam0), __LIB_2__::func_720(), false, false);
	if (func_1236())
	{
		VEHICLE::SET_VEHICLE_DOOR_OPEN(func_13(bParam0), __LIB_2__::func_720(), false, false);
	}
}

int func_1240()//Position - 0x9576A
{
	switch (func_16())
	{
		case 3:
		case 5:
			return 1;
		default:
	}
	return 0;
}

int func_1241(bool bParam0, bool bParam1)//Position - 0x9578C
{
	int iVar0;
	int iVar1;
	if (func_475(bParam0, 1))
	{
		if (__LIB_1__::func_264(PLAYER::PLAYER_ID(), 0, 1))
		{
			if (bParam1)
			{
				if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(func_13(bParam0), 0, false))
				{
					return 1;
				}
			}
			else
			{
				iVar1 = 0;
				while (iVar1 < 9)
				{
					iVar0 = iVar1;
					if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(func_13(bParam0), iVar0, false))
					{
						return 1;
					}
					iVar1++;
				}
			}
		}
	}
	return 0;
}

void func_1242()//Position - 0x957FA
{
	char* sVar0;
	char* sVar1;
	sVar0 = func_1244();
	sVar1 = func_1243();
	if (!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sVar0, sVar1, 3))
	{
		TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), sVar0, sVar1, 8f, -8f, -1, 1048576, 0f, false, false, false);
	}
}

char* func_1243()//Position - 0x9583E
{
	char* sVar0;
	sVar0 = "PLACE_FIREWORK_BOX2";
	return sVar0;
}

char* func_1244()//Position - 0x9584F
{
	char* sVar0;
	sVar0 = "anim@MP_FIREWORKS";
	return sVar0;
}

void func_1246(bool bParam0)//Position - 0x958A2
{
	switch (func_16())
	{
		case 4:
		case default:
	}
	__LIB_4__::func_936(func_1215(bParam0), func_946(), -1);
}

int func_1249(bool bParam0)//Position - 0x9593A
{
	int iVar0;
	iVar0 = 0;
	if (!func_448())
	{
		iVar0 = 1;
	}
	if (func_448() && ENTITY::IS_ENTITY_IN_AIR(func_67(bParam0)))
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_1250()//Position - 0x9596B
{
	int iVar0;
	if (func_19())
	{
		iVar0 = func_1230();
		if (iVar0 == -1)
		{
			iVar0 = Local_133.f_193;
		}
		if (iVar0 != -1)
		{
			return BitTest(Local_183.f_22[iVar0], PLAYER::NETWORK_PLAYER_ID_TO_INT());
		}
	}
	return 0;
}

bool func_1251()//Position - 0x959A4
{
	char* sVar0;
	sVar0 = func_1244();
	STREAMING::REQUEST_ANIM_DICT(sVar0);
	return STREAMING::HAS_ANIM_DICT_LOADED(sVar0);
}

bool func_1255()//Position - 0x959FE
{
	return func_63(NETWORK::PARTICIPANT_ID(), 19);
}

int func_1256(int* iParam0, var uParam1, float fParam2)//Position - 0x95A10
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<2> Var6;
	int iVar7;
	int iVar8;
	struct<3> Var9;
	int iVar10;
	char* sVar11;
	var uVar12[8];
	var uVar13;
	int iVar14;
	int iVar15;
	if (!__LIB_36__::func_875(PLAYER::PLAYER_ID(), __LIB_1__::func_301(), 1))
	{
		return 1;
	}
	if (*uParam1)
	{
		func_1331(iParam0, uParam1);
	}
	else if (__LIB_24__::func_792(uParam1))
	{
		func_1331(iParam0, uParam1);
		return 1;
	}
	if (!uParam1->f_1)
	{
		return 0;
	}
	if (Global_1943947.f_33 != 1)
	{
		Global_1943947.f_33 = 1;
	}
	iVar2 = 0;
	while (iVar2 < 8)
	{
		iParam0->f_7[iVar2 /*2*/].f_1 = __LIB_0__::func_160();
		iVar2++;
	}
	if (!*uParam1)
	{
		if (!__LIB_1__::func_298(PLAYER::PLAYER_ID(), 7) && !__LIB_1__::func_298(PLAYER::PLAYER_ID(), 6))
		{
			if (__LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), iParam0->f_2) < (fParam2 * fParam2))
				{
					if (__LIB_24__::func_796(PLAYER::PLAYER_PED_ID()))
					{
						__LIB_9__::func_333(7);
					}
				}
			}
		}
	}
	if (!BitTest(*iParam0, 0))
	{
		if ((!__LIB_1__::func_159() && !HUD::IS_HELP_MESSAGE_ON_SCREEN()) && Global_2703735.f_4.f_10)
		{
			if (__LIB_2__::func_47(&(iParam0->f_5), 500, 0))
			{
				if (*uParam1)
				{
					__LIB_1__::func_278("SBCONTRA_R1H" /* GXT: Race against your MC to deliver the Product to the drop-off first to win a cash bonus. */, -1);
				}
				else
				{
					__LIB_1__::func_278("BG_P2P_GOD4" /* GXT: Compete against your MC to reach the destination first to win RP. */, -1);
				}
				__LIB_36__::func_794(1);
				MISC::SET_BIT(iParam0, 0);
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			iVar8 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			if (((!__LIB_24__::func_835(iVar8) && !__LIB_6__::func_978(iVar8, 0)) && !__LIB_1__::func_298(iVar8, 6)) && __LIB_36__::func_875(iVar8, __LIB_1__::func_301(), 1))
			{
				iParam0->f_7[iVar1 /*2*/].f_1 = iVar8;
				iVar4 = PLAYER::GET_PLAYER_PED(iParam0->f_7[iVar1 /*2*/].f_1);
				if (!PED::IS_PED_INJURED(iVar4))
				{
					if (!__LIB_24__::func_794(&(iParam0->f_7[iVar1 /*2*/]), iVar0, &(uParam1->f_2)))
					{
						Var9 = { ENTITY::GET_ENTITY_COORDS(iVar4, true) };
						if (__LIB_1__::func_155(iParam0->f_7[iVar1 /*2*/].f_1, 1, 1))
						{
							Var9 = { func_1275(iParam0->f_7[iVar1 /*2*/].f_1) };
						}
						else if (Var9.f_2 < -40f && iParam0->f_7[iVar1 /*2*/].f_1 != PLAYER::PLAYER_ID())
						{
							Var9 = { NETWORK::NETWORK_GET_LAST_PLAYER_POS_RECEIVED_OVER_NETWORK(iParam0->f_7[iVar1 /*2*/].f_1) };
						}
						iParam0->f_7[iVar1 /*2*/] = MISC::GET_DISTANCE_BETWEEN_COORDS(Var9, iParam0->f_2, true);
						if (PED::IS_PED_IN_ANY_VEHICLE(iVar4, false))
						{
							iVar7 = PED::GET_VEHICLE_PED_IS_IN(iVar4, false);
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar7, false))
							{
								iVar5 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar7, -1, false);
								if (iVar5 != iVar4)
								{
									if (ENTITY::DOES_ENTITY_EXIST(iVar5) && !PED::IS_PED_INJURED(iVar5))
									{
										if (PED::IS_PED_A_PLAYER(iVar5))
										{
											iVar10 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar5);
											if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar10) && NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar10)))
											{
												iParam0->f_7[iVar1 /*2*/] = (iParam0->f_7[iVar1 /*2*/] + 0.001f);
											}
										}
									}
								}
							}
						}
					}
					iVar1++;
				}
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 <= 7)
	{
		iVar3 = iVar2;
		while (iVar3 <= 7)
		{
			if (iParam0->f_7[iVar2 /*2*/] > iParam0->f_7[iVar3 /*2*/] && iParam0->f_7[iVar3 /*2*/] != 0f)
			{
				Var6 = { iParam0->f_7[iVar2 /*2*/] };
				iParam0->f_7[iVar2 /*2*/] = { iParam0->f_7[iVar3 /*2*/] };
				iParam0->f_7[iVar3 /*2*/] = { Var6 };
			}
			iVar3++;
		}
		iVar2++;
	}
	func_1657(&(Global_1637407.f_534), &Global_1637407, 28, &(Global_1637407.f_1), &(Global_1637407.f_117), -1, 0, 0);
	if (Global_2703735.f_4.f_10)
	{
		if (iParam0->f_7[0 /*2*/].f_1 != __LIB_0__::func_160() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0->f_7[0 /*2*/].f_1))
		{
			if (!BitTest(*iParam0, 2))
			{
				if (HUD::DOES_BLIP_EXIST(iParam0->f_1))
				{
					HUD::SET_BLIP_ROUTE(iParam0->f_1, true);
					MISC::SET_BIT(iParam0, 2);
				}
			}
			sVar11 = "HUD_METNUM" /* GXT: ~1~m */;
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				iVar2 = 0;
				while (iVar2 < 8)
				{
					uVar12[iVar2] = iParam0->f_7[iVar2 /*2*/];
					iVar2++;
				}
			}
			else
			{
				iVar2 = 0;
				while (iVar2 < 8)
				{
					uVar12[iVar2] = __LIB_1__::func_502(iParam0->f_7[iVar2 /*2*/]);
					iVar2++;
				}
				sVar11 = "HUD_FTNUM" /* GXT: ~1~ft */;
			}
			iVar14 = -1;
			iVar2 = 0;
			while (iVar2 < 8)
			{
				if (iVar2 < 3)
				{
					if (iParam0->f_7[iVar2 /*2*/].f_1 == PLAYER::PLAYER_ID())
					{
						iVar15 = 1;
					}
				}
				else if (iParam0->f_7[iVar2 /*2*/].f_1 == PLAYER::PLAYER_ID())
				{
					iVar14 = iVar2;
				}
				iVar2++;
			}
			if (iVar15 && iVar14 != -1)
			{
				__LIB_28__::func_470(iParam0->f_7[0 /*2*/].f_1, iParam0->f_7[1 /*2*/].f_1, iParam0->f_7[2 /*2*/].f_1, iParam0->f_7[iVar14 /*2*/].f_1, uVar12[0], uVar12[1], uVar12[2], uVar12[iVar14], 0f, 0f, -10, sVar11, &uVar13, 1, 0, 0, "GB_CHAL_END" /* GXT: CHALLENGE END */, 3, 0, 0, 0);
			}
			else
			{
				__LIB_34__::func_374(iParam0->f_7[0 /*2*/].f_1, iParam0->f_7[1 /*2*/].f_1, iParam0->f_7[2 /*2*/].f_1, uVar12[0], uVar12[1], uVar12[2], 0f, 0f, -10, sVar11, &uVar13, 1, 0, 0, "", 3, 0, 0, 0);
			}
		}
	}
	return 0;
}

Vector3 func_1275(bool bParam0)//Position - 0x96BB8
{
	struct<3> Var0;
	if (HUD::DOES_BLIP_EXIST(Global_2678393[bParam0]))
	{
		Var0 = { __LIB_1__::func_293(Global_2678393[bParam0]) };
	}
	else if (HUD::DOES_BLIP_EXIST(Global_2678393.f_33[bParam0]) && !bParam0 == Global_2703735)
	{
		Var0 = { __LIB_1__::func_293(Global_2678393.f_33[bParam0]) };
	}
	if (SYSTEM::VMAG(Var0) > 0f)
	{
		return Var0;
	}
	return func_1276(bParam0);
}

Vector3 func_1276(bool bParam0)//Position - 0x96C2C
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	if (Global_2676198)
	{
		if (__LIB_2__::func_212(bParam0))
		{
			Var1 = { __LIB_2__::func_211(bParam0) };
			if (SYSTEM::VMAG(Var1) > 0f)
			{
				return Var1;
			}
		}
		if (Global_2689235[bParam0 /*453*/].f_71.f_11)
		{
			if (SYSTEM::VMAG(Global_2689235[bParam0 /*453*/].f_71.f_12) > 0f)
			{
				return Global_2689235[bParam0 /*453*/].f_71.f_12;
			}
		}
	}
	if (Global_1853348[bParam0 /*834*/].f_267.f_32 > 0)
	{
		Var1 = { __LIB_1__::func_986(__LIB_1__::func_987(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32)) };
		if (SYSTEM::VMAG(Var1) > 0f)
		{
			return Var1;
		}
	}
	else
	{
		func_1320(__LIB_1__::func_265(bParam0), &iVar0);
		if (iVar0 > 0)
		{
			Var1 = { __LIB_1__::func_986(__LIB_1__::func_987(iVar0)) };
			if (SYSTEM::VMAG(Var1) > 0f)
			{
				return Var1;
			}
		}
	}
	if (__LIB_4__::func_681(bParam0))
	{
		Var1 = { func_1279(bParam0) };
		if (SYSTEM::VMAG(Var1) > 0f)
		{
			return Var1;
		}
	}
	if (__LIB_4__::func_920(bParam0))
	{
		iVar2 = __LIB_2__::func_237(bParam0);
		if (iVar2 > -1)
		{
			Var1 = { Global_1946250.f_533[iVar2 /*3*/] };
			if (SYSTEM::VMAG(Var1) > 0f)
			{
				return Var1;
			}
		}
	}
	if (!Global_2676198)
	{
		if (__LIB_2__::func_212(bParam0))
		{
			Var1 = { __LIB_2__::func_211(bParam0) };
			if (SYSTEM::VMAG(Var1) > 0f)
			{
				return Var1;
			}
		}
		if (Global_2689235[bParam0 /*453*/].f_71.f_11)
		{
			if (SYSTEM::VMAG(Global_2689235[bParam0 /*453*/].f_71.f_12) > 0f)
			{
				return Global_2689235[bParam0 /*453*/].f_71.f_12;
			}
		}
	}
	return __LIB_1__::func_265(bParam0);
}

Vector3 func_1279(bool bParam0)//Position - 0x96E64
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
	if (bParam0 == __LIB_0__::func_160())
	{
	}
	if (__LIB_3__::func_942(bParam0))
	{
		iVar0 = __LIB_2__::func_208(bParam0);
		if (iVar0 != __LIB_0__::func_160())
		{
			if (!__LIB_1__::func_251(iVar0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_2703735.f_239[iVar0 /*3*/][1]))
				{
					return ENTITY::GET_ENTITY_COORDS(Global_2703735.f_239[iVar0 /*3*/][1], false);
				}
				else
				{
					return Global_2689235[__LIB_2__::func_208(bParam0) /*453*/].f_318.f_11;
				}
			}
			else
			{
				iVar1 = __LIB_2__::func_210(iVar0);
				if (!iVar1 == -1)
				{
					return Global_1946250.f_533[iVar1 /*3*/];
				}
			}
		}
	}
	else if (__LIB_4__::func_941(bParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_2815059.f_307))
		{
			return ENTITY::GET_ENTITY_COORDS(Global_2815059.f_307, false);
		}
	}
	else if (__LIB_3__::func_929(bParam0) && !__LIB_6__::func_349(bParam0))
	{
		iVar2 = Global_2689235[bParam0 /*453*/].f_318.f_9;
		if (iVar2 != __LIB_0__::func_160())
		{
			iVar3 = __LIB_2__::func_210(iVar2);
			if (!iVar3 == -1)
			{
				return Global_1946250.f_533[iVar3 /*3*/];
			}
		}
	}
	else if (__LIB_3__::func_930(bParam0) && !__LIB_6__::func_514(bParam0))
	{
		if (__LIB_4__::func_681(bParam0) && __LIB_1__::func_291())
		{
			return Global_1946250.f_533[Global_2689235[bParam0 /*453*/].f_318.f_6 /*3*/];
		}
		iVar4 = Global_2689235[bParam0 /*453*/].f_318.f_9;
		if (iVar4 != __LIB_0__::func_160())
		{
			if (__LIB_1__::func_233(iVar4))
			{
				iVar5 = __LIB_6__::func_933(iVar4);
				if (iVar5 != -1)
				{
					return Global_1946250.f_533[iVar5 /*3*/];
				}
			}
		}
	}
	else if (__LIB_3__::func_925(bParam0))
	{
		iVar6 = __LIB_2__::func_208(bParam0);
		if (iVar6 != __LIB_0__::func_160())
		{
			if (!__LIB_1__::func_237(iVar6))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_2703735.f_336[iVar6]))
				{
					return ENTITY::GET_ENTITY_COORDS(Global_2703735.f_336[iVar6], false);
				}
				else
				{
					return Global_2689235[__LIB_2__::func_208(bParam0) /*453*/].f_318.f_18;
				}
			}
			else
			{
				iVar7 = __LIB_6__::func_933(iVar6);
				if (!iVar7 == -1)
				{
					return Global_1946250.f_533[iVar7 /*3*/];
				}
			}
		}
	}
	else if (__LIB_4__::func_424(bParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_2815059.f_309))
		{
			return ENTITY::GET_ENTITY_COORDS(Global_2815059.f_309, false);
		}
	}
	else if (__LIB_4__::func_22(bParam0) && !__LIB_4__::func_388(bParam0))
	{
		iVar8 = Global_2689235[bParam0 /*453*/].f_318.f_9;
		if (iVar8 != __LIB_0__::func_160())
		{
			if (__LIB_1__::func_186(iVar8))
			{
				iVar9 = __LIB_2__::func_209(iVar8);
				if (iVar9 != -1)
				{
					return __LIB_1__::func_290(iVar9);
				}
			}
		}
	}
	else if (__LIB_4__::func_22(bParam0) && !__LIB_4__::func_388(bParam0))
	{
		iVar10 = Global_2689235[bParam0 /*453*/].f_318.f_9;
		if (iVar10 != __LIB_0__::func_160())
		{
			if (__LIB_1__::func_235(iVar10))
			{
				iVar11 = __LIB_6__::func_932(iVar10);
				if (iVar11 != -1)
				{
					return Global_1946250.f_533[iVar11 /*3*/];
				}
			}
		}
	}
	else if (__LIB_4__::func_21(bParam0, 0))
	{
		iVar12 = __LIB_2__::func_208(bParam0);
		if (iVar12 != __LIB_0__::func_160())
		{
			if (!__LIB_1__::func_229(iVar12))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_2703735.f_369[iVar12]))
				{
					return ENTITY::GET_ENTITY_COORDS(Global_2703735.f_369[iVar12], false);
				}
				else
				{
					return Global_1892703[__LIB_2__::func_208(bParam0) /*599*/].f_584;
				}
			}
			else
			{
				iVar13 = __LIB_6__::func_932(iVar12);
				if (!iVar13 == -1)
				{
					return Global_1946250.f_533[iVar13 /*3*/];
				}
			}
		}
	}
	else if (__LIB_4__::func_6(bParam0))
	{
		return -366.7f, -1909.6f, 20f;
	}
	else if (__LIB_4__::func_14(bParam0))
	{
		iVar14 = func_1285(bParam0);
		if (iVar14 != __LIB_0__::func_160())
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_2703735.f_402[iVar14]))
			{
				return ENTITY::GET_ENTITY_COORDS(Global_2703735.f_402[iVar14], false);
			}
			else
			{
				return Global_1911933[iVar14 /*260*/].f_51;
			}
		}
		else
		{
			return 0f, 0f, 0f;
		}
	}
	if (__LIB_4__::func_22(bParam0))
	{
		return __LIB_1__::func_290(Global_2689235[bParam0 /*453*/].f_318.f_6);
	}
	if (__LIB_8__::func_199(bParam0))
	{
		return 965.8165f, 42.25042f, 122.1267f;
	}
	return Global_1946250.f_533[Global_2689235[bParam0 /*453*/].f_318.f_6 /*3*/];
}

bool func_1285(bool bParam0)//Position - 0x97424
{
	int iVar0;
	if (bParam0 == __LIB_0__::func_160())
	{
		return bParam0;
	}
	if (__LIB_3__::func_977(bParam0) != -1)
	{
		iVar0 = __LIB_0__::func_170(__LIB_3__::func_977(bParam0));
		if ((iVar0 == 2 || iVar0 == 1) || iVar0 == 0)
		{
			if (__LIB_13__::func_258(bParam0, 0))
			{
				return __LIB_2__::func_191(bParam0);
			}
			return bParam0;
		}
		else if (iVar0 == 3)
		{
			return __LIB_0__::func_160();
		}
		return Global_2689235[bParam0 /*453*/].f_318.f_9;
	}
	return __LIB_0__::func_160();
}

void func_1320(struct<3> Param0, var uParam1)//Position - 0x97F3A
{
	int iVar0;
	int iVar1;
	iVar0 = 1;
	iVar1 = 7;
	while (iVar0 <= iVar1)
	{
		if (func_1321(Param0, iVar0, 0))
		{
			*uParam1 = iVar0;
			return;
		}
		iVar0++;
	}
	iVar0 = 34;
	iVar1 = 43;
	while (iVar0 <= iVar1)
	{
		if (func_1321(Param0, iVar0, 0))
		{
			*uParam1 = iVar0;
			return;
		}
		iVar0++;
	}
	iVar0 = 61;
	iVar1 = 65;
	while (iVar0 <= iVar1)
	{
		if (func_1321(Param0, iVar0, 0))
		{
			*uParam1 = iVar0;
			return;
		}
		iVar0++;
	}
	iVar0 = 8;
	if (func_1321(Param0, iVar0, 0))
	{
		if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32 > 0)
		{
			*uParam1 = Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32;
		}
		else if (Global_2666811.f_1 > 0)
		{
			*uParam1 = Global_2666811.f_1;
		}
		else
		{
			*uParam1 = iVar0;
		}
		return;
	}
	iVar0 = 17;
	if (func_1321(Param0, iVar0, 0))
	{
		if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32 > 0)
		{
			*uParam1 = Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32;
		}
		else if (Global_2666811.f_1 > 0)
		{
			*uParam1 = Global_2666811.f_1;
		}
		else
		{
			*uParam1 = iVar0;
		}
		return;
	}
}

int func_1321(struct<3> Param0, int iParam1, float fParam2)//Position - 0x9807F
{
	int iVar0;
	struct<3> Var1[3];
	struct<3> Var2[3];
	int iVar3;
	if (iParam1 != 999)
	{
		iVar3 = 0;
		while (iVar3 < 3)
		{
			if (Global_1312193[iParam1 /*1951*/].f_146.f_57[iVar3 /*8*/].f_2 > Global_1312193[iParam1 /*1951*/].f_146.f_57[iVar3 /*8*/].f_3.f_2)
			{
				Var1[iVar3 /*3*/] = { Global_1312193[iParam1 /*1951*/].f_146.f_57[iVar3 /*8*/] };
				Var2[iVar3 /*3*/] = { Global_1312193[iParam1 /*1951*/].f_146.f_57[iVar3 /*8*/].f_3 };
			}
			else
			{
				Var1[iVar3 /*3*/] = { Global_1312193[iParam1 /*1951*/].f_146.f_57[iVar3 /*8*/].f_3 };
				Var2[iVar3 /*3*/] = { Global_1312193[iParam1 /*1951*/].f_146.f_57[iVar3 /*8*/] };
			}
			Var1[iVar3 /*3*/].f_2 = (Var1[iVar3 /*3*/].f_2 + fParam2);
			Var2[iVar3 /*3*/].f_2 = (Var2[iVar3 /*3*/].f_2 - fParam2);
			iVar3++;
		}
		if (((Global_1312193[iParam1 /*1951*/].f_146.f_57[0 /*8*/].f_6 != 0f && OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var2[0 /*3*/], Var1[0 /*3*/], Global_1312193[iParam1 /*1951*/].f_146.f_57[0 /*8*/].f_6, false, true)) || (Global_1312193[iParam1 /*1951*/].f_146.f_57[1 /*8*/].f_6 != 0f && OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var2[1 /*3*/], Var1[1 /*3*/], Global_1312193[iParam1 /*1951*/].f_146.f_57[1 /*8*/].f_6, false, true))) || (Global_1312193[iParam1 /*1951*/].f_146.f_57[2 /*8*/].f_6 != 0f && OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var2[2 /*3*/], Var1[2 /*3*/], Global_1312193[iParam1 /*1951*/].f_146.f_57[2 /*8*/].f_6, false, true)))
		{
			return 1;
		}
	}
	else
	{
		iVar0 = 1;
		while (iVar0 <= 7)
		{
			if (func_1321(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 34;
		while (iVar0 <= 43)
		{
			if (func_1321(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 61;
		while (iVar0 <= 65)
		{
			if (func_1321(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 73;
		while (iVar0 <= 76)
		{
			if (func_1321(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 77;
		while (iVar0 <= 82)
		{
			if (func_1321(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 83;
		while (iVar0 <= 85)
		{
			if (func_1321(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 87;
		while (iVar0 <= 90)
		{
			if (func_1321(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 91;
		while (iVar0 <= 102)
		{
			if (func_1321(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 103;
		while (iVar0 <= 113)
		{
			if (func_1321(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		if (func_1321(Param0, 8, fParam2))
		{
			return 1;
		}
		if (func_1321(Param0, 17, fParam2))
		{
			return 1;
		}
	}
	return 0;
}

void func_1331(int* iParam0, var uParam1)//Position - 0x99408
{
	bool bVar0;
	int iVar1;
	if (uParam1->f_2[0] >= 0 && !BitTest(*iParam0, 1))
	{
		iVar1 = PLAYER::INT_TO_PARTICIPANTINDEX(uParam1->f_2[0]);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar1))
		{
			bVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar1);
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bVar0))
			{
				func_1332("GB_P2P_WT0" /* GXT: ~a~ got to the destination first. */, bVar0, 0, 0, 0, 1, 0);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Boss_Message_Orange", "GTAO_Biker_FM_Soundset", false);
			}
		}
		if (uParam1->f_2[0] == NETWORK::PARTICIPANT_ID())
		{
			__LIB_1__::func_444();
			func_1052(0, PLAYER::PLAYER_PED_ID(), "", joaat("XPTYPE_SKILL"), joaat("XPCATEGORY_COLLECT_CHECKPOINT"), Global_262145.f_18895 /* Tunable: BIKER_RACE_RP_REWARD */, 1, -1, 0, 0, 0);
		}
		MISC::SET_BIT(iParam0, 1);
	}
}

int func_1332(char* sParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x994A8
{
	int iVar0;
	int iVar1;
	struct<16> Var2;
	bool bVar3;
	bool bVar4;
	iVar0 = -1;
	iVar1 = PLAYER::GET_PLAYER_TEAM(bParam1);
	if (NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), bParam1) || iParam3)
	{
		if (!bParam2)
		{
			StringCopy(&Var2, PLAYER::GET_PLAYER_NAME(bParam1), 64);
		}
		else
		{
			StringCopy(&Var2, PLAYER::GET_PLAYER_NAME(bParam1), 64);
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Var2))
		{
		}
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
		if ((iVar1 != -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iVar1 < 4)
		{
			if (Global_4718592.f_111249[iVar1] != -1)
			{
				HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(__LIB_26__::func_802(iVar1, bParam1, 0));
			}
			else
			{
				HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_914(bParam1, -2, 1, 0, 0));
			}
		}
		else
		{
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_914(bParam1, -2, 1, 0, 0));
		}
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(__LIB_6__::func_957(&Var2));
		if (!bParam4)
		{
			iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
		}
		else
		{
			Global_2787505 = { __LIB_1__::func_267(bParam1) };
			if (NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2787435, 35, &Global_2787505))
			{
				bVar3 = false;
				if (MISC::ARE_STRINGS_EQUAL(&(Global_2787435.f_22), "Leader") && Global_2787435.f_30 == 0)
				{
					bVar3 = true;
				}
				if (Global_2787435.f_21 > 0)
				{
					bVar4 = false;
				}
				else
				{
					bVar4 = true;
				}
				if (bParam5)
				{
					if (bParam6)
					{
						Var2 = { __LIB_2__::func_40(&Var2) };
					}
					iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_CREWTAG_WITH_GAME_NAME(bVar4, NETWORK::NETWORK_CLAN_IS_ROCKSTAR_CLAN(&Global_2787435, 35), &(Global_2787435.f_17), Global_2787435.f_30, bVar3, false, Global_2787435, &Var2, Global_1576215, Global_1576216, Global_1576217);
				}
				else
				{
					iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_CREWTAG(bVar4, NETWORK::NETWORK_CLAN_IS_ROCKSTAR_CLAN(&Global_2787435, 35), &(Global_2787435.f_17), Global_2787435.f_30, bVar3, false, Global_2787435, Global_1576215, Global_1576216, Global_1576217);
				}
			}
			else
			{
				iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
			}
		}
		__LIB_18__::func_263(14, sParam0, 1, &Var2, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_1335(int iParam0)//Position - 0x996A8
{
	MISC::CLEAR_BIT(&uLocal_149, iParam0);
}

bool func_1336(int iParam0)//Position - 0x996B9
{
	return BitTest(uLocal_150, iParam0);
}

void func_1337(int iParam0)//Position - 0x996C7
{
	int iVar0;
	if (__LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (func_1339())
		{
			iVar0 = func_1340();
			if (iParam0 > iVar0)
			{
				iParam0 = iVar0;
			}
		}
		func_1338(1);
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), iParam0, false);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
	}
}

void func_1338(bool bParam0)//Position - 0x9970D
{
	if (bParam0)
	{
		if (!Global_1951100)
		{
			Global_1951100 = 1;
		}
	}
	else if (Global_1951100)
	{
		Global_1951100 = 0;
	}
}

bool func_1339()//Position - 0x99736
{
	switch (func_330())
	{
		case 1:
			return Global_262145.f_18549 /* Tunable: BIKER_SELL_EASY_WANTED_CAP */ < 5;
		case 2:
			return Global_262145.f_18550 /* Tunable: BIKER_SELL_MEDIUM_WANTED_CAP */ < 5;
		default:
	}
	return Global_262145.f_18551 /* Tunable: BIKER_SELL_HARD_WANTED_CAP */ < 5;
}

int func_1340()//Position - 0x99774
{
	if (func_17())
	{
		return Global_262145.f_18549 /* Tunable: BIKER_SELL_EASY_WANTED_CAP */;
	}
	if (func_1339())
	{
		switch (func_330())
		{
			case 1:
				return Global_262145.f_18549 /* Tunable: BIKER_SELL_EASY_WANTED_CAP */;
			case 2:
				return Global_262145.f_18550 /* Tunable: BIKER_SELL_MEDIUM_WANTED_CAP */;
			}
		default:
	}
	return Global_262145.f_18551 /* Tunable: BIKER_SELL_HARD_WANTED_CAP */;
}

void func_1341(int iParam0)//Position - 0x997C4
{
	MISC::SET_BIT(&uLocal_151, iParam0);
}

bool func_1342(int iParam0)//Position - 0x997D5
{
	return BitTest(uLocal_151, iParam0);
}

void func_1343()//Position - 0x997E3
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	int iVar3;
	int iVar4;
	if (func_25() && func_1255())
	{
		bVar0 = func_65(PLAYER::PLAYER_ID());
		if (Local_133.f_12 == -1 && bVar0 != -1)
		{
			Local_133.f_12 = bVar0;
		}
		if (bVar0 != -1)
		{
			bVar1 = Local_183.f_175[bVar0];
			Var2 = { func_412(func_16(), bVar1, Local_183.f_679, bVar0, 0, 0) };
			if (!BitTest(Local_133.f_208, bVar1))
			{
				if (func_532(Var2, PLAYER::PLAYER_PED_ID(), 1))
				{
					if (func_44())
					{
						if (!__LIB_1__::func_298(PLAYER::PLAYER_ID(), 7))
						{
							if (!__LIB_1__::func_298(PLAYER::PLAYER_ID(), 6))
							{
								__LIB_9__::func_333(7);
							}
							func_1353(bVar0, bVar1, Local_183.f_983);
						}
						MISC::SET_BIT(&(Local_133.f_208), bVar1);
					}
					else
					{
						func_1353(bVar0, bVar1, Local_183.f_983);
						MISC::SET_BIT(&(Local_133.f_208), bVar1);
					}
					func_1207();
					if (func_1352() || func_44())
					{
						HUD::FLASH_MINIMAP_DISPLAY();
						if (!func_44())
						{
							__LIB_18__::func_437(func_1351(), 0);
						}
						if (!BitTest(Local_133.f_209, bVar0))
						{
							if (__LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
								iVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
								if (ENTITY::DOES_ENTITY_EXIST(iVar3) && !ENTITY::IS_ENTITY_DEAD(iVar3, false))
								{
									if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar3, -1, false) == PLAYER::PLAYER_PED_ID())
									{
										MISC::SET_BIT(&(Local_133.f_209), bVar0);
									}
								}
							}
						}
					}
				}
			}
			if (BitTest(Local_133.f_209, bVar0))
			{
				if (__LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iVar4 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (ENTITY::DOES_ENTITY_EXIST(iVar4) && !ENTITY::IS_ENTITY_DEAD(iVar4, false))
					{
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar4, -1, false) == PLAYER::PLAYER_PED_ID())
						{
							if (__LIB_6__::func_762(iVar4, 1093140480, 1, 1056964608, 0, 1, 0))
							{
								MISC::CLEAR_BIT(&(Local_133.f_209), bVar0);
							}
						}
						else
						{
							MISC::CLEAR_BIT(&(Local_133.f_209), bVar0);
						}
					}
					else
					{
						MISC::CLEAR_BIT(&(Local_133.f_209), bVar0);
					}
				}
				else
				{
					MISC::CLEAR_BIT(&(Local_133.f_209), bVar0);
				}
			}
		}
		if (bVar0 == -1 || (bVar0 != -1 && Local_183.f_124[bVar0] >= func_1349(bVar0)))
		{
			if (__LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1))
			{
				func_1348(19);
				func_1344(0);
				PED::RESET_PED_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID(), 0.25f);
				if (__LIB_25__::func_111(PLAYER::PLAYER_PED_ID(), 2, -1))
				{
					func_624(PLAYER::PLAYER_PED_ID(), 2, -1, -1);
				}
			}
		}
	}
}

void func_1344(bool bParam0)//Position - 0x99A45
{
	if (bParam0)
	{
		if (!__LIB_1__::func_909())
		{
			__LIB_18__::func_369(1, -1);
		}
	}
	else if (__LIB_1__::func_909())
	{
		__LIB_18__::func_369(0, -1);
	}
}

void func_1348(int iParam0)//Position - 0x99AEB
{
	MISC::CLEAR_BIT(&(Local_184[NETWORK::PARTICIPANT_ID_TO_INT() /*29*/].f_2), iParam0);
}

int func_1349(bool bParam0)//Position - 0x99B04
{
	int iVar0;
	iVar0 = 1;
	if (func_15())
	{
		iVar0 = 3;
	}
	else if (func_23())
	{
		iVar0 = func_234(bParam0);
	}
	return iVar0;
}

char* func_1351()//Position - 0x99B65
{
	switch (func_16())
	{
		case 12:
			if (Local_183.f_123 == 0)
			{
				return "SBIKER_CLB1" /* GXT: You delivered Product to the 1st drop-off. */;
			}
			else if (Local_183.f_123 == 1)
			{
				return "SBIKER_CLB2" /* GXT: You delivered Product to the 2nd drop-off. */;
			}
			else if (Local_183.f_123 == 2)
			{
				return "SBIKER_CLB3" /* GXT: You delivered Product to the final drop-off. */;
			}
			break;
		case 4:
			return "SBIKER_TFIN" /* GXT: You delivered to a buyer. */;
			break;
		case 10:
			return "SBIKER_TBG" /* GXT: You delivered the Product to the drop-off */;
			break;
	}
	return "";
}

int func_1352()//Position - 0x99BDC
{
	switch (func_16())
	{
		case 12:
		case 4:
		case 10:
			return 1;
			break;
	}
	return 0;
}

void func_1353(bool bParam0, bool bParam1, var uParam2)//Position - 0x99C07
{
	struct<5> Var0;
	int iVar1;
	Var0.f_0 = -396343788;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = bParam0;
	Var0.f_3 = bParam1;
	Var0.f_4 = uParam2;
	iVar1 = __LIB_4__::func_511(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 5, iVar1);
	}
}

void func_1354()//Position - 0x99C49
{
	if (func_253())
	{
		if (func_1191() || func_1356())
		{
			if (Global_1577912 == 0)
			{
				Global_1577912 = 1;
				func_1355(1);
			}
		}
		else if (Global_1577912)
		{
			Global_1577912 = 0;
			func_1355(0);
		}
	}
}

void func_1355(bool bParam0)//Position - 0x99C8F
{
	if (bParam0)
	{
		if (!Global_2725439.f_302)
		{
			Global_2725439.f_302 = 1;
		}
	}
	else if (Global_2725439.f_302)
	{
		Global_2725439.f_302 = 0;
	}
}

int func_1356()//Position - 0x99CC4
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < func_14())
	{
		if (func_475(iVar0, 1))
		{
			if (func_1241(iVar0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_1357()//Position - 0x99CFA
{
	if ((func_367() || func_27()) || func_17())
	{
		if (func_1339())
		{
			if (PLAYER::GET_MAX_WANTED_LEVEL() > func_1340())
			{
				PLAYER::SET_MAX_WANTED_LEVEL(func_1340());
			}
		}
	}
}

void func_1358()//Position - 0x99D37
{
	if (func_17())
	{
		if (func_62(10))
		{
			if (func_1191())
			{
				__LIB_1__::func_447(57);
			}
			else
			{
				__LIB_1__::func_447(71);
			}
		}
	}
}

void func_1359()//Position - 0x99D65
{
	if (!BitTest(Local_133.f_23, 0))
	{
		if (__LIB_0__::func_649(&(Local_183.f_10)))
		{
			if (__LIB_2__::func_47(&(Local_183.f_10), 30000, 0))
			{
				if (Local_133.f_19 > 0 && Local_133.f_19 <= 5000)
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "5s", "MP_MISSION_COUNTDOWN_SOUNDSET", false);
					MISC::SET_BIT(&(Local_133.f_23), 0);
				}
			}
		}
	}
}

void func_1360()//Position - 0x99DC2
{
	if (func_499())
	{
		switch (func_16())
		{
			case 0:
				if (!func_63(NETWORK::PARTICIPANT_ID(), 7))
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_59[0]))
					{
						if (__LIB_2__::func_63(Local_183.f_59[0]))
						{
							if (__LIB_0__::func_529(func_13(0), func_363(0, 0, Local_183.f_110, Local_183.f_957, 0), 1) > 200f)
							{
								func_531(7);
							}
						}
					}
				}
				break;
			}
	}
}

void func_1362()//Position - 0x99E72
{
	bool bVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	if (func_347() && !func_63(NETWORK::PARTICIPANT_ID(), 2))
	{
		fVar2 = 50f;
		fVar3 = 100f;
		switch (func_16())
		{
			case 6:
				bVar0 = false;
				while (bVar0 < func_14())
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_59[bVar0]))
					{
						if (func_66(bVar0))
						{
							iVar4 = func_1363(0);
							if (iVar4 != -1)
							{
								fVar1 = __LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iVar4, 1);
							}
							else
							{
								fVar1 = __LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), func_13(bVar0), 1);
							}
							if (fVar1 < fVar2)
							{
								if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
								{
									func_531(2);
								}
							}
							else if (fVar1 < fVar3)
							{
								if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) && !WEAPON::IS_PED_CURRENT_WEAPON_SILENCED(PLAYER::PLAYER_PED_ID()))
								{
									func_531(2);
								}
							}
						}
					}
					bVar0++;
				}
				break;
			}
	}
}

int func_1363(int iParam0)//Position - 0x99F4D
{
	bool bVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	fVar1 = 9999.99f;
	iVar3 = -1;
	if (func_347())
	{
		bVar0 = false;
		while (bVar0 < func_246())
		{
			if (!PED::IS_PED_INJURED(func_522(bVar0)) || iParam0)
			{
				fVar2 = __LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), func_522(bVar0), 1);
				if (fVar2 < fVar1)
				{
					fVar1 = fVar2;
					iVar3 = func_522(bVar0);
				}
			}
			bVar0++;
		}
	}
	return iVar3;
}

void func_1364()//Position - 0x99FB8
{
	struct<3> Var0;
	if (func_25())
	{
		if (func_63(NETWORK::PARTICIPANT_ID(), 19))
		{
			if (!func_1336(21) && !__LIB_6__::func_984(PLAYER::PLAYER_ID()))
			{
				Var0 = { __LIB_4__::func_771(Local_183.f_0) };
				if (SYSTEM::VDIST2(Var0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false)) > 2500f)
				{
					__LIB_21__::func_125(1);
					__LIB_29__::func_82(21);
					if (!func_1336(22))
					{
						func_479(1);
						__LIB_29__::func_82(22);
					}
				}
			}
		}
		else if (func_1336(5))
		{
			__LIB_21__::func_125(0);
			func_1229(21);
		}
	}
}

void func_1367()//Position - 0x9A097
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	bool bVar10;
	bool bVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	iVar0 = 1;
	Local_133.f_19 = func_1384();
	if (__LIB_22__::func_204(1) && Local_133.f_19 < func_237())
	{
		__LIB_1__::func_428();
		if (__LIB_0__::func_649(&(Local_183.f_697)))
		{
			__LIB_0__::func_580(&(Local_133.f_242), 0, 0);
			__LIB_8__::func_79((20000 - func_1377()), 20000, "SCONTRA_REPAIR" /* GXT: REPAIRING */, 6, -1, 5, -1082130432, -1082130432, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1, 0, -1, 1);
		}
		else if (__LIB_0__::func_649(&(Local_133.f_242)))
		{
			if (__LIB_2__::func_47(&(Local_133.f_242), 22000, 0))
			{
				__LIB_0__::func_579(&(Local_133.f_242));
			}
			else
			{
				__LIB_8__::func_79(20000, 20000, "SCONTRA_REPAIR" /* GXT: REPAIRING */, 6, -1, 5, -1082130432, -1082130432, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1, 0, -1, 1);
			}
		}
		if (Local_133.f_19 <= 30000)
		{
			iVar0 = 6;
		}
		func_1375();
		if (func_1374())
		{
			if (func_1373())
			{
				if (func_45())
				{
					bVar2 = func_1230();
					if (bVar2 != -1)
					{
						if (!func_12(bVar2) && func_66(bVar2))
						{
							iVar1 = 5;
							if (func_366())
							{
								iVar1 = 7;
							}
							iVar3 = func_234(-1);
							iVar4 = (iVar3 - Local_183.f_124[bVar2]);
							__LIB_6__::func_888(iVar4, "BSELL_PRODHELD" /* GXT: CARRYING */, -1, 1, iVar1, 0, 0, 1, 0, 0, 0, 0, 0, 0, -1);
						}
					}
				}
				else if (!func_230(0))
				{
					iVar1 = 5;
					if (func_366())
					{
						iVar1 = 7;
					}
					iVar5 = func_234(-1);
					iVar6 = (iVar5 - Local_183.f_122);
					__LIB_6__::func_888(iVar6, "BSELL_PRODHELD" /* GXT: CARRYING */, -1, 1, iVar1, 0, 0, 1, 0, 0, 0, 0, 0, 0, -1);
				}
			}
			else if (func_25())
			{
				if (func_1255())
				{
					bVar7 = func_65(PLAYER::PLAYER_ID());
					if (bVar7 != -1)
					{
						if (!func_12(bVar7))
						{
							iVar1 = 5;
							iVar8 = func_234(-1);
							iVar9 = (iVar8 - Local_183.f_124[bVar7]);
							__LIB_6__::func_888(iVar9, "BSELL_PRODHELD" /* GXT: CARRYING */, -1, 1, iVar1, 0, 0, 1, 0, 0, 0, 0, 0, 0, -1);
						}
					}
				}
			}
			iVar1 = 4;
			if (func_366())
			{
				iVar1 = 6;
			}
			__LIB_2__::func_295(func_956(), func_1371(), "SCONTRA_HUD_SC" /* GXT: DELIVERIES MADE */, -1, 1, iVar1, 0, 0, 0, 0, 0, 1, 1, 0, 255, 0);
		}
		if (func_366())
		{
			if (func_1191() || func_1356())
			{
				bVar10 = func_1230();
				if (bVar10 != -1)
				{
					bVar11 = func_1230();
					if (func_1192(bVar11, 1))
					{
						iVar12 = (func_1369() - __LIB_1__::func_295(&(Local_184[NETWORK::PARTICIPANT_ID_TO_INT() /*29*/].f_16[bVar10 /*2*/]), 0, 0));
					}
					else
					{
						if (func_476(bVar11) != __LIB_0__::func_160())
						{
							iVar13 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(func_476(bVar11));
						}
						if (iVar13 != -1)
						{
							iVar12 = (func_1369() - __LIB_1__::func_295(&(Local_184[iVar13 /*29*/].f_16[bVar10 /*2*/]), 0, 0));
						}
					}
					if (Local_183.f_893[bVar11] > 0)
					{
						iVar14 = 1;
						if (iVar12 < 0)
						{
							iVar12 = 0;
							iVar14 = 6;
						}
						__LIB_6__::func_929(iVar12, "BIKESELL_BPTR" /* GXT: CHECKPOINT TIME */, 0, 0, -1, 0, 5, 0, iVar14, 0, 0, 0, 0, 0, 0, 0, 0, -1);
					}
					__LIB_6__::func_986(Local_183.f_893[bVar11], "SCONTRA_HUD_DMG" /* GXT: DELIVERY BONUS */, -1, 109, 4, 0, "HUD_CASH" /* GXT: $~1~ */, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
				}
			}
		}
		__LIB_6__::func_929(Local_133.f_19, "SCONTRA_TIMER" /* GXT: TIME REMAINING */, 0, 0, -1, 0, 3, 0, iVar0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
	}
}

int func_1369()//Position - 0x9A433
{
	if (func_245())
	{
		switch (Local_183.f_679)
		{
			case 0:
				return (1000 * Global_262145.f_18584 /* Tunable: 1255192068 */);
			case 1:
				return (1000 * Global_262145.f_18585 /* Tunable: -1843805931 */);
			case 2:
				return (1000 * Global_262145.f_18586 /* Tunable: -2086582988 */);
			case 3:
				return (1000 * Global_262145.f_18587 /* Tunable: -151354771 */);
			case 4:
				return (1000 * Global_262145.f_18588 /* Tunable: 784150240 */);
			default:
		}
	}
	else
	{
		switch (Local_183.f_679)
		{
			case 0:
				return (1000 * Global_262145.f_18589 /* Tunable: -902635950 */);
			case 1:
				return (1000 * Global_262145.f_18590 /* Tunable: 1038995433 */);
			case 2:
				return (1000 * Global_262145.f_18591 /* Tunable: 1433328278 */);
			case 3:
				return (1000 * Global_262145.f_18592 /* Tunable: -728546323 */);
			case 4:
				return (1000 * Global_262145.f_18593 /* Tunable: 1933500010 */);
			}
		default:
	}
	return 30000;
}

int func_1371()//Position - 0x9A680
{
	bool bVar0;
	int iVar1;
	if (func_18() || func_17())
	{
		return func_14();
	}
	if (func_25())
	{
		if (func_15() || func_23())
		{
			iVar1 = func_73(-1);
		}
		else
		{
			iVar1 = (func_24() - Local_183.f_167);
		}
	}
	else if (func_19())
	{
		if (func_45())
		{
			bVar0 = false;
			while (bVar0 < func_14())
			{
				iVar1 = (iVar1 + Local_183.f_124[bVar0]);
				if (!BitTest(Local_183.f_133, bVar0))
				{
					iVar1 = (iVar1 + (func_234(-1) - Local_183.f_124[bVar0]));
				}
				if (func_66(bVar0))
				{
					iVar1 = (iVar1 - Local_183.f_168[bVar0]);
				}
				bVar0++;
			}
		}
		else
		{
			iVar1 = func_231();
		}
	}
	else if (func_45())
	{
		bVar0 = false;
		while (bVar0 < func_14())
		{
			iVar1 = (iVar1 + Local_183.f_124[bVar0]);
			if (!BitTest(Local_183.f_133, bVar0) && !BitTest(Local_183.f_166, bVar0))
			{
				iVar1 = (iVar1 + (func_234(-1) - Local_183.f_124[bVar0]));
			}
			bVar0++;
		}
	}
	else
	{
		iVar1 = func_231();
	}
	return iVar1;
}

int func_1373()//Position - 0x9A8EB
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < func_14())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_59[iVar0]))
		{
			if (__LIB_2__::func_15(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_183.f_59[iVar0]), 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_1374()//Position - 0x9A936
{
	switch (func_16())
	{
		case 1:
		case 6:
		case 2:
		case 3:
		case 5:
		case 4:
		case 9:
		case 8:
		case 11:
		case 10:
		case 12:
			return 1;
		case 0:
			if (func_45())
			{
				return 1;
			}
			return 0;
		default:
	}
	return 0;
}

void func_1375()//Position - 0x9A9A3
{
	int iVar0;
	int iVar1;
	if (func_6())
	{
		if (__LIB_0__::func_649(&(Local_183.f_959)))
		{
			if (!__LIB_2__::func_47(&(Local_183.f_959), func_483(), 0))
			{
				iVar0 = (func_483() - __LIB_1__::func_295(&(Local_183.f_959), 0, 0));
				if (iVar0 > 10000)
				{
					iVar1 = 1;
				}
				else
				{
					iVar1 = 6;
				}
				if (iVar0 > 0)
				{
					__LIB_6__::func_929(iVar0, "BYCB_GLBPNG" /* GXT: GLOBAL SIGNAL */, 0, 0, -1, 0, 13, 0, iVar1, 0, 0, 0, iVar1, 0, 0, 0, 0, -1);
				}
			}
		}
	}
}

int func_1377()//Position - 0x9ACB2
{
	int iVar0;
	iVar0 = (20000 - MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_183.f_697)));
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	else if (iVar0 > 20000)
	{
		iVar0 = 20000;
	}
	return iVar0;
}

int func_1384()//Position - 0x9AE2C
{
	int iVar0;
	iVar0 = (func_237() - MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_183.f_10)));
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	else if (iVar0 > func_237())
	{
		iVar0 = func_237();
	}
	return iVar0;
}

void func_1385(bool bParam0)//Position - 0x9AE69
{
	bool bVar0;
	if (!bParam0)
	{
		func_1443();
		func_1440();
		func_1432();
		func_1429();
		if (func_1428(0))
		{
			bVar0 = false;
			while (bVar0 < func_14())
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_59[bVar0]))
				{
					if (func_1427(bVar0))
					{
						func_1418(bVar0);
					}
				}
				bVar0++;
			}
		}
		else
		{
			if (func_1417())
			{
				func_1418(-1);
			}
			else
			{
				func_1416(0);
			}
			func_1415();
		}
	}
	else
	{
		func_1386();
	}
}

void func_1386()//Position - 0x9AEE5
{
	int iVar0;
	bool bVar1;
	func_1413();
	func_1416(1);
	func_1412();
	func_1411();
	func_1408(0);
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)))
		{
			bVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			func_1387(bVar1, 0);
		}
		iVar0++;
	}
}

void func_1387(bool bParam0, bool bParam1)//Position - 0x9AF32
{
	int iVar0;
	var uVar1;
	if (bParam1)
	{
		if (__LIB_1__::func_264(bParam0, 1, 1))
		{
			if (!__LIB_22__::func_680(bParam0))
			{
				__LIB_21__::func_122(bParam0, 0, 0);
				iVar0 = 9;
				uVar1 = __LIB_1__::func_48(iVar0);
				if (__LIB_13__::func_296(bParam0))
				{
					__LIB_34__::func_309(bParam0, uVar1, 1, 0);
				}
				__LIB_2__::func_314(bParam0, 1);
				if (__LIB_13__::func_295(bParam0))
				{
					if (!__LIB_13__::func_304(bParam0))
					{
						__LIB_20__::func_361(bParam0, 1, 1, 0);
					}
				}
				__LIB_34__::func_308(bParam0, __LIB_24__::func_818(), 1, 0);
				__LIB_21__::func_116(bParam0, 1f, 1, 0);
				__LIB_26__::func_791(bParam0, 0, 0);
			}
		}
	}
	else if (bParam0 != __LIB_0__::func_160())
	{
		if (__LIB_22__::func_680(bParam0))
		{
			if (__LIB_13__::func_296(bParam0))
			{
				__LIB_34__::func_309(bParam0, __LIB_1__::func_48(9), 0, 0);
			}
			__LIB_2__::func_314(bParam0, 0);
			if (__LIB_13__::func_295(bParam0))
			{
				__LIB_20__::func_361(bParam0, 0, 1, 0);
			}
			__LIB_34__::func_308(bParam0, __LIB_24__::func_818(), 0, 0);
			__LIB_21__::func_116(bParam0, 1f, 0, 0);
			__LIB_26__::func_791(bParam0, 0, 0);
		}
	}
}

void func_1408(bool bParam0)//Position - 0x9B6B8
{
	if (bParam0)
	{
		if (HUD::DOES_BLIP_EXIST(Local_133.f_228))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (!HUD::DOES_BLIP_HAVE_GPS_ROUTE(Local_133.f_228))
				{
					HUD::SET_BLIP_ROUTE(Local_133.f_228, true);
				}
			}
			else if (HUD::DOES_BLIP_HAVE_GPS_ROUTE(Local_133.f_228))
			{
				HUD::SET_BLIP_ROUTE(Local_133.f_228, false);
			}
		}
		else
		{
			Local_133.f_228 = HUD::ADD_BLIP_FOR_COORD(func_1410());
		}
	}
	else
	{
		func_1409();
	}
}

void func_1409()//Position - 0x9B71E
{
	if (HUD::DOES_BLIP_EXIST(Local_133.f_228))
	{
		HUD::REMOVE_BLIP(&(Local_133.f_228));
	}
}

Vector3 func_1410()//Position - 0x9B739
{
	if (!func_467())
	{
		return 2074.113f, 4772.455f, 40.2459f;
	}
	return -1156.0415f, -2740.3728f, 12.9525f;
}

void func_1411()//Position - 0x9B76A
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (HUD::DOES_BLIP_EXIST(Local_133.f_229[iVar0]))
		{
			HUD::REMOVE_BLIP(&(Local_133.f_229[iVar0]));
		}
		iVar0++;
	}
}

void func_1412()//Position - 0x9B79F
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (HUD::DOES_BLIP_EXIST(Local_133.f_212[iVar0]))
		{
			HUD::REMOVE_BLIP(&(Local_133.f_212[iVar0]));
		}
		iVar0++;
	}
}

void func_1413()//Position - 0x9B7D5
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < func_14())
	{
		func_1414(iVar0);
		iVar0++;
	}
}

void func_1414(bool bParam0)//Position - 0x9B7F8
{
	if (HUD::DOES_BLIP_EXIST(Local_133.f_151[bParam0]))
	{
		HUD::REMOVE_BLIP(&(Local_133.f_151[bParam0]));
	}
}

void func_1415()//Position - 0x9B81B
{
	if (!func_1250())
	{
		if (HUD::DOES_BLIP_EXIST(Local_133.f_156[Local_133.f_13]))
		{
			HUD::REMOVE_BLIP(&(Local_133.f_156[Local_133.f_13]));
		}
	}
}

void func_1416(bool bParam0)//Position - 0x9B84A
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < func_233())
	{
		if (HUD::DOES_BLIP_EXIST(Local_133.f_28[iVar0]))
		{
			HUD::REMOVE_BLIP(&(Local_133.f_28[iVar0]));
		}
		if (HUD::DOES_BLIP_EXIST(Local_133.f_59[iVar0]))
		{
			HUD::REMOVE_BLIP(&(Local_133.f_59[iVar0]));
		}
		if (bParam0)
		{
			if (HUD::DOES_BLIP_EXIST(Local_133.f_156[iVar0]))
			{
				HUD::REMOVE_BLIP(&(Local_133.f_156[iVar0]));
			}
		}
		iVar0++;
	}
}

int func_1417()//Position - 0x9B8BD
{
	bool bVar0;
	bVar0 = false;
	while (bVar0 < func_14())
	{
		if (!func_12(bVar0) && func_66(bVar0))
		{
			if (!func_31(bVar0))
			{
				return 0;
			}
		}
		bVar0++;
	}
	return 1;
}

void func_1418(bool bParam0)//Position - 0x9B8FE
{
	bool bVar0;
	struct<3> Var1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	struct<3> Var9;
	float fVar10;
	float fVar11;
	bool bVar12;
	bVar2 = (func_1426() || __LIB_0__::func_114());
	if (func_41() && !func_15())
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
		{
			if (HUD::DOES_BLIP_EXIST(Local_133.f_228))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (!HUD::DOES_BLIP_HAVE_GPS_ROUTE(Local_133.f_228))
					{
						HUD::SET_BLIP_ROUTE(Local_133.f_228, true);
					}
				}
				else if (HUD::DOES_BLIP_HAVE_GPS_ROUTE(Local_133.f_228))
				{
					HUD::SET_BLIP_ROUTE(Local_133.f_228, false);
				}
			}
			else if (func_27())
			{
				Local_133.f_228 = HUD::ADD_BLIP_FOR_COORD(func_413());
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_133.f_228, "SB_SELL_BMRBB" /* GXT: Drop-off */);
			}
			else
			{
				Local_133.f_228 = HUD::ADD_BLIP_FOR_COORD(func_1424());
			}
		}
		else
		{
			func_1409();
		}
		bVar2 = true;
	}
	bVar4 = func_1428(1);
	bVar5 = -1;
	if (bVar4)
	{
		bVar5 = func_1230();
	}
	else
	{
		if (func_1417())
		{
			bVar5 = func_1423(1, 1, 0);
		}
		if (func_25())
		{
			if (func_1255())
			{
				bVar5 = func_65(PLAYER::PLAYER_ID());
			}
			else
			{
				bVar5 = Local_133.f_12;
			}
			if (bVar5 == -1)
			{
				bVar5 = false;
			}
		}
	}
	if (func_74())
	{
		if (func_12(bVar5))
		{
			bVar2 = true;
		}
		else if (!bVar4)
		{
			if (!func_1417())
			{
				bVar2 = true;
			}
		}
	}
	if (func_1250())
	{
		if (bVar5 == -1)
		{
			bVar5 = func_1423(1, 0, 0);
		}
		else
		{
			bVar6 = Local_183.f_175[bVar5];
		}
		if (bVar6 != -1)
		{
			if (func_1422(bVar6, bParam0))
			{
				if (!HUD::DOES_BLIP_EXIST(Local_133.f_156[bVar6]))
				{
					if (bParam0 == -1)
					{
						bParam0 = func_1421(bVar6);
					}
					Var1 = { func_412(func_16(), bVar6, Local_183.f_679, bParam0, 0, 1) };
					Local_133.f_156[bVar6] = HUD::ADD_BLIP_FOR_COORD(Var1);
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_133.f_156[bVar6], "SB_SELL_BMRBB" /* GXT: Drop-off */);
					Local_133.f_13 = bVar6;
				}
			}
		}
		bVar2 = true;
	}
	else
	{
		bVar3 = true;
	}
	if (bVar4)
	{
		if (bVar5 != -1)
		{
			bVar6 = Local_183.f_175[bVar5];
			bVar7 = Local_183.f_175[bVar5] + 1;
		}
		if (bVar6 != -1)
		{
			if (HUD::DOES_BLIP_EXIST(Local_133.f_28[bVar6]))
			{
				Var1 = { func_412(func_16(), bVar6, Local_183.f_679, bVar5, 0, func_1250()) };
				if (!__LIB_0__::func_78(Var1, -1143.777f, -2223.1814f, 12.1958f, 0))
				{
					if (!HUD::DOES_BLIP_HAVE_GPS_ROUTE(Local_133.f_28[bVar6]))
					{
						HUD::SET_BLIP_ROUTE(Local_133.f_28[bVar6], true);
					}
				}
				else if (__LIB_0__::func_529(PLAYER::PLAYER_PED_ID(), Var1, 0) >= 100f)
				{
					if (!HUD::DOES_BLIP_HAVE_GPS_ROUTE(Local_133.f_28[bVar6]))
					{
						HUD::SET_BLIP_ROUTE(Local_133.f_28[bVar6], true);
					}
				}
				else if (HUD::DOES_BLIP_HAVE_GPS_ROUTE(Local_133.f_28[bVar6]))
				{
					HUD::SET_BLIP_ROUTE(Local_133.f_28[bVar6], false);
				}
				if (func_366())
				{
					if (BitTest(uLocal_355, bVar6))
					{
						HUD::SET_BLIP_SCALE(Local_133.f_28[bVar6], 1f);
						MISC::CLEAR_BIT(&uLocal_355, bVar6);
					}
					if (bVar7 <= (func_73(-1) - 1))
					{
						if (HUD::DOES_BLIP_EXIST(Local_133.f_28[bVar7]))
						{
							if (!BitTest(uLocal_355, bVar7))
							{
								HUD::SET_BLIP_SCALE(Local_133.f_28[bVar7], 0.5f);
								__LIB_6__::func_958(&(Local_133.f_28[bVar7]), 12);
								MISC::SET_BIT(&uLocal_355, bVar7);
							}
						}
					}
				}
			}
		}
	}
	if (bParam0 == -1)
	{
		if (func_25())
		{
			if (func_1255())
			{
				bParam0 = func_65(PLAYER::PLAYER_ID());
			}
			else
			{
				bParam0 = Local_133.f_12;
			}
			if (bParam0 == -1)
			{
				bParam0 = false;
			}
		}
	}
	Var9 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
	fVar10 = 999999.9f;
	bVar12 = -1;
	bVar0 = false;
	while (bVar0 < func_233())
	{
		if (func_25())
		{
			if (!func_1255())
			{
				bParam0 = func_1421(bVar0);
				bVar8 = true;
			}
		}
		if ((!func_1422(bVar0, bParam0) || bVar2) || func_536(bVar0))
		{
			if (HUD::DOES_BLIP_EXIST(Local_133.f_28[bVar0]))
			{
				HUD::REMOVE_BLIP(&(Local_133.f_28[bVar0]));
			}
			if (HUD::DOES_BLIP_EXIST(Local_133.f_59[bVar0]))
			{
				HUD::REMOVE_BLIP(&(Local_133.f_59[bVar0]));
			}
			if (bVar3)
			{
				if (HUD::DOES_BLIP_EXIST(Local_133.f_156[bVar0]))
				{
					HUD::REMOVE_BLIP(&(Local_133.f_156[bVar0]));
				}
			}
		}
		else
		{
			if (HUD::DOES_BLIP_EXIST(Local_133.f_156[bVar0]))
			{
				HUD::REMOVE_BLIP(&(Local_133.f_156[bVar0]));
			}
			if (!HUD::DOES_BLIP_EXIST(Local_133.f_28[bVar0]))
			{
				if (bParam0 == -1)
				{
					bParam0 = func_1421(bVar0);
				}
				if (func_74())
				{
					if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_64[bParam0]) && ENTITY::DOES_ENTITY_EXIST(NETWORK::NET_TO_VEH(Local_183.f_64[bParam0]))) && VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(Local_183.f_64[bParam0]), false))
					{
						Local_133.f_28[bVar0] = HUD::ADD_BLIP_FOR_COORD(ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(Local_183.f_64[bParam0]), true));
						HUD::SET_BLIP_COLOUR(Local_133.f_28[bVar0], 5);
						HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_133.f_28[bVar0], "SB_SELL_BMRBB" /* GXT: Drop-off */);
						HUD::SET_BLIP_ROUTE(Local_133.f_28[bVar0], true);
					}
				}
				else
				{
					Var1 = { func_412(func_16(), bVar0, Local_183.f_679, bParam0, 0, func_1250()) };
					Local_133.f_28[bVar0] = HUD::ADD_BLIP_FOR_COORD(Var1);
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_133.f_28[bVar0], "SB_SELL_BMRBB" /* GXT: Drop-off */);
					bVar5 = func_1423(1, 1, 0);
					if (bVar8)
					{
						fVar11 = SYSTEM::VDIST2(Var9, Var1);
						if (fVar11 < fVar10)
						{
							fVar10 = fVar11;
							bVar12 = bVar0;
						}
					}
					if (func_25() && func_1255())
					{
						bVar5 = func_65(PLAYER::PLAYER_ID());
					}
					if ((func_15() || func_44()) || func_43())
					{
						HUD::SET_BLIP_ROUTE(Local_133.f_28[bVar0], true);
					}
					else if (bVar5 != -1)
					{
						bVar6 = Local_183.f_175[bVar5];
						if (bVar6 != -1)
						{
							if (HUD::DOES_BLIP_EXIST(Local_133.f_28[bVar6]))
							{
								HUD::SET_BLIP_ROUTE(Local_133.f_28[bVar6], true);
							}
						}
					}
				}
				if ((func_448() || func_27()) || (((func_534() && !func_235()) && !func_19()) && !func_23()))
				{
					Local_133.f_59[bVar0] = HUD::ADD_BLIP_FOR_RADIUS(Var1, func_1419());
					HUD::SET_BLIP_COLOUR(Local_133.f_59[bVar0], 5);
					HUD::SET_BLIP_ALPHA(Local_133.f_59[bVar0], 100);
					HUD::SHOW_HEIGHT_ON_BLIP(Local_133.f_59[bVar0], false);
				}
			}
		}
		if (func_19())
		{
			if (!func_1428(1))
			{
				bVar5 = func_1421(bVar0);
				if (__LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if (bVar5 != -1)
						{
							bVar6 = Local_183.f_175[bVar5];
							if (bVar6 != -1)
							{
								if (HUD::DOES_BLIP_EXIST(Local_133.f_28[bVar6]))
								{
									if (!HUD::DOES_BLIP_HAVE_GPS_ROUTE(Local_133.f_28[bVar6]))
									{
										HUD::SET_BLIP_ROUTE(Local_133.f_28[bVar6], true);
									}
								}
							}
						}
					}
				}
			}
		}
		bVar0++;
	}
	if (bVar12 != -1)
	{
		HUD::SET_BLIP_ROUTE(Local_133.f_28[bVar12], true);
	}
}

float func_1419()//Position - 0x9BFB4
{
	if (func_448())
	{
		if (func_253())
		{
			return (150f / 4f);
		}
		return (150f / 4f);
	}
	return 25f;
}

int func_1421(bool bParam0)//Position - 0x9C00A
{
	int iVar0;
	int iVar1;
	if (func_25())
	{
		iVar0 = func_24();
	}
	else
	{
		iVar0 = func_14();
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (BitTest(Local_183.f_134[iVar1], bParam0))
		{
			return iVar1;
		}
		iVar1++;
	}
	return -1;
}

int func_1422(bool bParam0, bool bParam1)//Position - 0x9C050
{
	int iVar0;
	if (func_23())
	{
		return 0;
	}
	if (bParam1 >= 0)
	{
		if (func_366())
		{
			if (Local_183.f_175[bParam1] <= (func_73(-1) - 1))
			{
				if (bParam0 == Local_183.f_175[bParam1] || bParam0 == Local_183.f_175[bParam1] + 1)
				{
					return BitTest(Local_183.f_134[bParam1], bParam0);
				}
			}
		}
		else
		{
			return BitTest(Local_183.f_134[bParam1], bParam0);
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < func_14())
		{
			if (BitTest(Local_183.f_134[iVar0], bParam0))
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_1423(int iParam0, int iParam1, int iParam2)//Position - 0x9C0F3
{
	bool bVar0;
	float fVar1;
	float fVar2;
	bool bVar3;
	fVar1 = 9999.99f;
	bVar3 = -1;
	if (func_45() && !func_25())
	{
		bVar0 = false;
		while (bVar0 < func_14())
		{
			if (ENTITY::DOES_ENTITY_EXIST(func_13(bVar0)) && func_66(bVar0))
			{
				if (!func_12(bVar0) || iParam1)
				{
					fVar2 = __LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), func_13(bVar0), 1);
					if (fVar2 < fVar1)
					{
						if ((iParam0 || !func_31(bVar0)) || func_1192(bVar0, 1))
						{
							if (!func_477(bVar0) || iParam2)
							{
								fVar1 = fVar2;
								bVar3 = bVar0;
							}
						}
					}
				}
			}
			bVar0++;
		}
	}
	else
	{
		bVar3 = false;
	}
	return bVar3;
}

Vector3 func_1424()//Position - 0x9C1AF
{
	switch (Local_183.f_679)
	{
		case 0:
			return 1432.727f, -2596.785f, 47.091f;
		case 1:
			return -487.355f, -2173.959f, 8.168f;
		case 2:
			return -2146.786f, -391.681f, 12.28f;
		case 3:
			return -940.802f, 300.082f, 69.803f;
		case 4:
			return 358.434f, 936.913f, 204.095f;
		case 5:
			return -1813.449f, 780.711f, 136.399f;
		case 6:
			return 152.715f, 6427.547f, 30.299f;
		case 7:
			return 2400.407f, 5042.326f, 44.987f;
		case 8:
			return 784.661f, 4196.76f, 41.135f;
		case 9:
			return 630.246f, 284.091f, 102.117f;
		default:
	}
	return -1193.2894f, -2245.7986f, 12.9446f;
}

int func_1426()//Position - 0x9C2CA
{
	if (!func_230(0))
	{
		if (__LIB_7__::func_260("BYCB_CLY_LSC0" /* GXT: Lose the Cops. */))
		{
			return 1;
		}
	}
	return 0;
}

int func_1427(bool bParam0)//Position - 0x9C2EC
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_59[bParam0]))
	{
		if (__LIB_2__::func_15(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_183.f_59[bParam0]), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_1428(bool bParam0)//Position - 0x9C322
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < func_14())
	{
		if (func_475(iVar0, bParam0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_1429()//Position - 0x9C34F
{
	if (func_448())
	{
		if ((func_1430() || func_1428(1)) || func_1417())
		{
			func_1408(0);
		}
		else
		{
			func_1408(1);
		}
	}
}

int func_1430()//Position - 0x9C387
{
	struct<3> Var0;
	if (func_367())
	{
		return 1;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		if (func_467())
		{
			if (__LIB_0__::func_659(Var0, 2, 1000, 0) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1256.4573f, -2150.7021f, 12.9248f, 100f, 100f, 100f, false, true, 0))
			{
				return 1;
			}
		}
		else if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), func_1410(), 100f, 100f, 100f, false, true, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_1432()//Position - 0x9D17A
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	if (func_25())
	{
		bVar0 = false;
		while (bVar0 < 32)
		{
			bVar1 = PLAYER::INT_TO_PLAYERINDEX(bVar0);
			if (bVar1 != PLAYER::PLAYER_ID())
			{
				if (__LIB_1__::func_264(bVar1, 0, 1))
				{
					if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(bVar1) && func_1439(bVar1))
					{
						if (__LIB_13__::func_305())
						{
							func_1387(bVar1, 1);
						}
						else
						{
							func_1387(bVar1, 0);
						}
					}
					else
					{
						func_1387(bVar1, 0);
					}
				}
				else
				{
					func_1387(bVar1, 0);
				}
			}
			bVar0++;
		}
	}
	else
	{
		bVar0 = false;
		while (bVar0 < func_14())
		{
			if (func_66(bVar0))
			{
				if (!func_12(bVar0))
				{
					if (!HUD::DOES_BLIP_EXIST(Local_133.f_151[bVar0]))
					{
						Local_133.f_151[bVar0] = HUD::ADD_BLIP_FOR_ENTITY(func_67(bVar0));
						HUD::SET_BLIP_SPRITE(Local_133.f_151[bVar0], func_1437());
						HUD::SET_BLIP_COLOUR(Local_133.f_151[bVar0], __LIB_2__::func_386(bVar0));
						HUD::SET_BLIP_PRIORITY(Local_133.f_151[bVar0], 12);
						HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_133.f_151[bVar0], func_1435());
						if (func_1437() == 427 || func_1437() == 423)
						{
							HUD::SET_BLIP_ROTATION(Local_133.f_151[bVar0], SYSTEM::ROUND(ENTITY::GET_ENTITY_HEADING_FROM_EULERS(func_67(bVar0))));
						}
					}
					else if (func_1434(bVar0))
					{
						HUD::SET_BLIP_ALPHA(Local_133.f_151[bVar0], 255);
						if (HUD::GET_BLIP_COLOUR(Local_133.f_151[bVar0]) != __LIB_2__::func_386(bVar0))
						{
							HUD::SET_BLIP_COLOUR(Local_133.f_151[bVar0], __LIB_2__::func_386(bVar0));
						}
						if (func_1437() == 427 || func_1437() == 423)
						{
							HUD::SET_BLIP_ROTATION(Local_133.f_151[bVar0], SYSTEM::ROUND(ENTITY::GET_ENTITY_HEADING_FROM_EULERS(func_67(bVar0))));
						}
						if (!Local_133.f_187[bVar0])
						{
							func_1433(bVar0, 0);
						}
					}
					else
					{
						if (Local_133.f_187[bVar0])
						{
							if (!__LIB_13__::func_305())
							{
								if (!func_1427(bVar0))
								{
									if (func_31(bVar0))
									{
										func_1433(bVar0, 255);
									}
								}
							}
						}
						HUD::SET_BLIP_ALPHA(Local_133.f_151[bVar0], 1);
						Local_133.f_187[bVar0] = 0;
					}
					Local_133.f_187[bVar0] = 1;
				}
				else
				{
					func_1414(bVar0);
				}
			}
			else
			{
				func_1414(bVar0);
			}
			bVar0++;
		}
	}
	if ((!func_1373() && !func_448()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		bVar2 = func_1423(0, 0, 0);
		if (bVar2 > -1)
		{
			if (!func_1417())
			{
				if (Local_133.f_271 != bVar2)
				{
					if (Local_133.f_271 >= 0)
					{
						if (HUD::DOES_BLIP_EXIST(Local_133.f_151[Local_133.f_271]))
						{
							if (HUD::DOES_BLIP_HAVE_GPS_ROUTE(Local_133.f_151[Local_133.f_271]))
							{
								HUD::SET_BLIP_ROUTE(Local_133.f_151[Local_133.f_271], false);
							}
						}
					}
					if (HUD::DOES_BLIP_EXIST(Local_133.f_151[bVar2]))
					{
						if (!HUD::DOES_BLIP_HAVE_GPS_ROUTE(Local_133.f_151[bVar2]))
						{
							HUD::SET_BLIP_ROUTE(Local_133.f_151[bVar2], true);
						}
					}
					Local_133.f_271 = bVar2;
				}
			}
			else if (Local_133.f_271 > -1)
			{
				if (HUD::DOES_BLIP_EXIST(Local_133.f_151[Local_133.f_271]))
				{
					if (HUD::DOES_BLIP_HAVE_GPS_ROUTE(Local_133.f_151[Local_133.f_271]))
					{
						HUD::SET_BLIP_ROUTE(Local_133.f_151[Local_133.f_271], false);
					}
				}
			}
		}
		else if (Local_133.f_271 > -1)
		{
			if (HUD::DOES_BLIP_EXIST(Local_133.f_151[Local_133.f_271]))
			{
				if (HUD::DOES_BLIP_HAVE_GPS_ROUTE(Local_133.f_151[Local_133.f_271]))
				{
					HUD::SET_BLIP_ROUTE(Local_133.f_151[Local_133.f_271], false);
				}
			}
		}
	}
	else if (Local_133.f_271 > -1)
	{
		if (HUD::DOES_BLIP_EXIST(Local_133.f_151[Local_133.f_271]))
		{
			if (HUD::DOES_BLIP_HAVE_GPS_ROUTE(Local_133.f_151[Local_133.f_271]))
			{
				HUD::SET_BLIP_ROUTE(Local_133.f_151[Local_133.f_271], false);
			}
		}
	}
}

void func_1433(bool bParam0, int iParam1)//Position - 0x9D512
{
	int iVar0;
	int iVar1;
	iVar0 = func_476(bParam0);
	iVar1 = iVar0;
	if ((iVar0 != __LIB_0__::func_160() && iVar1 != -1) && HUD::DOES_BLIP_EXIST(Global_2678393[iVar1]))
	{
		HUD::SET_BLIP_ALPHA(Global_2678393[iVar1], iParam1);
	}
}

int func_1434(bool bParam0)//Position - 0x9D558
{
	if (func_1427(bParam0))
	{
		return 0;
	}
	if (func_230(0))
	{
		return 0;
	}
	if (func_12(bParam0))
	{
		return 0;
	}
	if (!func_27())
	{
		if (func_1426())
		{
			return 0;
		}
	}
	if (func_31(bParam0))
	{
		if (!__LIB_13__::func_305())
		{
			return 0;
		}
	}
	if (func_1250())
	{
		return 0;
	}
	return 1;
}

char* func_1435()//Position - 0x9D5BA
{
	switch (func_16())
	{
		case 6:
			return "SBCONTRA_COKEB" /* GXT: Cocaine */;
		case 4:
			return "SBCONTRA_IDSB" /* GXT: Forged Documents */;
		case 7:
			return "SBCONTRA_WEEDB" /* GXT: Weed */;
		case 8:
			return "SB_BIKE" /* GXT: Bike */;
		case 0:
		case 9:
		case 2:
		case 1:
		case 5:
			switch (Local_183.f_1)
			{
				case 4:
					return "SBCONTRA_COKEB" /* GXT: Cocaine */;
				case 0:
					return "SBCONTRA_IDSB" /* GXT: Forged Documents */;
				case 2:
					return "SBCONTRA_MONEYB" /* GXT: Counterfeit Money */;
				case 3:
					return "SBCONTRA_METHB" /* GXT: Meth */;
				case 1:
					return "SBCONTRA_WEEDB" /* GXT: Weed */;
				default:
			}
			break;
	}
	return "SBCONTRA_DEFB" /* GXT: Product */;
}

int func_1437()//Position - 0x9D682
{
	if (func_448())
	{
		if (func_253())
		{
			return 64;
		}
		return 423;
	}
	else if (func_461())
	{
		return 427;
	}
	return __LIB_24__::func_818();
}

bool func_1439(int iParam0)//Position - 0x9D6C6
{
	return func_63(NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iParam0), 19);
}

void func_1440()//Position - 0x9D6DA
{
	int iVar0;
	int iVar1;
	if (func_499())
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_837[iVar0 /*6*/]))
			{
				iVar1 = NETWORK::NET_TO_VEH(Local_183.f_837[iVar0 /*6*/]);
				if (!ENTITY::IS_ENTITY_DEAD(iVar1, false))
				{
					if (func_501(iVar0))
					{
						if (!HUD::DOES_BLIP_EXIST(Local_133.f_229[iVar0]))
						{
							Local_133.f_229[iVar0] = HUD::ADD_BLIP_FOR_ENTITY(iVar1);
							HUD::SET_BLIP_SPRITE(Local_133.f_229[iVar0], func_1441(iVar1, 1));
							__LIB_6__::func_958(&(Local_133.f_229[iVar0]), 6);
							__LIB_29__::func_82(17);
						}
						else if (HUD::GET_BLIP_SPRITE(Local_133.f_229[iVar0]) != func_1441(iVar1, 1))
						{
							HUD::SET_BLIP_SPRITE(Local_133.f_229[iVar0], func_1441(iVar1, 1));
						}
					}
					else if (HUD::DOES_BLIP_EXIST(Local_133.f_229[iVar0]))
					{
						HUD::REMOVE_BLIP(&(Local_133.f_229[iVar0]));
					}
				}
				else if (HUD::DOES_BLIP_EXIST(Local_133.f_229[iVar0]))
				{
					HUD::REMOVE_BLIP(&(Local_133.f_229[iVar0]));
				}
			}
			else if (HUD::DOES_BLIP_EXIST(Local_133.f_229[iVar0]))
			{
				HUD::REMOVE_BLIP(&(Local_133.f_229[iVar0]));
			}
			iVar0++;
		}
	}
}

int func_1441(int iParam0, bool bParam1)//Position - 0x9D7FA
{
	int iVar0;
	if (bParam1)
	{
		return 270;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (VEHICLE::IS_THIS_MODEL_A_BIKE(iVar0))
	{
		return 130;
	}
	if (VEHICLE::IS_THIS_MODEL_A_HELI(iVar0))
	{
		if (func_1442(iParam0))
		{
			return 64;
		}
		else
		{
			return 353;
		}
	}
	if (VEHICLE::IS_THIS_MODEL_A_PLANE(iVar0))
	{
		return 423;
	}
	return 270;
}

int func_1442(int iParam0)//Position - 0x9D855
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < func_14())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_59[iVar0]))
		{
			if (iParam0 == NETWORK::NET_TO_VEH(Local_183.f_59[iVar0]))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_1443()//Position - 0x9D899
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	if (func_347())
	{
		if (func_1449() || !func_1448())
		{
			bVar0 = func_27();
			bVar1 = false;
			while (bVar1 < func_246())
			{
				if (func_346(bVar1))
				{
					if (func_1447())
					{
						if (func_1446(bVar1) && (!bVar0 || bVar1 != 0))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(func_522(bVar1), false))
							{
								iVar2 = PED::GET_VEHICLE_PED_IS_USING(func_522(bVar1));
								if (!func_1445(iVar2))
								{
									if (!HUD::DOES_BLIP_EXIST(Local_133.f_212[bVar1]) || (HUD::DOES_BLIP_EXIST(Local_133.f_212[bVar1]) && HUD::GET_BLIP_SPRITE(Local_133.f_212[bVar1]) != func_1441(iVar2, 0)))
									{
										if (!HUD::DOES_BLIP_EXIST(Local_133.f_212[bVar1]))
										{
											Local_133.f_212[bVar1] = HUD::ADD_BLIP_FOR_ENTITY(func_522(bVar1));
										}
										HUD::SET_BLIP_SPRITE(Local_133.f_212[bVar1], func_1441(iVar2, 0));
										__LIB_6__::func_958(&(Local_133.f_212[bVar1]), 6);
									}
								}
								else if (HUD::DOES_BLIP_EXIST(Local_133.f_212[bVar1]))
								{
									HUD::REMOVE_BLIP(&(Local_133.f_212[bVar1]));
								}
							}
							else if (!HUD::DOES_BLIP_EXIST(Local_133.f_212[bVar1]) || (HUD::DOES_BLIP_EXIST(Local_133.f_212[bVar1]) && HUD::GET_BLIP_SPRITE(Local_133.f_212[bVar1]) != 270))
							{
								if (!HUD::DOES_BLIP_EXIST(Local_133.f_212[bVar1]))
								{
									Local_133.f_212[bVar1] = HUD::ADD_BLIP_FOR_ENTITY(func_522(bVar1));
								}
								HUD::SET_BLIP_SPRITE(Local_133.f_212[bVar1], 270);
								__LIB_6__::func_958(&(Local_133.f_212[bVar1]), 6);
								HUD::SET_BLIP_SCALE(Local_133.f_212[bVar1], 0.7f);
							}
						}
						else if (HUD::DOES_BLIP_EXIST(Local_133.f_212[bVar1]))
						{
							HUD::REMOVE_BLIP(&(Local_133.f_212[bVar1]));
						}
					}
					else if (func_1444())
					{
						if (func_1446(bVar1) && !BitTest(Local_183.f_9, bVar1))
						{
							if (!HUD::DOES_BLIP_EXIST(Local_133.f_212[bVar1]))
							{
								if (!HUD::DOES_BLIP_EXIST(Local_133.f_212[bVar1]))
								{
									Local_133.f_212[bVar1] = HUD::ADD_BLIP_FOR_ENTITY(func_522(bVar1));
								}
								if (func_23())
								{
									HUD::SET_BLIP_SPRITE(Local_133.f_212[bVar1], 480);
									HUD::SET_BLIP_SCALE(Local_133.f_212[bVar1], 1f);
								}
								else
								{
									HUD::SET_BLIP_SCALE(Local_133.f_212[bVar1], 0.7f);
								}
								__LIB_6__::func_958(&(Local_133.f_212[bVar1]), 9);
								HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_133.f_212[bVar1], "SBIKER_PDBLIP" /* GXT: Buyer */);
							}
						}
						else if (HUD::DOES_BLIP_EXIST(Local_133.f_212[bVar1]))
						{
							HUD::REMOVE_BLIP(&(Local_133.f_212[bVar1]));
						}
					}
				}
				else if (HUD::DOES_BLIP_EXIST(Local_133.f_212[bVar1]))
				{
					HUD::REMOVE_BLIP(&(Local_133.f_212[bVar1]));
				}
				bVar1++;
			}
		}
	}
}

int func_1444()//Position - 0x9DB4B
{
	switch (func_16())
	{
		case 4:
			return 1;
			break;
	}
	return 0;
}

int func_1445(int iParam0)//Position - 0x9DB6A
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_837[iVar0 /*6*/]))
		{
			iVar1 = NETWORK::NET_TO_VEH(Local_183.f_837[iVar0 /*6*/]);
			if (iVar1 == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_1446(bool bParam0)//Position - 0x9DBB1
{
	if (!__LIB_0__::func_121(func_522(bParam0)))
	{
		return 0;
	}
	return 1;
}

int func_1447()//Position - 0x9DBCC
{
	switch (func_16())
	{
		case 7:
		case 4:
			return 0;
			break;
	}
	return 1;
}

int func_1448()//Position - 0x9DBF1
{
	switch (func_16())
	{
		case 6:
			return 1;
		default:
	}
	return 0;
}

int func_1449()//Position - 0x9DC0D
{
	if (func_62(30))
	{
		return 1;
	}
	return 0;
}

void func_1450(int iParam0)//Position - 0x9DC23
{
	bool bVar0;
	char* sVar1;
	bVar0 = false;
	if (func_230(0) || iParam0)
	{
		bVar0 = true;
	}
	if (__LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
		{
			if (!__LIB_0__::func_649(&(Local_133.f_10)))
			{
				__LIB_0__::func_580(&(Local_133.f_10), 0, 0);
			}
		}
		else if (__LIB_0__::func_649(&(Local_133.f_10)))
		{
			if (__LIB_2__::func_47(&(Local_133.f_10), 1500, 0))
			{
				__LIB_0__::func_579(&(Local_133.f_10));
			}
		}
	}
	else if (__LIB_0__::func_649(&(Local_133.f_10)))
	{
		__LIB_0__::func_579(&(Local_133.f_10));
	}
	if (bVar0)
	{
		func_1386();
		__LIB_18__::func_455();
	}
	else
	{
		func_1473();
		if (func_23())
		{
			__LIB_1__::func_447(85);
		}
		if (func_62(10))
		{
			if (__LIB_3__::func_648(23))
			{
				__LIB_3__::func_647(23);
			}
			if (__LIB_3__::func_648(32))
			{
				__LIB_3__::func_647(32);
			}
		}
		else if (!func_1909(25))
		{
			if (!__LIB_1__::func_159())
			{
				if (func_1472())
				{
					__LIB_1__::func_447(32);
				}
				else
				{
					__LIB_1__::func_447(23);
				}
				if (func_45())
				{
					__LIB_1__::func_447(65);
				}
				func_1881(25);
			}
		}
		if (__LIB_0__::func_114())
		{
			if (!__LIB_7__::func_260("SCONTRA_AIRCAE" /* GXT: Take out the ~r~enemies. */))
			{
				__LIB_25__::func_25("SCONTRA_AIRCAE" /* GXT: Take out the ~r~enemies. */, 0);
			}
		}
		else if (func_1470())
		{
			if (!__LIB_7__::func_260("BYCB_CLY_LSC0" /* GXT: Lose the Cops. */))
			{
				__LIB_25__::func_25("BYCB_CLY_LSC0" /* GXT: Lose the Cops. */, 0);
			}
		}
		else if (func_1255() || func_15())
		{
			switch (func_16())
			{
				case 12:
					sVar1 = func_1469(func_1191());
					if (!__LIB_7__::func_260(sVar1))
					{
						if (iLocal_186 == 0)
						{
							__LIB_25__::func_25(sVar1, 0);
						}
						else
						{
							__LIB_26__::func_82(sVar1, func_946(), 0, 0);
						}
					}
					func_1460();
					break;
				default:
					if (!__LIB_7__::func_260(func_1469(func_1191())))
					{
						__LIB_26__::func_82(func_1469(func_1191()), func_946(), 0, 0);
					}
					func_1460();
					break;
			}
		}
		else if (func_1459())
		{
			if ((!Global_2789736 && !__LIB_4__::func_728()) && !__LIB_3__::func_648(28))
			{
				Global_2789736 = 1;
				__LIB_1__::func_447(28);
			}
			if (!func_448())
			{
				func_1460();
			}
			if (func_1191())
			{
				if (func_253())
				{
					if ((ENTITY::IS_ENTITY_IN_AIR(func_1458()) && !func_1220(func_1230(), 0)) && !func_12(func_1230()))
					{
						if (!func_1336(16))
						{
							if (__LIB_28__::func_372())
							{
								__LIB_2__::func_238("SBIKER_HELID" /* GXT: Press ~INPUT_FRONTEND_RIGHT~ to drop ~a~ when you are flying above a drop-off. */, func_946(), -1);
								__LIB_36__::func_794(1);
								__LIB_29__::func_82(16);
							}
						}
					}
				}
				if (!__LIB_7__::func_260(func_1469(func_1191())))
				{
					__LIB_26__::func_82(func_1469(func_1191()), func_946(), 0, 0);
				}
			}
			else
			{
				if (func_253())
				{
					if (func_1230() != -1)
					{
						if (func_1241(func_1230(), 1))
						{
							if ((ENTITY::IS_ENTITY_IN_AIR(func_1458()) && func_31(func_1230())) && !func_12(func_1230()))
							{
								if (!func_1336(16))
								{
									if (__LIB_28__::func_372())
									{
										__LIB_2__::func_238("SBIKER_HELID" /* GXT: Press ~INPUT_FRONTEND_RIGHT~ to drop ~a~ when you are flying above a drop-off. */, func_946(), -1);
										__LIB_36__::func_794(1);
										__LIB_29__::func_82(16);
									}
								}
							}
						}
					}
				}
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
				{
					if (func_1250())
					{
						if (!__LIB_7__::func_260(func_1469(func_1191())))
						{
							__LIB_25__::func_25(func_1469(func_1191()), 0);
						}
					}
					else if ((func_1417() && !__LIB_0__::func_649(&(Local_133.f_10))) || (func_1356() && !__LIB_0__::func_649(&(Local_133.f_10))))
					{
						if (!__LIB_7__::func_260(func_1469(func_1191())))
						{
							__LIB_33__::func_18(func_1469(func_1191()), func_946(), 9, 0);
						}
					}
					else if (!__LIB_7__::func_260(func_1452()))
					{
						__LIB_25__::func_25(func_1452(), 0);
					}
				}
			}
		}
		else if (func_1250())
		{
			if (!__LIB_7__::func_260(func_1469(func_1191())))
			{
				__LIB_25__::func_25(func_1469(func_1191()), 0);
			}
		}
		else if (func_19() && func_1336(18))
		{
			if (!__LIB_7__::func_260(func_1469(func_1191())))
			{
				__LIB_26__::func_82(func_1469(func_1191()), func_946(), 0, 0);
			}
		}
		else if (func_25() && !func_1255())
		{
			if (!__LIB_7__::func_260(func_1469(func_1191())))
			{
				__LIB_26__::func_82(func_1469(func_1191()), func_946(), 0, 0);
			}
		}
		else if (func_1451())
		{
			if (!__LIB_7__::func_260(func_1469(func_1191())))
			{
				__LIB_26__::func_82(func_1469(func_1191()), func_946(), 0, 0);
			}
		}
		else if (!__LIB_7__::func_260(func_1452()))
		{
			__LIB_25__::func_25(func_1452(), 0);
		}
	}
}

int func_1451()//Position - 0x9E09C
{
	bool bVar0;
	if (func_19())
	{
		bVar0 = func_1423(1, 0, 1);
		if (bVar0 != -1)
		{
			if (BitTest(Local_183.f_21, bVar0))
			{
			}
			return BitTest(Local_183.f_21, bVar0);
		}
	}
	return 0;
}

char* func_1452()//Position - 0x9E0D1
{
	if (func_448())
	{
		if (func_45())
		{
			if (func_1430() || func_508())
			{
				if (func_1454())
				{
					return "SCONTRA_HELI_1b" /* GXT: Enter a ~HUD_COLOUR_BLUE~helicopter.~s~ */;
				}
				else
				{
					return "SCONTRA_VEH_1b" /* GXT: Enter a ~HUD_COLOUR_BLUE~plane. */;
				}
			}
			else if (func_467())
			{
				if (func_1454())
				{
					return "SCONTRA_DRP_LHP" /* GXT: Go to ~y~LSIA ~s~and enter a ~b~helicopter.~s~ */;
				}
				else
				{
					return "SCONTRA_DROP_LP" /* GXT: Go to ~y~LSIA ~s~and enter a ~b~plane. */;
				}
			}
			else if (func_1454())
			{
				return "SCONTRA_DRP_MHP" /* GXT: Go to ~y~McKenzie Field ~s~and enter a ~b~helicopter.~s~ */;
			}
			else
			{
				return "SCONTRA_DROP_MP";
			}
		}
		else if (func_1430() || func_508())
		{
			if (func_1454())
			{
				return "SCONTRA_HELI_1" /* GXT: Enter the ~HUD_COLOUR_BLUE~helicopter.~s~ */;
			}
			else
			{
				return "SCONTRA_VEH_1" /* GXT: Enter the ~HUD_COLOUR_BLUE~plane. */;
			}
		}
		else if (func_467())
		{
			if (func_1454())
			{
				return "SCONTRA_DRP_LHS" /* GXT: Go to ~y~LSIA ~s~and enter the ~b~helicopter.~s~ */;
			}
			else
			{
				return "SCONTRA_DROP_LS" /* GXT: Go to ~y~LSIA ~s~and enter the ~b~plane. */;
			}
		}
		else if (func_1454())
		{
			return "SCONTRA_DRP_MHS" /* GXT: Go to ~y~McKenzie Field ~s~and enter the ~b~helicopter.~s~ */;
		}
		else
		{
			return "SCONTRA_DROP_MS" /* GXT: Go to ~y~McKenzie Field ~s~and enter the ~b~plane.~s~ */;
		}
	}
	else if (func_461())
	{
		if (func_45())
		{
			return "SCONTRA_VEH_2b" /* GXT: Enter a ~HUD_COLOUR_BLUE~boat.~s~ */;
		}
		else
		{
			return "SCONTRA_VEH_2" /* GXT: Enter the ~HUD_COLOUR_BLUE~boat. */;
		}
	}
	switch (func_16())
	{
		case 3:
			if (func_45())
			{
				return "SBIKERT_VEHb" /* GXT: Enter a ~HUD_COLOUR_BLUE~truck. */;
			}
			else
			{
				return "SBIKERT_VEH_VEH" /* GXT: Enter the ~HUD_COLOUR_BLUE~truck. */;
			}
			break;
		case 5:
			if (func_45())
			{
				return "SBIKERM_VEHb" /* GXT: Enter a ~HUD_COLOUR_BLUE~van. */;
			}
			return "SBIKERM_VEH" /* GXT: Enter the ~HUD_COLOUR_BLUE~van. */;
			break;
		case 7:
		case 0:
			if (Local_183.f_957 == 0 || Local_183.f_957 == 1)
			{
				if (func_45())
				{
					return "SBIKERM_VEHb" /* GXT: Enter a ~HUD_COLOUR_BLUE~van. */;
				}
				else
				{
					return "SBIKERM_VEH" /* GXT: Enter the ~HUD_COLOUR_BLUE~van. */;
				}
			}
			else if (func_45())
			{
				return "SBIKERT_VEHb" /* GXT: Enter a ~HUD_COLOUR_BLUE~truck. */;
			}
			else
			{
				return "SBIKERT_VEH_VEH" /* GXT: Enter the ~HUD_COLOUR_BLUE~truck. */;
			}
			break;
	}
	if (func_45())
	{
		if (func_1453())
		{
			return "SBCONTRA_VEHb" /* GXT: Get on a ~HUD_COLOUR_BLUE~motorcycle. */;
		}
		return "SCONTRA_VEHb" /* GXT: Enter a ~HUD_COLOUR_BLUE~truck. */;
	}
	if (func_1453())
	{
		return "SBCONTRA_VEH" /* GXT: Get on the ~HUD_COLOUR_BLUE~motorcycle. */;
	}
	return "SCONTRA_VEH" /* GXT: Enter the ~HUD_COLOUR_BLUE~truck. */;
}

int func_1453()//Position - 0x9E2C3
{
	switch (Local_183.f_17)
	{
		case 6:
		case 4:
		case 8:
		case 11:
			return 1;
		default:
	}
	return 0;
}

bool func_1454()//Position - 0x9E2F2
{
	return func_253();
}

int func_1458()//Position - 0x9E382
{
	int iVar0;
	int iVar1;
	if (__LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			iVar1 = 0;
			while (iVar1 < func_14())
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_59[iVar1]))
				{
					if (iVar0 == NETWORK::NET_TO_VEH(Local_183.f_59[iVar1]))
					{
						return iVar0;
					}
				}
				iVar1++;
			}
		}
	}
	return -1;
}

int func_1459()//Position - 0x9E3EB
{
	bool bVar0;
	bVar0 = false;
	while (bVar0 < func_14())
	{
		if (func_31(bVar0) && func_66(bVar0))
		{
			return 1;
		}
		bVar0++;
	}
	return 0;
}

void func_1460()//Position - 0x9E421
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	struct<3> Var4;
	bool bVar5;
	int iVar6;
	int iVar7;
	HUD::GET_HUD_COLOUR(12, &iVar0, &iVar1, &iVar2, &uVar3);
	if (((func_23() || func_43()) || func_44()) || func_15())
	{
		bVar5 = func_65(PLAYER::PLAYER_ID());
		if (bVar5 > -1)
		{
			if (!func_12(bVar5))
			{
				if (!func_536(Local_183.f_175[bVar5]) && iLocal_186 != 0)
				{
					Var4 = { func_412(func_16(), Local_183.f_175[bVar5], Local_183.f_679, bVar5, 0, 0) };
					GRAPHICS::DRAW_MARKER(1, Var4, 0f, 0f, 0f, 0f, 0f, 0f, func_1463(), iVar0, iVar1, iVar2, func_1462(uVar3), false, false, 2, false, 0, 0, false);
				}
			}
		}
	}
	else if (((((!func_27() && !func_534()) || func_366()) || (func_27() && func_41())) || func_235()) || func_19())
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_VEHICLE")) != 0 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_VEHICLE")) != 1)
			{
				if (func_1428(1))
				{
					iVar6 = func_1461();
					if (iVar6 >= 0)
					{
						if (func_74())
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_64[iVar6]))
							{
								iVar7 = NETWORK::NET_TO_VEH(Local_183.f_64[iVar6]);
								if (ENTITY::DOES_ENTITY_EXIST(iVar7) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar7, false))
								{
									GRAPHICS::DRAW_MARKER(1, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar7, 0f, -1.55f, 0.05f), 0f, 0f, 0f, 0f, 0f, 0f, 1.2f, 1.2f, 0.5f, iVar0, iVar1, iVar2, func_1462(uVar3), false, false, 2, false, 0, 0, false);
								}
							}
						}
						else if (!func_19() || !func_538(iVar6))
						{
							if (Local_183.f_970[iVar6] != 1)
							{
								GRAPHICS::DRAW_MARKER(1, func_412(func_16(), Local_183.f_175[iVar6], Local_183.f_679, func_1230(), 0, func_1250()), 0f, 0f, 0f, 0f, 0f, 0f, func_1463(), iVar0, iVar1, iVar2, func_1462(uVar3), false, false, 2, false, 0, 0, false);
							}
						}
					}
				}
			}
		}
	}
}

int func_1461()//Position - 0x9E65A
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < func_14())
	{
		if (func_475(iVar0, 1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1462(var uParam0)//Position - 0x9E687
{
	if (func_448())
	{
		return 25;
	}
	if ((func_235() || func_19()) || func_23())
	{
		return 75;
	}
	return uParam0;
}

Vector3 func_1463()//Position - 0x9E6BD
{
	if (func_448())
	{
		return 150f, 150f, 150f;
	}
	if (func_461())
	{
		return (20f * 1.5f), (20f * 1.5f), 4.5f;
	}
	if (func_235() || func_19())
	{
		return 4f, 4f, 4f;
	}
	if (func_23())
	{
		return 2f, 2f, 0.5f;
	}
	return 5f, 5f, 0.5f;
}

char* func_1469(bool bParam0)//Position - 0x9E892
{
	char* sVar0;
	bool bVar1;
	if (iLocal_185 != -1 && iLocal_185 != Local_183.f_123)
	{
		iLocal_185 = -1;
	}
	if ((bParam0 || func_15()) || (func_1255() && !func_12(func_65(PLAYER::PLAYER_ID()))))
	{
		bVar1 = func_65(PLAYER::PLAYER_ID());
		if (func_15())
		{
			if (iLocal_185 == Local_183.f_123 || (((bVar1 != -1 && Local_183.f_124[bVar1] > Local_183.f_123) && func_1255()) && func_532(func_412(func_16(), Local_183.f_680, Local_183.f_679, bVar1, 0, 0), PLAYER::PLAYER_PED_ID(), 0)))
			{
				sVar0 = "SBCONTRA_DROPW" /* GXT: Wait for the rest of your MC to arrive. */;
				iLocal_186 = 0;
				if (iLocal_185 == -1)
				{
					iLocal_185 = Local_183.f_123;
				}
			}
			else if (func_1255() && bVar1 != -1)
			{
				iLocal_186 = 1;
				switch (Local_183.f_123)
				{
					case 0:
						sVar0 = "SDRP_1" /* GXT: Deliver the ~a~ to the first ~y~drop-off. */;
						break;
					case 1:
						sVar0 = "SDRP_2" /* GXT: Deliver the ~a~ to the second ~y~drop-off. */;
						break;
					case 2:
						sVar0 = "SDRP_3" /* GXT: Deliver the ~a~ to the final ~y~drop-off. */;
						break;
					default:
						sVar0 = "SBCONTRA_DROPW" /* GXT: Wait for the rest of your MC to arrive. */;
						break;
				}
			}
			else
			{
				iLocal_186 = 1;
				sVar0 = "SBCONTRA_HLPD" /* GXT: Help deliver the ~a~~s~ to the ~y~drop-off. */;
			}
		}
		else if (func_44() || func_43())
		{
			if (func_1255())
			{
				if (func_44())
				{
					sVar0 = "SBCONTRA_R1" /* GXT: Race the ~a~ to the ~y~drop-off. */;
				}
				else
				{
					sVar0 = "SBCONTRA_DROP" /* GXT: Deliver the ~a~ to the ~y~drop-off. */;
				}
			}
			else
			{
				sVar0 = "SBCONTRA_HLPD" /* GXT: Help deliver the ~a~~s~ to the ~y~drop-off. */;
			}
		}
		else if (func_367())
		{
			if (func_1472())
			{
				sVar0 = "SBCONTRA_DROPP" /* GXT: Deliver the ~a~ to the ~y~drop-offs. */;
			}
			else
			{
				sVar0 = "SBCONTRA_DROP" /* GXT: Deliver the ~a~ to the ~y~drop-off. */;
			}
		}
		else if (func_448())
		{
			if (func_1472())
			{
				sVar0 = "SBCONTRA_DROPP" /* GXT: Deliver the ~a~ to the ~y~drop-offs. */;
			}
			else
			{
				sVar0 = "SBCONTRA_DROP" /* GXT: Deliver the ~a~ to the ~y~drop-off. */;
			}
		}
		else if (func_19())
		{
			sVar0 = "SBIKER_POST2" /* GXT: Go to a ~y~drop-off. */;
		}
		else if (func_23())
		{
			if (func_1472())
			{
				sVar0 = "SBCONTRA_DPFINP" /* GXT: Deliver the ~a~ to the ~b~buyers. */;
			}
			else
			{
				sVar0 = "SBCONTRA_DPFIN" /* GXT: Deliver the ~a~ to the ~b~buyer. */;
			}
		}
		else if (func_41() && !func_15())
		{
			if ((func_1472() && !func_74()) && !func_27())
			{
				sVar0 = "SBCONTRA_DROPPT" /* GXT: Deliver the ~a~ to the back up ~y~drop-offs. */;
			}
			else
			{
				sVar0 = "SBCONTRA_DROPT" /* GXT: Deliver the ~a~ to the back up ~y~drop-off. */;
			}
		}
		else if (func_74())
		{
			sVar0 = "SBCONTRA_DROP" /* GXT: Deliver the ~a~ to the ~y~drop-off. */;
		}
		else if (func_1472())
		{
			sVar0 = "SBCONTRA_DROPP" /* GXT: Deliver the ~a~ to the ~y~drop-offs. */;
		}
		else if (func_534())
		{
			sVar0 = "SBCONTRA_DROPF" /* GXT: Deliver the ~a~ to the final ~y~drop-off. */;
		}
		else
		{
			sVar0 = "SBCONTRA_DROP" /* GXT: Deliver the ~a~ to the ~y~drop-off. */;
		}
	}
	else if (func_41() && !func_15())
	{
		if (func_1472())
		{
			sVar0 = "SBCONTRA_HLPDPT" /* GXT: Help deliver the ~a~~s~ to the back up ~y~drop-offs. */;
		}
		else
		{
			sVar0 = "SBCONTRA_HLPDT" /* GXT: Help deliver the ~a~~s~ to the back up ~y~drop-off. */;
		}
	}
	else if (func_19())
	{
		if (func_1250())
		{
			sVar0 = "SBIKER_POST4" /* GXT: Deliver the parcel to the ~y~property. */;
		}
		else if (func_1472())
		{
			sVar0 = "SBIKER_POST3P" /* GXT: Help deliver the ~a~~s~ to the ~y~drop-offs. */;
		}
		else
		{
			sVar0 = "SBIKER_POST3" /* GXT: Help deliver the ~a~~s~ to the ~y~drop-off. */;
		}
	}
	else if (func_23())
	{
		if (func_1472())
		{
			sVar0 = "SB_HDPFINP" /* GXT: Help deliver the ~a~ to the ~b~buyers. */;
		}
		else
		{
			sVar0 = "SB_HDPFIN" /* GXT: Help deliver the ~a~ to the ~b~buyer. */;
		}
	}
	else if (func_1472())
	{
		sVar0 = "SBCONTRA_HLPDP" /* GXT: Help deliver the ~a~~s~ to the ~y~drop-offs. */;
	}
	else
	{
		sVar0 = "SBCONTRA_HLPD" /* GXT: Help deliver the ~a~~s~ to the ~y~drop-off. */;
	}
	return sVar0;
}

bool func_1470()//Position - 0x9EB9B
{
	return func_63(NETWORK::PARTICIPANT_ID(), 6);
}

bool func_1472()//Position - 0x9EC17
{
	if (((((func_73(-1) == 1 || func_18()) || func_15()) || func_43()) || func_44()) || func_27())
	{
		return 0;
	}
	return func_228() < (func_73(-1) - 1);
}

void func_1473()//Position - 0x9EC6B
{
	if (func_17())
	{
		if (BitTest(Local_133.f_22, 5))
		{
			if (func_1191() && __LIB_2__::func_47(&(Local_133.f_2), Local_133.f_16 + 30000, 0))
			{
				if (__LIB_37__::func_818(148, "BK_SELL_TXTM_2" /* GXT: By my calculations you should be stoned as a goddam kite by now. That stuff's bad for you, you know. */, 1, 0, 0, 0, 0, 1, 0, 1))
				{
					MISC::CLEAR_BIT(&(Local_133.f_22), 5);
				}
			}
		}
	}
	if (func_27())
	{
		if (func_29(27))
		{
			if (!func_1336(26))
			{
				if (__LIB_37__::func_818(148, "SBIKERP_NWBY" /* GXT: Alright, take two. This one probably isn't a massive sting. Probably. */, 1, 0, 0, 0, 0, 1, 0, 1))
				{
					__LIB_29__::func_82(26);
				}
			}
		}
	}
	if (!BitTest(Local_133.f_22, 4))
	{
		if (func_1336(11))
		{
			if (__LIB_37__::func_818(148, "SBIKERP_HLP3" /* GXT: Well they know you ain't a cop now! Lose them! */, 1, 0, 0, 0, 0, 1, 0, 1))
			{
				MISC::SET_BIT(&(Local_133.f_22), 4);
			}
		}
		else if ((func_17() && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) && func_62(10))
		{
			if (!BitTest(Local_133.f_22, 6))
			{
				if (__LIB_37__::func_818(148, "BK_SELL_TXTM_3" /* GXT: I mean, if they catch you there's not exactly a lack of evidence. Lose 'em. Then lose 'em again to be sure. */, 1, 0, 0, 0, 0, 1, 0, 1))
				{
					MISC::SET_BIT(&(Local_133.f_22), 6);
				}
			}
		}
	}
	if (!BitTest(Local_133.f_22, 2))
	{
		switch (func_16())
		{
			case 1:
				if (func_1191())
				{
					if (__LIB_37__::func_818(148, "BK_SELL_TXTM_1" /* GXT: We don't want the cops on our tail. Fly low for this one! Keep an eye on your radar. */, 1, 0, 0, 0, 0, 1, 0, 1))
					{
						MISC::SET_BIT(&(Local_133.f_22), 2);
					}
				}
				break;
			case 6:
				if (func_1449())
				{
					if (__LIB_37__::func_818(148, "SBIKERS_TXTG1" /* GXT: Just when you think the cops have finally got the message. Lose them and lose the heat. I'll be in touch. */, 1, 0, 0, 0, 0, 1, 0, 1))
					{
						MISC::SET_BIT(&(Local_133.f_22), 2);
					}
				}
				break;
			}
	}
}

void func_1497()//Position - 0xA00F5
{
	bool bVar0;
	bool bVar1;
	func_1655();
	func_1637();
	func_1635();
	func_1634();
	__LIB_0__::func_371();
	func_1631();
	func_1630();
	func_1626();
	func_1533();
	func_1185();
	func_1528();
	func_1525();
	func_1523();
	func_1518();
	func_1517();
	func_1511();
	func_1509();
	func_1504();
	switch (func_1503())
	{
		case 0:
			func_895(0);
			func_1502(1);
			break;
		case 1:
			if (func_1459() || func_230(0))
			{
				func_1502(2);
			}
			break;
		case 2:
			if (func_1459() || func_230(0))
			{
				if (func_230(0))
				{
					if (!func_448() && !func_461())
					{
						bVar1 = false;
						while (bVar1 < func_14())
						{
							func_474(bVar1, 0);
							func_1197(bVar1, 1, 0);
							bVar1++;
						}
					}
					func_1501();
					func_1502(3);
				}
				else if (func_1428(0))
				{
					bVar0 = func_1230();
					if (func_12(bVar0))
					{
						func_1498(bVar0);
						if (!func_448())
						{
							func_474(bVar0, 0);
							func_1197(bVar0, 1, 0);
						}
					}
				}
			}
			else
			{
				func_1502(1);
			}
			break;
		case 3:
			__LIB_3__::func_647(24);
			break;
	}
}

void func_1498(bool bParam0)//Position - 0xA0231
{
	int iVar0;
	iVar0 = func_1500(bParam0);
	if (iVar0 != 5)
	{
		if (!func_1342(iVar0))
		{
			__LIB_0__::func_151("BSELL_DEL_COMP" /* GXT: Delivery complete. This vehicle no longer contains any Product to sell. */, -1);
			func_1341(iVar0);
		}
	}
}

int func_1500(int iParam0)//Position - 0xA0278
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 1;
		case 2:
			return 2;
		case 3:
			return 3;
		default:
	}
	return 5;
}

void func_1501()//Position - 0xA02B0
{
	if (__LIB_0__::func_109())
	{
		switch (func_16())
		{
			case 3:
			case 7:
			case 1:
			case 8:
			case 4:
			case 9:
			case 5:
			case 2:
			case 6:
			case 0:
			case 11:
			case 12:
			case 10:
				func_851(3);
				break;
			default:
				func_851(3);
				break;
			}
	}
}

void func_1502(int iParam0)//Position - 0xA0326
{
	Local_184[NETWORK::PARTICIPANT_ID_TO_INT() /*29*/] = iParam0;
}

int func_1503()//Position - 0xA0339
{
	return Local_184[NETWORK::PARTICIPANT_ID_TO_INT() /*29*/];
}

void func_1504()//Position - 0xA034A
{
	if (func_19())
	{
		switch (Local_133.f_488)
		{
			case 0:
				if (func_1508())
				{
					Local_133.f_488++;
				}
				break;
			case 1:
				if (func_1505())
				{
					Local_133.f_488 = 0;
				}
				break;
			}
	}
}

int func_1505()//Position - 0xA0395
{
	int iVar0;
	int iVar1;
	iVar0 = func_1506();
	iVar1 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (ENTITY::IS_ENTITY_DEAD(iVar1, false) || ENTITY::HAS_ANIM_EVENT_FIRED(iVar1, MISC::GET_HASH_KEY("RELEASE_PROP")))
			{
				ENTITY::DETACH_ENTITY(iVar0, true, true);
				ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar0);
				return 1;
			}
		}
	}
	return 0;
}

int func_1506()//Position - 0xA03ED
{
	int iVar0;
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(func_1507()))
	{
		iVar0 = NETWORK::NET_TO_ENT(Local_133.f_487);
	}
	return iVar0;
}

var func_1507()//Position - 0xA040D
{
	return Local_133.f_487;
}

int func_1508()//Position - 0xA041A
{
	int iVar0;
	struct<3> Var1;
	if (BitTest(Local_133.f_237, 0))
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(func_1507()))
		{
			if (NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
			{
				iVar0 = PLAYER::PLAYER_PED_ID();
				if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), MISC::GET_HASH_KEY("CREATE_PROP")))
					{
						Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, 0.5f, 0.5f, 0f) };
						if (__LIB_1__::func_262(&(Local_133.f_487), func_550(), Var1, 0, 1, 0, 1, 0, 0, 0))
						{
							ENTITY::ATTACH_ENTITY_TO_ENTITY(NETWORK::NET_TO_OBJ(func_1507()), iVar0, PED::GET_PED_BONE_INDEX(iVar0, 28422), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, 0);
							MISC::CLEAR_BIT(&(Local_133.f_237), 0);
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

void func_1509()//Position - 0xA04D1
{
	if (func_1510())
	{
		if (func_253())
		{
			if (!func_1336(23))
			{
				if (func_1373())
				{
					if (Local_183.f_977 && __LIB_0__::func_529(PLAYER::PLAYER_PED_ID(), func_412(2, 3, Local_183.f_679, func_1230(), 0, 0), 0) < 100f)
					{
						if (__LIB_37__::func_818(148, "BSELL_ALTRUIST" /* GXT: Just because you're giving these crazies a good deal, don't expect a warm welcome. Only get as close as you have to. */, 1, 0, 0, 0, 0, 1, 0, 1))
						{
							__LIB_29__::func_82(23);
						}
					}
				}
			}
		}
	}
}

int func_1510()//Position - 0xA0543
{
	if (func_253())
	{
		return 1;
	}
	return 0;
}

void func_1511()//Position - 0xA0557
{
	if (func_25())
	{
		if (__LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (func_63(NETWORK::PARTICIPANT_ID(), 19))
			{
				if (!__LIB_25__::func_111(PLAYER::PLAYER_PED_ID(), 2, -1))
				{
					STREAMING::REQUEST_CLIP_SET("move_m@bag");
					if (STREAMING::HAS_CLIP_SET_LOADED("move_m@bag"))
					{
						func_1512(PLAYER::PLAYER_PED_ID(), 2, -1);
						PED::SET_PED_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID(), "move_m@bag", 0.25f);
					}
				}
			}
			else if (__LIB_25__::func_111(PLAYER::PLAYER_PED_ID(), 2, -1))
			{
				func_624(PLAYER::PLAYER_PED_ID(), 2, -1, -1);
				STREAMING::REMOVE_CLIP_SET("move_m@bag");
				PED::RESET_PED_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID(), 0.25f);
			}
		}
	}
}

void func_1512(int iParam0, int iParam1, int iParam2)//Position - 0xA05F0
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
	if (__LIB_18__::func_485(iParam0, &Var0, iParam1, &iVar1))
	{
		if ((iParam1 == 1 || iParam1 == 4) || iParam1 == 3)
		{
			func_1516(iParam0);
			__LIB_25__::func_113(iParam0, &Var0, iParam2);
		}
		if (iParam1 == 11)
		{
			if (iVar1 != -1)
			{
				if (__LIB_2__::func_256(iVar1) == 22)
				{
					Var0.f_26[2] = -1;
				}
				else if (__LIB_2__::func_256(iVar1) == 8)
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
					if (__LIB_7__::func_241(ENTITY::GET_ENTITY_MODEL(iParam0), 7, func_777(iParam0, 7, -1), -1))
					{
						Var0[7] = 0;
						Var0.f_13[7] = 0;
					}
				}
			}
			__LIB_25__::func_113(iParam0, &Var0, iParam2);
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

void func_1516(int iParam0)//Position - 0xA1336
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 77)
	{
		if (__LIB_25__::func_111(iParam0, iVar0, -1))
		{
			if (((((((((iVar0 == 0 || iVar0 == 1) || iVar0 == 3) || iVar0 == 4) || iVar0 == 5) || iVar0 == 6) || iVar0 == 7) || iVar0 == 8) || iVar0 == 10) || iVar0 == 11)
			{
				func_624(iParam0, iVar0, -1, -1);
			}
		}
		iVar0++;
	}
}

void func_1517()//Position - 0xA13CB
{
	bool bVar0;
	if (func_19())
	{
		bVar0 = false;
		while (bVar0 < func_14())
		{
			if (func_66(bVar0) && !func_12(bVar0))
			{
				if (func_1250() || func_477(bVar0))
				{
					if (!VEHICLE::GET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(func_13(bVar0), PLAYER::PLAYER_ID()))
					{
						VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(func_13(bVar0), PLAYER::PLAYER_ID(), true);
					}
				}
				else if (VEHICLE::GET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(func_13(bVar0), PLAYER::PLAYER_ID()))
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(func_13(bVar0), PLAYER::PLAYER_ID(), false);
				}
			}
			bVar0++;
		}
	}
}

void func_1518()//Position - 0xA145B
{
	int iVar0;
	switch (func_16())
	{
		case 7:
			if (func_1522() && func_475(0, 1))
			{
				iVar0 = func_522(0);
				if (!__LIB_0__::func_649(&(Local_133.f_8)))
				{
					__LIB_0__::func_580(&(Local_133.f_8), 0, 0);
					Local_133.f_15 = MISC::GET_RANDOM_INT_IN_RANGE(20000, 40000);
				}
				else if (__LIB_2__::func_47(&(Local_133.f_8), Local_133.f_15, 0) || Local_133.f_14 == 0)
				{
					__LIB_6__::func_834(iVar0, func_1521(), 24);
					__LIB_0__::func_579(&(Local_133.f_8));
					Local_133.f_14++;
				}
			}
			break;
	}
}

char* func_1521()//Position - 0xA1721
{
	switch (Local_133.f_14)
	{
		case 0:
			return "GENERIC_HOWS_IT_GOING";
		case 1:
			return "PHONE_CONV1_INTRO";
		case 2:
			return "PHONE_CONV1_CHAT1";
		case 3:
			return "PHONE_CONV1_CHAT2";
		case 4:
			return "PHONE_CONV1_CHAT3";
		case 5:
			return "PHONE_CONV2_CHAT2";
		case 6:
			return "PHONE_CONV2_CHAT3";
		case 7:
			return "PHONE_CONV3_CHAT1";
		case 8:
			return "PHONE_CONV3_CHAT2";
		case 9:
			return "PHONE_CONV3_CHAT3";
		case 10:
			return "PHONE_CONV4_INTRO";
		case 11:
			return "PHONE_CONV4_CHAT1";
		case 12:
			return "PHONE_CONV4_CHAT2";
		case 13:
			return "PHONE_CONV4_CHAT3";
		case 14:
			return "CHAT_STATE";
		case 15:
			return "CHAT_STATE";
		default:
	}
	return "";
}

bool func_1522()//Position - 0xA1814
{
	return Local_133.f_14 < 16;
}

void func_1523()//Position - 0xA1823
{
	bool bVar0;
	if (func_366())
	{
		if (func_1428(1))
		{
			bVar0 = func_1230();
			if (bVar0 != -1)
			{
				if (!__LIB_0__::func_649(&(Local_184[NETWORK::PARTICIPANT_ID_TO_INT() /*29*/].f_16[bVar0 /*2*/])))
				{
					if (func_1192(bVar0, 1))
					{
						__LIB_0__::func_580(&(Local_184[NETWORK::PARTICIPANT_ID_TO_INT() /*29*/].f_16[bVar0 /*2*/]), 0, 0);
					}
				}
				else if (__LIB_2__::func_47(&(Local_184[NETWORK::PARTICIPANT_ID_TO_INT() /*29*/].f_16[bVar0 /*2*/]), func_1369(), 0))
				{
					if (!func_1336(13))
					{
						if (Local_183.f_175[bVar0] < (func_73(-1) - 1))
						{
							func_1524(bVar0, Local_183.f_175[bVar0]);
						}
						__LIB_29__::func_82(13);
					}
				}
			}
		}
	}
}

void func_1524(bool bParam0, var uParam1)//Position - 0xA18CC
{
	struct<4> Var0;
	int iVar1;
	Var0.f_0 = -1348629633;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = bParam0;
	Var0.f_3 = uParam1;
	iVar1 = __LIB_4__::func_511(1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 4, iVar1);
	}
}

void func_1525()//Position - 0xA1908
{
	int iVar0;
	if (func_17())
	{
		iVar0 = func_522(0);
		if (((ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false)) && PED::IS_PED_IN_ANY_VEHICLE(iVar0, false)) && !ENTITY::IS_ENTITY_IN_WATER(iVar0))
		{
			if (func_1527())
			{
				if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_133.f_306))
				{
					Local_133.f_306 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_PED_BONE("scr_bike_truck_weed_smoke_cabin", iVar0, 0f, 0f, 0f, 0f, 0f, 0f, 28422, 1f, false, false, false);
					GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(Local_133.f_306, "smoke_fade", 0f, false);
				}
			}
		}
		else
		{
			func_1526();
		}
	}
}

void func_1526()//Position - 0xA1994
{
	if (Local_133.f_306 != 0)
	{
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_133.f_306))
		{
			GRAPHICS::STOP_PARTICLE_FX_LOOPED(Local_133.f_306, false);
		}
	}
}

int func_1527()//Position - 0xA19C1
{
	STREAMING::REQUEST_NAMED_PTFX_ASSET("scr_bike_contraband");
	if (STREAMING::HAS_NAMED_PTFX_ASSET_LOADED("scr_bike_contraband"))
	{
		return 1;
	}
	return 0;
}

void func_1528()//Position - 0xA19E3
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	if (func_508())
	{
		if (func_1428(0))
		{
			bVar0 = func_1230();
		}
		else
		{
			bVar0 = func_1423(1, 0, 0);
		}
		if (bVar0 != -1)
		{
			bVar2 = Local_183.f_175[bVar0];
			if (bVar2 != -1)
			{
				if (func_448() && BitTest(Local_183.f_134[bVar0], bVar2))
				{
					func_1530(bVar2, func_412(func_16(), bVar2, Local_183.f_679, bVar0, 0, 0));
				}
				else
				{
					bVar3 = true;
					iVar1 = 0;
					if (!BitTest(Local_183.f_134[bVar0], bVar2))
					{
						iVar1 = 0;
						while (iVar1 < func_14())
						{
							if (BitTest(Local_183.f_134[iVar1], bVar2))
							{
								bVar3 = false;
							}
							iVar1++;
						}
					}
					else
					{
						bVar3 = false;
					}
					if (bVar3)
					{
						func_1529(bVar2);
					}
				}
			}
		}
	}
}

void func_1529(bool bParam0)//Position - 0xA1AA6
{
	if (Local_133.f_275[bParam0] != 0)
	{
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_133.f_275[bParam0]))
		{
			GRAPHICS::STOP_PARTICLE_FX_LOOPED(Local_133.f_275[bParam0], false);
		}
	}
}

void func_1530(int iParam0, struct<3> Param1)//Position - 0xA1AD9
{
	bool bVar0;
	if (__LIB_28__::func_699())
	{
		if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_133.f_275[iParam0]))
		{
			bVar0 = true;
			GRAPHICS::USE_PARTICLE_FX_ASSET("scr_lowrider");
			Local_133.f_275[iParam0] = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_lowrider_flare", Param1, 0f, 0f, -0.2f, func_1531(), false, false, false, bVar0);
			GRAPHICS::SET_PARTICLE_FX_LOOPED_COLOUR(Local_133.f_275[iParam0], 0.8f, 0.18f, 0.19f, bVar0);
		}
	}
}

float func_1531()//Position - 0xA1B49
{
	if (func_253())
	{
		return (5f / 4f);
	}
	return 5f;
}

void func_1533()//Position - 0xA1B81
{
	var uVar0;
	if ((((__LIB_2__::func_246(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())) || NETWORK::IS_PLAYER_IN_CUTSCENE(PLAYER::PLAYER_ID())) || __LIB_5__::func_751()) || __LIB_6__::func_984(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (!func_1909(28))
	{
		__LIB_0__::func_203(&uLocal_188, 2, 0, "LJT", 0, 1);
		func_1881(28);
	}
	else if (!func_1909(29))
	{
		if (func_1615(0, 1, 0, 1))
		{
			if (__LIB_6__::func_108())
			{
				__LIB_0__::func_168(148, Global_20266, 1);
			}
			MISC::SET_BIT(&uVar0, 4);
			if (func_1534(&uLocal_188, 148, "BPLESAU", func_1612(), uVar0, 0))
			{
				func_1881(29);
			}
		}
	}
}

int func_1534(var uParam0, int iParam1, char* sParam2, char* sParam3, var uParam4, int iParam5)//Position - 0xA1C3D
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	if (__LIB_18__::func_331())
	{
		return 0;
	}
	if (__LIB_2__::func_138())
	{
		return 0;
	}
	sVar0 = 0;
	bVar1 = false;
	iVar2 = -99;
	return func_1535(uParam0, iParam1, sParam2, sParam3, 1, iParam5, uParam4, sVar0, bVar1, iVar2, sVar0, sVar0, -1);
}

int func_1535(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, var uParam6, char* sParam7, bool bParam8, int iParam9, char* sParam10, char* sParam11, int iParam12)//Position - 0xA1C82
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return 0;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam2) > 7)
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		return 0;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam3) > 15)
	{
		return 0;
	}
	iVar0 = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
	iVar1 = __LIB_2__::func_137(sParam2, sParam3);
	iVar2 = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
	{
		iVar2 = MISC::GET_HASH_KEY(sParam7);
	}
	if (__LIB_25__::func_2(iVar0, iVar1, iVar2))
	{
		return 1;
	}
	if (!__LIB_7__::func_267(uParam6))
	{
		return 0;
	}
	if (__LIB_18__::func_480(iVar0, iVar1, iVar2))
	{
		if (__LIB_2__::func_132())
		{
			return 0;
		}
		__LIB_2__::func_131();
		return func_1542(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, uParam6, sParam7, bParam8, iParam9, sParam10, sParam11);
	}
	if (!__LIB_2__::func_112(iParam4))
	{
		return 0;
	}
	__LIB_18__::func_479(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, uParam6);
	return 0;
}

int func_1542(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, var uParam7, char* sParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12)//Position - 0xA1E6D
{
	struct<2> Var0;
	__LIB_2__::func_130();
	if (iParam6 == 5)
	{
		iParam6 = 0;
	}
	if (iParam5 == 8)
	{
		return __LIB_37__::func_809(uParam0, sParam3, sParam4);
	}
	if (iParam5 == 4)
	{
		StringCopy(&Var0, "CELL_226" /* GXT: Accept? */, 16);
		return __LIB_37__::func_819(uParam0, iParam1, sParam3, sParam4, &Var0);
	}
	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
		{
			return __LIB_37__::func_809(uParam0, sParam3, sParam4);
		}
		return __LIB_39__::func_719(uParam0, iParam1, sParam3, sParam4, uParam7);
	}
	if (iParam5 == 5)
	{
		return func_1572(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 2)
	{
		return func_1568(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 3)
	{
		return __LIB_42__::func_484(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 6)
	{
		return __LIB_42__::func_655(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	return 0;
}

int func_1568(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)//Position - 0xA2D14
{
	bool bVar0;
	bVar0 = false;
	return func_1569(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_1569(int iParam0, int iParam1, char* sParam2, bool bParam3, var uParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)//Position - 0xA2D37
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	bVar0 = __LIB_0__::func_160();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		bVar0 = iParam1;
		sVar2 = PLAYER::GET_PLAYER_NAME(bVar0);
		iVar1 = __LIB_35__::func_811(bVar0);
		if (iVar1 == 0)
		{
			if (NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_1641031.f_40.f_13))
			{
				return 0;
			}
		}
		Global_22666 = iVar1;
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = __LIB_2__::func_287(sParam5, bParam6, &iVar3);
	iVar5 = __LIB_7__::func_263(iParam7, &iVar3);
	iVar6 = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		iVar6++;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
		{
			iVar6++;
		}
	}
	if (MISC::ARE_STRINGS_EQUAL(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (BitTest(uParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (BitTest(uParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
	{
		bVar12 = __LIB_41__::func_299(iParam0, sParam2, iVar10, sVar4, iVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = __LIB_37__::func_818(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (BitTest(uParam4, 0))
	{
		__LIB_2__::func_116();
	}
	__LIB_2__::func_121();
	__LIB_2__::func_115();
	__LIB_2__::func_114();
	return 1;
}

int func_1572(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)//Position - 0xA2F41
{
	bool bVar0;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
	}
	if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	__LIB_2__::func_121();
	bVar0 = true;
	if (func_1569(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		__LIB_2__::func_113(120000);
		return 1;
	}
	return 0;
}

char* func_1612()//Position - 0xA39E1
{
	int iVar0;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
	if (func_18())
	{
		return "BPLES_CONV";
	}
	else if (func_367())
	{
		return "BPLES_AIRD";
	}
	else if (func_19())
	{
		return "BPLES_POST";
	}
	else if (func_74())
	{
		return "BPLES_BEN";
	}
	else if (func_366())
	{
		return "BPLES_BORDER";
	}
	else if (func_253())
	{
		return "BPLES_HELI";
	}
	else if (func_235())
	{
		return "BPLES_TRASH";
	}
	else if (func_27())
	{
		return "BPLES_STING";
	}
	else if (func_23())
	{
		return "BPLES_INNEED";
	}
	else if (func_17())
	{
		return "BPLES_PROVEN";
	}
	else if (func_43())
	{
		return "BPLES_DROPS";
	}
	else if (func_44())
	{
		return "BPLES_RACE";
	}
	else if (func_15())
	{
		if (func_41())
		{
			if (func_29(24))
			{
				return "BPLES_CGANG";
			}
			else if (func_29(25))
			{
				return "BPLES_CCOPS";
			}
		}
		return "BPLES_CLUB";
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return "BPLES_SGEN1";
			case 1:
				return "BPLES_SGEN2";
			case 2:
				return "BPLES_SGEN3";
			}
		default:
	}
	return "";
}

int func_1615(bool bParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0xA3BC0
{
	if (iParam2 && HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		return 0;
	}
	if (__LIB_0__::func_75())
	{
		return 0;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	if (__LIB_0__::func_190())
	{
		return 0;
	}
	if (__LIB_1__::func_41())
	{
		return 0;
	}
	if (bParam1)
	{
		if (__LIB_7__::func_628(PLAYER::PLAYER_ID(), 1, 0))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (__LIB_2__::func_286(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (__LIB_2__::func_101())
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (bParam3)
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (Global_1836356)
	{
		return 0;
	}
	if (__LIB_1__::func_709())
	{
		return 0;
	}
	if (__LIB_0__::func_739())
	{
		return 0;
	}
	if (__LIB_0__::func_706())
	{
		return 0;
	}
	if (Global_75485)
	{
		return 0;
	}
	if (Global_2825428)
	{
		return 0;
	}
	if (__LIB_1__::func_288())
	{
		return 0;
	}
	return 1;
}

void func_1626()//Position - 0xA3E38
{
	int iVar0;
	int iVar1;
	iVar0 = (func_237() - MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_183.f_10)));
	if (iVar0 <= 0)
	{
		iVar1 = iVar0;
		iVar0 = 0;
	}
	if ((__LIB_0__::func_649(&(Local_183.f_10)) && iVar0 < 35000) && iVar0 > 0)
	{
		func_1629(iVar0, iVar1);
	}
	else
	{
		switch (func_16())
		{
			case 3:
				if (func_1191())
				{
					func_851(2);
				}
				break;
			case 0:
				if (func_1191())
				{
					func_851(18);
				}
				break;
			case 1:
				if (func_1191())
				{
					func_851(9);
				}
				break;
			case 4:
				if (!func_855(11))
				{
					if (!__LIB_6__::func_984(PLAYER::PLAYER_ID()))
					{
						func_851(11);
					}
				}
				break;
			case 9:
				if (func_1191())
				{
					func_851(12);
				}
				break;
			case 8:
				if (func_1191())
				{
					func_851(10);
				}
				break;
			case 2:
				if (func_1191())
				{
					func_851(13);
				}
				break;
			case 5:
				if (func_1191())
				{
					func_851(14);
				}
				break;
			case 7:
				if (func_1191())
				{
					if (!func_855(5))
					{
						func_851(5);
					}
					else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
					{
						if (func_855(6))
						{
							func_1628(6);
							func_851(7);
						}
					}
					else
					{
						if (func_855(7))
						{
							func_1628(7);
						}
						func_851(6);
					}
				}
				break;
			case 6:
				if (func_1191())
				{
					if (!func_855(15))
					{
						func_851(15);
					}
					else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
					{
						if (func_855(16))
						{
							func_1628(16);
							func_851(17);
						}
					}
					else
					{
						if (func_855(17))
						{
							func_1628(17);
						}
						func_851(16);
					}
				}
				break;
			case 11:
				if (!func_855(21))
				{
					if (!__LIB_6__::func_984(PLAYER::PLAYER_ID()))
					{
						func_851(21);
					}
				}
				break;
			case 12:
				if (!func_855(22))
				{
					if (!__LIB_6__::func_984(PLAYER::PLAYER_ID()))
					{
						func_851(22);
					}
				}
				else if (func_41())
				{
					if (!func_855(24))
					{
						func_851(24);
					}
					else if (!func_855(25) && func_1627())
					{
						func_851(25);
					}
				}
				break;
			case 10:
				if (!func_855(23))
				{
					if (!__LIB_6__::func_984(PLAYER::PLAYER_ID()))
					{
						func_851(23);
					}
				}
				break;
			}
	}
}

int func_1627()//Position - 0xA40AE
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < func_246())
	{
		if (func_524(iVar0) != 18)
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_1628(int iParam0)//Position - 0xA40DB
{
	int iVar0;
	int iVar1;
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(uLocal_152[iVar0]), iVar1);
}

void func_1629(int iParam0, int iParam1)//Position - 0xA40FE
{
	switch (iLocal_131)
	{
		case 0:
			if (iParam0 <= 35000 && iParam0 >= 33000)
			{
				if (AUDIO::PREPARE_MUSIC_EVENT("FM_PRE_COUNTDOWN_30S"))
				{
					AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", true);
					AUDIO::TRIGGER_MUSIC_EVENT("FM_PRE_COUNTDOWN_30S");
					iLocal_131 = 1;
				}
			}
			break;
		case 1:
			if (!BitTest(uLocal_132, 0))
			{
				if (!BitTest(uLocal_132, 1))
				{
					if (iParam0 <= 33000 && iParam0 > 30000)
					{
						AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", true);
						MISC::SET_BIT(&uLocal_132, 1);
					}
				}
				if (iParam0 <= 30000)
				{
					if (AUDIO::PREPARE_MUSIC_EVENT("FM_COUNTDOWN_30S"))
					{
						AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", true);
						AUDIO::SET_USER_RADIO_CONTROL_ENABLED(false);
						AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S");
						AUDIO::PREPARE_MUSIC_EVENT("FM_COUNTDOWN_30S_KILL");
						MISC::SET_BIT(&uLocal_132, 0);
					}
				}
			}
			else if (!BitTest(uLocal_132, 2))
			{
				if (iParam0 <= 27000)
				{
					AUDIO::SET_USER_RADIO_CONTROL_ENABLED(true);
					AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", false);
					MISC::SET_BIT(&uLocal_132, 2);
					iLocal_131 = 2;
				}
			}
			break;
		case 2:
			if (!BitTest(uLocal_132, 3))
			{
				if (!BitTest(uLocal_132, 4))
				{
					if (iParam0 <= 5000)
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "5s", "MP_MISSION_COUNTDOWN_SOUNDSET", false);
						MISC::SET_BIT(&uLocal_132, 4);
					}
				}
				if (iParam0 <= 0)
				{
					if (AUDIO::PREPARE_MUSIC_EVENT("FM_COUNTDOWN_30S_FIRA"))
					{
						AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S_FIRA");
						AUDIO::CANCEL_MUSIC_EVENT("FM_COUNTDOWN_30S_KILL");
						MISC::SET_BIT(&uLocal_132, 3);
					}
				}
				else if (func_239() == 2)
				{
					if (AUDIO::PREPARE_MUSIC_EVENT("FM_COUNTDOWN_30S_FIRA"))
					{
						AUDIO::CANCEL_MUSIC_EVENT("FM_COUNTDOWN_30S");
						AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S_KILL");
						AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S_FIRA");
						MISC::SET_BIT(&uLocal_132, 3);
					}
				}
			}
			if (BitTest(uLocal_132, 1))
			{
				if (iParam1 <= -2000)
				{
					AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", false);
					AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", false);
					MISC::CLEAR_BIT(&uLocal_132, 1);
				}
			}
			break;
	}
}

void func_1630()//Position - 0xA42BF
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5[4];
	iVar0 = 20000;
	iVar1 = 20000;
	if ((func_61() || func_448()) || func_461())
	{
		bVar2 = false;
		while (bVar2 < func_14())
		{
			iVar3 = (14 + bVar2);
			iVar4 = iVar3;
			iVar0 = 20000;
			if (func_61())
			{
				switch (bVar2)
				{
					case 0:
						if (!func_62(10))
						{
							iVar0 = 5000;
						}
						break;
					case 1:
						if (!func_62(11))
						{
							iVar0 = 5000;
						}
						break;
					case 2:
						if (!func_62(12))
						{
							iVar0 = 5000;
						}
						break;
					case 3:
						if (!func_62(13))
						{
							iVar0 = 5000;
						}
						break;
					}
			}
			if (func_235())
			{
				iVar1 = 40000;
			}
			if (__LIB_0__::func_121(func_13(bVar2)))
			{
				if (!func_63(NETWORK::PARTICIPANT_ID(), iVar4))
				{
					if (!BitTest(Local_183.f_961, bVar2))
					{
						if (!func_12(bVar2))
						{
							if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(func_13(bVar2)))
							{
								if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(func_13(bVar2), 0, iVar0))
								{
									iVar5[bVar2] = 1;
								}
								else if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(func_13(bVar2), 1, iVar0))
								{
									iVar5[bVar2] = 1;
								}
								else if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(func_13(bVar2), 2, iVar0))
								{
									iVar5[bVar2] = 1;
								}
								else if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(func_13(bVar2), 3, iVar1))
								{
									iVar5[bVar2] = 1;
								}
								else if (iVar0 == 5000)
								{
									if (!func_1453())
									{
										if (!__LIB_0__::func_649(&(Local_183.f_904[bVar2 /*2*/])))
										{
											if (!VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(func_13(bVar2)))
											{
												__LIB_0__::func_580(&(Local_183.f_904[bVar2 /*2*/]), 0, 0);
											}
										}
										else if (!VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(func_13(bVar2)))
										{
											if (__LIB_2__::func_47(&(Local_183.f_904[bVar2 /*2*/]), iVar0, 0))
											{
												iVar5[bVar2] = 1;
											}
										}
										else
										{
											__LIB_0__::func_579(&(Local_183.f_904[bVar2 /*2*/]));
										}
									}
								}
							}
						}
					}
					if (iVar5[bVar2])
					{
						if (func_448() || func_461())
						{
							if (__LIB_3__::func_686(func_13(bVar2)))
							{
								ENTITY::SET_ENTITY_CAN_BE_DAMAGED(func_13(bVar2), true);
								ENTITY::SET_ENTITY_INVINCIBLE(func_13(bVar2), false);
								NETWORK::NETWORK_EXPLODE_VEHICLE(func_13(bVar2), true, false, -1);
							}
						}
						else
						{
							func_531(iVar4);
							VEHICLE::SET_VEHICLE_ENGINE_ON(func_13(bVar2), false, true, false);
							VEHICLE::SET_VEHICLE_ENGINE_HEALTH(func_13(bVar2), 0f);
							VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(func_13(bVar2), 0f);
						}
					}
				}
				else if (BitTest(Local_183.f_961, bVar2))
				{
					func_1348(iVar4);
				}
			}
			bVar2++;
		}
	}
}

void func_1631()//Position - 0xA4541
{
	float fVar0;
	float fVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	if (func_367())
	{
		bVar2 = false;
		bVar3 = false;
		bVar4 = func_1230();
		if (bVar4 != -1)
		{
			if (func_66(bVar4))
			{
				fVar0 = __LIB_28__::func_700(func_13(bVar4), &fVar1);
				if (Local_133.f_264 != fVar1)
				{
					Local_133.f_264 = fVar1;
				}
				if (Local_133.f_263 != fVar0)
				{
					Local_133.f_263 = fVar0;
				}
				if (Local_133.f_263 > func_848())
				{
					if (bVar2 == 0)
					{
						bVar2 = true;
					}
					if (func_1192(bVar4, 1))
					{
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
						{
							if (func_1909(16))
							{
								func_1335(16);
								if (__LIB_0__::func_649(&(Local_133.f_255)))
								{
									__LIB_0__::func_579(&(Local_133.f_255));
								}
							}
							if (!func_63(NETWORK::PARTICIPANT_ID(), 11))
							{
								func_531(11);
							}
						}
					}
					else if (func_63(NETWORK::PARTICIPANT_ID(), 11))
					{
						func_1348(11);
					}
				}
				else
				{
					if (func_63(NETWORK::PARTICIPANT_ID(), 11))
					{
						func_1348(11);
					}
					if (bVar2 == 1)
					{
						bVar2 = false;
					}
					if (func_1192(bVar4, 1))
					{
						if (!func_1909(18))
						{
							if ((func_1615(0, 1, 1, 1) && !__LIB_0__::func_1("SCONT_GOHP" /* GXT: The Ghost Organization VIP Ability can be used to temporarily hide Special Cargo shipments from other players in session. */)) && ENTITY::IS_ENTITY_IN_AIR(func_13(bVar4)))
							{
								__LIB_1__::func_278("SCONTRA_HLP13" /* GXT: Fly as low as possible to avoid detection by the Cops. */, -1);
								__LIB_36__::func_794(1);
								func_1881(18);
							}
						}
						else if (!func_1336(24))
						{
							if (((func_1615(0, 1, 1, 1) && !__LIB_0__::func_1("SCONT_GOHP" /* GXT: The Ghost Organization VIP Ability can be used to temporarily hide Special Cargo shipments from other players in session. */)) && !__LIB_0__::func_1("SCONTRA_HLP13" /* GXT: Fly as low as possible to avoid detection by the Cops. */)) && ENTITY::IS_ENTITY_IN_AIR(func_13(bVar4)))
							{
								__LIB_1__::func_278("BSELL_ALTI" /* GXT: The altimeter on the radar shows how high you are flying the Dodo. Remain below the upper horizon line to avoid detection. */, -1);
								__LIB_36__::func_794(1);
								__LIB_29__::func_82(24);
							}
						}
					}
				}
				bVar3 = true;
			}
			else if (func_63(NETWORK::PARTICIPANT_ID(), 11))
			{
				func_1348(11);
			}
		}
		else if (func_63(NETWORK::PARTICIPANT_ID(), 11))
		{
			func_1348(11);
		}
		func_847(bVar3);
		if (bVar2)
		{
			if (!func_1909(17))
			{
				if (!__LIB_0__::func_649(&(Local_133.f_259)) || (__LIB_0__::func_649(&(Local_133.f_259)) && __LIB_2__::func_47(&(Local_133.f_259), 1000, 0)))
				{
					AUDIO::PLAY_SOUND_FRONTEND(Local_133.f_207, "Altitude_Warning_Loop", "DLC_Exec_Fly_Low_Sounds", true);
					func_1881(17);
				}
			}
		}
		else if (func_1909(17))
		{
			__LIB_0__::func_579(&(Local_133.f_259));
			__LIB_0__::func_580(&(Local_133.f_259), 0, 0);
			AUDIO::STOP_SOUND(Local_133.f_207);
			func_1335(17);
		}
		if (func_29(27))
		{
			if (!func_1336(26))
			{
				if (__LIB_37__::func_818(148, "SBIKERP_NWBY" /* GXT: Alright, take two. This one probably isn't a massive sting. Probably. */, 1, 0, 0, 0, 0, 1, 0, 1))
				{
					__LIB_29__::func_82(26);
				}
			}
		}
		if (func_63(NETWORK::PARTICIPANT_ID(), 11))
		{
			if (!func_1336(19))
			{
				if (__LIB_37__::func_818(148, "SBIKERP_HIGH" /* GXT: Don't fly too high! Lower your altitude or the cops will be all over you! */, 1, 0, 0, 0, 0, 1, 0, 1))
				{
					__LIB_29__::func_82(19);
				}
			}
			if (!__LIB_0__::func_1("SCONTRA_HLP11" /* GXT: The cops can detect you at this height. Fly as low to the ground as possible. */))
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					__LIB_0__::func_151("SCONTRA_HLP11" /* GXT: The cops can detect you at this height. Fly as low to the ground as possible. */, -1);
					__LIB_0__::func_579(&(Local_133.f_257));
				}
			}
			if (!__LIB_0__::func_649(&(Local_133.f_255)))
			{
				__LIB_0__::func_580(&(Local_133.f_255), 0, 0);
			}
		}
		else
		{
			if (__LIB_0__::func_649(&(Local_133.f_255)))
			{
				__LIB_0__::func_579(&(Local_133.f_255));
			}
			if (__LIB_0__::func_1("SCONTRA_HLP11" /* GXT: The cops can detect you at this height. Fly as low to the ground as possible. */))
			{
				if (__LIB_2__::func_47(&(Local_133.f_257), 3000, 0))
				{
					HUD::CLEAR_HELP(true);
				}
			}
		}
	}
}

void func_1634()//Position - 0xA48BD
{
	int iVar0;
	if (((!func_253() && !func_367()) && !func_534()) && !func_27())
	{
		if (func_1191())
		{
			iVar0 = func_1230();
			if (func_12(iVar0))
			{
				__LIB_6__::func_762(func_13(func_1230()), 1093140480, 1, 1056964608, 0, 1, 0);
			}
		}
	}
}

void func_1635()//Position - 0xA491C
{
	bool bVar0;
	if (func_19())
	{
		func_1636(func_1356());
		bVar0 = func_1230();
		if (Local_133.f_193 == -1)
		{
			Local_133.f_193 = func_1230();
		}
		switch (Local_133.f_18)
		{
			case 0:
				if (bVar0 != -1)
				{
					if (func_1250())
					{
						func_474(bVar0, 0);
						if (func_1250())
						{
							Local_133.f_193 = bVar0;
							Local_133.f_18 = 1;
						}
					}
				}
				break;
			case 1:
				if (!func_1250())
				{
					Local_133.f_18 = 0;
				}
				else if (bVar0 != -1)
				{
					func_1225(func_13(bVar0), bVar0, 1);
				}
				break;
			}
	}
}

void func_1636(bool bParam0)//Position - 0xA49AD
{
	if (bParam0)
	{
		if (!func_1336(18))
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, true);
			__LIB_29__::func_82(18);
		}
	}
	else if (func_1336(18))
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, false);
		func_1229(18);
	}
}

void func_1637()//Position - 0xA49F2
{
	if (func_17())
	{
		switch (Local_133.f_17)
		{
			case 0:
				if (func_475(0, 1))
				{
					if (!__LIB_0__::func_649(&(Local_133.f_2)))
					{
						__LIB_0__::func_580(&(Local_133.f_2), 0, 0);
						__LIB_0__::func_579(&(Local_133.f_4));
						Local_133.f_16 = MISC::GET_RANDOM_INT_IN_RANGE(10000, 15000);
						Local_133.f_17 = 1;
					}
				}
				break;
			case 1:
				if (func_475(0, 1))
				{
					if (__LIB_2__::func_47(&(Local_133.f_2), Local_133.f_16, 0))
					{
						func_1650();
						MISC::SET_BIT(&(Local_133.f_22), 5);
						Local_133.f_17 = 2;
					}
				}
				else
				{
					__LIB_0__::func_579(&(Local_133.f_2));
					Local_133.f_17 = 0;
				}
				break;
			case 2:
				if (!func_475(0, 1))
				{
					if (!__LIB_0__::func_649(&(Local_133.f_4)))
					{
						__LIB_0__::func_580(&(Local_133.f_4), 0, 0);
					}
				}
				else
				{
					__LIB_0__::func_579(&(Local_133.f_4));
				}
				if (!__LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1) || (__LIB_0__::func_649(&(Local_133.f_4)) && __LIB_2__::func_47(&(Local_133.f_4), 20000, 0)))
				{
					func_1647();
					__LIB_32__::func_82(PLAYER::PLAYER_PED_ID());
					__LIB_0__::func_579(&(Local_133.f_2));
					__LIB_0__::func_579(&Local_133);
					Local_133.f_17 = 0;
				}
				break;
			}
	}
}

void func_1647()//Position - 0xA4D96
{
	if (func_17())
	{
		if (GRAPHICS::ANIMPOSTFX_IS_RUNNING(func_1649(0)))
		{
			GRAPHICS::ANIMPOSTFX_STOP(func_1649(0));
			GRAPHICS::ANIMPOSTFX_PLAY(func_1649(1), func_1648(), false);
		}
	}
}

int func_1648()//Position - 0xA4DC8
{
	if (!__LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1))
	{
		return 1000;
	}
	return 10000;
}

char* func_1649(bool bParam0)//Position - 0xA4DE7
{
	if (bParam0)
	{
		return "BikerFilterOut";
	}
	return "BikerFilter";
}

void func_1650()//Position - 0xA4E01
{
	GRAPHICS::ANIMPOSTFX_PLAY(func_1649(0), 0, true);
	__LIB_26__::func_419(PLAYER::PLAYER_PED_ID());
	__LIB_0__::func_580(&Local_133, 0, 0);
}

void func_1655()//Position - 0xA4F61
{
	int iVar0;
	iVar0 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	if (((func_27() || func_367()) || func_17()) || func_15())
	{
		if (func_27() && func_41())
		{
			if (!func_1336(27))
			{
				func_1337(func_1656());
				__LIB_29__::func_82(27);
			}
			else if (iVar0 > 0 && !func_1336(28))
			{
				__LIB_29__::func_82(28);
			}
			else if (iVar0 == 0 && func_1336(28))
			{
				if (!func_63(NETWORK::PARTICIPANT_ID(), 20))
				{
					func_531(20);
				}
			}
		}
		if (iVar0 == 0)
		{
			if (func_63(NETWORK::PARTICIPANT_ID(), 6))
			{
				func_1348(6);
			}
		}
		else if (!func_63(NETWORK::PARTICIPANT_ID(), 6))
		{
			func_531(6);
		}
	}
	if (func_17())
	{
		if (!func_1336(11))
		{
			if (__LIB_0__::func_649(&Local_133))
			{
				if (__LIB_2__::func_47(&Local_133, Local_183.f_694, 0))
				{
					if (iVar0 < 1)
					{
						if (!BitTest(Global_1853348[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*834*/].f_833, 17))
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), func_412(func_16(), Local_183.f_175[0], Local_183.f_679, 0, 0, 0), true) > 100f)
							{
								func_1337(func_1656());
								__LIB_29__::func_82(11);
							}
							else
							{
								__LIB_29__::func_82(11);
							}
						}
					}
				}
			}
		}
	}
	if ((func_367() && __LIB_0__::func_649(&(Local_133.f_255))) && __LIB_2__::func_47(&(Local_133.f_255), 10000, 0))
	{
		if (iVar0 < func_1656())
		{
			if (!BitTest(Global_1853348[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*834*/].f_833, 17))
			{
				if (!func_1909(16))
				{
					func_1337(func_1656());
					func_1881(16);
				}
			}
		}
	}
	else if (!func_63(NETWORK::PARTICIPANT_ID(), 5))
	{
		if (iVar0 != 0)
		{
			if (!func_63(NETWORK::PARTICIPANT_ID(), 6))
			{
				func_1337(0);
			}
		}
	}
}

int func_1656()//Position - 0xA5140
{
	switch (Local_183.f_16)
	{
		case 1:
			return Global_262145.f_18549 /* Tunable: BIKER_SELL_EASY_WANTED_CAP */;
		case 2:
			return Global_262145.f_18550 /* Tunable: BIKER_SELL_MEDIUM_WANTED_CAP */;
		case 3:
			return Global_262145.f_18551 /* Tunable: BIKER_SELL_HARD_WANTED_CAP */;
		default:
	}
	return 0;
}

void func_1657(var uParam0, int* iParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, char* sParam7)//Position - 0xA5183
{
	int iVar0;
	int iVar1[32];
	bool bVar2;
	bool bVar3;
	bool bVar4;
	char* sVar5;
	int iVar6;
	struct<4> Var7;
	int iVar8;
	int iVar9;
	bool bVar10;
	float fVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	struct<2> Var23;
	if (__LIB_26__::func_819(iParam2))
	{
		return;
	}
	fVar11 = -1f;
	iVar12 = -1;
	iVar13 = -1;
	iVar15 = 0;
	iVar16 = 0;
	uParam3->f_36 = 0;
	if (__LIB_32__::func_909() || iParam2 == 28)
	{
		if (func_1723(iParam1, iParam2, uParam3, Global_1836357, 0, __LIB_32__::func_422(), sParam7))
		{
			__LIB_1__::func_512(1);
			if ((!__LIB_1__::func_511() && !__LIB_1__::func_510()) || BitTest(Global_2815059.f_4657, 1))
			{
				if (__LIB_1__::func_509())
				{
					__LIB_6__::func_997();
				}
				else
				{
					GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
					if (uParam3->f_27 == 0)
					{
						__LIB_1__::func_508(1);
						Global_1836357 = 0;
						iVar20 = -1;
						if (Global_1836580 != 1)
						{
							__LIB_1__::func_507(iParam1, 0, 0);
							if (BitTest(uParam3->f_33, 7))
							{
								MISC::CLEAR_BIT(&(uParam3->f_33), 7);
							}
						}
						if (iParam2 == 28)
						{
							iVar18 = 0;
							while (iVar18 < 32)
							{
								iVar1[iVar18] = -1;
								iVar18++;
							}
							iVar18 = 0;
							while (iVar18 < 32)
							{
								if (__LIB_1__::func_264(PLAYER::INT_TO_PLAYERINDEX(iVar18), 0, 1))
								{
									bVar4 = PLAYER::INT_TO_PLAYERINDEX(iVar18);
									if (!__LIB_6__::func_978(bVar4, 0))
									{
										if (__LIB_21__::func_83(bVar4) || __LIB_9__::func_283(bVar4, bVar3))
										{
											bVar10 = bVar4;
											if (__LIB_0__::func_581(bVar4))
											{
												iVar1[bVar10] = iVar21;
												iVar21++;
												iVar0++;
												func_1708(&iVar1, bVar4, &iVar21, &iVar0, bVar3);
											}
										}
									}
								}
								iVar18++;
							}
						}
						if (!__LIB_18__::func_259(PLAYER::PLAYER_ID(), 0) && __LIB_0__::func_396(PLAYER::PLAYER_ID()) != 188)
						{
							bVar2 = iVar0 > 0;
						}
						iVar18 = 0;
						while (iVar18 < 32)
						{
							if (__LIB_13__::func_808())
							{
								if (__LIB_1__::func_264(PLAYER::INT_TO_PLAYERINDEX(iVar18), 0, 1))
								{
									bVar4 = PLAYER::INT_TO_PLAYERINDEX(iVar18);
								}
								else
								{
									bVar4 = __LIB_0__::func_160();
								}
							}
							else
							{
								bVar4 = (uParam0[iVar18 /*42*/])->f_1;
							}
							if ((__LIB_19__::func_768(bVar4) && __LIB_26__::func_807(bVar4, iParam2, bVar3)) && __LIB_1__::func_264(bVar4, 0, 1))
							{
								bVar10 = bVar4;
								iVar8 = Global_1853348[bVar10 /*834*/].f_205.f_6;
								Var7 = { __LIB_25__::func_941(bVar4) };
								if (bVar4 == PLAYER::PLAYER_ID())
								{
									uParam3->f_35 = iVar19;
								}
								StringCopy(&(uParam3->f_1), PLAYER::GET_PLAYER_NAME(bVar4), 64);
								*(uParam4[iVar18 /*13*/]) = { __LIB_1__::func_267(bVar4) };
								iVar6 = __LIB_35__::func_811(bVar4);
								sVar5 = "";
								if (iVar6 != 0)
								{
									sVar5 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar6);
								}
								Global_1836357++;
								if ((uParam0[iVar18 /*42*/])->f_22 != -1f)
								{
									fVar11 = (uParam0[iVar18 /*42*/])->f_22;
								}
								if ((uParam0[iVar18 /*42*/])->f_31 != -1)
								{
									iVar12 = (uParam0[iVar18 /*42*/])->f_31;
								}
								if ((uParam0[iVar18 /*42*/])->f_41 != -1)
								{
									iVar13 = (uParam0[iVar18 /*42*/])->f_41;
								}
								iVar9 = (uParam0[iVar18 /*42*/])->f_9;
								if (((uParam0[iVar18 /*42*/])->f_9 != -1 || (uParam0[iVar18 /*42*/])->f_22 != -1f) || (uParam0[iVar18 /*42*/])->f_31 != -1)
								{
									if (!__LIB_13__::func_808())
									{
										iVar16 = 1;
									}
								}
								if (iParam5 != -1)
								{
									__LIB_18__::func_268(&iVar9, &fVar11, (uParam0[iVar18 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), __LIB_1__::func_500(iParam5, 1, 0, 0), 16);
								}
								if (bParam6)
								{
									iVar14 = (uParam0[iVar18 /*42*/])->f_2 + 1;
									if (iVar20 != iVar14)
									{
										iVar20 = iVar14;
									}
									else
									{
										iVar14 = -2;
									}
								}
								iVar17 = __LIB_21__::func_114(bVar4, 0);
								if (bVar2)
								{
									if (__LIB_13__::func_258(bVar4, 1) && iVar1[bVar10] != -1)
									{
										iVar19 = iVar1[bVar10];
									}
									else
									{
										iVar19 = (iVar0 + iVar22);
										iVar22++;
									}
								}
								uParam3->f_38[bVar10 /*2*/].f_1 = iVar19;
								if ((uParam0[iVar18 /*42*/])->f_39 != -1)
								{
									StringCopy(&Var23, "UW_TM", 16);
									StringIntConCat(&Var23, (uParam0[iVar18 /*42*/])->f_39, 16);
								}
								if (__LIB_1__::func_499(iParam5))
								{
									__LIB_33__::func_2(bVar4, iParam1, uParam3, iVar19, Var7, sVar5, iVar8, iVar9, iVar17, iVar16, fVar11, iVar9, iVar13, &Var23, (uParam0[iVar18 /*42*/])->f_40, iVar14, bParam6);
								}
								else
								{
									__LIB_33__::func_2(bVar4, iParam1, uParam3, iVar19, Var7, sVar5, iVar8, iVar9, iVar17, iVar16, fVar11, iVar12, iVar13, &Var23, (uParam0[iVar18 /*42*/])->f_40, iVar14, bParam6);
								}
								MISC::SET_BIT(&iVar15, bVar4);
								iVar19++;
							}
							iVar18++;
						}
						iVar18 = 0;
						while (iVar18 < 32)
						{
							bVar4 = PLAYER::INT_TO_PLAYERINDEX(iVar18);
							if (__LIB_1__::func_264(bVar4, 0, 1) && !BitTest(iVar15, bVar4))
							{
								bVar4 = PLAYER::INT_TO_PLAYERINDEX(iVar18);
							}
							else
							{
								bVar4 = __LIB_0__::func_160();
							}
							if (__LIB_19__::func_768(bVar4))
							{
								if (__LIB_1__::func_264(PLAYER::INT_TO_PLAYERINDEX(iVar18), 0, 1))
								{
									bVar10 = bVar4;
									iVar8 = Global_1853348[bVar10 /*834*/].f_205.f_6;
									Var7 = { __LIB_25__::func_941(bVar4) };
									*(uParam4[iVar18 /*13*/]) = { __LIB_1__::func_267(bVar4) };
									iVar6 = __LIB_35__::func_811(bVar4);
									sVar5 = "";
									if (iVar6 != 0)
									{
										sVar5 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar6);
									}
									Global_1836357++;
									iVar17 = __LIB_21__::func_114(bVar4, 1);
									if (bVar2)
									{
										if (__LIB_13__::func_258(bVar4, 1))
										{
											iVar19 = iVar1[iVar18];
										}
										else
										{
											iVar19 = (iVar0 + iVar22);
											iVar22++;
										}
									}
									uParam3->f_38[bVar10 /*2*/].f_1 = iVar19;
									__LIB_36__::func_233(bVar4, PLAYER::GET_PLAYER_NAME(bVar4), iParam1, uParam3, iVar19, Var7, sVar5, iVar8, iVar17, iVar16);
									iVar19++;
								}
							}
							iVar18++;
						}
						if (BitTest(uParam3->f_33, 11))
						{
							__LIB_19__::func_767(uParam3, iParam1, iParam2);
						}
						__LIB_0__::func_579(&(uParam3->f_21));
						__LIB_1__::func_492();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!BitTest(uParam3->f_33, 7))
						{
							__LIB_1__::func_491(uParam3, iParam1);
							__LIB_1__::func_379(iParam1, 0, 1);
							MISC::SET_BIT(&(uParam3->f_33), 7);
						}
						__LIB_1__::func_491(uParam3, iParam1);
						if (!BitTest(uParam3->f_33, 11))
						{
							MISC::SET_BIT(&(uParam3->f_33), 11);
						}
						if (__LIB_6__::func_993(uParam3))
						{
							Global_1836580 = 1;
						}
						__LIB_6__::func_992(uParam3);
						if (Global_1836580 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1836580 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam1))
					{
						GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
						GRAPHICS::DRAW_SCALEFORM_MOVIE(*iParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			__LIB_1__::func_492();
			__LIB_1__::func_508(0);
			if (BitTest(uParam3->f_33, 7))
			{
				MISC::CLEAR_BIT(&(uParam3->f_33), 7);
			}
			if (BitTest(uParam3->f_33, 10))
			{
				MISC::CLEAR_BIT(&(uParam3->f_33), 10);
			}
		}
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

void func_1708(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0xA6977
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (__LIB_1__::func_264(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 1))
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (!__LIB_6__::func_978(iVar1, 0))
			{
				if (__LIB_21__::func_83(iVar1) || __LIB_9__::func_283(iVar1, bParam4))
				{
					if (func_615(iVar1, iParam1, 0))
					{
						(*iParam0)[iVar0] = *iParam2;
						*iParam2++;
						*iParam3++;
					}
				}
			}
		}
		iVar0++;
	}
}

int func_1723(int* iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, char* sParam6)//Position - 0xA6C7D
{
	struct<4> Var0;
	char* sVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	int iVar5;
	char* sVar6;
	StringCopy(&Var0, "", 16);
	bVar2 = iParam1 == 20;
	bVar3 = __LIB_1__::func_525(iParam1);
	fVar4 = __LIB_1__::func_524();
	iVar5 = -1;
	if (iParam1 == 27 || iParam1 == 28)
	{
		if (__LIB_1__::func_383())
		{
			if (__LIB_1__::func_523() > 0 && Global_1836359)
			{
				HUD::THEFEED_HIDE_THIS_FRAME();
				HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(fVar4);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
				if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					HUD::HIDE_HELP_TEXT_THIS_FRAME();
				}
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
			}
		}
	}
	if (!bParam5)
	{
		if (!__LIB_25__::func_38())
		{
			__LIB_1__::func_586(iParam0, uParam2, 1);
			return 0;
		}
	}
	if (BitTest(Global_2815059.f_4660, 26))
	{
		__LIB_1__::func_586(iParam0, uParam2, 1);
		return 0;
	}
	if (!__LIB_0__::func_649(&(uParam2->f_19)))
	{
		if (__LIB_1__::func_523() == 1)
		{
			__LIB_1__::func_521(bVar3, iParam0, 0);
			__LIB_0__::func_580(&(uParam2->f_19), 0, 0);
			__LIB_1__::func_586(iParam0, uParam2, 0);
			MISC::SET_BIT(&(Global_2815059.f_4662), 5);
		}
	}
	if (__LIB_0__::func_649(&(uParam2->f_19)) || bParam5)
	{
		if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			HUD::HIDE_HELP_TEXT_THIS_FRAME();
		}
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
		if (__LIB_2__::func_47(&(uParam2->f_19), 10000, 0) || (__LIB_1__::func_523() == 0 && !bParam5))
		{
			__LIB_1__::func_586(iParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar2 == 0)
			{
				__LIB_1__::func_520();
				if (iParam1 == 27 || iParam1 == 28)
				{
					HUD::THEFEED_HIDE_THIS_FRAME();
				}
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
			}
			if (!BitTest(uParam2->f_33, 0))
			{
				if (bVar2 == 0)
				{
					__LIB_1__::func_520();
					if (iParam1 == 27 || iParam1 == 28)
					{
						HUD::THEFEED_HIDE_THIS_FRAME();
					}
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
				}
				HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(fVar4);
				if (__LIB_1__::func_521(bVar3, iParam0, 0))
				{
					__LIB_1__::func_507(iParam0, 0, 0);
					sVar1 = __LIB_18__::func_271(iParam1, &(Global_4718592.f_116531), bParam4);
					Var0 = { __LIB_18__::func_270(iParam1) };
					if (bParam4)
					{
						__LIB_7__::func_0(iParam0, sVar1, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 27)
					{
						__LIB_1__::func_515(iParam0, __LIB_6__::func_999(uParam2), __LIB_6__::func_998(uParam2), -1);
					}
					else if (iParam1 == 28)
					{
						sVar6 = __LIB_32__::func_419(uParam2);
						if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
						{
							sVar6 = sParam6;
						}
						__LIB_1__::func_514(iParam0, sVar6, __LIB_1__::func_584(), -1);
					}
					else if (__LIB_16__::func_405())
					{
						uParam2->f_34 = Global_1836358;
						__LIB_7__::func_0(iParam0, sVar1, &Var0, 1, -1, Global_1836358, 1);
					}
					else if (bVar2)
					{
						iVar5 = __LIB_6__::func_963(iParam1);
						uParam2->f_34 = Global_1836358;
						__LIB_7__::func_0(iParam0, sVar1, "", 0, iVar5, __LIB_1__::func_513(), 1);
					}
					else
					{
						iVar5 = __LIB_6__::func_963(iParam1);
						__LIB_7__::func_0(iParam0, sVar1, &Var0, 1, iVar5, -1, 1);
					}
					MISC::SET_BIT(&(uParam2->f_33), 0);
				}
			}
			if (BitTest(uParam2->f_33, 0))
			{
				Global_1836357 = uParam3;
				Global_1836356 = 1;
				HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(fVar4);
				if (bVar2)
				{
					if (uParam2->f_34 != Global_1836358)
					{
						MISC::CLEAR_BIT(&(uParam2->f_33), 0);
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_1768(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)//Position - 0xA84EE
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	if (bParam5)
	{
		iVar0 = __LIB_1__::func_182(PLAYER::PLAYER_ID());
		Global_1944213 = iVar0;
		Global_1944213.f_1 = iParam0;
		if (__LIB_0__::func_582() != __LIB_0__::func_160())
		{
			Global_1944213.f_2 = __LIB_1__::func_835(__LIB_0__::func_582());
			Global_1944213.f_3 = __LIB_3__::func_639(__LIB_0__::func_582());
		}
		if (__LIB_1__::func_301() != __LIB_0__::func_160())
		{
			__LIB_24__::func_786(__LIB_1__::func_301(), &(Global_1944213.f_2), &(Global_1944213.f_3));
		}
		Global_1944213.f_7 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1944213.f_28 = __LIB_1__::func_186(PLAYER::PLAYER_ID());
		Global_1944213.f_13 = 0;
		Global_1944213.f_14 = 0;
		if (__LIB_13__::func_258(PLAYER::PLAYER_ID(), 1))
		{
			Global_1944213.f_23 = __LIB_0__::func_847(__LIB_18__::func_447(1));
		}
	}
	else
	{
		iVar0 = __LIB_0__::func_396(PLAYER::PLAYER_ID());
	}
	if (((iParam2 || __LIB_10__::func_929(iVar0)) || iVar0 == 293) || iVar0 == 291)
	{
		if (iParam3 != -1 && iParam2)
		{
			iVar0 = iParam3;
		}
		Global_1943947 = iVar0;
		if (__LIB_2__::func_491(iVar0) || iVar0 == 293)
		{
			Global_1943947.f_1 = 4;
		}
		else if (__LIB_2__::func_492(iVar0))
		{
			Global_1943947.f_1 = 5;
		}
		else if (__LIB_1__::func_266(iVar0, 0))
		{
			Global_1943947.f_1 = 2;
			if (__LIB_10__::func_895(iVar0))
			{
				Global_1943947.f_1 = 3;
			}
		}
		else
		{
			Global_1943947.f_1 = 1;
		}
		if (__LIB_0__::func_582() != __LIB_0__::func_160())
		{
			Global_1943947.f_4 = __LIB_1__::func_835(__LIB_0__::func_582());
			Global_1943947.f_5 = __LIB_3__::func_639(__LIB_0__::func_582());
		}
		if (__LIB_1__::func_301() != __LIB_0__::func_160())
		{
			__LIB_24__::func_786(__LIB_1__::func_301(), &(Global_1943947.f_6), &(Global_1943947.f_7));
		}
		Global_1943947.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
		if (iVar0 == 148 || iVar0 == 179)
		{
			Global_1943947.f_27 = 1;
			Global_1943947.f_28 = 1;
		}
		if (iParam0 != -1)
		{
			Global_1943947.f_26 = iParam0;
		}
		if (iParam1 != 0)
		{
			Global_1943947.f_40 = __LIB_1__::func_347(iParam1);
			Global_1943947.f_41 = __LIB_13__::func_380();
			Global_1943947.f_42 = __LIB_4__::func_473(PLAYER::PLAYER_ID(), iParam1);
			Global_1943947.f_44 = __LIB_4__::func_814(PLAYER::PLAYER_ID(), iParam1);
		}
		if (!__LIB_1__::func_145() || iVar0 != 192)
		{
			Global_1943947.f_53 = 0;
		}
	}
	else if (((__LIB_3__::func_524(iVar0) || iVar0 == 297) || iVar0 == 296) || iVar0 == 298)
	{
		if ((((iVar0 == 225 || iVar0 == 226) || iVar0 == 297) || iVar0 == 296) || iVar0 == 298)
		{
			Global_1944066 = iParam0 + 1;
		}
		else if (iVar0 == 227)
		{
			Global_1944066 = iParam0 + 1;
		}
		else
		{
			Global_1944066 = __LIB_21__::func_87(PLAYER::PLAYER_ID());
		}
		Global_1944066.f_46 = iVar0;
		if (__LIB_0__::func_582() != -1)
		{
			Global_1944066.f_17 = __LIB_0__::func_846(__LIB_0__::func_582());
		}
		else
		{
			Global_1944066.f_17 = __LIB_0__::func_846(PLAYER::PLAYER_ID());
		}
		switch (iVar0)
		{
			case 225:
				if (__LIB_1__::func_337(PLAYER::PLAYER_ID()) == 0)
				{
					Global_1944066.f_1 = 0;
				}
				else
				{
					Global_1944066.f_1 = 1;
				}
				break;
			case 226:
				Global_1944066.f_1 = 2;
				break;
			case 227:
				Global_1944066.f_1 = 3;
				break;
			case 297:
				Global_1944066.f_1 = 4;
				break;
			case 296:
				Global_1944066.f_1 = 5;
				break;
			case 298:
				Global_1944066.f_1 = 6;
				break;
		}
		Global_1944066.f_21 = 1;
		Global_1944066.f_22 = 1;
		Global_1944066.f_44 = func_1845(1);
		Global_1944066.f_45 = func_1845(0);
		if (__LIB_0__::func_582() != __LIB_0__::func_160())
		{
			Global_1944066.f_4 = __LIB_1__::func_835(__LIB_0__::func_582());
			Global_1944066.f_5 = __LIB_3__::func_639(__LIB_0__::func_582());
		}
		if (__LIB_1__::func_301() != __LIB_0__::func_160())
		{
			__LIB_24__::func_786(__LIB_1__::func_301(), &(Global_1944066.f_4), &(Global_1944066.f_5));
		}
		Global_1944066.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		if (iParam0 != -1)
		{
			Global_1944066.f_20 = iParam0;
		}
	}
	else if (__LIB_9__::func_286(iVar0))
	{
		if (iParam3 != -1 && iParam2)
		{
		}
		Global_1944003 = iVar0;
		Global_1943947.f_1 = 1;
		if (__LIB_0__::func_582() != __LIB_0__::func_160())
		{
			Global_1944003.f_4 = __LIB_1__::func_835(__LIB_0__::func_582());
			Global_1944003.f_5 = __LIB_3__::func_639(__LIB_0__::func_582());
		}
		if (__LIB_1__::func_301() != __LIB_0__::func_160())
		{
			__LIB_24__::func_786(__LIB_1__::func_301(), &(Global_1944003.f_6), &(Global_1944003.f_7));
		}
		Global_1944003.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
		if (iParam0 != -1)
		{
			Global_1944003.f_21 = iParam0;
		}
	}
	else if (__LIB_1__::func_204(iVar0))
	{
		Global_1944113 = iVar0;
		Global_1944113.f_1 = iParam0;
		Global_1944113.f_21 = 1;
		Global_1944113.f_22 = 1;
		if (__LIB_0__::func_582() != __LIB_0__::func_160())
		{
			Global_1944113.f_4 = __LIB_1__::func_835(__LIB_0__::func_582());
			Global_1944113.f_5 = __LIB_3__::func_639(__LIB_0__::func_582());
		}
		if (__LIB_1__::func_301() != __LIB_0__::func_160())
		{
			__LIB_24__::func_786(__LIB_1__::func_301(), &(Global_1944113.f_4), &(Global_1944113.f_5));
		}
		Global_1944113.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		if (iParam0 != -1)
		{
			Global_1944113.f_20 = iParam0;
		}
		Global_1944113.f_27 = __LIB_20__::func_355(__LIB_0__::func_5(), 5);
		Global_1944113.f_28 = __LIB_0__::func_847(__LIB_1__::func_247(PLAYER::PLAYER_ID()));
		Global_1944113.f_29 = __LIB_1__::func_556(6110, -1, 0);
		Global_1944113.f_30 = __LIB_1__::func_556(6106, -1, 0);
		Global_1944113.f_31 = __LIB_1__::func_556(6107, -1, 0);
		Global_1944113.f_32 = __LIB_1__::func_556(6109, -1, 0);
		Global_1944113.f_33 = __LIB_1__::func_556(6108, -1, 0);
		Global_1944113.f_34 = __LIB_1__::func_556(6111, -1, 0);
		Global_1944113.f_7 = __LIB_36__::func_995();
		Global_1944113.f_51 = __LIB_0__::func_847(bParam4);
	}
	else if (__LIB_0__::func_787(iVar0))
	{
		Global_1944167 = iVar0;
		Global_1944167.f_1 = iParam0;
		Global_1944167.f_21 = 1;
		Global_1944167.f_22 = 1;
		if (__LIB_0__::func_582() != __LIB_0__::func_160())
		{
			Global_1944167.f_4 = __LIB_1__::func_835(__LIB_0__::func_582());
			Global_1944167.f_5 = __LIB_3__::func_639(__LIB_0__::func_582());
		}
		if (__LIB_1__::func_301() != __LIB_0__::func_160())
		{
			__LIB_24__::func_786(__LIB_1__::func_301(), &(Global_1944167.f_4), &(Global_1944167.f_5));
		}
		Global_1944167.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		if (iParam0 != -1)
		{
			Global_1944167.f_20 = iParam0;
		}
		Global_1944167.f_24 = __LIB_1__::func_556(6160, -1, 0);
		Global_1944167.f_25 = __LIB_1__::func_556(6165, -1, 0);
		Global_1944167.f_26 = __LIB_1__::func_556(6166, -1, 0);
		Global_1944167.f_27 = __LIB_0__::func_847((((__LIB_2__::func_272() || __LIB_20__::func_344()) || __LIB_20__::func_343()) || __LIB_1__::func_233(PLAYER::PLAYER_ID())));
		Global_1944167.f_28 = __LIB_1__::func_556(6167, -1, 0);
		Global_1944167.f_29 = __LIB_0__::func_847(__LIB_8__::func_448());
		Global_1944167.f_31 = 0;
		Global_1944167.f_30 = 0;
		Global_1944167.f_32 = 0;
		Global_1944167.f_33 = 0;
		Global_1944167.f_34 = 0;
		Global_1944167.f_16 = 0;
		Global_1944167.f_7 = __LIB_36__::func_995();
	}
	else if (__LIB_26__::func_810(iVar0))
	{
		Global_1944303 = iVar0;
		Global_1944303.f_1 = iParam0;
		Global_1944303.f_21 = 1;
		Global_1944303.f_22 = 1;
		Global_1944303.f_7 = __LIB_36__::func_995();
		if (__LIB_0__::func_582() != __LIB_0__::func_160())
		{
			Global_1944303.f_4 = __LIB_1__::func_835(__LIB_0__::func_582());
			Global_1944303.f_5 = __LIB_3__::func_639(__LIB_0__::func_582());
		}
		if (__LIB_1__::func_301() != __LIB_0__::func_160())
		{
			__LIB_24__::func_786(__LIB_1__::func_301(), &(Global_1944303.f_4), &(Global_1944303.f_5));
		}
		if (__LIB_0__::func_582() != -1)
		{
			Global_1944303.f_17 = __LIB_0__::func_846(__LIB_0__::func_582());
		}
		Global_1944303.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1944303.f_28 = __LIB_1__::func_186(PLAYER::PLAYER_ID());
		Global_1944303.f_16 = 0;
		Global_1944303.f_24 = 0;
		Global_1944303.f_23 = 0;
		if (__LIB_13__::func_258(PLAYER::PLAYER_ID(), 1))
		{
			Global_1944303.f_33 = __LIB_0__::func_847(__LIB_18__::func_447(1));
		}
		Global_1944303.f_39 = func_1845(1);
		Global_1944303.f_40 = func_1845(0);
	}
	else if (iVar0 == 237)
	{
		Global_1944249 = iVar0;
		Global_1944249.f_1 = iParam0;
		Global_1944249.f_21 = 1;
		Global_1944249.f_22 = 1;
		Global_1944249.f_7 = __LIB_36__::func_995();
		Global_1944249.f_24 = 0;
		Global_1944249.f_23 = 0;
		Global_1944249.f_16 = 0;
		if (__LIB_0__::func_582() != __LIB_0__::func_160())
		{
			Global_1944249.f_4 = __LIB_1__::func_835(__LIB_0__::func_582());
			Global_1944249.f_5 = __LIB_3__::func_639(__LIB_0__::func_582());
		}
		Global_1944249.f_28 = __LIB_1__::func_186(PLAYER::PLAYER_ID());
		if (Global_1944249.f_28)
		{
			Global_1944249.f_29 = __LIB_26__::func_792(PLAYER::PLAYER_ID());
		}
		else
		{
			Global_1944249.f_29 = 0;
		}
		Global_1944249.f_30 = __LIB_26__::func_34(PLAYER::PLAYER_ID(), 4, -1);
		Global_1944249.f_31 = __LIB_3__::func_61(PLAYER::PLAYER_ID());
		Global_1944249.f_32 = __LIB_0__::func_847(__LIB_3__::func_136(PLAYER::PLAYER_ID()));
		Global_1944249.f_33 = __LIB_0__::func_847(__LIB_3__::func_135(PLAYER::PLAYER_ID()));
		Global_1944249.f_34 = __LIB_0__::func_847(__LIB_3__::func_134(PLAYER::PLAYER_ID()));
		Global_1944249.f_35 = __LIB_0__::func_847(__LIB_3__::func_133(PLAYER::PLAYER_ID()));
		Global_1944249.f_36 = __LIB_9__::func_300(PLAYER::PLAYER_ID());
		Global_1944249.f_37 = __LIB_4__::func_447(PLAYER::PLAYER_ID());
		Global_1944249.f_39 = __LIB_9__::func_299(PLAYER::PLAYER_ID());
		if (__LIB_13__::func_258(PLAYER::PLAYER_ID(), 1))
		{
			Global_1944249.f_41 = __LIB_0__::func_847(__LIB_18__::func_447(1));
		}
		if (__LIB_1__::func_301() != __LIB_0__::func_160())
		{
			__LIB_24__::func_786(__LIB_1__::func_301(), &(Global_1944249.f_4), &(Global_1944249.f_5));
		}
		Global_1944249.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1944249.f_28 = __LIB_1__::func_186(PLAYER::PLAYER_ID());
	}
	else if (__LIB_9__::func_415(iVar0))
	{
		Global_1944390 = iVar0;
		Global_1944390.f_1 = __LIB_1__::func_337(PLAYER::PLAYER_ID());
		Global_1944390.f_2 = __LIB_1__::func_834();
		Global_1944390.f_3 = __LIB_1__::func_833();
		Global_1944390.f_4 = __LIB_1__::func_835(__LIB_0__::func_582());
		Global_1944390.f_5 = __LIB_3__::func_639(__LIB_0__::func_582());
		Global_1944390.f_7 = __LIB_36__::func_995();
		Global_1944390.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		if (__LIB_0__::func_582() != -1)
		{
			Global_1944390.f_17 = __LIB_0__::func_846(__LIB_0__::func_582());
		}
		Global_1944390.f_21 = 1;
		Global_1944390.f_22 = 1;
		Global_1944390.f_25 = iParam0;
		Global_1944390.f_27 = __LIB_0__::func_847(__LIB_0__::func_834(PLAYER::PLAYER_ID()));
		Global_1944390.f_28 = __LIB_8__::func_48(21, -1);
	}
	else if (__LIB_2__::func_965(iVar0))
	{
		Global_1944465 = Global_786547.f_1;
		Global_1944465.f_2 = Global_786547;
		Global_1944465.f_6 = __LIB_1__::func_835(__LIB_0__::func_582());
		Global_1944465.f_7 = __LIB_3__::func_639(__LIB_0__::func_582());
		if (__LIB_13__::func_258(PLAYER::PLAYER_ID(), 1))
		{
			Global_1944465.f_8 = __LIB_0__::func_847(__LIB_18__::func_447(1));
		}
		if (__LIB_0__::func_582() != -1)
		{
			Global_1944465.f_9 = __LIB_0__::func_846(__LIB_0__::func_582());
		}
		Global_1944465.f_10 = __LIB_36__::func_995();
		Global_1944465.f_19 = 1;
		Global_1944465.f_20 = 1;
		Global_1944465.f_21 = 0;
		Global_1944465.f_22 = 0;
		Global_1944465.f_23 = 0;
		Global_1973074 = NETWORK::GET_CLOUD_TIME_AS_INT();
	}
	else if (__LIB_9__::func_29(iVar0))
	{
		Global_1944552 = Global_786547.f_1;
		Global_1944552.f_3 = Global_786547;
		Global_1944552.f_6 = __LIB_1__::func_835(__LIB_0__::func_582());
		Global_1944552.f_7 = __LIB_3__::func_639(__LIB_0__::func_582());
		if (__LIB_13__::func_258(PLAYER::PLAYER_ID(), 1))
		{
			Global_1944552.f_8 = __LIB_0__::func_847(__LIB_18__::func_447(1));
		}
		if (__LIB_0__::func_582() != -1)
		{
			Global_1944552.f_9 = __LIB_0__::func_846(__LIB_0__::func_582());
		}
		Global_1944552.f_10 = __LIB_36__::func_995();
		Global_1944552.f_21 = 0;
		Global_1944552.f_22 = 0;
		Global_1944552.f_23 = 0;
		Global_1944552.f_26 = func_1845(1);
		Global_1944552.f_34 = func_1845(0);
		Global_1944552.f_15 = !func_615(PLAYER::PLAYER_ID(), __LIB_1__::func_301(), 1);
	}
	else if (__LIB_9__::func_298(iVar0))
	{
		Global_1944664 = iParam0;
		Global_1944664.f_1 = iVar0;
		Global_1944664.f_3 = __LIB_1__::func_835(__LIB_0__::func_582());
		Global_1944664.f_4 = __LIB_3__::func_639(__LIB_0__::func_582());
		Global_1944664.f_5 = __LIB_0__::func_847(__LIB_18__::func_447(1));
		Global_1944664.f_6 = __LIB_36__::func_995();
		if (__LIB_0__::func_582() != -1)
		{
			Global_1944664.f_7 = __LIB_0__::func_846(__LIB_0__::func_582());
		}
		Global_1944664.f_8 = 0;
	}
	else if (__LIB_2__::func_473(iVar0) || __LIB_10__::func_894(iVar0))
	{
		Global_1944685 = Global_786547.f_1;
		Global_1944685.f_27 = Global_786547;
		Global_1944685.f_5 = __LIB_1__::func_835(__LIB_0__::func_582());
		Global_1944685.f_6 = __LIB_3__::func_639(__LIB_0__::func_582());
		if (__LIB_13__::func_258(PLAYER::PLAYER_ID(), 1))
		{
			Global_1944685.f_7 = __LIB_0__::func_847(__LIB_18__::func_447(1));
		}
		if (__LIB_0__::func_582() != -1)
		{
			Global_1944685.f_8 = __LIB_0__::func_846(__LIB_0__::func_582());
		}
		else
		{
			Global_1944685.f_8 = __LIB_0__::func_846(PLAYER::PLAYER_ID());
		}
		Global_1944685.f_9 = __LIB_36__::func_995();
		Global_1944685.f_18 = 1;
		Global_1944685.f_19 = 1;
		Global_1944685.f_20 = 0;
		Global_1944685.f_21 = 0;
		Global_1944685.f_22 = 0;
		Global_1944685.f_23 = func_1845(1);
		Global_1944685.f_24 = func_1845(0);
		Global_1944685.f_14 = !func_615(PLAYER::PLAYER_ID(), __LIB_1__::func_301(), 1);
	}
	else if (__LIB_10__::func_893(iVar0) || __LIB_10__::func_892(iVar0))
	{
		Global_1944754.f_7 = __LIB_1__::func_835(__LIB_0__::func_582());
		Global_1944754.f_8 = __LIB_3__::func_639(__LIB_0__::func_582());
		if (__LIB_13__::func_258(PLAYER::PLAYER_ID(), 1))
		{
			Global_1944754.f_9 = __LIB_0__::func_847(__LIB_18__::func_447(1));
		}
		else
		{
			Global_1944754.f_9 = -1;
		}
		if (__LIB_0__::func_582() != -1)
		{
			Global_1944754.f_10 = __LIB_0__::func_846(__LIB_0__::func_582());
		}
		else
		{
			Global_1944754.f_10 = __LIB_0__::func_846(PLAYER::PLAYER_ID());
		}
		Global_1944754.f_11 = __LIB_36__::func_995();
		Global_1944754.f_20 = 0;
		Global_1944754.f_21 = 0;
		Global_1944754.f_22 = 0;
		Global_1944754.f_23 = func_1845(1);
		Global_1944754.f_24 = func_1845(0);
		Global_1944754.f_17 = !func_615(PLAYER::PLAYER_ID(), __LIB_1__::func_301(), 1);
		Global_1944754.f_1 = iVar0;
	}
	else
	{
		if (__LIB_0__::func_582() != __LIB_0__::func_160())
		{
			Global_1943929 = __LIB_1__::func_835(__LIB_0__::func_582());
			Global_1943929.f_1 = __LIB_3__::func_639(__LIB_0__::func_582());
		}
		Global_1943929.f_5 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1943929.f_13 = __LIB_10__::func_950();
		Global_1943929.f_15 = 0;
		if (__LIB_19__::func_760(1))
		{
			if (__LIB_1__::func_301() == __LIB_0__::func_582())
			{
				Global_1943929.f_15 = 1;
			}
		}
		if (__LIB_16__::func_605())
		{
			Global_1944066.f_28 = 1;
		}
		if (((((__LIB_5__::func_607() || __LIB_5__::func_606()) || __LIB_5__::func_605()) || __LIB_5__::func_604()) || __LIB_5__::func_603()) || __LIB_2__::func_710(PLAYER::PLAYER_ID()))
		{
			Global_1944066.f_30 = 1;
		}
		if (__LIB_20__::func_342(__LIB_9__::func_383(joaat("trailersmall2"))))
		{
			Global_1944066.f_32 = 1;
		}
		if (__LIB_33__::func_7(__LIB_1__::func_367(joaat("caddy"))))
		{
			Global_1944066.f_31 = 1;
		}
		if (__LIB_9__::func_104(PLAYER::PLAYER_ID()) || __LIB_9__::func_103(PLAYER::PLAYER_ID()))
		{
			Global_1944066.f_29 = 1;
		}
		if (__LIB_1__::func_981(PLAYER::PLAYER_ID()))
		{
			Global_1944066.f_33 = 1;
			Global_1944066.f_34 = 1;
		}
		if (__LIB_3__::func_457(PLAYER::PLAYER_ID()))
		{
			Global_1944066.f_36 = 1;
		}
		if (__LIB_3__::func_417(0, PLAYER::PLAYER_ID()) == 1)
		{
			Global_1944066.f_35 = 1;
		}
		if (__LIB_11__::func_61(PLAYER::PLAYER_ID(), 3, &uVar1))
		{
			Global_1944066.f_37 = 1;
		}
		if (__LIB_11__::func_61(PLAYER::PLAYER_ID(), 7, &uVar1))
		{
			Global_1944066.f_38 = 1;
		}
		if (__LIB_9__::func_524(PLAYER::PLAYER_ID()))
		{
			iVar2 = 0;
			while (iVar2 < 6)
			{
				iVar3 = __LIB_4__::func_680(PLAYER::PLAYER_ID(), iVar2);
				if (__LIB_19__::func_819(PLAYER::PLAYER_ID(), iVar3, 0))
				{
					Global_1944066.f_39 = 1;
				}
				if (__LIB_19__::func_819(PLAYER::PLAYER_ID(), iVar3, 2))
				{
					Global_1944066.f_40 = 1;
				}
				if (__LIB_19__::func_819(PLAYER::PLAYER_ID(), iVar3, 1))
				{
					Global_1944066.f_41 = 1;
				}
				iVar2++;
			}
		}
	}
}

var func_1845(bool bParam0)//Position - 0xB2496
{
	var uVar0;
	int iVar1;
	iVar1 = PLAYER::PLAYER_ID();
	if (bParam0)
	{
		if (__LIB_8__::func_450(4, 0))
		{
			MISC::SET_BIT(&uVar0, 0);
		}
		if (__LIB_8__::func_450(5, 0))
		{
			MISC::SET_BIT(&uVar0, 1);
		}
		if (__LIB_8__::func_450(6, 1))
		{
			MISC::SET_BIT(&uVar0, 2);
		}
		if (__LIB_8__::func_450(1, 0))
		{
			MISC::SET_BIT(&uVar0, 3);
		}
		if (__LIB_8__::func_450(2, 0))
		{
			MISC::SET_BIT(&uVar0, 4);
		}
		if (__LIB_8__::func_450(3, 0))
		{
			MISC::SET_BIT(&uVar0, 5);
		}
		if ((((__LIB_5__::func_686(61) || __LIB_5__::func_686(62)) || __LIB_5__::func_686(63)) || __LIB_5__::func_686(64)) || __LIB_5__::func_686(65))
		{
			MISC::SET_BIT(&uVar0, 6);
		}
		if (__LIB_2__::func_456(iVar1))
		{
			MISC::SET_BIT(&uVar0, 7);
		}
		if (__LIB_5__::func_685(iVar1, 0))
		{
			MISC::SET_BIT(&uVar0, 8);
		}
		if (__LIB_5__::func_685(iVar1, 1))
		{
			MISC::SET_BIT(&uVar0, 9);
		}
		if (__LIB_5__::func_685(iVar1, 2))
		{
			MISC::SET_BIT(&uVar0, 10);
		}
		if (__LIB_5__::func_554(iVar1))
		{
			MISC::SET_BIT(&uVar0, 11);
		}
		if (__LIB_21__::func_336(iVar1, 3))
		{
			MISC::SET_BIT(&uVar0, 12);
		}
		if (__LIB_21__::func_336(iVar1, 4))
		{
			MISC::SET_BIT(&uVar0, 13);
		}
		if (__LIB_21__::func_336(iVar1, 2))
		{
			MISC::SET_BIT(&uVar0, 14);
		}
		if (__LIB_21__::func_336(iVar1, 6))
		{
			MISC::SET_BIT(&uVar0, 15);
		}
		if (__LIB_21__::func_336(iVar1, 5))
		{
			MISC::SET_BIT(&uVar0, 16);
		}
		if (__LIB_9__::func_633(iVar1))
		{
			MISC::SET_BIT(&uVar0, 17);
		}
		if (__LIB_21__::func_336(iVar1, 1))
		{
			MISC::SET_BIT(&uVar0, 18);
		}
		if (__LIB_1__::func_247(iVar1))
		{
			MISC::SET_BIT(&uVar0, 19);
		}
		if (__LIB_1__::func_233(iVar1))
		{
			MISC::SET_BIT(&uVar0, 20);
		}
		if (__LIB_2__::func_710(iVar1))
		{
			MISC::SET_BIT(&uVar0, 21);
		}
		if (__LIB_1__::func_186(iVar1))
		{
			MISC::SET_BIT(&uVar0, 22);
		}
		if (__LIB_0__::func_834(iVar1))
		{
			MISC::SET_BIT(&uVar0, 23);
		}
		if (__LIB_2__::func_762(iVar1))
		{
			MISC::SET_BIT(&uVar0, 24);
		}
		if (__LIB_1__::func_333(iVar1))
		{
			MISC::SET_BIT(&uVar0, 25);
		}
		if (__LIB_3__::func_457(iVar1))
		{
			MISC::SET_BIT(&uVar0, 26);
		}
		if (__LIB_8__::func_448())
		{
			MISC::SET_BIT(&uVar0, 27);
		}
		if (__LIB_3__::func_61(iVar1))
		{
			MISC::SET_BIT(&uVar0, 28);
		}
		if (__LIB_2__::func_730(iVar1))
		{
			MISC::SET_BIT(&uVar0, 29);
		}
		if (__LIB_2__::func_593(iVar1))
		{
			MISC::SET_BIT(&uVar0, 30);
		}
		if (__LIB_2__::func_474(iVar1))
		{
			MISC::SET_BIT(&uVar0, 31);
		}
	}
	return uVar0;
}

void func_1876()//Position - 0xB3049
{
	bool bVar0;
	int iVar1;
	if (func_25())
	{
		if (!func_63(NETWORK::PARTICIPANT_ID(), 19))
		{
			bVar0 = false;
			iVar1 = 0;
			while (iVar1 < func_24())
			{
				if (Local_183.f_101[iVar1] == PLAYER::PLAYER_ID())
				{
					bVar0 = true;
				}
				iVar1++;
			}
			if (bVar0)
			{
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					func_531(19);
					func_1344(1);
				}
			}
		}
	}
}

void func_1878(var uParam0, var uParam1, struct<3> Param2, var uParam3)//Position - 0xB30C2
{
	int iVar0;
	uParam0->f_2 = { Param2 };
	__LIB_10__::func_844(uParam0, uParam3);
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		uParam1->f_1 = 1;
		if (!*uParam1)
		{
			iVar0 = __LIB_0__::func_582();
			if (!__LIB_1__::func_298(iVar0, 8) || Global_262145.f_18228 /* Tunable: 1508939547 */)
			{
				uParam1->f_2[0] = -2;
			}
			else if (__LIB_13__::func_268(iVar0) <= 0)
			{
				uParam1->f_2[0] = -3;
			}
			else if (!func_1879(iVar0))
			{
				uParam1->f_2[0] = -4;
			}
		}
	}
}

int func_1879(int iParam0)//Position - 0xB3146
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)))
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (func_615(iVar1, iParam0, 1) && __LIB_13__::func_379(iVar1) == 1)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_1881(int iParam0)//Position - 0xB31A2
{
	MISC::SET_BIT(&uLocal_149, iParam0);
}

int func_1883()//Position - 0xB32BC
{
	if (func_448() && func_245())
	{
		return 1;
	}
	if (func_74())
	{
		return 1;
	}
	return 0;
}

void func_1884(bool bParam0)//Position - 0xB32E4
{
	if (bParam0)
	{
		if (!BitTest(Global_1640641, 0))
		{
			MISC::SET_BIT(&Global_1640641, 0);
		}
	}
	else if (BitTest(Global_1640641, 0))
	{
		MISC::CLEAR_BIT(&Global_1640641, 0);
	}
}

void func_1887(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0xB3343
{
	float fVar0;
	if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_33 != iParam0)
	{
		__LIB_4__::func_830(-1);
		Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_33 = iParam0;
		if (__LIB_4__::func_829() != -1)
		{
			__LIB_4__::func_831(-1);
		}
		if (__LIB_4__::func_828() != -1)
		{
			__LIB_5__::func_746(-1);
		}
		__LIB_10__::func_959(iParam2);
		__LIB_20__::func_416(iParam0);
		if (!__LIB_10__::func_958(iParam0))
		{
			fVar0 = __LIB_10__::func_957(iParam0);
			if (fVar0 != 1f)
			{
				__LIB_7__::func_230(fVar0);
				MISC::SET_BIT(&(Global_1943920.f_3), 1);
			}
		}
		if (!__LIB_10__::func_956(iParam0) || iParam3)
		{
			if (__LIB_10__::func_955(iParam0, iParam2) && iParam3 == 1)
			{
				PLAYER::SET_MAX_WANTED_LEVEL(0);
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
				}
				MISC::SET_BIT(&(Global_1943920.f_3), 0);
			}
			else if (PLAYER::GET_MAX_WANTED_LEVEL() < 5)
			{
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
				PLAYER::SET_MAX_WANTED_LEVEL(5);
			}
		}
		if (__LIB_0__::func_674())
		{
			__LIB_1__::func_484(27);
		}
		if (bParam1)
		{
			if (!__LIB_25__::func_938())
			{
				__LIB_6__::func_990(1);
			}
		}
		if ((((((iParam0 == 159 || iParam0 == 157) || iParam0 == 153) || iParam0 == 154) || iParam0 == 164) || iParam0 == 155) || iParam0 == 171)
		{
			if ((BitTest(Global_2815059.f_4624, 1) || BitTest(Global_2815059.f_4624, 4)) || BitTest(Global_2815059.f_4624, 0))
			{
				__LIB_1__::func_447(6);
			}
			__LIB_10__::func_885();
		}
		if (((iParam0 == 164 || iParam0 == 208) || iParam0 == 250) || iParam0 == 237)
		{
			MISC::ENABLE_DISPATCH_SERVICE(3, false);
			MISC::ENABLE_DISPATCH_SERVICE(5, false);
		}
		if (__LIB_0__::func_738(PLAYER::PLAYER_ID()) && __LIB_0__::func_286(PLAYER::PLAYER_ID()))
		{
			MISC::SET_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1), 8);
		}
		func_1889();
		if (__LIB_10__::func_943(iParam0))
		{
			MISC::ENABLE_DISPATCH_SERVICE(3, false);
			MISC::ENABLE_DISPATCH_SERVICE(5, false);
			MISC::SET_BIT(&(Global_1943920.f_3), 6);
		}
		Global_2815059.f_6745 = 0;
	}
}

void func_1889()//Position - 0xB35A1
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bVar3 = __LIB_13__::func_399();
	iVar2 = __LIB_2__::func_191(PLAYER::PLAYER_ID());
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
			if (func_615(iVar1, iVar2, 1) || __LIB_21__::func_139(iVar1, PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CAN_DAMAGE_PLAYER(PLAYER::PLAYER_ID(), iVar1, bVar3);
				PLAYER::SET_PLAYER_CAN_DAMAGE_PLAYER(iVar1, PLAYER::PLAYER_ID(), bVar3);
			}
		}
		iVar0++;
	}
}

bool func_1909(int iParam0)//Position - 0xB3EC8
{
	return BitTest(uLocal_149, iParam0);
}

void func_1910()//Position - 0xB3ED6
{
	if (!func_63(NETWORK::PARTICIPANT_ID(), 21))
	{
		if (Global_1574582.f_6)
		{
			func_531(21);
		}
	}
}

void func_1911()//Position - 0xB3EFB
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	struct<3> Var3;
	int iVar4;
	int iVar5;
	if (!func_25())
	{
		iVar0 = 0;
		while (iVar0 < func_14())
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_59[iVar0]))
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_183.f_59[iVar0]), false) };
				iVar2 = __LIB_31__::func_908(Var1, 6, -1, 0, 1, -1);
				Var3 = { __LIB_31__::func_882(iVar2, 0) };
				iVar4 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Var3, __LIB_18__::func_444(iVar2));
				iVar5 = INTERIOR::GET_INTERIOR_FROM_ENTITY(NETWORK::NET_TO_VEH(Local_183.f_59[iVar0]));
				if (iVar4 != 0 && iVar4 == iVar5)
				{
					if (!Global_2815059.f_5117)
					{
						Global_2815059.f_5117 = 1;
					}
					return;
				}
			}
			iVar0++;
		}
		if (Global_2815059.f_5117)
		{
			Global_2815059.f_5117 = 0;
		}
	}
}

void func_1931()//Position - 0xB6566
{
	if (__LIB_0__::func_649(&(Local_183.f_959)))
	{
		if (!func_1336(5))
		{
			if (__LIB_2__::func_47(&(Local_183.f_959), (func_483() - 5000), 0))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "5s", "MP_MISSION_COUNTDOWN_SOUNDSET", false);
				__LIB_29__::func_82(5);
			}
		}
		if (!func_1336(6))
		{
			if (__LIB_2__::func_47(&(Local_183.f_959), func_483(), 0))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Crates_Blipped", "GTAO_Biker_Modes_Soundset", false);
				__LIB_29__::func_82(6);
			}
		}
	}
}

void func_1932()//Position - 0xB65DE
{
	if (!func_1336(29))
	{
		if (func_25())
		{
			if (!__LIB_0__::func_649(&uLocal_353))
			{
				__LIB_0__::func_580(&uLocal_353, 0, 0);
			}
			else if ((__LIB_2__::func_47(&uLocal_353, 30000, 0) && Global_2703735.f_4.f_10) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				if (func_1255())
				{
					__LIB_1__::func_278("BSB_HOLDERS" /* GXT: If you die while carrying a duffel bag the product remaining in the bag will be lost. */, -1);
				}
				else
				{
					__LIB_1__::func_278("BSB_HELPERS" /* GXT: Protect Members of the MC that have a duffel bag. If they are killed the product they are carrying will be lost. */, -1);
				}
				__LIB_36__::func_794(1);
				__LIB_29__::func_82(29);
			}
		}
		else
		{
			__LIB_29__::func_82(29);
		}
	}
}

void func_1933()//Position - 0xB6665
{
	int iVar0;
	int iVar1;
	if (func_253())
	{
		iVar0 = 0;
		while (iVar0 < func_14())
		{
			iVar1 = (Local_183.f_664[iVar0] - 1);
			if ((Local_183.f_664[iVar0] - 1) > -1)
			{
				if (__LIB_0__::func_649(&(Local_183.f_193[iVar1 /*47*/].f_38[iVar0 /*2*/])))
				{
					if (__LIB_2__::func_47(&(Local_183.f_193[iVar1 /*47*/].f_38[iVar0 /*2*/]), 1000, 0))
					{
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_193[iVar1 /*47*/][iVar0]))
						{
							if (ENTITY::GET_ENTITY_COLLISION_DISABLED(NETWORK::NET_TO_OBJ(Local_183.f_193[iVar1 /*47*/][iVar0])))
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_183.f_193[iVar1 /*47*/][iVar0]) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_183.f_193[iVar1 /*47*/][iVar0]) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
								{
									if (__LIB_0__::func_682(Local_183.f_193[iVar1 /*47*/][iVar0]))
									{
										ENTITY::SET_ENTITY_COLLISION(NETWORK::NET_TO_OBJ(Local_183.f_193[iVar1 /*47*/][iVar0]), true, false);
									}
								}
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
}

void func_1934()//Position - 0xB6769
{
	bool bVar0;
	bVar0 = false;
	while (bVar0 < func_14())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_59[bVar0]))
		{
			if (func_66(bVar0))
			{
				VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON(NETWORK::NET_TO_VEH(Local_183.f_59[bVar0]), false, false);
				if (func_74())
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_183.f_59[bVar0]))
					{
						if (BitTest(Local_183.f_166, bVar0))
						{
							if (func_1427(bVar0))
							{
								func_474(bVar0, 0);
							}
							func_1197(bVar0, 1, 0);
							func_1935(bVar0);
						}
					}
				}
			}
			if (func_366())
			{
				if (VEHICLE::GET_IS_BOAT_CAPSIZED(func_13(bVar0)))
				{
					if (VEHICLE::IS_BOAT_ANCHORED(func_13(bVar0)))
					{
						VEHICLE::SET_BOAT_ANCHOR(func_13(bVar0), false);
					}
				}
			}
		}
		bVar0++;
	}
}

void func_1935(bool bParam0)//Position - 0xB681E
{
	int iVar0;
	iVar0 = func_67(bParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar0);
	}
}

void func_1936()//Position - 0xB684A
{
	if (func_471() == 1)
	{
		MISC::ENABLE_DISPATCH_SERVICE(3, false);
		MISC::ENABLE_DISPATCH_SERVICE(5, false);
	}
	else
	{
		MISC::ENABLE_DISPATCH_SERVICE(3, true);
		MISC::ENABLE_DISPATCH_SERVICE(5, true);
	}
}

void func_1937()//Position - 0xB6875
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bVar0 = false;
	while (bVar0 < func_14())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_59[bVar0]))
		{
			if (__LIB_19__::func_760(1) && (__LIB_0__::func_582() == Local_183.f_53 || PLAYER::PLAYER_ID() == Local_183.f_53))
			{
				if (func_66(bVar0))
				{
					if (VEHICLE::GET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(func_13(bVar0), PLAYER::PLAYER_ID()))
					{
						VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(func_13(bVar0), PLAYER::PLAYER_ID(), false);
					}
				}
			}
			else if (func_66(bVar0))
			{
				if (!VEHICLE::GET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(func_13(bVar0), PLAYER::PLAYER_ID()))
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(func_13(bVar0), PLAYER::PLAYER_ID(), true);
				}
			}
			if (func_508())
			{
				if (!func_1336(func_1939(bVar0)))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_183.f_59[bVar0]) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_183.f_59[bVar0]) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
					{
						if (__LIB_0__::func_682(Local_183.f_59[bVar0]))
						{
							ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_VEH(Local_183.f_59[bVar0]), false);
							__LIB_29__::func_82(func_1939(bVar0));
						}
					}
				}
			}
		}
		bVar0++;
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < func_72())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_64[bVar0]))
		{
			iVar2 = NETWORK::NET_TO_VEH(Local_183.f_64[bVar0]);
			iVar1 = NETWORK::NET_TO_ENT(Local_183.f_64[bVar0]);
			if (__LIB_0__::func_121(iVar2))
			{
				if (!VEHICLE::GET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(iVar2, PLAYER::PLAYER_ID()))
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(iVar2, PLAYER::PLAYER_ID(), true);
				}
				if (func_74())
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_183.f_64[bVar0]))
					{
						if (!BitTest(Local_184[NETWORK::PARTICIPANT_ID_TO_INT() /*29*/].f_3, bVar0))
						{
							if ((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iVar2, 0, 10000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iVar2, 1, 10000)) || ENTITY::IS_ENTITY_IN_WATER(iVar1))
							{
								MISC::SET_BIT(&(Local_184[NETWORK::PARTICIPANT_ID_TO_INT() /*29*/].f_3), bVar0);
							}
						}
						if (!BitTest(Local_183.f_4, bVar0))
						{
							VEHICLE::SET_VEHICLE_DOOR_LATCHED(iVar2, 5, false, false, true);
							VEHICLE::SET_VEHICLE_DOOR_AUTO_LOCK(iVar2, 5, false);
							VEHICLE::SET_VEHICLE_DOOR_OPEN(iVar2, 5, false, true);
						}
						else if (!func_1938(bVar0) && !ENTITY::IS_ENTITY_ON_SCREEN(iVar1))
						{
							VEHICLE::SET_VEHICLE_DOOR_LATCHED(iVar2, 5, true, true, true);
							VEHICLE::SET_VEHICLE_DOOR_AUTO_LOCK(iVar2, 5, true);
							VEHICLE::SET_VEHICLE_DOOR_SHUT(iVar2, 5, true);
							VEHICLE::SET_VEHICLE_INDIVIDUAL_DOORS_LOCKED(iVar2, 5, 2);
						}
					}
				}
			}
		}
		bVar0++;
	}
	if (func_499())
	{
		bVar0 = false;
		bVar0 = false;
		while (bVar0 < func_493())
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_837[bVar0 /*6*/]))
			{
				if (__LIB_0__::func_121(NETWORK::NET_TO_ENT(Local_183.f_837[bVar0 /*6*/])))
				{
					if (!VEHICLE::GET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(NETWORK::NET_TO_VEH(Local_183.f_837[bVar0 /*6*/]), PLAYER::PLAYER_ID()))
					{
						VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(NETWORK::NET_TO_VEH(Local_183.f_837[bVar0 /*6*/]), PLAYER::PLAYER_ID(), true);
					}
				}
			}
			bVar0++;
		}
	}
}

int func_1938(bool bParam0)//Position - 0xB6B30
{
	int iVar0;
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_64[bParam0]))
	{
		iVar0 = NETWORK::NET_TO_VEH(Local_183.f_64[bParam0]);
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, 0f, 0.3f, 0.1f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, 0f, -3.4f, 1.4f), 2.1f, false, true, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_1939(int iParam0)//Position - 0xB6BAB
{
	switch (iParam0)
	{
		case 0:
			return 7;
		case 1:
			return 8;
		case 2:
			return 9;
		case 3:
			return 25;
		default:
	}
	return 7;
}

void func_1940()//Position - 0xB6BE6
{
	if (!func_1909(31))
	{
		__LIB_1__::func_447(24);
		if (func_508() && func_1944())
		{
			if (__LIB_39__::func_187())
			{
				func_1881(31);
			}
		}
	}
}

int func_1944()//Position - 0xB6E96
{
	if (func_6())
	{
		return func_29(3);
	}
	return 1;
}

void func_1946()//Position - 0xB6EB6
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	if (func_347())
	{
		bVar4 = false;
		while (bVar4 < func_246())
		{
			switch (func_524(bVar4))
			{
				case 0:
					break;
				case 1:
					break;
				case 2:
					if (func_346(bVar4))
					{
						if (func_27())
						{
							if (func_41())
							{
								if (bVar4 == 0)
								{
									func_336(bVar4, 12);
								}
								else
								{
									func_336(bVar4, 8);
								}
							}
						}
					}
					break;
				case 19:
					if (func_346(bVar4))
					{
						iVar0 = func_522(bVar4);
						if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
						{
							if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_183.f_707[bVar4 /*8*/]) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_183.f_707[bVar4 /*8*/]) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(iVar0, false))
								{
									iVar3 = PED::GET_VEHICLE_PED_IS_IN(iVar0, false);
									if (ENTITY::DOES_ENTITY_EXIST(iVar3) && !ENTITY::IS_ENTITY_DEAD(iVar3, false))
									{
										if (ENTITY::IS_ENTITY_IN_WATER(iVar3))
										{
											if (__LIB_0__::func_682(Local_183.f_707[bVar4 /*8*/]))
											{
												PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
												TASK::TASK_LEAVE_ANY_VEHICLE(iVar0, 0, 0);
											}
										}
									}
								}
							}
						}
					}
					break;
				case 6:
					if (func_346(bVar4))
					{
						iVar0 = func_522(bVar4);
						if (func_18())
						{
							func_1950(bVar4);
						}
						if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(iVar0, joaat("SCRIPT_TASK_VEHICLE_MISSION")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iVar0, joaat("SCRIPT_TASK_VEHICLE_MISSION")) != 0)
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_183.f_707[bVar4 /*8*/]) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_183.f_707[bVar4 /*8*/]) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
								{
									if (__LIB_0__::func_682(Local_183.f_707[bVar4 /*8*/]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(func_344(bVar4)))
									{
										iVar3 = NETWORK::NET_TO_VEH(func_344(bVar4));
										if (ENTITY::DOES_ENTITY_EXIST(iVar3) && ENTITY::DOES_ENTITY_EXIST(func_13(Local_183.f_966)))
										{
											if (__LIB_0__::func_121(iVar3) && __LIB_0__::func_121(func_13(Local_183.f_966)))
											{
												func_337(iVar0, func_1949());
												TASK::TASK_VEHICLE_MISSION(iVar0, iVar3, func_13(Local_183.f_966), 7, 50f, 786469, -1f, -1f, true);
											}
										}
									}
								}
							}
							else if (func_18())
							{
								if (!PED::IS_PED_DOING_DRIVEBY(iVar0))
								{
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_183.f_707[bVar4 /*8*/]) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_183.f_707[bVar4 /*8*/]) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
									{
										if (__LIB_0__::func_682(Local_183.f_707[bVar4 /*8*/]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(func_344(bVar4)))
										{
											iVar3 = NETWORK::NET_TO_VEH(func_344(bVar4));
											if (ENTITY::DOES_ENTITY_EXIST(iVar3) && ENTITY::DOES_ENTITY_EXIST(func_13(Local_183.f_966)))
											{
												if (__LIB_0__::func_121(iVar3) && __LIB_0__::func_121(func_13(Local_183.f_966)))
												{
													TASK::TASK_DRIVE_BY(iVar0, 0, func_13(Local_183.f_966), 0f, 0f, 0f, -1f, 30, true, joaat("FIRING_PATTERN_BURST_FIRE_DRIVEBY"));
												}
											}
										}
									}
								}
							}
						}
					}
					break;
				case 9:
					if (func_346(bVar4))
					{
						iVar0 = func_522(bVar4);
						if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
						{
							if (!PED::IS_PED_IN_COMBAT(iVar0, 0))
							{
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iVar0, 299.99f, 0);
							}
						}
						func_1950(bVar4);
					}
					break;
				case 8:
					if (func_346(bVar4))
					{
						iVar0 = func_522(bVar4);
						if (func_18())
						{
							func_1950(bVar4);
						}
						if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
						{
							if (func_18())
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(iVar0, joaat("SCRIPT_TASK_COMBAT_HATED_TARGETS_IN_AREA")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iVar0, joaat("SCRIPT_TASK_COMBAT_HATED_TARGETS_IN_AREA")) != 0)
								{
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_183.f_707[bVar4 /*8*/]) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_183.f_707[bVar4 /*8*/]) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
									{
										if (__LIB_0__::func_682(Local_183.f_707[bVar4 /*8*/]))
										{
											func_1947(iVar0, 0, 1, func_1949());
											TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(iVar0, ENTITY::GET_ENTITY_COORDS(iVar0, true), 299.9f, 0);
										}
									}
								}
							}
							else if (TASK::GET_SCRIPT_TASK_STATUS(iVar0, joaat("SCRIPT_TASK_COMBAT_HATED_TARGETS_AROUND_PED")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iVar0, joaat("SCRIPT_TASK_COMBAT_HATED_TARGETS_AROUND_PED")) != 0)
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_183.f_707[bVar4 /*8*/]) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_183.f_707[bVar4 /*8*/]) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
								{
									if (__LIB_0__::func_682(Local_183.f_707[bVar4 /*8*/]))
									{
										func_1947(iVar0, 1, 1, func_1949());
										TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iVar0, 299.9f, 0);
									}
								}
							}
						}
					}
					break;
				case 17:
					if (func_346(bVar4))
					{
						iVar0 = func_522(bVar4);
						if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(iVar0, joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iVar0, joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 0)
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_183.f_707[bVar4 /*8*/]) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_183.f_707[bVar4 /*8*/]) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
								{
									if (__LIB_0__::func_682(Local_183.f_707[bVar4 /*8*/]))
									{
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
										TASK::TASK_LEAVE_ANY_VEHICLE(iVar0, 0, 0);
									}
								}
							}
						}
					}
					break;
				case 12:
					if (func_346(bVar4))
					{
						iVar0 = func_522(bVar4);
						if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(iVar0, -251125078) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iVar0, -251125078) != 0)
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_183.f_707[bVar4 /*8*/]) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_183.f_707[bVar4 /*8*/]) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
								{
									if (__LIB_0__::func_682(Local_183.f_707[bVar4 /*8*/]))
									{
										TASK::TASK_SMART_FLEE_COORD(iVar0, ENTITY::GET_ENTITY_COORDS(iVar0, true), 10000f, 999999, false, false);
										PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 256, true);
										PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 2, false);
									}
								}
							}
						}
					}
					break;
				case 13:
					if (func_346(bVar4))
					{
						iVar0 = func_522(bVar4);
						if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(iVar0, -251125078) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iVar0, -251125078) != 0)
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_183.f_707[bVar4 /*8*/]) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_183.f_707[bVar4 /*8*/]) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
								{
									if (__LIB_0__::func_682(Local_183.f_707[bVar4 /*8*/]))
									{
										TASK::TASK_SMART_FLEE_COORD(iVar0, ENTITY::GET_ENTITY_COORDS(iVar0, true), 10000f, 999999, false, false);
										PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 256, true);
										PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 2, false);
									}
								}
							}
						}
					}
					break;
				case 14:
					if (func_346(bVar4))
					{
						iVar0 = NETWORK::NET_TO_PED(Local_183.f_707[bVar4 /*8*/]);
						if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(iVar0, -251125078) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iVar0, -251125078) != 0)
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_183.f_707[bVar4 /*8*/]) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_183.f_707[bVar4 /*8*/]) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
								{
									if (__LIB_0__::func_682(Local_183.f_707[bVar4 /*8*/]))
									{
										func_516(bVar4, &iVar2, 0);
										if (iVar2 != -1)
										{
											Var1 = { func_412(func_16(), Local_183.f_175[iVar2], Local_183.f_679, iVar2, 0, 0) };
											if (!__LIB_0__::func_78(Var1, 0f, 0f, 0f, 0))
											{
												PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
												PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 5, false);
												PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 17, true);
												PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 1024, true);
												PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 32768, false);
												TASK::TASK_SMART_FLEE_COORD(iVar0, Var1, 10000f, 999999, false, false);
											}
										}
									}
								}
							}
							func_1950(bVar4);
						}
					}
					break;
				case 15:
					if (func_346(bVar4))
					{
					}
					break;
				case 10:
					if (func_346(bVar4))
					{
						iVar0 = NETWORK::NET_TO_PED(Local_183.f_707[bVar4 /*8*/]);
						if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
						{
							if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_183.f_707[bVar4 /*8*/]) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_183.f_707[bVar4 /*8*/]) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
							{
								if (__LIB_0__::func_682(Local_183.f_707[bVar4 /*8*/]))
								{
									PED::SET_PED_CONFIG_FLAG(iVar0, 244, true);
									PED::SET_PED_CONFIG_FLAG(iVar0, 294, true);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
									PED::SET_PED_KEEP_TASK(iVar0, true);
									PED::SET_PED_DIES_WHEN_INJURED(iVar0, true);
									__LIB_1__::func_46(&(Local_183.f_707[bVar4 /*8*/]));
								}
							}
						}
					}
					break;
				case 16:
					if (func_346(bVar4))
					{
					}
					break;
				case 18:
					break;
				case 20:
					break;
			}
			bVar4++;
		}
	}
	if (func_243() && func_366())
	{
		iVar5 = 0;
		while (iVar5 < func_242())
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_80[iVar5]))
			{
				iVar6 = NETWORK::NET_TO_PED(Local_183.f_80[iVar5]);
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(func_365(iVar5)))
				{
					iVar7 = NETWORK::NET_TO_VEH(func_365(iVar5));
					if (__LIB_2__::func_15(iVar6, iVar7, 0))
					{
						if (VEHICLE::GET_IS_BOAT_CAPSIZED(iVar7))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(iVar6, joaat("SCRIPT_TASK_LEAVE_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iVar6, joaat("SCRIPT_TASK_LEAVE_VEHICLE")) != 0)
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar6) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_183.f_80[iVar5]) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
								{
									if (__LIB_3__::func_686(iVar6))
									{
										PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_183.f_80[iVar5]), 3, true);
										TASK::TASK_LEAVE_VEHICLE(iVar6, iVar7, 0);
									}
								}
							}
						}
					}
				}
			}
			iVar5++;
		}
	}
}

void func_1947(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0xB77F2
{
	int iVar0;
	int iVar1;
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, bParam1);
	PED::SET_PED_DIES_WHEN_INJURED(iParam0, true);
	iVar0 = __LIB_31__::func_175();
	WEAPON::GIVE_WEAPON_TO_PED(iParam0, iVar0, 9999999, true, true);
	iVar1 = __LIB_1__::func_363();
	PED::SET_PED_COMBAT_MOVEMENT(iParam0, iVar1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 42, false);
	PED::SET_PED_HIGHLY_PERCEPTIVE(iParam0, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 43, true);
	PED::SET_PED_TARGET_LOSS_RESPONSE(iParam0, 1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 146, true);
	PED::SET_PED_ACCURACY(iParam0, iParam3);
	func_329(iParam0);
	PED::SET_PED_KEEP_TASK(iParam0, true);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, Global_1837197);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 2, bParam2);
	if (func_18())
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 28, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 50, true);
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(iParam0))
		{
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 64, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 66, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 1, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 53, true);
		}
		else
		{
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 1, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 53, false);
		}
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 57, false);
		PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iParam0, 3);
		PED::SET_PED_DIES_WHEN_INJURED(iParam0, true);
		PED::SET_PED_COMBAT_RANGE(iParam0, 2);
		PED::SET_PED_SEEING_RANGE(iParam0, 299f);
	}
}

int func_1949()//Position - 0xB7907
{
	switch (func_330())
	{
		case 1:
			return Global_262145.f_16766 /* Tunable: EXEC_SELL_EASY_PED_ACCURACY */;
		case 2:
			return Global_262145.f_16762 /* Tunable: EXEC_SELL_MEDIUM_PED_ACCURACY */;
		default:
	}
	return 35;
}

void func_1950(bool bParam0)//Position - 0xB793A
{
	if (BitTest(Local_183.f_885, bParam0))
	{
		if (func_346(bParam0))
		{
			if (!PED::IS_PED_INJURED(func_522(bParam0)))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_183.f_707[bParam0 /*8*/]) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_183.f_707[bParam0 /*8*/]) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
				{
					if (__LIB_0__::func_682(Local_183.f_707[bParam0 /*8*/]))
					{
						ENTITY::SET_ENTITY_HEALTH(func_520(bParam0), 0, 0);
					}
				}
			}
		}
	}
}

void func_1951()//Position - 0xB79B1
{
	bool bVar0;
	if (func_1944())
	{
		bVar0 = func_12(0);
		__LIB_36__::func_996(func_13(0), &(Local_157[0 /*2*/]), 0, bVar0);
		if (func_45())
		{
			bVar0 = func_12(1);
			__LIB_36__::func_996(func_13(1), &(Local_157[1 /*2*/]), 1, bVar0);
			bVar0 = func_12(2);
			__LIB_36__::func_996(func_13(2), &(Local_157[2 /*2*/]), 2, bVar0);
			bVar0 = func_12(3);
			__LIB_36__::func_996(func_13(3), &(Local_157[3 /*2*/]), 3, bVar0);
		}
	}
}

void func_1957()//Position - 0xB7BCB
{
	if (!func_855(0))
	{
		if (__LIB_0__::func_109())
		{
			AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", true);
			AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", true);
		}
		func_850(0);
	}
}

void func_1958(int iParam0, int iParam1)//Position - 0xB7BFA
{
	Local_184[iParam0 /*29*/].f_1 = iParam1;
}

int func_1959()//Position - 0xB7C0D
{
	struct<3> Var0;
	struct<3> Var1;
	func_1966(1);
	if (func_367())
	{
		Local_133.f_207 = AUDIO::GET_SOUND_ID();
	}
	if (!__LIB_0__::func_581(PLAYER::PLAYER_ID()))
	{
		if (Local_183.f_969 != -1)
		{
			Global_1946098 = Local_183.f_969;
			Global_1946100 = Local_183.f_968;
		}
	}
	if (func_366())
	{
		STREAMING::REQUEST_ANIM_DICT(func_1210(0));
		STREAMING::REQUEST_ANIM_DICT(func_1210(1));
	}
	if (__LIB_24__::func_837(Local_183.f_0))
	{
		__LIB_34__::func_310(Local_183.f_0, &Var0, &Var1);
		if (!PED::DOES_SCENARIO_BLOCKING_AREA_EXISTS(Var0, Var1))
		{
			Local_133.f_485 = PED::ADD_SCENARIO_BLOCKING_AREA(Var0, Var1, false, true, true, true);
			Local_133.f_486 = 1;
		}
	}
	if (func_25())
	{
		OBJECT::SET_MAX_NUM_PORTABLE_PICKUPS_CARRIED_BY_PLAYER(func_1961(), 1);
	}
	MISC::ENABLE_DISPATCH_SERVICE(5, false);
	MISC::ENABLE_DISPATCH_SERVICE(3, false);
	Local_184[NETWORK::PARTICIPANT_ID_TO_INT() /*29*/].f_15 = __LIB_0__::func_160();
	func_1960(func_16());
	Global_1943929.f_2 = Local_183.f_19;
	Global_1943929.f_3 = Local_183.f_20;
	return 1;
}

void func_1960(int iParam0)//Position - 0xB7CF6
{
	int iVar0;
	iVar0 = PLAYER::PLAYER_ID();
	if (Global_1892703[iVar0 /*599*/].f_10.f_473 != iParam0)
	{
		Global_1892703[iVar0 /*599*/].f_10.f_473 = iParam0;
	}
}

int func_1961()//Position - 0xB7D27
{
	return joaat("prop_cs_heist_bag_01");
}

void func_1966(bool bParam0)//Position - 0xB833E
{
	if (Local_183.f_883 != 0 && Local_183.f_884 != 0)
	{
		PED::SET_PED_MODEL_IS_SUPPRESSED(Local_183.f_884, bParam0);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_183.f_884, bParam0);
	}
}

void func_1968(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5)//Position - 0xB83D5
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (iParam1 <= 0)
	{
		*iParam5 = 3;
		return;
	}
	iVar0 = __LIB_4__::func_473(PLAYER::PLAYER_ID(), iParam0);
	iVar1 = __LIB_4__::func_816(iParam0);
	if (!__LIB_0__::func_112())
	{
		if (iVar1 >= 0 && iVar0 >= iParam1)
		{
			iVar2 = (iVar0 - iParam1);
			__LIB_1__::func_597(__LIB_9__::func_556(iVar1), iVar2, -1, 1, 0);
			Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_191[iVar1 /*13*/].f_1 = iVar2;
			Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_191[iVar1 /*13*/].f_11 = __LIB_25__::func_997(PLAYER::PLAYER_ID(), iParam0, iVar2, 1);
			if (bParam3)
			{
				__LIB_24__::func_821(__LIB_1__::func_347(iParam0));
			}
			Global_2725352 = 1;
			*iParam5 = 2;
		}
		else
		{
			*iParam5 = 3;
		}
	}
	else if (iVar1 >= 0 && iVar0 >= iParam1)
	{
		if (!bParam3)
		{
			iParam2 = 0;
		}
		if (__LIB_39__::func_263(iVar1, iParam1, iParam2, iParam4, iParam5, Global_2815059.f_5195.f_387))
		{
			if (*iParam5 == 2)
			{
				iVar3 = (iVar0 - iParam1);
				__LIB_1__::func_597(__LIB_9__::func_556(iVar1), iVar3, -1, 1, 0);
				Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_191[iVar1 /*13*/].f_1 = iVar3;
				Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_191[iVar1 /*13*/].f_11 = __LIB_25__::func_997(PLAYER::PLAYER_ID(), iParam0, iVar3, 1);
				if (bParam3)
				{
					__LIB_24__::func_821(__LIB_1__::func_347(iParam0));
				}
				Global_2725352 = 1;
			}
		}
		else if (*iParam5 == 1 && __LIB_2__::func_345() == -1)
		{
			*iParam5 = 3;
		}
	}
}

int func_1984()//Position - 0xB945A
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	if (Local_183.f_0 != 0)
	{
		iVar1 = __LIB_4__::func_473(PLAYER::PLAYER_ID(), Local_183.f_0);
		if (iVar1 >= Global_262145.f_19105 /* Tunable: 627530173 */)
		{
			iVar0 = Global_262145.f_19108 /* Tunable: -1635462305 */;
		}
		else if (iVar1 >= Global_262145.f_19106 /* Tunable: -1029255789 */)
		{
			iVar0 = Global_262145.f_19109 /* Tunable: 598973759 */;
		}
		else
		{
			iVar0 = Global_262145.f_19110 /* Tunable: 956641488 */;
		}
	}
	return iVar0;
}

int func_1985()//Position - 0xB94B4
{
	int iVar0;
	if (Local_183.f_0 != 0)
	{
		iVar0 = __LIB_4__::func_473(PLAYER::PLAYER_ID(), Local_183.f_0);
		if (iVar0 >= Global_262145.f_19107 /* Tunable: 1830665043 */)
		{
			return 1;
		}
	}
	return 0;
}

int func_1988(int iParam0)//Position - 0xB94F7
{
	return Local_184[iParam0 /*29*/].f_1;
}

void func_1989()//Position - 0xB9508
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<5> Var5;
	struct<3> Var6;
	struct<4> Var7;
	struct<3> Var8;
	struct<5> Var9;
	int iVar10;
	int iVar11;
	int iVar12;
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar3 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		switch (iVar3)
		{
			case 174:
				if (SCRIPT::GET_EVENT_DATA(1, iVar0, &iVar4, 2))
				{
					switch (iVar4)
					{
						case -396343788:
							if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
							{
								if (SCRIPT::GET_EVENT_DATA(1, iVar0, &Var9, 5))
								{
									if (Var9.f_4 == Local_183.f_983)
									{
										iVar1 = Var9.f_2;
										bVar2 = Var9.f_3;
										if (iVar1 != -1)
										{
											if (!BitTest(Local_183.f_113[iVar1], bVar2))
											{
												if (BitTest(Local_183.f_134[iVar1], bVar2))
												{
													if (!func_536(bVar2))
													{
														MISC::SET_BIT(&(Local_183.f_113[iVar1]), bVar2);
														if (Local_183.f_680 == -1 && func_15())
														{
															Local_183.f_680 = bVar2;
														}
														if (func_27() && !func_41())
														{
															func_48(30);
															func_48(6);
														}
														func_2000(func_2001(Var9.f_1), Local_183.f_122);
														func_1998(iVar1);
														func_38(bVar2, iVar1);
														if (func_537(iVar1) >= func_234(iVar1))
														{
															func_47(iVar1);
															Local_183.f_101[iVar1] = -1;
														}
													}
												}
											}
										}
									}
								}
							}
							break;
						case 1268159669:
							if (!__LIB_0__::func_649(&(Local_133.f_248)))
							{
								__LIB_0__::func_580(&(Local_133.f_248), 0, 0);
							}
							break;
						case -1001733190:
							if (__LIB_0__::func_649(&(Local_133.f_248)))
							{
								__LIB_0__::func_579(&(Local_133.f_248));
							}
							break;
						case -1338419719:
							if (SCRIPT::GET_EVENT_DATA(1, iVar0, &Var5, 5))
							{
								if (Var5.f_4 == Local_183.f_983)
								{
									if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
									{
										if (func_19())
										{
											Local_183.f_27 = Var5.f_1;
										}
										else
										{
											iVar10 = (25 + Var5.f_2);
											iVar11 = iVar10;
											func_48(iVar11);
											MISC::SET_BIT(&(Local_183.f_967), Var5.f_2);
											Local_183.f_27 = Var5.f_1;
										}
									}
									if (func_448() || func_461())
									{
										if (__LIB_1__::func_264(Var5.f_1, 1, 1) && __LIB_1__::func_264(PLAYER::PLAYER_ID(), 1, 1))
										{
											if (Var5.f_1 == PLAYER::PLAYER_ID() || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(Var5.f_1), true), true) < 5f)
											{
												func_1207();
											}
										}
									}
								}
							}
							break;
						}
				}
				if (SCRIPT::GET_EVENT_DATA(1, iVar0, &Var6, 3))
				{
					switch (Var6.f_0)
					{
						case -2075123925:
							if (func_1428(1))
							{
								iVar12 = func_1230();
								if (iVar12 != -1)
								{
									if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_59[iVar12]))
									{
										if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_183.f_59[iVar12]))
										{
											VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON_SYNCED(func_13(iVar12), Var6.f_2, false);
										}
									}
								}
							}
							break;
						}
				}
				if (SCRIPT::GET_EVENT_DATA(1, iVar0, &Var7, 6))
				{
					if (Var7.f_0 == -1925643489)
					{
						if (func_615(PLAYER::PLAYER_ID(), Var7.f_2, 1))
						{
							if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
							{
								func_1996(Var7.f_3);
							}
						}
					}
				}
				if (SCRIPT::GET_EVENT_DATA(1, iVar0, &Var8, 4))
				{
					if (Var8.f_0 == -1348629633)
					{
						if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
						{
							if (func_366())
							{
								func_1995(Var8.f_2);
							}
						}
					}
				}
				break;
			case 186:
				func_1990(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_1990(int iParam0)//Position - 0xB981D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	struct<6> Var8;
	int iVar9;
	int iVar10;
	iVar7 = func_1340();
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var8, 13))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Var8.f_0))
		{
			if (ENTITY::IS_ENTITY_A_VEHICLE(Var8.f_0))
			{
				iVar4 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Var8.f_0);
				iVar6 = 0;
				while (iVar6 < func_14())
				{
					if (iVar4 == func_13(iVar6))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Var8.f_1))
						{
							if (ENTITY::IS_ENTITY_A_PED(Var8.f_1))
							{
								iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var8.f_1);
								if (PED::IS_PED_A_PLAYER(iVar1))
								{
									iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
									if (iVar2 == PLAYER::PLAYER_ID())
									{
										if (PLAYER::GET_MAX_WANTED_LEVEL() < iVar7 || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 1)
										{
											iVar9 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Var8.f_0), -1, false);
											iVar10 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Var8.f_0), 0, false);
											if (__LIB_34__::func_590(Var8.f_0, iVar9, iVar10))
											{
												PLAYER::SET_MAX_WANTED_LEVEL(iVar7);
												if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 1)
												{
													func_1337(1);
												}
												func_531(5);
											}
										}
									}
									if (!func_63(NETWORK::PARTICIPANT_ID(), func_1991(iVar6)))
									{
										if (!func_66(iVar6) || Var8.f_5)
										{
											if (func_239() == 0)
											{
												if (!func_12(iVar6))
												{
													Local_184[NETWORK::PARTICIPANT_ID_TO_INT() /*29*/].f_15 = iVar2;
													func_531(func_1991(iVar6));
												}
											}
										}
									}
								}
							}
						}
					}
					iVar6++;
				}
			}
			else if (ENTITY::IS_ENTITY_A_PED(Var8.f_0))
			{
				if (Var8.f_5)
				{
					iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var8.f_0);
					if (PED::IS_PED_A_PLAYER(iVar0))
					{
						iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
						if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar3))
						{
							if (ENTITY::DOES_ENTITY_EXIST(Var8.f_1))
							{
								if (ENTITY::IS_ENTITY_A_PED(Var8.f_1))
								{
									iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var8.f_1);
									if (PED::IS_PED_A_PLAYER(iVar1))
									{
										iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
										if (iVar2 == PLAYER::PLAYER_ID())
										{
											if (PLAYER::GET_MAX_WANTED_LEVEL() < iVar7 || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 1)
											{
												if (PED::GET_PED_TYPE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var8.f_0)) == 6 || PED::GET_PED_TYPE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var8.f_0)) == 29)
												{
													PLAYER::SET_MAX_WANTED_LEVEL(iVar7);
													if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 1)
													{
														func_1337(1);
													}
													func_531(5);
												}
											}
										}
										if (iVar3 != __LIB_0__::func_160())
										{
											if (__LIB_1__::func_264(iVar3, 0, 1))
											{
												iVar5 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar3);
												if (func_63(iVar5, 19))
												{
													if (!func_63(NETWORK::PARTICIPANT_ID(), func_1991(func_65(iVar3))))
													{
														Local_184[NETWORK::PARTICIPANT_ID_TO_INT() /*29*/].f_15 = iVar2;
														func_531(func_1991(func_65(iVar3)));
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
		}
	}
}

int func_1991(int iParam0)//Position - 0xB9A7A
{
	switch (iParam0)
	{
		case 0:
			return 22;
		case 1:
			return 23;
		case 2:
			return 24;
		case 3:
			return 25;
		case 4:
			return 26;
		case 5:
			return 27;
		case 6:
			return 28;
		case 7:
			return 29;
		default:
	}
	return 30;
}

void func_1995(int iParam0)//Position - 0xB9C61
{
	int iVar0;
	iVar0 = SYSTEM::CEIL((IntToFloat((func_560() / func_14())) * Global_262145.f_19115 /* Tunable: 513594799 */));
	Local_183.f_893[iParam0] = (Local_183.f_893[iParam0] - iVar0);
}

void func_1996(int iParam0)//Position - 0xB9C98
{
	struct<14> Var0;
	int iVar1;
	int iVar2;
	Var0.f_2 = 1846859874;
	Var0.f_10 = iParam0;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar1)))
		{
			if (__LIB_1__::func_264(iParam0, 0, 1))
			{
				if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iParam0))
				{
					MISC::SET_BIT(&iVar2, iVar1);
				}
				else if (!__LIB_8__::func_768(iParam0))
				{
					MISC::SET_BIT(&iVar2, iVar1);
				}
			}
		}
		iVar1++;
	}
	if (iVar2 != 0)
	{
		__LIB_1__::func_226(Var0, iVar2);
	}
}

void func_1998(int iParam0)//Position - 0xB9D23
{
	func_28(func_1999(iParam0));
}

int func_1999(int iParam0)//Position - 0xB9D35
{
	switch (iParam0)
	{
		case 0:
			return 7;
		case 1:
			return 8;
		case 2:
			return 9;
		case 3:
			return 10;
		case 4:
			return 11;
		case 5:
			return 12;
		case 6:
			return 13;
		case 7:
			return 14;
		default:
	}
	return 7;
}

void func_2000(int iParam0, bool bParam1)//Position - 0xB9D9C
{
	if (func_23())
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			if (!BitTest(Local_183.f_982, bParam1))
			{
				PED::DROP_AMBIENT_PROP(iParam0);
				func_324(iParam0, func_326(1), 1);
				__LIB_6__::func_834(iParam0, "GENERIC_THANKS", 0);
				if (func_23())
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iParam0);
				}
				MISC::SET_BIT(&(Local_183.f_982), bParam1);
			}
		}
	}
}

int func_2001(int iParam0)//Position - 0xB9E05
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	fVar1 = 9999.99f;
	iVar3 = -1;
	if (func_347())
	{
		iVar0 = 0;
		while (iVar0 < func_246())
		{
			if (!PED::IS_PED_INJURED(func_522(iVar0)))
			{
				fVar2 = __LIB_0__::func_76(PLAYER::GET_PLAYER_PED(iParam0), func_522(iVar0), 1);
				if (fVar2 < fVar1)
				{
					fVar1 = fVar2;
					iVar3 = func_522(iVar0);
				}
			}
			iVar0++;
		}
	}
	return iVar3;
}

void func_2002()//Position - 0xB9E6A
{
	int iVar0;
	int iVar1;
	int iVar2;
	iLocal_156 = -1;
	if (BitTest(uLocal_153, PLAYER::PLAYER_ID()))
	{
		if (BitTest(uLocal_154, NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			if (!__LIB_7__::func_211(PLAYER::PLAYER_ID()))
			{
				iLocal_156 = NETWORK::PARTICIPANT_ID_TO_INT();
			}
			else if (__LIB_0__::func_728() && !__LIB_2__::func_227())
			{
				iVar0 = __LIB_6__::func_544();
				if (PED::IS_PED_A_PLAYER(iVar0))
				{
					iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
					if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar1))
					{
						iVar2 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar1);
						iLocal_156 = iVar2;
					}
				}
			}
		}
	}
}

int func_2011(bool bParam0)//Position - 0xB9FE0
{
	if (!__LIB_6__::func_946(PLAYER::PLAYER_ID(), 3) && func_2018(1))
	{
		return 1;
	}
	if (Global_2815059.f_5195.f_43)
	{
		Global_2815059.f_5195.f_43 = 0;
		return 1;
	}
	if (bParam0)
	{
		if (__LIB_1__::func_301() == __LIB_0__::func_160() || !__LIB_1__::func_264(__LIB_1__::func_301(), 0, 1))
		{
			return 1;
		}
	}
	if (__LIB_6__::func_946(PLAYER::PLAYER_ID(), 1) && !__LIB_8__::func_546(PLAYER::PLAYER_ID()))
	{
		if (__LIB_34__::func_311())
		{
			return 1;
		}
	}
	return 0;
}

int func_2018(bool bParam0)//Position - 0xBA11A
{
	bool bVar0;
	if (!__LIB_19__::func_760(1) && __LIB_1__::func_301() != PLAYER::PLAYER_ID())
	{
		bVar0 = false;
		if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_57 != __LIB_0__::func_160())
		{
			if (__LIB_1__::func_264(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_57, 0, 1))
			{
				if ((Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_24 == 4 || Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_24 == 8) || Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_24 == 6)
				{
					bVar0 = true;
				}
			}
		}
		else if (__LIB_1__::func_297(__LIB_0__::func_396(PLAYER::PLAYER_ID())) == 0 || __LIB_1__::func_297(__LIB_0__::func_396(PLAYER::PLAYER_ID())) == 3)
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (bParam0)
			{
				__LIB_1__::func_447(31);
				if (__LIB_10__::func_929(__LIB_0__::func_396(PLAYER::PLAYER_ID())))
				{
					__LIB_1__::func_447(81);
				}
				if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_57 != __LIB_0__::func_160() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_57))
				{
					Global_1888322 = func_914(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_57, -2, 0, 0, 0);
					if (!__LIB_1__::func_359(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_57))
					{
						__LIB_1__::func_447(88);
					}
				}
				else
				{
					Global_1888322 = 1;
				}
				Global_1888306 = { Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_105 };
			}
			return 1;
		}
	}
	return 0;
}

void func_2023(int iParam0)//Position - 0xBA518
{
	int iVar0;
	func_1344(0);
	func_1884(0);
	func_1505();
	func_1647();
	func_1526();
	__LIB_32__::func_82(PLAYER::PLAYER_PED_ID());
	HUD::SET_FAKE_MINIMAP_MAX_ALTIMETER_HEIGHT(0f, false, 21);
	__LIB_13__::func_283(-1);
	func_1636(0);
	STREAMING::REMOVE_ANIM_DICT(func_1244());
	__LIB_24__::func_799();
	if (Local_133.f_486)
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(Local_133.f_485, false);
	}
	if (!func_1909(0))
	{
		if (func_1909(4))
		{
			func_2096(bLocal_187, func_239(), Local_183.f_0, 0, Local_183.f_167, Local_183.f_122, -1, -1, -1, 0, -1, 0);
		}
	}
	if (__LIB_25__::func_111(PLAYER::PLAYER_PED_ID(), 2, -1))
	{
		func_624(PLAYER::PLAYER_PED_ID(), 2, -1, -1);
	}
	if (iParam0 && bLocal_356)
	{
		MISC::SET_BIT(&(Global_2815059.f_1802), 8);
	}
	if (func_1336(27))
	{
		func_1338(0);
	}
	MISC::ENABLE_DISPATCH_SERVICE(5, true);
	MISC::ENABLE_DISPATCH_SERVICE(3, true);
	if (func_25())
	{
		STREAMING::REMOVE_CLIP_SET("move_m@bag");
		PED::RESET_PED_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID(), 0.25f);
	}
	__LIB_3__::func_647(27);
	__LIB_3__::func_647(23);
	__LIB_3__::func_647(32);
	__LIB_3__::func_647(65);
	func_2095();
	func_1386();
	func_2094();
	func_2093();
	func_2092();
	func_1195();
	func_2090();
	func_849();
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_1339())
		{
			if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_833, 17))
			{
				PLAYER::SET_MAX_WANTED_LEVEL(5);
			}
		}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_230(1))
		{
			__LIB_13__::func_829(30);
		}
		else if (!func_230(1) && Local_183.f_122 > 0)
		{
			__LIB_13__::func_829(31);
		}
		else
		{
			__LIB_13__::func_829(32);
		}
	}
	if (func_239() != 0)
	{
		iVar0 = 0;
		while (iVar0 < func_14())
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_59[iVar0]) && !ENTITY::IS_ENTITY_DEAD(func_13(iVar0), false))
			{
				if (func_448())
				{
					if (ENTITY::IS_ENTITY_IN_AIR(func_67(iVar0)))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(func_67(iVar0)))
						{
							if (func_239() != 7)
							{
								VEHICLE::SET_VEHICLE_ENGINE_ON(func_13(iVar0), false, true, false);
							}
						}
					}
					else
					{
						func_474(iVar0, 1);
						func_1197(iVar0, 1, 0);
					}
				}
				else if ((func_239() != 7 || (func_61() && func_239() == 7)) || (func_61() && func_2011(1)))
				{
					func_474(iVar0, 0);
					func_1197(iVar0, 1, 0);
				}
			}
			iVar0++;
		}
	}
	else if (func_1230() != -1)
	{
		func_474(func_1230(), 1);
		if (func_61() && func_2011(1))
		{
			func_1197(func_1230(), 1, 0);
		}
	}
	func_2089();
	func_2088();
	func_2087();
	func_2085();
	func_2084();
	__LIB_10__::func_962(&(Local_183.f_953), 1);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
	}
	if (func_25())
	{
		OBJECT::SET_MAX_NUM_PORTABLE_PICKUPS_CARRIED_BY_PLAYER(func_1961(), -1);
	}
	func_1966(0);
	if (func_367())
	{
		if (func_1909(17))
		{
			AUDIO::STOP_SOUND(Local_133.f_207);
			func_1335(17);
		}
		AUDIO::RELEASE_SOUND_ID(Local_133.f_207);
	}
	func_1960(-1);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_2072(func_16(), Local_183.f_679, Local_183.f_958, Local_183.f_110, Local_183.f_111, Local_183.f_144, -1, func_2082(), func_2081(), 1);
	}
	__LIB_41__::func_18(1, Local_183.f_0);
	__LIB_18__::func_455();
	Global_1946112 = 0;
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_2072(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, var uParam5, int iParam6, var uParam7, var uParam8, int iParam9)//Position - 0xBC8E9
{
	char* sVar0;
	struct<27> Var1;
	int iVar2;
	struct<28> Var3;
	struct<28> Var4;
	struct<29> Var5;
	sVar0 = SCRIPT::GET_THIS_SCRIPT_NAME();
	iVar2 = __LIB_2__::func_191(PLAYER::PLAYER_ID());
	Var1.f_0 = Global_1943929;
	Var1.f_1 = Global_1943929.f_1;
	Var1.f_4 = Global_1943929.f_4;
	Var1.f_5 = Global_1943929.f_5;
	Var1.f_6 = Global_1943929.f_6;
	Var1.f_7 = Global_1943929.f_7;
	Var1.f_8 = Global_1943929.f_8;
	Var1.f_9 = Global_1943929.f_9;
	Var1.f_10 = Global_1943929.f_10;
	Var1.f_2 = Global_1943929.f_2;
	Var1.f_3 = Global_1943929.f_3;
	Var1.f_11 = iParam3;
	Var1.f_12 = uParam2;
	Var1.f_13 = iParam0;
	Var1.f_14 = __LIB_24__::func_838();
	Var1.f_16 = uParam1;
	Var1.f_17 = __LIB_0__::func_396(PLAYER::PLAYER_ID());
	Var1.f_22 = uParam7;
	Var1.f_23 = uParam8;
	Var1.f_25 = func_1845(1);
	Var1.f_26 = func_1845(0);
	if (__LIB_1__::func_145())
	{
		Var1.f_24 = __LIB_0__::func_847(BitTest(Global_1946250.f_4, 4));
	}
	else
	{
		Var1.f_24 = 0;
	}
	if (iVar2 != __LIB_0__::func_160() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
	{
		Var1.f_18 = iParam4;
		if (iParam3 != -1)
		{
			Var1.f_19 = __LIB_13__::func_747(iVar2, iParam3);
			Var1.f_20 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iParam4) / SYSTEM::TO_FLOAT(__LIB_21__::func_179(iParam3))) * 100f));
			Var1.f_21 = (100 - SYSTEM::ROUND(((SYSTEM::TO_FLOAT(__LIB_28__::func_417(iParam3, iVar2)) / SYSTEM::TO_FLOAT(__LIB_21__::func_179(iParam3))) * 100f)));
		}
		Var1.f_15 = __LIB_14__::func_49(iVar2);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_CONTRABAND_SELL"))
		{
			Var3 = { Var1 };
			Var3.f_27 = uParam5;
			STATS::PLAYSTATS_SELL_CONTRABAND_MISSION(&Var3);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_CONTRABAND_BUY") || MISC::ARE_STRINGS_EQUAL(sVar0, "fm_content_cargo"))
		{
			STATS::PLAYSTATS_BUY_CONTRABAND_MISSION(&Var1);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_CONTRABAND_DEFEND"))
		{
			if (iParam9 == 1)
			{
				Var4 = { Var1 };
				Var4.f_27 = uParam5;
				STATS::PLAYSTATS_DEFEND_CONTRABAND_MISSION(&Var4);
			}
			else
			{
				Var5 = { Var1 };
				Var5.f_27 = uParam5;
				Var5.f_28 = iParam6;
				STATS::PLAYSTATS_RECOVER_CONTRABAND_MISSION(&Var5);
			}
		}
	}
	__LIB_11__::func_74();
}

int func_2081()//Position - 0xBCD1A
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < 8)
	{
		iVar0 = (iVar0 + Local_183.f_124[iVar1]);
		iVar1++;
	}
	return iVar0;
}

int func_2082()//Position - 0xBCD45
{
	int iVar0;
	if (func_239() == 4)
	{
		if (Local_183.f_133 != 0)
		{
			iVar0 = func_73(-1);
			if (BitTest(Local_183.f_133, 0))
			{
				iVar0 = (iVar0 - Local_183.f_124[0]);
			}
			if (BitTest(Local_183.f_133, 1))
			{
				iVar0 = (iVar0 - Local_183.f_124[1]);
			}
			if (BitTest(Local_183.f_133, 2))
			{
				iVar0 = (iVar0 - Local_183.f_124[2]);
			}
			if (BitTest(Local_183.f_133, 3))
			{
				iVar0 = (iVar0 - Local_183.f_124[3]);
			}
			return iVar0;
		}
		return (func_73(-1) - Local_183.f_122);
	}
	return 0;
}

void func_2084()//Position - 0xBCDF0
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < func_493())
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_349());
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_837[iVar0 /*6*/]))
		{
			iVar1 = NETWORK::NET_TO_ENT(Local_183.f_837[iVar0 /*6*/]);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
				{
					if (__LIB_2__::func_63(Local_183.f_837[iVar0 /*6*/]))
					{
						ENTITY::SET_ENTITY_INVINCIBLE(iVar1, false);
						ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iVar1, true);
					}
					ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar1);
				}
			}
		}
		iVar0++;
	}
}

void func_2085()//Position - 0xBCE6D
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < func_246())
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_244(iVar0));
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_707[iVar0 /*8*/]))
		{
			iVar1 = NETWORK::NET_TO_ENT(Local_183.f_707[iVar0 /*8*/]);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
				{
					if (!__LIB_0__::func_680(Local_183.f_707[iVar0 /*8*/]))
					{
						ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_PED(Local_183.f_707[iVar0 /*8*/]), false);
						ENTITY::SET_ENTITY_CAN_BE_DAMAGED(NETWORK::NET_TO_PED(Local_183.f_707[iVar0 /*8*/]), true);
					}
					ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar1);
				}
			}
		}
		iVar0++;
	}
}

void func_2087()//Position - 0xBCF24
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < func_242())
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_240(iVar0));
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_80[iVar0]))
		{
			iVar1 = NETWORK::NET_TO_ENT(Local_183.f_80[iVar0]);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
				{
					if (__LIB_0__::func_121(NETWORK::NET_TO_PED(Local_183.f_80[iVar0])))
					{
						ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_PED(Local_183.f_80[iVar0]), false);
						ENTITY::SET_ENTITY_CAN_BE_DAMAGED(NETWORK::NET_TO_PED(Local_183.f_80[iVar0]), true);
					}
					ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar1);
				}
			}
		}
		iVar0++;
	}
}

void func_2088()//Position - 0xBCFBA
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < func_72())
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_450(iVar1, 0));
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_64[iVar1]))
		{
			iVar0 = NETWORK::NET_TO_VEH(Local_183.f_64[iVar1]);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_183.f_64[iVar1]) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
				{
					if (__LIB_3__::func_686(iVar0))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
						{
							ENTITY::SET_ENTITY_INVINCIBLE(iVar0, false);
							VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(iVar0, false);
							ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iVar0, true);
						}
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar0);
					}
				}
			}
		}
		iVar1++;
	}
}

void func_2089()//Position - 0xBD05E
{
	int iVar0;
	int iVar1;
	if (func_253())
	{
		if (Global_1577912 == 1)
		{
			Global_1577912 = 0;
			func_1355(0);
		}
	}
	iVar1 = 0;
	while (iVar1 < func_14())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_59[iVar1]))
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_462());
			iVar0 = NETWORK::NET_TO_VEH(Local_183.f_59[iVar1]);
			if (ENTITY::DOES_ENTITY_EXIST(func_67(iVar1)))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(func_67(iVar1)) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_183.f_59[iVar1]) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
				{
					if (__LIB_3__::func_686(func_67(iVar1)))
					{
						if (!ENTITY::IS_ENTITY_DEAD(func_67(iVar1), false))
						{
							if (!func_448() && !func_461())
							{
								__LIB_6__::func_762(func_13(iVar1), 1093140480, 1, 1056964608, 0, 1, 0);
							}
							__LIB_11__::func_72(func_13(iVar1));
						}
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar0);
					}
				}
			}
		}
		iVar1++;
	}
}

void func_2090()//Position - 0xBD149
{
	__LIB_36__::func_409(func_2091());
	__LIB_36__::func_409("SCONTRA_TXT_6" /* GXT: The delivery vehicle is ready for moving, boss. Get it safely to the drop location to make the sale. Just be careful, the buyer is jumpy so you'll need to make the drop-off within the time limit. */);
	__LIB_36__::func_409("SCONTRA_TXT_7" /* GXT: The delivery vehicle is ready for moving, boss. Get it safely to the drop location to make the sale. Just be careful, there are multiple drop-offs to make. */);
	__LIB_36__::func_409("SCONTRA_TXT_1" /* GXT: The delivery vehicle is ready for moving, boss. Get it safely to the drop location to make the sale. Just be careful out there as others may try and take your shipment out. */);
	__LIB_36__::func_409("BCONTRA_TXT_9" /* GXT: We're selling the Product. Guns at the ready - if anything happens to the shipment we lose big. */);
	__LIB_36__::func_409("SCONTRA_TXT_8" /* GXT: Law enforcement had eyes on that drop. Lose them before the buyer freaks. */);
	__LIB_36__::func_409("SCONTRA_TXT_10" /* GXT: The buyer has put up a bonus on this one. Deliver the Special Cargo in mint condition to receive the most cash. Drive carefully! */);
	__LIB_36__::func_409("BK_SELL_TXTM_1" /* GXT: We don't want the cops on our tail. Fly low for this one! Keep an eye on your radar. */);
	__LIB_36__::func_409("SCONTRA_TXT_12" /* GXT: The buyer is being extra cautious with this one. They haven't given us their exact location, but pinged a Trackify signal for you to follow. Happy hunting! */);
	__LIB_36__::func_409("SCONTRA_TXT_13" /* GXT: Some locals are all set up to give you a rough landing. You'll need to deal with them before we can make the sale. */);
	__LIB_36__::func_409("SCONTRA_TXT_14" /* GXT: Stay sharp, I'm seeing hostiles coming in fast. Defend the goods at all costs. */);
	__LIB_36__::func_409("SCONTRA_TXT_15" /* GXT: We have company, making straight for our... company! Take them out. */);
	__LIB_36__::func_409("SCONTRA_TXT_16" /* GXT: I've seen how these guys operate before. I suggest taking them out – shaking them won't be easy. */);
	__LIB_36__::func_409("SCONTRA_TXT_17" /* GXT: Turns out the last drop is over a restricted area. Get ready for heavy resistance - and expect law enforcement. */);
	__LIB_36__::func_409("SCONTRA_TXT_18" /* GXT: Someone leaked the location of the boat. You'll need to get rid of them, or grab the boat and get out of there. Your call. */);
	__LIB_36__::func_409("SCONTRA_TXT_19" /* GXT: Enemies inbound – hold them off until the sale is complete. */);
	__LIB_36__::func_409("SBIKERP_NWBY" /* GXT: Alright, take two. This one probably isn't a massive sting. Probably. */);
	__LIB_36__::func_409("SBIKERP_HIGH" /* GXT: Don't fly too high! Lower your altitude or the cops will be all over you! */);
	__LIB_36__::func_409("SCONTRA_TXT_21" /* GXT: Hello, as requested the goods have been moved to the specified delivery vehicle. */);
	__LIB_36__::func_409("BK_SELL_TXTM_2" /* GXT: By my calculations you should be stoned as a goddam kite by now. That stuff's bad for you, you know. */);
	__LIB_36__::func_409("SBIKERP_HLP3" /* GXT: Well they know you ain't a cop now! Lose them! */);
	__LIB_36__::func_409("BK_SELL_TXTM_3" /* GXT: I mean, if they catch you there's not exactly a lack of evidence. Lose 'em. Then lose 'em again to be sure. */);
	__LIB_36__::func_409("BK_SELL_TXTM_1" /* GXT: We don't want the cops on our tail. Fly low for this one! Keep an eye on your radar. */);
	__LIB_36__::func_409("BK_SELL_TXTM_0" /* GXT: Hah! They're not so dumb after all. Hold them off and get those wheels to the buyer. */);
	__LIB_36__::func_409("SBIKERS_TXTG1" /* GXT: Just when you think the cops have finally got the message. Lose them and lose the heat. I'll be in touch. */);
	__LIB_36__::func_409("BSELL_ALTRUIST" /* GXT: Just because you're giving these crazies a good deal, don't expect a warm welcome. Only get as close as you have to. */);
}

char* func_2091()//Position - 0xBD23A
{
	return "BCONTRA_TXT_9" /* GXT: We're selling the Product. Guns at the ready - if anything happens to the shipment we lose big. */;
}

void func_2092()//Position - 0xBD247
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar1 = 0;
	while (iVar1 < func_14())
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_183.f_193[iVar0 /*47*/].f_5[iVar1]) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_183.f_193[iVar0 /*47*/].f_5[iVar1]))
			{
				iVar2 = NETWORK::NET_TO_ENT(Local_183.f_193[iVar0 /*47*/].f_5[iVar1]);
				ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar2);
			}
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_183.f_193[iVar0 /*47*/][iVar1]) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_183.f_193[iVar0 /*47*/][iVar1]))
			{
				iVar2 = NETWORK::NET_TO_ENT(Local_183.f_193[iVar0 /*47*/][iVar1]);
				ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar2);
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_2093()//Position - 0xBD303
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < func_233())
	{
		func_1529(iVar0);
		iVar0++;
	}
}

void func_2094()//Position - 0xBD326
{
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_133.f_238))
	{
		GRAPHICS::REMOVE_PARTICLE_FX(Local_133.f_238, false);
	}
}

void func_2095()//Position - 0xBD342
{
	if (((((((((__LIB_2__::func_161(func_1215(-1), func_946()) || __LIB_2__::func_161("SBIKER_LAND" /* GXT: Land the plane at the drop-off to deliver the ~a~. */, func_946())) || __LIB_2__::func_161("BIKER_TOOLOW" /* GXT: Increase your altitude to drop off the ~a~. */, func_946())) || __LIB_0__::func_1("SCONTRA_RP_H1" /* GXT: Press ~INPUT_FRONTEND_RIGHT~ to repair the vehicle. */)) || __LIB_0__::func_1("SCONTRA_RP_H2" /* GXT: The vehicle has broken down. Go to the front of the vehicle to repair it. */)) || __LIB_0__::func_1("SCONTRA_HLP11" /* GXT: The cops can detect you at this height. Fly as low to the ground as possible. */)) || __LIB_0__::func_1("SCONTRA_HLP10" /* GXT: As the passenger, you have access to the missile lock-on jammer. Use this to temporarily protect the vehicle from homing missile lock-on. */)) || __LIB_0__::func_1("SCONTRA_HLP9" /* GXT: The missile lock-on jammer is available if you have a passenger. Your passenger can use this to temporarily prevent homing missile lock-on. */)) || __LIB_0__::func_1("SCONTRA_HLP12" /* GXT: Trackify allows you to locate a target in the world. Use the information it provides to track down the buyer. It can be launched from the bottom right of the phone app menu. */)) || __LIB_0__::func_1("SCONTRA_HLP8" /* GXT: Press ~INPUT_FRONTEND_RIGHT~ to drop Special Cargo when you are flying above a drop-off. */))
	{
		HUD::CLEAR_HELP(true);
	}
}

void func_2096(bool bParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9, int iParam10, bool bParam11)//Position - 0xBD3EE
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4[3];
	int iVar5[3];
	int iVar6;
	int iVar7;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (bParam9)
	{
		iVar0 = __LIB_1__::func_182(PLAYER::PLAYER_ID());
		Global_1944213.f_4 = __LIB_1__::func_834();
		Global_1944213.f_5 = __LIB_1__::func_833();
		if (__LIB_0__::func_740(PLAYER::PLAYER_ID()) || __LIB_2__::func_193(PLAYER::PLAYER_ID()))
		{
			Global_1944213.f_6 = 1;
		}
		else
		{
			Global_1944213.f_6 = 0;
		}
		Global_1944213.f_1 = __LIB_26__::func_823(bParam9);
		Global_1944213.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1944213.f_9 = __LIB_0__::func_847(bParam0);
		Global_1944213.f_10 = iParam1;
		Global_1944213.f_17 = Global_1944213.f_2;
		Global_1944213.f_18 = Global_1944213.f_2;
		Global_1944213.f_19 = __LIB_36__::func_995();
		Global_1944213.f_21 = (Global_1944213.f_8 - Global_1944213.f_7);
		if (__LIB_13__::func_258(PLAYER::PLAYER_ID(), 1))
		{
			Global_1944213.f_23 = __LIB_0__::func_847(__LIB_18__::func_447(1));
		}
		Global_1944213.f_24 = __LIB_13__::func_268(PLAYER::PLAYER_ID());
		Global_1944213.f_28 = __LIB_1__::func_186(PLAYER::PLAYER_ID());
		if (Global_1944213.f_24 > 2)
		{
			Global_1944213.f_24 = 2;
		}
		__LIB_20__::func_375(iVar0);
	}
	else if (bParam11)
	{
	}
	else
	{
		iVar0 = __LIB_0__::func_396(PLAYER::PLAYER_ID());
	}
	if ((__LIB_10__::func_929(iVar0) || iVar0 == 293) || iVar0 == 291)
	{
		Global_1943947.f_2 = __LIB_1__::func_834();
		Global_1943947.f_3 = __LIB_1__::func_833();
		Global_1943947.f_50 = iParam4;
		Global_1943947.f_51 = iParam5;
		Global_1943947.f_10 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1943947.f_20 = (Global_1943947.f_10 - Global_1943947.f_9);
		Global_1943947.f_12 = iParam1;
		Global_1943947.f_19 = __LIB_26__::func_347(iVar0, bParam0, __LIB_21__::func_93(bParam3));
		if (bParam0)
		{
			Global_1943947.f_11 = 1;
		}
		else
		{
			Global_1943947.f_11 = 0;
		}
		if ((__LIB_0__::func_286(PLAYER::PLAYER_ID()) || __LIB_9__::func_280(PLAYER::PLAYER_ID())) || __LIB_0__::func_431(PLAYER::PLAYER_ID()))
		{
			Global_1943947.f_8 = 1;
		}
		else
		{
			Global_1943947.f_8 = 0;
		}
		Global_1943947.f_54 = func_1845(1);
		Global_1943947.f_55 = func_1845(0);
		if (iParam2 != 0)
		{
			Global_1943947.f_43 = 0;
			Global_1943947.f_45 = __LIB_4__::func_814(__LIB_0__::func_582(), iParam2);
			Global_1943947.f_47 = iParam7;
			Global_1943947.f_46 = iParam6;
			Global_1943947.f_52 = __LIB_21__::func_351(__LIB_0__::func_582(), iParam2);
		}
		__LIB_20__::func_373(iVar0);
	}
	else if (__LIB_9__::func_286(iVar0))
	{
		Global_1944003.f_2 = __LIB_1__::func_834();
		Global_1944003.f_3 = __LIB_1__::func_833();
		Global_1944003.f_10 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1944003.f_19 = (Global_1944003.f_10 - Global_1944003.f_9);
		Global_1944003.f_12 = iParam1;
		if (bParam0)
		{
			Global_1944003.f_11 = 1;
		}
		else
		{
			Global_1944003.f_11 = 0;
		}
		if ((__LIB_0__::func_286(PLAYER::PLAYER_ID()) || __LIB_9__::func_280(PLAYER::PLAYER_ID())) || __LIB_0__::func_431(PLAYER::PLAYER_ID()))
		{
			Global_1944003.f_8 = 1;
		}
		else
		{
			Global_1944003.f_8 = 0;
		}
		__LIB_20__::func_372(iVar0);
	}
	else if (((__LIB_3__::func_524(iVar0) || iVar0 == 297) || iVar0 == 296) || iVar0 == 298)
	{
		Global_1944066.f_2 = __LIB_1__::func_834();
		Global_1944066.f_3 = __LIB_1__::func_833();
		Global_1944066.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1944066.f_18 = (Global_1944066.f_9 - Global_1944066.f_8);
		Global_1944066.f_11 = iParam1;
		Global_1944066.f_7 = __LIB_36__::func_995();
		Global_1944066.f_42 = __LIB_20__::func_355(__LIB_0__::func_5(), 5);
		iVar1 = PLAYER::PLAYER_ID();
		iVar2 = __LIB_1__::func_292(iVar1);
		if (__LIB_0__::func_582() != -1)
		{
			Global_1944066.f_17 = __LIB_0__::func_846(__LIB_0__::func_582());
		}
		else
		{
			Global_1944066.f_17 = __LIB_0__::func_846(PLAYER::PLAYER_ID());
		}
		Global_1944066.f_28 = iVar2;
		Global_1944066.f_29 = __LIB_0__::func_847((__LIB_9__::func_104(iVar1) || __LIB_9__::func_103(iVar1)));
		Global_1944066.f_30 = __LIB_0__::func_847(__LIB_3__::func_503(iVar1));
		Global_1944066.f_32 = __LIB_0__::func_847(__LIB_3__::func_457(iVar1));
		Global_1944066.f_33 = __LIB_0__::func_847(__LIB_1__::func_981(iVar1));
		Global_1944066.f_34 = __LIB_0__::func_847(__LIB_6__::func_75(iVar1));
		Global_1944066.f_35 = __LIB_0__::func_847(__LIB_3__::func_417(0, iVar1) == 1);
		Global_1944066.f_36 = __LIB_0__::func_847(__LIB_2__::func_709(iVar1));
		Global_1944066.f_37 = __LIB_0__::func_847(__LIB_0__::func_333(iVar1));
		Global_1944066.f_38 = __LIB_0__::func_847(__LIB_3__::func_416(iVar1));
		Global_1944066.f_39 = __LIB_0__::func_847(__LIB_19__::func_819(iVar1, iVar2, 0));
		Global_1944066.f_40 = __LIB_0__::func_847(__LIB_19__::func_819(iVar1, iVar2, 2));
		Global_1944066.f_41 = __LIB_0__::func_847(__LIB_19__::func_819(iVar1, iVar2, 1));
		if (__LIB_9__::func_305(iVar1))
		{
			Global_1944066.f_31 = 2;
		}
		else if (__LIB_9__::func_304(iVar1))
		{
			Global_1944066.f_31 = 1;
		}
		if (bParam0)
		{
			Global_1944066.f_10 = 1;
		}
		else
		{
			Global_1944066.f_10 = 0;
		}
		if ((__LIB_0__::func_286(PLAYER::PLAYER_ID()) || __LIB_9__::func_280(PLAYER::PLAYER_ID())) || __LIB_0__::func_431(PLAYER::PLAYER_ID()))
		{
			Global_1944066.f_6 = 1;
		}
		else
		{
			Global_1944066.f_6 = 0;
		}
		Global_1944066.f_21 = -2;
		Global_1944066.f_22 = -2;
		__LIB_20__::func_371(iVar0);
	}
	else if (__LIB_1__::func_204(iVar0))
	{
		Global_1944113.f_2 = __LIB_1__::func_834();
		Global_1944113.f_3 = __LIB_1__::func_833();
		if ((__LIB_0__::func_286(PLAYER::PLAYER_ID()) || __LIB_9__::func_280(PLAYER::PLAYER_ID())) || __LIB_0__::func_431(PLAYER::PLAYER_ID()))
		{
			Global_1944113.f_6 = 1;
		}
		else
		{
			Global_1944113.f_6 = 0;
		}
		Global_1944113.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1944113.f_10 = __LIB_0__::func_847(bParam0);
		Global_1944113.f_11 = iParam1;
		Global_1944113.f_17 = __LIB_13__::func_379(__LIB_1__::func_301());
		Global_1944113.f_18 = (Global_1944113.f_9 - Global_1944113.f_8);
		Global_1944113.f_20 = iParam8;
		Global_1944113.f_21 = -2;
		Global_1944113.f_22 = -2;
		Global_1944113.f_27 = __LIB_7__::func_38();
		Global_1944113.f_29 = __LIB_1__::func_556(6110, -1, 0);
		Global_1944113.f_30 = __LIB_1__::func_556(6106, -1, 0);
		Global_1944113.f_31 = __LIB_1__::func_556(6107, -1, 0);
		Global_1944113.f_32 = __LIB_1__::func_556(6109, -1, 0);
		Global_1944113.f_33 = __LIB_1__::func_556(6108, -1, 0);
		Global_1944113.f_34 = __LIB_1__::func_556(6111, -1, 0);
		Global_1944113.f_36 = __LIB_0__::func_847(__LIB_18__::func_447(1));
		Global_1944113.f_37 = __LIB_21__::func_142();
		__LIB_26__::func_345();
		__LIB_20__::func_370(iVar0);
	}
	else if (__LIB_0__::func_787(iVar0))
	{
		Global_1944167.f_2 = __LIB_1__::func_834();
		Global_1944167.f_3 = __LIB_1__::func_833();
		Global_1944167.f_1 = iParam10;
		if ((__LIB_0__::func_286(PLAYER::PLAYER_ID()) || __LIB_9__::func_280(PLAYER::PLAYER_ID())) || __LIB_0__::func_431(PLAYER::PLAYER_ID()))
		{
			Global_1944167.f_6 = 1;
		}
		else
		{
			Global_1944167.f_6 = 0;
		}
		Global_1944167.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1944167.f_10 = __LIB_0__::func_847(bParam0);
		Global_1944167.f_11 = iParam1;
		Global_1944167.f_18 = (Global_1944167.f_9 - Global_1944167.f_8);
		Global_1944167.f_20 = iParam8;
		Global_1944167.f_23 = Global_786547;
		Global_1944167.f_36 = Global_786547.f_1;
		Global_1944167.f_24 = __LIB_1__::func_556(6160, -1, 0);
		Global_1944167.f_25 = __LIB_1__::func_556(6165, -1, 0);
		Global_1944167.f_26 = __LIB_1__::func_556(6166, -1, 0);
		Global_1944167.f_27 = __LIB_0__::func_847((((__LIB_2__::func_272() || __LIB_20__::func_344()) || __LIB_20__::func_343()) || __LIB_1__::func_233(PLAYER::PLAYER_ID())));
		Global_1944167.f_28 = __LIB_1__::func_556(6167, -1, 0);
		Global_1944167.f_29 = __LIB_0__::func_847(__LIB_8__::func_448());
		Global_1944167.f_35 = -1;
		Global_1944167.f_38 = -1;
		Global_1944167.f_39 = Global_1944167.f_4;
		Global_1944167.f_40 = Global_1944167.f_5;
		Global_1944167.f_41 = __LIB_1__::func_834();
		Global_1944167.f_42 = __LIB_0__::func_847(__LIB_18__::func_447(1));
		Global_1944167.f_44 = Global_1944167.f_18;
		__LIB_20__::func_369(iVar0);
	}
	else if (__LIB_26__::func_810(iVar0))
	{
		if (Global_1944303.f_2 == -1)
		{
			Global_1944303.f_2 = __LIB_1__::func_834();
		}
		if (Global_1944303.f_3 == -1)
		{
			Global_1944303.f_3 = __LIB_1__::func_833();
		}
		if ((__LIB_0__::func_286(PLAYER::PLAYER_ID()) || __LIB_9__::func_280(PLAYER::PLAYER_ID())) || __LIB_0__::func_431(PLAYER::PLAYER_ID()))
		{
			Global_1944303.f_6 = 1;
		}
		else
		{
			Global_1944303.f_6 = 0;
		}
		Global_1944303.f_1 = __LIB_26__::func_823(0);
		Global_1944303.f_7 = __LIB_36__::func_995();
		Global_1944303.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1944303.f_10 = __LIB_0__::func_847(bParam0);
		Global_1944303.f_11 = iParam1;
		if (__LIB_0__::func_582() != -1)
		{
			Global_1944303.f_17 = __LIB_0__::func_846(__LIB_0__::func_582());
		}
		Global_1944303.f_18 = (Global_1944303.f_9 - Global_1944303.f_8);
		Global_1944303.f_19 = Global_2815059.f_6745;
		Global_1944303.f_28 = __LIB_1__::func_186(PLAYER::PLAYER_ID());
		Global_1944303.f_29 = __LIB_0__::func_847(__LIB_9__::func_303(PLAYER::PLAYER_ID()));
		Global_1944303.f_30 = __LIB_0__::func_847(__LIB_3__::func_114(PLAYER::PLAYER_ID()));
		Global_1944303.f_31 = __LIB_3__::func_61(PLAYER::PLAYER_ID());
		if (__LIB_13__::func_258(PLAYER::PLAYER_ID(), 1))
		{
			Global_1944303.f_33 = __LIB_0__::func_847(__LIB_18__::func_447(1));
		}
		if (Global_1944303.f_34 > 2)
		{
			Global_1944303.f_34 = 2;
		}
		Global_1944303.f_41 = __LIB_10__::func_911(iVar0);
		__LIB_20__::func_368(iVar0);
	}
	else if (__LIB_10__::func_909(iVar0))
	{
		Global_1944249.f_2 = __LIB_1__::func_834();
		Global_1944249.f_3 = __LIB_1__::func_833();
		if ((__LIB_0__::func_286(PLAYER::PLAYER_ID()) || __LIB_9__::func_280(PLAYER::PLAYER_ID())) || __LIB_0__::func_431(PLAYER::PLAYER_ID()))
		{
			Global_1944249.f_6 = 1;
		}
		else
		{
			Global_1944249.f_6 = 0;
		}
		Global_1944249.f_1 = __LIB_26__::func_823(0);
		Global_1944249.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1944249.f_10 = __LIB_0__::func_847(bParam0);
		Global_1944249.f_11 = iParam1;
		Global_1944249.f_18 = (Global_1944249.f_9 - Global_1944249.f_8);
		Global_1944249.f_28 = __LIB_1__::func_186(PLAYER::PLAYER_ID());
		if (Global_1944249.f_28)
		{
			Global_1944249.f_29 = __LIB_26__::func_792(PLAYER::PLAYER_ID());
		}
		else
		{
			Global_1944249.f_29 = 0;
		}
		Global_1944249.f_30 = __LIB_26__::func_34(PLAYER::PLAYER_ID(), 4, -1);
		Global_1944249.f_31 = __LIB_3__::func_61(PLAYER::PLAYER_ID());
		Global_1944249.f_32 = __LIB_0__::func_847(__LIB_3__::func_136(PLAYER::PLAYER_ID()));
		Global_1944249.f_33 = __LIB_0__::func_847(__LIB_3__::func_135(PLAYER::PLAYER_ID()));
		Global_1944249.f_34 = __LIB_0__::func_847(__LIB_3__::func_134(PLAYER::PLAYER_ID()));
		Global_1944249.f_35 = __LIB_0__::func_847(__LIB_3__::func_133(PLAYER::PLAYER_ID()));
		Global_1944249.f_36 = __LIB_9__::func_300(PLAYER::PLAYER_ID());
		Global_1944249.f_37 = __LIB_4__::func_447(PLAYER::PLAYER_ID());
		Global_1944249.f_39 = __LIB_9__::func_299(PLAYER::PLAYER_ID());
		if (__LIB_13__::func_258(PLAYER::PLAYER_ID(), 1))
		{
			Global_1944249.f_41 = __LIB_0__::func_847(__LIB_18__::func_447(1));
		}
		if (Global_1944249.f_42 > 2)
		{
			Global_1944249.f_42 = 2;
		}
		__LIB_20__::func_367(iVar0);
	}
	else if (__LIB_9__::func_415(iVar0))
	{
		Global_1944390.f_2 = __LIB_1__::func_834();
		Global_1944390.f_3 = __LIB_1__::func_833();
		Global_1944390.f_4 = __LIB_1__::func_835(__LIB_0__::func_582());
		Global_1944390.f_5 = __LIB_3__::func_639(__LIB_0__::func_582());
		if ((__LIB_0__::func_286(PLAYER::PLAYER_ID()) || __LIB_9__::func_280(PLAYER::PLAYER_ID())) || __LIB_0__::func_431(PLAYER::PLAYER_ID()))
		{
			Global_1944390.f_6 = 1;
		}
		else
		{
			Global_1944390.f_6 = 0;
		}
		Global_1944390.f_7 = __LIB_36__::func_995();
		Global_1944390.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1944390.f_10 = __LIB_0__::func_847(bParam0);
		Global_1944390.f_11 = iParam1;
		if (__LIB_1__::func_301() != -1)
		{
			Global_1944390.f_17 = __LIB_0__::func_846(__LIB_1__::func_301());
		}
		Global_1944390.f_18 = (Global_1944390.f_9 - Global_1944390.f_8);
		Global_1944390.f_21 = 1;
		Global_1944390.f_22 = 1;
		Global_1944390.f_25 = __LIB_7__::func_113(PLAYER::PLAYER_ID());
		Global_1944390.f_27 = __LIB_0__::func_847(__LIB_0__::func_834(PLAYER::PLAYER_ID()));
		Global_1944390.f_28 = __LIB_8__::func_48(21, -1);
		Global_1944390.f_29 = __LIB_0__::func_847(__LIB_1__::func_635(PLAYER::PLAYER_ID()));
		__LIB_16__::func_548(iVar0);
	}
	else if (__LIB_2__::func_965(iVar0))
	{
		if (__LIB_0__::func_582() != -1)
		{
			Global_1944465.f_6 = __LIB_1__::func_835(__LIB_0__::func_582());
			Global_1944465.f_7 = __LIB_3__::func_639(__LIB_0__::func_582());
		}
		if (__LIB_13__::func_258(PLAYER::PLAYER_ID(), 1))
		{
			Global_1944465.f_8 = __LIB_0__::func_847(__LIB_18__::func_447(1));
		}
		Global_1944465.f_10 = __LIB_36__::func_995();
		Global_1944465.f_11 = 1;
		Global_1944465.f_13 = (NETWORK::GET_CLOUD_TIME_AS_INT() - Global_1973074);
		Global_1944465.f_14 = iParam1;
		Global_1944465.f_19 = 1;
		Global_1944465.f_20 = 1;
		__LIB_20__::func_366(iVar0);
	}
	else if (__LIB_9__::func_29(iVar0))
	{
		Global_1944552.f_2 = __LIB_1__::func_834();
		if (__LIB_0__::func_582() != -1)
		{
			Global_1944552.f_6 = __LIB_1__::func_835(__LIB_0__::func_582());
			Global_1944552.f_7 = __LIB_3__::func_639(__LIB_0__::func_582());
		}
		Global_1944552.f_8 = __LIB_0__::func_847(__LIB_18__::func_447(1));
		Global_1944552.f_10 = __LIB_36__::func_995();
		Global_1944552.f_11 = 1;
		Global_1944552.f_14 = iParam1;
		__LIB_20__::func_365(iVar0);
	}
	else if (__LIB_9__::func_298(iVar0))
	{
		Global_1944664.f_2 = __LIB_1__::func_834();
		Global_1944664.f_9 = 1;
		Global_1944664.f_10 = bParam0;
		Global_1944664.f_11 = iParam1;
		__LIB_20__::func_364(iVar0);
	}
	else if (__LIB_2__::func_473(iVar0) || __LIB_10__::func_894(iVar0))
	{
		if (__LIB_0__::func_582() != -1)
		{
			Global_1944685.f_5 = __LIB_1__::func_835(__LIB_0__::func_582());
			Global_1944685.f_6 = __LIB_3__::func_639(__LIB_0__::func_582());
		}
		Global_1944685.f_7 = __LIB_0__::func_847(__LIB_18__::func_447(1));
		Global_1944685.f_9 = __LIB_36__::func_995();
		Global_1944685.f_10 = 1;
		Global_1944685.f_13 = iParam1;
		Global_1944685.f_33 = bParam0;
		Global_1944685.f_32 = iVar0;
		__LIB_20__::func_363(iVar0);
	}
	else if (__LIB_10__::func_893(iVar0) || __LIB_10__::func_892(iVar0))
	{
		iVar3 = __LIB_0__::func_582();
		if (iVar3 != -1)
		{
			Global_1944754.f_7 = __LIB_1__::func_835(iVar3);
			Global_1944754.f_8 = __LIB_3__::func_639(iVar3);
		}
		Global_1944754.f_9 = __LIB_0__::func_847(__LIB_18__::func_447(1));
		Global_1944754.f_11 = __LIB_36__::func_995();
		Global_1944754.f_12 = 1;
		Global_1944754.f_15 = bParam0;
		Global_1944754.f_3 = __LIB_1__::func_834();
		if (__LIB_13__::func_258(PLAYER::PLAYER_ID(), 1))
		{
			Global_1944754.f_9 = __LIB_0__::func_847(__LIB_18__::func_447(1));
		}
		else
		{
			Global_1944754.f_9 = -1;
		}
		if (__LIB_10__::func_893(iVar0))
		{
			Global_1944754.f_4 = __LIB_10__::func_903(__LIB_21__::func_92(PLAYER::PLAYER_ID()));
		}
		else
		{
			Global_1944754.f_4 = __LIB_10__::func_902(__LIB_21__::func_126(PLAYER::PLAYER_ID()));
		}
		Global_1944754.f_1 = iVar0;
		Global_1944754.f_16 = iParam1;
		iVar7 = PLAYER::PLAYER_ID();
		if (iVar3 != -1)
		{
			iVar7 = iVar3;
		}
		iVar6 = 0;
		while (iVar6 < 3)
		{
			iVar4[iVar6] = __LIB_10__::func_901(__LIB_9__::func_626(iVar7, iVar6));
			iVar5[iVar6] = __LIB_10__::func_900(__LIB_9__::func_627(iVar7, iVar6));
			iVar6++;
		}
		__LIB_20__::func_362(iVar0, &iVar4, &iVar5);
	}
	else
	{
		Global_1943929.f_6 = NETWORK::GET_CLOUD_TIME_AS_INT();
		if (bParam0)
		{
			Global_1943929.f_7 = 1;
		}
		else
		{
			Global_1943929.f_7 = 0;
		}
		Global_1943929.f_8 = iParam1;
		if (Global_1943929.f_4 == 0)
		{
			if ((__LIB_0__::func_286(PLAYER::PLAYER_ID()) || __LIB_9__::func_280(PLAYER::PLAYER_ID())) || __LIB_0__::func_431(PLAYER::PLAYER_ID()))
			{
				Global_1943929.f_4 = 1;
			}
		}
	}
}

void func_2170(bool bParam0, bool bParam1)//Position - 0xC2FCE
{
	bool bVar0;
	var uVar1;
	if (!func_1909(0))
	{
		uVar1 = func_2171(func_239(), bParam0, bVar0, bParam1);
		if (func_1909(4))
		{
			func_2096(bParam0, uVar1, Local_183.f_0, 0, -1, -1, -1, -1, -1, 0, -1, 0);
		}
		func_1881(0);
	}
}

int func_2171(int iParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0xC3010
{
	if (bParam3)
	{
		return 5;
	}
	switch (iParam0)
	{
		case 2:
			return 8;
		case 3:
			return 6;
		case 4:
			return 2;
		case 1:
		case 7:
			if (bParam1)
			{
				return 1;
			}
			else if (bParam2)
			{
				return 7;
			}
			else
			{
				return 2;
			}
			break;
	}
	return 4;
}

int func_2172(struct<21> Param0)//Position - 0xC3073
{
	int iVar0;
	__LIB_24__::func_800(&(Local_183.f_154));
	__LIB_0__::func_673(__LIB_6__::func_875(Param0.f_0), Param0);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Local_183.f_889[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		Local_183.f_101[iVar0] = -1;
		iVar0++;
	}
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(__LIB_41__::func_246(190, -1, -1, -1, -1, -1));
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(__LIB_35__::func_935(190, -1, -1, -1));
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(__LIB_41__::func_243(190, -1, 1, -1, -1, -1));
	__LIB_1__::func_569(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_183, 984, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_184, 233, 0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	Local_133.f_195 = { __LIB_10__::func_933() };
	func_2173(0, 0, 0);
	return 1;
}

void func_2173(int iParam0, int iParam1, bool bParam2)//Position - 0xC312C
{
	__LIB_10__::func_977();
	if (__LIB_8__::func_546(PLAYER::PLAYER_ID()))
	{
		__LIB_32__::func_920(1);
	}
	if ((iParam0 != 0 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1)) && func_2176(iParam1, 1))
	{
		switch (iParam0)
		{
			case 157:
				MISC::SET_BIT(&Global_1943915, 0);
				break;
			}
	}
	if (!__LIB_1__::func_145() && !__LIB_13__::func_258(PLAYER::PLAYER_ID(), 1))
	{
		if (__LIB_7__::func_186())
		{
			__LIB_9__::func_40(3);
		}
	}
	__LIB_9__::func_40(4);
	if (__LIB_19__::func_760(0))
	{
		Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_57 = __LIB_0__::func_582();
	}
	if ((__LIB_10__::func_929(iParam0) || iParam0 == 293) || iParam0 == 291)
	{
		__LIB_10__::func_916();
		Global_1943947.f_18 = __LIB_13__::func_379(__LIB_1__::func_301());
	}
	else if (__LIB_9__::func_286(__LIB_7__::func_304(PLAYER::PLAYER_ID())))
	{
		__LIB_10__::func_915();
		Global_1944003.f_18 = __LIB_13__::func_379(__LIB_1__::func_301());
	}
	if (bParam2)
	{
		if (!__LIB_25__::func_938())
		{
			__LIB_6__::func_990(1);
		}
	}
	__LIB_10__::func_969();
}

int func_2176(int iParam0, bool bParam1)//Position - 0xC3283
{
	return func_615(PLAYER::PLAYER_ID(), iParam0, bParam1);
}

