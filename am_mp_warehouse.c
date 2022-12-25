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
	int iLocal_122 = 0;
	bool bLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	struct<800> Local_130 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0 } ;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = -1;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	int iLocal_136 = 0;
	var uLocal_137 = 0;
	struct<169> Local_138 = { 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206 } ;
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
	struct<5> Local_345[32];
	struct<1209> Local_346 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 1048576000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1048576000, 0, -1, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, -1, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 2, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 1048576000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1048576000, 0, -1, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, -1, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<12> Local_347 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 2;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	struct<3> Local_355[2];
	struct<3> Local_356 = { 0, 0, 0 } ;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
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
	fLocal_101 = 3f;
	fLocal_102 = 0f;
	fLocal_103 = 2f;
	fLocal_104 = 100f;
	iLocal_114 = -1;
	fLocal_116 = 0.5f;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_6142(&ScriptParam_356);
	}
	else
	{
		func_6134();
	}
	while (true)
	{
		__LIB_0__::func_933();
		if (__LIB_0__::func_959())
		{
			__LIB_6__::func_51(1);
			__LIB_6__::func_263(1);
			func_6134();
		}
		if (func_6122(ScriptParam_356.f_2, Local_346.f_3))
		{
			__LIB_6__::func_51(1);
			__LIB_6__::func_263(1);
			func_6134();
		}
		func_85();
		func_80();
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_1();
		}
	}
}

void func_1()//Position - 0x105
{
	__LIB_31__::func_149(&(Local_138.f_113), &(Local_345[Local_130.f_9 /*5*/].f_1), &Local_130, &Global_4194304);
	__LIB_10__::func_762(&(Local_345[iLocal_136 /*5*/].f_4), &(Local_138.f_168), &iLocal_136);
}

void func_80()//Position - 0x6906
{
	if (Local_346.f_15 == PLAYER::PLAYER_ID())
	{
		if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			if (!__LIB_0__::func_864(&(Local_346.f_1204)))
			{
				__LIB_0__::func_795(&(Local_346.f_1204), 0, 0);
			}
			else if (__LIB_0__::func_937(&(Local_346.f_1204), 3000, 0))
			{
				if (!__LIB_0__::func_864(&(Local_346.f_1206)))
				{
					NETWORK::NETWORK_REQUEST_TO_BE_HOST_OF_THIS_SCRIPT();
					__LIB_0__::func_795(&(Local_346.f_1206), 1, 0);
				}
				else if (__LIB_0__::func_937(&(Local_346.f_1206), 1000, 1))
				{
					__LIB_0__::func_794(&(Local_346.f_1206));
				}
			}
		}
	}
}

void func_85()//Position - 0x6A48
{
	bool bVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var3;
	float fVar4;
	func_6093();
	func_6039(&(Local_346.f_433));
	func_6037(&uLocal_349);
	func_6027();
	func_6026();
	if (__LIB_8__::func_260(PLAYER::PLAYER_ID()))
	{
		func_4917(13, &(Local_346.f_1193), Local_346.f_4, 0, 0);
	}
	if (PLAYER::PLAYER_ID() != -1)
	{
		func_319(&(Local_138.f_113), &(Local_345[PLAYER::PLAYER_ID() /*5*/].f_1), &Local_130, &Global_4194304, &(Local_345[PLAYER::PLAYER_ID() /*5*/].f_4), &(Local_138.f_168));
	}
	if (func_318(0))
	{
		func_317();
		bVar0 = true;
		if (!ENTITY::DOES_ENTITY_EXIST(Local_346.f_433.f_1))
		{
			bVar0 = false;
		}
		if (Global_1946250.f_3599)
		{
			Global_1946250.f_3599 = 0;
			__LIB_6__::func_50(1, 1);
			bVar0 = false;
		}
		if (__LIB_0__::func_864(&(Global_1946250.f_3597)))
		{
			if (__LIB_0__::func_937(&(Global_1946250.f_3597), 6000, 0) && bVar0)
			{
				if (!func_315())
				{
					__LIB_6__::func_50(0, 1);
				}
			}
			else
			{
				bVar0 = false;
				__LIB_6__::func_50(1, 1);
			}
		}
		if (Local_346.f_14)
		{
			__LIB_6__::func_50(1, 1);
			bVar0 = false;
		}
		if (!__LIB_8__::func_360())
		{
			bVar0 = false;
			if (__LIB_0__::func_937(&(Local_346.f_1194), Global_1579013, 0))
			{
				__LIB_0__::func_794(&(Local_346.f_1194));
				Global_1579009 = 1;
			}
		}
		if (bVar0)
		{
			if (func_315())
			{
				if (__LIB_6__::func_184())
				{
					func_312();
					func_311(2);
				}
			}
			else
			{
				__LIB_6__::func_51(1);
				func_311(1);
			}
		}
	}
	else if (func_318(1))
	{
		func_309();
		func_307();
		func_207();
		func_163();
		if (!__LIB_0__::func_833())
		{
			if ((MISC::GET_FRAME_COUNT() % 10) == 0 || CAM::IS_SCREEN_FADED_OUT())
			{
				if (func_315())
				{
					if (__LIB_7__::func_565(Local_346.f_3))
					{
						__LIB_6__::func_50(1, 1);
						__LIB_6__::func_51(0);
					}
					if (!CAM::IS_SCREEN_FADED_OUT())
					{
						if (!CAM::IS_SCREEN_FADING_OUT())
						{
							CAM::DO_SCREEN_FADE_OUT(322);
						}
					}
					else
					{
						func_312();
						func_311(2);
					}
				}
			}
			if (func_160())
			{
				Global_1946250.f_3375 = 1;
				if (Global_1946250.f_3376)
				{
					func_155();
				}
			}
			else
			{
				Global_1946250.f_3375 = 0;
			}
			if (Local_346.f_15 == PLAYER::PLAYER_ID())
			{
				if (__LIB_1__::func_936(PLAYER::PLAYER_ID()))
				{
					__LIB_0__::func_714(&(Local_346.f_16));
					__LIB_0__::func_714(&(Local_346.f_17));
				}
				else if (!HUD::DOES_BLIP_EXIST(Local_346.f_16))
				{
					iVar1 = __LIB_5__::func_388(Local_346.f_2);
					Var2 = { 1087.8722f, -3101.3035f, -39.1062f };
					Var3 = { 1100.5688f, -3102.0576f, -39.0422f };
					fVar4 = 1f;
					if (iVar1 == 2)
					{
						fVar4 = 0.75f;
						Var2 = { 995.1203f, -3099.986f, -39.0691f };
						Var3 = { 996.6937f, -3099.1797f, -39.0702f };
					}
					else if (iVar1 == 1)
					{
						Var2 = { 1048.5197f, -3100.6843f, -39.0494f };
						Var3 = { 1050.4222f, -3094.142f, -39.1122f };
					}
					__LIB_7__::func_373(&(Local_346.f_16), Var2, 521, "BLIP_521" /* GXT: Laptop */, fVar4, 0, 0);
					__LIB_7__::func_373(&(Local_346.f_17), Var3, 566, "WHOUSE_WB_BLP" /* GXT: Workbench */, fVar4, 0, 0);
				}
			}
		}
		else if (Local_130.f_799 != 0)
		{
			__LIB_9__::func_812(&(Local_345[PLAYER::PLAYER_ID() /*5*/].f_1), &Local_130);
			if (__LIB_3__::func_241())
			{
				__LIB_1__::func_91();
			}
		}
	}
	else if (func_318(2))
	{
		if (__LIB_7__::func_565(Local_346.f_3))
		{
			if (!__LIB_5__::func_247(3, Local_346.f_3))
			{
				return;
			}
		}
		func_130();
		if (!Local_347.f_0)
		{
			if (!__LIB_5__::func_406())
			{
				__LIB_6__::func_51(1);
				__LIB_6__::func_50(0, 1);
				Global_1946250.f_515 = 1;
			}
			__LIB_0__::func_186(32342, 1, -1);
			func_311(1);
		}
	}
	else if (func_318(3))
	{
		if (__LIB_10__::func_785(7, &(Local_346.f_928)))
		{
			__LIB_12__::func_402(&(Local_346.f_928), 1);
			return;
		}
		if (!__LIB_10__::func_785(2, &(Local_346.f_928)))
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				__LIB_3__::func_514(0);
				NETWORK::NETWORK_FADE_OUT_ENTITY(PLAYER::PLAYER_PED_ID(), true, true);
				__LIB_1__::func_376(PLAYER::PLAYER_ID(), 0, 524288, 0);
			}
			func_311(4);
		}
	}
	else if (func_318(4))
	{
		if (__LIB_10__::func_785(5, &(Local_346.f_928)))
		{
			CAM::DO_SCREEN_FADE_OUT(322);
			func_311(5);
		}
	}
	else if (func_318(5))
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			if (!BitTest(Local_346.f_928, 0))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_346.f_928.f_79) && !MISC::IS_STRING_NULL_OR_EMPTY(Local_346.f_928.f_80))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, Local_346.f_928.f_79, Local_346.f_928.f_80, true);
				}
				MISC::SET_BIT(&(Local_346.f_928), 0);
			}
			__LIB_12__::func_402(&(Local_346.f_928), 0);
			__LIB_4__::func_796(1);
		}
	}
}

void func_130()//Position - 0x7F3F
{
	char* sVar0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	if (!Local_347.f_0)
	{
		return;
	}
	if (Local_347.f_2 == 0)
	{
		NETWORK::SET_LOCAL_PLAYER_VISIBLE_IN_CUTSCENE(false, false);
		__LIB_6__::func_928(1, 1, 0);
		__LIB_1__::func_376(PLAYER::PLAYER_ID(), 0, 0, 0);
		CAM::DO_SCREEN_FADE_IN(1500);
		Local_347.f_2 = 1;
		MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318), 31);
	}
	if (!BitTest(Local_347.f_5, Local_347.f_2))
	{
		if (CAM::IS_SCREEN_FADING_IN())
		{
			__LIB_0__::func_627(&(Local_347.f_8), 0, 0);
		}
		sVar0 = func_141(Local_347.f_2);
		if ((!MISC::IS_STRING_NULL_OR_EMPTY(sVar0) && !CAM::IS_SCREEN_FADING_IN()) && (!__LIB_0__::func_864(&(Local_347.f_8)) || __LIB_0__::func_937(&(Local_347.f_8), 300, 0)))
		{
			HUD::CLEAR_HELP(true);
			__LIB_0__::func_151(sVar0, func_140(Local_347.f_2));
			MISC::SET_BIT(&(Local_347.f_5), Local_347.f_2);
			__LIB_0__::func_794(&(Local_347.f_8));
		}
	}
	if (!BitTest(Local_347.f_4, Local_347.f_2))
	{
		__LIB_0__::func_627(&(Local_347.f_6), 0, 0);
		if (!CAM::DOES_CAM_EXIST(Local_347.f_3))
		{
			Local_347.f_3 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), true);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
		}
		func_136(&Var1, &Var2, &fVar3, Local_347.f_2, 1);
		CAM::SET_CAM_PARAMS(Local_347.f_3, Var1, Var2, fVar3, 0, 1, 1, 2);
		func_136(&Var1, &Var2, &fVar3, Local_347.f_2, 0);
		CAM::SET_CAM_PARAMS(Local_347.f_3, Var1, Var2, fVar3, func_140(Local_347.f_2), 0, 0, 2);
		CAM::STOP_CAM_SHAKING(Local_347.f_3, true);
		CAM::SHAKE_CAM(Local_347.f_3, "Hand_shake", 0.05f);
		MISC::SET_BIT(&(Local_347.f_4), Local_347.f_2);
	}
	if ((!Local_347.f_10 && !__LIB_5__::func_406()) && !(__LIB_7__::func_565(Local_346.f_3) && __LIB_5__::func_247(1, Local_346.f_3)))
	{
		if (Local_347.f_2 == 4 && __LIB_0__::func_937(&(Local_347.f_6), (func_140(Local_347.f_2) - 400), 0))
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 850, 0f, true, false);
			}
			Local_347.f_10 = 1;
		}
	}
	if (__LIB_0__::func_937(&(Local_347.f_6), func_140(Local_347.f_2), 0))
	{
		if (Local_347.f_2 == 4)
		{
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			CAM::STOP_CAM_SHAKING(Local_347.f_3, true);
			CAM::DESTROY_CAM(Local_347.f_3, false);
			__LIB_7__::func_45(1, 0, 0, 1);
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !Local_347.f_10)
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			}
			__LIB_1__::func_376(PLAYER::PLAYER_ID(), 1, 524288, 0);
			func_135();
			if (Local_346.f_15 == PLAYER::PLAYER_ID())
			{
				func_131(1);
				MISC::CLEAR_BIT(&(Local_345[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/]), 0);
				MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318), 30);
			}
			MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318), 31);
		}
		else
		{
			Local_347.f_2++;
		}
	}
}

void func_131(bool bParam0)//Position - 0x822C
{
	int iVar0;
	__LIB_29__::func_678(bParam0);
	iVar0 = Global_1659747[__LIB_1__::func_27(-1)];
	if (bParam0)
	{
		MISC::SET_BIT(&iVar0, 14);
	}
	else
	{
		MISC::CLEAR_BIT(&iVar0, 14);
	}
	__LIB_1__::func_364(1304, iVar0, -1, 1);
}

void func_135()//Position - 0x8E26
{
	Local_347.f_0 = false;
	Local_347.f_11 = 1;
	Local_347.f_2 = 0;
	Local_347.f_4 = 0;
	Local_347.f_5 = 0;
	Local_347.f_10 = 0;
	__LIB_0__::func_794(&(Local_347.f_6));
	__LIB_0__::func_794(&(Local_347.f_8));
}

void func_136(var uParam0, var uParam1, float fParam2, int iParam3, bool bParam4)//Position - 0x8E62
{
	*fParam2 = 50f;
	switch (__LIB_5__::func_388(Local_346.f_2))
	{
		case 0:
			switch (iParam3)
			{
				case 1:
					if (bParam4)
					{
						*uParam0 = { -7.1196f, 3.2861f, 2.8433f };
						*uParam1 = { -19.6293f, 0f, 333.452f };
					}
					else
					{
						*uParam0 = { -6.3047f, 3.0896f, 2.7625f };
						*uParam1 = { -11.607f, 0f, 312.8062f };
					}
					break;
				case 2:
					if (bParam4)
					{
						*uParam0 = { -3.4564f, 1.7634f, 1.2512f };
						*uParam1 = { -6.0992f, -0.1015f, 60.6463f };
						*fParam2 = 38.6078f;
					}
					else
					{
						*uParam0 = { -4.2775f, 2.4607f, 1.1418f };
						*uParam1 = { -5.1609f, -0.1015f, 67.4538f };
						*fParam2 = 38.6078f;
					}
					break;
				case 4:
					if (bParam4)
					{
						*uParam0 = { 2.6156f, 3.34399f, 1.7716f };
						*uParam1 = { -10.54f, 0f, -29.9661f };
						*fParam2 = 44.5936f;
					}
					else
					{
						*uParam0 = { 3.20825f, 4.37158f, 1.5508f };
						*uParam1 = { -10.54f, 0f, -29.9661f };
						*fParam2 = 44.5936f;
					}
					break;
				case 3:
					if (bParam4)
					{
						*uParam0 = { 3.6038f, 5.6936f, 2.0449f };
						*uParam1 = { -20.4804f, 0.0625f, 213.8164f };
						*fParam2 = 28.395f;
					}
					else
					{
						*uParam0 = { 4.7391f, 5.2048f, 1.7035f };
						*uParam1 = { -21.5119f, 0.0625f, 198.2077f };
						*fParam2 = 28.395f;
					}
					break;
			}
			break;
		case 1:
			switch (iParam3)
			{
				case 1:
					if (bParam4)
					{
						*uParam0 = { -7.6022f, 7.3909f, 2.1957f };
						*uParam1 = { -12.9481f, 0f, 297.5837f };
					}
					else
					{
						*uParam0 = { -7.4956f, 7.4302f, 2.7878f };
						*uParam1 = { -7.5138f, 0f, 262.3093f };
					}
					break;
				case 2:
					if (bParam4)
					{
						*uParam0 = { -5.099f, 3.7043f, 1.1646f };
						*uParam1 = { -7.5678f, 0.0046f, 62.1785f };
						*fParam2 = 39.8779f;
					}
					else
					{
						*uParam0 = { -5.5675f, 4.4756f, 1.0903f };
						*uParam1 = { -5.4211f, 0.0046f, 76.1272f };
						*fParam2 = 39.8779f;
					}
					break;
				case 4:
					if (bParam4)
					{
						*uParam0 = { 11.2979f, 4.73657f, 1.5821f };
						*uParam1 = { -6.0242f, 0f, -47.2027f };
						*fParam2 = 44.8713f;
					}
					else
					{
						*uParam0 = { 11.8949f, 5.29028f, 1.4963f };
						*uParam1 = { -6.0242f, 0f, -47.2027f };
						*fParam2 = 44.8713f;
					}
					break;
				case 3:
					if (bParam4)
					{
						*uParam0 = { -4.6832f, 8.6699f, 1.7686f };
						*uParam1 = { -18.8337f, 0f, 26.1666f };
						*fParam2 = 28.3081f;
					}
					else
					{
						*uParam0 = { -5.5229f, 8.9958f, 1.5728f };
						*uParam1 = { -19.4507f, 0f, 13.3843f };
						*fParam2 = 28.3081f;
					}
					break;
			}
			break;
		case 2:
			switch (iParam3)
			{
				case 1:
					if (bParam4)
					{
						*uParam0 = { -12.6272f, 1.9094f, 4.7287f };
						*uParam1 = { -7.6941f, 0f, 296.7407f };
						*fParam2 = 40.9609f;
					}
					else
					{
						*uParam0 = { -12.5826f, 0.116f, 4.7625f };
						*uParam1 = { -7.6941f, 0f, 254.3179f };
						*fParam2 = 40.9609f;
					}
					break;
				case 2:
					if (bParam4)
					{
						*uParam0 = { -13.6392f, 2.7698f, 1.5693f };
						*uParam1 = { -19.6345f, 0f, 246.2228f };
					}
					else
					{
						*uParam0 = { -13.7108f, 1.7075f, 1.5693f };
						*uParam1 = { -19.5723f, 0f, 276.87f };
					}
					break;
				case 4:
					if (bParam4)
					{
						*uParam0 = { 13.4382f, 0.989746f, 2.5511f };
						*uParam1 = { -15.43f, 0f, -56.352f };
						*fParam2 = 46.8295f;
					}
					else
					{
						*uParam0 = { 14.4602f, 1.66992f, 2.2122f };
						*uParam1 = { -17.0311f, 0f, -56.352f };
						*fParam2 = 46.8295f;
					}
					break;
				case 3:
					if (bParam4)
					{
						*uParam0 = { -6.9604f, 5.4856f, 2.0835f };
						*uParam1 = { -19.2545f, 0f, 121.8405f };
					}
					else
					{
						*uParam0 = { -7.6966f, 3.0127f, 1.6129f };
						*uParam1 = { -20.9611f, 0f, 89.4295f };
					}
					break;
			}
			break;
	}
	*uParam0 = { __LIB_6__::func_259(*uParam0, &(Local_346.f_18)) };
	uParam1->f_2 = __LIB_6__::func_258(uParam1->f_2, &(Local_346.f_18));
}

int func_140(int iParam0)//Position - 0x93D4
{
	switch (iParam0)
	{
		case 1:
			return 8600;
			break;
		case 2:
			return 7100;
			break;
		case 4:
			return 6800;
			break;
		case 3:
			return 8800;
			break;
	}
	return 7100;
}

char* func_141(int iParam0)//Position - 0x9422
{
	if (Local_347.f_1)
	{
		switch (iParam0)
		{
			case 1:
				return "WHOUSE_TUT_1" /* GXT: Special Cargo that you have purchased and returned safely to a Warehouse will be stored on these racks. */;
				break;
			case 2:
				return "WHOUSE_TUT_2" /* GXT: The total stock of Special Cargo held in a Warehouse can be sold to an interested buyer at any time using this laptop ~BLIP_LAPTOP~. Selling larger quantities of stock will maximize profit. */;
				break;
			case 4:
				return "WHOUSE_TUT_3" /* GXT: The on-site Warehouse Staff ~BLIP_VIP~ can also be assigned to source Special Cargo for you. */;
				break;
			case 3:
				return "WHOUSE_TUT_4" /* GXT: Access this workbench ~BLIP_GR_MOC_UPGRADE~ to upgrade your delivery vehicles to ensure your Special Cargo makes it to the buyer in one piece. If a delivery vehicle is destroyed during a sale, the amount of stock it is holding will be lost. */;
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 1:
				return "WHOUSE_TUT_1b" /* GXT: Special Cargo that has been purchased and returned safely to a Warehouse will be stored on these racks. */;
				break;
			case 2:
				return "WHOUSE_TUT_2b" /* GXT: The total stock of Special Cargo held in a Warehouse can be sold to an interested buyer at any time using this laptop ~BLIP_LAPTOP~. Selling larger quantities of stock will maximize profit. */;
				break;
			case 4:
				return "WHOUSE_TUT_3b" /* GXT: The on-site Warehouse Staff can also be assigned to source Special Cargo. */;
				break;
			case 3:
				return "WHOUSE_TUT_4b" /* GXT: This workbench ~BLIP_GR_MOC_UPGRADE~ can be used to upgrade the delivery vehicles to ensure Special Cargo makes it to the buyer in one piece. If a delivery vehicle is destroyed during a sale, the amount of stock it is holding will be lost. */;
				break;
			}
	}
	return "";
}

void func_155()//Position - 0x9987
{
	Global_1946250.f_3375 = 0;
	func_156(&(Local_346.f_928));
	func_311(3);
}

void func_156(int* iParam0)//Position - 0x99A6
{
	if (!__LIB_10__::func_785(3, iParam0))
	{
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iParam0->f_27))
		{
			PED::DETACH_SYNCHRONIZED_SCENE(iParam0->f_27);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_2))
		{
			PED::DELETE_PED(&(iParam0->f_2));
		}
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		if (CAM::DOES_CAM_EXIST(iParam0->f_11))
		{
			CAM::DESTROY_CAM(iParam0->f_11, false);
		}
		if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
		{
			__LIB_7__::func_45(1, 0, 0, 1);
		}
		__LIB_10__::func_784(3, iParam0);
	}
	*iParam0 = 0;
	iParam0->f_67 = 0;
	STREAMING::REQUEST_ANIM_DICT(iParam0->f_3);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_4))
	{
		STREAMING::REQUEST_ANIM_DICT(iParam0->f_4);
	}
	__LIB_12__::func_396(iParam0);
	__LIB_10__::func_784(2, iParam0);
	Global_1946250.f_522 = 1;
}

int func_160()//Position - 0x9B1A
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && ENTITY::IS_ENTITY_IN_AREA(PLAYER::PLAYER_PED_ID(), Local_346.f_922, Local_346.f_925, false, true, 0))
	{
		return 1;
	}
	return 0;
}

void func_163()//Position - 0x9B72
{
	if (!__LIB_8__::func_151(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (!__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
	{
		return;
	}
	if (__LIB_8__::func_260(PLAYER::PLAYER_ID()))
	{
		if (__LIB_11__::func_802(__LIB_11__::func_790(PLAYER::PLAYER_ID())) == PLAYER::PLAYER_ID())
		{
			if (func_197())
			{
				func_164();
			}
		}
	}
}

int func_164()//Position - 0x9BC4
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	if (__LIB_0__::func_112())
	{
		if (!BitTest(Global_1888846.f_1, 0))
		{
			if (!__LIB_8__::func_993(&Global_1888846, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_SPEND"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), joaat("SERVICE_SPEND_SOURCE_CARGO"), Global_262145.f_32538 /* Tunable: WAREHOUSE_CARGO_SOURCING_PRICE */, 4, 3))
			{
				__LIB_1__::func_34(Global_1888846);
				return 0;
			}
			MISC::SET_BIT(&(Global_1888846.f_1), 0);
		}
		if (!BitTest(Global_1888846.f_1, 1))
		{
			if (__LIB_2__::func_835(Global_1888846))
			{
				if (__LIB_2__::func_834(Global_1888846) == 2)
				{
					NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(__LIB_1__::func_818(Global_1888846));
					iVar0 = __LIB_11__::func_790(PLAYER::PLAYER_ID());
					bVar1 = __LIB_8__::func_418(iVar0);
					MONEY::NETWORK_SPENT_CARGO_SOURCING(Global_262145.f_32538 /* Tunable: WAREHOUSE_CARGO_SOURCING_PRICE */, 0, 1, Global_262145.f_32538 /* Tunable: WAREHOUSE_CARGO_SOURCING_PRICE */, iVar0, bVar1);
					__LIB_1__::func_34(Global_1888846);
					MISC::SET_BIT(&(Global_1888846.f_1), 1);
				}
				else
				{
					__LIB_1__::func_34(Global_1888846);
					func_180(0);
					return 0;
				}
			}
		}
		if (BitTest(Global_1888846.f_1, 1))
		{
			if (Global_1888846 < 0)
			{
				__LIB_1__::func_34(Global_1888846);
			}
			func_165();
			return 1;
		}
	}
	else
	{
		iVar2 = __LIB_11__::func_790(PLAYER::PLAYER_ID());
		bVar3 = __LIB_8__::func_418(iVar2);
		MONEY::NETWORK_SPENT_CARGO_SOURCING(Global_262145.f_32538 /* Tunable: WAREHOUSE_CARGO_SOURCING_PRICE */, 0, 1, Global_262145.f_32538 /* Tunable: WAREHOUSE_CARGO_SOURCING_PRICE */, iVar2, bVar3);
		func_165();
		return 1;
	}
	return 0;
}

void func_165()//Position - 0x9CFF
{
	bool bVar0;
	bool bVar1;
	func_180(0);
	Global_1888846.f_1 = 0;
	bVar0 = __LIB_8__::func_418(__LIB_11__::func_790(PLAYER::PLAYER_ID()));
	__LIB_1__::func_354(func_179(bVar0), (NETWORK::GET_CLOUD_TIME_AS_INT() + Global_262145.f_32537 /* Tunable: WAREHOUSE_CARGO_SOURCING_TIME */ * 60), -1, 1, 0);
	func_177(bVar0, 1);
	if (!BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_199, bVar0))
	{
		MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_199), bVar0);
	}
	__LIB_3__::func_452("SRC_CRG_TICKER" /* GXT: Source Special Cargo in progress. */, 0);
	__LIB_0__::func_186(32339, 1, -1);
	MISC::CLEAR_BIT(&Global_1978994, 5);
	bVar1 = __LIB_0__::func_137(32343, -1);
	if (!bVar1)
	{
		if (bVar0 == 0)
		{
			HUD::CLEAR_HELP(true);
			__LIB_0__::func_151("SRC_CRG_HELP_1" /* GXT: Lupe will contact you when they've sourced the Special Cargo and returned it to the Warehouse. */, -1);
		}
		else
		{
			HUD::CLEAR_HELP(true);
			__LIB_0__::func_151("SRC_CRG_HELP_2" /* GXT: Lupe will contact you when your staff member has sourced the Special Cargo and returned it to the Warehouse. */, -1);
		}
		__LIB_0__::func_186(32343, 1, -1);
	}
	func_169(0);
	__LIB_1__::func_333(1490700264, 10, 0);
}

void func_169(int iParam0)//Position - 0x9EBD
{
	int iVar0;
	struct<3> Var1;
	iVar0 = __LIB_5__::func_410(1, 1);
	if (iVar0 == 0)
	{
		return;
	}
	Var1.f_0 = -582909704;
	Var1.f_1 = PLAYER::PLAYER_ID();
	Var1.f_2 = iParam0;
	SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var1, 3, iVar0);
}

void func_177(bool bParam0, bool bParam1)//Position - 0xA162
{
	switch (bParam0)
	{
		case 0:
			__LIB_0__::func_186(32359, bParam1, -1);
			break;
		case 1:
			__LIB_0__::func_186(32360, bParam1, -1);
			break;
		case 2:
			__LIB_0__::func_186(32361, bParam1, -1);
			break;
		case 3:
			__LIB_0__::func_186(32362, bParam1, -1);
			break;
		case 4:
			__LIB_0__::func_186(32363, bParam1, -1);
			break;
	}
}

int func_179(bool bParam0)//Position - 0xA200
{
	switch (bParam0)
	{
		case 0:
			return 10399;
			break;
		case 1:
			return 10400;
			break;
		case 2:
			return 10401;
			break;
		case 3:
			return 10402;
			break;
		case 4:
			return 10403;
			break;
	}
	return 10399;
}

void func_180(int iParam0)//Position - 0xA25D
{
	Global_1888846.f_2 = iParam0;
}

bool func_197()//Position - 0xA908
{
	return Global_1888846.f_2;
}

void func_207()//Position - 0xAC0F
{
	switch (Local_346.f_1196.f_5)
	{
		case 0:
			func_306(1);
			break;
		case 1:
			if (((((((((((__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1) && !Global_1931426) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && !__LIB_0__::func_77(0)) && !__LIB_0__::func_877()) && !__LIB_4__::func_849()) && !__LIB_3__::func_558()) && func_298()) && !__LIB_1__::func_512()) && __LIB_9__::func_696()) && !Global_1888846.f_2) && !func_291(__LIB_11__::func_790(PLAYER::PLAYER_ID())))
			{
				if (Local_346.f_1196.f_2 == -1)
				{
					if (__LIB_8__::func_418(__LIB_11__::func_790(PLAYER::PLAYER_ID())) != 0)
					{
						__LIB_5__::func_569(&(Local_346.f_1196.f_2), 4, "SRC_CRG_PROMPT" /* GXT: Press ~INPUT_CONTEXT~ to speak to your Warehouse Staff. */, 0, 0, 0, 0);
					}
					else
					{
						__LIB_5__::func_569(&(Local_346.f_1196.f_2), 4, "SRC_CRG_PROMPTL" /* GXT: Press ~INPUT_CONTEXT~ to speak to Lupe. */, 0, 0, 0, 0);
					}
				}
				else if (__LIB_3__::func_113(Local_346.f_1196.f_2, 1))
				{
					__LIB_3__::func_122(&(Local_346.f_1196.f_2));
					Local_346.f_1196.f_2 = -1;
					__LIB_1__::func_376(PLAYER::PLAYER_ID(), 0, 256, 0);
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 185, true);
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
					}
					HUD::DISPLAY_RADAR(false);
					func_306(2);
				}
			}
			else if (Local_346.f_1196.f_2 != -1)
			{
				__LIB_3__::func_122(&(Local_346.f_1196.f_2));
				Local_346.f_1196.f_2 = -1;
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
			func_216();
			CAM::INVALIDATE_IDLE_CAM();
			break;
		case 3:
			func_208();
			break;
	}
}

void func_208()//Position - 0xADD7
{
	func_215(1);
	__LIB_1__::func_895(1, -1);
	if (Local_346.f_1196.f_5 > 1)
	{
		HUD::DISPLAY_RADAR(true);
		if (((((!__LIB_3__::func_366() && !__LIB_1__::func_584()) && !__LIB_0__::func_629()) && !__LIB_5__::func_845()) && !__LIB_3__::func_171(PLAYER::PLAYER_ID())) && !PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
		{
			__LIB_1__::func_376(PLAYER::PLAYER_ID(), 1, 0, 0);
		}
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 185, false);
	}
	if (Local_346.f_1196.f_2 != -1)
	{
		__LIB_3__::func_122(&(Local_346.f_1196.f_2));
		Local_346.f_1196.f_2 = -1;
	}
	func_306(1);
}

void func_215(bool bParam0)//Position - 0xB069
{
	if (bParam0)
	{
		Local_346.f_1196.f_4 = 0;
		Local_346.f_1196.f_3 = 0;
	}
	Local_346.f_1196.f_1 = 0;
	__LIB_0__::func_794(&(Local_346.f_1196.f_6));
	Local_346.f_1196 = 0;
	MISC::SET_BIT(&(Local_346.f_1196.f_1), 0);
}

void func_216()//Position - 0xB0B1
{
	if (!__LIB_3__::func_558())
	{
		func_273();
		if (__LIB_3__::func_67("SNK_MNU", -1, 1))
		{
			if (BitTest(Local_346.f_1196.f_1, 0))
			{
				func_259();
				MISC::CLEAR_BIT(&(Local_346.f_1196.f_1), 0);
			}
			else
			{
				__LIB_3__::func_781(Local_346.f_1196.f_4, 1, 1);
			}
			func_253();
			__LIB_9__::func_296(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
			__LIB_7__::func_895();
		}
	}
}

void func_253()//Position - 0xF84E
{
	if (!__LIB_29__::func_893(__LIB_11__::func_790(PLAYER::PLAYER_ID())))
	{
		if (__LIB_8__::func_418(__LIB_11__::func_790(PLAYER::PLAYER_ID())) != 0)
		{
			__LIB_1__::func_789("SRC_CRG_1_D" /* GXT: Send your staff member to source crates of Special Cargo for the Warehouse. */, 0, 0);
		}
		else
		{
			__LIB_1__::func_789("SRC_CRG_1_D_L" /* GXT: Send Lupe to source crates of Special Cargo for the Warehouse. */, 0, 0);
		}
	}
	else
	{
		__LIB_1__::func_789("SRC_CRG_FULL" /* GXT: Unavailable. Your Warehouse is already full. */, 0, 0);
	}
}

void func_259()//Position - 0xFB06
{
	bool bVar0;
	int iVar1;
	if (__LIB_8__::func_418(__LIB_11__::func_790(PLAYER::PLAYER_ID())) != 0)
	{
		__LIB_4__::func_851("SRC_CRG_T" /* GXT: WAREHOUSE STAFF */);
	}
	else
	{
		__LIB_4__::func_851("SRC_CRG_T_L" /* GXT: LUPE */);
	}
	bVar0 = true;
	if (!MONEY::NETWORK_CAN_SPEND_MONEY(Global_262145.f_32538 /* Tunable: WAREHOUSE_CARGO_SOURCING_PRICE */, false, true, false, -1, 0) || __LIB_29__::func_893(__LIB_11__::func_790(PLAYER::PLAYER_ID())))
	{
		bVar0 = false;
	}
	iVar1 = 0;
	while (iVar1 < __LIB_0__::func_109())
	{
		__LIB_8__::func_233(iVar1, func_264(iVar1), 0, bVar0, 0, 0, 0);
		__LIB_8__::func_233(iVar1, "IMPOUND_COST" /* GXT: $~1~ */, 1, bVar0, 0, 0, 0);
		__LIB_12__::func_332(Global_262145.f_32538 /* Tunable: WAREHOUSE_CARGO_SOURCING_PRICE */, 0);
		iVar1++;
	}
	__LIB_3__::func_781(Local_346.f_1196.f_4, 1, 1);
	__LIB_1__::func_792(201, "ITEM_SELECT" /* GXT: Select */, -1, 0);
	__LIB_1__::func_792(202, "ITEM_BACK" /* GXT: Back */, -1, 0);
}

char* func_264(int iParam0)//Position - 0x102B1
{
	switch (iParam0)
	{
		case 0:
			return "SRC_CRG_1_1" /* GXT: Source Special Cargo */;
		default:
	}
	return "";
}

void func_273()//Position - 0x10ABF
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	iVar3 = 150;
	if (PAD::IS_USING_CURSOR(2 /*FRONTEND_CONTROL*/))
	{
		iVar3 = 110;
	}
	__LIB_6__::func_25(1);
	PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 30 /*INPUT_MOVE_LR*/, true);
	PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 31 /*INPUT_MOVE_UD*/, true);
	PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/, true);
	PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 203 /*INPUT_FRONTEND_X*/, true);
	PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/, true);
	PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/, true);
	bVar4 = PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/);
	bVar5 = (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/));
	iVar2 = PAD::GET_CONTROL_VALUE(2 /*FRONTEND_CONTROL*/, 31 /*INPUT_MOVE_UD*/);
	if (!BitTest(Local_346.f_1196.f_1, 2))
	{
		if (PAD::IS_USING_CURSOR(2 /*FRONTEND_CONTROL*/))
		{
			func_277(&bVar0, &bVar1, &bVar4, &bVar5);
		}
		else
		{
			bVar0 = (iVar2 < 100 || PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/));
			bVar1 = (iVar2 > 150 || PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/));
		}
		if (bVar4)
		{
			if (MONEY::NETWORK_CAN_SPEND_MONEY(Global_262145.f_32538 /* Tunable: WAREHOUSE_CARGO_SOURCING_PRICE */, false, true, false, -1, 0) && !__LIB_29__::func_893(__LIB_11__::func_790(PLAYER::PLAYER_ID())))
			{
				func_180(1);
				__LIB_9__::func_137(&Global_1579024, 10);
				func_306(3);
				MISC::SET_BIT(&(Local_346.f_1196.f_1), 1);
			}
		}
		if (bVar0 || bVar1)
		{
			__LIB_0__::func_795(&(Local_346.f_1196.f_6), 0, 0);
			MISC::SET_BIT(&(Local_346.f_1196.f_1), 2);
		}
	}
	else if (__LIB_0__::func_937(&(Local_346.f_1196.f_6), iVar3, 0))
	{
		__LIB_0__::func_794(&(Local_346.f_1196.f_6));
		MISC::CLEAR_BIT(&(Local_346.f_1196.f_1), 2);
	}
	if (bVar4)
	{
		bVar6 = false;
		if (!MONEY::NETWORK_CAN_SPEND_MONEY(Global_262145.f_32538 /* Tunable: WAREHOUSE_CARGO_SOURCING_PRICE */, false, true, false, -1, 0) || __LIB_29__::func_893(__LIB_11__::func_790(PLAYER::PLAYER_ID())))
		{
			bVar6 = true;
			__LIB_9__::func_137(&Global_1579024, 11);
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
		func_306(3);
	}
}

void func_277(var uParam0, var uParam1, bool bParam2, bool bParam3)//Position - 0x10CEE
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
			if (Global_4539961 == Local_346.f_1196.f_4)
			{
				*bParam2 = 1;
			}
			else
			{
				Local_346.f_1196.f_4 = Global_4539961;
				__LIB_3__::func_781(Local_346.f_1196.f_4, 1, 1);
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

int func_291(int iParam0)//Position - 0x11616
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	if (iParam0 != 0 && __LIB_8__::func_418(iParam0) != -1)
	{
		if (__LIB_11__::func_802(iParam0) == PLAYER::PLAYER_ID())
		{
			bVar0 = __LIB_8__::func_418(iParam0);
			if (__LIB_1__::func_360(func_179(bVar0), -1, 0) > NETWORK::GET_CLOUD_TIME_AS_INT())
			{
				if (!BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_199, bVar0))
				{
					MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_199), bVar0);
				}
				return 1;
			}
			else if (BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_199, bVar0) || __LIB_8__::func_416(bVar0))
			{
				func_293(iParam0);
				MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_199), bVar0);
			}
		}
		else
		{
			iVar1 = __LIB_11__::func_802(iParam0);
			if (iVar1 != __LIB_0__::func_162())
			{
				bVar2 = __LIB_8__::func_414(iParam0, iVar1);
				if (BitTest(Global_2689235[__LIB_11__::func_802(iParam0) /*453*/].f_199, bVar2))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_293(int iParam0)//Position - 0x11744
{
	bool bVar0;
	bVar0 = __LIB_8__::func_418(iParam0);
	if (bVar0 != -1)
	{
		Global_1888846.f_4[bVar0] = 1;
		func_177(bVar0, 0);
	}
}

int func_298()//Position - 0x1186D
{
	switch (Global_1977032)
	{
		case 0:
			return (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1098.822f, -3097.927f, -38.00166f, 1100.822f, -3097.927f, -40.00166f, 2f, false, true, 0) && __LIB_10__::func_448(PLAYER::PLAYER_PED_ID(), 1099.822f, -3097.927f, -38.00166f, 80f));
			break;
		case 1:
			return (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1102.173f, -3101.958f, -38.00166f, 1104.173f, -3101.958f, -40.00166f, 2f, false, true, 0) && __LIB_10__::func_448(PLAYER::PLAYER_PED_ID(), 1103.173f, -3101.958f, -38.00166f, 80f));
			break;
		case 2:
			return (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1092.597f, -3098.03f, -38.00166f, 1094.597f, -3098.03f, -40.00166f, 2f, false, true, 0) && __LIB_10__::func_448(PLAYER::PLAYER_PED_ID(), 1093.597f, -3098.03f, -38.00166f, 80f));
			break;
		case 3:
			return (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1070.233f, -3097.829f, -38.00166f, 1072.233f, -3097.829f, -40.00166f, 2f, false, true, 0) && __LIB_10__::func_448(PLAYER::PLAYER_PED_ID(), 1071.233f, -3097.829f, -38.00166f, 80f));
			break;
		case 4:
			return (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1070.512f, -3107.35f, -38.00166f, 1072.512f, -3107.35f, -40.00166f, 2f, false, true, 0) && __LIB_10__::func_448(PLAYER::PLAYER_PED_ID(), 1071.512f, -3107.35f, -38.00166f, 80f));
			break;
		case 5:
			return (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1059.139f, -3098.929f, -38.00166f, 1061.139f, -3098.929f, -40.00166f, 2f, false, true, 0) && __LIB_10__::func_448(PLAYER::PLAYER_PED_ID(), 1060.139f, -3098.929f, -38.00166f, 80f));
			break;
		case 6:
			return (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1024.093f, -3098.251f, -38.00166f, 1026.093f, -3098.251f, -40.00166f, 2f, false, true, 0) && __LIB_10__::func_448(PLAYER::PLAYER_PED_ID(), 1025.093f, -3098.251f, -38.00166f, 80f));
			break;
		case 7:
			return (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1000.805f, -3092.803f, -38.00166f, 1002.805f, -3092.803f, -40.00166f, 2f, false, true, 0) && __LIB_10__::func_448(PLAYER::PLAYER_PED_ID(), 1001.805f, -3092.803f, -38.00166f, 80f));
			break;
		case 8:
			return (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 996.8175f, -3109.485f, -38.00166f, 998.8175f, -3109.485f, -40.00166f, 2f, false, true, 0) && __LIB_10__::func_448(PLAYER::PLAYER_PED_ID(), 997.8175f, -3109.485f, -38.00166f, 80f));
			break;
	}
	return 0;
}

void func_306(int iParam0)//Position - 0x11C7B
{
	Local_346.f_1196.f_5 = iParam0;
}

void func_307()//Position - 0x11C8D
{
	if (Global_1977032 != -1 && Local_346.f_2 != 0)
	{
		if (!HUD::DOES_BLIP_EXIST(Local_346.f_1208))
		{
			if (__LIB_8__::func_418(Local_346.f_2) != -1)
			{
				if (!BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_199, __LIB_8__::func_418(Local_346.f_2)) && !__LIB_1__::func_936(PLAYER::PLAYER_ID()))
				{
					if (__LIB_8__::func_418(__LIB_11__::func_790(PLAYER::PLAYER_ID())) != 0)
					{
						__LIB_7__::func_373(&(Local_346.f_1208), func_308(), 480, "SRC_CRG_BLIP" /* GXT: Warehouse Staff */, 1f, 0, 0);
					}
					else
					{
						__LIB_7__::func_373(&(Local_346.f_1208), func_308(), 480, "SRC_CRG_BLIP_L" /* GXT: Lupe */, 1f, 0, 0);
					}
				}
			}
		}
		else
		{
			if (BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_199, __LIB_8__::func_418(Local_346.f_2)) || __LIB_1__::func_936(PLAYER::PLAYER_ID()))
			{
				__LIB_0__::func_714(&(Local_346.f_1208));
			}
			if (BitTest(Local_346.f_0, 1))
			{
				MISC::CLEAR_BIT(&Local_346, 1);
				if (HUD::DOES_BLIP_EXIST(Local_346.f_1208))
				{
					HUD::SET_BLIP_FLASHES(Local_346.f_1208, true);
					HUD::SET_BLIP_FLASH_TIMER(Local_346.f_1208, 10000);
				}
			}
		}
	}
	else if (Global_1977032 == -1)
	{
		if (HUD::DOES_BLIP_EXIST(Local_346.f_1208))
		{
			__LIB_0__::func_714(&(Local_346.f_1208));
		}
	}
}

Vector3 func_308()//Position - 0x11DBD
{
	switch (Global_1977032)
	{
		case 0:
			return 1099.822f, -3097.927f, -39.02092f;
			break;
		case 1:
			return 1103.173f, -3101.958f, -39.02092f;
			break;
		case 2:
			return 1093.597f, -3098.03f, -39.00166f;
			break;
		case 3:
			return 1071.233f, -3097.829f, -39.00166f;
			break;
		case 4:
			return 1071.512f, -3107.35f, -39.00166f;
			break;
		case 5:
			return 1060.139f, -3098.929f, -38.00166f;
			break;
		case 6:
			return 1025.093f, -3098.251f, -38.00166f;
			break;
		case 7:
			return 1001.805f, -3092.803f, -38.00166f;
			break;
		case 8:
			return 997.8175f, -3109.485f, -38.00166f;
			break;
	}
	return 1093.25f, -3102.813f, -38.00166f;
}

void func_309()//Position - 0x11ED0
{
	if (Local_346.f_15 == PLAYER::PLAYER_ID())
	{
		if (BitTest(Local_346.f_0, 2))
		{
			return;
		}
		if (__LIB_0__::func_137(32342, -1) || !__LIB_2__::func_743(14))
		{
			MISC::SET_BIT(&Local_346, 2);
		}
		else if (((((!NETWORK::NETWORK_IS_IN_MP_CUTSCENE() && !CAM::IS_SCREEN_FADED_OUT()) && !CAM::IS_SCREEN_FADING_OUT()) && !CAM::IS_SCREEN_FADING_IN()) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !__LIB_0__::func_833())
		{
			__LIB_0__::func_151("WHOUSE_STAFF_HELP" /* GXT: Your new on-site Warehouse Staff ~BLIP_VIP~ can be assigned to source Special Cargo for you. */, 10000);
			__LIB_0__::func_186(32342, 1, -1);
			MISC::SET_BIT(&Local_346, 1);
			MISC::SET_BIT(&Local_346, 2);
		}
	}
}

void func_311(int iParam0)//Position - 0x11F92
{
	Local_346.f_1 = iParam0;
}

void func_312()//Position - 0x11FA1
{
	Local_347.f_0 = true;
	if (Local_346.f_15 == PLAYER::PLAYER_ID())
	{
		MISC::SET_BIT(&(Local_345[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/]), 0);
		Local_347.f_1 = 1;
	}
}

int func_315()//Position - 0x11FE8
{
	if (BitTest(Global_1946250, 2))
	{
		MISC::CLEAR_BIT(&Global_1946250, 2);
		return 0;
	}
	if (__LIB_0__::func_877())
	{
		return 0;
	}
	if (Local_347.f_11)
	{
		return 0;
	}
	if (!Local_346.f_15 == PLAYER::PLAYER_ID())
	{
		if (((NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(Local_346.f_15) && NETWORK::NETWORK_GET_PARTICIPANT_INDEX(Local_346.f_15) > -1) && BitTest(Local_345[NETWORK::NETWORK_GET_PARTICIPANT_INDEX(Local_346.f_15) /*5*/], 0)) || BitTest(Global_2689235[Local_346.f_15 /*453*/].f_318, 30))
		{
			return 1;
		}
		return 0;
	}
	if (!__LIB_2__::func_743(14))
	{
		return 1;
	}
	return 0;
}

void func_317()//Position - 0x120AF
{
	Local_355[0 /*3*/] = { 992.419f, -3101.735f, -39.489f };
	Local_355[1 /*3*/] = { 992.419f, -3100.978f, -39.489f };
}

bool func_318(int iParam0)//Position - 0x120E5
{
	return Local_346.f_1 == iParam0;
}

void func_319(var uParam0, int* iParam1, int* iParam2, var uParam3, var uParam4, var uParam5)//Position - 0x120F5
{
	var uVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	__LIB_11__::func_28(uParam0, iParam2);
	if (((iParam2->f_799 >= 1 && __LIB_4__::func_955(PLAYER::PLAYER_ID())) && !__LIB_8__::func_258(PLAYER::PLAYER_ID())) && !ENTITY::DOES_ENTITY_EXIST(iParam2->f_715))
	{
		if (!__LIB_10__::func_434(iParam2))
		{
		}
	}
	if (Global_4196256 != iParam2->f_795)
	{
		iParam2->f_795 = Global_4196256;
		MISC::SET_BIT(iParam1, 16);
	}
	if (BitTest(*iParam1, 16))
	{
		iParam2->f_799 = 0;
		MISC::CLEAR_BIT(iParam1, 16);
	}
	if (__LIB_3__::func_366() || PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
	{
		__LIB_9__::func_812(iParam1, iParam2);
		return;
	}
	if (iParam2->f_719 > 5)
	{
		iParam2->f_719 = 0;
	}
	if (iParam2->f_718 > 30)
	{
		iParam2->f_718 = 0;
	}
	if (iParam2->f_799 > 0 || iParam2->f_800 > 0)
	{
		__LIB_12__::func_47(uParam0, iParam1, iParam2, uParam3, 0);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(PLAYER::PLAYER_ID()))
		{
			if (NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT() == NETWORK::NETWORK_GET_PARTICIPANT_INDEX(PLAYER::PLAYER_ID()))
			{
				__LIB_8__::func_389(uParam0);
			}
		}
	}
	if (iParam2->f_799 != 2)
	{
		if (__LIB_8__::func_255(*iParam1) != 0)
		{
			__LIB_8__::func_388(iParam1, 0);
		}
	}
	if (iParam2->f_800 != 3)
	{
		if (__LIB_8__::func_251(*iParam1) != 0)
		{
			__LIB_8__::func_387(iParam1, 0);
		}
	}
	if (((((((((uParam3->f_33 == 10 || __LIB_1__::func_866(PLAYER::PLAYER_ID(), 0)) || __LIB_7__::func_687(uParam3->f_31)) || __LIB_7__::func_686(uParam3->f_31, -1)) || __LIB_7__::func_685(uParam3->f_31)) || __LIB_7__::func_726(PLAYER::PLAYER_ID())) || __LIB_1__::func_597(uParam3->f_31)) || __LIB_2__::func_782(uParam3->f_31, 0, 0)) || __LIB_8__::func_260(PLAYER::PLAYER_ID())) || (__LIB_8__::func_259(PLAYER::PLAYER_ID()) && !BitTest(*iParam1, 0)))
	{
		if (((uParam0->f_50 > 0 && uParam0->f_52 > 0) && !BitTest(*iParam1, 15)) || ((uParam0->f_50 > 0 && !BitTest(*iParam1, 15)) && (((((((((((((__LIB_7__::func_687(uParam3->f_31) || __LIB_7__::func_686(uParam3->f_31, -1)) || __LIB_7__::func_685(uParam3->f_31)) || __LIB_1__::func_597(uParam3->f_31)) || __LIB_2__::func_782(uParam3->f_31, 0, 0)) || __LIB_8__::func_260(PLAYER::PLAYER_ID())) || __LIB_8__::func_259(PLAYER::PLAYER_ID())) || __LIB_7__::func_726(PLAYER::PLAYER_ID())) || __LIB_6__::func_846(PLAYER::PLAYER_ID())) || __LIB_7__::func_690(PLAYER::PLAYER_ID())) || __LIB_5__::func_186(PLAYER::PLAYER_ID())) || __LIB_6__::func_938(PLAYER::PLAYER_ID())) || __LIB_3__::func_533(PLAYER::PLAYER_ID())) || __LIB_5__::func_188(PLAYER::PLAYER_ID()))))
		{
			__LIB_11__::func_44(iParam2, uParam3);
			MISC::SET_BIT(iParam1, 15);
			if (((((((__LIB_7__::func_687(uParam3->f_31) || __LIB_7__::func_686(uParam3->f_31, -1)) || __LIB_7__::func_685(uParam3->f_31)) || __LIB_1__::func_597(uParam3->f_31)) || __LIB_2__::func_782(uParam3->f_31, 0, 0)) || __LIB_8__::func_260(PLAYER::PLAYER_ID())) || __LIB_8__::func_259(PLAYER::PLAYER_ID())) || __LIB_7__::func_726(PLAYER::PLAYER_ID()))
			{
				__LIB_11__::func_43(iParam2, uParam0, uParam3, 0);
			}
		}
	}
	else if (uParam0->f_50 > 0 && !BitTest(*iParam1, 15))
	{
		__LIB_11__::func_44(iParam2, uParam3);
		MISC::SET_BIT(iParam1, 15);
	}
	if ((iParam2->f_719 % 2) == 0)
	{
		switch (iParam2->f_799)
		{
			case 0:
				if (!Global_1853198)
				{
					iParam2->f_795 = Global_4196256;
					__LIB_11__::func_926(iParam2, iParam1);
					if ((uParam0->f_50 > 0 && BitTest(*iParam1, 15)) && func_4888(iParam1, iParam2, uParam3))
					{
						__LIB_12__::func_47(uParam0, iParam1, iParam2, uParam3, 0);
						MISC::SET_BIT(iParam2, 0);
						iParam2->f_4 = ((0f + -36f) / 2f);
						if (__LIB_6__::func_846(PLAYER::PLAYER_ID()))
						{
							if (!__LIB_10__::func_471(iParam2))
							{
								return;
							}
						}
						if (__LIB_4__::func_955(PLAYER::PLAYER_ID()) && !__LIB_10__::func_434(iParam2))
						{
							return;
						}
						if (iParam2->f_803 && !__LIB_8__::func_378(iParam2))
						{
							return;
						}
						if (iParam2->f_804 && !__LIB_8__::func_377(iParam2))
						{
							return;
						}
						if (__LIB_7__::func_690(PLAYER::PLAYER_ID()) && !__LIB_8__::func_376(iParam2))
						{
							return;
						}
						if (__LIB_5__::func_186(PLAYER::PLAYER_ID()) && !__LIB_8__::func_375(iParam2))
						{
							return;
						}
						if (__LIB_6__::func_938(PLAYER::PLAYER_ID()) && !__LIB_8__::func_374(iParam2))
						{
							return;
						}
						if (__LIB_3__::func_533(PLAYER::PLAYER_ID()) && !__LIB_8__::func_373(iParam2))
						{
							return;
						}
						if (__LIB_5__::func_188(PLAYER::PLAYER_ID()) && !func_4876(iParam2))
						{
							return;
						}
						__LIB_8__::func_372(iParam2, 1);
					}
					else
					{
						if (uParam0->f_50 != 0)
						{
						}
						if (!BitTest(*iParam1, 15))
						{
						}
					}
				}
				break;
			case 1:
				if (func_346(iParam1, iParam2, uParam3, &(iParam2->f_1), &(iParam2->f_797), uParam4, uParam5, 0))
				{
					__LIB_1__::func_92();
					__LIB_8__::func_372(iParam2, 2);
				}
				break;
			case 2:
				__LIB_3__::func_570(1);
				HUD::SHOW_HUD_COMPONENT_THIS_FRAME(16);
				iVar1 = __LIB_8__::func_255(*iParam1);
				uVar0 = __LIB_10__::func_534(uParam0, iParam1, iParam2, &iVar1, uParam4, 0);
				__LIB_8__::func_388(iParam1, iVar1);
				if (((((uVar0 || Global_1853198) || Global_1931426) || __LIB_8__::func_363(iParam1, iParam2)) || __LIB_2__::func_88(PLAYER::PLAYER_ID()) == 5) || Global_2703735.f_3428 == 1)
				{
					if (Global_2703735.f_3428 == 1)
					{
					}
					if (__LIB_2__::func_88(PLAYER::PLAYER_ID()) == 5)
					{
					}
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					}
					Global_32230 = 0;
					__LIB_8__::func_998(iParam2);
					__LIB_8__::func_372(iParam2, 1);
				}
				break;
		}
	}
	else if (((((((((((((((((!BitTest(*iParam1, 0) && !__LIB_7__::func_686(uParam3->f_31, -1)) && !__LIB_7__::func_687(uParam3->f_31)) && !__LIB_7__::func_685(uParam3->f_31)) && !__LIB_1__::func_597(uParam3->f_31)) && !__LIB_2__::func_782(uParam3->f_31, 0, 0)) && !__LIB_8__::func_260(PLAYER::PLAYER_ID())) && !__LIB_8__::func_259(PLAYER::PLAYER_ID())) && !__LIB_7__::func_726(PLAYER::PLAYER_ID())) && !__LIB_6__::func_846(PLAYER::PLAYER_ID())) && !__LIB_4__::func_955(PLAYER::PLAYER_ID())) && !iParam2->f_803) && !iParam2->f_804) && !__LIB_7__::func_690(PLAYER::PLAYER_ID())) && !__LIB_5__::func_186(PLAYER::PLAYER_ID())) && !__LIB_6__::func_938(PLAYER::PLAYER_ID())) && !__LIB_3__::func_533(PLAYER::PLAYER_ID())) && !__LIB_5__::func_188(PLAYER::PLAYER_ID()))
	{
		switch (iParam2->f_800)
		{
			case 0:
				if (uParam0->f_50 > 0 && BitTest(*iParam1, 15))
				{
					__LIB_12__::func_47(uParam0, iParam1, iParam2, uParam3, 1);
					MISC::SET_BIT(iParam2, 0);
					iParam2->f_4 = ((0f + -36f) / 2f);
					__LIB_8__::func_362(iParam2, 1);
				}
				break;
			case 1:
				if (uParam3->f_33 == 10)
				{
					if (func_346(iParam1, iParam2, uParam3, &(iParam2->f_2), &(iParam2->f_798), uParam4, uParam5, 1))
					{
						__LIB_1__::func_92();
						__LIB_8__::func_362(iParam2, 3);
					}
				}
				break;
			case 3:
				__LIB_3__::func_570(1);
				HUD::SHOW_HUD_COMPONENT_THIS_FRAME(16);
				iVar3 = __LIB_8__::func_251(*iParam1);
				uVar2 = __LIB_10__::func_534(uParam0, iParam1, iParam2, &iVar3, uParam4, 1);
				__LIB_8__::func_387(iParam1, iVar3);
				if (((uVar2 || Global_1853198) || Global_1931426) || __LIB_8__::func_363(iParam1, iParam2))
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					}
					__LIB_8__::func_998(iParam2);
					__LIB_8__::func_362(iParam2, 1);
				}
				break;
			}
	}
	if (((!BitTest(*iParam1, 9) && !BitTest(*iParam1, 13)) && !BitTest(*iParam1, 10)) && !BitTest(Global_2621446, 15))
	{
		if (!BitTest(*iParam2, 13))
		{
			iParam2->f_719++;
		}
	}
	iParam2->f_718++;
}

int func_346(int* iParam0, int* iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, bool bParam7)//Position - 0x13882
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	struct<3> Var7;
	struct<3> Var8;
	struct<3> Var9;
	bVar0 = false;
	iVar1 = 0;
	iVar2 = 0;
	if (bParam7)
	{
	}
	if (*uParam4 > 0)
	{
		__LIB_1__::func_33(0);
	}
	switch (*uParam4)
	{
		case 0:
			if ((((!BitTest(*iParam0, 9) && !BitTest(*iParam0, 13)) && !BitTest(*iParam0, 10)) && !BitTest(Global_2621446, 15)) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (bParam7 == 0)
				{
					iVar3 = __LIB_9__::func_750(iParam1, iParam0, uParam2);
				}
				else
				{
					iVar3 = 2;
				}
				if (bParam7 == 0)
				{
					if (iParam1->f_716 > iVar3)
					{
						iParam1->f_716 = 0;
					}
				}
				if (bParam7 == 1)
				{
					iParam1->f_717 = iParam1->f_716;
					iParam1->f_716 = 2;
				}
				if (((((func_359(iParam0, uParam2, iParam1->f_716, iParam1) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true)) && __LIB_4__::func_850(PLAYER::PLAYER_PED_ID()) <= 9) && !BitTest(Global_1946250.f_4, 2)) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) && !Global_2667225.f_2681)
				{
					if (__LIB_9__::func_749((11 + iParam1->f_716), iParam1->f_784, uParam6) && !(iParam1->f_804 && __LIB_7__::func_253()))
					{
						if (__LIB_0__::func_1("RADIO_NA_PP" /* GXT: You cannot use this radio while a private party is active. */))
						{
							HUD::CLEAR_HELP(true);
						}
						MISC::SET_BIT(iParam1, 13);
						if (!bVar0)
						{
							if (!Global_1931426 && !AUDIO::IS_AUDIO_SCENE_ACTIVE("MP_POSITIONED_RADIO_MUTE_SCENE"))
							{
								if (((((__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1) && !BitTest(Global_2703735.f_876.f_4, 0)) && !__LIB_1__::func_512()) && !__LIB_8__::func_363(iParam0, iParam1)) && !__LIB_3__::func_558()) && !NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(PLAYER::PLAYER_ID()))
								{
									if (bParam7 == 1)
									{
									}
									if (__LIB_8__::func_368(iParam1))
									{
										STREAMING::REQUEST_ANIM_DICT(iParam1->f_782);
										if (STREAMING::HAS_ANIM_DICT_LOADED(iParam1->f_782))
										{
											if (!BitTest(Global_2621446, 7))
											{
												bVar0 = true;
											}
										}
										else
										{
											STREAMING::REQUEST_ANIM_DICT(iParam1->f_782);
										}
									}
									else
									{
										bVar0 = true;
									}
								}
								else
								{
									if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
									{
									}
									if (!BitTest(Global_2703735.f_876.f_4, 0))
									{
									}
									if (!__LIB_1__::func_512())
									{
									}
									if (!__LIB_8__::func_363(iParam0, iParam1))
									{
									}
								}
							}
							else
							{
								if (!Global_1931426)
								{
								}
								if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("MP_POSITIONED_RADIO_MUTE_SCENE"))
								{
								}
							}
						}
					}
					else
					{
						if (iParam1->f_804 && __LIB_7__::func_253())
						{
							if (!__LIB_0__::func_1("RADIO_NA_PP" /* GXT: You cannot use this radio while a private party is active. */))
							{
								__LIB_0__::func_151("RADIO_NA_PP" /* GXT: You cannot use this radio while a private party is active. */, -1);
							}
						}
						iVar4 = 0;
						while (iVar4 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
						{
							if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar4)))
							{
								iVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar4));
								if (iVar5 != PLAYER::PLAYER_ID())
								{
									if (__LIB_1__::func_693(iVar5, 1, 1))
									{
										fVar6 = MISC::GET_DISTANCE_BETWEEN_COORDS(__LIB_1__::func_694(iVar5), __LIB_1__::func_694(PLAYER::PLAYER_ID()), true);
										if (fVar6 < 2f && fVar6 != 0f)
										{
										}
									}
								}
							}
							iVar4++;
						}
					}
					if (bVar0)
					{
						if (Global_1853198)
						{
							if (*uParam3 == -1)
							{
								__LIB_5__::func_569(uParam3, 3, "MPRD_BILL" /* GXT: Unable to use the radio until utility charge is paid. */, 0, 0, 0, 0);
							}
						}
						else if (*uParam3 == -1)
						{
							__LIB_5__::func_569(uParam3, 3, "MPRD_CTXT" /* GXT: Press ~INPUT_CONTEXT~ to use the radio. */, 0, 0, 0, 0);
						}
						else if (__LIB_3__::func_113(*uParam3, 1))
						{
							__LIB_3__::func_122(uParam3);
							Global_32230 = 1;
							if (__LIB_8__::func_368(iParam1))
							{
								MISC::SET_BIT(iParam0, 13);
								iParam0->f_2 = iParam1->f_716;
								*uParam4++;
							}
							else
							{
								iParam0->f_2 = iParam1->f_716;
								TASK::TASK_TURN_PED_TO_FACE_COORD(PLAYER::PLAYER_PED_ID(), __LIB_9__::func_748(iParam1, iParam0, uParam2), 0);
								TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), __LIB_9__::func_748(iParam1, iParam0, uParam2), -1, 0, 2);
								MISC::SET_BIT(iParam1, 0);
								MISC::SET_BIT(&Global_2621446, 15);
								return 1;
							}
						}
					}
				}
				else
				{
					MISC::CLEAR_BIT(iParam1, 13);
					if (bParam7 == 1)
					{
						iParam1->f_716 = iParam1->f_717;
					}
					else
					{
						iParam1->f_716++;
					}
				}
			}
			break;
		case 1:
			if (__LIB_8__::func_369((11 + iParam1->f_716), &iVar1, uParam5, uParam6))
			{
				if ((BitTest(*iParam0, 13) && iVar1 == 1) || (iParam1->f_794 && iVar1 == 1))
				{
					Var7 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(iParam1->f_782, iParam1->f_787, iParam1->f_784, 0f, 0f, IntToFloat(iParam1->f_783), 0f, 2) };
					Var8 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(iParam1->f_782, iParam1->f_787, iParam1->f_784, 0f, 0f, IntToFloat(iParam1->f_783), 0f, 2) };
					Var9 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), PED::GET_ANIM_INITIAL_OFFSET_POSITION(iParam1->f_782, iParam1->f_787, iParam1->f_784, 0f, 0f, IntToFloat(iParam1->f_783), 0f, 2), 1f, 2500, Var7.f_2, 0.1f);
					MISC::CLEAR_BIT(iParam0, 13);
					MISC::SET_BIT(iParam0, 9);
					*uParam4++;
				}
				else if (iVar1 == 2)
				{
					__LIB_7__::func_252(uParam5);
					MISC::CLEAR_BIT(iParam0, 13);
					MISC::CLEAR_BIT(&Global_2621446, 15);
					MISC::CLEAR_BIT(iParam1, 0);
					*uParam4 = 0;
				}
			}
			break;
		case 2:
			if (BitTest(*iParam0, 9))
			{
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 30 /*INPUT_MOVE_LR*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 31 /*INPUT_MOVE_UD*/, true);
				PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 51 /*INPUT_CONTEXT*/, true);
				if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD")) == 7)
				{
					MISC::SET_BIT(iParam0, 10);
					iParam1->f_792 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(iParam1->f_784, 0f, 0f, IntToFloat(iParam1->f_783), 2, true, false, 1f, 0f, 1f);
					NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iParam1->f_792, iParam1->f_782, iParam1->f_788, 2f, -1.5f, 13, 16, 2f, 0);
					NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iParam1->f_792);
					MISC::CLEAR_BIT(iParam0, 9);
					*uParam4++;
				}
			}
			break;
		case 3:
			if (BitTest(*iParam0, 10))
			{
				iVar2 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(iParam1->f_792);
				if (iVar2 != -1 && PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar2))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar2) >= 0.9f)
					{
						if (BitTest(*iParam0, 5))
						{
							MISC::SET_BIT(iParam0, 6);
						}
						MISC::SET_BIT(iParam1, 0);
						MISC::SET_BIT(&Global_2621446, 15);
						MISC::CLEAR_BIT(iParam0, 10);
						iParam1->f_792 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(iParam1->f_784, 0f, 0f, IntToFloat(iParam1->f_783), 2, false, true, 1f, 0f, 1f);
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iParam1->f_792, iParam1->f_782, iParam1->f_789, 2f, -1.5f, 13, 16, 2f, 0);
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iParam1->f_792);
						*uParam4 = 0;
						return 1;
					}
				}
			}
			break;
	}
	if (!bVar0)
	{
		__LIB_3__::func_122(uParam3);
	}
	return 0;
}

int func_359(int* iParam0, var uParam1, int iParam2, var uParam3)//Position - 0x143A3
{
	struct<4> Var0;
	float fVar1;
	int iVar2;
	struct<4> Var3;
	if (Global_1946107 && __LIB_9__::func_696())
	{
		return 0;
	}
	fVar1 = 0f;
	iVar2 = 0;
	switch (uParam1->f_33)
	{
		case 2:
		case 6:
			MISC::CLEAR_BIT(iParam0, 5);
			break;
	}
	if (__LIB_4__::func_955(PLAYER::PLAYER_ID()))
	{
		if (!__LIB_8__::func_258(Global_1853191) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 360.89172f, 4841.1543f, -59.999626f, 360.48737f, 4839.9272f, -57.69137f, 1.5f, false, true, 0))
		{
			uParam3->f_782 = "anim@mp_radio@garage@low";
			uParam3->f_783 = 155;
			uParam3->f_784 = { 360.46f, 4840.405f, -58.96f };
			uParam3->f_787 = "action_a";
			uParam3->f_788 = "enter";
			uParam3->f_789 = "idle_a";
			uParam3->f_790 = "button_press";
			uParam3->f_791 = "exit";
			Global_32229 = 1;
			return 1;
		}
		else if (__LIB_9__::func_658() && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 363.88956f, 4826.5337f, -59.991413f, 363.90433f, 4827.5083f, -58.010437f, 1.5f, false, true, 0))
		{
			uParam3->f_782 = "anim@mp_radio@garage@low";
			uParam3->f_783 = 0;
			uParam3->f_784 = { 364.14f, 4827.09f, -58.958f };
			uParam3->f_787 = "action_a";
			uParam3->f_788 = "enter";
			uParam3->f_789 = "idle_a";
			uParam3->f_790 = "button_press";
			uParam3->f_791 = "exit";
			Global_32229 = 1;
			return 1;
		}
		Global_32229 = 0;
		return 0;
	}
	if (((((((((((((((((!__LIB_7__::func_685(uParam1->f_31) && !__LIB_7__::func_686(uParam1->f_31, -1)) && !__LIB_7__::func_687(uParam1->f_31)) && !uParam3->f_794) && !__LIB_1__::func_597(uParam1->f_31)) && !__LIB_2__::func_782(uParam1->f_31, 1, 0)) && !__LIB_8__::func_260(PLAYER::PLAYER_ID())) && !__LIB_8__::func_259(PLAYER::PLAYER_ID())) && !__LIB_7__::func_726(PLAYER::PLAYER_ID())) && !__LIB_6__::func_846(PLAYER::PLAYER_ID())) && !__LIB_4__::func_955(PLAYER::PLAYER_ID())) && !uParam3->f_803) && !uParam3->f_804) && !__LIB_7__::func_690(PLAYER::PLAYER_ID())) && !__LIB_5__::func_186(PLAYER::PLAYER_ID())) && !__LIB_6__::func_938(PLAYER::PLAYER_ID())) && !__LIB_3__::func_533(PLAYER::PLAYER_ID())) && !__LIB_5__::func_188(PLAYER::PLAYER_ID()))
	{
		switch (uParam1->f_33)
		{
			case 2:
				if (BitTest(*iParam0, 0))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 176.27357f, -999.4766f, -97.58723f, 176.26738f, -1000.86804f, -100.06245f, 1.6875f, false, true, 0))
					{
						uParam3->f_782 = "anim@mp_radio@garage@low";
						uParam3->f_783 = 0;
						uParam3->f_784 = { 176.601f, -999.79f, -98.957f };
						uParam3->f_787 = "action_a";
						uParam3->f_788 = "enter";
						uParam3->f_789 = "idle_a";
						uParam3->f_790 = "button_press";
						uParam3->f_791 = "exit";
						return 1;
					}
				}
				else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 263.615f, -994.4068f, -97.697914f, 263.60675f, -996.1709f, -100.07114f, 1.5f, false, true, 0))
				{
					uParam3->f_782 = "anim@mp_radio@low_apment";
					uParam3->f_783 = -1;
					uParam3->f_784 = { 263.035f, -995.132f, -99.04f };
					uParam3->f_787 = "action_a_kitchen";
					uParam3->f_788 = "enter_kitchen";
					uParam3->f_789 = "idle_a_kitchen";
					uParam3->f_790 = "button_press_kitchen";
					uParam3->f_791 = "exit_kitchen";
					return 1;
				}
				break;
			case 6:
				if (BitTest(*iParam0, 0))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 201.88275f, -993.9427f, -97.581116f, 202.00244f, -995.12775f, -100.06246f, 1.6875f, false, true, 0))
					{
						uParam3->f_782 = "anim@mp_radio@garage@medium";
						uParam3->f_783 = 0;
						uParam3->f_784 = { 201.455f, -994.257f, -98.979f };
						uParam3->f_787 = "action_a";
						uParam3->f_788 = "enter";
						uParam3->f_789 = "idle_a";
						uParam3->f_790 = "button_press";
						uParam3->f_791 = "exit";
						return 1;
					}
				}
				else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 340.92935f, -1002.6046f, -100.19622f, 340.98868f, -1000.3216f, -98.19622f, 1f, false, true, 0))
				{
					uParam3->f_782 = "anim@mp_radio@medium_apment";
					uParam3->f_783 = -90;
					uParam3->f_784 = { 341.355f, -1000.652f, -99.14f };
					uParam3->f_787 = "action_a_kitchen";
					uParam3->f_788 = "enter_kitchen";
					uParam3->f_789 = "idle_a_kitchen";
					uParam3->f_790 = "button_press_kitchen";
					uParam3->f_791 = "exit_kitchen";
					return 1;
				}
				break;
			case 10:
				if (BitTest(*iParam0, 0))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 231.84108f, -975.63495f, -100.08978f, 230.35152f, -975.6111f, -96.041504f, 2.5f, false, true, 0))
					{
						uParam3->f_782 = "anim@mp_radio@garage@high";
						uParam3->f_783 = 0;
						uParam3->f_784 = { 230.302f, -975.685f, -98.979f };
						uParam3->f_787 = "action_a";
						uParam3->f_788 = "enter";
						uParam3->f_789 = "idle_a";
						uParam3->f_790 = "button_press";
						uParam3->f_791 = "exit";
						return 1;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							Var0 = { uParam3->f_720[0 /*6*/] };
							fVar1 = 1.8125f;
							if (__LIB_7__::func_688(uParam1->f_31))
							{
								uParam3->f_784 = { uParam3->f_751[0 /*6*/] };
								uParam3->f_783 = SYSTEM::ROUND(uParam3->f_751[0 /*6*/].f_3.f_2);
								uParam3->f_782 = "anim@mp_radio@high_life_apment";
								uParam3->f_787 = "action_a_living_room";
								uParam3->f_788 = "enter_living_room";
								uParam3->f_789 = "idle_a_living_room";
								uParam3->f_790 = "button_press_living_room";
								uParam3->f_791 = "exit_living_room";
							}
							else
							{
								uParam3->f_784 = { uParam3->f_751[0 /*6*/] };
								uParam3->f_783 = SYSTEM::ROUND(uParam3->f_751[0 /*6*/].f_3.f_2);
								uParam3->f_782 = "anim@mp_radio@high_apment";
								uParam3->f_787 = "action_a_bedroom";
								uParam3->f_788 = "enter_bedroom";
								uParam3->f_789 = "idle_a_bedroom";
								uParam3->f_790 = "button_press_bedroom";
								uParam3->f_791 = "exit_bedroom";
							}
							break;
						case 1:
							Var0 = { uParam3->f_720[1 /*6*/] };
							fVar1 = 1.8125f;
							if (__LIB_7__::func_688(uParam1->f_31))
							{
								uParam3->f_782 = "anim@mp_radio@high_life_apment";
								uParam3->f_784 = { uParam3->f_751[1 /*6*/] };
								uParam3->f_783 = SYSTEM::ROUND(uParam3->f_751[1 /*6*/].f_3.f_2);
								uParam3->f_787 = "action_a_bedroom";
								uParam3->f_788 = "enter_bedroom";
								uParam3->f_789 = "idle_a_bedroom";
								uParam3->f_790 = "button_press_bedroom";
								uParam3->f_791 = "exit_bedroom";
							}
							else
							{
								uParam3->f_784 = { uParam3->f_751[1 /*6*/] };
								uParam3->f_783 = SYSTEM::ROUND(uParam3->f_751[1 /*6*/].f_3.f_2);
								uParam3->f_782 = "anim@mp_radio@high_apment";
								uParam3->f_787 = "action_a_living_room";
								uParam3->f_788 = "enter_living_room";
								uParam3->f_789 = "idle_a_living_room";
								uParam3->f_790 = "button_press_living_room";
								uParam3->f_791 = "exit_living_room";
							}
							break;
						case 2:
							Var0 = { uParam3->f_720[2 /*6*/] };
							fVar1 = 1f;
							if (__LIB_7__::func_688(uParam1->f_31))
							{
								uParam3->f_784 = { uParam3->f_751[2 /*6*/] };
								uParam3->f_783 = SYSTEM::ROUND(uParam3->f_751[2 /*6*/].f_3.f_2);
								uParam3->f_782 = "anim@mp_radio@high_life_apment";
								uParam3->f_787 = "action_a_study";
								uParam3->f_788 = "enter_study";
								uParam3->f_789 = "idle_a_study";
								uParam3->f_790 = "button_press_study";
								uParam3->f_791 = "exit_study";
							}
							else
							{
								uParam3->f_784 = { uParam3->f_751[2 /*6*/] };
								uParam3->f_783 = SYSTEM::ROUND(uParam3->f_751[2 /*6*/].f_3.f_2);
								uParam3->f_782 = "anim@mp_radio@high_apment";
								uParam3->f_787 = "action_a_study";
								uParam3->f_788 = "enter_study";
								uParam3->f_789 = "idle_a_study";
								uParam3->f_790 = "button_press_study";
								uParam3->f_791 = "exit_study";
							}
							iVar2 = 1;
							break;
					}
					if ((Var0.f_0 != 0f && Var0.f_1 != 0f) && Var0.f_2 != 0f)
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var0, Var0.f_3, fVar1, false, true, 0))
						{
							if (iVar2 == 1)
							{
								if (!BitTest(*iParam0, 5))
								{
									MISC::SET_BIT(iParam0, 5);
								}
								iVar2 = 0;
							}
							return 1;
						}
						else
						{
							iVar2 = 0;
							MISC::CLEAR_BIT(iParam0, 5);
							uParam3->f_784 = { 0f, 0f, 0f };
							uParam3->f_783 = 0;
							uParam3->f_782 = "";
							uParam3->f_787 = "";
							uParam3->f_788 = "";
							uParam3->f_789 = "";
							uParam3->f_790 = "";
							uParam3->f_791 = "";
						}
					}
				}
				break;
			case 20:
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), uParam3->f_720[0 /*6*/], uParam3->f_720[0 /*6*/].f_3, 1.4f, false, true, 0))
				{
					uParam3->f_783 = SYSTEM::ROUND(uParam3->f_751[0 /*6*/].f_3.f_2);
					uParam3->f_784 = { uParam3->f_751[0 /*6*/] };
					uParam3->f_782 = "anim@mp_radio@garage@medium";
					uParam3->f_787 = "action_a";
					uParam3->f_788 = "enter";
					uParam3->f_789 = "idle_a";
					uParam3->f_790 = "button_press";
					uParam3->f_791 = "exit";
					return 1;
				}
				break;
		}
	}
	else if (((((((((((((((__LIB_7__::func_685(uParam1->f_31) || __LIB_7__::func_686(uParam1->f_31, -1)) || __LIB_7__::func_687(uParam1->f_31)) || uParam3->f_794) || __LIB_1__::func_597(uParam1->f_31)) || __LIB_8__::func_260(PLAYER::PLAYER_ID())) || __LIB_8__::func_259(PLAYER::PLAYER_ID())) || __LIB_7__::func_726(PLAYER::PLAYER_ID())) || __LIB_6__::func_846(PLAYER::PLAYER_ID())) || uParam3->f_803) || uParam3->f_804) || __LIB_7__::func_690(PLAYER::PLAYER_ID())) || __LIB_5__::func_186(PLAYER::PLAYER_ID())) || __LIB_6__::func_938(PLAYER::PLAYER_ID())) || __LIB_3__::func_533(PLAYER::PLAYER_ID())) || __LIB_5__::func_188(PLAYER::PLAYER_ID()))
	{
		switch (iParam2)
		{
			case 0:
				Var0 = { uParam3->f_720[0 /*6*/] };
				fVar1 = 1.8125f;
				Var3 = { uParam3->f_751[0 /*6*/] };
				if (__LIB_7__::func_687(uParam1->f_31))
				{
					if (((Global_4196256 == 1 || Global_4196256 == 4) || Global_4196256 == 5) || Global_4196256 == 8)
					{
						Var0 = { uParam3->f_720[3 /*6*/] };
						Var3 = { uParam3->f_751[3 /*6*/] };
					}
					else if (((Global_4196256 == 2 || Global_4196256 == 3) || Global_4196256 == 6) || Global_4196256 == 7)
					{
						Var0 = { uParam3->f_720[0 /*6*/] };
						Var3 = { uParam3->f_751[0 /*6*/] };
					}
				}
				uParam3->f_784 = { Var3 };
				uParam3->f_783 = SYSTEM::ROUND(Var3.f_3.f_2);
				uParam3->f_782 = "anim@mp_radio@high_apment";
				uParam3->f_787 = "action_a_living_room";
				uParam3->f_788 = "enter_living_room";
				uParam3->f_789 = "idle_a_living_room";
				uParam3->f_790 = "button_press_living_room";
				uParam3->f_791 = "exit_living_room";
				if (uParam3->f_794)
				{
					uParam3->f_782 = "anim@mp_radio@garage@low";
					uParam3->f_784 = { uParam3->f_751[0 /*6*/] };
					uParam3->f_783 = SYSTEM::ROUND(uParam3->f_751[0 /*6*/].f_3.f_2);
					uParam3->f_787 = "action_a";
					uParam3->f_788 = "enter";
					uParam3->f_789 = "idle_a";
					uParam3->f_790 = "button_press";
					uParam3->f_791 = "exit";
				}
				if (__LIB_1__::func_597(uParam1->f_31))
				{
					uParam3->f_782 = "anim@mp_radio@high_apment";
					uParam3->f_787 = "action_a_bedroom";
					uParam3->f_788 = "enter_bedroom";
					uParam3->f_789 = "idle_a_bedroom";
					uParam3->f_790 = "button_press_bedroom";
					uParam3->f_791 = "exit_bedroom";
				}
				if (__LIB_8__::func_260(PLAYER::PLAYER_ID()) || __LIB_8__::func_259(PLAYER::PLAYER_ID()))
				{
					uParam3->f_782 = "anim@mp_radio@high_apment";
					uParam3->f_787 = "action_a_living_room";
					uParam3->f_788 = "enter_living_room";
					uParam3->f_789 = "idle_a_living_room";
					uParam3->f_790 = "button_press_living_room";
					uParam3->f_791 = "exit_living_room";
				}
				if (__LIB_7__::func_726(PLAYER::PLAYER_ID()))
				{
					uParam3->f_782 = "anim@mp_radio@low_apment";
					uParam3->f_787 = "action_a_kitchen";
					uParam3->f_788 = "enter_kitchen";
					uParam3->f_789 = "idle_a_kitchen";
					uParam3->f_790 = "button_press_kitchen";
					uParam3->f_791 = "exit_kitchen";
				}
				if (((((((__LIB_6__::func_846(PLAYER::PLAYER_ID()) || uParam3->f_803) || uParam3->f_804) || __LIB_7__::func_690(PLAYER::PLAYER_ID())) || __LIB_5__::func_186(PLAYER::PLAYER_ID())) || __LIB_6__::func_938(PLAYER::PLAYER_ID())) || __LIB_3__::func_533(PLAYER::PLAYER_ID())) || __LIB_5__::func_188(PLAYER::PLAYER_ID()))
				{
					if (__LIB_5__::func_188(PLAYER::PLAYER_ID()))
					{
						fVar1 = 1f;
					}
					uParam3->f_782 = "anim@mp_radio@garage@medium";
					uParam3->f_787 = "action_a";
					uParam3->f_788 = "enter";
					uParam3->f_789 = "idle_a";
					uParam3->f_790 = "button_press";
					uParam3->f_791 = "exit";
				}
				break;
			case 1:
				Var0 = { uParam3->f_720[1 /*6*/] };
				fVar1 = 1.8125f;
				uParam3->f_784 = { uParam3->f_751[1 /*6*/] };
				uParam3->f_783 = SYSTEM::ROUND(uParam3->f_751[1 /*6*/].f_3.f_2);
				uParam3->f_782 = "anim@mp_radio@high_apment";
				uParam3->f_787 = "action_a_living_room";
				uParam3->f_788 = "enter_living_room";
				uParam3->f_789 = "idle_a_living_room";
				uParam3->f_790 = "button_press_living_room";
				uParam3->f_791 = "exit_living_room";
				if (__LIB_7__::func_687(uParam1->f_31))
				{
					uParam3->f_782 = "anim@mp_radio@high_apment";
					uParam3->f_787 = "action_a_study";
					uParam3->f_788 = "enter_study";
					uParam3->f_789 = "idle_a_study";
					uParam3->f_790 = "button_press_study";
					uParam3->f_791 = "exit_study";
				}
				if ((((__LIB_6__::func_846(PLAYER::PLAYER_ID()) || uParam3->f_803) || uParam3->f_804) || __LIB_7__::func_690(PLAYER::PLAYER_ID())) || __LIB_5__::func_186(PLAYER::PLAYER_ID()))
				{
					uParam3->f_782 = "anim@mp_radio@garage@medium";
					uParam3->f_787 = "action_a";
					uParam3->f_788 = "enter";
					uParam3->f_789 = "idle_a";
					uParam3->f_790 = "button_press";
					uParam3->f_791 = "exit";
				}
				if (__LIB_5__::func_188(PLAYER::PLAYER_ID()))
				{
					fVar1 = 1f;
					uParam3->f_782 = "anim@mp_radio@high_apment";
					uParam3->f_787 = "action_a_bedroom";
					uParam3->f_788 = "enter_bedroom";
					uParam3->f_789 = "idle_a_bedroom";
					uParam3->f_790 = "button_press_bedroom";
					uParam3->f_791 = "exit_bedroom";
				}
				break;
			case 2:
				Var0 = { uParam3->f_720[2 /*6*/] };
				fVar1 = 1.8125f;
				uParam3->f_784 = { uParam3->f_751[2 /*6*/] };
				uParam3->f_783 = SYSTEM::ROUND(uParam3->f_751[2 /*6*/].f_3.f_2);
				uParam3->f_782 = "anim@mp_radio@high_apment";
				uParam3->f_787 = "action_a_living_room";
				uParam3->f_788 = "enter_living_room";
				uParam3->f_789 = "idle_a_living_room";
				uParam3->f_790 = "button_press_living_room";
				uParam3->f_791 = "exit_living_room";
				if (__LIB_7__::func_686(uParam1->f_31, -1) || __LIB_7__::func_687(uParam1->f_31))
				{
					uParam3->f_787 = "action_a_study";
					uParam3->f_788 = "enter_study";
					uParam3->f_789 = "idle_a_study";
					uParam3->f_790 = "button_press_study";
					uParam3->f_791 = "exit_study";
				}
				if (__LIB_5__::func_188(PLAYER::PLAYER_ID()))
				{
					fVar1 = 0.75f;
					uParam3->f_782 = "anim@mp_radio@high_apment";
					uParam3->f_787 = "action_a_bedroom";
					uParam3->f_788 = "enter_bedroom";
					uParam3->f_789 = "idle_a_bedroom";
					uParam3->f_790 = "button_press_bedroom";
					uParam3->f_791 = "exit_bedroom";
				}
				break;
			case 3:
				Var0 = { uParam3->f_720[3 /*6*/] };
				fVar1 = 1.8125f;
				uParam3->f_784 = { uParam3->f_751[3 /*6*/] };
				uParam3->f_783 = SYSTEM::ROUND(uParam3->f_751[3 /*6*/].f_3.f_2);
				uParam3->f_782 = "anim@mp_radio@high_apment";
				uParam3->f_787 = "action_a_living_room";
				uParam3->f_788 = "enter_living_room";
				uParam3->f_789 = "idle_a_living_room";
				uParam3->f_790 = "button_press_living_room";
				uParam3->f_791 = "exit_living_room";
				break;
			case 4:
				Var0 = { uParam3->f_720[4 /*6*/] };
				fVar1 = 1.8125f;
				uParam3->f_784 = { uParam3->f_751[4 /*6*/] };
				uParam3->f_783 = SYSTEM::ROUND(uParam3->f_751[4 /*6*/].f_3.f_2);
				uParam3->f_782 = "anim@mp_radio@high_apment";
				uParam3->f_787 = "action_a_living_room";
				uParam3->f_788 = "enter_living_room";
				uParam3->f_789 = "idle_a_living_room";
				uParam3->f_790 = "button_press_living_room";
				uParam3->f_791 = "exit_living_room";
				break;
		}
		if ((Var0.f_0 != 0f && Var0.f_1 != 0f) && Var0.f_2 != 0f)
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var0, Var0.f_3, fVar1, false, true, 0) && func_360(iParam2))
			{
				Global_32229 = 1;
				return 1;
			}
			else
			{
				iVar2 = 0;
				Global_32229 = 0;
				MISC::CLEAR_BIT(iParam0, 5);
				uParam3->f_784 = { 0f, 0f, 0f };
				uParam3->f_783 = 0;
				uParam3->f_782 = "";
				uParam3->f_787 = "";
				uParam3->f_788 = "";
				uParam3->f_789 = "";
				uParam3->f_790 = "";
				uParam3->f_791 = "";
			}
		}
		switch (uParam1->f_33)
		{
			case 10:
				if (BitTest(*iParam0, 0))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 231.84108f, -975.63495f, -100.08978f, 230.35152f, -975.6111f, -96.041504f, 2.5f, false, true, 0))
					{
						uParam3->f_782 = "anim@mp_radio@garage@high";
						uParam3->f_783 = 0;
						uParam3->f_784 = { 230.302f, -975.685f, -98.979f };
						uParam3->f_787 = "action_a";
						uParam3->f_788 = "enter";
						uParam3->f_789 = "idle_a";
						uParam3->f_790 = "button_press";
						uParam3->f_791 = "exit";
						return 1;
					}
				}
				break;
			}
	}
	return 0;
}

int func_360(int iParam0)//Position - 0x1557B
{
	int iVar0;
	float fVar1;
	iVar0 = 0;
	fVar1 = 0f;
	if (__LIB_4__::func_902(PLAYER::PLAYER_ID()))
	{
		switch (__LIB_7__::func_723())
		{
			case 22:
				iVar0 = 1;
				fVar1 = 90f;
				break;
			case 24:
				iVar0 = 1;
				switch (iParam0)
				{
					case 0:
						fVar1 = 268.7135f;
						break;
					case 1:
						fVar1 = 359.2117f;
						break;
					case 2:
						fVar1 = 359.018f;
						break;
				}
				fVar1 = func_362(fVar1, __LIB_2__::func_717(PLAYER::PLAYER_ID()));
				break;
			}
	}
	if (iVar0 == 1)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			return __LIB_3__::func_526(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), fVar1, 45f);
		}
	}
	return 1;
}

float func_362(float fParam0, int iParam1)//Position - 0x156B2
{
	var uVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	func_363(iParam1, &uVar2, &uVar0, &fVar1, 0);
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

void func_363(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4)//Position - 0x156FC
{
	struct<31> Var0;
	func_364(iParam0, &Var0, 1);
	Stack.Push(iParam0);
	Stack.Push(uParam1);
	Stack.Push(uParam2);
	Stack.Push(uParam3);
	Stack.Push(iParam4);
	Call_Loc(Var0.f_30);
}

void func_364(int iParam0, var uParam1, int iParam2)//Position - 0x1571C
{
	func_4866(uParam1, iParam2);
	func_4860(uParam1, iParam2);
	func_4852(uParam1, iParam2);
	func_365(__LIB_0__::func_172(iParam0), uParam1, iParam2);
}

void func_365(int iParam0, var uParam1, int iParam2)//Position - 0x1574A
{
	switch (iParam0)
	{
		case 0:
			func_4783(uParam1, iParam2);
			break;
		case 1:
			func_4652(uParam1, iParam2);
			break;
		case 2:
			func_4575(uParam1, iParam2);
			break;
		case 3:
			func_4498(uParam1, iParam2);
			break;
		case 4:
			func_4324(uParam1, iParam2);
			break;
		case 5:
			func_4159(uParam1, iParam2);
			break;
		case 6:
			func_4094(uParam1, iParam2);
			break;
		case 7:
			func_3927(uParam1, iParam2);
			break;
		case 8:
			func_3760(uParam1, iParam2);
			break;
		case 9:
			func_3517(uParam1, iParam2);
			break;
		case 10:
			func_3439(uParam1, iParam2);
			break;
		case 11:
			func_3208(uParam1, iParam2);
			break;
		case 12:
			func_3064(uParam1, iParam2);
			break;
		case 13:
			func_2896(uParam1, iParam2);
			break;
		case 14:
			func_2722(uParam1, iParam2);
			break;
		case 15:
			func_2543(uParam1, iParam2);
			break;
		case 16:
			func_2433(uParam1, iParam2);
			break;
		case 17:
			func_2180(uParam1, iParam2);
			break;
		case 18:
			func_2086(uParam1, iParam2);
			break;
		case 19:
			func_1963(uParam1, iParam2);
			break;
		case 20:
			func_1523(uParam1, iParam2);
			break;
		case 21:
			func_1401(uParam1, iParam2);
			break;
		case 22:
			func_1231(uParam1, iParam2);
			break;
		case 23:
			func_1033(uParam1, iParam2);
			break;
		case 24:
			func_366(uParam1, iParam2);
			break;
	}
}

void func_366(var uParam0, int iParam1)//Position - 0x15902
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 394858/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 394844/*__LIB_5__::func_448*/;
			break;
		case 1:
			uParam0->f_30 = 394748/*__LIB_5__::func_447*/;
			break;
		case 2:
			uParam0->f_31 = 393397/*__LIB_5__::func_446*/;
			break;
		case 3:
			uParam0->f_34 = 393167/*__LIB_3__::func_732*/;
			break;
		case 4:
			uParam0->f_12 = 393155/*__LIB_3__::func_731*/;
			break;
		case 5:
			uParam0->f_11 = 393145/*__LIB_3__::func_730*/;
			break;
		case 37:
			uParam0->f_18 = 392956/*__LIB_5__::func_200*/;
			break;
		case 38:
			uParam0->f_9 = 392909/*__LIB_7__::func_731*/;
			break;
		case 42:
			uParam0->f_10 = 392881/*__LIB_7__::func_730*/;
			break;
		case 6:
			uParam0->f_32 = 392572/*__LIB_4__::func_915*/;
			break;
		case 11:
			uParam0->f_11 = 392563/*__LIB_3__::func_729*/;
			break;
		case 12:
			uParam0->f_33 = 389895/*__LIB_9__::func_524*/;
			break;
		case 14:
			uParam0->f_11 = 389886/*__LIB_0__::func_114*/;
			break;
		case 109:
			uParam0->f_56 = 383199/*__LIB_9__::func_299*/;
			break;
		case 8:
			uParam0->f_37 = 382324/*__LIB_3__::func_724*/;
			break;
		case 7:
			uParam0->f_36 = 382207/*__LIB_3__::func_723*/;
			break;
		case 79:
			*uParam0 = 382151/*__LIB_5__::func_265*/;
			break;
		case 9:
			uParam0->f_29 = 381998/*__LIB_5__::func_445*/;
			break;
		case 10:
			uParam0->f_27 = 381853/*__LIB_5__::func_444*/;
			break;
		case 13:
			uParam0->f_2 = 381771/*__LIB_9__::func_783*/;
			break;
		case 15:
			uParam0->f_2 = 379937/*__LIB_9__::func_814*/;
			break;
		case 16:
			uParam0->f_5 = 378752/*__LIB_9__::func_976*/;
			break;
		case 108:
			uParam0->f_55 = 322710/*__LIB_10__::func_76*/;
			break;
		case 17:
			uParam0->f_17 = 320982/*__LIB_9__::func_260*/;
			break;
		case 19:
			uParam0->f_17 = 320831/*__LIB_6__::func_30*/;
			break;
		case 18:
			uParam0->f_8 = 320806/*__LIB_3__::func_688*/;
			break;
		case 20:
			uParam0->f_3 = 320586/*__LIB_6__::func_934*/;
			break;
		case 21:
			uParam0->f_3 = 319145/*__LIB_9__::func_313*/;
			break;
		case 74:
			uParam0->f_53 = 318955/*__LIB_5__::func_209*/;
			break;
		case 75:
			uParam0->f_4 = 317620/*__LIB_5__::func_711*/;
			break;
		case 22:
			uParam0->f_24 = 317503/*__LIB_5__::func_432*/;
			break;
		case 23:
			uParam0->f_26 = 317460/*__LIB_3__::func_683*/;
			break;
		case 24:
			uParam0->f_26 = 317426/*__LIB_3__::func_682*/;
			break;
		case 26:
			uParam0->f_38 = 317418/*__LIB_0__::func_467*/;
			break;
		case 25:
			uParam0->f_23 = 314431/*func_766*/;
			break;
		case 27:
			uParam0->f_25 = 314423/*__LIB_0__::func_467*/;
			break;
		case 28:
			uParam0->f_24 = 314415/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 314265/*__LIB_5__::func_710*/;
			break;
		case 31:
			uParam0->f_39 = 314042/*__LIB_5__::func_709*/;
			break;
		case 33:
			uParam0->f_40 = 313049/*__LIB_7__::func_49*/;
			break;
		case 32:
			*uParam0 = 312994/*__LIB_6__::func_932*/;
			break;
		case 76:
			uParam0->f_13 = 312983/*__LIB_3__::func_554*/;
			break;
		case 34:
			uParam0->f_41 = 309230/*__LIB_6__::func_931*/;
			break;
		case 36:
			uParam0->f_58 = 309185/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 288184/*__LIB_5__::func_946*/;
			break;
		case 45:
			uParam0->f_14 = 288175/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 288166/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 288158/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 288135/*__LIB_3__::func_665*/;
			break;
		case 82:
			uParam0->f_19 = 288089/*__LIB_5__::func_267*/;
			break;
		case 47:
			uParam0->f_43 = 287957/*__LIB_4__::func_910*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 286815/*__LIB_6__::func_930*/;
			break;
		case 49:
			uParam0->f_8 = 286797/*__LIB_3__::func_658*/;
			break;
		case 50:
			*uParam0 = 286448/*__LIB_6__::func_929*/;
			break;
		case 51:
			*uParam0 = 286346/*__LIB_5__::func_707*/;
			break;
		case 52:
			uParam0->f_15 = 286335/*__LIB_3__::func_657*/;
			break;
		case 53:
			uParam0->f_13 = 286209/*func_716*/;
			break;
		case 54:
			uParam0->f_45 = 285822/*func_715*/;
			break;
		case 56:
			uParam0->f_46 = 285803/*__LIB_3__::func_656*/;
			break;
		case 57:
			uParam0->f_11 = 284617/*__LIB_7__::func_48*/;
			break;
		case 58:
			uParam0->f_13 = 284491/*__LIB_3__::func_655*/;
			break;
		case 59:
			*uParam0 = 282943/*__LIB_7__::func_868*/;
			break;
		case 60:
			*uParam0 = 282934/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 282923/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 282797/*__LIB_3__::func_646*/;
			break;
		case 55:
			uParam0->f_45 = 282789/*__LIB_0__::func_467*/;
			break;
		case 63:
			uParam0->f_11 = 282775/*__LIB_7__::func_867*/;
			break;
		case 64:
			uParam0->f_47 = 282767/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 281308/*__LIB_7__::func_47*/;
			break;
		case 66:
			uParam0->f_21 = 280622/*__LIB_5__::func_422*/;
			break;
		case 67:
			uParam0->f_21 = 280482/*__LIB_5__::func_216*/;
			break;
		case 68:
			*uParam0 = 279348/*__LIB_7__::func_773*/;
			break;
		case 69:
			*uParam0 = 279339/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 279327/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 279318/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 279306/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 278859/*__LIB_5__::func_945*/;
			break;
		case 84:
			uParam0->f_1 = 278850/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 105209/*func_471*/;
			break;
		case 87:
			uParam0->f_1 = 101356/*__LIB_6__::func_439*/;
			break;
		case 88:
			uParam0->f_1 = 101347/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 101339/*__LIB_0__::func_467*/;
			break;
		case 90:
			uParam0->f_1 = 100476/*__LIB_7__::func_0*/;
			break;
		case 91:
			uParam0->f_1 = 100442/*__LIB_3__::func_614*/;
			break;
		case 92:
			uParam0->f_1 = 98798/*__LIB_7__::func_864*/;
			break;
		case 94:
			uParam0->f_1 = 96753/*__LIB_7__::func_875*/;
			break;
		case 95:
			uParam0->f_22 = 96666/*__LIB_7__::func_883*/;
			break;
		case 96:
			uParam0->f_1 = 96657/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 96648/*__LIB_0__::func_109*/;
			break;
		case 98:
			uParam0->f_1 = 96639/*__LIB_0__::func_109*/;
			break;
		case 100:
			uParam0->f_22 = 96631/*__LIB_0__::func_467*/;
			break;
		case 101:
			uParam0->f_22 = 96623/*__LIB_0__::func_467*/;
			break;
		case 112:
			uParam0->f_13 = 96509/*__LIB_3__::func_606*/;
			break;
		case 113:
			uParam0->f_3 = 96355/*__LIB_5__::func_701*/;
			break;
		case 114:
			uParam0->f_16 = 95687/*__LIB_3__::func_605*/;
			break;
		case 115:
			uParam0->f_3 = 95678/*__LIB_0__::func_114*/;
			break;
		case 116:
			*uParam0 = 95669/*__LIB_0__::func_114*/;
			break;
		case 117:
			uParam0->f_16 = 91253/*__LIB_3__::func_604*/;
			break;
		case 118:
			uParam0->f_11 = 91244/*__LIB_3__::func_603*/;
			break;
		case 119:
			uParam0->f_27 = 91117/*__LIB_7__::func_44*/;
			break;
		case 120:
			uParam0->f_19 = 91062/*__LIB_5__::func_700*/;
			break;
		case 78:
			uParam0->f_59 = 90134/*__LIB_7__::func_828*/;
			break;
		case 124:
			uParam0->f_1 = 90125/*__LIB_0__::func_109*/;
			break;
		case 125:
			uParam0->f_19 = 90117/*__LIB_0__::func_467*/;
			break;
	}
}

int func_471(int iParam0, var uParam1)//Position - 0x19AF9
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
			func_567(&iVar0, &(uParam1->f_109), 60);
			__LIB_3__::func_633(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_480(&iVar0, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 1, 0, 1))
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

int func_480(int iParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)//Position - 0x1A26E
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
						func_481(uParam2[iVar1], iVar4, bParam8, bParam6);
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

int func_481(var uParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x1A3D0
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
		if (func_496(iParam1) || __LIB_1__::func_554(iParam1))
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

int func_496(int iParam0)//Position - 0x1B255
{
	if (!PED::IS_PED_WEARING_HELMET(iParam0) && !__LIB_0__::func_348(ENTITY::GET_ENTITY_MODEL(iParam0), 14, func_498(iParam0, 14, 0), -1))
	{
		return 0;
	}
	return 1;
}

int func_498(int iParam0, int iParam1, int iParam2)//Position - 0x1B356
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
				if (func_499(iParam0, iParam1, iVar0))
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
				if (func_499(iParam0, iParam1, iVar1))
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

int func_499(int iParam0, int iParam1, int iParam2)//Position - 0x1B3F7
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
				if (!func_499(iParam0, iVar4, uVar8[iVar4]))
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
							if (!func_499(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_3__::func_310(iVar0, 14, iVar6, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar5)
									{
										if (func_499(iParam0, 14, iVar6))
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
			if (!func_499(iParam0, 14, uVar11[iVar10]))
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
						return func_499(iParam0, 4, uVar18);
					}
				}
				else if (__LIB_0__::func_352(iVar0, 4, iParam2, &uVar18))
				{
					return func_499(iParam0, 4, uVar18);
				}
			}
			Global_78129 = (Global_78129 - 1);
		}
	}
	return 0;
}

int func_567(int iParam0, var uParam1, int iParam2)//Position - 0x3A61C
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
	else if (__LIB_10__::func_151(uParam1, *iParam0, 10f, 20f, 15f, ENTITY::GET_ENTITY_HEADING(*iParam0), 0, 0))
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
			__LIB_9__::func_984(*uParam1, &Var0, 1, 1, 0);
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
				func_480(iParam0, uParam1, &(uParam1->f_1), __LIB_0__::func_703(iParam2, 16), __LIB_0__::func_703(iParam2, 128), __LIB_0__::func_703(iParam2, 64), !__LIB_0__::func_703(iParam2, 256), 0, 1);
			}
			if (__LIB_0__::func_703(iParam2, 4))
			{
				__LIB_11__::func_56(iParam0, &(uParam1->f_12));
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

void func_715(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0x45C7E
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
Vector3 func_716(int iParam0)//Position - 0x45E01
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

void func_766(int iParam0, int iParam1)//Position - 0x4CC3F
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
		func_777(iParam0, Var3, &bVar0, &bVar1, 1, 0);
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

void func_777(int iParam0, struct<3> Param1, int iParam2, int iParam3, bool bParam4, bool bParam5)//Position - 0x4D29D
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
								if (((((((((!__LIB_1__::func_907(iVar5, 1) && !__LIB_5__::func_424(iVar5)) && !PED::IS_PED_IN_ANY_VEHICLE(iVar6, true)) && !__LIB_1__::func_101(iVar6)) && !__LIB_4__::func_972(iVar5)) && !__LIB_4__::func_976(iVar5, 1)) && !((__LIB_2__::func_72(iVar5, 1) && !__LIB_3__::func_360(iVar2, iVar5)) && __LIB_0__::func_509() != 0)) && !func_778(iVar5)) && !__LIB_3__::func_171(iVar5)) && !bVar8)
								{
									*iParam2 = 1;
								}
							}
						}
						if ((((((((((!*iParam3 && __LIB_3__::func_360(PLAYER::PLAYER_ID(), iVar5)) && !__LIB_5__::func_424(iVar5)) && !PED::IS_PED_IN_ANY_VEHICLE(iVar6, true)) && !__LIB_1__::func_101(iVar6)) && !__LIB_4__::func_972(iVar5)) && !__LIB_4__::func_976(iVar5, 1)) && __LIB_1__::func_744(PLAYER::PLAYER_ID())) && !func_778(iVar5)) && !__LIB_3__::func_171(iVar5)) && !bVar8)
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
int func_778(bool bParam0)//Position - 0x4D4D8
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

void func_1033(var uParam0, int iParam1)//Position - 0x60673
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 445088/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 445079/*__LIB_0__::func_162*/;
			break;
		case 1:
			uParam0->f_30 = 445000/*__LIB_5__::func_466*/;
			break;
		case 2:
			uParam0->f_31 = 444362/*__LIB_5__::func_715*/;
			break;
		case 3:
			uParam0->f_34 = 444096/*__LIB_3__::func_797*/;
			break;
		case 4:
			uParam0->f_12 = 444084/*__LIB_3__::func_796*/;
			break;
		case 6:
			uParam0->f_32 = 443985/*__LIB_4__::func_918*/;
			break;
		case 37:
			uParam0->f_18 = 443854/*__LIB_3__::func_795*/;
			break;
		case 38:
			uParam0->f_9 = 443807/*__LIB_6__::func_866*/;
			break;
		case 39:
			uParam0->f_11 = 443772/*__LIB_7__::func_734*/;
			break;
		case 41:
			uParam0->f_20 = 443653/*__LIB_9__::func_300*/;
			break;
		case 42:
			uParam0->f_10 = 443625/*__LIB_6__::func_865*/;
			break;
		case 11:
			uParam0->f_11 = 443615/*__LIB_3__::func_793*/;
			break;
		case 12:
			uParam0->f_33 = 441463/*__LIB_5__::func_856*/;
			break;
		case 14:
			uParam0->f_11 = 441454/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 438871/*__LIB_5__::func_465*/;
			break;
		case 8:
			uParam0->f_37 = 438863/*__LIB_0__::func_467*/;
			break;
		case 7:
			uParam0->f_36 = 438854/*__LIB_0__::func_114*/;
			break;
		case 79:
			*uParam0 = 438845/*__LIB_0__::func_114*/;
			break;
		case 13:
			uParam0->f_2 = 438783/*__LIB_9__::func_783*/;
			break;
		case 15:
			uParam0->f_2 = 438702/*__LIB_9__::func_784*/;
			break;
		case 16:
			uParam0->f_5 = 438349/*__LIB_6__::func_940*/;
			break;
		case 108:
			uParam0->f_55 = 433916/*__LIB_10__::func_67*/;
			break;
		case 17:
			uParam0->f_17 = 432774/*__LIB_9__::func_261*/;
			break;
		case 19:
			uParam0->f_17 = 432748/*__LIB_5__::func_953*/;
			break;
		case 20:
			uParam0->f_3 = 432739/*__LIB_0__::func_109*/;
			break;
		case 21:
			uParam0->f_3 = 432608/*__LIB_6__::func_939*/;
			break;
		case 74:
			uParam0->f_53 = 432504/*__LIB_5__::func_209*/;
			break;
		case 75:
			uParam0->f_4 = 432488/*__LIB_5__::func_464*/;
			break;
		case 22:
			uParam0->f_24 = 432338/*__LIB_5__::func_463*/;
			break;
		case 23:
			uParam0->f_26 = 432330/*__LIB_0__::func_467*/;
			break;
		case 26:
			uParam0->f_38 = 430480/*func_1153*/;
			break;
		case 25:
			uParam0->f_23 = 429431/*func_1149*/;
			break;
		case 27:
			uParam0->f_25 = 429318/*__LIB_5__::func_854*/;
			break;
		case 28:
			uParam0->f_24 = 429280/*__LIB_3__::func_777*/;
			break;
		case 29:
			uParam0->f_28 = 429257/*__LIB_6__::func_864*/;
			break;
		case 30:
			uParam0->f_8 = 428498/*__LIB_5__::func_714*/;
			break;
		case 31:
			uParam0->f_39 = 428468/*__LIB_3__::func_775*/;
			break;
		case 43:
			uParam0->f_8 = 428354/*__LIB_5__::func_205*/;
			break;
		case 33:
			uParam0->f_40 = 428236/*__LIB_6__::func_863*/;
			break;
		case 76:
			uParam0->f_13 = 428187/*__LIB_4__::func_917*/;
			break;
		case 34:
			uParam0->f_41 = 419348/*__LIB_5__::func_459*/;
			break;
		case 36:
			uParam0->f_58 = 419300/*__LIB_3__::func_774*/;
			break;
		case 35:
			uParam0->f_42 = 408103/*__LIB_6__::func_415*/;
			break;
		case 45:
			uParam0->f_14 = 408094/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 408085/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 408077/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 408066/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 407949/*__LIB_4__::func_916*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 407215/*__LIB_8__::func_920*/;
			break;
		case 49:
			uParam0->f_8 = 407206/*__LIB_0__::func_114*/;
			break;
		case 50:
			*uParam0 = 407037/*__LIB_6__::func_937*/;
			break;
		case 51:
			*uParam0 = 407028/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 407017/*__LIB_3__::func_766*/;
			break;
		case 53:
			uParam0->f_13 = 406994/*__LIB_3__::func_765*/;
			break;
		case 54:
			uParam0->f_45 = 406946/*__LIB_3__::func_764*/;
			break;
		case 56:
			uParam0->f_46 = 406928/*__LIB_3__::func_763*/;
			break;
		case 57:
			uParam0->f_11 = 406886/*__LIB_5__::func_456*/;
			break;
		case 58:
			uParam0->f_13 = 406844/*__LIB_3__::func_761*/;
			break;
		case 59:
			*uParam0 = 406715/*__LIB_7__::func_779*/;
			break;
		case 60:
			*uParam0 = 406706/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 406695/*__LIB_3__::func_760*/;
			break;
		case 62:
			uParam0->f_13 = 406672/*__LIB_3__::func_759*/;
			break;
		case 63:
			uParam0->f_11 = 406663/*__LIB_1__::func_804*/;
			break;
		case 55:
			uParam0->f_45 = 406622/*__LIB_3__::func_758*/;
			break;
		case 64:
			uParam0->f_47 = 406614/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 406606/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 406335/*__LIB_5__::func_455*/;
			break;
		case 67:
			uParam0->f_21 = 406265/*__LIB_3__::func_757*/;
			break;
		case 68:
			*uParam0 = 405593/*__LIB_5__::func_454*/;
			break;
		case 69:
			*uParam0 = 405584/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 405572/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 405352/*__LIB_3__::func_756*/;
			break;
		case 107:
			uParam0->f_50 = 405340/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 404816/*__LIB_7__::func_732*/;
			break;
		case 84:
			uParam0->f_1 = 404701/*__LIB_5__::func_874*/;
			break;
		case 85:
			uParam0->f_1 = 403798/*func_1076*/;
			break;
		case 87:
			uParam0->f_1 = 401169/*__LIB_6__::func_414*/;
			break;
		case 88:
			uParam0->f_1 = 401160/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 401152/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 401143/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 401134/*__LIB_0__::func_109*/;
			break;
		case 98:
			uParam0->f_1 = 401125/*__LIB_0__::func_109*/;
			break;
		case 100:
			uParam0->f_22 = 401117/*__LIB_0__::func_467*/;
			break;
		case 101:
			uParam0->f_22 = 401109/*__LIB_0__::func_467*/;
			break;
		case 112:
			uParam0->f_13 = 401074/*__LIB_5__::func_214*/;
			break;
		case 113:
			uParam0->f_3 = 401065/*__LIB_0__::func_114*/;
			break;
		case 114:
			uParam0->f_16 = 399127/*__LIB_5__::func_451*/;
			break;
		case 115:
			uParam0->f_3 = 399118/*__LIB_0__::func_114*/;
			break;
		case 116:
			*uParam0 = 399109/*__LIB_0__::func_114*/;
			break;
		case 117:
			uParam0->f_16 = 397889/*__LIB_3__::func_744*/;
			break;
		case 121:
			*uParam0 = 397807/*__LIB_3__::func_743*/;
			break;
		case 122:
			*uParam0 = 397790/*__LIB_3__::func_742*/;
			break;
		case 123:
			uParam0->f_19 = 397758/*__LIB_5__::func_450*/;
			break;
		case 78:
			uParam0->f_59 = 396542/*__LIB_9__::func_323*/;
			break;
		case 124:
			uParam0->f_1 = 396533/*__LIB_0__::func_109*/;
			break;
		case 125:
			uParam0->f_19 = 396525/*__LIB_0__::func_467*/;
			break;
	}
}

int func_1076(int iParam0, var uParam1)//Position - 0x62956
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
			func_567(&iVar1, &(uParam1->f_109), 60);
			__LIB_3__::func_633(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_480(&iVar1, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 1, 0, 1))
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

void func_1149(int iParam0, int iParam1)//Position - 0x68D77
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
	func_777(iParam0, Var5, &bVar0, &bVar1, 1, 0);
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

void func_1153(var uParam0, var uParam1)//Position - 0x69190
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
			func_1154(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_1154(var uParam0, var uParam1)//Position - 0x691E6
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
	func_777(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &bVar0, &bVar1, 1, 0);
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

void func_1231(var uParam0, int iParam1)//Position - 0x6CAA9
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 484271/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 484257/*__LIB_5__::func_475*/;
			break;
		case 1:
			uParam0->f_30 = 484166/*__LIB_5__::func_474*/;
			break;
		case 2:
			uParam0->f_31 = 483945/*__LIB_5__::func_473*/;
			break;
		case 3:
			uParam0->f_34 = 483788/*__LIB_3__::func_841*/;
			break;
		case 4:
			uParam0->f_12 = 483776/*__LIB_3__::func_840*/;
			break;
		case 5:
			uParam0->f_11 = 483766/*__LIB_3__::func_839*/;
			break;
		case 37:
			uParam0->f_18 = 483651/*__LIB_3__::func_838*/;
			break;
		case 38:
			uParam0->f_9 = 483604/*__LIB_6__::func_381*/;
			break;
		case 42:
			uParam0->f_10 = 483576/*__LIB_6__::func_380*/;
			break;
		case 6:
			uParam0->f_32 = 483488/*__LIB_3__::func_837*/;
			break;
		case 11:
			uParam0->f_11 = 483479/*__LIB_3__::func_603*/;
			break;
		case 12:
			uParam0->f_33 = 481734/*__LIB_9__::func_499*/;
			break;
		case 14:
			uParam0->f_11 = 481725/*__LIB_0__::func_114*/;
			break;
		case 109:
			uParam0->f_56 = 477652/*func_1377*/;
			break;
		case 8:
			uParam0->f_37 = 477175/*__LIB_3__::func_835*/;
			break;
		case 7:
			uParam0->f_36 = 477081/*__LIB_3__::func_834*/;
			break;
		case 79:
			*uParam0 = 477072/*__LIB_0__::func_114*/;
			break;
		case 13:
			uParam0->f_2 = 477010/*__LIB_9__::func_783*/;
			break;
		case 15:
			uParam0->f_2 = 476929/*__LIB_9__::func_785*/;
			break;
		case 16:
			uParam0->f_5 = 476031/*__LIB_9__::func_264*/;
			break;
		case 108:
			uParam0->f_55 = 472751/*__LIB_10__::func_68*/;
			break;
		case 17:
			uParam0->f_17 = 471506/*__LIB_9__::func_263*/;
			break;
		case 19:
			uParam0->f_17 = 471480/*__LIB_5__::func_954*/;
			break;
		case 20:
			uParam0->f_3 = 471266/*__LIB_6__::func_944*/;
			break;
		case 21:
			uParam0->f_3 = 471202/*__LIB_6__::func_867*/;
			break;
		case 74:
			uParam0->f_53 = 471098/*__LIB_5__::func_209*/;
			break;
		case 75:
			uParam0->f_4 = 471082/*__LIB_5__::func_472*/;
			break;
		case 22:
			uParam0->f_24 = 470980/*__LIB_5__::func_471*/;
			break;
		case 23:
			uParam0->f_26 = 470972/*__LIB_0__::func_467*/;
			break;
		case 26:
			uParam0->f_38 = 468251/*func_1330*/;
			break;
		case 25:
			uParam0->f_23 = 467801/*func_1327*/;
			break;
		case 27:
			uParam0->f_25 = 467793/*__LIB_0__::func_467*/;
			break;
		case 28:
			uParam0->f_24 = 467785/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 467148/*__LIB_6__::func_942*/;
			break;
		case 31:
			uParam0->f_39 = 467014/*__LIB_5__::func_217*/;
			break;
		case 33:
			uParam0->f_40 = 466140/*__LIB_7__::func_8*/;
			break;
		case 32:
			*uParam0 = 465937/*__LIB_7__::func_7*/;
			break;
		case 76:
			uParam0->f_13 = 465784/*__LIB_3__::func_821*/;
			break;
		case 34:
			uParam0->f_41 = 464172/*__LIB_5__::func_469*/;
			break;
		case 36:
			uParam0->f_58 = 464127/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 455089/*__LIB_5__::func_468*/;
			break;
		case 45:
			uParam0->f_14 = 455080/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 455071/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 455063/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 455040/*__LIB_3__::func_815*/;
			break;
		case 47:
			uParam0->f_43 = 454991/*__LIB_3__::func_814*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 454854/*__LIB_5__::func_859*/;
			break;
		case 49:
			uParam0->f_8 = 454836/*__LIB_3__::func_658*/;
			break;
		case 50:
			*uParam0 = 454004/*__LIB_7__::func_835*/;
			break;
		case 51:
			*uParam0 = 453902/*__LIB_5__::func_716*/;
			break;
		case 52:
			uParam0->f_15 = 453891/*__LIB_3__::func_811*/;
			break;
		case 53:
			uParam0->f_13 = 453738/*func_1282*/;
			break;
		case 54:
			uParam0->f_45 = 453505/*func_1281*/;
			break;
		case 56:
			uParam0->f_46 = 453496/*__LIB_3__::func_729*/;
			break;
		case 57:
			uParam0->f_11 = 453083/*__LIB_7__::func_6*/;
			break;
		case 58:
			uParam0->f_13 = 452930/*__LIB_3__::func_808*/;
			break;
		case 59:
			*uParam0 = 452921/*__LIB_0__::func_114*/;
			break;
		case 60:
			*uParam0 = 452912/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 452901/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 452890/*__LIB_3__::func_554*/;
			break;
		case 63:
			uParam0->f_11 = 452881/*__LIB_1__::func_804*/;
			break;
		case 64:
			uParam0->f_47 = 452873/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 451817/*__LIB_7__::func_51*/;
			break;
		case 66:
			uParam0->f_21 = 451597/*__LIB_3__::func_807*/;
			break;
		case 67:
			uParam0->f_21 = 451522/*__LIB_5__::func_216*/;
			break;
		case 68:
			*uParam0 = 450833/*__LIB_5__::func_215*/;
			break;
		case 69:
			*uParam0 = 450824/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 450812/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 450720/*__LIB_3__::func_806*/;
			break;
		case 107:
			uParam0->f_50 = 450708/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 450341/*__LIB_5__::func_858*/;
			break;
		case 84:
			uParam0->f_1 = 450332/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 449540/*func_1255*/;
			break;
		case 87:
			uParam0->f_1 = 448162/*__LIB_6__::func_416*/;
			break;
		case 88:
			uParam0->f_1 = 448153/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 448145/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 448136/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 448127/*__LIB_0__::func_109*/;
			break;
		case 98:
			uParam0->f_1 = 448118/*__LIB_0__::func_109*/;
			break;
		case 100:
			uParam0->f_22 = 448110/*__LIB_0__::func_467*/;
			break;
		case 101:
			uParam0->f_22 = 448102/*__LIB_0__::func_467*/;
			break;
		case 112:
			uParam0->f_13 = 448090/*__LIB_5__::func_214*/;
			break;
		case 113:
			uParam0->f_3 = 448081/*__LIB_0__::func_114*/;
			break;
		case 114:
			uParam0->f_16 = 399127/*__LIB_5__::func_451*/;
			break;
		case 115:
			uParam0->f_3 = 448072/*__LIB_0__::func_114*/;
			break;
		case 116:
			*uParam0 = 448063/*__LIB_0__::func_114*/;
			break;
		case 117:
			uParam0->f_16 = 446843/*__LIB_3__::func_800*/;
			break;
		case 78:
			uParam0->f_59 = 446671/*__LIB_7__::func_783*/;
			break;
		case 124:
			uParam0->f_1 = 446662/*__LIB_0__::func_109*/;
			break;
		case 125:
			uParam0->f_19 = 446654/*__LIB_0__::func_467*/;
			break;
	}
}

int func_1255(int iParam0, var uParam1)//Position - 0x6DC04
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
			func_567(&iVar0, &(uParam1->f_109), 60);
			__LIB_3__::func_633(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_480(&iVar0, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 1, 0, 1))
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

void func_1281(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0x6EB81
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
Vector3 func_1282(int iParam0)//Position - 0x6EC6A
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

void func_1327(int iParam0, int iParam1)//Position - 0x72359
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
		func_777(iParam0, Var2, &bVar0, &bVar1, 1, 0);
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

void func_1330(var uParam0, var uParam1)//Position - 0x7251B
{
	if (__LIB_3__::func_616() == 2 || __LIB_3__::func_616() == 1)
	{
		func_1333(uParam0, uParam1);
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

void func_1333(var uParam0, var uParam1)//Position - 0x725FA
{
	int iVar0;
	iVar0 = __LIB_3__::func_785();
	switch (iVar0)
	{
		case 0:
			__LIB_9__::func_262(uParam0, uParam1);
			break;
		case 1:
			func_1344(uParam0, uParam1);
			break;
		case 2:
			__LIB_12__::func_397(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_1344(var uParam0, var uParam1)//Position - 0x72CED
{
	var uVar0;
	var uVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_777(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &uVar0, &uVar1, 1, 0);
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

void func_1377(int iParam0, var uParam1, int iParam2)//Position - 0x749D4
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
				func_777(iParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &uVar0, &uVar1, 1, 0);
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

void func_1401(var uParam0, int iParam1)//Position - 0x763B8
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 500680/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 500671/*__LIB_0__::func_162*/;
			break;
		case 1:
			uParam0->f_30 = 500604/*__LIB_5__::func_484*/;
			break;
		case 2:
			uParam0->f_31 = 500164/*__LIB_5__::func_861*/;
			break;
		case 3:
			uParam0->f_34 = 500016/*__LIB_3__::func_867*/;
			break;
		case 4:
			uParam0->f_12 = 500004/*__LIB_3__::func_866*/;
			break;
		case 37:
			uParam0->f_18 = 499789/*__LIB_5__::func_230*/;
			break;
		case 38:
			uParam0->f_9 = 499700/*__LIB_6__::func_870*/;
			break;
		case 39:
			uParam0->f_11 = 499680/*__LIB_5__::func_229*/;
			break;
		case 40:
			uParam0->f_6 = 499575/*__LIB_6__::func_869*/;
			break;
		case 41:
			uParam0->f_20 = 499550/*__LIB_5__::func_228*/;
			break;
		case 42:
			uParam0->f_10 = 499537/*__LIB_3__::func_865*/;
			break;
		case 6:
			uParam0->f_32 = 499473/*__LIB_3__::func_864*/;
			break;
		case 11:
			uParam0->f_11 = 499464/*__LIB_3__::func_603*/;
			break;
		case 12:
			uParam0->f_33 = 498927/*__LIB_5__::func_483*/;
			break;
		case 14:
			uParam0->f_11 = 498918/*__LIB_0__::func_114*/;
			break;
		case 109:
			uParam0->f_56 = 497969/*__LIB_5__::func_482*/;
			break;
		case 8:
			uParam0->f_37 = 497961/*__LIB_0__::func_467*/;
			break;
		case 7:
			uParam0->f_36 = 497952/*__LIB_0__::func_114*/;
			break;
		case 79:
			*uParam0 = 497943/*__LIB_0__::func_114*/;
			break;
		case 13:
			uParam0->f_2 = 497881/*__LIB_9__::func_783*/;
			break;
		case 15:
			uParam0->f_2 = 497800/*__LIB_9__::func_786*/;
			break;
		case 16:
			uParam0->f_5 = 497473/*__LIB_9__::func_302*/;
			break;
		case 108:
			uParam0->f_55 = 497464/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 497452/*__LIB_3__::func_860*/;
			break;
		case 19:
			uParam0->f_17 = 497440/*__LIB_3__::func_860*/;
			break;
		case 18:
			uParam0->f_8 = 497398/*__LIB_6__::func_382*/;
			break;
		case 20:
			uParam0->f_3 = 497389/*__LIB_0__::func_109*/;
			break;
		case 21:
			uParam0->f_3 = 497341/*__LIB_5__::func_227*/;
			break;
		case 74:
			uParam0->f_53 = 497186/*__LIB_5__::func_284*/;
			break;
		case 75:
			uParam0->f_4 = 497177/*__LIB_0__::func_114*/;
			break;
		case 22:
			uParam0->f_24 = 497075/*__LIB_5__::func_481*/;
			break;
		case 23:
			uParam0->f_26 = 497067/*__LIB_0__::func_467*/;
			break;
		case 25:
			uParam0->f_23 = 496640/*func_1478*/;
			break;
		case 27:
			uParam0->f_25 = 496632/*__LIB_0__::func_467*/;
			break;
		case 28:
			uParam0->f_24 = 496624/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 496589/*__LIB_5__::func_226*/;
			break;
		case 31:
			uParam0->f_39 = 496559/*__LIB_3__::func_775*/;
			break;
		case 33:
			uParam0->f_40 = 496392/*__LIB_6__::func_868*/;
			break;
		case 76:
			uParam0->f_13 = 496369/*__LIB_3__::func_849*/;
			break;
		case 34:
			uParam0->f_41 = 492755/*__LIB_5__::func_480*/;
			break;
		case 36:
			uParam0->f_58 = 492710/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 489514/*__LIB_5__::func_955*/;
			break;
		case 45:
			uParam0->f_14 = 489505/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 489496/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 489488/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 489477/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 489315/*__LIB_5__::func_478*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 488043/*func_1451*/;
			break;
		case 49:
			uParam0->f_8 = 488034/*__LIB_0__::func_114*/;
			break;
		case 50:
			*uParam0 = 487609/*__LIB_7__::func_869*/;
			break;
		case 51:
			*uParam0 = 487600/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 487589/*__LIB_3__::func_850*/;
			break;
		case 53:
			uParam0->f_13 = 487566/*__LIB_3__::func_849*/;
			break;
		case 54:
			uParam0->f_45 = 487558/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 487549/*__LIB_3__::func_729*/;
			break;
		case 57:
			uParam0->f_11 = 487536/*__LIB_3__::func_848*/;
			break;
		case 58:
			uParam0->f_13 = 487494/*__LIB_3__::func_847*/;
			break;
		case 59:
			*uParam0 = 487485/*__LIB_0__::func_114*/;
			break;
		case 60:
			*uParam0 = 487476/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 487465/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 487454/*__LIB_3__::func_554*/;
			break;
		case 63:
			uParam0->f_11 = 487445/*__LIB_1__::func_804*/;
			break;
		case 64:
			uParam0->f_47 = 487437/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 487429/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 486816/*__LIB_5__::func_476*/;
			break;
		case 67:
			uParam0->f_21 = 486746/*__LIB_3__::func_757*/;
			break;
		case 68:
			*uParam0 = 486057/*__LIB_5__::func_215*/;
			break;
		case 69:
			*uParam0 = 486048/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 486036/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 486027/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 486015/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 486006/*__LIB_0__::func_114*/;
			break;
		case 84:
			uParam0->f_1 = 485997/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 485988/*__LIB_0__::func_109*/;
			break;
		case 87:
			uParam0->f_1 = 485979/*__LIB_0__::func_109*/;
			break;
		case 88:
			uParam0->f_1 = 485970/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 485962/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 485953/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 485944/*__LIB_0__::func_109*/;
			break;
		case 98:
			uParam0->f_1 = 485935/*__LIB_0__::func_109*/;
			break;
		case 100:
			uParam0->f_22 = 485927/*__LIB_0__::func_467*/;
			break;
		case 101:
			uParam0->f_22 = 485919/*__LIB_0__::func_467*/;
			break;
		case 112:
			uParam0->f_13 = 485907/*__LIB_5__::func_214*/;
			break;
		case 113:
			uParam0->f_3 = 485898/*__LIB_0__::func_114*/;
			break;
		case 114:
			uParam0->f_16 = 399127/*__LIB_5__::func_451*/;
			break;
		case 115:
			uParam0->f_3 = 485889/*__LIB_0__::func_114*/;
			break;
		case 116:
			*uParam0 = 485880/*__LIB_0__::func_114*/;
			break;
		case 117:
			uParam0->f_16 = 446843/*__LIB_3__::func_800*/;
			break;
		case 78:
			uParam0->f_59 = 485872/*__LIB_0__::func_467*/;
			break;
		case 124:
			uParam0->f_1 = 485863/*__LIB_0__::func_109*/;
			break;
		case 125:
			uParam0->f_19 = 485855/*__LIB_0__::func_467*/;
			break;
	}
}

void func_1451(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0x7726B
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
			func_777(iParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &bVar1, &bVar2, 1, 1);
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

void func_1478(int iParam0, int iParam1)//Position - 0x79400
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	int iVar3;
	if (__LIB_0__::func_109(PLAYER::PLAYER_ID(), iParam0))
	{
		iVar3 = __LIB_3__::func_616();
		Var2 = { __LIB_3__::func_859(iParam0, iVar3) };
		func_777(iParam0, Var2, &bVar0, &bVar1, 1, 0);
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

void func_1523(var uParam0, int iParam1)//Position - 0x7A3D1
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 776906/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 776851/*__LIB_3__::func_975*/;
			break;
		case 2:
			uParam0->f_31 = 776191/*__LIB_5__::func_965*/;
			break;
		case 3:
			uParam0->f_34 = 776064/*__LIB_3__::func_974*/;
			break;
		case 4:
			uParam0->f_12 = 776032/*__LIB_3__::func_973*/;
			break;
		case 5:
			uParam0->f_11 = 776021/*__LIB_3__::func_972*/;
			break;
		case 6:
			uParam0->f_32 = 775957/*__LIB_3__::func_971*/;
			break;
		case 111:
			uParam0->f_35 = 775934/*__LIB_5__::func_245*/;
			break;
		case 79:
			*uParam0 = 775925/*__LIB_0__::func_114*/;
			break;
		case 37:
			uParam0->f_18 = 775810/*__LIB_3__::func_970*/;
			break;
		case 38:
			uParam0->f_9 = 775714/*__LIB_6__::func_946*/;
			break;
		case 11:
			uParam0->f_11 = 775705/*__LIB_3__::func_969*/;
			break;
		case 12:
			uParam0->f_33 = 775315/*__LIB_8__::func_851*/;
			break;
		case 109:
			uParam0->f_56 = 775012/*__LIB_7__::func_741*/;
			break;
		case 15:
			uParam0->f_2 = 773092/*__LIB_7__::func_876*/;
			break;
		case 13:
			uParam0->f_2 = 773083/*__LIB_0__::func_109*/;
			break;
		case 75:
			uParam0->f_4 = 773074/*__LIB_0__::func_109*/;
			break;
		case 16:
			uParam0->f_5 = 772691/*__LIB_9__::func_2*/;
			break;
		case 108:
			uParam0->f_55 = 768749/*__LIB_9__::func_529*/;
			break;
		case 17:
			uParam0->f_17 = 768023/*__LIB_9__::func_267*/;
			break;
		case 19:
			uParam0->f_17 = 767997/*__LIB_5__::func_963*/;
			break;
		case 20:
			uParam0->f_3 = 767828/*__LIB_8__::func_925*/;
			break;
		case 21:
			uParam0->f_3 = 767765/*__LIB_5__::func_243*/;
			break;
		case 74:
			uParam0->f_53 = 767613/*__LIB_5__::func_242*/;
			break;
		case 22:
			uParam0->f_24 = 767532/*__LIB_3__::func_957*/;
			break;
		case 25:
			uParam0->f_23 = 766595/*func_1899*/;
			break;
		case 30:
			uParam0->f_8 = 765267/*__LIB_7__::func_837*/;
			break;
		case 31:
			uParam0->f_39 = 764689/*__LIB_8__::func_924*/;
			break;
		case 33:
			uParam0->f_40 = 763454/*__LIB_8__::func_963*/;
			break;
		case 14:
			uParam0->f_11 = 763445/*__LIB_1__::func_806*/;
			break;
		case 34:
			uParam0->f_41 = 760678/*__LIB_5__::func_495*/;
			break;
		case 36:
			uParam0->f_58 = 760625/*__LIB_3__::func_945*/;
			break;
		case 35:
			uParam0->f_42 = 755173/*__LIB_5__::func_962*/;
			break;
		case 45:
			uParam0->f_14 = 755164/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 755155/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 755147/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 755124/*__LIB_3__::func_943*/;
			break;
		case 47:
			uParam0->f_43 = 755075/*__LIB_3__::func_942*/;
			break;
		case 49:
			uParam0->f_8 = 755050/*__LIB_3__::func_941*/;
			break;
		case 50:
			*uParam0 = 755012/*__LIB_5__::func_725*/;
			break;
		case 51:
			*uParam0 = 754938/*__LIB_6__::func_899*/;
			break;
		case 52:
			uParam0->f_15 = 754927/*__LIB_3__::func_940*/;
			break;
		case 53:
			uParam0->f_13 = 754848/*__LIB_6__::func_874*/;
			break;
		case 54:
			uParam0->f_45 = 754840/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 754831/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 754821/*__LIB_3__::func_938*/;
			break;
		case 58:
			uParam0->f_13 = 754574/*__LIB_7__::func_737*/;
			break;
		case 64:
			uParam0->f_47 = 753429/*__LIB_10__::func_52*/;
			break;
		case 65:
			uParam0->f_21 = 752237/*__LIB_7__::func_870*/;
			break;
		case 66:
			uParam0->f_21 = 751130/*__LIB_7__::func_54*/;
			break;
		case 67:
			uParam0->f_21 = 750954/*__LIB_5__::func_866*/;
			break;
		case 68:
			*uParam0 = 749294/*__LIB_8__::func_962*/;
			break;
		case 69:
			*uParam0 = 749285/*__LIB_0__::func_109*/;
			break;
		case 70:
			uParam0->f_48 = 749273/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 749264/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 749252/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 748419/*__LIB_5__::func_961*/;
			break;
		case 73:
			uParam0->f_51 = 748410/*__LIB_0__::func_114*/;
			break;
		case 84:
			uParam0->f_1 = 747758/*__LIB_9__::func_517*/;
			break;
		case 85:
			uParam0->f_1 = 746886/*func_1802*/;
			break;
		case 87:
			uParam0->f_1 = 745675/*__LIB_9__::func_525*/;
			break;
		case 88:
			uParam0->f_1 = 745655/*__LIB_3__::func_918*/;
			break;
		case 89:
			uParam0->f_54 = 745561/*__LIB_3__::func_917*/;
			break;
		case 90:
			uParam0->f_1 = 745430/*__LIB_5__::func_865*/;
			break;
		case 91:
			uParam0->f_1 = 744802/*__LIB_5__::func_801*/;
			break;
		case 92:
			uParam0->f_1 = 744035/*func_1784*/;
			break;
		case 94:
			uParam0->f_1 = 743483/*__LIB_5__::func_960*/;
			break;
		case 95:
			uParam0->f_22 = 742887/*__LIB_6__::func_383*/;
			break;
		case 18:
			uParam0->f_8 = 742529/*__LIB_5__::func_959*/;
			break;
		case 96:
			uParam0->f_1 = 742436/*__LIB_5__::func_800*/;
			break;
		case 97:
			uParam0->f_1 = 741590/*__LIB_5__::func_864*/;
			break;
		case 98:
			uParam0->f_1 = 506771/*func_1573*/;
			break;
		case 100:
			uParam0->f_22 = 504038/*__LIB_6__::func_440*/;
			break;
		case 101:
			uParam0->f_22 = 502878/*__LIB_6__::func_417*/;
			break;
		case 78:
			uParam0->f_59 = 502670/*__LIB_7__::func_788*/;
			break;
		case 104:
			uParam0->f_1 = 502202/*__LIB_5__::func_957*/;
			break;
		case 102:
			uParam0->f_1 = 502193/*__LIB_0__::func_109*/;
			break;
		case 103:
			uParam0->f_22 = 502083/*__LIB_5__::func_956*/;
			break;
		case 81:
			*uParam0 = 502040/*__LIB_3__::func_870*/;
			break;
	}
}

int func_1573(var uParam0, var uParam1)//Position - 0x7BB93
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
		func_1590(&(uParam1->f_140[0]), PLAYER::PLAYER_ID(), 1, 1);
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
			func_567(&iVar9, &(uParam1->f_109), 4);
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

int func_1590(var uParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x7C7C0
{
	int iVar0;
	iVar0 = PLAYER::GET_PLAYER_PED(bParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (!func_481(uParam0, iVar0, bParam2, bParam3))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0) && !ENTITY::IS_ENTITY_DEAD(*uParam0, false))
	{
		if (!func_1591(uParam0, bParam1))
		{
		}
		PED::FINALIZE_HEAD_BLEND(*uParam0);
	}
	return 1;
}

int func_1591(var uParam0, int iParam1)//Position - 0x7C81E
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
		func_1595(&Var1, __LIB_3__::func_353(iVar0), 0, 1, 1, !__LIB_5__::func_723(), 0, __LIB_7__::func_52(), __LIB_3__::func_904(__LIB_5__::func_491(iParam1), 0), __LIB_3__::func_352(iVar0));
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(__LIB_2__::func_508(iParam1, 0), false);
		if (GRAPHICS::OVERRIDE_PED_CREW_LOGO_TEXTURE(*uParam0, __LIB_2__::func_508(iParam1, 0), __LIB_8__::func_849(iParam1, 2)))
		{
		}
		return 1;
	}
	return 0;
}

int func_1595(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, bool bParam9)//Position - 0x7C93D
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
								if (!func_496(*uParam0))
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
										func_1718(*uParam0, uParam0->f_3, uParam0->f_8);
									}
									if ((uParam0->f_4 != -1 && uParam0->f_1 != 32) && uParam0->f_1 != 81)
									{
										func_1718(*uParam0, uParam0->f_4, uParam0->f_8);
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
										func_1708(*uParam0);
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
											func_1639(*uParam0, 14, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
											func_1639(*uParam0, 2, Global_2689235[uParam0->f_8 /*453*/].f_248, 0, -1, 0, 0, iVar20, iVar18, iVar19, uParam0->f_8, 1, 0, 0);
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
												func_1639(*uParam0, 2, iVar21, 0, -1, 0, 0, 0, iVar18, iVar19, -1, 0, 0, 0);
											}
											else
											{
												iVar23 = __LIB_1__::func_360(753, -1, 0);
												func_1639(*uParam0, 2, iVar23, 0, -1, 0, 0, 0, iVar18, iVar19, -1, 0, 0, 0);
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
									func_1634(*uParam0, &(Global_1886249[uParam0->f_8 /*51*/]), bVar24, iVar25);
								}
								else
								{
									func_1605(*uParam0, bVar24, 0, iVar25);
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

void func_1605(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x82806
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
		bVar3 = func_1632(iParam0, 0);
		bVar4 = __LIB_1__::func_37(iParam0);
		bVar5 = func_1623(iParam0, iParam3);
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

int func_1623(int iParam0, int iParam1)//Position - 0x8CE97
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
				iVar3 = func_498(iParam0, 11, -1);
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
				iVar5 = func_498(iParam0, 11, -1);
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

int func_1632(int iParam0, bool bParam1)//Position - 0x8D2F5
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
							iVar2 = __LIB_2__::func_999(joaat("MP_M_Freemode_01"), 11, func_498(iParam0, 11, -1), 0);
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
						iVar3 = func_498(iParam0, 11, -1);
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
						iVar5 = func_498(iParam0, 8, -1);
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
							iVar7 = __LIB_2__::func_999(joaat("MP_F_Freemode_01"), 11, func_498(iParam0, 11, -1), 0);
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
						iVar8 = func_498(iParam0, 11, -1);
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
							iVar10 = __LIB_2__::func_999(joaat("MP_F_Freemode_01"), 11, func_498(iParam0, 11, -1), 0);
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
							iVar11 = __LIB_2__::func_999(joaat("MP_F_Freemode_01"), 11, func_498(iParam0, 11, -1), 0);
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
						iVar12 = func_498(iParam0, 8, -1);
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

void func_1634(int iParam0, var uParam1, bool bParam2, int iParam3)//Position - 0x8E353
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
		bVar2 = func_1632(iParam0, 0);
		bVar3 = __LIB_1__::func_37(iParam0);
		bVar4 = func_1623(iParam0, iParam3);
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

int func_1639(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)//Position - 0x8F3AE
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
			func_1703(iVar5, iParam1, iParam2, 1);
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
						func_1703(iVar5, 10, 0, 1);
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
									func_1703(iVar5, iVar0, uVar14[iVar0], 1);
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
								func_1639(iParam0, iVar0, uVar14[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (BitTest(Global_78130[1 /*14*/].f_6, 1))
							{
								func_1703(iVar5, iVar0, uVar14[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, iVar0, func_498(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					uVar16 = { __LIB_0__::func_459(iVar5, 0) };
					func_1639(iParam0, iVar0, uVar16[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_1697(iParam0, 11, uVar14[11], iParam6, 0);
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
				func_1703(iVar5, 14, uVar18[iVar1], 1);
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
							func_1639(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_1703(iVar5, iParam1, iParam2, 1);
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			if (BitTest(Global_78130[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HAIR"), 1))
			{
			}
			else if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 1, joaat("HAIR_SHRINK")))
			{
				func_1639(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, iParam1, iParam2, -1) };
			}
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			func_1708(iParam0);
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
						func_1639(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = __LIB_5__::func_129(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_1639(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					iVar27 = func_1694(iVar5, iVar24, iVar23, iVar25);
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
							func_1639(iParam0, 8, iVar29, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_1639(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, iParam1, iParam2, -1) };
								iVar8 = -99;
							}
							else if (iVar30 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								func_1639(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_1639(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_1639(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_1639(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_F_Freemode_01"))
							{
								func_1639(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_1697(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_1694(iVar5, func_498(iParam0, 8, -1), iParam2, func_498(iParam0, 4, -1));
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
				func_1680(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar43 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar43, joaat("GLOVES"), 0))
			{
				iVar44 = __LIB_0__::func_350(iParam0, 11);
				iVar45 = __LIB_0__::func_350(iParam0, 4);
				iVar46 = func_1694(iVar5, iParam2, iVar44, iVar45);
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
			func_1697(iParam0, iParam1, iParam2, iParam6, 0);
			iVar49 = __LIB_0__::func_350(iParam0, 11);
			if (__LIB_0__::func_280(iVar5, iVar49, -1))
			{
				iVar50 = __LIB_0__::func_357(iVar5, iParam2, Global_78130[1 /*14*/].f_4);
				__LIB_3__::func_303(iVar5, iVar50);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_1694(iVar5, iParam2, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
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
						func_1639(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						func_1639(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_1694(iVar5, __LIB_0__::func_350(iParam0, 8), __LIB_0__::func_350(iParam0, 11), iParam2);
			}
			iVar59 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar59, joaat("GLOVES"), 0))
			{
				iVar60 = func_1694(iVar5, iVar58, iVar57, iParam2);
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
						func_1639(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
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
								iVar6 = func_1694(iVar5, iVar3, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = __LIB_5__::func_129(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_1639(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						if (!func_499(iParam0, 9, iVar63))
						{
							func_1639(iParam0, 9, iVar63, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_1639(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
					{
						func_1639(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						func_1639(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("MP_F_Freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar65 = func_498(iParam0, 4, -1);
					iVar66 = iParam2;
				}
				else
				{
					iVar65 = iParam2;
					iVar66 = func_498(iParam0, 11, -1);
				}
				if (__LIB_0__::func_240(iVar5, 11, iVar66, -1))
				{
					if (!__LIB_0__::func_239(iVar5, 4, iVar65, -1))
					{
						if (__LIB_0__::func_353(iVar5, 4, iVar65, &uVar67))
						{
							func_1639(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (__LIB_0__::func_239(iVar5, 4, iVar65, -1))
				{
					if (__LIB_0__::func_352(iVar5, 4, iVar65, &uVar67))
					{
						func_1639(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_1639(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_1639(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_1639(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_1639(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_1639(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_1639(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_1639(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_1639(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				func_1708(iParam0);
				iVar81 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
				iVar82 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
				iVar83 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar81, iVar82);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar83, joaat("FORCE_PROP"), 0))
				{
					iVar3 = __LIB_5__::func_129(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_1639(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = __LIB_5__::func_129(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_1639(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_1640(iParam0, &uVar4))
		{
			func_1639(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_1639(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar8 != -99)
	{
		func_1639(iParam0, 8, iVar8, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_1639(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar10 != -1)
	{
		iVar84 = __LIB_0__::func_282(iVar5, func_498(iParam0, 3, -1), iVar10);
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
				func_1639(iParam0, 3, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_1640(int iParam0, var uParam1)//Position - 0x91259
{
	int iVar0;
	int iVar1;
	*uParam1 = func_498(PLAYER::PLAYER_PED_ID(), 2, -1);
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
		if (!func_499(iParam0, iVar1, iVar0))
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

void func_1680(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x9BC52
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
	func_1605(iParam0, bParam3, 0, -1);
}

int func_1694(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xA3843
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
					iVar0 = func_1694(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
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
					iVar0 = func_1694(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
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

void func_1697(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0xA6E12
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (func_1699(iParam0))
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

int func_1699(int iParam0)//Position - 0xA6FA1
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
				iVar1 = func_498(iParam0, 11, -1);
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
				iVar3 = func_498(iParam0, 11, -1);
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

void func_1703(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0xA73FA
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
							func_1703(iParam0, __LIB_0__::func_33(iVar4), uVar3, 0);
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
									func_1703(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 3), 1);
								}
								else
								{
									func_1703(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 4), 1);
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
							func_1703(iParam0, 14, iVar8, 0);
						}
						else if (iParam2 >= 75 && iParam2 <= 82)
						{
							iVar8 = (83 + Global_78130[2 /*14*/].f_4);
							func_1703(iParam0, 14, iVar8, 0);
						}
					}
					else if (iParam1 == 8)
					{
						if (iParam2 >= 48 && iParam2 <= 63)
						{
							iVar8 = (64 + Global_78130[2 /*14*/].f_4);
							func_1703(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 64 && iParam2 <= 79)
						{
							iVar8 = (48 + Global_78130[2 /*14*/].f_4);
							func_1703(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 96 && iParam2 <= 111)
						{
							iVar8 = (112 + Global_78130[2 /*14*/].f_4);
							func_1703(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 112 && iParam2 <= 127)
						{
							iVar8 = (96 + Global_78130[2 /*14*/].f_4);
							func_1703(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 176 && iParam2 <= 191)
						{
							iVar8 = (160 + Global_78130[2 /*14*/].f_4);
							func_1703(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 160 && iParam2 <= 175)
						{
							iVar8 = (176 + Global_78130[2 /*14*/].f_4);
							func_1703(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 32 && iParam2 <= 47)
						{
							iVar8 = (0 + Global_78130[2 /*14*/].f_4);
							func_1703(iParam0, 11, iVar8, 0);
						}
						else if (iParam2 >= 224 && iParam2 <= 239)
						{
							iVar8 = (16 + Global_78130[2 /*14*/].f_4);
							func_1703(iParam0, 11, iVar8, 0);
						}
					}
					else if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar8 = (32 + Global_78130[2 /*14*/].f_4);
							func_1703(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 16 && iParam2 <= 31)
						{
							iVar8 = (224 + Global_78130[2 /*14*/].f_4);
							func_1703(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 220 && iParam2 <= 235)
						{
							switch (iParam2)
							{
								case 220:
									func_1703(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_0"), 8, 3), 0);
									func_1703(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_0"), 8, 3), 0);
									break;
								case 221:
									func_1703(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_1"), 8, 3), 0);
									func_1703(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_1"), 8, 3), 0);
									break;
								case 222:
									func_1703(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_2"), 8, 3), 0);
									func_1703(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_2"), 8, 3), 0);
									break;
								case 223:
									func_1703(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_3"), 8, 3), 0);
									func_1703(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_3"), 8, 3), 0);
									break;
								case 224:
									func_1703(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_4"), 8, 3), 0);
									func_1703(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_4"), 8, 3), 0);
									break;
								case 225:
									func_1703(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_5"), 8, 3), 0);
									func_1703(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_5"), 8, 3), 0);
									break;
								case 226:
									func_1703(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_6"), 8, 3), 0);
									func_1703(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_6"), 8, 3), 0);
									break;
								case 227:
									func_1703(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_7"), 8, 3), 0);
									func_1703(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_7"), 8, 3), 0);
									break;
								case 228:
									func_1703(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_8"), 8, 3), 0);
									func_1703(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_8"), 8, 3), 0);
									break;
								case 229:
									func_1703(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_9"), 8, 3), 0);
									func_1703(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_9"), 8, 3), 0);
									break;
								case 230:
									func_1703(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_10"), 8, 3), 0);
									func_1703(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_10"), 8, 3), 0);
									break;
								case 231:
									func_1703(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_11"), 8, 3), 0);
									func_1703(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_11"), 8, 3), 0);
									break;
								case 232:
									func_1703(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_12"), 8, 3), 0);
									func_1703(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_12"), 8, 3), 0);
									break;
								case 233:
									func_1703(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_13"), 8, 3), 0);
									func_1703(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_13"), 8, 3), 0);
									break;
								case 234:
									func_1703(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_14"), 8, 3), 0);
									func_1703(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_14"), 8, 3), 0);
									break;
								case 235:
									func_1703(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_15"), 8, 3), 0);
									func_1703(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_15"), 8, 3), 0);
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
									func_1703(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_0"), 7, 3), 0);
									func_1703(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_0"), 7, 3), 0);
									break;
								case 1:
									func_1703(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_1"), 7, 3), 0);
									func_1703(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_1"), 7, 3), 0);
									break;
								case 2:
									func_1703(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_2"), 7, 3), 0);
									func_1703(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_2"), 7, 3), 0);
									break;
								case 3:
									func_1703(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_3"), 7, 3), 0);
									func_1703(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_3"), 7, 3), 0);
									break;
								case 4:
									func_1703(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_4"), 7, 3), 0);
									func_1703(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_4"), 7, 3), 0);
									break;
								case 5:
									func_1703(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_5"), 7, 3), 0);
									func_1703(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_5"), 7, 3), 0);
									break;
								case 6:
									func_1703(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_6"), 7, 3), 0);
									func_1703(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_6"), 7, 3), 0);
									break;
								case 7:
									func_1703(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_7"), 7, 3), 0);
									func_1703(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_7"), 7, 3), 0);
									break;
								case 8:
									func_1703(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_8"), 7, 3), 0);
									func_1703(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_8"), 7, 3), 0);
									break;
								case 9:
									func_1703(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_9"), 7, 3), 0);
									func_1703(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_9"), 7, 3), 0);
									break;
								case 10:
									func_1703(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_10"), 7, 3), 0);
									func_1703(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_10"), 7, 3), 0);
									break;
								case 11:
									func_1703(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_11"), 7, 3), 0);
									func_1703(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_11"), 7, 3), 0);
									break;
								case 12:
									func_1703(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_12"), 7, 3), 0);
									func_1703(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_12"), 7, 3), 0);
									break;
								case 13:
									func_1703(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_13"), 7, 3), 0);
									func_1703(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_13"), 7, 3), 0);
									break;
								case 14:
									func_1703(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_14"), 7, 3), 0);
									func_1703(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_14"), 7, 3), 0);
									break;
								case 15:
									func_1703(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_15"), 7, 3), 0);
									func_1703(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_15"), 7, 3), 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_78130[2 /*14*/].f_4)
							{
								case 0:
									func_1703(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_0"), 7, 3), 0);
									func_1703(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_0"), 7, 3), 0);
									break;
								case 1:
									func_1703(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_1"), 7, 3), 0);
									func_1703(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_1"), 7, 3), 0);
									break;
								case 2:
									func_1703(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_2"), 7, 3), 0);
									func_1703(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_2"), 7, 3), 0);
									break;
								case 3:
									func_1703(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_3"), 7, 3), 0);
									func_1703(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_3"), 7, 3), 0);
									break;
								case 4:
									func_1703(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_4"), 7, 3), 0);
									func_1703(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_4"), 7, 3), 0);
									break;
								case 5:
									func_1703(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_5"), 7, 3), 0);
									func_1703(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_5"), 7, 3), 0);
									break;
								case 6:
									func_1703(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_6"), 7, 3), 0);
									func_1703(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_6"), 7, 3), 0);
									break;
								case 7:
									func_1703(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_7"), 7, 3), 0);
									func_1703(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_7"), 7, 3), 0);
									break;
								case 8:
									func_1703(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_8"), 7, 3), 0);
									func_1703(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_8"), 7, 3), 0);
									break;
								case 9:
									func_1703(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_9"), 7, 3), 0);
									func_1703(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_9"), 7, 3), 0);
									break;
								case 10:
									func_1703(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_10"), 7, 3), 0);
									func_1703(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_10"), 7, 3), 0);
									break;
								case 11:
									func_1703(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_11"), 7, 3), 0);
									func_1703(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_11"), 7, 3), 0);
									break;
								case 12:
									func_1703(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_12"), 7, 3), 0);
									func_1703(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_12"), 7, 3), 0);
									break;
								case 13:
									func_1703(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_13"), 7, 3), 0);
									func_1703(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_13"), 7, 3), 0);
									break;
								case 14:
									func_1703(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_14"), 7, 3), 0);
									func_1703(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_14"), 7, 3), 0);
									break;
								case 15:
									func_1703(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_15"), 7, 3), 0);
									func_1703(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_15"), 7, 3), 0);
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
							func_1703(iParam0, 8, iVar8, 0);
						}
					}
				}
				Global_78130[2 /*14*/] = { __LIB_3__::func_310(iParam0, iParam1, iParam2, -1) };
				if (iParam1 == 11)
				{
					iVar9 = __LIB_0__::func_358(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_1703(iParam0, 8, iVar9, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203)
					{
						switch (iParam2)
						{
							case 199:
								func_1703(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_0"), 7, 4), 0);
								break;
							case 200:
								func_1703(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_1"), 7, 4), 0);
								break;
							case 201:
								func_1703(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_2"), 7, 4), 0);
								break;
							}
					}
				}
				else if (iParam1 == 8)
				{
					iVar9 = __LIB_0__::func_357(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_1703(iParam0, 11, iVar9, 0);
					}
				}
			}
		}
	}
}

void func_1708(int iParam0)//Position - 0xA8B3C
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
		if (!func_1713(iParam0, &bVar14, iVar9, iVar10, iVar12) || PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
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
		if (!func_1713(iParam0, &bVar14, iVar9, iVar10, iVar12))
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

int func_1713(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0xA9506
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
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAZ_MASK"), 0) && !__LIB_0__::func_348(iVar0, 14, func_498(iParam0, 14, 0), -1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_1718(int iParam0, int iParam1, int iParam2)//Position - 0xA9C93
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
			func_1719(iParam0);
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
					if (__LIB_3__::func_343(ENTITY::GET_ENTITY_MODEL(iParam0), 7, func_498(iParam0, 7, -1), -1))
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

void func_1719(int iParam0)//Position - 0xA9E9F
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 77)
	{
		if (__LIB_3__::func_521(iParam0, iVar0, -1))
		{
			if (((((((((iVar0 == 0 || iVar0 == 1) || iVar0 == 3) || iVar0 == 4) || iVar0 == 5) || iVar0 == 6) || iVar0 == 7) || iVar0 == 8) || iVar0 == 10) || iVar0 == 11)
			{
				func_1720(iParam0, iVar0, -1, -1);
			}
		}
		iVar0++;
	}
}

void func_1720(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xA9F34
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
					func_1639(iParam0, 2, __LIB_1__::func_360(2053, Global_78127, 0), 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				else
				{
					func_1639(iParam0, 2, __LIB_1__::func_360(753, Global_78127, 0), 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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

int func_1784(var uParam0, var uParam1)//Position - 0xB5A63
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
			func_567(&iVar2, &(uParam1->f_109), 4);
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
			func_1590(&(uParam1->f_2), PLAYER::PLAYER_ID(), 1, 0);
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

int func_1802(int iParam0, var uParam1)//Position - 0xB6586
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
		if (func_1590(&(uParam1->f_2), PLAYER::PLAYER_ID(), 1, 0))
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
		func_567(&iVar1, &(uParam1->f_109), 32);
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

void func_1899(int iParam0, int iParam1)//Position - 0xBB283
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
						func_1900(iParam0, 0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_7__::func_738(1);
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var6, 0, 0, 1, 0, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_1900(iParam0, 0);
					}
					Jump @652; //curOff = 633
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_1900(int iParam0, bool bParam1)//Position - 0xBB512
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

void func_1963(var uParam0, int iParam1)//Position - 0xBDAD3
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 797605/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 797596/*__LIB_0__::func_162*/;
			break;
		case 1:
			uParam0->f_30 = 797529/*__LIB_5__::func_506*/;
			break;
		case 2:
			uParam0->f_31 = 797203/*__LIB_5__::func_505*/;
			break;
		case 3:
			uParam0->f_34 = 797042/*__LIB_4__::func_4*/;
			break;
		case 4:
			uParam0->f_12 = 797030/*__LIB_4__::func_3*/;
			break;
		case 6:
			uParam0->f_32 = 796966/*__LIB_4__::func_2*/;
			break;
		case 11:
			uParam0->f_11 = 796957/*__LIB_0__::func_109*/;
			break;
		case 12:
			uParam0->f_33 = 796621/*__LIB_5__::func_869*/;
			break;
		case 14:
			uParam0->f_11 = 796612/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 795876/*__LIB_5__::func_504*/;
			break;
		case 8:
			uParam0->f_37 = 795868/*__LIB_0__::func_467*/;
			break;
		case 7:
			uParam0->f_36 = 795859/*__LIB_0__::func_114*/;
			break;
		case 79:
			*uParam0 = 795850/*__LIB_0__::func_114*/;
			break;
		case 72:
			uParam0->f_12 = 795838/*__LIB_3__::func_999*/;
			break;
		case 13:
			uParam0->f_2 = 795829/*__LIB_0__::func_109*/;
			break;
		case 15:
			uParam0->f_2 = 795750/*__LIB_9__::func_787*/;
			break;
		case 16:
			uParam0->f_5 = 795406/*__LIB_6__::func_950*/;
			break;
		case 108:
			uParam0->f_55 = 795397/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 794887/*__LIB_6__::func_949*/;
			break;
		case 19:
			uParam0->f_17 = 794833/*__LIB_6__::func_948*/;
			break;
		case 18:
			uParam0->f_8 = 794745/*__LIB_5__::func_502*/;
			break;
		case 20:
			uParam0->f_3 = 794725/*__LIB_5__::func_251*/;
			break;
		case 21:
			uParam0->f_3 = 794698/*__LIB_3__::func_997*/;
			break;
		case 74:
			uParam0->f_53 = 794676/*__LIB_3__::func_996*/;
			break;
		case 75:
			uParam0->f_4 = 794667/*__LIB_0__::func_114*/;
			break;
		case 22:
			uParam0->f_24 = 794565/*__LIB_5__::func_501*/;
			break;
		case 23:
			uParam0->f_26 = 794557/*__LIB_0__::func_467*/;
			break;
		case 26:
			uParam0->f_38 = 794549/*__LIB_0__::func_467*/;
			break;
		case 25:
			uParam0->f_23 = 793788/*func_2044*/;
			break;
		case 27:
			uParam0->f_25 = 793780/*__LIB_0__::func_467*/;
			break;
		case 28:
			uParam0->f_24 = 793772/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 793661/*__LIB_5__::func_250*/;
			break;
		case 31:
			uParam0->f_39 = 793612/*__LIB_3__::func_994*/;
			break;
		case 33:
			uParam0->f_40 = 793543/*__LIB_6__::func_880*/;
			break;
		case 76:
			uParam0->f_13 = 793520/*__LIB_3__::func_993*/;
			break;
		case 34:
			uParam0->f_41 = 789447/*__LIB_5__::func_868*/;
			break;
		case 36:
			uParam0->f_58 = 789390/*__LIB_3__::func_991*/;
			break;
		case 35:
			uParam0->f_42 = 783171/*__LIB_5__::func_966*/;
			break;
		case 45:
			uParam0->f_14 = 783162/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 783153/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 783145/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 783134/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 783030/*__LIB_3__::func_983*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 781963/*__LIB_7__::func_839*/;
			break;
		case 49:
			uParam0->f_8 = 781954/*__LIB_0__::func_114*/;
			break;
		case 50:
			*uParam0 = 781557/*__LIB_7__::func_742*/;
			break;
		case 51:
			*uParam0 = 781548/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 781538/*__LIB_3__::func_980*/;
			break;
		case 53:
			uParam0->f_13 = 781515/*__LIB_3__::func_979*/;
			break;
		case 54:
			uParam0->f_45 = 781411/*__LIB_5__::func_867*/;
			break;
		case 56:
			uParam0->f_46 = 781402/*__LIB_3__::func_969*/;
			break;
		case 57:
			uParam0->f_11 = 781393/*__LIB_1__::func_804*/;
			break;
		case 58:
			uParam0->f_13 = 781351/*__LIB_3__::func_978*/;
			break;
		case 59:
			*uParam0 = 781342/*__LIB_0__::func_114*/;
			break;
		case 60:
			*uParam0 = 781333/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 781322/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 781311/*__LIB_3__::func_554*/;
			break;
		case 63:
			uParam0->f_11 = 781302/*__LIB_1__::func_804*/;
			break;
		case 64:
			uParam0->f_47 = 781294/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 781286/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 780976/*__LIB_5__::func_246*/;
			break;
		case 67:
			uParam0->f_21 = 780906/*__LIB_3__::func_757*/;
			break;
		case 68:
			*uParam0 = 780217/*__LIB_5__::func_215*/;
			break;
		case 69:
			*uParam0 = 780208/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 780196/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 780187/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 780175/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 780166/*__LIB_0__::func_114*/;
			break;
		case 84:
			uParam0->f_1 = 780157/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 780148/*__LIB_0__::func_109*/;
			break;
		case 87:
			uParam0->f_1 = 780139/*__LIB_0__::func_109*/;
			break;
		case 88:
			uParam0->f_1 = 780130/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 780122/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 780097/*__LIB_3__::func_977*/;
			break;
		case 97:
			uParam0->f_1 = 779988/*__LIB_3__::func_976*/;
			break;
		case 98:
			uParam0->f_1 = 779277/*func_1974*/;
			break;
		case 100:
			uParam0->f_22 = 778613/*__LIB_4__::func_315*/;
			break;
		case 101:
			uParam0->f_22 = 778486/*__LIB_7__::func_877*/;
			break;
		case 112:
			uParam0->f_13 = 778474/*__LIB_5__::func_214*/;
			break;
		case 113:
			uParam0->f_3 = 778465/*__LIB_0__::func_114*/;
			break;
		case 114:
			uParam0->f_16 = 399127/*__LIB_5__::func_451*/;
			break;
		case 115:
			uParam0->f_3 = 778456/*__LIB_0__::func_114*/;
			break;
		case 116:
			*uParam0 = 778447/*__LIB_0__::func_114*/;
			break;
		case 117:
			uParam0->f_16 = 446843/*__LIB_3__::func_800*/;
			break;
		case 78:
			uParam0->f_59 = 778439/*__LIB_0__::func_467*/;
			break;
		case 124:
			uParam0->f_1 = 778430/*__LIB_0__::func_109*/;
			break;
		case 125:
			uParam0->f_19 = 778422/*__LIB_0__::func_467*/;
			break;
	}
}

int func_1974(var uParam0, var uParam1)//Position - 0xBE40D
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
		func_1590(&(uParam1->f_140[2]), PLAYER::PLAYER_ID(), 1, 0);
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

void func_2044(int iParam0, int iParam1)//Position - 0xC1CBC
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
								if (((((!__LIB_1__::func_907(iVar7, 1) && !__LIB_5__::func_424(iVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar5[iVar2], true)) && !__LIB_1__::func_101(PLAYER::PLAYER_PED_ID())) && !__LIB_3__::func_728(iVar7, 14)) && !func_778(iVar7))
								{
									bVar0 = true;
								}
							}
						}
						if ((((((!bVar1 && __LIB_3__::func_360(PLAYER::PLAYER_ID(), iVar7)) && !__LIB_5__::func_424(iVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar5[iVar2], true)) && !__LIB_1__::func_101(PLAYER::PLAYER_PED_ID())) && !__LIB_3__::func_728(iVar7, 14)) && !func_778(iVar7))
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
					else if ((!bVar1 && !bVar0) && !func_2045())
					{
						MISC::SET_BIT(&(iParam1->f_2), 5);
						MISC::SET_BIT(&(iParam1->f_2), 6);
					}
					Jump @651; //curOff = 632
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
bool func_2045()//Position - 0xC1F4A
{
	return BitTest(Global_1946250.f_3, 2);
}

void func_2086(var uParam0, int iParam1)//Position - 0xC2BAE
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 805918/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 805909/*__LIB_0__::func_162*/;
			break;
		case 1:
			uParam0->f_30 = 805838/*__LIB_5__::func_511*/;
			break;
		case 2:
			uParam0->f_31 = 805600/*__LIB_5__::func_510*/;
			break;
		case 3:
			uParam0->f_34 = 805549/*__LIB_4__::func_25*/;
			break;
		case 4:
			uParam0->f_12 = 805537/*__LIB_4__::func_24*/;
			break;
		case 6:
			uParam0->f_32 = 805473/*__LIB_4__::func_23*/;
			break;
		case 11:
			uParam0->f_11 = 805464/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 805024/*__LIB_5__::func_509*/;
			break;
		case 14:
			uParam0->f_11 = 805015/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 804341/*__LIB_5__::func_508*/;
			break;
		case 8:
			uParam0->f_37 = 804333/*__LIB_0__::func_467*/;
			break;
		case 7:
			uParam0->f_36 = 804324/*__LIB_0__::func_114*/;
			break;
		case 79:
			*uParam0 = 804315/*__LIB_0__::func_114*/;
			break;
		case 13:
			uParam0->f_2 = 804253/*__LIB_9__::func_783*/;
			break;
		case 15:
			uParam0->f_2 = 804173/*__LIB_9__::func_788*/;
			break;
		case 16:
			uParam0->f_5 = 803804/*__LIB_6__::func_952*/;
			break;
		case 108:
			uParam0->f_55 = 803795/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 803783/*__LIB_3__::func_860*/;
			break;
		case 19:
			uParam0->f_17 = 803771/*__LIB_3__::func_860*/;
			break;
		case 20:
			uParam0->f_3 = 803762/*__LIB_0__::func_114*/;
			break;
		case 21:
			uParam0->f_3 = 803753/*__LIB_0__::func_114*/;
			break;
		case 74:
			uParam0->f_53 = 803731/*__LIB_4__::func_18*/;
			break;
		case 75:
			uParam0->f_4 = 803722/*__LIB_0__::func_114*/;
			break;
		case 22:
			uParam0->f_24 = 803710/*__LIB_4__::func_17*/;
			break;
		case 23:
			uParam0->f_26 = 803702/*__LIB_0__::func_467*/;
			break;
		case 26:
			uParam0->f_38 = 803694/*__LIB_0__::func_467*/;
			break;
		case 25:
			uParam0->f_23 = 803686/*__LIB_0__::func_467*/;
			break;
		case 27:
			uParam0->f_25 = 803678/*__LIB_0__::func_467*/;
			break;
		case 28:
			uParam0->f_24 = 803670/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 803635/*__LIB_5__::func_226*/;
			break;
		case 31:
			uParam0->f_39 = 803605/*__LIB_3__::func_775*/;
			break;
		case 33:
			uParam0->f_40 = 803535/*__LIB_6__::func_881*/;
			break;
		case 76:
			uParam0->f_13 = 803512/*__LIB_4__::func_16*/;
			break;
		case 34:
			uParam0->f_41 = 803416/*__LIB_4__::func_15*/;
			break;
		case 36:
			uParam0->f_58 = 803371/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 800858/*__LIB_5__::func_507*/;
			break;
		case 45:
			uParam0->f_14 = 800849/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 800840/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 800832/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 800821/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 800781/*__LIB_4__::func_13*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 800673/*__LIB_5__::func_802*/;
			break;
		case 49:
			uParam0->f_8 = 800664/*__LIB_0__::func_114*/;
			break;
		case 50:
			*uParam0 = 800461/*__LIB_6__::func_951*/;
			break;
		case 51:
			*uParam0 = 800452/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 800441/*__LIB_4__::func_12*/;
			break;
		case 53:
			uParam0->f_13 = 800418/*__LIB_4__::func_11*/;
			break;
		case 54:
			uParam0->f_45 = 800410/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 800401/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 800388/*__LIB_4__::func_10*/;
			break;
		case 58:
			uParam0->f_13 = 800346/*__LIB_4__::func_9*/;
			break;
		case 59:
			*uParam0 = 800337/*__LIB_0__::func_114*/;
			break;
		case 60:
			*uParam0 = 800328/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 800317/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 800306/*__LIB_3__::func_554*/;
			break;
		case 63:
			uParam0->f_11 = 800297/*__LIB_1__::func_804*/;
			break;
		case 64:
			uParam0->f_47 = 800289/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 800281/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 800048/*__LIB_4__::func_8*/;
			break;
		case 67:
			uParam0->f_21 = 799978/*__LIB_3__::func_757*/;
			break;
		case 68:
			*uParam0 = 799289/*__LIB_5__::func_215*/;
			break;
		case 69:
			*uParam0 = 799280/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 799268/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 799259/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 799247/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 799238/*__LIB_0__::func_114*/;
			break;
		case 84:
			uParam0->f_1 = 799229/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 799220/*__LIB_0__::func_109*/;
			break;
		case 87:
			uParam0->f_1 = 799211/*__LIB_0__::func_109*/;
			break;
		case 88:
			uParam0->f_1 = 799202/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 799194/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 799185/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 799176/*__LIB_0__::func_109*/;
			break;
		case 98:
			uParam0->f_1 = 799167/*__LIB_0__::func_109*/;
			break;
		case 100:
			uParam0->f_22 = 799159/*__LIB_0__::func_467*/;
			break;
		case 101:
			uParam0->f_22 = 799151/*__LIB_0__::func_467*/;
			break;
		case 112:
			uParam0->f_13 = 799139/*__LIB_5__::func_214*/;
			break;
		case 113:
			uParam0->f_3 = 799130/*__LIB_0__::func_114*/;
			break;
		case 114:
			uParam0->f_16 = 399127/*__LIB_5__::func_451*/;
			break;
		case 115:
			uParam0->f_3 = 799121/*__LIB_0__::func_114*/;
			break;
		case 116:
			*uParam0 = 799112/*__LIB_0__::func_114*/;
			break;
		case 117:
			uParam0->f_16 = 446843/*__LIB_3__::func_800*/;
			break;
		case 78:
			uParam0->f_59 = 799104/*__LIB_0__::func_467*/;
			break;
		case 124:
			uParam0->f_1 = 799095/*__LIB_0__::func_109*/;
			break;
		case 125:
			uParam0->f_19 = 799087/*__LIB_0__::func_467*/;
			break;
	}
}

void func_2180(var uParam0, int iParam1)//Position - 0xC4C27
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 885032/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 885018/*__LIB_5__::func_530*/;
			break;
		case 1:
			uParam0->f_30 = 884862/*__LIB_5__::func_529*/;
			break;
		case 2:
			uParam0->f_31 = 884378/*__LIB_5__::func_528*/;
			break;
		case 3:
			uParam0->f_34 = 884179/*__LIB_4__::func_98*/;
			break;
		case 4:
			uParam0->f_12 = 884057/*__LIB_4__::func_97*/;
			break;
		case 5:
			uParam0->f_11 = 884047/*__LIB_4__::func_96*/;
			break;
		case 37:
			uParam0->f_18 = 883909/*__LIB_4__::func_95*/;
			break;
		case 38:
			uParam0->f_9 = 883864/*__LIB_7__::func_743*/;
			break;
		case 42:
			uParam0->f_10 = 883780/*__LIB_7__::func_797*/;
			break;
		case 6:
			uParam0->f_32 = 883686/*__LIB_4__::func_94*/;
			break;
		case 11:
			uParam0->f_11 = 883677/*__LIB_1__::func_804*/;
			break;
		case 12:
			uParam0->f_33 = 882499/*__LIB_9__::func_526*/;
			break;
		case 14:
			uParam0->f_11 = 882490/*__LIB_0__::func_114*/;
			break;
		case 109:
			uParam0->f_56 = 875944/*__LIB_5__::func_731*/;
			break;
		case 8:
			uParam0->f_37 = 875644/*__LIB_4__::func_92*/;
			break;
		case 7:
			uParam0->f_36 = 875587/*__LIB_4__::func_91*/;
			break;
		case 79:
			*uParam0 = 875343/*__LIB_5__::func_527*/;
			break;
		case 13:
			uParam0->f_2 = 875281/*__LIB_9__::func_783*/;
			break;
		case 15:
			uParam0->f_2 = 875201/*__LIB_9__::func_789*/;
			break;
		case 16:
			uParam0->f_5 = 874481/*__LIB_9__::func_270*/;
			break;
		case 108:
			uParam0->f_55 = 871290/*__LIB_10__::func_69*/;
			break;
		case 17:
			uParam0->f_17 = 868981/*__LIB_9__::func_269*/;
			break;
		case 19:
			uParam0->f_17 = 868954/*__LIB_5__::func_971*/;
			break;
		case 20:
			uParam0->f_3 = 868778/*__LIB_6__::func_885*/;
			break;
		case 21:
			uParam0->f_3 = 868714/*__LIB_6__::func_867*/;
			break;
		case 74:
			uParam0->f_53 = 868610/*__LIB_5__::func_209*/;
			break;
		case 75:
			uParam0->f_4 = 868594/*__LIB_5__::func_526*/;
			break;
		case 22:
			uParam0->f_24 = 868491/*__LIB_5__::func_525*/;
			break;
		case 23:
			uParam0->f_26 = 868444/*__LIB_4__::func_89*/;
			break;
		case 24:
			uParam0->f_26 = 868407/*__LIB_4__::func_88*/;
			break;
		case 26:
			uParam0->f_38 = 866361/*func_2365*/;
			break;
		case 25:
			uParam0->f_23 = 866039/*func_2363*/;
			break;
		case 30:
			uParam0->f_8 = 865182/*__LIB_6__::func_957*/;
			break;
		case 31:
			uParam0->f_39 = 865044/*__LIB_5__::func_257*/;
			break;
		case 33:
			uParam0->f_40 = 864472/*__LIB_6__::func_884*/;
			break;
		case 32:
			*uParam0 = 864187/*__LIB_7__::func_15*/;
			break;
		case 34:
			uParam0->f_41 = 861701/*__LIB_5__::func_872*/;
			break;
		case 36:
			uParam0->f_58 = 861644/*__LIB_4__::func_85*/;
			break;
		case 35:
			uParam0->f_42 = 834678/*__LIB_5__::func_524*/;
			break;
		case 45:
			uParam0->f_14 = 834669/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 834660/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 834652/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 834629/*__LIB_4__::func_82*/;
			break;
		case 47:
			uParam0->f_43 = 834557/*__LIB_5__::func_523*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 834429/*__LIB_5__::func_871*/;
			break;
		case 49:
			uParam0->f_8 = 834403/*__LIB_4__::func_80*/;
			break;
		case 50:
			*uParam0 = 833716/*__LIB_7__::func_841*/;
			break;
		case 51:
			*uParam0 = 833446/*__LIB_6__::func_955*/;
			break;
		case 52:
			uParam0->f_15 = 833435/*__LIB_4__::func_76*/;
			break;
		case 53:
			uParam0->f_13 = 833273/*__LIB_4__::func_75*/;
			break;
		case 54:
			uParam0->f_45 = 832816/*func_2326*/;
			break;
		case 56:
			uParam0->f_46 = 832798/*__LIB_3__::func_763*/;
			break;
		case 57:
			uParam0->f_11 = 832546/*__LIB_7__::func_14*/;
			break;
		case 58:
			uParam0->f_13 = 832384/*__LIB_4__::func_73*/;
			break;
		case 59:
			*uParam0 = 831888/*__LIB_7__::func_13*/;
			break;
		case 60:
			*uParam0 = 831873/*__LIB_6__::func_883*/;
			break;
		case 61:
			uParam0->f_15 = 831862/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 831700/*__LIB_4__::func_69*/;
			break;
		case 55:
			uParam0->f_45 = 831521/*__LIB_6__::func_882*/;
			break;
		case 63:
			uParam0->f_11 = 831494/*__LIB_7__::func_840*/;
			break;
		case 64:
			uParam0->f_47 = 830061/*__LIB_5__::func_970*/;
			break;
		case 65:
			uParam0->f_21 = 828674/*__LIB_7__::func_55*/;
			break;
		case 66:
			uParam0->f_21 = 828315/*__LIB_5__::func_254*/;
			break;
		case 67:
			uParam0->f_21 = 828201/*__LIB_4__::func_64*/;
			break;
		case 68:
			*uParam0 = 827241/*__LIB_6__::func_954*/;
			break;
		case 69:
			*uParam0 = 827232/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 827220/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 826676/*__LIB_4__::func_62*/;
			break;
		case 107:
			uParam0->f_50 = 826664/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 826476/*__LIB_5__::func_870*/;
			break;
		case 84:
			uParam0->f_1 = 826467/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 824881/*func_2287*/;
			break;
		case 87:
			uParam0->f_1 = 823365/*__LIB_6__::func_418*/;
			break;
		case 88:
			uParam0->f_1 = 823356/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 823348/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 823318/*__LIB_5__::func_519*/;
			break;
		case 97:
			uParam0->f_1 = 822873/*__LIB_5__::func_518*/;
			break;
		case 98:
			uParam0->f_1 = 817104/*__LIB_8__::func_985*/;
			break;
		case 100:
			uParam0->f_22 = 808572/*__LIB_7__::func_871*/;
			break;
		case 101:
			uParam0->f_22 = 807650/*__LIB_8__::func_984*/;
			break;
		case 112:
			uParam0->f_13 = 807639/*__LIB_3__::func_554*/;
			break;
		case 113:
			uParam0->f_3 = 807630/*__LIB_0__::func_114*/;
			break;
		case 114:
			uParam0->f_16 = 807621/*__LIB_0__::func_114*/;
			break;
		case 117:
			uParam0->f_16 = 807612/*__LIB_0__::func_114*/;
			break;
		case 78:
			uParam0->f_59 = 807440/*__LIB_7__::func_783*/;
			break;
		case 76:
			uParam0->f_13 = 807417/*__LIB_4__::func_29*/;
			break;
	}
}

int func_2287(int iParam0, var uParam1)//Position - 0xC9631
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
			func_567(&iVar0, &(uParam1->f_109), 60);
			__LIB_3__::func_633(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_480(&iVar0, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 1, 0, 1))
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

void func_2326(int iParam0, var uParam1, int* iParam2, var uParam3, var uParam4)//Position - 0xCB530
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
								func_2327(iParam2, 18);
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
void func_2327(var uParam0, int iParam1)//Position - 0xCB6A9
{
	int iVar0;
	if (HUD::DOES_BLIP_EXIST(*uParam0))
	{
		iVar0 = __LIB_1__::func_389(iParam1);
		HUD::SET_BLIP_COLOUR(*uParam0, iVar0);
	}
}

void func_2363(int iParam0, int iParam1)//Position - 0xD36F7
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
		func_777(iParam0, Var2, &bVar0, &bVar1, 1, 0);
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

void func_2365(var uParam0, var uParam1)//Position - 0xD3839
{
	if (__LIB_3__::func_616() == 3)
	{
		func_2369(uParam0, uParam1);
	}
	else if (__LIB_2__::func_72(PLAYER::PLAYER_ID(), 0) && __LIB_4__::func_70(__LIB_2__::func_39(PLAYER::PLAYER_ID()), __LIB_4__::func_71(*uParam0)))
	{
		__LIB_5__::func_258(uParam0, uParam1);
	}
	else if (__LIB_3__::func_616() == 2)
	{
		func_2367(uParam0, uParam1);
	}
	else
	{
		__LIB_4__::func_87(uParam1);
	}
}

void func_2367(var uParam0, var uParam1)//Position - 0xD38C2
{
	int iVar0;
	int iVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_777(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, 1, 0);
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

void func_2369(var uParam0, var uParam1)//Position - 0xD39E0
{
	int iVar0;
	iVar0 = __LIB_3__::func_785();
	switch (iVar0)
	{
		case 0:
			__LIB_9__::func_268(uParam0, uParam1);
			break;
		case 1:
			func_2374(uParam0, uParam1);
			break;
		case 2:
			__LIB_12__::func_398(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_2374(var uParam0, var uParam1)//Position - 0xD3D61
{
	int iVar0;
	int iVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_777(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, 1, 0);
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

void func_2433(var uParam0, int iParam1)//Position - 0xD8131
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 901248/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 901239/*__LIB_0__::func_162*/;
			break;
		case 1:
			uParam0->f_30 = 901171/*__LIB_5__::func_536*/;
			break;
		case 2:
			uParam0->f_31 = 900722/*__LIB_5__::func_535*/;
			break;
		case 3:
			uParam0->f_34 = 900617/*__LIB_4__::func_120*/;
			break;
		case 4:
			uParam0->f_12 = 900604/*__LIB_4__::func_119*/;
			break;
		case 6:
			uParam0->f_32 = 900540/*__LIB_4__::func_118*/;
			break;
		case 11:
			uParam0->f_11 = 900531/*__LIB_1__::func_804*/;
			break;
		case 12:
			uParam0->f_33 = 900070/*__LIB_5__::func_534*/;
			break;
		case 14:
			uParam0->f_11 = 900061/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 899670/*__LIB_5__::func_533*/;
			break;
		case 8:
			uParam0->f_37 = 899662/*__LIB_0__::func_467*/;
			break;
		case 7:
			uParam0->f_36 = 899653/*__LIB_0__::func_114*/;
			break;
		case 79:
			*uParam0 = 899629/*__LIB_5__::func_265*/;
			break;
		case 13:
			uParam0->f_2 = 899567/*__LIB_9__::func_783*/;
			break;
		case 15:
			uParam0->f_2 = 899488/*__LIB_9__::func_790*/;
			break;
		case 16:
			uParam0->f_5 = 899191/*__LIB_6__::func_958*/;
			break;
		case 108:
			uParam0->f_55 = 899182/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 899170/*__LIB_3__::func_860*/;
			break;
		case 19:
			uParam0->f_17 = 899143/*__LIB_5__::func_973*/;
			break;
		case 20:
			uParam0->f_3 = 899134/*__LIB_0__::func_114*/;
			break;
		case 21:
			uParam0->f_3 = 899125/*__LIB_0__::func_114*/;
			break;
		case 74:
			uParam0->f_53 = 899103/*__LIB_4__::func_18*/;
			break;
		case 75:
			uParam0->f_4 = 899094/*__LIB_0__::func_114*/;
			break;
		case 22:
			uParam0->f_24 = 899086/*__LIB_0__::func_467*/;
			break;
		case 23:
			uParam0->f_26 = 899078/*__LIB_0__::func_467*/;
			break;
		case 26:
			uParam0->f_38 = 899070/*__LIB_0__::func_467*/;
			break;
		case 25:
			uParam0->f_23 = 898738/*func_2505*/;
			break;
		case 27:
			uParam0->f_25 = 898730/*__LIB_0__::func_467*/;
			break;
		case 28:
			uParam0->f_24 = 898722/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 898401/*__LIB_7__::func_745*/;
			break;
		case 31:
			uParam0->f_39 = 898371/*__LIB_3__::func_775*/;
			break;
		case 33:
			uParam0->f_40 = 898302/*__LIB_6__::func_880*/;
			break;
		case 34:
			uParam0->f_41 = 894570/*__LIB_5__::func_264*/;
			break;
		case 36:
			uParam0->f_58 = 894525/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 891358/*__LIB_5__::func_532*/;
			break;
		case 45:
			uParam0->f_14 = 891349/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 891340/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 891332/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 891321/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 891213/*__LIB_4__::func_113*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 890098/*__LIB_7__::func_799*/;
			break;
		case 49:
			uParam0->f_8 = 890089/*__LIB_0__::func_114*/;
			break;
		case 50:
			*uParam0 = 890080/*__LIB_0__::func_114*/;
			break;
		case 51:
			*uParam0 = 890071/*__LIB_0__::func_114*/;
			break;
		case 52:
			uParam0->f_15 = 890060/*__LIB_4__::func_112*/;
			break;
		case 53:
			uParam0->f_13 = 890049/*__LIB_3__::func_554*/;
			break;
		case 54:
			uParam0->f_45 = 890041/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 890032/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 890023/*__LIB_1__::func_804*/;
			break;
		case 58:
			uParam0->f_13 = 889981/*__LIB_4__::func_111*/;
			break;
		case 59:
			*uParam0 = 889972/*__LIB_0__::func_114*/;
			break;
		case 60:
			*uParam0 = 889963/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 889952/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 889941/*__LIB_3__::func_554*/;
			break;
		case 63:
			uParam0->f_11 = 889932/*__LIB_1__::func_804*/;
			break;
		case 64:
			uParam0->f_47 = 889924/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 889916/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 889613/*__LIB_5__::func_263*/;
			break;
		case 67:
			uParam0->f_21 = 889543/*__LIB_3__::func_757*/;
			break;
		case 68:
			*uParam0 = 888894/*__LIB_5__::func_262*/;
			break;
		case 69:
			*uParam0 = 888885/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 888877/*__LIB_0__::func_467*/;
			break;
		case 71:
			uParam0->f_49 = 888868/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 888856/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 888422/*__LIB_7__::func_744*/;
			break;
		case 18:
			uParam0->f_8 = 888397/*__LIB_4__::func_110*/;
			break;
		case 84:
			uParam0->f_1 = 888380/*__LIB_5__::func_874*/;
			break;
		case 85:
			uParam0->f_1 = 887838/*func_2455*/;
			break;
		case 87:
			uParam0->f_1 = 886797/*__LIB_6__::func_799*/;
			break;
		case 88:
			uParam0->f_1 = 886788/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 886780/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 886771/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 886762/*__LIB_0__::func_109*/;
			break;
		case 98:
			uParam0->f_1 = 886753/*__LIB_0__::func_109*/;
			break;
		case 100:
			uParam0->f_22 = 886745/*__LIB_0__::func_467*/;
			break;
		case 101:
			uParam0->f_22 = 886737/*__LIB_0__::func_467*/;
			break;
		case 112:
			uParam0->f_13 = 886725/*__LIB_5__::func_214*/;
			break;
		case 113:
			uParam0->f_3 = 886716/*__LIB_0__::func_114*/;
			break;
		case 78:
			uParam0->f_59 = 886413/*__LIB_7__::func_798*/;
			break;
	}
}

int func_2455(var uParam0, var uParam1)//Position - 0xD8C1E
{
	return func_2456(uParam1);
}

int func_2456(var uParam0)//Position - 0xD8C2C
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
			func_567(&iVar0, &(uParam0->f_109), 60);
			__LIB_3__::func_633(&(uParam0->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam0->f_109);
			return 0;
		}
		else if (func_480(&iVar0, &(uParam0->f_109), &(uParam0->f_109.f_1), 1, 1, 0, 1, 0, 1))
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

void func_2505(int iParam0, int iParam1)//Position - 0xDB6B2
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
		func_777(iParam0, Var2, &bVar0, &bVar1, 1, 0);
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

void func_2543(var uParam0, int iParam1)//Position - 0xDC089
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 936371/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 936348/*__LIB_4__::func_174*/;
			break;
		case 1:
			uParam0->f_30 = 936218/*__LIB_5__::func_547*/;
			break;
		case 2:
			uParam0->f_31 = 935551/*__LIB_6__::func_894*/;
			break;
		case 3:
			uParam0->f_34 = 935288/*__LIB_4__::func_169*/;
			break;
		case 4:
			uParam0->f_12 = 935275/*__LIB_4__::func_168*/;
			break;
		case 5:
			uParam0->f_11 = 935265/*__LIB_4__::func_167*/;
			break;
		case 37:
			uParam0->f_18 = 935066/*__LIB_5__::func_274*/;
			break;
		case 38:
			uParam0->f_9 = 935018/*__LIB_6__::func_964*/;
			break;
		case 42:
			uParam0->f_10 = 934982/*__LIB_6__::func_893*/;
			break;
		case 6:
			uParam0->f_32 = 934867/*__LIB_4__::func_941*/;
			break;
		case 11:
			uParam0->f_11 = 934858/*__LIB_3__::func_729*/;
			break;
		case 12:
			uParam0->f_33 = 933928/*__LIB_8__::func_928*/;
			break;
		case 14:
			uParam0->f_11 = 933919/*__LIB_3__::func_603*/;
			break;
		case 109:
			uParam0->f_56 = 932759/*__LIB_7__::func_805*/;
			break;
		case 8:
			uParam0->f_37 = 932715/*__LIB_4__::func_163*/;
			break;
		case 7:
			uParam0->f_36 = 932692/*__LIB_4__::func_162*/;
			break;
		case 79:
			*uParam0 = 932668/*__LIB_5__::func_265*/;
			break;
		case 13:
			uParam0->f_2 = 932606/*__LIB_9__::func_783*/;
			break;
		case 15:
			uParam0->f_2 = 932527/*__LIB_9__::func_791*/;
			break;
		case 16:
			uParam0->f_5 = 931853/*__LIB_8__::func_927*/;
			break;
		case 108:
			uParam0->f_55 = 928571/*__LIB_10__::func_70*/;
			break;
		case 17:
			uParam0->f_17 = 927650/*__LIB_9__::func_272*/;
			break;
		case 19:
			uParam0->f_17 = 927604/*__LIB_6__::func_962*/;
			break;
		case 20:
			uParam0->f_3 = 927431/*__LIB_6__::func_892*/;
			break;
		case 21:
			uParam0->f_3 = 927346/*__LIB_6__::func_891*/;
			break;
		case 74:
			uParam0->f_53 = 927206/*__LIB_5__::func_271*/;
			break;
		case 75:
			uParam0->f_4 = 927190/*__LIB_5__::func_464*/;
			break;
		case 22:
			uParam0->f_24 = 927087/*__LIB_5__::func_546*/;
			break;
		case 23:
			uParam0->f_26 = 927040/*__LIB_4__::func_159*/;
			break;
		case 24:
			uParam0->f_26 = 927003/*__LIB_4__::func_88*/;
			break;
		case 26:
			uParam0->f_38 = 925598/*func_2652*/;
			break;
		case 25:
			uParam0->f_23 = 925232/*func_2649*/;
			break;
		case 27:
			uParam0->f_25 = 924419/*__LIB_6__::func_961*/;
			break;
		case 28:
			uParam0->f_24 = 924380/*__LIB_4__::func_152*/;
			break;
		case 29:
			uParam0->f_28 = 924145/*__LIB_5__::func_876*/;
			break;
		case 30:
			uParam0->f_8 = 923820/*__LIB_7__::func_802*/;
			break;
		case 31:
			uParam0->f_39 = 923620/*__LIB_5__::func_545*/;
			break;
		case 43:
			uParam0->f_8 = 923514/*__LIB_7__::func_801*/;
			break;
		case 33:
			uParam0->f_40 = 923198/*__LIB_6__::func_890*/;
			break;
		case 34:
			uParam0->f_41 = 918206/*__LIB_6__::func_889*/;
			break;
		case 36:
			uParam0->f_58 = 918149/*__LIB_4__::func_85*/;
			break;
		case 35:
			uParam0->f_42 = 911941/*__LIB_6__::func_960*/;
			break;
		case 45:
			uParam0->f_14 = 911932/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 911923/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 911915/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 911892/*__LIB_4__::func_146*/;
			break;
		case 82:
			uParam0->f_19 = 911879/*__LIB_5__::func_267*/;
			break;
		case 47:
			uParam0->f_43 = 911587/*__LIB_5__::func_543*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 909364/*__LIB_8__::func_964*/;
			break;
		case 49:
			uParam0->f_8 = 909316/*__LIB_4__::func_938*/;
			break;
		case 50:
			*uParam0 = 909124/*__LIB_5__::func_733*/;
			break;
		case 51:
			*uParam0 = 909115/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 909104/*__LIB_3__::func_647*/;
			break;
		case 53:
			uParam0->f_13 = 909062/*__LIB_4__::func_141*/;
			break;
		case 54:
			uParam0->f_45 = 909054/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 909045/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 909036/*__LIB_1__::func_804*/;
			break;
		case 58:
			uParam0->f_13 = 908994/*__LIB_4__::func_140*/;
			break;
		case 59:
			*uParam0 = 908985/*__LIB_0__::func_114*/;
			break;
		case 60:
			*uParam0 = 908976/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 908965/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 908935/*__LIB_4__::func_139*/;
			break;
		case 63:
			uParam0->f_11 = 908926/*__LIB_1__::func_804*/;
			break;
		case 64:
			uParam0->f_47 = 908918/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 907832/*__LIB_7__::func_56*/;
			break;
		case 66:
			uParam0->f_21 = 907491/*__LIB_5__::func_541*/;
			break;
		case 67:
			uParam0->f_21 = 907377/*__LIB_4__::func_64*/;
			break;
		case 68:
			*uParam0 = 906549/*__LIB_6__::func_959*/;
			break;
		case 69:
			*uParam0 = 906540/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 906528/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 906436/*__LIB_4__::func_138*/;
			break;
		case 107:
			uParam0->f_50 = 906424/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 906236/*__LIB_5__::func_870*/;
			break;
		case 84:
			uParam0->f_1 = 906227/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 906213/*func_2582*/;
			break;
		case 87:
			uParam0->f_1 = 906197/*__LIB_6__::func_799*/;
			break;
		case 88:
			uParam0->f_1 = 906188/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 906180/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 906171/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 905728/*__LIB_6__::func_420*/;
			break;
		case 98:
			uParam0->f_1 = 904266/*func_2564*/;
			break;
		case 100:
			uParam0->f_22 = 903387/*__LIB_6__::func_389*/;
			break;
		case 101:
			uParam0->f_22 = 903210/*__LIB_5__::func_538*/;
			break;
		case 112:
			uParam0->f_13 = 903198/*__LIB_5__::func_214*/;
			break;
		case 113:
			uParam0->f_3 = 903184/*__LIB_4__::func_126*/;
			break;
		case 114:
			uParam0->f_16 = 399127/*__LIB_5__::func_451*/;
			break;
		case 117:
			uParam0->f_16 = 446843/*__LIB_3__::func_800*/;
			break;
		case 118:
			uParam0->f_11 = 903175/*__LIB_3__::func_939*/;
			break;
		case 119:
			uParam0->f_27 = 903074/*__LIB_7__::func_17*/;
			break;
		case 120:
			uParam0->f_19 = 903049/*__LIB_5__::func_537*/;
			break;
		case 78:
			uParam0->f_59 = 902877/*__LIB_7__::func_783*/;
			break;
		case 125:
			uParam0->f_19 = 902850/*__LIB_4__::func_124*/;
			break;
	}
}

int func_2564(int iParam0, var uParam1)//Position - 0xDCC4A
{
	if (__LIB_4__::func_128(iParam0))
	{
		return func_2565(iParam0, uParam1);
	}
	return 1;
}

int func_2565(int iParam0, var uParam1)//Position - 0xDCC67
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
		if (func_481(&(uParam1->f_109.f_1[0]), iVar1, 1, 1) && __LIB_0__::func_121(uParam1->f_109.f_1[0]))
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

int func_2582(var uParam0, var uParam1)//Position - 0xDD3E5
{
	return func_2456(uParam1);
}

void func_2649(int iParam0, int iParam1)//Position - 0xE1E30
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
		func_777(iParam0, Var2, &bVar0, &bVar1, 1, 0);
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

void func_2652(var uParam0, var uParam1)//Position - 0xE1F9E
{
	if (__LIB_1__::func_124(PLAYER::PLAYER_ID()) || __LIB_4__::func_153(PLAYER::PLAYER_ID()))
	{
		func_2653(uParam0, uParam1);
	}
}

void func_2653(var uParam0, var uParam1)//Position - 0xE1FCA
{
	int iVar0;
	if (__LIB_3__::func_616() == 2 && __LIB_3__::func_785() != 1)
	{
		uParam1->f_1 = 1;
		if (func_2664(*uParam0, 0, 0))
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
			func_2659(uParam0, uParam1);
			break;
		case 1:
			func_2655(uParam0, uParam1);
			break;
		case 2:
			__LIB_5__::func_877(*uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_2655(var uParam0, var uParam1)//Position - 0xE2089
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
	func_777(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &bVar6, &bVar7, 1, 0);
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

void func_2659(var uParam0, var uParam1)//Position - 0xE2288
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
			else if (func_2664(*uParam0, 0, 0))
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

int func_2664(int iParam0, bool bParam1, bool bParam2)//Position - 0xE24E9
{
	int iVar0;
	int iVar1;
	func_777(iParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, 1, bParam2);
	if (bParam1)
	{
		return iVar1;
	}
	return (iVar0 || iVar1);
}

void func_2722(var uParam0, int iParam1)//Position - 0xE49BC
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 966937/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 966928/*__LIB_0__::func_162*/;
			break;
		case 1:
			uParam0->f_30 = 966860/*__LIB_5__::func_557*/;
			break;
		case 2:
			uParam0->f_31 = 966506/*__LIB_5__::func_556*/;
			break;
		case 3:
			uParam0->f_34 = 966273/*__LIB_4__::func_211*/;
			break;
		case 4:
			uParam0->f_12 = 966260/*__LIB_4__::func_210*/;
			break;
		case 6:
			uParam0->f_32 = 966196/*__LIB_4__::func_209*/;
			break;
		case 11:
			uParam0->f_11 = 966187/*__LIB_3__::func_939*/;
			break;
		case 12:
			uParam0->f_33 = 965462/*__LIB_6__::func_967*/;
			break;
		case 14:
			uParam0->f_11 = 965453/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 964311/*__LIB_5__::func_285*/;
			break;
		case 8:
			uParam0->f_37 = 964303/*__LIB_0__::func_467*/;
			break;
		case 7:
			uParam0->f_36 = 964294/*__LIB_0__::func_114*/;
			break;
		case 79:
			*uParam0 = 964270/*__LIB_5__::func_265*/;
			break;
		case 13:
			uParam0->f_2 = 964198/*__LIB_9__::func_793*/;
			break;
		case 15:
			uParam0->f_2 = 964109/*__LIB_9__::func_792*/;
			break;
		case 16:
			uParam0->f_5 = 963749/*__LIB_6__::func_966*/;
			break;
		case 108:
			uParam0->f_55 = 963610/*__LIB_8__::func_218*/;
			break;
		case 17:
			uParam0->f_17 = 962952/*__LIB_8__::func_852*/;
			break;
		case 19:
			uParam0->f_17 = 962925/*__LIB_5__::func_976*/;
			break;
		case 20:
			uParam0->f_3 = 962916/*__LIB_0__::func_114*/;
			break;
		case 21:
			uParam0->f_3 = 962868/*__LIB_5__::func_227*/;
			break;
		case 74:
			uParam0->f_53 = 962813/*__LIB_5__::func_284*/;
			break;
		case 75:
			uParam0->f_4 = 962700/*__LIB_5__::func_555*/;
			break;
		case 22:
			uParam0->f_24 = 962692/*__LIB_0__::func_467*/;
			break;
		case 23:
			uParam0->f_26 = 962684/*__LIB_0__::func_467*/;
			break;
		case 26:
			uParam0->f_38 = 960141/*func_2847*/;
			break;
		case 25:
			uParam0->f_23 = 960133/*__LIB_0__::func_467*/;
			break;
		case 27:
			uParam0->f_25 = 960125/*__LIB_0__::func_467*/;
			break;
		case 28:
			uParam0->f_24 = 960117/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 959836/*__LIB_7__::func_749*/;
			break;
		case 31:
			uParam0->f_39 = 959806/*__LIB_3__::func_775*/;
			break;
		case 33:
			uParam0->f_40 = 959737/*__LIB_6__::func_880*/;
			break;
		case 76:
			uParam0->f_13 = 959714/*__LIB_4__::func_204*/;
			break;
		case 34:
			uParam0->f_41 = 957160/*__LIB_5__::func_881*/;
			break;
		case 36:
			uParam0->f_58 = 957115/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 957019/*__LIB_5__::func_283*/;
			break;
		case 45:
			uParam0->f_14 = 957010/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 957001/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 956993/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 956982/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 956875/*__LIB_4__::func_202*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 956037/*__LIB_7__::func_808*/;
			break;
		case 49:
			uParam0->f_8 = 956028/*__LIB_0__::func_114*/;
			break;
		case 50:
			*uParam0 = 955815/*__LIB_7__::func_748*/;
			break;
		case 51:
			*uParam0 = 955806/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 955795/*__LIB_4__::func_201*/;
			break;
		case 53:
			uParam0->f_13 = 955753/*__LIB_4__::func_200*/;
			break;
		case 54:
			uParam0->f_45 = 955714/*__LIB_4__::func_199*/;
			break;
		case 56:
			uParam0->f_46 = 955705/*__LIB_3__::func_729*/;
			break;
		case 57:
			uParam0->f_11 = 955663/*__LIB_5__::func_553*/;
			break;
		case 58:
			uParam0->f_13 = 955621/*__LIB_4__::func_197*/;
			break;
		case 59:
			*uParam0 = 955612/*__LIB_0__::func_114*/;
			break;
		case 60:
			*uParam0 = 955603/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 955592/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 955581/*__LIB_3__::func_554*/;
			break;
		case 63:
			uParam0->f_11 = 955572/*__LIB_1__::func_804*/;
			break;
		case 64:
			uParam0->f_47 = 955486/*__LIB_5__::func_552*/;
			break;
		case 65:
			uParam0->f_21 = 955478/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 955137/*__LIB_5__::func_282*/;
			break;
		case 67:
			uParam0->f_21 = 955067/*__LIB_3__::func_757*/;
			break;
		case 68:
			*uParam0 = 954370/*__LIB_5__::func_281*/;
			break;
		case 69:
			*uParam0 = 954361/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 954288/*__LIB_4__::func_195*/;
			break;
		case 71:
			uParam0->f_49 = 954279/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 954267/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 954258/*__LIB_0__::func_114*/;
			break;
		case 84:
			uParam0->f_1 = 953733/*__LIB_6__::func_965*/;
			break;
		case 85:
			uParam0->f_1 = 952177/*func_2797*/;
			break;
		case 87:
			uParam0->f_1 = 948949/*__LIB_7__::func_843*/;
			break;
		case 88:
			uParam0->f_1 = 948934/*__LIB_5__::func_803*/;
			break;
		case 89:
			uParam0->f_54 = 948573/*__LIB_5__::func_880*/;
			break;
		case 96:
			uParam0->f_1 = 948211/*__LIB_7__::func_20*/;
			break;
		case 97:
			uParam0->f_1 = 947705/*func_2775*/;
			break;
		case 98:
			uParam0->f_1 = 946076/*func_2773*/;
			break;
		case 100:
			uParam0->f_22 = 945798/*__LIB_6__::func_317*/;
			break;
		case 101:
			uParam0->f_22 = 945279/*__LIB_7__::func_880*/;
			break;
		case 112:
			uParam0->f_13 = 945267/*__LIB_5__::func_214*/;
			break;
		case 113:
			uParam0->f_3 = 945258/*__LIB_0__::func_114*/;
			break;
		case 114:
			uParam0->f_16 = 399127/*__LIB_5__::func_451*/;
			break;
		case 115:
			uParam0->f_3 = 945121/*__LIB_7__::func_807*/;
			break;
		case 116:
			*uParam0 = 945073/*__LIB_5__::func_278*/;
			break;
		case 117:
			uParam0->f_16 = 446843/*__LIB_3__::func_800*/;
			break;
		case 118:
			uParam0->f_11 = 903175/*__LIB_3__::func_939*/;
			break;
		case 119:
			uParam0->f_27 = 903074/*__LIB_7__::func_17*/;
			break;
		case 120:
			uParam0->f_19 = 903049/*__LIB_5__::func_537*/;
			break;
		case 78:
			uParam0->f_59 = 945065/*__LIB_0__::func_467*/;
			break;
		case 124:
			uParam0->f_1 = 937960/*func_2724*/;
			break;
		case 125:
			uParam0->f_19 = 937904/*__LIB_4__::func_175*/;
			break;
	}
}

int func_2724(int iParam0, int* iParam1)//Position - 0xE4FE8
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
				if (func_2797(iParam0, iParam1))
				{
					__LIB_4__::func_178(&(Global_1946250.f_3638), 60);
					__LIB_4__::func_181(iParam1, 3);
				}
			}
			else if (func_2750(iParam1))
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

int func_2750(int* iParam0)//Position - 0xE623F
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
		func_1590(&(iParam0->f_2), PLAYER::PLAYER_ID(), 1, 1);
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

int func_2773(int iParam0, var uParam1)//Position - 0xE6F9C
{
	struct<3> Var0;
	struct<3> Var1;
	char* sVar2;
	int iVar3;
	if (__LIB_4__::func_128(iParam0))
	{
		return func_2565(iParam0, uParam1);
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
			func_1590(&(uParam1->f_140[2]), PLAYER::PLAYER_ID(), 1, 0);
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

int func_2775(int iParam0, var uParam1)//Position - 0xE75F9
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
				if (!func_2776(&(uParam1->f_2), Global_1946250.f_4539))
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

int func_2776(var uParam0, int iParam1)//Position - 0xE7707
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
				if (__LIB_0__::func_348(ENTITY::GET_ENTITY_MODEL(*uParam0), 14, func_498(*uParam0, 14, 0), -1))
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

int func_2797(int iParam0, int* iParam1)//Position - 0xE8771
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
		if (!func_481(&(iParam1->f_140[0]), PLAYER::PLAYER_PED_ID(), 1, 1))
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
			func_567(&iVar7, &(iParam1->f_109), 60);
			__LIB_3__::func_633(&(iParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(iParam1->f_109);
			return 0;
		}
		else
		{
			iVar8 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar7, -1, false);
			if (func_481(&(iParam1->f_109.f_1[0]), iVar8, 1, 1) && __LIB_0__::func_121(iParam1->f_109.f_1[0]))
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
			func_1590(&(iParam1->f_2), PLAYER::PLAYER_ID(), 1, 1);
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

void func_2847(var uParam0, var uParam1)//Position - 0xEA68D
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
			func_2851(uParam0, uParam1);
			break;
		case 4:
			__LIB_5__::func_882(*uParam0, uParam1);
			break;
		case 2:
		case 3:
		case 1:
		case 5:
			func_2848(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_2848(var uParam0, var uParam1)//Position - 0xEA7CB
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
	func_777(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &bVar2, &bVar3, bVar0, 0);
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

void func_2851(var uParam0, var uParam1)//Position - 0xEAA55
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
				func_2853(*uParam0, iVar7, uParam1, uParam1);
			}
			else
			{
				func_2852(*uParam0, iVar7, uParam1, uParam1);
			}
		}
		else if (uParam0->f_3)
		{
			uParam1->f_4 = 1;
		}
	}
}

void func_2852(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0xEAB72
{
	if (iParam1 == 0)
	{
		if (func_2664(iParam0, 0, 0))
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
		if (func_2664(iParam0, 0, 0))
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
		if (func_2664(iParam0, 1, 0))
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
		if (func_2664(iParam0, 0, 0))
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

void func_2853(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0xEAC7A
{
	if (iParam1 == 0)
	{
		if (func_2664(iParam0, 0, 0))
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
		if (func_2664(iParam0, 0, 0))
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

void func_2896(var uParam0, int iParam1)//Position - 0xEC122
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1002636/*__LIB_0__::func_109*/;
			break;
		case 111:
			uParam0->f_35 = 1002622/*__LIB_5__::func_565*/;
			break;
		case 1:
			uParam0->f_30 = 1002523/*__LIB_4__::func_945*/;
			break;
		case 2:
			uParam0->f_31 = 1001459/*__LIB_6__::func_898*/;
			break;
		case 3:
			uParam0->f_34 = 1001305/*__LIB_4__::func_265*/;
			break;
		case 4:
			uParam0->f_12 = 1001251/*__LIB_5__::func_564*/;
			break;
		case 5:
			uParam0->f_11 = 1001196/*__LIB_4__::func_263*/;
			break;
		case 37:
			uParam0->f_18 = 1001076/*__LIB_4__::func_262*/;
			break;
		case 38:
			uParam0->f_9 = 1000944/*__LIB_5__::func_981*/;
			break;
		case 6:
			uParam0->f_32 = 1000829/*__LIB_4__::func_944*/;
			break;
		case 11:
			uParam0->f_11 = 1000819/*__LIB_4__::func_261*/;
			break;
		case 12:
			uParam0->f_33 = 999650/*__LIB_6__::func_973*/;
			break;
		case 14:
			uParam0->f_11 = 999641/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 998313/*__LIB_7__::func_753*/;
			break;
		case 8:
			uParam0->f_37 = 998269/*__LIB_4__::func_258*/;
			break;
		case 7:
			uParam0->f_36 = 998246/*__LIB_4__::func_162*/;
			break;
		case 79:
			*uParam0 = 998222/*__LIB_5__::func_265*/;
			break;
		case 13:
			uParam0->f_2 = 998159/*__LIB_9__::func_795*/;
			break;
		case 15:
			uParam0->f_2 = 998079/*__LIB_9__::func_794*/;
			break;
		case 16:
			uParam0->f_5 = 997436/*__LIB_8__::func_929*/;
			break;
		case 108:
			uParam0->f_55 = 994296/*__LIB_10__::func_71*/;
			break;
		case 17:
			uParam0->f_17 = 993594/*__LIB_9__::func_274*/;
			break;
		case 19:
			uParam0->f_17 = 993567/*__LIB_5__::func_979*/;
			break;
		case 20:
			uParam0->f_3 = 993388/*__LIB_6__::func_897*/;
			break;
		case 21:
			uParam0->f_3 = 993324/*__LIB_6__::func_867*/;
			break;
		case 74:
			uParam0->f_53 = 993050/*__LIB_6__::func_971*/;
			break;
		case 75:
			uParam0->f_4 = 993034/*__LIB_5__::func_562*/;
			break;
		case 22:
			uParam0->f_24 = 992931/*__LIB_5__::func_561*/;
			break;
		case 23:
			uParam0->f_26 = 992884/*__LIB_4__::func_256*/;
			break;
		case 24:
			uParam0->f_26 = 992847/*__LIB_4__::func_255*/;
			break;
		case 26:
			uParam0->f_38 = 992020/*func_3000*/;
			break;
		case 25:
			uParam0->f_23 = 991654/*func_2997*/;
			break;
		case 27:
			uParam0->f_25 = 991272/*__LIB_5__::func_885*/;
			break;
		case 28:
			uParam0->f_24 = 991221/*__LIB_4__::func_250*/;
			break;
		case 29:
			uParam0->f_28 = 991213/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 990976/*__LIB_5__::func_737*/;
			break;
		case 31:
			uParam0->f_39 = 990852/*__LIB_5__::func_296*/;
			break;
		case 33:
			uParam0->f_40 = 990432/*__LIB_6__::func_896*/;
			break;
		case 34:
			uParam0->f_41 = 979056/*__LIB_7__::func_844*/;
			break;
		case 36:
			uParam0->f_58 = 979011/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 975924/*__LIB_5__::func_559*/;
			break;
		case 45:
			uParam0->f_14 = 975915/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 975906/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 975898/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 975849/*__LIB_4__::func_942*/;
			break;
		case 47:
			uParam0->f_43 = 975767/*__LIB_4__::func_243*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 975003/*__LIB_6__::func_970*/;
			break;
		case 49:
			uParam0->f_8 = 974956/*__LIB_4__::func_237*/;
			break;
		case 50:
			*uParam0 = 974897/*__LIB_5__::func_736*/;
			break;
		case 51:
			*uParam0 = 974665/*__LIB_6__::func_969*/;
			break;
		case 52:
			uParam0->f_15 = 974654/*__LIB_4__::func_234*/;
			break;
		case 53:
			uParam0->f_13 = 974612/*__LIB_4__::func_233*/;
			break;
		case 54:
			uParam0->f_45 = 974604/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 974595/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 974586/*__LIB_1__::func_804*/;
			break;
		case 58:
			uParam0->f_13 = 974544/*__LIB_4__::func_232*/;
			break;
		case 59:
			*uParam0 = 974535/*__LIB_0__::func_114*/;
			break;
		case 60:
			*uParam0 = 974526/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 974515/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 974473/*__LIB_4__::func_231*/;
			break;
		case 63:
			uParam0->f_11 = 974464/*__LIB_1__::func_804*/;
			break;
		case 64:
			uParam0->f_47 = 974456/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 973394/*__LIB_7__::func_57*/;
			break;
		case 66:
			uParam0->f_21 = 973091/*__LIB_5__::func_263*/;
			break;
		case 67:
			uParam0->f_21 = 972977/*__LIB_4__::func_64*/;
			break;
		case 68:
			*uParam0 = 972134/*__LIB_6__::func_968*/;
			break;
		case 69:
			*uParam0 = 972125/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 972052/*__LIB_4__::func_230*/;
			break;
		case 71:
			uParam0->f_49 = 972043/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 972031/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 971829/*__LIB_5__::func_884*/;
			break;
		case 84:
			uParam0->f_1 = 971820/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 970087/*func_2915*/;
			break;
		case 87:
			uParam0->f_1 = 968634/*__LIB_6__::func_421*/;
			break;
		case 88:
			uParam0->f_1 = 968625/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 968617/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 968608/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 968599/*__LIB_0__::func_109*/;
			break;
		case 98:
			uParam0->f_1 = 968590/*__LIB_0__::func_109*/;
			break;
		case 100:
			uParam0->f_22 = 968582/*__LIB_0__::func_467*/;
			break;
		case 101:
			uParam0->f_22 = 968574/*__LIB_0__::func_467*/;
			break;
		case 78:
			uParam0->f_59 = 968402/*__LIB_7__::func_783*/;
			break;
		case 125:
			uParam0->f_19 = 968369/*__LIB_4__::func_215*/;
			break;
	}
}

int func_2915(int iParam0, var uParam1)//Position - 0xECD67
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
			func_567(&iVar0, &(uParam1->f_109), 60);
			__LIB_3__::func_633(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_480(&iVar0, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 1, 0, 1))
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

void func_2997(int iParam0, int iParam1)//Position - 0xF21A6
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
		func_777(iParam0, Var2, &bVar0, &bVar1, 1, 0);
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

void func_3000(var uParam0, var uParam1)//Position - 0xF2314
{
	if (__LIB_3__::func_929(PLAYER::PLAYER_ID()))
	{
		func_3001(uParam0, uParam1);
	}
}

void func_3001(var uParam0, var uParam1)//Position - 0xF2332
{
	int iVar0;
	iVar0 = __LIB_3__::func_785();
	switch (iVar0)
	{
		case 0:
			__LIB_9__::func_273(uParam0, uParam1);
			break;
		case 1:
			func_3002(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_3002(var uParam0, var uParam1)//Position - 0xF236C
{
	int iVar0;
	int iVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_777(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, 1, 0);
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

void func_3064(var uParam0, int iParam1)//Position - 0xF4C95
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1093897/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1093841/*__LIB_4__::func_312*/;
			break;
		case 2:
			uParam0->f_31 = 1093497/*__LIB_5__::func_307*/;
			break;
		case 3:
			uParam0->f_34 = 1093458/*__LIB_4__::func_311*/;
			break;
		case 4:
			uParam0->f_12 = 1093425/*__LIB_4__::func_310*/;
			break;
		case 5:
			uParam0->f_11 = 1093414/*__LIB_4__::func_309*/;
			break;
		case 6:
			uParam0->f_32 = 1093350/*__LIB_4__::func_308*/;
			break;
		case 111:
			uParam0->f_35 = 1093327/*__LIB_5__::func_306*/;
			break;
		case 79:
			*uParam0 = 1093303/*__LIB_5__::func_265*/;
			break;
		case 37:
			uParam0->f_18 = 1093183/*__LIB_4__::func_307*/;
			break;
		case 38:
			uParam0->f_9 = 1093104/*__LIB_5__::func_888*/;
			break;
		case 11:
			uParam0->f_11 = 1093095/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 1092499/*__LIB_9__::func_316*/;
			break;
		case 109:
			uParam0->f_56 = 1092491/*__LIB_0__::func_467*/;
			break;
		case 15:
			uParam0->f_2 = 1087295/*__LIB_9__::func_796*/;
			break;
		case 13:
			uParam0->f_2 = 1087286/*__LIB_0__::func_114*/;
			break;
		case 75:
			uParam0->f_4 = 1087271/*__LIB_5__::func_303*/;
			break;
		case 16:
			uParam0->f_5 = 1086796/*__LIB_9__::func_277*/;
			break;
		case 108:
			uParam0->f_55 = 1083309/*__LIB_10__::func_72*/;
			break;
		case 17:
			uParam0->f_17 = 1082531/*__LIB_9__::func_276*/;
			break;
		case 19:
			uParam0->f_17 = 1082504/*__LIB_5__::func_982*/;
			break;
		case 20:
			uParam0->f_3 = 1082293/*__LIB_9__::func_306*/;
			break;
		case 21:
			uParam0->f_3 = 1082130/*__LIB_7__::func_847*/;
			break;
		case 74:
			uParam0->f_53 = 1081521/*__LIB_7__::func_846*/;
			break;
		case 22:
			uParam0->f_24 = 1081439/*__LIB_4__::func_288*/;
			break;
		case 25:
			uParam0->f_23 = 1080522/*func_3136*/;
			break;
		case 30:
			uParam0->f_8 = 1079271/*__LIB_7__::func_873*/;
			break;
		case 31:
			uParam0->f_39 = 1078594/*__LIB_9__::func_275*/;
			break;
		case 33:
			uParam0->f_40 = 1077691/*__LIB_9__::func_305*/;
			break;
		case 14:
			uParam0->f_11 = 1077682/*__LIB_0__::func_162*/;
			break;
		case 34:
			uParam0->f_41 = 1076907/*__LIB_5__::func_568*/;
			break;
		case 36:
			uParam0->f_58 = 1076854/*__LIB_3__::func_945*/;
			break;
		case 35:
			uParam0->f_42 = 1008431/*__LIB_7__::func_845*/;
			break;
		case 45:
			uParam0->f_14 = 1008422/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 1008413/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 1008405/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1008382/*__LIB_4__::func_273*/;
			break;
		case 47:
			uParam0->f_43 = 1008242/*__LIB_4__::func_272*/;
			break;
		case 49:
			uParam0->f_8 = 1008207/*__LIB_4__::func_271*/;
			break;
		case 50:
			*uParam0 = 1008169/*__LIB_5__::func_725*/;
			break;
		case 51:
			*uParam0 = 1008145/*__LIB_6__::func_899*/;
			break;
		case 52:
			uParam0->f_15 = 1008134/*__LIB_4__::func_270*/;
			break;
		case 53:
			uParam0->f_13 = 1008055/*__LIB_8__::func_854*/;
			break;
		case 54:
			uParam0->f_45 = 1008047/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 1008038/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1008028/*__LIB_3__::func_938*/;
			break;
		case 58:
			uParam0->f_13 = 1007739/*__LIB_8__::func_853*/;
			break;
		case 64:
			uParam0->f_47 = 1006149/*__LIB_10__::func_759*/;
			break;
		case 65:
			uParam0->f_21 = 1005186/*__LIB_7__::func_58*/;
			break;
		case 66:
			uParam0->f_21 = 1004991/*__LIB_5__::func_887*/;
			break;
		case 67:
			uParam0->f_21 = 1004888/*__LIB_5__::func_886*/;
			break;
		case 68:
			*uParam0 = 1004199/*__LIB_5__::func_215*/;
			break;
		case 69:
			*uParam0 = 1004190/*__LIB_0__::func_109*/;
			break;
		case 70:
			uParam0->f_48 = 1004178/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1004169/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1004157/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1003783/*__LIB_6__::func_974*/;
			break;
		case 73:
			uParam0->f_51 = 1003774/*__LIB_0__::func_114*/;
			break;
		case 78:
			uParam0->f_59 = 1003657/*__LIB_7__::func_810*/;
			break;
	}
}

void func_3136(int iParam0, int iParam1)//Position - 0x107CCA
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
							func_3137(iParam0);
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
							func_3137(iParam0);
						}
					}
					Jump @693; //curOff = 674
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_3137(int iParam0)//Position - 0x107F82
{
	__LIB_9__::func_305(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_3208(var uParam0, int iParam1)//Position - 0x10B112
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1157171/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1156931/*__LIB_5__::func_592*/;
			break;
		case 2:
			uParam0->f_31 = 1154628/*__LIB_5__::func_591*/;
			break;
		case 3:
			uParam0->f_34 = 1154419/*__LIB_4__::func_393*/;
			break;
		case 4:
			uParam0->f_12 = 1154212/*__LIB_5__::func_590*/;
			break;
		case 5:
			uParam0->f_11 = 1154134/*__LIB_4__::func_391*/;
			break;
		case 37:
			uParam0->f_18 = 1153994/*__LIB_4__::func_951*/;
			break;
		case 38:
			uParam0->f_9 = 1153938/*__LIB_6__::func_904*/;
			break;
		case 42:
			uParam0->f_10 = 1153777/*__LIB_5__::func_988*/;
			break;
		case 6:
			uParam0->f_32 = 1153541/*__LIB_4__::func_390*/;
			break;
		case 111:
			uParam0->f_35 = 1153527/*__LIB_5__::func_589*/;
			break;
		case 11:
			uParam0->f_11 = 1153518/*__LIB_1__::func_804*/;
			break;
		case 12:
			uParam0->f_33 = 1150148/*__LIB_9__::func_500*/;
			break;
		case 14:
			uParam0->f_11 = 1150139/*__LIB_1__::func_806*/;
			break;
		case 109:
			uParam0->f_56 = 1136270/*__LIB_5__::func_316*/;
			break;
		case 79:
			*uParam0 = 1136014/*__LIB_5__::func_588*/;
			break;
		case 13:
			uParam0->f_2 = 1135965/*__LIB_5__::func_745*/;
			break;
		case 15:
			uParam0->f_2 = 1135754/*__LIB_9__::func_797*/;
			break;
		case 44:
			*uParam0 = 1135745/*__LIB_0__::func_114*/;
			break;
		case 75:
			uParam0->f_4 = 1135716/*__LIB_5__::func_587*/;
			break;
		case 16:
			uParam0->f_5 = 1134989/*__LIB_9__::func_280*/;
			break;
		case 108:
			uParam0->f_55 = 1131135/*__LIB_10__::func_73*/;
			break;
		case 17:
			uParam0->f_17 = 1129820/*__LIB_9__::func_279*/;
			break;
		case 19:
			uParam0->f_17 = 1129774/*__LIB_6__::func_983*/;
			break;
		case 20:
			uParam0->f_3 = 1129609/*__LIB_6__::func_903*/;
			break;
		case 21:
			uParam0->f_3 = 1129545/*__LIB_6__::func_867*/;
			break;
		case 74:
			uParam0->f_53 = 1129318/*__LIB_6__::func_982*/;
			break;
		case 22:
			uParam0->f_24 = 1129195/*__LIB_5__::func_585*/;
			break;
		case 26:
			uParam0->f_38 = 1125817/*func_3346*/;
			break;
		case 25:
			uParam0->f_23 = 1125496/*func_3344*/;
			break;
		case 27:
			uParam0->f_25 = 1124348/*__LIB_8__::func_970*/;
			break;
		case 28:
			uParam0->f_24 = 1124236/*__LIB_4__::func_371*/;
			break;
		case 29:
			uParam0->f_28 = 1124155/*__LIB_4__::func_370*/;
			break;
		case 30:
			uParam0->f_8 = 1123265/*__LIB_8__::func_969*/;
			break;
		case 31:
			uParam0->f_39 = 1122715/*__LIB_5__::func_740*/;
			break;
		case 33:
			uParam0->f_40 = 1122033/*__LIB_7__::func_59*/;
			break;
		case 32:
			*uParam0 = 1121940/*__LIB_6__::func_980*/;
			break;
		case 34:
			uParam0->f_41 = 1112673/*__LIB_5__::func_986*/;
			break;
		case 36:
			uParam0->f_58 = 1112615/*__LIB_4__::func_359*/;
			break;
		case 35:
			uParam0->f_42 = 1009300/*__LIB_6__::func_975*/;
			break;
		case 45:
			uParam0->f_14 = 1112606/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 1112597/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 1112589/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1112540/*__LIB_4__::func_950*/;
			break;
		case 47:
			uParam0->f_43 = 1112248/*__LIB_4__::func_949*/;
			break;
		case 48:
			uParam0->f_60 = 1;
			uParam0->f_44 = 1109223/*__LIB_8__::func_986*/;
			break;
		case 49:
			uParam0->f_8 = 1109119/*__LIB_4__::func_948*/;
			break;
		case 50:
			*uParam0 = 1108836/*__LIB_7__::func_814*/;
			break;
		case 51:
			*uParam0 = 1108674/*__LIB_6__::func_978*/;
			break;
		case 52:
			uParam0->f_15 = 1108663/*__LIB_4__::func_344*/;
			break;
		case 53:
			uParam0->f_13 = 1108405/*__LIB_4__::func_343*/;
			break;
		case 54:
			uParam0->f_45 = 1108143/*__LIB_7__::func_813*/;
			break;
		case 56:
			uParam0->f_46 = 1108134/*__LIB_3__::func_969*/;
			break;
		case 57:
			uParam0->f_11 = 1106977/*__LIB_7__::func_848*/;
			break;
		case 58:
			uParam0->f_13 = 1106719/*__LIB_4__::func_338*/;
			break;
		case 59:
			*uParam0 = 1106440/*__LIB_5__::func_738*/;
			break;
		case 60:
			*uParam0 = 1106431/*__LIB_0__::func_109*/;
			break;
		case 61:
			uParam0->f_15 = 1106420/*__LIB_3__::func_647*/;
			break;
		case 62:
			uParam0->f_13 = 1106162/*__LIB_4__::func_336*/;
			break;
		case 55:
			uParam0->f_45 = 1106154/*__LIB_0__::func_467*/;
			break;
		case 63:
			uParam0->f_11 = 1106096/*__LIB_5__::func_985*/;
			break;
		case 64:
			uParam0->f_47 = 1105946/*__LIB_7__::func_812*/;
			break;
		case 65:
			uParam0->f_21 = 1104239/*__LIB_7__::func_874*/;
			break;
		case 66:
			uParam0->f_21 = 1103928/*__LIB_5__::func_575*/;
			break;
		case 67:
			uParam0->f_21 = 1103776/*__LIB_4__::func_334*/;
			break;
		case 68:
			*uParam0 = 1102776/*__LIB_6__::func_976*/;
			break;
		case 69:
			*uParam0 = 1102767/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 1102318/*__LIB_4__::func_331*/;
			break;
		case 71:
			uParam0->f_49 = 1102039/*__LIB_4__::func_330*/;
			break;
		case 107:
			uParam0->f_50 = 1102027/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1101794/*__LIB_5__::func_889*/;
			break;
		case 84:
			uParam0->f_1 = 1101785/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 1099690/*func_3229*/;
			break;
		case 87:
			uParam0->f_1 = 1096794/*__LIB_6__::func_422*/;
			break;
		case 88:
			uParam0->f_1 = 1096785/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 1096777/*__LIB_0__::func_467*/;
			break;
		case 96:
			uParam0->f_1 = 1096751/*__LIB_4__::func_316*/;
			break;
		case 97:
			uParam0->f_1 = 1096642/*__LIB_3__::func_976*/;
			break;
		case 98:
			uParam0->f_1 = 1095931/*func_3215*/;
			break;
		case 100:
			uParam0->f_22 = 1095768/*__LIB_4__::func_315*/;
			break;
		case 101:
			uParam0->f_22 = 1095641/*__LIB_7__::func_877*/;
			break;
		case 78:
			uParam0->f_59 = 1095351/*__LIB_7__::func_811*/;
			break;
		case 125:
			uParam0->f_19 = 1095327/*__LIB_4__::func_313*/;
			break;
	}
}

int func_3215(var uParam0, var uParam1)//Position - 0x10B8FB
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
		func_1590(&(uParam1->f_140[2]), PLAYER::PLAYER_ID(), 1, 0);
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

int func_3229(int iParam0, var uParam1)//Position - 0x10C7AA
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
			func_567(&iVar1, &(uParam1->f_109), 60);
			__LIB_3__::func_633(&(uParam1->f_109));
			VEHICLE::SET_DISABLE_MAP_COLLISION(uParam1->f_109);
			return 0;
		}
		else if (func_480(&iVar1, &(uParam1->f_109), &(uParam1->f_109.f_1), 1, 1, 0, 0, 0, 1))
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

void func_3344(int iParam0, int iParam1)//Position - 0x112C78
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
		func_777(iParam0, Var2, &bVar0, &bVar1, 1, 0);
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

void func_3346(var uParam0, var uParam1)//Position - 0x112DB9
{
	if (__LIB_3__::func_616() == 2)
	{
		func_3360(uParam0, uParam1);
	}
	else if (__LIB_3__::func_616() == 0)
	{
		if (__LIB_2__::func_72(PLAYER::PLAYER_ID(), 0))
		{
			__LIB_7__::func_851(uParam0, uParam1);
		}
		else
		{
			func_3348(uParam0, uParam1);
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

void func_3348(var uParam0, var uParam1)//Position - 0x112E44
{
	int iVar0;
	iVar0 = __LIB_3__::func_785();
	switch (iVar0)
	{
		case 0:
			__LIB_9__::func_307(uParam0, uParam1);
			break;
		case 1:
			func_3349(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_3349(var uParam0, var uParam1)//Position - 0x112E7E
{
	int iVar0;
	int iVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_777(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, __LIB_5__::func_576(PLAYER::PLAYER_ID()), 0);
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

void func_3360(var uParam0, var uParam1)//Position - 0x113398
{
	int iVar0;
	iVar0 = __LIB_3__::func_785();
	switch (iVar0)
	{
		case 0:
			__LIB_9__::func_278(uParam0, uParam1);
			break;
		case 1:
			func_3369(uParam0, uParam1);
			break;
		case 2:
			__LIB_12__::func_400(uParam0, uParam1);
			break;
		default:
			break;
	}
}

void func_3369(var uParam0, var uParam1)//Position - 0x113845
{
	int iVar0;
	int iVar1;
	bool bVar2;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_777(*uParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0, &iVar1, 1, 0);
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

void func_3439(var uParam0, int iParam1)//Position - 0x11A83C
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1164699/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1164643/*__LIB_4__::func_411*/;
			break;
		case 2:
			uParam0->f_31 = 1164374/*__LIB_5__::func_324*/;
			break;
		case 3:
			uParam0->f_34 = 1164313/*__LIB_4__::func_410*/;
			break;
		case 4:
			uParam0->f_12 = 1164282/*__LIB_4__::func_409*/;
			break;
		case 6:
			uParam0->f_32 = 1164218/*__LIB_4__::func_408*/;
			break;
		case 111:
			uParam0->f_35 = 1164209/*__LIB_0__::func_162*/;
			break;
		case 11:
			uParam0->f_11 = 1164200/*__LIB_0__::func_109*/;
			break;
		case 14:
			uParam0->f_11 = 1164191/*__LIB_0__::func_162*/;
			break;
		case 12:
			uParam0->f_33 = 1163980/*__LIB_9__::func_133*/;
			break;
		case 109:
			uParam0->f_56 = 1163972/*__LIB_0__::func_467*/;
			break;
		case 79:
			*uParam0 = 1163948/*__LIB_5__::func_265*/;
			break;
		case 13:
			uParam0->f_2 = 1163939/*__LIB_0__::func_114*/;
			break;
		case 15:
			uParam0->f_2 = 1162995/*__LIB_9__::func_501*/;
			break;
		case 75:
			uParam0->f_4 = 1162986/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1162961/*__LIB_5__::func_323*/;
			break;
		case 108:
			uParam0->f_55 = 1162952/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 1162926/*__LIB_5__::func_322*/;
			break;
		case 19:
			uParam0->f_17 = 1162914/*__LIB_3__::func_860*/;
			break;
		case 20:
			uParam0->f_3 = 1162905/*__LIB_0__::func_114*/;
			break;
		case 21:
			uParam0->f_3 = 1162896/*__LIB_0__::func_114*/;
			break;
		case 74:
			uParam0->f_53 = 1162428/*__LIB_8__::func_934*/;
			break;
		case 22:
			uParam0->f_24 = 1162309/*__LIB_5__::func_596*/;
			break;
		case 25:
			uParam0->f_23 = 1161539/*func_3481*/;
			break;
		case 30:
			uParam0->f_8 = 1161393/*__LIB_5__::func_595*/;
			break;
		case 31:
			uParam0->f_39 = 1161381/*__LIB_3__::func_860*/;
			break;
		case 33:
			uParam0->f_40 = 1161174/*__LIB_9__::func_282*/;
			break;
		case 34:
			uParam0->f_41 = 1160857/*__LIB_5__::func_594*/;
			break;
		case 36:
			uParam0->f_58 = 1160804/*__LIB_3__::func_945*/;
			break;
		case 35:
			uParam0->f_42 = 1160031/*__LIB_5__::func_891*/;
			break;
		case 45:
			uParam0->f_14 = 1160022/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 1160013/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 1160005/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1159994/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1159755/*__LIB_5__::func_890*/;
			break;
		case 49:
			uParam0->f_8 = 1159746/*__LIB_0__::func_114*/;
			break;
		case 50:
			*uParam0 = 1159737/*__LIB_0__::func_114*/;
			break;
		case 51:
			*uParam0 = 1159728/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 1159717/*__LIB_4__::func_401*/;
			break;
		case 53:
			uParam0->f_13 = 1159706/*__LIB_3__::func_554*/;
			break;
		case 54:
			uParam0->f_45 = 1159698/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 1159689/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1159680/*__LIB_1__::func_804*/;
			break;
		case 58:
			uParam0->f_13 = 1159387/*__LIB_8__::func_186*/;
			break;
		case 64:
			uParam0->f_47 = 1158843/*__LIB_8__::func_222*/;
			break;
		case 65:
			uParam0->f_21 = 1158835/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 1158767/*__LIB_5__::func_319*/;
			break;
		case 67:
			uParam0->f_21 = 1158627/*__LIB_5__::func_593*/;
			break;
		case 68:
			*uParam0 = 1158183/*__LIB_5__::func_318*/;
			break;
		case 69:
			*uParam0 = 1158174/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 1158162/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1158153/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1158141/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1158132/*__LIB_0__::func_114*/;
			break;
		case 78:
			uParam0->f_59 = 1158124/*__LIB_0__::func_467*/;
			break;
	}
}

void func_3481(int iParam0, int iParam1)//Position - 0x11B943
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
						func_3482(iParam0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar2)
						{
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 0, 0, 1, 0, -1, -1, -1);
						}
						func_3482(iParam0);
					}
					Jump @551; //curOff = 532
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_3482(int iParam0)//Position - 0x11BB6D
{
	__LIB_9__::func_282(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_3517(var uParam0, int iParam1)//Position - 0x11C5A4
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1263516/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1263412/*__LIB_4__::func_515*/;
			break;
		case 2:
			uParam0->f_31 = 1262677/*__LIB_5__::func_620*/;
			break;
		case 3:
			uParam0->f_34 = 1262595/*__LIB_4__::func_513*/;
			break;
		case 4:
			uParam0->f_12 = 1262452/*__LIB_4__::func_512*/;
			break;
		case 5:
			uParam0->f_11 = 1262442/*__LIB_4__::func_511*/;
			break;
		case 37:
			uParam0->f_18 = 1262305/*__LIB_4__::func_510*/;
			break;
		case 42:
			uParam0->f_10 = 1262238/*__LIB_5__::func_897*/;
			break;
		case 6:
			uParam0->f_32 = 1262126/*__LIB_4__::func_509*/;
			break;
		case 111:
			uParam0->f_35 = 1261887/*__LIB_5__::func_751*/;
			break;
		case 11:
			uParam0->f_11 = 1261878/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 1261377/*__LIB_5__::func_619*/;
			break;
		case 14:
			uParam0->f_11 = 1261368/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 1261360/*__LIB_0__::func_467*/;
			break;
		case 79:
			*uParam0 = 1261336/*__LIB_5__::func_265*/;
			break;
		case 38:
			uParam0->f_9 = 1261256/*__LIB_5__::func_896*/;
			break;
		case 13:
			uParam0->f_2 = 1261160/*__LIB_5__::func_750*/;
			break;
		case 15:
			uParam0->f_2 = 1260955/*__LIB_9__::func_798*/;
			break;
		case 75:
			uParam0->f_4 = 1260939/*__LIB_5__::func_618*/;
			break;
		case 16:
			uParam0->f_5 = 1260130/*__LIB_8__::func_936*/;
			break;
		case 108:
			uParam0->f_55 = 1255425/*__LIB_10__::func_74*/;
			break;
		case 17:
			uParam0->f_17 = 1254607/*__LIB_10__::func_19*/;
			break;
		case 19:
			uParam0->f_17 = 1254580/*__LIB_5__::func_994*/;
			break;
		case 20:
			uParam0->f_3 = 1254496/*__LIB_5__::func_616*/;
			break;
		case 21:
			uParam0->f_3 = 1254432/*__LIB_5__::func_798*/;
			break;
		case 74:
			uParam0->f_53 = 1254280/*__LIB_5__::func_330*/;
			break;
		case 22:
			uParam0->f_24 = 1254113/*__LIB_5__::func_615*/;
			break;
		case 25:
			uParam0->f_23 = 1252967/*func_3702*/;
			break;
		case 30:
			uParam0->f_8 = 1252349/*__LIB_6__::func_675*/;
			break;
		case 31:
			uParam0->f_39 = 1252036/*__LIB_5__::func_749*/;
			break;
		case 33:
			uParam0->f_40 = 1251097/*__LIB_7__::func_62*/;
			break;
		case 34:
			uParam0->f_41 = 1249737/*__LIB_4__::func_500*/;
			break;
		case 36:
			uParam0->f_58 = 1249679/*__LIB_4__::func_499*/;
			break;
		case 35:
			uParam0->f_42 = 1201975/*__LIB_5__::func_614*/;
			break;
		case 45:
			uParam0->f_14 = 1201966/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 1201957/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 1201949/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1201926/*__LIB_4__::func_496*/;
			break;
		case 47:
			uParam0->f_43 = 1201798/*__LIB_4__::func_495*/;
			break;
		case 49:
			uParam0->f_8 = 1201757/*__LIB_4__::func_494*/;
			break;
		case 50:
			*uParam0 = 1201489/*__LIB_5__::func_747*/;
			break;
		case 51:
			*uParam0 = 1201420/*__LIB_6__::func_335*/;
			break;
		case 52:
			uParam0->f_15 = 1201409/*__LIB_4__::func_492*/;
			break;
		case 53:
			uParam0->f_13 = 1201175/*__LIB_4__::func_296*/;
			break;
		case 54:
			uParam0->f_45 = 1200825/*func_3677*/;
			break;
		case 56:
			uParam0->f_46 = 1200816/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1200745/*__LIB_7__::func_28*/;
			break;
		case 58:
			uParam0->f_13 = 1200511/*__LIB_4__::func_296*/;
			break;
		case 64:
			uParam0->f_47 = 1200311/*__LIB_5__::func_613*/;
			break;
		case 65:
			uParam0->f_21 = 1199413/*__LIB_7__::func_61*/;
			break;
		case 66:
			uParam0->f_21 = 1198687/*__LIB_6__::func_35*/;
			break;
		case 67:
			uParam0->f_21 = 1196388/*__LIB_6__::func_986*/;
			break;
		case 68:
			*uParam0 = 1195752/*__LIB_6__::func_985*/;
			break;
		case 69:
			*uParam0 = 1195743/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 1195731/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1195722/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1195710/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1195017/*__LIB_6__::func_984*/;
			break;
		case 84:
			uParam0->f_1 = 1194477/*func_3625*/;
			break;
		case 85:
			uParam0->f_1 = 1190375/*func_3617*/;
			break;
		case 87:
			uParam0->f_1 = 1186388/*__LIB_7__::func_27*/;
			break;
		case 88:
			uParam0->f_1 = 1185874/*__LIB_7__::func_60*/;
			break;
		case 89:
			uParam0->f_54 = 1185703/*__LIB_5__::func_894*/;
			break;
		case 90:
			uParam0->f_1 = 1185531/*__LIB_6__::func_333*/;
			break;
		case 91:
			uParam0->f_1 = 1185365/*__LIB_5__::func_328*/;
			break;
		case 92:
			uParam0->f_1 = 1183913/*func_3591*/;
			break;
		case 94:
			uParam0->f_1 = 1179777/*__LIB_6__::func_34*/;
			break;
		case 95:
			uParam0->f_22 = 1179479/*__LIB_5__::func_605*/;
			break;
		case 96:
			uParam0->f_1 = 1179449/*__LIB_5__::func_326*/;
			break;
		case 97:
			uParam0->f_1 = 1178781/*__LIB_5__::func_992*/;
			break;
		case 98:
			uParam0->f_1 = 1176132/*func_3554*/;
			break;
		case 100:
			uParam0->f_22 = 1168179/*__LIB_7__::func_882*/;
			break;
		case 101:
			uParam0->f_22 = 1166236/*__LIB_7__::func_881*/;
			break;
		case 78:
			uParam0->f_59 = 1166016/*__LIB_7__::func_817*/;
			break;
		case 125:
			uParam0->f_19 = 1165992/*__LIB_4__::func_412*/;
			break;
	}
}

int func_3554(int iParam0, int* iParam1)//Position - 0x11F244
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
							func_1590(&(iParam1->f_140[0]), Global_1853191, 1, 0);
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
								func_1590(&(iParam1->f_140[iVar1]), bVar2, 1, 0);
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
			func_1590(&(iParam1->f_140[0]), PLAYER::PLAYER_ID(), 1, 0);
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

int func_3591(int iParam0, int* iParam1)//Position - 0x1210A9
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
				__LIB_10__::func_152(&iVar1, &(iParam1->f_109), 48, 10f, 20f, 15f);
			}
			else
			{
				func_567(&iVar1, &(iParam1->f_109), 40);
			}
			VEHICLE::SET_DISABLE_MAP_COLLISION(iParam1->f_109);
			return 0;
		}
		else if (func_3593(&iVar1, &(iParam1->f_109), &(iParam1->f_109.f_1), &(Global_1946250.f_4508), 1))
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
							func_1590(&(iParam1->f_140[iVar3]), bVar5, 1, 0);
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

int func_3593(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x1213BB
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
					func_481(uParam2[iVar1], iVar3, 1, 0);
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

int func_3617(int iParam0, int* iParam1)//Position - 0x1229E7
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
			func_567(&iVar0, &(iParam1->f_109), 60);
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
		else if (func_480(&iVar0, &(iParam1->f_109), &(iParam1->f_109.f_1), 1, 1, 0, 0, 0, 1))
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
		func_1590(&(iParam1->f_140[0]), PLAYER::PLAYER_ID(), 1, 0);
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

int func_3625(int iParam0, var uParam1)//Position - 0x1239ED
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
				else if (!__LIB_10__::func_152(&iVar1, &(uParam1->f_122), 16, Var2))
				{
					bVar0 = false;
				}
				else
				{
					func_567(&iVar1, &(uParam1->f_122), 24);
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

void func_3677(int iParam0, var uParam1, int* iParam2, var uParam3, var uParam4)//Position - 0x1252B9
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
					func_2327(iParam2, 166);
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

void func_3702(int iParam0, int iParam1)//Position - 0x131E67
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
								if (((((((!__LIB_1__::func_907(bVar7, 1) && !__LIB_5__::func_424(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_1__::func_101(uVar0[iVar6])) && !__LIB_4__::func_972(bVar7)) && !__LIB_4__::func_976(bVar7, 1)) && !__LIB_6__::func_336(bVar7)) && !func_778(bVar7))
								{
									bVar2 = true;
								}
							}
						}
						if ((((((((!bVar3 && __LIB_3__::func_360(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_5__::func_424(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_1__::func_101(uVar0[iVar6])) && !__LIB_4__::func_972(bVar7)) && !__LIB_4__::func_976(bVar7, 1)) && !__LIB_6__::func_336(bVar7)) && !func_778(bVar7))
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
						func_3703(iParam0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar2)
						{
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 0, 0, 1, 0, -1, -1, -1);
						}
						func_3703(iParam0);
					}
					Jump @653; //curOff = 634
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_3703(int iParam0)//Position - 0x1320F7
{
	__LIB_7__::func_62(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_3760(var uParam0, int iParam1)//Position - 0x1347A5
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1291560/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1291504/*__LIB_4__::func_571*/;
			break;
		case 2:
			uParam0->f_31 = 1291235/*__LIB_5__::func_341*/;
			break;
		case 3:
			uParam0->f_34 = 1291176/*__LIB_4__::func_570*/;
			break;
		case 4:
			uParam0->f_12 = 1291145/*__LIB_4__::func_569*/;
			break;
		case 37:
			uParam0->f_18 = 1291025/*__LIB_4__::func_568*/;
			break;
		case 38:
			uParam0->f_9 = 1290941/*__LIB_5__::func_898*/;
			break;
		case 6:
			uParam0->f_32 = 1290877/*__LIB_4__::func_567*/;
			break;
		case 111:
			uParam0->f_35 = 1290854/*__LIB_5__::func_340*/;
			break;
		case 11:
			uParam0->f_11 = 1290845/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 1290392/*__LIB_9__::func_474*/;
			break;
		case 14:
			uParam0->f_11 = 1290383/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 1290375/*__LIB_0__::func_467*/;
			break;
		case 79:
			*uParam0 = 1290351/*__LIB_5__::func_265*/;
			break;
		case 13:
			uParam0->f_2 = 1290342/*__LIB_0__::func_114*/;
			break;
		case 15:
			uParam0->f_2 = 1285272/*__LIB_9__::func_759*/;
			break;
		case 75:
			uParam0->f_4 = 1285263/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1285079/*__LIB_5__::func_805*/;
			break;
		case 108:
			uParam0->f_55 = 1282076/*func_3870*/;
			break;
		case 17:
			uParam0->f_17 = 1281568/*__LIB_8__::func_938*/;
			break;
		case 19:
			uParam0->f_17 = 1281541/*__LIB_5__::func_997*/;
			break;
		case 20:
			uParam0->f_3 = 1281463/*__LIB_5__::func_628*/;
			break;
		case 21:
			uParam0->f_3 = 1281400/*__LIB_5__::func_336*/;
			break;
		case 74:
			uParam0->f_53 = 1281185/*__LIB_6__::func_909*/;
			break;
		case 22:
			uParam0->f_24 = 1281066/*__LIB_5__::func_627*/;
			break;
		case 25:
			uParam0->f_23 = 1280119/*func_3857*/;
			break;
		case 30:
			uParam0->f_8 = 1279555/*__LIB_5__::func_626*/;
			break;
		case 31:
			uParam0->f_39 = 1279376/*__LIB_5__::func_625*/;
			break;
		case 33:
			uParam0->f_40 = 1278264/*__LIB_8__::func_973*/;
			break;
		case 34:
			uParam0->f_41 = 1277568/*__LIB_5__::func_624*/;
			break;
		case 36:
			uParam0->f_58 = 1277515/*__LIB_3__::func_945*/;
			break;
		case 35:
			uParam0->f_42 = 1276938/*__LIB_6__::func_908*/;
			break;
		case 45:
			uParam0->f_14 = 1276929/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 1276920/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 1276743/*__LIB_10__::func_21*/;
			break;
		case 77:
			uParam0->f_13 = 1276732/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1276234/*__LIB_7__::func_821*/;
			break;
		case 49:
			uParam0->f_8 = 1276193/*__LIB_4__::func_550*/;
			break;
		case 50:
			*uParam0 = 1276184/*__LIB_0__::func_114*/;
			break;
		case 51:
			*uParam0 = 1276175/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 1276164/*__LIB_4__::func_549*/;
			break;
		case 53:
			uParam0->f_13 = 1276153/*__LIB_3__::func_554*/;
			break;
		case 54:
			uParam0->f_45 = 1276145/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 1276136/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1276127/*__LIB_1__::func_804*/;
			break;
		case 58:
			uParam0->f_13 = 1275898/*__LIB_8__::func_859*/;
			break;
		case 64:
			uParam0->f_47 = 1269979/*func_3795*/;
			break;
		case 65:
			uParam0->f_21 = 1268325/*__LIB_10__::func_23*/;
			break;
		case 66:
			uParam0->f_21 = 1268014/*__LIB_6__::func_392*/;
			break;
		case 67:
			uParam0->f_21 = 1267289/*__LIB_7__::func_819*/;
			break;
		case 68:
			*uParam0 = 1266744/*__LIB_6__::func_987*/;
			break;
		case 69:
			*uParam0 = 1266735/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 1266723/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1266714/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1266702/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1264986/*__LIB_7__::func_30*/;
			break;
		case 78:
			uParam0->f_59 = 1264536/*__LIB_8__::func_987*/;
			break;
		case 125:
			uParam0->f_19 = 1264520/*__LIB_4__::func_516*/;
			break;
	}
}

void func_3795(var uParam0, int iParam1, var uParam2, var uParam3)//Position - 0x1360DB
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	iVar0 = __LIB_7__::func_763();
	if ((__LIB_9__::func_759(iParam1) && !__LIB_2__::func_731(PLAYER::PLAYER_ID())) && PLAYER::PLAYER_ID() == __LIB_6__::func_907(iVar0, 1, 0))
	{
		__LIB_9__::func_284(uParam0, 1);
		__LIB_4__::func_525(0);
	}
	if (__LIB_5__::func_623(iVar0))
	{
		if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && __LIB_8__::func_971(uParam0, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), iVar0, 1)) && !__LIB_9__::func_759(iParam1))
		{
		}
		else if (!__LIB_3__::func_171(PLAYER::PLAYER_ID()) && PLAYER::PLAYER_ID() == __LIB_6__::func_907(iVar0, 1, 0))
		{
			__LIB_9__::func_284(uParam0, 1);
			__LIB_4__::func_525(0);
		}
		if (__LIB_5__::func_187(PLAYER::PLAYER_ID(), -1))
		{
			if (PLAYER::PLAYER_ID() == __LIB_6__::func_907(iVar0, 1, 0))
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
	if ((__LIB_4__::func_544(PLAYER::PLAYER_ID()) || __LIB_4__::func_543(PLAYER::PLAYER_ID())) && __LIB_9__::func_980(iParam1))
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
			__LIB_1__::func_376(PLAYER::PLAYER_ID(), 1, 0, 0);
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
				if (__LIB_1__::func_645(PLAYER::PLAYER_ID()))
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
		if (!__LIB_2__::func_731(PLAYER::PLAYER_ID()))
		{
			if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false)) && __LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
			{
				if (!__LIB_1__::func_645(__LIB_6__::func_907(iVar0, 1, 0)))
				{
					__LIB_12__::func_75(uParam0, iVar0);
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
						if (__LIB_9__::func_759(iParam1) && !__LIB_2__::func_731(PLAYER::PLAYER_ID()))
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

void func_3857(int iParam0, int iParam1)//Position - 0x138877
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
								if ((((!__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar7)) && !__LIB_1__::func_907(bVar7, 1)) && !__LIB_5__::func_424(bVar7)) && !__LIB_3__::func_728(bVar7, 14)) && !func_778(bVar7))
								{
									bVar0 = true;
								}
							}
						}
						if ((((((!bVar1 && __LIB_3__::func_360(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar7))) && !__LIB_1__::func_907(bVar7, 1)) && !__LIB_5__::func_424(bVar7)) && !__LIB_3__::func_728(bVar7, 14)) && !func_778(bVar7))
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
						__LIB_8__::func_973(iParam0, -1);
					}
					bVar9 = __LIB_4__::func_557(PLAYER::PLAYER_ID());
					if (__LIB_3__::func_661(0, iParam1))
					{
						__LIB_8__::func_973(iParam0, -1);
					}
					else if (__LIB_3__::func_661(1, iParam1))
					{
						if (bVar1)
						{
							__LIB_8__::func_860(1);
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var6, 1, 0, 0, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_3858(iParam0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_8__::func_860(1);
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var6, 0, 0, 1, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_3858(iParam0);
					}
					Jump @656; //curOff = 637
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_3858(int iParam0)//Position - 0x138B0A
{
	__LIB_8__::func_973(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

int func_3870(var uParam0, var uParam1, var uParam2)//Position - 0x13901C
{
	int iVar0;
	bool bVar1;
	char* sVar2;
	*uParam2 = 1;
	if (Global_262145.f_23133 /* Tunable: 200197103 */)
	{
		return 0;
	}
	iVar0 = __LIB_7__::func_763();
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
		if (__LIB_6__::func_907(iVar0, 1, 0) != PLAYER::PLAYER_ID())
		{
			return 0;
		}
	}
	if ((!__LIB_0__::func_893() || __LIB_3__::func_558()) || HUD::IS_PAUSE_MENU_ACTIVE())
	{
		__LIB_9__::func_284(uParam1, 1);
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
			__LIB_9__::func_284(uParam1, 1);
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
					if (((__LIB_5__::func_623(iVar0) && __LIB_4__::func_680(OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(iVar0, true), ENTITY::GET_ENTITY_HEADING(iVar0), 0f, -1f, 0f))) || __LIB_4__::func_955(PLAYER::PLAYER_ID())) || __LIB_4__::func_504())
					{
						if (!__LIB_9__::func_759(*uParam0) && __LIB_8__::func_971(uParam1, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), iVar0, 0))
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
								if (__LIB_4__::func_955(PLAYER::PLAYER_ID()))
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
									__LIB_9__::func_284(uParam1, 0);
									__LIB_4__::func_562(__LIB_1__::func_694(PLAYER::PLAYER_ID()), 25f, 0);
									__LIB_3__::func_122(&(uParam1->f_22.f_94));
									if (BitTest(uParam1->f_22, 1))
									{
										MISC::CLEAR_BIT(&(uParam1->f_22), 1);
									}
									if (!BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318, 19))
									{
										__LIB_6__::func_844(1, 1);
										MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318), 19);
									}
									if (!__LIB_4__::func_955(PLAYER::PLAYER_ID()))
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
									if (__LIB_4__::func_955(PLAYER::PLAYER_ID()))
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
										__LIB_1__::func_376(PLAYER::PLAYER_ID(), 0, 0, 0);
										__LIB_7__::func_4(1);
										__LIB_4__::func_562(__LIB_1__::func_694(PLAYER::PLAYER_ID()), 25f, 0);
										__LIB_4__::func_563(0);
										__LIB_5__::func_435(1, 88);
										return 1;
									}
									else if (!__LIB_3__::func_779())
									{
										__LIB_4__::func_542(1);
										__LIB_4__::func_541(1);
										__LIB_7__::func_4(1);
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
						__LIB_9__::func_284(uParam1, 1);
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
					__LIB_9__::func_284(uParam1, 1);
					__LIB_4__::func_525(0);
				}
			}
			else
			{
				__LIB_10__::func_60(*uParam0);
				if (__LIB_4__::func_405(PLAYER::PLAYER_ID()))
				{
					if (!__LIB_0__::func_864(&(uParam1->f_22.f_101)))
					{
						__LIB_0__::func_795(&(uParam1->f_22.f_101), 0, 0);
					}
					if (__LIB_1__::func_693(Global_1946250.f_3630, 1, 1))
					{
					}
					if (!__LIB_5__::func_301(Global_1946250.f_3630) && __LIB_2__::func_731(Global_1946250.f_3630))
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
								__LIB_1__::func_376(PLAYER::PLAYER_ID(), 1, 0, 0);
								__LIB_4__::func_538(0);
								__LIB_4__::func_540(0);
								__LIB_4__::func_537(0);
								__LIB_0__::func_794(&(uParam1->f_22.f_101));
							}
						}
					}
					PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 1);
					__LIB_1__::func_33(0);
					__LIB_3__::func_669(Global_1946250.f_3630);
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
			__LIB_9__::func_284(uParam1, 1);
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

void func_3927(var uParam0, int iParam1)//Position - 0x13B531
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1344264/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1344184/*__LIB_4__::func_631*/;
			break;
		case 2:
			uParam0->f_31 = 1343685/*__LIB_5__::func_348*/;
			break;
		case 3:
			uParam0->f_34 = 1343635/*__LIB_4__::func_630*/;
			break;
		case 4:
			uParam0->f_12 = 1343548/*__LIB_4__::func_629*/;
			break;
		case 5:
			uParam0->f_11 = 1343538/*__LIB_4__::func_628*/;
			break;
		case 37:
			uParam0->f_18 = 1343415/*__LIB_4__::func_627*/;
			break;
		case 38:
			uParam0->f_9 = 1343293/*__LIB_5__::func_905*/;
			break;
		case 6:
			uParam0->f_32 = 1343205/*__LIB_4__::func_626*/;
			break;
		case 111:
			uParam0->f_35 = 1343191/*__LIB_5__::func_904*/;
			break;
		case 11:
			uParam0->f_11 = 1343182/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 1342803/*__LIB_5__::func_645*/;
			break;
		case 14:
			uParam0->f_11 = 1342794/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 1342786/*__LIB_0__::func_467*/;
			break;
		case 79:
			*uParam0 = 1342762/*__LIB_5__::func_265*/;
			break;
		case 13:
			uParam0->f_2 = 1342630/*__LIB_6__::func_394*/;
			break;
		case 15:
			uParam0->f_2 = 1342348/*__LIB_9__::func_799*/;
			break;
		case 75:
			uParam0->f_4 = 1342334/*__LIB_4__::func_624*/;
			break;
		case 16:
			uParam0->f_5 = 1341816/*__LIB_8__::func_224*/;
			break;
		case 108:
			uParam0->f_55 = 1338192/*__LIB_10__::func_75*/;
			break;
		case 17:
			uParam0->f_17 = 1337655/*__LIB_8__::func_939*/;
			break;
		case 19:
			uParam0->f_17 = 1337628/*__LIB_6__::func_3*/;
			break;
		case 20:
			uParam0->f_3 = 1337544/*__LIB_5__::func_643*/;
			break;
		case 21:
			uParam0->f_3 = 1337480/*__LIB_5__::func_798*/;
			break;
		case 74:
			uParam0->f_53 = 1337300/*__LIB_6__::func_910*/;
			break;
		case 22:
			uParam0->f_24 = 1337157/*__LIB_5__::func_642*/;
			break;
		case 25:
			uParam0->f_23 = 1336533/*func_4050*/;
			break;
		case 30:
			uParam0->f_8 = 1336018/*__LIB_6__::func_685*/;
			break;
		case 31:
			uParam0->f_39 = 1335731/*__LIB_5__::func_756*/;
			break;
		case 33:
			uParam0->f_40 = 1335060/*__LIB_7__::func_65*/;
			break;
		case 34:
			uParam0->f_41 = 1333796/*__LIB_4__::func_620*/;
			break;
		case 36:
			uParam0->f_58 = 1333751/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 1307441/*__LIB_5__::func_755*/;
			break;
		case 45:
			uParam0->f_14 = 1307432/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 1307423/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 1307415/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1307392/*__LIB_4__::func_616*/;
			break;
		case 47:
			uParam0->f_43 = 1307288/*__LIB_4__::func_615*/;
			break;
		case 49:
			uParam0->f_8 = 1307247/*__LIB_4__::func_494*/;
			break;
		case 50:
			*uParam0 = 1307033/*__LIB_5__::func_754*/;
			break;
		case 51:
			*uParam0 = 1306964/*__LIB_6__::func_335*/;
			break;
		case 52:
			uParam0->f_15 = 1306953/*__LIB_4__::func_613*/;
			break;
		case 53:
			uParam0->f_13 = 1306815/*__LIB_4__::func_302*/;
			break;
		case 54:
			uParam0->f_45 = 1306627/*__LIB_5__::func_347*/;
			break;
		case 56:
			uParam0->f_46 = 1306618/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1306441/*__LIB_6__::func_2*/;
			break;
		case 58:
			uParam0->f_13 = 1306303/*__LIB_4__::func_302*/;
			break;
		case 64:
			uParam0->f_47 = 1306295/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 1305459/*__LIB_7__::func_64*/;
			break;
		case 66:
			uParam0->f_21 = 1305352/*__LIB_4__::func_611*/;
			break;
		case 67:
			uParam0->f_21 = 1305288/*__LIB_4__::func_610*/;
			break;
		case 68:
			*uParam0 = 1304800/*__LIB_5__::func_346*/;
			break;
		case 69:
			*uParam0 = 1304791/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 1304779/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1304770/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1304758/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1304055/*__LIB_6__::func_1*/;
			break;
		case 84:
			uParam0->f_1 = 1303955/*__LIB_5__::func_902*/;
			break;
		case 85:
			uParam0->f_1 = 1301971/*func_3999*/;
			break;
		case 87:
			uParam0->f_1 = 1299548/*__LIB_6__::func_428*/;
			break;
		case 88:
			uParam0->f_1 = 1299539/*__LIB_0__::func_109*/;
			break;
		case 96:
			uParam0->f_1 = 1299476/*__LIB_4__::func_600*/;
			break;
		case 97:
			uParam0->f_1 = 1299154/*__LIB_6__::func_0*/;
			break;
		case 98:
			uParam0->f_1 = 1295147/*func_3948*/;
			break;
		case 100:
			uParam0->f_22 = 1292937/*__LIB_6__::func_441*/;
			break;
		case 78:
			uParam0->f_59 = 1292733/*__LIB_5__::func_998*/;
			break;
		case 125:
			uParam0->f_19 = 1292717/*__LIB_4__::func_516*/;
			break;
	}
}

int func_3948(int iParam0, int* iParam1)//Position - 0x13C32B
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	__LIB_6__::func_427(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_109) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
		func_567(&iVar0, &(iParam1->f_109), 12);
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

int func_3999(int iParam0, int* iParam1)//Position - 0x13DDD3
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
			func_567(&iVar0, &(iParam1->f_109), 60);
			__LIB_3__::func_633(&(iParam1->f_109));
			return 0;
		}
		else
		{
			func_480(&iVar0, &(iParam1->f_109), &(iParam1->f_109.f_1), 1, 0, 0, 0, 0, 1);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_140[0]))
	{
		func_1590(&(iParam1->f_140[0]), PLAYER::PLAYER_ID(), 1, 0);
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

void func_4050(int iParam0, int iParam1)//Position - 0x1464D5
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
								if ((((!__LIB_1__::func_907(bVar7, 1) && !__LIB_5__::func_424(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_1__::func_101(PLAYER::PLAYER_PED_ID())) && !func_778(bVar7))
								{
									bVar2 = true;
								}
							}
						}
						if (((((!bVar3 && __LIB_3__::func_360(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_5__::func_424(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar6], true)) && !__LIB_1__::func_101(PLAYER::PLAYER_PED_ID())) && !func_778(bVar7))
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
						func_4051(iParam0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar2)
						{
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 0, 0, 1, 0, -1, -1, -1);
						}
						func_4051(iParam0);
					}
					Jump @575; //curOff = 556
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_4051(int iParam0)//Position - 0x146717
{
	__LIB_7__::func_65(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_4094(var uParam0, int iParam1)//Position - 0x148311
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1353778/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1353722/*__LIB_4__::func_641*/;
			break;
		case 2:
			uParam0->f_31 = 1353503/*__LIB_5__::func_807*/;
			break;
		case 3:
			uParam0->f_34 = 1353452/*__LIB_4__::func_640*/;
			break;
		case 4:
			uParam0->f_12 = 1353419/*__LIB_4__::func_639*/;
			break;
		case 6:
			uParam0->f_32 = 1353355/*__LIB_4__::func_638*/;
			break;
		case 111:
			uParam0->f_35 = 1353346/*__LIB_0__::func_162*/;
			break;
		case 79:
			*uParam0 = 1353322/*__LIB_5__::func_265*/;
			break;
		case 11:
			uParam0->f_11 = 1353313/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 1353221/*__LIB_8__::func_274*/;
			break;
		case 14:
			uParam0->f_11 = 1353212/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 1353204/*__LIB_0__::func_467*/;
			break;
		case 15:
			uParam0->f_2 = 1352952/*__LIB_8__::func_196*/;
			break;
		case 13:
			uParam0->f_2 = 1352943/*__LIB_0__::func_114*/;
			break;
		case 75:
			uParam0->f_4 = 1352934/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1352925/*__LIB_0__::func_109*/;
			break;
		case 108:
			uParam0->f_55 = 1352916/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 1352871/*__LIB_5__::func_351*/;
			break;
		case 19:
			uParam0->f_17 = 1352859/*__LIB_3__::func_860*/;
			break;
		case 20:
			uParam0->f_3 = 1352812/*__LIB_8__::func_863*/;
			break;
		case 21:
			uParam0->f_3 = 1352760/*__LIB_5__::func_350*/;
			break;
		case 74:
			uParam0->f_53 = 1352704/*__LIB_5__::func_806*/;
			break;
		case 22:
			uParam0->f_24 = 1352622/*__LIB_4__::func_637*/;
			break;
		case 25:
			uParam0->f_23 = 1351655/*func_4131*/;
			break;
		case 30:
			uParam0->f_8 = 1351350/*__LIB_5__::func_647*/;
			break;
		case 31:
			uParam0->f_39 = 1351318/*__LIB_4__::func_635*/;
			break;
		case 33:
			uParam0->f_40 = 1351128/*__LIB_9__::func_285*/;
			break;
		case 34:
			uParam0->f_41 = 1347125/*__LIB_5__::func_646*/;
			break;
		case 36:
			uParam0->f_58 = 1347072/*__LIB_3__::func_945*/;
			break;
		case 35:
			uParam0->f_42 = 1345881/*__LIB_5__::func_906*/;
			break;
		case 45:
			uParam0->f_14 = 1345872/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 1345863/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 1345855/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1345844/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1345741/*__LIB_4__::func_632*/;
			break;
		case 49:
			uParam0->f_8 = 1345716/*__LIB_3__::func_941*/;
			break;
		case 50:
			*uParam0 = 1345678/*__LIB_5__::func_725*/;
			break;
		case 51:
			*uParam0 = 1345669/*__LIB_0__::func_109*/;
			break;
		case 52:
			uParam0->f_15 = 1345658/*__LIB_4__::func_270*/;
			break;
		case 53:
			uParam0->f_13 = 1345577/*__LIB_8__::func_193*/;
			break;
		case 54:
			uParam0->f_45 = 1345569/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 1345560/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1345550/*__LIB_3__::func_938*/;
			break;
		case 58:
			uParam0->f_13 = 1345343/*__LIB_8__::func_192*/;
			break;
		case 64:
			uParam0->f_47 = 1345335/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 1345327/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 1345319/*__LIB_0__::func_467*/;
			break;
		case 67:
			uParam0->f_21 = 1345311/*__LIB_0__::func_467*/;
			break;
		case 68:
			*uParam0 = 1345302/*__LIB_0__::func_109*/;
			break;
		case 69:
			*uParam0 = 1345293/*__LIB_0__::func_109*/;
			break;
		case 70:
			uParam0->f_48 = 1345281/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1345272/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1345260/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1345251/*__LIB_0__::func_114*/;
			break;
		case 73:
			uParam0->f_51 = 1345242/*__LIB_0__::func_114*/;
			break;
		case 78:
			uParam0->f_59 = 1345234/*__LIB_0__::func_467*/;
			break;
	}
}

void func_4131(int iParam0, int iParam1)//Position - 0x149FE7
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
						func_4132(iParam0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_8__::func_194(1);
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(__LIB_7__::func_758(), true), ENTITY::GET_ENTITY_HEADING(__LIB_7__::func_758()), 2f, -13f, 0f), 0, 0, 1, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_4132(iParam0);
					}
					Jump @634; //curOff = 615
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_4132(int iParam0)//Position - 0x14A264
{
	__LIB_9__::func_285(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_4159(var uParam0, int iParam1)//Position - 0x14A83B
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1433212/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1433156/*__LIB_4__::func_687*/;
			break;
		case 2:
			uParam0->f_31 = 1431611/*__LIB_11__::func_992*/;
			break;
		case 3:
			uParam0->f_34 = 1431562/*__LIB_4__::func_686*/;
			break;
		case 4:
			uParam0->f_12 = 1431529/*__LIB_4__::func_685*/;
			break;
		case 6:
			uParam0->f_32 = 1431465/*__LIB_4__::func_684*/;
			break;
		case 111:
			uParam0->f_35 = 1431442/*__LIB_5__::func_360*/;
			break;
		case 79:
			*uParam0 = 1431418/*__LIB_5__::func_265*/;
			break;
		case 37:
			uParam0->f_18 = 1431298/*__LIB_4__::func_683*/;
			break;
		case 38:
			uParam0->f_9 = 1431231/*__LIB_5__::func_910*/;
			break;
		case 11:
			uParam0->f_11 = 1431222/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 1430877/*__LIB_12__::func_78*/;
			break;
		case 14:
			uParam0->f_11 = 1430868/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 1430860/*__LIB_0__::func_467*/;
			break;
		case 15:
			uParam0->f_2 = 1425536/*__LIB_12__::func_285*/;
			break;
		case 13:
			uParam0->f_2 = 1425527/*__LIB_0__::func_114*/;
			break;
		case 75:
			uParam0->f_4 = 1425518/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1425493/*__LIB_5__::func_323*/;
			break;
		case 108:
			uParam0->f_55 = 1417296/*__LIB_17__::func_835*/;
			break;
		case 17:
			uParam0->f_17 = 1416712/*__LIB_12__::func_77*/;
			break;
		case 19:
			uParam0->f_17 = 1416685/*__LIB_6__::func_5*/;
			break;
		case 20:
			uParam0->f_3 = 1416624/*__LIB_12__::func_71*/;
			break;
		case 21:
			uParam0->f_3 = 1416504/*__LIB_5__::func_810*/;
			break;
		case 74:
			uParam0->f_53 = 1416448/*__LIB_5__::func_809*/;
			break;
		case 22:
			uParam0->f_24 = 1416366/*__LIB_4__::func_676*/;
			break;
		case 25:
			uParam0->f_23 = 1415394/*func_4252*/;
			break;
		case 30:
			uParam0->f_8 = 1414654/*__LIB_5__::func_650*/;
			break;
		case 31:
			uParam0->f_39 = 1414383/*__LIB_5__::func_760*/;
			break;
		case 33:
			uParam0->f_40 = 1413447/*__LIB_12__::func_76*/;
			break;
		case 34:
			uParam0->f_41 = 1410103/*__LIB_5__::func_355*/;
			break;
		case 36:
			uParam0->f_58 = 1410050/*__LIB_3__::func_945*/;
			break;
		case 35:
			uParam0->f_42 = 1409367/*__LIB_5__::func_909*/;
			break;
		case 45:
			uParam0->f_14 = 1409358/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 1409349/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 1408905/*__LIB_16__::func_191*/;
			break;
		case 77:
			uParam0->f_13 = 1408894/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1408791/*__LIB_4__::func_672*/;
			break;
		case 49:
			uParam0->f_8 = 1408766/*__LIB_3__::func_941*/;
			break;
		case 50:
			*uParam0 = 1408728/*__LIB_5__::func_725*/;
			break;
		case 51:
			*uParam0 = 1408704/*__LIB_6__::func_899*/;
			break;
		case 52:
			uParam0->f_15 = 1408693/*__LIB_4__::func_270*/;
			break;
		case 53:
			uParam0->f_13 = 1408614/*__LIB_11__::func_988*/;
			break;
		case 54:
			uParam0->f_45 = 1408606/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 1408597/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1408587/*__LIB_3__::func_938*/;
			break;
		case 58:
			uParam0->f_13 = 1408358/*__LIB_11__::func_987*/;
			break;
		case 64:
			uParam0->f_47 = 1362023/*__LIB_16__::func_193*/;
			break;
		case 65:
			uParam0->f_21 = 1360885/*__LIB_10__::func_24*/;
			break;
		case 66:
			uParam0->f_21 = 1360662/*__LIB_5__::func_908*/;
			break;
		case 67:
			uParam0->f_21 = 1359764/*__LIB_5__::func_907*/;
			break;
		case 68:
			*uParam0 = 1359219/*__LIB_6__::func_989*/;
			break;
		case 69:
			*uParam0 = 1359210/*__LIB_0__::func_109*/;
			break;
		case 70:
			uParam0->f_48 = 1359198/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1359189/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1359177/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1357083/*__LIB_10__::func_57*/;
			break;
		case 73:
			uParam0->f_51 = 1355315/*__LIB_12__::func_80*/;
			break;
		case 78:
			uParam0->f_59 = 1354782/*__LIB_8__::func_974*/;
			break;
	}
}

void func_4252(int iParam0, int iParam1)//Position - 0x1598E2
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
								if ((((!__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar7)) && !__LIB_1__::func_907(bVar7, 1)) && !__LIB_5__::func_424(bVar7)) && !__LIB_3__::func_728(bVar7, 14)) && !func_778(bVar7))
								{
									bVar0 = true;
								}
							}
						}
						if ((((((!bVar1 && __LIB_3__::func_360(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar7))) && !__LIB_1__::func_907(bVar7, 1)) && !__LIB_5__::func_424(bVar7)) && !__LIB_3__::func_728(bVar7, 14)) && !func_778(bVar7))
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
						func_4253(iParam0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_11__::func_989(1);
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, Var6, 0, 0, 1, bVar9, Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_7, -1, -1);
						}
						func_4253(iParam0);
					}
					Jump @656; //curOff = 637
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_4253(int iParam0)//Position - 0x159B75
{
	__LIB_12__::func_76(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_4324(var uParam0, int iParam1)//Position - 0x15DE85
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1469192/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1469076/*__LIB_4__::func_745*/;
			break;
		case 2:
			uParam0->f_31 = 1467846/*__LIB_7__::func_67*/;
			break;
		case 3:
			uParam0->f_34 = 1467776/*__LIB_4__::func_744*/;
			break;
		case 4:
			uParam0->f_12 = 1467603/*__LIB_4__::func_743*/;
			break;
		case 6:
			uParam0->f_32 = 1467479/*__LIB_4__::func_742*/;
			break;
		case 106:
			uParam0->f_52 = 1467256/*__LIB_6__::func_399*/;
			break;
		case 111:
			uParam0->f_35 = 1467242/*__LIB_5__::func_924*/;
			break;
		case 79:
			*uParam0 = 1467218/*__LIB_5__::func_265*/;
			break;
		case 37:
			uParam0->f_18 = 1467098/*__LIB_4__::func_741*/;
			break;
		case 38:
			uParam0->f_9 = 1466860/*__LIB_6__::func_398*/;
			break;
		case 11:
			uParam0->f_11 = 1466851/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 1465147/*__LIB_5__::func_663*/;
			break;
		case 14:
			uParam0->f_11 = 1465138/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 1465130/*__LIB_0__::func_467*/;
			break;
		case 15:
			uParam0->f_2 = 1464624/*__LIB_9__::func_801*/;
			break;
		case 13:
			uParam0->f_2 = 1464585/*__LIB_5__::func_370*/;
			break;
		case 44:
			*uParam0 = 1464576/*__LIB_0__::func_114*/;
			break;
		case 75:
			uParam0->f_4 = 1464567/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1464099/*__LIB_9__::func_509*/;
			break;
		case 108:
			uParam0->f_55 = 1462060/*__LIB_9__::func_508*/;
			break;
		case 17:
			uParam0->f_17 = 1459924/*__LIB_9__::func_507*/;
			break;
		case 19:
			uParam0->f_17 = 1459897/*__LIB_6__::func_10*/;
			break;
		case 20:
			uParam0->f_3 = 1459813/*__LIB_5__::func_919*/;
			break;
		case 21:
			uParam0->f_3 = 1459713/*__LIB_6__::func_918*/;
			break;
		case 74:
			uParam0->f_53 = 1459546/*__LIB_5__::func_369*/;
			break;
		case 22:
			uParam0->f_24 = 1459443/*__LIB_5__::func_662*/;
			break;
		case 25:
			uParam0->f_23 = 1458791/*func_4446*/;
			break;
		case 30:
			uParam0->f_8 = 1458291/*__LIB_6__::func_691*/;
			break;
		case 31:
			uParam0->f_39 = 1457995/*__LIB_5__::func_762*/;
			break;
		case 33:
			uParam0->f_40 = 1456997/*__LIB_9__::func_506*/;
			break;
		case 32:
			*uParam0 = 1456893/*__LIB_5__::func_814*/;
			break;
		case 34:
			uParam0->f_41 = 1454748/*__LIB_5__::func_367*/;
			break;
		case 35:
			uParam0->f_42 = 1367293/*__LIB_5__::func_649*/;
			break;
		case 36:
			uParam0->f_58 = 1454688/*__LIB_5__::func_366*/;
			break;
		case 45:
			uParam0->f_14 = 1454679/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 1454670/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 1454404/*__LIB_5__::func_813*/;
			break;
		case 77:
			uParam0->f_13 = 1454393/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1454253/*__LIB_4__::func_731*/;
			break;
		case 49:
			uParam0->f_8 = 1454212/*__LIB_4__::func_550*/;
			break;
		case 50:
			*uParam0 = 1454015/*__LIB_6__::func_9*/;
			break;
		case 51:
			*uParam0 = 1453931/*__LIB_6__::func_916*/;
			break;
		case 52:
			uParam0->f_15 = 1453920/*__LIB_4__::func_730*/;
			break;
		case 53:
			uParam0->f_13 = 1453638/*__LIB_4__::func_729*/;
			break;
		case 54:
			uParam0->f_45 = 1453630/*__LIB_0__::func_467*/;
			break;
		case 56:
			uParam0->f_46 = 1453621/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1453560/*__LIB_6__::func_8*/;
			break;
		case 58:
			uParam0->f_13 = 1453278/*__LIB_4__::func_729*/;
			break;
		case 64:
			uParam0->f_47 = 1451363/*__LIB_10__::func_25*/;
			break;
		case 65:
			uParam0->f_21 = 1451320/*__LIB_5__::func_916*/;
			break;
		case 66:
			uParam0->f_21 = 1450617/*__LIB_6__::func_7*/;
			break;
		case 67:
			uParam0->f_21 = 1449533/*__LIB_5__::func_915*/;
			break;
		case 68:
			*uParam0 = 1448942/*__LIB_6__::func_991*/;
			break;
		case 69:
			*uParam0 = 1448933/*__LIB_0__::func_114*/;
			break;
		case 70:
			uParam0->f_48 = 1448921/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1448912/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1448900/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1446226/*__LIB_9__::func_520*/;
			break;
		case 84:
			uParam0->f_1 = 1444380/*func_4369*/;
			break;
		case 85:
			uParam0->f_1 = 1442046/*__LIB_6__::func_813*/;
			break;
		case 87:
			uParam0->f_1 = 1437819/*func_4342*/;
			break;
		case 88:
			uParam0->f_1 = 1437810/*__LIB_0__::func_109*/;
			break;
		case 90:
			uParam0->f_1 = 1437767/*__LIB_5__::func_363*/;
			break;
		case 91:
			uParam0->f_1 = 1437466/*__LIB_5__::func_656*/;
			break;
		case 92:
			uParam0->f_1 = 1436703/*func_4336*/;
			break;
		case 94:
			uParam0->f_1 = 1435203/*__LIB_6__::func_499*/;
			break;
		case 102:
			uParam0->f_1 = 1434633/*__LIB_6__::func_6*/;
			break;
		case 103:
			uParam0->f_22 = 1434625/*__LIB_0__::func_467*/;
			break;
		case 104:
			uParam0->f_1 = 1434550/*__LIB_4__::func_689*/;
			break;
		case 78:
			uParam0->f_59 = 1434476/*__LIB_8__::func_975*/;
			break;
		case 125:
			uParam0->f_19 = 1434452/*__LIB_4__::func_688*/;
			break;
	}
}

int func_4336(var uParam0, var uParam1)//Position - 0x15EC1F
{
	__LIB_6__::func_27(&(Global_1946250.f_4073), 7500, "TruckTunel1", 919.1599f, -3242.047f, -97.191f, -4.6979f, 0.1417f, -118.0924f, 36.2643f, 920.1234f, -3242.478f, -97.1018f, 7.9062f, 0.1417f, -113.0609f, 36.2643f, 1f, 50, 0, 0, 0, 0);
	__LIB_6__::func_27(&(Global_1946250.f_4073), 6000, "TruckPark", 826.3912f, -3231.1902f, -98.5252f, 1.494f, -0.1848f, -114.9899f, 38.3697f, 826.9343f, -3231.013f, -97.8158f, -0.7301f, -0.1848f, -118.0463f, 38.3697f, 1f, 0, 0, 0, 0, 0);
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_248))
	{
		func_567(&(uParam1->f_248), &(uParam1->f_109), 14);
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

int func_4342(int iParam0, var uParam1)//Position - 0x15F07B
{
	int iVar0;
	char* sVar1;
	bool bVar2;
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[0]))
	{
		__LIB_5__::func_911(iParam0, &(uParam1->f_140[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_109, false))
	{
		VEHICLE::SET_FORCE_HD_VEHICLE(uParam1->f_109, true);
		__LIB_5__::func_911(iParam0, &(uParam1->f_109));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109.f_12) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_109.f_12, false))
	{
		VEHICLE::SET_FORCE_HD_VEHICLE(uParam1->f_109.f_12, true);
		__LIB_5__::func_911(iParam0, &(uParam1->f_109.f_12));
	}
	iVar0 = 0;
	while (iVar0 < uParam1->f_109.f_1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109.f_1[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_109.f_1[iVar0], false))
			{
				__LIB_5__::func_911(iParam0, &(uParam1->f_109.f_1[iVar0]));
			}
		}
		iVar0++;
	}
	GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(uParam1->f_189[0 /*3*/], 1000f);
	if (!BitTest(uParam1->f_188, 6))
	{
		func_4358(uParam1, 1);
		VEHICLE::VEHICLE_SET_JET_WASH_FORCE_ENABLED(0);
		switch (__LIB_3__::func_616())
		{
			case 0:
				if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[0]))
				{
					if (__LIB_0__::func_121(uParam1->f_140[0]))
					{
						ENTITY::SET_ENTITY_COLLISION(uParam1->f_140[0], true, false);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam1->f_140[0]);
						__LIB_3__::func_525(uParam1->f_140[0], uParam1->f_189[4 /*3*/]);
						ENTITY::SET_ENTITY_HEADING(uParam1->f_140[0], uParam1->f_189[5 /*3*/].f_2);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uParam1->f_140[0], false, false);
					}
				}
				break;
			case 1:
				if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109))
				{
					if (__LIB_3__::func_690(uParam1->f_109))
					{
						__LIB_4__::func_703(&(uParam1->f_109), __LIB_6__::func_990(iParam0, 2, 0));
					}
					else
					{
						ENTITY::SET_ENTITY_COORDS(uParam1->f_109, uParam1->f_189[6 /*3*/], true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(uParam1->f_109, uParam1->f_189[7 /*3*/].f_2);
					}
					ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_109, false);
					ENTITY::SET_ENTITY_COLLISION(uParam1->f_109, true, false);
					ENTITY::SET_ENTITY_VISIBLE(uParam1->f_109, true, false);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam1->f_109, 5f);
					if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_109.f_12))
					{
						ENTITY::SET_ENTITY_VISIBLE(uParam1->f_109.f_12, true, false);
						ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_109.f_12, false);
						ENTITY::SET_ENTITY_COLLISION(uParam1->f_109.f_12, true, false);
						VEHICLE::ATTACH_VEHICLE_TO_TRAILER(uParam1->f_109, uParam1->f_109.f_12, 1f);
					}
				}
				break;
		}
		MISC::SET_BIT(&(uParam1->f_188), 6);
	}
	if (MISC::ARE_STRINGS_EQUAL(&(Global_1946250.f_3638.f_18[Global_1946250.f_3638.f_382 /*36*/].f_16), "BunkerDoorOpen"))
	{
		if (__LIB_3__::func_630(&(Global_1946250.f_3638), Global_1946250.f_3638.f_382))
		{
			if (!BitTest(uParam1->f_188, 14))
			{
				MISC::SET_BIT(&(uParam1->f_188), 14);
			}
		}
		switch (__LIB_3__::func_616())
		{
			case 0:
				if (!BitTest(uParam1->f_188, 5))
				{
					if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_140[0]) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_140[0], false))
					{
						TASK::TASK_GO_STRAIGHT_TO_COORD(uParam1->f_140[0], uParam1->f_28, 1f, -1, 40000f, 0.5f);
						MISC::SET_BIT(&(uParam1->f_188), 5);
					}
				}
				break;
		}
	}
	else if (MISC::ARE_STRINGS_EQUAL(&(Global_1946250.f_3638.f_18[Global_1946250.f_3638.f_382 /*36*/].f_16), "BunkerDoorEntryTopDriver"))
	{
		if (Global_1946250.f_3638.f_375 >= 850 && (VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(uParam1->f_109) || ENTITY::GET_ENTITY_MODEL(uParam1->f_109) == joaat("oppressor2")))
		{
			if (!BitTest(uParam1->f_188, 5))
			{
				sVar1 = __LIB_4__::func_702(iParam0);
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
				{
					TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(uParam1->f_109.f_1[0], uParam1->f_109, sVar1, 17047552, 0, 40, -1, -1f, false, 2f);
				}
				MISC::SET_BIT(&(uParam1->f_188), 5);
			}
			if (__LIB_3__::func_690(uParam1->f_109))
			{
				__LIB_7__::func_33(iParam0, &(uParam1->f_109));
			}
			else if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(uParam1->f_109))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_109) == joaat("oppressor2"))
				{
					TASK::VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(uParam1->f_109, 8f);
				}
				else
				{
					TASK::VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(uParam1->f_109, 5f);
				}
			}
		}
		bVar2 = BitTest(uParam1->f_188, 13);
		__LIB_4__::func_700(&(uParam1->f_109), uParam1->f_189[0 /*3*/], &(uParam1->f_183[2]), &bVar2);
		if (bVar2)
		{
			MISC::SET_BIT(&(uParam1->f_188), 13);
		}
	}
	if (BitTest(uParam1->f_188, 14))
	{
		__LIB_7__::func_66(iParam0, &(uParam1->f_176[0]), &(uParam1->f_183[0]), &(uParam1->f_188), 17, 18);
		if (!BitTest(uParam1->f_188, 16) && uParam1->f_183[0] == 1f)
		{
			if (CAM::DOES_CAM_EXIST(Global_1946250.f_3638.f_387))
			{
				CAM::SHAKE_CAM(Global_1946250.f_3638.f_387, "SMALL_EXPLOSION_SHAKE", 1f);
			}
			MISC::SET_BIT(&(uParam1->f_188), 16);
		}
	}
	if ((((Global_1946250.f_3638.f_386 && Global_1946250.f_3638.f_372 > 0) && Global_1946250.f_3638.f_382 == (Global_1946250.f_3638.f_372 - 1)) && (Global_1946250.f_3638.f_18[Global_1946250.f_3638.f_382 /*36*/] - Global_1946250.f_3638.f_375) <= 400) || !Global_1946250.f_3638.f_386)
	{
		VEHICLE::VEHICLE_SET_JET_WASH_FORCE_ENABLED(1);
		return 1;
	}
	return 0;
}

void func_4358(var uParam0, bool bParam1)//Position - 0x15FEA8
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_135)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_135[iVar0]) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_135[iVar0], false))
		{
			if (!ENTITY::IS_ENTITY_VISIBLE(uParam0->f_135[iVar0]))
			{
				ENTITY::SET_ENTITY_VISIBLE(uParam0->f_135[iVar0], bParam1, false);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_140)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_140[iVar0]) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_140[iVar0], false))
		{
			if (!ENTITY::IS_ENTITY_VISIBLE(uParam0->f_140[iVar0]))
			{
				ENTITY::SET_ENTITY_VISIBLE(uParam0->f_140[iVar0], bParam1, false);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_171)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_171[iVar0]) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_171[iVar0], false))
		{
			if (!ENTITY::IS_ENTITY_VISIBLE(uParam0->f_171[iVar0]))
			{
				ENTITY::SET_ENTITY_VISIBLE(uParam0->f_171[iVar0], bParam1, false);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_176)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_176[iVar0]) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_176[iVar0], false))
		{
			if (!ENTITY::IS_ENTITY_VISIBLE(uParam0->f_176[iVar0]))
			{
				ENTITY::SET_ENTITY_VISIBLE(uParam0->f_176[iVar0], bParam1, false);
			}
		}
		iVar0 = (iVar0 + 1);
	}
}

int func_4369(int iParam0, var uParam1)//Position - 0x160A1C
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
				func_1590(&(uParam1->f_140[0]), PLAYER::PLAYER_ID(), 1, 0);
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
								func_567(&iVar2, &(uParam1->f_109), 14);
								func_480(&(uParam1->f_248), &(uParam1->f_109.f_12), &(uParam1->f_140), 0, 0, 0, 0, 0, 1);
							}
						}
						else
						{
							func_567(&(uParam1->f_248), &(uParam1->f_109), 10);
						}
					}
					else
					{
						func_567(&(uParam1->f_248), &(uParam1->f_109), 10);
					}
				}
				else
				{
					func_567(&(uParam1->f_248), &(uParam1->f_109), 14);
					if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_249))
					{
						if (ENTITY::GET_ENTITY_MODEL(uParam1->f_249) == joaat("trailersmall2"))
						{
							func_480(&(uParam1->f_249), &(uParam1->f_109.f_12), &(uParam1->f_140), 0, 0, 0, 0, 0, 1);
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
				func_1590(&(uParam1->f_109.f_1[0]), PLAYER::PLAYER_ID(), 1, 0);
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

void func_4446(int iParam0, int iParam1)//Position - 0x164267
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
								if (((((!__LIB_1__::func_907(bVar7, 1) && !__LIB_5__::func_424(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar5[iVar2], true)) && !__LIB_1__::func_101(PLAYER::PLAYER_PED_ID())) && !__LIB_3__::func_728(bVar7, 14)) && !func_778(bVar7))
								{
									bVar0 = true;
								}
							}
						}
						if ((((((!bVar1 && __LIB_3__::func_360(PLAYER::PLAYER_ID(), bVar7)) && !__LIB_5__::func_424(bVar7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar5[iVar2], true)) && !__LIB_1__::func_101(PLAYER::PLAYER_PED_ID())) && !__LIB_3__::func_728(bVar7, 14)) && !func_778(bVar7))
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
						func_4447(iParam0);
					}
					else if (__LIB_3__::func_661(2, iParam1))
					{
						if (bVar0)
						{
							__LIB_7__::func_831(PLAYER::PLAYER_ID(), iParam0, 0f, 0f, 0f, 0, 0, 1, 0, -1, -1, -1);
						}
						func_4447(iParam0);
					}
					Jump @603; //curOff = 584
					__LIB_5__::func_189(iParam1, 1, 0);
					__LIB_5__::func_189(iParam1, 2, 0);
				}
void func_4447(int iParam0)//Position - 0x1644C5
{
	__LIB_9__::func_506(iParam0, -1);
	Global_1946250.f_504 = -1;
	__LIB_5__::func_947(1, iParam0);
	Global_1946250.f_3607 = 0;
	Global_1946250.f_3612 = 1;
}

void func_4498(var uParam0, int iParam1)//Position - 0x166B11
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1511175/*__LIB_5__::func_926*/;
			break;
		case 1:
			uParam0->f_30 = 1508856/*__LIB_6__::func_11*/;
			break;
		case 2:
			uParam0->f_31 = 1508793/*__LIB_5__::func_669*/;
			break;
		case 3:
			uParam0->f_34 = 1508737/*__LIB_4__::func_758*/;
			break;
		case 4:
			uParam0->f_12 = 1508021/*__LIB_4__::func_757*/;
			break;
		case 6:
			uParam0->f_32 = 1508013/*__LIB_0__::func_467*/;
			break;
		case 111:
			uParam0->f_35 = 1508004/*__LIB_0__::func_162*/;
			break;
		case 79:
			*uParam0 = 1507980/*__LIB_5__::func_265*/;
			break;
		case 11:
			uParam0->f_11 = 1507971/*__LIB_0__::func_109*/;
			break;
		case 12:
			uParam0->f_33 = 1506139/*__LIB_5__::func_668*/;
			break;
		case 14:
			uParam0->f_11 = 1506130/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 1506122/*__LIB_0__::func_467*/;
			break;
		case 13:
			uParam0->f_2 = 1506113/*__LIB_0__::func_109*/;
			break;
		case 15:
			uParam0->f_2 = 1506104/*__LIB_0__::func_109*/;
			break;
		case 75:
			uParam0->f_4 = 1506095/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1506086/*__LIB_0__::func_114*/;
			break;
		case 108:
			uParam0->f_55 = 1506077/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 1506051/*__LIB_5__::func_322*/;
			break;
		case 19:
			uParam0->f_17 = 1506039/*__LIB_3__::func_860*/;
			break;
		case 20:
			uParam0->f_3 = 1506030/*__LIB_0__::func_114*/;
			break;
		case 21:
			uParam0->f_3 = 1506021/*__LIB_0__::func_114*/;
			break;
		case 74:
			uParam0->f_53 = 1506012/*__LIB_0__::func_114*/;
			break;
		case 22:
			uParam0->f_24 = 1506004/*__LIB_0__::func_467*/;
			break;
		case 25:
			uParam0->f_23 = 1505996/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 1504835/*__LIB_5__::func_667*/;
			break;
		case 31:
			uParam0->f_39 = 1504823/*__LIB_3__::func_860*/;
			break;
		case 33:
			uParam0->f_40 = 1504795/*__LIB_4__::func_755*/;
			break;
		case 34:
			uParam0->f_41 = 1504786/*__LIB_0__::func_114*/;
			break;
		case 36:
			uParam0->f_58 = 1504741/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 1471047/*__LIB_5__::func_666*/;
			break;
		case 45:
			uParam0->f_14 = 1471038/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 1471029/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 1471021/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1471010/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1471002/*__LIB_0__::func_467*/;
			break;
		case 49:
			uParam0->f_8 = 1470993/*__LIB_0__::func_114*/;
			break;
		case 50:
			*uParam0 = 1470711/*__LIB_7__::func_34*/;
			break;
		case 51:
			*uParam0 = 1470682/*__LIB_4__::func_751*/;
			break;
		case 52:
			uParam0->f_15 = 1470651/*__LIB_4__::func_750*/;
			break;
		case 53:
			uParam0->f_13 = 1470617/*__LIB_5__::func_373*/;
			break;
		case 54:
			uParam0->f_45 = 1470573/*__LIB_4__::func_749*/;
			break;
		case 56:
			uParam0->f_46 = 1470544/*__LIB_4__::func_748*/;
			break;
		case 57:
			uParam0->f_11 = 1470535/*__LIB_0__::func_114*/;
			break;
		case 58:
			uParam0->f_13 = 1470478/*__LIB_5__::func_373*/;
			break;
		case 64:
			uParam0->f_47 = 1470470/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 1470462/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 1470454/*__LIB_0__::func_467*/;
			break;
		case 67:
			uParam0->f_21 = 1470446/*__LIB_0__::func_467*/;
			break;
		case 68:
			*uParam0 = 1470420/*__LIB_4__::func_746*/;
			break;
		case 69:
			*uParam0 = 1470394/*__LIB_4__::func_746*/;
			break;
		case 70:
			uParam0->f_48 = 1470382/*__LIB_3__::func_635*/;
			break;
		case 71:
			uParam0->f_49 = 1470373/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1470361/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1470352/*__LIB_0__::func_114*/;
			break;
		case 78:
			uParam0->f_59 = 1470344/*__LIB_0__::func_467*/;
			break;
		case 126:
			*uParam0 = 1470161/*__LIB_7__::func_855*/;
			break;
	}
}

void func_4575(var uParam0, int iParam1)//Position - 0x1713F8
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1555036/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1554726/*__LIB_4__::func_786*/;
			break;
		case 2:
			uParam0->f_31 = 1549791/*__LIB_5__::func_674*/;
			break;
		case 3:
			uParam0->f_34 = 1549762/*__LIB_4__::func_780*/;
			break;
		case 4:
			uParam0->f_12 = 1549568/*__LIB_4__::func_779*/;
			break;
		case 6:
			uParam0->f_32 = 1549218/*__LIB_4__::func_778*/;
			break;
		case 111:
			uParam0->f_35 = 1549076/*__LIB_5__::func_929*/;
			break;
		case 79:
			*uParam0 = 1549052/*__LIB_5__::func_265*/;
			break;
		case 37:
			uParam0->f_18 = 1548514/*__LIB_5__::func_673*/;
			break;
		case 38:
			uParam0->f_9 = 1548409/*__LIB_7__::func_823*/;
			break;
		case 11:
			uParam0->f_11 = 1548400/*__LIB_0__::func_109*/;
			break;
		case 12:
			uParam0->f_33 = 1548295/*__LIB_5__::func_672*/;
			break;
		case 14:
			uParam0->f_11 = 1548286/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 1548278/*__LIB_0__::func_467*/;
			break;
		case 13:
			uParam0->f_2 = 1548269/*__LIB_0__::func_114*/;
			break;
		case 44:
			*uParam0 = 1548260/*__LIB_0__::func_114*/;
			break;
		case 15:
			uParam0->f_2 = 1547971/*__LIB_9__::func_802*/;
			break;
		case 75:
			uParam0->f_4 = 1547962/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1547878/*__LIB_7__::func_39*/;
			break;
		case 108:
			uParam0->f_55 = 1547869/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 1547248/*__LIB_7__::func_859*/;
			break;
		case 19:
			uParam0->f_17 = 1547047/*__LIB_6__::func_12*/;
			break;
		case 20:
			uParam0->f_3 = 1546983/*__LIB_7__::func_768*/;
			break;
		case 21:
			uParam0->f_3 = 1546923/*__LIB_7__::func_37*/;
			break;
		case 74:
			uParam0->f_53 = 1546914/*__LIB_0__::func_109*/;
			break;
		case 22:
			uParam0->f_24 = 1546673/*__LIB_4__::func_777*/;
			break;
		case 25:
			uParam0->f_23 = 1546300/*func_4614*/;
			break;
		case 30:
			uParam0->f_8 = 1546162/*__LIB_7__::func_858*/;
			break;
		case 31:
			uParam0->f_39 = 1545720/*__LIB_7__::func_857*/;
			break;
		case 33:
			uParam0->f_40 = 1545055/*__LIB_7__::func_856*/;
			break;
		case 34:
			uParam0->f_41 = 1542477/*__LIB_4__::func_776*/;
			break;
		case 36:
			uParam0->f_58 = 1542432/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 1516591/*__LIB_4__::func_775*/;
			break;
		case 45:
			uParam0->f_14 = 1516363/*__LIB_4__::func_774*/;
			break;
		case 46:
			uParam0->f_14 = 1516187/*__LIB_4__::func_773*/;
			break;
		case 110:
			uParam0->f_57 = 1516179/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1516168/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1515926/*__LIB_4__::func_772*/;
			break;
		case 49:
			uParam0->f_8 = 1515894/*__LIB_4__::func_771*/;
			break;
		case 50:
			*uParam0 = 1515828/*__LIB_10__::func_5*/;
			break;
		case 51:
			*uParam0 = 1515804/*__LIB_6__::func_899*/;
			break;
		case 52:
			uParam0->f_15 = 1515621/*__LIB_4__::func_770*/;
			break;
		case 53:
			uParam0->f_13 = 1515026/*__LIB_5__::func_671*/;
			break;
		case 54:
			uParam0->f_45 = 1514789/*__LIB_4__::func_768*/;
			break;
		case 56:
			uParam0->f_46 = 1514780/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1514715/*__LIB_7__::func_35*/;
			break;
		case 58:
			uParam0->f_13 = 1514293/*__LIB_5__::func_375*/;
			break;
		case 64:
			uParam0->f_47 = 1514285/*__LIB_0__::func_467*/;
			break;
		case 65:
			uParam0->f_21 = 1514277/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 1514217/*__LIB_4__::func_767*/;
			break;
		case 67:
			uParam0->f_21 = 1514199/*__LIB_4__::func_766*/;
			break;
		case 68:
			*uParam0 = 1514190/*__LIB_0__::func_109*/;
			break;
		case 69:
			*uParam0 = 1514181/*__LIB_0__::func_109*/;
			break;
		case 70:
			uParam0->f_48 = 1513677/*__LIB_4__::func_765*/;
			break;
		case 71:
			uParam0->f_49 = 1513529/*__LIB_4__::func_764*/;
			break;
		case 107:
			uParam0->f_50 = 1513484/*__LIB_4__::func_763*/;
			break;
		case 80:
			uParam0->f_7 = 1513475/*__LIB_0__::func_114*/;
			break;
		case 78:
			uParam0->f_59 = 1513467/*__LIB_0__::func_467*/;
			break;
		case 125:
			uParam0->f_19 = 1513451/*__LIB_4__::func_516*/;
			break;
	}
}

void func_4614(int iParam0, int iParam1)//Position - 0x17983C
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
			if (((((bVar2 != __LIB_0__::func_162() && bVar2 != PLAYER::PLAYER_ID()) && __LIB_1__::func_693(bVar2, 1, 1)) && !__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar2))) && !__LIB_3__::func_728(bVar2, 14)) && !func_778(bVar2))
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

void func_4652(var uParam0, int iParam1)//Position - 0x17BA65
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1589981/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1589871/*__LIB_4__::func_833*/;
			break;
		case 2:
			uParam0->f_31 = 1587416/*__LIB_5__::func_686*/;
			break;
		case 3:
			uParam0->f_34 = 1587387/*__LIB_4__::func_780*/;
			break;
		case 4:
			uParam0->f_12 = 1587227/*__LIB_4__::func_828*/;
			break;
		case 6:
			uParam0->f_32 = 1587109/*__LIB_4__::func_827*/;
			break;
		case 111:
			uParam0->f_35 = 1586892/*__LIB_6__::func_20*/;
			break;
		case 79:
			*uParam0 = 1586868/*__LIB_5__::func_265*/;
			break;
		case 37:
			uParam0->f_18 = 1586748/*__LIB_4__::func_826*/;
			break;
		case 38:
			uParam0->f_9 = 1586597/*__LIB_6__::func_404*/;
			break;
		case 11:
			uParam0->f_11 = 1586588/*__LIB_1__::func_806*/;
			break;
		case 12:
			uParam0->f_33 = 1585585/*__LIB_5__::func_684*/;
			break;
		case 14:
			uParam0->f_11 = 1585576/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 1585568/*__LIB_0__::func_467*/;
			break;
		case 13:
			uParam0->f_2 = 1585559/*__LIB_0__::func_114*/;
			break;
		case 15:
			uParam0->f_2 = 1585405/*__LIB_9__::func_803*/;
			break;
		case 75:
			uParam0->f_4 = 1585396/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1585308/*__LIB_7__::func_40*/;
			break;
		case 108:
			uParam0->f_55 = 1584521/*__LIB_6__::func_430*/;
			break;
		case 17:
			uParam0->f_17 = 1583892/*__LIB_7__::func_69*/;
			break;
		case 19:
			uParam0->f_17 = 1583865/*__LIB_6__::func_18*/;
			break;
		case 20:
			uParam0->f_3 = 1583826/*__LIB_5__::func_820*/;
			break;
		case 21:
			uParam0->f_3 = 1583766/*__LIB_5__::func_933*/;
			break;
		case 74:
			uParam0->f_53 = 1583757/*__LIB_0__::func_109*/;
			break;
		case 22:
			uParam0->f_24 = 1583704/*__LIB_5__::func_682*/;
			break;
		case 25:
			uParam0->f_23 = 1583400/*func_4739*/;
			break;
		case 30:
			uParam0->f_8 = 1583277/*__LIB_7__::func_861*/;
			break;
		case 31:
			uParam0->f_39 = 1583056/*__LIB_5__::func_765*/;
			break;
		case 33:
			uParam0->f_40 = 1582771/*__LIB_5__::func_932*/;
			break;
		case 34:
			uParam0->f_41 = 1582365/*__LIB_4__::func_822*/;
			break;
		case 36:
			uParam0->f_58 = 1582320/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 1564788/*__LIB_4__::func_821*/;
			break;
		case 45:
			uParam0->f_14 = 1564779/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 1564695/*__LIB_4__::func_820*/;
			break;
		case 110:
			uParam0->f_57 = 1564687/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1564664/*__LIB_4__::func_819*/;
			break;
		case 47:
			uParam0->f_43 = 1564612/*__LIB_4__::func_818*/;
			break;
		case 49:
			uParam0->f_8 = 1564580/*__LIB_4__::func_771*/;
			break;
		case 50:
			*uParam0 = 1564402/*__LIB_8__::func_977*/;
			break;
		case 51:
			*uParam0 = 1564305/*__LIB_9__::func_319*/;
			break;
		case 52:
			uParam0->f_15 = 1564294/*__LIB_4__::func_817*/;
			break;
		case 53:
			uParam0->f_13 = 1563979/*__LIB_5__::func_681*/;
			break;
		case 54:
			uParam0->f_45 = 1563114/*__LIB_9__::func_318*/;
			break;
		case 56:
			uParam0->f_46 = 1563105/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1558298/*__LIB_9__::func_325*/;
			break;
		case 58:
			uParam0->f_13 = 1558284/*__LIB_6__::func_14*/;
			break;
		case 64:
			uParam0->f_47 = 1556879/*__LIB_9__::func_777*/;
			break;
		case 65:
			uParam0->f_21 = 1556871/*__LIB_0__::func_467*/;
			break;
		case 66:
			uParam0->f_21 = 1556820/*__LIB_4__::func_790*/;
			break;
		case 67:
			uParam0->f_21 = 1556792/*__LIB_4__::func_789*/;
			break;
		case 68:
			*uParam0 = 1556783/*__LIB_0__::func_109*/;
			break;
		case 69:
			*uParam0 = 1556774/*__LIB_0__::func_109*/;
			break;
		case 70:
			uParam0->f_48 = 1556490/*__LIB_4__::func_788*/;
			break;
		case 71:
			uParam0->f_49 = 1556393/*__LIB_4__::func_787*/;
			break;
		case 107:
			uParam0->f_50 = 1556381/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1556195/*__LIB_5__::func_930*/;
			break;
		case 78:
			uParam0->f_59 = 1556023/*__LIB_6__::func_13*/;
			break;
	}
}

void func_4739(int iParam0, int iParam1)//Position - 0x182928
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
			if (((((bVar2 != __LIB_0__::func_162() && bVar2 != PLAYER::PLAYER_ID()) && __LIB_1__::func_693(bVar2, 1, 1)) && !__LIB_1__::func_101(PLAYER::GET_PLAYER_PED(bVar2))) && !__LIB_3__::func_728(bVar2, 14)) && !func_778(bVar2))
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

void func_4783(var uParam0, int iParam1)//Position - 0x1842E6
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1617179/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_30 = 1617033/*__LIB_5__::func_822*/;
			break;
		case 2:
			uParam0->f_31 = 1611845/*__LIB_6__::func_348*/;
			break;
		case 3:
			uParam0->f_34 = 1611816/*__LIB_4__::func_780*/;
			break;
		case 4:
			uParam0->f_12 = 1611405/*__LIB_5__::func_692*/;
			break;
		case 6:
			uParam0->f_32 = 1611235/*__LIB_5__::func_821*/;
			break;
		case 111:
			uParam0->f_35 = 1610840/*__LIB_5__::func_691*/;
			break;
		case 79:
			*uParam0 = 1610816/*__LIB_5__::func_265*/;
			break;
		case 11:
			uParam0->f_11 = 1610807/*__LIB_0__::func_109*/;
			break;
		case 12:
			uParam0->f_33 = 1610712/*__LIB_5__::func_690*/;
			break;
		case 14:
			uParam0->f_11 = 1610703/*__LIB_0__::func_162*/;
			break;
		case 109:
			uParam0->f_56 = 1610695/*__LIB_0__::func_467*/;
			break;
		case 13:
			uParam0->f_2 = 1610686/*__LIB_0__::func_114*/;
			break;
		case 15:
			uParam0->f_2 = 1610401/*__LIB_10__::func_63*/;
			break;
		case 75:
			uParam0->f_4 = 1610392/*__LIB_0__::func_114*/;
			break;
		case 16:
			uParam0->f_5 = 1610304/*__LIB_7__::func_42*/;
			break;
		case 108:
			uParam0->f_55 = 1610295/*__LIB_0__::func_114*/;
			break;
		case 17:
			uParam0->f_17 = 1610041/*__LIB_7__::func_825*/;
			break;
		case 19:
			uParam0->f_17 = 1610014/*__LIB_6__::func_22*/;
			break;
		case 20:
			uParam0->f_3 = 1610005/*__LIB_0__::func_114*/;
			break;
		case 21:
			uParam0->f_3 = 1609996/*__LIB_0__::func_114*/;
			break;
		case 74:
			uParam0->f_53 = 1609987/*__LIB_0__::func_114*/;
			break;
		case 22:
			uParam0->f_24 = 1609979/*__LIB_0__::func_467*/;
			break;
		case 25:
			uParam0->f_23 = 1609971/*__LIB_0__::func_467*/;
			break;
		case 30:
			uParam0->f_8 = 1609848/*__LIB_7__::func_863*/;
			break;
		case 31:
			uParam0->f_39 = 1609601/*__LIB_7__::func_824*/;
			break;
		case 33:
			uParam0->f_40 = 1609345/*__LIB_6__::func_347*/;
			break;
		case 34:
			uParam0->f_41 = 1607361/*__LIB_5__::func_936*/;
			break;
		case 36:
			uParam0->f_58 = 1607316/*__LIB_3__::func_667*/;
			break;
		case 35:
			uParam0->f_42 = 1592868/*__LIB_4__::func_838*/;
			break;
		case 45:
			uParam0->f_14 = 1592859/*__LIB_0__::func_162*/;
			break;
		case 46:
			uParam0->f_14 = 1592850/*__LIB_0__::func_162*/;
			break;
		case 110:
			uParam0->f_57 = 1592842/*__LIB_0__::func_467*/;
			break;
		case 77:
			uParam0->f_13 = 1592831/*__LIB_3__::func_554*/;
			break;
		case 47:
			uParam0->f_43 = 1592779/*__LIB_4__::func_837*/;
			break;
		case 49:
			uParam0->f_8 = 1592747/*__LIB_4__::func_771*/;
			break;
		case 50:
			*uParam0 = 1592618/*__LIB_7__::func_41*/;
			break;
		case 51:
			*uParam0 = 1592594/*__LIB_6__::func_899*/;
			break;
		case 52:
			uParam0->f_15 = 1592583/*__LIB_4__::func_270*/;
			break;
		case 53:
			uParam0->f_13 = 1591932/*__LIB_5__::func_689*/;
			break;
		case 54:
			uParam0->f_45 = 1591720/*__LIB_7__::func_862*/;
			break;
		case 56:
			uParam0->f_46 = 1591711/*__LIB_3__::func_939*/;
			break;
		case 57:
			uParam0->f_11 = 1591644/*__LIB_6__::func_779*/;
			break;
		case 58:
			uParam0->f_13 = 1591630/*__LIB_6__::func_21*/;
			break;
		case 64:
			uParam0->f_47 = 1591251/*__LIB_5__::func_387*/;
			break;
		case 65:
			uParam0->f_21 = 1591176/*__LIB_5__::func_687*/;
			break;
		case 66:
			uParam0->f_21 = 1591125/*__LIB_4__::func_835*/;
			break;
		case 67:
			uParam0->f_21 = 1591107/*__LIB_4__::func_766*/;
			break;
		case 68:
			*uParam0 = 1591098/*__LIB_0__::func_109*/;
			break;
		case 69:
			*uParam0 = 1591089/*__LIB_0__::func_109*/;
			break;
		case 70:
			uParam0->f_48 = 1590972/*__LIB_4__::func_834*/;
			break;
		case 71:
			uParam0->f_49 = 1590963/*__LIB_0__::func_114*/;
			break;
		case 107:
			uParam0->f_50 = 1590951/*__LIB_3__::func_635*/;
			break;
		case 80:
			uParam0->f_7 = 1590942/*__LIB_0__::func_114*/;
			break;
		case 78:
			uParam0->f_59 = 1590934/*__LIB_0__::func_467*/;
			break;
	}
}

void func_4852(var uParam0, int iParam1)//Position - 0x18AD24
{
	switch (iParam1)
	{
		case 96:
			uParam0->f_1 = 1617646/*__LIB_0__::func_114*/;
			break;
		case 97:
			uParam0->f_1 = 1617637/*__LIB_0__::func_109*/;
			break;
		case 98:
			uParam0->f_1 = 1617628/*__LIB_0__::func_109*/;
			break;
		case 99:
			uParam0->f_1 = 1617468/*__LIB_5__::func_390*/;
			break;
		case 100:
			uParam0->f_22 = 1617460/*__LIB_0__::func_467*/;
			break;
		case 101:
			uParam0->f_22 = 1617305/*__LIB_8__::func_991*/;
			break;
	}
}

void func_4860(var uParam0, int iParam1)//Position - 0x18AEF7
{
	switch (iParam1)
	{
		case 90:
			uParam0->f_1 = 1617863/*__LIB_0__::func_114*/;
			break;
		case 91:
			uParam0->f_1 = 1617854/*__LIB_0__::func_109*/;
			break;
		case 92:
			uParam0->f_1 = 1617845/*__LIB_0__::func_109*/;
			break;
		case 93:
			uParam0->f_1 = 1617468/*__LIB_5__::func_390*/;
			break;
		case 94:
			uParam0->f_1 = 1617836/*__LIB_0__::func_109*/;
			break;
		case 95:
			uParam0->f_22 = 1617772/*__LIB_8__::func_991*/;
			break;
	}
}

void func_4866(var uParam0, int iParam1)//Position - 0x18AFD0
{
	switch (iParam1)
	{
		case 84:
			uParam0->f_1 = 1618090/*__LIB_0__::func_109*/;
			break;
		case 85:
			uParam0->f_1 = 1618081/*__LIB_0__::func_109*/;
			break;
		case 86:
			uParam0->f_1 = 1617468/*__LIB_5__::func_390*/;
			break;
		case 87:
			uParam0->f_1 = 1618072/*__LIB_0__::func_109*/;
			break;
		case 89:
			uParam0->f_54 = 1617972/*__LIB_8__::func_992*/;
			break;
	}
}

bool func_4876(int* iParam0)//Position - 0x18B2D2
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	if ((Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 == __LIB_0__::func_162() || !__LIB_3__::func_654(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9)) || __LIB_3__::func_622(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_715))
	{
		if (__LIB_0__::func_799(joaat("sm_prop_smug_wall_radio_01")))
		{
			if (NETWORK::CAN_REGISTER_MISSION_ENTITIES(0, 0, 1, 0))
			{
				iVar0 = __LIB_2__::func_717(PLAYER::PLAYER_ID());
				Var1 = { func_4877(7.44543f, -9.89069f, 4.918f, iVar0) };
				fVar2 = func_362(270f, iVar0);
				iParam0->f_715 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("sm_prop_smug_wall_radio_01"), Var1, false, true, false);
				ENTITY::SET_ENTITY_ROTATION(iParam0->f_715, 0f, 0f, fVar2, 2, true);
			}
		}
	}
	return ENTITY::DOES_ENTITY_EXIST(iParam0->f_715);
}

Vector3 func_4877(struct<3> Param0, int iParam1)//Position - 0x18B3A0
{
	struct<3> Var0;
	float fVar1;
	var uVar2;
	func_363(iParam1, &uVar2, &Var0, &fVar1, 0);
	return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0, fVar1, Param0);
}

int func_4888(int* iParam0, int* iParam1, var uParam2)//Position - 0x18B813
{
	int iVar0;
	int iVar1;
	if (__LIB_7__::func_690(PLAYER::PLAYER_ID()))
	{
		iParam1->f_720[0 /*6*/] = { 1564.025f, 385.89822f, -54.286575f };
		iParam1->f_720[0 /*6*/].f_3 = { 1562.7042f, 385.92056f, -52.289154f };
		iParam1->f_751[0 /*6*/] = { 1563.636f, 385.864f, -53.2888f };
		iParam1->f_751[0 /*6*/].f_3 = { 0f, 0f, 180f };
		return 1;
	}
	if (__LIB_5__::func_186(PLAYER::PLAYER_ID()))
	{
		iParam1->f_720[0 /*6*/] = { -1355.7406f, 150.00829f, -100.19437f };
		iParam1->f_720[0 /*6*/].f_3 = { -1355.7299f, 151.19484f, -98.19437f };
		iParam1->f_751[0 /*6*/] = { -1355.925f, 150.166f, -99.157f };
		iParam1->f_751[0 /*6*/].f_3 = { 0f, 0f, 90f };
		return 1;
	}
	if (__LIB_6__::func_938(PLAYER::PLAYER_ID()))
	{
		iParam1->f_720[0 /*6*/] = { -2168.3699f, 1110.7686f, -25.370466f };
		iParam1->f_720[0 /*6*/].f_3 = { -2168.3682f, 1111.3265f, -23.370487f };
		iParam1->f_751[0 /*6*/] = { -2168.397f, 1111.525f, -24.35f };
		iParam1->f_751[0 /*6*/].f_3 = { 0f, 0f, -90f };
		return 1;
	}
	if (__LIB_3__::func_533(PLAYER::PLAYER_ID()))
	{
		iParam1->f_720[0 /*6*/] = { -32.76309f, -1100.4547f, 25.540852f };
		iParam1->f_720[0 /*6*/].f_3 = { -33.93603f, -1100.0398f, 27.672344f };
		iParam1->f_751[0 /*6*/] = { (-33.137f + 0.1695f), (-1100.455f + 0.4929f), 26.459f };
		iParam1->f_751[0 /*6*/].f_3 = { 0f, 0f, -110f };
		return 1;
	}
	if (__LIB_5__::func_188(PLAYER::PLAYER_ID()))
	{
		iVar0 = __LIB_2__::func_717(PLAYER::PLAYER_ID());
		iParam1->f_720[0 /*6*/] = { func_4877(6.91971f, -9.33882f, 3.8003f, iVar0) };
		iParam1->f_720[0 /*6*/].f_3 = { func_4877(6.92308f, -10.4297f, 5.8003f, iVar0) };
		iParam1->f_751[0 /*6*/] = { func_4877(7.15299f, -9.45153f, 4.825f, iVar0) };
		iParam1->f_751[0 /*6*/].f_3 = { 0f, 0f, func_362(265.40198f, iVar0) };
		iParam1->f_720[1 /*6*/] = { func_4877(-11.4769f, 11.5415f, 8.67532f, iVar0) };
		iParam1->f_720[1 /*6*/].f_3 = { func_4877(-10.3667f, 11.5237f, 10.6f, iVar0) };
		iParam1->f_751[1 /*6*/] = { func_4877(-11.5705f, 12.0834f, 9.637f, iVar0) };
		iParam1->f_751[1 /*6*/].f_3 = { 0f, 0f, func_362(358.4f, iVar0) };
		iParam1->f_720[2 /*6*/] = { func_4877(7.80937f, -0.0539093f, 8.84151f, iVar0) };
		iParam1->f_720[2 /*6*/].f_3 = { func_4877(8.7156f, -0.0429809f, 10.8415f, iVar0) };
		iParam1->f_751[2 /*6*/] = { func_4877(7.81505f, 0.635223f, 9.637f, iVar0) };
		iParam1->f_751[2 /*6*/].f_3 = { 0f, 0f, func_362(353.36f, iVar0) };
		return 1;
	}
	if (iParam1->f_803)
	{
		iParam1->f_720[0 /*6*/] = { 975.5175f, 68.74093f, 115.164154f };
		iParam1->f_720[0 /*6*/].f_3 = { 974.67676f, 69.27211f, 117.164154f };
		iParam1->f_751[0 /*6*/] = { 975.5f, 68.72f, 116.1848f };
		iParam1->f_751[0 /*6*/].f_3 = { 0f, 0f, 148.5f };
		return 1;
	}
	if (iParam1->f_804)
	{
		iParam1->f_720[0 /*6*/] = { 947.8148f, 5.245894f, 115.164215f };
		iParam1->f_720[0 /*6*/].f_3 = { 948.9196f, 4.532114f, 117.164215f };
		iParam1->f_751[0 /*6*/] = { 948.303f, 5.233f, 116.1848f };
		iParam1->f_751[0 /*6*/].f_3 = { 0f, 0f, -32f };
		return 1;
	}
	if (__LIB_6__::func_846(PLAYER::PLAYER_ID()))
	{
		iParam1->f_720[0 /*6*/] = { -1237.8107f, -3008.2222f, -43.88727f };
		iParam1->f_720[0 /*6*/].f_3 = { -1237.7975f, -3009.318f, -42.13727f };
		iParam1->f_751[0 /*6*/] = { -1237.647f, -3008.303f, -42.875f };
		iParam1->f_751[0 /*6*/].f_3 = { 0f, 0f, -88.92f };
		if (__LIB_9__::func_697(iParam1->f_711))
		{
			iParam1->f_720[1 /*6*/] = { -1236.2931f, -2982.6838f, -42.26361f };
			iParam1->f_720[1 /*6*/].f_3 = { -1236.3151f, -2981.6462f, -39.76361f };
			iParam1->f_751[1 /*6*/] = { -1236.553f, -2982.447f, -41.25f };
			iParam1->f_751[1 /*6*/].f_3 = { 0f, 0f, 83.16f };
		}
		return 1;
	}
	if ((((((((!__LIB_7__::func_685(uParam2->f_31) && !__LIB_7__::func_686(uParam2->f_31, -1)) && !__LIB_7__::func_687(uParam2->f_31)) && !iParam1->f_794) && !__LIB_1__::func_597(uParam2->f_31)) && !__LIB_8__::func_260(PLAYER::PLAYER_ID())) && !__LIB_8__::func_259(PLAYER::PLAYER_ID())) && !__LIB_7__::func_726(PLAYER::PLAYER_ID())) && !__LIB_4__::func_955(PLAYER::PLAYER_ID()))
	{
		switch (uParam2->f_33)
		{
			case 10:
				if (!BitTest(*iParam0, 0))
				{
					if (__LIB_7__::func_688(uParam2->f_31))
					{
						__LIB_8__::func_950(uParam2->f_31, 102, 103, 182, &(iParam1->f_751[0 /*6*/]), &(iParam1->f_720[0 /*6*/]), 61, 0);
						__LIB_8__::func_950(uParam2->f_31, 104, 105, 183, &(iParam1->f_751[1 /*6*/]), &(iParam1->f_720[1 /*6*/]), 61, 0);
						iParam1->f_782 = "anim@mp_radio@high_life_apment";
					}
					else
					{
						__LIB_8__::func_950(uParam2->f_31, 102, 103, 182, &(iParam1->f_751[0 /*6*/]), &(iParam1->f_720[0 /*6*/]), -1, 0);
						__LIB_8__::func_950(uParam2->f_31, 104, 105, 183, &(iParam1->f_751[1 /*6*/]), &(iParam1->f_720[1 /*6*/]), -1, 0);
					}
					if (__LIB_7__::func_688(uParam2->f_31))
					{
						__LIB_8__::func_950(uParam2->f_31, 169, 170, 181, &(iParam1->f_751[2 /*6*/]), &(iParam1->f_720[2 /*6*/]), 61, 0);
					}
					else
					{
						__LIB_8__::func_950(uParam2->f_31, 169, 170, 181, &(iParam1->f_751[2 /*6*/]), &(iParam1->f_720[2 /*6*/]), -1, 0);
					}
				}
				break;
			case 20:
				__LIB_8__::func_950(uParam2->f_31, 102, 103, 182, &(iParam1->f_751[0 /*6*/]), &(iParam1->f_720[0 /*6*/]), __LIB_2__::func_681(uParam2->f_31), 1);
				break;
		}
	}
	else if (__LIB_7__::func_686(uParam2->f_31, -1))
	{
		__LIB_8__::func_950(uParam2->f_31, 102, 103, 182, &(iParam1->f_751[0 /*6*/]), &(iParam1->f_720[0 /*6*/]), __LIB_2__::func_681(uParam2->f_31), 0);
		__LIB_8__::func_950(uParam2->f_31, 104, 105, 183, &(iParam1->f_751[1 /*6*/]), &(iParam1->f_720[1 /*6*/]), __LIB_2__::func_681(uParam2->f_31), 0);
		__LIB_8__::func_950(uParam2->f_31, 169, 170, 181, &(iParam1->f_751[2 /*6*/]), &(iParam1->f_720[2 /*6*/]), __LIB_2__::func_681(uParam2->f_31), 0);
	}
	else if (__LIB_7__::func_687(uParam2->f_31))
	{
		__LIB_8__::func_950(uParam2->f_31, 501, 502, 500, &(iParam1->f_751[0 /*6*/]), &(iParam1->f_720[0 /*6*/]), __LIB_2__::func_681(uParam2->f_31), 0);
		__LIB_8__::func_950(uParam2->f_31, 102, 103, 182, &(iParam1->f_751[3 /*6*/]), &(iParam1->f_720[3 /*6*/]), __LIB_2__::func_681(uParam2->f_31), 0);
		__LIB_8__::func_950(uParam2->f_31, 104, 105, 183, &(iParam1->f_751[1 /*6*/]), &(iParam1->f_720[1 /*6*/]), __LIB_2__::func_681(uParam2->f_31), 0);
		__LIB_8__::func_950(uParam2->f_31, 169, 170, 181, &(iParam1->f_751[2 /*6*/]), &(iParam1->f_720[2 /*6*/]), __LIB_2__::func_681(uParam2->f_31), 0);
	}
	else if (__LIB_1__::func_597(uParam2->f_31))
	{
		__LIB_8__::func_950(uParam2->f_31, 102, 103, 182, &(iParam1->f_751[0 /*6*/]), &(iParam1->f_720[0 /*6*/]), __LIB_2__::func_681(uParam2->f_31), 0);
	}
	else if (__LIB_8__::func_260(PLAYER::PLAYER_ID()))
	{
		if (iParam1->f_712 == 111)
		{
			iParam1->f_720[0 /*6*/] = { 994.93787f, -3097.3074f, -39.990833f };
			iParam1->f_720[0 /*6*/] = { 994.93463f, -3098.5415f, -38.240833f };
			iParam1->f_751[0 /*6*/] = { 995.367f, -3097.48f, -39.115f };
			iParam1->f_751[0 /*6*/].f_3 = { 0f, 0f, -92.843f };
		}
		else if (iParam1->f_712 == 42)
		{
			iParam1->f_720[0 /*6*/] = { 1049.198f, -3100.0767f, -39.99993f };
			iParam1->f_720[0 /*6*/] = { 1049.1685f, -3099.13f, -38.24993f };
			iParam1->f_751[0 /*6*/] = { 1048.582f, -3100.444f, -39.115f };
			iParam1->f_751[0 /*6*/].f_3 = { 0f, 0f, 84.6f };
		}
		else if (iParam1->f_712 == 16)
		{
			iParam1->f_720[0 /*6*/] = { 1088.6151f, -3100.9316f, -39.99993f };
			iParam1->f_720[0 /*6*/] = { 1088.6193f, -3099.9568f, -38.24993f };
			iParam1->f_751[0 /*6*/] = { 1088.011f, -3100.987f, -39.125f };
			iParam1->f_751[0 /*6*/].f_3 = { 0f, 0f, 88.2f };
		}
	}
	else if (__LIB_7__::func_726(PLAYER::PLAYER_ID()))
	{
		iParam1->f_720[0 /*6*/] = { 965.73f, -2991.764f, -40.59f };
		iParam1->f_720[0 /*6*/] = { 965.73f, -2990.864f, -38.79f };
		iParam1->f_751[0 /*6*/] = { 965.89f, -2991.614f, -39.67f };
		iParam1->f_751[0 /*6*/].f_3 = { 0f, 0f, 86.76f };
	}
	else if (__LIB_7__::func_685(uParam2->f_31) && !iParam1->f_794)
	{
		iVar1 = iParam1->f_796;
		if (iVar1 == -1)
		{
			return 0;
		}
		__LIB_8__::func_897(iParam1->f_796, 102, 103, 182, &(iParam1->f_751[0 /*6*/]), &(iParam1->f_720[0 /*6*/]), 0);
		__LIB_8__::func_897(iParam1->f_796, 104, 105, 183, &(iParam1->f_751[1 /*6*/]), &(iParam1->f_720[1 /*6*/]), 0);
		__LIB_8__::func_897(iParam1->f_796, 169, 170, 181, &(iParam1->f_751[2 /*6*/]), &(iParam1->f_720[2 /*6*/]), 0);
		__LIB_8__::func_897(iParam1->f_796, 588, 587, 589, &(iParam1->f_751[3 /*6*/]), &(iParam1->f_720[3 /*6*/]), 0);
		__LIB_8__::func_897(iParam1->f_796, 591, 590, 592, &(iParam1->f_751[4 /*6*/]), &(iParam1->f_720[4 /*6*/]), 0);
	}
	else if (iParam1->f_794)
	{
		if (iParam1->f_796 == -1)
		{
			return 0;
		}
		__LIB_8__::func_897(iParam1->f_796, 555, 556, 554, &(iParam1->f_751[0 /*6*/]), &(iParam1->f_720[0 /*6*/]), 0);
		__LIB_8__::func_897(iParam1->f_796, 594, 593, 554, &(iParam1->f_751[1 /*6*/]), &(iParam1->f_720[1 /*6*/]), 0);
		__LIB_8__::func_897(iParam1->f_796, 596, 595, 554, &(iParam1->f_751[2 /*6*/]), &(iParam1->f_720[2 /*6*/]), 0);
	}
	return 1;
}

void func_4917(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)//Position - 0x18EC44
{
	bool bVar0;
	struct<3> Var1;
	if (iParam4 && !func_4918(iParam0))
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

int func_4918(int iParam0)//Position - 0x18ED29
{
	int iVar0;
	func_4919(iParam0, &iVar0, 0);
	if (iVar0 != 0)
	{
		Call_Loc(iVar0);
		return StackVal;
	}
	return 0;
}

void func_4919(int iParam0, var uParam1, int iParam2)//Position - 0x18ED47
{
	switch (iParam0)
	{
		case 0:
			func_5691(uParam1, iParam2);
			break;
		case 1:
			func_5641(uParam1, iParam2);
			break;
		case 2:
			func_5350(uParam1, iParam2);
			break;
		case 3:
			func_5283(uParam1, iParam2);
			break;
		case 4:
			func_5233(uParam1, iParam2);
			break;
		case 5:
			func_5176(uParam1, iParam2);
			break;
		case 6:
			func_5109(uParam1, iParam2);
			break;
		case 7:
		case 8:
		case 9:
		case 10:
			func_5043(uParam1, iParam2);
			break;
		case 11:
			func_5009(uParam1, iParam2);
			break;
		case 12:
			func_4979(uParam1, iParam2);
			break;
		case 13:
			func_4920(uParam1, iParam2);
			break;
	}
}

void func_4920(var uParam0, int iParam1)//Position - 0x18EE23
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1642193/*__LIB_11__::func_792*/;
			break;
		case 1:
			uParam0->f_1 = 1642184/*__LIB_0__::func_109*/;
			break;
		case 2:
			uParam0->f_2 = 1642013/*func_4975*/;
			break;
		case 3:
			uParam0->f_3 = 1642004/*__LIB_0__::func_114*/;
			break;
		case 4:
			uParam0->f_4 = 1641995/*__LIB_1__::func_804*/;
			break;
		case 5:
			uParam0->f_5 = 1641875/*func_4971*/;
			break;
		case 6:
			uParam0->f_6 = 1641866/*__LIB_1__::func_806*/;
			break;
		case 9:
			uParam0->f_9 = 1639748/*func_4959*/;
			break;
		case 10:
			uParam0->f_10 = 1639577/*func_4958*/;
			break;
		case 11:
			uParam0->f_11 = 1638654/*__LIB_10__::func_700*/;
			break;
		case 14:
			uParam0->f_14 = 1638640/*__LIB_11__::func_791*/;
			break;
		case 7:
			uParam0->f_7 = 1638629/*__LIB_3__::func_554*/;
			break;
		case 8:
			uParam0->f_8 = 1638620/*__LIB_7__::func_239*/;
			break;
		case 16:
			uParam0->f_16 = 1638562/*__LIB_8__::func_398*/;
			break;
		case 17:
			uParam0->f_17 = 1638400/*__LIB_8__::func_410*/;
			break;
		case 18:
			uParam0->f_18 = 1638341/*__LIB_9__::func_859*/;
			break;
		case 19:
			uParam0->f_19 = 1638206/*func_4944*/;
			break;
		case 21:
			uParam0->f_21 = 1638060/*__LIB_9__::func_858*/;
			break;
		case 29:
			uParam0->f_29 = 1637966/*__LIB_9__::func_138*/;
			break;
		case 34:
			uParam0->f_30 = 1637849/*__LIB_9__::func_52*/;
			break;
		case 23:
			uParam0->f_22 = 1637785/*__LIB_8__::func_408*/;
			break;
		case 22:
			uParam0->f_23 = 1637602/*__LIB_9__::func_76*/;
			break;
		case 24:
			uParam0->f_24 = 1637374/*func_4936*/;
			break;
		case 25:
			uParam0->f_25 = 1637046/*func_4934*/;
			break;
		case 26:
			uParam0->f_26 = 1636356/*func_4932*/;
			break;
		case 35:
			uParam0->f_35 = 1634283/*func_4921*/;
			break;
	}
}

void func_4921(var uParam0, var uParam1)//Position - 0x18EFEB
{
	char* sVar0;
	int iVar1;
	int iVar2;
	if (__LIB_9__::func_51(&((uParam0[0 /*50*/])->f_11), 58))
	{
		__LIB_9__::func_50(&((uParam0[0 /*50*/])->f_11), 58);
		__LIB_9__::func_137(&((uParam0[0 /*50*/])->f_11), 59);
		if ((uParam0[0 /*50*/])->f_26 == 421 || (uParam0[0 /*50*/])->f_26 == 422)
		{
			__LIB_9__::func_137(&((uParam0[0 /*50*/])->f_14), 0);
			return;
		}
		if (__LIB_0__::func_121((*uParam0)[0 /*50*/]))
		{
			__LIB_9__::func_136((*uParam0)[0 /*50*/]);
			__LIB_9__::func_137(&((uParam0[0 /*50*/])->f_14), 2);
			__LIB_0__::func_795(&(uParam0->f_8661), 0, 0);
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				uParam1->f_1 = -1;
			}
		}
	}
	if (__LIB_9__::func_51(&((uParam0[0 /*50*/])->f_14), 0))
	{
		if (__LIB_0__::func_121((*uParam0)[0 /*50*/]))
		{
			if (func_4924())
			{
				sVar0 = "AMB@WORLD_HUMAN_STAND_MOBILE@FEMALE@TEXT@EXIT";
			}
			else
			{
				sVar0 = "AMB@WORLD_HUMAN_STAND_MOBILE@MALE@TEXT@EXIT";
			}
			STREAMING::REQUEST_ANIM_DICT(sVar0);
			if (STREAMING::HAS_ANIM_DICT_LOADED(sVar0))
			{
				TASK::TASK_PLAY_ANIM((*uParam0)[0 /*50*/], sVar0, "exit", 4f, -4f, -1, 0, 0f, false, false, false);
				__LIB_9__::func_50(&((uParam0[0 /*50*/])->f_14), 0);
				__LIB_9__::func_137(&((uParam0[0 /*50*/])->f_14), 1);
				return;
			}
		}
	}
	if (__LIB_9__::func_51(&((uParam0[0 /*50*/])->f_14), 1))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS((*uParam0)[0 /*50*/], joaat("SCRIPT_TASK_PLAY_ANIM")) == 7)
		{
			__LIB_9__::func_136((*uParam0)[0 /*50*/]);
			__LIB_0__::func_795(&(uParam0->f_8661), 0, 0);
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				uParam1->f_1 = -1;
			}
			__LIB_9__::func_50(&((uParam0[0 /*50*/])->f_14), 1);
			__LIB_9__::func_137(&((uParam0[0 /*50*/])->f_14), 2);
		}
	}
	if (__LIB_9__::func_51(&((uParam0[0 /*50*/])->f_14), 2))
	{
		if (!__LIB_9__::func_51(&((uParam0[0 /*50*/])->f_14), 3))
		{
			if ((uParam0[0 /*50*/])->f_26 == 423)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS((*uParam0)[0 /*50*/], joaat("SCRIPT_TASK_START_SCENARIO_IN_PLACE")) != 1)
				{
					iVar1 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE((uParam0[0 /*50*/])->f_28, 3f, joaat("p_cs_clipboard"), false, false, false);
					if (ENTITY::DOES_ENTITY_EXIST(iVar1))
					{
						ENTITY::SET_ENTITY_ALPHA(iVar1, 0, true);
					}
					__LIB_9__::func_137(&((uParam0[0 /*50*/])->f_14), 3);
				}
			}
			else if ((uParam0[0 /*50*/])->f_26 == 421 || (uParam0[0 /*50*/])->f_26 == 422)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS((*uParam0)[0 /*50*/], joaat("SCRIPT_TASK_START_SCENARIO_IN_PLACE")) != 1)
				{
					if (ENTITY::DOES_ENTITY_EXIST((uParam0[0 /*50*/])->f_1[0]))
					{
						ENTITY::SET_ENTITY_ALPHA((uParam0[0 /*50*/])->f_1[0], 0, true);
					}
					__LIB_9__::func_137(&((uParam0[0 /*50*/])->f_14), 3);
				}
			}
			else
			{
				__LIB_9__::func_137(&((uParam0[0 /*50*/])->f_14), 3);
			}
		}
		iVar2 = (*uParam0)[0 /*50*/];
		if (__LIB_0__::func_121((*uParam0)[0 /*50*/]))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iVar2, true), __LIB_8__::func_400(), true) <= 2f || __LIB_0__::func_937(&(uParam0->f_8661), __LIB_8__::func_399(), 0))
			{
				__LIB_9__::func_137(&((uParam0[0 /*50*/])->f_11), 45);
				Global_1977032 = -1;
				__LIB_9__::func_50(&((uParam0[0 /*50*/])->f_14), 2);
			}
		}
	}
}

int func_4924()//Position - 0x18F365
{
	int iVar0;
	iVar0 = __LIB_11__::func_790(PLAYER::PLAYER_ID());
	switch (__LIB_8__::func_401(iVar0, __LIB_11__::func_802(iVar0)))
	{
		case 0:
		case 2:
		case 4:
			return 1;
			break;
	}
	return 0;
}

void func_4932(var uParam0, int iParam1, var uParam2, int iParam3)//Position - 0x18F804
{
	int iVar0;
	int iVar1;
	__LIB_8__::func_405(uParam0);
	iVar1 = __LIB_11__::func_790(PLAYER::PLAYER_ID());
	switch (__LIB_8__::func_401(iVar1, __LIB_11__::func_802(iVar1)))
	{
		case 0:
			uParam0->f_5 = "SM2_WBOSS1";
			switch (iParam3)
			{
				case 1:
					iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
					uParam0->f_4 = "GENERIC_HI";
					if (iVar0 == 1)
					{
						uParam0->f_4 = "GENERIC_HOWSITGOING";
					}
					else if (iVar0 == 2)
					{
						if (__LIB_1__::func_394())
						{
							uParam0->f_4 = "GREET_OWNER_FEMALE";
						}
						uParam0->f_4 = "GREET_OWNER_MALE";
					}
					break;
				case 2:
					uParam0->f_4 = "GENERIC_BYE";
					break;
				case 3:
					uParam0->f_4 = "BUMP";
					break;
				case 4:
					uParam0->f_4 = "IDLE";
					break;
				case 10:
					uParam0->f_4 = "SOURCE_CARGO_POSITIVE";
					break;
				case 11:
					uParam0->f_4 = "SOURCE_CARGO_NEGATIVE";
					break;
			}
			break;
		case 1:
			uParam0->f_5 = "A_M_Y_Ktown_01_Korean_FULL_01";
			switch (iParam3)
			{
				case 1:
					iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
					uParam0->f_4 = "GENERIC_HI";
					if (iVar0 == 1)
					{
						uParam0->f_4 = "GENERIC_HOWS_IT_GOING";
					}
					break;
				case 2:
					uParam0->f_4 = "GENERIC_BYE";
					break;
				case 10:
					uParam0->f_4 = "GENERIC_YES";
					break;
			}
			break;
		case 2:
			uParam0->f_5 = "A_F_M_Bodybuild_01_Black_FULL_01";
			switch (iParam3)
			{
				case 1:
					iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
					uParam0->f_4 = "GENERIC_HI";
					if (iVar0 == 1)
					{
						uParam0->f_4 = "GENERIC_HOWS_IT_GOING";
					}
					break;
				case 2:
					uParam0->f_4 = "GENERIC_BYE";
					break;
				case 10:
					uParam0->f_4 = "GENERIC_YES";
					break;
			}
			break;
		case 3:
			uParam0->f_5 = "A_M_Y_GenStreet_02_Latino_FULL_01";
			switch (iParam3)
			{
				case 1:
					iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
					uParam0->f_4 = "GENERIC_HI";
					if (iVar0 == 1)
					{
						uParam0->f_4 = "GENERIC_HOWS_IT_GOING";
					}
					break;
				case 2:
					uParam0->f_4 = "GENERIC_BYE";
					break;
				case 10:
					uParam0->f_4 = "GENERIC_YES";
					break;
			}
			break;
		case 4:
			uParam0->f_5 = "A_F_Y_SouCent_03_Latino_FULL_01";
			switch (iParam3)
			{
				case 1:
					iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
					uParam0->f_4 = "GENERIC_HI";
					if (iVar0 == 1)
					{
						uParam0->f_4 = "GENERIC_HOWS_IT_GOING";
					}
					break;
				case 2:
					uParam0->f_4 = "GENERIC_BYE";
					break;
				case 10:
					uParam0->f_4 = "GENERIC_YES";
					break;
			}
			break;
	}
}

int func_4934(var uParam0, int iParam1, var uParam2)//Position - 0x18FAB6
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6[137];
	struct<7> Var7;
	iVar1 = 0;
	iVar5 = 0;
	switch (iParam1)
	{
		case 0:
			Var7 = -1;
			iVar0 = 0;
			while (iVar0 < 137)
			{
				iVar4 = func_4936(iParam1, uParam2, iVar0);
				if (iVar4 > 12 && iVar4 < 136)
				{
					__LIB_8__::func_405(&Var7);
					func_4932(&Var7, iParam1, uParam2, iVar4);
					if (__LIB_8__::func_406(Var7))
					{
						iVar6[iVar5] = iVar0;
						iVar5++;
					}
				}
				iVar0++;
			}
			if (iVar5 > 1)
			{
				iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar5);
				iVar4 = func_4936(iParam1, uParam2, iVar6[iVar3]);
				while (iVar4 == *uParam0 && iVar1 < 10)
				{
					iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar5);
					iVar4 = func_4936(iParam1, uParam2, iVar6[iVar3]);
					iVar1++;
				}
				if (iVar1 >= 10)
				{
					iVar0 = 0;
					while (iVar0 < iVar2)
					{
						iVar4 = func_4936(iParam1, uParam2, iVar6[iVar0]);
						if (iVar4 != *uParam0)
						{
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
				iVar4 = func_4936(iParam1, uParam2, iVar6[0]);
			}
			break;
	}
	*uParam0 = iVar4;
	return iVar4;
}

int func_4936(int iParam0, var uParam1, int iParam2)//Position - 0x18FBFE
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	iVar1 = __LIB_11__::func_790(PLAYER::PLAYER_ID());
	if (iVar1 == 0)
	{
		return 0;
	}
	iVar2 = __LIB_11__::func_802(iVar1);
	if (iVar2 == __LIB_0__::func_162())
	{
		return 0;
	}
	switch (__LIB_8__::func_401(iVar1, iVar2))
	{
		case 0:
			switch (iParam2)
			{
				case 0:
					iVar0 = 1;
					break;
				case 1:
					iVar0 = 2;
					break;
				case 2:
					iVar0 = 3;
					break;
				case 3:
					iVar0 = 4;
					break;
				case 4:
					iVar0 = 10;
					break;
				case 5:
					iVar0 = 11;
					break;
			}
			break;
		case 1:
		case 2:
		case 3:
		case 4:
			switch (iParam2)
			{
				case 0:
					iVar0 = 1;
					break;
				case 1:
					iVar0 = 2;
					break;
				case 2:
					iVar0 = 10;
					break;
			}
			break;
	}
	return iVar0;
}

void func_4944(var uParam0, var uParam1, var uParam2, var uParam3)//Position - 0x18FF3E
{
	int iVar0;
	iVar0 = __LIB_11__::func_790(PLAYER::PLAYER_ID());
	switch (__LIB_8__::func_401(iVar0, __LIB_11__::func_802(iVar0)))
	{
		case 0:
			PED::SET_PED_PROP_INDEX(*uParam0, 1, 0, 0, false);
			break;
		case 1:
			PED::SET_PED_PROP_INDEX(*uParam0, 1, 0, 0, false);
			break;
		case 2:
			PED::SET_PED_PROP_INDEX(*uParam0, 1, 0, 1, false);
			break;
		case 3:
			PED::SET_PED_PROP_INDEX(*uParam0, 0, 2, 0, false);
			break;
		case 4:
			PED::SET_PED_PROP_INDEX(*uParam0, 0, 0, 1, false);
			break;
	}
}

void func_4958(var uParam0, var uParam1)//Position - 0x190499
{
	int iVar0;
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		uParam1->f_1 = func_4971();
		*uParam1 = __LIB_1__::func_806();
		uParam1->f_3 = func_4975(uParam1, -1);
		uParam1->f_4 = __LIB_0__::func_114(uParam1, -1);
	}
	if (uParam1->f_1 != -1)
	{
		iVar0 = __LIB_5__::func_388(__LIB_11__::func_790(PLAYER::PLAYER_ID()));
		if (uParam1->f_1 == 3)
		{
			Global_1977032 = -1;
		}
		else
		{
			switch (iVar0)
			{
				case 0:
					Global_1977032 = uParam1->f_1;
					break;
				case 1:
					Global_1977032 = uParam1->f_1 + 3;
					break;
				case 2:
					Global_1977032 = uParam1->f_1 + 6;
					break;
				default:
					Global_1977032 = uParam1->f_1;
					break;
				}
		}
	}
	else
	{
		Global_1977032 = -1;
	}
}

void func_4959(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)//Position - 0x190544
{
	int iVar0;
	iVar0 = __LIB_5__::func_388(__LIB_11__::func_790(PLAYER::PLAYER_ID()));
	switch (iVar0)
	{
		case 0:
			switch (iParam4)
			{
				case 0:
					func_4969(uParam2, iParam3, bParam5);
					break;
				case 1:
					func_4968(uParam2, iParam3, bParam5);
					break;
				case 2:
					func_4967(uParam2, iParam3, bParam5);
					break;
			}
			break;
		case 1:
			switch (iParam4)
			{
				case 0:
					func_4966(uParam2, iParam3, bParam5);
					break;
				case 1:
					func_4965(uParam2, iParam3, bParam5);
					break;
				case 2:
					func_4964(uParam2, iParam3, bParam5);
					break;
			}
			break;
		case 2:
			switch (iParam4)
			{
				case 0:
					func_4963(uParam2, iParam3, bParam5);
					break;
				case 1:
					func_4962(uParam2, iParam3, bParam5);
					break;
				case 2:
					func_4960(uParam2, iParam3, bParam5);
					break;
			}
			break;
		default:
			switch (iParam4)
			{
				case 4:
				case default:
			}
			func_4966(uParam2, iParam3, bParam5);
			break;
	}
	__LIB_9__::func_137(&(uParam2->f_11), 47);
	if (Global_1977032 == -1 || func_291(__LIB_11__::func_790(PLAYER::PLAYER_ID())))
	{
		__LIB_9__::func_137(&(uParam2->f_11), 0);
	}
}

void func_4960(var uParam0, int iParam1, bool bParam2)//Position - 0x190687
{
	switch (iParam1)
	{
		case 0:
			if (bParam2)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					if (func_4924())
					{
						uParam0->f_26 = 424;
					}
					else
					{
						uParam0->f_26 = 423;
					}
					uParam0->f_27 = 2;
					uParam0->f_28 = { 997.8175f, -3109.485f, -40.00166f };
					uParam0->f_31 = { 0f, 0f, -53.74f };
					__LIB_8__::func_413(&(uParam0->f_11));
					func_4961(uParam0);
					__LIB_9__::func_137(&(uParam0->f_11), 1);
					break;
			}
			break;
	}
}

void func_4961(var uParam0)//Position - 0x19071D
{
	int iVar0;
	iVar0 = __LIB_11__::func_790(PLAYER::PLAYER_ID());
	switch (__LIB_8__::func_401(iVar0, __LIB_11__::func_802(iVar0)))
	{
		case 0:
			uParam0->f_25 = 80;
			uParam0->f_17[0] = 0;
			uParam0->f_17[1] = 0;
			uParam0->f_17[2] = 0;
			uParam0->f_21[0] = 0;
			uParam0->f_21[1] = 0;
			uParam0->f_21[2] = 0;
			__LIB_9__::func_137(&(uParam0->f_11), 4);
			break;
		case 1:
			uParam0->f_25 = 82;
			uParam0->f_17[0] = 16777217;
			uParam0->f_17[1] = 65793;
			uParam0->f_17[2] = 16777216;
			uParam0->f_21[0] = 16777218;
			uParam0->f_21[1] = 65792;
			uParam0->f_21[2] = 1;
			__LIB_9__::func_137(&(uParam0->f_11), 4);
			break;
		case 2:
			uParam0->f_25 = 81;
			uParam0->f_17[0] = 0;
			uParam0->f_17[1] = 0;
			uParam0->f_17[2] = 1;
			uParam0->f_21[0] = 1;
			uParam0->f_21[1] = 65539;
			uParam0->f_21[2] = 256;
			__LIB_9__::func_137(&(uParam0->f_11), 4);
			break;
		case 3:
			uParam0->f_25 = 82;
			uParam0->f_17[0] = 0;
			uParam0->f_17[1] = 256;
			uParam0->f_17[2] = 16777216;
			uParam0->f_21[0] = 16777216;
			uParam0->f_21[1] = 0;
			uParam0->f_21[2] = 0;
			__LIB_9__::func_137(&(uParam0->f_11), 4);
			break;
		case 4:
			uParam0->f_25 = 81;
			uParam0->f_17[0] = 196609;
			uParam0->f_17[1] = 65537;
			uParam0->f_17[2] = 16777217;
			uParam0->f_21[0] = 2;
			uParam0->f_21[1] = 65793;
			uParam0->f_21[2] = 16777216;
			__LIB_9__::func_137(&(uParam0->f_11), 4);
			break;
	}
}

void func_4962(var uParam0, int iParam1, bool bParam2)//Position - 0x1908DA
{
	switch (iParam1)
	{
		case 0:
			if (bParam2)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					if (func_4924())
					{
						uParam0->f_26 = 421;
					}
					else
					{
						uParam0->f_26 = 422;
					}
					uParam0->f_27 = 2;
					uParam0->f_28 = { 1001.805f, -3092.803f, -40.00166f };
					uParam0->f_31 = { 0f, 0f, -166.86f };
					__LIB_8__::func_413(&(uParam0->f_11));
					func_4961(uParam0);
					__LIB_9__::func_137(&(uParam0->f_11), 1);
					break;
			}
			break;
	}
}

void func_4963(var uParam0, int iParam1, bool bParam2)//Position - 0x190970
{
	switch (iParam1)
	{
		case 0:
			if (bParam2)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					if (func_4924())
					{
						uParam0->f_26 = 424;
					}
					else
					{
						uParam0->f_26 = 423;
					}
					uParam0->f_27 = 2;
					uParam0->f_28 = { 1025.093f, -3098.251f, -40.00166f };
					uParam0->f_31 = { 0f, 0f, 104f };
					__LIB_8__::func_413(&(uParam0->f_11));
					func_4961(uParam0);
					__LIB_9__::func_137(&(uParam0->f_11), 1);
					break;
			}
			break;
	}
}

void func_4964(var uParam0, int iParam1, bool bParam2)//Position - 0x190A06
{
	switch (iParam1)
	{
		case 0:
			if (bParam2)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					if (func_4924())
					{
						uParam0->f_26 = 421;
					}
					else
					{
						uParam0->f_26 = 422;
					}
					uParam0->f_27 = 2;
					uParam0->f_28 = { 1060.139f, -3098.929f, -40.00166f };
					uParam0->f_31 = { 0f, 0f, 90f };
					__LIB_8__::func_413(&(uParam0->f_11));
					func_4961(uParam0);
					__LIB_9__::func_137(&(uParam0->f_11), 1);
					break;
			}
			break;
	}
}

void func_4965(var uParam0, int iParam1, bool bParam2)//Position - 0x190A9C
{
	switch (iParam1)
	{
		case 0:
			if (bParam2)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					if (func_4924())
					{
						uParam0->f_26 = 421;
					}
					else
					{
						uParam0->f_26 = 422;
					}
					uParam0->f_27 = 2;
					uParam0->f_28 = { 1071.512f, -3107.35f, -40.00166f };
					uParam0->f_31 = { 0f, 0f, 50.25f };
					__LIB_8__::func_413(&(uParam0->f_11));
					func_4961(uParam0);
					__LIB_9__::func_137(&(uParam0->f_11), 1);
					break;
			}
			break;
	}
}

void func_4966(var uParam0, int iParam1, bool bParam2)//Position - 0x190B32
{
	switch (iParam1)
	{
		case 0:
			if (bParam2)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					if (func_4924())
					{
						uParam0->f_26 = 424;
					}
					else
					{
						uParam0->f_26 = 423;
					}
					uParam0->f_27 = 2;
					uParam0->f_28 = { 1071.233f, -3097.829f, -40.00166f };
					uParam0->f_31 = { 0f, 0f, 134.75f };
					__LIB_8__::func_413(&(uParam0->f_11));
					func_4961(uParam0);
					__LIB_9__::func_137(&(uParam0->f_11), 1);
					break;
			}
			break;
	}
}

void func_4967(var uParam0, int iParam1, bool bParam2)//Position - 0x190BC8
{
	switch (iParam1)
	{
		case 0:
			if (bParam2)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					if (func_4924())
					{
						uParam0->f_26 = 421;
					}
					else
					{
						uParam0->f_26 = 422;
					}
					uParam0->f_27 = 2;
					uParam0->f_28 = { 1093.597f, -3098.03f, -40.00166f };
					uParam0->f_31 = { 0f, 0f, -172.5f };
					__LIB_8__::func_413(&(uParam0->f_11));
					func_4961(uParam0);
					__LIB_9__::func_137(&(uParam0->f_11), 1);
					break;
			}
			break;
	}
}

void func_4968(var uParam0, int iParam1, bool bParam2)//Position - 0x190C5E
{
	switch (iParam1)
	{
		case 0:
			if (bParam2)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					if (func_4924())
					{
						uParam0->f_26 = 424;
					}
					else
					{
						uParam0->f_26 = 423;
					}
					uParam0->f_27 = 2;
					uParam0->f_28 = { 1103.173f, -3101.958f, -40.02092f };
					uParam0->f_31 = { 0f, 0f, 24.12f };
					__LIB_8__::func_413(&(uParam0->f_11));
					func_4961(uParam0);
					__LIB_9__::func_137(&(uParam0->f_11), 1);
					break;
			}
			break;
	}
}

void func_4969(var uParam0, int iParam1, bool bParam2)//Position - 0x190CF4
{
	switch (iParam1)
	{
		case 0:
			if (bParam2)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					if (func_4924())
					{
						uParam0->f_26 = 421;
					}
					else
					{
						uParam0->f_26 = 422;
					}
					uParam0->f_27 = 2;
					uParam0->f_28 = { 1099.822f, -3097.927f, -40.02092f };
					uParam0->f_31 = { 0f, 0f, 156f };
					__LIB_8__::func_413(&(uParam0->f_11));
					func_4961(uParam0);
					__LIB_9__::func_137(&(uParam0->f_11), 1);
					break;
			}
			break;
	}
}

int func_4971()//Position - 0x190D93
{
	if (func_291(__LIB_11__::func_790(PLAYER::PLAYER_ID())))
	{
		return 3;
	}
	if (__LIB_2__::func_159(1))
	{
		if (!__LIB_8__::func_419(__LIB_0__::func_797()))
		{
			return 0;
		}
	}
	else if (!__LIB_8__::func_419(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return MISC::GET_RANDOM_INT_IN_RANGE(0, (__LIB_1__::func_804() - 1));
}

int func_4975(var uParam0, int iParam1)//Position - 0x190E1D
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
		func_4959(iParam1, uParam0, &Var2, iVar0, uParam0->f_1, 1);
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

void func_4979(var uParam0, int iParam1)//Position - 0x190EE1
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1648155/*__LIB_8__::func_425*/;
			break;
		case 1:
			uParam0->f_1 = 1648146/*__LIB_0__::func_114*/;
			break;
		case 2:
			uParam0->f_2 = 1648120/*__LIB_8__::func_902*/;
			break;
		case 3:
			uParam0->f_3 = 1648111/*__LIB_0__::func_114*/;
			break;
		case 4:
			uParam0->f_4 = 1648102/*__LIB_3__::func_603*/;
			break;
		case 5:
			uParam0->f_5 = 1648085/*__LIB_8__::func_901*/;
			break;
		case 6:
			uParam0->f_6 = 1648076/*__LIB_1__::func_806*/;
			break;
		case 9:
			uParam0->f_9 = 1644636/*__LIB_10__::func_662*/;
			break;
		case 10:
			uParam0->f_10 = 1644560/*__LIB_9__::func_289*/;
			break;
		case 11:
			uParam0->f_11 = 1642956/*__LIB_10__::func_661*/;
			break;
		case 14:
			uParam0->f_14 = 1642929/*__LIB_8__::func_420*/;
			break;
		case 7:
			uParam0->f_7 = 1642918/*__LIB_3__::func_554*/;
			break;
		case 8:
			uParam0->f_8 = 1642909/*__LIB_7__::func_239*/;
			break;
		case 16:
			uParam0->f_16 = 1642851/*__LIB_8__::func_398*/;
			break;
		case 17:
			uParam0->f_17 = 1642717/*__LIB_7__::func_240*/;
			break;
		case 18:
			uParam0->f_18 = 1642658/*__LIB_9__::func_859*/;
			break;
		case 21:
			uParam0->f_21 = 1642512/*__LIB_9__::func_858*/;
			break;
	}
}

void func_5009(var uParam0, int iParam1)//Position - 0x19264E
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1652972/*__LIB_8__::func_436*/;
			break;
		case 1:
			uParam0->f_1 = 1652963/*__LIB_0__::func_109*/;
			break;
		case 2:
			uParam0->f_2 = 1652804/*__LIB_11__::func_335*/;
			break;
		case 3:
			uParam0->f_3 = 1652795/*__LIB_0__::func_114*/;
			break;
		case 4:
			uParam0->f_4 = 1652786/*__LIB_0__::func_109*/;
			break;
		case 5:
			uParam0->f_5 = 1652762/*__LIB_8__::func_435*/;
			break;
		case 6:
			uParam0->f_6 = 1652753/*__LIB_1__::func_806*/;
			break;
		case 9:
			uParam0->f_9 = 1650736/*__LIB_11__::func_267*/;
			break;
		case 10:
			uParam0->f_10 = 1650684/*__LIB_11__::func_567*/;
			break;
		case 11:
			uParam0->f_11 = 1650055/*__LIB_10__::func_663*/;
			break;
		case 14:
			uParam0->f_14 = 1650041/*__LIB_9__::func_59*/;
			break;
		case 7:
			uParam0->f_7 = 1650030/*__LIB_3__::func_554*/;
			break;
		case 8:
			uParam0->f_8 = 1650021/*__LIB_7__::func_239*/;
			break;
		case 16:
			uParam0->f_16 = 1649963/*__LIB_8__::func_398*/;
			break;
		case 17:
			uParam0->f_17 = 1649786/*__LIB_8__::func_429*/;
			break;
		case 18:
			uParam0->f_18 = 1649727/*__LIB_9__::func_859*/;
			break;
		case 21:
			uParam0->f_21 = 1649581/*__LIB_9__::func_858*/;
			break;
		case 23:
			uParam0->f_22 = 1649517/*__LIB_8__::func_428*/;
			break;
		case 22:
			uParam0->f_23 = 1649340/*__LIB_9__::func_58*/;
			break;
		case 24:
			uParam0->f_24 = 1649290/*__LIB_8__::func_427*/;
			break;
		case 25:
			uParam0->f_25 = 1648993/*__LIB_9__::func_882*/;
			break;
		case 26:
			uParam0->f_26 = 1648887/*__LIB_9__::func_57*/;
			break;
		case 35:
			uParam0->f_35 = 1648611/*__LIB_11__::func_345*/;
			break;
	}
}

void func_5043(var uParam0, int iParam1)//Position - 0x1938FA
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1670715/*__LIB_9__::func_66*/;
			break;
		case 1:
			uParam0->f_1 = 1670706/*__LIB_0__::func_109*/;
			break;
		case 2:
			uParam0->f_2 = 1670547/*func_5106*/;
			break;
		case 3:
			uParam0->f_3 = 1670538/*__LIB_0__::func_114*/;
			break;
		case 4:
			uParam0->f_4 = 1670528/*__LIB_8__::func_467*/;
			break;
		case 5:
			uParam0->f_5 = 1670513/*__LIB_8__::func_466*/;
			break;
		case 6:
			uParam0->f_6 = 1670504/*__LIB_1__::func_806*/;
			break;
		case 9:
			uParam0->f_9 = 1665237/*func_5086*/;
			break;
		case 10:
			uParam0->f_10 = 1663679/*func_5074*/;
			break;
		case 11:
			uParam0->f_11 = 1660763/*__LIB_10__::func_665*/;
			break;
		case 14:
			uParam0->f_14 = 1660749/*__LIB_9__::func_63*/;
			break;
		case 7:
			uParam0->f_7 = 1660611/*__LIB_8__::func_444*/;
			break;
		case 8:
			uParam0->f_8 = 1660527/*__LIB_8__::func_443*/;
			break;
		case 16:
			uParam0->f_16 = 1660469/*__LIB_8__::func_398*/;
			break;
		case 17:
			uParam0->f_17 = 1660320/*__LIB_8__::func_442*/;
			break;
		case 18:
			uParam0->f_18 = 1660261/*__LIB_9__::func_859*/;
			break;
		case 19:
			uParam0->f_19 = 1660226/*__LIB_8__::func_441*/;
			break;
		case 21:
			uParam0->f_21 = 1660080/*__LIB_9__::func_858*/;
			break;
		case 29:
			uParam0->f_29 = 1659781/*__LIB_9__::func_145*/;
			break;
		case 34:
			uParam0->f_30 = 1659641/*__LIB_9__::func_62*/;
			break;
		case 23:
			uParam0->f_22 = 1659091/*__LIB_9__::func_884*/;
			break;
		case 22:
			uParam0->f_23 = 1658914/*__LIB_9__::func_61*/;
			break;
		case 24:
			uParam0->f_24 = 1658638/*__LIB_8__::func_439*/;
			break;
		case 25:
			uParam0->f_25 = 1658338/*__LIB_9__::func_966*/;
			break;
		case 26:
			uParam0->f_26 = 1656044/*__LIB_9__::func_144*/;
			break;
		case 12:
			uParam0->f_12 = 1653442/*__LIB_9__::func_143*/;
			break;
	}
}

void func_5074(var uParam0, var uParam1)//Position - 0x1962BF
{
	int iVar0;
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		uParam1->f_1 = __LIB_8__::func_466();
		*uParam1 = __LIB_1__::func_806();
		uParam1->f_3 = func_5106(uParam1, -1);
		uParam1->f_4 = __LIB_0__::func_114(uParam1, -1);
		iVar0 = 100;
		if (__LIB_1__::func_163(__LIB_10__::func_974()) > 0)
		{
			iVar0 = Global_262145.f_31702 /* Tunable: -1911815023 */;
		}
		if ((__LIB_8__::func_455(__LIB_10__::func_974()) == 1 && __LIB_3__::func_618(__LIB_10__::func_974(), 6)) && !__LIB_3__::func_618(__LIB_10__::func_974(), 7))
		{
			iVar0 = 0;
		}
		if (MISC::GET_RANDOM_INT_IN_RANGE(0, 100) < iVar0)
		{
			MISC::SET_BIT(&(uParam1->f_2), 0);
			if (MISC::GET_RANDOM_INT_IN_RANGE(0, 100) < Global_262145.f_31701 /* Tunable: 801201447 */ && __LIB_8__::func_454(__LIB_10__::func_974()))
			{
				MISC::SET_BIT(&(uParam1->f_2), 1);
			}
		}
		if (BitTest(Global_1946250.f_10, 26))
		{
			MISC::CLEAR_BIT(&(Global_1946250.f_10), 26);
			MISC::SET_BIT(&(uParam1->f_2), 0);
		}
		if (BitTest(Global_1946250.f_10, 27))
		{
			MISC::CLEAR_BIT(&(Global_1946250.f_10), 27);
			MISC::SET_BIT(&(uParam1->f_2), 1);
		}
	}
	if (BitTest(uParam1->f_2, 0))
	{
		if (__LIB_1__::func_163(__LIB_10__::func_974()) == 0)
		{
			Global_1977038 = 402;
		}
		else
		{
			__LIB_8__::func_453(uParam1->f_1, &Global_1977038);
		}
		MISC::SET_BIT(&(Global_1946250.f_10), 7);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1946250.f_10), 7);
		Global_1977038 = -1;
	}
	if (BitTest(uParam1->f_2, 1))
	{
		switch (__LIB_8__::func_437(uParam1->f_1))
		{
			case 0:
				Global_1977040 = 1;
				break;
			case 1:
				Global_1977040 = 2;
				break;
		}
		MISC::SET_BIT(&(Global_1946250.f_10), 8);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1946250.f_10), 8);
		Global_1977040 = 0;
	}
	Global_1977036 = uParam1->f_1;
	if (BitTest(uParam1->f_2, 1))
	{
		if (__LIB_2__::func_932(__LIB_10__::func_974()))
		{
			Global_1977037 = __LIB_8__::func_452(uParam1);
		}
		else
		{
			Global_1977037 = __LIB_8__::func_451(uParam1);
		}
	}
	else if (BitTest(uParam1->f_2, 0))
	{
		if (__LIB_2__::func_932(__LIB_10__::func_974()))
		{
			Global_1977037 = __LIB_8__::func_450(uParam1);
		}
		else
		{
			Global_1977037 = __LIB_8__::func_449(uParam1);
		}
	}
	else
	{
		Global_1977037 = 1;
	}
}

void func_5086(int iParam0, var uParam1, var uParam2, int iParam3, var uParam4, bool bParam5)//Position - 0x1968D5
{
	func_5087(iParam0, uParam2, uParam1, iParam3, bParam5);
}

void func_5087(int iParam0, var uParam1, var uParam2, int iParam3, bool bParam4)//Position - 0x1968EB
{
	switch (iParam3)
	{
		case 0:
			if (bParam4)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 50;
					uParam1->f_26 = 389;
					uParam1->f_27 = 2;
					uParam1->f_17[0] = 16842752;
					uParam1->f_17[1] = 0;
					uParam1->f_17[2] = 0;
					uParam1->f_21[0] = 16908288;
					uParam1->f_21[1] = 1;
					uParam1->f_21[2] = 0;
					uParam1->f_28 = { 5.859f, 5.9914f, 0.585f };
					uParam1->f_31 = { 0f, 0f, 15.095f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (Global_1977034)
					{
						__LIB_9__::func_137(&(uParam1->f_11), 1);
						__LIB_9__::func_137(&(uParam1->f_11), 7);
					}
					else
					{
						__LIB_9__::func_137(&(uParam1->f_11), 0);
					}
					if (!__LIB_0__::func_509() == 0)
					{
						__LIB_9__::func_137(&(uParam1->f_11), 0);
					}
					break;
			}
			break;
		case 1:
			if (bParam4)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 69;
					uParam1->f_26 = 391;
					uParam1->f_27 = 2;
					uParam1->f_17[0] = 0;
					uParam1->f_17[1] = 0;
					uParam1->f_17[2] = 0;
					uParam1->f_21[0] = -1;
					uParam1->f_21[1] = -1;
					uParam1->f_21[2] = -1;
					uParam1->f_28 = { -7.3487f, -0.3719f, 8.6058f };
					uParam1->f_31 = { 0f, 0f, 0f };
					__LIB_8__::func_413(&(uParam1->f_11));
					__LIB_9__::func_137(&(uParam1->f_11), 7);
					__LIB_9__::func_137(&(uParam1->f_11), 4);
					__LIB_9__::func_137(&(uParam1->f_11), 1);
					if (!__LIB_0__::func_509() == 0)
					{
						__LIB_9__::func_137(&(uParam1->f_11), 0);
					}
					break;
			}
			break;
		case 2:
			if (bParam4)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 66;
					uParam1->f_26 = 393;
					uParam1->f_27 = 2;
					uParam1->f_17[0] = 16973825;
					uParam1->f_17[1] = 0;
					uParam1->f_17[2] = 0;
					uParam1->f_21[0] = 16842752;
					uParam1->f_21[1] = 1;
					uParam1->f_21[2] = 0;
					__LIB_8__::func_465(&(uParam1->f_28), &(uParam1->f_31.f_2), &(uParam1->f_26), uParam2);
					__LIB_8__::func_413(&(uParam1->f_11));
					__LIB_9__::func_137(&(uParam1->f_11), 7);
					if (Global_1977034)
					{
					}
					else
					{
						__LIB_9__::func_137(&(uParam1->f_11), 0);
					}
					if (!__LIB_0__::func_509() == 0)
					{
						__LIB_9__::func_137(&(uParam1->f_11), 0);
					}
					break;
			}
			break;
		case 3:
			if (bParam4)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 68;
					uParam1->f_26 = 392;
					uParam1->f_27 = 2;
					uParam1->f_17[0] = 0;
					uParam1->f_17[1] = 0;
					uParam1->f_17[2] = 0;
					uParam1->f_21[0] = 33554432;
					uParam1->f_21[1] = 0;
					uParam1->f_21[2] = 0;
					__LIB_8__::func_464(&(uParam1->f_28), &(uParam1->f_31.f_2), &(uParam1->f_26), uParam2);
					__LIB_8__::func_413(&(uParam1->f_11));
					__LIB_9__::func_137(&(uParam1->f_11), 7);
					if (Global_1977034)
					{
					}
					else
					{
						__LIB_9__::func_137(&(uParam1->f_11), 0);
					}
					if (!__LIB_0__::func_509() == 0)
					{
						__LIB_9__::func_137(&(uParam1->f_11), 0);
					}
					break;
			}
			break;
		case 4:
			if (bParam4)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 67;
					uParam1->f_26 = 393;
					uParam1->f_27 = 2;
					uParam1->f_17[0] = 16842752;
					uParam1->f_17[1] = 0;
					uParam1->f_17[2] = 0;
					uParam1->f_21[0] = 16908290;
					uParam1->f_21[1] = 1;
					uParam1->f_21[2] = 0;
					__LIB_8__::func_463(&(uParam1->f_28), &(uParam1->f_31.f_2), &(uParam1->f_26), uParam2);
					__LIB_8__::func_413(&(uParam1->f_11));
					__LIB_9__::func_137(&(uParam1->f_11), 7);
					if (__LIB_3__::func_618(__LIB_10__::func_974(), 0))
					{
					}
					else
					{
						__LIB_9__::func_137(&(uParam1->f_11), 0);
					}
					if (!__LIB_0__::func_509() == 0)
					{
						__LIB_9__::func_137(&(uParam1->f_11), 0);
					}
					break;
			}
			break;
		case 5:
			if (bParam4)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 68;
					uParam1->f_26 = 392;
					uParam1->f_27 = 2;
					uParam1->f_17[0] = 16842753;
					uParam1->f_17[1] = 65793;
					uParam1->f_17[2] = 0;
					uParam1->f_21[0] = 16777216;
					uParam1->f_21[1] = 1;
					uParam1->f_21[2] = 0;
					__LIB_8__::func_462(&(uParam1->f_28), &(uParam1->f_31.f_2), &(uParam1->f_26), uParam2);
					__LIB_8__::func_413(&(uParam1->f_11));
					__LIB_9__::func_137(&(uParam1->f_11), 7);
					if (__LIB_3__::func_618(__LIB_10__::func_974(), 0))
					{
					}
					else
					{
						__LIB_9__::func_137(&(uParam1->f_11), 0);
					}
					if (!__LIB_0__::func_509() == 0)
					{
						__LIB_9__::func_137(&(uParam1->f_11), 0);
					}
					break;
			}
			break;
		case 6:
			if (bParam4)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 53;
					uParam1->f_27 = 2;
					uParam1->f_17[0] = 256;
					uParam1->f_17[1] = 0;
					uParam1->f_17[2] = 65536;
					uParam1->f_21[0] = 0;
					uParam1->f_21[1] = 0;
					uParam1->f_21[2] = 0;
					__LIB_8__::func_413(&(uParam1->f_11));
					__LIB_11__::func_520(uParam1, uParam2);
					__LIB_9__::func_137(&(uParam1->f_11), 7);
					__LIB_9__::func_137(&(uParam1->f_11), 4);
					__LIB_9__::func_137(&(uParam1->f_11), 1);
					__LIB_9__::func_137(&(uParam1->f_11), 48);
					if (!BitTest(uParam2->f_2, 0))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 0);
					}
					if (!__LIB_0__::func_509() == 0)
					{
						__LIB_9__::func_137(&(uParam1->f_11), 0);
					}
					break;
			}
			break;
		case 7:
			if (bParam4)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 54;
					uParam1->f_26 = 403;
					uParam1->f_27 = 2;
					uParam1->f_17[0] = 0;
					uParam1->f_17[1] = 0;
					uParam1->f_17[2] = 0;
					uParam1->f_21[0] = 0;
					uParam1->f_21[1] = 0;
					uParam1->f_21[2] = 0;
					__LIB_9__::func_65(&(uParam1->f_28), &(uParam1->f_31.f_2), uParam2);
					__LIB_8__::func_413(&(uParam1->f_11));
					__LIB_9__::func_137(&(uParam1->f_11), 7);
					__LIB_9__::func_137(&(uParam1->f_11), 4);
					__LIB_9__::func_137(&(uParam1->f_11), 1);
					__LIB_9__::func_137(&(uParam1->f_11), 48);
					__LIB_9__::func_137(&(uParam1->f_11), 31);
					if (!BitTest(uParam2->f_2, 1))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 0);
					}
					if (!__LIB_0__::func_509() == 0)
					{
						__LIB_9__::func_137(&(uParam1->f_11), 0);
					}
					break;
			}
			break;
		case 8:
			if (bParam4)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 51;
					uParam1->f_26 = 390;
					uParam1->f_27 = 2;
					uParam1->f_17[0] = 0;
					uParam1->f_17[1] = 0;
					uParam1->f_17[2] = 0;
					uParam1->f_21[0] = 0;
					uParam1->f_21[1] = 0;
					uParam1->f_21[2] = 0;
					uParam1->f_28 = { 9.119f, 2.6278f, 0.615f };
					uParam1->f_31 = { 0f, 0f, 317.205f };
					__LIB_8__::func_413(&(uParam1->f_11));
					__LIB_9__::func_137(&(uParam1->f_11), 1);
					__LIB_9__::func_137(&(uParam1->f_11), 48);
					__LIB_9__::func_137(&(uParam1->f_11), 4);
					__LIB_9__::func_137(&(uParam1->f_11), 7);
					if (!__LIB_0__::func_509() == 0)
					{
						__LIB_9__::func_137(&(uParam1->f_11), 0);
					}
					break;
			}
			break;
		case 9:
			if (bParam4)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 52;
					uParam1->f_26 = 396;
					uParam1->f_27 = 2;
					uParam1->f_17[0] = 16777219;
					uParam1->f_17[1] = 65536;
					uParam1->f_17[2] = 0;
					uParam1->f_21[0] = 50331648;
					uParam1->f_21[1] = 771;
					uParam1->f_21[2] = 0;
					__LIB_8__::func_461(&(uParam1->f_28), &(uParam1->f_31.f_2), uParam2);
					__LIB_8__::func_413(&(uParam1->f_11));
					__LIB_9__::func_137(&(uParam1->f_11), 7);
					if (__LIB_1__::func_163(__LIB_10__::func_974()) > 4)
					{
					}
					else
					{
						__LIB_9__::func_137(&(uParam1->f_11), 0);
					}
					if (!__LIB_0__::func_509() == 0)
					{
						__LIB_9__::func_137(&(uParam1->f_11), 0);
					}
					break;
			}
			break;
		case 10:
			if (bParam4)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 52;
					uParam1->f_26 = 397;
					uParam1->f_27 = 2;
					uParam1->f_17[0] = 33751041;
					uParam1->f_17[1] = 0;
					uParam1->f_17[2] = 16777216;
					uParam1->f_21[0] = 50331648;
					uParam1->f_21[1] = 514;
					uParam1->f_21[2] = 0;
					__LIB_8__::func_460(&(uParam1->f_28), &(uParam1->f_31.f_2), uParam2);
					__LIB_8__::func_413(&(uParam1->f_11));
					__LIB_9__::func_137(&(uParam1->f_11), 7);
					if (__LIB_1__::func_163(__LIB_10__::func_974()) > 9)
					{
					}
					else
					{
						__LIB_9__::func_137(&(uParam1->f_11), 0);
					}
					if (!__LIB_0__::func_509() == 0)
					{
						__LIB_9__::func_137(&(uParam1->f_11), 0);
					}
					break;
			}
			break;
		case 11:
			if (bParam4)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 52;
					uParam1->f_26 = __LIB_9__::func_64(uParam2);
					uParam1->f_27 = 2;
					uParam1->f_17[0] = 16777216;
					uParam1->f_17[1] = 0;
					uParam1->f_17[2] = 0;
					uParam1->f_21[0] = 16777216;
					uParam1->f_21[1] = 3;
					uParam1->f_21[2] = 16777216;
					__LIB_9__::func_146(&(uParam1->f_28), &(uParam1->f_31.f_2), uParam2);
					__LIB_8__::func_413(&(uParam1->f_11));
					__LIB_9__::func_137(&(uParam1->f_11), 7);
					if (__LIB_1__::func_163(__LIB_10__::func_974()) > 24)
					{
					}
					else
					{
						__LIB_9__::func_137(&(uParam1->f_11), 0);
					}
					if (!__LIB_0__::func_509() == 0)
					{
						__LIB_9__::func_137(&(uParam1->f_11), 0);
					}
					break;
			}
			break;
		case 12:
			if (bParam4)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 52;
					uParam1->f_26 = 399;
					uParam1->f_27 = 2;
					uParam1->f_17[0] = 33619970;
					uParam1->f_17[1] = 65536;
					uParam1->f_17[2] = 16777216;
					uParam1->f_21[0] = 16777216;
					uParam1->f_21[1] = 512;
					uParam1->f_21[2] = 0;
					__LIB_8__::func_458(&(uParam1->f_28), &(uParam1->f_31.f_2), uParam2);
					__LIB_8__::func_413(&(uParam1->f_11));
					__LIB_9__::func_137(&(uParam1->f_11), 7);
					if (__LIB_1__::func_163(__LIB_10__::func_974()) > 49)
					{
					}
					else
					{
						__LIB_9__::func_137(&(uParam1->f_11), 0);
					}
					if (!__LIB_0__::func_509() == 0)
					{
						__LIB_9__::func_137(&(uParam1->f_11), 0);
					}
					break;
			}
			break;
	}
	if (!__LIB_0__::func_86(uParam1->f_28))
	{
		uParam1->f_28 = { __LIB_8__::func_457(__LIB_8__::func_444(iParam0), __LIB_8__::func_443(iParam0), uParam1->f_28) };
	}
	if (uParam1->f_31.f_2 != -1f)
	{
		uParam1->f_31.f_2 = __LIB_8__::func_456(__LIB_8__::func_443(iParam0), uParam1->f_31.f_2);
	}
}

int func_5106(var uParam0, int iParam1)//Position - 0x197D93
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
		func_5086(iParam1, uParam0, &Var2, iVar0, uParam0->f_1, 1);
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

void func_5109(var uParam0, int iParam1)//Position - 0x197E4B
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1694843/*__LIB_9__::func_69*/;
			break;
		case 1:
			uParam0->f_1 = 1694834/*__LIB_0__::func_109*/;
			break;
		case 2:
			uParam0->f_2 = 1694675/*__LIB_11__::func_336*/;
			break;
		case 3:
			uParam0->f_3 = 1694666/*__LIB_3__::func_939*/;
			break;
		case 4:
			uParam0->f_4 = 1694657/*__LIB_3__::func_603*/;
			break;
		case 5:
			uParam0->f_5 = 1694643/*__LIB_7__::func_243*/;
			break;
		case 6:
			uParam0->f_6 = 1694634/*__LIB_0__::func_114*/;
			break;
		case 9:
			uParam0->f_9 = 1689358/*__LIB_11__::func_269*/;
			break;
		case 10:
			uParam0->f_10 = 1689298/*__LIB_11__::func_568*/;
			break;
		case 11:
			uParam0->f_11 = 1680869/*__LIB_10__::func_666*/;
			break;
		case 14:
			uParam0->f_14 = 1680855/*__LIB_9__::func_68*/;
			break;
		case 7:
			uParam0->f_7 = 1680832/*__LIB_3__::func_869*/;
			break;
		case 8:
			uParam0->f_8 = 1680823/*__LIB_7__::func_239*/;
			break;
		case 16:
			uParam0->f_16 = 1680765/*__LIB_8__::func_398*/;
			break;
		case 17:
			uParam0->f_17 = 1680631/*__LIB_8__::func_477*/;
			break;
		case 18:
			uParam0->f_18 = 1680572/*__LIB_9__::func_859*/;
			break;
		case 19:
			uParam0->f_19 = 1680395/*__LIB_8__::func_476*/;
			break;
		case 21:
			uParam0->f_21 = 1680257/*__LIB_9__::func_860*/;
			break;
		case 15:
			uParam0->f_15 = 1680248/*__LIB_0__::func_109*/;
			break;
		case 29:
			uParam0->f_29 = 1680103/*__LIB_9__::func_150*/;
			break;
		case 23:
			uParam0->f_22 = 1679713/*__LIB_9__::func_887*/;
			break;
		case 22:
			uParam0->f_23 = 1679388/*__LIB_9__::func_67*/;
			break;
		case 24:
			uParam0->f_24 = 1678840/*__LIB_8__::func_474*/;
			break;
		case 25:
			uParam0->f_25 = 1678519/*__LIB_11__::func_268*/;
			break;
		case 26:
			uParam0->f_26 = 1676106/*__LIB_9__::func_149*/;
			break;
		case 12:
			uParam0->f_12 = 1671787/*__LIB_9__::func_967*/;
			break;
		case 32:
			uParam0->f_33 = 1671698/*__LIB_9__::func_147*/;
			break;
		case 28:
			uParam0->f_28 = 1671222/*__LIB_8__::func_468*/;
			break;
	}
}

void func_5176(var uParam0, int iParam1)//Position - 0x19DC8B
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1724072/*__LIB_7__::func_780*/;
			break;
		case 1:
			uParam0->f_1 = 1724063/*__LIB_0__::func_109*/;
			break;
		case 2:
			uParam0->f_2 = 1723904/*func_5230*/;
			break;
		case 3:
			uParam0->f_3 = 1723895/*__LIB_0__::func_114*/;
			break;
		case 4:
			uParam0->f_4 = 1723886/*__LIB_0__::func_109*/;
			break;
		case 5:
			uParam0->f_5 = 1723877/*__LIB_0__::func_114*/;
			break;
		case 6:
			uParam0->f_6 = 1723868/*__LIB_0__::func_114*/;
			break;
		case 9:
			uParam0->f_9 = 1716697/*func_5224*/;
			break;
		case 10:
			uParam0->f_10 = 1716645/*func_5223*/;
			break;
		case 11:
			uParam0->f_11 = 1700607/*__LIB_10__::func_668*/;
			break;
		case 12:
			uParam0->f_12 = 1698918/*__LIB_9__::func_72*/;
			break;
		case 14:
			uParam0->f_14 = 1698909/*__LIB_0__::func_109*/;
			break;
		case 7:
			uParam0->f_7 = 1698886/*__LIB_8__::func_509*/;
			break;
		case 8:
			uParam0->f_8 = 1698873/*__LIB_8__::func_508*/;
			break;
		case 17:
			uParam0->f_17 = 1698739/*__LIB_7__::func_240*/;
			break;
		case 18:
			uParam0->f_18 = 1698711/*__LIB_9__::func_861*/;
			break;
		case 19:
			uParam0->f_19 = 1698585/*__LIB_8__::func_507*/;
			break;
		case 21:
			uParam0->f_21 = 1698439/*__LIB_9__::func_858*/;
			break;
		case 23:
			uParam0->f_22 = 1697954/*__LIB_9__::func_151*/;
			break;
		case 22:
			uParam0->f_23 = 1697704/*__LIB_9__::func_71*/;
			break;
		case 24:
			uParam0->f_24 = 1696983/*__LIB_8__::func_501*/;
			break;
		case 25:
			uParam0->f_25 = 1696686/*__LIB_9__::func_889*/;
			break;
		case 26:
			uParam0->f_26 = 1695316/*__LIB_9__::func_70*/;
			break;
		case 31:
			uParam0->f_32 = 1695307/*__LIB_0__::func_114*/;
			break;
		case 33:
			uParam0->f_34 = 1695298/*__LIB_0__::func_109*/;
			break;
	}
}

void func_5223(var uParam0, var uParam1)//Position - 0x1A31A5
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		uParam1->f_1 = __LIB_0__::func_114();
		*uParam1 = __LIB_0__::func_114();
		uParam1->f_3 = func_5230(uParam1, -1);
		uParam1->f_4 = __LIB_0__::func_114(uParam1, -1);
	}
}

void func_5224(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, bool bParam5)//Position - 0x1A31D9
{
	func_5225(uParam2, iParam3, bParam5);
}

void func_5225(var uParam0, int iParam1, bool bParam2)//Position - 0x1A31EB
{
	switch (iParam1)
	{
		case 0:
			if (bParam2)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 235;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 33816577;
					uParam0->f_17[1] = 131585;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 16842753;
					uParam0->f_21[1] = 131329;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -128.9668f, -110.0447f, 3.3058f };
					uParam0->f_31 = { 0f, 0f, 263.7999f };
					__LIB_8__::func_413(&(uParam0->f_11));
					__LIB_9__::func_137(&(uParam0->f_11), 7);
					break;
			}
			break;
		case 1:
			if (bParam2)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 293;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 16908292;
					uParam0->f_17[1] = 131074;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 65538;
					uParam0->f_21[1] = 66050;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -129.4226f, -113.9912f, 3.3058f };
					uParam0->f_31 = { 0f, 0f, 280.8f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 2:
			if (bParam2)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 45;
					uParam0->f_26 = 235;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 17170436;
					uParam0->f_17[1] = 259;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 33685504;
					uParam0->f_21[1] = 65544;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -128.6745f, -100.4075f, 3.3058f };
					uParam0->f_31 = { 0f, 0f, 252.7997f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 3:
			if (bParam2)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 233;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 393219;
					uParam0->f_17[1] = 3;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 33619970;
					uParam0->f_21[1] = 519;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -128.979f, -101.3176f, 3.3058f };
					uParam0->f_31 = { 0f, 0f, 284.4f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 4:
			if (bParam2)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 45;
					uParam0->f_26 = 245;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 50462720;
					uParam0->f_17[1] = 769;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 16842752;
					uParam0->f_21[1] = 131329;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -128.9677f, -111.1096f, 3.3058f };
					uParam0->f_31 = { 0f, 0f, 252.7997f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 5:
			if (bParam2)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 246;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 67174400;
					uParam0->f_17[1] = 65539;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 16777217;
					uParam0->f_21[1] = 11;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -129.2502f, -118.7561f, 3.3058f };
					uParam0->f_31 = { 0f, 0f, 291.6f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 6:
			if (bParam2)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 288;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 33751045;
					uParam0->f_17[1] = 66048;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 65537;
					uParam0->f_21[1] = 66304/*__LIB_1__::func_766*/;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -129.1802f, -117.6282f, 3.3058f };
					uParam0->f_31 = { 0f, 0f, 252.7997f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 7:
			if (bParam2)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 8;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 2;
					uParam0->f_17[1] = 0;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 65538;
					uParam0->f_21[1] = 65794;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 125.1035f, -193.5156f, 3.3058f };
					uParam0->f_31 = { 0f, 0f, 108f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 8:
			if (bParam2)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 45;
					uParam0->f_26 = 296;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 16777222;
					uParam0->f_17[1] = 131330;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 16777217;
					uParam0->f_21[1] = 518;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 125.1826f, -194.5066f, 3.3058f };
					uParam0->f_31 = { 0f, 0f, 57.6f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 9:
			if (bParam2)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 334;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 50528261;
					uParam0->f_17[1] = 259;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 16777218;
					uParam0->f_21[1] = 773;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 124.8086f, -201.6896f, 3.3058f };
					uParam0->f_31 = { 0f, 0f, 73.3995f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 10:
			if (bParam2)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 6;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 65536;
					uParam0->f_17[1] = 65539;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 33619968;
					uParam0->f_21[1] = 65545;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 124.8425f, -200.5925f, 3.3058f };
					uParam0->f_31 = { 0f, 0f, 108f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 11:
			if (bParam2)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 45;
					uParam0->f_26 = 250;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 16908292;
					uParam0->f_17[1] = 131330;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 65538;
					uParam0->f_21[1] = 65538;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -34.7374f, -9.8076f, 3.3058f };
					uParam0->f_31 = { 0f, 0f, 131.76f };
					__LIB_8__::func_413(&(uParam0->f_11));
					__LIB_9__::func_137(&(uParam0->f_11), 31);
					break;
			}
			break;
		case 12:
			if (bParam2)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 45;
					uParam0->f_26 = 297;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 17170436;
					uParam0->f_17[1] = 259;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 33685504;
					uParam0->f_21[1] = 65544;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -32.2675f, -6.9976f, 3.3058f };
					uParam0->f_31 = { 0f, 0f, 298.08f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 13:
			if (bParam2)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 45;
					uParam0->f_26 = 328;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 50593794;
					uParam0->f_17[1] = 769;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 131074;
					uParam0->f_21[1] = 779;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -8.5485f, 2.6414f, 3.3058f };
					uParam0->f_31 = { 0f, 0f, 15.84f };
					__LIB_8__::func_413(&(uParam0->f_11));
					__LIB_9__::func_137(&(uParam0->f_11), 31);
					__LIB_9__::func_137(&(uParam0->f_11), 7);
					break;
			}
			break;
		case 14:
			if (bParam2)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 8;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 196613;
					uParam0->f_17[1] = 65539;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 2;
					uParam0->f_21[1] = 66309;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -34.7675f, -10.4976f, 3.3058f };
					uParam0->f_31 = { 0f, 0f, 54.72f };
					__LIB_8__::func_413(&(uParam0->f_11));
					__LIB_9__::func_137(&(uParam0->f_11), 14);
					break;
			}
			break;
		case 15:
			if (bParam2)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 45;
					uParam0->f_26 = 7;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 84082689;
					uParam0->f_17[1] = 132355;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 16777216;
					uParam0->f_21[1] = 131329;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -5.5044f, 2.4944f, 3.3058f };
					uParam0->f_31 = { 0f, 0f, 334.08f };
					__LIB_8__::func_413(&(uParam0->f_11));
					__LIB_9__::func_137(&(uParam0->f_11), 7);
					break;
			}
			break;
		case 16:
			if (bParam2)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 8;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 131076;
					uParam0->f_17[1] = 65536;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 65537;
					uParam0->f_21[1] = 66048;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -6.0184f, 2.9915f, 3.3058f };
					uParam0->f_31 = { 0f, 0f, 295.92f };
					__LIB_8__::func_413(&(uParam0->f_11));
					__LIB_9__::func_137(&(uParam0->f_11), 7);
					break;
			}
			break;
		case 17:
			if (bParam2)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 45;
					uParam0->f_26 = 245;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 67174405;
					uParam0->f_17[1] = 132097;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 16777217;
					uParam0->f_21[1] = 66050;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -11.6919f, -13.3291f, 3.3058f };
					uParam0->f_31 = { 0f, 0f, 118.8f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 18:
			if (bParam2)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 45;
					uParam0->f_26 = 339;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 50528257;
					uParam0->f_17[1] = 66305;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 65538;
					uParam0->f_21[1] = 65797;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -23.6794f, -23.9675f, 3.3058f };
					uParam0->f_31 = { 0f, 0f, 148.32f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 19:
			if (bParam2)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 341;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 50659334;
					uParam0->f_17[1] = 65792;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 65536;
					uParam0->f_21[1] = 66305;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -25.3324f, -23.9705f, 3.3058f };
					uParam0->f_31 = { 0f, 0f, 214.56f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 20:
			if (bParam2)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 45;
					uParam0->f_26 = 9;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 33816578;
					uParam0->f_17[1] = 131586;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 16777217;
					uParam0->f_21[1] = 775;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -24.4495f, -23.7527f, 3.3058f };
					uParam0->f_31 = { 0f, 0f, 179.28f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 21:
			if (bParam2)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 220;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 2;
					uParam0->f_17[1] = 65539;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 16777217;
					uParam0->f_21[1] = 257;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -36.8254f, -19.5405f, 3.3058f };
					uParam0->f_31 = { 0f, 0f, 64.8f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 22:
			if (bParam2)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 195;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 84213766;
					uParam0->f_17[1] = 131843;
					uParam0->f_17[2] = 1;
					uParam0->f_21[0] = 16777217;
					uParam0->f_21[1] = 66308;
					uParam0->f_21[2] = 1;
					uParam0->f_28 = { -36.6544f, -18.4265f, 3.3058f };
					uParam0->f_31 = { 0f, 0f, 110.16f };
					__LIB_8__::func_413(&(uParam0->f_11));
					__LIB_9__::func_137(&(uParam0->f_11), 31);
					break;
			}
			break;
		case 23:
			if (bParam2)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 254;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 84279299;
					uParam0->f_17[1] = 66307;
					uParam0->f_17[2] = 1;
					uParam0->f_21[0] = 33554433;
					uParam0->f_21[1] = 131590;
					uParam0->f_21[2] = 2;
					uParam0->f_28 = { -20.2734f, -17.4526f, 3.3058f };
					uParam0->f_31 = { 0f, 0f, 12.96f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 24:
			if (bParam2)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 45;
					uParam0->f_26 = 332;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 50397189;
					uParam0->f_17[1] = 769;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 33619970;
					uParam0->f_21[1] = 518;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -21.2975f, -17.1855f, 3.3058f };
					uParam0->f_31 = { 0f, 0f, 316.8f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 25:
			if (bParam2)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 249;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 2;
					uParam0->f_17[1] = 1;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 16842752;
					uParam0->f_21[1] = 256;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -3.3024f, -14.3047f, 3.3058f };
					uParam0->f_31 = { 0f, 0f, 313.2f };
					__LIB_8__::func_413(&(uParam0->f_11));
					__LIB_9__::func_137(&(uParam0->f_11), 31);
					break;
			}
			break;
		case 26:
			if (bParam2)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 325;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 16908292;
					uParam0->f_17[1] = 65537;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 33619968;
					uParam0->f_21[1] = 514;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -3.3634f, -12.9375f, 3.3058f };
					uParam0->f_31 = { 0f, 0f, 241.2f };
					__LIB_8__::func_413(&(uParam0->f_11));
					__LIB_9__::func_137(&(uParam0->f_11), 31);
					break;
			}
			break;
		case 27:
			if (bParam2)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 181;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 65540;
					uParam0->f_17[1] = 0;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 16842754;
					uParam0->f_21[1] = 131584;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 32.2075f, -24.4817f, 3.3058f };
					uParam0->f_31 = { 0f, 0f, 238.32f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 28:
			if (bParam2)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 323;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 83886082;
					uParam0->f_17[1] = 66306;
					uParam0->f_17[2] = 1;
					uParam0->f_21[0] = 16842754;
					uParam0->f_21[1] = 256;
					uParam0->f_21[2] = 1;
					uParam0->f_28 = { 21.1926f, -16.3945f, 3.3058f };
					uParam0->f_31 = { 0f, 0f, 334.8f };
					__LIB_8__::func_413(&(uParam0->f_11));
					__LIB_9__::func_137(&(uParam0->f_11), 31);
					break;
			}
			break;
		case 29:
			if (bParam2)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 45;
					uParam0->f_26 = 9;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 84279300;
					uParam0->f_17[1] = 1282;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 65538;
					uParam0->f_21[1] = 131080;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 17.4426f, -17.1545f, 3.3058f };
					uParam0->f_31 = { 0f, 0f, 309.6f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 30:
			if (bParam2)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 272;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 16908292;
					uParam0->f_17[1] = 65536;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 33619968;
					uParam0->f_21[1] = 66049;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 29.4205f, -19.1626f, 3.3058f };
					uParam0->f_31 = { 0f, 0f, 37.44f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 31:
			if (bParam2)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 45;
					uParam0->f_26 = 333;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 33816578;
					uParam0->f_17[1] = 66048;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 131074;
					uParam0->f_21[1] = 775;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 25.0636f, -19.2095f, 3.3058f };
					uParam0->f_31 = { 0f, 0f, 306.72f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 32:
			if (bParam2)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 45;
					uParam0->f_26 = 339;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 262146;
					uParam0->f_17[1] = 131074;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 65536;
					uParam0->f_21[1] = 131843;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 34.2325f, -24.3777f, 3.3058f };
					uParam0->f_31 = { 0f, 0f, 127.44f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 33:
			if (bParam2)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 344;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 393219;
					uParam0->f_17[1] = 3;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 16777217;
					uParam0->f_21[1] = 66054;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 33.2275f, -24.2856f, 3.3058f };
					uParam0->f_31 = { 0f, 0f, 187.2f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 34:
			if (bParam2)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 12;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 67371009;
					uParam0->f_17[1] = 1;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 16777217;
					uParam0->f_21[1] = 65793;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 18.0455f, -16.4705f, 3.3058f };
					uParam0->f_31 = { 0f, 0f, 183.6f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 35:
			if (bParam2)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 45;
					uParam0->f_26 = 7;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 67436547;
					uParam0->f_17[1] = 66563;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 33554434;
					uParam0->f_21[1] = 65536;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 22.0486f, -16.4456f, 3.3058f };
					uParam0->f_31 = { 0f, 0f, 32.4f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 36:
			if (bParam2)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 45;
					uParam0->f_26 = 287;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 84083717;
					uParam0->f_17[1] = 66817;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 33620224;
					uParam0->f_21[1] = 65536;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 3.9481f, -28.2766f, 3.3058f };
					uParam0->f_31 = { 0f, 0f, 65.625f };
					__LIB_8__::func_413(&(uParam0->f_11));
					__LIB_9__::func_137(&(uParam0->f_11), 7);
					break;
			}
			break;
		case 37:
			if (bParam2)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 45;
					uParam0->f_26 = 283;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 6;
					uParam0->f_17[1] = 0;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 16908288;
					uParam0->f_21[1] = 131590;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 3.4061f, -29.895f, 3.3058f };
					uParam0->f_31 = { 0f, 0f, 29.36f };
					__LIB_8__::func_413(&(uParam0->f_11));
					__LIB_9__::func_137(&(uParam0->f_11), 7);
					break;
			}
			break;
		case 38:
			if (bParam2)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 178;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 327686;
					uParam0->f_17[1] = 131075;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 33619969;
					uParam0->f_21[1] = 131844;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 18.6166f, -5.4966f, 3.3058f };
					uParam0->f_31 = { 0f, 0f, 224.64f };
					__LIB_8__::func_413(&(uParam0->f_11));
					__LIB_9__::func_137(&(uParam0->f_11), 42);
					break;
			}
			break;
		case 39:
			if (bParam2)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 246;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 67371009;
					uParam0->f_17[1] = 131843;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 16777218;
					uParam0->f_21[1] = 65794;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 12.1276f, 3.3015f, 3.3058f };
					uParam0->f_31 = { 0f, 0f, 324f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 40:
			if (bParam2)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 45;
					uParam0->f_26 = 250;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 67108870;
					uParam0->f_17[1] = 66562;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 33619970;
					uParam0->f_21[1] = 131586;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 13.2075f, 3.2715f, 3.3058f };
					uParam0->f_31 = { 0f, 0f, 22.32f };
					__LIB_8__::func_413(&(uParam0->f_11));
					__LIB_9__::func_137(&(uParam0->f_11), 31);
					break;
			}
			break;
	}
	if (!__LIB_0__::func_86(uParam0->f_28))
	{
		uParam0->f_28 = { __LIB_8__::func_457(__LIB_8__::func_509(-1), __LIB_8__::func_508(-1), uParam0->f_28) };
	}
	if (uParam0->f_31.f_2 != -1f)
	{
		uParam0->f_31.f_2 = __LIB_8__::func_456(__LIB_8__::func_508(-1), uParam0->f_31.f_2);
	}
}

int func_5230(var uParam0, int iParam1)//Position - 0x1A4E00
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
		func_5224(iParam1, uParam0, &Var2, iVar0, uParam0->f_1, 1);
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

void func_5233(var uParam0, int iParam1)//Position - 0x1A4EB8
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1733498/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_1 = 1733489/*__LIB_0__::func_109*/;
			break;
		case 2:
			uParam0->f_2 = 1733330/*__LIB_31__::func_173*/;
			break;
		case 3:
			uParam0->f_3 = 1733321/*__LIB_0__::func_114*/;
			break;
		case 4:
			uParam0->f_4 = 1733311/*__LIB_8__::func_545*/;
			break;
		case 5:
			uParam0->f_5 = 1733296/*__LIB_8__::func_544*/;
			break;
		case 6:
			uParam0->f_6 = 1733287/*__LIB_0__::func_114*/;
			break;
		case 9:
			uParam0->f_9 = 1730215/*__LIB_31__::func_90*/;
			break;
		case 10:
			uParam0->f_10 = 1730163/*__LIB_31__::func_386*/;
			break;
		case 11:
			uParam0->f_11 = 1729746/*__LIB_10__::func_670*/;
			break;
		case 12:
			uParam0->f_12 = 1729267/*__LIB_9__::func_75*/;
			break;
		case 14:
			uParam0->f_14 = 1729253/*__LIB_8__::func_538*/;
			break;
		case 7:
			uParam0->f_7 = 1729230/*__LIB_3__::func_844*/;
			break;
		case 8:
			uParam0->f_8 = 1729221/*__LIB_7__::func_239*/;
			break;
		case 17:
			uParam0->f_17 = 1729072/*__LIB_8__::func_537*/;
			break;
		case 18:
			uParam0->f_18 = 1729032/*__LIB_9__::func_863*/;
			break;
		case 19:
			uParam0->f_19 = 1728955/*__LIB_8__::func_536*/;
			break;
		case 21:
			uParam0->f_21 = 1728829/*__LIB_9__::func_862*/;
			break;
		case 29:
			uParam0->f_29 = 1728633/*__LIB_9__::func_153*/;
			break;
		case 23:
			uParam0->f_22 = 1728449/*__LIB_9__::func_896*/;
			break;
		case 22:
			uParam0->f_23 = 1728219/*__LIB_9__::func_74*/;
			break;
		case 24:
			uParam0->f_24 = 1727937/*__LIB_9__::func_73*/;
			break;
		case 25:
			uParam0->f_25 = 1727637/*__LIB_12__::func_399*/;
			break;
		case 26:
			uParam0->f_26 = 1724763/*__LIB_9__::func_968*/;
			break;
		case 31:
			uParam0->f_32 = 1724754/*__LIB_0__::func_114*/;
			break;
		case 32:
			uParam0->f_33 = 1724667/*__LIB_9__::func_152*/;
			break;
		case 33:
			uParam0->f_34 = 1724561/*__LIB_8__::func_528*/;
			break;
	}
}

void func_5283(var uParam0, int iParam1)//Position - 0x1A7383
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1803603/*__LIB_9__::func_161*/;
			break;
		case 1:
			uParam0->f_1 = 1803594/*__LIB_0__::func_109*/;
			break;
		case 2:
			uParam0->f_2 = 1803435/*func_5347*/;
			break;
		case 3:
			uParam0->f_3 = 1803426/*__LIB_1__::func_806*/;
			break;
		case 4:
			uParam0->f_4 = 1803416/*__LIB_8__::func_571*/;
			break;
		case 5:
			uParam0->f_5 = 1803383/*__LIB_8__::func_570*/;
			break;
		case 6:
			uParam0->f_6 = 1803374/*__LIB_1__::func_806*/;
			break;
		case 9:
			uParam0->f_9 = 1766103/*func_5333*/;
			break;
		case 10:
			uParam0->f_10 = 1766051/*func_5332*/;
			break;
		case 11:
			uParam0->f_11 = 1743438/*__LIB_10__::func_671*/;
			break;
		case 12:
			uParam0->f_12 = 1741749/*__LIB_9__::func_72*/;
			break;
		case 14:
			uParam0->f_14 = 1741735/*__LIB_9__::func_77*/;
			break;
		case 7:
			uParam0->f_7 = 1741712/*__LIB_8__::func_554*/;
			break;
		case 8:
			uParam0->f_8 = 1741699/*__LIB_8__::func_508*/;
			break;
		case 16:
			uParam0->f_16 = 1741641/*__LIB_8__::func_398*/;
			break;
		case 17:
			uParam0->f_17 = 1741507/*__LIB_7__::func_240*/;
			break;
		case 18:
			uParam0->f_18 = 1741448/*__LIB_9__::func_859*/;
			break;
		case 19:
			uParam0->f_19 = 1740567/*__LIB_9__::func_158*/;
			break;
		case 21:
			uParam0->f_21 = 1740421/*__LIB_9__::func_858*/;
			break;
		case 30:
			uParam0->f_31 = 1740173/*__LIB_9__::func_157*/;
			break;
		case 23:
			uParam0->f_22 = 1740064/*__LIB_8__::func_550*/;
			break;
		case 22:
			uParam0->f_23 = 1739899/*__LIB_9__::func_76*/;
			break;
		case 24:
			uParam0->f_24 = 1739169/*__LIB_8__::func_549*/;
			break;
		case 25:
			uParam0->f_25 = 1738872/*__LIB_11__::func_258*/;
			break;
		case 26:
			uParam0->f_26 = 1737126/*__LIB_9__::func_947*/;
			break;
		case 31:
			uParam0->f_32 = 1737117/*__LIB_0__::func_114*/;
			break;
		case 33:
			uParam0->f_34 = 1737039/*__LIB_8__::func_548*/;
			break;
		case 28:
			uParam0->f_28 = 1733997/*__LIB_9__::func_155*/;
			break;
	}
}

void func_5332(var uParam0, var uParam1)//Position - 0x1AF2A3
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		uParam1->f_1 = __LIB_8__::func_570();
		*uParam1 = __LIB_1__::func_806();
		uParam1->f_3 = func_5347(uParam1, -1);
		uParam1->f_4 = __LIB_1__::func_806(uParam1, -1);
	}
}

void func_5333(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)//Position - 0x1AF2D7
{
	int iVar0;
	iVar0 = SYSTEM::FLOOR((IntToFloat(iParam4) / 100f));
	switch (iVar0)
	{
		case 0:
			func_5342(uParam2, iParam3, iParam4, bParam5);
			break;
		case 1:
			func_5336(uParam2, iParam3, iParam4, bParam5);
			break;
	}
	__LIB_9__::func_159(uParam2, iParam3, iVar0);
}

void func_5336(var uParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x1AF877
{
	switch (iParam1)
	{
		case 0:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 12;
					uParam0->f_27 = 2;
					uParam0->f_17[0] = 33816577;
					uParam0->f_17[1] = 131585;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 16842753;
					uParam0->f_21[1] = 131329;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 27.7905f, 44.3623f, 2.1071f };
					uParam0->f_31 = { 0f, 0f, 180f };
					__LIB_8__::func_413(&(uParam0->f_11));
					__LIB_9__::func_137(&(uParam0->f_11), 7);
					break;
			}
			break;
		case 1:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 322;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 16908292;
					uParam0->f_17[1] = 131330;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 65538;
					uParam0->f_21[1] = 65538;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 10.5455f, -2.9966f, 0.9904f };
					uParam0->f_31 = { 0f, 0f, 164.16f };
					__LIB_8__::func_413(&(uParam0->f_11));
					__LIB_9__::func_137(&(uParam0->f_11), 31);
					break;
			}
			break;
		case 2:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 45;
					uParam0->f_26 = 250;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 17170436;
					uParam0->f_17[1] = 259;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 33685504;
					uParam0->f_21[1] = 65544;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 9.6655f, -2.9966f, 0.9904f };
					uParam0->f_31 = { 0f, 0f, 196.56f };
					__LIB_8__::func_413(&(uParam0->f_11));
					__LIB_9__::func_137(&(uParam0->f_11), 31);
					break;
			}
			break;
		case 3:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 45;
					uParam0->f_26 = 297;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 393218;
					uParam0->f_17[1] = 3;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 33619968;
					uParam0->f_21[1] = 519;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 12.9255f, 2.6934f, 0.9904f };
					uParam0->f_31 = { 0f, 0f, 353.52f };
					__LIB_8__::func_413(&(uParam0->f_11));
					__LIB_9__::func_137(&(uParam0->f_11), 31);
					break;
			}
			break;
		case 4:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 45;
					uParam0->f_26 = 7;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 50462720;
					uParam0->f_17[1] = 769;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 16842752;
					uParam0->f_21[1] = 131329;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 21.592f, 35.6499f, 2.1116f };
					uParam0->f_31 = { 0f, 0f, 26.795f };
					__LIB_8__::func_413(&(uParam0->f_11));
					__LIB_9__::func_137(&(uParam0->f_11), 31);
					break;
			}
			break;
		case 5:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 8;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 67174400;
					uParam0->f_17[1] = 65539;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 16777217;
					uParam0->f_21[1] = 11;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 20.843f, 35.3689f, 2.1032f };
					uParam0->f_31 = { 0f, 0f, 2.16f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 6:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 341;
					uParam0->f_27 = 2;
					uParam0->f_17[0] = 33751045;
					uParam0->f_17[1] = 66048;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 65537;
					uParam0->f_21[1] = 66304/*__LIB_1__::func_766*/;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 24.4336f, 27.5444f, 2.1002f };
					uParam0->f_31 = { 0f, 0f, 231.12f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 7:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 259;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 2;
					uParam0->f_17[1] = 0;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 65538;
					uParam0->f_21[1] = 65794;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 1.8156f, 3.2395f, 0.9904f };
					uParam0->f_31 = { 0f, 0f, 337.68f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 8:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 45;
					uParam0->f_26 = 296;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 16777222;
					uParam0->f_17[1] = 131330;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 16777217;
					uParam0->f_21[1] = 518;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 2.8256f, 3.1394f, 0.9904f };
					uParam0->f_31 = { 0f, 0f, 0.72f };
					__LIB_8__::func_413(&(uParam0->f_11));
					__LIB_9__::func_137(&(uParam0->f_11), 31);
					break;
			}
			break;
		case 9:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 264;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 50528261;
					uParam0->f_17[1] = 257;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 16777218;
					uParam0->f_21[1] = 769;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 7.0295f, 28.4805f, 2.1004f };
					uParam0->f_31 = { 0f, 0f, 99.36f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 10:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 301;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 65536;
					uParam0->f_17[1] = 65539;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 33619968;
					uParam0->f_21[1] = 65545;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 6.4565f, 29.5095f, 2.1007f };
					uParam0->f_31 = { 0f, 0f, 135.36f };
					__LIB_8__::func_413(&(uParam0->f_11));
					__LIB_9__::func_137(&(uParam0->f_11), 31);
					break;
			}
			break;
		case 11:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 45;
					uParam0->f_26 = 182;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 84279300;
					uParam0->f_17[1] = 1281;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 16842754;
					uParam0->f_21[1] = 4;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 11.4511f, 38.793f, 2.1083f };
					uParam0->f_31 = { 0f, 0f, 186.48f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 12:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 195;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 67371009;
					uParam0->f_17[1] = 65537;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 33619968;
					uParam0->f_21[1] = 256;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 14.8921f, 38.4724f, 2.1014f };
					uParam0->f_31 = { 0f, 0f, 148.32f };
					__LIB_8__::func_413(&(uParam0->f_11));
					__LIB_9__::func_137(&(uParam0->f_11), 31);
					break;
			}
			break;
		case 13:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 222;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 2;
					uParam0->f_17[1] = 131072;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 16842753;
					uParam0->f_21[1] = 257;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 12.2861f, 38.3179f, 2.1029f };
					uParam0->f_31 = { 0f, 0f, 158.655f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 14:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 45;
					uParam0->f_26 = 228;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 50593794;
					uParam0->f_17[1] = 131841;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 33554433;
					uParam0->f_21[1] = 131847;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 10.598f, 38.116f, 2.1121f };
					uParam0->f_31 = { 0f, 0f, 231.12f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 15:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 45;
					uParam0->f_26 = 9;
					uParam0->f_27 = 2;
					uParam0->f_17[0] = 33619973;
					uParam0->f_17[1] = 66049;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 16908288;
					uParam0->f_21[1] = 522;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 8.6035f, 38.4873f, 2.0284f };
					uParam0->f_31 = { 0f, 0f, 228.24f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 16:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 294;
					uParam0->f_27 = 2;
					uParam0->f_17[0] = 17104902;
					uParam0->f_17[1] = 65536;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 33554432;
					uParam0->f_21[1] = 66305;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -20.7844f, 42.2295f, 2.1017f };
					uParam0->f_31 = { 0f, 0f, 293.76f };
					__LIB_8__::func_413(&(uParam0->f_11));
					__LIB_9__::func_137(&(uParam0->f_11), 31);
					break;
			}
			break;
		case 17:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 195;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 84017156;
					uParam0->f_17[1] = 131842;
					uParam0->f_17[2] = 1;
					uParam0->f_21[0] = 16777216;
					uParam0->f_21[1] = 131584;
					uParam0->f_21[2] = 1;
					uParam0->f_28 = { -14.3904f, 44.3994f, 2.1005f };
					uParam0->f_31 = { 0f, 0f, 137.52f };
					__LIB_8__::func_413(&(uParam0->f_11));
					__LIB_9__::func_137(&(uParam0->f_11), 31);
					break;
			}
			break;
		case 18:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 220;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 50724867;
					uParam0->f_17[1] = 258;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 65537;
					uParam0->f_21[1] = 514;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -14.2885f, 43.1423f, 2.101f };
					uParam0->f_31 = { 0f, 0f, 65.52f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 19:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 256;
					uParam0->f_27 = 1;
					uParam0->f_17[0] = 33554434;
					uParam0->f_17[1] = 131586;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 2;
					uParam0->f_21[1] = 257;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 2.5736f, 39.0674f, 2.0817f };
					uParam0->f_31 = { 0f, 0f, 191.52f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 20:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 45;
					uParam0->f_26 = 299;
					uParam0->f_27 = 1;
					uParam0->f_17[0] = 50593794;
					uParam0->f_17[1] = 769;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 131074;
					uParam0->f_21[1] = 779;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 3.4736f, 39.0674f, 2.1028f };
					uParam0->f_31 = { 0f, 0f, 145.44f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 21:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 325;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 196613;
					uParam0->f_17[1] = 65539;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 2;
					uParam0->f_21[1] = 66309;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -29.1294f, 18.6804f, 2.1004f };
					uParam0->f_31 = { 0f, 0f, 149.76f };
					__LIB_8__::func_413(&(uParam0->f_11));
					__LIB_9__::func_137(&(uParam0->f_11), 31);
					break;
			}
			break;
		case 22:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 45;
					uParam0->f_26 = 9;
					uParam0->f_27 = 2;
					uParam0->f_17[0] = 131072;
					uParam0->f_17[1] = 0;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 2;
					uParam0->f_21[1] = 65797;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -21.3544f, 38.5544f, 2.1126f };
					uParam0->f_31 = { 0f, 0f, 40.32f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 23:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 12;
					uParam0->f_27 = 2;
					uParam0->f_17[0] = 50659334;
					uParam0->f_17[1] = 257;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 33619970;
					uParam0->f_21[1] = 66306;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -22.1514f, 38.4885f, 2.1008f };
					uParam0->f_31 = { 0f, 0f, 2.16f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 24:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 45;
					uParam0->f_26 = 9;
					uParam0->f_27 = 2;
					uParam0->f_17[0] = 84213763;
					uParam0->f_17[1] = 132352;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 2;
					uParam0->f_21[1] = 65544;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -21.5804f, 39.5085f, 2.1088f };
					uParam0->f_31 = { 0f, 0f, 169.2f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 25:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 194;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 83886082;
					uParam0->f_17[1] = 769;
					uParam0->f_17[2] = 1;
					uParam0->f_21[0] = 33619968;
					uParam0->f_21[1] = 131328;
					uParam0->f_21[2] = 2;
					uParam0->f_28 = { -26.7759f, 39.6528f, 2.1018f };
					uParam0->f_31 = { 0f, 0f, 169.25f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 26:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 218;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 83951616;
					uParam0->f_17[1] = 66306;
					uParam0->f_17[2] = 1;
					uParam0->f_21[0] = 65536;
					uParam0->f_21[1] = 131073;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -28.1869f, 39.3669f, 2.1003f };
					uParam0->f_31 = { 0f, 0f, 220.795f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 27:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 208;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 16973829;
					uParam0->f_17[1] = 131074;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 16777216;
					uParam0->f_21[1] = 769;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -10.1635f, 17.0764f, 2.0986f };
					uParam0->f_31 = { 0f, 0f, 210.96f };
					__LIB_8__::func_413(&(uParam0->f_11));
					__LIB_9__::func_137(&(uParam0->f_11), 7);
					break;
			}
			break;
		case 28:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 45;
					uParam0->f_26 = 339;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 67305473;
					uParam0->f_17[1] = 66560;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 16842754;
					uParam0->f_21[1] = 131337;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 26.3146f, 27.9805f, 2.112f };
					uParam0->f_31 = { 0f, 0f, 144f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 29:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 45;
					uParam0->f_26 = 245;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 16842757;
					uParam0->f_17[1] = 131328;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 1;
					uParam0->f_21[1] = 66058;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 25.4205f, 28.0435f, 2.1076f };
					uParam0->f_31 = { 0f, 0f, 185.76f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 30:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 178;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 50462724;
					uParam0->f_17[1] = 131330;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 1;
					uParam0->f_21[1] = 131585;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -23.3295f, 20.6504f, 2.1004f };
					uParam0->f_31 = { 0f, 0f, 180.72f };
					__LIB_8__::func_413(&(uParam0->f_11));
					__LIB_9__::func_137(&(uParam0->f_11), 42);
					break;
			}
			break;
		case 31:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 45;
					uParam0->f_26 = 285;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 196609;
					uParam0->f_17[1] = 3;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 33685505;
					uParam0->f_21[1] = 65797;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 8.4346f, 17.7324f, 2.1124f };
					uParam0->f_31 = { 0f, 0f, 115.2f };
					__LIB_8__::func_413(&(uParam0->f_11));
					__LIB_9__::func_137(&(uParam0->f_11), 31);
					break;
			}
			break;
		case 32:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 45;
					uParam0->f_26 = 197;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 67239936;
					uParam0->f_17[1] = 132096;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 2;
					uParam0->f_21[1] = 131329;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 7.4956f, 18.2874f, 2.1116f };
					uParam0->f_31 = { 0f, 0f, 158.4f };
					__LIB_8__::func_413(&(uParam0->f_11));
					__LIB_9__::func_137(&(uParam0->f_11), 31);
					break;
			}
			break;
		case 33:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 342;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 67239940;
					uParam0->f_17[1] = 131073;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 33619970;
					uParam0->f_21[1] = 66048;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -39.5024f, 31.5173f, 2.1084f };
					uParam0->f_31 = { 0f, 0f, 199.44f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 34:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 263;
					uParam0->f_27 = 1;
					uParam0->f_17[0] = 33816577;
					uParam0->f_17[1] = 66048;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 33619968;
					uParam0->f_21[1] = 256;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -38.2384f, 26.9214f, 2.1084f };
					uParam0->f_31 = { 0f, 0f, 48.96f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 35:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 261;
					uParam0->f_27 = 1;
					uParam0->f_17[0] = 67436550;
					uParam0->f_17[1] = 131073;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 1;
					uParam0->f_21[1] = 131841;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -37.9435f, 27.9863f, 2.1084f };
					uParam0->f_31 = { 0f, 0f, 88.56f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 36:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 271;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 50462724;
					uParam0->f_17[1] = 131330;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 33554433;
					uParam0->f_21[1] = 513;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -38.2024f, 31.1885f, 2.1084f };
					uParam0->f_31 = { 0f, 0f, 138.24f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 37:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 45;
					uParam0->f_26 = 243;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 84279300;
					uParam0->f_17[1] = 132353;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 131072;
					uParam0->f_21[1] = 65544;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -39.3544f, 0.0764f, 1.0091f };
					uParam0->f_31 = { 0f, 0f, 218.16f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 38:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 45;
					uParam0->f_26 = 185;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 33554438;
					uParam0->f_17[1] = 131587;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 33685504;
					uParam0->f_21[1] = 514;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -10.7134f, 16.0364f, 2.0984f };
					uParam0->f_31 = { 0f, 0f, 270f };
					__LIB_8__::func_413(&(uParam0->f_11));
					__LIB_9__::func_137(&(uParam0->f_11), 7);
					break;
			}
			break;
		case 39:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 249;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 50593793;
					uParam0->f_17[1] = 65794;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 16777217;
					uParam0->f_21[1] = 131330;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -38.6874f, 0.5925f, 0.9942f };
					uParam0->f_31 = { 0f, 0f, 195.12f };
					__LIB_8__::func_413(&(uParam0->f_11));
					__LIB_9__::func_137(&(uParam0->f_11), 31);
					break;
			}
			break;
		case 40:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 335;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 33619968;
					uParam0->f_17[1] = 513;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 16777217;
					uParam0->f_21[1] = 2;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -16.8074f, 3.5044f, 0.9966f };
					uParam0->f_31 = { 0f, 0f, 355.68f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 41:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 210;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 16973829;
					uParam0->f_17[1] = 65536;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 65537;
					uParam0->f_21[1] = 770;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -15.6115f, 3.6924f, 0.9973f };
					uParam0->f_31 = { 0f, 0f, 45.36f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 42:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 45;
					uParam0->f_26 = 7;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 84082689;
					uParam0->f_17[1] = 132355;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 16777216;
					uParam0->f_21[1] = 131329;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -5.5044f, 2.4944f, 0.9981f };
					uParam0->f_31 = { 0f, 0f, 334.08f };
					__LIB_8__::func_413(&(uParam0->f_11));
					__LIB_9__::func_137(&(uParam0->f_11), 7);
					__LIB_9__::func_137(&(uParam0->f_11), 31);
					break;
			}
			break;
		case 43:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 8;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 131076;
					uParam0->f_17[1] = 65536;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 65537;
					uParam0->f_21[1] = 66048;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -6.0184f, 2.9915f, 0.9919f };
					uParam0->f_31 = { 0f, 0f, 295.92f };
					__LIB_8__::func_413(&(uParam0->f_11));
					__LIB_9__::func_137(&(uParam0->f_11), 7);
					break;
			}
			break;
		case 44:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 45;
					uParam0->f_26 = 182;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 16777222;
					uParam0->f_17[1] = 65794;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 1;
					uParam0->f_21[1] = 522;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -17.084f, -2.7815f, 1.0069f };
					uParam0->f_31 = { 0f, 0f, 190.08f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 45:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 45;
					uParam0->f_26 = 284;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 67174405;
					uParam0->f_17[1] = 132097;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 16777217;
					uParam0->f_21[1] = 66050;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -11.9485f, -14.2876f, 0.9967f };
					uParam0->f_31 = { 0f, 0f, 62.64f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 46:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 273;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 33685508;
					uParam0->f_17[1] = 131586;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 2;
					uParam0->f_21[1] = 513;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -11.8064f, -13.1885f, 0.994f };
					uParam0->f_31 = { 0f, 0f, 123.84f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 47:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 314;
					uParam0->f_27 = Global_262145.f_31649 /* Tunable: -1163921635 */;
					uParam0->f_17[0] = 67371009;
					uParam0->f_17[1] = 131073;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 33619968;
					uParam0->f_21[1] = 65792;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -13.4285f, -17.0767f, 0.9944f };
					uParam0->f_31 = { 0f, 0f, 10.8f };
					__LIB_8__::func_413(&(uParam0->f_11));
					__LIB_9__::func_137(&(uParam0->f_11), 31);
					if (Global_262145.f_31651 /* Tunable: -1477346281 */)
					{
						__LIB_9__::func_137(&(uParam0->f_11), 0);
					}
					break;
			}
			break;
		case 48:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 295;
					uParam0->f_27 = Global_262145.f_31648 /* Tunable: -921857032 */;
					uParam0->f_17[0] = 67502083;
					uParam0->f_17[1] = 131074;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 0;
					uParam0->f_21[1] = 131586;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -18.1189f, -3.2012f, 0.9999f };
					uParam0->f_31 = { 0f, 0f, 221.76f };
					__LIB_8__::func_413(&(uParam0->f_11));
					__LIB_9__::func_137(&(uParam0->f_11), 31);
					if (Global_262145.f_31650 /* Tunable: -1567592099 */)
					{
						__LIB_9__::func_137(&(uParam0->f_11), 0);
					}
					break;
			}
			break;
		case 49:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 45;
					uParam0->f_26 = 346;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 50528257;
					uParam0->f_17[1] = 66305;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 65538;
					uParam0->f_21[1] = 65797;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -23.6794f, -23.9675f, 1.0069f };
					uParam0->f_31 = { 0f, 0f, 148.32f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 50:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 211;
					uParam0->f_27 = 1;
					uParam0->f_17[0] = 50659334;
					uParam0->f_17[1] = 65792;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 65536;
					uParam0->f_21[1] = 66305;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -25.3899f, -23.9202f, 1.0066f };
					uParam0->f_31 = { 0f, 0f, 214.56f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 51:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 45;
					uParam0->f_26 = 9;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 33816578;
					uParam0->f_17[1] = 131586;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 16777217;
					uParam0->f_21[1] = 775;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -24.4495f, -23.7527f, 1.0066f };
					uParam0->f_31 = { 0f, 0f, 179.28f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 52:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 181;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 2;
					uParam0->f_17[1] = 65539;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 16777217;
					uParam0->f_21[1] = 257;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -36.6654f, -19.0605f, 1.0022f };
					uParam0->f_31 = { 0f, 0f, 64.8f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 53:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 211;
					uParam0->f_27 = Global_262145.f_31648 /* Tunable: -921857032 */;
					uParam0->f_17[0] = 17039361;
					uParam0->f_17[1] = 3;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 33554434;
					uParam0->f_21[1] = 258;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -37.0679f, -20.021f, 0.9956f };
					uParam0->f_31 = { 0f, 0f, 36.72f };
					__LIB_8__::func_413(&(uParam0->f_11));
					if (Global_262145.f_31650 /* Tunable: -1567592099 */)
					{
						__LIB_9__::func_137(&(uParam0->f_11), 0);
					}
					break;
			}
			break;
		case 54:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 45;
					uParam0->f_26 = 184;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 83951621;
					uParam0->f_17[1] = 66816;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 33685504;
					uParam0->f_21[1] = 131586;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -37.7465f, -17.1711f, 1.008f };
					uParam0->f_31 = { 0f, 0f, 165.6f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 55:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 189;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 84213766;
					uParam0->f_17[1] = 131842;
					uParam0->f_17[2] = 1;
					uParam0->f_21[0] = 16777217;
					uParam0->f_21[1] = 66306;
					uParam0->f_21[2] = 1;
					uParam0->f_28 = { -36.621f, -17.676f, 0.9963f };
					uParam0->f_31 = { 0f, 0f, 115.2f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 56:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 309;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 84279299;
					uParam0->f_17[1] = 66306;
					uParam0->f_17[2] = 1;
					uParam0->f_21[0] = 33554433;
					uParam0->f_21[1] = 131586;
					uParam0->f_21[2] = 2;
					uParam0->f_28 = { -20.1079f, -17.6521f, 1.0021f };
					uParam0->f_31 = { 0f, 0f, 12.96f };
					__LIB_8__::func_413(&(uParam0->f_11));
					__LIB_9__::func_137(&(uParam0->f_11), 31);
					break;
			}
			break;
		case 57:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 45;
					uParam0->f_26 = 250;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 50397189;
					uParam0->f_17[1] = 769;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 33619970;
					uParam0->f_21[1] = 518;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -21.1675f, -17.3057f, 0.9936f };
					uParam0->f_31 = { 0f, 0f, 316.8f };
					__LIB_8__::func_413(&(uParam0->f_11));
					__LIB_9__::func_137(&(uParam0->f_11), 31);
					break;
			}
			break;
		case 58:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 247;
					uParam0->f_27 = Global_262145.f_31648 /* Tunable: -921857032 */;
					uParam0->f_17[0] = 2;
					uParam0->f_17[1] = 3;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 16842752;
					uParam0->f_21[1] = 258;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -11.3524f, -6.5046f, 0.9996f };
					uParam0->f_31 = { 0f, 0f, 113.76f };
					__LIB_8__::func_413(&(uParam0->f_11));
					__LIB_9__::func_137(&(uParam0->f_11), 31);
					if (Global_262145.f_31650 /* Tunable: -1567592099 */)
					{
						__LIB_9__::func_137(&(uParam0->f_11), 0);
					}
					break;
			}
			break;
		case 59:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 257;
					uParam0->f_27 = Global_262145.f_31648 /* Tunable: -921857032 */;
					uParam0->f_17[0] = 16908292;
					uParam0->f_17[1] = 65537;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 33619968;
					uParam0->f_21[1] = 514;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -11.4534f, -7.3477f, 0.9944f };
					uParam0->f_31 = { 0f, 0f, 47.52f };
					__LIB_8__::func_413(&(uParam0->f_11));
					if (Global_262145.f_31650 /* Tunable: -1567592099 */)
					{
						__LIB_9__::func_137(&(uParam0->f_11), 0);
					}
					break;
			}
			break;
		case 60:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 178;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 84082689;
					uParam0->f_17[1] = 132352;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 0;
					uParam0->f_21[1] = 257;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -24.4225f, -19.7107f, 0.994f };
					uParam0->f_31 = { 0f, 0f, 0f };
					__LIB_8__::func_413(&(uParam0->f_11));
					__LIB_9__::func_137(&(uParam0->f_11), 42);
					break;
			}
			break;
		case 61:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 45;
					uParam0->f_26 = 245;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 33554438;
					uParam0->f_17[1] = 66051;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 33619970;
					uParam0->f_21[1] = 522;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -0.6919f, -3.0781f, 0.9906f };
					uParam0->f_31 = { 0f, 0f, 214.56f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 62:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 45;
					uParam0->f_26 = 3;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 17104899;
					uParam0->f_17[1] = 259;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 16842753;
					uParam0->f_21[1] = 65540;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -1.5209f, -3.895f, 1.0001f };
					uParam0->f_31 = { 0f, 0f, 274.79f };
					__LIB_8__::func_413(&(uParam0->f_11));
					__LIB_9__::func_137(&(uParam0->f_11), 14);
					break;
			}
			break;
		case 63:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 343;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 65540;
					uParam0->f_17[1] = 0;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 16842754;
					uParam0->f_21[1] = 131584;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 32.2476f, -24.4717f, 0.9966f };
					uParam0->f_31 = { 0f, 0f, 243.36f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 64:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 196;
					uParam0->f_27 = 1;
					uParam0->f_17[0] = 84082693;
					uParam0->f_17[1] = 771;
					uParam0->f_17[2] = 1;
					uParam0->f_21[0] = 0;
					uParam0->f_21[1] = 66307;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 22.9155f, 5.2175f, 0.9878f };
					uParam0->f_31 = { 0f, 0f, 263.52f };
					__LIB_8__::func_413(&(uParam0->f_11));
					__LIB_9__::func_137(&(uParam0->f_11), 31);
					break;
			}
			break;
		case 65:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 45;
					uParam0->f_26 = 186;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 84279300;
					uParam0->f_17[1] = 66817;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 33554433;
					uParam0->f_21[1] = 65536;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 24.1051f, 3.8269f, 0.9914f };
					uParam0->f_31 = { 0f, 0f, 0.72f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 66:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 209;
					uParam0->f_27 = 1;
					uParam0->f_17[0] = 83886082;
					uParam0->f_17[1] = 66306;
					uParam0->f_17[2] = 1;
					uParam0->f_21[0] = 33554432;
					uParam0->f_21[1] = 131328;
					uParam0->f_21[2] = 2;
					uParam0->f_28 = { 25.2921f, 4.022f, 0.9909f };
					uParam0->f_31 = { 0f, 0f, 36.72f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 67:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 45;
					uParam0->f_26 = 7;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 327683;
					uParam0->f_17[1] = 131074;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 33685504;
					uParam0->f_21[1] = 4;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 21.5856f, -3.4436f, 0.9863f };
					uParam0->f_31 = { 0f, 0f, 173.7858f };
					__LIB_8__::func_413(&(uParam0->f_11));
					__LIB_9__::func_137(&(uParam0->f_11), 14);
					__LIB_9__::func_137(&(uParam0->f_11), 31);
					break;
			}
			break;
		case 68:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 248;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 50397184;
					uParam0->f_17[1] = 259;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 16842752;
					uParam0->f_21[1] = 9;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 19.0526f, -3.4006f, 0.9875f };
					uParam0->f_31 = { 0f, 0f, 208.8f };
					__LIB_8__::func_413(&(uParam0->f_11));
					__LIB_9__::func_137(&(uParam0->f_11), 31);
					break;
			}
			break;
		case 69:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 175;
					uParam0->f_27 = 2;
					uParam0->f_17[0] = 16973829;
					uParam0->f_17[1] = 3;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 16842754;
					uParam0->f_21[1] = 131845;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 27.1826f, -2.8735f, 0.9878f };
					uParam0->f_31 = { 0f, 0f, 138.24f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 70:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 8;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 83886082;
					uParam0->f_17[1] = 66306;
					uParam0->f_17[2] = 1;
					uParam0->f_21[0] = 16842754;
					uParam0->f_21[1] = 256;
					uParam0->f_21[2] = 1;
					uParam0->f_28 = { 21.1926f, -16.3945f, 0.9886f };
					uParam0->f_31 = { 0f, 0f, 334.8f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 71:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 45;
					uParam0->f_26 = 9;
					uParam0->f_27 = 1;
					uParam0->f_17[0] = 84279300;
					uParam0->f_17[1] = 1282;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 65538;
					uParam0->f_21[1] = 131080;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 17.4525f, -17.1545f, 1.0002f };
					uParam0->f_31 = { 0f, 0f, 309.6f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 72:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 301;
					uParam0->f_27 = 1;
					uParam0->f_17[0] = 16908292;
					uParam0->f_17[1] = 65536;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 33619968;
					uParam0->f_21[1] = 66049;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 30.3105f, -17.7227f, 0.9937f };
					uParam0->f_31 = { 0f, 0f, 91.44f };
					__LIB_8__::func_413(&(uParam0->f_11));
					__LIB_9__::func_137(&(uParam0->f_11), 31);
					break;
			}
			break;
		case 73:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 45;
					uParam0->f_26 = 282;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 33816578;
					uParam0->f_17[1] = 66048;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 131074;
					uParam0->f_21[1] = 775;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 23.9136f, -17.6397f, 0.9953f };
					uParam0->f_31 = { 0f, 0f, 266.4f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 74:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 279;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 50659334;
					uParam0->f_17[1] = 131328;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 65536;
					uParam0->f_21[1] = 770;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 24.4166f, -18.6287f, 0.9956f };
					uParam0->f_31 = { 0f, 0f, 324f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 75:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 45;
					uParam0->f_26 = 339;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 262146;
					uParam0->f_17[1] = 131074;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 65536;
					uParam0->f_21[1] = 131843;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 34.1826f, -24.1377f, 0.9994f };
					uParam0->f_31 = { 0f, 0f, 138.96f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 76:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 258;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 393219;
					uParam0->f_17[1] = 2;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 16777217;
					uParam0->f_21[1] = 66048;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 33.1376f, -23.9255f, 0.9879f };
					uParam0->f_31 = { 0f, 0f, 187.2f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 77:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 12;
					uParam0->f_27 = 1;
					uParam0->f_17[0] = 67371009;
					uParam0->f_17[1] = 1;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 16777217;
					uParam0->f_21[1] = 65793;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 18.0455f, -16.4705f, 0.9884f };
					uParam0->f_31 = { 0f, 0f, 183.6f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 78:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 319;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 33619968;
					uParam0->f_17[1] = 515;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 16777218;
					uParam0->f_21[1] = 131082;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 28.9896f, -7.0105f, 0.9882f };
					uParam0->f_31 = { 0f, 0f, 114.48f };
					__LIB_8__::func_413(&(uParam0->f_11));
					__LIB_9__::func_137(&(uParam0->f_11), 31);
					break;
			}
			break;
		case 79:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 45;
					uParam0->f_26 = 250;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 67436547;
					uParam0->f_17[1] = 66563;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 33554434;
					uParam0->f_21[1] = 65536;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 22.0486f, -16.4456f, 0.9997f };
					uParam0->f_31 = { 0f, 0f, 17.28f };
					__LIB_8__::func_413(&(uParam0->f_11));
					__LIB_9__::func_137(&(uParam0->f_11), 31);
					break;
			}
			break;
		case 80:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 269;
					uParam0->f_27 = Global_262145.f_31649 /* Tunable: -1163921635 */;
					uParam0->f_17[0] = 16777218;
					uParam0->f_17[1] = 65577;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 1;
					uParam0->f_21[1] = 131330;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 12.7506f, -25.9465f, 1.1948f };
					uParam0->f_31 = { 0f, 0f, 128.16f };
					__LIB_8__::func_413(&(uParam0->f_11));
					if (Global_262145.f_31651 /* Tunable: -1477346281 */)
					{
						__LIB_9__::func_137(&(uParam0->f_11), 0);
					}
					break;
			}
			break;
		case 81:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 45;
					uParam0->f_26 = 7;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 84083717;
					uParam0->f_17[1] = 66817;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 33620224;
					uParam0->f_21[1] = 65536;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -23.1494f, 24.4805f, 2.1004f };
					uParam0->f_31 = { 0f, 0f, 48.24f };
					__LIB_8__::func_413(&(uParam0->f_11));
					__LIB_9__::func_137(&(uParam0->f_11), 31);
					break;
			}
			break;
		case 82:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 45;
					uParam0->f_26 = 242;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 6;
					uParam0->f_17[1] = 0;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 16908288;
					uParam0->f_21[1] = 131590;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -24.0094f, 24.3105f, 2.1004f };
					uParam0->f_31 = { 0f, 0f, 347.76f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 83:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 45;
					uParam0->f_26 = 230;
					uParam0->f_27 = Global_262145.f_31649 /* Tunable: -1163921635 */;
					uParam0->f_17[0] = 50528257;
					uParam0->f_17[1] = 66306;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 16908289;
					uParam0->f_21[1] = 131333;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 12.6356f, -26.8357f, 1.2004f };
					uParam0->f_31 = { 0f, 0f, 69.12f };
					__LIB_8__::func_413(&(uParam0->f_11));
					if (Global_262145.f_31651 /* Tunable: -1477346281 */)
					{
						__LIB_9__::func_137(&(uParam0->f_11), 0);
					}
					break;
			}
			break;
		case 84:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 180;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 33947651;
					uParam0->f_17[1] = 512;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 33619970;
					uParam0->f_21[1] = 131585;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -15.928f, -3.175f, 0.9974f };
					uParam0->f_31 = { 0f, 0f, 146.16f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 85:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 8;
					uParam0->f_27 = Global_262145.f_31648 /* Tunable: -921857032 */;
					uParam0->f_17[0] = 16842752;
					uParam0->f_17[1] = 1;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 16842754;
					uParam0->f_21[1] = 65537;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -34.7574f, -9.9475f, 0.9944f };
					uParam0->f_31 = { 0f, 0f, 95.76f };
					__LIB_8__::func_413(&(uParam0->f_11));
					if (Global_262145.f_31650 /* Tunable: -1567592099 */)
					{
						__LIB_9__::func_137(&(uParam0->f_11), 0);
					}
					break;
			}
			break;
		case 86:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 178;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 327686;
					uParam0->f_17[1] = 131075;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 33619969;
					uParam0->f_21[1] = 131844;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 19.5966f, -11.1265f, 0.9883f };
					uParam0->f_31 = { 0f, 0f, 302.4f };
					__LIB_8__::func_413(&(uParam0->f_11));
					__LIB_9__::func_137(&(uParam0->f_11), 42);
					break;
			}
			break;
		case 87:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 324;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 50659334;
					uParam0->f_17[1] = 131329;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 33554434;
					uParam0->f_21[1] = 66306;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 22.3976f, -3.3306f, 0.9898f };
					uParam0->f_31 = { 0f, 0f, 176.4f };
					__LIB_8__::func_413(&(uParam0->f_11));
					__LIB_9__::func_137(&(uParam0->f_11), 31);
					break;
			}
			break;
		case 88:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 45;
					uParam0->f_26 = 250;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 67239936;
					uParam0->f_17[1] = 1026;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 131073;
					uParam0->f_21[1] = 265;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 23.1576f, 4.3445f, 0.989f };
					uParam0->f_31 = { 0f, 0f, 318.96f };
					__LIB_8__::func_413(&(uParam0->f_11));
					__LIB_9__::func_137(&(uParam0->f_11), 31);
					break;
			}
			break;
		case 89:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 45;
					uParam0->f_26 = 245;
					uParam0->f_27 = Global_262145.f_31649 /* Tunable: -1163921635 */;
					uParam0->f_17[0] = 50593793;
					uParam0->f_17[1] = 131843;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 2;
					uParam0->f_21[1] = 65794;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -0.1575f, -16.9246f, 0.9954f };
					uParam0->f_31 = { 0f, 0f, 21.6f };
					__LIB_8__::func_413(&(uParam0->f_11));
					if (Global_262145.f_31651 /* Tunable: -1477346281 */)
					{
						__LIB_9__::func_137(&(uParam0->f_11), 0);
					}
					break;
			}
			break;
		case 90:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 260;
					uParam0->f_27 = Global_262145.f_31649 /* Tunable: -1163921635 */;
					uParam0->f_17[0] = 67108870;
					uParam0->f_17[1] = 66562;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 33619970;
					uParam0->f_21[1] = 131586;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -1.2074f, -16.9846f, 1.0004f };
					uParam0->f_31 = { 0f, 0f, 336.24f };
					__LIB_8__::func_413(&(uParam0->f_11));
					if (Global_262145.f_31651 /* Tunable: -1477346281 */)
					{
						__LIB_9__::func_137(&(uParam0->f_11), 0);
					}
					break;
			}
			break;
		case 91:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 45;
					uParam0->f_26 = 7;
					uParam0->f_27 = 2;
					uParam0->f_17[0] = 33816578;
					uParam0->f_17[1] = 66049;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 65536;
					uParam0->f_21[1] = 66307;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -22.2184f, 39.4065f, 2.0893f };
					uParam0->f_31 = { 0f, 0f, 216f };
					__LIB_8__::func_413(&(uParam0->f_11));
					__LIB_9__::func_137(&(uParam0->f_11), 14);
					__LIB_9__::func_137(&(uParam0->f_11), 31);
					break;
			}
			break;
		case 92:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 207;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 67502083;
					uParam0->f_17[1] = 2;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 0;
					uParam0->f_21[1] = 131585;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 13.7711f, 38.5288f, 2.1014f };
					uParam0->f_31 = { -15.12f, 0f, 215.615f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 93:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 12;
					uParam0->f_27 = 2;
					uParam0->f_17[0] = 33619968;
					uParam0->f_17[1] = 66051;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 33554434;
					uParam0->f_21[1] = 131082;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 8.4835f, 37.6785f, 2.1047f };
					uParam0->f_31 = { 0f, 0f, 275.76f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 94:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 0;
					uParam0->f_17[1] = 0;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 0;
					uParam0->f_21[1] = 0;
					uParam0->f_21[2] = 0;
					__LIB_9__::func_160(iParam2, *uParam0, 0, &(uParam0->f_25), &(uParam0->f_28), &(uParam0->f_31.f_2), &(uParam0->f_26));
					__LIB_8__::func_413(&(uParam0->f_11));
					__LIB_9__::func_137(&(uParam0->f_11), 4);
					break;
			}
			break;
		case 95:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 0;
					uParam0->f_17[1] = 0;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 0;
					uParam0->f_21[1] = 0;
					uParam0->f_21[2] = 0;
					__LIB_9__::func_160(iParam2, *uParam0, 1, &(uParam0->f_25), &(uParam0->f_28), &(uParam0->f_31.f_2), &(uParam0->f_26));
					__LIB_8__::func_413(&(uParam0->f_11));
					__LIB_9__::func_137(&(uParam0->f_11), 4);
					if (!__LIB_8__::func_568())
					{
						__LIB_9__::func_137(&(uParam0->f_11), 0);
					}
					break;
			}
			break;
		case 125:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_26 = 347;
					uParam0->f_27 = 0;
					uParam0->f_28 = { 15.4336f, -0.8333f, 0.9998f };
					uParam0->f_31 = { 0f, 0f, 266.3013f };
					__LIB_8__::func_567(uParam0, iParam1, iParam2);
					__LIB_8__::func_413(&(uParam0->f_11));
					__LIB_9__::func_137(&(uParam0->f_11), 15);
					__LIB_9__::func_137(&(uParam0->f_11), 8);
					__LIB_9__::func_137(&(uParam0->f_11), 7);
					break;
			}
			break;
		case 126:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_26 = 347;
					uParam0->f_27 = 0;
					uParam0->f_28 = { -13.6299f, 16.6377f, 1.1037f };
					uParam0->f_31 = { 0f, 0f, 177.5264f };
					__LIB_8__::func_567(uParam0, iParam1, iParam2);
					__LIB_8__::func_413(&(uParam0->f_11));
					__LIB_9__::func_137(&(uParam0->f_11), 15);
					__LIB_9__::func_137(&(uParam0->f_11), 8);
					__LIB_9__::func_137(&(uParam0->f_11), 7);
					break;
			}
			break;
	}
	if (!__LIB_8__::func_566(iParam1))
	{
		if (!__LIB_0__::func_86(uParam0->f_28))
		{
			uParam0->f_28 = { __LIB_8__::func_457(__LIB_8__::func_554(-1), __LIB_8__::func_508(-1), uParam0->f_28) };
		}
		if (uParam0->f_31.f_2 != -1f)
		{
			uParam0->f_31.f_2 = __LIB_8__::func_456(__LIB_8__::func_508(-1), uParam0->f_31.f_2);
		}
	}
}

void func_5342(var uParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x1B40D7
{
	switch (iParam1)
	{
		case 0:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 12;
					uParam0->f_27 = 2;
					uParam0->f_17[0] = 33816577;
					uParam0->f_17[1] = 131585;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 16842753;
					uParam0->f_21[1] = 131329;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 27.7905f, 44.3623f, 2.1071f };
					uParam0->f_31 = { 0f, 0f, 180f };
					__LIB_8__::func_413(&(uParam0->f_11));
					__LIB_9__::func_137(&(uParam0->f_11), 7);
					break;
			}
			break;
		case 1:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 45;
					uParam0->f_26 = 250;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 16908292;
					uParam0->f_17[1] = 131330;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 65538;
					uParam0->f_21[1] = 65538;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -34.7374f, -9.8076f, 0.9944f };
					uParam0->f_31 = { 0f, 0f, 131.76f };
					__LIB_8__::func_413(&(uParam0->f_11));
					__LIB_9__::func_137(&(uParam0->f_11), 31);
					break;
			}
			break;
		case 2:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 45;
					uParam0->f_26 = 297;
					uParam0->f_27 = Global_262145.f_31648 /* Tunable: -921857032 */;
					uParam0->f_17[0] = 17170436;
					uParam0->f_17[1] = 259;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 33685504;
					uParam0->f_21[1] = 65544;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -32.2675f, -6.9976f, 0.9944f };
					uParam0->f_31 = { 0f, 0f, 298.08f };
					__LIB_8__::func_413(&(uParam0->f_11));
					__LIB_9__::func_137(&(uParam0->f_11), 31);
					if (Global_262145.f_31650 /* Tunable: -1567592099 */)
					{
						__LIB_9__::func_137(&(uParam0->f_11), 0);
					}
					break;
			}
			break;
		case 3:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 252;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 393219;
					uParam0->f_17[1] = 2;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 33619970;
					uParam0->f_21[1] = 2;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 9.9675f, -2.9985f, 0.9944f };
					uParam0->f_31 = { 0f, 0f, 153.36f };
					__LIB_8__::func_413(&(uParam0->f_11));
					__LIB_9__::func_137(&(uParam0->f_11), 31);
					break;
			}
			break;
		case 4:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 45;
					uParam0->f_26 = 7;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 50462720;
					uParam0->f_17[1] = 769;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 16842752;
					uParam0->f_21[1] = 131329;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 21.592f, 35.6499f, 2.1116f };
					uParam0->f_31 = { 0f, 0f, 26.795f };
					__LIB_8__::func_413(&(uParam0->f_11));
					__LIB_9__::func_137(&(uParam0->f_11), 31);
					break;
			}
			break;
		case 5:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 8;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 67174400;
					uParam0->f_17[1] = 65539;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 16777217;
					uParam0->f_21[1] = 11;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 20.843f, 35.3689f, 2.1032f };
					uParam0->f_31 = { 0f, 0f, 2.16f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 6:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 326;
					uParam0->f_27 = 1;
					uParam0->f_17[0] = 33751045;
					uParam0->f_17[1] = 66048;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 65537;
					uParam0->f_21[1] = 66304/*__LIB_1__::func_766*/;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 24.6536f, 27.9143f, 2.1002f };
					uParam0->f_31 = { 0f, 0f, 223.2f };
					__LIB_8__::func_413(&(uParam0->f_11));
					__LIB_9__::func_137(&(uParam0->f_11), 31);
					break;
			}
			break;
		case 7:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 268;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 2;
					uParam0->f_17[1] = 0;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 65538;
					uParam0->f_21[1] = 65794;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 1.9255f, 2.9695f, 1.0004f };
					uParam0->f_31 = { 0f, 0f, 334.08f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 8:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 45;
					uParam0->f_26 = 329;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 16777222;
					uParam0->f_17[1] = 131330;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 16777217;
					uParam0->f_21[1] = 518;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 2.9355f, 3.0095f, 1.0004f };
					uParam0->f_31 = { 0f, 0f, 2.16f };
					__LIB_8__::func_413(&(uParam0->f_11));
					__LIB_9__::func_137(&(uParam0->f_11), 31);
					break;
			}
			break;
		case 9:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 281;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 50528261;
					uParam0->f_17[1] = 257;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 16777218;
					uParam0->f_21[1] = 770;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 6.9996f, 28.7405f, 2.1004f };
					uParam0->f_31 = { 0f, 0f, 113.76f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 10:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 300;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 65536;
					uParam0->f_17[1] = 65537;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 33619968;
					uParam0->f_21[1] = 65536;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 6.3766f, 29.6794f, 2.1007f };
					uParam0->f_31 = { 0f, 0f, 138.24f };
					__LIB_8__::func_413(&(uParam0->f_11));
					__LIB_9__::func_137(&(uParam0->f_11), 31);
					break;
			}
			break;
		case 11:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 45;
					uParam0->f_26 = 184;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 84279300;
					uParam0->f_17[1] = 1281;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 16842754;
					uParam0->f_21[1] = 4;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 11.431f, 39.0688f, 2.1083f };
					uParam0->f_31 = { 0f, 0f, 186.48f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 12:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 187;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 67371009;
					uParam0->f_17[1] = 65537;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 33619968;
					uParam0->f_21[1] = 256;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 14.666f, 38.6223f, 2.1014f };
					uParam0->f_31 = { 0f, 0f, 165.6f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 13:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 206;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 2;
					uParam0->f_17[1] = 131072;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 16842753;
					uParam0->f_21[1] = 257;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 12.4196f, 38.8613f, 2.1029f };
					uParam0->f_31 = { 0f, 0f, 165.6f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 14:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 45;
					uParam0->f_26 = 245;
					uParam0->f_27 = Global_262145.f_31649 /* Tunable: -1163921635 */;
					uParam0->f_17[0] = 50593794;
					uParam0->f_17[1] = 131841;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 33554433;
					uParam0->f_21[1] = 131847;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 10.5521f, 38.561f, 2.1021f };
					uParam0->f_31 = { 0f, 0f, 228.24f };
					__LIB_8__::func_413(&(uParam0->f_11));
					if (Global_262145.f_31651 /* Tunable: -1477346281 */)
					{
						__LIB_9__::func_137(&(uParam0->f_11), 0);
					}
					break;
			}
			break;
		case 15:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 45;
					uParam0->f_26 = 9;
					uParam0->f_27 = 2;
					uParam0->f_17[0] = 33619973;
					uParam0->f_17[1] = 66049;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 16908288;
					uParam0->f_21[1] = 522;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 8.6035f, 38.4873f, 2.0284f };
					uParam0->f_31 = { 0f, 0f, 228.24f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 16:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 307;
					uParam0->f_27 = Global_262145.f_31649 /* Tunable: -1163921635 */;
					uParam0->f_17[0] = 17104902;
					uParam0->f_17[1] = 65536;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 33554432;
					uParam0->f_21[1] = 66305;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -18.4445f, 41.9395f, 2.1017f };
					uParam0->f_31 = { 0f, 0f, 336.24f };
					__LIB_8__::func_413(&(uParam0->f_11));
					__LIB_9__::func_137(&(uParam0->f_11), 31);
					if (Global_262145.f_31651 /* Tunable: -1477346281 */)
					{
						__LIB_9__::func_137(&(uParam0->f_11), 0);
					}
					break;
			}
			break;
		case 17:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 225;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 84017156;
					uParam0->f_17[1] = 131842;
					uParam0->f_17[2] = 1;
					uParam0->f_21[0] = 16777216;
					uParam0->f_21[1] = 131584;
					uParam0->f_21[2] = 1;
					uParam0->f_28 = { -14.2804f, 44.2295f, 2.1005f };
					uParam0->f_31 = { 0f, 0f, 118.8f };
					__LIB_8__::func_413(&(uParam0->f_11));
					__LIB_9__::func_137(&(uParam0->f_11), 31);
					break;
			}
			break;
		case 18:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 198;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 50724867;
					uParam0->f_17[1] = 258;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 65537;
					uParam0->f_21[1] = 514;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -14.3784f, 43.0425f, 2.101f };
					uParam0->f_31 = { 0f, 0f, 62.64f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 19:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 281;
					uParam0->f_27 = 1;
					uParam0->f_17[0] = 33554434;
					uParam0->f_17[1] = 131586;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 2;
					uParam0->f_21[1] = 257;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -2.4844f, -5.7107f, 1.0004f };
					uParam0->f_31 = { 0f, 0f, 243.36f };
					__LIB_8__::func_413(&(uParam0->f_11));
					__LIB_9__::func_137(&(uParam0->f_11), 31);
					break;
			}
			break;
		case 20:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 45;
					uParam0->f_26 = 328;
					uParam0->f_27 = 2;
					uParam0->f_17[0] = 50593794;
					uParam0->f_17[1] = 769;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 131074;
					uParam0->f_21[1] = 779;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -8.5485f, 2.6414f, 0.9914f };
					uParam0->f_31 = { 0f, 0f, 15.84f };
					__LIB_8__::func_413(&(uParam0->f_11));
					__LIB_9__::func_137(&(uParam0->f_11), 7);
					__LIB_9__::func_137(&(uParam0->f_11), 31);
					break;
			}
			break;
		case 21:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 8;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 196613;
					uParam0->f_17[1] = 65539;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 2;
					uParam0->f_21[1] = 66309;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -34.7675f, -10.4976f, 0.9944f };
					uParam0->f_31 = { 0f, 0f, 54.72f };
					__LIB_8__::func_413(&(uParam0->f_11));
					__LIB_9__::func_137(&(uParam0->f_11), 14);
					break;
			}
			break;
		case 22:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 45;
					uParam0->f_26 = 174;
					uParam0->f_27 = 2;
					uParam0->f_17[0] = 131072;
					uParam0->f_17[1] = 0;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 2;
					uParam0->f_21[1] = 65797;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -21.3544f, 38.5544f, 2.1126f };
					uParam0->f_31 = { 0f, 0f, 40.32f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 23:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 12;
					uParam0->f_27 = 2;
					uParam0->f_17[0] = 50659334;
					uParam0->f_17[1] = 257;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 33619970;
					uParam0->f_21[1] = 66306;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -22.1575f, 38.4924f, 2.0984f };
					uParam0->f_31 = { 0f, 0f, 2.16f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 24:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 45;
					uParam0->f_26 = 328;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 84213763;
					uParam0->f_17[1] = 132352;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 2;
					uParam0->f_21[1] = 65544;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -22.9204f, 24.5483f, 2.1088f };
					uParam0->f_31 = { 0f, 0f, 15.12f };
					__LIB_8__::func_413(&(uParam0->f_11));
					__LIB_9__::func_137(&(uParam0->f_11), 31);
					break;
			}
			break;
		case 25:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 226;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 83886082;
					uParam0->f_17[1] = 769;
					uParam0->f_17[2] = 1;
					uParam0->f_21[0] = 33619968;
					uParam0->f_21[1] = 131328;
					uParam0->f_21[2] = 2;
					uParam0->f_28 = { -26.7744f, 39.5054f, 2.1018f };
					uParam0->f_31 = { 0f, 0f, 170.64f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 26:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 196;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 83951616;
					uParam0->f_17[1] = 66305;
					uParam0->f_17[2] = 1;
					uParam0->f_21[0] = 65536;
					uParam0->f_21[1] = 131073;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -27.8984f, 39.3074f, 2.1003f };
					uParam0->f_31 = { 0f, 0f, 205.2f };
					__LIB_8__::func_413(&(uParam0->f_11));
					__LIB_9__::func_137(&(uParam0->f_11), 31);
					break;
			}
			break;
		case 27:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 222;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 16973829;
					uParam0->f_17[1] = 131073;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 16777216;
					uParam0->f_21[1] = 769;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -10.2729f, 17.177f, 2.0986f };
					uParam0->f_31 = { 0f, 0f, 210.96f };
					__LIB_8__::func_413(&(uParam0->f_11));
					__LIB_9__::func_137(&(uParam0->f_11), 7);
					break;
			}
			break;
		case 28:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 45;
					uParam0->f_26 = 346;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 67305473;
					uParam0->f_17[1] = 66560;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 16842754;
					uParam0->f_21[1] = 131337;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 26.6746f, 28.0305f, 2.112f };
					uParam0->f_31 = { 0f, 0f, 136.08f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 29:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 45;
					uParam0->f_26 = 227;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 16842757;
					uParam0->f_17[1] = 131328;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 1;
					uParam0->f_21[1] = 66058;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 25.7606f, 28.2534f, 2.1076f };
					uParam0->f_31 = { 0f, 0f, 179.28f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 30:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 178;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 50462724;
					uParam0->f_17[1] = 131330;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 1;
					uParam0->f_21[1] = 131585;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 17.3706f, 20.5803f, 2.1004f };
					uParam0->f_31 = { 0f, 0f, 172.8f };
					__LIB_8__::func_413(&(uParam0->f_11));
					__LIB_9__::func_137(&(uParam0->f_11), 42);
					break;
			}
			break;
		case 31:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 45;
					uParam0->f_26 = 329;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 196609;
					uParam0->f_17[1] = 3;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 33685505;
					uParam0->f_21[1] = 65797;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 7.8945f, 18.2524f, 2.1024f };
					uParam0->f_31 = { 0f, 0f, 150.48f };
					__LIB_8__::func_413(&(uParam0->f_11));
					__LIB_9__::func_137(&(uParam0->f_11), 31);
					break;
			}
			break;
		case 32:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 45;
					uParam0->f_26 = 230;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 67239936;
					uParam0->f_17[1] = 132096;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 2;
					uParam0->f_21[1] = 131329;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 6.9656f, 18.1675f, 2.1016f };
					uParam0->f_31 = { 0f, 0f, 179.28f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 33:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 223;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 67239940;
					uParam0->f_17[1] = 131073;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 33619970;
					uParam0->f_21[1] = 66048;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -39.9924f, 31.7075f, 2.1084f };
					uParam0->f_31 = { 0f, 0f, 218.16f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 34:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 345;
					uParam0->f_27 = Global_262145.f_31648 /* Tunable: -921857032 */;
					uParam0->f_17[0] = 33816577;
					uParam0->f_17[1] = 66048;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 33619968;
					uParam0->f_21[1] = 256;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -37.6184f, 30.6013f, 2.1084f };
					uParam0->f_31 = { 0f, 0f, 89.28f };
					__LIB_8__::func_413(&(uParam0->f_11));
					if (Global_262145.f_31650 /* Tunable: -1567592099 */)
					{
						__LIB_9__::func_137(&(uParam0->f_11), 0);
					}
					break;
			}
			break;
		case 35:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 251;
					uParam0->f_27 = Global_262145.f_31648 /* Tunable: -921857032 */;
					uParam0->f_17[0] = 67436550;
					uParam0->f_17[1] = 131072;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 1;
					uParam0->f_21[1] = 131841;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -37.9534f, 31.5764f, 2.1084f };
					uParam0->f_31 = { 0f, 0f, 118.08f };
					__LIB_8__::func_413(&(uParam0->f_11));
					__LIB_9__::func_137(&(uParam0->f_11), 31);
					if (Global_262145.f_31650 /* Tunable: -1567592099 */)
					{
						__LIB_9__::func_137(&(uParam0->f_11), 0);
					}
					break;
			}
			break;
		case 36:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 340;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 131076;
					uParam0->f_17[1] = 131330;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 16777217;
					uParam0->f_21[1] = 257;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -38.9924f, 31.9585f, 2.1084f };
					uParam0->f_31 = { 0f, 0f, 182.16f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 37:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 45;
					uParam0->f_26 = 286;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 33947652;
					uParam0->f_17[1] = 131329;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 33685504;
					uParam0->f_21[1] = 65544;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -38.106f, 0.1365f, 0.9966f };
					uParam0->f_31 = { 0f, 0f, 180.72f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 38:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 45;
					uParam0->f_26 = 232;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 33554438;
					uParam0->f_17[1] = 131587;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 33685504;
					uParam0->f_21[1] = 514;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -10.778f, 15.979f, 2.0984f };
					uParam0->f_31 = { 0f, 0f, 270f };
					__LIB_8__::func_413(&(uParam0->f_11));
					__LIB_9__::func_137(&(uParam0->f_11), 7);
					break;
			}
			break;
		case 39:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 45;
					uParam0->f_26 = 243;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 50593793;
					uParam0->f_17[1] = 66306;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 16777217;
					uParam0->f_21[1] = 131330;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -39.1949f, 0.0925f, 0.9974f };
					uParam0->f_31 = { 0f, 0f, 209.52f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 40:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 256;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 33619968;
					uParam0->f_17[1] = 515;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 16777217;
					uParam0->f_21[1] = 11;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -16.4974f, 3.2444f, 0.9966f };
					uParam0->f_31 = { 0f, 0f, 355.68f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 41:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 343;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 16973829;
					uParam0->f_17[1] = 65536;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 65537;
					uParam0->f_21[1] = 770;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -15.5314f, 3.5024f, 0.9973f };
					uParam0->f_31 = { 0f, 0f, 45.36f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 42:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 45;
					uParam0->f_26 = 7;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 84082689;
					uParam0->f_17[1] = 132355;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 16777216;
					uParam0->f_21[1] = 131329;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -5.5044f, 2.4944f, 0.9981f };
					uParam0->f_31 = { 0f, 0f, 334.08f };
					__LIB_8__::func_413(&(uParam0->f_11));
					__LIB_9__::func_137(&(uParam0->f_11), 7);
					__LIB_9__::func_137(&(uParam0->f_11), 31);
					break;
			}
			break;
		case 43:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 8;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 131076;
					uParam0->f_17[1] = 65536;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 65537;
					uParam0->f_21[1] = 66048;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -6.0184f, 2.9915f, 0.9919f };
					uParam0->f_31 = { 0f, 0f, 295.92f };
					__LIB_8__::func_413(&(uParam0->f_11));
					__LIB_9__::func_137(&(uParam0->f_11), 7);
					break;
			}
			break;
		case 44:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 45;
					uParam0->f_26 = 182;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 16777222;
					uParam0->f_17[1] = 65794;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 1;
					uParam0->f_21[1] = 522;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -16.9724f, -2.7815f, 1.0069f };
					uParam0->f_31 = { 0f, 0f, 190.08f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 45:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 45;
					uParam0->f_26 = 245;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 67174405;
					uParam0->f_17[1] = 132097;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 16777217;
					uParam0->f_21[1] = 66050;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -11.6919f, -13.3291f, 0.9967f };
					uParam0->f_31 = { 0f, 0f, 118.8f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 46:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 262;
					uParam0->f_27 = Global_262145.f_31649 /* Tunable: -1163921635 */;
					uParam0->f_17[0] = 33685508;
					uParam0->f_17[1] = 131586;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 2;
					uParam0->f_21[1] = 513;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -11.6869f, -14.429f, 0.994f };
					uParam0->f_31 = { 0f, 0f, 54.72f };
					__LIB_8__::func_413(&(uParam0->f_11));
					if (Global_262145.f_31651 /* Tunable: -1477346281 */)
					{
						__LIB_9__::func_137(&(uParam0->f_11), 0);
					}
					break;
			}
			break;
		case 47:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 318;
					uParam0->f_27 = 1;
					uParam0->f_17[0] = 67371009;
					uParam0->f_17[1] = 131073;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 33619968;
					uParam0->f_21[1] = 65792;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -12.0385f, -6.3765f, 0.9944f };
					uParam0->f_31 = { 0f, 0f, 79.2f };
					__LIB_8__::func_413(&(uParam0->f_11));
					__LIB_9__::func_137(&(uParam0->f_11), 31);
					break;
			}
			break;
		case 48:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 221;
					uParam0->f_27 = 1;
					uParam0->f_17[0] = 67502083;
					uParam0->f_17[1] = 131074;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 0;
					uParam0->f_21[1] = 131586;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -17.7975f, -3.0916f, 0.9999f };
					uParam0->f_31 = { 0f, 0f, 221.76f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 49:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 45;
					uParam0->f_26 = 339;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 50528257;
					uParam0->f_17[1] = 66305;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 65538;
					uParam0->f_21[1] = 65797;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -23.6794f, -23.9675f, 1.0069f };
					uParam0->f_31 = { 0f, 0f, 148.32f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 50:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 341;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 50659334;
					uParam0->f_17[1] = 65792;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 65536;
					uParam0->f_21[1] = 66305;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -25.3324f, -23.9705f, 1.0066f };
					uParam0->f_31 = { 0f, 0f, 214.56f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 51:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 45;
					uParam0->f_26 = 9;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 33816578;
					uParam0->f_17[1] = 131586;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 16777217;
					uParam0->f_21[1] = 775;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -24.4495f, -23.7527f, 1.0066f };
					uParam0->f_31 = { 0f, 0f, 179.28f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 52:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 220;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 2;
					uParam0->f_17[1] = 65538;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 16777217;
					uParam0->f_21[1] = 257;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -36.491f, -19.5581f, 1.0022f };
					uParam0->f_31 = { 0f, 0f, 64.8f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 53:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 180;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 17039361;
					uParam0->f_17[1] = 3;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 33554434;
					uParam0->f_21[1] = 258;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -37.4744f, -20.1707f, 0.9956f };
					uParam0->f_31 = { 0f, 0f, 24.48f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 54:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 45;
					uParam0->f_26 = 197;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 83951621;
					uParam0->f_17[1] = 66816;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 33685504;
					uParam0->f_21[1] = 131586;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -37.2764f, -17.5776f, 1.008f };
					uParam0->f_31 = { 0f, 0f, 140.4f };
					__LIB_8__::func_413(&(uParam0->f_11));
					__LIB_9__::func_137(&(uParam0->f_11), 31);
					break;
			}
			break;
		case 55:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 195;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 84213766;
					uParam0->f_17[1] = 131843;
					uParam0->f_17[2] = 1;
					uParam0->f_21[0] = 16777217;
					uParam0->f_21[1] = 66308;
					uParam0->f_21[2] = 1;
					uParam0->f_28 = { -36.6544f, -18.4265f, 0.9963f };
					uParam0->f_31 = { 0f, 0f, 110.16f };
					__LIB_8__::func_413(&(uParam0->f_11));
					__LIB_9__::func_137(&(uParam0->f_11), 31);
					break;
			}
			break;
		case 56:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 254;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 84279299;
					uParam0->f_17[1] = 66306;
					uParam0->f_17[2] = 1;
					uParam0->f_21[0] = 33554433;
					uParam0->f_21[1] = 131585;
					uParam0->f_21[2] = 2;
					uParam0->f_28 = { -20.4235f, -17.7427f, 1.0021f };
					uParam0->f_31 = { 0f, 0f, 12.96f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 57:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 45;
					uParam0->f_26 = 332;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 50397189;
					uParam0->f_17[1] = 769;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 33619970;
					uParam0->f_21[1] = 518;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -21.4574f, -17.4956f, 0.9936f };
					uParam0->f_31 = { 0f, 0f, 316.8f };
					__LIB_8__::func_413(&(uParam0->f_11));
					__LIB_9__::func_137(&(uParam0->f_11), 31);
					break;
			}
			break;
		case 58:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 249;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 2;
					uParam0->f_17[1] = 1;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 16842752;
					uParam0->f_21[1] = 256;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -3.3024f, -14.3047f, 0.9896f };
					uParam0->f_31 = { 0f, 0f, 313.2f };
					__LIB_8__::func_413(&(uParam0->f_11));
					__LIB_9__::func_137(&(uParam0->f_11), 31);
					break;
			}
			break;
		case 59:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 325;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 16908292;
					uParam0->f_17[1] = 65537;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 33619968;
					uParam0->f_21[1] = 514;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -3.3634f, -12.9375f, 0.9944f };
					uParam0->f_31 = { 0f, 0f, 241.2f };
					__LIB_8__::func_413(&(uParam0->f_11));
					__LIB_9__::func_137(&(uParam0->f_11), 31);
					break;
			}
			break;
		case 60:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 45;
					uParam0->f_26 = 3;
					uParam0->f_27 = 2;
					uParam0->f_17[0] = 84082689;
					uParam0->f_17[1] = 132352;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 0;
					uParam0->f_21[1] = 261;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 7.8971f, -3.269f, 0.994f };
					uParam0->f_31 = { 0f, 0f, 0f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 61:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 45;
					uParam0->f_26 = 285;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 33554438;
					uParam0->f_17[1] = 66051;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 33619970;
					uParam0->f_21[1] = 522;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 0.1855f, -2.8335f, 1.0006f };
					uParam0->f_31 = { 0f, 0f, 154.8f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 62:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 45;
					uParam0->f_26 = 231;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 17104899;
					uParam0->f_17[1] = 259;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 16842753;
					uParam0->f_21[1] = 65540;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -0.8044f, -3.0505f, 1.0001f };
					uParam0->f_31 = { 0f, 0f, 208.8f };
					__LIB_8__::func_413(&(uParam0->f_11));
					__LIB_9__::func_137(&(uParam0->f_11), 14);
					break;
			}
			break;
		case 63:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 181;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 65540;
					uParam0->f_17[1] = 0;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 16842754;
					uParam0->f_21[1] = 131584;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 32.2075f, -24.4817f, 0.9966f };
					uParam0->f_31 = { 0f, 0f, 238.32f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 64:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 308;
					uParam0->f_27 = Global_262145.f_31648 /* Tunable: -921857032 */;
					uParam0->f_17[0] = 84082693;
					uParam0->f_17[1] = 771;
					uParam0->f_17[2] = 1;
					uParam0->f_21[0] = 0;
					uParam0->f_21[1] = 66307;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 22.5631f, 5.2573f, 0.9878f };
					uParam0->f_31 = { 0f, 0f, 293.04f };
					__LIB_8__::func_413(&(uParam0->f_11));
					__LIB_9__::func_137(&(uParam0->f_11), 31);
					if (Global_262145.f_31650 /* Tunable: -1567592099 */)
					{
						__LIB_9__::func_137(&(uParam0->f_11), 0);
					}
					break;
			}
			break;
		case 65:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 45;
					uParam0->f_26 = 229;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 84279300;
					uParam0->f_17[1] = 66817;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 33554433;
					uParam0->f_21[1] = 65536;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 23.108f, 4.229f, 0.9914f };
					uParam0->f_31 = { 0f, 0f, 324f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 66:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 219;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 83886082;
					uParam0->f_17[1] = 66306;
					uParam0->f_17[2] = 1;
					uParam0->f_21[0] = 33554432;
					uParam0->f_21[1] = 131328;
					uParam0->f_21[2] = 2;
					uParam0->f_28 = { 24.1906f, 3.573f, 0.9909f };
					uParam0->f_31 = { 0f, 0f, 2.88f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 67:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 45;
					uParam0->f_26 = 7;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 327683;
					uParam0->f_17[1] = 131074;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 33685504;
					uParam0->f_21[1] = 4;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 21.5156f, -3.4436f, 0.9963f };
					uParam0->f_31 = { 0f, 0f, 193.68f };
					__LIB_8__::func_413(&(uParam0->f_11));
					__LIB_9__::func_137(&(uParam0->f_11), 14);
					__LIB_9__::func_137(&(uParam0->f_11), 31);
					break;
			}
			break;
		case 68:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 313;
					uParam0->f_27 = 1;
					uParam0->f_17[0] = 50397184;
					uParam0->f_17[1] = 259;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 16842752;
					uParam0->f_21[1] = 9;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 19.0526f, -3.4006f, 0.9875f };
					uParam0->f_31 = { 0f, 0f, 200.88f };
					__LIB_8__::func_413(&(uParam0->f_11));
					__LIB_9__::func_137(&(uParam0->f_11), 31);
					break;
			}
			break;
		case 69:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 248;
					uParam0->f_27 = 2;
					uParam0->f_17[0] = 16973829;
					uParam0->f_17[1] = 3;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 16842754;
					uParam0->f_21[1] = 131845;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 28.7426f, -5.9937f, 0.9878f };
					uParam0->f_31 = { 0f, 0f, 104.4f };
					__LIB_8__::func_413(&(uParam0->f_11));
					__LIB_9__::func_137(&(uParam0->f_11), 31);
					break;
			}
			break;
		case 70:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 323;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 83886082;
					uParam0->f_17[1] = 66306;
					uParam0->f_17[2] = 1;
					uParam0->f_21[0] = 16842754;
					uParam0->f_21[1] = 256;
					uParam0->f_21[2] = 1;
					uParam0->f_28 = { 21.1926f, -16.3945f, 0.9886f };
					uParam0->f_31 = { 0f, 0f, 334.8f };
					__LIB_8__::func_413(&(uParam0->f_11));
					__LIB_9__::func_137(&(uParam0->f_11), 31);
					break;
			}
			break;
		case 71:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 45;
					uParam0->f_26 = 9;
					uParam0->f_27 = 2;
					uParam0->f_17[0] = 84279300;
					uParam0->f_17[1] = 1282;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 65538;
					uParam0->f_21[1] = 131080;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 17.4426f, -17.1545f, 1.0002f };
					uParam0->f_31 = { 0f, 0f, 309.6f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 72:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 272;
					uParam0->f_27 = 1;
					uParam0->f_17[0] = 16908292;
					uParam0->f_17[1] = 65536;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 33619968;
					uParam0->f_21[1] = 66049;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 29.5806f, -19.8425f, 0.9937f };
					uParam0->f_31 = { 0f, 0f, 28.08f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 73:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 45;
					uParam0->f_26 = 333;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 33816578;
					uParam0->f_17[1] = 66048;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 131074;
					uParam0->f_21[1] = 775;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 25.0636f, -19.2095f, 0.9953f };
					uParam0->f_31 = { 0f, 0f, 306.72f };
					__LIB_8__::func_413(&(uParam0->f_11));
					__LIB_9__::func_137(&(uParam0->f_11), 31);
					break;
			}
			break;
		case 74:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 279;
					uParam0->f_27 = 1;
					uParam0->f_17[0] = 50659334;
					uParam0->f_17[1] = 131328;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 65536;
					uParam0->f_21[1] = 770;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 30.3265f, -19.2085f, 0.9956f };
					uParam0->f_31 = { 0f, 0f, 56.88f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 75:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 45;
					uParam0->f_26 = 339;
					uParam0->f_27 = 1;
					uParam0->f_17[0] = 262146;
					uParam0->f_17[1] = 131074;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 65536;
					uParam0->f_21[1] = 131843;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 34.2325f, -24.3777f, 0.9994f };
					uParam0->f_31 = { 0f, 0f, 127.44f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 76:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 344;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 393219;
					uParam0->f_17[1] = 3;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 16777217;
					uParam0->f_21[1] = 66054;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 33.2275f, -24.2856f, 0.9879f };
					uParam0->f_31 = { 0f, 0f, 187.2f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 77:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 12;
					uParam0->f_27 = 2;
					uParam0->f_17[0] = 67371009;
					uParam0->f_17[1] = 1;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 16777217;
					uParam0->f_21[1] = 65793;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 18.0455f, -16.4705f, 0.9884f };
					uParam0->f_31 = { 0f, 0f, 183.6f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 78:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 8;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 33619968;
					uParam0->f_17[1] = 515;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 16777218;
					uParam0->f_21[1] = 131082;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 28.9896f, -7.0105f, 0.9882f };
					uParam0->f_31 = { 0f, 0f, 79.2f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 79:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 45;
					uParam0->f_26 = 7;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 67436547;
					uParam0->f_17[1] = 66563;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 33554434;
					uParam0->f_21[1] = 65536;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 22.0486f, -16.4456f, 0.9997f };
					uParam0->f_31 = { 0f, 0f, 32.4f };
					__LIB_8__::func_413(&(uParam0->f_11));
					__LIB_9__::func_137(&(uParam0->f_11), 31);
					break;
			}
			break;
		case 80:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 267;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 16777218;
					uParam0->f_17[1] = 65538;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 1;
					uParam0->f_21[1] = 131330;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -20.8774f, 18.4224f, 2.0984f };
					uParam0->f_31 = { 0f, 0f, 214.56f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 81:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 45;
					uParam0->f_26 = 287;
					uParam0->f_27 = Global_262145.f_31649 /* Tunable: -1163921635 */;
					uParam0->f_17[0] = 84083717;
					uParam0->f_17[1] = 66817;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 33620224;
					uParam0->f_21[1] = 65536;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 3.9481f, -28.2766f, 1.1985f };
					uParam0->f_31 = { 0f, 0f, 65.625f };
					__LIB_8__::func_413(&(uParam0->f_11));
					if (Global_262145.f_31651 /* Tunable: -1477346281 */)
					{
						__LIB_9__::func_137(&(uParam0->f_11), 0);
					}
					break;
			}
			break;
		case 82:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 45;
					uParam0->f_26 = 283;
					uParam0->f_27 = Global_262145.f_31649 /* Tunable: -1163921635 */;
					uParam0->f_17[0] = 6;
					uParam0->f_17[1] = 0;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 16908288;
					uParam0->f_21[1] = 131590;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 3.4061f, -29.895f, 1.1985f };
					uParam0->f_31 = { 0f, 0f, 29.36f };
					__LIB_8__::func_413(&(uParam0->f_11));
					if (Global_262145.f_31651 /* Tunable: -1477346281 */)
					{
						__LIB_9__::func_137(&(uParam0->f_11), 0);
					}
					break;
			}
			break;
		case 83:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 45;
					uParam0->f_26 = 245;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 50528257;
					uParam0->f_17[1] = 66306;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 16908289;
					uParam0->f_21[1] = 131333;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -19.8374f, 18.5425f, 2.0984f };
					uParam0->f_31 = { 0f, 0f, 159.84f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 84:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 207;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 33947651;
					uParam0->f_17[1] = 512;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 33619970;
					uParam0->f_21[1] = 131584;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -16.0325f, -3.0215f, 0.9974f };
					uParam0->f_31 = { 0f, 0f, 146.16f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 85:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 327;
					uParam0->f_27 = 1;
					uParam0->f_17[0] = 16842752;
					uParam0->f_17[1] = 1;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 16842754;
					uParam0->f_21[1] = 65537;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -29.7074f, 18.3125f, 2.0944f };
					uParam0->f_31 = { 0f, 0f, 154.8f };
					__LIB_8__::func_413(&(uParam0->f_11));
					__LIB_9__::func_137(&(uParam0->f_11), 31);
					break;
			}
			break;
		case 86:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 178;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 327686;
					uParam0->f_17[1] = 131075;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 33619969;
					uParam0->f_21[1] = 131844;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 18.6166f, -5.4966f, 0.9883f };
					uParam0->f_31 = { 0f, 0f, 224.64f };
					__LIB_8__::func_413(&(uParam0->f_11));
					__LIB_9__::func_137(&(uParam0->f_11), 42);
					break;
			}
			break;
		case 87:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 8;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 50659334;
					uParam0->f_17[1] = 131329;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 33554434;
					uParam0->f_21[1] = 66306;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 22.2375f, -3.4006f, 0.9998f };
					uParam0->f_31 = { 0f, 0f, 169.92f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 88:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 45;
					uParam0->f_26 = 250;
					uParam0->f_27 = Global_262145.f_31648 /* Tunable: -921857032 */;
					uParam0->f_17[0] = 67239936;
					uParam0->f_17[1] = 1026;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 131073;
					uParam0->f_21[1] = 265;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 25.233f, 4.1919f, 0.989f };
					uParam0->f_31 = { 0f, 0f, 33.12f };
					__LIB_8__::func_413(&(uParam0->f_11));
					__LIB_9__::func_137(&(uParam0->f_11), 31);
					if (Global_262145.f_31650 /* Tunable: -1567592099 */)
					{
						__LIB_9__::func_137(&(uParam0->f_11), 0);
					}
					break;
			}
			break;
		case 89:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 246;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 67371009;
					uParam0->f_17[1] = 131843;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 16777218;
					uParam0->f_21[1] = 65794;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 12.1276f, 3.3015f, 0.9944f };
					uParam0->f_31 = { 0f, 0f, 324f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 90:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 45;
					uParam0->f_26 = 250;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 67108870;
					uParam0->f_17[1] = 66562;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 33619970;
					uParam0->f_21[1] = 131586;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 13.2075f, 3.2715f, 0.9944f };
					uParam0->f_31 = { 0f, 0f, 22.32f };
					__LIB_8__::func_413(&(uParam0->f_11));
					__LIB_9__::func_137(&(uParam0->f_11), 31);
					break;
			}
			break;
		case 91:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 45;
					uParam0->f_26 = 7;
					uParam0->f_27 = 2;
					uParam0->f_17[0] = 33816578;
					uParam0->f_17[1] = 66049;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 65536;
					uParam0->f_21[1] = 66307;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -22.2184f, 39.4065f, 2.1093f };
					uParam0->f_31 = { 0f, 0f, 216f };
					__LIB_8__::func_413(&(uParam0->f_11));
					__LIB_9__::func_137(&(uParam0->f_11), 14);
					__LIB_9__::func_137(&(uParam0->f_11), 31);
					break;
			}
			break;
		case 92:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 224;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 67502083;
					uParam0->f_17[1] = 2;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 0;
					uParam0->f_21[1] = 131585;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 13.504f, 38.2859f, 2.1014f };
					uParam0->f_31 = { -15.12f, 0f, 221.04f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 93:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_25 = 44;
					uParam0->f_26 = 12;
					uParam0->f_27 = 1;
					uParam0->f_17[0] = 33619968;
					uParam0->f_17[1] = 66051;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 33554434;
					uParam0->f_21[1] = 131082;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 8.4835f, 37.6785f, 2.1047f };
					uParam0->f_31 = { 0f, 0f, 275.76f };
					__LIB_8__::func_413(&(uParam0->f_11));
					break;
			}
			break;
		case 94:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 0;
					uParam0->f_17[1] = 0;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 0;
					uParam0->f_21[1] = 0;
					uParam0->f_21[2] = 0;
					__LIB_9__::func_160(iParam2, *uParam0, 0, &(uParam0->f_25), &(uParam0->f_28), &(uParam0->f_31.f_2), &(uParam0->f_26));
					__LIB_8__::func_413(&(uParam0->f_11));
					__LIB_9__::func_137(&(uParam0->f_11), 4);
					break;
			}
			break;
		case 95:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 0;
					uParam0->f_17[1] = 0;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 0;
					uParam0->f_21[1] = 0;
					uParam0->f_21[2] = 0;
					__LIB_9__::func_160(iParam2, *uParam0, 1, &(uParam0->f_25), &(uParam0->f_28), &(uParam0->f_31.f_2), &(uParam0->f_26));
					__LIB_8__::func_413(&(uParam0->f_11));
					__LIB_9__::func_137(&(uParam0->f_11), 4);
					if (!__LIB_8__::func_568())
					{
						__LIB_9__::func_137(&(uParam0->f_11), 0);
					}
					break;
			}
			break;
		case 125:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_26 = 347;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 4;
					uParam0->f_17[1] = 0;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 0;
					uParam0->f_21[1] = 0;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { 15.4336f, -0.8333f, 0.9998f };
					uParam0->f_31 = { 0f, 0f, 266.3013f };
					__LIB_8__::func_567(uParam0, iParam1, iParam2);
					__LIB_8__::func_413(&(uParam0->f_11));
					__LIB_9__::func_137(&(uParam0->f_11), 15);
					__LIB_9__::func_137(&(uParam0->f_11), 8);
					__LIB_9__::func_137(&(uParam0->f_11), 7);
					break;
			}
			break;
		case 126:
			if (bParam3)
			{
				uParam0->f_44 = 1;
			}
			switch (uParam0->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam0->f_26 = 347;
					uParam0->f_27 = 0;
					uParam0->f_17[0] = 33619973;
					uParam0->f_17[1] = 769;
					uParam0->f_17[2] = 0;
					uParam0->f_21[0] = 33619970;
					uParam0->f_21[1] = 518;
					uParam0->f_21[2] = 0;
					uParam0->f_28 = { -13.6299f, 16.6377f, 1.1037f };
					uParam0->f_31 = { 0f, 0f, 177.5264f };
					__LIB_8__::func_567(uParam0, iParam1, iParam2);
					__LIB_8__::func_413(&(uParam0->f_11));
					__LIB_9__::func_137(&(uParam0->f_11), 15);
					__LIB_9__::func_137(&(uParam0->f_11), 8);
					__LIB_9__::func_137(&(uParam0->f_11), 7);
					break;
			}
			break;
	}
	if (!__LIB_8__::func_566(iParam1))
	{
		if (!__LIB_0__::func_86(uParam0->f_28))
		{
			uParam0->f_28 = { __LIB_8__::func_457(__LIB_8__::func_554(-1), __LIB_8__::func_508(-1), uParam0->f_28) };
		}
		if (uParam0->f_31.f_2 != -1f)
		{
			uParam0->f_31.f_2 = __LIB_8__::func_456(__LIB_8__::func_508(-1), uParam0->f_31.f_2);
		}
	}
}

int func_5347(var uParam0, int iParam1)//Position - 0x1B84AB
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
		func_5333(iParam1, uParam0, &Var2, iVar0, uParam0->f_1, 1);
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

void func_5350(var uParam0, int iParam1)//Position - 0x1B8571
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1952238/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_1 = 1952229/*__LIB_0__::func_109*/;
			break;
		case 2:
			uParam0->f_2 = 1952070/*__LIB_11__::func_260*/;
			break;
		case 3:
			uParam0->f_3 = 1951909/*__LIB_11__::func_259*/;
			break;
		case 4:
			uParam0->f_4 = 1951900/*__LIB_1__::func_806*/;
			break;
		case 5:
			uParam0->f_5 = 1951886/*__LIB_8__::func_747*/;
			break;
		case 6:
			uParam0->f_6 = 1951877/*__LIB_3__::func_603*/;
			break;
		case 7:
			uParam0->f_7 = 1951854/*__LIB_8__::func_746*/;
			break;
		case 8:
			uParam0->f_8 = 1951841/*__LIB_8__::func_745*/;
			break;
		case 9:
			uParam0->f_9 = 1901351/*__LIB_10__::func_674*/;
			break;
		case 10:
			uParam0->f_10 = 1901299/*__LIB_11__::func_338*/;
			break;
		case 11:
			uParam0->f_11 = 1811878/*__LIB_10__::func_673*/;
			break;
		case 12:
			uParam0->f_12 = 1808608/*__LIB_9__::func_949*/;
			break;
		case 14:
			uParam0->f_14 = 1808523/*__LIB_9__::func_165*/;
			break;
		case 15:
			uParam0->f_15 = 1808514/*__LIB_0__::func_109*/;
			break;
		case 16:
			uParam0->f_16 = 1808455/*__LIB_8__::func_581*/;
			break;
		case 17:
			uParam0->f_17 = 1808313/*__LIB_8__::func_580*/;
			break;
		case 18:
			uParam0->f_18 = 1808273/*__LIB_9__::func_863*/;
			break;
		case 19:
			uParam0->f_19 = 1807945/*__LIB_8__::func_579*/;
			break;
		case 20:
			uParam0->f_20 = 1807921/*__LIB_8__::func_578*/;
			break;
		case 21:
			uParam0->f_21 = 1807795/*__LIB_9__::func_862*/;
			break;
		case 23:
			uParam0->f_22 = 1807428/*__LIB_9__::func_164*/;
			break;
		case 22:
			uParam0->f_23 = 1807152/*__LIB_9__::func_79*/;
			break;
		case 24:
			uParam0->f_24 = 1806976/*__LIB_8__::func_576*/;
			break;
		case 25:
			uParam0->f_25 = 1806676/*__LIB_9__::func_906*/;
			break;
		case 26:
			uParam0->f_26 = 1806304/*__LIB_9__::func_78*/;
			break;
		case 27:
			uParam0->f_27 = 1806171/*__LIB_8__::func_575*/;
			break;
		case 29:
			uParam0->f_29 = 1805654/*__LIB_9__::func_163*/;
			break;
		case 31:
			uParam0->f_32 = 1805645/*__LIB_0__::func_109*/;
			break;
		case 32:
			uParam0->f_33 = 1804382/*__LIB_9__::func_162*/;
			break;
		case 33:
			uParam0->f_34 = 1804174/*__LIB_9__::func_864*/;
			break;
	}
}

void func_5641(var uParam0, int iParam1)//Position - 0x1DC9F7
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1963088/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_1 = 1963079/*__LIB_0__::func_109*/;
			break;
		case 2:
			uParam0->f_2 = 1963070/*__LIB_0__::func_109*/;
			break;
		case 3:
			uParam0->f_3 = 1963061/*__LIB_0__::func_114*/;
			break;
		case 4:
			uParam0->f_4 = 1963052/*__LIB_3__::func_939*/;
			break;
		case 5:
			uParam0->f_5 = 1962959/*__LIB_9__::func_915*/;
			break;
		case 6:
			uParam0->f_6 = 1962950/*__LIB_0__::func_114*/;
			break;
		case 9:
			uParam0->f_9 = 1961895/*__LIB_10__::func_678*/;
			break;
		case 10:
			uParam0->f_10 = 1961817/*__LIB_10__::func_677*/;
			break;
		case 11:
			uParam0->f_11 = 1959888/*__LIB_10__::func_676*/;
			break;
		case 12:
			uParam0->f_12 = 1958199/*__LIB_9__::func_72*/;
			break;
		case 14:
			uParam0->f_14 = 1958185/*__LIB_9__::func_866*/;
			break;
		case 17:
			uParam0->f_17 = 1958051/*__LIB_7__::func_240*/;
			break;
		case 18:
			uParam0->f_18 = 1958011/*__LIB_9__::func_863*/;
			break;
		case 19:
			uParam0->f_19 = 1957976/*__LIB_8__::func_752*/;
			break;
		case 21:
			uParam0->f_21 = 1957850/*__LIB_9__::func_862*/;
			break;
		case 30:
			uParam0->f_31 = 1957770/*__LIB_9__::func_235*/;
			break;
		case 23:
			uParam0->f_22 = 1957318/*__LIB_9__::func_234*/;
			break;
		case 22:
			uParam0->f_23 = 1956973/*__LIB_9__::func_80*/;
			break;
		case 24:
			uParam0->f_24 = 1956252/*__LIB_8__::func_501*/;
			break;
		case 25:
			uParam0->f_25 = 1955955/*__LIB_11__::func_572*/;
			break;
		case 26:
			uParam0->f_26 = 1952661/*__LIB_11__::func_349*/;
			break;
		case 31:
			uParam0->f_32 = 1952652/*__LIB_0__::func_114*/;
			break;
	}
}

void func_5691(var uParam0, int iParam1)//Position - 0x1DF459
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 2090896/*__LIB_8__::func_839*/;
			break;
		case 1:
			uParam0->f_1 = 2090887/*__LIB_0__::func_114*/;
			break;
		case 2:
			uParam0->f_2 = 2090728/*func_6023*/;
			break;
		case 3:
			uParam0->f_3 = 2090567/*func_6022*/;
			break;
		case 4:
			uParam0->f_4 = 2090558/*__LIB_0__::func_109*/;
			break;
		case 5:
			uParam0->f_5 = 2090549/*__LIB_0__::func_114*/;
			break;
		case 6:
			uParam0->f_6 = 2090540/*__LIB_3__::func_603*/;
			break;
		case 7:
			uParam0->f_7 = 2090517/*__LIB_8__::func_838*/;
			break;
		case 8:
			uParam0->f_8 = 2090504/*__LIB_8__::func_837*/;
			break;
		case 9:
			uParam0->f_9 = 2064490/*func_6015*/;
			break;
		case 10:
			uParam0->f_10 = 2064414/*func_6014*/;
			break;
		case 11:
			uParam0->f_11 = 1975129/*__LIB_10__::func_679*/;
			break;
		case 12:
			uParam0->f_12 = 1971452/*__LIB_9__::func_952*/;
			break;
		case 13:
			uParam0->f_13 = 1971393/*__LIB_8__::func_763*/;
			break;
		case 14:
			uParam0->f_14 = 1971331/*__LIB_8__::func_907*/;
			break;
		case 15:
			uParam0->f_15 = 1971322/*__LIB_0__::func_109*/;
			break;
		case 16:
			uParam0->f_16 = 1971263/*__LIB_8__::func_581*/;
			break;
		case 17:
			uParam0->f_17 = 1971121/*__LIB_8__::func_580*/;
			break;
		case 18:
			uParam0->f_18 = 1971081/*__LIB_9__::func_863*/;
			break;
		case 19:
			uParam0->f_19 = 1970853/*__LIB_8__::func_762*/;
			break;
		case 20:
			uParam0->f_20 = 1970829/*__LIB_8__::func_578*/;
			break;
		case 21:
			uParam0->f_21 = 1970675/*__LIB_9__::func_867*/;
			break;
		case 23:
			uParam0->f_22 = 1970202/*__LIB_9__::func_239*/;
			break;
		case 22:
			uParam0->f_23 = 1970051/*__LIB_9__::func_82*/;
			break;
		case 24:
			uParam0->f_24 = 1968398/*__LIB_8__::func_760*/;
			break;
		case 25:
			uParam0->f_25 = 1968098/*__LIB_9__::func_916*/;
			break;
		case 26:
			uParam0->f_26 = 1964734/*__LIB_9__::func_81*/;
			break;
		case 27:
			uParam0->f_27 = 1964601/*__LIB_8__::func_575*/;
			break;
		case 29:
			uParam0->f_29 = 1964334/*__LIB_9__::func_238*/;
			break;
		case 31:
			uParam0->f_32 = 1964325/*__LIB_0__::func_109*/;
			break;
		case 32:
			uParam0->f_33 = 1963638/*__LIB_11__::func_347*/;
			break;
	}
}

void func_6014(var uParam0, var uParam1)//Position - 0x1F801E
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		uParam1->f_1 = __LIB_0__::func_114();
		*uParam1 = __LIB_3__::func_603();
		uParam1->f_3 = func_6023(uParam1, -1);
		uParam1->f_4 = func_6022(uParam1, -1);
		uParam1->f_798 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
		uParam1->f_798.f_1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
	}
}

void func_6015(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)//Position - 0x1F806A
{
	switch (iParam4)
	{
		case 0:
			func_6016(uParam1, uParam2, iParam3, bParam5);
			break;
	}
}

void func_6016(var uParam0, var uParam1, int iParam2, bool bParam3)//Position - 0x1F808E
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
					uParam1->f_21[1] = 459271;
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
					uParam1->f_17[1] = 66304/*__LIB_1__::func_766*/;
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

int func_6022(var uParam0, int iParam1)//Position - 0x1FE647
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
		func_6015(iParam1, uParam0, &Var2, iVar0 + 125, uParam0->f_1, 1);
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

int func_6023(var uParam0, int iParam1)//Position - 0x1FE6E8
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
		func_6015(iParam1, uParam0, &Var2, iVar0, uParam0->f_1, 1);
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

void func_6026()//Position - 0x1FE79C
{
	if (BitTest(Local_346.f_0, 0) || BitTest(Global_1946250, 1))
	{
		return;
	}
	if (__LIB_2__::func_72(PLAYER::PLAYER_ID(), 0))
	{
		if (!__LIB_7__::func_238(Local_346.f_2))
		{
			MISC::SET_BIT(&Local_346, 0);
			return;
		}
	}
	else
	{
		MISC::SET_BIT(&Local_346, 0);
		return;
	}
	if (!BitTest(Global_1946250, 1))
	{
		if (((((!NETWORK::NETWORK_IS_IN_MP_CUTSCENE() && !CAM::IS_SCREEN_FADED_OUT()) && !CAM::IS_SCREEN_FADING_OUT()) && !CAM::IS_SCREEN_FADING_IN()) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !__LIB_0__::func_833())
		{
			if (__LIB_0__::func_937(&(Local_346.f_1191), 1200, 0))
			{
				if (__LIB_3__::func_673(__LIB_0__::func_797()))
				{
					__LIB_0__::func_151("WHOUSE_GOONHLP2C" /* GXT: When working as an Associate you will only be able to see and access your CEO's Warehouses. */, -1);
				}
				else
				{
					__LIB_0__::func_151("WHOUSE_GOON_HLP2" /* GXT: When working as an Associate you will only be able to see and access your CEO's Warehouses. */, -1);
				}
				MISC::SET_BIT(&Global_1946250, 1);
			}
		}
		else
		{
			__LIB_0__::func_794(&(Local_346.f_1191));
		}
	}
}

void func_6027()//Position - 0x1FE87A
{
	func_6028(&(Local_346.f_928), Local_346.f_3);
}

void func_6028(int* iParam0, int iParam1)//Position - 0x1FE891
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	struct<3> Var3;
	int iVar4;
	if (__LIB_10__::func_785(0, iParam0))
	{
		if (iParam0->f_43 != 0)
		{
			STREAMING::REQUEST_MODEL(iParam0->f_43);
		}
		if (iParam0->f_51 != 0)
		{
			STREAMING::REQUEST_MODEL(iParam0->f_51);
		}
		__LIB_10__::func_784(1, iParam0);
	}
	else if (__LIB_10__::func_785(1, iParam0))
	{
		if (iParam0->f_43 == 0 && iParam0->f_51 == 0)
		{
			__LIB_10__::func_784(3, iParam0);
			return;
		}
		if (iParam0->f_43 != 0 && !STREAMING::HAS_MODEL_LOADED(iParam0->f_43))
		{
			return;
		}
		if (iParam0->f_51 != 0 && !STREAMING::HAS_MODEL_LOADED(iParam0->f_51))
		{
			return;
		}
		bVar0 = false;
		bVar1 = false;
		if (iParam0->f_43 != 0)
		{
			iParam0->f_50 = OBJECT::CREATE_OBJECT_NO_OFFSET(iParam0->f_43, iParam0->f_44, false, false, true);
			ENTITY::SET_ENTITY_ROTATION(iParam0->f_50, iParam0->f_47, 2, true);
			ENTITY::FREEZE_ENTITY_POSITION(iParam0->f_50, true);
			bVar0 = true;
		}
		if (iParam0->f_51 != 0)
		{
			iParam0->f_58 = OBJECT::CREATE_OBJECT_NO_OFFSET(iParam0->f_51, iParam0->f_52, false, false, true);
			ENTITY::SET_ENTITY_ROTATION(iParam0->f_58, iParam0->f_55, 2, true);
			ENTITY::FREEZE_ENTITY_POSITION(iParam0->f_58, true);
			bVar1 = true;
		}
		if (bVar0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0->f_43);
		}
		if (bVar1)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0->f_51);
		}
		__LIB_10__::func_784(3, iParam0);
	}
	else if (__LIB_10__::func_785(3, iParam0))
	{
		if (BitTest(*iParam0, 17))
		{
			if ((!__LIB_7__::func_563() && !__LIB_3__::func_171(PLAYER::PLAYER_ID())) || !func_6034(iParam1))
			{
				__LIB_10__::func_880(iParam0);
			}
		}
	}
	else if (__LIB_10__::func_785(2, iParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			__LIB_10__::func_784(7, iParam0);
			return;
		}
		if (((STREAMING::HAS_ANIM_DICT_LOADED(iParam0->f_3) && (MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_4) || STREAMING::HAS_ANIM_DICT_LOADED(iParam0->f_4))) && ENTITY::DOES_ENTITY_EXIST(iParam0->f_2)) && !ENTITY::IS_ENTITY_DEAD(iParam0->f_2, false))
		{
			if (PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iParam0->f_2) && PED::HAS_PED_HEAD_BLEND_FINISHED(iParam0->f_2))
			{
				NETWORK::SET_LOCAL_PLAYER_VISIBLE_IN_CUTSCENE(false, true);
				__LIB_6__::func_928(1, 1, 0);
				__LIB_0__::func_963(1, 1, 1, 0);
				GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(ENTITY::GET_ENTITY_COORDS(iParam0->f_2, false), 100f);
				if (MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_8))
				{
					__LIB_10__::func_879(iParam0);
				}
				else
				{
					__LIB_10__::func_878(iParam0);
				}
				PED::FINALIZE_HEAD_BLEND(iParam0->f_2);
				ENTITY::FREEZE_ENTITY_POSITION(iParam0->f_2, false);
				iParam0->f_27 = PED::CREATE_SYNCHRONIZED_SCENE(iParam0->f_28, iParam0->f_31, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(iParam0->f_2, iParam0->f_27, iParam0->f_3, iParam0->f_5, 1000f, -1000f, 4, 0, 1000f, 0);
				PED::SET_SYNCHRONIZED_SCENE_PHASE(iParam0->f_27, iParam0->f_34);
				if (MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_8))
				{
					if (!__LIB_0__::func_86(iParam0->f_20))
					{
						MISC::CLEAR_BIT(iParam0, 15);
					}
					else
					{
						MISC::SET_BIT(iParam0, 15);
					}
					if (CAM::DOES_CAM_EXIST(iParam0->f_11) && !BitTest(*iParam0, 15))
					{
						CAM::SET_CAM_PARAMS(iParam0->f_11, iParam0->f_20, iParam0->f_23, iParam0->f_26, 3000, 3, 3, 2);
						MISC::SET_BIT(iParam0, 15);
					}
				}
				else
				{
					CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iParam0->f_12, iParam0->f_27, iParam0->f_8, iParam0->f_3);
				}
				STREAMING::REMOVE_ANIM_DICT(iParam0->f_3);
				__LIB_0__::func_627(&(iParam0->f_38), 1, 1);
				__LIB_10__::func_877(iParam0);
				__LIB_10__::func_784(4, iParam0);
			}
		}
	}
	else if (__LIB_10__::func_785(4, iParam0))
	{
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iParam0->f_27))
		{
			iParam0->f_36 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iParam0->f_27);
			if (__LIB_0__::func_121(iParam0->f_2))
			{
				GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(ENTITY::GET_ENTITY_COORDS(iParam0->f_2, false), 100f);
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_75))
			{
				bVar2 = false;
				while (bVar2 < 2)
				{
					if ((!BitTest(iParam0->f_67, bVar2) && !MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_69[bVar2])) && iParam0->f_36 >= iParam0->f_72[bVar2])
					{
						if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_2, false))
						{
							Var3 = { ENTITY::GET_ENTITY_COORDS(iParam0->f_2, true) };
						}
						AUDIO::PLAY_SOUND_FROM_COORD(-1, iParam0->f_69[bVar2], Var3, iParam0->f_75, false, 0, false);
						MISC::SET_BIT(&(iParam0->f_67), bVar2);
					}
					bVar2++;
				}
			}
			if (iParam0->f_42)
			{
				if (CAM::IS_SCREEN_FADED_IN())
				{
					iVar4 = (iParam0->f_37 - 322);
					if (__LIB_0__::func_937(&(iParam0->f_38), iVar4, 1))
					{
						CAM::DO_SCREEN_FADE_OUT(322);
					}
				}
			}
			if ((((iParam0->f_36 > iParam0->f_35 && iParam0->f_37 <= 0) || (iParam0->f_37 > 0 && __LIB_3__::func_99(&(iParam0->f_38), iParam0->f_37, 1))) || iParam0->f_36 > 0.99f) || __LIB_10__::func_876(iParam0))
			{
				if (((ENTITY::DOES_ENTITY_EXIST(iParam0->f_2) && !PED::IS_PED_INJURED(iParam0->f_2)) && !MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_4)) && !MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_6))
				{
					TASK::TASK_PLAY_ANIM(iParam0->f_2, iParam0->f_4, iParam0->f_6, 2f, -2f, -1, 10, 0f, false, false, false);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_76))
				{
					if ((!__LIB_7__::func_563() && !__LIB_3__::func_171(PLAYER::PLAYER_ID())) || !func_6034(iParam1))
					{
						__LIB_10__::func_880(iParam0);
					}
				}
				__LIB_10__::func_784(5, iParam0);
			}
		}
	}
	else if (__LIB_10__::func_785(5, iParam0))
	{
	}
	else if (__LIB_10__::func_785(7, iParam0))
	{
	}
}

bool func_6034(int iParam0)//Position - 0x1FEEE8
{
	var uVar0;
	uVar0 = { func_6035(iParam0) };
	return BitTest(uVar0[1], 11);
}

Vector3 func_6035(int iParam0)//Position - 0x1FEF02
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
		func_364(iParam0, &Var1, 3);
		Stack.Push(iParam0);
		Call_Loc(Var1.f_34);
		Global_1946250.f_14[iParam0 /*3*/] = { StackVal, StackVal, StackVal };
	}
	return Global_1946250.f_14[iParam0 /*3*/];
}

void func_6037(var uParam0)//Position - 0x1FEF82
{
	float fVar0;
	int iVar1;
	struct<3> Var2;
	fVar0 = 0.45f;
	if (*uParam0 == uParam0->f_1)
	{
		uParam0->f_2 = 0;
	}
	if (PAD::IS_CONTROL_JUST_RELEASED(0 /*PLAYER_CONTROL*/, 51 /*INPUT_CONTEXT*/))
	{
		uParam0->f_2 = 1;
		uParam0->f_1 = *uParam0;
	}
	iVar1 = *uParam0;
	if (!__LIB_0__::func_86(Local_355[iVar1 /*3*/]))
	{
		Var2 = { Local_355[iVar1 /*3*/] };
		Var2.f_2 = (Var2.f_2 + 0.5f);
		Var2.f_0 = (Var2.f_0 + 0.5f);
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !TASK::PED_HAS_USE_SCENARIO_TASK(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Var2, fVar0, fVar0, fVar0, false, true, 0))
			{
				if (TASK::DOES_SCENARIO_EXIST_IN_AREA(Var2, 2f, true))
				{
					if (!TASK::IS_SCENARIO_OCCUPIED(Var2, 2f, true))
					{
						if (BitTest(uParam0->f_3[iVar1], 1))
						{
							MISC::CLEAR_BIT(&(uParam0->f_3[iVar1]), 1);
							if (__LIB_0__::func_1("MPTV_STAND" /* GXT: Press ~INPUT_CONTEXT~ to stand up. */))
							{
								HUD::CLEAR_HELP(true);
							}
						}
						if (!BitTest(uParam0->f_3[iVar1], 0))
						{
							MISC::SET_BIT(&(uParam0->f_3[iVar1]), 0);
							__LIB_0__::func_151("MPTV_WALK" /* GXT: Press ~INPUT_CONTEXT~ to sit down. */, -1);
						}
						if (uParam0->f_2)
						{
							PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 414, true);
							TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(PLAYER::PLAYER_PED_ID(), Var2, 2f, 5000);
							uParam0->f_2 = 0;
							uParam0->f_1 = -1;
							if (__LIB_0__::func_1("MPTV_WALK" /* GXT: Press ~INPUT_CONTEXT~ to sit down. */))
							{
								HUD::CLEAR_HELP(true);
							}
						}
					}
				}
			}
			else
			{
				if (BitTest(uParam0->f_3[iVar1], 0))
				{
					MISC::CLEAR_BIT(&(uParam0->f_3[iVar1]), 0);
					if (__LIB_0__::func_1("MPTV_WALK" /* GXT: Press ~INPUT_CONTEXT~ to sit down. */))
					{
						HUD::CLEAR_HELP(true);
					}
				}
				if (BitTest(uParam0->f_3[iVar1], 1))
				{
					MISC::CLEAR_BIT(&(uParam0->f_3[iVar1]), 1);
					if (__LIB_0__::func_1("MPTV_STAND" /* GXT: Press ~INPUT_CONTEXT~ to stand up. */))
					{
						HUD::CLEAR_HELP(true);
					}
				}
			}
		}
		else
		{
			if (BitTest(uParam0->f_3[iVar1], 0))
			{
				MISC::CLEAR_BIT(&(uParam0->f_3[iVar1]), 0);
				if (__LIB_0__::func_1("MPTV_WALK" /* GXT: Press ~INPUT_CONTEXT~ to sit down. */))
				{
					HUD::CLEAR_HELP(true);
				}
			}
			__LIB_0__::func_187();
			if (TASK::IS_SCENARIO_OCCUPIED(Var2, 2f, true))
			{
				if (!BitTest(uParam0->f_3[iVar1], 1))
				{
					MISC::SET_BIT(&(uParam0->f_3[iVar1]), 1);
					__LIB_0__::func_151("MPTV_STAND" /* GXT: Press ~INPUT_CONTEXT~ to stand up. */, -1);
				}
				if (uParam0->f_2)
				{
					PED::SET_PED_SHOULD_IGNORE_SCENARIO_EXIT_COLLISION_CHECKS(PLAYER::PLAYER_PED_ID(), true);
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 414, false);
					uParam0->f_2 = 0;
					uParam0->f_1 = -1;
					if (__LIB_0__::func_1("MPTV_STAND" /* GXT: Press ~INPUT_CONTEXT~ to stand up. */))
					{
						HUD::CLEAR_HELP(true);
					}
				}
			}
		}
	}
	*uParam0++;
	if (*uParam0 >= 2)
	{
		*uParam0 = 0;
	}
}

void func_6039(var uParam0)//Position - 0x1FF1EC
{
	switch (*uParam0)
	{
		case 0:
			func_6089(uParam0);
			break;
		case 1:
			STREAMING::REQUEST_ANIM_DICT(uParam0->f_39);
			if ((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && __LIB_0__::func_76(uParam0->f_1, PLAYER::PLAYER_PED_ID(), 1) < 2f) && func_6087(uParam0)) && func_6086()) && !Local_347.f_0)
			{
				if (uParam0->f_8 == -1)
				{
					if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
					{
						__LIB_5__::func_569(&(uParam0->f_8), 4, "WARE_VEH_UPG" /* GXT: Press ~INPUT_CONTEXT~ to access Delivery Vehicle Upgrades. */, 0, 0, 0, 0);
					}
				}
				if (!__LIB_1__::func_512())
				{
					if (__LIB_3__::func_113(uParam0->f_8, 1))
					{
						__LIB_3__::func_67(0, -1, 0);
						func_6084(uParam0);
						func_6083(__LIB_5__::func_388(Local_346.f_2), &(uParam0->f_2), 1);
						TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), PED::GET_ANIM_INITIAL_OFFSET_POSITION(uParam0->f_39, "enter", uParam0->f_27, uParam0->f_27.f_3, 0f, 2), 1f, 5000, uParam0->f_27.f_3.f_2, 0.05f);
						__LIB_1__::func_376(PLAYER::PLAYER_ID(), 0, 256, 0);
						__LIB_3__::func_122(&(uParam0->f_8));
						*uParam0 = 2;
					}
				}
			}
			else if (uParam0->f_8 != -1)
			{
				__LIB_3__::func_122(&(uParam0->f_8));
			}
			break;
		case 2:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD")) != 1 || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), uParam0->f_33, uParam0->f_33.f_3, 1f, false, true, 0))
				{
					if (func_6082(uParam0))
					{
						func_6081(uParam0);
					}
				}
			}
			break;
		case 3:
			if (!Local_347.f_0)
			{
				func_6043(uParam0);
			}
			else
			{
				__LIB_1__::func_895(1, -1);
				*uParam0 = 5;
			}
			break;
		case 4:
			if (func_6042(uParam0))
			{
				func_6041(uParam0);
			}
			break;
		case 5:
			func_6040(uParam0, 0);
			break;
	}
}

void func_6040(var uParam0, bool bParam1)//Position - 0x1FF3B1
{
	__LIB_3__::func_122(&(uParam0->f_8));
	uParam0->f_8 = -1;
	uParam0->f_23 = 0;
	uParam0->f_24 = 0;
	uParam0->f_40 = 3;
	uParam0->f_20 = 0;
	uParam0->f_21 = 0;
	if (BitTest(uParam0->f_26, 0))
	{
		MISC::CLEAR_BIT(&(uParam0->f_26), 0);
	}
	if (BitTest(uParam0->f_26, 1))
	{
		MISC::CLEAR_BIT(&(uParam0->f_26), 1);
	}
	if (BitTest(uParam0->f_26, 2))
	{
		MISC::CLEAR_BIT(&(uParam0->f_26), 2);
	}
	if (bParam1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
		{
			OBJECT::DELETE_OBJECT(&(uParam0->f_1));
		}
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("ShopUI_Title_Exec_VechUpgrade");
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPShopSale");
	}
	*uParam0 = 0;
}

void func_6041(var uParam0)//Position - 0x1FF442
{
	int iVar0;
	iVar0 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam0->f_25);
	if (iVar0 != -1)
	{
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar0))
		{
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar0) >= 0.99f)
			{
				__LIB_1__::func_376(PLAYER::PLAYER_ID(), 1, 0, 0);
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				*uParam0 = 5;
			}
		}
	}
}

int func_6042(var uParam0)//Position - 0x1FF489
{
	if (!BitTest(uParam0->f_26, 2))
	{
		uParam0->f_25 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(uParam0->f_27, uParam0->f_27.f_3, 2, true, false, 1f, 0f, 1f);
		NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_25, uParam0->f_39, "exit", 1.5f, -1.5f, 13, 16, 1.5f, 0);
		NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam0->f_25);
		MISC::SET_BIT(&(uParam0->f_26), 2);
		return 1;
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_6043(var uParam0)//Position - 0x1FF503
{
	func_6080(uParam0);
	func_6079(uParam0);
	func_6077(&(uParam0->f_9), &(uParam0->f_23));
	if (__LIB_3__::func_67(0, -1, 0))
	{
		if (uParam0->f_21)
		{
			func_6069(uParam0);
			uParam0->f_21 = 0;
		}
		else
		{
			__LIB_3__::func_781(uParam0->f_23, 1, 1);
		}
		func_6044(uParam0);
		__LIB_9__::func_296(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
		if (*uParam0 != 3)
		{
			__LIB_1__::func_895(1, -1);
		}
	}
}

void func_6044(var uParam0)//Position - 0x1FF571
{
	switch (uParam0->f_40)
	{
		case 3:
			func_6068(uParam0);
			break;
		default:
			func_6047(uParam0);
			break;
	}
	if (uParam0->f_21 == 0)
	{
		func_6045(uParam0);
	}
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
}

void func_6045(var uParam0)//Position - 0x1FF5B9
{
	var uVar0;
	uVar0 = __LIB_35__::func_473();
	switch (uParam0->f_40)
	{
		case 3:
			if (uParam0->f_23 == 0)
			{
				__LIB_1__::func_789("WAR_VEH_DES_M1" /* GXT: Purchase upgrades for the Brickade. */, 0, 0);
			}
			else if (uParam0->f_23 == 1)
			{
				__LIB_1__::func_789("WAR_VEH_DES_M2" /* GXT: Purchase upgrades for the Cuban 800 and Titan. */, 0, 0);
			}
			else if (uParam0->f_23 == 2)
			{
				__LIB_1__::func_789("WAR_VEH_DES_M3" /* GXT: Purchase upgrades for the Tug. */, 0, 0);
			}
			break;
		case 2:
			if (uParam0->f_23 == 0)
			{
				if (BitTest(uVar0, 0))
				{
					__LIB_1__::func_789("WAR_UPG_PURC" /* GXT: Item purchased. */, 0, 0);
				}
				else if (Global_262145.f_15812 /* Tunable: EXEC_UPGRADES_DISABLE_BOAT_ARMOR */)
				{
					__LIB_1__::func_789("PM_INF_QMF5" /* GXT: Currently unavailable. */, 0, 0);
				}
				else
				{
					__LIB_1__::func_789("WAR_VEH_DES_I5" /* GXT: Additional protection for the Tug allowing it to withstand extensive damage. */, 0, 0);
				}
			}
			else if (BitTest(uVar0, 1))
			{
				__LIB_1__::func_789("WAR_UPG_PURC" /* GXT: Item purchased. */, 0, 0);
			}
			else if (Global_262145.f_15815 /* Tunable: EXEC_UPGRADES_DISABLE_BOAT_SPEED */)
			{
				__LIB_1__::func_789("PM_INF_QMF5" /* GXT: Currently unavailable. */, 0, 0);
			}
			else
			{
				__LIB_1__::func_789("WAR_VEH_DES_I6" /* GXT: Significantly increase the speed of the Tug to allow for faster deliveries. */, 0, 0);
			}
			break;
		case 1:
			if (uParam0->f_23 == 0)
			{
				if (BitTest(uVar0, 2))
				{
					__LIB_1__::func_789("WAR_UPG_PURC" /* GXT: Item purchased. */, 0, 0);
				}
				else if (Global_262145.f_15810 /* Tunable: EXEC_UPGRADES_DISABLE_PLANE_ARMOR */)
				{
					__LIB_1__::func_789("PM_INF_QMF5" /* GXT: Currently unavailable. */, 0, 0);
				}
				else
				{
					__LIB_1__::func_789("WAR_VEH_DES_I3" /* GXT: Additional protection for the Cuban 800 and Titan allowing them to withstand extensive damage. */, 0, 0);
				}
			}
			else if (BitTest(uVar0, 3))
			{
				__LIB_1__::func_789("WAR_UPG_PURC" /* GXT: Item purchased. */, 0, 0);
			}
			else if (Global_262145.f_15813 /* Tunable: EXEC_UPGRADES_DISABLE_PLANE_JAMMER */)
			{
				__LIB_1__::func_789("PM_INF_QMF5" /* GXT: Currently unavailable. */, 0, 0);
			}
			else
			{
				__LIB_1__::func_789("WAR_VEH_DES_I4" /* GXT: Upgrade the jammer on the Cuban 800 and Titan to increase interference times and reduce recharge times. */, 0, 0);
			}
			break;
		case 0:
			if (uParam0->f_23 == 0)
			{
				if (BitTest(uVar0, 4))
				{
					__LIB_1__::func_789("WAR_UPG_PURC" /* GXT: Item purchased. */, 0, 0);
				}
				else if (Global_262145.f_15811 /* Tunable: EXEC_UPGRADES_DISABLE_TRUCK_ARMOR */)
				{
					__LIB_1__::func_789("PM_INF_QMF5" /* GXT: Currently unavailable. */, 0, 0);
				}
				else
				{
					__LIB_1__::func_789("WAR_VEH_DES_I1" /* GXT: Additional protection for the Brickade allowing it to withstand extensive damage. */, 0, 0);
				}
			}
			else if (BitTest(uVar0, 5))
			{
				__LIB_1__::func_789("WAR_UPG_PURC" /* GXT: Item purchased. */, 0, 0);
			}
			else if (Global_262145.f_15814 /* Tunable: EXEC_UPGRADES_DISABLE_TRUCK_TIRES */)
			{
				__LIB_1__::func_789("PM_INF_QMF5" /* GXT: Currently unavailable. */, 0, 0);
			}
			else
			{
				__LIB_1__::func_789("WAR_VEH_DES_I2" /* GXT: Replace the standard tires on the Brickade with bulletproof tires. */, 0, 0);
			}
			break;
	}
}

void func_6047(var uParam0)//Position - 0x1FF7B6
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bVar0 = true;
	if ((((HUD::IS_PAUSE_MENU_ACTIVE() || PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED()) || HUD::IS_WARNING_MESSAGE_ACTIVE()) || NETWORK::NETWORK_TEXT_CHAT_IS_TYPING()) || Global_100493.f_1458)
	{
		bVar0 = false;
	}
	if (((bVar0 && PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/)) || (bVar0 && uParam0->f_9.f_6)) || iLocal_348 != 0)
	{
		bVar1 = MONEY::NETWORK_CAN_SPEND_MONEY(func_6067(uParam0->f_40, uParam0->f_23), false, false, true, -1, 0);
		bVar2 = iLocal_348 != false;
		if ((bVar1 == 0 && bVar2 == 0) || func_6066(uParam0->f_40, uParam0->f_23))
		{
			if (bVar1 == 0)
			{
				__LIB_13__::func_630(MISC::GET_HASH_KEY(func_6065(uParam0->f_40, uParam0->f_23)), func_6067(uParam0->f_40, uParam0->f_23), 0);
				__LIB_2__::func_820(0, 10, 3);
			}
			AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "DLC_EXEC_Warehouse_Upgrade_Bench_Sounds", true);
		}
		else if (bVar1 || bVar2)
		{
			if (!func_6066(uParam0->f_40, uParam0->f_23))
			{
				func_6050(uParam0);
			}
		}
		uParam0->f_21 = 1;
		uParam0->f_20 = 0;
	}
	else if (!bVar0)
	{
	}
	else if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/) || uParam0->f_9.f_7)
	{
		uParam0->f_23 = uParam0->f_40;
		uParam0->f_40 = 3;
		uParam0->f_21 = 1;
		AUDIO::PLAY_SOUND_FRONTEND(-1, "BACK", "DLC_EXEC_Warehouse_Upgrade_Bench_Sounds", true);
		uParam0->f_20 = 0;
		uParam0->f_24 = __LIB_5__::func_392();
	}
	else if ((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/) && __LIB_4__::func_845(&(uParam0->f_19), &(uParam0->f_9.f_4), 1)) || (uParam0->f_9.f_8 && __LIB_4__::func_845(&(uParam0->f_19), &(uParam0->f_9.f_4), 1)))
	{
		if (uParam0->f_9.f_4 > 0)
		{
			uParam0->f_23 = (uParam0->f_23 - 1);
			if (uParam0->f_23 < 0)
			{
				uParam0->f_23 = 1;
			}
			__LIB_3__::func_781(uParam0->f_23, 1, 1);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "DLC_EXEC_Warehouse_Upgrade_Bench_Sounds", true);
		}
	}
	else if ((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/) && __LIB_4__::func_845(&(uParam0->f_19), &(uParam0->f_9.f_4), 1)) || (uParam0->f_9.f_9 && __LIB_4__::func_845(&(uParam0->f_19), &(uParam0->f_9.f_4), 1)))
	{
		if (uParam0->f_9.f_4 < 0)
		{
			uParam0->f_23++;
			if (uParam0->f_23 > 1)
			{
				uParam0->f_23 = 0;
			}
			__LIB_3__::func_781(uParam0->f_23, 1, 1);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "DLC_EXEC_Warehouse_Upgrade_Bench_Sounds", true);
		}
	}
}

int func_6050(var uParam0)//Position - 0x1FFB9A
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	bVar0 = true;
	if (__LIB_0__::func_112())
	{
		bVar0 = false;
		iVar1 = func_6059(uParam0->f_40, uParam0->f_23);
		iVar2 = func_6067(uParam0->f_40, uParam0->f_23);
		if (func_6051(joaat("CATEGORY_WEAPON"), joaat("NET_SHOP_ACTION_SPEND"), iVar1, 1, iVar2, &iLocal_348, 0, 3, func_6058(uParam0->f_40, uParam0->f_23), MISC::GET_HASH_KEY(func_6065(uParam0->f_40, uParam0->f_23)), 0))
		{
			if (iLocal_348 == 2)
			{
				bVar0 = true;
			}
			iLocal_348 = 0;
		}
	}
	if (bVar0)
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Purchase_Upgrade", "DLC_EXEC_Warehouse_Upgrade_Bench_Sounds", true);
		iVar3 = __LIB_35__::func_473();
		if (uParam0->f_40 == 2)
		{
			if (uParam0->f_23 == 0)
			{
				MISC::SET_BIT(&iVar3, 0);
			}
			else
			{
				MISC::SET_BIT(&iVar3, 1);
			}
		}
		else if (uParam0->f_40 == 1)
		{
			if (uParam0->f_23 == 0)
			{
				MISC::SET_BIT(&iVar3, 2);
			}
			else
			{
				MISC::SET_BIT(&iVar3, 3);
			}
		}
		else if (uParam0->f_40 == 0)
		{
			if (uParam0->f_23 == 0)
			{
				MISC::SET_BIT(&iVar3, 4);
			}
			else
			{
				MISC::SET_BIT(&iVar3, 5);
			}
		}
		iVar2 = func_6067(uParam0->f_40, uParam0->f_23);
		__LIB_1__::func_364(3692, iVar3, -1, 1);
		if (!__LIB_0__::func_112())
		{
			bVar4 = MONEY::NETWORK_GET_VC_BANK_BALANCE() >= iVar2;
			bVar5 = (!bVar4 && MONEY::NETWORK_GET_VC_BANK_BALANCE() > 0);
			if (iVar2 > 0)
			{
				MONEY::NETWORK_BUY_ITEM(iVar2, func_6058(uParam0->f_40, uParam0->f_23), 18, 1, bVar4, 0, 0, MISC::GET_HASH_KEY(func_6065(uParam0->f_40, uParam0->f_23)), 0, bVar5);
			}
		}
		uParam0->f_21 = 1;
		uParam0->f_24 = __LIB_5__::func_392();
		uParam0->f_20 = 0;
		return 1;
	}
	return 0;
}

bool func_6051(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x1FFD1E
{
	if (*iParam5 != 0 && *iParam5 != 1)
	{
		*iParam5 = 0;
	}
	switch (*iParam5)
	{
		case 0:
			if (func_6055(joaat("NET_SHOP_TTYPE_BASKET"), iParam0, iParam2, iParam1, iParam3, iParam4, 1, 4, iParam6, iParam7))
			{
				if (__LIB_6__::func_360())
				{
					*iParam5 = 1;
				}
				else
				{
					*iParam5 = 3;
					__LIB_1__::func_34(__LIB_3__::func_534());
				}
			}
			else
			{
				*iParam5 = 3;
				__LIB_1__::func_34(__LIB_3__::func_534());
			}
			break;
		case 1:
			if (__LIB_2__::func_835(__LIB_3__::func_534()))
			{
				if (__LIB_2__::func_834(__LIB_3__::func_534()) == 2)
				{
					*iParam5 = 2;
					if (iParam4 != 0)
					{
						NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(__LIB_1__::func_818(__LIB_3__::func_534()));
						if (!bParam10)
						{
							if (iParam0 == joaat("CATEGORY_INVENTORY_PROPERTIE"))
							{
								MONEY::NETWORK_BUY_PROPERTY(iParam4, iParam8, false, false);
							}
							else if (iParam0 == joaat("CATEGORY_INVENTORY_WAREHOUSE_INTERIOR"))
							{
							}
							else
							{
								MONEY::NETWORK_BUY_ITEM(iParam4, iParam8, 18, 1, false, 0, 0, iParam9, 0, true);
							}
						}
					}
					__LIB_1__::func_34(__LIB_3__::func_534());
				}
				else
				{
					*iParam5 = 3;
					__LIB_1__::func_34(__LIB_3__::func_534());
				}
			}
			break;
	}
	return *iParam5 != 1;
}

int func_6055(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x2005C8
{
	bool bVar0;
	int iVar1;
	struct<4> Var2;
	bVar0 = false;
	if (!__LIB_0__::func_112())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(__LIB_0__::func_5()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4535607 = 1;
			return 0;
		}
		if (Global_2726699)
		{
			if (iParam1 == joaat("CATEGORY_WEAPON_AMMO") || iParam1 == joaat("CATEGORY_MART"))
			{
				Global_4535608 = 1;
				return 0;
			}
		}
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	iVar1 = __LIB_3__::func_534();
	if (iVar1 == -1)
	{
		if (!__LIB_9__::func_727(&iVar1, iParam0, iParam1, iParam3, iParam7, uParam9))
		{
			return 0;
		}
	}
	if (iVar1 != -1)
	{
		if (iParam8 != 0 && __LIB_3__::func_535(iParam1))
		{
			Var2.f_0 = iParam8;
			Var2.f_1 = iParam2;
			Var2.f_2 = uParam5;
			Var2.f_3 = iParam6;
		}
		else
		{
			Var2.f_0 = iParam2;
			Var2.f_1 = iParam8;
			Var2.f_2 = uParam5;
			Var2.f_3 = iParam6;
		}
		Global_4534105[iVar1 /*85*/].f_66.f_1 = Var2.f_2;
		Global_4534105[iVar1 /*85*/].f_66.f_15 = Var2.f_0;
		Global_4534105[iVar1 /*85*/].f_66.f_16 = Var2.f_1;
		if (bVar0 || NETSHOPPING::NET_GAMESERVER_BASKET_ADD_ITEM(&Var2, iParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_6058(int iParam0, int iParam1)//Position - 0x200876
{
	switch (iParam0)
	{
		case 2:
			switch (iParam1)
			{
				case 0:
				case 1:
					return joaat("tug");
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return joaat("cuban800");
					break;
				case 1:
					return joaat("titan");
					break;
			}
			break;
		case 0:
			switch (iParam1)
			{
				case 0:
				case 1:
					return joaat("brickade");
					break;
			}
			break;
	}
	return 0;
}

int func_6059(int iParam0, int iParam1)//Position - 0x200906
{
	switch (iParam0)
	{
		case 2:
			switch (iParam1)
			{
				case 0:
					return joaat("WP_VU_BOATARM_t0_v0");
					break;
				case 1:
					return joaat("WP_VU_BOATSPEED_t0_v0");
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return joaat("WP_VU_PLAARM_t0_v0");
					break;
				case 1:
					return joaat("WP_VU_PLAJAM_t0_v0");
					break;
			}
			break;
		case 0:
			switch (iParam1)
			{
				case 0:
					return joaat("WP_VU_TRKARM_t0_v0");
					break;
				case 1:
					return joaat("WP_VU_TRKTYR_t0_v0");
					break;
			}
			break;
	}
	return 0;
}

char* func_6065(int iParam0, int iParam1)//Position - 0x200AE5
{
	switch (iParam0)
	{
		case 2:
			switch (iParam1)
			{
				case 0:
					return "WAR_BOAT_UP_1" /* GXT: Armor Upgrade */;
					break;
				case 1:
					return "WAR_BOAT_UP_2" /* GXT: Speed Upgrade */;
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return "WAR_BOAT_UP_1" /* GXT: Armor Upgrade */;
					break;
				case 1:
					return "WAR_PLANE_UP_2" /* GXT: Jammer Upgrade */;
					break;
			}
			break;
		case 0:
			switch (iParam1)
			{
				case 0:
					return "WAR_BOAT_UP_1" /* GXT: Armor Upgrade */;
					break;
				case 1:
					return "WAR_TRUCK_UP_2" /* GXT: Bulletproof Tires */;
					break;
			}
			break;
	}
	return "";
}

int func_6066(int iParam0, int iParam1)//Position - 0x200B8E
{
	var uVar0;
	uVar0 = __LIB_35__::func_473();
	switch (iParam0)
	{
		case 2:
			switch (iParam1)
			{
				case 0:
					if (BitTest(uVar0, 0) || Global_262145.f_15812 /* Tunable: EXEC_UPGRADES_DISABLE_BOAT_ARMOR */)
					{
						return 1;
					}
					break;
				case 1:
					if (BitTest(uVar0, 1) || Global_262145.f_15815 /* Tunable: EXEC_UPGRADES_DISABLE_BOAT_SPEED */)
					{
						return 1;
					}
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					if (BitTest(uVar0, 2) || Global_262145.f_15810 /* Tunable: EXEC_UPGRADES_DISABLE_PLANE_ARMOR */)
					{
						return 1;
					}
					break;
				case 1:
					if (BitTest(uVar0, 3) || Global_262145.f_15813 /* Tunable: EXEC_UPGRADES_DISABLE_PLANE_JAMMER */)
					{
						return 1;
					}
					break;
			}
			break;
		case 0:
			switch (iParam1)
			{
				case 0:
					if (BitTest(uVar0, 4) || Global_262145.f_15811 /* Tunable: EXEC_UPGRADES_DISABLE_TRUCK_ARMOR */)
					{
						return 1;
					}
					break;
				case 1:
					if (BitTest(uVar0, 5) || Global_262145.f_15814 /* Tunable: EXEC_UPGRADES_DISABLE_TRUCK_TIRES */)
					{
						return 1;
					}
					break;
			}
			break;
	}
	return 0;
}

int func_6067(int iParam0, int iParam1)//Position - 0x200C9A
{
	switch (iParam0)
	{
		case 2:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_16022 /* Tunable: EXEC_UPGRADES_BOAT_ARMOR_PRICE */;
					break;
				case 1:
					return Global_262145.f_16021 /* Tunable: EXEC_UPGRADES_BOAT_SPEED_PRICE */;
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_16017 /* Tunable: EXEC_UPGRADES_PLANE_ARMOR_PRICE */;
					break;
				case 1:
					return Global_262145.f_16018 /* Tunable: EXEC_UPGRADES_PLANE_JAMMER_PRICE */;
					break;
			}
			break;
		case 0:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_16020 /* Tunable: EXEC_UPGRADES_TRUCK_ARMOR_PRICE */;
					break;
				case 1:
					return Global_262145.f_16019 /* Tunable: EXEC_UPGRADES_TRUCK_TIRES_PRICE */;
					break;
			}
			break;
	}
	return 0;
}

void func_6068(var uParam0)//Position - 0x200D4C
{
	bool bVar0;
	bVar0 = true;
	if ((((HUD::GET_PAUSE_MENU_STATE() != 0 || PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED()) || HUD::IS_WARNING_MESSAGE_ACTIVE()) || NETWORK::NETWORK_TEXT_CHAT_IS_TYPING()) || Global_100493.f_1458)
	{
		bVar0 = false;
	}
	if (!bVar0)
	{
	}
	else if ((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/) && __LIB_4__::func_845(&(uParam0->f_19), &(uParam0->f_9.f_4), 1)) || (uParam0->f_9.f_8 && __LIB_4__::func_845(&(uParam0->f_19), &(uParam0->f_9.f_4), 1)))
	{
		if (uParam0->f_9.f_4 > 0)
		{
			uParam0->f_23 = (uParam0->f_23 - 1);
			if (uParam0->f_23 < 0)
			{
				uParam0->f_23 = 2;
			}
			__LIB_3__::func_781(uParam0->f_23, 1, 1);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "DLC_EXEC_Warehouse_Upgrade_Bench_Sounds", true);
		}
	}
	else if ((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/) && __LIB_4__::func_845(&(uParam0->f_19), &(uParam0->f_9.f_4), 1)) || (uParam0->f_9.f_9 && __LIB_4__::func_845(&(uParam0->f_19), &(uParam0->f_9.f_4), 1)))
	{
		if (uParam0->f_9.f_4 < 0)
		{
			uParam0->f_23++;
			if (uParam0->f_23 > 2)
			{
				uParam0->f_23 = 0;
			}
			__LIB_3__::func_781(uParam0->f_23, 1, 1);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "DLC_EXEC_Warehouse_Upgrade_Bench_Sounds", true);
		}
	}
	else if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/) || uParam0->f_9.f_7)
	{
		*uParam0 = 4;
		AUDIO::PLAY_SOUND_FRONTEND(-1, "CANCEL", "DLC_EXEC_Warehouse_Upgrade_Bench_Sounds", true);
		uParam0->f_20 = 0;
	}
	else if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) || uParam0->f_9.f_6)
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT" /* GXT: Filter List */, "DLC_EXEC_Warehouse_Upgrade_Bench_Sounds", true);
		if (uParam0->f_23 >= 0 && uParam0->f_23 < 3)
		{
			uParam0->f_40 = uParam0->f_23;
		}
		uParam0->f_21 = 1;
		uParam0->f_24 = __LIB_5__::func_392();
		uParam0->f_23 = 0;
		uParam0->f_20 = 0;
	}
}

void func_6069(var uParam0)//Position - 0x200F19
{
	if (!uParam0->f_20)
	{
		switch (uParam0->f_40)
		{
			case 3:
				func_6084(uParam0);
				break;
			case 2:
				func_6076(uParam0);
				break;
			case 0:
				func_6075(uParam0);
				break;
			case 1:
				func_6070(uParam0);
				break;
		}
		uParam0->f_20 = 1;
	}
}

void func_6070(var uParam0)//Position - 0x200F73
{
	var uVar0;
	__LIB_1__::func_602(0, 0);
	__LIB_1__::func_767(func_6074(uParam0->f_40, 1));
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	func_6073(47, 88, 109, 255, 1);
	__LIB_3__::func_566(1, "ShopUI_Title_Exec_VechUpgrade", "ShopUI_Title_Exec_VechUpgrade");
	uVar0 = __LIB_35__::func_473();
	if (BitTest(uVar0, 2) || Global_262145.f_15810 /* Tunable: EXEC_UPGRADES_DISABLE_PLANE_ARMOR */)
	{
		uParam0->f_22 = 0;
	}
	else
	{
		uParam0->f_22 = 1;
	}
	if (func_6072(*uParam0, 0))
	{
		__LIB_8__::func_233(0, "WAR_BOAT_UP_1" /* GXT: Armor Upgrade */, 1, uParam0->f_22, 0, 0, 0);
		__LIB_11__::func_629(51, 0);
	}
	else
	{
		__LIB_8__::func_233(0, "WAR_BOAT_UP_1" /* GXT: Armor Upgrade */, 0, uParam0->f_22, 0, 0, 0);
	}
	if (BitTest(uVar0, 2))
	{
		__LIB_8__::func_233(0, "", 1, uParam0->f_22, 0, 0, 0);
		__LIB_11__::func_629(12, 0);
	}
	else
	{
		__LIB_8__::func_233(0, "ITEM_COST" /* GXT: $~1~ */, 1, uParam0->f_22, 0, 0, 0);
		__LIB_12__::func_332(func_6067(uParam0->f_40, 0), 0);
	}
	if (BitTest(uVar0, 3) || Global_262145.f_15813 /* Tunable: EXEC_UPGRADES_DISABLE_PLANE_JAMMER */)
	{
		uParam0->f_22 = 0;
	}
	else
	{
		uParam0->f_22 = 1;
	}
	if (func_6072(*uParam0, 1))
	{
		__LIB_8__::func_233(1, "WAR_PLANE_UP_2" /* GXT: Jammer Upgrade */, 1, uParam0->f_22, 0, 0, 0);
		__LIB_11__::func_629(51, 0);
	}
	else
	{
		__LIB_8__::func_233(1, "WAR_PLANE_UP_2" /* GXT: Jammer Upgrade */, 0, uParam0->f_22, 0, 0, 0);
	}
	if (BitTest(uVar0, 3))
	{
		__LIB_8__::func_233(1, "", 1, uParam0->f_22, 0, 0, 0);
		__LIB_11__::func_629(12, 0);
	}
	else
	{
		__LIB_8__::func_233(1, "ITEM_COST" /* GXT: $~1~ */, 1, uParam0->f_22, 0, 0, 0);
		__LIB_12__::func_332(func_6067(uParam0->f_40, 1), 0);
	}
	__LIB_3__::func_781(uParam0->f_23, 1, 1);
	uParam0->f_21 = 1;
	uParam0->f_40 = 1;
	__LIB_1__::func_792(201, "ITEM_SELECT" /* GXT: Select */, -1, 0);
	__LIB_1__::func_792(202, "ITEM_BACK" /* GXT: Back */, -1, 0);
}

int func_6072(struct<41> Param0, int iParam1)//Position - 0x201263
{
	var uVar0;
	uVar0 = Global_262145.f_16116 /* Tunable: WAREHOUSE_WORKBENCH_UPGRADE_DISCOUNT_BS */;
	switch (Param0.f_40)
	{
		case 2:
			switch (iParam1)
			{
				case 0:
					return BitTest(uVar0, 0);
				case 1:
					return BitTest(uVar0, 1);
				default:
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return BitTest(uVar0, 2);
				case 1:
					return BitTest(uVar0, 3);
				default:
			}
			break;
		case 0:
			switch (iParam1)
			{
				case 0:
					return BitTest(uVar0, 4);
				case 1:
					return BitTest(uVar0, 5);
				default:
			}
			break;
	}
	return 0;
}

void func_6073(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x2012FC
{
	Global_23150.f_8778 = iParam4;
	Global_23150.f_8774 = iParam0;
	Global_23150.f_8775 = iParam1;
	Global_23150.f_8776 = iParam2;
	Global_23150.f_8777 = iParam3;
}

char* func_6074(int iParam0, bool bParam1)//Position - 0x20132C
{
	switch (iParam0)
	{
		case 2:
			if (!bParam1)
			{
				return "WAR_VEH_MENUI1" /* GXT: Delivery Boat */;
			}
			else
			{
				return "WAR_VEH_MENUT1" /* GXT: DELIVERY BOAT */;
			}
			break;
		case 0:
			if (!bParam1)
			{
				return "WAR_VEH_MENUI2" /* GXT: Delivery Truck */;
			}
			else
			{
				return "WAR_VEH_MENUT2" /* GXT: DELIVERY TRUCK */;
			}
			break;
		case 1:
			if (!bParam1)
			{
				return "WAR_VEH_MENUI3" /* GXT: Delivery Planes */;
			}
			else
			{
				return "WAR_VEH_MENUT3" /* GXT: DELIVERY PLANES */;
			}
			break;
	}
	return "";
}

void func_6075(var uParam0)//Position - 0x2013A5
{
	var uVar0;
	__LIB_1__::func_602(0, 0);
	__LIB_1__::func_767(func_6074(uParam0->f_40, 1));
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	func_6073(47, 88, 109, 255, 1);
	__LIB_3__::func_566(1, "ShopUI_Title_Exec_VechUpgrade", "ShopUI_Title_Exec_VechUpgrade");
	uVar0 = __LIB_35__::func_473();
	if (BitTest(uVar0, 4) || Global_262145.f_15811 /* Tunable: EXEC_UPGRADES_DISABLE_TRUCK_ARMOR */)
	{
		uParam0->f_22 = 0;
	}
	else
	{
		uParam0->f_22 = 1;
	}
	if (func_6072(*uParam0, 0))
	{
		__LIB_8__::func_233(0, "WAR_BOAT_UP_1" /* GXT: Armor Upgrade */, 1, uParam0->f_22, 0, 0, 0);
		__LIB_11__::func_629(51, 0);
	}
	else
	{
		__LIB_8__::func_233(0, "WAR_BOAT_UP_1" /* GXT: Armor Upgrade */, 0, uParam0->f_22, 0, 0, 0);
	}
	if (BitTest(uVar0, 4))
	{
		__LIB_8__::func_233(0, "", 1, uParam0->f_22, 0, 0, 0);
		__LIB_11__::func_629(12, 0);
	}
	else
	{
		__LIB_8__::func_233(0, "ITEM_COST" /* GXT: $~1~ */, 1, uParam0->f_22, 0, 0, 0);
		__LIB_12__::func_332(func_6067(uParam0->f_40, 0), 0);
	}
	if (BitTest(uVar0, 5) || Global_262145.f_15814 /* Tunable: EXEC_UPGRADES_DISABLE_TRUCK_TIRES */)
	{
		uParam0->f_22 = 0;
	}
	else
	{
		uParam0->f_22 = 1;
	}
	if (func_6072(*uParam0, 1))
	{
		__LIB_8__::func_233(1, "WAR_TRUCK_UP_2" /* GXT: Bulletproof Tires */, 1, uParam0->f_22, 0, 0, 0);
		__LIB_11__::func_629(51, 0);
	}
	else
	{
		__LIB_8__::func_233(1, "WAR_TRUCK_UP_2" /* GXT: Bulletproof Tires */, 0, uParam0->f_22, 0, 0, 0);
	}
	if (BitTest(uVar0, 5))
	{
		__LIB_8__::func_233(1, "", 1, uParam0->f_22, 0, 0, 0);
		__LIB_11__::func_629(12, 0);
	}
	else
	{
		__LIB_8__::func_233(1, "ITEM_COST" /* GXT: $~1~ */, 1, uParam0->f_22, 0, 0, 0);
		__LIB_12__::func_332(func_6067(uParam0->f_40, 1), 0);
	}
	__LIB_3__::func_781(uParam0->f_23, 1, 1);
	uParam0->f_21 = 1;
	uParam0->f_40 = 0;
	__LIB_1__::func_792(201, "ITEM_SELECT" /* GXT: Select */, -1, 0);
	__LIB_1__::func_792(202, "ITEM_BACK" /* GXT: Back */, -1, 0);
}

void func_6076(var uParam0)//Position - 0x20155A
{
	var uVar0;
	__LIB_1__::func_602(0, 0);
	__LIB_1__::func_767(func_6074(uParam0->f_40, 1));
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	func_6073(47, 88, 109, 255, 1);
	__LIB_3__::func_566(1, "ShopUI_Title_Exec_VechUpgrade", "ShopUI_Title_Exec_VechUpgrade");
	uVar0 = __LIB_35__::func_473();
	if (BitTest(uVar0, 0) || Global_262145.f_15812 /* Tunable: EXEC_UPGRADES_DISABLE_BOAT_ARMOR */)
	{
		uParam0->f_22 = 0;
	}
	else
	{
		uParam0->f_22 = 1;
	}
	if (func_6072(*uParam0, 0))
	{
		__LIB_8__::func_233(0, "WAR_BOAT_UP_1" /* GXT: Armor Upgrade */, 1, uParam0->f_22, 0, 0, 0);
		__LIB_11__::func_629(51, 0);
	}
	else
	{
		__LIB_8__::func_233(0, "WAR_BOAT_UP_1" /* GXT: Armor Upgrade */, 0, uParam0->f_22, 0, 0, 0);
	}
	if (BitTest(uVar0, 0))
	{
		__LIB_8__::func_233(0, "", 1, uParam0->f_22, 0, 0, 0);
		__LIB_11__::func_629(12, 0);
	}
	else
	{
		__LIB_8__::func_233(0, "ITEM_COST" /* GXT: $~1~ */, 1, uParam0->f_22, 0, 0, 0);
		__LIB_12__::func_332(func_6067(uParam0->f_40, 0), 0);
	}
	if (BitTest(uVar0, 1) || Global_262145.f_15815 /* Tunable: EXEC_UPGRADES_DISABLE_BOAT_SPEED */)
	{
		uParam0->f_22 = 0;
	}
	else
	{
		uParam0->f_22 = 1;
	}
	if (func_6072(*uParam0, 1))
	{
		__LIB_8__::func_233(1, "WAR_BOAT_UP_2" /* GXT: Speed Upgrade */, 1, uParam0->f_22, 0, 0, 0);
		__LIB_11__::func_629(51, 0);
	}
	else
	{
		__LIB_8__::func_233(1, "WAR_BOAT_UP_2" /* GXT: Speed Upgrade */, 0, uParam0->f_22, 0, 0, 0);
	}
	if (BitTest(uVar0, 1))
	{
		__LIB_8__::func_233(1, "", 1, uParam0->f_22, 0, 0, 0);
		__LIB_11__::func_629(12, 0);
	}
	else
	{
		__LIB_8__::func_233(1, "ITEM_COST" /* GXT: $~1~ */, 1, uParam0->f_22, 0, 0, 0);
		__LIB_12__::func_332(func_6067(uParam0->f_40, 1), 0);
	}
	__LIB_3__::func_781(uParam0->f_23, 1, 1);
	uParam0->f_21 = 1;
	uParam0->f_40 = 2;
	__LIB_1__::func_792(201, "ITEM_SELECT" /* GXT: Select */, -1, 0);
	__LIB_1__::func_792(202, "ITEM_BACK" /* GXT: Back */, -1, 0);
}

void func_6077(var uParam0, var uParam1)//Position - 0x20170F
{
	__LIB_0__::func_603(uParam0, &(uParam0->f_1), &(uParam0->f_2), &(uParam0->f_3), 0);
	uParam0->f_6 = (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/));
	uParam0->f_7 = (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/));
	uParam0->f_8 = (uParam0->f_1 < -64 || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/));
	uParam0->f_9 = (uParam0->f_1 > 64 || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/));
	if (((((__LIB_3__::func_67(0, -1, 0) && HUD::GET_PAUSE_MENU_STATE() == 0) && !PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !NETWORK::NETWORK_TEXT_CHAT_IS_TYPING()) && !Global_100493.f_1458)
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
				if (Global_4539961 == *uParam1)
				{
					uParam0->f_6 = 1;
				}
				else
				{
					*uParam1 = Global_4539961;
					__LIB_3__::func_781(*uParam1, 1, 1);
				}
			}
			if (__LIB_3__::func_528())
			{
				uParam0->f_7 = 1;
			}
			if (__LIB_3__::func_557(0, 0, 0))
			{
				uParam0->f_8 = 1;
			}
			if (__LIB_3__::func_556(0, 0, 0))
			{
				uParam0->f_9 = 1;
			}
		}
	}
}

void func_6079(var uParam0)//Position - 0x201996
{
	int iVar0;
	iVar0 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam0->f_25);
	if (iVar0 != -1)
	{
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar0))
		{
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar0) >= 0.99f)
			{
				MISC::CLEAR_BIT(&(uParam0->f_26), 1);
			}
		}
	}
}

int func_6080(var uParam0)//Position - 0x2019CF
{
	if (!BitTest(uParam0->f_26, 1))
	{
		uParam0->f_25 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(uParam0->f_27, uParam0->f_27.f_3, 2, true, false, 1f, 0f, 1f);
		NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_25, uParam0->f_39, "idle", 1.5f, -1.5f, 13, 16, 1.5f, 0);
		NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam0->f_25);
		MISC::SET_BIT(&(uParam0->f_26), 1);
		return 1;
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_6081(var uParam0)//Position - 0x201A4A
{
	int iVar0;
	iVar0 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam0->f_25);
	if (iVar0 != -1)
	{
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar0))
		{
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar0) >= 0.99f)
			{
				*uParam0 = 3;
			}
		}
	}
}

int func_6082(var uParam0)//Position - 0x201A7E
{
	STREAMING::REQUEST_ANIM_DICT(uParam0->f_39);
	if (!STREAMING::HAS_ANIM_DICT_LOADED(uParam0->f_39))
	{
		return 0;
	}
	if (!BitTest(uParam0->f_26, 0))
	{
		uParam0->f_25 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(uParam0->f_27, uParam0->f_27.f_3, 2, true, false, 1f, 0f, 1f);
		NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_25, uParam0->f_39, "enter", 1.5f, -1.5f, 13, 16, 1.5f, 0);
		NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam0->f_25);
		MISC::SET_BIT(&(uParam0->f_26), 0);
		return 1;
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_6083(int iParam0, var uParam1, bool bParam2)//Position - 0x201B10
{
	if (!bParam2)
	{
		switch (iParam0)
		{
			case 0:
				*uParam1 = { 1100.6f, -3102.135f, -40.0007f };
				uParam1->f_3 = { 0f, 0f, -180f };
				break;
			case 1:
				*uParam1 = { 1050.281f, -3094.157f, -40.0207f };
				uParam1->f_3 = { 0f, 0f, 0f };
				break;
			case 2:
				*uParam1 = { 996.5728f, -3099.166f, -40.0206f };
				uParam1->f_3 = { 0f, 0f, 90f };
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				*uParam1 = { 1100.4578f, -3100.9402f, -39.9999f };
				uParam1->f_3 = { 0f, 0f, 177.6192f };
				break;
			case 1:
				*uParam1 = { 1050.3496f, -3095.4258f, -39.9999f };
				uParam1->f_3 = { 0f, 0f, 1.937f };
				break;
			case 2:
				*uParam1 = { 997.4687f, -3098.9924f, -39.9999f };
				uParam1->f_3 = { 0f, 0f, 93.524f };
				break;
			}
	}
}

void func_6084(var uParam0)//Position - 0x201C21
{
	int iVar0;
	__LIB_1__::func_602(0, 0);
	__LIB_1__::func_767("WAR_VEH_TITLE" /* GXT: DELIVERY VEHICLE UPGRADES */);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	func_6073(47, 88, 109, 255, 1);
	__LIB_3__::func_566(1, "ShopUI_Title_Exec_VechUpgrade", "ShopUI_Title_Exec_VechUpgrade");
	iVar0 = 0;
	while (iVar0 < 3)
	{
		__LIB_8__::func_233(iVar0, func_6074(iVar0, 0), 1, 1, 0, 0, 0);
		__LIB_6__::func_783(func_6074(iVar0, 0), 0);
		iVar0++;
	}
	__LIB_3__::func_781(uParam0->f_23, 1, 1);
	uParam0->f_21 = 1;
	uParam0->f_40 = 3;
	__LIB_1__::func_792(201, "ITEM_SELECT" /* GXT: Select */, -1, 0);
	__LIB_1__::func_792(202, "ITEM_BACK" /* GXT: Back */, -1, 0);
}

int func_6086()//Position - 0x201DFC
{
	if ((((((((__LIB_0__::func_77(0) || __LIB_0__::func_970(PLAYER::PLAYER_ID())) || __LIB_0__::func_971(PLAYER::PLAYER_ID())) || Global_2703735.f_833.f_5 != -1) || Global_75485 == 1) || __LIB_0__::func_104(1)) || __LIB_0__::func_193()) || CUTSCENE::IS_CUTSCENE_ACTIVE()) || __LIB_5__::func_185(PLAYER::PLAYER_ID()) == 168)
	{
		return 0;
	}
	return 1;
}

bool func_6087(var uParam0)//Position - 0x201E7A
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	func_6083(__LIB_5__::func_388(Local_346.f_2), &(uParam0->f_2), 0);
	Var0 = { uParam0->f_2 };
	Var1 = { __LIB_0__::func_79(Var0 - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) };
	fVar2 = __LIB_0__::func_158(ENTITY::GET_ENTITY_FORWARD_VECTOR(PLAYER::PLAYER_PED_ID()), Var1);
	return fVar2 >= 0f;
}

void func_6089(var uParam0)//Position - 0x201F28
{
	func_6083(__LIB_5__::func_388(Local_346.f_2), &(uParam0->f_2), 0);
	func_6092(__LIB_5__::func_388(Local_346.f_2), &(uParam0->f_27));
	func_6091(__LIB_5__::func_388(Local_346.f_2), &(uParam0->f_33));
	uParam0->f_39 = "anim@amb@warehouse@toolbox@";
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
	{
		STREAMING::REQUEST_MODEL(joaat("ex_prop_ex_toolchest_01"));
		if (STREAMING::HAS_MODEL_LOADED(joaat("ex_prop_ex_toolchest_01")))
		{
			Local_346.f_433.f_1 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("ex_prop_ex_toolchest_01"), uParam0->f_2, false, false, false);
			ENTITY::SET_ENTITY_ROTATION(uParam0->f_1, uParam0->f_2.f_3, 2, true);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ex_prop_ex_toolchest_01"));
		}
	}
	else if (__LIB_7__::func_935(Local_346.f_15) && PLAYER::PLAYER_ID() == Local_346.f_15)
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("ShopUI_Title_Exec_VechUpgrade", false);
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPShopSale", false);
		if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("ShopUI_Title_Exec_VechUpgrade") && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPShopSale"))
		{
			*uParam0 = 1;
		}
	}
}

void func_6091(int iParam0, var uParam1)//Position - 0x202027
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1100.1531f, -3101.792f, -39.99993f };
			uParam1->f_3 = { 1101.0359f, -3101.806f, -37.74993f };
			break;
		case 1:
			*uParam1 = { 1049.8516f, -3094.4429f, -39.999935f };
			uParam1->f_3 = { 1050.7015f, -3094.4841f, -37.74993f };
			break;
		case 2:
			*uParam1 = { 997.0019f, -3099.545f, -39.999886f };
			uParam1->f_3 = { 997.0008f, -3098.654f, -37.749886f };
			break;
	}
}

void func_6092(int iParam0, var uParam1)//Position - 0x2020C9
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1100.563f, -3102.106f, -39.995f };
			uParam1->f_3 = { 0f, 0f, -180f };
			break;
		case 1:
			*uParam1 = { 1050.3f, -3094.2f, -40.01f };
			uParam1->f_3 = { 0f, 0f, 0f };
			break;
		case 2:
			*uParam1 = { 996.6f, -3099.15f, -40f };
			uParam1->f_3 = { 0f, 0f, 90.36f };
			break;
	}
}

void func_6093()//Position - 0x20214F
{
	int iVar0;
	int iVar1;
	iVar1 = __LIB_19__::func_947(Local_346.f_15, Local_346.f_2);
	if (Local_346.f_14)
	{
		func_6120(iVar1);
		Local_346.f_14 = 0;
	}
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (Local_346.f_15 != PLAYER::PLAYER_ID())
		{
			func_6120(iVar1);
		}
		func_6112();
		func_6111();
	}
	if (iVar1 > Local_346.f_6)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT() && Local_346.f_15 == PLAYER::PLAYER_ID())
		{
			if (!__LIB_19__::func_953(__LIB_19__::func_954(__LIB_19__::func_955(Local_346.f_10, (iVar1 - 1), -1, -1))))
			{
				func_6105(iVar1);
			}
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT() && Local_346.f_15 != PLAYER::PLAYER_ID())
		{
			Local_346.f_14 = 1;
			func_6104(Local_346.f_15, Local_346.f_2);
		}
		else
		{
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				iVar0 = Local_346.f_6;
				while (iVar0 <= (iVar1 - 1))
				{
					if (iVar0 < Local_346.f_9)
					{
						if (Local_138.f_1[iVar0] == 0)
						{
							Local_138.f_1[iVar0] = __LIB_19__::func_954(__LIB_19__::func_955(Local_346.f_10, iVar0, -1, -1));
						}
					}
					iVar0++;
				}
			}
			iVar0 = Local_346.f_6;
			while (iVar0 <= (iVar1 - 1))
			{
				if (iVar0 < Local_346.f_9)
				{
					if (!func_6103(iVar0))
					{
						if (!func_6102(iVar0))
						{
							func_6097(iVar0);
						}
					}
				}
				iVar0++;
			}
		}
		Local_346.f_6 = iVar1;
	}
	else if (iVar1 < Local_346.f_6)
	{
		iVar0 = iVar1;
		while (iVar0 <= (Local_346.f_6 - 1))
		{
			if (Local_346.f_586[iVar0])
			{
				Local_346.f_586[iVar0] = 0;
			}
			iVar0++;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			if (Local_346.f_15 == PLAYER::PLAYER_ID())
			{
				func_6105(iVar1);
			}
			else
			{
				Local_346.f_14 = 1;
				func_6104(Local_346.f_15, Local_346.f_2);
			}
		}
		Local_346.f_8 = Local_346.f_6;
		Local_346.f_6 = iVar1;
	}
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		if (iVar0 < Local_346.f_9)
		{
			if (Local_138.f_1[iVar0] != 0 || Local_138.f_1[iVar0] != __LIB_19__::func_954(Global_1945972[iVar0]))
			{
				if (!func_6103(iVar0))
				{
					if (!func_6102(iVar0))
					{
						if (STREAMING::IS_MODEL_VALID(Local_138.f_1[iVar0]))
						{
							func_6097(iVar0);
						}
					}
				}
				if (!func_6102(iVar0))
				{
					if (!Local_346.f_586[iVar0])
					{
						func_6094(iVar0, 1);
					}
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_346.f_8 - 1))
	{
		if (iVar0 < Local_346.f_9)
		{
			if (Local_138.f_1[iVar0] != 0)
			{
				if (iVar0 > (iVar1 - 1) || Local_138.f_1[iVar0] != __LIB_19__::func_954(Global_1945972[iVar0]))
				{
					func_6094(iVar0, 0);
				}
			}
			else if (Local_346.f_8 > iVar1)
			{
				Local_346.f_8 = (Local_346.f_8 - 1);
			}
		}
		iVar0++;
	}
	iVar0 = iVar1;
	while (iVar0 <= iVar1 + 2)
	{
		if (iVar0 < Local_346.f_9)
		{
			if (Local_138.f_1[iVar0] != 0)
			{
				if (!func_6103(iVar0))
				{
					if (!func_6102(iVar0))
					{
						if (STREAMING::IS_MODEL_VALID(Local_138.f_1[iVar0]))
						{
							func_6097(iVar0);
						}
					}
				}
				if (!func_6102(iVar0))
				{
					if (!Local_346.f_586[iVar0])
					{
						func_6094(iVar0, 1);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_6094(int iParam0, bool bParam1)//Position - 0x20249D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (!Local_346.f_474[iParam0])
	{
		Local_346.f_698[iParam0] = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 500);
		Local_346.f_474[iParam0] = 1;
	}
	if (NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Local_346.f_698[iParam0]))
	{
		iVar0 = func_6096(iParam0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar1 = MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_346.f_698[iParam0]));
			iVar2 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) / 500f) * 255f));
			if (bParam1)
			{
				iVar2 = (255 - SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) / 500f) * 255f)));
			}
			ENTITY::SET_ENTITY_ALPHA(iVar0, iVar2, false);
		}
	}
	else
	{
		iVar3 = func_6096(iParam0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar3))
		{
			if (bParam1)
			{
				ENTITY::SET_ENTITY_ALPHA(iVar3, 255, false);
				if (STREAMING::IS_MODEL_VALID(__LIB_19__::func_954(__LIB_19__::func_955(Local_346.f_10, iParam0, -1, -1))))
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_19__::func_954(__LIB_19__::func_955(Local_346.f_10, iParam0, -1, -1)));
				}
				Local_346.f_586[iParam0] = 1;
			}
			else
			{
				ENTITY::SET_ENTITY_ALPHA(iVar3, 0, false);
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar3))
				{
					func_6095(iParam0);
				}
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					Local_138.f_1[iParam0] = 0;
				}
			}
		}
		Local_346.f_474[iParam0] = 0;
	}
}

void func_6095(int iParam0)//Position - 0x2025E2
{
	int iVar0;
	iVar0 = func_6096(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		OBJECT::DELETE_OBJECT(&iVar0);
		Local_346.f_810[iParam0] = 0;
	}
}

var func_6096(int iParam0)//Position - 0x202617
{
	return Local_346.f_810[iParam0];
}

void func_6097(int iParam0)//Position - 0x202629
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	int iVar4;
	Var0 = { func_6101(__LIB_5__::func_388(Local_346.f_2)) };
	Var1 = { func_6100(Local_346.f_2, __LIB_5__::func_388(Local_346.f_2), iParam0) };
	Var2 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0, 0f, Var1) };
	Var3 = { func_6099(Local_346.f_2, __LIB_5__::func_388(Local_346.f_2), iParam0) };
	if (Local_138.f_1[iParam0] != 0 && STREAMING::IS_MODEL_VALID(Local_138.f_1[iParam0]))
	{
		STREAMING::REQUEST_MODEL(Local_138.f_1[iParam0]);
		if (STREAMING::HAS_MODEL_LOADED(Local_138.f_1[iParam0]))
		{
			iVar4 = OBJECT::CREATE_OBJECT(Local_138.f_1[iParam0], Var2, false, false, false);
			ENTITY::SET_ENTITY_ROTATION(iVar4, Var3, 2, true);
			ENTITY::FREEZE_ENTITY_POSITION(iVar4, true);
			Local_346.f_810[iParam0] = iVar4;
			Global_1945972[iParam0] = __LIB_19__::func_957(Local_138.f_1[iParam0]);
		}
	}
}

Vector3 func_6099(int iParam0, int iParam1, int iParam2)//Position - 0x202938
{
	struct<3> Var0;
	Var0 = { 0f, 0f, 0f };
	if (__LIB_3__::func_36(iParam0))
	{
		switch (iParam1)
		{
			case 0:
				if (iParam2 >= 12)
				{
					Var0 = { 0f, 0f, 180f };
				}
				break;
			case 1:
				if ((((((iParam2 == 14 || iParam2 == 16) || iParam2 == 17) || iParam2 == 22) || iParam2 == 23) || iParam2 == 25) || iParam2 == 27)
				{
					Var0 = { 0f, 0f, 180f };
				}
				if (iParam2 > 27)
				{
					Var0 = { 0f, 0f, 180f };
				}
				break;
			case 2:
				if (((((((((((iParam2 == 21 || iParam2 == 22) || iParam2 == 24) || iParam2 == 27) || iParam2 == 28) || iParam2 == 30) || iParam2 == 31) || iParam2 == 32) || iParam2 == 36) || iParam2 == 37) || iParam2 == 40) || iParam2 == 41)
				{
					Var0 = { 0f, 0f, 180f };
				}
				if ((((((((((iParam2 == 21 || iParam2 == 42) || iParam2 == 45) || iParam2 == 46) || iParam2 == 49) || iParam2 == 53) || iParam2 == 54) || iParam2 == 56) || iParam2 == 59) || iParam2 == 60) || iParam2 == 62)
				{
					Var0 = { 0f, 0f, 180f };
				}
				if ((((((((((iParam2 == 63 || iParam2 == 64) || iParam2 == 66) || iParam2 == 69) || iParam2 == 70) || iParam2 == 74) || iParam2 == 76) || iParam2 == 77) || iParam2 == 80) || iParam2 == 81) || iParam2 == 83)
				{
					Var0 = { 0f, 0f, 180f };
				}
				if (iParam2 > 83 && iParam2 < 102)
				{
					Var0 = { 0f, 0f, 270f };
				}
				if (iParam2 >= 102 && iParam2 < 111)
				{
					Var0 = { 0f, 0f, 90f };
				}
				break;
			}
	}
	return Var0;
}

Vector3 func_6100(int iParam0, int iParam1, int iParam2)//Position - 0x202BB7
{
	struct<3> Var0;
	Var0 = { 0f, 0f, 0f };
	if (__LIB_3__::func_36(iParam0))
	{
		switch (iParam1)
		{
			case 0:
				switch (iParam2)
				{
					case 0:
						Var0 = { -7.575f, -0.15f, -1.56f };
						break;
					case 1:
						Var0 = { -5.05f, -0.15f, -1.56f };
						break;
					case 2:
						Var0 = { -7.575f, -0.15f, 0.647f };
						break;
					case 3:
						Var0 = { -5.05f, -0.15f, 0.647f };
						break;
					case 4:
						Var0 = { -1.275f, -0.15f, -1.56f };
						break;
					case 5:
						Var0 = { 1.25f, -0.15f, -1.56f };
						break;
					case 6:
						Var0 = { -1.275f, -0.15f, 0.647f };
						break;
					case 7:
						Var0 = { 1.25f, -0.15f, 0.647f };
						break;
					case 8:
						Var0 = { 4.925f, -0.15f, -1.56f };
						break;
					case 9:
						Var0 = { 7.45f, -0.15f, -1.56f };
						break;
					case 10:
						Var0 = { 4.925f, -0.15f, 0.647f };
						break;
					case 11:
						Var0 = { 7.45f, -0.15f, 0.647f };
						break;
					case 12:
						Var0 = { -6.25f, -5.875f, -1.56f };
						break;
					case 13:
						Var0 = { -4.2f, -5.875f, -1.56f };
						break;
					case 14:
						Var0 = { -1.92f, -5.875f, -1.56f };
						break;
					case 15:
						Var0 = { 0.1f, -5.875f, -1.56f };
						break;
				}
				break;
			case 1:
				switch (iParam2)
				{
					case 0:
						Var0 = { -5.375f, 13.25f, -3.185f };
						break;
					case 1:
						Var0 = { -2.95f, 13.25f, -3.185f };
						break;
					case 2:
						Var0 = { -0.525f, 13.25f, -3.185f };
						break;
					case 3:
						Var0 = { 1.9f, 13.25f, -3.185f };
						break;
					case 4:
						Var0 = { 4.325f, 13.25f, -3.185f };
						break;
					case 5:
						Var0 = { 6.75f, 13.25f, -3.185f };
						break;
					case 6:
						Var0 = { 9.175f, 13.25f, -3.185f };
						break;
					case 7:
						Var0 = { -5.375f, 13.25f, -0.974f };
						break;
					case 8:
						Var0 = { -2.95f, 13.25f, -0.974f };
						break;
					case 9:
						Var0 = { -0.525f, 13.25f, -0.974f };
						break;
					case 10:
						Var0 = { 1.9f, 13.25f, -0.974f };
						break;
					case 11:
						Var0 = { 4.325f, 13.25f, -0.974f };
						break;
					case 12:
						Var0 = { 6.75f, 13.25f, -0.974f };
						break;
					case 13:
						Var0 = { 9.175f, 13.25f, -0.974f };
						break;
					case 14:
						Var0 = { -5.375f, 6.05f, -3.185f };
						break;
					case 15:
						Var0 = { -2.95f, 6.05f, -3.185f };
						break;
					case 16:
						Var0 = { -0.525f, 6.05f, -3.185f };
						break;
					case 17:
						Var0 = { 1.9f, 6.05f, -3.185f };
						break;
					case 18:
						Var0 = { 4.325f, 6.05f, -3.185f };
						break;
					case 19:
						Var0 = { 6.75f, 6.05f, -3.185f };
						break;
					case 20:
						Var0 = { 9.175f, 6.05f, -3.185f };
						break;
					case 21:
						Var0 = { -5.375f, 6.05f, -0.974f };
						break;
					case 22:
						Var0 = { -2.95f, 6.05f, -0.974f };
						break;
					case 23:
						Var0 = { -0.525f, 6.05f, -0.974f };
						break;
					case 24:
						Var0 = { 1.9f, 6.05f, -0.974f };
						break;
					case 25:
						Var0 = { 4.325f, 6.05f, -0.974f };
						break;
					case 26:
						Var0 = { 6.75f, 6.05f, -0.974f };
						break;
					case 27:
						Var0 = { 9.175f, 6.05f, -0.974f };
						break;
					case 28:
						Var0 = { -5.375f, -1.15f, -3.185f };
						break;
					case 29:
						Var0 = { -2.95f, -1.15f, -3.185f };
						break;
					case 30:
						Var0 = { -0.525f, -1.15f, -3.185f };
						break;
					case 31:
						Var0 = { 1.9f, -1.15f, -3.185f };
						break;
					case 32:
						Var0 = { 4.325f, -1.15f, -3.185f };
						break;
					case 33:
						Var0 = { 6.75f, -1.15f, -3.185f };
						break;
					case 34:
						Var0 = { 9.175f, -1.15f, -3.185f };
						break;
					case 35:
						Var0 = { -5.375f, -1.15f, -0.974f };
						break;
					case 36:
						Var0 = { -2.95f, -1.15f, -0.974f };
						break;
					case 37:
						Var0 = { -0.525f, -1.15f, -0.974f };
						break;
					case 38:
						Var0 = { 1.9f, -1.15f, -0.974f };
						break;
					case 39:
						Var0 = { 4.325f, -1.15f, -0.974f };
						break;
					case 40:
						Var0 = { 6.75f, -1.15f, -0.974f };
						break;
					case 41:
						Var0 = { 9.175f, -1.15f, -0.974f };
						break;
				}
				break;
			case 2:
				switch (iParam2)
				{
					case 0:
						Var0 = { -7.25f, 16.85f, -3.18f };
						break;
					case 1:
						Var0 = { -4.825f, 16.85f, -3.18f };
						break;
					case 2:
						Var0 = { -2.4f, 16.85f, -3.18f };
						break;
					case 3:
						Var0 = { 0.025f, 16.85f, -3.18f };
						break;
					case 4:
						Var0 = { 2.45f, 16.85f, -3.18f };
						break;
					case 5:
						Var0 = { 4.875f, 16.85f, -3.18f };
						break;
					case 6:
						Var0 = { 7.3f, 16.85f, -3.18f };
						break;
					case 7:
						Var0 = { -7.25f, 16.85f, -0.971f };
						break;
					case 8:
						Var0 = { -4.825f, 16.85f, -0.971f };
						break;
					case 9:
						Var0 = { -2.4f, 16.85f, -0.971f };
						break;
					case 10:
						Var0 = { 0.025f, 16.85f, -0.971f };
						break;
					case 11:
						Var0 = { 2.45f, 16.85f, -0.971f };
						break;
					case 12:
						Var0 = { 4.875f, 16.85f, -0.971f };
						break;
					case 13:
						Var0 = { 7.3f, 16.85f, -0.971f };
						break;
					case 14:
						Var0 = { -7.25f, 16.85f, 1.059f };
						break;
					case 15:
						Var0 = { -4.825f, 16.85f, 1.059f };
						break;
					case 16:
						Var0 = { -2.4f, 16.85f, 1.059f };
						break;
					case 17:
						Var0 = { 0.025f, 16.85f, 1.059f };
						break;
					case 18:
						Var0 = { 2.45f, 16.85f, 1.059f };
						break;
					case 19:
						Var0 = { 4.875f, 16.85f, 1.059f };
						break;
					case 20:
						Var0 = { 7.3f, 16.85f, 1.059f };
						break;
					case 21:
						Var0 = { -7.25f, 11.5f, -3.18f };
						break;
					case 22:
						Var0 = { -4.825f, 11.5f, -3.18f };
						break;
					case 23:
						Var0 = { -2.4f, 11.5f, -3.18f };
						break;
					case 24:
						Var0 = { 0.025f, 11.5f, -3.18f };
						break;
					case 25:
						Var0 = { 2.45f, 11.5f, -3.18f };
						break;
					case 26:
						Var0 = { 4.875f, 11.5f, -3.18f };
						break;
					case 27:
						Var0 = { 7.3f, 11.5f, -3.18f };
						break;
					case 28:
						Var0 = { -7.25f, 11.5f, -0.971f };
						break;
					case 29:
						Var0 = { -4.825f, 11.5f, -0.971f };
						break;
					case 30:
						Var0 = { -2.4f, 11.5f, -0.971f };
						break;
					case 31:
						Var0 = { 0.025f, 11.5f, -0.971f };
						break;
					case 32:
						Var0 = { 2.45f, 11.5f, -0.971f };
						break;
					case 33:
						Var0 = { 4.875f, 11.5f, -0.971f };
						break;
					case 34:
						Var0 = { 7.3f, 11.5f, -0.971f };
						break;
					case 35:
						Var0 = { -7.25f, 11.5f, 1.059f };
						break;
					case 36:
						Var0 = { -4.825f, 11.5f, 1.059f };
						break;
					case 37:
						Var0 = { -2.4f, 11.5f, 1.059f };
						break;
					case 38:
						Var0 = { 0.025f, 11.5f, 1.059f };
						break;
					case 39:
						Var0 = { 2.45f, 11.5f, 1.059f };
						break;
					case 40:
						Var0 = { 4.875f, 11.5f, 1.059f };
						break;
					case 41:
						Var0 = { 7.3f, 11.5f, 1.059f };
						break;
					case 42:
						Var0 = { -7.25f, 5.65f, -3.18f };
						break;
					case 43:
						Var0 = { -4.825f, 5.65f, -3.18f };
						break;
					case 44:
						Var0 = { -2.4f, 5.65f, -3.18f };
						break;
					case 45:
						Var0 = { 0.025f, 5.65f, -3.18f };
						break;
					case 46:
						Var0 = { 2.45f, 5.65f, -3.18f };
						break;
					case 47:
						Var0 = { 4.875f, 5.65f, -3.18f };
						break;
					case 48:
						Var0 = { 7.3f, 5.65f, -3.18f };
						break;
					case 49:
						Var0 = { -7.25f, 5.65f, -0.971f };
						break;
					case 50:
						Var0 = { -4.825f, 5.65f, -0.971f };
						break;
					case 51:
						Var0 = { -2.4f, 5.65f, -0.971f };
						break;
					case 52:
						Var0 = { 0.025f, 5.65f, -0.971f };
						break;
					case 53:
						Var0 = { 2.45f, 5.65f, -0.971f };
						break;
					case 54:
						Var0 = { 4.875f, 5.65f, -0.971f };
						break;
					case 55:
						Var0 = { 7.3f, 5.65f, -0.971f };
						break;
					case 56:
						Var0 = { -7.25f, 5.65f, 1.059f };
						break;
					case 57:
						Var0 = { -4.825f, 5.65f, 1.059f };
						break;
					case 58:
						Var0 = { -2.4f, 5.65f, 1.059f };
						break;
					case 59:
						Var0 = { 0.025f, 5.65f, 1.059f };
						break;
					case 60:
						Var0 = { 2.45f, 5.65f, 1.059f };
						break;
					case 61:
						Var0 = { 4.875f, 5.65f, 1.059f };
						break;
					case 62:
						Var0 = { 7.3f, 5.65f, 1.059f };
						break;
					case 63:
						Var0 = { -7.25f, -0.05f, -3.18f };
						break;
					case 64:
						Var0 = { -4.825f, -0.05f, -3.18f };
						break;
					case 65:
						Var0 = { -2.4f, -0.05f, -3.18f };
						break;
					case 66:
						Var0 = { 0.025f, -0.05f, -3.18f };
						break;
					case 67:
						Var0 = { 2.45f, -0.05f, -3.18f };
						break;
					case 68:
						Var0 = { 4.875f, -0.05f, -3.18f };
						break;
					case 69:
						Var0 = { 7.3f, -0.05f, -3.18f };
						break;
					case 70:
						Var0 = { -7.25f, -0.05f, -0.971f };
						break;
					case 71:
						Var0 = { -4.825f, -0.05f, -0.971f };
						break;
					case 72:
						Var0 = { -2.4f, -0.05f, -0.971f };
						break;
					case 73:
						Var0 = { 0.025f, -0.05f, -0.971f };
						break;
					case 74:
						Var0 = { 2.45f, -0.05f, -0.971f };
						break;
					case 75:
						Var0 = { 4.875f, -0.05f, -0.971f };
						break;
					case 76:
						Var0 = { 7.3f, -0.05f, -0.971f };
						break;
					case 77:
						Var0 = { -7.25f, -0.05f, 1.059f };
						break;
					case 78:
						Var0 = { -4.825f, -0.05f, 1.059f };
						break;
					case 79:
						Var0 = { -2.4f, -0.05f, 1.059f };
						break;
					case 80:
						Var0 = { 0.025f, -0.05f, 1.059f };
						break;
					case 81:
						Var0 = { 2.45f, -0.05f, 1.059f };
						break;
					case 82:
						Var0 = { 4.875f, -0.05f, 1.059f };
						break;
					case 83:
						Var0 = { 7.3f, -0.05f, 1.059f };
						break;
					case 84:
						Var0 = { 15.875f, 16.86f, -3.18f };
						break;
					case 85:
						Var0 = { 15.875f, 14.44f, -3.18f };
						break;
					case 86:
						Var0 = { 15.875f, 12.02f, -3.18f };
						break;
					case 87:
						Var0 = { 15.875f, 16.86f, -0.971f };
						break;
					case 88:
						Var0 = { 15.875f, 14.44f, -0.971f };
						break;
					case 89:
						Var0 = { 15.875f, 12.02f, -0.971f };
						break;
					case 90:
						Var0 = { 15.875f, 16.86f, 1.059f };
						break;
					case 91:
						Var0 = { 15.875f, 14.44f, 1.059f };
						break;
					case 92:
						Var0 = { 15.875f, 12.02f, 1.059f };
						break;
					case 93:
						Var0 = { 15.875f, 1.925f, -3.18f };
						break;
					case 94:
						Var0 = { 15.875f, -0.435f, -3.18f };
						break;
					case 95:
						Var0 = { 15.875f, -2.93f, -3.18f };
						break;
					case 96:
						Var0 = { 15.875f, 1.925f, -0.971f };
						break;
					case 97:
						Var0 = { 15.875f, -0.435f, -0.971f };
						break;
					case 98:
						Var0 = { 15.875f, -2.93f, -0.971f };
						break;
					case 99:
						Var0 = { 15.875f, 1.925f, 1.059f };
						break;
					case 100:
						Var0 = { 15.875f, -0.435f, 1.059f };
						break;
					case 101:
						Var0 = { 15.875f, -2.93f, 1.059f };
						break;
					case 102:
						Var0 = { -17.525f, -2.85f, -3.18f };
						break;
					case 103:
						Var0 = { -17.525f, -0.5f, -3.18f };
						break;
					case 104:
						Var0 = { -17.525f, 1.85f, -3.18f };
						break;
					case 105:
						Var0 = { -17.525f, -2.85f, -0.971f };
						break;
					case 106:
						Var0 = { -17.525f, -0.5f, -0.971f };
						break;
					case 107:
						Var0 = { -17.525f, 1.85f, -0.971f };
						break;
					case 108:
						Var0 = { -17.525f, -2.85f, 1.059f };
						break;
					case 109:
						Var0 = { -17.525f, -0.5f, 1.059f };
						break;
					case 110:
						Var0 = { -17.525f, 1.85f, 1.059f };
						break;
				}
				break;
			}
	}
	return Var0;
}

Vector3 func_6101(int iParam0)//Position - 0x203E86
{
	switch (iParam0)
	{
		case 0:
			return 1096.3359f, -3096.5315f, -38.4359f;
		case 1:
			return 1058.4756f, -3108.6985f, -36.8147f;
		case 2:
			return 1010.8801f, -3108.454f, -36.8147f;
		default:
	}
	return 0f, 0f, 0f;
}

int func_6102(int iParam0)//Position - 0x203EE0
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	int iVar3;
	int iVar4;
	Var0 = { func_6101(__LIB_5__::func_388(Local_346.f_2)) };
	Var1 = { func_6100(Local_346.f_2, __LIB_5__::func_388(Local_346.f_2), iParam0) };
	Var2 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0, 0f, Var1) };
	iVar3 = 0;
	while (iVar3 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar3)))
		{
			iVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar3));
			if (__LIB_1__::func_693(iVar4, 1, 1))
			{
				if (__LIB_0__::func_490(__LIB_1__::func_694(iVar4), Var2, 1.5f, 0))
				{
					return 1;
				}
			}
		}
		iVar3++;
	}
	return 0;
}

bool func_6103(int iParam0)//Position - 0x203F77
{
	return ENTITY::DOES_ENTITY_EXIST(Local_346.f_810[iParam0]);
}

void func_6104(int iParam0, var uParam1)//Position - 0x203F8D
{
	struct<3> Var0;
	Var0.f_0 = 563501261;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = uParam1;
	SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 3, __LIB_1__::func_705(iParam0));
}

void func_6105(int iParam0)//Position - 0x203FB8
{
	int iVar0;
	int iVar1;
	if (__LIB_3__::func_36(Local_346.f_2))
	{
		if (__LIB_15__::func_445(Local_346.f_2) > 0)
		{
			iVar0 = 0;
			while (iVar0 <= (iParam0 - 1))
			{
				if (iVar0 < Local_346.f_9)
				{
					if (Local_138.f_1[iVar0] != __LIB_19__::func_954(__LIB_19__::func_955(Local_346.f_10, iVar0, -1, -1)))
					{
						if (__LIB_19__::func_953(__LIB_19__::func_954(__LIB_19__::func_955(Local_346.f_10, iVar0, -1, -1))))
						{
							iVar1 = func_6096(iVar0);
							if (ENTITY::DOES_ENTITY_EXIST(iVar1))
							{
								func_6095(iVar0);
							}
							Local_138.f_1[iVar0] = __LIB_19__::func_954(__LIB_19__::func_955(Local_346.f_10, iVar0, -1, -1));
							Local_138.f_1[(iParam0 - 1)] = __LIB_19__::func_954(__LIB_19__::func_955(Local_346.f_10, (iParam0 - 1), -1, -1));
							if (!func_6103(iVar0))
							{
								if (!func_6102(iVar0))
								{
									func_6097(iVar0);
								}
							}
						}
					}
				}
				iVar0++;
			}
		}
	}
}

void func_6111()//Position - 0x2044CA
{
	if ((!Global_1946084[0] && !Global_1946084[1]) && !Global_1946084[2])
	{
		if (Local_346.f_7 != Local_346.f_6)
		{
			Local_346.f_7 = Local_346.f_6;
		}
	}
}

void func_6112()//Position - 0x20450E
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<4> Var5;
	int iVar6;
	int iVar7;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_1946084[iVar0])
		{
			iVar3 = Local_346.f_7;
			iVar4 = (iVar1 + iVar3);
			if (Local_346.f_15 == PLAYER::PLAYER_ID())
			{
				if (__LIB_19__::func_955(Local_346.f_10, iVar4, -1, -1) == 0)
				{
					iVar2 = 1;
				}
			}
			else if (Global_1945972[iVar4] == 0)
			{
				iVar2 = 1;
			}
			if (Local_138.f_1[iVar4] == 0 && iVar2)
			{
				Var5 = { func_6119(Local_346.f_15) };
				iVar6 = __LIB_32__::func_267(Local_346.f_2, iVar4, Var5.f_2);
				iVar7 = 0;
				if (iVar4 > 0 && !__LIB_19__::func_950(__LIB_5__::func_388(Local_346.f_2), iVar4))
				{
					while (iVar6 == Local_138.f_1[(iVar4 - 1)] && iVar7 < 10)
					{
						iVar6 = __LIB_32__::func_267(Local_346.f_2, iVar4, Var5.f_2);
						iVar7++;
					}
				}
				if (iVar6 != 0)
				{
					if (Local_346.f_15 == PLAYER::PLAYER_ID())
					{
						__LIB_19__::func_956(Local_346.f_10, iVar4, __LIB_19__::func_957(iVar6), 1, -1);
					}
					else
					{
						func_6113(Local_346.f_15, Local_346.f_10, iVar4, __LIB_19__::func_957(iVar6));
					}
				}
				if (Local_138.f_1[iVar4] == 0)
				{
					Local_138.f_1[iVar4] = iVar6;
				}
				if (!func_6103(iVar4))
				{
					if (!func_6102(iVar4))
					{
						func_6097(iVar4);
					}
				}
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_6113(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x204671
{
	struct<5> Var0;
	Var0.f_0 = 564609617;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam2;
	Var0.f_4 = uParam1;
	SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 5, __LIB_1__::func_705(iParam0));
}

struct<4> func_6119(int iParam0)//Position - 0x204E01
{
	return Global_1892703[iParam0 /*599*/].f_10.f_183;
}

int func_6120(int iParam0)//Position - 0x204E18
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar1 = 0;
	while (iVar1 <= iParam0 + 2)
	{
		if (iVar1 < Local_346.f_9)
		{
			if (Local_138.f_1[iVar1] != __LIB_19__::func_954(Global_1945972[iVar1]))
			{
				iVar2 = func_6096(iVar1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar2))
				{
					func_6095(iVar1);
				}
				Local_138.f_1[iVar1] = __LIB_19__::func_954(Global_1945972[iVar1]);
				if (!func_6102(iVar1))
				{
					func_6097(iVar1);
				}
				iVar0 = 1;
			}
		}
		iVar1++;
	}
	return iVar0;
}

bool func_6122(int iParam0, int iParam1)//Position - 0x204EEA
{
	bool bVar0;
	bVar0 = !NETWORK::NETWORK_IS_SCRIPT_ACTIVE("AM_MP_SMPL_INTERIOR_INT", iParam0, true, 0);
	if (!bVar0 && func_6123(iParam1))
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

int func_6123(int iParam0)//Position - 0x204F9A
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_6124(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_6124(int iParam0)//Position - 0x204FBA
{
	var uVar0;
	if (!Global_1946250.f_3634)
	{
		return 0;
	}
	uVar0 = { func_6035(iParam0) };
	return BitTest(uVar0[1], 22);
}

void func_6134()//Position - 0x205129
{
	func_6141();
	func_6140();
	__LIB_10__::func_881(&(Local_346.f_928));
	__LIB_0__::func_714(&(Local_346.f_16));
	__LIB_0__::func_714(&(Local_346.f_17));
	__LIB_0__::func_714(&(Local_346.f_1208));
	func_6040(&(Local_346.f_433), 1);
	__LIB_9__::func_812(&(Local_345[PLAYER::PLAYER_ID() /*5*/].f_1), &Local_130);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				__LIB_11__::func_53(&(Local_138.f_113), &Global_4194304);
			}
		}
	}
	__LIB_0__::func_202();
}

void func_6140()//Position - 0x205757
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 110)
	{
		Global_1945972[iVar0] = -1;
		iVar0++;
	}
}

void func_6141()//Position - 0x20577B
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 <= (Local_346.f_9 - 1))
	{
		iVar1 = func_6096(iVar0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
		{
			OBJECT::DELETE_OBJECT(&iVar1);
			Local_346.f_810[iVar0] = 0;
		}
		iVar0++;
	}
}

void func_6142(var uParam0)//Position - 0x2057C8
{
	Local_346.f_3 = *uParam0;
	Local_346.f_4 = uParam0->f_2;
	Local_346.f_5 = uParam0->f_1;
	Local_346.f_2 = __LIB_3__::func_481(*uParam0);
	Local_346.f_15 = __LIB_11__::func_802(Local_346.f_2);
	Local_346.f_10 = __LIB_8__::func_414(Local_346.f_2, Local_346.f_15);
	func_180(0);
	Global_4194304.f_31 = -1;
	Local_130.f_712 = func_6154(Local_346.f_2);
	Local_130.f_711 = Local_346.f_15;
	Local_130.f_712 = func_6154(Local_346.f_2);
	if (Local_346.f_15 == __LIB_0__::func_162())
	{
		__LIB_6__::func_51(1);
		__LIB_6__::func_263(1);
		func_6134();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, false, Local_346.f_4);
	__LIB_0__::func_895(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_138, 375, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_345, 161, 0);
	if (!__LIB_0__::func_934())
	{
		func_6134();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
	}
	else
	{
		func_6134();
	}
	func_6143();
}

void func_6143()//Position - 0x2058AA
{
	func_6150(Local_346.f_3, &(Local_346.f_18), 0, 0);
	func_6145();
	func_6144();
	__LIB_6__::func_263(1);
	if (func_315())
	{
		__LIB_6__::func_50(1, 1);
	}
	func_215(1);
}

void func_6144()//Position - 0x2058E1
{
	Local_346.f_928.f_3 = "anim@apt_trans@garage";
	Local_346.f_928.f_5 = "gar_open_1_left";
	Local_346.f_928.f_34 = 0f;
	Local_346.f_928.f_35 = 0.45f;
	Local_346.f_928.f_80 = "GTAO_EXEC_WH_GARAGE_DOOR_SOUNDS";
	Local_346.f_928.f_79 = "Door_Open";
	switch (__LIB_5__::func_388(Local_346.f_2))
	{
		case 0:
			Local_346.f_922 = { 1104.275f, -3101.6143f, -40f };
			Local_346.f_925 = { 1105.4827f, -3097.0706f, -36.9999f };
			Local_346.f_928.f_28 = { 1105.095f, -3099.446f, -40f };
			Local_346.f_928.f_31 = { 0f, 0f, 26.64f };
			break;
		case 1:
			Local_346.f_922 = { 1071.821f, -3105.487f, -40f };
			Local_346.f_925 = { 1073.979f, -3099.819f, -36.9999f };
			Local_346.f_928.f_28 = { 1073.092f, -3102.483f, -40f };
			Local_346.f_928.f_31 = { 0f, 0f, 26.64f };
			break;
		case 2:
			Local_346.f_922 = { 1026.509f, -3104.374f, -40f };
			Local_346.f_925 = { 1028.926f, -3098.688f, -36.9999f };
			Local_346.f_928.f_28 = { 1027.822f, -3101.432f, -40f };
			Local_346.f_928.f_31 = { 0f, 0f, 26.64f };
			break;
	}
	__LIB_4__::func_831(&(Local_346.f_928));
}

void func_6145()//Position - 0x205A6C
{
	int iVar0;
	Local_346.f_9 = __LIB_29__::func_677(__LIB_5__::func_388(Local_346.f_2));
	if (__LIB_7__::func_935(Local_346.f_15))
	{
		Local_346.f_6 = __LIB_19__::func_947(Local_346.f_15, Local_346.f_2);
		Local_346.f_8 = Local_346.f_6;
		Local_346.f_7 = Local_346.f_6;
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			if (Local_346.f_15 != PLAYER::PLAYER_ID())
			{
				Local_346.f_14 = 1;
				func_6140();
				func_6104(Local_346.f_15, Local_346.f_2);
				func_6148();
			}
			else
			{
				func_6146();
			}
			func_6112();
		}
		iVar0 = 0;
		while (iVar0 <= (Local_346.f_6 - 1))
		{
			if (iVar0 < Local_346.f_9)
			{
				if (!func_6103(iVar0))
				{
					if (!func_6102(iVar0))
					{
						if (STREAMING::IS_MODEL_VALID(Local_138.f_1[iVar0]))
						{
							func_6097(iVar0);
							Local_346.f_586[iVar0] = 1;
						}
					}
				}
			}
			iVar0++;
		}
	}
}

void func_6146()//Position - 0x205B4A
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_8__::func_414(Local_346.f_2, Local_346.f_15);
	iVar1 = 0;
	while (iVar1 <= __LIB_19__::func_947(Local_346.f_15, Local_346.f_2) + 2)
	{
		if (iVar1 < __LIB_19__::func_958(Local_346.f_2))
		{
			Local_138.f_1[iVar1] = __LIB_19__::func_954(__LIB_19__::func_955(iVar0, iVar1, -1, -1));
			if (iVar1 >= __LIB_19__::func_947(Local_346.f_15, Local_346.f_2))
			{
			}
		}
		iVar1++;
	}
}

void func_6148()//Position - 0x205BF9
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= __LIB_19__::func_947(Local_346.f_15, Local_346.f_2) + 2)
	{
		if (iVar0 < __LIB_19__::func_958(Local_346.f_2))
		{
			Local_138.f_1[iVar0] = __LIB_19__::func_954(Global_1945972[iVar0]);
			if (iVar0 >= __LIB_19__::func_947(Local_346.f_15, Local_346.f_2))
			{
			}
		}
		iVar0++;
	}
}

void func_6150(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x205C95
{
	var uVar0;
	func_6151(iParam0, uParam1, &uVar0, iParam2, iParam3);
}

void func_6151(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0x205CAB
{
	struct<33> Var0;
	func_364(iParam0, &Var0, 2);
	func_364(iParam0, &Var0, 6);
	func_364(iParam0, &Var0, 1);
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

int func_6154(int iParam0)//Position - 0x205E69
{
	if (__LIB_3__::func_36(iParam0))
	{
		switch (iParam0)
		{
			case 1:
			case 2:
			case 3:
			case 4:
			case 5:
			case 9:
				return 16;
			case 10:
			case 11:
			case 12:
			case 13:
			case 14:
			case 15:
			case 21:
			case 7:
				return 42;
			case 16:
			case 17:
			case 18:
			case 19:
			case 20:
			case 22:
			case 6:
			case 8:
				return 111;
			}
		default:
	}
	return 0;
}

