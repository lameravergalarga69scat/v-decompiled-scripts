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
	var uLocal_68 = -1;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	float fLocal_76 = 0f;
	float fLocal_77 = 0f;
	float fLocal_78 = 0f;
	float fLocal_79 = 0f;
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
	int iLocal_106 = 0;
	var uLocal_107 = 0;
	float fLocal_108 = 0f;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	int iLocal_114 = 0;
	bool bLocal_115 = 0;
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
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	bool bLocal_130 = 0;
	int iLocal_131 = 0;
	var uLocal_132 = 0;
	struct<936> Local_133 = { 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 1048576000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1048576000, 0, -1, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, -1, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 2, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 10000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1082130432, 1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<3> Local_134 = { 0, 0, 50 } ;
	var uLocal_135 = -1;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = -1;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = -1;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = -1;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = -1;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = -1;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = -1;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = -1;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = -1;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = -1;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = -1;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = -1;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = -1;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = -1;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = -1;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = -1;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = -1;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = -1;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = -1;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = -1;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = -1;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = -1;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = -1;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = -1;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = -1;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = -1;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = -1;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = -1;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = -1;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = -1;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = -1;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = -1;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = -1;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = -1;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = -1;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = -1;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = -1;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = -1;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = -1;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = -1;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = -1;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = -1;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = -1;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = -1;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = -1;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = -1;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = -1;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = -1;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = -1;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = -1;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 2;
	var uLocal_286 = 0;
	var uLocal_287 = 32;
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
	struct<700> Local_320 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, -99, 0, -99, 0, -99, 0, -99, 0, -99, 0, -99, 0, -99, 0, -99, 0, -99, 0, -99, 0, -99, 0, -99, 0, -99, 0, -99, 0, -99, 0, -99, 0, -99, 0, -99, 0, -99, 0, -99, 0, -99, 0, -99, 0, -99, 0, -99, 0, -99, 0, -99, 0, -99, 0, -99, 0, -99, 0, -99, 0, -99, 0, -99, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 1048576000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1048576000, 0, -1, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, -1, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 1048576000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1048576000, 0, -1, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, -1, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	int* iLocal_324 = NULL;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 3;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	struct<3> Local_332 = { 0, 0, 0 } ;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
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
	fLocal_76 = 3f;
	fLocal_77 = 0f;
	fLocal_78 = 2f;
	fLocal_79 = 100f;
	iLocal_106 = -1;
	fLocal_108 = 0.5f;
	iLocal_131 = 1;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_6354(&ScriptParam_332);
	}
	else
	{
		func_6330();
	}
	while (true)
	{
		__LIB_0__::func_933();
		if (__LIB_0__::func_959())
		{
			func_6330();
		}
		if (func_6319(ScriptParam_332.f_2, ScriptParam_332.f_0))
		{
			func_6330();
		}
		if (NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT() != -1)
		{
			Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_352 = NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT());
		}
		if (func_6318(1))
		{
			func_3();
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_1();
		}
	}
}

void func_1()//Position - 0x117
{
	if (func_6318(0))
	{
		__LIB_36__::func_120(1);
	}
	else if (func_6318(1))
	{
	}
}

void func_3()//Position - 0x144
{
	__LIB_9__::func_868();
	func_6066(&(Local_133.f_447), 1);
	func_6047(&(Local_134.f_1), &(Local_134.f_2), &(Local_133.f_832));
	if (!__LIB_7__::func_780())
	{
		func_4923(5, &(Local_133.f_444), Local_133.f_1 + 32, 1, 0);
	}
	func_4922();
	if (func_4921(0))
	{
		func_636();
	}
	else if (func_4921(1))
	{
		if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
		}
		else
		{
			if (!BitTest(Local_133.f_0, 2))
			{
				if (!__LIB_3__::func_171(PLAYER::PLAYER_ID()) && __LIB_5__::func_203(PLAYER::PLAYER_ID()))
				{
					if (CAM::IS_SCREEN_FADED_IN())
					{
						HUD::CLEAR_HELP(true);
						MISC::SET_BIT(&Local_133, 2);
					}
				}
			}
			__LIB_9__::func_132();
			func_632();
			func_308();
			func_136();
			func_126();
			func_115();
			func_106();
			func_4(&(Local_133.f_901));
		}
	}
}

void func_4(int* iParam0)//Position - 0x205
{
	int iVar0;
	if (!__LIB_1__::func_687(PLAYER::PLAYER_ID()))
	{
		return;
	}
	iVar0 = 28;
	if (__LIB_9__::func_20(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = 30;
	}
	func_5(iParam0, iVar0, 1);
}

void func_5(int* iParam0, int iParam1, bool bParam2)//Position - 0x238
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = 9899;
	if (bParam2)
	{
		iVar0 = 9902;
	}
	iVar1 = 9898;
	if (bParam2)
	{
		iVar1 = 9901;
	}
	iVar2 = 9897;
	if (bParam2)
	{
		iVar2 = 9900;
	}
	if (__LIB_9__::func_19(bParam2))
	{
		__LIB_1__::func_354(iVar2, 0, -1, 1, 0);
	}
	if (__LIB_1__::func_360(iVar2, -1, 0) >= 10)
	{
		return;
	}
	func_100(iParam0);
	if (func_86(iParam0))
	{
		iParam0->f_1++;
		if (iParam0->f_1 >= Global_262145.f_31656 /* Tunable: TUNER_CARCLUB_TIME_XP_MINUTES */)
		{
			iParam0->f_1 = 0;
			iVar3 = __LIB_1__::func_360(iVar2, -1, 0);
			if (iVar3 < 10)
			{
				__LIB_1__::func_354(iVar2, iVar3 + 1, -1, 1, 0);
			}
			__LIB_1__::func_354(iVar1, CLOCK::GET_CLOCK_DAY_OF_WEEK(), -1, 1, 0);
			__LIB_1__::func_354(iVar0, NETWORK::GET_CLOUD_TIME_AS_INT(), -1, 1, 0);
			func_6(iParam1, -1, -1, -1, 1065353216);
		}
	}
}

void func_6(int iParam0, int iParam1, int iParam2, int iParam3, float fParam4)//Position - 0x302
{
	int iVar0;
	if (!__LIB_9__::func_18(iParam0))
	{
		return;
	}
	iVar0 = __LIB_9__::func_17(iParam0, iParam1, iParam2);
	if (iVar0 == -1)
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			if (!__LIB_0__::func_137(32249, -1))
			{
				__LIB_0__::func_186(32249, 1, -1);
				func_7(iVar0, iParam0, iParam3, 1065353216);
			}
			break;
		case 1:
			if (!__LIB_0__::func_137(32250, -1))
			{
				__LIB_0__::func_186(32250, 1, -1);
				func_7(iVar0, iParam0, iParam3, 1065353216);
			}
			break;
		case 2:
			if (!__LIB_0__::func_137(32251, -1))
			{
				__LIB_0__::func_186(32251, 1, -1);
				func_7(iVar0, iParam0, iParam3, 1065353216);
			}
			break;
		case 3:
			if (!__LIB_0__::func_137(32252, -1))
			{
				__LIB_0__::func_186(32252, 1, -1);
				func_7(iVar0, iParam0, iParam3, 1065353216);
			}
			break;
		case 4:
			if (!__LIB_0__::func_137(32253, -1))
			{
				__LIB_0__::func_186(32253, 1, -1);
				func_7(iVar0, iParam0, iParam3, 1065353216);
			}
			break;
		case 5:
			if (!__LIB_0__::func_137(32254, -1))
			{
				__LIB_0__::func_186(32254, 1, -1);
				func_7(iVar0, iParam0, iParam3, 1065353216);
			}
			break;
		case 6:
			if (!__LIB_0__::func_137(32255, -1))
			{
				__LIB_0__::func_186(32255, 1, -1);
				func_7(iVar0, iParam0, iParam3, 1065353216);
			}
			break;
		case 7:
			if (!__LIB_0__::func_137(32256, -1))
			{
				__LIB_0__::func_186(32256, 1, -1);
				func_7(iVar0, iParam0, iParam3, 1065353216);
			}
			break;
		case 8:
			if (!__LIB_0__::func_137(32257, -1))
			{
				__LIB_0__::func_186(32257, 1, -1);
				func_7(iVar0, iParam0, iParam3, 1065353216);
			}
			break;
		case 9:
			if (!__LIB_0__::func_137(32258, -1))
			{
				__LIB_0__::func_186(32258, 1, -1);
				func_7(iVar0, iParam0, iParam3, 1065353216);
			}
			break;
		case 10:
			if (__LIB_0__::func_137(32249, -1))
			{
				if (!__LIB_0__::func_137(32259, -1))
				{
					__LIB_0__::func_186(32259, 1, -1);
					func_7(iVar0, iParam0, iParam3, 1065353216);
				}
			}
			break;
		case 11:
			if (__LIB_0__::func_137(32250, -1))
			{
				if (!__LIB_0__::func_137(32260, -1))
				{
					__LIB_0__::func_186(32260, 1, -1);
					func_7(iVar0, iParam0, iParam3, 1065353216);
				}
			}
			break;
		case 12:
			if (__LIB_0__::func_137(32251, -1))
			{
				if (!__LIB_0__::func_137(32261, -1))
				{
					__LIB_0__::func_186(32261, 1, -1);
					func_7(iVar0, iParam0, iParam3, 1065353216);
				}
			}
			break;
		case 13:
			if (__LIB_0__::func_137(32252, -1))
			{
				if (!__LIB_0__::func_137(32262, -1))
				{
					__LIB_0__::func_186(32262, 1, -1);
					func_7(iVar0, iParam0, iParam3, 1065353216);
				}
			}
			break;
		case 14:
			if (__LIB_0__::func_137(32253, -1))
			{
				if (!__LIB_0__::func_137(32263, -1))
				{
					__LIB_0__::func_186(32263, 1, -1);
					func_7(iVar0, iParam0, iParam3, 1065353216);
				}
			}
			break;
		case 15:
			if (!__LIB_0__::func_137(32264, -1))
			{
				__LIB_0__::func_186(32264, 1, -1);
				func_7(iVar0, iParam0, iParam3, 1065353216);
			}
			break;
		case 16:
			if (__LIB_0__::func_137(32254, -1))
			{
				if (!__LIB_0__::func_137(32265, -1))
				{
					__LIB_0__::func_186(32265, 1, -1);
					func_7(iVar0, iParam0, iParam3, 1065353216);
				}
			}
			break;
		case 17:
			if (__LIB_0__::func_137(32255, -1))
			{
				if (!__LIB_0__::func_137(32266, -1))
				{
					__LIB_0__::func_186(32266, 1, -1);
					func_7(iVar0, iParam0, iParam3, 1065353216);
				}
			}
			break;
		case 18:
			if (__LIB_0__::func_137(32256, -1))
			{
				if (!__LIB_0__::func_137(32267, -1))
				{
					__LIB_0__::func_186(32267, 1, -1);
					func_7(iVar0, iParam0, iParam3, 1065353216);
				}
			}
			break;
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
			func_7(iVar0, iParam0, iParam3, fParam4);
			break;
		case 24:
		case 25:
		case 26:
			func_7(iVar0, iParam0, iParam3, 1065353216);
			break;
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
			func_7(iVar0, iParam0, iParam3, 1065353216);
			break;
		case 32:
		case 33:
		case 34:
		case 35:
			func_7(iVar0, iParam0, iParam3, 1065353216);
			break;
	}
}

void func_7(int iParam0, int iParam1, var uParam2, float fParam3)//Position - 0x78D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	if ((((iParam0 <= 0 || PLAYER::PLAYER_ID() == __LIB_0__::getMinusOneOrNull()) || Global_262145.f_31078 /* Tunable: -1782032913 */) || __LIB_9__::func_128() >= __LIB_13__::func_688()) || !__LIB_1__::func_687(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (fParam3 != 1f)
	{
		iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iParam0) * fParam3));
	}
	iVar0 = __LIB_9__::func_128();
	iVar1 = __LIB_9__::func_127(iVar0);
	iVar2 = (iVar0 + iParam0);
	iVar3 = __LIB_13__::func_688();
	if (iVar2 > iVar3)
	{
		iVar2 = iVar3;
	}
	bVar4 = false;
	iVar5 = __LIB_9__::func_127(iVar2);
	if (iVar5 > iVar1)
	{
		bVar4 = true;
	}
	__LIB_1__::func_354(9834, iVar2, -1, 1, 0);
	Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_476.f_1 = iVar2;
	Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_476.f_2 = iVar5;
	__LIB_14__::func_456(iParam0, iVar5, bVar4, iParam1, uParam2);
	__LIB_1__::func_875(107, iVar5, -1);
	if (bVar4)
	{
		func_8(iVar1, iVar5);
	}
}

void func_8(int iParam0, int iParam1)//Position - 0x884
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = iParam0 + 1;
	while (iVar0 <= iParam1)
	{
		__LIB_9__::func_14(&iVar1, &iVar2, iVar0);
		if (__LIB_13__::func_687(iVar1))
		{
			__LIB_31__::func_69(iVar1);
			__LIB_31__::func_86(iVar1, 1);
			__LIB_9__::func_6(iVar1);
		}
		if (__LIB_13__::func_687(iVar2))
		{
			__LIB_31__::func_69(iVar2);
			__LIB_31__::func_86(iVar2, 1);
			__LIB_9__::func_6(iVar2);
		}
		func_21(iVar0);
		__LIB_8__::func_978("CCR_INC_TCK" /* GXT: LS Car Meet reputation increased: Level ~1~. */, iVar0, 1);
		iVar0++;
	}
	__LIB_9__::func_255();
}

void func_21(int iParam0)//Position - 0xC67
{
	int iVar0;
	var uVar1;
	iVar0 = __LIB_9__::func_5(iParam0);
	if (iVar0 != -1)
	{
		if (__LIB_0__::func_112())
		{
			__LIB_10__::func_546(joaat("SERVICE_EARN_TUNER_CAR_CLUB_MEMBERSHIP"), iVar0, &uVar1, 0, 0, 0);
		}
		else
		{
			MONEY::NETWORK_EARN_CARCLUB_MEMBERSHIP(iVar0);
		}
	}
}

int func_86(int* iParam0)//Position - 0xD1A6
{
	iParam0->f_5.f_2 = func_90();
	iParam0->f_5 = __LIB_0__::func_198(iParam0->f_5.f_2);
	if (iParam0->f_2 != iParam0->f_5)
	{
		iParam0->f_5.f_1 = __LIB_0__::func_615(iParam0->f_5.f_2);
		if (iParam0->f_5.f_1 >= iParam0->f_2.f_1)
		{
			__LIB_0__::func_143(&(iParam0->f_2.f_2), iParam0->f_5);
			iParam0->f_2 = iParam0->f_5;
			return 1;
		}
	}
	return 0;
}

var func_90()//Position - 0xD26C
{
	var uVar0;
	struct<6> Var1;
	CLOCK::GET_POSIX_TIME(&Var1, &(Var1.f_1), &(Var1.f_2), &(Var1.f_3), &(Var1.f_4), &(Var1.f_5));
	__LIB_0__::func_144(&uVar0, Var1.f_5);
	__LIB_0__::func_143(&uVar0, Var1.f_4);
	__LIB_0__::func_142(&uVar0, Var1.f_3);
	__LIB_0__::func_368(&uVar0, Var1.f_2);
	__LIB_0__::func_141(&uVar0, (Var1.f_1 - 1));
	__LIB_0__::func_140(&uVar0, Var1.f_0);
	return uVar0;
}

void func_100(int* iParam0)//Position - 0xD534
{
	if (!BitTest(*iParam0, 0))
	{
		MISC::SET_BIT(iParam0, 0);
		iParam0->f_2.f_2 = func_90();
		iParam0->f_2 = __LIB_0__::func_198(iParam0->f_2.f_2);
		iParam0->f_2.f_1 = __LIB_0__::func_615(iParam0->f_2.f_2);
	}
}

void func_106()//Position - 0xD70E
{
	if (!__LIB_1__::func_936(PLAYER::PLAYER_ID()))
	{
		if (__LIB_1__::func_708(PLAYER::PLAYER_ID()) || __LIB_12__::func_207(PLAYER::PLAYER_ID()))
		{
			__LIB_7__::func_373(&(Local_133.f_900), -2140.46f, 1106.02f, 24.6f, 777, "TDR_BLIP" /* GXT: Exit Test Track */, 1065353216, 0, 0);
		}
	}
	else
	{
		func_107();
	}
}

void func_107()//Position - 0xD768
{
	__LIB_0__::func_714(&(Local_133.f_900));
}

void func_115()//Position - 0xD908
{
	int iVar0;
	if (CAM::IS_SCREEN_FADED_IN() && BitTest(Local_133.f_0, 2))
	{
		if (__LIB_1__::func_708(PLAYER::PLAYER_ID()) && !__LIB_12__::func_207(PLAYER::PLAYER_ID()))
		{
			if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				iVar0 = __LIB_0__::func_253(31560, -1);
				if (iVar0 < 3)
				{
					if (!BitTest(Global_1946250.f_8, 4))
					{
						__LIB_0__::func_151("SANDBOX_HELP_1" /* GXT: This Test Track can be used for testing Personal Vehicles and cars promoted by the LS Car Meet. */, -1);
						MISC::SET_BIT(&(Global_1946250.f_8), 4);
					}
					if (!BitTest(Global_1946250.f_8, 5) && !__LIB_0__::func_1("SANDBOX_HELP_1" /* GXT: This Test Track can be used for testing Personal Vehicles and cars promoted by the LS Car Meet. */))
					{
						__LIB_0__::func_151("SANDBOX_HELP_2" /* GXT: Access the LS Car Meet section of the Interaction Menu to start a Time Trial on the Test Track, view Leaderboards or challenge players to additional races and increase your LS Car Meet reputation. */, -1);
						iVar0++;
						__LIB_1__::func_379(31560, iVar0, -1);
						MISC::SET_BIT(&(Global_1946250.f_8), 5);
					}
				}
			}
		}
		func_116();
	}
}

void func_116()//Position - 0xD9B3
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (BitTest(Global_1946250.f_8, 24))
	{
		return;
	}
	if (!__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
	{
		return;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		return;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (__LIB_0__::func_793(iVar0))
	{
		return;
	}
	if (VEHICLE::IS_VEHICLE_SEAT_FREE(iVar0, -1, false))
	{
		return;
	}
	iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false));
	if (!__LIB_1__::func_693(iVar1, 1, 1))
	{
		return;
	}
	if (iVar1 == PLAYER::PLAYER_ID())
	{
		return;
	}
	if (__LIB_5__::func_185(iVar1) != 276)
	{
		return;
	}
	iVar2 = __LIB_3__::func_233(iVar1);
	if (!func_119(iVar2))
	{
		return;
	}
	__LIB_9__::func_21(func_118(iVar2), PLAYER::GET_PLAYER_NAME(iVar1), 1, -1);
	MISC::SET_BIT(&(Global_1946250.f_8), 24);
}

char* func_118(int iParam0)//Position - 0xDAB3
{
	switch (iParam0)
	{
		case 2:
			return "TSA_PASS_H2H" /* GXT: ~a~ has started a Head-to-Head. */;
		case 0:
			return "TSA_PASS_TT" /* GXT: ~a~ has started a Time Trial. */;
		case 1:
			return "TSA_PASS_CD" /* GXT: ~a~ has started a Scramble. */;
		default:
	}
	return "";
}

bool func_119(int iParam0)//Position - 0xDAEC
{
	return !MISC::IS_STRING_NULL_OR_EMPTY(func_118(iParam0));
}

void func_126()//Position - 0xDC2C
{
	int iVar0;
	int iVar1;
	if (func_132())
	{
		if (!__LIB_0__::func_864(&(Local_133.f_931)))
		{
			__LIB_0__::func_795(&(Local_133.f_931), 0, 0);
		}
		else
		{
			iVar0 = __LIB_1__::func_677(111, -1);
			iVar1 = (__LIB_9__::func_22(&(Local_133.f_931), 0) / 1000);
			if ((iVar1 % 60) == 0 && iVar1 != 0)
			{
				iVar0++;
				__LIB_0__::clearF_1Prop(&(Local_133.f_931));
				__LIB_1__::func_875(111, iVar0, -1);
			}
		}
	}
	else if (__LIB_0__::func_864(&(Local_133.f_931)))
	{
		__LIB_0__::clearF_1Prop(&(Local_133.f_931));
	}
}

int func_132()//Position - 0xDD74
{
	if (((((__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && __LIB_1__::func_708(PLAYER::PLAYER_ID())) && PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID())) && __LIB_0__::func_336(PLAYER::PLAYER_PED_ID(), 0) == -1) && Local_133.f_3 == 0) && !__LIB_9__::func_23(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

void func_136()//Position - 0xDE9B
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (__LIB_8__::func_356(&Local_320, 13) || Local_133.f_3 == 7)
	{
		return;
	}
	if (CAM::IS_SCREEN_FADED_IN())
	{
		__LIB_9__::func_34(PLAYER::PLAYER_ID(), 0);
	}
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
	{
		func_305();
		if (__LIB_1__::func_708(PLAYER::PLAYER_ID()))
		{
			if (func_250())
			{
				__LIB_9__::func_29(&Local_320, 13, 1);
				func_248(1);
				return;
			}
			if (!__LIB_8__::func_356(&Local_320, 8))
			{
				if (INTERIOR::IS_VALID_INTERIOR(Local_133.f_420))
				{
					if (INTERIOR::IS_INTERIOR_READY(Local_133.f_420))
					{
						if (func_148(&Local_320))
						{
							if (__LIB_9__::func_26(NETWORK::NET_TO_VEH(Local_320.f_6), Local_133.f_420, joaat("Main_RM")))
							{
								__LIB_9__::func_29(&Local_320, 8, 1);
							}
						}
					}
				}
			}
			else if (__LIB_0__::func_939(Local_320.f_6))
			{
				func_143();
				if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_320.f_6))
				{
					if (!__LIB_1__::func_483(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_320.f_6)) && !__LIB_9__::func_25(&Local_320, PLAYER::PLAYER_ID(), 2))
					{
						if (VEHICLE::IS_VEHICLE_SEAT_FREE(NETWORK::NET_TO_VEH(Local_320.f_6), __LIB_28__::func_438(), false))
						{
							if (!__LIB_12__::func_22(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_ENTER_VEHICLE"), 1))
							{
								TASK::TASK_ENTER_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_320.f_6), 20000, -1, 2f, 16, 0);
							}
						}
					}
					else
					{
						func_138(&Local_320, 2, 1);
					}
				}
			}
		}
		else if (__LIB_12__::func_207(PLAYER::PLAYER_ID()))
		{
			if (func_250())
			{
				__LIB_9__::func_29(&Local_320, 13, 1);
				func_248(1);
				return;
			}
			iVar0 = __LIB_28__::func_438();
			iVar1 = __LIB_9__::func_24();
			if (iVar1 != __LIB_0__::getMinusOneOrNull())
			{
				iVar2 = PLAYER::GET_PLAYER_PED(iVar1);
				if (__LIB_0__::func_121(iVar2))
				{
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(iVar2) && __LIB_9__::func_25(&Local_320, iVar1, 2))
					{
						iVar3 = PED::GET_VEHICLE_PED_IS_IN(iVar2, false);
						if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && __LIB_0__::func_121(iVar3))
						{
							if (!__LIB_1__::func_483(PLAYER::PLAYER_PED_ID(), iVar3) && !__LIB_9__::func_25(&Local_320, PLAYER::PLAYER_ID(), 2))
							{
								if (VEHICLE::IS_VEHICLE_SEAT_FREE(iVar3, iVar0, false))
								{
									if (!__LIB_12__::func_22(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_ENTER_VEHICLE"), 1))
									{
										TASK::TASK_ENTER_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar3, 20000, iVar0, 2f, 16, 0);
									}
								}
							}
							else
							{
								func_138(&Local_320, 2, 1);
								if (__LIB_0__::func_864(&(Local_320.f_699)))
								{
									__LIB_0__::clearF_1Prop(&(Local_320.f_699));
								}
							}
						}
					}
					else if (!__LIB_0__::func_864(&(Local_320.f_699)))
					{
						__LIB_0__::func_795(&(Local_320.f_699), 0, 0);
					}
				}
			}
		}
	}
}

void func_138(int* iParam0, bool bParam1, bool bParam2)//Position - 0xE11C
{
	if (PLAYER::PLAYER_ID() == __LIB_0__::getMinusOneOrNull())
	{
		return;
	}
	if (bParam2)
	{
		if (!BitTest(iParam0->f_9[PLAYER::PLAYER_ID() /*2*/], bParam1))
		{
			MISC::SET_BIT(&(iParam0->f_9[PLAYER::PLAYER_ID() /*2*/]), bParam1);
		}
	}
	else if (BitTest(iParam0->f_9[PLAYER::PLAYER_ID() /*2*/], bParam1))
	{
		MISC::CLEAR_BIT(&(iParam0->f_9[PLAYER::PLAYER_ID() /*2*/]), bParam1);
	}
}

void func_143()//Position - 0xE21C
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	if (!ENTITY::DOES_ENTITY_EXIST(Local_133.f_935) && !__LIB_0__::func_86(Local_320.f_3))
	{
		iVar0 = func_144();
		Var1 = { Local_320.f_3 + Vector(0f, 0f, 2.5f) };
		Var2 = { 90f, 0f, 0f };
		Var1.f_2 = 24.624f;
		if (STREAMING::IS_MODEL_VALID(iVar0))
		{
			STREAMING::REQUEST_MODEL(iVar0);
			if (STREAMING::HAS_MODEL_LOADED(iVar0))
			{
				Local_133.f_935 = OBJECT::CREATE_OBJECT(iVar0, Var1, false, false, true);
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_133.f_935, Var1, false, false, true);
				ENTITY::SET_ENTITY_ROTATION(Local_133.f_935, Var2, 2, false);
				ENTITY::SET_ENTITY_COLLISION(Local_133.f_935, true, false);
				ENTITY::SET_ENTITY_VISIBLE(Local_133.f_935, false, false);
				ENTITY::SET_ENTITY_INVINCIBLE(Local_133.f_935, true);
				ENTITY::FREEZE_ENTITY_POSITION(Local_133.f_935, true);
			}
		}
	}
}

int func_144()//Position - 0xE2E2
{
	return joaat("tr_prop_tr_gate_l_01a");
}

int func_148(int* iParam0)//Position - 0xE394
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	int iVar3;
	if (!__LIB_0__::func_939(iParam0->f_6) && __LIB_9__::func_28() != 0)
	{
		iVar0 = __LIB_9__::func_28();
		if (STREAMING::IS_MODEL_IN_CDIMAGE(iVar0) && STREAMING::IS_MODEL_A_VEHICLE(iVar0))
		{
			if (__LIB_0__::func_799(iVar0))
			{
				if (__LIB_1__::func_690(NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(false, 1) + 1, 0, 1) && !__LIB_8__::func_356(iParam0, 7))
				{
					NETWORK::RESERVE_LOCAL_NETWORK_MISSION_VEHICLES(NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(false, 1) + 1);
					__LIB_9__::func_29(iParam0, 7, 1);
				}
				else if (__LIB_8__::func_356(iParam0, 7))
				{
					if (!func_226(&Var1, &fVar2))
					{
						return 0;
					}
					iParam0->f_3 = { Var1 };
					if (NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
					{
						iVar3 = VEHICLE::CREATE_VEHICLE(iVar0, Var1, fVar2, true, false, false);
						iParam0->f_6 = NETWORK::VEH_TO_NET(iVar3);
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iVar3, Var1, false, false, true);
						ENTITY::SET_ENTITY_ROTATION(iVar3, 0f, 0f, fVar2, 2, true);
						ENTITY::SET_ENTITY_INVINCIBLE(iVar3, true);
						NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(iVar3, true);
						VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(iVar3, true);
						ENTITY::SET_ENTITY_COLLISION(iVar3, true, false);
						VEHICLE::SET_VEHICLE_FULLBEAM(iVar3, false);
						VEHICLE::SET_VEHICLE_LIGHTS(iVar3, 4);
						ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iVar3, false);
						VEHICLE::SET_VEHICLE_ENGINE_ON(iVar3, true, true, false);
						VEHICLE::SET_VEHICLE_FIXED(iVar3);
						ENTITY::SET_ENTITY_HEALTH(iVar3, 1000, 0);
						VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iVar3, 1000f);
						VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iVar3, 1000f);
						VEHICLE::SET_VEHICLE_DIRT_LEVEL(iVar3, 0f);
						ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iVar3, false);
						ENTITY::SET_ENTITY_VISIBLE(iVar3, true, false);
						DECORATOR::DECOR_SET_BOOL(iVar3, "TestDrive", true);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar3, 5f);
						ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iVar3, true);
						func_153(&iVar3);
						if (__LIB_2__::func_919(ENTITY::GET_ENTITY_MODEL(iVar3)) && __LIB_0__::func_137(32274, -1) == 1)
						{
							VEHICLE::SET_REDUCED_SUSPENSION_FORCE(iVar3, true);
						}
						VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(iVar3, PLAYER::PLAYER_ID(), false);
						VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(iVar3, false);
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(iVar3, 1);
						__LIB_15__::func_287(iVar3);
						AUDIO::SET_VEHICLE_RADIO_ENABLED(iVar3, true);
						AUDIO::LOCK_RADIO_STATION("RADIO_36_AUDIOPLAYER" /* GXT: Media Player */, false);
						AUDIO::UNLOCK_RADIO_STATION_TRACK_LIST("RADIO_36_AUDIOPLAYER" /* GXT: Media Player */, "TUNER_AP_MIX3_PARTD");
						AUDIO::FORCE_MUSIC_TRACK_LIST("RADIO_36_AUDIOPLAYER" /* GXT: Media Player */, "TUNER_AP_MIX3_PARTD", __LIB_9__::func_27());
						AUDIO::SET_VEH_RADIO_STATION(iVar3, "HIDDEN_RADIO_09_HIPHOP_OLD");
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
					}
				}
			}
		}
		return 0;
	}
	return 1;
}

void func_153(int iParam0)//Position - 0xE6BE
{
	if (__LIB_0__::func_121(*iParam0))
	{
		if (__LIB_9__::func_28() != 0)
		{
			__LIB_9__::func_326(*iParam0, &Global_1964733, 1, 1, 0);
		}
	}
}

int func_226(var uParam0, var uParam1)//Position - 0x1746B
{
	int iVar0;
	struct<3> Var1;
	var uVar2;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Var1 = { func_239(iVar0) };
		uVar2 = func_238(iVar0);
		if (__LIB_31__::func_82(Var1, 3.5f, 1065353216, 1065353216, 1084227584, 0, 0, 0, 1123024896, 1, -1, 0, 0, 1, 0, 0, 0))
		{
			*uParam0 = { Var1 };
			*uParam1 = uVar2;
			return 1;
		}
		else if (iVar0 == 31)
		{
		}
		iVar0++;
	}
	return 0;
}

float func_238(int iParam0)//Position - 0x17A52
{
	switch (iParam0)
	{
		case 0:
			return 269.9998f;
		case 1:
			return 266.5996f;
		case 2:
			return 266.5996f;
		case 3:
			return 267.7996f;
		case 4:
			return 267.7995f;
		case 5:
			return 267.7995f;
		case 6:
			return 267.7995f;
		case 7:
			return 267.7995f;
		case 8:
			return 267.7995f;
		case 9:
			return 272.5992f;
		case 10:
			return 272.5992f;
		case 11:
			return 272.5992f;
		case 12:
			return 272.5992f;
		case 13:
			return 268.3991f;
		case 14:
			return 268.3991f;
		case 15:
			return 269.5991f;
		case 16:
			return 269.5991f;
		case 17:
			return 269.5991f;
		case 18:
			return 273.799f;
		case 19:
			return 268.1989f;
		case 20:
			return 272.3988f;
		case 21:
			return 272.3988f;
		case 22:
			return 272.3988f;
		case 23:
			return 272.3988f;
		case 24:
			return 270.3987f;
		case 25:
			return 270.3987f;
		case 26:
			return 270.3987f;
		case 27:
			return 270.3987f;
		case 28:
			return 270.3987f;
		case 29:
			return 270.3987f;
		case 30:
			return 270.3987f;
		case 31:
			return 270.3987f;
		default:
	}
	return 269.9998f;
}

Vector3 func_239(int iParam0)//Position - 0x17C26
{
	switch (iParam0)
	{
		case 0:
			return -2121.07f, 1103.7826f, 24.6638f;
		case 1:
			return -2121.3042f, 1100.068f, 24.6637f;
		case 2:
			return -2121.519f, 1095.7183f, 24.6637f;
		case 3:
			return -2121.3826f, 1091.1252f, 24.6637f;
		case 4:
			return -2122.529f, 1082.5858f, 24.6636f;
		case 5:
			return -2122.7393f, 1078.3519f, 24.6635f;
		case 6:
			return -2122.8813f, 1073.8705f, 24.6635f;
		case 7:
			return -2122.75f, 1069.9944f, 24.6635f;
		case 8:
			return -2121.89f, 1066.0487f, 24.6636f;
		case 9:
			return -2121.5513f, 1107.5614f, 24.6637f;
		case 10:
			return -2121.5488f, 1114.9553f, 24.6637f;
		case 11:
			return -2121.2864f, 1119.5732f, 24.6637f;
		case 12:
			return -2120.8547f, 1124.454f, 24.6638f;
		case 13:
			return -2121.4114f, 1128.7777f, 24.6637f;
		case 14:
			return -2121.3337f, 1133.1927f, 24.6637f;
		case 15:
			return -2121.6921f, 1139.3795f, 24.6637f;
		case 16:
			return -2121.6833f, 1143.0996f, 24.6637f;
		case 17:
			return -2121.15f, 1147.1212f, 24.6638f;
		case 18:
			return -2121.6252f, 1151.3705f, 24.6637f;
		case 19:
			return -2122.2344f, 1156.9202f, 24.6636f;
		case 20:
			return -2122.1516f, 1163.8248f, 24.664f;
		case 21:
			return -2121.865f, 1168.1184f, 24.6644f;
		case 22:
			return -2121.633f, 1172.1259f, 24.6648f;
		case 23:
			return -2121.8472f, 1176.4264f, 24.6653f;
		case 24:
			return -2121.6428f, 1180.8553f, 24.6657f;
		case 25:
			return -2122.38f, 1056.44f, 24.6641f;
		case 26:
			return -2122.468f, 1052.631f, 24.6645f;
		case 27:
			return -2122.084f, 1048.732f, 24.6649f;
		case 28:
			return -2125.3809f, 1044.5676f, 24.6653f;
		case 29:
			return -2127.1084f, 1039.3708f, 24.6659f;
		case 30:
			return -2129f, 1039.3708f, 24.6659f;
		case 31:
			return -2130.1084f, 1039.3708f, 24.6659f;
		default:
	}
	return -2124.07f, 1103.7826f, 24.6638f;
}

void func_248(bool bParam0)//Position - 0x181A6
{
	if (bParam0)
	{
		if (!BitTest(Global_1946250.f_8, 10))
		{
			MISC::SET_BIT(&(Global_1946250.f_8), 10);
		}
	}
	else if (BitTest(Global_1946250.f_8, 10))
	{
		MISC::CLEAR_BIT(&(Global_1946250.f_8), 10);
	}
}

int func_250()//Position - 0x1821A
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
	{
		if (__LIB_1__::func_708(PLAYER::PLAYER_ID()) && !__LIB_12__::func_207(PLAYER::PLAYER_ID()))
		{
			if (__LIB_9__::func_28() == 0)
			{
				func_304();
				__LIB_9__::func_33(PLAYER::PLAYER_ID(), 0);
				func_302();
				return 1;
			}
			if (func_301(&Local_320))
			{
				if ((!__LIB_8__::func_356(&Local_320, 22) && func_298()) && !Global_1964875.f_4)
				{
					if (func_297())
					{
						if (func_296(PLAYER::PLAYER_ID()))
						{
							__LIB_9__::func_29(&Local_320, 17, 1);
						}
						else
						{
							__LIB_9__::func_29(&Local_320, 17, 0);
						}
					}
					else
					{
						__LIB_9__::func_29(&Local_320, 17, 1);
					}
					return 1;
				}
			}
			else if (BitTest(Local_133.f_0, 7))
			{
				__LIB_9__::func_29(&Local_320, 22, 0);
				MISC::CLEAR_BIT(&Local_133, 7);
			}
			if (((func_297() && !func_296(PLAYER::PLAYER_ID())) && Global_1964839 != __LIB_0__::getMinusOneOrNull()) && !__LIB_3__::func_776(PLAYER::PLAYER_ID()))
			{
				if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1964839))
				{
					func_304();
					__LIB_9__::func_33(PLAYER::PLAYER_ID(), 0);
					func_302();
					return 1;
				}
			}
		}
		if (__LIB_12__::func_207(PLAYER::PLAYER_ID()))
		{
			if (__LIB_8__::func_355(Local_320.f_699, 20000, 0) && !__LIB_0__::func_859(PLAYER::PLAYER_PED_ID()))
			{
				__LIB_0__::clearF_1Prop(&(Local_320.f_699));
				func_304();
				func_302();
				return 1;
			}
			iVar0 = __LIB_9__::func_24();
			if (iVar0 == __LIB_0__::getMinusOneOrNull())
			{
				func_304();
				func_302();
				return 1;
			}
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
			{
				func_304();
				func_302();
				return 1;
			}
			if (!__LIB_5__::func_203(iVar0))
			{
				func_304();
				func_302();
				return 1;
			}
			if (__LIB_9__::func_25(&Local_320, iVar0, 1))
			{
				func_302();
				return 1;
			}
			iVar1 = PLAYER::GET_PLAYER_PED(iVar0);
			if (!__LIB_0__::func_121(iVar1))
			{
				func_304();
				func_302();
				return 1;
			}
		}
		if ((!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()) && __LIB_9__::func_25(&Local_320, PLAYER::PLAYER_ID(), 2)) && CAM::IS_GAMEPLAY_CAM_RENDERING())
		{
			func_304();
			func_302();
			return 1;
		}
		if (((((CAM::IS_SCREEN_FADED_IN() && !__LIB_2__::func_77()) && PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID())) && func_298()) && !Global_1964875.f_3) && !HUD::IS_PAUSE_MENU_ACTIVE())
		{
			if (func_276(&Local_320, 0, 75))
			{
				if (__LIB_12__::func_207(PLAYER::PLAYER_ID()))
				{
					func_304();
					__LIB_9__::func_29(&Local_320, 17, 0);
					__LIB_9__::func_33(PLAYER::PLAYER_ID(), 0);
					MISC::SET_BIT(&Local_133, 9);
				}
				else if (func_297())
				{
					if (func_296(PLAYER::PLAYER_ID()))
					{
						__LIB_9__::func_29(&Local_320, 17, 1);
					}
					else
					{
						__LIB_9__::func_29(&Local_320, 17, 0);
					}
				}
				else
				{
					__LIB_9__::func_29(&Local_320, 17, 1);
				}
				return 1;
			}
		}
		else if (__LIB_0__::func_864(&(Local_320.f_686)))
		{
			__LIB_0__::clearF_1Prop(&(Local_320.f_686));
		}
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			if (__LIB_0__::func_793(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
			{
				func_304();
				func_302();
				return 1;
			}
		}
		if (func_297() && Global_1964839 != __LIB_0__::getMinusOneOrNull())
		{
			if (BitTest(Global_1946250.f_8, 23))
			{
				if (!__LIB_3__::func_794(Global_1964839))
				{
					func_304();
					__LIB_9__::func_33(PLAYER::PLAYER_ID(), 0);
					func_302();
					return 1;
				}
			}
			else if (!__LIB_9__::func_32(Global_1964839))
			{
				func_304();
				__LIB_9__::func_33(PLAYER::PLAYER_ID(), 0);
				func_302();
				return 1;
			}
		}
		if (__LIB_4__::func_897(PLAYER::PLAYER_ID()) && !__LIB_2__::func_709(PLAYER::PLAYER_ID(), 3))
		{
			__LIB_9__::func_31(PLAYER::PLAYER_ID(), 1);
			func_248(0);
			__LIB_9__::func_34(PLAYER::PLAYER_ID(), 0);
			func_260();
			func_304();
			__LIB_9__::func_29(&Local_320, 13, 0);
			func_302();
			return 1;
		}
		if (!BitTest(Global_1946250.f_8, 23))
		{
			iVar2 = __LIB_7__::func_826();
			if ((((!__LIB_5__::func_203(iVar2) && !__LIB_6__::func_938(iVar2)) && !__LIB_3__::func_790(iVar2)) || iVar2 == __LIB_0__::getMinusOneOrNull()) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
			{
				func_304();
				__LIB_9__::func_33(PLAYER::PLAYER_ID(), 0);
				MISC::SET_BIT(&(Global_1946250.f_8), 23);
				func_302();
				return 1;
			}
		}
	}
	else
	{
		func_304();
		func_302();
		return 1;
	}
	return 0;
}

void func_260()//Position - 0x1884F
{
	func_266();
	__LIB_3__::func_664(0);
	__LIB_3__::func_768(Local_133.f_4, -1);
	__LIB_9__::func_30(PLAYER::PLAYER_ID(), 1);
	__LIB_5__::func_457(11);
}

void func_266()//Position - 0x18967
{
	int iVar0;
	if (BitTest(Global_1946250.f_8, 23))
	{
		__LIB_9__::func_129();
	}
	else
	{
		iVar0 = __LIB_7__::func_826();
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
		{
			__LIB_5__::func_202(iVar0);
		}
		else
		{
			__LIB_9__::func_129();
		}
	}
}

int func_276(var uParam0, int iParam1, int iParam2)//Position - 0x18CFF
{
	var uVar0;
	uParam0->f_686.f_2 = iParam1;
	uParam0->f_686.f_3 = iParam2;
	if (__LIB_5__::func_120(&(uParam0->f_686), 1, 3000))
	{
		return 1;
	}
	else if (PAD::IS_DISABLED_CONTROL_PRESSED(iParam1, iParam2))
	{
		uVar0 = __LIB_9__::func_22(&(uParam0->f_686), 0);
		__LIB_15__::func_404(uVar0, 3000, "TDR_SANDBOX_1" /* GXT: EXIT TEST TRACK */, 1, -1, 13, -1082130432, -1082130432, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1, 0, -1, 1);
	}
	return 0;
}

int func_296(int iParam0)//Position - 0x19318
{
	if (iParam0 == __LIB_0__::getMinusOneOrNull())
	{
		return 0;
	}
	if (Global_1964839 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool func_297()//Position - 0x1933B
{
	return __LIB_9__::func_23(PLAYER::PLAYER_ID());
}

int func_298()//Position - 0x1934B
{
	if (__LIB_3__::func_233(PLAYER::PLAYER_ID()) == 1)
	{
		return 0;
	}
	if (__LIB_3__::func_233(PLAYER::PLAYER_ID()) == 2)
	{
		return 0;
	}
	if (__LIB_12__::func_590(0))
	{
		return 0;
	}
	if (__LIB_0__::func_983())
	{
		return 0;
	}
	if (__LIB_0__::func_77(0))
	{
		return 0;
	}
	return 1;
}

int func_301(int* iParam0)//Position - 0x19402
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
	{
		Var0 = { -2148.6133f, 1106.074f, 31.213045f };
		Var1 = { -2132.1213f, 1106.0887f, 24.412294f };
		fVar2 = 10f;
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var0, Var1, fVar2, false, true, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_302()//Position - 0x1945F
{
	Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_204 = -1;
}

void func_304()//Position - 0x194DF
{
	MISC::SET_BIT(&Local_133, 5);
}

void func_305()//Position - 0x194EE
{
	if (__LIB_1__::func_708(PLAYER::PLAYER_ID()) || __LIB_12__::func_207(PLAYER::PLAYER_ID()))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 81 /*INPUT_VEH_NEXT_RADIO*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 82 /*INPUT_VEH_PREV_RADIO*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 83 /*INPUT_VEH_NEXT_RADIO_TRACK*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 84 /*INPUT_VEH_PREV_RADIO_TRACK*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 85 /*INPUT_VEH_RADIO_WHEEL*/, true);
			}
		}
	}
}

void func_308()//Position - 0x195C9
{
	int iVar0;
	int iVar1;
	if (__LIB_8__::func_356(&Local_320, 13) && Global_1946244 == 7)
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			iVar1 = __LIB_0__::func_336(PLAYER::PLAYER_PED_ID(), 0);
			if (__LIB_0__::func_121(iVar0) && !Global_2703735.f_3428)
			{
				NETWORK::SET_ENTITY_LOCALLY_VISIBLE(iVar0);
			}
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/, true);
			func_631();
			switch (Local_133.f_3)
			{
				case 0:
					func_630(&Local_320);
					func_629(1);
					break;
				case 1:
					if (iVar1 == -1)
					{
						if (!VEHICLE::IS_VEHICLE_STOPPED(iVar0))
						{
							__LIB_0__::func_213(iVar0, 4f, 1, 1056964608, 1, 1, 0);
						}
					}
					__LIB_1__::func_92();
					__LIB_9__::func_49(iVar1);
					__LIB_12__::func_46(1, 0);
					__LIB_1__::func_33(0);
					if ((__LIB_0__::func_983() || Global_1964875.f_5) && __LIB_8__::func_356(&Local_320, 17))
					{
						__LIB_9__::func_29(&Local_320, 17, 0);
					}
					if (iVar1 == -1 && __LIB_8__::func_356(&Local_320, 17))
					{
						GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(__LIB_9__::func_48(Local_320.f_698), false);
						if (!__LIB_0__::func_864(&(Local_133.f_933)))
						{
							__LIB_0__::func_795(&(Local_133.f_933), 0, 0);
						}
						if (VEHICLE::IS_VEHICLE_STOPPED(iVar0) || __LIB_8__::func_355(Local_133.f_933, 3000, 0))
						{
							__LIB_0__::clearF_1Prop(&(Local_133.f_933));
							__LIB_9__::func_29(&Local_320, 17, 0);
							if (HUD::IS_PAUSE_MENU_ACTIVE())
							{
								HUD::SET_FRONTEND_ACTIVE(false);
							}
							func_629(2);
						}
					}
					else if (func_618())
					{
						if (iVar1 == -1)
						{
							func_138(&Local_320, 1, 1);
						}
						func_629(4);
					}
					else
					{
						if (iVar1 == -1)
						{
							func_138(&Local_320, 1, 1);
						}
						func_629(5);
					}
					break;
				case 2:
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/, true);
					HUD::DISABLE_FRONTEND_THIS_FRAME();
					__LIB_1__::func_33(0);
					if (__LIB_8__::func_356(&Local_320, 5) && func_617(Local_320.f_116))
					{
						if (Local_320.f_116 == 1)
						{
							__LIB_9__::func_31(PLAYER::PLAYER_ID(), 1);
							func_616(iVar0);
						}
						if (iVar1 == -1)
						{
							func_138(&Local_320, 1, 1);
						}
						func_613(&Local_320);
						HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
						func_629(4);
					}
					else if (__LIB_8__::func_356(&Local_320, 6))
					{
						__LIB_9__::func_29(&Local_320, 6, 0);
						func_629(3);
					}
					else
					{
						if (__LIB_8__::func_356(&Local_320, 5) && !func_617(Local_320.f_116))
						{
							__LIB_9__::func_29(&Local_320, 5, 0);
						}
						func_607(&(Local_320.f_116));
						func_544(&Local_320);
					}
					break;
				case 3:
					__LIB_5__::func_780();
					__LIB_1__::func_91();
					func_613(&Local_320);
					__LIB_9__::func_312(&(Local_320.f_116));
					__LIB_9__::func_29(&Local_320, 13, 0);
					if (func_301(&Local_320))
					{
						MISC::SET_BIT(&Local_133, 7);
						__LIB_9__::func_29(&Local_320, 22, 1);
					}
					if (CAM::IS_CINEMATIC_CAM_RENDERING())
					{
						CAM::SET_CINEMATIC_MODE_ACTIVE(false);
					}
					if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
					{
						if (!ENTITY::IS_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID()))
						{
							ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
						}
					}
					func_629(0);
					break;
				case 4:
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
					HUD::DISABLE_FRONTEND_THIS_FRAME();
					if (func_392(&Local_320, iVar0, 1, 0))
					{
						func_629(5);
					}
					break;
			}
		}
		else if (Local_133.f_3 < 5)
		{
			if (Local_133.f_3 == 4)
			{
				MISC::SET_BIT(&Local_133, 4);
			}
			else
			{
				__LIB_9__::func_33(PLAYER::PLAYER_ID(), 0);
			}
			func_629(5);
		}
		switch (Local_133.f_3)
		{
			case 5:
				if (CAM::IS_SCREEN_FADED_IN())
				{
					CAM::DO_SCREEN_FADE_OUT(800);
				}
				else if (CAM::IS_SCREEN_FADED_OUT())
				{
					func_302();
					if (HUD::IS_RADAR_HIDDEN())
					{
						HUD::DISPLAY_RADAR(true);
					}
					if (BitTest(Local_133.f_0, 4))
					{
						__LIB_31__::func_70(&Local_320);
						MISC::CLEAR_BIT(&Local_133, 4);
					}
					if (__LIB_8__::func_356(&Local_320, 8) && func_341())
					{
						func_629(6);
					}
					else
					{
						if (__LIB_8__::func_356(&Local_320, 8))
						{
							if (__LIB_0__::func_121(NETWORK::NET_TO_VEH(Local_320.f_6)) && !func_339(NETWORK::NET_TO_VEH(Local_320.f_6)))
							{
								return;
							}
						}
						func_629(7);
					}
				}
				break;
			case 6:
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_320.f_6))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_320.f_6))
					{
						if (func_339(NETWORK::NET_TO_VEH(Local_320.f_6)))
						{
							__LIB_1__::func_445(&(Local_320.f_6));
						}
					}
					else
					{
						NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_320.f_6);
					}
				}
				else
				{
					func_629(7);
				}
				break;
			case 7:
				if (__LIB_9__::func_24() != PLAYER::PLAYER_ID())
				{
					if (__LIB_3__::func_755(__LIB_9__::func_24()))
					{
						__LIB_9__::func_31(PLAYER::PLAYER_ID(), 1);
					}
				}
				if (!__LIB_12__::func_207(PLAYER::PLAYER_ID()) && VEHICLE::IS_THIS_MODEL_A_BIKE(__LIB_9__::func_28()))
				{
					Global_2815059.f_288 = -1;
				}
				__LIB_31__::func_87();
				func_248(0);
				__LIB_9__::func_34(PLAYER::PLAYER_ID(), 0);
				__LIB_5__::func_780();
				func_260();
				__LIB_9__::func_29(&Local_320, 13, 0);
				__LIB_1__::func_91();
				break;
			}
	}
}

int func_339(int iParam0)//Position - 0x1A191
{
	int iVar0;
	int iVar1;
	if (__LIB_0__::func_121(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (__LIB_1__::func_693(iVar1, 0, 1))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::GET_PLAYER_PED(iVar1), iParam0, false))
				{
					__LIB_1__::func_473(__LIB_1__::func_705(iVar1), 0, 0f, 0, 0, 0, -1);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(iParam0, iVar1, true);
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_341()//Position - 0x1A24F
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		iVar1 = 0;
		while (iVar1 < 32)
		{
			iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
			if ((NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar2) && iVar2 != PLAYER::PLAYER_ID()) && !__LIB_12__::func_635(iVar2, iVar0))
			{
				return 1;
			}
			iVar1++;
		}
	}
	return 0;
}

int func_392(int* iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x1B69D
{
	struct<3> Var0;
	float fVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	struct<3> Var5;
	struct<3> Var6;
	struct<3> Var7;
	struct<3> Var8;
	struct<3> Var9;
	struct<3> Var10;
	struct<3> Var11;
	struct<3> Var12;
	var uVar13;
	var uVar14;
	var uVar15;
	var uVar16;
	int iVar17;
	if (__LIB_9__::func_47())
	{
		return 1;
	}
	if (Global_1964875.f_2)
	{
		return 1;
	}
	switch (iParam0->f_691)
	{
		case 0:
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				__LIB_1__::func_484(&(iParam0->f_423.f_109));
				__LIB_4__::func_183(&(Global_1946250.f_3638));
				__LIB_9__::func_46(iParam0, 2);
			}
			return 0;
			break;
		case 2:
			if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_423.f_109) && __LIB_0__::func_121(iParam1))
			{
				if (func_425(&iParam1, &(iParam0->f_423.f_109), 12))
				{
					__LIB_3__::func_633(&(iParam0->f_423.f_109));
				}
				else
				{
					return 0;
				}
				return 0;
			}
			MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0->f_423.f_109), &(iParam0->f_423.f_189[0 /*3*/]), &(iParam0->f_423.f_189[1 /*3*/]));
			__LIB_9__::func_45(&Var5, &Var7, &uVar13, 1, bParam2);
			__LIB_9__::func_45(&Var6, &Var8, &uVar14, 0, bParam2);
			__LIB_9__::func_44(&Var9, &Var11, &uVar15, 1, bParam2);
			__LIB_9__::func_44(&Var10, &Var12, &uVar16, 0, bParam2);
			if (bParam2)
			{
				bVar2 = true;
				bVar3 = false;
			}
			else
			{
				if (__LIB_0__::func_121(iParam0->f_423.f_109))
				{
					bVar2 = VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iParam0->f_423.f_109));
				}
				bVar3 = !(iParam0->f_423.f_189[1 /*3*/].f_1 - iParam0->f_423.f_189[0 /*3*/].f_1) > 7f;
			}
			if (bVar2)
			{
				MISC::SET_BIT(&(iParam0->f_423.f_188), 1);
			}
			else
			{
				MISC::CLEAR_BIT(&(iParam0->f_423.f_188), 1);
			}
			__LIB_6__::func_820(&(Global_1946250.f_3638), Var5, Var7, uVar13, Var6, Var8, uVar14, bVar2, Var9, Var11, uVar15, Var10, Var12, uVar16, bVar3, 1056964608, 1036831949);
			__LIB_4__::func_37(&(iParam0->f_423.f_109), 0);
			if (bParam2 || iParam3)
			{
				iVar17 = 62;
			}
			else
			{
				iVar17 = 58;
			}
			__LIB_4__::func_178(&(Global_1946250.f_3638), iVar17);
			MISC::SET_BIT(&(iParam0->f_423), 8);
			if (BitTest(Global_1946250.f_3638.f_381, 1))
			{
				MISC::CLEAR_BIT(&(Global_1946250.f_3638.f_381), 1);
			}
			__LIB_9__::func_46(iParam0, 3);
			return 0;
			break;
		case 3:
			if (bParam2)
			{
				__LIB_9__::func_312(&(iParam0->f_116));
			}
			__LIB_9__::func_3(&(Global_1946250.f_3638), 0, 1);
			if (!BitTest(iParam0->f_423, 3))
			{
				if (Global_1946250.f_3638.f_386)
				{
					fVar4 = 1000f;
					GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(iParam0->f_423.f_28, fVar4);
					MISC::SET_BIT(&(iParam0->f_423), 3);
				}
			}
			if (__LIB_3__::func_630(&(Global_1946250.f_3638), 0) || __LIB_3__::func_630(&(Global_1946250.f_3638), 1))
			{
				if (!__LIB_8__::func_356(iParam0, 9))
				{
					__LIB_5__::func_421(&(iParam0->f_423.f_109), 1);
					__LIB_4__::func_37(&(iParam0->f_423.f_109), 1);
					if (__LIB_0__::func_121(iParam0->f_423.f_109))
					{
						if ((iParam0->f_423.f_189[1 /*3*/].f_2 - iParam0->f_423.f_189[0 /*3*/].f_2) > 4.9f)
						{
							MISC::SET_BIT(&(iParam0->f_423.f_188), 2);
						}
						Var0 = { __LIB_9__::func_43(bParam2, ENTITY::GET_ENTITY_MODEL(iParam0->f_423.f_109)) };
						fVar1 = __LIB_9__::func_42(bParam2, ENTITY::GET_ENTITY_MODEL(iParam0->f_423.f_109));
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam0->f_423.f_109, Var0, false, false, true);
						ENTITY::SET_ENTITY_HEADING(iParam0->f_423.f_109, fVar1);
						ENTITY::FREEZE_ENTITY_POSITION(iParam0->f_423.f_109, false);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iParam0->f_423.f_109, 5f);
						ENTITY::SET_ENTITY_COLLISION(iParam0->f_423.f_109, true, false);
						ENTITY::SET_ENTITY_VISIBLE(iParam0->f_423.f_109, true, false);
						VEHICLE::SET_VEHICLE_ENGINE_ON(iParam0->f_423.f_109, true, true, false);
						AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Exit_Engine_Blips", iParam0->f_423.f_109, "Lowrider_Super_Mod_Garage_Sounds", false, 0);
						STREAMING::SET_FOCUS_POS_AND_VEL(Var0, 0f, 0f, 0f);
						iParam0->f_423.f_183[1] = (iParam0->f_423.f_189[1 /*3*/].f_1 - iParam0->f_423.f_189[0 /*3*/].f_1);
						iParam0->f_423.f_189[1 /*3*/] = 0f;
						iParam0->f_423.f_189[1 /*3*/].f_2 = 0f;
						if (bParam2)
						{
							AUDIO::SET_VEHICLE_RADIO_ENABLED(iParam0->f_423.f_109, true);
							AUDIO::LOCK_RADIO_STATION("RADIO_36_AUDIOPLAYER" /* GXT: Media Player */, false);
							AUDIO::SET_VEH_RADIO_STATION(iParam0->f_423.f_109, "RADIO_36_AUDIOPLAYER" /* GXT: Media Player */);
							AUDIO::UNLOCK_RADIO_STATION_TRACK_LIST("RADIO_36_AUDIOPLAYER" /* GXT: Media Player */, "TUNER_AP_MIX3_PARTD");
							AUDIO::FORCE_MUSIC_TRACK_LIST("RADIO_36_AUDIOPLAYER" /* GXT: Media Player */, "TUNER_AP_MIX3_PARTD", __LIB_9__::func_27());
							AUDIO::SET_VEH_RADIO_STATION(iParam0->f_423.f_109, "RADIO_36_AUDIOPLAYER" /* GXT: Media Player */);
						}
						else
						{
							AUDIO::SET_VEHICLE_RADIO_ENABLED(iParam0->f_423.f_109, false);
						}
						AUDIO::START_AUDIO_SCENE(__LIB_9__::func_38());
						__LIB_9__::func_29(iParam0, 9, 1);
					}
				}
				HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
				if (__LIB_0__::func_121(iParam0->f_423.f_109))
				{
					if (bParam2)
					{
						if (!AUDIO::IS_VEHICLE_RADIO_ON(iParam0->f_423.f_109))
						{
							AUDIO::SET_VEHICLE_RADIO_ENABLED(iParam0->f_423.f_109, true);
							AUDIO::LOCK_RADIO_STATION("RADIO_36_AUDIOPLAYER" /* GXT: Media Player */, false);
							AUDIO::SET_VEH_RADIO_STATION(iParam0->f_423.f_109, "RADIO_36_AUDIOPLAYER" /* GXT: Media Player */);
							AUDIO::UNLOCK_RADIO_STATION_TRACK_LIST("RADIO_36_AUDIOPLAYER" /* GXT: Media Player */, "TUNER_AP_MIX3_PARTD");
							AUDIO::FORCE_MUSIC_TRACK_LIST("RADIO_36_AUDIOPLAYER" /* GXT: Media Player */, "TUNER_AP_MIX3_PARTD", __LIB_9__::func_27());
							AUDIO::SET_VEH_RADIO_STATION(iParam0->f_423.f_109, "RADIO_36_AUDIOPLAYER" /* GXT: Media Player */);
						}
					}
					else if (AUDIO::IS_VEHICLE_RADIO_ON(iParam0->f_423.f_109))
					{
						AUDIO::SET_RADIO_TO_STATION_NAME("OFF");
					}
					__LIB_31__::func_71(&(iParam0->f_423), bParam2, ENTITY::GET_ENTITY_MODEL(iParam0->f_423.f_109));
				}
				if (__LIB_8__::func_356(iParam0, 10))
				{
					ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), false, false);
				}
			}
			if (((((Global_1946250.f_3638.f_386 && Global_1946250.f_3638.f_372 > 0) && Global_1946250.f_3638.f_382 == (Global_1946250.f_3638.f_372 - 1)) && (Global_1946250.f_3638.f_18[Global_1946250.f_3638.f_382 /*36*/] - Global_1946250.f_3638.f_375) <= 400) || !Global_1946250.f_3638.f_386) || (Global_1946250.f_3638.f_18[Global_1946250.f_3638.f_382 /*36*/].f_25 > 0 && CAM::IS_SCREEN_FADED_OUT()))
			{
				if (CAM::IS_SCREEN_FADED_IN())
				{
					CAM::DO_SCREEN_FADE_OUT(__LIB_9__::func_39(bParam2));
				}
				__LIB_9__::func_46(iParam0, 4);
			}
			return 0;
			break;
		case 4:
			if (!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
			{
				CAM::DO_SCREEN_FADE_OUT(__LIB_9__::func_39(bParam2));
			}
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				__LIB_31__::func_70(iParam0);
			}
			else
			{
				return 0;
			}
			break;
	}
	__LIB_9__::func_46(iParam0, 0);
	return 1;
}

int func_425(int iParam0, var uParam1, int iParam2)//Position - 0x1D05E
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
	else if (__LIB_31__::func_65(uParam1, *iParam0, 10f, 20f, 15f, ENTITY::GET_ENTITY_HEADING(*iParam0), 0, 0))
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
			__LIB_9__::func_295(*iParam0, &Var0);
			__LIB_9__::func_326(*uParam1, &Var0, 1, 1, 0);
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
				func_427(iParam0, uParam1, &(uParam1->f_1), __LIB_0__::func_703(iParam2, 16), __LIB_0__::func_703(iParam2, 128), __LIB_0__::func_703(iParam2, 64), !__LIB_0__::func_703(iParam2, 256), 0, 1);
			}
			if (__LIB_0__::func_703(iParam2, 4))
			{
				__LIB_40__::func_751(iParam0, &(uParam1->f_12));
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

int func_427(int iParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)//Position - 0x1D3C7
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
						func_428(uParam2[iVar1], iVar4, bParam8, bParam6);
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

int func_428(var uParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x1D529
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
		if (func_443(iParam1) || __LIB_1__::func_554(iParam1))
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

int func_443(int iParam0)//Position - 0x1E3AE
{
	if (!PED::IS_PED_WEARING_HELMET(iParam0) && !__LIB_0__::func_348(ENTITY::GET_ENTITY_MODEL(iParam0), 14, func_445(iParam0, 14, 0), -1))
	{
		return 0;
	}
	return 1;
}

int func_445(int iParam0, int iParam1, int iParam2)//Position - 0x1E4AF
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
				if (func_446(iParam0, iParam1, iVar0))
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
				if (func_446(iParam0, iParam1, iVar1))
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

int func_446(int iParam0, int iParam1, int iParam2)//Position - 0x1E550
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
	Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar0, iParam1, iParam2, -1) };
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
				if (!func_446(iParam0, iVar4, uVar8[iVar4]))
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
							if (!func_446(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_3__::func_310(iVar0, 14, iVar6, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar5)
									{
										if (func_446(iParam0, 14, iVar6))
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
						Global_78130[2 /*14*/] = { __LIB_3__::func_310(iVar0, iVar4, iVar1, -1) };
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
			if (!func_446(iParam0, 14, uVar11[iVar10]))
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
						return func_446(iParam0, 4, uVar18);
					}
				}
				else if (__LIB_0__::func_352(iVar0, 4, iParam2, &uVar18))
				{
					return func_446(iParam0, 4, uVar18);
				}
			}
			Global_78129 = (Global_78129 - 1);
		}
	}
	return 0;
}

void func_544(int* iParam0)//Position - 0x3E7B0
{
	if (!__LIB_3__::func_558())
	{
		__LIB_31__::func_72(iParam0, &(iParam0->f_116), 2);
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(__LIB_9__::func_48(iParam0->f_698), false);
		if (__LIB_3__::func_67("SNK_MNU", -1, 0) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(__LIB_9__::func_48(iParam0->f_698)))
		{
			if (__LIB_8__::func_356(iParam0, 4))
			{
				__LIB_1__::func_602(0, 0);
				func_582(iParam0);
				__LIB_9__::func_29(iParam0, 4, 0);
			}
			else
			{
				__LIB_3__::func_781(iParam0->f_116, 1, 1);
			}
			func_579(iParam0);
			__LIB_9__::func_296(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			HUD::HIDE_SCRIPTED_HUD_COMPONENT_THIS_FRAME(19);
		}
	}
}

void func_579(int* iParam0)//Position - 0x42FB7
{
	switch (iParam0->f_116)
	{
		case 1:
			if (!__LIB_9__::func_23(PLAYER::PLAYER_ID()))
			{
				__LIB_1__::func_789("EXIT_MENU_D_1A" /* GXT: You cannot exit the LS Car Meet in this vehicle. */, 0, 0);
			}
			break;
	}
}

void func_582(int* iParam0)//Position - 0x4319C
{
	__LIB_4__::func_851("EXIT_MENU_TTL" /* GXT: TEST TRACK */);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(__LIB_9__::func_48(iParam0->f_698), false);
	if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(__LIB_9__::func_48(iParam0->f_698)))
	{
		__LIB_3__::func_566(1, __LIB_9__::func_48(iParam0->f_698), __LIB_9__::func_48(iParam0->f_698));
	}
	__LIB_8__::func_233(0, "EXIT_MENU_O_0" /* GXT: Enter LS Car Meet */, 0, 1, 0, 0, 0);
	__LIB_8__::func_233(1, "EXIT_MENU_O_1" /* GXT: Exit LS Car Meet */, 0, __LIB_9__::func_23(PLAYER::PLAYER_ID()), 0, 0, 0);
	__LIB_3__::func_781(iParam0->f_116, 1, 1);
	__LIB_1__::func_792(201, "ITEM_SELECT" /* GXT: Select */, -1, 0);
	__LIB_1__::func_792(202, "ITEM_BACK" /* GXT: Back */, -1, 0);
}

void func_607(var uParam0)//Position - 0x443B3
{
	if (!CAM::DOES_CAM_EXIST(uParam0->f_36))
	{
		uParam0->f_36 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), false);
	}
	else if (!CAM::IS_CAM_ACTIVE(uParam0->f_36))
	{
		CAM::SET_CAM_ACTIVE(uParam0->f_36, true);
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
		if (uParam0->f_40 == -1)
		{
			uParam0->f_40 = func_612();
		}
		if (uParam0->f_41 == 0f)
		{
			uParam0->f_41 = func_611(uParam0->f_40);
		}
		CAM::SET_CAM_PARAMS(uParam0->f_36, func_610(uParam0->f_40), func_609(uParam0->f_40), func_608(uParam0->f_40), 0, 1, 1, 2);
		CAM::STOP_CAM_SHAKING(uParam0->f_36, true);
		CAM::SHAKE_CAM(uParam0->f_36, "Hand_shake", uParam0->f_41);
		__LIB_6__::func_928(1, 1, 0);
		uParam0->f_40 = -1;
		uParam0->f_41 = 0f;
	}
}

float func_608(int iParam0)//Position - 0x4446C
{
	switch (iParam0)
	{
		case 0:
			return 7.7533f;
		case 1:
			return 20.2132f;
		case 2:
			return 21.4896f;
		case 3:
			return 10.6434f;
		case 4:
			return 8.5651f;
		case 5:
			return 11.6216f;
		case 6:
			return 11.6216f;
		default:
	}
	return 7.7533f;
}

Vector3 func_609(int iParam0)//Position - 0x444E2
{
	switch (iParam0)
	{
		case 0:
			return -1.5965f, 0.1167f, 104.5397f;
		case 1:
			return -1.6269f, 0.1167f, 71.8699f;
		case 2:
			return -2.7073f, -0.0201f, 54.9734f;
		case 3:
			return -1.0543f, 0.1166f, 104.4969f;
		case 4:
			return -2.6093f, 0.1107f, 27.5694f;
		case 5:
			return -1.2991f, 0.1006f, 120.5073f;
		case 6:
			return -1.2476f, 0.1006f, 80.9185f;
		default:
	}
	return -1.5965f, 0.1167f, 104.5397f;
}

Vector3 func_610(int iParam0)//Position - 0x445A8
{
	switch (iParam0)
	{
		case 0:
			return -2139.5696f, 1117.0297f, 28.7612f;
		case 1:
			return -2139.7341f, 1114.7706f, 28.8857f;
		case 2:
			return -2139.8022f, 1086.651f, 28.8391f;
		case 3:
			return -2138.517f, 1124.1162f, 28.8781f;
		case 4:
			return -2139.557f, 1114.2887f, 28.8886f;
		case 5:
			return -2139.3337f, 1150.7338f, 28.9131f;
		case 6:
			return -2138.9824f, 1088.6503f, 28.9118f;
		default:
	}
	return -2139.5696f, 1117.0297f, 28.7612f;
}

float func_611(int iParam0)//Position - 0x4466E
{
	switch (iParam0)
	{
		case 0:
			return 0.1f;
		case 1:
			return 0.1f;
		case 2:
			return 0.1f;
		case 3:
			return 0.1f;
		case 4:
			return 0.1f;
		case 5:
			return 0.1f;
		case 6:
			return 0.1f;
		default:
	}
	return 0.1f;
}

int func_612()//Position - 0x446E4
{
	return MISC::GET_RANDOM_INT_IN_RANGE(0, 7);
}

void func_613(int* iParam0)//Position - 0x446F2
{
	func_630(iParam0);
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(__LIB_9__::func_48(iParam0->f_698));
	__LIB_1__::func_895(1, -1);
}

void func_616(int iParam0)//Position - 0x447FD
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if ((__LIB_1__::func_693(iVar1, 1, 1) && __LIB_12__::func_635(iVar1, iParam0)) && iVar1 != PLAYER::PLAYER_ID())
		{
			Global_1964840[iVar0] = iVar1;
		}
		else
		{
			Global_1964840[iVar0] = __LIB_0__::getMinusOneOrNull();
		}
		iVar0++;
	}
}

int func_617(int iParam0)//Position - 0x4485D
{
	if (iParam0 == 1 && !__LIB_9__::func_23(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

bool func_618()//Position - 0x4487F
{
	return !BitTest(Local_133.f_0, 5);
}

void func_629(int iParam0)//Position - 0x44BD8
{
	if (Local_133.f_3 != iParam0)
	{
		Local_133.f_3 = iParam0;
	}
}

void func_630(int* iParam0)//Position - 0x44BEF
{
	iParam0->f_116 = 0;
	__LIB_0__::clearF_1Prop(&(iParam0->f_74.f_38));
	__LIB_9__::func_29(iParam0, 4, 1);
}

void func_631()//Position - 0x44C0E
{
	if (Local_133.f_3 >= 4)
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && __LIB_0__::func_336(PLAYER::PLAYER_PED_ID(), 0) == -1)
			{
				if (!NETWORK::NETWORK_IS_ENTITY_FADING(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
				{
					NETWORK::NETWORK_FADE_OUT_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false, true);
				}
			}
			if (!NETWORK::NETWORK_IS_ENTITY_FADING(PLAYER::PLAYER_PED_ID()))
			{
				NETWORK::NETWORK_FADE_OUT_ENTITY(PLAYER::PLAYER_PED_ID(), false, true);
			}
		}
	}
}

void func_632()//Position - 0x44C7B
{
	int iVar0;
	if (!BitTest(Local_133.f_0, 8))
	{
		if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && __LIB_0__::func_336(PLAYER::PLAYER_PED_ID(), 0) == -1)
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if (__LIB_0__::func_121(iVar0) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
				{
					AUDIO::SET_VEHICLE_RADIO_ENABLED(iVar0, true);
					AUDIO::LOCK_RADIO_STATION("RADIO_36_AUDIOPLAYER" /* GXT: Media Player */, false);
					AUDIO::SET_VEH_RADIO_STATION(iVar0, "RADIO_36_AUDIOPLAYER" /* GXT: Media Player */);
					AUDIO::UNLOCK_RADIO_STATION_TRACK_LIST("RADIO_36_AUDIOPLAYER" /* GXT: Media Player */, "TUNER_AP_MIX3_PARTD");
					AUDIO::FORCE_MUSIC_TRACK_LIST("RADIO_36_AUDIOPLAYER" /* GXT: Media Player */, "TUNER_AP_MIX3_PARTD", __LIB_9__::func_27());
					MISC::SET_BIT(&Local_133, 8);
				}
			}
		}
	}
}

void func_636()//Position - 0x44DB6
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	struct<3> Var3;
	if (!BitTest(Local_133.f_0, 0))
	{
		if (!Local_133.f_441)
		{
			func_4920();
			if (INTERIOR::IS_VALID_INTERIOR(Local_133.f_420) && INTERIOR::IS_INTERIOR_READY(Local_133.f_420))
			{
				bVar0 = true;
				if (bVar0)
				{
					if (__LIB_5__::func_203(PLAYER::PLAYER_ID()))
					{
						iVar1 = INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
						if (iVar1 == joaat("Main_RM"))
						{
							INTERIOR::FORCE_ROOM_FOR_ENTITY(PLAYER::PLAYER_PED_ID(), Local_133.f_420, iVar1);
						}
					}
					__LIB_6__::func_264();
					__LIB_6__::func_263(1);
					MISC::SET_BIT(&Local_133, 0);
					__LIB_0__::clearF_1Prop(&(Local_133.f_866));
				}
			}
			else
			{
				if (!__LIB_0__::func_864(&(Local_133.f_866)))
				{
					__LIB_6__::func_262(Local_133.f_420);
					__LIB_0__::func_795(&(Local_133.f_866), 0, 0);
				}
				if (__LIB_0__::func_937(&(Local_133.f_866), Local_133.f_868, 0))
				{
					__LIB_0__::clearF_1Prop(&(Local_133.f_866));
				}
			}
		}
		else
		{
			__LIB_6__::func_263(1);
			MISC::SET_BIT(&Local_133, 0);
		}
	}
	if (__LIB_6__::func_184() && BitTest(Local_133.f_0, 0))
	{
		bVar2 = true;
		if (!BitTest(Local_133.f_0, 1))
		{
			if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				return;
			}
			if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
			{
				Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			}
			else
			{
				return;
			}
			STREAMING::NEW_LOAD_SCENE_START_SPHERE(Var3, 25f, 0);
			MISC::SET_BIT(&Local_133, 1);
			bVar2 = false;
		}
		else if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
		{
			if (!STREAMING::IS_NEW_LOAD_SCENE_LOADED())
			{
				bVar2 = false;
			}
			else
			{
				func_642(Local_133.f_4, &(Local_133.f_425), &(Local_133.f_421), &(Local_133.f_424), 0);
				Local_133.f_420 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Local_133.f_421, &(Local_133.f_425));
				if (INTERIOR::IS_VALID_INTERIOR(Local_133.f_420) && INTERIOR::IS_INTERIOR_READY(Local_133.f_420))
				{
					STREAMING::NEW_LOAD_SCENE_STOP();
				}
			}
		}
		if (!__LIB_8__::func_360())
		{
			bVar2 = false;
			if (__LIB_0__::func_937(&(Local_133.f_445), Global_1579013, 0))
			{
				Global_1579009 = 1;
			}
		}
		if (!func_640())
		{
			bVar2 = false;
		}
		if (bVar2)
		{
			func_639(1);
			__LIB_6__::func_51(1);
			__LIB_6__::func_263(1);
			__LIB_6__::func_261();
			MISC::CLEAR_BIT(&(Global_1946250.f_8), 6);
			Global_1946250.f_515 = 1;
		}
	}
}

void func_639(int iParam0)//Position - 0x44FD9
{
	Local_133.f_2 = iParam0;
}

bool func_640()//Position - 0x44FE7
{
	return bLocal_130;
}

void func_642(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4)//Position - 0x44FFD
{
	struct<31> Var0;
	func_643(iParam0, &Var0, 1);
	Stack.Push(iParam0);
	Stack.Push(uParam1);
	Stack.Push(uParam2);
	Stack.Push(uParam3);
	Stack.Push(iParam4);
	Call_Loc(Var0.f_30);
}

void func_643(int iParam0, var uParam1, int iParam2)//Position - 0x4501D
{
	func_4911(uParam1, iParam2);
	func_4905(uParam1, iParam2);
	func_4898(uParam1, iParam2);
	func_644(__LIB_0__::func_172(iParam0), uParam1, iParam2);
}

void func_644(int iParam0, var uParam1, int iParam2)//Position - 0x4504B
{
	switch (iParam0)
	{
		case 0:
			func_4825(uParam1, iParam2);
			break;
		case 1:
			func_4692(uParam1, iParam2);
			break;
		case 2:
			func_4615(uParam1, iParam2);
			break;
		case 3:
			func_4537(uParam1, iParam2);
			break;
		case 4:
			func_4364(uParam1, iParam2);
			break;
		case 5:
			func_4198(uParam1, iParam2);
			break;
		case 6:
			func_4133(uParam1, iParam2);
			break;
		case 7:
			func_3965(uParam1, iParam2);
			break;
		case 8:
			func_3796(uParam1, iParam2);
			break;
		case 9:
			func_3555(uParam1, iParam2);
			break;
		case 10:
			func_3477(uParam1, iParam2);
			break;
		case 11:
			func_3246(uParam1, iParam2);
			break;
		case 12:
			func_3100(uParam1, iParam2);
			break;
		case 13:
			func_2932(uParam1, iParam2);
			break;
		case 14:
			func_2766(uParam1, iParam2);
			break;
		case 15:
			func_2587(uParam1, iParam2);
			break;
		case 16:
			func_2477(uParam1, iParam2);
			break;
		case 17:
			func_2226(uParam1, iParam2);
			break;
		case 18:
			func_2132(uParam1, iParam2);
			break;
		case 19:
			func_2008(uParam1, iParam2);
			break;
		case 20:
			func_1583(uParam1, iParam2);
			break;
		case 21:
			func_1461(uParam1, iParam2);
			break;
		case 22:
			func_1291(uParam1, iParam2);
			break;
		case 23:
			func_1108(uParam1, iParam2);
			break;
		case 24:
			func_645(uParam1, iParam2);
			break;
	}
}

void func_645(var uParam0, int iParam1)//Position - 0x45203
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 402455/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 402441/*__LIB_5__::func_448*/;
			break;
		case 1:
			uParam0->f_30 = 402345/*__LIB_5__::func_447*/;
			break;
		case 2:
			uParam0->f_31 = 401002/*__LIB_5__::func_446*/;
			break;
		case 3:
			uParam0->f_34 = 400773/*__LIB_3__::func_732*/;
			break;
		case 4:
			uParam0->f_12 = 400761/*__LIB_3__::func_731*/;
			break;
		case 5:
			uParam0->f_11 = 400751/*__LIB_3__::func_730*/;
			break;
		case 37:
			uParam0->f_18 = 400563/*__LIB_5__::func_200*/;
			break;
		case 38:
			uParam0->f_9 = 400516/*__LIB_7__::func_731*/;
			break;
		case 42:
			uParam0->f_10 = 400488/*__LIB_7__::func_730*/;
			break;
		case 6:
			uParam0->f_32 = 400179/*__LIB_4__::func_915*/;
			break;
		case 11:
			uParam0->f_11 = 400170/*__LIB_3__::func_729*/;
			break;
		case 12:
			uParam0->f_33 = 397502/*__LIB_9__::func_524*/;
			break;
		case 14:
			uParam0->f_11 = 397493/*__LIB_0__::func_114*/;
			break;
		case 109:
			uParam0->f_56 = 390909/*__LIB_9__::func_299*/;
			break;
		case 8:
			uParam0->f_37 = 390034/*__LIB_3__::func_724*/;
			break;
		case 7:
			uParam0->f_36 = 389917/*__LIB_3__::func_723*/;
			break;
		case 79:
			*uParam0 = 389861/*__LIB_5__::func_265*/;
			break;
		case 9:
			uParam0->f_29 = 389708/*__LIB_5__::func_445*/;
			break;
		case 10:
			uParam0->f_27 = 389564/*__LIB_5__::func_444*/;
			break;
		case 13:
			uParam0->f_2 = 389482/*__LIB_9__::func_783*/;
			break;
		case 15:
			uParam0->f_2 = 387723/*__LIB_9__::func_814*/;
			break;
		case 16:
			uParam0->f_5 = 386538/*__LIB_9__::func_976*/;
			break;
		case 108:
			uParam0->f_55 = 342880/*__LIB_10__::func_76*/;
			break;
		case 17:
			uParam0->f_17 = 341154/*__LIB_9__::func_260*/;
			break;
		case 19:
			uParam0->f_17 = 341016/*__LIB_6__::func_30*/;
			break;
		case 18:
			uParam0->f_8 = 340991/*__LIB_3__::func_688*/;
			break;
		case 20:
			uParam0->f_3 = 340771/*__LIB_6__::func_934*/;
			break;
		case 21:
			uParam0->f_3 = 339330/*__LIB_9__::func_313*/;
			break;
		case 74:
			uParam0->f_53 = 339140/*__LIB_5__::func_209*/;
			break;
		case 75:
			uParam0->f_4 = 337805/*__LIB_5__::func_711*/;
			break;
		case 22:
			uParam0->f_24 = 337703/*__LIB_5__::func_432*/;
			break;
		case 23:
			uParam0->f_26 = 337660/*__LIB_3__::func_683*/;
			break;
		case 24:
			uParam0->f_26 = 337626/*__LIB_3__::func_682*/;
			break;
		case 26:
			uParam0->f_38 = 337618/*__LIB_0__::func_467*/;
			break;
		case 25:
			uParam0->f_23 = 334702/*func_841*/;
			break;
		case 27:
			uParam0->f_25 = 334694/*__LIB_0__::func_467*/;
			break;
		case 28:
			uParam0->f_24 = 334686/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 334536/*__LIB_5__::func_710*/;
			break;
		case 31:
			uParam0->f_39 = 334317/*__LIB_5__::func_709*/;
			break;
		case 33:
			uParam0->f_40 = 333432/*__LIB_7__::func_49*/;
			break;
		case 32:
			*uParam0 = 333377/*__LIB_6__::func_932*/;
			break;
		case 76:
			uParam0->f_13 = 333366/*__LIB_3__::func_554*/;
			break;
		case 34:
			uParam0->f_41 = 329614/*__LIB_6__::func_931*/;
			break;
		case 36:
			uParam0->f_58 = 329569/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 308565/*__LIB_5__::func_946*/;
			break;
		case 45:
			uParam0->f_14 = 308556/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 308547/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 308539/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 308516/*__LIB_3__::func_665*/;
			break;
		case 82:
			uParam0->f_19 = 308503/*__LIB_5__::func_267*/;
			break;
		case 47:
			uParam0->f_43 = 308371/*__LIB_4__::func_910*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 307229/*__LIB_6__::func_930*/;
			break;
		case 49:
			uParam0->f_8 = 307211/*__LIB_3__::func_658*/;
			break;
		case 50:
			*uParam0 = 306932/*__LIB_6__::func_929*/;
			break;
		case 51:
			*uParam0 = 306830/*__LIB_5__::func_707*/;
			break;
		case 52:
			uParam0->f_15 = 306819/*__LIB_3__::func_657*/;
			break;
		case 53:
			uParam0->f_13 = 306693/*func_798*/;
			break;
		case 54:
			uParam0->f_45 = 306306/*func_797*/;
			break;
		case 56:
			uParam0->f_46 = 306287/*__LIB_3__::func_656*/;
			break;
		case 57:
			uParam0->f_11 = 305117/*__LIB_7__::func_48*/;
			break;
		case 58:
			uParam0->f_13 = 304991/*__LIB_3__::func_655*/;
			break;
		case 59:
			*uParam0 = 303498/*__LIB_7__::func_868*/;
			break;
		case 60:
			*uParam0 = 303489/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 303478/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 303352/*__LIB_3__::func_646*/;
			break;
		case 55:
			uParam0->f_45 = 303344/*__LIB_0__::func_467*/;
			break;
		case 63:
			uParam0->f_11 = 303330/*__LIB_7__::func_867*/;
			break;
		case 64:
			uParam0->f_47 = 303322/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 301810/*__LIB_7__::func_47*/;
			break;
		case 66:
			uParam0->f_21 = 301124/*__LIB_5__::func_422*/;
			break;
		case 67:
			uParam0->f_21 = 300984/*__LIB_5__::func_216*/;
			break;
		case 68:
			*uParam0 = 299779/*__LIB_7__::func_773*/;
			break;
		case 69:
			*uParam0 = 299770/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 299758/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 299749/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 299737/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 299255/*__LIB_5__::func_945*/;
			break;
		case 84:
			uParam0->f_1 = 299246/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 298030/*func_736*/;
			break;
		case 87:
			uParam0->f_1 = 295761/*__LIB_6__::func_439*/;
			break;
		case 88:
			uParam0->f_1 = 295752/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 295744/*__LIB_0__::func_467*/;
			break;
		case 90:
			uParam0->f_1 = 294864/*__LIB_7__::func_0*/;
			break;
		case 91:
			uParam0->f_1 = 294830/*__LIB_3__::func_614*/;
			break;
		case 92:
			uParam0->f_1 = 293186/*__LIB_7__::func_864*/;
			break;
		case 94:
			uParam0->f_1 = 291175/*__LIB_7__::func_875*/;
			break;
		case 95:
			uParam0->f_22 = 291088/*__LIB_7__::func_883*/;
			break;
		case 96:
			uParam0->f_1 = 291079/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 291070/*__LIB_0__::func_109*/;
			break;
		case 98:
			uParam0->f_1 = 291061/*__LIB_0__::func_109*/;
			break;
		case 100:
			uParam0->f_22 = 291053/*__LIB_0__::func_467*/;
			break;
		case 101:
			uParam0->f_22 = 291045/*__LIB_0__::func_467*/;
			break;
		case 112:
			uParam0->f_13 = 290931/*__LIB_3__::func_606*/;
			break;
		case 113:
			uParam0->f_3 = 290777/*__LIB_5__::func_701*/;
			break;
		case 114:
			uParam0->f_16 = 290109/*__LIB_3__::func_605*/;
			break;
		case 115:
			uParam0->f_3 = 290100/*__LIB_0__::func_114*/;
			break;
		case 116:
			*uParam0 = 290091/*__LIB_0__::func_114*/;
			break;
		case 117:
			uParam0->f_16 = 285675/*__LIB_3__::func_604*/;
			break;
		case 118:
			uParam0->f_11 = 285666/*__LIB_3__::func_603*/;
			break;
		case 119:
			uParam0->f_27 = 285539/*__LIB_7__::func_44*/;
			break;
		case 120:
			uParam0->f_19 = 285484/*__LIB_5__::func_700*/;
			break;
		case 78:
			uParam0->f_59 = 284951/*__LIB_7__::func_828*/;
			break;
		case 124:
			uParam0->f_1 = 284942/*__LIB_0__::func_109*/;
			break;
		case 125:
			uParam0->f_19 = 284934/*__LIB_0__::func_467*/;
			break;
	}
}

int func_736(int iParam0, var uParam1)//Position - 0x48C2E
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
			func_425(&iVar0, &(uParam1->f_109), 60);
			__LIB_3__::func_633(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_427(&iVar0, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 1, 0, 1))
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

void func_797(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0x4AC82
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
Vector3 func_798(int iParam0)//Position - 0x4AE05
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

void func_841(int iParam0, int iParam1)//Position - 0x51B6E
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
		func_852(iParam0, Var3, &bVar0, &bVar1, 1, 0);
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

void func_852(int iParam0, struct<3> Param1, int iParam2, int iParam3, bool bParam4, bool bParam5)//Position - 0x521CC
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
								if (((((((((!__LIB_1__::func_907(iVar5, 1) && !__LIB_5__::func_424(iVar5)) && !PED::IS_PED_IN_ANY_VEHICLE(iVar6, true)) && !__LIB_1__::func_101(iVar6)) && !__LIB_4__::func_972(iVar5)) && !__LIB_4__::func_976(iVar5, 1)) && !((__LIB_2__::func_72(iVar5, 1) && !__LIB_3__::func_360(iVar2, iVar5)) && __LIB_0__::func_509() != 0)) && !func_853(iVar5)) && !__LIB_3__::func_171(iVar5)) && !bVar8)
								{
									*iParam2 = 1;
								}
							}
						}
						if ((((((((((!*iParam3 && __LIB_3__::func_360(PLAYER::PLAYER_ID(), iVar5)) && !__LIB_5__::func_424(iVar5)) && !PED::IS_PED_IN_ANY_VEHICLE(iVar6, true)) && !__LIB_1__::func_101(iVar6)) && !__LIB_4__::func_972(iVar5)) && !__LIB_4__::func_976(iVar5, 1)) && __LIB_1__::func_744(PLAYER::PLAYER_ID())) && !func_853(iVar5)) && !__LIB_3__::func_171(iVar5)) && !bVar8)
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
int func_853(bool bParam0)//Position - 0x52407
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

void func_1108(var uParam0, int iParam1)//Position - 0x62420
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 451467/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 451458/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 1:
			uParam0->f_30 = 451379/*__LIB_5__::func_466*/;
			break;
		case 2:
			uParam0->f_31 = 450743/*__LIB_5__::func_715*/;
			break;
		case 3:
			uParam0->f_34 = 450477/*__LIB_3__::func_797*/;
			break;
		case 4:
			uParam0->f_12 = 450465/*__LIB_3__::func_796*/;
			break;
		case 6:
			uParam0->f_32 = 450366/*__LIB_4__::func_918*/;
			break;
		case 37:
			uParam0->f_18 = 450236/*__LIB_3__::func_795*/;
			break;
		case 38:
			uParam0->f_9 = 450189/*__LIB_6__::func_866*/;
			break;
		case 39:
			uParam0->f_11 = 450154/*__LIB_7__::func_734*/;
			break;
		case 41:
			uParam0->f_20 = 450065/*__LIB_9__::func_300*/;
			break;
		case 42:
			uParam0->f_10 = 450037/*__LIB_6__::func_865*/;
			break;
		case 11:
			uParam0->f_11 = 450027/*__LIB_3__::func_793*/;
			break;
		case 12:
			uParam0->f_33 = 447876/*__LIB_5__::func_856*/;
			break;
		case 14:
			uParam0->f_11 = 447867/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 109:
			uParam0->f_56 = 445342/*__LIB_5__::func_465*/;
			break;
		case 8:
			uParam0->f_37 = 445334/*__LIB_0__::func_467*/;
			break;
		case 7:
			uParam0->f_36 = 445325/*__LIB_0__::func_114*/;
			break;
		case 79:
			*uParam0 = 445316/*__LIB_0__::func_114*/;
			break;
		case 13:
			uParam0->f_2 = 445254/*__LIB_9__::func_783*/;
			break;
		case 15:
			uParam0->f_2 = 445173/*__LIB_9__::func_784*/;
			break;
		case 16:
			uParam0->f_5 = 444820/*__LIB_6__::func_940*/;
			break;
		case 108:
			uParam0->f_55 = 440385/*__LIB_10__::func_67*/;
			break;
		case 17:
			uParam0->f_17 = 439245/*__LIB_9__::func_261*/;
			break;
		case 19:
			uParam0->f_17 = 439220/*__LIB_5__::func_953*/;
			break;
		case 20:
			uParam0->f_3 = 439211/*__LIB_0__::func_109*/;
			break;
		case 21:
			uParam0->f_3 = 439080/*__LIB_6__::func_939*/;
			break;
		case 74:
			uParam0->f_53 = 438976/*__LIB_5__::func_209*/;
			break;
		case 75:
			uParam0->f_4 = 438960/*__LIB_5__::func_464*/;
			break;
		case 22:
			uParam0->f_24 = 438810/*__LIB_5__::func_463*/;
			break;
		case 23:
			uParam0->f_26 = 438802/*__LIB_0__::func_467*/;
			break;
		case 26:
			uParam0->f_38 = 437012/*func_1217*/;
			break;
		case 25:
			uParam0->f_23 = 435963/*func_1213*/;
			break;
		case 27:
			uParam0->f_25 = 435850/*__LIB_5__::func_854*/;
			break;
		case 28:
			uParam0->f_24 = 435812/*__LIB_3__::func_777*/;
			break;
		case 29:
			uParam0->f_28 = 435789/*__LIB_6__::func_864*/;
			break;
		case 30:
			uParam0->f_8 = 435687/*__LIB_5__::func_714*/;
			break;
		case 31:
			uParam0->f_39 = 435659/*__LIB_3__::func_775*/;
			break;
		case 43:
			uParam0->f_8 = 435545/*__LIB_5__::func_205*/;
			break;
		case 33:
			uParam0->f_40 = 435427/*__LIB_6__::func_863*/;
			break;
		case 76:
			uParam0->f_13 = 435378/*__LIB_4__::func_917*/;
			break;
		case 34:
			uParam0->f_41 = 426540/*__LIB_5__::func_459*/;
			break;
		case 36:
			uParam0->f_58 = 426492/*__LIB_3__::func_774*/;
			break;
		case 35:
			uParam0->f_42 = 415401/*__LIB_6__::func_415*/;
			break;
		case 45:
			uParam0->f_14 = 415392/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 415383/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 415375/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 415364/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 415247/*__LIB_4__::func_916*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 414670/*__LIB_8__::func_920*/;
			break;
		case 49:
			uParam0->f_8 = 414661/*__LIB_0__::func_114*/;
			break;
		case 50:
			*uParam0 = 414492/*__LIB_6__::func_937*/;
			break;
		case 51:
			*uParam0 = 414483/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 414472/*__LIB_3__::func_766*/;
			break;
		case 53:
			uParam0->f_13 = 414449/*__LIB_3__::func_765*/;
			break;
		case 54:
			uParam0->f_45 = 414401/*__LIB_3__::func_764*/;
			break;
		case 56:
			uParam0->f_46 = 414383/*__LIB_3__::func_763*/;
			break;
		case 57:
			uParam0->f_11 = 414341/*__LIB_5__::func_456*/;
			break;
		case 58:
			uParam0->f_13 = 414299/*__LIB_3__::func_761*/;
			break;
		case 59:
			*uParam0 = 414238/*__LIB_7__::func_779*/;
			break;
		case 60:
			*uParam0 = 414229/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 414218/*__LIB_3__::func_760*/;
			break;
		case 62:
			uParam0->f_13 = 414195/*__LIB_3__::func_759*/;
			break;
		case 63:
			uParam0->f_11 = 414186/*__LIB_1__::func_804*/;
			break;
		case 55:
			uParam0->f_45 = 414145/*__LIB_3__::func_758*/;
			break;
		case 64:
			uParam0->f_47 = 414137/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 414129/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 413858/*__LIB_5__::func_455*/;
			break;
		case 67:
			uParam0->f_21 = 413788/*__LIB_3__::func_757*/;
			break;
		case 68:
			*uParam0 = 413153/*__LIB_5__::func_454*/;
			break;
		case 69:
			*uParam0 = 413144/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 413132/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 412912/*__LIB_3__::func_756*/;
			break;
		case 107:
			uParam0->f_50 = 412900/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 412414/*__LIB_7__::func_732*/;
			break;
		case 84:
			uParam0->f_1 = 412299/*__LIB_5__::func_874*/;
			break;
		case 85:
			uParam0->f_1 = 411396/*func_1151*/;
			break;
		case 87:
			uParam0->f_1 = 408766/*__LIB_6__::func_414*/;
			break;
		case 88:
			uParam0->f_1 = 408757/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 408749/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 408740/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 408731/*__LIB_0__::func_109*/;
			break;
		case 98:
			uParam0->f_1 = 408722/*__LIB_0__::func_109*/;
			break;
		case 100:
			uParam0->f_22 = 408714/*__LIB_0__::func_467*/;
			break;
		case 101:
			uParam0->f_22 = 408706/*__LIB_0__::func_467*/;
			break;
		case 112:
			uParam0->f_13 = 408671/*__LIB_5__::func_214*/;
			break;
		case 113:
			uParam0->f_3 = 408662/*__LIB_0__::func_114*/;
			break;
		case 114:
			uParam0->f_16 = 406724/*__LIB_5__::func_451*/;
			break;
		case 115:
			uParam0->f_3 = 406715/*__LIB_0__::func_114*/;
			break;
		case 116:
			*uParam0 = 406706/*__LIB_0__::func_114*/;
			break;
		case 117:
			uParam0->f_16 = 405486/*__LIB_3__::func_744*/;
			break;
		case 121:
			*uParam0 = 405404/*__LIB_3__::func_743*/;
			break;
		case 122:
			*uParam0 = 405387/*__LIB_3__::func_742*/;
			break;
		case 123:
			uParam0->f_19 = 405355/*__LIB_5__::func_450*/;
			break;
		case 78:
			uParam0->f_59 = 404139/*__LIB_9__::func_323*/;
			break;
		case 124:
			uParam0->f_1 = 404130/*__LIB_0__::func_109*/;
			break;
		case 125:
			uParam0->f_19 = 404122/*__LIB_0__::func_467*/;
			break;
	}
}

int func_1151(int iParam0, var uParam1)//Position - 0x64704
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
			func_425(&iVar1, &(uParam1->f_109), 60);
			__LIB_3__::func_633(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_427(&iVar1, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 1, 0, 1))
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

void func_1213(int iParam0, int iParam1)//Position - 0x6A6FB
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
	func_852(iParam0, Var5, &bVar0, &bVar1, 1, 0);
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

void func_1217(var uParam0, var uParam1)//Position - 0x6AB14
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
			func_1218(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_1218(var uParam0, var uParam1)//Position - 0x6AB6A
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
	func_852(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &bVar0, &bVar1, 1, 0);
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

void func_1291(var uParam0, int iParam1)//Position - 0x6E394
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 491799/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 491785/*__LIB_5__::func_475*/;
			break;
		case 1:
			uParam0->f_30 = 491694/*__LIB_5__::func_474*/;
			break;
		case 2:
			uParam0->f_31 = 491474/*__LIB_5__::func_473*/;
			break;
		case 3:
			uParam0->f_34 = 491317/*__LIB_3__::func_841*/;
			break;
		case 4:
			uParam0->f_12 = 491305/*__LIB_3__::func_840*/;
			break;
		case 5:
			uParam0->f_11 = 491295/*__LIB_3__::func_839*/;
			break;
		case 37:
			uParam0->f_18 = 491181/*__LIB_3__::func_838*/;
			break;
		case 38:
			uParam0->f_9 = 491134/*__LIB_6__::func_381*/;
			break;
		case 42:
			uParam0->f_10 = 491106/*__LIB_6__::func_380*/;
			break;
		case 6:
			uParam0->f_32 = 491018/*__LIB_3__::func_837*/;
			break;
		case 11:
			uParam0->f_11 = 491009/*__LIB_3__::func_603*/;
			break;
		case 12:
			uParam0->f_33 = 489264/*__LIB_9__::func_499*/;
			break;
		case 14:
			uParam0->f_11 = 489255/*__LIB_0__::func_114*/;
			break;
		case 109:
			uParam0->f_56 = 485222/*func_1437*/;
			break;
		case 8:
			uParam0->f_37 = 484745/*__LIB_3__::func_835*/;
			break;
		case 7:
			uParam0->f_36 = 484651/*__LIB_3__::func_834*/;
			break;
		case 79:
			*uParam0 = 484642/*__LIB_0__::func_114*/;
			break;
		case 13:
			uParam0->f_2 = 484580/*__LIB_9__::func_783*/;
			break;
		case 15:
			uParam0->f_2 = 484499/*__LIB_9__::func_785*/;
			break;
		case 16:
			uParam0->f_5 = 483601/*__LIB_9__::func_264*/;
			break;
		case 108:
			uParam0->f_55 = 480322/*__LIB_10__::func_68*/;
			break;
		case 17:
			uParam0->f_17 = 479080/*__LIB_9__::func_263*/;
			break;
		case 19:
			uParam0->f_17 = 479055/*__LIB_5__::func_954*/;
			break;
		case 20:
			uParam0->f_3 = 478841/*__LIB_6__::func_944*/;
			break;
		case 21:
			uParam0->f_3 = 478777/*__LIB_6__::func_867*/;
			break;
		case 74:
			uParam0->f_53 = 478673/*__LIB_5__::func_209*/;
			break;
		case 75:
			uParam0->f_4 = 478657/*__LIB_5__::func_472*/;
			break;
		case 22:
			uParam0->f_24 = 478555/*__LIB_5__::func_471*/;
			break;
		case 23:
			uParam0->f_26 = 478547/*__LIB_0__::func_467*/;
			break;
		case 26:
			uParam0->f_38 = 474574/*func_1389*/;
			break;
		case 25:
			uParam0->f_23 = 474124/*func_1386*/;
			break;
		case 27:
			uParam0->f_25 = 474116/*__LIB_0__::func_467*/;
			break;
		case 28:
			uParam0->f_24 = 474108/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 473471/*__LIB_6__::func_942*/;
			break;
		case 31:
			uParam0->f_39 = 473341/*__LIB_5__::func_217*/;
			break;
		case 33:
			uParam0->f_40 = 472467/*__LIB_7__::func_8*/;
			break;
		case 32:
			*uParam0 = 472264/*__LIB_7__::func_7*/;
			break;
		case 76:
			uParam0->f_13 = 472111/*__LIB_3__::func_821*/;
			break;
		case 34:
			uParam0->f_41 = 470499/*__LIB_5__::func_469*/;
			break;
		case 36:
			uParam0->f_58 = 470454/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 461417/*__LIB_5__::func_468*/;
			break;
		case 45:
			uParam0->f_14 = 461408/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 461399/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 461391/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 461368/*__LIB_3__::func_815*/;
			break;
		case 47:
			uParam0->f_43 = 461319/*__LIB_3__::func_814*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 461182/*__LIB_5__::func_859*/;
			break;
		case 49:
			uParam0->f_8 = 461164/*__LIB_3__::func_658*/;
			break;
		case 50:
			*uParam0 = 460332/*__LIB_7__::func_835*/;
			break;
		case 51:
			*uParam0 = 460230/*__LIB_5__::func_716*/;
			break;
		case 52:
			uParam0->f_15 = 460219/*__LIB_3__::func_811*/;
			break;
		case 53:
			uParam0->f_13 = 460066/*func_1341*/;
			break;
		case 54:
			uParam0->f_45 = 459833/*func_1340*/;
			break;
		case 56:
			uParam0->f_46 = 459824/*__LIB_3__::func_729*/;
			break;
		case 57:
			uParam0->f_11 = 459464/*__LIB_7__::func_6*/;
			break;
		case 58:
			uParam0->f_13 = 459311/*__LIB_3__::func_808*/;
			break;
		case 59:
			*uParam0 = 459302/*__LIB_0__::func_114*/;
			break;
		case 60:
			*uParam0 = 459293/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 459282/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 459271/*__LIB_3__::func_554*/;
			break;
		case 63:
			uParam0->f_11 = 459262/*__LIB_1__::func_804*/;
			break;
		case 64:
			uParam0->f_47 = 459254/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 458196/*__LIB_7__::func_51*/;
			break;
		case 66:
			uParam0->f_21 = 457976/*__LIB_3__::func_807*/;
			break;
		case 67:
			uParam0->f_21 = 457901/*__LIB_5__::func_216*/;
			break;
		case 68:
			*uParam0 = 457212/*__LIB_5__::func_215*/;
			break;
		case 69:
			*uParam0 = 457203/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 457191/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 457099/*__LIB_3__::func_806*/;
			break;
		case 107:
			uParam0->f_50 = 457087/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 456720/*__LIB_5__::func_858*/;
			break;
		case 84:
			uParam0->f_1 = 456711/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 455919/*func_1315*/;
			break;
		case 87:
			uParam0->f_1 = 454541/*__LIB_6__::func_416*/;
			break;
		case 88:
			uParam0->f_1 = 454532/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 454524/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 454515/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 454506/*__LIB_0__::func_109*/;
			break;
		case 98:
			uParam0->f_1 = 454497/*__LIB_0__::func_109*/;
			break;
		case 100:
			uParam0->f_22 = 454489/*__LIB_0__::func_467*/;
			break;
		case 101:
			uParam0->f_22 = 454481/*__LIB_0__::func_467*/;
			break;
		case 112:
			uParam0->f_13 = 454469/*__LIB_5__::func_214*/;
			break;
		case 113:
			uParam0->f_3 = 454460/*__LIB_0__::func_114*/;
			break;
		case 114:
			uParam0->f_16 = 406724/*__LIB_5__::func_451*/;
			break;
		case 115:
			uParam0->f_3 = 454451/*__LIB_0__::func_114*/;
			break;
		case 116:
			*uParam0 = 454442/*__LIB_0__::func_114*/;
			break;
		case 117:
			uParam0->f_16 = 453222/*__LIB_3__::func_800*/;
			break;
		case 78:
			uParam0->f_59 = 453050/*__LIB_7__::func_783*/;
			break;
		case 124:
			uParam0->f_1 = 453041/*__LIB_0__::func_109*/;
			break;
		case 125:
			uParam0->f_19 = 453033/*__LIB_0__::func_467*/;
			break;
	}
}

int func_1315(int iParam0, var uParam1)//Position - 0x6F4EF
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
			func_425(&iVar0, &(uParam1->f_109), 60);
			__LIB_3__::func_633(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_427(&iVar0, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 1, 0, 1))
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

void func_1340(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0x70439
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
Vector3 func_1341(int iParam0)//Position - 0x70522
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

void func_1386(int iParam0, int iParam1)//Position - 0x73C0C
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
		func_852(iParam0, Var2, &bVar0, &bVar1, 1, 0);
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

void func_1389(var uParam0, var uParam1)//Position - 0x73DCE
{
	if (__LIB_3__::func_616() == 2 || __LIB_3__::func_616() == 1)
	{
		func_1392(uParam0, uParam1);
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

void func_1392(var uParam0, var uParam1)//Position - 0x73EAD
{
	int iVar0;
	iVar0 = __LIB_3__::func_785();
	switch (iVar0)
	{
		case 0:
			__LIB_9__::func_262(uParam0, uParam1);
			break;
		case 1:
			func_1404(uParam0, uParam1);
			break;
		case 2:
			__LIB_9__::func_301(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_1404(var uParam0, var uParam1)//Position - 0x74A84
{
	var uVar0;
	var uVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_852(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &uVar0, &uVar1, 1, 0);
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

void func_1437(int iParam0, var uParam1, int iParam2)//Position - 0x76766
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
				func_852(iParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &uVar0, &uVar1, 1, 0);
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

void func_1461(var uParam0, int iParam1)//Position - 0x78120
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 508175/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 508166/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 1:
			uParam0->f_30 = 508099/*__LIB_5__::func_484*/;
			break;
		case 2:
			uParam0->f_31 = 507658/*__LIB_5__::func_861*/;
			break;
		case 3:
			uParam0->f_34 = 507510/*__LIB_3__::func_867*/;
			break;
		case 4:
			uParam0->f_12 = 507498/*__LIB_3__::func_866*/;
			break;
		case 37:
			uParam0->f_18 = 507284/*__LIB_5__::func_230*/;
			break;
		case 38:
			uParam0->f_9 = 507195/*__LIB_6__::func_870*/;
			break;
		case 39:
			uParam0->f_11 = 507175/*__LIB_5__::func_229*/;
			break;
		case 40:
			uParam0->f_6 = 507070/*__LIB_6__::func_869*/;
			break;
		case 41:
			uParam0->f_20 = 507045/*__LIB_5__::func_228*/;
			break;
		case 42:
			uParam0->f_10 = 507032/*__LIB_3__::func_865*/;
			break;
		case 6:
			uParam0->f_32 = 506968/*__LIB_3__::func_864*/;
			break;
		case 11:
			uParam0->f_11 = 506959/*__LIB_3__::func_603*/;
			break;
		case 12:
			uParam0->f_33 = 506422/*__LIB_5__::func_483*/;
			break;
		case 14:
			uParam0->f_11 = 506413/*__LIB_0__::func_114*/;
			break;
		case 109:
			uParam0->f_56 = 505491/*__LIB_5__::func_482*/;
			break;
		case 8:
			uParam0->f_37 = 505483/*__LIB_0__::func_467*/;
			break;
		case 7:
			uParam0->f_36 = 505474/*__LIB_0__::func_114*/;
			break;
		case 79:
			*uParam0 = 505465/*__LIB_0__::func_114*/;
			break;
		case 13:
			uParam0->f_2 = 505403/*__LIB_9__::func_783*/;
			break;
		case 15:
			uParam0->f_2 = 505322/*__LIB_9__::func_786*/;
			break;
		case 16:
			uParam0->f_5 = 504995/*__LIB_9__::func_302*/;
			break;
		case 108:
			uParam0->f_55 = 504986/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 504975/*__LIB_3__::func_860*/;
			break;
		case 19:
			uParam0->f_17 = 504964/*__LIB_3__::func_860*/;
			break;
		case 18:
			uParam0->f_8 = 504922/*__LIB_6__::func_382*/;
			break;
		case 20:
			uParam0->f_3 = 504913/*__LIB_0__::func_109*/;
			break;
		case 21:
			uParam0->f_3 = 504865/*__LIB_5__::func_227*/;
			break;
		case 74:
			uParam0->f_53 = 504710/*__LIB_5__::func_284*/;
			break;
		case 75:
			uParam0->f_4 = 504701/*__LIB_0__::func_114*/;
			break;
		case 22:
			uParam0->f_24 = 504599/*__LIB_5__::func_481*/;
			break;
		case 23:
			uParam0->f_26 = 504591/*__LIB_0__::func_467*/;
			break;
		case 25:
			uParam0->f_23 = 504164/*func_1538*/;
			break;
		case 27:
			uParam0->f_25 = 504156/*__LIB_0__::func_467*/;
			break;
		case 28:
			uParam0->f_24 = 504148/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 504113/*__LIB_5__::func_226*/;
			break;
		case 31:
			uParam0->f_39 = 504085/*__LIB_3__::func_775*/;
			break;
		case 33:
			uParam0->f_40 = 503918/*__LIB_6__::func_868*/;
			break;
		case 76:
			uParam0->f_13 = 503895/*__LIB_3__::func_849*/;
			break;
		case 34:
			uParam0->f_41 = 500281/*__LIB_5__::func_480*/;
			break;
		case 36:
			uParam0->f_58 = 500236/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 497042/*__LIB_5__::func_955*/;
			break;
		case 45:
			uParam0->f_14 = 497033/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 497024/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 497016/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 497005/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 496843/*__LIB_5__::func_478*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 495571/*func_1511*/;
			break;
		case 49:
			uParam0->f_8 = 495562/*__LIB_0__::func_114*/;
			break;
		case 50:
			*uParam0 = 495137/*__LIB_7__::func_869*/;
			break;
		case 51:
			*uParam0 = 495128/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 495117/*__LIB_3__::func_850*/;
			break;
		case 53:
			uParam0->f_13 = 495094/*__LIB_3__::func_849*/;
			break;
		case 54:
			uParam0->f_45 = 495086/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 495077/*__LIB_3__::func_729*/;
			break;
		case 57:
			uParam0->f_11 = 495064/*__LIB_3__::func_848*/;
			break;
		case 58:
			uParam0->f_13 = 495022/*__LIB_3__::func_847*/;
			break;
		case 59:
			*uParam0 = 495013/*__LIB_0__::func_114*/;
			break;
		case 60:
			*uParam0 = 495004/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 494993/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 494982/*__LIB_3__::func_554*/;
			break;
		case 63:
			uParam0->f_11 = 494973/*__LIB_1__::func_804*/;
			break;
		case 64:
			uParam0->f_47 = 494965/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 494957/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 494344/*__LIB_5__::func_476*/;
			break;
		case 67:
			uParam0->f_21 = 494274/*__LIB_3__::func_757*/;
			break;
		case 68:
			*uParam0 = 493585/*__LIB_5__::func_215*/;
			break;
		case 69:
			*uParam0 = 493576/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 493564/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 493555/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 493543/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 493534/*__LIB_0__::func_114*/;
			break;
		case 84:
			uParam0->f_1 = 493525/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 493516/*__LIB_0__::func_109*/;
			break;
		case 87:
			uParam0->f_1 = 493507/*__LIB_0__::func_109*/;
			break;
		case 88:
			uParam0->f_1 = 493498/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 493490/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 493481/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 493472/*__LIB_0__::func_109*/;
			break;
		case 98:
			uParam0->f_1 = 493463/*__LIB_0__::func_109*/;
			break;
		case 100:
			uParam0->f_22 = 493455/*__LIB_0__::func_467*/;
			break;
		case 101:
			uParam0->f_22 = 493447/*__LIB_0__::func_467*/;
			break;
		case 112:
			uParam0->f_13 = 493435/*__LIB_5__::func_214*/;
			break;
		case 113:
			uParam0->f_3 = 493426/*__LIB_0__::func_114*/;
			break;
		case 114:
			uParam0->f_16 = 406724/*__LIB_5__::func_451*/;
			break;
		case 115:
			uParam0->f_3 = 493417/*__LIB_0__::func_114*/;
			break;
		case 116:
			*uParam0 = 493408/*__LIB_0__::func_114*/;
			break;
		case 117:
			uParam0->f_16 = 453222/*__LIB_3__::func_800*/;
			break;
		case 78:
			uParam0->f_59 = 493400/*__LIB_0__::func_467*/;
			break;
		case 124:
			uParam0->f_1 = 493391/*__LIB_0__::func_109*/;
			break;
		case 125:
			uParam0->f_19 = 493383/*__LIB_0__::func_467*/;
			break;
	}
}

void func_1511(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0x78FD3
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
			func_852(iParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &bVar1, &bVar2, 1, 1);
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

void func_1538(int iParam0, int iParam1)//Position - 0x7B164
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	int iVar3;
	if (__LIB_0__::func_109(PLAYER::PLAYER_ID(), iParam0))
	{
		iVar3 = __LIB_3__::func_616();
		Var2 = { __LIB_3__::func_859(iParam0, iVar3) };
		func_852(iParam0, Var2, &bVar0, &bVar1, 1, 0);
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

void func_1583(var uParam0, int iParam1)//Position - 0x7C118
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 783127/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 783072/*__LIB_3__::func_975*/;
			break;
		case 2:
			uParam0->f_31 = 782412/*__LIB_5__::func_965*/;
			break;
		case 3:
			uParam0->f_34 = 782285/*__LIB_3__::func_974*/;
			break;
		case 4:
			uParam0->f_12 = 782253/*__LIB_3__::func_973*/;
			break;
		case 5:
			uParam0->f_11 = 782242/*__LIB_3__::func_972*/;
			break;
		case 6:
			uParam0->f_32 = 782178/*__LIB_3__::func_971*/;
			break;
		case 111:
			uParam0->f_35 = 782155/*__LIB_5__::func_245*/;
			break;
		case 79:
			*uParam0 = 782146/*__LIB_0__::func_114*/;
			break;
		case 37:
			uParam0->f_18 = 782033/*__LIB_3__::func_970*/;
			break;
		case 38:
			uParam0->f_9 = 781937/*__LIB_6__::func_946*/;
			break;
		case 11:
			uParam0->f_11 = 781928/*__LIB_3__::func_969*/;
			break;
		case 12:
			uParam0->f_33 = 781538/*__LIB_8__::func_851*/;
			break;
		case 109:
			uParam0->f_56 = 781235/*__LIB_7__::func_741*/;
			break;
		case 15:
			uParam0->f_2 = 779339/*__LIB_7__::func_876*/;
			break;
		case 13:
			uParam0->f_2 = 779330/*__LIB_0__::func_109*/;
			break;
		case 75:
			uParam0->f_4 = 779321/*__LIB_0__::func_109*/;
			break;
		case 16:
			uParam0->f_5 = 778938/*__LIB_9__::func_2*/;
			break;
		case 108:
			uParam0->f_55 = 775039/*__LIB_9__::func_529*/;
			break;
		case 17:
			uParam0->f_17 = 774315/*__LIB_9__::func_267*/;
			break;
		case 19:
			uParam0->f_17 = 774290/*__LIB_5__::func_963*/;
			break;
		case 20:
			uParam0->f_3 = 774121/*__LIB_8__::func_925*/;
			break;
		case 21:
			uParam0->f_3 = 774058/*__LIB_5__::func_243*/;
			break;
		case 74:
			uParam0->f_53 = 773906/*__LIB_5__::func_242*/;
			break;
		case 22:
			uParam0->f_24 = 773825/*__LIB_3__::func_957*/;
			break;
		case 25:
			uParam0->f_23 = 772888/*func_1946*/;
			break;
		case 30:
			uParam0->f_8 = 771560/*__LIB_7__::func_837*/;
			break;
		case 31:
			uParam0->f_39 = 770984/*__LIB_8__::func_924*/;
			break;
		case 33:
			uParam0->f_40 = 769747/*__LIB_8__::func_963*/;
			break;
		case 14:
			uParam0->f_11 = 769738/*__LIB_1__::func_806*/;
			break;
		case 34:
			uParam0->f_41 = 766971/*__LIB_5__::func_495*/;
			break;
		case 36:
			uParam0->f_58 = 766918/*__LIB_3__::func_945*/;
			break;
		case 35:
			uParam0->f_42 = 761466/*__LIB_5__::func_962*/;
			break;
		case 45:
			uParam0->f_14 = 761457/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 761448/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 761440/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 761417/*__LIB_3__::func_943*/;
			break;
		case 47:
			uParam0->f_43 = 761368/*__LIB_3__::func_942*/;
			break;
		case 49:
			uParam0->f_8 = 761343/*__LIB_3__::func_941*/;
			break;
		case 50:
			*uParam0 = 761305/*__LIB_5__::func_725*/;
			break;
		case 51:
			*uParam0 = 761231/*__LIB_6__::func_899*/;
			break;
		case 52:
			uParam0->f_15 = 761220/*__LIB_3__::func_940*/;
			break;
		case 53:
			uParam0->f_13 = 761141/*__LIB_6__::func_874*/;
			break;
		case 54:
			uParam0->f_45 = 761133/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 761124/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 761114/*__LIB_3__::func_938*/;
			break;
		case 58:
			uParam0->f_13 = 760867/*__LIB_7__::func_737*/;
			break;
		case 64:
			uParam0->f_47 = 759723/*__LIB_10__::func_52*/;
			break;
		case 65:
			uParam0->f_21 = 758531/*__LIB_7__::func_870*/;
			break;
		case 66:
			uParam0->f_21 = 757985/*__LIB_7__::func_54*/;
			break;
		case 67:
			uParam0->f_21 = 757809/*__LIB_5__::func_866*/;
			break;
		case 68:
			*uParam0 = 756149/*__LIB_8__::func_962*/;
			break;
		case 69:
			*uParam0 = 756140/*__LIB_0__::func_109*/;
			break;
		case 70:
			uParam0->f_48 = 756128/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 756119/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 756107/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 755274/*__LIB_5__::func_961*/;
			break;
		case 73:
			uParam0->f_51 = 755265/*__LIB_0__::func_114*/;
			break;
		case 84:
			uParam0->f_1 = 754613/*__LIB_9__::func_517*/;
			break;
		case 85:
			uParam0->f_1 = 753741/*func_1855*/;
			break;
		case 87:
			uParam0->f_1 = 752529/*__LIB_9__::func_525*/;
			break;
		case 88:
			uParam0->f_1 = 752509/*__LIB_3__::func_918*/;
			break;
		case 89:
			uParam0->f_54 = 752415/*__LIB_3__::func_917*/;
			break;
		case 90:
			uParam0->f_1 = 752284/*__LIB_5__::func_865*/;
			break;
		case 91:
			uParam0->f_1 = 751656/*__LIB_5__::func_801*/;
			break;
		case 92:
			uParam0->f_1 = 750889/*func_1837*/;
			break;
		case 94:
			uParam0->f_1 = 750337/*__LIB_5__::func_960*/;
			break;
		case 95:
			uParam0->f_22 = 749743/*__LIB_6__::func_383*/;
			break;
		case 18:
			uParam0->f_8 = 749385/*__LIB_5__::func_959*/;
			break;
		case 96:
			uParam0->f_1 = 749292/*__LIB_5__::func_800*/;
			break;
		case 97:
			uParam0->f_1 = 748446/*__LIB_5__::func_864*/;
			break;
		case 98:
			uParam0->f_1 = 514084/*func_1629*/;
			break;
		case 100:
			uParam0->f_22 = 511501/*__LIB_6__::func_440*/;
			break;
		case 101:
			uParam0->f_22 = 510345/*__LIB_6__::func_417*/;
			break;
		case 78:
			uParam0->f_59 = 510137/*__LIB_7__::func_788*/;
			break;
		case 104:
			uParam0->f_1 = 509697/*__LIB_5__::func_957*/;
			break;
		case 102:
			uParam0->f_1 = 509688/*__LIB_0__::func_109*/;
			break;
		case 103:
			uParam0->f_22 = 509578/*__LIB_5__::func_956*/;
			break;
		case 81:
			*uParam0 = 509535/*__LIB_3__::func_870*/;
			break;
	}
}

int func_1629(var uParam0, var uParam1)//Position - 0x7D824
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
		func_1646(&(uParam1->f_140[0]), PLAYER::PLAYER_ID(), 1, 1);
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
			func_425(&iVar9, &(uParam1->f_109), 4);
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

int func_1646(var uParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x7E44F
{
	int iVar0;
	iVar0 = PLAYER::GET_PLAYER_PED(bParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (!func_428(uParam0, iVar0, bParam2, bParam3))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0) && !ENTITY::IS_ENTITY_DEAD(*uParam0, false))
	{
		if (!func_1647(uParam0, bParam1))
		{
		}
		PED::FINALIZE_HEAD_BLEND(*uParam0);
	}
	return 1;
}

int func_1647(var uParam0, int iParam1)//Position - 0x7E4AD
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
		func_1651(&Var1, __LIB_3__::func_353(iVar0), 0, 1, 1, !__LIB_5__::func_723(), 0, __LIB_7__::func_52(), __LIB_3__::func_904(__LIB_5__::func_491(iParam1), 0), __LIB_3__::func_352(iVar0));
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(__LIB_2__::func_508(iParam1, 0), false);
		if (GRAPHICS::OVERRIDE_PED_CREW_LOGO_TEXTURE(*uParam0, __LIB_2__::func_508(iParam1, 0), __LIB_8__::func_849(iParam1, 2)))
		{
		}
		return 1;
	}
	return 0;
}

int func_1651(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, bool bParam9)//Position - 0x7E5CA
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
					if (__LIB_6__::func_447(&Global_78200, *uParam0, bParam1))
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
													GRAPHICS::OVERRIDE_PED_CREW_LOGO_TEXTURE(*uParam0, __LIB_2__::func_508(PLAYER::PLAYER_ID(), 0), __LIB_8__::func_849(PLAYER::PLAYER_ID(), 2));
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
								if (!func_443(*uParam0))
								{
									if (uParam0->f_2 >= 52 && uParam0->f_2 <= 59)
									{
										PED::SET_PED_HELMET_PROP_INDEX(*uParam0, Global_78200.f_26[0], true);
										PED::SET_PED_HELMET_TEXTURE_INDEX(*uParam0, Global_78200.f_36[0]);
										__LIB_3__::func_335(*uParam0, Global_78200.f_26[0], Global_78200.f_36[0], 1);
									}
									else
									{
										Var12 = { __LIB_3__::func_310(iVar1, 14, __LIB_1__::func_360(589, -1, 0), -1) };
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
										func_1773(*uParam0, uParam0->f_3, uParam0->f_8);
									}
									if ((uParam0->f_4 != -1 && uParam0->f_1 != 32) && uParam0->f_1 != 81)
									{
										func_1773(*uParam0, uParam0->f_4, uParam0->f_8);
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
										func_1763(*uParam0);
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
											func_1694(*uParam0, 14, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
											func_1694(*uParam0, 2, Global_2689235[uParam0->f_8 /*453*/].f_248, 0, -1, 0, 0, iVar20, iVar18, iVar19, uParam0->f_8, 1, 0, 0);
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
												func_1694(*uParam0, 2, iVar21, 0, -1, 0, 0, 0, iVar18, iVar19, -1, 0, 0, 0);
											}
											else
											{
												iVar23 = __LIB_1__::func_360(753, -1, 0);
												func_1694(*uParam0, 2, iVar23, 0, -1, 0, 0, 0, iVar18, iVar19, -1, 0, 0, 0);
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
									func_1689(*uParam0, &(Global_1886249[uParam0->f_8 /*51*/]), bVar24, iVar25);
								}
								else
								{
									func_1661(*uParam0, bVar24, 0, iVar25);
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
															GRAPHICS::OVERRIDE_PED_CREW_LOGO_TEXTURE(*uParam0, __LIB_2__::func_508(PLAYER::PLAYER_ID(), 0), __LIB_8__::func_849(PLAYER::PLAYER_ID(), 2));
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
															GRAPHICS::OVERRIDE_PED_CREW_LOGO_TEXTURE(*uParam0, __LIB_2__::func_508(PLAYER::PLAYER_ID(), 0), __LIB_8__::func_849(PLAYER::PLAYER_ID(), 2));
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

void func_1661(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x84468
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
		bVar3 = func_1687(iParam0, 0);
		bVar4 = __LIB_1__::func_37(iParam0);
		bVar5 = func_1678(iParam0, iParam3);
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
							if (!__LIB_3__::func_228(Var9.f_2, Var9.f_3, iVar10))
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

int func_1678(int iParam0, int iParam1)//Position - 0x8E9BB
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
				iVar3 = func_445(iParam0, 11, -1);
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
				iVar5 = func_445(iParam0, 11, -1);
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

int func_1687(int iParam0, bool bParam1)//Position - 0x8EE19
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
							iVar2 = __LIB_2__::func_999(joaat("MP_M_Freemode_01"), 11, func_445(iParam0, 11, -1), 0);
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
						iVar3 = func_445(iParam0, 11, -1);
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
						iVar5 = func_445(iParam0, 8, -1);
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
							iVar7 = __LIB_2__::func_999(joaat("MP_F_Freemode_01"), 11, func_445(iParam0, 11, -1), 0);
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
						iVar8 = func_445(iParam0, 11, -1);
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
							iVar10 = __LIB_2__::func_999(joaat("MP_F_Freemode_01"), 11, func_445(iParam0, 11, -1), 0);
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
							iVar11 = __LIB_2__::func_999(joaat("MP_F_Freemode_01"), 11, func_445(iParam0, 11, -1), 0);
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
						iVar12 = func_445(iParam0, 8, -1);
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

void func_1689(int iParam0, var uParam1, bool bParam2, int iParam3)//Position - 0x8FE77
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
		bVar2 = func_1687(iParam0, 0);
		bVar3 = __LIB_1__::func_37(iParam0);
		bVar4 = func_1678(iParam0, iParam3);
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

int func_1694(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)//Position - 0x90EDB
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
		Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, iParam1, iParam2, -1) };
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
			func_1758(iVar5, iParam1, iParam2, 1);
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
					Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, 10, 0, -1) };
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
						func_1758(iVar5, 10, 0, 1);
					}
				}
				else
				{
					Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, iVar0, uVar14[iVar0], -1) };
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
								Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, 14, uVar15[iVar1], -1) };
								__LIB_0__::func_454(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
								if (BitTest(Global_78130[1 /*14*/].f_6, 1))
								{
									func_1758(iVar5, iVar0, uVar14[iVar0], 1);
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
								func_1694(iParam0, iVar0, uVar14[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (BitTest(Global_78130[1 /*14*/].f_6, 1))
							{
								func_1758(iVar5, iVar0, uVar14[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, iVar0, func_445(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					uVar16 = { __LIB_0__::func_459(iVar5, 0) };
					func_1694(iParam0, iVar0, uVar16[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_1752(iParam0, 11, uVar14[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar18 = { __LIB_0__::func_466(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, 14, uVar18[iVar1], -1) };
			__LIB_0__::func_454(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
			if (BitTest(Global_78130[1 /*14*/].f_6, 1))
			{
				func_1758(iVar5, 14, uVar18[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_78128 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = __LIB_5__::func_129(iParam0, iVar5, 14, uVar18[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_1694(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_1758(iVar5, iParam1, iParam2, 1);
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			if (BitTest(Global_78130[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HAIR"), 1))
			{
			}
			else if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 1, joaat("HAIR_SHRINK")))
			{
				func_1694(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, iParam1, iParam2, -1) };
			}
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			func_1763(iParam0);
		}
		if (iParam5 == 0)
		{
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = __LIB_5__::func_129(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_1694(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = __LIB_5__::func_129(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_1694(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					iVar27 = func_1749(iVar5, iVar24, iVar23, iVar25);
					if (iVar27 == -99)
					{
						iVar27 = __LIB_5__::func_129(iParam0, iVar5, 11, iVar23, 3, 0);
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
							func_1694(iParam0, 8, iVar29, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, iParam1, iParam2, -1) };
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
							iVar30 = __LIB_3__::func_408(iParam0, iParam2);
							iVar31 = __LIB_0__::func_452(iVar5, iVar23, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
							if (iVar31 != -99)
							{
								func_1694(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, iParam1, iParam2, -1) };
								iVar8 = -99;
							}
							else if (iVar30 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								func_1694(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, iParam1, iParam2, -1) };
							}
							else
							{
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									iVar32 = __LIB_0__::func_279(iVar5, 11, -1);
									Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, 11, iVar32, -1) };
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
								func_1694(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, iParam1, iParam2, -1) };
							}
						}
					}
					else
					{
						Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, 11, iVar23, -1) };
						iVar34 = Global_78130[1 /*14*/].f_3;
						Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, 11, iParam2, -1) };
						iVar35 = Global_78130[1 /*14*/].f_3;
						if (iVar34 != iVar35)
						{
							iVar37 = __LIB_3__::func_408(iParam0, iParam2);
							Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, 8, iVar24, -1) };
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
										Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, 11, iVar38, -1) };
										iVar39 = __LIB_0__::func_452(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
									}
								}
								if (iVar5 == joaat("MP_F_Freemode_01") && ((iVar24 == 32 || iVar24 == 33) || iVar24 == 119))
								{
									if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_205(iVar5, iParam2, 11, 4), joaat("JACKET_ONLY"), 0))
									{
										iVar38 = __LIB_0__::func_279(iVar5, 11, -1);
										Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, 11, iVar38, -1) };
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
									Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, 11, iVar38, -1) };
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
								func_1694(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_M_Freemode_01"))
							{
								iVar38 = __LIB_0__::func_279(iVar5, 11, -1);
								Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, 11, iVar38, -1) };
								iVar39 = __LIB_0__::func_452(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
								if (iVar39 == -99)
								{
									iVar39 = 240;
								}
								func_1694(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_F_Freemode_01"))
							{
								func_1694(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				__LIB_3__::func_303(iVar5, iParam2);
				if (!bParam13)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 10));
				}
			}
			func_1752(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_1749(iVar5, func_445(iParam0, 8, -1), iParam2, func_445(iParam0, 4, -1));
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
				func_1735(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar43 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar43, joaat("GLOVES"), 0))
			{
				iVar44 = __LIB_0__::func_350(iParam0, 11);
				iVar45 = __LIB_0__::func_350(iParam0, 4);
				iVar46 = func_1749(iVar5, iParam2, iVar44, iVar45);
				if (iVar46 == -99)
				{
					iVar46 = __LIB_5__::func_129(iParam0, iVar5, 11, iVar44, 3, 0);
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
			func_1752(iParam0, iParam1, iParam2, iParam6, 0);
			iVar49 = __LIB_0__::func_350(iParam0, 11);
			if (__LIB_0__::func_280(iVar5, iVar49, -1))
			{
				iVar50 = __LIB_0__::func_357(iVar5, iParam2, Global_78130[1 /*14*/].f_4);
				__LIB_3__::func_303(iVar5, iVar50);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_1749(iVar5, iParam2, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
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
						func_1694(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			else if (iVar5 == joaat("MP_F_Freemode_01"))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_205(iVar5, iVar57, 11, 4), joaat("LOW2_OPEN_CHECK"), 0))
				{
					if (!__LIB_0__::func_451(iVar5, iParam2, __LIB_0__::func_357(iVar5, iVar58, 0)))
					{
						func_1694(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_1749(iVar5, __LIB_0__::func_350(iParam0, 8), __LIB_0__::func_350(iParam0, 11), iParam2);
			}
			iVar59 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar59, joaat("GLOVES"), 0))
			{
				iVar60 = func_1749(iVar5, iVar58, iVar57, iParam2);
				if (iVar60 == -99)
				{
					iVar60 = __LIB_5__::func_129(iParam0, iVar5, 11, iVar57, 3, 0);
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
					iVar3 = __LIB_5__::func_129(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_1694(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
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
								iVar6 = func_1749(iVar5, iVar3, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = __LIB_5__::func_129(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_1694(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						if (!func_446(iParam0, 9, iVar63))
						{
							func_1694(iParam0, 9, iVar63, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_1694(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
					{
						func_1694(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						func_1694(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("MP_F_Freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar65 = func_445(iParam0, 4, -1);
					iVar66 = iParam2;
				}
				else
				{
					iVar65 = iParam2;
					iVar66 = func_445(iParam0, 11, -1);
				}
				if (__LIB_0__::func_240(iVar5, 11, iVar66, -1))
				{
					if (!__LIB_0__::func_239(iVar5, 4, iVar65, -1))
					{
						if (__LIB_0__::func_353(iVar5, 4, iVar65, &uVar67))
						{
							func_1694(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (__LIB_0__::func_239(iVar5, 4, iVar65, -1))
				{
					if (__LIB_0__::func_352(iVar5, 4, iVar65, &uVar67))
					{
						func_1694(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_1694(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_1694(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_1694(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_1694(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_1694(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_1694(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_1694(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_1694(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				func_1763(iParam0);
				iVar81 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
				iVar82 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
				iVar83 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar81, iVar82);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar83, joaat("FORCE_PROP"), 0))
				{
					iVar3 = __LIB_5__::func_129(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_1694(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = __LIB_5__::func_129(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_1694(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_1695(iParam0, &uVar4))
		{
			func_1694(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_1694(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar8 != -99)
	{
		func_1694(iParam0, 8, iVar8, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_1694(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar10 != -1)
	{
		iVar84 = __LIB_0__::func_282(iVar5, func_445(iParam0, 3, -1), iVar10);
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
				func_1694(iParam0, 3, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_1695(int iParam0, var uParam1)//Position - 0x92D85
{
	int iVar0;
	int iVar1;
	*uParam1 = func_445(PLAYER::PLAYER_PED_ID(), 2, -1);
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
		if (!func_446(iParam0, iVar1, iVar0))
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

void func_1735(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x9D7AC
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
	func_1661(iParam0, bParam3, 0, -1);
}

int func_1749(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xA539E
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
					iVar0 = func_1749(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
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
					iVar0 = func_1749(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
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

void func_1752(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0xA894B
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (func_1754(iParam0))
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
				if (((((!__LIB_3__::func_223(iVar0, iParam2, 13) && !__LIB_3__::func_223(iVar0, iParam2, 14)) && !__LIB_3__::func_223(iVar0, iParam2, 15)) && !__LIB_3__::func_223(iVar0, iParam2, 16)) && !__LIB_3__::func_223(iVar0, iParam2, 71)) && !__LIB_3__::func_223(iVar0, iParam2, 72))
				{
					__LIB_3__::func_222(MISC::GET_HASH_KEY("crewLogo"), iParam0);
				}
			}
			iVar2 = __LIB_2__::func_999(iVar0, iParam1, iParam2, iParam4);
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

int func_1754(int iParam0)//Position - 0xA8ADA
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
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != __LIB_0__::getMinusOneOrNull() && __LIB_3__::func_140(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar1 = func_445(iParam0, 11, -1);
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
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != __LIB_0__::getMinusOneOrNull() && __LIB_3__::func_140(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar3 = func_445(iParam0, 11, -1);
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

void func_1758(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0xA8F33
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
		if (Global_78127 != __LIB_0__::getGlobal_1574918() || iParam2 == -99)
		{
			return;
		}
		Global_78130[2 /*14*/] = { __LIB_3__::func_310(iParam0, iParam1, iParam2, -1) };
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
							func_1758(iParam0, __LIB_0__::func_33(iVar4), uVar3, 0);
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
									func_1758(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 3), 1);
								}
								else
								{
									func_1758(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 4), 1);
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
							func_1758(iParam0, 14, iVar8, 0);
						}
						else if (iParam2 >= 75 && iParam2 <= 82)
						{
							iVar8 = (83 + Global_78130[2 /*14*/].f_4);
							func_1758(iParam0, 14, iVar8, 0);
						}
					}
					else if (iParam1 == 8)
					{
						if (iParam2 >= 48 && iParam2 <= 63)
						{
							iVar8 = (64 + Global_78130[2 /*14*/].f_4);
							func_1758(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 64 && iParam2 <= 79)
						{
							iVar8 = (48 + Global_78130[2 /*14*/].f_4);
							func_1758(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 96 && iParam2 <= 111)
						{
							iVar8 = (112 + Global_78130[2 /*14*/].f_4);
							func_1758(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 112 && iParam2 <= 127)
						{
							iVar8 = (96 + Global_78130[2 /*14*/].f_4);
							func_1758(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 176 && iParam2 <= 191)
						{
							iVar8 = (160 + Global_78130[2 /*14*/].f_4);
							func_1758(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 160 && iParam2 <= 175)
						{
							iVar8 = (176 + Global_78130[2 /*14*/].f_4);
							func_1758(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 32 && iParam2 <= 47)
						{
							iVar8 = (0 + Global_78130[2 /*14*/].f_4);
							func_1758(iParam0, 11, iVar8, 0);
						}
						else if (iParam2 >= 224 && iParam2 <= 239)
						{
							iVar8 = (16 + Global_78130[2 /*14*/].f_4);
							func_1758(iParam0, 11, iVar8, 0);
						}
					}
					else if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar8 = (32 + Global_78130[2 /*14*/].f_4);
							func_1758(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 16 && iParam2 <= 31)
						{
							iVar8 = (224 + Global_78130[2 /*14*/].f_4);
							func_1758(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 220 && iParam2 <= 235)
						{
							switch (iParam2)
							{
								case 220:
									func_1758(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_0"), 8, 3), 0);
									func_1758(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_0"), 8, 3), 0);
									break;
								case 221:
									func_1758(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_1"), 8, 3), 0);
									func_1758(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_1"), 8, 3), 0);
									break;
								case 222:
									func_1758(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_2"), 8, 3), 0);
									func_1758(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_2"), 8, 3), 0);
									break;
								case 223:
									func_1758(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_3"), 8, 3), 0);
									func_1758(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_3"), 8, 3), 0);
									break;
								case 224:
									func_1758(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_4"), 8, 3), 0);
									func_1758(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_4"), 8, 3), 0);
									break;
								case 225:
									func_1758(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_5"), 8, 3), 0);
									func_1758(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_5"), 8, 3), 0);
									break;
								case 226:
									func_1758(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_6"), 8, 3), 0);
									func_1758(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_6"), 8, 3), 0);
									break;
								case 227:
									func_1758(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_7"), 8, 3), 0);
									func_1758(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_7"), 8, 3), 0);
									break;
								case 228:
									func_1758(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_8"), 8, 3), 0);
									func_1758(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_8"), 8, 3), 0);
									break;
								case 229:
									func_1758(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_9"), 8, 3), 0);
									func_1758(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_9"), 8, 3), 0);
									break;
								case 230:
									func_1758(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_10"), 8, 3), 0);
									func_1758(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_10"), 8, 3), 0);
									break;
								case 231:
									func_1758(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_11"), 8, 3), 0);
									func_1758(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_11"), 8, 3), 0);
									break;
								case 232:
									func_1758(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_12"), 8, 3), 0);
									func_1758(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_12"), 8, 3), 0);
									break;
								case 233:
									func_1758(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_13"), 8, 3), 0);
									func_1758(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_13"), 8, 3), 0);
									break;
								case 234:
									func_1758(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_14"), 8, 3), 0);
									func_1758(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_14"), 8, 3), 0);
									break;
								case 235:
									func_1758(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_15"), 8, 3), 0);
									func_1758(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_15"), 8, 3), 0);
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
									func_1758(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_0"), 7, 3), 0);
									func_1758(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_0"), 7, 3), 0);
									break;
								case 1:
									func_1758(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_1"), 7, 3), 0);
									func_1758(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_1"), 7, 3), 0);
									break;
								case 2:
									func_1758(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_2"), 7, 3), 0);
									func_1758(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_2"), 7, 3), 0);
									break;
								case 3:
									func_1758(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_3"), 7, 3), 0);
									func_1758(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_3"), 7, 3), 0);
									break;
								case 4:
									func_1758(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_4"), 7, 3), 0);
									func_1758(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_4"), 7, 3), 0);
									break;
								case 5:
									func_1758(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_5"), 7, 3), 0);
									func_1758(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_5"), 7, 3), 0);
									break;
								case 6:
									func_1758(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_6"), 7, 3), 0);
									func_1758(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_6"), 7, 3), 0);
									break;
								case 7:
									func_1758(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_7"), 7, 3), 0);
									func_1758(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_7"), 7, 3), 0);
									break;
								case 8:
									func_1758(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_8"), 7, 3), 0);
									func_1758(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_8"), 7, 3), 0);
									break;
								case 9:
									func_1758(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_9"), 7, 3), 0);
									func_1758(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_9"), 7, 3), 0);
									break;
								case 10:
									func_1758(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_10"), 7, 3), 0);
									func_1758(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_10"), 7, 3), 0);
									break;
								case 11:
									func_1758(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_11"), 7, 3), 0);
									func_1758(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_11"), 7, 3), 0);
									break;
								case 12:
									func_1758(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_12"), 7, 3), 0);
									func_1758(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_12"), 7, 3), 0);
									break;
								case 13:
									func_1758(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_13"), 7, 3), 0);
									func_1758(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_13"), 7, 3), 0);
									break;
								case 14:
									func_1758(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_14"), 7, 3), 0);
									func_1758(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_14"), 7, 3), 0);
									break;
								case 15:
									func_1758(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_15"), 7, 3), 0);
									func_1758(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_15"), 7, 3), 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_78130[2 /*14*/].f_4)
							{
								case 0:
									func_1758(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_0"), 7, 3), 0);
									func_1758(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_0"), 7, 3), 0);
									break;
								case 1:
									func_1758(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_1"), 7, 3), 0);
									func_1758(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_1"), 7, 3), 0);
									break;
								case 2:
									func_1758(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_2"), 7, 3), 0);
									func_1758(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_2"), 7, 3), 0);
									break;
								case 3:
									func_1758(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_3"), 7, 3), 0);
									func_1758(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_3"), 7, 3), 0);
									break;
								case 4:
									func_1758(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_4"), 7, 3), 0);
									func_1758(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_4"), 7, 3), 0);
									break;
								case 5:
									func_1758(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_5"), 7, 3), 0);
									func_1758(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_5"), 7, 3), 0);
									break;
								case 6:
									func_1758(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_6"), 7, 3), 0);
									func_1758(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_6"), 7, 3), 0);
									break;
								case 7:
									func_1758(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_7"), 7, 3), 0);
									func_1758(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_7"), 7, 3), 0);
									break;
								case 8:
									func_1758(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_8"), 7, 3), 0);
									func_1758(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_8"), 7, 3), 0);
									break;
								case 9:
									func_1758(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_9"), 7, 3), 0);
									func_1758(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_9"), 7, 3), 0);
									break;
								case 10:
									func_1758(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_10"), 7, 3), 0);
									func_1758(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_10"), 7, 3), 0);
									break;
								case 11:
									func_1758(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_11"), 7, 3), 0);
									func_1758(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_11"), 7, 3), 0);
									break;
								case 12:
									func_1758(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_12"), 7, 3), 0);
									func_1758(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_12"), 7, 3), 0);
									break;
								case 13:
									func_1758(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_13"), 7, 3), 0);
									func_1758(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_13"), 7, 3), 0);
									break;
								case 14:
									func_1758(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_14"), 7, 3), 0);
									func_1758(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_14"), 7, 3), 0);
									break;
								case 15:
									func_1758(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_15"), 7, 3), 0);
									func_1758(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_15"), 7, 3), 0);
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
							func_1758(iParam0, 8, iVar8, 0);
						}
					}
				}
				Global_78130[2 /*14*/] = { __LIB_3__::func_310(iParam0, iParam1, iParam2, -1) };
				if (iParam1 == 11)
				{
					iVar9 = __LIB_0__::func_358(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_1758(iParam0, 8, iVar9, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203)
					{
						switch (iParam2)
						{
							case 199:
								func_1758(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_0"), 7, 4), 0);
								break;
							case 200:
								func_1758(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_1"), 7, 4), 0);
								break;
							case 201:
								func_1758(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_2"), 7, 4), 0);
								break;
							}
					}
				}
				else if (iParam1 == 8)
				{
					iVar9 = __LIB_0__::func_357(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_1758(iParam0, 11, iVar9, 0);
					}
				}
			}
		}
	}
}

void func_1763(int iParam0)//Position - 0xAA635
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
		if (!func_1768(iParam0, &bVar14, iVar9, iVar10, iVar12) || PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
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
		if (!func_1768(iParam0, &bVar14, iVar9, iVar10, iVar12))
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

int func_1768(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0xAAFFF
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
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAZ_MASK"), 0) && !__LIB_0__::func_348(iVar0, 14, func_445(iParam0, 14, 0), -1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_1773(int iParam0, int iParam1, int iParam2)//Position - 0xAB78C
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
			func_1774(iParam0);
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
					if (__LIB_3__::func_343(ENTITY::GET_ENTITY_MODEL(iParam0), 7, func_445(iParam0, 7, -1), -1))
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

void func_1774(int iParam0)//Position - 0xAB998
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 77)
	{
		if (__LIB_3__::func_521(iParam0, iVar0, -1))
		{
			if (((((((((iVar0 == 0 || iVar0 == 1) || iVar0 == 3) || iVar0 == 4) || iVar0 == 5) || iVar0 == 6) || iVar0 == 7) || iVar0 == 8) || iVar0 == 10) || iVar0 == 11)
			{
				func_1775(iParam0, iVar0, -1, -1);
			}
		}
		iVar0++;
	}
}

void func_1775(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xABA2D
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
					func_1694(iParam0, 2, __LIB_1__::func_360(2053, Global_78127, 0), 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				else
				{
					func_1694(iParam0, 2, __LIB_1__::func_360(753, Global_78127, 0), 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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

int func_1837(var uParam0, var uParam1)//Position - 0xB7529
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
			func_425(&iVar2, &(uParam1->f_109), 4);
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
			func_1646(&(uParam1->f_2), PLAYER::PLAYER_ID(), 1, 0);
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

int func_1855(int iParam0, var uParam1)//Position - 0xB804D
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
		if (func_1646(&(uParam1->f_2), PLAYER::PLAYER_ID(), 1, 0))
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
		func_425(&iVar1, &(uParam1->f_109), 32);
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

void func_1946(int iParam0, int iParam1)//Position - 0xBCB18
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
						func_1947(iParam0, 0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_7__::func_738(1);
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var6, 0, 0, 1, 0, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_1947(iParam0, 0);
					}
					Jump @652; //curOff = 633
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_1947(int iParam0, bool bParam1)//Position - 0xBCDA7
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

void func_2008(var uParam0, int iParam1)//Position - 0xBF320
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 804287/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 804278/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 1:
			uParam0->f_30 = 804210/*__LIB_5__::func_506*/;
			break;
		case 2:
			uParam0->f_31 = 803884/*__LIB_5__::func_505*/;
			break;
		case 3:
			uParam0->f_34 = 803723/*__LIB_4__::func_4*/;
			break;
		case 4:
			uParam0->f_12 = 803710/*__LIB_4__::func_3*/;
			break;
		case 6:
			uParam0->f_32 = 803646/*__LIB_4__::func_2*/;
			break;
		case 11:
			uParam0->f_11 = 803637/*__LIB_0__::func_109*/;
			break;
		case 12:
			uParam0->f_33 = 803301/*__LIB_5__::func_869*/;
			break;
		case 14:
			uParam0->f_11 = 803292/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 109:
			uParam0->f_56 = 802560/*__LIB_5__::func_504*/;
			break;
		case 8:
			uParam0->f_37 = 802552/*__LIB_0__::func_467*/;
			break;
		case 7:
			uParam0->f_36 = 802543/*__LIB_0__::func_114*/;
			break;
		case 79:
			*uParam0 = 802534/*__LIB_0__::func_114*/;
			break;
		case 72:
			uParam0->f_12 = 802521/*__LIB_3__::func_999*/;
			break;
		case 13:
			uParam0->f_2 = 802512/*__LIB_0__::func_109*/;
			break;
		case 15:
			uParam0->f_2 = 802433/*__LIB_9__::func_787*/;
			break;
		case 16:
			uParam0->f_5 = 802089/*__LIB_6__::func_950*/;
			break;
		case 108:
			uParam0->f_55 = 802080/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 801553/*__LIB_6__::func_949*/;
			break;
		case 19:
			uParam0->f_17 = 801498/*__LIB_6__::func_948*/;
			break;
		case 18:
			uParam0->f_8 = 801410/*__LIB_5__::func_502*/;
			break;
		case 20:
			uParam0->f_3 = 801390/*__LIB_5__::func_251*/;
			break;
		case 21:
			uParam0->f_3 = 801363/*__LIB_3__::func_997*/;
			break;
		case 74:
			uParam0->f_53 = 801341/*__LIB_3__::func_996*/;
			break;
		case 75:
			uParam0->f_4 = 801332/*__LIB_0__::func_114*/;
			break;
		case 22:
			uParam0->f_24 = 801229/*__LIB_5__::func_501*/;
			break;
		case 23:
			uParam0->f_26 = 801221/*__LIB_0__::func_467*/;
			break;
		case 26:
			uParam0->f_38 = 801213/*__LIB_0__::func_467*/;
			break;
		case 25:
			uParam0->f_23 = 800452/*func_2090*/;
			break;
		case 27:
			uParam0->f_25 = 800444/*__LIB_0__::func_467*/;
			break;
		case 28:
			uParam0->f_24 = 800436/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 800325/*__LIB_5__::func_250*/;
			break;
		case 31:
			uParam0->f_39 = 800277/*__LIB_3__::func_994*/;
			break;
		case 33:
			uParam0->f_40 = 800208/*__LIB_6__::func_880*/;
			break;
		case 76:
			uParam0->f_13 = 800185/*__LIB_3__::func_993*/;
			break;
		case 34:
			uParam0->f_41 = 796112/*__LIB_5__::func_868*/;
			break;
		case 36:
			uParam0->f_58 = 796055/*__LIB_3__::func_991*/;
			break;
		case 35:
			uParam0->f_42 = 789837/*__LIB_5__::func_966*/;
			break;
		case 45:
			uParam0->f_14 = 789828/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 789819/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 789811/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 789800/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 789687/*__LIB_3__::func_983*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 788612/*__LIB_7__::func_839*/;
			break;
		case 49:
			uParam0->f_8 = 788603/*__LIB_0__::func_114*/;
			break;
		case 50:
			*uParam0 = 788206/*__LIB_7__::func_742*/;
			break;
		case 51:
			*uParam0 = 788197/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 788187/*__LIB_3__::func_980*/;
			break;
		case 53:
			uParam0->f_13 = 788164/*__LIB_3__::func_979*/;
			break;
		case 54:
			uParam0->f_45 = 787668/*__LIB_5__::func_867*/;
			break;
		case 56:
			uParam0->f_46 = 787659/*__LIB_3__::func_969*/;
			break;
		case 57:
			uParam0->f_11 = 787650/*__LIB_1__::func_804*/;
			break;
		case 58:
			uParam0->f_13 = 787608/*__LIB_3__::func_978*/;
			break;
		case 59:
			*uParam0 = 787599/*__LIB_0__::func_114*/;
			break;
		case 60:
			*uParam0 = 787590/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 787579/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 787568/*__LIB_3__::func_554*/;
			break;
		case 63:
			uParam0->f_11 = 787559/*__LIB_1__::func_804*/;
			break;
		case 64:
			uParam0->f_47 = 787551/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 787543/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 787233/*__LIB_5__::func_246*/;
			break;
		case 67:
			uParam0->f_21 = 787163/*__LIB_3__::func_757*/;
			break;
		case 68:
			*uParam0 = 786474/*__LIB_5__::func_215*/;
			break;
		case 69:
			*uParam0 = 786465/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 786453/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 786444/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 786432/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 786423/*__LIB_0__::func_114*/;
			break;
		case 84:
			uParam0->f_1 = 786414/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 786405/*__LIB_0__::func_109*/;
			break;
		case 87:
			uParam0->f_1 = 786396/*__LIB_0__::func_109*/;
			break;
		case 88:
			uParam0->f_1 = 786387/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 786379/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 786354/*__LIB_3__::func_977*/;
			break;
		case 97:
			uParam0->f_1 = 786245/*__LIB_3__::func_976*/;
			break;
		case 98:
			uParam0->f_1 = 785529/*func_2019*/;
			break;
		case 100:
			uParam0->f_22 = 784834/*__LIB_4__::func_315*/;
			break;
		case 101:
			uParam0->f_22 = 784707/*__LIB_7__::func_877*/;
			break;
		case 112:
			uParam0->f_13 = 784695/*__LIB_5__::func_214*/;
			break;
		case 113:
			uParam0->f_3 = 784686/*__LIB_0__::func_114*/;
			break;
		case 114:
			uParam0->f_16 = 406724/*__LIB_5__::func_451*/;
			break;
		case 115:
			uParam0->f_3 = 784677/*__LIB_0__::func_114*/;
			break;
		case 116:
			*uParam0 = 784668/*__LIB_0__::func_114*/;
			break;
		case 117:
			uParam0->f_16 = 453222/*__LIB_3__::func_800*/;
			break;
		case 78:
			uParam0->f_59 = 784660/*__LIB_0__::func_467*/;
			break;
		case 124:
			uParam0->f_1 = 784651/*__LIB_0__::func_109*/;
			break;
		case 125:
			uParam0->f_19 = 784643/*__LIB_0__::func_467*/;
			break;
	}
}

int func_2019(var uParam0, var uParam1)//Position - 0xBFC79
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
		func_1646(&(uParam1->f_140[2]), PLAYER::PLAYER_ID(), 1, 0);
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

void func_2090(int iParam0, int iParam1)//Position - 0xC36C4
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
								if (((((!__LIB_1__::func_907(iVar7, 1) && !__LIB_5__::func_424(iVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar5[iVar2], true)) && !__LIB_1__::func_101(PLAYER::PLAYER_PED_ID())) && !__LIB_3__::func_728(iVar7, 14)) && !func_853(iVar7))
								{
									bVar0 = true;
								}
							}
						}
						if ((((((!bVar1 && __LIB_3__::func_360(PLAYER::PLAYER_ID(), iVar7)) && !__LIB_5__::func_424(iVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar5[iVar2], true)) && !__LIB_1__::func_101(PLAYER::PLAYER_PED_ID())) && !__LIB_3__::func_728(iVar7, 14)) && !func_853(iVar7))
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
					else if ((!bVar1 && !bVar0) && !func_2091())
					{
						MISC::SET_BIT(&(iParam1->f_2), 5);
						MISC::SET_BIT(&(iParam1->f_2), 6);
					}
					Jump @651; //curOff = 632
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
bool func_2091()//Position - 0xC3952
{
	return BitTest(Global_1946250.f_3, 2);
}

void func_2132(var uParam0, int iParam1)//Position - 0xC45C8
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 812597/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 812588/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 1:
			uParam0->f_30 = 812516/*__LIB_5__::func_511*/;
			break;
		case 2:
			uParam0->f_31 = 812279/*__LIB_5__::func_510*/;
			break;
		case 3:
			uParam0->f_34 = 812228/*__LIB_4__::func_25*/;
			break;
		case 4:
			uParam0->f_12 = 812215/*__LIB_4__::func_24*/;
			break;
		case 6:
			uParam0->f_32 = 812151/*__LIB_4__::func_23*/;
			break;
		case 11:
			uParam0->f_11 = 812142/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 811702/*__LIB_5__::func_509*/;
			break;
		case 14:
			uParam0->f_11 = 811693/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 109:
			uParam0->f_56 = 811021/*__LIB_5__::func_508*/;
			break;
		case 8:
			uParam0->f_37 = 811013/*__LIB_0__::func_467*/;
			break;
		case 7:
			uParam0->f_36 = 811004/*__LIB_0__::func_114*/;
			break;
		case 79:
			*uParam0 = 810995/*__LIB_0__::func_114*/;
			break;
		case 13:
			uParam0->f_2 = 810933/*__LIB_9__::func_783*/;
			break;
		case 15:
			uParam0->f_2 = 810853/*__LIB_9__::func_788*/;
			break;
		case 16:
			uParam0->f_5 = 810484/*__LIB_6__::func_952*/;
			break;
		case 108:
			uParam0->f_55 = 810475/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 810464/*__LIB_3__::func_860*/;
			break;
		case 19:
			uParam0->f_17 = 810453/*__LIB_3__::func_860*/;
			break;
		case 20:
			uParam0->f_3 = 810444/*__LIB_0__::func_114*/;
			break;
		case 21:
			uParam0->f_3 = 810435/*__LIB_0__::func_114*/;
			break;
		case 74:
			uParam0->f_53 = 810413/*__LIB_4__::func_18*/;
			break;
		case 75:
			uParam0->f_4 = 810404/*__LIB_0__::func_114*/;
			break;
		case 22:
			uParam0->f_24 = 810392/*__LIB_4__::func_17*/;
			break;
		case 23:
			uParam0->f_26 = 810384/*__LIB_0__::func_467*/;
			break;
		case 26:
			uParam0->f_38 = 810376/*__LIB_0__::func_467*/;
			break;
		case 25:
			uParam0->f_23 = 810368/*__LIB_0__::func_467*/;
			break;
		case 27:
			uParam0->f_25 = 810360/*__LIB_0__::func_467*/;
			break;
		case 28:
			uParam0->f_24 = 810352/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 810317/*__LIB_5__::func_226*/;
			break;
		case 31:
			uParam0->f_39 = 810289/*__LIB_3__::func_775*/;
			break;
		case 33:
			uParam0->f_40 = 810219/*__LIB_6__::func_881*/;
			break;
		case 76:
			uParam0->f_13 = 810196/*__LIB_4__::func_16*/;
			break;
		case 34:
			uParam0->f_41 = 810100/*__LIB_4__::func_15*/;
			break;
		case 36:
			uParam0->f_58 = 810055/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 807542/*__LIB_5__::func_507*/;
			break;
		case 45:
			uParam0->f_14 = 807533/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 807524/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 807516/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 807505/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 807463/*__LIB_4__::func_13*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 807355/*__LIB_5__::func_802*/;
			break;
		case 49:
			uParam0->f_8 = 807346/*__LIB_0__::func_114*/;
			break;
		case 50:
			*uParam0 = 807143/*__LIB_6__::func_951*/;
			break;
		case 51:
			*uParam0 = 807134/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 807123/*__LIB_4__::func_12*/;
			break;
		case 53:
			uParam0->f_13 = 807100/*__LIB_4__::func_11*/;
			break;
		case 54:
			uParam0->f_45 = 807092/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 807083/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 807070/*__LIB_4__::func_10*/;
			break;
		case 58:
			uParam0->f_13 = 807028/*__LIB_4__::func_9*/;
			break;
		case 59:
			*uParam0 = 807019/*__LIB_0__::func_114*/;
			break;
		case 60:
			*uParam0 = 807010/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 806999/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 806988/*__LIB_3__::func_554*/;
			break;
		case 63:
			uParam0->f_11 = 806979/*__LIB_1__::func_804*/;
			break;
		case 64:
			uParam0->f_47 = 806971/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 806963/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 806730/*__LIB_4__::func_8*/;
			break;
		case 67:
			uParam0->f_21 = 806660/*__LIB_3__::func_757*/;
			break;
		case 68:
			*uParam0 = 805971/*__LIB_5__::func_215*/;
			break;
		case 69:
			*uParam0 = 805962/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 805950/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 805941/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 805929/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 805920/*__LIB_0__::func_114*/;
			break;
		case 84:
			uParam0->f_1 = 805911/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 805902/*__LIB_0__::func_109*/;
			break;
		case 87:
			uParam0->f_1 = 805893/*__LIB_0__::func_109*/;
			break;
		case 88:
			uParam0->f_1 = 805884/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 805876/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 805867/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 805858/*__LIB_0__::func_109*/;
			break;
		case 98:
			uParam0->f_1 = 805849/*__LIB_0__::func_109*/;
			break;
		case 100:
			uParam0->f_22 = 805841/*__LIB_0__::func_467*/;
			break;
		case 101:
			uParam0->f_22 = 805833/*__LIB_0__::func_467*/;
			break;
		case 112:
			uParam0->f_13 = 805821/*__LIB_5__::func_214*/;
			break;
		case 113:
			uParam0->f_3 = 805812/*__LIB_0__::func_114*/;
			break;
		case 114:
			uParam0->f_16 = 406724/*__LIB_5__::func_451*/;
			break;
		case 115:
			uParam0->f_3 = 805803/*__LIB_0__::func_114*/;
			break;
		case 116:
			*uParam0 = 805794/*__LIB_0__::func_114*/;
			break;
		case 117:
			uParam0->f_16 = 453222/*__LIB_3__::func_800*/;
			break;
		case 78:
			uParam0->f_59 = 805786/*__LIB_0__::func_467*/;
			break;
		case 124:
			uParam0->f_1 = 805777/*__LIB_0__::func_109*/;
			break;
		case 125:
			uParam0->f_19 = 805769/*__LIB_0__::func_467*/;
			break;
	}
}

void func_2226(var uParam0, int iParam1)//Position - 0xC663E
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 891529/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 891515/*__LIB_5__::func_530*/;
			break;
		case 1:
			uParam0->f_30 = 891359/*__LIB_5__::func_529*/;
			break;
		case 2:
			uParam0->f_31 = 890883/*__LIB_5__::func_528*/;
			break;
		case 3:
			uParam0->f_34 = 890684/*__LIB_4__::func_98*/;
			break;
		case 4:
			uParam0->f_12 = 890562/*__LIB_4__::func_97*/;
			break;
		case 5:
			uParam0->f_11 = 890552/*__LIB_4__::func_96*/;
			break;
		case 37:
			uParam0->f_18 = 890415/*__LIB_4__::func_95*/;
			break;
		case 38:
			uParam0->f_9 = 890371/*__LIB_7__::func_743*/;
			break;
		case 42:
			uParam0->f_10 = 890287/*__LIB_7__::func_797*/;
			break;
		case 6:
			uParam0->f_32 = 890193/*__LIB_4__::func_94*/;
			break;
		case 11:
			uParam0->f_11 = 890184/*__LIB_1__::func_804*/;
			break;
		case 12:
			uParam0->f_33 = 889006/*__LIB_9__::func_526*/;
			break;
		case 14:
			uParam0->f_11 = 888997/*__LIB_0__::func_114*/;
			break;
		case 109:
			uParam0->f_56 = 882524/*__LIB_5__::func_731*/;
			break;
		case 8:
			uParam0->f_37 = 882224/*__LIB_4__::func_92*/;
			break;
		case 7:
			uParam0->f_36 = 882167/*__LIB_4__::func_91*/;
			break;
		case 79:
			*uParam0 = 881923/*__LIB_5__::func_527*/;
			break;
		case 13:
			uParam0->f_2 = 881861/*__LIB_9__::func_783*/;
			break;
		case 15:
			uParam0->f_2 = 881781/*__LIB_9__::func_789*/;
			break;
		case 16:
			uParam0->f_5 = 881061/*__LIB_9__::func_270*/;
			break;
		case 108:
			uParam0->f_55 = 877870/*__LIB_10__::func_69*/;
			break;
		case 17:
			uParam0->f_17 = 875565/*__LIB_9__::func_269*/;
			break;
		case 19:
			uParam0->f_17 = 875539/*__LIB_5__::func_971*/;
			break;
		case 20:
			uParam0->f_3 = 875363/*__LIB_6__::func_885*/;
			break;
		case 21:
			uParam0->f_3 = 875299/*__LIB_6__::func_867*/;
			break;
		case 74:
			uParam0->f_53 = 875195/*__LIB_5__::func_209*/;
			break;
		case 75:
			uParam0->f_4 = 875179/*__LIB_5__::func_526*/;
			break;
		case 22:
			uParam0->f_24 = 875076/*__LIB_5__::func_525*/;
			break;
		case 23:
			uParam0->f_26 = 875029/*__LIB_4__::func_89*/;
			break;
		case 24:
			uParam0->f_26 = 874992/*__LIB_4__::func_88*/;
			break;
		case 26:
			uParam0->f_38 = 872949/*func_2409*/;
			break;
		case 25:
			uParam0->f_23 = 872627/*func_2407*/;
			break;
		case 30:
			uParam0->f_8 = 871770/*__LIB_6__::func_957*/;
			break;
		case 31:
			uParam0->f_39 = 871636/*__LIB_5__::func_257*/;
			break;
		case 33:
			uParam0->f_40 = 871064/*__LIB_6__::func_884*/;
			break;
		case 32:
			*uParam0 = 870779/*__LIB_7__::func_15*/;
			break;
		case 34:
			uParam0->f_41 = 868250/*__LIB_5__::func_872*/;
			break;
		case 36:
			uParam0->f_58 = 868193/*__LIB_4__::func_85*/;
			break;
		case 35:
			uParam0->f_42 = 841229/*__LIB_5__::func_524*/;
			break;
		case 45:
			uParam0->f_14 = 841220/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 841211/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 841203/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 841180/*__LIB_4__::func_82*/;
			break;
		case 47:
			uParam0->f_43 = 841108/*__LIB_5__::func_523*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 840980/*__LIB_5__::func_871*/;
			break;
		case 49:
			uParam0->f_8 = 840954/*__LIB_4__::func_80*/;
			break;
		case 50:
			*uParam0 = 840267/*__LIB_7__::func_841*/;
			break;
		case 51:
			*uParam0 = 839997/*__LIB_6__::func_955*/;
			break;
		case 52:
			uParam0->f_15 = 839986/*__LIB_4__::func_76*/;
			break;
		case 53:
			uParam0->f_13 = 839824/*__LIB_4__::func_75*/;
			break;
		case 54:
			uParam0->f_45 = 839367/*func_2370*/;
			break;
		case 56:
			uParam0->f_46 = 839349/*__LIB_3__::func_763*/;
			break;
		case 57:
			uParam0->f_11 = 839097/*__LIB_7__::func_14*/;
			break;
		case 58:
			uParam0->f_13 = 838935/*__LIB_4__::func_73*/;
			break;
		case 59:
			*uParam0 = 838439/*__LIB_7__::func_13*/;
			break;
		case 60:
			*uParam0 = 838424/*__LIB_6__::func_883*/;
			break;
		case 61:
			uParam0->f_15 = 838413/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 838251/*__LIB_4__::func_69*/;
			break;
		case 55:
			uParam0->f_45 = 838072/*__LIB_6__::func_882*/;
			break;
		case 63:
			uParam0->f_11 = 838045/*__LIB_7__::func_840*/;
			break;
		case 64:
			uParam0->f_47 = 836612/*__LIB_5__::func_970*/;
			break;
		case 65:
			uParam0->f_21 = 835223/*__LIB_7__::func_55*/;
			break;
		case 66:
			uParam0->f_21 = 834864/*__LIB_5__::func_254*/;
			break;
		case 67:
			uParam0->f_21 = 834750/*__LIB_4__::func_64*/;
			break;
		case 68:
			*uParam0 = 833790/*__LIB_6__::func_954*/;
			break;
		case 69:
			*uParam0 = 833781/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 833769/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 833225/*__LIB_4__::func_62*/;
			break;
		case 107:
			uParam0->f_50 = 833213/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 833025/*__LIB_5__::func_870*/;
			break;
		case 84:
			uParam0->f_1 = 833016/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 831430/*func_2331*/;
			break;
		case 87:
			uParam0->f_1 = 829914/*__LIB_6__::func_418*/;
			break;
		case 88:
			uParam0->f_1 = 829905/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 829897/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 829867/*__LIB_5__::func_519*/;
			break;
		case 97:
			uParam0->f_1 = 829422/*__LIB_5__::func_518*/;
			break;
		case 98:
			uParam0->f_1 = 823634/*__LIB_8__::func_985*/;
			break;
		case 100:
			uParam0->f_22 = 815213/*__LIB_7__::func_871*/;
			break;
		case 101:
			uParam0->f_22 = 814329/*__LIB_8__::func_984*/;
			break;
		case 112:
			uParam0->f_13 = 814318/*__LIB_3__::func_554*/;
			break;
		case 113:
			uParam0->f_3 = 814309/*__LIB_0__::func_114*/;
			break;
		case 114:
			uParam0->f_16 = 814300/*__LIB_0__::func_114*/;
			break;
		case 117:
			uParam0->f_16 = 814291/*__LIB_0__::func_114*/;
			break;
		case 78:
			uParam0->f_59 = 814119/*__LIB_7__::func_783*/;
			break;
		case 76:
			uParam0->f_13 = 814096/*__LIB_4__::func_29*/;
			break;
	}
}

int func_2331(int iParam0, var uParam1)//Position - 0xCAFC6
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
			func_425(&iVar0, &(uParam1->f_109), 60);
			__LIB_3__::func_633(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_427(&iVar0, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 1, 0, 1))
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

void func_2370(int iParam0, var uParam1, int* iParam2, var uParam3, var uParam4)//Position - 0xCCEC7
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
								func_2371(iParam2, 18);
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
void func_2371(var uParam0, int iParam1)//Position - 0xCD040
{
	int iVar0;
	if (HUD::DOES_BLIP_EXIST(*uParam0))
	{
		iVar0 = __LIB_1__::func_389(iParam1);
		HUD::SET_BLIP_COLOUR(*uParam0, iVar0);
	}
}

void func_2407(int iParam0, int iParam1)//Position - 0xD50B3
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
		func_852(iParam0, Var2, &bVar0, &bVar1, 1, 0);
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

void func_2409(var uParam0, var uParam1)//Position - 0xD51F5
{
	if (__LIB_3__::func_616() == 3)
	{
		func_2413(uParam0, uParam1);
	}
	else if (__LIB_2__::func_72(PLAYER::PLAYER_ID(), 0) && __LIB_4__::func_70(__LIB_2__::func_39(PLAYER::PLAYER_ID()), __LIB_4__::func_71(*uParam0)))
	{
		__LIB_5__::func_258(uParam0, uParam1);
	}
	else if (__LIB_3__::func_616() == 2)
	{
		func_2411(uParam0, uParam1);
	}
	else
	{
		__LIB_4__::func_87(uParam1);
	}
}

void func_2411(var uParam0, var uParam1)//Position - 0xD527E
{
	int iVar0;
	int iVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_852(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, 1, 0);
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

void func_2413(var uParam0, var uParam1)//Position - 0xD539C
{
	int iVar0;
	iVar0 = __LIB_3__::func_785();
	switch (iVar0)
	{
		case 0:
			__LIB_9__::func_268(uParam0, uParam1);
			break;
		case 1:
			func_2418(uParam0, uParam1);
			break;
		case 2:
			__LIB_9__::func_303(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_2418(var uParam0, var uParam1)//Position - 0xD571D
{
	int iVar0;
	int iVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_852(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, 1, 0);
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

void func_2477(var uParam0, int iParam1)//Position - 0xD9A92
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 907772/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 907763/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 1:
			uParam0->f_30 = 907695/*__LIB_5__::func_536*/;
			break;
		case 2:
			uParam0->f_31 = 907249/*__LIB_5__::func_535*/;
			break;
		case 3:
			uParam0->f_34 = 907144/*__LIB_4__::func_120*/;
			break;
		case 4:
			uParam0->f_12 = 907131/*__LIB_4__::func_119*/;
			break;
		case 6:
			uParam0->f_32 = 907067/*__LIB_4__::func_118*/;
			break;
		case 11:
			uParam0->f_11 = 907058/*__LIB_1__::func_804*/;
			break;
		case 12:
			uParam0->f_33 = 906597/*__LIB_5__::func_534*/;
			break;
		case 14:
			uParam0->f_11 = 906588/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 109:
			uParam0->f_56 = 906201/*__LIB_5__::func_533*/;
			break;
		case 8:
			uParam0->f_37 = 906193/*__LIB_0__::func_467*/;
			break;
		case 7:
			uParam0->f_36 = 906184/*__LIB_0__::func_114*/;
			break;
		case 79:
			*uParam0 = 906160/*__LIB_5__::func_265*/;
			break;
		case 13:
			uParam0->f_2 = 906098/*__LIB_9__::func_783*/;
			break;
		case 15:
			uParam0->f_2 = 906019/*__LIB_9__::func_790*/;
			break;
		case 16:
			uParam0->f_5 = 905722/*__LIB_6__::func_958*/;
			break;
		case 108:
			uParam0->f_55 = 905713/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 905702/*__LIB_3__::func_860*/;
			break;
		case 19:
			uParam0->f_17 = 905676/*__LIB_5__::func_973*/;
			break;
		case 20:
			uParam0->f_3 = 905667/*__LIB_0__::func_114*/;
			break;
		case 21:
			uParam0->f_3 = 905658/*__LIB_0__::func_114*/;
			break;
		case 74:
			uParam0->f_53 = 905636/*__LIB_4__::func_18*/;
			break;
		case 75:
			uParam0->f_4 = 905627/*__LIB_0__::func_114*/;
			break;
		case 22:
			uParam0->f_24 = 905619/*__LIB_0__::func_467*/;
			break;
		case 23:
			uParam0->f_26 = 905611/*__LIB_0__::func_467*/;
			break;
		case 26:
			uParam0->f_38 = 905603/*__LIB_0__::func_467*/;
			break;
		case 25:
			uParam0->f_23 = 905271/*func_2549*/;
			break;
		case 27:
			uParam0->f_25 = 905263/*__LIB_0__::func_467*/;
			break;
		case 28:
			uParam0->f_24 = 905255/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 904934/*__LIB_7__::func_745*/;
			break;
		case 31:
			uParam0->f_39 = 904906/*__LIB_3__::func_775*/;
			break;
		case 33:
			uParam0->f_40 = 904837/*__LIB_6__::func_880*/;
			break;
		case 34:
			uParam0->f_41 = 901080/*__LIB_5__::func_264*/;
			break;
		case 36:
			uParam0->f_58 = 901035/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 897868/*__LIB_5__::func_532*/;
			break;
		case 45:
			uParam0->f_14 = 897859/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 897850/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 897842/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 897831/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 897718/*__LIB_4__::func_113*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 896595/*__LIB_7__::func_799*/;
			break;
		case 49:
			uParam0->f_8 = 896586/*__LIB_0__::func_114*/;
			break;
		case 50:
			*uParam0 = 896577/*__LIB_0__::func_114*/;
			break;
		case 51:
			*uParam0 = 896568/*__LIB_0__::func_114*/;
			break;
		case 52:
			uParam0->f_15 = 896557/*__LIB_4__::func_112*/;
			break;
		case 53:
			uParam0->f_13 = 896546/*__LIB_3__::func_554*/;
			break;
		case 54:
			uParam0->f_45 = 896538/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 896529/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 896520/*__LIB_1__::func_804*/;
			break;
		case 58:
			uParam0->f_13 = 896478/*__LIB_4__::func_111*/;
			break;
		case 59:
			*uParam0 = 896469/*__LIB_0__::func_114*/;
			break;
		case 60:
			*uParam0 = 896460/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 896449/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 896438/*__LIB_3__::func_554*/;
			break;
		case 63:
			uParam0->f_11 = 896429/*__LIB_1__::func_804*/;
			break;
		case 64:
			uParam0->f_47 = 896421/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 896413/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 896110/*__LIB_5__::func_263*/;
			break;
		case 67:
			uParam0->f_21 = 896040/*__LIB_3__::func_757*/;
			break;
		case 68:
			*uParam0 = 895391/*__LIB_5__::func_262*/;
			break;
		case 69:
			*uParam0 = 895382/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 895374/*__LIB_0__::func_467*/;
			break;
		case 71:
			uParam0->f_49 = 895365/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 895353/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 894919/*__LIB_7__::func_744*/;
			break;
		case 18:
			uParam0->f_8 = 894894/*__LIB_4__::func_110*/;
			break;
		case 84:
			uParam0->f_1 = 894877/*__LIB_5__::func_874*/;
			break;
		case 85:
			uParam0->f_1 = 894335/*func_2499*/;
			break;
		case 87:
			uParam0->f_1 = 893294/*__LIB_6__::func_799*/;
			break;
		case 88:
			uParam0->f_1 = 893285/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 893277/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 893268/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 893259/*__LIB_0__::func_109*/;
			break;
		case 98:
			uParam0->f_1 = 893250/*__LIB_0__::func_109*/;
			break;
		case 100:
			uParam0->f_22 = 893242/*__LIB_0__::func_467*/;
			break;
		case 101:
			uParam0->f_22 = 893234/*__LIB_0__::func_467*/;
			break;
		case 112:
			uParam0->f_13 = 893222/*__LIB_5__::func_214*/;
			break;
		case 113:
			uParam0->f_3 = 893213/*__LIB_0__::func_114*/;
			break;
		case 78:
			uParam0->f_59 = 892910/*__LIB_7__::func_798*/;
			break;
	}
}

int func_2499(var uParam0, var uParam1)//Position - 0xDA57F
{
	return func_2500(uParam1);
}

int func_2500(var uParam0)//Position - 0xDA58D
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
			func_425(&iVar0, &(uParam0->f_109), 60);
			__LIB_3__::func_633(&(uParam0->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam0->f_109);
			return 0;
		}
		else if (func_427(&iVar0, &(uParam0->f_109), &(uParam0->f_109.f_1), 1, 1, 0, 1, 0, 1))
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

void func_2549(int iParam0, int iParam1)//Position - 0xDD037
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
		func_852(iParam0, Var2, &bVar0, &bVar1, 1, 0);
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

void func_2587(var uParam0, int iParam1)//Position - 0xDDA05
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 942914/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 942891/*__LIB_4__::func_174*/;
			break;
		case 1:
			uParam0->f_30 = 942761/*__LIB_5__::func_547*/;
			break;
		case 2:
			uParam0->f_31 = 942096/*__LIB_6__::func_894*/;
			break;
		case 3:
			uParam0->f_34 = 941833/*__LIB_4__::func_169*/;
			break;
		case 4:
			uParam0->f_12 = 941820/*__LIB_4__::func_168*/;
			break;
		case 5:
			uParam0->f_11 = 941810/*__LIB_4__::func_167*/;
			break;
		case 37:
			uParam0->f_18 = 941612/*__LIB_5__::func_274*/;
			break;
		case 38:
			uParam0->f_9 = 941564/*__LIB_6__::func_964*/;
			break;
		case 42:
			uParam0->f_10 = 941528/*__LIB_6__::func_893*/;
			break;
		case 6:
			uParam0->f_32 = 941413/*__LIB_4__::func_941*/;
			break;
		case 11:
			uParam0->f_11 = 941404/*__LIB_3__::func_729*/;
			break;
		case 12:
			uParam0->f_33 = 940474/*__LIB_8__::func_928*/;
			break;
		case 14:
			uParam0->f_11 = 940465/*__LIB_3__::func_603*/;
			break;
		case 109:
			uParam0->f_56 = 939320/*__LIB_7__::func_805*/;
			break;
		case 8:
			uParam0->f_37 = 939276/*__LIB_4__::func_163*/;
			break;
		case 7:
			uParam0->f_36 = 939253/*__LIB_4__::func_162*/;
			break;
		case 79:
			*uParam0 = 939229/*__LIB_5__::func_265*/;
			break;
		case 13:
			uParam0->f_2 = 939167/*__LIB_9__::func_783*/;
			break;
		case 15:
			uParam0->f_2 = 939088/*__LIB_9__::func_791*/;
			break;
		case 16:
			uParam0->f_5 = 938414/*__LIB_8__::func_927*/;
			break;
		case 108:
			uParam0->f_55 = 935132/*__LIB_10__::func_70*/;
			break;
		case 17:
			uParam0->f_17 = 934198/*__LIB_9__::func_272*/;
			break;
		case 19:
			uParam0->f_17 = 934153/*__LIB_6__::func_962*/;
			break;
		case 20:
			uParam0->f_3 = 933980/*__LIB_6__::func_892*/;
			break;
		case 21:
			uParam0->f_3 = 933895/*__LIB_6__::func_891*/;
			break;
		case 74:
			uParam0->f_53 = 933754/*__LIB_5__::func_271*/;
			break;
		case 75:
			uParam0->f_4 = 933738/*__LIB_5__::func_464*/;
			break;
		case 22:
			uParam0->f_24 = 933635/*__LIB_5__::func_546*/;
			break;
		case 23:
			uParam0->f_26 = 933588/*__LIB_4__::func_159*/;
			break;
		case 24:
			uParam0->f_26 = 933551/*__LIB_4__::func_88*/;
			break;
		case 26:
			uParam0->f_38 = 932143/*func_2696*/;
			break;
		case 25:
			uParam0->f_23 = 931777/*func_2693*/;
			break;
		case 27:
			uParam0->f_25 = 930963/*__LIB_6__::func_961*/;
			break;
		case 28:
			uParam0->f_24 = 930922/*__LIB_4__::func_152*/;
			break;
		case 29:
			uParam0->f_28 = 930687/*__LIB_5__::func_876*/;
			break;
		case 30:
			uParam0->f_8 = 930362/*__LIB_7__::func_802*/;
			break;
		case 31:
			uParam0->f_39 = 930165/*__LIB_5__::func_545*/;
			break;
		case 43:
			uParam0->f_8 = 930059/*__LIB_7__::func_801*/;
			break;
		case 33:
			uParam0->f_40 = 929743/*__LIB_6__::func_890*/;
			break;
		case 34:
			uParam0->f_41 = 924751/*__LIB_6__::func_889*/;
			break;
		case 36:
			uParam0->f_58 = 924694/*__LIB_4__::func_85*/;
			break;
		case 35:
			uParam0->f_42 = 918490/*__LIB_6__::func_960*/;
			break;
		case 45:
			uParam0->f_14 = 918481/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 918472/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 918464/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 918441/*__LIB_4__::func_146*/;
			break;
		case 82:
			uParam0->f_19 = 918428/*__LIB_5__::func_267*/;
			break;
		case 47:
			uParam0->f_43 = 918125/*__LIB_5__::func_543*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 915888/*__LIB_8__::func_964*/;
			break;
		case 49:
			uParam0->f_8 = 915840/*__LIB_4__::func_938*/;
			break;
		case 50:
			*uParam0 = 915648/*__LIB_5__::func_733*/;
			break;
		case 51:
			*uParam0 = 915639/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 915628/*__LIB_3__::func_647*/;
			break;
		case 53:
			uParam0->f_13 = 915586/*__LIB_4__::func_141*/;
			break;
		case 54:
			uParam0->f_45 = 915578/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 915569/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 915560/*__LIB_1__::func_804*/;
			break;
		case 58:
			uParam0->f_13 = 915518/*__LIB_4__::func_140*/;
			break;
		case 59:
			*uParam0 = 915509/*__LIB_0__::func_114*/;
			break;
		case 60:
			*uParam0 = 915500/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 915489/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 915459/*__LIB_4__::func_139*/;
			break;
		case 63:
			uParam0->f_11 = 915450/*__LIB_1__::func_804*/;
			break;
		case 64:
			uParam0->f_47 = 915442/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 914356/*__LIB_7__::func_56*/;
			break;
		case 66:
			uParam0->f_21 = 914015/*__LIB_5__::func_541*/;
			break;
		case 67:
			uParam0->f_21 = 913901/*__LIB_4__::func_64*/;
			break;
		case 68:
			*uParam0 = 913073/*__LIB_6__::func_959*/;
			break;
		case 69:
			*uParam0 = 913064/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 913052/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 912960/*__LIB_4__::func_138*/;
			break;
		case 107:
			uParam0->f_50 = 912948/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 912760/*__LIB_5__::func_870*/;
			break;
		case 84:
			uParam0->f_1 = 912751/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 912737/*func_2626*/;
			break;
		case 87:
			uParam0->f_1 = 912721/*__LIB_6__::func_799*/;
			break;
		case 88:
			uParam0->f_1 = 912712/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 912704/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 912695/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 912252/*__LIB_6__::func_420*/;
			break;
		case 98:
			uParam0->f_1 = 910790/*func_2608*/;
			break;
		case 100:
			uParam0->f_22 = 909911/*__LIB_6__::func_389*/;
			break;
		case 101:
			uParam0->f_22 = 909734/*__LIB_5__::func_538*/;
			break;
		case 112:
			uParam0->f_13 = 909722/*__LIB_5__::func_214*/;
			break;
		case 113:
			uParam0->f_3 = 909708/*__LIB_4__::func_126*/;
			break;
		case 114:
			uParam0->f_16 = 406724/*__LIB_5__::func_451*/;
			break;
		case 117:
			uParam0->f_16 = 453222/*__LIB_3__::func_800*/;
			break;
		case 118:
			uParam0->f_11 = 909699/*__LIB_3__::func_939*/;
			break;
		case 119:
			uParam0->f_27 = 909598/*__LIB_7__::func_17*/;
			break;
		case 120:
			uParam0->f_19 = 909573/*__LIB_5__::func_537*/;
			break;
		case 78:
			uParam0->f_59 = 909401/*__LIB_7__::func_783*/;
			break;
		case 125:
			uParam0->f_19 = 909374/*__LIB_4__::func_124*/;
			break;
	}
}

int func_2608(int iParam0, var uParam1)//Position - 0xDE5C6
{
	if (__LIB_4__::func_128(iParam0))
	{
		return func_2609(iParam0, uParam1);
	}
	return 1;
}

int func_2609(int iParam0, var uParam1)//Position - 0xDE5E3
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
		if (func_428(&(uParam1->f_109.f_1[0]), iVar1, 1, 1) && __LIB_0__::func_121(uParam1->f_109.f_1[0]))
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

int func_2626(var uParam0, var uParam1)//Position - 0xDED61
{
	return func_2500(uParam1);
}

void func_2693(int iParam0, int iParam1)//Position - 0xE37C1
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
		func_852(iParam0, Var2, &bVar0, &bVar1, 1, 0);
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

void func_2696(var uParam0, var uParam1)//Position - 0xE392F
{
	if (__LIB_1__::func_124(PLAYER::PLAYER_ID()) || __LIB_4__::func_153(PLAYER::PLAYER_ID()))
	{
		func_2697(uParam0, uParam1);
	}
}

void func_2697(var uParam0, var uParam1)//Position - 0xE395B
{
	int iVar0;
	if (__LIB_3__::func_616() == 2 && __LIB_3__::func_785() != 1)
	{
		uParam1->f_1 = 1;
		if (func_2708(*uParam0, 0, 0))
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
			func_2703(uParam0, uParam1);
			break;
		case 1:
			func_2699(uParam0, uParam1);
			break;
		case 2:
			__LIB_5__::func_877(*uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_2699(var uParam0, var uParam1)//Position - 0xE3A1A
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
	func_852(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &bVar6, &bVar7, 1, 0);
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

void func_2703(var uParam0, var uParam1)//Position - 0xE3C19
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
			else if (func_2708(*uParam0, 0, 0))
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

int func_2708(int iParam0, bool bParam1, bool bParam2)//Position - 0xE3E7D
{
	int iVar0;
	int iVar1;
	func_852(iParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, 1, bParam2);
	if (bParam1)
	{
		return iVar1;
	}
	return (iVar0 || iVar1);
}

void func_2766(var uParam0, int iParam1)//Position - 0xE634B
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 971640/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 971631/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 1:
			uParam0->f_30 = 971563/*__LIB_5__::func_557*/;
			break;
		case 2:
			uParam0->f_31 = 971212/*__LIB_5__::func_556*/;
			break;
		case 3:
			uParam0->f_34 = 970979/*__LIB_4__::func_211*/;
			break;
		case 4:
			uParam0->f_12 = 970966/*__LIB_4__::func_210*/;
			break;
		case 6:
			uParam0->f_32 = 970902/*__LIB_4__::func_209*/;
			break;
		case 11:
			uParam0->f_11 = 970893/*__LIB_3__::func_939*/;
			break;
		case 12:
			uParam0->f_33 = 970168/*__LIB_6__::func_967*/;
			break;
		case 14:
			uParam0->f_11 = 970159/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 109:
			uParam0->f_56 = 969035/*__LIB_5__::func_285*/;
			break;
		case 8:
			uParam0->f_37 = 969027/*__LIB_0__::func_467*/;
			break;
		case 7:
			uParam0->f_36 = 969018/*__LIB_0__::func_114*/;
			break;
		case 79:
			*uParam0 = 968994/*__LIB_5__::func_265*/;
			break;
		case 13:
			uParam0->f_2 = 968922/*__LIB_9__::func_793*/;
			break;
		case 15:
			uParam0->f_2 = 968833/*__LIB_9__::func_792*/;
			break;
		case 16:
			uParam0->f_5 = 968473/*__LIB_6__::func_966*/;
			break;
		case 108:
			uParam0->f_55 = 968334/*__LIB_8__::func_218*/;
			break;
		case 17:
			uParam0->f_17 = 967662/*__LIB_8__::func_852*/;
			break;
		case 19:
			uParam0->f_17 = 967636/*__LIB_5__::func_976*/;
			break;
		case 20:
			uParam0->f_3 = 967627/*__LIB_0__::func_114*/;
			break;
		case 21:
			uParam0->f_3 = 967579/*__LIB_5__::func_227*/;
			break;
		case 74:
			uParam0->f_53 = 967524/*__LIB_5__::func_284*/;
			break;
		case 75:
			uParam0->f_4 = 967411/*__LIB_5__::func_555*/;
			break;
		case 22:
			uParam0->f_24 = 967403/*__LIB_0__::func_467*/;
			break;
		case 23:
			uParam0->f_26 = 967395/*__LIB_0__::func_467*/;
			break;
		case 26:
			uParam0->f_38 = 964842/*func_2883*/;
			break;
		case 25:
			uParam0->f_23 = 964834/*__LIB_0__::func_467*/;
			break;
		case 27:
			uParam0->f_25 = 964826/*__LIB_0__::func_467*/;
			break;
		case 28:
			uParam0->f_24 = 964818/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 964537/*__LIB_7__::func_749*/;
			break;
		case 31:
			uParam0->f_39 = 964509/*__LIB_3__::func_775*/;
			break;
		case 33:
			uParam0->f_40 = 964440/*__LIB_6__::func_880*/;
			break;
		case 76:
			uParam0->f_13 = 964417/*__LIB_4__::func_204*/;
			break;
		case 34:
			uParam0->f_41 = 961863/*__LIB_5__::func_881*/;
			break;
		case 36:
			uParam0->f_58 = 961818/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 961722/*__LIB_5__::func_283*/;
			break;
		case 45:
			uParam0->f_14 = 961713/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 961704/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 961696/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 961685/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 961572/*__LIB_4__::func_202*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 960725/*__LIB_7__::func_808*/;
			break;
		case 49:
			uParam0->f_8 = 960716/*__LIB_0__::func_114*/;
			break;
		case 50:
			*uParam0 = 960503/*__LIB_7__::func_748*/;
			break;
		case 51:
			*uParam0 = 960494/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 960483/*__LIB_4__::func_201*/;
			break;
		case 53:
			uParam0->f_13 = 960441/*__LIB_4__::func_200*/;
			break;
		case 54:
			uParam0->f_45 = 960402/*__LIB_4__::func_199*/;
			break;
		case 56:
			uParam0->f_46 = 960393/*__LIB_3__::func_729*/;
			break;
		case 57:
			uParam0->f_11 = 960351/*__LIB_5__::func_553*/;
			break;
		case 58:
			uParam0->f_13 = 960309/*__LIB_4__::func_197*/;
			break;
		case 59:
			*uParam0 = 960300/*__LIB_0__::func_114*/;
			break;
		case 60:
			*uParam0 = 960291/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 960280/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 960269/*__LIB_3__::func_554*/;
			break;
		case 63:
			uParam0->f_11 = 960260/*__LIB_1__::func_804*/;
			break;
		case 64:
			uParam0->f_47 = 960174/*__LIB_5__::func_552*/;
			break;
		case 65:
			uParam0->f_21 = 960166/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 959825/*__LIB_5__::func_282*/;
			break;
		case 67:
			uParam0->f_21 = 959755/*__LIB_3__::func_757*/;
			break;
		case 68:
			*uParam0 = 959058/*__LIB_5__::func_281*/;
			break;
		case 69:
			*uParam0 = 959049/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 958976/*__LIB_4__::func_195*/;
			break;
		case 71:
			uParam0->f_49 = 958967/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 958955/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 958946/*__LIB_0__::func_114*/;
			break;
		case 84:
			uParam0->f_1 = 958419/*__LIB_6__::func_965*/;
			break;
		case 85:
			uParam0->f_1 = 956863/*func_2833*/;
			break;
		case 87:
			uParam0->f_1 = 953633/*__LIB_7__::func_843*/;
			break;
		case 88:
			uParam0->f_1 = 953618/*__LIB_5__::func_803*/;
			break;
		case 89:
			uParam0->f_54 = 953256/*__LIB_5__::func_880*/;
			break;
		case 96:
			uParam0->f_1 = 952894/*__LIB_7__::func_20*/;
			break;
		case 97:
			uParam0->f_1 = 952388/*func_2811*/;
			break;
		case 98:
			uParam0->f_1 = 950755/*func_2809*/;
			break;
		case 100:
			uParam0->f_22 = 950478/*__LIB_6__::func_317*/;
			break;
		case 101:
			uParam0->f_22 = 949958/*__LIB_7__::func_880*/;
			break;
		case 112:
			uParam0->f_13 = 949946/*__LIB_5__::func_214*/;
			break;
		case 113:
			uParam0->f_3 = 949937/*__LIB_0__::func_114*/;
			break;
		case 114:
			uParam0->f_16 = 406724/*__LIB_5__::func_451*/;
			break;
		case 115:
			uParam0->f_3 = 949800/*__LIB_7__::func_807*/;
			break;
		case 116:
			*uParam0 = 949752/*__LIB_5__::func_278*/;
			break;
		case 117:
			uParam0->f_16 = 453222/*__LIB_3__::func_800*/;
			break;
		case 118:
			uParam0->f_11 = 909699/*__LIB_3__::func_939*/;
			break;
		case 119:
			uParam0->f_27 = 909598/*__LIB_7__::func_17*/;
			break;
		case 120:
			uParam0->f_19 = 909573/*__LIB_5__::func_537*/;
			break;
		case 78:
			uParam0->f_59 = 949744/*__LIB_0__::func_467*/;
			break;
		case 124:
			uParam0->f_1 = 944503/*func_2768*/;
			break;
		case 125:
			uParam0->f_19 = 944447/*__LIB_4__::func_175*/;
			break;
	}
}

int func_2768(int iParam0, int* iParam1)//Position - 0xE6977
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
				if (func_2833(iParam0, iParam1))
				{
					__LIB_4__::func_178(&(Global_1946250.f_3638), 60);
					__LIB_4__::func_181(iParam1, 3);
				}
			}
			else if (func_2788(iParam1))
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

int func_2788(int* iParam0)//Position - 0xE7531
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
		func_1646(&(iParam0->f_2), PLAYER::PLAYER_ID(), 1, 1);
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

int func_2809(int iParam0, var uParam1)//Position - 0xE81E3
{
	struct<3> Var0;
	struct<3> Var1;
	char* sVar2;
	int iVar3;
	if (__LIB_4__::func_128(iParam0))
	{
		return func_2609(iParam0, uParam1);
	}
	else if (BitTest(Global_1946250.f_6, 20))
	{
		if (Global_1946250.f_4539 == __LIB_0__::getMinusOneOrNull())
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
			func_1646(&(uParam1->f_140[2]), PLAYER::PLAYER_ID(), 1, 0);
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

int func_2811(int iParam0, var uParam1)//Position - 0xE8844
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
		if (Global_1946250.f_4539 != __LIB_0__::getMinusOneOrNull())
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_2))
			{
				if (!func_2812(&(uParam1->f_2), Global_1946250.f_4539))
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

int func_2812(var uParam0, int iParam1)//Position - 0xE8952
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
				if (__LIB_0__::func_348(ENTITY::GET_ENTITY_MODEL(*uParam0), 14, func_445(*uParam0, 14, 0), -1))
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

int func_2833(int iParam0, int* iParam1)//Position - 0xE99BF
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
		if (!func_428(&(iParam1->f_140[0]), PLAYER::PLAYER_PED_ID(), 1, 1))
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
			func_425(&iVar7, &(iParam1->f_109), 60);
			__LIB_3__::func_633(&(iParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(iParam1->f_109);
			return 0;
		}
		else
		{
			iVar8 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar7, -1, false);
			if (func_428(&(iParam1->f_109.f_1[0]), iVar8, 1, 1) && __LIB_0__::func_121(iParam1->f_109.f_1[0]))
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
			func_1646(&(iParam1->f_2), PLAYER::PLAYER_ID(), 1, 1);
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

void func_2883(var uParam0, var uParam1)//Position - 0xEB8EA
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
			func_2887(uParam0, uParam1);
			break;
		case 4:
			__LIB_5__::func_882(*uParam0, uParam1);
			break;
		case 2:
		case 3:
		case 1:
		case 5:
			func_2884(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_2884(var uParam0, var uParam1)//Position - 0xEBA28
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
	func_852(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &bVar2, &bVar3, bVar0, 0);
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

void func_2887(var uParam0, var uParam1)//Position - 0xEBCB2
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
				func_2889(*uParam0, iVar7, uParam1, uParam1);
			}
			else
			{
				func_2888(*uParam0, iVar7, uParam1, uParam1);
			}
		}
		else if (uParam0->f_3)
		{
			uParam1->f_4 = 1;
		}
	}
}

void func_2888(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0xEBDCF
{
	if (iParam1 == 0)
	{
		if (func_2708(iParam0, 0, 0))
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
		if (func_2708(iParam0, 0, 0))
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
		if (func_2708(iParam0, 1, 0))
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
		if (func_2708(iParam0, 0, 0))
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

void func_2889(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0xEBED7
{
	if (iParam1 == 0)
	{
		if (func_2708(iParam0, 0, 0))
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
		if (func_2708(iParam0, 0, 0))
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

void func_2932(var uParam0, int iParam1)//Position - 0xED381
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1007233/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 1007219/*__LIB_5__::func_565*/;
			break;
		case 1:
			uParam0->f_30 = 1007120/*__LIB_4__::func_945*/;
			break;
		case 2:
			uParam0->f_31 = 1006058/*__LIB_6__::func_898*/;
			break;
		case 3:
			uParam0->f_34 = 1005904/*__LIB_4__::func_265*/;
			break;
		case 4:
			uParam0->f_12 = 1005851/*__LIB_5__::func_564*/;
			break;
		case 5:
			uParam0->f_11 = 1005796/*__LIB_4__::func_263*/;
			break;
		case 37:
			uParam0->f_18 = 1005678/*__LIB_4__::func_262*/;
			break;
		case 38:
			uParam0->f_9 = 1005546/*__LIB_5__::func_981*/;
			break;
		case 6:
			uParam0->f_32 = 1005431/*__LIB_4__::func_944*/;
			break;
		case 11:
			uParam0->f_11 = 1005421/*__LIB_4__::func_261*/;
			break;
		case 12:
			uParam0->f_33 = 1004252/*__LIB_6__::func_973*/;
			break;
		case 14:
			uParam0->f_11 = 1004243/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 109:
			uParam0->f_56 = 1002930/*__LIB_7__::func_753*/;
			break;
		case 8:
			uParam0->f_37 = 1002886/*__LIB_4__::func_258*/;
			break;
		case 7:
			uParam0->f_36 = 1002863/*__LIB_4__::func_162*/;
			break;
		case 79:
			*uParam0 = 1002839/*__LIB_5__::func_265*/;
			break;
		case 13:
			uParam0->f_2 = 1002776/*__LIB_9__::func_795*/;
			break;
		case 15:
			uParam0->f_2 = 1002696/*__LIB_9__::func_794*/;
			break;
		case 16:
			uParam0->f_5 = 1002053/*__LIB_8__::func_929*/;
			break;
		case 108:
			uParam0->f_55 = 998911/*__LIB_10__::func_71*/;
			break;
		case 17:
			uParam0->f_17 = 998210/*__LIB_9__::func_274*/;
			break;
		case 19:
			uParam0->f_17 = 998184/*__LIB_5__::func_979*/;
			break;
		case 20:
			uParam0->f_3 = 998005/*__LIB_6__::func_897*/;
			break;
		case 21:
			uParam0->f_3 = 997941/*__LIB_6__::func_867*/;
			break;
		case 74:
			uParam0->f_53 = 997667/*__LIB_6__::func_971*/;
			break;
		case 75:
			uParam0->f_4 = 997651/*__LIB_5__::func_562*/;
			break;
		case 22:
			uParam0->f_24 = 997548/*__LIB_5__::func_561*/;
			break;
		case 23:
			uParam0->f_26 = 997501/*__LIB_4__::func_256*/;
			break;
		case 24:
			uParam0->f_26 = 997464/*__LIB_4__::func_255*/;
			break;
		case 26:
			uParam0->f_38 = 996637/*func_3036*/;
			break;
		case 25:
			uParam0->f_23 = 996271/*func_3033*/;
			break;
		case 27:
			uParam0->f_25 = 995889/*__LIB_5__::func_885*/;
			break;
		case 28:
			uParam0->f_24 = 995838/*__LIB_4__::func_250*/;
			break;
		case 29:
			uParam0->f_28 = 995830/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 995593/*__LIB_5__::func_737*/;
			break;
		case 31:
			uParam0->f_39 = 995472/*__LIB_5__::func_296*/;
			break;
		case 33:
			uParam0->f_40 = 995052/*__LIB_6__::func_896*/;
			break;
		case 34:
			uParam0->f_41 = 983759/*__LIB_7__::func_844*/;
			break;
		case 36:
			uParam0->f_58 = 983714/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 980627/*__LIB_5__::func_559*/;
			break;
		case 45:
			uParam0->f_14 = 980618/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 980609/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 980601/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 980552/*__LIB_4__::func_942*/;
			break;
		case 47:
			uParam0->f_43 = 980470/*__LIB_4__::func_243*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 979706/*__LIB_6__::func_970*/;
			break;
		case 49:
			uParam0->f_8 = 979659/*__LIB_4__::func_237*/;
			break;
		case 50:
			*uParam0 = 979600/*__LIB_5__::func_736*/;
			break;
		case 51:
			*uParam0 = 979368/*__LIB_6__::func_969*/;
			break;
		case 52:
			uParam0->f_15 = 979357/*__LIB_4__::func_234*/;
			break;
		case 53:
			uParam0->f_13 = 979315/*__LIB_4__::func_233*/;
			break;
		case 54:
			uParam0->f_45 = 979307/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 979298/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 979289/*__LIB_1__::func_804*/;
			break;
		case 58:
			uParam0->f_13 = 979247/*__LIB_4__::func_232*/;
			break;
		case 59:
			*uParam0 = 979238/*__LIB_0__::func_114*/;
			break;
		case 60:
			*uParam0 = 979229/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 979218/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 979176/*__LIB_4__::func_231*/;
			break;
		case 63:
			uParam0->f_11 = 979167/*__LIB_1__::func_804*/;
			break;
		case 64:
			uParam0->f_47 = 979159/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 978097/*__LIB_7__::func_57*/;
			break;
		case 66:
			uParam0->f_21 = 977794/*__LIB_5__::func_263*/;
			break;
		case 67:
			uParam0->f_21 = 977680/*__LIB_4__::func_64*/;
			break;
		case 68:
			*uParam0 = 976837/*__LIB_6__::func_968*/;
			break;
		case 69:
			*uParam0 = 976828/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 976755/*__LIB_4__::func_230*/;
			break;
		case 71:
			uParam0->f_49 = 976746/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 976734/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 976532/*__LIB_5__::func_884*/;
			break;
		case 84:
			uParam0->f_1 = 976523/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 974790/*func_2951*/;
			break;
		case 87:
			uParam0->f_1 = 973337/*__LIB_6__::func_421*/;
			break;
		case 88:
			uParam0->f_1 = 973328/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 973320/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 973311/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 973302/*__LIB_0__::func_109*/;
			break;
		case 98:
			uParam0->f_1 = 973293/*__LIB_0__::func_109*/;
			break;
		case 100:
			uParam0->f_22 = 973285/*__LIB_0__::func_467*/;
			break;
		case 101:
			uParam0->f_22 = 973277/*__LIB_0__::func_467*/;
			break;
		case 78:
			uParam0->f_59 = 973105/*__LIB_7__::func_783*/;
			break;
		case 125:
			uParam0->f_19 = 973072/*__LIB_4__::func_215*/;
			break;
	}
}

int func_2951(int iParam0, var uParam1)//Position - 0xEDFC6
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
			func_425(&iVar0, &(uParam1->f_109), 60);
			__LIB_3__::func_633(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_427(&iVar0, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 1, 0, 1))
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

void func_3033(int iParam0, int iParam1)//Position - 0xF33AF
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
		func_852(iParam0, Var2, &bVar0, &bVar1, 1, 0);
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

void func_3036(var uParam0, var uParam1)//Position - 0xF351D
{
	if (__LIB_3__::func_929(PLAYER::PLAYER_ID()))
	{
		func_3037(uParam0, uParam1);
	}
}

void func_3037(var uParam0, var uParam1)//Position - 0xF353B
{
	int iVar0;
	iVar0 = __LIB_3__::func_785();
	switch (iVar0)
	{
		case 0:
			__LIB_9__::func_273(uParam0, uParam1);
			break;
		case 1:
			func_3038(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_3038(var uParam0, var uParam1)//Position - 0xF3575
{
	int iVar0;
	int iVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_852(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, 1, 0);
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

void func_3100(var uParam0, int iParam1)//Position - 0xF5E8A
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1098982/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1098926/*__LIB_4__::func_312*/;
			break;
		case 2:
			uParam0->f_31 = 1098582/*__LIB_5__::func_307*/;
			break;
		case 3:
			uParam0->f_34 = 1098543/*__LIB_4__::func_311*/;
			break;
		case 4:
			uParam0->f_12 = 1098510/*__LIB_4__::func_310*/;
			break;
		case 5:
			uParam0->f_11 = 1098499/*__LIB_4__::func_309*/;
			break;
		case 6:
			uParam0->f_32 = 1098435/*__LIB_4__::func_308*/;
			break;
		case 111:
			uParam0->f_35 = 1098412/*__LIB_5__::func_306*/;
			break;
		case 79:
			*uParam0 = 1098388/*__LIB_5__::func_265*/;
			break;
		case 37:
			uParam0->f_18 = 1098270/*__LIB_4__::func_307*/;
			break;
		case 38:
			uParam0->f_9 = 1098191/*__LIB_5__::func_888*/;
			break;
		case 11:
			uParam0->f_11 = 1098182/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 1097585/*__LIB_9__::func_316*/;
			break;
		case 109:
			uParam0->f_56 = 1097577/*__LIB_0__::func_467*/;
			break;
		case 15:
			uParam0->f_2 = 1092381/*__LIB_9__::func_796*/;
			break;
		case 13:
			uParam0->f_2 = 1092372/*__LIB_0__::func_114*/;
			break;
		case 75:
			uParam0->f_4 = 1092357/*__LIB_5__::func_303*/;
			break;
		case 16:
			uParam0->f_5 = 1091882/*__LIB_9__::func_277*/;
			break;
		case 108:
			uParam0->f_55 = 1087912/*__LIB_10__::func_72*/;
			break;
		case 17:
			uParam0->f_17 = 1087136/*__LIB_9__::func_276*/;
			break;
		case 19:
			uParam0->f_17 = 1087110/*__LIB_5__::func_982*/;
			break;
		case 20:
			uParam0->f_3 = 1086899/*__LIB_9__::func_306*/;
			break;
		case 21:
			uParam0->f_3 = 1086736/*__LIB_7__::func_847*/;
			break;
		case 74:
			uParam0->f_53 = 1086127/*__LIB_7__::func_846*/;
			break;
		case 22:
			uParam0->f_24 = 1086045/*__LIB_4__::func_288*/;
			break;
		case 25:
			uParam0->f_23 = 1085129/*func_3172*/;
			break;
		case 30:
			uParam0->f_8 = 1083878/*__LIB_7__::func_873*/;
			break;
		case 31:
			uParam0->f_39 = 1083203/*__LIB_9__::func_275*/;
			break;
		case 33:
			uParam0->f_40 = 1082300/*__LIB_9__::func_305*/;
			break;
		case 14:
			uParam0->f_11 = 1082291/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 34:
			uParam0->f_41 = 1081516/*__LIB_5__::func_568*/;
			break;
		case 36:
			uParam0->f_58 = 1081463/*__LIB_3__::func_945*/;
			break;
		case 35:
			uParam0->f_42 = 1013028/*__LIB_7__::func_845*/;
			break;
		case 45:
			uParam0->f_14 = 1013019/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 1013010/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 1013002/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1012979/*__LIB_4__::func_273*/;
			break;
		case 47:
			uParam0->f_43 = 1012839/*__LIB_4__::func_272*/;
			break;
		case 49:
			uParam0->f_8 = 1012804/*__LIB_4__::func_271*/;
			break;
		case 50:
			*uParam0 = 1012766/*__LIB_5__::func_725*/;
			break;
		case 51:
			*uParam0 = 1012742/*__LIB_6__::func_899*/;
			break;
		case 52:
			uParam0->f_15 = 1012731/*__LIB_4__::func_270*/;
			break;
		case 53:
			uParam0->f_13 = 1012652/*__LIB_8__::func_854*/;
			break;
		case 54:
			uParam0->f_45 = 1012644/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 1012635/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1012625/*__LIB_3__::func_938*/;
			break;
		case 58:
			uParam0->f_13 = 1012336/*__LIB_8__::func_853*/;
			break;
		case 64:
			uParam0->f_47 = 1010746/*__LIB_12__::func_284*/;
			break;
		case 65:
			uParam0->f_21 = 1009783/*__LIB_7__::func_58*/;
			break;
		case 66:
			uParam0->f_21 = 1009588/*__LIB_5__::func_887*/;
			break;
		case 67:
			uParam0->f_21 = 1009485/*__LIB_5__::func_886*/;
			break;
		case 68:
			*uParam0 = 1008796/*__LIB_5__::func_215*/;
			break;
		case 69:
			*uParam0 = 1008787/*__LIB_0__::func_109*/;
			break;
		case 70:
			uParam0->f_48 = 1008775/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1008766/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1008754/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1008380/*__LIB_6__::func_974*/;
			break;
		case 73:
			uParam0->f_51 = 1008371/*__LIB_0__::func_114*/;
			break;
		case 78:
			uParam0->f_59 = 1008254/*__LIB_7__::func_810*/;
			break;
	}
}

void func_3172(int iParam0, int iParam1)//Position - 0x108EC9
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
							func_3173(iParam0);
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
							func_3173(iParam0);
						}
					}
					Jump @693; //curOff = 674
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_3173(int iParam0)//Position - 0x109181
{
	__LIB_9__::func_305(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_3246(var uParam0, int iParam1)//Position - 0x10C4EF
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1162091/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1161851/*__LIB_5__::func_592*/;
			break;
		case 2:
			uParam0->f_31 = 1159550/*__LIB_5__::func_591*/;
			break;
		case 3:
			uParam0->f_34 = 1159341/*__LIB_4__::func_393*/;
			break;
		case 4:
			uParam0->f_12 = 1159135/*__LIB_5__::func_590*/;
			break;
		case 5:
			uParam0->f_11 = 1159057/*__LIB_4__::func_391*/;
			break;
		case 37:
			uParam0->f_18 = 1158918/*__LIB_4__::func_951*/;
			break;
		case 38:
			uParam0->f_9 = 1158862/*__LIB_6__::func_904*/;
			break;
		case 42:
			uParam0->f_10 = 1158701/*__LIB_5__::func_988*/;
			break;
		case 6:
			uParam0->f_32 = 1158465/*__LIB_4__::func_390*/;
			break;
		case 111:
			uParam0->f_35 = 1158451/*__LIB_5__::func_589*/;
			break;
		case 11:
			uParam0->f_11 = 1158442/*__LIB_1__::func_804*/;
			break;
		case 12:
			uParam0->f_33 = 1155072/*__LIB_9__::func_500*/;
			break;
		case 14:
			uParam0->f_11 = 1155063/*__LIB_1__::func_806*/;
			break;
		case 109:
			uParam0->f_56 = 1141353/*__LIB_5__::func_316*/;
			break;
		case 79:
			*uParam0 = 1141097/*__LIB_5__::func_588*/;
			break;
		case 13:
			uParam0->f_2 = 1141048/*__LIB_5__::func_745*/;
			break;
		case 15:
			uParam0->f_2 = 1140837/*__LIB_9__::func_797*/;
			break;
		case 44:
			*uParam0 = 1140828/*__LIB_0__::func_114*/;
			break;
		case 75:
			uParam0->f_4 = 1140799/*__LIB_5__::func_587*/;
			break;
		case 16:
			uParam0->f_5 = 1140072/*__LIB_9__::func_280*/;
			break;
		case 108:
			uParam0->f_55 = 1136218/*__LIB_10__::func_73*/;
			break;
		case 17:
			uParam0->f_17 = 1134905/*__LIB_9__::func_279*/;
			break;
		case 19:
			uParam0->f_17 = 1134860/*__LIB_6__::func_983*/;
			break;
		case 20:
			uParam0->f_3 = 1134695/*__LIB_6__::func_903*/;
			break;
		case 21:
			uParam0->f_3 = 1134631/*__LIB_6__::func_867*/;
			break;
		case 74:
			uParam0->f_53 = 1134404/*__LIB_6__::func_982*/;
			break;
		case 22:
			uParam0->f_24 = 1134281/*__LIB_5__::func_585*/;
			break;
		case 26:
			uParam0->f_38 = 1130903/*func_3384*/;
			break;
		case 25:
			uParam0->f_23 = 1130582/*func_3382*/;
			break;
		case 27:
			uParam0->f_25 = 1129434/*__LIB_8__::func_970*/;
			break;
		case 28:
			uParam0->f_24 = 1129322/*__LIB_4__::func_371*/;
			break;
		case 29:
			uParam0->f_28 = 1129241/*__LIB_4__::func_370*/;
			break;
		case 30:
			uParam0->f_8 = 1128351/*__LIB_8__::func_969*/;
			break;
		case 31:
			uParam0->f_39 = 1127804/*__LIB_5__::func_740*/;
			break;
		case 33:
			uParam0->f_40 = 1127122/*__LIB_7__::func_59*/;
			break;
		case 32:
			*uParam0 = 1127029/*__LIB_6__::func_980*/;
			break;
		case 34:
			uParam0->f_41 = 1117763/*__LIB_5__::func_986*/;
			break;
		case 36:
			uParam0->f_58 = 1117705/*__LIB_4__::func_359*/;
			break;
		case 35:
			uParam0->f_42 = 1013897/*__LIB_6__::func_975*/;
			break;
		case 45:
			uParam0->f_14 = 1117696/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 1117687/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 1117679/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1117630/*__LIB_4__::func_950*/;
			break;
		case 47:
			uParam0->f_43 = 1117338/*__LIB_4__::func_949*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 1114313/*__LIB_8__::func_986*/;
			break;
		case 49:
			uParam0->f_8 = 1114209/*__LIB_4__::func_948*/;
			break;
		case 50:
			*uParam0 = 1113923/*__LIB_7__::func_814*/;
			break;
		case 51:
			*uParam0 = 1113761/*__LIB_6__::func_978*/;
			break;
		case 52:
			uParam0->f_15 = 1113750/*__LIB_4__::func_344*/;
			break;
		case 53:
			uParam0->f_13 = 1113492/*__LIB_4__::func_343*/;
			break;
		case 54:
			uParam0->f_45 = 1113230/*__LIB_7__::func_813*/;
			break;
		case 56:
			uParam0->f_46 = 1113221/*__LIB_3__::func_969*/;
			break;
		case 57:
			uParam0->f_11 = 1112064/*__LIB_7__::func_848*/;
			break;
		case 58:
			uParam0->f_13 = 1111806/*__LIB_4__::func_338*/;
			break;
		case 59:
			*uParam0 = 1111527/*__LIB_5__::func_738*/;
			break;
		case 60:
			*uParam0 = 1111518/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 1111507/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 1111249/*__LIB_4__::func_336*/;
			break;
		case 55:
			uParam0->f_45 = 1111241/*__LIB_0__::func_467*/;
			break;
		case 63:
			uParam0->f_11 = 1111183/*__LIB_5__::func_985*/;
			break;
		case 64:
			uParam0->f_47 = 1111033/*__LIB_7__::func_812*/;
			break;
		case 65:
			uParam0->f_21 = 1109327/*__LIB_7__::func_874*/;
			break;
		case 66:
			uParam0->f_21 = 1109016/*__LIB_5__::func_575*/;
			break;
		case 67:
			uParam0->f_21 = 1108864/*__LIB_4__::func_334*/;
			break;
		case 68:
			*uParam0 = 1107864/*__LIB_6__::func_976*/;
			break;
		case 69:
			*uParam0 = 1107855/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 1107406/*__LIB_4__::func_331*/;
			break;
		case 71:
			uParam0->f_49 = 1107127/*__LIB_4__::func_330*/;
			break;
		case 107:
			uParam0->f_50 = 1107115/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1106882/*__LIB_5__::func_889*/;
			break;
		case 84:
			uParam0->f_1 = 1106873/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 1104778/*func_3267*/;
			break;
		case 87:
			uParam0->f_1 = 1101883/*__LIB_6__::func_422*/;
			break;
		case 88:
			uParam0->f_1 = 1101874/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 1101866/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 1101840/*__LIB_4__::func_316*/;
			break;
		case 97:
			uParam0->f_1 = 1101731/*__LIB_3__::func_976*/;
			break;
		case 98:
			uParam0->f_1 = 1101015/*func_3253*/;
			break;
		case 100:
			uParam0->f_22 = 1100853/*__LIB_4__::func_315*/;
			break;
		case 101:
			uParam0->f_22 = 1100726/*__LIB_7__::func_877*/;
			break;
		case 78:
			uParam0->f_59 = 1100436/*__LIB_7__::func_811*/;
			break;
		case 125:
			uParam0->f_19 = 1100412/*__LIB_4__::func_313*/;
			break;
	}
}

int func_3253(var uParam0, var uParam1)//Position - 0x10CCD7
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
		func_1646(&(uParam1->f_140[2]), PLAYER::PLAYER_ID(), 1, 0);
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

int func_3267(int iParam0, var uParam1)//Position - 0x10DB8A
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
			func_425(&iVar1, &(uParam1->f_109), 60);
			__LIB_3__::func_633(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_427(&iVar1, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 0, 0, 1))
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

void func_3382(int iParam0, int iParam1)//Position - 0x114056
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
		func_852(iParam0, Var2, &bVar0, &bVar1, 1, 0);
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

void func_3384(var uParam0, var uParam1)//Position - 0x114197
{
	if (__LIB_3__::func_616() == 2)
	{
		func_3398(uParam0, uParam1);
	}
	else if (__LIB_3__::func_616() == 0)
	{
		if (__LIB_2__::func_72(PLAYER::PLAYER_ID(), 0))
		{
			__LIB_7__::func_851(uParam0, uParam1);
		}
		else
		{
			func_3386(uParam0, uParam1);
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

void func_3386(var uParam0, var uParam1)//Position - 0x114222
{
	int iVar0;
	iVar0 = __LIB_3__::func_785();
	switch (iVar0)
	{
		case 0:
			__LIB_9__::func_307(uParam0, uParam1);
			break;
		case 1:
			func_3387(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_3387(var uParam0, var uParam1)//Position - 0x11425C
{
	int iVar0;
	int iVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_852(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, __LIB_5__::func_576(PLAYER::PLAYER_ID()), 0);
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

void func_3398(var uParam0, var uParam1)//Position - 0x114776
{
	int iVar0;
	iVar0 = __LIB_3__::func_785();
	switch (iVar0)
	{
		case 0:
			__LIB_9__::func_278(uParam0, uParam1);
			break;
		case 1:
			func_3407(uParam0, uParam1);
			break;
		case 2:
			__LIB_9__::func_317(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_3407(var uParam0, var uParam1)//Position - 0x114C23
{
	int iVar0;
	int iVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_852(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, 1, 0);
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

void func_3477(var uParam0, int iParam1)//Position - 0x11BB74
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1169615/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1169559/*__LIB_4__::func_411*/;
			break;
		case 2:
			uParam0->f_31 = 1169290/*__LIB_5__::func_324*/;
			break;
		case 3:
			uParam0->f_34 = 1169229/*__LIB_4__::func_410*/;
			break;
		case 4:
			uParam0->f_12 = 1169198/*__LIB_4__::func_409*/;
			break;
		case 6:
			uParam0->f_32 = 1169134/*__LIB_4__::func_408*/;
			break;
		case 111:
			uParam0->f_35 = 1169125/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 11:
			uParam0->f_11 = 1169116/*__LIB_0__::func_109*/;
			break;
		case 14:
			uParam0->f_11 = 1169107/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 12:
			uParam0->f_33 = 1168896/*__LIB_9__::func_133*/;
			break;
		case 109:
			uParam0->f_56 = 1168888/*__LIB_0__::func_467*/;
			break;
		case 79:
			*uParam0 = 1168864/*__LIB_5__::func_265*/;
			break;
		case 13:
			uParam0->f_2 = 1168855/*__LIB_0__::func_114*/;
			break;
		case 15:
			uParam0->f_2 = 1167913/*__LIB_9__::func_501*/;
			break;
		case 75:
			uParam0->f_4 = 1167904/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1167879/*__LIB_5__::func_323*/;
			break;
		case 108:
			uParam0->f_55 = 1167870/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 1167845/*__LIB_5__::func_322*/;
			break;
		case 19:
			uParam0->f_17 = 1167834/*__LIB_3__::func_860*/;
			break;
		case 20:
			uParam0->f_3 = 1167825/*__LIB_0__::func_114*/;
			break;
		case 21:
			uParam0->f_3 = 1167816/*__LIB_0__::func_114*/;
			break;
		case 74:
			uParam0->f_53 = 1167348/*__LIB_8__::func_934*/;
			break;
		case 22:
			uParam0->f_24 = 1167229/*__LIB_5__::func_596*/;
			break;
		case 25:
			uParam0->f_23 = 1166459/*func_3519*/;
			break;
		case 30:
			uParam0->f_8 = 1166313/*__LIB_5__::func_595*/;
			break;
		case 31:
			uParam0->f_39 = 1166302/*__LIB_3__::func_860*/;
			break;
		case 33:
			uParam0->f_40 = 1166095/*__LIB_9__::func_282*/;
			break;
		case 34:
			uParam0->f_41 = 1165778/*__LIB_5__::func_594*/;
			break;
		case 36:
			uParam0->f_58 = 1165725/*__LIB_3__::func_945*/;
			break;
		case 35:
			uParam0->f_42 = 1164952/*__LIB_5__::func_891*/;
			break;
		case 45:
			uParam0->f_14 = 1164943/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 1164934/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 1164926/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1164915/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1164676/*__LIB_5__::func_890*/;
			break;
		case 49:
			uParam0->f_8 = 1164667/*__LIB_0__::func_114*/;
			break;
		case 50:
			*uParam0 = 1164658/*__LIB_0__::func_114*/;
			break;
		case 51:
			*uParam0 = 1164649/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 1164638/*__LIB_4__::func_401*/;
			break;
		case 53:
			uParam0->f_13 = 1164627/*__LIB_3__::func_554*/;
			break;
		case 54:
			uParam0->f_45 = 1164619/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 1164610/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1164601/*__LIB_1__::func_804*/;
			break;
		case 58:
			uParam0->f_13 = 1164308/*__LIB_8__::func_186*/;
			break;
		case 64:
			uParam0->f_47 = 1163764/*__LIB_8__::func_222*/;
			break;
		case 65:
			uParam0->f_21 = 1163756/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 1163688/*__LIB_5__::func_319*/;
			break;
		case 67:
			uParam0->f_21 = 1163548/*__LIB_5__::func_593*/;
			break;
		case 68:
			*uParam0 = 1163103/*__LIB_5__::func_318*/;
			break;
		case 69:
			*uParam0 = 1163094/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 1163082/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1163073/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1163061/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1163052/*__LIB_0__::func_114*/;
			break;
		case 78:
			uParam0->f_59 = 1163044/*__LIB_0__::func_467*/;
			break;
	}
}

void func_3519(int iParam0, int iParam1)//Position - 0x11CC7B
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
						func_3520(iParam0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar2)
						{
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 0, 0, 1, 0, -1, -1, -1);
						}
						func_3520(iParam0);
					}
					Jump @551; //curOff = 532
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_3520(int iParam0)//Position - 0x11CEA5
{
	__LIB_9__::func_282(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_3555(var uParam0, int iParam1)//Position - 0x11D8D8
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1268508/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1268404/*__LIB_4__::func_515*/;
			break;
		case 2:
			uParam0->f_31 = 1267669/*__LIB_5__::func_620*/;
			break;
		case 3:
			uParam0->f_34 = 1267587/*__LIB_4__::func_513*/;
			break;
		case 4:
			uParam0->f_12 = 1267444/*__LIB_4__::func_512*/;
			break;
		case 5:
			uParam0->f_11 = 1267434/*__LIB_4__::func_511*/;
			break;
		case 37:
			uParam0->f_18 = 1267299/*__LIB_4__::func_510*/;
			break;
		case 42:
			uParam0->f_10 = 1267232/*__LIB_5__::func_897*/;
			break;
		case 6:
			uParam0->f_32 = 1267120/*__LIB_4__::func_509*/;
			break;
		case 111:
			uParam0->f_35 = 1266881/*__LIB_5__::func_751*/;
			break;
		case 11:
			uParam0->f_11 = 1266872/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 1266372/*__LIB_5__::func_619*/;
			break;
		case 14:
			uParam0->f_11 = 1266363/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 109:
			uParam0->f_56 = 1266355/*__LIB_0__::func_467*/;
			break;
		case 79:
			*uParam0 = 1266331/*__LIB_5__::func_265*/;
			break;
		case 38:
			uParam0->f_9 = 1266251/*__LIB_5__::func_896*/;
			break;
		case 13:
			uParam0->f_2 = 1266155/*__LIB_5__::func_750*/;
			break;
		case 15:
			uParam0->f_2 = 1265950/*__LIB_9__::func_798*/;
			break;
		case 75:
			uParam0->f_4 = 1265934/*__LIB_5__::func_618*/;
			break;
		case 16:
			uParam0->f_5 = 1265125/*__LIB_8__::func_936*/;
			break;
		case 108:
			uParam0->f_55 = 1260418/*__LIB_10__::func_74*/;
			break;
		case 17:
			uParam0->f_17 = 1259601/*__LIB_10__::func_19*/;
			break;
		case 19:
			uParam0->f_17 = 1259575/*__LIB_5__::func_994*/;
			break;
		case 20:
			uParam0->f_3 = 1259491/*__LIB_5__::func_616*/;
			break;
		case 21:
			uParam0->f_3 = 1259427/*__LIB_5__::func_798*/;
			break;
		case 74:
			uParam0->f_53 = 1259275/*__LIB_5__::func_330*/;
			break;
		case 22:
			uParam0->f_24 = 1259108/*__LIB_5__::func_615*/;
			break;
		case 25:
			uParam0->f_23 = 1257962/*func_3738*/;
			break;
		case 30:
			uParam0->f_8 = 1257344/*__LIB_6__::func_675*/;
			break;
		case 31:
			uParam0->f_39 = 1257033/*__LIB_5__::func_749*/;
			break;
		case 33:
			uParam0->f_40 = 1256094/*__LIB_7__::func_62*/;
			break;
		case 34:
			uParam0->f_41 = 1254734/*__LIB_4__::func_500*/;
			break;
		case 36:
			uParam0->f_58 = 1254676/*__LIB_4__::func_499*/;
			break;
		case 35:
			uParam0->f_42 = 1206975/*__LIB_5__::func_614*/;
			break;
		case 45:
			uParam0->f_14 = 1206966/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 1206957/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 1206949/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1206926/*__LIB_4__::func_496*/;
			break;
		case 47:
			uParam0->f_43 = 1206798/*__LIB_4__::func_495*/;
			break;
		case 49:
			uParam0->f_8 = 1206757/*__LIB_4__::func_494*/;
			break;
		case 50:
			*uParam0 = 1206489/*__LIB_5__::func_747*/;
			break;
		case 51:
			*uParam0 = 1206420/*__LIB_6__::func_335*/;
			break;
		case 52:
			uParam0->f_15 = 1206409/*__LIB_4__::func_492*/;
			break;
		case 53:
			uParam0->f_13 = 1206175/*__LIB_4__::func_296*/;
			break;
		case 54:
			uParam0->f_45 = 1205825/*func_3713*/;
			break;
		case 56:
			uParam0->f_46 = 1205816/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1205745/*__LIB_7__::func_28*/;
			break;
		case 58:
			uParam0->f_13 = 1205511/*__LIB_4__::func_296*/;
			break;
		case 64:
			uParam0->f_47 = 1205311/*__LIB_5__::func_613*/;
			break;
		case 65:
			uParam0->f_21 = 1204413/*__LIB_7__::func_61*/;
			break;
		case 66:
			uParam0->f_21 = 1203731/*__LIB_6__::func_35*/;
			break;
		case 67:
			uParam0->f_21 = 1201432/*__LIB_6__::func_986*/;
			break;
		case 68:
			*uParam0 = 1200799/*__LIB_6__::func_985*/;
			break;
		case 69:
			*uParam0 = 1200790/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 1200778/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1200769/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1200757/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1200064/*__LIB_6__::func_984*/;
			break;
		case 84:
			uParam0->f_1 = 1199524/*func_3664*/;
			break;
		case 85:
			uParam0->f_1 = 1195420/*func_3656*/;
			break;
		case 87:
			uParam0->f_1 = 1191433/*__LIB_7__::func_27*/;
			break;
		case 88:
			uParam0->f_1 = 1190919/*__LIB_7__::func_60*/;
			break;
		case 89:
			uParam0->f_54 = 1190748/*__LIB_5__::func_894*/;
			break;
		case 90:
			uParam0->f_1 = 1190542/*__LIB_6__::func_333*/;
			break;
		case 91:
			uParam0->f_1 = 1190376/*__LIB_5__::func_328*/;
			break;
		case 92:
			uParam0->f_1 = 1188924/*func_3629*/;
			break;
		case 94:
			uParam0->f_1 = 1184787/*__LIB_6__::func_34*/;
			break;
		case 95:
			uParam0->f_22 = 1184491/*__LIB_5__::func_605*/;
			break;
		case 96:
			uParam0->f_1 = 1184461/*__LIB_5__::func_326*/;
			break;
		case 97:
			uParam0->f_1 = 1183794/*__LIB_5__::func_992*/;
			break;
		case 98:
			uParam0->f_1 = 1181145/*func_3592*/;
			break;
		case 100:
			uParam0->f_22 = 1173081/*__LIB_7__::func_882*/;
			break;
		case 101:
			uParam0->f_22 = 1171152/*__LIB_7__::func_881*/;
			break;
		case 78:
			uParam0->f_59 = 1170932/*__LIB_7__::func_817*/;
			break;
		case 125:
			uParam0->f_19 = 1170908/*__LIB_4__::func_412*/;
			break;
	}
}

int func_3592(int iParam0, int* iParam1)//Position - 0x1205D9
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
			if (Global_1853191 != __LIB_0__::getMinusOneOrNull())
			{
				if (__LIB_0__::func_121(PLAYER::GET_PLAYER_PED(Global_1853191)))
				{
					if (iVar1 < 4)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_140[0]))
						{
							func_1646(&(iParam1->f_140[0]), Global_1853191, 1, 0);
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
								func_1646(&(iParam1->f_140[iVar1]), bVar2, 1, 0);
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
			func_1646(&(iParam1->f_140[0]), PLAYER::PLAYER_ID(), 1, 0);
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

int func_3629(int iParam0, int* iParam1)//Position - 0x12243C
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
				__LIB_31__::func_66(&iVar1, &(iParam1->f_109), 48, 10f, 20f, 15f);
			}
			else
			{
				func_425(&iVar1, &(iParam1->f_109), 40);
			}
			VEHICLE::SET_DISABLE_MAP_COLLISION(iParam1->f_109);
			return 0;
		}
		else if (func_3631(&iVar1, &(iParam1->f_109), &(iParam1->f_109.f_1), &(Global_1946250.f_4508), 1))
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
							func_1646(&(iParam1->f_140[iVar3]), bVar5, 1, 0);
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

int func_3631(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x12274E
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
		if ((*uParam3)[iVar1] != __LIB_0__::getMinusOneOrNull() && __LIB_1__::func_693((*uParam3)[iVar1], 1, 1))
		{
			iVar3 = PLAYER::GET_PLAYER_PED((*uParam3)[iVar1]);
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				if (!ENTITY::DOES_ENTITY_EXIST((*uParam2)[iVar1]))
				{
					func_428(uParam2[iVar1], iVar3, 1, 0);
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

int func_3656(int iParam0, int* iParam1)//Position - 0x123D9C
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
			func_425(&iVar0, &(iParam1->f_109), 60);
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
		else if (func_427(&iVar0, &(iParam1->f_109), &(iParam1->f_109.f_1), 1, 1, 0, 0, 0, 1))
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
		func_1646(&(iParam1->f_140[0]), PLAYER::PLAYER_ID(), 1, 0);
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

int func_3664(int iParam0, var uParam1)//Position - 0x124DA4
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
				else if (!__LIB_31__::func_66(&iVar1, &(uParam1->f_122), 16, Var2))
				{
					bVar0 = false;
				}
				else
				{
					func_425(&iVar1, &(uParam1->f_122), 24);
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

void func_3713(int iParam0, var uParam1, int* iParam2, var uParam3, var uParam4)//Position - 0x126641
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
					func_2371(iParam2, 166);
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

void func_3738(int iParam0, int iParam1)//Position - 0x1331EA
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
								if (((((((!__LIB_1__::func_907(bVar7, 1) && !__LIB_5__::func_424(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_1__::func_101(uVar0[iVar6])) && !__LIB_4__::func_972(bVar7)) && !__LIB_4__::func_976(bVar7, 1)) && !__LIB_6__::func_336(bVar7)) && !func_853(bVar7))
								{
									bVar2 = true;
								}
							}
						}
						if ((((((((!bVar3 && __LIB_3__::func_360(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_5__::func_424(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_1__::func_101(uVar0[iVar6])) && !__LIB_4__::func_972(bVar7)) && !__LIB_4__::func_976(bVar7, 1)) && !__LIB_6__::func_336(bVar7)) && !func_853(bVar7))
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
						func_3739(iParam0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar2)
						{
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 0, 0, 1, 0, -1, -1, -1);
						}
						func_3739(iParam0);
					}
					Jump @653; //curOff = 634
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_3739(int iParam0)//Position - 0x13347A
{
	__LIB_7__::func_62(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_3796(var uParam0, int iParam1)//Position - 0x135B25
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1296540/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1296484/*__LIB_4__::func_571*/;
			break;
		case 2:
			uParam0->f_31 = 1296215/*__LIB_5__::func_341*/;
			break;
		case 3:
			uParam0->f_34 = 1296156/*__LIB_4__::func_570*/;
			break;
		case 4:
			uParam0->f_12 = 1296125/*__LIB_4__::func_569*/;
			break;
		case 37:
			uParam0->f_18 = 1296007/*__LIB_4__::func_568*/;
			break;
		case 38:
			uParam0->f_9 = 1295923/*__LIB_5__::func_898*/;
			break;
		case 6:
			uParam0->f_32 = 1295859/*__LIB_4__::func_567*/;
			break;
		case 111:
			uParam0->f_35 = 1295836/*__LIB_5__::func_340*/;
			break;
		case 11:
			uParam0->f_11 = 1295827/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 1295374/*__LIB_12__::func_69*/;
			break;
		case 14:
			uParam0->f_11 = 1295365/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 109:
			uParam0->f_56 = 1295357/*__LIB_0__::func_467*/;
			break;
		case 79:
			*uParam0 = 1295333/*__LIB_5__::func_265*/;
			break;
		case 13:
			uParam0->f_2 = 1295324/*__LIB_0__::func_114*/;
			break;
		case 15:
			uParam0->f_2 = 1290249/*__LIB_12__::func_283*/;
			break;
		case 75:
			uParam0->f_4 = 1290240/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1290056/*__LIB_5__::func_805*/;
			break;
		case 108:
			uParam0->f_55 = 1286957/*__LIB_16__::func_189*/;
			break;
		case 17:
			uParam0->f_17 = 1286451/*__LIB_10__::func_22*/;
			break;
		case 19:
			uParam0->f_17 = 1286425/*__LIB_5__::func_997*/;
			break;
		case 20:
			uParam0->f_3 = 1286347/*__LIB_5__::func_628*/;
			break;
		case 21:
			uParam0->f_3 = 1286284/*__LIB_5__::func_336*/;
			break;
		case 74:
			uParam0->f_53 = 1286069/*__LIB_9__::func_134*/;
			break;
		case 22:
			uParam0->f_24 = 1285950/*__LIB_5__::func_627*/;
			break;
		case 25:
			uParam0->f_23 = 1285003/*func_3893*/;
			break;
		case 30:
			uParam0->f_8 = 1284439/*__LIB_5__::func_626*/;
			break;
		case 31:
			uParam0->f_39 = 1284261/*__LIB_5__::func_625*/;
			break;
		case 33:
			uParam0->f_40 = 1283149/*__LIB_12__::func_9*/;
			break;
		case 34:
			uParam0->f_41 = 1282455/*__LIB_5__::func_624*/;
			break;
		case 36:
			uParam0->f_58 = 1282402/*__LIB_3__::func_945*/;
			break;
		case 35:
			uParam0->f_42 = 1281825/*__LIB_6__::func_908*/;
			break;
		case 45:
			uParam0->f_14 = 1281816/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 1281807/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 1281630/*__LIB_10__::func_21*/;
			break;
		case 77:
			uParam0->f_13 = 1281619/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1281121/*__LIB_7__::func_821*/;
			break;
		case 49:
			uParam0->f_8 = 1281080/*__LIB_4__::func_550*/;
			break;
		case 50:
			*uParam0 = 1281071/*__LIB_0__::func_114*/;
			break;
		case 51:
			*uParam0 = 1281062/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 1281051/*__LIB_4__::func_549*/;
			break;
		case 53:
			uParam0->f_13 = 1281040/*__LIB_3__::func_554*/;
			break;
		case 54:
			uParam0->f_45 = 1281032/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 1281023/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1281014/*__LIB_1__::func_804*/;
			break;
		case 58:
			uParam0->f_13 = 1280785/*__LIB_11__::func_983*/;
			break;
		case 64:
			uParam0->f_47 = 1274793/*__LIB_13__::func_81*/;
			break;
		case 65:
			uParam0->f_21 = 1273122/*__LIB_10__::func_23*/;
			break;
		case 66:
			uParam0->f_21 = 1272796/*__LIB_6__::func_392*/;
			break;
		case 67:
			uParam0->f_21 = 1272071/*__LIB_7__::func_819*/;
			break;
		case 68:
			*uParam0 = 1271526/*__LIB_6__::func_987*/;
			break;
		case 69:
			*uParam0 = 1271517/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 1271505/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1271496/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1271484/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1269978/*__LIB_7__::func_30*/;
			break;
		case 78:
			uParam0->f_59 = 1269528/*__LIB_8__::func_987*/;
			break;
		case 125:
			uParam0->f_19 = 1269512/*__LIB_4__::func_516*/;
			break;
	}
}

void func_3893(int iParam0, int iParam1)//Position - 0x139B8B
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
								if ((((!__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar7)) && !__LIB_1__::func_907(bVar7, 1)) && !__LIB_5__::func_424(bVar7)) && !__LIB_3__::func_728(bVar7, 14)) && !func_853(bVar7))
								{
									bVar0 = true;
								}
							}
						}
						if ((((((!bVar1 && __LIB_3__::func_360(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar7))) && !__LIB_1__::func_907(bVar7, 1)) && !__LIB_5__::func_424(bVar7)) && !__LIB_3__::func_728(bVar7, 14)) && !func_853(bVar7))
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
						func_3894(iParam0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_11__::func_984(1);
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var6, 0, 0, 1, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_3894(iParam0);
					}
					Jump @656; //curOff = 637
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_3894(int iParam0)//Position - 0x139E1E
{
	__LIB_12__::func_9(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_3965(var uParam0, int iParam1)//Position - 0x13C8A5
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1349034/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1348954/*__LIB_4__::func_631*/;
			break;
		case 2:
			uParam0->f_31 = 1348455/*__LIB_5__::func_348*/;
			break;
		case 3:
			uParam0->f_34 = 1348405/*__LIB_4__::func_630*/;
			break;
		case 4:
			uParam0->f_12 = 1348318/*__LIB_4__::func_629*/;
			break;
		case 5:
			uParam0->f_11 = 1348308/*__LIB_4__::func_628*/;
			break;
		case 37:
			uParam0->f_18 = 1348190/*__LIB_4__::func_627*/;
			break;
		case 38:
			uParam0->f_9 = 1348068/*__LIB_5__::func_905*/;
			break;
		case 6:
			uParam0->f_32 = 1347980/*__LIB_4__::func_626*/;
			break;
		case 111:
			uParam0->f_35 = 1347966/*__LIB_5__::func_904*/;
			break;
		case 11:
			uParam0->f_11 = 1347957/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 1347578/*__LIB_5__::func_645*/;
			break;
		case 14:
			uParam0->f_11 = 1347569/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 109:
			uParam0->f_56 = 1347561/*__LIB_0__::func_467*/;
			break;
		case 79:
			*uParam0 = 1347537/*__LIB_5__::func_265*/;
			break;
		case 13:
			uParam0->f_2 = 1347405/*__LIB_6__::func_394*/;
			break;
		case 15:
			uParam0->f_2 = 1347123/*__LIB_9__::func_799*/;
			break;
		case 75:
			uParam0->f_4 = 1347109/*__LIB_4__::func_624*/;
			break;
		case 16:
			uParam0->f_5 = 1346591/*__LIB_8__::func_224*/;
			break;
		case 108:
			uParam0->f_55 = 1342967/*__LIB_10__::func_75*/;
			break;
		case 17:
			uParam0->f_17 = 1342431/*__LIB_8__::func_939*/;
			break;
		case 19:
			uParam0->f_17 = 1342405/*__LIB_6__::func_3*/;
			break;
		case 20:
			uParam0->f_3 = 1342321/*__LIB_5__::func_643*/;
			break;
		case 21:
			uParam0->f_3 = 1342257/*__LIB_5__::func_798*/;
			break;
		case 74:
			uParam0->f_53 = 1342077/*__LIB_6__::func_910*/;
			break;
		case 22:
			uParam0->f_24 = 1341934/*__LIB_5__::func_642*/;
			break;
		case 25:
			uParam0->f_23 = 1341310/*func_4089*/;
			break;
		case 30:
			uParam0->f_8 = 1340795/*__LIB_6__::func_685*/;
			break;
		case 31:
			uParam0->f_39 = 1340510/*__LIB_5__::func_756*/;
			break;
		case 33:
			uParam0->f_40 = 1339839/*__LIB_7__::func_65*/;
			break;
		case 34:
			uParam0->f_41 = 1338575/*__LIB_4__::func_620*/;
			break;
		case 36:
			uParam0->f_58 = 1338530/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 1312488/*__LIB_5__::func_755*/;
			break;
		case 45:
			uParam0->f_14 = 1312479/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 1312470/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 1312462/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1312439/*__LIB_4__::func_616*/;
			break;
		case 47:
			uParam0->f_43 = 1312335/*__LIB_4__::func_615*/;
			break;
		case 49:
			uParam0->f_8 = 1312294/*__LIB_4__::func_494*/;
			break;
		case 50:
			*uParam0 = 1312080/*__LIB_5__::func_754*/;
			break;
		case 51:
			*uParam0 = 1312011/*__LIB_6__::func_335*/;
			break;
		case 52:
			uParam0->f_15 = 1312000/*__LIB_4__::func_613*/;
			break;
		case 53:
			uParam0->f_13 = 1311862/*__LIB_4__::func_302*/;
			break;
		case 54:
			uParam0->f_45 = 1311674/*__LIB_5__::func_347*/;
			break;
		case 56:
			uParam0->f_46 = 1311665/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1311488/*__LIB_6__::func_2*/;
			break;
		case 58:
			uParam0->f_13 = 1311350/*__LIB_4__::func_302*/;
			break;
		case 64:
			uParam0->f_47 = 1311342/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 1310504/*__LIB_7__::func_64*/;
			break;
		case 66:
			uParam0->f_21 = 1310397/*__LIB_4__::func_611*/;
			break;
		case 67:
			uParam0->f_21 = 1310333/*__LIB_4__::func_610*/;
			break;
		case 68:
			*uParam0 = 1309845/*__LIB_5__::func_346*/;
			break;
		case 69:
			*uParam0 = 1309836/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 1309824/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1309815/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1309803/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1309100/*__LIB_6__::func_1*/;
			break;
		case 84:
			uParam0->f_1 = 1309000/*__LIB_5__::func_902*/;
			break;
		case 85:
			uParam0->f_1 = 1307016/*func_4038*/;
			break;
		case 87:
			uParam0->f_1 = 1304593/*__LIB_6__::func_428*/;
			break;
		case 88:
			uParam0->f_1 = 1304584/*__LIB_0__::func_109*/;
			break;
		case 96:
			uParam0->f_1 = 1304521/*__LIB_4__::func_600*/;
			break;
		case 97:
			uParam0->f_1 = 1304200/*__LIB_6__::func_0*/;
			break;
		case 98:
			uParam0->f_1 = 1300193/*func_3987*/;
			break;
		case 100:
			uParam0->f_22 = 1297917/*__LIB_6__::func_441*/;
			break;
		case 78:
			uParam0->f_59 = 1297713/*__LIB_5__::func_998*/;
			break;
		case 125:
			uParam0->f_19 = 1297697/*__LIB_4__::func_516*/;
			break;
	}
}

int func_3987(int iParam0, int* iParam1)//Position - 0x13D6E1
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	__LIB_6__::func_427(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_109) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
		func_425(&iVar0, &(iParam1->f_109), 12);
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

int func_4038(int iParam0, int* iParam1)//Position - 0x13F188
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
			func_425(&iVar0, &(iParam1->f_109), 60);
			__LIB_3__::func_633(&(iParam1->f_109));
			return 0;
		}
		else
		{
			func_427(&iVar0, &(iParam1->f_109), &(iParam1->f_109.f_1), 1, 0, 0, 0, 0, 1);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_140[0]))
	{
		func_1646(&(iParam1->f_140[0]), PLAYER::PLAYER_ID(), 1, 0);
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

void func_4089(int iParam0, int iParam1)//Position - 0x14777E
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
								if ((((!__LIB_1__::func_907(bVar7, 1) && !__LIB_5__::func_424(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_1__::func_101(PLAYER::PLAYER_PED_ID())) && !func_853(bVar7))
								{
									bVar2 = true;
								}
							}
						}
						if (((((!bVar3 && __LIB_3__::func_360(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_5__::func_424(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_1__::func_101(PLAYER::PLAYER_PED_ID())) && !func_853(bVar7))
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
						func_4090(iParam0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar2)
						{
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 0, 0, 1, 0, -1, -1, -1);
						}
						func_4090(iParam0);
					}
					Jump @575; //curOff = 556
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_4090(int iParam0)//Position - 0x1479C0
{
	__LIB_7__::func_65(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_4133(var uParam0, int iParam1)//Position - 0x1495B3
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1358545/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1358489/*__LIB_4__::func_641*/;
			break;
		case 2:
			uParam0->f_31 = 1358270/*__LIB_5__::func_807*/;
			break;
		case 3:
			uParam0->f_34 = 1358219/*__LIB_4__::func_640*/;
			break;
		case 4:
			uParam0->f_12 = 1358186/*__LIB_4__::func_639*/;
			break;
		case 6:
			uParam0->f_32 = 1358122/*__LIB_4__::func_638*/;
			break;
		case 111:
			uParam0->f_35 = 1358113/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 79:
			*uParam0 = 1358089/*__LIB_5__::func_265*/;
			break;
		case 11:
			uParam0->f_11 = 1358080/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 1357988/*__LIB_8__::func_274*/;
			break;
		case 14:
			uParam0->f_11 = 1357979/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 109:
			uParam0->f_56 = 1357971/*__LIB_0__::func_467*/;
			break;
		case 15:
			uParam0->f_2 = 1357719/*__LIB_8__::func_196*/;
			break;
		case 13:
			uParam0->f_2 = 1357710/*__LIB_0__::func_114*/;
			break;
		case 75:
			uParam0->f_4 = 1357701/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1357692/*__LIB_0__::func_109*/;
			break;
		case 108:
			uParam0->f_55 = 1357683/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 1357639/*__LIB_5__::func_351*/;
			break;
		case 19:
			uParam0->f_17 = 1357628/*__LIB_3__::func_860*/;
			break;
		case 20:
			uParam0->f_3 = 1357581/*__LIB_8__::func_863*/;
			break;
		case 21:
			uParam0->f_3 = 1357529/*__LIB_5__::func_350*/;
			break;
		case 74:
			uParam0->f_53 = 1357473/*__LIB_5__::func_806*/;
			break;
		case 22:
			uParam0->f_24 = 1357391/*__LIB_4__::func_637*/;
			break;
		case 25:
			uParam0->f_23 = 1356424/*func_4170*/;
			break;
		case 30:
			uParam0->f_8 = 1356119/*__LIB_5__::func_647*/;
			break;
		case 31:
			uParam0->f_39 = 1356088/*__LIB_4__::func_635*/;
			break;
		case 33:
			uParam0->f_40 = 1355898/*__LIB_9__::func_285*/;
			break;
		case 34:
			uParam0->f_41 = 1351895/*__LIB_5__::func_646*/;
			break;
		case 36:
			uParam0->f_58 = 1351842/*__LIB_3__::func_945*/;
			break;
		case 35:
			uParam0->f_42 = 1350651/*__LIB_5__::func_906*/;
			break;
		case 45:
			uParam0->f_14 = 1350642/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 1350633/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 1350625/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1350614/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1350511/*__LIB_4__::func_632*/;
			break;
		case 49:
			uParam0->f_8 = 1350486/*__LIB_3__::func_941*/;
			break;
		case 50:
			*uParam0 = 1350448/*__LIB_5__::func_725*/;
			break;
		case 51:
			*uParam0 = 1350439/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 1350428/*__LIB_4__::func_270*/;
			break;
		case 53:
			uParam0->f_13 = 1350347/*__LIB_8__::func_193*/;
			break;
		case 54:
			uParam0->f_45 = 1350339/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 1350330/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1350320/*__LIB_3__::func_938*/;
			break;
		case 58:
			uParam0->f_13 = 1350113/*__LIB_8__::func_192*/;
			break;
		case 64:
			uParam0->f_47 = 1350105/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 1350097/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 1350089/*__LIB_0__::func_467*/;
			break;
		case 67:
			uParam0->f_21 = 1350081/*__LIB_0__::func_467*/;
			break;
		case 68:
			*uParam0 = 1350072/*__LIB_0__::func_109*/;
			break;
		case 69:
			*uParam0 = 1350063/*__LIB_0__::func_109*/;
			break;
		case 70:
			uParam0->f_48 = 1350051/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1350042/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1350030/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1350021/*__LIB_0__::func_114*/;
			break;
		case 73:
			uParam0->f_51 = 1350012/*__LIB_0__::func_114*/;
			break;
		case 78:
			uParam0->f_59 = 1350004/*__LIB_0__::func_467*/;
			break;
	}
}

void func_4170(int iParam0, int iParam1)//Position - 0x14B288
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
						func_4171(iParam0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_8__::func_194(1);
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(__LIB_7__::func_758(), true), ENTITY::GET_ENTITY_HEADING(__LIB_7__::func_758()), 2f, -13f, 0f), 0, 0, 1, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_4171(iParam0);
					}
					Jump @634; //curOff = 615
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_4171(int iParam0)//Position - 0x14B505
{
	__LIB_9__::func_285(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_4198(var uParam0, int iParam1)//Position - 0x14BADA
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1438007/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1437951/*__LIB_4__::func_687*/;
			break;
		case 2:
			uParam0->f_31 = 1436406/*__LIB_11__::func_992*/;
			break;
		case 3:
			uParam0->f_34 = 1436357/*__LIB_4__::func_686*/;
			break;
		case 4:
			uParam0->f_12 = 1436324/*__LIB_4__::func_685*/;
			break;
		case 6:
			uParam0->f_32 = 1436260/*__LIB_4__::func_684*/;
			break;
		case 111:
			uParam0->f_35 = 1436237/*__LIB_5__::func_360*/;
			break;
		case 79:
			*uParam0 = 1436213/*__LIB_5__::func_265*/;
			break;
		case 37:
			uParam0->f_18 = 1436095/*__LIB_4__::func_683*/;
			break;
		case 38:
			uParam0->f_9 = 1436028/*__LIB_5__::func_910*/;
			break;
		case 11:
			uParam0->f_11 = 1436019/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 1435674/*__LIB_12__::func_78*/;
			break;
		case 14:
			uParam0->f_11 = 1435665/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 109:
			uParam0->f_56 = 1435657/*__LIB_0__::func_467*/;
			break;
		case 15:
			uParam0->f_2 = 1430333/*__LIB_12__::func_285*/;
			break;
		case 13:
			uParam0->f_2 = 1430324/*__LIB_0__::func_114*/;
			break;
		case 75:
			uParam0->f_4 = 1430315/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1430290/*__LIB_5__::func_323*/;
			break;
		case 108:
			uParam0->f_55 = 1422096/*func_4303*/;
			break;
		case 17:
			uParam0->f_17 = 1421514/*__LIB_12__::func_77*/;
			break;
		case 19:
			uParam0->f_17 = 1421488/*__LIB_6__::func_5*/;
			break;
		case 20:
			uParam0->f_3 = 1421427/*__LIB_12__::func_71*/;
			break;
		case 21:
			uParam0->f_3 = 1421307/*__LIB_5__::func_810*/;
			break;
		case 74:
			uParam0->f_53 = 1421251/*__LIB_5__::func_809*/;
			break;
		case 22:
			uParam0->f_24 = 1421169/*__LIB_4__::func_676*/;
			break;
		case 25:
			uParam0->f_23 = 1420197/*func_4292*/;
			break;
		case 30:
			uParam0->f_8 = 1419457/*__LIB_5__::func_650*/;
			break;
		case 31:
			uParam0->f_39 = 1419187/*__LIB_5__::func_760*/;
			break;
		case 33:
			uParam0->f_40 = 1418251/*__LIB_12__::func_76*/;
			break;
		case 34:
			uParam0->f_41 = 1414907/*__LIB_5__::func_355*/;
			break;
		case 36:
			uParam0->f_58 = 1414854/*__LIB_3__::func_945*/;
			break;
		case 35:
			uParam0->f_42 = 1414171/*__LIB_5__::func_909*/;
			break;
		case 45:
			uParam0->f_14 = 1414162/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 1414153/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 1413710/*__LIB_16__::func_191*/;
			break;
		case 77:
			uParam0->f_13 = 1413699/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1413596/*__LIB_4__::func_672*/;
			break;
		case 49:
			uParam0->f_8 = 1413571/*__LIB_3__::func_941*/;
			break;
		case 50:
			*uParam0 = 1413533/*__LIB_5__::func_725*/;
			break;
		case 51:
			*uParam0 = 1413509/*__LIB_6__::func_899*/;
			break;
		case 52:
			uParam0->f_15 = 1413498/*__LIB_4__::func_270*/;
			break;
		case 53:
			uParam0->f_13 = 1413419/*__LIB_11__::func_988*/;
			break;
		case 54:
			uParam0->f_45 = 1413411/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 1413402/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1413392/*__LIB_3__::func_938*/;
			break;
		case 58:
			uParam0->f_13 = 1413163/*__LIB_11__::func_987*/;
			break;
		case 64:
			uParam0->f_47 = 1366787/*__LIB_16__::func_193*/;
			break;
		case 65:
			uParam0->f_21 = 1365649/*__LIB_10__::func_24*/;
			break;
		case 66:
			uParam0->f_21 = 1365426/*__LIB_5__::func_908*/;
			break;
		case 67:
			uParam0->f_21 = 1364531/*__LIB_5__::func_907*/;
			break;
		case 68:
			*uParam0 = 1363986/*__LIB_6__::func_989*/;
			break;
		case 69:
			*uParam0 = 1363977/*__LIB_0__::func_109*/;
			break;
		case 70:
			uParam0->f_48 = 1363965/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1363956/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1363944/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1361850/*__LIB_9__::func_286*/;
			break;
		case 73:
			uParam0->f_51 = 1360082/*func_4205*/;
			break;
		case 78:
			uParam0->f_59 = 1359549/*__LIB_8__::func_974*/;
			break;
	}
}

int func_4205(int iParam0, var uParam1)//Position - 0x14C0D2
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
							__LIB_9__::func_295(iVar0, &Var2);
							__LIB_9__::func_326(uParam1->f_22.f_105, &Var2, 1, 1, 0);
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
									__LIB_4__::func_648();
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

void func_4292(int iParam0, int iParam1)//Position - 0x15ABA5
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
								if ((((!__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar7)) && !__LIB_1__::func_907(bVar7, 1)) && !__LIB_5__::func_424(bVar7)) && !__LIB_3__::func_728(bVar7, 14)) && !func_853(bVar7))
								{
									bVar0 = true;
								}
							}
						}
						if ((((((!bVar1 && __LIB_3__::func_360(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar7))) && !__LIB_1__::func_907(bVar7, 1)) && !__LIB_5__::func_424(bVar7)) && !__LIB_3__::func_728(bVar7, 14)) && !func_853(bVar7))
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
						func_4293(iParam0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_11__::func_989(1);
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var6, 0, 0, 1, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_4293(iParam0);
					}
					Jump @656; //curOff = 637
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_4293(int iParam0)//Position - 0x15AE38
{
	__LIB_12__::func_76(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

int func_4303(var uParam0, var uParam1, var uParam2)//Position - 0x15B310
{
	int iVar0;
	int iVar1;
	bool bVar2;
	char* sVar3;
	var uVar4;
	*uParam2 = 1;
	if (__LIB_3__::func_965() || __LIB_4__::func_671())
	{
		return 0;
	}
	if (__LIB_5__::func_187(PLAYER::PLAYER_ID(), -1))
	{
		if (__LIB_0__::func_1("HELP_APC_TUR" /* GXT: Hold ~INPUT_VEH_SHUFFLE~ to move between the passenger turret and the driver seat while stationary. */))
		{
			return 0;
		}
		if (__LIB_11__::func_994() != PLAYER::PLAYER_ID())
		{
			return 0;
		}
	}
	if (Global_262145.f_21612 /* Tunable: 311722703 */ && __LIB_0__::func_389(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	iVar0 = __LIB_10__::func_11();
	if ((!__LIB_0__::func_893() || __LIB_3__::func_558()) || HUD::IS_PAUSE_MENU_ACTIVE())
	{
		__LIB_9__::func_287(uParam1, 1);
	}
	if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
		{
			if (__LIB_3__::func_363(uParam1->f_22.f_94, 0))
			{
				HUD::CLEAR_HELP(true);
				__LIB_3__::func_122(&(uParam1->f_22.f_94));
			}
			__LIB_9__::func_287(uParam1, 1);
		}
	}
	if (__LIB_3__::func_717(uParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
		{
			if (__LIB_5__::func_187(PLAYER::PLAYER_ID(), -1))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
				{
					if (__LIB_4__::func_306(PLAYER::PLAYER_ID()))
					{
						__LIB_3__::func_122(&(uParam1->f_22.f_94));
					}
					if (((((__LIB_5__::func_757(iVar0) && __LIB_4__::func_680(OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(iVar0, true), ENTITY::GET_ENTITY_HEADING(iVar0), 0f, -1f, 0f))) && !PED::GET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 373)) && __LIB_12__::func_81(uParam1, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), iVar0, 1)) && !__LIB_12__::func_285(*uParam0)) || ((__LIB_4__::func_661() && !__LIB_12__::func_285(*uParam0)) && __LIB_1__::func_659(PLAYER::PLAYER_ID())))
					{
						if (MISC::IS_PC_VERSION())
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
								if (VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("voltic2")) || VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("oppressor")))
								{
									if ((__LIB_3__::func_363(uParam1->f_22.f_94, 0) || __LIB_3__::func_56("GR_ENTERTRUCK" /* GXT: Press ~a~ to modify this vehicle in your Mobile Operations Center. */, "STRING")) || __LIB_3__::func_56("GR_STORETRUCK" /* GXT: Press ~a~ to store this vehicle in your Mobile Operations Center. */, "STRING"))
									{
										PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 351 /*INPUT_VEH_ROCKET_BOOST*/, true);
									}
								}
								if (VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("scramjet")))
								{
									if ((__LIB_3__::func_363(uParam1->f_22.f_94, 0) || __LIB_3__::func_56("GR_ENTERTRUCK" /* GXT: Press ~a~ to modify this vehicle in your Mobile Operations Center. */, "STRING")) || __LIB_3__::func_56("GR_STORETRUCK" /* GXT: Press ~a~ to store this vehicle in your Mobile Operations Center. */, "STRING"))
									{
										PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 350 /*INPUT_VEH_CAR_JUMP*/, true);
									}
								}
							}
						}
						__LIB_4__::func_563(1);
						PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 357 /*INPUT_VEH_TRANSFORM*/, true);
						if (!BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318, 5))
						{
							if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) || ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
							{
								if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
								{
									if (__LIB_0__::func_389(PLAYER::PLAYER_ID()))
									{
										bVar2 = false;
										if (VEHICLE::GET_VEHICLE_TRAILER_VEHICLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), &iVar1))
										{
											if (ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("trailersmall2"))
											{
												bVar2 = true;
												HUD::DISPLAY_HELP_TEXT_THIS_FRAME("GR_ETFA_TRAIL" /* GXT: You cannot modify this vehicle while a trailer is attached. The Anti-Aircraft Trailer can only be modified in the Bunker. */, false);
											}
										}
										if (!bVar2)
										{
											HUD::DISPLAY_HELP_TEXT_THIS_FRAME("GR_ETFE_TRAIL" /* GXT: You cannot modify this vehicle while a trailer is attached. */, false);
										}
									}
									else if (__LIB_4__::func_633(PLAYER::PLAYER_ID()))
									{
										HUD::DISPLAY_HELP_TEXT_THIS_FRAME("GR_ETFS_TRAIL" /* GXT: You cannot store this vehicle while a trailer is attached. */, false);
									}
								}
								return 0;
							}
							if (__LIB_1__::func_587(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false))))
							{
								if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
								{
									if (__LIB_0__::func_389(PLAYER::PLAYER_ID()))
									{
										HUD::DISPLAY_HELP_TEXT_THIS_FRAME("GR_ETFE_AIR" /* GXT: You cannot modify this aircraft in your Mobile Operations Center. */, false);
									}
									else if (__LIB_4__::func_633(PLAYER::PLAYER_ID()))
									{
										HUD::DISPLAY_HELP_TEXT_THIS_FRAME("GR_ETFS_AIR" /* GXT: You cannot store this aircraft in your Mobile Operations Center. */, false);
									}
								}
								return 0;
							}
							if (__LIB_4__::func_633(PLAYER::PLAYER_ID()) && __LIB_0__::func_541(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 0))
							{
								if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
								{
									HUD::DISPLAY_HELP_TEXT_THIS_FRAME("MP_TRUCK_PEG" /* GXT: You cannot store a Pegasus vehicle in your Mobile Operations Center. */, false);
								}
								return 0;
							}
							if (__LIB_0__::func_389(PLAYER::PLAYER_ID()) && !__LIB_7__::func_833(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
							{
								if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
								{
									HUD::DISPLAY_HELP_TEXT_THIS_FRAME("GR_ETFE_NOTV" /* GXT: You cannot modify this vehicle in your Mobile Operations Center. */, false);
								}
								return 0;
							}
							if (__LIB_0__::func_389(PLAYER::PLAYER_ID()) && (__LIB_4__::func_679(PLAYER::PLAYER_ID()) || __LIB_4__::func_678(PLAYER::PLAYER_ID())))
							{
								if ((!HUD::IS_PAUSE_MENU_ACTIVE() && !__LIB_0__::func_194(8, -1)) && !__LIB_0__::func_193())
								{
									if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
									{
										HUD::DISPLAY_HELP_TEXT_THIS_FRAME("GR_ETFE_VEHIN" /* GXT: You must remove the vehicle currently inside your Mobile Operations Center to modify this vehicle. */, false);
									}
								}
								return 0;
							}
							if (__LIB_0__::func_389(PLAYER::PLAYER_ID()))
							{
								sVar3 = "GR_ENTERTRUCK" /* GXT: Press ~a~ to modify this vehicle in your Mobile Operations Center. */;
							}
							else if (__LIB_4__::func_633(PLAYER::PLAYER_ID()))
							{
								sVar3 = "GR_STORETRUCK" /* GXT: Press ~a~ to store this vehicle in your Mobile Operations Center. */;
							}
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 351 /*INPUT_VEH_ROCKET_BOOST*/, true);
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 357 /*INPUT_VEH_TRANSFORM*/, true);
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 350 /*INPUT_VEH_CAR_JUMP*/, true);
							if (uParam1->f_22.f_94 == -1 && __LIB_5__::func_187(PLAYER::PLAYER_ID(), -1))
							{
								__LIB_5__::func_569(&(uParam1->f_22.f_94), 5, sVar3, 0, 0, 0, 0);
								if (__LIB_2__::func_754(PLAYER::PLAYER_ID()))
								{
									__LIB_4__::func_530(0);
								}
							}
							if (__LIB_0__::func_77(0))
							{
								__LIB_3__::func_122(&(uParam1->f_22.f_94));
							}
							if ((__LIB_3__::func_113(uParam1->f_22.f_94, 1) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) || BitTest(uParam1->f_22, 1))
							{
								__LIB_9__::func_287(uParam1, 0);
								if (!__LIB_4__::func_633(PLAYER::PLAYER_ID()) || func_4310(uParam1, uParam0))
								{
									if (__LIB_12__::func_72(&(uParam1->f_22), PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
									{
										__LIB_3__::func_122(&(uParam1->f_22.f_94));
										if (BitTest(uParam1->f_22, 1))
										{
											MISC::CLEAR_BIT(&(uParam1->f_22), 1);
										}
										if (__LIB_5__::func_651(3, &uVar4))
										{
											MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318), 16);
										}
										else if (__LIB_5__::func_651(7, &uVar4))
										{
											MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318), 17);
										}
										if (__LIB_2__::func_754(PLAYER::PLAYER_ID()))
										{
											__LIB_4__::func_527(1);
											VEHICLE::MODIFY_VEHICLE_TOP_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 0f);
											VEHICLE::SET_VEHICLE_MAX_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), -1f);
											VEHICLE::STOP_BRINGING_VEHICLE_TO_HALT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false));
										}
										if (!BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318, 19))
										{
											__LIB_6__::func_844(1, 0);
											MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318), 19);
										}
										__LIB_5__::func_435(1, 81);
										__LIB_4__::func_528(1);
									}
								}
							}
						}
						else
						{
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 104 /*INPUT_VEH_SHUFFLE*/, true);
							__LIB_1__::func_33(0);
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 23 /*INPUT_ENTER*/, true);
							PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/);
							PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/);
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/, true);
							PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/, true);
							HUD::DISABLE_FRONTEND_THIS_FRAME();
							HUD::SUPPRESS_FRONTEND_RENDERING_THIS_FRAME();
							VEHICLE::BRING_VEHICLE_TO_HALT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1f, 1, false);
							if (__LIB_5__::func_356() && __LIB_5__::func_629())
							{
								if (__LIB_2__::func_754(PLAYER::PLAYER_ID()))
								{
									__LIB_4__::func_669(1);
									__LIB_4__::func_663(1);
								}
								__LIB_5__::func_457(1);
								__LIB_11__::func_992(81, uParam1, 0, 0);
								__LIB_1__::func_376(PLAYER::PLAYER_ID(), 0, 0, 0);
								if (__LIB_0__::func_541(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 0))
								{
									__LIB_4__::func_553(PLAYER::PLAYER_ID(), 81, 2);
								}
								else if (__LIB_0__::func_872(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1))
								{
									__LIB_4__::func_956(PLAYER::PLAYER_ID(), 81, 2);
								}
								__LIB_4__::func_562(__LIB_1__::func_694(PLAYER::PLAYER_ID()), 25f, 0);
								__LIB_4__::func_563(0);
								return 1;
							}
						}
					}
					else
					{
						__LIB_4__::func_563(0);
						if (__LIB_3__::func_363(uParam1->f_22.f_94, 0))
						{
							HUD::CLEAR_HELP(true);
							__LIB_3__::func_122(&(uParam1->f_22.f_94));
						}
						__LIB_9__::func_287(uParam1, 1);
					}
				}
				else
				{
					if (__LIB_5__::func_187(PLAYER::PLAYER_ID(), -1))
					{
						if (__LIB_3__::func_363(uParam1->f_22.f_94, 0))
						{
							HUD::CLEAR_HELP(true);
							__LIB_3__::func_122(&(uParam1->f_22.f_94));
						}
					}
					__LIB_9__::func_287(uParam1, 1);
				}
			}
			else
			{
				__LIB_16__::func_192(*uParam0);
				if (__LIB_3__::func_950(PLAYER::PLAYER_ID()))
				{
					if (!__LIB_0__::func_864(&(uParam1->f_22.f_101)))
					{
						__LIB_0__::func_795(&(uParam1->f_22.f_101), 0, 0);
					}
					else if (__LIB_0__::func_937(&(uParam1->f_22.f_101), 10000, 0))
					{
						if (CAM::IS_SCREEN_FADED_OUT())
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 0)
							{
								TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
							}
							if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
							{
								NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false);
							}
							CAM::DO_SCREEN_FADE_IN(500);
							__LIB_1__::func_376(PLAYER::PLAYER_ID(), 1, 0, 0);
							__LIB_4__::func_664(0);
							__LIB_4__::func_534(0);
							__LIB_4__::func_668(0);
							__LIB_0__::clearF_1Prop(&(uParam1->f_22.f_101));
						}
					}
					if (__LIB_1__::func_693(Global_1946250.f_3630, 1, 1))
					{
					}
					if (!__LIB_5__::func_301(Global_1946250.f_3630) && __LIB_2__::func_730(Global_1946250.f_3630))
					{
						PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 1);
						__LIB_1__::func_33(0);
						__LIB_3__::func_669(Global_1946250.f_3630);
						MISC::SET_BIT(&(Global_1946250.f_506), 1);
						Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 = PLAYER::INT_TO_PLAYERINDEX(Global_1946250.f_3280);
						__LIB_4__::func_561(1);
						__LIB_5__::func_435(1, 81);
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, true);
						Global_1853185 = PLAYER::INT_TO_PLAYERINDEX(Global_1946250.f_3280);
						__LIB_0__::clearF_1Prop(&(uParam1->f_22.f_101));
					}
					if (__LIB_5__::func_301(Global_1946250.f_3630) || __LIB_2__::func_730(Global_1946250.f_3630))
					{
						if (__LIB_2__::func_754(PLAYER::PLAYER_ID()))
						{
							__LIB_4__::func_527(1);
							__LIB_4__::func_669(1);
							__LIB_4__::func_663(1);
						}
						return 1;
					}
				}
				else if (BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1, 7))
				{
					if (__LIB_5__::func_196(Global_1946250.f_3630) != 81 && !__LIB_2__::func_730(PLAYER::PLAYER_ID()))
					{
						if (CAM::IS_SCREEN_FADED_OUT())
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 0)
							{
								TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
							}
							if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
							{
								NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false);
							}
							CAM::DO_SCREEN_FADE_IN(500);
							__LIB_1__::func_376(PLAYER::PLAYER_ID(), 1, 0, 0);
							__LIB_4__::func_664(0);
							__LIB_4__::func_534(0);
							__LIB_4__::func_668(0);
							MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1), 7);
							__LIB_0__::clearF_1Prop(&(uParam1->f_22.f_101));
						}
					}
				}
			}
		}
		else
		{
			if (__LIB_3__::func_363(uParam1->f_22.f_94, 0))
			{
				HUD::CLEAR_HELP(true);
				__LIB_3__::func_122(&(uParam1->f_22.f_94));
			}
			__LIB_9__::func_287(uParam1, 1);
		}
	}
	else if (__LIB_3__::func_363(uParam1->f_22.f_94, 0))
	{
		HUD::CLEAR_HELP(true);
		__LIB_3__::func_122(&(uParam1->f_22.f_94));
	}
	if (((__LIB_0__::func_1("GR_ETFE_NOTV" /* GXT: You cannot modify this vehicle in your Mobile Operations Center. */) || __LIB_0__::func_1("GR_ETFE_TRAIL" /* GXT: You cannot modify this vehicle while a trailer is attached. */)) || __LIB_0__::func_1("GR_ETFS_TRAIL" /* GXT: You cannot store this vehicle while a trailer is attached. */)) || __LIB_0__::func_1("GR_ETFA_TRAIL" /* GXT: You cannot modify this vehicle while a trailer is attached. The Anti-Aircraft Trailer can only be modified in the Bunker. */))
	{
		HUD::CLEAR_HELP(true);
	}
	return 0;
}

int func_4310(var uParam0, var uParam1)//Position - 0x15C54A
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	iVar2 = -1;
	iVar6 = 18;
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Player_Vehicle", 3))
	{
		if (DECORATOR::DECOR_EXIST_ON(iVar0, "Player_Vehicle"))
		{
			if (DECORATOR::DECOR_GET_INT(iVar0, "Player_Vehicle") == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()))
			{
				bVar3 = true;
			}
			else
			{
				bVar4 = true;
			}
		}
	}
	if (bVar3 || (!bVar4 && ENTITY::DOES_ENTITY_EXIST(iVar0)))
	{
		__LIB_1__::func_775(156, &iVar2, 1);
		__LIB_1__::func_660(__LIB_1__::func_463(), &iVar1);
		if (iVar1 == 156 && bVar3)
		{
			MISC::SET_BIT(&(Global_1852994.f_22), 27);
			MISC::CLEAR_BIT(&(Global_1852994.f_22), 19);
			MISC::CLEAR_BIT(&(Global_1852994.f_22), 10);
			return 1;
		}
		else if (iVar2 < 0)
		{
			Global_1852994.f_189 = iVar0;
			MISC::CLEAR_BIT(&(Global_1852994.f_22), 19);
			if (!bVar3)
			{
				__LIB_10__::func_542(iVar0, &(Global_1852994.f_29), 1);
				Global_1852994.f_183 = 0;
				if (VEHICLE::GET_NUM_MOD_KITS(iVar0) > 0)
				{
					VEHICLE::SET_VEHICLE_MOD_KIT(iVar0, 0);
				}
				if (VEHICLE::GET_VEHICLE_MOD_KIT(iVar0) >= 0)
				{
					Global_1852994.f_173 = VEHICLE::GET_NUM_VEHICLE_MODS(iVar0, 11) + 1;
					Global_1852994.f_174 = VEHICLE::GET_NUM_VEHICLE_MODS(iVar0, 12) + 1;
					Global_1852994.f_175 = VEHICLE::GET_NUM_VEHICLE_MODS(iVar0, 4) + 1;
					Global_1852994.f_176 = VEHICLE::GET_NUM_VEHICLE_MODS(iVar0, 23) + 1;
					Global_1852994.f_177 = VEHICLE::GET_NUM_VEHICLE_MODS(iVar0, 14) + 1;
					Global_1852994.f_178 = VEHICLE::GET_NUM_VEHICLE_MODS(iVar0, 16) + 1;
					Global_1852994.f_179 = VEHICLE::GET_NUM_VEHICLE_MODS(iVar0, 15) + 1;
					Global_1852994.f_180 = VEHICLE::GET_VEHICLE_COLOURS_WHICH_CAN_BE_SET(iVar0);
					Global_1852994.f_181 = VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(iVar0);
					Global_1852994.f_182 = __LIB_0__::func_294(iVar0);
					Global_1852994.f_183 = 1;
				}
				MISC::SET_BIT(&(Global_1852994.f_22), 19);
			}
			MISC::SET_BIT(&(Global_1852994.f_22), 27);
			return 1;
		}
		else
		{
			__LIB_1__::func_775(156, &iVar2, 1);
			if (bVar3 && !__LIB_5__::func_652(Global_1585857[iVar2 /*142*/].f_66, __LIB_5__::func_790(iVar1)))
			{
				iVar5 = 1;
			}
			if (bVar3 && iVar1 == 223)
			{
				if (Global_1585857[iVar2 /*142*/].f_66 != joaat("oppressor2"))
				{
					iVar5 = 1;
				}
			}
			if (bVar3 && iVar5 == 0)
			{
				HUD::SET_WARNING_MESSAGE_WITH_HEADER("MP_TRUCK_FULL" /* GXT: Personal Vehicle Storage Full */, "MP_TRUCK_FULL2" /* GXT: Adding this vehicle to your Mobile Operations Center will cause your currently stored Personal Vehicle to be transferred to a Garage. */, iVar6, 0, false, -1, 0, 0, true, 0);
			}
			else if (bVar3 && iVar5)
			{
				iVar6 = 16;
				if (iVar1 == 223)
				{
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("MP_TRUCK_FULL" /* GXT: Personal Vehicle Storage Full */, "MP_TRUCK_FULLT" /* GXT: You cannot store this vehicle in your Mobile Operations Center. The vehicle in the Mobile Operations Center cannot be moved to your Terrorbyte. */, iVar6, 0, false, -1, 0, 0, true, 0);
				}
				else
				{
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("MP_TRUCK_FULL" /* GXT: Personal Vehicle Storage Full */, "MP_TRUCK_FULLC" /* GXT: You cannot store this vehicle in your Mobile Operations Center. The vehicle in the Mobile Operations Center cannot be moved to your Clubhouse. */, iVar6, 0, false, -1, 0, 0, true, 0);
				}
			}
			else
			{
				HUD::SET_WARNING_MESSAGE_WITH_HEADER("MP_TRUCK_FULL" /* GXT: Personal Vehicle Storage Full */, "MP_TRUCK_FULL1" /* GXT: Adding this vehicle to your Mobile Operations Center will cause your currently stored Personal Vehicle (and any purchased upgrades) to be lost. */, iVar6, 0, false, -1, 0, 0, true, 0);
			}
			if (!BitTest(uParam1->f_3, 9) && !(bVar3 && iVar5))
			{
				if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) || BitTest(uParam1->f_3, 11))
				{
					Global_1852994.f_189 = iVar0;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "OK", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					__LIB_10__::func_542(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), &(Global_1852994.f_29), 1);
					Global_1852994.f_183 = 0;
					if (VEHICLE::GET_NUM_MOD_KITS(iVar0) > 0)
					{
						VEHICLE::SET_VEHICLE_MOD_KIT(iVar0, 0);
					}
					if (VEHICLE::GET_VEHICLE_MOD_KIT(iVar0) >= 0)
					{
						Global_1852994.f_173 = VEHICLE::GET_NUM_VEHICLE_MODS(iVar0, 11) + 1;
						Global_1852994.f_174 = VEHICLE::GET_NUM_VEHICLE_MODS(iVar0, 12) + 1;
						Global_1852994.f_175 = VEHICLE::GET_NUM_VEHICLE_MODS(iVar0, 4) + 1;
						Global_1852994.f_176 = VEHICLE::GET_NUM_VEHICLE_MODS(iVar0, 23) + 1;
						Global_1852994.f_177 = VEHICLE::GET_NUM_VEHICLE_MODS(iVar0, 14) + 1;
						Global_1852994.f_178 = VEHICLE::GET_NUM_VEHICLE_MODS(iVar0, 16) + 1;
						Global_1852994.f_179 = VEHICLE::GET_NUM_VEHICLE_MODS(iVar0, 15) + 1;
						Global_1852994.f_180 = VEHICLE::GET_VEHICLE_COLOURS_WHICH_CAN_BE_SET(iVar0);
						Global_1852994.f_181 = VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(iVar0);
						Global_1852994.f_182 = __LIB_0__::func_294(iVar0);
						Global_1852994.f_183 = 1;
					}
					MISC::SET_BIT(&(Global_1852994.f_22), 27);
					MISC::SET_BIT(&(uParam1->f_3), 11);
					if (bVar3 && iVar5 == 0)
					{
						MISC::SET_BIT(&(Global_1852994.f_22), 10);
						MISC::CLEAR_BIT(&(Global_1852994.f_22), 19);
					}
					else
					{
						MISC::SET_BIT(&(Global_1852994.f_22), 19);
						MISC::CLEAR_BIT(&(Global_1852994.f_22), 10);
						if (!bVar3)
						{
							__LIB_1__::func_891(1, 0, 1, 0, 0, 0, 0);
						}
						if (iVar5 || !bVar3)
						{
							MISC::SET_BIT(&(Global_1852994.f_22), 28);
						}
					}
					return 1;
				}
			}
			else if (!PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
			{
				MISC::CLEAR_BIT(&(uParam1->f_3), 9);
			}
			if (!BitTest(uParam1->f_3, 10))
			{
				if ((PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/) || PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED()) || !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "CANCEL", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					HUD::CLEAR_HELP(true);
					__LIB_3__::func_122(&(uParam0->f_22.f_94));
					__LIB_9__::func_287(uParam0, 1);
					if (__LIB_2__::func_754(PLAYER::PLAYER_ID()))
					{
						__LIB_4__::func_530(0);
					}
				}
			}
			else if (!PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/))
			{
				MISC::CLEAR_BIT(&(uParam1->f_3), 10);
			}
		}
	}
	else if (bVar4)
	{
		if (__LIB_3__::func_363(uParam0->f_22.f_94, 0))
		{
			HUD::CLEAR_HELP(true);
			__LIB_3__::func_122(&(uParam0->f_22.f_94));
			if (__LIB_2__::func_754(PLAYER::PLAYER_ID()))
			{
				__LIB_4__::func_530(0);
			}
		}
	}
	return 0;
}

void func_4364(var uParam0, int iParam1)//Position - 0x15F140
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1473746/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1473630/*__LIB_4__::func_745*/;
			break;
		case 2:
			uParam0->f_31 = 1472400/*__LIB_7__::func_67*/;
			break;
		case 3:
			uParam0->f_34 = 1472330/*__LIB_4__::func_744*/;
			break;
		case 4:
			uParam0->f_12 = 1472157/*__LIB_4__::func_743*/;
			break;
		case 6:
			uParam0->f_32 = 1472033/*__LIB_4__::func_742*/;
			break;
		case 106:
			uParam0->f_52 = 1471810/*__LIB_6__::func_399*/;
			break;
		case 111:
			uParam0->f_35 = 1471796/*__LIB_5__::func_924*/;
			break;
		case 79:
			*uParam0 = 1471772/*__LIB_5__::func_265*/;
			break;
		case 37:
			uParam0->f_18 = 1471654/*__LIB_4__::func_741*/;
			break;
		case 38:
			uParam0->f_9 = 1471416/*__LIB_6__::func_398*/;
			break;
		case 11:
			uParam0->f_11 = 1471407/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 1469703/*__LIB_5__::func_663*/;
			break;
		case 14:
			uParam0->f_11 = 1469694/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 109:
			uParam0->f_56 = 1469686/*__LIB_0__::func_467*/;
			break;
		case 15:
			uParam0->f_2 = 1469180/*__LIB_9__::func_801*/;
			break;
		case 13:
			uParam0->f_2 = 1469141/*__LIB_5__::func_370*/;
			break;
		case 44:
			*uParam0 = 1469132/*__LIB_0__::func_114*/;
			break;
		case 75:
			uParam0->f_4 = 1469123/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1468655/*__LIB_9__::func_509*/;
			break;
		case 108:
			uParam0->f_55 = 1466616/*__LIB_9__::func_508*/;
			break;
		case 17:
			uParam0->f_17 = 1464482/*__LIB_9__::func_507*/;
			break;
		case 19:
			uParam0->f_17 = 1464456/*__LIB_6__::func_10*/;
			break;
		case 20:
			uParam0->f_3 = 1464372/*__LIB_5__::func_919*/;
			break;
		case 21:
			uParam0->f_3 = 1464272/*__LIB_6__::func_918*/;
			break;
		case 74:
			uParam0->f_53 = 1464105/*__LIB_5__::func_369*/;
			break;
		case 22:
			uParam0->f_24 = 1464002/*__LIB_5__::func_662*/;
			break;
		case 25:
			uParam0->f_23 = 1463350/*func_4485*/;
			break;
		case 30:
			uParam0->f_8 = 1462850/*__LIB_6__::func_691*/;
			break;
		case 31:
			uParam0->f_39 = 1462557/*__LIB_5__::func_762*/;
			break;
		case 33:
			uParam0->f_40 = 1461559/*__LIB_9__::func_506*/;
			break;
		case 32:
			*uParam0 = 1461455/*__LIB_5__::func_814*/;
			break;
		case 34:
			uParam0->f_41 = 1459310/*__LIB_5__::func_367*/;
			break;
		case 35:
			uParam0->f_42 = 1372235/*__LIB_5__::func_649*/;
			break;
		case 36:
			uParam0->f_58 = 1459250/*__LIB_5__::func_366*/;
			break;
		case 45:
			uParam0->f_14 = 1459241/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 1459232/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 1458966/*__LIB_5__::func_813*/;
			break;
		case 77:
			uParam0->f_13 = 1458955/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1458815/*__LIB_4__::func_731*/;
			break;
		case 49:
			uParam0->f_8 = 1458774/*__LIB_4__::func_550*/;
			break;
		case 50:
			*uParam0 = 1458577/*__LIB_6__::func_9*/;
			break;
		case 51:
			*uParam0 = 1458493/*__LIB_6__::func_916*/;
			break;
		case 52:
			uParam0->f_15 = 1458482/*__LIB_4__::func_730*/;
			break;
		case 53:
			uParam0->f_13 = 1458200/*__LIB_4__::func_729*/;
			break;
		case 54:
			uParam0->f_45 = 1458192/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 1458183/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1458120/*__LIB_6__::func_8*/;
			break;
		case 58:
			uParam0->f_13 = 1457838/*__LIB_4__::func_729*/;
			break;
		case 64:
			uParam0->f_47 = 1456158/*__LIB_10__::func_25*/;
			break;
		case 65:
			uParam0->f_21 = 1456115/*__LIB_5__::func_916*/;
			break;
		case 66:
			uParam0->f_21 = 1455412/*__LIB_6__::func_7*/;
			break;
		case 67:
			uParam0->f_21 = 1454328/*__LIB_5__::func_915*/;
			break;
		case 68:
			*uParam0 = 1453737/*__LIB_6__::func_991*/;
			break;
		case 69:
			*uParam0 = 1453728/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 1453716/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1453707/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1453695/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1451021/*__LIB_9__::func_520*/;
			break;
		case 84:
			uParam0->f_1 = 1449175/*func_4409*/;
			break;
		case 85:
			uParam0->f_1 = 1446841/*__LIB_6__::func_813*/;
			break;
		case 87:
			uParam0->f_1 = 1442616/*__LIB_7__::func_551*/;
			break;
		case 88:
			uParam0->f_1 = 1442607/*__LIB_0__::func_109*/;
			break;
		case 90:
			uParam0->f_1 = 1442564/*__LIB_5__::func_363*/;
			break;
		case 91:
			uParam0->f_1 = 1442263/*__LIB_5__::func_656*/;
			break;
		case 92:
			uParam0->f_1 = 1441496/*func_4376*/;
			break;
		case 94:
			uParam0->f_1 = 1439996/*__LIB_8__::func_275*/;
			break;
		case 102:
			uParam0->f_1 = 1439428/*__LIB_6__::func_6*/;
			break;
		case 103:
			uParam0->f_22 = 1439420/*__LIB_0__::func_467*/;
			break;
		case 104:
			uParam0->f_1 = 1439345/*__LIB_4__::func_689*/;
			break;
		case 78:
			uParam0->f_59 = 1439271/*__LIB_8__::func_975*/;
			break;
		case 125:
			uParam0->f_19 = 1439247/*__LIB_4__::func_688*/;
			break;
	}
}

int func_4376(var uParam0, var uParam1)//Position - 0x15FED8
{
	__LIB_6__::func_27(&(Global_1946250.f_4073), 7500, "TruckTunel1", 919.1599f, -3242.047f, -97.191f, -4.6979f, 0.1417f, -118.0924f, 36.2643f, 920.1234f, -3242.478f, -97.1018f, 7.9062f, 0.1417f, -113.0609f, 36.2643f, 1f, 50, 0, 0, 0, 0);
	__LIB_6__::func_27(&(Global_1946250.f_4073), 6000, "TruckPark", 826.3912f, -3231.1902f, -98.5252f, 1.494f, -0.1848f, -114.9899f, 38.3697f, 826.9343f, -3231.013f, -97.8158f, -0.7301f, -0.1848f, -118.0463f, 38.3697f, 1f, 0, 0, 0, 0, 0);
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_248))
	{
		func_425(&(uParam1->f_248), &(uParam1->f_109), 14);
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

int func_4409(int iParam0, var uParam1)//Position - 0x161CD7
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
				func_1646(&(uParam1->f_140[0]), PLAYER::PLAYER_ID(), 1, 0);
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
								func_425(&iVar2, &(uParam1->f_109), 14);
								func_427(&(uParam1->f_248), &(uParam1->f_109.f_12), &(uParam1->f_140), 0, 0, 0, 0, 0, 1);
							}
						}
						else
						{
							func_425(&(uParam1->f_248), &(uParam1->f_109), 10);
						}
					}
					else
					{
						func_425(&(uParam1->f_248), &(uParam1->f_109), 10);
					}
				}
				else
				{
					func_425(&(uParam1->f_248), &(uParam1->f_109), 14);
					if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_249))
					{
						if (ENTITY::GET_ENTITY_MODEL(uParam1->f_249) == joaat("trailersmall2"))
						{
							func_427(&(uParam1->f_249), &(uParam1->f_109.f_12), &(uParam1->f_140), 0, 0, 0, 0, 0, 1);
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
				func_1646(&(uParam1->f_109.f_1[0]), PLAYER::PLAYER_ID(), 1, 0);
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

void func_4485(int iParam0, int iParam1)//Position - 0x165436
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
								if (((((!__LIB_1__::func_907(bVar7, 1) && !__LIB_5__::func_424(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar5[iVar2], true)) && !__LIB_1__::func_101(PLAYER::PLAYER_PED_ID())) && !__LIB_3__::func_728(bVar7, 14)) && !func_853(bVar7))
								{
									bVar0 = true;
								}
							}
						}
						if ((((((!bVar1 && __LIB_3__::func_360(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_5__::func_424(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar5[iVar2], true)) && !__LIB_1__::func_101(PLAYER::PLAYER_PED_ID())) && !__LIB_3__::func_728(bVar7, 14)) && !func_853(bVar7))
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
						func_4486(iParam0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 0, 0, 1, 0, -1, -1, -1);
						}
						func_4486(iParam0);
					}
					Jump @603; //curOff = 584
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_4486(int iParam0)//Position - 0x165694
{
	__LIB_9__::func_506(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_4537(var uParam0, int iParam1)//Position - 0x167CDB
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1515750/*__LIB_5__::func_926*/;
			break;
		case 1:
			uParam0->f_30 = 1513432/*__LIB_6__::func_11*/;
			break;
		case 2:
			uParam0->f_31 = 1513369/*__LIB_5__::func_669*/;
			break;
		case 3:
			uParam0->f_34 = 1513313/*__LIB_4__::func_758*/;
			break;
		case 4:
			uParam0->f_12 = 1512598/*__LIB_4__::func_757*/;
			break;
		case 6:
			uParam0->f_32 = 1512590/*__LIB_0__::func_467*/;
			break;
		case 111:
			uParam0->f_35 = 1512581/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 79:
			*uParam0 = 1512557/*__LIB_5__::func_265*/;
			break;
		case 11:
			uParam0->f_11 = 1512548/*__LIB_0__::func_109*/;
			break;
		case 12:
			uParam0->f_33 = 1510720/*__LIB_5__::func_668*/;
			break;
		case 14:
			uParam0->f_11 = 1510711/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 109:
			uParam0->f_56 = 1510703/*__LIB_0__::func_467*/;
			break;
		case 13:
			uParam0->f_2 = 1510694/*__LIB_0__::func_109*/;
			break;
		case 15:
			uParam0->f_2 = 1510685/*__LIB_0__::func_109*/;
			break;
		case 75:
			uParam0->f_4 = 1510676/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1510667/*__LIB_0__::func_114*/;
			break;
		case 108:
			uParam0->f_55 = 1510658/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 1510633/*__LIB_5__::func_322*/;
			break;
		case 19:
			uParam0->f_17 = 1510622/*__LIB_3__::func_860*/;
			break;
		case 20:
			uParam0->f_3 = 1510613/*__LIB_0__::func_114*/;
			break;
		case 21:
			uParam0->f_3 = 1510604/*__LIB_0__::func_114*/;
			break;
		case 74:
			uParam0->f_53 = 1510595/*__LIB_0__::func_114*/;
			break;
		case 22:
			uParam0->f_24 = 1510587/*__LIB_0__::func_467*/;
			break;
		case 25:
			uParam0->f_23 = 1510579/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 1509418/*__LIB_5__::func_667*/;
			break;
		case 31:
			uParam0->f_39 = 1509407/*__LIB_3__::func_860*/;
			break;
		case 33:
			uParam0->f_40 = 1509379/*__LIB_4__::func_755*/;
			break;
		case 34:
			uParam0->f_41 = 1509370/*__LIB_0__::func_114*/;
			break;
		case 36:
			uParam0->f_58 = 1509325/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 1475641/*__LIB_5__::func_666*/;
			break;
		case 45:
			uParam0->f_14 = 1475632/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 1475623/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 1475615/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1475604/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1475596/*__LIB_0__::func_467*/;
			break;
		case 49:
			uParam0->f_8 = 1475587/*__LIB_0__::func_114*/;
			break;
		case 50:
			*uParam0 = 1475267/*__LIB_7__::func_34*/;
			break;
		case 51:
			*uParam0 = 1475238/*__LIB_4__::func_751*/;
			break;
		case 52:
			uParam0->f_15 = 1475207/*__LIB_4__::func_750*/;
			break;
		case 53:
			uParam0->f_13 = 1475173/*__LIB_5__::func_373*/;
			break;
		case 54:
			uParam0->f_45 = 1475129/*__LIB_4__::func_749*/;
			break;
		case 56:
			uParam0->f_46 = 1475100/*__LIB_4__::func_748*/;
			break;
		case 57:
			uParam0->f_11 = 1475091/*__LIB_0__::func_114*/;
			break;
		case 58:
			uParam0->f_13 = 1475034/*__LIB_5__::func_373*/;
			break;
		case 64:
			uParam0->f_47 = 1475026/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 1475018/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 1475010/*__LIB_0__::func_467*/;
			break;
		case 67:
			uParam0->f_21 = 1475002/*__LIB_0__::func_467*/;
			break;
		case 68:
			*uParam0 = 1474976/*__LIB_4__::func_746*/;
			break;
		case 69:
			*uParam0 = 1474950/*__LIB_4__::func_746*/;
			break;
		case 70:
			uParam0->f_48 = 1474938/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1474929/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1474917/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1474908/*__LIB_0__::func_114*/;
			break;
		case 78:
			uParam0->f_59 = 1474900/*__LIB_0__::func_467*/;
			break;
		case 126:
			*uParam0 = 1474717/*__LIB_7__::func_855*/;
			break;
	}
}

void func_4615(var uParam0, int iParam1)//Position - 0x1725D7
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1559645/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1559335/*__LIB_4__::func_786*/;
			break;
		case 2:
			uParam0->f_31 = 1554362/*__LIB_5__::func_674*/;
			break;
		case 3:
			uParam0->f_34 = 1554333/*__LIB_4__::func_780*/;
			break;
		case 4:
			uParam0->f_12 = 1554139/*__LIB_4__::func_779*/;
			break;
		case 6:
			uParam0->f_32 = 1553789/*__LIB_4__::func_778*/;
			break;
		case 111:
			uParam0->f_35 = 1553647/*__LIB_5__::func_929*/;
			break;
		case 79:
			*uParam0 = 1553623/*__LIB_5__::func_265*/;
			break;
		case 37:
			uParam0->f_18 = 1553087/*__LIB_5__::func_673*/;
			break;
		case 38:
			uParam0->f_9 = 1552982/*__LIB_7__::func_823*/;
			break;
		case 11:
			uParam0->f_11 = 1552973/*__LIB_0__::func_109*/;
			break;
		case 12:
			uParam0->f_33 = 1552868/*__LIB_5__::func_672*/;
			break;
		case 14:
			uParam0->f_11 = 1552859/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 109:
			uParam0->f_56 = 1552851/*__LIB_0__::func_467*/;
			break;
		case 13:
			uParam0->f_2 = 1552842/*__LIB_0__::func_114*/;
			break;
		case 44:
			*uParam0 = 1552833/*__LIB_0__::func_114*/;
			break;
		case 15:
			uParam0->f_2 = 1552544/*__LIB_9__::func_802*/;
			break;
		case 75:
			uParam0->f_4 = 1552535/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1552451/*__LIB_7__::func_39*/;
			break;
		case 108:
			uParam0->f_55 = 1552442/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 1551822/*__LIB_7__::func_859*/;
			break;
		case 19:
			uParam0->f_17 = 1551622/*__LIB_6__::func_12*/;
			break;
		case 20:
			uParam0->f_3 = 1551558/*__LIB_7__::func_768*/;
			break;
		case 21:
			uParam0->f_3 = 1551498/*__LIB_7__::func_37*/;
			break;
		case 74:
			uParam0->f_53 = 1551489/*__LIB_0__::func_109*/;
			break;
		case 22:
			uParam0->f_24 = 1551248/*__LIB_4__::func_777*/;
			break;
		case 25:
			uParam0->f_23 = 1550875/*func_4654*/;
			break;
		case 30:
			uParam0->f_8 = 1550737/*__LIB_7__::func_858*/;
			break;
		case 31:
			uParam0->f_39 = 1550297/*__LIB_7__::func_857*/;
			break;
		case 33:
			uParam0->f_40 = 1549632/*__LIB_7__::func_856*/;
			break;
		case 34:
			uParam0->f_41 = 1547054/*__LIB_4__::func_776*/;
			break;
		case 36:
			uParam0->f_58 = 1547009/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 1521166/*__LIB_4__::func_775*/;
			break;
		case 45:
			uParam0->f_14 = 1520938/*__LIB_4__::func_774*/;
			break;
		case 46:
			uParam0->f_14 = 1520762/*__LIB_4__::func_773*/;
			break;
		case 110:
			uParam0->f_57 = 1520754/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1520743/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1520501/*__LIB_4__::func_772*/;
			break;
		case 49:
			uParam0->f_8 = 1520469/*__LIB_4__::func_771*/;
			break;
		case 50:
			*uParam0 = 1520403/*__LIB_10__::func_5*/;
			break;
		case 51:
			*uParam0 = 1520379/*__LIB_6__::func_899*/;
			break;
		case 52:
			uParam0->f_15 = 1520196/*__LIB_4__::func_770*/;
			break;
		case 53:
			uParam0->f_13 = 1519601/*__LIB_5__::func_671*/;
			break;
		case 54:
			uParam0->f_45 = 1519364/*__LIB_4__::func_768*/;
			break;
		case 56:
			uParam0->f_46 = 1519355/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1519290/*__LIB_7__::func_35*/;
			break;
		case 58:
			uParam0->f_13 = 1518868/*__LIB_5__::func_375*/;
			break;
		case 64:
			uParam0->f_47 = 1518860/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 1518852/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 1518792/*__LIB_4__::func_767*/;
			break;
		case 67:
			uParam0->f_21 = 1518774/*__LIB_4__::func_766*/;
			break;
		case 68:
			*uParam0 = 1518765/*__LIB_0__::func_109*/;
			break;
		case 69:
			*uParam0 = 1518756/*__LIB_0__::func_109*/;
			break;
		case 70:
			uParam0->f_48 = 1518252/*__LIB_4__::func_765*/;
			break;
		case 71:
			uParam0->f_49 = 1518104/*__LIB_4__::func_764*/;
			break;
		case 107:
			uParam0->f_50 = 1518059/*__LIB_4__::func_763*/;
			break;
		case 80:
			uParam0->f_7 = 1518050/*__LIB_0__::func_114*/;
			break;
		case 78:
			uParam0->f_59 = 1518042/*__LIB_0__::func_467*/;
			break;
		case 125:
			uParam0->f_19 = 1518026/*__LIB_4__::func_516*/;
			break;
	}
}

void func_4654(int iParam0, int iParam1)//Position - 0x17AA1B
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
			if (((((bVar2 != __LIB_0__::getMinusOneOrNull() && bVar2 != PLAYER::PLAYER_ID()) && __LIB_1__::func_693(bVar2, 1, 1)) && !__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar2))) && !__LIB_3__::func_728(bVar2, 14)) && !func_853(bVar2))
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

void func_4692(var uParam0, int iParam1)//Position - 0x17CC66
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1594691/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1594581/*__LIB_4__::func_833*/;
			break;
		case 2:
			uParam0->f_31 = 1592119/*__LIB_5__::func_686*/;
			break;
		case 3:
			uParam0->f_34 = 1592090/*__LIB_4__::func_780*/;
			break;
		case 4:
			uParam0->f_12 = 1591930/*__LIB_4__::func_828*/;
			break;
		case 6:
			uParam0->f_32 = 1591812/*__LIB_4__::func_827*/;
			break;
		case 111:
			uParam0->f_35 = 1591595/*__LIB_6__::func_20*/;
			break;
		case 79:
			*uParam0 = 1591571/*__LIB_5__::func_265*/;
			break;
		case 37:
			uParam0->f_18 = 1591453/*__LIB_4__::func_826*/;
			break;
		case 38:
			uParam0->f_9 = 1591302/*__LIB_6__::func_404*/;
			break;
		case 11:
			uParam0->f_11 = 1591293/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 1590290/*__LIB_5__::func_684*/;
			break;
		case 14:
			uParam0->f_11 = 1590281/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 109:
			uParam0->f_56 = 1590273/*__LIB_0__::func_467*/;
			break;
		case 13:
			uParam0->f_2 = 1590264/*__LIB_0__::func_114*/;
			break;
		case 15:
			uParam0->f_2 = 1590110/*__LIB_9__::func_803*/;
			break;
		case 75:
			uParam0->f_4 = 1590101/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1590013/*__LIB_7__::func_40*/;
			break;
		case 108:
			uParam0->f_55 = 1589225/*__LIB_6__::func_430*/;
			break;
		case 17:
			uParam0->f_17 = 1588597/*__LIB_7__::func_69*/;
			break;
		case 19:
			uParam0->f_17 = 1588571/*__LIB_6__::func_18*/;
			break;
		case 20:
			uParam0->f_3 = 1588532/*__LIB_5__::func_820*/;
			break;
		case 21:
			uParam0->f_3 = 1588472/*__LIB_5__::func_933*/;
			break;
		case 74:
			uParam0->f_53 = 1588463/*__LIB_0__::func_109*/;
			break;
		case 22:
			uParam0->f_24 = 1588410/*__LIB_5__::func_682*/;
			break;
		case 25:
			uParam0->f_23 = 1588106/*func_4781*/;
			break;
		case 30:
			uParam0->f_8 = 1587983/*__LIB_7__::func_861*/;
			break;
		case 31:
			uParam0->f_39 = 1587763/*__LIB_5__::func_765*/;
			break;
		case 33:
			uParam0->f_40 = 1587478/*__LIB_5__::func_932*/;
			break;
		case 34:
			uParam0->f_41 = 1587072/*__LIB_4__::func_822*/;
			break;
		case 36:
			uParam0->f_58 = 1587027/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 1569498/*__LIB_4__::func_821*/;
			break;
		case 45:
			uParam0->f_14 = 1569489/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 1569405/*__LIB_4__::func_820*/;
			break;
		case 110:
			uParam0->f_57 = 1569397/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1569374/*__LIB_4__::func_819*/;
			break;
		case 47:
			uParam0->f_43 = 1569322/*__LIB_4__::func_818*/;
			break;
		case 49:
			uParam0->f_8 = 1569290/*__LIB_4__::func_771*/;
			break;
		case 50:
			*uParam0 = 1569112/*__LIB_8__::func_977*/;
			break;
		case 51:
			*uParam0 = 1569015/*__LIB_9__::func_319*/;
			break;
		case 52:
			uParam0->f_15 = 1569004/*__LIB_4__::func_817*/;
			break;
		case 53:
			uParam0->f_13 = 1568689/*__LIB_5__::func_681*/;
			break;
		case 54:
			uParam0->f_45 = 1567825/*__LIB_9__::func_318*/;
			break;
		case 56:
			uParam0->f_46 = 1567816/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1563009/*__LIB_9__::func_325*/;
			break;
		case 58:
			uParam0->f_13 = 1562995/*__LIB_6__::func_14*/;
			break;
		case 64:
			uParam0->f_47 = 1561487/*__LIB_9__::func_522*/;
			break;
		case 65:
			uParam0->f_21 = 1561479/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 1561428/*__LIB_4__::func_790*/;
			break;
		case 67:
			uParam0->f_21 = 1561400/*__LIB_4__::func_789*/;
			break;
		case 68:
			*uParam0 = 1561391/*__LIB_0__::func_109*/;
			break;
		case 69:
			*uParam0 = 1561382/*__LIB_0__::func_109*/;
			break;
		case 70:
			uParam0->f_48 = 1561098/*__LIB_4__::func_788*/;
			break;
		case 71:
			uParam0->f_49 = 1561002/*__LIB_4__::func_787*/;
			break;
		case 107:
			uParam0->f_50 = 1560990/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1560804/*__LIB_5__::func_930*/;
			break;
		case 78:
			uParam0->f_59 = 1560632/*__LIB_6__::func_13*/;
			break;
	}
}

void func_4781(int iParam0, int iParam1)//Position - 0x183B8A
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
			if (((((bVar2 != __LIB_0__::getMinusOneOrNull() && bVar2 != PLAYER::PLAYER_ID()) && __LIB_1__::func_693(bVar2, 1, 1)) && !__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar2))) && !__LIB_3__::func_728(bVar2, 14)) && !func_853(bVar2))
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

void func_4825(var uParam0, int iParam1)//Position - 0x18554C
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1622515/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1622369/*__LIB_5__::func_822*/;
			break;
		case 2:
			uParam0->f_31 = 1617145/*__LIB_6__::func_348*/;
			break;
		case 3:
			uParam0->f_34 = 1617116/*__LIB_4__::func_780*/;
			break;
		case 4:
			uParam0->f_12 = 1616706/*__LIB_5__::func_692*/;
			break;
		case 6:
			uParam0->f_32 = 1616536/*__LIB_5__::func_821*/;
			break;
		case 111:
			uParam0->f_35 = 1616141/*__LIB_5__::func_691*/;
			break;
		case 79:
			*uParam0 = 1616117/*__LIB_5__::func_265*/;
			break;
		case 11:
			uParam0->f_11 = 1616108/*__LIB_0__::func_109*/;
			break;
		case 12:
			uParam0->f_33 = 1616013/*__LIB_5__::func_690*/;
			break;
		case 14:
			uParam0->f_11 = 1616004/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 109:
			uParam0->f_56 = 1615996/*__LIB_0__::func_467*/;
			break;
		case 13:
			uParam0->f_2 = 1615987/*__LIB_0__::func_114*/;
			break;
		case 15:
			uParam0->f_2 = 1615702/*__LIB_10__::func_63*/;
			break;
		case 75:
			uParam0->f_4 = 1615693/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1615605/*__LIB_7__::func_42*/;
			break;
		case 108:
			uParam0->f_55 = 1615596/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 1615343/*__LIB_7__::func_825*/;
			break;
		case 19:
			uParam0->f_17 = 1615317/*__LIB_6__::func_22*/;
			break;
		case 20:
			uParam0->f_3 = 1615308/*__LIB_0__::func_114*/;
			break;
		case 21:
			uParam0->f_3 = 1615299/*__LIB_0__::func_114*/;
			break;
		case 74:
			uParam0->f_53 = 1615290/*__LIB_0__::func_114*/;
			break;
		case 22:
			uParam0->f_24 = 1615282/*__LIB_0__::func_467*/;
			break;
		case 25:
			uParam0->f_23 = 1615274/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 1615151/*__LIB_7__::func_863*/;
			break;
		case 31:
			uParam0->f_39 = 1614905/*__LIB_7__::func_824*/;
			break;
		case 33:
			uParam0->f_40 = 1614649/*__LIB_6__::func_347*/;
			break;
		case 34:
			uParam0->f_41 = 1612496/*__LIB_5__::func_936*/;
			break;
		case 36:
			uParam0->f_58 = 1612451/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 1598002/*__LIB_4__::func_838*/;
			break;
		case 45:
			uParam0->f_14 = 1597993/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 46:
			uParam0->f_14 = 1597984/*__LIB_0__::getMinusOneOrNull*/;
			break;
		case 110:
			uParam0->f_57 = 1597976/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1597965/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1597913/*__LIB_4__::func_837*/;
			break;
		case 49:
			uParam0->f_8 = 1597881/*__LIB_4__::func_771*/;
			break;
		case 50:
			*uParam0 = 1597752/*__LIB_7__::func_41*/;
			break;
		case 51:
			*uParam0 = 1597728/*__LIB_6__::func_899*/;
			break;
		case 52:
			uParam0->f_15 = 1597717/*__LIB_4__::func_270*/;
			break;
		case 53:
			uParam0->f_13 = 1597066/*__LIB_5__::func_689*/;
			break;
		case 54:
			uParam0->f_45 = 1596430/*__LIB_7__::func_862*/;
			break;
		case 56:
			uParam0->f_46 = 1596421/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1596354/*__LIB_6__::func_779*/;
			break;
		case 58:
			uParam0->f_13 = 1596340/*__LIB_6__::func_21*/;
			break;
		case 64:
			uParam0->f_47 = 1595961/*__LIB_5__::func_387*/;
			break;
		case 65:
			uParam0->f_21 = 1595886/*__LIB_5__::func_687*/;
			break;
		case 66:
			uParam0->f_21 = 1595835/*__LIB_4__::func_835*/;
			break;
		case 67:
			uParam0->f_21 = 1595817/*__LIB_4__::func_766*/;
			break;
		case 68:
			*uParam0 = 1595808/*__LIB_0__::func_109*/;
			break;
		case 69:
			*uParam0 = 1595799/*__LIB_0__::func_109*/;
			break;
		case 70:
			uParam0->f_48 = 1595682/*__LIB_4__::func_834*/;
			break;
		case 71:
			uParam0->f_49 = 1595673/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1595661/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1595652/*__LIB_0__::func_114*/;
			break;
		case 78:
			uParam0->f_59 = 1595644/*__LIB_0__::func_467*/;
			break;
	}
}

void func_4898(var uParam0, int iParam1)//Position - 0x18C1FC
{
	switch (iParam1)
	{
		case 96:
			uParam0->f_1 = 1622891/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 1622882/*__LIB_0__::func_109*/;
			break;
		case 98:
			uParam0->f_1 = 1622873/*__LIB_0__::func_109*/;
			break;
		case 99:
			uParam0->f_1 = 1622713/*__LIB_5__::func_390*/;
			break;
		case 100:
			uParam0->f_22 = 1622705/*__LIB_0__::func_467*/;
			break;
		case 101:
			uParam0->f_22 = 1622641/*__LIB_8__::func_991*/;
			break;
	}
}

void func_4905(var uParam0, int iParam1)//Position - 0x18C374
{
	switch (iParam1)
	{
		case 90:
			uParam0->f_1 = 1623108/*__LIB_0__::func_114*/;
			break;
		case 91:
			uParam0->f_1 = 1623099/*__LIB_0__::func_109*/;
			break;
		case 92:
			uParam0->f_1 = 1623090/*__LIB_0__::func_109*/;
			break;
		case 93:
			uParam0->f_1 = 1622713/*__LIB_5__::func_390*/;
			break;
		case 94:
			uParam0->f_1 = 1623081/*__LIB_0__::func_109*/;
			break;
		case 95:
			uParam0->f_22 = 1623017/*__LIB_8__::func_991*/;
			break;
	}
}

void func_4911(var uParam0, int iParam1)//Position - 0x18C44D
{
	switch (iParam1)
	{
		case 84:
			uParam0->f_1 = 1623335/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 1623326/*__LIB_0__::func_109*/;
			break;
		case 86:
			uParam0->f_1 = 1622713/*__LIB_5__::func_390*/;
			break;
		case 87:
			uParam0->f_1 = 1623317/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 1623217/*__LIB_8__::func_992*/;
			break;
	}
}

void func_4920()//Position - 0x18C5B8
{
	if (!INTERIOR::IS_VALID_INTERIOR(Local_133.f_420))
	{
		func_642(Local_133.f_4, &(Local_133.f_425), &(Local_133.f_421), &(Local_133.f_424), 1);
		Local_133.f_420 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Local_133.f_421, &(Local_133.f_425));
	}
}

bool func_4921(int iParam0)//Position - 0x18C5FA
{
	return Local_133.f_2 == iParam0;
}

void func_4922()//Position - 0x18C609
{
	float fVar0;
	int iVar1;
	int iVar2;
	Local_133.f_869.f_8 = { -2178.1646f, 1107.623f, 28.4136f };
	Local_133.f_869.f_11 = { 0f, 0f, 116.4826f };
	fVar0 = 96.4826f;
	iVar1 = joaat("IG_Mimi");
	iVar2 = joaat("prop_npc_phone");
	switch (Local_133.f_869)
	{
		case 0:
			if (!__LIB_8__::func_360())
			{
				return;
			}
			Local_133.f_869.f_6 = "ANIM@SCRIPTED@CARMEET@TUN_MEET_IG1_MIMI@";
			STREAMING::REQUEST_MODEL(iVar1);
			STREAMING::REQUEST_MODEL(iVar2);
			STREAMING::REQUEST_ANIM_DICT(Local_133.f_869.f_6);
			if ((STREAMING::HAS_MODEL_LOADED(iVar1) && STREAMING::HAS_MODEL_LOADED(iVar2)) && STREAMING::HAS_ANIM_DICT_LOADED(Local_133.f_869.f_6))
			{
				Local_133.f_869 = 1;
			}
			break;
		case 1:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_133.f_869.f_1))
			{
				Local_133.f_869.f_1 = PED::CREATE_PED(5, iVar1, Local_133.f_869.f_8, fVar0, false, false);
				ENTITY::SET_ENTITY_PROOFS(Local_133.f_869.f_1, true, true, true, true, true, false, false, false);
				PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_133.f_869.f_1, 24720);
				PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_133.f_869.f_1);
				PED::SET_PED_PROP_INDEX(Local_133.f_869.f_1, 2, 0, 0, false);
				PED::SET_PED_PROP_INDEX(Local_133.f_869.f_1, 1, 0, 0, false);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar1);
			}
			else if (!ENTITY::DOES_ENTITY_EXIST(Local_133.f_869.f_5))
			{
				Local_133.f_869.f_5 = OBJECT::CREATE_OBJECT(iVar2, Local_133.f_869.f_8, false, false, false);
				ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Local_133.f_869.f_5, false, false);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar2);
			}
			else
			{
				Local_133.f_869 = 2;
			}
			break;
		case 2:
			if (__LIB_0__::func_121(Local_133.f_869.f_1))
			{
				Local_133.f_869.f_17 = PED::CREATE_SYNCHRONIZED_SCENE(Local_133.f_869.f_8, Local_133.f_869.f_11, 2);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(Local_133.f_869.f_17, true);
				TASK::TASK_SYNCHRONIZED_SCENE(Local_133.f_869.f_1, Local_133.f_869.f_17, Local_133.f_869.f_6, "BASE_mimi", 8f, -8f, 0, 0, 1000f, 0);
				ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_133.f_869.f_5, Local_133.f_869.f_17, "BASE_npcphone", Local_133.f_869.f_6, 8f, -8f, 0, 1000f);
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_133.f_869.f_17))
				{
					Local_133.f_869 = 3;
				}
			}
			break;
		case 3:
			break;
	}
}

void func_4923(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)//Position - 0x18C840
{
	bool bVar0;
	struct<3> Var1;
	if (iParam4 && !func_4924(iParam0))
	{
		*uParam1 = 0;
		return;
	}
	if (Global_1579011)
	{
		if (!SCRIPT::IS_THREAD_ACTIVE(Global_1579008))
		{
			*uParam1 = 0;
		}
	}
	if (!*uParam1)
	{
		bVar0 = false;
		if (((!SCRIPT::IS_THREAD_ACTIVE(Global_1579008) && !NETWORK::NETWORK_IS_SCRIPT_ACTIVE("AM_MP_PEDS", iParam2, true, 0)) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("AM_MP_PEDS")) < 1) && !NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			bVar0 = true;
			if (iParam3 && Global_1946244 == 0)
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				SCRIPT::REQUEST_SCRIPT("AM_MP_PEDS");
				if (SCRIPT::HAS_SCRIPT_LOADED("AM_MP_PEDS"))
				{
					Var1.f_0 = iParam0;
					Var1.f_1 = SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME();
					Var1.f_2 = iParam2;
					Global_1579009 = 0;
					Global_1579008 = SYSTEM::START_NEW_SCRIPT_WITH_ARGS("AM_MP_PEDS", &Var1, 3, 15900);
					SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("AM_MP_PEDS");
					*uParam1 = 1;
				}
			}
		}
	}
}

int func_4924(int iParam0)//Position - 0x18C925
{
	int iVar0;
	func_4925(iParam0, &iVar0, 0);
	if (iVar0 != 0)
	{
		Call_Loc(iVar0);
		return StackVal;
	}
	return 0;
}

void func_4925(int iParam0, var uParam1, int iParam2)//Position - 0x18C943
{
	switch (iParam0)
	{
		case 0:
			func_5711(uParam1, iParam2);
			break;
		case 1:
			func_5660(uParam1, iParam2);
			break;
		case 2:
			func_5369(uParam1, iParam2);
			break;
		case 3:
			func_5302(uParam1, iParam2);
			break;
		case 4:
			func_5252(uParam1, iParam2);
			break;
		case 5:
			func_5195(uParam1, iParam2);
			break;
		case 6:
			func_5128(uParam1, iParam2);
			break;
		case 7:
		case 8:
		case 9:
		case 10:
			func_5063(uParam1, iParam2);
			break;
		case 11:
			func_5029(uParam1, iParam2);
			break;
		case 12:
			func_4999(uParam1, iParam2);
			break;
		case 13:
			func_4926(uParam1, iParam2);
			break;
	}
}

void func_4926(var uParam0, int iParam1)//Position - 0x18CA1F
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1634025/*__LIB_9__::func_55*/;
			break;
		case 1:
			uParam0->f_1 = 1634016/*__LIB_0__::func_109*/;
			break;
		case 2:
			uParam0->f_2 = 1633845/*__LIB_11__::func_546*/;
			break;
		case 3:
			uParam0->f_3 = 1633836/*__LIB_0__::func_114*/;
			break;
		case 4:
			uParam0->f_4 = 1633827/*__LIB_1__::func_804*/;
			break;
		case 5:
			uParam0->f_5 = 1633707/*__LIB_10__::func_660*/;
			break;
		case 6:
			uParam0->f_6 = 1633698/*__LIB_1__::func_806*/;
			break;
		case 9:
			uParam0->f_9 = 1630770/*__LIB_11__::func_334*/;
			break;
		case 10:
			uParam0->f_10 = 1630599/*__LIB_31__::func_89*/;
			break;
		case 11:
			uParam0->f_11 = 1629688/*__LIB_10__::func_700*/;
			break;
		case 14:
			uParam0->f_14 = 1629674/*__LIB_9__::func_53*/;
			break;
		case 7:
			uParam0->f_7 = 1629663/*__LIB_3__::func_554*/;
			break;
		case 8:
			uParam0->f_8 = 1629654/*__LIB_7__::func_239*/;
			break;
		case 16:
			uParam0->f_16 = 1629596/*__LIB_8__::func_398*/;
			break;
		case 17:
			uParam0->f_17 = 1629434/*__LIB_8__::func_410*/;
			break;
		case 18:
			uParam0->f_18 = 1629375/*__LIB_9__::func_859*/;
			break;
		case 19:
			uParam0->f_19 = 1629240/*__LIB_9__::func_875*/;
			break;
		case 21:
			uParam0->f_21 = 1629094/*__LIB_9__::func_858*/;
			break;
		case 29:
			uParam0->f_29 = 1629000/*__LIB_9__::func_138*/;
			break;
		case 34:
			uParam0->f_30 = 1628883/*__LIB_9__::func_52*/;
			break;
		case 23:
			uParam0->f_22 = 1628819/*__LIB_8__::func_408*/;
			break;
		case 22:
			uParam0->f_23 = 1628621/*__LIB_9__::func_76*/;
			break;
		case 24:
			uParam0->f_24 = 1628393/*__LIB_9__::func_874*/;
			break;
		case 25:
			uParam0->f_25 = 1628065/*__LIB_10__::func_650*/;
			break;
		case 26:
			uParam0->f_26 = 1627378/*__LIB_9__::func_873*/;
			break;
		case 35:
			uParam0->f_35 = 1625063/*__LIB_10__::func_699*/;
			break;
	}
}

void func_4999(var uParam0, int iParam1)//Position - 0x18EEF9
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1639983/*__LIB_8__::func_425*/;
			break;
		case 1:
			uParam0->f_1 = 1639974/*__LIB_0__::func_114*/;
			break;
		case 2:
			uParam0->f_2 = 1639948/*__LIB_8__::func_902*/;
			break;
		case 3:
			uParam0->f_3 = 1639939/*__LIB_0__::func_114*/;
			break;
		case 4:
			uParam0->f_4 = 1639930/*__LIB_3__::func_603*/;
			break;
		case 5:
			uParam0->f_5 = 1639913/*__LIB_8__::func_901*/;
			break;
		case 6:
			uParam0->f_6 = 1639904/*__LIB_1__::func_806*/;
			break;
		case 9:
			uParam0->f_9 = 1636463/*__LIB_10__::func_662*/;
			break;
		case 10:
			uParam0->f_10 = 1636387/*__LIB_9__::func_289*/;
			break;
		case 11:
			uParam0->f_11 = 1634788/*__LIB_10__::func_661*/;
			break;
		case 14:
			uParam0->f_14 = 1634761/*__LIB_8__::func_420*/;
			break;
		case 7:
			uParam0->f_7 = 1634750/*__LIB_3__::func_554*/;
			break;
		case 8:
			uParam0->f_8 = 1634741/*__LIB_7__::func_239*/;
			break;
		case 16:
			uParam0->f_16 = 1634683/*__LIB_8__::func_398*/;
			break;
		case 17:
			uParam0->f_17 = 1634549/*__LIB_7__::func_240*/;
			break;
		case 18:
			uParam0->f_18 = 1634490/*__LIB_9__::func_859*/;
			break;
		case 21:
			uParam0->f_21 = 1634344/*__LIB_9__::func_858*/;
			break;
	}
}

void func_5029(var uParam0, int iParam1)//Position - 0x190662
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1644798/*__LIB_8__::func_436*/;
			break;
		case 1:
			uParam0->f_1 = 1644789/*__LIB_0__::func_109*/;
			break;
		case 2:
			uParam0->f_2 = 1644630/*__LIB_11__::func_335*/;
			break;
		case 3:
			uParam0->f_3 = 1644621/*__LIB_0__::func_114*/;
			break;
		case 4:
			uParam0->f_4 = 1644612/*__LIB_0__::func_109*/;
			break;
		case 5:
			uParam0->f_5 = 1644588/*__LIB_8__::func_435*/;
			break;
		case 6:
			uParam0->f_6 = 1644579/*__LIB_1__::func_806*/;
			break;
		case 9:
			uParam0->f_9 = 1642562/*__LIB_11__::func_267*/;
			break;
		case 10:
			uParam0->f_10 = 1642510/*__LIB_11__::func_567*/;
			break;
		case 11:
			uParam0->f_11 = 1641883/*func_5045*/;
			break;
		case 14:
			uParam0->f_14 = 1641869/*__LIB_9__::func_59*/;
			break;
		case 7:
			uParam0->f_7 = 1641858/*__LIB_3__::func_554*/;
			break;
		case 8:
			uParam0->f_8 = 1641849/*__LIB_7__::func_239*/;
			break;
		case 16:
			uParam0->f_16 = 1641791/*__LIB_8__::func_398*/;
			break;
		case 17:
			uParam0->f_17 = 1641614/*__LIB_8__::func_429*/;
			break;
		case 18:
			uParam0->f_18 = 1641555/*__LIB_9__::func_859*/;
			break;
		case 21:
			uParam0->f_21 = 1641409/*__LIB_9__::func_858*/;
			break;
		case 23:
			uParam0->f_22 = 1641345/*__LIB_8__::func_428*/;
			break;
		case 22:
			uParam0->f_23 = 1641168/*__LIB_9__::func_58*/;
			break;
		case 24:
			uParam0->f_24 = 1641118/*__LIB_8__::func_427*/;
			break;
		case 25:
			uParam0->f_25 = 1640821/*__LIB_9__::func_882*/;
			break;
		case 26:
			uParam0->f_26 = 1640715/*__LIB_9__::func_57*/;
			break;
		case 35:
			uParam0->f_35 = 1640439/*__LIB_11__::func_345*/;
			break;
	}
}

void func_5045(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8)//Position - 0x190D9B
{
	__LIB_9__::func_944(uParam1);
	switch (iParam0)
	{
		case 404:
			uParam1->f_79[0] = "vfx_sum2_vomit_trigger";
			__LIB_9__::func_60(&(uParam1->f_79), &(uParam1->f_79), "scr_sum2", "scr_sum2_club_vomit", "", "", -0.02f, 0.13f, 0f, 90f, 0f, 0f, 1f, -1, 31086, 0, 1, 0, 0, 0);
			uParam1->f_54 = 790530;
			uParam1->f_53 = 1;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			__LIB_9__::func_137(&(uParam1->f_35), 13);
			__LIB_8__::func_430(uParam1, iParam2);
			break;
		case 405:
			*uParam1 = "amb@world_human_bum_standing@drunk@base";
			uParam1->f_54 = 1;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			StringCopy(&(uParam1->f_2), "base", 64);
			break;
		case 406:
			*uParam1 = "move_m@drunk@VERYDRUNK_IDLES@";
			uParam1->f_54 = 1;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			StringCopy(&(uParam1->f_2), "fidget_01", 64);
			break;
		case 407:
			*uParam1 = "anim@amb@casino@brawl@fights@argue@";
			uParam1->f_54 = 1;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			StringCopy(&(uParam1->f_2), "arguement_loop_mp_m_brawler_01", 64);
			break;
		case 409:
			*uParam1 = "misscarsteal4asleep";
			uParam1->f_51 = 5;
			uParam1->f_54 = 786432/*__LIB_3__::func_635*/;
			uParam1->f_53 = 1;
			__LIB_9__::func_137(&(uParam1->f_35), 0);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			StringCopy(&(uParam1->f_2), "franklin_asleep", 64);
			break;
		case 410:
			*uParam1 = "anim@mp_bedmid@right_var_01";
			uParam1->f_54 = 790530;
			uParam1->f_53 = 1;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			StringCopy(&(uParam1->f_2), "f_sleep_r_loop_bighouse", 64);
			break;
		case 408:
			*uParam1 = "amb@world_human_stupor@male_looking_right@base";
			uParam1->f_54 = 790530;
			uParam1->f_53 = 1;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			StringCopy(&(uParam1->f_2), "base", 64);
			break;
	}
}

void func_5063(var uParam0, int iParam1)//Position - 0x19190C
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1662435/*__LIB_9__::func_66*/;
			break;
		case 1:
			uParam0->f_1 = 1662426/*__LIB_0__::func_109*/;
			break;
		case 2:
			uParam0->f_2 = 1662267/*__LIB_40__::func_752*/;
			break;
		case 3:
			uParam0->f_3 = 1662258/*__LIB_0__::func_114*/;
			break;
		case 4:
			uParam0->f_4 = 1662248/*__LIB_8__::func_467*/;
			break;
		case 5:
			uParam0->f_5 = 1662233/*__LIB_8__::func_466*/;
			break;
		case 6:
			uParam0->f_6 = 1662224/*__LIB_1__::func_806*/;
			break;
		case 9:
			uParam0->f_9 = 1656957/*__LIB_31__::func_169*/;
			break;
		case 10:
			uParam0->f_10 = 1655547/*__LIB_40__::func_774*/;
			break;
		case 11:
			uParam0->f_11 = 1652637/*func_5088*/;
			break;
		case 14:
			uParam0->f_14 = 1652623/*__LIB_9__::func_63*/;
			break;
		case 7:
			uParam0->f_7 = 1652485/*__LIB_8__::func_444*/;
			break;
		case 8:
			uParam0->f_8 = 1652401/*__LIB_8__::func_443*/;
			break;
		case 16:
			uParam0->f_16 = 1652343/*__LIB_8__::func_398*/;
			break;
		case 17:
			uParam0->f_17 = 1652194/*__LIB_8__::func_442*/;
			break;
		case 18:
			uParam0->f_18 = 1652135/*__LIB_9__::func_859*/;
			break;
		case 19:
			uParam0->f_19 = 1652100/*__LIB_8__::func_441*/;
			break;
		case 21:
			uParam0->f_21 = 1651954/*__LIB_9__::func_858*/;
			break;
		case 29:
			uParam0->f_29 = 1651655/*__LIB_9__::func_145*/;
			break;
		case 34:
			uParam0->f_30 = 1651515/*__LIB_9__::func_62*/;
			break;
		case 23:
			uParam0->f_22 = 1650965/*__LIB_9__::func_884*/;
			break;
		case 22:
			uParam0->f_23 = 1650788/*__LIB_9__::func_61*/;
			break;
		case 24:
			uParam0->f_24 = 1650512/*__LIB_8__::func_439*/;
			break;
		case 25:
			uParam0->f_25 = 1650212/*__LIB_9__::func_966*/;
			break;
		case 26:
			uParam0->f_26 = 1647865/*__LIB_9__::func_144*/;
			break;
		case 12:
			uParam0->f_12 = 1645268/*__LIB_9__::func_143*/;
			break;
	}
}

void func_5088(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8)//Position - 0x19379D
{
	__LIB_9__::func_944(uParam1);
	switch (iParam0)
	{
		case 389:
			uParam1->f_51 = 5;
			uParam1->f_54 = 786432/*__LIB_3__::func_635*/;
			uParam1->f_53 = 1;
			__LIB_9__::func_137(&(uParam1->f_35), 0);
			__LIB_9__::func_137(&(uParam1->f_35), 1);
			__LIB_9__::func_137(&(uParam1->f_35), 9);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			__LIB_8__::func_448(uParam1, iParam2, 1);
			break;
		case 390:
			uParam1->f_51 = 5;
			uParam1->f_54 = 786432/*__LIB_3__::func_635*/;
			uParam1->f_53 = 1;
			__LIB_9__::func_137(&(uParam1->f_35), 0);
			__LIB_9__::func_137(&(uParam1->f_35), 1);
			__LIB_9__::func_137(&(uParam1->f_35), 9);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			__LIB_8__::func_448(uParam1, iParam2, 0);
			break;
		case 396:
			uParam1->f_51 = 5;
			uParam1->f_54 = 786432/*__LIB_3__::func_635*/;
			uParam1->f_53 = 1;
			__LIB_9__::func_137(&(uParam1->f_35), 0);
			__LIB_9__::func_137(&(uParam1->f_35), 1);
			__LIB_9__::func_137(&(uParam1->f_35), 9);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			*uParam1 = "amb@world_human_leaning@male@wall@back@texting@base";
			StringCopy(&(uParam1->f_2), "BASE", 64);
			break;
		case 397:
			uParam1->f_51 = 5;
			uParam1->f_54 = 786432/*__LIB_3__::func_635*/;
			uParam1->f_53 = 1;
			__LIB_9__::func_137(&(uParam1->f_35), 0);
			__LIB_9__::func_137(&(uParam1->f_35), 1);
			__LIB_9__::func_137(&(uParam1->f_35), 9);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			*uParam1 = "amb@world_human_stand_mobile@male@standing@call@idle_a";
			StringCopy(&(uParam1->f_2), "idle_a", 64);
			break;
		case 398:
			uParam1->f_51 = 5;
			uParam1->f_54 = 786432/*__LIB_3__::func_635*/;
			uParam1->f_53 = 1;
			__LIB_9__::func_137(&(uParam1->f_35), 0);
			__LIB_9__::func_137(&(uParam1->f_35), 1);
			__LIB_9__::func_137(&(uParam1->f_35), 9);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			*uParam1 = "anim@amb@yacht@rail@standing@male@variant_01@";
			StringCopy(&(uParam1->f_2), "base", 64);
			break;
		case 399:
			uParam1->f_51 = 5;
			uParam1->f_54 = 786432/*__LIB_3__::func_635*/;
			uParam1->f_53 = 1;
			__LIB_9__::func_137(&(uParam1->f_35), 0);
			__LIB_9__::func_137(&(uParam1->f_35), 1);
			__LIB_9__::func_137(&(uParam1->f_35), 9);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			*uParam1 = "amb@world_human_drinking@coffee@male@idle_a";
			StringCopy(&(uParam1->f_2), "idle_a", 64);
			break;
		case 391:
			uParam1->f_51 = 5;
			uParam1->f_54 = 790530;
			uParam1->f_53 = 1;
			__LIB_9__::func_137(&(uParam1->f_35), 0);
			__LIB_9__::func_137(&(uParam1->f_35), 1);
			__LIB_9__::func_137(&(uParam1->f_35), 9);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			__LIB_8__::func_447(uParam1, iParam2);
			break;
		case 393:
			uParam1->f_51 = 5;
			uParam1->f_54 = 790529;
			uParam1->f_53 = 1;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			*uParam1 = "anim@amb@prop_human_seat_computer@female@base";
			StringCopy(&(uParam1->f_2), "BASE", 64);
			break;
		case 392:
			uParam1->f_51 = 5;
			uParam1->f_54 = 790529;
			uParam1->f_53 = 1;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			*uParam1 = "anim@amb@prop_human_seat_computer@male@base";
			StringCopy(&(uParam1->f_2), "BASE", 64);
			break;
		case 394:
			uParam1->f_51 = 5;
			uParam1->f_54 = 1;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			__LIB_9__::func_137(&(uParam1->f_35), 13);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			__LIB_8__::func_446(uParam1, iParam2);
			break;
		case 395:
			uParam1->f_51 = 5;
			uParam1->f_54 = 1;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			__LIB_9__::func_137(&(uParam1->f_35), 13);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			__LIB_8__::func_445(uParam1);
			break;
		case 400:
		case 401:
		case 402:
			uParam1->f_51 = 5;
			uParam1->f_54 = 786432/*__LIB_3__::func_635*/;
			uParam1->f_53 = 1;
			__LIB_9__::func_137(&(uParam1->f_35), 0);
			__LIB_9__::func_137(&(uParam1->f_35), 1);
			__LIB_9__::func_137(&(uParam1->f_35), 9);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			__LIB_9__::func_886(uParam1, iParam0, iParam2);
			break;
		case 403:
			uParam1->f_51 = 5;
			uParam1->f_54 = 786432/*__LIB_3__::func_635*/;
			uParam1->f_53 = 1;
			__LIB_9__::func_137(&(uParam1->f_35), 0);
			__LIB_9__::func_137(&(uParam1->f_35), 1);
			__LIB_9__::func_137(&(uParam1->f_35), 9);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			__LIB_9__::func_885(uParam1, iParam2);
			break;
	}
}

void func_5128(var uParam0, int iParam1)//Position - 0x195DF3
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1686413/*__LIB_9__::func_69*/;
			break;
		case 1:
			uParam0->f_1 = 1686404/*__LIB_0__::func_109*/;
			break;
		case 2:
			uParam0->f_2 = 1686245/*__LIB_11__::func_336*/;
			break;
		case 3:
			uParam0->f_3 = 1686236/*__LIB_3__::func_939*/;
			break;
		case 4:
			uParam0->f_4 = 1686227/*__LIB_3__::func_603*/;
			break;
		case 5:
			uParam0->f_5 = 1686213/*__LIB_7__::func_243*/;
			break;
		case 6:
			uParam0->f_6 = 1686204/*__LIB_0__::func_114*/;
			break;
		case 9:
			uParam0->f_9 = 1680928/*__LIB_11__::func_269*/;
			break;
		case 10:
			uParam0->f_10 = 1680868/*__LIB_11__::func_568*/;
			break;
		case 11:
			uParam0->f_11 = 1672565/*func_5158*/;
			break;
		case 14:
			uParam0->f_14 = 1672551/*__LIB_9__::func_68*/;
			break;
		case 7:
			uParam0->f_7 = 1672528/*__LIB_3__::func_869*/;
			break;
		case 8:
			uParam0->f_8 = 1672519/*__LIB_7__::func_239*/;
			break;
		case 16:
			uParam0->f_16 = 1672461/*__LIB_8__::func_398*/;
			break;
		case 17:
			uParam0->f_17 = 1672327/*__LIB_8__::func_477*/;
			break;
		case 18:
			uParam0->f_18 = 1672268/*__LIB_9__::func_859*/;
			break;
		case 19:
			uParam0->f_19 = 1672091/*__LIB_8__::func_476*/;
			break;
		case 21:
			uParam0->f_21 = 1671953/*__LIB_9__::func_860*/;
			break;
		case 15:
			uParam0->f_15 = 1671944/*__LIB_0__::func_109*/;
			break;
		case 29:
			uParam0->f_29 = 1671799/*__LIB_9__::func_150*/;
			break;
		case 23:
			uParam0->f_22 = 1671409/*__LIB_9__::func_887*/;
			break;
		case 22:
			uParam0->f_23 = 1671083/*__LIB_9__::func_67*/;
			break;
		case 24:
			uParam0->f_24 = 1670535/*__LIB_8__::func_474*/;
			break;
		case 25:
			uParam0->f_25 = 1670214/*__LIB_11__::func_268*/;
			break;
		case 26:
			uParam0->f_26 = 1667801/*__LIB_9__::func_149*/;
			break;
		case 12:
			uParam0->f_12 = 1663506/*__LIB_9__::func_967*/;
			break;
		case 32:
			uParam0->f_33 = 1663417/*__LIB_9__::func_147*/;
			break;
		case 28:
			uParam0->f_28 = 1662941/*__LIB_8__::func_468*/;
			break;
	}
}

void func_5158(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8)//Position - 0x198575
{
	__LIB_9__::func_944(uParam1);
	switch (iParam0)
	{
		case 388:
			*uParam1 = "amb@code_human_wander_clipboard@male@base";
			StringCopy(&(uParam1->f_2), "base", 64);
			break;
		case 385:
			uParam1->f_79[0] = "vfx_sec_weed_smoke_exhale_start";
			__LIB_9__::func_60(&(uParam1->f_79), &(uParam1->f_79), "scr_tn_meet", "scr_tn_meet_cig_exhale_mouth", "", "", -0.02f, 0.13f, 0f, 0f, 0f, 0f, 1f, -1, 31086, 0, 1, 0, 0, 0);
			__LIB_9__::func_141(&(uParam1->f_56), "vfx_sec_weed_smoke_start", "vfx_sec_weed_smoke_stop", "scr_sec", "scr_sec_weed_smoke", "", "", -0.086f, 0f, 0f, 0f, 0f, 0f, 2f, 0, -1, 1, 0, 0, 0, 0, 0, -1082130432, -1082130432);
			uParam1->f_51 = 5;
			uParam1->f_54 = 786432/*__LIB_3__::func_635*/;
			uParam1->f_53 = 1;
			__LIB_9__::func_137(&(uParam1->f_35), 0);
			__LIB_9__::func_137(&(uParam1->f_35), 5);
			__LIB_9__::func_137(&(uParam1->f_35), 9);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			__LIB_9__::func_137(&(uParam1->f_35), 28);
			__LIB_8__::func_497(uParam1, iParam2);
			break;
		case 386:
			uParam1->f_79[0] = "vfx_sec_weed_smoke_exhale_start";
			__LIB_9__::func_60(&(uParam1->f_79), &(uParam1->f_79), "scr_tn_meet", "scr_tn_meet_cig_exhale_mouth", "", "", -0.02f, 0.13f, 0f, 0f, 0f, 0f, 1f, -1, 31086, 0, 1, 0, 0, 0);
			if (iParam2 == 5)
			{
				__LIB_9__::func_141(&(uParam1->f_56), "vfx_sec_weed_lighter_start", "vfx_sec_weed_lighter_stop", "scr_sec", "scr_sec_weed_lighter_flame", "", "", 0f, 0f, 0.05f, 0f, 0f, 0f, 1f, 0, -1, 0, 0, 0, 0, 0, 1, 0.42f, 0.65f);
			}
			uParam1->f_51 = 5;
			uParam1->f_54 = 786432/*__LIB_3__::func_635*/;
			uParam1->f_53 = 1;
			uParam1->f_48 = 1;
			__LIB_9__::func_137(&(uParam1->f_35), 0);
			__LIB_8__::func_496(uParam1, iParam2);
			break;
		case 387:
			__LIB_9__::func_141(&(uParam1->f_56), "vfx_sec_weed_smoke_start", "vfx_sec_weed_smoke_stop", "scr_sec", "scr_sec_weed_smoke", "", "", -0.086f, 0f, 0f, 0f, 0f, 0f, 2f, 0, -1, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432);
			uParam1->f_51 = 5;
			uParam1->f_54 = 786432/*__LIB_3__::func_635*/;
			uParam1->f_53 = 1;
			uParam1->f_48 = 1;
			__LIB_9__::func_137(&(uParam1->f_35), 0);
			__LIB_8__::func_496(uParam1, iParam2);
			break;
		case 384:
			uParam1->f_54 = 790530;
			uParam1->f_53 = 1;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			__LIB_9__::func_137(&(uParam1->f_35), 13);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			__LIB_8__::func_495(uParam1, iParam2);
			break;
		case 383:
			uParam1->f_53 = 3;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			__LIB_9__::func_137(&(uParam1->f_35), 15);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			__LIB_8__::func_494(uParam1, iParam2);
			break;
		case 169:
			uParam1->f_54 = 1;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			__LIB_9__::func_137(&(uParam1->f_35), 13);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			__LIB_8__::func_493(uParam1, iParam2);
			break;
		case 378:
			uParam1->f_54 = 1;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			__LIB_9__::func_137(&(uParam1->f_35), 13);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			__LIB_8__::func_492(uParam1, iParam2);
			break;
		case 382:
			uParam1->f_54 = 790530;
			uParam1->f_53 = 1;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			__LIB_9__::func_137(&(uParam1->f_35), 13);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			__LIB_8__::func_491(uParam1, iParam2);
			break;
		case 381:
			uParam1->f_54 = 1;
			uParam1->f_53 = 3;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			__LIB_9__::func_137(&(uParam1->f_35), 13);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			__LIB_8__::func_490(uParam1, iParam2);
			break;
		case 380:
			uParam1->f_54 = 1;
			uParam1->f_53 = 3;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			__LIB_9__::func_137(&(uParam1->f_35), 13);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			__LIB_8__::func_489(uParam1, iParam2);
			break;
		case 379:
			uParam1->f_54 = 1;
			uParam1->f_53 = 3;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			__LIB_9__::func_137(&(uParam1->f_35), 13);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			__LIB_8__::func_488(uParam1, iParam2);
			break;
		case 377:
			uParam1->f_54 = 1;
			uParam1->f_53 = 3;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			__LIB_9__::func_137(&(uParam1->f_35), 13);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			__LIB_8__::func_487(uParam1, iParam2);
			break;
		case 371:
			uParam1->f_79[0] = "vfx_sec_weed_smoke_exhale_start";
			__LIB_9__::func_60(&(uParam1->f_79), &(uParam1->f_79), "scr_tn_meet", "scr_tn_meet_cig_exhale_mouth", "", "", -0.02f, 0.13f, 0f, 0f, 0f, 0f, 2f, -1, 31086, 0, 1, 0, 0, 0);
			__LIB_9__::func_141(&(uParam1->f_56), "vfx_sec_weed_smoke_start", "vfx_sec_weed_smoke_stop", "scr_sec", "scr_sec_weed_smoke", "", "", -0.07f, 0f, 0f, 0f, 0f, 0f, 1f, 0, -1, 1, 0, 0, 0, 0, 0, -1082130432, -1082130432);
			uParam1->f_49 = 1;
			uParam1->f_51 = 5;
			uParam1->f_54 = 786432/*__LIB_3__::func_635*/;
			uParam1->f_53 = 1;
			__LIB_9__::func_137(&(uParam1->f_35), 0);
			__LIB_9__::func_137(&(uParam1->f_35), 1);
			__LIB_9__::func_137(&(uParam1->f_35), 9);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			__LIB_8__::func_486(uParam1, iParam2);
			break;
		case 372:
			uParam1->f_79[0] = "vfx_sec_weed_smoke_exhale_start";
			__LIB_9__::func_60(&(uParam1->f_79), &(uParam1->f_79), "scr_tn_meet", "scr_tn_meet_cig_exhale_mouth", "", "", -0.02f, 0.13f, 0f, 0f, 0f, 0f, 2f, -1, 31086, 0, 1, 0, 0, 0);
			__LIB_9__::func_141(&(uParam1->f_56), "vfx_sec_weed_smoke_start", "vfx_sec_weed_smoke_stop", "scr_sec", "scr_sec_weed_smoke", "", "", -0.07f, 0f, 0f, 0f, 0f, 0f, 1f, 0, -1, 1, 0, 0, 0, 0, 0, -1082130432, -1082130432);
			uParam1->f_49 = 1;
			uParam1->f_51 = 5;
			uParam1->f_54 = 786432/*__LIB_3__::func_635*/;
			uParam1->f_53 = 1;
			__LIB_9__::func_137(&(uParam1->f_35), 0);
			__LIB_9__::func_137(&(uParam1->f_35), 1);
			__LIB_9__::func_137(&(uParam1->f_35), 9);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			__LIB_8__::func_485(uParam1, iParam2);
			break;
		case 373:
			uParam1->f_51 = 5;
			uParam1->f_54 = 786432/*__LIB_3__::func_635*/;
			uParam1->f_53 = 1;
			__LIB_9__::func_137(&(uParam1->f_35), 0);
			__LIB_9__::func_137(&(uParam1->f_35), 1);
			__LIB_9__::func_137(&(uParam1->f_35), 9);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			__LIB_8__::func_484(uParam1, iParam2);
			break;
		case 374:
			uParam1->f_51 = 5;
			uParam1->f_54 = 786432/*__LIB_3__::func_635*/;
			uParam1->f_53 = 1;
			__LIB_9__::func_137(&(uParam1->f_35), 0);
			__LIB_9__::func_137(&(uParam1->f_35), 1);
			__LIB_9__::func_137(&(uParam1->f_35), 9);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			__LIB_8__::func_483(uParam1, iParam2);
			break;
		case 375:
			uParam1->f_51 = 5;
			uParam1->f_54 = 786432/*__LIB_3__::func_635*/;
			uParam1->f_53 = 1;
			__LIB_9__::func_137(&(uParam1->f_35), 0);
			__LIB_9__::func_137(&(uParam1->f_35), 1);
			__LIB_9__::func_137(&(uParam1->f_35), 9);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			__LIB_8__::func_482(uParam1, iParam2);
			break;
		case 376:
			*uParam1 = "anim@amb@beach_party@seated@cell_phone@male_a@base";
			StringCopy(&(uParam1->f_2), "base", 64);
			uParam1->f_54 = 790530;
			uParam1->f_53 = 1;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			break;
		case 361:
			*uParam1 = "AMB@WORLD_HUMAN_CLIPBOARD@MALE@BASE";
			uParam1->f_54 = 1;
			uParam1->f_53 = 3;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			StringCopy(&(uParam1->f_2), "BASE", 64);
			break;
		case 349:
		case 350:
		case 352:
		case 351:
			__LIB_8__::func_481(iParam0, uParam1);
			uParam1->f_51 = 5;
			uParam1->f_54 = 524288;
			uParam1->f_53 = 1;
			__LIB_9__::func_137(&(uParam1->f_35), 0);
			__LIB_9__::func_137(&(uParam1->f_35), 25);
			uParam1->f_2 = { __LIB_8__::func_472(__LIB_9__::func_290(iParam0, iParam2), "", "") };
			if (__LIB_8__::func_480(iParam0, iParam2))
			{
				uParam1->f_18 = { __LIB_8__::func_472(__LIB_9__::func_290(iParam0, iParam2), "", "_facial") };
			}
			break;
		case 354:
		case 355:
		case 356:
		case 357:
			__LIB_8__::func_481(iParam0, uParam1);
			uParam1->f_51 = 5;
			uParam1->f_53 = 1;
			__LIB_9__::func_137(&(uParam1->f_35), 0);
			__LIB_9__::func_137(&(uParam1->f_35), 25);
			uParam1->f_2 = { __LIB_8__::func_472(__LIB_9__::func_290(iParam0, iParam2), "", "") };
			if (__LIB_8__::func_480(iParam0, iParam2))
			{
				uParam1->f_18 = { __LIB_8__::func_472(__LIB_9__::func_290(iParam0, iParam2), "", "_facial") };
			}
			break;
		case 353:
			*uParam1 = "anim@scripted@freemode_npc@fix_astu_ig12_idle@";
			uParam1->f_51 = 5;
			uParam1->f_53 = 1;
			__LIB_9__::func_137(&(uParam1->f_35), 0);
			__LIB_9__::func_137(&(uParam1->f_35), 25);
			__LIB_8__::func_479(uParam1, iParam2);
			break;
		case 358:
			*uParam1 = "anim@scripted@freemode_npc@FIX_ASTU_PROD_DRUMS@";
			uParam1->f_51 = 5;
			uParam1->f_53 = 1;
			__LIB_9__::func_137(&(uParam1->f_35), 0);
			__LIB_9__::func_137(&(uParam1->f_35), 25);
			uParam1->f_18 = { __LIB_8__::func_472(__LIB_9__::func_290(iParam0, iParam2), "", "_facial") };
			uParam1->f_2 = { __LIB_8__::func_472(__LIB_9__::func_290(iParam0, iParam2), "", "") };
			break;
		case 359:
			*uParam1 = "anim@scripted@freemode_npc@FIX_ASTU_PROD_VOCALS@";
			uParam1->f_51 = 5;
			uParam1->f_53 = 1;
			__LIB_9__::func_137(&(uParam1->f_35), 0);
			__LIB_9__::func_137(&(uParam1->f_35), 25);
			uParam1->f_18 = { __LIB_8__::func_472(__LIB_9__::func_290(iParam0, iParam2), "", "_facial") };
			uParam1->f_2 = { __LIB_8__::func_472(__LIB_9__::func_290(iParam0, iParam2), "", "") };
			break;
		case 2:
			*uParam1 = "AMB@WORLD_HUMAN_LEANING@MALE@WALL@BACK@TEXTING@IDLE_A";
			uParam1->f_51 = 5;
			uParam1->f_54 = 1;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			StringCopy(&(uParam1->f_2), "IDLE_A", 64);
			break;
		case 3:
			*uParam1 = "AMB@WORLD_HUMAN_LEANING@FEMALE@WALL@BACK@TEXTING@IDLE_A";
			uParam1->f_51 = 5;
			uParam1->f_54 = 1;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			StringCopy(&(uParam1->f_2), "IDLE_A", 64);
			break;
		case 12:
			*uParam1 = "AMB@WORLD_HUMAN_LEANING@MALE@WALL@BACK@MOBILE@IDLE_A";
			uParam1->f_51 = 5;
			uParam1->f_54 = 1;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			StringCopy(&(uParam1->f_2), "IDLE_A", 64);
			break;
		case 13:
			*uParam1 = "AMB@WORLD_HUMAN_LEANING@FEMALE@WALL@BACK@MOBILE@IDLE_A";
			uParam1->f_51 = 5;
			uParam1->f_54 = 1;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			StringCopy(&(uParam1->f_2), "IDLE_A", 64);
			break;
		case 4:
		case 5:
			uParam1->f_51 = 5;
			uParam1->f_54 = 2;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			__LIB_9__::func_137(&(uParam1->f_35), 13);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			__LIB_8__::func_422(uParam1, iParam2);
			break;
		case 6:
			uParam1->f_51 = 5;
			uParam1->f_54 = 2;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			__LIB_9__::func_137(&(uParam1->f_35), 13);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			__LIB_8__::func_421(uParam1, iParam2);
			break;
		case 348:
			uParam1->f_54 = 790530;
			uParam1->f_53 = 1;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			__LIB_9__::func_137(&(uParam1->f_35), 13);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			__LIB_8__::func_478(uParam1, iParam2);
			break;
		case 360:
			*uParam1 = "amb@medic@standing@kneel@idle_a";
			uParam1->f_54 = 1;
			uParam1->f_53 = 3;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			StringCopy(&(uParam1->f_2), "idle_a", 64);
			break;
		case 362:
			*uParam1 = "ANIM@AMB@INSPECT@CROUCH@MALE_A@IDLES";
			uParam1->f_54 = 1;
			uParam1->f_53 = 3;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			StringCopy(&(uParam1->f_2), "idle_a", 64);
			break;
		case 363:
			*uParam1 = "anim@arena@amb@seat_drone_tablet@male@";
			uParam1->f_54 = 790530;
			uParam1->f_53 = 1;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			StringCopy(&(uParam1->f_2), "base", 64);
			break;
		case 364:
			*uParam1 = "AMB@PROP_HUMAN_MOVIE_STUDIO_LIGHT@BASE";
			uParam1->f_54 = 1;
			uParam1->f_53 = 3;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			StringCopy(&(uParam1->f_2), "base", 64);
			break;
		case 370:
			*uParam1 = "amb@world_human_drinking@coffee@male@idle_a";
			uParam1->f_54 = 1;
			uParam1->f_53 = 3;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			StringCopy(&(uParam1->f_2), "idle_a", 64);
			break;
		case 365:
			*uParam1 = "ANIM@AMB@INSPECT@STAND@MALE_A@IDLES";
			uParam1->f_54 = 134217729;
			uParam1->f_53 = 3;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			StringCopy(&(uParam1->f_2), "idle_a", 64);
			break;
		case 367:
			*uParam1 = "amb@world_human_leaning@male@wall@back@texting@base";
			uParam1->f_54 = 1;
			uParam1->f_53 = 3;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			StringCopy(&(uParam1->f_2), "base", 64);
			break;
		case 366:
			*uParam1 = "amb@medic@standing@timeofdeath@base";
			uParam1->f_54 = 1;
			uParam1->f_53 = 3;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			StringCopy(&(uParam1->f_2), "base", 64);
			break;
		case 368:
			*uParam1 = "amb@world_human_stand_mobile@male@standing@call@base";
			uParam1->f_54 = 1;
			uParam1->f_53 = 3;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			StringCopy(&(uParam1->f_2), "base", 64);
			break;
		case 369:
			*uParam1 = "anim@amb@office@laptops@male@var_a@base@";
			uParam1->f_51 = 5;
			uParam1->f_54 = 786432/*__LIB_3__::func_635*/;
			uParam1->f_53 = 1;
			__LIB_9__::func_137(&(uParam1->f_35), 0);
			__LIB_9__::func_137(&(uParam1->f_35), 1);
			__LIB_9__::func_137(&(uParam1->f_35), 9);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			StringCopy(&(uParam1->f_2), "base", 64);
			break;
	}
}

void func_5195(var uParam0, int iParam1)//Position - 0x19BB9D
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1715628/*__LIB_7__::func_780*/;
			break;
		case 1:
			uParam0->f_1 = 1715619/*__LIB_0__::func_109*/;
			break;
		case 2:
			uParam0->f_2 = 1715460/*__LIB_11__::func_257*/;
			break;
		case 3:
			uParam0->f_3 = 1715451/*__LIB_0__::func_114*/;
			break;
		case 4:
			uParam0->f_4 = 1715442/*__LIB_0__::func_109*/;
			break;
		case 5:
			uParam0->f_5 = 1715433/*__LIB_0__::func_114*/;
			break;
		case 6:
			uParam0->f_6 = 1715424/*__LIB_0__::func_114*/;
			break;
		case 9:
			uParam0->f_9 = 1708271/*__LIB_10__::func_669*/;
			break;
		case 10:
			uParam0->f_10 = 1708219/*__LIB_11__::func_337*/;
			break;
		case 11:
			uParam0->f_11 = 1692178/*__LIB_10__::func_668*/;
			break;
		case 12:
			uParam0->f_12 = 1690489/*__LIB_9__::func_72*/;
			break;
		case 14:
			uParam0->f_14 = 1690480/*__LIB_0__::func_109*/;
			break;
		case 7:
			uParam0->f_7 = 1690457/*__LIB_8__::func_509*/;
			break;
		case 8:
			uParam0->f_8 = 1690444/*__LIB_8__::func_508*/;
			break;
		case 17:
			uParam0->f_17 = 1690310/*__LIB_7__::func_240*/;
			break;
		case 18:
			uParam0->f_18 = 1690282/*__LIB_9__::func_861*/;
			break;
		case 19:
			uParam0->f_19 = 1690156/*__LIB_8__::func_507*/;
			break;
		case 21:
			uParam0->f_21 = 1690010/*__LIB_9__::func_858*/;
			break;
		case 23:
			uParam0->f_22 = 1689525/*__LIB_9__::func_151*/;
			break;
		case 22:
			uParam0->f_23 = 1689275/*__LIB_9__::func_71*/;
			break;
		case 24:
			uParam0->f_24 = 1688554/*__LIB_8__::func_501*/;
			break;
		case 25:
			uParam0->f_25 = 1688257/*__LIB_9__::func_889*/;
			break;
		case 26:
			uParam0->f_26 = 1686886/*__LIB_9__::func_70*/;
			break;
		case 31:
			uParam0->f_32 = 1686877/*__LIB_0__::func_114*/;
			break;
		case 33:
			uParam0->f_34 = 1686868/*__LIB_0__::func_109*/;
			break;
	}
}

void func_5252(var uParam0, int iParam1)//Position - 0x1A2DBC
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1725063/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_1 = 1725054/*__LIB_0__::func_109*/;
			break;
		case 2:
			uParam0->f_2 = 1724895/*__LIB_31__::func_173*/;
			break;
		case 3:
			uParam0->f_3 = 1724886/*__LIB_0__::func_114*/;
			break;
		case 4:
			uParam0->f_4 = 1724876/*__LIB_8__::func_545*/;
			break;
		case 5:
			uParam0->f_5 = 1724861/*__LIB_8__::func_544*/;
			break;
		case 6:
			uParam0->f_6 = 1724852/*__LIB_0__::func_114*/;
			break;
		case 9:
			uParam0->f_9 = 1721780/*__LIB_31__::func_90*/;
			break;
		case 10:
			uParam0->f_10 = 1721728/*__LIB_31__::func_386*/;
			break;
		case 11:
			uParam0->f_11 = 1721306/*__LIB_10__::func_670*/;
			break;
		case 12:
			uParam0->f_12 = 1720825/*__LIB_9__::func_75*/;
			break;
		case 14:
			uParam0->f_14 = 1720811/*__LIB_8__::func_538*/;
			break;
		case 7:
			uParam0->f_7 = 1720788/*__LIB_3__::func_844*/;
			break;
		case 8:
			uParam0->f_8 = 1720779/*__LIB_7__::func_239*/;
			break;
		case 17:
			uParam0->f_17 = 1720630/*__LIB_8__::func_537*/;
			break;
		case 18:
			uParam0->f_18 = 1720590/*__LIB_9__::func_863*/;
			break;
		case 19:
			uParam0->f_19 = 1720513/*__LIB_8__::func_536*/;
			break;
		case 21:
			uParam0->f_21 = 1720387/*__LIB_9__::func_862*/;
			break;
		case 29:
			uParam0->f_29 = 1720189/*__LIB_9__::func_153*/;
			break;
		case 23:
			uParam0->f_22 = 1720005/*__LIB_9__::func_896*/;
			break;
		case 22:
			uParam0->f_23 = 1719775/*__LIB_9__::func_74*/;
			break;
		case 24:
			uParam0->f_24 = 1719493/*__LIB_9__::func_73*/;
			break;
		case 25:
			uParam0->f_25 = 1719193/*__LIB_12__::func_399*/;
			break;
		case 26:
			uParam0->f_26 = 1716319/*__LIB_9__::func_968*/;
			break;
		case 31:
			uParam0->f_32 = 1716310/*__LIB_0__::func_114*/;
			break;
		case 32:
			uParam0->f_33 = 1716223/*__LIB_9__::func_152*/;
			break;
		case 33:
			uParam0->f_34 = 1716117/*__LIB_8__::func_528*/;
			break;
	}
}

void func_5302(var uParam0, int iParam1)//Position - 0x1A5290
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1795121/*__LIB_9__::func_161*/;
			break;
		case 1:
			uParam0->f_1 = 1795112/*__LIB_0__::func_109*/;
			break;
		case 2:
			uParam0->f_2 = 1794953/*__LIB_11__::func_270*/;
			break;
		case 3:
			uParam0->f_3 = 1794944/*__LIB_1__::func_806*/;
			break;
		case 4:
			uParam0->f_4 = 1794934/*__LIB_8__::func_571*/;
			break;
		case 5:
			uParam0->f_5 = 1794901/*__LIB_8__::func_570*/;
			break;
		case 6:
			uParam0->f_6 = 1794892/*__LIB_1__::func_806*/;
			break;
		case 9:
			uParam0->f_9 = 1757628/*__LIB_10__::func_701*/;
			break;
		case 10:
			uParam0->f_10 = 1757576/*__LIB_11__::func_346*/;
			break;
		case 11:
			uParam0->f_11 = 1735001/*__LIB_10__::func_671*/;
			break;
		case 12:
			uParam0->f_12 = 1733312/*__LIB_9__::func_72*/;
			break;
		case 14:
			uParam0->f_14 = 1733298/*__LIB_9__::func_77*/;
			break;
		case 7:
			uParam0->f_7 = 1733275/*__LIB_8__::func_554*/;
			break;
		case 8:
			uParam0->f_8 = 1733262/*__LIB_8__::func_508*/;
			break;
		case 16:
			uParam0->f_16 = 1733204/*__LIB_8__::func_398*/;
			break;
		case 17:
			uParam0->f_17 = 1733070/*__LIB_7__::func_240*/;
			break;
		case 18:
			uParam0->f_18 = 1733011/*__LIB_9__::func_859*/;
			break;
		case 19:
			uParam0->f_19 = 1732130/*__LIB_9__::func_158*/;
			break;
		case 21:
			uParam0->f_21 = 1731984/*__LIB_9__::func_858*/;
			break;
		case 30:
			uParam0->f_31 = 1731736/*__LIB_9__::func_157*/;
			break;
		case 23:
			uParam0->f_22 = 1731627/*__LIB_8__::func_550*/;
			break;
		case 22:
			uParam0->f_23 = 1731462/*__LIB_9__::func_76*/;
			break;
		case 24:
			uParam0->f_24 = 1730732/*__LIB_8__::func_549*/;
			break;
		case 25:
			uParam0->f_25 = 1730435/*__LIB_11__::func_258*/;
			break;
		case 26:
			uParam0->f_26 = 1728689/*__LIB_9__::func_947*/;
			break;
		case 31:
			uParam0->f_32 = 1728680/*__LIB_0__::func_114*/;
			break;
		case 33:
			uParam0->f_34 = 1728602/*__LIB_8__::func_548*/;
			break;
		case 28:
			uParam0->f_28 = 1725562/*__LIB_9__::func_155*/;
			break;
	}
}

void func_5369(var uParam0, int iParam1)//Position - 0x1B644F
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1943491/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_1 = 1943482/*__LIB_0__::func_109*/;
			break;
		case 2:
			uParam0->f_2 = 1943323/*__LIB_11__::func_260*/;
			break;
		case 3:
			uParam0->f_3 = 1943162/*__LIB_11__::func_259*/;
			break;
		case 4:
			uParam0->f_4 = 1943153/*__LIB_1__::func_806*/;
			break;
		case 5:
			uParam0->f_5 = 1943139/*__LIB_8__::func_747*/;
			break;
		case 6:
			uParam0->f_6 = 1943130/*__LIB_3__::func_603*/;
			break;
		case 7:
			uParam0->f_7 = 1943107/*__LIB_8__::func_746*/;
			break;
		case 8:
			uParam0->f_8 = 1943094/*__LIB_8__::func_745*/;
			break;
		case 9:
			uParam0->f_9 = 1892609/*__LIB_10__::func_674*/;
			break;
		case 10:
			uParam0->f_10 = 1892557/*__LIB_11__::func_338*/;
			break;
		case 11:
			uParam0->f_11 = 1803373/*func_5396*/;
			break;
		case 12:
			uParam0->f_12 = 1800126/*__LIB_9__::func_949*/;
			break;
		case 14:
			uParam0->f_14 = 1800041/*__LIB_9__::func_165*/;
			break;
		case 15:
			uParam0->f_15 = 1800032/*__LIB_0__::func_109*/;
			break;
		case 16:
			uParam0->f_16 = 1799973/*__LIB_8__::func_581*/;
			break;
		case 17:
			uParam0->f_17 = 1799831/*__LIB_8__::func_580*/;
			break;
		case 18:
			uParam0->f_18 = 1799791/*__LIB_9__::func_863*/;
			break;
		case 19:
			uParam0->f_19 = 1799463/*__LIB_8__::func_579*/;
			break;
		case 20:
			uParam0->f_20 = 1799439/*__LIB_8__::func_578*/;
			break;
		case 21:
			uParam0->f_21 = 1799313/*__LIB_9__::func_862*/;
			break;
		case 23:
			uParam0->f_22 = 1798946/*__LIB_9__::func_164*/;
			break;
		case 22:
			uParam0->f_23 = 1798670/*__LIB_9__::func_79*/;
			break;
		case 24:
			uParam0->f_24 = 1798494/*__LIB_8__::func_576*/;
			break;
		case 25:
			uParam0->f_25 = 1798194/*__LIB_9__::func_906*/;
			break;
		case 26:
			uParam0->f_26 = 1797822/*__LIB_9__::func_78*/;
			break;
		case 27:
			uParam0->f_27 = 1797689/*__LIB_8__::func_575*/;
			break;
		case 29:
			uParam0->f_29 = 1797172/*__LIB_9__::func_163*/;
			break;
		case 31:
			uParam0->f_32 = 1797163/*__LIB_0__::func_109*/;
			break;
		case 32:
			uParam0->f_33 = 1795900/*__LIB_9__::func_162*/;
			break;
		case 33:
			uParam0->f_34 = 1795692/*__LIB_9__::func_864*/;
			break;
	}
}

void func_5396(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, var uParam7, var uParam8)//Position - 0x1B846D
{
	__LIB_9__::func_944(uParam1);
	switch (iParam0)
	{
		case 0:
			*uParam1 = "AMB@WORLD_HUMAN_HANG_OUT_STREET@MALE_C@BASE";
			uParam1->f_51 = 5;
			uParam1->f_54 = 1;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			StringCopy(&(uParam1->f_2), __LIB_8__::func_744(iParam2), 64);
			break;
		case 1:
			*uParam1 = "AMB@WORLD_HUMAN_HANG_OUT_STREET@FEMALE_HOLD_ARM@IDLE_A";
			uParam1->f_51 = 5;
			uParam1->f_54 = 1;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			StringCopy(&(uParam1->f_2), __LIB_8__::func_726(iParam2), 64);
			break;
		case 2:
			*uParam1 = "ANIM@AMB@NIGHTCLUB@PEDS@";
			uParam1->f_51 = 5;
			uParam1->f_54 = 1;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			StringCopy(&(uParam1->f_2), __LIB_8__::func_743(iParam2), 64);
			break;
		case 3:
			*uParam1 = "ANIM@AMB@NIGHTCLUB@PEDS@";
			uParam1->f_51 = 5;
			uParam1->f_54 = 1;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			StringCopy(&(uParam1->f_2), __LIB_8__::func_742(iParam2), 64);
			break;
		case 4:
			*uParam1 = "ANIM@AMB@NIGHTCLUB@PEDS@";
			uParam1->f_51 = 5;
			uParam1->f_54 = 1;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			StringCopy(&(uParam1->f_2), __LIB_8__::func_741(iParam2), 64);
			break;
		case 5:
			*uParam1 = "ANIM@AMB@NIGHTCLUB@PEDS@";
			uParam1->f_51 = 5;
			uParam1->f_54 = 1;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			StringCopy(&(uParam1->f_2), __LIB_8__::func_741(iParam2), 64);
			break;
		case 8:
			*uParam1 = "ANIM@AMB@NIGHTCLUB@PEDS@";
			uParam1->f_51 = 5;
			uParam1->f_54 = 1;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			StringCopy(&(uParam1->f_2), __LIB_8__::func_740(iParam2), 64);
			break;
		case 9:
			*uParam1 = "ANIM@AMB@NIGHTCLUB@PEDS@";
			uParam1->f_51 = 5;
			uParam1->f_54 = 1;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			StringCopy(&(uParam1->f_2), __LIB_8__::func_739(iParam2), 64);
			break;
		case 10:
			*uParam1 = "ANIM@AMB@NIGHTCLUB@PEDS@";
			uParam1->f_51 = 5;
			uParam1->f_54 = 1;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			StringCopy(&(uParam1->f_2), __LIB_8__::func_738(iParam2), 64);
			break;
		case 11:
			*uParam1 = "AMB@WORLD_HUMAN_SMOKING_POT@FEMALE@IDLE_A";
			uParam1->f_51 = 5;
			uParam1->f_54 = 1;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			StringCopy(&(uParam1->f_2), __LIB_8__::func_737(iParam2), 64);
			break;
		case 12:
			*uParam1 = "ANIM@AMB@NIGHTCLUB@PEDS@";
			uParam1->f_51 = 5;
			uParam1->f_54 = 1;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			StringCopy(&(uParam1->f_2), __LIB_8__::func_736(iParam2), 64);
			break;
		case 13:
			*uParam1 = "AMB@WORLD_HUMAN_LEANING@FEMALE@WALL@BACK@MOBILE@IDLE_A";
			uParam1->f_51 = 5;
			uParam1->f_54 = 2;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			StringCopy(&(uParam1->f_2), __LIB_8__::func_726(iParam2), 64);
			break;
		case 14:
			*uParam1 = "ANIM@AMB@NIGHTCLUB@PEDS@";
			uParam1->f_51 = 5;
			uParam1->f_54 = 1;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			StringCopy(&(uParam1->f_2), __LIB_8__::func_735(iParam2), 64);
			break;
		case 15:
			*uParam1 = "ANIM@AMB@NIGHTCLUB@PEDS@";
			uParam1->f_51 = 5;
			uParam1->f_54 = 1;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			StringCopy(&(uParam1->f_2), __LIB_8__::func_734(iParam2), 64);
			break;
		case 16:
			*uParam1 = "ANIM@AMB@NIGHTCLUB@PEDS@";
			uParam1->f_51 = 5;
			uParam1->f_54 = 1;
			uParam1->f_53 = 1;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			StringCopy(&(uParam1->f_2), __LIB_8__::func_733(iParam2), 64);
			break;
		case 17:
			*uParam1 = "ANIM@AMB@NIGHTCLUB@PEDS@";
			uParam1->f_51 = 5;
			uParam1->f_54 = 1;
			uParam1->f_53 = 1;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			StringCopy(&(uParam1->f_2), __LIB_8__::func_732(iParam2), 64);
			break;
		case 18:
			*uParam1 = "ANIM@AMB@NIGHTCLUB@PEDS@";
			uParam1->f_51 = 5;
			uParam1->f_54 = 790530;
			uParam1->f_53 = 1;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			__LIB_9__::func_137(&(uParam1->f_35), 13);
			StringCopy(&(uParam1->f_2), __LIB_8__::func_731(iParam2), 64);
			break;
		case 19:
			*uParam1 = "ANIM@AMB@NIGHTCLUB@PEDS@";
			uParam1->f_51 = 5;
			uParam1->f_54 = 790530;
			uParam1->f_53 = 1;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			__LIB_9__::func_137(&(uParam1->f_35), 13);
			StringCopy(&(uParam1->f_2), __LIB_8__::func_730(iParam2), 64);
			break;
		case 20:
			*uParam1 = "ANIM@AMB@NIGHTCLUB@PEDS@";
			uParam1->f_51 = 5;
			uParam1->f_54 = 790529;
			uParam1->f_53 = 1;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			StringCopy(&(uParam1->f_2), __LIB_8__::func_729(iParam2), 64);
			break;
		case 21:
			*uParam1 = "ANIM@AMB@NIGHTCLUB@PEDS@";
			uParam1->f_51 = 5;
			uParam1->f_54 = 790529;
			uParam1->f_53 = 1;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			StringCopy(&(uParam1->f_2), __LIB_8__::func_728(iParam2), 64);
			break;
		case 22:
			*uParam1 = "ANIM@AMB@NIGHTCLUB@PEDS@";
			uParam1->f_51 = 5;
			uParam1->f_54 = 790529;
			uParam1->f_53 = 1;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			StringCopy(&(uParam1->f_2), __LIB_8__::func_727(iParam2), 64);
			break;
		case 23:
			*uParam1 = "AMB@PROP_HUMAN_SEAT_BAR@FEMALE@ELBOWS_ON_BAR@IDLE_A";
			uParam1->f_51 = 5;
			uParam1->f_54 = 790529;
			uParam1->f_53 = 1;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			StringCopy(&(uParam1->f_2), __LIB_8__::func_726(iParam2), 64);
			break;
		case 24:
			uParam1->f_54 = 2;
			uParam1->f_53 = 1;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			__LIB_9__::func_865(uParam1, iParam2, iParam6);
			break;
		case 29:
			*uParam1 = "ANIM@AMB@VIP_BAR@";
			uParam1->f_54 = 2;
			uParam1->f_53 = 1;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			__LIB_9__::func_137(&(uParam1->f_35), 13);
			StringCopy(&(uParam1->f_2), __LIB_8__::func_725(iParam2), 64);
			break;
		case 30:
			*uParam1 = "ANIM@AMB@VIP_BAR@";
			uParam1->f_54 = 2;
			uParam1->f_53 = 1;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			__LIB_9__::func_137(&(uParam1->f_35), 13);
			StringCopy(&(uParam1->f_2), __LIB_8__::func_724(iParam2), 64);
			break;
		case 31:
			*uParam1 = "ANIM@AMB@VIP_BAR@";
			uParam1->f_54 = 2;
			uParam1->f_53 = 1;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			__LIB_9__::func_137(&(uParam1->f_35), 13);
			StringCopy(&(uParam1->f_2), __LIB_8__::func_723(iParam2), 64);
			break;
		case 32:
			*uParam1 = "ANIM@AMB@VIP_BAR@";
			uParam1->f_54 = 2;
			uParam1->f_53 = 1;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			__LIB_9__::func_137(&(uParam1->f_35), 13);
			StringCopy(&(uParam1->f_2), __LIB_8__::func_722(iParam2), 64);
			break;
		case 33:
			*uParam1 = "ANIM@AMB@VIP_BAR@";
			uParam1->f_54 = 2;
			uParam1->f_53 = 1;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			__LIB_9__::func_137(&(uParam1->f_35), 13);
			StringCopy(&(uParam1->f_2), __LIB_8__::func_721(iParam2), 64);
			break;
		case 34:
			*uParam1 = "ANIM@AMB@VIP_BAR@";
			uParam1->f_54 = 2;
			uParam1->f_53 = 1;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			__LIB_9__::func_137(&(uParam1->f_35), 13);
			StringCopy(&(uParam1->f_2), __LIB_8__::func_720(iParam2), 64);
			break;
		case 66:
			*uParam1 = __LIB_8__::func_719();
			uParam1->f_54 = 2;
			uParam1->f_53 = 3;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			__LIB_9__::func_137(&(uParam1->f_35), 13);
			__LIB_9__::func_137(&(uParam1->f_35), 11);
			__LIB_9__::func_137(&(uParam1->f_35), 20);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			StringCopy(&(uParam1->f_2), __LIB_9__::func_232(iParam3, iParam4, iParam2, bParam5), 64);
			break;
		case 67:
			*uParam1 = __LIB_8__::func_719();
			uParam1->f_54 = 2;
			uParam1->f_53 = 3;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			__LIB_9__::func_137(&(uParam1->f_35), 13);
			__LIB_9__::func_137(&(uParam1->f_35), 11);
			__LIB_9__::func_137(&(uParam1->f_35), 20);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			StringCopy(&(uParam1->f_2), __LIB_9__::func_231(iParam3, iParam4, iParam2, bParam5), 64);
			break;
		case 68:
			*uParam1 = __LIB_8__::func_719();
			uParam1->f_54 = 2;
			uParam1->f_53 = 3;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			__LIB_9__::func_137(&(uParam1->f_35), 13);
			__LIB_9__::func_137(&(uParam1->f_35), 11);
			__LIB_9__::func_137(&(uParam1->f_35), 20);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			StringCopy(&(uParam1->f_2), __LIB_9__::func_230(iParam3, iParam4, iParam2, bParam5), 64);
			break;
		case 69:
			*uParam1 = __LIB_8__::func_719();
			uParam1->f_54 = 2;
			uParam1->f_53 = 3;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			__LIB_9__::func_137(&(uParam1->f_35), 13);
			__LIB_9__::func_137(&(uParam1->f_35), 11);
			__LIB_9__::func_137(&(uParam1->f_35), 20);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			StringCopy(&(uParam1->f_2), __LIB_9__::func_229(iParam3, iParam4, iParam2, bParam5), 64);
			break;
		case 70:
			*uParam1 = __LIB_8__::func_719();
			uParam1->f_54 = 2;
			uParam1->f_53 = 3;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			__LIB_9__::func_137(&(uParam1->f_35), 13);
			__LIB_9__::func_137(&(uParam1->f_35), 11);
			__LIB_9__::func_137(&(uParam1->f_35), 20);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			StringCopy(&(uParam1->f_2), __LIB_9__::func_228(iParam3, iParam4, iParam2, bParam5), 64);
			break;
		case 71:
			*uParam1 = __LIB_8__::func_719();
			uParam1->f_54 = 2;
			uParam1->f_53 = 3;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			__LIB_9__::func_137(&(uParam1->f_35), 13);
			__LIB_9__::func_137(&(uParam1->f_35), 11);
			__LIB_9__::func_137(&(uParam1->f_35), 20);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			StringCopy(&(uParam1->f_2), __LIB_9__::func_227(iParam3, iParam4, iParam2, bParam5), 64);
			break;
		case 72:
			*uParam1 = __LIB_8__::func_719();
			uParam1->f_54 = 2;
			uParam1->f_53 = 3;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			__LIB_9__::func_137(&(uParam1->f_35), 13);
			__LIB_9__::func_137(&(uParam1->f_35), 11);
			__LIB_9__::func_137(&(uParam1->f_35), 20);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			StringCopy(&(uParam1->f_2), __LIB_9__::func_226(iParam3, iParam4, iParam2, bParam5), 64);
			break;
		case 73:
			*uParam1 = __LIB_8__::func_719();
			uParam1->f_54 = 2;
			uParam1->f_53 = 3;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			__LIB_9__::func_137(&(uParam1->f_35), 13);
			__LIB_9__::func_137(&(uParam1->f_35), 11);
			__LIB_9__::func_137(&(uParam1->f_35), 20);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			StringCopy(&(uParam1->f_2), __LIB_9__::func_225(iParam3, iParam4, iParam2, bParam5), 64);
			break;
		case 74:
			*uParam1 = __LIB_8__::func_719();
			uParam1->f_54 = 2;
			uParam1->f_53 = 3;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			__LIB_9__::func_137(&(uParam1->f_35), 13);
			__LIB_9__::func_137(&(uParam1->f_35), 11);
			__LIB_9__::func_137(&(uParam1->f_35), 20);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			StringCopy(&(uParam1->f_2), __LIB_9__::func_224(iParam3, iParam4, iParam2, bParam5), 64);
			break;
		case 75:
			*uParam1 = __LIB_8__::func_719();
			uParam1->f_54 = 2;
			uParam1->f_53 = 3;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			__LIB_9__::func_137(&(uParam1->f_35), 13);
			__LIB_9__::func_137(&(uParam1->f_35), 11);
			__LIB_9__::func_137(&(uParam1->f_35), 20);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			StringCopy(&(uParam1->f_2), __LIB_9__::func_223(iParam3, iParam4, iParam2, bParam5), 64);
			break;
		case 76:
			*uParam1 = __LIB_8__::func_719();
			uParam1->f_54 = 2;
			uParam1->f_53 = 3;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			__LIB_9__::func_137(&(uParam1->f_35), 13);
			__LIB_9__::func_137(&(uParam1->f_35), 11);
			__LIB_9__::func_137(&(uParam1->f_35), 20);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			StringCopy(&(uParam1->f_2), __LIB_9__::func_222(iParam3, iParam4, iParam2, bParam5), 64);
			break;
		case 77:
			*uParam1 = __LIB_8__::func_719();
			uParam1->f_54 = 2;
			uParam1->f_53 = 3;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			__LIB_9__::func_137(&(uParam1->f_35), 13);
			__LIB_9__::func_137(&(uParam1->f_35), 11);
			__LIB_9__::func_137(&(uParam1->f_35), 20);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			StringCopy(&(uParam1->f_2), __LIB_9__::func_221(iParam3, iParam4, iParam2, bParam5), 64);
			break;
		case 78:
			*uParam1 = __LIB_8__::func_694(bParam5);
			uParam1->f_54 = 2;
			uParam1->f_53 = 3;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			__LIB_9__::func_137(&(uParam1->f_35), 13);
			__LIB_9__::func_137(&(uParam1->f_35), 11);
			__LIB_9__::func_137(&(uParam1->f_35), 17);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			StringCopy(&(uParam1->f_2), __LIB_9__::func_220(iParam3, iParam4, iParam2, bParam5), 64);
			break;
		case 79:
			*uParam1 = __LIB_8__::func_694(bParam5);
			uParam1->f_54 = 2;
			uParam1->f_53 = 3;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			__LIB_9__::func_137(&(uParam1->f_35), 13);
			__LIB_9__::func_137(&(uParam1->f_35), 11);
			__LIB_9__::func_137(&(uParam1->f_35), 17);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			StringCopy(&(uParam1->f_2), __LIB_9__::func_219(iParam3, iParam4, iParam2, bParam5), 64);
			break;
		case 80:
			*uParam1 = __LIB_8__::func_694(bParam5);
			uParam1->f_54 = 2;
			uParam1->f_53 = 3;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			__LIB_9__::func_137(&(uParam1->f_35), 13);
			__LIB_9__::func_137(&(uParam1->f_35), 11);
			__LIB_9__::func_137(&(uParam1->f_35), 17);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			StringCopy(&(uParam1->f_2), __LIB_9__::func_218(iParam3, iParam4, iParam2, bParam5), 64);
			break;
		case 81:
			*uParam1 = __LIB_8__::func_694(bParam5);
			uParam1->f_54 = 2;
			uParam1->f_53 = 3;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			__LIB_9__::func_137(&(uParam1->f_35), 13);
			__LIB_9__::func_137(&(uParam1->f_35), 11);
			__LIB_9__::func_137(&(uParam1->f_35), 17);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			StringCopy(&(uParam1->f_2), __LIB_9__::func_217(iParam3, iParam4, iParam2, bParam5), 64);
			break;
		case 82:
			*uParam1 = __LIB_8__::func_694(bParam5);
			uParam1->f_54 = 2;
			uParam1->f_53 = 3;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			__LIB_9__::func_137(&(uParam1->f_35), 13);
			__LIB_9__::func_137(&(uParam1->f_35), 11);
			__LIB_9__::func_137(&(uParam1->f_35), 17);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			StringCopy(&(uParam1->f_2), __LIB_9__::func_216(iParam3, iParam4, iParam2, bParam5), 64);
			break;
		case 83:
			*uParam1 = __LIB_8__::func_694(bParam5);
			uParam1->f_54 = 2;
			uParam1->f_53 = 3;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			__LIB_9__::func_137(&(uParam1->f_35), 13);
			__LIB_9__::func_137(&(uParam1->f_35), 11);
			__LIB_9__::func_137(&(uParam1->f_35), 17);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			StringCopy(&(uParam1->f_2), __LIB_9__::func_215(iParam3, iParam4, iParam2, bParam5), 64);
			break;
		case 84:
			*uParam1 = __LIB_8__::func_694(bParam5);
			uParam1->f_54 = 2;
			uParam1->f_53 = 3;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			__LIB_9__::func_137(&(uParam1->f_35), 13);
			__LIB_9__::func_137(&(uParam1->f_35), 11);
			__LIB_9__::func_137(&(uParam1->f_35), 17);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			StringCopy(&(uParam1->f_2), __LIB_9__::func_214(iParam3, iParam4, iParam2, bParam5), 64);
			break;
		case 85:
			*uParam1 = __LIB_8__::func_694(bParam5);
			uParam1->f_54 = 2;
			uParam1->f_53 = 3;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			__LIB_9__::func_137(&(uParam1->f_35), 13);
			__LIB_9__::func_137(&(uParam1->f_35), 11);
			__LIB_9__::func_137(&(uParam1->f_35), 17);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			StringCopy(&(uParam1->f_2), __LIB_9__::func_213(iParam3, iParam4, iParam2, bParam5), 64);
			break;
		case 86:
			*uParam1 = __LIB_8__::func_694(bParam5);
			uParam1->f_54 = 2;
			uParam1->f_53 = 3;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			__LIB_9__::func_137(&(uParam1->f_35), 13);
			__LIB_9__::func_137(&(uParam1->f_35), 11);
			__LIB_9__::func_137(&(uParam1->f_35), 17);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			StringCopy(&(uParam1->f_2), __LIB_9__::func_212(iParam3, iParam4, iParam2, bParam5), 64);
			break;
		case 87:
			*uParam1 = __LIB_8__::func_694(bParam5);
			uParam1->f_54 = 2;
			uParam1->f_53 = 3;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			__LIB_9__::func_137(&(uParam1->f_35), 13);
			__LIB_9__::func_137(&(uParam1->f_35), 11);
			__LIB_9__::func_137(&(uParam1->f_35), 17);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			StringCopy(&(uParam1->f_2), __LIB_9__::func_211(iParam3, iParam4, iParam2, bParam5), 64);
			break;
		case 88:
			*uParam1 = __LIB_8__::func_694(bParam5);
			uParam1->f_54 = 2;
			uParam1->f_53 = 3;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			__LIB_9__::func_137(&(uParam1->f_35), 13);
			__LIB_9__::func_137(&(uParam1->f_35), 11);
			__LIB_9__::func_137(&(uParam1->f_35), 17);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			StringCopy(&(uParam1->f_2), __LIB_9__::func_210(iParam3, iParam4, iParam2, bParam5), 64);
			break;
		case 89:
			*uParam1 = __LIB_8__::func_694(bParam5);
			uParam1->f_54 = 2;
			uParam1->f_53 = 3;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			__LIB_9__::func_137(&(uParam1->f_35), 13);
			__LIB_9__::func_137(&(uParam1->f_35), 11);
			__LIB_9__::func_137(&(uParam1->f_35), 17);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			StringCopy(&(uParam1->f_2), __LIB_9__::func_209(iParam3, iParam4, iParam2, bParam5), 64);
			break;
		case 90:
			*uParam1 = __LIB_8__::func_669(bParam5);
			uParam1->f_54 = 2;
			uParam1->f_53 = 3;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			__LIB_9__::func_137(&(uParam1->f_35), 13);
			__LIB_9__::func_137(&(uParam1->f_35), 11);
			__LIB_9__::func_137(&(uParam1->f_35), 18);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			StringCopy(&(uParam1->f_2), __LIB_9__::func_208(iParam3, iParam4, iParam2, bParam5), 64);
			break;
		case 91:
			*uParam1 = __LIB_8__::func_669(bParam5);
			uParam1->f_54 = 2;
			uParam1->f_53 = 3;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			__LIB_9__::func_137(&(uParam1->f_35), 13);
			__LIB_9__::func_137(&(uParam1->f_35), 11);
			__LIB_9__::func_137(&(uParam1->f_35), 18);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			StringCopy(&(uParam1->f_2), __LIB_9__::func_207(iParam3, iParam4, iParam2, bParam5), 64);
			break;
		case 92:
			*uParam1 = __LIB_8__::func_669(bParam5);
			uParam1->f_54 = 2;
			uParam1->f_53 = 3;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			__LIB_9__::func_137(&(uParam1->f_35), 13);
			__LIB_9__::func_137(&(uParam1->f_35), 11);
			__LIB_9__::func_137(&(uParam1->f_35), 18);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			StringCopy(&(uParam1->f_2), __LIB_9__::func_206(iParam3, iParam4, iParam2, bParam5), 64);
			break;
		case 93:
			*uParam1 = __LIB_8__::func_669(bParam5);
			uParam1->f_54 = 2;
			uParam1->f_53 = 3;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			__LIB_9__::func_137(&(uParam1->f_35), 13);
			__LIB_9__::func_137(&(uParam1->f_35), 11);
			__LIB_9__::func_137(&(uParam1->f_35), 18);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			StringCopy(&(uParam1->f_2), __LIB_9__::func_205(iParam3, iParam4, iParam2, bParam5), 64);
			break;
		case 94:
			*uParam1 = __LIB_8__::func_669(bParam5);
			uParam1->f_54 = 2;
			uParam1->f_53 = 3;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			__LIB_9__::func_137(&(uParam1->f_35), 13);
			__LIB_9__::func_137(&(uParam1->f_35), 11);
			__LIB_9__::func_137(&(uParam1->f_35), 18);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			StringCopy(&(uParam1->f_2), __LIB_9__::func_204(iParam3, iParam4, iParam2, bParam5), 64);
			break;
		case 95:
			*uParam1 = __LIB_8__::func_669(bParam5);
			uParam1->f_54 = 2;
			uParam1->f_53 = 3;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			__LIB_9__::func_137(&(uParam1->f_35), 13);
			__LIB_9__::func_137(&(uParam1->f_35), 11);
			__LIB_9__::func_137(&(uParam1->f_35), 18);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			StringCopy(&(uParam1->f_2), __LIB_9__::func_203(iParam3, iParam4, iParam2, bParam5), 64);
			break;
		case 96:
			*uParam1 = __LIB_8__::func_669(bParam5);
			uParam1->f_54 = 2;
			uParam1->f_53 = 3;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			__LIB_9__::func_137(&(uParam1->f_35), 13);
			__LIB_9__::func_137(&(uParam1->f_35), 11);
			__LIB_9__::func_137(&(uParam1->f_35), 18);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			StringCopy(&(uParam1->f_2), __LIB_9__::func_202(iParam3, iParam4, iParam2, bParam5), 64);
			break;
		case 97:
			*uParam1 = __LIB_8__::func_669(bParam5);
			uParam1->f_54 = 2;
			uParam1->f_53 = 3;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			__LIB_9__::func_137(&(uParam1->f_35), 13);
			__LIB_9__::func_137(&(uParam1->f_35), 11);
			__LIB_9__::func_137(&(uParam1->f_35), 18);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			StringCopy(&(uParam1->f_2), __LIB_9__::func_201(iParam3, iParam4, iParam2, bParam5), 64);
			break;
		case 98:
			*uParam1 = __LIB_8__::func_669(bParam5);
			uParam1->f_54 = 2;
			uParam1->f_53 = 3;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			__LIB_9__::func_137(&(uParam1->f_35), 13);
			__LIB_9__::func_137(&(uParam1->f_35), 11);
			__LIB_9__::func_137(&(uParam1->f_35), 18);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			StringCopy(&(uParam1->f_2), __LIB_9__::func_200(iParam3, iParam4, iParam2, bParam5), 64);
			break;
		case 99:
			*uParam1 = __LIB_8__::func_669(bParam5);
			uParam1->f_54 = 2;
			uParam1->f_53 = 3;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			__LIB_9__::func_137(&(uParam1->f_35), 13);
			__LIB_9__::func_137(&(uParam1->f_35), 11);
			__LIB_9__::func_137(&(uParam1->f_35), 18);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			StringCopy(&(uParam1->f_2), __LIB_9__::func_199(iParam3, iParam4, iParam2, bParam5), 64);
			break;
		case 100:
			*uParam1 = __LIB_8__::func_669(bParam5);
			uParam1->f_54 = 2;
			uParam1->f_53 = 3;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			__LIB_9__::func_137(&(uParam1->f_35), 13);
			__LIB_9__::func_137(&(uParam1->f_35), 11);
			__LIB_9__::func_137(&(uParam1->f_35), 18);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			StringCopy(&(uParam1->f_2), __LIB_9__::func_198(iParam3, iParam4, iParam2, bParam5), 64);
			break;
		case 101:
			*uParam1 = __LIB_8__::func_669(bParam5);
			uParam1->f_54 = 2;
			uParam1->f_53 = 3;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			__LIB_9__::func_137(&(uParam1->f_35), 13);
			__LIB_9__::func_137(&(uParam1->f_35), 11);
			__LIB_9__::func_137(&(uParam1->f_35), 18);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			StringCopy(&(uParam1->f_2), __LIB_9__::func_197(iParam3, iParam4, iParam2, bParam5), 64);
			break;
		case 102:
			*uParam1 = "ANIM@AMB@NIGHTCLUB_ISLAND@DANCERS@CROWDDANCE_GROUPS@GROUPA@";
			uParam1->f_51 = 5;
			__LIB_9__::func_137(&(uParam1->f_35), 0);
			__LIB_9__::func_137(&(uParam1->f_35), 1);
			__LIB_9__::func_137(&(uParam1->f_35), 11);
			__LIB_9__::func_137(&(uParam1->f_35), 19);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			StringCopy(&(uParam1->f_2), __LIB_9__::func_196(iParam3, iParam4, iParam2, bParam5), 64);
			break;
		case 103:
			*uParam1 = "ANIM@AMB@NIGHTCLUB_ISLAND@DANCERS@CROWDDANCE_GROUPS@GROUPA@";
			uParam1->f_51 = 5;
			__LIB_9__::func_137(&(uParam1->f_35), 0);
			__LIB_9__::func_137(&(uParam1->f_35), 1);
			__LIB_9__::func_137(&(uParam1->f_35), 11);
			__LIB_9__::func_137(&(uParam1->f_35), 19);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			StringCopy(&(uParam1->f_2), __LIB_9__::func_195(iParam3, iParam4, iParam2, bParam5), 64);
			break;
		case 104:
			*uParam1 = "ANIM@AMB@NIGHTCLUB_ISLAND@DANCERS@CROWDDANCE_GROUPS@GROUPB@";
			uParam1->f_51 = 5;
			__LIB_9__::func_137(&(uParam1->f_35), 0);
			__LIB_9__::func_137(&(uParam1->f_35), 1);
			__LIB_9__::func_137(&(uParam1->f_35), 11);
			__LIB_9__::func_137(&(uParam1->f_35), 19);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			StringCopy(&(uParam1->f_2), __LIB_9__::func_194(iParam3, iParam4, iParam2, bParam5), 64);
			break;
		case 105:
			*uParam1 = "ANIM@AMB@NIGHTCLUB_ISLAND@DANCERS@CROWDDANCE_GROUPS@GROUPB@";
			uParam1->f_51 = 5;
			__LIB_9__::func_137(&(uParam1->f_35), 0);
			__LIB_9__::func_137(&(uParam1->f_35), 1);
			__LIB_9__::func_137(&(uParam1->f_35), 11);
			__LIB_9__::func_137(&(uParam1->f_35), 19);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			StringCopy(&(uParam1->f_2), __LIB_9__::func_193(iParam3, iParam4, iParam2, bParam5), 64);
			break;
		case 106:
			*uParam1 = "ANIM@AMB@NIGHTCLUB_ISLAND@DANCERS@CROWDDANCE_GROUPS@GROUPC@";
			uParam1->f_51 = 5;
			__LIB_9__::func_137(&(uParam1->f_35), 0);
			__LIB_9__::func_137(&(uParam1->f_35), 1);
			__LIB_9__::func_137(&(uParam1->f_35), 11);
			__LIB_9__::func_137(&(uParam1->f_35), 19);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			StringCopy(&(uParam1->f_2), __LIB_9__::func_192(iParam3, iParam4, iParam2, bParam5), 64);
			break;
		case 107:
			*uParam1 = "ANIM@AMB@NIGHTCLUB_ISLAND@DANCERS@CROWDDANCE_GROUPS@GROUPC@";
			uParam1->f_51 = 5;
			__LIB_9__::func_137(&(uParam1->f_35), 0);
			__LIB_9__::func_137(&(uParam1->f_35), 1);
			__LIB_9__::func_137(&(uParam1->f_35), 11);
			__LIB_9__::func_137(&(uParam1->f_35), 19);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			StringCopy(&(uParam1->f_2), __LIB_9__::func_191(iParam3, iParam4, iParam2, bParam5), 64);
			break;
		case 108:
			*uParam1 = "ANIM@AMB@NIGHTCLUB_ISLAND@DANCERS@CROWDDANCE_GROUPS@GROUPD@";
			uParam1->f_51 = 5;
			__LIB_9__::func_137(&(uParam1->f_35), 0);
			__LIB_9__::func_137(&(uParam1->f_35), 1);
			__LIB_9__::func_137(&(uParam1->f_35), 11);
			__LIB_9__::func_137(&(uParam1->f_35), 19);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			StringCopy(&(uParam1->f_2), __LIB_9__::func_190(iParam3, iParam4, iParam2, bParam5), 64);
			break;
		case 109:
			*uParam1 = "ANIM@AMB@NIGHTCLUB_ISLAND@DANCERS@CROWDDANCE_GROUPS@GROUPD@";
			uParam1->f_51 = 5;
			__LIB_9__::func_137(&(uParam1->f_35), 0);
			__LIB_9__::func_137(&(uParam1->f_35), 1);
			__LIB_9__::func_137(&(uParam1->f_35), 11);
			__LIB_9__::func_137(&(uParam1->f_35), 19);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			StringCopy(&(uParam1->f_2), __LIB_9__::func_189(iParam3, iParam4, iParam2, bParam5), 64);
			break;
		case 110:
			*uParam1 = "ANIM@AMB@NIGHTCLUB_ISLAND@DANCERS@CROWDDANCE_GROUPS@GROUPD@";
			uParam1->f_51 = 5;
			__LIB_9__::func_137(&(uParam1->f_35), 0);
			__LIB_9__::func_137(&(uParam1->f_35), 1);
			__LIB_9__::func_137(&(uParam1->f_35), 11);
			__LIB_9__::func_137(&(uParam1->f_35), 19);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			StringCopy(&(uParam1->f_2), __LIB_9__::func_188(iParam3, iParam4, iParam2, bParam5), 64);
			break;
		case 111:
			*uParam1 = "ANIM@AMB@NIGHTCLUB_ISLAND@DANCERS@CROWDDANCE_GROUPS@GROUPE@";
			uParam1->f_51 = 5;
			__LIB_9__::func_137(&(uParam1->f_35), 0);
			__LIB_9__::func_137(&(uParam1->f_35), 1);
			__LIB_9__::func_137(&(uParam1->f_35), 11);
			__LIB_9__::func_137(&(uParam1->f_35), 19);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			StringCopy(&(uParam1->f_2), __LIB_9__::func_187(iParam3, iParam4, iParam2, bParam5), 64);
			break;
		case 112:
			*uParam1 = "ANIM@AMB@NIGHTCLUB_ISLAND@DANCERS@CROWDDANCE_GROUPS@GROUPE@";
			uParam1->f_51 = 5;
			__LIB_9__::func_137(&(uParam1->f_35), 0);
			__LIB_9__::func_137(&(uParam1->f_35), 1);
			__LIB_9__::func_137(&(uParam1->f_35), 11);
			__LIB_9__::func_137(&(uParam1->f_35), 19);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			StringCopy(&(uParam1->f_2), __LIB_9__::func_186(iParam3, iParam4, iParam2, bParam5), 64);
			break;
		case 113:
			*uParam1 = "ANIM@AMB@NIGHTCLUB_ISLAND@DANCERS@CROWDDANCE_GROUPS@GROUPE@";
			uParam1->f_51 = 5;
			__LIB_9__::func_137(&(uParam1->f_35), 0);
			__LIB_9__::func_137(&(uParam1->f_35), 1);
			__LIB_9__::func_137(&(uParam1->f_35), 11);
			__LIB_9__::func_137(&(uParam1->f_35), 19);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			StringCopy(&(uParam1->f_2), __LIB_9__::func_185(iParam3, iParam4, iParam2, bParam5), 64);
			break;
		case 114:
			*uParam1 = __LIB_8__::func_625();
			uParam1->f_54 = 2;
			uParam1->f_53 = 3;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			__LIB_9__::func_137(&(uParam1->f_35), 15);
			__LIB_9__::func_137(&(uParam1->f_35), 11);
			__LIB_9__::func_137(&(uParam1->f_35), 21);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			StringCopy(&(uParam1->f_2), __LIB_9__::func_174(uParam1, iParam3, iParam4, iParam2, bParam5), 64);
			__LIB_8__::func_624(uParam1, bParam5);
			break;
		case 115:
			*uParam1 = __LIB_8__::func_625();
			uParam1->f_54 = 2;
			uParam1->f_53 = 3;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			__LIB_9__::func_137(&(uParam1->f_35), 15);
			__LIB_9__::func_137(&(uParam1->f_35), 11);
			__LIB_9__::func_137(&(uParam1->f_35), 21);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			StringCopy(&(uParam1->f_2), __LIB_9__::func_173(uParam1, iParam3, iParam4, iParam2, bParam5), 64);
			__LIB_8__::func_624(uParam1, bParam5);
			break;
		case 116:
			*uParam1 = __LIB_8__::func_625();
			uParam1->f_54 = 2;
			uParam1->f_53 = 3;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			__LIB_9__::func_137(&(uParam1->f_35), 15);
			__LIB_9__::func_137(&(uParam1->f_35), 11);
			__LIB_9__::func_137(&(uParam1->f_35), 21);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			StringCopy(&(uParam1->f_2), __LIB_9__::func_172(uParam1, iParam3, iParam4, iParam2, bParam5), 64);
			__LIB_8__::func_624(uParam1, bParam5);
			break;
		case 117:
			*uParam1 = __LIB_8__::func_625();
			uParam1->f_54 = 2;
			uParam1->f_53 = 3;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			__LIB_9__::func_137(&(uParam1->f_35), 15);
			__LIB_9__::func_137(&(uParam1->f_35), 11);
			__LIB_9__::func_137(&(uParam1->f_35), 21);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			StringCopy(&(uParam1->f_2), __LIB_9__::func_184(uParam1, iParam3, iParam4, iParam2, bParam5), 64);
			__LIB_8__::func_624(uParam1, bParam5);
			break;
		case 118:
			*uParam1 = __LIB_8__::func_625();
			uParam1->f_54 = 2;
			uParam1->f_53 = 3;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			__LIB_9__::func_137(&(uParam1->f_35), 15);
			__LIB_9__::func_137(&(uParam1->f_35), 11);
			__LIB_9__::func_137(&(uParam1->f_35), 21);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			StringCopy(&(uParam1->f_2), __LIB_9__::func_183(uParam1, iParam3, iParam4, iParam2, bParam5), 64);
			__LIB_8__::func_624(uParam1, bParam5);
			break;
		case 119:
			*uParam1 = __LIB_8__::func_625();
			uParam1->f_54 = 2;
			uParam1->f_53 = 3;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			__LIB_9__::func_137(&(uParam1->f_35), 15);
			__LIB_9__::func_137(&(uParam1->f_35), 11);
			__LIB_9__::func_137(&(uParam1->f_35), 21);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			StringCopy(&(uParam1->f_2), __LIB_9__::func_182(uParam1, iParam3, iParam4, iParam2, bParam5), 64);
			__LIB_8__::func_624(uParam1, bParam5);
			break;
		case 120:
			*uParam1 = __LIB_8__::func_625();
			uParam1->f_54 = 2;
			uParam1->f_53 = 3;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			__LIB_9__::func_137(&(uParam1->f_35), 15);
			__LIB_9__::func_137(&(uParam1->f_35), 11);
			__LIB_9__::func_137(&(uParam1->f_35), 21);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			StringCopy(&(uParam1->f_2), __LIB_9__::func_181(uParam1, iParam3, iParam4, iParam2, bParam5), 64);
			__LIB_8__::func_624(uParam1, bParam5);
			break;
		case 121:
			*uParam1 = __LIB_8__::func_617();
			uParam1->f_54 = 2;
			uParam1->f_53 = 3;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			__LIB_9__::func_137(&(uParam1->f_35), 15);
			__LIB_9__::func_137(&(uParam1->f_35), 11);
			__LIB_9__::func_137(&(uParam1->f_35), 22);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			StringCopy(&(uParam1->f_2), __LIB_9__::func_180(uParam1, iParam3, iParam4, iParam2, bParam5), 64);
			__LIB_8__::func_624(uParam1, bParam5);
			break;
		case 122:
			*uParam1 = __LIB_8__::func_617();
			uParam1->f_54 = 2;
			uParam1->f_53 = 3;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			__LIB_9__::func_137(&(uParam1->f_35), 15);
			__LIB_9__::func_137(&(uParam1->f_35), 11);
			__LIB_9__::func_137(&(uParam1->f_35), 22);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			StringCopy(&(uParam1->f_2), __LIB_9__::func_179(uParam1, iParam3, iParam4, iParam2, bParam5), 64);
			__LIB_8__::func_624(uParam1, bParam5);
			break;
		case 123:
			*uParam1 = __LIB_8__::func_617();
			uParam1->f_54 = 2;
			uParam1->f_53 = 3;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			__LIB_9__::func_137(&(uParam1->f_35), 15);
			__LIB_9__::func_137(&(uParam1->f_35), 11);
			__LIB_9__::func_137(&(uParam1->f_35), 22);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			StringCopy(&(uParam1->f_2), __LIB_9__::func_178(uParam1, iParam3, iParam4, iParam2, bParam5), 64);
			__LIB_8__::func_624(uParam1, bParam5);
			break;
		case 124:
			*uParam1 = __LIB_8__::func_617();
			uParam1->f_54 = 2;
			uParam1->f_53 = 3;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			__LIB_9__::func_137(&(uParam1->f_35), 15);
			__LIB_9__::func_137(&(uParam1->f_35), 11);
			__LIB_9__::func_137(&(uParam1->f_35), 22);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			StringCopy(&(uParam1->f_2), __LIB_9__::func_177(uParam1, iParam3, iParam4, iParam2, bParam5), 64);
			__LIB_8__::func_624(uParam1, bParam5);
			break;
		case 125:
			*uParam1 = __LIB_8__::func_617();
			uParam1->f_54 = 2;
			uParam1->f_53 = 3;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			__LIB_9__::func_137(&(uParam1->f_35), 15);
			__LIB_9__::func_137(&(uParam1->f_35), 11);
			__LIB_9__::func_137(&(uParam1->f_35), 22);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			StringCopy(&(uParam1->f_2), __LIB_9__::func_176(uParam1, iParam3, iParam4, iParam2, bParam5), 64);
			__LIB_8__::func_624(uParam1, bParam5);
			break;
		case 126:
			*uParam1 = __LIB_8__::func_617();
			uParam1->f_54 = 2;
			uParam1->f_53 = 3;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			__LIB_9__::func_137(&(uParam1->f_35), 15);
			__LIB_9__::func_137(&(uParam1->f_35), 11);
			__LIB_9__::func_137(&(uParam1->f_35), 22);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			StringCopy(&(uParam1->f_2), __LIB_9__::func_175(uParam1, iParam3, iParam4, iParam2, bParam5), 64);
			__LIB_8__::func_624(uParam1, bParam5);
			break;
		case 127:
			*uParam1 = __LIB_8__::func_604();
			uParam1->f_54 = 2;
			uParam1->f_53 = 3;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			__LIB_9__::func_137(&(uParam1->f_35), 15);
			__LIB_9__::func_137(&(uParam1->f_35), 11);
			__LIB_9__::func_137(&(uParam1->f_35), 23);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			StringCopy(&(uParam1->f_2), __LIB_9__::func_174(uParam1, iParam3, iParam4, iParam2, bParam5), 64);
			__LIB_8__::func_624(uParam1, bParam5);
			break;
		case 128:
			*uParam1 = __LIB_8__::func_604();
			uParam1->f_54 = 2;
			uParam1->f_53 = 3;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			__LIB_9__::func_137(&(uParam1->f_35), 15);
			__LIB_9__::func_137(&(uParam1->f_35), 11);
			__LIB_9__::func_137(&(uParam1->f_35), 23);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			StringCopy(&(uParam1->f_2), __LIB_9__::func_173(uParam1, iParam3, iParam4, iParam2, bParam5), 64);
			__LIB_8__::func_624(uParam1, bParam5);
			break;
		case 129:
			*uParam1 = __LIB_8__::func_604();
			uParam1->f_54 = 2;
			uParam1->f_53 = 3;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			__LIB_9__::func_137(&(uParam1->f_35), 15);
			__LIB_9__::func_137(&(uParam1->f_35), 11);
			__LIB_9__::func_137(&(uParam1->f_35), 23);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			StringCopy(&(uParam1->f_2), __LIB_9__::func_172(uParam1, iParam3, iParam4, iParam2, bParam5), 64);
			__LIB_8__::func_624(uParam1, bParam5);
			break;
		case 141:
			*uParam1 = __LIB_8__::func_604();
			uParam1->f_54 = 2;
			uParam1->f_53 = 3;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			__LIB_9__::func_137(&(uParam1->f_35), 15);
			__LIB_9__::func_137(&(uParam1->f_35), 11);
			__LIB_9__::func_137(&(uParam1->f_35), 23);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			StringCopy(&(uParam1->f_2), __LIB_9__::func_171(uParam1, iParam3, iParam4, iParam2, bParam5), 64);
			__LIB_8__::func_624(uParam1, bParam5);
			break;
		case 130:
			*uParam1 = __LIB_8__::func_604();
			uParam1->f_54 = 2;
			uParam1->f_53 = 3;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			__LIB_9__::func_137(&(uParam1->f_35), 15);
			__LIB_9__::func_137(&(uParam1->f_35), 11);
			__LIB_9__::func_137(&(uParam1->f_35), 23);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			StringCopy(&(uParam1->f_2), __LIB_9__::func_170(uParam1, iParam3, iParam4, iParam2, bParam5), 64);
			__LIB_8__::func_624(uParam1, bParam5);
			break;
		case 131:
			*uParam1 = __LIB_8__::func_604();
			uParam1->f_54 = 2;
			uParam1->f_53 = 3;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			__LIB_9__::func_137(&(uParam1->f_35), 15);
			__LIB_9__::func_137(&(uParam1->f_35), 11);
			__LIB_9__::func_137(&(uParam1->f_35), 23);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			StringCopy(&(uParam1->f_2), __LIB_9__::func_169(uParam1, iParam3, iParam4, iParam2, bParam5), 64);
			__LIB_8__::func_624(uParam1, bParam5);
			break;
		case 132:
			*uParam1 = __LIB_8__::func_604();
			uParam1->f_54 = 2;
			uParam1->f_53 = 3;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			__LIB_9__::func_137(&(uParam1->f_35), 15);
			__LIB_9__::func_137(&(uParam1->f_35), 11);
			__LIB_9__::func_137(&(uParam1->f_35), 23);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			StringCopy(&(uParam1->f_2), __LIB_9__::func_168(uParam1, iParam3, iParam4, iParam2, bParam5), 64);
			__LIB_8__::func_624(uParam1, bParam5);
			break;
		case 133:
			*uParam1 = "ANIM@AMB@NIGHTCLUB@DJS@SOLOMUN@";
			uParam1->f_51 = 5;
			uParam1->f_53 = 1;
			__LIB_9__::func_137(&(uParam1->f_35), 0);
			uParam1->f_2 = { __LIB_8__::func_472(__LIB_9__::func_290(iParam0, iParam2), "", "_SOL") };
			break;
		case 136:
			*uParam1 = "anim@scripted@nightclub@dj@kmuzk@adam_port@";
			uParam1->f_51 = 5;
			uParam1->f_53 = 1;
			__LIB_9__::func_137(&(uParam1->f_35), 0);
			__LIB_9__::func_137(&(uParam1->f_35), 25);
			uParam1->f_2 = { __LIB_8__::func_472(__LIB_9__::func_290(iParam0, iParam2), "", "") };
			break;
		case 135:
			*uParam1 = "anim@scripted@nightclub@dj@kmuzk@andme@";
			uParam1->f_51 = 5;
			uParam1->f_53 = 1;
			__LIB_9__::func_137(&(uParam1->f_35), 0);
			__LIB_9__::func_137(&(uParam1->f_35), 25);
			uParam1->f_2 = { __LIB_8__::func_472(__LIB_9__::func_290(iParam0, iParam2), "", "") };
			break;
		case 134:
			*uParam1 = "anim@scripted@nightclub@dj@kmuzk@rampa@";
			uParam1->f_51 = 5;
			uParam1->f_53 = 1;
			__LIB_9__::func_137(&(uParam1->f_35), 0);
			__LIB_9__::func_137(&(uParam1->f_35), 25);
			uParam1->f_2 = { __LIB_8__::func_472(__LIB_9__::func_290(iParam0, iParam2), "", "") };
			break;
		case 137:
			*uParam1 = "anim@scripted@nightclub@dj@dj_ptrax@";
			uParam1->f_51 = 5;
			uParam1->f_53 = 1;
			__LIB_9__::func_137(&(uParam1->f_35), 0);
			__LIB_9__::func_137(&(uParam1->f_35), 25);
			uParam1->f_2 = { __LIB_8__::func_472(__LIB_9__::func_290(iParam0, iParam2), "PTRX_", "_DJ_PTRAX") };
			break;
		case 138:
			*uParam1 = "anim@scripted@nightclub@dj@dj_moodm@";
			uParam1->f_51 = 5;
			uParam1->f_53 = 1;
			__LIB_9__::func_137(&(uParam1->f_35), 0);
			__LIB_9__::func_137(&(uParam1->f_35), 25);
			uParam1->f_2 = { __LIB_8__::func_472(__LIB_9__::func_290(iParam0, iParam2), "", "") };
			break;
		case 139:
			*uParam1 = "anim@scripted@nightclub@dj@dj_moodm@";
			uParam1->f_51 = 5;
			uParam1->f_53 = 1;
			__LIB_9__::func_137(&(uParam1->f_35), 0);
			__LIB_9__::func_137(&(uParam1->f_35), 25);
			uParam1->f_2 = { __LIB_8__::func_472(__LIB_9__::func_167(iParam2, 1), "", "_dancer_a") };
			break;
		case 140:
			*uParam1 = "anim@scripted@nightclub@dj@dj_moodm@";
			uParam1->f_51 = 5;
			uParam1->f_53 = 1;
			__LIB_9__::func_137(&(uParam1->f_35), 0);
			__LIB_9__::func_137(&(uParam1->f_35), 25);
			uParam1->f_2 = { __LIB_8__::func_472(__LIB_9__::func_167(iParam2, 2), "", "_dancer_b") };
			break;
		case 149:
			*uParam1 = __LIB_8__::func_582();
			uParam1->f_51 = 5;
			uParam1->f_54 = 786432/*__LIB_3__::func_635*/;
			uParam1->f_53 = 1;
			__LIB_9__::func_137(&(uParam1->f_35), 0);
			__LIB_9__::func_137(&(uParam1->f_35), 4);
			StringCopy(&(uParam1->f_2), __LIB_8__::func_589(uParam1, iParam2), 64);
			break;
		case 150:
			*uParam1 = __LIB_8__::func_582();
			uParam1->f_51 = 5;
			uParam1->f_54 = 786432/*__LIB_3__::func_635*/;
			uParam1->f_53 = 1;
			__LIB_9__::func_137(&(uParam1->f_35), 0);
			__LIB_9__::func_137(&(uParam1->f_35), 4);
			StringCopy(&(uParam1->f_2), __LIB_8__::func_588(uParam1, iParam2), 64);
			break;
		case 151:
			*uParam1 = __LIB_8__::func_582();
			uParam1->f_51 = 5;
			uParam1->f_54 = 786432/*__LIB_3__::func_635*/;
			uParam1->f_53 = 1;
			__LIB_9__::func_137(&(uParam1->f_35), 0);
			__LIB_9__::func_137(&(uParam1->f_35), 4);
			StringCopy(&(uParam1->f_2), __LIB_8__::func_587(uParam1, iParam2), 64);
			break;
		case 152:
			*uParam1 = __LIB_8__::func_582();
			uParam1->f_51 = 5;
			uParam1->f_54 = 786432/*__LIB_3__::func_635*/;
			uParam1->f_53 = 1;
			__LIB_9__::func_137(&(uParam1->f_35), 0);
			__LIB_9__::func_137(&(uParam1->f_35), 4);
			StringCopy(&(uParam1->f_2), __LIB_8__::func_586(uParam1, iParam2), 64);
			break;
		case 153:
			*uParam1 = __LIB_8__::func_582();
			uParam1->f_51 = 5;
			uParam1->f_54 = 786432/*__LIB_3__::func_635*/;
			uParam1->f_53 = 1;
			__LIB_9__::func_137(&(uParam1->f_35), 0);
			__LIB_9__::func_137(&(uParam1->f_35), 4);
			StringCopy(&(uParam1->f_2), __LIB_8__::func_585(uParam1, iParam2), 64);
			break;
		case 166:
			*uParam1 = "AMB@WORLD_HUMAN_CLIPBOARD@MALE@BASE";
			uParam1->f_54 = 1;
			uParam1->f_53 = 3;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			StringCopy(&(uParam1->f_2), "BASE", 64);
			break;
	}
	if (__LIB_8__::func_584(iParam0))
	{
		__LIB_9__::func_166(uParam1, iParam4, bParam5);
	}
}

void func_5660(var uParam0, int iParam1)//Position - 0x1DA7CC
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1954502/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_1 = 1954493/*__LIB_0__::func_109*/;
			break;
		case 2:
			uParam0->f_2 = 1954484/*__LIB_0__::func_109*/;
			break;
		case 3:
			uParam0->f_3 = 1954475/*__LIB_0__::func_114*/;
			break;
		case 4:
			uParam0->f_4 = 1954466/*__LIB_3__::func_939*/;
			break;
		case 5:
			uParam0->f_5 = 1954373/*__LIB_9__::func_915*/;
			break;
		case 6:
			uParam0->f_6 = 1954364/*__LIB_0__::func_114*/;
			break;
		case 9:
			uParam0->f_9 = 1953309/*__LIB_10__::func_678*/;
			break;
		case 10:
			uParam0->f_10 = 1953231/*__LIB_10__::func_677*/;
			break;
		case 11:
			uParam0->f_11 = 1951314/*func_5691*/;
			break;
		case 12:
			uParam0->f_12 = 1949548/*__LIB_9__::func_72*/;
			break;
		case 14:
			uParam0->f_14 = 1949438/*__LIB_9__::func_236*/;
			break;
		case 17:
			uParam0->f_17 = 1949304/*__LIB_7__::func_240*/;
			break;
		case 18:
			uParam0->f_18 = 1949264/*__LIB_9__::func_863*/;
			break;
		case 19:
			uParam0->f_19 = 1949229/*__LIB_8__::func_752*/;
			break;
		case 21:
			uParam0->f_21 = 1949103/*__LIB_9__::func_862*/;
			break;
		case 30:
			uParam0->f_31 = 1949023/*__LIB_9__::func_235*/;
			break;
		case 23:
			uParam0->f_22 = 1948571/*__LIB_9__::func_234*/;
			break;
		case 22:
			uParam0->f_23 = 1948226/*__LIB_9__::func_80*/;
			break;
		case 24:
			uParam0->f_24 = 1947505/*__LIB_8__::func_501*/;
			break;
		case 25:
			uParam0->f_25 = 1947208/*__LIB_11__::func_572*/;
			break;
		case 26:
			uParam0->f_26 = 1943914/*__LIB_11__::func_349*/;
			break;
		case 31:
			uParam0->f_32 = 1943905/*__LIB_0__::func_114*/;
			break;
	}
}

void func_5691(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8)//Position - 0x1DC652
{
	int iVar0;
	__LIB_9__::func_944(uParam1);
	switch (iParam0)
	{
		case 0:
			*uParam1 = "ANIM_HEIST@ARCADE_COMBINED@";
			uParam1->f_51 = 5;
			uParam1->f_54 = 1;
			__LIB_9__::func_137(&(uParam1->f_35), 12);
			StringCopy(&(uParam1->f_2), "AMB_WORLD_HUMAN_HANG_OUT_STREET_MALE_C_BASE", 64);
			break;
		case 144:
			*uParam1 = "anim@scripted@submarine@special_peds@pavel@hs4_pavel_ig1_screens";
			uParam1->f_51 = 5;
			uParam1->f_53 = 1;
			__LIB_9__::func_137(&(uParam1->f_35), 0);
			__LIB_9__::func_137(&(uParam1->f_35), 5);
			__LIB_9__::func_137(&(uParam1->f_35), 9);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			StringCopy(&(uParam1->f_2), __LIB_8__::func_757(uParam1, iParam2), 64);
			uParam1->f_18 = { __LIB_8__::func_472(&(uParam1->f_2), "", "_Facial") };
			break;
		case 145:
			*uParam1 = "anim@scripted@submarine@special_peds@pavel@hs4_pavel_ig2_buttons@";
			uParam1->f_51 = 5;
			uParam1->f_53 = 1;
			__LIB_9__::func_137(&(uParam1->f_35), 0);
			__LIB_9__::func_137(&(uParam1->f_35), 5);
			__LIB_9__::func_137(&(uParam1->f_35), 9);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			StringCopy(&(uParam1->f_2), __LIB_8__::func_756(uParam1, iParam2), 64);
			break;
		case 146:
			*uParam1 = "anim@scripted@submarine@special_peds@pavel@hs4_pavel_ig4_torpedos";
			uParam1->f_51 = 5;
			uParam1->f_53 = 1;
			__LIB_9__::func_137(&(uParam1->f_35), 0);
			__LIB_9__::func_137(&(uParam1->f_35), 3);
			__LIB_9__::func_137(&(uParam1->f_35), 9);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			StringCopy(&(uParam1->f_2), __LIB_8__::func_755(uParam1, iParam2), 64);
			uParam1->f_18 = { __LIB_8__::func_472(&(uParam1->f_2), "", "_Facial") };
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < 5)
			{
				uParam1->f_79[iVar0] = "vfx_cig_smoke_exhale_mth";
				iVar0++;
			}
			__LIB_9__::func_60(&(uParam1->f_79), &(uParam1->f_79), "core", "ent_anim_cig_exhale_mth", "", "", -0.02f, 0.13f, 0f, 0f, 0f, 0f, 1f, -1, 31086, 1, 0, 0, 0, 0);
			__LIB_9__::func_141(&(uParam1->f_56), "vfx_cig_smoke_start", "vfx_cig_smoke_stop", "core", "ent_anim_cig_smoke", "", "", -0.07f, 0f, 0f, 0f, 0f, 0f, 0.65f, 0, -1, 1, 0, 0, 0, 0, 0, -1082130432, -1082130432);
			break;
		case 147:
			*uParam1 = "anim@scripted@submarine@special_peds@pavel@hs4_pavel_ig5_caviar_p1";
			uParam1->f_51 = 5;
			uParam1->f_53 = 1;
			__LIB_9__::func_137(&(uParam1->f_35), 0);
			__LIB_9__::func_137(&(uParam1->f_35), 3);
			__LIB_9__::func_137(&(uParam1->f_35), 9);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			StringCopy(&(uParam1->f_2), __LIB_8__::func_754(uParam1, iParam2), 64);
			uParam1->f_18 = { __LIB_8__::func_472(&(uParam1->f_2), "", "_Facial") };
			break;
		case 148:
			*uParam1 = "anim@scripted@submarine@special_peds@pavel@hs4_pavel_ig6_engine";
			uParam1->f_51 = 5;
			uParam1->f_54 = 786432/*__LIB_3__::func_635*/;
			uParam1->f_53 = 1;
			__LIB_9__::func_137(&(uParam1->f_35), 0);
			__LIB_9__::func_137(&(uParam1->f_35), 5);
			__LIB_9__::func_137(&(uParam1->f_35), 9);
			__LIB_9__::func_137(&(uParam1->f_35), 16);
			StringCopy(&(uParam1->f_2), __LIB_8__::func_753(uParam1, iParam2), 64);
			break;
	}
}

void func_5711(var uParam0, int iParam1)//Position - 0x1DD2CF
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 2082022/*__LIB_8__::func_839*/;
			break;
		case 1:
			uParam0->f_1 = 2082013/*__LIB_0__::func_114*/;
			break;
		case 2:
			uParam0->f_2 = 2081854/*func_6043*/;
			break;
		case 3:
			uParam0->f_3 = 2081693/*func_6042*/;
			break;
		case 4:
			uParam0->f_4 = 2081684/*__LIB_0__::func_109*/;
			break;
		case 5:
			uParam0->f_5 = 2081675/*__LIB_0__::func_114*/;
			break;
		case 6:
			uParam0->f_6 = 2081666/*__LIB_3__::func_603*/;
			break;
		case 7:
			uParam0->f_7 = 2081643/*__LIB_8__::func_838*/;
			break;
		case 8:
			uParam0->f_8 = 2081630/*__LIB_8__::func_837*/;
			break;
		case 9:
			uParam0->f_9 = 2055615/*func_6035*/;
			break;
		case 10:
			uParam0->f_10 = 2055539/*func_6034*/;
			break;
		case 11:
			uParam0->f_11 = 1966522/*__LIB_10__::func_679*/;
			break;
		case 12:
			uParam0->f_12 = 1962862/*__LIB_9__::func_952*/;
			break;
		case 13:
			uParam0->f_13 = 1962803/*__LIB_8__::func_763*/;
			break;
		case 14:
			uParam0->f_14 = 1962741/*__LIB_8__::func_907*/;
			break;
		case 15:
			uParam0->f_15 = 1962732/*__LIB_0__::func_109*/;
			break;
		case 16:
			uParam0->f_16 = 1962673/*__LIB_8__::func_581*/;
			break;
		case 17:
			uParam0->f_17 = 1962531/*__LIB_8__::func_580*/;
			break;
		case 18:
			uParam0->f_18 = 1962491/*__LIB_9__::func_863*/;
			break;
		case 19:
			uParam0->f_19 = 1962263/*__LIB_8__::func_762*/;
			break;
		case 20:
			uParam0->f_20 = 1962239/*__LIB_8__::func_578*/;
			break;
		case 21:
			uParam0->f_21 = 1962085/*__LIB_9__::func_867*/;
			break;
		case 23:
			uParam0->f_22 = 1961612/*__LIB_9__::func_239*/;
			break;
		case 22:
			uParam0->f_23 = 1961461/*__LIB_9__::func_82*/;
			break;
		case 24:
			uParam0->f_24 = 1959808/*__LIB_8__::func_760*/;
			break;
		case 25:
			uParam0->f_25 = 1959508/*__LIB_9__::func_916*/;
			break;
		case 26:
			uParam0->f_26 = 1956148/*__LIB_9__::func_81*/;
			break;
		case 27:
			uParam0->f_27 = 1956015/*__LIB_8__::func_575*/;
			break;
		case 29:
			uParam0->f_29 = 1955748/*__LIB_9__::func_238*/;
			break;
		case 31:
			uParam0->f_32 = 1955739/*__LIB_0__::func_109*/;
			break;
		case 32:
			uParam0->f_33 = 1955052/*__LIB_11__::func_347*/;
			break;
	}
}

void func_6034(var uParam0, var uParam1)//Position - 0x1F5D73
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		uParam1->f_1 = __LIB_0__::func_114();
		*uParam1 = __LIB_3__::func_603();
		uParam1->f_3 = func_6043(uParam1, -1);
		uParam1->f_4 = func_6042(uParam1, -1);
		uParam1->f_798 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
		uParam1->f_798.f_1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
	}
}

void func_6035(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)//Position - 0x1F5DBF
{
	switch (iParam4)
	{
		case 0:
			func_6036(uParam1, uParam2, iParam3, bParam5);
			break;
	}
}

void func_6036(var uParam0, var uParam1, int iParam2, bool bParam3)//Position - 0x1F5DE3
{
	switch (iParam2)
	{
		case 0:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 20;
					uParam1->f_26 = 134;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 16777216;
					uParam1->f_17[1] = 16777473;
					uParam1->f_17[2] = 2;
					uParam1->f_21[0] = 0;
					uParam1->f_21[1] = 0;
					uParam1->f_21[2] = 0;
					uParam1->f_28 = { 2.1325f, 0.016f, 1.9063f };
					uParam1->f_31 = { 0f, 0f, 270.7f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_9__::func_237(PLAYER::PLAYER_ID()))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 7);
					}
					__LIB_9__::func_137(&(uParam1->f_11), 22);
					__LIB_9__::func_137(&(uParam1->f_11), 21);
					__LIB_9__::func_137(&(uParam1->f_11), 23);
					__LIB_9__::func_137(&(uParam1->f_11), 24);
					__LIB_9__::func_137(&(uParam1->f_11), 12);
					__LIB_9__::func_137(&(uParam1->f_11), 29);
					break;
			}
			break;
		case 1:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 21;
					uParam1->f_26 = 135;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 16777216;
					uParam1->f_17[1] = 256;
					uParam1->f_17[2] = 16842752;
					uParam1->f_21[0] = 0;
					uParam1->f_21[1] = 0;
					uParam1->f_21[2] = 0;
					uParam1->f_28 = { 2.1325f, 0.016f, 1.9063f };
					uParam1->f_31 = { 0f, 0f, 270.7f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_9__::func_237(PLAYER::PLAYER_ID()))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 7);
					}
					__LIB_9__::func_137(&(uParam1->f_11), 22);
					__LIB_9__::func_137(&(uParam1->f_11), 21);
					__LIB_9__::func_137(&(uParam1->f_11), 23);
					__LIB_9__::func_137(&(uParam1->f_11), 24);
					break;
			}
			break;
		case 2:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 22;
					uParam1->f_26 = 136;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 16777216;
					uParam1->f_17[1] = 65792;
					uParam1->f_17[2] = 16777217;
					uParam1->f_21[0] = 0;
					uParam1->f_21[1] = 0;
					uParam1->f_21[2] = 0;
					uParam1->f_28 = { 2.1325f, 0.016f, 1.9063f };
					uParam1->f_31 = { 0f, 0f, 270.7f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_9__::func_237(PLAYER::PLAYER_ID()))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 7);
					}
					__LIB_9__::func_137(&(uParam1->f_11), 22);
					__LIB_9__::func_137(&(uParam1->f_11), 21);
					__LIB_9__::func_137(&(uParam1->f_11), 23);
					__LIB_9__::func_137(&(uParam1->f_11), 24);
					__LIB_9__::func_137(&(uParam1->f_11), 12);
					__LIB_9__::func_137(&(uParam1->f_11), 29);
					break;
			}
			break;
		case 3:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 142;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 0;
					uParam1->f_17[1] = 16974081;
					uParam1->f_17[2] = 16777216;
					uParam1->f_21[0] = 65537;
					uParam1->f_21[1] = 66052;
					uParam1->f_21[2] = 33554432;
					uParam1->f_28 = { -0.4083f, -0.4944f, 1.0263f };
					uParam1->f_31 = { 0f, 0f, 292.75f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_9__::func_237(PLAYER::PLAYER_ID()))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 7);
					}
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					__LIB_9__::func_137(&(uParam1->f_11), 30);
					break;
			}
			break;
		case 4:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 8;
					uParam1->f_26 = 143;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 0;
					uParam1->f_17[1] = 65537;
					uParam1->f_17[2] = 0;
					uParam1->f_21[0] = 0;
					uParam1->f_21[1] = 131086;
					uParam1->f_21[2] = 67108864;
					uParam1->f_28 = { -0.1019f, 0.441f, 1.0263f };
					uParam1->f_31 = { 0f, 0f, 273.209f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_9__::func_237(PLAYER::PLAYER_ID()))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 7);
					}
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					__LIB_9__::func_137(&(uParam1->f_11), 30);
					break;
			}
			break;
		case 5:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 126;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 131074;
					uParam1->f_17[1] = 16974081;
					uParam1->f_17[2] = 17367040;
					uParam1->f_21[0] = 131072;
					uParam1->f_21[1] = 524551;
					uParam1->f_21[2] = 16777216;
					uParam1->f_28 = { -2.4094f, 0.1249f, 2.0213f };
					uParam1->f_31 = { 0f, 0f, 287.82f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 6:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 125;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 0;
					uParam1->f_17[1] = 16974081;
					uParam1->f_17[2] = 16842752;
					uParam1->f_21[0] = 0;
					uParam1->f_21[1] = 131589;
					uParam1->f_21[2] = 0;
					uParam1->f_28 = { -2.3436f, 0.9981f, 2.0213f };
					uParam1->f_31 = { 0f, 0f, 243.199f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_9__::func_237(PLAYER::PLAYER_ID()))
					{
						if (!__LIB_9__::func_233(__LIB_8__::func_758(), 0))
						{
							uParam1->f_28 = { -3.0173f, 0.8461f, 1.8913f };
							uParam1->f_31 = { 0f, 0f, 258.1f };
							__LIB_9__::func_137(&(uParam1->f_11), 0);
						}
					}
					if (__LIB_9__::func_237(PLAYER::PLAYER_ID()))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 7);
					}
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 7:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 130;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 65537;
					uParam1->f_17[1] = 196608;
					uParam1->f_17[2] = 50724864;
					uParam1->f_21[0] = 65538;
					uParam1->f_21[1] = 262405;
					uParam1->f_21[2] = 33554432;
					uParam1->f_28 = { -2.1304f, 2.1887f, 2.0213f };
					uParam1->f_31 = { 0f, 0f, 253.98f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_9__::func_237(PLAYER::PLAYER_ID()))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 7);
					}
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 8:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 53;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 0;
					uParam1->f_17[1] = 16777473;
					uParam1->f_17[2] = 16842752;
					uParam1->f_21[0] = 131074;
					uParam1->f_21[1] = 515;
					uParam1->f_21[2] = 33554432;
					uParam1->f_28 = { -3.1423f, -1.0017f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 298.62f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 9:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 8;
					uParam1->f_26 = 122;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 131074;
					uParam1->f_17[1] = 65792;
					uParam1->f_17[2] = 16777216;
					uParam1->f_21[0] = 65538;
					uParam1->f_21[1] = 918023;
					uParam1->f_21[2] = 50331648;
					uParam1->f_28 = { -1.909f, -1.6132f, 2.0213f };
					uParam1->f_31 = { 0f, 0f, 298.62f };
					__LIB_8__::func_413(&(uParam1->f_11));
					__LIB_9__::func_137(&(uParam1->f_11), 7);
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 10:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 8;
					uParam1->f_26 = 115;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 0;
					uParam1->f_17[1] = 131584;
					uParam1->f_17[2] = 33554432;
					uParam1->f_21[0] = 65537;
					uParam1->f_21[1] = 131595;
					uParam1->f_21[2] = 16777216;
					uParam1->f_28 = { 5.3546f, -2.6012f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 51.697f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 11:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 84;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 131074;
					uParam1->f_17[1] = 131072;
					uParam1->f_17[2] = 196608;
					uParam1->f_21[0] = 1;
					uParam1->f_21[1] = 66055;
					uParam1->f_21[2] = 0;
					uParam1->f_28 = { 5.2355f, 0.0059f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 89.1f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 12:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 119;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 65537;
					uParam1->f_17[1] = 33619968;
					uParam1->f_17[2] = 50987008;
					uParam1->f_21[0] = 65538;
					uParam1->f_21[1] = 65795;
					uParam1->f_21[2] = 0;
					uParam1->f_28 = { 5.2997f, 0.9763f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 85.5f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 13:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 8;
					uParam1->f_26 = 116;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 0;
					uParam1->f_17[1] = 256;
					uParam1->f_17[2] = 16777216;
					uParam1->f_21[0] = 131074;
					uParam1->f_21[1] = 266;
					uParam1->f_21[2] = 16777216;
					uParam1->f_28 = { 5.1746f, 2.0864f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 110.498f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 14:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 9;
					uParam1->f_26 = 44;
					uParam1->f_27 = 1;
					uParam1->f_17[0] = 65537;
					uParam1->f_17[1] = 33620992;
					uParam1->f_17[2] = 50921472;
					uParam1->f_21[0] = 65538;
					uParam1->f_21[1] = 259;
					uParam1->f_21[2] = 33554432;
					uParam1->f_28 = { 44.6551f, -14.0048f, 2.1013f };
					uParam1->f_31 = { 0f, 0f, 189.9f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 15:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 105;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 0;
					uParam1->f_17[1] = 33620482;
					uParam1->f_17[2] = 33816576;
					uParam1->f_21[0] = 131074;
					uParam1->f_21[1] = 262401;
					uParam1->f_21[2] = 33554432;
					uParam1->f_28 = { 5.7606f, 5.9845f, 0.8913f };
					uParam1->f_31 = { 0f, 0f, 148.14f };
					__LIB_8__::func_413(&(uParam1->f_11));
					__LIB_9__::func_137(&(uParam1->f_11), 13);
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 16:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 104;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 131074;
					uParam1->f_17[1] = 16908288;
					uParam1->f_17[2] = 17235968;
					uParam1->f_21[0] = 65538;
					uParam1->f_21[1] = 131590;
					uParam1->f_21[2] = 0;
					uParam1->f_28 = { 5.7606f, 5.9845f, 0.8913f };
					uParam1->f_31 = { 0f, 0f, 148.14f };
					__LIB_8__::func_413(&(uParam1->f_11));
					__LIB_9__::func_137(&(uParam1->f_11), 12);
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 17:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 8;
					uParam1->f_26 = 129;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 65537;
					uParam1->f_17[1] = 65537;
					uParam1->f_17[2] = 0;
					uParam1->f_21[0] = 1;
					uParam1->f_21[1] = 459016;
					uParam1->f_21[2] = 16777216;
					uParam1->f_28 = { 5.9394f, 4.0387f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 122.897f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 18:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 9;
					uParam1->f_26 = 118;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 65537;
					uParam1->f_17[1] = 16843521;
					uParam1->f_17[2] = 67305472;
					uParam1->f_21[0] = 65538;
					uParam1->f_21[1] = 262145;
					uParam1->f_21[2] = 16777216;
					uParam1->f_28 = { 8.3415f, 1.6022f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 90.54f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 19:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 130;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 65537;
					uParam1->f_17[1] = 66050;
					uParam1->f_17[2] = 33685504;
					uParam1->f_21[0] = 131073;
					uParam1->f_21[1] = 131586;
					uParam1->f_21[2] = 16777216;
					uParam1->f_28 = { 6.7657f, 1.8173f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 91.697f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 20:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 9;
					uParam1->f_26 = 123;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 0;
					uParam1->f_17[1] = 50397442;
					uParam1->f_17[2] = 65536;
					uParam1->f_21[0] = 65537;
					uParam1->f_21[1] = 393478;
					uParam1->f_21[2] = 33554432;
					uParam1->f_28 = { 6.8847f, 0.7436f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 91.697f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_9__::func_237(PLAYER::PLAYER_ID()))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 7);
					}
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 21:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 131;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 0;
					uParam1->f_17[1] = 33619968;
					uParam1->f_17[2] = 51052544;
					uParam1->f_21[0] = 0;
					uParam1->f_21[1] = 196609;
					uParam1->f_21[2] = 16777216;
					uParam1->f_28 = { 6.3256f, -1.2909f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 71.1f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 22:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 8;
					uParam1->f_26 = 124;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 65537;
					uParam1->f_17[1] = 131329;
					uParam1->f_17[2] = 16777216;
					uParam1->f_21[0] = 0;
					uParam1->f_21[1] = 327697;
					uParam1->f_21[2] = 83886080;
					uParam1->f_28 = { 6.5407f, -4.9181f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 52.38f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 23:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 8;
					uParam1->f_26 = 123;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 65537;
					uParam1->f_17[1] = 65537;
					uParam1->f_17[2] = 0;
					uParam1->f_21[0] = 1;
					uParam1->f_21[1] = 590087;
					uParam1->f_21[2] = 0;
					uParam1->f_28 = { 5.6716f, -5.6967f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 41.58f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 24:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 8;
					uParam1->f_26 = 121;
					uParam1->f_27 = Global_262145.f_24758 /* Tunable: 2089855578 */;
					uParam1->f_17[0] = 131074;
					uParam1->f_17[1] = 131329;
					uParam1->f_17[2] = 16777216;
					uParam1->f_21[0] = 65538;
					uParam1->f_21[1] = 852480;
					uParam1->f_21[2] = 83886080;
					uParam1->f_28 = { 3.7171f, 8.0825f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 306.54f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					if (Global_262145.f_24766 /* Tunable: -993451048 */)
					{
						__LIB_9__::func_137(&(uParam1->f_11), 0);
					}
					break;
			}
			break;
		case 25:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 8;
					uParam1->f_26 = 52;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 131074;
					uParam1->f_17[1] = 66049;
					uParam1->f_17[2] = 33554432;
					uParam1->f_21[0] = 1;
					uParam1->f_21[1] = 655369;
					uParam1->f_21[2] = 33554432;
					uParam1->f_28 = { -0.4864f, 1.7842f, 2.0213f };
					uParam1->f_31 = { 0f, 0f, 223.74f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_9__::func_237(PLAYER::PLAYER_ID()))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 7);
					}
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 26:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 96;
					uParam1->f_27 = Global_262145.f_24758 /* Tunable: 2089855578 */;
					uParam1->f_17[0] = 131074;
					uParam1->f_17[1] = 16843009;
					uParam1->f_17[2] = 17563648;
					uParam1->f_21[0] = 1;
					uParam1->f_21[1] = 524550;
					uParam1->f_21[2] = 33554432;
					uParam1->f_28 = { 4.5838f, 9.0893f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 156.78f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					if (Global_262145.f_24766 /* Tunable: -993451048 */)
					{
						__LIB_9__::func_137(&(uParam1->f_11), 0);
					}
					break;
			}
			break;
		case 27:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 102;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 131074;
					uParam1->f_17[1] = 33751040;
					uParam1->f_17[2] = 50528256;
					uParam1->f_21[0] = 65538;
					uParam1->f_21[1] = 393736;
					uParam1->f_21[2] = 0;
					uParam1->f_28 = { -1.6892f, -3.6945f, 0.8913f };
					uParam1->f_31 = { 0f, 0f, 336.78f };
					__LIB_8__::func_413(&(uParam1->f_11));
					__LIB_9__::func_137(&(uParam1->f_11), 12);
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 28:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 131;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 131074;
					uParam1->f_17[1] = 66050;
					uParam1->f_17[2] = 34209792;
					uParam1->f_21[0] = 131072;
					uParam1->f_21[1] = 458752;
					uParam1->f_21[2] = 0;
					uParam1->f_28 = { 10.1815f, 5.2188f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 110.897f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 29:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 9;
					uParam1->f_26 = 54;
					uParam1->f_27 = 3;
					uParam1->f_17[0] = 131074;
					uParam1->f_17[1] = 50331649;
					uParam1->f_17[2] = 34144256;
					uParam1->f_21[0] = 1;
					uParam1->f_21[1] = 131592;
					uParam1->f_21[2] = 0;
					uParam1->f_28 = { 15.5795f, 12.1336f, 1.8913f };
					uParam1->f_31 = { 0f, 0f, 175.5f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 30:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 8;
					uParam1->f_26 = 110;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 0;
					uParam1->f_17[1] = 131329;
					uParam1->f_17[2] = 16777216;
					uParam1->f_21[0] = 131074;
					uParam1->f_21[1] = 65797;
					uParam1->f_21[2] = 67108864;
					uParam1->f_28 = { 8.3284f, 7.6122f, 0.8913f };
					uParam1->f_31 = { 0f, 0f, 138.06f };
					__LIB_8__::func_413(&(uParam1->f_11));
					__LIB_9__::func_137(&(uParam1->f_11), 13);
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 31:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 9;
					uParam1->f_26 = 121;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 0;
					uParam1->f_17[1] = 16777216;
					uParam1->f_17[2] = 33685504;
					uParam1->f_21[0] = 0;
					uParam1->f_21[1] = 65537;
					uParam1->f_21[2] = 0;
					uParam1->f_28 = { 5.86f, 7.3076f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 145.98f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 32:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 125;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 131074;
					uParam1->f_17[1] = 196608;
					uParam1->f_17[2] = 50855936;
					uParam1->f_21[0] = 1;
					uParam1->f_21[1] = 459272;
					uParam1->f_21[2] = 33554432;
					uParam1->f_28 = { 7.4985f, 5.2986f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 142.38f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 33:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 8;
					uParam1->f_26 = 117;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 131074;
					uParam1->f_17[1] = 131585;
					uParam1->f_17[2] = 33554432;
					uParam1->f_21[0] = 1;
					uParam1->f_21[1] = 786434;
					uParam1->f_21[2] = 0;
					uParam1->f_28 = { 8.2972f, -0.4441f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 81.9f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 34:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 9;
					uParam1->f_26 = 79;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 65537;
					uParam1->f_17[1] = 66050;
					uParam1->f_17[2] = 17039360;
					uParam1->f_21[0] = 0;
					uParam1->f_21[1] = 66051;
					uParam1->f_21[2] = 16777216;
					uParam1->f_28 = { 8.1842f, -1.4897f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 95.297f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 35:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 8;
					uParam1->f_26 = 122;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 131074;
					uParam1->f_17[1] = 65793;
					uParam1->f_17[2] = 16777216;
					uParam1->f_21[0] = 65538;
					uParam1->f_21[1] = 786955;
					uParam1->f_21[2] = 0;
					uParam1->f_28 = { 9.6987f, 0.5718f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 86.297f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 36:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 8;
					uParam1->f_26 = 127;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 0;
					uParam1->f_17[1] = 66049;
					uParam1->f_17[2] = 33554432;
					uParam1->f_21[0] = 65537;
					uParam1->f_21[1] = 66051;
					uParam1->f_21[2] = 16777216;
					uParam1->f_28 = { 8.1421f, 2.6487f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 86.297f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 37:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 8;
					uParam1->f_26 = 124;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 65537;
					uParam1->f_17[1] = 131072;
					uParam1->f_17[2] = 0;
					uParam1->f_21[0] = 2;
					uParam1->f_21[1] = 393486;
					uParam1->f_21[2] = 50331648;
					uParam1->f_28 = { 7.9957f, 4.4778f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 126.54f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 38:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 120;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 65537;
					uParam1->f_17[1] = 16843009;
					uParam1->f_17[2] = 17104896;
					uParam1->f_21[0] = 0;
					uParam1->f_21[1] = 0;
					uParam1->f_21[2] = 16777216;
					uParam1->f_28 = { 9.801f, -0.4685f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 89.1f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 39:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 8;
					uParam1->f_26 = 121;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 131074;
					uParam1->f_17[1] = 0;
					uParam1->f_17[2] = 0;
					uParam1->f_21[0] = 131072;
					uParam1->f_21[1] = 131592;
					uParam1->f_21[2] = 83886080;
					uParam1->f_28 = { 7.3536f, -2.6473f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 53.296f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 40:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 126;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 0;
					uParam1->f_17[1] = 66050;
					uParam1->f_17[2] = 34209792;
					uParam1->f_21[0] = 131074;
					uParam1->f_21[1] = 327937;
					uParam1->f_21[2] = 33554432;
					uParam1->f_28 = { 8.4007f, -3.9964f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 53.296f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 41:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 119;
					uParam1->f_27 = Global_262145.f_24757 /* Tunable: -1891938385 */;
					uParam1->f_17[0] = 131074;
					uParam1->f_17[1] = 33619968;
					uParam1->f_17[2] = 524288;
					uParam1->f_21[0] = 131072;
					uParam1->f_21[1] = 524806;
					uParam1->f_21[2] = 16777216;
					uParam1->f_28 = { 7.2113f, -6.2757f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 43.02f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					if (Global_262145.f_24765 /* Tunable: 262060418 */)
					{
						__LIB_9__::func_137(&(uParam1->f_11), 0);
					}
					break;
			}
			break;
		case 42:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 45;
					uParam1->f_27 = 1;
					uParam1->f_17[0] = 65537;
					uParam1->f_17[1] = 131072;
					uParam1->f_17[2] = 50462720;
					uParam1->f_21[0] = 0;
					uParam1->f_21[1] = 459012;
					uParam1->f_21[2] = 0;
					uParam1->f_28 = { 45.7001f, -14.1686f, 2.1113f };
					uParam1->f_31 = { 0f, 0f, 133.74f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 43:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 8;
					uParam1->f_26 = 123;
					uParam1->f_27 = Global_262145.f_24756 /* Tunable: 1509025053 */;
					uParam1->f_17[0] = 131074;
					uParam1->f_17[1] = 65536;
					uParam1->f_17[2] = 0;
					uParam1->f_21[0] = 131072;
					uParam1->f_21[1] = 852496;
					uParam1->f_21[2] = 0;
					uParam1->f_28 = { 10.5164f, 8.6686f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 111.696f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					if (Global_262145.f_24764 /* Tunable: 626451698 */)
					{
						__LIB_9__::func_137(&(uParam1->f_11), 0);
					}
					break;
			}
			break;
		case 44:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 131;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 65537;
					uParam1->f_17[1] = 16974081;
					uParam1->f_17[2] = 17104896;
					uParam1->f_21[0] = 0;
					uParam1->f_21[1] = 196610;
					uParam1->f_21[2] = 33554432;
					uParam1->f_28 = { -1.1879f, 5.4843f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 208.62f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 45:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 108;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 65537;
					uParam1->f_17[1] = 16777473;
					uParam1->f_17[2] = 17170432;
					uParam1->f_21[0] = 65538;
					uParam1->f_21[1] = 65537;
					uParam1->f_21[2] = 16777216;
					uParam1->f_28 = { 8.3284f, 7.6122f, 0.8913f };
					uParam1->f_31 = { 0f, 0f, 138.06f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_9__::func_237(PLAYER::PLAYER_ID()))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 7);
					}
					__LIB_9__::func_137(&(uParam1->f_11), 12);
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 46:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 9;
					uParam1->f_26 = 109;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 65537;
					uParam1->f_17[1] = 33619969;
					uParam1->f_17[2] = 34013184;
					uParam1->f_21[0] = 131073;
					uParam1->f_21[1] = 196866;
					uParam1->f_21[2] = 0;
					uParam1->f_28 = { 8.3284f, 7.6122f, 0.8913f };
					uParam1->f_31 = { 0f, 0f, 138.06f };
					__LIB_8__::func_413(&(uParam1->f_11));
					__LIB_9__::func_137(&(uParam1->f_11), 13);
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 47:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 61;
					uParam1->f_27 = Global_262145.f_24755 /* Tunable: 1788315240 */;
					uParam1->f_17[0] = 65537;
					uParam1->f_17[1] = 33685504;
					uParam1->f_17[2] = 720896;
					uParam1->f_21[0] = 0;
					uParam1->f_21[1] = 393476;
					uParam1->f_21[2] = 0;
					uParam1->f_28 = { 9.5244f, 9.4924f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 145.98f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_9__::func_237(PLAYER::PLAYER_ID()))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 7);
					}
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					if (Global_262145.f_24763 /* Tunable: -600583507 */)
					{
						__LIB_9__::func_137(&(uParam1->f_11), 0);
					}
					break;
			}
			break;
		case 48:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 98;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 0;
					uParam1->f_17[1] = 196608;
					uParam1->f_17[2] = 0;
					uParam1->f_21[0] = 0;
					uParam1->f_21[1] = 0;
					uParam1->f_21[2] = 33554432;
					uParam1->f_28 = { 10.2357f, 3.9861f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 98.6901f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 49:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 9;
					uParam1->f_26 = 117;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 131074;
					uParam1->f_17[1] = 33686018;
					uParam1->f_17[2] = 17104896;
					uParam1->f_21[0] = 65538;
					uParam1->f_21[1] = 131074;
					uParam1->f_21[2] = 33554432;
					uParam1->f_28 = { 10.2427f, 2.9452f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 98.696f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 50:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 102;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 0;
					uParam1->f_17[1] = 33685504;
					uParam1->f_17[2] = 262144;
					uParam1->f_21[0] = 65537;
					uParam1->f_21[1] = 196610;
					uParam1->f_21[2] = 16777216;
					uParam1->f_28 = { 13.1252f, 3.1452f, 0.8913f };
					uParam1->f_31 = { 0f, 0f, 98.696f };
					__LIB_8__::func_413(&(uParam1->f_11));
					__LIB_9__::func_137(&(uParam1->f_11), 12);
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 51:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 85;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 65537;
					uParam1->f_17[1] = 16777473;
					uParam1->f_17[2] = 17170432;
					uParam1->f_21[0] = 65538;
					uParam1->f_21[1] = 65537;
					uParam1->f_21[2] = 33554432;
					uParam1->f_28 = { 12.1152f, -0.0548f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 159.66f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 52:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 9;
					uParam1->f_26 = 93;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 131074;
					uParam1->f_17[1] = 50398208;
					uParam1->f_17[2] = 50331648;
					uParam1->f_21[0] = 1;
					uParam1->f_21[1] = 918023;
					uParam1->f_21[2] = 0;
					uParam1->f_28 = { 12.0627f, -1.492f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 9.9f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 53:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 8;
					uParam1->f_26 = 128;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 0;
					uParam1->f_17[1] = 65537;
					uParam1->f_17[2] = 0;
					uParam1->f_21[0] = 0;
					uParam1->f_21[1] = 262156;
					uParam1->f_21[2] = 33554432;
					uParam1->f_28 = { 9.8208f, -2.9513f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 60.696f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 54:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 8;
					uParam1->f_26 = 52;
					uParam1->f_27 = Global_262145.f_24757 /* Tunable: -1891938385 */;
					uParam1->f_17[0] = 65537;
					uParam1->f_17[1] = 131585;
					uParam1->f_17[2] = 33554432;
					uParam1->f_21[0] = 2;
					uParam1->f_21[1] = 590096;
					uParam1->f_21[2] = 33554432;
					uParam1->f_28 = { 9.2688f, -5.6634f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 43.74f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					if (Global_262145.f_24765 /* Tunable: 262060418 */)
					{
						__LIB_9__::func_137(&(uParam1->f_11), 0);
					}
					break;
			}
			break;
		case 55:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 86;
					uParam1->f_27 = Global_262145.f_24756 /* Tunable: 1509025053 */;
					uParam1->f_17[0] = 65537;
					uParam1->f_17[1] = 33751040;
					uParam1->f_17[2] = 50462720;
					uParam1->f_21[0] = 131073;
					uParam1->f_21[1] = 327941;
					uParam1->f_21[2] = 16777216;
					uParam1->f_28 = { 12.9949f, -0.7774f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 90.54f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					if (Global_262145.f_24764 /* Tunable: 626451698 */)
					{
						__LIB_9__::func_137(&(uParam1->f_11), 0);
					}
					break;
			}
			break;
		case 56:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 8;
					uParam1->f_26 = 103;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 65537;
					uParam1->f_17[1] = 66049;
					uParam1->f_17[2] = 33554432;
					uParam1->f_21[0] = 0;
					uParam1->f_21[1] = 524559;
					uParam1->f_21[2] = 16777216;
					uParam1->f_28 = { 13.1252f, 3.1452f, 0.8913f };
					uParam1->f_31 = { 0f, 0f, 98.696f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_9__::func_237(PLAYER::PLAYER_ID()))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 7);
					}
					__LIB_9__::func_137(&(uParam1->f_11), 13);
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 57:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 9;
					uParam1->f_26 = 107;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 0;
					uParam1->f_17[1] = 16843778;
					uParam1->f_17[2] = 50397184;
					uParam1->f_21[0] = 131074;
					uParam1->f_21[1] = 524296;
					uParam1->f_21[2] = 16777216;
					uParam1->f_28 = { 12.1997f, 7.5122f, 0.8913f };
					uParam1->f_31 = { 0f, 0f, 116.46f };
					__LIB_8__::func_413(&(uParam1->f_11));
					__LIB_9__::func_137(&(uParam1->f_11), 13);
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 58:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 8;
					uParam1->f_26 = 106;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 131074;
					uParam1->f_17[1] = 131584;
					uParam1->f_17[2] = 33554432;
					uParam1->f_21[0] = 1;
					uParam1->f_21[1] = 720911;
					uParam1->f_21[2] = 33554432;
					uParam1->f_28 = { 12.1997f, 7.5122f, 0.8913f };
					uParam1->f_31 = { 0f, 0f, 116.46f };
					__LIB_8__::func_413(&(uParam1->f_11));
					__LIB_9__::func_137(&(uParam1->f_11), 12);
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 59:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 9;
					uParam1->f_26 = 54;
					uParam1->f_27 = Global_262145.f_24757 /* Tunable: -1891938385 */;
					uParam1->f_17[0] = 131074;
					uParam1->f_17[1] = 33620226;
					uParam1->f_17[2] = 524288;
					uParam1->f_21[0] = 131072;
					uParam1->f_21[1] = 852481;
					uParam1->f_21[2] = 0;
					uParam1->f_28 = { -0.1739f, 5.5121f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 141.66f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					if (Global_262145.f_24765 /* Tunable: 262060418 */)
					{
						__LIB_9__::func_137(&(uParam1->f_11), 0);
					}
					break;
			}
			break;
		case 60:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 8;
					uParam1->f_26 = 44;
					uParam1->f_27 = Global_262145.f_24757 /* Tunable: -1891938385 */;
					uParam1->f_17[0] = 65537;
					uParam1->f_17[1] = 131584;
					uParam1->f_17[2] = 33554432;
					uParam1->f_21[0] = 0;
					uParam1->f_21[1] = 459013;
					uParam1->f_21[2] = 0;
					uParam1->f_28 = { -2.2643f, 4.1782f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 212.94f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_9__::func_237(PLAYER::PLAYER_ID()))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 7);
					}
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					if (Global_262145.f_24765 /* Tunable: 262060418 */)
					{
						__LIB_9__::func_137(&(uParam1->f_11), 0);
					}
					break;
			}
			break;
		case 61:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 8;
					uParam1->f_26 = 59;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 0;
					uParam1->f_17[1] = 131328;
					uParam1->f_17[2] = 16777216;
					uParam1->f_21[0] = 131074;
					uParam1->f_21[1] = 196866;
					uParam1->f_21[2] = 33554432;
					uParam1->f_28 = { -3.1965f, 2.179f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 246.78f };
					__LIB_8__::func_413(&(uParam1->f_11));
					__LIB_9__::func_137(&(uParam1->f_11), 7);
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 62:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 9;
					uParam1->f_26 = 124;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 65537;
					uParam1->f_17[1] = 66561;
					uParam1->f_17[2] = 50790400;
					uParam1->f_21[0] = 131073;
					uParam1->f_21[1] = 131328;
					uParam1->f_21[2] = 33554432;
					uParam1->f_28 = { -1.2309f, -2.2172f, 2.0213f };
					uParam1->f_31 = { 0f, 0f, 318.06f };
					__LIB_8__::func_413(&(uParam1->f_11));
					__LIB_9__::func_137(&(uParam1->f_11), 7);
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 63:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 8;
					uParam1->f_26 = 162;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 65537;
					uParam1->f_17[1] = 65792;
					uParam1->f_17[2] = 16777216;
					uParam1->f_21[0] = 1;
					uParam1->f_21[1] = 393220;
					uParam1->f_21[2] = 67108864;
					uParam1->f_28 = { 17.5452f, 1.2258f, 0.994f };
					uParam1->f_31 = { 0f, 0f, 92.7f };
					__LIB_8__::func_413(&(uParam1->f_11));
					__LIB_9__::func_137(&(uParam1->f_11), 22);
					__LIB_9__::func_137(&(uParam1->f_11), 4);
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 64:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 9;
					uParam1->f_26 = 25;
					uParam1->f_27 = 1;
					uParam1->f_17[0] = 0;
					uParam1->f_17[1] = 66561;
					uParam1->f_17[2] = 50331648;
					uParam1->f_21[0] = 0;
					uParam1->f_21[1] = 327683;
					uParam1->f_21[2] = 16777216;
					uParam1->f_28 = { 14.2312f, -19.9445f, 1.4493f };
					uParam1->f_31 = { 1.8f, 0f, 15.66f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 65:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 26;
					uParam1->f_27 = 1;
					uParam1->f_17[0] = 65537;
					uParam1->f_17[1] = 131586;
					uParam1->f_17[2] = 33947648;
					uParam1->f_21[0] = 131073;
					uParam1->f_21[1] = 459266;
					uParam1->f_21[2] = 0;
					uParam1->f_28 = { 8.418f, -20.3775f, 1.5363f };
					uParam1->f_31 = { 0.5f, 0f, 34.38f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 66:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 9;
					uParam1->f_26 = 36;
					uParam1->f_27 = Global_262145.f_24755 /* Tunable: 1788315240 */;
					uParam1->f_17[0] = 131074;
					uParam1->f_17[1] = 50397954;
					uParam1->f_17[2] = 67633152;
					uParam1->f_21[0] = 131072;
					uParam1->f_21[1] = 655872;
					uParam1->f_21[2] = 33554432;
					uParam1->f_28 = { 24.3166f, -18.743f, 1.6493f };
					uParam1->f_31 = { 0f, 0f, 220.14f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					if (Global_262145.f_24763 /* Tunable: -600583507 */)
					{
						__LIB_9__::func_137(&(uParam1->f_11), 0);
					}
					break;
			}
			break;
		case 67:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 53;
					uParam1->f_27 = Global_262145.f_24755 /* Tunable: 1788315240 */;
					uParam1->f_17[0] = 131074;
					uParam1->f_17[1] = 66050;
					uParam1->f_17[2] = 34209792;
					uParam1->f_21[0] = 1;
					uParam1->f_21[1] = 458752;
					uParam1->f_21[2] = 16777216;
					uParam1->f_28 = { 25.4935f, -18.5614f, 1.6263f };
					uParam1->f_31 = { 0f, 0f, 163.26f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					if (Global_262145.f_24763 /* Tunable: -600583507 */)
					{
						__LIB_9__::func_137(&(uParam1->f_11), 0);
					}
					break;
			}
			break;
		case 68:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 163;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 0;
					uParam1->f_17[1] = 33554432;
					uParam1->f_17[2] = 0;
					uParam1->f_21[0] = 0;
					uParam1->f_21[1] = 1;
					uParam1->f_21[2] = 0;
					uParam1->f_28 = { 17.5452f, 1.2258f, 0.994f };
					uParam1->f_31 = { 0f, 0f, 92.7f };
					__LIB_8__::func_413(&(uParam1->f_11));
					__LIB_9__::func_137(&(uParam1->f_11), 22);
					__LIB_9__::func_137(&(uParam1->f_11), 4);
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 69:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 26;
					uParam1->f_27 = 3;
					uParam1->f_17[0] = 65537;
					uParam1->f_17[1] = 196608;
					uParam1->f_17[2] = 50790400;
					uParam1->f_21[0] = 131073;
					uParam1->f_21[1] = 196867;
					uParam1->f_21[2] = 33554432;
					uParam1->f_28 = { 45.0042f, -25.2215f, 1.2073f };
					uParam1->f_31 = { 9f, 0f, 330.3f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 70:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 8;
					uParam1->f_26 = 164;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 0;
					uParam1->f_17[1] = 131328;
					uParam1->f_17[2] = 16777216;
					uParam1->f_21[0] = 131074;
					uParam1->f_21[1] = 262401;
					uParam1->f_21[2] = 50331648;
					uParam1->f_28 = { 17.5452f, 1.2258f, 0.994f };
					uParam1->f_31 = { 0f, 0f, 92.7f };
					__LIB_8__::func_413(&(uParam1->f_11));
					__LIB_9__::func_137(&(uParam1->f_11), 12);
					__LIB_9__::func_137(&(uParam1->f_11), 22);
					__LIB_9__::func_137(&(uParam1->f_11), 4);
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 71:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 28;
					uParam1->f_27 = 1;
					uParam1->f_17[0] = 131074;
					uParam1->f_17[1] = 16777473;
					uParam1->f_17[2] = 17367040;
					uParam1->f_21[0] = 65538;
					uParam1->f_21[1] = 131334;
					uParam1->f_21[2] = 0;
					uParam1->f_28 = { 33.5988f, -20.7518f, 1.2993f };
					uParam1->f_31 = { 7f, 0f, 341.1f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 72:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 165;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 0;
					uParam1->f_17[1] = 16908545;
					uParam1->f_17[2] = 16842752;
					uParam1->f_21[0] = 131074;
					uParam1->f_21[1] = 328197;
					uParam1->f_21[2] = 16777216;
					uParam1->f_28 = { 17.5452f, 1.2258f, 0.994f };
					uParam1->f_31 = { 0f, 0f, 92.7f };
					__LIB_8__::func_413(&(uParam1->f_11));
					__LIB_9__::func_137(&(uParam1->f_11), 13);
					__LIB_9__::func_137(&(uParam1->f_11), 22);
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 73:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 33;
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_9__::func_237(PLAYER::PLAYER_ID()))
					{
						if (__LIB_9__::func_233(__LIB_8__::func_758(), 0))
						{
							uParam1->f_26 = 157;
							uParam1->f_28 = { 20.6096f, 11.509f, 0.994f };
							uParam1->f_31 = { 0f, 0f, 92.7f };
							__LIB_9__::func_137(&(uParam1->f_11), 12);
						}
						else
						{
							uParam1->f_26 = 156;
							uParam1->f_28 = { 20.6096f, 11.509f, 0.994f };
							uParam1->f_31 = { 0f, 0f, 92.7f };
						}
					}
					else
					{
						uParam1->f_26 = 157;
						uParam1->f_28 = { 20.6096f, 11.509f, 0.994f };
						uParam1->f_31 = { 0f, 0f, 92.7f };
						__LIB_9__::func_137(&(uParam1->f_11), 12);
					}
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 0;
					uParam1->f_17[1] = 0;
					uParam1->f_17[2] = 0;
					uParam1->f_21[0] = 0;
					uParam1->f_21[1] = 0;
					uParam1->f_21[2] = 0;
					if (__LIB_9__::func_237(PLAYER::PLAYER_ID()))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 7);
					}
					__LIB_9__::func_137(&(uParam1->f_11), 22);
					__LIB_9__::func_137(&(uParam1->f_11), 4);
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 74:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 8;
					uParam1->f_26 = 52;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 0;
					uParam1->f_17[1] = 66048;
					uParam1->f_17[2] = 33554432;
					uParam1->f_21[0] = 65537;
					uParam1->f_21[1] = 197129;
					uParam1->f_21[2] = 16777216;
					uParam1->f_28 = { 25.2425f, -21.076f, 1.4493f };
					uParam1->f_31 = { 0f, 0f, 17.82f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 75:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 61;
					uParam1->f_27 = 3;
					uParam1->f_17[0] = 131074;
					uParam1->f_17[1] = 197122;
					uParam1->f_17[2] = 34275328;
					uParam1->f_21[0] = 65538;
					uParam1->f_21[1] = 524288;
					uParam1->f_21[2] = 33554432;
					uParam1->f_28 = { 30.3331f, 14.9337f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 138.06f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 76:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 8;
					uParam1->f_26 = 4;
					uParam1->f_27 = 1;
					uParam1->f_17[0] = 131074;
					uParam1->f_17[1] = 65793;
					uParam1->f_17[2] = 16777216;
					uParam1->f_21[0] = 65538;
					uParam1->f_21[1] = 721418;
					uParam1->f_21[2] = 33554432;
					uParam1->f_28 = { 29.5626f, 14.2209f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 259.02f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 77:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 45;
					uParam1->f_27 = 1;
					uParam1->f_17[0] = 0;
					uParam1->f_17[1] = 33751040;
					uParam1->f_17[2] = 65536;
					uParam1->f_21[0] = 0;
					uParam1->f_21[1] = 0;
					uParam1->f_21[2] = 16777216;
					uParam1->f_28 = { 30.3712f, 13.494f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 19.26f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 78:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 63;
					uParam1->f_27 = 1;
					uParam1->f_17[0] = 65537;
					uParam1->f_17[1] = 66050;
					uParam1->f_17[2] = 33882112;
					uParam1->f_21[0] = 0;
					uParam1->f_21[1] = 514;
					uParam1->f_21[2] = 0;
					uParam1->f_28 = { 39.3015f, 8.5083f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 151.14f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 79:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 8;
					uParam1->f_26 = 0;
					uParam1->f_27 = 3;
					uParam1->f_17[0] = 0;
					uParam1->f_17[1] = 65537;
					uParam1->f_17[2] = 0;
					uParam1->f_21[0] = 0;
					uParam1->f_21[1] = 13;
					uParam1->f_21[2] = 33554432;
					uParam1->f_28 = { 34.4884f, 15.0417f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 279.9f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 80:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 50;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 0;
					uParam1->f_17[1] = 33619968;
					uParam1->f_17[2] = 196608;
					uParam1->f_21[0] = 65537;
					uParam1->f_21[1] = 196610;
					uParam1->f_21[2] = 33554432;
					uParam1->f_28 = { 33.8119f, 7.3802f, 1.4743f };
					uParam1->f_31 = { 0f, 0f, 237.42f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 81:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 9;
					uParam1->f_26 = 64;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 0;
					uParam1->f_17[1] = 33620482;
					uParam1->f_17[2] = 17170432;
					uParam1->f_21[0] = 131074;
					uParam1->f_21[1] = 590087;
					uParam1->f_21[2] = 0;
					uParam1->f_28 = { 36.627f, 5.785f, 1.4343f };
					uParam1->f_31 = { 0f, 0f, 73.98f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 82:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 65;
					uParam1->f_27 = 3;
					uParam1->f_17[0] = 131074;
					uParam1->f_17[1] = 65536;
					uParam1->f_17[2] = 655360;
					uParam1->f_21[0] = 131072;
					uParam1->f_21[1] = 393735;
					uParam1->f_21[2] = 16777216;
					uParam1->f_28 = { 33.881f, 6.0612f, 1.4143f };
					uParam1->f_31 = { 0f, 0f, 284.22f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 83:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 8;
					uParam1->f_26 = 49;
					uParam1->f_27 = 1;
					uParam1->f_17[0] = 65537;
					uParam1->f_17[1] = 256;
					uParam1->f_17[2] = 16777216;
					uParam1->f_21[0] = 1;
					uParam1->f_21[1] = 65539;
					uParam1->f_21[2] = 16777216;
					uParam1->f_28 = { 20.267f, 9.2594f, 1.4763f };
					uParam1->f_31 = { 0f, 0f, 73.98f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 84:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 58;
					uParam1->f_27 = 1;
					uParam1->f_17[0] = 65537;
					uParam1->f_17[1] = 16908545;
					uParam1->f_17[2] = 17563648;
					uParam1->f_21[0] = 65538;
					uParam1->f_21[1] = 524290;
					uParam1->f_21[2] = 33554432;
					uParam1->f_28 = { 19.1807f, 10.133f, 1.4013f };
					uParam1->f_31 = { 0f, 0f, 228.06f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 85:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 8;
					uParam1->f_26 = 52;
					uParam1->f_27 = Global_262145.f_24758 /* Tunable: 2089855578 */;
					uParam1->f_17[0] = 65537;
					uParam1->f_17[1] = 131073;
					uParam1->f_17[2] = 0;
					uParam1->f_21[0] = 2;
					uParam1->f_21[1] = 524550;
					uParam1->f_21[2] = 67108864;
					uParam1->f_28 = { 27.2242f, -3.2876f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 47.34f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					if (Global_262145.f_24766 /* Tunable: -993451048 */)
					{
						__LIB_9__::func_137(&(uParam1->f_11), 0);
					}
					break;
			}
			break;
		case 86:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 53;
					uParam1->f_27 = Global_262145.f_24756 /* Tunable: 1509025053 */;
					uParam1->f_17[0] = 65537;
					uParam1->f_17[1] = 16974081;
					uParam1->f_17[2] = 17563648;
					uParam1->f_21[0] = 65538;
					uParam1->f_21[1] = 262144;
					uParam1->f_21[2] = 16777216;
					uParam1->f_28 = { 26.1092f, -3.6628f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 350.46f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					if (Global_262145.f_24764 /* Tunable: 626451698 */)
					{
						__LIB_9__::func_137(&(uParam1->f_11), 0);
					}
					break;
			}
			break;
		case 87:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 96;
					uParam1->f_27 = Global_262145.f_24758 /* Tunable: 2089855578 */;
					uParam1->f_17[0] = 65537;
					uParam1->f_17[1] = 16908545;
					uParam1->f_17[2] = 17170432;
					uParam1->f_21[0] = 131073;
					uParam1->f_21[1] = 393217;
					uParam1->f_21[2] = 0;
					uParam1->f_28 = { 26.3888f, -2.4501f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 193.5f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					if (Global_262145.f_24766 /* Tunable: -993451048 */)
					{
						__LIB_9__::func_137(&(uParam1->f_11), 0);
					}
					break;
			}
			break;
		case 88:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 96;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 0;
					uParam1->f_17[1] = 33685504;
					uParam1->f_17[2] = 196608;
					uParam1->f_21[0] = 65537;
					uParam1->f_21[1] = 327680;
					uParam1->f_21[2] = 33554432;
					uParam1->f_28 = { 22.0111f, -7.357f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 317.6989f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 89:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 8;
					uParam1->f_26 = 127;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 131074;
					uParam1->f_17[1] = 131584;
					uParam1->f_17[2] = 33554432;
					uParam1->f_21[0] = 1;
					uParam1->f_21[1] = 655366;
					uParam1->f_21[2] = 0;
					uParam1->f_28 = { 23.2273f, -6.9512f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 95.697f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 90:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 9;
					uParam1->f_26 = 79;
					uParam1->f_27 = Global_262145.f_24756 /* Tunable: 1509025053 */;
					uParam1->f_17[0] = 0;
					uParam1->f_17[1] = 131842;
					uParam1->f_17[2] = 67305472;
					uParam1->f_21[0] = 65537;
					uParam1->f_21[1] = 65799;
					uParam1->f_21[2] = 33554432;
					uParam1->f_28 = { 18f, 3.7505f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 280.62f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					if (Global_262145.f_24764 /* Tunable: 626451698 */)
					{
						__LIB_9__::func_137(&(uParam1->f_11), 0);
					}
					break;
			}
			break;
		case 91:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 104;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 65537;
					uParam1->f_17[1] = 196608;
					uParam1->f_17[2] = 50462720;
					uParam1->f_21[0] = 131073;
					uParam1->f_21[1] = 327939;
					uParam1->f_21[2] = 0;
					uParam1->f_28 = { 15.1932f, 5.7196f, 0.8913f };
					uParam1->f_31 = { 0f, 0f, 92.7f };
					__LIB_8__::func_413(&(uParam1->f_11));
					__LIB_9__::func_137(&(uParam1->f_11), 12);
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 92:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 105;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 65537;
					uParam1->f_17[1] = 33619968;
					uParam1->f_17[2] = 50659328;
					uParam1->f_21[0] = 0;
					uParam1->f_21[1] = 65797;
					uParam1->f_21[2] = 16777216;
					uParam1->f_28 = { 15.1932f, 5.7196f, 0.8913f };
					uParam1->f_31 = { 0f, 0f, 92.7f };
					__LIB_8__::func_413(&(uParam1->f_11));
					__LIB_9__::func_137(&(uParam1->f_11), 13);
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 93:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 126;
					uParam1->f_27 = Global_262145.f_24756 /* Tunable: 1509025053 */;
					uParam1->f_17[0] = 131074;
					uParam1->f_17[1] = 16908545;
					uParam1->f_17[2] = 17301504;
					uParam1->f_21[0] = 65538;
					uParam1->f_21[1] = 65799;
					uParam1->f_21[2] = 33554432;
					uParam1->f_28 = { 18.0366f, -5.2548f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 179.1f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					if (Global_262145.f_24764 /* Tunable: 626451698 */)
					{
						__LIB_9__::func_137(&(uParam1->f_11), 0);
					}
					break;
			}
			break;
		case 94:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 87;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 131074;
					uParam1->f_17[1] = 196608;
					uParam1->f_17[2] = 589824;
					uParam1->f_21[0] = 131072;
					uParam1->f_21[1] = 459271/*__LIB_3__::func_554*/;
					uParam1->f_21[2] = 0;
					uParam1->f_28 = { 17.247f, -6.1939f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 261.9f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 95:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_9__::func_237(PLAYER::PLAYER_ID()))
					{
						if (__LIB_9__::func_233(__LIB_8__::func_758(), 0))
						{
							uParam1->f_26 = 158;
							uParam1->f_28 = { 20.6096f, 11.509f, 0.994f };
							uParam1->f_31 = { 0f, 0f, 92.7f };
							__LIB_9__::func_137(&(uParam1->f_11), 13);
						}
						else
						{
							uParam1->f_28 = { 20.6096f, 11.509f, 0.994f };
							uParam1->f_31 = { 0f, 0f, 92.7f };
							__LIB_9__::func_137(&(uParam1->f_11), 0);
						}
					}
					else
					{
						uParam1->f_26 = 158;
						uParam1->f_28 = { 20.6096f, 11.509f, 0.994f };
						uParam1->f_31 = { 0f, 0f, 92.7f };
						__LIB_9__::func_137(&(uParam1->f_11), 13);
					}
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 131074;
					uParam1->f_17[1] = 33554432;
					uParam1->f_17[2] = 50790400;
					uParam1->f_21[0] = 1;
					uParam1->f_21[1] = 131592;
					uParam1->f_21[2] = 33554432;
					if (__LIB_9__::func_237(PLAYER::PLAYER_ID()))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 7);
					}
					__LIB_9__::func_137(&(uParam1->f_11), 22);
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 96:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 125;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 131074;
					uParam1->f_17[1] = 33685504;
					uParam1->f_17[2] = 196608;
					uParam1->f_21[0] = 131072;
					uParam1->f_21[1] = 131592;
					uParam1->f_21[2] = 33554432;
					uParam1->f_28 = { 13.3563f, -4.0257f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 66.695f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 97:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 96;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 0;
					uParam1->f_17[1] = 16908545;
					uParam1->f_17[2] = 17039360;
					uParam1->f_21[0] = 65537;
					uParam1->f_21[1] = 262660;
					uParam1->f_21[2] = 0;
					uParam1->f_28 = { 12.9856f, -5.0585f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 61.74f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 98:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 8;
					uParam1->f_26 = 81;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 0;
					uParam1->f_17[1] = 131073;
					uParam1->f_17[2] = 0;
					uParam1->f_21[0] = 0;
					uParam1->f_21[1] = 4;
					uParam1->f_21[2] = 83886080;
					uParam1->f_28 = { 18.3397f, 4.7676f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 189.9f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 99:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 97;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 0;
					uParam1->f_17[1] = 16908545;
					uParam1->f_17[2] = 17563648;
					uParam1->f_21[0] = 131074;
					uParam1->f_21[1] = 197123;
					uParam1->f_21[2] = 0;
					uParam1->f_28 = { 19.7324f, 1.3456f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 211.5f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 100:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 8;
					uParam1->f_26 = 129;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 131074;
					uParam1->f_17[1] = 131073;
					uParam1->f_17[2] = 0;
					uParam1->f_21[0] = 131072;
					uParam1->f_21[1] = 918017;
					uParam1->f_21[2] = 16777216;
					uParam1->f_28 = { 20.326f, 0.285f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 47.34f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 101:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 130;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 131074;
					uParam1->f_17[1] = 16908545;
					uParam1->f_17[2] = 17301504;
					uParam1->f_21[0] = 1;
					uParam1->f_21[1] = 264;
					uParam1->f_21[2] = 0;
					uParam1->f_28 = { 15.4206f, 0.5556f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 229.5f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 102:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 81;
					uParam1->f_27 = Global_262145.f_24758 /* Tunable: 2089855578 */;
					uParam1->f_17[0] = 0;
					uParam1->f_17[1] = 33685504;
					uParam1->f_17[2] = 51052544;
					uParam1->f_21[0] = 0;
					uParam1->f_21[1] = 262145;
					uParam1->f_21[2] = 16777216;
					uParam1->f_28 = { 24.4953f, 3.8183f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 189.9f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					if (Global_262145.f_24766 /* Tunable: -993451048 */)
					{
						__LIB_9__::func_137(&(uParam1->f_11), 0);
					}
					break;
			}
			break;
		case 103:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 34;
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_9__::func_237(PLAYER::PLAYER_ID()))
					{
						if (__LIB_9__::func_233(__LIB_8__::func_758(), 0))
						{
							switch (uParam0->f_798)
							{
								case 0:
									uParam1->f_26 = 160;
									uParam1->f_28 = { 17.5452f, 1.2258f, 0.994f };
									uParam1->f_31 = { 0f, 0f, 92.7f };
									break;
								case 1:
									uParam1->f_26 = 161;
									uParam1->f_28 = { 6.7193f, -36.6094f, -0.8453f };
									uParam1->f_31 = { 0f, 0f, 92.7f };
									break;
							}
						}
						else
						{
							uParam1->f_26 = 159;
							uParam1->f_28 = { 17.5452f, 1.2258f, 0.994f };
							uParam1->f_31 = { 0f, 0f, 92.7f };
						}
					}
					else
					{
						switch (uParam0->f_798.f_1)
						{
							case 0:
								uParam1->f_26 = 159;
								uParam1->f_28 = { 17.5452f, 1.2258f, 0.994f };
								uParam1->f_31 = { 0f, 0f, 92.7f };
								break;
							case 1:
								uParam1->f_26 = 160;
								uParam1->f_28 = { 17.5452f, 1.2258f, 0.994f };
								uParam1->f_31 = { 0f, 0f, 92.7f };
								break;
							case 2:
								uParam1->f_26 = 161;
								uParam1->f_28 = { 6.7193f, -36.6094f, -0.8453f };
								uParam1->f_31 = { 0f, 0f, 92.7f };
								break;
							}
					}
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 0;
					uParam1->f_17[1] = 16842753;
					uParam1->f_17[2] = 65536;
					uParam1->f_21[0] = 0;
					uParam1->f_21[1] = 0;
					uParam1->f_21[2] = 0;
					if (__LIB_9__::func_237(PLAYER::PLAYER_ID()))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 7);
					}
					__LIB_9__::func_137(&(uParam1->f_11), 22);
					__LIB_9__::func_137(&(uParam1->f_11), 4);
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 104:
			if (bParam3)
			{
				uParam1->f_44 = 2;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 58;
					uParam1->f_27 = Global_262145.f_24755 /* Tunable: 1788315240 */;
					uParam1->f_17[0] = 0;
					uParam1->f_17[1] = 16843009;
					uParam1->f_17[2] = 16842752;
					uParam1->f_21[0] = 131074;
					uParam1->f_21[1] = 328195;
					uParam1->f_21[2] = 16777216;
					uParam1->f_28 = { 32.0365f, -4.1869f, 1.4303f };
					uParam1->f_31 = { 0f, 0f, 28.62f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					if (Global_262145.f_24763 /* Tunable: -600583507 */)
					{
						__LIB_9__::func_137(&(uParam1->f_11), 0);
					}
					break;
			}
			break;
		case 105:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 9;
					uParam1->f_26 = 57;
					uParam1->f_27 = Global_262145.f_24755 /* Tunable: 1788315240 */;
					uParam1->f_17[0] = 65537;
					uParam1->f_17[1] = 16908546;
					uParam1->f_17[2] = 262144;
					uParam1->f_21[0] = 0;
					uParam1->f_21[1] = 5;
					uParam1->f_21[2] = 16777216;
					uParam1->f_28 = { 31.8846f, -2.8518f, 1.4913f };
					uParam1->f_31 = { 0f, 0f, 148.86f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					if (Global_262145.f_24763 /* Tunable: -600583507 */)
					{
						__LIB_9__::func_137(&(uParam1->f_11), 0);
					}
					break;
			}
			break;
		case 106:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 96;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 0;
					uParam1->f_17[1] = 16974081;
					uParam1->f_17[2] = 16777216;
					uParam1->f_21[0] = 0;
					uParam1->f_21[1] = 66053;
					uParam1->f_21[2] = 16777216;
					uParam1->f_28 = { 18.9538f, -6.0675f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 92.7f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 107:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 61;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 65537;
					uParam1->f_17[1] = 33685504;
					uParam1->f_17[2] = 458752;
					uParam1->f_21[0] = 0;
					uParam1->f_21[1] = 524548;
					uParam1->f_21[2] = 0;
					uParam1->f_28 = { 17.9235f, -6.9099f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 352.62f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 108:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 88;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 131074;
					uParam1->f_17[1] = 16974081;
					uParam1->f_17[2] = 17367040;
					uParam1->f_21[0] = 65538;
					uParam1->f_21[1] = 393478;
					uParam1->f_21[2] = 33554432;
					uParam1->f_28 = { 19.1885f, 3.8818f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 79.74f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 109:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 119;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 65537;
					uParam1->f_17[1] = 16843009;
					uParam1->f_17[2] = 17104896;
					uParam1->f_21[0] = 65538;
					uParam1->f_21[1] = 131074;
					uParam1->f_21[2] = 16777216;
					uParam1->f_28 = { 16.1938f, -0.4261f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 41.58f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 110:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 32;
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_9__::func_237(PLAYER::PLAYER_ID()))
					{
						if (__LIB_9__::func_233(__LIB_8__::func_758(), 0))
						{
							uParam1->f_26 = 155;
							uParam1->f_28 = { 30.0454f, -6.3603f, 1.5133f };
							uParam1->f_31 = { 0f, 0f, 182.7f };
							__LIB_9__::func_137(&(uParam1->f_11), 22);
						}
						else
						{
							uParam1->f_26 = 154;
							uParam1->f_28 = { 17.5452f, 1.2258f, 0.994f };
							uParam1->f_31 = { 0f, 0f, 92.7f };
							__LIB_9__::func_137(&(uParam1->f_11), 22);
						}
					}
					else
					{
						uParam1->f_28 = { -1.7641f, 1.0255f, 2.0213f };
						uParam1->f_31 = { 0f, 0f, 243.199f };
						__LIB_9__::func_137(&(uParam1->f_11), 0);
					}
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 65536;
					uParam1->f_17[1] = 0;
					uParam1->f_17[2] = 65536;
					uParam1->f_21[0] = 0;
					uParam1->f_21[1] = 0;
					uParam1->f_21[2] = 0;
					__LIB_9__::func_137(&(uParam1->f_11), 4);
					if (__LIB_9__::func_237(PLAYER::PLAYER_ID()))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 7);
					}
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 111:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 61;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = -1;
					uParam1->f_17[1] = -1;
					uParam1->f_17[2] = -1;
					uParam1->f_21[0] = -1;
					uParam1->f_21[1] = -1;
					uParam1->f_21[2] = -1;
					uParam1->f_28 = { 35.7145f, -2.7381f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 122.94f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					__LIB_9__::func_137(&(uParam1->f_11), 0);
					break;
			}
			break;
		case 112:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 8;
					uParam1->f_26 = 41;
					uParam1->f_27 = 3;
					uParam1->f_17[0] = -1;
					uParam1->f_17[1] = -1;
					uParam1->f_17[2] = -1;
					uParam1->f_21[0] = -1;
					uParam1->f_21[1] = -1;
					uParam1->f_21[2] = -1;
					uParam1->f_28 = { 29.7028f, -8.1763f, 1.4033f };
					uParam1->f_31 = { 0f, 0f, 102.06f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					__LIB_9__::func_137(&(uParam1->f_11), 0);
					break;
			}
			break;
		case 113:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 126;
					uParam1->f_27 = 3;
					uParam1->f_17[0] = 0;
					uParam1->f_17[1] = 16777473;
					uParam1->f_17[2] = 16777216;
					uParam1->f_21[0] = 131074;
					uParam1->f_21[1] = 516;
					uParam1->f_21[2] = 0;
					uParam1->f_28 = { 23.1285f, 12.7848f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 89.1f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 114:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 40;
					uParam1->f_27 = 3;
					uParam1->f_17[0] = 0;
					uParam1->f_17[1] = 16974081;
					uParam1->f_17[2] = 17039360;
					uParam1->f_21[0] = 65537;
					uParam1->f_21[1] = 131587;
					uParam1->f_21[2] = 16777216;
					uParam1->f_28 = { 21.6278f, 13.375f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 208.62f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 115:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 120;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 131074;
					uParam1->f_17[1] = 16843009;
					uParam1->f_17[2] = 17563648;
					uParam1->f_21[0] = 1;
					uParam1->f_21[1] = 393480;
					uParam1->f_21[2] = 0;
					uParam1->f_28 = { 5.2482f, -4.1089f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 27.18f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 116:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 9;
					uParam1->f_26 = 103;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 0;
					uParam1->f_17[1] = 66304;
					uParam1->f_17[2] = 67502080;
					uParam1->f_21[0] = 131074;
					uParam1->f_21[1] = 459010;
					uParam1->f_21[2] = 0;
					uParam1->f_28 = { -1.6892f, -3.6945f, 0.8913f };
					uParam1->f_31 = { 0f, 0f, 336.78f };
					__LIB_8__::func_413(&(uParam1->f_11));
					__LIB_9__::func_137(&(uParam1->f_11), 13);
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 117:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 8;
					uParam1->f_26 = 51;
					uParam1->f_27 = 3;
					uParam1->f_17[0] = 65537;
					uParam1->f_17[1] = 66048;
					uParam1->f_17[2] = 33554432;
					uParam1->f_21[0] = 0;
					uParam1->f_21[1] = 327948;
					uParam1->f_21[2] = 0;
					uParam1->f_28 = { 36.4559f, 6.8235f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 96.3f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 118:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 96;
					uParam1->f_27 = Global_262145.f_24757 /* Tunable: -1891938385 */;
					uParam1->f_17[0] = 0;
					uParam1->f_17[1] = 66050;
					uParam1->f_17[2] = 33816576;
					uParam1->f_21[0] = 65537;
					uParam1->f_21[1] = 262401;
					uParam1->f_21[2] = 16777216;
					uParam1->f_28 = { 25.0473f, 2.4678f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 39.42f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					if (Global_262145.f_24765 /* Tunable: 262060418 */)
					{
						__LIB_9__::func_137(&(uParam1->f_11), 0);
					}
					break;
			}
			break;
		case 119:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 31;
					uParam1->f_26 = 166;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 65536;
					uParam1->f_17[1] = 33554432;
					uParam1->f_17[2] = 50462720;
					uParam1->f_21[0] = 131073;
					uParam1->f_21[1] = 131073;
					uParam1->f_21[2] = 16777216;
					uParam1->f_28 = { 2.5565f, 23.7581f, 1.9113f };
					uParam1->f_31 = { 0f, 0f, 39.64f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_9__::func_237(PLAYER::PLAYER_ID()))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 0);
					}
					__LIB_9__::func_137(&(uParam1->f_11), 4);
					__LIB_9__::func_137(&(uParam1->f_11), 1);
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 120:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 31;
					uParam1->f_26 = 0;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 0;
					uParam1->f_17[1] = 16842753;
					uParam1->f_17[2] = 33685504;
					uParam1->f_21[0] = 131073;
					uParam1->f_21[1] = 2;
					uParam1->f_21[2] = 33554432;
					uParam1->f_28 = { -32.1073f, 52.717f, 2.4098f };
					uParam1->f_31 = { 0f, 0f, 263.65f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_9__::func_237(PLAYER::PLAYER_ID()))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 0);
					}
					__LIB_9__::func_137(&(uParam1->f_11), 1);
					__LIB_9__::func_137(&(uParam1->f_11), 4);
					__LIB_9__::func_137(&(uParam1->f_11), 15);
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 121:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 31;
					uParam1->f_26 = 0;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 65537;
					uParam1->f_17[1] = 0;
					uParam1->f_17[2] = 0;
					uParam1->f_21[0] = 131074;
					uParam1->f_21[1] = 131073;
					uParam1->f_21[2] = 33554432;
					uParam1->f_28 = { 10.4971f, 63.9014f, 3.4438f };
					uParam1->f_31 = { 0f, 0f, 150.735f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_9__::func_237(PLAYER::PLAYER_ID()))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 0);
					}
					__LIB_9__::func_137(&(uParam1->f_11), 1);
					__LIB_9__::func_137(&(uParam1->f_11), 4);
					__LIB_9__::func_137(&(uParam1->f_11), 15);
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 122:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 31;
					uParam1->f_26 = 0;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 65539;
					uParam1->f_17[1] = 33619968;
					uParam1->f_17[2] = 67239936;
					uParam1->f_21[0] = 65537;
					uParam1->f_21[1] = 65794;
					uParam1->f_21[2] = 16777216;
					uParam1->f_28 = { 51.7089f, -18.2157f, 1.9913f };
					uParam1->f_31 = { 0f, 0f, 119.335f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_9__::func_237(PLAYER::PLAYER_ID()))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 0);
					}
					__LIB_9__::func_137(&(uParam1->f_11), 1);
					__LIB_9__::func_137(&(uParam1->f_11), 4);
					__LIB_9__::func_137(&(uParam1->f_11), 15);
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
	}
	if (!__LIB_0__::func_86(uParam1->f_28))
	{
		uParam1->f_28 = { __LIB_8__::func_457(__LIB_8__::func_838(-1), __LIB_8__::func_837(-1), uParam1->f_28) };
	}
	if (uParam1->f_31.f_2 != -1f)
	{
		uParam1->f_31.f_2 = __LIB_8__::func_456(__LIB_8__::func_837(-1), uParam1->f_31.f_2);
	}
}

int func_6042(var uParam0, int iParam1)//Position - 0x1FC39D
{
	int iVar0;
	int iVar1;
	struct<47> Var2;
	iVar1 = 0;
	Var2.f_1 = 8;
	Var2.f_11 = 2;
	Var2.f_14 = 2;
	Var2.f_17 = 3;
	Var2.f_21 = 3;
	Var2.f_35 = -1;
	Var2.f_35.f_4 = -1;
	Var2.f_35.f_5 = -1;
	Var2.f_46 = -1;
	Var2.f_46.f_2 = -1;
	Var2.f_46.f_3 = -1;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Var2.f_28 = { __LIB_0__::func_613() };
		func_6035(iParam1, uParam0, &Var2, iVar0 + 125, uParam0->f_1, 1);
		if (!__LIB_0__::func_86(Var2.f_28))
		{
			iVar1++;
		}
	else
	{
		}
		else
		{
			iVar0++;
		}
	}
	return iVar1;
}

int func_6043(var uParam0, int iParam1)//Position - 0x1FC43E
{
	int iVar0;
	int iVar1;
	struct<47> Var2;
	iVar1 = 0;
	Var2.f_1 = 8;
	Var2.f_11 = 2;
	Var2.f_14 = 2;
	Var2.f_17 = 3;
	Var2.f_21 = 3;
	Var2.f_35 = -1;
	Var2.f_35.f_4 = -1;
	Var2.f_35.f_5 = -1;
	Var2.f_46 = -1;
	Var2.f_46.f_2 = -1;
	Var2.f_46.f_3 = -1;
	iVar0 = 0;
	while (iVar0 < 125)
	{
		Var2.f_28 = { __LIB_0__::func_613() };
		func_6035(iParam1, uParam0, &Var2, iVar0, uParam0->f_1, 1);
		if (!__LIB_0__::func_86(Var2.f_28))
		{
			iVar1++;
		}
	else
	{
		}
		else
		{
			iVar0++;
		}
	}
	return iVar1;
}

void func_6047(var uParam0, var uParam1, var uParam2)//Position - 0x1FC502
{
	switch (*uParam0)
	{
		case 0:
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				*uParam0 = 1;
				func_6064(uParam0, uParam1);
			}
			break;
		case 1:
			return;
			break;
		case 2:
			if (!bLocal_130)
			{
				bLocal_130 = (func_6053(uParam1, uParam2) && func_6048(uParam2));
			}
			break;
	}
}

int func_6048(var uParam0)//Position - 0x1FC55E
{
	int iVar0;
	struct<101> Var1;
	int iVar2;
	iVar0 = 0;
	Var1.f_9 = 49;
	Var1.f_59 = 2;
	Var1.f_78 = -1;
	Var1.f_79 = -1;
	Var1.f_96 = -1;
	Var1.f_97 = 1;
	Var1.f_99 = 132;
	Var1.f_100 = -1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_29[iVar0]))
		{
			iVar2 = func_6052(iVar0);
			if (__LIB_0__::func_799(iVar2))
			{
				uParam0->f_29[iVar0] = VEHICLE::CREATE_VEHICLE(iVar2, func_6051(iVar0), func_6050(iVar0), false, false, false);
				if (iVar0 < 3)
				{
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_29[iVar0], 5f);
					ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_29[iVar0], true);
				}
				func_6049(&Var1, iVar0);
				__LIB_9__::func_326(uParam0->f_29[iVar0], &Var1, 0, 1, 1);
				return 0;
			}
			else
			{
				return 0;
			}
		}
		iVar0++;
	}
	if (__LIB_0__::func_121(uParam0->f_29[3]))
	{
		VEHICLE::SET_VEHICLE_DOOR_OPEN(uParam0->f_29[3], 5, false, true);
		VEHICLE::SET_VEHICLE_LIGHTS(uParam0->f_29[3], 2);
	}
	return 1;
}

void func_6049(var uParam0, int iParam1)//Position - 0x1FC662
{
	switch (iParam1)
	{
		case 0:
			uParam0->f_5 = Global_262145.f_30941 /* Tunable: PROMO_TEST_DRIVE_VEHICLE_1_COLOUR_1 */;
			uParam0->f_6 = Global_262145.f_30942 /* Tunable: PROMO_TEST_DRIVE_VEHICLE_1_COLOUR_2 */;
			uParam0->f_7 = Global_262145.f_30943 /* Tunable: PROMO_TEST_DRIVE_VEHICLE_1_EXTRA_COLOUR_1 */;
			uParam0->f_8 = Global_262145.f_30944 /* Tunable: PROMO_TEST_DRIVE_VEHICLE_1_EXTRA_COLOUR_2 */;
			uParam0->f_97 = Global_262145.f_30945 /* Tunable: PROMO_TEST_DRIVE_VEHICLE_1_COLOUR_5 */;
			uParam0->f_99 = Global_262145.f_30946 /* Tunable: PROMO_TEST_DRIVE_VEHICLE_1_COLOUR_6 */;
			uParam0->f_9[48] = Global_262145.f_30947 /* Tunable: PROMO_TEST_DRIVE_VEHICLE_1_LIVERY */;
			uParam0->f_69 = Global_262145.f_30948 /* Tunable: PROMO_TEST_DRIVE_VEHICLE_1_WHEEL_TYPE */;
			uParam0->f_9[23] = Global_262145.f_30949 /* Tunable: PROMO_TEST_DRIVE_VEHICLE_1_WHEEL_ID */;
			uParam0->f_65 = Global_262145.f_30950 /* Tunable: PROMO_TEST_DRIVE_VEHICLE_1_WINDOW_TINT_COLOUR */;
			uParam0->f_9[22] = Global_262145.f_30951 /* Tunable: PROMO_TEST_DRIVE_VEHICLE_1_LIGHTS_COLOUR */;
			break;
		case 1:
			uParam0->f_5 = Global_262145.f_30953 /* Tunable: PROMO_TEST_DRIVE_VEHICLE_2_COLOUR_1 */;
			uParam0->f_6 = Global_262145.f_30954 /* Tunable: PROMO_TEST_DRIVE_VEHICLE_2_COLOUR_2 */;
			uParam0->f_7 = Global_262145.f_30955 /* Tunable: PROMO_TEST_DRIVE_VEHICLE_2_EXTRA_COLOUR_1 */;
			uParam0->f_8 = Global_262145.f_30956 /* Tunable: PROMO_TEST_DRIVE_VEHICLE_2_EXTRA_COLOUR_2 */;
			uParam0->f_97 = Global_262145.f_30957 /* Tunable: PROMO_TEST_DRIVE_VEHICLE_2_COLOUR_5 */;
			uParam0->f_99 = Global_262145.f_30958 /* Tunable: PROMO_TEST_DRIVE_VEHICLE_2_COLOUR_6 */;
			uParam0->f_9[48] = Global_262145.f_30959 /* Tunable: PROMO_TEST_DRIVE_VEHICLE_2_LIVERY */;
			uParam0->f_69 = Global_262145.f_30960 /* Tunable: PROMO_TEST_DRIVE_VEHICLE_2_WHEEL_TYPE */;
			uParam0->f_9[23] = Global_262145.f_30961 /* Tunable: PROMO_TEST_DRIVE_VEHICLE_2_WHEEL_ID */;
			uParam0->f_65 = Global_262145.f_30962 /* Tunable: PROMO_TEST_DRIVE_VEHICLE_2_WINDOW_TINT_COLOUR */;
			uParam0->f_9[22] = Global_262145.f_30963 /* Tunable: PROMO_TEST_DRIVE_VEHICLE_2_LIGHTS_COLOUR */;
			break;
		case 2:
			uParam0->f_5 = Global_262145.f_30965 /* Tunable: PROMO_TEST_DRIVE_VEHICLE_3_COLOUR_1 */;
			uParam0->f_6 = Global_262145.f_30966 /* Tunable: PROMO_TEST_DRIVE_VEHICLE_3_COLOUR_2 */;
			uParam0->f_7 = Global_262145.f_30967 /* Tunable: PROMO_TEST_DRIVE_VEHICLE_3_EXTRA_COLOUR_1 */;
			uParam0->f_8 = Global_262145.f_30968 /* Tunable: PROMO_TEST_DRIVE_VEHICLE_3_EXTRA_COLOUR_2 */;
			uParam0->f_97 = Global_262145.f_30969 /* Tunable: PROMO_TEST_DRIVE_VEHICLE_3_COLOUR_5 */;
			uParam0->f_99 = Global_262145.f_30970 /* Tunable: PROMO_TEST_DRIVE_VEHICLE_3_COLOUR_6 */;
			uParam0->f_9[48] = Global_262145.f_30971 /* Tunable: PROMO_TEST_DRIVE_VEHICLE_3_LIVERY */;
			uParam0->f_69 = Global_262145.f_30972 /* Tunable: PROMO_TEST_DRIVE_VEHICLE_3_WHEEL_TYPE */;
			uParam0->f_9[23] = Global_262145.f_30973 /* Tunable: PROMO_TEST_DRIVE_VEHICLE_3_WHEEL_ID */;
			uParam0->f_65 = Global_262145.f_30974 /* Tunable: PROMO_TEST_DRIVE_VEHICLE_3_WINDOW_TINT_COLOUR */;
			uParam0->f_9[22] = Global_262145.f_30975 /* Tunable: PROMO_TEST_DRIVE_VEHICLE_3_LIGHTS_COLOUR */;
			break;
		case 3:
			uParam0->f_66 = joaat("minivan2");
			StringCopy(&(uParam0->f_1), "68HYO893", 16);
			uParam0->f_5 = 145;
			uParam0->f_6 = 112;
			uParam0->f_7 = 70;
			uParam0->f_8 = 145;
			uParam0->f_97 = 1;
			uParam0->f_99 = 132;
			uParam0->f_98 = 0;
			uParam0->f_65 = 3;
			uParam0->f_69 = 8;
			uParam0->f_62 = 255;
			uParam0->f_63 = 255;
			uParam0->f_64 = 255;
			uParam0->f_74 = 255;
			uParam0->f_76 = 255;
			uParam0->f_9[4] = 1;
			uParam0->f_9[6] = 1;
			uParam0->f_9[10] = 2;
			uParam0->f_9[22] = 1;
			uParam0->f_9[23] = 67;
			uParam0->f_9[24] = 4;
			uParam0->f_9[27] = 4;
			uParam0->f_9[30] = 1;
			uParam0->f_9[31] = 3;
			uParam0->f_9[32] = 1;
			uParam0->f_9[33] = 2;
			uParam0->f_9[34] = 12;
			uParam0->f_9[35] = 22;
			uParam0->f_9[37] = 3;
			uParam0->f_9[38] = 3;
			uParam0->f_9[39] = 4;
			uParam0->f_9[40] = 1;
			uParam0->f_9[48] = 3;
			break;
		default:
			break;
	}
}

float func_6050(int iParam0)//Position - 0x1FC92C
{
	switch (iParam0)
	{
		case 0:
			return 116.6498f;
		case 1:
			return 89.9025f;
		case 2:
			return 61.1236f;
		case 3:
			return 116.679f;
		default:
	}
	return 0f;
}

Vector3 func_6051(int iParam0)//Position - 0x1FC974
{
	switch (iParam0)
	{
		case 0:
			return -2143.9045f, 1114.7545f, 30.7814f;
		case 1:
			return -2144.2776f, 1119.2275f, 30.7f;
		case 2:
			return -2144.2976f, 1123.8685f, 30.562f;
		case 3:
			return -2178.1646f, 1107.623f, 24.6364f;
		default:
	}
	return 0f, 0f, 0f;
}

int func_6052(int iParam0)//Position - 0x1FC9E6
{
	int iVar0;
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_262145.f_30940 /* Tunable: PROMO_TEST_DRIVE_VEHICLE_1_MODEL_HASH */;
			break;
		case 1:
			iVar0 = Global_262145.f_30952 /* Tunable: PROMO_TEST_DRIVE_VEHICLE_2_MODEL_HASH */;
			break;
		case 2:
			iVar0 = Global_262145.f_30964 /* Tunable: PROMO_TEST_DRIVE_VEHICLE_3_MODEL_HASH */;
			break;
		case 3:
			iVar0 = joaat("minivan2");
			break;
	}
	if (iVar0 != 0)
	{
		if (STREAMING::IS_MODEL_VALID(iVar0))
		{
			return iVar0;
		}
	}
	return 0;
}

int func_6053(var uParam0, var uParam1)//Position - 0x1FCA59
{
	int iVar0;
	struct<101> Var1;
	struct<3> Var2;
	float fVar3;
	iVar0 = 0;
	Var1.f_9 = 49;
	Var1.f_59 = 2;
	Var1.f_78 = -1;
	Var1.f_79 = -1;
	Var1.f_96 = -1;
	Var1.f_97 = 1;
	Var1.f_99 = 132;
	Var1.f_100 = -1;
	iVar0 = 0;
	while (iVar0 < 28)
	{
		if (!ENTITY::DOES_ENTITY_EXIST((*uParam1)[iVar0]))
		{
			__LIB_31__::func_73((*uParam0)[iVar0 /*3*/], (uParam0[iVar0 /*3*/])->f_1, &Var1);
			if (__LIB_0__::func_799(Var1.f_66))
			{
				Var2 = { __LIB_9__::func_85(func_6057(iVar0)) };
				Var2.f_2 = (Var2.f_2 + 50f);
				fVar3 = __LIB_9__::func_84(func_6057(iVar0));
				(*uParam1)[iVar0] = VEHICLE::CREATE_VEHICLE(Var1.f_66, Var2, fVar3, false, true, false);
				__LIB_9__::func_326((*uParam1)[iVar0], &Var1, 1, 1, 0);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY((*uParam1)[iVar0], 5f);
				ENTITY::FREEZE_ENTITY_POSITION((*uParam1)[iVar0], true);
				ENTITY::SET_ENTITY_COLLISION((*uParam1)[iVar0], false, false);
				ENTITY::SET_ENTITY_CAN_BE_DAMAGED((*uParam1)[iVar0], false);
				ENTITY::SET_ENTITY_DYNAMIC((*uParam1)[iVar0], false);
				ENTITY::SET_ENTITY_HAS_GRAVITY((*uParam1)[iVar0], false);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Var1.f_66);
				if (__LIB_9__::func_83(func_6057(iVar0)))
				{
					VEHICLE::SET_VEHICLE_LIGHTS((*uParam1)[iVar0], 2);
				}
				return 0;
			}
			else
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_6057(int iParam0)//Position - 0x1FD372
{
	switch (iParam0)
	{
		case 0:
			return 4;
		case 1:
			return 7;
		case 2:
			return 8;
		case 3:
			return 9;
		case 4:
			return 12;
		case 5:
			return 14;
		case 6:
			return 20;
		case 7:
			return 22;
		case 8:
			return 23;
		case 9:
			return 26;
		case 10:
			return 28;
		case 11:
			return 30;
		case 12:
			return 31;
		case 13:
			return 32;
		case 14:
			return 33;
		case 15:
			return 34;
		case 16:
			return 35;
		case 17:
			return 36;
		case 18:
			return 37;
		case 19:
			return 38;
		case 20:
			return 39;
		case 21:
			return 40;
		case 22:
			return 41;
		case 23:
			return 42;
		case 24:
			return 43;
		case 25:
			return 45;
		case 26:
			return 46;
		case 27:
			return 47;
		default:
	}
	return -1;
}

void func_6064(var uParam0, var uParam1)//Position - 0x20A3B8
{
	int iVar0;
	int iVar1;
	int iVar2[10];
	bool bVar3;
	int iVar4;
	bVar3 = false;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(0, 50);
		bVar3 = false;
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < iVar0)
		{
			if (iVar4 == iVar2[iVar1])
			{
				bVar3 = true;
			}
			iVar1++;
		}
		if (bVar3)
		{
			iVar0 = (iVar0 - 1);
			Jump @97; //curOff = 83
		}
		else
		{
			iVar2[iVar0] = iVar4;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if ((iVar0 * 3 + iVar1) < 28)
			{
				(*uParam1)[(iVar0 * 3 + iVar1) /*3*/] = iVar2[iVar0];
				(uParam1[(iVar0 * 3 + iVar1) /*3*/])->f_1 = iVar1;
			}
		else
		{
			}
			else
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	__LIB_9__::func_91(uParam1, 28);
	*uParam0 = 2;
}

void func_6066(int* iParam0, bool bParam1)//Position - 0x20A4DB
{
	if (!BitTest(*iParam0, 0))
	{
		if (__LIB_44__::func_117(&(iParam0->f_2), __LIB_9__::func_106(), __LIB_9__::func_105(bParam1), __LIB_9__::func_104(), bParam1))
		{
			MISC::SET_BIT(iParam0, 0);
		}
	}
	if (!BitTest(*iParam0, 1))
	{
		if (__LIB_44__::func_116(&(iParam0->f_3), __LIB_9__::func_103(), __LIB_31__::func_75(bParam1), __LIB_9__::func_102(), bParam1))
		{
			MISC::SET_BIT(iParam0, 1);
		}
	}
	if (!BitTest(*iParam0, 2))
	{
		if (__LIB_40__::func_754(iParam0, bParam1))
		{
			MISC::SET_BIT(iParam0, 2);
		}
	}
	if (__LIB_9__::func_96())
	{
		func_6067(iParam0);
	}
}

void func_6067(int* iParam0)//Position - 0x20A561
{
	if (func_6072(iParam0->f_3, &(iParam0->f_5), &(iParam0->f_5.f_379), &(iParam0->f_5.f_376), &(iParam0->f_5.f_377), &(iParam0->f_5.f_378), 1, 0, 1, 1, 1))
	{
		if (__LIB_9__::func_95(&(iParam0->f_5)))
		{
			__LIB_1__::func_348(301, 1, -1, 1);
			__LIB_9__::func_94(Global_262145.f_31110 /* Tunable: CAR_MEET_PRIZE_VEHICLE_CHALLENGE_ID */, Global_262145.f_31064 /* Tunable: CAR_MEET_PRIZE_VEHICLE_MODEL_HASH */);
		}
		__LIB_9__::func_93(&(iParam0->f_5));
		__LIB_9__::func_92(0);
	}
}

int func_6072(int iParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10)//Position - 0x20A63A
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	iVar0 = -1;
	bVar2 = false;
	iVar4 = ENTITY::GET_ENTITY_MODEL(iParam0);
	switch (*uParam5)
	{
		case 0:
			if (__LIB_9__::func_322(ENTITY::GET_ENTITY_MODEL(iParam0), -1))
			{
				__LIB_9__::func_321(iVar4, &iVar0);
				if (iVar0 != -1)
				{
					*iParam3 = __LIB_12__::func_56(1, 0, iVar4, iVar0, -1, 0);
					*uParam4 = __LIB_13__::func_406(1, 0, iVar4, iVar0, -1, 0);
					if (*iParam3 > -1 && *uParam4 > -1)
					{
						*uParam5 = 1;
					}
				}
				else
				{
					iVar1 = -1;
				}
				if (iVar1 == -1 || *uParam4 == -1)
				{
					if (!BitTest(uParam1->f_370, 7))
					{
						if (__LIB_40__::func_753(uParam1, iParam3, uParam4, iVar4, 0, -1, 1))
						{
							if (*iParam3 > -1 && *uParam4 > -1)
							{
								*uParam5 = 1;
							}
						}
					}
					else if (bParam8)
					{
						iVar3 = 36;
						HUD::SET_WARNING_MESSAGE_WITH_HEADER("BRSCRWTEX" /* GXT: Alert */, "LW_LOSE_VEH" /* GXT: Are you sure you want to lose the vehicle prize? */, iVar3, 0, false, -1, 0, 0, true, 0);
						if (HUD::IS_WARNING_MESSAGE_ACTIVE() && !__LIB_0__::func_193())
						{
							if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
							{
								MISC::CLEAR_BIT(&(uParam1->f_370), 7);
								*uParam5 = 3;
								return 1;
							}
							else if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/) || __LIB_3__::func_528())
							{
								MISC::CLEAR_BIT(&(uParam1->f_370), 7);
							}
						}
					}
					else
					{
						MISC::CLEAR_BIT(&(uParam1->f_370), 7);
						*uParam5 = 3;
						return 1;
					}
				}
			}
			else if (!__LIB_1__::func_840(ENTITY::GET_ENTITY_MODEL(iParam0)) && !VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iParam0)))
			{
				if (__LIB_4__::func_867())
				{
					iVar5 = 0;
					while (iVar5 < 363)
					{
						if (__LIB_8__::func_889(iVar5))
						{
							bVar2 = true;
							iVar5 = 364;
						}
						iVar5++;
					}
					iVar3 = 18;
					if (bVar2)
					{
						HUD::SET_WARNING_MESSAGE_WITH_HEADER("BRSCRWTEX" /* GXT: Alert */, "CASINO_PRIZE_V1" /* GXT: This vehicle prize will replace your current impounded Personal Vehicle. */, iVar3, 0, false, -1, 0, 0, true, 0);
					}
					else
					{
						HUD::SET_WARNING_MESSAGE_WITH_HEADER("BRSCRWTEX" /* GXT: Alert */, "CASINO_PRIZE_V2" /* GXT: This vehicle prize will replace your current Personal Vehicle. */, iVar3, 0, false, -1, 0, 0, true, 0);
					}
					if (HUD::IS_WARNING_MESSAGE_ACTIVE())
					{
						if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/) || __LIB_3__::func_528())
						{
							*uParam5 = 3;
							return 1;
						}
						else if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
						{
							*iParam3 = 0;
							*uParam4 = 0;
							*uParam5 = 1;
						}
					}
				}
				else if (BitTest(Global_1585857[0 /*142*/].f_103, 2))
				{
					iVar3 = 18;
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("BRSCRWTEX" /* GXT: Alert */, "CASINO_PRIZE_V2" /* GXT: This vehicle prize will replace your current Personal Vehicle. */, iVar3, 0, false, -1, 0, 0, true, 0);
					if (HUD::IS_WARNING_MESSAGE_ACTIVE())
					{
						if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/) || __LIB_3__::func_528())
						{
							*uParam5 = 3;
							return 1;
						}
						else if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
						{
							*iParam3 = 0;
							*uParam4 = 0;
							*uParam5 = 1;
						}
					}
				}
				else
				{
					*iParam3 = 0;
					*uParam4 = 0;
					*uParam5 = 1;
				}
			}
			break;
		case 1:
			if (__LIB_0__::func_121(iParam0))
			{
				if (__LIB_0__::func_112())
				{
					if (__LIB_30__::func_283(iParam0, *iParam3, uParam2, 1, 1))
					{
						if (*uParam2 == 2)
						{
							if (*iParam3 >= 0)
							{
								__LIB_2__::func_968(*uParam4, *iParam3, -1);
							}
							if (!__LIB_9__::func_322(ENTITY::GET_ENTITY_MODEL(iParam0), -1))
							{
								__LIB_1__::func_891(1, 0, 0, 0, 0, 0, 0);
								bParam6 = false;
								bParam7 = true;
							}
							if (bParam9)
							{
								if (iParam10 == 0)
								{
								}
								else if (iParam10 == 1)
								{
								}
							}
							func_6103(iParam0, *iParam3, 1, bParam6, bParam7, 1, 1, bParam9, 1, -1, iParam10);
							__LIB_9__::func_4(iParam0, *iParam3);
							__LIB_1__::func_333(1849420593, 3, 0);
							return 1;
						}
						else if (*uParam2 == 3)
						{
						}
					}
					else
					{
						return 0;
					}
				}
				else
				{
					if (*iParam3 >= 0)
					{
						__LIB_2__::func_968(*uParam4, *iParam3, -1);
					}
					if (!__LIB_9__::func_322(ENTITY::GET_ENTITY_MODEL(iParam0), -1))
					{
						__LIB_1__::func_891(1, 0, 0, 0, 0, 0, 0);
						bParam6 = false;
						bParam7 = true;
					}
					if (bParam9)
					{
						if (iParam10 == 0)
						{
						}
						else if (iParam10 == 1)
						{
						}
					}
					func_6103(iParam0, *iParam3, 1, bParam6, bParam7, 1, 1, bParam9, 1, -1, iParam10);
					__LIB_9__::func_4(iParam0, *iParam3);
					__LIB_1__::func_333(1849420593, 3, 0);
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_6103(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10)//Position - 0x21508B
{
	int iVar0;
	var uVar1;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		__LIB_2__::func_635();
		if (VEHICLE::GET_NUM_MOD_KITS(iParam0) != 0)
		{
			VEHICLE::SET_VEHICLE_MOD_KIT(iParam0, 0);
		}
		if (bParam5)
		{
			MISC::SET_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 12);
			MISC::CLEAR_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 15);
			MISC::CLEAR_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 2);
			MISC::CLEAR_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 8);
			MISC::CLEAR_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 9);
			__LIB_2__::func_725();
			func_6105(iParam1, 1);
			Global_1952156 = 1;
		}
		__LIB_10__::func_542(iParam0, &(Global_1585857[iParam1 /*142*/]), bParam5);
		Global_1585857[iParam1 /*142*/].f_70 = 1;
		if (bParam2)
		{
			MISC::CLEAR_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 1);
			MISC::CLEAR_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 6);
			MISC::CLEAR_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 7);
		}
		if (bParam3)
		{
			MISC::CLEAR_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 0);
		}
		else
		{
			MISC::SET_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 0);
		}
		if (bParam4)
		{
			__LIB_1__::func_821(iParam1);
		}
		if (bParam6)
		{
			MISC::SET_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 15);
			MISC::SET_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 2);
		}
		if (bParam7)
		{
			switch (iParam10)
			{
				case 0:
					MISC::SET_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 27);
					break;
				case 1:
					MISC::SET_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 28);
					break;
				}
		}
		if (bParam8)
		{
			MISC::SET_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 13);
		}
		if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
			{
				iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
				if (BitTest(iVar0, 3))
				{
					MISC::SET_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 2);
				}
			}
		}
		if (VEHICLE::GET_VEHICLE_MOD_KIT(iParam0) >= 0)
		{
			__LIB_0__::func_107(&iParam0, &(Global_1585857[iParam1 /*142*/].f_9), &(Global_1585857[iParam1 /*142*/].f_59));
			if (__LIB_4__::func_868(iParam1, &uVar1))
			{
				if (bParam5 || PLAYER::GET_PLAYERS_LAST_VEHICLE() == iParam0)
				{
					Global_2359296[__LIB_0__::func_155() /*5567*/].f_593.f_86 = iParam1 + 1;
				}
				MISC::SET_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 25);
				MISC::CLEAR_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 26);
			}
		}
		Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_1275 = NETWORK::GET_CLOUD_TIME_AS_INT();
		__LIB_3__::func_578(iParam1, &(Global_1585857[iParam1 /*142*/]), 0, iParam9, 0, 0);
	}
}

void func_6105(int iParam0, bool bParam1)//Position - 0x215558
{
	int iVar0;
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 39)
		{
			if (Global_2815059.f_2309[iVar0 /*44*/].f_40 == iParam0)
			{
				func_6105(iVar0, 0);
			}
			iVar0++;
		}
	}
	else
	{
		StringCopy(&(Global_2815059.f_2309[iParam0 /*44*/]), "", 24);
		Global_2815059.f_2309[iParam0 /*44*/].f_6 = 138;
		StringCopy(&(Global_2815059.f_2309[iParam0 /*44*/].f_7), "", 64);
		StringCopy(&(Global_2815059.f_2309[iParam0 /*44*/].f_23), "", 64);
		Global_2815059.f_2309[iParam0 /*44*/].f_39 = -1;
		Global_2815059.f_2309[iParam0 /*44*/].f_40 = -1;
		__LIB_0__::clearF_1Prop(&(Global_2815059.f_2309[iParam0 /*44*/].f_41));
		Global_2815059.f_2309[iParam0 /*44*/].f_43 = 0;
	}
}

bool func_6318(int iParam0)//Position - 0x22D432
{
	return Local_134.f_0 == iParam0;
}

bool func_6319(int iParam0, int iParam1)//Position - 0x22D440
{
	bool bVar0;
	bVar0 = !NETWORK::NETWORK_IS_SCRIPT_ACTIVE("AM_MP_SMPL_INTERIOR_INT", iParam0, true, 0);
	if (!bVar0 && func_6320(iParam1))
	{
		bVar0 = true;
	}
	if (BitTest(Global_2815059.f_428.f_5, 0) && ((!CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_OUT()) || HUD::IS_WARNING_MESSAGE_ACTIVE()))
	{
		bVar0 = true;
	}
	if ((Global_1946250.f_4590 == iParam1 && !__LIB_3__::func_171(PLAYER::PLAYER_ID())) && CAM::IS_SCREEN_FADED_OUT())
	{
		bVar0 = true;
	}
	if (BitTest(Global_1946250.f_5, 2) && CAM::IS_SCREEN_FADED_OUT())
	{
		MISC::CLEAR_BIT(&(Global_1946250.f_5), 2);
		bVar0 = true;
	}
	if (bVar0)
	{
		OBJECT::SET_ONLY_ALLOW_AMMO_COLLECTION_WHEN_LOW(true);
	}
	return bVar0;
}

int func_6320(int iParam0)//Position - 0x22D4F0
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_6321(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_6321(int iParam0)//Position - 0x22D510
{
	var uVar0;
	if (!Global_1946250.f_3634)
	{
		return 0;
	}
	uVar0 = { func_6322(iParam0) };
	return BitTest(uVar0[1], 22);
}

Vector3 func_6322(int iParam0)//Position - 0x22D539
{
	struct<3> Var0;
	struct<35> Var1;
	if (iParam0 == -1 || iParam0 == 159)
	{
		Var0 = 2;
		return Var0;
	}
	if (Global_1946250.f_14[iParam0 /*3*/][0] == -1 || !BitTest(Global_1946250, 3))
	{
		func_643(iParam0, &Var1, 3);
		Stack.Push(iParam0);
		Call_Loc(Var1.f_34);
		Global_1946250.f_14[iParam0 /*3*/] = { StackVal, StackVal, StackVal };
	}
	return Global_1946250.f_14[iParam0 /*3*/];
}

void func_6330()//Position - 0x22D6C2
{
	func_302();
	__LIB_0__::clearF_1Prop(&(Global_1946250.f_530));
	__LIB_31__::func_87();
	HUD::SET_RADAR_ZOOM_PRECISE(0f);
	__LIB_5__::func_453();
	__LIB_5__::func_452();
	Global_1946250.f_3603 = 0;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, false);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 429, false);
		ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED(PLAYER::PLAYER_PED_ID(), true);
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(PLAYER::PLAYER_PED_ID(), true);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 106, false);
	}
	__LIB_42__::func_845(&Local_320, &iLocal_324);
	if (__LIB_8__::func_167(Local_133.f_4))
	{
		__LIB_3__::func_664(0);
	}
	func_107();
	func_6347(&(Local_133.f_832));
	__LIB_9__::func_92(0);
	__LIB_40__::func_756(Local_133.f_420, &(Local_133.f_442));
	__LIB_42__::func_845(&Local_320, &iLocal_324);
	func_6342();
	__LIB_31__::func_77(&(Local_133.f_447));
	if (__LIB_12__::func_207(PLAYER::PLAYER_ID()) && BitTest(Local_133.f_0, 9))
	{
		__LIB_9__::func_112(1);
	}
	else
	{
		__LIB_9__::func_112(0);
	}
	__LIB_9__::func_111(PLAYER::PLAYER_ID(), 0);
	__LIB_9__::func_110(PLAYER::PLAYER_ID(), 0);
	__LIB_9__::func_109(PLAYER::PLAYER_ID(), 0);
	__LIB_9__::func_34(PLAYER::PLAYER_ID(), 0);
	func_6335(&Local_320);
	__LIB_9__::func_108();
	__LIB_9__::func_107(&(Local_133.f_869.f_1));
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("GTAO_Tuner_Meet_Car_Test_Area_Scene"))
	{
		AUDIO::STOP_AUDIO_SCENE("GTAO_Tuner_Meet_Car_Test_Area_Scene");
	}
	if (!__LIB_3__::func_790(PLAYER::PLAYER_ID()))
	{
		Global_1964874 = 0;
		__LIB_31__::func_76(&Local_320);
	}
	if (BitTest(Global_1946250.f_8, 23))
	{
		MISC::CLEAR_BIT(&(Global_1946250.f_8), 23);
	}
	HUD::SET_INSIDE_VERY_LARGE_INTERIOR(false);
	func_248(0);
	if (Local_133.f_3 > 0 && Local_133.f_3 < 7)
	{
		__LIB_5__::func_780();
	}
	__LIB_0__::func_202();
}

void func_6335(int* iParam0)//Position - 0x22D8CE
{
	if (__LIB_8__::func_356(iParam0, 16))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 0);
		}
	}
}

void func_6342()//Position - 0x22DAEE
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_133.f_935))
	{
		OBJECT::DELETE_OBJECT(&(Local_133.f_935));
	}
}

void func_6347(var uParam0)//Position - 0x22DC83
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 28)
	{
		if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar0]))
		{
			VEHICLE::DELETE_VEHICLE(uParam0[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_29[iVar0]))
		{
			VEHICLE::DELETE_VEHICLE(&(uParam0->f_29[iVar0]));
		}
		iVar0++;
	}
}

void func_6354(var uParam0)//Position - 0x22DDCB
{
	Local_133.f_4 = *uParam0;
	Local_133.f_1 = uParam0->f_2;
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, false, Local_133.f_1);
	__LIB_0__::func_895(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_134, 155, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&uLocal_287, 33, 0);
	if (!__LIB_0__::func_934())
	{
		func_6330();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
	}
	else
	{
		func_6330();
	}
	Global_1946109 = 0;
	func_6355();
}

void func_6355()//Position - 0x22DE2C
{
	if (Local_133.f_4 != -1)
	{
		Global_1957730 = 0;
		func_6387(Local_133.f_4, &(Local_133.f_5), 0, 0);
		if (Global_1946250.f_499 > -1)
		{
			Global_1946250.f_499 = -1;
		}
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, true);
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), true);
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED(PLAYER::PLAYER_PED_ID(), false);
			PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(PLAYER::PLAYER_PED_ID(), false);
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 106, true);
		}
		func_4920();
		__LIB_40__::func_760(&Local_320, &iLocal_324);
		__LIB_40__::func_759(Local_133.f_420, &(Local_133.f_442), 0, 1);
		func_6380();
		func_6379();
		__LIB_2__::func_183(113, 1, -1);
		__LIB_9__::func_121(0);
		func_6376(&Local_320);
		__LIB_31__::func_85(&(Global_1966156.f_8));
		MISC::CLEAR_BIT(&(Global_1946250.f_8), 27);
		MISC::CLEAR_BIT(&(Global_1946250.f_8), 6);
		__LIB_9__::func_112(0);
		func_6360();
		func_6358();
		if (__LIB_1__::func_708(PLAYER::PLAYER_ID()))
		{
			if (func_297())
			{
				func_6(15, -1, -1, -1, 1065353216);
			}
			else
			{
				func_6(14, -1, -1, -1, 1065353216);
				func_6(4, -1, -1, -1, 1065353216);
			}
			if (STREAMING::IS_MODEL_VALID(func_144()))
			{
				STREAMING::REQUEST_MODEL(func_144());
			}
		}
		__LIB_9__::func_454(4);
		MISC::CLEAR_BIT(&(Global_1946250.f_8), 24);
	}
}

void func_6358()//Position - 0x22DFBF
{
	if (__LIB_9__::func_47())
	{
		return;
	}
	if (!__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
	{
		return;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		return;
	}
	switch (__LIB_3__::func_616())
	{
		case 12:
		case 14:
		case 13:
		case 15:
			__LIB_1__::func_28(186);
			break;
	}
}

void func_6360()//Position - 0x22E07E
{
	var uVar0;
	Local_133.f_924 = 0;
	Local_133.f_924.f_3 = Global_1946250.f_3614;
	Local_133.f_924.f_4 = __LIB_12__::func_207(PLAYER::PLAYER_ID());
	Local_133.f_924.f_5 = 20;
	Local_133.f_924.f_1 = 0;
	Local_133.f_924.f_2 = __LIB_7__::func_780();
	if (__LIB_9__::func_47())
	{
		switch (__LIB_3__::func_616())
		{
			case 9:
				Local_133.f_924.f_5 = 16;
				break;
			case 10:
				Local_133.f_924.f_5 = 17;
				break;
			default:
				Local_133.f_924.f_5 = 20;
				break;
		}
	}
	else
	{
		switch (__LIB_3__::func_616())
		{
			case 12:
			case 14:
				Local_133.f_924.f_5 = 18;
				break;
			case 13:
			case 15:
				Local_133.f_924.f_5 = 19;
				break;
			default:
				Local_133.f_924.f_5 = 20;
				break;
			}
	}
	if (Local_133.f_924.f_5 != 18 && Local_133.f_924.f_5 != 19)
	{
		uVar0 = __LIB_9__::func_28();
		Local_133.f_924.f_1 = uVar0;
	}
	if (func_297())
	{
		if (func_296(PLAYER::PLAYER_ID()))
		{
			Local_133.f_924.f_6 = 1022593016;
		}
		else
		{
			Local_133.f_924.f_6 = 514422467;
		}
	}
	else if (__LIB_1__::func_708(PLAYER::PLAYER_ID()))
	{
		Local_133.f_924.f_6 = -1963730811;
	}
	Global_1964874 = Local_133.f_924.f_6;
	__LIB_40__::func_758(4, Local_133.f_924.f_5, Local_133.f_924, Local_133.f_924.f_4, Local_133.f_924.f_3, Local_133.f_924.f_1, Local_133.f_924.f_2, Local_133.f_924.f_6);
}

void func_6376(int* iParam0)//Position - 0x22EAF0
{
	if (__LIB_1__::func_708(PLAYER::PLAYER_ID()) || __LIB_12__::func_207(PLAYER::PLAYER_ID()))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 3);
		}
		__LIB_9__::func_29(iParam0, 16, 1);
	}
}

void func_6379()//Position - 0x22EB93
{
	AUDIO::SET_STATIC_EMITTER_ENABLED("SE_tr_tuner_car_meet_Main_rm_Vehicle_Noise_01", false);
	AUDIO::SET_STATIC_EMITTER_ENABLED("SE_tr_tuner_car_meet_Main_rm_Vehicle_Noise_02", false);
	AUDIO::SET_STATIC_EMITTER_ENABLED("SE_tr_tuner_car_meet_sandbox_viewer_area_music_01", true);
	AUDIO::SET_STATIC_EMITTER_ENABLED("SE_tr_tuner_car_meet_sandbox_viewer_area_music_02", true);
	AUDIO::SET_STATIC_EMITTER_ENABLED("SE_tr_tuner_car_meet_sandbox_viewer_area_music_01_B", true);
	AUDIO::SET_STATIC_EMITTER_ENABLED("SE_tr_tuner_car_meet_sandbox_viewer_area_music_02_B", true);
	AUDIO::SET_STATIC_EMITTER_ENABLED("SE_tr_tuner_car_meet_sandbox_music_01", true);
	AUDIO::SET_STATIC_EMITTER_ENABLED("SE_tr_tuner_car_meet_sandbox_music_02", true);
	AUDIO::FORCE_MUSIC_TRACK_LIST("RADIO_36_AUDIOPLAYER" /* GXT: Media Player */, "TUNER_AP_MIX3_PARTD", __LIB_9__::func_27());
	AUDIO::SET_EMITTER_RADIO_STATION("SE_tr_tuner_car_meet_sandbox_viewer_area_music_01", "RADIO_36_AUDIOPLAYER" /* GXT: Media Player */);
	AUDIO::SET_EMITTER_RADIO_STATION("SE_tr_tuner_car_meet_sandbox_viewer_area_music_02", "RADIO_36_AUDIOPLAYER" /* GXT: Media Player */);
	AUDIO::SET_EMITTER_RADIO_STATION("SE_tr_tuner_car_meet_sandbox_viewer_area_music_01_B", "RADIO_36_AUDIOPLAYER" /* GXT: Media Player */);
	AUDIO::SET_EMITTER_RADIO_STATION("SE_tr_tuner_car_meet_sandbox_viewer_area_music_02_B", "RADIO_36_AUDIOPLAYER" /* GXT: Media Player */);
	AUDIO::SET_EMITTER_RADIO_STATION("SE_tr_tuner_car_meet_sandbox_music_01", "RADIO_36_AUDIOPLAYER" /* GXT: Media Player */);
	AUDIO::SET_EMITTER_RADIO_STATION("SE_tr_tuner_car_meet_sandbox_music_02", "RADIO_36_AUDIOPLAYER" /* GXT: Media Player */);
}

void func_6380()//Position - 0x22EC49
{
	if ((__LIB_1__::func_708(PLAYER::PLAYER_ID()) && !__LIB_12__::func_207(PLAYER::PLAYER_ID())) && !__LIB_9__::func_23(PLAYER::PLAYER_ID()))
	{
		__LIB_1__::func_28(185);
	}
}

void func_6387(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x22EDC4
{
	var uVar0;
	func_6388(iParam0, uParam1, &uVar0, iParam2, iParam3);
}

void func_6388(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0x22EDDA
{
	struct<33> Var0;
	func_643(iParam0, &Var0, 2);
	func_643(iParam0, &Var0, 6);
	func_643(iParam0, &Var0, 1);
	Stack.Push(iParam0);
	Stack.Push(uParam1);
	Stack.Push(uParam3);
	Stack.Push(uParam4);
	Call_Loc(Var0.f_31);
	Stack.Push(iParam0);
	Stack.Push(&(uParam1->f_389));
	Stack.Push(uParam3);
	Call_Loc(Var0.f_32);
	Stack.Push(iParam0);
	Stack.Push(uParam2);
	Stack.Push(uParam1);
	Stack.Push(&(uParam1->f_4));
	Stack.Push(uParam3);
	Call_Loc(Var0.f_30);
}

