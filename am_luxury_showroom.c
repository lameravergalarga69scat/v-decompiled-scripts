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
	int iLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = -1;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	float fLocal_95 = 0f;
	float fLocal_96 = 0f;
	float fLocal_97 = 0f;
	float fLocal_98 = 0f;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	float fLocal_108 = 0f;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
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
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 32;
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
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	struct<1232> Local_164 = { 0, 0, 0, -1, -1, 0, 2, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 132, -1, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 } ;
	var uLocal_165 = 12;
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
	var uLocal_178 = 12;
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
	var uLocal_191 = 12;
	var uLocal_192 = 4;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 4;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 4;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 4;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 4;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 4;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 4;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 4;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 4;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 4;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 4;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 4;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 12;
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
	var uLocal_301 = 12;
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
	var uLocal_314 = 12;
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
	var uLocal_327 = -1;
	var uLocal_328 = 0;
	var uLocal_329 = 1;
	var uLocal_330 = 0;
	var uLocal_331 = 12;
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
	iLocal_84 = -1;
	fLocal_95 = 3f;
	fLocal_96 = 0f;
	fLocal_97 = 2f;
	fLocal_98 = 100f;
	fLocal_108 = 0.5f;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_816();
	}
	else
	{
		func_813();
	}
	while (true)
	{
		__LIB_0__::func_933();
		if (func_800())
		{
			func_813();
		}
		func_1();
	}
}

void func_1()//Position - 0xCA
{
	switch (Local_164.f_9)
	{
		case 0:
			func_792();
			break;
		case 1:
			func_777();
			break;
		case 2:
			func_758();
			break;
		case 3:
			func_737();
			break;
		case 4:
			func_56();
			break;
	}
	func_11(&(Local_164.f_1231), &(Local_164.f_1220), Local_164.f_9 > 1);
	func_2();
}

void func_2()//Position - 0x134
{
	if (Local_164.f_9 == 1 && !func_3(1))
	{
		Local_164.f_1 = (Local_164.f_1 + 1 % 3);
	}
}

int func_3(bool bParam0)//Position - 0x15C
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	int iVar3;
	struct<3> Var4;
	struct<3> Var5;
	float fVar6;
	float fVar7;
	func_9(func_10(), &Var0, &Var1, &fVar2);
	if (__LIB_0__::func_86(Var0) || __LIB_0__::func_86(Var1))
	{
		return 0;
	}
	if (!__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (bParam0)
	{
		iVar3 = func_6(func_10());
		if (iVar3 < 0 || iVar3 >= 2)
		{
			return 0;
		}
		if (!__LIB_0__::func_121(Local_164.f_6[iVar3]))
		{
			return 0;
		}
		Var4 = { ENTITY::GET_ENTITY_COORDS(Local_164.f_6[iVar3], true) };
		Var5 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		fVar6 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
		fVar7 = __LIB_0__::func_932(Var5, Var4);
		if (__LIB_3__::func_526(fVar7, fVar6, 50f) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var0, Var1, fVar2, false, true, 1))
		{
			return 1;
		}
	}
	else
	{
		return ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var0, Var1, fVar2, false, true, 1);
	}
	return 0;
}

int func_6(int iParam0)//Position - 0x306
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		case 1:
		case 2:
			return 1;
			break;
	}
	return 0;
}

void func_9(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x381
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -796.55725f, -234.64124f, 35.94032f };
			*uParam2 = { -792.6026f, -241.47414f, 39.506424f };
			*uParam3 = 3f;
			break;
		case 1:
			*uParam1 = { -792.1209f, -242.4434f, 35.93293f };
			*uParam2 = { -789.0962f, -247.52126f, 39.44004f };
			*uParam3 = 3f;
			break;
		case 2:
			*uParam1 = { -786.5422f, -248.43477f, 35.991272f };
			*uParam2 = { -780.42017f, -245.93564f, 39.44004f };
			*uParam3 = 3f;
			break;
	}
}

int func_10()//Position - 0x429
{
	return Local_164.f_1;
}

void func_11(var uParam0, var uParam1, bool bParam2)//Position - 0x435
{
	func_12(uParam0, &(uParam0->f_1), &(uParam0->f_14), &(uParam0->f_27), &(uParam0->f_100), &(uParam0->f_137), &(uParam0->f_167), uParam1, bParam2);
}

void func_12(var uParam0, var* uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8)//Position - 0x45F
{
	struct<3> Var0;
	int iVar1;
	struct<4> Var2;
	struct<3> Var3;
	char cVar4[24];
	int iVar5;
	int iVar6;
	struct<2> Var7;
	struct<2> Var8;
	int iVar9;
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		return;
	}
	if (__LIB_2__::func_6() != 0 || uParam8)
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPCarHUD", false);
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPCarHUD2", false);
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPCarHUD3", false);
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPCarHUD4", false);
		if ((((GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPCarHUD") && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPCarHUD2")) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPCarHUD3")) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPCarHUD4")) && uParam0->f_164 <= 0f)
		{
			uParam0->f_164 = (500f / 1000f);
			PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), uParam1);
			__LIB_8__::func_391(uParam2, uParam1);
			iVar1 = 0;
			while (iVar1 < 12)
			{
				if ((*uParam2)[iVar1] != (*uParam1)[iVar1])
				{
					uParam0->f_150[iVar1] = 1;
					(*uParam2)[iVar1] = (*uParam1)[iVar1];
				}
				if (__LIB_0__::func_121((*uParam1)[iVar1]))
				{
					if (__LIB_0__::func_872((*uParam1)[iVar1], 1))
					{
						iVar5 = __LIB_1__::func_537((*uParam1)[iVar1]);
						if (__LIB_0__::func_156(iVar5, 1, 0))
						{
							if (__LIB_1__::func_583(iVar5))
							{
							}
							else
							{
								iVar6 = ENTITY::GET_ENTITY_MODEL((*uParam1)[iVar1]);
								if (iVar6 == joaat("slamtruck") && !__LIB_0__::func_872((*uParam1)[iVar1], 1))
								{
								}
								else
								{
									Var0 = { ENTITY::GET_ENTITY_COORDS((*uParam1)[iVar1], true) };
									if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT((*uParam1)[iVar1], false) && SYSTEM::VDIST(__LIB_0__::func_85(PLAYER::PLAYER_ID()), Var0) <= 15f)
									{
										StringCopy(&Var7, "MP_CAR_STATS_", 16);
										if (iVar1 < 9)
										{
											StringConCat(&Var7, "0", 16);
										}
										StringIntConCat(&Var7, iVar1 + 1, 16);
										__LIB_12__::func_24(iVar6, &(Var0.f_2));
										if (__LIB_8__::func_390(uParam6[iVar1], &Var7) && uParam0->f_150[iVar1])
										{
											*(uParam4[iVar1 /*3*/]) = { Var0 };
											(*uParam5)[iVar1] = __LIB_2__::func_760(iVar6);
											StringCopy(&Var2, "", 32);
											StringCopy(&Var3, "", 24);
											StringCopy(&cVar4, "", 24);
											__LIB_7__::func_280((*uParam1)[iVar1], &Var3, &cVar4);
											StringCopy(&Var2, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iVar6), 32);
											__LIB_12__::func_37((*uParam1)[iVar1], uParam3[iVar1 /*6*/]);
											GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD((*uParam6)[iVar1], "SET_VEHICLE_INFOR_AND_STATS");
											GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_TWO_STRINGS" /* GXT: ~a~ ~a~ */);
											HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(__LIB_6__::func_369(iVar6, 1));
											HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Var2);
											GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
											if (!__LIB_0__::func_872((*uParam1)[iVar1], 1))
											{
												if (__LIB_0__::func_113(iVar6))
												{
													__LIB_31__::func_526(iVar6);
												}
												else
												{
													__LIB_0__::func_610("CMRC_COMINGSOON" /* GXT: COMING SOON */);
												}
											}
											else
											{
												__LIB_0__::func_610("");
											}
											GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(&cVar4);
											GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(&Var3);
											__LIB_0__::func_610("FMMC_VEHST_0" /* GXT: Top Speed */);
											__LIB_0__::func_610("FMMC_VEHST_1" /* GXT: Acceleration */);
											__LIB_0__::func_610("FMMC_VEHST_2" /* GXT: Braking */);
											__LIB_0__::func_610("FMMC_VEHST_3" /* GXT: Traction */);
											GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND((*uParam3[iVar1 /*6*/])[0]));
											GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND((*uParam3[iVar1 /*6*/])[1]));
											GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND((*uParam3[iVar1 /*6*/])[2]));
											GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND((*uParam3[iVar1 /*6*/])[3]));
											GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
											if (__LIB_0__::func_872((*uParam1)[iVar1], 1))
											{
												if (__LIB_0__::func_156(iVar5, 1, 0))
												{
													StringCopy(&Var8, "", 16);
													StringCopy(&Var2, PLAYER::GET_PLAYER_NAME(iVar5), 32);
													__LIB_3__::func_571(iVar5, &Var8);
													GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD((*uParam6)[iVar1], "SET_PLAYER_NAME");
													__LIB_0__::func_700(&Var2);
													GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
													if (!__LIB_2__::func_525(&Var8))
													{
														GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD((*uParam6)[iVar1], "SET_CREW_NAME");
														GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_LITERAL_STRING(&Var8);
														GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
													}
												}
											}
											uParam0->f_150[iVar1] = 0;
										}
									}
									(*uParam2)[iVar1] = (*uParam1)[iVar1];
								}
							}
							iVar1++;
							iVar1 = 0;
							while (iVar1 < 12)
							{
								if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED((*uParam6)[iVar1]))
								{
									Var0 = { *(uParam4[iVar1 /*3*/]) };
									Var0.f_2 = (Var0.f_2 + ((*uParam5)[iVar1] + 1.3f));
									uParam7->f_6 = { func_13(Var0, CAM::GET_FINAL_RENDERED_CAM_COORD()) };
									if (SYSTEM::VDIST(__LIB_0__::func_85(PLAYER::PLAYER_ID()), Var0) <= 15f)
									{
										if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) && SYSTEM::VDIST(__LIB_0__::func_85(PLAYER::PLAYER_ID()), Var0) < 3.5f)
										{
										}
										else
										{
											GRAPHICS::DRAW_SCALEFORM_MOVIE_3D_SOLID((*uParam6)[iVar1], Var0, uParam7->f_6, *uParam7, uParam7->f_3, uParam7->f_9);
										}
									}
								}
								iVar1++;
							}
							uParam0->f_164 = (uParam0->f_164 - MISC::GET_FRAME_TIME());
							Jump @1120; //curOff = 1051
							uParam0->f_164 = 0f;
							iVar9 = 0;
							while (iVar9 < 12)
							{
								uParam0->f_150[iVar9] = 1;
								if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED((*uParam6)[iVar9]))
								{
									GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(uParam6[iVar9]);
								}
								iVar9++;
							}
							uParam0->f_166 = 0;
							uParam0->f_165 = 0;
						}
Vector3 func_13(struct<2> Param0, var uParam1, struct<3> Param2)//Position - 0x8C2
{
	struct<3> Var0;
	if (__LIB_0__::func_86(Param2))
	{
		return 0f, 0f, 0f;
	}
	Var0.f_2 = (180f - MISC::GET_HEADING_FROM_VECTOR_2D((Param2.f_0 - Param0.f_0), (Param2.f_1 - Param0.f_1)));
	Var0.f_0 = 0f;
	Var0.f_1 = 0f;
	return Var0;
}

void func_56()//Position - 0xB911
{
	bool bVar0;
	if (!func_732() || !func_3(0))
	{
		if (BitTest(Local_164.f_0, 0))
		{
			func_731();
			func_730();
			if (__LIB_0__::func_1("LUX_SRM_H_SOON" /* GXT: This vehicle will be available for purchase soon. */))
			{
				HUD::CLEAR_HELP(true);
			}
		}
		func_718();
		func_717(&(Local_164.f_10), 0);
		func_716(1);
		return;
	}
	bVar0 = BitTest(Local_164.f_0, 0);
	func_713(bVar0);
	__LIB_8__::func_878();
	if (BitTest(Local_164.f_0, 0))
	{
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
		func_706();
		func_690(func_705());
	}
	func_61(&(Local_164.f_10));
	if (__LIB_12__::func_34(&(Local_164.f_10)))
	{
		func_57();
		func_717(&(Local_164.f_10), 0);
	}
}

void func_57()//Position - 0xB9A8
{
	if (BitTest(Local_164.f_0, 0))
	{
		MISC::CLEAR_BIT(&Local_164, 0);
		func_58();
		func_716(3);
	}
	else
	{
		func_718();
		func_716(1);
	}
}

void func_58()//Position - 0xB9D3
{
	if (Local_164.f_2 == 0)
	{
		if (!BitTest(Local_164.f_0, 6))
		{
			MISC::SET_BIT(&Local_164, 6);
		}
	}
	else if (BitTest(Local_164.f_0, 6))
	{
		MISC::CLEAR_BIT(&Local_164, 6);
	}
}

void func_61(int* iParam0)//Position - 0xBA41
{
	func_62(iParam0, 1);
}

void func_62(int* iParam0, bool bParam1)//Position - 0xBA50
{
	if (func_689(iParam0, bParam1))
	{
		__LIB_7__::func_148(iParam0, 5);
	}
	switch (iParam0->f_491)
	{
		case 0:
			func_661(iParam0, bParam1);
			break;
		case 1:
			func_659(iParam0);
			break;
		case 2:
			func_605(iParam0);
			break;
		case 3:
			func_485(iParam0);
			break;
		case 4:
			func_79(iParam0);
			break;
		case 5:
			if (__LIB_7__::func_76(iParam0) == 1)
			{
				__LIB_11__::func_921(iParam0);
				return;
			}
			__LIB_7__::func_263(iParam0);
			__LIB_7__::func_262(iParam0, 1);
			break;
		case 6:
			__LIB_7__::func_263(iParam0);
			__LIB_7__::func_262(iParam0, 1);
			break;
	}
}

void func_79(int* iParam0)//Position - 0xBF79
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	bool bVar10;
	bool bVar11;
	int iVar12;
	int iVar13;
	char* sVar14;
	int iVar15;
	bool bVar16;
	char* sVar17;
	char* sVar18;
	bVar0 = func_484(iParam0->f_388.f_66);
	iVar1 = 0;
	iVar2 = __LIB_6__::func_921(iParam0->f_388.f_66, bVar0, -1, 0);
	iVar3 = __LIB_4__::func_887(iParam0->f_1);
	bVar5 = true;
	bVar6 = false;
	bVar7 = false;
	iVar8 = func_312(iParam0, iParam0->f_4, 0);
	if (iVar8 == 0)
	{
		bVar7 = true;
	}
	uVar4 = func_312(iParam0, iParam0->f_4, 1);
	while (func_255(iParam0, &iVar1, iVar8, Global_75657.f_66, iVar2, iVar3, iParam0->f_4) && __LIB_8__::func_881())
	{
		return;
	}
	if (iVar1 == 2)
	{
		if (__LIB_0__::func_112())
		{
			NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(__LIB_1__::func_818(__LIB_3__::func_534()));
		}
		iVar9 = iParam0->f_388.f_66;
		if (iParam0->f_388.f_66 == joaat("landstalker2"))
		{
			iVar9 = MISC::GET_HASH_KEY(__LIB_3__::func_562(__LIB_1__::func_186(iParam0->f_388.f_66)));
		}
		bVar10 = MONEY::NETWORK_GET_VC_BANK_BALANCE() >= false;
		bVar11 = MONEY::NETWORK_GET_VC_BANK_BALANCE() < iVar8;
		MONEY::NETWORK_BUY_ITEM(iVar8, iVar9, 7, 1, bVar10, __LIB_3__::func_562(__LIB_1__::func_186(iParam0->f_388.f_66)), func_241(iParam0), 0, 0, bVar11);
		if (__LIB_0__::func_112())
		{
			__LIB_1__::func_34(__LIB_3__::func_534());
		}
		__LIB_7__::func_266(iParam0->f_388.f_66);
		iVar12 = __LIB_1__::func_360(2060, -1, 0);
		iVar13 = ((iVar12 / 1000000) + 1 * 1000000);
		if ((iVar12 + iVar8) >= iVar13)
		{
			__LIB_7__::func_265((iVar13 / 1000000) + 1);
		}
		if (!__LIB_9__::func_322(iParam0->f_388.f_66, -1))
		{
			__LIB_1__::func_891(1, 0, 0, 0, 0, 0, 0);
			bVar5 = false;
			bVar6 = true;
		}
		func_169(iParam0->f_4, iParam0->f_1, 1, bVar5, bVar6, 1, 1, 0, bVar7, -1, 0);
		__LIB_2__::func_968(iParam0->f_2, iParam0->f_1, -1);
		if (iParam0->f_1 != -1)
		{
			Global_1585857[iParam0->f_1 /*142*/].f_140 = uVar4;
		}
		__LIB_7__::func_549(iParam0->f_1);
		if (iParam0->f_2 >= 227 && iParam0->f_2 <= 256)
		{
			__LIB_7__::func_80((iParam0->f_2 - 227));
		}
		__LIB_9__::func_4(iParam0->f_4, iParam0->f_1);
		sVar14 = __LIB_7__::func_467(iParam0->f_388.f_66);
		iVar15 = __LIB_7__::func_79(iParam0);
		bVar16 = false;
		if (__LIB_7__::func_264(iParam0))
		{
			bVar16 = true;
		}
		if (bVar16)
		{
			sVar17 = __LIB_7__::func_78(iVar15, 0);
			sVar18 = __LIB_7__::func_78(iVar15, 1);
		}
		else
		{
			sVar17 = __LIB_31__::func_68(iParam0->f_388.f_66, sVar14, iParam0->f_2, 0);
			sVar18 = __LIB_31__::func_68(iParam0->f_388.f_66, sVar14, iParam0->f_2, 1);
		}
		__LIB_38__::func_693(iVar15, sVar17, 1, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(sVar14), -99, "", 1, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0);
		__LIB_7__::func_77(iVar15, sVar18, sVar14, "", Global_2815059.f_6778.f_1, -1, iParam0->f_1);
		__LIB_1__::func_354(2060, (iVar12 + iVar8), -1, 1, 0);
		__LIB_1__::func_333(-35837372, 0, 0);
		__LIB_7__::func_148(iParam0, 6);
	}
	else if (iVar1 == 3)
	{
		__LIB_7__::func_148(iParam0, 5);
	}
	else
	{
		iVar1 = 1;
	}
}

void func_169(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10)//Position - 0x192B1
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
			func_198(iParam1, 1);
			Global_1952156 = 1;
		}
		__LIB_14__::func_503(iParam0, &(Global_1585857[iParam1 /*142*/]), bParam5);
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

void func_198(int iParam0, bool bParam1)//Position - 0x1A999
{
	int iVar0;
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 39)
		{
			if (Global_2815059.f_2309[iVar0 /*44*/].f_40 == iParam0)
			{
				func_198(iVar0, 0);
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
		__LIB_0__::func_794(&(Global_2815059.f_2309[iParam0 /*44*/].f_41));
		Global_2815059.f_2309[iParam0 /*44*/].f_43 = 0;
	}
}

int func_241(var uParam0)//Position - 0x1BE26
{
	if (__LIB_0__::func_883(PLAYER::PLAYER_ID()))
	{
		return 825583449;
	}
	else if (__LIB_3__::func_533(PLAYER::PLAYER_ID()))
	{
		return 1021990419;
	}
	else if (__LIB_7__::func_82())
	{
		return -922984872;
	}
	else if (__LIB_2__::func_574(PLAYER::PLAYER_ID()))
	{
		return 728601621;
	}
	return 1098797251;
}

int func_255(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6)//Position - 0x1E7D9
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	if (__LIB_0__::func_112())
	{
		if (!__LIB_8__::func_881())
		{
			uParam0->f_3 = 3;
		}
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(__LIB_0__::getGlobal_1574918()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			uParam0->f_3 = 3;
		}
		switch (uParam0->f_3)
		{
			case 0:
				uVar0 = iParam2;
				iVar2 = 0;
				iVar3 = 0;
				iVar4 = uVar0;
				if (MONEY::NETWORK_GET_VC_BANK_BALANCE() > 0)
				{
					if (MONEY::NETWORK_GET_VC_BANK_BALANCE() >= iVar4)
					{
						iVar3 = iVar4;
					}
					else
					{
						iVar3 = (iVar4 - (iVar4 - MONEY::NETWORK_GET_VC_BANK_BALANCE()));
					}
					iVar4 = (iVar4 - iVar3);
				}
				if (iVar4 > 0)
				{
					if (MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1) > 0)
					{
						if (MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1) >= iVar4)
						{
							iVar2 = iVar4;
						}
						else
						{
							iVar2 = (iVar4 - (iVar4 - MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1)));
						}
						iVar4 = (iVar4 - iVar2);
					}
				}
				if (iVar4 > 0)
				{
					uParam0->f_3 = 3;
					__LIB_7__::func_75(uParam0, 1);
					return 0;
				}
				if (__LIB_13__::func_175(joaat("NET_SHOP_TTYPE_BASKET"), joaat("CATEGORY_INVENTORY_VEHICLE"), iParam4, joaat("NET_SHOP_ACTION_BUY_VEHICLE"), 1, iParam2, uParam3, 4, iParam5, 3))
				{
					if (__LIB_8__::func_882(uParam0))
					{
						if (__LIB_13__::func_175(joaat("NET_SHOP_TTYPE_BASKET"), joaat("CATEGORY_INVENTORY_VEHICLE"), iParam5, joaat("NET_SHOP_ACTION_BUY_VEHICLE"), 1, uVar0, uParam3, 4, joaat("PM_COUPON_ADD_VEH_MOD_P"), 3))
						{
						}
						else
						{
							uParam0->f_3 = 3;
							return 1;
						}
					}
					if (__LIB_40__::func_937(uParam0->f_1, iParam6, 1, 0))
					{
						if (__LIB_12__::func_387())
						{
							if ((iVar2 != 0 || iVar3 != 0) || uVar1)
							{
								HUD::USE_FAKE_MP_CASH(true);
								HUD::CHANGE_FAKE_MP_CASH(-iVar2, -iVar3);
							}
							uParam0->f_3 = 1;
						}
						else
						{
							uParam0->f_3 = 3;
						}
					}
					else
					{
						uParam0->f_3 = 3;
					}
				}
				else
				{
					uParam0->f_3 = 3;
				}
				break;
			case 1:
				iVar5 = __LIB_3__::func_534();
				if (iVar5 >= 0 && iVar5 < 15)
				{
					if (__LIB_2__::func_835(iVar5))
					{
						if (__LIB_2__::func_834(iVar5) == 2)
						{
							uParam0->f_3 = 2;
						}
						else
						{
							uParam0->f_3 = 3;
						}
					}
				}
				else
				{
					uParam0->f_3 = 3;
				}
				break;
			case 2:
				uParam0->f_3 = 0;
				HUD::USE_FAKE_MP_CASH(false);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
				*iParam1 = 2;
				return 0;
				break;
			case 3:
				__LIB_1__::func_34(__LIB_3__::func_534());
				uParam0->f_3 = 0;
				HUD::USE_FAKE_MP_CASH(false);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
				*iParam1 = 3;
				return 0;
				break;
		}
		if (uParam0->f_3 == 3)
		{
			__LIB_1__::func_34(__LIB_3__::func_534());
			uParam0->f_3 = 0;
			HUD::USE_FAKE_MP_CASH(false);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
			*iParam1 = 3;
			return 0;
		}
		return 1;
	}
	else
	{
		bVar6 = MONEY::NETWORK_GET_VC_BANK_BALANCE() >= false;
		bVar7 = MONEY::NETWORK_GET_VC_BANK_BALANCE() < iParam2;
		if ((bVar6 && MONEY::NETWORK_CAN_SPEND_MONEY(iParam2, true, false, false, -1, 0)) || (bVar7 && MONEY::NETWORK_CAN_SPEND_MONEY(iParam2, false, true, false, -1, 0)))
		{
			*iParam1 = 2;
			return 0;
		}
		else
		{
			*iParam1 = 3;
			__LIB_7__::func_75(uParam0, 1);
			return 0;
		}
	}
	uParam0->f_3 = 0;
	*iParam1 = 0;
	return 0;
}

