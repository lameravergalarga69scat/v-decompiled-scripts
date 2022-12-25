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
	float fLocal_12 = 0f;
	float fLocal_13 = 0f;
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
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	int iLocal_111 = 0;
	struct<23> Local_112 = { 0, 0, -1, -1, 0, 4, 0, 0, 0, 0, 0, 0, -1, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<5> Local_113[32];
	struct<1318> Local_114 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1056964608, 1056964608, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 1110704128, 0, 0, 3, -1, 0, -1, -1, -1, 0, 0, 0, 12, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, -1, 5, 0, -1, 0, -1, 0, -99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = -1;
	var uLocal_118 = -1;
	var uLocal_119 = -1;
	var uLocal_120 = -1;
	var uLocal_121 = -1;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = -1;
	var uLocal_125 = -1;
	var uLocal_126 = 0;
	var uLocal_127 = -1;
	var uLocal_128 = -1;
	var uLocal_129 = -1;
	var uLocal_130 = -1;
	var uLocal_131 = -1;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 1;
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
	var uLocal_174 = 0;
	var uLocal_175 = 0;
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
	var uLocal_216 = -1;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 32;
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
	var uLocal_295 = 4;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 4;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 5;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 5;
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
	var uLocal_327 = 5;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 5;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = -1;
	var uLocal_341 = 0;
	int iLocal_342 = 0;
	int iLocal_343 = 0;
#endregion
void __EntryFunction__()//Position - 0x0
{
	bool bVar0;
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
	func_5570();
	while (true)
	{
		SYSTEM::WAIT(0);
		if (__LIB_0__::func_959())
		{
			func_5556();
		}
		if (!Global_2787907)
		{
			bVar0 = true;
			if (bVar0)
			{
				func_5556();
			}
		}
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			Local_114.f_39 = INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
		}
		Global_2787908 = 0;
		Global_2787912 = 0;
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 47, true);
			PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 102, true);
		}
		if (BitTest(Local_114.f_38, 6))
		{
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("AM_MP_DRONE")) < 1)
			{
				MISC::CLEAR_BIT(&(Local_114.f_38), 6);
			}
		}
		func_5552();
		func_5551();
		if (func_5550(1))
		{
			if (func_5549())
			{
				Global_2787908 = 1;
			}
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_22) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_112.f_22)))
			{
				Global_2787912 = 1;
			}
			func_4707();
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_1();
		}
	}
}

void func_1()//Position - 0x167
{
	if (func_5550(0))
	{
		if (func_4701() && func_4697())
		{
			func_4696(1);
		}
	}
	else if (func_5550(1))
	{
		func_4701();
		func_4697();
		func_2();
	}
}

void func_2()//Position - 0x1A5
{
	func_3(&(Local_114.f_853), &uLocal_224, &uLocal_289, 0);
}

void func_3(var uParam0, var uParam1, var uParam2, int iParam3)//Position - 0x1BE
{
	if (Global_262145.f_24375 /* Tunable: BB_NIGHTCLUB_DISABLE_NIGHTCLUB_SHOT_MINIGAME */)
	{
		return;
	}
	switch (*uParam2)
	{
		case 0:
			__LIB_9__::func_708(uParam2);
			break;
		case 1:
			func_33(uParam2, iParam3);
			break;
		case 2:
			__LIB_31__::func_459(uParam0, uParam1, uParam2, iParam3);
			break;
	}
}

void func_33(var uParam0, int iParam1)//Position - 0x1701
{
	var uVar0;
	bool bVar1;
	int iVar2[5];
	bool bVar3;
	char* sVar4;
	int iVar5;
	struct<3> Var6;
	struct<3> Var7;
	bool bVar8;
	int iVar9;
	uVar0 = __LIB_10__::func_572();
	bVar3 = true;
	bVar1 = false;
	while (bVar1 < iVar2)
	{
		sVar4 = __LIB_9__::func_543(bVar1);
		iVar2[bVar1] = MISC::GET_HASH_KEY(sVar4);
		STREAMING::REQUEST_MODEL(iVar2[bVar1]);
		if (!STREAMING::HAS_MODEL_LOADED(iVar2[bVar1]))
		{
			bVar3 = false;
		}
		bVar1++;
	}
	if (!bVar3)
	{
		return;
	}
	iVar5 = 1;
	bVar1 = false;
	while (bVar1 < 5)
	{
		if (!BitTest(uParam0->f_5, bVar1) && __LIB_9__::func_542(bVar1, iParam1))
		{
			Var6 = { 0f, 0f, 0f };
			Var7 = { 0f, 0f, 0f };
			bVar8 = bVar1;
			func_36(bVar8, &Var6, &Var7, uParam0);
			if (__LIB_1__::func_671(&(uParam0->f_16[bVar1]), iVar2[bVar1], Var6, 1, 1, 0, 1, 1, 0, 0))
			{
				iVar9 = NETWORK::NET_TO_ENT(uParam0->f_16[bVar1]);
				NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(iVar9, true);
				ENTITY::SET_ENTITY_HEADING(iVar9, Var7.f_2);
				ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iVar9, false);
				ENTITY::SET_ENTITY_COLLISION(iVar9, bVar1 == 4, false);
				ENTITY::FREEZE_ENTITY_POSITION(iVar9, true);
				ENTITY::SET_ENTITY_INVINCIBLE(iVar9, true);
				MISC::SET_BIT(&(uParam0->f_5), bVar1);
				uParam0->f_22[bVar1 /*3*/] = { Var6 };
				uParam0->f_38[bVar1] = Var7.f_2;
			}
			else
			{
				iVar5 = 0;
			}
		}
		bVar1++;
	}
	if (iVar5 && uVar0)
	{
		bVar1 = false;
		while (bVar1 < iVar2)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar2[bVar1]);
			bVar1++;
		}
		__LIB_1__::func_289(uParam0, 2);
	}
}

void func_36(bool bParam0, var uParam1, var uParam2, var uParam3)//Position - 0x1918
{
	float fVar0;
	if (__LIB_9__::func_533())
	{
		switch (bParam0)
		{
			case 0:
				*uParam1 = { 2805.0728f, -3925.7224f, 183.9403f };
				*uParam2 = { 0f, 0f, 60f };
				break;
			case 1:
				*uParam1 = { 2805.0327f, -3925.7917f, 183.9403f };
				*uParam2 = { 0f, 0f, 60f };
				break;
			case 2:
				*uParam1 = { 2804.9634f, -3925.7512f, 183.9403f };
				*uParam2 = { 0f, 0f, 60f };
				break;
			case 3:
				*uParam1 = { 2805.0034f, -3925.682f, 183.9403f };
				*uParam2 = { 0f, 0f, 60f };
				break;
			case 4:
				*uParam1 = { 2804.8892f, -3925.6626f, 184.0489f };
				*uParam2 = { 0f, 0f, 15f };
				break;
		}
	}
	else if (__LIB_10__::func_634())
	{
		if (uParam3->f_52)
		{
			switch (bParam0)
			{
				case 0:
					*uParam1 = { 966.0536f, 41.3604f, 116.1437f };
					*uParam2 = { 0f, 0f, 145.18f };
					break;
				case 1:
					*uParam1 = { 965.8251f, 41.0197f, 116.1443f };
					*uParam2 = { 0f, 0f, 70f };
					break;
				case 2:
					*uParam1 = { 965.8758f, 41.1332f, 116.1447f };
					*uParam2 = { 0f, 0f, -20f };
					break;
				case 3:
					*uParam1 = { 965.9692f, 41.2131f, 116.1447f };
					*uParam2 = { 0f, 0f, -20f };
					break;
				case 4:
					*uParam1 = { 966.1349f, 41.4955f, 116.2423f };
					*uParam2 = { 0f, 0f, -29.95f };
					break;
			}
		}
		else
		{
			switch (bParam0)
			{
				case 0:
					*uParam1 = { 937.552f, 5.4404f, 115.6926f };
					*uParam2 = { 0f, 0f, 70f };
					break;
				case 1:
					*uParam1 = { 937.5247f, 5.3652f, 115.6926f };
					*uParam2 = { 0f, 0f, 70f };
					break;
				case 2:
					*uParam1 = { 937.4495f, 5.3926f, 115.6926f };
					*uParam2 = { 0f, 0f, -20f };
					break;
				case 3:
					*uParam1 = { 937.4769f, 5.4678f, 115.6926f };
					*uParam2 = { 0f, 0f, -20f };
					break;
				case 4:
					*uParam1 = { 937.3609f, 5.4674f, 115.801f };
					*uParam2 = { 0f, 0f, 25f };
					break;
				}
		}
	}
	else if (__LIB_31__::func_246())
	{
		switch (bParam0)
		{
			case 0:
				*uParam1 = { 7.75661f, -1.75875f, 9.5775f };
				fVar0 = 309.97f;
				break;
			case 1:
				*uParam1 = { 8.16589f, -1.75174f, 9.5775f };
				fVar0 = 0f;
				break;
			case 2:
				*uParam1 = { 8.04381f, -1.77509f, 9.5775f };
				fVar0 = 272.36f;
				break;
			case 3:
				*uParam1 = { 7.92494f, -1.74409f, 9.5775f };
				fVar0 = 272.36f;
				break;
			case 4:
				*uParam1 = { 7.59783f, -1.7564f, 9.6955f };
				fVar0 = 93.354904f;
				break;
		}
		*uParam1 = { func_4689(*uParam1, __LIB_2__::func_717(PLAYER::PLAYER_ID())) };
		*uParam2 = { 0f, 0f, func_39(fVar0, __LIB_2__::func_717(PLAYER::PLAYER_ID())) };
	}
	else if (__LIB_31__::func_217())
	{
		switch (bParam0)
		{
			case 0:
				*uParam1 = { -1003.4461f, -62.90126f, -99.0246f };
				*uParam2 = { 0f, 0f, 147.68f };
				break;
			case 1:
				*uParam1 = { -1003.6566f, -63.25446f, -99.0235f };
				*uParam2 = { 0f, 0f, 147.68f };
				break;
			case 4:
				*uParam1 = { -1003.3687f, -62.76336f, -98.9164f };
				*uParam2 = { 0f, 0f, -29.01f };
				break;
		}
	}
	else
	{
		switch (bParam0)
		{
			case 0:
				*uParam1 = { -1609.6848f, -3018.413f, -75.2246f };
				*uParam2 = { 0f, 0f, -1.79f };
				break;
			case 1:
				*uParam1 = { -1609.6791f, -3018.002f, -75.2235f };
				*uParam2 = { 0f, 0f, -1.79f };
				break;
			case 2:
				*uParam1 = { -1609.6569f, -3018.126f, -75.2236f };
				*uParam2 = { 0f, 0f, 0f };
				break;
			case 3:
				*uParam1 = { -1609.6927f, -3018.2437f, -75.2236f };
				*uParam2 = { 0f, 0f, 0f };
				break;
			case 4:
				*uParam1 = { -1609.6829f, -3018.5713f, -75.1165f };
				*uParam2 = { 0f, 0f, (360f - 178.15f) };
				break;
			}
	}
}

float func_39(float fParam0, int iParam1)//Position - 0x1E2D
{
	var uVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	func_40(iParam1, &uVar2, &uVar0, &fVar1, 0);
	fVar3 = (fParam0 + fVar1);
	while (fVar3 < 0f)
	{
		fVar3 = (fVar3 + 360f);
	}
	while (fVar3 >= 360f)
	{
		fVar3 = (fVar3 - 360f);
	}
	return fVar3;
}

void func_40(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4)//Position - 0x1E77
{
	struct<31> Var0;
	func_41(iParam0, &Var0, 1);
	Stack.Push(iParam0);
	Stack.Push(uParam1);
	Stack.Push(uParam2);
	Stack.Push(uParam3);
	Stack.Push(iParam4);
	Call_Loc(Var0.f_30);
}

void func_41(int iParam0, var uParam1, int iParam2)//Position - 0x1E97
{
	func_4684(uParam1, iParam2);
	func_4678(uParam1, iParam2);
	func_4670(uParam1, iParam2);
	func_42(__LIB_0__::func_172(iParam0), uParam1, iParam2);
}

void func_42(int iParam0, var uParam1, int iParam2)//Position - 0x1EC5
{
	switch (iParam0)
	{
		case 0:
			func_4597(uParam1, iParam2);
			break;
		case 1:
			func_4464(uParam1, iParam2);
			break;
		case 2:
			func_4387(uParam1, iParam2);
			break;
		case 3:
			func_4309(uParam1, iParam2);
			break;
		case 4:
			func_4135(uParam1, iParam2);
			break;
		case 5:
			func_3969(uParam1, iParam2);
			break;
		case 6:
			func_3904(uParam1, iParam2);
			break;
		case 7:
			func_3736(uParam1, iParam2);
			break;
		case 8:
			func_3562(uParam1, iParam2);
			break;
		case 9:
			func_3316(uParam1, iParam2);
			break;
		case 10:
			func_3238(uParam1, iParam2);
			break;
		case 11:
			func_3007(uParam1, iParam2);
			break;
		case 12:
			func_2861(uParam1, iParam2);
			break;
		case 13:
			func_2693(uParam1, iParam2);
			break;
		case 14:
			func_2518(uParam1, iParam2);
			break;
		case 15:
			func_2340(uParam1, iParam2);
			break;
		case 16:
			func_2230(uParam1, iParam2);
			break;
		case 17:
			func_1972(uParam1, iParam2);
			break;
		case 18:
			func_1878(uParam1, iParam2);
			break;
		case 19:
			func_1754(uParam1, iParam2);
			break;
		case 20:
			func_1307(uParam1, iParam2);
			break;
		case 21:
			func_1186(uParam1, iParam2);
			break;
		case 22:
			func_1013(uParam1, iParam2);
			break;
		case 23:
			func_790(uParam1, iParam2);
			break;
		case 24:
			func_43(uParam1, iParam2);
			break;
	}
}

void func_43(var uParam0, int iParam1)//Position - 0x207D
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 319729/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 319715/*__LIB_7__::func_293*/;
			break;
		case 1:
			uParam0->f_30 = 319619/*__LIB_7__::func_218*/;
			break;
		case 2:
			uParam0->f_31 = 318268/*__LIB_7__::func_292*/;
			break;
		case 3:
			uParam0->f_34 = 318039/*__LIB_3__::func_732*/;
			break;
		case 4:
			uParam0->f_12 = 318027/*__LIB_3__::func_731*/;
			break;
		case 5:
			uParam0->f_11 = 318017/*__LIB_3__::func_730*/;
			break;
		case 37:
			uParam0->f_18 = 317828/*__LIB_6__::func_453*/;
			break;
		case 38:
			uParam0->f_9 = 317781/*__LIB_7__::func_291*/;
			break;
		case 42:
			uParam0->f_10 = 317753/*__LIB_7__::func_290*/;
			break;
		case 6:
			uParam0->f_32 = 317444/*__LIB_7__::func_217*/;
			break;
		case 11:
			uParam0->f_11 = 317435/*__LIB_3__::func_729*/;
			break;
		case 12:
			uParam0->f_33 = 314767/*__LIB_8__::func_63*/;
			break;
		case 14:
			uParam0->f_11 = 314758/*__LIB_0__::func_114*/;
			break;
		case 109:
			uParam0->f_56 = 308070/*__LIB_8__::func_51*/;
			break;
		case 8:
			uParam0->f_37 = 307195/*__LIB_3__::func_724*/;
			break;
		case 7:
			uParam0->f_36 = 307078/*__LIB_3__::func_723*/;
			break;
		case 79:
			*uParam0 = 307022/*__LIB_5__::func_265*/;
			break;
		case 9:
			uParam0->f_29 = 306869/*__LIB_7__::func_289*/;
			break;
		case 10:
			uParam0->f_27 = 306724/*__LIB_5__::func_444*/;
			break;
		case 13:
			uParam0->f_2 = 306642/*__LIB_30__::func_466*/;
			break;
		case 15:
			uParam0->f_2 = 304808/*__LIB_31__::func_11*/;
			break;
		case 16:
			uParam0->f_5 = 303611/*__LIB_7__::func_673*/;
			break;
		case 108:
			uParam0->f_55 = 246138/*__LIB_40__::func_814*/;
			break;
		case 17:
			uParam0->f_17 = 244409/*func_565*/;
			break;
		case 19:
			uParam0->f_17 = 244258/*__LIB_6__::func_30*/;
			break;
		case 18:
			uParam0->f_8 = 244233/*__LIB_3__::func_688*/;
			break;
		case 20:
			uParam0->f_3 = 244013/*__LIB_7__::func_288*/;
			break;
		case 21:
			uParam0->f_3 = 242572/*__LIB_7__::func_672*/;
			break;
		case 74:
			uParam0->f_53 = 242382/*__LIB_6__::func_77*/;
			break;
		case 75:
			uParam0->f_4 = 241047/*__LIB_5__::func_711*/;
			break;
		case 22:
			uParam0->f_24 = 240930/*__LIB_6__::func_605*/;
			break;
		case 23:
			uParam0->f_26 = 240887/*__LIB_3__::func_683*/;
			break;
		case 24:
			uParam0->f_26 = 240853/*__LIB_3__::func_682*/;
			break;
		case 26:
			uParam0->f_38 = 240845/*__LIB_0__::func_467*/;
			break;
		case 25:
			uParam0->f_23 = 237858/*func_510*/;
			break;
		case 27:
			uParam0->f_25 = 237850/*__LIB_0__::func_467*/;
			break;
		case 28:
			uParam0->f_24 = 237842/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 237692/*__LIB_7__::func_394*/;
			break;
		case 31:
			uParam0->f_39 = 237469/*__LIB_6__::func_712*/;
			break;
		case 33:
			uParam0->f_40 = 236476/*__LIB_10__::func_977*/;
			break;
		case 32:
			*uParam0 = 236421/*__LIB_7__::func_287*/;
			break;
		case 76:
			uParam0->f_13 = 236410/*__LIB_3__::func_554*/;
			break;
		case 34:
			uParam0->f_41 = 232658/*__LIB_7__::func_393*/;
			break;
		case 36:
			uParam0->f_58 = 232613/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 211608/*__LIB_5__::func_946*/;
			break;
		case 45:
			uParam0->f_14 = 211599/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 211590/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 211582/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 211559/*__LIB_3__::func_665*/;
			break;
		case 82:
			uParam0->f_19 = 211513/*__LIB_5__::func_267*/;
			break;
		case 47:
			uParam0->f_43 = 211381/*__LIB_7__::func_216*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 210239/*__LIB_7__::func_392*/;
			break;
		case 49:
			uParam0->f_8 = 210221/*__LIB_3__::func_658*/;
			break;
		case 50:
			*uParam0 = 209872/*__LIB_7__::func_391*/;
			break;
		case 51:
			*uParam0 = 209770/*__LIB_6__::func_602*/;
			break;
		case 52:
			uParam0->f_15 = 209759/*__LIB_3__::func_657*/;
			break;
		case 53:
			uParam0->f_13 = 209633/*func_460*/;
			break;
		case 54:
			uParam0->f_45 = 209246/*func_459*/;
			break;
		case 56:
			uParam0->f_46 = 209227/*__LIB_3__::func_656*/;
			break;
		case 57:
			uParam0->f_11 = 207983/*__LIB_7__::func_481*/;
			break;
		case 58:
			uParam0->f_13 = 207857/*__LIB_3__::func_655*/;
			break;
		case 59:
			*uParam0 = 206194/*__LIB_12__::func_159*/;
			break;
		case 60:
			*uParam0 = 206185/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 206174/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 206048/*__LIB_3__::func_646*/;
			break;
		case 55:
			uParam0->f_45 = 206040/*__LIB_0__::func_467*/;
			break;
		case 63:
			uParam0->f_11 = 206026/*__LIB_11__::func_657*/;
			break;
		case 64:
			uParam0->f_47 = 206018/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 204423/*__LIB_7__::func_534*/;
			break;
		case 66:
			uParam0->f_21 = 203688/*__LIB_5__::func_422*/;
			break;
		case 67:
			uParam0->f_21 = 203548/*__LIB_5__::func_216*/;
			break;
		case 68:
			*uParam0 = 202343/*__LIB_7__::func_390*/;
			break;
		case 69:
			*uParam0 = 202334/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 202322/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 202313/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 202301/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 201819/*__LIB_5__::func_945*/;
			break;
		case 84:
			uParam0->f_1 = 201810/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 29971/*func_205*/;
			break;
		case 87:
			uParam0->f_1 = 26118/*__LIB_6__::func_439*/;
			break;
		case 88:
			uParam0->f_1 = 26109/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 26101/*__LIB_0__::func_467*/;
			break;
		case 90:
			uParam0->f_1 = 25151/*__LIB_8__::func_19*/;
			break;
		case 91:
			uParam0->f_1 = 25117/*__LIB_3__::func_614*/;
			break;
		case 92:
			uParam0->f_1 = 23189/*__LIB_7__::func_389*/;
			break;
		case 94:
			uParam0->f_1 = 21145/*__LIB_7__::func_679*/;
			break;
		case 95:
			uParam0->f_22 = 16688/*__LIB_11__::func_950*/;
			break;
		case 96:
			uParam0->f_1 = 16679/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 16670/*__LIB_0__::func_109*/;
			break;
		case 98:
			uParam0->f_1 = 16661/*__LIB_0__::func_109*/;
			break;
		case 100:
			uParam0->f_22 = 16653/*__LIB_0__::func_467*/;
			break;
		case 101:
			uParam0->f_22 = 16645/*__LIB_0__::func_467*/;
			break;
		case 112:
			uParam0->f_13 = 16531/*__LIB_3__::func_606*/;
			break;
		case 113:
			uParam0->f_3 = 16375/*__LIB_7__::func_388*/;
			break;
		case 114:
			uParam0->f_16 = 15707/*__LIB_3__::func_605*/;
			break;
		case 115:
			uParam0->f_3 = 15698/*__LIB_0__::func_114*/;
			break;
		case 116:
			*uParam0 = 15689/*__LIB_0__::func_114*/;
			break;
		case 117:
			uParam0->f_16 = 11273/*__LIB_3__::func_604*/;
			break;
		case 118:
			uParam0->f_11 = 11264/*__LIB_3__::func_603*/;
			break;
		case 119:
			uParam0->f_27 = 11137/*__LIB_8__::func_49*/;
			break;
		case 120:
			uParam0->f_19 = 11082/*__LIB_5__::func_700*/;
			break;
		case 78:
			uParam0->f_59 = 10129/*__LIB_6__::func_786*/;
			break;
		case 124:
			uParam0->f_1 = 10120/*__LIB_0__::func_109*/;
			break;
		case 125:
			uParam0->f_19 = 10112/*__LIB_0__::func_467*/;
			break;
	}
}

int func_205(int iParam0, var uParam1)//Position - 0x7513
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
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
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
			func_297(&iVar0, &(uParam1->f_109), 60);
			__LIB_3__::func_633(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_214(&iVar0, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 1, 0, 1))
		{
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
		}
		else
		{
			return 0;
		}
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(uParam1->f_109), &(uParam1->f_189[0 /*3*/]), &(uParam1->f_189[1 /*3*/]));
		__LIB_3__::func_632(iParam0, &Var1, &Var3, &fVar9, 1);
		__LIB_3__::func_632(iParam0, &Var2, &Var4, &fVar10, 0);
		__LIB_3__::func_631(iParam0, &Var5, &Var7, &fVar11, 1);
		__LIB_3__::func_631(iParam0, &Var6, &Var8, &fVar12, 0);
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
		__LIB_7__::func_533(&(Global_1946250.f_3638), Var1, Var3, fVar9, Var2, Var4, fVar10, bVar13, Var5, Var7, fVar11, Var6, Var8, fVar12, bVar14, 1056964608, 1036831949);
	}
	return 1;
}

int func_214(int iParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)//Position - 0x7C88
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
						func_215(uParam2[iVar1], iVar4, bParam8, bParam6);
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

int func_215(var uParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x7DEA
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
		if (func_224(iParam1) || __LIB_1__::func_554(iParam1))
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

int func_224(int iParam0)//Position - 0x85E7
{
	if (!PED::IS_PED_WEARING_HELMET(iParam0) && !__LIB_0__::func_348(ENTITY::GET_ENTITY_MODEL(iParam0), 14, func_226(iParam0, 14, 0), -1))
	{
		return 0;
	}
	return 1;
}

int func_226(int iParam0, int iParam1, int iParam2)//Position - 0x86E8
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
				if (func_227(iParam0, iParam1, iVar0))
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
				if (func_227(iParam0, iParam1, iVar1))
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

int func_227(int iParam0, int iParam1, int iParam2)//Position - 0x8789
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
				if (!func_227(iParam0, iVar4, uVar8[iVar4]))
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
							if (!func_227(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_6__::func_38(iVar0, 14, iVar6, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar5)
									{
										if (func_227(iParam0, 14, iVar6))
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
			if (!func_227(iParam0, 14, uVar11[iVar10]))
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
						return func_227(iParam0, 4, uVar18);
					}
				}
				else if (__LIB_0__::func_352(iVar0, 4, iParam2, &uVar18))
				{
					return func_227(iParam0, 4, uVar18);
				}
			}
			Global_78129 = (Global_78129 - 1);
		}
	}
	return 0;
}

int func_297(int iParam0, var uParam1, int iParam2)//Position - 0x27B5E
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
	else if (__LIB_31__::func_387(uParam1, *iParam0, 10f, 20f, 15f, ENTITY::GET_ENTITY_HEADING(*iParam0), 0, 0))
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
			__LIB_6__::func_29(*iParam0, &Var0);
			__LIB_31__::func_54(*uParam1, &Var0, 1, 1, 0);
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
				func_214(iParam0, uParam1, &(uParam1->f_1), __LIB_0__::func_703(iParam2, 16), __LIB_0__::func_703(iParam2, 128), __LIB_0__::func_703(iParam2, 64), !__LIB_0__::func_703(iParam2, 256), 0, 1);
			}
			if (__LIB_0__::func_703(iParam2, 4))
			{
				__LIB_40__::func_748(iParam0, &(uParam1->f_12));
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

void func_459(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0x3315E
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	struct<13> Var3;
	int iVar4;
	if (__LIB_6__::func_601(iParam0))
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
		if (!__LIB_6__::func_67(PLAYER::PLAYER_ID(), __LIB_3__::func_650(iParam0)) && __LIB_6__::func_67(__LIB_0__::func_797(), __LIB_3__::func_650(iParam0)))
		{
			iVar2 = 0;
			while (iVar2 < 32)
			{
				bVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
				if (__LIB_1__::func_693(bVar1, 1, 1) && bVar1 != PLAYER::PLAYER_ID())
				{
					if (__LIB_6__::func_67(bVar1, __LIB_3__::func_650(iParam0)))
					{
						Var3 = { __LIB_1__::func_696(bVar1) };
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
Vector3 func_460(int iParam0)//Position - 0x332E1
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

void func_510(int iParam0, int iParam1)//Position - 0x3A122
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	struct<3> Var3;
	iVar2 = __LIB_3__::func_616();
	Var3 = { __LIB_3__::func_681(iParam0, iVar2) };
	if (__LIB_7__::func_288(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_521(iParam0, Var3, &bVar0, &bVar1, 1, 0);
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
			__LIB_10__::func_977(iParam0, -1);
		}
		else if (__LIB_3__::func_661(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_7__::func_656(PLAYER::PLAYER_ID(), iParam0, Var3, 1, 0, 0, 0, -1, -1, __LIB_6__::func_598());
			}
			__LIB_11__::func_327(iParam0, __LIB_6__::func_598());
		}
		else if (__LIB_3__::func_661(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_7__::func_656(PLAYER::PLAYER_ID(), iParam0, Var3, 0, 0, 1, 0, -1, -1, __LIB_6__::func_598());
			}
			__LIB_11__::func_327(iParam0, __LIB_6__::func_598());
		}
	}
	else
	{
		if (__LIB_2__::func_159(0))
		{
			if (iVar2 == 3 && __LIB_6__::func_597(__LIB_0__::func_797()) == iParam0)
			{
				__LIB_3__::func_664(1);
			}
		}
		__LIB_5__::func_189(iParam1, 1, 0);
		__LIB_5__::func_189(iParam1, 2, 0);
	}
}

void func_521(int iParam0, struct<3> Param1, int iParam2, int iParam3, bool bParam4, bool bParam5)//Position - 0x3A780
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
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
		bVar5 = iVar4;
		if (iVar2 == bVar5 || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(bVar5))
		{
		}
		else
		{
			iVar6 = PLAYER::GET_PLAYER_PED(bVar5);
			if (ENTITY::IS_ENTITY_DEAD(iVar6, false))
			{
			}
			else if (bParam5)
			{
				if (iVar3 != Global_2689235[bVar5 /*453*/].f_318.f_7)
				{
				}
				else
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iVar6, true), Param1) <= fVar1)
					{
						Var7 = { __LIB_1__::func_696(bVar5) };
						bVar8 = false;
						if (__LIB_6__::func_70(bVar5) > -1)
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
								if (((((((((!__LIB_1__::func_907(bVar5, 1) && !__LIB_6__::func_279(bVar5)) && !PED::IS_PED_IN_ANY_VEHICLE(iVar6, true)) && !__LIB_1__::func_101(iVar6)) && !__LIB_2__::func_154(bVar5)) && !__LIB_4__::func_976(bVar5, 1)) && !((__LIB_2__::func_72(bVar5, 1) && !__LIB_3__::func_234(iVar2, bVar5)) && __LIB_6__::func_598() != 0)) && !func_522(bVar5)) && !__LIB_3__::func_171(bVar5)) && !bVar8)
								{
									*iParam2 = 1;
								}
							}
						}
						if ((((((((((!*iParam3 && __LIB_3__::func_234(PLAYER::PLAYER_ID(), bVar5)) && !__LIB_6__::func_279(bVar5)) && !PED::IS_PED_IN_ANY_VEHICLE(iVar6, true)) && !__LIB_1__::func_101(iVar6)) && !__LIB_2__::func_154(bVar5)) && !__LIB_4__::func_976(bVar5, 1)) && __LIB_1__::func_744(PLAYER::PLAYER_ID())) && !func_522(bVar5)) && !__LIB_3__::func_171(bVar5)) && !bVar8)
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
int func_522(bool bParam0)//Position - 0x3A9BB
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

char* func_565(var uParam0, var uParam1, var uParam2)//Position - 0x3BAB9
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	if (__LIB_5__::func_434())
	{
		return "SI_ENTR_BLCK26A" /* GXT: You cannot enter the Agency while on call. You can cancel this via the Quick Join app on the phone. */;
	}
	if (__LIB_1__::func_907(PLAYER::PLAYER_ID(), 0))
	{
		iVar0 = __LIB_5__::func_185(PLAYER::PLAYER_ID());
		if (PLAYER::PLAYER_ID() != __LIB_0__::func_162())
		{
			switch (iVar0)
			{
				case 192:
					return "FHQ_P_BLCK_A" /* GXT: You can't enter the Agency while resupplying another business. */;
				case 190:
					return "FHQ_P_BLCK_B" /* GXT: You can't enter the Agency while selling goods from another business. */;
				case 167:
					return "FHQ_P_BLCK_C" /* GXT: You can't enter the Agency while acquiring goods for a Warehouse. */;
				case 168:
					return "FHQ_P_BLCK_D" /* GXT: You can't enter the Agency while selling goods from a Warehouse. */;
				case 178:
					return "FHQ_P_BLCK_E" /* GXT: You can't enter the Agency while acquiring a vehicle for a Warehouse. */;
				case 188:
					return "FHQ_P_BLCK_F" /* GXT: You can't enter the Agency while selling vehicles from a Warehouse. */;
				case 225:
					return "FHQ_P_BLCK_G" /* GXT: You can't enter the Agency while acquiring goods for a Bunker. */;
				case 226:
					return "FHQ_P_BLCK_H" /* GXT: You can't enter the Agency while selling goods from a Bunker. */;
				case 229:
					return "FHQ_P_BLCK_I" /* GXT: You can't enter the Agency while acquiring goods for a Hangar. */;
				case 230:
					return "FHQ_P_BLCK_J" /* GXT: You can't enter the Agency while selling goods from a Hangar. */;
				case 237:
					return "FHQ_P_BLCK_O" /* GXT: You can't enter the Agency while taking part in Nightclub business. */;
				case 243:
					return "FHQ_P_BLCK_P" /* GXT: You can't enter the Agency while working for Ms. Baker. */;
				case 271:
					return "FHQ_P_BLCK_U" /* GXT: You can't enter the Agency while conducting Auto Shop Business. */;
				}
			}
		default:
	}
	if (__LIB_3__::func_695())
	{
		return "FHQ_P_BLCK_K" /* GXT: You can't enter the Agency with a prostitute. */;
	}
	if (__LIB_2__::func_906())
	{
		return "BOUNTY_PROP_BLCK" /* GXT: You cannot enter whilst delivering a bounty. */;
	}
	if (__LIB_3__::func_694(PLAYER::PLAYER_ID()))
	{
		return "FHQ_P_BLCK_L" /* GXT: You can't access the Agency as the Beast. */;
	}
	if (__LIB_3__::func_693() && !__LIB_3__::func_439(PLAYER::PLAYER_ID()))
	{
		if ((__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && __LIB_5__::func_187(PLAYER::PLAYER_ID(), -1))
		{
			return "NPC_BLOCK" /* GXT: You cannot enter with non-player characters in the vehicle. */;
		}
	}
	if (__LIB_1__::func_101(PLAYER::PLAYER_PED_ID()) && __LIB_3__::func_692(PLAYER::PLAYER_ID()))
	{
		return "FHQ_P_BLCK_M" /* GXT: You can't access the Agency whilst wearing the Ballistic Equipment. */;
	}
	if ((__LIB_6__::func_72(PLAYER::PLAYER_ID()) && __LIB_1__::func_17(PLAYER::PLAYER_ID())) && __LIB_3__::func_439(PLAYER::PLAYER_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (__LIB_5__::func_187(PLAYER::PLAYER_ID(), -1))
			{
				return "FHQ_P_BLCK_N" /* GXT: You can't enter the Agency while taking part in a Business Battle. */;
			}
		}
		else
		{
			return "FHQ_P_BLCK_N" /* GXT: You can't enter the Agency while taking part in a Business Battle. */;
		}
	}
	if (!__LIB_5__::func_852(PLAYER::PLAYER_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			iVar4 = __LIB_3__::func_392(iVar3, &uVar2, &uVar1);
			iVar5 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar3, -1, false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar5))
			{
				iVar6 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar5);
				if (__LIB_5__::func_187(PLAYER::PLAYER_ID(), -1))
				{
					if (!__LIB_6__::func_279(PLAYER::PLAYER_ID()))
					{
						if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iVar3))
						{
							iVar7 = ENTITY::GET_ENTITY_ATTACHED_TO(iVar3);
							if ((__LIB_0__::func_121(iVar7) && !__LIB_1__::func_590(ENTITY::GET_ENTITY_MODEL(iVar3))) && !__LIB_3__::func_690(iVar3))
							{
								return "PROP_BLOCK_TRAIL" /* GXT: Unable to enter garage. Please detach trailer. */;
							}
							else
							{
								return "FHQ_P_BLCK_Q" /* GXT: You can't enter the Agency with this vehicle. */;
							}
						}
						else if (__LIB_3__::func_690(iVar3))
						{
							return "FHQ_P_BLCK_R" /* GXT: You can't enter the Agency with the Mobile Operations Center. */;
						}
						else if ((((((__LIB_1__::func_589(iVar3) || __LIB_1__::func_819(ENTITY::GET_ENTITY_MODEL(iVar3))) || !__LIB_3__::func_561(ENTITY::GET_ENTITY_MODEL(iVar3), 26)) || __LIB_1__::func_590(ENTITY::GET_ENTITY_MODEL(iVar3))) || __LIB_1__::func_588(iVar3)) || (__LIB_3__::func_689(iVar3) && !__LIB_3__::func_601(iVar3, 1))) || (__LIB_0__::func_872(iVar3, 1) && iVar4 != iVar6))
						{
							if (__LIB_1__::func_590(ENTITY::GET_ENTITY_MODEL(iVar3)) && ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar3))
							{
								return "";
							}
							else
							{
								return "FHQ_P_BLCK_Q" /* GXT: You can't enter the Agency with this vehicle. */;
							}
						}
						else if (__LIB_0__::func_121(iVar3) && ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("rcbandito"))
						{
							return "FHQ_P_BLCK_T" /* GXT: You can't enter the Agency with the RC Bandito. */;
						}
					}
				}
			}
		}
	}
	return "";
}

void func_790(var uParam0, int iParam1)//Position - 0x4E0FA
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 376174/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 376165/*__LIB_0__::func_162*/;
			break;
		case 1:
			uParam0->f_30 = 376086/*__LIB_7__::func_296*/;
			break;
		case 2:
			uParam0->f_31 = 375448/*__LIB_7__::func_613*/;
			break;
		case 3:
			uParam0->f_34 = 375182/*__LIB_3__::func_797*/;
			break;
		case 4:
			uParam0->f_12 = 375170/*__LIB_3__::func_796*/;
			break;
		case 6:
			uParam0->f_32 = 375071/*__LIB_7__::func_223*/;
			break;
		case 37:
			uParam0->f_18 = 374940/*__LIB_3__::func_795*/;
			break;
		case 38:
			uParam0->f_9 = 374893/*__LIB_6__::func_614*/;
			break;
		case 39:
			uParam0->f_11 = 374858/*__LIB_7__::func_398*/;
			break;
		case 41:
			uParam0->f_20 = 374739/*__LIB_8__::func_22*/;
			break;
		case 42:
			uParam0->f_10 = 374711/*__LIB_6__::func_456*/;
			break;
		case 11:
			uParam0->f_11 = 374701/*__LIB_3__::func_793*/;
			break;
		case 12:
			uParam0->f_33 = 372550/*__LIB_5__::func_856*/;
			break;
		case 14:
			uParam0->f_11 = 372541/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 369958/*__LIB_5__::func_465*/;
			break;
		case 8:
			uParam0->f_37 = 369950/*__LIB_0__::func_467*/;
			break;
		case 7:
			uParam0->f_36 = 369941/*__LIB_0__::func_114*/;
			break;
		case 79:
			*uParam0 = 369932/*__LIB_0__::func_114*/;
			break;
		case 13:
			uParam0->f_2 = 369870/*__LIB_30__::func_466*/;
			break;
		case 15:
			uParam0->f_2 = 369789/*__LIB_31__::func_12*/;
			break;
		case 16:
			uParam0->f_5 = 369436/*__LIB_6__::func_722*/;
			break;
		case 108:
			uParam0->f_55 = 365003/*__LIB_40__::func_815*/;
			break;
		case 17:
			uParam0->f_17 = 363861/*func_963*/;
			break;
		case 19:
			uParam0->f_17 = 363835/*__LIB_5__::func_953*/;
			break;
		case 20:
			uParam0->f_3 = 363826/*__LIB_0__::func_109*/;
			break;
		case 21:
			uParam0->f_3 = 363695/*__LIB_6__::func_613*/;
			break;
		case 74:
			uParam0->f_53 = 363591/*__LIB_6__::func_77*/;
			break;
		case 75:
			uParam0->f_4 = 363575/*__LIB_5__::func_464*/;
			break;
		case 22:
			uParam0->f_24 = 363425/*__LIB_6__::func_612*/;
			break;
		case 23:
			uParam0->f_26 = 363417/*__LIB_0__::func_467*/;
			break;
		case 26:
			uParam0->f_38 = 355562/*func_916*/;
			break;
		case 25:
			uParam0->f_23 = 354513/*func_912*/;
			break;
		case 27:
			uParam0->f_25 = 354299/*__LIB_5__::func_854*/;
			break;
		case 28:
			uParam0->f_24 = 354261/*__LIB_3__::func_777*/;
			break;
		case 29:
			uParam0->f_28 = 354238/*__LIB_7__::func_222*/;
			break;
		case 30:
			uParam0->f_8 = 353479/*__LIB_7__::func_397*/;
			break;
		case 31:
			uParam0->f_39 = 353449/*__LIB_3__::func_775*/;
			break;
		case 43:
			uParam0->f_8 = 353335/*__LIB_5__::func_205*/;
			break;
		case 33:
			uParam0->f_40 = 353217/*__LIB_7__::func_295*/;
			break;
		case 76:
			uParam0->f_13 = 353168/*__LIB_7__::func_221*/;
			break;
		case 34:
			uParam0->f_41 = 344330/*__LIB_7__::func_220*/;
			break;
		case 36:
			uParam0->f_58 = 344282/*__LIB_3__::func_774*/;
			break;
		case 35:
			uParam0->f_42 = 333194/*__LIB_6__::func_415*/;
			break;
		case 45:
			uParam0->f_14 = 333185/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 333176/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 333168/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 333157/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 333040/*__LIB_7__::func_219*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 332107/*__LIB_7__::func_659*/;
			break;
		case 49:
			uParam0->f_8 = 332098/*__LIB_0__::func_114*/;
			break;
		case 50:
			*uParam0 = 331929/*__LIB_6__::func_719*/;
			break;
		case 51:
			*uParam0 = 331920/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 331909/*__LIB_3__::func_766*/;
			break;
		case 53:
			uParam0->f_13 = 331886/*__LIB_3__::func_765*/;
			break;
		case 54:
			uParam0->f_45 = 331838/*__LIB_3__::func_764*/;
			break;
		case 56:
			uParam0->f_46 = 331820/*__LIB_3__::func_763*/;
			break;
		case 57:
			uParam0->f_11 = 331778/*__LIB_5__::func_456*/;
			break;
		case 58:
			uParam0->f_13 = 331736/*__LIB_3__::func_761*/;
			break;
		case 59:
			*uParam0 = 331607/*__LIB_7__::func_487*/;
			break;
		case 60:
			*uParam0 = 331598/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 331587/*__LIB_3__::func_760*/;
			break;
		case 62:
			uParam0->f_13 = 331564/*__LIB_3__::func_759*/;
			break;
		case 63:
			uParam0->f_11 = 331555/*__LIB_1__::func_804*/;
			break;
		case 55:
			uParam0->f_45 = 331514/*__LIB_3__::func_758*/;
			break;
		case 64:
			uParam0->f_47 = 331506/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 331498/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 331227/*__LIB_7__::func_294*/;
			break;
		case 67:
			uParam0->f_21 = 331157/*__LIB_3__::func_757*/;
			break;
		case 68:
			*uParam0 = 330485/*__LIB_5__::func_454*/;
			break;
		case 69:
			*uParam0 = 330476/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 330464/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 330244/*__LIB_3__::func_756*/;
			break;
		case 107:
			uParam0->f_50 = 330232/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 329696/*__LIB_6__::func_288*/;
			break;
		case 84:
			uParam0->f_1 = 329581/*__LIB_5__::func_874*/;
			break;
		case 85:
			uParam0->f_1 = 328678/*func_833*/;
			break;
		case 87:
			uParam0->f_1 = 326040/*__LIB_6__::func_414*/;
			break;
		case 88:
			uParam0->f_1 = 326031/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 326023/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 326014/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 326005/*__LIB_0__::func_109*/;
			break;
		case 98:
			uParam0->f_1 = 325996/*__LIB_0__::func_109*/;
			break;
		case 100:
			uParam0->f_22 = 325988/*__LIB_0__::func_467*/;
			break;
		case 101:
			uParam0->f_22 = 325980/*__LIB_0__::func_467*/;
			break;
		case 112:
			uParam0->f_13 = 325945/*__LIB_5__::func_214*/;
			break;
		case 113:
			uParam0->f_3 = 325936/*__LIB_0__::func_114*/;
			break;
		case 114:
			uParam0->f_16 = 323998/*__LIB_5__::func_451*/;
			break;
		case 115:
			uParam0->f_3 = 323989/*__LIB_0__::func_114*/;
			break;
		case 116:
			*uParam0 = 323980/*__LIB_0__::func_114*/;
			break;
		case 117:
			uParam0->f_16 = 322760/*__LIB_3__::func_744*/;
			break;
		case 121:
			*uParam0 = 322678/*__LIB_3__::func_743*/;
			break;
		case 122:
			*uParam0 = 322661/*__LIB_3__::func_742*/;
			break;
		case 123:
			uParam0->f_19 = 322629/*__LIB_5__::func_450*/;
			break;
		case 78:
			uParam0->f_59 = 321413/*__LIB_8__::func_64*/;
			break;
		case 124:
			uParam0->f_1 = 321404/*__LIB_0__::func_109*/;
			break;
		case 125:
			uParam0->f_19 = 321396/*__LIB_0__::func_467*/;
			break;
	}
}

int func_833(int iParam0, var uParam1)//Position - 0x503E6
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	float fVar6;
	float fVar7;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = __LIB_3__::func_616();
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
		{
			func_297(&iVar1, &(uParam1->f_109), 60);
			__LIB_3__::func_633(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_214(&iVar1, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 1, 0, 1))
		{
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
		}
		else
		{
			return 0;
		}
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(uParam1->f_109), &(uParam1->f_189[0 /*3*/]), &(uParam1->f_189[1 /*3*/]));
		__LIB_3__::func_752(iParam0, &Var2, &Var4, &fVar6, 1, iVar0);
		__LIB_3__::func_752(iParam0, &Var3, &Var5, &fVar7, 0, iVar0);
		__LIB_6__::func_27(&(Global_1946250.f_3638), 5000, "TD Shot", Var2, Var4, fVar6, Var3, Var5, fVar7, 0.2f, 0, 1000, 0, 0, 0);
	}
	return 1;
}

void func_912(int iParam0, int iParam1)//Position - 0x568D1
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
	func_521(iParam0, Var5, &bVar0, &bVar1, 1, 0);
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
			__LIB_7__::func_295(iParam0, -1);
		}
		if (((iVar3 == 12 || iVar3 == 13) || iVar3 == 14) || iVar3 == 15)
		{
			iVar4 = 1;
		}
		if (__LIB_3__::func_661(0, iParam1))
		{
			__LIB_7__::func_295(iParam0, -1);
			__LIB_3__::func_664(iVar4);
		}
		else if (__LIB_3__::func_661(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_7__::func_656(PLAYER::PLAYER_ID(), iParam0, Var5, 1, 0, 0, 0, -2, -1, iVar4);
			}
			__LIB_7__::func_612(iVar4, 1);
		}
		else if (__LIB_3__::func_661(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_7__::func_656(PLAYER::PLAYER_ID(), iParam0, Var5, 0, 0, 1, 0, -2, -1, iVar4);
			}
			__LIB_7__::func_612(iVar4, 1);
		}
	}
	else
	{
		__LIB_3__::func_664(iVar4);
		__LIB_5__::func_189(iParam1, 1, 0);
		__LIB_5__::func_189(iParam1, 2, 0);
	}
}

void func_916(var uParam0, var uParam1)//Position - 0x56CEA
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
			func_917(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_917(var uParam0, var uParam1)//Position - 0x56D40
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
	func_521(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &bVar0, &bVar1, 1, 0);
	if (!bVar0 && !bVar1)
	{
		if (bVar2 || (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23150.f_79[0 /*6*/])) || !MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_79[0 /*6*/]), __LIB_6__::func_455(0))))
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
					__LIB_6__::func_454(PLAYER::PLAYER_ID());
				}
			}
			return;
		}
	}
	sVar6 = __LIB_3__::func_770();
	iVar8 = 0;
	while (iVar8 < 3)
	{
		uVar5[iVar7] = __LIB_6__::func_455(iVar8);
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
				__LIB_6__::func_454(PLAYER::PLAYER_ID());
			}
			if (iVar4[uParam0->f_4] != 0)
			{
				__LIB_8__::func_21(iVar4[uParam0->f_4], 154);
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

char* func_963(var uParam0, var uParam1, int iParam2)//Position - 0x58D55
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	if (__LIB_5__::func_434())
	{
		return "SI_ENTR_BLCK25A" /* GXT: You cannot enter the LS Car Meet while on call. You can cancel this via the Quick Join app on the phone. */;
	}
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (__LIB_0__::func_336(PLAYER::PLAYER_PED_ID(), 0) == -1)
		{
			if (iParam2 == 9 || iParam2 == 10)
			{
				if (!__LIB_1__::func_687(PLAYER::PLAYER_ID()))
				{
					return "CAR_P_BLCK_V" /* GXT: You must be a member of the LS Car Meet to enter the Test Track. */;
				}
			}
		}
	}
	if (__LIB_1__::func_907(PLAYER::PLAYER_ID(), 0))
	{
		iVar0 = __LIB_5__::func_185(PLAYER::PLAYER_ID());
		if (PLAYER::PLAYER_ID() != __LIB_0__::func_162())
		{
			switch (iVar0)
			{
				case 192:
					return "CAR_P_BLCK_A" /* GXT: You can't enter the LS Car Meet while resupplying another business. */;
				case 190:
					return "CAR_P_BLCK_B" /* GXT: You can't enter the LS Car Meet while selling goods from another business. */;
				case 167:
					return "CAR_P_BLCK_C" /* GXT: You can't enter the LS Car Meet while acquiring goods for a Warehouse. */;
				case 168:
					return "CAR_P_BLCK_D" /* GXT: You can't enter the LS Car Meet while selling goods from a Warehouse. */;
				case 178:
					return "CAR_P_BLCK_E" /* GXT: You can't enter the LS Car Meet while acquiring a vehicle for a Warehouse. */;
				case 188:
					return "CAR_P_BLCK_F" /* GXT: You can't enter the LS Car Meet while selling vehicles from a Warehouse. */;
				case 225:
					return "CAR_P_BLCK_G" /* GXT: You can't enter the LS Car Meet while acquiring goods for a Bunker. */;
				case 226:
					return "CAR_P_BLCK_H" /* GXT: You can't enter the LS Car Meet while selling goods from a Bunker. */;
				case 229:
					return "CAR_P_BLCK_I" /* GXT: You can't enter the LS Car Meet while acquiring goods for a Hangar. */;
				case 230:
					return "CAR_P_BLCK_J" /* GXT: You can't enter the LS Car Meet while selling goods from a Hangar. */;
				case 237:
					return "CAR_P_BLCK_O" /* GXT: You can't enter the LS Car Meet while taking part in Nightclub business. */;
				case 243:
					return "CAR_P_BLCK_P" /* GXT: You can't enter the LS Car Meet while working for Ms. Baker. */;
				case 271:
					return "CAR_P_BLCK_U" /* GXT: You can't enter the LS Car Meet while working for Sessanta. */;
					break;
				}
			}
	}
	if (__LIB_3__::func_695())
	{
		return "CAR_P_BLCK_K" /* GXT: You can't enter the LS Car Meet with a prostitute. */;
	}
	if (__LIB_2__::func_906())
	{
		return "BOUNTY_PROP_BLCK" /* GXT: You cannot enter whilst delivering a bounty. */;
	}
	if (__LIB_3__::func_694(PLAYER::PLAYER_ID()))
	{
		return "CAR_P_BLCK_L" /* GXT: You can't access the LS Car Meet as the Beast. */;
	}
	if (__LIB_3__::func_693() && !__LIB_3__::func_439(PLAYER::PLAYER_ID()))
	{
		if ((__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && __LIB_5__::func_187(PLAYER::PLAYER_ID(), -1))
		{
			return "NPC_BLOCK" /* GXT: You cannot enter with non-player characters in the vehicle. */;
		}
	}
	if (__LIB_1__::func_101(PLAYER::PLAYER_PED_ID()))
	{
		return "CAR_P_BLCK_M" /* GXT: You can't access the LS Car Meet whilst wearing the Ballistic Equipment. */;
	}
	if (__LIB_1__::func_17(PLAYER::PLAYER_ID()) && __LIB_3__::func_439(PLAYER::PLAYER_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (__LIB_5__::func_187(PLAYER::PLAYER_ID(), -1))
			{
				return "CAR_P_BLCK_N" /* GXT: You can't enter the LS Car Meet while taking part in a Business Battle. */;
			}
		}
		else
		{
			return "CAR_P_BLCK_N" /* GXT: You can't enter the LS Car Meet while taking part in a Business Battle. */;
		}
	}
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		iVar4 = __LIB_3__::func_392(iVar3, &uVar2, &uVar1);
		iVar5 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar3, -1, false);
		iVar6 = ENTITY::GET_ENTITY_MODEL(iVar3);
		if (ENTITY::DOES_ENTITY_EXIST(iVar5))
		{
			iVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar5);
			if (__LIB_5__::func_187(PLAYER::PLAYER_ID(), -1))
			{
				if (!__LIB_6__::func_279(PLAYER::PLAYER_ID()))
				{
					if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iVar3))
					{
						iVar8 = ENTITY::GET_ENTITY_ATTACHED_TO(iVar3);
						if ((__LIB_0__::func_121(iVar8) && !__LIB_1__::func_590(ENTITY::GET_ENTITY_MODEL(iVar3))) && !__LIB_3__::func_690(iVar3))
						{
							return "PROP_BLOCK_TRAIL" /* GXT: Unable to enter garage. Please detach trailer. */;
						}
						else
						{
							return "CAR_P_BLCK_Q" /* GXT: You can't enter the LS Car Meet with this vehicle. */;
						}
					}
					else if (__LIB_3__::func_690(iVar3))
					{
						return "CAR_P_BLCK_R" /* GXT: You can't enter the LS Car Meet with the Mobile Operations Center. */;
					}
					else if (((((__LIB_1__::func_589(iVar3) || __LIB_1__::func_819(iVar6)) || __LIB_1__::func_590(iVar6)) || __LIB_1__::func_588(iVar3)) || __LIB_3__::func_689(iVar3)) || (__LIB_0__::func_872(iVar3, 1) && iVar4 != iVar7))
					{
						if (__LIB_1__::func_590(iVar6) && ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar3))
						{
							return "";
						}
						else
						{
							return "CAR_P_BLCK_Q" /* GXT: You can't enter the LS Car Meet with this vehicle. */;
						}
					}
					else if (__LIB_0__::func_121(iVar3) && ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("rcbandito"))
					{
						return "CAR_P_BLCK_T" /* GXT: You can't enter the LS Car Meet with the RC Bandito. */;
					}
					else if ((((((!__LIB_1__::func_841(iVar6) || !__LIB_3__::func_561(iVar6, 21)) || !__LIB_0__::func_872(iVar3, 1)) || __LIB_1__::func_588(iVar3)) || __LIB_0__::func_870(iVar3, 1)) || __LIB_2__::func_116(iVar3, 1)) || __LIB_0__::func_871(iVar3, 1))
					{
						return "CAR_P_BLCK_Q" /* GXT: You can't enter the LS Car Meet with this vehicle. */;
					}
				}
			}
		}
	}
	return "";
}

void func_1013(var uParam0, int iParam1)//Position - 0x5BD77
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 416654/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 416640/*__LIB_7__::func_297*/;
			break;
		case 1:
			uParam0->f_30 = 416549/*__LIB_5__::func_474*/;
			break;
		case 2:
			uParam0->f_31 = 416328/*__LIB_5__::func_473*/;
			break;
		case 3:
			uParam0->f_34 = 416171/*__LIB_3__::func_841*/;
			break;
		case 4:
			uParam0->f_12 = 416159/*__LIB_3__::func_840*/;
			break;
		case 5:
			uParam0->f_11 = 416149/*__LIB_3__::func_839*/;
			break;
		case 37:
			uParam0->f_18 = 416034/*__LIB_3__::func_838*/;
			break;
		case 38:
			uParam0->f_9 = 415987/*__LIB_6__::func_381*/;
			break;
		case 42:
			uParam0->f_10 = 415959/*__LIB_6__::func_380*/;
			break;
		case 6:
			uParam0->f_32 = 415871/*__LIB_3__::func_837*/;
			break;
		case 11:
			uParam0->f_11 = 415862/*__LIB_3__::func_603*/;
			break;
		case 12:
			uParam0->f_33 = 414117/*__LIB_10__::func_536*/;
			break;
		case 14:
			uParam0->f_11 = 414108/*__LIB_0__::func_114*/;
			break;
		case 109:
			uParam0->f_56 = 410035/*func_1162*/;
			break;
		case 8:
			uParam0->f_37 = 409556/*__LIB_3__::func_835*/;
			break;
		case 7:
			uParam0->f_36 = 409462/*__LIB_3__::func_834*/;
			break;
		case 79:
			*uParam0 = 409453/*__LIB_0__::func_114*/;
			break;
		case 13:
			uParam0->f_2 = 409391/*__LIB_30__::func_466*/;
			break;
		case 15:
			uParam0->f_2 = 409310/*__LIB_31__::func_13*/;
			break;
		case 16:
			uParam0->f_5 = 408412/*__LIB_12__::func_438*/;
			break;
		case 108:
			uParam0->f_55 = 405133/*__LIB_42__::func_841*/;
			break;
		case 17:
			uParam0->f_17 = 403888/*func_1140*/;
			break;
		case 19:
			uParam0->f_17 = 403862/*__LIB_5__::func_954*/;
			break;
		case 20:
			uParam0->f_3 = 403648/*__LIB_6__::func_619*/;
			break;
		case 21:
			uParam0->f_3 = 403584/*__LIB_5__::func_798*/;
			break;
		case 74:
			uParam0->f_53 = 403480/*__LIB_6__::func_77*/;
			break;
		case 75:
			uParam0->f_4 = 403464/*__LIB_5__::func_472*/;
			break;
		case 22:
			uParam0->f_24 = 403362/*__LIB_6__::func_618*/;
			break;
		case 23:
			uParam0->f_26 = 403354/*__LIB_0__::func_467*/;
			break;
		case 26:
			uParam0->f_38 = 399342/*func_1112*/;
			break;
		case 25:
			uParam0->f_23 = 398892/*func_1109*/;
			break;
		case 27:
			uParam0->f_25 = 398884/*__LIB_0__::func_467*/;
			break;
		case 28:
			uParam0->f_24 = 398876/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 398239/*__LIB_7__::func_401*/;
			break;
		case 31:
			uParam0->f_39 = 398105/*__LIB_5__::func_217*/;
			break;
		case 33:
			uParam0->f_40 = 397231/*__LIB_7__::func_614*/;
			break;
		case 32:
			*uParam0 = 397028/*__LIB_7__::func_400*/;
			break;
		case 76:
			uParam0->f_13 = 396875/*__LIB_3__::func_821*/;
			break;
		case 34:
			uParam0->f_41 = 395263/*__LIB_5__::func_469*/;
			break;
		case 36:
			uParam0->f_58 = 395218/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 386179/*__LIB_5__::func_468*/;
			break;
		case 45:
			uParam0->f_14 = 386170/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 386161/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 386153/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 386130/*__LIB_3__::func_815*/;
			break;
		case 47:
			uParam0->f_43 = 386081/*__LIB_3__::func_814*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 385944/*__LIB_5__::func_859*/;
			break;
		case 49:
			uParam0->f_8 = 385926/*__LIB_3__::func_658*/;
			break;
		case 50:
			*uParam0 = 385094/*__LIB_7__::func_490*/;
			break;
		case 51:
			*uParam0 = 384992/*__LIB_6__::func_615*/;
			break;
		case 52:
			uParam0->f_15 = 384981/*__LIB_3__::func_811*/;
			break;
		case 53:
			uParam0->f_13 = 384828/*func_1064*/;
			break;
		case 54:
			uParam0->f_45 = 384595/*func_1063*/;
			break;
		case 56:
			uParam0->f_46 = 384586/*__LIB_3__::func_729*/;
			break;
		case 57:
			uParam0->f_11 = 384173/*__LIB_7__::func_399*/;
			break;
		case 58:
			uParam0->f_13 = 384020/*__LIB_3__::func_808*/;
			break;
		case 59:
			*uParam0 = 384011/*__LIB_0__::func_114*/;
			break;
		case 60:
			*uParam0 = 384002/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 383991/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 383980/*__LIB_3__::func_554*/;
			break;
		case 63:
			uParam0->f_11 = 383971/*__LIB_1__::func_804*/;
			break;
		case 64:
			uParam0->f_47 = 383963/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 382907/*__LIB_10__::func_702*/;
			break;
		case 66:
			uParam0->f_21 = 382687/*__LIB_3__::func_807*/;
			break;
		case 67:
			uParam0->f_21 = 382612/*__LIB_5__::func_216*/;
			break;
		case 68:
			*uParam0 = 381923/*__LIB_5__::func_215*/;
			break;
		case 69:
			*uParam0 = 381914/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 381902/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 381810/*__LIB_3__::func_806*/;
			break;
		case 107:
			uParam0->f_50 = 381798/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 381431/*__LIB_5__::func_858*/;
			break;
		case 84:
			uParam0->f_1 = 381422/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 380630/*func_1037*/;
			break;
		case 87:
			uParam0->f_1 = 379252/*__LIB_6__::func_416*/;
			break;
		case 88:
			uParam0->f_1 = 379243/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 379235/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 379226/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 379217/*__LIB_0__::func_109*/;
			break;
		case 98:
			uParam0->f_1 = 379208/*__LIB_0__::func_109*/;
			break;
		case 100:
			uParam0->f_22 = 379200/*__LIB_0__::func_467*/;
			break;
		case 101:
			uParam0->f_22 = 379192/*__LIB_0__::func_467*/;
			break;
		case 112:
			uParam0->f_13 = 379180/*__LIB_5__::func_214*/;
			break;
		case 113:
			uParam0->f_3 = 379171/*__LIB_0__::func_114*/;
			break;
		case 114:
			uParam0->f_16 = 323998/*__LIB_5__::func_451*/;
			break;
		case 115:
			uParam0->f_3 = 379162/*__LIB_0__::func_114*/;
			break;
		case 116:
			*uParam0 = 379153/*__LIB_0__::func_114*/;
			break;
		case 117:
			uParam0->f_16 = 377933/*__LIB_3__::func_800*/;
			break;
		case 78:
			uParam0->f_59 = 377761/*__LIB_6__::func_294*/;
			break;
		case 124:
			uParam0->f_1 = 377752/*__LIB_0__::func_109*/;
			break;
		case 125:
			uParam0->f_19 = 377744/*__LIB_0__::func_467*/;
			break;
	}
}

int func_1037(int iParam0, var uParam1)//Position - 0x5CED6
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	float fVar5;
	float fVar6;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
		{
			func_297(&iVar0, &(uParam1->f_109), 60);
			__LIB_3__::func_633(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_214(&iVar0, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 1, 0, 1))
		{
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
		}
		else
		{
			return 0;
		}
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(uParam1->f_109), &(uParam1->f_189[0 /*3*/]), &(uParam1->f_189[1 /*3*/]));
		__LIB_3__::func_805(iParam0, &Var1, &Var3, &fVar5, 1);
		__LIB_3__::func_805(iParam0, &Var2, &Var4, &fVar6, 0);
		__LIB_6__::func_27(&(Global_1946250.f_3638), 5000, "TD Shot", Var1, Var3, fVar5, Var2, Var4, fVar6, 0.2f, 0, 1000, 0, 0, 0);
	}
	return 1;
}

void func_1063(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0x5DE53
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	struct<13> Var3;
	int iVar4;
	bVar0 = false;
	if (!__LIB_6__::func_79(PLAYER::PLAYER_ID(), __LIB_3__::func_810(iParam0)) && !__LIB_6__::func_79(__LIB_0__::func_797(), __LIB_3__::func_810(iParam0)))
	{
		iVar2 = 0;
		while (iVar2 < 32)
		{
			bVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
			if (__LIB_1__::func_693(bVar1, 1, 1) && bVar1 != PLAYER::PLAYER_ID())
			{
				if (__LIB_6__::func_79(bVar1, __LIB_3__::func_810(iParam0)) && __LIB_6__::func_295(bVar1))
				{
					Var3 = { __LIB_1__::func_696(bVar1) };
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
Vector3 func_1064(int iParam0)//Position - 0x5DF3C
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

void func_1109(int iParam0, int iParam1)//Position - 0x6162C
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	Var2 = { __LIB_3__::func_830(iParam0) };
	if (__LIB_6__::func_619(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_521(iParam0, Var2, &bVar0, &bVar1, 1, 0);
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
			__LIB_7__::func_614(iParam0, -1);
		}
		else if (__LIB_3__::func_661(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_7__::func_656(PLAYER::PLAYER_ID(), iParam0, Var2, 1, 0, 0, 0, -1, -1, -1);
			}
			__LIB_7__::func_986(iParam0);
		}
		else if (__LIB_3__::func_661(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_7__::func_656(PLAYER::PLAYER_ID(), iParam0, Var2, 0, 0, 1, 0, -1, -1, -1);
			}
			__LIB_7__::func_986(iParam0);
		}
	}
	else
	{
		__LIB_5__::func_189(iParam1, 1, 0);
		__LIB_5__::func_189(iParam1, 2, 0);
	}
}

void func_1112(var uParam0, var uParam1)//Position - 0x617EE
{
	if (__LIB_3__::func_616() == 2 || __LIB_3__::func_616() == 1)
	{
		func_1115(uParam0, uParam1);
	}
	else if (__LIB_2__::func_72(PLAYER::PLAYER_ID(), 0) && __LIB_6__::func_79(__LIB_2__::func_39(PLAYER::PLAYER_ID()), __LIB_3__::func_810(*uParam0)))
	{
		__LIB_6__::func_457(uParam0, uParam1);
	}
	else
	{
		__LIB_3__::func_831(uParam1);
	}
}

void func_1115(var uParam0, var uParam1)//Position - 0x618CD
{
	int iVar0;
	iVar0 = __LIB_3__::func_785();
	switch (iVar0)
	{
		case 0:
			__LIB_10__::func_979(uParam0, uParam1);
			break;
		case 1:
			func_1129(uParam0, uParam1);
			break;
		case 2:
			__LIB_31__::func_603(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_1129(var uParam0, var uParam1)//Position - 0x624CB
{
	var uVar0;
	var uVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_521(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &uVar0, &uVar1, 1, 0);
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
		if (__LIB_7__::func_988(*uParam0))
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
			__LIB_7__::func_614(*uParam0, -1);
			__LIB_5__::func_462();
		}
	}
}

char* func_1140(int iParam0, var uParam1, var uParam2)//Position - 0x629B0
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	if (__LIB_5__::func_434())
	{
		return "SI_ENTR_BLCK24A" /* GXT: You cannot enter the Auto Shop while on call. You can cancel this via the Quick Join app on the phone. */;
	}
	if (__LIB_1__::func_907(PLAYER::PLAYER_ID(), 0))
	{
		iVar0 = __LIB_5__::func_185(PLAYER::PLAYER_ID());
		if (PLAYER::PLAYER_ID() != __LIB_0__::func_162())
		{
			switch (iVar0)
			{
				case 192:
					return "AUS_P_BLCK_A" /* GXT: You can't enter the Auto Shop while resupplying another business. */;
				case 190:
					return "AUS_P_BLCK_B" /* GXT: You can't enter the Auto Shop while selling goods from another business. */;
				case 167:
					return "AUS_P_BLCK_C" /* GXT: You can't enter the Auto Shop while acquiring goods for a Warehouse. */;
				case 168:
					return "AUS_P_BLCK_D" /* GXT: You can't enter the Auto Shop while selling goods from a Warehouse. */;
				case 178:
					return "AUS_P_BLCK_E" /* GXT: You can't enter the Auto Shop while acquiring a vehicle for a Warehouse. */;
				case 188:
					return "AUS_P_BLCK_F" /* GXT: You can't enter the Auto Shop while selling vehicles from a Warehouse. */;
				case 225:
					return "AUS_P_BLCK_G" /* GXT: You can't enter the Auto Shop while acquiring goods for a Bunker. */;
				case 226:
					return "AUS_P_BLCK_H" /* GXT: You can't enter the Auto Shop while selling goods from a Bunker. */;
				case 229:
					return "AUS_P_BLCK_I" /* GXT: You can't enter the Auto Shop while acquiring goods for a Hangar. */;
				case 230:
					return "AUS_P_BLCK_J" /* GXT: You can't enter the Auto Shop while selling goods from a Hangar. */;
				case 237:
					return "AUS_P_BLCK_O" /* GXT: You can't enter the Auto Shop while taking part in Nightclub business. */;
				case 243:
					return "AUS_P_BLCK_P" /* GXT: You can't enter the Auto Shop while working for Ms. Baker. */;
				case 271:
					if (__LIB_2__::func_106(PLAYER::PLAYER_ID()))
					{
						return "";
					}
					break;
				}
			}
	}
	if (__LIB_3__::func_695())
	{
		return "AUS_P_BLCK_K" /* GXT: You can't enter the Auto Shop with a prostitute. */;
	}
	if (__LIB_2__::func_906())
	{
		return "BOUNTY_PROP_BLCK" /* GXT: You cannot enter whilst delivering a bounty. */;
	}
	if (__LIB_3__::func_694(PLAYER::PLAYER_ID()))
	{
		return "AUS_P_BLCK_L" /* GXT: You can't access the Auto Shop as the Beast. */;
	}
	if (__LIB_3__::func_693() && !__LIB_3__::func_439(PLAYER::PLAYER_ID()))
	{
		if ((__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && __LIB_5__::func_187(PLAYER::PLAYER_ID(), -1))
		{
			return "NPC_BLOCK" /* GXT: You cannot enter with non-player characters in the vehicle. */;
		}
	}
	if (__LIB_1__::func_101(PLAYER::PLAYER_PED_ID()) && __LIB_3__::func_812(PLAYER::PLAYER_ID()))
	{
		return "AUS_P_BLCK_M" /* GXT: You can't access the Auto Shop whilst wearing the Ballistic Equipment. */;
	}
	if ((__LIB_6__::func_82(PLAYER::PLAYER_ID()) && __LIB_1__::func_17(PLAYER::PLAYER_ID())) && __LIB_3__::func_439(PLAYER::PLAYER_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (__LIB_5__::func_187(PLAYER::PLAYER_ID(), -1))
			{
				return "AUS_P_BLCK_N" /* GXT: You can't enter the Auto Shop while taking part in a Business Battle. */;
			}
		}
		else
		{
			return "AUS_P_BLCK_N" /* GXT: You can't enter the Auto Shop while taking part in a Business Battle. */;
		}
	}
	if (!__LIB_5__::func_852(PLAYER::PLAYER_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			iVar4 = __LIB_3__::func_392(iVar3, &uVar2, &uVar1);
			iVar5 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar3, -1, false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar5))
			{
				iVar6 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar5);
				if (__LIB_5__::func_187(PLAYER::PLAYER_ID(), -1))
				{
					if (!__LIB_6__::func_279(PLAYER::PLAYER_ID()))
					{
						if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iVar3))
						{
							iVar7 = ENTITY::GET_ENTITY_ATTACHED_TO(iVar3);
							if ((__LIB_0__::func_121(iVar7) && !__LIB_1__::func_590(ENTITY::GET_ENTITY_MODEL(iVar3))) && !__LIB_3__::func_690(iVar3))
							{
								return "PROP_BLOCK_TRAIL" /* GXT: Unable to enter garage. Please detach trailer. */;
							}
							else
							{
								return "AUS_P_BLCK_Q" /* GXT: You can't enter the Auto Shop with this vehicle. */;
							}
						}
						else if (__LIB_3__::func_690(iVar3))
						{
							return "AUS_P_BLCK_R" /* GXT: You can't enter the Auto Shop with the Mobile Operations Center. */;
						}
						else if ((((((__LIB_1__::func_589(iVar3) || __LIB_1__::func_819(ENTITY::GET_ENTITY_MODEL(iVar3))) || !__LIB_3__::func_561(ENTITY::GET_ENTITY_MODEL(iVar3), 25)) || __LIB_1__::func_590(ENTITY::GET_ENTITY_MODEL(iVar3))) || __LIB_1__::func_588(iVar3)) || __LIB_3__::func_689(iVar3)) || (__LIB_0__::func_872(iVar3, 1) && iVar4 != iVar6))
						{
							if (__LIB_1__::func_590(ENTITY::GET_ENTITY_MODEL(iVar3)) && ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar3))
							{
								return "";
							}
							else
							{
								return "AUS_P_BLCK_Q" /* GXT: You can't enter the Auto Shop with this vehicle. */;
							}
						}
						else if (__LIB_0__::func_121(iVar3) && ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("rcbandito"))
						{
							return "AUS_P_BLCK_T" /* GXT: You can't enter the Auto Shop with the RC Bandito. */;
						}
					}
				}
			}
		}
	}
	if ((!__LIB_6__::func_79(PLAYER::PLAYER_ID(), __LIB_3__::func_810(iParam0)) && __LIB_7__::func_988(iParam0)) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar8 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (ENTITY::DOES_ENTITY_EXIST(iVar8) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar8, false))
		{
			if ((((((!__LIB_0__::func_872(iVar8, 1) || !__LIB_3__::func_561(ENTITY::GET_ENTITY_MODEL(iVar8), 25)) || ENTITY::GET_ENTITY_MODEL(iVar8) == joaat("oppressor2")) || __LIB_5__::func_440(iVar8)) || __LIB_3__::func_832(ENTITY::GET_ENTITY_MODEL(iVar8))) || __LIB_3__::func_531(iVar8, 0)) || __LIB_3__::func_531(iVar8, 1))
			{
				return "AUS_P_BLCK_U" /* GXT: You can't enter the Auto Shop to modify this vehicle. */;
			}
		}
	}
	return "";
}

void func_1162(int iParam0, var uParam1, int iParam2)//Position - 0x641B3
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
					if (__LIB_6__::func_621(iParam0))
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
					if (__LIB_6__::func_621(iParam0))
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
					if (__LIB_6__::func_621(iParam0))
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
					if (__LIB_6__::func_621(iParam0))
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
					if (__LIB_6__::func_621(iParam0))
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
			if (!__LIB_2__::func_159(1) || (__LIB_2__::func_50() && __LIB_6__::func_79(PLAYER::PLAYER_ID(), __LIB_3__::func_810(iParam0))))
			{
				func_521(iParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &uVar0, &uVar1, 1, 0);
				bVar2 = (uVar0 || uVar1);
			}
			if (!bVar2 && !__LIB_7__::func_988(iParam0))
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

void func_1186(var uParam0, int iParam1)//Position - 0x65B97
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 432991/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 432982/*__LIB_0__::func_162*/;
			break;
		case 1:
			uParam0->f_30 = 432915/*__LIB_5__::func_484*/;
			break;
		case 2:
			uParam0->f_31 = 432475/*__LIB_5__::func_861*/;
			break;
		case 3:
			uParam0->f_34 = 432327/*__LIB_3__::func_867*/;
			break;
		case 4:
			uParam0->f_12 = 432315/*__LIB_3__::func_866*/;
			break;
		case 37:
			uParam0->f_18 = 432100/*__LIB_5__::func_230*/;
			break;
		case 38:
			uParam0->f_9 = 432011/*__LIB_6__::func_624*/;
			break;
		case 39:
			uParam0->f_11 = 431991/*__LIB_5__::func_229*/;
			break;
		case 40:
			uParam0->f_6 = 431886/*__LIB_7__::func_226*/;
			break;
		case 41:
			uParam0->f_20 = 431861/*__LIB_6__::func_459*/;
			break;
		case 42:
			uParam0->f_10 = 431848/*__LIB_3__::func_865*/;
			break;
		case 6:
			uParam0->f_32 = 431784/*__LIB_3__::func_864*/;
			break;
		case 11:
			uParam0->f_11 = 431775/*__LIB_3__::func_603*/;
			break;
		case 12:
			uParam0->f_33 = 431238/*__LIB_5__::func_483*/;
			break;
		case 14:
			uParam0->f_11 = 431229/*__LIB_0__::func_114*/;
			break;
		case 109:
			uParam0->f_56 = 430280/*__LIB_5__::func_482*/;
			break;
		case 8:
			uParam0->f_37 = 430272/*__LIB_0__::func_467*/;
			break;
		case 7:
			uParam0->f_36 = 430263/*__LIB_0__::func_114*/;
			break;
		case 79:
			*uParam0 = 430254/*__LIB_0__::func_114*/;
			break;
		case 13:
			uParam0->f_2 = 430192/*__LIB_30__::func_466*/;
			break;
		case 15:
			uParam0->f_2 = 430111/*__LIB_31__::func_14*/;
			break;
		case 16:
			uParam0->f_5 = 429784/*__LIB_7__::func_491*/;
			break;
		case 108:
			uParam0->f_55 = 429775/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 429763/*__LIB_3__::func_860*/;
			break;
		case 19:
			uParam0->f_17 = 429751/*__LIB_3__::func_860*/;
			break;
		case 18:
			uParam0->f_8 = 429709/*__LIB_6__::func_382*/;
			break;
		case 20:
			uParam0->f_3 = 429700/*__LIB_0__::func_109*/;
			break;
		case 21:
			uParam0->f_3 = 429652/*__LIB_5__::func_227*/;
			break;
		case 74:
			uParam0->f_53 = 429497/*__LIB_6__::func_472*/;
			break;
		case 75:
			uParam0->f_4 = 429488/*__LIB_0__::func_114*/;
			break;
		case 22:
			uParam0->f_24 = 429386/*__LIB_6__::func_623*/;
			break;
		case 23:
			uParam0->f_26 = 429378/*__LIB_0__::func_467*/;
			break;
		case 25:
			uParam0->f_23 = 428951/*func_1262*/;
			break;
		case 27:
			uParam0->f_25 = 428943/*__LIB_0__::func_467*/;
			break;
		case 28:
			uParam0->f_24 = 428935/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 428900/*__LIB_5__::func_226*/;
			break;
		case 31:
			uParam0->f_39 = 428870/*__LIB_3__::func_775*/;
			break;
		case 33:
			uParam0->f_40 = 428703/*__LIB_7__::func_298*/;
			break;
		case 76:
			uParam0->f_13 = 428680/*__LIB_3__::func_849*/;
			break;
		case 34:
			uParam0->f_41 = 425065/*__LIB_5__::func_480*/;
			break;
		case 36:
			uParam0->f_58 = 425020/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 421826/*__LIB_5__::func_955*/;
			break;
		case 45:
			uParam0->f_14 = 421817/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 421808/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 421800/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 421789/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 421627/*__LIB_6__::func_622*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 420426/*func_1236*/;
			break;
		case 49:
			uParam0->f_8 = 420417/*__LIB_0__::func_114*/;
			break;
		case 50:
			*uParam0 = 419992/*__LIB_6__::func_823*/;
			break;
		case 51:
			*uParam0 = 419983/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 419972/*__LIB_3__::func_850*/;
			break;
		case 53:
			uParam0->f_13 = 419949/*__LIB_3__::func_849*/;
			break;
		case 54:
			uParam0->f_45 = 419941/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 419932/*__LIB_3__::func_729*/;
			break;
		case 57:
			uParam0->f_11 = 419919/*__LIB_3__::func_848*/;
			break;
		case 58:
			uParam0->f_13 = 419877/*__LIB_3__::func_847*/;
			break;
		case 59:
			*uParam0 = 419868/*__LIB_0__::func_114*/;
			break;
		case 60:
			*uParam0 = 419859/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 419848/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 419837/*__LIB_3__::func_554*/;
			break;
		case 63:
			uParam0->f_11 = 419828/*__LIB_1__::func_804*/;
			break;
		case 64:
			uParam0->f_47 = 419820/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 419812/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 419199/*__LIB_5__::func_476*/;
			break;
		case 67:
			uParam0->f_21 = 419129/*__LIB_3__::func_757*/;
			break;
		case 68:
			*uParam0 = 418440/*__LIB_5__::func_215*/;
			break;
		case 69:
			*uParam0 = 418431/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 418419/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 418410/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 418398/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 418389/*__LIB_0__::func_114*/;
			break;
		case 84:
			uParam0->f_1 = 418380/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 418371/*__LIB_0__::func_109*/;
			break;
		case 87:
			uParam0->f_1 = 418362/*__LIB_0__::func_109*/;
			break;
		case 88:
			uParam0->f_1 = 418353/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 418345/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 418336/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 418327/*__LIB_0__::func_109*/;
			break;
		case 98:
			uParam0->f_1 = 418318/*__LIB_0__::func_109*/;
			break;
		case 100:
			uParam0->f_22 = 418310/*__LIB_0__::func_467*/;
			break;
		case 101:
			uParam0->f_22 = 418302/*__LIB_0__::func_467*/;
			break;
		case 112:
			uParam0->f_13 = 418290/*__LIB_5__::func_214*/;
			break;
		case 113:
			uParam0->f_3 = 418281/*__LIB_0__::func_114*/;
			break;
		case 114:
			uParam0->f_16 = 323998/*__LIB_5__::func_451*/;
			break;
		case 115:
			uParam0->f_3 = 418272/*__LIB_0__::func_114*/;
			break;
		case 116:
			*uParam0 = 418263/*__LIB_0__::func_114*/;
			break;
		case 117:
			uParam0->f_16 = 377933/*__LIB_3__::func_800*/;
			break;
		case 78:
			uParam0->f_59 = 418255/*__LIB_0__::func_467*/;
			break;
		case 124:
			uParam0->f_1 = 418246/*__LIB_0__::func_109*/;
			break;
		case 125:
			uParam0->f_19 = 418238/*__LIB_0__::func_467*/;
			break;
	}
}

void func_1236(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0x66A4A
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
		if (__LIB_7__::func_226(PLAYER::PLAYER_ID(), 148, uVar3, 1))
		{
			bVar1 = false;
			bVar2 = false;
		}
		else
		{
			func_521(iParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &bVar1, &bVar2, 1, 1);
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
		iVar5 = __LIB_7__::func_404(__LIB_3__::func_661(4, iParam3));
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

void func_1262(int iParam0, int iParam1)//Position - 0x68B97
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	int iVar3;
	if (__LIB_0__::func_109(PLAYER::PLAYER_ID(), iParam0))
	{
		iVar3 = __LIB_3__::func_616();
		Var2 = { __LIB_3__::func_859(iParam0, iVar3) };
		func_521(iParam0, Var2, &bVar0, &bVar1, 1, 0);
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
			__LIB_7__::func_298(iParam0, -1);
		}
		if (__LIB_3__::func_661(0, iParam1))
		{
			__LIB_7__::func_298(iParam0, -1);
		}
		else if (__LIB_3__::func_661(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_7__::func_656(PLAYER::PLAYER_ID(), iParam0, Var2, 1, 0, 0, 0, -1, -1, -1);
			}
			__LIB_7__::func_615();
		}
		else if (__LIB_3__::func_661(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_7__::func_656(PLAYER::PLAYER_ID(), iParam0, Var2, 0, 0, 1, 0, -1, -1, -1);
			}
			__LIB_7__::func_615();
		}
	}
	else
	{
		__LIB_5__::func_189(iParam1, 1, 0);
		__LIB_5__::func_189(iParam1, 2, 0);
	}
}

void func_1307(var uParam0, int iParam1)//Position - 0x69B68
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 709662/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 709607/*__LIB_3__::func_975*/;
			break;
		case 2:
			uParam0->f_31 = 708947/*__LIB_5__::func_965*/;
			break;
		case 3:
			uParam0->f_34 = 708820/*__LIB_3__::func_974*/;
			break;
		case 4:
			uParam0->f_12 = 708788/*__LIB_3__::func_973*/;
			break;
		case 5:
			uParam0->f_11 = 708777/*__LIB_3__::func_972*/;
			break;
		case 6:
			uParam0->f_32 = 708713/*__LIB_3__::func_971*/;
			break;
		case 111:
			uParam0->f_35 = 708690/*__LIB_6__::func_461*/;
			break;
		case 79:
			*uParam0 = 708681/*__LIB_0__::func_114*/;
			break;
		case 37:
			uParam0->f_18 = 708566/*__LIB_3__::func_970*/;
			break;
		case 38:
			uParam0->f_9 = 708470/*__LIB_6__::func_635*/;
			break;
		case 11:
			uParam0->f_11 = 708461/*__LIB_3__::func_969*/;
			break;
		case 12:
			uParam0->f_33 = 708071/*__LIB_7__::func_577*/;
			break;
		case 109:
			uParam0->f_56 = 707768/*__LIB_7__::func_302*/;
			break;
		case 15:
			uParam0->f_2 = 705801/*__LIB_7__::func_538*/;
			break;
		case 13:
			uParam0->f_2 = 705792/*__LIB_0__::func_109*/;
			break;
		case 75:
			uParam0->f_4 = 705783/*__LIB_0__::func_109*/;
			break;
		case 16:
			uParam0->f_5 = 705400/*__LIB_7__::func_681*/;
			break;
		case 108:
			uParam0->f_55 = 701444/*__LIB_11__::func_351*/;
			break;
		case 17:
			uParam0->f_17 = 700718/*func_1697*/;
			break;
		case 19:
			uParam0->f_17 = 700692/*__LIB_5__::func_963*/;
			break;
		case 20:
			uParam0->f_3 = 700523/*__LIB_7__::func_411*/;
			break;
		case 21:
			uParam0->f_3 = 700460/*__LIB_6__::func_303*/;
			break;
		case 74:
			uParam0->f_53 = 700308/*__LIB_6__::func_89*/;
			break;
		case 22:
			uParam0->f_24 = 700227/*__LIB_3__::func_957*/;
			break;
		case 25:
			uParam0->f_23 = 699290/*func_1688*/;
			break;
		case 30:
			uParam0->f_8 = 697962/*__LIB_6__::func_797*/;
			break;
		case 31:
			uParam0->f_39 = 697384/*__LIB_7__::func_410*/;
			break;
		case 33:
			uParam0->f_40 = 696149/*__LIB_7__::func_493*/;
			break;
		case 14:
			uParam0->f_11 = 696140/*__LIB_1__::func_806*/;
			break;
		case 34:
			uParam0->f_41 = 693373/*__LIB_5__::func_495*/;
			break;
		case 36:
			uParam0->f_58 = 693320/*__LIB_3__::func_945*/;
			break;
		case 35:
			uParam0->f_42 = 687700/*__LIB_5__::func_962*/;
			break;
		case 45:
			uParam0->f_14 = 687691/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 687682/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 687674/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 687651/*__LIB_3__::func_943*/;
			break;
		case 47:
			uParam0->f_43 = 687602/*__LIB_3__::func_942*/;
			break;
		case 49:
			uParam0->f_8 = 687577/*__LIB_3__::func_941*/;
			break;
		case 50:
			*uParam0 = 687539/*__LIB_5__::func_725*/;
			break;
		case 51:
			*uParam0 = 687465/*__LIB_7__::func_329*/;
			break;
		case 52:
			uParam0->f_15 = 687454/*__LIB_3__::func_940*/;
			break;
		case 53:
			uParam0->f_13 = 687375/*__LIB_6__::func_630*/;
			break;
		case 54:
			uParam0->f_45 = 687367/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 687358/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 687348/*__LIB_3__::func_938*/;
			break;
		case 58:
			uParam0->f_13 = 687101/*__LIB_6__::func_629*/;
			break;
		case 64:
			uParam0->f_47 = 685938/*__LIB_35__::func_456*/;
			break;
		case 65:
			uParam0->f_21 = 684746/*__LIB_7__::func_537*/;
			break;
		case 66:
			uParam0->f_21 = 683639/*__LIB_7__::func_536*/;
			break;
		case 67:
			uParam0->f_21 = 683463/*__LIB_5__::func_866*/;
			break;
		case 68:
			*uParam0 = 681803/*__LIB_11__::func_529*/;
			break;
		case 69:
			*uParam0 = 681794/*__LIB_0__::func_109*/;
			break;
		case 70:
			uParam0->f_48 = 681782/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 681773/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 681761/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 680928/*__LIB_5__::func_961*/;
			break;
		case 73:
			uParam0->f_51 = 680919/*__LIB_0__::func_114*/;
			break;
		case 84:
			uParam0->f_1 = 680267/*__LIB_10__::func_996*/;
			break;
		case 85:
			uParam0->f_1 = 679395/*func_1590*/;
			break;
		case 87:
			uParam0->f_1 = 678184/*__LIB_11__::func_15*/;
			break;
		case 88:
			uParam0->f_1 = 678164/*__LIB_3__::func_918*/;
			break;
		case 89:
			uParam0->f_54 = 678070/*__LIB_3__::func_917*/;
			break;
		case 90:
			uParam0->f_1 = 677939/*__LIB_5__::func_865*/;
			break;
		case 91:
			uParam0->f_1 = 677311/*__LIB_5__::func_801*/;
			break;
		case 92:
			uParam0->f_1 = 676544/*func_1572*/;
			break;
		case 94:
			uParam0->f_1 = 675992/*__LIB_5__::func_960*/;
			break;
		case 95:
			uParam0->f_22 = 675396/*__LIB_6__::func_383*/;
			break;
		case 18:
			uParam0->f_8 = 675038/*__LIB_5__::func_959*/;
			break;
		case 96:
			uParam0->f_1 = 674945/*__LIB_5__::func_800*/;
			break;
		case 97:
			uParam0->f_1 = 674099/*__LIB_5__::func_864*/;
			break;
		case 98:
			uParam0->f_1 = 439629/*func_1362*/;
			break;
		case 100:
			uParam0->f_22 = 436349/*__LIB_6__::func_440*/;
			break;
		case 101:
			uParam0->f_22 = 435189/*__LIB_6__::func_417*/;
			break;
		case 78:
			uParam0->f_59 = 434981/*__LIB_6__::func_298*/;
			break;
		case 104:
			uParam0->f_1 = 434513/*__LIB_5__::func_957*/;
			break;
		case 102:
			uParam0->f_1 = 434504/*__LIB_0__::func_109*/;
			break;
		case 103:
			uParam0->f_22 = 434394/*__LIB_5__::func_956*/;
			break;
		case 81:
			*uParam0 = 434351/*__LIB_3__::func_870*/;
			break;
	}
}

int func_1362(var uParam0, var uParam1)//Position - 0x6B54D
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
		func_1377(&(uParam1->f_140[0]), PLAYER::PLAYER_ID(), 1, 1);
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
			func_297(&iVar9, &(uParam1->f_109), 4);
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
		if (__LIB_6__::func_625())
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

int func_1377(var uParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x6BEED
{
	int iVar0;
	iVar0 = PLAYER::GET_PLAYER_PED(bParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (!func_215(uParam0, iVar0, bParam2, bParam3))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0) && !ENTITY::IS_ENTITY_DEAD(*uParam0, false))
	{
		if (!func_1378(uParam0, bParam1))
		{
		}
		PED::FINALIZE_HEAD_BLEND(*uParam0);
	}
	return 1;
}

int func_1378(var uParam0, bool bParam1)//Position - 0x6BF4B
{
	int iVar0;
	struct<10> Var1;
	if (__LIB_5__::func_799(bParam1))
	{
		iVar0 = __LIB_7__::func_661(bParam1);
		Var1.f_1 = -1;
		Var1.f_2 = -1;
		Var1.f_3 = -1;
		Var1.f_4 = -1;
		Var1.f_8 = -1;
		Var1.f_9 = 50;
		Var1.f_0 = *uParam0;
		Var1.f_6 = 1;
		func_1382(&Var1, __LIB_3__::func_353(iVar0), 0, 1, 1, !__LIB_5__::func_723(), 0, __LIB_7__::func_475(), __LIB_3__::func_904(__LIB_6__::func_299(bParam1), 0), __LIB_3__::func_352(iVar0));
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(__LIB_2__::func_508(bParam1, 0), false);
		if (GRAPHICS::OVERRIDE_PED_CREW_LOGO_TEXTURE(*uParam0, __LIB_2__::func_508(bParam1, 0), __LIB_6__::func_626(bParam1, 2)))
		{
		}
		return 1;
	}
	return 0;
}

int func_1382(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, bool bParam9)//Position - 0x6C06C
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
													GRAPHICS::OVERRIDE_PED_CREW_LOGO_TEXTURE(*uParam0, __LIB_2__::func_508(PLAYER::PLAYER_ID(), 0), __LIB_6__::func_626(PLAYER::PLAYER_ID(), 2));
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
									__LIB_6__::func_724(PLAYER::PLAYER_ID(), -1, -1);
								}
								if (!func_224(*uParam0))
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
										func_1506(*uParam0, uParam0->f_3, uParam0->f_8);
									}
									if ((uParam0->f_4 != -1 && uParam0->f_1 != 32) && uParam0->f_1 != 81)
									{
										func_1506(*uParam0, uParam0->f_4, uParam0->f_8);
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
										func_1495(*uParam0);
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
											func_1426(*uParam0, 14, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
											func_1426(*uParam0, 2, Global_2689235[uParam0->f_8 /*453*/].f_248, 0, -1, 0, 0, iVar20, iVar18, iVar19, uParam0->f_8, 1, 0, 0);
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
												func_1426(*uParam0, 2, iVar21, 0, -1, 0, 0, 0, iVar18, iVar19, -1, 0, 0, 0);
											}
											else
											{
												iVar23 = __LIB_1__::func_360(753, -1, 0);
												func_1426(*uParam0, 2, iVar23, 0, -1, 0, 0, 0, iVar18, iVar19, -1, 0, 0, 0);
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
									func_1421(*uParam0, &(Global_1886249[uParam0->f_8 /*51*/]), bVar24, iVar25);
								}
								else
								{
									func_1392(*uParam0, bVar24, 0, iVar25);
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
															GRAPHICS::OVERRIDE_PED_CREW_LOGO_TEXTURE(*uParam0, __LIB_2__::func_508(PLAYER::PLAYER_ID(), 0), __LIB_6__::func_626(PLAYER::PLAYER_ID(), 2));
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
															GRAPHICS::OVERRIDE_PED_CREW_LOGO_TEXTURE(*uParam0, __LIB_2__::func_508(PLAYER::PLAYER_ID(), 0), __LIB_6__::func_626(PLAYER::PLAYER_ID(), 2));
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

void func_1392(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x71F35
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
		bVar3 = func_1419(iParam0, 0);
		bVar4 = __LIB_1__::func_37(iParam0);
		bVar5 = func_1410(iParam0, iParam3);
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

int func_1410(int iParam0, int iParam1)//Position - 0x7C520
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
				iVar3 = func_226(iParam0, 11, -1);
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
				iVar5 = func_226(iParam0, 11, -1);
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

int func_1419(int iParam0, bool bParam1)//Position - 0x7C97E
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
							iVar2 = __LIB_5__::func_29(joaat("MP_M_Freemode_01"), 11, func_226(iParam0, 11, -1), 0);
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
						else if (__LIB_6__::func_371(PLAYER::PLAYER_ID(), 1) && Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_76.f_21 != 0)
						{
							return 1;
						}
					}
					break;
				default:
					if (iVar0 > 15)
					{
						iVar3 = func_226(iParam0, 11, -1);
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
						iVar5 = func_226(iParam0, 8, -1);
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
							iVar7 = __LIB_5__::func_29(joaat("MP_F_Freemode_01"), 11, func_226(iParam0, 11, -1), 0);
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
						iVar8 = func_226(iParam0, 11, -1);
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
							iVar10 = __LIB_5__::func_29(joaat("MP_F_Freemode_01"), 11, func_226(iParam0, 11, -1), 0);
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
							iVar11 = __LIB_5__::func_29(joaat("MP_F_Freemode_01"), 11, func_226(iParam0, 11, -1), 0);
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
						iVar12 = func_226(iParam0, 8, -1);
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

void func_1421(int iParam0, var uParam1, bool bParam2, int iParam3)//Position - 0x7D9DC
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
		bVar2 = func_1419(iParam0, 0);
		bVar3 = __LIB_1__::func_37(iParam0);
		bVar4 = func_1410(iParam0, iParam3);
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

int func_1426(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)//Position - 0x7EA37
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
			func_1490(iVar5, iParam1, iParam2, 1);
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
						func_1490(iVar5, 10, 0, 1);
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
									func_1490(iVar5, iVar0, uVar14[iVar0], 1);
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
								func_1426(iParam0, iVar0, uVar14[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (BitTest(Global_78130[1 /*14*/].f_6, 1))
							{
								func_1490(iVar5, iVar0, uVar14[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, iVar0, func_226(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					uVar16 = { __LIB_0__::func_459(iVar5, 0) };
					func_1426(iParam0, iVar0, uVar16[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_1484(iParam0, 11, uVar14[11], iParam6, 0);
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
				func_1490(iVar5, 14, uVar18[iVar1], 1);
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
							func_1426(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_1490(iVar5, iParam1, iParam2, 1);
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			if (BitTest(Global_78130[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HAIR"), 1))
			{
			}
			else if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 1, joaat("HAIR_SHRINK")))
			{
				func_1426(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, iParam1, iParam2, -1) };
			}
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			func_1495(iParam0);
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
						func_1426(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = __LIB_9__::func_528(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_1426(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					iVar27 = func_1481(iVar5, iVar24, iVar23, iVar25);
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
							func_1426(iParam0, 8, iVar29, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_1426(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, iParam1, iParam2, -1) };
								iVar8 = -99;
							}
							else if (iVar30 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								func_1426(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_1426(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_1426(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_1426(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_F_Freemode_01"))
							{
								func_1426(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_1484(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_1481(iVar5, func_226(iParam0, 8, -1), iParam2, func_226(iParam0, 4, -1));
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
				func_1467(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar43 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar43, joaat("GLOVES"), 0))
			{
				iVar44 = __LIB_0__::func_350(iParam0, 11);
				iVar45 = __LIB_0__::func_350(iParam0, 4);
				iVar46 = func_1481(iVar5, iParam2, iVar44, iVar45);
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
			func_1484(iParam0, iParam1, iParam2, iParam6, 0);
			iVar49 = __LIB_0__::func_350(iParam0, 11);
			if (__LIB_0__::func_280(iVar5, iVar49, -1))
			{
				iVar50 = __LIB_0__::func_357(iVar5, iParam2, Global_78130[1 /*14*/].f_4);
				__LIB_6__::func_37(iVar5, iVar50);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_1481(iVar5, iParam2, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
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
						func_1426(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						func_1426(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_1481(iVar5, __LIB_0__::func_350(iParam0, 8), __LIB_0__::func_350(iParam0, 11), iParam2);
			}
			iVar59 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar59, joaat("GLOVES"), 0))
			{
				iVar60 = func_1481(iVar5, iVar58, iVar57, iParam2);
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
						func_1426(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
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
								iVar6 = func_1481(iVar5, iVar3, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = __LIB_9__::func_528(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_1426(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						if (!func_227(iParam0, 9, iVar63))
						{
							func_1426(iParam0, 9, iVar63, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_1426(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
					{
						func_1426(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					__LIB_6__::func_275(PLAYER::PLAYER_ID(), iVar64);
				}
			}
			if (iParam1 == 7)
			{
				if ((iVar5 == joaat("MP_M_Freemode_01") && iParam2 >= 92) || (iVar5 == joaat("MP_F_Freemode_01") && iParam2 >= 55))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("BIG_CHAIN"), 0))
					{
						func_1426(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("MP_F_Freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar65 = func_226(iParam0, 4, -1);
					iVar66 = iParam2;
				}
				else
				{
					iVar65 = iParam2;
					iVar66 = func_226(iParam0, 11, -1);
				}
				if (__LIB_0__::func_240(iVar5, 11, iVar66, -1))
				{
					if (!__LIB_0__::func_239(iVar5, 4, iVar65, -1))
					{
						if (__LIB_0__::func_353(iVar5, 4, iVar65, &uVar67))
						{
							func_1426(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (__LIB_0__::func_239(iVar5, 4, iVar65, -1))
				{
					if (__LIB_0__::func_352(iVar5, 4, iVar65, &uVar67))
					{
						func_1426(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_1426(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_1426(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_1426(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_1426(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_1426(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_1426(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_1426(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_1426(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				func_1495(iParam0);
				iVar81 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
				iVar82 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
				iVar83 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar81, iVar82);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar83, joaat("FORCE_PROP"), 0))
				{
					iVar3 = __LIB_9__::func_528(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_1426(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = __LIB_9__::func_528(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_1426(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_1427(iParam0, &uVar4))
		{
			func_1426(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_1426(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar8 != -99)
	{
		func_1426(iParam0, 8, iVar8, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_1426(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar10 != -1)
	{
		iVar84 = __LIB_0__::func_282(iVar5, func_226(iParam0, 3, -1), iVar10);
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
				func_1426(iParam0, 3, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_1427(int iParam0, var uParam1)//Position - 0x808E3
{
	int iVar0;
	int iVar1;
	*uParam1 = func_226(PLAYER::PLAYER_PED_ID(), 2, -1);
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
		if (!func_227(iParam0, iVar1, iVar0))
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

void func_1467(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x8B2DD
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
	func_1392(iParam0, bParam3, 0, -1);
}

int func_1481(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x92EFF
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
					iVar0 = func_1481(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
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
					iVar0 = func_1481(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
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

void func_1484(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x964AE
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (func_1486(iParam0))
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

int func_1486(int iParam0)//Position - 0x9663D
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
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != __LIB_0__::func_162() && __LIB_5__::func_799(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar1 = func_226(iParam0, 11, -1);
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
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != __LIB_0__::func_162() && __LIB_5__::func_799(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar3 = func_226(iParam0, 11, -1);
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

void func_1490(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x96A96
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
							func_1490(iParam0, __LIB_0__::func_33(iVar4), uVar3, 0);
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
									func_1490(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 3), 1);
								}
								else
								{
									func_1490(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 4), 1);
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
							func_1490(iParam0, 14, iVar8, 0);
						}
						else if (iParam2 >= 75 && iParam2 <= 82)
						{
							iVar8 = (83 + Global_78130[2 /*14*/].f_4);
							func_1490(iParam0, 14, iVar8, 0);
						}
					}
					else if (iParam1 == 8)
					{
						if (iParam2 >= 48 && iParam2 <= 63)
						{
							iVar8 = (64 + Global_78130[2 /*14*/].f_4);
							func_1490(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 64 && iParam2 <= 79)
						{
							iVar8 = (48 + Global_78130[2 /*14*/].f_4);
							func_1490(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 96 && iParam2 <= 111)
						{
							iVar8 = (112 + Global_78130[2 /*14*/].f_4);
							func_1490(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 112 && iParam2 <= 127)
						{
							iVar8 = (96 + Global_78130[2 /*14*/].f_4);
							func_1490(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 176 && iParam2 <= 191)
						{
							iVar8 = (160 + Global_78130[2 /*14*/].f_4);
							func_1490(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 160 && iParam2 <= 175)
						{
							iVar8 = (176 + Global_78130[2 /*14*/].f_4);
							func_1490(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 32 && iParam2 <= 47)
						{
							iVar8 = (0 + Global_78130[2 /*14*/].f_4);
							func_1490(iParam0, 11, iVar8, 0);
						}
						else if (iParam2 >= 224 && iParam2 <= 239)
						{
							iVar8 = (16 + Global_78130[2 /*14*/].f_4);
							func_1490(iParam0, 11, iVar8, 0);
						}
					}
					else if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar8 = (32 + Global_78130[2 /*14*/].f_4);
							func_1490(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 16 && iParam2 <= 31)
						{
							iVar8 = (224 + Global_78130[2 /*14*/].f_4);
							func_1490(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 220 && iParam2 <= 235)
						{
							switch (iParam2)
							{
								case 220:
									func_1490(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_0"), 8, 3), 0);
									func_1490(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_0"), 8, 3), 0);
									break;
								case 221:
									func_1490(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_1"), 8, 3), 0);
									func_1490(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_1"), 8, 3), 0);
									break;
								case 222:
									func_1490(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_2"), 8, 3), 0);
									func_1490(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_2"), 8, 3), 0);
									break;
								case 223:
									func_1490(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_3"), 8, 3), 0);
									func_1490(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_3"), 8, 3), 0);
									break;
								case 224:
									func_1490(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_4"), 8, 3), 0);
									func_1490(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_4"), 8, 3), 0);
									break;
								case 225:
									func_1490(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_5"), 8, 3), 0);
									func_1490(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_5"), 8, 3), 0);
									break;
								case 226:
									func_1490(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_6"), 8, 3), 0);
									func_1490(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_6"), 8, 3), 0);
									break;
								case 227:
									func_1490(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_7"), 8, 3), 0);
									func_1490(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_7"), 8, 3), 0);
									break;
								case 228:
									func_1490(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_8"), 8, 3), 0);
									func_1490(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_8"), 8, 3), 0);
									break;
								case 229:
									func_1490(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_9"), 8, 3), 0);
									func_1490(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_9"), 8, 3), 0);
									break;
								case 230:
									func_1490(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_10"), 8, 3), 0);
									func_1490(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_10"), 8, 3), 0);
									break;
								case 231:
									func_1490(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_11"), 8, 3), 0);
									func_1490(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_11"), 8, 3), 0);
									break;
								case 232:
									func_1490(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_12"), 8, 3), 0);
									func_1490(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_12"), 8, 3), 0);
									break;
								case 233:
									func_1490(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_13"), 8, 3), 0);
									func_1490(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_13"), 8, 3), 0);
									break;
								case 234:
									func_1490(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_14"), 8, 3), 0);
									func_1490(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_14"), 8, 3), 0);
									break;
								case 235:
									func_1490(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_15"), 8, 3), 0);
									func_1490(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_15"), 8, 3), 0);
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
									func_1490(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_0"), 7, 3), 0);
									func_1490(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_0"), 7, 3), 0);
									break;
								case 1:
									func_1490(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_1"), 7, 3), 0);
									func_1490(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_1"), 7, 3), 0);
									break;
								case 2:
									func_1490(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_2"), 7, 3), 0);
									func_1490(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_2"), 7, 3), 0);
									break;
								case 3:
									func_1490(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_3"), 7, 3), 0);
									func_1490(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_3"), 7, 3), 0);
									break;
								case 4:
									func_1490(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_4"), 7, 3), 0);
									func_1490(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_4"), 7, 3), 0);
									break;
								case 5:
									func_1490(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_5"), 7, 3), 0);
									func_1490(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_5"), 7, 3), 0);
									break;
								case 6:
									func_1490(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_6"), 7, 3), 0);
									func_1490(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_6"), 7, 3), 0);
									break;
								case 7:
									func_1490(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_7"), 7, 3), 0);
									func_1490(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_7"), 7, 3), 0);
									break;
								case 8:
									func_1490(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_8"), 7, 3), 0);
									func_1490(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_8"), 7, 3), 0);
									break;
								case 9:
									func_1490(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_9"), 7, 3), 0);
									func_1490(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_9"), 7, 3), 0);
									break;
								case 10:
									func_1490(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_10"), 7, 3), 0);
									func_1490(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_10"), 7, 3), 0);
									break;
								case 11:
									func_1490(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_11"), 7, 3), 0);
									func_1490(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_11"), 7, 3), 0);
									break;
								case 12:
									func_1490(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_12"), 7, 3), 0);
									func_1490(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_12"), 7, 3), 0);
									break;
								case 13:
									func_1490(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_13"), 7, 3), 0);
									func_1490(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_13"), 7, 3), 0);
									break;
								case 14:
									func_1490(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_14"), 7, 3), 0);
									func_1490(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_14"), 7, 3), 0);
									break;
								case 15:
									func_1490(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_15"), 7, 3), 0);
									func_1490(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_15"), 7, 3), 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_78130[2 /*14*/].f_4)
							{
								case 0:
									func_1490(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_0"), 7, 3), 0);
									func_1490(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_0"), 7, 3), 0);
									break;
								case 1:
									func_1490(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_1"), 7, 3), 0);
									func_1490(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_1"), 7, 3), 0);
									break;
								case 2:
									func_1490(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_2"), 7, 3), 0);
									func_1490(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_2"), 7, 3), 0);
									break;
								case 3:
									func_1490(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_3"), 7, 3), 0);
									func_1490(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_3"), 7, 3), 0);
									break;
								case 4:
									func_1490(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_4"), 7, 3), 0);
									func_1490(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_4"), 7, 3), 0);
									break;
								case 5:
									func_1490(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_5"), 7, 3), 0);
									func_1490(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_5"), 7, 3), 0);
									break;
								case 6:
									func_1490(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_6"), 7, 3), 0);
									func_1490(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_6"), 7, 3), 0);
									break;
								case 7:
									func_1490(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_7"), 7, 3), 0);
									func_1490(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_7"), 7, 3), 0);
									break;
								case 8:
									func_1490(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_8"), 7, 3), 0);
									func_1490(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_8"), 7, 3), 0);
									break;
								case 9:
									func_1490(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_9"), 7, 3), 0);
									func_1490(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_9"), 7, 3), 0);
									break;
								case 10:
									func_1490(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_10"), 7, 3), 0);
									func_1490(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_10"), 7, 3), 0);
									break;
								case 11:
									func_1490(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_11"), 7, 3), 0);
									func_1490(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_11"), 7, 3), 0);
									break;
								case 12:
									func_1490(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_12"), 7, 3), 0);
									func_1490(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_12"), 7, 3), 0);
									break;
								case 13:
									func_1490(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_13"), 7, 3), 0);
									func_1490(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_13"), 7, 3), 0);
									break;
								case 14:
									func_1490(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_14"), 7, 3), 0);
									func_1490(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_14"), 7, 3), 0);
									break;
								case 15:
									func_1490(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_15"), 7, 3), 0);
									func_1490(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_15"), 7, 3), 0);
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
							func_1490(iParam0, 8, iVar8, 0);
						}
					}
				}
				Global_78130[2 /*14*/] = { __LIB_6__::func_38(iParam0, iParam1, iParam2, -1) };
				if (iParam1 == 11)
				{
					iVar9 = __LIB_0__::func_358(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_1490(iParam0, 8, iVar9, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203)
					{
						switch (iParam2)
						{
							case 199:
								func_1490(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_0"), 7, 4), 0);
								break;
							case 200:
								func_1490(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_1"), 7, 4), 0);
								break;
							case 201:
								func_1490(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_2"), 7, 4), 0);
								break;
							}
					}
				}
				else if (iParam1 == 8)
				{
					iVar9 = __LIB_0__::func_357(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_1490(iParam0, 11, iVar9, 0);
					}
				}
			}
		}
	}
}

void func_1495(int iParam0)//Position - 0x98353
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
		if (!func_1500(iParam0, &bVar14, iVar9, iVar10, iVar12) || PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
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
		if (!func_1500(iParam0, &bVar14, iVar9, iVar10, iVar12))
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

int func_1500(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x98D1D
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
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAZ_MASK"), 0) && !__LIB_0__::func_348(iVar0, 14, func_226(iParam0, 14, 0), -1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_1506(int iParam0, int iParam1, int iParam2)//Position - 0x994DA
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
			func_1507(iParam0);
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
					if (__LIB_3__::func_343(ENTITY::GET_ENTITY_MODEL(iParam0), 7, func_226(iParam0, 7, -1), -1))
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

void func_1507(int iParam0)//Position - 0x996E6
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 77)
	{
		if (__LIB_3__::func_521(iParam0, iVar0, -1))
		{
			if (((((((((iVar0 == 0 || iVar0 == 1) || iVar0 == 3) || iVar0 == 4) || iVar0 == 5) || iVar0 == 6) || iVar0 == 7) || iVar0 == 8) || iVar0 == 10) || iVar0 == 11)
			{
				func_1508(iParam0, iVar0, -1, -1);
			}
		}
		iVar0++;
	}
}

void func_1508(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x9977B
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
					func_1426(iParam0, 2, __LIB_1__::func_360(2053, Global_78127, 0), 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				else
				{
					func_1426(iParam0, 2, __LIB_1__::func_360(753, Global_78127, 0), 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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

int func_1572(var uParam0, var uParam1)//Position - 0xA52C0
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
			func_297(&iVar2, &(uParam1->f_109), 4);
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
			func_1377(&(uParam1->f_2), PLAYER::PLAYER_ID(), 1, 0);
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

int func_1590(int iParam0, var uParam1)//Position - 0xA5DE3
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
	if (__LIB_8__::func_52())
	{
		return 1;
	}
	iVar0 = __LIB_3__::func_616();
	iVar1 = __LIB_6__::func_300();
	Var2 = { __LIB_7__::func_406(iParam0, iVar0) };
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_2))
	{
		if (func_1377(&(uParam1->f_2), PLAYER::PLAYER_ID(), 1, 0))
		{
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_2, __LIB_3__::func_921(iParam0, iVar0, iVar1), false, false, true);
			ENTITY::SET_ENTITY_HEADING(uParam1->f_2, __LIB_7__::func_299(iParam0, iVar0));
			ENTITY::SET_ENTITY_VISIBLE(uParam1->f_2, false, false);
		}
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
	{
		func_297(&iVar1, &(uParam1->f_109), 32);
		__LIB_3__::func_633(&(uParam1->f_109));
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam1->f_109, Var2, false, false, true);
		ENTITY::SET_ENTITY_HEADING(uParam1->f_109, __LIB_7__::func_405(iParam0, iVar0));
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

void func_1688(int iParam0, int iParam1)//Position - 0xAAB9A
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
	if (__LIB_7__::func_411(PLAYER::PLAYER_ID(), iParam0))
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
								if (((!__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar7)) && !__LIB_1__::func_907(bVar7, 1)) && !__LIB_6__::func_279(bVar7)) && !__LIB_3__::func_728(bVar7, 14))
								{
									bVar0 = true;
								}
							}
						}
						if (((((!bVar1 && __LIB_3__::func_234(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar7))) && !__LIB_1__::func_907(bVar7, 1)) && !__LIB_6__::func_279(bVar7)) && !__LIB_3__::func_728(bVar7, 14))
						{
							bVar1 = true;
						}
						if (!bVar1 && __LIB_3__::func_234(bVar7, PLAYER::PLAYER_ID()))
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
						__LIB_7__::func_493(iParam0, -1);
					}
					if (__LIB_3__::func_661(0, iParam1))
					{
						__LIB_7__::func_493(iParam0, -1);
					}
					else if (__LIB_3__::func_661(1, iParam1))
					{
						if (bVar1)
						{
							__LIB_6__::func_632(1);
							__LIB_7__::func_656(PLAYER::PLAYER_ID(), iParam0, Var6, 1, 0, 0, 0, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_1689(iParam0, 0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_6__::func_632(1);
							__LIB_7__::func_656(PLAYER::PLAYER_ID(), iParam0, Var6, 0, 0, 1, 0, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_1689(iParam0, 0);
					}
					Jump @652; //curOff = 633
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_1689(int iParam0, bool bParam1)//Position - 0xAAE29
{
	__LIB_7__::func_493(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
	if (bParam1)
	{
		__LIB_5__::func_457(2);
	}
}

char* func_1697(var uParam0, var uParam1, var uParam2)//Position - 0xAB12E
{
	int iVar0;
	bool bVar1;
	if (__LIB_1__::func_717())
	{
		return "";
	}
	if (__LIB_5__::func_434())
	{
		return "SI_ENTR_BLCK18A" /* GXT: You cannot enter the Kosatka while on call. You can cancel this via the Quick Join app on the phone. */;
	}
	if (BitTest(Global_1946250.f_4523, 3))
	{
		if (__LIB_6__::func_90(PLAYER::PLAYER_ID(), 240))
		{
			return "CAS_BLOCK_SUB" /* GXT: You cannot enter the Kosatka while holding the security case. */;
		}
	}
	if (__LIB_2__::func_606())
	{
		if (__LIB_6__::func_90(PLAYER::PLAYER_ID(), 242))
		{
			return "BAN_BLOCK_SUB" /* GXT: You cannot enter the Kosatka while holding the gold. */;
		}
		else if (__LIB_6__::func_90(PLAYER::PLAYER_ID(), 241))
		{
			return "JEW_BLOCK_SUB" /* GXT: You cannot enter the Kosatka while holding the diamonds. */;
		}
		else if (__LIB_6__::func_90(PLAYER::PLAYER_ID(), 240))
		{
			return "CAS_BLOCK_SUB" /* GXT: You cannot enter the Kosatka while holding the security case. */;
		}
		else if (__LIB_6__::func_90(PLAYER::PLAYER_ID(), 239))
		{
			return "VAN_BLOCK_SUB" /* GXT: You cannot enter the Kosatka while holding the antiques. */;
		}
	}
	iVar0 = __LIB_6__::func_726(0, 1);
	if (BitTest(Global_1946250.f_506, 0))
	{
		if (__LIB_2__::func_72(PLAYER::PLAYER_ID(), 0))
		{
			bVar1 = __LIB_0__::func_797();
			if (__LIB_6__::func_371(PLAYER::PLAYER_ID(), 0))
			{
				return "H4_SUB_KICKd" /* GXT: You no longer have access to the Kosatka as you became a Prospect. */;
			}
			else if (bVar1 != __LIB_0__::func_162() && __LIB_3__::func_673(bVar1))
			{
				return "H4_SUB_KICKa" /* GXT: You no longer have access to the Kosatka as you became an Associate. */;
			}
			else
			{
				return "H4_SUB_KICKb" /* GXT: You no longer have access to the Kosatka as you became a Bodyguard. */;
			}
		}
	}
	if (__LIB_1__::func_101(PLAYER::PLAYER_PED_ID()) && (PLAYER::PLAYER_ID() == iVar0 || __LIB_0__::func_797() == iVar0))
	{
		return "SUB_BLOCK_BALIS" /* GXT: You cannot enter the Kosatka whilst wearing the Ballistic Equipment. */;
	}
	if (__LIB_2__::func_906())
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("oppressor2")))
		{
		}
		else
		{
			return "BOUNTY_PROP_BLCK" /* GXT: You cannot enter whilst delivering a bounty. */;
		}
	}
	if (__LIB_3__::func_693() && !__LIB_3__::func_439(PLAYER::PLAYER_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("oppressor2")))
		{
		}
		else
		{
			return "NPC_BLOCK" /* GXT: You cannot enter with non-player characters in the vehicle. */;
		}
	}
	if (__LIB_3__::func_695())
	{
		return "SUB_BLOCK_PROS" /* GXT: You cannot enter the Kosatka with a prostitute. */;
	}
	if (__LIB_1__::func_613(PLAYER::PLAYER_ID()) == 3)
	{
		return "SUP_BLOCK_SUB" /* GXT: You cannot enter the Kosatka whilst carrying Supplies. */;
	}
	if (__LIB_1__::func_17(PLAYER::PLAYER_ID()) || __LIB_2__::func_711(PLAYER::PLAYER_ID(), 1, 0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("oppressor2")))
		{
		}
		else
		{
			return "SUB_MC_BLOCK_E" /* GXT: You cannot enter the Kosatka while active in a mission. */;
		}
	}
	if (Global_1835493 != 0)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("kosatka")) && !__LIB_0__::func_872(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1))
			{
				return "SUB_MC_BLOCK_V" /* GXT: You cannot enter the Kosatka while in a mission vehicle. */;
			}
		}
	}
	if (BitTest(Global_1946250.f_7, 9))
	{
		if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!__LIB_3__::func_684(PLAYER::PLAYER_PED_ID(), 1) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				return "H4_SUB_SUTAR" /* GXT: You cannot enter the Kosatka in this area. Move the Kosatka to a suitable area. */;
			}
		}
	}
	return "";
}

void func_1754(var uParam0, int iParam1)//Position - 0xAD427
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 730752/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 730743/*__LIB_0__::func_162*/;
			break;
		case 1:
			uParam0->f_30 = 730676/*__LIB_5__::func_506*/;
			break;
		case 2:
			uParam0->f_31 = 730350/*__LIB_5__::func_505*/;
			break;
		case 3:
			uParam0->f_34 = 730189/*__LIB_4__::func_4*/;
			break;
		case 4:
			uParam0->f_12 = 730177/*__LIB_4__::func_3*/;
			break;
		case 6:
			uParam0->f_32 = 730113/*__LIB_4__::func_2*/;
			break;
		case 11:
			uParam0->f_11 = 730104/*__LIB_0__::func_109*/;
			break;
		case 12:
			uParam0->f_33 = 729768/*__LIB_5__::func_869*/;
			break;
		case 14:
			uParam0->f_11 = 729759/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 729023/*__LIB_5__::func_504*/;
			break;
		case 8:
			uParam0->f_37 = 729015/*__LIB_0__::func_467*/;
			break;
		case 7:
			uParam0->f_36 = 729006/*__LIB_0__::func_114*/;
			break;
		case 79:
			*uParam0 = 728997/*__LIB_0__::func_114*/;
			break;
		case 72:
			uParam0->f_12 = 728985/*__LIB_3__::func_999*/;
			break;
		case 13:
			uParam0->f_2 = 728976/*__LIB_0__::func_109*/;
			break;
		case 15:
			uParam0->f_2 = 728897/*__LIB_31__::func_15*/;
			break;
		case 16:
			uParam0->f_5 = 728553/*__LIB_6__::func_732*/;
			break;
		case 108:
			uParam0->f_55 = 728544/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 728034/*__LIB_11__::func_903*/;
			break;
		case 19:
			uParam0->f_17 = 727980/*__LIB_6__::func_730*/;
			break;
		case 18:
			uParam0->f_8 = 727892/*__LIB_6__::func_638*/;
			break;
		case 20:
			uParam0->f_3 = 727872/*__LIB_5__::func_251*/;
			break;
		case 21:
			uParam0->f_3 = 727845/*__LIB_3__::func_997*/;
			break;
		case 74:
			uParam0->f_53 = 727823/*__LIB_3__::func_996*/;
			break;
		case 75:
			uParam0->f_4 = 727814/*__LIB_0__::func_114*/;
			break;
		case 22:
			uParam0->f_24 = 727712/*__LIB_6__::func_637*/;
			break;
		case 23:
			uParam0->f_26 = 727704/*__LIB_0__::func_467*/;
			break;
		case 26:
			uParam0->f_38 = 727696/*__LIB_0__::func_467*/;
			break;
		case 25:
			uParam0->f_23 = 726935/*func_1836*/;
			break;
		case 27:
			uParam0->f_25 = 726927/*__LIB_0__::func_467*/;
			break;
		case 28:
			uParam0->f_24 = 726919/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 726808/*__LIB_5__::func_250*/;
			break;
		case 31:
			uParam0->f_39 = 726759/*__LIB_3__::func_994*/;
			break;
		case 33:
			uParam0->f_40 = 726690/*__LIB_7__::func_303*/;
			break;
		case 76:
			uParam0->f_13 = 726667/*__LIB_3__::func_993*/;
			break;
		case 34:
			uParam0->f_41 = 722594/*__LIB_5__::func_868*/;
			break;
		case 36:
			uParam0->f_58 = 722537/*__LIB_3__::func_991*/;
			break;
		case 35:
			uParam0->f_42 = 716317/*__LIB_5__::func_966*/;
			break;
		case 45:
			uParam0->f_14 = 716308/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 716299/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 716291/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 716280/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 716176/*__LIB_3__::func_983*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 715109/*__LIB_10__::func_685*/;
			break;
		case 49:
			uParam0->f_8 = 715100/*__LIB_0__::func_114*/;
			break;
		case 50:
			*uParam0 = 714703/*__LIB_6__::func_729*/;
			break;
		case 51:
			*uParam0 = 714694/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 714684/*__LIB_3__::func_980*/;
			break;
		case 53:
			uParam0->f_13 = 714661/*__LIB_3__::func_979*/;
			break;
		case 54:
			uParam0->f_45 = 714167/*__LIB_5__::func_867*/;
			break;
		case 56:
			uParam0->f_46 = 714158/*__LIB_3__::func_969*/;
			break;
		case 57:
			uParam0->f_11 = 714149/*__LIB_1__::func_804*/;
			break;
		case 58:
			uParam0->f_13 = 714107/*__LIB_3__::func_978*/;
			break;
		case 59:
			*uParam0 = 714098/*__LIB_0__::func_114*/;
			break;
		case 60:
			*uParam0 = 714089/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 714078/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 714067/*__LIB_3__::func_554*/;
			break;
		case 63:
			uParam0->f_11 = 714058/*__LIB_1__::func_804*/;
			break;
		case 64:
			uParam0->f_47 = 714050/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 714042/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 713732/*__LIB_5__::func_246*/;
			break;
		case 67:
			uParam0->f_21 = 713662/*__LIB_3__::func_757*/;
			break;
		case 68:
			*uParam0 = 712973/*__LIB_5__::func_215*/;
			break;
		case 69:
			*uParam0 = 712964/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 712952/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 712943/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 712931/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 712922/*__LIB_0__::func_114*/;
			break;
		case 84:
			uParam0->f_1 = 712913/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 712904/*__LIB_0__::func_109*/;
			break;
		case 87:
			uParam0->f_1 = 712895/*__LIB_0__::func_109*/;
			break;
		case 88:
			uParam0->f_1 = 712886/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 712878/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 712853/*__LIB_3__::func_977*/;
			break;
		case 97:
			uParam0->f_1 = 712744/*__LIB_3__::func_976*/;
			break;
		case 98:
			uParam0->f_1 = 712033/*func_1765*/;
			break;
		case 100:
			uParam0->f_22 = 711369/*__LIB_4__::func_315*/;
			break;
		case 101:
			uParam0->f_22 = 711242/*__LIB_11__::func_953*/;
			break;
		case 112:
			uParam0->f_13 = 711230/*__LIB_5__::func_214*/;
			break;
		case 113:
			uParam0->f_3 = 711221/*__LIB_0__::func_114*/;
			break;
		case 114:
			uParam0->f_16 = 323998/*__LIB_5__::func_451*/;
			break;
		case 115:
			uParam0->f_3 = 711212/*__LIB_0__::func_114*/;
			break;
		case 116:
			*uParam0 = 711203/*__LIB_0__::func_114*/;
			break;
		case 117:
			uParam0->f_16 = 377933/*__LIB_3__::func_800*/;
			break;
		case 78:
			uParam0->f_59 = 711195/*__LIB_0__::func_467*/;
			break;
		case 124:
			uParam0->f_1 = 711186/*__LIB_0__::func_109*/;
			break;
		case 125:
			uParam0->f_19 = 711178/*__LIB_0__::func_467*/;
			break;
	}
}

int func_1765(var uParam0, var uParam1)//Position - 0xADD61
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
		func_1377(&(uParam1->f_140[2]), PLAYER::PLAYER_ID(), 1, 0);
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
	__LIB_6__::func_410(PLAYER::PLAYER_ID(), 0, 262144, 0);
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

void func_1836(int iParam0, int iParam1)//Position - 0xB1797
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
						bVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar5[iVar2]);
						Var8 = { __LIB_1__::func_696(bVar7) };
						if (!bVar0)
						{
							if ((iVar4 != -1 && iVar4 == __LIB_3__::func_106(&Var8)) || NETWORK::NETWORK_IS_FRIEND(&Var8))
							{
								if (((((!__LIB_1__::func_907(bVar7, 1) && !__LIB_6__::func_279(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar5[iVar2], true)) && !__LIB_1__::func_101(PLAYER::PLAYER_PED_ID())) && !__LIB_3__::func_728(bVar7, 14)) && !func_522(bVar7))
								{
									bVar0 = true;
								}
							}
						}
						if ((((((!bVar1 && __LIB_3__::func_234(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_6__::func_279(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar5[iVar2], true)) && !__LIB_1__::func_101(PLAYER::PLAYER_PED_ID())) && !__LIB_3__::func_728(bVar7, 14)) && !func_522(bVar7))
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
						__LIB_7__::func_303(iParam0, -1);
						MISC::SET_BIT(&(iParam1->f_2), 5);
					}
					else if (__LIB_3__::func_661(1, iParam1))
					{
						if (bVar1)
						{
							__LIB_7__::func_656(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 1, 0, 0, 0, -1, -1, -1);
						}
						__LIB_7__::func_617(iParam0);
						MISC::SET_BIT(&(iParam1->f_2), 5);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_7__::func_656(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 0, 0, 1, 0, -1, -1, -1);
						}
						__LIB_7__::func_617(iParam0);
						MISC::SET_BIT(&(iParam1->f_2), 5);
					}
					else if ((!bVar1 && !bVar0) && !func_1837())
					{
						MISC::SET_BIT(&(iParam1->f_2), 5);
						MISC::SET_BIT(&(iParam1->f_2), 6);
					}
					Jump @651; //curOff = 632
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
bool func_1837()//Position - 0xB1A25
{
	return BitTest(Global_1946250.f_3, 2);
}

void func_1878(var uParam0, int iParam1)//Position - 0xB2689
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 739065/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 739056/*__LIB_0__::func_162*/;
			break;
		case 1:
			uParam0->f_30 = 738985/*__LIB_5__::func_511*/;
			break;
		case 2:
			uParam0->f_31 = 738747/*__LIB_5__::func_510*/;
			break;
		case 3:
			uParam0->f_34 = 738696/*__LIB_4__::func_25*/;
			break;
		case 4:
			uParam0->f_12 = 738684/*__LIB_4__::func_24*/;
			break;
		case 6:
			uParam0->f_32 = 738620/*__LIB_4__::func_23*/;
			break;
		case 11:
			uParam0->f_11 = 738611/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 738171/*__LIB_5__::func_509*/;
			break;
		case 14:
			uParam0->f_11 = 738162/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 737488/*__LIB_5__::func_508*/;
			break;
		case 8:
			uParam0->f_37 = 737480/*__LIB_0__::func_467*/;
			break;
		case 7:
			uParam0->f_36 = 737471/*__LIB_0__::func_114*/;
			break;
		case 79:
			*uParam0 = 737462/*__LIB_0__::func_114*/;
			break;
		case 13:
			uParam0->f_2 = 737400/*__LIB_30__::func_466*/;
			break;
		case 15:
			uParam0->f_2 = 737320/*__LIB_31__::func_16*/;
			break;
		case 16:
			uParam0->f_5 = 736951/*__LIB_6__::func_734*/;
			break;
		case 108:
			uParam0->f_55 = 736942/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 736930/*__LIB_3__::func_860*/;
			break;
		case 19:
			uParam0->f_17 = 736918/*__LIB_3__::func_860*/;
			break;
		case 20:
			uParam0->f_3 = 736909/*__LIB_0__::func_114*/;
			break;
		case 21:
			uParam0->f_3 = 736900/*__LIB_0__::func_114*/;
			break;
		case 74:
			uParam0->f_53 = 736878/*__LIB_4__::func_18*/;
			break;
		case 75:
			uParam0->f_4 = 736869/*__LIB_0__::func_114*/;
			break;
		case 22:
			uParam0->f_24 = 736857/*__LIB_4__::func_17*/;
			break;
		case 23:
			uParam0->f_26 = 736849/*__LIB_0__::func_467*/;
			break;
		case 26:
			uParam0->f_38 = 736841/*__LIB_0__::func_467*/;
			break;
		case 25:
			uParam0->f_23 = 736833/*__LIB_0__::func_467*/;
			break;
		case 27:
			uParam0->f_25 = 736825/*__LIB_0__::func_467*/;
			break;
		case 28:
			uParam0->f_24 = 736817/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 736782/*__LIB_5__::func_226*/;
			break;
		case 31:
			uParam0->f_39 = 736752/*__LIB_3__::func_775*/;
			break;
		case 33:
			uParam0->f_40 = 736682/*__LIB_7__::func_304*/;
			break;
		case 76:
			uParam0->f_13 = 736659/*__LIB_4__::func_16*/;
			break;
		case 34:
			uParam0->f_41 = 736563/*__LIB_4__::func_15*/;
			break;
		case 36:
			uParam0->f_58 = 736518/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 734005/*__LIB_5__::func_507*/;
			break;
		case 45:
			uParam0->f_14 = 733996/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 733987/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 733979/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 733968/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 733928/*__LIB_4__::func_13*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 733820/*__LIB_5__::func_802*/;
			break;
		case 49:
			uParam0->f_8 = 733811/*__LIB_0__::func_114*/;
			break;
		case 50:
			*uParam0 = 733608/*__LIB_6__::func_733*/;
			break;
		case 51:
			*uParam0 = 733599/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 733588/*__LIB_4__::func_12*/;
			break;
		case 53:
			uParam0->f_13 = 733565/*__LIB_4__::func_11*/;
			break;
		case 54:
			uParam0->f_45 = 733557/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 733548/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 733535/*__LIB_4__::func_10*/;
			break;
		case 58:
			uParam0->f_13 = 733493/*__LIB_4__::func_9*/;
			break;
		case 59:
			*uParam0 = 733484/*__LIB_0__::func_114*/;
			break;
		case 60:
			*uParam0 = 733475/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 733464/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 733453/*__LIB_3__::func_554*/;
			break;
		case 63:
			uParam0->f_11 = 733444/*__LIB_1__::func_804*/;
			break;
		case 64:
			uParam0->f_47 = 733436/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 733428/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 733195/*__LIB_4__::func_8*/;
			break;
		case 67:
			uParam0->f_21 = 733125/*__LIB_3__::func_757*/;
			break;
		case 68:
			*uParam0 = 732436/*__LIB_5__::func_215*/;
			break;
		case 69:
			*uParam0 = 732427/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 732415/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 732406/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 732394/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 732385/*__LIB_0__::func_114*/;
			break;
		case 84:
			uParam0->f_1 = 732376/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 732367/*__LIB_0__::func_109*/;
			break;
		case 87:
			uParam0->f_1 = 732358/*__LIB_0__::func_109*/;
			break;
		case 88:
			uParam0->f_1 = 732349/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 732341/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 732332/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 732323/*__LIB_0__::func_109*/;
			break;
		case 98:
			uParam0->f_1 = 732314/*__LIB_0__::func_109*/;
			break;
		case 100:
			uParam0->f_22 = 732306/*__LIB_0__::func_467*/;
			break;
		case 101:
			uParam0->f_22 = 732298/*__LIB_0__::func_467*/;
			break;
		case 112:
			uParam0->f_13 = 732286/*__LIB_5__::func_214*/;
			break;
		case 113:
			uParam0->f_3 = 732277/*__LIB_0__::func_114*/;
			break;
		case 114:
			uParam0->f_16 = 323998/*__LIB_5__::func_451*/;
			break;
		case 115:
			uParam0->f_3 = 732268/*__LIB_0__::func_114*/;
			break;
		case 116:
			*uParam0 = 732259/*__LIB_0__::func_114*/;
			break;
		case 117:
			uParam0->f_16 = 377933/*__LIB_3__::func_800*/;
			break;
		case 78:
			uParam0->f_59 = 732251/*__LIB_0__::func_467*/;
			break;
		case 124:
			uParam0->f_1 = 732242/*__LIB_0__::func_109*/;
			break;
		case 125:
			uParam0->f_19 = 732234/*__LIB_0__::func_467*/;
			break;
	}
}

void func_1972(var uParam0, int iParam1)//Position - 0xB4702
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 818455/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 818441/*__LIB_7__::func_310*/;
			break;
		case 1:
			uParam0->f_30 = 818285/*__LIB_5__::func_529*/;
			break;
		case 2:
			uParam0->f_31 = 817803/*__LIB_5__::func_528*/;
			break;
		case 3:
			uParam0->f_34 = 817604/*__LIB_4__::func_98*/;
			break;
		case 4:
			uParam0->f_12 = 817482/*__LIB_4__::func_97*/;
			break;
		case 5:
			uParam0->f_11 = 817472/*__LIB_4__::func_96*/;
			break;
		case 37:
			uParam0->f_18 = 817334/*__LIB_4__::func_95*/;
			break;
		case 38:
			uParam0->f_9 = 817289/*__LIB_7__::func_309*/;
			break;
		case 42:
			uParam0->f_10 = 817205/*__LIB_7__::func_417*/;
			break;
		case 6:
			uParam0->f_32 = 817111/*__LIB_4__::func_94*/;
			break;
		case 11:
			uParam0->f_11 = 817102/*__LIB_1__::func_804*/;
			break;
		case 12:
			uParam0->f_33 = 815924/*__LIB_10__::func_538*/;
			break;
		case 14:
			uParam0->f_11 = 815915/*__LIB_0__::func_114*/;
			break;
		case 109:
			uParam0->f_56 = 809369/*__LIB_6__::func_645*/;
			break;
		case 8:
			uParam0->f_37 = 809069/*__LIB_4__::func_92*/;
			break;
		case 7:
			uParam0->f_36 = 809012/*__LIB_4__::func_91*/;
			break;
		case 79:
			*uParam0 = 808768/*__LIB_5__::func_527*/;
			break;
		case 13:
			uParam0->f_2 = 808706/*__LIB_30__::func_466*/;
			break;
		case 15:
			uParam0->f_2 = 808626/*__LIB_31__::func_17*/;
			break;
		case 16:
			uParam0->f_5 = 807906/*__LIB_12__::func_454*/;
			break;
		case 108:
			uParam0->f_55 = 804715/*__LIB_40__::func_816*/;
			break;
		case 17:
			uParam0->f_17 = 802406/*func_2182*/;
			break;
		case 19:
			uParam0->f_17 = 802379/*__LIB_5__::func_971*/;
			break;
		case 20:
			uParam0->f_3 = 802203/*__LIB_6__::func_643*/;
			break;
		case 21:
			uParam0->f_3 = 802139/*__LIB_5__::func_798*/;
			break;
		case 74:
			uParam0->f_53 = 802035/*__LIB_6__::func_77*/;
			break;
		case 75:
			uParam0->f_4 = 802019/*__LIB_5__::func_526*/;
			break;
		case 22:
			uParam0->f_24 = 801916/*__LIB_6__::func_642*/;
			break;
		case 23:
			uParam0->f_26 = 801869/*__LIB_4__::func_89*/;
			break;
		case 24:
			uParam0->f_26 = 801832/*__LIB_4__::func_88*/;
			break;
		case 26:
			uParam0->f_38 = 799789/*func_2162*/;
			break;
		case 25:
			uParam0->f_23 = 799467/*func_2160*/;
			break;
		case 30:
			uParam0->f_8 = 798610/*__LIB_7__::func_308*/;
			break;
		case 31:
			uParam0->f_39 = 798472/*__LIB_5__::func_257*/;
			break;
		case 33:
			uParam0->f_40 = 797900/*__LIB_7__::func_307*/;
			break;
		case 32:
			*uParam0 = 797615/*__LIB_7__::func_415*/;
			break;
		case 34:
			uParam0->f_41 = 795129/*__LIB_5__::func_872*/;
			break;
		case 36:
			uParam0->f_58 = 795072/*__LIB_4__::func_85*/;
			break;
		case 35:
			uParam0->f_42 = 767955/*__LIB_5__::func_524*/;
			break;
		case 45:
			uParam0->f_14 = 767946/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 767937/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 767929/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 767906/*__LIB_4__::func_82*/;
			break;
		case 47:
			uParam0->f_43 = 767834/*__LIB_5__::func_523*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 767706/*__LIB_5__::func_871*/;
			break;
		case 49:
			uParam0->f_8 = 767680/*__LIB_4__::func_80*/;
			break;
		case 50:
			*uParam0 = 766993/*__LIB_7__::func_498*/;
			break;
		case 51:
			*uParam0 = 766723/*__LIB_22__::func_281*/;
			break;
		case 52:
			uParam0->f_15 = 766712/*__LIB_4__::func_76*/;
			break;
		case 53:
			uParam0->f_13 = 766550/*__LIB_4__::func_75*/;
			break;
		case 54:
			uParam0->f_45 = 766026/*func_2121*/;
			break;
		case 56:
			uParam0->f_46 = 766008/*__LIB_3__::func_763*/;
			break;
		case 57:
			uParam0->f_11 = 765756/*__LIB_7__::func_414*/;
			break;
		case 58:
			uParam0->f_13 = 765594/*__LIB_4__::func_73*/;
			break;
		case 59:
			*uParam0 = 765098/*__LIB_7__::func_497*/;
			break;
		case 60:
			*uParam0 = 765083/*__LIB_7__::func_306*/;
			break;
		case 61:
			uParam0->f_15 = 765072/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 764910/*__LIB_4__::func_69*/;
			break;
		case 55:
			uParam0->f_45 = 764731/*__LIB_7__::func_305*/;
			break;
		case 63:
			uParam0->f_11 = 764704/*__LIB_11__::func_650*/;
			break;
		case 64:
			uParam0->f_47 = 763169/*__LIB_5__::func_970*/;
			break;
		case 65:
			uParam0->f_21 = 761782/*__LIB_7__::func_539*/;
			break;
		case 66:
			uParam0->f_21 = 761423/*__LIB_5__::func_254*/;
			break;
		case 67:
			uParam0->f_21 = 761309/*__LIB_4__::func_64*/;
			break;
		case 68:
			*uParam0 = 760349/*__LIB_7__::func_413*/;
			break;
		case 69:
			*uParam0 = 760340/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 760328/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 759784/*__LIB_4__::func_62*/;
			break;
		case 107:
			uParam0->f_50 = 759772/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 759584/*__LIB_5__::func_870*/;
			break;
		case 84:
			uParam0->f_1 = 759575/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 757989/*func_2081*/;
			break;
		case 87:
			uParam0->f_1 = 756473/*__LIB_6__::func_418*/;
			break;
		case 88:
			uParam0->f_1 = 756464/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 756456/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 756426/*__LIB_5__::func_519*/;
			break;
		case 97:
			uParam0->f_1 = 755981/*__LIB_5__::func_518*/;
			break;
		case 98:
			uParam0->f_1 = 750169/*__LIB_8__::func_65*/;
			break;
		case 100:
			uParam0->f_22 = 741719/*__LIB_7__::func_495*/;
			break;
		case 101:
			uParam0->f_22 = 740797/*__LIB_12__::func_161*/;
			break;
		case 112:
			uParam0->f_13 = 740786/*__LIB_3__::func_554*/;
			break;
		case 113:
			uParam0->f_3 = 740777/*__LIB_0__::func_114*/;
			break;
		case 114:
			uParam0->f_16 = 740768/*__LIB_0__::func_114*/;
			break;
		case 117:
			uParam0->f_16 = 740759/*__LIB_0__::func_114*/;
			break;
		case 78:
			uParam0->f_59 = 740587/*__LIB_6__::func_294*/;
			break;
		case 76:
			uParam0->f_13 = 740564/*__LIB_4__::func_29*/;
			break;
	}
}

int func_2081(int iParam0, var uParam1)//Position - 0xB90E5
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
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
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
			func_297(&iVar0, &(uParam1->f_109), 60);
			__LIB_3__::func_633(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_214(&iVar0, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 1, 0, 1))
		{
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
		}
		else
		{
			return 0;
		}
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(uParam1->f_109), &(uParam1->f_189[0 /*3*/]), &(uParam1->f_189[1 /*3*/]));
		__LIB_4__::func_61(iParam0, &Var1, &Var3, &fVar9, 1);
		__LIB_4__::func_61(iParam0, &Var2, &Var4, &fVar10, 0);
		__LIB_4__::func_60(iParam0, &Var5, &Var7, &fVar11, 1);
		__LIB_4__::func_60(iParam0, &Var6, &Var8, &fVar12, 0);
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
		__LIB_7__::func_533(&(Global_1946250.f_3638), Var1, Var3, fVar9, Var2, Var4, fVar10, bVar13, Var5, Var7, fVar11, Var6, Var8, fVar12, bVar14, 1056964608, 1036831949);
	}
	return 1;
}

void func_2121(int iParam0, var uParam1, int* iParam2, var uParam3, var uParam4)//Position - 0xBB04A
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	struct<13> Var3;
	int iVar4;
	struct<3> Var5;
	int iVar6;
	bVar0 = false;
	if (!__LIB_6__::func_94(PLAYER::PLAYER_ID(), __LIB_4__::func_71(iParam0)) && !__LIB_6__::func_94(__LIB_0__::func_797(), __LIB_4__::func_71(iParam0)))
	{
		iVar2 = 0;
		while (iVar2 < 32)
		{
			bVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
			if (__LIB_1__::func_693(bVar1, 1, 1) && bVar1 != PLAYER::PLAYER_ID())
			{
				if (__LIB_6__::func_94(bVar1, __LIB_4__::func_71(iParam0)) && __LIB_6__::func_387(bVar1))
				{
					Var3 = { __LIB_1__::func_696(bVar1) };
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
								func_2122(iParam2, 18);
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
void func_2122(var uParam0, int iParam1)//Position - 0xBB1C3
{
	int iVar0;
	if (HUD::DOES_BLIP_EXIST(*uParam0))
	{
		iVar0 = __LIB_1__::func_389(iParam1);
		HUD::SET_BLIP_COLOUR(*uParam0, iVar0);
	}
}

void func_2160(int iParam0, int iParam1)//Position - 0xC32EB
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	Var2 = { __LIB_4__::func_67(iParam0, 0) };
	if (__LIB_6__::func_643(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_521(iParam0, Var2, &bVar0, &bVar1, 1, 0);
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
			__LIB_7__::func_307(iParam0, -1);
		}
		if (__LIB_3__::func_661(0, iParam1))
		{
			__LIB_7__::func_307(iParam0, -1);
		}
		else if (__LIB_3__::func_661(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_7__::func_656(PLAYER::PLAYER_ID(), iParam0, Var2, 1, 0, 0, 0, -1, -1, -1);
			}
			__LIB_7__::func_618(iParam0);
		}
		else if (__LIB_3__::func_661(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_7__::func_656(PLAYER::PLAYER_ID(), iParam0, Var2, 0, 0, 1, 0, -1, -1, -1);
			}
			__LIB_7__::func_618(iParam0);
		}
	}
	else
	{
		__LIB_5__::func_189(iParam1, 1, 0);
		__LIB_5__::func_189(iParam1, 2, 0);
	}
}

void func_2162(var uParam0, var uParam1)//Position - 0xC342D
{
	if (__LIB_3__::func_616() == 3)
	{
		func_2166(uParam0, uParam1);
	}
	else if (__LIB_2__::func_72(PLAYER::PLAYER_ID(), 0) && __LIB_6__::func_94(__LIB_2__::func_39(PLAYER::PLAYER_ID()), __LIB_4__::func_71(*uParam0)))
	{
		__LIB_6__::func_462(uParam0, uParam1);
	}
	else if (__LIB_3__::func_616() == 2)
	{
		func_2164(uParam0, uParam1);
	}
	else
	{
		__LIB_4__::func_87(uParam1);
	}
}

void func_2164(var uParam0, var uParam1)//Position - 0xC34B6
{
	int iVar0;
	int iVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_521(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, 1, 0);
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
			__LIB_7__::func_307(*uParam0, -1);
			__LIB_5__::func_462();
		}
	}
}

void func_2166(var uParam0, var uParam1)//Position - 0xC35D4
{
	int iVar0;
	iVar0 = __LIB_3__::func_785();
	switch (iVar0)
	{
		case 0:
			__LIB_10__::func_997(uParam0, uParam1);
			break;
		case 1:
			func_2171(uParam0, uParam1);
			break;
		case 2:
			__LIB_31__::func_608(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_2171(var uParam0, var uParam1)//Position - 0xC3955
{
	int iVar0;
	int iVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_521(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, 1, 0);
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
		if (__LIB_7__::func_992(*uParam0))
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
			__LIB_7__::func_307(*uParam0, -1);
			__LIB_5__::func_462();
		}
	}
}

char* func_2182(int iParam0, var uParam1, int iParam2)//Position - 0xC3E66
{
	int iVar0;
	var uVar1;
	struct<3> Var2;
	struct<3> Var3;
	float fVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return "";
	}
	if (__LIB_5__::func_434())
	{
		return "SI_ENTR_BLCK1A" /* GXT: You cannot enter the Arcade while on call. You can cancel this via the Quick Join app on the phone. */;
	}
	if (__LIB_1__::func_907(PLAYER::PLAYER_ID(), 0))
	{
		iVar0 = __LIB_5__::func_185(PLAYER::PLAYER_ID());
		if (PLAYER::PLAYER_ID() != __LIB_0__::func_162())
		{
			switch (iVar0)
			{
				case 192:
					return "ARC_P_BLCK_A" /* GXT: You can't enter the Arcade while resupplying another business. */;
				case 190:
					return "ARC_P_BLCK_B" /* GXT: You can't enter the Arcade while selling goods from another business. */;
				case 167:
					return "ARC_P_BLCK_C" /* GXT: You can't enter the Arcade while acquiring goods for a Warehouse. */;
				case 168:
					return "ARC_P_BLCK_D" /* GXT: You can't enter the Arcade while selling goods from a Warehouse. */;
				case 178:
					return "ARC_P_BLCK_E" /* GXT: You can't enter the Arcade while acquiring a vehicle for a Warehouse. */;
				case 188:
					return "ARC_P_BLCK_F" /* GXT: You can't enter the Arcade while selling vehicles from a Warehouse. */;
				case 225:
					return "ARC_P_BLCK_G" /* GXT: You can't enter the Arcade while acquiring goods for a Bunker. */;
				case 226:
					return "ARC_P_BLCK_H" /* GXT: You can't enter the Arcade while selling goods from a Bunker. */;
				case 229:
					return "ARC_P_BLCK_I" /* GXT: You can't enter the Arcade while acquiring goods for a Hangar. */;
				case 230:
					return "ARC_P_BLCK_J" /* GXT: You can't enter the Arcade while selling goods from a Hangar. */;
				case 237:
					return "ARC_P_BLCK_O" /* GXT: You can't enter the Arcade while taking part in Nightclub business. */;
				case 243:
					return "ARC_P_BLCK_P" /* GXT: You can't enter the Arcade while working for Ms. Baker. */;
				case 158:
					if (__LIB_2__::func_106(PLAYER::PLAYER_ID()))
					{
						return "";
					}
					break;
				}
			}
	}
	if (iParam2 == 1 || iParam2 == 2)
	{
		if (__LIB_6__::func_94(PLAYER::PLAYER_ID(), __LIB_4__::func_71(iParam0)))
		{
			__LIB_5__::func_260(iParam0, &uVar1, &Var2, &Var3, &fVar4, &uVar5, iParam2);
			if ((!__LIB_6__::func_387(PLAYER::PLAYER_ID()) && __LIB_0__::func_121(PLAYER::PLAYER_PED_ID())) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var2, Var3, fVar4, false, false, 0))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || __LIB_0__::func_336(PLAYER::PLAYER_PED_ID(), 0) == -1)
				{
					return "ARC_P_BLCK_SU" /* GXT: The Garage will become accessible once the Arcade is setup. */;
				}
			}
		}
	}
	if (__LIB_3__::func_695())
	{
		return "ARC_P_BLCK_K" /* GXT: You can't enter the Arcade with a prostitute. */;
	}
	if (__LIB_2__::func_906())
	{
		return "BOUNTY_PROP_BLCK" /* GXT: You cannot enter whilst delivering a bounty. */;
	}
	if (__LIB_3__::func_694(PLAYER::PLAYER_ID()))
	{
		return "ARC_P_BLCK_L" /* GXT: You can't access the Arcade as the Beast. */;
	}
	if (__LIB_3__::func_693() && !__LIB_3__::func_439(PLAYER::PLAYER_ID()))
	{
		if ((__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && __LIB_5__::func_187(PLAYER::PLAYER_ID(), -1))
		{
			return "NPC_BLOCK" /* GXT: You cannot enter with non-player characters in the vehicle. */;
		}
	}
	if (__LIB_1__::func_101(PLAYER::PLAYER_PED_ID()) && __LIB_6__::func_92(PLAYER::PLAYER_ID()))
	{
		return "ARC_P_BLCK_M" /* GXT: You can't access the Arcade whilst wearing the Ballistic Equipment. */;
	}
	if ((__LIB_6__::func_92(PLAYER::PLAYER_ID()) && __LIB_1__::func_17(PLAYER::PLAYER_ID())) && __LIB_3__::func_439(PLAYER::PLAYER_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (__LIB_5__::func_187(PLAYER::PLAYER_ID(), -1))
			{
				return "ARC_P_BLCK_N" /* GXT: You can't enter the Arcade while taking part in a Business Battle. */;
			}
		}
		else
		{
			return "ARC_P_BLCK_N" /* GXT: You can't enter the Arcade while taking part in a Business Battle. */;
		}
	}
	if (__LIB_6__::func_92(PLAYER::PLAYER_ID()) && !__LIB_5__::func_873(PLAYER::PLAYER_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar8 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			iVar9 = __LIB_3__::func_392(iVar8, &uVar7, &uVar6);
			iVar10 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar8, -1, false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar10))
			{
				iVar11 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar10);
				if (__LIB_5__::func_187(PLAYER::PLAYER_ID(), -1))
				{
					if (!__LIB_6__::func_279(PLAYER::PLAYER_ID()))
					{
						if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iVar8))
						{
							iVar12 = ENTITY::GET_ENTITY_ATTACHED_TO(iVar8);
							if ((__LIB_0__::func_121(iVar12) && !__LIB_1__::func_590(ENTITY::GET_ENTITY_MODEL(iVar8))) && !__LIB_3__::func_690(iVar8))
							{
								return "PROP_BLOCK_TRAIL" /* GXT: Unable to enter garage. Please detach trailer. */;
							}
							else
							{
								return "ARC_P_BLCK_Q" /* GXT: You can't enter the Arcade with this vehicle. */;
							}
						}
						else if (__LIB_3__::func_690(iVar8))
						{
							return "ARC_P_BLCK_R" /* GXT: You can't enter the Arcade with the Mobile Operations Center. */;
						}
						else if ((((((__LIB_1__::func_589(iVar8) || __LIB_1__::func_819(ENTITY::GET_ENTITY_MODEL(iVar8))) || !__LIB_3__::func_561(ENTITY::GET_ENTITY_MODEL(iVar8), 22)) || __LIB_1__::func_590(ENTITY::GET_ENTITY_MODEL(iVar8))) || __LIB_1__::func_588(iVar8)) || __LIB_3__::func_689(iVar8)) || (__LIB_0__::func_872(iVar8, 1) && iVar9 != iVar11))
						{
							if (__LIB_1__::func_590(ENTITY::GET_ENTITY_MODEL(iVar8)) && ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar8))
							{
								return "";
							}
							else
							{
								return "ARC_P_BLCK_Q" /* GXT: You can't enter the Arcade with this vehicle. */;
							}
						}
						else if (__LIB_0__::func_121(iVar8) && ENTITY::GET_ENTITY_MODEL(iVar8) == joaat("rcbandito"))
						{
							return "ARC_P_BLCK_T" /* GXT: You can't enter the Arcade with the RC Bandito. */;
						}
					}
				}
			}
		}
	}
	return "";
}

void func_2230(var uParam0, int iParam1)//Position - 0xC7D20
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 834674/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 834665/*__LIB_0__::func_162*/;
			break;
		case 1:
			uParam0->f_30 = 834597/*__LIB_5__::func_536*/;
			break;
		case 2:
			uParam0->f_31 = 834149/*__LIB_5__::func_535*/;
			break;
		case 3:
			uParam0->f_34 = 834044/*__LIB_4__::func_120*/;
			break;
		case 4:
			uParam0->f_12 = 834031/*__LIB_4__::func_119*/;
			break;
		case 6:
			uParam0->f_32 = 833967/*__LIB_4__::func_118*/;
			break;
		case 11:
			uParam0->f_11 = 833958/*__LIB_1__::func_804*/;
			break;
		case 12:
			uParam0->f_33 = 833497/*__LIB_5__::func_534*/;
			break;
		case 14:
			uParam0->f_11 = 833488/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 833097/*__LIB_5__::func_533*/;
			break;
		case 8:
			uParam0->f_37 = 833089/*__LIB_0__::func_467*/;
			break;
		case 7:
			uParam0->f_36 = 833080/*__LIB_0__::func_114*/;
			break;
		case 79:
			*uParam0 = 833056/*__LIB_5__::func_265*/;
			break;
		case 13:
			uParam0->f_2 = 832994/*__LIB_30__::func_466*/;
			break;
		case 15:
			uParam0->f_2 = 832915/*__LIB_31__::func_18*/;
			break;
		case 16:
			uParam0->f_5 = 832618/*__LIB_6__::func_738*/;
			break;
		case 108:
			uParam0->f_55 = 832609/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 832597/*__LIB_3__::func_860*/;
			break;
		case 19:
			uParam0->f_17 = 832570/*__LIB_5__::func_973*/;
			break;
		case 20:
			uParam0->f_3 = 832561/*__LIB_0__::func_114*/;
			break;
		case 21:
			uParam0->f_3 = 832552/*__LIB_0__::func_114*/;
			break;
		case 74:
			uParam0->f_53 = 832530/*__LIB_4__::func_18*/;
			break;
		case 75:
			uParam0->f_4 = 832521/*__LIB_0__::func_114*/;
			break;
		case 22:
			uParam0->f_24 = 832513/*__LIB_0__::func_467*/;
			break;
		case 23:
			uParam0->f_26 = 832505/*__LIB_0__::func_467*/;
			break;
		case 26:
			uParam0->f_38 = 832497/*__LIB_0__::func_467*/;
			break;
		case 25:
			uParam0->f_23 = 832165/*func_2302*/;
			break;
		case 27:
			uParam0->f_25 = 832157/*__LIB_0__::func_467*/;
			break;
		case 28:
			uParam0->f_24 = 832149/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 831828/*__LIB_6__::func_737*/;
			break;
		case 31:
			uParam0->f_39 = 831798/*__LIB_3__::func_775*/;
			break;
		case 33:
			uParam0->f_40 = 831729/*__LIB_7__::func_303*/;
			break;
		case 34:
			uParam0->f_41 = 827997/*__LIB_5__::func_264*/;
			break;
		case 36:
			uParam0->f_58 = 827952/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 824785/*__LIB_5__::func_532*/;
			break;
		case 45:
			uParam0->f_14 = 824776/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 824767/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 824759/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 824748/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 824640/*__LIB_4__::func_113*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 823525/*__LIB_7__::func_418*/;
			break;
		case 49:
			uParam0->f_8 = 823516/*__LIB_0__::func_114*/;
			break;
		case 50:
			*uParam0 = 823507/*__LIB_0__::func_114*/;
			break;
		case 51:
			*uParam0 = 823498/*__LIB_0__::func_114*/;
			break;
		case 52:
			uParam0->f_15 = 823487/*__LIB_4__::func_112*/;
			break;
		case 53:
			uParam0->f_13 = 823476/*__LIB_3__::func_554*/;
			break;
		case 54:
			uParam0->f_45 = 823468/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 823459/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 823450/*__LIB_1__::func_804*/;
			break;
		case 58:
			uParam0->f_13 = 823408/*__LIB_4__::func_111*/;
			break;
		case 59:
			*uParam0 = 823399/*__LIB_0__::func_114*/;
			break;
		case 60:
			*uParam0 = 823390/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 823379/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 823368/*__LIB_3__::func_554*/;
			break;
		case 63:
			uParam0->f_11 = 823359/*__LIB_1__::func_804*/;
			break;
		case 64:
			uParam0->f_47 = 823351/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 823343/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 823040/*__LIB_5__::func_263*/;
			break;
		case 67:
			uParam0->f_21 = 822970/*__LIB_3__::func_757*/;
			break;
		case 68:
			*uParam0 = 822321/*__LIB_5__::func_262*/;
			break;
		case 69:
			*uParam0 = 822312/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 822304/*__LIB_0__::func_467*/;
			break;
		case 71:
			uParam0->f_49 = 822295/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 822283/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 821849/*__LIB_6__::func_308*/;
			break;
		case 18:
			uParam0->f_8 = 821824/*__LIB_4__::func_110*/;
			break;
		case 84:
			uParam0->f_1 = 821807/*__LIB_5__::func_874*/;
			break;
		case 85:
			uParam0->f_1 = 821265/*func_2252*/;
			break;
		case 87:
			uParam0->f_1 = 820224/*__LIB_6__::func_799*/;
			break;
		case 88:
			uParam0->f_1 = 820215/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 820207/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 820198/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 820189/*__LIB_0__::func_109*/;
			break;
		case 98:
			uParam0->f_1 = 820180/*__LIB_0__::func_109*/;
			break;
		case 100:
			uParam0->f_22 = 820172/*__LIB_0__::func_467*/;
			break;
		case 101:
			uParam0->f_22 = 820164/*__LIB_0__::func_467*/;
			break;
		case 112:
			uParam0->f_13 = 820152/*__LIB_5__::func_214*/;
			break;
		case 113:
			uParam0->f_3 = 820143/*__LIB_0__::func_114*/;
			break;
		case 78:
			uParam0->f_59 = 819840/*__LIB_6__::func_388*/;
			break;
	}
}

int func_2252(var uParam0, var uParam1)//Position - 0xC8811
{
	return func_2253(uParam1);
}

int func_2253(var uParam0)//Position - 0xC881F
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
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
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
			func_297(&iVar0, &(uParam0->f_109), 60);
			__LIB_3__::func_633(&(uParam0->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam0->f_109);
			return 0;
		}
		else if (func_214(&iVar0, &(uParam0->f_109), &(uParam0->f_109.f_1), 1, 1, 0, 1, 0, 1))
		{
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam0->f_109);
		}
		else
		{
			return 0;
		}
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(uParam0->f_109), &(uParam0->f_189[1 /*3*/]), &(uParam0->f_189[0 /*3*/]));
		__LIB_4__::func_109(&Var1, &Var3, &fVar9, 1);
		__LIB_4__::func_109(&Var2, &Var4, &fVar10, 0);
		__LIB_4__::func_108(&Var5, &Var7, &fVar11, 1);
		__LIB_4__::func_108(&Var6, &Var8, &fVar12, 0);
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
		__LIB_7__::func_533(&(Global_1946250.f_3638), Var1, Var3, fVar9, Var2, Var4, fVar10, bVar13, Var5, Var7, fVar11, Var6, Var8, fVar12, bVar14, 1056964608, 1036831949);
	}
	return 1;
}

void func_2302(int iParam0, int iParam1)//Position - 0xCB2A5
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
		func_521(iParam0, Var2, &bVar0, &bVar1, 1, 0);
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
			__LIB_7__::func_303(iParam0, -1);
		}
		if (__LIB_3__::func_661(0, iParam1))
		{
			__LIB_7__::func_303(iParam0, -1);
		}
		else if (__LIB_3__::func_661(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_7__::func_656(PLAYER::PLAYER_ID(), iParam0, Var2, 1, 0, 0, 0, -1, -1, -1);
			}
			__LIB_7__::func_617(iParam0);
		}
		else if (__LIB_3__::func_661(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_7__::func_656(PLAYER::PLAYER_ID(), iParam0, Var2, 0, 0, 1, 0, -1, -1, -1);
			}
			__LIB_7__::func_617(iParam0);
		}
	}
	else
	{
		__LIB_5__::func_189(iParam1, 1, 0);
		__LIB_5__::func_189(iParam1, 2, 0);
	}
}

void func_2340(var uParam0, int iParam1)//Position - 0xCBC7B
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 869725/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 869702/*__LIB_6__::func_469*/;
			break;
		case 1:
			uParam0->f_30 = 869572/*__LIB_7__::func_321*/;
			break;
		case 2:
			uParam0->f_31 = 868905/*__LIB_7__::func_320*/;
			break;
		case 3:
			uParam0->f_34 = 868642/*__LIB_4__::func_169*/;
			break;
		case 4:
			uParam0->f_12 = 868629/*__LIB_4__::func_168*/;
			break;
		case 5:
			uParam0->f_11 = 868619/*__LIB_4__::func_167*/;
			break;
		case 37:
			uParam0->f_18 = 868420/*__LIB_6__::func_468*/;
			break;
		case 38:
			uParam0->f_9 = 868372/*__LIB_7__::func_319*/;
			break;
		case 42:
			uParam0->f_10 = 868335/*__LIB_6__::func_653*/;
			break;
		case 6:
			uParam0->f_32 = 868220/*__LIB_7__::func_229*/;
			break;
		case 11:
			uParam0->f_11 = 868211/*__LIB_3__::func_729*/;
			break;
		case 12:
			uParam0->f_33 = 867281/*__LIB_7__::func_626*/;
			break;
		case 14:
			uParam0->f_11 = 867272/*__LIB_3__::func_603*/;
			break;
		case 109:
			uParam0->f_56 = 866115/*__LIB_7__::func_423*/;
			break;
		case 8:
			uParam0->f_37 = 866071/*__LIB_4__::func_163*/;
			break;
		case 7:
			uParam0->f_36 = 866048/*__LIB_4__::func_162*/;
			break;
		case 79:
			*uParam0 = 866024/*__LIB_5__::func_265*/;
			break;
		case 13:
			uParam0->f_2 = 865962/*__LIB_30__::func_466*/;
			break;
		case 15:
			uParam0->f_2 = 865883/*__LIB_31__::func_19*/;
			break;
		case 16:
			uParam0->f_5 = 865209/*__LIB_7__::func_501*/;
			break;
		case 108:
			uParam0->f_55 = 861927/*__LIB_40__::func_817*/;
			break;
		case 17:
			uParam0->f_17 = 861006/*func_2469*/;
			break;
		case 19:
			uParam0->f_17 = 860960/*__LIB_7__::func_318*/;
			break;
		case 20:
			uParam0->f_3 = 860787/*__LIB_6__::func_649*/;
			break;
		case 21:
			uParam0->f_3 = 860702/*__LIB_6__::func_467*/;
			break;
		case 74:
			uParam0->f_53 = 860562/*__LIB_6__::func_466*/;
			break;
		case 75:
			uParam0->f_4 = 860546/*__LIB_5__::func_464*/;
			break;
		case 22:
			uParam0->f_24 = 860443/*__LIB_6__::func_648*/;
			break;
		case 23:
			uParam0->f_26 = 860396/*__LIB_4__::func_159*/;
			break;
		case 24:
			uParam0->f_26 = 860359/*__LIB_4__::func_88*/;
			break;
		case 26:
			uParam0->f_38 = 858954/*func_2448*/;
			break;
		case 25:
			uParam0->f_23 = 858588/*func_2445*/;
			break;
		case 27:
			uParam0->f_25 = 857775/*__LIB_6__::func_740*/;
			break;
		case 28:
			uParam0->f_24 = 857736/*__LIB_4__::func_152*/;
			break;
		case 29:
			uParam0->f_28 = 857501/*__LIB_5__::func_876*/;
			break;
		case 30:
			uParam0->f_8 = 857176/*__LIB_7__::func_421*/;
			break;
		case 31:
			uParam0->f_39 = 856976/*__LIB_7__::func_228*/;
			break;
		case 43:
			uParam0->f_8 = 856870/*__LIB_7__::func_993*/;
			break;
		case 33:
			uParam0->f_40 = 856554/*__LIB_7__::func_317*/;
			break;
		case 34:
			uParam0->f_41 = 851560/*__LIB_7__::func_316*/;
			break;
		case 36:
			uParam0->f_58 = 851503/*__LIB_4__::func_85*/;
			break;
		case 35:
			uParam0->f_42 = 845299/*__LIB_7__::func_623*/;
			break;
		case 45:
			uParam0->f_14 = 845290/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 845281/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 845273/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 845250/*__LIB_4__::func_146*/;
			break;
		case 82:
			uParam0->f_19 = 845237/*__LIB_5__::func_267*/;
			break;
		case 47:
			uParam0->f_43 = 844945/*__LIB_7__::func_314*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 842793/*__LIB_7__::func_622*/;
			break;
		case 49:
			uParam0->f_8 = 842745/*__LIB_7__::func_227*/;
			break;
		case 50:
			*uParam0 = 842553/*__LIB_6__::func_739*/;
			break;
		case 51:
			*uParam0 = 842544/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 842533/*__LIB_3__::func_647*/;
			break;
		case 53:
			uParam0->f_13 = 842491/*__LIB_4__::func_141*/;
			break;
		case 54:
			uParam0->f_45 = 842483/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 842474/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 842465/*__LIB_1__::func_804*/;
			break;
		case 58:
			uParam0->f_13 = 842423/*__LIB_4__::func_140*/;
			break;
		case 59:
			*uParam0 = 842414/*__LIB_0__::func_114*/;
			break;
		case 60:
			*uParam0 = 842405/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 842394/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 842364/*__LIB_4__::func_139*/;
			break;
		case 63:
			uParam0->f_11 = 842355/*__LIB_1__::func_804*/;
			break;
		case 64:
			uParam0->f_47 = 842347/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 841261/*__LIB_7__::func_540*/;
			break;
		case 66:
			uParam0->f_21 = 840920/*__LIB_7__::func_312*/;
			break;
		case 67:
			uParam0->f_21 = 840806/*__LIB_4__::func_64*/;
			break;
		case 68:
			*uParam0 = 839978/*__LIB_7__::func_419*/;
			break;
		case 69:
			*uParam0 = 839969/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 839957/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 839865/*__LIB_4__::func_138*/;
			break;
		case 107:
			uParam0->f_50 = 839853/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 839665/*__LIB_5__::func_870*/;
			break;
		case 84:
			uParam0->f_1 = 839656/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 839642/*func_2379*/;
			break;
		case 87:
			uParam0->f_1 = 839626/*__LIB_6__::func_799*/;
			break;
		case 88:
			uParam0->f_1 = 839617/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 839609/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 839600/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 839157/*__LIB_6__::func_420*/;
			break;
		case 98:
			uParam0->f_1 = 837695/*func_2361*/;
			break;
		case 100:
			uParam0->f_22 = 836816/*__LIB_6__::func_389*/;
			break;
		case 101:
			uParam0->f_22 = 836639/*__LIB_5__::func_538*/;
			break;
		case 112:
			uParam0->f_13 = 836627/*__LIB_5__::func_214*/;
			break;
		case 113:
			uParam0->f_3 = 836613/*__LIB_6__::func_465*/;
			break;
		case 114:
			uParam0->f_16 = 323998/*__LIB_5__::func_451*/;
			break;
		case 117:
			uParam0->f_16 = 377933/*__LIB_3__::func_800*/;
			break;
		case 118:
			uParam0->f_11 = 836604/*__LIB_3__::func_939*/;
			break;
		case 119:
			uParam0->f_27 = 836503/*__LIB_8__::func_25*/;
			break;
		case 120:
			uParam0->f_19 = 836478/*__LIB_5__::func_537*/;
			break;
		case 78:
			uParam0->f_59 = 836306/*__LIB_6__::func_294*/;
			break;
		case 125:
			uParam0->f_19 = 836279/*__LIB_4__::func_124*/;
			break;
	}
}

int func_2361(int iParam0, var uParam1)//Position - 0xCC83F
{
	if (__LIB_4__::func_128(iParam0))
	{
		return func_2362(iParam0, uParam1);
	}
	return 1;
}

int func_2362(int iParam0, var uParam1)//Position - 0xCC85C
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
		if (func_215(&(uParam1->f_109.f_1[0]), iVar1, 1, 1) && __LIB_0__::func_121(uParam1->f_109.f_1[0]))
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

int func_2379(var uParam0, var uParam1)//Position - 0xCCFDA
{
	return func_2253(uParam1);
}

void func_2445(int iParam0, int iParam1)//Position - 0xD19DC
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	Var2 = { __LIB_4__::func_154(iParam0) };
	if (__LIB_6__::func_649(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_521(iParam0, Var2, &bVar0, &bVar1, 1, 0);
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
			__LIB_7__::func_317(iParam0, -1);
		}
		if (__LIB_3__::func_661(0, iParam1))
		{
			__LIB_7__::func_317(iParam0, -1);
		}
		else if (__LIB_3__::func_661(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_7__::func_656(PLAYER::PLAYER_ID(), iParam0, Var2, 1, 0, 0, 0, -1, -1, -1);
			}
			__LIB_7__::func_624(iParam0);
		}
		else if (__LIB_3__::func_661(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_7__::func_656(PLAYER::PLAYER_ID(), iParam0, Var2, 0, 0, 1, 0, -1, -1, -1);
			}
			__LIB_7__::func_624(iParam0);
		}
	}
	else
	{
		__LIB_5__::func_189(iParam1, 1, 0);
		__LIB_5__::func_189(iParam1, 2, 0);
	}
}

void func_2448(var uParam0, var uParam1)//Position - 0xD1B4A
{
	if (__LIB_6__::func_91(PLAYER::PLAYER_ID()) || __LIB_6__::func_99(PLAYER::PLAYER_ID()))
	{
		func_2449(uParam0, uParam1);
	}
}

void func_2449(var uParam0, var uParam1)//Position - 0xD1B76
{
	int iVar0;
	if (__LIB_3__::func_616() == 2 && __LIB_3__::func_785() != 1)
	{
		uParam1->f_1 = 1;
		if (func_2460(*uParam0, 0, 0))
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
			func_2455(uParam0, uParam1);
			break;
		case 1:
			func_2451(uParam0, uParam1);
			break;
		case 2:
			__LIB_5__::func_877(*uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_2451(var uParam0, var uParam1)//Position - 0xD1C35
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
	func_521(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &bVar6, &bVar7, 1, 0);
	iVar5 = 0;
	while (iVar5 < 3)
	{
		uVar2[iVar4] = __LIB_6__::func_455(iVar5);
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
			__LIB_8__::func_26(iVar1[uParam0->f_4]);
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

void func_2455(var uParam0, var uParam1)//Position - 0xD1E34
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
	if (!__LIB_6__::func_91(PLAYER::PLAYER_ID()) && __LIB_6__::func_99(PLAYER::PLAYER_ID()))
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
			else if (func_2460(*uParam0, 0, 0))
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

int func_2460(int iParam0, bool bParam1, bool bParam2)//Position - 0xD2095
{
	int iVar0;
	int iVar1;
	func_521(iParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, 1, bParam2);
	if (bParam1)
	{
		return iVar1;
	}
	return (iVar0 || iVar1);
}

char* func_2469(var uParam0, var uParam1, var uParam2)//Position - 0xD234E
{
	struct<3> Var0;
	int iVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	if (__LIB_5__::func_434())
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		if (Var0.f_2 < 105f)
		{
			if (__LIB_6__::func_91(PLAYER::PLAYER_ID()))
			{
				return "SI_ENTR_BLCK21A" /* GXT: You cannot enter the Penthouse Garage or Casino Parking Lot while on call. You can cancel this via the Quick Join app on the phone. */;
			}
			else
			{
				return "SI_ENTR_BLCK19A" /* GXT: You cannot enter the Parking Lot while on call. You can cancel this via the Quick Join app on the phone. */;
			}
		}
		else
		{
			return "SI_ENTR_BLCK20A" /* GXT: You cannot enter the Penthouse while on call. You can cancel this via the Quick Join app on the phone. */;
		}
	}
	if (__LIB_1__::func_907(PLAYER::PLAYER_ID(), 0))
	{
		iVar1 = __LIB_5__::func_185(PLAYER::PLAYER_ID());
		if (PLAYER::PLAYER_ID() != __LIB_0__::func_162())
		{
			switch (iVar1)
			{
				case 192:
					return "CAS_APT_BLCK_A" /* GXT: You can't enter The Diamond Casino & Resort while resupplying another business. */;
				case 190:
					return "CAS_APT_BLCK_B" /* GXT: You can't enter The Diamond Casino & Resort while selling goods from another business. */;
				case 167:
					return "CAS_APT_BLCK_C" /* GXT: You can't enter The Diamond Casino & Resort while acquiring goods for a Warehouse. */;
				case 168:
					return "CAS_APT_BLCK_D" /* GXT: You can't enter The Diamond Casino & Resort while selling goods from a Warehouse. */;
				case 178:
					return "CAS_APT_BLCK_E" /* GXT: You can't enter The Diamond Casino & Resort while acquiring a vehicle for a Warehouse. */;
				case 188:
					return "CAS_APT_BLCK_F" /* GXT: You can't enter The Diamond Casino & Resort while selling vehicles from a Warehouse. */;
				case 225:
					return "CAS_APT_BLCK_G" /* GXT: You can't enter The Diamond Casino & Resort while acquiring goods for a Bunker. */;
				case 226:
					return "CAS_APT_BLCK_H" /* GXT: You can't enter The Diamond Casino & Resort while selling goods from a Bunker. */;
				case 229:
					return "CAS_APT_BLCK_I" /* GXT: You can't enter The Diamond Casino & Resort while acquiring goods for a Hangar. */;
				case 230:
					return "CAS_APT_BLCK_J" /* GXT: You can't enter The Diamond Casino & Resort while selling goods from a Hangar. */;
				case 237:
					return "CAS_APT_BLCK_O" /* GXT: You can't enter The Diamond Casino & Resort while selling goods from a Nightclub. */;
				case 243:
					if (__LIB_2__::func_106(PLAYER::PLAYER_ID()))
					{
						return "";
					}
					break;
				}
			}
	}
	if (__LIB_3__::func_695())
	{
		return "CAS_APT_BLCK_K" /* GXT: You can't enter The Diamond Casino & Resort with a prostitute. */;
	}
	if (__LIB_2__::func_906())
	{
		return "BOUNTY_PROP_BLCK" /* GXT: You cannot enter whilst delivering a bounty. */;
	}
	if (__LIB_3__::func_694(PLAYER::PLAYER_ID()))
	{
		return "CAS_APT_BLCK_L" /* GXT: You can't access The Diamond Casino & Resort as the Beast. */;
	}
	if (__LIB_3__::func_693() && !__LIB_3__::func_439(PLAYER::PLAYER_ID()))
	{
		if ((__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && __LIB_5__::func_187(PLAYER::PLAYER_ID(), -1))
		{
			return "NPC_BLOCK" /* GXT: You cannot enter with non-player characters in the vehicle. */;
		}
	}
	if (__LIB_1__::func_101(PLAYER::PLAYER_PED_ID()) && __LIB_6__::func_91(PLAYER::PLAYER_ID()))
	{
		return "CAS_APT_BLCK_M" /* GXT: You can't access The Diamond Casino & Resort whilst wearing the Ballistic Equipment. */;
	}
	if ((__LIB_6__::func_91(PLAYER::PLAYER_ID()) && __LIB_1__::func_17(PLAYER::PLAYER_ID())) && __LIB_3__::func_439(PLAYER::PLAYER_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (__LIB_5__::func_187(PLAYER::PLAYER_ID(), -1))
			{
				return "CAS_APT_BLCK_N" /* GXT: You can't enter The Diamond Casino & Resort while taking part in a Business Battle. */;
			}
		}
		else
		{
			return "CAS_APT_BLCK_N" /* GXT: You can't enter The Diamond Casino & Resort while taking part in a Business Battle. */;
		}
	}
	if (__LIB_6__::func_91(PLAYER::PLAYER_ID()) && !__LIB_5__::func_873(PLAYER::PLAYER_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar4 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			iVar5 = __LIB_3__::func_392(iVar4, &uVar3, &uVar2);
			iVar6 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar4, -1, false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar6))
			{
				iVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar6);
				if (__LIB_5__::func_187(PLAYER::PLAYER_ID(), -1))
				{
					if (!__LIB_6__::func_279(PLAYER::PLAYER_ID()))
					{
						if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iVar4))
						{
							iVar8 = ENTITY::GET_ENTITY_ATTACHED_TO(iVar4);
							if ((__LIB_0__::func_121(iVar8) && !__LIB_1__::func_590(ENTITY::GET_ENTITY_MODEL(iVar4))) && !__LIB_3__::func_690(iVar4))
							{
								return "PROP_BLOCK_TRAIL" /* GXT: Unable to enter garage. Please detach trailer. */;
							}
							else
							{
								return "CAS_APT_BLCK_Q" /* GXT: You can't enter The Diamond Casino & Resort with this vehicle. */;
							}
						}
						else if (__LIB_3__::func_690(iVar4))
						{
							return "CAS_APT_BLCK_R" /* GXT: You can't enter The Diamond Casino & Resort with the Mobile Operations Center. */;
						}
						else if ((((((__LIB_1__::func_589(iVar4) || __LIB_1__::func_819(ENTITY::GET_ENTITY_MODEL(iVar4))) || !__LIB_3__::func_561(ENTITY::GET_ENTITY_MODEL(iVar4), 21)) || __LIB_1__::func_590(ENTITY::GET_ENTITY_MODEL(iVar4))) || __LIB_1__::func_588(iVar4)) || __LIB_3__::func_689(iVar4)) || (__LIB_0__::func_872(iVar4, 1) && iVar5 != iVar7))
						{
							if (__LIB_1__::func_590(ENTITY::GET_ENTITY_MODEL(iVar4)) && ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar4))
							{
								return "";
							}
							else
							{
								return "CAS_APT_BLCK_Q" /* GXT: You can't enter The Diamond Casino & Resort with this vehicle. */;
							}
						}
						else if (__LIB_0__::func_121(iVar4) && ENTITY::GET_ENTITY_MODEL(iVar4) == joaat("rcbandito"))
						{
							return "CAS_APT_BLCK_T" /* GXT: You can't enter The Diamond Casino & Resort with the RC Bandito. */;
						}
					}
				}
			}
		}
	}
	return "";
}

void func_2518(var uParam0, int iParam1)//Position - 0xD4566
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 900324/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 900315/*__LIB_0__::func_162*/;
			break;
		case 1:
			uParam0->f_30 = 900247/*__LIB_5__::func_557*/;
			break;
		case 2:
			uParam0->f_31 = 899894/*__LIB_5__::func_556*/;
			break;
		case 3:
			uParam0->f_34 = 899661/*__LIB_4__::func_211*/;
			break;
		case 4:
			uParam0->f_12 = 899648/*__LIB_4__::func_210*/;
			break;
		case 6:
			uParam0->f_32 = 899584/*__LIB_4__::func_209*/;
			break;
		case 11:
			uParam0->f_11 = 899575/*__LIB_3__::func_939*/;
			break;
		case 12:
			uParam0->f_33 = 898850/*__LIB_7__::func_324*/;
			break;
		case 14:
			uParam0->f_11 = 898841/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 897699/*__LIB_5__::func_285*/;
			break;
		case 8:
			uParam0->f_37 = 897691/*__LIB_0__::func_467*/;
			break;
		case 7:
			uParam0->f_36 = 897682/*__LIB_0__::func_114*/;
			break;
		case 79:
			*uParam0 = 897658/*__LIB_5__::func_265*/;
			break;
		case 13:
			uParam0->f_2 = 897586/*__LIB_30__::func_468*/;
			break;
		case 15:
			uParam0->f_2 = 897497/*__LIB_31__::func_20*/;
			break;
		case 16:
			uParam0->f_5 = 897137/*__LIB_6__::func_748*/;
			break;
		case 108:
			uParam0->f_55 = 896998/*__LIB_6__::func_747*/;
			break;
		case 17:
			uParam0->f_17 = 896340/*__LIB_24__::func_147*/;
			break;
		case 19:
			uParam0->f_17 = 896313/*__LIB_5__::func_976*/;
			break;
		case 20:
			uParam0->f_3 = 896304/*__LIB_0__::func_114*/;
			break;
		case 21:
			uParam0->f_3 = 896256/*__LIB_5__::func_227*/;
			break;
		case 74:
			uParam0->f_53 = 896201/*__LIB_6__::func_472*/;
			break;
		case 75:
			uParam0->f_4 = 896088/*__LIB_5__::func_555*/;
			break;
		case 22:
			uParam0->f_24 = 896080/*__LIB_0__::func_467*/;
			break;
		case 23:
			uParam0->f_26 = 896072/*__LIB_0__::func_467*/;
			break;
		case 26:
			uParam0->f_38 = 893529/*func_2644*/;
			break;
		case 25:
			uParam0->f_23 = 893521/*__LIB_0__::func_467*/;
			break;
		case 27:
			uParam0->f_25 = 893513/*__LIB_0__::func_467*/;
			break;
		case 28:
			uParam0->f_24 = 893505/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 893224/*__LIB_6__::func_654*/;
			break;
		case 31:
			uParam0->f_39 = 893194/*__LIB_3__::func_775*/;
			break;
		case 33:
			uParam0->f_40 = 893125/*__LIB_7__::func_303*/;
			break;
		case 76:
			uParam0->f_13 = 893102/*__LIB_4__::func_204*/;
			break;
		case 34:
			uParam0->f_41 = 890548/*__LIB_5__::func_881*/;
			break;
		case 36:
			uParam0->f_58 = 890503/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 890407/*__LIB_5__::func_283*/;
			break;
		case 45:
			uParam0->f_14 = 890398/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 890389/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 890381/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 890370/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 890263/*__LIB_4__::func_202*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 889425/*__LIB_10__::func_638*/;
			break;
		case 49:
			uParam0->f_8 = 889416/*__LIB_0__::func_114*/;
			break;
		case 50:
			*uParam0 = 889203/*__LIB_6__::func_746*/;
			break;
		case 51:
			*uParam0 = 889194/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 889183/*__LIB_4__::func_201*/;
			break;
		case 53:
			uParam0->f_13 = 889141/*__LIB_4__::func_200*/;
			break;
		case 54:
			uParam0->f_45 = 889102/*__LIB_4__::func_199*/;
			break;
		case 56:
			uParam0->f_46 = 889093/*__LIB_3__::func_729*/;
			break;
		case 57:
			uParam0->f_11 = 889051/*__LIB_5__::func_553*/;
			break;
		case 58:
			uParam0->f_13 = 889009/*__LIB_4__::func_197*/;
			break;
		case 59:
			*uParam0 = 889000/*__LIB_0__::func_114*/;
			break;
		case 60:
			*uParam0 = 888991/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 888980/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 888969/*__LIB_3__::func_554*/;
			break;
		case 63:
			uParam0->f_11 = 888960/*__LIB_1__::func_804*/;
			break;
		case 64:
			uParam0->f_47 = 888874/*__LIB_5__::func_552*/;
			break;
		case 65:
			uParam0->f_21 = 888866/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 888525/*__LIB_5__::func_282*/;
			break;
		case 67:
			uParam0->f_21 = 888455/*__LIB_3__::func_757*/;
			break;
		case 68:
			*uParam0 = 887758/*__LIB_5__::func_281*/;
			break;
		case 69:
			*uParam0 = 887749/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 887676/*__LIB_4__::func_195*/;
			break;
		case 71:
			uParam0->f_49 = 887667/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 887655/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 887646/*__LIB_0__::func_114*/;
			break;
		case 84:
			uParam0->f_1 = 887121/*__LIB_6__::func_745*/;
			break;
		case 85:
			uParam0->f_1 = 885565/*func_2594*/;
			break;
		case 87:
			uParam0->f_1 = 882334/*__LIB_6__::func_801*/;
			break;
		case 88:
			uParam0->f_1 = 882319/*__LIB_5__::func_803*/;
			break;
		case 89:
			uParam0->f_54 = 881958/*__LIB_5__::func_880*/;
			break;
		case 96:
			uParam0->f_1 = 881596/*__LIB_6__::func_744*/;
			break;
		case 97:
			uParam0->f_1 = 881090/*func_2572*/;
			break;
		case 98:
			uParam0->f_1 = 879461/*func_2570*/;
			break;
		case 100:
			uParam0->f_22 = 879183/*__LIB_6__::func_317*/;
			break;
		case 101:
			uParam0->f_22 = 878634/*__LIB_11__::func_956*/;
			break;
		case 112:
			uParam0->f_13 = 878622/*__LIB_5__::func_214*/;
			break;
		case 113:
			uParam0->f_3 = 878613/*__LIB_0__::func_114*/;
			break;
		case 114:
			uParam0->f_16 = 323998/*__LIB_5__::func_451*/;
			break;
		case 115:
			uParam0->f_3 = 878476/*__LIB_6__::func_743*/;
			break;
		case 116:
			*uParam0 = 878428/*__LIB_6__::func_471*/;
			break;
		case 117:
			uParam0->f_16 = 377933/*__LIB_3__::func_800*/;
			break;
		case 118:
			uParam0->f_11 = 836604/*__LIB_3__::func_939*/;
			break;
		case 119:
			uParam0->f_27 = 836503/*__LIB_8__::func_25*/;
			break;
		case 120:
			uParam0->f_19 = 836478/*__LIB_5__::func_537*/;
			break;
		case 78:
			uParam0->f_59 = 878420/*__LIB_0__::func_467*/;
			break;
		case 124:
			uParam0->f_1 = 871314/*func_2520*/;
			break;
		case 125:
			uParam0->f_19 = 871258/*__LIB_4__::func_175*/;
			break;
	}
}

int func_2520(int iParam0, int* iParam1)//Position - 0xD4B92
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
			__LIB_30__::func_669(iParam1);
		}
		return 0;
	}
	switch (iParam1->f_258)
	{
		case 0:
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				__LIB_6__::func_470(iParam0, &uVar1, &Var2, &Var3, &fVar4, &uVar5, 0, 0);
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(__LIB_1__::func_694(PLAYER::PLAYER_ID()), Var2, Var3, fVar4, false, true))
				{
					__LIB_5__::func_457(0);
					__LIB_4__::func_181(iParam1, 1);
				}
				__LIB_6__::func_470(iParam0, &uVar1, &Var2, &Var3, &fVar4, &uVar5, 3, 0);
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(__LIB_1__::func_694(PLAYER::PLAYER_ID()), Var2, Var3, fVar4, true, true))
				{
					__LIB_5__::func_457(3);
					__LIB_4__::func_181(iParam1, 1);
				}
				__LIB_6__::func_470(iParam0, &uVar1, &Var2, &Var3, &fVar4, &uVar5, 4, 0);
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(__LIB_1__::func_694(PLAYER::PLAYER_ID()), Var2, Var3, fVar4, true, true))
				{
					__LIB_5__::func_457(4);
					__LIB_4__::func_181(iParam1, 1);
				}
				__LIB_6__::func_470(iParam0, &uVar1, &Var2, &Var3, &fVar4, &uVar5, 1, 0);
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
				if (__LIB_6__::func_745(iParam0, iParam1))
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
				if (func_2594(iParam0, iParam1))
				{
					__LIB_4__::func_178(&(Global_1946250.f_3638), 60);
					__LIB_4__::func_181(iParam1, 3);
				}
			}
			else if (func_2546(iParam1))
			{
				__LIB_4__::func_181(iParam1, 3);
			}
			break;
		case 3:
			if (__LIB_3__::func_616() == 0)
			{
				__LIB_12__::func_165(&(Global_1946250.f_3638), 0, 1);
				__LIB_6__::func_801(iParam0, iParam1);
				if (__LIB_3__::func_630(&(Global_1946250.f_3638), 0))
				{
					__LIB_13__::func_586(&iParam0);
					MISC::SET_BIT(&(Global_1946250.f_6), 26);
					__LIB_4__::func_181(iParam1, 4);
				}
			}
			else
			{
				__LIB_6__::func_741(iParam1);
				__LIB_13__::func_586(&iParam0);
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
				__LIB_12__::func_165(&(Global_1946250.f_3638), 0, 1);
				if (__LIB_6__::func_801(iParam0, iParam1) && BitTest(Global_1946250.f_6, 27))
				{
					__LIB_30__::func_669(iParam1);
				}
			}
			else if (__LIB_6__::func_741(iParam1) && BitTest(Global_1946250.f_6, 27))
			{
				__LIB_30__::func_669(iParam1);
			}
			break;
	}
	return 1;
}

int func_2546(int* iParam0)//Position - 0xD5DEA
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
		func_1377(&(iParam0->f_2), PLAYER::PLAYER_ID(), 1, 1);
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

int func_2570(int iParam0, var uParam1)//Position - 0xD6B65
{
	struct<3> Var0;
	struct<3> Var1;
	char* sVar2;
	int iVar3;
	if (__LIB_4__::func_128(iParam0))
	{
		return func_2362(iParam0, uParam1);
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
		__LIB_5__::func_943(1, 1, 1, 0, 0, 0, 0);
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
			func_1377(&(uParam1->f_140[2]), PLAYER::PLAYER_ID(), 1, 0);
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
		__LIB_6__::func_410(PLAYER::PLAYER_ID(), 0, 262144, 0);
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

int func_2572(int iParam0, var uParam1)//Position - 0xD71C2
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
				if (!func_2573(&(uParam1->f_2), Global_1946250.f_4539))
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

int func_2573(var uParam0, int iParam1)//Position - 0xD72D0
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
				if (__LIB_0__::func_348(ENTITY::GET_ENTITY_MODEL(*uParam0), 14, func_226(*uParam0, 14, 0), -1))
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

int func_2594(int iParam0, int* iParam1)//Position - 0xD833D
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
		if (!func_215(&(iParam1->f_140[0]), PLAYER::PLAYER_PED_ID(), 1, 1))
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
			if (((__LIB_0__::func_121(iVar6) && __LIB_0__::func_872(iVar6, 0)) && __LIB_3__::func_251(iVar6) == PLAYER::PLAYER_ID()) && __LIB_0__::func_336(PLAYER::PLAYER_PED_ID(), 0) == -1)
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
			func_297(&iVar7, &(iParam1->f_109), 60);
			__LIB_3__::func_633(&(iParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(iParam1->f_109);
			return 0;
		}
		else
		{
			iVar8 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar7, -1, false);
			if (func_215(&(iParam1->f_109.f_1[0]), iVar8, 1, 1) && __LIB_0__::func_121(iParam1->f_109.f_1[0]))
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
			func_1377(&(iParam1->f_2), PLAYER::PLAYER_ID(), 1, 1);
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

void func_2644(var uParam0, var uParam1)//Position - 0xDA259
{
	int iVar0;
	iVar0 = __LIB_3__::func_785();
	if (__LIB_3__::func_616() == 0 || __LIB_3__::func_616() == 2)
	{
		if (!__LIB_6__::func_93(PLAYER::PLAYER_ID()) || __LIB_3__::func_597())
		{
			if (!__LIB_3__::func_597())
			{
				if (__LIB_1__::func_744(PLAYER::PLAYER_ID()))
				{
					__LIB_8__::func_27(1, *uParam0);
				}
			}
			if (__LIB_1__::func_744(PLAYER::PLAYER_ID()))
			{
				__LIB_8__::func_27(1, *uParam0);
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
			func_2648(uParam0, uParam1);
			break;
		case 4:
			__LIB_5__::func_882(*uParam0, uParam1);
			break;
		case 2:
		case 3:
		case 1:
		case 5:
			func_2645(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_2645(var uParam0, var uParam1)//Position - 0xDA397
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
	func_521(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &bVar2, &bVar3, bVar0, 0);
	sVar7 = __LIB_4__::func_155();
	iVar9 = 0;
	while (iVar9 < 3)
	{
		uVar6[iVar8] = __LIB_6__::func_455(iVar9);
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
				__LIB_8__::func_27(iVar5[uParam0->f_4], 123);
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
				__LIB_8__::func_27(iVar5[uParam0->f_4], 146);
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
				__LIB_8__::func_27(iVar5[uParam0->f_4], 124);
			}
		}
	}
	else if (uParam0->f_3)
	{
		__LIB_5__::func_462();
	}
}

void func_2648(var uParam0, var uParam1)//Position - 0xDA621
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
		uVar0 = __LIB_7__::func_323(&uVar1, &uVar2, &uVar3, &iVar5);
	}
	else
	{
		uVar0 = __LIB_7__::func_627(&uVar1, &uVar2, &uVar3, &iVar5);
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
				func_2650(*uParam0, iVar7, uParam1, uParam1);
			}
			else
			{
				func_2649(*uParam0, iVar7, uParam1, uParam1);
			}
		}
		else if (uParam0->f_3)
		{
			uParam1->f_4 = 1;
		}
	}
}

void func_2649(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0xDA73E
{
	if (iParam1 == 0)
	{
		if (func_2460(iParam0, 0, 0))
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
		if (func_2460(iParam0, 0, 0))
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
		if (func_2460(iParam0, 1, 0))
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
		if (func_2460(iParam0, 0, 0))
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

void func_2650(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0xDA846
{
	if (iParam1 == 0)
	{
		if (func_2460(iParam0, 0, 0))
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
		if (func_2460(iParam0, 0, 0))
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

void func_2693(var uParam0, int iParam1)//Position - 0xDBCED
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 936100/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 936086/*__LIB_7__::func_328*/;
			break;
		case 1:
			uParam0->f_30 = 935987/*__LIB_7__::func_233*/;
			break;
		case 2:
			uParam0->f_31 = 934923/*__LIB_7__::func_327*/;
			break;
		case 3:
			uParam0->f_34 = 934769/*__LIB_4__::func_265*/;
			break;
		case 4:
			uParam0->f_12 = 934715/*__LIB_5__::func_564*/;
			break;
		case 5:
			uParam0->f_11 = 934660/*__LIB_6__::func_476*/;
			break;
		case 37:
			uParam0->f_18 = 934540/*__LIB_4__::func_262*/;
			break;
		case 38:
			uParam0->f_9 = 934408/*__LIB_5__::func_981*/;
			break;
		case 6:
			uParam0->f_32 = 934293/*__LIB_7__::func_232*/;
			break;
		case 11:
			uParam0->f_11 = 934283/*__LIB_4__::func_261*/;
			break;
		case 12:
			uParam0->f_33 = 933113/*__LIB_7__::func_326*/;
			break;
		case 14:
			uParam0->f_11 = 933104/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 931778/*__LIB_7__::func_429*/;
			break;
		case 8:
			uParam0->f_37 = 931734/*__LIB_4__::func_258*/;
			break;
		case 7:
			uParam0->f_36 = 931711/*__LIB_4__::func_162*/;
			break;
		case 79:
			*uParam0 = 931687/*__LIB_5__::func_265*/;
			break;
		case 13:
			uParam0->f_2 = 931624/*__LIB_30__::func_469*/;
			break;
		case 15:
			uParam0->f_2 = 931544/*__LIB_31__::func_21*/;
			break;
		case 16:
			uParam0->f_5 = 930901/*__LIB_7__::func_504*/;
			break;
		case 108:
			uParam0->f_55 = 927761/*__LIB_40__::func_818*/;
			break;
		case 17:
			uParam0->f_17 = 927059/*func_2813*/;
			break;
		case 19:
			uParam0->f_17 = 927032/*__LIB_5__::func_979*/;
			break;
		case 20:
			uParam0->f_3 = 926853/*__LIB_6__::func_658*/;
			break;
		case 21:
			uParam0->f_3 = 926789/*__LIB_5__::func_798*/;
			break;
		case 74:
			uParam0->f_53 = 926515/*__LIB_11__::func_621*/;
			break;
		case 75:
			uParam0->f_4 = 926499/*__LIB_5__::func_562*/;
			break;
		case 22:
			uParam0->f_24 = 926396/*__LIB_6__::func_657*/;
			break;
		case 23:
			uParam0->f_26 = 926349/*__LIB_4__::func_256*/;
			break;
		case 24:
			uParam0->f_26 = 926312/*__LIB_4__::func_255*/;
			break;
		case 26:
			uParam0->f_38 = 925485/*func_2797*/;
			break;
		case 25:
			uParam0->f_23 = 925119/*func_2794*/;
			break;
		case 27:
			uParam0->f_25 = 924737/*__LIB_5__::func_885*/;
			break;
		case 28:
			uParam0->f_24 = 924686/*__LIB_4__::func_250*/;
			break;
		case 29:
			uParam0->f_28 = 924678/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 924441/*__LIB_7__::func_427*/;
			break;
		case 31:
			uParam0->f_39 = 924317/*__LIB_5__::func_296*/;
			break;
		case 33:
			uParam0->f_40 = 923897/*__LIB_7__::func_325*/;
			break;
		case 34:
			uParam0->f_41 = 912447/*__LIB_7__::func_502*/;
			break;
		case 36:
			uParam0->f_58 = 912402/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 909315/*__LIB_5__::func_559*/;
			break;
		case 45:
			uParam0->f_14 = 909306/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 909297/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 909289/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 909240/*__LIB_7__::func_230*/;
			break;
		case 47:
			uParam0->f_43 = 909158/*__LIB_4__::func_243*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 908394/*__LIB_7__::func_426*/;
			break;
		case 49:
			uParam0->f_8 = 908347/*__LIB_4__::func_237*/;
			break;
		case 50:
			*uParam0 = 908288/*__LIB_6__::func_749*/;
			break;
		case 51:
			*uParam0 = 908056/*__LIB_22__::func_282*/;
			break;
		case 52:
			uParam0->f_15 = 908045/*__LIB_4__::func_234*/;
			break;
		case 53:
			uParam0->f_13 = 908003/*__LIB_4__::func_233*/;
			break;
		case 54:
			uParam0->f_45 = 907995/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 907986/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 907977/*__LIB_1__::func_804*/;
			break;
		case 58:
			uParam0->f_13 = 907935/*__LIB_4__::func_232*/;
			break;
		case 59:
			*uParam0 = 907926/*__LIB_0__::func_114*/;
			break;
		case 60:
			*uParam0 = 907917/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 907906/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 907864/*__LIB_4__::func_231*/;
			break;
		case 63:
			uParam0->f_11 = 907855/*__LIB_1__::func_804*/;
			break;
		case 64:
			uParam0->f_47 = 907847/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 906785/*__LIB_7__::func_542*/;
			break;
		case 66:
			uParam0->f_21 = 906482/*__LIB_5__::func_263*/;
			break;
		case 67:
			uParam0->f_21 = 906368/*__LIB_4__::func_64*/;
			break;
		case 68:
			*uParam0 = 905525/*__LIB_7__::func_425*/;
			break;
		case 69:
			*uParam0 = 905516/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 905443/*__LIB_4__::func_230*/;
			break;
		case 71:
			uParam0->f_49 = 905434/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 905422/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 905220/*__LIB_5__::func_884*/;
			break;
		case 84:
			uParam0->f_1 = 905211/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 903478/*func_2712*/;
			break;
		case 87:
			uParam0->f_1 = 902025/*__LIB_6__::func_421*/;
			break;
		case 88:
			uParam0->f_1 = 902016/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 902008/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 901999/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 901990/*__LIB_0__::func_109*/;
			break;
		case 98:
			uParam0->f_1 = 901981/*__LIB_0__::func_109*/;
			break;
		case 100:
			uParam0->f_22 = 901973/*__LIB_0__::func_467*/;
			break;
		case 101:
			uParam0->f_22 = 901965/*__LIB_0__::func_467*/;
			break;
		case 78:
			uParam0->f_59 = 901793/*__LIB_6__::func_294*/;
			break;
		case 125:
			uParam0->f_19 = 901760/*__LIB_4__::func_215*/;
			break;
	}
}

int func_2712(int iParam0, var uParam1)//Position - 0xDC936
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	struct<3> Var4;
	struct<3> Var5;
	float fVar6;
	struct<3> Var7;
	struct<3> Var8;
	float fVar9;
	struct<3> Var10;
	struct<3> Var11;
	float fVar12;
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
			func_297(&iVar0, &(uParam1->f_109), 60);
			__LIB_3__::func_633(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_214(&iVar0, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 1, 0, 1))
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
		fVar3 = __LIB_4__::func_225(iParam0, __LIB_3__::func_616());
		Var4 = { __LIB_4__::func_227(iParam0, __LIB_3__::func_616()) };
		Var5 = { __LIB_4__::func_226(iParam0, __LIB_3__::func_616()) };
		fVar6 = __LIB_4__::func_225(iParam0, __LIB_3__::func_616());
		Var7 = { __LIB_4__::func_224(iParam0, __LIB_3__::func_616()) };
		Var8 = { __LIB_4__::func_223(iParam0, __LIB_3__::func_616()) };
		fVar9 = __LIB_4__::func_220(iParam0, __LIB_3__::func_616());
		Var10 = { __LIB_4__::func_222(iParam0, __LIB_3__::func_616()) };
		Var11 = { __LIB_4__::func_221(iParam0, __LIB_3__::func_616()) };
		fVar12 = __LIB_4__::func_220(iParam0, __LIB_3__::func_616());
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
		return __LIB_7__::func_533(&(Global_1946250.f_3638), Var1, Var2, fVar3, Var4, Var5, fVar6, bVar13, Var7, Var8, fVar9, Var10, Var11, fVar12, bVar14, 1056964608, 1036831949);
	}
	return 1;
}

void func_2794(int iParam0, int iParam1)//Position - 0xE1DBF
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	Var2 = { __LIB_4__::func_252(iParam0) };
	if (__LIB_6__::func_658(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_521(iParam0, Var2, &bVar0, &bVar1, 1, 0);
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
			__LIB_7__::func_325(iParam0, -1);
		}
		if (__LIB_3__::func_661(0, iParam1))
		{
			__LIB_7__::func_325(iParam0, -1);
		}
		else if (__LIB_3__::func_661(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_7__::func_656(PLAYER::PLAYER_ID(), iParam0, Var2, 1, 0, 0, 0, -1, -1, -1);
			}
			__LIB_7__::func_628(iParam0);
		}
		else if (__LIB_3__::func_661(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_7__::func_656(PLAYER::PLAYER_ID(), iParam0, Var2, 0, 0, 1, 0, -1, -1, -1);
			}
			__LIB_7__::func_628(iParam0);
		}
	}
	else
	{
		__LIB_5__::func_189(iParam1, 1, 0);
		__LIB_5__::func_189(iParam1, 2, 0);
	}
}

void func_2797(var uParam0, var uParam1)//Position - 0xE1F2D
{
	if (__LIB_6__::func_87(PLAYER::PLAYER_ID()))
	{
		func_2798(uParam0, uParam1);
	}
}

void func_2798(var uParam0, var uParam1)//Position - 0xE1F4B
{
	int iVar0;
	iVar0 = __LIB_3__::func_785();
	switch (iVar0)
	{
		case 0:
			__LIB_11__::func_635(uParam0, uParam1);
			break;
		case 1:
			func_2799(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_2799(var uParam0, var uParam1)//Position - 0xE1F85
{
	int iVar0;
	int iVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_521(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, 1, 0);
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

char* func_2813(int iParam0, var uParam1, var uParam2)//Position - 0xE2553
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	if (__LIB_5__::func_434())
	{
		return "SI_ENTR_BLCK2A" /* GXT: You cannot enter the Arena Workshop while on call. You can cancel this via the Quick Join app on the phone. */;
	}
	iVar0 = __LIB_4__::func_236(iParam0);
	if (__LIB_1__::func_907(PLAYER::PLAYER_ID(), 0))
	{
		iVar1 = __LIB_5__::func_185(PLAYER::PLAYER_ID());
		if (PLAYER::PLAYER_ID() != __LIB_0__::func_162())
		{
			switch (iVar1)
			{
				case 192:
					return "ARENA_WS_BLCK_A" /* GXT: You can't enter this Arena Workshop while resupplying another business. */;
				case 190:
					return "ARENA_WS_BLCK_B" /* GXT: You can't enter this Arena Workshop while selling goods from another business. */;
				case 167:
					return "ARENA_WS_BLCK_C" /* GXT: You can't enter this Arena Workshop while acquiring goods for a warehouse. */;
				case 168:
					return "ARENA_WS_BLCK_D" /* GXT: You can't enter this Arena Workshop while selling goods from a warehouse. */;
				case 178:
					return "ARENA_WS_BLCK_E" /* GXT: You can't enter this Arena Workshop while acquiring a vehicle for a warehouse. */;
				case 188:
					return "ARENA_WS_BLCK_F" /* GXT: You can't enter this Arena Workshop while selling vehicles from a warehouse. */;
				case 225:
					return "ARENA_WS_BLCK_G" /* GXT: You can't enter this Arena Workshop while acquiring goods for a bunker. */;
				case 226:
					return "ARENA_WS_BLCK_H" /* GXT: You can't enter this Arena Workshop while selling goods from a bunker. */;
				case 229:
					return "ARENA_WS_BLCK_I" /* GXT: You can't enter this Arena Workshop while acquiring goods for a hangar. */;
				case 230:
					return "ARENA_WS_BLCK_J" /* GXT: You can't enter this Arena Workshop while selling goods from a hangar. */;
				case 237:
					return "ARENA_WS_BLCK_O" /* GXT: You can't enter this Arena Workshop while selling goods from a Nightclub. */;
				case 243:
					return "ARENA_WS_BLCK_S" /* GXT: You can't enter the Arena Workshop while on a job for the Casino Manager. */;
				}
			}
		default:
	}
	if (__LIB_3__::func_695())
	{
		return "ARENA_WS_BLCK_K" /* GXT: You cannot enter your Arena Workshop with a prostitute. */;
	}
	if (__LIB_2__::func_906())
	{
		return "BOUNTY_PROP_BLCK" /* GXT: You cannot enter whilst delivering a bounty. */;
	}
	if (__LIB_3__::func_694(PLAYER::PLAYER_ID()))
	{
		return "ARENA_WS_BLCK_L" /* GXT: You can't access your Arena Workshop as the Beast. */;
	}
	if (__LIB_3__::func_693() && !__LIB_3__::func_439(PLAYER::PLAYER_ID()))
	{
		return "NPC_BLOCK" /* GXT: You cannot enter with non-player characters in the vehicle. */;
	}
	if (__LIB_1__::func_101(PLAYER::PLAYER_PED_ID()) && __LIB_6__::func_100(PLAYER::PLAYER_ID(), iVar0))
	{
		return "ARENA_WS_BLCK_M" /* GXT: You can't access this Arena Workshop whilst wearing the Ballistic Equipment. */;
	}
	if ((__LIB_6__::func_100(PLAYER::PLAYER_ID(), iVar0) && __LIB_1__::func_17(PLAYER::PLAYER_ID())) && __LIB_3__::func_439(PLAYER::PLAYER_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (__LIB_5__::func_187(PLAYER::PLAYER_ID(), -1))
			{
				return "ARENA_WS_BLCK_N" /* GXT: You can't enter this Arena Workshop while taking part in a Business Battle. */;
			}
		}
		else
		{
			return "ARENA_WS_BLCK_N" /* GXT: You can't enter this Arena Workshop while taking part in a Business Battle. */;
		}
	}
	if (__LIB_6__::func_100(PLAYER::PLAYER_ID(), iVar0) && !__LIB_5__::func_873(PLAYER::PLAYER_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar4 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			iVar5 = __LIB_3__::func_392(iVar4, &uVar3, &uVar2);
			iVar6 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar4, -1, false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar6))
			{
				iVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar6);
				if (__LIB_5__::func_187(PLAYER::PLAYER_ID(), -1))
				{
					if (!__LIB_6__::func_279(PLAYER::PLAYER_ID()))
					{
						if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iVar4))
						{
							return "PROP_BLOCK_TRAIL" /* GXT: Unable to enter garage. Please detach trailer. */;
						}
						else if (__LIB_3__::func_690(iVar4))
						{
							return "ARENA_WS_BLCK_R" /* GXT: You cannot enter the Arena Workshop with the Mobile Operations Center. */;
						}
						else if ((((((__LIB_1__::func_589(iVar4) || __LIB_1__::func_819(ENTITY::GET_ENTITY_MODEL(iVar4))) || !__LIB_3__::func_561(ENTITY::GET_ENTITY_MODEL(iVar4), 18)) || __LIB_1__::func_590(ENTITY::GET_ENTITY_MODEL(iVar4))) || __LIB_1__::func_588(iVar4)) || __LIB_3__::func_689(iVar4)) || (__LIB_0__::func_872(iVar4, 1) && iVar5 != iVar7))
						{
							return "ARENA_WS_BLCK_Q" /* GXT: You cannot enter the Arena Workshop with this vehicle. */;
						}
					}
				}
			}
		}
	}
	return "";
}

void func_2861(var uParam0, int iParam1)//Position - 0xE48AD
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1028075/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1028019/*__LIB_4__::func_312*/;
			break;
		case 2:
			uParam0->f_31 = 1027675/*__LIB_5__::func_307*/;
			break;
		case 3:
			uParam0->f_34 = 1027636/*__LIB_4__::func_311*/;
			break;
		case 4:
			uParam0->f_12 = 1027603/*__LIB_4__::func_310*/;
			break;
		case 5:
			uParam0->f_11 = 1027592/*__LIB_4__::func_309*/;
			break;
		case 6:
			uParam0->f_32 = 1027528/*__LIB_4__::func_308*/;
			break;
		case 111:
			uParam0->f_35 = 1027505/*__LIB_6__::func_488*/;
			break;
		case 79:
			*uParam0 = 1027481/*__LIB_5__::func_265*/;
			break;
		case 37:
			uParam0->f_18 = 1027361/*__LIB_4__::func_307*/;
			break;
		case 38:
			uParam0->f_9 = 1027282/*__LIB_5__::func_888*/;
			break;
		case 11:
			uParam0->f_11 = 1027273/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 1026677/*__LIB_8__::func_56*/;
			break;
		case 109:
			uParam0->f_56 = 1026669/*__LIB_0__::func_467*/;
			break;
		case 15:
			uParam0->f_2 = 1021473/*func_2966*/;
			break;
		case 13:
			uParam0->f_2 = 1021464/*__LIB_0__::func_114*/;
			break;
		case 75:
			uParam0->f_4 = 1021449/*__LIB_5__::func_303*/;
			break;
		case 16:
			uParam0->f_5 = 1020974/*__LIB_8__::func_29*/;
			break;
		case 108:
			uParam0->f_55 = 1017004/*func_2944*/;
			break;
		case 17:
			uParam0->f_17 = 1016226/*func_2943*/;
			break;
		case 19:
			uParam0->f_17 = 1016199/*__LIB_5__::func_982*/;
			break;
		case 20:
			uParam0->f_3 = 1015988/*__LIB_12__::func_456*/;
			break;
		case 21:
			uParam0->f_3 = 1015825/*__LIB_10__::func_539*/;
			break;
		case 74:
			uParam0->f_53 = 1015215/*__LIB_7__::func_505*/;
			break;
		case 22:
			uParam0->f_24 = 1015133/*__LIB_4__::func_288*/;
			break;
		case 25:
			uParam0->f_23 = 1014217/*func_2933*/;
			break;
		case 30:
			uParam0->f_8 = 1012966/*__LIB_11__::func_906*/;
			break;
		case 31:
			uParam0->f_39 = 1012289/*__LIB_12__::func_455*/;
			break;
		case 33:
			uParam0->f_40 = 1011386/*__LIB_10__::func_982*/;
			break;
		case 14:
			uParam0->f_11 = 1011377/*__LIB_0__::func_162*/;
			break;
		case 34:
			uParam0->f_41 = 1010602/*__LIB_5__::func_568*/;
			break;
		case 36:
			uParam0->f_58 = 1010549/*__LIB_3__::func_945*/;
			break;
		case 35:
			uParam0->f_42 = 941895/*__LIB_7__::func_663*/;
			break;
		case 45:
			uParam0->f_14 = 941886/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 941877/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 941869/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 941846/*__LIB_4__::func_273*/;
			break;
		case 47:
			uParam0->f_43 = 941706/*__LIB_4__::func_272*/;
			break;
		case 49:
			uParam0->f_8 = 941671/*__LIB_4__::func_271*/;
			break;
		case 50:
			*uParam0 = 941633/*__LIB_5__::func_725*/;
			break;
		case 51:
			*uParam0 = 941609/*__LIB_7__::func_329*/;
			break;
		case 52:
			uParam0->f_15 = 941598/*__LIB_4__::func_270*/;
			break;
		case 53:
			uParam0->f_13 = 941519/*__LIB_7__::func_582*/;
			break;
		case 54:
			uParam0->f_45 = 941511/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 941502/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 941492/*__LIB_3__::func_938*/;
			break;
		case 58:
			uParam0->f_13 = 941203/*__LIB_7__::func_581*/;
			break;
		case 64:
			uParam0->f_47 = 939613/*func_2878*/;
			break;
		case 65:
			uParam0->f_21 = 938650/*__LIB_7__::func_543*/;
			break;
		case 66:
			uParam0->f_21 = 938455/*__LIB_5__::func_887*/;
			break;
		case 67:
			uParam0->f_21 = 938352/*__LIB_5__::func_886*/;
			break;
		case 68:
			*uParam0 = 937663/*__LIB_5__::func_215*/;
			break;
		case 69:
			*uParam0 = 937654/*__LIB_0__::func_109*/;
			break;
		case 70:
			uParam0->f_48 = 937642/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 937633/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 937621/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 937247/*__LIB_6__::func_661*/;
			break;
		case 73:
			uParam0->f_51 = 937238/*__LIB_0__::func_114*/;
			break;
		case 78:
			uParam0->f_59 = 937121/*__LIB_6__::func_321*/;
			break;
	}
}

void func_2878(var uParam0, var uParam1, var uParam2, var uParam3)//Position - 0xE565D
{
	int iVar0;
	iVar0 = __LIB_7__::func_430();
	if (!__LIB_2__::func_732(PLAYER::PLAYER_ID(), 0))
	{
		if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false)) && __LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!__LIB_6__::func_58(__LIB_3__::func_249(iVar0, 1, 0)))
			{
				func_2879(uParam0, iVar0);
			}
		}
	}
	if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (__LIB_0__::func_1("BB_TRUCK_SUTAR" /* GXT: You are unable to access the Nerve Center in this area. Move the Terrorbyte to a suitable area. */))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || __LIB_3__::func_684(PLAYER::PLAYER_PED_ID(), 1))
			{
				HUD::CLEAR_HELP(true);
			}
		}
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
		{
			if (__LIB_3__::func_363(uParam0->f_22.f_94, 0))
			{
				HUD::CLEAR_HELP(true);
				__LIB_3__::func_122(&(uParam0->f_22.f_94));
			}
		}
	}
}

void func_2879(var uParam0, int iParam1)//Position - 0xE5726
{
	struct<3> Var0;
	float* fVar1;
	float* fVar2;
	struct<3> Var3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	int iVar11;
	if (__LIB_0__::func_864(&uLocal_95))
	{
		if (__LIB_0__::func_937(&uLocal_95, 1000, 0) && !__LIB_0__::func_937(&uLocal_95, 2000, 0))
		{
			return;
		}
		else if (__LIB_0__::func_937(&uLocal_95, 2000, 0))
		{
			__LIB_0__::func_794(&uLocal_95);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		if (ENTITY::GET_ENTITY_SPEED(iParam1) > 1f)
		{
			return;
		}
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam1, false))
			{
				return;
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!__LIB_0__::func_864(&uLocal_95))
			{
				__LIB_0__::func_795(&uLocal_95, 0, 0);
			}
			if (!BitTest(uParam0->f_22, 2))
			{
				Var0 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(iParam1, true), ENTITY::GET_ENTITY_HEADING(iParam1), 2.4f, 1f, 0.4f) };
				Var3 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(iParam1, true), ENTITY::GET_ENTITY_HEADING(iParam1), 2.4f, -1f, 0.4f) };
				__LIB_3__::func_937(iParam1, Var0, &fVar1);
				__LIB_3__::func_937(iParam1, Var3, &fVar2);
				iVar5 = __LIB_7__::func_630(iParam1);
				iVar6 = PLAYER::GET_PLAYER_PED(iVar5);
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar6, false))
				{
					iVar4 = PED::GET_VEHICLE_PED_IS_IN(iVar6, false);
				}
				if ((ENTITY::DOES_ENTITY_EXIST(iVar4) && !ENTITY::IS_ENTITY_DEAD(iVar4, false)) && !VEHICLE::IS_VEHICLE_MODEL(iVar4, joaat("terbyte")))
				{
					uParam0->f_22.f_107 = SHAPETEST::START_SHAPE_TEST_CAPSULE(Var0, Var3, 1f, 81, iVar4, 4);
				}
				else
				{
					uParam0->f_22.f_107 = SHAPETEST::START_SHAPE_TEST_CAPSULE(Var0, Var3, 1f, 83, iParam1, 4);
				}
				if (uParam0->f_22.f_107 != 0)
				{
					MISC::SET_BIT(&(uParam0->f_22), 2);
				}
			}
			else
			{
				iVar11 = SHAPETEST::GET_SHAPE_TEST_RESULT(uParam0->f_22.f_107, &iVar7, &uVar8, &uVar9, &uVar10);
				if (iVar11 == 2)
				{
					if (iVar7 == 0)
					{
						MISC::CLEAR_BIT(&Global_1946250, 19);
						uParam0->f_22.f_107 = 0;
						MISC::CLEAR_BIT(&(uParam0->f_22), 2);
					}
					else
					{
						uParam0->f_22.f_107 = 0;
						MISC::SET_BIT(&Global_1946250, 19);
						MISC::CLEAR_BIT(&(uParam0->f_22), 2);
					}
				}
				else if (iVar11 == 0)
				{
					MISC::CLEAR_BIT(&(uParam0->f_22), 2);
					uParam0->f_22.f_107 = 0;
				}
			}
		}
	}
}

void func_2933(int iParam0, int iParam1)//Position - 0xF79C9
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
	if (__LIB_12__::func_456(PLAYER::PLAYER_ID(), iParam0))
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
								if (((!__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar7)) && !__LIB_1__::func_907(bVar7, 1)) && !__LIB_6__::func_279(bVar7)) && !__LIB_3__::func_728(bVar7, 14))
								{
									bVar0 = true;
								}
							}
						}
						if (((((!bVar1 && __LIB_3__::func_234(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar7))) && !__LIB_1__::func_907(bVar7, 1)) && !__LIB_6__::func_279(bVar7)) && !__LIB_3__::func_728(bVar7, 14))
						{
							bVar1 = true;
						}
						if ((!bVar1 && __LIB_6__::func_804(PLAYER::PLAYER_ID())) && __LIB_3__::func_234(bVar7, PLAYER::PLAYER_ID()))
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
						__LIB_10__::func_982(iParam0, -1);
					}
					bVar9 = __LIB_6__::func_58(PLAYER::PLAYER_ID());
					if (__LIB_3__::func_661(0, iParam1))
					{
						__LIB_10__::func_982(iParam0, -1);
					}
					else if (__LIB_3__::func_661(1, iParam1))
					{
						if (bVar1)
						{
							__LIB_12__::func_442(1);
							__LIB_7__::func_656(PLAYER::PLAYER_ID(), iParam0, Var6, 1, 0, 0, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						if (!__LIB_2__::func_752(PLAYER::PLAYER_ID()))
						{
							func_2934(iParam0);
						}
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_12__::func_442(1);
							__LIB_7__::func_656(PLAYER::PLAYER_ID(), iParam0, Var6, 0, 0, 1, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						if (!__LIB_2__::func_752(PLAYER::PLAYER_ID()))
						{
							func_2934(iParam0);
						}
					}
					Jump @693; //curOff = 674
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_2934(int iParam0)//Position - 0xF7C81
{
	__LIB_10__::func_982(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

char* func_2943(var uParam0, var uParam1, var uParam2)//Position - 0xF81A2
{
	int iVar0;
	int iVar1;
	bool bVar2;
	if (__LIB_1__::func_717())
	{
		return "";
	}
	if (__LIB_5__::func_434())
	{
		return "SI_ENTR_BLCK13A" /* GXT: You cannot enter the Nerve Center while on call. You can cancel this via the Quick Join app on the phone. */;
	}
	if (BitTest(Global_1946250.f_4523, 12))
	{
		if (__LIB_6__::func_90(PLAYER::PLAYER_ID(), 240))
		{
			return "CAS_BLOCK_HAC" /* GXT: You cannot enter the rear of the Terrorbyte while holding the security case. */;
		}
	}
	if (__LIB_2__::func_606())
	{
		if (__LIB_6__::func_90(PLAYER::PLAYER_ID(), 242))
		{
			return "BAN_BLOCK_HAC" /* GXT: You cannot enter the rear of the Terrorbyte while holding the gold. */;
		}
		else if (__LIB_6__::func_90(PLAYER::PLAYER_ID(), 241))
		{
			return "JEW_BLOCK_HAC" /* GXT: You cannot enter the rear of the Terrorbyte while holding the diamonds. */;
		}
		else if (__LIB_6__::func_90(PLAYER::PLAYER_ID(), 240))
		{
			return "CAS_BLOCK_HAC" /* GXT: You cannot enter the rear of the Terrorbyte while holding the security case. */;
		}
		else if (__LIB_6__::func_90(PLAYER::PLAYER_ID(), 239))
		{
			return "VAN_BLOCK_HAC" /* GXT: You cannot enter the rear of the Terrorbyte while holding the antiques. */;
		}
	}
	iVar0 = __LIB_7__::func_630(0);
	if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !NETWORK::NETWORK_IS_IN_MP_CUTSCENE()) && PLAYER::PLAYER_ID() == iVar0)
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if ((!__LIB_0__::func_870(iVar1, 1) && !VEHICLE::IS_VEHICLE_MODEL(iVar1, joaat("caddy2"))) && !VEHICLE::IS_VEHICLE_MODEL(iVar1, joaat("caddy3")))
		{
			if (__LIB_0__::func_872(iVar1, 1))
			{
			}
		}
	}
	if (BitTest(Global_1946250.f_506, 0))
	{
		if (__LIB_2__::func_72(PLAYER::PLAYER_ID(), 0))
		{
			bVar2 = __LIB_0__::func_797();
			if (__LIB_6__::func_371(PLAYER::PLAYER_ID(), 0))
			{
				return "BB_TRUCK_KICKd" /* GXT: You no longer have access to the Nerve Center as you became a Prospect. */;
			}
			else if (bVar2 != __LIB_0__::func_162() && __LIB_3__::func_673(bVar2))
			{
				return "BB_TRUCK_KICKa" /* GXT: You no longer have access to the Nerve Center as you became an Associate. */;
			}
			else
			{
				return "BB_TRUCK_KICKb" /* GXT: You no longer have access to the Nerve Center as you became a Bodyguard. */;
			}
		}
	}
	if (__LIB_1__::func_101(PLAYER::PLAYER_PED_ID()) && (PLAYER::PLAYER_ID() == iVar0 || __LIB_0__::func_797() == iVar0))
	{
		return "HAC_BLOCK_MOC" /* GXT: You can't access this Nerve Center whilst wearing the Ballistic Equipment. */;
	}
	if (__LIB_2__::func_906())
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("oppressor2")))
		{
		}
		else
		{
			return "BOUNTY_PROP_BLCK" /* GXT: You cannot enter whilst delivering a bounty. */;
		}
	}
	if (__LIB_3__::func_693() && !__LIB_3__::func_439(PLAYER::PLAYER_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("oppressor2")))
		{
		}
		else
		{
			return "NPC_BLOCK" /* GXT: You cannot enter with non-player characters in the vehicle. */;
		}
	}
	if (__LIB_3__::func_695())
	{
		return "HAC_MC_BLOCK_P" /* GXT: You cannot enter your Nerve Center with a prostitute. */;
	}
	if (__LIB_1__::func_613(PLAYER::PLAYER_ID()) == 3)
	{
		return "SUP_BLOCK_HAC" /* GXT: You can't access this Nerve Center whilst carrying Supplies. */;
	}
	if (__LIB_1__::func_17(PLAYER::PLAYER_ID()) || __LIB_2__::func_711(PLAYER::PLAYER_ID(), 1, 0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("oppressor2")))
		{
		}
		else
		{
			return "HACK_MC_BLOCK_E" /* GXT: You cannot enter your Nerve Center while active in a mission. */;
		}
	}
	if (Global_1835493 != 0)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("terbyte")) && !__LIB_0__::func_872(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1))
			{
				return "HAC_MC_BLOCK_V" /* GXT: You cannot enter your Nerve Center while in a mission vehicle. */;
			}
		}
	}
	if (BitTest(Global_1946250.f_2, 30))
	{
		if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!__LIB_3__::func_684(PLAYER::PLAYER_PED_ID(), 1) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				return "BB_TRUCK_SUTAR" /* GXT: You are unable to access the Nerve Center in this area. Move the Terrorbyte to a suitable area. */;
			}
		}
	}
	return "";
}

int func_2944(var uParam0, var uParam1, var uParam2)//Position - 0xF84AC
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	*uParam2 = 1;
	if ((!__LIB_0__::func_893() || __LIB_3__::func_558()) || HUD::IS_PAUSE_MENU_ACTIVE())
	{
		__LIB_6__::func_803(uParam1, 1);
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
			__LIB_6__::func_803(uParam1, 1);
		}
	}
	if (__LIB_3__::func_717(uParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (__LIB_1__::func_588(iVar2))
			{
				__LIB_7__::func_506(uParam1);
				return 0;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iVar2) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
			{
				__LIB_7__::func_506(uParam1);
				return 0;
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !__LIB_3__::func_561(ENTITY::GET_ENTITY_MODEL(iVar2), 15))
			{
				__LIB_7__::func_506(uParam1);
				return 0;
			}
			iVar3 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1, false);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar3) || PED::IS_PED_INJURED(iVar3))
			{
				__LIB_7__::func_506(uParam1);
				return 0;
			}
			bVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar3);
			if (!__LIB_0__::func_872(iVar2, 1))
			{
				__LIB_7__::func_506(uParam1);
				if (__LIB_5__::func_983(uParam0, iVar2, ENTITY::GET_ENTITY_MODEL(iVar2)))
				{
					if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !HUD::IS_HELP_MESSAGE_ON_SCREEN())
					{
						__LIB_0__::func_151("MP_TRU_PERSV" /* GXT: You can only drive your Oppressor Mk II into the Nerve Center. */, -1);
					}
				}
				return 0;
			}
			if ((__LIB_0__::func_872(iVar2, 1) && __LIB_3__::func_251(iVar2) != bVar4) && !Global_1852994.f_171)
			{
				__LIB_7__::func_506(uParam1);
				if (__LIB_5__::func_983(uParam0, iVar2, ENTITY::GET_ENTITY_MODEL(iVar2)))
				{
					if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !HUD::IS_HELP_MESSAGE_ON_SCREEN())
					{
						__LIB_0__::func_151("MP_TRU_PERSV" /* GXT: You can only drive your Oppressor Mk II into the Nerve Center. */, -1);
					}
				}
				return 0;
			}
			if ((((__LIB_0__::func_872(iVar2, 1) && __LIB_3__::func_251(iVar2) == bVar4) && __LIB_2__::func_734()) && __LIB_5__::func_187(PLAYER::PLAYER_ID(), -1)) && !__LIB_3__::func_644(PLAYER::PLAYER_ID()))
			{
				__LIB_7__::func_506(uParam1);
				return 0;
			}
			if (__LIB_3__::func_689(iVar2))
			{
				__LIB_7__::func_506(uParam1);
				return 0;
			}
			if (__LIB_0__::func_870(iVar2, 1) && __LIB_3__::func_249(iVar2, 1, 0) != bVar4)
			{
				__LIB_7__::func_506(uParam1);
				return 0;
			}
			if (__LIB_2__::func_116(iVar2, 1))
			{
				__LIB_7__::func_506(uParam1);
				return 0;
			}
			if (__LIB_0__::func_871(iVar2, 1))
			{
				__LIB_7__::func_506(uParam1);
				return 0;
			}
			if (__LIB_5__::func_570())
			{
				__LIB_7__::func_506(uParam1);
				return 0;
			}
			if ((__LIB_1__::func_693(bVar4, 1, 1) && __LIB_3__::func_561(ENTITY::GET_ENTITY_MODEL(iVar2), 15)) && __LIB_6__::func_102(bVar4))
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
					if ((!TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2) && !PED::GET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 373)) && !__LIB_2__::func_159(0))
					{
						if (__LIB_5__::func_983(uParam0, iVar2, ENTITY::GET_ENTITY_MODEL(iVar2)))
						{
							if (__LIB_31__::func_267(uParam1, iVar2, !Global_1852994.f_171))
							{
								if ((VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iVar2) || ENTITY::IS_ENTITY_IN_AIR(iVar2)) || !ENTITY::IS_ENTITY_IN_AIR(iVar2))
								{
									__LIB_0__::func_627(&(uParam1->f_397), 1, 0);
								}
								if (__LIB_0__::func_864(&(uParam1->f_397)) && !__LIB_0__::func_937(&(uParam1->f_397), 750, 1))
								{
									iVar1 = 1;
								}
								if (iVar1 || ((__LIB_5__::func_187(PLAYER::PLAYER_ID(), -1) && __LIB_3__::func_644(PLAYER::PLAYER_ID())) && __LIB_0__::func_172(__LIB_5__::func_196(PLAYER::PLAYER_ID())) == 12))
								{
									if (__LIB_6__::func_293() || (__LIB_3__::func_644(PLAYER::PLAYER_ID()) && __LIB_0__::func_172(__LIB_5__::func_196(PLAYER::PLAYER_ID())) == 12))
									{
										if ((__LIB_5__::func_187(PLAYER::PLAYER_ID(), -1) && __LIB_3__::func_644(PLAYER::PLAYER_ID())) && __LIB_0__::func_172(__LIB_5__::func_196(PLAYER::PLAYER_ID())) == 12)
										{
											__LIB_3__::func_122(&(uParam1->f_22.f_94));
											__LIB_7__::func_422(iVar2);
											return 1;
										}
										else
										{
											if ((__LIB_5__::func_187(PLAYER::PLAYER_ID(), -1) && __LIB_4__::func_291(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 0, 1075838976, 0)) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1, 30))
											{
												bVar0 = true;
												if (uParam1->f_22.f_94 == -1)
												{
													__LIB_5__::func_569(&(uParam1->f_22.f_94), 5, "HACKER_ENTER0" /* GXT: Press ~INPUT_CONTEXT~ to enter the Nerve Center with current vehicle. */, 0, 0, 0, 0);
												}
											}
											if ((__LIB_5__::func_983(uParam0, iVar2, ENTITY::GET_ENTITY_MODEL(iVar2)) && (__LIB_3__::func_113(uParam1->f_22.f_94, 1) && !HUD::IS_WARNING_MESSAGE_ACTIVE())) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1, 30))
											{
												__LIB_3__::func_122(&(uParam1->f_22.f_94));
												__LIB_5__::func_435(1, *uParam0);
												__LIB_6__::func_803(uParam1, 0);
												__LIB_7__::func_422(iVar2);
												return 1;
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
								__LIB_6__::func_803(uParam1, 1);
							}
						}
					}
				}
				else
				{
					func_2945(*uParam0);
					if (__LIB_3__::func_643(PLAYER::PLAYER_ID()))
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
				__LIB_6__::func_803(uParam1, 1);
				return 0;
			}
		}
		else if (__LIB_3__::func_363(uParam1->f_22.f_94, 0))
		{
			HUD::CLEAR_HELP(true);
			__LIB_3__::func_122(&(uParam1->f_22.f_94));
		}
	}
	else if (__LIB_3__::func_363(uParam1->f_22.f_94, 0))
	{
		HUD::CLEAR_HELP(true);
		__LIB_3__::func_122(&(uParam1->f_22.f_94));
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
	__LIB_6__::func_803(uParam1, 1);
	return 0;
}

void func_2945(int iParam0)//Position - 0xF8ACA
{
	int iVar0;
	int iVar1;
	bool bVar2;
	if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !__LIB_5__::func_195(PLAYER::PLAYER_ID()))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (__LIB_0__::func_695(iVar0))
			{
				iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false);
				if (!PED::IS_PED_INJURED(iVar1))
				{
					if (PED::IS_PED_A_PLAYER(iVar1))
					{
						bVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
						if (bVar2 != PLAYER::PLAYER_ID() && __LIB_1__::func_693(bVar2, 1, 1))
						{
							if (BitTest(Global_2689235[bVar2 /*453*/].f_318, 5) && __LIB_0__::func_172(__LIB_5__::func_196(bVar2)) == 12)
							{
								if (func_2946(iParam0))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 0)
									{
										TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
									}
									if (__LIB_3__::func_643(PLAYER::PLAYER_ID()))
									{
										__LIB_6__::func_410(PLAYER::PLAYER_ID(), 1, 0, 0);
									}
								}
								else
								{
									if (!BitTest(Global_2689235[bVar2 /*453*/].f_318.f_1, 31) && !BitTest(Global_2689235[bVar2 /*453*/].f_318.f_3, 2))
									{
										__LIB_6__::func_410(PLAYER::PLAYER_ID(), 0, 256, 0);
									}
									else
									{
										__LIB_6__::func_410(PLAYER::PLAYER_ID(), 1, 0, 0);
									}
									__LIB_3__::func_699();
									__LIB_3__::func_641(1);
									return;
								}
							}
						}
					}
				}
			}
		}
	}
	if (__LIB_3__::func_643(PLAYER::PLAYER_ID()))
	{
		__LIB_6__::func_410(PLAYER::PLAYER_ID(), 1, 0, 0);
		__LIB_3__::func_642();
		__LIB_3__::func_641(0);
	}
}

int func_2946(int iParam0)//Position - 0xF8C2F
{
	if (HUD::IS_WARNING_MESSAGE_ACTIVE() || func_2966(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_2966(int iParam0)//Position - 0xF9621
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	struct<3> Var4;
	struct<3> Var5;
	if (__LIB_4__::func_279() || __LIB_4__::func_293(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!__LIB_6__::func_824(1))
	{
		return 1;
	}
	bVar0 = false;
	iVar1 = __LIB_7__::func_430();
	iVar2 = __LIB_3__::func_249(iVar1, 1, 0);
	bVar3 = false;
	if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || __LIB_4__::func_279()) || __LIB_4__::func_278(PLAYER::PLAYER_ID()))
	{
		if (((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && __LIB_0__::func_870(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1)) || __LIB_4__::func_279()) || __LIB_4__::func_278(PLAYER::PLAYER_ID()))
		{
			bVar3 = true;
		}
	}
	if (__LIB_15__::func_667(bVar0, 12))
	{
		return 1;
	}
	if (BitTest(Global_1946250.f_4523, 12))
	{
		return 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (ENTITY::IS_ENTITY_DEAD(iVar1, false) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318, 19))
		{
			return 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if ((!ENTITY::IS_ENTITY_VISIBLE(iVar1) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318, 19)) && !__LIB_3__::func_950(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, false))
	{
		if ((ENTITY::GET_ENTITY_SPEED(iVar1) > 0.5f && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318, 19)) && !__LIB_3__::func_950(PLAYER::PLAYER_ID()))
		{
			__LIB_5__::func_498(0, iParam0, 0);
			return 1;
		}
	}
	if (__LIB_3__::func_695())
	{
		return 1;
	}
	if (__LIB_0__::func_983())
	{
		return 1;
	}
	if (((((BitTest(Global_1946250, 19) && ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID())) && !__LIB_6__::func_58(iVar2)) && (__LIB_0__::func_121(iVar1) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar1, true)))
	{
		if (!__LIB_6__::func_58(iVar2) && !__LIB_2__::func_752(PLAYER::PLAYER_ID()))
		{
			if (!BitTest(Global_1946250.f_2, 30))
			{
				MISC::SET_BIT(&(Global_1946250.f_2), 30);
			}
		}
		return 1;
	}
	if (__LIB_4__::func_306(iVar2) || __LIB_4__::func_305(iVar2))
	{
		return 1;
	}
	if ((ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, false)) && !bVar3)
	{
		if (ENTITY::IS_ENTITY_IN_AIR(iVar1) || ENTITY::IS_ENTITY_UPSIDEDOWN(iVar1))
		{
			if (!BitTest(Global_1946250.f_2, 30))
			{
				MISC::SET_BIT(&(Global_1946250.f_2), 30);
			}
			return 1;
		}
	}
	if ((ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, false)) && !bVar3)
	{
		if (ENTITY::IS_ENTITY_IN_AIR(iVar1))
		{
			if (!BitTest(Global_1946250.f_2, 30))
			{
				MISC::SET_BIT(&(Global_1946250.f_2), 30);
			}
			return 1;
		}
	}
	__LIB_7__::func_585(iParam0, &Var4);
	if (__LIB_2__::func_72(PLAYER::PLAYER_ID(), 0))
	{
		if (PLAYER::PLAYER_ID() == iVar2)
		{
			return 1;
		}
	}
	if (__LIB_4__::func_304(iVar2))
	{
		return 1;
	}
	if (__LIB_5__::func_574(iParam0, iVar1, Var4))
	{
		if (!BitTest(Global_1946250.f_2, 30))
		{
			MISC::SET_BIT(&(Global_1946250.f_2), 30);
		}
		return 1;
	}
	if (__LIB_5__::func_573(iParam0, iVar1, Var4))
	{
		if (!BitTest(Global_1946250.f_2, 30))
		{
			MISC::SET_BIT(&(Global_1946250.f_2), 30);
		}
		return 1;
	}
	if (__LIB_5__::func_572(iParam0, iVar1, Var4))
	{
		if (!BitTest(Global_1946250.f_2, 30))
		{
			MISC::SET_BIT(&(Global_1946250.f_2), 30);
		}
		return 1;
	}
	if (__LIB_4__::func_299(iParam0, iVar1, Var4))
	{
		if (!BitTest(Global_1946250.f_2, 30))
		{
			MISC::SET_BIT(&(Global_1946250.f_2), 30);
		}
		return 1;
	}
	if (__LIB_4__::func_298(iParam0, iVar1, Var4))
	{
		if (!BitTest(Global_1946250.f_2, 30))
		{
			MISC::SET_BIT(&(Global_1946250.f_2), 30);
		}
		return 1;
	}
	if (__LIB_4__::func_297(iParam0, iVar1, Var4))
	{
		if (!BitTest(Global_1946250.f_2, 30))
		{
			MISC::SET_BIT(&(Global_1946250.f_2), 30);
		}
		return 1;
	}
	if (__LIB_6__::func_664(iParam0, iVar1, Var4))
	{
		if (!BitTest(Global_1946250.f_2, 30))
		{
			MISC::SET_BIT(&(Global_1946250.f_2), 30);
		}
		return 1;
	}
	if (__LIB_6__::func_484(iParam0, iVar1, Var4))
	{
		if (!BitTest(Global_1946250.f_2, 30))
		{
			MISC::SET_BIT(&(Global_1946250.f_2), 30);
		}
		return 1;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (ENTITY::DOES_ENTITY_EXIST(__LIB_1__::func_640()))
		{
			if (__LIB_0__::func_724(__LIB_1__::func_640(), Var4, 1) < 1.5f)
			{
				return 1;
			}
		}
	}
	if (__LIB_1__::func_510(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (__LIB_5__::func_570())
	{
		return 1;
	}
	if (__LIB_4__::func_295(iVar2))
	{
		return 1;
	}
	if (__LIB_6__::func_58(iVar2) || __LIB_4__::func_287(iVar2))
	{
		if (!__LIB_4__::func_902(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
		else if (__LIB_5__::func_434())
		{
			return 1;
		}
	}
	if (iVar2 != __LIB_0__::func_162() && iVar2 != PLAYER::PLAYER_ID())
	{
		if (__LIB_4__::func_282(iVar2))
		{
			return 1;
		}
	}
	if (iVar2 != __LIB_0__::func_162())
	{
		if (__LIB_4__::func_286(iVar2))
		{
			return 1;
		}
		if (BitTest(Global_2689235[iVar2 /*453*/].f_318.f_1, 23))
		{
			return 1;
		}
	}
	if ((NETWORK::NETWORK_IS_IN_MP_CUTSCENE() && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318, 19)) && !__LIB_3__::func_950(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (__LIB_1__::func_17(PLAYER::PLAYER_ID()) || __LIB_2__::func_711(PLAYER::PLAYER_ID(), 1, 0))
	{
		return 1;
	}
	if (Global_2815059.f_317 && !__LIB_2__::func_752(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (__LIB_3__::func_965())
	{
		return 1;
	}
	if (((ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, false)) && !__LIB_6__::func_58(iVar2)) && !__LIB_3__::func_950(PLAYER::PLAYER_ID()))
	{
		Var5 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar1, 0f, -8.1f, 0f) };
		if (MISC::ABSF((Var5.f_2 - Var4.f_2)) > 4f)
		{
			MISC::SET_BIT(&(Global_1946250.f_2), 30);
			return 1;
		}
	}
	if (__LIB_4__::func_294(Var4))
	{
		if (!BitTest(Global_1946250.f_2, 30))
		{
			MISC::SET_BIT(&(Global_1946250.f_2), 30);
		}
		return 1;
	}
	if (__LIB_6__::func_322())
	{
		if (!BitTest(Global_1946250.f_2, 30))
		{
			MISC::SET_BIT(&(Global_1946250.f_2), 30);
		}
		return 1;
	}
	if (__LIB_1__::func_848(iVar2))
	{
		return 1;
	}
	if (Global_2787784)
	{
		return 1;
	}
	if ((Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_95 == 8 && __LIB_1__::func_736()) && !__LIB_0__::func_626())
	{
		return 1;
	}
	if (__LIB_1__::func_583(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (__LIB_3__::func_728(PLAYER::PLAYER_ID(), 14))
	{
		return 1;
	}
	if (__LIB_7__::func_584(Var4))
	{
		if (!__LIB_6__::func_58(iVar2) && !__LIB_2__::func_752(PLAYER::PLAYER_ID()))
		{
			if (!BitTest(Global_1946250.f_2, 30))
			{
				MISC::SET_BIT(&(Global_1946250.f_2), 30);
			}
		}
		return 1;
	}
	if (__LIB_1__::func_512())
	{
		return 1;
	}
	if (__LIB_3__::func_171(PLAYER::PLAYER_ID()))
	{
		if (__LIB_0__::func_172(__LIB_1__::func_935(PLAYER::PLAYER_ID())) != 12)
		{
		}
	}
	if (__LIB_2__::func_906())
	{
		return 1;
	}
	if (BitTest(Global_1946250.f_2, 13))
	{
		return 1;
	}
	if (__LIB_3__::func_963())
	{
		return 1;
	}
	if (__LIB_0__::func_77(0))
	{
		return 1;
	}
	if (Global_2815059.f_317 && !__LIB_2__::func_752(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (__LIB_4__::func_283(iVar2))
	{
		return 1;
	}
	if (Global_1835491)
	{
		return 1;
	}
	if (__LIB_3__::func_962(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (__LIB_0__::func_1("MBSOT_POST3" /* GXT: Press ~INPUT_CONTEXT~ to place the poster. */))
	{
		return 1;
	}
	if (Global_2789734)
	{
		return 1;
	}
	if (BitTest(Global_1946250.f_2, 30))
	{
		if (__LIB_0__::func_1("BB_TRUCK_SUTAR" /* GXT: You are unable to access the Nerve Center in this area. Move the Terrorbyte to a suitable area. */))
		{
			HUD::CLEAR_HELP(true);
		}
		MISC::CLEAR_BIT(&(Global_1946250.f_2), 30);
	}
	return 0;
}

void func_3007(var uParam0, int iParam1)//Position - 0xFAFF4
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1091356/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1091116/*__LIB_5__::func_592*/;
			break;
		case 2:
			uParam0->f_31 = 1088813/*__LIB_5__::func_591*/;
			break;
		case 3:
			uParam0->f_34 = 1088604/*__LIB_4__::func_393*/;
			break;
		case 4:
			uParam0->f_12 = 1088397/*__LIB_5__::func_590*/;
			break;
		case 5:
			uParam0->f_11 = 1088319/*__LIB_6__::func_491*/;
			break;
		case 37:
			uParam0->f_18 = 1088179/*__LIB_7__::func_237*/;
			break;
		case 38:
			uParam0->f_9 = 1088123/*__LIB_12__::func_128*/;
			break;
		case 42:
			uParam0->f_10 = 1087962/*__LIB_5__::func_988*/;
			break;
		case 6:
			uParam0->f_32 = 1087726/*__LIB_4__::func_390*/;
			break;
		case 111:
			uParam0->f_35 = 1087712/*__LIB_7__::func_333*/;
			break;
		case 11:
			uParam0->f_11 = 1087703/*__LIB_1__::func_804*/;
			break;
		case 12:
			uParam0->f_33 = 1084333/*__LIB_10__::func_540*/;
			break;
		case 14:
			uParam0->f_11 = 1084324/*__LIB_1__::func_806*/;
			break;
		case 109:
			uParam0->f_56 = 1070451/*__LIB_6__::func_489*/;
			break;
		case 79:
			*uParam0 = 1070195/*__LIB_7__::func_332*/;
			break;
		case 13:
			uParam0->f_2 = 1070146/*__LIB_5__::func_745*/;
			break;
		case 15:
			uParam0->f_2 = 1069935/*__LIB_31__::func_22*/;
			break;
		case 44:
			*uParam0 = 1069926/*__LIB_0__::func_114*/;
			break;
		case 75:
			uParam0->f_4 = 1069897/*__LIB_5__::func_587*/;
			break;
		case 16:
			uParam0->f_5 = 1069170/*__LIB_12__::func_457*/;
			break;
		case 108:
			uParam0->f_55 = 1065316/*__LIB_40__::func_819*/;
			break;
		case 17:
			uParam0->f_17 = 1064002/*func_3176*/;
			break;
		case 19:
			uParam0->f_17 = 1063956/*__LIB_7__::func_331*/;
			break;
		case 20:
			uParam0->f_3 = 1063791/*__LIB_6__::func_669*/;
			break;
		case 21:
			uParam0->f_3 = 1063727/*__LIB_5__::func_798*/;
			break;
		case 74:
			uParam0->f_53 = 1063500/*__LIB_11__::func_622*/;
			break;
		case 22:
			uParam0->f_24 = 1063377/*__LIB_6__::func_668*/;
			break;
		case 26:
			uParam0->f_38 = 1059999/*func_3145*/;
			break;
		case 25:
			uParam0->f_23 = 1059678/*func_3143*/;
			break;
		case 27:
			uParam0->f_25 = 1058530/*__LIB_10__::func_983*/;
			break;
		case 28:
			uParam0->f_24 = 1058418/*__LIB_4__::func_371*/;
			break;
		case 29:
			uParam0->f_28 = 1058337/*__LIB_4__::func_370*/;
			break;
		case 30:
			uParam0->f_8 = 1057447/*__LIB_11__::func_639*/;
			break;
		case 31:
			uParam0->f_39 = 1056897/*__LIB_7__::func_438*/;
			break;
		case 33:
			uParam0->f_40 = 1056215/*__LIB_7__::func_509*/;
			break;
		case 32:
			*uParam0 = 1056122/*__LIB_7__::func_437*/;
			break;
		case 34:
			uParam0->f_41 = 1046856/*__LIB_5__::func_986*/;
			break;
		case 36:
			uParam0->f_58 = 1046798/*__LIB_4__::func_359*/;
			break;
		case 35:
			uParam0->f_42 = 942764/*__LIB_7__::func_431*/;
			break;
		case 45:
			uParam0->f_14 = 1046789/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 1046780/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 1046772/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1046723/*__LIB_7__::func_236*/;
			break;
		case 47:
			uParam0->f_43 = 1046431/*__LIB_7__::func_235*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 1043408/*__LIB_10__::func_552*/;
			break;
		case 49:
			uParam0->f_8 = 1043304/*__LIB_7__::func_234*/;
			break;
		case 50:
			*uParam0 = 1043021/*__LIB_7__::func_435*/;
			break;
		case 51:
			*uParam0 = 1042859/*__LIB_22__::func_288*/;
			break;
		case 52:
			uParam0->f_15 = 1042848/*__LIB_4__::func_344*/;
			break;
		case 53:
			uParam0->f_13 = 1042590/*__LIB_4__::func_343*/;
			break;
		case 54:
			uParam0->f_45 = 1042328/*__LIB_7__::func_434*/;
			break;
		case 56:
			uParam0->f_46 = 1042319/*__LIB_3__::func_969*/;
			break;
		case 57:
			uParam0->f_11 = 1041162/*__LIB_7__::func_508*/;
			break;
		case 58:
			uParam0->f_13 = 1040904/*__LIB_4__::func_338*/;
			break;
		case 59:
			*uParam0 = 1040625/*__LIB_6__::func_750*/;
			break;
		case 60:
			*uParam0 = 1040616/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 1040605/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 1040347/*__LIB_4__::func_336*/;
			break;
		case 55:
			uParam0->f_45 = 1040339/*__LIB_0__::func_467*/;
			break;
		case 63:
			uParam0->f_11 = 1040281/*__LIB_5__::func_985*/;
			break;
		case 64:
			uParam0->f_47 = 1040131/*__LIB_7__::func_631*/;
			break;
		case 65:
			uParam0->f_21 = 1038424/*__LIB_10__::func_703*/;
			break;
		case 66:
			uParam0->f_21 = 1038113/*__LIB_7__::func_330*/;
			break;
		case 67:
			uParam0->f_21 = 1037961/*__LIB_4__::func_334*/;
			break;
		case 68:
			*uParam0 = 1036961/*__LIB_7__::func_432*/;
			break;
		case 69:
			*uParam0 = 1036952/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 1036503/*__LIB_4__::func_331*/;
			break;
		case 71:
			uParam0->f_49 = 1036224/*__LIB_4__::func_330*/;
			break;
		case 107:
			uParam0->f_50 = 1036212/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1035979/*__LIB_5__::func_889*/;
			break;
		case 84:
			uParam0->f_1 = 1035970/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 1033875/*func_3028*/;
			break;
		case 87:
			uParam0->f_1 = 1030972/*__LIB_6__::func_422*/;
			break;
		case 88:
			uParam0->f_1 = 1030963/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 1030955/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 1030929/*__LIB_4__::func_316*/;
			break;
		case 97:
			uParam0->f_1 = 1030820/*__LIB_3__::func_976*/;
			break;
		case 98:
			uParam0->f_1 = 1030109/*func_3014*/;
			break;
		case 100:
			uParam0->f_22 = 1029946/*__LIB_4__::func_315*/;
			break;
		case 101:
			uParam0->f_22 = 1029819/*__LIB_11__::func_953*/;
			break;
		case 78:
			uParam0->f_59 = 1029529/*__LIB_6__::func_323*/;
			break;
		case 125:
			uParam0->f_19 = 1029505/*__LIB_4__::func_313*/;
			break;
	}
}

int func_3014(var uParam0, var uParam1)//Position - 0xFB7DD
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
		func_1377(&(uParam1->f_140[2]), PLAYER::PLAYER_ID(), 1, 0);
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
	__LIB_6__::func_410(PLAYER::PLAYER_ID(), 0, 262144, 0);
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

int func_3028(int iParam0, var uParam1)//Position - 0xFC693
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
			func_297(&iVar1, &(uParam1->f_109), 60);
			__LIB_3__::func_633(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_214(&iVar1, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 0, 0, 1))
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

void func_3143(int iParam0, int iParam1)//Position - 0x102B5E
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	Var2 = { __LIB_4__::func_301(iParam0) };
	if (__LIB_6__::func_669(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		func_521(iParam0, Var2, &bVar0, &bVar1, 1, 0);
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
			__LIB_7__::func_509(iParam0, -1);
		}
		if (__LIB_3__::func_661(0, iParam1))
		{
			__LIB_7__::func_509(iParam0, -1);
		}
		else if (__LIB_3__::func_661(1, iParam1))
		{
			if (bVar1)
			{
				__LIB_7__::func_656(PLAYER::PLAYER_ID(), iParam0, Var2, 1, 0, 0, 0, -1, -1, -1);
			}
			__LIB_8__::func_32(iParam0);
		}
		else if (__LIB_3__::func_661(2, iParam1))
		{
			if (bVar0)
			{
				__LIB_7__::func_656(PLAYER::PLAYER_ID(), iParam0, Var2, 0, 0, 1, 0, -1, -1, -1);
			}
			__LIB_8__::func_32(iParam0);
		}
	}
	else
	{
		__LIB_5__::func_189(iParam1, 1, 0);
		__LIB_5__::func_189(iParam1, 2, 0);
	}
}

void func_3145(var uParam0, var uParam1)//Position - 0x102C9F
{
	if (__LIB_3__::func_616() == 2)
	{
		func_3159(uParam0, uParam1);
	}
	else if (__LIB_3__::func_616() == 0)
	{
		if (__LIB_2__::func_72(PLAYER::PLAYER_ID(), 0))
		{
			__LIB_8__::func_33(uParam0, uParam1);
		}
		else
		{
			func_3147(uParam0, uParam1);
		}
	}
	else if (__LIB_3__::func_616() == 3)
	{
		if (__LIB_2__::func_72(PLAYER::PLAYER_ID(), 0))
		{
			__LIB_8__::func_33(uParam0, uParam1);
		}
		else
		{
			__LIB_4__::func_376(uParam1);
		}
	}
}

void func_3147(var uParam0, var uParam1)//Position - 0x102D2A
{
	int iVar0;
	iVar0 = __LIB_3__::func_785();
	switch (iVar0)
	{
		case 0:
			__LIB_10__::func_999(uParam0, uParam1);
			break;
		case 1:
			func_3148(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_3148(var uParam0, var uParam1)//Position - 0x102D64
{
	int iVar0;
	int iVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_521(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, __LIB_6__::func_665(PLAYER::PLAYER_ID()), 0);
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

void func_3159(var uParam0, var uParam1)//Position - 0x10327E
{
	int iVar0;
	iVar0 = __LIB_3__::func_785();
	switch (iVar0)
	{
		case 0:
			__LIB_10__::func_984(uParam0, uParam1);
			break;
		case 1:
			func_3168(uParam0, uParam1);
			break;
		case 2:
			__LIB_31__::func_616(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_3168(var uParam0, var uParam1)//Position - 0x10372B
{
	int iVar0;
	int iVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_521(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, 1, 0);
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
		if (__LIB_7__::func_996(*uParam0))
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
			__LIB_7__::func_509(*uParam0, -1);
			__LIB_5__::func_462();
		}
	}
}

char* func_3176(int iParam0, var uParam1, int iParam2)//Position - 0x103C42
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	if (__LIB_5__::func_434())
	{
		if (iParam2 == 0 || iParam2 == 1)
		{
			return "SI_ENTR_BLCK11A" /* GXT: You cannot enter the Nightclub Warehouse while on call. You can cancel this via the Quick Join app on the phone. */;
		}
		else
		{
			return "SI_ENTR_BLCK12A" /* GXT: You cannot enter the Nightclub while on call. You can cancel this via the Quick Join app on the phone. */;
		}
	}
	iVar0 = __LIB_4__::func_322(iParam0);
	bVar1 = __LIB_0__::func_797();
	if (__LIB_1__::func_907(PLAYER::PLAYER_ID(), 0))
	{
		iVar2 = __LIB_5__::func_185(PLAYER::PLAYER_ID());
		if (PLAYER::PLAYER_ID() != __LIB_0__::func_162())
		{
			if (iParam2 == 2 || iParam2 == 3)
			{
				switch (iVar2)
				{
					case 192:
						return "CLUB_BLOCK_A" /* GXT: You can't enter this Nightclub while resupplying another business. */;
					case 190:
						return "CLUB_BLOCK_B" /* GXT: You can't enter this Nightclub while selling goods from another business. */;
					case 167:
						return "CLUB_BLOCK_C" /* GXT: You can't enter this Nightclub while acquiring goods for a warehouse. */;
					case 168:
						return "CLUB_BLOCK_D" /* GXT: You can't enter this Nightclub while selling goods from a warehouse. */;
					case 178:
						return "CLUB_BLOCK_E" /* GXT: You can't enter this Nightclub while acquiring a vehicle for a warehouse. */;
					case 188:
						return "CLUB_BLOCK_F" /* GXT: You can't enter this Nightclub while selling vehicles from a warehouse. */;
					case 225:
						return "CLUB_BLOCK_G" /* GXT: You can't enter this Nightclub while acquiring goods for a bunker. */;
					case 226:
						return "CLUB_BLOCK_H" /* GXT: You can't enter this Nightclub while selling goods from a bunker. */;
					case 229:
						return "CLUB_BLOCK_I" /* GXT: You can't enter this Nightclub while acquiring goods for a hangar. */;
					case 230:
						return "CLUB_BLOCK_J" /* GXT: You can't enter this Nightclub while selling goods from a hangar. */;
					default:
				}
			}
			else
			{
				switch (iVar2)
				{
					case 192:
						return "HUB_BLOCK_A" /* GXT: You can't enter this Nightclub Warehouse while resupplying another business. */;
					case 190:
						return "HUB_BLOCK_B" /* GXT: You can't enter this Nightclub Warehouse while selling goods from another business. */;
					case 167:
						return "HUB_BLOCK_C" /* GXT: You can't enter this Nightclub Warehouse while acquiring goods for a warehouse. */;
					case 168:
						return "HUB_BLOCK_D" /* GXT: You can't enter this Nightclub Warehouse while selling goods from a warehouse. */;
					case 178:
						return "HUB_BLOCK_E" /* GXT: You can't enter this Nightclub Warehouse while acquiring a vehicle for a warehouse. */;
					case 188:
						return "HUB_BLOCK_F" /* GXT: You can't enter this Nightclub Warehouse while selling vehicles from a warehouse. */;
					case 225:
						return "HUB_BLOCK_G" /* GXT: You can't enter this Nightclub Warehouse while acquiring goods for a bunker. */;
					case 226:
						return "HUB_BLOCK_H" /* GXT: You can't enter this Nightclub Warehouse while selling goods from a bunker. */;
					case 229:
						return "HUB_BLOCK_I" /* GXT: You can't enter this Nightclub Warehouse while acquiring goods for a hangar. */;
					case 230:
						return "HUB_BLOCK_J" /* GXT: You can't enter this Nightclub Warehouse while selling goods from a hangar. */;
					}
				}
			}
		default:
	}
	if (__LIB_3__::func_695())
	{
		if (iParam2 == 2 || iParam2 == 3)
		{
			return "CLUB_BLOCK_K" /* GXT: You cannot enter your Nightclub with a prostitute. */;
		}
		else
		{
			return "HUB_BLOCK_K" /* GXT: You cannot enter your Nightclub Warehouse with a prostitute. */;
		}
	}
	if (__LIB_2__::func_906())
	{
		return "BOUNTY_PROP_BLCK" /* GXT: You cannot enter whilst delivering a bounty. */;
	}
	if (__LIB_3__::func_694(PLAYER::PLAYER_ID()))
	{
		if (iParam2 == 2 || iParam2 == 3)
		{
			return "CLUB_BLOCK_L" /* GXT: You can't access your Nightclub as the Beast. */;
		}
		else
		{
			return "HUB_BLOCK_L" /* GXT: You can't access your Nightclub Warehouse as the Beast. */;
		}
	}
	if ((__LIB_3__::func_693() && !__LIB_4__::func_381(__LIB_6__::func_283(PLAYER::PLAYER_ID()))) && !__LIB_3__::func_439(PLAYER::PLAYER_ID()))
	{
		return "NPC_BLOCK" /* GXT: You cannot enter with non-player characters in the vehicle. */;
	}
	iVar3 = 0;
	if ((bVar1 != __LIB_0__::func_162() && bVar1 != PLAYER::PLAYER_ID()) && __LIB_6__::func_104(bVar1, iVar0))
	{
		iVar3 = 1;
	}
	if (__LIB_1__::func_101(PLAYER::PLAYER_PED_ID()) && (__LIB_6__::func_104(PLAYER::PLAYER_ID(), iVar0) || iVar3))
	{
		if (iParam2 == 2 || iParam2 == 3)
		{
			return "CLUB_BLOCK_M" /* GXT: You can't access this Nightclub whilst wearing the Ballistic Equipment. */;
		}
		else
		{
			return "HUB_BLOCK_M" /* GXT: You can't access this Nightclub Warehouse whilst wearing the Ballistic Equipment. */;
		}
	}
	if (((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && iVar3) && !__LIB_4__::func_78(__LIB_5__::func_185(PLAYER::PLAYER_ID()))) && !__LIB_5__::func_192(PLAYER::PLAYER_ID()))
	{
		if (__LIB_5__::func_187(PLAYER::PLAYER_ID(), -1))
		{
			if (iParam2 == 2 || iParam2 == 3)
			{
				return "CLUB_BLOCK_S" /* GXT: You cannot enter this Nightclub whilst in a vehicle. */;
			}
			else
			{
				return "HUB_BLOCK_S" /* GXT: You cannot enter this Nightclub Warehouse whilst in a vehicle. */;
			}
		}
	}
	if (__LIB_6__::func_104(PLAYER::PLAYER_ID(), iVar0) && !__LIB_5__::func_873(PLAYER::PLAYER_ID()))
	{
		if (__LIB_6__::func_371(PLAYER::PLAYER_ID(), 0))
		{
			if (!__LIB_1__::func_592(PLAYER::PLAYER_ID()) == 140)
			{
				if (iParam2 == 2 || iParam2 == 3)
				{
				}
				else
				{
					return "HUB_BLOCK_N" /* GXT: Your Nightclub Warehouse is unavailable whilst being a member of an MC. */;
				}
			}
		}
		else if (__LIB_2__::func_72(PLAYER::PLAYER_ID(), 0))
		{
			if (!__LIB_6__::func_104(bVar1, iVar0))
			{
				if (__LIB_3__::func_673(bVar1))
				{
					if (iParam2 == 2 || iParam2 == 3)
					{
					}
					else
					{
						return "HUB_BLOCK_O" /* GXT: Your Nightclub Warehouse is unavailable when working as an Associate for a CEO. */;
					}
				}
				else if (iParam2 == 2 || iParam2 == 3)
				{
				}
				else
				{
					return "HUB_BLOCK_P" /* GXT: Your Nightclub Warehouse is unavailable when working as a Bodyguard for a VIP. */;
				}
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar6 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			iVar7 = __LIB_3__::func_392(iVar6, &uVar5, &uVar4);
			iVar8 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar6, -1, false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar8))
			{
				iVar9 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar8);
				if (__LIB_5__::func_187(PLAYER::PLAYER_ID(), -1))
				{
					if (!__LIB_6__::func_279(PLAYER::PLAYER_ID()))
					{
						if (__LIB_3__::func_690(iVar6))
						{
							return "CLUB_BLOCK_R" /* GXT: You cannot enter the Nightclub with the Mobile Operations Center. */;
						}
						else if ((((((__LIB_1__::func_589(iVar6) || __LIB_1__::func_819(ENTITY::GET_ENTITY_MODEL(iVar6))) || !__LIB_3__::func_561(ENTITY::GET_ENTITY_MODEL(iVar6), 15)) || __LIB_1__::func_590(ENTITY::GET_ENTITY_MODEL(iVar6))) || __LIB_1__::func_588(iVar6)) || __LIB_3__::func_689(iVar6)) || (__LIB_0__::func_872(iVar6, 1) && iVar7 != iVar9))
						{
							if (!__LIB_4__::func_379(__LIB_4__::func_380()))
							{
								return "CLUB_BLOCK_Q" /* GXT: You cannot enter the Nightclub with this vehicle. */;
							}
						}
					}
				}
			}
		}
	}
	return "";
}

void func_3238(var uParam0, int iParam1)//Position - 0x10A725
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1098883/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1098827/*__LIB_4__::func_411*/;
			break;
		case 2:
			uParam0->f_31 = 1098558/*__LIB_5__::func_324*/;
			break;
		case 3:
			uParam0->f_34 = 1098497/*__LIB_4__::func_410*/;
			break;
		case 4:
			uParam0->f_12 = 1098466/*__LIB_4__::func_409*/;
			break;
		case 6:
			uParam0->f_32 = 1098402/*__LIB_4__::func_408*/;
			break;
		case 111:
			uParam0->f_35 = 1098393/*__LIB_0__::func_162*/;
			break;
		case 11:
			uParam0->f_11 = 1098384/*__LIB_0__::func_109*/;
			break;
		case 14:
			uParam0->f_11 = 1098375/*__LIB_0__::func_162*/;
			break;
		case 12:
			uParam0->f_33 = 1098164/*__LIB_7__::func_997*/;
			break;
		case 109:
			uParam0->f_56 = 1098156/*__LIB_0__::func_467*/;
			break;
		case 79:
			*uParam0 = 1098132/*__LIB_5__::func_265*/;
			break;
		case 13:
			uParam0->f_2 = 1098123/*__LIB_0__::func_114*/;
			break;
		case 15:
			uParam0->f_2 = 1097180/*__LIB_11__::func_340*/;
			break;
		case 75:
			uParam0->f_4 = 1097171/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1097146/*__LIB_5__::func_323*/;
			break;
		case 108:
			uParam0->f_55 = 1097137/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 1097111/*__LIB_5__::func_322*/;
			break;
		case 19:
			uParam0->f_17 = 1097099/*__LIB_3__::func_860*/;
			break;
		case 20:
			uParam0->f_3 = 1097090/*__LIB_0__::func_114*/;
			break;
		case 21:
			uParam0->f_3 = 1097081/*__LIB_0__::func_114*/;
			break;
		case 74:
			uParam0->f_53 = 1096613/*__LIB_7__::func_636*/;
			break;
		case 22:
			uParam0->f_24 = 1096494/*__LIB_6__::func_672*/;
			break;
		case 25:
			uParam0->f_23 = 1095724/*func_3280*/;
			break;
		case 30:
			uParam0->f_8 = 1095578/*__LIB_6__::func_492*/;
			break;
		case 31:
			uParam0->f_39 = 1095566/*__LIB_3__::func_860*/;
			break;
		case 33:
			uParam0->f_40 = 1095359/*__LIB_7__::func_634*/;
			break;
		case 34:
			uParam0->f_41 = 1095042/*__LIB_5__::func_594*/;
			break;
		case 36:
			uParam0->f_58 = 1094989/*__LIB_3__::func_945*/;
			break;
		case 35:
			uParam0->f_42 = 1094216/*__LIB_5__::func_891*/;
			break;
		case 45:
			uParam0->f_14 = 1094207/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 1094198/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 1094190/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1094179/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1093940/*__LIB_5__::func_890*/;
			break;
		case 49:
			uParam0->f_8 = 1093931/*__LIB_0__::func_114*/;
			break;
		case 50:
			*uParam0 = 1093922/*__LIB_0__::func_114*/;
			break;
		case 51:
			*uParam0 = 1093913/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 1093902/*__LIB_4__::func_401*/;
			break;
		case 53:
			uParam0->f_13 = 1093891/*__LIB_3__::func_554*/;
			break;
		case 54:
			uParam0->f_45 = 1093883/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 1093874/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1093865/*__LIB_1__::func_804*/;
			break;
		case 58:
			uParam0->f_13 = 1093572/*__LIB_7__::func_441*/;
			break;
		case 64:
			uParam0->f_47 = 1093028/*__LIB_7__::func_512*/;
			break;
		case 65:
			uParam0->f_21 = 1093020/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 1092952/*__LIB_5__::func_319*/;
			break;
		case 67:
			uParam0->f_21 = 1092812/*__LIB_5__::func_593*/;
			break;
		case 68:
			*uParam0 = 1092368/*__LIB_5__::func_318*/;
			break;
		case 69:
			*uParam0 = 1092359/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 1092347/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1092338/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1092326/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1092317/*__LIB_0__::func_114*/;
			break;
		case 78:
			uParam0->f_59 = 1092309/*__LIB_0__::func_467*/;
			break;
	}
}

void func_3280(int iParam0, int iParam1)//Position - 0x10B82C
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
	if (__LIB_0__::func_114(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_1__::func_526())
		{
			iVar1 = __LIB_3__::func_680();
		}
		Var4 = { __LIB_7__::func_635(iParam0) };
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
								if (((!__LIB_1__::func_907(bVar7, 1) && !__LIB_6__::func_279(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_1__::func_101(PLAYER::PLAYER_PED_ID()))
								{
									bVar2 = true;
								}
							}
						}
						if ((((!bVar3 && __LIB_3__::func_234(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_6__::func_279(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_1__::func_101(PLAYER::PLAYER_PED_ID()))
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
						__LIB_7__::func_634(iParam0, -1);
					}
					if (__LIB_3__::func_661(0, iParam1))
					{
						__LIB_7__::func_634(iParam0, -1);
					}
					else if (__LIB_3__::func_661(1, iParam1))
					{
						if (bVar3)
						{
							__LIB_7__::func_656(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 1, 0, 0, 0, -1, -1, -1);
						}
						func_3281(iParam0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar2)
						{
							__LIB_7__::func_656(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 0, 0, 1, 0, -1, -1, -1);
						}
						func_3281(iParam0);
					}
					Jump @551; //curOff = 532
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_3281(int iParam0)//Position - 0x10BA56
{
	__LIB_7__::func_634(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_3316(var uParam0, int iParam1)//Position - 0x10C48C
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1197871/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1197767/*__LIB_4__::func_515*/;
			break;
		case 2:
			uParam0->f_31 = 1197032/*__LIB_5__::func_620*/;
			break;
		case 3:
			uParam0->f_34 = 1196950/*__LIB_4__::func_513*/;
			break;
		case 4:
			uParam0->f_12 = 1196807/*__LIB_4__::func_512*/;
			break;
		case 5:
			uParam0->f_11 = 1196797/*__LIB_4__::func_511*/;
			break;
		case 37:
			uParam0->f_18 = 1196660/*__LIB_4__::func_510*/;
			break;
		case 42:
			uParam0->f_10 = 1196593/*__LIB_5__::func_897*/;
			break;
		case 6:
			uParam0->f_32 = 1196481/*__LIB_4__::func_509*/;
			break;
		case 111:
			uParam0->f_35 = 1196242/*__LIB_5__::func_751*/;
			break;
		case 11:
			uParam0->f_11 = 1196233/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 1195729/*__LIB_5__::func_619*/;
			break;
		case 14:
			uParam0->f_11 = 1195720/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 1195712/*__LIB_0__::func_467*/;
			break;
		case 79:
			*uParam0 = 1195688/*__LIB_5__::func_265*/;
			break;
		case 38:
			uParam0->f_9 = 1195608/*__LIB_5__::func_896*/;
			break;
		case 13:
			uParam0->f_2 = 1195512/*__LIB_5__::func_750*/;
			break;
		case 15:
			uParam0->f_2 = 1195307/*__LIB_31__::func_23*/;
			break;
		case 75:
			uParam0->f_4 = 1195291/*__LIB_5__::func_618*/;
			break;
		case 16:
			uParam0->f_5 = 1194482/*__LIB_7__::func_449*/;
			break;
		case 108:
			uParam0->f_55 = 1189777/*__LIB_40__::func_820*/;
			break;
		case 17:
			uParam0->f_17 = 1188959/*func_3515*/;
			break;
		case 19:
			uParam0->f_17 = 1188932/*__LIB_5__::func_994*/;
			break;
		case 20:
			uParam0->f_3 = 1188848/*__LIB_6__::func_337*/;
			break;
		case 21:
			uParam0->f_3 = 1188784/*__LIB_5__::func_798*/;
			break;
		case 74:
			uParam0->f_53 = 1188632/*__LIB_6__::func_89*/;
			break;
		case 22:
			uParam0->f_24 = 1188465/*__LIB_6__::func_676*/;
			break;
		case 25:
			uParam0->f_23 = 1187319/*func_3504*/;
			break;
		case 30:
			uParam0->f_8 = 1186701/*__LIB_7__::func_587*/;
			break;
		case 31:
			uParam0->f_39 = 1186388/*__LIB_6__::func_758*/;
			break;
		case 33:
			uParam0->f_40 = 1185449/*__LIB_7__::func_513*/;
			break;
		case 34:
			uParam0->f_41 = 1184089/*__LIB_4__::func_500*/;
			break;
		case 36:
			uParam0->f_58 = 1184031/*__LIB_4__::func_499*/;
			break;
		case 35:
			uParam0->f_42 = 1136330/*__LIB_5__::func_614*/;
			break;
		case 45:
			uParam0->f_14 = 1136321/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 1136312/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 1136304/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1136281/*__LIB_4__::func_496*/;
			break;
		case 47:
			uParam0->f_43 = 1136153/*__LIB_4__::func_495*/;
			break;
		case 49:
			uParam0->f_8 = 1136112/*__LIB_4__::func_494*/;
			break;
		case 50:
			*uParam0 = 1135844/*__LIB_5__::func_747*/;
			break;
		case 51:
			*uParam0 = 1135775/*__LIB_7__::func_759*/;
			break;
		case 52:
			uParam0->f_15 = 1135764/*__LIB_4__::func_492*/;
			break;
		case 53:
			uParam0->f_13 = 1135530/*__LIB_4__::func_296*/;
			break;
		case 54:
			uParam0->f_45 = 1135180/*func_3479*/;
			break;
		case 56:
			uParam0->f_46 = 1135171/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1135100/*__LIB_7__::func_447*/;
			break;
		case 58:
			uParam0->f_13 = 1134866/*__LIB_4__::func_296*/;
			break;
		case 64:
			uParam0->f_47 = 1134666/*__LIB_5__::func_613*/;
			break;
		case 65:
			uParam0->f_21 = 1133768/*__LIB_7__::func_545*/;
			break;
		case 66:
			uParam0->f_21 = 1133042/*__LIB_6__::func_35*/;
			break;
		case 67:
			uParam0->f_21 = 1130743/*__LIB_7__::func_446*/;
			break;
		case 68:
			*uParam0 = 1130108/*__LIB_7__::func_445*/;
			break;
		case 69:
			*uParam0 = 1130099/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 1130087/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1130078/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1130066/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1129373/*__LIB_6__::func_334*/;
			break;
		case 84:
			uParam0->f_1 = 1128833/*func_3427*/;
			break;
		case 85:
			uParam0->f_1 = 1124731/*func_3419*/;
			break;
		case 87:
			uParam0->f_1 = 1120744/*__LIB_7__::func_27*/;
			break;
		case 88:
			uParam0->f_1 = 1120230/*__LIB_7__::func_60*/;
			break;
		case 89:
			uParam0->f_54 = 1120059/*__LIB_5__::func_894*/;
			break;
		case 90:
			uParam0->f_1 = 1119853/*__LIB_6__::func_333*/;
			break;
		case 91:
			uParam0->f_1 = 1119657/*__LIB_5__::func_328*/;
			break;
		case 92:
			uParam0->f_1 = 1118205/*func_3391*/;
			break;
		case 94:
			uParam0->f_1 = 1114067/*__LIB_6__::func_34*/;
			break;
		case 95:
			uParam0->f_22 = 1113771/*__LIB_5__::func_605*/;
			break;
		case 96:
			uParam0->f_1 = 1113741/*__LIB_5__::func_326*/;
			break;
		case 97:
			uParam0->f_1 = 1113073/*__LIB_5__::func_992*/;
			break;
		case 98:
			uParam0->f_1 = 1110424/*func_3354*/;
			break;
		case 100:
			uParam0->f_22 = 1102363/*__LIB_11__::func_958*/;
			break;
		case 101:
			uParam0->f_22 = 1100420/*__LIB_11__::func_957*/;
			break;
		case 78:
			uParam0->f_59 = 1100200/*__LIB_6__::func_332*/;
			break;
		case 125:
			uParam0->f_19 = 1100176/*__LIB_4__::func_412*/;
			break;
	}
}

int func_3354(int iParam0, int* iParam1)//Position - 0x10F198
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
			if ((__LIB_1__::func_693(bVar2, 1, 1) && !__LIB_2__::func_154(bVar2)) && !Global_2824892)
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
							func_1377(&(iParam1->f_140[0]), Global_1853191, 1, 0);
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
					if (__LIB_1__::func_693(bVar2, 0, 1) && !__LIB_2__::func_154(bVar2))
					{
						if (iVar1 < 4)
						{
							if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_140[iVar1]))
							{
								func_1377(&(iParam1->f_140[iVar1]), bVar2, 1, 0);
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
				__LIB_7__::func_662(0, 1, 0, 1, 0, 1, 0, 1, 1, 0);
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
			func_1377(&(iParam1->f_140[0]), PLAYER::PLAYER_ID(), 1, 0);
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

int func_3391(int iParam0, int* iParam1)//Position - 0x110FFD
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
				__LIB_31__::func_390(&iVar1, &(iParam1->f_109), 48, 10f, 20f, 15f);
			}
			else
			{
				func_297(&iVar1, &(iParam1->f_109), 40);
			}
			VEHICLE::SET_DISABLE_MAP_COLLISION(iParam1->f_109);
			return 0;
		}
		else if (func_3393(&iVar1, &(iParam1->f_109), &(iParam1->f_109.f_1), &(Global_1946250.f_4508), 1))
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
							func_1377(&(iParam1->f_140[iVar3]), bVar5, 1, 0);
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

int func_3393(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x11130F
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
					func_215(uParam2[iVar1], iVar3, 1, 0);
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

int func_3419(int iParam0, int* iParam1)//Position - 0x11297B
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
			func_297(&iVar0, &(iParam1->f_109), 60);
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
		else if (func_214(&iVar0, &(iParam1->f_109), &(iParam1->f_109.f_1), 1, 1, 0, 0, 0, 1))
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
		func_1377(&(iParam1->f_140[0]), PLAYER::PLAYER_ID(), 1, 0);
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

int func_3427(int iParam0, var uParam1)//Position - 0x113981
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
				else if (!__LIB_31__::func_390(&iVar1, &(uParam1->f_122), 16, Var2))
				{
					bVar0 = false;
				}
				else
				{
					func_297(&iVar1, &(uParam1->f_122), 24);
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

void func_3479(int iParam0, var uParam1, int* iParam2, var uParam3, var uParam4)//Position - 0x11524C
{
	struct<3> Var0;
	int iVar1;
	if (__LIB_6__::func_601(iParam0))
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
					func_2122(iParam2, 166);
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

void func_3504(int iParam0, int iParam1)//Position - 0x121DF7
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
	if (__LIB_6__::func_337(PLAYER::PLAYER_ID(), iParam0))
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
								if (((((((!__LIB_1__::func_907(bVar7, 1) && !__LIB_6__::func_279(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_1__::func_101(uVar0[iVar6])) && !__LIB_2__::func_154(bVar7)) && !__LIB_4__::func_976(bVar7, 1)) && !__LIB_5__::func_895(bVar7)) && !func_522(bVar7))
								{
									bVar2 = true;
								}
							}
						}
						if ((((((((!bVar3 && __LIB_3__::func_234(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_6__::func_279(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_1__::func_101(uVar0[iVar6])) && !__LIB_2__::func_154(bVar7)) && !__LIB_4__::func_976(bVar7, 1)) && !__LIB_5__::func_895(bVar7)) && !func_522(bVar7))
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
						__LIB_7__::func_513(iParam0, -1);
					}
					if (__LIB_3__::func_661(0, iParam1))
					{
						__LIB_7__::func_513(iParam0, -1);
					}
					else if (__LIB_3__::func_661(1, iParam1))
					{
						if (bVar3)
						{
							__LIB_7__::func_656(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 1, 0, 0, 0, -1, -1, -1);
						}
						func_3505(iParam0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar2)
						{
							__LIB_7__::func_656(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 0, 0, 1, 0, -1, -1, -1);
						}
						func_3505(iParam0);
					}
					Jump @653; //curOff = 634
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_3505(int iParam0)//Position - 0x122087
{
	__LIB_7__::func_513(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

char* func_3515(int iParam0, var uParam1, var uParam2)//Position - 0x12245F
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	if (__LIB_5__::func_434())
	{
		return "SI_ENTR_BLCK17A" /* GXT: You cannot enter the Facility while on call. You can cancel this via the Quick Join app on the phone. */;
	}
	iVar0 = __LIB_0__::func_846(iParam0);
	bVar1 = __LIB_0__::func_797();
	if (__LIB_1__::func_907(PLAYER::PLAYER_ID(), 0))
	{
		iVar2 = __LIB_5__::func_185(PLAYER::PLAYER_ID());
		if (PLAYER::PLAYER_ID() != __LIB_0__::func_162())
		{
			switch (iVar2)
			{
				case 192:
					return "BASE_BLOCK_A" /* GXT: You can't enter this Facility while resupplying another business. */;
				case 190:
					return "BASE_BLOCK_B" /* GXT: You can't enter this Facility while selling goods from another business. */;
				case 167:
					return "BASE_BLOCK_C" /* GXT: You can't enter this Facility while acquiring goods for a warehouse. */;
				case 168:
					return "BASE_BLOCK_D" /* GXT: You can't enter this Facility while selling goods from a warehouse. */;
				case 178:
					return "BASE_BLOCK_E" /* GXT: You can't enter this Facility while acquiring a vehicle for a warehouse. */;
				case 188:
					return "BASE_BLOCK_F" /* GXT: You can't enter this Facility while selling vehicles from a warehouse. */;
				case 225:
					return "BASE_BLOCK_G" /* GXT: You can't enter this Facility while acquiring goods for a bunker. */;
				case 226:
					return "BASE_BLOCK_H" /* GXT: You can't enter this Facility while selling goods from a bunker. */;
				case 229:
					return "BASE_BLOCK_I" /* GXT: You can't enter this Facility while acquiring goods for a hangar. */;
				case 230:
					return "BASE_BLOCK_J" /* GXT: You can't enter this Facility while selling goods from a hangar. */;
				}
			}
		default:
	}
	if (__LIB_3__::func_695())
	{
		return "BASE_BLOCK_K" /* GXT: You cannot enter your Facility with a prostitute. */;
	}
	if (__LIB_3__::func_694(PLAYER::PLAYER_ID()))
	{
		return "BASE_BLOCK_L" /* GXT: You can't access your Facility as the Beast. */;
	}
	if (__LIB_3__::func_693())
	{
		return "NPC_BLOCK" /* GXT: You cannot enter with non-player characters in the vehicle. */;
	}
	iVar3 = 0;
	if ((bVar1 != __LIB_0__::func_162() && bVar1 != PLAYER::PLAYER_ID()) && __LIB_4__::func_493(bVar1, iVar0))
	{
		iVar3 = 1;
	}
	if (__LIB_4__::func_493(PLAYER::PLAYER_ID(), iVar0) || iVar3)
	{
		if (__LIB_1__::func_101(PLAYER::PLAYER_PED_ID()))
		{
			return "BASE_BLOCK_M" /* GXT: You can't access this Facility whilst wearing the Ballistic Equipment. */;
		}
		if (__LIB_3__::func_439(PLAYER::PLAYER_ID()))
		{
			return "BASE_BLOCK_U" /* GXT: You can't enter this Facility whilst participating in a Business Battle. */;
		}
		if (__LIB_2__::func_906())
		{
			return "BOUNTY_PROP_BLCK" /* GXT: You cannot enter whilst delivering a bounty. */;
		}
	}
	if (__LIB_4__::func_493(PLAYER::PLAYER_ID(), iVar0) && !__LIB_5__::func_873(PLAYER::PLAYER_ID()))
	{
		if (__LIB_6__::func_371(PLAYER::PLAYER_ID(), 0))
		{
			if (!__LIB_1__::func_592(PLAYER::PLAYER_ID()) == 140)
			{
				return "BASE_BLOCK_N" /* GXT: Your Facility is unavailable whilst being a member of an MC. */;
			}
		}
		else if (__LIB_2__::func_72(PLAYER::PLAYER_ID(), 0))
		{
			if (!__LIB_4__::func_493(bVar1, iVar0))
			{
				if (__LIB_3__::func_673(bVar1))
				{
					return "BASE_BLOCK_O" /* GXT: Your Facility is unavailable when working as an Associate for a CEO. */;
				}
				else
				{
					return "BASE_BLOCK_P" /* GXT: Your Facility is unavailable when working as a Bodyguard for a VIP. */;
				}
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !__LIB_4__::func_952(PLAYER::PLAYER_ID()))
		{
			iVar6 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			iVar7 = __LIB_3__::func_392(iVar6, &uVar5, &uVar4);
			iVar8 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar6, -1, false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar8))
			{
				iVar9 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar8);
				if ((__LIB_5__::func_187(PLAYER::PLAYER_ID(), -1) && __LIB_5__::func_185(PLAYER::PLAYER_ID()) != 233) && !__LIB_6__::func_601(iParam0))
				{
					if ((((((__LIB_1__::func_589(iVar6) || __LIB_1__::func_819(ENTITY::GET_ENTITY_MODEL(iVar6))) || !__LIB_3__::func_561(ENTITY::GET_ENTITY_MODEL(iVar6), 13)) || __LIB_1__::func_590(ENTITY::GET_ENTITY_MODEL(iVar6))) || __LIB_1__::func_588(iVar6)) || __LIB_3__::func_689(iVar6)) || (__LIB_0__::func_872(iVar6, 1) && iVar7 != iVar9))
					{
						return "BASE_BLOCK_R" /* GXT: You cannot enter the Facility with this vehicle. */;
					}
					if (__LIB_3__::func_690(iVar6))
					{
						return "BASE_BLOCK_T" /* GXT: You cannot enter the Facility with the Mobile Operations Center. */;
					}
				}
			}
		}
	}
	else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && iVar3)
	{
		if ((__LIB_5__::func_187(PLAYER::PLAYER_ID(), -1) && __LIB_5__::func_185(PLAYER::PLAYER_ID()) != 233) && !__LIB_6__::func_601(iParam0))
		{
			return "BASE_BLOCK_S" /* GXT: You cannot enter this Facility, only the Facility's Owner can drive a vehicle in. */;
		}
	}
	return "";
}

void func_3562(var uParam0, int iParam1)//Position - 0x124738
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1226175/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1226119/*__LIB_4__::func_571*/;
			break;
		case 2:
			uParam0->f_31 = 1225850/*__LIB_5__::func_341*/;
			break;
		case 3:
			uParam0->f_34 = 1225791/*__LIB_4__::func_570*/;
			break;
		case 4:
			uParam0->f_12 = 1225760/*__LIB_4__::func_569*/;
			break;
		case 37:
			uParam0->f_18 = 1225640/*__LIB_4__::func_568*/;
			break;
		case 38:
			uParam0->f_9 = 1225556/*__LIB_5__::func_898*/;
			break;
		case 6:
			uParam0->f_32 = 1225492/*__LIB_4__::func_567*/;
			break;
		case 111:
			uParam0->f_35 = 1225469/*__LIB_5__::func_340*/;
			break;
		case 11:
			uParam0->f_11 = 1225460/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 1225007/*__LIB_7__::func_639*/;
			break;
		case 14:
			uParam0->f_11 = 1224998/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 1224990/*__LIB_0__::func_467*/;
			break;
		case 79:
			*uParam0 = 1224966/*__LIB_5__::func_265*/;
			break;
		case 13:
			uParam0->f_2 = 1224957/*__LIB_0__::func_114*/;
			break;
		case 15:
			uParam0->f_2 = 1219887/*func_3693*/;
			break;
		case 75:
			uParam0->f_4 = 1219878/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1219694/*__LIB_5__::func_805*/;
			break;
		case 108:
			uParam0->f_55 = 1216595/*func_3677*/;
			break;
		case 17:
			uParam0->f_17 = 1216087/*__LIB_10__::func_470*/;
			break;
		case 19:
			uParam0->f_17 = 1216060/*__LIB_5__::func_997*/;
			break;
		case 20:
			uParam0->f_3 = 1215982/*__LIB_5__::func_628*/;
			break;
		case 21:
			uParam0->f_3 = 1215919/*__LIB_5__::func_336*/;
			break;
		case 74:
			uParam0->f_53 = 1215704/*__LIB_6__::func_341*/;
			break;
		case 22:
			uParam0->f_24 = 1215585/*__LIB_6__::func_682*/;
			break;
		case 25:
			uParam0->f_23 = 1214638/*func_3664*/;
			break;
		case 30:
			uParam0->f_8 = 1214074/*__LIB_7__::func_335*/;
			break;
		case 31:
			uParam0->f_39 = 1213895/*__LIB_6__::func_681*/;
			break;
		case 33:
			uParam0->f_40 = 1212783/*__LIB_7__::func_519*/;
			break;
		case 34:
			uParam0->f_41 = 1212087/*__LIB_5__::func_624*/;
			break;
		case 36:
			uParam0->f_58 = 1212034/*__LIB_3__::func_945*/;
			break;
		case 35:
			uParam0->f_42 = 1211457/*__LIB_6__::func_680*/;
			break;
		case 45:
			uParam0->f_14 = 1211448/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 1211439/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 1211262/*__LIB_7__::func_518*/;
			break;
		case 77:
			uParam0->f_13 = 1211251/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1210753/*__LIB_6__::func_761*/;
			break;
		case 49:
			uParam0->f_8 = 1210712/*__LIB_4__::func_550*/;
			break;
		case 50:
			*uParam0 = 1210703/*__LIB_0__::func_114*/;
			break;
		case 51:
			*uParam0 = 1210694/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 1210683/*__LIB_4__::func_549*/;
			break;
		case 53:
			uParam0->f_13 = 1210672/*__LIB_3__::func_554*/;
			break;
		case 54:
			uParam0->f_45 = 1210664/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 1210655/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1210646/*__LIB_1__::func_804*/;
			break;
		case 58:
			uParam0->f_13 = 1210417/*__LIB_7__::func_334*/;
			break;
		case 64:
			uParam0->f_47 = 1204427/*func_3601*/;
			break;
		case 65:
			uParam0->f_21 = 1202695/*__LIB_7__::func_546*/;
			break;
		case 66:
			uParam0->f_21 = 1202369/*__LIB_6__::func_759*/;
			break;
		case 67:
			uParam0->f_21 = 1201644/*__LIB_7__::func_516*/;
			break;
		case 68:
			*uParam0 = 1201099/*__LIB_7__::func_451*/;
			break;
		case 69:
			*uParam0 = 1201090/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 1201078/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1201069/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1201057/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1199341/*__LIB_6__::func_807*/;
			break;
		case 78:
			uParam0->f_59 = 1198891/*__LIB_7__::func_667*/;
			break;
		case 125:
			uParam0->f_19 = 1198875/*__LIB_4__::func_516*/;
			break;
	}
}

void func_3601(var uParam0, int iParam1, var uParam2, var uParam3)//Position - 0x1260CB
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	iVar0 = __LIB_6__::func_679();
	if ((func_3693(iParam1) && !__LIB_4__::func_952(PLAYER::PLAYER_ID())) && PLAYER::PLAYER_ID() == __LIB_6__::func_338(iVar0, 1, 0))
	{
		__LIB_6__::func_808(uParam0, 1);
		__LIB_4__::func_525(0);
	}
	if (__LIB_5__::func_623(iVar0))
	{
		if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && __LIB_7__::func_668(uParam0, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), iVar0, 1)) && !func_3693(iParam1))
		{
		}
		else if (!__LIB_3__::func_171(PLAYER::PLAYER_ID()) && PLAYER::PLAYER_ID() == __LIB_6__::func_338(iVar0, 1, 0))
		{
			__LIB_6__::func_808(uParam0, 1);
			__LIB_4__::func_525(0);
		}
		if (__LIB_5__::func_187(PLAYER::PLAYER_ID(), -1))
		{
			if (PLAYER::PLAYER_ID() == __LIB_6__::func_338(iVar0, 1, 0))
			{
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 357 /*INPUT_VEH_TRANSFORM*/, true);
				iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false);
				if (ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("deluxo") || ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("oppressor2"))
				{
					VEHICLE::SET_SPECIAL_FLIGHT_MODE_TARGET_RATIO(iVar1, 0f);
				}
			}
		}
	}
	if ((__LIB_4__::func_544(PLAYER::PLAYER_ID()) || __LIB_4__::func_543(PLAYER::PLAYER_ID())) && func_3619(iParam1))
	{
		if (!__LIB_4__::func_953())
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 0)
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
			}
			__LIB_4__::func_542(0);
			__LIB_4__::func_541(0);
			__LIB_4__::func_527(0);
			__LIB_4__::func_540(0);
			CAM::DO_SCREEN_FADE_IN(500);
			if (__LIB_3__::func_779())
			{
				__LIB_4__::func_539(1);
			}
			__LIB_4__::func_538(0);
			__LIB_6__::func_410(PLAYER::PLAYER_ID(), 1, 0, 0);
			__LIB_4__::func_537(0);
			if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
			{
				NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false);
			}
			__LIB_4__::func_538(0);
		}
	}
	if (__LIB_0__::func_833())
	{
		if (Global_1946250.f_523)
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 23 /*INPUT_ENTER*/, true);
		}
	}
	if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (Global_1853190 != __LIB_0__::func_162())
		{
			if (PLAYER::PLAYER_ID() == Global_1853190)
			{
				if (__LIB_6__::func_62(PLAYER::PLAYER_ID()))
				{
					if (((__LIB_4__::func_502(PLAYER::PLAYER_ID()) || __LIB_4__::func_452()) || __LIB_4__::func_451()) || Global_1957730)
					{
						__LIB_1__::func_33(1);
					}
				}
			}
		}
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
		{
			if (__LIB_3__::func_363(uParam0->f_22.f_94, 0))
			{
				HUD::CLEAR_HELP(true);
				__LIB_3__::func_122(&(uParam0->f_22.f_94));
			}
		}
		if (!__LIB_4__::func_952(PLAYER::PLAYER_ID()))
		{
			if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false)) && __LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
			{
				if (!__LIB_6__::func_62(__LIB_6__::func_338(iVar0, 1, 0)))
				{
					__LIB_7__::func_517(uParam0, iVar0);
				}
			}
		}
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (__LIB_0__::func_336(PLAYER::PLAYER_PED_ID(), 0) != -1 && __LIB_4__::func_543(PLAYER::PLAYER_ID()))
		{
			iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), -1, false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				bVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2);
				if (__LIB_1__::func_693(bVar3, 1, 1))
				{
					if (__LIB_4__::func_529(bVar3))
					{
						if (func_3693(iParam1) && !__LIB_4__::func_952(PLAYER::PLAYER_ID()))
						{
							TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
							__LIB_4__::func_537(0);
							__LIB_4__::func_538(0);
							__LIB_4__::func_539(1);
						}
					}
				}
			}
		}
	}
	if (__LIB_4__::func_529(PLAYER::PLAYER_ID()))
	{
		PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/, true);
		HUD::DISABLE_FRONTEND_THIS_FRAME();
	}
	__LIB_5__::func_996();
	if (!__LIB_0__::func_893() || __LIB_0__::func_983())
	{
		__LIB_4__::func_491(0);
	}
}

int func_3619(int iParam0)//Position - 0x126CD9
{
	if (HUD::IS_WARNING_MESSAGE_ACTIVE() || func_3693(iParam0))
	{
		return 1;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!__LIB_5__::func_187(PLAYER::PLAYER_ID(), -1))
		{
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				if (Global_1946250.f_3630 != __LIB_0__::func_162())
				{
					if (((!__LIB_3__::func_171(Global_1946250.f_3630) && !__LIB_4__::func_902(Global_1946250.f_3630)) && !BitTest(Global_2689235[Global_1946250.f_3630 /*453*/].f_318, 5)) && !__LIB_4__::func_529(Global_1946250.f_3630))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_3664(int iParam0, int iParam1)//Position - 0x1288AE
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
								if ((((!__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar7)) && !__LIB_1__::func_907(bVar7, 1)) && !__LIB_6__::func_279(bVar7)) && !__LIB_3__::func_728(bVar7, 14)) && !func_522(bVar7))
								{
									bVar0 = true;
								}
							}
						}
						if ((((((!bVar1 && __LIB_3__::func_234(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar7))) && !__LIB_1__::func_907(bVar7, 1)) && !__LIB_6__::func_279(bVar7)) && !__LIB_3__::func_728(bVar7, 14)) && !func_522(bVar7))
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
						__LIB_7__::func_519(iParam0, -1);
					}
					bVar9 = __LIB_4__::func_557(PLAYER::PLAYER_ID());
					if (__LIB_3__::func_661(0, iParam1))
					{
						__LIB_7__::func_519(iParam0, -1);
					}
					else if (__LIB_3__::func_661(1, iParam1))
					{
						if (bVar1)
						{
							__LIB_7__::func_336(1);
							__LIB_7__::func_656(PLAYER::PLAYER_ID(), iParam0, Var6, 1, 0, 0, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_3665(iParam0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_7__::func_336(1);
							__LIB_7__::func_656(PLAYER::PLAYER_ID(), iParam0, Var6, 0, 0, 1, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_3665(iParam0);
					}
					Jump @656; //curOff = 637
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_3665(int iParam0)//Position - 0x128B41
{
	__LIB_7__::func_519(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

int func_3677(var uParam0, var uParam1, var uParam2)//Position - 0x129053
{
	int iVar0;
	bool bVar1;
	char* sVar2;
	*uParam2 = 1;
	if (Global_262145.f_23133 /* Tunable: 200197103 */)
	{
		return 0;
	}
	iVar0 = __LIB_6__::func_679();
	if (__LIB_4__::func_452() || __LIB_4__::func_451())
	{
		return 0;
	}
	if (__LIB_5__::func_187(PLAYER::PLAYER_ID(), -1))
	{
		if (__LIB_0__::func_1("HELP_APC_TUR" /* GXT: Hold ~INPUT_VEH_SHUFFLE~ to move between the passenger turret and the driver seat while stationary. */))
		{
			return 0;
		}
		if (__LIB_6__::func_338(iVar0, 1, 0) != PLAYER::PLAYER_ID())
		{
			return 0;
		}
	}
	if ((!__LIB_0__::func_893() || __LIB_3__::func_558()) || HUD::IS_PAUSE_MENU_ACTIVE())
	{
		__LIB_6__::func_808(uParam1, 1);
		__LIB_4__::func_525(0);
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
			__LIB_6__::func_808(uParam1, 1);
			__LIB_4__::func_525(0);
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
					if (((__LIB_5__::func_623(iVar0) && __LIB_4__::func_680(OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(iVar0, true), ENTITY::GET_ENTITY_HEADING(iVar0), 0f, -1f, 0f))) || __LIB_2__::func_753(PLAYER::PLAYER_ID())) || __LIB_4__::func_504())
					{
						if (!func_3693(*uParam0) && __LIB_7__::func_668(uParam1, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), iVar0, 0))
						{
							if (MISC::IS_PC_VERSION())
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
								{
									if (VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("voltic2")) || VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("oppressor")))
									{
										if ((__LIB_3__::func_363(uParam1->f_22.f_94, 0) || __LIB_3__::func_56("GR_ENTERAOC" /* GXT: Press ~a~ to enter your Avenger with this vehicle. */, "STRING")) || __LIB_3__::func_56("BASE_MOD_ENTER" /* GXT: ~a~ Access the Facility Vehicle Workshop. ~n~ ~INPUT_CONTEXT_SECONDARY~ Enter your Avenger with this vehicle. */, "STRING"))
										{
											PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 351 /*INPUT_VEH_ROCKET_BOOST*/, true);
										}
									}
								}
							}
							__LIB_4__::func_563(1);
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 357 /*INPUT_VEH_TRANSFORM*/, true);
							if (!__LIB_4__::func_529(PLAYER::PLAYER_ID()))
							{
								if (__LIB_1__::func_587(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false))))
								{
									if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
									{
										__LIB_0__::func_151("GAN_ETFE_AIR" /* GXT: You cannot modify this aircraft in your Avenger. */, -1);
									}
									return 0;
								}
								if (__LIB_2__::func_753(PLAYER::PLAYER_ID()))
								{
									bVar1 = true;
								}
								if (!bVar1)
								{
									sVar2 = "GR_ENTERAOC" /* GXT: Press ~a~ to enter your Avenger with this vehicle. */;
								}
								PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 351 /*INPUT_VEH_ROCKET_BOOST*/, true);
								PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 357 /*INPUT_VEH_TRANSFORM*/, true);
								if (!bVar1)
								{
									if (uParam1->f_22.f_94 == -1 && __LIB_5__::func_187(PLAYER::PLAYER_ID(), -1))
									{
										__LIB_5__::func_569(&(uParam1->f_22.f_94), 5, sVar2, 0, 0, 0, 0);
									}
									if (__LIB_0__::func_77(0))
									{
										__LIB_3__::func_122(&(uParam1->f_22.f_94));
									}
								}
								if (((!bVar1 && __LIB_3__::func_113(uParam1->f_22.f_94, 1)) || ((bVar1 && PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 52 /*INPUT_CONTEXT_SECONDARY*/)) && !HUD::IS_WARNING_MESSAGE_ACTIVE())) || BitTest(uParam1->f_22, 1))
								{
									__LIB_6__::func_808(uParam1, 0);
									__LIB_4__::func_562(__LIB_1__::func_694(PLAYER::PLAYER_ID()), 25f, 0);
									__LIB_3__::func_122(&(uParam1->f_22.f_94));
									if (BitTest(uParam1->f_22, 1))
									{
										MISC::CLEAR_BIT(&(uParam1->f_22), 1);
									}
									if (!BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318, 19))
									{
										__LIB_6__::func_494(1, 1);
										MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318), 19);
									}
									if (!__LIB_2__::func_753(PLAYER::PLAYER_ID()))
									{
										__LIB_4__::func_561(1);
									}
									__LIB_5__::func_435(1, 88);
									__LIB_4__::func_525(1);
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
								if (__LIB_5__::func_338() && __LIB_5__::func_629())
								{
									if (__LIB_2__::func_753(PLAYER::PLAYER_ID()))
									{
										__LIB_4__::func_526(1);
									}
									if (__LIB_0__::func_541(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 0))
									{
										__LIB_4__::func_553(PLAYER::PLAYER_ID(), 88, 3);
									}
									else if (__LIB_0__::func_872(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1))
									{
										__LIB_4__::func_956(PLAYER::PLAYER_ID(), 88, 3);
									}
									if (!__LIB_4__::func_504())
									{
										__LIB_5__::func_457(1);
										__LIB_5__::func_341(88, uParam1, 0, 0);
										__LIB_6__::func_410(PLAYER::PLAYER_ID(), 0, 0, 0);
										__LIB_6__::func_413(1);
										__LIB_4__::func_562(__LIB_1__::func_694(PLAYER::PLAYER_ID()), 25f, 0);
										__LIB_4__::func_563(0);
										__LIB_5__::func_435(1, 88);
										return 1;
									}
									else if (!__LIB_3__::func_779())
									{
										__LIB_4__::func_542(1);
										__LIB_4__::func_541(1);
										__LIB_6__::func_413(1);
										__LIB_5__::func_435(1, 88);
										return 1;
									}
								}
								else
								{
									if (!__LIB_5__::func_338())
									{
									}
									if (!__LIB_5__::func_629())
									{
									}
								}
							}
						}
						else if (__LIB_3__::func_363(uParam1->f_22.f_94, 0))
						{
							HUD::CLEAR_HELP(true);
							__LIB_3__::func_122(&(uParam1->f_22.f_94));
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
						__LIB_6__::func_808(uParam1, 1);
						__LIB_4__::func_525(0);
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
					__LIB_6__::func_808(uParam1, 1);
					__LIB_4__::func_525(0);
				}
			}
			else
			{
				func_3678(*uParam0);
				if (__LIB_4__::func_405(PLAYER::PLAYER_ID()))
				{
					if (!__LIB_0__::func_864(&(uParam1->f_22.f_101)))
					{
						__LIB_0__::func_795(&(uParam1->f_22.f_101), 0, 0);
					}
					if (__LIB_1__::func_693(Global_1946250.f_3630, 1, 1))
					{
					}
					if (!__LIB_3__::func_170(Global_1946250.f_3630) && __LIB_4__::func_952(Global_1946250.f_3630))
					{
						if (__LIB_0__::func_864(&(uParam1->f_22.f_101)))
						{
							if (__LIB_0__::func_937(&(uParam1->f_22.f_101), 15000, 0) && CAM::IS_SCREEN_FADING_OUT())
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
								__LIB_6__::func_410(PLAYER::PLAYER_ID(), 1, 0, 0);
								__LIB_4__::func_538(0);
								__LIB_4__::func_540(0);
								__LIB_4__::func_537(0);
								__LIB_0__::func_794(&(uParam1->f_22.f_101));
							}
						}
					}
					PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 1);
					__LIB_1__::func_33(0);
					__LIB_6__::func_69(Global_1946250.f_3630);
					MISC::SET_BIT(&(Global_1946250.f_506), 5);
					Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 = PLAYER::INT_TO_PLAYERINDEX(Global_1946250.f_3280);
					__LIB_4__::func_561(1);
					__LIB_5__::func_435(1, 88);
					__LIB_4__::func_525(1);
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, true);
					Global_1853190 = PLAYER::INT_TO_PLAYERINDEX(Global_1946250.f_3280);
					__LIB_0__::func_794(&(uParam1->f_22.f_101));
					return 1;
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
			__LIB_6__::func_808(uParam1, 1);
			__LIB_4__::func_525(0);
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

void func_3678(int iParam0)//Position - 0x12977C
{
	int iVar0;
	int iVar1;
	bool bVar2;
	if (__LIB_4__::func_543(PLAYER::PLAYER_ID()))
	{
		if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !__LIB_5__::func_195(PLAYER::PLAYER_ID()))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if (__LIB_0__::func_695(iVar0))
				{
					iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false);
					if (!PED::IS_PED_INJURED(iVar1))
					{
						if (PED::IS_PED_A_PLAYER(iVar1))
						{
							bVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
							if (bVar2 != PLAYER::PLAYER_ID() && __LIB_1__::func_693(bVar2, 1, 1))
							{
								if ((__LIB_4__::func_529(bVar2) && __LIB_0__::func_172(__LIB_5__::func_196(bVar2)) == 8) || __LIB_4__::func_529(bVar2))
								{
									if (func_3619(iParam0))
									{
										if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 0)
										{
											TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
										}
										if (__LIB_4__::func_544(PLAYER::PLAYER_ID()))
										{
											if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_OUT())
											{
												CAM::DO_SCREEN_FADE_IN(500);
											}
											__LIB_6__::func_410(PLAYER::PLAYER_ID(), 1, 0, 0);
											__LIB_4__::func_538(0);
											__LIB_4__::func_540(0);
										}
									}
									else if (__LIB_5__::func_337())
									{
										if (CAM::IS_SCREEN_FADED_IN())
										{
											__LIB_6__::func_410(PLAYER::PLAYER_ID(), 0, 0, 0);
											CAM::DO_SCREEN_FADE_OUT(500);
											__LIB_4__::func_538(1);
										}
										if (CAM::IS_SCREEN_FADED_OUT())
										{
											if (__LIB_2__::func_753(PLAYER::PLAYER_ID()))
											{
												__LIB_4__::func_527(1);
												__LIB_4__::func_542(1);
												__LIB_4__::func_526(1);
												__LIB_4__::func_541(1);
											}
											if (VEHICLE::IS_TURRET_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), __LIB_0__::func_336(PLAYER::PLAYER_PED_ID(), 0)) || (VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("hakuchou2")) && __LIB_0__::func_336(PLAYER::PLAYER_PED_ID(), 0) != -1))
											{
												TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
											}
											PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, true);
											__LIB_4__::func_537(1);
											__LIB_4__::func_538(0);
										}
									}
									else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
									{
										if (VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("halftrack")))
										{
											TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 16);
										}
										else
										{
											TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
										}
										if (BitTest(Global_1946250.f_1, 17))
										{
											MISC::CLEAR_BIT(&(Global_1946250.f_1), 17);
										}
										__LIB_4__::func_540(0);
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

int func_3693(int iParam0)//Position - 0x129D2F
{
	int iVar0;
	bool bVar1;
	if (__LIB_4__::func_384() || __LIB_4__::func_383(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	bVar1 = false;
	iVar0 = __LIB_6__::func_679();
	if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || __LIB_4__::func_384()) || __LIB_4__::func_552())
	{
		if (((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && __LIB_2__::func_116(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1)) || __LIB_4__::func_384()) || __LIB_4__::func_552())
		{
			bVar1 = true;
		}
	}
	if (BitTest(Global_1946250.f_4523, 4) && !__LIB_4__::func_529(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (((__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1) && ENTITY::DOES_ENTITY_EXIST(iVar0)) && !ENTITY::IS_ENTITY_DEAD(iVar0, false)) && !bVar1)
	{
		if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0))
		{
			return 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		if ((((ENTITY::GET_ENTITY_SPEED(iVar0) > 0.5f && !bVar1) && !__LIB_4__::func_405(PLAYER::PLAYER_ID())) && !__LIB_4__::func_529(PLAYER::PLAYER_ID())) && !__LIB_4__::func_544(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		if (!ENTITY::IS_ENTITY_UPRIGHT(iVar0, 25f) && !bVar1)
		{
			return 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		if (ENTITY::IS_ENTITY_UPSIDEDOWN(iVar0) && !bVar1)
		{
			return 1;
		}
	}
	if (__LIB_3__::func_695())
	{
		return 1;
	}
	if (__LIB_0__::func_983())
	{
		return 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		if (!__LIB_6__::func_62(__LIB_6__::func_338(iVar0, 1, 0)))
		{
			if ((((ENTITY::IS_ENTITY_IN_AIR(iVar0) && !bVar1) && !__LIB_4__::func_405(PLAYER::PLAYER_ID())) && !__LIB_4__::func_529(PLAYER::PLAYER_ID())) && !__LIB_4__::func_544(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
		}
	}
	if (__LIB_2__::func_72(PLAYER::PLAYER_ID(), 0))
	{
		if (PLAYER::PLAYER_ID() == __LIB_6__::func_338(iVar0, 1, 0))
		{
			return 1;
		}
	}
	if (__LIB_12__::func_704(iParam0, iVar0))
	{
		return 1;
	}
	if (__LIB_7__::func_594(iParam0, iVar0))
	{
		if (!(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false) && !__LIB_6__::func_110(__LIB_6__::func_338(iVar0, 1, 0))))
		{
			__LIB_4__::func_564(1);
		}
		return 1;
	}
	if (__LIB_7__::func_593(iParam0, iVar0))
	{
		if (!(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false) && !__LIB_6__::func_110(__LIB_6__::func_338(iVar0, 1, 0))))
		{
			__LIB_4__::func_564(1);
		}
		return 1;
	}
	if (__LIB_7__::func_592(iParam0, iVar0))
	{
		if (!(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false) && !__LIB_6__::func_110(__LIB_6__::func_338(iVar0, 1, 0))))
		{
			__LIB_4__::func_564(1);
		}
		return 1;
	}
	if (__LIB_31__::func_293(iParam0, iVar0))
	{
		if (!(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false) && !__LIB_6__::func_110(__LIB_6__::func_338(iVar0, 1, 0))))
		{
			__LIB_4__::func_564(1);
		}
		return 1;
	}
	if (__LIB_12__::func_678(iParam0, iVar0))
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false))
		{
			if (!__LIB_6__::func_110(__LIB_6__::func_338(iVar0, 1, 0)))
			{
			}
			else
			{
				__LIB_4__::func_564(1);
			}
		}
		else
		{
			__LIB_4__::func_564(1);
		}
		return 1;
	}
	if (__LIB_7__::func_590(iParam0, iVar0))
	{
		if (!(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false) && !__LIB_6__::func_110(__LIB_6__::func_338(iVar0, 1, 0))))
		{
			__LIB_4__::func_564(1);
		}
		return 1;
	}
	if (__LIB_7__::func_589(iParam0, iVar0))
	{
		if (!(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false) && !__LIB_6__::func_110(__LIB_6__::func_338(iVar0, 1, 0))))
		{
			__LIB_4__::func_564(1);
		}
		return 1;
	}
	if (__LIB_1__::func_510(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if ((NETWORK::NETWORK_IS_IN_MP_CUTSCENE() && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318, 19)) && !__LIB_4__::func_405(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (__LIB_1__::func_17(PLAYER::PLAYER_ID()) || __LIB_2__::func_711(PLAYER::PLAYER_ID(), 1, 0))
	{
		return 1;
	}
	if (__LIB_7__::func_588(iParam0))
	{
		return 1;
	}
	if (__LIB_1__::func_583(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (__LIB_4__::func_452())
	{
		return 1;
	}
	if (__LIB_3__::func_728(PLAYER::PLAYER_ID(), 14))
	{
		return 1;
	}
	if ((Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_95 == 8 && __LIB_1__::func_736()) && !__LIB_0__::func_626())
	{
		return 1;
	}
	if (__LIB_6__::func_106(__LIB_6__::func_338(iVar0, 1, 0)))
	{
		return 1;
	}
	if (__LIB_6__::func_109(__LIB_6__::func_338(iVar0, 1, 0)))
	{
		return 1;
	}
	if (__LIB_3__::func_964())
	{
		if (!(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false) && !__LIB_6__::func_110(__LIB_6__::func_338(iVar0, 1, 0))))
		{
			__LIB_4__::func_564(1);
		}
		return 1;
	}
	if (__LIB_5__::func_335())
	{
		return 1;
	}
	if (__LIB_0__::func_979(PLAYER::PLAYER_ID(), 21))
	{
		return 1;
	}
	if (__LIB_0__::func_979(PLAYER::PLAYER_ID(), 25))
	{
		return 1;
	}
	if (((ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false)) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false)) && __LIB_7__::func_637())
	{
		if (!(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false) && !__LIB_6__::func_110(__LIB_6__::func_338(iVar0, 1, 0))))
		{
			__LIB_4__::func_564(1);
		}
		return 1;
	}
	if (((((((((BitTest(Global_1946250, 19) && ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())) && ENTITY::DOES_ENTITY_EXIST(iVar0)) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())) && !__LIB_4__::func_405(PLAYER::PLAYER_ID())) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false)) && !__LIB_2__::func_753(PLAYER::PLAYER_ID())) && !__LIB_4__::func_529(PLAYER::PLAYER_ID()))
	{
		if (!__LIB_6__::func_62(__LIB_6__::func_338(iVar0, 1, 0)) && !__LIB_2__::func_753(PLAYER::PLAYER_ID()))
		{
			__LIB_4__::func_564(1);
		}
		return 1;
	}
	if (((__LIB_2__::func_753(PLAYER::PLAYER_ID()) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && ENTITY::DOES_ENTITY_EXIST(iVar0)) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		if (!ENTITY::IS_ENTITY_VISIBLE(iVar0) || NETWORK::NETWORK_IS_ENTITY_FADING(iVar0))
		{
			return 1;
		}
	}
	if (__LIB_3__::func_56("BASE_ENTER" /* GXT: Press ~INPUT_CONTEXT~ to enter the Facility with current vehicle. */, "STRING"))
	{
		return 1;
	}
	if (Global_2787784)
	{
		return 1;
	}
	if (!__LIB_2__::func_753(PLAYER::PLAYER_ID()) && __LIB_2__::func_826(iVar0, 0))
	{
		return 1;
	}
	if (__LIB_3__::func_171(PLAYER::PLAYER_ID()))
	{
		if (__LIB_0__::func_172(__LIB_1__::func_935(PLAYER::PLAYER_ID())) != 8)
		{
		}
	}
	if (__LIB_1__::func_613(PLAYER::PLAYER_ID()) == 5)
	{
		return 1;
	}
	if (__LIB_3__::func_728(PLAYER::PLAYER_ID(), 14))
	{
		return 1;
	}
	if (__LIB_2__::func_606())
	{
		return 1;
	}
	if (__LIB_1__::func_731(23))
	{
		return 1;
	}
	if (__LIB_2__::func_906())
	{
		return 1;
	}
	__LIB_4__::func_564(0);
	return 0;
}

void func_3736(var uParam0, int iParam1)//Position - 0x12B5C8
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1278728/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1278648/*__LIB_4__::func_631*/;
			break;
		case 2:
			uParam0->f_31 = 1278149/*__LIB_5__::func_348*/;
			break;
		case 3:
			uParam0->f_34 = 1278099/*__LIB_4__::func_630*/;
			break;
		case 4:
			uParam0->f_12 = 1278012/*__LIB_4__::func_629*/;
			break;
		case 5:
			uParam0->f_11 = 1278002/*__LIB_4__::func_628*/;
			break;
		case 37:
			uParam0->f_18 = 1277879/*__LIB_4__::func_627*/;
			break;
		case 38:
			uParam0->f_9 = 1277757/*__LIB_5__::func_905*/;
			break;
		case 6:
			uParam0->f_32 = 1277669/*__LIB_4__::func_626*/;
			break;
		case 111:
			uParam0->f_35 = 1277655/*__LIB_5__::func_904*/;
			break;
		case 11:
			uParam0->f_11 = 1277646/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 1277267/*__LIB_5__::func_645*/;
			break;
		case 14:
			uParam0->f_11 = 1277258/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 1277250/*__LIB_0__::func_467*/;
			break;
		case 79:
			*uParam0 = 1277226/*__LIB_5__::func_265*/;
			break;
		case 13:
			uParam0->f_2 = 1277094/*__LIB_6__::func_394*/;
			break;
		case 15:
			uParam0->f_2 = 1276812/*__LIB_31__::func_24*/;
			break;
		case 75:
			uParam0->f_4 = 1276798/*__LIB_4__::func_624*/;
			break;
		case 16:
			uParam0->f_5 = 1276280/*__LIB_6__::func_764*/;
			break;
		case 108:
			uParam0->f_55 = 1272656/*__LIB_40__::func_821*/;
			break;
		case 17:
			uParam0->f_17 = 1272119/*__LIB_10__::func_639*/;
			break;
		case 19:
			uParam0->f_17 = 1272092/*__LIB_6__::func_3*/;
			break;
		case 20:
			uParam0->f_3 = 1272008/*__LIB_5__::func_643*/;
			break;
		case 21:
			uParam0->f_3 = 1271944/*__LIB_5__::func_798*/;
			break;
		case 74:
			uParam0->f_53 = 1271764/*__LIB_6__::func_111*/;
			break;
		case 22:
			uParam0->f_24 = 1271621/*__LIB_6__::func_686*/;
			break;
		case 25:
			uParam0->f_23 = 1270997/*func_3860*/;
			break;
		case 30:
			uParam0->f_8 = 1270482/*__LIB_7__::func_596*/;
			break;
		case 31:
			uParam0->f_39 = 1270195/*__LIB_6__::func_763*/;
			break;
		case 33:
			uParam0->f_40 = 1269524/*__LIB_7__::func_521*/;
			break;
		case 34:
			uParam0->f_41 = 1268260/*__LIB_4__::func_620*/;
			break;
		case 36:
			uParam0->f_58 = 1268215/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 1242123/*__LIB_5__::func_755*/;
			break;
		case 45:
			uParam0->f_14 = 1242114/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 1242105/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 1242097/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1242074/*__LIB_4__::func_616*/;
			break;
		case 47:
			uParam0->f_43 = 1241970/*__LIB_4__::func_615*/;
			break;
		case 49:
			uParam0->f_8 = 1241929/*__LIB_4__::func_494*/;
			break;
		case 50:
			*uParam0 = 1241715/*__LIB_5__::func_754*/;
			break;
		case 51:
			*uParam0 = 1241646/*__LIB_7__::func_759*/;
			break;
		case 52:
			uParam0->f_15 = 1241635/*__LIB_4__::func_613*/;
			break;
		case 53:
			uParam0->f_13 = 1241497/*__LIB_4__::func_302*/;
			break;
		case 54:
			uParam0->f_45 = 1241309/*__LIB_5__::func_347*/;
			break;
		case 56:
			uParam0->f_46 = 1241300/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1241123/*__LIB_6__::func_2*/;
			break;
		case 58:
			uParam0->f_13 = 1240985/*__LIB_4__::func_302*/;
			break;
		case 64:
			uParam0->f_47 = 1240977/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 1240141/*__LIB_10__::func_704*/;
			break;
		case 66:
			uParam0->f_21 = 1240034/*__LIB_4__::func_611*/;
			break;
		case 67:
			uParam0->f_21 = 1239970/*__LIB_4__::func_610*/;
			break;
		case 68:
			*uParam0 = 1239482/*__LIB_5__::func_346*/;
			break;
		case 69:
			*uParam0 = 1239473/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 1239461/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1239452/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1239440/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1238737/*__LIB_6__::func_1*/;
			break;
		case 84:
			uParam0->f_1 = 1238637/*__LIB_5__::func_902*/;
			break;
		case 85:
			uParam0->f_1 = 1236653/*func_3809*/;
			break;
		case 87:
			uParam0->f_1 = 1234230/*__LIB_6__::func_428*/;
			break;
		case 88:
			uParam0->f_1 = 1234221/*__LIB_0__::func_109*/;
			break;
		case 96:
			uParam0->f_1 = 1234158/*__LIB_4__::func_600*/;
			break;
		case 97:
			uParam0->f_1 = 1233836/*__LIB_6__::func_0*/;
			break;
		case 98:
			uParam0->f_1 = 1229829/*func_3758*/;
			break;
		case 100:
			uParam0->f_22 = 1227552/*__LIB_6__::func_441*/;
			break;
		case 78:
			uParam0->f_59 = 1227348/*__LIB_5__::func_998*/;
			break;
		case 125:
			uParam0->f_19 = 1227332/*__LIB_4__::func_516*/;
			break;
	}
}

int func_3758(int iParam0, int* iParam1)//Position - 0x12C405
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	__LIB_6__::func_427(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_109) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
		func_297(&iVar0, &(iParam1->f_109), 12);
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

int func_3809(int iParam0, int* iParam1)//Position - 0x12DEAD
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
			func_297(&iVar0, &(iParam1->f_109), 60);
			__LIB_3__::func_633(&(iParam1->f_109));
			return 0;
		}
		else
		{
			func_214(&iVar0, &(iParam1->f_109), &(iParam1->f_109.f_1), 1, 0, 0, 0, 0, 1);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_140[0]))
	{
		func_1377(&(iParam1->f_140[0]), PLAYER::PLAYER_ID(), 1, 0);
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

void func_3860(int iParam0, int iParam1)//Position - 0x1364D5
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
								if ((((!__LIB_1__::func_907(bVar7, 1) && !__LIB_6__::func_279(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_1__::func_101(PLAYER::PLAYER_PED_ID())) && !func_522(bVar7))
								{
									bVar2 = true;
								}
							}
						}
						if (((((!bVar3 && __LIB_3__::func_234(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_6__::func_279(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_1__::func_101(PLAYER::PLAYER_PED_ID())) && !func_522(bVar7))
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
						__LIB_7__::func_521(iParam0, -1);
					}
					if (__LIB_3__::func_661(0, iParam1))
					{
						__LIB_7__::func_521(iParam0, -1);
					}
					else if (__LIB_3__::func_661(1, iParam1))
					{
						if (bVar3)
						{
							__LIB_7__::func_656(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 1, 0, 0, 0, -1, -1, -1);
						}
						func_3861(iParam0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar2)
						{
							__LIB_7__::func_656(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 0, 0, 1, 0, -1, -1, -1);
						}
						func_3861(iParam0);
					}
					Jump @575; //curOff = 556
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_3861(int iParam0)//Position - 0x136717
{
	__LIB_7__::func_521(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_3904(var uParam0, int iParam1)//Position - 0x138311
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1288242/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1288186/*__LIB_4__::func_641*/;
			break;
		case 2:
			uParam0->f_31 = 1287967/*__LIB_5__::func_807*/;
			break;
		case 3:
			uParam0->f_34 = 1287916/*__LIB_4__::func_640*/;
			break;
		case 4:
			uParam0->f_12 = 1287883/*__LIB_4__::func_639*/;
			break;
		case 6:
			uParam0->f_32 = 1287819/*__LIB_4__::func_638*/;
			break;
		case 111:
			uParam0->f_35 = 1287810/*__LIB_0__::func_162*/;
			break;
		case 79:
			*uParam0 = 1287786/*__LIB_5__::func_265*/;
			break;
		case 11:
			uParam0->f_11 = 1287777/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 1287685/*__LIB_7__::func_558*/;
			break;
		case 14:
			uParam0->f_11 = 1287676/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 1287668/*__LIB_0__::func_467*/;
			break;
		case 15:
			uParam0->f_2 = 1287416/*__LIB_7__::func_344*/;
			break;
		case 13:
			uParam0->f_2 = 1287407/*__LIB_0__::func_114*/;
			break;
		case 75:
			uParam0->f_4 = 1287398/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1287389/*__LIB_0__::func_109*/;
			break;
		case 108:
			uParam0->f_55 = 1287380/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 1287335/*__LIB_5__::func_351*/;
			break;
		case 19:
			uParam0->f_17 = 1287323/*__LIB_3__::func_860*/;
			break;
		case 20:
			uParam0->f_3 = 1287276/*__LIB_7__::func_598*/;
			break;
		case 21:
			uParam0->f_3 = 1287224/*__LIB_5__::func_350*/;
			break;
		case 74:
			uParam0->f_53 = 1287168/*__LIB_5__::func_806*/;
			break;
		case 22:
			uParam0->f_24 = 1287086/*__LIB_4__::func_637*/;
			break;
		case 25:
			uParam0->f_23 = 1286119/*func_3941*/;
			break;
		case 30:
			uParam0->f_8 = 1285814/*__LIB_5__::func_647*/;
			break;
		case 31:
			uParam0->f_39 = 1285782/*__LIB_4__::func_635*/;
			break;
		case 33:
			uParam0->f_40 = 1285592/*__LIB_7__::func_597*/;
			break;
		case 34:
			uParam0->f_41 = 1281589/*__LIB_5__::func_646*/;
			break;
		case 36:
			uParam0->f_58 = 1281536/*__LIB_3__::func_945*/;
			break;
		case 35:
			uParam0->f_42 = 1280345/*__LIB_5__::func_906*/;
			break;
		case 45:
			uParam0->f_14 = 1280336/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 1280327/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 1280319/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1280308/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1280205/*__LIB_4__::func_632*/;
			break;
		case 49:
			uParam0->f_8 = 1280180/*__LIB_3__::func_941*/;
			break;
		case 50:
			*uParam0 = 1280142/*__LIB_5__::func_725*/;
			break;
		case 51:
			*uParam0 = 1280133/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 1280122/*__LIB_4__::func_270*/;
			break;
		case 53:
			uParam0->f_13 = 1280041/*__LIB_7__::func_341*/;
			break;
		case 54:
			uParam0->f_45 = 1280033/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 1280024/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1280014/*__LIB_3__::func_938*/;
			break;
		case 58:
			uParam0->f_13 = 1279807/*__LIB_7__::func_340*/;
			break;
		case 64:
			uParam0->f_47 = 1279799/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 1279791/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 1279783/*__LIB_0__::func_467*/;
			break;
		case 67:
			uParam0->f_21 = 1279775/*__LIB_0__::func_467*/;
			break;
		case 68:
			*uParam0 = 1279766/*__LIB_0__::func_109*/;
			break;
		case 69:
			*uParam0 = 1279757/*__LIB_0__::func_109*/;
			break;
		case 70:
			uParam0->f_48 = 1279745/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1279736/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1279724/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1279715/*__LIB_0__::func_114*/;
			break;
		case 73:
			uParam0->f_51 = 1279706/*__LIB_0__::func_114*/;
			break;
		case 78:
			uParam0->f_59 = 1279698/*__LIB_0__::func_467*/;
			break;
	}
}

void func_3941(int iParam0, int iParam1)//Position - 0x139FE7
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
	if (__LIB_7__::func_598(PLAYER::PLAYER_ID(), iParam0))
	{
		if (__LIB_1__::func_526())
		{
			iVar4 = __LIB_3__::func_680();
		}
		__LIB_7__::func_343(iParam0, &Var6);
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
								if ((!__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar7)) && !__LIB_1__::func_907(bVar7, 1)) && !__LIB_6__::func_279(bVar7))
								{
									bVar0 = true;
								}
							}
						}
						if ((((!bVar1 && __LIB_3__::func_234(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar7))) && !__LIB_1__::func_907(bVar7, 1)) && !__LIB_6__::func_279(bVar7))
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
						__LIB_7__::func_597(iParam0, -1);
					}
					bVar9 = __LIB_4__::func_636(PLAYER::PLAYER_ID());
					if (__LIB_3__::func_661(0, iParam1))
					{
						__LIB_7__::func_597(iParam0, -1);
					}
					else if (__LIB_3__::func_661(1, iParam1))
					{
						if (bVar1)
						{
							__LIB_7__::func_342(1);
							__LIB_7__::func_656(PLAYER::PLAYER_ID(), iParam0, OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(__LIB_6__::func_673(), true), ENTITY::GET_ENTITY_HEADING(__LIB_6__::func_673()), 2f, -13f, 0f), 0, 0, 1, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_3942(iParam0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_7__::func_342(1);
							__LIB_7__::func_656(PLAYER::PLAYER_ID(), iParam0, OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(__LIB_6__::func_673(), true), ENTITY::GET_ENTITY_HEADING(__LIB_6__::func_673()), 2f, -13f, 0f), 0, 0, 1, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_3942(iParam0);
					}
					Jump @634; //curOff = 615
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_3942(int iParam0)//Position - 0x13A264
{
	__LIB_7__::func_597(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_3969(var uParam0, int iParam1)//Position - 0x13A83B
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1367680/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1367624/*__LIB_4__::func_687*/;
			break;
		case 2:
			uParam0->f_31 = 1366079/*__LIB_6__::func_690*/;
			break;
		case 3:
			uParam0->f_34 = 1366030/*__LIB_4__::func_686*/;
			break;
		case 4:
			uParam0->f_12 = 1365997/*__LIB_4__::func_685*/;
			break;
		case 6:
			uParam0->f_32 = 1365933/*__LIB_4__::func_684*/;
			break;
		case 111:
			uParam0->f_35 = 1365910/*__LIB_5__::func_360*/;
			break;
		case 79:
			*uParam0 = 1365886/*__LIB_5__::func_265*/;
			break;
		case 37:
			uParam0->f_18 = 1365766/*__LIB_4__::func_683*/;
			break;
		case 38:
			uParam0->f_9 = 1365699/*__LIB_5__::func_910*/;
			break;
		case 11:
			uParam0->f_11 = 1365690/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 1365345/*__LIB_7__::func_524*/;
			break;
		case 14:
			uParam0->f_11 = 1365336/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 1365328/*__LIB_0__::func_467*/;
			break;
		case 15:
			uParam0->f_2 = 1360004/*func_4098*/;
			break;
		case 13:
			uParam0->f_2 = 1359995/*__LIB_0__::func_114*/;
			break;
		case 75:
			uParam0->f_4 = 1359986/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1359961/*__LIB_5__::func_323*/;
			break;
		case 108:
			uParam0->f_55 = 1351760/*func_4074*/;
			break;
		case 17:
			uParam0->f_17 = 1351176/*__LIB_10__::func_705*/;
			break;
		case 19:
			uParam0->f_17 = 1351149/*__LIB_6__::func_5*/;
			break;
		case 20:
			uParam0->f_3 = 1351088/*__LIB_7__::func_457*/;
			break;
		case 21:
			uParam0->f_3 = 1350968/*__LIB_5__::func_810*/;
			break;
		case 74:
			uParam0->f_53 = 1350912/*__LIB_5__::func_809*/;
			break;
		case 22:
			uParam0->f_24 = 1350830/*__LIB_4__::func_676*/;
			break;
		case 25:
			uParam0->f_23 = 1349858/*func_4063*/;
			break;
		case 30:
			uParam0->f_8 = 1349118/*__LIB_5__::func_650*/;
			break;
		case 31:
			uParam0->f_39 = 1348847/*__LIB_6__::func_766*/;
			break;
		case 33:
			uParam0->f_40 = 1347911/*__LIB_31__::func_294*/;
			break;
		case 34:
			uParam0->f_41 = 1344567/*__LIB_5__::func_355*/;
			break;
		case 36:
			uParam0->f_58 = 1344514/*__LIB_3__::func_945*/;
			break;
		case 35:
			uParam0->f_42 = 1343831/*__LIB_5__::func_909*/;
			break;
		case 45:
			uParam0->f_14 = 1343822/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 1343813/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 1343369/*func_4051*/;
			break;
		case 77:
			uParam0->f_13 = 1343358/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1343255/*__LIB_4__::func_672*/;
			break;
		case 49:
			uParam0->f_8 = 1343230/*__LIB_3__::func_941*/;
			break;
		case 50:
			*uParam0 = 1343192/*__LIB_5__::func_725*/;
			break;
		case 51:
			*uParam0 = 1343168/*__LIB_7__::func_329*/;
			break;
		case 52:
			uParam0->f_15 = 1343157/*__LIB_4__::func_270*/;
			break;
		case 53:
			uParam0->f_13 = 1343078/*__LIB_6__::func_688*/;
			break;
		case 54:
			uParam0->f_45 = 1343070/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 1343061/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1343051/*__LIB_3__::func_938*/;
			break;
		case 58:
			uParam0->f_13 = 1342822/*__LIB_12__::func_448*/;
			break;
		case 64:
			uParam0->f_47 = 1296487/*func_4007*/;
			break;
		case 65:
			uParam0->f_21 = 1295349/*__LIB_7__::func_547*/;
			break;
		case 66:
			uParam0->f_21 = 1295126/*__LIB_5__::func_908*/;
			break;
		case 67:
			uParam0->f_21 = 1294228/*__LIB_5__::func_907*/;
			break;
		case 68:
			*uParam0 = 1293683/*__LIB_7__::func_454*/;
			break;
		case 69:
			*uParam0 = 1293674/*__LIB_0__::func_109*/;
			break;
		case 70:
			uParam0->f_48 = 1293662/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1293653/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1293641/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1291547/*func_3984*/;
			break;
		case 73:
			uParam0->f_51 = 1289779/*__LIB_31__::func_392*/;
			break;
		case 78:
			uParam0->f_59 = 1289246/*__LIB_7__::func_641*/;
			break;
	}
}

int func_3984(var uParam0, int iParam1, var uParam2)//Position - 0x13B51B
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (__LIB_1__::func_583(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (__LIB_5__::func_187(PLAYER::PLAYER_ID(), -1))
	{
		if (__LIB_3__::func_100() || __LIB_0__::func_877())
		{
			return 0;
		}
		if (__LIB_4__::func_655(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (Global_1957730)
	{
		if (Global_1574632.f_18 != 0 || __LIB_5__::func_333())
		{
			Global_1957730 = 0;
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 0)
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 576);
				}
			}
			return 0;
		}
	}
	if (__LIB_2__::func_77())
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 0)
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 576);
			}
		}
		return 0;
	}
	if (__LIB_2__::func_715())
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 0)
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 576);
			}
		}
		return 0;
	}
	if (Global_1853185 != __LIB_0__::func_162())
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318, 5))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (iParam1 == PLAYER::PLAYER_ID())
			{
				if (!VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iVar0))
				{
					return 0;
				}
				if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
				{
					return 0;
				}
				if (((((TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) == 1 || TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) == 0) || TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_ENTER_VEHICLE")) == 1) || TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_ENTER_VEHICLE")) == 0) || TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_VEHICLE")) == 1) || TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_VEHICLE")) == 0)
				{
					return 0;
				}
				if (PED::GET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 373))
				{
					return 0;
				}
				if (TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
				{
					return 0;
				}
				if (__LIB_5__::func_621())
				{
					return 0;
				}
				if (VEHICLE::GET_IS_VEHICLE_ENGINE_RUNNING(iVar0) && Global_1957730 == 1)
				{
					if (((((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/) != 0f || PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/) != 0f) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/)) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/)) || PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/)) || PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/))
					{
						__LIB_1__::func_33(1);
						__LIB_6__::func_410(PLAYER::PLAYER_ID(), 0, 0, 0);
						__LIB_3__::func_738(0);
						__LIB_4__::func_654(0);
						PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 104 /*INPUT_VEH_SHUFFLE*/, false);
						PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 1);
						VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(iVar0, true);
						VEHICLE::SET_DONT_ALLOW_PLAYER_TO_ENTER_VEHICLE_IF_LOCKED_FOR_PLAYER(iVar0, true);
						VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(iVar0, PLAYER::PLAYER_ID(), false);
						PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
						__LIB_4__::func_519(iVar0, 0);
						if (__LIB_5__::func_187(PLAYER::PLAYER_ID(), -1) && __LIB_0__::func_389(PLAYER::PLAYER_ID()))
						{
							if (__LIB_0__::func_541(iVar0, 0))
							{
								__LIB_4__::func_642(1);
							}
							else
							{
								if (__LIB_4__::func_633(PLAYER::PLAYER_ID()))
								{
									if (__LIB_0__::func_155() != -1)
									{
										if (Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_2 != -1 && Global_2703735.f_61.f_49)
										{
											__LIB_1__::func_891(1, 0, 1, 0, 0, 0, 0);
										}
									}
									iVar1 = -1;
									__LIB_1__::func_775(156, &iVar1, 1);
									if (iVar1 >= 0)
									{
										__LIB_1__::func_821(iVar1);
									}
								}
								__LIB_5__::func_352(750);
								__LIB_6__::func_413(1);
							}
						}
						if (!__LIB_1__::func_659(Global_1853185))
						{
							if (__LIB_5__::func_187(PLAYER::PLAYER_ID(), -1) && !__LIB_0__::func_541(iVar0, 0))
							{
								if (__LIB_4__::func_633(PLAYER::PLAYER_ID()))
								{
									if (__LIB_0__::func_155() != -1)
									{
										if (Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_2 != -1 && Global_2703735.f_61.f_49)
										{
											__LIB_1__::func_891(1, 0, 1, 0, 0, 0, 0);
										}
									}
									iVar2 = -1;
									__LIB_1__::func_775(156, &iVar2, 1);
									if (iVar2 >= 0)
									{
										__LIB_1__::func_821(iVar2);
									}
								}
								__LIB_5__::func_352(750);
								__LIB_6__::func_413(1);
							}
							__LIB_2__::func_976();
							return 1;
						}
						else if (__LIB_4__::func_653(PLAYER::PLAYER_ID()) && __LIB_1__::func_659(Global_1853185))
						{
							__LIB_2__::func_976();
							return 1;
						}
						else if (!__LIB_0__::func_389(PLAYER::PLAYER_ID()))
						{
							bLocal_94 = true;
						}
						else
						{
							__LIB_4__::func_652(0);
							__LIB_4__::func_651(1);
						}
					}
				}
				if (bLocal_94)
				{
					__LIB_1__::func_33(1);
					if (__LIB_0__::func_541(iVar0, 0))
					{
						__LIB_4__::func_553(PLAYER::PLAYER_ID(), __LIB_4__::func_566(PLAYER::PLAYER_ID()), 1);
						__LIB_4__::func_642(1);
					}
					else
					{
						if (__LIB_0__::func_155() != -1)
						{
							if (Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_2 != -1 && Global_2703735.f_61.f_49)
							{
								__LIB_1__::func_891(1, 0, 1, 0, 0, 0, 0);
							}
						}
						iVar3 = -1;
						__LIB_1__::func_775(156, &iVar3, 1);
						__LIB_4__::func_519(iVar0, 0);
						if (iVar3 >= 0)
						{
							MISC::SET_BIT(&(Global_1585857[iVar3 /*142*/].f_103), 0);
							__LIB_1__::func_821(iVar3);
							if (__LIB_1__::func_659(PLAYER::PLAYER_ID()))
							{
								__LIB_3__::func_602(0);
								__LIB_5__::func_411(1);
							}
							else
							{
								__LIB_5__::func_352(750);
							}
							__LIB_4__::func_956(PLAYER::PLAYER_ID(), __LIB_4__::func_566(PLAYER::PLAYER_ID()), 1);
							__LIB_6__::func_413(1);
						}
					}
					__LIB_4__::func_651(1);
					__LIB_4__::func_652(0);
				}
			}
			else if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) == PLAYER::GET_PLAYER_PED(iParam1) && uParam2)
			{
				__LIB_2__::func_976();
				return 1;
			}
		}
	}
	return 0;
}

void func_4007(var uParam0, int iParam1, var uParam2, var uParam3)//Position - 0x13C867
{
	int iVar0;
	int iVar1;
	bool bVar2;
	iVar0 = __LIB_6__::func_339();
	if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (__LIB_4__::func_671())
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				__LIB_4__::func_670(0);
			}
		}
		if (__LIB_2__::func_730(PLAYER::PLAYER_ID()))
		{
			if (INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == joaat("GtaMloRoom001") && CAM::IS_GAMEPLAY_CAM_RENDERING())
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_22.f_105))
				{
					VEHICLE::DELETE_VEHICLE(&(uParam0->f_22.f_105));
				}
			}
		}
		else if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false)) && __LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
		{
			__LIB_7__::func_455(uParam0);
		}
		if (__LIB_4__::func_535(PLAYER::PLAYER_ID()))
		{
			if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !__LIB_5__::func_195(PLAYER::PLAYER_ID())) || BitTest(Global_1946250.f_506, 11))
			{
				if ((HUD::IS_WARNING_MESSAGE_ACTIVE() && __LIB_0__::func_336(PLAYER::PLAYER_PED_ID(), 0) != -1) || BitTest(Global_1946250.f_506, 11))
				{
					if (!__LIB_4__::func_649() && !__LIB_1__::func_659(Global_1853185))
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
						__LIB_4__::func_534(0);
						Global_1946250.f_3630 = 0;
						__LIB_4__::func_669(0);
						CAM::DO_SCREEN_FADE_IN(500);
						__LIB_4__::func_660(iParam1);
						__LIB_6__::func_410(PLAYER::PLAYER_ID(), 1, 0, 0);
						__LIB_4__::func_539(1);
						__LIB_4__::func_668(0);
						__LIB_4__::func_527(0);
					}
					else
					{
						__LIB_11__::func_915(iParam1);
					}
				}
			}
		}
		if (__LIB_4__::func_649() || BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318, 5))
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 104 /*INPUT_VEH_SHUFFLE*/, false);
		}
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
		{
			if (__LIB_3__::func_363(uParam0->f_22.f_94, 0))
			{
				HUD::CLEAR_HELP(true);
				__LIB_3__::func_122(&(uParam0->f_22.f_94));
			}
		}
		if (Global_1853185 != __LIB_0__::func_162())
		{
			if (PLAYER::PLAYER_ID() == Global_1853185)
			{
				if (__LIB_1__::func_659(PLAYER::PLAYER_ID()))
				{
					if ((((__LIB_4__::func_665(PLAYER::PLAYER_ID()) || __LIB_4__::func_295(PLAYER::PLAYER_ID())) || __LIB_3__::func_965()) || __LIB_4__::func_671()) || Global_1957730)
					{
						__LIB_1__::func_33(1);
					}
				}
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (__LIB_0__::func_336(PLAYER::PLAYER_PED_ID(), 0) != -1 && __LIB_4__::func_535(PLAYER::PLAYER_ID()))
			{
				iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), -1, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					bVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
					if (__LIB_1__::func_693(bVar2, 1, 1))
					{
						if (__LIB_3__::func_644(bVar2))
						{
							if (__LIB_5__::func_196(bVar2) == 81)
							{
								if (func_4098(iParam1) && !__LIB_2__::func_730(PLAYER::PLAYER_ID()))
								{
									TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
									__LIB_4__::func_534(0);
									__LIB_4__::func_664(0);
									CAM::DO_SCREEN_FADE_IN(500);
									__LIB_4__::func_660(iParam1);
									__LIB_6__::func_410(PLAYER::PLAYER_ID(), 1, 0, 0);
									if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
									{
										NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false);
									}
									__LIB_4__::func_539(1);
								}
							}
						}
					}
				}
			}
		}
		if (__LIB_4__::func_665(PLAYER::PLAYER_ID()))
		{
			if (HUD::IS_PAUSE_MENU_ACTIVE())
			{
				HUD::SET_FRONTEND_ACTIVE(false);
			}
			else
			{
				HUD::DISABLE_FRONTEND_THIS_FRAME();
			}
		}
	}
	if (__LIB_0__::func_833())
	{
		if (Global_1946250.f_523)
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 23 /*INPUT_ENTER*/, true);
		}
	}
	if ((((func_4098(iParam1) && !__LIB_2__::func_730(PLAYER::PLAYER_ID())) && PLAYER::PLAYER_ID() == __LIB_6__::func_760()) && !__LIB_1__::func_659(PLAYER::PLAYER_ID())) || !__LIB_0__::func_893())
	{
		if (!__LIB_0__::func_833())
		{
			__LIB_6__::func_810(uParam0, 1);
		}
	}
	if ((((BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1, 7) || BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318, 25)) && func_4017(iParam1)) && !__LIB_1__::func_659(__LIB_6__::func_760())) || BitTest(Global_1946250.f_506, 11))
	{
		if (!__LIB_4__::func_649() && !__LIB_1__::func_659(Global_1853185))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 0)
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
			}
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("am_mp_smpl_interior_int")) > 0)
			{
				__LIB_3__::func_514(0);
				__LIB_4__::func_539(1);
			}
			__LIB_5__::func_435(0, -1);
			if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
			{
				NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false);
			}
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
			__LIB_4__::func_527(0);
			__LIB_4__::func_669(0);
			__LIB_4__::func_663(0);
			CAM::DO_SCREEN_FADE_IN(500);
			__LIB_4__::func_660(iParam1);
			__LIB_4__::func_664(0);
			__LIB_6__::func_410(PLAYER::PLAYER_ID(), 1, 0, 0);
			__LIB_4__::func_668(0);
		}
		else
		{
			__LIB_11__::func_915(iParam1);
		}
	}
	if (__LIB_5__::func_757(iVar0))
	{
		if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && func_4009(uParam0, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), iVar0, 1)) && !func_4098(iParam1))
		{
		}
		else if (!__LIB_3__::func_171(PLAYER::PLAYER_ID()) && PLAYER::PLAYER_ID() == __LIB_6__::func_760())
		{
			__LIB_6__::func_810(uParam0, 1);
		}
		if (__LIB_5__::func_187(PLAYER::PLAYER_ID(), -1))
		{
			if (PLAYER::PLAYER_ID() == __LIB_3__::func_250(iVar0, 1, 0))
			{
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 357 /*INPUT_VEH_TRANSFORM*/, true);
			}
		}
	}
	if (__LIB_4__::func_661())
	{
		PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/, true);
		HUD::DISABLE_FRONTEND_THIS_FRAME();
	}
	if (__LIB_3__::func_950(PLAYER::PLAYER_ID()) || __LIB_4__::func_535(PLAYER::PLAYER_ID()))
	{
		HUD::DISABLE_FRONTEND_THIS_FRAME();
		HUD::SUPPRESS_FRONTEND_RENDERING_THIS_FRAME();
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/, true);
		PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/, true);
	}
}

int func_4009(var uParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x13CDB0
{
	struct<2> Var0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	Var0.f_1 = 29;
	if ((!ENTITY::DOES_ENTITY_EXIST(iParam1) || ENTITY::IS_ENTITY_DEAD(iParam1, false)) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
	{
		return 0;
	}
	if (FIRE::IS_ENTITY_ON_FIRE(iParam1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_UPSIDEDOWN(iParam1))
	{
		return 0;
	}
	if (((!VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iParam1) && !BitTest(uParam0->f_22, 1)) && ENTITY::GET_ENTITY_MODEL(iParam1) != joaat("oppressor2")) && !__LIB_5__::func_808(PLAYER::PLAYER_ID(), 81))
	{
		return 0;
	}
	if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 1f && !BitTest(uParam0->f_22, 1))
	{
		return 0;
	}
	if (__LIB_3__::func_695())
	{
		return 0;
	}
	if (__LIB_0__::func_983())
	{
		return 0;
	}
	if (__LIB_2__::func_754(PLAYER::PLAYER_ID()))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam1);
		if (((iVar1 == joaat("caddy2") || iVar1 == joaat("caddy3")) || iVar1 == joaat("hauler2")) || iVar1 == joaat("phantom3"))
		{
			return 0;
		}
	}
	if (!__LIB_4__::func_545())
	{
		return 0;
	}
	if (__LIB_0__::func_193())
	{
		return 0;
	}
	if (__LIB_1__::func_512())
	{
		return 0;
	}
	if (Global_2815059.f_28.f_82)
	{
		return 0;
	}
	if (!__LIB_0__::func_893())
	{
		return 0;
	}
	if (!__LIB_3__::func_958())
	{
		return 0;
	}
	if (bParam3)
	{
		if (!__LIB_5__::func_353())
		{
			return 0;
		}
		bVar2 = __LIB_4__::func_633(PLAYER::PLAYER_ID());
		bVar3 = __LIB_0__::func_389(PLAYER::PLAYER_ID());
		if (__LIB_5__::func_187(PLAYER::PLAYER_ID(), -1))
		{
			if (!__LIB_31__::func_31(iParam1, 1234, &Var0, 0, 0, bVar2, bVar3, iParam2))
			{
				return 0;
			}
		}
	}
	if (__LIB_4__::func_662(ENTITY::GET_ENTITY_MODEL(iParam1)))
	{
		return 0;
	}
	if (__LIB_4__::func_306(PLAYER::PLAYER_ID()) || __LIB_4__::func_305(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (__LIB_6__::func_760() != PLAYER::PLAYER_ID())
	{
		return 0;
	}
	if ((!__LIB_1__::func_461(iParam1, 1) && !__LIB_0__::func_541(iParam1, 0)) && __LIB_0__::func_389(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if ((Global_2815059.f_303 != iParam1 && __LIB_0__::func_541(iParam1, 0)) && __LIB_0__::func_389(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (__LIB_0__::func_541(iParam1, 0) && Global_2703735.f_501[PLAYER::PLAYER_ID()] == iParam1)
	{
		return 0;
	}
	if (Global_262145.f_21127 /* Tunable: -210511076 */ && __LIB_0__::func_389(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (Global_262145.f_21126 /* Tunable: DISABLE_STORE_PV */ && __LIB_0__::func_872(iParam1, 1))
	{
		if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			__LIB_1__::func_707("PROP_NO_PVTUN" /* GXT: Unable to enter the Mobile Operations Center in this vehicle at this time.  Please enter on foot. */, -1);
		}
		return 0;
	}
	if ((Global_262145.f_21127 /* Tunable: -210511076 */ && __LIB_4__::func_633(PLAYER::PLAYER_ID())) && __LIB_5__::func_440(iParam1))
	{
		if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			__LIB_1__::func_707("PROP_NO_PVTUN" /* GXT: Unable to enter the Mobile Operations Center in this vehicle at this time.  Please enter on foot. */, -1);
		}
		return 0;
	}
	if (Global_262145.f_21137 /* Tunable: -1117138206 */)
	{
		__LIB_1__::func_775(156, &iVar4, 1);
		__LIB_1__::func_660(__LIB_1__::func_463(), &iVar5);
		if (iVar5 == 156 && __LIB_1__::func_461(iParam1, 1))
		{
		}
		else if (iVar4 > 0)
		{
			if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				__LIB_1__::func_707("PROP_NO_PVTUN" /* GXT: Unable to enter the Mobile Operations Center in this vehicle at this time.  Please enter on foot. */, -1);
			}
			return 0;
		}
	}
	if (__LIB_3__::func_531(iParam1, 0) || __LIB_3__::func_531(iParam1, 1))
	{
		return 0;
	}
	return 1;
}

int func_4017(int iParam0)//Position - 0x13D41F
{
	if (HUD::IS_WARNING_MESSAGE_ACTIVE() || func_4098(iParam0))
	{
		return 1;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!__LIB_5__::func_187(PLAYER::PLAYER_ID(), -1))
		{
			if (!__LIB_0__::func_893())
			{
				return 1;
			}
			if (PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED())
			{
				return 1;
			}
			if (NETWORK::IS_COMMERCE_STORE_OPEN())
			{
				return 1;
			}
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				if (Global_1946250.f_3630 != __LIB_0__::func_162())
				{
					if ((!__LIB_3__::func_171(Global_1946250.f_3630) && !__LIB_4__::func_902(Global_1946250.f_3630)) && !BitTest(Global_2689235[Global_1946250.f_3630 /*453*/].f_318, 5))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_4051(var uParam0)//Position - 0x147F89
{
	int iVar0;
	int iVar1;
	bool bVar2;
	if (BitTest(uParam0->f_22, 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_22.f_256) && VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_22.f_256, true))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_22.f_256))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(uParam0->f_22.f_256, false);
				if (uParam0->f_22.f_255 != 0 && uParam0->f_22.f_255 != VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(uParam0->f_22.f_256))
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(uParam0->f_22.f_256, uParam0->f_22.f_255);
				}
				__LIB_6__::func_810(uParam0, 1);
			}
			else
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam0->f_22.f_256);
			}
		}
		else
		{
			__LIB_6__::func_810(uParam0, 1);
		}
		__LIB_6__::func_410(PLAYER::PLAYER_ID(), 1, 0, 0);
		PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 0);
	}
	else if (Global_2787905)
	{
		if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !__LIB_5__::func_195(PLAYER::PLAYER_ID()))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if (__LIB_0__::func_695(iVar0))
				{
					iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false);
					if (!PED::IS_PED_INJURED(iVar1))
					{
						if (PED::IS_PED_A_PLAYER(iVar1))
						{
							bVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
							if (bVar2 != PLAYER::PLAYER_ID() && __LIB_1__::func_693(bVar2, 1, 1))
							{
								if (BitTest(Global_2689235[bVar2 /*453*/].f_318, 5) && __LIB_0__::func_172(__LIB_5__::func_196(bVar2)) == 5)
								{
									if ((((func_4017(__LIB_5__::func_196(bVar2)) || !__LIB_5__::func_337()) || !__LIB_0__::func_893()) || PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED()) || NETWORK::IS_COMMERCE_STORE_OPEN())
									{
										if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 0)
										{
											TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
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

void func_4063(int iParam0, int iParam1)//Position - 0x1498E2
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
	if (__LIB_7__::func_457(PLAYER::PLAYER_ID(), iParam0))
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
								if ((((!__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar7)) && !__LIB_1__::func_907(bVar7, 1)) && !__LIB_6__::func_279(bVar7)) && !__LIB_3__::func_728(bVar7, 14)) && !func_522(bVar7))
								{
									bVar0 = true;
								}
							}
						}
						if ((((((!bVar1 && __LIB_3__::func_234(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar7))) && !__LIB_1__::func_907(bVar7, 1)) && !__LIB_6__::func_279(bVar7)) && !__LIB_3__::func_728(bVar7, 14)) && !func_522(bVar7))
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
						__LIB_31__::func_294(iParam0, -1);
					}
					bVar9 = __LIB_4__::func_636(PLAYER::PLAYER_ID());
					if (__LIB_3__::func_661(0, iParam1))
					{
						__LIB_31__::func_294(iParam0, -1);
					}
					else if (__LIB_3__::func_661(1, iParam1))
					{
						if (bVar1)
						{
							__LIB_12__::func_449(1);
							__LIB_7__::func_656(PLAYER::PLAYER_ID(), iParam0, Var6, 1, 0, 0, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_4064(iParam0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_12__::func_449(1);
							__LIB_7__::func_656(PLAYER::PLAYER_ID(), iParam0, Var6, 0, 0, 1, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_4064(iParam0);
					}
					Jump @656; //curOff = 637
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_4064(int iParam0)//Position - 0x149B75
{
	__LIB_31__::func_294(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

int func_4074(var uParam0, var uParam1, var uParam2)//Position - 0x14A050
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
		if (__LIB_6__::func_760() != PLAYER::PLAYER_ID())
		{
			return 0;
		}
	}
	if (Global_262145.f_21612 /* Tunable: 311722703 */ && __LIB_0__::func_389(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	iVar0 = __LIB_6__::func_339();
	if ((!__LIB_0__::func_893() || __LIB_3__::func_558()) || HUD::IS_PAUSE_MENU_ACTIVE())
	{
		__LIB_6__::func_810(uParam1, 1);
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
			__LIB_6__::func_810(uParam1, 1);
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
					if (((((__LIB_5__::func_757(iVar0) && __LIB_4__::func_680(OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(iVar0, true), ENTITY::GET_ENTITY_HEADING(iVar0), 0f, -1f, 0f))) && !PED::GET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 373)) && func_4009(uParam1, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), iVar0, 1)) && !func_4098(*uParam0)) || ((__LIB_4__::func_661() && !func_4098(*uParam0)) && __LIB_1__::func_659(PLAYER::PLAYER_ID())))
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
							if (__LIB_0__::func_389(PLAYER::PLAYER_ID()) && !__LIB_7__::func_483(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
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
								__LIB_6__::func_810(uParam1, 0);
								if (!__LIB_4__::func_633(PLAYER::PLAYER_ID()) || __LIB_7__::func_682(uParam1, uParam0))
								{
									if (__LIB_31__::func_318(&(uParam1->f_22), PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
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
											__LIB_6__::func_494(1, 0);
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
								__LIB_6__::func_690(81, uParam1, 0, 0);
								__LIB_6__::func_410(PLAYER::PLAYER_ID(), 0, 0, 0);
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
						__LIB_6__::func_810(uParam1, 1);
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
					__LIB_6__::func_810(uParam1, 1);
				}
			}
			else
			{
				func_4075(*uParam0);
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
							__LIB_6__::func_410(PLAYER::PLAYER_ID(), 1, 0, 0);
							__LIB_4__::func_664(0);
							__LIB_4__::func_534(0);
							__LIB_4__::func_668(0);
							__LIB_0__::func_794(&(uParam1->f_22.f_101));
						}
					}
					if (__LIB_1__::func_693(Global_1946250.f_3630, 1, 1))
					{
					}
					if (!__LIB_3__::func_170(Global_1946250.f_3630) && __LIB_2__::func_730(Global_1946250.f_3630))
					{
						PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 1);
						__LIB_1__::func_33(0);
						__LIB_6__::func_69(Global_1946250.f_3630);
						MISC::SET_BIT(&(Global_1946250.f_506), 1);
						Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 = PLAYER::INT_TO_PLAYERINDEX(Global_1946250.f_3280);
						__LIB_4__::func_561(1);
						__LIB_5__::func_435(1, 81);
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, true);
						Global_1853185 = PLAYER::INT_TO_PLAYERINDEX(Global_1946250.f_3280);
						__LIB_0__::func_794(&(uParam1->f_22.f_101));
					}
					if (__LIB_3__::func_170(Global_1946250.f_3630) || __LIB_2__::func_730(Global_1946250.f_3630))
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
							__LIB_6__::func_410(PLAYER::PLAYER_ID(), 1, 0, 0);
							__LIB_4__::func_664(0);
							__LIB_4__::func_534(0);
							__LIB_4__::func_668(0);
							MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1), 7);
							__LIB_0__::func_794(&(uParam1->f_22.f_101));
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
			__LIB_6__::func_810(uParam1, 1);
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

void func_4075(int iParam0)//Position - 0x14AA70
{
	int iVar0;
	int iVar1;
	bool bVar2;
	if (__LIB_4__::func_535(PLAYER::PLAYER_ID()))
	{
		if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !__LIB_5__::func_195(PLAYER::PLAYER_ID()))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if (__LIB_0__::func_695(iVar0))
				{
					iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false);
					if (!PED::IS_PED_INJURED(iVar1))
					{
						if (PED::IS_PED_A_PLAYER(iVar1))
						{
							bVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
							if (bVar2 != PLAYER::PLAYER_ID() && __LIB_1__::func_693(bVar2, 1, 1))
							{
								if (BitTest(Global_2689235[bVar2 /*453*/].f_318, 5) && __LIB_0__::func_172(__LIB_5__::func_196(bVar2)) == 5)
								{
									if (func_4017(iParam0))
									{
										if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 0)
										{
											TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
											__LIB_6__::func_410(PLAYER::PLAYER_ID(), 1, 0, 0);
										}
										if (BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1, 7))
										{
											if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_OUT())
											{
												CAM::DO_SCREEN_FADE_IN(500);
											}
											__LIB_6__::func_410(PLAYER::PLAYER_ID(), 1, 0, 0);
											__LIB_4__::func_664(0);
											__LIB_4__::func_534(0);
										}
									}
									else if (__LIB_5__::func_337())
									{
										if (CAM::IS_SCREEN_FADED_IN())
										{
											__LIB_6__::func_410(PLAYER::PLAYER_ID(), 0, 0, 0);
											CAM::DO_SCREEN_FADE_OUT(500);
											__LIB_4__::func_664(1);
										}
										if (CAM::IS_SCREEN_FADED_OUT())
										{
											if (!NETWORK::NETWORK_IS_IN_MP_CUTSCENE() && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
											{
												NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), true, false);
												NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), -1, false), true, false);
												NETWORK::SET_LOCAL_PLAYER_VISIBLE_IN_CUTSCENE(true, false);
												NETWORK::NETWORK_SET_IN_MP_CUTSCENE(true, false);
											}
											PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, true);
											__LIB_4__::func_668(1);
											__LIB_4__::func_664(0);
										}
									}
									else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
									{
										if (VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("halftrack")))
										{
											TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 16);
										}
										else
										{
											TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
										}
										if (__LIB_3__::func_950(PLAYER::PLAYER_ID()))
										{
											if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
											{
												NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false);
											}
											__LIB_4__::func_668(0);
										}
										if (BitTest(Global_1946250.f_1, 17))
										{
											MISC::CLEAR_BIT(&(Global_1946250.f_1), 17);
										}
										__LIB_4__::func_534(0);
									}
								}
							}
						}
					}
				}
			}
		}
	}
	else if (Global_2787905)
	{
		if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !__LIB_5__::func_195(PLAYER::PLAYER_ID()))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if (__LIB_0__::func_695(iVar0))
				{
					iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false);
					if (!PED::IS_PED_INJURED(iVar1))
					{
						if (PED::IS_PED_A_PLAYER(iVar1))
						{
							bVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
							if (bVar2 != PLAYER::PLAYER_ID() && __LIB_1__::func_693(bVar2, 1, 1))
							{
								if (BitTest(Global_2689235[bVar2 /*453*/].f_318, 5) && __LIB_0__::func_172(__LIB_5__::func_196(bVar2)) == 5)
								{
									if ((((func_4017(iParam0) || !__LIB_5__::func_337()) || !__LIB_0__::func_893()) || PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED()) || NETWORK::IS_COMMERCE_STORE_OPEN())
									{
										if (__LIB_3__::func_950(PLAYER::PLAYER_ID()))
										{
											if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
											{
												NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false);
											}
										}
										__LIB_4__::func_664(0);
										__LIB_4__::func_534(0);
										__LIB_4__::func_668(0);
										if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 0)
										{
											TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
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

int func_4098(int iParam0)//Position - 0x14C084
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	if (!__LIB_6__::func_824(1))
	{
		return 1;
	}
	bVar0 = false;
	iVar1 = __LIB_6__::func_339();
	iVar2 = __LIB_3__::func_250(iVar1, 1, 0);
	if (__LIB_15__::func_667(bVar0, 7))
	{
		return 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (ENTITY::IS_ENTITY_DEAD(iVar1, false) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318, 19))
		{
			return 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (!VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iVar1) && !__LIB_5__::func_808(PLAYER::PLAYER_ID(), 81))
		{
			if (!BitTest(Global_1946250.f_1, 3) && __LIB_5__::func_812(iVar2))
			{
				MISC::SET_BIT(&(Global_1946250.f_1), 3);
			}
			return 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if ((!ENTITY::IS_ENTITY_VISIBLE(iVar1) && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318, 19)) && !__LIB_3__::func_950(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, false))
	{
		if ((ENTITY::GET_ENTITY_SPEED(iVar1) > 0.5f && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318, 19)) && !__LIB_3__::func_950(PLAYER::PLAYER_ID()))
		{
			__LIB_5__::func_498(0, iParam0, 0);
			return 1;
		}
	}
	if (__LIB_3__::func_695())
	{
		return 1;
	}
	if (__LIB_0__::func_983())
	{
		return 1;
	}
	if ((((BitTest(Global_1946250, 19) && ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID())) && !__LIB_3__::func_950(PLAYER::PLAYER_ID()))
	{
		if (!__LIB_1__::func_659(iVar2) && !__LIB_2__::func_754(PLAYER::PLAYER_ID()))
		{
			if (!BitTest(Global_1946250.f_1, 3) && __LIB_5__::func_812(iVar2))
			{
				MISC::SET_BIT(&(Global_1946250.f_1), 3);
			}
		}
		return 1;
	}
	if (__LIB_4__::func_306(iVar2) || __LIB_4__::func_305(iVar2))
	{
		return 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, false))
	{
		if (ENTITY::IS_ENTITY_IN_AIR(iVar1))
		{
			if (!BitTest(Global_1946250.f_1, 3) && __LIB_5__::func_812(iVar2))
			{
				MISC::SET_BIT(&(Global_1946250.f_1), 3);
			}
			return 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, false))
	{
		if (ENTITY::IS_ENTITY_IN_AIR(iVar1))
		{
			if (!BitTest(Global_1946250.f_1, 3) && __LIB_5__::func_812(iVar2))
			{
				MISC::SET_BIT(&(Global_1946250.f_1), 3);
			}
			return 1;
		}
	}
	if (__LIB_2__::func_72(PLAYER::PLAYER_ID(), 0))
	{
		if (PLAYER::PLAYER_ID() == __LIB_6__::func_760())
		{
			return 1;
		}
	}
	if (__LIB_4__::func_304(iVar2))
	{
		return 1;
	}
	__LIB_6__::func_689(iParam0, &Var3);
	if (__LIB_5__::func_359(iParam0, iVar1, Var3))
	{
		if (!BitTest(Global_1946250.f_1, 3) && __LIB_5__::func_812(iVar2))
		{
			MISC::SET_BIT(&(Global_1946250.f_1), 3);
		}
		return 1;
	}
	if (__LIB_5__::func_358(iParam0, iVar1, Var3))
	{
		if (!BitTest(Global_1946250.f_1, 3) && __LIB_5__::func_812(iVar2))
		{
			MISC::SET_BIT(&(Global_1946250.f_1), 3);
		}
		return 1;
	}
	if (__LIB_5__::func_654(iParam0, iVar1, Var3))
	{
		if (!BitTest(Global_1946250.f_1, 3) && __LIB_5__::func_812(iVar2))
		{
			MISC::SET_BIT(&(Global_1946250.f_1), 3);
		}
		return 1;
	}
	if (__LIB_12__::func_458(iParam0, iVar1, Var3))
	{
		if (!BitTest(Global_1946250.f_1, 3) && __LIB_5__::func_812(iVar2))
		{
			MISC::SET_BIT(&(Global_1946250.f_1), 3);
		}
		return 1;
	}
	if (__LIB_6__::func_497(iParam0, iVar1, Var3))
	{
		if (!BitTest(Global_1946250.f_1, 3) && __LIB_5__::func_812(iVar2))
		{
			MISC::SET_BIT(&(Global_1946250.f_1), 3);
		}
		return 1;
	}
	if (__LIB_4__::func_299(iParam0, iVar1, Var3))
	{
		if (!BitTest(Global_1946250.f_1, 3) && __LIB_5__::func_812(iVar2))
		{
			MISC::SET_BIT(&(Global_1946250.f_1), 3);
		}
		return 1;
	}
	if (__LIB_4__::func_298(iParam0, iVar1, Var3))
	{
		if (!BitTest(Global_1946250.f_1, 3) && __LIB_5__::func_812(iVar2))
		{
			MISC::SET_BIT(&(Global_1946250.f_1), 3);
		}
		return 1;
	}
	if (__LIB_4__::func_297(iParam0, iVar1, Var3))
	{
		if (!BitTest(Global_1946250.f_1, 3) && __LIB_5__::func_812(iVar2))
		{
			MISC::SET_BIT(&(Global_1946250.f_1), 3);
		}
		return 1;
	}
	if (__LIB_4__::func_682(iParam0, iVar1, Var3))
	{
		if (!BitTest(Global_1946250.f_1, 3) && __LIB_5__::func_812(iVar2))
		{
			MISC::SET_BIT(&(Global_1946250.f_1), 3);
		}
		return 1;
	}
	if (__LIB_4__::func_681(iParam0, iVar1, Var3))
	{
		if (!BitTest(Global_1946250.f_1, 3) && __LIB_5__::func_812(iVar2))
		{
			MISC::SET_BIT(&(Global_1946250.f_1), 3);
		}
		return 1;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (ENTITY::DOES_ENTITY_EXIST(__LIB_1__::func_640()))
		{
			__LIB_6__::func_689(iParam0, &Var4);
			if (__LIB_0__::func_724(__LIB_1__::func_640(), Var4, 1) < 1.5f)
			{
				return 1;
			}
		}
	}
	if (__LIB_1__::func_510(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (__LIB_5__::func_653())
	{
		return 1;
	}
	if (__LIB_4__::func_295(iVar2))
	{
		return 1;
	}
	if (iVar2 != __LIB_0__::func_162() && iVar2 != PLAYER::PLAYER_ID())
	{
		if (BitTest(Global_2689235[iVar2 /*453*/].f_318, 12))
		{
			return 1;
		}
	}
	if (iVar2 != __LIB_0__::func_162())
	{
		if (BitTest(Global_2689235[iVar2 /*453*/].f_318.f_1, 20))
		{
			return 1;
		}
		if (BitTest(Global_2689235[iVar2 /*453*/].f_318.f_1, 23))
		{
			return 1;
		}
	}
	if ((NETWORK::NETWORK_IS_IN_MP_CUTSCENE() && !BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318, 19)) && !__LIB_3__::func_950(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (__LIB_1__::func_17(PLAYER::PLAYER_ID()) || __LIB_2__::func_711(PLAYER::PLAYER_ID(), 1, 0))
	{
		return 1;
	}
	if (Global_2815059.f_310 && !__LIB_2__::func_754(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (__LIB_3__::func_965())
	{
		return 1;
	}
	__LIB_6__::func_689(iParam0, &Var5);
	if (((ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, false)) && !__LIB_1__::func_659(iVar2)) && !__LIB_3__::func_950(PLAYER::PLAYER_ID()))
	{
		Var6 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar1, 0f, -8.1f, 0f) };
		if (MISC::ABSF((Var6.f_2 - Var5.f_2)) > 4f)
		{
			if (__LIB_5__::func_812(iVar2))
			{
				MISC::SET_BIT(&(Global_1946250.f_1), 3);
			}
			return 1;
		}
	}
	if (__LIB_4__::func_294(Var5))
	{
		if (!BitTest(Global_1946250.f_1, 3) && __LIB_5__::func_812(iVar2))
		{
			MISC::SET_BIT(&(Global_1946250.f_1), 3);
		}
		return 1;
	}
	if (__LIB_5__::func_811())
	{
		if (!BitTest(Global_1946250.f_1, 3) && __LIB_5__::func_812(iVar2))
		{
			MISC::SET_BIT(&(Global_1946250.f_1), 3);
		}
		return 1;
	}
	if (__LIB_1__::func_844(iVar2))
	{
		return 1;
	}
	if (Global_2787784)
	{
		return 1;
	}
	if (BitTest(Global_1946250.f_4523, 3))
	{
		return 1;
	}
	if (BitTest(Global_1946250.f_9, 5))
	{
		return 1;
	}
	if ((Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_95 == 8 && __LIB_1__::func_736()) && !__LIB_0__::func_626())
	{
		return 1;
	}
	if (__LIB_1__::func_583(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (__LIB_3__::func_728(PLAYER::PLAYER_ID(), 14))
	{
		return 1;
	}
	if (__LIB_7__::func_458(iVar1) && !__LIB_3__::func_950(PLAYER::PLAYER_ID()))
	{
		if ((!__LIB_1__::func_659(iVar2) && !__LIB_2__::func_754(PLAYER::PLAYER_ID())) && __LIB_5__::func_812(iVar2))
		{
			if (!BitTest(Global_1946250.f_1, 3))
			{
				MISC::SET_BIT(&(Global_1946250.f_1), 3);
			}
		}
		return 1;
	}
	if (__LIB_3__::func_171(PLAYER::PLAYER_ID()))
	{
		if (__LIB_0__::func_172(__LIB_1__::func_935(PLAYER::PLAYER_ID())) != 5)
		{
		}
	}
	if (__LIB_2__::func_906())
	{
		return 1;
	}
	if (BitTest(Global_1946250.f_1, 3))
	{
		MISC::CLEAR_BIT(&(Global_1946250.f_1), 3);
	}
	return 0;
}

void func_4135(var uParam0, int iParam1)//Position - 0x14DE89
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1403663/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1403547/*__LIB_4__::func_745*/;
			break;
		case 2:
			uParam0->f_31 = 1402317/*__LIB_7__::func_67*/;
			break;
		case 3:
			uParam0->f_34 = 1402247/*__LIB_4__::func_744*/;
			break;
		case 4:
			uParam0->f_12 = 1402074/*__LIB_4__::func_743*/;
			break;
		case 6:
			uParam0->f_32 = 1401950/*__LIB_4__::func_742*/;
			break;
		case 106:
			uParam0->f_52 = 1401727/*__LIB_6__::func_399*/;
			break;
		case 111:
			uParam0->f_35 = 1401713/*__LIB_5__::func_924*/;
			break;
		case 79:
			*uParam0 = 1401689/*__LIB_5__::func_265*/;
			break;
		case 37:
			uParam0->f_18 = 1401569/*__LIB_4__::func_741*/;
			break;
		case 38:
			uParam0->f_9 = 1401331/*__LIB_6__::func_398*/;
			break;
		case 11:
			uParam0->f_11 = 1401322/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 1399618/*__LIB_5__::func_663*/;
			break;
		case 14:
			uParam0->f_11 = 1399609/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 1399601/*__LIB_0__::func_467*/;
			break;
		case 15:
			uParam0->f_2 = 1399095/*__LIB_31__::func_26*/;
			break;
		case 13:
			uParam0->f_2 = 1399056/*__LIB_5__::func_370*/;
			break;
		case 44:
			*uParam0 = 1399047/*__LIB_0__::func_114*/;
			break;
		case 75:
			uParam0->f_4 = 1399038/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1398570/*__LIB_8__::func_40*/;
			break;
		case 108:
			uParam0->f_55 = 1396531/*__LIB_8__::func_39*/;
			break;
		case 17:
			uParam0->f_17 = 1394395/*__LIB_11__::func_328*/;
			break;
		case 19:
			uParam0->f_17 = 1394368/*__LIB_6__::func_10*/;
			break;
		case 20:
			uParam0->f_3 = 1394284/*__LIB_5__::func_919*/;
			break;
		case 21:
			uParam0->f_3 = 1394184/*__LIB_6__::func_693*/;
			break;
		case 74:
			uParam0->f_53 = 1394017/*__LIB_6__::func_112*/;
			break;
		case 22:
			uParam0->f_24 = 1393914/*__LIB_6__::func_692*/;
			break;
		case 25:
			uParam0->f_23 = 1393262/*func_4257*/;
			break;
		case 30:
			uParam0->f_8 = 1392762/*__LIB_7__::func_599*/;
			break;
		case 31:
			uParam0->f_39 = 1392466/*__LIB_6__::func_771*/;
			break;
		case 33:
			uParam0->f_40 = 1391468/*__LIB_10__::func_990*/;
			break;
		case 32:
			*uParam0 = 1391364/*__LIB_5__::func_814*/;
			break;
		case 34:
			uParam0->f_41 = 1389219/*__LIB_5__::func_367*/;
			break;
		case 35:
			uParam0->f_42 = 1301935/*__LIB_5__::func_649*/;
			break;
		case 36:
			uParam0->f_58 = 1389159/*__LIB_5__::func_366*/;
			break;
		case 45:
			uParam0->f_14 = 1389150/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 1389141/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 1388875/*__LIB_5__::func_813*/;
			break;
		case 77:
			uParam0->f_13 = 1388864/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1388724/*__LIB_4__::func_731*/;
			break;
		case 49:
			uParam0->f_8 = 1388683/*__LIB_4__::func_550*/;
			break;
		case 50:
			*uParam0 = 1388486/*__LIB_6__::func_9*/;
			break;
		case 51:
			*uParam0 = 1388402/*__LIB_34__::func_127*/;
			break;
		case 52:
			uParam0->f_15 = 1388391/*__LIB_4__::func_730*/;
			break;
		case 53:
			uParam0->f_13 = 1388109/*__LIB_4__::func_729*/;
			break;
		case 54:
			uParam0->f_45 = 1388101/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 1388092/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1388031/*__LIB_6__::func_8*/;
			break;
		case 58:
			uParam0->f_13 = 1387749/*__LIB_4__::func_729*/;
			break;
		case 64:
			uParam0->f_47 = 1385834/*__LIB_31__::func_44*/;
			break;
		case 65:
			uParam0->f_21 = 1385791/*__LIB_5__::func_916*/;
			break;
		case 66:
			uParam0->f_21 = 1385088/*__LIB_6__::func_7*/;
			break;
		case 67:
			uParam0->f_21 = 1384004/*__LIB_5__::func_915*/;
			break;
		case 68:
			*uParam0 = 1383413/*__LIB_7__::func_460*/;
			break;
		case 69:
			*uParam0 = 1383404/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 1383392/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1383383/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1383371/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1380697/*__LIB_31__::func_295*/;
			break;
		case 84:
			uParam0->f_1 = 1378851/*func_4180*/;
			break;
		case 85:
			uParam0->f_1 = 1376517/*__LIB_6__::func_813*/;
			break;
		case 87:
			uParam0->f_1 = 1372287/*__LIB_7__::func_551*/;
			break;
		case 88:
			uParam0->f_1 = 1372278/*__LIB_0__::func_109*/;
			break;
		case 90:
			uParam0->f_1 = 1372235/*__LIB_5__::func_363*/;
			break;
		case 91:
			uParam0->f_1 = 1371934/*__LIB_5__::func_656*/;
			break;
		case 92:
			uParam0->f_1 = 1371171/*func_4147*/;
			break;
		case 94:
			uParam0->f_1 = 1369671/*__LIB_5__::func_362*/;
			break;
		case 102:
			uParam0->f_1 = 1369101/*__LIB_6__::func_6*/;
			break;
		case 103:
			uParam0->f_22 = 1369093/*__LIB_0__::func_467*/;
			break;
		case 104:
			uParam0->f_1 = 1369018/*__LIB_4__::func_689*/;
			break;
		case 78:
			uParam0->f_59 = 1368944/*__LIB_7__::func_643*/;
			break;
		case 125:
			uParam0->f_19 = 1368920/*__LIB_4__::func_688*/;
			break;
	}
}

int func_4147(var uParam0, var uParam1)//Position - 0x14EC23
{
	__LIB_6__::func_27(&(Global_1946250.f_4073), 7500, "TruckTunel1", 919.1599f, -3242.047f, -97.191f, -4.6979f, 0.1417f, -118.0924f, 36.2643f, 920.1234f, -3242.478f, -97.1018f, 7.9062f, 0.1417f, -113.0609f, 36.2643f, 1f, 50, 0, 0, 0, 0);
	__LIB_6__::func_27(&(Global_1946250.f_4073), 6000, "TruckPark", 826.3912f, -3231.1902f, -98.5252f, 1.494f, -0.1848f, -114.9899f, 38.3697f, 826.9343f, -3231.013f, -97.8158f, -0.7301f, -0.1848f, -118.0463f, 38.3697f, 1f, 0, 0, 0, 0, 0);
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_248))
	{
		func_297(&(uParam1->f_248), &(uParam1->f_109), 14);
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

int func_4180(int iParam0, var uParam1)//Position - 0x150A23
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
				func_1377(&(uParam1->f_140[0]), PLAYER::PLAYER_ID(), 1, 0);
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
								func_297(&iVar2, &(uParam1->f_109), 14);
								func_214(&(uParam1->f_248), &(uParam1->f_109.f_12), &(uParam1->f_140), 0, 0, 0, 0, 0, 1);
							}
						}
						else
						{
							func_297(&(uParam1->f_248), &(uParam1->f_109), 10);
						}
					}
					else
					{
						func_297(&(uParam1->f_248), &(uParam1->f_109), 10);
					}
				}
				else
				{
					func_297(&(uParam1->f_248), &(uParam1->f_109), 14);
					if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_249))
					{
						if (ENTITY::GET_ENTITY_MODEL(uParam1->f_249) == joaat("trailersmall2"))
						{
							func_214(&(uParam1->f_249), &(uParam1->f_109.f_12), &(uParam1->f_140), 0, 0, 0, 0, 0, 1);
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
				func_1377(&(uParam1->f_109.f_1[0]), PLAYER::PLAYER_ID(), 1, 0);
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

void func_4257(int iParam0, int iParam1)//Position - 0x15426E
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
								if (((((!__LIB_1__::func_907(bVar7, 1) && !__LIB_6__::func_279(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar5[iVar2], true)) && !__LIB_1__::func_101(PLAYER::PLAYER_PED_ID())) && !__LIB_3__::func_728(bVar7, 14)) && !func_522(bVar7))
								{
									bVar0 = true;
								}
							}
						}
						if ((((((!bVar1 && __LIB_3__::func_234(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_6__::func_279(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar5[iVar2], true)) && !__LIB_1__::func_101(PLAYER::PLAYER_PED_ID())) && !__LIB_3__::func_728(bVar7, 14)) && !func_522(bVar7))
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
						__LIB_10__::func_990(iParam0, -1);
					}
					if (__LIB_3__::func_661(0, iParam1))
					{
						__LIB_10__::func_990(iParam0, -1);
					}
					else if (__LIB_3__::func_661(1, iParam1))
					{
						if (bVar1)
						{
							__LIB_7__::func_656(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 1, 0, 0, 0, -1, -1, -1);
						}
						func_4258(iParam0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_7__::func_656(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 0, 0, 1, 0, -1, -1, -1);
						}
						func_4258(iParam0);
					}
					Jump @603; //curOff = 584
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_4258(int iParam0)//Position - 0x1544CC
{
	__LIB_10__::func_990(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_4309(var uParam0, int iParam1)//Position - 0x156B18
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1445671/*__LIB_5__::func_926*/;
			break;
		case 1:
			uParam0->f_30 = 1443352/*__LIB_6__::func_11*/;
			break;
		case 2:
			uParam0->f_31 = 1443289/*__LIB_5__::func_669*/;
			break;
		case 3:
			uParam0->f_34 = 1443233/*__LIB_4__::func_758*/;
			break;
		case 4:
			uParam0->f_12 = 1442517/*__LIB_4__::func_757*/;
			break;
		case 6:
			uParam0->f_32 = 1442509/*__LIB_0__::func_467*/;
			break;
		case 111:
			uParam0->f_35 = 1442500/*__LIB_0__::func_162*/;
			break;
		case 79:
			*uParam0 = 1442476/*__LIB_5__::func_265*/;
			break;
		case 11:
			uParam0->f_11 = 1442467/*__LIB_0__::func_109*/;
			break;
		case 12:
			uParam0->f_33 = 1440637/*__LIB_5__::func_668*/;
			break;
		case 14:
			uParam0->f_11 = 1440628/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 1440620/*__LIB_0__::func_467*/;
			break;
		case 13:
			uParam0->f_2 = 1440611/*__LIB_0__::func_109*/;
			break;
		case 15:
			uParam0->f_2 = 1440602/*__LIB_0__::func_109*/;
			break;
		case 75:
			uParam0->f_4 = 1440593/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1440584/*__LIB_0__::func_114*/;
			break;
		case 108:
			uParam0->f_55 = 1440575/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 1440549/*__LIB_5__::func_322*/;
			break;
		case 19:
			uParam0->f_17 = 1440537/*__LIB_3__::func_860*/;
			break;
		case 20:
			uParam0->f_3 = 1440528/*__LIB_0__::func_114*/;
			break;
		case 21:
			uParam0->f_3 = 1440519/*__LIB_0__::func_114*/;
			break;
		case 74:
			uParam0->f_53 = 1440510/*__LIB_0__::func_114*/;
			break;
		case 22:
			uParam0->f_24 = 1440502/*__LIB_0__::func_467*/;
			break;
		case 25:
			uParam0->f_23 = 1440494/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 1439333/*__LIB_5__::func_667*/;
			break;
		case 31:
			uParam0->f_39 = 1439321/*__LIB_3__::func_860*/;
			break;
		case 33:
			uParam0->f_40 = 1439293/*__LIB_4__::func_755*/;
			break;
		case 34:
			uParam0->f_41 = 1439284/*__LIB_0__::func_114*/;
			break;
		case 36:
			uParam0->f_58 = 1439239/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 1405556/*__LIB_5__::func_666*/;
			break;
		case 45:
			uParam0->f_14 = 1405547/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 1405538/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 1405530/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1405519/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1405511/*__LIB_0__::func_467*/;
			break;
		case 49:
			uParam0->f_8 = 1405502/*__LIB_0__::func_114*/;
			break;
		case 50:
			*uParam0 = 1405182/*__LIB_6__::func_402*/;
			break;
		case 51:
			*uParam0 = 1405153/*__LIB_4__::func_751*/;
			break;
		case 52:
			uParam0->f_15 = 1405122/*__LIB_4__::func_750*/;
			break;
		case 53:
			uParam0->f_13 = 1405088/*__LIB_5__::func_373*/;
			break;
		case 54:
			uParam0->f_45 = 1405044/*__LIB_4__::func_749*/;
			break;
		case 56:
			uParam0->f_46 = 1405015/*__LIB_4__::func_748*/;
			break;
		case 57:
			uParam0->f_11 = 1405006/*__LIB_0__::func_114*/;
			break;
		case 58:
			uParam0->f_13 = 1404949/*__LIB_5__::func_373*/;
			break;
		case 64:
			uParam0->f_47 = 1404941/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 1404933/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 1404925/*__LIB_0__::func_467*/;
			break;
		case 67:
			uParam0->f_21 = 1404917/*__LIB_0__::func_467*/;
			break;
		case 68:
			*uParam0 = 1404891/*__LIB_4__::func_746*/;
			break;
		case 69:
			*uParam0 = 1404865/*__LIB_4__::func_746*/;
			break;
		case 70:
			uParam0->f_48 = 1404853/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1404844/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1404832/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1404823/*__LIB_0__::func_114*/;
			break;
		case 78:
			uParam0->f_59 = 1404815/*__LIB_0__::func_467*/;
			break;
		case 126:
			*uParam0 = 1404632/*__LIB_6__::func_815*/;
			break;
	}
}

void func_4387(var uParam0, int iParam1)//Position - 0x161418
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1489534/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1489224/*__LIB_4__::func_786*/;
			break;
		case 2:
			uParam0->f_31 = 1484289/*__LIB_5__::func_674*/;
			break;
		case 3:
			uParam0->f_34 = 1484260/*__LIB_4__::func_780*/;
			break;
		case 4:
			uParam0->f_12 = 1484066/*__LIB_4__::func_779*/;
			break;
		case 6:
			uParam0->f_32 = 1483716/*__LIB_4__::func_778*/;
			break;
		case 111:
			uParam0->f_35 = 1483574/*__LIB_5__::func_929*/;
			break;
		case 79:
			*uParam0 = 1483550/*__LIB_5__::func_265*/;
			break;
		case 37:
			uParam0->f_18 = 1483012/*__LIB_5__::func_673*/;
			break;
		case 38:
			uParam0->f_9 = 1482907/*__LIB_7__::func_462*/;
			break;
		case 11:
			uParam0->f_11 = 1482898/*__LIB_0__::func_109*/;
			break;
		case 12:
			uParam0->f_33 = 1482793/*__LIB_5__::func_672*/;
			break;
		case 14:
			uParam0->f_11 = 1482784/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 1482776/*__LIB_0__::func_467*/;
			break;
		case 13:
			uParam0->f_2 = 1482767/*__LIB_0__::func_114*/;
			break;
		case 44:
			*uParam0 = 1482758/*__LIB_0__::func_114*/;
			break;
		case 15:
			uParam0->f_2 = 1482469/*__LIB_31__::func_27*/;
			break;
		case 75:
			uParam0->f_4 = 1482460/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1482376/*__LIB_6__::func_775*/;
			break;
		case 108:
			uParam0->f_55 = 1482367/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 1481746/*__LIB_10__::func_544*/;
			break;
		case 19:
			uParam0->f_17 = 1481545/*__LIB_6__::func_12*/;
			break;
		case 20:
			uParam0->f_3 = 1481481/*__LIB_7__::func_352*/;
			break;
		case 21:
			uParam0->f_3 = 1481421/*__LIB_6__::func_773*/;
			break;
		case 74:
			uParam0->f_53 = 1481412/*__LIB_0__::func_109*/;
			break;
		case 22:
			uParam0->f_24 = 1481171/*__LIB_4__::func_777*/;
			break;
		case 25:
			uParam0->f_23 = 1480798/*func_4426*/;
			break;
		case 30:
			uParam0->f_8 = 1480660/*__LIB_7__::func_527*/;
			break;
		case 31:
			uParam0->f_39 = 1480218/*__LIB_7__::func_526*/;
			break;
		case 33:
			uParam0->f_40 = 1479553/*__LIB_6__::func_816*/;
			break;
		case 34:
			uParam0->f_41 = 1476975/*__LIB_4__::func_776*/;
			break;
		case 36:
			uParam0->f_58 = 1476930/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 1451087/*__LIB_4__::func_775*/;
			break;
		case 45:
			uParam0->f_14 = 1450859/*__LIB_4__::func_774*/;
			break;
		case 46:
			uParam0->f_14 = 1450683/*__LIB_4__::func_773*/;
			break;
		case 110:
			uParam0->f_57 = 1450675/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1450664/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1450422/*__LIB_4__::func_772*/;
			break;
		case 49:
			uParam0->f_8 = 1450390/*__LIB_4__::func_771*/;
			break;
		case 50:
			*uParam0 = 1450324/*__LIB_31__::func_275*/;
			break;
		case 51:
			*uParam0 = 1450300/*__LIB_7__::func_329*/;
			break;
		case 52:
			uParam0->f_15 = 1450117/*__LIB_4__::func_770*/;
			break;
		case 53:
			uParam0->f_13 = 1449522/*__LIB_5__::func_671*/;
			break;
		case 54:
			uParam0->f_45 = 1449285/*__LIB_4__::func_768*/;
			break;
		case 56:
			uParam0->f_46 = 1449276/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1449211/*__LIB_7__::func_461*/;
			break;
		case 58:
			uParam0->f_13 = 1448789/*__LIB_5__::func_375*/;
			break;
		case 64:
			uParam0->f_47 = 1448781/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 1448773/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 1448713/*__LIB_4__::func_767*/;
			break;
		case 67:
			uParam0->f_21 = 1448695/*__LIB_4__::func_766*/;
			break;
		case 68:
			*uParam0 = 1448686/*__LIB_0__::func_109*/;
			break;
		case 69:
			*uParam0 = 1448677/*__LIB_0__::func_109*/;
			break;
		case 70:
			uParam0->f_48 = 1448173/*__LIB_4__::func_765*/;
			break;
		case 71:
			uParam0->f_49 = 1448025/*__LIB_4__::func_764*/;
			break;
		case 107:
			uParam0->f_50 = 1447980/*__LIB_4__::func_763*/;
			break;
		case 80:
			uParam0->f_7 = 1447971/*__LIB_0__::func_114*/;
			break;
		case 78:
			uParam0->f_59 = 1447963/*__LIB_0__::func_467*/;
			break;
		case 125:
			uParam0->f_19 = 1447947/*__LIB_4__::func_516*/;
			break;
	}
}

void func_4426(int iParam0, int iParam1)//Position - 0x16985E
{
	struct<3> Var0;
	struct<3> Var1;
	bool bVar2;
	int iVar3;
	int iVar4;
	if (__LIB_6__::func_71(PLAYER::PLAYER_ID()) && __LIB_7__::func_352(PLAYER::PLAYER_ID(), iParam0))
	{
		__LIB_4__::func_769(iParam0, &Var0);
		Var0.f_2 = 0f;
		iVar4 = 0;
		while (iVar4 < __LIB_5__::func_928())
		{
			bVar2 = __LIB_3__::func_594(PLAYER::PLAYER_ID(), iVar4);
			if (((((bVar2 != __LIB_0__::func_162() && bVar2 != PLAYER::PLAYER_ID()) && __LIB_1__::func_693(bVar2, 1, 1)) && !__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar2))) && !__LIB_3__::func_728(bVar2, 14)) && !func_522(bVar2))
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
				__LIB_7__::func_656(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 1, 0, 0, 0, -1, -1, -1);
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

void func_4464(var uParam0, int iParam1)//Position - 0x16BA87
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1524583/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1524473/*__LIB_4__::func_833*/;
			break;
		case 2:
			uParam0->f_31 = 1522016/*__LIB_5__::func_686*/;
			break;
		case 3:
			uParam0->f_34 = 1521987/*__LIB_4__::func_780*/;
			break;
		case 4:
			uParam0->f_12 = 1521827/*__LIB_4__::func_828*/;
			break;
		case 6:
			uParam0->f_32 = 1521709/*__LIB_4__::func_827*/;
			break;
		case 111:
			uParam0->f_35 = 1521492/*__LIB_6__::func_20*/;
			break;
		case 79:
			*uParam0 = 1521468/*__LIB_5__::func_265*/;
			break;
		case 37:
			uParam0->f_18 = 1521348/*__LIB_4__::func_826*/;
			break;
		case 38:
			uParam0->f_9 = 1521197/*__LIB_6__::func_404*/;
			break;
		case 11:
			uParam0->f_11 = 1521188/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 1520185/*__LIB_5__::func_684*/;
			break;
		case 14:
			uParam0->f_11 = 1520176/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 1520168/*__LIB_0__::func_467*/;
			break;
		case 13:
			uParam0->f_2 = 1520159/*__LIB_0__::func_114*/;
			break;
		case 15:
			uParam0->f_2 = 1520005/*__LIB_31__::func_28*/;
			break;
		case 75:
			uParam0->f_4 = 1519996/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1519908/*__LIB_6__::func_778*/;
			break;
		case 108:
			uParam0->f_55 = 1519121/*__LIB_6__::func_430*/;
			break;
		case 17:
			uParam0->f_17 = 1518492/*__LIB_6__::func_818*/;
			break;
		case 19:
			uParam0->f_17 = 1518465/*__LIB_6__::func_18*/;
			break;
		case 20:
			uParam0->f_3 = 1518426/*__LIB_5__::func_820*/;
			break;
		case 21:
			uParam0->f_3 = 1518366/*__LIB_5__::func_933*/;
			break;
		case 74:
			uParam0->f_53 = 1518357/*__LIB_0__::func_109*/;
			break;
		case 22:
			uParam0->f_24 = 1518304/*__LIB_5__::func_682*/;
			break;
		case 25:
			uParam0->f_23 = 1518000/*func_4553*/;
			break;
		case 30:
			uParam0->f_8 = 1517877/*__LIB_7__::func_530*/;
			break;
		case 31:
			uParam0->f_39 = 1517656/*__LIB_6__::func_777*/;
			break;
		case 33:
			uParam0->f_40 = 1517371/*__LIB_5__::func_932*/;
			break;
		case 34:
			uParam0->f_41 = 1516965/*__LIB_4__::func_822*/;
			break;
		case 36:
			uParam0->f_58 = 1516920/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 1499390/*__LIB_4__::func_821*/;
			break;
		case 45:
			uParam0->f_14 = 1499381/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 1499297/*__LIB_4__::func_820*/;
			break;
		case 110:
			uParam0->f_57 = 1499289/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1499266/*__LIB_4__::func_819*/;
			break;
		case 47:
			uParam0->f_43 = 1499214/*__LIB_4__::func_818*/;
			break;
		case 49:
			uParam0->f_8 = 1499182/*__LIB_4__::func_771*/;
			break;
		case 50:
			*uParam0 = 1499004/*__LIB_7__::func_670*/;
			break;
		case 51:
			*uParam0 = 1498907/*__LIB_35__::func_466*/;
			break;
		case 52:
			uParam0->f_15 = 1498896/*__LIB_4__::func_817*/;
			break;
		case 53:
			uParam0->f_13 = 1498581/*__LIB_5__::func_681*/;
			break;
		case 54:
			uParam0->f_45 = 1497716/*__LIB_10__::func_706*/;
			break;
		case 56:
			uParam0->f_46 = 1497707/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1492900/*__LIB_12__::func_166*/;
			break;
		case 58:
			uParam0->f_13 = 1492886/*__LIB_6__::func_14*/;
			break;
		case 64:
			uParam0->f_47 = 1491378/*__LIB_7__::func_548*/;
			break;
		case 65:
			uParam0->f_21 = 1491370/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 1491319/*__LIB_4__::func_790*/;
			break;
		case 67:
			uParam0->f_21 = 1491291/*__LIB_4__::func_789*/;
			break;
		case 68:
			*uParam0 = 1491282/*__LIB_0__::func_109*/;
			break;
		case 69:
			*uParam0 = 1491273/*__LIB_0__::func_109*/;
			break;
		case 70:
			uParam0->f_48 = 1490989/*__LIB_4__::func_788*/;
			break;
		case 71:
			uParam0->f_49 = 1490891/*__LIB_4__::func_787*/;
			break;
		case 107:
			uParam0->f_50 = 1490879/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1490693/*__LIB_5__::func_930*/;
			break;
		case 78:
			uParam0->f_59 = 1490521/*__LIB_6__::func_13*/;
			break;
	}
}

void func_4553(int iParam0, int iParam1)//Position - 0x1729B0
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
			if (((((bVar2 != __LIB_0__::func_162() && bVar2 != PLAYER::PLAYER_ID()) && __LIB_1__::func_693(bVar2, 1, 1)) && !__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar2))) && !__LIB_3__::func_728(bVar2, 14)) && !func_522(bVar2))
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
				__LIB_7__::func_656(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 1, 0, 0, 0, -1, -1, -1);
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

void func_4597(var uParam0, int iParam1)//Position - 0x174370
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1552375/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1552229/*__LIB_5__::func_822*/;
			break;
		case 2:
			uParam0->f_31 = 1547041/*__LIB_6__::func_348*/;
			break;
		case 3:
			uParam0->f_34 = 1547012/*__LIB_4__::func_780*/;
			break;
		case 4:
			uParam0->f_12 = 1546601/*__LIB_5__::func_692*/;
			break;
		case 6:
			uParam0->f_32 = 1546431/*__LIB_5__::func_821*/;
			break;
		case 111:
			uParam0->f_35 = 1546036/*__LIB_5__::func_691*/;
			break;
		case 79:
			*uParam0 = 1546012/*__LIB_5__::func_265*/;
			break;
		case 11:
			uParam0->f_11 = 1546003/*__LIB_0__::func_109*/;
			break;
		case 12:
			uParam0->f_33 = 1545908/*__LIB_5__::func_690*/;
			break;
		case 14:
			uParam0->f_11 = 1545899/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 1545891/*__LIB_0__::func_467*/;
			break;
		case 13:
			uParam0->f_2 = 1545882/*__LIB_0__::func_114*/;
			break;
		case 15:
			uParam0->f_2 = 1545597/*__LIB_31__::func_29*/;
			break;
		case 75:
			uParam0->f_4 = 1545588/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1545500/*__LIB_6__::func_781*/;
			break;
		case 108:
			uParam0->f_55 = 1545491/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 1545237/*__LIB_7__::func_600*/;
			break;
		case 19:
			uParam0->f_17 = 1545210/*__LIB_6__::func_22*/;
			break;
		case 20:
			uParam0->f_3 = 1545201/*__LIB_0__::func_114*/;
			break;
		case 21:
			uParam0->f_3 = 1545192/*__LIB_0__::func_114*/;
			break;
		case 74:
			uParam0->f_53 = 1545183/*__LIB_0__::func_114*/;
			break;
		case 22:
			uParam0->f_24 = 1545175/*__LIB_0__::func_467*/;
			break;
		case 25:
			uParam0->f_23 = 1545167/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 1545044/*__LIB_7__::func_531*/;
			break;
		case 31:
			uParam0->f_39 = 1544797/*__LIB_7__::func_463*/;
			break;
		case 33:
			uParam0->f_40 = 1544541/*__LIB_6__::func_347*/;
			break;
		case 34:
			uParam0->f_41 = 1542388/*__LIB_5__::func_936*/;
			break;
		case 36:
			uParam0->f_58 = 1542343/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 1527894/*__LIB_4__::func_838*/;
			break;
		case 45:
			uParam0->f_14 = 1527885/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 1527876/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 1527868/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1527857/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1527805/*__LIB_4__::func_837*/;
			break;
		case 49:
			uParam0->f_8 = 1527773/*__LIB_4__::func_771*/;
			break;
		case 50:
			*uParam0 = 1527644/*__LIB_6__::func_780*/;
			break;
		case 51:
			*uParam0 = 1527620/*__LIB_7__::func_329*/;
			break;
		case 52:
			uParam0->f_15 = 1527609/*__LIB_4__::func_270*/;
			break;
		case 53:
			uParam0->f_13 = 1526958/*__LIB_5__::func_689*/;
			break;
		case 54:
			uParam0->f_45 = 1526322/*__LIB_7__::func_644*/;
			break;
		case 56:
			uParam0->f_46 = 1526313/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1526246/*__LIB_6__::func_779*/;
			break;
		case 58:
			uParam0->f_13 = 1526232/*__LIB_6__::func_21*/;
			break;
		case 64:
			uParam0->f_47 = 1525853/*__LIB_5__::func_387*/;
			break;
		case 65:
			uParam0->f_21 = 1525778/*__LIB_5__::func_687*/;
			break;
		case 66:
			uParam0->f_21 = 1525727/*__LIB_4__::func_835*/;
			break;
		case 67:
			uParam0->f_21 = 1525709/*__LIB_4__::func_766*/;
			break;
		case 68:
			*uParam0 = 1525700/*__LIB_0__::func_109*/;
			break;
		case 69:
			*uParam0 = 1525691/*__LIB_0__::func_109*/;
			break;
		case 70:
			uParam0->f_48 = 1525574/*__LIB_4__::func_834*/;
			break;
		case 71:
			uParam0->f_49 = 1525565/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1525553/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1525544/*__LIB_0__::func_114*/;
			break;
		case 78:
			uParam0->f_59 = 1525536/*__LIB_0__::func_467*/;
			break;
	}
}

void func_4670(var uParam0, int iParam1)//Position - 0x17B000
{
	switch (iParam1)
	{
		case 96:
			uParam0->f_1 = 1552842/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 1552833/*__LIB_0__::func_109*/;
			break;
		case 98:
			uParam0->f_1 = 1552824/*__LIB_0__::func_109*/;
			break;
		case 99:
			uParam0->f_1 = 1552664/*__LIB_5__::func_390*/;
			break;
		case 100:
			uParam0->f_22 = 1552656/*__LIB_0__::func_467*/;
			break;
		case 101:
			uParam0->f_22 = 1552501/*__LIB_12__::func_162*/;
			break;
	}
}

void func_4678(var uParam0, int iParam1)//Position - 0x17B1D3
{
	switch (iParam1)
	{
		case 90:
			uParam0->f_1 = 1553059/*__LIB_0__::func_114*/;
			break;
		case 91:
			uParam0->f_1 = 1553050/*__LIB_0__::func_109*/;
			break;
		case 92:
			uParam0->f_1 = 1553041/*__LIB_0__::func_109*/;
			break;
		case 93:
			uParam0->f_1 = 1552664/*__LIB_5__::func_390*/;
			break;
		case 94:
			uParam0->f_1 = 1553032/*__LIB_0__::func_109*/;
			break;
		case 95:
			uParam0->f_22 = 1552968/*__LIB_12__::func_162*/;
			break;
	}
}

void func_4684(var uParam0, int iParam1)//Position - 0x17B2AC
{
	switch (iParam1)
	{
		case 84:
			uParam0->f_1 = 1553286/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 1553277/*__LIB_0__::func_109*/;
			break;
		case 86:
			uParam0->f_1 = 1552664/*__LIB_5__::func_390*/;
			break;
		case 87:
			uParam0->f_1 = 1553268/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 1553168/*__LIB_12__::func_163*/;
			break;
	}
}

Vector3 func_4689(struct<3> Param0, int iParam1)//Position - 0x17B38F
{
	struct<3> Var0;
	float fVar1;
	var uVar2;
	func_40(iParam1, &uVar2, &Var0, &fVar1, 0);
	return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0, fVar1, Param0);
}

void func_4696(int iParam0)//Position - 0x17B52A
{
	Local_112.f_0 = iParam0;
}

int func_4697()//Position - 0x17B536
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	int iVar3;
	struct<3> Var4;
	struct<3> Var5;
	int iVar6;
	struct<3> Var7;
	struct<3> Var8;
	int iVar9;
	struct<3> Var10;
	struct<3> Var11;
	int iVar12;
	struct<3> Var13;
	struct<3> Var14;
	int iVar15;
	struct<3> Var16;
	struct<3> Var17;
	int iVar18;
	struct<3> Var19;
	struct<3> Var20;
	int iVar21;
	struct<3> Var22;
	struct<3> Var23;
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_13[0]))
	{
		STREAMING::REQUEST_MODEL(joaat("lux_prop_cigar_01_luxe"));
		if (!STREAMING::HAS_MODEL_LOADED(joaat("lux_prop_cigar_01_luxe")))
		{
			return 0;
		}
		STREAMING::REQUEST_ANIM_DICT(func_4700(0));
		if (!STREAMING::HAS_ANIM_DICT_LOADED(func_4700(0)))
		{
			return 0;
		}
		if (__LIB_2__::func_852(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 1) + 1, 0, 1))
		{
			if (!BitTest(Local_112.f_11, 0))
			{
				NETWORK::RESERVE_LOCAL_NETWORK_MISSION_OBJECTS(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 1) + 1);
				MISC::SET_BIT(&(Local_112.f_11), 0);
			}
			if (NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
			{
				Var1 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(func_4700(0), "base_cigar_a", func_4699(0), func_4698(0), 0f, 2) };
				Var2 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(func_4700(0), "base_cigar_a", func_4699(0), func_4698(0), 0f, 2) };
				iVar0 = OBJECT::CREATE_OBJECT(joaat("lux_prop_cigar_01_luxe"), Var1, true, true, false);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("lux_prop_cigar_01_luxe"));
				ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iVar0, false);
				NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(iVar0, true);
				ENTITY::SET_ENTITY_CAN_ONLY_BE_DAMAGED_BY_SCRIPT_PARTICIPANTS(iVar0, true);
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iVar0, Var1, false, false, true);
				ENTITY::SET_ENTITY_ROTATION(iVar0, Var2, 2, true);
				ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
				ENTITY::SET_ENTITY_COLLISION(iVar0, false, false);
				Local_112.f_13[0] = NETWORK::OBJ_TO_NET(iVar0);
				STREAMING::REMOVE_ANIM_DICT(func_4700(0));
			}
		}
		return 0;
	}
	else if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_13[1]))
	{
		STREAMING::REQUEST_MODEL(joaat("lux_prop_cigar_01_luxe"));
		if (!STREAMING::HAS_MODEL_LOADED(joaat("lux_prop_cigar_01_luxe")))
		{
			return 0;
		}
		STREAMING::REQUEST_ANIM_DICT(func_4700(1));
		if (!STREAMING::HAS_ANIM_DICT_LOADED(func_4700(1)))
		{
			return 0;
		}
		if (__LIB_2__::func_852(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 1) + 1, 0, 1))
		{
			if (!BitTest(Local_112.f_11, 1))
			{
				NETWORK::RESERVE_LOCAL_NETWORK_MISSION_OBJECTS(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 1) + 1);
				MISC::SET_BIT(&(Local_112.f_11), 1);
			}
			if (NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
			{
				Var4 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(func_4700(1), "base_cigar_b", func_4699(1), func_4698(1), 0f, 2) };
				Var5 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(func_4700(1), "base_cigar_b", func_4699(1), func_4698(1), 0f, 2) };
				iVar3 = OBJECT::CREATE_OBJECT(joaat("lux_prop_cigar_01_luxe"), Var4, true, true, false);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("lux_prop_cigar_01_luxe"));
				ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iVar3, false);
				NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(iVar3, true);
				ENTITY::SET_ENTITY_CAN_ONLY_BE_DAMAGED_BY_SCRIPT_PARTICIPANTS(iVar3, true);
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iVar3, Var4, false, false, true);
				ENTITY::SET_ENTITY_ROTATION(iVar3, Var5, 2, true);
				ENTITY::FREEZE_ENTITY_POSITION(iVar3, true);
				ENTITY::SET_ENTITY_COLLISION(iVar3, false, false);
				Local_112.f_13[1] = NETWORK::OBJ_TO_NET(iVar3);
				STREAMING::REMOVE_ANIM_DICT(func_4700(1));
			}
		}
		return 0;
	}
	else if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_13[2]))
	{
		STREAMING::REQUEST_MODEL(joaat("lux_prop_cigar_01_luxe"));
		if (!STREAMING::HAS_MODEL_LOADED(joaat("lux_prop_cigar_01_luxe")))
		{
			return 0;
		}
		STREAMING::REQUEST_ANIM_DICT(func_4700(2));
		if (!STREAMING::HAS_ANIM_DICT_LOADED(func_4700(2)))
		{
			return 0;
		}
		if (__LIB_2__::func_852(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 1) + 1, 0, 1))
		{
			if (!BitTest(Local_112.f_11, 2))
			{
				NETWORK::RESERVE_LOCAL_NETWORK_MISSION_OBJECTS(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 1) + 1);
				MISC::SET_BIT(&(Local_112.f_11), 2);
			}
			if (NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
			{
				Var7 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(func_4700(2), "base_cigar_c", func_4699(2), func_4698(2), 0f, 2) };
				Var8 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(func_4700(2), "base_cigar_c", func_4699(2), func_4698(2), 0f, 2) };
				iVar6 = OBJECT::CREATE_OBJECT(joaat("lux_prop_cigar_01_luxe"), Var7, true, true, false);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("lux_prop_cigar_01_luxe"));
				ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iVar6, false);
				NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(iVar6, true);
				ENTITY::SET_ENTITY_CAN_ONLY_BE_DAMAGED_BY_SCRIPT_PARTICIPANTS(iVar6, true);
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iVar6, Var7, false, false, true);
				ENTITY::SET_ENTITY_ROTATION(iVar6, Var8, 2, true);
				ENTITY::FREEZE_ENTITY_POSITION(iVar6, true);
				ENTITY::SET_ENTITY_COLLISION(iVar6, false, false);
				Local_112.f_13[2] = NETWORK::OBJ_TO_NET(iVar6);
				STREAMING::REMOVE_ANIM_DICT(func_4700(2));
			}
		}
		return 0;
	}
	else if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_13[3]))
	{
		STREAMING::REQUEST_MODEL(joaat("lux_prop_cigar_01_luxe"));
		if (!STREAMING::HAS_MODEL_LOADED(joaat("lux_prop_cigar_01_luxe")))
		{
			return 0;
		}
		STREAMING::REQUEST_ANIM_DICT(func_4700(3));
		if (!STREAMING::HAS_ANIM_DICT_LOADED(func_4700(3)))
		{
			return 0;
		}
		if (__LIB_2__::func_852(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 1) + 1, 0, 1))
		{
			if (!BitTest(Local_112.f_11, 3))
			{
				NETWORK::RESERVE_LOCAL_NETWORK_MISSION_OBJECTS(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 1) + 1);
				MISC::SET_BIT(&(Local_112.f_11), 3);
			}
			if (NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
			{
				Var10 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(func_4700(3), "base_cigar_d", func_4699(3), func_4698(3), 0f, 2) };
				Var11 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(func_4700(3), "base_cigar_d", func_4699(3), func_4698(3), 0f, 2) };
				iVar9 = OBJECT::CREATE_OBJECT(joaat("lux_prop_cigar_01_luxe"), Var10, true, true, false);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("lux_prop_cigar_01_luxe"));
				ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iVar9, false);
				NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(iVar9, true);
				ENTITY::SET_ENTITY_CAN_ONLY_BE_DAMAGED_BY_SCRIPT_PARTICIPANTS(iVar9, true);
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iVar9, Var10, false, false, true);
				ENTITY::SET_ENTITY_ROTATION(iVar9, Var11, 2, true);
				ENTITY::FREEZE_ENTITY_POSITION(iVar9, true);
				ENTITY::SET_ENTITY_COLLISION(iVar9, false, false);
				Local_112.f_13[3] = NETWORK::OBJ_TO_NET(iVar9);
				STREAMING::REMOVE_ANIM_DICT(func_4700(3));
			}
		}
		return 0;
	}
	else if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_13[4]))
	{
		STREAMING::REQUEST_MODEL(joaat("lux_prop_cigar_01_luxe"));
		if (!STREAMING::HAS_MODEL_LOADED(joaat("lux_prop_cigar_01_luxe")))
		{
			return 0;
		}
		STREAMING::REQUEST_ANIM_DICT(func_4700(8));
		if (!STREAMING::HAS_ANIM_DICT_LOADED(func_4700(8)))
		{
			return 0;
		}
		if (__LIB_2__::func_852(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 1) + 1, 0, 1))
		{
			if (!BitTest(Local_112.f_11, 4))
			{
				NETWORK::RESERVE_LOCAL_NETWORK_MISSION_OBJECTS(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 1) + 1);
				MISC::SET_BIT(&(Local_112.f_11), 4);
			}
			if (NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
			{
				Var13 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(func_4700(8), "base_cigar_a", func_4699(8), func_4698(8), 0f, 2) };
				Var14 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(func_4700(8), "base_cigar_a", func_4699(8), func_4698(8), 0f, 2) };
				iVar12 = OBJECT::CREATE_OBJECT(joaat("lux_prop_cigar_01_luxe"), Var13, true, true, false);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("lux_prop_cigar_01_luxe"));
				ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iVar12, false);
				NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(iVar12, true);
				ENTITY::SET_ENTITY_CAN_ONLY_BE_DAMAGED_BY_SCRIPT_PARTICIPANTS(iVar12, true);
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iVar12, Var13, false, false, true);
				ENTITY::SET_ENTITY_ROTATION(iVar12, Var14, 2, true);
				ENTITY::FREEZE_ENTITY_POSITION(iVar12, true);
				ENTITY::SET_ENTITY_COLLISION(iVar12, false, false);
				Local_112.f_13[4] = NETWORK::OBJ_TO_NET(iVar12);
				STREAMING::REMOVE_ANIM_DICT(func_4700(8));
			}
		}
		return 0;
	}
	else if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_13[5]))
	{
		STREAMING::REQUEST_MODEL(joaat("lux_prop_cigar_01_luxe"));
		if (!STREAMING::HAS_MODEL_LOADED(joaat("lux_prop_cigar_01_luxe")))
		{
			return 0;
		}
		STREAMING::REQUEST_ANIM_DICT(func_4700(9));
		if (!STREAMING::HAS_ANIM_DICT_LOADED(func_4700(9)))
		{
			return 0;
		}
		if (__LIB_2__::func_852(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 1) + 1, 0, 1))
		{
			if (!BitTest(Local_112.f_11, 5))
			{
				NETWORK::RESERVE_LOCAL_NETWORK_MISSION_OBJECTS(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 1) + 1);
				MISC::SET_BIT(&(Local_112.f_11), 5);
			}
			if (NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
			{
				Var16 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(func_4700(9), "base_cigar_b", func_4699(9), func_4698(9), 0f, 2) };
				Var17 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(func_4700(9), "base_cigar_b", func_4699(9), func_4698(9), 0f, 2) };
				iVar15 = OBJECT::CREATE_OBJECT(joaat("lux_prop_cigar_01_luxe"), Var16, true, true, false);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("lux_prop_cigar_01_luxe"));
				ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iVar15, false);
				NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(iVar15, true);
				ENTITY::SET_ENTITY_CAN_ONLY_BE_DAMAGED_BY_SCRIPT_PARTICIPANTS(iVar15, true);
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iVar15, Var16, false, false, true);
				ENTITY::SET_ENTITY_ROTATION(iVar15, Var17, 2, true);
				ENTITY::FREEZE_ENTITY_POSITION(iVar15, true);
				ENTITY::SET_ENTITY_COLLISION(iVar15, false, false);
				Local_112.f_13[5] = NETWORK::OBJ_TO_NET(iVar15);
				STREAMING::REMOVE_ANIM_DICT(func_4700(9));
			}
		}
		return 0;
	}
	else if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_13[6]))
	{
		STREAMING::REQUEST_MODEL(joaat("lux_prop_cigar_01_luxe"));
		if (!STREAMING::HAS_MODEL_LOADED(joaat("lux_prop_cigar_01_luxe")))
		{
			return 0;
		}
		STREAMING::REQUEST_ANIM_DICT(func_4700(10));
		if (!STREAMING::HAS_ANIM_DICT_LOADED(func_4700(10)))
		{
			return 0;
		}
		if (__LIB_2__::func_852(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 1) + 1, 0, 1))
		{
			if (!BitTest(Local_112.f_11, 6))
			{
				NETWORK::RESERVE_LOCAL_NETWORK_MISSION_OBJECTS(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 1) + 1);
				MISC::SET_BIT(&(Local_112.f_11), 6);
			}
			if (NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
			{
				Var19 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(func_4700(10), "base_cigar_c", func_4699(10), func_4698(10), 0f, 2) };
				Var20 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(func_4700(10), "base_cigar_c", func_4699(10), func_4698(10), 0f, 2) };
				iVar18 = OBJECT::CREATE_OBJECT(joaat("lux_prop_cigar_01_luxe"), Var19, true, true, false);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("lux_prop_cigar_01_luxe"));
				ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iVar18, false);
				NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(iVar18, true);
				ENTITY::SET_ENTITY_CAN_ONLY_BE_DAMAGED_BY_SCRIPT_PARTICIPANTS(iVar18, true);
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iVar18, Var19, false, false, true);
				ENTITY::SET_ENTITY_ROTATION(iVar18, Var20, 2, true);
				ENTITY::FREEZE_ENTITY_POSITION(iVar18, true);
				ENTITY::SET_ENTITY_COLLISION(iVar18, false, false);
				Local_112.f_13[6] = NETWORK::OBJ_TO_NET(iVar18);
				STREAMING::REMOVE_ANIM_DICT(func_4700(10));
			}
		}
		return 0;
	}
	else if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_13[7]))
	{
		STREAMING::REQUEST_MODEL(joaat("lux_prop_cigar_01_luxe"));
		if (!STREAMING::HAS_MODEL_LOADED(joaat("lux_prop_cigar_01_luxe")))
		{
			return 0;
		}
		STREAMING::REQUEST_ANIM_DICT(func_4700(11));
		if (!STREAMING::HAS_ANIM_DICT_LOADED(func_4700(11)))
		{
			return 0;
		}
		if (__LIB_2__::func_852(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 1) + 1, 0, 1))
		{
			if (!BitTest(Local_112.f_11, 7))
			{
				NETWORK::RESERVE_LOCAL_NETWORK_MISSION_OBJECTS(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 1) + 1);
				MISC::SET_BIT(&(Local_112.f_11), 7);
			}
			if (NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
			{
				Var22 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(func_4700(11), "base_cigar_d", func_4699(11), func_4698(11), 0f, 2) };
				Var23 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(func_4700(11), "base_cigar_d", func_4699(11), func_4698(11), 0f, 2) };
				iVar21 = OBJECT::CREATE_OBJECT(joaat("lux_prop_cigar_01_luxe"), Var22, true, true, false);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("lux_prop_cigar_01_luxe"));
				ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iVar21, false);
				NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(iVar21, true);
				ENTITY::SET_ENTITY_CAN_ONLY_BE_DAMAGED_BY_SCRIPT_PARTICIPANTS(iVar21, true);
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iVar21, Var22, false, false, true);
				ENTITY::SET_ENTITY_ROTATION(iVar21, Var23, 2, true);
				ENTITY::FREEZE_ENTITY_POSITION(iVar21, true);
				ENTITY::SET_ENTITY_COLLISION(iVar21, false, false);
				Local_112.f_13[7] = NETWORK::OBJ_TO_NET(iVar21);
				STREAMING::REMOVE_ANIM_DICT(func_4700(11));
			}
		}
		return 0;
	}
	return 1;
}

Vector3 func_4698(int iParam0)//Position - 0x17BEC0
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			return 0f, 0f, 30f;
		case 4:
		case 5:
		case 6:
		case 7:
			return 0f, 0f, 45f;
		case 8:
		case 9:
		case 10:
		case 11:
			return 0f, 0f, 45f;
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_4699(int iParam0)//Position - 0x17BF38
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			return 2805.0413f, -3933.2236f, 183.4118f;
		case 4:
		case 5:
		case 6:
		case 7:
			return 2805.804f, -3929.4336f, 183.4118f;
		case 8:
		case 9:
		case 10:
		case 11:
			return 2808.9634f, -3925.7136f, 183.4118f;
		default:
	}
	return 0f, 0f, 0f;
}

char* func_4700(int iParam0)//Position - 0x17BFC8
{
	switch (iParam0)
	{
		case 0:
		case 4:
		case 8:
			return "anim@arena@amb@seating@seat_a@";
		case 1:
		case 5:
		case 9:
			return "anim@arena@amb@seating@seat_b@";
		case 2:
		case 6:
		case 10:
			return "anim@arena@amb@seating@seat_c@";
		case 3:
		case 7:
		case 11:
			return "anim@arena@amb@seating@seat_d@";
		default:
	}
	return "";
}

int func_4701()//Position - 0x17C06C
{
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_22))
	{
		func_4704();
	}
	else if (!BitTest(Local_112.f_10, 0))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_112.f_22))
		{
			Local_114.f_11.f_9 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_4703(), __LIB_5__::func_823(), 2, false, true, 1f, 0f, 1f);
			NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_112.f_22), Local_114.f_11.f_9, "ANIM@AMB@NIGHTCLUB@MINI@DRINKING@CHAMPAGNE_DRINKING@BASE@", "Bartender_Idle", 1000f, -2f, 13, 16, 1000f, 0);
			NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_114.f_11.f_9);
			MISC::SET_BIT(&(Local_112.f_10), 0);
		}
		else if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_112.f_22))
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_112.f_22);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

Vector3 func_4703()//Position - 0x17C130
{
	return 2811.122f, -3929.759f, 184.67f;
}

void func_4704()//Position - 0x17C147
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var3;
	iVar0 = joaat("MP_F_BoatStaff_01");
	STREAMING::REQUEST_MODEL(iVar0);
	if (!STREAMING::HAS_MODEL_LOADED(iVar0))
	{
		return;
	}
	STREAMING::REQUEST_ANIM_DICT("anim@amb@nightclub@mini@drinking@bar@drink@idle_a");
	if (!STREAMING::HAS_ANIM_DICT_LOADED("anim@amb@nightclub@mini@drinking@bar@drink@idle_a"))
	{
		return;
	}
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_22))
	{
		if (__LIB_2__::func_99(NETWORK::GET_NUM_RESERVED_MISSION_PEDS(false, 1) + 1, 0, 1))
		{
			NETWORK::RESERVE_LOCAL_NETWORK_MISSION_PEDS(NETWORK::GET_NUM_RESERVED_MISSION_PEDS(false, 1) + 1);
			if (NETWORK::CAN_REGISTER_MISSION_PEDS(1))
			{
				Var2 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("anim@amb@nightclub@mini@drinking@bar@drink@idle_a", "idle_a_bartender", func_4703(), __LIB_5__::func_823(), 0.01f, 2) };
				Var3 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("anim@amb@nightclub@mini@drinking@bar@drink@idle_a", "idle_a_bartender", func_4703(), __LIB_5__::func_823(), 0.01f, 2) };
				iVar1 = PED::CREATE_PED(26, iVar0, Var2, Var3.f_2, true, true);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
				ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iVar1, false);
				PED::SET_PED_AS_ENEMY(iVar1, false);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar1, true);
				PED::SET_PED_RESET_FLAG(iVar1, 249, true);
				PED::SET_PED_CONFIG_FLAG(iVar1, 185, true);
				PED::SET_PED_CONFIG_FLAG(iVar1, 108, true);
				NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(iVar1, true);
				ENTITY::SET_ENTITY_CAN_ONLY_BE_DAMAGED_BY_SCRIPT_PARTICIPANTS(iVar1, true);
				PED::SET_PED_CAN_EVASIVE_DIVE(iVar1, false);
				PED::SET_TREAT_AS_AMBIENT_PED_FOR_DRIVER_LOCKON(iVar1, true);
				PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iVar1, false);
				PED::SET_PED_CONFIG_FLAG(iVar1, 208, true);
				func_4705(iVar1);
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iVar1, Var2, false, false, true);
				ENTITY::SET_ENTITY_HEADING(iVar1, Var3.f_2);
				Local_112.f_22 = NETWORK::PED_TO_NET(iVar1);
				STREAMING::REMOVE_ANIM_DICT("anim@amb@nightclub@mini@drinking@bar@drink@idle_a");
			}
		}
	}
}

void func_4705(int iParam0)//Position - 0x17C299
{
	PED::SET_PED_COMPONENT_VARIATION(iParam0, 0, 0, 1, 0);
	PED::SET_PED_COMPONENT_VARIATION(iParam0, 2, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iParam0, 3, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iParam0, 4, 0, 0, 0);
}

void func_4707()//Position - 0x17C2DD
{
	func_5547();
	func_5539();
	func_5534();
	if (__LIB_10__::func_10(0))
	{
		if (func_5532())
		{
			__LIB_10__::func_9(1);
		}
	}
	else if (__LIB_10__::func_10(1))
	{
		func_5527();
		func_5517();
		func_5480();
		func_5429();
		func_5427();
		func_5410();
		func_5252();
		func_4806();
		func_4794();
		func_4710();
		func_4708();
	}
}

void func_4708()//Position - 0x17C33C
{
	if (!__LIB_5__::func_824())
	{
		HUD::SET_ABILITY_BAR_VISIBILITY(false);
	}
}

void func_4710()//Position - 0x17C35F
{
	if ((__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 2805.0208f, -3925.739f, 183.4118f, true) < 4f) && Local_114.f_842.f_9 <= 1)
	{
		if (!BitTest(Local_114.f_38, 10))
		{
			if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT/SAFEHOUSE_TREVOR_DRINK_WHISKEY", false, -1))
			{
				MISC::SET_BIT(&(Local_114.f_38), 10);
			}
		}
	}
	else if (BitTest(Local_114.f_38, 10))
	{
		AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("SCRIPT/SAFEHOUSE_TREVOR_DRINK_WHISKEY");
		MISC::CLEAR_BIT(&(Local_114.f_38), 10);
	}
	func_4711(&(Local_114.f_853), &uLocal_224, &uLocal_289, Local_114.f_39, 0);
}

void func_4711(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)//Position - 0x17C402
{
	int iVar0;
	if (Global_262145.f_24375 /* Tunable: BB_NIGHTCLUB_DISABLE_NIGHTCLUB_SHOT_MINIGAME */)
	{
		return;
	}
	if (*uParam0 > 5)
	{
		__LIB_0__::func_646();
	}
	switch (*uParam0)
	{
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 13:
		case 12:
			CAM::INVALIDATE_IDLE_CAM();
			HUD::HUD_FORCE_WEAPON_WHEEL(false);
			HUD::DISPLAY_AMMO_THIS_FRAME(false);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(19);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
			HUD::HUD_SUPPRESS_WEAPON_WHEEL_RESULTS_THIS_FRAME();
			__LIB_0__::func_187();
			__LIB_1__::func_33(0);
			__LIB_3__::func_570(1);
			__LIB_0__::func_189();
			if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, true) && iVar0 != joaat("WEAPON_UNARMED"))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
			}
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
			if (*uParam0 != 11 && *uParam0 != 12)
			{
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 30 /*INPUT_MOVE_LR*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 31 /*INPUT_MOVE_UD*/, true);
			}
			__LIB_31__::func_454(uParam0, uParam2, iParam4);
			PED::SET_PED_CAN_HEAD_IK(PLAYER::PLAYER_PED_ID(), false);
			MISC::SET_BIT(&(uParam0->f_4), 7);
			if (!BitTest(uParam0->f_4, 6) || !__LIB_3__::func_241())
			{
				__LIB_1__::func_92();
				MISC::SET_BIT(&(uParam0->f_4), 6);
			}
			if (!BitTest(uParam0->f_4, 8))
			{
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 185, true);
				MISC::SET_BIT(&(uParam0->f_4), 8);
			}
			break;
		default:
			if (BitTest(uParam0->f_4, 7))
			{
				PED::SET_PED_CAN_HEAD_IK(PLAYER::PLAYER_PED_ID(), true);
				MISC::CLEAR_BIT(&(uParam0->f_4), 7);
			}
			if (BitTest(uParam0->f_4, 6))
			{
				__LIB_1__::func_91();
				MISC::CLEAR_BIT(&(uParam0->f_4), 6);
			}
			if (BitTest(uParam0->f_4, 8))
			{
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 185, false);
				MISC::CLEAR_BIT(&(uParam0->f_4), 8);
			}
			break;
	}
	switch (*uParam0)
	{
		case 9:
		case 10:
			__LIB_10__::func_589(uParam0->f_1, uParam2);
			break;
	}
	if ((__LIB_10__::func_634() && __LIB_3__::func_280(PLAYER::PLAYER_ID())) && CAM::IS_SCREEN_FADED_OUT())
	{
		if (*uParam0 > 3 && *uParam0 < 14)
		{
			func_4781(uParam2, uParam0, uParam1, 0, iParam4);
			return;
		}
	}
	if (((__LIB_10__::func_634() && uParam2->f_52) && __LIB_4__::func_850(PLAYER::PLAYER_PED_ID()) >= 10) && *uParam0 == 6)
	{
		func_4781(uParam2, uParam0, uParam1, 0, iParam4);
		return;
	}
	if ((__LIB_31__::func_217() && __LIB_4__::func_850(PLAYER::PLAYER_PED_ID()) >= 10) && *uParam0 == 6)
	{
		func_4781(uParam2, uParam0, uParam1, 0, iParam4);
		return;
	}
	if ((((!__LIB_9__::func_533() && !__LIB_10__::func_634()) || uParam2->f_52) || __LIB_31__::func_246()) || __LIB_31__::func_217())
	{
		if (((*uParam0 > 3 && *uParam0 < 14) && !func_4777(uParam2, PLAYER::PLAYER_PED_ID(), uParam0->f_1, iParam3, 0)) && *uParam0 != 13)
		{
			func_4781(uParam2, uParam0, uParam1, 0, iParam4);
			return;
		}
	}
	else if (((BitTest(Global_1965531, 11) && CAM::IS_SCREEN_FADED_OUT()) && *uParam0 > 3) && *uParam0 < 14)
	{
		func_4781(uParam2, uParam0, uParam1, 0, iParam4);
		return;
	}
	switch (*uParam0)
	{
		case 0:
			__LIB_9__::func_621(uParam0, uParam1);
			break;
		case 1:
			__LIB_11__::func_413(uParam0, uParam2);
			break;
		case 2:
			func_4771(uParam0, uParam1, uParam2, iParam3, iParam4);
			break;
		case 3:
			func_4769(uParam0, uParam1, uParam2, iParam4);
			break;
		case 4:
			func_4768(uParam0, uParam2, iParam4);
			break;
		case 5:
			func_4767(uParam0, uParam2, iParam4);
			break;
		case 6:
			func_4759(uParam0, uParam1, uParam2, iParam4);
			break;
		case 7:
			func_4756(uParam0, uParam1, uParam2, iParam4);
			break;
		case 8:
			func_4750(uParam2, uParam0, uParam1, iParam4);
			break;
		case 9:
			func_4747(uParam0, uParam1, uParam2, iParam4);
			break;
		case 10:
			func_4726(uParam0, uParam1, uParam2, iParam4);
			break;
		case 11:
			__LIB_11__::func_516(uParam0, uParam1, uParam2);
			break;
		case 12:
			func_4717(uParam0, uParam2, iParam4);
			break;
		case 13:
			__LIB_10__::func_612(uParam0, uParam1);
			break;
	}
	__LIB_10__::func_611(uParam0);
}

void func_4717(var uParam0, var uParam1, int iParam2)//Position - 0x17C93C
{
	float fVar0;
	struct<9> Var1;
	fVar0 = 0.65f;
	if (__LIB_9__::func_533() || (__LIB_10__::func_634() && !uParam1->f_52))
	{
		fVar0 = 0.99f;
	}
	if (__LIB_9__::func_612(uParam0, fVar0, 0))
	{
		__LIB_10__::func_603(uParam1, __LIB_9__::func_614(uParam0->f_1));
		Var1.f_5 = 1082130432;
		Var1.f_6 = -1065353216;
		Var1.f_8 = 1065353216;
		Var1.f_1 = 7;
		Var1.f_0 = -1;
		func_4718(uParam0, uParam1, &Var1, iParam2);
		__LIB_1__::func_289(uParam0, 11);
	}
}

void func_4718(var uParam0, var uParam1, int iParam2, int iParam3)//Position - 0x17C9C4
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var3;
	char* sVar4;
	int iVar5;
	char* sVar6;
	iVar1 = PLAYER::PLAYER_PED_ID();
	Var2 = { func_4723(uParam1) };
	Var3 = { 0f, 0f, func_4722(uParam1) };
	iVar0 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(Var2, Var3, 2, iParam2->f_4, iParam2->f_3, 1f, iParam2->f_7, iParam2->f_8);
	if (iParam2->f_1 != -1)
	{
		sVar4 = __LIB_31__::func_278(uParam1, iParam2->f_1, iParam3, uParam0->f_1);
		NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(iVar1, iVar0, uParam0->f_6, sVar4, iParam2->f_5, iParam2->f_6, 13, 16, 1000f, 0);
	}
	if (*iParam2 != -1)
	{
		iVar5 = NETWORK::NET_TO_ENT(uParam1->f_16[*iParam2]);
		sVar6 = __LIB_31__::func_278(uParam1, iParam2->f_2, iParam3, uParam0->f_1);
		NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(iVar5, iVar0, uParam0->f_6, sVar6, iParam2->f_5, iParam2->f_6, 13);
	}
	NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iVar0);
	uParam0->f_7 = iVar0;
}

float func_4722(var uParam0)//Position - 0x17CE2F
{
	if (__LIB_9__::func_533())
	{
		return 60f;
	}
	if (__LIB_10__::func_634())
	{
		if (uParam0->f_52)
		{
			return -32.5f;
		}
		else
		{
			return 70f;
		}
	}
	if (__LIB_31__::func_246())
	{
		return func_39(92.36f, __LIB_2__::func_717(PLAYER::PLAYER_ID()));
	}
	if (__LIB_31__::func_217())
	{
		return 150f;
	}
	return 180f;
}

Vector3 func_4723(var uParam0)//Position - 0x17CE96
{
	if (__LIB_9__::func_533())
	{
		return 2805.018f, -3925.7366f, 183.4118f;
	}
	if (__LIB_10__::func_634())
	{
		if (uParam0->f_52)
		{
			return 966.392f, 42.228f, 116.1134f;
		}
		else
		{
			return 937.5008f, 5.4165f, 115.1641f;
		}
	}
	if (__LIB_31__::func_246())
	{
		return func_4689(6.85039f, -1.96626f, 9.557f, __LIB_2__::func_717(PLAYER::PLAYER_ID()));
	}
	if (__LIB_31__::func_217())
	{
		return -1003.5241f, -63.052055f, -99.05518f;
	}
	return -1609.504f, -3019.3267f, -75.2549f;
}

void func_4726(var uParam0, var uParam1, var uParam2, int iParam3)//Position - 0x17CFCB
{
	struct<9> Var0;
	int iVar1;
	int iVar2;
	if (BitTest(uParam2->f_11[uParam0->f_1], 0))
	{
		MISC::CLEAR_BIT(uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*2*/], 30);
		MISC::CLEAR_BIT(uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*2*/], 31);
	}
	if (__LIB_9__::func_612(uParam0, 1065185444, 0))
	{
		MISC::CLEAR_BIT(uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*2*/], 29);
		MISC::CLEAR_BIT(uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*2*/], 30);
		MISC::CLEAR_BIT(uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*2*/], 31);
		MISC::CLEAR_BIT(&(uParam0->f_4), 4);
		__LIB_10__::func_603(uParam2, __LIB_9__::func_614(uParam0->f_1));
		Var0.f_5 = 1082130432;
		Var0.f_6 = -1065353216;
		Var0.f_8 = 1065353216;
		Var0.f_3 = 1;
		Var0.f_1 = 5;
		Var0.f_0 = -1;
		func_4718(uParam0, uParam2, &Var0, iParam3);
		func_4745(uParam0);
		__LIB_1__::func_289(uParam0, 6);
	}
	else if (!BitTest(uParam0->f_4, 4))
	{
		iVar1 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam0->f_7);
		if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar1) >= 0.25f)
		{
			iVar2 = 1;
			__LIB_6__::func_999(PLAYER::PLAYER_PED_ID(), 0, iVar2);
			MISC::SET_BIT(&(uParam0->f_4), 4);
		}
	}
}

void func_4745(var uParam0)//Position - 0x17D7A8
{
	if (BitTest(uParam0->f_4, 11))
	{
		__LIB_5__::func_828(PLAYER::PLAYER_PED_ID());
		MISC::CLEAR_BIT(&(uParam0->f_4), 11);
	}
	if (BitTest(uParam0->f_4, 10))
	{
		func_1426(PLAYER::PLAYER_PED_ID(), 1, uParam0->f_9, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		MISC::CLEAR_BIT(&(uParam0->f_4), 10);
	}
}

void func_4747(var uParam0, var uParam1, var uParam2, int iParam3)//Position - 0x17D88C
{
	struct<9> Var0;
	struct<9> Var1;
	if (BitTest(uParam2->f_11[uParam0->f_1], 0))
	{
		MISC::CLEAR_BIT(uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*2*/], 30);
		MISC::CLEAR_BIT(uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*2*/], 31);
	}
	if (!__LIB_10__::func_589(uParam0->f_1, uParam2))
	{
		return;
	}
	if (BitTest(uParam2->f_11[uParam0->f_1], 0))
	{
		MISC::CLEAR_BIT(uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*2*/], 30);
		MISC::CLEAR_BIT(uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*2*/], 31);
	}
	if ((__LIB_9__::func_612(uParam0, 1065185444, 0) || __LIB_9__::func_533()) || (__LIB_10__::func_634() && !uParam2->f_52))
	{
		if (BitTest(uParam0->f_4, 9))
		{
			MISC::CLEAR_BIT(uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*2*/], 29);
			MISC::CLEAR_BIT(&(uParam0->f_4), 5);
			MISC::CLEAR_BIT(&(uParam0->f_4), 9);
			__LIB_10__::func_644();
			Var0.f_5 = 1082130432;
			Var0.f_6 = -1065353216;
			Var0.f_8 = 1065353216;
			Var0.f_4 = 1;
			Var0.f_1 = 0;
			Var0.f_2 = 1;
			Var0.f_0 = __LIB_9__::func_614(uParam0->f_1);
			Var0.f_5 = 1000f;
			func_4718(uParam0, uParam2, &Var0, iParam3);
			__LIB_1__::func_289(uParam0, 12);
		}
		else
		{
			__LIB_10__::func_644();
			Var1.f_5 = 1082130432;
			Var1.f_6 = -1065353216;
			Var1.f_8 = 1065353216;
			Var1.f_4 = 1;
			Var1.f_1 = 0;
			Var1.f_2 = 1;
			Var1.f_0 = __LIB_9__::func_614(uParam0->f_1);
			Var1.f_5 = 1000f;
			func_4718(uParam0, uParam2, &Var1, iParam3);
			__LIB_1__::func_289(uParam0, 10);
		}
	}
}

void func_4750(var uParam0, var uParam1, var uParam2, int iParam3)//Position - 0x17DA45
{
	int iVar0;
	struct<9> Var1;
	struct<9> Var2;
	if (iParam3 == 1)
	{
		STREAMING::REQUEST_NAMED_PTFX_ASSET("scr_sec");
		if (STREAMING::HAS_NAMED_PTFX_ASSET_LOADED("scr_sec"))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("vfx_sec_drink_pour_start")) && !GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam1->f_8))
			{
				GRAPHICS::USE_PARTICLE_FX_ASSET("scr_sec");
				uParam1->f_8 = GRAPHICS::START_NETWORKED_PARTICLE_FX_LOOPED_ON_ENTITY("scr_sec_drink_pour", NETWORK::NET_TO_OBJ(uParam0->f_16[4]), 0f, 0f, 0.12f, 0f, 0f, 0f, 1f, false, false, false, 1f, 1f, 1f, 0f);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("vfx_sec_drink_pour_stop")) && GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam1->f_8))
			{
				GRAPHICS::STOP_PARTICLE_FX_LOOPED(uParam1->f_8, false);
				STREAMING::REMOVE_NAMED_PTFX_ASSET("scr_sec");
			}
		}
	}
	else
	{
		STREAMING::REQUEST_NAMED_PTFX_ASSET("scr_ba_club");
		if (STREAMING::HAS_NAMED_PTFX_ASSET_LOADED("scr_ba_club"))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), 1159357672))
			{
				GRAPHICS::USE_PARTICLE_FX_ASSET("scr_ba_club");
				uParam1->f_8 = GRAPHICS::START_NETWORKED_PARTICLE_FX_LOOPED_ON_ENTITY("scr_ba_club_drink_pour", NETWORK::NET_TO_OBJ(uParam0->f_16[4]), 0f, 0f, 0.12f, 0f, 0f, 0f, 1f, false, false, false, 1f, 1f, 1f, 0f);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), 1840086341))
			{
				if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam1->f_8))
				{
					GRAPHICS::STOP_PARTICLE_FX_LOOPED(uParam1->f_8, false);
					STREAMING::REMOVE_NAMED_PTFX_ASSET("scr_ba_club");
				}
			}
		}
	}
	iVar0 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam1->f_7);
	Var1.f_5 = 1082130432;
	Var1.f_6 = -1065353216;
	Var1.f_8 = 1065353216;
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar0))
	{
		if (BitTest((uParam2[PLAYER::PLAYER_ID() /*2*/])->f_1, 0) && !BitTest(uParam1->f_4, 12))
		{
			if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_16[0]))
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(uParam0->f_16[0]);
			}
			else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar0) >= __LIB_10__::func_588(uParam1, 0))
			{
				Var1.f_0 = 0;
				Var1.f_1 = -1;
				if ((__LIB_9__::func_533() || __LIB_31__::func_217()) || (__LIB_10__::func_634() && !uParam0->f_52))
				{
					Var1.f_2 = 14;
				}
				else
				{
					Var1.f_2 = 4;
				}
				if (__LIB_9__::func_616(uParam1->f_5))
				{
					Var1.f_7 = 0.51f;
				}
				else
				{
					Var1.f_7 = 0.4f;
				}
				if (!__LIB_9__::func_533() && (!__LIB_10__::func_634() || uParam0->f_52))
				{
					uParam1->f_6 = __LIB_31__::func_254(__LIB_10__::func_613(0), uParam0, iParam3);
				}
				func_4751(uParam1, uParam0, &Var1, iParam3);
				uParam1->f_6 = __LIB_31__::func_254(uParam1->f_5, uParam0, iParam3);
				MISC::SET_BIT(&(uParam1->f_4), 12);
			}
		}
		if ((BitTest((uParam2[PLAYER::PLAYER_ID() /*2*/])->f_1, 3) && !BitTest(uParam1->f_4, 13)) && BitTest(uParam0->f_5, 3))
		{
			if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_16[3]))
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(uParam0->f_16[3]);
			}
			else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar0) >= __LIB_10__::func_588(uParam1, 3))
			{
				Var1.f_0 = 3;
				Var1.f_1 = -1;
				if ((__LIB_9__::func_533() || __LIB_31__::func_217()) || (__LIB_10__::func_634() && !uParam0->f_52))
				{
					Var1.f_2 = 17;
				}
				else
				{
					Var1.f_2 = 4;
				}
				if (__LIB_9__::func_616(uParam1->f_5))
				{
					Var1.f_7 = 0.32f;
				}
				else
				{
					Var1.f_7 = 0.39f;
				}
				if (!__LIB_9__::func_533() && (!__LIB_10__::func_634() || uParam0->f_52))
				{
					uParam1->f_6 = __LIB_31__::func_254(__LIB_10__::func_613(3), uParam0, iParam3);
				}
				func_4751(uParam1, uParam0, &Var1, iParam3);
				uParam1->f_6 = __LIB_31__::func_254(uParam1->f_5, uParam0, iParam3);
				MISC::SET_BIT(&(uParam1->f_4), 13);
			}
		}
		if ((BitTest((uParam2[PLAYER::PLAYER_ID() /*2*/])->f_1, 2) && !BitTest(uParam1->f_4, 14)) && BitTest(uParam0->f_5, 2))
		{
			if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_16[2]))
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(uParam0->f_16[2]);
			}
			else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar0) >= __LIB_10__::func_588(uParam1, 2))
			{
				Var1.f_0 = 2;
				Var1.f_1 = -1;
				if ((__LIB_9__::func_533() || __LIB_31__::func_217()) || (__LIB_10__::func_634() && !uParam0->f_52))
				{
					Var1.f_2 = 16;
				}
				else
				{
					Var1.f_2 = 4;
				}
				if (__LIB_9__::func_616(uParam1->f_5))
				{
					Var1.f_7 = 0.31f;
				}
				else
				{
					Var1.f_7 = 0.35f;
				}
				if (!__LIB_9__::func_533() && (!__LIB_10__::func_634() || uParam0->f_52))
				{
					uParam1->f_6 = __LIB_31__::func_254(__LIB_10__::func_613(2), uParam0, iParam3);
				}
				func_4751(uParam1, uParam0, &Var1, iParam3);
				uParam1->f_6 = __LIB_31__::func_254(uParam1->f_5, uParam0, iParam3);
				MISC::SET_BIT(&(uParam1->f_4), 14);
			}
		}
		if (BitTest((uParam2[PLAYER::PLAYER_ID() /*2*/])->f_1, 1) && !BitTest(uParam1->f_4, 15))
		{
			if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_16[1]))
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(uParam0->f_16[1]);
			}
			else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar0) >= __LIB_10__::func_588(uParam1, 1))
			{
				Var1.f_0 = 1;
				Var1.f_1 = -1;
				if ((__LIB_9__::func_533() || __LIB_31__::func_217()) || (__LIB_10__::func_634() && !uParam0->f_52))
				{
					Var1.f_2 = 15;
				}
				else
				{
					Var1.f_2 = 4;
				}
				Var1.f_8 = 1f;
				if (__LIB_9__::func_616(uParam1->f_5))
				{
					Var1.f_7 = 0.37f;
				}
				else
				{
					Var1.f_7 = 0.32f;
				}
				if (!__LIB_9__::func_533() && (!__LIB_10__::func_634() || uParam0->f_52))
				{
					uParam1->f_6 = __LIB_31__::func_254(__LIB_10__::func_613(1), uParam0, iParam3);
				}
				func_4751(uParam1, uParam0, &Var1, iParam3);
				uParam1->f_6 = __LIB_31__::func_254(uParam1->f_5, uParam0, iParam3);
				MISC::SET_BIT(&(uParam1->f_4), 15);
			}
		}
	}
	if (__LIB_9__::func_612(uParam1, 1f, 0))
	{
		if (BitTest(uParam1->f_4, 3))
		{
			MISC::SET_BIT(uParam2[NETWORK::PARTICIPANT_ID_TO_INT() /*2*/], 30);
			MISC::CLEAR_BIT(&(uParam1->f_4), 3);
		}
		else
		{
			MISC::SET_BIT(uParam2[NETWORK::PARTICIPANT_ID_TO_INT() /*2*/], 31);
		}
		MISC::SET_BIT(&(uParam1->f_4), 5);
		Var2.f_5 = 1082130432;
		Var2.f_6 = -1065353216;
		Var2.f_8 = 1065353216;
		Var2.f_3 = 1;
		Var2.f_1 = 5;
		Var2.f_0 = -1;
		func_4718(uParam1, uParam0, &Var2, iParam3);
		__LIB_1__::func_289(uParam1, 6);
	}
}

void func_4751(var uParam0, var uParam1, var uParam2, int iParam3)//Position - 0x17E049
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	int iVar3;
	char* sVar4;
	Var1 = { func_4723(uParam1) };
	Var2 = { 0f, 0f, func_4722(uParam1) };
	iVar0 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(Var1, Var2, 2, uParam2->f_4, uParam2->f_3, 1f, uParam2->f_7, 1f);
	if (*uParam2 != -1)
	{
		iVar3 = NETWORK::NET_TO_ENT(uParam1->f_16[*uParam2]);
		if (uParam2->f_2 != -1)
		{
			sVar4 = __LIB_31__::func_278(uParam1, uParam2->f_2, iParam3, uParam0->f_1);
		}
		else
		{
			sVar4 = __LIB_9__::func_534(*uParam2);
		}
		NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(iVar3, iVar0, uParam0->f_6, sVar4, 1000f, -1000f, 13);
	}
	NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iVar0);
	uParam1->f_44[*uParam2] = iVar0;
}

void func_4756(var uParam0, var uParam1, var uParam2, int iParam3)//Position - 0x17E462
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<9> Var6;
	struct<9> Var7;
	if (__LIB_9__::func_617(&(uParam2->f_3)))
	{
		__LIB_1__::func_289(uParam0, 6);
		MISC::CLEAR_BIT(uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*2*/], 4);
		return;
	}
	if (!func_4757(&(uParam2->f_3)))
	{
		return;
	}
	iVar0 = 0;
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_OBJ(uParam2->f_16[0]), __LIB_9__::func_535(), __LIB_9__::func_534(0), 3))
	{
		MISC::SET_BIT(&iVar0, 0);
	}
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_OBJ(uParam2->f_16[1]), __LIB_9__::func_535(), __LIB_9__::func_534(1), 3))
	{
		MISC::SET_BIT(&iVar0, 1);
	}
	if (BitTest(uParam2->f_5, 2) && ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_OBJ(uParam2->f_16[2]), __LIB_9__::func_535(), __LIB_9__::func_534(2), 3))
	{
		MISC::SET_BIT(&iVar0, 2);
	}
	if (BitTest(uParam2->f_5, 3) && ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_OBJ(uParam2->f_16[3]), __LIB_9__::func_535(), __LIB_9__::func_534(3), 3))
	{
		MISC::SET_BIT(&iVar0, 3);
	}
	MISC::SET_BIT(&iVar0, 4);
	if (BitTest(iVar0, 0))
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam2->f_16[0]))
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(uParam2->f_16[0]);
			return;
		}
	}
	if (BitTest(iVar0, 1))
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam2->f_16[1]))
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(uParam2->f_16[1]);
			return;
		}
	}
	if (BitTest(iVar0, 2) && BitTest(uParam2->f_5, 2))
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam2->f_16[2]))
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(uParam2->f_16[2]);
			return;
		}
	}
	if (BitTest(iVar0, 3) && BitTest(uParam2->f_5, 3))
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam2->f_16[3]))
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(uParam2->f_16[3]);
			return;
		}
	}
	if (BitTest(iVar0, 4))
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam2->f_16[4]))
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(uParam2->f_16[4]);
			return;
		}
	}
	MISC::CLEAR_BIT(uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*2*/], 4);
	bVar1 = true;
	iVar2 = PLAYER::PLAYER_ID();
	iVar3 = 0;
	while (iVar3 < 4)
	{
		iVar4 = uParam2->f_6[iVar3];
		if (iVar4 == iVar2 || !__LIB_9__::func_541(iVar4))
		{
		}
		else
		{
			iVar5 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar4);
			if ((!BitTest((*uParam1)[iVar5 /*2*/], 29) && !BitTest(uParam2->f_11[iVar3], 0)) && BitTest(iVar0, iVar3))
			{
				bVar1 = false;
			}
			else
			{
				iVar3++;
			}
			(uParam1[PLAYER::PLAYER_ID() /*2*/])->f_1 = 0;
			Var6.f_5 = 1082130432;
			Var6.f_6 = -1065353216;
			Var6.f_8 = 1065353216;
			Var7.f_5 = 1082130432;
			Var7.f_6 = -1065353216;
			Var7.f_8 = 1065353216;
			Var6.f_6 = -1.5f;
			Var6.f_5 = 1.5f;
			if (bVar1)
			{
				Var6.f_4 = 1;
				Var6.f_1 = 12;
				Var6.f_2 = 13;
				Var6.f_0 = 4;
				MISC::SET_BIT(&(uParam0->f_4), 3);
				func_4718(uParam0, uParam2, &Var6, iParam3);
				Var7.f_1 = -1;
				Var7.f_2 = 4;
				Var7.f_0 = __LIB_9__::func_614(uParam0->f_1);
				Var7.f_7 = 0f;
				func_4751(uParam0, uParam2, &Var7, iParam3);
			}
			else
			{
				Var6.f_4 = 1;
				Var6.f_1 = 10;
				Var6.f_2 = 11;
				Var6.f_0 = 4;
				func_4718(uParam0, uParam2, &Var6, iParam3);
				MISC::CLEAR_BIT(&(uParam0->f_4), 12);
				MISC::CLEAR_BIT(&(uParam0->f_4), 13);
				MISC::CLEAR_BIT(&(uParam0->f_4), 14);
				MISC::CLEAR_BIT(&(uParam0->f_4), 15);
				if (!BitTest(uParam2->f_11[0], 0) && BitTest(iVar0, 0))
				{
					MISC::SET_BIT(&((uParam1[PLAYER::PLAYER_ID() /*2*/])->f_1), 0);
				}
				if (!BitTest(uParam2->f_11[1], 0) && BitTest(iVar0, 1))
				{
					MISC::SET_BIT(&((uParam1[PLAYER::PLAYER_ID() /*2*/])->f_1), 1);
				}
				if ((!BitTest(uParam2->f_11[2], 0) && BitTest(iVar0, 2)) && BitTest(uParam2->f_5, 2))
				{
					MISC::SET_BIT(&((uParam1[PLAYER::PLAYER_ID() /*2*/])->f_1), 2);
				}
				if ((!BitTest(uParam2->f_11[3], 0) && BitTest(iVar0, 3)) && BitTest(uParam2->f_5, 3))
				{
					MISC::SET_BIT(&((uParam1[PLAYER::PLAYER_ID() /*2*/])->f_1), 3);
				}
			}
			STREAMING::REQUEST_NAMED_PTFX_ASSET("scr_ba_club");
			__LIB_1__::func_289(uParam0, 8);
		}
bool func_4757(var uParam0)//Position - 0x17E84D
{
	return BitTest(*uParam0, NETWORK::PARTICIPANT_ID_TO_INT());
}

void func_4759(var uParam0, var uParam1, var uParam2, int iParam3)//Position - 0x17E86E
{
	struct<9> Var0;
	int iVar1;
	bool bVar2;
	struct<9> Var3;
	struct<9> Var4;
	struct<9> Var5;
	bool bVar6;
	struct<9> Var7;
	if (((__LIB_4__::func_850(PLAYER::PLAYER_PED_ID()) >= 10 && !__LIB_9__::func_533()) && !__LIB_10__::func_634()) && !__LIB_31__::func_217())
	{
		if (__LIB_9__::func_616(uParam0->f_5))
		{
			Var0.f_5 = 1082130432;
			Var0.f_6 = -1065353216;
			Var0.f_8 = 1065353216;
			Var0.f_1 = 18;
			Var0.f_0 = -1;
			Var0.f_4 = 1;
			func_4718(uParam0, uParam2, &Var0, iParam3);
			__LIB_1__::func_289(uParam0, 13);
			return;
		}
	}
	bVar2 = __LIB_9__::func_620(uParam0, uParam2, 0);
	if (!bVar2 && BitTest(uParam0->f_4, 5))
	{
		__LIB_9__::func_677(uParam0);
		return;
	}
	else if (bVar2)
	{
		iVar1 = 4;
	}
	else if (uParam2->f_51 == -1)
	{
		iVar1 = 2;
	}
	else
	{
		iVar1 = 1;
	}
	if (PAD::HAVE_CONTROLS_CHANGED(2 /*FRONTEND_CONTROL*/))
	{
		__LIB_9__::func_677(uParam0);
		HUD::CLEAR_HELP(true);
	}
	if (__LIB_31__::func_279(uParam2, uParam0, iVar1, 1))
	{
		if (iVar1 == 4)
		{
			MISC::CLEAR_BIT(uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*2*/], 30);
			MISC::CLEAR_BIT(uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*2*/], 31);
			MISC::SET_BIT(uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*2*/], 29);
			MISC::CLEAR_BIT(&(uParam0->f_4), 5);
			if ((((!__LIB_9__::func_533() && !__LIB_10__::func_634()) || uParam2->f_52) || __LIB_31__::func_246()) || __LIB_31__::func_217())
			{
				Var3.f_5 = 1082130432;
				Var3.f_6 = -1065353216;
				Var3.f_8 = 1065353216;
				Var3.f_4 = 1;
				Var3.f_1 = 8;
				Var3.f_2 = 9;
				Var3.f_0 = __LIB_9__::func_614(uParam0->f_1);
				func_4718(uParam0, uParam2, &Var3, iParam3);
			}
			MISC::SET_BIT(&(uParam0->f_4), 9);
			func_4760(uParam0);
			__LIB_1__::func_289(uParam0, 9);
			return;
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam0->f_4), 5);
			Var4.f_5 = 1082130432;
			Var4.f_6 = -1065353216;
			Var4.f_8 = 1065353216;
			Var4.f_1 = 7;
			Var4.f_0 = -1;
			func_4718(uParam0, uParam2, &Var4, iParam3);
			__LIB_1__::func_289(uParam0, 11);
			return;
		}
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 223 /*INPUT_SCRIPT_RDOWN*/))
	{
		if (iVar1 == 4)
		{
			MISC::CLEAR_BIT(uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*2*/], 30);
			MISC::CLEAR_BIT(uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*2*/], 31);
			MISC::SET_BIT(uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*2*/], 29);
			MISC::CLEAR_BIT(&(uParam0->f_4), 5);
			if ((((!__LIB_9__::func_533() && !__LIB_10__::func_634()) || uParam2->f_52) || __LIB_31__::func_246()) || __LIB_31__::func_217())
			{
				Var5.f_5 = 1082130432;
				Var5.f_6 = -1065353216;
				Var5.f_8 = 1065353216;
				Var5.f_4 = 1;
				Var5.f_1 = 8;
				Var5.f_2 = 9;
				Var5.f_0 = __LIB_9__::func_614(uParam0->f_1);
				func_4718(uParam0, uParam2, &Var5, iParam3);
			}
			func_4760(uParam0);
			__LIB_1__::func_289(uParam0, 9);
			return;
		}
		else if (iVar1 == 2)
		{
			MISC::SET_BIT(uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*2*/], 4);
			__LIB_1__::func_289(uParam0, 7);
			return;
		}
	}
	bVar6 = ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), uParam0->f_6, __LIB_31__::func_278(uParam2, 5, iParam3, uParam0->f_1), 3);
	if (!bVar6)
	{
		Var7.f_5 = 1082130432;
		Var7.f_6 = -1065353216;
		Var7.f_8 = 1065353216;
		Var7.f_3 = 1;
		Var7.f_1 = 5;
		Var7.f_0 = -1;
		func_4718(uParam0, uParam2, &Var7, iParam3);
	}
}

void func_4760(var uParam0)//Position - 0x17EBB8
{
	uParam0->f_9 = func_226(PLAYER::PLAYER_PED_ID(), 1, -1);
	if (__LIB_0__::func_348(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), 14, func_226(PLAYER::PLAYER_PED_ID(), 14, 0), -1))
	{
		PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 0);
	}
	if (__LIB_1__::func_102(PLAYER::PLAYER_PED_ID(), 7))
	{
		PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 7, 0, 0, 0);
	}
	func_1426(PLAYER::PLAYER_PED_ID(), 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	func_1508(PLAYER::PLAYER_PED_ID(), 4, -1, -1);
	if (__LIB_3__::func_332(PLAYER::PLAYER_PED_ID()))
	{
		__LIB_5__::func_828(PLAYER::PLAYER_PED_ID());
		MISC::SET_BIT(&(uParam0->f_4), 11);
	}
	else
	{
		MISC::CLEAR_BIT(&(uParam0->f_4), 11);
	}
	MISC::SET_BIT(&(uParam0->f_4), 10);
}

void func_4767(var uParam0, var uParam1, int iParam2)//Position - 0x17F006
{
	float fVar0;
	struct<9> Var1;
	fVar0 = 0.61f;
	if (__LIB_9__::func_533() || (__LIB_10__::func_634() && !uParam1->f_52))
	{
		fVar0 = 0.99f;
	}
	if (__LIB_9__::func_612(uParam0, fVar0, 0))
	{
		Var1.f_5 = 1082130432;
		Var1.f_6 = -1065353216;
		Var1.f_8 = 1065353216;
		Var1.f_3 = 1;
		Var1.f_1 = 5;
		Var1.f_0 = -1;
		func_4718(uParam0, uParam1, &Var1, iParam2);
		__LIB_1__::func_289(uParam0, 6);
	}
}

void func_4768(var uParam0, var uParam1, int iParam2)//Position - 0x17F084
{
	int iVar0;
	struct<9> Var1;
	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD"));
	if (((iVar0 != 0 && iVar0 != 1) && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD")) != 0) && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD")) != 1)
	{
		Var1.f_5 = 1082130432;
		Var1.f_6 = -1065353216;
		Var1.f_8 = 1065353216;
		Var1.f_4 = 1;
		Var1.f_1 = 6;
		Var1.f_0 = -1;
		Var1.f_8 = 1.05f;
		func_4718(uParam0, uParam1, &Var1, iParam2);
		__LIB_1__::func_289(uParam0, 5);
	}
}

void func_4769(var uParam0, var uParam1, var uParam2, int iParam3)//Position - 0x17F11D
{
	int iVar0;
	char* sVar1;
	struct<3> Var2;
	struct<3> Var3;
	int iVar4;
	if ((func_4757(&(uParam2->f_1)) && STREAMING::HAS_ANIM_DICT_LOADED(uParam0->f_6)) && STREAMING::HAS_NAMED_PTFX_ASSET_LOADED("scr_ba_club"))
	{
		iVar0 = __LIB_9__::func_614(uParam0->f_1);
		MISC::CLEAR_BIT(uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*2*/], iVar0);
		sVar1 = __LIB_31__::func_278(uParam2, 6, iParam3, uParam0->f_1);
		Var2 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(uParam0->f_6, sVar1, func_4723(uParam2), 0f, 0f, func_4722(uParam2), 0f, 2) };
		Var3 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(uParam0->f_6, sVar1, func_4723(uParam2), 0f, 0f, func_4722(uParam2), 0f, 2) };
		if (((__LIB_9__::func_533() || (__LIB_10__::func_634() && !uParam2->f_52)) || __LIB_31__::func_246()) || __LIB_31__::func_217())
		{
			TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), Var2, 1f, 20000, Var3.f_2, 0.05f);
		}
		else
		{
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(PLAYER::PLAYER_PED_ID(), Var2, 1f, 20000, 0.05f, 0, Var3.f_2);
		}
		__LIB_1__::func_289(uParam0, 4);
	}
	else if (__LIB_9__::func_617(&(uParam2->f_1)))
	{
		STREAMING::REMOVE_ANIM_DICT(uParam0->f_6);
		MISC::SET_BIT(&(uParam0->f_4), 2);
		iVar4 = __LIB_9__::func_614(uParam0->f_1);
		MISC::CLEAR_BIT(uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*2*/], iVar4);
		MISC::CLEAR_BIT(uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*2*/], 28);
		__LIB_1__::func_289(uParam0, 2);
	}
}

void func_4771(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)//Position - 0x17F29E
{
	MISC::CLEAR_BIT(uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*2*/], 28);
	if (BitTest(uParam0->f_4, 2) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		__LIB_0__::func_151("SHOT_BLOCK" /* GXT: Someone else is already standing here. */, -1);
		MISC::CLEAR_BIT(&(uParam0->f_4), 2);
	}
	if (((((__LIB_4__::func_850(PLAYER::PLAYER_PED_ID()) >= 10 || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || BitTest(Global_1946250.f_4, 2)) || Global_2667225.f_2681) || BitTest(Global_1946250.f_3, 27)) && !__LIB_9__::func_533())
	{
		__LIB_9__::func_677(uParam0);
		return;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		__LIB_9__::func_677(uParam0);
		return;
	}
	if (__LIB_9__::func_533() && Global_262145.f_26623 /* Tunable: 1608970645 */)
	{
		__LIB_9__::func_677(uParam0);
		return;
	}
	if ((__LIB_9__::func_538(uParam2, uParam0->f_1) != -1 || !func_4777(uParam2, PLAYER::PLAYER_PED_ID(), uParam0->f_1, iParam3, 1)) || func_4773(uParam2, uParam0->f_1, iParam4))
	{
		__LIB_9__::func_677(uParam0);
		uParam0->f_1 = (uParam0->f_1 + 1 % 4);
		return;
	}
	if (PAD::HAVE_CONTROLS_CHANGED(2 /*FRONTEND_CONTROL*/))
	{
		__LIB_9__::func_677(uParam0);
		HUD::CLEAR_HELP(true);
	}
	if (__LIB_31__::func_279(uParam2, uParam0, 0, 1))
	{
		__LIB_31__::func_453(uParam0, uParam1, uParam2, iParam4);
	}
}

int func_4773(var uParam0, int iParam1, int iParam2)//Position - 0x17F440
{
	var uVar0[10];
	int iVar1;
	if (iParam2 == 0)
	{
		return 0;
	}
	PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar0, -1);
	iVar1 = 0;
	while (iVar1 < 10)
	{
		if (((ENTITY::DOES_ENTITY_EXIST(uVar0[iVar1]) && !PED::IS_PED_INJURED(uVar0[iVar1])) && ENTITY::IS_ENTITY_VISIBLE(uVar0[iVar1])) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(uVar0[iVar1], func_4774(uParam0, iParam1, 0), func_4774(uParam0, iParam1, 1), 1f, false, true, 0))
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

Vector3 func_4774(var uParam0, int iParam1, bool bParam2)//Position - 0x17F4CD
{
	struct<3> Var0;
	if (__LIB_9__::func_533())
	{
		if (!bParam2)
		{
			switch (iParam1)
			{
				case 0:
					return 2806.7566f, -3926.0266f, 183.41069f;
				case 1:
					return 2804.7341f, -3927.3633f, 183.41069f;
				case 2:
					return 2803.3733f, -3925.474f, 183.41069f;
				case 3:
					return 2805.2598f, -3924.0872f, 183.41069f;
				default:
			}
		}
		else
		{
			switch (iParam1)
			{
				case 0:
					return 2805.7134f, -3925.4224f, 185.41069f;
				case 1:
					return 2805.2688f, -3926.4248f, 185.41069f;
				case 2:
					return 2804.3955f, -3926.034f, 185.41069f;
				case 3:
					return 2804.7114f, -3925.0574f, 185.41069f;
				}
			}
		default:
	}
	if (__LIB_10__::func_634())
	{
		if (uParam0->f_52)
		{
			if (!bParam2)
			{
				switch (iParam1)
				{
					case 0:
						return 964.9635f, 42.46778f, 115.164116f;
					case 1:
						return 964.29926f, 41.490177f, 115.164116f;
					case 2:
						return 967.001f, 39.98059f, 115.164116f;
					case 3:
						return 967.55676f, 40.93782f, 115.164116f;
					default:
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return 966.129f, 41.747986f, 117.164116f;
					case 1:
						return 965.5378f, 40.75706f, 117.164116f;
					case 2:
						return 965.73926f, 40.758835f, 117.1855f;
					case 3:
						return 966.31866f, 41.67929f, 117.174904f;
					}
				default:
			}
		}
		else if (!bParam2)
		{
			switch (iParam1)
			{
				case 0:
					return 938.0187f, 5.237113f, 115.16415f;
				case 1:
					return 937.2456f, 4.917614f, 115.164185f;
				case 2:
					return 936.9428f, 5.720862f, 115.164185f;
				case 3:
					return 937.8668f, 6.031842f, 115.16415f;
				default:
			}
		}
		else
		{
			switch (iParam1)
			{
				case 0:
					return 939.0417f, 5.805412f, 117.16415f;
				case 1:
					return 937.90717f, 3.923868f, 117.16415f;
				case 2:
					return 935.93964f, 5.033688f, 117.164185f;
				case 3:
					return 937.1032f, 6.935579f, 117.16415f;
				}
			}
		default:
	}
	if (__LIB_31__::func_246())
	{
		if (!bParam2)
		{
			switch (iParam1)
			{
				case 0:
					Var0 = { 6.65267f, -2.78929f, 8.60009f };
					break;
				case 1:
					Var0 = { 7.77584f, -2.79066f, 8.60009f };
					break;
				case 2:
					Var0 = { 9.02963f, -0.789205f, 8.84151f };
					break;
				case 3:
					Var0 = { 6.52135f, -0.775211f, 8.60009f };
					break;
			}
		}
		else
		{
			switch (iParam1)
			{
				case 0:
					Var0 = { 7.72426f, -2.78885f, 10.6001f };
					break;
				case 1:
					Var0 = { 8.96754f, -2.8021f, 10.6001f };
					break;
				case 2:
					Var0 = { 7.84764f, -0.784561f, 10.8415f };
					break;
				case 3:
					Var0 = { 7.78254f, -0.788801f, 10.8415f };
					break;
				}
		}
		return func_4689(Var0, __LIB_2__::func_717(PLAYER::PLAYER_ID()));
	}
	if (__LIB_31__::func_217())
	{
		if (!bParam2)
		{
			switch (iParam1)
			{
				case 0:
					return -1003.8079f, -61.67147f, -100.003075f;
				case 1:
					return -1004.29956f, -62.526443f, -100.003075f;
				default:
			}
		}
		else
		{
			switch (iParam1)
			{
				case 0:
					return -1004.4024f, -62.666817f, -98.003075f;
				case 1:
					return -1004.84296f, -63.466877f, -98.003075f;
				}
			}
		default:
	}
	return 0f, 0f, 0f;
}

bool func_4777(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x17F950
{
	struct<4> Var0;
	if (((__LIB_9__::func_533() || __LIB_10__::func_634()) || __LIB_31__::func_246()) || __LIB_31__::func_217())
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam1, func_4774(uParam0, iParam2, 0), func_4774(uParam0, iParam2, 1), 1f, false, true, 0))
		{
			return 1;
		}
	}
	return (((iParam3 == joaat("Int_01_orifice") && __LIB_9__::func_622(iParam2, &Var0)) && ENTITY::IS_ENTITY_AT_COORD(iParam1, Var0, Var0.f_3, false, true, 0)) && (!bParam4 || __LIB_3__::func_526(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), func_4778(iParam2, uParam0), 37.5f)));
}

float func_4778(int iParam0, var uParam1)//Position - 0x17F9F4
{
	float fVar0;
	if (__LIB_9__::func_533())
	{
		switch (iParam0)
		{
			case 0:
				return 105f;
				break;
			case 1:
				return 15f;
				break;
			case 2:
				return 285f;
				break;
			case 3:
				return 195f;
				break;
			}
	}
	if (__LIB_10__::func_634())
	{
		if (uParam1->f_52)
		{
			switch (iParam0)
			{
				case 0:
					return 120f;
					break;
				case 1:
					return 30f;
					break;
				case 2:
					return -60f;
					break;
				case 3:
					return -150f;
					break;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					return 120f;
					break;
				case 1:
					return 30f;
					break;
				case 2:
					return -60f;
					break;
				case 3:
					return -150f;
					break;
				}
			}
	}
	if (__LIB_31__::func_246())
	{
		switch (iParam0)
		{
			case 0:
				fVar0 = 358.5063f;
				break;
			case 1:
				fVar0 = 358.5063f;
				break;
			case 2:
				fVar0 = 180.1914f;
				break;
			case 3:
				fVar0 = 180.1914f;
				break;
		}
		return func_39(fVar0, __LIB_2__::func_717(PLAYER::PLAYER_ID()));
	}
	if (__LIB_31__::func_217())
	{
		switch (iParam0)
		{
			case 0:
				return 241.4275f;
				break;
			case 1:
				return 241.4275f;
				break;
			}
	}
	switch (iParam0)
	{
		case 0:
			return 90f;
			break;
		case 1:
			return 90f;
			break;
		case 2:
			return 270f;
			break;
		case 3:
			return 270f;
			break;
	}
	return 0f;
}

void func_4781(var uParam0, var uParam1, var uParam2, bool bParam3, int iParam4)//Position - 0x17FCAE
{
	int iVar0;
	struct<2> Var1;
	int iVar2;
	bool bVar3;
	int iVar4;
	char* sVar5;
	struct<10> Var6;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_IS_SESSION_ACTIVE())
	{
		iVar0 = NETWORK::PARTICIPANT_ID_TO_INT();
		*(uParam2[iVar0 /*2*/]) = { Var1 };
	}
	MISC::CLEAR_BIT(&(uParam1->f_4), 9);
	if (BitTest(uParam1->f_4, 7))
	{
		PED::SET_PED_CAN_HEAD_IK(PLAYER::PLAYER_PED_ID(), true);
		MISC::CLEAR_BIT(&(uParam1->f_4), 7);
	}
	if (BitTest(uParam1->f_4, 6))
	{
		__LIB_1__::func_91();
		MISC::CLEAR_BIT(&(uParam1->f_4), 6);
	}
	if (BitTest(uParam1->f_4, 8))
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 185, false);
		MISC::CLEAR_BIT(&(uParam1->f_4), 8);
	}
	func_4745(uParam1);
	switch (*uParam1)
	{
		case 0:
		case 1:
		case 2:
			break;
		case 14:
			return;
		case 7:
		case 8:
		case 9:
		case 10:
		case 5:
		case 6:
			iVar2 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam1->f_7);
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar2))
			{
				NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(uParam1->f_7);
			}
			bVar3 = false;
			while (bVar3 < 4)
			{
				if (BitTest(uParam0->f_5, bVar3))
				{
					func_4783(uParam0, bVar3);
				}
				bVar3++;
			}
			func_4782(uParam0);
			break;
	}
	__LIB_9__::func_677(uParam1);
	iVar4 = 0;
	while (iVar4 < 8)
	{
		sVar5 = __LIB_31__::func_254(iVar4, uParam0, iParam4);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar5))
		{
			STREAMING::REMOVE_ANIM_DICT(sVar5);
		}
		iVar4++;
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam1->f_8))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(uParam1->f_8, false);
	}
	if (iParam4 == 1)
	{
		STREAMING::REMOVE_NAMED_PTFX_ASSET("scr_sec");
	}
	else
	{
		STREAMING::REMOVE_NAMED_PTFX_ASSET("scr_ba_club");
	}
	Var6.f_1 = -1;
	Var6.f_2 = -1;
	Var6.f_3 = 5;
	Var6.f_5 = -1;
	Var6.f_7 = -1;
	Var6.f_9 = -99;
	*uParam1 = { Var6 };
	if (bParam3)
	{
		__LIB_1__::func_289(uParam1, 14);
	}
	else
	{
		__LIB_1__::func_289(uParam1, 2);
	}
	__LIB_10__::func_611(uParam1);
}

void func_4782(var uParam0)//Position - 0x17FE81
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var4;
	iVar0 = 4;
	iVar1 = iVar0;
	iVar2 = NETWORK::NET_TO_ENT(uParam0->f_16[iVar1]);
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2) || NETWORK::NETWORK_IS_NETWORK_ID_REMOTELY_CONTROLLED(uParam0->f_16[iVar1]))
	{
		return;
	}
	func_36(iVar0, &Var3, &Var4, uParam0);
	ENTITY::SET_ENTITY_COORDS(iVar2, Var3, true, false, false, true);
	ENTITY::SET_ENTITY_ROTATION(iVar2, Var4, 2, false);
}

void func_4783(var uParam0, bool bParam1)//Position - 0x17FEE3
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var4;
	iVar0 = __LIB_9__::func_614(bParam1);
	if (iVar0 == -1)
	{
		return;
	}
	iVar1 = iVar0;
	iVar2 = NETWORK::NET_TO_ENT(uParam0->f_16[iVar1]);
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2) || NETWORK::NETWORK_IS_NETWORK_ID_REMOTELY_CONTROLLED(uParam0->f_16[iVar1]))
	{
		return;
	}
	func_36(iVar0, &Var3, &Var4, uParam0);
	ENTITY::SET_ENTITY_COORDS(iVar2, Var3, true, false, false, true);
	ENTITY::SET_ENTITY_ROTATION(iVar2, Var4, 2, false);
	__LIB_10__::func_603(uParam0, iVar0);
}

void func_4794()//Position - 0x180161
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (BitTest(Global_2787913, 0) && !BitTest(Global_2787913, 2))
	{
		if (!__LIB_0__::func_864(&(Local_114.f_838)))
		{
			__LIB_0__::func_795(&(Local_114.f_838), 0, 0);
		}
		else if (__LIB_0__::func_937(&(Local_114.f_838), 1000, 0))
		{
			iVar0 = Global_262145.f_26634 /* Tunable: -76677190 */;
			if (__LIB_0__::func_112())
			{
				__LIB_3__::func_407(joaat("SERVICE_SPEND_ARENA_SPECTATOR_BOX"), iVar0, &iVar1, 0, 0, 0);
				Global_4534105[iVar1 /*85*/] = 2;
			}
			else
			{
				MONEY::NETWORK_SPEND_ARENA_SPECTATOR_BOX(iVar0, 2, false, true);
			}
			MISC::SET_BIT(&Global_2787913, 2);
		}
	}
	else if (__LIB_0__::func_864(&(Local_114.f_838)))
	{
		__LIB_0__::func_794(&(Local_114.f_838));
	}
	if (BitTest(Global_2787913, 1) && !BitTest(Global_2787913, 3))
	{
		if (!__LIB_0__::func_864(&(Local_114.f_840)))
		{
			__LIB_0__::func_795(&(Local_114.f_840), 0, 0);
		}
		else if (__LIB_0__::func_937(&(Local_114.f_840), 1000, 0))
		{
			iVar2 = Global_262145.f_26633 /* Tunable: -887378230 */;
			if (__LIB_0__::func_112())
			{
				__LIB_3__::func_407(joaat("SERVICE_SPEND_ARENA_SPECTATOR_BOX"), iVar2, &iVar3, 0, 0, 0);
				Global_4534105[iVar3 /*85*/] = 1;
			}
			else
			{
				MONEY::NETWORK_SPEND_ARENA_SPECTATOR_BOX(iVar2, 1, false, true);
			}
			MISC::SET_BIT(&Global_2787913, 3);
		}
	}
	else if (__LIB_0__::func_864(&(Local_114.f_840)))
	{
		__LIB_0__::func_794(&(Local_114.f_840));
	}
}

void func_4806()//Position - 0x181060
{
	if (!__LIB_18__::func_711() && !func_5250())
	{
		switch (Local_114.f_1317.f_99)
		{
			case 0:
				func_5239(&(Local_112.f_1), &(Local_114.f_1317));
				if (__LIB_0__::func_701(&(Local_114.f_1317)))
				{
					func_5237(&(Local_114.f_1317));
					if (__LIB_0__::func_937(&(Local_114.f_1317.f_73), 100, 0))
					{
						if (func_5235(&(Local_112.f_1), Local_114.f_1317.f_7) == PLAYER::PLAYER_ID())
						{
							if (func_5234())
							{
								func_5233(&(Local_114.f_1317), 20);
							}
							else if (func_5232(&(Local_114.f_1317)))
							{
								func_5233(&(Local_114.f_1317), 16);
							}
							else
							{
								func_5231(&(Local_114.f_1317), 1);
								func_5230(PLAYER::PLAYER_ID(), 1);
								func_5233(&(Local_114.f_1317), 1);
							}
						}
						else if (func_5235(&(Local_112.f_1), Local_114.f_1317.f_7) == __LIB_0__::func_162())
						{
						}
						else
						{
							func_5233(&(Local_114.f_1317), 15);
							MISC::SET_BIT(&(Local_114.f_1317.f_1), 15);
						}
						__LIB_0__::func_794(&(Local_114.f_1317.f_73));
					}
				}
				break;
			case 1:
				if (__LIB_0__::func_937(&(Local_114.f_1317.f_73), 100, 0))
				{
					if (func_5229(&(Local_112.f_1)) == PLAYER::PLAYER_ID())
					{
						func_5233(&(Local_114.f_1317), 2);
					}
					else if (func_5229(&(Local_112.f_1)) == __LIB_0__::func_162())
					{
					}
					else if (func_5228(&(Local_114.f_1317)))
					{
						func_5233(&(Local_114.f_1317), 17);
						MISC::SET_BIT(&(Local_114.f_1317.f_1), 15);
					}
					else
					{
						func_5233(&(Local_114.f_1317), 15);
						MISC::SET_BIT(&(Local_114.f_1317.f_1), 15);
					}
					__LIB_0__::func_794(&(Local_114.f_1317.f_73));
				}
				break;
			case 2:
				func_5227(&(Local_114.f_1317));
				if (__LIB_7__::func_700(&(Local_114.f_1317)))
				{
					func_5233(&(Local_114.f_1317), 3);
				}
				else if (__LIB_39__::func_525(&(Local_114.f_1317)))
				{
					func_5233(&(Local_114.f_1317), 15);
					MISC::SET_BIT(&(Local_114.f_1317.f_1), 15);
				}
				break;
			case 3:
				func_5221(&(Local_112.f_1), &(Local_114.f_1317), 0);
				if (__LIB_25__::func_921(&(Local_114.f_1317)))
				{
					func_5233(&(Local_114.f_1317), 4);
				}
				break;
			case 4:
				func_5219(&(Local_114.f_1317), 1);
				func_5218(PLAYER::PLAYER_ID(), 1);
				if (!__LIB_28__::func_703())
				{
					func_5233(&(Local_114.f_1317), 7);
				}
				else
				{
					__LIB_34__::func_376(&(Local_114.f_1317.f_103));
					func_5233(&(Local_114.f_1317), 5);
				}
				break;
			case 5:
				if (__LIB_0__::func_937(&(Local_114.f_1317.f_75), 100, 0))
				{
					func_5233(&(Local_114.f_1317), 7);
					__LIB_0__::func_794(&(Local_114.f_1317.f_75));
				}
				break;
			case 7:
				func_5221(&(Local_112.f_1), &(Local_114.f_1317), 0);
				if (__LIB_16__::func_175(&(Local_114.f_1317)))
				{
					func_5233(&(Local_114.f_1317), 6);
				}
				break;
			case 6:
				func_5192(&(Local_112.f_1), &(Local_114.f_1317), 0);
				func_5233(&(Local_114.f_1317), 8);
				break;
			case 8:
				func_5188(&(Local_114.f_1317), 1);
				if (func_5187(&(Local_114.f_1317)))
				{
					func_5233(&(Local_114.f_1317), 9);
				}
				break;
			case 9:
				func_5186(&(Local_114.f_1317));
				if (func_5185(&(Local_114.f_1317)))
				{
					func_5233(&(Local_114.f_1317), 10);
				}
				break;
			case 10:
				func_5184(PLAYER::PLAYER_ID());
				if (func_5183(&(Local_112.f_1)))
				{
					func_5233(&(Local_114.f_1317), 11);
				}
				if (__LIB_0__::func_937(&(Local_114.f_1317.f_83), 8000, 0))
				{
					func_5233(&(Local_114.f_1317), 11);
					MISC::SET_BIT(&(Local_114.f_1317.f_1), 24);
					__LIB_0__::func_794(&(Local_114.f_1317.f_83));
				}
				break;
			case 11:
				func_5182(&(Local_114.f_1317));
				if (func_5181(&(Local_114.f_1317)))
				{
					func_5233(&(Local_114.f_1317), 12);
				}
				break;
			case 12:
				func_5172(&(Local_114.f_1317), 0, 0, 1);
				if (__LIB_15__::func_293(&(Local_114.f_1317)))
				{
					func_5164(&(Local_114.f_1317), func_5168(&(Local_112.f_1), &(Local_114.f_1317), 0), 0);
					func_5233(&(Local_114.f_1317), 13);
				}
				break;
			case 13:
				func_5188(&(Local_114.f_1317), 0);
				if (!func_5187(&(Local_114.f_1317)))
				{
					__LIB_6__::func_410(PLAYER::PLAYER_ID(), 0, 524544, 0);
					func_5233(&(Local_114.f_1317), 14);
				}
				break;
			case 14:
				func_5162(&(Local_114.f_1317));
				if (func_5161(&(Local_114.f_1317)))
				{
					__LIB_2__::func_428(74, 1, -1);
					__LIB_13__::func_366();
					func_5233(&(Local_114.f_1317), 15);
					__LIB_0__::func_795(&(Local_114.f_1317.f_77), 0, 0);
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
					{
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
						{
							ENTITY::SET_ENTITY_ALPHA(PLAYER::PLAYER_PED_ID(), 255, false);
						}
					}
				}
				break;
			case 15:
				func_5154(&(Local_114.f_1317), 0);
				func_5233(&(Local_114.f_1317), 0);
				break;
			case 16:
				func_5221(&(Local_112.f_1), &(Local_114.f_1317), 1);
				if (func_5153(&(Local_114.f_1317)))
				{
					if (__LIB_11__::func_405(&(Local_112.f_1)) && !func_5181(&(Local_114.f_1317)))
					{
						func_5233(&(Local_114.f_1317), 17);
					}
					else
					{
						__LIB_6__::func_410(PLAYER::PLAYER_ID(), 1, 0, 0);
						MISC::CLEAR_BIT(&(Local_114.f_1317), 2);
						func_5233(&(Local_114.f_1317), 18);
					}
				}
				break;
			case 17:
				if (func_5228(&(Local_114.f_1317)))
				{
					func_5231(&(Local_114.f_1317), 0);
					func_5230(PLAYER::PLAYER_ID(), 0);
					MISC::SET_BIT(&(Local_114.f_1317), 25);
					MISC::CLEAR_BIT(&(Local_114.f_1317), 29);
				}
				func_5151(&(Local_112.f_1), &(Local_114.f_1317));
				if (func_5150(&(Local_114.f_1317)))
				{
					MISC::CLEAR_BIT(&(Local_114.f_1317), 2);
					func_5164(&(Local_114.f_1317), "SPECTATOR_EXIT", 0);
					func_5233(&(Local_114.f_1317), 19);
				}
				func_5149(&(Local_114.f_1317));
				if (func_5181(&(Local_114.f_1317)))
				{
					func_5148(&(Local_114.f_1317));
					func_5164(&(Local_114.f_1317), func_5168(&(Local_112.f_1), &(Local_114.f_1317), 1), 0);
					func_5147(&(Local_114.f_1317), 0);
					__LIB_6__::func_410(PLAYER::PLAYER_ID(), 1, 0, 0);
					func_5233(&(Local_114.f_1317), 18);
				}
				else if (!__LIB_11__::func_405(&(Local_112.f_1)))
				{
					func_5148(&(Local_114.f_1317));
					__LIB_6__::func_410(PLAYER::PLAYER_ID(), 1, 0, 0);
					func_5233(&(Local_114.f_1317), 18);
				}
				break;
			case 18:
				func_5149(&(Local_114.f_1317));
				func_5142(&(Local_112.f_1), &(Local_114.f_1317));
				if (__LIB_0__::func_701(&(Local_114.f_1317)))
				{
					MISC::CLEAR_BIT(&(Local_114.f_1317), 14);
					func_5233(&(Local_114.f_1317), 0);
				}
				if (func_5150(&(Local_114.f_1317)))
				{
					func_5164(&(Local_114.f_1317), "SPECTATOR_EXIT", 0);
					func_5233(&(Local_114.f_1317), 19);
				}
				if (func_5141(&(Local_112.f_1), &(Local_114.f_1317)))
				{
					func_5148(&(Local_114.f_1317));
					func_5233(&(Local_114.f_1317), 17);
				}
				break;
			case 19:
				func_5140(&(Local_114.f_1317));
				if (func_5139(&(Local_114.f_1317)))
				{
					func_5136(&(Local_114.f_1317));
					func_5148(&(Local_114.f_1317));
					func_5233(&(Local_114.f_1317), 0);
				}
				break;
			case 20:
				func_5221(&(Local_112.f_1), &(Local_114.f_1317), 1);
				if (func_5153(&(Local_114.f_1317)))
				{
					func_5233(&(Local_114.f_1317), 21);
					Global_2725431 = 1;
				}
				break;
			case 21:
				func_5127(&(Local_114.f_1317));
				if (__LIB_9__::func_370(&(Local_114.f_1317)) || BitTest(Global_1965532, 3))
				{
					func_5164(&(Local_114.f_1317), "SPECTATOR_EXIT", 0);
					func_5233(&(Local_114.f_1317), 22);
					Global_2725431 = 0;
				}
				break;
			case 22:
				func_5140(&(Local_114.f_1317));
				if (func_5139(&(Local_114.f_1317)))
				{
					func_5154(&(Local_114.f_1317), 0);
					func_5233(&(Local_114.f_1317), 0);
				}
				break;
		}
		if (Local_114.f_1317.f_23)
		{
			if (!Local_114.f_1317.f_24)
			{
				func_5233(&(Local_114.f_1317), 15);
				Local_114.f_1317.f_24 = 1;
			}
		}
		func_5109(&(Local_112.f_1), &(Local_114.f_1317));
		func_5103(&(Local_112.f_1), &(Local_114.f_1317));
		func_4859(&(Local_114.f_1317), 0);
		func_4859(&Global_2788057, 1);
		func_4854(&(Local_112.f_1));
		func_4852(&(Local_112.f_1));
		func_4849(&(Local_112.f_1));
		func_4820(&(Local_112.f_1), &(Local_114.f_1317));
		func_4817(&(Local_114.f_1317));
		func_4812(&(Local_114.f_1317));
		func_4807(&(Local_114.f_1317), 0);
	}
}

void func_4807(int* iParam0, bool bParam1)//Position - 0x181903
{
	switch (iParam0->f_104)
	{
		case 1:
			if (__LIB_3__::func_302(&(iParam0->f_17), joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_SPEND"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), joaat("SERVICE_SPEND_SPIN_THE_WHEEL_PAYMENT"), Global_262145.f_24098 /* Tunable: AW_ARENA_WAR_WHEEL_COST */, 4, 3))
			{
				__LIB_25__::func_281(iParam0, 2);
			}
			else
			{
				__LIB_25__::func_281(iParam0, 3);
				iParam0->f_107 = NETWORK::GET_NETWORK_TIME();
				if (iParam0->f_17 != -1)
				{
					__LIB_1__::func_34(iParam0->f_17);
				}
			}
			break;
		case 2:
			if (__LIB_2__::func_835(iParam0->f_17))
			{
				if (__LIB_2__::func_834(iParam0->f_17) == 2)
				{
					__LIB_25__::func_281(iParam0, 4);
					NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(__LIB_1__::func_818(iParam0->f_17));
					MONEY::NETWORK_SPEND_SPIN_THE_WHEEL_PAYMENT(Global_262145.f_24098 /* Tunable: AW_ARENA_WAR_WHEEL_COST */, 0, true);
					if (iParam0->f_17 != -1)
					{
						__LIB_1__::func_34(iParam0->f_17);
					}
				}
				else
				{
					__LIB_25__::func_281(iParam0, 3);
					iParam0->f_107 = NETWORK::GET_NETWORK_TIME();
					if (iParam0->f_17 != -1)
					{
						__LIB_1__::func_34(iParam0->f_17);
					}
				}
			}
			break;
		case 3:
			if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iParam0->f_107)) > 5000)
			{
				iParam0->f_18++;
				if (iParam0->f_18 > 5)
				{
					__LIB_25__::func_281(iParam0, 4);
					iParam0->f_26 = 1;
				}
				else
				{
					__LIB_25__::func_281(iParam0, 1);
				}
			}
			break;
		case 4:
			if (iParam0->f_26)
			{
			}
			else
			{
				if (iParam0->f_27)
				{
					func_5172(iParam0, bParam1, 1, 0);
				}
				Global_2787916 = 0;
			}
			if (BitTest(iParam0->f_1, 13))
			{
				MISC::SET_BIT(&(iParam0->f_2), 0);
				MISC::SET_BIT(&(iParam0->f_1), 29);
				MISC::CLEAR_BIT(&(iParam0->f_1), 13);
			}
			__LIB_25__::func_281(iParam0, 0);
			iParam0->f_26 = 0;
			iParam0->f_17 = -1;
			iParam0->f_18 = 0;
			iParam0->f_27 = 0;
			break;
	}
}

void func_4812(int* iParam0)//Position - 0x181B1F
{
	char[] cVar0[8];
	int iVar1;
	if (iParam0->f_99 == 17 || iParam0->f_99 == 18)
	{
		if (iParam0->f_99 == 18)
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), &(iParam0->f_45), "BASE", 3) && !func_4816(iParam0))
			{
				if (iParam0->f_12 == 0)
				{
					iParam0->f_12 = MISC::GET_RANDOM_INT_IN_RANGE(2000, 8001);
					__LIB_0__::func_795(&(iParam0->f_85), 0, 0);
				}
				if (__LIB_0__::func_864(&(iParam0->f_85)) && __LIB_0__::func_937(&(iParam0->f_85), iParam0->f_12, 0))
				{
					cVar0 = func_4815();
					func_5164(iParam0, cVar0, 0);
					func_5147(iParam0, 1);
				}
			}
			else
			{
				func_5147(iParam0, 1);
			}
		}
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), &(iParam0->f_45), "IDLE_A", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), &(iParam0->f_45), "IDLE_B", 3))
		{
			iVar1 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(iParam0->f_6);
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar1) || PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar1) >= 0.96f)
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iParam0->f_6))
				{
					PED::DETACH_SYNCHRONIZED_SCENE(iParam0->f_6);
					iParam0->f_6 = -1;
				}
				func_5164(iParam0, "BASE", 1);
			}
		}
	}
	else if (iParam0->f_99 == 21)
	{
		func_4813(iParam0);
	}
	else
	{
		func_5147(iParam0, 1);
	}
}

void func_4813(int* iParam0)//Position - 0x181C64
{
	char[] cVar0[8];
	int iVar1;
	if ((((ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), &(iParam0->f_45), "BASE", 3) && !BitTest(iParam0->f_1, 5)) && !__LIB_0__::func_93()) && !__LIB_6__::func_180()) && !Global_2789734)
	{
		if (iParam0->f_12 == 0)
		{
			iParam0->f_12 = MISC::GET_RANDOM_INT_IN_RANGE(2000, 8001);
			__LIB_0__::func_795(&(iParam0->f_85), 0, 0);
		}
		if (__LIB_0__::func_864(&(iParam0->f_85)) && __LIB_0__::func_937(&(iParam0->f_85), iParam0->f_12, 0))
		{
			cVar0 = func_4815();
			func_5164(iParam0, cVar0, 0);
			func_5147(iParam0, 1);
		}
	}
	else
	{
		func_5147(iParam0, 1);
	}
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), &(iParam0->f_45), "IDLE_A", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), &(iParam0->f_45), "IDLE_B", 3))
	{
		iVar1 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(iParam0->f_6);
		if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar1) || PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar1) >= 0.96f)
		{
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iParam0->f_6))
			{
				PED::DETACH_SYNCHRONIZED_SCENE(iParam0->f_6);
				iParam0->f_6 = -1;
			}
			func_5164(iParam0, "BASE", 1);
		}
	}
}

char* func_4815()//Position - 0x181D9A
{
	int iVar0;
	char* sVar1;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
	sVar1 = "IDLE_A";
	if (iVar0 == 1)
	{
		sVar1 = "IDLE_B";
	}
	return sVar1;
}

int func_4816(var uParam0)//Position - 0x181DC0
{
	if (((((ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), &(uParam0->f_45), "WIN_1", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), &(uParam0->f_45), "WIN_2", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), &(uParam0->f_45), "WIN_3", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), &(uParam0->f_45), "LOSE_1", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), &(uParam0->f_45), "LOSE_2", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), &(uParam0->f_45), "LOSE_3", 3))
	{
		return 1;
	}
	return 0;
}

void func_4817(var uParam0)//Position - 0x181E72
{
	if (uParam0->f_99 >= 2 && uParam0->f_99 < 12)
	{
		if (!BitTest(uParam0->f_1, 12))
		{
			if (Global_1574964)
			{
				Global_2787916 = 1;
				MISC::SET_BIT(&(uParam0->f_1), 12);
			}
		}
	}
	if (uParam0->f_21)
	{
		if (__LIB_28__::func_693())
		{
			if (!BitTest(uParam0->f_1, 11))
			{
				if (!BitTest(uParam0->f_1, 10))
				{
					__LIB_0__::func_795(&(uParam0->f_81), 0, 0);
					MISC::SET_BIT(&(uParam0->f_1), 10);
				}
				else if (__LIB_0__::func_864(&(uParam0->f_81)))
				{
					MISC::SET_BIT(&(uParam0->f_1), 13);
					if (__LIB_0__::func_937(&(uParam0->f_81), 15000, 0))
					{
						func_4818(uParam0, 0);
						__LIB_0__::func_794(&(uParam0->f_81));
						MISC::CLEAR_BIT(&(uParam0->f_1), 16);
						MISC::CLEAR_BIT(&(uParam0->f_1), 10);
						MISC::SET_BIT(&(uParam0->f_1), 11);
					}
					if (Global_1574964)
					{
						Global_2787916 = 1;
						__LIB_0__::func_794(&(uParam0->f_81));
						MISC::CLEAR_BIT(&(uParam0->f_1), 16);
						MISC::CLEAR_BIT(&(uParam0->f_1), 10);
						MISC::SET_BIT(&(uParam0->f_1), 11);
					}
				}
			}
		}
		else
		{
			if (BitTest(uParam0->f_1, 13) && !BitTest(uParam0->f_1, 10))
			{
				HUD::USE_FAKE_MP_CASH(false);
				MISC::CLEAR_BIT(&(uParam0->f_1), 13);
				uParam0->f_21 = 0;
			}
			if (BitTest(uParam0->f_1, 10))
			{
				func_4818(uParam0, 0);
				__LIB_0__::func_794(&(uParam0->f_81));
				MISC::CLEAR_BIT(&(uParam0->f_1), 16);
				MISC::CLEAR_BIT(&(uParam0->f_1), 10);
				if (!__LIB_0__::func_112())
				{
					if (BitTest(uParam0->f_1, 13))
					{
						MISC::SET_BIT(&(uParam0->f_2), 0);
						MISC::SET_BIT(&(uParam0->f_1), 29);
						MISC::CLEAR_BIT(&(uParam0->f_1), 13);
					}
				}
				uParam0->f_21 = 0;
			}
			if (BitTest(uParam0->f_1, 11))
			{
				MISC::CLEAR_BIT(&(uParam0->f_1), 11);
			}
		}
	}
}

void func_4818(var uParam0, int iParam1)//Position - 0x182011
{
	if (BitTest(uParam0->f_1, 16))
	{
		return;
	}
	if (__LIB_0__::func_112())
	{
		__LIB_25__::func_281(uParam0, 1);
		uParam0->f_27 = iParam1;
	}
	else
	{
		MONEY::NETWORK_SPEND_SPIN_THE_WHEEL_PAYMENT(Global_262145.f_24098 /* Tunable: AW_ARENA_WAR_WHEEL_COST */, 0, true);
		Global_2787916 = 0;
	}
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(4);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(5);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(3);
}

void func_4820(int* iParam0, int* iParam1)//Position - 0x18209E
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (!BitTest(*iParam1, 13))
		{
			if (__LIB_11__::func_405(iParam0))
			{
				if (!func_5183(iParam0))
				{
					if (func_5229(iParam0) != __LIB_0__::func_162())
					{
						if (BitTest(Global_1853348[iParam0->f_3 /*834*/].f_267.f_353.f_2, 22))
						{
							MISC::SET_BIT(iParam0, 5);
						}
					}
				}
				else if (BitTest(*iParam1, 12))
				{
					if (__LIB_0__::func_864(&(iParam1->f_71)) && __LIB_0__::func_937(&(iParam1->f_71), 3000, 0))
					{
						MISC::CLEAR_BIT(iParam0, 5);
						MISC::SET_BIT(iParam1, 13);
					}
				}
			}
			else if (BitTest(*iParam0, 5))
			{
				MISC::CLEAR_BIT(iParam0, 5);
			}
		}
		else if (func_5229(iParam0) != __LIB_0__::func_162())
		{
			if (!func_4848(iParam0->f_3))
			{
				MISC::CLEAR_BIT(iParam1, 13);
			}
		}
		else
		{
			MISC::CLEAR_BIT(iParam1, 13);
		}
	}
	if (__LIB_11__::func_405(iParam0))
	{
		if (!BitTest(*iParam1, 11) && !BitTest(*iParam1, 12))
		{
			if (func_5183(iParam0))
			{
				if ((__LIB_0__::func_864(&(iParam1->f_91)) && __LIB_0__::func_937(&(iParam1->f_91), 5000, 0)) || !__LIB_0__::func_864(&(iParam1->f_91)))
				{
					__LIB_0__::func_794(&(iParam1->f_91));
					func_4823(1, 23, 0, 0, 0, 0, 0);
					MISC::SET_BIT(iParam1, 11);
				}
			}
		}
	}
	if (BitTest(*iParam1, 12))
	{
		if (__LIB_0__::func_864(&(iParam1->f_71)))
		{
			if (__LIB_0__::func_937(&(iParam1->f_71), 10000, 0))
			{
				if (func_5229(iParam0) == PLAYER::PLAYER_ID() || func_5232(iParam1))
				{
					MISC::SET_BIT(iParam1, 14);
				}
				__LIB_0__::func_795(&(iParam1->f_91), 0, 0);
				MISC::CLEAR_BIT(iParam1, 12);
				__LIB_0__::func_794(&(iParam1->f_71));
			}
			else if (__LIB_0__::func_937(&(iParam1->f_71), 8500, 0) && !BitTest(*iParam1, 30))
			{
				__LIB_34__::func_379(iParam0->f_1, 0);
				MISC::SET_BIT(iParam1, 30);
			}
		}
	}
}

void func_4823(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x1823C3
{
	int iVar0;
	if (bParam5)
	{
	}
	if (iParam0 == 0)
	{
		if (!BitTest(Global_1965625, bParam1) || bParam5)
		{
			iVar0 = 1;
			__LIB_18__::func_738(bParam1);
		}
	}
	else if (iParam0 == 1)
	{
		if (((!__LIB_18__::func_737(bParam1) && !__LIB_18__::func_736(bParam1)) && Global_1965847 != bParam1) || bParam5)
		{
			iVar0 = 1;
			__LIB_26__::func_450(bParam1, bParam2, bParam3, bParam4, 0);
			if (bParam6)
			{
				__LIB_18__::func_354(0, bParam1);
			}
		}
	}
	else if (iParam0 == 2)
	{
		if (((!__LIB_18__::func_735(bParam1) && !__LIB_18__::func_734(bParam1)) && Global_1965848 != bParam1) || bParam5)
		{
			if (__LIB_19__::func_7())
			{
				iVar0 = 1;
				__LIB_23__::func_510(bParam1, bParam2, bParam3, bParam4, 0);
				if (bParam6)
				{
					__LIB_18__::func_354(1, bParam1);
				}
			}
		}
	}
	if (iVar0 || bParam5)
	{
		func_4824(iParam0, bParam1, bParam2, bParam3, bParam4, bParam6);
	}
}

void func_4824(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x1824B4
{
	struct<8> Var0;
	int iVar1;
	Var0.f_0 = 196055696;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam0;
	Var0.f_3 = bParam1;
	Var0.f_4 = bParam2;
	Var0.f_5 = bParam3;
	Var0.f_6 = bParam4;
	Var0.f_7 = bParam5;
	iVar1 = __LIB_3__::func_384(1, 0);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 8, iVar1);
	}
}

int func_4848(bool bParam0)//Position - 0x182ADF
{
	if (bParam0 == __LIB_0__::func_162())
	{
		return 0;
	}
	return BitTest(Global_1853348[bParam0 /*834*/].f_267.f_353.f_2, 17);
}

void func_4849(var uParam0)//Position - 0x182B08
{
	int iVar0;
	int iVar1;
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	if (uParam0->f_2 == -1)
	{
		if (__LIB_11__::func_405(uParam0))
		{
			iVar0 = func_4851(uParam0->f_3);
			if (iVar0 != -1)
			{
				uParam0->f_2 = iVar0;
			}
		}
	}
	else if (!__LIB_11__::func_405(uParam0))
	{
		uParam0->f_2 = -1;
	}
	if (uParam0->f_1 == -1)
	{
		if (__LIB_11__::func_405(uParam0))
		{
			iVar1 = func_4850(uParam0->f_3);
			if (iVar1 != -1)
			{
				uParam0->f_1 = iVar1;
			}
		}
	}
	else if (!__LIB_11__::func_405(uParam0))
	{
		uParam0->f_1 = -1;
	}
}

int func_4850(int iParam0)//Position - 0x182B8D
{
	if (iParam0 == __LIB_0__::func_162())
	{
		return -1;
	}
	return Global_1853348[iParam0 /*834*/].f_267.f_353.f_8;
}

int func_4851(int iParam0)//Position - 0x182BB3
{
	if (iParam0 == __LIB_0__::func_162())
	{
		return -1;
	}
	return Global_1853348[iParam0 /*834*/].f_267.f_353.f_7;
}

void func_4852(int* iParam0)//Position - 0x182BD9
{
	int iVar0;
	bool bVar1;
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	if (!__LIB_11__::func_405(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			bVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (bVar1 != __LIB_0__::func_162() && NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(bVar1))
			{
				if (__LIB_1__::func_693(bVar1, 1, 1))
				{
					if (func_5229(iParam0) == __LIB_0__::func_162())
					{
						if (func_4853(bVar1))
						{
							iParam0->f_3 = bVar1;
						}
					}
					else if (func_5229(iParam0) == bVar1)
					{
						if (!func_4853(bVar1))
						{
							iParam0->f_3 = __LIB_0__::func_162();
						}
					}
					if (func_4848(bVar1))
					{
						if (!BitTest(*iParam0, 4))
						{
							MISC::SET_BIT(iParam0, 4);
						}
					}
				}
			}
			iVar0++;
		}
	}
	else if (func_5229(iParam0) != __LIB_0__::func_162())
	{
		if (!func_4848(func_5229(iParam0)))
		{
			MISC::CLEAR_BIT(iParam0, 4);
			iParam0->f_3 = __LIB_0__::func_162();
		}
		else if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(func_5229(iParam0)) || !__LIB_1__::func_693(func_5229(iParam0), 1, 1))
		{
			MISC::CLEAR_BIT(iParam0, 4);
			iParam0->f_3 = __LIB_0__::func_162();
		}
	}
	else
	{
		MISC::CLEAR_BIT(iParam0, 4);
		iParam0->f_3 = __LIB_0__::func_162();
	}
}

int func_4853(bool bParam0)//Position - 0x182CF8
{
	if (bParam0 == __LIB_0__::func_162())
	{
		return 0;
	}
	return BitTest(Global_1853348[bParam0 /*834*/].f_267.f_353.f_2, 16);
}

void func_4854(int* iParam0)//Position - 0x182D21
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (bVar2 != __LIB_0__::func_162() && NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(bVar2))
		{
			if (__LIB_1__::func_693(bVar2, 1, 1))
			{
				iVar1 = 0;
				while (iVar1 < 4)
				{
					if (func_4858(iParam0, iVar1))
					{
						if (func_4857(bVar2, iVar1))
						{
							iVar3 = __LIB_9__::func_614(iVar1);
							if (__LIB_4__::func_891(iVar3))
							{
								MISC::SET_BIT(iParam0, iVar3);
								iParam0->f_4[iVar1] = bVar2;
							}
						}
					}
					else if (!func_4857(iParam0->f_4[iVar1], iVar1))
					{
						iVar4 = __LIB_9__::func_614(iVar1);
						if (__LIB_4__::func_891(iVar4))
						{
							MISC::CLEAR_BIT(iParam0, iVar4);
							iParam0->f_4[iVar1] = __LIB_0__::func_162();
						}
					}
					iVar1++;
				}
			}
		}
		iVar0++;
	}
}

int func_4857(bool bParam0, int iParam1)//Position - 0x182E42
{
	if (bParam0 != __LIB_0__::func_162())
	{
		switch (iParam1)
		{
			case 0:
				return BitTest(Global_1853348[bParam0 /*834*/].f_267.f_353.f_2, 18);
			case 1:
				return BitTest(Global_1853348[bParam0 /*834*/].f_267.f_353.f_2, 19);
			case 2:
				return BitTest(Global_1853348[bParam0 /*834*/].f_267.f_353.f_2, 20);
			case 3:
				return BitTest(Global_1853348[bParam0 /*834*/].f_267.f_353.f_2, 21);
			}
		default:
	}
	return 0;
}

int func_4858(var uParam0, int iParam1)//Position - 0x182ECF
{
	switch (iParam1)
	{
		case 0:
			return !BitTest(*uParam0, 0);
		case 1:
			return !BitTest(*uParam0, 1);
		case 2:
			return !BitTest(*uParam0, 2);
		case 3:
			return !BitTest(*uParam0, 3);
		default:
	}
	return 0;
}

void func_4859(var uParam0, bool bParam1)//Position - 0x182F1B
{
	if (bParam1)
	{
		func_4863(uParam0);
	}
	__LIB_29__::func_975(uParam0);
	if (bParam1)
	{
		if (__LIB_0__::func_864(&(uParam0->f_79)) && __LIB_0__::func_937(&(uParam0->f_79), 15000, 0))
		{
			__LIB_5__::func_829(0);
			__LIB_29__::func_573(0);
			__LIB_0__::func_794(&(uParam0->f_79));
			if (uParam0->f_19)
			{
				MISC::SET_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1), 7);
			}
			else
			{
				MISC::CLEAR_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1), 7);
			}
			uParam0->f_19 = 0;
		}
	}
	else if (__LIB_0__::func_864(&(uParam0->f_79)) && __LIB_0__::func_937(&(uParam0->f_79), 4000, 0))
	{
		__LIB_5__::func_829(0);
		__LIB_29__::func_573(0);
		__LIB_0__::func_794(&(uParam0->f_79));
	}
}

void func_4863(var uParam0)//Position - 0x1830BB
{
	var uVar0;
	if (uParam0->f_13 != -1)
	{
		if (__LIB_0__::func_112())
		{
			__LIB_3__::func_407(joaat("SERVICE_EARN_SPIN_THE_WHEEL_CASH"), uParam0->f_13, &uVar0, 0, 0, 0);
		}
		else
		{
			MONEY::NETWORK_EARN_SPIN_THE_WHEEL_CASH(uParam0->f_13);
		}
		MISC::SET_BIT(&(uParam0->f_1), 9);
		uParam0->f_13 = -1;
	}
	if (uParam0->f_14 != -1)
	{
		if (__LIB_34__::func_377())
		{
			func_4912(4, uParam0->f_14, 0);
		}
		else
		{
			uParam0->f_19 = __LIB_3__::func_131(PLAYER::PLAYER_ID());
			MISC::SET_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1), 7);
			__LIB_43__::func_936(0, PLAYER::PLAYER_PED_ID(), "", joaat("XPTYPE_ACTION"), -294598082, uParam0->f_14, 1, -1, 0, 0, 4000);
			__LIB_0__::func_795(&(uParam0->f_79), 0, 0);
			__LIB_0__::func_151("WS_AP_HELP" /* GXT: Arena Points not awarded. Go to www.arenawar.tv to purchase an Arena Workshop and begin your Career in the Arena War Series. This will allow you to track earned AP to increase your Career sponsorship tier level. RP awarded instead. */, -1);
		}
		uParam0->f_14 = -1;
	}
	if (uParam0->f_15 != -1)
	{
		uParam0->f_19 = __LIB_3__::func_131(PLAYER::PLAYER_ID());
		MISC::SET_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1), 7);
		__LIB_43__::func_936(0, PLAYER::PLAYER_PED_ID(), "", joaat("XPTYPE_ACTION"), -294598082, uParam0->f_15, 1, -1, 0, 0, 4000);
		__LIB_0__::func_795(&(uParam0->f_79), 0, 0);
		uParam0->f_15 = -1;
	}
}

void func_4912(int iParam0, int iParam1, int iParam2)//Position - 0x18522F
{
	if (__LIB_6__::func_87(PLAYER::PLAYER_ID()))
	{
		switch (iParam0)
		{
			case 4:
				func_4916(iParam1, 0);
				break;
			case 0:
				func_4916(iParam1, 0);
				break;
			case 1:
				func_4916(iParam1, 0);
				break;
			case 2:
				func_4916(iParam1, 0);
				break;
			case 3:
				func_4916(iParam1, 0);
				break;
		}
	}
	if (iParam2 > 0)
	{
		func_4913(0, __LIB_18__::func_922(iParam0), joaat("XPTYPE_ACTION"), __LIB_18__::func_921(iParam0), iParam2, 1, -1, 0);
	}
}

var func_4913(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x1852BE
{
	return __LIB_42__::func_942(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, bParam7);
}

void func_4916(int iParam0, bool bParam1)//Position - 0x185397
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<8> Var3;
	int iVar4;
	int iVar5;
	int iVar6;
	iVar0 = __LIB_18__::func_881();
	iVar1 = __LIB_18__::func_880();
	iVar2 = __LIB_19__::func_35(iVar0 + 1);
	if (Global_262145.f_25921 /* Tunable: -148899823 */)
	{
		return;
	}
	Var3 = 3;
	Var3.f_4 = 3;
	__LIB_18__::func_919(&Global_1964893);
	__LIB_18__::func_919(&Var3);
	if (iParam0 < __LIB_0__::func_264(85, 5, -1))
	{
		__LIB_2__::func_428(85, iParam0, -1);
		__LIB_13__::func_369();
	}
	if ((iParam0 + iVar1) >= iVar2)
	{
		iVar4 = (iParam0 + iVar1);
		iVar5 = 1;
		while (iVar4 >= __LIB_19__::func_35((iVar0 + iVar5)))
		{
			iVar4 = (iVar4 - __LIB_19__::func_35((iVar0 + iVar5)));
			iVar5++;
		}
		__LIB_18__::func_918(iVar4);
		__LIB_19__::func_39((iVar5 - 1));
		__LIB_22__::func_414(iParam0);
		iVar6 = 0;
		while (iVar6 < (iVar5 - 1))
		{
			iVar0++;
			func_4955(iVar0, iVar6, &Var3, bParam1);
			iVar6++;
		}
		if (bParam1)
		{
			__LIB_24__::func_42(Var3);
		}
		__LIB_27__::func_273(Var3);
		__LIB_24__::func_224(Var3);
	}
	else
	{
		__LIB_22__::func_409(iParam0);
		__LIB_22__::func_414(iParam0);
	}
}

void func_4955(int iParam0, int iParam1, var uParam2, bool bParam3)//Position - 0x185EA4
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (iParam1 >= 3 && bParam3)
	{
		return;
	}
	if (!bParam3)
	{
		iParam1 = 0;
	}
	iVar0 = __LIB_25__::func_707(iParam0);
	if (__LIB_18__::func_912(iParam0))
	{
		if (iParam0 > 2)
		{
			iVar1 = __LIB_22__::func_139(iParam0);
			(*uParam2)[iParam1] = __LIB_22__::func_320(iParam0);
			__LIB_16__::func_238(__LIB_31__::func_208(iVar1, 0));
			__LIB_30__::func_284((*uParam2)[iParam1], 1);
			__LIB_18__::func_900(1);
			__LIB_22__::func_137();
			__LIB_4__::func_855();
			if (!__LIB_1__::func_676(50, -1))
			{
				__LIB_2__::func_183(50, 1, -1);
				__LIB_13__::func_364();
			}
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				func_4972(iParam0);
				(*uParam2)[iParam1] = -3;
				uParam2->f_4[iParam1] = __LIB_22__::func_136(iParam0);
				__LIB_22__::func_317();
				break;
			case 1:
				iVar2 = __LIB_22__::func_316(iParam0);
				func_4913(0, "ARENA_CAREER_LVL_UP", joaat("XPTYPE_ACTION"), -614941005, iVar2, 1, -1, 0);
				(*uParam2)[iParam1] = -2;
				uParam2->f_4[iParam1] = iVar2;
				__LIB_22__::func_317();
				break;
			case 2:
				(*uParam2)[iParam1] = __LIB_24__::func_342(iVar0);
				__LIB_30__::func_284((*uParam2)[iParam1], 1);
				__LIB_18__::func_896(1);
				__LIB_13__::func_367();
				__LIB_2__::func_428(82, 1, -1);
				__LIB_22__::func_317();
				__LIB_22__::func_135((*uParam2)[iParam1]);
				break;
			case 3:
				(*uParam2)[iParam1] = __LIB_24__::func_342(iVar0);
				__LIB_30__::func_284((*uParam2)[iParam1], 1);
				__LIB_18__::func_895(1);
				__LIB_2__::func_428(82, 1, -1);
				__LIB_13__::func_367();
				__LIB_22__::func_137();
				__LIB_22__::func_135((*uParam2)[iParam1]);
				break;
			}
	}
}

void func_4972(int iParam0)//Position - 0x187C1A
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_22__::func_136(iParam0);
	if (!__LIB_0__::func_112())
	{
		__LIB_22__::func_366(iVar0);
		MONEY::NETWORK_EARN_ARENA_CAREER_PROGRESSION(iVar0, iParam0);
	}
	else
	{
		__LIB_3__::func_407(__LIB_18__::func_899(iParam0), iVar0, &iVar1, 0, 0, 0);
		Global_4534105[iVar1 /*85*/].f_66.f_15 = iParam0;
	}
}

void func_5103(var uParam0, var uParam1)//Position - 0x1902DA
{
	if (uParam1->f_99 >= 5 && uParam1->f_99 <= 15)
	{
		PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 0 /*INPUT_NEXT_CAMERA*/, true);
	}
	if (uParam1->f_99 >= 6 && uParam1->f_99 <= 15)
	{
		if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			if (__LIB_0__::func_1("WS_AP_HELP" /* GXT: Arena Points not awarded. Go to www.arenawar.tv to purchase an Arena Workshop and begin your Career in the Arena War Series. This will allow you to track earned AP to increase your Career sponsorship tier level. RP awarded instead. */))
			{
			}
			else
			{
				HUD::CLEAR_HELP(true);
			}
		}
		__LIB_1__::func_405();
	}
	else if (uParam1->f_99 >= 16 && uParam1->f_99 <= 19)
	{
		if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			if (((((((__LIB_0__::func_1("WS_IC_V_FSPIN" /* GXT: Press ~INPUT_CONTEXT_SECONDARY~ to spin the Arena War Wheel using a free spin.~n~Press ~INPUT_CONTEXT~ to leave the table. */) || __LIB_5__::func_831("WS_IC_V_PAY" /* GXT: Press ~INPUT_CONTEXT_SECONDARY~ to spin the Arena War Wheel for $~1~.~n~Press ~INPUT_CONTEXT~ to leave the table. */, Global_262145.f_24098 /* Tunable: AW_ARENA_WAR_WHEEL_COST */)) || __LIB_5__::func_831("WS_V_INVALID" /* GXT: Come back when you have $~1~ or a free spin.~n~Press ~INPUT_CONTEXT~ to leave the table. */, Global_262145.f_24098 /* Tunable: AW_ARENA_WAR_WHEEL_COST */)) || __LIB_0__::func_1("WS_IC_EXIT" /* GXT: Please wait for the current player to finish their spin of the Arena War Wheel.~n~Press ~INPUT_CONTEXT~ to leave the table. */)) || __LIB_0__::func_1("WS_IC_VIEW" /* GXT: Press ~INPUT_CONTEXT~ to play the Arena War Wheel. */)) || __LIB_5__::func_831("WS_IC_PAY" /* GXT: Press ~INPUT_CONTEXT~ to spin the Arena War Wheel for $~1~. */, Global_262145.f_24098 /* Tunable: AW_ARENA_WAR_WHEEL_COST */)) || __LIB_5__::func_831("WS_INVALID" /* GXT: You need $~1~ or a free spin to play the Arena War Wheel. */, Global_262145.f_24098 /* Tunable: AW_ARENA_WAR_WHEEL_COST */)) || __LIB_0__::func_1("WS_IC_FREESPIN" /* GXT: Press ~INPUT_CONTEXT~ to spin the Arena War Wheel using a free spin. */))
			{
			}
			else
			{
				HUD::CLEAR_HELP(true);
			}
		}
		__LIB_1__::func_405();
		if (!BitTest(uParam1->f_1, 1))
		{
			__LIB_0__::func_671(1);
			MISC::SET_BIT(&(uParam1->f_1), 1);
		}
	}
	else if (uParam1->f_99 >= 20 && uParam1->f_99 <= 22)
	{
		if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			if ((((__LIB_0__::func_1("WS_TAB_TRG" /* GXT: Press ~INPUT_CONTEXT~ to spectate. */) || __LIB_13__::func_291("WS_CTRL1" /* GXT: Press ~INPUT_SCRIPT_RDOWN~ to use Spectator Cam for $~1~.~n~Press ~INPUT_SCRIPT_RLEFT~ to fly a Spectator Drone for $~1~.~n~Press ~INPUT_SCRIPT_PAD_RIGHT~ to leave the table. */, Global_262145.f_26633 /* Tunable: -887378230 */, Global_262145.f_26634 /* Tunable: -76677190 */)) || __LIB_5__::func_831("WS_CTRL2" /* GXT: Press ~INPUT_SCRIPT_RDOWN~ to use Spectator Cam for $~1~.~n~Press ~INPUT_SCRIPT_RLEFT~ to fly a Spectator Drone.~n~Press ~INPUT_SCRIPT_PAD_RIGHT~ to leave the table. */, Global_262145.f_26633 /* Tunable: -887378230 */)) || __LIB_5__::func_831("WS_CTRL3" /* GXT: Press ~INPUT_SCRIPT_RDOWN~ to use Spectator Cam.~n~Press ~INPUT_SCRIPT_RLEFT~ to fly a Spectator Drone for $~1~.~n~Press ~INPUT_SCRIPT_PAD_RIGHT~ to leave the table. */, Global_262145.f_26634 /* Tunable: -76677190 */)) || __LIB_0__::func_1("WS_CTRL4" /* GXT: Press ~INPUT_SCRIPT_RDOWN~ to use Spectator Cam.~n~Press ~INPUT_SCRIPT_RLEFT~ to fly a Spectator Drone.~n~Press ~INPUT_SCRIPT_PAD_RIGHT~ to leave the table. */))
			{
			}
			else
			{
				HUD::CLEAR_HELP(true);
			}
		}
		__LIB_1__::func_405();
	}
	if (func_5229(uParam0) == PLAYER::PLAYER_ID())
	{
		if ((uParam1->f_99 >= 1 && uParam1->f_99 <= 15) || __LIB_0__::func_701(uParam1))
		{
			__LIB_9__::func_371();
			if (!BitTest(uParam1->f_1, 4))
			{
				PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/, true);
				PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/, true);
				MISC::SET_BIT(&(uParam1->f_1), 4);
			}
		}
		else if (BitTest(uParam1->f_1, 4))
		{
			PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/, true);
			PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/, true);
			MISC::CLEAR_BIT(&(uParam1->f_1), 4);
		}
	}
	else if (BitTest(uParam1->f_1, 4))
	{
		PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/, true);
		PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/, true);
		MISC::CLEAR_BIT(&(uParam1->f_1), 4);
	}
	if (!__LIB_28__::func_693() && !func_5104())
	{
		if (uParam1->f_20)
		{
			if (Global_1574965)
			{
				__LIB_6__::func_410(PLAYER::PLAYER_ID(), 1, 0, 0);
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 185, false);
				}
			}
			uParam1->f_20 = 0;
		}
	}
	if (BitTest(uParam1->f_1, 15))
	{
		if (!__LIB_0__::func_864(&(uParam1->f_89)))
		{
			__LIB_0__::func_795(&(uParam1->f_89), 0, 0);
		}
		else if (__LIB_0__::func_937(&(uParam1->f_89), 1000, 0))
		{
			__LIB_0__::func_794(&(uParam1->f_89));
			MISC::CLEAR_BIT(&(uParam1->f_1), 15);
		}
	}
	if (Global_1931426)
	{
		if (!uParam1->f_23)
		{
			uParam1->f_23 = 1;
		}
	}
	else
	{
		if (uParam1->f_23)
		{
			uParam1->f_23 = 0;
		}
		if (uParam1->f_24)
		{
			uParam1->f_24 = 0;
		}
	}
	if (uParam1->f_99 == 21)
	{
		if (BitTest(uParam1->f_1, 1))
		{
			if (__LIB_0__::func_93())
			{
				__LIB_0__::func_671(0);
				MISC::CLEAR_BIT(&(uParam1->f_1), 1);
			}
		}
		else if (!__LIB_0__::func_93())
		{
			__LIB_0__::func_671(1);
			MISC::SET_BIT(&(uParam1->f_1), 1);
		}
	}
	if (__LIB_0__::func_864(&(uParam1->f_77)) && __LIB_0__::func_937(&(uParam1->f_77), Global_262145.f_24099 /* Tunable: AW_ARENA_WAR_WHEEL_COOLDOWN */, 0))
	{
		__LIB_0__::func_794(&(uParam1->f_77));
	}
}

int func_5104()//Position - 0x190658
{
	if (((BitTest(Global_1965531, 6) || BitTest(Global_1965531, 8)) || BitTest(Global_1965531, 7)) || BitTest(Global_1965531, 9))
	{
		return 1;
	}
	return 0;
}

void func_5109(var uParam0, int* iParam1)//Position - 0x1906F8
{
	bool bVar0;
	if (__LIB_28__::func_693())
	{
		if (!BitTest(iParam1->f_1, 3))
		{
			func_5125(iParam1);
			MISC::SET_BIT(&(iParam1->f_1), 3);
		}
		if (__LIB_28__::func_692(iParam1))
		{
			__LIB_0__::func_795(&(iParam1->f_71), 0, 0);
			MISC::SET_BIT(iParam1, 12);
			MISC::CLEAR_BIT(iParam1, 11);
			MISC::CLEAR_BIT(&(iParam1->f_1), 24);
		}
		return;
	}
	switch (iParam1->f_101)
	{
		case 0:
			if (BitTest(iParam1->f_1, 3))
			{
				MISC::CLEAR_BIT(&(iParam1->f_1), 3);
			}
			iParam1->f_106 = GRAPHICS::REQUEST_SCALEFORM_MOVIE_WITH_IGNORE_SUPER_WIDESCREEN("SPIN_THE_WHEEL");
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iParam1->f_106))
			{
				func_5123(iParam1);
				if (func_5122(iParam1))
				{
					GRAPHICS::SET_SCALEFORM_MOVIE_TO_USE_SUPER_LARGE_RT(iParam1->f_106, true);
					__LIB_28__::func_691(iParam1, 1);
				}
			}
			break;
		case 1:
			bVar0 = func_5234();
			__LIB_28__::func_690(iParam1, 1, 16, bVar0);
			if (!bVar0)
			{
				iParam1->f_9 = 0;
				while (iParam1->f_9 < 16)
				{
					__LIB_28__::func_687(iParam1, iParam1->f_9, __LIB_28__::func_689(iParam1->f_9, 0), __LIB_28__::func_688(iParam1->f_9, 0));
					iParam1->f_9++;
				}
			}
			iParam1->f_9 = 0;
			if (!func_5116(iParam1))
			{
				if (uParam0->f_2 != -1)
				{
					iParam1->f_33 = { __LIB_28__::func_685(uParam0->f_1) };
					iParam1->f_16 = __LIB_28__::func_684(uParam0->f_1, 0);
					__LIB_28__::func_682(iParam1, uParam0->f_2, 0, 0f, 0f, __LIB_28__::func_683(uParam0->f_1), &(iParam1->f_33), iParam1->f_16);
					iParam1->f_16 = -1;
					StringCopy(&(iParam1->f_33), "", 24);
				}
			}
			__LIB_28__::func_691(iParam1, 3);
			break;
		case 2:
			__LIB_28__::func_686(iParam1, 0);
			iParam1->f_33 = { __LIB_28__::func_685(uParam0->f_1) };
			iParam1->f_16 = __LIB_28__::func_684(uParam0->f_1, 0);
			__LIB_28__::func_682(iParam1, uParam0->f_2, 5, 7.5f, 6f, __LIB_28__::func_683(uParam0->f_1), &(iParam1->f_33), iParam1->f_16);
			iParam1->f_16 = -1;
			StringCopy(&(iParam1->f_33), "", 24);
			__LIB_0__::func_795(&(iParam1->f_71), 0, 0);
			if (__LIB_28__::func_681(iParam1))
			{
				MISC::SET_BIT(&(iParam1->f_1), 19);
				MISC::CLEAR_BIT(&(iParam1->f_1), 18);
			}
			else
			{
				MISC::SET_BIT(iParam1, 12);
				MISC::CLEAR_BIT(iParam1, 11);
				MISC::CLEAR_BIT(&(iParam1->f_1), 24);
			}
			__LIB_28__::func_691(iParam1, 3);
			break;
		case 3:
			__LIB_28__::func_686(iParam1, 0);
			if (__LIB_28__::func_692(iParam1) || (__LIB_28__::func_681(iParam1) && !iParam1->f_23))
			{
				__LIB_28__::func_691(iParam1, 2);
			}
			break;
	}
}

bool func_5116(int* iParam0)//Position - 0x190D4A
{
	return BitTest(*iParam0, 12);
}

bool func_5122(int* iParam0)//Position - 0x1910E8
{
	return iParam0->f_11 != -1;
}

void func_5123(int* iParam0)//Position - 0x1910F6
{
	if (!HUD::IS_NAMED_RENDERTARGET_REGISTERED("arena_roulette"))
	{
		HUD::REGISTER_NAMED_RENDERTARGET("arena_roulette", false);
		if (!HUD::IS_NAMED_RENDERTARGET_LINKED(joaat("xs_prop_arena_roulette")))
		{
			HUD::LINK_NAMED_RENDERTARGET(joaat("xs_prop_arena_roulette"));
			if (iParam0->f_11 == -1)
			{
				iParam0->f_11 = HUD::GET_NAMED_RENDERTARGET_RENDER_ID("arena_roulette");
			}
		}
	}
}

void func_5125(var uParam0)//Position - 0x191164
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_106))
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_106));
	}
	if (HUD::IS_NAMED_RENDERTARGET_REGISTERED("arena_roulette"))
	{
		HUD::RELEASE_NAMED_RENDERTARGET("arena_roulette");
	}
	uParam0->f_11 = -1;
	uParam0->f_101 = 0;
}

void func_5127(int* iParam0)//Position - 0x1911AD
{
	if ((ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), &(iParam0->f_45), "BASE", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), &(iParam0->f_45), "IDLE_A", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), &(iParam0->f_45), "IDLE_B", 3))
	{
		if (!BitTest(iParam0->f_1, 5))
		{
			if (PAD::HAVE_CONTROLS_CHANGED(2 /*FRONTEND_CONTROL*/))
			{
				HUD::CLEAR_HELP(true);
			}
			if (__LIB_0__::func_93() || Global_2789734)
			{
				if (((__LIB_13__::func_291("WS_CTRL1" /* GXT: Press ~INPUT_SCRIPT_RDOWN~ to use Spectator Cam for $~1~.~n~Press ~INPUT_SCRIPT_RLEFT~ to fly a Spectator Drone for $~1~.~n~Press ~INPUT_SCRIPT_PAD_RIGHT~ to leave the table. */, Global_262145.f_26633 /* Tunable: -887378230 */, Global_262145.f_26634 /* Tunable: -76677190 */) || __LIB_5__::func_831("WS_CTRL2" /* GXT: Press ~INPUT_SCRIPT_RDOWN~ to use Spectator Cam for $~1~.~n~Press ~INPUT_SCRIPT_RLEFT~ to fly a Spectator Drone.~n~Press ~INPUT_SCRIPT_PAD_RIGHT~ to leave the table. */, Global_262145.f_26633 /* Tunable: -887378230 */)) || __LIB_5__::func_831("WS_CTRL3" /* GXT: Press ~INPUT_SCRIPT_RDOWN~ to use Spectator Cam.~n~Press ~INPUT_SCRIPT_RLEFT~ to fly a Spectator Drone for $~1~.~n~Press ~INPUT_SCRIPT_PAD_RIGHT~ to leave the table. */, Global_262145.f_26634 /* Tunable: -76677190 */)) || __LIB_0__::func_1("WS_CTRL4" /* GXT: Press ~INPUT_SCRIPT_RDOWN~ to use Spectator Cam.~n~Press ~INPUT_SCRIPT_RLEFT~ to fly a Spectator Drone.~n~Press ~INPUT_SCRIPT_PAD_RIGHT~ to leave the table. */))
				{
					HUD::CLEAR_HELP(true);
					func_5135(iParam0);
				}
			}
			else
			{
				func_5134(iParam0);
				if (!BitTest(Global_2787913, 2) && !BitTest(Global_2787913, 3))
				{
					__LIB_13__::func_306("WS_CTRL1" /* GXT: Press ~INPUT_SCRIPT_RDOWN~ to use Spectator Cam for $~1~.~n~Press ~INPUT_SCRIPT_RLEFT~ to fly a Spectator Drone for $~1~.~n~Press ~INPUT_SCRIPT_PAD_RIGHT~ to leave the table. */, Global_262145.f_26633 /* Tunable: -887378230 */, Global_262145.f_26634 /* Tunable: -76677190 */);
				}
				else if (BitTest(Global_2787913, 2) && !BitTest(Global_2787913, 3))
				{
					__LIB_5__::func_832("WS_CTRL2" /* GXT: Press ~INPUT_SCRIPT_RDOWN~ to use Spectator Cam for $~1~.~n~Press ~INPUT_SCRIPT_RLEFT~ to fly a Spectator Drone.~n~Press ~INPUT_SCRIPT_PAD_RIGHT~ to leave the table. */, Global_262145.f_26633 /* Tunable: -887378230 */, -1);
				}
				else if (!BitTest(Global_2787913, 2) && BitTest(Global_2787913, 3))
				{
					__LIB_5__::func_832("WS_CTRL3" /* GXT: Press ~INPUT_SCRIPT_RDOWN~ to use Spectator Cam.~n~Press ~INPUT_SCRIPT_RLEFT~ to fly a Spectator Drone for $~1~.~n~Press ~INPUT_SCRIPT_PAD_RIGHT~ to leave the table. */, Global_262145.f_26634 /* Tunable: -76677190 */, -1);
				}
				else
				{
					__LIB_0__::func_151("WS_CTRL4" /* GXT: Press ~INPUT_SCRIPT_RDOWN~ to use Spectator Cam.~n~Press ~INPUT_SCRIPT_RLEFT~ to fly a Spectator Drone.~n~Press ~INPUT_SCRIPT_PAD_RIGHT~ to leave the table. */, -1);
				}
			}
			if ((((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 223 /*INPUT_SCRIPT_RDOWN*/) && !PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 224 /*INPUT_SCRIPT_RLEFT*/)) && !HUD::IS_PAUSE_MENU_ACTIVE()) && !__LIB_0__::func_93()) && !__LIB_6__::func_180())
			{
				if (MONEY::NETWORK_CAN_SPEND_MONEY(5, false, false, true, -1, 0) || BitTest(Global_2787913, 3))
				{
					Global_2789737 = 1;
					Global_2789734 = 1;
					func_5131();
					__LIB_5__::func_938(73, -1);
					__LIB_13__::func_365();
				}
				else if (!BitTest(Global_2787913, 5))
				{
					MISC::SET_BIT(&Global_2787913, 5);
				}
			}
			if ((((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 235 /*INPUT_SCRIPT_PAD_RIGHT*/) && !HUD::IS_PAUSE_MENU_ACTIVE()) && !__LIB_0__::func_93()) && !__LIB_6__::func_180()) && !Global_2789734)
			{
				MISC::SET_BIT(&(iParam0->f_1), 5);
				func_5135(iParam0);
				HUD::CLEAR_HELP(true);
			}
		}
		else if (((__LIB_13__::func_291("WS_CTRL1" /* GXT: Press ~INPUT_SCRIPT_RDOWN~ to use Spectator Cam for $~1~.~n~Press ~INPUT_SCRIPT_RLEFT~ to fly a Spectator Drone for $~1~.~n~Press ~INPUT_SCRIPT_PAD_RIGHT~ to leave the table. */, Global_262145.f_26633 /* Tunable: -887378230 */, Global_262145.f_26634 /* Tunable: -76677190 */) || __LIB_5__::func_831("WS_CTRL2" /* GXT: Press ~INPUT_SCRIPT_RDOWN~ to use Spectator Cam for $~1~.~n~Press ~INPUT_SCRIPT_RLEFT~ to fly a Spectator Drone.~n~Press ~INPUT_SCRIPT_PAD_RIGHT~ to leave the table. */, Global_262145.f_26633 /* Tunable: -887378230 */)) || __LIB_5__::func_831("WS_CTRL3" /* GXT: Press ~INPUT_SCRIPT_RDOWN~ to use Spectator Cam.~n~Press ~INPUT_SCRIPT_RLEFT~ to fly a Spectator Drone for $~1~.~n~Press ~INPUT_SCRIPT_PAD_RIGHT~ to leave the table. */, Global_262145.f_26634 /* Tunable: -76677190 */)) || __LIB_0__::func_1("WS_CTRL4" /* GXT: Press ~INPUT_SCRIPT_RDOWN~ to use Spectator Cam.~n~Press ~INPUT_SCRIPT_RLEFT~ to fly a Spectator Drone.~n~Press ~INPUT_SCRIPT_PAD_RIGHT~ to leave the table. */))
		{
			HUD::CLEAR_HELP(true);
			func_5135(iParam0);
		}
	}
	else if (((__LIB_13__::func_291("WS_CTRL1" /* GXT: Press ~INPUT_SCRIPT_RDOWN~ to use Spectator Cam for $~1~.~n~Press ~INPUT_SCRIPT_RLEFT~ to fly a Spectator Drone for $~1~.~n~Press ~INPUT_SCRIPT_PAD_RIGHT~ to leave the table. */, Global_262145.f_26633 /* Tunable: -887378230 */, Global_262145.f_26634 /* Tunable: -76677190 */) || __LIB_5__::func_831("WS_CTRL2" /* GXT: Press ~INPUT_SCRIPT_RDOWN~ to use Spectator Cam for $~1~.~n~Press ~INPUT_SCRIPT_RLEFT~ to fly a Spectator Drone.~n~Press ~INPUT_SCRIPT_PAD_RIGHT~ to leave the table. */, Global_262145.f_26633 /* Tunable: -887378230 */)) || __LIB_5__::func_831("WS_CTRL3" /* GXT: Press ~INPUT_SCRIPT_RDOWN~ to use Spectator Cam.~n~Press ~INPUT_SCRIPT_RLEFT~ to fly a Spectator Drone for $~1~.~n~Press ~INPUT_SCRIPT_PAD_RIGHT~ to leave the table. */, Global_262145.f_26634 /* Tunable: -76677190 */)) || __LIB_0__::func_1("WS_CTRL4" /* GXT: Press ~INPUT_SCRIPT_RDOWN~ to use Spectator Cam.~n~Press ~INPUT_SCRIPT_RLEFT~ to fly a Spectator Drone.~n~Press ~INPUT_SCRIPT_PAD_RIGHT~ to leave the table. */))
	{
		HUD::CLEAR_HELP(true);
		func_5135(iParam0);
	}
}

void func_5131()//Position - 0x191543
{
	__LIB_9__::func_676(1, 7985);
}

void func_5134(int* iParam0)//Position - 0x191592
{
	if (!BitTest(iParam0->f_1, 31))
	{
		PAD::INIT_PC_SCRIPTED_CONTROLS("ARENA SPECTATOR BOX TABLETS");
		MISC::SET_BIT(&(iParam0->f_1), 31);
	}
}

void func_5135(int* iParam0)//Position - 0x1915B9
{
	if (BitTest(iParam0->f_1, 31))
	{
		PAD::SHUTDOWN_PC_SCRIPTED_CONTROLS();
		MISC::CLEAR_BIT(&(iParam0->f_1), 31);
	}
}

void func_5136(int* iParam0)//Position - 0x1915D9
{
	int iVar0;
	if (BitTest(*iParam0, 3))
	{
		__LIB_6__::func_410(PLAYER::PLAYER_ID(), 1, 0, 0);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 185, false);
		}
		MISC::CLEAR_BIT(iParam0, 3);
	}
	if (BitTest(*iParam0, 4))
	{
		__LIB_3__::func_504();
		__LIB_1__::func_91();
		HUD::THEFEED_SHOW();
		HUD::DISPLAY_RADAR(true);
		PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/, true);
		PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/, true);
		MISC::CLEAR_BIT(iParam0, 4);
	}
	if (BitTest(iParam0->f_1, 1))
	{
		__LIB_0__::func_671(0);
		MISC::CLEAR_BIT(&(iParam0->f_1), 1);
	}
	if (iParam0->f_6 != -1)
	{
		NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(iParam0->f_6);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(iParam0->f_45)))
	{
		STREAMING::REMOVE_ANIM_DICT(&(iParam0->f_45));
		StringCopy(&(iParam0->f_45), "", 32);
	}
	iVar0 = func_5137(iParam0->f_7);
	if (__LIB_4__::func_891(iVar0))
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_353.f_2), iVar0);
	}
	if (iParam0->f_3 != -1)
	{
		__LIB_3__::func_122(&(iParam0->f_3));
	}
	if (iParam0->f_4 != -1)
	{
		__LIB_3__::func_122(&(iParam0->f_4));
	}
	if (iParam0->f_5 != -1)
	{
		__LIB_3__::func_122(&(iParam0->f_5));
	}
	MISC::CLEAR_BIT(iParam0, 29);
	MISC::CLEAR_BIT(iParam0, 25);
	MISC::CLEAR_BIT(iParam0, 26);
	MISC::CLEAR_BIT(iParam0, 27);
	MISC::CLEAR_BIT(iParam0, 28);
	MISC::CLEAR_BIT(iParam0, 7);
	MISC::CLEAR_BIT(iParam0, 8);
	MISC::CLEAR_BIT(iParam0, 1);
}

int func_5137(int iParam0)//Position - 0x191721
{
	switch (iParam0)
	{
		case 0:
			return 18;
		case 1:
			return 19;
		case 2:
			return 20;
		case 3:
			return 21;
		default:
	}
	return -1;
}

bool func_5139(var uParam0)//Position - 0x19176F
{
	return BitTest(*uParam0, 28);
}

void func_5140(int* iParam0)//Position - 0x19177D
{
	int iVar0;
	if (!BitTest(*iParam0, 28))
	{
		iVar0 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(iParam0->f_6);
		if ((!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar0) || PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar0) >= 0.7f) || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("walkinterruptible")))
		{
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iParam0->f_6))
			{
				PED::DETACH_SYNCHRONIZED_SCENE(iParam0->f_6);
				iParam0->f_6 = -1;
			}
			MISC::SET_BIT(iParam0, 28);
		}
	}
}

int func_5141(var uParam0, int* iParam1)//Position - 0x1917E8
{
	if (!__LIB_11__::func_405(uParam0))
	{
		if (!BitTest(*iParam1, 31))
		{
			MISC::SET_BIT(iParam1, 31);
		}
	}
	else if (BitTest(*iParam1, 31))
	{
		return 1;
	}
	return 0;
}

void func_5142(var uParam0, int* iParam1)//Position - 0x19181D
{
	int iVar0;
	if ((!__LIB_11__::func_405(uParam0) && !BitTest(iParam1->f_1, 15)) && ((ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), &(iParam1->f_45), "BASE", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), &(iParam1->f_45), "IDLE_A", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), &(iParam1->f_45), "IDLE_B", 3)))
	{
		if (__LIB_0__::func_1("WS_IC_EXIT" /* GXT: Please wait for the current player to finish their spin of the Arena War Wheel.~n~Press ~INPUT_CONTEXT~ to leave the table. */))
		{
			HUD::CLEAR_HELP(true);
		}
		if (iParam1->f_4 != -1)
		{
			__LIB_3__::func_122(&(iParam1->f_4));
		}
		if (PAD::HAVE_CONTROLS_CHANGED(2 /*FRONTEND_CONTROL*/))
		{
			HUD::CLEAR_HELP(true);
		}
		if (iParam1->f_8 > 0)
		{
			__LIB_0__::func_151("WS_IC_V_FSPIN" /* GXT: Press ~INPUT_CONTEXT_SECONDARY~ to spin the Arena War Wheel using a free spin.~n~Press ~INPUT_CONTEXT~ to leave the table. */, -1);
			MISC::CLEAR_BIT(iParam1, 1);
		}
		else if (MONEY::NETWORK_CAN_SPEND_MONEY(Global_262145.f_24098 /* Tunable: AW_ARENA_WAR_WHEEL_COST */, false, true, false, -1, 0))
		{
			__LIB_5__::func_832("WS_IC_V_PAY" /* GXT: Press ~INPUT_CONTEXT_SECONDARY~ to spin the Arena War Wheel for $~1~.~n~Press ~INPUT_CONTEXT~ to leave the table. */, Global_262145.f_24098 /* Tunable: AW_ARENA_WAR_WHEEL_COST */, -1);
			MISC::CLEAR_BIT(iParam1, 1);
		}
		else
		{
			__LIB_5__::func_832("WS_V_INVALID" /* GXT: Come back when you have $~1~ or a free spin.~n~Press ~INPUT_CONTEXT~ to leave the table. */, Global_262145.f_24098 /* Tunable: AW_ARENA_WAR_WHEEL_COST */, -1);
			MISC::SET_BIT(iParam1, 1);
		}
		if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 52 /*INPUT_CONTEXT_SECONDARY*/) && !BitTest(*iParam1, 1))
		{
			__LIB_1__::func_751();
			__LIB_1__::func_292();
			if ((__LIB_0__::func_1("WS_IC_V_FSPIN" /* GXT: Press ~INPUT_CONTEXT_SECONDARY~ to spin the Arena War Wheel using a free spin.~n~Press ~INPUT_CONTEXT~ to leave the table. */) || __LIB_5__::func_831("WS_IC_V_PAY" /* GXT: Press ~INPUT_CONTEXT_SECONDARY~ to spin the Arena War Wheel for $~1~.~n~Press ~INPUT_CONTEXT~ to leave the table. */, Global_262145.f_24098 /* Tunable: AW_ARENA_WAR_WHEEL_COST */)) || __LIB_5__::func_831("WS_V_INVALID" /* GXT: Come back when you have $~1~ or a free spin.~n~Press ~INPUT_CONTEXT~ to leave the table. */, Global_262145.f_24098 /* Tunable: AW_ARENA_WAR_WHEEL_COST */))
			{
				HUD::CLEAR_HELP(true);
			}
			iVar0 = func_5137(iParam1->f_7);
			if (__LIB_4__::func_891(iVar0))
			{
				MISC::SET_BIT(iParam1, 2);
				MISC::CLEAR_BIT(iParam1, 25);
				MISC::SET_BIT(iParam1, 29);
			}
		}
		else if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 51 /*INPUT_CONTEXT*/))
		{
			__LIB_1__::func_751();
			__LIB_1__::func_292();
			if ((__LIB_0__::func_1("WS_IC_V_FSPIN" /* GXT: Press ~INPUT_CONTEXT_SECONDARY~ to spin the Arena War Wheel using a free spin.~n~Press ~INPUT_CONTEXT~ to leave the table. */) || __LIB_5__::func_831("WS_IC_V_PAY" /* GXT: Press ~INPUT_CONTEXT_SECONDARY~ to spin the Arena War Wheel for $~1~.~n~Press ~INPUT_CONTEXT~ to leave the table. */, Global_262145.f_24098 /* Tunable: AW_ARENA_WAR_WHEEL_COST */)) || __LIB_5__::func_831("WS_V_INVALID" /* GXT: Come back when you have $~1~ or a free spin.~n~Press ~INPUT_CONTEXT~ to leave the table. */, Global_262145.f_24098 /* Tunable: AW_ARENA_WAR_WHEEL_COST */))
			{
				HUD::CLEAR_HELP(true);
			}
			MISC::SET_BIT(iParam1, 27);
		}
	}
	else
	{
		if (iParam1->f_4 != -1)
		{
			__LIB_3__::func_122(&(iParam1->f_4));
		}
		if (((__LIB_0__::func_1("WS_IC_V_FSPIN" /* GXT: Press ~INPUT_CONTEXT_SECONDARY~ to spin the Arena War Wheel using a free spin.~n~Press ~INPUT_CONTEXT~ to leave the table. */) || __LIB_5__::func_831("WS_IC_V_PAY" /* GXT: Press ~INPUT_CONTEXT_SECONDARY~ to spin the Arena War Wheel for $~1~.~n~Press ~INPUT_CONTEXT~ to leave the table. */, Global_262145.f_24098 /* Tunable: AW_ARENA_WAR_WHEEL_COST */)) || __LIB_5__::func_831("WS_V_INVALID" /* GXT: Come back when you have $~1~ or a free spin.~n~Press ~INPUT_CONTEXT~ to leave the table. */, Global_262145.f_24098 /* Tunable: AW_ARENA_WAR_WHEEL_COST */)) || __LIB_0__::func_1("WS_IC_EXIT" /* GXT: Please wait for the current player to finish their spin of the Arena War Wheel.~n~Press ~INPUT_CONTEXT~ to leave the table. */))
		{
			HUD::CLEAR_HELP(true);
		}
	}
}

void func_5147(int* iParam0, bool bParam1)//Position - 0x191AED
{
	if (bParam1)
	{
		if (iParam0->f_12 != 0)
		{
			iParam0->f_12 = 0;
			__LIB_0__::func_794(&(iParam0->f_85));
		}
	}
	else
	{
		iParam0->f_12 = 0;
		__LIB_0__::func_794(&(iParam0->f_85));
	}
}

void func_5148(int* iParam0)//Position - 0x191B1F
{
	MISC::CLEAR_BIT(iParam0, 2);
	MISC::CLEAR_BIT(iParam0, 14);
	MISC::CLEAR_BIT(iParam0, 31);
}

void func_5149(int* iParam0)//Position - 0x191B3E
{
	int iVar0;
	if (!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), &(iParam0->f_45), "BASE", 3))
	{
		iVar0 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(iParam0->f_6);
		if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar0) || PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar0) >= 0.96f)
		{
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iParam0->f_6))
			{
				PED::DETACH_SYNCHRONIZED_SCENE(iParam0->f_6);
				iParam0->f_6 = -1;
			}
			func_5164(iParam0, "BASE", 1);
		}
	}
}

bool func_5150(var uParam0)//Position - 0x191BAA
{
	return BitTest(*uParam0, 27);
}

void func_5151(var uParam0, int* iParam1)//Position - 0x191BB8
{
	if (__LIB_11__::func_405(uParam0) && ((ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), &(iParam1->f_45), "BASE", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), &(iParam1->f_45), "IDLE_A", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), &(iParam1->f_45), "IDLE_B", 3)))
	{
		if ((__LIB_0__::func_1("WS_IC_V_FSPIN" /* GXT: Press ~INPUT_CONTEXT_SECONDARY~ to spin the Arena War Wheel using a free spin.~n~Press ~INPUT_CONTEXT~ to leave the table. */) || __LIB_5__::func_831("WS_IC_V_PAY" /* GXT: Press ~INPUT_CONTEXT_SECONDARY~ to spin the Arena War Wheel for $~1~.~n~Press ~INPUT_CONTEXT~ to leave the table. */, Global_262145.f_24098 /* Tunable: AW_ARENA_WAR_WHEEL_COST */)) || __LIB_5__::func_831("WS_V_INVALID" /* GXT: Come back when you have $~1~ or a free spin.~n~Press ~INPUT_CONTEXT~ to leave the table. */, Global_262145.f_24098 /* Tunable: AW_ARENA_WAR_WHEEL_COST */))
		{
			HUD::CLEAR_HELP(true);
		}
		if (PAD::HAVE_CONTROLS_CHANGED(2 /*FRONTEND_CONTROL*/))
		{
			HUD::CLEAR_HELP(true);
			__LIB_3__::func_122(&(iParam1->f_4));
			iParam1->f_4 = -1;
		}
		if (iParam1->f_4 == -1)
		{
			__LIB_5__::func_569(&(iParam1->f_4), 4, "WS_IC_EXIT" /* GXT: Please wait for the current player to finish their spin of the Arena War Wheel.~n~Press ~INPUT_CONTEXT~ to leave the table. */, 0, 0, 0, 0);
		}
		if (__LIB_3__::func_113(iParam1->f_4, 1))
		{
			if (iParam1->f_4 != -1)
			{
				__LIB_3__::func_122(&(iParam1->f_4));
			}
			MISC::SET_BIT(iParam1, 27);
		}
	}
	else
	{
		if (__LIB_0__::func_1("WS_IC_EXIT" /* GXT: Please wait for the current player to finish their spin of the Arena War Wheel.~n~Press ~INPUT_CONTEXT~ to leave the table. */))
		{
			HUD::CLEAR_HELP(true);
		}
		if (iParam1->f_4 != -1)
		{
			__LIB_3__::func_122(&(iParam1->f_4));
		}
	}
}

bool func_5153(var uParam0)//Position - 0x191CE2
{
	return BitTest(*uParam0, 26);
}

void func_5154(int* iParam0, bool bParam1)//Position - 0x191CF0
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	if (BitTest(*iParam0, 3) && !iParam0->f_20)
	{
		__LIB_6__::func_410(PLAYER::PLAYER_ID(), 1, 0, 0);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 185, false);
		}
		MISC::CLEAR_BIT(iParam0, 3);
	}
	if (BitTest(*iParam0, 4))
	{
		__LIB_3__::func_504();
		__LIB_1__::func_91();
		HUD::THEFEED_SHOW();
		HUD::DISPLAY_RADAR(true);
		PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/, true);
		PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/, true);
		MISC::CLEAR_BIT(iParam0, 4);
	}
	if (BitTest(iParam0->f_1, 1))
	{
		__LIB_0__::func_671(0);
		MISC::CLEAR_BIT(&(iParam0->f_1), 1);
	}
	if (CAM::DOES_CAM_EXIST(iParam0->f_105))
	{
		CAM::SET_CAM_ACTIVE(iParam0->f_105, false);
		CAM::RENDER_SCRIPT_CAMS(false, false, 0, true, false, 0);
		CAM::DESTROY_CAM(iParam0->f_105, false);
	}
	if (iParam0->f_6 != -1)
	{
		NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(iParam0->f_6);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(iParam0->f_45)))
	{
		STREAMING::REMOVE_ANIM_DICT(&(iParam0->f_45));
	}
	iVar0 = func_5137(iParam0->f_7);
	if (__LIB_4__::func_891(iVar0))
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_353.f_2), iVar0);
	}
	func_5231(iParam0, 0);
	func_5230(PLAYER::PLAYER_ID(), 0);
	func_5219(iParam0, 0);
	func_5218(PLAYER::PLAYER_ID(), 0);
	func_5158(-1);
	func_5157(-1);
	Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_353.f_7 = -1;
	MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_353.f_2), 22);
	if (BitTest(iParam0->f_1, 14))
	{
		__LIB_0__::func_795(&(iParam0->f_79), 0, 0);
		MISC::CLEAR_BIT(&(iParam0->f_1), 14);
	}
	if (iParam0->f_3 != -1)
	{
		__LIB_3__::func_122(&(iParam0->f_3));
	}
	if (iParam0->f_4 != -1)
	{
		__LIB_3__::func_122(&(iParam0->f_4));
	}
	if (iParam0->f_5 != -1)
	{
		__LIB_3__::func_122(&(iParam0->f_5));
	}
	if (((((((iParam0->f_102 != 0 && iParam0->f_102 != 1) && iParam0->f_102 != 2) && iParam0->f_102 != 3) && iParam0->f_102 != 6) && iParam0->f_102 != 5) && iParam0->f_102 != 4) || bParam1)
	{
		HUD::USE_FAKE_MP_CASH(false);
	}
	if (((((((((__LIB_0__::func_1("WS_IC_FREESPIN" /* GXT: Press ~INPUT_CONTEXT~ to spin the Arena War Wheel using a free spin. */) || __LIB_5__::func_831("WS_IC_PAY" /* GXT: Press ~INPUT_CONTEXT~ to spin the Arena War Wheel for $~1~. */, Global_262145.f_24098 /* Tunable: AW_ARENA_WAR_WHEEL_COST */)) || __LIB_5__::func_831("WS_INVALID" /* GXT: You need $~1~ or a free spin to play the Arena War Wheel. */, Global_262145.f_24098 /* Tunable: AW_ARENA_WAR_WHEEL_COST */)) || __LIB_0__::func_1("WS_IC_VIEW" /* GXT: Press ~INPUT_CONTEXT~ to play the Arena War Wheel. */)) || __LIB_0__::func_1("WS_IC_EXIT" /* GXT: Please wait for the current player to finish their spin of the Arena War Wheel.~n~Press ~INPUT_CONTEXT~ to leave the table. */)) || __LIB_0__::func_1("WS_IC_V_FSPIN" /* GXT: Press ~INPUT_CONTEXT_SECONDARY~ to spin the Arena War Wheel using a free spin.~n~Press ~INPUT_CONTEXT~ to leave the table. */)) || __LIB_5__::func_831("WS_IC_V_PAY" /* GXT: Press ~INPUT_CONTEXT_SECONDARY~ to spin the Arena War Wheel for $~1~.~n~Press ~INPUT_CONTEXT~ to leave the table. */, Global_262145.f_24098 /* Tunable: AW_ARENA_WAR_WHEEL_COST */)) || __LIB_5__::func_831("WS_V_INVALID" /* GXT: Come back when you have $~1~ or a free spin.~n~Press ~INPUT_CONTEXT~ to leave the table. */, Global_262145.f_24098 /* Tunable: AW_ARENA_WAR_WHEEL_COST */)) || __LIB_0__::func_1("WS_BLOCKED" /* GXT: Unavailable during this event. */)) || __LIB_0__::func_1("WS_TAB_TRG" /* GXT: Press ~INPUT_CONTEXT~ to spectate. */))
	{
		HUD::CLEAR_HELP(true);
	}
	if (((__LIB_13__::func_291("WS_CTRL1" /* GXT: Press ~INPUT_SCRIPT_RDOWN~ to use Spectator Cam for $~1~.~n~Press ~INPUT_SCRIPT_RLEFT~ to fly a Spectator Drone for $~1~.~n~Press ~INPUT_SCRIPT_PAD_RIGHT~ to leave the table. */, Global_262145.f_26633 /* Tunable: -887378230 */, Global_262145.f_26634 /* Tunable: -76677190 */) || __LIB_5__::func_831("WS_CTRL2" /* GXT: Press ~INPUT_SCRIPT_RDOWN~ to use Spectator Cam for $~1~.~n~Press ~INPUT_SCRIPT_RLEFT~ to fly a Spectator Drone.~n~Press ~INPUT_SCRIPT_PAD_RIGHT~ to leave the table. */, Global_262145.f_26633 /* Tunable: -887378230 */)) || __LIB_5__::func_831("WS_CTRL3" /* GXT: Press ~INPUT_SCRIPT_RDOWN~ to use Spectator Cam.~n~Press ~INPUT_SCRIPT_RLEFT~ to fly a Spectator Drone for $~1~.~n~Press ~INPUT_SCRIPT_PAD_RIGHT~ to leave the table. */, Global_262145.f_26634 /* Tunable: -76677190 */)) || __LIB_0__::func_1("WS_CTRL4" /* GXT: Press ~INPUT_SCRIPT_RDOWN~ to use Spectator Cam.~n~Press ~INPUT_SCRIPT_RLEFT~ to fly a Spectator Drone.~n~Press ~INPUT_SCRIPT_PAD_RIGHT~ to leave the table. */))
	{
		HUD::CLEAR_HELP(true);
		func_5135(iParam0);
	}
	if (iParam0->f_19)
	{
		MISC::SET_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1), 7);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1), 7);
	}
	if (bParam1)
	{
		if (BitTest(Global_1965532, 3))
		{
			MISC::CLEAR_BIT(&Global_1965532, 3);
		}
		__LIB_21__::func_658();
		__LIB_5__::func_829(0);
		__LIB_29__::func_573(0);
		Global_2725431 = 0;
		iParam0->f_23 = 0;
		iParam0->f_24 = 0;
		iParam0->f_13 = -1;
		iParam0->f_14 = -1;
		iParam0->f_15 = -1;
		StringCopy(&(iParam0->f_39), "", 24);
		__LIB_0__::func_794(&(iParam0->f_77));
		if (__LIB_0__::func_1("WS_COOLDOWN" /* GXT: There is a short delay before you can play the Arena War Wheel again. */) || __LIB_0__::func_1("WS_BLOCKED2" /* GXT: The Arena War Wheel is currently unavailable. */))
		{
			HUD::CLEAR_HELP(true);
		}
		if (__LIB_0__::func_112())
		{
			func_5155(iParam0);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		ENTITY::SET_ENTITY_ALPHA(PLAYER::PLAYER_PED_ID(), 255, false);
	}
	bVar1 = BitTest(iParam0->f_1, 15);
	bVar2 = BitTest(iParam0->f_1, 9);
	bVar3 = BitTest(iParam0->f_1, 29);
	bVar4 = BitTest(iParam0->f_1, 16);
	*iParam0 = 0;
	iParam0->f_1 = 0;
	iParam0->f_2 = 0;
	iParam0->f_6 = -1;
	iParam0->f_7 = -1;
	iParam0->f_10 = -1;
	iParam0->f_16 = -1;
	iParam0->f_9 = 0;
	iParam0->f_12 = 0;
	iParam0->f_100 = -1;
	iParam0->f_102 = -1;
	StringCopy(&(iParam0->f_45), "", 32);
	StringCopy(&(iParam0->f_33), "", 24);
	iParam0->f_3 = -1;
	iParam0->f_4 = -1;
	iParam0->f_19 = 0;
	iParam0->f_53 = { 0f, 0f, 0f };
	iParam0->f_56 = { 0f, 0f, 0f };
	iParam0->f_59 = { 0f, 0f, 0f };
	iParam0->f_62 = { 0f, 0f, 0f };
	iParam0->f_65 = 0f;
	iParam0->f_66 = 0f;
	__LIB_0__::func_794(&(iParam0->f_67));
	__LIB_0__::func_794(&(iParam0->f_73));
	__LIB_0__::func_794(&(iParam0->f_71));
	__LIB_0__::func_794(&(iParam0->f_69));
	__LIB_0__::func_794(&(iParam0->f_75));
	__LIB_0__::func_794(&(iParam0->f_87));
	__LIB_0__::func_794(&(iParam0->f_85));
	__LIB_0__::func_794(&(iParam0->f_83));
	__LIB_0__::func_794(&(iParam0->f_93));
	__LIB_0__::func_794(&(iParam0->f_95));
	__LIB_0__::func_794(&(iParam0->f_97));
	if (bVar1)
	{
		MISC::SET_BIT(&(iParam0->f_1), 15);
	}
	if (bVar2)
	{
		MISC::SET_BIT(&(iParam0->f_1), 9);
	}
	if (bVar3)
	{
		MISC::SET_BIT(&(iParam0->f_1), 29);
	}
	if (((iParam0->f_102 == 0 || iParam0->f_102 == 1) || iParam0->f_102 == 2) || iParam0->f_102 == 3)
	{
		if (bVar4)
		{
			MISC::SET_BIT(&(iParam0->f_1), 16);
		}
	}
}

void func_5155(int* iParam0)//Position - 0x192234
{
	if (iParam0->f_17 != -1)
	{
		__LIB_1__::func_34(iParam0->f_17);
	}
	iParam0->f_17 = -1;
	iParam0->f_18 = 0;
	iParam0->f_26 = 0;
	iParam0->f_27 = 1;
	iParam0->f_104 = 0;
}

void func_5157(int iParam0)//Position - 0x192272
{
	if (PLAYER::PLAYER_ID() == __LIB_0__::func_162())
	{
		return;
	}
	Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_353.f_8 = iParam0;
}

void func_5158(int iParam0)//Position - 0x19229D
{
	if (PLAYER::PLAYER_ID() == __LIB_0__::func_162())
	{
		return;
	}
	Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_353.f_7 = iParam0;
}

bool func_5161(var uParam0)//Position - 0x19233C
{
	return BitTest(*uParam0, 15);
}

void func_5162(int* iParam0)//Position - 0x19234A
{
	int iVar0;
	if (!BitTest(*iParam0, 15))
	{
		iVar0 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(iParam0->f_6);
		if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar0) || PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar0) >= 0.6f)
		{
			__LIB_28__::func_694(iParam0, 0);
		}
		if ((!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar0) || PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar0) >= 0.7f) || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("walkinterruptible")))
		{
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iParam0->f_6))
			{
				PED::DETACH_SYNCHRONIZED_SCENE(iParam0->f_6);
				iParam0->f_6 = -1;
			}
			MISC::SET_BIT(iParam0, 15);
		}
	}
}

void func_5164(int* iParam0, char[4] cParam1, bool bParam2)//Position - 0x192493
{
	struct<3> Var0;
	struct<3> Var1;
	Var0 = { func_5167(iParam0->f_7, 1, &(iParam0->f_45), cParam1) };
	Var1 = { 0f, 0f, func_5165(iParam0->f_7, 1, &(iParam0->f_45), cParam1) };
	iParam0->f_6 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(Var0, Var1, 2, false, bParam2, 1f, 0f, 1f);
	NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iParam0->f_6, &(iParam0->f_45), cParam1, 2f, -2f, 5, 0, 1000f, 0);
	NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iParam0->f_6);
}

float func_5165(int iParam0, bool bParam1, char* sParam2, char* sParam3)//Position - 0x19250A
{
	float fVar0;
	struct<3> Var1;
	fVar0 = 0f;
	if (bParam1)
	{
		fVar0 = func_5166(iParam0);
	}
	else
	{
		Var1 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(sParam2, sParam3, __LIB_28__::func_698(), 0f, 0f, func_5166(iParam0), 0.01f, 2) };
		fVar0 = Var1.f_2;
	}
	return fVar0;
}

float func_5166(int iParam0)//Position - 0x19254B
{
	float fVar0;
	fVar0 = 0f;
	switch (iParam0)
	{
		case 0:
			fVar0 = 0f;
			break;
		case 1:
			fVar0 = 90f;
			break;
		case 2:
			fVar0 = 180f;
			break;
		case 3:
			fVar0 = 270f;
			break;
	}
	return fVar0;
}

Vector3 func_5167(int iParam0, bool bParam1, char* sParam2, char* sParam3)//Position - 0x19259B
{
	struct<3> Var0;
	Var0 = { 0f, 0f, 0f };
	if (bParam1)
	{
		Var0 = { __LIB_28__::func_698() };
	}
	else
	{
		Var0 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(sParam2, sParam3, __LIB_28__::func_698(), 0f, 0f, func_5166(iParam0), 0.01f, 2) };
	}
	return Var0;
}

char* func_5168(var uParam0, var uParam1, bool bParam2)//Position - 0x1925DC
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	char* sVar7[8];
	var uVar8[4];
	int iVar9;
	iVar1 = 0;
	iVar2 = 0;
	iVar3 = -1;
	iVar4 = uParam1->f_7;
	sVar5 = "";
	sVar6 = "";
	iVar9 = -1;
	if (func_5229(uParam0) == PLAYER::PLAYER_ID())
	{
		iVar9 = uParam1->f_102;
		iVar1 = 0;
		while (iVar1 < 7)
		{
			sVar6 = func_5170(iVar9, iVar1);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar6) && !MISC::ARE_STRINGS_EQUAL(sVar6, &(uParam1->f_39)))
			{
				sVar7[iVar2] = sVar6;
				iVar2++;
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 7)
		{
			iVar1++;
		}
	}
	else
	{
		iVar9 = uParam0->f_1;
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (uParam0->f_4[iVar1] == uParam0->f_3)
			{
				iVar3 = iVar1;
			}
			else
			{
				iVar1++;
			}
		}
		if (iVar3 == -1)
		{
			iVar3 = iVar4 + 1;
			if (iVar3 >= 4)
			{
				iVar3 = 0;
			}
		}
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (iVar1 != iVar3)
			{
				uVar8[iVar1] = func_5169(iVar2, iVar9);
				iVar2++;
			}
			iVar1++;
		}
	}
	if (bParam2)
	{
		switch (iVar9)
		{
			case 0:
			case 1:
			case 2:
			case 3:
				if (iVar4 != -1)
				{
					sVar5 = uVar8[iVar4];
				}
				else
				{
					iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
					switch (iVar0)
					{
						case 0:
							sVar5 = "LOSE_2";
							break;
						case 1:
							sVar5 = "LOSE_3";
							break;
						}
				}
				break;
			case 5:
			case 8:
			case 11:
			case 13:
				if (iVar4 != -1)
				{
					sVar5 = uVar8[iVar4];
				}
				else
				{
					iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
					switch (iVar0)
					{
						case 0:
							sVar5 = "LOSE_1";
							break;
						case 1:
							sVar5 = "LOSE_2";
							break;
						}
				}
				break;
			case 6:
			case 9:
			case 12:
				if (iVar4 != -1)
				{
					sVar5 = uVar8[iVar4];
				}
				else
				{
					iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
					switch (iVar0)
					{
						case 0:
							sVar5 = "LOSE_1";
							break;
						case 1:
							sVar5 = "LOSE_2";
							break;
						case 2:
							sVar5 = "LOSE_3";
							break;
						}
				}
				break;
			case 4:
			case 7:
			case 10:
				if (iVar4 != -1)
				{
					sVar5 = uVar8[iVar4];
				}
				else
				{
					iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
					switch (iVar0)
					{
						case 0:
							sVar5 = "Win_exit_A";
							break;
						case 1:
							sVar5 = "Win_exit_B";
							break;
						case 2:
							sVar5 = "Win_exit_C";
							break;
						}
				}
				break;
		}
	}
	else
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar2);
		sVar5 = sVar7[iVar0];
		StringCopy(&(uParam1->f_39), sVar5, 24);
	}
	return sVar5;
}

char* func_5169(int iParam0, int iParam1)//Position - 0x192893
{
	switch (iParam1)
	{
		case 0:
		case 8:
			switch (iParam0)
			{
				case 0:
					return "WIN_1";
				case 1:
					return "WIN_2";
				case 2:
					return "WIN_3";
				default:
			}
			break;
		case 1:
		case 9:
			switch (iParam0)
			{
				case 0:
					return "WIN_1";
				case 1:
					return "WIN_3";
				case 2:
					return "WIN_2";
				default:
			}
			break;
		case 2:
		case 11:
			switch (iParam0)
			{
				case 0:
					return "WIN_2";
				case 1:
					return "WIN_1";
				case 2:
					return "WIN_3";
				default:
			}
			break;
		case 3:
		case 12:
			switch (iParam0)
			{
				case 0:
					return "WIN_2";
				case 1:
					return "WIN_3";
				case 2:
					return "WIN_1";
				default:
			}
			break;
		case 5:
		case 13:
			switch (iParam0)
			{
				case 0:
					return "WIN_3";
				case 1:
					return "WIN_1";
				case 2:
					return "WIN_2";
				default:
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 0:
					return "WIN_3";
				case 1:
					return "WIN_2";
				case 2:
					return "WIN_1";
				default:
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
					return "LOSE_1";
				case 1:
					return "LOSE_2";
				case 2:
					return "LOSE_3";
				default:
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 0:
					return "LOSE_3";
				case 1:
					return "LOSE_1";
				case 2:
					return "LOSE_2";
				default:
			}
			break;
		case 10:
			switch (iParam0)
			{
				case 0:
					return "LOSE_2";
				case 1:
					return "LOSE_3";
				case 2:
					return "LOSE_1";
				default:
			}
			break;
	}
	return "";
}

char* func_5170(int iParam0, int iParam1)//Position - 0x192ACE
{
	char* sVar0;
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 6:
		case 9:
		case 12:
			switch (iParam1)
			{
				case 0:
					sVar0 = "Win_Big_A";
					break;
				case 1:
					sVar0 = "Win_Big_B";
					break;
				case 2:
					sVar0 = "Win_Big_C";
					break;
				case 3:
					sVar0 = "Win_Big_D";
					break;
				case 4:
					sVar0 = "Win_Big_E";
					break;
			}
			break;
		case 5:
		case 8:
		case 11:
		case 13:
		case 14:
			switch (iParam1)
			{
				case 0:
					sVar0 = "Win_Med_A";
					break;
				case 1:
					sVar0 = "Win_Med_B";
					break;
				case 2:
					sVar0 = "Win_Med_C";
					break;
				case 3:
					sVar0 = "Win_Med_D";
					break;
				case 4:
					sVar0 = "Win_Med_E";
					break;
				case 5:
					sVar0 = "Win_Med_F";
					break;
				case 6:
					sVar0 = "Win_Med_G";
					break;
				case 7:
					sVar0 = "Win_Med_H";
					break;
			}
			break;
		case 4:
		case 7:
		case 10:
			switch (iParam1)
			{
				case 0:
					sVar0 = "Win_Small_A";
					break;
				case 1:
					sVar0 = "Win_Small_B";
					break;
				case 2:
					sVar0 = "Win_Small_C";
					break;
				case 3:
					sVar0 = "Win_Small_D";
					break;
				case 4:
					sVar0 = "Win_Small_E";
					break;
			}
			break;
	}
	return sVar0;
}

void func_5172(int* iParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x192C8A
{
	if (__LIB_0__::func_112())
	{
		if (!bParam2 && !BitTest(iParam0->f_1, 16))
		{
			func_4818(iParam0, 1);
			MISC::SET_BIT(iParam0, 0);
			return;
		}
	}
	switch (iParam0->f_102)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			__LIB_34__::func_378(iParam0, bParam1);
			break;
		case 4:
		case 5:
		case 6:
			func_5179(iParam0, bParam1, bParam3);
			break;
		case 7:
		case 8:
		case 9:
			func_5178(iParam0, bParam1, bParam3);
			break;
		case 10:
		case 11:
		case 12:
			func_5176(iParam0, bParam1, bParam3);
			break;
		case 13:
			func_5173(iParam0, bParam1, bParam3);
			break;
	}
}

void func_5173(int* iParam0, bool bParam1, bool bParam2)//Position - 0x192D59
{
	int iVar0;
	if (bParam2)
	{
		func_4818(iParam0, 1);
	}
	iVar0 = __LIB_1__::func_360(7866, -1, 0);
	__LIB_1__::func_354(7866, iVar0 + 1, -1, 1, 0);
	iParam0->f_8 = iVar0 + 1;
	if (BitTest(iParam0->f_1, 30))
	{
		STATS::PLAYSTATS_SPIN_WHEEL(__LIB_18__::func_218(), __LIB_28__::func_695(bParam1), 14, 1);
	}
	else
	{
		STATS::PLAYSTATS_SPIN_WHEEL(__LIB_18__::func_218(), __LIB_28__::func_695(bParam1), iParam0->f_102, 1);
	}
	MISC::SET_BIT(iParam0, 0);
}

void func_5176(int* iParam0, bool bParam1, bool bParam2)//Position - 0x192DED
{
	int iVar0;
	if (bParam2)
	{
		func_4818(iParam0, 1);
	}
	iVar0 = -1;
	switch (iParam0->f_102)
	{
		case 10:
			iVar0 = Global_262145.f_24080 /* Tunable: AW_ARENA_WAR_WHEEL_AP_LOW_WIN */;
			if (bParam1)
			{
				iVar0 = Global_262145.f_24089 /* Tunable: AW_FREE_ARENA_WAR_WHEEL_AP_LOW_WIN */;
			}
			break;
		case 11:
			iVar0 = Global_262145.f_24081 /* Tunable: AW_ARENA_WAR_WHEEL_AP_MED_WIN */;
			if (bParam1)
			{
				iVar0 = Global_262145.f_24090 /* Tunable: AW_FREE_ARENA_WAR_WHEEL_AP_MED_WIN */;
			}
			break;
		case 12:
			iVar0 = Global_262145.f_24082 /* Tunable: AW_ARENA_WAR_WHEEL_AP_HIGH_WIN */;
			if (bParam1)
			{
				iVar0 = Global_262145.f_24091 /* Tunable: AW_FREE_ARENA_WAR_WHEEL_AP_HIGH_WIN */;
			}
			break;
	}
	if (iVar0 == -1)
	{
		return;
	}
	if (__LIB_34__::func_377())
	{
		if (bParam1)
		{
			iParam0->f_14 = iVar0;
		}
		else
		{
			func_4912(4, iVar0, 0);
		}
		if (BitTest(iParam0->f_1, 30))
		{
			STATS::PLAYSTATS_SPIN_WHEEL(__LIB_18__::func_218(), __LIB_28__::func_695(bParam1), 14, 1);
		}
		else
		{
			STATS::PLAYSTATS_SPIN_WHEEL(__LIB_18__::func_218(), __LIB_28__::func_695(bParam1), iParam0->f_102, iVar0);
		}
	}
	else
	{
		if (!bParam1)
		{
			__LIB_0__::func_151("WS_AP_HELP" /* GXT: Arena Points not awarded. Go to www.arenawar.tv to purchase an Arena Workshop and begin your Career in the Arena War Series. This will allow you to track earned AP to increase your Career sponsorship tier level. RP awarded instead. */, -1);
		}
		__LIB_5__::func_829(1);
		__LIB_29__::func_573(1);
		if (bParam1)
		{
			iParam0->f_14 = iVar0;
		}
		else
		{
			iParam0->f_19 = __LIB_3__::func_131(PLAYER::PLAYER_ID());
			MISC::SET_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1), 7);
			__LIB_43__::func_936(0, PLAYER::PLAYER_PED_ID(), "", joaat("XPTYPE_ACTION"), -294598082, iVar0, 1, -1, 0, 0, 4000);
			MISC::SET_BIT(&(iParam0->f_1), 14);
		}
		if (BitTest(iParam0->f_1, 30))
		{
			STATS::PLAYSTATS_SPIN_WHEEL(__LIB_18__::func_218(), __LIB_28__::func_695(bParam1), 14, 1);
		}
		else
		{
			STATS::PLAYSTATS_SPIN_WHEEL(__LIB_18__::func_218(), __LIB_28__::func_695(bParam1), __LIB_28__::func_696(iParam0->f_102), iVar0);
		}
	}
	MISC::SET_BIT(iParam0, 0);
}

void func_5178(int* iParam0, bool bParam1, bool bParam2)//Position - 0x192FA6
{
	int iVar0;
	if (bParam2)
	{
		func_4818(iParam0, 1);
	}
	iVar0 = -1;
	switch (iParam0->f_102)
	{
		case 7:
			iVar0 = Global_262145.f_24083 /* Tunable: AW_ARENA_WAR_WHEEL_RP_LOW_WIN */;
			if (bParam1)
			{
				iVar0 = Global_262145.f_24092 /* Tunable: AW_FREE_ARENA_WAR_WHEEL_RP_LOW_WIN */;
			}
			break;
		case 8:
			iVar0 = Global_262145.f_24084 /* Tunable: AW_ARENA_WAR_WHEEL_RP_MED_WIN */;
			if (bParam1)
			{
				iVar0 = Global_262145.f_24093 /* Tunable: AW_FREE_ARENA_WAR_WHEEL_RP_MED_WIN */;
			}
			break;
		case 9:
			iVar0 = Global_262145.f_24085 /* Tunable: AW_ARENA_WAR_WHEEL_RP_HIGH_WIN */;
			if (bParam1)
			{
				iVar0 = Global_262145.f_24094 /* Tunable: AW_FREE_ARENA_WAR_WHEEL_RP_HIGH_WIN */;
			}
			break;
	}
	if (iVar0 == -1)
	{
		return;
	}
	__LIB_5__::func_829(1);
	__LIB_29__::func_573(1);
	if (bParam1)
	{
		iParam0->f_15 = iVar0;
	}
	else
	{
		iParam0->f_19 = __LIB_3__::func_131(PLAYER::PLAYER_ID());
		MISC::SET_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1), 7);
		__LIB_43__::func_936(0, PLAYER::PLAYER_PED_ID(), "", joaat("XPTYPE_ACTION"), -294598082, iVar0, 1, -1, 0, 0, 4000);
		MISC::SET_BIT(&(iParam0->f_1), 14);
	}
	if (BitTest(iParam0->f_1, 30))
	{
		STATS::PLAYSTATS_SPIN_WHEEL(__LIB_18__::func_218(), __LIB_28__::func_695(bParam1), 14, 1);
	}
	else
	{
		STATS::PLAYSTATS_SPIN_WHEEL(__LIB_18__::func_218(), __LIB_28__::func_695(bParam1), iParam0->f_102, iVar0);
	}
	MISC::SET_BIT(iParam0, 0);
}

void func_5179(int* iParam0, bool bParam1, bool bParam2)//Position - 0x1930C9
{
	int iVar0;
	var uVar1;
	if (bParam2)
	{
		func_4818(iParam0, 1);
	}
	iVar0 = -1;
	switch (iParam0->f_102)
	{
		case 4:
			iVar0 = Global_262145.f_24086 /* Tunable: AW_ARENA_WAR_WHEEL_CASH_LOW_WIN */;
			if (bParam1)
			{
				iVar0 = Global_262145.f_24095 /* Tunable: AW_FREE_ARENA_WAR_WHEEL_CASH_LOW_WIN */;
			}
			break;
		case 5:
			iVar0 = Global_262145.f_24087 /* Tunable: AW_ARENA_WAR_WHEEL_CASH_MED_WIN */;
			if (bParam1)
			{
				iVar0 = Global_262145.f_24096 /* Tunable: AW_FREE_ARENA_WAR_WHEEL_CASH_MED_WIN */;
			}
			break;
		case 6:
			iVar0 = Global_262145.f_24088 /* Tunable: AW_ARENA_WAR_WHEEL_CASH_HIGH_WIN */;
			if (bParam1)
			{
				iVar0 = Global_262145.f_24097 /* Tunable: AW_FREE_ARENA_WAR_WHEEL_CASH_HIGH_WIN */;
			}
			break;
	}
	if (iVar0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		iParam0->f_13 = iVar0;
	}
	else
	{
		if (__LIB_0__::func_112())
		{
			__LIB_3__::func_407(joaat("SERVICE_EARN_SPIN_THE_WHEEL_CASH"), iVar0, &uVar1, 0, 0, 0);
			__LIB_22__::func_366(iVar0);
		}
		else
		{
			MONEY::NETWORK_EARN_SPIN_THE_WHEEL_CASH(iVar0);
			__LIB_22__::func_366(iVar0);
		}
		HUD::CHANGE_FAKE_MP_CASH(iVar0, 0);
		MISC::SET_BIT(&(iParam0->f_1), 9);
		MISC::SET_BIT(&(iParam0->f_1), 29);
	}
	if (BitTest(iParam0->f_1, 30))
	{
		STATS::PLAYSTATS_SPIN_WHEEL(__LIB_18__::func_218(), __LIB_28__::func_695(bParam1), 14, 1);
	}
	else
	{
		STATS::PLAYSTATS_SPIN_WHEEL(__LIB_18__::func_218(), __LIB_28__::func_695(bParam1), iParam0->f_102, iVar0);
	}
	MISC::SET_BIT(iParam0, 0);
}

bool func_5181(var uParam0)//Position - 0x19326D
{
	return BitTest(*uParam0, 14);
}

void func_5182(int* iParam0)//Position - 0x19327B
{
	int iVar0;
	if (!BitTest(*iParam0, 24))
	{
		iVar0 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(iParam0->f_6);
		if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar0) || PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar0) >= 0.96f)
		{
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iParam0->f_6))
			{
				PED::DETACH_SYNCHRONIZED_SCENE(iParam0->f_6);
				iParam0->f_6 = -1;
			}
			func_5164(iParam0, "SPINNING_IDLE", 1);
			MISC::SET_BIT(iParam0, 24);
		}
	}
}

bool func_5183(int* iParam0)//Position - 0x1932DF
{
	return BitTest(*iParam0, 5);
}

void func_5184(int iParam0)//Position - 0x1932EC
{
	if (iParam0 == __LIB_0__::func_162())
	{
		return;
	}
	if (!BitTest(Global_1853348[iParam0 /*834*/].f_267.f_353.f_2, 22))
	{
		MISC::SET_BIT(&(Global_1853348[iParam0 /*834*/].f_267.f_353.f_2), 22);
	}
}

bool func_5185(var uParam0)//Position - 0x193332
{
	return BitTest(*uParam0, 23);
}

void func_5186(int* iParam0)//Position - 0x193340
{
	int iVar0;
	if (!BitTest(*iParam0, 22))
	{
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iParam0->f_6))
		{
			PED::DETACH_SYNCHRONIZED_SCENE(iParam0->f_6);
			iParam0->f_6 = -1;
		}
		func_5164(iParam0, "SPIN", 0);
		MISC::SET_BIT(iParam0, 22);
	}
	else
	{
		iVar0 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(iParam0->f_6);
		if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar0) >= 0.25f)
		{
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "Wheel_Spin_Start", __LIB_28__::func_698(), "DLC_AW_Arena_Spin_Wheel_Game_Sounds", true, 0, false);
			MISC::SET_BIT(iParam0, 23);
		}
	}
}

bool func_5187(var uParam0)//Position - 0x1933B8
{
	return BitTest(*uParam0, 17);
}

void func_5188(int* iParam0, bool bParam1)//Position - 0x1933C6
{
	if (bParam1)
	{
		if (!CAM::DOES_CAM_EXIST(iParam0->f_105))
		{
			iParam0->f_105 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 2795.9998f, -3933.3533f, 185.9295f, -49.015f, 0f, -0.0744f, 50f, true, 2);
			if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
			{
				iParam0->f_53 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
				iParam0->f_56 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
				iParam0->f_65 = CAM::GET_FINAL_RENDERED_CAM_FOV();
				iParam0->f_59 = { CAM::GET_CAM_COORD(iParam0->f_105) };
				iParam0->f_62 = { CAM::GET_CAM_ROT(iParam0->f_105, 2) };
				iParam0->f_66 = 50f;
				CAM::SET_CAM_PARAMS(iParam0->f_105, iParam0->f_53, iParam0->f_56, iParam0->f_65, 0, 1, 1, 2);
				CAM::SET_CAM_PARAMS(iParam0->f_105, iParam0->f_59, iParam0->f_62, iParam0->f_66, 1500, 1, 1, 2);
				CAM::SET_CAM_ACTIVE(iParam0->f_105, true);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				MISC::SET_BIT(iParam0, 16);
				__LIB_0__::func_795(&(iParam0->f_87), 0, 0);
			}
			else
			{
				CAM::SET_CAM_ACTIVE(iParam0->f_105, true);
				CAM::RENDER_SCRIPT_CAMS(true, true, 1500, true, false, 0);
				MISC::SET_BIT(iParam0, 16);
			}
		}
	}
	else if (CAM::DOES_CAM_EXIST(iParam0->f_105))
	{
		if (!BitTest(*iParam0, 16))
		{
			if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
			{
				iParam0->f_53 = { CAM::GET_GAMEPLAY_CAM_COORD() };
				iParam0->f_56 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
				iParam0->f_65 = CAM::GET_GAMEPLAY_CAM_FOV();
				CAM::SET_CAM_PARAMS(iParam0->f_105, iParam0->f_59, iParam0->f_62, iParam0->f_66, 0, 1, 1, 2);
				CAM::SET_CAM_PARAMS(iParam0->f_105, iParam0->f_53, iParam0->f_56, iParam0->f_65, 1500, 1, 1, 2);
				MISC::SET_BIT(iParam0, 16);
				__LIB_0__::func_795(&(iParam0->f_87), 0, 0);
			}
			else
			{
				CAM::RENDER_SCRIPT_CAMS(false, true, 1500, true, false, 0);
				MISC::SET_BIT(iParam0, 16);
			}
		}
	}
	func_5189(iParam0, bParam1);
}

void func_5189(int* iParam0, bool bParam1)//Position - 0x193589
{
	if (BitTest(*iParam0, 16))
	{
		if (__LIB_0__::func_937(&(iParam0->f_69), func_5191(bParam1), 0))
		{
			if (bParam1)
			{
				MISC::SET_BIT(iParam0, 17);
				MISC::CLEAR_BIT(iParam0, 16);
				__LIB_0__::func_794(&(iParam0->f_69));
			}
			else
			{
				if (CAM::DOES_CAM_EXIST(iParam0->f_105))
				{
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					CAM::SET_CAM_ACTIVE(iParam0->f_105, false);
					CAM::DESTROY_CAM(iParam0->f_105, false);
				}
				MISC::CLEAR_BIT(iParam0, 17);
				MISC::CLEAR_BIT(iParam0, 16);
				__LIB_0__::func_794(&(iParam0->f_69));
			}
		}
	}
	if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
	{
		if (CAM::DOES_CAM_EXIST(iParam0->f_105))
		{
			if (__LIB_0__::func_864(&(iParam0->f_87)))
			{
				if (bParam1)
				{
					if (__LIB_0__::func_937(&(iParam0->f_87), func_5190(iParam0, bParam1), 0))
					{
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
						{
							ENTITY::SET_ENTITY_ALPHA(PLAYER::PLAYER_PED_ID(), 255, false);
						}
						__LIB_0__::func_794(&(iParam0->f_87));
					}
				}
				else if (__LIB_0__::func_937(&(iParam0->f_87), func_5190(iParam0, bParam1), 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
					{
						ENTITY::SET_ENTITY_ALPHA(PLAYER::PLAYER_PED_ID(), 0, false);
					}
					__LIB_0__::func_794(&(iParam0->f_87));
				}
			}
		}
	}
}

int func_5190(int* iParam0, bool bParam1)//Position - 0x19369A
{
	if (bParam1)
	{
		switch (iParam0->f_7)
		{
			case 0:
				return 600;
			case 1:
				return 600;
			case 2:
				return 600;
			case 3:
				return 600;
			default:
		}
	}
	else
	{
		return 1000;
	}
	return 0;
}

int func_5191(bool bParam0)//Position - 0x1936EA
{
	int iVar0;
	iVar0 = 1500;
	if (bParam0)
	{
		iVar0 = 800;
	}
	return iVar0;
}

void func_5192(var uParam0, var uParam1, bool bParam2)//Position - 0x193703
{
	int iVar0;
	int iVar1;
	int iVar2;
	uParam1->f_102 = __LIB_41__::func_695(uParam1, 0, bParam2);
	iVar0 = __LIB_28__::func_701(uParam1->f_102);
	iVar1 = __LIB_28__::func_700(iVar0, bParam2);
	if (iVar1 == 1)
	{
		uParam1->f_10 = __LIB_41__::func_694(iVar0, 1, bParam2);
	}
	else
	{
		iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(1, iVar1 + 1);
		uParam1->f_10 = __LIB_41__::func_694(iVar0, iVar2, bParam2);
	}
	if (uParam1->f_102 == 14)
	{
		uParam1->f_102 = __LIB_41__::func_695(uParam1, 1, bParam2);
		MISC::SET_BIT(&(uParam1->f_1), 30);
	}
	if (!bParam2)
	{
		func_5158(uParam1->f_10);
		func_5157(uParam1->f_102);
	}
	if (uParam1->f_102 != 3)
	{
		__LIB_18__::func_653(0, -1, -1);
	}
}

void func_5218(int iParam0, bool bParam1)//Position - 0x1940B1
{
	if (iParam0 == __LIB_0__::func_162())
	{
		return;
	}
	if (bParam1)
	{
		if (!BitTest(Global_1853348[iParam0 /*834*/].f_267.f_353.f_2, 17))
		{
			MISC::SET_BIT(&(Global_1853348[iParam0 /*834*/].f_267.f_353.f_2), 17);
		}
	}
	else if (BitTest(Global_1853348[iParam0 /*834*/].f_267.f_353.f_2, 17))
	{
		MISC::CLEAR_BIT(&(Global_1853348[iParam0 /*834*/].f_267.f_353.f_2), 17);
	}
}

void func_5219(int* iParam0, bool bParam1)//Position - 0x19412A
{
	if (bParam1)
	{
		if (!BitTest(*iParam0, 9))
		{
			MISC::SET_BIT(iParam0, 9);
		}
	}
	else if (BitTest(*iParam0, 9))
	{
		MISC::CLEAR_BIT(iParam0, 9);
	}
}

void func_5221(var uParam0, int* iParam1, bool bParam2)//Position - 0x19416B
{
	char[] cVar0[8];
	int iVar1;
	float fVar2;
	if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		__LIB_6__::func_410(PLAYER::PLAYER_ID(), 0, 524544, 0);
		MISC::SET_BIT(iParam1, 3);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 185, true);
		}
	}
	if (!BitTest(*iParam1, 4))
	{
		if (!__LIB_3__::func_505())
		{
			__LIB_5__::func_835();
		}
		if (!__LIB_3__::func_241())
		{
			__LIB_1__::func_92();
		}
		HUD::THEFEED_HIDE();
		HUD::DISPLAY_RADAR(false);
		MISC::SET_BIT(iParam1, 4);
	}
	if (__LIB_5__::func_834(PLAYER::PLAYER_PED_ID()))
	{
		StringCopy(&(iParam1->f_45), "ANIM@ARENA@PRIZE_WHEEL@FEMALE", 32);
	}
	else
	{
		StringCopy(&(iParam1->f_45), "ANIM@ARENA@PRIZE_WHEEL@MALE", 32);
	}
	cVar0 = "ENTER";
	if (bParam2)
	{
		cVar0 = "SPECTATOR_ENTER";
	}
	if (!BitTest(*iParam1, 7))
	{
		if (!BitTest(*iParam1, 8))
		{
			STREAMING::REQUEST_ANIM_DICT(&(iParam1->f_45));
			if (STREAMING::HAS_ANIM_DICT_LOADED(&(iParam1->f_45)))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD")) != 0)
				{
					TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), func_5167(iParam1->f_7, 0, &(iParam1->f_45), cVar0), 1f, 5000, func_5165(iParam1->f_7, 0, &(iParam1->f_45), cVar0), 0.001f);
					__LIB_0__::func_795(&(iParam1->f_95), 0, 0);
					MISC::SET_BIT(iParam1, 8);
				}
			}
		}
		else if (STREAMING::HAS_ANIM_DICT_LOADED(&(iParam1->f_45)))
		{
			if ((__LIB_0__::func_490(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), func_5167(iParam1->f_7, 0, &(iParam1->f_45), cVar0), 0.01f, 0) && __LIB_3__::func_526(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), func_5165(iParam1->f_7, 0, &(iParam1->f_45), cVar0), 5f)) || __LIB_0__::func_937(&(iParam1->f_95), 5000, 0))
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				func_5164(iParam1, cVar0, 0);
				__LIB_0__::func_794(&(iParam1->f_95));
				MISC::SET_BIT(iParam1, 7);
				if (func_5229(uParam0) == PLAYER::PLAYER_ID())
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
					{
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
						{
							ENTITY::SET_ENTITY_ALPHA(PLAYER::PLAYER_PED_ID(), 0, false);
						}
					}
				}
			}
		}
	}
	else
	{
		iVar1 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(iParam1->f_6);
		fVar2 = 0.6f;
		if (bParam2)
		{
			fVar2 = 0.96f;
		}
		if ((!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar1) || PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar1) >= fVar2) || func_5228(iParam1))
		{
			if (!func_5228(iParam1))
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iParam1->f_6))
				{
					PED::DETACH_SYNCHRONIZED_SCENE(iParam1->f_6);
					iParam1->f_6 = -1;
				}
				func_5164(iParam1, "BASE", 1);
			}
			if (bParam2)
			{
				MISC::SET_BIT(iParam1, 26);
			}
			else
			{
				__LIB_6__::func_410(PLAYER::PLAYER_ID(), 0, 524288, 0);
				MISC::SET_BIT(iParam1, 10);
			}
		}
	}
}

void func_5227(int* iParam0)//Position - 0x1944E7
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (iParam0->f_8 > 0)
	{
		__LIB_1__::func_354(7866, (iParam0->f_8 - 1), -1, 1, 0);
		MISC::SET_BIT(iParam0, 5);
		MISC::SET_BIT(&(iParam0->f_1), 16);
		iParam0->f_8 = (iParam0->f_8 - 1);
	}
	else if (MONEY::NETWORK_CAN_SPEND_MONEY(Global_262145.f_24098 /* Tunable: AW_ARENA_WAR_WHEEL_COST */, false, true, false, -1, 0))
	{
		iVar2 = Global_262145.f_24098 /* Tunable: AW_ARENA_WAR_WHEEL_COST */;
		if (MONEY::NETWORK_GET_VC_BANK_BALANCE() > 0)
		{
			if (MONEY::NETWORK_GET_VC_BANK_BALANCE() >= iVar2)
			{
				iVar0 = iVar2;
			}
			else
			{
				iVar0 = (iVar2 - (iVar2 - MONEY::NETWORK_GET_VC_BANK_BALANCE()));
			}
			iVar2 = (iVar2 - iVar0);
		}
		if (iVar2 > 0)
		{
			if (MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1) > 0)
			{
				if (MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1) >= iVar2)
				{
					iVar1 = iVar2;
				}
				else
				{
					iVar1 = (iVar2 - (iVar2 - MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1)));
				}
				iVar2 = (iVar2 - iVar1);
			}
		}
		if (iVar1 != 0 || iVar0 != 0)
		{
			MISC::SET_BIT(&(iParam0->f_1), 9);
			HUD::USE_FAKE_MP_CASH(true);
			HUD::CHANGE_FAKE_MP_CASH(-iVar1, -iVar0);
		}
		MISC::SET_BIT(iParam0, 5);
	}
	else
	{
		MISC::SET_BIT(iParam0, 6);
		return;
	}
}

bool func_5228(int* iParam0)//Position - 0x1945DE
{
	return BitTest(*iParam0, 29);
}

bool func_5229(int* iParam0)//Position - 0x1945EC
{
	return iParam0->f_3;
}

void func_5230(int iParam0, bool bParam1)//Position - 0x1945F8
{
	if (iParam0 == __LIB_0__::func_162())
	{
		return;
	}
	if (bParam1)
	{
		if (!BitTest(Global_1853348[iParam0 /*834*/].f_267.f_353.f_2, 16))
		{
			MISC::SET_BIT(&(Global_1853348[iParam0 /*834*/].f_267.f_353.f_2), 16);
		}
	}
	else if (BitTest(Global_1853348[iParam0 /*834*/].f_267.f_353.f_2, 16))
	{
		MISC::CLEAR_BIT(&(Global_1853348[iParam0 /*834*/].f_267.f_353.f_2), 16);
	}
}

void func_5231(int* iParam0, bool bParam1)//Position - 0x194671
{
	if (bParam1)
	{
		if (!BitTest(*iParam0, 2))
		{
			MISC::SET_BIT(iParam0, 2);
		}
	}
	else if (BitTest(*iParam0, 2))
	{
		MISC::CLEAR_BIT(iParam0, 2);
	}
}

bool func_5232(int* iParam0)//Position - 0x1946A0
{
	return BitTest(*iParam0, 25);
}

void func_5233(var uParam0, int iParam1)//Position - 0x1946AE
{
	uParam0->f_99 = iParam1;
}

int func_5234()//Position - 0x1946BC
{
	if (BitTest(Global_4718592.f_32, 16))
	{
		return 1;
	}
	return 0;
}

int func_5235(var uParam0, int iParam1)//Position - 0x1946D5
{
	if (!func_5236(iParam1))
	{
		return __LIB_0__::func_162();
	}
	return uParam0->f_4[iParam1];
}

bool func_5236(int iParam0)//Position - 0x1946F6
{
	return (iParam0 >= 0 && iParam0 < 4);
}

void func_5237(int* iParam0)//Position - 0x19470B
{
	if (__LIB_0__::func_701(iParam0))
	{
		PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/, true);
		PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/, true);
		__LIB_9__::func_371();
	}
	if (!func_5228(iParam0))
	{
		if (!BitTest(*iParam0, 3))
		{
			__LIB_6__::func_410(PLAYER::PLAYER_ID(), 0, 524544, 0);
			MISC::SET_BIT(iParam0, 3);
		}
	}
}

void func_5239(var uParam0, int* iParam1)//Position - 0x194765
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if ((func_5247(uParam0, iParam1) && !__LIB_0__::func_864(&(iParam1->f_73))) && !BitTest(iParam1->f_1, 15))
	{
		if (!BitTest(iParam1->f_1, 1))
		{
			__LIB_0__::func_671(1);
			MISC::SET_BIT(&(iParam1->f_1), 1);
		}
		if (func_5246())
		{
			if (!__LIB_0__::func_1("WS_BLOCKED2" /* GXT: The Arena War Wheel is currently unavailable. */) && !BitTest(iParam1->f_1, 27))
			{
				HUD::CLEAR_HELP(true);
				__LIB_0__::func_151("WS_BLOCKED2" /* GXT: The Arena War Wheel is currently unavailable. */, -1);
				MISC::SET_BIT(&(iParam1->f_1), 27);
			}
		}
		else if (func_5245(iParam1))
		{
			if (!__LIB_0__::func_1("WS_AP_HELP" /* GXT: Arena Points not awarded. Go to www.arenawar.tv to purchase an Arena Workshop and begin your Career in the Arena War Series. This will allow you to track earned AP to increase your Career sponsorship tier level. RP awarded instead. */))
			{
				if (!__LIB_0__::func_1("WS_COOLDOWN" /* GXT: There is a short delay before you can play the Arena War Wheel again. */) && !BitTest(iParam1->f_1, 26))
				{
					HUD::CLEAR_HELP(true);
					__LIB_0__::func_151("WS_COOLDOWN" /* GXT: There is a short delay before you can play the Arena War Wheel again. */, -1);
					MISC::SET_BIT(&(iParam1->f_1), 26);
				}
			}
			else if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 51 /*INPUT_CONTEXT*/))
			{
				if (!__LIB_0__::func_1("WS_COOLDOWN" /* GXT: There is a short delay before you can play the Arena War Wheel again. */) && !BitTest(iParam1->f_1, 26))
				{
					HUD::CLEAR_HELP(true);
					__LIB_0__::func_151("WS_COOLDOWN" /* GXT: There is a short delay before you can play the Arena War Wheel again. */, -1);
					MISC::SET_BIT(&(iParam1->f_1), 26);
				}
			}
		}
		else if (func_5234())
		{
			if (!BitTest(iParam1->f_1, 6))
			{
				HUD::CLEAR_HELP(true);
				MISC::SET_BIT(&(iParam1->f_1), 6);
			}
			if (iParam1->f_5 == -1)
			{
				__LIB_5__::func_569(&(iParam1->f_5), 4, "WS_TAB_TRG" /* GXT: Press ~INPUT_CONTEXT~ to spectate. */, 0, 0, 0, 0);
			}
			if (__LIB_3__::func_113(iParam1->f_5, 1))
			{
				__LIB_1__::func_751();
				__LIB_1__::func_292();
				if (iParam1->f_5 != -1)
				{
					__LIB_3__::func_122(&(iParam1->f_5));
				}
				iParam1->f_7 = func_5244();
				iVar0 = func_5137(iParam1->f_7);
				if (__LIB_4__::func_891(iVar0))
				{
					MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_353.f_2), iVar0);
					MISC::SET_BIT(iParam1, 2);
				}
			}
		}
		else if (__LIB_11__::func_405(uParam0))
		{
			if ((__LIB_0__::func_1("WS_IC_FREESPIN" /* GXT: Press ~INPUT_CONTEXT~ to spin the Arena War Wheel using a free spin. */) || __LIB_5__::func_831("WS_IC_PAY" /* GXT: Press ~INPUT_CONTEXT~ to spin the Arena War Wheel for $~1~. */, Global_262145.f_24098 /* Tunable: AW_ARENA_WAR_WHEEL_COST */)) || __LIB_5__::func_831("WS_INVALID" /* GXT: You need $~1~ or a free spin to play the Arena War Wheel. */, Global_262145.f_24098 /* Tunable: AW_ARENA_WAR_WHEEL_COST */))
			{
				HUD::CLEAR_HELP(true);
			}
			if (!BitTest(iParam1->f_1, 0))
			{
				HUD::CLEAR_HELP(true);
				MISC::SET_BIT(&(iParam1->f_1), 0);
			}
			if (PAD::HAVE_CONTROLS_CHANGED(2 /*FRONTEND_CONTROL*/))
			{
				HUD::CLEAR_HELP(true);
				__LIB_3__::func_122(&(iParam1->f_3));
				iParam1->f_3 = -1;
			}
			if (iParam1->f_3 == -1)
			{
				__LIB_5__::func_569(&(iParam1->f_3), 4, "WS_IC_VIEW" /* GXT: Press ~INPUT_CONTEXT~ to play the Arena War Wheel. */, 0, 0, 0, 0);
			}
			if (__LIB_3__::func_113(iParam1->f_3, 1))
			{
				__LIB_1__::func_751();
				__LIB_1__::func_292();
				if (iParam1->f_3 != -1)
				{
					__LIB_3__::func_122(&(iParam1->f_3));
				}
				iParam1->f_7 = func_5244();
				iVar1 = func_5137(iParam1->f_7);
				if (__LIB_4__::func_891(iVar1))
				{
					MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_353.f_2), iVar1);
					MISC::SET_BIT(iParam1, 25);
					MISC::SET_BIT(iParam1, 2);
				}
			}
		}
		else
		{
			if (iParam1->f_3 != -1)
			{
				__LIB_3__::func_122(&(iParam1->f_3));
			}
			if (BitTest(iParam1->f_1, 0))
			{
				MISC::CLEAR_BIT(&(iParam1->f_1), 0);
			}
			if (PAD::HAVE_CONTROLS_CHANGED(2 /*FRONTEND_CONTROL*/))
			{
				HUD::CLEAR_HELP(true);
			}
			if (!__LIB_0__::func_1("WS_AP_HELP" /* GXT: Arena Points not awarded. Go to www.arenawar.tv to purchase an Arena Workshop and begin your Career in the Arena War Series. This will allow you to track earned AP to increase your Career sponsorship tier level. RP awarded instead. */))
			{
				if (iParam1->f_8 > 0)
				{
					__LIB_0__::func_151("WS_IC_FREESPIN" /* GXT: Press ~INPUT_CONTEXT~ to spin the Arena War Wheel using a free spin. */, -1);
					MISC::CLEAR_BIT(iParam1, 1);
				}
				else if (MONEY::NETWORK_CAN_SPEND_MONEY(Global_262145.f_24098 /* Tunable: AW_ARENA_WAR_WHEEL_COST */, false, true, false, -1, 0))
				{
					__LIB_5__::func_832("WS_IC_PAY" /* GXT: Press ~INPUT_CONTEXT~ to spin the Arena War Wheel for $~1~. */, Global_262145.f_24098 /* Tunable: AW_ARENA_WAR_WHEEL_COST */, -1);
					MISC::CLEAR_BIT(iParam1, 1);
				}
				else
				{
					__LIB_5__::func_832("WS_INVALID" /* GXT: You need $~1~ or a free spin to play the Arena War Wheel. */, Global_262145.f_24098 /* Tunable: AW_ARENA_WAR_WHEEL_COST */, -1);
					MISC::SET_BIT(iParam1, 1);
				}
			}
			if ((((((PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 51 /*INPUT_CONTEXT*/) && !PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/)) && !PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/)) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/)) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/)) && !__LIB_5__::func_836(PLAYER::PLAYER_ID())) && !BitTest(*iParam1, 1))
			{
				__LIB_1__::func_751();
				__LIB_1__::func_292();
				if ((__LIB_0__::func_1("WS_IC_FREESPIN" /* GXT: Press ~INPUT_CONTEXT~ to spin the Arena War Wheel using a free spin. */) || __LIB_5__::func_831("WS_IC_PAY" /* GXT: Press ~INPUT_CONTEXT~ to spin the Arena War Wheel for $~1~. */, Global_262145.f_24098 /* Tunable: AW_ARENA_WAR_WHEEL_COST */)) || __LIB_5__::func_831("WS_INVALID" /* GXT: You need $~1~ or a free spin to play the Arena War Wheel. */, Global_262145.f_24098 /* Tunable: AW_ARENA_WAR_WHEEL_COST */))
				{
					HUD::CLEAR_HELP(true);
				}
				iParam1->f_7 = func_5244();
				iVar2 = func_5137(iParam1->f_7);
				if (__LIB_4__::func_891(iVar2))
				{
					MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_353.f_2), iVar2);
					MISC::SET_BIT(iParam1, 2);
				}
			}
		}
	}
	else
	{
		if (BitTest(iParam1->f_1, 1))
		{
			__LIB_0__::func_671(0);
			MISC::CLEAR_BIT(&(iParam1->f_1), 1);
		}
		if (BitTest(iParam1->f_1, 0))
		{
			HUD::CLEAR_HELP(true);
			MISC::CLEAR_BIT(&(iParam1->f_1), 0);
		}
		if (BitTest(iParam1->f_1, 6))
		{
			MISC::CLEAR_BIT(&(iParam1->f_1), 6);
		}
		if (!__LIB_0__::func_1("WS_COOLDOWN" /* GXT: There is a short delay before you can play the Arena War Wheel again. */))
		{
			if (BitTest(iParam1->f_1, 26))
			{
				MISC::CLEAR_BIT(&(iParam1->f_1), 26);
			}
		}
		if (!__LIB_0__::func_1("WS_BLOCKED2" /* GXT: The Arena War Wheel is currently unavailable. */))
		{
			if (BitTest(iParam1->f_1, 27))
			{
				MISC::CLEAR_BIT(&(iParam1->f_1), 27);
			}
		}
		if ((((((((__LIB_0__::func_1("WS_IC_FREESPIN" /* GXT: Press ~INPUT_CONTEXT~ to spin the Arena War Wheel using a free spin. */) || __LIB_5__::func_831("WS_IC_PAY" /* GXT: Press ~INPUT_CONTEXT~ to spin the Arena War Wheel for $~1~. */, Global_262145.f_24098 /* Tunable: AW_ARENA_WAR_WHEEL_COST */)) || __LIB_5__::func_831("WS_INVALID" /* GXT: You need $~1~ or a free spin to play the Arena War Wheel. */, Global_262145.f_24098 /* Tunable: AW_ARENA_WAR_WHEEL_COST */)) || __LIB_0__::func_1("WS_IC_VIEW" /* GXT: Press ~INPUT_CONTEXT~ to play the Arena War Wheel. */)) || __LIB_0__::func_1("WS_IC_EXIT" /* GXT: Please wait for the current player to finish their spin of the Arena War Wheel.~n~Press ~INPUT_CONTEXT~ to leave the table. */)) || __LIB_0__::func_1("WS_IC_V_FSPIN" /* GXT: Press ~INPUT_CONTEXT_SECONDARY~ to spin the Arena War Wheel using a free spin.~n~Press ~INPUT_CONTEXT~ to leave the table. */)) || __LIB_5__::func_831("WS_IC_V_PAY" /* GXT: Press ~INPUT_CONTEXT_SECONDARY~ to spin the Arena War Wheel for $~1~.~n~Press ~INPUT_CONTEXT~ to leave the table. */, Global_262145.f_24098 /* Tunable: AW_ARENA_WAR_WHEEL_COST */)) || __LIB_5__::func_831("WS_V_INVALID" /* GXT: Come back when you have $~1~ or a free spin.~n~Press ~INPUT_CONTEXT~ to leave the table. */, Global_262145.f_24098 /* Tunable: AW_ARENA_WAR_WHEEL_COST */)) || __LIB_0__::func_1("WS_TAB_TRG" /* GXT: Press ~INPUT_CONTEXT~ to spectate. */))
		{
			HUD::CLEAR_HELP(true);
		}
		if (((__LIB_13__::func_291("WS_CTRL1" /* GXT: Press ~INPUT_SCRIPT_RDOWN~ to use Spectator Cam for $~1~.~n~Press ~INPUT_SCRIPT_RLEFT~ to fly a Spectator Drone for $~1~.~n~Press ~INPUT_SCRIPT_PAD_RIGHT~ to leave the table. */, Global_262145.f_26633 /* Tunable: -887378230 */, Global_262145.f_26634 /* Tunable: -76677190 */) || __LIB_5__::func_831("WS_CTRL2" /* GXT: Press ~INPUT_SCRIPT_RDOWN~ to use Spectator Cam for $~1~.~n~Press ~INPUT_SCRIPT_RLEFT~ to fly a Spectator Drone.~n~Press ~INPUT_SCRIPT_PAD_RIGHT~ to leave the table. */, Global_262145.f_26633 /* Tunable: -887378230 */)) || __LIB_5__::func_831("WS_CTRL3" /* GXT: Press ~INPUT_SCRIPT_RDOWN~ to use Spectator Cam.~n~Press ~INPUT_SCRIPT_RLEFT~ to fly a Spectator Drone for $~1~.~n~Press ~INPUT_SCRIPT_PAD_RIGHT~ to leave the table. */, Global_262145.f_26634 /* Tunable: -76677190 */)) || __LIB_0__::func_1("WS_CTRL4" /* GXT: Press ~INPUT_SCRIPT_RDOWN~ to use Spectator Cam.~n~Press ~INPUT_SCRIPT_RLEFT~ to fly a Spectator Drone.~n~Press ~INPUT_SCRIPT_PAD_RIGHT~ to leave the table. */))
		{
			HUD::CLEAR_HELP(true);
			func_5135(iParam1);
		}
		if (iParam1->f_3 != -1)
		{
			__LIB_3__::func_122(&(iParam1->f_3));
		}
		if (iParam1->f_5 != -1)
		{
			__LIB_3__::func_122(&(iParam1->f_5));
		}
		if ((func_5242() && !func_5104()) && !__LIB_28__::func_693())
		{
			iVar3 = func_5244();
			if (func_5236(iVar3))
			{
				if (func_5241(iVar3) && func_5240(iVar3))
				{
					__LIB_0__::func_151("WS_BLOCKED" /* GXT: Unavailable during this event. */, -1);
				}
				else if (__LIB_0__::func_1("WS_BLOCKED" /* GXT: Unavailable during this event. */))
				{
					HUD::CLEAR_HELP(true);
				}
			}
			else if (__LIB_0__::func_1("WS_BLOCKED" /* GXT: Unavailable during this event. */))
			{
				HUD::CLEAR_HELP(true);
			}
		}
		else if (__LIB_0__::func_1("WS_BLOCKED" /* GXT: Unavailable during this event. */))
		{
			HUD::CLEAR_HELP(true);
		}
	}
}

int func_5240(int iParam0)//Position - 0x194DAE
{
	float fVar0;
	fVar0 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
	switch (iParam0)
	{
		case 0:
			if (func_5241(iParam0))
			{
				if ((fVar0 >= 260f && fVar0 <= 360f) || (fVar0 >= 0f && fVar0 <= 100f))
				{
					return 1;
				}
			}
			break;
		case 1:
			if (func_5241(iParam0))
			{
				return (fVar0 >= 5f && fVar0 <= 175f);
			}
			break;
		case 2:
			if (func_5241(iParam0))
			{
				return (fVar0 >= 90f && fVar0 <= 275f);
			}
			break;
		case 3:
			if (func_5241(iParam0))
			{
				return (fVar0 >= 175f && fVar0 <= 360f);
			}
			break;
	}
	return 0;
}

int func_5241(int iParam0)//Position - 0x194E87
{
	switch (iParam0)
	{
		case 0:
			return ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2796.944f, -3933.0945f, 182.63573f, 2795.0273f, -3933.0737f, 184.63573f, 1.5f, false, true, 0);
		case 1:
			return ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2798.6802f, -3931.3142f, 182.63573f, 2798.6646f, -3929.393f, 184.63573f, 1.5f, false, true, 0);
		case 2:
			return ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2797.019f, -3927.6624f, 182.63573f, 2795.0613f, -3927.6465f, 184.63573f, 1.5f, false, true, 0);
		case 3:
			return ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2793.262f, -3931.3398f, 182.63573f, 2793.2888f, -3929.3298f, 184.63573f, 1.5f, false, true, 0);
		default:
	}
	return 0;
}

int func_5242()//Position - 0x194F73
{
	if (BitTest(Global_1965531, 6))
	{
		return 1;
	}
	if (BitTest(Global_1965531, 8))
	{
		return 1;
	}
	if (BitTest(Global_1965531, 7))
	{
		return 1;
	}
	if (BitTest(Global_1965531, 9))
	{
		return 1;
	}
	if (BitTest(Global_1965531, 2))
	{
		return 1;
	}
	if (BitTest(Global_1965531, 3))
	{
		return 1;
	}
	if (BitTest(Global_1965531, 4))
	{
		return 1;
	}
	if (BitTest(Global_1965531, 5))
	{
		return 1;
	}
	return 0;
}

int func_5244()//Position - 0x195009
{
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2796.944f, -3933.0945f, 182.63573f, 2795.0273f, -3933.0737f, 184.63573f, 1.5f, false, true, 0))
	{
		return 0;
	}
	else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2798.6802f, -3931.3142f, 182.63573f, 2798.6646f, -3929.393f, 184.63573f, 1.5f, false, true, 0))
	{
		return 1;
	}
	else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2797.019f, -3927.6624f, 182.63573f, 2795.0613f, -3927.6465f, 184.63573f, 1.5f, false, true, 0))
	{
		return 2;
	}
	else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2793.262f, -3931.3398f, 182.63573f, 2793.2888f, -3929.3298f, 184.63573f, 1.5f, false, true, 0))
	{
		return 3;
	}
	return -1;
}

int func_5245(var uParam0)//Position - 0x1950EF
{
	if (__LIB_0__::func_864(&(uParam0->f_77)) && !__LIB_0__::func_937(&(uParam0->f_77), Global_262145.f_24099 /* Tunable: AW_ARENA_WAR_WHEEL_COOLDOWN */, 0))
	{
		return 1;
	}
	return 0;
}

bool func_5246()//Position - 0x19511D
{
	return Global_262145.f_25918 /* Tunable: 741148266 */;
}

int func_5247(var uParam0, var uParam1)//Position - 0x19512C
{
	int iVar0;
	if (((((((((((((((((__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1) && !BitTest(Global_2703735.f_876.f_4, 0)) && !BitTest(Global_2621446, 15)) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true)) && !__LIB_4__::func_849()) && !__LIB_3__::func_558()) && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam1->f_6))) && !Global_1964695) && !Global_1574964) && !Global_1931426) && !__LIB_9__::func_372()) && !__LIB_0__::func_93()) && !__LIB_6__::func_180()) && !Global_2789734) && !__LIB_28__::func_693()) && !BitTest(uParam1->f_2, 0)) && __LIB_0__::func_893())
	{
		iVar0 = func_5244();
		if (func_5236(iVar0))
		{
			if (((func_5241(iVar0) && func_5240(iVar0)) && func_4858(uParam0, iVar0)) && !func_5242())
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_5250()//Position - 0x195269
{
	return Global_262145.f_25919 /* Tunable: -1153218005 */;
}

void func_5252()//Position - 0x195284
{
	func_5285(&(Local_113[PLAYER::PLAYER_ID() /*5*/].f_1), &(Local_114.f_40), -1, 0, 0, 0, Global_2789737);
	if (Local_113[PLAYER::PLAYER_ID() /*5*/].f_1.f_3 == 2)
	{
		if (Global_1574964 || Global_1931426)
		{
			func_5253(0);
		}
	}
	if (Global_1946250.f_3601)
	{
		func_5253(0);
		Global_1946250.f_3601 = 0;
	}
}

void func_5253(bool bParam0)//Position - 0x1952E4
{
	__LIB_31__::func_282(&(Local_113[PLAYER::PLAYER_ID() /*5*/].f_1), &(Local_114.f_40), bParam0, 1);
}

void func_5285(int* iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6)//Position - 0x196134
{
	if (iParam0->f_3 == 2)
	{
		__LIB_7__::func_361(iParam0, uParam1);
		__LIB_31__::func_10(iParam0, uParam1, iParam2, iParam5);
		__LIB_7__::func_359(uParam1);
		__LIB_6__::func_253(uParam1);
	}
	if (iParam0->f_3 != 2)
	{
		if (*iParam0 != 0)
		{
			*iParam0 = 0;
		}
	}
	switch (iParam0->f_3)
	{
		case 0:
			if (!Global_2715699.f_2846.f_186)
			{
				GRAPHICS::SET_TV_AUDIO_FRONTEND(false);
				func_5395(uParam1, iParam2);
				__LIB_6__::func_251(iParam0, 1);
			}
			break;
		case 1:
			if (BitTest(uParam1->f_8, 2))
			{
				__LIB_3__::func_504();
				MISC::CLEAR_BIT(&(uParam1->f_8), 2);
			}
			if (BitTest(uParam1->f_8, 3))
			{
				__LIB_1__::func_91();
				MISC::CLEAR_BIT(&(uParam1->f_8), 3);
			}
			if (BitTest(uParam1->f_8, 9))
			{
				MISC::CLEAR_BIT(&(uParam1->f_8), 9);
			}
			GRAPHICS::SET_TV_AUDIO_FRONTEND(false);
			uParam1->f_770 = iParam2;
			if (func_5391(uParam1, bParam6, iParam2))
			{
				*uParam1 = 1;
				__LIB_7__::func_251(uParam1, uParam1->f_16);
				HUD::DISPLAY_CASH(false);
				__LIB_6__::func_251(iParam0, 2);
			}
			break;
		case 2:
			__LIB_1__::func_405();
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4 && !BitTest(uParam1->f_8, 19))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
				}
				__LIB_6__::func_410(PLAYER::PLAYER_ID(), 0, 524288, 0);
				MISC::SET_BIT(&(uParam1->f_8), 18);
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 185, true);
				}
			}
			if (!__LIB_3__::func_505())
			{
				__LIB_5__::func_835();
				MISC::SET_BIT(&(uParam1->f_8), 2);
			}
			if (!__LIB_3__::func_241())
			{
				__LIB_1__::func_92();
				MISC::SET_BIT(&(uParam1->f_8), 3);
			}
			if (!BitTest(uParam1->f_8, 9))
			{
				MISC::SET_BIT(&(uParam1->f_8), 9);
			}
			if (!BitTest(uParam1->f_8, 13))
			{
				Global_2789733 = 1;
				Global_2789734 = 1;
				MISC::SET_BIT(&(uParam1->f_8), 13);
			}
			if (__LIB_7__::func_532(0, 1, 0))
			{
				if (__LIB_31__::func_281(iParam0, uParam1, iParam2, bParam3, bParam4))
				{
					iParam0->f_1 = 0;
					uParam1->f_16 = 0;
					__LIB_6__::func_205(uParam1, 12);
					uParam1->f_773 = -1;
					__LIB_31__::func_45(uParam1, 1);
					Global_2789733 = 0;
					Global_2789734 = 0;
					Global_2789735 = 0;
					if (BitTest(uParam1->f_8, 13))
					{
						MISC::CLEAR_BIT(&(uParam1->f_8), 13);
					}
					__LIB_6__::func_251(iParam0, 1);
				}
			}
			__LIB_3__::func_570(1);
			break;
	}
	if (iParam0->f_3 == 2)
	{
		if (!BitTest(uParam1->f_8, 6))
		{
			STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1f);
		}
		else if (BitTest(uParam1->f_8, 8))
		{
			CAM::USE_SCRIPT_CAM_FOR_AMBIENT_POPULATION_ORIGIN_THIS_FRAME(true, true);
			PED::SET_SCRIPTED_CONVERSION_COORD_THIS_FRAME(CAM::GET_FINAL_RENDERED_CAM_COORD());
			HUD::THEFEED_HIDE_THIS_FRAME();
		}
		__LIB_0__::func_187();
		__LIB_3__::func_570(1);
	}
}

int func_5391(var uParam0, bool bParam1, int iParam2)//Position - 0x19D34C
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	iVar0 = 0;
	if ((((((__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1) && !BitTest(Global_2703735.f_876.f_4, 0)) && !BitTest(Global_2621446, 15)) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && !__LIB_4__::func_849()) && !__LIB_3__::func_558()) && __LIB_6__::func_250(iParam2))
	{
		if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), uParam0->f_777, uParam0->f_780, uParam0->f_5, false, true, 0) && __LIB_6__::func_249(uParam0)) && !__LIB_4__::func_849())
		{
			if (BitTest(uParam0->f_8, 16))
			{
				if (!BitTest(uParam0->f_8, 17) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					if (__LIB_6__::func_248(uParam0, &sVar1))
					{
						MISC::SET_BIT(&(uParam0->f_8), 17);
						__LIB_0__::func_151(&sVar1, -1);
					}
				}
			}
			else
			{
				iVar0 = 1;
			}
		}
		else
		{
			if (__LIB_6__::func_248(uParam0, &sVar2) && __LIB_0__::func_1(&sVar2))
			{
				HUD::CLEAR_HELP(true);
			}
			MISC::CLEAR_BIT(&(uParam0->f_8), 17);
		}
	}
	if (PAD::HAVE_CONTROLS_CHANGED(2 /*FRONTEND_CONTROL*/))
	{
		__LIB_3__::func_122(&(uParam0->f_15));
		uParam0->f_15 = -1;
	}
	if (iVar0 && !PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 19 /*INPUT_CHARACTER_WHEEL*/))
	{
		if (Global_1853198)
		{
			if (uParam0->f_15 == -1)
			{
				__LIB_5__::func_569(&(uParam0->f_15), 4, "MPCCTV_BILL" /* GXT: Unable to use CCTV until utility charge is paid. */, 0, 0, 0, 0);
			}
		}
		else if (uParam0->f_15 == -1 && iParam2 != 122)
		{
			if (uParam0->f_10 == 1)
			{
				__LIB_5__::func_569(&(uParam0->f_15), 4, "MPCCTV_START_1" /* GXT: Press ~INPUT_CONTEXT~ to view the Security Camera. */, 0, 0, 0, 0);
			}
			else
			{
				__LIB_5__::func_569(&(uParam0->f_15), 4, "MPCCTV_START" /* GXT: Press ~INPUT_CONTEXT~ to view the Security Cameras. */, 0, 0, 0, 0);
			}
		}
		else if ((__LIB_0__::func_1("MPCCTV_START" /* GXT: Press ~INPUT_CONTEXT~ to view the Security Cameras. */) || __LIB_0__::func_1("MPCCTV_START_1" /* GXT: Press ~INPUT_CONTEXT~ to view the Security Camera. */)) || __LIB_0__::func_1("ARENA_MANAGE" /* GXT: Press ~INPUT_CONTEXT~ to access the vehicle management menu.~n~Press ~INPUT_CONTEXT_SECONDARY~ to view the Security Cameras. */))
		{
			if (iParam2 != 122)
			{
				if (__LIB_3__::func_113(uParam0->f_15, 1))
				{
					__LIB_3__::func_122(&(uParam0->f_15));
					func_5395(uParam0, iParam2);
					return 1;
				}
			}
			else if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 52 /*INPUT_CONTEXT_SECONDARY*/) && !PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 51 /*INPUT_CONTEXT*/))
			{
				__LIB_3__::func_122(&(uParam0->f_15));
				func_5395(uParam0, iParam2);
				return 1;
			}
		}
	}
	else
	{
		__LIB_3__::func_122(&(uParam0->f_15));
	}
	if (bParam1)
	{
		MISC::SET_BIT(&(uParam0->f_8), 19);
		func_5395(uParam0, iParam2);
		return 1;
	}
	return 0;
}

void func_5395(var uParam0, int iParam1)//Position - 0x19D630
{
	switch (iParam1)
	{
		case 22:
		case 27:
		case 32:
		case 37:
			uParam0->f_777 = { 1002.6198f, -3194.9094f, -39.9932f };
			uParam0->f_780 = { 1003.4985f, -3194.8752f, -37.9932f };
			uParam0->f_5 = 1f;
			uParam0->f_6 = 0f;
			uParam0->f_10 = 3;
			break;
		case 23:
		case 28:
		case 33:
		case 38:
			uParam0->f_777 = { 1044.5847f, -3197.5376f, -39.1576f };
			uParam0->f_780 = { 1044.5686f, -3195.882f, -37.1576f };
			uParam0->f_5 = 1f;
			uParam0->f_6 = 270f;
			uParam0->f_10 = 3;
			break;
		case 24:
		case 29:
		case 34:
		case 39:
			uParam0->f_777 = { 1087.1406f, -3198.7212f, -39.9935f };
			uParam0->f_780 = { 1087.1588f, -3197.5728f, -37.9935f };
			uParam0->f_5 = 1f;
			uParam0->f_6 = 90f;
			uParam0->f_10 = 3;
			break;
		case 25:
		case 30:
		case 35:
		case 40:
			uParam0->f_777 = { 1134.1075f, -3194.2183f, -41.3969f };
			uParam0->f_780 = { 1135.883f, -3194.2239f, -39.397f };
			uParam0->f_5 = 1f;
			uParam0->f_6 = 0f;
			uParam0->f_10 = 3;
			break;
		case 26:
		case 31:
		case 36:
		case 41:
			uParam0->f_777 = { 1156.5852f, -3194.7195f, -40.008f };
			uParam0->f_780 = { 1156.5364f, -3193.4275f, -38.008f };
			uParam0->f_5 = 1f;
			uParam0->f_6 = 90f;
			uParam0->f_10 = 3;
			break;
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
			uParam0->f_777 = { 904.8114f, -3209.3364f, -98.18792f };
			uParam0->f_780 = { 906.5398f, -3208.5564f, -96.18792f };
			uParam0->f_5 = 1f;
			uParam0->f_6 = 203f;
			uParam0->f_10 = 8;
			break;
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			uParam0->f_777 = { -1235.6155f, -3004.1707f, -43.866962f };
			uParam0->f_780 = { -1237.2778f, -3004.1782f, -41.86696f };
			uParam0->f_5 = 1.5f;
			uParam0->f_6 = 180f;
			uParam0->f_10 = 13;
			break;
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			uParam0->f_777 = { 413.48996f, 4810.4614f, -59.99814f };
			uParam0->f_780 = { 413.4959f, 4811.548f, -57.99814f };
			uParam0->f_5 = 1f;
			uParam0->f_6 = 90f;
			uParam0->f_10 = 13;
			break;
		case 88:
			uParam0->f_777 = { 514.96f, 4748.312f, -67.824974f };
			uParam0->f_780 = { 514.96f, 4749.3228f, -69.99603f };
			uParam0->f_5 = 1.05f;
			uParam0->f_6 = __LIB_6__::func_252(uParam0->f_780, uParam0->f_777, 1);
			uParam0->f_7 = 90f;
			uParam0->f_10 = 1;
			break;
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			if (BitTest(uParam0->f_8, 19))
			{
				uParam0->f_777 = { -1617.4272f, -3013.8108f, -76.20504f };
				uParam0->f_780 = { -1618.7227f, -3014.1077f, -74.20504f };
				uParam0->f_5 = 0.75f;
				uParam0->f_6 = 190f;
				uParam0->f_10 = 4;
			}
			else if (__LIB_6__::func_598() == 0)
			{
				uParam0->f_777 = { -1617.4272f, -3013.8108f, -76.20504f };
				uParam0->f_780 = { -1618.7227f, -3014.1077f, -74.20504f };
				uParam0->f_5 = 0.75f;
				uParam0->f_6 = 190f;
				uParam0->f_10 = 10;
			}
			else if (__LIB_6__::func_598() == 1)
			{
				uParam0->f_777 = { -1507.1608f, -3032.959f, -80.242226f };
				uParam0->f_780 = { -1508.4907f, -3032.816f, -78.242226f };
				uParam0->f_5 = 1f;
				uParam0->f_6 = 160f;
				uParam0->f_10 = 7;
			}
			else
			{
				uParam0->f_777 = { -1516.9707f, -3038.7683f, -80.242226f };
				uParam0->f_780 = { -1515.8776f, -3039.4849f, -78.242226f };
				uParam0->f_5 = 1f;
				uParam0->f_6 = 320f;
				uParam0->f_10 = 7;
			}
			break;
		case 122:
			if (__LIB_6__::func_598() == 0)
			{
				uParam0->f_777 = { 164.36809f, 5185.634f, -89.675415f };
				uParam0->f_780 = { 164.36823f, 5187.066f, -87.675415f };
				uParam0->f_5 = 1.4375f;
				uParam0->f_6 = 90f;
				uParam0->f_10 = 2;
			}
			else
			{
				uParam0->f_777 = { 167.37743f, 5192.4023f, 10.224731f };
				uParam0->f_780 = { 167.37154f, 5193.818f, 12.224731f };
				uParam0->f_5 = 1.4375f;
				uParam0->f_6 = 90f;
				uParam0->f_10 = 2;
			}
			break;
		case -1:
			if (BitTest(uParam0->f_8, 19))
			{
				uParam0->f_777 = { -1617.4272f, -3013.8108f, -76.20504f };
				uParam0->f_780 = { -1618.7227f, -3014.1077f, -74.20504f };
				uParam0->f_5 = 0.75f;
				uParam0->f_6 = 190f;
				uParam0->f_10 = 15;
			}
			break;
		case 147:
			uParam0->f_777 = { 1562.2991f, 384.79797f, -57.08754f };
			uParam0->f_780 = { 1562.2532f, 382.7258f, -55.087887f };
			uParam0->f_5 = 1f;
			uParam0->f_6 = 270f;
			uParam0->f_10 = 7;
			break;
		case 149:
		case 150:
		case 151:
		case 152:
		case 153:
			uParam0->f_777 = { -1358.9948f, 141.71274f, -96.10934f };
			uParam0->f_780 = { -1359.0099f, 143.27798f, -95.10934f };
			uParam0->f_5 = 1f;
			uParam0->f_6 = 90f;
			uParam0->f_10 = 5;
			break;
		case 148:
			uParam0->f_777 = { -1016.2065f, -83.43869f, -100.40309f };
			uParam0->f_780 = { -1017.4863f, -83.44675f, -98.40309f };
			uParam0->f_5 = 1f;
			uParam0->f_6 = 180f;
			uParam0->f_10 = 7;
			break;
		case 155:
		case 156:
		case 157:
		case 158:
			uParam0->f_777 = { func_4689(-9.12275f, 1.80637f, 8.60001f, __LIB_2__::func_717(PLAYER::PLAYER_ID())) };
			uParam0->f_780 = { func_4689(-7.47049f, 1.80492f, 10.6f, __LIB_2__::func_717(PLAYER::PLAYER_ID())) };
			uParam0->f_5 = 1.25f;
			uParam0->f_6 = func_39(0f, __LIB_2__::func_717(PLAYER::PLAYER_ID()));
			uParam0->f_10 = 7;
			break;
	}
}

void func_5410()//Position - 0x19E4E2
{
	if (((!Global_1931426 && __LIB_0__::func_893()) && __LIB_6__::func_87(PLAYER::PLAYER_ID())) && Global_1574965)
	{
		__LIB_40__::func_736(&(Local_114.f_1));
	}
}

void func_5427()//Position - 0x19EF37
{
	if (!iLocal_343 && (__LIB_13__::func_600() || __LIB_4__::func_47()))
	{
		SCRIPT::REQUEST_SCRIPT("arena_box_bench_seats");
		if (SCRIPT::HAS_SCRIPT_LOADED("arena_box_bench_seats"))
		{
			SYSTEM::START_NEW_SCRIPT("arena_box_bench_seats", 1424);
			SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("arena_box_bench_seats");
			iLocal_343 = 1;
		}
	}
	else if ((!NETWORK::NETWORK_IS_SCRIPT_ACTIVE("arena_box_bench_seats", -1, true, 0) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("arena_box_bench_seats")) <= 0) && iLocal_343)
	{
		iLocal_343 = 0;
	}
}

void func_5429()//Position - 0x19EFF5
{
	func_5475();
	if (Global_1931426 && Local_114.f_1298 > 1)
	{
		func_5469();
	}
	switch (Local_114.f_1298)
	{
		case 0:
			func_5468(1);
			break;
		case 1:
			if (((((((__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1) && !Global_1931426) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && !__LIB_4__::func_849()) && !__LIB_3__::func_558()) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2810.0007f, -3930.6797f, 183.41064f, 2810.0112f, -3931.6978f, 185.41061f, 1f, false, true, 0)) && !__LIB_1__::func_512()) && !Global_262145.f_26629 /* Tunable: 2128226808 */)
			{
				if (Local_114.f_1298.f_11 == -1)
				{
					__LIB_5__::func_569(&(Local_114.f_1298.f_11), 4, "SNK_CONTEXT" /* GXT: Press ~INPUT_CONTEXT~ to buy a snack. */, 0, 0, 0, 0);
				}
				else if (__LIB_3__::func_113(Local_114.f_1298.f_11, 1))
				{
					__LIB_3__::func_122(&(Local_114.f_1298.f_11));
					Local_114.f_1298.f_11 = -1;
					__LIB_6__::func_410(PLAYER::PLAYER_ID(), 0, 256, 0);
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 185, true);
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
					}
					HUD::DISPLAY_RADAR(false);
					Local_114.f_1298.f_4 = __LIB_1__::func_360(62, -1, 0);
					Local_114.f_1298.f_7 = __LIB_1__::func_360(1277, -1, 0);
					Local_114.f_1298.f_8 = __LIB_1__::func_360(1278, -1, 0);
					Local_114.f_1298.f_2 = __LIB_1__::func_360(1276, -1, 0);
					Local_114.f_1298.f_6 = __LIB_1__::func_360(1098, -1, 0);
					Local_114.f_1298.f_9 = __LIB_1__::func_360(10404, -1, 0);
					func_5468(2);
				}
			}
			else if (Local_114.f_1298.f_11 != -1)
			{
				__LIB_3__::func_122(&(Local_114.f_1298.f_11));
				Local_114.f_1298.f_11 = -1;
			}
			break;
		case 2:
			if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
			{
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 1 /*INPUT_LOOK_LR*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 2 /*INPUT_LOOK_UD*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 5 /*INPUT_LOOK_LEFT_ONLY*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 6 /*INPUT_LOOK_RIGHT_ONLY*/, true);
			}
			func_5430();
			CAM::INVALIDATE_IDLE_CAM();
			break;
		case 3:
			func_5469();
			break;
	}
}

void func_5430()//Position - 0x19F20C
{
	if (!__LIB_3__::func_558())
	{
		func_5457();
		if (__LIB_3__::func_67("SNK_MNU", -1, 1))
		{
			if (BitTest(Local_114.f_1298.f_1, 0))
			{
				func_5450();
				MISC::CLEAR_BIT(&(Local_114.f_1298.f_1), 0);
			}
			else
			{
				__LIB_3__::func_781(Local_114.f_1298.f_12, 1, 1);
			}
			func_5448();
			__LIB_10__::func_991(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
			func_5431();
		}
	}
}

void func_5431()//Position - 0x19F276
{
	HUD::HIDE_SCRIPTED_HUD_COMPONENT_THIS_FRAME(19);
	if (BitTest(Local_114.f_1298.f_1, 1))
	{
		HUD::SHOW_HUD_COMPONENT_THIS_FRAME(4);
		HUD::SHOW_HUD_COMPONENT_THIS_FRAME(5);
		HUD::SHOW_HUD_COMPONENT_THIS_FRAME(13);
		HUD::SHOW_HUD_COMPONENT_THIS_FRAME(3);
		if (!__LIB_0__::func_864(&(Local_114.f_1298.f_15)))
		{
			__LIB_0__::func_795(&(Local_114.f_1298.f_15), 0, 0);
		}
		else if (__LIB_0__::func_937(&(Local_114.f_1298.f_15), 4000, 0))
		{
			__LIB_0__::func_794(&(Local_114.f_1298.f_15));
			MISC::CLEAR_BIT(&(Local_114.f_1298.f_1), 1);
		}
	}
}

void func_5448()//Position - 0x1A2AD1
{
	if (Local_114.f_1298.f_12 == 0)
	{
		if (!MONEY::NETWORK_CAN_SPEND_MONEY(func_5449(Local_114.f_1298.f_12), false, true, false, -1, 0))
		{
			__LIB_1__::func_789("SNK_AFFORD", 0, 0);
		}
		else if (Local_114.f_1298.f_4 >= 10)
		{
			__LIB_1__::func_789("SNK_DRK1FU", 0, 0);
		}
		else
		{
			__LIB_1__::func_789("SNK_ITEM5_D", 0, 0);
		}
	}
	else if (Local_114.f_1298.f_12 == 1)
	{
		if (!MONEY::NETWORK_CAN_SPEND_MONEY(func_5449(Local_114.f_1298.f_12), false, true, false, -1, 0))
		{
			__LIB_1__::func_789("SNK_AFFORD", 0, 0);
		}
		else if (Local_114.f_1298.f_7 >= 15)
		{
			__LIB_1__::func_789("SNK_SNK2FU", 0, 0);
		}
		else
		{
			__LIB_1__::func_789("SNK_ITEM2_D", 0, 0);
		}
	}
	else if (Local_114.f_1298.f_12 == 2)
	{
		if (!MONEY::NETWORK_CAN_SPEND_MONEY(func_5449(Local_114.f_1298.f_12), false, true, false, -1, 0))
		{
			__LIB_1__::func_789("SNK_AFFORD", 0, 0);
		}
		else if (Local_114.f_1298.f_8 >= 5)
		{
			__LIB_1__::func_789("SNK_SNK3FU", 0, 0);
		}
		else
		{
			__LIB_1__::func_789("SNK_ITEM3_D", 0, 0);
		}
	}
	else if (Local_114.f_1298.f_12 == 3)
	{
		if (!MONEY::NETWORK_CAN_SPEND_MONEY(func_5449(Local_114.f_1298.f_12), false, true, false, -1, 0))
		{
			__LIB_1__::func_789("SNK_AFFORD", 0, 0);
		}
		else if (Local_114.f_1298.f_2 >= 30)
		{
			__LIB_1__::func_789("SNK_SNK1FU", 0, 0);
		}
		else
		{
			__LIB_1__::func_789("SNK_ITEM1_D", 0, 0);
		}
	}
	else if (Local_114.f_1298.f_12 == 4)
	{
		if (!MONEY::NETWORK_CAN_SPEND_MONEY(func_5449(Local_114.f_1298.f_12), false, true, false, -1, 0))
		{
			__LIB_1__::func_789("SNK_AFFORD", 0, 0);
		}
		else if (Local_114.f_1298.f_6 >= 20)
		{
			__LIB_1__::func_789("SNK_SMOKFU", 0, 0);
		}
		else
		{
			__LIB_1__::func_789("SNK_ITEM4_D", 0, 0);
		}
	}
	else if (Local_114.f_1298.f_12 == 5)
	{
		if (!MONEY::NETWORK_CAN_SPEND_MONEY(func_5449(Local_114.f_1298.f_12), false, true, false, -1, 0))
		{
			__LIB_1__::func_789("SNK_AFFORD", 0, 0);
		}
		else if (Local_114.f_1298.f_9 >= 10)
		{
			__LIB_1__::func_789("SNK_DRK7FU", 0, 0);
		}
		else
		{
			__LIB_1__::func_789("SNK_ITEM7_D", 0, 0);
		}
	}
}

int func_5449(int iParam0)//Position - 0x1A2CFD
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 1:
			return 2;
		case 2:
			return 4;
		case 3:
			return 1;
		case 4:
			return 6;
		case 5:
			return 3;
		default:
	}
	return 0;
}

void func_5450()//Position - 0x1A2D49
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	__LIB_4__::func_851("SNK_MENU_TITLE" /* GXT: SNACK MENU */);
	bVar0 = false;
	bVar1 = true;
	iVar2 = 0;
	while (iVar2 < __LIB_5__::func_844())
	{
		bVar0 = false;
		bVar1 = true;
		if (!MONEY::NETWORK_CAN_SPEND_MONEY(func_5449(iVar2), false, true, false, -1, 0))
		{
			bVar1 = false;
		}
		if (iVar2 == 0)
		{
			if (Local_114.f_1298.f_4 >= 10)
			{
				bVar0 = true;
				bVar1 = false;
			}
		}
		else if (iVar2 == 5)
		{
			if (Local_114.f_1298.f_9 >= 10)
			{
				bVar0 = true;
				bVar1 = false;
			}
		}
		else if (iVar2 == 1)
		{
			if (Local_114.f_1298.f_7 >= 15)
			{
				bVar0 = true;
				bVar1 = false;
			}
		}
		else if (iVar2 == 2)
		{
			if (Local_114.f_1298.f_8 >= 5)
			{
				bVar0 = true;
				bVar1 = false;
			}
		}
		else if (iVar2 == 3)
		{
			if (Local_114.f_1298.f_2 >= 30)
			{
				bVar0 = true;
				bVar1 = false;
			}
		}
		else if (iVar2 == 4)
		{
			if (Local_114.f_1298.f_6 >= 20)
			{
				bVar0 = true;
				bVar1 = false;
			}
		}
		__LIB_8__::func_233(iVar2, __LIB_5__::func_843(iVar2), 0, bVar1, 0, 0, 0);
		if (bVar0)
		{
			__LIB_8__::func_233(iVar2, "SNK_FULL", 0, bVar1, 0, 0, 0);
		}
		else if (func_5449(iVar2) > 0)
		{
			__LIB_8__::func_233(iVar2, "IMPOUND_COST" /* GXT: $~1~ */, 1, bVar1, 0, 0, 0);
			__LIB_9__::func_718(func_5449(iVar2), 0);
		}
		else
		{
			__LIB_8__::func_233(iVar2, "STORE_FREE_PRICE" /* GXT: FREE */, 0, bVar1, 0, 0, 0);
		}
		iVar2++;
	}
	__LIB_3__::func_781(Local_114.f_1298.f_12, 1, 1);
	__LIB_1__::func_792(201, "ITEM_SELECT" /* GXT: Select */, -1, 0);
	__LIB_1__::func_792(202, "ITEM_BACK" /* GXT: Back */, -1, 0);
}

void func_5457()//Position - 0x1A3238
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	if (BitTest(Local_114.f_1298.f_1, 2))
	{
		return;
	}
	iVar3 = 150;
	if (PAD::IS_USING_CURSOR(2 /*FRONTEND_CONTROL*/))
	{
		iVar3 = 110;
	}
	__LIB_6__::func_25(1);
	PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 30 /*INPUT_MOVE_LR*/, true);
	PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 31 /*INPUT_MOVE_UD*/, true);
	PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/, true);
	PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/, true);
	PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/, true);
	bVar4 = PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/);
	bVar5 = (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/));
	iVar2 = PAD::GET_CONTROL_VALUE(2 /*FRONTEND_CONTROL*/, 31 /*INPUT_MOVE_UD*/);
	if (!BitTest(Local_114.f_1298.f_1, 3))
	{
		if (PAD::IS_USING_CURSOR(2 /*FRONTEND_CONTROL*/))
		{
			func_5458(&bVar0, &bVar1, &bVar4, &bVar5);
		}
		else
		{
			bVar0 = (iVar2 < 100 || PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/));
			bVar1 = (iVar2 > 150 || PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/));
		}
		if (bVar0 || bVar1)
		{
			__LIB_0__::func_795(&(Local_114.f_1298.f_13), 0, 0);
			MISC::SET_BIT(&(Local_114.f_1298.f_1), 3);
		}
	}
	else if (__LIB_0__::func_937(&(Local_114.f_1298.f_13), iVar3, 0))
	{
		__LIB_0__::func_794(&(Local_114.f_1298.f_13));
		MISC::CLEAR_BIT(&(Local_114.f_1298.f_1), 3);
	}
	if (bVar1)
	{
		Local_114.f_1298.f_12++;
		if (Local_114.f_1298.f_12 > (__LIB_5__::func_844() - 1))
		{
			Local_114.f_1298.f_12 = 0;
		}
		AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
	}
	if (bVar0)
	{
		Local_114.f_1298.f_12 = (Local_114.f_1298.f_12 - 1);
		if (Local_114.f_1298.f_12 < 0)
		{
			Local_114.f_1298.f_12 = (__LIB_5__::func_844() - 1);
		}
		AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
	}
	if (bVar4)
	{
		bVar6 = false;
		if (Local_114.f_1298.f_12 == 0)
		{
			if (Local_114.f_1298.f_4 >= 10)
			{
				bVar6 = true;
			}
		}
		else if (Local_114.f_1298.f_12 == 5)
		{
			if (Local_114.f_1298.f_9 >= 10)
			{
				bVar6 = true;
			}
		}
		else if (Local_114.f_1298.f_12 == 1)
		{
			if (Local_114.f_1298.f_7 >= 15)
			{
				bVar6 = true;
			}
		}
		else if (Local_114.f_1298.f_12 == 2)
		{
			if (Local_114.f_1298.f_8 >= 5)
			{
				bVar6 = true;
			}
		}
		else if (Local_114.f_1298.f_12 == 3)
		{
			if (Local_114.f_1298.f_2 >= 30)
			{
				bVar6 = true;
			}
		}
		else if (Local_114.f_1298.f_12 == 4)
		{
			if (Local_114.f_1298.f_6 >= 20)
			{
				bVar6 = true;
			}
		}
		if (!bVar6)
		{
			if (!MONEY::NETWORK_CAN_SPEND_MONEY(func_5449(Local_114.f_1298.f_12), false, true, false, -1, 0))
			{
				bVar6 = true;
			}
			else
			{
				MISC::SET_BIT(&(Local_114.f_1298.f_1), 2);
			}
		}
		if (bVar6)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
		}
		else
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT" /* GXT: Filter List */, "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
		}
	}
	if ((bVar5 || __LIB_3__::func_718()) || __LIB_0__::func_877())
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
		func_5468(3);
		Local_114.f_1298.f_12 = 0;
	}
}

void func_5458(var uParam0, var uParam1, bool bParam2, bool bParam3)//Position - 0x1A3529
{
	if (MISC::IS_PC_VERSION() && !NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
	{
		if (PAD::IS_USING_CURSOR(2 /*FRONTEND_CONTROL*/))
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 1 /*INPUT_LOOK_LR*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 2 /*INPUT_LOOK_UD*/, true);
			PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/, true);
			PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/, true);
			PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 238 /*INPUT_CURSOR_CANCEL*/, true);
			PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/);
			PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, 238 /*INPUT_CURSOR_CANCEL*/);
			PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 241 /*INPUT_CURSOR_SCROLL_UP*/, true);
			PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 242 /*INPUT_CURSOR_SCROLL_DOWN*/, true);
			if ((Global_4539961 == -1 || Global_4539961 == -4) || Global_4539961 == -6)
			{
				PAD::ENABLE_CONTROL_ACTION(1 /*CAMERA_CONTROL*/, 1 /*INPUT_LOOK_LR*/, true);
				PAD::ENABLE_CONTROL_ACTION(1 /*CAMERA_CONTROL*/, 2 /*INPUT_LOOK_UD*/, true);
			}
			else
			{
				PAD::DISABLE_CONTROL_ACTION(1 /*CAMERA_CONTROL*/, 1 /*INPUT_LOOK_LR*/, true);
				PAD::DISABLE_CONTROL_ACTION(1 /*CAMERA_CONTROL*/, 2 /*INPUT_LOOK_UD*/, true);
			}
			__LIB_3__::func_567(0, 0, 0, 1);
			__LIB_3__::func_52(0, -1, 1);
		}
		if (__LIB_3__::func_51())
		{
			if (Global_4539961 == Local_114.f_1298.f_12)
			{
				*bParam2 = 1;
			}
			else
			{
				Local_114.f_1298.f_12 = Global_4539961;
				__LIB_3__::func_781(Local_114.f_1298.f_12, 1, 1);
			}
		}
		if (__LIB_3__::func_528())
		{
			*bParam3 = 1;
		}
		if (__LIB_3__::func_557(0, 0, 0) || PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/))
		{
			*uParam0 = 1;
		}
		if (__LIB_3__::func_556(0, 0, 0) || PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/))
		{
			*uParam1 = 1;
		}
	}
}

void func_5468(int iParam0)//Position - 0x1A3C38
{
	Local_114.f_1298 = iParam0;
}

void func_5469()//Position - 0x1A3C48
{
	func_5471();
	if (Local_114.f_1298 > 1)
	{
		HUD::DISPLAY_RADAR(true);
		if (((((!__LIB_3__::func_366() && !__LIB_1__::func_584()) && !__LIB_0__::func_629()) && !__LIB_5__::func_845()) && !__LIB_3__::func_171(PLAYER::PLAYER_ID())) && !PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
		{
			__LIB_6__::func_410(PLAYER::PLAYER_ID(), 1, 0, 0);
		}
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 185, false);
	}
	if (Local_114.f_1298.f_11 != -1)
	{
		__LIB_3__::func_122(&(Local_114.f_1298.f_11));
		Local_114.f_1298.f_11 = -1;
	}
	func_5468(1);
}

void func_5471()//Position - 0x1A3CF7
{
	func_5474(1);
	__LIB_1__::func_895(1, -1);
}

void func_5474(bool bParam0)//Position - 0x1A3DF4
{
	if (bParam0)
	{
		Local_114.f_1298.f_12 = 0;
	}
	Local_114.f_1298.f_1 = 0;
	Local_114.f_1298.f_10 = -1;
	Local_114.f_1298.f_5 = -1;
	__LIB_0__::func_794(&(Local_114.f_1298.f_13));
	MISC::SET_BIT(&(Local_114.f_1298.f_1), 0);
}

void func_5475()//Position - 0x1A3E3E
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	if (BitTest(Local_114.f_1298.f_1, 2))
	{
		if (func_5449(Local_114.f_1298.f_12) > 0)
		{
			if (!BitTest(Local_114.f_1298.f_1, 4))
			{
				if (__LIB_0__::func_112())
				{
					__LIB_3__::func_407(joaat("SERVICE_SPEND_ARENA_SPECTATOR_BOX"), func_5449(Local_114.f_1298.f_12), &(Local_114.f_1298.f_10), 0, 0, 1);
					Global_4534105[Local_114.f_1298.f_10 /*85*/] = func_5479(Local_114.f_1298.f_12);
					MISC::SET_BIT(&(Local_114.f_1298.f_1), 4);
					__LIB_0__::func_794(&(Local_114.f_1298.f_17));
				}
				else
				{
					MISC::CLEAR_BIT(&(Local_114.f_1298.f_1), 2);
					MONEY::NETWORK_SPEND_ARENA_SPECTATOR_BOX(func_5449(Local_114.f_1298.f_12), func_5479(Local_114.f_1298.f_12), false, true);
					iVar0 = 1;
				}
			}
			else if (__LIB_0__::func_937(&(Local_114.f_1298.f_17), 15000, 0))
			{
				MISC::SET_BIT(&(Local_114.f_1298.f_1), 5);
				iVar0 = 1;
			}
			else
			{
				if (Local_114.f_1298.f_5 == -1)
				{
					if (Global_4534105[Local_114.f_1298.f_10 /*85*/].f_66 != 2147483647)
					{
						Local_114.f_1298.f_5 = Global_4534105[Local_114.f_1298.f_10 /*85*/].f_66;
					}
				}
				iVar1 = 0;
				while (iVar1 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
				{
					if (SCRIPT::GET_EVENT_AT_INDEX(1, iVar1) == 227)
					{
						if (SCRIPT::GET_EVENT_DATA(1, iVar1, &Var2, 7))
						{
							if (Var2.f_0 == Local_114.f_1298.f_5 && Var2.f_0 != -1)
							{
								if (Var2.f_2 == 0)
								{
								}
								else
								{
									MISC::SET_BIT(&(Local_114.f_1298.f_1), 5);
								}
								iVar0 = 1;
							}
						}
					}
					iVar1++;
				}
			}
		}
		else if (!__LIB_0__::func_112())
		{
			MONEY::NETWORK_SPEND_ARENA_SPECTATOR_BOX(func_5449(Local_114.f_1298.f_12), func_5479(Local_114.f_1298.f_12), false, true);
		}
		if (iVar0 || func_5449(Local_114.f_1298.f_12) <= 0)
		{
			if (!BitTest(Local_114.f_1298.f_1, 5))
			{
				if (Local_114.f_1298.f_12 == 0)
				{
					__LIB_1__::func_746(62, 1, -1);
					__LIB_5__::func_941(1, -39155154, joaat("snack"), 1, 0, joaat("purchase"), 0, 552774828, 0);
				}
				else if (Local_114.f_1298.f_12 == 5)
				{
					__LIB_1__::func_746(10404, 1, -1);
					__LIB_5__::func_941(1, 495696637, joaat("snack"), 1, 0, joaat("purchase"), 0, 552774828, 0);
				}
				else if (Local_114.f_1298.f_12 == 1)
				{
					__LIB_1__::func_746(1277, 1, -1);
					__LIB_0__::func_186(15, 1, -1);
					__LIB_5__::func_941(1, 1199442189, joaat("snack"), 1, 0, joaat("purchase"), 0, 552774828, 0);
				}
				else if (Local_114.f_1298.f_12 == 2)
				{
					__LIB_0__::func_186(14, 1, -1);
					__LIB_1__::func_746(1278, 1, -1);
					__LIB_5__::func_941(1, 1486811039, joaat("snack"), 1, 0, joaat("purchase"), 0, 552774828, 0);
				}
				else if (Local_114.f_1298.f_12 == 3)
				{
					__LIB_1__::func_746(1276, 1, -1);
					__LIB_0__::func_186(16, 1, -1);
					__LIB_5__::func_941(1, -251807494, joaat("snack"), 1, 0, joaat("purchase"), 0, 552774828, 0);
				}
				else if (Local_114.f_1298.f_12 == 4)
				{
					Local_114.f_1298.f_3 = 20;
					if (Local_114.f_1298.f_6 + 20 > 20)
					{
						Local_114.f_1298.f_3 = (20 - Local_114.f_1298.f_6);
					}
					__LIB_1__::func_746(1098, Local_114.f_1298.f_3, -1);
					__LIB_5__::func_941(1, -181862273, joaat("snack"), Local_114.f_1298.f_3, 0, joaat("purchase"), 0, 552774828, 0);
				}
				MISC::SET_BIT(&(Local_114.f_1298.f_1), 1);
			}
			Local_114.f_1298.f_4 = __LIB_1__::func_360(62, -1, 0);
			Local_114.f_1298.f_7 = __LIB_1__::func_360(1277, -1, 0);
			Local_114.f_1298.f_8 = __LIB_1__::func_360(1278, -1, 0);
			Local_114.f_1298.f_2 = __LIB_1__::func_360(1276, -1, 0);
			Local_114.f_1298.f_6 = __LIB_1__::func_360(1098, -1, 0);
			Local_114.f_1298.f_9 = __LIB_1__::func_360(10404, -1, 0);
			func_5474(0);
		}
	}
}

int func_5479(int iParam0)//Position - 0x1A43EE
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
		default:
	}
	return 0;
}

void func_5480()//Position - 0x1A443F
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	int iVar4;
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_5516();
	}
	func_5512();
	if (BitTest(Local_114.f_11.f_8, 7))
	{
		if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SAFEHOUSE_TREVOR_DRINK_WHISKEY", false, -1))
		{
			MISC::CLEAR_BIT(&(Local_114.f_11.f_8), 7);
			MISC::SET_BIT(&(Local_114.f_11.f_8), 8);
		}
	}
	if (__LIB_0__::func_864(&(Local_114.f_11.f_24)))
	{
		if (__LIB_0__::func_937(&(Local_114.f_11.f_24), 2000, 0))
		{
			__LIB_0__::func_794(&(Local_114.f_11.f_24));
		}
	}
	if ((((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_22) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_112.f_22))) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_PED(Local_112.f_22))) && (TASK::IS_PED_WALKING(PLAYER::PLAYER_PED_ID()) || TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID())))
	{
		func_5510(8);
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 2810.184f, -3929.9043f, 183.4106f, true) < 5f && BitTest(Local_112.f_10, 1))
	{
		if (!Local_114.f_11.f_1)
		{
			Local_114.f_11.f_1 = AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_BATTLE/BTL_CHAMPAGNE_MINIGAME", false, -1);
		}
	}
	else if (Local_114.f_11.f_1)
	{
		AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("DLC_BATTLE/BTL_CHAMPAGNE_MINIGAME");
		Local_114.f_11.f_1 = 0;
	}
	if (Global_1946250.f_3603 && Local_114.f_11.f_2 > 1)
	{
		func_5507(1);
		Global_1946250.f_3603 = 0;
	}
	if ((BitTest(Global_1965531, 11) && CAM::IS_SCREEN_FADED_OUT()) && Local_114.f_11.f_2 > 1)
	{
		func_5507(1);
	}
	if (Global_1931426 && Local_114.f_11.f_2 > 1)
	{
		func_5507(1);
	}
	if (Local_114.f_11.f_2 > 1)
	{
		PED::SET_PED_CAN_HEAD_IK(PLAYER::PLAYER_PED_ID(), false);
	}
	if (Local_114.f_11.f_2 == 5)
	{
		if (!func_5506(PLAYER::PLAYER_ID()))
		{
			func_5507(1);
		}
	}
	switch (Local_114.f_11.f_2)
	{
		case 0:
			func_5505(1);
			break;
		case 1:
			if ((((((((__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1) && !Global_1931426) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && !__LIB_4__::func_849()) && !__LIB_3__::func_558()) && func_5506(PLAYER::PLAYER_ID())) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_22)) && !__LIB_1__::func_512()) && !Global_262145.f_26624 /* Tunable: -1296481250 */)
			{
				if (!NETWORK::CAN_REGISTER_MISSION_OBJECTS(2))
				{
					if (__LIB_0__::func_1("CLU_BAR_PROMPT" /* GXT: Press ~INPUT_CONTEXT~ to order a drink. */) || __LIB_0__::func_1("POD_TOO_MANY" /* GXT: Too many players near activity. */))
					{
						__LIB_3__::func_122(&(Local_114.f_11.f_15));
						Local_114.f_11.f_15 = -1;
					}
					if (Local_114.f_11.f_15 == -1)
					{
						__LIB_5__::func_569(&(Local_114.f_11.f_15), 4, "BAR_CLOSED" /* GXT: The bar is currently unavailable. */, 0, 0, 0, 0);
					}
				}
				else if (!func_5504())
				{
					if (__LIB_0__::func_1("CLU_BAR_PROMPT" /* GXT: Press ~INPUT_CONTEXT~ to order a drink. */) || __LIB_0__::func_1("BAR_CLOSED" /* GXT: The bar is currently unavailable. */))
					{
						__LIB_3__::func_122(&(Local_114.f_11.f_15));
						Local_114.f_11.f_15 = -1;
					}
					if (Local_114.f_11.f_15 == -1)
					{
						__LIB_5__::func_569(&(Local_114.f_11.f_15), 4, "POD_TOO_MANY" /* GXT: Too many players near activity. */, 0, 0, 0, 0);
					}
				}
				else if (Local_112.f_12 == -1)
				{
					if (__LIB_0__::func_1("POD_TOO_MANY" /* GXT: Too many players near activity. */) || __LIB_0__::func_1("BAR_CLOSED" /* GXT: The bar is currently unavailable. */))
					{
						__LIB_3__::func_122(&(Local_114.f_11.f_15));
						Local_114.f_11.f_15 = -1;
					}
					if (Local_114.f_11.f_15 == -1)
					{
						__LIB_5__::func_569(&(Local_114.f_11.f_15), 4, "CLU_BAR_PROMPT" /* GXT: Press ~INPUT_CONTEXT~ to order a drink. */, 0, 0, 0, 0);
					}
					else
					{
						if (!BitTest(Local_114.f_38, 2))
						{
							func_5510(0);
							MISC::SET_BIT(&(Local_114.f_38), 2);
						}
						if (__LIB_3__::func_113(Local_114.f_11.f_15, 1))
						{
							__LIB_3__::func_122(&(Local_114.f_11.f_15));
							Local_114.f_11.f_15 = -1;
							__LIB_6__::func_410(PLAYER::PLAYER_ID(), 0, 256, 0);
							PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 185, true);
							MISC::SET_BIT(&(Local_113[PLAYER::PLAYER_ID() /*5*/]), 0);
							func_5505(2);
						}
					}
				}
			}
			else
			{
				if (BitTest(Local_114.f_38, 2))
				{
					if (!func_5506(PLAYER::PLAYER_ID()))
					{
						func_5510(1);
						MISC::CLEAR_BIT(&(Local_114.f_38), 2);
					}
				}
				if (Local_114.f_11.f_15 != -1)
				{
					__LIB_3__::func_122(&(Local_114.f_11.f_15));
					Local_114.f_11.f_15 = -1;
				}
			}
			break;
		case 2:
			if (Local_112.f_12 != -1)
			{
				if (Local_112.f_12 == PLAYER::PLAYER_ID())
				{
					func_5505(3);
				}
				else
				{
					func_5507(1);
				}
			}
			break;
		case 3:
			STREAMING::REQUEST_ANIM_DICT("anim@amb@nightclub@mini@drinking@bar@drink@idle_a");
			STREAMING::REQUEST_ANIM_DICT("anim@amb@nightclub@mini@drinking@bar@drink@base");
			STREAMING::REQUEST_ANIM_DICT("anim@amb@nightclub@mini@drinking@bar@drink@beer");
			STREAMING::REQUEST_ANIM_DICT(func_5503(0));
			STREAMING::REQUEST_ANIM_DICT(func_5503(1));
			STREAMING::REQUEST_ANIM_DICT(func_5503(2));
			STREAMING::REQUEST_ANIM_DICT(func_5503(3));
			STREAMING::REQUEST_ANIM_DICT("ANIM@AMB@NIGHTCLUB@MINI@DRINKING@CHAMPAGNE_DRINKING@BASE@");
			if (((((((STREAMING::HAS_ANIM_DICT_LOADED("anim@amb@nightclub@mini@drinking@bar@drink@idle_a") && STREAMING::HAS_ANIM_DICT_LOADED("anim@amb@nightclub@mini@drinking@bar@drink@base")) && STREAMING::HAS_ANIM_DICT_LOADED("anim@amb@nightclub@mini@drinking@bar@drink@beer")) && STREAMING::HAS_ANIM_DICT_LOADED(func_5503(0))) && STREAMING::HAS_ANIM_DICT_LOADED(func_5503(1))) && STREAMING::HAS_ANIM_DICT_LOADED(func_5503(2))) && STREAMING::HAS_ANIM_DICT_LOADED(func_5503(3))) && STREAMING::HAS_ANIM_DICT_LOADED("ANIM@AMB@NIGHTCLUB@MINI@DRINKING@CHAMPAGNE_DRINKING@BASE@"))
			{
				Var1 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(func_5503(0), func_5502(0), func_4703(), __LIB_5__::func_823(), 0.01f, 2) };
				Var2 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(func_5503(0), func_5502(0), func_4703(), __LIB_5__::func_823(), 0.01f, 2) };
				TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), Var1, 1f, 20000, Var2.f_2, 0.05f);
				MISC::SET_BIT(&(Local_114.f_11.f_8), 7);
				func_5505(4);
			}
			break;
		case 4:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if ((TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD")) != 0) && !TASK::IS_PED_WALKING(PLAYER::PLAYER_PED_ID()))
				{
					func_5510(2);
					Local_114.f_11.f_14 = __LIB_1__::func_360(63, -1, 0);
					Local_114.f_11.f_13 = __LIB_1__::func_360(7870, -1, 0);
					func_5505(5);
				}
			}
			break;
		case 5:
			if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
			{
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 1 /*INPUT_LOOK_LR*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 2 /*INPUT_LOOK_UD*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 5 /*INPUT_LOOK_LEFT_ONLY*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 6 /*INPUT_LOOK_RIGHT_ONLY*/, true);
			}
			func_5493();
			CAM::INVALIDATE_IDLE_CAM();
			break;
		case 6:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_114.f_835))
			{
				func_5492();
				return;
			}
			if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_112.f_22) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Local_114.f_835))
			{
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_112.f_22))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_112.f_22);
				}
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Local_114.f_835))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(Local_114.f_835);
				}
			}
			else if (!PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_112.f_22)))
			{
				Local_114.f_11.f_9 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_4703(), __LIB_5__::func_823(), 2, false, false, 1f, 0f, 1f);
				NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_112.f_22), Local_114.f_11.f_9, "anim@amb@nightclub@mini@drinking@bar@drink@beer", "intro_bartender", 2f, -2f, 13, 16, 1000f, 0);
				NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(Local_114.f_835, Local_114.f_11.f_9, "anim@amb@nightclub@mini@drinking@bar@drink@beer", "intro_bottle", 2f, -2f, 13);
				NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_114.f_11.f_9);
				func_5505(7);
			}
			break;
		case 7:
			if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_112.f_22) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Local_114.f_835))
			{
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_112.f_22))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_112.f_22);
				}
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Local_114.f_835))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(Local_114.f_835);
				}
			}
			else
			{
				iVar0 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_114.f_11.f_9);
				if (!BitTest(Local_114.f_11.f_8, 6))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar0) >= 0.45f)
					{
						func_5510(5);
						MISC::SET_BIT(&(Local_114.f_11.f_8), 6);
					}
				}
				if (iVar0 == -1 || PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar0) >= 0.99f)
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_22) && ENTITY::DOES_ENTITY_EXIST(Local_114.f_835))
					{
						Local_114.f_11.f_9 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_4703(), __LIB_5__::func_823(), 2, false, true, 1f, 0f, 1f);
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_112.f_22), Local_114.f_11.f_9, "anim@amb@nightclub@mini@drinking@bar@drink@idle_a", "idle_a_bartender", 2f, -2f, 13, 16, 1000f, 0);
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_114.f_11.f_9);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "PICK_UP", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
						__LIB_1__::func_746(63, 1, -1);
						MONEY::NETWORK_BUY_ITEM(0, MISC::GET_HASH_KEY("SNK_ITEM6"), 12, 1, false, 0, 0, 0, 0, true);
						MISC::CLEAR_BIT(&(Local_114.f_11.f_8), 6);
						func_5505(14);
					}
				}
			}
			break;
		case 12:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_114.f_836))
			{
				func_5491();
				return;
			}
			if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_112.f_22) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Local_114.f_836))
			{
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_112.f_22))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_112.f_22);
				}
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Local_114.f_836))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(Local_114.f_836);
				}
			}
			else if (!PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_112.f_22)))
			{
				Local_114.f_11.f_9 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_4703(), __LIB_5__::func_823(), 2, false, false, 1f, 0f, 1f);
				NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_112.f_22), Local_114.f_11.f_9, "ANIM@AMB@NIGHTCLUB@MINI@DRINKING@CHAMPAGNE_DRINKING@BASE@", "bartender_intro", 2f, -2f, 13, 16, 1000f, 0);
				NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(Local_114.f_836, Local_114.f_11.f_9, "ANIM@AMB@NIGHTCLUB@MINI@DRINKING@CHAMPAGNE_DRINKING@BASE@", "bartender_intro_bottle", 2f, -2f, 13);
				NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_114.f_11.f_9);
				if (Local_114.f_11.f_13 == 0)
				{
					__LIB_0__::func_151("CHAMP_HELP" /* GXT: The Drink Champagne action is now available. Select this Quickplay Action via the Style section of the Interaction Menu. */, -1);
				}
				func_5505(13);
			}
			break;
		case 13:
			if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_112.f_22) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Local_114.f_836))
			{
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_112.f_22))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_112.f_22);
				}
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Local_114.f_836))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(Local_114.f_836);
				}
			}
			else
			{
				iVar0 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_114.f_11.f_9);
				if (!BitTest(Local_114.f_11.f_8, 6))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar0) >= 0.75f)
					{
						func_5510(7);
						MISC::SET_BIT(&(Local_114.f_11.f_8), 6);
					}
				}
				if (iVar0 == -1 || PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar0) >= 0.99f)
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_22) && ENTITY::DOES_ENTITY_EXIST(Local_114.f_836))
					{
						Local_114.f_11.f_9 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_4703(), __LIB_5__::func_823(), 2, false, true, 1f, 0f, 1f);
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_112.f_22), Local_114.f_11.f_9, "anim@amb@nightclub@mini@drinking@bar@drink@idle_a", "idle_a_bartender", 2f, -2f, 13, 16, 1000f, 0);
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_114.f_11.f_9);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "PICK_UP", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
						MISC::CLEAR_BIT(&(Local_114.f_11.f_8), 6);
						func_5505(14);
					}
				}
			}
			break;
		case 8:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_114.f_827))
			{
				func_5489();
				return;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_114.f_828))
			{
				func_5487();
				return;
			}
			if ((!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_112.f_22) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Local_114.f_827)) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Local_114.f_828))
			{
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_112.f_22))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_112.f_22);
				}
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Local_114.f_827))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(Local_114.f_827);
				}
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Local_114.f_828))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(Local_114.f_828);
				}
			}
			else if (!PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_112.f_22)) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				Local_114.f_11.f_9 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_4703(), __LIB_5__::func_823(), 2, false, false, 1f, 0f, 1f);
				NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_112.f_22), Local_114.f_11.f_9, "anim@amb@nightclub@mini@drinking@bar@drink@base", "intro_bartender", 2f, -2f, 13, 16, 1000f, 0);
				NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(Local_114.f_827, Local_114.f_11.f_9, "anim@amb@nightclub@mini@drinking@bar@drink@base", "intro_shot_glass", 1000f, -1000f, 13);
				NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(Local_114.f_828, Local_114.f_11.f_9, "anim@amb@nightclub@mini@drinking@bar@drink@base", "intro_whiskey", 1000f, -1000f, 13);
				NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_114.f_11.f_9);
				func_5505(9);
			}
			break;
		case 9:
			if ((!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_112.f_22) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Local_114.f_827)) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Local_114.f_828))
			{
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_112.f_22))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_112.f_22);
				}
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Local_114.f_827))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(Local_114.f_827);
				}
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Local_114.f_828))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(Local_114.f_828);
				}
			}
			else
			{
				iVar0 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_114.f_11.f_9);
				if (iVar0 == -1 || PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar0) >= 0.99f)
				{
					if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_22) && ENTITY::DOES_ENTITY_EXIST(Local_114.f_828)) && ENTITY::DOES_ENTITY_EXIST(Local_114.f_827))
					{
						Local_114.f_11.f_9 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_4703(), __LIB_5__::func_823(), 2, false, false, 1f, 0f, 1f);
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_112.f_22), Local_114.f_11.f_9, func_5503(__LIB_9__::func_398(PLAYER::PLAYER_PED_ID())), func_5485(__LIB_9__::func_398(PLAYER::PLAYER_PED_ID())), 2f, -2f, 13, 16, 1000f, 0);
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_114.f_11.f_9, func_5503(__LIB_9__::func_398(PLAYER::PLAYER_PED_ID())), func_5502(__LIB_9__::func_398(PLAYER::PLAYER_PED_ID())), 2f, -2f, 13, 16, 1000f, 0);
						NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(Local_114.f_827, Local_114.f_11.f_9, func_5503(__LIB_9__::func_398(PLAYER::PLAYER_PED_ID())), func_5484(__LIB_9__::func_398(PLAYER::PLAYER_PED_ID())), 1000f, -1000f, 13);
						NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(Local_114.f_828, Local_114.f_11.f_9, func_5503(__LIB_9__::func_398(PLAYER::PLAYER_PED_ID())), func_5483(__LIB_9__::func_398(PLAYER::PLAYER_PED_ID())), 1000f, -1000f, 13);
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_114.f_11.f_9);
						func_5505(10);
					}
				}
			}
			break;
		case 10:
			CAM::SET_GAMEPLAY_CAM_IGNORE_ENTITY_COLLISION_THIS_UPDATE(Local_114.f_827);
			if ((!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_112.f_22) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Local_114.f_828)) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Local_114.f_827))
			{
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_112.f_22))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_112.f_22);
				}
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Local_114.f_828))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(Local_114.f_828);
				}
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Local_114.f_827))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(Local_114.f_827);
				}
			}
			else
			{
				iVar0 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_114.f_11.f_9);
				if (!BitTest(Local_114.f_11.f_8, 6))
				{
					fVar3 = 0.325f;
					if (__LIB_9__::func_398(PLAYER::PLAYER_PED_ID()) >= 3)
					{
						fVar3 = 0.425f;
					}
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar0) >= fVar3)
					{
						iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
						if (iVar4 == 0)
						{
							func_5510(3);
						}
						else if (iVar4 == 1)
						{
							func_5510(4);
						}
						else
						{
							func_5510(6);
						}
						MISC::SET_BIT(&(Local_114.f_11.f_8), 6);
					}
				}
				if (iVar0 == -1 || PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar0) >= 0.99f)
				{
					if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_22) && ENTITY::DOES_ENTITY_EXIST(Local_114.f_828)) && ENTITY::DOES_ENTITY_EXIST(Local_114.f_827))
					{
						Local_114.f_11.f_9 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_4703(), __LIB_5__::func_823(), 2, false, false, 1f, 0f, 1f);
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_112.f_22), Local_114.f_11.f_9, "anim@amb@nightclub@mini@drinking@bar@drink@base", "outro_bartender", 2f, -2f, 13, 16, 1000f, 0);
						NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(Local_114.f_827, Local_114.f_11.f_9, "anim@amb@nightclub@mini@drinking@bar@drink@base", "outro_shot_glass", 1000f, -1000f, 13);
						NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(Local_114.f_828, Local_114.f_11.f_9, "anim@amb@nightclub@mini@drinking@bar@drink@base", "outro_whiskey", 1000f, -1000f, 13);
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_114.f_11.f_9);
						__LIB_6__::func_410(PLAYER::PLAYER_ID(), 1, 0, 0);
						__LIB_10__::func_644();
						__LIB_6__::func_999(PLAYER::PLAYER_PED_ID(), 0, func_5482(Local_114.f_11.f_16));
						STATS::PLAYSTATS_MINIGAME_USAGE(1, 0, 0);
						MISC::CLEAR_BIT(&(Local_114.f_11.f_8), 6);
						func_5481();
						func_5505(11);
					}
				}
			}
			break;
		case 11:
			if ((!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_112.f_22) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Local_114.f_828)) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Local_114.f_827))
			{
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_112.f_22))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_112.f_22);
				}
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Local_114.f_828))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(Local_114.f_828);
				}
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Local_114.f_827))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(Local_114.f_827);
				}
			}
			else
			{
				iVar0 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_114.f_11.f_9);
				if (iVar0 == -1 || PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar0) >= 0.99f)
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_22))
					{
						Local_114.f_11.f_9 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_4703(), __LIB_5__::func_823(), 2, false, true, 1f, 0f, 1f);
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_112.f_22), Local_114.f_11.f_9, "anim@amb@nightclub@mini@drinking@bar@drink@idle_a", "idle_a_bartender", 2f, -2f, 13, 16, 1000f, 0);
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_114.f_11.f_9);
					}
					func_5505(14);
				}
			}
			break;
		case 14:
			func_5507(1);
			break;
	}
}

void func_5481()//Position - 0x1A5590
{
	if (BitTest(Local_114.f_38, 0))
	{
		__LIB_5__::func_828(PLAYER::PLAYER_PED_ID());
		MISC::CLEAR_BIT(&(Local_114.f_38), 0);
	}
	if (BitTest(Local_114.f_38, 1))
	{
		func_1426(PLAYER::PLAYER_PED_ID(), 1, Local_114.f_837, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		MISC::CLEAR_BIT(&(Local_114.f_38), 1);
	}
}

int func_5482(int iParam0)//Position - 0x1A55E4
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_24322 /* Tunable: -1337888390 */;
		case 2:
			return Global_262145.f_24323 /* Tunable: 985054134 */;
		default:
	}
	return 1;
}

char* func_5483(int iParam0)//Position - 0x1A5614
{
	char* sVar0;
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "one_whiskey";
			break;
		case 1:
			sVar0 = "two_whiskey";
			break;
		case 2:
			sVar0 = "three_whiskey";
			break;
		case 3:
			sVar0 = "four_whiskey";
			break;
	}
	return sVar0;
}

char* func_5484(int iParam0)//Position - 0x1A566B
{
	char* sVar0;
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "one_shot_glass";
			break;
		case 1:
			sVar0 = "two_shot_glass";
			break;
		case 2:
			sVar0 = "three_shot_glass";
			break;
		case 3:
			sVar0 = "four_glass";
			break;
	}
	return sVar0;
}

char* func_5485(int iParam0)//Position - 0x1A56C2
{
	char* sVar0;
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "one_bartender";
			break;
		case 1:
			sVar0 = "two_bartender";
			break;
		case 2:
			sVar0 = "three_bartender";
			break;
		case 3:
			sVar0 = "four_bartender";
			break;
	}
	return sVar0;
}

void func_5487()//Position - 0x1A5776
{
	struct<3> Var0;
	struct<3> Var1;
	int iVar2;
	STREAMING::REQUEST_MODEL(func_5488(Local_114.f_11.f_17));
	if (!STREAMING::HAS_MODEL_LOADED(func_5488(Local_114.f_11.f_17)))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_114.f_828))
	{
		Var0 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("anim@amb@nightclub@mini@drinking@bar@drink@base", "intro_whiskey", func_4703(), __LIB_5__::func_823(), 0f, 2) };
		Var1 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("anim@amb@nightclub@mini@drinking@bar@drink@base", "intro_whiskey", func_4703(), __LIB_5__::func_823(), 0f, 2) };
		iVar2 = OBJECT::CREATE_OBJECT(func_5488(Local_114.f_11.f_17), Var0, true, false, false);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_5488(Local_114.f_11.f_17));
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iVar2, false);
		NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(iVar2, true);
		ENTITY::SET_ENTITY_CAN_ONLY_BE_DAMAGED_BY_SCRIPT_PARTICIPANTS(iVar2, true);
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iVar2, Var0, false, false, true);
		ENTITY::SET_ENTITY_HEADING(iVar2, Var1.f_2);
		ENTITY::FREEZE_ENTITY_POSITION(iVar2, true);
		Local_114.f_828 = iVar2;
	}
}

int func_5488(int iParam0)//Position - 0x1A584B
{
	int iVar0;
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("ba_prop_battle_decanter_02_s");
			break;
		case 1:
			iVar0 = joaat("p_whiskey_bottle_s");
			break;
	}
	return iVar0;
}

void func_5489()//Position - 0x1A587F
{
	struct<3> Var0;
	struct<3> Var1;
	int iVar2;
	STREAMING::REQUEST_MODEL(func_5490());
	if (!STREAMING::HAS_MODEL_LOADED(func_5490()))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_114.f_827))
	{
		Var0 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("anim@amb@nightclub@mini@drinking@bar@drink@base", "intro_shot_glass", func_4703(), __LIB_5__::func_823(), 0f, 2) };
		Var1 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("anim@amb@nightclub@mini@drinking@bar@drink@base", "intro_shot_glass", func_4703(), __LIB_5__::func_823(), 0.01f, 2) };
		iVar2 = OBJECT::CREATE_OBJECT(func_5490(), Var0, true, false, false);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_5490());
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iVar2, false);
		NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(iVar2, true);
		ENTITY::SET_ENTITY_CAN_ONLY_BE_DAMAGED_BY_SCRIPT_PARTICIPANTS(iVar2, true);
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iVar2, Var0, false, false, true);
		ENTITY::SET_ENTITY_HEADING(iVar2, Var1.f_2);
		ENTITY::FREEZE_ENTITY_POSITION(iVar2, true);
		Local_114.f_827 = iVar2;
	}
}

int func_5490()//Position - 0x1A593C
{
	int iVar0;
	iVar0 = 0;
	iVar0 = joaat("p_cs_shot_glass_2_s");
	if (Local_114.f_11.f_16 == 1)
	{
		iVar0 = joaat("ba_prop_battle_shot_glass_01");
	}
	return iVar0;
}

void func_5491()//Position - 0x1A5962
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	int iVar3;
	iVar0 = joaat("xs_prop_arena_champ_closed");
	STREAMING::REQUEST_MODEL(iVar0);
	if (!STREAMING::HAS_MODEL_LOADED(iVar0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_114.f_836))
	{
		Var1 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("ANIM@AMB@NIGHTCLUB@MINI@DRINKING@CHAMPAGNE_DRINKING@BASE@", "bartender_intro_bottle", func_4703(), __LIB_5__::func_823(), 0.01f, 2) };
		Var2 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("ANIM@AMB@NIGHTCLUB@MINI@DRINKING@CHAMPAGNE_DRINKING@BASE@", "bartender_intro_bottle", func_4703(), __LIB_5__::func_823(), 0.01f, 2) };
		iVar3 = OBJECT::CREATE_OBJECT(iVar0, Var1, true, false, false);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iVar3, false);
		NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(iVar3, true);
		ENTITY::SET_ENTITY_CAN_ONLY_BE_DAMAGED_BY_SCRIPT_PARTICIPANTS(iVar3, true);
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iVar3, Var1, false, false, true);
		ENTITY::SET_ENTITY_HEADING(iVar3, Var2.f_2);
		ENTITY::FREEZE_ENTITY_POSITION(iVar3, true);
		Local_114.f_836 = iVar3;
	}
}

void func_5492()//Position - 0x1A5A22
{
	struct<3> Var0;
	struct<3> Var1;
	int iVar2;
	STREAMING::REQUEST_MODEL(joaat("prop_cs_beer_bot_01"));
	if (!STREAMING::HAS_MODEL_LOADED(joaat("prop_cs_beer_bot_01")))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_114.f_835))
	{
		Var0 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("anim@amb@nightclub@mini@drinking@bar@drink@beer", "intro_bottle", func_4703(), __LIB_5__::func_823(), 0.01f, 2) };
		Var1 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("anim@amb@nightclub@mini@drinking@bar@drink@beer", "intro_bottle", func_4703(), __LIB_5__::func_823(), 0.01f, 2) };
		iVar2 = OBJECT::CREATE_OBJECT(joaat("prop_cs_beer_bot_01"), Var0, true, false, false);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_cs_beer_bot_01"));
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iVar2, false);
		NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(iVar2, true);
		ENTITY::SET_ENTITY_CAN_ONLY_BE_DAMAGED_BY_SCRIPT_PARTICIPANTS(iVar2, true);
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iVar2, Var0, false, false, true);
		ENTITY::SET_ENTITY_HEADING(iVar2, Var1.f_2);
		ENTITY::FREEZE_ENTITY_POSITION(iVar2, true);
		Local_114.f_835 = iVar2;
	}
}

void func_5493()//Position - 0x1A5AE7
{
	if (!__LIB_3__::func_558())
	{
		func_5500();
		if (__LIB_3__::func_67("SNK_MNU", -1, 1))
		{
			if (BitTest(Local_114.f_11.f_8, 0))
			{
				func_5497();
				MISC::CLEAR_BIT(&(Local_114.f_11.f_8), 0);
			}
			else
			{
				__LIB_3__::func_781(Local_114.f_11.f_16, 1, 1);
			}
			func_5495();
			__LIB_10__::func_991(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
			func_5494();
		}
	}
}

void func_5494()//Position - 0x1A5B4E
{
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	HUD::HIDE_SCRIPTED_HUD_COMPONENT_THIS_FRAME(19);
	if (BitTest(Local_114.f_11.f_8, 1))
	{
		HUD::SHOW_HUD_COMPONENT_THIS_FRAME(4);
		HUD::SHOW_HUD_COMPONENT_THIS_FRAME(5);
		HUD::SHOW_HUD_COMPONENT_THIS_FRAME(13);
		HUD::SHOW_HUD_COMPONENT_THIS_FRAME(3);
		if (!__LIB_0__::func_864(&(Local_114.f_11.f_20)))
		{
			__LIB_0__::func_795(&(Local_114.f_11.f_20), 0, 0);
		}
		else if (__LIB_0__::func_937(&(Local_114.f_11.f_20), 4000, 0))
		{
			__LIB_0__::func_794(&(Local_114.f_11.f_20));
			MISC::CLEAR_BIT(&(Local_114.f_11.f_8), 1);
		}
	}
}

void func_5495()//Position - 0x1A5BC9
{
	if (!MONEY::NETWORK_CAN_SPEND_MONEY(func_5496(Local_114.f_11.f_16, 0), false, true, false, -1, 0))
	{
		__LIB_1__::func_789("BAR_DESC_2" /* GXT: You cannot afford this drink. */, 0, 0);
	}
	else if (Local_114.f_11.f_13 >= 5 && Local_114.f_11.f_16 == 3)
	{
		__LIB_1__::func_789("BAR_DESC_4" /* GXT: Your inventory is full. */, 0, 0);
	}
	else if (Local_114.f_11.f_14 >= 10 && Local_114.f_11.f_16 == 0)
	{
		__LIB_1__::func_789("BAR_DESC_4" /* GXT: Your inventory is full. */, 0, 0);
	}
	else if (Local_114.f_11.f_16 == 0)
	{
		__LIB_1__::func_789("BAR_DESC_5" /* GXT: Purchase a Pisswasser for your inventory. */, 0, 0);
	}
	else if (Local_114.f_11.f_16 == 3)
	{
		__LIB_1__::func_789("BAR_DESC_6" /* GXT: Purchase a bottle of Champagne for your inventory. This will allow you to perform the Drink Champagne action. */, 0, 0);
	}
	else
	{
		__LIB_1__::func_789("BAR_DESC_1" /* GXT: Order a drink from the bar. */, 0, 0);
	}
}

int func_5496(int iParam0, bool bParam1)//Position - 0x1A5C86
{
	int iVar0;
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_262145.f_26625 /* Tunable: -1199017465 */;
			break;
		case 1:
			iVar0 = Global_262145.f_26626 /* Tunable: -1772658642 */;
			break;
		case 2:
			iVar0 = Global_262145.f_26627 /* Tunable: -1148655256 */;
			break;
		case 3:
			iVar0 = Global_262145.f_26628 /* Tunable: -1659983460 */;
			break;
	}
	if (bParam1)
	{
		if (!MONEY::NETWORK_CAN_SPEND_MONEY(iVar0, false, true, false, -1, 0))
		{
			iVar0 = MONEY::NETWORK_GET_VC_BALANCE();
		}
	}
	return iVar0;
}

void func_5497()//Position - 0x1A5CFC
{
	bool bVar0;
	int iVar1;
	__LIB_4__::func_851("BAR_MENU_TITLE" /* GXT: BAR MENU */);
	bVar0 = true;
	iVar1 = 0;
	while (iVar1 < __LIB_1__::func_804())
	{
		bVar0 = true;
		if (!MONEY::NETWORK_CAN_SPEND_MONEY(func_5496(iVar1, 0), false, true, false, -1, 0))
		{
			bVar0 = false;
		}
		if (iVar1 == 3)
		{
			if (Local_114.f_11.f_13 >= 5)
			{
				bVar0 = false;
			}
		}
		if (iVar1 == 0)
		{
			if (Local_114.f_11.f_14 >= 10)
			{
				bVar0 = false;
			}
		}
		__LIB_8__::func_233(iVar1, func_5498(iVar1), 0, bVar0, 0, 0, 0);
		if (func_5496(iVar1, 0) > 0)
		{
			__LIB_8__::func_233(iVar1, "IMPOUND_COST" /* GXT: $~1~ */, 1, bVar0, 0, 0, 0);
			__LIB_9__::func_718(func_5496(iVar1, 0), 0);
		}
		else
		{
			__LIB_8__::func_233(iVar1, "STORE_FREE_PRICE" /* GXT: FREE */, 0, bVar0, 0, 0, 0);
		}
		iVar1++;
	}
	__LIB_3__::func_781(Local_114.f_11.f_16, 1, 1);
	__LIB_1__::func_792(201, "ITEM_SELECT" /* GXT: Select */, -1, 0);
	__LIB_1__::func_792(202, "ITEM_BACK" /* GXT: Back */, -1, 0);
}

char* func_5498(int iParam0)//Position - 0x1A5DDB
{
	switch (iParam0)
	{
		case 0:
			return "BAR_DRINK_1" /* GXT: Pisswasser */;
		case 1:
			return "BAR_DRINK_2" /* GXT: Vodka Shot */;
		case 2:
			return "BAR_DRINK_3" /* GXT: The Mount Whiskey Shot */;
		case 3:
			return "BAR_DRINK_9" /* GXT: Blêuter'd Champagne */;
		default:
	}
	return "";
}

void func_5500()//Position - 0x1A5E2F
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	if (BitTest(Local_114.f_11.f_8, 2))
	{
		return;
	}
	iVar1 = 150;
	if (PAD::IS_USING_CURSOR(2 /*FRONTEND_CONTROL*/))
	{
		iVar1 = 110;
	}
	__LIB_6__::func_25(1);
	PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 30 /*INPUT_MOVE_LR*/, true);
	PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 31 /*INPUT_MOVE_UD*/, true);
	PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/, true);
	PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/, true);
	PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/, true);
	bVar4 = PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/);
	bVar5 = (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/));
	iVar0 = PAD::GET_CONTROL_VALUE(2 /*FRONTEND_CONTROL*/, 31 /*INPUT_MOVE_UD*/);
	if (!BitTest(Local_114.f_11.f_8, 3))
	{
		if (PAD::IS_USING_CURSOR(2 /*FRONTEND_CONTROL*/))
		{
			func_5501(&bVar2, &bVar3, &bVar4, &bVar5);
		}
		else
		{
			bVar2 = (iVar0 < 100 || PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/));
			bVar3 = (iVar0 > 150 || PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/));
		}
		if (bVar2 || bVar3)
		{
			__LIB_0__::func_795(&(Local_114.f_11.f_18), 0, 0);
			MISC::SET_BIT(&(Local_114.f_11.f_8), 3);
		}
	}
	else if (__LIB_0__::func_937(&(Local_114.f_11.f_18), iVar1, 0))
	{
		__LIB_0__::func_794(&(Local_114.f_11.f_18));
		MISC::CLEAR_BIT(&(Local_114.f_11.f_8), 3);
	}
	if (bVar3)
	{
		Local_114.f_11.f_16++;
		if (Local_114.f_11.f_16 > (__LIB_1__::func_804() - 1))
		{
			Local_114.f_11.f_16 = 0;
		}
		AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
	}
	if (bVar2)
	{
		Local_114.f_11.f_16 = (Local_114.f_11.f_16 - 1);
		if (Local_114.f_11.f_16 < 0)
		{
			Local_114.f_11.f_16 = (__LIB_1__::func_804() - 1);
		}
		AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
	}
	if (bVar4)
	{
		bVar6 = false;
		if (Local_114.f_11.f_16 == 3)
		{
			if (Local_114.f_11.f_13 >= 5)
			{
				bVar6 = true;
			}
		}
		if (Local_114.f_11.f_16 == 0)
		{
			if (Local_114.f_11.f_14 >= 10)
			{
				bVar6 = true;
			}
		}
		if (!bVar6)
		{
			if (!MONEY::NETWORK_CAN_SPEND_MONEY(func_5496(Local_114.f_11.f_16, 0), false, true, false, -1, 0))
			{
				bVar6 = true;
			}
			else
			{
				MISC::SET_BIT(&(Local_114.f_11.f_8), 2);
			}
		}
		if (bVar6)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
		}
		else
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT" /* GXT: Filter List */, "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
		}
	}
	if ((bVar5 || __LIB_3__::func_718()) || __LIB_0__::func_877())
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
		func_5505(14);
		Local_114.f_11.f_16 = 0;
	}
}

void func_5501(var uParam0, var uParam1, bool bParam2, bool bParam3)//Position - 0x1A608D
{
	if (MISC::IS_PC_VERSION() && !NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
	{
		if (PAD::IS_USING_CURSOR(2 /*FRONTEND_CONTROL*/))
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 1 /*INPUT_LOOK_LR*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 2 /*INPUT_LOOK_UD*/, true);
			PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/, true);
			PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/, true);
			PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 238 /*INPUT_CURSOR_CANCEL*/, true);
			PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/);
			PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, 238 /*INPUT_CURSOR_CANCEL*/);
			PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 241 /*INPUT_CURSOR_SCROLL_UP*/, true);
			PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 242 /*INPUT_CURSOR_SCROLL_DOWN*/, true);
			if ((Global_4539961 == -1 || Global_4539961 == -4) || Global_4539961 == -6)
			{
				PAD::ENABLE_CONTROL_ACTION(1 /*CAMERA_CONTROL*/, 1 /*INPUT_LOOK_LR*/, true);
				PAD::ENABLE_CONTROL_ACTION(1 /*CAMERA_CONTROL*/, 2 /*INPUT_LOOK_UD*/, true);
			}
			else
			{
				PAD::DISABLE_CONTROL_ACTION(1 /*CAMERA_CONTROL*/, 1 /*INPUT_LOOK_LR*/, true);
				PAD::DISABLE_CONTROL_ACTION(1 /*CAMERA_CONTROL*/, 2 /*INPUT_LOOK_UD*/, true);
			}
			__LIB_3__::func_567(0, 0, 0, 1);
			__LIB_3__::func_52(0, -1, 1);
		}
		if (__LIB_3__::func_51())
		{
			if (Global_4539961 == Local_114.f_11.f_16)
			{
				*bParam2 = 1;
			}
			else
			{
				Local_114.f_11.f_16 = Global_4539961;
				__LIB_3__::func_781(Local_114.f_11.f_16, 1, 1);
			}
		}
		if (__LIB_3__::func_528())
		{
			*bParam3 = 1;
		}
		if (__LIB_3__::func_557(0, 0, 0) || PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/))
		{
			*uParam0 = 1;
		}
		if (__LIB_3__::func_556(0, 0, 0) || PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/))
		{
			*uParam1 = 1;
		}
	}
}

char* func_5502(int iParam0)//Position - 0x1A61BB
{
	char* sVar0;
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "one_player";
			break;
		case 1:
			sVar0 = "two_player";
			break;
		case 2:
			sVar0 = "three_player";
			break;
		case 3:
			sVar0 = "four_player";
			break;
	}
	return sVar0;
}

char* func_5503(int iParam0)//Position - 0x1A6212
{
	char* sVar0;
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "anim@amb@nightclub@mini@drinking@bar@drink@one";
			break;
		case 1:
			sVar0 = "anim@amb@nightclub@mini@drinking@bar@drink@two";
			break;
		case 2:
			sVar0 = "anim@amb@nightclub@mini@drinking@bar@drink@three";
			break;
		case 3:
			sVar0 = "anim@amb@nightclub@mini@drinking@bar@drink@four";
			break;
	}
	return sVar0;
}

int func_5504()//Position - 0x1A6269
{
	int iVar0;
	bool bVar1;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (__LIB_1__::func_693(bVar1, 1, 1) && !NETWORK::NETWORK_IS_PLAYER_CONCEALED(bVar1))
		{
			if (bVar1 != PLAYER::PLAYER_ID())
			{
				if (func_5506(bVar1))
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

void func_5505(int iParam0)//Position - 0x1A62BA
{
	Local_114.f_11.f_2 = iParam0;
}

int func_5506(bool bParam0)//Position - 0x1A62CB
{
	int iVar0;
	if (__LIB_1__::func_693(bParam0, 1, 1))
	{
		iVar0 = PLAYER::GET_PLAYER_PED(bParam0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar0, 2809.9763f, -3929.3813f, 183.41064f, 2809.9966f, -3930.49f, 185.41064f, 1f, false, true, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_5507(bool bParam0)//Position - 0x1A631F
{
	HUD::USE_FAKE_MP_CASH(false);
	if (BitTest(Local_114.f_11.f_8, 8))
	{
		AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("SAFEHOUSE_TREVOR_DRINK_WHISKEY");
	}
	if (Local_114.f_11.f_1)
	{
		AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("DLC_BATTLE/BTL_CHAMPAGNE_MINIGAME");
	}
	MISC::CLEAR_BIT(&(Local_113[PLAYER::PLAYER_ID() /*5*/]), 1);
	func_5508();
	if (bParam0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_114.f_827))
		{
			OBJECT::DELETE_OBJECT(&(Local_114.f_827));
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_114.f_828))
		{
			OBJECT::DELETE_OBJECT(&(Local_114.f_828));
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_114.f_835))
		{
			OBJECT::DELETE_OBJECT(&(Local_114.f_835));
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_114.f_836))
		{
			OBJECT::DELETE_OBJECT(&(Local_114.f_836));
		}
	}
	if (Local_114.f_11.f_2 > 1 && !Global_2667225.f_2681)
	{
		if (((((!__LIB_3__::func_366() && !__LIB_1__::func_584()) && !__LIB_0__::func_629()) && !__LIB_5__::func_845()) && !__LIB_3__::func_171(PLAYER::PLAYER_ID())) && !PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
		{
			__LIB_6__::func_410(PLAYER::PLAYER_ID(), 1, 0, 0);
		}
	}
	if (Local_114.f_11.f_15 != -1)
	{
		__LIB_3__::func_122(&(Local_114.f_11.f_15));
		Local_114.f_11.f_15 = -1;
	}
	if (Local_114.f_11.f_2 > 5 && Local_114.f_11.f_2 < 14)
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
		HUD::CLEAR_HELP(true);
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_22))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_112.f_22))
			{
				Local_114.f_11.f_9 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_4703(), __LIB_5__::func_823(), 2, false, true, 1f, 0f, 1f);
				NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_112.f_22), Local_114.f_11.f_9, "ANIM@AMB@NIGHTCLUB@MINI@DRINKING@CHAMPAGNE_DRINKING@BASE@", "Bartender_Idle", 2f, -2f, 13, 16, 1000f, 0);
				NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_114.f_11.f_9);
			}
		}
	}
	if (Local_114.f_11.f_2 > 3)
	{
		STREAMING::REMOVE_ANIM_DICT("anim@amb@nightclub@mini@drinking@bar@drink@idle_a");
		STREAMING::REMOVE_ANIM_DICT("anim@amb@nightclub@mini@drinking@bar@drink@base");
		STREAMING::REMOVE_ANIM_DICT("anim@amb@nightclub@mini@drinking@bar@drink@beer");
		STREAMING::REMOVE_ANIM_DICT(func_5503(0));
		STREAMING::REMOVE_ANIM_DICT(func_5503(1));
		STREAMING::REMOVE_ANIM_DICT(func_5503(2));
		STREAMING::REMOVE_ANIM_DICT(func_5503(3));
		STREAMING::REMOVE_ANIM_DICT("ANIM@AMB@NIGHTCLUB@MINI@DRINKING@CHAMPAGNE_DRINKING@BASE@");
	}
	if (Local_114.f_11.f_2 > 1)
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 185, false);
		PED::SET_PED_CAN_HEAD_IK(PLAYER::PLAYER_PED_ID(), true);
	}
	func_5481();
	MISC::CLEAR_BIT(&(Local_113[PLAYER::PLAYER_ID() /*5*/]), 0);
	func_5505(1);
}

void func_5508()//Position - 0x1A6565
{
	func_5509();
	__LIB_1__::func_895(1, -1);
}

void func_5509()//Position - 0x1A6577
{
	Local_114.f_11.f_16 = 0;
	Local_114.f_11.f_8 = 0;
	Local_114.f_11.f_11 = -1;
	Local_114.f_11.f_10 = -1;
	__LIB_0__::func_794(&(Local_114.f_11.f_18));
	MISC::SET_BIT(&(Local_114.f_11.f_8), 0);
}

void func_5510(int iParam0)//Position - 0x1A65B6
{
	char* sVar0;
	sVar0 = func_5511(iParam0);
	if ((((!MISC::IS_STRING_NULL_OR_EMPTY(sVar0) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_22)) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_112.f_22)) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_112.f_22))) && !__LIB_0__::func_864(&(Local_114.f_11.f_24)))
	{
		__LIB_0__::func_795(&(Local_114.f_11.f_24), 0, 0);
		AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(NETWORK::NET_TO_PED(Local_112.f_22), sVar0, "SPEECH_PARAMS_FORCE", 1);
	}
}

char* func_5511(int iParam0)//Position - 0x1A662D
{
	switch (iParam0)
	{
		case 0:
			if ((MISC::GET_FRAME_COUNT() % 2) == 0)
			{
				if (__LIB_1__::func_394())
				{
					return "GENERIC_HI_FEMALE";
				}
				else
				{
					return "GENERIC_HI_MALE";
				}
			}
			else
			{
				return "GENERIC_HI";
			}
			break;
		case 2:
			if (__LIB_4__::func_850(PLAYER::PLAYER_PED_ID()) >= 3)
			{
				return "PLAYER_DRUNK";
			}
			else
			{
				return "BARTENDER_GREET";
			}
			break;
		case 1:
		case 4:
		case 5:
		case 6:
		case 7:
		case 3:
			return "BARTENDER_SERVE";
		case 8:
			return "BUMP";
	}
	return "";
}

void func_5512()//Position - 0x1A66DA
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	if (BitTest(Local_114.f_11.f_8, 2))
	{
		if (func_5496(Local_114.f_11.f_16, 0) > 0)
		{
			if (!BitTest(Local_114.f_11.f_8, 4))
			{
				if (__LIB_0__::func_112())
				{
					__LIB_3__::func_407(joaat("SERVICE_SPEND_ARENA_SPECTATOR_BOX"), func_5496(Local_114.f_11.f_16, 1), &(Local_114.f_11.f_11), 0, 0, 1);
					Global_4534105[Local_114.f_11.f_11 /*85*/] = func_5515(Local_114.f_11.f_16);
					MISC::SET_BIT(&(Local_114.f_11.f_8), 4);
					__LIB_0__::func_794(&(Local_114.f_11.f_22));
				}
				else
				{
					MISC::CLEAR_BIT(&(Local_114.f_11.f_8), 2);
					MONEY::NETWORK_SPEND_ARENA_SPECTATOR_BOX(func_5496(Local_114.f_11.f_16, 1), func_5515(Local_114.f_11.f_16), false, true);
					iVar0 = 1;
				}
			}
			else if (__LIB_0__::func_937(&(Local_114.f_11.f_22), 15000, 0))
			{
				MISC::SET_BIT(&(Local_114.f_11.f_8), 5);
				iVar0 = 1;
			}
			else
			{
				if (Local_114.f_11.f_10 == -1)
				{
					if (Global_4534105[Local_114.f_11.f_11 /*85*/].f_66 != 2147483647)
					{
						Local_114.f_11.f_10 = Global_4534105[Local_114.f_11.f_11 /*85*/].f_66;
					}
				}
				iVar1 = 0;
				while (iVar1 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
				{
					if (SCRIPT::GET_EVENT_AT_INDEX(1, iVar1) == 227)
					{
						if (SCRIPT::GET_EVENT_DATA(1, iVar1, &Var2, 7))
						{
							if (Var2.f_0 == Local_114.f_11.f_10 && Var2.f_0 != -1)
							{
								if (Var2.f_2 == 0)
								{
								}
								else
								{
									MISC::SET_BIT(&(Local_114.f_11.f_8), 5);
								}
								iVar0 = 1;
							}
						}
					}
					iVar1++;
				}
			}
		}
		else if (!__LIB_0__::func_112())
		{
			MONEY::NETWORK_SPEND_ARENA_SPECTATOR_BOX(func_5496(Local_114.f_11.f_16, 0), func_5515(Local_114.f_11.f_16), false, true);
		}
		if (iVar0 || func_5496(Local_114.f_11.f_16, 0) <= 0)
		{
			if (!BitTest(Local_114.f_11.f_8, 5))
			{
				__LIB_1__::func_28(155);
				if (Local_114.f_11.f_16 == 0)
				{
					func_5505(6);
					MISC::SET_BIT(&(Local_114.f_11.f_8), 1);
				}
				else if (Local_114.f_11.f_16 == 3)
				{
					func_5505(12);
					MISC::SET_BIT(&(Local_113[PLAYER::PLAYER_ID() /*5*/]), 1);
					__LIB_1__::func_746(7870, 1, -1);
					MONEY::NETWORK_BUY_ITEM(0, MISC::GET_HASH_KEY("SNK_ITEM6"), 12, 1, false, 0, 0, 0, 0, true);
					MISC::SET_BIT(&(Local_114.f_11.f_8), 1);
				}
				else
				{
					if (Local_114.f_11.f_16 == 1)
					{
						Local_114.f_11.f_17 = 0;
					}
					else if (Local_114.f_11.f_16 == 2)
					{
						Local_114.f_11.f_17 = 1;
					}
					func_5513();
					func_5505(8);
					MISC::SET_BIT(&(Local_114.f_11.f_8), 1);
				}
			}
			MISC::SET_BIT(&(Local_114.f_11.f_8), 0);
			MISC::CLEAR_BIT(&(Local_114.f_11.f_8), 2);
			MISC::CLEAR_BIT(&(Local_114.f_11.f_8), 4);
		}
	}
}

void func_5513()//Position - 0x1A6973
{
	Local_114.f_837 = func_226(PLAYER::PLAYER_PED_ID(), 1, -1);
	if (__LIB_0__::func_348(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), 14, func_226(PLAYER::PLAYER_PED_ID(), 14, 0), -1))
	{
		MISC::SET_BIT(&(Local_114.f_38), 4);
	}
	if (__LIB_1__::func_102(PLAYER::PLAYER_PED_ID(), 7))
	{
		MISC::SET_BIT(&(Local_114.f_38), 3);
	}
	func_1426(PLAYER::PLAYER_PED_ID(), 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	func_1508(PLAYER::PLAYER_PED_ID(), 4, -1, -1);
	if (__LIB_3__::func_332(PLAYER::PLAYER_PED_ID()))
	{
		__LIB_5__::func_828(PLAYER::PLAYER_PED_ID());
		MISC::SET_BIT(&(Local_114.f_38), 0);
	}
	else
	{
		MISC::CLEAR_BIT(&(Local_114.f_38), 0);
	}
	if (BitTest(Local_114.f_38, 4))
	{
		PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 0);
		MISC::CLEAR_BIT(&(Local_114.f_38), 4);
	}
	if (BitTest(Local_114.f_38, 3))
	{
		PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 7, 0, 0, 0);
		MISC::CLEAR_BIT(&(Local_114.f_38), 3);
	}
	MISC::SET_BIT(&(Local_114.f_38), 1);
}

int func_5515(int iParam0)//Position - 0x1A6ABE
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 1:
			return 4;
		case 2:
			return 5;
		case 3:
			return 6;
		default:
	}
	return 0;
}

void func_5516()//Position - 0x1A6AF6
{
	int iVar0;
	if (Local_112.f_12 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (BitTest(Local_113[iVar0 /*5*/], 0))
			{
				Local_112.f_12 = iVar0;
			}
			else
			{
				iVar0++;
			}
		}
	}
	else if (!BitTest(Local_113[Local_112.f_12 /*5*/], 0))
	{
		MISC::CLEAR_BIT(&(Local_112.f_10), 1);
		Local_112.f_12 = -1;
	}
	else if (BitTest(Local_113[Local_112.f_12 /*5*/], 1))
	{
		MISC::SET_BIT(&(Local_112.f_10), 1);
	}
	else
	{
		MISC::CLEAR_BIT(&(Local_112.f_10), 1);
	}
}

void func_5517()//Position - 0x1A6B71
{
	struct<3> Var0;
	struct<3> Var1;
	int iVar2;
	char* sVar3;
	int iVar4;
	if ((BitTest(Global_1965531, 11) && CAM::IS_SCREEN_FADED_OUT()) && Local_114.f_842.f_9 > 2)
	{
		func_5526(1);
	}
	if (Local_114.f_842.f_9 > 2)
	{
		CAM::SET_THIRD_PERSON_CAM_RELATIVE_PITCH_LIMITS_THIS_UPDATE(-90f, 10f);
	}
	switch (Local_114.f_842.f_9)
	{
		case 0:
			func_5525(1);
			break;
		case 1:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), func_5524(Local_114.f_842.f_2, 0), func_5524(Local_114.f_842.f_2, 1), 1f, false, true, 0) && func_5523())
			{
				func_5525(2);
			}
			else
			{
				Local_114.f_842.f_2++;
				if (Local_114.f_842.f_2 >= 12)
				{
					Local_114.f_842.f_2 = 0;
				}
			}
			break;
		case 2:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), func_5524(Local_114.f_842.f_2, 0), func_5524(Local_114.f_842.f_2, 1), 1f, false, true, 0) && func_5523())
			{
				if ((((((__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1) && !Global_1931426) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && !__LIB_4__::func_849()) && !__LIB_3__::func_558()) && !__LIB_1__::func_512()) && !(func_5522(Local_114.f_842.f_2) && Global_262145.f_26622 /* Tunable: 204112262 */))
				{
					if (Local_114.f_842.f_6 == -1)
					{
						__LIB_5__::func_569(&(Local_114.f_842.f_6), 4, "MPJAC_SIT" /* GXT: Press ~INPUT_CONTEXT~ to sit down. */, 0, 0, 0, 0);
					}
					else if (__LIB_3__::func_113(Local_114.f_842.f_6, 1))
					{
						__LIB_3__::func_122(&(Local_114.f_842.f_6));
						Local_114.f_842.f_6 = -1;
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 185, true);
						__LIB_1__::func_92();
						Local_114.f_842.f_10 = func_4700(Local_114.f_842.f_2);
						if (func_5522(Local_114.f_842.f_2))
						{
							Local_114.f_842.f_3 = func_5521(Local_114.f_842.f_2);
						}
						__LIB_6__::func_410(PLAYER::PLAYER_ID(), 0, 256, 0);
						func_5525(3);
					}
				}
				else if (Local_114.f_842.f_6 != -1)
				{
					__LIB_3__::func_122(&(Local_114.f_842.f_6));
					Local_114.f_842.f_6 = -1;
				}
			}
			else
			{
				if (Local_114.f_842.f_6 != -1)
				{
					__LIB_3__::func_122(&(Local_114.f_842.f_6));
					Local_114.f_842.f_6 = -1;
				}
				Local_114.f_842.f_2 = 0;
				func_5525(1);
			}
			break;
		case 3:
			STREAMING::REQUEST_NAMED_PTFX_ASSET("scr_safehouse");
			STREAMING::REQUEST_ANIM_DICT(Local_114.f_842.f_10);
			if ((AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SAFEHOUSE_FRANKLIN_SOFA", false, -1) && STREAMING::HAS_NAMED_PTFX_ASSET_LOADED("scr_safehouse")) && STREAMING::HAS_ANIM_DICT_LOADED(Local_114.f_842.f_10))
			{
				Var0 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(Local_114.f_842.f_10, "enter", func_4699(Local_114.f_842.f_2), func_4698(Local_114.f_842.f_2), 0.01f, 2) };
				Var1 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(Local_114.f_842.f_10, "enter", func_4699(Local_114.f_842.f_2), func_4698(Local_114.f_842.f_2), 0.01f, 2) };
				TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), Var0, 1f, 20000, Var1.f_2, 0.05f);
				func_5525(4);
			}
			break;
		case 4:
			if (func_5522(Local_114.f_842.f_2))
			{
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_112.f_13[Local_114.f_842.f_3]))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_112.f_13[Local_114.f_842.f_3]);
					return;
				}
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD")) != 0)
			{
				Local_114.f_842.f_4 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_4699(Local_114.f_842.f_2), func_4698(Local_114.f_842.f_2), 2, true, false, 1f, 0f, 1f);
				NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_114.f_842.f_4, Local_114.f_842.f_10, "enter", 2f, -2f, 13, 16, 1000f, 0);
				NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_114.f_842.f_4);
				if (!func_5522(Local_114.f_842.f_2))
				{
					__LIB_6__::func_410(PLAYER::PLAYER_ID(), 1, 0, 0);
				}
				func_5525(5);
			}
			break;
		case 5:
			Local_114.f_842.f_5 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_114.f_842.f_4);
			if (func_5522(Local_114.f_842.f_2))
			{
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_112.f_13[Local_114.f_842.f_3]))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_112.f_13[Local_114.f_842.f_3]);
					return;
				}
			}
			if ((((((((BitTest(Local_114.f_842.f_1, 0) && __LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1)) && !__LIB_4__::func_849()) && !__LIB_3__::func_558()) && !BitTest(Local_114.f_842.f_1, 1)) && !__LIB_1__::func_512()) && !__LIB_0__::func_77(0)) && !__LIB_0__::func_193()) && !__LIB_0__::func_104(0))
			{
				if (PAD::HAVE_CONTROLS_CHANGED(2 /*FRONTEND_CONTROL*/))
				{
					if (Local_114.f_842.f_6 != -1)
					{
						__LIB_3__::func_122(&(Local_114.f_842.f_6));
						Local_114.f_842.f_6 = -1;
					}
				}
				if (Local_114.f_842.f_6 == -1)
				{
					if (func_5522(Local_114.f_842.f_2))
					{
						if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
						{
							__LIB_5__::func_569(&(Local_114.f_842.f_6), 4, "BLUNT_HELP_PC" /* GXT: Press ~INPUT_FRONTEND_X~ to smoke.~n~Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */, 0, 0, 0, 0);
						}
						else
						{
							__LIB_5__::func_569(&(Local_114.f_842.f_6), 4, "BLUNT_HELP" /* GXT: Press ~INPUT_FRONTEND_X~ to smoke.~n~Press ~INPUT_CONTEXT~ to stand up. */, 0, 0, 0, 0);
						}
					}
					else if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
					{
						__LIB_5__::func_569(&(Local_114.f_842.f_6), 4, "MPOFSEAT_PCEXIT" /* GXT: Press ~INPUT_SCRIPT_RRIGHT~ to stand up. */, 0, 0, 0, 0);
					}
					else
					{
						__LIB_5__::func_569(&(Local_114.f_842.f_6), 4, "MPOFSEAT_EXIT" /* GXT: Press ~INPUT_FRONTEND_RIGHT~ to stand up. */, 0, 0, 0, 0);
					}
				}
				else
				{
					if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
					{
						iVar2 = 225;
					}
					else
					{
						iVar2 = 190;
					}
					if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, iVar2))
					{
						Local_114.f_842.f_4 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_4699(Local_114.f_842.f_2), func_4698(Local_114.f_842.f_2), 2, false, false, 1f, 0f, 1f);
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_114.f_842.f_4, Local_114.f_842.f_10, "exit", 2f, -2f, 13, 16, 1000f, 0);
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_114.f_842.f_4);
						__LIB_3__::func_122(&(Local_114.f_842.f_6));
						Local_114.f_842.f_6 = -1;
						func_5525(7);
					}
					if (func_5522(Local_114.f_842.f_2))
					{
						if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 203 /*INPUT_FRONTEND_X*/) && !PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, iVar2))
						{
							MISC::SET_BIT(&(Local_114.f_842.f_1), 2);
							__LIB_3__::func_122(&(Local_114.f_842.f_6));
							Local_114.f_842.f_6 = -1;
							__LIB_31__::func_145();
							Local_114.f_842 = 0;
							func_5525(6);
						}
					}
				}
			}
			if (!BitTest(Local_114.f_842.f_1, 2))
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_114.f_842.f_5))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_114.f_842.f_5) >= 0.99f)
					{
						Local_114.f_842.f_4 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_4699(Local_114.f_842.f_2), func_4698(Local_114.f_842.f_2), 2, true, false, 1f, 0f, 1f);
						sVar3 = "base";
						if (Local_114.f_842)
						{
							iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
							switch (iVar4)
							{
								case 0:
									sVar3 = "idle_a";
									break;
								case 1:
									sVar3 = "idle_b";
									break;
								case 2:
									sVar3 = "idle_c";
									break;
							}
							Local_114.f_842 = 0;
						}
						else
						{
							sVar3 = "base";
							Local_114.f_842 = 1;
						}
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_114.f_842.f_4, Local_114.f_842.f_10, sVar3, 2f, -2f, 13, 16, 1000f, 0);
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_114.f_842.f_4);
						Local_114.f_842.f_1 = 0;
						MISC::SET_BIT(&(Local_114.f_842.f_1), 0);
						if (BitTest(Local_114.f_842.f_1, 1))
						{
							func_5481();
							MISC::CLEAR_BIT(&(Local_114.f_842.f_1), 1);
						}
					}
					else if (!BitTest(Local_114.f_842.f_1, 1))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_114.f_834))
						{
							OBJECT::DELETE_OBJECT(&(Local_114.f_834));
						}
					}
				}
			}
			else
			{
				MISC::CLEAR_BIT(&(Local_114.f_842.f_1), 2);
			}
			if (BitTest(Local_114.f_842.f_1, 1))
			{
				__LIB_0__::func_646();
				if (!BitTest(Local_114.f_842.f_1, 3) && ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), MISC::GET_HASH_KEY("vfx_xs_lighter_sparks")))
				{
					GRAPHICS::USE_PARTICLE_FX_ASSET("scr_safehouse");
					GRAPHICS::START_NETWORKED_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_sh_lighter_sparks", Local_114.f_834, 0f, 0f, 0.05f, 0f, 0f, 0f, 1f, false, false, false);
					MISC::SET_BIT(&(Local_114.f_842.f_1), 3);
				}
				if (!BitTest(Local_114.f_842.f_1, 4) && ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), MISC::GET_HASH_KEY("vfx_xs_lighter_flame_start")))
				{
					GRAPHICS::USE_PARTICLE_FX_ASSET("scr_safehouse");
					Local_114.f_842.f_7 = GRAPHICS::START_NETWORKED_PARTICLE_FX_LOOPED_ON_ENTITY("scr_sh_lighter_flame", Local_114.f_834, 0f, 0f, 0.05f, 0f, 0f, 0f, 1f, false, false, false, 1f, 1f, 1f, 0f);
					MISC::SET_BIT(&(Local_114.f_842.f_1), 4);
				}
				if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_114.f_842.f_7) && ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), MISC::GET_HASH_KEY("vfx_xs_lighter_flame_stop")))
				{
					GRAPHICS::STOP_PARTICLE_FX_LOOPED(Local_114.f_842.f_7, false);
				}
				if (!BitTest(Local_114.f_842.f_1, 5) && ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), MISC::GET_HASH_KEY("vfx_xs_cig_smoke_start")))
				{
					GRAPHICS::USE_PARTICLE_FX_ASSET("scr_safehouse");
					Local_114.f_842.f_8 = GRAPHICS::START_NETWORKED_PARTICLE_FX_LOOPED_ON_ENTITY("scr_sh_cig_smoke", NETWORK::NET_TO_OBJ(Local_112.f_13[Local_114.f_842.f_3]), 0.055f, 0f, 0f, 0f, 0f, 0f, 2.5f, false, false, false, 1f, 1f, 1f, 0f);
					MISC::SET_BIT(&(Local_114.f_842.f_1), 5);
				}
				if (!BitTest(Local_114.f_842.f_1, 6) && ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), MISC::GET_HASH_KEY("vfx_xs_cig_smoke_exhale")))
				{
					GRAPHICS::USE_PARTICLE_FX_ASSET("scr_safehouse");
					GRAPHICS::START_NETWORKED_PARTICLE_FX_NON_LOOPED_ON_PED_BONE("scr_sh_cig_exhale_mouth", PLAYER::PLAYER_PED_ID(), -0.025f, 0.13f, 0f, 0f, 0f, 0f, 31086, 1f, false, false, false);
					MISC::SET_BIT(&(Local_114.f_842.f_1), 6);
				}
				if (!BitTest(Local_114.f_842.f_1, 7) && ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), MISC::GET_HASH_KEY("vfx_xs_cig_smoke_exhale")))
				{
					GRAPHICS::USE_PARTICLE_FX_ASSET("scr_safehouse");
					GRAPHICS::START_NETWORKED_PARTICLE_FX_NON_LOOPED_ON_PED_BONE("scr_sh_cig_exhale_nose", PLAYER::PLAYER_PED_ID(), -0.025f, 0.12f, 0f, 0f, 90f, 0f, 31086, 1f, false, false, false);
					MISC::SET_BIT(&(Local_114.f_842.f_1), 7);
				}
				if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_114.f_842.f_8) && ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), MISC::GET_HASH_KEY("vfx_xs_cig_smoke_stop")))
				{
					GRAPHICS::STOP_PARTICLE_FX_LOOPED(Local_114.f_842.f_8, false);
				}
			}
			break;
		case 6:
			__LIB_0__::func_646();
			if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_112.f_13[Local_114.f_842.f_3]))
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_112.f_13[Local_114.f_842.f_3]);
				return;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_114.f_834))
			{
				func_5519(Local_114.f_842.f_2);
				return;
			}
			func_5513();
			Local_114.f_842.f_4 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_4699(Local_114.f_842.f_2), func_4698(Local_114.f_842.f_2), 2, true, false, 1f, 0f, 1f);
			NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_114.f_842.f_4, Local_114.f_842.f_10, "smoke", 2f, -2f, 13, 16, 1000f, 0);
			NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_112.f_13[Local_114.f_842.f_3]), Local_114.f_842.f_4, Local_114.f_842.f_10, func_5518(Local_114.f_842.f_2), 2f, -2f, 13);
			NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(Local_114.f_834, Local_114.f_842.f_4, Local_114.f_842.f_10, "smoke_lighter", 2f, -2f, 13);
			NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_114.f_842.f_4);
			__LIB_3__::func_122(&(Local_114.f_842.f_6));
			Local_114.f_842.f_6 = -1;
			MISC::SET_BIT(&(Local_114.f_842.f_1), 2);
			MISC::SET_BIT(&(Local_114.f_842.f_1), 1);
			func_5525(5);
			break;
		case 7:
			Local_114.f_842.f_5 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_114.f_842.f_4);
			if ((Local_114.f_842.f_5 == -1 || PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_114.f_842.f_5) >= 0.99f) || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("can_early_out_for_movement")))
			{
				func_5526(0);
			}
			break;
	}
}

char* func_5518(int iParam0)//Position - 0x1A77AE
{
	switch (iParam0)
	{
		case 0:
		case 8:
			return "smoke_cigar_a";
		case 1:
		case 9:
			return "smoke_cigar_b";
		case 2:
		case 10:
			return "smoke_cigar_c";
		case 3:
		case 11:
			return "smoke_cigar_d";
		default:
	}
	return "";
}

void func_5519(int iParam0)//Position - 0x1A7811
{
	struct<3> Var0;
	struct<3> Var1;
	int iVar2;
	STREAMING::REQUEST_MODEL(joaat("ex_prop_exec_lighter_01"));
	if (!STREAMING::HAS_MODEL_LOADED(joaat("ex_prop_exec_lighter_01")))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_114.f_834))
	{
		Var0 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(func_4700(iParam0), "smoke_lighter", func_4699(iParam0), func_4698(iParam0), 0.01f, 2) };
		Var1 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(func_4700(iParam0), "smoke_lighter", func_4699(iParam0), func_4698(iParam0), 0.01f, 2) };
		iVar2 = OBJECT::CREATE_OBJECT(joaat("ex_prop_exec_lighter_01"), Var0, true, false, false);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ex_prop_exec_lighter_01"));
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iVar2, false);
		NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(iVar2, true);
		ENTITY::SET_ENTITY_CAN_ONLY_BE_DAMAGED_BY_SCRIPT_PARTICIPANTS(iVar2, true);
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iVar2, Var0, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(iVar2, Var1, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(iVar2, true);
		ENTITY::SET_ENTITY_COLLISION(iVar2, false, false);
		Local_114.f_834 = iVar2;
	}
}

int func_5521(int iParam0)//Position - 0x1A78FA
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
		case 8:
			return 4;
		case 9:
			return 5;
		case 10:
			return 6;
		case 11:
			return 7;
		default:
	}
	return 0;
}

int func_5522(int iParam0)//Position - 0x1A795A
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 8:
		case 9:
		case 10:
		case 11:
			return 1;
		default:
	}
	return 0;
}

int func_5523()//Position - 0x1A799E
{
	int iVar0;
	bool bVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (__LIB_1__::func_693(bVar1, 1, 1) && !NETWORK::NETWORK_IS_PLAYER_CONCEALED(bVar1))
		{
			if (bVar1 != PLAYER::PLAYER_ID())
			{
				iVar2 = PLAYER::GET_PLAYER_PED(bVar1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar2) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar2, func_5524(Local_114.f_842.f_2, 0), func_5524(Local_114.f_842.f_2, 1), 1.5f, false, true, 0))
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

Vector3 func_5524(int iParam0, bool bParam1)//Position - 0x1A7A24
{
	if (!bParam1)
	{
		switch (iParam0)
		{
			case 0:
				return 2806.3672f, -3934.2588f, 183.41069f;
			case 1:
				return 2803.9973f, -3934.4917f, 183.41069f;
			case 2:
				return 2803.746f, -3932.1746f, 183.41069f;
			case 3:
				return 2806.087f, -3931.954f, 183.41069f;
			case 4:
				return 2807.3047f, -3930.1282f, 183.41069f;
			case 5:
				return 2805.1406f, -3930.9236f, 183.41069f;
			case 6:
				return 2804.2969f, -3928.769f, 183.41069f;
			case 7:
				return 2806.4683f, -3927.9058f, 183.41069f;
			case 8:
				return 2810.5564f, -3926.42f, 183.41069f;
			case 9:
				return 2808.3076f, -3927.2703f, 183.41069f;
			case 10:
				return 2807.3833f, -3925.0198f, 183.41069f;
			case 11:
				return 2809.6292f, -3924.1252f, 183.41069f;
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 2805.8184f, -3933.3828f, 185.41069f;
			case 1:
				return 2804.9087f, -3933.946f, 185.41069f;
			case 2:
				return 2804.3096f, -3933.0603f, 185.41069f;
			case 3:
				return 2805.264f, -3932.4478f, 185.41069f;
			case 4:
				return 2806.525f, -3929.3582f, 185.41069f;
			case 5:
				return 2805.874f, -3930.1821f, 185.41069f;
			case 6:
				return 2805.0715f, -3929.537f, 185.41069f;
			case 7:
				return 2805.75f, -3928.6445f, 185.41069f;
			case 8:
				return 2809.7122f, -3925.5845f, 185.41069f;
			case 9:
				return 2809.0605f, -3926.4712f, 185.41069f;
			case 10:
				return 2808.1877f, -3925.8157f, 185.41069f;
			case 11:
				return 2808.8447f, -3924.904f, 185.41069f;
			}
		default:
	}
	return 0f, 0f, 0f;
}

void func_5525(int iParam0)//Position - 0x1A7C86
{
	Local_114.f_842.f_9 = iParam0;
}

void func_5526(bool bParam0)//Position - 0x1A7C98
{
	if (Local_114.f_842.f_9 > 3)
	{
		NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(Local_114.f_842.f_4);
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_114.f_842.f_8))
		{
			GRAPHICS::STOP_PARTICLE_FX_LOOPED(Local_114.f_842.f_8, false);
		}
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_114.f_842.f_7))
		{
			GRAPHICS::STOP_PARTICLE_FX_LOOPED(Local_114.f_842.f_7, false);
		}
	}
	if (Local_114.f_842.f_6 != -1)
	{
		__LIB_3__::func_122(&(Local_114.f_842.f_6));
		Local_114.f_842.f_6 = -1;
	}
	Local_114.f_842.f_1 = 0;
	Local_114.f_842 = 0;
	if (Local_114.f_842.f_9 > 3)
	{
		if (bParam0)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_112.f_13[Local_114.f_842.f_3]) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_112.f_13[Local_114.f_842.f_3]))
			{
				__LIB_1__::func_445(&(Local_112.f_13[Local_114.f_842.f_3]));
			}
		}
		AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("SAFEHOUSE_FRANKLIN_SOFA");
		STREAMING::REMOVE_ANIM_DICT(Local_114.f_842.f_10);
	}
	if (Local_114.f_842.f_9 > 2)
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 185, false);
		PED::SET_PED_CAN_HEAD_IK(PLAYER::PLAYER_PED_ID(), true);
		__LIB_1__::func_91();
	}
	if ((((!__LIB_3__::func_366() && !__LIB_1__::func_584()) && !__LIB_0__::func_629()) && !__LIB_5__::func_845()) && !PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
		__LIB_6__::func_410(PLAYER::PLAYER_ID(), 1, 0, 0);
	}
	func_5525(0);
}

void func_5527()//Position - 0x1A7DE9
{
	if (!func_5529())
	{
		MISC::SET_BIT(&(Local_114.f_38), 8);
	}
	if ((BitTest(Global_4718592.f_32, 23) && !BitTest(Global_1965532, 13)) && !BitTest(Global_1965532, 19))
	{
		return;
	}
	if ((BitTest(Global_4718592.f_30, 25) && !BitTest(Global_1965532, 15)) && !BitTest(Global_1965532, 19))
	{
		return;
	}
	if (Global_1574965)
	{
		if (!BitTest(Global_1965531, 23) && !BitTest(Local_114.f_38, 7))
		{
			if ((CAM::IS_SCREEN_FADED_IN() && __LIB_6__::func_196()) && !func_5528(&Global_2788057))
			{
				HUD::CLEAR_HELP(true);
				MISC::SET_BIT(&(Local_114.f_38), 7);
				MISC::SET_BIT(&Global_1965531, 23);
			}
		}
		else if (!BitTest(Local_114.f_38, 8))
		{
			if (__LIB_4__::func_46())
			{
				MISC::SET_BIT(&(Local_114.f_38), 8);
			}
			else if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !func_5528(&Global_2788057))
			{
				__LIB_0__::func_151("ARENA_VIP_HELP" /* GXT: While in the Spectator Box you can use activities or spectate the remaining players. */, -1);
				MISC::SET_BIT(&(Local_114.f_38), 8);
			}
		}
	}
}

int func_5528(var uParam0)//Position - 0x1A7EFB
{
	if (uParam0->f_14 != -1 || __LIB_0__::func_1("WS_AP_HELP" /* GXT: Arena Points not awarded. Go to www.arenawar.tv to purchase an Arena Workshop and begin your Career in the Arena War Series. This will allow you to track earned AP to increase your Career sponsorship tier level. RP awarded instead. */))
	{
		return 1;
	}
	return 0;
}

bool func_5529()//Position - 0x1A7F20
{
	return __LIB_5__::func_846(3);
}

int func_5532()//Position - 0x1A7F5C
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	struct<3> Var7;
	if (!ENTITY::DOES_ENTITY_EXIST(Local_114.f_829[0]))
	{
		STREAMING::REQUEST_MODEL(joaat("lux_prop_ashtray_luxe_01"));
		if (!STREAMING::HAS_MODEL_LOADED(joaat("lux_prop_ashtray_luxe_01")))
		{
			return 0;
		}
		STREAMING::REQUEST_ANIM_DICT(func_4700(0));
		if (!STREAMING::HAS_ANIM_DICT_LOADED(func_4700(0)))
		{
			return 0;
		}
		Var0 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(func_4700(0), "base_ashtray_ab", func_4699(0), func_4698(0), 0f, 2) };
		Var1 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(func_4700(0), "base_ashtray_ab", func_4699(0), func_4698(0), 0f, 2) };
		Local_114.f_829[0] = OBJECT::CREATE_OBJECT(joaat("lux_prop_ashtray_luxe_01"), Var0, false, false, false);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("lux_prop_ashtray_luxe_01"));
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED(Local_114.f_829[0], false);
		ENTITY::SET_ENTITY_CAN_ONLY_BE_DAMAGED_BY_SCRIPT_PARTICIPANTS(Local_114.f_829[0], true);
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_114.f_829[0], Var0, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(Local_114.f_829[0], Var1, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(Local_114.f_829[0], true);
		STREAMING::REMOVE_ANIM_DICT(func_4700(0));
		return 0;
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Local_114.f_829[1]))
	{
		STREAMING::REQUEST_MODEL(joaat("lux_prop_ashtray_luxe_01"));
		if (!STREAMING::HAS_MODEL_LOADED(joaat("lux_prop_ashtray_luxe_01")))
		{
			return 0;
		}
		STREAMING::REQUEST_ANIM_DICT(func_4700(0));
		if (!STREAMING::HAS_ANIM_DICT_LOADED(func_4700(0)))
		{
			return 0;
		}
		Var2 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(func_4700(0), "base_ashtray_cd", func_4699(0), func_4698(0), 0f, 2) };
		Var3 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(func_4700(0), "base_ashtray_cd", func_4699(0), func_4698(0), 0f, 2) };
		Local_114.f_829[1] = OBJECT::CREATE_OBJECT(joaat("lux_prop_ashtray_luxe_01"), Var2, false, false, false);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("lux_prop_ashtray_luxe_01"));
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED(Local_114.f_829[1], false);
		ENTITY::SET_ENTITY_CAN_ONLY_BE_DAMAGED_BY_SCRIPT_PARTICIPANTS(Local_114.f_829[1], true);
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_114.f_829[1], Var2, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(Local_114.f_829[1], Var3, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(Local_114.f_829[1], true);
		STREAMING::REMOVE_ANIM_DICT(func_4700(0));
		return 0;
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Local_114.f_829[2]))
	{
		STREAMING::REQUEST_MODEL(joaat("lux_prop_ashtray_luxe_01"));
		if (!STREAMING::HAS_MODEL_LOADED(joaat("lux_prop_ashtray_luxe_01")))
		{
			return 0;
		}
		STREAMING::REQUEST_ANIM_DICT(func_4700(8));
		if (!STREAMING::HAS_ANIM_DICT_LOADED(func_4700(8)))
		{
			return 0;
		}
		Var4 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(func_4700(8), "base_ashtray_ab", func_4699(8), func_4698(8), 0f, 2) };
		Var5 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(func_4700(8), "base_ashtray_ab", func_4699(8), func_4698(8), 0f, 2) };
		Local_114.f_829[2] = OBJECT::CREATE_OBJECT(joaat("lux_prop_ashtray_luxe_01"), Var4, false, false, false);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("lux_prop_ashtray_luxe_01"));
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED(Local_114.f_829[2], false);
		ENTITY::SET_ENTITY_CAN_ONLY_BE_DAMAGED_BY_SCRIPT_PARTICIPANTS(Local_114.f_829[2], true);
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_114.f_829[2], Var4, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(Local_114.f_829[2], Var5, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(Local_114.f_829[2], true);
		STREAMING::REMOVE_ANIM_DICT(func_4700(8));
		return 0;
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Local_114.f_829[3]))
	{
		STREAMING::REQUEST_MODEL(joaat("lux_prop_ashtray_luxe_01"));
		if (!STREAMING::HAS_MODEL_LOADED(joaat("lux_prop_ashtray_luxe_01")))
		{
			return 0;
		}
		STREAMING::REQUEST_ANIM_DICT(func_4700(8));
		if (!STREAMING::HAS_ANIM_DICT_LOADED(func_4700(8)))
		{
			return 0;
		}
		Var6 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(func_4700(8), "base_ashtray_cd", func_4699(8), func_4698(8), 0f, 2) };
		Var7 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(func_4700(8), "base_ashtray_cd", func_4699(8), func_4698(8), 0f, 2) };
		Local_114.f_829[3] = OBJECT::CREATE_OBJECT(joaat("lux_prop_ashtray_luxe_01"), Var6, false, false, false);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("lux_prop_ashtray_luxe_01"));
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED(Local_114.f_829[3], false);
		ENTITY::SET_ENTITY_CAN_ONLY_BE_DAMAGED_BY_SCRIPT_PARTICIPANTS(Local_114.f_829[3], true);
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_114.f_829[3], Var6, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(Local_114.f_829[3], Var7, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(Local_114.f_829[3], true);
		STREAMING::REMOVE_ANIM_DICT(func_4700(8));
		return 0;
	}
	return 1;
}

void func_5534()//Position - 0x1A8397
{
	if ((BitTest(Global_1965531, 11) && CAM::IS_SCREEN_FADED_OUT()) || Global_1931426)
	{
		if (Local_114.f_863.f_386)
		{
			__LIB_11__::func_954(&(Local_114.f_863), 0, 0, 1, 0, 1);
			MISC::SET_BIT(&(Local_114.f_38), 12);
		}
	}
	if (Global_1931426 && Local_114.f_11.f_2 > 1)
	{
		func_5507(1);
	}
	if (!func_5529() && !BitTest(Local_114.f_38, 12))
	{
		if (!BitTest(Local_114.f_38, 11))
		{
			if (func_5536())
			{
				Global_2703735.f_3428 = 1;
				__LIB_6__::func_438(0, 1, 0);
				__LIB_4__::func_178(&(Local_114.f_863), 1);
				MISC::SET_BIT(&(Local_114.f_38), 11);
				HUD::CLEAR_HELP(true);
			}
		}
		else
		{
			__LIB_12__::func_165(&(Local_114.f_863), 0, 1);
			if (CAM::DOES_CAM_EXIST(Local_114.f_863.f_387) && INTERIOR::GET_ROOM_KEY_FOR_GAME_VIEWPORT() != joaat("VIP_ROOM"))
			{
				INTERIOR::SET_ROOM_FOR_GAME_VIEWPORT_BY_KEY(joaat("VIP_ROOM"));
			}
			if (!Local_114.f_863.f_386)
			{
				__LIB_11__::func_656(1, 1, 0, 1);
				__LIB_11__::func_954(&(Local_114.f_863), 0, 0, 1, 0, 1);
				func_5535(1);
				MISC::SET_BIT(&(Local_114.f_38), 12);
				__LIB_1__::func_333(1318109140, 16, 0);
			}
		}
	}
}

void func_5535(bool bParam0)//Position - 0x1A84C6
{
	int iVar0;
	iVar0 = Global_1659753[__LIB_1__::func_27(-1)];
	if (bParam0)
	{
		MISC::SET_BIT(&iVar0, 3);
	}
	else
	{
		MISC::CLEAR_BIT(&iVar0, 3);
	}
	__LIB_1__::func_364(7236, iVar0, -1, 1);
}

int func_5536()//Position - 0x1A84FC
{
	if (((((((((((((((((((!BitTest(Global_4718592.f_32, 23) && !BitTest(Global_4718592.f_30, 25)) && (func_5538() >= 30000 || func_5538() == -1)) && !Global_2789734) && !Global_2789737) && !BitTest(Global_1958711, 13)) && !BitTest(Global_1965531, 14)) && !BitTest(Global_1958711, 9)) && !BitTest(Global_2787913, 0)) && !BitTest(Global_1965531, 6)) && !BitTest(Global_1965531, 7)) && !BitTest(Global_1965531, 8)) && !BitTest(Global_1965531, 9)) && !BitTest(Global_1965531, 2)) && !BitTest(Global_1965531, 3)) && !BitTest(Global_1965531, 4)) && !BitTest(Global_1965531, 5)) && !__LIB_6__::func_200(PLAYER::PLAYER_ID())) && !__LIB_4__::func_47()) && !func_5537())
	{
		return 1;
	}
	return 0;
}

int func_5537()//Position - 0x1A8609
{
	if (Global_1965601 != 0)
	{
		return 1;
	}
	return 0;
}

int func_5538()//Position - 0x1A861E
{
	return Global_1965528;
}

void func_5539()//Position - 0x1A862A
{
	if (!BitTest(Local_114.f_38, 6))
	{
		if (__LIB_0__::func_893())
		{
			if (__LIB_5__::func_699(3, 2798.5342f, -3945.2932f, 160f, 2799.2424f, -3863.2966f, 160f, 0f, 0f, 0f))
			{
				MISC::SET_BIT(&(Local_114.f_38), 6);
			}
		}
	}
	else if (((!BitTest(Global_4718592.f_32, 16) && __LIB_4__::func_46()) || (BitTest(Global_4718592.f_32, 16) && __LIB_6__::func_211())) || ((__LIB_13__::func_601() && __LIB_31__::func_726()) && __LIB_4__::func_46()))
	{
		__LIB_10__::func_571(1);
	}
}

void func_5547()//Position - 0x1A8996
{
	int iVar0;
	char* sVar1;
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) || __LIB_18__::func_742())
	{
		return;
	}
	iVar0 = 0;
	sVar1 = "xs_arena_vip";
	if (iLocal_342 != MISC::GET_HASH_KEY(sVar1))
	{
		iLocal_342 = MISC::GET_HASH_KEY(sVar1);
	}
	if (iLocal_342 != 0 && iLocal_342 != 2)
	{
		HUD::SET_RADAR_AS_INTERIOR_THIS_FRAME(iLocal_342, 2795.984f, -3941.3474f, 0, iVar0);
	}
}

bool func_5549()//Position - 0x1A8A09
{
	return Local_114.f_39 == joaat("VIP_ROOM");
}

bool func_5550(int iParam0)//Position - 0x1A8A1C
{
	return Local_112.f_0 == iParam0;
}

void func_5551()//Position - 0x1A8A29
{
	int iVar0;
	if (func_5549())
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID()))
			{
				PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), false, -1, 0);
			}
			PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 46, true);
			PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 47, true);
			PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 102, true);
		}
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 157 /*INPUT_SELECT_WEAPON_UNARMED*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 159 /*INPUT_SELECT_WEAPON_HANDGUN*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 160 /*INPUT_SELECT_WEAPON_SHOTGUN*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 161 /*INPUT_SELECT_WEAPON_SMG*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 162 /*INPUT_SELECT_WEAPON_AUTO_RIFLE*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 163 /*INPUT_SELECT_WEAPON_SNIPER*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 164 /*INPUT_SELECT_WEAPON_HEAVY*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 165 /*INPUT_SELECT_WEAPON_SPECIAL*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 158 /*INPUT_SELECT_WEAPON_MELEE*/, true);
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, true);
			if (!(iVar0 == joaat("WEAPON_UNARMED") || iVar0 == joaat("OBJECT")))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
			}
		}
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 101 /*INPUT_VEH_ROOF*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 337 /*INPUT_VEH_HYDRAULICS_CONTROL_TOGGLE*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 53 /*INPUT_WEAPON_SPECIAL*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 54 /*INPUT_WEAPON_SPECIAL_TWO*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 47 /*INPUT_DETONATE*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 140 /*INPUT_MELEE_ATTACK_LIGHT*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 141 /*INPUT_MELEE_ATTACK_HEAVY*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 263 /*INPUT_MELEE_ATTACK1*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 264 /*INPUT_MELEE_ATTACK2*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 142 /*INPUT_MELEE_ATTACK_ALTERNATE*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 143 /*INPUT_MELEE_BLOCK*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 257 /*INPUT_ATTACK2*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 44 /*INPUT_COVER*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 282 /*INPUT_VEH_GUN_LEFT*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 283 /*INPUT_VEH_GUN_RIGHT*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 284 /*INPUT_VEH_GUN_UP*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 285 /*INPUT_VEH_GUN_DOWN*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 69 /*INPUT_VEH_ATTACK*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 70 /*INPUT_VEH_ATTACK2*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 114 /*INPUT_VEH_FLY_ATTACK*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 99 /*INPUT_VEH_SELECT_NEXT_WEAPON*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 100 /*INPUT_VEH_SELECT_PREV_WEAPON*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 102 /*INPUT_VEH_JUMP*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 74 /*INPUT_VEH_HEADLIGHT*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 36 /*INPUT_DUCK*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 345 /*INPUT_VEH_MELEE_HOLD*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 346 /*INPUT_VEH_MELEE_LEFT*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 347 /*INPUT_VEH_MELEE_RIGHT*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 91 /*INPUT_VEH_PASSENGER_AIM*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 92 /*INPUT_VEH_PASSENGER_ATTACK*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 81 /*INPUT_VEH_NEXT_RADIO*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 82 /*INPUT_VEH_PREV_RADIO*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 83 /*INPUT_VEH_NEXT_RADIO_TRACK*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 84 /*INPUT_VEH_PREV_RADIO_TRACK*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 85 /*INPUT_VEH_RADIO_WHEEL*/, true);
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 337 /*INPUT_VEH_HYDRAULICS_CONTROL_TOGGLE*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 53 /*INPUT_WEAPON_SPECIAL*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 54 /*INPUT_WEAPON_SPECIAL_TWO*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 47 /*INPUT_DETONATE*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 140 /*INPUT_MELEE_ATTACK_LIGHT*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 141 /*INPUT_MELEE_ATTACK_HEAVY*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 263 /*INPUT_MELEE_ATTACK1*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 264 /*INPUT_MELEE_ATTACK2*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 142 /*INPUT_MELEE_ATTACK_ALTERNATE*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 143 /*INPUT_MELEE_BLOCK*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 257 /*INPUT_ATTACK2*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 282 /*INPUT_VEH_GUN_LEFT*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 283 /*INPUT_VEH_GUN_RIGHT*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 284 /*INPUT_VEH_GUN_UP*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 285 /*INPUT_VEH_GUN_DOWN*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 69 /*INPUT_VEH_ATTACK*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 70 /*INPUT_VEH_ATTACK2*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 114 /*INPUT_VEH_FLY_ATTACK*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 99 /*INPUT_VEH_SELECT_NEXT_WEAPON*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 100 /*INPUT_VEH_SELECT_PREV_WEAPON*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 102 /*INPUT_VEH_JUMP*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 351 /*INPUT_VEH_ROCKET_BOOST*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 354 /*INPUT_VEH_BIKE_WINGS*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 74 /*INPUT_VEH_HEADLIGHT*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 345 /*INPUT_VEH_MELEE_HOLD*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 346 /*INPUT_VEH_MELEE_LEFT*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 347 /*INPUT_VEH_MELEE_RIGHT*/, true);
		}
	}
}

void func_5552()//Position - 0x1A8D65
{
	if (((((((func_5549() && !BitTest(Global_1965531, 3)) && !BitTest(Global_1965531, 2)) && !BitTest(Global_1965531, 4)) && !__LIB_6__::func_200(PLAYER::PLAYER_ID())) && !__LIB_5__::func_847(PLAYER::PLAYER_ID())) && !(__LIB_13__::func_604(PLAYER::PLAYER_ID()) == 1 && __LIB_18__::func_742())) && !(Global_2789734 && !CAM::IS_GAMEPLAY_CAM_RENDERING()))
	{
		if (!BitTest(Local_114.f_38, 9))
		{
			ENTITY::CREATE_MODEL_HIDE(2799.9988f, -3915.8125f, 179.9695f, 50f, MISC::GET_HASH_KEY("xs_propintarena_structure_s_05b"), false);
			ENTITY::REMOVE_MODEL_HIDE(2800.957f, -3930.407f, 180.493f, 50f, MISC::GET_HASH_KEY("xs_x18intvip_vip_light_dummy"), false);
			MISC::SET_BIT(&(Local_114.f_38), 9);
		}
	}
	else if (BitTest(Local_114.f_38, 9))
	{
		ENTITY::CREATE_MODEL_HIDE(2800.957f, -3930.407f, 180.493f, 50f, MISC::GET_HASH_KEY("xs_x18intvip_vip_light_dummy"), false);
		ENTITY::REMOVE_MODEL_HIDE(2799.9988f, -3915.8125f, 179.9695f, 50f, MISC::GET_HASH_KEY("xs_propintarena_structure_s_05b"), false);
		MISC::CLEAR_BIT(&(Local_114.f_38), 9);
	}
}

void func_5556()//Position - 0x1A8F2C
{
	bool bVar0;
	int iVar1;
	bVar0 = true;
	iVar1 = __LIB_1__::func_724(&uLocal_222, 0, 0);
	if (iVar1 > 0)
	{
		func_5562(iVar1);
	}
	if (Local_114.f_863.f_386)
	{
		__LIB_11__::func_954(&(Local_114.f_863), 0, 0, 1, 0, 1);
	}
	if (((__LIB_3__::func_366() || __LIB_1__::func_584()) || __LIB_0__::func_629()) || __LIB_5__::func_845())
	{
		bVar0 = false;
	}
	if (__LIB_0__::func_1("ARENA_VIP_HELP" /* GXT: While in the Spectator Box you can use activities or spectate the remaining players. */))
	{
		HUD::CLEAR_HELP(true);
	}
	func_5507(0);
	func_5469();
	func_5526(0);
	func_5253(bVar0);
	func_5125(&(Local_114.f_1317));
	func_5154(&(Local_114.f_1317), 1);
	func_5154(&Global_2788057, 1);
	func_5561();
	func_4781(&uLocal_289, &(Local_114.f_853), &uLocal_224, 1, 0);
	__LIB_6__::func_171();
	__LIB_5__::func_167(1);
	Global_2787908 = 0;
	Global_2787912 = 0;
	Global_2787913 = 0;
	MISC::CLEAR_BIT(&Global_1965531, 23);
	__LIB_5__::func_848(-1);
	__LIB_13__::func_590(-1);
	Global_2787911 = 0;
	if (__LIB_4__::func_47())
	{
		__LIB_11__::func_965(0);
	}
	if (BitTest(Local_114.f_38, 9))
	{
		ENTITY::REMOVE_MODEL_HIDE(2799.9988f, -3915.8125f, 179.9695f, 50f, MISC::GET_HASH_KEY("xs_propintarena_structure_s_05b"), false);
		MISC::CLEAR_BIT(&(Local_114.f_38), 9);
	}
	__LIB_0__::func_202();
}

void func_5561()//Position - 0x1A90A9
{
	if (Global_2787916)
	{
		Global_2787921++;
	}
}

void func_5562(int iParam0)//Position - 0x1A90C2
{
	__LIB_9__::func_676(iParam0, 7989);
}

void func_5570()//Position - 0x1A9227
{
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, false, -1);
	__LIB_0__::func_895(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_112, 23, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_113, 161, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&uLocal_289, 53, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&uLocal_224, 65, 0);
	func_5509();
	func_5474(1);
	func_5575(&(Local_112.f_1), &(Local_114.f_1317));
	Local_114.f_1.f_7 = __LIB_6__::func_176();
	Local_114.f_1.f_4 = __LIB_6__::func_175();
	Local_114.f_1.f_5 = __LIB_19__::func_35(Local_114.f_1.f_7 + 1);
	Local_114.f_1.f_6 = __LIB_6__::func_174();
	__LIB_0__::func_795(&uLocal_222, 0, 0);
	func_5571(&(Local_114.f_863));
	PLAYER::SET_PLAYER_LEAVE_PED_BEHIND(PLAYER::PLAYER_ID(), false);
}

void func_5571(int* iParam0)//Position - 0x1A92CD
{
	__LIB_4__::func_183(iParam0);
	func_5574(iParam0, "arena_box_tutorial_cutscene", -1);
	iParam0->f_389 = 0;
	__LIB_6__::func_27(iParam0, 7000, "Spectator_Box_Wide_Shot", 2802.511f, -3936.38f, 187.7886f, -26.8913f, 0f, -29.31f, 50f, 2802.511f, -3936.38f, 187.7886f, -26.8913f, 0f, 29.4168f, 50f, 0.15f, 500, 0, 0, 0, 0);
	__LIB_7__::func_247(iParam0, iParam0->f_18[0 /*36*/].f_24, (iParam0->f_18[0 /*36*/] - iParam0->f_18[0 /*36*/].f_24), func_5573(0));
	__LIB_6__::func_27(iParam0, 7000, "Telescopes_And_Tablets", 2790.0269f, -3919.7354f, 184.5086f, -40.7704f, 0f, -138.5614f, 50f, 2794.0833f, -3919.7354f, 184.5086f, -40.7704f, 0f, -138.5614f, 50f, 0.15f, 0, 0, 0, 0, 0);
	__LIB_7__::func_247(iParam0, iParam0->f_18[0 /*36*/], iParam0->f_18[1 /*36*/], func_5573(1));
	__LIB_6__::func_27(iParam0, 7000, "Arena_War_Wheel", 2789.73f, -3934.4136f, 187.9329f, -33.3946f, 0f, -58.4917f, 50f, 2791.456f, -3933.3545f, 186.5977f, -33.3946f, 0f, -58.4917f, 50f, 0.15f, 0, 0, 0, 0, 0);
	__LIB_7__::func_247(iParam0, (iParam0->f_18[0 /*36*/] + iParam0->f_18[1 /*36*/]), iParam0->f_18[2 /*36*/], func_5573(2));
}

struct<6> func_5573(int iParam0)//Position - 0x1A94A6
{
	struct<6> Var0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ARENA_TUT_0" /* GXT: This is the Spectator Box. You can hang out here and watch the rest of the event. */, 24);
			break;
		case 1:
			StringCopy(&Var0, "ARENA_TUT_1" /* GXT: Use telescopes or the options on the Spectator Tablet to get a closer look at the action. */, 24);
			break;
		case 2:
			StringCopy(&Var0, "ARENA_TUT_2" /* GXT: The Arena War Wheel can also be played here for a fee. Spin to win the chance to affect the remaining contenders. */, 24);
			break;
	}
	return Var0;
}

void func_5574(var uParam0, char* sParam1, int iParam2)//Position - 0x1A94EF
{
	var uVar0;
	int iVar1;
	StringCopy(&(uParam0->f_2), sParam1, 64);
	if (iParam2 != -1)
	{
		uParam0->f_389 = 1;
		iVar1 = 0;
		if (__LIB_4__::func_947(PLAYER::PLAYER_ID()) && __LIB_6__::func_598() == 0)
		{
			iVar1 = 1;
		}
		func_40(iParam2, &uVar0, &(uParam0->f_390), &(uParam0->f_393), iVar1);
	}
}

void func_5575(var uParam0, var uParam1)//Position - 0x1A953B
{
	int iVar0;
	uParam1->f_8 = __LIB_1__::func_360(7866, -1, 0);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		uParam0->f_4[iVar0] = __LIB_0__::func_162();
		iVar0++;
	}
	uParam0->f_3 = __LIB_0__::func_162();
	func_5157(-1);
}