int func_312(var uParam0, int iParam1, bool bParam2)//Position - 0x26463
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (__LIB_0__::func_121(iParam1))
	{
		bVar0 = func_484(ENTITY::GET_ENTITY_MODEL(iParam1));
		iVar2 = __LIB_1__::func_186(ENTITY::GET_ENTITY_MODEL(iParam1));
		iVar1 = func_402(-1, iVar2, bVar0);
		if (iVar1 <= -1)
		{
			__LIB_3__::func_563(&iVar3, ENTITY::GET_ENTITY_MODEL(iParam1), bVar0, -1);
			iVar1 = iVar3;
		}
		if (!bParam2)
		{
			if (__LIB_8__::func_882(uParam0))
			{
				Global_1585308 = iParam1;
				Global_1585307 = __LIB_6__::func_363(ENTITY::GET_ENTITY_MODEL(iParam1));
				if (__LIB_8__::func_886(iParam1))
				{
					iVar1 = (iVar1 + __LIB_15__::func_767(73, 0, 0, 0, 0, 0));
				}
				iVar1 = (iVar1 + func_315(iParam1, 39, 0, 0, 0, 1));
			}
			if (__LIB_7__::func_268(uParam0) != 0f)
			{
				iVar1 = SYSTEM::CEIL((IntToFloat(iVar1) * ((100f - MISC::ABSF(__LIB_7__::func_268(uParam0))) / 100f)));
			}
		}
		return iVar1;
	}
	return -1;
}

int func_315(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)//Position - 0x26558
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0)) || !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			__LIB_7__::func_99(iParam0, iParam1, iParam2);
			iVar0 = 0;
			if (!bParam5)
			{
				if (__LIB_1__::func_587(ENTITY::GET_ENTITY_MODEL(iParam0)))
				{
					fVar2 = Global_262145.f_4775 /* Tunable: PURCHASED_AIRCRAFT_MOD_SALE_DISCOUNT */;
				}
				else
				{
					fVar2 = Global_262145.f_4772 /* Tunable: PURCHASED_CAR_MOD_SALE_DISCOUNT */;
				}
			}
			else
			{
				fVar2 = 1f;
			}
			if (VEHICLE::GET_VEHICLE_MOD_KIT(iParam0) >= 0)
			{
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 0) != -1 && !__LIB_8__::func_885(iParam0, 0, VEHICLE::GET_VEHICLE_MOD(iParam0, 0), 0))
				{
					iVar1 = __LIB_15__::func_767(__LIB_8__::func_884(0, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 0) + 1, 0, 0, 0, 1);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 3) != -1)
				{
					iVar1 = __LIB_15__::func_767(__LIB_8__::func_884(3, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 3) + 1, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 4) != -1)
				{
					iVar1 = __LIB_15__::func_767(__LIB_8__::func_884(4, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 4) + 1, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 5) != -1 && !__LIB_8__::func_885(iParam0, 5, VEHICLE::GET_VEHICLE_MOD(iParam0, 5), 0))
				{
					iVar1 = __LIB_15__::func_767(__LIB_8__::func_884(5, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 5) + 1, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 6) != -1 && !__LIB_8__::func_885(iParam0, 6, VEHICLE::GET_VEHICLE_MOD(iParam0, 6), 0))
				{
					iVar1 = __LIB_15__::func_767(__LIB_8__::func_884(6, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 6) + 1, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 7) != -1)
				{
					iVar1 = __LIB_15__::func_767(__LIB_8__::func_884(7, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 7) + 1, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 10) != -1)
				{
					iVar1 = __LIB_15__::func_767(__LIB_8__::func_884(10, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 10) + 1, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 11) != -1)
				{
					iVar1 = __LIB_15__::func_767(__LIB_8__::func_884(11, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 11) + 1, 0, 0, 0, 1);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 12) != -1)
				{
					iVar1 = __LIB_15__::func_767(__LIB_8__::func_884(12, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 12) + 1, 0, 0, 0, 1);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 13) != -1 && !__LIB_8__::func_885(iParam0, 13, VEHICLE::GET_VEHICLE_MOD(iParam0, 13), 0))
				{
					iVar1 = __LIB_15__::func_767(__LIB_8__::func_884(13, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 13) + 1, 0, 0, 0, 1);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 14) != -1)
				{
					iVar3 = __LIB_4__::func_878(VEHICLE::GET_VEHICLE_MOD_IDENTIFIER_HASH(iParam0, 14, VEHICLE::GET_VEHICLE_MOD(iParam0, 14)));
					iVar1 = __LIB_15__::func_767(__LIB_8__::func_884(14, 0, 0), iVar3, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 15) != -1)
				{
					iVar1 = __LIB_15__::func_767(__LIB_8__::func_884(15, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 15) + 1, 0, 0, 0, 1);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 16) != -1 && !__LIB_8__::func_885(iParam0, 16, VEHICLE::GET_VEHICLE_MOD(iParam0, 16), 0))
				{
					iVar1 = __LIB_15__::func_767(__LIB_8__::func_884(16, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 16) + 1, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 23) != -1)
				{
					iVar1 = __LIB_12__::func_54(VEHICLE::GET_MOD_TEXT_LABEL(iParam0, 23, VEHICLE::GET_VEHICLE_MOD(iParam0, 23)), VEHICLE::GET_VEHICLE_WHEEL_TYPE(iParam0), VEHICLE::GET_VEHICLE_MOD(iParam0, 23) + 1, VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iParam0)));
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 24) != -1 && VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iParam0)))
				{
					iVar1 = __LIB_12__::func_54(VEHICLE::GET_MOD_TEXT_LABEL(iParam0, 24, VEHICLE::GET_VEHICLE_MOD(iParam0, 24)), VEHICLE::GET_VEHICLE_WHEEL_TYPE(iParam0), VEHICLE::GET_VEHICLE_MOD(iParam0, 24) + 1, VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iParam0)));
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 1) != -1)
				{
					iVar1 = __LIB_15__::func_767(__LIB_8__::func_884(1, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 1) + 1, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 2) != -1)
				{
					iVar1 = __LIB_15__::func_767(__LIB_8__::func_884(2, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 2) + 1, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 8) != -1)
				{
					iVar1 = __LIB_15__::func_767(__LIB_8__::func_884(8, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 8) + 1, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 9) != -1 && !__LIB_8__::func_885(iParam0, 9, VEHICLE::GET_VEHICLE_MOD(iParam0, 9), 0))
				{
					iVar4 = VEHICLE::GET_VEHICLE_MOD(iParam0, 9);
					if (((((Global_1585307 == 29 || Global_1585307 == 30) || Global_1585307 == 34) || Global_1585307 == 33) || Global_1585307 == 38) || Global_1585307 == 39)
					{
						iVar4 += 21;
					}
					iVar1 = __LIB_15__::func_767(__LIB_8__::func_884(9, 0, 0), iVar4 + 1, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::IS_TOGGLE_MOD_ON(iParam0, 18) && !__LIB_8__::func_885(iParam0, 18, 1, 0))
				{
					iVar1 = __LIB_15__::func_767(__LIB_8__::func_884(18, 0, 0), 1, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::IS_TOGGLE_MOD_ON(iParam0, 22))
				{
					switch (VEHICLE::GET_VEHICLE_XENON_LIGHT_COLOR_INDEX(iParam0))
					{
						case 255:
							iVar5 = 1;
							break;
						case 0:
							iVar5 = 2;
							break;
						case 1:
							iVar5 = 3;
							break;
						case 2:
							iVar5 = 4;
							break;
						case 3:
							iVar5 = 5;
							break;
						case 4:
							iVar5 = 6;
							break;
						case 5:
							iVar5 = 7;
							break;
						case 6:
							iVar5 = 8;
							break;
						case 7:
							iVar5 = 9;
							break;
						case 8:
							iVar5 = 10;
							break;
						case 9:
							iVar5 = 11;
							break;
						case 10:
							iVar5 = 12;
							break;
						case 11:
							iVar5 = 13;
							break;
						case 12:
							iVar5 = 14;
							break;
						case 13:
							iVar5 = 15;
							break;
					}
					iVar1 = __LIB_15__::func_767(29, iVar5, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if ((!VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(iParam0) && !__LIB_8__::func_885(iParam0, -1, -1, 1)) && !__LIB_7__::func_90(iParam1, iParam2))
				{
					iVar1 = __LIB_15__::func_767(58, 2, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if ((VEHICLE::GET_DRIFT_TYRES_SET(iParam0) && !__LIB_8__::func_885(iParam0, -1, -1, 1)) && !__LIB_7__::func_90(iParam1, iParam2))
				{
					iVar1 = __LIB_15__::func_767(58, 1, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 25) != -1)
				{
					iVar1 = __LIB_15__::func_767(__LIB_8__::func_884(25, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 25) + 1, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 26) != -1)
				{
					iVar1 = __LIB_15__::func_767(__LIB_8__::func_884(26, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 26) + 1, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 27) != -1)
				{
					iVar1 = __LIB_15__::func_767(__LIB_8__::func_884(27, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 27) + 1, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 28) != -1)
				{
					iVar1 = __LIB_15__::func_767(__LIB_8__::func_884(28, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 28) + 1, 0, VEHICLE::GET_MOD_TEXT_LABEL(iParam0, 28, VEHICLE::GET_VEHICLE_MOD(iParam0, 28)), 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 29) != -1)
				{
					iVar1 = __LIB_15__::func_767(__LIB_8__::func_884(29, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 29) + 1, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 30) != -1)
				{
					iVar1 = __LIB_15__::func_767(__LIB_8__::func_884(30, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 30) + 1, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 31) != -1)
				{
					iVar1 = __LIB_15__::func_767(__LIB_8__::func_884(31, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 31) + 1, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 32) != -1)
				{
					iVar1 = __LIB_15__::func_767(__LIB_8__::func_884(32, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 32) + 1, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 33) != -1)
				{
					iVar1 = __LIB_15__::func_767(__LIB_8__::func_884(33, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 33) + 1, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 34) != -1 && !__LIB_8__::func_885(iParam0, 34, VEHICLE::GET_VEHICLE_MOD(iParam0, 34), 0))
				{
					iVar1 = __LIB_15__::func_767(__LIB_8__::func_884(34, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 34) + 1, 0, 0, 0, 1);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 35) != -1)
				{
					iVar1 = __LIB_15__::func_767(__LIB_8__::func_884(35, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 35) + 1, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 36) != -1)
				{
					iVar1 = __LIB_15__::func_767(__LIB_8__::func_884(36, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 36) + 1, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 37) != -1)
				{
					iVar1 = __LIB_15__::func_767(__LIB_8__::func_884(37, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 37) + 1, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 38) > 0)
				{
					iVar1 = __LIB_15__::func_767(__LIB_8__::func_884(38, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 38) + 1, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 39) != -1)
				{
					iVar1 = __LIB_15__::func_767(__LIB_8__::func_884(39, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 39) + 1, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 40) != -1)
				{
					iVar1 = __LIB_15__::func_767(__LIB_8__::func_884(40, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 40) + 1, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 41) != -1)
				{
					iVar1 = __LIB_15__::func_767(__LIB_8__::func_884(41, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 41) + 1, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 42) != -1 && !__LIB_8__::func_885(iParam0, 42, VEHICLE::GET_VEHICLE_MOD(iParam0, 42), 0))
				{
					iVar1 = __LIB_15__::func_767(__LIB_8__::func_884(42, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 42) + 1, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 43) != -1 && !__LIB_8__::func_885(iParam0, 43, VEHICLE::GET_VEHICLE_MOD(iParam0, 43), 0))
				{
					iVar1 = __LIB_15__::func_767(__LIB_8__::func_884(43, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 43) + 1, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 44) != -1)
				{
					iVar1 = __LIB_15__::func_767(__LIB_8__::func_884(44, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 44) + 1, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 45) != -1)
				{
					iVar1 = __LIB_15__::func_767(__LIB_8__::func_884(45, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 45) + 1, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 46) != -1)
				{
					iVar1 = __LIB_15__::func_767(__LIB_8__::func_884(46, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 46) + 1, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 47) != -1)
				{
					iVar1 = __LIB_15__::func_767(__LIB_8__::func_884(47, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 47) + 1, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 48) != -1 && !__LIB_8__::func_885(iParam0, 48, VEHICLE::GET_VEHICLE_MOD(iParam0, 48), 0))
				{
					iVar1 = __LIB_15__::func_767(__LIB_8__::func_884(48, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 48) + 1, 0, 0, 0, 1);
					iVar0 = (iVar0 + iVar1);
				}
			}
			if (__LIB_7__::func_89(iParam0))
			{
				if (__LIB_8__::func_947(iParam0, bParam4, iParam3))
				{
				}
				else
				{
					iVar1 = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(__LIB_7__::func_88(iParam0, VEHICLE::GET_VEHICLE_LIVERY(iParam0))));
					iVar0 = (iVar0 + iVar1);
				}
			}
			if (__LIB_7__::func_87(iParam0) && VEHICLE::GET_VEHICLE_LIVERY2(iParam0) != 0)
			{
				iVar1 = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(__LIB_8__::func_883(iParam0, VEHICLE::GET_VEHICLE_LIVERY2(iParam0))));
				iVar0 = (iVar0 + iVar1);
			}
			iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * fVar2));
		}
	}
	return iVar0;
}

int func_402(int iParam0, int iParam1, bool bParam2)//Position - 0x50CAA
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	iVar0 = 0;
	iVar1 = __LIB_0__::func_991(joaat("MPPLY_VEHICLE_ID_ADMIN_WEB"));
	iVar2 = __LIB_1__::func_344(iParam1, -1);
	if (iVar2 == 0)
	{
		return -1;
	}
	if (!(((((((iParam1 == 245 || iParam1 == 323) || iParam1 == 324) || iParam1 == 357) || iParam1 == 402) || iParam1 == 449) || iParam1 == 487) || iParam1 == 518))
	{
		if (!__LIB_0__::func_113(iVar2))
		{
			return -1;
		}
	}
	if (iVar1 != 0)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 1;
			if (iParam1 == 109 && iVar1 == joaat("btype"))
			{
				iVar0 = 1;
			}
			else if (iParam1 == 248 && iVar1 == joaat("btype3"))
			{
				iVar0 = 1;
			}
		}
	}
	switch (iParam1)
	{
		case 95:
			return func_418(iVar2, -1, bParam2);
			break;
		case 96:
			if (__LIB_0__::func_116() && __LIB_0__::func_163())
			{
				return func_418(iVar2, Global_262145.f_8611 /* Tunable: KHAMELION_WEB_PRICE_TUNABLES */, 1);
			}
			return func_418(iVar2, Global_262145.f_8608 /* Tunable: KHAMELION_WEB_PRICE_MODIFIER */, bParam2);
			break;
		case 97:
			if (__LIB_0__::func_116() && __LIB_0__::func_163())
			{
				return func_418(iVar2, Global_262145.f_8612 /* Tunable: HOTKNIFE_WEB_PRICE_TUNABLES */, 1);
			}
			return func_418(iVar2, Global_262145.f_8609 /* Tunable: HOTKNIFE_WEB_PRICE_MODIFIER */, bParam2);
			break;
		case 98:
			if (__LIB_0__::func_116() && __LIB_0__::func_163())
			{
				return func_418(iVar2, Global_262145.f_8613 /* Tunable: CARBONRS_WEB_PRICE_TUNABLES */, 1);
			}
			return func_418(iVar2, Global_262145.f_8610 /* Tunable: CARBONRS_WEB_PRICE_MODIFIER */, bParam2);
			break;
		case 62:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			break;
		case 48:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			break;
		case 11:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			break;
		case 25:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			break;
	}
	switch (iParam1)
	{
		case 99:
			if (__LIB_8__::func_887(99))
			{
				return func_418(iVar2, -1, bParam2);
			}
			else
			{
				return -3;
			}
			break;
		case 100:
			if (__LIB_8__::func_887(100))
			{
				return func_418(iVar2, Global_262145.f_7625 /* Tunable: DLC_VEHICLE_CANIS_KALAHARI */, 0);
			}
			else
			{
				return -3;
			}
			break;
		case 101:
			if (__LIB_8__::func_887(101))
			{
				return func_418(iVar2, -1, bParam2);
			}
			else
			{
				return -3;
			}
			break;
		case 102:
			if (__LIB_8__::func_887(102))
			{
				return func_418(iVar2, -1, bParam2);
			}
			else
			{
				return -3;
			}
			break;
		case 109:
			if (((Global_262145.f_7058 /* Tunable: TURN_ON_VALENTINES_EVENT */ || iVar0) || Global_262145.f_12028 /* Tunable: TURN_ON_VALENTINE_VEHICLE */) || __LIB_0__::func_137(114, -1))
			{
				if (__LIB_8__::func_887(109))
				{
					return func_418(iVar2, Global_262145.f_7054 /* Tunable: VALENTINE_MODIFIER_CADDY_SEDAN */, bParam2);
				}
				else
				{
					return -1;
				}
			}
			else
			{
				return -1;
			}
			break;
		case 111:
			if (__LIB_8__::func_887(111))
			{
				return func_418(iVar2, Global_262145.f_7026 /* Tunable: BUSINESS_VEHICLES_JESTER */, bParam2);
			}
			else
			{
				return -3;
			}
			break;
		case 114:
			if (__LIB_8__::func_887(114))
			{
				return func_418(iVar2, Global_262145.f_7027 /* Tunable: BUSINESS_VEHICLES_MASSACRO */, bParam2);
			}
			else
			{
				return -3;
			}
			break;
		case 112:
			if (__LIB_8__::func_887(112))
			{
				return func_418(iVar2, Global_262145.f_7028 /* Tunable: BUSINESS_VEHICLES_TURISMOR */, bParam2);
			}
			else
			{
				return -3;
			}
			break;
		case 115:
			if (__LIB_8__::func_887(115))
			{
				return func_418(iVar2, Global_262145.f_7029 /* Tunable: BUSINESS_VEHICLES_ZENTORNO */, bParam2);
			}
			else
			{
				return -3;
			}
			break;
		case 116:
			if (__LIB_8__::func_887(116))
			{
				return func_418(iVar2, Global_262145.f_7025 /* Tunable: BUSINESS_VEHICLES_HUNTLEY */, bParam2);
			}
			else
			{
				return -3;
			}
			break;
		case 110:
			if (__LIB_8__::func_887(110))
			{
				return func_418(iVar2, Global_262145.f_7024 /* Tunable: BUSINESS_VEHICLES_ALPHA */, bParam2);
			}
			else
			{
				return -3;
			}
			break;
		case 113:
			if (__LIB_8__::func_887(113))
			{
				return func_418(iVar2, Global_262145.f_7079 /* Tunable: BUSINESS_VEHICLE_VESTRA */, bParam2);
			}
			else
			{
				return -3;
			}
			break;
		case 121:
			if (__LIB_8__::func_887(121))
			{
				return func_418(iVar2, -1, bParam2);
			}
			else
			{
				return -3;
			}
			break;
		case 143:
			if (__LIB_8__::func_887(143))
			{
				return func_418(iVar2, -1, bParam2);
			}
			else
			{
				return -3;
			}
			break;
		case 144:
			if (__LIB_8__::func_887(144))
			{
				return func_418(iVar2, -1, bParam2);
			}
			else
			{
				return -3;
			}
			break;
		case 145:
			if (__LIB_8__::func_887(145))
			{
				return func_418(iVar2, -1, bParam2);
			}
			else
			{
				return -3;
			}
			break;
		case 146:
			if (__LIB_8__::func_887(146))
			{
				return func_418(iVar2, -1, bParam2);
			}
			else
			{
				return -3;
			}
			break;
		case 147:
			if (__LIB_8__::func_887(147))
			{
				return func_418(iVar2, -1, bParam2);
			}
			else
			{
				return -3;
			}
			break;
		case 148:
			if (__LIB_8__::func_887(148))
			{
				return func_418(iVar2, -1, bParam2);
			}
			else
			{
				return -3;
			}
			break;
		case 149:
			if (__LIB_8__::func_887(149))
			{
				return func_418(iVar2, -1, bParam2);
			}
			else
			{
				return -3;
			}
			break;
		case 160:
			if (Global_262145.f_8273 /* Tunable: TOGGLE_ACTIVATE_MONSTER_TRUCK */ || __LIB_0__::func_137(3604, -1))
			{
				if (__LIB_8__::func_887(160))
				{
					return func_418(iVar2, Global_262145.f_8277 /* Tunable: VEHICLE_INDEPENDENCEDAY_MONSTER */, bParam2);
				}
				else
				{
					return -3;
				}
			}
			else
			{
				return -1;
			}
			break;
		case 161:
			if (Global_262145.f_8272 /* Tunable: TOGGLE_ACTIVATE_WESTERN_SOVEREIGN */ || __LIB_0__::func_137(3605, -1))
			{
				if (__LIB_8__::func_887(161))
				{
					return func_418(iVar2, Global_262145.f_8278 /* Tunable: VEHICLE_INDEPENDENCEDAY_SOVEREIGN */, bParam2);
				}
				else
				{
					return -3;
				}
			}
			else
			{
				return -1;
			}
			break;
		case 162:
			if (__LIB_8__::func_887(162))
			{
				return func_418(iVar2, Global_262145.f_8536 /* Tunable: PS_BUCKINGHAM_MILJET */, bParam2);
			}
			else
			{
				return -3;
			}
			break;
		case 163:
			if (__LIB_8__::func_887(163))
			{
				return func_418(iVar2, Global_262145.f_8535 /* Tunable: PS_WESTERN_BESRA */, bParam2);
			}
			else
			{
				return -3;
			}
			break;
		case 164:
			if (__LIB_8__::func_887(164))
			{
				if (!bParam2)
				{
					return func_418(iVar2, Global_262145.f_8537 /* Tunable: PS_SWIFT_LIVERY_1 */, 0);
				}
				else
				{
					return func_418(iVar2, Global_262145.f_8538 /* Tunable: PS_SWIFT_LIVERY_2 */, 1);
				}
				return -3;
			}
			break;
		case 165:
			if (__LIB_8__::func_887(165))
			{
				return func_418(iVar2, Global_262145.f_8533 /* Tunable: PS_INVERTO_COQUETTE_CLASSIC */, bParam2);
			}
			else
			{
				return -3;
			}
			break;
		case 166:
			if (__LIB_8__::func_887(166))
			{
				return func_418(iVar2, Global_262145.f_8534 /* Tunable: PS_INVERTO_COQUETTE_CLASSIC_TOPLESS */, 1);
			}
			else
			{
				return -3;
			}
			break;
		case 167:
			if (__LIB_8__::func_887(167))
			{
				return func_418(iVar2, Global_262145.f_8851 /* Tunable: LTS_LCC_INNOVATION */, bParam2);
			}
			else
			{
				return -3;
			}
			break;
		case 168:
			if (__LIB_8__::func_887(168))
			{
				return func_418(iVar2, Global_262145.f_8852 /* Tunable: LTS_SHITZU_HAKUCHOU */, bParam2);
			}
			else
			{
				return -3;
			}
			break;
		case 169:
			if (__LIB_8__::func_887(169))
			{
				return func_418(iVar2, Global_262145.f_8853 /* Tunable: LTS_LAMPADATI_FURORE_GT */, bParam2);
			}
			else
			{
				return -3;
			}
			break;
		case 170:
			if (__LIB_8__::func_887(170))
			{
				return func_418(iVar2, Global_262145.f_8854 /* Tunable: LTS_CANIS_KALAHARI_TOPLESS */, 1);
			}
			else
			{
				return -3;
			}
			break;
		case 187:
			if (Global_262145.f_8714 /* Tunable: TOGGLE_ON_MP_VEHICLE_HEIST_VALKRYIE */)
			{
				if (__LIB_8__::func_887(187))
				{
					return func_418(iVar2, -1, bParam2);
				}
				else
				{
					return -3;
				}
			}
			else
			{
				return -1;
			}
			break;
		case 177:
			if (Global_262145.f_8710 /* Tunable: TOGGLE_ON_MP_VEHICLE_HEIST_HYDRA */)
			{
				if (__LIB_8__::func_887(177))
				{
					return func_418(iVar2, -1, bParam2);
				}
				else
				{
					return -3;
				}
			}
			else
			{
				return -1;
			}
			break;
		case 185:
			if (Global_262145.f_8712 /* Tunable: TOGGLE_ON_MP_VEHICLE_HEIST_SAVAGE */)
			{
				if (__LIB_8__::func_887(185))
				{
					return func_418(iVar2, -1, bParam2);
				}
				else
				{
					return -3;
				}
			}
			else
			{
				return -1;
			}
			break;
		case 174:
			if (__LIB_8__::func_887(174))
			{
				return func_418(iVar2, -1, bParam2);
			}
			else
			{
				return -3;
			}
			break;
		case 171:
			if (Global_262145.f_9032 /* Tunable: UNLOCK_BOXVILLE4 */)
			{
				return func_418(iVar2, -1, bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 172:
			if (Global_262145.f_8707 /* Tunable: TOGGLE_ON_MP_VEHICLE_HEIST_CASCO */)
			{
				if (__LIB_8__::func_887(172))
				{
					return func_418(iVar2, -1, bParam2);
				}
				else
				{
					return -3;
				}
			}
			else
			{
				return -1;
			}
			break;
		case 173:
			if (Global_262145.f_8708 /* Tunable: TOGGLE_ON_MP_VEHICLE_HEIST_DINGHY3 */)
			{
				return func_418(iVar2, -1, bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 175:
			if (Global_262145.f_8709 /* Tunable: TOGGLE_ON_MP_VEHICLE_HEIST_GBURRITO2 */)
			{
				if (__LIB_8__::func_887(175))
				{
					return func_418(iVar2, -1, bParam2);
				}
				else
				{
					return -3;
				}
			}
			else
			{
				return -1;
			}
			break;
		case 176:
			if (__LIB_8__::func_887(176))
			{
				return func_418(iVar2, -1, bParam2);
			}
			else
			{
				return -3;
			}
			break;
		case 178:
			if (Global_262145.f_8705 /* Tunable: TOGGLE_ON_MP_VEHICLE_HEIST_INSURGENT */)
			{
				if (__LIB_8__::func_887(178))
				{
					return func_418(iVar2, -1, bParam2);
				}
				else
				{
					return -3;
				}
			}
			else
			{
				return -1;
			}
			break;
		case 179:
			if (Global_262145.f_8706 /* Tunable: TOGGLE_ON_MP_VEHICLE_HEIST_INSURGENT2 */)
			{
				if (__LIB_8__::func_887(179))
				{
					return func_418(iVar2, -1, bParam2);
				}
				else
				{
					return -3;
				}
			}
			else
			{
				return -1;
			}
			break;
		case 183:
			if (Global_262145.f_9034 /* Tunable: UNLOCK_MULE3 */)
			{
				return func_418(iVar2, -1, bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 180:
			if (Global_262145.f_8716 /* Tunable: TOGGLE_ON_MP_VEHICLE_HEIST_KURUMA */)
			{
				if (__LIB_8__::func_887(180))
				{
					return func_418(iVar2, -1, bParam2);
				}
				else
				{
					return -3;
				}
			}
			else
			{
				return -1;
			}
			break;
		case 181:
			if (Global_262145.f_9033 /* Tunable: UNLOCK_KURUMA2 */)
			{
				if (__LIB_8__::func_887(181))
				{
					return func_418(iVar2, -1, bParam2);
				}
				else
				{
					return -3;
				}
			}
			else
			{
				return -1;
			}
			break;
		case 182:
			if (Global_262145.f_8717 /* Tunable: TOGGLE_ON_MP_VEHICLE_HEIST_LECTRO */)
			{
				if (__LIB_8__::func_887(182))
				{
					return func_418(iVar2, -1, bParam2);
				}
				else
				{
					return -3;
				}
			}
			else
			{
				return -1;
			}
			break;
		case 184:
			if (Global_262145.f_8711 /* Tunable: TOGGLE_ON_MP_VEHICLE_HEIST_PBUS */)
			{
				return func_418(iVar2, -1, bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 186:
			if (Global_262145.f_8713 /* Tunable: TOGGLE_ON_MP_VEHICLE_HEIST_TECHNICAL */)
			{
				if (__LIB_8__::func_887(186))
				{
					return func_418(iVar2, -1, bParam2);
				}
				else
				{
					return -3;
				}
			}
			else
			{
				return -1;
			}
			break;
		case 188:
			if (Global_262145.f_8715 /* Tunable: TOGGLE_ON_MP_VEHICLE_HEIST_VELUM2 */)
			{
				if (__LIB_8__::func_887(188))
				{
					return func_418(iVar2, -1, bParam2);
				}
				else
				{
					return -3;
				}
			}
			else
			{
				return -1;
			}
			break;
		case 189:
			return func_418(__LIB_1__::func_344(iParam1, -1), Global_262145.f_10084 /* Tunable: HESIT_VEHICLE_PRICE_BRAVADO_GRESLEY */, bParam2);
			break;
		case 190:
			return func_418(__LIB_1__::func_344(iParam1, -1), Global_262145.f_10085 /* Tunable: HESIT_VEHICLE_PRICE_OCELOT_JACKAL */, bParam2);
			break;
		case 191:
			return func_418(__LIB_1__::func_344(iParam1, -1), Global_262145.f_10086 /* Tunable: HESIT_VEHICLE_PRICE_DUNDREARY_LANDSTALKER */, bParam2);
			break;
		case 192:
			return func_418(__LIB_1__::func_344(iParam1, -1), Global_262145.f_9102 /* Tunable: VEHICLES_HEIST_MESA3 */, bParam2);
			break;
		case 193:
			return func_418(__LIB_1__::func_344(iParam1, -1), Global_262145.f_10087 /* Tunable: HESIT_VEHICLE_PRICE_PRINCIPLE_NEMESIS */, bParam2);
			break;
		case 194:
			return func_418(__LIB_1__::func_344(iParam1, -1), Global_262145.f_10088 /* Tunable: HESIT_VEHICLE_PRICE_UBERMACHT_ORACLE */, bParam2);
			break;
		case 195:
			return func_418(__LIB_1__::func_344(iParam1, -1), Global_262145.f_10089 /* Tunable: HESIT_VEHICLE_PRICE_BRAVADO_RUMPO */, bParam2);
			break;
		case 196:
			return func_418(__LIB_1__::func_344(iParam1, -1), Global_262145.f_10090 /* Tunable: HESIT_VEHICLE_PRICE_BENEFACTOR_SCHAFTER */, bParam2);
			break;
		case 197:
			return func_418(__LIB_1__::func_344(iParam1, -1), Global_262145.f_10091 /* Tunable: HESIT_VEHICLE_PRICE_CANIS_SEMINOLE */, bParam2);
			break;
		case 198:
			return func_418(__LIB_1__::func_344(iParam1, -1), Global_262145.f_10092 /* Tunable: HESIT_VEHICLE_PRICE_CHEVAL_SURGE */, bParam2);
			break;
		case 199:
			if (__LIB_0__::func_116() || Global_262145.f_20267 /* Tunable: ENABLE_RETURNING_CONTENT_VEHICLE */)
			{
				return func_418(iVar2, -1, bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 200:
			if (__LIB_0__::func_116() || Global_262145.f_20267 /* Tunable: ENABLE_RETURNING_CONTENT_VEHICLE */)
			{
				return func_418(iVar2, -1, bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 201:
			if (__LIB_0__::func_116() || Global_262145.f_20267 /* Tunable: ENABLE_RETURNING_CONTENT_VEHICLE */)
			{
				return func_418(iVar2, -1, bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 202:
			if (__LIB_0__::func_116() || Global_262145.f_20267 /* Tunable: ENABLE_RETURNING_CONTENT_VEHICLE */)
			{
				return func_418(iVar2, -1, bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 203:
			if (__LIB_0__::func_116() || Global_262145.f_20267 /* Tunable: ENABLE_RETURNING_CONTENT_VEHICLE */)
			{
				return func_418(iVar2, -1, bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 204:
			if (__LIB_0__::func_116() || Global_262145.f_20267 /* Tunable: ENABLE_RETURNING_CONTENT_VEHICLE */)
			{
				return func_418(iVar2, -1, bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 205:
			if (Global_262145.f_20268 /* Tunable: ENABLE_RETURNING_CONTENT_DOD */)
			{
				return func_418(iVar2, -1, bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 206:
			if (__LIB_0__::func_116())
			{
				return 0;
			}
			else if (Global_262145.f_17372 /* Tunable: ENABLESTUNT_STALLION */ || Global_262145.f_20267 /* Tunable: ENABLE_RETURNING_CONTENT_VEHICLE */)
			{
				return func_418(iVar2, -1, bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 207:
			if (__LIB_0__::func_116())
			{
				return 0;
			}
			else if (Global_262145.f_17374 /* Tunable: ENABLESTUNT_DOMINATOR */ || Global_262145.f_20267 /* Tunable: ENABLE_RETURNING_CONTENT_VEHICLE */)
			{
				return func_418(iVar2, -1, bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 208:
			if (__LIB_0__::func_116())
			{
				return 0;
			}
			else if (Global_262145.f_17373 /* Tunable: ENABLESTUNT_GAUNTLET */ || Global_262145.f_20267 /* Tunable: ENABLE_RETURNING_CONTENT_VEHICLE */)
			{
				return func_418(iVar2, -1, bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 209:
			if (__LIB_0__::func_116())
			{
				return 0;
			}
			else if (Global_262145.f_17375 /* Tunable: ENABLESTUNT_BUFFALO */ || Global_262145.f_20267 /* Tunable: ENABLE_RETURNING_CONTENT_VEHICLE */)
			{
				return func_418(iVar2, -1, bParam2);
			}
			else
			{
				return -1;
			}
			break;
	}
	switch (iParam1)
	{
		case 210:
			if (!bParam2)
			{
				if (__LIB_8__::func_887(210))
				{
					return func_418(iVar2, -1, bParam2);
				}
				else
				{
					return -3;
				}
			}
			else if (Global_262145.f_14735 /* Tunable: ENABLE_LOWRIDER2_SLAMVAN */)
			{
				return func_418(__LIB_1__::func_344(iParam1, -1), -1, bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 211:
			if (__LIB_8__::func_887(211))
			{
				return func_418(iVar2, -1, bParam2);
			}
			else
			{
				return -3;
			}
			break;
		case 212:
			if (__LIB_8__::func_887(212))
			{
				return func_418(iVar2, Global_262145.f_9402 /* Tunable: VEHICLE_XMAS14_DINKA_JESTER_RACECAR */, bParam2);
			}
			else
			{
				return -3;
			}
			break;
		case 213:
			if (__LIB_8__::func_887(213))
			{
				return func_418(iVar2, Global_262145.f_9403 /* Tunable: VEHICLE_XMAS14_DEWBAUCHEE_MASSACRO_RACECAR */, bParam2);
			}
			else
			{
				return -3;
			}
			break;
		case 214:
			if (__LIB_8__::func_887(214))
			{
				return func_418(__LIB_1__::func_344(iParam1, -1), Global_262145.f_11060 /* Tunable: LUXE1_WEBSITE_BENEFACTOR_STIRLING_GT */, bParam2);
			}
			else
			{
				return -3;
			}
			break;
		case 215:
			if (__LIB_8__::func_887(215))
			{
				return func_418(__LIB_1__::func_344(iParam1, -1), Global_262145.f_11061 /* Tunable: LUXE1_WEBSITE_BUCKINGHAM_LUXOR_DELUXE */, bParam2);
			}
			else
			{
				return -3;
			}
			break;
		case 216:
			if (__LIB_8__::func_887(216))
			{
				return func_418(__LIB_1__::func_344(iParam1, -1), Global_262145.f_11062 /* Tunable: LUXE1_WEBSITE_PEGASSI_OSIRIS */, bParam2);
			}
			else
			{
				return -3;
			}
			break;
		case 217:
			if (__LIB_8__::func_887(217))
			{
				return func_418(__LIB_1__::func_344(iParam1, -1), Global_262145.f_11063 /* Tunable: LUXE1_WEBSITE_BUCKINGHAM_SWIFT_DELUXE */, bParam2);
			}
			else
			{
				return -3;
			}
			break;
		case 218:
			if (__LIB_8__::func_887(218))
			{
				return func_418(__LIB_1__::func_344(iParam1, -1), Global_262145.f_11064 /* Tunable: LUXE1_WEBSITE_ALBANY_VIRGO */, bParam2);
			}
			else
			{
				return -3;
			}
			break;
		case 219:
			if (__LIB_8__::func_887(219))
			{
				return func_418(__LIB_1__::func_344(iParam1, -1), Global_262145.f_11065 /* Tunable: LUXE1_WEBSITE_ENUS_WINDSOR */, bParam2);
			}
			else
			{
				return -3;
			}
			break;
		case 220:
			return func_418(__LIB_1__::func_344(iParam1, -1), Global_262145.f_11357 /* Tunable: LUXE2_COIL_BRAWLER */, bParam2);
			break;
		case 221:
			if (!bParam2)
			{
				return func_418(__LIB_1__::func_344(iParam1, -1), Global_262145.f_11358 /* Tunable: LUXE2_VAPID_CHINO */, 0);
			}
			else
			{
				return func_418(__LIB_1__::func_344(iParam1, -1), Global_262145.f_12339 /* Tunable: WEBSITE_VAPID_CHINO__BENNYS_WEBSITE_ */, 1);
			}
			break;
		case 222:
			return func_418(__LIB_1__::func_344(iParam1, -1), Global_262145.f_11359 /* Tunable: LUXE2_INVETERO_COQUETTE_BLACKFIN */, bParam2);
			break;
		case 223:
			return func_418(__LIB_1__::func_344(iParam1, -1), Global_262145.f_11360 /* Tunable: LUXE2_PROGEN_T20 */, bParam2);
			break;
		case 224:
			return func_418(__LIB_1__::func_344(iParam1, -1), Global_262145.f_11361 /* Tunable: LUXE2_LAMPADATI_TORO */, bParam2);
			break;
		case 225:
			return func_418(__LIB_1__::func_344(iParam1, -1), Global_262145.f_11362 /* Tunable: LUXE2_DINKA_VINDICATOR */, bParam2);
			break;
		case 229:
			return func_418(__LIB_1__::func_344(iParam1, -1), Global_262145.f_12338 /* Tunable: WEBSITE_ALBANY_PRIMO */, bParam2);
			break;
		case 228:
			return func_418(__LIB_1__::func_344(iParam1, -1), Global_262145.f_12335 /* Tunable: WEBSITE_DECLASSE_MOONBEAM */, bParam2);
			break;
		case 227:
			return func_418(__LIB_1__::func_344(iParam1, -1), Global_262145.f_12334 /* Tunable: WEBSITE_WILLARD_FACTION */, bParam2);
			break;
		case 226:
			return func_418(__LIB_1__::func_344(iParam1, -1), Global_262145.f_12336 /* Tunable: WEBSITE_ALBANY_BUCCANEER */, bParam2);
			break;
		case 230:
			return func_418(__LIB_1__::func_344(iParam1, -1), Global_262145.f_12337 /* Tunable: WEBSITE_DECLASSE_VOODOO */, bParam2);
			break;
		case 231:
			if ((iVar0 || Global_262145.f_12038 /* Tunable: TURN_ON_HALLOWEEN_VEHICLES */) || __LIB_0__::func_137(4326, -1))
			{
				if (__LIB_8__::func_887(231))
				{
					return func_418(__LIB_1__::func_344(iParam1, -1), -1, bParam2);
					break;
				}
				else
				{
					return -1;
				}
			}
			else
			{
				return -1;
			}
			break;
		case 232:
			if ((iVar0 || Global_262145.f_12038 /* Tunable: TURN_ON_HALLOWEEN_VEHICLES */) || __LIB_0__::func_137(4327, -1))
			{
				if (__LIB_8__::func_887(232))
				{
					return func_418(__LIB_1__::func_344(iParam1, -1), -1, bParam2);
					break;
				}
				else
				{
					return -1;
				}
			}
			else
			{
				return -1;
			}
			break;
		case 251:
			if (Global_262145.f_14730 /* Tunable: ENABLE_LOWRIDER2_VIRGO3 */)
			{
				return func_418(__LIB_1__::func_344(iParam1, -1), Global_262145.f_15025 /* Tunable: WEBSITE_BENNYS_DUNDREARY_VIRGO_CLASSIC */, bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 250:
			if (Global_262145.f_14732 /* Tunable: ENABLE_LOWRIDER2_TORNADO5 */)
			{
				return func_418(__LIB_1__::func_344(iParam1, -1), -1, bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 249:
			if (Global_262145.f_14731 /* Tunable: ENABLE_LOWRIDER2_SABREGT */)
			{
				return func_418(__LIB_1__::func_344(iParam1, -1), -1, bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 252:
			if (Global_262145.f_14734 /* Tunable: ENABLE_LOWRIDER2_FACTION */)
			{
				return func_418(__LIB_1__::func_344(iParam1, -1), -1, bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 233:
			if (!bParam2)
			{
				return func_418(__LIB_1__::func_344(iParam1, -1), Global_262145.f_13253 /* Tunable: APARTMENT_WEBSITE_GALLIVANTER_BALLER_LE */, 0);
			}
			else
			{
				return func_418(__LIB_1__::func_344(iParam1, -1), Global_262145.f_13254 /* Tunable: APARTMENT_WEBSITE_GALLIVANTER_BALLER_LE_ARMORED */, 1);
			}
			break;
		case 234:
			if (!bParam2)
			{
				return func_418(__LIB_1__::func_344(iParam1, -1), Global_262145.f_13255 /* Tunable: APARTMENT_WEBSITE_GALLIVANTER_BALLER_LE_LWB */, 0);
			}
			else
			{
				return func_418(__LIB_1__::func_344(iParam1, -1), Global_262145.f_13256 /* Tunable: APARTMENT_WEBSITE_GALLIVANTER_BALLER_LWB_ARMORED */, 1);
			}
			break;
		case 235:
			if (!bParam2)
			{
				return func_418(__LIB_1__::func_344(iParam1, -1), Global_262145.f_13257 /* Tunable: APARTMENT_WEBSITE_ENUS_COGNOSCENTI_55 */, 0);
			}
			else
			{
				return func_418(__LIB_1__::func_344(iParam1, -1), Global_262145.f_13258 /* Tunable: APARTMENT_WEBSITE_ENUS_COGNOSCENTI_55_ARMORED */, 1);
			}
			break;
		case 236:
			if (!bParam2)
			{
				return func_418(__LIB_1__::func_344(iParam1, -1), Global_262145.f_13259 /* Tunable: APARTMENT_WEBSITE_ENUS_COGNOSCENTI */, 0);
			}
			else
			{
				return func_418(__LIB_1__::func_344(iParam1, -1), Global_262145.f_13260 /* Tunable: APARTMENT_WEBSITE_ENUS_COGNOSCENTI_ARMORED */, 1);
			}
			break;
		case 237:
			return func_418(__LIB_1__::func_344(iParam1, -1), Global_262145.f_13261 /* Tunable: APARTMENT_WEBSITE_BENEFACTOR_SCHAFTER_TURRETED_LIMO */, bParam2);
			break;
		case 238:
			return func_418(__LIB_1__::func_344(iParam1, -1), Global_262145.f_13262 /* Tunable: APARTMENT_WEBSITE_DECLASSE_MAMBA */, bParam2);
			break;
		case 239:
			return func_418(__LIB_1__::func_344(iParam1, -1), Global_262145.f_13263 /* Tunable: APARTMENT_WEBSITE_IMPONTE_NIGHT_SHADE */, bParam2);
			break;
		case 240:
			if (!bParam2)
			{
				return func_418(__LIB_1__::func_344(iParam1, -1), Global_262145.f_13264 /* Tunable: APARTMENT_WEBSITE_BENEFACTOR_SCHAFTER_V12 */, 0);
			}
			else
			{
				return func_418(__LIB_1__::func_344(iParam1, -1), Global_262145.f_13265 /* Tunable: APARTMENT_WEBSITE_BENEFACTOR_SCHAFTER_V12_ARMORED */, 1);
			}
			break;
		case 241:
			if (!bParam2)
			{
				return func_418(__LIB_1__::func_344(iParam1, -1), Global_262145.f_13266 /* Tunable: APARTMENT_WEBSITE_BENEFACTOR_SCHAFTER_LWB */, 0);
			}
			else
			{
				return func_418(__LIB_1__::func_344(iParam1, -1), Global_262145.f_13267 /* Tunable: APARTMENT_WEBSITE_BENEFACTOR_SCHAFTER_LWB_ARMORED */, 1);
			}
			break;
		case 242:
			return func_418(__LIB_1__::func_344(iParam1, -1), Global_262145.f_13268 /* Tunable: APARTMENT_WEBSITE_BRAVADO_VERLIERER */, bParam2);
			break;
		case 243:
			return func_418(__LIB_1__::func_344(iParam1, -1), Global_262145.f_13269 /* Tunable: APARTMENT_WEBSITE_BUCKINGHAM_SUPERVOLITO */, bParam2);
			break;
		case 244:
			return func_418(__LIB_1__::func_344(iParam1, -1), Global_262145.f_13270 /* Tunable: APARTMENT_WEBSITE_BUCKINGHAM_SUPERVOLITO_CARBON */, bParam2);
			break;
		case 245:
			if (!Global_262145.f_13084 /* Tunable: YACHT_DISABLE_PURCHASE */ && !__LIB_1__::func_665())
			{
				return 1;
			}
			else
			{
				return -1;
			}
			break;
		case 323:
			return 1;
		case 324:
			return func_418(__LIB_1__::func_344(iParam1, -1), -1, bParam2);
			break;
		case 246:
			if ((iVar0 || Global_262145.f_12707 /* Tunable: XMAS2015_VEHICLE */) || __LIB_0__::func_137(109, -1))
			{
				if (__LIB_8__::func_887(246))
				{
					return func_418(__LIB_1__::func_344(iParam1, -1), Global_262145.f_13330 /* Tunable: XMAS2015_DECLASSE_TAMPA */, bParam2);
					break;
				}
				else
				{
					return -1;
				}
			}
			else
			{
				return -1;
			}
			break;
		case 247:
			return func_418(__LIB_1__::func_344(iParam1, -1), -1, bParam2);
			break;
		case 49:
			return func_418(__LIB_1__::func_344(iParam1, -1), -1, bParam2);
			break;
		case 248:
			if (((Global_262145.f_7058 /* Tunable: TURN_ON_VALENTINES_EVENT */ || iVar0) || Global_262145.f_13394 /* Tunable: TURN_ON_VALENTINE_2016_VEHICLE */) || __LIB_0__::func_137(115, -1))
			{
				if (__LIB_8__::func_887(248))
				{
					return func_418(__LIB_1__::func_344(iParam1, -1), -1, bParam2);
					break;
				}
				else
				{
					return -1;
				}
			}
			else
			{
				return -1;
			}
			break;
		case 253:
			return func_418(__LIB_1__::func_344(iParam1, -1), -1, bParam2);
			break;
		case 254:
			return func_418(__LIB_1__::func_344(iParam1, -1), -1, bParam2);
			break;
		case 255:
			return func_418(__LIB_1__::func_344(iParam1, -1), -1, bParam2);
			break;
		case 256:
			return func_418(__LIB_1__::func_344(iParam1, -1), -1, bParam2);
			break;
		case 257:
			return func_418(__LIB_1__::func_344(iParam1, -1), -1, bParam2);
			break;
		case 357:
			return 1;
		case 402:
			if (__LIB_7__::func_129())
			{
				return 1;
			}
			else
			{
				return -1;
			}
			break;
		case 518:
			return 1;
			break;
	}
	switch (iParam1)
	{
		case 117:
			return func_418(iVar2, -1, 1);
		case 118:
			return func_418(iVar2, -1, 1);
		case 119:
			return func_418(iVar2, -1, 1);
		case 120:
			return func_418(iVar2, Global_262145.f_4105 /* Tunable: VOLTIC_EXPENDITURE_MODIFIER */, 1);
		default:
	}
	switch (iParam1)
	{
		case 5:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 82:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 63:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 78:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 57:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 49:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 22:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 94:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 51:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 89:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 66:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 33:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 70:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 83:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 20:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 71:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 19:
			return func_418(iVar2, -1, bParam2);
		case 58:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 3:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 84:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 7:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 72:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 38:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 21:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 12:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 54:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 90:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 81:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 13:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 4:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 56:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 69:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 60:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 91:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 50:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 15:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 53:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 41:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 92:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 44:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 43:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 2:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 85:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 14:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 79:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 24:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 16:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 6:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 86:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 47:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 73:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 61:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 67:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 74:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 75:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 87:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 17:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 59:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 64:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 68:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 52:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 39:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 34:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 30:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 10:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 27:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 1:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 76:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 88:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 32:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 55:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 45:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 18:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 35:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 36:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 37:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 29:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 46:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 65:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 80:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 42:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 77:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 40:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 93:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 0:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 103:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 104:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 105:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 106:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 107:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 108:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 128:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 129:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 130:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 131:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 132:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 133:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 134:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 258:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 259:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 260:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 261:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 262:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 263:
			if (!bParam2)
			{
				return func_418(iVar2, Global_262145.f_16631 /* Tunable: EXEC1_BENEFACTOR_XLS */, 0);
			}
			else
			{
				return func_418(iVar2, Global_262145.f_16632 /* Tunable: EXEC1_BENEFACTOR_XLS_ARMORED */, 1);
			}
			break;
		case 264:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 265:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 266:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 135:
			if (!bParam2)
			{
				return func_418(iVar2, Global_262145.f_7036 /* Tunable: BUSINESS_VEHICLES_MINIVAN */, bParam2);
			}
			else if (Global_262145.f_14733 /* Tunable: ENABLE_LOWRIDER2_MINIVAN */)
			{
				return func_418(__LIB_1__::func_344(iParam1, -1), Global_262145.f_15028 /* Tunable: WEBSITE_BENNYS_VAPID_MINIVAN */, bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 136:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 137:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 138:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 139:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 140:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 141:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 142:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 122:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 123:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 124:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 125:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 126:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 127:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 150:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 151:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 152:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 153:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 154:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 155:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 156:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 157:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 158:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
		case 159:
			return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
	}
	switch (iParam1)
	{
		case 267:
			if (Global_262145.f_17360 /* Tunable: ENABLESTUNT_LE7B */)
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 268:
			if (Global_262145.f_17361 /* Tunable: ENABLESTUNT_OMNIS */)
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 269:
			if (Global_262145.f_17362 /* Tunable: ENABLESTUNT_TROPOS_RALLYE */)
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 270:
			if (Global_262145.f_17363 /* Tunable: ENABLESTUNT_BRIOSO_RA */)
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 271:
			if (Global_262145.f_17364 /* Tunable: ENABLESTUNT_TROPHY_TRUCK */)
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 272:
			if (Global_262145.f_17365 /* Tunable: ENABLESTUNT_TROPHY_CAR */)
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 273:
			if (Global_262145.f_17366 /* Tunable: ENABLESTUNT_CONTENDER */)
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 274:
			if (Global_262145.f_17367 /* Tunable: ENABLESTUNT_CLIFFHANGER */)
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 275:
			if (Global_262145.f_17368 /* Tunable: ENABLESTUNT_BF400 */)
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 279:
			if (Global_262145.f_17358 /* Tunable: ENABLESTUNT_TYRUS */)
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 280:
			if (Global_262145.f_17369 /* Tunable: ENABLESTUNT_LYNX */)
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 281:
			if (Global_262145.f_17357 /* Tunable: ENABLESTUNT_ET1 */)
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 276:
			if (Global_262145.f_17371 /* Tunable: ENABLESTUNT_RALLY_TRUCK */)
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 277:
			if (Global_262145.f_17359 /* Tunable: ENABLESTUNT_DRIFT_TAMPA */)
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 278:
			if (Global_262145.f_17370 /* Tunable: ENABLESTUNT_GARGOYLE */)
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 282:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 283:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 284:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 285:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 286:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 287:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 288:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 289:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 290:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 291:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 292:
			if (Global_262145.f_17531 /* Tunable: ENABLE_BIKER_SHOTARO */ || __LIB_3__::func_576(24))
			{
				if (Global_262145.f_17602 /* Tunable: 1294035586 */ == 0)
				{
					return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
				}
				else if (Global_262145.f_17602 /* Tunable: 1294035586 */ == -1)
				{
					return -1;
				}
				else
				{
					iVar4 = __LIB_1__::func_360(3970, -1, 0);
					if (iVar4 >= Global_262145.f_17602 /* Tunable: 1294035586 */)
					{
						return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
					}
					return -1;
				}
			}
			else
			{
				return -1;
			}
			break;
		case 293:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 294:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 295:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 296:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 297:
			if (iVar0 || __LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 298:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 299:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 300:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 301:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 302:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 303:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 304:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 305:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 306:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 307:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 308:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 309:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 310:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 311:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 312:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 313:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 314:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 315:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 316:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 317:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 318:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 319:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 320:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 321:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 322:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 325:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 326:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 327:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 328:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 329:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 330:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 331:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 332:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 333:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 334:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 335:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 336:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 337:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 338:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 339:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 340:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 341:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 342:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 343:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 344:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 345:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 346:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 347:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 348:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 349:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 350:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 351:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 352:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 353:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 354:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 355:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 356:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 358:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 359:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 360:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 361:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 362:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 363:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 364:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 365:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 366:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 367:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 368:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 369:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 370:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 371:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 372:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 373:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 374:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 375:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 376:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 377:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 378:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 379:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 380:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 381:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 382:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 383:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 384:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 385:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 386:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 387:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 388:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 389:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 390:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 391:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 392:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 393:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 394:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 395:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 396:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 397:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 398:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 399:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 400:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 401:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 403:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 404:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 405:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 406:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 407:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 408:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 409:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 410:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 411:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 412:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 415:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 416:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 417:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 418:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 419:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 420:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 421:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 422:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 423:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 424:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 413:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 414:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 425:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 426:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 427:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 428:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 429:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 430:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 431:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 432:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 433:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 434:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 435:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 436:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 437:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 438:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 439:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 440:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 458:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				if (__LIB_0__::func_253(22063, -1) >= 20)
				{
					return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
				}
				else
				{
					return -1;
				}
			}
			else
			{
				return -1;
			}
			break;
		case 441:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 442:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 443:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 444:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 445:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 446:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 447:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 448:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 449:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, -1, bParam2);
			}
			else
			{
				return -1;
			}
			break;
	}
	switch (iParam1)
	{
		case 459:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 460:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 461:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 462:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 463:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 464:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 465:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 466:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 467:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 468:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 469:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 470:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 471:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 472:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 473:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 474:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 475:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 476:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 477:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 478:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 479:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 480:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 481:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 482:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 483:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 484:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 485:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 488:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 486:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 487:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 489:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 490:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 491:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 492:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 493:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 494:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 495:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 496:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 497:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 498:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 499:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 500:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 501:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 502:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 503:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 504:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 505:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 506:
		case 507:
		case 508:
		case 509:
		case 510:
		case 511:
		case 512:
		case 513:
		case 514:
		case 515:
		case 517:
		case 516:
		case 519:
		case 520:
		case 521:
		case 522:
		case 523:
		case 524:
		case 525:
		case 526:
		case 527:
		case 528:
		case 529:
		case 530:
		case 531:
		case 532:
		case 533:
		case 534:
		case 535:
		case 543:
		case 537:
		case 540:
		case 542:
		case 538:
		case 548:
		case 550:
		case 551:
		case 536:
		case 541:
		case 539:
		case 546:
		case 545:
		case 544:
		case 547:
		case 549:
		case 552:
		case 554:
		case 555:
		case 556:
		case 557:
		case 558:
		case 559:
		case 560:
		case 561:
		case 562:
		case 563:
		case 564:
		case 565:
		case 566:
		case 567:
		case 568:
		case 569:
		case 570:
		case 571:
		case 572:
		case 573:
		case 574:
		case 575:
		case 576:
		case 577:
		case 578:
		case 579:
		case 580:
		case 581:
		case 582:
			if (__LIB_7__::func_128(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_7__::func_130(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
	}
	iVar5 = func_418(iVar2, -1, bParam2);
	if (iVar5 != -1)
	{
		return uVar3;
	}
	return -1;
}

int func_418(int iParam0, int iParam1, bool bParam2)//Position - 0x57F27
{
	struct<4> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	char* sVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	StringCopy(&Var0, __LIB_7__::func_132(iParam0), 16);
	iVar1 = __LIB_1__::func_186(iParam0);
	if (bParam2)
	{
		switch (iVar1)
		{
			case 100:
				iVar1 = 170;
				break;
			case 77:
				iVar1 = 120;
				break;
			case 1:
				iVar1 = 119;
				break;
			case 72:
				iVar1 = 117;
				break;
			case 165:
				iVar1 = 166;
				break;
			case 49:
				iVar1 = 118;
				break;
			}
	}
	if (__LIB_3__::func_538())
	{
		if (__LIB_1__::func_185(iVar1) && bParam2)
		{
			switch (iVar1)
			{
				case 233:
					iParam0 = joaat("baller5");
					break;
				case 234:
					iParam0 = joaat("baller6");
					break;
				case 235:
					iParam0 = joaat("cog552");
					break;
				case 236:
					iParam0 = joaat("cognoscenti2");
					break;
				case 240:
					iParam0 = joaat("schafter5");
					break;
				case 241:
					iParam0 = joaat("schafter6");
					break;
				case 263:
					iParam0 = joaat("xls2");
					break;
				default:
					break;
			}
			StringCopy(&Var0, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iParam0), 16);
			bParam2 = false;
		}
		iVar2 = -1;
		iVar3 = 0;
		if (bParam2)
		{
			iVar3 = 1;
		}
		bVar4 = false;
		if (__LIB_11__::func_819(iVar1))
		{
			if (__LIB_7__::func_269())
			{
				bVar4 = true;
			}
		}
		if (func_475(iVar1))
		{
			iVar2 = __LIB_6__::func_921(iParam0, bParam2, -1, bVar4);
			iVar6 = __LIB_6__::func_363(iParam0);
			__LIB_4__::func_886(&sVar5, Var0, iParam0, 4, iVar3, iVar6, -1, -1, 0, bVar4);
		}
		else
		{
			iVar7 = -1;
			if (iVar1 == 200)
			{
				switch (Global_77051)
				{
					case 1:
						iVar3 = 0;
						break;
					case 2:
						iVar3 = 1;
						break;
					case 3:
						iVar3 = 2;
						break;
					case 4:
						iVar3 = 3;
						break;
					case 5:
						iVar3 = 4;
						break;
					case 6:
						iVar3 = 5;
						break;
					case 7:
						iVar3 = 6;
						break;
					case 8:
						iVar3 = 7;
						break;
					case 9:
						iVar3 = 8;
						break;
					case 10:
						iVar3 = 9;
						break;
					case 11:
						iVar3 = 10;
						break;
					case 12:
						iVar3 = 11;
						break;
					case 13:
						iVar3 = 12;
						break;
					case 14:
						iVar3 = 13;
						break;
					case 15:
						iVar3 = 14;
						break;
					case 16:
						iVar3 = 15;
						break;
					case 17:
						iVar3 = 16;
						break;
					case 18:
						iVar3 = 17;
						break;
					case 19:
						iVar3 = 18;
						break;
					case 20:
						iVar3 = 19;
						break;
					case 21:
						iVar3 = 20;
						break;
					case 22:
						iVar3 = 21;
						break;
					case 23:
						iVar3 = 22;
						break;
					case 24:
						iVar3 = 23;
						break;
					case 25:
						iVar3 = 24;
						break;
				}
			}
			else if (iVar1 == 413)
			{
				switch (Global_77051)
				{
					case 1:
						iVar3 = 0;
						break;
					case 2:
						iVar3 = 1;
						break;
					case 3:
						iVar3 = 2;
						break;
					case 4:
						iVar3 = 3;
						break;
					case 5:
						iVar3 = 4;
						break;
					case 6:
						iVar3 = 5;
						break;
					case 7:
						iVar3 = 6;
						break;
					case 8:
						iVar3 = 7;
						break;
				}
				if (bParam2)
				{
					iVar7 = 1;
				}
			}
			else if (iVar1 == 414)
			{
				switch (Global_77051)
				{
					case 1:
						iVar3 = 0;
						break;
					case 2:
						iVar3 = 1;
						break;
					case 3:
						iVar3 = 2;
						break;
					case 4:
						iVar3 = 3;
						break;
					case 5:
						iVar3 = 4;
						break;
					case 6:
						iVar3 = 5;
						break;
					case 7:
						iVar3 = 6;
						break;
					case 8:
						iVar3 = 7;
						break;
					case 9:
						iVar3 = 8;
						break;
					case 10:
						iVar3 = 9;
						break;
				}
				if (bParam2)
				{
					iVar7 = 1;
				}
			}
			iVar2 = func_473(iVar1, iVar3, iVar7, bVar4);
			func_419(&sVar5, iVar1, iVar3, iVar7, bVar4);
		}
		if (NETSHOPPING::NET_GAMESERVER_CATALOG_ITEM_KEY_IS_VALID(iVar2))
		{
			iVar8 = NETSHOPPING::NET_GAMESERVER_GET_PRICE(iVar2, joaat("CATEGORY_VEHICLE"), true);
			if (MISC::GET_HASH_KEY(&sVar5) != iVar2)
			{
			}
			else if (iVar8 == iParam1)
			{
			}
			else if (iVar8 == -1)
			{
			}
			return iVar8;
		}
		else
		{
			iVar9 = iParam1;
			if (iVar9 < 0)
			{
				if (__LIB_3__::func_563(&iVar10, iParam0, bParam2, -1))
				{
					iVar9 = iVar10;
				}
			}
			if (MISC::GET_HASH_KEY(&sVar5) == iVar2)
			{
			}
			return -2;
		}
	}
	if (__LIB_11__::func_819(iVar1))
	{
		if (__LIB_7__::func_269())
		{
			return 0;
		}
	}
	if (iParam1 < 0)
	{
		if (__LIB_3__::func_563(&uVar11, iParam0, bParam2, -1))
		{
			return uVar11;
		}
		return -1;
	}
	return iParam1;
}

void func_419(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x583BA
{
	int iVar0;
	struct<4> Var1;
	int iVar2;
	iVar0 = func_426(iParam1, iParam2);
	if (iVar0 == -1)
	{
		IntToString(sParam0, 0, 64);
		return;
	}
	if (iParam1 == 245)
	{
		StringCopy(sParam0, "VE_BIG_YACHT_t0_v0", 64);
		return;
	}
	if (iParam1 == 323)
	{
		StringCopy(sParam0, "VE_BIG_TRUCK_t0_v0", 64);
		return;
	}
	if (iParam1 == 324)
	{
		StringCopy(sParam0, "VE_BALLISTIC_EQUIPMENT_t0_v0", 64);
		return;
	}
	if (iParam1 == 357)
	{
		StringCopy(sParam0, "VE_BIG_PLANE_t0_v0", 64);
		return;
	}
	if (iParam1 == 402)
	{
		StringCopy(sParam0, "VE_HACKER_TRUCK_t0_v0", 64);
		return;
	}
	if (iParam1 == 518)
	{
		StringCopy(sParam0, "VE_KOSATKA_t0_v0", 64);
		return;
	}
	if (iParam1 == 449)
	{
		StringCopy(sParam0, "VE_RC_BANDITO_t0_v0", 64);
		return;
	}
	StringCopy(&Var1, __LIB_3__::func_562(iParam1), 16);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Var1) || MISC::GET_HASH_KEY(&Var1) == joaat("carnotfound"))
	{
		IntToString(sParam0, 0, 64);
		return;
	}
	iVar2 = __LIB_1__::func_344(iParam1, -1);
	if (iVar2 == 0)
	{
		IntToString(sParam0, 0, 64);
		return;
	}
	__LIB_4__::func_886(sParam0, Var1, iVar2, 4, 1, iParam2, -1, -1, 1, bParam4);
	if ((((__LIB_1__::func_182(iParam1) || __LIB_1__::func_181(iParam1)) || __LIB_1__::func_171(__LIB_1__::func_344(iParam1, -1)) != -1) || __LIB_7__::func_131(__LIB_1__::func_344(iParam1, -1)) != -1) || __LIB_1__::func_170(__LIB_1__::func_344(iParam1, -1)) != -1)
	{
		if (iParam1 == 200)
		{
			if (Global_262145.f_20267 /* Tunable: ENABLE_RETURNING_CONTENT_VEHICLE */)
			{
				if ((__LIB_1__::func_182(iParam1) && __LIB_0__::func_116()) || (__LIB_1__::func_181(iParam1) && !__LIB_22__::func_434(iParam1)))
				{
					__LIB_4__::func_886(sParam0, Var1, iVar2, 4, 1, iParam2, 1, -1, 1, bParam4);
				}
			}
		}
		else if (iParam2 != 0)
		{
			__LIB_4__::func_886(sParam0, Var1, iVar2, 4, 1, (iParam2 - 1), 1, -1, 1, bParam4);
		}
	}
	else if (iParam1 == 413)
	{
		__LIB_4__::func_886(sParam0, Var1, iVar2, 4, 1, iParam2, iParam3, -1, 1, bParam4);
	}
	else if ((((iParam1 == 414 || iParam1 == 527) || iParam1 == 531) || iParam1 == 533) || iParam1 == 525)
	{
		__LIB_4__::func_886(sParam0, Var1, iVar2, 4, 1, iParam2, iParam3, -1, 1, bParam4);
	}
}

int func_426(int iParam0, int iParam1)//Position - 0x58A32
{
	if (iParam0 == -1)
	{
		return -1;
	}
	switch (iParam0)
	{
		case 17:
			return 0;
		case 9:
			return 1;
		case 10:
			return 2;
		case 11:
			return 3;
		case 12:
			return 4;
		case 13:
			return 5;
		case 14:
			return 6;
		case 15:
			return 7;
		case 16:
			return 8;
		case 19:
			return 9;
		case 22:
			return 10;
		case 23:
			return 11;
		case 24:
			return 12;
		case 25:
			return 13;
		case 27:
			return 14;
		case 28:
			return 15;
		case 29:
			return 16;
		case 30:
			return 17;
		case 31:
			return 18;
		case 20:
			return 19;
		case 32:
			return 20;
		case 21:
			return 21;
		case 78:
			return 22;
		case 79:
			return 23;
		case 80:
			return 24;
		case 18:
			return 25;
		case 81:
			return 26;
		case 82:
			return 27;
		case 83:
			return 28;
		case 84:
			return 29;
		case 85:
			return 30;
		case 86:
			return 31;
		case 87:
			return 32;
		case 88:
			return 33;
		case 102:
			return 34;
		case 113:
			return 35;
		case 160:
			return 36;
		case 163:
			return 37;
		case 162:
			return 38;
		case 164:
			if (func_427(iParam0, 11, iParam1))
			{
				return 40;
			}
			return 39;
		case 199:
			return 41;
		case 201:
			return 42;
		case 200:
			switch (iParam1)
			{
				case 1:
					return 43;
				case 2:
					return 44;
				case 3:
					return 45;
				case 4:
					return 46;
				case 5:
					return 47;
				case 6:
					return 48;
				case 7:
					return 49;
				case 8:
					return 50;
				case 9:
					return 51;
				case 10:
					return 52;
				case 11:
					return 53;
				case 12:
					return 54;
				case 13:
					return 55;
				case 14:
					return 56;
				case 15:
					return 57;
				case 16:
					return 58;
				case 17:
					return 59;
				case 18:
					return 60;
				case 19:
					return 61;
				case 20:
					return 62;
				case 21:
					return 63;
				case 22:
					return 64;
				case 23:
					return 65;
				case 24:
					return 66;
				case 25:
					return 67;
				default:
			}
			return 43;
		case 171:
			return 68;
		case 187:
			return 69;
		case 177:
			return 70;
		case 183:
			return 71;
		case 185:
			return 72;
		case 184:
			return 73;
		case 188:
			return 74;
		case 173:
			return 75;
		case 178:
			return 76;
		case 186:
			return 77;
		case 215:
			return 78;
		case 217:
			return 79;
		case 224:
			return 80;
		case 237:
			return 81;
		case 243:
			return 82;
		case 244:
			return 83;
		case 245:
			return 84;
		case 253:
			return 85;
		case 254:
			return 86;
		case 256:
			return 87;
		case 257:
			return 88;
		case 258:
			return 89;
		case 276:
			if (func_427(iParam0, 16, iParam1))
			{
				return 91;
			}
			return 90;
		case 323:
			return 92;
		case 324:
			return 93;
		case 337:
			return 94;
		case 357:
			return 95;
		case 402:
			return 96;
		case 413:
			switch (iParam1)
			{
				case 1:
					return 97;
				case 2:
					return 98;
				case 3:
					return 99;
				case 4:
					return 100;
				case 5:
					return 101;
				case 6:
					return 102;
				case 7:
					return 103;
				case 8:
					return 104;
				default:
			}
			return 97;
		case 414:
			switch (iParam1)
			{
				case 1:
					return 105;
				case 2:
					return 106;
				case 3:
					return 107;
				case 4:
					return 108;
				case 5:
					return 109;
				case 6:
					return 110;
				case 7:
					return 111;
				case 8:
					return 112;
				case 9:
					return 113;
				case 10:
					return 114;
				default:
			}
			return 105;
		case 450:
			return 115;
		case 451:
			return 116;
		case 452:
			return 117;
		case 453:
			return 118;
		case 454:
			return 119;
		case 455:
			return 120;
		case 456:
			return 121;
		case 457:
			return 122;
		case 480:
			return 123;
		case 482:
			return 124;
		case 483:
			return 125;
		case 518:
			return 126;
			break;
		case 531:
			return 127;
			break;
		case 533:
			return 128;
			break;
		case 527:
			return 129;
			break;
		case 525:
			return 130;
	}
	return -1;
}

int func_427(int iParam0, int iParam1, int iParam2)//Position - 0x59035
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
	iVar0 = __LIB_1__::func_344(iParam0, -1);
	if (iParam0 == 164)
	{
		if (iParam2 == 2)
		{
			return 1;
		}
		return 0;
	}
	if (iParam0 == 276)
	{
		if (iParam2 == 2)
		{
			return 1;
		}
		return 0;
	}
	if (iParam0 == 95)
	{
		if (NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT())
		{
			return 1;
		}
		return 0;
	}
	else if ((iParam0 == 96 || iParam0 == 97) || iParam0 == 98)
	{
		if (__LIB_0__::func_116() && __LIB_0__::func_163())
		{
			return 1;
		}
		return 0;
	}
	if ((((iParam0 == 206 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) || (iParam0 == 207 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0 == 208 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0 == 209 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS()))
	{
		if (__LIB_0__::func_116())
		{
			return 1;
		}
		return 0;
	}
	if ((((iParam0 == 170 || iParam0 == 120) || iParam0 == 119) || iParam0 == 117) || iParam0 == 166)
	{
		return 1;
	}
	if (iParam0 == 221 || iParam0 == 135)
	{
		if (iParam1 == 26)
		{
			return 1;
		}
		return 0;
	}
	if (__LIB_1__::func_185(iParam0))
	{
		if (Global_77052)
		{
			return 1;
		}
		return 0;
	}
	iVar1 = __LIB_1__::func_810(iVar0);
	if (iVar1 != -1)
	{
		if (__LIB_1__::func_890(__LIB_1__::func_183(iVar0)))
		{
			return 1;
		}
		return 0;
	}
	if (__LIB_1__::func_182(iParam0))
	{
		if (__LIB_0__::func_116())
		{
			if ((iParam0 == 205 && Global_262145.f_20268 /* Tunable: ENABLE_RETURNING_CONTENT_DOD */) || (iParam0 != 205 && Global_262145.f_20267 /* Tunable: ENABLE_RETURNING_CONTENT_VEHICLE */))
			{
				return 1;
			}
			return 0;
		}
		return 0;
	}
	if (__LIB_1__::func_181(iParam0))
	{
		if (__LIB_22__::func_434(iParam0))
		{
			return 0;
		}
		return 1;
	}
	iVar2 = __LIB_1__::func_180(iVar0);
	if (iVar2 != -1)
	{
		if (__LIB_1__::func_889(__LIB_1__::func_179(iVar0)))
		{
			return 1;
		}
		return 0;
	}
	iVar3 = __LIB_1__::func_178(iVar0);
	if (iVar3 > 0)
	{
		if (__LIB_2__::func_461(iVar0))
		{
			return 1;
		}
		return 0;
	}
	iVar4 = __LIB_1__::func_177(iVar0);
	if (iVar4 != -1)
	{
		if (__LIB_2__::func_582(iVar0))
		{
			return 1;
		}
		return 0;
	}
	iVar5 = __LIB_1__::func_175(iVar0);
	if (iVar5 != -1)
	{
		if (__LIB_1__::func_887(iVar0))
		{
			return 1;
		}
		return 0;
	}
	iVar6 = __LIB_1__::func_173(iVar0);
	if (iVar6 != -1)
	{
		if (__LIB_2__::func_436(iVar0))
		{
			return 1;
		}
		return 0;
	}
	if ((iVar0 == joaat("firetruk") || iVar0 == joaat("boxville")) || iVar0 == joaat("stockade"))
	{
		if (__LIB_1__::func_885(iVar0))
		{
			return 0;
		}
		return 1;
	}
	iVar7 = __LIB_1__::func_171(iVar0);
	if (iVar7 != -1)
	{
		if (__LIB_1__::func_885(iVar0))
		{
			return 1;
		}
		return 0;
	}
	iVar8 = __LIB_1__::func_170(iVar0);
	if (iVar8 != -1)
	{
		if (__LIB_2__::func_460(iVar0))
		{
			return 1;
		}
		return 0;
	}
	iVar9 = __LIB_1__::func_165(iVar0);
	if (iVar9 != -1)
	{
		if (__LIB_2__::func_459(iVar0))
		{
			return 1;
		}
		return 0;
	}
	iVar10 = __LIB_1__::func_164(iVar0);
	if (iVar10 != -1)
	{
		if (__LIB_2__::func_458(iVar0))
		{
			return 1;
		}
		return 0;
	}
	iVar11 = __LIB_1__::func_160(iVar0);
	if (iVar11 != -1)
	{
		if (__LIB_2__::func_457(iVar0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_473(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x5C283
{
	char* sVar0;
	func_419(&sVar0, iParam0, iParam1, iParam2, bParam3);
	return MISC::GET_HASH_KEY(&sVar0);
}

int func_475(int iParam0)//Position - 0x5C88B
{
	if (func_426(iParam0, 0) == -1)
	{
		return 1;
	}
	return 0;
}

int func_484(int iParam0)//Position - 0x5CBAE
{
	int iVar0;
	iVar0 = __LIB_1__::func_186(iParam0);
	if (func_427(iVar0, -1, 0))
	{
		return 1;
	}
	return 0;
}

void func_485(int* iParam0)//Position - 0x5CBCE
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	iVar0 = -1;
	bVar2 = false;
	if (__LIB_9__::func_322(iParam0->f_388.f_66, -1))
	{
		__LIB_9__::func_321(iParam0->f_388.f_66, &iVar0);
		if (iVar0 != -1)
		{
			iParam0->f_1 = __LIB_12__::func_56(1, 0, iParam0->f_388.f_66, iVar0, -1, 0);
			iParam0->f_2 = __LIB_13__::func_406(1, 0, iParam0->f_388.f_66, iVar0, -1, 0);
			if (iParam0->f_1 > -1 && iParam0->f_2 > -1)
			{
				__LIB_7__::func_148(iParam0, 4);
				return;
			}
		}
		else
		{
			iVar1 = -1;
		}
		if (iVar1 == -1 || iParam0->f_2 == -1)
		{
			if (!BitTest(iParam0->f_12.f_370, 7))
			{
				if (func_490(&(iParam0->f_12), &(iParam0->f_1), &(iParam0->f_2), iParam0->f_388.f_66, 0, -1, 1))
				{
					if (BitTest(iParam0->f_12.f_370, 7))
					{
						__LIB_7__::func_148(iParam0, 5);
						return;
					}
					else if (iParam0->f_1 > -1 && iParam0->f_2 > -1)
					{
						__LIB_7__::func_148(iParam0, 4);
						return;
					}
				}
			}
			else
			{
				MISC::CLEAR_BIT(&(iParam0->f_12.f_370), 7);
				__LIB_7__::func_148(iParam0, 5);
				return;
			}
		}
	}
	else if (!__LIB_1__::func_840(iParam0->f_388.f_66) && !VEHICLE::IS_THIS_MODEL_A_BICYCLE(iParam0->f_388.f_66))
	{
		if (__LIB_4__::func_867())
		{
			iVar4 = 0;
			while (iVar4 < 363)
			{
				if (__LIB_8__::func_889(iVar4))
				{
					bVar2 = true;
					iVar4 = 364;
				}
				iVar4++;
			}
			iVar3 = 18;
			if (bVar2)
			{
				HUD::SET_WARNING_MESSAGE_WITH_HEADER("BRSCRWTEX" /* GXT: Alert */, "PURCHASE_VEH_V1" /* GXT: The new vehicle will replace your current impounded Personal Vehicle. */, iVar3, 0, false, -1, 0, 0, true, 0);
			}
			else
			{
				HUD::SET_WARNING_MESSAGE_WITH_HEADER("BRSCRWTEX" /* GXT: Alert */, "PURCHASE_VEH_V2" /* GXT: The new vehicle will replace your current Personal Vehicle. */, iVar3, 0, false, -1, 0, 0, true, 0);
			}
			if (HUD::IS_WARNING_MESSAGE_ACTIVE())
			{
				if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/) || __LIB_3__::func_528())
				{
					__LIB_7__::func_148(iParam0, 5);
					return;
				}
				else if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
				{
					iParam0->f_1 = 0;
					iParam0->f_2 = 0;
					__LIB_7__::func_148(iParam0, 4);
					return;
				}
			}
		}
		else if (BitTest(Global_1585857[0 /*142*/].f_103, 2))
		{
			iVar3 = 18;
			HUD::SET_WARNING_MESSAGE_WITH_HEADER("BRSCRWTEX" /* GXT: Alert */, "CASINO_PRIZE_V2" /* GXT: This vehicle prize will replace your current Personal Vehicle. */, iVar3, 0, false, -1, 0, 0, true, 0);
			if (HUD::IS_WARNING_MESSAGE_ACTIVE())
			{
				if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/) || __LIB_3__::func_528())
				{
					__LIB_7__::func_148(iParam0, 5);
					return;
				}
				else if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
				{
					iParam0->f_1 = 0;
					iParam0->f_2 = 0;
					__LIB_7__::func_148(iParam0, 4);
					return;
				}
			}
		}
		else
		{
			iParam0->f_1 = 0;
			iParam0->f_2 = 0;
			__LIB_7__::func_148(iParam0, 4);
			return;
		}
	}
}

int func_490(var uParam0, int iParam1, var uParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)//Position - 0x5CED5
{
	bool bVar0;
	bool bVar1;
	if ((((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || !__LIB_0__::func_156(PLAYER::PLAYER_ID(), 1, 1)) || __LIB_0__::func_983()) || Global_1574964) || Global_2715699.f_3479.f_32)
	{
		*iParam1 = -1;
		__LIB_7__::func_368(uParam0, iParam5, 0);
		return 1;
	}
	bVar0 = false;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	__LIB_1__::func_733();
	__LIB_0__::func_189();
	PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/);
	PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/);
	PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 189 /*INPUT_FRONTEND_LEFT*/);
	PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 190 /*INPUT_FRONTEND_RIGHT*/);
	PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 241 /*INPUT_CURSOR_SCROLL_UP*/);
	PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 242 /*INPUT_CURSOR_SCROLL_DOWN*/);
	PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 180 /*INPUT_CELLPHONE_SCROLL_FORWARD*/);
	PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 181 /*INPUT_CELLPHONE_SCROLL_BACKWARD*/);
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/);
		PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, 257 /*INPUT_ATTACK2*/);
		PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/, true);
		PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 238 /*INPUT_CURSOR_CANCEL*/, true);
		PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 242 /*INPUT_CURSOR_SCROLL_DOWN*/, true);
		PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 241 /*INPUT_CURSOR_SCROLL_UP*/, true);
		PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 2 /*INPUT_LOOK_UD*/, true);
		PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 1 /*INPUT_LOOK_LR*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 257 /*INPUT_ATTACK2*/, true);
		if (!HUD::IS_PAUSE_MENU_ACTIVE() && !HUD::IS_WARNING_MESSAGE_ACTIVE())
		{
			PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/);
			PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/);
		}
		__LIB_3__::func_567(0, 0, 0, 1);
		HUD::SET_MOUSE_CURSOR_THIS_FRAME();
	}
	MISC::SET_BIT(&(uParam0->f_370), 1);
	if (__LIB_3__::func_67(0, iParam5, 0))
	{
		if (__LIB_0__::func_156(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!BitTest(uParam0->f_370, 0))
			{
				func_542(uParam0, iParam3, bParam4);
				MISC::SET_BIT(&(uParam0->f_370), 0);
				__LIB_11__::func_959(uParam0, bParam4, bVar1, iParam3, bParam6);
				__LIB_11__::func_266(1, iParam5, 1, 0, 1, -1082130432, 0, 0, -1);
			}
			else if ((!HUD::IS_PAUSE_MENU_ACTIVE() && !__LIB_0__::func_194(8, -1)) && !Global_2714762.f_785.f_5)
			{
				if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
				{
					if (__LIB_3__::func_51())
					{
						if (uParam0->f_366 == 0)
						{
							if (Global_4539961 != uParam0->f_367)
							{
								uParam0->f_367 = Global_4539961;
								AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FREEMODE_SOUNDSET", true);
								MISC::CLEAR_BIT(&(uParam0->f_370), 0);
							}
							else
							{
								bVar0 = true;
							}
						}
						else if (Global_4539961 != uParam0->f_368)
						{
							uParam0->f_368 = Global_4539961;
							AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FREEMODE_SOUNDSET", true);
							MISC::CLEAR_BIT(&(uParam0->f_370), 0);
						}
						else
						{
							bVar0 = true;
						}
					}
				}
				if (!BitTest(uParam0->f_373, 0))
				{
					if (((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) || __LIB_3__::func_540()) || bVar0) || (HUD::IS_WARNING_MESSAGE_ACTIVE() && PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/)))
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT" /* GXT: Filter List */, "HUD_FREEMODE_SOUNDSET", true);
						if (uParam0->f_366 == 0)
						{
							uParam0->f_375 = 0;
							if (uParam0->f_367 >= 0 && uParam0->f_1[uParam0->f_367] >= 0)
							{
								*uParam2 = __LIB_13__::func_406(1, 0, iParam3, __LIB_2__::func_771(uParam0->f_1[uParam0->f_367], -1), -1, 0);
								if (*uParam2 >= 0)
								{
									__LIB_1__::func_775(*uParam2, iParam1, 1);
									if (*iParam1 < 0)
									{
										*iParam1 = __LIB_12__::func_56(1, 0, iParam3, 0, -1, 0);
									}
								}
								if (*iParam1 >= 0 && *uParam2 >= 0)
								{
									MISC::CLEAR_BIT(&(uParam0->f_370), 0);
									__LIB_7__::func_368(uParam0, iParam5, 0);
									return 1;
								}
							}
							else if (uParam0->f_367 < 0)
							{
							}
							if (uParam0->f_367 < 0)
							{
								uParam0->f_375 = 0;
							}
							else
							{
								uParam0->f_375 = uParam0->f_1[uParam0->f_367];
							}
							uParam0->f_366 = 1;
							MISC::CLEAR_BIT(&(uParam0->f_370), 0);
							bVar1 = true;
						}
						else if (!BitTest(uParam0->f_373, 2) && !BitTest(uParam0->f_365, uParam0->f_368))
						{
							__LIB_3__::func_564(-1);
							__LIB_1__::func_791(176, "BB_YES" /* GXT: Yes */, -1);
							__LIB_1__::func_791(177, "BB_NO" /* GXT: No */, -1);
							MISC::SET_BIT(&(uParam0->f_373), 2);
						}
						else if (uParam0->f_368 >= 0)
						{
							*uParam2 = uParam0->f_1[uParam0->f_368];
							__LIB_1__::func_775(*uParam2, iParam1, 1);
							if (*iParam1 < 0)
							{
								*iParam1 = __LIB_12__::func_56(1, 0, iParam3, 0, -1, 0);
							}
							if (*iParam1 >= 0 && *uParam2 >= 0)
							{
								MISC::CLEAR_BIT(&(uParam0->f_370), 0);
								__LIB_7__::func_368(uParam0, iParam5, 0);
							}
							else
							{
								__LIB_7__::func_368(uParam0, iParam5, 0);
								*iParam1 = -1;
								return 1;
							}
							return 1;
						}
						MISC::SET_BIT(&(uParam0->f_373), 0);
					}
				}
				else if (!PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) && !bVar0)
				{
					MISC::CLEAR_BIT(&(uParam0->f_373), 0);
				}
				if (!BitTest(uParam0->f_373, 1))
				{
					if ((((__LIB_3__::func_539() || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 238 /*INPUT_CURSOR_CANCEL*/)) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/)) || (__LIB_3__::func_528() && Global_4539961 > -1)) || (HUD::IS_WARNING_MESSAGE_ACTIVE() && PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/)))
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "CANCEL", "HUD_FREEMODE_SOUNDSET", true);
						if (uParam0->f_366 == 0)
						{
							__LIB_11__::func_959(uParam0, bParam4, bVar1, iParam3, bParam6);
							__LIB_11__::func_266(1, iParam5, 1, 0, 1, -1082130432, 0, 0, -1);
							__LIB_7__::func_368(uParam0, iParam5, 1);
							*iParam1 = -1;
							MISC::SET_BIT(&(uParam0->f_370), 7);
							return 1;
						}
						else if (!BitTest(uParam0->f_373, 2))
						{
							uParam0->f_366 = 0;
							bVar1 = true;
							MISC::CLEAR_BIT(&(uParam0->f_370), 0);
						}
						else
						{
							__LIB_3__::func_564(-1);
							__LIB_1__::func_791(176, "BB_SELECT" /* GXT: Select */, -1);
							__LIB_1__::func_791(177, "BB_BACK" /* GXT: Back */, -1);
							MISC::CLEAR_BIT(&(uParam0->f_373), 2);
						}
						MISC::SET_BIT(&(uParam0->f_373), 1);
					}
				}
				else if ((!PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/) && !PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 238 /*INPUT_CURSOR_CANCEL*/)) && !__LIB_3__::func_539())
				{
					MISC::CLEAR_BIT(&(uParam0->f_373), 1);
				}
				if (!BitTest(uParam0->f_373, 2))
				{
					if (!BitTest(uParam0->f_373, 4))
					{
						if ((PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 172 /*INPUT_CELLPHONE_UP*/) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 172 /*INPUT_CELLPHONE_UP*/)) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 241 /*INPUT_CURSOR_SCROLL_UP*/))
						{
							if (uParam0->f_366 == 0)
							{
								uParam0->f_367 = (uParam0->f_367 - 1);
							}
							else
							{
								uParam0->f_368 = (uParam0->f_368 - 1);
							}
							AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FREEMODE_SOUNDSET", true);
							MISC::SET_BIT(&(uParam0->f_373), 4);
							MISC::CLEAR_BIT(&(uParam0->f_370), 0);
							__LIB_0__::func_794(&(uParam0->f_371));
						}
					}
					else if (__LIB_7__::func_272(uParam0, 172))
					{
						MISC::CLEAR_BIT(&(uParam0->f_373), 4);
					}
					if (!BitTest(uParam0->f_373, 5))
					{
						if ((PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 173 /*INPUT_CELLPHONE_DOWN*/) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 173 /*INPUT_CELLPHONE_DOWN*/)) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 242 /*INPUT_CURSOR_SCROLL_DOWN*/))
						{
							if (uParam0->f_366 == 0)
							{
								uParam0->f_367++;
							}
							else
							{
								uParam0->f_368++;
							}
							AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FREEMODE_SOUNDSET", true);
							MISC::SET_BIT(&(uParam0->f_373), 5);
							MISC::CLEAR_BIT(&(uParam0->f_370), 0);
							__LIB_0__::func_794(&(uParam0->f_371));
						}
					}
					else if (__LIB_7__::func_272(uParam0, 173))
					{
						MISC::CLEAR_BIT(&(uParam0->f_373), 5);
					}
				}
				if (uParam0->f_366 == 0)
				{
					if (uParam0->f_367 >= uParam0->f_369)
					{
						uParam0->f_367 = 0;
					}
					if (uParam0->f_367 < 0)
					{
						uParam0->f_367 = (uParam0->f_369 - 1);
					}
				}
				else
				{
					if (uParam0->f_368 >= uParam0->f_369)
					{
						uParam0->f_368 = 0;
					}
					if (uParam0->f_368 < 0)
					{
						uParam0->f_368 = (uParam0->f_369 - 1);
					}
				}
				__LIB_11__::func_959(uParam0, bParam4, bVar1, iParam3, bParam6);
				if (!BitTest(uParam0->f_373, 2) && !HUD::IS_WARNING_MESSAGE_ACTIVE())
				{
					__LIB_11__::func_266(1, iParam5, 1, 0, 1, -1082130432, 0, 0, -1);
				}
			}
		}
	}
	return 0;
}

void func_542(var uParam0, int iParam1, bool bParam2)//Position - 0x62419
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<2> Var6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	struct<3> Var12;
	struct<16> Var13;
	struct<4> Var14;
	iVar0 = 0;
	__LIB_1__::func_602(0, 0);
	if (bParam2)
	{
		__LIB_8__::func_891(__LIB_7__::func_139(), 0);
	}
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_4__::func_846(0, 0, 0, 0, 0);
	bVar2 = false;
	bVar7 = __LIB_1__::func_819(iParam1);
	iVar11 = 1;
	switch (uParam0->f_366)
	{
		case 0:
			uParam0->f_375 = 0;
			__LIB_1__::func_767("DEL_VEH_SEL0" /* GXT: SELECT PROPERTY */);
			iVar1 = 0;
			while (iVar1 < 29)
			{
				iVar3 = __LIB_2__::func_771(iVar1, -1);
				if ((iVar3 > 0 && __LIB_3__::func_529(iVar3)) && __LIB_9__::func_293(iVar1))
				{
					if (!__LIB_3__::func_561(iParam1, iVar1))
					{
					}
					else
					{
						Var14 = { Global_1312193[iVar3 /*1951*/].f_16 };
						if (iVar3 == 116)
						{
							StringCopy(&Var14, __LIB_3__::func_552(__LIB_1__::func_380(PLAYER::PLAYER_ID())), 16);
						}
						if (iVar3 == 117)
						{
							StringCopy(&Var14, __LIB_3__::func_551(__LIB_1__::func_817(PLAYER::PLAYER_ID())), 16);
						}
						if (iVar3 == 118)
						{
							StringCopy(&Var14, "MP_BHUB_CLUBG" /* GXT: Nightclub Service Entrance */, 16);
						}
						if (iVar3 == 119)
						{
							StringCopy(&Var14, __LIB_3__::func_550(1), 16);
						}
						if (iVar3 == 120)
						{
							StringCopy(&Var14, __LIB_3__::func_550(2), 16);
						}
						if (iVar3 == 121)
						{
							StringCopy(&Var14, __LIB_3__::func_550(3), 16);
						}
						if (iVar3 == 122)
						{
							StringCopy(&Var14, __LIB_3__::func_549(1), 16);
						}
						if (iVar3 == 123)
						{
							StringCopy(&Var14, __LIB_3__::func_549(2), 16);
						}
						if (iVar3 == 124)
						{
							StringCopy(&Var14, __LIB_3__::func_549(3), 16);
						}
						if (iVar3 == 125)
						{
							StringCopy(&Var14, "CASINO_GARNAME" /* GXT: Casino Penthouse Garage */, 16);
						}
						if (iVar3 == 126)
						{
							StringCopy(&Var14, "ARCADE_GARNAME" /* GXT: Arcade Garage */, 16);
						}
						if (iVar3 == 127)
						{
							StringCopy(&Var14, "AUT_SHP_GAR" /* GXT: Auto Shop Storage */, 16);
						}
						if (iVar3 == 128)
						{
							StringCopy(&Var14, "FIXER_GARNAME" /* GXT: Agency Garage */, 16);
						}
						if (!__LIB_7__::func_137())
						{
							if (!__LIB_7__::func_136() && !__LIB_7__::func_135(iVar3))
							{
								__LIB_3__::func_572(iVar0, &Var14, 0, 1, 0, 0, 0);
							}
							else
							{
								Var6 = { Var14 };
								StringConCat(&Var6, "S", 16);
								__LIB_3__::func_572(iVar0, &Var6, 0, 1, 0, 0, 0);
							}
						}
						else
						{
							__LIB_3__::func_572(iVar0, "PIM_DNAME" /* GXT: ~a~ */, 1, 1, 0, 0, 0);
							__LIB_31__::func_852(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&Var14), 0, 1, 1);
						}
						uParam0->f_1[iVar0] = iVar1;
						iVar0++;
					}
				}
				iVar1++;
			}
			if (((((__LIB_1__::func_360(5396, -1, 0) != 0 && __LIB_0__::func_253(15270, -1) == 7) && !Global_262145.f_21126 /* Tunable: DISABLE_STORE_PV */) && __LIB_8__::func_996(iParam1, 156)) && !VEHICLE::IS_THIS_MODEL_A_HELI(iParam1)) && !VEHICLE::IS_THIS_MODEL_A_PLANE(iParam1))
			{
				__LIB_3__::func_572(iVar0, __LIB_3__::func_548(0), 0, 1, 0, 0, 0);
				uParam0->f_1[iVar0] = __LIB_3__::func_547(0);
				iVar0++;
			}
			if (__LIB_1__::func_869(-1) && __LIB_8__::func_996(iParam1, 223))
			{
				__LIB_3__::func_572(iVar0, __LIB_3__::func_548(2), 0, 1, 0, 0, 0);
				uParam0->f_1[iVar0] = __LIB_3__::func_547(2);
				iVar0++;
			}
			if (__LIB_1__::func_868(-1) && __LIB_8__::func_996(iParam1, 278))
			{
				__LIB_3__::func_572(iVar0, __LIB_3__::func_548(3), 0, 1, 0, 0, 0);
				uParam0->f_1[iVar0] = __LIB_3__::func_547(3);
				iVar0++;
			}
			uParam0->f_369 = iVar0;
			__LIB_3__::func_110(uParam0->f_367, 1, 1);
			break;
		case 1:
			if (VEHICLE::IS_THIS_MODEL_A_HELI(iParam1) || VEHICLE::IS_THIS_MODEL_A_PLANE(iParam1))
			{
				__LIB_1__::func_767("DEL_VEH_SEL3ac" /* GXT: Select Aircraft Position */);
			}
			else
			{
				__LIB_1__::func_767("DEL_VEH_SEL3" /* GXT: Select Vehicle Position */);
			}
			uParam0->f_365 = 0;
			iVar4 = __LIB_4__::func_982(uParam0->f_375);
			iVar5 = (10 + __LIB_4__::func_982(uParam0->f_375));
			if (uParam0->f_375 >= 29)
			{
				iVar10 = __LIB_1__::func_596(uParam0->f_375);
				iVar1 = 0;
				while (iVar1 < __LIB_3__::func_546(iVar10))
				{
					iVar8 = (iVar1 + iVar4);
					if (!bVar7)
					{
						if (__LIB_1__::func_770(iVar8))
						{
							bVar2 = true;
						}
					}
					else if (!__LIB_1__::func_770(iVar8))
					{
						bVar2 = true;
					}
					if (!__LIB_8__::func_996(iParam1, iVar8))
					{
						bVar2 = true;
					}
					if (!bVar2)
					{
						__LIB_1__::func_775(iVar8, &iVar9, 1);
						if ((iVar9 >= 0 && Global_1585857[iVar9 /*142*/].f_66 != 0) && STREAMING::IS_MODEL_IN_CDIMAGE(Global_1585857[iVar9 /*142*/].f_66))
						{
							iVar11 = 1;
							StringCopy(&Var12, "", 24);
							if (__LIB_3__::func_545(&(Global_1585857[iVar9 /*142*/])))
							{
								iVar11++;
							}
							if (__LIB_3__::func_544(Global_1585857[iVar9 /*142*/].f_66, Global_1585857[iVar9 /*142*/].f_77, Global_1585857[iVar9 /*142*/].f_9[10]) && __LIB_3__::func_543(Global_1585857[iVar9 /*142*/].f_66))
							{
								iVar11++;
							}
							Var13 = { __LIB_8__::func_890(-1, iVar8, 1) };
							if (BitTest(Global_1585857[iVar9 /*142*/].f_103, 1))
							{
								if (BitTest(Global_1585857[iVar9 /*142*/].f_103, 2) && !bVar7)
								{
									StringCopy(&Var12, "MP_MAN_VEH_S0" /* GXT: ~a~ ~a~ (Destroyed) */, 24);
									StringIntConCat(&Var12, iVar11, 24);
									__LIB_3__::func_572(iVar0, &Var12, iVar11, 1, 0, 0, 0);
									if (MISC::IS_STRING_NULL_OR_EMPTY(&Var13))
									{
										__LIB_31__::func_851(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_1585857[iVar9 /*142*/].f_66), 0);
									}
									else
									{
										__LIB_31__::func_850(&Var13, 0, 0, 1);
									}
									if (__LIB_3__::func_545(&(Global_1585857[iVar9 /*142*/])))
									{
										__LIB_31__::func_851("VEH_LIVERY" /* GXT: (Livery) */, 0);
									}
									if (__LIB_3__::func_544(Global_1585857[iVar9 /*142*/].f_66, Global_1585857[iVar9 /*142*/].f_77, Global_1585857[iVar9 /*142*/].f_9[10]) && __LIB_3__::func_543(Global_1585857[iVar9 /*142*/].f_66))
									{
										__LIB_31__::func_851("VEH_TOPL" /* GXT: Topless */, 0);
									}
									uParam0->f_1[iVar0] = iVar8;
									iVar0++;
								}
								else
								{
									__LIB_3__::func_572(iVar0, "MP_MAN_VEH_S" /* GXT: Empty */, 0, 1, 0, 0, 0);
									uParam0->f_1[iVar0] = iVar8;
									MISC::SET_BIT(&(uParam0->f_365), iVar0);
									iVar0++;
								}
							}
							else if (bVar7)
							{
								if (__LIB_1__::func_819(Global_1585857[iVar9 /*142*/].f_66))
								{
									if (BitTest(Global_1585857[iVar9 /*142*/].f_103, 6))
									{
										StringCopy(&Var12, "MP_MAN_VEH_S1" /* GXT: ~a~ ~a~ (Impounded) */, 24);
										StringIntConCat(&Var12, iVar11, 24);
										__LIB_3__::func_572(iVar0, &Var12, iVar11, 1, 0, 0, 0);
										if (MISC::IS_STRING_NULL_OR_EMPTY(&Var13))
										{
											__LIB_31__::func_851(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_1585857[iVar9 /*142*/].f_66), 0);
										}
										else
										{
											__LIB_31__::func_850(&Var13, 0, 0, 1);
										}
										if (__LIB_3__::func_545(&(Global_1585857[iVar9 /*142*/])))
										{
											__LIB_31__::func_851("VEH_LIVERY" /* GXT: (Livery) */, 0);
										}
										if (__LIB_3__::func_544(Global_1585857[iVar9 /*142*/].f_66, Global_1585857[iVar9 /*142*/].f_77, Global_1585857[iVar9 /*142*/].f_9[10]) && __LIB_3__::func_543(Global_1585857[iVar9 /*142*/].f_66))
										{
											__LIB_31__::func_851("VEH_TOPL" /* GXT: Topless */, 0);
										}
									}
									else
									{
										StringCopy(&Var12, "PIL_MP_VEH_0" /* GXT: ~a~ ~a~ */, 24);
										StringIntConCat(&Var12, iVar11, 24);
										__LIB_3__::func_572(iVar0, &Var12, iVar11, 1, 0, 0, 0);
										if (MISC::IS_STRING_NULL_OR_EMPTY(&Var13))
										{
											__LIB_31__::func_851(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_1585857[iVar9 /*142*/].f_66), 0);
										}
										else
										{
											__LIB_31__::func_850(&Var13, 0, 0, 1);
										}
										if (__LIB_3__::func_545(&(Global_1585857[iVar9 /*142*/])))
										{
											__LIB_31__::func_851("VEH_LIVERY" /* GXT: (Livery) */, 0);
										}
										if (__LIB_3__::func_544(Global_1585857[iVar9 /*142*/].f_66, Global_1585857[iVar9 /*142*/].f_77, Global_1585857[iVar9 /*142*/].f_9[10]) && __LIB_3__::func_543(Global_1585857[iVar9 /*142*/].f_66))
										{
											__LIB_31__::func_851("VEH_TOPL" /* GXT: Topless */, 0);
										}
									}
									uParam0->f_1[iVar0] = iVar8;
									iVar0++;
								}
							}
							else if (!__LIB_1__::func_819(Global_1585857[iVar9 /*142*/].f_66))
							{
								if (BitTest(Global_1585857[iVar9 /*142*/].f_103, 6))
								{
									StringCopy(&Var12, "MP_MAN_VEH_S1" /* GXT: ~a~ ~a~ (Impounded) */, 24);
									StringIntConCat(&Var12, iVar11, 24);
									__LIB_3__::func_572(iVar0, &Var12, iVar11, 1, 0, 0, 0);
									if (MISC::IS_STRING_NULL_OR_EMPTY(&Var13))
									{
										__LIB_31__::func_851(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_1585857[iVar9 /*142*/].f_66), 0);
									}
									else
									{
										__LIB_31__::func_850(&Var13, 0, 0, 1);
									}
									if (__LIB_3__::func_545(&(Global_1585857[iVar9 /*142*/])))
									{
										__LIB_31__::func_851("VEH_LIVERY" /* GXT: (Livery) */, 0);
									}
									if (__LIB_3__::func_544(Global_1585857[iVar9 /*142*/].f_66, Global_1585857[iVar9 /*142*/].f_77, Global_1585857[iVar9 /*142*/].f_9[10]) && __LIB_3__::func_543(Global_1585857[iVar9 /*142*/].f_66))
									{
										__LIB_31__::func_851("VEH_TOPL" /* GXT: Topless */, 0);
									}
								}
								else
								{
									StringCopy(&Var12, "PIL_MP_VEH_0" /* GXT: ~a~ ~a~ */, 24);
									StringIntConCat(&Var12, iVar11, 24);
									__LIB_3__::func_572(iVar0, &Var12, iVar11, 1, 0, 0, 0);
									if (MISC::IS_STRING_NULL_OR_EMPTY(&Var13))
									{
										__LIB_31__::func_851(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_1585857[iVar9 /*142*/].f_66), 0);
									}
									else
									{
										__LIB_31__::func_850(&Var13, 0, 0, 1);
									}
									if (__LIB_3__::func_545(&(Global_1585857[iVar9 /*142*/])))
									{
										__LIB_31__::func_851("VEH_LIVERY" /* GXT: (Livery) */, 0);
									}
									if (__LIB_3__::func_544(Global_1585857[iVar9 /*142*/].f_66, Global_1585857[iVar9 /*142*/].f_77, Global_1585857[iVar9 /*142*/].f_9[10]) && __LIB_3__::func_543(Global_1585857[iVar9 /*142*/].f_66))
									{
										__LIB_31__::func_851("VEH_TOPL" /* GXT: Topless */, 0);
									}
								}
								uParam0->f_1[iVar0] = iVar8;
								iVar0++;
							}
						}
						else
						{
							__LIB_3__::func_572(iVar0, "MP_MAN_VEH_S" /* GXT: Empty */, 0, 1, 0, 0, 0);
							uParam0->f_1[iVar0] = iVar8;
							MISC::SET_BIT(&(uParam0->f_365), iVar0);
							iVar0++;
						}
					}
					iVar1++;
				}
			}
			else
			{
				iVar3 = __LIB_2__::func_771(uParam0->f_375, -1);
				iVar1 = 0;
				while (iVar1 < __LIB_3__::func_2(uParam0->f_375, -1, 1))
				{
					iVar8 = (iVar1 + iVar4);
					bVar2 = false;
					if (iVar3 <= 0)
					{
						bVar2 = true;
					}
					else if (Global_1312193[iVar3 /*1951*/].f_33 == 2)
					{
						if (iVar8 >= iVar4 + 2 && iVar8 != iVar5)
						{
							bVar2 = true;
						}
					}
					else if (Global_1312193[iVar3 /*1951*/].f_33 == 6)
					{
						if ((iVar8 >= iVar4 + 6 && iVar8 != iVar5) && iVar8 != iVar5 + 1)
						{
							bVar2 = true;
						}
					}
					if (!bVar7)
					{
						if (iVar8 >= iVar5 && __LIB_1__::func_770(iVar8))
						{
							bVar2 = true;
						}
					}
					else if (iVar8 < iVar5)
					{
						bVar2 = true;
					}
					if (!__LIB_6__::func_442(iVar8, iVar3, uParam0->f_375))
					{
						bVar2 = true;
					}
					if (!__LIB_8__::func_996(iParam1, iVar8))
					{
						bVar2 = true;
					}
					if (!bVar2)
					{
						__LIB_1__::func_775(iVar8, &iVar9, 1);
						if ((iVar9 >= 0 && Global_1585857[iVar9 /*142*/].f_66 != 0) && STREAMING::IS_MODEL_IN_CDIMAGE(Global_1585857[iVar9 /*142*/].f_66))
						{
							iVar11 = 1;
							StringCopy(&Var12, "", 24);
							if (__LIB_3__::func_545(&(Global_1585857[iVar9 /*142*/])))
							{
								iVar11++;
							}
							if (__LIB_3__::func_544(Global_1585857[iVar9 /*142*/].f_66, Global_1585857[iVar9 /*142*/].f_77, Global_1585857[iVar9 /*142*/].f_9[10]) && __LIB_3__::func_543(Global_1585857[iVar9 /*142*/].f_66))
							{
								iVar11++;
							}
							Var13 = { __LIB_8__::func_890(-1, iVar8, 1) };
							if (BitTest(Global_1585857[iVar9 /*142*/].f_103, 1))
							{
								if (BitTest(Global_1585857[iVar9 /*142*/].f_103, 2) && !bVar7)
								{
									StringCopy(&Var12, "MP_MAN_VEH_S0" /* GXT: ~a~ ~a~ (Destroyed) */, 24);
									StringIntConCat(&Var12, iVar11, 24);
									__LIB_3__::func_572(iVar0, &Var12, iVar11, 1, 0, 0, 0);
									if (MISC::IS_STRING_NULL_OR_EMPTY(&Var13))
									{
										__LIB_31__::func_851(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_1585857[iVar9 /*142*/].f_66), 0);
									}
									else
									{
										__LIB_31__::func_850(&Var13, 0, 0, 1);
									}
									if (__LIB_3__::func_545(&(Global_1585857[iVar9 /*142*/])))
									{
										__LIB_31__::func_851("VEH_LIVERY" /* GXT: (Livery) */, 0);
									}
									if (__LIB_3__::func_544(Global_1585857[iVar9 /*142*/].f_66, Global_1585857[iVar9 /*142*/].f_77, Global_1585857[iVar9 /*142*/].f_9[10]) && __LIB_3__::func_543(Global_1585857[iVar9 /*142*/].f_66))
									{
										__LIB_31__::func_851("VEH_TOPL" /* GXT: Topless */, 0);
									}
									uParam0->f_1[iVar0] = iVar8;
									iVar0++;
								}
								else
								{
									__LIB_3__::func_572(iVar0, "MP_MAN_VEH_S" /* GXT: Empty */, 0, 1, 0, 0, 0);
									uParam0->f_1[iVar0] = iVar8;
									MISC::SET_BIT(&(uParam0->f_365), iVar0);
									iVar0++;
								}
							}
							else if (bVar7)
							{
								if (__LIB_1__::func_819(Global_1585857[iVar9 /*142*/].f_66))
								{
									if (BitTest(Global_1585857[iVar9 /*142*/].f_103, 6))
									{
										StringCopy(&Var12, "MP_MAN_VEH_S1" /* GXT: ~a~ ~a~ (Impounded) */, 24);
										StringIntConCat(&Var12, iVar11, 24);
										__LIB_3__::func_572(iVar0, &Var12, iVar11, 1, 0, 0, 0);
										if (MISC::IS_STRING_NULL_OR_EMPTY(&Var13))
										{
											__LIB_31__::func_851(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_1585857[iVar9 /*142*/].f_66), 0);
										}
										else
										{
											__LIB_31__::func_850(&Var13, 0, 0, 1);
										}
										if (__LIB_3__::func_545(&(Global_1585857[iVar9 /*142*/])))
										{
											__LIB_31__::func_851("VEH_LIVERY" /* GXT: (Livery) */, 0);
										}
										if (__LIB_3__::func_544(Global_1585857[iVar9 /*142*/].f_66, Global_1585857[iVar9 /*142*/].f_77, Global_1585857[iVar9 /*142*/].f_9[10]) && __LIB_3__::func_543(Global_1585857[iVar9 /*142*/].f_66))
										{
											__LIB_31__::func_851("VEH_TOPL" /* GXT: Topless */, 0);
										}
									}
									else
									{
										StringCopy(&Var12, "PIL_MP_VEH_0" /* GXT: ~a~ ~a~ */, 24);
										StringIntConCat(&Var12, iVar11, 24);
										__LIB_3__::func_572(iVar0, &Var12, iVar11, 1, 0, 0, 0);
										if (MISC::IS_STRING_NULL_OR_EMPTY(&Var13))
										{
											__LIB_31__::func_851(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_1585857[iVar9 /*142*/].f_66), 0);
										}
										else
										{
											__LIB_31__::func_850(&Var13, 0, 0, 1);
										}
										if (__LIB_3__::func_545(&(Global_1585857[iVar9 /*142*/])))
										{
											__LIB_31__::func_851("VEH_LIVERY" /* GXT: (Livery) */, 0);
										}
										if (__LIB_3__::func_544(Global_1585857[iVar9 /*142*/].f_66, Global_1585857[iVar9 /*142*/].f_77, Global_1585857[iVar9 /*142*/].f_9[10]) && __LIB_3__::func_543(Global_1585857[iVar9 /*142*/].f_66))
										{
											__LIB_31__::func_851("VEH_TOPL" /* GXT: Topless */, 0);
										}
									}
									uParam0->f_1[iVar0] = iVar8;
									iVar0++;
								}
							}
							else if (!__LIB_1__::func_819(Global_1585857[iVar9 /*142*/].f_66))
							{
								if (BitTest(Global_1585857[iVar9 /*142*/].f_103, 6))
								{
									StringCopy(&Var12, "MP_MAN_VEH_S1" /* GXT: ~a~ ~a~ (Impounded) */, 24);
									StringIntConCat(&Var12, iVar11, 24);
									__LIB_3__::func_572(iVar0, &Var12, iVar11, 1, 0, 0, 0);
									if (MISC::IS_STRING_NULL_OR_EMPTY(&Var13))
									{
										__LIB_31__::func_851(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_1585857[iVar9 /*142*/].f_66), 0);
									}
									else
									{
										__LIB_31__::func_850(&Var13, 0, 0, 1);
									}
									if (__LIB_3__::func_545(&(Global_1585857[iVar9 /*142*/])))
									{
										__LIB_31__::func_851("VEH_LIVERY" /* GXT: (Livery) */, 0);
									}
									if (__LIB_3__::func_544(Global_1585857[iVar9 /*142*/].f_66, Global_1585857[iVar9 /*142*/].f_77, Global_1585857[iVar9 /*142*/].f_9[10]) && __LIB_3__::func_543(Global_1585857[iVar9 /*142*/].f_66))
									{
										__LIB_31__::func_851("VEH_TOPL" /* GXT: Topless */, 0);
									}
								}
								else
								{
									StringCopy(&Var12, "PIL_MP_VEH_0" /* GXT: ~a~ ~a~ */, 24);
									StringIntConCat(&Var12, iVar11, 24);
									__LIB_3__::func_572(iVar0, &Var12, iVar11, 1, 0, 0, 0);
									if (MISC::IS_STRING_NULL_OR_EMPTY(&Var13))
									{
										__LIB_31__::func_851(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_1585857[iVar9 /*142*/].f_66), 0);
									}
									else
									{
										__LIB_31__::func_850(&Var13, 0, 0, 1);
									}
									if (__LIB_3__::func_545(&(Global_1585857[iVar9 /*142*/])))
									{
										__LIB_31__::func_851("VEH_LIVERY" /* GXT: (Livery) */, 0);
									}
									if (__LIB_3__::func_544(Global_1585857[iVar9 /*142*/].f_66, Global_1585857[iVar9 /*142*/].f_77, Global_1585857[iVar9 /*142*/].f_9[10]) && __LIB_3__::func_543(Global_1585857[iVar9 /*142*/].f_66))
									{
										__LIB_31__::func_851("VEH_TOPL" /* GXT: Topless */, 0);
									}
								}
								uParam0->f_1[iVar0] = iVar8;
								iVar0++;
							}
						}
						else
						{
							__LIB_3__::func_572(iVar0, "MP_MAN_VEH_S" /* GXT: Empty */, 0, 1, 0, 0, 0);
							uParam0->f_1[iVar0] = iVar8;
							MISC::SET_BIT(&(uParam0->f_365), iVar0);
							iVar0++;
						}
					}
					iVar1++;
				}
			}
			uParam0->f_369 = iVar0;
			if (uParam0->f_368 >= uParam0->f_369)
			{
				uParam0->f_368 = 0;
			}
			__LIB_3__::func_110(uParam0->f_368, 1, 1);
			break;
	}
	__LIB_3__::func_564(-1);
	__LIB_1__::func_791(176, "BB_SELECT" /* GXT: Select */, -1);
	__LIB_1__::func_791(177, "BB_BACK" /* GXT: Back */, -1);
}

void func_605(int* iParam0)//Position - 0x678A1
{
	var uVar0;
	int iVar1;
	iVar1 = __LIB_1__::func_186(iParam0->f_388.f_66);
	if (iParam0->f_388.f_66 == joaat("banshee"))
	{
		if (BitTest(iParam0->f_388.f_77, 0))
		{
			iVar1 = 118;
		}
	}
	while (!func_606(iVar1, 0, &(iParam0->f_388), &(iParam0->f_4), &uVar0, 0) && __LIB_8__::func_881())
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_4))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iParam0->f_4, true);
		ENTITY::SET_ENTITY_VISIBLE(iParam0->f_4, false, false);
		ENTITY::SET_ENTITY_COLLISION(iParam0->f_4, false, false);
		if (DECORATOR::DECOR_EXIST_ON(iParam0->f_4, "Player_Vehicle"))
		{
			DECORATOR::DECOR_REMOVE(iParam0->f_4, "Player_Vehicle");
		}
	}
	else
	{
		return;
	}
	if (!__LIB_0__::func_624(iParam0, 3))
	{
		__LIB_7__::func_148(iParam0, 1);
	}
	else
	{
		__LIB_7__::func_262(iParam0, 3);
		__LIB_7__::func_148(iParam0, 3);
	}
}

int func_606(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, bool bParam5)//Position - 0x67968
{
	struct<3> Var0;
	struct<101> Var1;
	int iVar2;
	STREAMING::REQUEST_MODEL(uParam2->f_66);
	if (!STREAMING::HAS_MODEL_LOADED(uParam2->f_66))
	{
		return 0;
	}
	Var0 = { __LIB_0__::func_85(PLAYER::GET_PLAYER_INDEX()) };
	*uParam3 = VEHICLE::CREATE_VEHICLE(uParam2->f_66, Var0.f_0, Var0.f_1, (Var0.f_2 + 200f), 0f, false, false, false);
	Var1.f_9 = 49;
	Var1.f_59 = 2;
	Var1.f_78 = -1;
	Var1.f_79 = -1;
	Var1.f_96 = -1;
	Var1.f_97 = 1;
	Var1.f_99 = 132;
	Var1.f_100 = -1;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		__LIB_0__::func_209(*uParam3, &Var1);
	}
	else
	{
		__LIB_13__::func_727(*uParam3, &Var1);
	}
	if (bParam5)
	{
		uParam2->f_77 = 0;
	}
	iVar2 = 0;
	while (iVar2 < 12)
	{
		if (BitTest(Var1.f_77, __LIB_0__::func_110(iVar2 + 1)))
		{
			MISC::SET_BIT(&(uParam2->f_77), __LIB_0__::func_110(iVar2 + 1));
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam2->f_77), __LIB_0__::func_110(iVar2 + 1));
		}
		iVar2++;
	}
	__LIB_7__::func_144(iParam0, &(uParam2->f_77));
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		__LIB_1__::func_569(*uParam3, uParam2, 0, 1);
	}
	else
	{
		__LIB_15__::func_137(*uParam3, uParam2, 1, 1, 0);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && __LIB_0__::func_112())
	{
		ENTITY::FREEZE_ENTITY_POSITION(*uParam3, true);
		ENTITY::SET_ENTITY_VISIBLE(*uParam3, false, false);
		ENTITY::SET_ENTITY_COLLISION(*uParam3, false, false);
	}
	*uParam4 = func_427(iParam0, iParam1, Global_77051);
	return 1;
}

void func_659(int* iParam0)//Position - 0x6FBAE
{
	int iVar0;
	char* sVar1;
	iVar0 = func_312(iParam0, iParam0->f_4, 0);
	sVar1 = "PURCHASE_VEH_IN" /* GXT: Are you sure you would like to purchase this vehicle now for $~1~? */;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1) || iVar0 < 0)
	{
		return;
	}
	HUD::SET_WARNING_MESSAGE_WITH_HEADER("WHOUSE_SHI" /* GXT: CONFIRM PURCHASE */, sVar1, 36, 0, true, iVar0, 0, 0, true, 0);
	if (!HUD::IS_WARNING_MESSAGE_ACTIVE())
	{
		return;
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/) || __LIB_3__::func_528())
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "CANCEL", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
		__LIB_0__::func_627(&(iParam0->f_493), 0, 0);
		__LIB_7__::func_148(iParam0, 5);
	}
	else if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT" /* GXT: Filter List */, "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
		__LIB_7__::func_148(iParam0, 3);
	}
}

void func_661(int* iParam0, bool bParam1)//Position - 0x6FC91
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	if (!func_682(bParam1))
	{
		return;
	}
	if (!bParam1)
	{
		iParam0->f_5 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	}
	else
	{
		iParam0->f_5 = __LIB_7__::func_276(iParam0);
	}
	if (!__LIB_7__::func_275(iParam0->f_5))
	{
		return;
	}
	__LIB_8__::func_896(iParam0, &iVar0, &iVar1);
	if (!PAD::IS_CONTROL_PRESSED(iVar0, iVar1) && !__LIB_0__::func_624(iParam0, 2))
	{
		return;
	}
	__LIB_7__::func_146(iParam0, 1);
	__LIB_7__::func_262(iParam0, 2);
	__LIB_1__::func_376(PLAYER::PLAYER_ID(), 0, 0, 0);
	__LIB_13__::func_727(iParam0->f_5, &(iParam0->f_388));
	Var2 = { __LIB_8__::func_895() };
	iParam0->f_388.f_1 = { Var2 };
	__LIB_7__::func_148(iParam0, 2);
}

int func_682(bool bParam0)//Position - 0x70756
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (!__LIB_0__::func_156(PLAYER::PLAYER_ID(), 1, 1))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
	{
		return 0;
	}
	if (HUD::IS_WARNING_MESSAGE_ACTIVE())
	{
		return 0;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	if (!__LIB_0__::func_893())
	{
		return 0;
	}
	if (__LIB_0__::func_877())
	{
		return 0;
	}
	if (__LIB_0__::func_77(0))
	{
		return 0;
	}
	if (__LIB_0__::func_193())
	{
		return 0;
	}
	if (__LIB_2__::func_821(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (__LIB_0__::func_833())
	{
		return 0;
	}
	if (__LIB_0__::func_719())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			return 0;
		}
	}
	return 1;
}

int func_689(var uParam0, bool bParam1)//Position - 0x708A3
{
	bool bVar0;
	switch (uParam0->f_491)
	{
		case 1:
		case 2:
		case 3:
		case 4:
			bVar0 = true;
			break;
	}
	if (bVar0)
	{
		if (!__LIB_0__::func_156(PLAYER::PLAYER_ID(), 1, 1))
		{
			return 1;
		}
		if (!bParam1)
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_690(int iParam0)//Position - 0x70902
{
	float fVar0;
	struct<3> Var1;
	var uVar2;
	var uVar3;
	struct<3> Var4;
	int iVar5;
	struct<3> Var6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	float fVar17;
	float fVar18;
	float fVar19;
	float fVar20;
	int iVar21;
	float fVar22;
	struct<3> Var23;
	struct<3> Var24;
	struct<3> Var25;
	float fVar26;
	if (!__LIB_0__::func_121(iParam0))
	{
		return;
	}
	Var1 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	iVar5 = 400;
	Var6 = { -0.1f, 0f, 0f };
	fVar7 = 4f;
	fVar8 = 45.3f;
	fVar9 = 32.5f;
	fVar11 = 0.15f;
	fVar12 = 10f;
	fVar13 = 1.25f;
	fVar14 = 2.87f;
	fVar15 = 0.1f;
	fVar16 = 0.88f;
	fVar17 = 0.125f;
	if (BitTest(Local_164.f_0, 6))
	{
		fVar10 = -35f;
		MISC::CLEAR_BIT(&Local_164, 6);
	}
	else
	{
		fVar10 = 35f;
	}
	fVar18 = 1f;
	fVar19 = 0f;
	fVar20 = 0.05f;
	iVar21 = 1;
	if (!MISC::GET_GROUND_Z_FOR_3D_COORD(Var1, &fVar0, false, false))
	{
		fVar0 = 36.733f;
	}
	if (!CAM::DOES_CAM_EXIST(Local_164.f_506))
	{
		Local_164.f_506 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), true);
		CAM::SHAKE_CAM(Local_164.f_506, "HAND_SHAKE", fVar15);
		fVar22 = (ENTITY::GET_ENTITY_HEADING(iParam0) + fVar10);
		fVar22 = __LIB_3__::func_555(fVar22);
		Local_164.f_506.f_3 = uVar2;
		Local_164.f_506.f_6 = fVar22;
		Local_164.f_506.f_7 = (fVar22 + Local_164.f_506.f_3);
		Local_164.f_506.f_4 = uVar3;
		Var4 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var1, Local_164.f_506.f_7, 0f, fVar7, 0f) };
		Var4.f_2 = (fVar0 + Local_164.f_506.f_4);
		CAM::SET_CAM_COORD(Local_164.f_506, Var4);
		CAM::POINT_CAM_AT_COORD(Local_164.f_506, Var1);
		Local_164.f_506.f_5 = Local_164.f_506.f_4;
		Local_164.f_506.f_8 = Local_164.f_506.f_7;
		CAM::SET_CAM_ACTIVE(Local_164.f_506, true);
		CAM::SET_CAM_USE_SHALLOW_DOF_MODE(Local_164.f_506, true);
		CAM::SET_CAM_NEAR_DOF(Local_164.f_506, fVar11);
		CAM::SET_CAM_FAR_DOF(Local_164.f_506, fVar12);
		CAM::SET_CAM_DOF_STRENGTH(Local_164.f_506, fVar16);
		CAM::SET_CAM_FOV(Local_164.f_506, fVar8);
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
		HUD::SET_MULTIPLAYER_WALLET_CASH();
		HUD::SET_MULTIPLAYER_BANK_CASH();
		func_702(1);
	}
	if (!CAM::DOES_CAM_EXIST(Local_164.f_506.f_1))
	{
		Local_164.f_506.f_1 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), false);
		CAM::SET_CAM_USE_SHALLOW_DOF_MODE(Local_164.f_506.f_1, true);
		CAM::SET_CAM_NEAR_DOF(Local_164.f_506.f_1, fVar11);
		CAM::SET_CAM_FAR_DOF(Local_164.f_506.f_1, fVar12);
		CAM::SET_CAM_DOF_STRENGTH(Local_164.f_506.f_1, fVar16);
	}
	if (CAM::DOES_CAM_EXIST(Local_164.f_506))
	{
		if (!CAM::IS_CAM_INTERPOLATING(Local_164.f_506))
		{
			func_699(&(Local_164.f_506));
			Var23 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, __LIB_3__::func_554()) };
			CAM::SET_USE_HI_DOF();
			Local_164.f_506.f_3 = __LIB_3__::func_555(Local_164.f_506.f_3);
			Local_164.f_506.f_7 = (Local_164.f_506.f_6 + Local_164.f_506.f_3);
			Local_164.f_506.f_4 = __LIB_0__::func_331(Local_164.f_506.f_4, fVar13, fVar14);
			Local_164.f_506.f_8 = (Local_164.f_506.f_8 + (__LIB_13__::func_654(Local_164.f_506.f_8, Local_164.f_506.f_7) * fVar17));
			Local_164.f_506.f_5 = (Local_164.f_506.f_5 + ((Local_164.f_506.f_4 - Local_164.f_506.f_5) * fVar17));
			Local_164.f_506.f_5 = __LIB_0__::func_331(Local_164.f_506.f_5, fVar13, fVar14);
			Var4 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, __LIB_3__::func_554()), Local_164.f_506.f_8, 0f, fVar7, 0f) };
			Var4.f_2 = (fVar0 + Local_164.f_506.f_5);
			Var24 = { __LIB_0__::func_835(__LIB_0__::func_79(Var23 - Var4), 0f, 0f, 1f) };
			Var25 = { __LIB_0__::func_835(__LIB_0__::func_79(Var23 - Var4), Var24) };
			Var23 = { Var23 + Var24 * Vector(Var6.f_0, Var6.f_0, Var6.f_0) };
			Var23 = { Var23 + Var25 * Vector(Var6.f_2, Var6.f_2, Var6.f_2) };
			CAM::SET_CAM_COORD(Local_164.f_506, Var4);
			CAM::POINT_CAM_AT_COORD(Local_164.f_506, OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var23, ENTITY::GET_ENTITY_HEADING(iParam0), __LIB_3__::func_554()));
			if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, __LIB_12__::func_297()))
			{
				if (Local_164.f_506.f_2 < fVar18)
				{
					CAM::SET_CAM_SHAKE_AMPLITUDE(Local_164.f_506, ((fVar18 - Local_164.f_506.f_2) * fVar15));
					Local_164.f_506.f_2 = (Local_164.f_506.f_2 + fVar20);
				}
				if (Local_164.f_506.f_2 > fVar18)
				{
					Local_164.f_506.f_2 = fVar18;
				}
			}
			else
			{
				if (Local_164.f_506.f_2 > fVar19)
				{
					CAM::SET_CAM_SHAKE_AMPLITUDE(Local_164.f_506, ((fVar18 - Local_164.f_506.f_2) * fVar15));
					Local_164.f_506.f_2 = (Local_164.f_506.f_2 - fVar20);
				}
				if (Local_164.f_506.f_2 < fVar19)
				{
					Local_164.f_506.f_2 = fVar19;
				}
			}
			fVar26 = __LIB_3__::func_569(fVar8, fVar9, Local_164.f_506.f_2);
			CAM::SET_CAM_FOV(Local_164.f_506, fVar26);
			CAM::CAMERA_PREVENT_COLLISION_SETTINGS_FOR_TRIPLEHEAD_IN_INTERIORS_THIS_UPDATE();
			if (BitTest(Local_164.f_0, 5))
			{
				if (CAM::DOES_CAM_EXIST(Local_164.f_506.f_1))
				{
					CAM::SET_CAM_COORD(Local_164.f_506.f_1, CAM::GET_CAM_COORD(Local_164.f_506));
					CAM::SET_CAM_ROT(Local_164.f_506.f_1, CAM::GET_CAM_ROT(Local_164.f_506, 2), 2);
					CAM::SET_CAM_FOV(Local_164.f_506.f_1, CAM::GET_CAM_FOV(Local_164.f_506));
					CAM::SET_CAM_NEAR_DOF(Local_164.f_506.f_1, CAM::GET_CAM_NEAR_DOF(Local_164.f_506));
					CAM::SET_CAM_FAR_DOF(Local_164.f_506.f_1, CAM::GET_CAM_FAR_DOF(Local_164.f_506));
					CAM::SET_CAM_DOF_STRENGTH(Local_164.f_506.f_1, CAM::GET_CAM_DOF_STRENGTH(Local_164.f_506));
					CAM::SET_CAM_ACTIVE_WITH_INTERP(Local_164.f_506, Local_164.f_506.f_1, iVar5, iVar21, iVar21);
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Change_Vehicle", iParam0, "GTAO_Auto_Store_Sounds", false, 0);
					MISC::CLEAR_BIT(&Local_164, 5);
				}
			}
		}
		else
		{
			CAM::SET_USE_HI_DOF();
		}
	}
}

void func_699(var uParam0)//Position - 0x70F68
{
	float fVar0;
	float fVar1;
	bool bVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	var uVar6;
	var uVar7;
	int iVar8;
	int iVar9;
	if (HUD::IS_PAUSE_MENU_ACTIVE() || HUD::IS_WARNING_MESSAGE_ACTIVE())
	{
		return;
	}
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		fVar0 = 200f;
		fVar1 = 30f;
		bVar2 = __LIB_7__::func_152(&(Local_164.f_10)) != 3;
		if (bVar2)
		{
			HUD::SET_MOUSE_CURSOR_THIS_FRAME();
		}
		if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/))
		{
			if (bVar2)
			{
				HUD::SET_MOUSE_CURSOR_STYLE(4);
			}
			uParam0->f_3 = (uParam0->f_3 - (Global_4539959 * fVar0));
			uParam0->f_4 = (uParam0->f_4 + (Global_4539960 * fVar1));
		}
		else if (bVar2)
		{
			HUD::SET_MOUSE_CURSOR_STYLE(3);
		}
		__LIB_3__::func_53();
	}
	else
	{
		fVar3 = 16f;
		fVar4 = 0.025f;
		fVar5 = 0.001f;
		__LIB_0__::func_341(&uVar6, &uVar7, &iVar8, &iVar9, 1, 0);
		iVar8 = (iVar8 * -1);
		if (PAD::IS_LOOK_INVERTED())
		{
			iVar9 = (iVar9 * -1);
		}
		if (IntToFloat(iVar8) < -fVar3 || IntToFloat(iVar8) > fVar3)
		{
			uParam0->f_3 = (uParam0->f_3 + (IntToFloat(iVar8) * fVar4));
		}
		if (IntToFloat(iVar9) < -fVar3 || IntToFloat(iVar9) > fVar3)
		{
			uParam0->f_4 = (uParam0->f_4 + (IntToFloat(iVar9) * fVar5));
		}
	}
}

void func_702(bool bParam0)//Position - 0x71188
{
	if (bParam0)
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE(func_703()))
		{
			AUDIO::START_AUDIO_SCENE(func_703());
		}
	}
	else if (AUDIO::IS_AUDIO_SCENE_ACTIVE(func_703()))
	{
		AUDIO::STOP_AUDIO_SCENE(func_703());
	}
}

char* func_703()//Position - 0x711C0
{
	return "GTAO_Auto_Store_Scene";
}

int func_705()//Position - 0x71206
{
	if (Local_164.f_2 < 0 || Local_164.f_2 >= 2)
	{
		return 0;
	}
	return Local_164.f_6[Local_164.f_2];
}

void func_706()//Position - 0x71231
{
	int iVar0;
	int iVar1;
	PAD::DISABLE_ALL_CONTROL_ACTIONS(0 /*PLAYER_CONTROL*/);
	PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, func_708(), true);
	PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, __LIB_12__::func_297(), true);
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/, true);
	}
	else
	{
		PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 210 /*INPUT_FRONTEND_RS*/, true);
	}
	PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 205 /*INPUT_FRONTEND_LB*/, true);
	PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 206 /*INPUT_FRONTEND_RB*/, true);
	func_707(&iVar0, &iVar1);
	PAD::ENABLE_CONTROL_ACTION(iVar0, iVar1, true);
}

void func_707(var uParam0, var uParam1)//Position - 0x7128E
{
	*uParam0 = 2;
	*uParam1 = 224;
}

int func_708()//Position - 0x7129F
{
	return 202;
}

void func_713(bool bParam0)//Position - 0x71527
{
	if (bParam0)
	{
		Local_164.f_10.f_7 = 463502/*func_707*/;
	}
	else
	{
		Local_164.f_10.f_7 = 464231/*func_715*/;
	}
	__LIB_7__::func_151(&(Local_164.f_10), Local_164.f_10.f_7);
}

void func_715(var uParam0, var uParam1)//Position - 0x71567
{
	*uParam0 = 2;
	*uParam1 = 201;
}

void func_716(int iParam0)//Position - 0x71578
{
	if (Local_164.f_9 != iParam0)
	{
		Local_164.f_9 = iParam0;
	}
}

void func_717(var uParam0, bool bParam1)//Position - 0x7158F
{
	*uParam0 = 0;
	__LIB_7__::func_263(uParam0);
	uParam0->f_12.f_370 = 0;
	uParam0->f_12.f_373 = 0;
	if (bParam1)
	{
		if (__LIB_0__::func_156(PLAYER::PLAYER_ID(), 1, 1) && __LIB_0__::func_893())
		{
			__LIB_1__::func_376(PLAYER::PLAYER_ID(), 1, 0, 0);
		}
	}
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	__LIB_7__::func_148(uParam0, 0);
	__LIB_7__::func_75(uParam0, 0);
}

void func_718()//Position - 0x715EF
{
	if (__LIB_0__::func_893())
	{
		__LIB_1__::func_376(PLAYER::PLAYER_ID(), 1, 0, 0);
	}
	__LIB_1__::func_91();
	__LIB_3__::func_130();
}

void func_730()//Position - 0x718CA
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Local_164.f_506.f_9))
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(Local_164.f_506.f_9));
	}
}

void func_731()//Position - 0x718EB
{
	Local_164.f_506.f_2 = 0f;
	Local_164.f_506.f_3 = 0f;
	Local_164.f_506.f_4 = 0f;
	Local_164.f_506.f_5 = 0f;
	Local_164.f_506.f_7 = 0f;
	Local_164.f_506.f_8 = 0f;
	Local_164.f_506.f_6 = 0f;
	if (CAM::DOES_CAM_EXIST(Local_164.f_506) && CAM::IS_CAM_ACTIVE(Local_164.f_506))
	{
		CAM::SET_CAM_ACTIVE(Local_164.f_506, false);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::DESTROY_CAM(Local_164.f_506, false);
		HUD::REMOVE_MULTIPLAYER_WALLET_CASH();
		HUD::REMOVE_MULTIPLAYER_BANK_CASH();
		func_702(0);
	}
	if (CAM::DOES_CAM_EXIST(Local_164.f_506.f_1))
	{
		CAM::DESTROY_CAM(Local_164.f_506, false);
	}
	if (BitTest(Local_164.f_0, 5))
	{
		MISC::CLEAR_BIT(&Local_164, 5);
	}
	func_730();
}

int func_732()//Position - 0x7199C
{
	if (BitTest(Global_1964891, 0))
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == __LIB_0__::func_162())
	{
		return 0;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (!__LIB_0__::func_156(PLAYER::PLAYER_ID(), 1, 1))
	{
		return 0;
	}
	if (!__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	if (!__LIB_0__::func_893())
	{
		return 0;
	}
	if (__LIB_0__::func_877())
	{
		return 0;
	}
	if (__LIB_0__::func_77(0))
	{
		return 0;
	}
	if (__LIB_2__::func_821(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (__LIB_0__::func_833())
	{
		return 0;
	}
	if (__LIB_0__::func_719())
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (__LIB_2__::func_868())
	{
		return 0;
	}
	if (__LIB_0__::func_796(PLAYER::PLAYER_ID()) && __LIB_0__::func_492(PLAYER::PLAYER_ID()) != -1)
	{
		return 0;
	}
	if (__LIB_1__::func_512())
	{
		return 0;
	}
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
	{
		return 0;
	}
	return 1;
}

void func_737()//Position - 0x71B61
{
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		HUD::DISABLE_FRONTEND_THIS_FRAME();
	}
	if (func_757())
	{
		func_731();
		func_730();
		if (__LIB_0__::func_1("LUX_SRM_H_SOON" /* GXT: This vehicle will be available for purchase soon. */))
		{
			HUD::CLEAR_HELP(true);
		}
		func_718();
		func_716(1);
		return;
	}
	func_706();
	__LIB_1__::func_33(0);
	func_755();
	func_690(func_705());
	if (CAM::DOES_CAM_EXIST(Local_164.f_506))
	{
		if (!__LIB_7__::func_275(func_705()))
		{
			if (!__LIB_0__::func_1("LUX_SRM_H_SOON" /* GXT: This vehicle will be available for purchase soon. */))
			{
				__LIB_0__::func_190("LUX_SRM_H_SOON" /* GXT: This vehicle will be available for purchase soon. */);
			}
		}
		else if (__LIB_0__::func_1("LUX_SRM_H_SOON" /* GXT: This vehicle will be available for purchase soon. */))
		{
			HUD::CLEAR_HELP(true);
		}
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
		HUD::SHOW_HUD_COMPONENT_THIS_FRAME(3);
		HUD::SHOW_HUD_COMPONENT_THIS_FRAME(4);
		HUD::SHOW_HUD_COMPONENT_THIS_FRAME(5);
		HUD::SHOW_HUD_COMPONENT_THIS_FRAME(13);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 1 /*INPUT_LOOK_LR*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 2 /*INPUT_LOOK_UD*/, true);
		if (!HUD::IS_WARNING_MESSAGE_ACTIVE() && !NETWORK::IS_COMMERCE_STORE_OPEN())
		{
			func_742();
		}
		if (!CAM::IS_CAM_INTERPOLATING(Local_164.f_506))
		{
			if (__LIB_7__::func_275(func_705()) && func_741(1))
			{
				__LIB_7__::func_146(&(Local_164.f_10), 2);
				__LIB_7__::func_149(&(Local_164.f_10), 463366/*func_705*/);
				func_739(func_705());
				func_738(func_705());
				MISC::SET_BIT(&Local_164, 0);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT" /* GXT: Filter List */, "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				func_716(4);
			}
		}
	}
}

void func_738(int iParam0)//Position - 0x71C92
{
	if (__LIB_0__::func_121(iParam0))
	{
		Local_164.f_5 = __LIB_7__::func_467(ENTITY::GET_ENTITY_MODEL(iParam0));
	}
	else
	{
		Local_164.f_5 = "";
	}
}

void func_739(int iParam0)//Position - 0x71CBB
{
	int iVar0;
	iVar0 = func_312(&(Local_164.f_10), iParam0, 0);
	if (iVar0 == -1)
	{
	}
	if (Local_164.f_4 != iVar0)
	{
		Local_164.f_4 = iVar0;
	}
}

int func_741(bool bParam0)//Position - 0x71CF3
{
	int iVar0;
	int iVar1;
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		if (bParam0)
		{
			func_707(&iVar0, &iVar1);
		}
		else
		{
			func_715(&iVar0, &iVar1);
		}
		if (PAD::IS_CONTROL_JUST_PRESSED(iVar0, iVar1))
		{
			return 1;
		}
	}
	return 0;
}

void func_742()//Position - 0x71D3C
{
	struct<9> Var0;
	func_749();
	Var0 = { __LIB_1__::func_404() };
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(5);
	__LIB_5__::func_693(&(Local_164.f_506.f_9), &Var0, &(Local_164.f_506.f_10), 0);
}

void func_749()//Position - 0x721A3
{
	int iVar0;
	int iVar1;
	__LIB_1__::func_403(&(Local_164.f_506.f_10));
	__LIB_2__::func_817(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, func_708(), true), "LUX_SRM_BACK" /* GXT: Back */, &(Local_164.f_506.f_10), 0);
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		__LIB_2__::func_817(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/, true), "LUX_SRM_MOVE" /* GXT: Move Camera */, &(Local_164.f_506.f_10), 0);
	}
	else
	{
		__LIB_2__::func_817(PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, __LIB_0__::func_109(), true), "LUX_SRM_MOVE" /* GXT: Move Camera */, &(Local_164.f_506.f_10), 0);
	}
	__LIB_2__::func_817(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, __LIB_12__::func_297(), true), "LUX_SRM_ZOOM" /* GXT: Zoom */, &(Local_164.f_506.f_10), 0);
	__LIB_2__::func_817(PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, func_750(), true), "LUX_SRM_VEH" /* GXT: Vehicles */, &(Local_164.f_506.f_10), 0);
	if (__LIB_7__::func_275(func_705()))
	{
		func_707(&iVar0, &iVar1);
		__LIB_2__::func_817(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(iVar0, iVar1, true), "LUX_SRM_BUY" /* GXT: Purchase */, &(Local_164.f_506.f_10), 0);
	}
}

int func_750()//Position - 0x7226D
{
	return 14;
}

void func_755()//Position - 0x723CB
{
	int iVar0;
	if (CAM::DOES_CAM_EXIST(Local_164.f_506) && CAM::IS_CAM_INTERPOLATING(Local_164.f_506))
	{
		return;
	}
	iVar0 = Local_164.f_2;
	if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 205 /*INPUT_FRONTEND_LB*/))
	{
		iVar0 = (iVar0 - 1);
	}
	else if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 206 /*INPUT_FRONTEND_RB*/))
	{
		iVar0++;
	}
	if (iVar0 < 0)
	{
		iVar0 = 1;
	}
	else if (iVar0 >= 2)
	{
		iVar0 = 0;
	}
	if (iVar0 != Local_164.f_2)
	{
		MISC::SET_BIT(&Local_164, 5);
		func_756(iVar0);
		__LIB_7__::func_149(&(Local_164.f_10), 463366/*func_705*/);
	}
}

void func_756(int iParam0)//Position - 0x72450
{
	if (iParam0 < 0 || iParam0 >= 2)
	{
		return;
	}
	if (Local_164.f_2 != iParam0)
	{
		Local_164.f_2 = iParam0;
	}
}

int func_757()//Position - 0x7247B
{
	if (!func_732())
	{
		return 1;
	}
	if (!func_3(0))
	{
		return 1;
	}
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, func_708()))
		{
			return 1;
		}
	}
	else if (!HUD::IS_PAUSE_MENU_ACTIVE() && PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, func_708()))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
		return 1;
	}
	return 0;
}

void func_758()//Position - 0x724E0
{
	if (!func_732() || !func_3(0))
	{
		func_718();
		func_776(&(Local_164.f_1216));
		func_716(1);
		return;
	}
	func_775();
	HUD::DISABLE_FRONTEND_THIS_FRAME();
	func_759(&(Local_164.f_1216));
	if (BitTest(Local_164.f_0, 2))
	{
		switch (Local_164.f_1216.f_3)
		{
			case 0:
				switch (Local_164.f_1216)
				{
					case 0:
						func_749();
						func_776(&(Local_164.f_1216));
						func_58();
						func_716(3);
						break;
					case 1:
						if (__LIB_7__::func_275(func_705()))
						{
							Local_164.f_1216.f_3 = 1;
							MISC::SET_BIT(&Local_164, 4);
						}
						break;
				}
				break;
			case 1:
				switch (Local_164.f_1216)
				{
					case 0:
						break;
					case 1:
						if (__LIB_7__::func_275(func_705()))
						{
							__LIB_7__::func_146(&(Local_164.f_10), 2);
							__LIB_7__::func_146(&(Local_164.f_10), 3);
							func_776(&(Local_164.f_1216));
							func_716(4);
						}
						break;
				}
				break;
		}
		MISC::CLEAR_BIT(&Local_164, 2);
	}
	else if (BitTest(Local_164.f_0, 3))
	{
		switch (Local_164.f_1216.f_3)
		{
			case 0:
				func_718();
				func_776(&(Local_164.f_1216));
				func_716(1);
				break;
			case 1:
				Local_164.f_1216.f_3 = 0;
				MISC::SET_BIT(&Local_164, 4);
				break;
		}
		MISC::CLEAR_BIT(&Local_164, 3);
	}
}

void func_759(var uParam0)//Position - 0x72631
{
	if (!__LIB_3__::func_558())
	{
		func_767(uParam0, 2);
		if (__LIB_0__::func_114(uParam0))
		{
			MISC::SET_BIT(&Local_164, 4);
		}
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(func_765(), false);
		if (__LIB_3__::func_67(0, -1, 0) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(func_765()))
		{
			if (BitTest(Local_164.f_0, 4))
			{
				__LIB_1__::func_602(0, 0);
				func_762(uParam0);
				MISC::CLEAR_BIT(&Local_164, 4);
			}
			else
			{
				__LIB_3__::func_110(*uParam0, 1, 1);
			}
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(73, 73);
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
			GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(true);
			func_760(uParam0);
			__LIB_11__::func_266(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			HUD::HIDE_SCRIPTED_HUD_COMPONENT_THIS_FRAME(19);
		}
	}
}

void func_760(var uParam0)//Position - 0x726D0
{
	switch (*uParam0)
	{
		case 0:
			__LIB_1__::func_789("LUX_SRM_M_D_0" /* GXT: View the ~a~ on display. */, 0, 0);
			__LIB_3__::func_542(Local_164.f_5);
			break;
		case 1:
			if (uParam0->f_3 == 1)
			{
				__LIB_1__::func_789("BUY_VEH_CONF" /* GXT: Are you sure you would like to purchase the ~a~ for $~1~? */, 0, 0);
				__LIB_3__::func_542(Local_164.f_5);
				__LIB_11__::func_979(Local_164.f_4);
			}
			else if (__LIB_7__::func_275(func_705()))
			{
				__LIB_1__::func_789("LUX_SRM_M_D_1" /* GXT: Purchase the ~a~ now for $~1~. */, 0, 0);
				__LIB_3__::func_542(Local_164.f_5);
				__LIB_11__::func_979(Local_164.f_4);
			}
			else
			{
				__LIB_1__::func_789("LUX_SRM_H_SOON" /* GXT: This vehicle will be available for purchase soon. */, 0, 0);
			}
			break;
	}
}

void func_762(var uParam0)//Position - 0x727BA
{
	__LIB_4__::func_851("LUX_SRM_M_TTL" /* GXT: LUXURY AUTOS */);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(func_765(), false);
	if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(func_765()))
	{
		__LIB_3__::func_566(1, func_765(), func_765());
	}
	__LIB_3__::func_572(0, "LUX_SRM_M_O_0" /* GXT: Inspect Vehicle */, 0, 1, 0, 0, 0);
	__LIB_3__::func_572(1, "LUX_SRM_M_O_1" /* GXT: Purchase Vehicle */, 0, __LIB_7__::func_275(func_705()), 0, 0, 0);
	__LIB_3__::func_110(*uParam0, 1, 1);
	if (uParam0->f_3 == 1)
	{
		__LIB_1__::func_792(201, "ITEM_YES" /* GXT: Confirm */, -1, 0);
	}
	else
	{
		__LIB_1__::func_792(201, "ITEM_SELECT" /* GXT: Select */, -1, 0);
	}
	__LIB_1__::func_792(202, "ITEM_BACK" /* GXT: Back */, -1, 0);
}

char* func_765()//Position - 0x72921
{
	return "ShopUI_Title_Luxury_Autos";
}

void func_767(var uParam0, int iParam1)//Position - 0x72936
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	iVar3 = 150;
	if (PAD::IS_USING_CURSOR(2 /*FRONTEND_CONTROL*/))
	{
		iVar3 = 110;
	}
	__LIB_3__::func_570(1);
	__LIB_0__::func_366(1);
	bVar4 = PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/);
	bVar5 = (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/));
	iVar2 = PAD::GET_CONTROL_VALUE(2 /*FRONTEND_CONTROL*/, 31 /*INPUT_MOVE_UD*/);
	if (__LIB_0__::func_983() || __LIB_0__::func_77(0))
	{
		bVar4 = false;
	}
	if (!BitTest(Local_164.f_0, 1))
	{
		if (PAD::IS_USING_CURSOR(2 /*FRONTEND_CONTROL*/))
		{
			func_768(uParam0, &bVar0, &bVar1, &bVar4, &bVar5);
		}
		else
		{
			bVar0 = (iVar2 < 100 || PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/));
			bVar1 = (iVar2 > 150 || PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/));
		}
		if (bVar0 || bVar1)
		{
			__LIB_0__::func_795(&(uParam0->f_1), 0, 0);
			MISC::SET_BIT(&Local_164, 1);
		}
	}
	else if (__LIB_0__::func_937(&(uParam0->f_1), iVar3, 0))
	{
		__LIB_0__::func_794(&(uParam0->f_1));
		MISC::CLEAR_BIT(&Local_164, 1);
	}
	if (uParam0->f_3 == 0)
	{
		if (bVar1)
		{
			*uParam0++;
			if (*uParam0 >= iParam1)
			{
				*uParam0 = 0;
			}
			AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
		}
		if (bVar0)
		{
			*uParam0 = (*uParam0 - 1);
			if (*uParam0 < 0)
			{
				*uParam0 = (iParam1 - 1);
			}
			AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
		}
	}
	if (bVar4)
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT" /* GXT: Filter List */, "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
		MISC::SET_BIT(&Local_164, 2);
	}
	if (bVar5 || __LIB_0__::func_877())
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
		if (uParam0->f_3 == 0)
		{
			*uParam0 = 0;
		}
		MISC::SET_BIT(&Local_164, 3);
	}
}

void func_768(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4)//Position - 0x72ABE
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
			PAD::DISABLE_CONTROL_ACTION(1 /*CAMERA_CONTROL*/, 1 /*INPUT_LOOK_LR*/, true);
			PAD::DISABLE_CONTROL_ACTION(1 /*CAMERA_CONTROL*/, 2 /*INPUT_LOOK_UD*/, true);
			__LIB_3__::func_567(0, 0, 0, 1);
			__LIB_3__::func_52(0, -1, 1);
		}
		if (__LIB_3__::func_51())
		{
			if (Global_4539961 == *uParam0)
			{
				*bParam3 = 1;
			}
			else
			{
				*uParam0 = Global_4539961;
				__LIB_3__::func_110(*uParam0, 1, 1);
			}
		}
		if (__LIB_3__::func_528())
		{
			*bParam4 = 1;
		}
		if (__LIB_3__::func_557(0, 0, 0) || PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/))
		{
			*uParam1 = 1;
		}
		if (__LIB_3__::func_556(0, 0, 0) || PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/))
		{
			*uParam2 = 1;
		}
	}
}

void func_775()//Position - 0x72D98
{
	PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/, true);
	PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/, true);
	PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/, true);
	PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/, true);
}

void func_776(var uParam0)//Position - 0x72DC0
{
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(func_765());
	*uParam0 = 0;
	uParam0->f_3 = 0;
	__LIB_0__::func_794(&(uParam0->f_1));
	__LIB_1__::func_895(1, -1);
}

void func_777()//Position - 0x72DE7
{
	if (func_732() && func_3(1))
	{
		func_791();
		if (__LIB_0__::func_1("LUX_SRM_MSN" /* GXT: Luxury Autos is unavailable whilst on a mission. */))
		{
			HUD::CLEAR_HELP(true);
		}
		if (PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
		}
		if (Local_164.f_3 == -1)
		{
			__LIB_5__::func_569(&(Local_164.f_3), 4, "LUX_SRM_ENTER" /* GXT: Press ~INPUT_CONTEXT~ to browse Luxury Autos. */, 0, 0, 0, 0);
		}
		else if (__LIB_3__::func_113(Local_164.f_3, 1))
		{
			func_785();
			if (__LIB_7__::func_691())
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			}
			func_756(func_6(func_10()));
			MISC::SET_BIT(&Local_164, 4);
			__LIB_3__::func_122(&(Local_164.f_3));
			__LIB_7__::func_149(&(Local_164.f_10), 463366/*func_705*/);
			func_778(&(Local_164.f_10), 1);
			func_739(func_705());
			func_738(func_705());
			AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT" /* GXT: Filter List */, "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			func_716(2);
		}
	}
	else if (Local_164.f_3 != -1)
	{
		__LIB_3__::func_122(&(Local_164.f_3));
	}
	else if (func_3(1) && (__LIB_2__::func_868() || (__LIB_0__::func_796(PLAYER::PLAYER_ID()) && __LIB_0__::func_492(PLAYER::PLAYER_ID()) != -1)))
	{
		if (!__LIB_0__::func_1("LUX_SRM_MSN" /* GXT: Luxury Autos is unavailable whilst on a mission. */))
		{
			__LIB_0__::func_190("LUX_SRM_MSN" /* GXT: Luxury Autos is unavailable whilst on a mission. */);
		}
	}
	else if (func_3(1) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		if (!__LIB_0__::func_1("LUX_SRM_WANTED" /* GXT: Luxury Autos is unavailable while you have a Wanted Level. */))
		{
			__LIB_0__::func_190("LUX_SRM_WANTED" /* GXT: Luxury Autos is unavailable while you have a Wanted Level. */);
		}
	}
	else if (__LIB_0__::func_1("LUX_SRM_MSN" /* GXT: Luxury Autos is unavailable whilst on a mission. */) || __LIB_0__::func_1("LUX_SRM_WANTED" /* GXT: Luxury Autos is unavailable while you have a Wanted Level. */))
	{
		HUD::CLEAR_HELP(true);
	}
}

void func_778(var uParam0, bool bParam1)//Position - 0x72F5E
{
	if (bParam1)
	{
		__LIB_4__::func_894(uParam0, 470937/*__LIB_0__::func_109*/);
	}
	else
	{
		__LIB_4__::func_894(uParam0, 470914/*__LIB_0__::func_114*/);
	}
}

void func_785()//Position - 0x7304D
{
	int iVar0;
	__LIB_11__::func_973(1, 0);
	iVar0 = 73600;
	__LIB_1__::func_376(PLAYER::PLAYER_ID(), 0, iVar0, 0);
	__LIB_1__::func_92();
}

void func_791()//Position - 0x73335
{
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 140 /*INPUT_MELEE_ATTACK_LIGHT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 141 /*INPUT_MELEE_ATTACK_HEAVY*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 143 /*INPUT_MELEE_BLOCK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/, true);
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 44 /*INPUT_COVER*/, true);
	}
}

void func_792()//Position - 0x73375
{
	if (func_793())
	{
		func_716(1);
	}
}

int func_793()//Position - 0x73389
{
	struct<101> Var0;
	int iVar1;
	int iVar2;
	Var0.f_9 = 49;
	Var0.f_59 = 2;
	Var0.f_78 = -1;
	Var0.f_79 = -1;
	Var0.f_96 = -1;
	Var0.f_97 = 1;
	Var0.f_99 = 132;
	Var0.f_100 = -1;
	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (!__LIB_0__::func_121(Local_164.f_6[iVar1]))
		{
			iVar2 = func_799(iVar1);
			if ((iVar2 != 0 && STREAMING::IS_MODEL_IN_CDIMAGE(iVar2)) && STREAMING::IS_MODEL_A_VEHICLE(iVar2))
			{
				if (__LIB_0__::func_799(iVar2))
				{
					if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
					{
						NETWORK::SET_NETWORK_CUTSCENE_ENTITIES(true);
					}
					Local_164.f_6[iVar1] = VEHICLE::CREATE_VEHICLE(iVar2, func_797(iVar1), 0f, false, false, false);
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_164.f_6[iVar1], func_797(iVar1), false, false, true);
					ENTITY::SET_ENTITY_ROTATION(Local_164.f_6[iVar1], func_796(iVar1), 2, true);
					ENTITY::FREEZE_ENTITY_POSITION(Local_164.f_6[iVar1], true);
					ENTITY::SET_ENTITY_INVINCIBLE(Local_164.f_6[iVar1], true);
					VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(Local_164.f_6[iVar1], true);
					ENTITY::SET_ENTITY_COLLISION(Local_164.f_6[iVar1], true, false);
					VEHICLE::SET_VEHICLE_FULLBEAM(Local_164.f_6[iVar1], false);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(Local_164.f_6[iVar1], true);
					VEHICLE::SET_DONT_ALLOW_PLAYER_TO_ENTER_VEHICLE_IF_LOCKED_FOR_PLAYER(Local_164.f_6[iVar1], true);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_164.f_6[iVar1], 10);
					AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_164.f_6[iVar1], false);
					VEHICLE::SET_VEHICLE_DOORS_SHUT(Local_164.f_6[iVar1], true);
					ENTITY::SET_ENTITY_CAN_BE_DAMAGED(Local_164.f_6[iVar1], false);
					VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(Local_164.f_6[iVar1], false);
					VEHICLE::SET_VEHICLE_ENGINE_ON(Local_164.f_6[iVar1], false, true, false);
					VEHICLE::SET_VEHICLE_LIGHTS(Local_164.f_6[iVar1], 1);
					VEHICLE::SET_VEHICLE_FIXED(Local_164.f_6[iVar1]);
					ENTITY::SET_ENTITY_MAX_HEALTH(Local_164.f_6[iVar1], 1000);
					ENTITY::SET_ENTITY_HEALTH(Local_164.f_6[iVar1], 1000, 0);
					VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_164.f_6[iVar1], 1000f);
					VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(Local_164.f_6[iVar1], 1000f);
					VEHICLE::SET_VEHICLE_DIRT_LEVEL(Local_164.f_6[iVar1], 0f);
					ENTITY::SET_ENTITY_VISIBLE(Local_164.f_6[iVar1], true, false);
					VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(Local_164.f_6[iVar1]);
					ENTITY::SET_ENTITY_PROOFS(Local_164.f_6[iVar1], true, true, true, true, true, true, false, true);
					func_794(iVar1, &Var0, iVar2);
					__LIB_15__::func_137(Local_164.f_6[iVar1], &Var0, 0, 1, 1);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar2);
					if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
					{
						NETWORK::SET_NETWORK_CUTSCENE_ENTITIES(false);
					}
				}
				return 0;
			}
		}
		else if (!VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_164.f_6[iVar1], 5f))
		{
			return 0;
		}
		iVar1++;
	}
	return 1;
}

void func_794(int iParam0, var uParam1, int iParam2)//Position - 0x735F5
{
	switch (iParam0)
	{
		case 0:
			uParam1->f_5 = Global_262145.f_32708 /* Tunable: LUXURY_SHOWCASE_VEHICLE_1_COLOUR_1 */;
			uParam1->f_6 = Global_262145.f_32709 /* Tunable: LUXURY_SHOWCASE_VEHICLE_1_COLOUR_2 */;
			uParam1->f_7 = Global_262145.f_32710 /* Tunable: LUXURY_SHOWCASE_VEHICLE_1_EXTRA_COLOUR_1 */;
			uParam1->f_8 = Global_262145.f_32711 /* Tunable: LUXURY_SHOWCASE_VEHICLE_1_EXTRA_COLOUR_2 */;
			uParam1->f_97 = Global_262145.f_32712 /* Tunable: LUXURY_SHOWCASE_VEHICLE_1_COLOUR_5 */;
			uParam1->f_99 = Global_262145.f_32713 /* Tunable: LUXURY_SHOWCASE_VEHICLE_1_COLOUR_6 */;
			uParam1->f_9[48] = Global_262145.f_32714 /* Tunable: LUXURY_SHOWCASE_VEHICLE_1_LIVERY */;
			uParam1->f_69 = Global_262145.f_32715 /* Tunable: LUXURY_SHOWCASE_VEHICLE_1_WHEEL_TYPE */;
			uParam1->f_9[23] = Global_262145.f_32716 /* Tunable: LUXURY_SHOWCASE_VEHICLE_1_WHEEL_ID */;
			uParam1->f_65 = Global_262145.f_32717 /* Tunable: LUXURY_SHOWCASE_VEHICLE_1_WINDOW_TINT_COLOUR */;
			uParam1->f_9[22] = Global_262145.f_32718 /* Tunable: LUXURY_SHOWCASE_VEHICLE_1_XENON_LIGHTS */;
			break;
		case 1:
			uParam1->f_5 = Global_262145.f_32720 /* Tunable: LUXURY_SHOWCASE_VEHICLE_2_COLOUR_1 */;
			uParam1->f_6 = Global_262145.f_32721 /* Tunable: LUXURY_SHOWCASE_VEHICLE_2_COLOUR_2 */;
			uParam1->f_7 = Global_262145.f_32722 /* Tunable: LUXURY_SHOWCASE_VEHICLE_2_EXTRA_COLOUR_1 */;
			uParam1->f_8 = Global_262145.f_32723 /* Tunable: LUXURY_SHOWCASE_VEHICLE_2_EXTRA_COLOUR_2 */;
			uParam1->f_97 = Global_262145.f_32724 /* Tunable: LUXURY_SHOWCASE_VEHICLE_2_COLOUR_5 */;
			uParam1->f_99 = Global_262145.f_32725 /* Tunable: LUXURY_SHOWCASE_VEHICLE_2_COLOUR_6 */;
			uParam1->f_9[48] = Global_262145.f_32726 /* Tunable: LUXURY_SHOWCASE_VEHICLE_2_LIVERY */;
			uParam1->f_69 = Global_262145.f_32727 /* Tunable: LUXURY_SHOWCASE_VEHICLE_2_WHEEL_TYPE */;
			uParam1->f_9[23] = Global_262145.f_32728 /* Tunable: LUXURY_SHOWCASE_VEHICLE_2_WHEEL_ID */;
			uParam1->f_65 = Global_262145.f_32729 /* Tunable: LUXURY_SHOWCASE_VEHICLE_2_WINDOW_TINT_COLOUR */;
			uParam1->f_9[22] = Global_262145.f_32730 /* Tunable: LUXURY_SHOWCASE_VEHICLE_2_XENON_LIGHTS */;
			break;
	}
	__LIB_8__::func_263(iParam2, uParam1);
}

Vector3 func_796(int iParam0)//Position - 0x737DF
{
	switch (iParam0)
	{
		case 0:
			return 0f, 0f, 160f;
		case 1:
			return 0f, 0f, 90f;
		default:
	}
	return __LIB_3__::func_554();
}

Vector3 func_797(int iParam0)//Position - 0x73812
{
	switch (iParam0)
	{
		case 0:
			return -790.3807f, -236.1494f, 37f;
		case 1:
			return -786.5285f, -243.1308f, 37f;
		default:
	}
	return __LIB_3__::func_554();
}

int func_799(int iParam0)//Position - 0x73873
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_32707 /* Tunable: LUXURY_SHOWCASE_VEHICLE_1_MODEL_HASH */;
			break;
		case 1:
			return Global_262145.f_32719 /* Tunable: LUXURY_SHOWCASE_VEHICLE_2_MODEL_HASH */;
			break;
	}
	return 0;
}

int func_800()//Position - 0x738A9
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 1;
	}
	if (Global_262145.f_32662 /* Tunable: DISABLE_LUXURY_SHOWROOM */)
	{
		return 1;
	}
	if (__LIB_0__::func_959())
	{
		return 1;
	}
	if (__LIB_3__::func_559() && !__LIB_0__::func_890(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (__LIB_0__::func_889(PLAYER::PLAYER_ID()) && CAM::IS_SCREEN_FADED_OUT())
	{
		return 1;
	}
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && MISC::GET_DISTANCE_BETWEEN_COORDS(__LIB_0__::func_85(PLAYER::PLAYER_ID()), __LIB_29__::func_121(), true) > 210f)
	{
		return 1;
	}
	return 0;
}

void func_813()//Position - 0x73AE6
{
	func_815();
	func_731();
	__LIB_3__::func_122(&(Local_164.f_3));
	func_776(&(Local_164.f_1216));
	if ((__LIB_0__::func_1("LUX_SRM_H_SOON" /* GXT: This vehicle will be available for purchase soon. */) || __LIB_0__::func_1("LUX_SRM_MSN" /* GXT: Luxury Autos is unavailable whilst on a mission. */)) || __LIB_0__::func_1("LUX_SRM_WANTED" /* GXT: Luxury Autos is unavailable while you have a Wanted Level. */))
	{
		HUD::CLEAR_HELP(true);
	}
	if (Local_164.f_9 > 1)
	{
		func_718();
	}
	__LIB_0__::func_202();
}

void func_815()//Position - 0x73B4F
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_164.f_6[iVar0]))
		{
			VEHICLE::DELETE_VEHICLE(&(Local_164.f_6[iVar0]));
		}
		iVar0++;
	}
}

void func_816()//Position - 0x73B84
{
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, false, -1);
	__LIB_0__::func_895(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&uLocal_130, 1, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&uLocal_131, 33, 0);
	if (!__LIB_0__::func_934())
	{
		func_813();
	}
	Local_164.f_10.f_7 = 464231/*func_715*/;
	__LIB_8__::func_908(&(Local_164.f_10), Local_164.f_10.f_7);
	__LIB_12__::func_26(&(Local_164.f_10), 185);
	__LIB_12__::func_27(&(Local_164.f_1220));
	func_778(&(Local_164.f_10), 1);
}

