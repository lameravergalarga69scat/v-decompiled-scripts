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
		__LIB_7__.func_300();
	}
	while (true)
	{
		__LIB_0__.func_671();
		if (func_800())
		{
			__LIB_7__.func_300();
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
			__LIB_4__.func_554();
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
	if (__LIB_0__.func_86(Var0) || __LIB_0__.func_86(Var1))
	{
		return 0;
	}
	if (!__LIB_0__.func_121(PLAYER::PLAYER_PED_ID()))
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
		if (!__LIB_0__.func_121(Local_164.f_6[iVar3]))
		{
			return 0;
		}
		Var4 = { ENTITY::GET_ENTITY_COORDS(Local_164.f_6[iVar3], true) };
		Var5 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		fVar6 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
		fVar7 = __LIB_0__.func_670(Var5, Var4);
		if (__LIB_2__.func_336(fVar7, fVar6, 50f) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var0, Var1, fVar2, false, true, 1))
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
	if (__LIB_1__.func_523() != 0 || uParam8)
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPCarHUD", false);
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPCarHUD2", false);
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPCarHUD3", false);
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPCarHUD4", false);
		if ((((GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPCarHUD") && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPCarHUD2")) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPCarHUD3")) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPCarHUD4")) && uParam0->f_164 <= 0f)
		{
			uParam0->f_164 = (500f / 1000f);
			PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), uParam1);
			__LIB_5__.func_106(uParam2, uParam1);
			iVar1 = 0;
			while (iVar1 < 12)
			{
				if ((*uParam2)[iVar1] != (*uParam1)[iVar1])
				{
					uParam0->f_150[iVar1] = 1;
					(*uParam2)[iVar1] = (*uParam1)[iVar1];
				}
				if (__LIB_0__.func_121((*uParam1)[iVar1]))
				{
					if (__LIB_0__.func_657((*uParam1)[iVar1], 1))
					{
						iVar5 = __LIB_7__.func_140((*uParam1)[iVar1]);
						if (__LIB_0__.func_154(iVar5, 1, 0))
						{
							if (__LIB_1__.func_174(iVar5))
							{
							}
							else
							{
								iVar6 = ENTITY::GET_ENTITY_MODEL((*uParam1)[iVar1]);
								if (iVar6 == joaat("slamtruck") && !__LIB_0__.func_657((*uParam1)[iVar1], 1))
								{
								}
								else
								{
									Var0 = { ENTITY::GET_ENTITY_COORDS((*uParam1)[iVar1], true) };
									if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT((*uParam1)[iVar1], false) && SYSTEM::VDIST(__LIB_0__.func_85(PLAYER::PLAYER_ID()), Var0) <= 15f)
									{
										StringCopy(&Var7, "MP_CAR_STATS_", 16);
										if (iVar1 < 9)
										{
											StringConCat(&Var7, "0", 16);
										}
										StringIntConCat(&Var7, iVar1 + 1, 16);
										__LIB_9__.func_113(iVar6, &(Var0.f_2));
										if (__LIB_5__.func_105(uParam6[iVar1], &Var7) && uParam0->f_150[iVar1])
										{
											*(uParam4[iVar1 /*3*/]) = { Var0 };
											(*uParam5)[iVar1] = __LIB_18__.func_308(iVar6);
											StringCopy(&Var2, "", 32);
											StringCopy(&Var3, "", 24);
											StringCopy(&cVar4, "", 24);
											__LIB_7__.func_982((*uParam1)[iVar1], &Var3, &cVar4);
											StringCopy(&Var2, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iVar6), 32);
											__LIB_19__.func_84((*uParam1)[iVar1], uParam3[iVar1 /*6*/]);
											GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD((*uParam6)[iVar1], "SET_VEHICLE_INFOR_AND_STATS");
											GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_TWO_STRINGS" /* GXT: ~a~ ~a~ */);
											HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(__LIB_7__.func_794(iVar6, 1));
											HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Var2);
											GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
											if (!__LIB_0__.func_657((*uParam1)[iVar1], 1))
											{
												if (__LIB_0__.func_113(iVar6))
												{
													__LIB_32__.func_358(iVar6);
												}
												else
												{
													__LIB_0__.func_478("CMRC_COMINGSOON" /* GXT: COMING SOON */);
												}
											}
											else
											{
												__LIB_0__.func_478("");
											}
											GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(&cVar4);
											GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(&Var3);
											__LIB_0__.func_478("FMMC_VEHST_0" /* GXT: Top Speed */);
											__LIB_0__.func_478("FMMC_VEHST_1" /* GXT: Acceleration */);
											__LIB_0__.func_478("FMMC_VEHST_2" /* GXT: Braking */);
											__LIB_0__.func_478("FMMC_VEHST_3" /* GXT: Traction */);
											GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND((*uParam3[iVar1 /*6*/])[0]));
											GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND((*uParam3[iVar1 /*6*/])[1]));
											GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND((*uParam3[iVar1 /*6*/])[2]));
											GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND((*uParam3[iVar1 /*6*/])[3]));
											GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
											if (__LIB_0__.func_657((*uParam1)[iVar1], 1))
											{
												if (__LIB_0__.func_154(iVar5, 1, 0))
												{
													StringCopy(&Var8, "", 16);
													StringCopy(&Var2, PLAYER::GET_PLAYER_NAME(iVar5), 32);
													__LIB_18__.func_471(iVar5, &Var8);
													GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD((*uParam6)[iVar1], "SET_PLAYER_NAME");
													__LIB_0__.func_514(&Var2);
													GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
													if (!__LIB_1__.func_884(&Var8))
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
									if (SYSTEM::VDIST(__LIB_0__.func_85(PLAYER::PLAYER_ID()), Var0) <= 15f)
									{
										if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) && SYSTEM::VDIST(__LIB_0__.func_85(PLAYER::PLAYER_ID()), Var0) < 3.5f)
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
	if (__LIB_0__.func_86(Param2))
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
	if (!__LIB_4__.func_549() || !func_3(0))
	{
		if (BitTest(Local_164.f_0, 0))
		{
			__LIB_4__.func_548();
			__LIB_4__.func_547();
			if (__LIB_0__.func_1("LUX_SRM_H_SOON" /* GXT: This vehicle will be available for purchase soon. */))
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
	__LIB_8__.func_717();
	if (BitTest(Local_164.f_0, 0))
	{
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
		__LIB_4__.func_539();
		func_690(func_705());
	}
	func_61(&(Local_164.f_10));
	if (__LIB_19__.func_79(&(Local_164.f_10)))
	{
		__LIB_7__.func_290();
		func_717(&(Local_164.f_10), 0);
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
		__LIB_4__.func_587(iParam0, 5);
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
			if (__LIB_4__.func_515(iParam0) == 1)
			{
				__LIB_25__.func_847(iParam0);
				return;
			}
			__LIB_8__.func_253(iParam0);
			__LIB_7__.func_967(iParam0, 1);
			break;
		case 6:
			__LIB_8__.func_253(iParam0);
			__LIB_7__.func_967(iParam0, 1);
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
	iVar2 = __LIB_7__.func_963(iParam0->f_388.f_66, bVar0, -1, 0);
	iVar3 = __LIB_3__.func_672(iParam0->f_1);
	bVar5 = true;
	bVar6 = false;
	bVar7 = false;
	iVar8 = func_312(iParam0, iParam0->f_4, 0);
	if (iVar8 == 0)
	{
		bVar7 = true;
	}
	uVar4 = func_312(iParam0, iParam0->f_4, 1);
	while (func_255(iParam0, &iVar1, iVar8, Global_75657.f_66, iVar2, iVar3, iParam0->f_4) && __LIB_8__.func_258())
	{
		return;
	}
	if (iVar1 == 2)
	{
		if (__LIB_0__.func_112())
		{
			NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(__LIB_1__.func_375(__LIB_2__.func_345()));
		}
		iVar9 = iParam0->f_388.f_66;
		if (iParam0->f_388.f_66 == joaat("landstalker2"))
		{
			iVar9 = MISC::GET_HASH_KEY(__LIB_5__.func_849(__LIB_0__.func_896(iParam0->f_388.f_66)));
		}
		bVar10 = MONEY::NETWORK_GET_VC_BANK_BALANCE() >= false;
		bVar11 = MONEY::NETWORK_GET_VC_BANK_BALANCE() < iVar8;
		MONEY::NETWORK_BUY_ITEM(iVar8, iVar9, 7, 1, bVar10, __LIB_5__.func_849(__LIB_0__.func_896(iParam0->f_388.f_66)), func_241(iParam0), 0, 0, bVar11);
		if (__LIB_0__.func_112())
		{
			__LIB_18__.func_226(__LIB_2__.func_345());
		}
		__LIB_8__.func_256(iParam0->f_388.f_66);
		iVar12 = __LIB_1__.func_556(2060, -1, 0);
		iVar13 = ((iVar12 / 1000000) + 1 * 1000000);
		if ((iVar12 + iVar8) >= iVar13)
		{
			__LIB_7__.func_969((iVar13 / 1000000) + 1);
		}
		if (!__LIB_38__.func_98(iParam0->f_388.f_66, -1))
		{
			__LIB_3__.func_437(1, 0, 0, 0, 0, 0, 0);
			bVar5 = false;
			bVar6 = true;
		}
		__LIB_4__.func_967(iParam0->f_4, iParam0->f_1, 1, bVar5, bVar6, 1, 1, 0, bVar7, -1, 0);
		__LIB_18__.func_327(iParam0->f_2, iParam0->f_1, -1);
		if (iParam0->f_1 != -1)
		{
			Global_1585857[iParam0->f_1 /*142*/].f_140 = uVar4;
		}
		__LIB_35__.func_839(iParam0->f_1);
		if (iParam0->f_2 >= 227 && iParam0->f_2 <= 256)
		{
			__LIB_4__.func_518((iParam0->f_2 - 227));
		}
		__LIB_40__.func_852(iParam0->f_4, iParam0->f_1);
		sVar14 = __LIB_19__.func_669(iParam0->f_388.f_66);
		iVar15 = __LIB_4__.func_517(iParam0);
		bVar16 = false;
		if (__LIB_7__.func_968(iParam0))
		{
			bVar16 = true;
		}
		if (bVar16)
		{
			sVar17 = __LIB_4__.func_516(iVar15, 0);
			sVar18 = __LIB_4__.func_516(iVar15, 1);
		}
		else
		{
			sVar17 = __LIB_40__.func_905(iParam0->f_388.f_66, sVar14, iParam0->f_2, 0);
			sVar18 = __LIB_40__.func_905(iParam0->f_388.f_66, sVar14, iParam0->f_2, 1);
		}
		__LIB_42__.func_10(iVar15, sVar17, 1, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(sVar14), -99, "", 1, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0);
		__LIB_5__.func_71(iVar15, sVar18, sVar14, "", Global_2815059.f_6778.f_1, -1, iParam0->f_1);
		__LIB_1__.func_597(2060, (iVar12 + iVar8), -1, 1, 0);
		__LIB_6__.func_881(-35837372, 0, 0);
		__LIB_4__.func_587(iParam0, 6);
	}
	else if (iVar1 == 3)
	{
		__LIB_4__.func_587(iParam0, 5);
	}
	else
	{
		iVar1 = 1;
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
		__LIB_0__.func_579(&(Global_2815059.f_2309[iParam0 /*44*/].f_41));
		Global_2815059.f_2309[iParam0 /*44*/].f_43 = 0;
	}
}

int func_241(var uParam0)//Position - 0x1BE26
{
	if (__LIB_2__.func_289(PLAYER::PLAYER_ID()))
	{
		return 825583449;
	}
	else if (__LIB_2__.func_344(PLAYER::PLAYER_ID()))
	{
		return 1021990419;
	}
	else if (__LIB_4__.func_521())
	{
		return -922984872;
	}
	else if (__LIB_4__.func_520(PLAYER::PLAYER_ID()))
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
	if (__LIB_0__.func_112())
	{
		if (!__LIB_8__.func_258())
		{
			uParam0->f_3 = 3;
		}
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(__LIB_0__.func_5()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
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
					__LIB_4__.func_514(uParam0, 1);
					return 0;
				}
				if (__LIB_32__.func_449(joaat("NET_SHOP_TTYPE_BASKET"), joaat("CATEGORY_INVENTORY_VEHICLE"), iParam4, joaat("NET_SHOP_ACTION_BUY_VEHICLE"), 1, iParam2, uParam3, 4, iParam5, 3))
				{
					if (__LIB_8__.func_259(uParam0))
					{
						if (__LIB_32__.func_449(joaat("NET_SHOP_TTYPE_BASKET"), joaat("CATEGORY_INVENTORY_VEHICLE"), iParam5, joaat("NET_SHOP_ACTION_BUY_VEHICLE"), 1, uVar0, uParam3, 4, joaat("PM_COUPON_ADD_VEH_MOD_P"), 3))
						{
						}
						else
						{
							uParam0->f_3 = 3;
							return 1;
						}
					}
					if (func_263(uParam0->f_1, iParam6, 1, 0))
					{
						if (__LIB_18__.func_472())
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
				iVar5 = __LIB_2__.func_345();
				if (iVar5 >= 0 && iVar5 < 15)
				{
					if (__LIB_2__.func_48(iVar5))
					{
						if (__LIB_2__.func_46(iVar5) == 2)
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
				__LIB_18__.func_226(__LIB_2__.func_345());
				uParam0->f_3 = 0;
				HUD::USE_FAKE_MP_CASH(false);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
				*iParam1 = 3;
				return 0;
				break;
		}
		if (uParam0->f_3 == 3)
		{
			__LIB_18__.func_226(__LIB_2__.func_345());
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
			__LIB_4__.func_514(uParam0, 1);
			return 0;
		}
	}
	uParam0->f_3 = 0;
	*iParam1 = 0;
	return 0;
}

int func_263(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x1F2D9
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	char* sVar4;
	struct<4> Var5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	bool bVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	var uVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	struct<4> Var22;
	var uVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	bool bVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	char* sVar36;
	iVar10 = __LIB_7__.func_962(ENTITY::GET_ENTITY_MODEL(iParam1));
	if (((!Global_4539334 || !ENTITY::DOES_ENTITY_EXIST(iParam1)) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false)) || VEHICLE::GET_NUM_MOD_KITS(iParam1) <= 0)
	{
		if (VEHICLE::GET_NUM_MOD_KITS(iParam1) <= 0 && __LIB_1__.func_376(ENTITY::GET_ENTITY_MODEL(iParam1)))
		{
			func_301(iParam1, &iVar0, &sVar3, &iVar6, &iVar1, &sVar4, &iVar7, &iVar2, &Var5, &iVar8, &iVar9, 0);
			if (!__LIB_37__.func_996(iParam0, "PACKED_MP_VEH_COLOUR1_0_v", &sVar3, 1, 24, iVar10, iVar0, iVar6))
			{
				return 0;
			}
			if (!__LIB_37__.func_996(iParam0, "PACKED_MP_VEH_COLOUR_EXTRA1_0_v", &Var5, 3, 24, iVar10, iVar2, iVar8))
			{
				return 0;
			}
			if (!__LIB_37__.func_995(iParam0, "PACKED_MP_VEH_PRIMARY_COLOUR_GROUP_v", __LIB_3__.func_669(iVar0)))
			{
				return 0;
			}
			if (!__LIB_37__.func_996(iParam0, "PACKED_MP_VEH_COLOUR2_0_v", &sVar4, 2, 25, iVar10, iVar1, iVar7))
			{
				return 0;
			}
			if (!__LIB_37__.func_995(iParam0, "PACKED_MP_VEH_SECONDARY_COLOUR_GROUP_v", __LIB_3__.func_669(iVar1)))
			{
				return 0;
			}
		}
		return 1;
	}
	if (iParam0 == -1)
	{
		iParam0 = 0;
	}
	bVar11 = true;
	if ((((((((((((((iParam0 == 10 || iParam0 == 11) || iParam0 == 12) || iParam0 == 23) || iParam0 == 24) || iParam0 == 25) || iParam0 == 36) || iParam0 == 37) || iParam0 == 38) || iParam0 == 49) || iParam0 == 50) || iParam0 == 51) || iParam0 == 62) || iParam0 == 63) || iParam0 == 64)
	{
		bVar11 = false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam1) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
	{
		iVar12 = __LIB_7__.func_790(ENTITY::GET_ENTITY_MODEL(iParam1));
		iVar13 = __LIB_4__.func_244(ENTITY::GET_ENTITY_MODEL(iParam1));
		iVar14 = __LIB_7__.func_789(ENTITY::GET_ENTITY_MODEL(iParam1));
		iVar15 = __LIB_18__.func_769(ENTITY::GET_ENTITY_MODEL(iParam1));
		iVar16 = __LIB_3__.func_665(iParam1);
		if (bVar11)
		{
			if (!__LIB_37__.func_994(iParam0, "PACKED_MP_VEH_MOD_IDX_0_v", "VEM_SPOILER", VEHICLE::GET_VEHICLE_MOD(iParam1, 0) + 1, 14, iVar12, -1, iParam1, 0))
			{
				return 0;
			}
			if (!__LIB_37__.func_994(iParam0, "PACKED_MP_VEH_MOD_IDX_1_v", "VEM_BUMPER_F", VEHICLE::GET_VEHICLE_MOD(iParam1, 1) + 1, 34, iVar12, -1, iParam1, 1))
			{
				return 0;
			}
			if (!__LIB_37__.func_994(iParam0, "PACKED_MP_VEH_MOD_IDX_2_v", "VEM_BUMPER_R", VEHICLE::GET_VEHICLE_MOD(iParam1, 2) + 11, 35, iVar12, -1, iParam1, 2))
			{
				return 0;
			}
			if (!__LIB_37__.func_994(iParam0, "PACKED_MP_VEH_MOD_IDX_3_v", "VEM_SKIRT", VEHICLE::GET_VEHICLE_MOD(iParam1, 3) + 1, 13, iVar12, -1, iParam1, 3))
			{
				return 0;
			}
			if (!__LIB_37__.func_994(iParam0, "PACKED_MP_VEH_MOD_IDX_4_v", "VEM_EXHAUST", VEHICLE::GET_VEHICLE_MOD(iParam1, 4) + 1, 6, iVar12, -1, iParam1, 4))
			{
				return 0;
			}
			if (!__LIB_37__.func_994(iParam0, "PACKED_MP_VEH_MOD_IDX_5_v", "VEM_CHASSIS", VEHICLE::GET_VEHICLE_MOD(iParam1, 5) + 1, 4, iVar12, -1, iParam1, 5))
			{
				return 0;
			}
			if (!__LIB_37__.func_994(iParam0, "PACKED_MP_VEH_MOD_IDX_6_v", "VEM_GRILL", VEHICLE::GET_VEHICLE_MOD(iParam1, 6) + 1, 8, iVar12, -1, iParam1, 6))
			{
				return 0;
			}
			if (!__LIB_37__.func_994(iParam0, "PACKED_MP_VEH_MOD_IDX_7_v", "VEM_HOOD", VEHICLE::GET_VEHICLE_MOD(iParam1, 7) + 1, 9, iVar12, -1, iParam1, 7))
			{
				return 0;
			}
			if (!__LIB_37__.func_994(iParam0, "PACKED_MP_VEH_MOD_IDX_8_v", "VEM_FENDER_L", VEHICLE::GET_VEHICLE_MOD(iParam1, 8) + 1, 36, iVar12, -1, iParam1, 8))
			{
				return 0;
			}
			if (!__LIB_37__.func_994(iParam0, "PACKED_MP_VEH_MOD_IDX_9_v", "VEM_FENDER_R", VEHICLE::GET_VEHICLE_MOD(iParam1, 9) + 6, 37, iVar12, -1, iParam1, 9))
			{
				return 0;
			}
			if (!__LIB_37__.func_994(iParam0, "PACKED_MP_VEH_MOD_IDX_10_v", "VEM_ROOF", VEHICLE::GET_VEHICLE_MOD(iParam1, 10) + 1, 12, iVar12, iVar16, iParam1, 10))
			{
				return 0;
			}
			if (!__LIB_37__.func_994(iParam0, "PACKED_MP_VEH_MOD_IDX_11_v", "VEM_ENGINE", VEHICLE::GET_VEHICLE_MOD(iParam1, 11) + 1, 5, iVar12, -1, iParam1, 11))
			{
				return 0;
			}
			if (!__LIB_37__.func_994(iParam0, "PACKED_MP_VEH_MOD_IDX_12_v", "VEM_BRAKE", VEHICLE::GET_VEHICLE_MOD(iParam1, 12) + 1, 2, iVar12, -1, iParam1, 12))
			{
				return 0;
			}
			if (!__LIB_37__.func_994(iParam0, "PACKED_MP_VEH_MOD_IDX_13_v", "VEM_TRANS", VEHICLE::GET_VEHICLE_MOD(iParam1, 13) + 1, 16, iVar12, -1, iParam1, 13))
			{
				return 0;
			}
			if (!__LIB_37__.func_994(iParam0, "PACKED_MP_VEH_MOD_IDX_15_v", "VEM_SUSPENSION", VEHICLE::GET_VEHICLE_MOD(iParam1, 15) + 1, 15, iVar12, -1, iParam1, 15))
			{
				return 0;
			}
			if (!__LIB_37__.func_994(iParam0, "PACKED_MP_VEH_MOD_IDX_16_v", "VEM_ARMOUR", VEHICLE::GET_VEHICLE_MOD(iParam1, 16) + 1, 1, iVar12, -1, iParam1, 16))
			{
				return 0;
			}
			if (!__LIB_37__.func_994(iParam0, "PACKED_MP_VEH_MOD_IDX_18_v", "VEM_TURBO", __LIB_0__.func_847(VEHICLE::IS_TOGGLE_MOD_ON(iParam1, 18)), 17, iVar12, -1, 0, 23))
			{
				return 0;
			}
			if (!__LIB_37__.func_994(iParam0, "PACKED_MP_VEH_MOD_IDX_22_v", "VEM_HLIGHT", __LIB_0__.func_847(VEHICLE::IS_TOGGLE_MOD_ON(iParam1, 22)), 11, iVar12, -1, 0, 23))
			{
				return 0;
			}
			if (!__LIB_37__.func_994(iParam0, "PACKED_MP_VEH_MOD_IDX_S_0_v", "VEM_SUPERMOD_0", VEHICLE::GET_VEHICLE_MOD(iParam1, 25) + 1, 41, iVar13, -1, iParam1, 25))
			{
				return 0;
			}
			if (!__LIB_37__.func_994(iParam0, "PACKED_MP_VEH_MOD_IDX_S_1_v", "VEM_SUPERMOD_1", VEHICLE::GET_VEHICLE_MOD(iParam1, 26) + 1, 42, iVar13, -1, iParam1, 26))
			{
				return 0;
			}
			if (!__LIB_37__.func_994(iParam0, "PACKED_MP_VEH_MOD_IDX_S_2_v", "VEM_SUPERMOD_2", VEHICLE::GET_VEHICLE_MOD(iParam1, 27) + 1, 43, iVar13, -1, iParam1, 27))
			{
				return 0;
			}
			if (!__LIB_37__.func_994(iParam0, "PACKED_MP_VEH_MOD_IDX_S_3_v", "VEM_SUPERMOD_3", VEHICLE::GET_VEHICLE_MOD(iParam1, 28) + 1, 44, iVar13, -1, iParam1, 28))
			{
				return 0;
			}
			if (!__LIB_37__.func_994(iParam0, "PACKED_MP_VEH_MOD_IDX_S_4_v", "VEM_SUPERMOD_4", VEHICLE::GET_VEHICLE_MOD(iParam1, 29) + 1, 45, iVar13, -1, iParam1, 29))
			{
				return 0;
			}
			if (!__LIB_37__.func_994(iParam0, "PACKED_MP_VEH_MOD_IDX_S_5_v", "VEM_SUPERMOD_5", VEHICLE::GET_VEHICLE_MOD(iParam1, 30) + 1, 46, iVar13, -1, iParam1, 30))
			{
				return 0;
			}
			if (!__LIB_37__.func_994(iParam0, "PACKED_MP_VEH_MOD_IDX_S_6_v", "VEM_SUPERMOD_6", VEHICLE::GET_VEHICLE_MOD(iParam1, 31) + 1, 47, iVar13, -1, iParam1, 31))
			{
				return 0;
			}
			if (!__LIB_37__.func_994(iParam0, "PACKED_MP_VEH_MOD_IDX_S_7_v", "VEM_SUPERMOD_7", VEHICLE::GET_VEHICLE_MOD(iParam1, 32) + 1, 48, iVar13, -1, iParam1, 32))
			{
				return 0;
			}
			if (!__LIB_37__.func_994(iParam0, "PACKED_MP_VEH_MOD_IDX_S_8_v", "VEM_SUPERMOD_8", VEHICLE::GET_VEHICLE_MOD(iParam1, 33) + 1, 49, iVar13, -1, iParam1, 33))
			{
				return 0;
			}
			if (!__LIB_37__.func_994(iParam0, "PACKED_MP_VEH_MOD_IDX_S_9_v", "VEM_SUPERMOD_9", VEHICLE::GET_VEHICLE_MOD(iParam1, 34) + 1, 50, iVar13, -1, iParam1, 34))
			{
				return 0;
			}
			if (!__LIB_37__.func_994(iParam0, "PACKED_MP_VEH_MOD_IDX_S_10_v", "VEM_SUPERMOD_10", VEHICLE::GET_VEHICLE_MOD(iParam1, 35) + 1, 51, iVar13, -1, iParam1, 35))
			{
				return 0;
			}
			if (!__LIB_37__.func_994(iParam0, "PACKED_MP_VEH_MOD_IDX_S_11_v", "VEM_SUPERMOD_11", VEHICLE::GET_VEHICLE_MOD(iParam1, 36) + 1, 52, iVar13, -1, iParam1, 36))
			{
				return 0;
			}
			if (!__LIB_37__.func_994(iParam0, "PACKED_MP_VEH_MOD_IDX_S_12_v", "VEM_SUPERMOD_12", VEHICLE::GET_VEHICLE_MOD(iParam1, 37) + 1, 53, iVar13, -1, iParam1, 37))
			{
				return 0;
			}
			if (!__LIB_37__.func_994(iParam0, "PACKED_MP_VEH_MOD_IDX_S_13_v", "VEM_SUPERMOD_13", VEHICLE::GET_VEHICLE_MOD(iParam1, 38) + 1, 54, iVar13, -1, iParam1, 38))
			{
				return 0;
			}
			if (!__LIB_37__.func_994(iParam0, "PACKED_MP_VEH_MOD_IDX_S_14_v", "VEM_SUPERMOD_14", VEHICLE::GET_VEHICLE_MOD(iParam1, 39) + 1, 55, iVar13, -1, iParam1, 39))
			{
				return 0;
			}
			if (!__LIB_37__.func_994(iParam0, "PACKED_MP_VEH_MOD_IDX_S_15_v", "VEM_SUPERMOD_15", VEHICLE::GET_VEHICLE_MOD(iParam1, 40) + 1, 56, iVar13, -1, iParam1, 40))
			{
				return 0;
			}
			if (!__LIB_37__.func_994(iParam0, "PACKED_MP_VEH_MOD_IDX_S_16_v", "VEM_SUPERMOD_16", VEHICLE::GET_VEHICLE_MOD(iParam1, 41) + 1, 57, iVar13, -1, iParam1, 41))
			{
				return 0;
			}
			if (!__LIB_37__.func_994(iParam0, "PACKED_MP_VEH_MOD_IDX_S_17_v", "VEM_SUPERMOD_17", VEHICLE::GET_VEHICLE_MOD(iParam1, 42) + 1, 58, iVar13, -1, iParam1, 42))
			{
				return 0;
			}
			if (!__LIB_37__.func_994(iParam0, "PACKED_MP_VEH_MOD_IDX_S_18_v", "VEM_SUPERMOD_18", VEHICLE::GET_VEHICLE_MOD(iParam1, 43) + 1, 59, iVar13, -1, iParam1, 43))
			{
				return 0;
			}
			if (!__LIB_37__.func_994(iParam0, "PACKED_MP_VEH_MOD_IDX_S_19_v", "VEM_SUPERMOD_19", VEHICLE::GET_VEHICLE_MOD(iParam1, 44) + 1, 60, iVar13, -1, iParam1, 44))
			{
				return 0;
			}
			if (!__LIB_37__.func_994(iParam0, "PACKED_MP_VEH_MOD_IDX_S_20_v", "VEM_SUPERMOD_20", VEHICLE::GET_VEHICLE_MOD(iParam1, 45) + 1, 61, iVar13, -1, iParam1, 45))
			{
				return 0;
			}
			if (!__LIB_37__.func_994(iParam0, "PACKED_MP_VEH_MOD_IDX_S_21_v", "VEM_SUPERMOD_21", VEHICLE::GET_VEHICLE_MOD(iParam1, 46) + 1, 62, iVar13, -1, iParam1, 46))
			{
				return 0;
			}
			if (!__LIB_37__.func_994(iParam0, "PACKED_MP_VEH_MOD_IDX_S_22_v", "VEM_SUPERMOD_22", VEHICLE::GET_VEHICLE_MOD(iParam1, 47) + 1, 63, iVar13, -1, iParam1, 47))
			{
				return 0;
			}
			if (!__LIB_37__.func_994(iParam0, "PACKED_MP_VEH_MOD_IDX_S_23_v", "VEM_SUPERMOD_23", VEHICLE::GET_VEHICLE_MOD(iParam1, 48) + 1, 64, iVar14, -1, iParam1, 48))
			{
				return 0;
			}
		}
		if (bVar11)
		{
			uVar17 = __LIB_3__.func_664(VEHICLE::GET_VEHICLE_MOD_IDENTIFIER_HASH(iParam1, 14, VEHICLE::GET_VEHICLE_MOD(iParam1, 14)));
			if (!__LIB_37__.func_993(iParam0, "PACKED_MP_VEH_MOD_IDX_14_v", __LIB_3__.func_663(uVar17), 10, iVar12))
			{
				return 0;
			}
		}
		if (bVar11)
		{
			if (!__LIB_37__.func_992(iParam0, "PACKED_MP_VEH_MOD_IDX_23_v", iParam1, 23, iVar15))
			{
				return 0;
			}
			if (!__LIB_37__.func_992(iParam0, "PACKED_MP_VEH_MOD_IDX_24_v", iParam1, 24, iVar15))
			{
				return 0;
			}
		}
		if (!__LIB_37__.func_991(iParam0, "PACKED_MP_VEH_WHEEL_TYPE_0_v", iParam1))
		{
			return 0;
		}
		if (bVar11)
		{
			iVar18 = 0;
			switch (VEHICLE::GET_VEHICLE_WINDOW_TINT(iParam1))
			{
				case 0:
					iVar18 = 0;
					break;
				case 3:
					iVar18 = 1;
					break;
				case 2:
					iVar18 = 2;
					break;
				case 1:
					iVar18 = 3;
					break;
				case 4:
					iVar18 = 4;
					break;
				case 5:
					iVar18 = 5;
					break;
			}
			if (!__LIB_37__.func_994(iParam0, "PACKED_MP_VEH_WINDOW_TINT_0_v", "VEM_CMOD_WIN", iVar18, 33, iVar12, -1, 0, 23))
			{
				return 0;
			}
		}
		if (bVar11)
		{
			iVar19 = 0;
			switch (VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam1))
			{
				case 3:
					iVar19 = 0;
					break;
				case 0:
					iVar19 = 1;
					break;
				case 4:
					iVar19 = 2;
					break;
				case 2:
					iVar19 = 3;
					break;
				case 1:
					iVar19 = 4;
					break;
			}
			if (!__LIB_37__.func_994(iParam0, "PACKED_MP_VEH_PLATE_ID_v", "VEM_CMOD_PLA", iVar19, 23, iVar12, -1, 0, 23))
			{
				return 0;
			}
		}
		if (bVar11)
		{
			if (VEHICLE::GET_VEHICLE_MOD_VARIATION(iParam1, 23) == 0)
			{
				if (!__LIB_37__.func_994(iParam0, "PACKED_MP_VEH_MOD_VAR_0_v", "VEM_CMOD_TYR", 0, 31, iVar12, -1, 0, 23))
				{
					return 0;
				}
			}
			else if (!__LIB_37__.func_994(iParam0, "PACKED_MP_VEH_MOD_VAR_0_v", "VEM_CMOD_TYR", 1, 32, iVar12, -1, 0, 23))
			{
				return 0;
			}
			if (VEHICLE::GET_VEHICLE_MOD_VARIATION(iParam1, 24) == 0)
			{
				if (!__LIB_37__.func_994(iParam0, "PACKED_MP_VEH_MOD_VAR_1_v", "VEM_CMOD_TYR", 0, 31, iVar12, -1, 0, 23))
				{
					return 0;
				}
			}
			else if (!__LIB_37__.func_994(iParam0, "PACKED_MP_VEH_MOD_VAR_1_v", "VEM_CMOD_TYR", 1, 32, iVar12, -1, 0, 23))
			{
				return 0;
			}
		}
		func_301(iParam1, &iVar0, &sVar3, &iVar6, &iVar1, &sVar4, &iVar7, &iVar2, &Var5, &iVar8, &iVar9, 1);
		iVar20 = __LIB_3__.func_661(iVar9);
		if (!__LIB_37__.func_994(iParam0, "PACKED_MP_VEH_COLOUR_EXTRA2_0_v", "VEM_CMOD_COL5", iVar20, 29, iVar10, -1, 0, 23))
		{
			return 0;
		}
		VEHICLE::SET_VEHICLE_COLOURS(iParam1, iVar6, iVar7);
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam1, iVar8, iVar9);
		if (bParam3)
		{
			while (__LIB_0__.func_264(iVar21, &Var22, &uVar23, &iVar24, &iVar25))
			{
				if (iVar24 == iVar6 && iVar25 == iVar8)
				{
					Var5 = { Var22 };
				}
				iVar21++;
			}
		}
		if (!__LIB_37__.func_996(iParam0, "PACKED_MP_VEH_COLOUR1_0_v", &sVar3, 1, 24, iVar10, iVar0, iVar6))
		{
			return 0;
		}
		if (!__LIB_37__.func_996(iParam0, "PACKED_MP_VEH_COLOUR_EXTRA1_0_v", &Var5, 3, 24, iVar10, iVar2, iVar8))
		{
			return 0;
		}
		if (!__LIB_37__.func_995(iParam0, "PACKED_MP_VEH_PRIMARY_COLOUR_GROUP_v", __LIB_3__.func_669(iVar0)))
		{
			return 0;
		}
		if (!__LIB_37__.func_996(iParam0, "PACKED_MP_VEH_COLOUR2_0_v", &sVar4, 2, 25, iVar10, iVar1, iVar7))
		{
			return 0;
		}
		if (!__LIB_37__.func_995(iParam0, "PACKED_MP_VEH_SECONDARY_COLOUR_GROUP_v", __LIB_3__.func_669(iVar1)))
		{
			return 0;
		}
		VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(iParam1, &iVar26, &iVar27, &iVar28);
		switch (__LIB_7__.func_788(iVar26, iVar27, iVar28))
		{
			case 1:
				iVar29 = 3;
				break;
			case 2:
				iVar29 = 4;
				break;
			case 3:
				iVar29 = 5;
				break;
			case 4:
				iVar29 = 6;
				break;
			case 5:
				iVar29 = 11;
				break;
			case 6:
				iVar29 = 7;
				break;
			case 7:
				iVar29 = 10;
				break;
			case 8:
				iVar29 = 8;
				break;
			case 9:
				iVar29 = 12;
				break;
			case 10:
				iVar29 = 13;
				break;
			case 11:
				iVar29 = -1;
				break;
			case 12:
				iVar29 = 9;
				break;
			case 0:
				if (__LIB_1__.func_177(ENTITY::GET_ENTITY_MODEL(iParam1)) || VEHICLE::IS_VEHICLE_MODEL(iParam1, joaat("oppressor2")))
				{
					iVar29 = 255;
					break;
				}
				break;
		}
		if (bVar11)
		{
			if (!__LIB_37__.func_990(iParam0, "PACKED_NG_VEHICLE_SMOKE_v", "VEM_CMOD_TYR", iVar29, 18, iVar12))
			{
				return 0;
			}
		}
		iVar30 = __LIB_3__.func_659(VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam1, 2), (VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam1, 0) || VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam1, 1)), VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam1, 3));
		if (bVar11)
		{
			if (!__LIB_37__.func_989(iParam0, "PACKED_NG_VEHICLE_NEON_KIT_v", "VEM_CMOD_NEONLAY", iVar30, 21, iVar12, 1))
			{
				return 0;
			}
		}
		VEHICLE::GET_VEHICLE_NEON_COLOUR(iParam1, &iVar26, &iVar27, &iVar28);
		iVar31 = __LIB_7__.func_253(iVar26, iVar27, iVar28);
		if (bVar11)
		{
			if (!__LIB_37__.func_989(iParam0, "PACKED_NG_VEHICLE_NEON_v", "VEM_CMOD_NEONCOL", iVar31, 21, iVar12, 0))
			{
				return 0;
			}
		}
		if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(iParam1) > 1)
		{
			if (!__LIB_37__.func_994(iParam0, "PACKED_MP_VEH_LIVERY_0_v", "VEM_LIVERY", VEHICLE::GET_VEHICLE_LIVERY(iParam1), 26, iVar12, __LIB_3__.func_658(ENTITY::GET_ENTITY_MODEL(iParam1)), 0, 23))
			{
				return 0;
			}
		}
		if (VEHICLE::GET_VEHICLE_LIVERY2_COUNT(iParam1) > 1)
		{
			if (!__LIB_37__.func_994(iParam0, "PACKED_MP_VEH_LIVERY2_0_v", "VEM_LIVERY2", VEHICLE::GET_VEHICLE_LIVERY2(iParam1), 39, iVar14, __LIB_3__.func_658(ENTITY::GET_ENTITY_MODEL(iParam1)), 0, 23))
			{
				return 0;
			}
		}
		if (bVar11)
		{
			if (!VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(iParam1))
			{
				if (!__LIB_37__.func_988(iParam0, "PACKED_NG_VEHICLE_BPT_v", "VEM_CMOD_TYR_2", 30, iVar12))
				{
					return 0;
				}
			}
		}
		if (bVar11)
		{
			VEHICLE::GET_VEHICLE_EXTRA_COLOUR_5(iParam1, &iVar35);
			bVar32 = false;
			iVar33 = 0;
			while (__LIB_3__.func_657(iVar33, &iVar34) && !bVar32)
			{
				if (iVar34 == iVar35)
				{
					bVar32 = true;
					sVar36 = __LIB_3__.func_656(iVar33);
				}
				else
				{
					iVar33++;
				}
			}
			if (bVar32)
			{
				__LIB_37__.func_987(iParam0, "PACKED_LR_VEHICLE_COLOUR_5_v", sVar36, 38, 5, 3);
			}
			VEHICLE::GET_VEHICLE_EXTRA_COLOUR_6(iParam1, &iVar35);
			bVar32 = false;
			iVar33 = 0;
			while (__LIB_2__.func_375(iVar33, &iVar34) && !bVar32)
			{
				if (iVar34 == iVar35)
				{
					bVar32 = true;
					sVar36 = __LIB_3__.func_655(iVar33);
				}
				else
				{
					iVar33++;
				}
			}
			if (!bVar32)
			{
				if (iVar35 == 0)
				{
					sVar36 = "VEM_COLOUR_6_BLACK_t65_v3";
					bVar32 = true;
				}
				else if (iVar35 == 132)
				{
					sVar36 = "VEM_COLOUR_6_DEFAULT_t65_v3";
					bVar32 = true;
				}
			}
			if (bVar32)
			{
				__LIB_37__.func_987(iParam0, "PACKED_LR_VEHICLE_COLOUR_6_v", sVar36, 65, 6, 3);
			}
		}
		if (iParam2 && bVar11)
		{
			if (!__LIB_37__.func_986(iParam0, "PACKED_NG_VEHICLE_INSURANCE_v", ENTITY::GET_ENTITY_MODEL(iParam1)))
			{
				return 0;
			}
		}
		else if (bVar11)
		{
			if (!__LIB_37__.func_985(iParam0, "PACKED_NG_VEHICLE_INSURANCE_v"))
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

void func_301(int iParam0, int* iParam1, char* sParam2, int* iParam3, int* iParam4, char* sParam5, int* iParam6, int iParam7, char* sParam8, int* iParam9, int* iParam10, bool bParam11)//Position - 0x25B1B
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	var uVar9;
	VEHICLE::GET_VEHICLE_COLOURS(iParam0, iParam3, iParam6);
	VEHICLE::GET_VEHICLE_EXTRA_COLOURS(iParam0, iParam9, iParam10);
	StringCopy(sParam2, "", 16);
	StringCopy(sParam5, "", 16);
	StringCopy(sParam8, "", 16);
	if (bParam11)
	{
		VEHICLE::GET_VEHICLE_MOD_COLOR_1(iParam0, iParam1, &uVar0, &iVar2);
		VEHICLE::GET_VEHICLE_MOD_COLOR_2(iParam0, iParam4, &uVar1);
	}
	if (bParam11)
	{
		iVar3 = 0;
		while (iVar3 != 7)
		{
			if (!__LIB_13__.func_418(iVar3))
			{
				iVar5 = VEHICLE::GET_NUM_MOD_COLORS(iVar3, true);
				iVar4 = 0;
				while (iVar4 < iVar5)
				{
					VEHICLE::SET_VEHICLE_MOD_COLOR_1(iParam0, iVar3, iVar4, iVar2);
					VEHICLE::GET_VEHICLE_COLOURS(iParam0, &iVar6, &uVar9);
					if (iVar6 == *iParam3)
					{
						*iParam1 = iVar3;
						StringCopy(sParam2, VEHICLE::GET_VEHICLE_MOD_COLOR_1_NAME(iParam0, false), 16);
						iVar4 = iVar5 + 1;
					}
					iVar4++;
				}
			}
			if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
			{
				iVar3++;
			}
			else
			{
				iVar3 = 7;
			}
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		*iParam1 = 7;
		IntToString(sParam2, *iParam3, 16);
	}
	if (bParam11)
	{
		iVar4 = 0;
		iVar5 = VEHICLE::GET_NUM_MOD_COLORS(0, true);
		iVar4 = 0;
		while (iVar4 < iVar5)
		{
			VEHICLE::SET_VEHICLE_MOD_COLOR_1(iParam0, 0, iVar4, iVar4);
			VEHICLE::GET_VEHICLE_EXTRA_COLOURS(iParam0, &iVar8, &uVar9);
			if (iVar8 == *iParam9)
			{
				StringCopy(sParam8, VEHICLE::GET_VEHICLE_MOD_COLOR_1_NAME(iParam0, false), 16);
				iVar4 = iVar5 + 1;
			}
			iVar4++;
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		IntToString(sParam8, *iParam9, 16);
		*iParam7 = 7;
	}
	else
	{
		*iParam7 = *iParam1;
	}
	if (bParam11)
	{
		iVar3 = 0;
		while (iVar3 != 7)
		{
			if (!__LIB_13__.func_418(iVar3))
			{
				iVar4 = 0;
				iVar5 = VEHICLE::GET_NUM_MOD_COLORS(iVar3, true);
				iVar4 = 0;
				while (iVar4 < iVar5)
				{
					VEHICLE::SET_VEHICLE_MOD_COLOR_2(iParam0, iVar3, iVar4);
					VEHICLE::GET_VEHICLE_COLOURS(iParam0, &uVar9, &iVar7);
					if (iVar7 == *iParam6)
					{
						*iParam4 = iVar3;
						StringCopy(sParam5, VEHICLE::GET_VEHICLE_MOD_COLOR_2_NAME(iParam0), 16);
						iVar4 = iVar5 + 1;
					}
					iVar4++;
				}
			}
			if (MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
			{
				iVar3++;
			}
			else
			{
				iVar3 = 7;
			}
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
	{
		*iParam4 = 7;
		IntToString(sParam5, *iParam6, 16);
	}
	VEHICLE::SET_VEHICLE_COLOURS(iParam0, *iParam3, *iParam6);
	VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam0, *iParam9, *iParam10);
}

int func_312(var uParam0, int iParam1, bool bParam2)//Position - 0x26463
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (__LIB_0__.func_121(iParam1))
	{
		bVar0 = func_484(ENTITY::GET_ENTITY_MODEL(iParam1));
		iVar2 = __LIB_0__.func_896(ENTITY::GET_ENTITY_MODEL(iParam1));
		iVar1 = func_402(-1, iVar2, bVar0);
		if (iVar1 <= -1)
		{
			__LIB_7__.func_973(&iVar3, ENTITY::GET_ENTITY_MODEL(iParam1), bVar0, -1);
			iVar1 = iVar3;
		}
		if (!bParam2)
		{
			if (__LIB_8__.func_259(uParam0))
			{
				Global_1585308 = iParam1;
				Global_1585307 = __LIB_7__.func_790(ENTITY::GET_ENTITY_MODEL(iParam1));
				if (__LIB_9__.func_911(iParam1))
				{
					iVar1 = (iVar1 + func_351(73, 0, 0, 0, 0, 0));
				}
				iVar1 = (iVar1 + func_315(iParam1, 39, 0, 0, 0, 1));
			}
			if (__LIB_7__.func_971(uParam0) != 0f)
			{
				iVar1 = SYSTEM::CEIL((IntToFloat(iVar1) * ((100f - MISC::ABSF(__LIB_7__.func_971(uParam0))) / 100f)));
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
			__LIB_4__.func_538(iParam0, iParam1, iParam2);
			iVar0 = 0;
			if (!bParam5)
			{
				if (__LIB_1__.func_177(ENTITY::GET_ENTITY_MODEL(iParam0)))
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
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 0) != -1 && !__LIB_8__.func_262(iParam0, 0, VEHICLE::GET_VEHICLE_MOD(iParam0, 0), 0))
				{
					iVar1 = func_351(__LIB_8__.func_261(0, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 0) + 1, 0, 0, 0, 1);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 3) != -1)
				{
					iVar1 = func_351(__LIB_8__.func_261(3, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 3) + 1, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 4) != -1)
				{
					iVar1 = func_351(__LIB_8__.func_261(4, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 4) + 1, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 5) != -1 && !__LIB_8__.func_262(iParam0, 5, VEHICLE::GET_VEHICLE_MOD(iParam0, 5), 0))
				{
					iVar1 = func_351(__LIB_8__.func_261(5, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 5) + 1, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 6) != -1 && !__LIB_8__.func_262(iParam0, 6, VEHICLE::GET_VEHICLE_MOD(iParam0, 6), 0))
				{
					iVar1 = func_351(__LIB_8__.func_261(6, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 6) + 1, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 7) != -1)
				{
					iVar1 = func_351(__LIB_8__.func_261(7, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 7) + 1, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 10) != -1)
				{
					iVar1 = func_351(__LIB_8__.func_261(10, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 10) + 1, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 11) != -1)
				{
					iVar1 = func_351(__LIB_8__.func_261(11, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 11) + 1, 0, 0, 0, 1);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 12) != -1)
				{
					iVar1 = func_351(__LIB_8__.func_261(12, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 12) + 1, 0, 0, 0, 1);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 13) != -1 && !__LIB_8__.func_262(iParam0, 13, VEHICLE::GET_VEHICLE_MOD(iParam0, 13), 0))
				{
					iVar1 = func_351(__LIB_8__.func_261(13, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 13) + 1, 0, 0, 0, 1);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 14) != -1)
				{
					iVar3 = __LIB_3__.func_664(VEHICLE::GET_VEHICLE_MOD_IDENTIFIER_HASH(iParam0, 14, VEHICLE::GET_VEHICLE_MOD(iParam0, 14)));
					iVar1 = func_351(__LIB_8__.func_261(14, 0, 0), iVar3, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 15) != -1)
				{
					iVar1 = func_351(__LIB_8__.func_261(15, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 15) + 1, 0, 0, 0, 1);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 16) != -1 && !__LIB_8__.func_262(iParam0, 16, VEHICLE::GET_VEHICLE_MOD(iParam0, 16), 0))
				{
					iVar1 = func_351(__LIB_8__.func_261(16, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 16) + 1, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 23) != -1)
				{
					iVar1 = __LIB_35__.func_871(VEHICLE::GET_MOD_TEXT_LABEL(iParam0, 23, VEHICLE::GET_VEHICLE_MOD(iParam0, 23)), VEHICLE::GET_VEHICLE_WHEEL_TYPE(iParam0), VEHICLE::GET_VEHICLE_MOD(iParam0, 23) + 1, VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iParam0)));
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 24) != -1 && VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iParam0)))
				{
					iVar1 = __LIB_35__.func_871(VEHICLE::GET_MOD_TEXT_LABEL(iParam0, 24, VEHICLE::GET_VEHICLE_MOD(iParam0, 24)), VEHICLE::GET_VEHICLE_WHEEL_TYPE(iParam0), VEHICLE::GET_VEHICLE_MOD(iParam0, 24) + 1, VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iParam0)));
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 1) != -1)
				{
					iVar1 = func_351(__LIB_8__.func_261(1, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 1) + 1, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 2) != -1)
				{
					iVar1 = func_351(__LIB_8__.func_261(2, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 2) + 1, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 8) != -1)
				{
					iVar1 = func_351(__LIB_8__.func_261(8, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 8) + 1, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 9) != -1 && !__LIB_8__.func_262(iParam0, 9, VEHICLE::GET_VEHICLE_MOD(iParam0, 9), 0))
				{
					iVar4 = VEHICLE::GET_VEHICLE_MOD(iParam0, 9);
					if (((((Global_1585307 == 29 || Global_1585307 == 30) || Global_1585307 == 34) || Global_1585307 == 33) || Global_1585307 == 38) || Global_1585307 == 39)
					{
						iVar4 += 21;
					}
					iVar1 = func_351(__LIB_8__.func_261(9, 0, 0), iVar4 + 1, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::IS_TOGGLE_MOD_ON(iParam0, 18) && !__LIB_8__.func_262(iParam0, 18, 1, 0))
				{
					iVar1 = func_351(__LIB_8__.func_261(18, 0, 0), 1, 0, 0, 0, 0);
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
					iVar1 = func_351(29, iVar5, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if ((!VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(iParam0) && !__LIB_8__.func_262(iParam0, -1, -1, 1)) && !__LIB_4__.func_529(iParam1, iParam2))
				{
					iVar1 = func_351(58, 2, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if ((VEHICLE::GET_DRIFT_TYRES_SET(iParam0) && !__LIB_8__.func_262(iParam0, -1, -1, 1)) && !__LIB_4__.func_529(iParam1, iParam2))
				{
					iVar1 = func_351(58, 1, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 25) != -1)
				{
					iVar1 = func_351(__LIB_8__.func_261(25, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 25) + 1, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 26) != -1)
				{
					iVar1 = func_351(__LIB_8__.func_261(26, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 26) + 1, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 27) != -1)
				{
					iVar1 = func_351(__LIB_8__.func_261(27, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 27) + 1, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 28) != -1)
				{
					iVar1 = func_351(__LIB_8__.func_261(28, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 28) + 1, 0, VEHICLE::GET_MOD_TEXT_LABEL(iParam0, 28, VEHICLE::GET_VEHICLE_MOD(iParam0, 28)), 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 29) != -1)
				{
					iVar1 = func_351(__LIB_8__.func_261(29, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 29) + 1, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 30) != -1)
				{
					iVar1 = func_351(__LIB_8__.func_261(30, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 30) + 1, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 31) != -1)
				{
					iVar1 = func_351(__LIB_8__.func_261(31, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 31) + 1, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 32) != -1)
				{
					iVar1 = func_351(__LIB_8__.func_261(32, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 32) + 1, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 33) != -1)
				{
					iVar1 = func_351(__LIB_8__.func_261(33, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 33) + 1, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 34) != -1 && !__LIB_8__.func_262(iParam0, 34, VEHICLE::GET_VEHICLE_MOD(iParam0, 34), 0))
				{
					iVar1 = func_351(__LIB_8__.func_261(34, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 34) + 1, 0, 0, 0, 1);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 35) != -1)
				{
					iVar1 = func_351(__LIB_8__.func_261(35, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 35) + 1, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 36) != -1)
				{
					iVar1 = func_351(__LIB_8__.func_261(36, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 36) + 1, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 37) != -1)
				{
					iVar1 = func_351(__LIB_8__.func_261(37, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 37) + 1, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 38) > 0)
				{
					iVar1 = func_351(__LIB_8__.func_261(38, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 38) + 1, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 39) != -1)
				{
					iVar1 = func_351(__LIB_8__.func_261(39, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 39) + 1, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 40) != -1)
				{
					iVar1 = func_351(__LIB_8__.func_261(40, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 40) + 1, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 41) != -1)
				{
					iVar1 = func_351(__LIB_8__.func_261(41, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 41) + 1, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 42) != -1 && !__LIB_8__.func_262(iParam0, 42, VEHICLE::GET_VEHICLE_MOD(iParam0, 42), 0))
				{
					iVar1 = func_351(__LIB_8__.func_261(42, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 42) + 1, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 43) != -1 && !__LIB_8__.func_262(iParam0, 43, VEHICLE::GET_VEHICLE_MOD(iParam0, 43), 0))
				{
					iVar1 = func_351(__LIB_8__.func_261(43, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 43) + 1, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 44) != -1)
				{
					iVar1 = func_351(__LIB_8__.func_261(44, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 44) + 1, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 45) != -1)
				{
					iVar1 = func_351(__LIB_8__.func_261(45, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 45) + 1, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 46) != -1)
				{
					iVar1 = func_351(__LIB_8__.func_261(46, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 46) + 1, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 47) != -1)
				{
					iVar1 = func_351(__LIB_8__.func_261(47, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 47) + 1, 0, 0, 0, 0);
					iVar0 = (iVar0 + iVar1);
				}
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 48) != -1 && !__LIB_8__.func_262(iParam0, 48, VEHICLE::GET_VEHICLE_MOD(iParam0, 48), 0))
				{
					iVar1 = func_351(__LIB_8__.func_261(48, 0, 0), VEHICLE::GET_VEHICLE_MOD(iParam0, 48) + 1, 0, 0, 0, 1);
					iVar0 = (iVar0 + iVar1);
				}
			}
			if (__LIB_4__.func_528(iParam0))
			{
				if (__LIB_19__.func_80(iParam0, bParam4, iParam3))
				{
				}
				else
				{
					iVar1 = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(__LIB_4__.func_527(iParam0, VEHICLE::GET_VEHICLE_LIVERY(iParam0))));
					iVar0 = (iVar0 + iVar1);
				}
			}
			if (__LIB_4__.func_526(iParam0) && VEHICLE::GET_VEHICLE_LIVERY2(iParam0) != 0)
			{
				iVar1 = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(__LIB_8__.func_260(iParam0, VEHICLE::GET_VEHICLE_LIVERY2(iParam0))));
				iVar0 = (iVar0 + iVar1);
			}
			iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * fVar2));
		}
	}
	return iVar0;
}

int func_351(int iParam0, int iParam1, int iParam2, char* sParam3, bool bParam4, int iParam5)//Position - 0x31FB0
{
	int iVar0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = func_354(iParam0, iParam1, iParam2, sParam3, bParam4, iParam5);
		if ((__LIB_19__.func_954() && !bParam4) && iVar0 > 0)
		{
			iVar0 = SYSTEM::CEIL((IntToFloat(iVar0) * Global_262145.f_30979 /* Tunable: 428263877 */));
		}
		return iVar0;
	}
	return __LIB_4__.func_539(iParam0, iParam1, iParam2);
}

int func_354(int iParam0, int iParam1, int iParam2, char* sParam3, bool bParam4, var uParam5)//Position - 0x33A7F
{
	float fVar0;
	int iVar1;
	int iVar2;
	fVar0 = 1f;
	if (bParam4)
	{
		fVar0 = Global_262145.f_26642 /* Tunable: AW_VEHICLE_MODS_BUY_IT_NOW_PRICE_MULTIPLIER */;
	}
	if ((__LIB_2__.func_218(Global_1585309, Global_1585310) || __LIB_4__.func_532()) || __LIB_4__.func_531())
	{
		return 0;
	}
	iVar1 = ENTITY::GET_ENTITY_MODEL(Global_1585308);
	switch (iParam0)
	{
		case 4:
			if ((((((((((((((((Global_1585307 == 3 || Global_1585307 == 7) || Global_1585307 == 5) || Global_1585307 == 10) || Global_1585307 == 27) || Global_1585307 == 26) || Global_1585307 == 29) || Global_1585307 == 30) || Global_1585307 == 31) || Global_1585307 == 32) || Global_1585307 == 33) || Global_1585307 == 34) || Global_1585307 == 35) || Global_1585307 == 36) || Global_1585307 == 37) || Global_1585307 == 38) || Global_1585307 == 39)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1000) * __LIB_4__.func_565(iParam1)));
						break;
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(7500) * __LIB_4__.func_565(iParam1)));
						break;
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(12000) * __LIB_4__.func_565(iParam1)));
						break;
					case 3:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(20000) * __LIB_4__.func_565(iParam1)));
						break;
					case 4:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(35000) * __LIB_4__.func_565(iParam1)));
						break;
					case 5:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(50000) * __LIB_4__.func_565(iParam1)));
						break;
				}
			}
			else if (Global_1585307 == 1)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(650) * __LIB_4__.func_565(iParam1)));
						break;
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(6375) * __LIB_4__.func_565(iParam1)));
						break;
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(10625) * __LIB_4__.func_565(iParam1)));
						break;
					case 3:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(17000) * __LIB_4__.func_565(iParam1)));
						break;
					case 4:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(29750) * __LIB_4__.func_565(iParam1)));
						break;
					case 5:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(42500) * __LIB_4__.func_565(iParam1)));
						break;
				}
			}
			else if (Global_1585307 == 2)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(500) * __LIB_4__.func_565(iParam1)));
						break;
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5250) * __LIB_4__.func_565(iParam1)));
						break;
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(8750) * __LIB_4__.func_565(iParam1)));
						break;
					case 3:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(14000) * __LIB_4__.func_565(iParam1)));
						break;
					case 4:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(24500) * __LIB_4__.func_565(iParam1)));
						break;
					case 5:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(35000) * __LIB_4__.func_565(iParam1)));
						break;
				}
			}
			else if (((Global_1585307 == 0 || Global_1585307 == 28) || Global_1585307 == 6) || Global_1585307 == 11)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(200) * __LIB_4__.func_565(iParam1)));
						break;
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(4500) * __LIB_4__.func_565(iParam1)));
						break;
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(7500) * __LIB_4__.func_565(iParam1)));
						break;
					case 3:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(12000) * __LIB_4__.func_565(iParam1)));
						break;
					case 4:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(21000) * __LIB_4__.func_565(iParam1)));
						break;
					case 5:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(30000) * __LIB_4__.func_565(iParam1)));
						break;
				}
			}
			else if (Global_1585307 == 4)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1000) * __LIB_4__.func_565(iParam1)));
						break;
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3600) * __LIB_4__.func_565(iParam1)));
						break;
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(6000) * __LIB_4__.func_565(iParam1)));
						break;
					case 3:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(9600) * __LIB_4__.func_565(iParam1)));
						break;
					case 4:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(16800) * __LIB_4__.func_565(iParam1)));
						break;
					case 5:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(24000) * __LIB_4__.func_565(iParam1)));
						break;
					}
			}
			break;
		case 5:
			if ((((((((((((((((Global_1585307 == 3 || Global_1585307 == 27) || Global_1585307 == 26) || Global_1585307 == 7) || Global_1585307 == 5) || Global_1585307 == 10) || Global_1585307 == 29) || Global_1585307 == 30) || Global_1585307 == 31) || Global_1585307 == 32) || Global_1585307 == 33) || Global_1585307 == 34) || Global_1585307 == 35) || Global_1585307 == 36) || Global_1585307 == 37) || Global_1585307 == 38) || Global_1585307 == 39)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1000) * __LIB_4__.func_564(iParam1)));
						break;
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(20000) * __LIB_4__.func_564(iParam1)));
						break;
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(27000) * __LIB_4__.func_564(iParam1)));
						break;
					case 3:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(35000) * __LIB_4__.func_564(iParam1)));
						break;
					case 4:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(60000) * __LIB_4__.func_564(iParam1)));
						break;
				}
			}
			else if (Global_1585307 == 1)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(650) * __LIB_4__.func_564(iParam1)));
						break;
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(13000) * __LIB_4__.func_564(iParam1)));
						break;
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(17550) * __LIB_4__.func_564(iParam1)));
						break;
					case 3:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(22750) * __LIB_4__.func_564(iParam1)));
						break;
					case 4:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(60000) * __LIB_4__.func_564(iParam1)));
						break;
				}
			}
			else if (Global_1585307 == 2)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(500) * __LIB_4__.func_564(iParam1)));
						break;
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(10000) * __LIB_4__.func_564(iParam1)));
						break;
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(13500) * __LIB_4__.func_564(iParam1)));
						break;
					case 3:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(17500) * __LIB_4__.func_564(iParam1)));
						break;
					case 4:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(60000) * __LIB_4__.func_564(iParam1)));
						break;
				}
			}
			else if (((Global_1585307 == 0 || Global_1585307 == 28) || Global_1585307 == 6) || Global_1585307 == 11)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(200) * __LIB_4__.func_564(iParam1)));
						break;
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(4000) * __LIB_4__.func_564(iParam1)));
						break;
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5400) * __LIB_4__.func_564(iParam1)));
						break;
					case 3:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(7000) * __LIB_4__.func_564(iParam1)));
						break;
					case 4:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(60000) * __LIB_4__.func_564(iParam1)));
						break;
				}
			}
			else if (Global_1585307 == 4)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(200) * __LIB_4__.func_564(iParam1)));
						break;
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(4000) * __LIB_4__.func_564(iParam1)));
						break;
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5400) * __LIB_4__.func_564(iParam1)));
						break;
					case 3:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(7000) * __LIB_4__.func_564(iParam1)));
						break;
					case 4:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(60000) * __LIB_4__.func_564(iParam1)));
						break;
					}
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(200) * __LIB_4__.func_563(iParam1)));
					break;
				case 1:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(10000) * __LIB_4__.func_563(iParam1)));
					break;
				case 2:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(12000) * __LIB_4__.func_563(iParam1)));
					break;
				case 3:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(14000) * __LIB_4__.func_563(iParam1)));
					break;
				case 4:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(16000) * __LIB_4__.func_563(iParam1)));
					break;
				case 5:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(16500) * __LIB_4__.func_563(iParam1)));
					break;
				case 6:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(16750) * __LIB_4__.func_563(iParam1)));
					break;
				case 7:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(17000) * __LIB_4__.func_563(iParam1)));
					break;
				case 8:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(17250) * __LIB_4__.func_563(iParam1)));
					break;
				case 9:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(17500) * __LIB_4__.func_563(iParam1)));
					break;
				case 10:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(17750) * __LIB_4__.func_563(iParam1)));
					break;
				case 11:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(18000) * __LIB_4__.func_563(iParam1)));
					break;
				case 12:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(18250) * __LIB_4__.func_563(iParam1)));
					break;
				case 13:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(18500) * __LIB_4__.func_563(iParam1)));
					break;
				case 14:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(18750) * __LIB_4__.func_563(iParam1)));
					break;
				case 15:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(19000) * __LIB_4__.func_563(iParam1)));
					break;
				case 16:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(19250) * __LIB_4__.func_563(iParam1)));
					break;
			}
			break;
		case 31:
			if (__LIB_19__.func_954())
			{
				return 0;
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2000) * __LIB_4__.func_562()));
						break;
					case 1:
						return 10000;
						break;
					}
			}
			break;
		case 39:
			if (Global_1585307 == 38)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26684 /* Tunable: AW_SALE_PRICE_MODS_NO_ROLL_CAGE */) * __LIB_4__.func_525(iParam1, 0)));
						break;
					case 1:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26685 /* Tunable: AW_SALE_PRICE_MODS_ROLL_CAGE_1 */) * Global_262145.f_26642 /* Tunable: AW_VEHICLE_MODS_BUY_IT_NOW_PRICE_MULTIPLIER */) * __LIB_4__.func_525(iParam1, 0)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26685 /* Tunable: AW_SALE_PRICE_MODS_ROLL_CAGE_1 */) * __LIB_4__.func_525(iParam1, 0)));
						}
						break;
					case 2:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26686 /* Tunable: AW_SALE_PRICE_MODS_ROLL_CAGE_2 */) * Global_262145.f_26642 /* Tunable: AW_VEHICLE_MODS_BUY_IT_NOW_PRICE_MULTIPLIER */) * __LIB_4__.func_525(iParam1, 0)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26686 /* Tunable: AW_SALE_PRICE_MODS_ROLL_CAGE_2 */) * __LIB_4__.func_525(iParam1, 0)));
						}
						break;
					case 3:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26687 /* Tunable: AW_SALE_PRICE_MODS_ROLL_CAGE_3 */) * Global_262145.f_26642 /* Tunable: AW_VEHICLE_MODS_BUY_IT_NOW_PRICE_MULTIPLIER */) * __LIB_4__.func_525(iParam1, 0)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26687 /* Tunable: AW_SALE_PRICE_MODS_ROLL_CAGE_3 */) * __LIB_4__.func_525(iParam1, 0)));
						}
						break;
					case 4:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26688 /* Tunable: AW_SALE_PRICE_MODS_ROLL_CAGE_4 */) * Global_262145.f_26642 /* Tunable: AW_VEHICLE_MODS_BUY_IT_NOW_PRICE_MULTIPLIER */) * __LIB_4__.func_525(iParam1, 0)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26688 /* Tunable: AW_SALE_PRICE_MODS_ROLL_CAGE_4 */) * __LIB_4__.func_525(iParam1, 0)));
						}
						break;
					case 5:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26689 /* Tunable: AW_SALE_PRICE_MODS_ROLL_CAGE_5 */) * Global_262145.f_26642 /* Tunable: AW_VEHICLE_MODS_BUY_IT_NOW_PRICE_MULTIPLIER */) * __LIB_4__.func_525(iParam1, 0)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26689 /* Tunable: AW_SALE_PRICE_MODS_ROLL_CAGE_5 */) * __LIB_4__.func_525(iParam1, 0)));
						}
						break;
					case 6:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26690 /* Tunable: AW_SALE_PRICE_MODS_ROLL_CAGE_6 */) * Global_262145.f_26642 /* Tunable: AW_VEHICLE_MODS_BUY_IT_NOW_PRICE_MULTIPLIER */) * __LIB_4__.func_525(iParam1, 0)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26690 /* Tunable: AW_SALE_PRICE_MODS_ROLL_CAGE_6 */) * __LIB_4__.func_525(iParam1, 0)));
						}
						break;
					case 7:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26691 /* Tunable: AW_SALE_PRICE_MODS_ROLL_CAGE_7 */) * Global_262145.f_26642 /* Tunable: AW_VEHICLE_MODS_BUY_IT_NOW_PRICE_MULTIPLIER */) * __LIB_4__.func_525(iParam1, 0)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26691 /* Tunable: AW_SALE_PRICE_MODS_ROLL_CAGE_7 */) * __LIB_4__.func_525(iParam1, 0)));
						}
						break;
					case 8:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26692 /* Tunable: AW_SALE_PRICE_MODS_ROLL_CAGE_8 */) * Global_262145.f_26642 /* Tunable: AW_VEHICLE_MODS_BUY_IT_NOW_PRICE_MULTIPLIER */) * __LIB_4__.func_525(iParam1, 0)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26692 /* Tunable: AW_SALE_PRICE_MODS_ROLL_CAGE_8 */) * __LIB_4__.func_525(iParam1, 0)));
						}
						break;
					case 9:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26693 /* Tunable: AW_SALE_PRICE_MODS_ROLL_CAGE_9 */) * Global_262145.f_26642 /* Tunable: AW_VEHICLE_MODS_BUY_IT_NOW_PRICE_MULTIPLIER */) * __LIB_4__.func_525(iParam1, 0)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26693 /* Tunable: AW_SALE_PRICE_MODS_ROLL_CAGE_9 */) * __LIB_4__.func_525(iParam1, 0)));
						}
						break;
					case 10:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26694 /* Tunable: AW_SALE_PRICE_MODS_ROLL_CAGE_10 */) * Global_262145.f_26642 /* Tunable: AW_VEHICLE_MODS_BUY_IT_NOW_PRICE_MULTIPLIER */) * __LIB_4__.func_525(iParam1, 0)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26694 /* Tunable: AW_SALE_PRICE_MODS_ROLL_CAGE_10 */) * __LIB_4__.func_525(iParam1, 0)));
						}
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((100f * fVar0));
						break;
					case 1:
						return SYSTEM::FLOOR((7000f * fVar0));
						break;
					case 2:
						return SYSTEM::FLOOR((7950f * fVar0));
						break;
					case 3:
						return SYSTEM::FLOOR((8500f * fVar0));
						break;
					case 4:
						return SYSTEM::FLOOR((10000f * fVar0));
						break;
					case 5:
						return SYSTEM::FLOOR((11000f * fVar0));
						break;
					case 6:
						return SYSTEM::FLOOR((11950f * fVar0));
						break;
					case 7:
						return SYSTEM::FLOOR((13500f * fVar0));
						break;
					case 8:
						return SYSTEM::FLOOR((14000f * fVar0));
						break;
					}
			}
			break;
		case 26:
			if ((((((((((((((((Global_1585307 == 3 || Global_1585307 == 27) || Global_1585307 == 26) || Global_1585307 == 7) || Global_1585307 == 5) || Global_1585307 == 10) || Global_1585307 == 29) || Global_1585307 == 30) || Global_1585307 == 31) || Global_1585307 == 32) || Global_1585307 == 33) || Global_1585307 == 34) || Global_1585307 == 35) || Global_1585307 == 36) || Global_1585307 == 37) || Global_1585307 == 38) || Global_1585307 == 39)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1600) * __LIB_4__.func_561(iParam1)));
						break;
					case 1:
						if (VEHICLE::IS_VEHICLE_MODEL(Global_1585308, joaat("cheburek")))
						{
							return Global_262145.f_24158 /* Tunable: ASSAULT_VEHICLES_MODS_CHEBUREK_CARDBOARD_HOOD_1 */;
						}
						else if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(3000) * Global_262145.f_26642 /* Tunable: AW_VEHICLE_MODS_BUY_IT_NOW_PRICE_MULTIPLIER */) * __LIB_4__.func_561(iParam1)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3000) * __LIB_4__.func_561(iParam1)));
						}
						break;
					case 2:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(5000) * Global_262145.f_26642 /* Tunable: AW_VEHICLE_MODS_BUY_IT_NOW_PRICE_MULTIPLIER */) * __LIB_4__.func_561(iParam1)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5000) * __LIB_4__.func_561(iParam1)));
						}
						break;
					case 3:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(8000) * Global_262145.f_26642 /* Tunable: AW_VEHICLE_MODS_BUY_IT_NOW_PRICE_MULTIPLIER */) * __LIB_4__.func_561(iParam1)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(8000) * __LIB_4__.func_561(iParam1)));
						}
						break;
					case 4:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(9600) * Global_262145.f_26642 /* Tunable: AW_VEHICLE_MODS_BUY_IT_NOW_PRICE_MULTIPLIER */) * __LIB_4__.func_561(iParam1)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(9600) * __LIB_4__.func_561(iParam1)));
						}
						break;
					case 5:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(11000) * Global_262145.f_26642 /* Tunable: AW_VEHICLE_MODS_BUY_IT_NOW_PRICE_MULTIPLIER */) * __LIB_4__.func_561(iParam1)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(11000) * __LIB_4__.func_561(iParam1)));
						}
						break;
					case 6:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(11600) * Global_262145.f_26642 /* Tunable: AW_VEHICLE_MODS_BUY_IT_NOW_PRICE_MULTIPLIER */) * __LIB_4__.func_561(iParam1)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(11600) * __LIB_4__.func_561(iParam1)));
						}
						break;
					case 7:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(12000) * Global_262145.f_26642 /* Tunable: AW_VEHICLE_MODS_BUY_IT_NOW_PRICE_MULTIPLIER */) * __LIB_4__.func_561(iParam1)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(12000) * __LIB_4__.func_561(iParam1)));
						}
						break;
					case 8:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(12400) * __LIB_4__.func_561(iParam1)) * fVar0));
						break;
					case 9:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(12400) * __LIB_4__.func_561(iParam1)) * fVar0));
						break;
					case 10:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(12500) * __LIB_4__.func_561(iParam1)) * fVar0));
						break;
					case 11:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(12900) * __LIB_4__.func_561(iParam1)) * fVar0));
						break;
					case 12:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(13250) * __LIB_4__.func_561(iParam1)) * fVar0));
						break;
					case 13:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(13600) * __LIB_4__.func_561(iParam1)) * fVar0));
						break;
					case 14:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(13900) * __LIB_4__.func_561(iParam1)) * fVar0));
						break;
					case 15:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(14150) * __LIB_4__.func_561(iParam1)) * fVar0));
						break;
					case 16:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(14400) * __LIB_4__.func_561(iParam1)) * fVar0));
						break;
					case 17:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(14650) * __LIB_4__.func_561(iParam1)) * fVar0));
						break;
					case 18:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(14850) * __LIB_4__.func_561(iParam1)) * fVar0));
						break;
					case 19:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(15050) * __LIB_4__.func_561(iParam1)) * fVar0));
						break;
					case 20:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(15250) * __LIB_4__.func_561(iParam1)) * fVar0));
						break;
					case 21:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(15450) * __LIB_4__.func_561(iParam1)) * fVar0));
						break;
					case 22:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(15650) * __LIB_4__.func_561(iParam1)) * fVar0));
						break;
					case 23:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(15850) * __LIB_4__.func_561(iParam1)) * fVar0));
						break;
					case 24:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(16050) * __LIB_4__.func_561(iParam1)) * fVar0));
						break;
					case 25:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(16250) * __LIB_4__.func_561(iParam1)) * fVar0));
						break;
					case 26:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(16450) * __LIB_4__.func_561(iParam1)) * fVar0));
						break;
					case 27:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(16650) * __LIB_4__.func_561(iParam1)) * fVar0));
						break;
					case 28:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(16850) * __LIB_4__.func_561(iParam1)) * fVar0));
						break;
					case 29:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(17050) * __LIB_4__.func_561(iParam1)) * fVar0));
						break;
				}
			}
			else if (Global_1585307 == 1 || Global_1585307 == 2)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(900) * __LIB_4__.func_561(iParam1)));
						break;
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1700) * __LIB_4__.func_561(iParam1)));
						break;
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2400) * __LIB_4__.func_561(iParam1)));
						break;
					case 3:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2900) * __LIB_4__.func_561(iParam1)));
						break;
					case 4:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(4450) * __LIB_4__.func_561(iParam1)));
						break;
					case 5:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5000) * __LIB_4__.func_561(iParam1)));
						break;
					case 6:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5600) * __LIB_4__.func_561(iParam1)));
						break;
					case 7:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(6000) * __LIB_4__.func_561(iParam1)));
						break;
					case 8:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(6500) * __LIB_4__.func_561(iParam1)));
						break;
					case 9:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(7000) * __LIB_4__.func_561(iParam1)));
						break;
					case 10:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(7200) * __LIB_4__.func_561(iParam1)));
						break;
					case 11:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(7750) * __LIB_4__.func_561(iParam1)));
						break;
					case 12:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(8150) * __LIB_4__.func_561(iParam1)));
						break;
					case 13:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(8600) * __LIB_4__.func_561(iParam1)));
						break;
					case 14:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(9000) * __LIB_4__.func_561(iParam1)));
						break;
					case 15:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(9400) * __LIB_4__.func_561(iParam1)));
						break;
					case 16:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(9800) * __LIB_4__.func_561(iParam1)));
						break;
					case 17:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(10200) * __LIB_4__.func_561(iParam1)));
						break;
					case 18:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(10550) * __LIB_4__.func_561(iParam1)));
						break;
					case 19:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(10900) * __LIB_4__.func_561(iParam1)));
						break;
					case 20:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(11250) * __LIB_4__.func_561(iParam1)));
						break;
					case 21:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(11600) * __LIB_4__.func_561(iParam1)));
						break;
					case 22:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(11900) * __LIB_4__.func_561(iParam1)));
						break;
					case 23:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(12200) * __LIB_4__.func_561(iParam1)));
						break;
					case 24:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(12500) * __LIB_4__.func_561(iParam1)));
						break;
					case 25:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(12800) * __LIB_4__.func_561(iParam1)));
						break;
				}
			}
			else if (((Global_1585307 == 0 || Global_1585307 == 28) || Global_1585307 == 6) || Global_1585307 == 11)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(300) * __LIB_4__.func_561(iParam1)));
						break;
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(650) * __LIB_4__.func_561(iParam1)));
						break;
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1500) * __LIB_4__.func_561(iParam1)));
						break;
					case 3:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1750) * __LIB_4__.func_561(iParam1)));
						break;
					case 4:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2000) * __LIB_4__.func_561(iParam1)));
						break;
					case 5:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2400) * __LIB_4__.func_561(iParam1)));
						break;
					case 6:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2900) * __LIB_4__.func_561(iParam1)));
						break;
					case 7:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(4450) * __LIB_4__.func_561(iParam1)));
						break;
					case 8:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5000) * __LIB_4__.func_561(iParam1)));
						break;
					case 9:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5600) * __LIB_4__.func_561(iParam1)));
						break;
					case 10:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(6000) * __LIB_4__.func_561(iParam1)));
						break;
					case 11:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(6450) * __LIB_4__.func_561(iParam1)));
						break;
					case 12:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(6800) * __LIB_4__.func_561(iParam1)));
						break;
					case 13:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(7150) * __LIB_4__.func_561(iParam1)));
						break;
					case 14:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(7500) * __LIB_4__.func_561(iParam1)));
						break;
					case 15:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(7850) * __LIB_4__.func_561(iParam1)));
						break;
					case 16:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(8150) * __LIB_4__.func_561(iParam1)));
						break;
					case 17:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(8450) * __LIB_4__.func_561(iParam1)));
						break;
					case 18:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(8750) * __LIB_4__.func_561(iParam1)));
						break;
					case 19:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(9050) * __LIB_4__.func_561(iParam1)));
						break;
					case 20:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(9300) * __LIB_4__.func_561(iParam1)));
						break;
					case 21:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(9550) * __LIB_4__.func_561(iParam1)));
						break;
					case 22:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(9800) * __LIB_4__.func_561(iParam1)));
						break;
					case 23:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(10050) * __LIB_4__.func_561(iParam1)));
						break;
					case 24:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(10250) * __LIB_4__.func_561(iParam1)));
						break;
					case 25:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(10450) * __LIB_4__.func_561(iParam1)));
						break;
				}
			}
			else if (Global_1585307 == 4)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(200) * __LIB_4__.func_561(iParam1)));
						break;
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(400) * __LIB_4__.func_561(iParam1)));
						break;
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(700) * __LIB_4__.func_561(iParam1)));
						break;
					case 3:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(898) * __LIB_4__.func_561(iParam1)));
						break;
					case 4:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1250) * __LIB_4__.func_561(iParam1)));
						break;
					case 5:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1750) * __LIB_4__.func_561(iParam1)));
						break;
					case 6:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2000) * __LIB_4__.func_561(iParam1)));
						break;
					case 7:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2400) * __LIB_4__.func_561(iParam1)));
						break;
					case 8:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2900) * __LIB_4__.func_561(iParam1)));
						break;
					case 9:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(4450) * __LIB_4__.func_561(iParam1)));
						break;
					case 10:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5000) * __LIB_4__.func_561(iParam1)));
						break;
					case 11:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5150) * __LIB_4__.func_561(iParam1)));
						break;
					case 12:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5450) * __LIB_4__.func_561(iParam1)));
						break;
					case 13:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5700) * __LIB_4__.func_561(iParam1)));
						break;
					case 14:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(6000) * __LIB_4__.func_561(iParam1)));
						break;
					case 15:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(6300) * __LIB_4__.func_561(iParam1)));
						break;
					case 16:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(6600) * __LIB_4__.func_561(iParam1)));
						break;
					case 17:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(9600) * __LIB_4__.func_561(iParam1)));
						break;
					case 18:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(9850) * __LIB_4__.func_561(iParam1)));
						break;
					case 19:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(10100) * __LIB_4__.func_561(iParam1)));
						break;
					case 20:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(10350) * __LIB_4__.func_561(iParam1)));
						break;
					case 21:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(10600) * __LIB_4__.func_561(iParam1)));
						break;
					case 22:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(10850) * __LIB_4__.func_561(iParam1)));
						break;
					case 23:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(11100) * __LIB_4__.func_561(iParam1)));
						break;
					case 24:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(11350) * __LIB_4__.func_561(iParam1)));
						break;
					case 25:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(11600) * __LIB_4__.func_561(iParam1)));
						break;
					}
			}
			break;
		case 8:
			if (((((((((((Global_1585307 == 3 || Global_1585307 == 27) || Global_1585307 == 26) || Global_1585307 == 7) || Global_1585307 == 5) || Global_1585307 == 10) || Global_1585307 == 29) || Global_1585307 == 31) || Global_1585307 == 32) || Global_1585307 == 35) || Global_1585307 == 38) || Global_1585307 == 39)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2200) * __LIB_4__.func_563(iParam1)));
						break;
					case 1:
						if (VEHICLE::IS_VEHICLE_MODEL(Global_1585308, joaat("cheburek")))
						{
							return Global_262145.f_24156 /* Tunable: ASSAULT_VEHICLES_MODS_CHEBUREK_CARDBOARD_FRONT_BUMPER_1 */;
						}
						else if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(4600) * Global_262145.f_26642 /* Tunable: AW_VEHICLE_MODS_BUY_IT_NOW_PRICE_MULTIPLIER */) * __LIB_4__.func_563(iParam1)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(4600) * __LIB_4__.func_563(iParam1)));
						}
						break;
					case 2:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(7400) * Global_262145.f_26642 /* Tunable: AW_VEHICLE_MODS_BUY_IT_NOW_PRICE_MULTIPLIER */) * __LIB_4__.func_563(iParam1)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(7400) * __LIB_4__.func_563(iParam1)));
						}
						break;
					case 3:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(11700) * Global_262145.f_26642 /* Tunable: AW_VEHICLE_MODS_BUY_IT_NOW_PRICE_MULTIPLIER */) * __LIB_4__.func_563(iParam1)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(11700) * __LIB_4__.func_563(iParam1)));
						}
						break;
					case 4:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(14500) * Global_262145.f_26642 /* Tunable: AW_VEHICLE_MODS_BUY_IT_NOW_PRICE_MULTIPLIER */) * __LIB_4__.func_563(iParam1)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(14500) * __LIB_4__.func_563(iParam1)));
						}
						break;
					case 5:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(14700) * Global_262145.f_26642 /* Tunable: AW_VEHICLE_MODS_BUY_IT_NOW_PRICE_MULTIPLIER */) * __LIB_4__.func_563(iParam1)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(14700) * __LIB_4__.func_563(iParam1)));
						}
						break;
					case 6:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(14900) * Global_262145.f_26642 /* Tunable: AW_VEHICLE_MODS_BUY_IT_NOW_PRICE_MULTIPLIER */) * __LIB_4__.func_563(iParam1)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(14900) * __LIB_4__.func_563(iParam1)));
						}
						break;
					case 7:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(15100) * Global_262145.f_26642 /* Tunable: AW_VEHICLE_MODS_BUY_IT_NOW_PRICE_MULTIPLIER */) * __LIB_4__.func_563(iParam1)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(15100) * __LIB_4__.func_563(iParam1)));
						}
						break;
					case 8:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(15300) * __LIB_4__.func_563(iParam1)));
						break;
					case 9:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(15500) * __LIB_4__.func_563(iParam1)));
						break;
					case 10:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(15700) * __LIB_4__.func_563(iParam1)));
						break;
					case 11:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(15900) * __LIB_4__.func_563(iParam1)));
						break;
					case 12:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(16100) * __LIB_4__.func_563(iParam1)));
						break;
					case 13:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(16300) * __LIB_4__.func_563(iParam1)));
						break;
					case 14:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(16500) * __LIB_4__.func_563(iParam1)));
						break;
					case 15:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(16700) * __LIB_4__.func_563(iParam1)));
						break;
					case 16:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(16900) * __LIB_4__.func_563(iParam1)));
						break;
					case 17:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(17100) * __LIB_4__.func_563(iParam1)));
						break;
					case 18:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(17300) * __LIB_4__.func_563(iParam1)));
						break;
					case 19:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(17500) * __LIB_4__.func_563(iParam1)));
						break;
					case 20:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2200) * __LIB_4__.func_560(0)));
						break;
					case 21:
						if (VEHICLE::IS_VEHICLE_MODEL(Global_1585308, joaat("cheburek")))
						{
							return Global_262145.f_24157 /* Tunable: ASSAULT_VEHICLES_MODS_CHEBUREK_CARDBOARD_REAR_BUMPER_1 */;
						}
						else if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(4600) * Global_262145.f_26642 /* Tunable: AW_VEHICLE_MODS_BUY_IT_NOW_PRICE_MULTIPLIER */) * __LIB_4__.func_563(1)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(4600) * __LIB_4__.func_563(1)));
						}
						break;
					case 22:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(7400) * Global_262145.f_26642 /* Tunable: AW_VEHICLE_MODS_BUY_IT_NOW_PRICE_MULTIPLIER */) * __LIB_4__.func_563(2)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(7400) * __LIB_4__.func_563(2)));
						}
						break;
					case 23:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(11700) * Global_262145.f_26642 /* Tunable: AW_VEHICLE_MODS_BUY_IT_NOW_PRICE_MULTIPLIER */) * __LIB_4__.func_563(3)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(11700) * __LIB_4__.func_563(3)));
						}
						break;
					case 24:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(14500) * __LIB_4__.func_560(4)));
						break;
					case 25:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(14700) * __LIB_4__.func_560(5)));
						break;
					case 26:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(14900) * __LIB_4__.func_560(6)));
						break;
					case 27:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(15100) * __LIB_4__.func_560(7)));
						break;
					case 28:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(15300) * __LIB_4__.func_560(8)));
						break;
					case 29:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(15500) * __LIB_4__.func_560(9)));
						break;
					case 30:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(15700) * __LIB_4__.func_560(10)));
						break;
					case 31:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(15900) * __LIB_4__.func_560(11)));
						break;
					case 32:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(16100) * __LIB_4__.func_560(12)));
						break;
					case 33:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(16300) * __LIB_4__.func_560(13)));
						break;
					case 34:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(16500) * __LIB_4__.func_560(14)));
						break;
					case 35:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(16700) * __LIB_4__.func_560(15)));
						break;
					case 36:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(16900) * __LIB_4__.func_560(16)));
						break;
					case 37:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(17100) * __LIB_4__.func_560(17)));
						break;
					case 38:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(17300) * __LIB_4__.func_560(18)));
						break;
					case 39:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(17500) * __LIB_4__.func_560(19)));
						break;
					case 40:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(17700) * __LIB_4__.func_560(20)));
						break;
				}
			}
			else if (Global_1585307 == 36 || Global_1585307 == 37)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1000) * __LIB_4__.func_563(iParam1)));
						break;
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(115000) * __LIB_4__.func_563(iParam1)));
						break;
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(205000) * __LIB_4__.func_563(iParam1)));
						break;
					case 3:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(285000) * __LIB_4__.func_563(iParam1)));
						break;
					case 4:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(310000) * __LIB_4__.func_563(iParam1)));
						break;
					case 5:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(330000) * __LIB_4__.func_563(iParam1)));
						break;
					case 6:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(330000) * __LIB_4__.func_563(iParam1)));
						break;
					case 7:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(330000) * __LIB_4__.func_563(iParam1)));
						break;
					case 8:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(330000) * __LIB_4__.func_563(iParam1)));
						break;
					case 9:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(330000) * __LIB_4__.func_563(iParam1)));
						break;
					case 10:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(330000) * __LIB_4__.func_563(iParam1)));
						break;
					case 11:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(330000) * __LIB_4__.func_563(iParam1)));
						break;
					case 12:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(330000) * __LIB_4__.func_563(iParam1)));
						break;
					case 13:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(330000) * __LIB_4__.func_563(iParam1)));
						break;
					case 14:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(330000) * __LIB_4__.func_563(iParam1)));
						break;
					case 15:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(330000) * __LIB_4__.func_563(iParam1)));
						break;
					case 16:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(330000) * __LIB_4__.func_563(iParam1)));
						break;
					case 17:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(330000) * __LIB_4__.func_563(iParam1)));
						break;
					case 18:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(330000) * __LIB_4__.func_563(iParam1)));
						break;
					case 19:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(330000) * __LIB_4__.func_563(iParam1)));
						break;
					case 20:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1000) * __LIB_4__.func_560(0)));
						break;
					case 21:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_24842 /* Tunable: 224308831 */) * __LIB_4__.func_560(1)));
						break;
					case 22:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(310000) * __LIB_4__.func_560(2)));
						break;
					case 23:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(330000) * __LIB_4__.func_560(3)));
						break;
					case 24:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(350000) * __LIB_4__.func_560(4)));
						break;
					case 25:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(365000) * __LIB_4__.func_560(5)));
						break;
					case 26:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(365000) * __LIB_4__.func_560(6)));
						break;
					case 27:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(365000) * __LIB_4__.func_560(7)));
						break;
					case 28:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(365000) * __LIB_4__.func_560(8)));
						break;
					case 29:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(365000) * __LIB_4__.func_560(9)));
						break;
				}
			}
			else if (Global_1585307 == 33)
			{
				switch (iParam1)
				{
					case 1:
						return Global_262145.f_22612 /* Tunable: -488069750 */;
						break;
					case 2:
						return Global_262145.f_22613 /* Tunable: -476186113 */;
						break;
					case 29:
						return Global_262145.f_22618 /* Tunable: 193964753 */;
						break;
					case 30:
						return Global_262145.f_22618 /* Tunable: 193964753 */;
						break;
					case 31:
						return Global_262145.f_22618 /* Tunable: 193964753 */;
						break;
					case 32:
						return Global_262145.f_22618 /* Tunable: 193964753 */;
						break;
					case 33:
						return Global_262145.f_22618 /* Tunable: 193964753 */;
						break;
					case 34:
						return Global_262145.f_22618 /* Tunable: 193964753 */;
						break;
					case 35:
						return Global_262145.f_22618 /* Tunable: 193964753 */;
						break;
					case 36:
						return Global_262145.f_22618 /* Tunable: 193964753 */;
						break;
					case 37:
						return Global_262145.f_22618 /* Tunable: 193964753 */;
						break;
					case 38:
						return Global_262145.f_22618 /* Tunable: 193964753 */;
						break;
					case 39:
						return Global_262145.f_22618 /* Tunable: 193964753 */;
						break;
					case 40:
						return Global_262145.f_22618 /* Tunable: 193964753 */;
						break;
				}
			}
			else if (Global_1585307 == 34)
			{
				switch (iParam1)
				{
					case 1:
						return Global_262145.f_22624 /* Tunable: -35648369 */;
						break;
					case 2:
						return Global_262145.f_22625 /* Tunable: 1890870117 */;
						break;
					case 29:
						return Global_262145.f_22630 /* Tunable: -2127562694 */;
						break;
					case 30:
						return Global_262145.f_22630 /* Tunable: -2127562694 */;
						break;
					case 31:
						return Global_262145.f_22630 /* Tunable: -2127562694 */;
						break;
					case 32:
						return Global_262145.f_22630 /* Tunable: -2127562694 */;
						break;
					case 33:
						return Global_262145.f_22630 /* Tunable: -2127562694 */;
						break;
					case 34:
						return Global_262145.f_22630 /* Tunable: -2127562694 */;
						break;
					case 35:
						return Global_262145.f_22630 /* Tunable: -2127562694 */;
						break;
					case 36:
						return Global_262145.f_22630 /* Tunable: -2127562694 */;
						break;
					case 37:
						return Global_262145.f_22630 /* Tunable: -2127562694 */;
						break;
					case 38:
						return Global_262145.f_22630 /* Tunable: -2127562694 */;
						break;
					case 39:
						return Global_262145.f_22630 /* Tunable: -2127562694 */;
						break;
					case 40:
						return Global_262145.f_22630 /* Tunable: -2127562694 */;
						break;
				}
			}
			else if (Global_1585307 == 1 || Global_1585307 == 2)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1500) * __LIB_4__.func_563(iParam1)));
						break;
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2500) * __LIB_4__.func_563(iParam1)));
						break;
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3300) * __LIB_4__.func_563(iParam1)));
						break;
					case 3:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3900) * __LIB_4__.func_563(iParam1)));
						break;
					case 4:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(4700) * __LIB_4__.func_563(iParam1)));
						break;
					case 5:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(4900) * __LIB_4__.func_563(iParam1)));
						break;
					case 6:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5100) * __LIB_4__.func_563(iParam1)));
						break;
					case 7:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5300) * __LIB_4__.func_563(iParam1)));
						break;
					case 8:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5500) * __LIB_4__.func_563(iParam1)));
						break;
					case 9:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5700) * __LIB_4__.func_563(iParam1)));
						break;
					case 10:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5900) * __LIB_4__.func_563(iParam1)));
						break;
					case 11:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(6100) * __LIB_4__.func_563(iParam1)));
						break;
					case 12:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(6300) * __LIB_4__.func_563(iParam1)));
						break;
					case 13:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(6500) * __LIB_4__.func_563(iParam1)));
						break;
					case 14:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(6700) * __LIB_4__.func_563(iParam1)));
						break;
					case 15:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(6900) * __LIB_4__.func_563(iParam1)));
						break;
					case 16:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(7100) * __LIB_4__.func_563(iParam1)));
						break;
					case 17:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(7300) * __LIB_4__.func_563(iParam1)));
						break;
					case 18:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(7500) * __LIB_4__.func_563(iParam1)));
						break;
					case 19:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(7700) * __LIB_4__.func_563(iParam1)));
						break;
					case 20:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1500) * __LIB_4__.func_560(0)));
						break;
					case 21:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2500) * __LIB_4__.func_560(1)));
						break;
					case 22:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3300) * __LIB_4__.func_560(2)));
						break;
					case 23:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3900) * __LIB_4__.func_560(3)));
						break;
					case 24:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(4700) * __LIB_4__.func_560(4)));
						break;
					case 25:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(4900) * __LIB_4__.func_560(5)));
						break;
					case 26:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5100) * __LIB_4__.func_560(6)));
						break;
					case 27:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5300) * __LIB_4__.func_560(7)));
						break;
					case 28:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5500) * __LIB_4__.func_560(8)));
						break;
					case 29:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5700) * __LIB_4__.func_560(9)));
						break;
					case 30:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5900) * __LIB_4__.func_560(10)));
						break;
					case 31:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(6100) * __LIB_4__.func_560(11)));
						break;
					case 32:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(6300) * __LIB_4__.func_560(12)));
						break;
					case 33:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(6500) * __LIB_4__.func_560(13)));
						break;
					case 34:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(6700) * __LIB_4__.func_560(14)));
						break;
					case 35:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(6900) * __LIB_4__.func_560(15)));
						break;
					case 36:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(7100) * __LIB_4__.func_560(16)));
						break;
					case 37:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(7300) * __LIB_4__.func_560(17)));
						break;
					case 38:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(7500) * __LIB_4__.func_560(18)));
						break;
					case 39:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(7700) * __LIB_4__.func_560(19)));
						break;
				}
			}
			else if (((Global_1585307 == 0 || Global_1585307 == 28) || Global_1585307 == 6) || Global_1585307 == 11)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(500) * __LIB_4__.func_563(iParam1)));
						break;
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1000) * __LIB_4__.func_563(iParam1)));
						break;
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1500) * __LIB_4__.func_563(iParam1)));
						break;
					case 3:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2000) * __LIB_4__.func_563(iParam1)));
						break;
					case 4:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2600) * __LIB_4__.func_563(iParam1)));
						break;
					case 5:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2800) * __LIB_4__.func_563(iParam1)));
						break;
					case 6:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3000) * __LIB_4__.func_563(iParam1)));
						break;
					case 7:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3200) * __LIB_4__.func_563(iParam1)));
						break;
					case 8:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3400) * __LIB_4__.func_563(iParam1)));
						break;
					case 9:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3600) * __LIB_4__.func_563(iParam1)));
						break;
					case 10:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3800) * __LIB_4__.func_563(iParam1)));
						break;
					case 11:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(4000) * __LIB_4__.func_563(iParam1)));
						break;
					case 12:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(4200) * __LIB_4__.func_563(iParam1)));
						break;
					case 13:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(4400) * __LIB_4__.func_563(iParam1)));
						break;
					case 14:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(4600) * __LIB_4__.func_563(iParam1)));
						break;
					case 15:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(4800) * __LIB_4__.func_563(iParam1)));
						break;
					case 16:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5000) * __LIB_4__.func_563(iParam1)));
						break;
					case 17:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5200) * __LIB_4__.func_563(iParam1)));
						break;
					case 18:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5400) * __LIB_4__.func_563(iParam1)));
						break;
					case 19:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5600) * __LIB_4__.func_563(iParam1)));
						break;
					case 20:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(500) * __LIB_4__.func_560(0)));
						break;
					case 21:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1000) * __LIB_4__.func_560(1)));
						break;
					case 22:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1500) * __LIB_4__.func_560(2)));
						break;
					case 23:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2000) * __LIB_4__.func_560(3)));
						break;
					case 24:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2600) * __LIB_4__.func_560(4)));
						break;
					case 25:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2800) * __LIB_4__.func_560(5)));
						break;
					case 26:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3000) * __LIB_4__.func_560(6)));
						break;
					case 27:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3200) * __LIB_4__.func_560(7)));
						break;
					case 28:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3400) * __LIB_4__.func_560(8)));
						break;
					case 29:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3600) * __LIB_4__.func_560(9)));
						break;
					case 30:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3800) * __LIB_4__.func_560(10)));
						break;
					case 31:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(4000) * __LIB_4__.func_560(11)));
						break;
					case 32:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(4200) * __LIB_4__.func_560(12)));
						break;
					case 33:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(4400) * __LIB_4__.func_560(13)));
						break;
					case 34:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(4600) * __LIB_4__.func_560(14)));
						break;
					case 35:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(4800) * __LIB_4__.func_560(15)));
						break;
					case 36:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5000) * __LIB_4__.func_560(16)));
						break;
					case 37:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5200) * __LIB_4__.func_560(17)));
						break;
					case 38:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5400) * __LIB_4__.func_560(18)));
						break;
					case 39:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5600) * __LIB_4__.func_560(19)));
						break;
				}
			}
			else if (Global_1585307 == 4)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(298) * __LIB_4__.func_563(iParam1)));
						break;
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(390) * __LIB_4__.func_563(iParam1)));
						break;
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(500) * __LIB_4__.func_563(iParam1)));
						break;
					case 3:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(750) * __LIB_4__.func_563(iParam1)));
						break;
					case 4:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1000) * __LIB_4__.func_563(iParam1)));
						break;
					case 5:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1200) * __LIB_4__.func_563(iParam1)));
						break;
					case 6:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1400) * __LIB_4__.func_563(iParam1)));
						break;
					case 7:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1600) * __LIB_4__.func_563(iParam1)));
						break;
					case 8:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1800) * __LIB_4__.func_563(iParam1)));
						break;
					case 9:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2000) * __LIB_4__.func_563(iParam1)));
						break;
					case 10:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2200) * __LIB_4__.func_563(iParam1)));
						break;
					case 11:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2400) * __LIB_4__.func_563(iParam1)));
						break;
					case 12:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2600) * __LIB_4__.func_563(iParam1)));
						break;
					case 13:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2800) * __LIB_4__.func_563(iParam1)));
						break;
					case 14:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3000) * __LIB_4__.func_563(iParam1)));
						break;
					case 15:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3200) * __LIB_4__.func_563(iParam1)));
						break;
					case 16:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3400) * __LIB_4__.func_563(iParam1)));
						break;
					case 17:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3600) * __LIB_4__.func_563(iParam1)));
						break;
					case 18:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3800) * __LIB_4__.func_563(iParam1)));
						break;
					case 19:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(4000) * __LIB_4__.func_563(iParam1)));
						break;
					case 20:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(500) * __LIB_4__.func_560(0)));
						break;
					case 21:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1000) * __LIB_4__.func_560(1)));
						break;
					case 22:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1500) * __LIB_4__.func_560(2)));
						break;
					case 23:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2000) * __LIB_4__.func_560(3)));
						break;
					case 24:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2600) * __LIB_4__.func_560(4)));
						break;
					case 25:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2800) * __LIB_4__.func_560(5)));
						break;
					case 26:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3000) * __LIB_4__.func_560(6)));
						break;
					case 27:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3200) * __LIB_4__.func_560(7)));
						break;
					case 28:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3400) * __LIB_4__.func_560(8)));
						break;
					case 29:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3600) * __LIB_4__.func_560(9)));
						break;
					case 30:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3800) * __LIB_4__.func_560(10)));
						break;
					case 31:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(4000) * __LIB_4__.func_560(11)));
						break;
					case 32:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(4200) * __LIB_4__.func_560(12)));
						break;
					case 33:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(4400) * __LIB_4__.func_560(13)));
						break;
					case 34:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(4600) * __LIB_4__.func_560(14)));
						break;
					case 35:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(4800) * __LIB_4__.func_560(15)));
						break;
					case 36:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5000) * __LIB_4__.func_560(16)));
						break;
					case 37:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5200) * __LIB_4__.func_560(17)));
						break;
					case 38:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5400) * __LIB_4__.func_560(18)));
						break;
					case 39:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5600) * __LIB_4__.func_560(19)));
						break;
				}
			}
			else if (Global_1585307 == 30)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5000) * __LIB_4__.func_563(iParam1)));
						break;
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(85000) * __LIB_4__.func_563(iParam1)));
						break;
					case 20:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3500) * __LIB_4__.func_560(0)));
						break;
					case 21:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(92500) * __LIB_4__.func_560(1)));
						break;
					}
			}
			break;
		case 9:
			if (iVar1 == joaat("dune3"))
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(700) * __LIB_4__.func_559(iParam1)));
						break;
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_21426 /* Tunable: 1642130070 */) * __LIB_4__.func_559(iParam1)));
						break;
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_21427 /* Tunable: -1609500137 */) * __LIB_4__.func_559(iParam1)));
						break;
				}
			}
			else if (iVar1 == joaat("halftrack"))
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(700) * __LIB_4__.func_559(iParam1)));
						break;
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_21430 /* Tunable: 907331558 */) * __LIB_4__.func_559(iParam1)));
						break;
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_21431 /* Tunable: 1370788067 */) * __LIB_4__.func_559(iParam1)));
						break;
					case 3:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_21432 /* Tunable: -282467643 */) * __LIB_4__.func_559(iParam1)));
						break;
				}
			}
			else if (iVar1 == joaat("tampa3"))
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(700) * __LIB_4__.func_559(iParam1)));
						break;
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_21438 /* Tunable: -1137973392 */) * __LIB_4__.func_559(iParam1)));
						break;
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_21439 /* Tunable: -454785751 */) * __LIB_4__.func_559(iParam1)));
						break;
					case 3:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_21440 /* Tunable: -1076160159 */) * __LIB_4__.func_559(iParam1)));
						break;
				}
			}
			else if (iVar1 == joaat("insurgent3"))
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(700) * __LIB_4__.func_559(iParam1)));
						break;
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_21445 /* Tunable: 1195033900 */) * __LIB_4__.func_559(iParam1)));
						break;
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_21446 /* Tunable: 544233059 */) * __LIB_4__.func_559(iParam1)));
						break;
					case 3:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_21447 /* Tunable: 1048087048 */) * __LIB_4__.func_559(iParam1)));
						break;
				}
			}
			else if (iVar1 == joaat("technical3"))
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(700) * __LIB_4__.func_559(iParam1)));
						break;
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_21450 /* Tunable: 685525542 */) * __LIB_4__.func_559(iParam1)));
						break;
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_21451 /* Tunable: 772203689 */) * __LIB_4__.func_559(iParam1)));
						break;
					case 3:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_21452 /* Tunable: -1964913287 */) * __LIB_4__.func_559(iParam1)));
						break;
				}
			}
			else if (iVar1 == joaat("menacer"))
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(700) * __LIB_4__.func_559(iParam1)));
						break;
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_24865 /* Tunable: -1980323938 */) * __LIB_4__.func_559(iParam1)));
						break;
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(285000) * __LIB_4__.func_559(iParam1)));
						break;
				}
			}
			else if (__LIB_0__.func_596(iVar1))
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26699 /* Tunable: AW_SALE_PRICE_MODS_STOCK_ARMOR */) * __LIB_4__.func_559(iParam1)));
						break;
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_31795 /* Tunable: -750413626 */) * __LIB_4__.func_559(iParam1)));
						break;
				}
			}
			else if (Global_1585307 == 33)
			{
				switch (iParam1)
				{
					case 1:
						return Global_262145.f_22611 /* Tunable: -2089035711 */;
						break;
				}
			}
			else if (Global_1585307 == 34)
			{
				switch (iParam1)
				{
					case 1:
						return Global_262145.f_22622 /* Tunable: 1373896141 */;
						break;
					case 2:
						return Global_262145.f_24010 /* Tunable: -867063928 */;
						break;
				}
			}
			else if (Global_1585307 == 36 || Global_1585307 == 37)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_24835 /* Tunable: 572240409 */) * __LIB_4__.func_559(iParam1)));
						break;
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_24836 /* Tunable: 395214874 */) * __LIB_4__.func_559(iParam1)));
						break;
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_24837 /* Tunable: 1763537831 */) * __LIB_4__.func_559(iParam1)));
						break;
					case 3:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_24838 /* Tunable: -1250000379 */) * __LIB_4__.func_559(iParam1)));
						break;
					case 4:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(225000) * __LIB_4__.func_559(iParam1)));
						break;
					case 5:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(310000) * __LIB_4__.func_559(iParam1)));
						break;
				}
			}
			else if (Global_1585307 == 38)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26699 /* Tunable: AW_SALE_PRICE_MODS_STOCK_ARMOR */) * __LIB_4__.func_559(iParam1)));
						break;
					case 1:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26700 /* Tunable: AW_SALE_PRICE_MODS_ARMOR_1 */) * Global_262145.f_26642 /* Tunable: AW_VEHICLE_MODS_BUY_IT_NOW_PRICE_MULTIPLIER */) * __LIB_4__.func_559(iParam1)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26700 /* Tunable: AW_SALE_PRICE_MODS_ARMOR_1 */) * __LIB_4__.func_559(iParam1)));
						}
						break;
					case 2:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26701 /* Tunable: AW_SALE_PRICE_MODS_ARMOR_2 */) * Global_262145.f_26642 /* Tunable: AW_VEHICLE_MODS_BUY_IT_NOW_PRICE_MULTIPLIER */) * __LIB_4__.func_559(iParam1)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26701 /* Tunable: AW_SALE_PRICE_MODS_ARMOR_2 */) * __LIB_4__.func_559(iParam1)));
						}
						break;
					case 3:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26702 /* Tunable: AW_SALE_PRICE_MODS_ARMOR_3 */) * Global_262145.f_26642 /* Tunable: AW_VEHICLE_MODS_BUY_IT_NOW_PRICE_MULTIPLIER */) * __LIB_4__.func_559(iParam1)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26702 /* Tunable: AW_SALE_PRICE_MODS_ARMOR_3 */) * __LIB_4__.func_559(iParam1)));
						}
						break;
					case 4:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26703 /* Tunable: AW_SALE_PRICE_MODS_ARMOR_4 */) * Global_262145.f_26642 /* Tunable: AW_VEHICLE_MODS_BUY_IT_NOW_PRICE_MULTIPLIER */) * __LIB_4__.func_559(iParam1)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26703 /* Tunable: AW_SALE_PRICE_MODS_ARMOR_4 */) * __LIB_4__.func_559(iParam1)));
						}
						break;
					case 5:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26704 /* Tunable: AW_SALE_PRICE_MODS_ARMOR_5 */) * Global_262145.f_26642 /* Tunable: AW_VEHICLE_MODS_BUY_IT_NOW_PRICE_MULTIPLIER */) * __LIB_4__.func_559(iParam1)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26704 /* Tunable: AW_SALE_PRICE_MODS_ARMOR_5 */) * __LIB_4__.func_559(iParam1)));
						}
						break;
					case 6:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26705 /* Tunable: AW_SALE_PRICE_MODS_ARMOR_6 */) * Global_262145.f_26642 /* Tunable: AW_VEHICLE_MODS_BUY_IT_NOW_PRICE_MULTIPLIER */) * __LIB_4__.func_559(iParam1)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26705 /* Tunable: AW_SALE_PRICE_MODS_ARMOR_6 */) * __LIB_4__.func_559(iParam1)));
						}
						break;
				}
			}
			else if (Global_1585307 == 39)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26724 /* Tunable: AW_SALE_PRICE_MODS_RC_BANDITO_STOCK_LID */) * __LIB_4__.func_559(iParam1)));
						break;
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26725 /* Tunable: AW_SALE_PRICE_MODS_RC_BANDITO_OFFROAD */) * __LIB_4__.func_559(iParam1)));
						break;
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26726 /* Tunable: AW_SALE_PRICE_MODS_RC_BANDITO_OFFROAD_SPOILER */) * __LIB_4__.func_559(iParam1)));
						break;
					case 3:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26727 /* Tunable: AW_SALE_PRICE_MODS_RC_BANDITO_OFFROAD_NETS */) * __LIB_4__.func_559(iParam1)));
						break;
					case 4:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26728 /* Tunable: AW_SALE_PRICE_MODS_RC_BANDITO_OFFROAD_COMBINED */) * __LIB_4__.func_559(iParam1)));
						break;
					case 5:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26729 /* Tunable: AW_SALE_PRICE_MODS_RC_BANDITO_TROPHY_TRUCK */) * __LIB_4__.func_559(iParam1)));
						break;
					case 6:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26730 /* Tunable: AW_SALE_PRICE_MODS_RC_BANDITO_TROPHY_TRUCK_SPOILER */) * __LIB_4__.func_559(iParam1)));
						break;
					case 7:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26731 /* Tunable: AW_SALE_PRICE_MODS_RC_BANDITO_TROPHY_TRUCK_NETS */) * __LIB_4__.func_559(iParam1)));
						break;
					case 8:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26732 /* Tunable: AW_SALE_PRICE_MODS_RC_BANDITO_TROPHY_TRUCK_COMBINED */) * __LIB_4__.func_559(iParam1)));
						break;
					case 9:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26733 /* Tunable: AW_SALE_PRICE_MODS_RC_BANDITO_GANG_BURRITO */) * __LIB_4__.func_559(iParam1)));
						break;
					case 10:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26734 /* Tunable: AW_SALE_PRICE_MODS_RC_BANDITO_GANG_BURRITO_SPOILER */) * __LIB_4__.func_559(iParam1)));
						break;
					case 11:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26735 /* Tunable: AW_SALE_PRICE_MODS_RC_BANDITO_GANG_BURRITO_BULLBAR */) * __LIB_4__.func_559(iParam1)));
						break;
					case 12:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26736 /* Tunable: AW_SALE_PRICE_MODS_RC_BANDITO_GANG_BURRITO_COMBINED */) * __LIB_4__.func_559(iParam1)));
						break;
					case 13:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26737 /* Tunable: AW_SALE_PRICE_MODS_RC_BANDITO_BIG_BRAT */) * __LIB_4__.func_559(iParam1)));
						break;
					case 14:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26738 /* Tunable: AW_SALE_PRICE_MODS_RC_BANDITO_BIG_BRAT_CAGE */) * __LIB_4__.func_559(iParam1)));
						break;
					case 15:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26739 /* Tunable: AW_SALE_PRICE_MODS_RC_BANDITO_BIG_BRAT_BULLBAR */) * __LIB_4__.func_559(iParam1)));
						break;
					case 16:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26740 /* Tunable: AW_SALE_PRICE_MODS_RC_BANDITO_BIG_BRAT_COMBINED */) * __LIB_4__.func_559(iParam1)));
						break;
					case 17:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26741 /* Tunable: AW_SALE_PRICE_MODS_RC_BANDITO_MIDNIGHT_PUMPING */) * __LIB_4__.func_559(iParam1)));
						break;
					case 18:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26742 /* Tunable: AW_SALE_PRICE_MODS_RC_BANDITO_MIDNIGHT_PUMPING_CAGE */) * __LIB_4__.func_559(iParam1)));
						break;
					case 19:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26743 /* Tunable: AW_SALE_PRICE_MODS_RC_BANDITO_MIDNIGHT_PUMPING_FLAMES */) * __LIB_4__.func_559(iParam1)));
						break;
					case 20:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26744 /* Tunable: AW_SALE_PRICE_MODS_RC_BANDITO_MIDNIGHT_PUMPING_COMBINED */) * __LIB_4__.func_559(iParam1)));
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(700) * __LIB_4__.func_559(iParam1)));
						break;
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1100) * __LIB_4__.func_559(iParam1)));
						break;
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1350) * __LIB_4__.func_559(iParam1)));
						break;
					case 3:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1500) * __LIB_4__.func_559(iParam1)));
						break;
					case 4:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2750) * __LIB_4__.func_559(iParam1)));
						break;
					case 5:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3600) * __LIB_4__.func_559(iParam1)));
						break;
					case 6:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(4900) * __LIB_4__.func_559(iParam1)));
						break;
					case 7:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5800) * __LIB_4__.func_559(iParam1)));
						break;
					case 8:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(7000) * __LIB_4__.func_559(iParam1)));
						break;
					case 9:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(8000) * __LIB_4__.func_559(iParam1)));
						break;
					case 10:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(9150) * __LIB_4__.func_559(iParam1)));
						break;
					case 11:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(10100) * __LIB_4__.func_559(iParam1)));
						break;
					case 12:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(11050) * __LIB_4__.func_559(iParam1)));
						break;
					case 13:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(11950) * __LIB_4__.func_559(iParam1)));
						break;
					case 14:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(12900) * __LIB_4__.func_559(iParam1)));
						break;
					case 15:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(13750) * __LIB_4__.func_559(iParam1)));
						break;
					case 16:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(14600) * __LIB_4__.func_559(iParam1)));
						break;
					case 17:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(15450) * __LIB_4__.func_559(iParam1)));
						break;
					case 18:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(16250) * __LIB_4__.func_559(iParam1)));
						break;
					case 19:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(17050) * __LIB_4__.func_559(iParam1)));
						break;
					case 20:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(17800) * __LIB_4__.func_559(iParam1)));
						break;
					case 21:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(18550) * __LIB_4__.func_559(iParam1)));
						break;
					case 22:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(19250) * __LIB_4__.func_559(iParam1)));
						break;
					case 23:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(19950) * __LIB_4__.func_559(iParam1)));
						break;
					case 24:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(20600) * __LIB_4__.func_559(iParam1)));
						break;
					case 25:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(21250) * __LIB_4__.func_559(iParam1)));
						break;
					case 26:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(21850) * __LIB_4__.func_559(iParam1)));
						break;
					case 27:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(22450) * __LIB_4__.func_559(iParam1)));
						break;
					case 28:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(23000) * __LIB_4__.func_559(iParam1)));
						break;
					case 29:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(23550) * __LIB_4__.func_559(iParam1)));
						break;
					case 30:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(24050) * __LIB_4__.func_559(iParam1)));
						break;
					}
			}
			break;
		case 10:
			if ((((((((((((((((Global_1585307 == 3 || Global_1585307 == 27) || Global_1585307 == 26) || Global_1585307 == 7) || Global_1585307 == 5) || Global_1585307 == 10) || Global_1585307 == 29) || Global_1585307 == 30) || Global_1585307 == 31) || Global_1585307 == 32) || Global_1585307 == 33) || Global_1585307 == 34) || Global_1585307 == 35) || Global_1585307 == 36) || Global_1585307 == 37) || Global_1585307 == 38) || Global_1585307 == 39)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(500) * __LIB_4__.func_558(iParam1)));
						break;
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(9000) * __LIB_4__.func_558(iParam1)));
						break;
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(12500) * __LIB_4__.func_558(iParam1)));
						break;
					case 3:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(18000) * __LIB_4__.func_558(iParam1)));
						break;
					case 4:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(33500) * __LIB_4__.func_558(iParam1)));
						break;
				}
			}
			else if (Global_1585307 == 2)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(500) * __LIB_4__.func_558(iParam1)));
						break;
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(4500) * __LIB_4__.func_558(iParam1)));
						break;
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(6250) * __LIB_4__.func_558(iParam1)));
						break;
					case 3:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(9000) * __LIB_4__.func_558(iParam1)));
						break;
					case 4:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(16750) * __LIB_4__.func_558(iParam1)));
						break;
				}
			}
			else if (Global_1585307 == 1)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(500) * __LIB_4__.func_558(iParam1)));
						break;
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5850) * __LIB_4__.func_558(iParam1)));
						break;
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(8125) * __LIB_4__.func_558(iParam1)));
						break;
					case 3:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(11700) * __LIB_4__.func_558(iParam1)));
						break;
					case 4:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(21775) * __LIB_4__.func_558(iParam1)));
						break;
				}
			}
			else if ((((Global_1585307 == 0 || Global_1585307 == 28) || Global_1585307 == 4) || Global_1585307 == 6) || Global_1585307 == 11)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(500) * __LIB_4__.func_558(iParam1)));
						break;
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1800) * __LIB_4__.func_558(iParam1)));
						break;
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2500) * __LIB_4__.func_558(iParam1)));
						break;
					case 3:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3600) * __LIB_4__.func_558(iParam1)));
						break;
					case 4:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(6700) * __LIB_4__.func_558(iParam1)));
						break;
					}
			}
			break;
		case 12:
			if (Global_1585307 == 33)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(700) * __LIB_4__.func_557(iParam1)));
						break;
					case 1:
						return Global_262145.f_22619 /* Tunable: -1436692147 */;
						break;
					case 2:
						return Global_262145.f_22620 /* Tunable: -887352848 */;
						break;
				}
			}
			else if (Global_1585307 == 34)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(700) * __LIB_4__.func_557(iParam1)));
						break;
					case 1:
						return Global_262145.f_22623 /* Tunable: 351434341 */;
						break;
					case 2:
						return Global_262145.f_22620 /* Tunable: -887352848 */;
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(260) * __LIB_4__.func_557(iParam1)) * fVar0));
						break;
					case 1:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(750) * __LIB_4__.func_557(iParam1)) * fVar0));
						break;
					case 2:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(1800) * __LIB_4__.func_557(iParam1)) * fVar0));
						break;
					case 3:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(3000) * __LIB_4__.func_557(iParam1)) * fVar0));
						break;
					case 4:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(9550) * __LIB_4__.func_557(iParam1)) * fVar0));
						break;
					case 5:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(9750) * __LIB_4__.func_557(iParam1)) * fVar0));
						break;
					case 6:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(10500) * __LIB_4__.func_557(iParam1)) * fVar0));
						break;
					case 7:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(12000) * __LIB_4__.func_557(iParam1)) * fVar0));
						break;
					case 8:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(13750) * __LIB_4__.func_557(iParam1)) * fVar0));
						break;
					case 9:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(14625) * __LIB_4__.func_557(iParam1)) * fVar0));
						break;
					case 10:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(15500) * __LIB_4__.func_557(iParam1)) * fVar0));
						break;
					case 11:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(16475) * __LIB_4__.func_557(iParam1)) * fVar0));
						break;
					case 12:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(17250) * __LIB_4__.func_557(iParam1)) * fVar0));
						break;
					case 13:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(18125) * __LIB_4__.func_557(iParam1)) * fVar0));
						break;
					case 14:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(19100) * __LIB_4__.func_557(iParam1)) * fVar0));
						break;
					case 15:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(19975) * __LIB_4__.func_557(iParam1)) * fVar0));
						break;
					case 16:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(20900) * __LIB_4__.func_557(iParam1)) * fVar0));
						break;
					case 17:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(21675) * __LIB_4__.func_557(iParam1)) * fVar0));
						break;
					case 18:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(22550) * __LIB_4__.func_557(iParam1)) * fVar0));
						break;
					case 19:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(23350) * __LIB_4__.func_557(iParam1)) * fVar0));
						break;
					case 20:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(24175) * __LIB_4__.func_557(iParam1)) * fVar0));
						break;
					case 21:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(25025) * __LIB_4__.func_557(iParam1)) * fVar0));
						break;
					case 22:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(25900) * __LIB_4__.func_557(iParam1)) * fVar0));
						break;
					}
			}
			break;
		case 13:
			if (__LIB_1__.func_337(PLAYER::PLAYER_ID()) == 2)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(500) * __LIB_4__.func_556(iParam1)));
						break;
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(750) * __LIB_4__.func_556(iParam1)));
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5000) * __LIB_4__.func_556(iParam1)));
						break;
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(7500) * __LIB_4__.func_556(iParam1)));
						break;
					}
			}
			break;
		case 50:
			if ((((((((((((((((Global_1585307 == 3 || Global_1585307 == 27) || Global_1585307 == 26) || Global_1585307 == 7) || Global_1585307 == 5) || Global_1585307 == 10) || Global_1585307 == 29) || Global_1585307 == 30) || Global_1585307 == 31) || Global_1585307 == 32) || Global_1585307 == 33) || Global_1585307 == 34) || Global_1585307 == 35) || Global_1585307 == 36) || Global_1585307 == 37) || Global_1585307 == 38) || Global_1585307 == 39)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1000) * __LIB_4__.func_555(iParam1)));
						break;
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(29500) * __LIB_4__.func_555(iParam1)));
						break;
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(32500) * __LIB_4__.func_555(iParam1)));
						break;
					case 3:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(40000) * __LIB_4__.func_555(iParam1)));
						break;
					case 4:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(50000) * __LIB_4__.func_555(iParam1)));
						break;
				}
			}
			else if (Global_1585307 == 2)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(500) * __LIB_4__.func_555(iParam1)));
						break;
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(14750) * __LIB_4__.func_555(iParam1)));
						break;
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(16250) * __LIB_4__.func_555(iParam1)));
						break;
					case 3:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(20000) * __LIB_4__.func_555(iParam1)));
						break;
					case 4:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(25000) * __LIB_4__.func_555(iParam1)));
						break;
				}
			}
			else if (Global_1585307 == 1)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(650) * __LIB_4__.func_555(iParam1)));
						break;
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(19175) * __LIB_4__.func_555(iParam1)));
						break;
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(21125) * __LIB_4__.func_555(iParam1)));
						break;
					case 3:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(26000) * __LIB_4__.func_555(iParam1)));
						break;
					case 4:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(30000) * __LIB_4__.func_555(iParam1)));
						break;
				}
			}
			else if ((((Global_1585307 == 0 || Global_1585307 == 28) || Global_1585307 == 4) || Global_1585307 == 6) || Global_1585307 == 11)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(200) * __LIB_4__.func_555(iParam1)));
						break;
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5900) * __LIB_4__.func_555(iParam1)));
						break;
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(6500) * __LIB_4__.func_555(iParam1)));
						break;
					case 3:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(8000) * __LIB_4__.func_555(iParam1)));
						break;
					case 4:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(12000) * __LIB_4__.func_555(iParam1)));
						break;
					}
			}
			break;
		case 23:
			if (Global_1585307 == 31)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(700) * __LIB_4__.func_555(iParam1)));
						break;
					case 1:
						return Global_262145.f_24863 /* Tunable: 1484828918 */;
						break;
					case 2:
						return Global_262145.f_24862 /* Tunable: -1503409126 */;
						break;
					case 29:
						return Global_262145.f_24864 /* Tunable: 1522530733 */;
						break;
					case 30:
						return Global_262145.f_24864 /* Tunable: 1522530733 */;
						break;
					case 31:
						return Global_262145.f_24864 /* Tunable: 1522530733 */;
						break;
					case 32:
						return Global_262145.f_24864 /* Tunable: 1522530733 */;
						break;
					case 33:
						return Global_262145.f_24864 /* Tunable: 1522530733 */;
						break;
					case 34:
						return Global_262145.f_24864 /* Tunable: 1522530733 */;
						break;
					case 35:
						return Global_262145.f_24864 /* Tunable: 1522530733 */;
						break;
					case 36:
						return Global_262145.f_24864 /* Tunable: 1522530733 */;
						break;
					case 37:
						return Global_262145.f_24864 /* Tunable: 1522530733 */;
						break;
					case 38:
						return Global_262145.f_24864 /* Tunable: 1522530733 */;
						break;
					case 39:
						return Global_262145.f_24864 /* Tunable: 1522530733 */;
						break;
					case 40:
						return Global_262145.f_24864 /* Tunable: 1522530733 */;
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(200) * __LIB_4__.func_554(iParam1)) * fVar0));
						break;
					case 1:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(750) * __LIB_4__.func_554(iParam1)) * fVar0));
						break;
					case 2:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(1340) * __LIB_4__.func_554(iParam1)) * fVar0));
						break;
					case 3:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(1650) * __LIB_4__.func_554(iParam1)) * fVar0));
						break;
					case 4:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(3000) * __LIB_4__.func_554(iParam1)) * fVar0));
						break;
					case 5:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(3200) * __LIB_4__.func_554(iParam1)) * fVar0));
						break;
					case 6:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(3650) * __LIB_4__.func_554(iParam1)) * fVar0));
						break;
					case 7:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(4100) * __LIB_4__.func_554(iParam1)) * fVar0));
						break;
					case 8:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(4550) * __LIB_4__.func_554(iParam1)) * fVar0));
						break;
					case 9:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(5000) * __LIB_4__.func_554(iParam1)) * fVar0));
						break;
					case 10:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(5350) * __LIB_4__.func_554(iParam1)) * fVar0));
						break;
					case 11:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(5700) * __LIB_4__.func_554(iParam1)) * fVar0));
						break;
					case 12:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(6050) * __LIB_4__.func_554(iParam1)) * fVar0));
						break;
					case 13:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(6400) * __LIB_4__.func_554(iParam1)) * fVar0));
						break;
					case 14:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(6750) * __LIB_4__.func_554(iParam1)) * fVar0));
						break;
					case 15:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(7100) * __LIB_4__.func_554(iParam1)) * fVar0));
						break;
					case 16:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(7450) * __LIB_4__.func_554(iParam1)) * fVar0));
						break;
					case 17:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(7800) * __LIB_4__.func_554(iParam1)) * fVar0));
						break;
					case 18:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(8150) * __LIB_4__.func_554(iParam1)) * fVar0));
						break;
					case 19:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(8500) * __LIB_4__.func_554(iParam1)) * fVar0));
						break;
					case 20:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(8850) * __LIB_4__.func_554(iParam1)) * fVar0));
						break;
					}
			}
			break;
		case 25:
			if (Global_1585307 == 31)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(700) * __LIB_4__.func_555(iParam1)));
						break;
					case 1:
						return Global_262145.f_24863 /* Tunable: 1484828918 */;
						break;
					case 2:
						return Global_262145.f_24862 /* Tunable: -1503409126 */;
						break;
					case 29:
						return Global_262145.f_24864 /* Tunable: 1522530733 */;
						break;
					case 30:
						return Global_262145.f_24864 /* Tunable: 1522530733 */;
						break;
					case 31:
						return Global_262145.f_24864 /* Tunable: 1522530733 */;
						break;
					case 32:
						return Global_262145.f_24864 /* Tunable: 1522530733 */;
						break;
					case 33:
						return Global_262145.f_24864 /* Tunable: 1522530733 */;
						break;
					case 34:
						return Global_262145.f_24864 /* Tunable: 1522530733 */;
						break;
					case 35:
						return Global_262145.f_24864 /* Tunable: 1522530733 */;
						break;
					case 36:
						return Global_262145.f_24864 /* Tunable: 1522530733 */;
						break;
					case 37:
						return Global_262145.f_24864 /* Tunable: 1522530733 */;
						break;
					case 38:
						return Global_262145.f_24864 /* Tunable: 1522530733 */;
						break;
					case 39:
						return Global_262145.f_24864 /* Tunable: 1522530733 */;
						break;
					case 40:
						return Global_262145.f_24864 /* Tunable: 1522530733 */;
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(200) * __LIB_4__.func_554(iParam1)) * fVar0));
						break;
					case 1:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(750) * __LIB_4__.func_554(iParam1)) * fVar0));
						break;
					case 2:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(1340) * __LIB_4__.func_554(iParam1)) * fVar0));
						break;
					case 3:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(1650) * __LIB_4__.func_554(iParam1)) * fVar0));
						break;
					case 4:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(3000) * __LIB_4__.func_554(iParam1)) * fVar0));
						break;
					case 5:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(3200) * __LIB_4__.func_554(iParam1)) * fVar0));
						break;
					case 6:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(3650) * __LIB_4__.func_554(iParam1)) * fVar0));
						break;
					case 7:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(4100) * __LIB_4__.func_554(iParam1)) * fVar0));
						break;
					case 8:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(4550) * __LIB_4__.func_554(iParam1)) * fVar0));
						break;
					case 9:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(5000) * __LIB_4__.func_554(iParam1)) * fVar0));
						break;
					case 10:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(5350) * __LIB_4__.func_554(iParam1)) * fVar0));
						break;
					case 11:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(5700) * __LIB_4__.func_554(iParam1)) * fVar0));
						break;
					case 12:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(6050) * __LIB_4__.func_554(iParam1)) * fVar0));
						break;
					case 13:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(6400) * __LIB_4__.func_554(iParam1)) * fVar0));
						break;
					case 14:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(6750) * __LIB_4__.func_554(iParam1)) * fVar0));
						break;
					case 15:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(7100) * __LIB_4__.func_554(iParam1)) * fVar0));
						break;
					case 16:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(7450) * __LIB_4__.func_554(iParam1)) * fVar0));
						break;
					case 17:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(7800) * __LIB_4__.func_554(iParam1)) * fVar0));
						break;
					case 18:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(8150) * __LIB_4__.func_554(iParam1)) * fVar0));
						break;
					case 19:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(8500) * __LIB_4__.func_554(iParam1)) * fVar0));
						break;
					case 20:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(8850) * __LIB_4__.func_554(iParam1)) * fVar0));
						break;
					}
			}
			break;
		case 27:
			iVar2 = iParam1;
			switch (iVar2)
			{
				case 0:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(500) * __LIB_4__.func_553(0)));
					break;
				case 1:
					return Global_262145.f_8280 /* Tunable: VEHICLEKIT_INDEPENDENCEDAY_HORN_1 */;
					break;
				case 2:
					return Global_262145.f_8281 /* Tunable: VEHICLEKIT_INDEPENDENCEDAY_HORN_2 */;
					break;
				case 3:
					return Global_262145.f_8282 /* Tunable: VEHICLEKIT_INDEPENDENCEDAY_HORN_3 */;
					break;
				case 4:
					return Global_262145.f_8283 /* Tunable: VEHICLEKIT_INDEPENDENCEDAY_HORN_4 */;
					break;
				case 5:
					return Global_262145.f_8121 /* Tunable: DLC_HIPSTER_CAR_MOD_JAZZ_HORN_1 */;
					break;
				case 6:
					return Global_262145.f_8122 /* Tunable: DLC_HIPSTER_CAR_MOD_JAZZ_HORN_2 */;
					break;
				case 7:
					return Global_262145.f_8123 /* Tunable: DLC_HIPSTER_CAR_MOD_JAZZ_HORN_3 */;
					break;
				case 8:
					return Global_262145.f_8124 /* Tunable: DLC_HIPSTER_CAR_MOD_JAZZ_HORN_4 */;
					break;
				case 9:
					return Global_262145.f_7681 /* Tunable: HORN_CNOTE_C0 */;
					break;
				case 10:
					return Global_262145.f_7682 /* Tunable: HORN_CNOTE_D0 */;
					break;
				case 11:
					return Global_262145.f_7683 /* Tunable: HORN_CNOTE_E0 */;
					break;
				case 12:
					return Global_262145.f_7684 /* Tunable: HORN_CNOTE_F0 */;
					break;
				case 13:
					return Global_262145.f_7685 /* Tunable: HORN_CNOTE_G0 */;
					break;
				case 14:
					return Global_262145.f_7686 /* Tunable: HORN_CNOTE_A0 */;
					break;
				case 15:
					return Global_262145.f_7687 /* Tunable: HORN_CNOTE_B0 */;
					break;
				case 16:
					return Global_262145.f_7688 /* Tunable: HORN_CNOTE_C1 */;
					break;
				case 17:
					return Global_262145.f_7617 /* Tunable: DLC_CAR_MODS_CLASSICAL_HORN_1 */;
					break;
				case 18:
					return Global_262145.f_7618 /* Tunable: DLC_CAR_MODS_CLASSICAL_HORN_2 */;
					break;
				case 19:
					return Global_262145.f_7619 /* Tunable: DLC_CAR_MODS_CLASSICAL_HORN_3 */;
					break;
				case 20:
					return Global_262145.f_7620 /* Tunable: DLC_CAR_MODS_CLASSICAL_HORN_4 */;
					break;
				case 21:
					return Global_262145.f_7621 /* Tunable: DLC_CAR_MODS_CLASSICAL_HORN_5 */;
					break;
				case 22:
					return Global_262145.f_7622 /* Tunable: DLC_CAR_MODS_CLASSICAL_HORN_6 */;
					break;
				case 23:
					return Global_262145.f_7623 /* Tunable: DLC_CAR_MODS_CLASSICAL_HORN_7 */;
					break;
				case 24:
					return Global_262145.f_10654 /* Tunable: DLC_CAR_MODS_LUXE_HORN_1 */;
					break;
				case 25:
					return Global_262145.f_10655 /* Tunable: DLC_CAR_MODS_LUXE_HORN_2 */;
					break;
				case 26:
					return Global_262145.f_10656 /* Tunable: DLC_CAR_MODS_LUXE_HORN_3 */;
					break;
				case 30:
					return Global_262145.f_12346 /* Tunable: CAR_MODS_SAN_ANDREAS_LOOP */;
					break;
				case 31:
					return Global_262145.f_12347 /* Tunable: CAR_MODS_LIBERTY_CITY_LOOP */;
					break;
				case 34:
					return Global_262145.f_12558 /* Tunable: HALLOWEEN_2015_HALLOWEEN_LOOP_1 */;
					break;
				case 35:
					return Global_262145.f_12559 /* Tunable: HALLOWEEN_2015_HALLOWEEN_LOOP_2 */;
					break;
				case 38:
					return Global_262145.f_12585;
					break;
				case 39:
					return Global_262145.f_12586;
					break;
				case 40:
					return Global_262145.f_12587;
					break;
				case 44:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2000) * __LIB_4__.func_553(44)));
					break;
				case 45:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3000) * __LIB_4__.func_553(45)));
					break;
				case 46:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5000) * __LIB_4__.func_553(46)));
					break;
				case 47:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(10000) * __LIB_4__.func_553(47)));
					break;
				case 48:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(12500) * __LIB_4__.func_553(48)));
					break;
				case 49:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(15000) * __LIB_4__.func_553(49)));
					break;
				case 50:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(17500) * __LIB_4__.func_553(50)));
					break;
				case 51:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(25000) * __LIB_4__.func_553(51)));
					break;
				case 52:
					return Global_262145.f_9228 /* Tunable: CAR_MODS_HORN_SAD_TROMBONE */;
					break;
				case 53:
					return Global_262145.f_26656 /* Tunable: AW_SALE_PRICE_MODS_AIR_HORN_1 */;
					break;
				case 54:
					return Global_262145.f_26657 /* Tunable: AW_SALE_PRICE_MODS_AIR_HORN_2 */;
					break;
				case 55:
					return Global_262145.f_26658 /* Tunable: AW_SALE_PRICE_MODS_AIR_HORN_3 */;
					break;
			}
			break;
		case 29:
		case 28:
			if (((((((((((((((((Global_1585307 == 3 || Global_1585307 == 27) || Global_1585307 == 26) || Global_1585307 == 7) || Global_1585307 == 5) || Global_1585307 == 10) || Global_1585307 == 29) || Global_1585307 == 30) || Global_1585307 == 31) || Global_1585307 == 32) || Global_1585307 == 33) || Global_1585307 == 34) || Global_1585307 == 35) || Global_1585307 == 36) || Global_1585307 == 37) || Global_1585307 == 38) || Global_1585307 == 39) || (iParam1 > 1 && iParam0 == 29))
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(600) * __LIB_4__.func_552(iParam1)));
						break;
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(7500) * __LIB_4__.func_552(iParam1)));
						break;
					case 2:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26643 /* Tunable: AW_SALE_PRICE_MODS_VEHICLE_HEADLIGHTS_WHITE */) * Global_262145.f_26642 /* Tunable: AW_VEHICLE_MODS_BUY_IT_NOW_PRICE_MULTIPLIER */) * __LIB_4__.func_552(iParam1)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26643 /* Tunable: AW_SALE_PRICE_MODS_VEHICLE_HEADLIGHTS_WHITE */) * __LIB_4__.func_552(iParam1)));
						}
						break;
					case 3:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26644 /* Tunable: AW_SALE_PRICE_MODS_VEHICLE_HEADLIGHTS_BLUE */) * Global_262145.f_26642 /* Tunable: AW_VEHICLE_MODS_BUY_IT_NOW_PRICE_MULTIPLIER */) * __LIB_4__.func_552(iParam1)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26644 /* Tunable: AW_SALE_PRICE_MODS_VEHICLE_HEADLIGHTS_BLUE */) * __LIB_4__.func_552(iParam1)));
						}
						break;
					case 4:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26645 /* Tunable: AW_SALE_PRICE_MODS_VEHICLE_HEADLIGHTS_ELECTIC_BLUE */) * Global_262145.f_26642 /* Tunable: AW_VEHICLE_MODS_BUY_IT_NOW_PRICE_MULTIPLIER */) * __LIB_4__.func_552(iParam1)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26645 /* Tunable: AW_SALE_PRICE_MODS_VEHICLE_HEADLIGHTS_ELECTIC_BLUE */) * __LIB_4__.func_552(iParam1)));
						}
						break;
					case 5:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26646 /* Tunable: AW_SALE_PRICE_MODS_VEHICLE_HEADLIGHTS_MINT_GREEN */) * Global_262145.f_26642 /* Tunable: AW_VEHICLE_MODS_BUY_IT_NOW_PRICE_MULTIPLIER */) * __LIB_4__.func_552(iParam1)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26646 /* Tunable: AW_SALE_PRICE_MODS_VEHICLE_HEADLIGHTS_MINT_GREEN */) * __LIB_4__.func_552(iParam1)));
						}
						break;
					case 6:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26647 /* Tunable: AW_SALE_PRICE_MODS_VEHICLE_HEADLIGHTS_LIME_GREEN */) * Global_262145.f_26642 /* Tunable: AW_VEHICLE_MODS_BUY_IT_NOW_PRICE_MULTIPLIER */) * __LIB_4__.func_552(iParam1)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26647 /* Tunable: AW_SALE_PRICE_MODS_VEHICLE_HEADLIGHTS_LIME_GREEN */) * __LIB_4__.func_552(iParam1)));
						}
						break;
					case 7:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26648 /* Tunable: AW_SALE_PRICE_MODS_VEHICLE_HEADLIGHTS_YELLOW */) * Global_262145.f_26642 /* Tunable: AW_VEHICLE_MODS_BUY_IT_NOW_PRICE_MULTIPLIER */) * __LIB_4__.func_552(iParam1)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26648 /* Tunable: AW_SALE_PRICE_MODS_VEHICLE_HEADLIGHTS_YELLOW */) * __LIB_4__.func_552(iParam1)));
						}
						break;
					case 8:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26649 /* Tunable: AW_SALE_PRICE_MODS_VEHICLE_HEADLIGHTS_GOLDEN_SHOWER */) * Global_262145.f_26642 /* Tunable: AW_VEHICLE_MODS_BUY_IT_NOW_PRICE_MULTIPLIER */) * __LIB_4__.func_552(iParam1)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26649 /* Tunable: AW_SALE_PRICE_MODS_VEHICLE_HEADLIGHTS_GOLDEN_SHOWER */) * __LIB_4__.func_552(iParam1)));
						}
						break;
					case 9:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26650 /* Tunable: AW_SALE_PRICE_MODS_VEHICLE_HEADLIGHTS_ORANGE */) * Global_262145.f_26642 /* Tunable: AW_VEHICLE_MODS_BUY_IT_NOW_PRICE_MULTIPLIER */) * __LIB_4__.func_552(iParam1)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26650 /* Tunable: AW_SALE_PRICE_MODS_VEHICLE_HEADLIGHTS_ORANGE */) * __LIB_4__.func_552(iParam1)));
						}
						break;
					case 10:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26651 /* Tunable: AW_SALE_PRICE_MODS_VEHICLE_HEADLIGHTS_RED */) * Global_262145.f_26642 /* Tunable: AW_VEHICLE_MODS_BUY_IT_NOW_PRICE_MULTIPLIER */) * __LIB_4__.func_552(iParam1)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26651 /* Tunable: AW_SALE_PRICE_MODS_VEHICLE_HEADLIGHTS_RED */) * __LIB_4__.func_552(iParam1)));
						}
						break;
					case 11:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26652 /* Tunable: AW_SALE_PRICE_MODS_VEHICLE_HEADLIGHTS_PONY_PINK */) * Global_262145.f_26642 /* Tunable: AW_VEHICLE_MODS_BUY_IT_NOW_PRICE_MULTIPLIER */) * __LIB_4__.func_552(iParam1)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26652 /* Tunable: AW_SALE_PRICE_MODS_VEHICLE_HEADLIGHTS_PONY_PINK */) * __LIB_4__.func_552(iParam1)));
						}
						break;
					case 12:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26653 /* Tunable: AW_SALE_PRICE_MODS_VEHICLE_HEADLIGHTS_HOT_PINK */) * Global_262145.f_26642 /* Tunable: AW_VEHICLE_MODS_BUY_IT_NOW_PRICE_MULTIPLIER */) * __LIB_4__.func_552(iParam1)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26653 /* Tunable: AW_SALE_PRICE_MODS_VEHICLE_HEADLIGHTS_HOT_PINK */) * __LIB_4__.func_552(iParam1)));
						}
						break;
					case 13:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26654 /* Tunable: AW_SALE_PRICE_MODS_VEHICLE_HEADLIGHTS_PURPLE */) * Global_262145.f_26642 /* Tunable: AW_VEHICLE_MODS_BUY_IT_NOW_PRICE_MULTIPLIER */) * __LIB_4__.func_552(iParam1)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26654 /* Tunable: AW_SALE_PRICE_MODS_VEHICLE_HEADLIGHTS_PURPLE */) * __LIB_4__.func_552(iParam1)));
						}
						break;
					case 14:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26655 /* Tunable: AW_SALE_PRICE_MODS_VEHICLE_HEADLIGHTS_BLACKLIGHT */) * Global_262145.f_26642 /* Tunable: AW_VEHICLE_MODS_BUY_IT_NOW_PRICE_MULTIPLIER */) * __LIB_4__.func_552(iParam1)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26655 /* Tunable: AW_SALE_PRICE_MODS_VEHICLE_HEADLIGHTS_BLACKLIGHT */) * __LIB_4__.func_552(iParam1)));
						}
						break;
					default:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26655 /* Tunable: AW_SALE_PRICE_MODS_VEHICLE_HEADLIGHTS_BLACKLIGHT */) * __LIB_4__.func_552(iParam1)));
						break;
				}
			}
			else if (Global_1585307 == 1 || Global_1585307 == 2)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(400) * __LIB_4__.func_552(iParam1)));
						break;
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5000) * __LIB_4__.func_552(iParam1)));
						break;
					default:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5000) * __LIB_4__.func_552(iParam1)));
						break;
				}
			}
			else if (((Global_1585307 == 0 || Global_1585307 == 28) || Global_1585307 == 6) || Global_1585307 == 11)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(200) * __LIB_4__.func_552(iParam1)));
						break;
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3000) * __LIB_4__.func_552(iParam1)));
						break;
					default:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3000) * __LIB_4__.func_552(iParam1)));
						break;
				}
			}
			else if (Global_1585307 == 4)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(100) * __LIB_4__.func_552(iParam1)));
						break;
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2000) * __LIB_4__.func_552(iParam1)));
						break;
					default:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2000) * __LIB_4__.func_552(iParam1)));
						break;
					}
			}
			break;
		case 30:
			if (iParam2 == 0)
			{
				switch (iParam1)
				{
					case 0:
						return 100;
						break;
					case 1:
						return Global_262145.f_9207 /* Tunable: CAR_MODS_NEON_LIGHTS_SET_UP_FRONT */;
						break;
					case 2:
						return Global_262145.f_9208 /* Tunable: CAR_MODS_NEON_LIGHTS_SET_UP_BACK */;
						break;
					case 3:
						return Global_262145.f_9209 /* Tunable: CAR_MODS_NEON_LIGHTS_SET_UP_SIDES */;
						break;
					case 4:
						return Global_262145.f_9210 /* Tunable: CAR_MODS_NEON_LIGHTS_SET_UP_FRONT_AND_BACK */;
						break;
					case 5:
						return Global_262145.f_9211 /* Tunable: CAR_MODS_NEON_LIGHTS_SET_UP_FRONT_AND_SIDES */;
						break;
					case 6:
						return Global_262145.f_9212 /* Tunable: CAR_MODS_NEON_LIGHTS_SET_UP_BACK_AND_SIDES */;
						break;
					case 7:
						return Global_262145.f_9213 /* Tunable: CAR_MODS_NEON_LIGHTS_SET_UP_FRONT_BACK_AND_SIDES */;
						break;
				}
			}
			else if (iParam2 == 1)
			{
				switch (iParam1)
				{
					case 0:
						return Global_262145.f_9214 /* Tunable: CAR_MODS_NEON_LIGHTS_COLOR_WHITE */;
						break;
					case 1:
						return Global_262145.f_9215 /* Tunable: CAR_MODS_NEON_LIGHTS_COLOR_BLUE */;
						break;
					case 2:
						return Global_262145.f_9216 /* Tunable: CAR_MODS_NEON_LIGHTS_COLOR_ECLECTIC_BLUE */;
						break;
					case 3:
						return Global_262145.f_9217 /* Tunable: CAR_MODS_NEON_LIGHTS_COLOR_MINT_GREEN */;
						break;
					case 4:
						return Global_262145.f_9218 /* Tunable: CAR_MODS_NEON_LIGHTS_COLOR_LIME_GREEN */;
						break;
					case 5:
						return Global_262145.f_9219 /* Tunable: CAR_MODS_NEON_LIGHTS_COLOR_YELLOW */;
						break;
					case 6:
						return Global_262145.f_9220 /* Tunable: CAR_MODS_NEON_LIGHTS_COLOR_GOLDEN_SHOWER */;
						break;
					case 7:
						return Global_262145.f_9221 /* Tunable: CAR_MODS_NEON_LIGHTS_COLOR_ORANGE */;
						break;
					case 8:
						return Global_262145.f_9222 /* Tunable: CAR_MODS_NEON_LIGHTS_COLOR_RED */;
						break;
					case 9:
						return Global_262145.f_9223 /* Tunable: CAR_MODS_NEON_LIGHTS_COLOR_PONY_PINK */;
						break;
					case 10:
						return Global_262145.f_9224 /* Tunable: CAR_MODS_NEON_LIGHTS_COLOR_HOT_PINK */;
						break;
					case 11:
						return Global_262145.f_9225 /* Tunable: CAR_MODS_NEON_LIGHTS_COLOR_PURPLE */;
						break;
					case 12:
						return Global_262145.f_9226 /* Tunable: CAR_MODS_NEON_LIGHTS_COLOR_BLACKLIGHT */;
						break;
					case 13:
						return Global_262145.f_9227 /* Tunable: CAR_MODS_NEON_LIGHTS_COLOR_CREW */;
						break;
					}
			}
			break;
	}
	switch (iParam0)
	{
		case 33:
			switch (iParam1)
			{
				case 0:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(200) * __LIB_4__.func_551(iParam1)));
					break;
				case 1:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(200) * __LIB_4__.func_551(iParam1)));
					break;
				case 2:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(200) * __LIB_4__.func_551(iParam1)));
					break;
				case 3:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(300) * __LIB_4__.func_551(iParam1)));
					break;
				case 4:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(600) * __LIB_4__.func_551(iParam1)));
					break;
				case 10:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(600) * __LIB_4__.func_551(iParam1)));
					break;
				default:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(600) * __LIB_4__.func_551(99)));
					break;
			}
			break;
		case 40:
			if (VEHICLE::IS_VEHICLE_MODEL(Global_1585308, joaat("avenger")))
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(0) * __LIB_4__.func_550(iParam1)));
						break;
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_21456 /* Tunable: -1303982095 */) * __LIB_4__.func_550(iParam1)));
						break;
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_21457 /* Tunable: -131423902 */) * __LIB_4__.func_550(iParam1)));
						break;
				}
			}
			else if ((VEHICLE::IS_VEHICLE_MODEL(Global_1585308, joaat("cerberus")) || VEHICLE::IS_VEHICLE_MODEL(Global_1585308, joaat("cerberus2"))) || VEHICLE::IS_VEHICLE_MODEL(Global_1585308, joaat("cerberus3")))
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26682 /* Tunable: -1209483768 */) * __LIB_4__.func_550(iParam1)));
						break;
					case 1:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26683 /* Tunable: 530512648 */) * Global_262145.f_26642 /* Tunable: AW_VEHICLE_MODS_BUY_IT_NOW_PRICE_MULTIPLIER */) * __LIB_4__.func_550(iParam1)));
							break;
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26683 /* Tunable: 530512648 */) * __LIB_4__.func_550(iParam1)));
							break;
						}
						break;
				}
			}
			else if (((((VEHICLE::IS_VEHICLE_MODEL(Global_1585308, joaat("issi4")) || VEHICLE::IS_VEHICLE_MODEL(Global_1585308, joaat("issi5"))) || VEHICLE::IS_VEHICLE_MODEL(Global_1585308, joaat("issi6"))) || VEHICLE::IS_VEHICLE_MODEL(Global_1585308, joaat("imperator"))) || VEHICLE::IS_VEHICLE_MODEL(Global_1585308, joaat("imperator2"))) || VEHICLE::IS_VEHICLE_MODEL(Global_1585308, joaat("imperator3")))
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26680 /* Tunable: AW_SALE_PRICE_MODS_NO_GRENADE_LAUNCHER */) * __LIB_4__.func_550(iParam1)));
						break;
					case 1:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26681 /* Tunable: AW_SALE_PRICE_MODS_GRENADE_LAUNCHER_1 */) * Global_262145.f_26642 /* Tunable: AW_VEHICLE_MODS_BUY_IT_NOW_PRICE_MULTIPLIER */) * __LIB_4__.func_550(iParam1)));
							break;
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26681 /* Tunable: AW_SALE_PRICE_MODS_GRENADE_LAUNCHER_1 */) * __LIB_4__.func_550(iParam1)));
							break;
						}
						break;
				}
			}
			else if (Global_1585307 == 31)
			{
				if (VEHICLE::IS_VEHICLE_MODEL(Global_1585308, joaat("oppressor2")))
				{
					switch (iParam1)
					{
						case 0:
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(750) * __LIB_4__.func_550(iParam1)));
							break;
						case 1:
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_24860 /* Tunable: -1535970684 */) * __LIB_4__.func_550(iParam1)));
							break;
						case 2:
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_24861 /* Tunable: 2022636016 */) * __LIB_4__.func_550(iParam1)));
							break;
					}
				}
				else
				{
					switch (iParam1)
					{
						case 0:
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(750) * __LIB_4__.func_550(iParam1)));
							break;
						case 1:
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_21434 /* Tunable: GR_UPGRADE_OPPRESSOR_ROCKETS */) * __LIB_4__.func_550(iParam1)));
							break;
						}
				}
			}
			else if (Global_1585307 == 30)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(55000) * __LIB_4__.func_550(iParam1)));
						break;
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_21424 /* Tunable: GR_UPGRADE_DUNE3_40MM_GRENADE_LAUNCHER */) * __LIB_4__.func_550(iParam1)));
						break;
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_21425 /* Tunable: GR_UPGRADE_DUNE3_762MM_MINIGUN */) * __LIB_4__.func_550(iParam1)));
						break;
				}
			}
			else if (Global_1585307 == 29)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(78500) * __LIB_4__.func_550(iParam1)));
						break;
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_21443 /* Tunable: GR_UPGRADE_TRAILERSMALL2_MISSILE_BARRAGE */) * __LIB_4__.func_550(iParam1)));
						break;
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_21442 /* Tunable: GR_UPGRADE_TRAILERSMALL2_DUAL_20MM_FLAK_CANNONS */) * __LIB_4__.func_550(iParam1)));
						break;
				}
			}
			else if (Global_1585307 == 32)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(0) * __LIB_4__.func_550(iParam1)));
						break;
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_21454 /* Tunable: GR_UPGRADE_TRAILERLARGE_FRONT_TURRET */) * __LIB_4__.func_550(iParam1)));
						break;
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_21455 /* Tunable: -2114768808 */) * __LIB_4__.func_550(iParam1)));
						break;
				}
			}
			else if (iVar1 == joaat("tornado5"))
			{
				return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_12391 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_LIVERY */) * __LIB_4__.func_525(iParam1, 1)) * Global_262145.f_15060 /* Tunable: CAR_MODS_ROOF_LIVERY_DESIGN_MULTIPLIER */));
			}
			else if (iVar1 == joaat("dukes") || iVar1 == joaat("dukes3"))
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(200) * __LIB_4__.func_550(iParam1)));
						break;
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(700) * __LIB_4__.func_550(iParam1)));
						break;
					case 2:
						return Global_262145.f_9340 /* Tunable: DUKES_ROOF_MOD_AMERICAN */;
						break;
					case 3:
						return Global_262145.f_9341 /* Tunable: DUKES_ROOF_MOD_ARGENTINIAN */;
						break;
					case 4:
						return Global_262145.f_9342 /* Tunable: DUKES_ROOF_MOD_AUSTRIAN */;
						break;
					case 5:
						return Global_262145.f_9343 /* Tunable: DUKES_ROOF_MOD_AUSTRALIAN */;
						break;
					case 6:
						return Global_262145.f_9344 /* Tunable: DUKES_ROOF_MOD_BELGIAN */;
						break;
					case 7:
						return Global_262145.f_9345 /* Tunable: DUKES_ROOF_MOD_BRAZILIAN */;
						break;
					case 8:
						return Global_262145.f_9346 /* Tunable: DUKES_ROOF_MOD_BRITISH */;
						break;
					case 9:
						return Global_262145.f_9347 /* Tunable: DUKES_ROOF_MOD_CANADIAN */;
						break;
					case 10:
						return Global_262145.f_9348 /* Tunable: DUKES_ROOF_MOD_COLOMBIAN */;
						break;
					case 11:
						return Global_262145.f_9349 /* Tunable: DUKES_ROOF_MOD_ENGLISH */;
						break;
					case 12:
						return Global_262145.f_9350 /* Tunable: DUKES_ROOF_MOD_FRENCH */;
						break;
					case 13:
						return Global_262145.f_9351 /* Tunable: DUKES_ROOF_MOD_GERMAN */;
						break;
					case 14:
						return Global_262145.f_9352 /* Tunable: DUKES_ROOF_MOD_ITALIAN */;
						break;
					case 15:
						return Global_262145.f_9353 /* Tunable: DUKES_ROOF_MOD_IRISH */;
						break;
					case 16:
						return Global_262145.f_9354 /* Tunable: DUKES_ROOF_MOD_JAMAICAN */;
						break;
					case 17:
						return Global_262145.f_9355 /* Tunable: DUKES_ROOF_MOD_JAPANESE */;
						break;
					case 18:
						return Global_262145.f_9356 /* Tunable: DUKES_ROOF_MOD_MEXICAN */;
						break;
					case 19:
						return Global_262145.f_9357 /* Tunable: DUKES_ROOF_MOD_NORWEGIAN */;
						break;
					case 20:
						return Global_262145.f_9358 /* Tunable: DUKES_ROOF_MOD_RUSSIAN */;
						break;
					case 21:
						return Global_262145.f_9359 /* Tunable: DUKES_ROOF_MOD_SCOTTISH */;
						break;
					case 22:
						return Global_262145.f_9360 /* Tunable: DUKES_ROOF_MOD_SPANISH */;
						break;
					case 23:
						return Global_262145.f_9361 /* Tunable: DUKES_ROOF_MOD_SWEDISH */;
						break;
					case 24:
						return Global_262145.f_9362 /* Tunable: DUKES_ROOF_MOD_SWISS */;
						break;
					case 25:
						return Global_262145.f_9363 /* Tunable: DUKES_ROOF_MOD_TURKISH */;
						break;
					case 26:
						return Global_262145.f_9364 /* Tunable: DUKES_ROOF_MOD_WELSH */;
						break;
					default:
						return 2500;
						break;
				}
			}
			else if (Global_1585307 == 34)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(700) * __LIB_4__.func_550(iParam1)));
						break;
					case 1:
						return Global_262145.f_22621 /* Tunable: 1239036430 */;
						break;
				}
			}
			else if (Global_1585307 == 33)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(700) * __LIB_4__.func_550(iParam1)));
						break;
					case 1:
						return Global_262145.f_22608 /* Tunable: -1696568434 */;
						break;
					case 2:
						return Global_262145.f_22609 /* Tunable: 749536131 */;
						break;
					case 3:
						return Global_262145.f_22610 /* Tunable: 134351661 */;
						break;
				}
			}
			else if (Global_1585307 == 35)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(700) * __LIB_4__.func_549(iParam1)));
						break;
					case 1:
						return Global_262145.f_23948 /* Tunable: -1696074593 */;
						break;
					case 2:
						return Global_262145.f_23949 /* Tunable: -1970187278 */;
						break;
					case 3:
						return Global_262145.f_23950 /* Tunable: -1726025463 */;
						break;
				}
			}
			else if (((VEHICLE::IS_VEHICLE_MODEL(Global_1585308, joaat("revolter")) || VEHICLE::IS_VEHICLE_MODEL(Global_1585308, joaat("savestra"))) || VEHICLE::IS_VEHICLE_MODEL(Global_1585308, joaat("comet4"))) || VEHICLE::IS_VEHICLE_MODEL(Global_1585308, joaat("viseris")))
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(200) * __LIB_4__.func_549(iParam1)));
						break;
					case 1:
						return Global_262145.f_23954 /* Tunable: 260519437 */;
						break;
				}
			}
			else if (Global_1585307 == 36)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1000) * __LIB_4__.func_550(iParam1)));
						break;
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_24839 /* Tunable: 323425157 */) * __LIB_4__.func_550(iParam1)));
						break;
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_24840 /* Tunable: 996988714 */) * __LIB_4__.func_550(iParam1)));
						break;
					case 3:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_24841 /* Tunable: -231316923 */) * __LIB_4__.func_550(iParam1)));
						break;
					case 4:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(310000) * __LIB_4__.func_550(iParam1)));
						break;
					case 5:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(330000) * __LIB_4__.func_550(iParam1)));
						break;
				}
			}
			else if (Global_1585307 == 37)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1000) * __LIB_4__.func_550(iParam1)));
						break;
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_24845 /* Tunable: 1919138577 */) * __LIB_4__.func_550(iParam1)));
						break;
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(310000) * __LIB_4__.func_550(iParam1)));
						break;
					case 3:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(330000) * __LIB_4__.func_550(iParam1)));
						break;
					case 4:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(350000) * __LIB_4__.func_550(iParam1)));
						break;
					case 5:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(365000) * __LIB_4__.func_550(iParam1)));
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(200) * __LIB_4__.func_550(iParam1)));
						break;
					case 1:
						if (VEHICLE::IS_VEHICLE_MODEL(Global_1585308, joaat("cheburek")))
						{
							return Global_262145.f_24159 /* Tunable: ASSAULT_VEHICLES_MODS_CHEBUREK_CARDBOARD_ROOF_1 */;
						}
						else if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(700) * Global_262145.f_26642 /* Tunable: AW_VEHICLE_MODS_BUY_IT_NOW_PRICE_MULTIPLIER */) * __LIB_4__.func_550(iParam1)));
							break;
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(700) * __LIB_4__.func_550(iParam1)));
						}
						break;
					case 2:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(1150) * Global_262145.f_26642 /* Tunable: AW_VEHICLE_MODS_BUY_IT_NOW_PRICE_MULTIPLIER */) * __LIB_4__.func_550(iParam1)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1150) * __LIB_4__.func_550(iParam1)));
						}
						break;
					case 3:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(1600) * Global_262145.f_26642 /* Tunable: AW_VEHICLE_MODS_BUY_IT_NOW_PRICE_MULTIPLIER */) * __LIB_4__.func_550(iParam1)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1600) * __LIB_4__.func_550(iParam1)));
						}
						break;
					case 4:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(1950) * Global_262145.f_26642 /* Tunable: AW_VEHICLE_MODS_BUY_IT_NOW_PRICE_MULTIPLIER */) * __LIB_4__.func_550(iParam1)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1950) * __LIB_4__.func_550(iParam1)));
						}
						break;
					case 5:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(2400) * __LIB_4__.func_550(iParam1)) * fVar0));
						break;
					case 6:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(2500) * __LIB_4__.func_550(iParam1)) * fVar0));
						break;
					case 7:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(2850) * __LIB_4__.func_550(iParam1)) * fVar0));
						break;
					case 8:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(3400) * __LIB_4__.func_550(iParam1)) * fVar0));
						break;
					case 9:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(3950) * __LIB_4__.func_550(iParam1)) * fVar0));
						break;
					case 10:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(4500) * __LIB_4__.func_550(iParam1)) * fVar0));
						break;
					case 11:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(5050) * __LIB_4__.func_550(iParam1)) * fVar0));
						break;
					case 12:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(5550) * __LIB_4__.func_550(iParam1)) * fVar0));
						break;
					case 13:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(6000) * __LIB_4__.func_550(iParam1)) * fVar0));
						break;
					case 14:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(6350) * __LIB_4__.func_550(iParam1)) * fVar0));
						break;
					case 15:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(6650) * __LIB_4__.func_550(iParam1)) * fVar0));
						break;
					case 16:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(6950) * __LIB_4__.func_550(iParam1)) * fVar0));
						break;
					case 17:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(7250) * __LIB_4__.func_550(iParam1)) * fVar0));
						break;
					case 18:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(7550) * __LIB_4__.func_550(iParam1)) * fVar0));
						break;
					case 19:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(7850) * __LIB_4__.func_550(iParam1)) * fVar0));
						break;
					case 20:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(8150) * __LIB_4__.func_550(iParam1)) * fVar0));
						break;
					default:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(8150) * __LIB_4__.func_550(iParam1)) * fVar0));
						break;
					}
			}
			break;
		case 44:
			if ((((((((((((((((Global_1585307 == 3 || Global_1585307 == 27) || Global_1585307 == 26) || Global_1585307 == 7) || Global_1585307 == 5) || Global_1585307 == 10) || Global_1585307 == 29) || Global_1585307 == 30) || Global_1585307 == 31) || Global_1585307 == 32) || Global_1585307 == 33) || Global_1585307 == 34) || Global_1585307 == 35) || Global_1585307 == 36) || Global_1585307 == 37) || Global_1585307 == 38) || Global_1585307 == 39)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2500) * __LIB_4__.func_548(iParam1)));
						break;
					case 1:
						if (VEHICLE::IS_VEHICLE_MODEL(Global_1585308, joaat("cheburek")))
						{
							return Global_262145.f_24161 /* Tunable: ASSAULT_VEHICLES_MODS_CHEBUREK_CARDBOARD_SKIRT_1 */;
						}
						else
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(5500) * __LIB_4__.func_548(iParam1)) * fVar0));
						}
						break;
					case 2:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(8000) * __LIB_4__.func_548(iParam1)) * fVar0));
						break;
					case 3:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(10500) * __LIB_4__.func_548(iParam1)) * fVar0));
						break;
					case 4:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(14000) * __LIB_4__.func_548(iParam1)) * fVar0));
						break;
					case 5:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(14500) * __LIB_4__.func_548(iParam1)) * fVar0));
						break;
					case 6:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(15000) * __LIB_4__.func_548(iParam1)) * fVar0));
						break;
					case 7:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(15500) * __LIB_4__.func_548(iParam1)) * fVar0));
						break;
					case 8:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(16000) * __LIB_4__.func_548(iParam1)) * fVar0));
						break;
					case 9:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(16500) * __LIB_4__.func_548(iParam1)) * fVar0));
						break;
					case 10:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(17000) * __LIB_4__.func_548(iParam1)) * fVar0));
						break;
					case 11:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(17400) * __LIB_4__.func_548(iParam1)) * fVar0));
						break;
					case 12:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(18300) * __LIB_4__.func_548(iParam1)) * fVar0));
						break;
					case 13:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(19000) * __LIB_4__.func_548(iParam1)) * fVar0));
						break;
					case 14:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(20425) * __LIB_4__.func_548(iParam1)) * fVar0));
						break;
					case 15:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(21025) * __LIB_4__.func_548(iParam1)) * fVar0));
						break;
					case 16:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(21475) * __LIB_4__.func_548(iParam1)) * fVar0));
						break;
					case 17:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(21925) * __LIB_4__.func_548(iParam1)) * fVar0));
						break;
					case 18:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(22375) * __LIB_4__.func_548(iParam1)) * fVar0));
						break;
					case 19:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(22825) * __LIB_4__.func_548(iParam1)) * fVar0));
						break;
					case 20:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(23275) * __LIB_4__.func_548(iParam1)) * fVar0));
						break;
					case 21:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(23725) * __LIB_4__.func_548(iParam1)) * fVar0));
						break;
					case 22:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(24175) * __LIB_4__.func_548(iParam1)) * fVar0));
						break;
					case 23:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(24625) * __LIB_4__.func_548(iParam1)) * fVar0));
						break;
					case 24:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(24625) * __LIB_4__.func_548(iParam1)) * fVar0));
						break;
				}
			}
			else if (Global_1585307 == 1 || Global_1585307 == 2)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2500) * __LIB_4__.func_548(iParam1)));
						break;
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3000) * __LIB_4__.func_548(iParam1)));
						break;
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(4000) * __LIB_4__.func_548(iParam1)));
						break;
					case 3:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5500) * __LIB_4__.func_548(iParam1)));
						break;
					case 4:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(7800) * __LIB_4__.func_548(iParam1)));
						break;
					case 5:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(8000) * __LIB_4__.func_548(iParam1)));
						break;
					case 6:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(8300) * __LIB_4__.func_548(iParam1)));
						break;
					case 7:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(8500) * __LIB_4__.func_548(iParam1)));
						break;
					case 8:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(8550) * __LIB_4__.func_548(iParam1)));
						break;
					case 9:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(8700) * __LIB_4__.func_548(iParam1)));
						break;
					case 10:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(8800) * __LIB_4__.func_548(iParam1)));
						break;
					case 11:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(9500) * __LIB_4__.func_548(iParam1)));
						break;
					case 12:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(11075) * __LIB_4__.func_548(iParam1)));
						break;
					case 13:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(13525) * __LIB_4__.func_548(iParam1)));
						break;
					case 14:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(16850) * __LIB_4__.func_548(iParam1)));
						break;
					case 15:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(21050) * __LIB_4__.func_548(iParam1)));
						break;
				}
			}
			else if (((Global_1585307 == 0 || Global_1585307 == 28) || Global_1585307 == 6) || Global_1585307 == 11)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(600) * __LIB_4__.func_548(iParam1)));
						break;
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(830) * __LIB_4__.func_548(iParam1)));
						break;
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1000) * __LIB_4__.func_548(iParam1)));
						break;
					case 3:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1500) * __LIB_4__.func_548(iParam1)));
						break;
					case 4:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2000) * __LIB_4__.func_548(iParam1)));
						break;
					case 5:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(14500) * __LIB_4__.func_548(iParam1)));
						break;
					case 6:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(15000) * __LIB_4__.func_548(iParam1)));
						break;
					case 7:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(15750) * __LIB_4__.func_548(iParam1)));
						break;
					case 8:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(16200) * __LIB_4__.func_548(iParam1)));
						break;
					case 9:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(16500) * __LIB_4__.func_548(iParam1)));
						break;
					case 10:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(18000) * __LIB_4__.func_548(iParam1)));
						break;
					case 11:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(18100) * __LIB_4__.func_548(iParam1)));
						break;
					case 12:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(18325) * __LIB_4__.func_548(iParam1)));
						break;
					case 13:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(18675) * __LIB_4__.func_548(iParam1)));
						break;
					case 14:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(19150) * __LIB_4__.func_548(iParam1)));
						break;
					case 15:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(19750) * __LIB_4__.func_548(iParam1)));
						break;
				}
			}
			else if (Global_1585307 == 4)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(400) * __LIB_4__.func_548(iParam1)));
						break;
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(480) * __LIB_4__.func_548(iParam1)));
						break;
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(580) * __LIB_4__.func_548(iParam1)));
						break;
					case 3:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(700) * __LIB_4__.func_548(iParam1)));
						break;
					case 4:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1000) * __LIB_4__.func_548(iParam1)));
						break;
					case 5:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1200) * __LIB_4__.func_548(iParam1)));
						break;
					case 6:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1250) * __LIB_4__.func_548(iParam1)));
						break;
					case 7:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1330) * __LIB_4__.func_548(iParam1)));
						break;
					case 8:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1350) * __LIB_4__.func_548(iParam1)));
						break;
					case 9:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1750) * __LIB_4__.func_548(iParam1)));
						break;
					case 10:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2500) * __LIB_4__.func_548(iParam1)));
						break;
					case 11:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2550) * __LIB_4__.func_548(iParam1)));
						break;
					case 12:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2625) * __LIB_4__.func_548(iParam1)));
						break;
					case 13:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2725) * __LIB_4__.func_548(iParam1)));
						break;
					case 14:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2850) * __LIB_4__.func_548(iParam1)));
						break;
					case 15:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3000) * __LIB_4__.func_548(iParam1)));
						break;
					}
			}
			break;
		case 46:
			if (((((((((((Global_1585307 == 3 || Global_1585307 == 27) || Global_1585307 == 26) || Global_1585307 == 7) || Global_1585307 == 5) || Global_1585307 == 10) || Global_1585307 == 29) || Global_1585307 == 30) || Global_1585307 == 31) || Global_1585307 == 32) || Global_1585307 == 33) || Global_1585307 == 38)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(6000) * __LIB_4__.func_549(iParam1)));
						break;
					case 1:
						if (VEHICLE::IS_VEHICLE_MODEL(Global_1585308, joaat("cheburek")))
						{
							return Global_262145.f_24160 /* Tunable: ASSAULT_VEHICLES_MODS_CHEBUREK_CARDBOARD_SPOILER_1 */;
						}
						else
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(7050) * __LIB_4__.func_549(iParam1)) * fVar0));
						}
						break;
					case 2:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(10000) * __LIB_4__.func_549(iParam1)) * fVar0));
						break;
					case 3:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(13000) * __LIB_4__.func_549(iParam1)) * fVar0));
						break;
					case 4:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(14000) * __LIB_4__.func_549(iParam1)) * fVar0));
						break;
					case 5:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(16000) * __LIB_4__.func_549(iParam1)) * fVar0));
						break;
					case 6:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(16500) * __LIB_4__.func_549(iParam1)) * fVar0));
						break;
					case 7:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(17000) * __LIB_4__.func_549(iParam1)) * fVar0));
						break;
					case 8:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(17500) * __LIB_4__.func_549(iParam1)) * fVar0));
						break;
					case 9:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(18000) * __LIB_4__.func_549(iParam1)) * fVar0));
						break;
					case 10:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(18500) * __LIB_4__.func_549(iParam1)) * fVar0));
						break;
					case 11:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(19000) * __LIB_4__.func_549(iParam1)) * fVar0));
						break;
					case 12:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(19500) * __LIB_4__.func_549(iParam1)) * fVar0));
						break;
					case 13:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(20000) * __LIB_4__.func_549(iParam1)) * fVar0));
						break;
					case 14:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(20500) * __LIB_4__.func_549(iParam1)) * fVar0));
						break;
					case 15:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(21000) * __LIB_4__.func_549(iParam1)) * fVar0));
						break;
					case 16:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(21500) * __LIB_4__.func_549(iParam1)) * fVar0));
						break;
					case 17:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(22750) * __LIB_4__.func_549(iParam1)) * fVar0));
						break;
					case 18:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(24000) * __LIB_4__.func_549(iParam1)) * fVar0));
						break;
					case 19:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(25250) * __LIB_4__.func_549(iParam1)) * fVar0));
						break;
					case 20:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(26500) * __LIB_4__.func_549(iParam1)) * fVar0));
						break;
					case 21:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(27750) * __LIB_4__.func_549(iParam1)) * fVar0));
						break;
					case 22:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(29000) * __LIB_4__.func_549(iParam1)) * fVar0));
						break;
					case 23:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(30250) * __LIB_4__.func_549(iParam1)) * fVar0));
						break;
					case 24:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(31500) * __LIB_4__.func_549(iParam1)) * fVar0));
						break;
					case 25:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(32750) * __LIB_4__.func_549(iParam1)) * fVar0));
						break;
					case 26:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(34000) * __LIB_4__.func_549(iParam1)) * fVar0));
						break;
					case 27:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(35250) * __LIB_4__.func_549(iParam1)) * fVar0));
						break;
					case 28:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(36500) * __LIB_4__.func_549(iParam1)) * fVar0));
						break;
					case 29:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(37750) * __LIB_4__.func_549(iParam1)) * fVar0));
						break;
				}
			}
			else if (Global_1585307 == 37)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1000) * __LIB_4__.func_549(iParam1)));
						break;
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_24846 /* Tunable: 1608011866 */) * __LIB_4__.func_549(iParam1)));
						break;
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_24847 /* Tunable: 1771489579 */) * __LIB_4__.func_549(iParam1)));
						break;
					case 3:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(285000) * __LIB_4__.func_549(iParam1)));
						break;
					case 4:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(310000) * __LIB_4__.func_549(iParam1)));
						break;
					case 5:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(330000) * __LIB_4__.func_549(iParam1)));
						break;
				}
			}
			else if (Global_1585307 == 1 || Global_1585307 == 2)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1000) * __LIB_4__.func_549(iParam1)));
						break;
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1500) * __LIB_4__.func_549(iParam1)));
						break;
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1900) * __LIB_4__.func_549(iParam1)));
						break;
					case 3:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2600) * __LIB_4__.func_549(iParam1)));
						break;
					case 4:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3500) * __LIB_4__.func_549(iParam1)));
						break;
					case 5:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(4000) * __LIB_4__.func_549(iParam1)));
						break;
					case 6:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(4750) * __LIB_4__.func_549(iParam1)));
						break;
					case 7:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5000) * __LIB_4__.func_549(iParam1)));
						break;
					case 8:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5250) * __LIB_4__.func_549(iParam1)));
						break;
					case 9:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5500) * __LIB_4__.func_549(iParam1)));
						break;
					case 10:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5750) * __LIB_4__.func_549(iParam1)));
						break;
					case 11:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(6000) * __LIB_4__.func_549(iParam1)));
						break;
					case 12:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(6250) * __LIB_4__.func_549(iParam1)));
						break;
					case 13:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(6500) * __LIB_4__.func_549(iParam1)));
						break;
					case 14:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(6750) * __LIB_4__.func_549(iParam1)));
						break;
					case 15:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(7000) * __LIB_4__.func_549(iParam1)));
						break;
					case 16:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(7250) * __LIB_4__.func_549(iParam1)));
						break;
					case 17:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(8750) * __LIB_4__.func_549(iParam1)));
						break;
					case 18:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(10250) * __LIB_4__.func_549(iParam1)));
						break;
					case 19:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(11750) * __LIB_4__.func_549(iParam1)));
						break;
					case 20:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(13250) * __LIB_4__.func_549(iParam1)));
						break;
					case 21:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(13750) * __LIB_4__.func_549(iParam1)));
						break;
					case 22:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(14250) * __LIB_4__.func_549(iParam1)));
						break;
					case 23:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(14750) * __LIB_4__.func_549(iParam1)));
						break;
					case 24:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(15250) * __LIB_4__.func_549(iParam1)));
						break;
					case 25:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(15750) * __LIB_4__.func_549(iParam1)));
						break;
					case 26:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(16250) * __LIB_4__.func_549(iParam1)));
						break;
					case 27:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(16750) * __LIB_4__.func_549(iParam1)));
						break;
					case 28:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(17250) * __LIB_4__.func_549(iParam1)));
						break;
					case 29:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(17750) * __LIB_4__.func_549(iParam1)));
						break;
					case 30:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(18250) * __LIB_4__.func_549(iParam1)));
						break;
				}
			}
			else if (((Global_1585307 == 0 || Global_1585307 == 28) || Global_1585307 == 6) || Global_1585307 == 11)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(300) * __LIB_4__.func_549(iParam1)));
						break;
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(550) * __LIB_4__.func_549(iParam1)));
						break;
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(700) * __LIB_4__.func_549(iParam1)));
						break;
					case 3:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1050) * __LIB_4__.func_549(iParam1)));
						break;
					case 4:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1500) * __LIB_4__.func_549(iParam1)));
						break;
					case 5:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2000) * __LIB_4__.func_549(iParam1)));
						break;
					case 6:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2300) * __LIB_4__.func_549(iParam1)));
						break;
					case 7:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2500) * __LIB_4__.func_549(iParam1)));
						break;
					case 8:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3000) * __LIB_4__.func_549(iParam1)));
						break;
					case 9:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3500) * __LIB_4__.func_549(iParam1)));
						break;
					case 10:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(4000) * __LIB_4__.func_549(iParam1)));
						break;
					case 11:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(4500) * __LIB_4__.func_549(iParam1)));
						break;
					case 12:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5000) * __LIB_4__.func_549(iParam1)));
						break;
					case 13:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5500) * __LIB_4__.func_549(iParam1)));
						break;
					case 14:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(6000) * __LIB_4__.func_549(iParam1)));
						break;
					case 15:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(6500) * __LIB_4__.func_549(iParam1)));
						break;
					case 16:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(7000) * __LIB_4__.func_549(iParam1)));
						break;
					case 17:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(7750) * __LIB_4__.func_549(iParam1)));
						break;
					case 18:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(8500) * __LIB_4__.func_549(iParam1)));
						break;
					case 19:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(9250) * __LIB_4__.func_549(iParam1)));
						break;
					case 20:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(10000) * __LIB_4__.func_549(iParam1)));
						break;
				}
			}
			else if (Global_1585307 == 4)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(200) * __LIB_4__.func_549(iParam1)));
						break;
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(400) * __LIB_4__.func_549(iParam1)));
						break;
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(600) * __LIB_4__.func_549(iParam1)));
						break;
					case 3:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(800) * __LIB_4__.func_549(iParam1)));
						break;
					case 4:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1000) * __LIB_4__.func_549(iParam1)));
						break;
					case 5:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1200) * __LIB_4__.func_549(iParam1)));
						break;
					case 6:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1500) * __LIB_4__.func_549(iParam1)));
						break;
					case 7:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1600) * __LIB_4__.func_549(iParam1)));
						break;
					case 8:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1700) * __LIB_4__.func_549(iParam1)));
						break;
					case 9:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1800) * __LIB_4__.func_549(iParam1)));
						break;
					case 10:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1900) * __LIB_4__.func_549(iParam1)));
						break;
					case 11:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2000) * __LIB_4__.func_549(iParam1)));
						break;
					case 12:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2100) * __LIB_4__.func_549(iParam1)));
						break;
					case 13:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2200) * __LIB_4__.func_549(iParam1)));
						break;
					case 14:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2300) * __LIB_4__.func_549(iParam1)));
						break;
					case 15:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2400) * __LIB_4__.func_549(iParam1)));
						break;
					case 16:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2500) * __LIB_4__.func_549(iParam1)));
						break;
					case 17:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2850) * __LIB_4__.func_549(iParam1)));
						break;
					case 18:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3200) * __LIB_4__.func_549(iParam1)));
						break;
					case 19:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3550) * __LIB_4__.func_549(iParam1)));
						break;
					case 20:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3900) * __LIB_4__.func_549(iParam1)));
						break;
				}
			}
			else if (Global_1585307 == 35)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(700) * __LIB_4__.func_549(iParam1)));
						break;
					case 1:
						return Global_262145.f_23951 /* Tunable: 963810230 */;
						break;
					case 2:
						return Global_262145.f_23952 /* Tunable: 254557994 */;
						break;
					case 3:
						return Global_262145.f_23953 /* Tunable: 469457096 */;
						break;
				}
			}
			else if (Global_1585307 == 36)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1000) * __LIB_4__.func_549(iParam1)));
						break;
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_24844 /* Tunable: -342504567 */) * __LIB_4__.func_549(iParam1)));
						break;
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(12000) * __LIB_4__.func_549(iParam1)));
						break;
					case 3:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(18000) * __LIB_4__.func_549(iParam1)));
						break;
					case 4:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(26000) * __LIB_4__.func_549(iParam1)));
						break;
					case 5:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(39500) * __LIB_4__.func_549(iParam1)));
						break;
					}
			}
			break;
		case 47:
			switch (iParam1)
			{
				case 0:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(200) * __LIB_4__.func_547(iParam1)));
					break;
				case 1:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1000) * __LIB_4__.func_547(iParam1)));
					break;
				case 2:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2000) * __LIB_4__.func_547(iParam1)));
					break;
				case 3:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3400) * __LIB_4__.func_547(iParam1)));
					break;
				case 4:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(4400) * __LIB_4__.func_547(iParam1)));
					break;
				case 5:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(4600) * __LIB_4__.func_547(iParam1)));
					break;
			}
			break;
		case 53:
			if ((((((((((((((((Global_1585307 == 3 || Global_1585307 == 27) || Global_1585307 == 26) || Global_1585307 == 7) || Global_1585307 == 5) || Global_1585307 == 10) || Global_1585307 == 29) || Global_1585307 == 30) || Global_1585307 == 31) || Global_1585307 == 32) || Global_1585307 == 33) || Global_1585307 == 35) || Global_1585307 == 34) || Global_1585307 == 36) || Global_1585307 == 37) || Global_1585307 == 38) || Global_1585307 == 39)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5000) * __LIB_4__.func_546(iParam1)));
						break;
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(50000) * __LIB_4__.func_546(iParam1)));
						break;
				}
			}
			else if (Global_1585307 == 1)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3250) * __LIB_4__.func_546(iParam1)));
						break;
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(42500) * __LIB_4__.func_546(iParam1)));
						break;
				}
			}
			else if (Global_1585307 == 2)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2500) * __LIB_4__.func_546(iParam1)));
						break;
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(35000) * __LIB_4__.func_546(iParam1)));
						break;
				}
			}
			else if (((Global_1585307 == 0 || Global_1585307 == 28) || Global_1585307 == 6) || Global_1585307 == 11)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1000) * __LIB_4__.func_546(iParam1)));
						break;
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(30000) * __LIB_4__.func_546(iParam1)));
						break;
				}
			}
			else if (Global_1585307 == 4)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1000) * __LIB_4__.func_546(iParam1)));
						break;
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(24000) * __LIB_4__.func_546(iParam1)));
						break;
					}
			}
			break;
		case 58:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_31308 /* Tunable: 615116178 */;
					break;
				case 2:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(25000) * __LIB_4__.func_545(iParam1)));
					break;
				case 1:
					return Global_262145.f_31309 /* Tunable: 1749447388 */;
					break;
				case 10:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(200) * __LIB_4__.func_545(iParam1)));
					break;
				case 11:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5000) * __LIB_4__.func_545(iParam1)));
					break;
				case 12:
					return Global_262145.f_12687 /* Tunable: CAR_MODS_LOWRIDER_1_BENNYS_TIRE_DESIGN_WHITE_LINES */;
					break;
				case 13:
					return Global_262145.f_12688 /* Tunable: CAR_MODS_LOWRIDER_1_BENNYS_TIRE_DESIGN_CLASSIC_WHITE_WALL */;
					break;
				case 14:
					return Global_262145.f_12689 /* Tunable: CAR_MODS_LOWRIDER_1_BENNYS_TIRE_DESIGN_RETRO_WHITE_WALL */;
					break;
				case 15:
					return Global_262145.f_12690 /* Tunable: CAR_MODS_LOWRIDER_1_BENNYS_TIRE_DESIGN_RED_LINES */;
					break;
				case 16:
					return Global_262145.f_12691 /* Tunable: CAR_MODS_LOWRIDER_1_BENNYS_TIRE_DESIGN_BLUE_LINES */;
					break;
				case 17:
					return Global_262145.f_12692 /* Tunable: CAR_MODS_LOWRIDER_1_BENNYS_TIRE_DESIGN_ATOMIC */;
					break;
				case 18:
					return 12345;
				case 19:
					return 12345;
				case 29:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1500) * __LIB_4__.func_545(iParam1)));
					break;
				case 30:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5000) * __LIB_4__.func_545(iParam1)));
					break;
				case 31:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(10000) * __LIB_4__.func_545(iParam1)));
					break;
				case 32:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(12500) * __LIB_4__.func_545(iParam1)));
					break;
				case 33:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(14000) * __LIB_4__.func_545(iParam1)));
					break;
				case 34:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(15000) * __LIB_4__.func_545(iParam1)));
					break;
				case 35:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(17500) * __LIB_4__.func_545(iParam1)));
					break;
				case 36:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(20000) * __LIB_4__.func_545(iParam1)));
					break;
				case 37:
					return Global_262145.f_8125 /* Tunable: DLC_HIPSTER_CAR_MOD_PINK_TIRE_SMOKE */;
					break;
				case 38:
					return Global_262145.f_8126 /* Tunable: DLC_HIPSTER_CAR_MOD_BROWN_TIRE_SMOKE */;
					break;
				case 39:
					return Global_262145.f_8279 /* Tunable: VEHICLEKIT_INDEPENDENCEDAY_PATRIOT_TIRE_SMOKE */;
					break;
				case 40:
					if (__LIB_19__.func_954())
					{
						return 0;
					}
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(25000) * __LIB_4__.func_545(iParam1)));
					break;
			}
			break;
		case 45:
			if (Global_1585307 == 38)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(6000) * __LIB_4__.func_549(iParam1)));
						break;
					case 1:
						if (VEHICLE::IS_VEHICLE_MODEL(Global_1585308, joaat("cheburek")))
						{
							return Global_262145.f_24160 /* Tunable: ASSAULT_VEHICLES_MODS_CHEBUREK_CARDBOARD_SPOILER_1 */;
						}
						else
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(7050) * __LIB_4__.func_549(iParam1)) * fVar0));
						}
						break;
					case 2:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(10000) * __LIB_4__.func_549(iParam1)) * fVar0));
						break;
					case 3:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(13000) * __LIB_4__.func_549(iParam1)) * fVar0));
						break;
					case 4:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(14000) * __LIB_4__.func_549(iParam1)) * fVar0));
						break;
					case 5:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(16000) * __LIB_4__.func_549(iParam1)) * fVar0));
						break;
					case 6:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(16500) * __LIB_4__.func_549(iParam1)) * fVar0));
						break;
					case 7:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(17000) * __LIB_4__.func_549(iParam1)) * fVar0));
						break;
					case 8:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(17500) * __LIB_4__.func_549(iParam1)) * fVar0));
						break;
					case 9:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(18000) * __LIB_4__.func_549(iParam1)) * fVar0));
						break;
					case 10:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(18500) * __LIB_4__.func_549(iParam1)) * fVar0));
						break;
					case 11:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(19000) * __LIB_4__.func_549(iParam1)) * fVar0));
						break;
					case 12:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(19500) * __LIB_4__.func_549(iParam1)) * fVar0));
						break;
					case 13:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(20000) * __LIB_4__.func_549(iParam1)) * fVar0));
						break;
					case 14:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(20500) * __LIB_4__.func_549(iParam1)) * fVar0));
						break;
					case 15:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(21000) * __LIB_4__.func_549(iParam1)) * fVar0));
						break;
					case 16:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(21500) * __LIB_4__.func_549(iParam1)) * fVar0));
						break;
					case 17:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(22750) * __LIB_4__.func_549(iParam1)) * fVar0));
						break;
					case 18:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(24000) * __LIB_4__.func_549(iParam1)) * fVar0));
						break;
					case 19:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(25250) * __LIB_4__.func_549(iParam1)) * fVar0));
						break;
					case 20:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(26500) * __LIB_4__.func_549(iParam1)) * fVar0));
						break;
					case 21:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(27750) * __LIB_4__.func_549(iParam1)) * fVar0));
						break;
					case 22:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(29000) * __LIB_4__.func_549(iParam1)) * fVar0));
						break;
					case 23:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(30250) * __LIB_4__.func_549(iParam1)) * fVar0));
						break;
					case 24:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(31500) * __LIB_4__.func_549(iParam1)) * fVar0));
						break;
					case 25:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(32750) * __LIB_4__.func_549(iParam1)) * fVar0));
						break;
					}
			}
			break;
		case 56:
			switch (iParam1)
			{
				case 0:
					return 1600;
					break;
				case 1:
					return 1600;
					break;
			}
			break;
		case 57:
			switch (iParam1)
			{
				case 0:
					return 1500;
					break;
				case 1:
					return 800;
					break;
			}
			break;
		case 60:
			switch (iParam1)
			{
				case 0:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(500) * __LIB_4__.func_544(iParam1)));
					break;
				case 1:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1500) * __LIB_4__.func_544(iParam1)));
					break;
				case 2:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3500) * __LIB_4__.func_544(iParam1)));
					break;
				case 3:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5000) * __LIB_4__.func_544(iParam1)));
					break;
				case 4:
					return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(6000) * __LIB_4__.func_544(iParam1)));
					break;
				case 5:
					return Global_262145.f_8120 /* Tunable: DLC_HIPSTER_CAR_MOD_PURE_BLACK */;
					break;
			}
			break;
		case 15:
			if (iVar1 == joaat("apc"))
			{
				switch (iParam1)
				{
					case 22:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_21423 /* Tunable: GR_UPGRADE_APC_MINES */) * __LIB_4__.func_543(1)));
						break;
				}
			}
			else if (iVar1 == joaat("dune3"))
			{
				switch (iParam1)
				{
					case 22:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_21428 /* Tunable: GR_UPGRADE_DUNE3_MINES */) * __LIB_4__.func_543(1)));
						break;
				}
			}
			else if (iVar1 == joaat("halftrack"))
			{
				switch (iParam1)
				{
					case 22:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_21433 /* Tunable: GR_UPGRADE_HALFTRACK_MINES */) * __LIB_4__.func_543(1)));
						break;
				}
			}
			else if (iVar1 == joaat("tampa3"))
			{
				switch (iParam1)
				{
					case 22:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_21441 /* Tunable: GR_UPGRADE_TAMPA3_MINES */) * __LIB_4__.func_543(1)));
						break;
				}
			}
			else if (iVar1 == joaat("insurgent3"))
			{
				switch (iParam1)
				{
					case 22:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_21448 /* Tunable: GR_UPGRADE_INSURGENT3_MINES */) * __LIB_4__.func_543(1)));
						break;
				}
			}
			else if (iVar1 == joaat("technical3"))
			{
				switch (iParam1)
				{
					case 22:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_21453 /* Tunable: GR_UPGRADE_TECHNICAL3_MINES */) * __LIB_4__.func_543(1)));
						break;
				}
			}
			else if (Global_1585307 == 30)
			{
				switch (iParam1)
				{
					case 22:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(99000) * __LIB_4__.func_543(1)));
						break;
				}
			}
			else if (Global_1585307 == 29)
			{
				switch (iParam1)
				{
					case 22:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(99000) * __LIB_4__.func_543(1)));
						break;
				}
			}
			else if (Global_1585307 == 33)
			{
				iParam1 = (iParam1 - 21);
				switch (iParam1)
				{
					case 1:
						return Global_262145.f_22616 /* Tunable: 764454487 */;
						break;
					case 2:
						return Global_262145.f_22615 /* Tunable: -2014001243 */;
						break;
					case 3:
						return Global_262145.f_22614 /* Tunable: -912835065 */;
						break;
					case 4:
						return Global_262145.f_22617 /* Tunable: 742471171 */;
						break;
				}
			}
			else if (Global_1585307 == 34)
			{
				iParam1 = (iParam1 - 21);
				switch (iParam1)
				{
					case 1:
						return Global_262145.f_22628 /* Tunable: -1150010085 */;
						break;
					case 2:
						return Global_262145.f_22627 /* Tunable: 1975667705 */;
						break;
					case 3:
						return Global_262145.f_22626 /* Tunable: 2031286533 */;
						break;
					case 4:
						return Global_262145.f_22629 /* Tunable: -979574552 */;
						break;
				}
			}
			else if (Global_1585307 == 38)
			{
				if (iParam1 > 20)
				{
					iParam1 = (iParam1 - 21);
					switch (iParam1)
					{
						case 0:
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26659 /* Tunable: AW_SALE_PRICE_MODS_NO_MINE */) * __LIB_4__.func_543(0)));
							break;
						case 1:
							if (bParam4)
							{
								return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26660 /* Tunable: AW_SALE_PRICE_MODS_MINE_1 */) * Global_262145.f_26642 /* Tunable: AW_VEHICLE_MODS_BUY_IT_NOW_PRICE_MULTIPLIER */) * __LIB_4__.func_543(1)));
							}
							else
							{
								return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26660 /* Tunable: AW_SALE_PRICE_MODS_MINE_1 */) * __LIB_4__.func_543(1)));
							}
							break;
						case 2:
							if (bParam4)
							{
								return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26661 /* Tunable: AW_SALE_PRICE_MODS_MINE_2 */) * Global_262145.f_26642 /* Tunable: AW_VEHICLE_MODS_BUY_IT_NOW_PRICE_MULTIPLIER */) * __LIB_4__.func_543(2)));
							}
							else
							{
								return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26661 /* Tunable: AW_SALE_PRICE_MODS_MINE_2 */) * __LIB_4__.func_543(2)));
							}
							break;
						case 3:
							if (bParam4)
							{
								return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26662 /* Tunable: AW_SALE_PRICE_MODS_MINE_3 */) * Global_262145.f_26642 /* Tunable: AW_VEHICLE_MODS_BUY_IT_NOW_PRICE_MULTIPLIER */) * __LIB_4__.func_543(3)));
							}
							else
							{
								return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26662 /* Tunable: AW_SALE_PRICE_MODS_MINE_3 */) * __LIB_4__.func_543(3)));
							}
							break;
						case 4:
							if (bParam4)
							{
								return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26663 /* Tunable: AW_SALE_PRICE_MODS_MINE_4 */) * Global_262145.f_26642 /* Tunable: AW_VEHICLE_MODS_BUY_IT_NOW_PRICE_MULTIPLIER */) * __LIB_4__.func_543(4)));
							}
							else
							{
								return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26663 /* Tunable: AW_SALE_PRICE_MODS_MINE_4 */) * __LIB_4__.func_543(4)));
							}
							break;
						case 5:
							if (bParam4)
							{
								return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26664 /* Tunable: AW_SALE_PRICE_MODS_MINE_5 */) * Global_262145.f_26642 /* Tunable: AW_VEHICLE_MODS_BUY_IT_NOW_PRICE_MULTIPLIER */) * __LIB_4__.func_543(5)));
							}
							else
							{
								return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26664 /* Tunable: AW_SALE_PRICE_MODS_MINE_5 */) * __LIB_4__.func_543(5)));
							}
							break;
					}
				}
				else
				{
					switch (iParam1)
					{
						case 0:
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(300) * __LIB_4__.func_542(iParam1)));
							break;
						case 1:
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(900) * __LIB_4__.func_542(iParam1)));
							break;
						case 2:
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1500) * __LIB_4__.func_542(iParam1)));
							break;
						case 3:
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1700) * __LIB_4__.func_542(iParam1)));
							break;
						case 4:
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2000) * __LIB_4__.func_542(iParam1)));
							break;
						case 5:
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2750) * __LIB_4__.func_542(iParam1)));
							break;
						case 6:
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3300) * __LIB_4__.func_542(iParam1)));
							break;
						case 7:
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3900) * __LIB_4__.func_542(iParam1)));
							break;
						case 8:
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(4350) * __LIB_4__.func_542(iParam1)));
							break;
						case 9:
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5000) * __LIB_4__.func_542(iParam1)));
							break;
						case 10:
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5150) * __LIB_4__.func_542(iParam1)));
							break;
						case 11:
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5300) * __LIB_4__.func_542(iParam1)));
							break;
						case 12:
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5450) * __LIB_4__.func_542(iParam1)));
							break;
						case 13:
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5600) * __LIB_4__.func_542(iParam1)));
							break;
						case 14:
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5750) * __LIB_4__.func_542(iParam1)));
							break;
						case 15:
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5900) * __LIB_4__.func_542(iParam1)));
							break;
						case 16:
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(6050) * __LIB_4__.func_542(iParam1)));
							break;
						case 17:
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(6600) * __LIB_4__.func_542(iParam1)));
							break;
						case 18:
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(7150) * __LIB_4__.func_542(iParam1)));
							break;
						case 19:
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(7700) * __LIB_4__.func_542(iParam1)));
							break;
						case 20:
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(8250) * __LIB_4__.func_542(iParam1)));
							break;
						}
				}
			}
			else if (Global_1585307 == 39)
			{
				iParam1 = (iParam1 - 21);
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26717 /* Tunable: AW_SALE_PRICE_MODS_RC_BANDITO_NO_MINE */) * __LIB_4__.func_543(0)));
						break;
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26718 /* Tunable: AW_SALE_PRICE_MODS_RC_BANDITO_KINETIC_MINES */) * __LIB_4__.func_543(1)));
						break;
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26719 /* Tunable: AW_SALE_PRICE_MODS_RC_BANDITO_EMP_MINES */) * __LIB_4__.func_543(2)));
						break;
				}
			}
			else if ((__LIB_4__.func_533(Global_1585308) && iVar1 != joaat("fcr2")) && iVar1 != joaat("diablous2"))
			{
				iParam1 = (iParam1 - 21);
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(300) * __LIB_4__.func_543(0)));
						break;
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(900) * __LIB_4__.func_543(1)));
						break;
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1500) * __LIB_4__.func_543(2)));
						break;
					case 3:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1700) * __LIB_4__.func_543(3)));
						break;
					case 4:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2000) * __LIB_4__.func_543(4)));
						break;
					case 5:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2750) * __LIB_4__.func_543(5)));
						break;
					case 6:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3300) * __LIB_4__.func_543(5)));
						break;
					case 7:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3900) * __LIB_4__.func_543(6)));
						break;
					case 8:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(4350) * __LIB_4__.func_543(7)));
						break;
					case 9:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5000) * __LIB_4__.func_543(8)));
						break;
					case 10:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5150) * __LIB_4__.func_543(9)));
						break;
					case 11:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5300) * __LIB_4__.func_543(10)));
						break;
					case 12:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5450) * __LIB_4__.func_543(11)));
						break;
					case 13:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5600) * __LIB_4__.func_543(12)));
						break;
					case 14:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5750) * __LIB_4__.func_543(13)));
						break;
					case 15:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5900) * __LIB_4__.func_543(14)));
						break;
					case 16:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(6050) * __LIB_4__.func_543(15)));
						break;
				}
			}
			else if (Global_1585307 == 35)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(300) * __LIB_4__.func_542(iParam1)));
						break;
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(900) * __LIB_4__.func_542(iParam1)));
						break;
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1500) * __LIB_4__.func_542(iParam1)));
						break;
					case 3:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1700) * __LIB_4__.func_542(iParam1)));
						break;
					case 4:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2000) * __LIB_4__.func_542(iParam1)));
						break;
					case 5:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2750) * __LIB_4__.func_542(iParam1)));
						break;
					case 6:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3300) * __LIB_4__.func_542(iParam1)));
						break;
					case 7:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3900) * __LIB_4__.func_542(iParam1)));
						break;
					case 8:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(4350) * __LIB_4__.func_542(iParam1)));
						break;
					case 9:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5000) * __LIB_4__.func_542(iParam1)));
						break;
					case 10:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5150) * __LIB_4__.func_542(iParam1)));
						break;
					case 11:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5300) * __LIB_4__.func_542(iParam1)));
						break;
					case 12:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5450) * __LIB_4__.func_542(iParam1)));
						break;
					case 13:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5600) * __LIB_4__.func_542(iParam1)));
						break;
					case 14:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5750) * __LIB_4__.func_542(iParam1)));
						break;
					case 15:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5900) * __LIB_4__.func_542(iParam1)));
						break;
					case 16:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(6050) * __LIB_4__.func_542(iParam1)));
						break;
					case 17:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(6600) * __LIB_4__.func_542(iParam1)));
						break;
					case 18:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(7150) * __LIB_4__.func_542(iParam1)));
						break;
					case 19:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(7700) * __LIB_4__.func_542(iParam1)));
						break;
					case 20:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(8250) * __LIB_4__.func_542(iParam1)));
						break;
				}
			}
			else if (Global_1585307 == 31)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(300) * __LIB_4__.func_542(iParam1)));
						break;
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(900) * __LIB_4__.func_542(iParam1)));
						break;
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1500) * __LIB_4__.func_542(iParam1)));
						break;
					case 3:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1700) * __LIB_4__.func_542(iParam1)));
						break;
					case 4:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2000) * __LIB_4__.func_542(iParam1)));
						break;
					case 5:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2750) * __LIB_4__.func_542(iParam1)));
						break;
					case 6:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3300) * __LIB_4__.func_542(iParam1)));
						break;
					case 7:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3900) * __LIB_4__.func_542(iParam1)));
						break;
					case 8:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(4350) * __LIB_4__.func_542(iParam1)));
						break;
					case 9:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5000) * __LIB_4__.func_542(iParam1)));
						break;
					case 10:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5150) * __LIB_4__.func_542(iParam1)));
						break;
					case 11:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5300) * __LIB_4__.func_542(iParam1)));
						break;
					case 12:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5450) * __LIB_4__.func_542(iParam1)));
						break;
					case 13:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5600) * __LIB_4__.func_542(iParam1)));
						break;
					case 14:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5750) * __LIB_4__.func_542(iParam1)));
						break;
					case 15:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5900) * __LIB_4__.func_542(iParam1)));
						break;
					case 16:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(6050) * __LIB_4__.func_542(iParam1)));
						break;
					case 17:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(6600) * __LIB_4__.func_542(iParam1)));
						break;
					case 18:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(7150) * __LIB_4__.func_542(iParam1)));
						break;
					case 19:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(7700) * __LIB_4__.func_542(iParam1)));
						break;
					case 20:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(8250) * __LIB_4__.func_542(iParam1)));
						break;
					case 21:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(4500) * __LIB_4__.func_543(0)));
						break;
					case 22:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(99000) * __LIB_4__.func_543(1)));
						break;
					case 23:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(120000) * __LIB_4__.func_543(2)));
						break;
					case 24:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(145000) * __LIB_4__.func_543(3)));
						break;
					case 25:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(169000) * __LIB_4__.func_543(4)));
						break;
					case 26:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(200000) * __LIB_4__.func_543(5)));
						break;
				}
			}
			else if (Global_1585307 == 36 || Global_1585307 == 37)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(300) * __LIB_4__.func_542(iParam1)));
						break;
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(900) * __LIB_4__.func_542(iParam1)));
						break;
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1500) * __LIB_4__.func_542(iParam1)));
						break;
					case 3:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1700) * __LIB_4__.func_542(iParam1)));
						break;
					case 4:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2000) * __LIB_4__.func_542(iParam1)));
						break;
					case 5:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2750) * __LIB_4__.func_542(iParam1)));
						break;
					case 6:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3300) * __LIB_4__.func_542(iParam1)));
						break;
					case 7:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3900) * __LIB_4__.func_542(iParam1)));
						break;
					case 8:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(4350) * __LIB_4__.func_542(iParam1)));
						break;
					case 9:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5000) * __LIB_4__.func_542(iParam1)));
						break;
					case 10:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5150) * __LIB_4__.func_542(iParam1)));
						break;
					case 11:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5300) * __LIB_4__.func_542(iParam1)));
						break;
					case 12:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5450) * __LIB_4__.func_542(iParam1)));
						break;
					case 13:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5600) * __LIB_4__.func_542(iParam1)));
						break;
					case 14:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5750) * __LIB_4__.func_542(iParam1)));
						break;
					case 15:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5900) * __LIB_4__.func_542(iParam1)));
						break;
					case 16:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(6050) * __LIB_4__.func_542(iParam1)));
						break;
					case 17:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(6600) * __LIB_4__.func_542(iParam1)));
						break;
					case 18:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(7150) * __LIB_4__.func_542(iParam1)));
						break;
					case 19:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(7700) * __LIB_4__.func_542(iParam1)));
						break;
					case 20:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(8250) * __LIB_4__.func_542(iParam1)));
						break;
					case 21:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(4500) * __LIB_4__.func_543(0)));
						break;
					case 22:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_24843 /* Tunable: -668380586 */) * __LIB_4__.func_543(1)));
						break;
					case 23:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(120000) * __LIB_4__.func_543(2)));
						break;
					case 24:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(145000) * __LIB_4__.func_543(3)));
						break;
					case 25:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(169000) * __LIB_4__.func_543(4)));
						break;
					case 26:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(200000) * __LIB_4__.func_543(5)));
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(300) * __LIB_4__.func_542(iParam1)));
						break;
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(900) * __LIB_4__.func_542(iParam1)));
						break;
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1500) * __LIB_4__.func_542(iParam1)));
						break;
					case 3:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1700) * __LIB_4__.func_542(iParam1)));
						break;
					case 4:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2000) * __LIB_4__.func_542(iParam1)));
						break;
					case 5:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2750) * __LIB_4__.func_542(iParam1)));
						break;
					case 6:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3300) * __LIB_4__.func_542(iParam1)));
						break;
					case 7:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3900) * __LIB_4__.func_542(iParam1)));
						break;
					case 8:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(4350) * __LIB_4__.func_542(iParam1)));
						break;
					case 9:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5000) * __LIB_4__.func_542(iParam1)));
						break;
					case 10:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5150) * __LIB_4__.func_542(iParam1)));
						break;
					case 11:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5300) * __LIB_4__.func_542(iParam1)));
						break;
					case 12:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5450) * __LIB_4__.func_542(iParam1)));
						break;
					case 13:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5600) * __LIB_4__.func_542(iParam1)));
						break;
					case 14:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5750) * __LIB_4__.func_542(iParam1)));
						break;
					case 15:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5900) * __LIB_4__.func_542(iParam1)));
						break;
					case 16:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(6050) * __LIB_4__.func_542(iParam1)));
						break;
					case 17:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(6600) * __LIB_4__.func_542(iParam1)));
						break;
					case 18:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(7150) * __LIB_4__.func_542(iParam1)));
						break;
					case 19:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(7700) * __LIB_4__.func_542(iParam1)));
						break;
					case 20:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(8250) * __LIB_4__.func_542(iParam1)));
						break;
					case 21:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(300) * __LIB_4__.func_543(0)));
						break;
					case 22:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(900) * __LIB_4__.func_543(1)));
						break;
					case 23:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1500) * __LIB_4__.func_543(2)));
						break;
					case 24:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1700) * __LIB_4__.func_543(3)));
						break;
					case 25:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2000) * __LIB_4__.func_543(4)));
						break;
					case 26:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2750) * __LIB_4__.func_543(5)));
						break;
					case 27:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3300) * __LIB_4__.func_543(5)));
						break;
					case 28:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3900) * __LIB_4__.func_543(6)));
						break;
					case 29:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(4350) * __LIB_4__.func_543(7)));
						break;
					case 30:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5000) * __LIB_4__.func_543(8)));
						break;
					case 31:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5150) * __LIB_4__.func_543(9)));
						break;
					case 32:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5300) * __LIB_4__.func_543(10)));
						break;
					case 33:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5450) * __LIB_4__.func_543(11)));
						break;
					case 34:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5600) * __LIB_4__.func_543(12)));
						break;
					case 35:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5750) * __LIB_4__.func_543(13)));
						break;
					case 36:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5900) * __LIB_4__.func_543(14)));
						break;
					case 37:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(6050) * __LIB_4__.func_543(15)));
						break;
					}
			}
			break;
		case 95:
			if (Global_1585307 == 36 || Global_1585307 == 37)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(4500) * __LIB_4__.func_543(0)));
						break;
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_24843 /* Tunable: -668380586 */) * __LIB_4__.func_543(1)));
						break;
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(120000) * __LIB_4__.func_543(2)));
						break;
					case 3:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(145000) * __LIB_4__.func_543(3)));
						break;
					case 4:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(169000) * __LIB_4__.func_543(4)));
						break;
					case 5:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(200000) * __LIB_4__.func_543(5)));
						break;
				}
			}
			else if (Global_1585307 == 39)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26715 /* Tunable: AW_SALE_PRICE_MODS_RC_BANDITO_NO_BOMB */) * __LIB_4__.func_542(iParam1)));
						break;
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26716 /* Tunable: AW_SALE_PRICE_MODS_RC_BANDITO_REMOTE_BOMB */) * __LIB_4__.func_542(iParam1)));
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(300) * __LIB_4__.func_542(iParam1)) * fVar0));
						break;
					case 1:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(900) * __LIB_4__.func_542(iParam1)) * fVar0));
						break;
					case 2:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(1500) * __LIB_4__.func_542(iParam1)) * fVar0));
						break;
					case 3:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(1700) * __LIB_4__.func_542(iParam1)) * fVar0));
						break;
					case 4:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(2000) * __LIB_4__.func_542(iParam1)) * fVar0));
						break;
					case 5:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(2750) * __LIB_4__.func_542(iParam1)) * fVar0));
						break;
					case 6:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(3300) * __LIB_4__.func_542(iParam1)) * fVar0));
						break;
					case 7:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(3900) * __LIB_4__.func_542(iParam1)) * fVar0));
						break;
					case 8:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(4350) * __LIB_4__.func_542(iParam1)) * fVar0));
						break;
					case 9:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(5000) * __LIB_4__.func_542(iParam1)) * fVar0));
						break;
					case 10:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(5150) * __LIB_4__.func_542(iParam1)) * fVar0));
						break;
					case 11:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(5300) * __LIB_4__.func_542(iParam1)) * fVar0));
						break;
					case 12:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(5450) * __LIB_4__.func_542(iParam1)) * fVar0));
						break;
					case 13:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(5600) * __LIB_4__.func_542(iParam1)) * fVar0));
						break;
					case 14:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(5750) * __LIB_4__.func_542(iParam1)) * fVar0));
						break;
					case 15:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(5900) * __LIB_4__.func_542(iParam1)) * fVar0));
						break;
					case 16:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(6050) * __LIB_4__.func_542(iParam1)) * fVar0));
						break;
					case 17:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(6600) * __LIB_4__.func_542(iParam1)) * fVar0));
						break;
					case 18:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(7150) * __LIB_4__.func_542(iParam1)) * fVar0));
						break;
					case 19:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(7700) * __LIB_4__.func_542(iParam1)) * fVar0));
						break;
					case 20:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(8250) * __LIB_4__.func_542(iParam1)) * fVar0));
						break;
					}
			}
			break;
		case 18:
			if (iVar1 == joaat("tampa3"))
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3500) * __LIB_4__.func_560(iParam1)));
						break;
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_21436 /* Tunable: GR_UPGRADE_TAMPA3_FRONT_MISSILE_LAUNCHERS */) * __LIB_4__.func_560(iParam1)));
						break;
				}
			}
			else if (Global_1585307 == 30)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5000) * __LIB_4__.func_563(iParam1)));
						break;
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(85000) * __LIB_4__.func_563(iParam1)));
						break;
				}
			}
			else if (Global_1585307 == 33)
			{
				switch (iParam1)
				{
					case 1:
						return Global_262145.f_22612 /* Tunable: -488069750 */;
						break;
					case 2:
						return Global_262145.f_22613 /* Tunable: -476186113 */;
						break;
					case 29:
						return Global_262145.f_22618 /* Tunable: 193964753 */;
						break;
					case 30:
						return Global_262145.f_22618 /* Tunable: 193964753 */;
						break;
					case 31:
						return Global_262145.f_22618 /* Tunable: 193964753 */;
						break;
					case 32:
						return Global_262145.f_22618 /* Tunable: 193964753 */;
						break;
					case 33:
						return Global_262145.f_22618 /* Tunable: 193964753 */;
						break;
					case 34:
						return Global_262145.f_22618 /* Tunable: 193964753 */;
						break;
					case 35:
						return Global_262145.f_22618 /* Tunable: 193964753 */;
						break;
					case 36:
						return Global_262145.f_22618 /* Tunable: 193964753 */;
						break;
					case 37:
						return Global_262145.f_22618 /* Tunable: 193964753 */;
						break;
					case 38:
						return Global_262145.f_22618 /* Tunable: 193964753 */;
						break;
					case 39:
						return Global_262145.f_22618 /* Tunable: 193964753 */;
						break;
					case 40:
						return Global_262145.f_22618 /* Tunable: 193964753 */;
						break;
				}
			}
			else if (Global_1585307 == 34)
			{
				switch (iParam1)
				{
					case 1:
						return Global_262145.f_22624 /* Tunable: -35648369 */;
						break;
					case 2:
						return Global_262145.f_22625 /* Tunable: 1890870117 */;
						break;
					case 29:
						return Global_262145.f_22630 /* Tunable: -2127562694 */;
						break;
					case 30:
						return Global_262145.f_22630 /* Tunable: -2127562694 */;
						break;
					case 31:
						return Global_262145.f_22630 /* Tunable: -2127562694 */;
						break;
					case 32:
						return Global_262145.f_22630 /* Tunable: -2127562694 */;
						break;
					case 33:
						return Global_262145.f_22630 /* Tunable: -2127562694 */;
						break;
					case 34:
						return Global_262145.f_22630 /* Tunable: -2127562694 */;
						break;
					case 35:
						return Global_262145.f_22630 /* Tunable: -2127562694 */;
						break;
					case 36:
						return Global_262145.f_22630 /* Tunable: -2127562694 */;
						break;
					case 37:
						return Global_262145.f_22630 /* Tunable: -2127562694 */;
						break;
					case 38:
						return Global_262145.f_22630 /* Tunable: -2127562694 */;
						break;
					case 39:
						return Global_262145.f_22630 /* Tunable: -2127562694 */;
						break;
					case 40:
						return Global_262145.f_22630 /* Tunable: -2127562694 */;
						break;
				}
			}
			else if ((Global_1585307 == 3 || Global_1585307 == 38) || Global_1585307 == 3)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2200) * __LIB_4__.func_563(iParam1)));
						break;
					case 1:
						if (VEHICLE::IS_VEHICLE_MODEL(Global_1585308, joaat("cheburek")))
						{
							return Global_262145.f_24156 /* Tunable: ASSAULT_VEHICLES_MODS_CHEBUREK_CARDBOARD_FRONT_BUMPER_1 */;
						}
						else
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(4600) * __LIB_4__.func_563(iParam1)) * fVar0));
						}
						break;
					case 2:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(7400) * __LIB_4__.func_563(iParam1)) * fVar0));
						break;
					case 3:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(11700) * __LIB_4__.func_563(iParam1)) * fVar0));
						break;
					case 4:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(14500) * __LIB_4__.func_563(iParam1)) * fVar0));
						break;
					case 5:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(14700) * __LIB_4__.func_563(iParam1)) * fVar0));
						break;
					case 6:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(14900) * __LIB_4__.func_563(iParam1)) * fVar0));
						break;
					case 7:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(15100) * __LIB_4__.func_563(iParam1)) * fVar0));
						break;
					case 8:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(15300) * __LIB_4__.func_563(iParam1)) * fVar0));
						break;
					case 9:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(15500) * __LIB_4__.func_563(iParam1)) * fVar0));
						break;
					case 10:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(15700) * __LIB_4__.func_563(iParam1)) * fVar0));
						break;
					case 11:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(15900) * __LIB_4__.func_563(iParam1)) * fVar0));
						break;
					case 12:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(16100) * __LIB_4__.func_563(iParam1)) * fVar0));
						break;
					case 13:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(16300) * __LIB_4__.func_563(iParam1)) * fVar0));
						break;
					case 14:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(16500) * __LIB_4__.func_563(iParam1)) * fVar0));
						break;
					case 15:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(16700) * __LIB_4__.func_563(iParam1)) * fVar0));
						break;
					case 16:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(16900) * __LIB_4__.func_563(iParam1)) * fVar0));
						break;
					case 17:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(17100) * __LIB_4__.func_563(iParam1)) * fVar0));
						break;
					case 18:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(17300) * __LIB_4__.func_563(iParam1)) * fVar0));
						break;
					case 19:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(17500) * __LIB_4__.func_563(iParam1)) * fVar0));
						break;
					case 20:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(17700) * __LIB_4__.func_563(iParam1)) * fVar0));
						break;
					case 21:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(17900) * __LIB_4__.func_563(iParam1)) * fVar0));
						break;
					case 22:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(18100) * __LIB_4__.func_563(iParam1)) * fVar0));
						break;
					case 23:
						return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(18300) * __LIB_4__.func_563(iParam1)) * fVar0));
						break;
					}
			}
			break;
		case 36:
			if (iVar1 == joaat("tampa3"))
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3500) * __LIB_4__.func_560(iParam1)));
						break;
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_21437 /* Tunable: GR_UPGRADE_TAMPA3_REAR_FIRING_MORTAR */) * __LIB_4__.func_560(iParam1)));
						break;
				}
			}
			else if (Global_1585307 == 30)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3500) * __LIB_4__.func_560(iParam1)));
						break;
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(92500) * __LIB_4__.func_560(iParam1)));
						break;
				}
			}
			else if (Global_1585307 == 3 || Global_1585307 == 38)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2200) * __LIB_4__.func_560(0)));
						break;
					case 1:
						if (VEHICLE::IS_VEHICLE_MODEL(Global_1585308, joaat("cheburek")))
						{
							return Global_262145.f_24157 /* Tunable: ASSAULT_VEHICLES_MODS_CHEBUREK_CARDBOARD_REAR_BUMPER_1 */;
						}
						else if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(4600) * Global_262145.f_26642 /* Tunable: AW_VEHICLE_MODS_BUY_IT_NOW_PRICE_MULTIPLIER */) * __LIB_4__.func_560(1)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(4600) * __LIB_4__.func_560(1)));
						}
						break;
					case 2:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(7400) * Global_262145.f_26642 /* Tunable: AW_VEHICLE_MODS_BUY_IT_NOW_PRICE_MULTIPLIER */) * __LIB_4__.func_560(2)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(7400) * __LIB_4__.func_560(2)));
						}
						break;
					case 3:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(11700) * Global_262145.f_26642 /* Tunable: AW_VEHICLE_MODS_BUY_IT_NOW_PRICE_MULTIPLIER */) * __LIB_4__.func_560(3)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(11700) * __LIB_4__.func_560(3)));
						}
						break;
					case 4:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(14500) * Global_262145.f_26642 /* Tunable: AW_VEHICLE_MODS_BUY_IT_NOW_PRICE_MULTIPLIER */) * __LIB_4__.func_560(4)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(14500) * __LIB_4__.func_560(4)));
						}
						break;
					case 5:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(14700) * Global_262145.f_26642 /* Tunable: AW_VEHICLE_MODS_BUY_IT_NOW_PRICE_MULTIPLIER */) * __LIB_4__.func_560(5)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(14700) * __LIB_4__.func_560(5)));
						}
						break;
					case 6:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(14900) * Global_262145.f_26642 /* Tunable: AW_VEHICLE_MODS_BUY_IT_NOW_PRICE_MULTIPLIER */) * __LIB_4__.func_560(6)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(14900) * __LIB_4__.func_560(6)));
						}
						break;
					case 7:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(15100) * __LIB_4__.func_560(7)));
						break;
					case 8:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(15300) * __LIB_4__.func_560(8)));
						break;
					case 9:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(15500) * __LIB_4__.func_560(9)));
						break;
					case 10:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(15700) * __LIB_4__.func_560(10)));
						break;
					case 11:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(15900) * __LIB_4__.func_560(11)));
						break;
					case 12:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(16100) * __LIB_4__.func_560(12)));
						break;
					case 13:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(16300) * __LIB_4__.func_560(13)));
						break;
					case 14:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(16500) * __LIB_4__.func_560(14)));
						break;
					case 15:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(16700) * __LIB_4__.func_560(15)));
						break;
					case 16:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(16900) * __LIB_4__.func_560(16)));
						break;
					case 17:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(17100) * __LIB_4__.func_560(17)));
						break;
					case 18:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(17300) * __LIB_4__.func_560(18)));
						break;
					case 19:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(17500) * __LIB_4__.func_560(19)));
						break;
					}
			}
			break;
	}
	switch (iParam0)
	{
		case 62:
		case 63:
		case 66:
		case 90:
		case 67:
		case 68:
		case 69:
		case 70:
		case 72:
		case 74:
		case 76:
		case 83:
		case 84:
			return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(__LIB_4__.func_541(iParam0, 0)) * fVar0) * __LIB_4__.func_525(iParam1, 1)));
			break;
		case 71:
			return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(__LIB_4__.func_541(iParam0, 0)) * fVar0) * __LIB_4__.func_525(iParam1, 1)));
		case 73:
			return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(__LIB_4__.func_541(iParam0, 0)) * fVar0) * __LIB_4__.func_525(iParam1, 1)));
			break;
		case 91:
			if (__LIB_1__.func_932(iVar1) || __LIB_4__.func_540(iVar1))
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(300) * __LIB_4__.func_543(0)));
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(900) * __LIB_4__.func_543(1)));
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1500) * __LIB_4__.func_543(2)));
					case 3:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1700) * __LIB_4__.func_543(3)));
					case 4:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2000) * __LIB_4__.func_543(4)));
					case 5:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2750) * __LIB_4__.func_543(5)));
					case 6:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3300) * __LIB_4__.func_543(5)));
					case 7:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3900) * __LIB_4__.func_543(6)));
					case 8:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(4350) * __LIB_4__.func_543(7)));
					case 9:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5000) * __LIB_4__.func_543(8)));
					case 10:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5150) * __LIB_4__.func_543(9)));
					case 11:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5300) * __LIB_4__.func_543(10)));
					case 12:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5450) * __LIB_4__.func_543(11)));
					case 13:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5600) * __LIB_4__.func_543(12)));
					case 14:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5750) * __LIB_4__.func_543(13)));
					case 15:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5900) * __LIB_4__.func_543(14)));
					case 16:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(6050) * __LIB_4__.func_543(15)));
					}
				default:
			}
			return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(__LIB_4__.func_541(iParam0, 0)) * fVar0) * __LIB_4__.func_525(iParam1, 1)));
			break;
		case 64:
			if (iVar1 == joaat("kanjo") || __LIB_1__.func_932(iVar1))
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(300) * __LIB_4__.func_543(0)));
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(900) * __LIB_4__.func_543(1)));
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1500) * __LIB_4__.func_543(2)));
					default:
				}
			}
			else
			{
				return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(__LIB_4__.func_541(iParam0, 0)) * fVar0) * __LIB_4__.func_525(iParam1, 1)));
			}
			break;
		case 79:
			if (Global_1585307 == 38 && iVar1 != joaat("greenwood"))
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26665 /* Tunable: AW_SALE_PRICE_MODS_NO_RAM */) * __LIB_4__.func_525(iParam1, 0)));
						break;
					case 1:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26666 /* Tunable: AW_SALE_PRICE_MODS_RAM_1 */) * Global_262145.f_26642 /* Tunable: AW_VEHICLE_MODS_BUY_IT_NOW_PRICE_MULTIPLIER */) * __LIB_4__.func_525(iParam1, 0)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26666 /* Tunable: AW_SALE_PRICE_MODS_RAM_1 */) * __LIB_4__.func_525(iParam1, 0)));
						}
						break;
					case 2:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26667 /* Tunable: AW_SALE_PRICE_MODS_RAM_2 */) * Global_262145.f_26642 /* Tunable: AW_VEHICLE_MODS_BUY_IT_NOW_PRICE_MULTIPLIER */) * __LIB_4__.func_525(iParam1, 0)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26667 /* Tunable: AW_SALE_PRICE_MODS_RAM_2 */) * __LIB_4__.func_525(iParam1, 0)));
						}
						break;
					case 3:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26668 /* Tunable: AW_SALE_PRICE_MODS_RAM_3 */) * Global_262145.f_26642 /* Tunable: AW_VEHICLE_MODS_BUY_IT_NOW_PRICE_MULTIPLIER */) * __LIB_4__.func_525(iParam1, 0)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26668 /* Tunable: AW_SALE_PRICE_MODS_RAM_3 */) * __LIB_4__.func_525(iParam1, 0)));
						}
						break;
					case 4:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26669 /* Tunable: AW_SALE_PRICE_MODS_RAM_4 */) * Global_262145.f_26642 /* Tunable: AW_VEHICLE_MODS_BUY_IT_NOW_PRICE_MULTIPLIER */) * __LIB_4__.func_525(iParam1, 0)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26669 /* Tunable: AW_SALE_PRICE_MODS_RAM_4 */) * __LIB_4__.func_525(iParam1, 0)));
						}
						break;
					case 5:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26670 /* Tunable: AW_SALE_PRICE_MODS_RAM_5 */) * Global_262145.f_26642 /* Tunable: AW_VEHICLE_MODS_BUY_IT_NOW_PRICE_MULTIPLIER */) * __LIB_4__.func_525(iParam1, 0)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26670 /* Tunable: AW_SALE_PRICE_MODS_RAM_5 */) * __LIB_4__.func_525(iParam1, 0)));
						}
						break;
					case 6:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26671 /* Tunable: AW_SALE_PRICE_MODS_RAM_6 */) * Global_262145.f_26642 /* Tunable: AW_VEHICLE_MODS_BUY_IT_NOW_PRICE_MULTIPLIER */) * __LIB_4__.func_525(iParam1, 0)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26671 /* Tunable: AW_SALE_PRICE_MODS_RAM_6 */) * __LIB_4__.func_525(iParam1, 0)));
						}
						break;
					case 7:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26672 /* Tunable: AW_SALE_PRICE_MODS_RAM_7 */) * Global_262145.f_26642 /* Tunable: AW_VEHICLE_MODS_BUY_IT_NOW_PRICE_MULTIPLIER */) * __LIB_4__.func_525(iParam1, 0)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26672 /* Tunable: AW_SALE_PRICE_MODS_RAM_7 */) * __LIB_4__.func_525(iParam1, 0)));
						}
						break;
				}
			}
			else
			{
				return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(__LIB_4__.func_541(iParam0, 0)) * __LIB_4__.func_525(iParam1, 1)));
			}
			break;
		case 81:
			if (Global_1585307 == 38)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26673 /* Tunable: AW_SALE_PRICE_MODS_NO_BLADES */) * __LIB_4__.func_525(iParam1, 0)));
						break;
					case 1:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26674 /* Tunable: AW_SALE_PRICE_MODS_BLADES_1 */) * Global_262145.f_26642 /* Tunable: AW_VEHICLE_MODS_BUY_IT_NOW_PRICE_MULTIPLIER */) * __LIB_4__.func_525(iParam1, 0)));
						}
						else
						{
							if (__LIB_0__.func_596(iVar1))
							{
								return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_31997 /* Tunable: FIXER_MODS_REMOTE_CONTROL_UNIT */) * __LIB_4__.func_525(iParam1, 0)));
							}
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26674 /* Tunable: AW_SALE_PRICE_MODS_BLADES_1 */) * __LIB_4__.func_525(iParam1, 0)));
						}
						break;
					case 2:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26675 /* Tunable: AW_SALE_PRICE_MODS_BLADES_2 */) * Global_262145.f_26642 /* Tunable: AW_VEHICLE_MODS_BUY_IT_NOW_PRICE_MULTIPLIER */) * __LIB_4__.func_525(iParam1, 0)));
						}
						else
						{
							if (__LIB_0__.func_596(iVar1))
							{
								return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_31996 /* Tunable: FIXER_MODS_MISSILE_LOCKON_JAMMER */) * __LIB_4__.func_525(iParam1, 0)));
							}
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26675 /* Tunable: AW_SALE_PRICE_MODS_BLADES_2 */) * __LIB_4__.func_525(iParam1, 0)));
						}
						break;
					case 3:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26676 /* Tunable: AW_SALE_PRICE_MODS_BLADES_3 */) * Global_262145.f_26642 /* Tunable: AW_VEHICLE_MODS_BUY_IT_NOW_PRICE_MULTIPLIER */) * __LIB_4__.func_525(iParam1, 0)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26676 /* Tunable: AW_SALE_PRICE_MODS_BLADES_3 */) * __LIB_4__.func_525(iParam1, 0)));
						}
						break;
				}
			}
			else
			{
				return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(__LIB_4__.func_541(iParam0, 0)) * __LIB_4__.func_525(iParam1, 1)));
			}
			break;
		case 82:
			if (Global_1585307 == 38)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26677 /* Tunable: AW_SALE_PRICE_MODS_NO_GUNS */) * __LIB_4__.func_525(iParam1, 0)));
						break;
					case 1:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26678 /* Tunable: AW_SALE_PRICE_MODS_GUNS_1 */) * Global_262145.f_26642 /* Tunable: AW_VEHICLE_MODS_BUY_IT_NOW_PRICE_MULTIPLIER */) * __LIB_4__.func_525(iParam1, 0)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26678 /* Tunable: AW_SALE_PRICE_MODS_GUNS_1 */) * __LIB_4__.func_525(iParam1, 0)));
						}
						break;
					case 2:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26679 /* Tunable: AW_SALE_PRICE_MODS_GUNS_2 */) * Global_262145.f_26642 /* Tunable: AW_VEHICLE_MODS_BUY_IT_NOW_PRICE_MULTIPLIER */) * __LIB_4__.func_525(iParam1, 0)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26679 /* Tunable: AW_SALE_PRICE_MODS_GUNS_2 */) * __LIB_4__.func_525(iParam1, 0)));
						}
						break;
				}
			}
			else
			{
				return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(__LIB_4__.func_541(iParam0, 0)) * __LIB_4__.func_525(iParam1, 1)));
			}
			break;
		case 80:
			if (Global_1585307 == 38)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26695 /* Tunable: AW_SALE_PRICE_MODS_NO_SPIKES */) * __LIB_4__.func_525(iParam1, 0)));
						break;
					case 1:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26696 /* Tunable: AW_SALE_PRICE_MODS_SPIKES_1 */) * Global_262145.f_26642 /* Tunable: AW_VEHICLE_MODS_BUY_IT_NOW_PRICE_MULTIPLIER */) * __LIB_4__.func_525(iParam1, 0)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26696 /* Tunable: AW_SALE_PRICE_MODS_SPIKES_1 */) * __LIB_4__.func_525(iParam1, 0)));
						}
						break;
					case 2:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26697 /* Tunable: AW_SALE_PRICE_MODS_SPIKES_2 */) * Global_262145.f_26642 /* Tunable: AW_VEHICLE_MODS_BUY_IT_NOW_PRICE_MULTIPLIER */) * __LIB_4__.func_525(iParam1, 0)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26697 /* Tunable: AW_SALE_PRICE_MODS_SPIKES_2 */) * __LIB_4__.func_525(iParam1, 0)));
						}
						break;
					case 3:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26698 /* Tunable: AW_SALE_PRICE_MODS_SPIKES_3 */) * Global_262145.f_26642 /* Tunable: AW_VEHICLE_MODS_BUY_IT_NOW_PRICE_MULTIPLIER */) * __LIB_4__.func_525(iParam1, 0)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26698 /* Tunable: AW_SALE_PRICE_MODS_SPIKES_3 */) * __LIB_4__.func_525(iParam1, 0)));
						}
						break;
				}
			}
			else
			{
				return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(__LIB_4__.func_541(iParam0, 0)) * __LIB_4__.func_525(iParam1, 1)));
			}
			break;
		case 77:
			if (Global_1585307 == 38 && iVar1 != joaat("greenwood"))
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26710 /* Tunable: AW_SALE_PRICE_MODS_NO_BOOST */) * __LIB_4__.func_525(iParam1, 0)));
						break;
					case 1:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26711 /* Tunable: AW_SALE_PRICE_MODS_BOOST_UPGRADE_20_PERCENT */) * Global_262145.f_26642 /* Tunable: AW_VEHICLE_MODS_BUY_IT_NOW_PRICE_MULTIPLIER */) * __LIB_4__.func_525(iParam1, 0)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26711 /* Tunable: AW_SALE_PRICE_MODS_BOOST_UPGRADE_20_PERCENT */) * __LIB_4__.func_525(iParam1, 0)));
						}
						break;
					case 2:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26712 /* Tunable: AW_SALE_PRICE_MODS_BOOST_UPGRADE_60_PERCENT */) * Global_262145.f_26642 /* Tunable: AW_VEHICLE_MODS_BUY_IT_NOW_PRICE_MULTIPLIER */) * __LIB_4__.func_525(iParam1, 0)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26712 /* Tunable: AW_SALE_PRICE_MODS_BOOST_UPGRADE_60_PERCENT */) * __LIB_4__.func_525(iParam1, 0)));
						}
						break;
					case 3:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26713 /* Tunable: AW_SALE_PRICE_MODS_BOOST_UPGRADE_100_PERCENT */) * Global_262145.f_26642 /* Tunable: AW_VEHICLE_MODS_BUY_IT_NOW_PRICE_MULTIPLIER */) * __LIB_4__.func_525(iParam1, 0)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26713 /* Tunable: AW_SALE_PRICE_MODS_BOOST_UPGRADE_100_PERCENT */) * __LIB_4__.func_525(iParam1, 0)));
						}
						break;
					case 4:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26714 /* Tunable: AW_SALE_PRICE_MODS_SHUNT_BOOST */) * Global_262145.f_26642 /* Tunable: AW_VEHICLE_MODS_BUY_IT_NOW_PRICE_MULTIPLIER */) * __LIB_4__.func_525(iParam1, 0)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26714 /* Tunable: AW_SALE_PRICE_MODS_SHUNT_BOOST */) * __LIB_4__.func_525(iParam1, 0)));
						}
						break;
				}
			}
			else
			{
				return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(__LIB_4__.func_541(iParam0, 0)) * __LIB_4__.func_525(iParam1, 1)));
			}
			break;
		case 78:
			if (Global_1585307 == 38)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26706 /* Tunable: AW_SALE_PRICE_MODS_NO_JUMP */) * __LIB_4__.func_525(iParam1, 0)));
						break;
					case 1:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26707 /* Tunable: AW_SALE_PRICE_MODS_JUMP_UPGRADE_20_PERCENT */) * Global_262145.f_26642 /* Tunable: AW_VEHICLE_MODS_BUY_IT_NOW_PRICE_MULTIPLIER */) * __LIB_4__.func_525(iParam1, 0)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26707 /* Tunable: AW_SALE_PRICE_MODS_JUMP_UPGRADE_20_PERCENT */) * __LIB_4__.func_525(iParam1, 0)));
						}
						break;
					case 2:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26708 /* Tunable: AW_SALE_PRICE_MODS_JUMP_UPGRADE_60_PERCENT */) * Global_262145.f_26642 /* Tunable: AW_VEHICLE_MODS_BUY_IT_NOW_PRICE_MULTIPLIER */) * __LIB_4__.func_525(iParam1, 0)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26708 /* Tunable: AW_SALE_PRICE_MODS_JUMP_UPGRADE_60_PERCENT */) * __LIB_4__.func_525(iParam1, 0)));
						}
						break;
					case 3:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26709 /* Tunable: AW_SALE_PRICE_MODS_JUMP_UPGRADE_100_PERCENT */) * Global_262145.f_26642 /* Tunable: AW_VEHICLE_MODS_BUY_IT_NOW_PRICE_MULTIPLIER */) * __LIB_4__.func_525(iParam1, 0)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26709 /* Tunable: AW_SALE_PRICE_MODS_JUMP_UPGRADE_100_PERCENT */) * __LIB_4__.func_525(iParam1, 0)));
						}
						break;
				}
			}
			else if (Global_1585307 == 39)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26720 /* Tunable: AW_SALE_PRICE_MODS_RC_BANDITO_NO_JUMP */) * __LIB_4__.func_525(iParam1, 0)));
						break;
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26721 /* Tunable: AW_SALE_PRICE_MODS_RC_BANDITO_JUMP_UPGRADE_20_PERCENT */) * __LIB_4__.func_525(iParam1, 0)));
						break;
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26722 /* Tunable: AW_SALE_PRICE_MODS_RC_BANDITO_JUMP_UPGRADE_60_PERCENT */) * __LIB_4__.func_525(iParam1, 0)));
						break;
					case 3:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26723 /* Tunable: AW_SALE_PRICE_MODS_RC_BANDITO_JUMP_UPGRADE_100_PERCENT */) * __LIB_4__.func_525(iParam1, 0)));
						break;
				}
			}
			else
			{
				return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(__LIB_4__.func_541(iParam0, 0)) * __LIB_4__.func_525(iParam1, 1)));
			}
			break;
		case 65:
			if (Global_1585307 == 38)
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26684 /* Tunable: AW_SALE_PRICE_MODS_NO_ROLL_CAGE */) * __LIB_4__.func_525(iParam1, 0)));
						break;
					case 1:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26685 /* Tunable: AW_SALE_PRICE_MODS_ROLL_CAGE_1 */) * Global_262145.f_26642 /* Tunable: AW_VEHICLE_MODS_BUY_IT_NOW_PRICE_MULTIPLIER */) * __LIB_4__.func_525(iParam1, 0)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26685 /* Tunable: AW_SALE_PRICE_MODS_ROLL_CAGE_1 */) * __LIB_4__.func_525(iParam1, 0)));
						}
						break;
					case 2:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26686 /* Tunable: AW_SALE_PRICE_MODS_ROLL_CAGE_2 */) * Global_262145.f_26642 /* Tunable: AW_VEHICLE_MODS_BUY_IT_NOW_PRICE_MULTIPLIER */) * __LIB_4__.func_525(iParam1, 0)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26686 /* Tunable: AW_SALE_PRICE_MODS_ROLL_CAGE_2 */) * __LIB_4__.func_525(iParam1, 0)));
						}
						break;
					case 3:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26687 /* Tunable: AW_SALE_PRICE_MODS_ROLL_CAGE_3 */) * Global_262145.f_26642 /* Tunable: AW_VEHICLE_MODS_BUY_IT_NOW_PRICE_MULTIPLIER */) * __LIB_4__.func_525(iParam1, 0)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26687 /* Tunable: AW_SALE_PRICE_MODS_ROLL_CAGE_3 */) * __LIB_4__.func_525(iParam1, 0)));
						}
						break;
					case 4:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26688 /* Tunable: AW_SALE_PRICE_MODS_ROLL_CAGE_4 */) * Global_262145.f_26642 /* Tunable: AW_VEHICLE_MODS_BUY_IT_NOW_PRICE_MULTIPLIER */) * __LIB_4__.func_525(iParam1, 0)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26688 /* Tunable: AW_SALE_PRICE_MODS_ROLL_CAGE_4 */) * __LIB_4__.func_525(iParam1, 0)));
						}
						break;
					case 5:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26689 /* Tunable: AW_SALE_PRICE_MODS_ROLL_CAGE_5 */) * Global_262145.f_26642 /* Tunable: AW_VEHICLE_MODS_BUY_IT_NOW_PRICE_MULTIPLIER */) * __LIB_4__.func_525(iParam1, 0)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26689 /* Tunable: AW_SALE_PRICE_MODS_ROLL_CAGE_5 */) * __LIB_4__.func_525(iParam1, 0)));
						}
						break;
					case 6:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26690 /* Tunable: AW_SALE_PRICE_MODS_ROLL_CAGE_6 */) * Global_262145.f_26642 /* Tunable: AW_VEHICLE_MODS_BUY_IT_NOW_PRICE_MULTIPLIER */) * __LIB_4__.func_525(iParam1, 0)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26690 /* Tunable: AW_SALE_PRICE_MODS_ROLL_CAGE_6 */) * __LIB_4__.func_525(iParam1, 0)));
						}
						break;
					case 7:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26691 /* Tunable: AW_SALE_PRICE_MODS_ROLL_CAGE_7 */) * Global_262145.f_26642 /* Tunable: AW_VEHICLE_MODS_BUY_IT_NOW_PRICE_MULTIPLIER */) * __LIB_4__.func_525(iParam1, 0)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26691 /* Tunable: AW_SALE_PRICE_MODS_ROLL_CAGE_7 */) * __LIB_4__.func_525(iParam1, 0)));
						}
						break;
					case 8:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26692 /* Tunable: AW_SALE_PRICE_MODS_ROLL_CAGE_8 */) * Global_262145.f_26642 /* Tunable: AW_VEHICLE_MODS_BUY_IT_NOW_PRICE_MULTIPLIER */) * __LIB_4__.func_525(iParam1, 0)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26692 /* Tunable: AW_SALE_PRICE_MODS_ROLL_CAGE_8 */) * __LIB_4__.func_525(iParam1, 0)));
						}
						break;
					case 9:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26693 /* Tunable: AW_SALE_PRICE_MODS_ROLL_CAGE_9 */) * Global_262145.f_26642 /* Tunable: AW_VEHICLE_MODS_BUY_IT_NOW_PRICE_MULTIPLIER */) * __LIB_4__.func_525(iParam1, 0)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26693 /* Tunable: AW_SALE_PRICE_MODS_ROLL_CAGE_9 */) * __LIB_4__.func_525(iParam1, 0)));
						}
						break;
					case 10:
						if (bParam4)
						{
							return SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(Global_262145.f_26694 /* Tunable: AW_SALE_PRICE_MODS_ROLL_CAGE_10 */) * Global_262145.f_26642 /* Tunable: AW_VEHICLE_MODS_BUY_IT_NOW_PRICE_MULTIPLIER */) * __LIB_4__.func_525(iParam1, 0)));
						}
						else
						{
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_26694 /* Tunable: AW_SALE_PRICE_MODS_ROLL_CAGE_10 */) * __LIB_4__.func_525(iParam1, 0)));
						}
						break;
				}
			}
			else if (iVar1 == joaat("gauntlet5") || __LIB_1__.func_932(iVar1))
			{
				switch (iParam1)
				{
					case 0:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(300) * __LIB_4__.func_542(iParam1)));
						break;
					case 1:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(900) * __LIB_4__.func_542(iParam1)));
						break;
					case 2:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1500) * __LIB_4__.func_542(iParam1)));
						break;
					case 3:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(1700) * __LIB_4__.func_542(iParam1)));
						break;
					case 4:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2000) * __LIB_4__.func_542(iParam1)));
						break;
					case 5:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(2750) * __LIB_4__.func_542(iParam1)));
						break;
					case 6:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3300) * __LIB_4__.func_542(iParam1)));
						break;
					case 7:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(3900) * __LIB_4__.func_542(iParam1)));
						break;
					case 8:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(4350) * __LIB_4__.func_542(iParam1)));
						break;
					case 9:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5000) * __LIB_4__.func_542(iParam1)));
						break;
					case 10:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5150) * __LIB_4__.func_542(iParam1)));
						break;
					case 11:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5300) * __LIB_4__.func_542(iParam1)));
						break;
					case 12:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5450) * __LIB_4__.func_542(iParam1)));
						break;
					case 13:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5600) * __LIB_4__.func_542(iParam1)));
						break;
					case 14:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5750) * __LIB_4__.func_542(iParam1)));
						break;
					case 15:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(5900) * __LIB_4__.func_542(iParam1)));
						break;
					case 16:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(6050) * __LIB_4__.func_542(iParam1)));
						break;
					case 17:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(6600) * __LIB_4__.func_542(iParam1)));
						break;
					case 18:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(7150) * __LIB_4__.func_542(iParam1)));
						break;
					case 19:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(7700) * __LIB_4__.func_542(iParam1)));
						break;
					case 20:
						return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(8250) * __LIB_4__.func_542(iParam1)));
						break;
				}
			}
			else
			{
				if (iParam1 == 0)
				{
					return 0;
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
				{
					switch (MISC::GET_HASH_KEY(sParam3))
					{
						case joaat("BOBBLE_BRD1"):
							return Global_262145.f_12560 /* Tunable: HALLOWEEN_2015_BRUNETTE_CORPSE_BRIDE_BOBBLEHEAD */;
							break;
						case joaat("BOBBLE_BRD2"):
							return Global_262145.f_12561 /* Tunable: HALLOWEEN_2015_WHITE_CORPSE_BRIDE_BOBBLEHEAD */;
							break;
						case joaat("BOBBLE_BRD3"):
							return Global_262145.f_12562 /* Tunable: HALLOWEEN_2015_PINK_CORPSE_BRIDE_BOBBLEHEAD */;
							break;
						case joaat("BOBBLE_SLH1"):
							return Global_262145.f_12563 /* Tunable: HALLOWEEN_2015_WHITE_MASK_SLASHER_BOBBLEHEAD */;
							break;
						case joaat("BOBBLE_SLH2"):
							return Global_262145.f_12564 /* Tunable: HALLOWEEN_2015_RED_MASK_SLASHER_BOBBLEHEAD */;
							break;
						case joaat("BOBBLE_SLH3"):
							return Global_262145.f_12565 /* Tunable: HALLOWEEN_2015_YELLOW_MASK_SLASHER_BOBBLEHEAD */;
							break;
						case joaat("BOBBLE_ZOM1"):
							return Global_262145.f_12566 /* Tunable: HALLOWEEN_2015_BLUE_ZOMBIE_BOBBLEHEAD */;
							break;
						case joaat("BOBBLE_ZOM2"):
							return Global_262145.f_12567 /* Tunable: HALLOWEEN_2015_GREEN_ZOMBIE_BOBBLEHEAD */;
							break;
						case joaat("BOBBLE_ZOM3"):
							return Global_262145.f_12568 /* Tunable: HALLOWEEN_2015_PALE_ZOMBIE_BOBBLEHEAD */;
							break;
						case joaat("BOBBLE_GC1"):
							return Global_262145.f_12569 /* Tunable: HALLOWEEN_2015_POSSESSED_URCHIN_BOBBLEHEAD */;
							break;
						case joaat("BOBBLE_GC2"):
							return Global_262145.f_12570 /* Tunable: HALLOWEEN_2015_DEMONIC_URCHIN_BOBBLEHEAD */;
							break;
						case joaat("BOBBLE_GC3"):
							return Global_262145.f_12571 /* Tunable: HALLOWEEN_2015_GRUESOME_URCHIN_BOBBLEHEAD */;
							break;
						case joaat("BOBBLE_FRNK1"):
							return Global_262145.f_12572 /* Tunable: HALLOWEEN_2015_TUXEDO_FRANK_BOBBLEHEAD */;
							break;
						case joaat("BOBBLE_FRNK2"):
							return Global_262145.f_12573 /* Tunable: HALLOWEEN_2015_PURPLE_SUIT_FRANK_BOBBLEHEAD */;
							break;
						case joaat("BOBBLE_FRNK3"):
							return Global_262145.f_12574 /* Tunable: HALLOWEEN_2015_STRIPED_SUIT_FRANK_BOBBLEHEAD */;
							break;
						case joaat("BOBBLE_MUM1"):
							return Global_262145.f_12575 /* Tunable: HALLOWEEN_2015_BLACK_MUMMY_BOBBLEHEAD */;
							break;
						case joaat("BOBBLE_MUM2"):
							return Global_262145.f_12576 /* Tunable: HALLOWEEN_2015_WHITE_MUMMY_BOBBLEHEAD */;
							break;
						case joaat("BOBBLE_MUM3"):
							return Global_262145.f_12577 /* Tunable: HALLOWEEN_2015_BROWN_MUMMY_BOBBLEHEAD */;
							break;
						case joaat("BOBBLE_WOLF1"):
							return Global_262145.f_12578 /* Tunable: HALLOWEEN_2015_PALE_WEREWOLF_BOBBLEHEAD */;
							break;
						case joaat("BOBBLE_WOLF2"):
							return Global_262145.f_12579 /* Tunable: HALLOWEEN_2015_DARK_WEREWOLF_BOBBLEHEAD */;
							break;
						case joaat("BOBBLE_WOLF3"):
							return Global_262145.f_12580 /* Tunable: HALLOWEEN_2015_GREY_WEREWOLF_BOBBLEHEAD */;
							break;
						case joaat("BOBBLE_VAMP1"):
							return Global_262145.f_12581 /* Tunable: HALLOWEEN_2015_FLESHY_VAMPIRE_BOBBLEHEAD */;
							break;
						case joaat("BOBBLE_VAMP2"):
							return Global_262145.f_12582 /* Tunable: HALLOWEEN_2015_BLOODY_VAMPIRE_BOBBLEHEAD */;
							break;
						case joaat("BOBBLE_VAMP3"):
							return Global_262145.f_12583 /* Tunable: HALLOWEEN_2015_BANDW_VAMPIRE_BOBBLEHEAD */;
							break;
						case joaat("BOBBLE_MAR1"):
							return Global_262145.f_12348 /* Tunable: CAR_MODS_BLACK_MARIACHI_BOBBLEHEAD */;
							break;
						case joaat("BOBBLE_MAR2"):
							return Global_262145.f_12349 /* Tunable: CAR_MODS_GREEN_MARIACHI_BOBBLEHEAD */;
							break;
						case joaat("BOBBLE_MAR3"):
							return Global_262145.f_12350 /* Tunable: CAR_MODS_BLUE_MARIACHI_BOBBLEHEAD */;
							break;
						case joaat("BOBBLE_BAT1"):
							return Global_262145.f_12351 /* Tunable: CAR_MODS_BOARS_BOBBLEHEAD */;
							break;
						case joaat("BOBBLE_BAT2"):
							return Global_262145.f_12352 /* Tunable: CAR_MODS_CORKERS_BOBBLEHEAD */;
							break;
						case joaat("BOBBLE_BAT3"):
							return Global_262145.f_12353 /* Tunable: CAR_MODS_FEUD_BOBBLEHEAD */;
							break;
						case joaat("BOBBLE_BSK1"):
							return Global_262145.f_12354 /* Tunable: CAR_MODS_PANIC_BOBBLEHEAD */;
							break;
						case joaat("BOBBLE_BSK2"):
							return Global_262145.f_12355 /* Tunable: CAR_MODS_SALAMANDERS_BOBBLEHEAD */;
							break;
						case joaat("BOBBLE_BSK3"):
							return Global_262145.f_12356 /* Tunable: CAR_MODS_LIBERTY_BOBBLEHEAD */;
							break;
						case joaat("BOBBLE_BSK4"):
							return Global_262145.f_12357 /* Tunable: CAR_MODS_LS_SHRIMPS_BOBBLEHEAD */;
							break;
						case joaat("BOBBLE_OG1"):
							return Global_262145.f_12361 /* Tunable: CAR_MODS_MAGNETICS_BOBBLEHEAD */;
							break;
						case joaat("BOBBLE_OG2"):
							return Global_262145.f_12362 /* Tunable: CAR_MODS_LSC_BOBBLEHEAD */;
							break;
						case joaat("BOBBLE_OG3"):
							return Global_262145.f_12363 /* Tunable: CAR_MODS_OG_BOBBLEHEAD */;
							break;
						case joaat("BOBBLE_FOOT1"):
							return Global_262145.f_12358 /* Tunable: CAR_MODS_LC_WRATH_BOBBLEHEAD */;
							break;
						case joaat("BOBBLE_FOOT2"):
							return Global_262145.f_12359 /* Tunable: CAR_MODS_POUNDERS_BOBBLEHEAD */;
							break;
						case joaat("BOBBLE_FOOT3"):
							return Global_262145.f_12360 /* Tunable: CAR_MODS_BOOKWORMS_BOBBLEHEAD */;
							break;
						case joaat("BOBBLE_IMP1"):
							return Global_262145.f_12364 /* Tunable: CAR_MODS_IMPOTENT_RAGE_BOBBLEHEAD */;
							break;
						case joaat("BOBBLE_IMP2"):
							return Global_262145.f_12365 /* Tunable: CAR_MODS_VINTAGE_IMPOTENT_RAGE_BOBBLEHEAD */;
							break;
						case joaat("BOBBLE_POGO1"):
							return Global_262145.f_12366 /* Tunable: CAR_MODS_WHITE_POGO_BOBBLEHEAD */;
							break;
						case joaat("BOBBLE_POGO2"):
							return Global_262145.f_12367 /* Tunable: CAR_MODS_RED_POGO_BOBBLEHEAD */;
							break;
						case joaat("BOBBLE_REAP"):
							return Global_262145.f_12368 /* Tunable: CAR_MODS_GRIM_REAPER_BOBBLEHEAD */;
							break;
						default:
							switch (iParam1)
							{
								case 1:
									return Global_262145.f_12348 /* Tunable: CAR_MODS_BLACK_MARIACHI_BOBBLEHEAD */;
									break;
								case 2:
									return Global_262145.f_12349 /* Tunable: CAR_MODS_GREEN_MARIACHI_BOBBLEHEAD */;
									break;
								case 3:
									return Global_262145.f_12350 /* Tunable: CAR_MODS_BLUE_MARIACHI_BOBBLEHEAD */;
									break;
								case 4:
									return Global_262145.f_12351 /* Tunable: CAR_MODS_BOARS_BOBBLEHEAD */;
									break;
								case 5:
									return Global_262145.f_12352 /* Tunable: CAR_MODS_CORKERS_BOBBLEHEAD */;
									break;
								case 6:
									return Global_262145.f_12353 /* Tunable: CAR_MODS_FEUD_BOBBLEHEAD */;
									break;
								case 7:
									return Global_262145.f_12354 /* Tunable: CAR_MODS_PANIC_BOBBLEHEAD */;
									break;
							}
							break;
						}
				}
				return 12345;
			}
			break;
		case 75:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_12381 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_HYDRAULICS */;
					break;
				case 1:
					return Global_262145.f_12700 /* Tunable: SUPERMOD_SLOT_HYDRAULICS_1ST_MOD */;
					break;
				case 2:
					return Global_262145.f_12701 /* Tunable: SUPERMOD_SLOT_HYDRAULICS_2ND_MOD */;
					break;
				case 3:
					return Global_262145.f_12702 /* Tunable: SUPERMOD_SLOT_HYDRAULICS_3RD_MOD */;
					break;
				case 4:
					return Global_262145.f_12703 /* Tunable: SUPERMOD_SLOT_HYDRAULICS_4TH_MOD */;
					break;
				case 5:
					return Global_262145.f_12704 /* Tunable: SUPERMOD_SLOT_HYDRAULICS_5TH_MOD */;
					break;
				case 6:
					return Global_262145.f_15061 /* Tunable: CAR_MODS_SUPERMOD_SLOT_HYDRAULICS_6TH_MOD */;
					break;
				default:
					return Global_262145.f_12704 /* Tunable: SUPERMOD_SLOT_HYDRAULICS_5TH_MOD */;
					break;
			}
			break;
		case 85:
			switch (iVar1)
			{
				case joaat("trailerlarge"):
					switch (iParam1)
					{
						case 0:
							return 0;
							break;
						case 1:
							return Global_262145.f_21771 /* Tunable: GR_MOC_LIVERIES_STARS_AND_STRIPES_PRICE */;
							break;
						case 2:
							return Global_262145.f_21772 /* Tunable: GR_MOC_LIVERIES_EAGLE_CLAW_PRICE */;
							break;
						case 3:
							return Global_262145.f_21773 /* Tunable: GR_MOC_LIVERIES_EAGLE_CLAW_FLAG_PRICE */;
							break;
						case 4:
							return Global_262145.f_21774 /* Tunable: GR_MOC_LIVERIES_FIGHTING_FREEDOM_PRICE */;
							break;
					}
					break;
				case joaat("lurcher"):
					switch (iParam1)
					{
						case 0:
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_12391 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_LIVERY */) * __LIB_4__.func_525(iParam1, 1)));
							break;
						case 1:
							return Global_262145.f_12698 /* Tunable: CAR_MODS_HALLOWEEN_2015_LURCHER_LIVERY_HANGMANS_GRAVE */;
							break;
						case 2:
							return Global_262145.f_12697 /* Tunable: CAR_MODS_HALLOWEEN_2015_LURCHER_LIVERY_THE_RIPPER */;
							break;
					}
					break;
				case joaat("btype2"):
					switch (iParam1)
					{
						case 0:
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_12391 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_LIVERY */) * __LIB_4__.func_525(iParam1, 1)));
							break;
						case 1:
							return Global_262145.f_12696 /* Tunable: CAR_MODS_HALLOWEEN_2015_FRANKEN_STANGE_LIVERY_MIDNIGHT_POTION */;
							break;
						case 2:
							return Global_262145.f_12694 /* Tunable: CAR_MODS_HALLOWEEN_2015_FRANKEN_STANGE_LIVERY_HELLS_FURNACE */;
							break;
						case 3:
							return Global_262145.f_12693 /* Tunable: CAR_MODS_HALLOWEEN_2015_FRANKEN_STANGE_LIVERY_BLAZING_DEATH */;
							break;
						case 4:
							return Global_262145.f_12695 /* Tunable: CAR_MODS_HALLOWEEN_2015_FRANKEN_STANGE_LIVERY_SPIDER_TRAP */;
							break;
					}
					break;
				case joaat("faction2"):
					if (iParam1 == 10)
					{
						return Global_262145.f_12705 /* Tunable: LOWRIDER_FACTION2_LIVERY_SPECIAL10 */;
					}
					break;
				case joaat("omnis"):
					switch (iParam1)
					{
						case 0:
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_12391 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_LIVERY */) * __LIB_4__.func_525(iParam1, 1)));
							break;
						case 1:
							return Global_262145.f_17423 /* Tunable: STUNT_LIVERY_1_OBEY_OMNIS */;
							break;
						case 2:
							return Global_262145.f_17436 /* Tunable: STUNT_LIVERY_2_OBEY_OMNIS */;
							break;
						default:
							return 999;
							break;
					}
					break;
				case joaat("bf400"):
					switch (iParam1)
					{
						case 0:
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_12391 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_LIVERY */) * __LIB_4__.func_525(iParam1, 1)));
							break;
						case 1:
							return Global_262145.f_17429 /* Tunable: STUNT_LIVERY_1_NAGASAKI_BF400 */;
							break;
						case 2:
							return Global_262145.f_17442 /* Tunable: STUNT_LIVERY_2_NAGASAKI_BF400 */;
							break;
						default:
							return 999;
							break;
					}
					break;
				case joaat("tropos"):
					switch (iParam1)
					{
						case 0:
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_12391 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_LIVERY */) * __LIB_4__.func_525(iParam1, 1)));
							break;
						case 1:
							return Global_262145.f_17424 /* Tunable: STUNT_LIVERY_1_LAMPADATI_TROPOS_RALLYE */;
							break;
						case 2:
							return Global_262145.f_17437 /* Tunable: STUNT_LIVERY_2_LAMPADATI_TROPOS_RALLYE */;
							break;
						default:
							return 999;
							break;
					}
					break;
				case joaat("brioso"):
					switch (iParam1)
					{
						case 0:
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_12391 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_LIVERY */) * __LIB_4__.func_525(iParam1, 1)));
							break;
						case 1:
							return Global_262145.f_17425 /* Tunable: STUNT_LIVERY_1_GROTTI_BRIOSO_RA */;
							break;
						case 2:
							return Global_262145.f_17438 /* Tunable: STUNT_LIVERY_2_GROTTI_BRIOSO_RA */;
							break;
						default:
							return 999;
							break;
					}
					break;
				case joaat("trophytruck"):
					switch (iParam1)
					{
						case 0:
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_12391 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_LIVERY */) * __LIB_4__.func_525(iParam1, 1)));
							break;
						case 1:
							return Global_262145.f_17426 /* Tunable: STUNT_LIVERY_1_VAPID_TROPHY_TRUCK */;
							break;
						case 2:
							return Global_262145.f_17439 /* Tunable: STUNT_LIVERY_2_VAPID_TROPHY_TRUCK */;
							break;
						default:
							return 999;
							break;
					}
					break;
				case joaat("trophytruck2"):
					switch (iParam1)
					{
						case 0:
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_12391 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_LIVERY */) * __LIB_4__.func_525(iParam1, 1)));
							break;
						case 1:
							return Global_262145.f_17427 /* Tunable: STUNT_LIVERY_1_VAPID_DESERT_RAID */;
							break;
						case 2:
							return Global_262145.f_17440 /* Tunable: STUNT_LIVERY_2_VAPID_DESERT_RAID */;
							break;
						default:
							return 999;
							break;
					}
					break;
				case joaat("cliffhanger"):
					switch (iParam1)
					{
						case 0:
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_12391 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_LIVERY */) * __LIB_4__.func_525(iParam1, 1)));
							break;
						case 1:
							return Global_262145.f_17428 /* Tunable: STUNT_LIVERY_1_WESTERN_CLIFFHANGER */;
							break;
						case 2:
							return Global_262145.f_17441 /* Tunable: STUNT_LIVERY_2_WESTERN_CLIFFHANGER */;
							break;
						default:
							return 999;
							break;
					}
					break;
				case joaat("tampa2"):
					switch (iParam1)
					{
						case 0:
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_12391 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_LIVERY */) * __LIB_4__.func_525(iParam1, 1)));
							break;
						case 1:
							return Global_262145.f_17421 /* Tunable: STUNT_LIVERY_1_DECALSSE_DRIFT_TAMPA */;
							break;
						case 2:
							return Global_262145.f_17434 /* Tunable: STUNT_LIVERY_2_DECALSSE_DRIFT_TAMPA */;
							break;
						default:
							return 999;
							break;
					}
					break;
				case joaat("gargoyle"):
					switch (iParam1)
					{
						case 0:
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_12391 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_LIVERY */) * __LIB_4__.func_525(iParam1, 1)));
							break;
						case 1:
							return Global_262145.f_17431 /* Tunable: STUNT_LIVERY_1_WESTERN_GARGOYLE */;
							break;
						case 2:
							return Global_262145.f_17444 /* Tunable: STUNT_LIVERY_2_WESTERN_GARGOYLE */;
							break;
						default:
							return 999;
							break;
					}
					break;
				case joaat("le7b"):
					switch (iParam1)
					{
						case 0:
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_12391 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_LIVERY */) * __LIB_4__.func_525(iParam1, 1)));
							break;
						case 1:
							return Global_262145.f_17422 /* Tunable: STUNT_LIVERY_1_ANNIS_RE7B */;
						case 2:
							return Global_262145.f_17435 /* Tunable: STUNT_LIVERY_2_ANNIS_RE7B */;
						default:
							return 999;
							break;
					}
					break;
				case joaat("tyrus"):
					switch (iParam1)
					{
						case 0:
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_12391 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_LIVERY */) * __LIB_4__.func_525(iParam1, 1)));
							break;
						case 1:
							return Global_262145.f_17420 /* Tunable: STUNT_LIVERY_1_PROGEN_TYRUS */;
							break;
						case 2:
							return Global_262145.f_17433 /* Tunable: STUNT_LIVERY_2_PROGEN_TYRUS */;
							break;
						default:
							return 999;
							break;
					}
					break;
				case joaat("lynx"):
					switch (iParam1)
					{
						case 0:
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_12391 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_LIVERY */) * __LIB_4__.func_525(iParam1, 1)));
							break;
						case 1:
							return Global_262145.f_17430 /* Tunable: STUNT_LIVERY_1_OCELOT_LYNX */;
							break;
						case 2:
							return Global_262145.f_17443 /* Tunable: STUNT_LIVERY_2_OCELOT_LYNX */;
							break;
						default:
							return 999;
							break;
					}
					break;
				case joaat("sheava"):
					switch (iParam1)
					{
						case 0:
							return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Global_262145.f_12391 /* Tunable: CAR_MODS_SUPERMOD_SLOT_STOCK_LIVERY */) * __LIB_4__.func_525(iParam1, 1)));
							break;
						case 1:
							return Global_262145.f_17419 /* Tunable: STUNT_LIVERY_1_EMPEROR_SHEAVA */;
							break;
						case 2:
							return Global_262145.f_17432 /* Tunable: STUNT_LIVERY_2_EMPEROR_SHEAVA */;
							break;
						default:
							return 999;
							break;
					}
					break;
			}
			return SYSTEM::FLOOR((SYSTEM::TO_FLOAT(__LIB_4__.func_541(iParam0, bParam4)) * __LIB_4__.func_525(iParam1, 1)));
			break;
		case 61:
		case 103:
			if (STREAMING::IS_MODEL_VALID(iVar1))
			{
				if (__LIB_6__.func_777(iVar1, 0))
				{
					return __LIB_1__.func_579(__LIB_26__.func_193(iVar1, iParam1));
				}
			}
			break;
	}
	return 700;
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
	iVar1 = __LIB_0__.func_714(joaat("MPPLY_VEHICLE_ID_ADMIN_WEB"));
	iVar2 = __LIB_4__.func_65(iParam1, -1);
	if (iVar2 == 0)
	{
		return -1;
	}
	if (!(((((((iParam1 == 245 || iParam1 == 323) || iParam1 == 324) || iParam1 == 357) || iParam1 == 402) || iParam1 == 449) || iParam1 == 487) || iParam1 == 518))
	{
		if (!__LIB_0__.func_113(iVar2))
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
			if (__LIB_0__.func_116() && __LIB_0__.func_161())
			{
				return func_418(iVar2, Global_262145.f_8611 /* Tunable: KHAMELION_WEB_PRICE_TUNABLES */, 1);
			}
			return func_418(iVar2, Global_262145.f_8608 /* Tunable: KHAMELION_WEB_PRICE_MODIFIER */, bParam2);
			break;
		case 97:
			if (__LIB_0__.func_116() && __LIB_0__.func_161())
			{
				return func_418(iVar2, Global_262145.f_8612 /* Tunable: HOTKNIFE_WEB_PRICE_TUNABLES */, 1);
			}
			return func_418(iVar2, Global_262145.f_8609 /* Tunable: HOTKNIFE_WEB_PRICE_MODIFIER */, bParam2);
			break;
		case 98:
			if (__LIB_0__.func_116() && __LIB_0__.func_161())
			{
				return func_418(iVar2, Global_262145.f_8613 /* Tunable: CARBONRS_WEB_PRICE_TUNABLES */, 1);
			}
			return func_418(iVar2, Global_262145.f_8610 /* Tunable: CARBONRS_WEB_PRICE_MODIFIER */, bParam2);
			break;
		case 62:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			break;
		case 48:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			break;
		case 11:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			break;
		case 25:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			break;
	}
	switch (iParam1)
	{
		case 99:
			if (__LIB_19__.func_81(99))
			{
				return func_418(iVar2, -1, bParam2);
			}
			else
			{
				return -3;
			}
			break;
		case 100:
			if (__LIB_19__.func_81(100))
			{
				return func_418(iVar2, Global_262145.f_7625 /* Tunable: DLC_VEHICLE_CANIS_KALAHARI */, 0);
			}
			else
			{
				return -3;
			}
			break;
		case 101:
			if (__LIB_19__.func_81(101))
			{
				return func_418(iVar2, -1, bParam2);
			}
			else
			{
				return -3;
			}
			break;
		case 102:
			if (__LIB_19__.func_81(102))
			{
				return func_418(iVar2, -1, bParam2);
			}
			else
			{
				return -3;
			}
			break;
		case 109:
			if (((Global_262145.f_7058 /* Tunable: TURN_ON_VALENTINES_EVENT */ || iVar0) || Global_262145.f_12028 /* Tunable: TURN_ON_VALENTINE_VEHICLE */) || __LIB_0__.func_137(114, -1))
			{
				if (__LIB_19__.func_81(109))
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
			if (__LIB_19__.func_81(111))
			{
				return func_418(iVar2, Global_262145.f_7026 /* Tunable: BUSINESS_VEHICLES_JESTER */, bParam2);
			}
			else
			{
				return -3;
			}
			break;
		case 114:
			if (__LIB_19__.func_81(114))
			{
				return func_418(iVar2, Global_262145.f_7027 /* Tunable: BUSINESS_VEHICLES_MASSACRO */, bParam2);
			}
			else
			{
				return -3;
			}
			break;
		case 112:
			if (__LIB_19__.func_81(112))
			{
				return func_418(iVar2, Global_262145.f_7028 /* Tunable: BUSINESS_VEHICLES_TURISMOR */, bParam2);
			}
			else
			{
				return -3;
			}
			break;
		case 115:
			if (__LIB_19__.func_81(115))
			{
				return func_418(iVar2, Global_262145.f_7029 /* Tunable: BUSINESS_VEHICLES_ZENTORNO */, bParam2);
			}
			else
			{
				return -3;
			}
			break;
		case 116:
			if (__LIB_19__.func_81(116))
			{
				return func_418(iVar2, Global_262145.f_7025 /* Tunable: BUSINESS_VEHICLES_HUNTLEY */, bParam2);
			}
			else
			{
				return -3;
			}
			break;
		case 110:
			if (__LIB_19__.func_81(110))
			{
				return func_418(iVar2, Global_262145.f_7024 /* Tunable: BUSINESS_VEHICLES_ALPHA */, bParam2);
			}
			else
			{
				return -3;
			}
			break;
		case 113:
			if (__LIB_19__.func_81(113))
			{
				return func_418(iVar2, Global_262145.f_7079 /* Tunable: BUSINESS_VEHICLE_VESTRA */, bParam2);
			}
			else
			{
				return -3;
			}
			break;
		case 121:
			if (__LIB_19__.func_81(121))
			{
				return func_418(iVar2, -1, bParam2);
			}
			else
			{
				return -3;
			}
			break;
		case 143:
			if (__LIB_19__.func_81(143))
			{
				return func_418(iVar2, -1, bParam2);
			}
			else
			{
				return -3;
			}
			break;
		case 144:
			if (__LIB_19__.func_81(144))
			{
				return func_418(iVar2, -1, bParam2);
			}
			else
			{
				return -3;
			}
			break;
		case 145:
			if (__LIB_19__.func_81(145))
			{
				return func_418(iVar2, -1, bParam2);
			}
			else
			{
				return -3;
			}
			break;
		case 146:
			if (__LIB_19__.func_81(146))
			{
				return func_418(iVar2, -1, bParam2);
			}
			else
			{
				return -3;
			}
			break;
		case 147:
			if (__LIB_19__.func_81(147))
			{
				return func_418(iVar2, -1, bParam2);
			}
			else
			{
				return -3;
			}
			break;
		case 148:
			if (__LIB_19__.func_81(148))
			{
				return func_418(iVar2, -1, bParam2);
			}
			else
			{
				return -3;
			}
			break;
		case 149:
			if (__LIB_19__.func_81(149))
			{
				return func_418(iVar2, -1, bParam2);
			}
			else
			{
				return -3;
			}
			break;
		case 160:
			if (Global_262145.f_8273 /* Tunable: TOGGLE_ACTIVATE_MONSTER_TRUCK */ || __LIB_0__.func_137(3604, -1))
			{
				if (__LIB_19__.func_81(160))
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
			if (Global_262145.f_8272 /* Tunable: TOGGLE_ACTIVATE_WESTERN_SOVEREIGN */ || __LIB_0__.func_137(3605, -1))
			{
				if (__LIB_19__.func_81(161))
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
			if (__LIB_19__.func_81(162))
			{
				return func_418(iVar2, Global_262145.f_8536 /* Tunable: PS_BUCKINGHAM_MILJET */, bParam2);
			}
			else
			{
				return -3;
			}
			break;
		case 163:
			if (__LIB_19__.func_81(163))
			{
				return func_418(iVar2, Global_262145.f_8535 /* Tunable: PS_WESTERN_BESRA */, bParam2);
			}
			else
			{
				return -3;
			}
			break;
		case 164:
			if (__LIB_19__.func_81(164))
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
			if (__LIB_19__.func_81(165))
			{
				return func_418(iVar2, Global_262145.f_8533 /* Tunable: PS_INVERTO_COQUETTE_CLASSIC */, bParam2);
			}
			else
			{
				return -3;
			}
			break;
		case 166:
			if (__LIB_19__.func_81(166))
			{
				return func_418(iVar2, Global_262145.f_8534 /* Tunable: PS_INVERTO_COQUETTE_CLASSIC_TOPLESS */, 1);
			}
			else
			{
				return -3;
			}
			break;
		case 167:
			if (__LIB_19__.func_81(167))
			{
				return func_418(iVar2, Global_262145.f_8851 /* Tunable: LTS_LCC_INNOVATION */, bParam2);
			}
			else
			{
				return -3;
			}
			break;
		case 168:
			if (__LIB_19__.func_81(168))
			{
				return func_418(iVar2, Global_262145.f_8852 /* Tunable: LTS_SHITZU_HAKUCHOU */, bParam2);
			}
			else
			{
				return -3;
			}
			break;
		case 169:
			if (__LIB_19__.func_81(169))
			{
				return func_418(iVar2, Global_262145.f_8853 /* Tunable: LTS_LAMPADATI_FURORE_GT */, bParam2);
			}
			else
			{
				return -3;
			}
			break;
		case 170:
			if (__LIB_19__.func_81(170))
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
				if (__LIB_19__.func_81(187))
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
				if (__LIB_19__.func_81(177))
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
				if (__LIB_19__.func_81(185))
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
			if (__LIB_19__.func_81(174))
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
				if (__LIB_19__.func_81(172))
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
				if (__LIB_19__.func_81(175))
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
			if (__LIB_19__.func_81(176))
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
				if (__LIB_19__.func_81(178))
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
				if (__LIB_19__.func_81(179))
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
				if (__LIB_19__.func_81(180))
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
				if (__LIB_19__.func_81(181))
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
				if (__LIB_19__.func_81(182))
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
				if (__LIB_19__.func_81(186))
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
				if (__LIB_19__.func_81(188))
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
			return func_418(__LIB_4__.func_65(iParam1, -1), Global_262145.f_10084 /* Tunable: HESIT_VEHICLE_PRICE_BRAVADO_GRESLEY */, bParam2);
			break;
		case 190:
			return func_418(__LIB_4__.func_65(iParam1, -1), Global_262145.f_10085 /* Tunable: HESIT_VEHICLE_PRICE_OCELOT_JACKAL */, bParam2);
			break;
		case 191:
			return func_418(__LIB_4__.func_65(iParam1, -1), Global_262145.f_10086 /* Tunable: HESIT_VEHICLE_PRICE_DUNDREARY_LANDSTALKER */, bParam2);
			break;
		case 192:
			return func_418(__LIB_4__.func_65(iParam1, -1), Global_262145.f_9102 /* Tunable: VEHICLES_HEIST_MESA3 */, bParam2);
			break;
		case 193:
			return func_418(__LIB_4__.func_65(iParam1, -1), Global_262145.f_10087 /* Tunable: HESIT_VEHICLE_PRICE_PRINCIPLE_NEMESIS */, bParam2);
			break;
		case 194:
			return func_418(__LIB_4__.func_65(iParam1, -1), Global_262145.f_10088 /* Tunable: HESIT_VEHICLE_PRICE_UBERMACHT_ORACLE */, bParam2);
			break;
		case 195:
			return func_418(__LIB_4__.func_65(iParam1, -1), Global_262145.f_10089 /* Tunable: HESIT_VEHICLE_PRICE_BRAVADO_RUMPO */, bParam2);
			break;
		case 196:
			return func_418(__LIB_4__.func_65(iParam1, -1), Global_262145.f_10090 /* Tunable: HESIT_VEHICLE_PRICE_BENEFACTOR_SCHAFTER */, bParam2);
			break;
		case 197:
			return func_418(__LIB_4__.func_65(iParam1, -1), Global_262145.f_10091 /* Tunable: HESIT_VEHICLE_PRICE_CANIS_SEMINOLE */, bParam2);
			break;
		case 198:
			return func_418(__LIB_4__.func_65(iParam1, -1), Global_262145.f_10092 /* Tunable: HESIT_VEHICLE_PRICE_CHEVAL_SURGE */, bParam2);
			break;
		case 199:
			if (__LIB_0__.func_116() || Global_262145.f_20267 /* Tunable: ENABLE_RETURNING_CONTENT_VEHICLE */)
			{
				return func_418(iVar2, -1, bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 200:
			if (__LIB_0__.func_116() || Global_262145.f_20267 /* Tunable: ENABLE_RETURNING_CONTENT_VEHICLE */)
			{
				return func_418(iVar2, -1, bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 201:
			if (__LIB_0__.func_116() || Global_262145.f_20267 /* Tunable: ENABLE_RETURNING_CONTENT_VEHICLE */)
			{
				return func_418(iVar2, -1, bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 202:
			if (__LIB_0__.func_116() || Global_262145.f_20267 /* Tunable: ENABLE_RETURNING_CONTENT_VEHICLE */)
			{
				return func_418(iVar2, -1, bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 203:
			if (__LIB_0__.func_116() || Global_262145.f_20267 /* Tunable: ENABLE_RETURNING_CONTENT_VEHICLE */)
			{
				return func_418(iVar2, -1, bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 204:
			if (__LIB_0__.func_116() || Global_262145.f_20267 /* Tunable: ENABLE_RETURNING_CONTENT_VEHICLE */)
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
			if (__LIB_0__.func_116())
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
			if (__LIB_0__.func_116())
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
			if (__LIB_0__.func_116())
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
			if (__LIB_0__.func_116())
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
				if (__LIB_19__.func_81(210))
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
				return func_418(__LIB_4__.func_65(iParam1, -1), -1, bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 211:
			if (__LIB_19__.func_81(211))
			{
				return func_418(iVar2, -1, bParam2);
			}
			else
			{
				return -3;
			}
			break;
		case 212:
			if (__LIB_19__.func_81(212))
			{
				return func_418(iVar2, Global_262145.f_9402 /* Tunable: VEHICLE_XMAS14_DINKA_JESTER_RACECAR */, bParam2);
			}
			else
			{
				return -3;
			}
			break;
		case 213:
			if (__LIB_19__.func_81(213))
			{
				return func_418(iVar2, Global_262145.f_9403 /* Tunable: VEHICLE_XMAS14_DEWBAUCHEE_MASSACRO_RACECAR */, bParam2);
			}
			else
			{
				return -3;
			}
			break;
		case 214:
			if (__LIB_19__.func_81(214))
			{
				return func_418(__LIB_4__.func_65(iParam1, -1), Global_262145.f_11060 /* Tunable: LUXE1_WEBSITE_BENEFACTOR_STIRLING_GT */, bParam2);
			}
			else
			{
				return -3;
			}
			break;
		case 215:
			if (__LIB_19__.func_81(215))
			{
				return func_418(__LIB_4__.func_65(iParam1, -1), Global_262145.f_11061 /* Tunable: LUXE1_WEBSITE_BUCKINGHAM_LUXOR_DELUXE */, bParam2);
			}
			else
			{
				return -3;
			}
			break;
		case 216:
			if (__LIB_19__.func_81(216))
			{
				return func_418(__LIB_4__.func_65(iParam1, -1), Global_262145.f_11062 /* Tunable: LUXE1_WEBSITE_PEGASSI_OSIRIS */, bParam2);
			}
			else
			{
				return -3;
			}
			break;
		case 217:
			if (__LIB_19__.func_81(217))
			{
				return func_418(__LIB_4__.func_65(iParam1, -1), Global_262145.f_11063 /* Tunable: LUXE1_WEBSITE_BUCKINGHAM_SWIFT_DELUXE */, bParam2);
			}
			else
			{
				return -3;
			}
			break;
		case 218:
			if (__LIB_19__.func_81(218))
			{
				return func_418(__LIB_4__.func_65(iParam1, -1), Global_262145.f_11064 /* Tunable: LUXE1_WEBSITE_ALBANY_VIRGO */, bParam2);
			}
			else
			{
				return -3;
			}
			break;
		case 219:
			if (__LIB_19__.func_81(219))
			{
				return func_418(__LIB_4__.func_65(iParam1, -1), Global_262145.f_11065 /* Tunable: LUXE1_WEBSITE_ENUS_WINDSOR */, bParam2);
			}
			else
			{
				return -3;
			}
			break;
		case 220:
			return func_418(__LIB_4__.func_65(iParam1, -1), Global_262145.f_11357 /* Tunable: LUXE2_COIL_BRAWLER */, bParam2);
			break;
		case 221:
			if (!bParam2)
			{
				return func_418(__LIB_4__.func_65(iParam1, -1), Global_262145.f_11358 /* Tunable: LUXE2_VAPID_CHINO */, 0);
			}
			else
			{
				return func_418(__LIB_4__.func_65(iParam1, -1), Global_262145.f_12339 /* Tunable: WEBSITE_VAPID_CHINO__BENNYS_WEBSITE_ */, 1);
			}
			break;
		case 222:
			return func_418(__LIB_4__.func_65(iParam1, -1), Global_262145.f_11359 /* Tunable: LUXE2_INVETERO_COQUETTE_BLACKFIN */, bParam2);
			break;
		case 223:
			return func_418(__LIB_4__.func_65(iParam1, -1), Global_262145.f_11360 /* Tunable: LUXE2_PROGEN_T20 */, bParam2);
			break;
		case 224:
			return func_418(__LIB_4__.func_65(iParam1, -1), Global_262145.f_11361 /* Tunable: LUXE2_LAMPADATI_TORO */, bParam2);
			break;
		case 225:
			return func_418(__LIB_4__.func_65(iParam1, -1), Global_262145.f_11362 /* Tunable: LUXE2_DINKA_VINDICATOR */, bParam2);
			break;
		case 229:
			return func_418(__LIB_4__.func_65(iParam1, -1), Global_262145.f_12338 /* Tunable: WEBSITE_ALBANY_PRIMO */, bParam2);
			break;
		case 228:
			return func_418(__LIB_4__.func_65(iParam1, -1), Global_262145.f_12335 /* Tunable: WEBSITE_DECLASSE_MOONBEAM */, bParam2);
			break;
		case 227:
			return func_418(__LIB_4__.func_65(iParam1, -1), Global_262145.f_12334 /* Tunable: WEBSITE_WILLARD_FACTION */, bParam2);
			break;
		case 226:
			return func_418(__LIB_4__.func_65(iParam1, -1), Global_262145.f_12336 /* Tunable: WEBSITE_ALBANY_BUCCANEER */, bParam2);
			break;
		case 230:
			return func_418(__LIB_4__.func_65(iParam1, -1), Global_262145.f_12337 /* Tunable: WEBSITE_DECLASSE_VOODOO */, bParam2);
			break;
		case 231:
			if ((iVar0 || Global_262145.f_12038 /* Tunable: TURN_ON_HALLOWEEN_VEHICLES */) || __LIB_0__.func_137(4326, -1))
			{
				if (__LIB_19__.func_81(231))
				{
					return func_418(__LIB_4__.func_65(iParam1, -1), -1, bParam2);
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
			if ((iVar0 || Global_262145.f_12038 /* Tunable: TURN_ON_HALLOWEEN_VEHICLES */) || __LIB_0__.func_137(4327, -1))
			{
				if (__LIB_19__.func_81(232))
				{
					return func_418(__LIB_4__.func_65(iParam1, -1), -1, bParam2);
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
				return func_418(__LIB_4__.func_65(iParam1, -1), Global_262145.f_15025 /* Tunable: WEBSITE_BENNYS_DUNDREARY_VIRGO_CLASSIC */, bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 250:
			if (Global_262145.f_14732 /* Tunable: ENABLE_LOWRIDER2_TORNADO5 */)
			{
				return func_418(__LIB_4__.func_65(iParam1, -1), -1, bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 249:
			if (Global_262145.f_14731 /* Tunable: ENABLE_LOWRIDER2_SABREGT */)
			{
				return func_418(__LIB_4__.func_65(iParam1, -1), -1, bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 252:
			if (Global_262145.f_14734 /* Tunable: ENABLE_LOWRIDER2_FACTION */)
			{
				return func_418(__LIB_4__.func_65(iParam1, -1), -1, bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 233:
			if (!bParam2)
			{
				return func_418(__LIB_4__.func_65(iParam1, -1), Global_262145.f_13253 /* Tunable: APARTMENT_WEBSITE_GALLIVANTER_BALLER_LE */, 0);
			}
			else
			{
				return func_418(__LIB_4__.func_65(iParam1, -1), Global_262145.f_13254 /* Tunable: APARTMENT_WEBSITE_GALLIVANTER_BALLER_LE_ARMORED */, 1);
			}
			break;
		case 234:
			if (!bParam2)
			{
				return func_418(__LIB_4__.func_65(iParam1, -1), Global_262145.f_13255 /* Tunable: APARTMENT_WEBSITE_GALLIVANTER_BALLER_LE_LWB */, 0);
			}
			else
			{
				return func_418(__LIB_4__.func_65(iParam1, -1), Global_262145.f_13256 /* Tunable: APARTMENT_WEBSITE_GALLIVANTER_BALLER_LWB_ARMORED */, 1);
			}
			break;
		case 235:
			if (!bParam2)
			{
				return func_418(__LIB_4__.func_65(iParam1, -1), Global_262145.f_13257 /* Tunable: APARTMENT_WEBSITE_ENUS_COGNOSCENTI_55 */, 0);
			}
			else
			{
				return func_418(__LIB_4__.func_65(iParam1, -1), Global_262145.f_13258 /* Tunable: APARTMENT_WEBSITE_ENUS_COGNOSCENTI_55_ARMORED */, 1);
			}
			break;
		case 236:
			if (!bParam2)
			{
				return func_418(__LIB_4__.func_65(iParam1, -1), Global_262145.f_13259 /* Tunable: APARTMENT_WEBSITE_ENUS_COGNOSCENTI */, 0);
			}
			else
			{
				return func_418(__LIB_4__.func_65(iParam1, -1), Global_262145.f_13260 /* Tunable: APARTMENT_WEBSITE_ENUS_COGNOSCENTI_ARMORED */, 1);
			}
			break;
		case 237:
			return func_418(__LIB_4__.func_65(iParam1, -1), Global_262145.f_13261 /* Tunable: APARTMENT_WEBSITE_BENEFACTOR_SCHAFTER_TURRETED_LIMO */, bParam2);
			break;
		case 238:
			return func_418(__LIB_4__.func_65(iParam1, -1), Global_262145.f_13262 /* Tunable: APARTMENT_WEBSITE_DECLASSE_MAMBA */, bParam2);
			break;
		case 239:
			return func_418(__LIB_4__.func_65(iParam1, -1), Global_262145.f_13263 /* Tunable: APARTMENT_WEBSITE_IMPONTE_NIGHT_SHADE */, bParam2);
			break;
		case 240:
			if (!bParam2)
			{
				return func_418(__LIB_4__.func_65(iParam1, -1), Global_262145.f_13264 /* Tunable: APARTMENT_WEBSITE_BENEFACTOR_SCHAFTER_V12 */, 0);
			}
			else
			{
				return func_418(__LIB_4__.func_65(iParam1, -1), Global_262145.f_13265 /* Tunable: APARTMENT_WEBSITE_BENEFACTOR_SCHAFTER_V12_ARMORED */, 1);
			}
			break;
		case 241:
			if (!bParam2)
			{
				return func_418(__LIB_4__.func_65(iParam1, -1), Global_262145.f_13266 /* Tunable: APARTMENT_WEBSITE_BENEFACTOR_SCHAFTER_LWB */, 0);
			}
			else
			{
				return func_418(__LIB_4__.func_65(iParam1, -1), Global_262145.f_13267 /* Tunable: APARTMENT_WEBSITE_BENEFACTOR_SCHAFTER_LWB_ARMORED */, 1);
			}
			break;
		case 242:
			return func_418(__LIB_4__.func_65(iParam1, -1), Global_262145.f_13268 /* Tunable: APARTMENT_WEBSITE_BRAVADO_VERLIERER */, bParam2);
			break;
		case 243:
			return func_418(__LIB_4__.func_65(iParam1, -1), Global_262145.f_13269 /* Tunable: APARTMENT_WEBSITE_BUCKINGHAM_SUPERVOLITO */, bParam2);
			break;
		case 244:
			return func_418(__LIB_4__.func_65(iParam1, -1), Global_262145.f_13270 /* Tunable: APARTMENT_WEBSITE_BUCKINGHAM_SUPERVOLITO_CARBON */, bParam2);
			break;
		case 245:
			if (!Global_262145.f_13084 /* Tunable: YACHT_DISABLE_PURCHASE */ && !__LIB_1__.func_912())
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
			return func_418(__LIB_4__.func_65(iParam1, -1), -1, bParam2);
			break;
		case 246:
			if ((iVar0 || Global_262145.f_12707 /* Tunable: XMAS2015_VEHICLE */) || __LIB_0__.func_137(109, -1))
			{
				if (__LIB_19__.func_81(246))
				{
					return func_418(__LIB_4__.func_65(iParam1, -1), Global_262145.f_13330 /* Tunable: XMAS2015_DECLASSE_TAMPA */, bParam2);
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
			return func_418(__LIB_4__.func_65(iParam1, -1), -1, bParam2);
			break;
		case 49:
			return func_418(__LIB_4__.func_65(iParam1, -1), -1, bParam2);
			break;
		case 248:
			if (((Global_262145.f_7058 /* Tunable: TURN_ON_VALENTINES_EVENT */ || iVar0) || Global_262145.f_13394 /* Tunable: TURN_ON_VALENTINE_2016_VEHICLE */) || __LIB_0__.func_137(115, -1))
			{
				if (__LIB_19__.func_81(248))
				{
					return func_418(__LIB_4__.func_65(iParam1, -1), -1, bParam2);
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
			return func_418(__LIB_4__.func_65(iParam1, -1), -1, bParam2);
			break;
		case 254:
			return func_418(__LIB_4__.func_65(iParam1, -1), -1, bParam2);
			break;
		case 255:
			return func_418(__LIB_4__.func_65(iParam1, -1), -1, bParam2);
			break;
		case 256:
			return func_418(__LIB_4__.func_65(iParam1, -1), -1, bParam2);
			break;
		case 257:
			return func_418(__LIB_4__.func_65(iParam1, -1), -1, bParam2);
			break;
		case 357:
			return 1;
		case 402:
			if (__LIB_4__.func_568())
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
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 82:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 63:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 78:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 57:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 49:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 22:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 94:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 51:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 89:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 66:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 33:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 70:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 83:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 20:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 71:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 19:
			return func_418(iVar2, -1, bParam2);
		case 58:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 3:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 84:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 7:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 72:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 38:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 21:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 12:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 54:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 90:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 81:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 13:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 4:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 56:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 69:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 60:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 91:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 50:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 15:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 53:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 41:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 92:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 44:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 43:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 2:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 85:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 14:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 79:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 24:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 16:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 6:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 86:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 47:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 73:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 61:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 67:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 74:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 75:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 87:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 17:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 59:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 64:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 68:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 52:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 39:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 34:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 30:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 10:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 27:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 1:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 76:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 88:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 32:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 55:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 45:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 18:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 35:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 36:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 37:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 29:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 46:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 65:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 80:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 42:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 77:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 40:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 93:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 0:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 103:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 104:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 105:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 106:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 107:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 108:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 128:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 129:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 130:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 131:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 132:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 133:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 134:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 258:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 259:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 260:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 261:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 262:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
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
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 265:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 266:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 135:
			if (!bParam2)
			{
				return func_418(iVar2, Global_262145.f_7036 /* Tunable: BUSINESS_VEHICLES_MINIVAN */, bParam2);
			}
			else if (Global_262145.f_14733 /* Tunable: ENABLE_LOWRIDER2_MINIVAN */)
			{
				return func_418(__LIB_4__.func_65(iParam1, -1), Global_262145.f_15028 /* Tunable: WEBSITE_BENNYS_VAPID_MINIVAN */, bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 136:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 137:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 138:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 139:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 140:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 141:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 142:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 122:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 123:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 124:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 125:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 126:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 127:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 150:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 151:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 152:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 153:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 154:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 155:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 156:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 157:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 158:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
		case 159:
			return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
	}
	switch (iParam1)
	{
		case 267:
			if (Global_262145.f_17360 /* Tunable: ENABLESTUNT_LE7B */)
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 268:
			if (Global_262145.f_17361 /* Tunable: ENABLESTUNT_OMNIS */)
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 269:
			if (Global_262145.f_17362 /* Tunable: ENABLESTUNT_TROPOS_RALLYE */)
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 270:
			if (Global_262145.f_17363 /* Tunable: ENABLESTUNT_BRIOSO_RA */)
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 271:
			if (Global_262145.f_17364 /* Tunable: ENABLESTUNT_TROPHY_TRUCK */)
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 272:
			if (Global_262145.f_17365 /* Tunable: ENABLESTUNT_TROPHY_CAR */)
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 273:
			if (Global_262145.f_17366 /* Tunable: ENABLESTUNT_CONTENDER */)
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 274:
			if (Global_262145.f_17367 /* Tunable: ENABLESTUNT_CLIFFHANGER */)
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 275:
			if (Global_262145.f_17368 /* Tunable: ENABLESTUNT_BF400 */)
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 279:
			if (Global_262145.f_17358 /* Tunable: ENABLESTUNT_TYRUS */)
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 280:
			if (Global_262145.f_17369 /* Tunable: ENABLESTUNT_LYNX */)
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 281:
			if (Global_262145.f_17357 /* Tunable: ENABLESTUNT_ET1 */)
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 276:
			if (Global_262145.f_17371 /* Tunable: ENABLESTUNT_RALLY_TRUCK */)
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 277:
			if (Global_262145.f_17359 /* Tunable: ENABLESTUNT_DRIFT_TAMPA */)
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 278:
			if (Global_262145.f_17370 /* Tunable: ENABLESTUNT_GARGOYLE */)
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 282:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 283:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 284:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 285:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 286:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 287:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 288:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 289:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 290:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 291:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 292:
			if (Global_262145.f_17531 /* Tunable: ENABLE_BIKER_SHOTARO */ || __LIB_25__.func_71(24))
			{
				if (Global_262145.f_17602 /* Tunable: 1294035586 */ == 0)
				{
					return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
				}
				else if (Global_262145.f_17602 /* Tunable: 1294035586 */ == -1)
				{
					return -1;
				}
				else
				{
					iVar4 = __LIB_1__.func_556(3970, -1, 0);
					if (iVar4 >= Global_262145.f_17602 /* Tunable: 1294035586 */)
					{
						return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
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
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 294:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 295:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 296:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 297:
			if (iVar0 || __LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 298:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 299:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 300:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 301:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 302:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 303:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 304:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 305:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 306:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 307:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 308:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 309:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 310:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 311:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 312:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 313:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 314:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 315:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 316:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 317:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 318:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 319:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 320:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 321:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 322:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 325:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 326:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 327:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 328:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 329:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 330:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 331:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 332:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 333:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 334:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 335:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 336:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 337:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 338:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 339:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 340:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 341:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 342:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 343:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 344:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 345:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 346:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 347:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 348:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 349:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 350:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 351:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 352:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 353:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 354:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 355:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 356:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 358:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 359:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 360:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 361:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 362:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 363:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 364:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 365:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 366:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 367:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 368:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 369:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 370:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 371:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 372:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 373:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 374:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 375:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 376:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 377:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 378:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 379:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 380:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 381:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 382:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 383:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 384:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 385:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 386:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 387:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 388:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 389:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 390:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 391:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 392:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 393:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 394:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 395:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 396:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 397:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 398:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 399:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 400:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 401:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 403:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 404:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 405:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 406:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 407:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 408:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 409:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 410:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 411:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 412:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 415:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 416:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 417:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 418:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 419:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 420:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 421:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 422:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 423:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 424:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 413:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 414:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 425:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 426:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 427:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 428:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 429:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 430:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 431:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 432:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 433:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 434:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 435:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 436:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 437:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 438:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 439:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 440:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 458:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				if (__LIB_0__.func_228(22063, -1) >= 20)
				{
					return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
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
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 442:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 443:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 444:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 445:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 446:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 447:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 448:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 449:
			if (__LIB_5__.func_72(iParam0, iVar2))
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
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 460:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 461:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 462:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 463:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 464:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 465:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 466:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 467:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 468:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 469:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 470:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 471:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 472:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 473:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 474:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 475:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 476:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 477:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 478:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 479:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 480:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 481:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 482:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 483:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 484:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 485:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 488:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 486:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 487:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 489:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 490:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 491:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 492:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 493:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 494:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 495:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 496:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 497:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 498:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 499:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 500:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 501:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 502:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 503:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 504:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
			}
			else
			{
				return -1;
			}
			break;
		case 505:
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
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
			if (__LIB_5__.func_72(iParam0, iVar2))
			{
				return func_418(iVar2, __LIB_4__.func_569(iParam1), bParam2);
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
	StringCopy(&Var0, __LIB_4__.func_572(iParam0), 16);
	iVar1 = __LIB_0__.func_896(iParam0);
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
	if (__LIB_4__.func_571())
	{
		if (__LIB_0__.func_895(iVar1) && bParam2)
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
		if (__LIB_25__.func_206(iVar1))
		{
			if (__LIB_7__.func_972())
			{
				bVar4 = true;
			}
		}
		if (func_475(iVar1))
		{
			iVar2 = __LIB_7__.func_963(iParam0, bParam2, -1, bVar4);
			iVar6 = __LIB_7__.func_790(iParam0);
			__LIB_3__.func_671(&sVar5, Var0, iParam0, 4, iVar3, iVar6, -1, -1, 0, bVar4);
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
				if (__LIB_7__.func_973(&iVar10, iParam0, bParam2, -1))
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
	if (__LIB_25__.func_206(iVar1))
	{
		if (__LIB_7__.func_972())
		{
			return 0;
		}
	}
	if (iParam1 < 0)
	{
		if (__LIB_7__.func_973(&uVar11, iParam0, bParam2, -1))
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
	StringCopy(&Var1, __LIB_5__.func_849(iParam1), 16);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Var1) || MISC::GET_HASH_KEY(&Var1) == joaat("carnotfound"))
	{
		IntToString(sParam0, 0, 64);
		return;
	}
	iVar2 = __LIB_4__.func_65(iParam1, -1);
	if (iVar2 == 0)
	{
		IntToString(sParam0, 0, 64);
		return;
	}
	__LIB_3__.func_671(sParam0, Var1, iVar2, 4, 1, iParam2, -1, -1, 1, bParam4);
	if ((((__LIB_0__.func_892(iParam1) || __LIB_0__.func_891(iParam1)) || __LIB_0__.func_881(__LIB_4__.func_65(iParam1, -1)) != -1) || __LIB_4__.func_570(__LIB_4__.func_65(iParam1, -1)) != -1) || __LIB_0__.func_880(__LIB_4__.func_65(iParam1, -1)) != -1)
	{
		if (iParam1 == 200)
		{
			if (Global_262145.f_20267 /* Tunable: ENABLE_RETURNING_CONTENT_VEHICLE */)
			{
				if ((__LIB_0__.func_892(iParam1) && __LIB_0__.func_116()) || (__LIB_0__.func_891(iParam1) && !__LIB_33__.func_164(iParam1)))
				{
					__LIB_3__.func_671(sParam0, Var1, iVar2, 4, 1, iParam2, 1, -1, 1, bParam4);
				}
			}
		}
		else if (iParam2 != 0)
		{
			__LIB_3__.func_671(sParam0, Var1, iVar2, 4, 1, (iParam2 - 1), 1, -1, 1, bParam4);
		}
	}
	else if (iParam1 == 413)
	{
		__LIB_3__.func_671(sParam0, Var1, iVar2, 4, 1, iParam2, iParam3, -1, 1, bParam4);
	}
	else if ((((iParam1 == 414 || iParam1 == 527) || iParam1 == 531) || iParam1 == 533) || iParam1 == 525)
	{
		__LIB_3__.func_671(sParam0, Var1, iVar2, 4, 1, iParam2, iParam3, -1, 1, bParam4);
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
	iVar0 = __LIB_4__.func_65(iParam0, -1);
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
		if (__LIB_0__.func_116() && __LIB_0__.func_161())
		{
			return 1;
		}
		return 0;
	}
	if ((((iParam0 == 206 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) || (iParam0 == 207 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0 == 208 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0 == 209 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS()))
	{
		if (__LIB_0__.func_116())
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
	if (__LIB_0__.func_895(iParam0))
	{
		if (Global_77052)
		{
			return 1;
		}
		return 0;
	}
	iVar1 = __LIB_1__.func_367(iVar0);
	if (iVar1 != -1)
	{
		if (__LIB_7__.func_285(__LIB_0__.func_893(iVar0)))
		{
			return 1;
		}
		return 0;
	}
	if (__LIB_0__.func_892(iParam0))
	{
		if (__LIB_0__.func_116())
		{
			if ((iParam0 == 205 && Global_262145.f_20268 /* Tunable: ENABLE_RETURNING_CONTENT_DOD */) || (iParam0 != 205 && Global_262145.f_20267 /* Tunable: ENABLE_RETURNING_CONTENT_VEHICLE */))
			{
				return 1;
			}
			return 0;
		}
		return 0;
	}
	if (__LIB_0__.func_891(iParam0))
	{
		if (__LIB_33__.func_164(iParam0))
		{
			return 0;
		}
		return 1;
	}
	iVar2 = __LIB_0__.func_890(iVar0);
	if (iVar2 != -1)
	{
		if (__LIB_7__.func_39(__LIB_0__.func_889(iVar0)))
		{
			return 1;
		}
		return 0;
	}
	iVar3 = __LIB_0__.func_888(iVar0);
	if (iVar3 > 0)
	{
		if (__LIB_18__.func_476(iVar0))
		{
			return 1;
		}
		return 0;
	}
	iVar4 = __LIB_0__.func_887(iVar0);
	if (iVar4 != -1)
	{
		if (__LIB_18__.func_290(iVar0))
		{
			return 1;
		}
		return 0;
	}
	iVar5 = __LIB_0__.func_885(iVar0);
	if (iVar5 != -1)
	{
		if (__LIB_7__.func_36(iVar0))
		{
			return 1;
		}
		return 0;
	}
	iVar6 = __LIB_0__.func_883(iVar0);
	if (iVar6 != -1)
	{
		if (__LIB_7__.func_61(iVar0))
		{
			return 1;
		}
		return 0;
	}
	if ((iVar0 == joaat("firetruk") || iVar0 == joaat("boxville")) || iVar0 == joaat("stockade"))
	{
		if (__LIB_7__.func_284(iVar0))
		{
			return 0;
		}
		return 1;
	}
	iVar7 = __LIB_0__.func_881(iVar0);
	if (iVar7 != -1)
	{
		if (__LIB_7__.func_284(iVar0))
		{
			return 1;
		}
		return 0;
	}
	iVar8 = __LIB_0__.func_880(iVar0);
	if (iVar8 != -1)
	{
		if (__LIB_18__.func_475(iVar0))
		{
			return 1;
		}
		return 0;
	}
	iVar9 = __LIB_0__.func_875(iVar0);
	if (iVar9 != -1)
	{
		if (__LIB_8__.func_508(iVar0))
		{
			return 1;
		}
		return 0;
	}
	iVar10 = __LIB_0__.func_874(iVar0);
	if (iVar10 != -1)
	{
		if (__LIB_18__.func_474(iVar0))
		{
			return 1;
		}
		return 0;
	}
	iVar11 = __LIB_0__.func_870(iVar0);
	if (iVar11 != -1)
	{
		if (__LIB_18__.func_473(iVar0))
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
	iVar0 = __LIB_0__.func_896(iParam0);
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
	if (__LIB_38__.func_98(iParam0->f_388.f_66, -1))
	{
		func_597(iParam0->f_388.f_66, &iVar0);
		if (iVar0 != -1)
		{
			iParam0->f_1 = func_596(1, 0, iParam0->f_388.f_66, iVar0, -1, 0);
			iParam0->f_2 = func_588(1, 0, iParam0->f_388.f_66, iVar0, -1, 0);
			if (iParam0->f_1 > -1 && iParam0->f_2 > -1)
			{
				__LIB_4__.func_587(iParam0, 4);
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
						__LIB_4__.func_587(iParam0, 5);
						return;
					}
					else if (iParam0->f_1 > -1 && iParam0->f_2 > -1)
					{
						__LIB_4__.func_587(iParam0, 4);
						return;
					}
				}
			}
			else
			{
				MISC::CLEAR_BIT(&(iParam0->f_12.f_370), 7);
				__LIB_4__.func_587(iParam0, 5);
				return;
			}
		}
	}
	else if (!__LIB_1__.func_392(iParam0->f_388.f_66) && !VEHICLE::IS_THIS_MODEL_A_BICYCLE(iParam0->f_388.f_66))
	{
		if (__LIB_3__.func_653())
		{
			iVar4 = 0;
			while (iVar4 < 363)
			{
				if (__LIB_8__.func_476(iVar4))
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
				if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/) || __LIB_2__.func_338())
				{
					__LIB_4__.func_587(iParam0, 5);
					return;
				}
				else if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
				{
					iParam0->f_1 = 0;
					iParam0->f_2 = 0;
					__LIB_4__.func_587(iParam0, 4);
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
				if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/) || __LIB_2__.func_338())
				{
					__LIB_4__.func_587(iParam0, 5);
					return;
				}
				else if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
				{
					iParam0->f_1 = 0;
					iParam0->f_2 = 0;
					__LIB_4__.func_587(iParam0, 4);
					return;
				}
			}
		}
		else
		{
			iParam0->f_1 = 0;
			iParam0->f_2 = 0;
			__LIB_4__.func_587(iParam0, 4);
			return;
		}
	}
}

int func_490(var uParam0, int iParam1, var uParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)//Position - 0x5CED5
{
	bool bVar0;
	bool bVar1;
	if ((((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || !__LIB_0__.func_154(PLAYER::PLAYER_ID(), 1, 1)) || __LIB_0__.func_706()) || Global_1574964) || Global_2715699.f_3479.f_32)
	{
		*iParam1 = -1;
		__LIB_18__.func_773(uParam0, iParam5, 0);
		return 1;
	}
	bVar0 = false;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	__LIB_1__.func_304();
	__LIB_0__.func_186();
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
		__LIB_7__.func_287(0, 0, 0, 1);
		HUD::SET_MOUSE_CURSOR_THIS_FRAME();
	}
	MISC::SET_BIT(&(uParam0->f_370), 1);
	if (__LIB_7__.func_161(0, iParam5, 0))
	{
		if (__LIB_0__.func_154(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!BitTest(uParam0->f_370, 0))
			{
				func_542(uParam0, iParam3, bParam4);
				MISC::SET_BIT(&(uParam0->f_370), 0);
				func_536(uParam0, bParam4, bVar1, iParam3, bParam6);
				__LIB_25__.func_745(1, iParam5, 1, 0, 1, -1082130432, 0, 0, -1);
			}
			else if ((!HUD::IS_PAUSE_MENU_ACTIVE() && !__LIB_0__.func_191(8, -1)) && !Global_2714762.f_785.f_5)
			{
				if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
				{
					if (__LIB_2__.func_157())
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
					if (((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) || __LIB_2__.func_351()) || bVar0) || (HUD::IS_WARNING_MESSAGE_ACTIVE() && PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/)))
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT" /* GXT: Filter List */, "HUD_FREEMODE_SOUNDSET", true);
						if (uParam0->f_366 == 0)
						{
							uParam0->f_375 = 0;
							if (uParam0->f_367 >= 0 && uParam0->f_1[uParam0->f_367] >= 0)
							{
								*uParam2 = func_588(1, 0, iParam3, __LIB_8__.func_48(uParam0->f_1[uParam0->f_367], -1), -1, 0);
								if (*uParam2 >= 0)
								{
									__LIB_1__.func_327(*uParam2, iParam1, 1);
									if (*iParam1 < 0)
									{
										*iParam1 = func_596(1, 0, iParam3, 0, -1, 0);
									}
								}
								if (*iParam1 >= 0 && *uParam2 >= 0)
								{
									MISC::CLEAR_BIT(&(uParam0->f_370), 0);
									__LIB_18__.func_773(uParam0, iParam5, 0);
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
							__LIB_4__.func_222(-1);
							__LIB_1__.func_344(176, "BB_YES" /* GXT: Yes */, -1);
							__LIB_1__.func_344(177, "BB_NO" /* GXT: No */, -1);
							MISC::SET_BIT(&(uParam0->f_373), 2);
						}
						else if (uParam0->f_368 >= 0)
						{
							*uParam2 = uParam0->f_1[uParam0->f_368];
							__LIB_1__.func_327(*uParam2, iParam1, 1);
							if (*iParam1 < 0)
							{
								*iParam1 = func_596(1, 0, iParam3, 0, -1, 0);
							}
							if (*iParam1 >= 0 && *uParam2 >= 0)
							{
								MISC::CLEAR_BIT(&(uParam0->f_370), 0);
								__LIB_18__.func_773(uParam0, iParam5, 0);
							}
							else
							{
								__LIB_18__.func_773(uParam0, iParam5, 0);
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
					if ((((__LIB_2__.func_350() || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 238 /*INPUT_CURSOR_CANCEL*/)) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/)) || (__LIB_2__.func_338() && Global_4539961 > -1)) || (HUD::IS_WARNING_MESSAGE_ACTIVE() && PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/)))
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "CANCEL", "HUD_FREEMODE_SOUNDSET", true);
						if (uParam0->f_366 == 0)
						{
							func_536(uParam0, bParam4, bVar1, iParam3, bParam6);
							__LIB_25__.func_745(1, iParam5, 1, 0, 1, -1082130432, 0, 0, -1);
							__LIB_18__.func_773(uParam0, iParam5, 1);
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
							__LIB_4__.func_222(-1);
							__LIB_1__.func_344(176, "BB_SELECT" /* GXT: Select */, -1);
							__LIB_1__.func_344(177, "BB_BACK" /* GXT: Back */, -1);
							MISC::CLEAR_BIT(&(uParam0->f_373), 2);
						}
						MISC::SET_BIT(&(uParam0->f_373), 1);
					}
				}
				else if ((!PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/) && !PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 238 /*INPUT_CURSOR_CANCEL*/)) && !__LIB_2__.func_350())
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
							__LIB_0__.func_579(&(uParam0->f_371));
						}
					}
					else if (__LIB_7__.func_977(uParam0, 172))
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
							__LIB_0__.func_579(&(uParam0->f_371));
						}
					}
					else if (__LIB_7__.func_977(uParam0, 173))
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
				func_536(uParam0, bParam4, bVar1, iParam3, bParam6);
				if (!BitTest(uParam0->f_373, 2) && !HUD::IS_WARNING_MESSAGE_ACTIVE())
				{
					__LIB_25__.func_745(1, iParam5, 1, 0, 1, -1082130432, 0, 0, -1);
				}
			}
		}
	}
	return 0;
}

void func_536(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4)//Position - 0x62138
{
	if (!bParam2)
	{
		if (uParam0->f_366 == 0)
		{
			if (uParam0->f_1[uParam0->f_367] == 12)
			{
				if (!bParam4)
				{
					__LIB_1__.func_342("DEL_VEH_SEL1ac" /* GXT: Select to use this property to store aircraft. */, 100, 0);
				}
				else
				{
					__LIB_1__.func_342("CAS_VEH_SELLV" /* GXT: Select to use this property to store ~a~. */, 0, 0);
					__LIB_2__.func_353(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iParam3));
				}
			}
			else if (!bParam4)
			{
				__LIB_1__.func_342("DEL_VEH_SEL1" /* GXT: Select to use this property to store vehicle. */, 100, 0);
			}
			else
			{
				__LIB_1__.func_342("CAS_VEH_SELLV" /* GXT: Select to use this property to store ~a~. */, 0, 0);
				__LIB_2__.func_353(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iParam3));
			}
		}
		else if (BitTest(uParam0->f_373, 2))
		{
			if (func_537(uParam0->f_1[uParam0->f_367], 0, -1, 1))
			{
				HUD::SET_WARNING_MESSAGE_WITH_HEADER("PLYVEH_CM_CONT" /* GXT: Replace? */, "PLYVEH_CM_1Bac" /* GXT: Your aircraft storage is full. Do you want to replace an existing saved aircraft? */, 36, 0, false, -1, 0, 0, true, 0);
			}
			else
			{
				HUD::SET_WARNING_MESSAGE_WITH_HEADER("PLYVEH_CM_CONT" /* GXT: Replace? */, "PLYVEH_CM_1B" /* GXT: Your vehicle storage is full. Do you want to replace an existing saved vehicle? */, 36, 0, false, -1, 0, 0, true, 0);
			}
		}
		else if (BitTest(uParam0->f_365, uParam0->f_368))
		{
			if (func_537(uParam0->f_1[uParam0->f_367], 0, -1, 1))
			{
				__LIB_1__.func_342("DEL_VEH_SEL2ac" /* GXT: There is no aircraft stored in this position. */, 100, 0);
			}
			else
			{
				__LIB_1__.func_342("DEL_VEH_SEL2" /* GXT: There is no vehicle stored in this position. */, 100, 0);
			}
		}
		else if (bParam1)
		{
			if (func_537(uParam0->f_1[uParam0->f_367], 0, -1, 0))
			{
				__LIB_1__.func_342("MP_PROP_SC_3ac" /* GXT: Select the aircraft you want to replace. */, 100, 0);
			}
			else
			{
				__LIB_1__.func_342("MP_PROP_SC_3" /* GXT: Select a vehicle to replace. */, 100, 0);
			}
		}
		else if (func_537(uParam0->f_1[uParam0->f_367], 0, -1, 1))
		{
			__LIB_1__.func_342("MP_PROP_SC_1ac" /* GXT: This is the currently stored aircraft. */, 100, 0);
		}
		else
		{
			__LIB_1__.func_342("MP_PROP_SC_1" /* GXT: This is the currently stored vehicle. */, 100, 0);
		}
	}
}

int func_537(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x622A7
{
	int iVar0;
	if (bParam1)
	{
		__LIB_4__.func_516(iParam0, &iVar0, iParam2);
	}
	else
	{
		__LIB_1__.func_252(iParam0, &iVar0);
	}
	if (iVar0 >= 0)
	{
		if (bParam3)
		{
		}
		if (iVar0 >= __LIB_18__.func_704(12) && iVar0 < __LIB_25__.func_172(12))
		{
			return 1;
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
	__LIB_1__.func_193(0, 0);
	if (bParam2)
	{
		__LIB_8__.func_441(__LIB_4__.func_578(), 0);
	}
	__LIB_1__.func_318(1, 1, 0, 0, 0);
	__LIB_1__.func_317(1, 2, 1, 1, 1);
	__LIB_3__.func_630(0, 0, 0, 0, 0);
	bVar2 = false;
	bVar7 = __LIB_1__.func_376(iParam1);
	iVar11 = 1;
	switch (uParam0->f_366)
	{
		case 0:
			uParam0->f_375 = 0;
			__LIB_1__.func_319("DEL_VEH_SEL0" /* GXT: SELECT PROPERTY */);
			iVar1 = 0;
			while (iVar1 < 29)
			{
				iVar3 = __LIB_8__.func_48(iVar1, -1);
				if ((iVar3 > 0 && __LIB_2__.func_339(iVar3)) && __LIB_25__.func_410(iVar1))
				{
					if (!__LIB_7__.func_283(iParam1, iVar1))
					{
					}
					else
					{
						Var14 = { Global_1312193[iVar3 /*1951*/].f_16 };
						if (iVar3 == 116)
						{
							StringCopy(&Var14, __LIB_2__.func_362(__LIB_1__.func_40(PLAYER::PLAYER_ID())), 16);
						}
						if (iVar3 == 117)
						{
							StringCopy(&Var14, __LIB_2__.func_361(__LIB_1__.func_374(PLAYER::PLAYER_ID())), 16);
						}
						if (iVar3 == 118)
						{
							StringCopy(&Var14, "MP_BHUB_CLUBG" /* GXT: Nightclub Service Entrance */, 16);
						}
						if (iVar3 == 119)
						{
							StringCopy(&Var14, __LIB_2__.func_360(1), 16);
						}
						if (iVar3 == 120)
						{
							StringCopy(&Var14, __LIB_2__.func_360(2), 16);
						}
						if (iVar3 == 121)
						{
							StringCopy(&Var14, __LIB_2__.func_360(3), 16);
						}
						if (iVar3 == 122)
						{
							StringCopy(&Var14, __LIB_2__.func_359(1), 16);
						}
						if (iVar3 == 123)
						{
							StringCopy(&Var14, __LIB_2__.func_359(2), 16);
						}
						if (iVar3 == 124)
						{
							StringCopy(&Var14, __LIB_2__.func_359(3), 16);
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
						if (!__LIB_4__.func_576())
						{
							if (!__LIB_4__.func_575() && !__LIB_4__.func_574(iVar3))
							{
								__LIB_18__.func_477(iVar0, &Var14, 0, 1, 0, 0, 0);
							}
							else
							{
								Var6 = { Var14 };
								StringConCat(&Var6, "S", 16);
								__LIB_18__.func_477(iVar0, &Var6, 0, 1, 0, 0, 0);
							}
						}
						else
						{
							__LIB_18__.func_477(iVar0, "PIM_DNAME" /* GXT: ~a~ */, 1, 1, 0, 0, 0);
							__LIB_26__.func_404(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&Var14), 0, 1, 1);
						}
						uParam0->f_1[iVar0] = iVar1;
						iVar0++;
					}
				}
				iVar1++;
			}
			if (((((__LIB_1__.func_556(5396, -1, 0) != 0 && __LIB_0__.func_228(15270, -1) == 7) && !Global_262145.f_21126 /* Tunable: DISABLE_STORE_PV */) && __LIB_35__.func_566(iParam1, 156)) && !VEHICLE::IS_THIS_MODEL_A_HELI(iParam1)) && !VEHICLE::IS_THIS_MODEL_A_PLANE(iParam1))
			{
				__LIB_18__.func_477(iVar0, __LIB_2__.func_358(0), 0, 1, 0, 0, 0);
				uParam0->f_1[iVar0] = __LIB_2__.func_357(0);
				iVar0++;
			}
			if (__LIB_2__.func_276(-1) && __LIB_35__.func_566(iParam1, 223))
			{
				__LIB_18__.func_477(iVar0, __LIB_2__.func_358(2), 0, 1, 0, 0, 0);
				uParam0->f_1[iVar0] = __LIB_2__.func_357(2);
				iVar0++;
			}
			if (__LIB_2__.func_275(-1) && __LIB_35__.func_566(iParam1, 278))
			{
				__LIB_18__.func_477(iVar0, __LIB_2__.func_358(3), 0, 1, 0, 0, 0);
				uParam0->f_1[iVar0] = __LIB_2__.func_357(3);
				iVar0++;
			}
			uParam0->f_369 = iVar0;
			__LIB_2__.func_183(uParam0->f_367, 1, 1);
			break;
		case 1:
			if (VEHICLE::IS_THIS_MODEL_A_HELI(iParam1) || VEHICLE::IS_THIS_MODEL_A_PLANE(iParam1))
			{
				__LIB_1__.func_319("DEL_VEH_SEL3ac" /* GXT: Select Aircraft Position */);
			}
			else
			{
				__LIB_1__.func_319("DEL_VEH_SEL3" /* GXT: Select Vehicle Position */);
			}
			uParam0->f_365 = 0;
			iVar4 = __LIB_18__.func_704(uParam0->f_375);
			iVar5 = (10 + __LIB_18__.func_704(uParam0->f_375));
			if (uParam0->f_375 >= 29)
			{
				iVar10 = __LIB_1__.func_187(uParam0->f_375);
				iVar1 = 0;
				while (iVar1 < __LIB_4__.func_573(iVar10))
				{
					iVar8 = (iVar1 + iVar4);
					if (!bVar7)
					{
						if (__LIB_1__.func_322(iVar8))
						{
							bVar2 = true;
						}
					}
					else if (!__LIB_1__.func_322(iVar8))
					{
						bVar2 = true;
					}
					if (!__LIB_35__.func_566(iParam1, iVar8))
					{
						bVar2 = true;
					}
					if (!bVar2)
					{
						__LIB_1__.func_327(iVar8, &iVar9, 1);
						if ((iVar9 >= 0 && Global_1585857[iVar9 /*142*/].f_66 != 0) && STREAMING::IS_MODEL_IN_CDIMAGE(Global_1585857[iVar9 /*142*/].f_66))
						{
							iVar11 = 1;
							StringCopy(&Var12, "", 24);
							if (__LIB_2__.func_356(&(Global_1585857[iVar9 /*142*/])))
							{
								iVar11++;
							}
							if (__LIB_2__.func_355(Global_1585857[iVar9 /*142*/].f_66, Global_1585857[iVar9 /*142*/].f_77, Global_1585857[iVar9 /*142*/].f_9[10]) && __LIB_2__.func_354(Global_1585857[iVar9 /*142*/].f_66))
							{
								iVar11++;
							}
							Var13 = { __LIB_4__.func_518(-1, iVar8, 1) };
							if (BitTest(Global_1585857[iVar9 /*142*/].f_103, 1))
							{
								if (BitTest(Global_1585857[iVar9 /*142*/].f_103, 2) && !bVar7)
								{
									StringCopy(&Var12, "MP_MAN_VEH_S0" /* GXT: ~a~ ~a~ (Destroyed) */, 24);
									StringIntConCat(&Var12, iVar11, 24);
									__LIB_18__.func_477(iVar0, &Var12, iVar11, 1, 0, 0, 0);
									if (MISC::IS_STRING_NULL_OR_EMPTY(&Var13))
									{
										__LIB_26__.func_403(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_1585857[iVar9 /*142*/].f_66), 0);
									}
									else
									{
										__LIB_32__.func_686(&Var13, 0, 0, 1);
									}
									if (__LIB_2__.func_356(&(Global_1585857[iVar9 /*142*/])))
									{
										__LIB_26__.func_403("VEH_LIVERY" /* GXT: (Livery) */, 0);
									}
									if (__LIB_2__.func_355(Global_1585857[iVar9 /*142*/].f_66, Global_1585857[iVar9 /*142*/].f_77, Global_1585857[iVar9 /*142*/].f_9[10]) && __LIB_2__.func_354(Global_1585857[iVar9 /*142*/].f_66))
									{
										__LIB_26__.func_403("VEH_TOPL" /* GXT: Topless */, 0);
									}
									uParam0->f_1[iVar0] = iVar8;
									iVar0++;
								}
								else
								{
									__LIB_18__.func_477(iVar0, "MP_MAN_VEH_S" /* GXT: Empty */, 0, 1, 0, 0, 0);
									uParam0->f_1[iVar0] = iVar8;
									MISC::SET_BIT(&(uParam0->f_365), iVar0);
									iVar0++;
								}
							}
							else if (bVar7)
							{
								if (__LIB_1__.func_376(Global_1585857[iVar9 /*142*/].f_66))
								{
									if (BitTest(Global_1585857[iVar9 /*142*/].f_103, 6))
									{
										StringCopy(&Var12, "MP_MAN_VEH_S1" /* GXT: ~a~ ~a~ (Impounded) */, 24);
										StringIntConCat(&Var12, iVar11, 24);
										__LIB_18__.func_477(iVar0, &Var12, iVar11, 1, 0, 0, 0);
										if (MISC::IS_STRING_NULL_OR_EMPTY(&Var13))
										{
											__LIB_26__.func_403(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_1585857[iVar9 /*142*/].f_66), 0);
										}
										else
										{
											__LIB_32__.func_686(&Var13, 0, 0, 1);
										}
										if (__LIB_2__.func_356(&(Global_1585857[iVar9 /*142*/])))
										{
											__LIB_26__.func_403("VEH_LIVERY" /* GXT: (Livery) */, 0);
										}
										if (__LIB_2__.func_355(Global_1585857[iVar9 /*142*/].f_66, Global_1585857[iVar9 /*142*/].f_77, Global_1585857[iVar9 /*142*/].f_9[10]) && __LIB_2__.func_354(Global_1585857[iVar9 /*142*/].f_66))
										{
											__LIB_26__.func_403("VEH_TOPL" /* GXT: Topless */, 0);
										}
									}
									else
									{
										StringCopy(&Var12, "PIL_MP_VEH_0" /* GXT: ~a~ ~a~ */, 24);
										StringIntConCat(&Var12, iVar11, 24);
										__LIB_18__.func_477(iVar0, &Var12, iVar11, 1, 0, 0, 0);
										if (MISC::IS_STRING_NULL_OR_EMPTY(&Var13))
										{
											__LIB_26__.func_403(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_1585857[iVar9 /*142*/].f_66), 0);
										}
										else
										{
											__LIB_32__.func_686(&Var13, 0, 0, 1);
										}
										if (__LIB_2__.func_356(&(Global_1585857[iVar9 /*142*/])))
										{
											__LIB_26__.func_403("VEH_LIVERY" /* GXT: (Livery) */, 0);
										}
										if (__LIB_2__.func_355(Global_1585857[iVar9 /*142*/].f_66, Global_1585857[iVar9 /*142*/].f_77, Global_1585857[iVar9 /*142*/].f_9[10]) && __LIB_2__.func_354(Global_1585857[iVar9 /*142*/].f_66))
										{
											__LIB_26__.func_403("VEH_TOPL" /* GXT: Topless */, 0);
										}
									}
									uParam0->f_1[iVar0] = iVar8;
									iVar0++;
								}
							}
							else if (!__LIB_1__.func_376(Global_1585857[iVar9 /*142*/].f_66))
							{
								if (BitTest(Global_1585857[iVar9 /*142*/].f_103, 6))
								{
									StringCopy(&Var12, "MP_MAN_VEH_S1" /* GXT: ~a~ ~a~ (Impounded) */, 24);
									StringIntConCat(&Var12, iVar11, 24);
									__LIB_18__.func_477(iVar0, &Var12, iVar11, 1, 0, 0, 0);
									if (MISC::IS_STRING_NULL_OR_EMPTY(&Var13))
									{
										__LIB_26__.func_403(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_1585857[iVar9 /*142*/].f_66), 0);
									}
									else
									{
										__LIB_32__.func_686(&Var13, 0, 0, 1);
									}
									if (__LIB_2__.func_356(&(Global_1585857[iVar9 /*142*/])))
									{
										__LIB_26__.func_403("VEH_LIVERY" /* GXT: (Livery) */, 0);
									}
									if (__LIB_2__.func_355(Global_1585857[iVar9 /*142*/].f_66, Global_1585857[iVar9 /*142*/].f_77, Global_1585857[iVar9 /*142*/].f_9[10]) && __LIB_2__.func_354(Global_1585857[iVar9 /*142*/].f_66))
									{
										__LIB_26__.func_403("VEH_TOPL" /* GXT: Topless */, 0);
									}
								}
								else
								{
									StringCopy(&Var12, "PIL_MP_VEH_0" /* GXT: ~a~ ~a~ */, 24);
									StringIntConCat(&Var12, iVar11, 24);
									__LIB_18__.func_477(iVar0, &Var12, iVar11, 1, 0, 0, 0);
									if (MISC::IS_STRING_NULL_OR_EMPTY(&Var13))
									{
										__LIB_26__.func_403(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_1585857[iVar9 /*142*/].f_66), 0);
									}
									else
									{
										__LIB_32__.func_686(&Var13, 0, 0, 1);
									}
									if (__LIB_2__.func_356(&(Global_1585857[iVar9 /*142*/])))
									{
										__LIB_26__.func_403("VEH_LIVERY" /* GXT: (Livery) */, 0);
									}
									if (__LIB_2__.func_355(Global_1585857[iVar9 /*142*/].f_66, Global_1585857[iVar9 /*142*/].f_77, Global_1585857[iVar9 /*142*/].f_9[10]) && __LIB_2__.func_354(Global_1585857[iVar9 /*142*/].f_66))
									{
										__LIB_26__.func_403("VEH_TOPL" /* GXT: Topless */, 0);
									}
								}
								uParam0->f_1[iVar0] = iVar8;
								iVar0++;
							}
						}
						else
						{
							__LIB_18__.func_477(iVar0, "MP_MAN_VEH_S" /* GXT: Empty */, 0, 1, 0, 0, 0);
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
				iVar3 = __LIB_8__.func_48(uParam0->f_375, -1);
				iVar1 = 0;
				while (iVar1 < __LIB_18__.func_591(uParam0->f_375, -1, 1))
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
						if (iVar8 >= iVar5 && __LIB_1__.func_322(iVar8))
						{
							bVar2 = true;
						}
					}
					else if (iVar8 < iVar5)
					{
						bVar2 = true;
					}
					if (!__LIB_25__.func_466(iVar8, iVar3, uParam0->f_375))
					{
						bVar2 = true;
					}
					if (!__LIB_35__.func_566(iParam1, iVar8))
					{
						bVar2 = true;
					}
					if (!bVar2)
					{
						__LIB_1__.func_327(iVar8, &iVar9, 1);
						if ((iVar9 >= 0 && Global_1585857[iVar9 /*142*/].f_66 != 0) && STREAMING::IS_MODEL_IN_CDIMAGE(Global_1585857[iVar9 /*142*/].f_66))
						{
							iVar11 = 1;
							StringCopy(&Var12, "", 24);
							if (__LIB_2__.func_356(&(Global_1585857[iVar9 /*142*/])))
							{
								iVar11++;
							}
							if (__LIB_2__.func_355(Global_1585857[iVar9 /*142*/].f_66, Global_1585857[iVar9 /*142*/].f_77, Global_1585857[iVar9 /*142*/].f_9[10]) && __LIB_2__.func_354(Global_1585857[iVar9 /*142*/].f_66))
							{
								iVar11++;
							}
							Var13 = { __LIB_4__.func_518(-1, iVar8, 1) };
							if (BitTest(Global_1585857[iVar9 /*142*/].f_103, 1))
							{
								if (BitTest(Global_1585857[iVar9 /*142*/].f_103, 2) && !bVar7)
								{
									StringCopy(&Var12, "MP_MAN_VEH_S0" /* GXT: ~a~ ~a~ (Destroyed) */, 24);
									StringIntConCat(&Var12, iVar11, 24);
									__LIB_18__.func_477(iVar0, &Var12, iVar11, 1, 0, 0, 0);
									if (MISC::IS_STRING_NULL_OR_EMPTY(&Var13))
									{
										__LIB_26__.func_403(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_1585857[iVar9 /*142*/].f_66), 0);
									}
									else
									{
										__LIB_32__.func_686(&Var13, 0, 0, 1);
									}
									if (__LIB_2__.func_356(&(Global_1585857[iVar9 /*142*/])))
									{
										__LIB_26__.func_403("VEH_LIVERY" /* GXT: (Livery) */, 0);
									}
									if (__LIB_2__.func_355(Global_1585857[iVar9 /*142*/].f_66, Global_1585857[iVar9 /*142*/].f_77, Global_1585857[iVar9 /*142*/].f_9[10]) && __LIB_2__.func_354(Global_1585857[iVar9 /*142*/].f_66))
									{
										__LIB_26__.func_403("VEH_TOPL" /* GXT: Topless */, 0);
									}
									uParam0->f_1[iVar0] = iVar8;
									iVar0++;
								}
								else
								{
									__LIB_18__.func_477(iVar0, "MP_MAN_VEH_S" /* GXT: Empty */, 0, 1, 0, 0, 0);
									uParam0->f_1[iVar0] = iVar8;
									MISC::SET_BIT(&(uParam0->f_365), iVar0);
									iVar0++;
								}
							}
							else if (bVar7)
							{
								if (__LIB_1__.func_376(Global_1585857[iVar9 /*142*/].f_66))
								{
									if (BitTest(Global_1585857[iVar9 /*142*/].f_103, 6))
									{
										StringCopy(&Var12, "MP_MAN_VEH_S1" /* GXT: ~a~ ~a~ (Impounded) */, 24);
										StringIntConCat(&Var12, iVar11, 24);
										__LIB_18__.func_477(iVar0, &Var12, iVar11, 1, 0, 0, 0);
										if (MISC::IS_STRING_NULL_OR_EMPTY(&Var13))
										{
											__LIB_26__.func_403(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_1585857[iVar9 /*142*/].f_66), 0);
										}
										else
										{
											__LIB_32__.func_686(&Var13, 0, 0, 1);
										}
										if (__LIB_2__.func_356(&(Global_1585857[iVar9 /*142*/])))
										{
											__LIB_26__.func_403("VEH_LIVERY" /* GXT: (Livery) */, 0);
										}
										if (__LIB_2__.func_355(Global_1585857[iVar9 /*142*/].f_66, Global_1585857[iVar9 /*142*/].f_77, Global_1585857[iVar9 /*142*/].f_9[10]) && __LIB_2__.func_354(Global_1585857[iVar9 /*142*/].f_66))
										{
											__LIB_26__.func_403("VEH_TOPL" /* GXT: Topless */, 0);
										}
									}
									else
									{
										StringCopy(&Var12, "PIL_MP_VEH_0" /* GXT: ~a~ ~a~ */, 24);
										StringIntConCat(&Var12, iVar11, 24);
										__LIB_18__.func_477(iVar0, &Var12, iVar11, 1, 0, 0, 0);
										if (MISC::IS_STRING_NULL_OR_EMPTY(&Var13))
										{
											__LIB_26__.func_403(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_1585857[iVar9 /*142*/].f_66), 0);
										}
										else
										{
											__LIB_32__.func_686(&Var13, 0, 0, 1);
										}
										if (__LIB_2__.func_356(&(Global_1585857[iVar9 /*142*/])))
										{
											__LIB_26__.func_403("VEH_LIVERY" /* GXT: (Livery) */, 0);
										}
										if (__LIB_2__.func_355(Global_1585857[iVar9 /*142*/].f_66, Global_1585857[iVar9 /*142*/].f_77, Global_1585857[iVar9 /*142*/].f_9[10]) && __LIB_2__.func_354(Global_1585857[iVar9 /*142*/].f_66))
										{
											__LIB_26__.func_403("VEH_TOPL" /* GXT: Topless */, 0);
										}
									}
									uParam0->f_1[iVar0] = iVar8;
									iVar0++;
								}
							}
							else if (!__LIB_1__.func_376(Global_1585857[iVar9 /*142*/].f_66))
							{
								if (BitTest(Global_1585857[iVar9 /*142*/].f_103, 6))
								{
									StringCopy(&Var12, "MP_MAN_VEH_S1" /* GXT: ~a~ ~a~ (Impounded) */, 24);
									StringIntConCat(&Var12, iVar11, 24);
									__LIB_18__.func_477(iVar0, &Var12, iVar11, 1, 0, 0, 0);
									if (MISC::IS_STRING_NULL_OR_EMPTY(&Var13))
									{
										__LIB_26__.func_403(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_1585857[iVar9 /*142*/].f_66), 0);
									}
									else
									{
										__LIB_32__.func_686(&Var13, 0, 0, 1);
									}
									if (__LIB_2__.func_356(&(Global_1585857[iVar9 /*142*/])))
									{
										__LIB_26__.func_403("VEH_LIVERY" /* GXT: (Livery) */, 0);
									}
									if (__LIB_2__.func_355(Global_1585857[iVar9 /*142*/].f_66, Global_1585857[iVar9 /*142*/].f_77, Global_1585857[iVar9 /*142*/].f_9[10]) && __LIB_2__.func_354(Global_1585857[iVar9 /*142*/].f_66))
									{
										__LIB_26__.func_403("VEH_TOPL" /* GXT: Topless */, 0);
									}
								}
								else
								{
									StringCopy(&Var12, "PIL_MP_VEH_0" /* GXT: ~a~ ~a~ */, 24);
									StringIntConCat(&Var12, iVar11, 24);
									__LIB_18__.func_477(iVar0, &Var12, iVar11, 1, 0, 0, 0);
									if (MISC::IS_STRING_NULL_OR_EMPTY(&Var13))
									{
										__LIB_26__.func_403(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_1585857[iVar9 /*142*/].f_66), 0);
									}
									else
									{
										__LIB_32__.func_686(&Var13, 0, 0, 1);
									}
									if (__LIB_2__.func_356(&(Global_1585857[iVar9 /*142*/])))
									{
										__LIB_26__.func_403("VEH_LIVERY" /* GXT: (Livery) */, 0);
									}
									if (__LIB_2__.func_355(Global_1585857[iVar9 /*142*/].f_66, Global_1585857[iVar9 /*142*/].f_77, Global_1585857[iVar9 /*142*/].f_9[10]) && __LIB_2__.func_354(Global_1585857[iVar9 /*142*/].f_66))
									{
										__LIB_26__.func_403("VEH_TOPL" /* GXT: Topless */, 0);
									}
								}
								uParam0->f_1[iVar0] = iVar8;
								iVar0++;
							}
						}
						else
						{
							__LIB_18__.func_477(iVar0, "MP_MAN_VEH_S" /* GXT: Empty */, 0, 1, 0, 0, 0);
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
			__LIB_2__.func_183(uParam0->f_368, 1, 1);
			break;
	}
	__LIB_4__.func_222(-1);
	__LIB_1__.func_344(176, "BB_SELECT" /* GXT: Select */, -1);
	__LIB_1__.func_344(177, "BB_BACK" /* GXT: Back */, -1);
}

int func_588(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, bool bParam5)//Position - 0x65277
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	if (Global_262145.f_10629 /* Tunable: MPSV_DISABLE_DISPLAY_SLOTS */)
	{
		if (bParam5)
		{
			return func_593(iParam0, bParam1, iParam2, iParam3, iParam4, 0);
		}
		else
		{
			return func_596(iParam0, bParam1, iParam2, iParam3, iParam4, 0);
		}
	}
	if (__LIB_18__.func_376(iParam3, 0, 0))
	{
		iParam3 = __LIB_2__.func_363(iParam3);
	}
	if (!__LIB_1__.func_392(iParam2) && __LIB_3__.func_812(iParam2, 0))
	{
		iVar6 = __LIB_19__.func_123(iParam2);
		if (iVar6 >= 0)
		{
			if (bParam5)
			{
				__LIB_4__.func_579(iVar6, &iVar7, iParam4);
			}
			else
			{
				__LIB_1__.func_327(iVar6, &iVar7, 1);
			}
			if (iVar7 >= 0)
			{
				if (bParam5)
				{
					if (__LIB_1__.func_556(__LIB_1__.func_368(4, iVar7), iParam4, 0) == 0)
					{
						return iVar7;
					}
					else
					{
						iVar5 = __LIB_1__.func_556(__LIB_1__.func_368(1, iVar7), iParam4, 0);
						if (bParam1)
						{
							if (BitTest(iVar5, 0))
							{
								return iVar7;
							}
						}
					}
				}
				else if (Global_1585857[iVar7 /*142*/].f_66 == 0)
				{
					return iVar6;
				}
				else if (bParam1)
				{
					if (BitTest(Global_1585857[iVar7 /*142*/].f_103, 0))
					{
						return iVar6;
					}
				}
			}
			else
			{
				return iVar6;
			}
		}
		return -1;
	}
	if (((__LIB_1__.func_556(5396, iParam4, 0) != 0 && __LIB_0__.func_228(15270, iParam4) == 7) && !Global_262145.f_21126 /* Tunable: DISABLE_STORE_PV */) && __LIB_35__.func_566(iParam2, 156))
	{
		if ((iParam3 == 0 || iParam3 == -1) || iParam3 == 1234)
		{
			iVar6 = __LIB_35__.func_628(156, iParam0, bParam1, iParam2, iParam4, bParam5);
			if (iVar6 != -1)
			{
				return iVar6;
			}
		}
	}
	if (__LIB_2__.func_276(iParam4) && __LIB_35__.func_566(iParam2, 223))
	{
		if ((iParam3 == 0 || iParam3 == -1) || iParam3 == 1236)
		{
			iVar6 = __LIB_35__.func_628(223, iParam0, bParam1, iParam2, iParam4, bParam5);
			if (iVar6 != -1)
			{
				return iVar6;
			}
		}
	}
	if (__LIB_2__.func_275(iParam4) && __LIB_35__.func_566(iParam2, 278))
	{
		if ((iParam3 == 0 || iParam3 == -1) || iParam3 == 1238)
		{
			iVar6 = __LIB_35__.func_628(278, iParam0, bParam1, iParam2, iParam4, bParam5);
			if (iVar6 != -1)
			{
				return iVar6;
			}
		}
	}
	iVar1 = 0;
	while (iVar1 < 29)
	{
		if (__LIB_25__.func_472(iVar1))
		{
		}
		else if (__LIB_8__.func_48(iVar1, iParam4) >= Global_1312193)
		{
			return -1;
		}
		else if (__LIB_8__.func_48(iVar1, iParam4) > 0 && __LIB_8__.func_48(iVar1, iParam4) <= 128)
		{
			iVar2 = 0;
			if ((iParam3 == 0 || iParam3 == -1) || iParam3 == __LIB_8__.func_48(iVar1, iParam4))
			{
				iVar4 = Global_1312193[__LIB_8__.func_48(iVar1, iParam4) /*1951*/].f_33;
				if (__LIB_8__.func_48(iVar1, iParam4) == 116)
				{
					iVar4 = 20;
				}
				else if (__LIB_8__.func_48(iVar1, iParam4) == 117)
				{
					iVar4 = 7;
				}
				else if (__LIB_8__.func_48(iVar1, iParam4) == 118)
				{
					iVar4 = 1;
				}
				else if ((__LIB_8__.func_48(iVar1, iParam4) == 119 || __LIB_8__.func_48(iVar1, iParam4) == 120) || __LIB_8__.func_48(iVar1, iParam4) == 121)
				{
					iVar4 = 10;
				}
				else if ((__LIB_8__.func_48(iVar1, iParam4) == 122 || __LIB_8__.func_48(iVar1, iParam4) == 123) || __LIB_8__.func_48(iVar1, iParam4) == 124)
				{
					iVar4 = 10;
				}
				else if (__LIB_8__.func_48(iVar1, iParam4) == 125)
				{
					iVar4 = 10;
				}
				else if (__LIB_8__.func_48(iVar1, iParam4) == 126)
				{
					iVar4 = 10;
				}
				else if (__LIB_8__.func_48(iVar1, iParam4) == 127)
				{
					iVar4 = 10;
				}
				else if (__LIB_8__.func_48(iVar1, iParam4) == 128)
				{
					iVar4 = 20;
				}
				if (__LIB_1__.func_376(iParam2))
				{
					if (iVar4 == 10)
					{
						iVar3 = 3;
					}
					else if (iVar4 == 6)
					{
						iVar3 = 2;
					}
					else
					{
						iVar3 = 1;
					}
					iVar2 = 10;
				}
				else
				{
					iVar3 = iVar4;
					iVar2 = 0;
				}
				iVar2 = (iVar2 + __LIB_18__.func_704(iVar1));
				iVar7 = -1;
				iVar6 = -1;
				switch (iParam0)
				{
					case 0:
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar7 = -1;
							iVar6 = (iVar2 + iVar0);
							if (__LIB_25__.func_466(iVar6, __LIB_8__.func_48(iVar1, iParam4), iVar1) && __LIB_35__.func_566(iParam2, iVar6))
							{
								if (bParam5)
								{
									__LIB_4__.func_579(iVar6, &iVar7, iParam4);
								}
								else
								{
									__LIB_1__.func_327(iVar6, &iVar7, 1);
								}
								if (iVar7 >= 0)
								{
									if (bParam5)
									{
										if (__LIB_1__.func_556(__LIB_1__.func_368(4, iVar7), iParam4, 0) == 0)
										{
											return iVar7;
										}
										else
										{
											iVar5 = __LIB_1__.func_556(__LIB_1__.func_368(1, iVar7), iParam4, 0);
											if (bParam1)
											{
												if (BitTest(iVar5, 0))
												{
													return iVar7;
												}
											}
										}
									}
									else if (Global_1585857[iVar7 /*142*/].f_66 == 0)
									{
										return iVar6;
									}
									else if (bParam1)
									{
										if (BitTest(Global_1585857[iVar7 /*142*/].f_103, 0))
										{
											return iVar6;
										}
									}
								}
								else
								{
									return iVar6;
								}
							}
							iVar0++;
						}
						break;
					case 1:
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar7 = -1;
							iVar6 = (iVar2 + iVar0);
							if (__LIB_25__.func_466(iVar6, __LIB_8__.func_48(iVar1, iParam4), iVar1) && __LIB_35__.func_566(iParam2, iVar6))
							{
								if (bParam5)
								{
									__LIB_4__.func_579(iVar6, &iVar7, iParam4);
								}
								else
								{
									__LIB_1__.func_327(iVar6, &iVar7, 1);
								}
								if (iVar7 >= 0)
								{
									if (bParam5)
									{
										if (__LIB_1__.func_556(__LIB_1__.func_368(4, iVar7), iParam4, 0) == 0)
										{
											return iVar6;
										}
									}
									else if (Global_1585857[iVar7 /*142*/].f_66 == 0)
									{
										return iVar6;
									}
								}
								else
								{
									return iVar6;
								}
							}
							iVar0++;
						}
						if (bParam1)
						{
							iVar0 = 0;
							while (iVar0 < iVar3)
							{
								iVar7 = -1;
								iVar6 = (iVar2 + iVar0);
								if (__LIB_25__.func_466(iVar6, __LIB_8__.func_48(iVar1, iParam4), iVar1) && __LIB_35__.func_566(iParam2, iVar6))
								{
									if (bParam5)
									{
										__LIB_4__.func_579(iVar6, &iVar7, iParam4);
									}
									else
									{
										__LIB_1__.func_327(iVar6, &iVar7, 1);
									}
									if (iVar7 >= 0)
									{
										if (bParam5)
										{
											iVar5 = __LIB_1__.func_556(__LIB_1__.func_368(1, iVar7), iParam4, 0);
											if (BitTest(iVar5, 0))
											{
												return iVar6;
											}
										}
										else if (BitTest(Global_1585857[iVar7 /*142*/].f_103, 0))
										{
											return iVar6;
										}
									}
									else
									{
										return iVar6;
									}
								}
								iVar0++;
							}
						}
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar7 = -1;
							iVar6 = (iVar2 + iVar0);
							if (__LIB_25__.func_466(iVar6, __LIB_8__.func_48(iVar1, iParam4), iVar1) && __LIB_35__.func_566(iParam2, iVar6))
							{
								if (bParam5)
								{
									__LIB_4__.func_579(iVar6, &iVar7, iParam4);
								}
								else
								{
									__LIB_1__.func_327(iVar6, &iVar7, 1);
								}
								if (iVar7 >= 0)
								{
									if (bParam5)
									{
										iVar5 = __LIB_1__.func_556(__LIB_1__.func_368(1, iVar7), iParam4, 0);
										if (BitTest(iVar5, 1) && !BitTest(iVar5, 2))
										{
											return iVar6;
										}
									}
									else if (BitTest(Global_1585857[iVar7 /*142*/].f_103, 1) && !BitTest(Global_1585857[iVar7 /*142*/].f_103, 2))
									{
										return iVar6;
									}
								}
								else
								{
									return iVar6;
								}
							}
							iVar0++;
						}
						break;
					case 2:
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar7 = -1;
							iVar6 = (iVar2 + iVar0);
							if (__LIB_25__.func_466(iVar6, __LIB_8__.func_48(iVar1, iParam4), iVar1) && __LIB_35__.func_566(iParam2, iVar6))
							{
								if (bParam5)
								{
									__LIB_4__.func_579(iVar6, &iVar7, iParam4);
								}
								else
								{
									__LIB_1__.func_327(iVar6, &iVar7, 1);
								}
								if (iVar7 >= 0)
								{
									if (bParam5)
									{
										if (__LIB_1__.func_556(__LIB_1__.func_368(4, iVar7), iParam4, 0) == 0)
										{
											return iVar6;
										}
										else
										{
											iVar5 = __LIB_1__.func_556(__LIB_1__.func_368(1, iVar7), iParam4, 0);
											if (bParam1)
											{
												if (BitTest(iVar5, 0))
												{
													return iVar6;
												}
												else if (BitTest(iVar5, 1))
												{
													return iVar6;
												}
											}
											else if (BitTest(iVar5, 1))
											{
												return iVar6;
											}
										}
									}
									else if (Global_1585857[iVar7 /*142*/].f_66 == 0)
									{
										return iVar6;
									}
									else if (bParam1)
									{
										if (BitTest(Global_1585857[iVar7 /*142*/].f_103, 0))
										{
											return iVar6;
										}
										else if (BitTest(Global_1585857[iVar7 /*142*/].f_103, 1))
										{
											return iVar6;
										}
									}
									else if (BitTest(Global_1585857[iVar7 /*142*/].f_103, 1))
									{
										return iVar6;
									}
								}
								else
								{
									return iVar6;
								}
							}
							iVar0++;
						}
						break;
					}
				}
		}
		iVar1++;
	}
	return -1;
}

int func_593(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x65EB3
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	bVar6 = __LIB_0__.func_112();
	bVar6 = true;
	if (__LIB_18__.func_376(iParam3, 0, 0))
	{
		iParam3 = __LIB_2__.func_363(iParam3);
	}
	if (!__LIB_1__.func_392(iParam2) && __LIB_3__.func_812(iParam2, 0))
	{
		iVar7 = __LIB_19__.func_123(iParam2);
		return __LIB_7__.func_969(iVar7, iParam0, bParam1, iParam2, 1, iParam4, iParam5);
	}
	iVar1 = 0;
	while (iVar1 < 29)
	{
		if ((bVar6 || __LIB_8__.func_48(iVar1, iParam4) > 0) && !__LIB_25__.func_472(iVar1))
		{
			iVar2 = 0;
			if ((bVar6 || iParam3 == 0) || iParam3 == __LIB_8__.func_48(iVar1, iParam4))
			{
				if (bVar6)
				{
					iVar4 = __LIB_18__.func_591(iVar1, -1, 1);
				}
				else
				{
					iVar4 = Global_1312193[__LIB_8__.func_48(iVar1, iParam4) /*1951*/].f_33;
				}
				if (__LIB_1__.func_376(iParam2))
				{
					if (iVar4 == 13)
					{
						iVar3 = 3;
					}
					else if (iVar4 == 8)
					{
						iVar3 = 2;
					}
					else
					{
						iVar3 = 1;
					}
					iVar2 = 10;
				}
				else
				{
					iVar3 = iVar4;
					iVar2 = 0;
				}
				iVar2 = (iVar2 + __LIB_18__.func_704(iVar1));
				iVar7 = 0;
				switch (iParam0)
				{
					case 0:
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar7 = (iVar2 + iVar0);
							if (__LIB_31__.func_968(iParam2, iVar7))
							{
								if (__LIB_1__.func_556(__LIB_1__.func_368(4, iVar7), iParam4, 0) == 0)
								{
									return iVar7;
								}
								else
								{
									iVar5 = __LIB_1__.func_556(__LIB_1__.func_368(1, iVar7), iParam4, 0);
									if (bParam1)
									{
										if (BitTest(iVar5, 0))
										{
											return iVar7;
										}
									}
								}
							}
							iVar0++;
						}
						break;
					case 1:
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar7 = (iVar2 + iVar0);
							if (__LIB_31__.func_968(iParam2, iVar7))
							{
								if (__LIB_1__.func_556(__LIB_1__.func_368(4, iVar7), iParam4, 0) == 0)
								{
									return iVar7;
								}
							}
							iVar0++;
						}
						if (bParam1)
						{
							iVar0 = 0;
							while (iVar0 < iVar3)
							{
								iVar7 = (iVar2 + iVar0);
								if (__LIB_31__.func_968(iParam2, iVar7))
								{
									iVar5 = __LIB_1__.func_556(__LIB_1__.func_368(1, iVar7), iParam4, 0);
									if (BitTest(iVar5, 0))
									{
										return iVar7;
									}
								}
								iVar0++;
							}
						}
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar7 = (iVar2 + iVar0);
							if (__LIB_31__.func_968(iParam2, iVar7))
							{
								iVar5 = __LIB_1__.func_556(__LIB_1__.func_368(1, iVar7), iParam4, 0);
								if (BitTest(iVar5, 1) && !BitTest(iVar5, 2))
								{
									return iVar7;
								}
							}
							iVar0++;
						}
						break;
					case 2:
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar7 = (iVar2 + iVar0);
							if (__LIB_31__.func_968(iParam2, iVar7))
							{
								if (__LIB_1__.func_556(__LIB_1__.func_368(4, iVar7), iParam4, 0) == 0)
								{
									return iVar7;
								}
								else
								{
									iVar5 = __LIB_1__.func_556(__LIB_1__.func_368(1, iVar7), iParam4, 0);
									if (bParam1)
									{
										if (BitTest(iVar5, 0))
										{
											return iVar7;
										}
										else if (BitTest(iVar5, 1))
										{
											return iVar7;
										}
									}
									else if (BitTest(iVar5, 1))
									{
										return iVar7;
									}
								}
							}
							iVar0++;
						}
						break;
					}
				}
		}
		iVar1++;
	}
	if ((__LIB_1__.func_556(5396, iParam4, 0) != 0 && !Global_262145.f_21126 /* Tunable: DISABLE_STORE_PV */) && __LIB_35__.func_566(iParam2, 156))
	{
		iVar7 = __LIB_7__.func_969(156, iParam0, bParam1, iParam2, 1, iParam4, 0);
		if (iVar7 != -1)
		{
			return iVar7;
		}
	}
	if (__LIB_2__.func_276(iParam4) && __LIB_35__.func_566(iParam2, 223))
	{
		iVar7 = __LIB_7__.func_969(223, iParam0, bParam1, iParam2, 1, iParam4, 0);
		if (iVar7 != -1)
		{
			return iVar7;
		}
	}
	if (__LIB_2__.func_275(iParam4) && __LIB_35__.func_566(iParam2, 278))
	{
		iVar7 = __LIB_7__.func_969(278, iParam0, bParam1, iParam2, 1, iParam4, 0);
		if (iVar7 != -1)
		{
			return iVar7;
		}
	}
	return -1;
}

int func_596(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x666D6
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	bVar5 = __LIB_0__.func_112();
	bVar5 = true;
	if (__LIB_18__.func_376(iParam3, 0, 0))
	{
		iParam3 = __LIB_2__.func_363(iParam3);
	}
	if (iParam3 == 126)
	{
		if (__LIB_8__.func_48(22, -1) > 0)
		{
			if (!__LIB_19__.func_124())
			{
				return -1;
			}
		}
	}
	if (iParam3 == 127)
	{
		if (__LIB_8__.func_48(25, -1) > 0)
		{
			if (!__LIB_8__.func_254(1))
			{
				return -1;
			}
		}
	}
	if (!__LIB_1__.func_392(iParam2) && __LIB_3__.func_812(iParam2, 0))
	{
		iVar6 = __LIB_19__.func_123(iParam2);
		return __LIB_7__.func_969(iVar6, iParam0, bParam1, iParam2, 0, iParam4, iParam5);
	}
	iVar1 = 0;
	while (iVar1 < 29)
	{
		if (__LIB_25__.func_472(iVar1))
		{
		}
		else if (!bVar5 && __LIB_8__.func_48(iVar1, iParam4) >= Global_1312193)
		{
			return -1;
		}
		else if (bVar5 || (__LIB_8__.func_48(iVar1, iParam4) > 0 && __LIB_8__.func_48(iVar1, iParam4) <= 128))
		{
			iVar2 = 0;
			if ((bVar5 || iParam3 == 0) || iParam3 == __LIB_8__.func_48(iVar1, iParam4))
			{
				if (bVar5)
				{
					iVar4 = __LIB_18__.func_591(iVar1, -1, 1);
				}
				else
				{
					iVar4 = Global_1312193[__LIB_8__.func_48(iVar1, iParam4) /*1951*/].f_33;
				}
				if (__LIB_1__.func_376(iParam2))
				{
					if (iVar4 == 13)
					{
						iVar3 = 3;
					}
					else if (iVar4 == 8)
					{
						iVar3 = 2;
					}
					else
					{
						iVar3 = 1;
					}
					iVar2 = 10;
				}
				else
				{
					iVar3 = iVar4;
					iVar2 = 0;
				}
				iVar2 = (iVar2 + __LIB_18__.func_704(iVar1));
				iVar6 = -1;
				switch (iParam0)
				{
					case 0:
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar6 = (iVar2 + iVar0);
							if (!__LIB_31__.func_968(iParam2, iVar6))
							{
							}
							else if (Global_1585857[iVar6 /*142*/].f_66 == 0)
							{
								return iVar6;
							}
							else if (bParam1)
							{
								if (BitTest(Global_1585857[iVar6 /*142*/].f_103, 0))
								{
									return iVar6;
								}
							}
							iVar0++;
						}
						break;
					case 1:
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar6 = (iVar2 + iVar0);
							if (!__LIB_31__.func_968(iParam2, iVar6))
							{
							}
							else if (Global_1585857[iVar6 /*142*/].f_66 == 0)
							{
								return iVar6;
							}
							iVar0++;
						}
						if (bParam1)
						{
							iVar0 = 0;
							while (iVar0 < iVar3)
							{
								iVar6 = (iVar2 + iVar0);
								if (!__LIB_31__.func_968(iParam2, iVar6))
								{
								}
								else if (BitTest(Global_1585857[iVar6 /*142*/].f_103, 0))
								{
									return iVar6;
								}
								iVar0++;
							}
						}
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar6 = (iVar2 + iVar0);
							if (!__LIB_31__.func_968(iParam2, iVar6))
							{
							}
							else if (BitTest(Global_1585857[iVar6 /*142*/].f_103, 1) && !BitTest(Global_1585857[iVar6 /*142*/].f_103, 2))
							{
								return iVar6;
							}
							else if (BitTest(Global_1585857[iVar6 /*142*/].f_103, 1))
							{
							}
							iVar0++;
						}
						break;
					case 2:
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar6 = (iVar2 + iVar0);
							if (!__LIB_31__.func_968(iParam2, iVar6))
							{
							}
							else if (Global_1585857[iVar6 /*142*/].f_66 == 0)
							{
								return iVar6;
							}
							else if (bParam1)
							{
								if (BitTest(Global_1585857[iVar6 /*142*/].f_103, 0))
								{
									return iVar6;
								}
								else if (BitTest(Global_1585857[iVar6 /*142*/].f_103, 1))
								{
									return iVar6;
								}
							}
							else if (BitTest(Global_1585857[iVar6 /*142*/].f_103, 1))
							{
								return iVar6;
							}
							iVar0++;
						}
						break;
					}
				}
		}
		iVar1++;
	}
	if ((__LIB_1__.func_556(5396, iParam4, 0) != 0 && !Global_262145.f_21126 /* Tunable: DISABLE_STORE_PV */) && __LIB_35__.func_566(iParam2, 156))
	{
		iVar6 = __LIB_7__.func_969(156, iParam0, bParam1, iParam2, 0, iParam4, 0);
		if (iVar6 != -1)
		{
			return iVar6;
		}
	}
	if (__LIB_2__.func_276(iParam4))
	{
		if (__LIB_31__.func_968(iParam2, 223))
		{
			iVar6 = __LIB_7__.func_969(223, iParam0, bParam1, iParam2, 0, iParam4, 0);
			if (iVar6 != -1)
			{
				return iVar6;
			}
		}
	}
	if (__LIB_2__.func_275(iParam4))
	{
		if (__LIB_31__.func_968(iParam2, 278))
		{
			iVar6 = __LIB_7__.func_969(278, iParam0, bParam1, iParam2, 0, iParam4, 0);
			if (iVar6 != -1)
			{
				return iVar6;
			}
		}
	}
	return -1;
}

void func_597(int iParam0, int iParam1)//Position - 0x66AEF
{
	*iParam1 = -1;
	if (__LIB_8__.func_48(0, -1) >= 1 && __LIB_7__.func_283(iParam0, 0))
	{
		if (((((((((((((__LIB_8__.func_48(1, -1) >= 1 || (__LIB_8__.func_48(6, -1) >= 1 && __LIB_7__.func_283(iParam0, 6))) || __LIB_8__.func_48(8, -1) >= 1) || __LIB_4__.func_521()) || (func_602() && __LIB_35__.func_566(iParam0, 159))) || (__LIB_8__.func_443() && __LIB_7__.func_283(iParam0, 13))) || (__LIB_8__.func_442() && __LIB_7__.func_283(iParam0, 14))) || (__LIB_2__.func_276(-1) && iParam0 == joaat("oppressor2"))) || (__LIB_8__.func_48(18, -1) >= 1 && __LIB_7__.func_283(iParam0, 18))) || (__LIB_8__.func_48(21, -1) >= 1 && __LIB_7__.func_283(iParam0, 21))) || ((__LIB_8__.func_48(22, -1) >= 1 && __LIB_7__.func_283(iParam0, 22)) && __LIB_19__.func_124())) || (__LIB_2__.func_275(-1) && (iParam0 == joaat("toreador") || iParam0 == joaat("stromberg")))) || ((__LIB_8__.func_48(25, -1) >= 1 && __LIB_7__.func_283(iParam0, 25)) && __LIB_8__.func_254(0))) || (__LIB_8__.func_48(26, -1) >= 1 && __LIB_7__.func_283(iParam0, 26)))
		{
			return;
		}
		*iParam1 = __LIB_8__.func_48(0, -1);
		return;
	}
	else if (__LIB_8__.func_48(6, -1) >= 1 && __LIB_7__.func_283(iParam0, 6))
	{
		if (((((((((((__LIB_8__.func_48(8, -1) >= 1 || __LIB_4__.func_521()) || (func_602() && __LIB_35__.func_566(iParam0, 159))) || (__LIB_8__.func_443() && __LIB_7__.func_283(iParam0, 13))) || (__LIB_8__.func_442() && __LIB_7__.func_283(iParam0, 14))) || (__LIB_2__.func_276(-1) && iParam0 == joaat("oppressor2"))) || (__LIB_8__.func_48(18, -1) >= 1 && __LIB_7__.func_283(iParam0, 18))) || (__LIB_8__.func_48(21, -1) >= 1 && __LIB_7__.func_283(iParam0, 21))) || ((__LIB_8__.func_48(22, -1) >= 1 && __LIB_7__.func_283(iParam0, 22)) && __LIB_19__.func_124())) || (__LIB_2__.func_275(-1) && (iParam0 == joaat("toreador") || iParam0 == joaat("stromberg")))) || ((__LIB_8__.func_48(25, -1) >= 1 && __LIB_7__.func_283(iParam0, 25)) && __LIB_8__.func_254(0))) || (__LIB_8__.func_48(26, -1) >= 1 && __LIB_7__.func_283(iParam0, 26)))
		{
			return;
		}
		*iParam1 = __LIB_8__.func_48(6, -1);
		return;
	}
	else if (__LIB_8__.func_48(8, -1) >= 1 && __LIB_7__.func_283(iParam0, 8))
	{
		if ((((((((((__LIB_4__.func_521() || (func_602() && __LIB_35__.func_566(iParam0, 159))) || (__LIB_8__.func_443() && __LIB_7__.func_283(iParam0, 13))) || (__LIB_8__.func_442() && __LIB_7__.func_283(iParam0, 14))) || (__LIB_2__.func_276(-1) && iParam0 == joaat("oppressor2"))) || (__LIB_8__.func_48(18, -1) >= 1 && __LIB_7__.func_283(iParam0, 18))) || (__LIB_8__.func_48(21, -1) >= 1 && __LIB_7__.func_283(iParam0, 21))) || ((__LIB_8__.func_48(22, -1) >= 1 && __LIB_7__.func_283(iParam0, 22)) && __LIB_19__.func_124())) || (__LIB_2__.func_275(-1) && (iParam0 == joaat("toreador") || iParam0 == joaat("stromberg")))) || ((__LIB_8__.func_48(25, -1) >= 1 && __LIB_7__.func_283(iParam0, 25)) && __LIB_8__.func_254(0))) || (__LIB_8__.func_48(26, -1) >= 1 && __LIB_7__.func_283(iParam0, 26)))
		{
			return;
		}
		*iParam1 = __LIB_8__.func_48(8, -1);
		return;
	}
	else if (__LIB_4__.func_521() && __LIB_35__.func_566(iParam0, 156))
	{
		if ((((((((((func_602() && __LIB_35__.func_566(iParam0, 159)) || (__LIB_8__.func_443() && __LIB_7__.func_283(iParam0, 13))) || (__LIB_8__.func_442() && __LIB_7__.func_283(iParam0, 14))) || (__LIB_2__.func_276(-1) && iParam0 == joaat("oppressor2"))) || (__LIB_8__.func_48(18, -1) >= 1 && __LIB_7__.func_283(iParam0, 18))) || (__LIB_8__.func_48(21, -1) >= 1 && __LIB_7__.func_283(iParam0, 21))) || ((__LIB_8__.func_48(22, -1) >= 1 && __LIB_7__.func_283(iParam0, 22)) && __LIB_19__.func_124())) || (__LIB_2__.func_275(-1) && (iParam0 == joaat("toreador") || iParam0 == joaat("stromberg")))) || ((__LIB_8__.func_48(25, -1) >= 1 && __LIB_7__.func_283(iParam0, 25)) && __LIB_8__.func_254(0))) || (__LIB_8__.func_48(26, -1) >= 1 && __LIB_7__.func_283(iParam0, 26)))
		{
			return;
		}
		*iParam1 = 1234;
		return;
	}
	else if (func_602() && __LIB_35__.func_566(iParam0, 159))
	{
		if (((((((((__LIB_8__.func_443() && __LIB_7__.func_283(iParam0, 13)) || (__LIB_8__.func_442() && __LIB_7__.func_283(iParam0, 14))) || (__LIB_2__.func_276(-1) && iParam0 == joaat("oppressor2"))) || (__LIB_8__.func_48(18, -1) >= 1 && __LIB_7__.func_283(iParam0, 18))) || (__LIB_8__.func_48(21, -1) >= 1 && __LIB_7__.func_283(iParam0, 21))) || ((__LIB_8__.func_48(22, -1) >= 1 && __LIB_7__.func_283(iParam0, 22)) && __LIB_19__.func_124())) || (__LIB_2__.func_275(-1) && (iParam0 == joaat("toreador") || iParam0 == joaat("stromberg")))) || ((__LIB_8__.func_48(25, -1) >= 1 && __LIB_7__.func_283(iParam0, 25)) && __LIB_8__.func_254(0))) || (__LIB_8__.func_48(26, -1) >= 1 && __LIB_7__.func_283(iParam0, 26)))
		{
			return;
		}
		*iParam1 = __LIB_8__.func_48(12, -1);
		return;
	}
	else if (__LIB_8__.func_443() && __LIB_7__.func_283(iParam0, 13))
	{
		if (((((((__LIB_8__.func_442() && __LIB_7__.func_283(iParam0, 14)) || (__LIB_8__.func_48(18, -1) >= 1 && __LIB_7__.func_283(iParam0, 18))) || (__LIB_8__.func_48(21, -1) >= 1 && __LIB_7__.func_283(iParam0, 21))) || ((__LIB_8__.func_48(22, -1) >= 1 && __LIB_7__.func_283(iParam0, 22)) && __LIB_19__.func_124())) || (__LIB_2__.func_275(-1) && (iParam0 == joaat("toreador") || iParam0 == joaat("stromberg")))) || ((__LIB_8__.func_48(25, -1) >= 1 && __LIB_7__.func_283(iParam0, 25)) && __LIB_8__.func_254(0))) || (__LIB_8__.func_48(26, -1) >= 1 && __LIB_7__.func_283(iParam0, 26)))
		{
			return;
		}
		if (__LIB_2__.func_276(-1) && iParam0 == joaat("oppressor2"))
		{
			return;
		}
		*iParam1 = __LIB_8__.func_48(13, -1);
		return;
	}
	else if (__LIB_8__.func_442() && __LIB_7__.func_283(iParam0, 14))
	{
		if ((((((((__LIB_8__.func_442() && __LIB_8__.func_48(15, -1) >= 1) && __LIB_7__.func_283(iParam0, 15)) || (__LIB_8__.func_48(18, -1) >= 1 && __LIB_7__.func_283(iParam0, 18))) || (__LIB_8__.func_48(21, -1) >= 1 && __LIB_7__.func_283(iParam0, 21))) || ((__LIB_8__.func_48(22, -1) >= 1 && __LIB_7__.func_283(iParam0, 22)) && __LIB_19__.func_124())) || (__LIB_2__.func_275(-1) && (iParam0 == joaat("toreador") || iParam0 == joaat("stromberg")))) || ((__LIB_8__.func_48(25, -1) >= 1 && __LIB_7__.func_283(iParam0, 25)) && __LIB_8__.func_254(0))) || (__LIB_8__.func_48(26, -1) >= 1 && __LIB_7__.func_283(iParam0, 26)))
		{
			return;
		}
		if (__LIB_2__.func_276(-1) && iParam0 == joaat("oppressor2"))
		{
			return;
		}
		*iParam1 = __LIB_8__.func_48(14, -1);
		return;
	}
	else if (__LIB_2__.func_276(-1) && iParam0 == joaat("oppressor2"))
	{
		if (((((__LIB_8__.func_48(18, -1) >= 1 && __LIB_7__.func_283(iParam0, 18)) || (__LIB_8__.func_48(21, -1) >= 1 && __LIB_7__.func_283(iParam0, 21))) || ((__LIB_8__.func_48(22, -1) >= 1 && __LIB_7__.func_283(iParam0, 22)) && __LIB_19__.func_124())) || ((__LIB_8__.func_48(25, -1) >= 1 && __LIB_7__.func_283(iParam0, 25)) && __LIB_8__.func_254(0))) || (__LIB_8__.func_48(26, -1) >= 1 && __LIB_7__.func_283(iParam0, 26)))
		{
			return;
		}
		*iParam1 = 1236;
		return;
	}
	else if (__LIB_8__.func_48(18, -1) >= 1 && __LIB_7__.func_283(iParam0, 18))
	{
		if ((((((__LIB_8__.func_48(19, -1) >= 1 && __LIB_7__.func_283(iParam0, 18)) || (__LIB_8__.func_48(21, -1) >= 1 && __LIB_7__.func_283(iParam0, 21))) || ((__LIB_8__.func_48(22, -1) >= 1 && __LIB_7__.func_283(iParam0, 22)) && __LIB_19__.func_124())) || (__LIB_2__.func_275(-1) && (iParam0 == joaat("toreador") || iParam0 == joaat("stromberg")))) || ((__LIB_8__.func_48(25, -1) >= 1 && __LIB_7__.func_283(iParam0, 25)) && __LIB_8__.func_254(0))) || (__LIB_8__.func_48(26, -1) >= 1 && __LIB_7__.func_283(iParam0, 26)))
		{
			return;
		}
		*iParam1 = __LIB_8__.func_48(18, -1);
		return;
	}
	else if (__LIB_8__.func_48(21, -1) >= 1 && __LIB_7__.func_283(iParam0, 21))
	{
		if (((((__LIB_8__.func_48(22, -1) >= 1 && __LIB_7__.func_283(iParam0, 22)) && __LIB_19__.func_124()) || (__LIB_2__.func_275(-1) && (iParam0 == joaat("toreador") || iParam0 == joaat("stromberg")))) || ((__LIB_8__.func_48(25, -1) >= 1 && __LIB_7__.func_283(iParam0, 25)) && __LIB_8__.func_254(0))) || (__LIB_8__.func_48(26, -1) >= 1 && __LIB_7__.func_283(iParam0, 26)))
		{
			return;
		}
		*iParam1 = __LIB_8__.func_48(21, -1);
		return;
	}
	else if ((__LIB_8__.func_48(22, -1) >= 1 && __LIB_7__.func_283(iParam0, 22)) && __LIB_19__.func_124())
	{
		if (((__LIB_2__.func_275(-1) && (iParam0 == joaat("toreador") || iParam0 == joaat("stromberg"))) || ((__LIB_8__.func_48(25, -1) >= 1 && __LIB_7__.func_283(iParam0, 25)) && __LIB_8__.func_254(0))) || (__LIB_8__.func_48(26, -1) >= 1 && __LIB_7__.func_283(iParam0, 26)))
		{
			return;
		}
		*iParam1 = __LIB_8__.func_48(22, -1);
		return;
	}
	else if (__LIB_2__.func_275(-1) && (iParam0 == joaat("toreador") || iParam0 == joaat("stromberg")))
	{
		if (((__LIB_8__.func_48(25, -1) >= 1 && __LIB_7__.func_283(iParam0, 25)) && __LIB_8__.func_254(0)) || (__LIB_8__.func_48(26, -1) >= 1 && __LIB_7__.func_283(iParam0, 26)))
		{
			return;
		}
		*iParam1 = 1238;
		return;
	}
	else if ((__LIB_8__.func_48(25, -1) >= 1 && __LIB_7__.func_283(iParam0, 25)) && __LIB_8__.func_254(0))
	{
		if ((__LIB_2__.func_275(-1) && (iParam0 == joaat("toreador") || iParam0 == joaat("stromberg"))) || (__LIB_8__.func_48(26, -1) >= 1 && __LIB_7__.func_283(iParam0, 26)))
		{
			return;
		}
		*iParam1 = __LIB_8__.func_48(25, -1);
		return;
	}
	else if (__LIB_8__.func_48(26, -1) >= 1 && __LIB_7__.func_283(iParam0, 26))
	{
		if (__LIB_2__.func_275(-1) && (iParam0 == joaat("toreador") || iParam0 == joaat("stromberg")))
		{
			return;
		}
		*iParam1 = __LIB_8__.func_48(26, -1);
		return;
	}
}

bool func_602()//Position - 0x67867
{
	return __LIB_4__.func_520() != 0;
}

void func_605(int* iParam0)//Position - 0x678A1
{
	var uVar0;
	int iVar1;
	iVar1 = __LIB_0__.func_896(iParam0->f_388.f_66);
	if (iParam0->f_388.f_66 == joaat("banshee"))
	{
		if (BitTest(iParam0->f_388.f_77, 0))
		{
			iVar1 = 118;
		}
	}
	while (!func_606(iVar1, 0, &(iParam0->f_388), &(iParam0->f_4), &uVar0, 0) && __LIB_8__.func_258())
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
	if (!__LIB_0__.func_492(iParam0, 3))
	{
		__LIB_4__.func_587(iParam0, 1);
	}
	else
	{
		__LIB_7__.func_967(iParam0, 3);
		__LIB_4__.func_587(iParam0, 3);
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
	Var0 = { __LIB_0__.func_85(PLAYER::GET_PLAYER_INDEX()) };
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
		__LIB_6__.func_760(*uParam3, &Var1);
	}
	else
	{
		__LIB_32__.func_466(*uParam3, &Var1);
	}
	if (bParam5)
	{
		uParam2->f_77 = 0;
	}
	iVar2 = 0;
	while (iVar2 < 12)
	{
		if (BitTest(Var1.f_77, __LIB_0__.func_110(iVar2 + 1)))
		{
			MISC::SET_BIT(&(uParam2->f_77), __LIB_0__.func_110(iVar2 + 1));
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam2->f_77), __LIB_0__.func_110(iVar2 + 1));
		}
		iVar2++;
	}
	__LIB_4__.func_583(iParam0, &(uParam2->f_77));
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_640(*uParam3, uParam2, 0, 1);
	}
	else
	{
		func_607(*uParam3, uParam2, 1, 1, 0);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && __LIB_0__.func_112())
	{
		ENTITY::FREEZE_ENTITY_POSITION(*uParam3, true);
		ENTITY::SET_ENTITY_VISIBLE(*uParam3, false, false);
		ENTITY::SET_ENTITY_COLLISION(*uParam3, false, false);
	}
	*uParam4 = func_427(iParam0, iParam1, Global_77051);
	return 1;
}

void func_607(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x67ABD
{
	int iVar0;
	float fVar1;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0)) || !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
			if (PLAYER::PLAYER_ID() != __LIB_0__.func_160())
			{
				uParam1->f_100 = PLAYER::PLAYER_ID();
			}
			if (uParam1->f_70 == 0)
			{
				uParam1->f_70 = 1;
			}
			func_640(iParam0, uParam1, bParam2, bParam3);
			if (uParam1->f_102 != 0)
			{
				if (uParam1->f_102 == 2)
				{
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam0, true);
					VEHICLE::SET_DRIFT_TYRES(iParam0, false);
				}
				else if (uParam1->f_102 == 1)
				{
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam0, false);
					VEHICLE::SET_DRIFT_TYRES(iParam0, false);
				}
				else if (uParam1->f_102 == 3)
				{
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam0, true);
					VEHICLE::SET_DRIFT_TYRES(iParam0, true);
				}
			}
			if (__LIB_0__.func_596(ENTITY::GET_ENTITY_MODEL(iParam0)))
			{
				if (uParam1->f_9[44] == 2)
				{
					VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON_SYNCED(iParam0, false, true);
				}
				else
				{
					VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON_SYNCED(iParam0, true, true);
				}
			}
			if (!uParam1->f_78 == -1 && uParam1->f_9[14] == -1)
			{
				AUDIO::OVERRIDE_VEH_HORN(iParam0, true, uParam1->f_78);
			}
			if (!uParam1->f_79 == -1)
			{
				AUDIO::SET_VEHICLE_HORN_SOUND_INDEX(iParam0, uParam1->f_79);
			}
			if (__LIB_0__.func_595(uParam1->f_66, &fVar1) && uParam1->f_80 != fVar1)
			{
				uParam1->f_80 = fVar1;
			}
			VEHICLE::SET_VEHICLE_ENVEFF_SCALE(iParam0, uParam1->f_80);
			VEHICLE::SET_VEHICLE_EXTRA_COLOUR_5(iParam0, uParam1->f_97);
			if (uParam1->f_99 >= 0)
			{
				VEHICLE::SET_VEHICLE_EXTRA_COLOUR_6(iParam0, uParam1->f_99);
			}
			if (__LIB_0__.func_594(iParam0))
			{
				__LIB_7__.func_290(iParam0, __LIB_7__.func_253(uParam1->f_74, uParam1->f_75, uParam1->f_76));
			}
			if (VEHICLE::GET_VEHICLE_LIVERY2_COUNT(iParam0) > 1 && uParam1->f_98 >= 0)
			{
				VEHICLE::SET_VEHICLE_LIVERY2(iParam0, uParam1->f_98);
			}
			if (BitTest(uParam1->f_95, 0))
			{
				func_618(iParam0, &(uParam1->f_81));
			}
			if ((!__LIB_4__.func_522(4) && !bParam4) && !NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				__LIB_25__.func_664(iParam0);
			}
			if (__LIB_0__.func_586(iVar0))
			{
				switch (uParam1->f_9[5])
				{
					case 0:
						VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 16);
						break;
					case 1:
						VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 16);
						if ((VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab")) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab2"))) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab3")))
						{
							VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 0, false);
						}
						else
						{
							VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 2, false);
						}
						break;
					case 2:
						VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 16);
						if ((VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab")) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab2"))) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab3")))
						{
							VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 1, false);
						}
						else
						{
							VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 3, false);
						}
						break;
					case 3:
						VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 16);
						if ((VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab")) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab2"))) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab3")))
						{
							VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 2, false);
						}
						else
						{
							VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 4, false);
						}
						break;
					default:
						if (uParam1->f_9[5] != -1)
						{
							VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 16);
							if ((VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab")) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab2"))) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab3")))
							{
								VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 2, false);
							}
							else
							{
								VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 4, false);
							}
						}
						break;
					}
			}
			if (__LIB_6__.func_909(ENTITY::GET_ENTITY_MODEL(iParam0)))
			{
				switch (uParam1->f_9[5])
				{
					case 1:
						VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(iParam0, false);
						VEHICLE::SET_VEHICLE_STRONG(iParam0, true);
						if (uParam1->f_9[16] == 5)
						{
							VEHICLE::SET_VEHICLE_DAMAGE_SCALE(iParam0, (Global_262145.f_21791 /* Tunable: -1001087518 */ + 0.05f));
						}
						else
						{
							VEHICLE::SET_VEHICLE_DAMAGE_SCALE(iParam0, Global_262145.f_21791 /* Tunable: -1001087518 */);
						}
						VEHICLE::SET_VEHICLE_EXPLODES_ON_EXPLOSION_DAMAGE_AT_ZERO_BODY_HEALTH(iParam0, true);
						break;
					default:
						VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(iParam0, false);
						VEHICLE::SET_VEHICLE_DAMAGE_SCALE(iParam0, 1f);
						VEHICLE::SET_VEHICLE_EXPLODES_ON_EXPLOSION_DAMAGE_AT_ZERO_BODY_HEALTH(iParam0, true);
						break;
					}
			}
			switch (uParam1->f_94)
			{
				case 0:
					break;
				case 1:
					if (BitTest(uParam1->f_95, 1) && BitTest(uParam1->f_95, 2))
					{
						if (BitTest(uParam1->f_95, 3))
						{
						}
					}
					else if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Player_Vehicle", 3))
					{
						DECORATOR::DECOR_SET_INT(iParam0, "Player_Vehicle", -1);
					}
					break;
				case 2:
					if (BitTest(uParam1->f_95, 1) && BitTest(uParam1->f_95, 2))
					{
						if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Veh_Modded_By_Player", 3))
						{
							DECORATOR::DECOR_SET_INT(iParam0, "Veh_Modded_By_Player", NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()));
						}
					}
					else if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Veh_Modded_By_Player", 3))
					{
						if (__LIB_0__.func_585(uParam1->f_81) && NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&(uParam1->f_81)))
						{
							DECORATOR::DECOR_SET_INT(iParam0, "Veh_Modded_By_Player", NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(uParam1->f_81))));
						}
						else
						{
							DECORATOR::DECOR_SET_INT(iParam0, "Veh_Modded_By_Player", -1);
						}
					}
					break;
				case 3:
					break;
				case 4:
					break;
				}
		}
	}
}

int func_618(int iParam0, var* uParam1)//Position - 0x68824
{
	int iVar0;
	int iVar1;
	if (!func_624(iParam0, uParam1))
	{
		return 1;
	}
	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		iVar0 = GRAPHICS::GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(iParam0, 0);
	}
	if (iVar0 == 0)
	{
		if (!__LIB_6__.func_910(iParam0))
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(uParam1);
			if (__LIB_7__.func_924(&iParam0, iVar1))
			{
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
	else if (iVar0 >= 3)
	{
		return 1;
	}
	else if (__LIB_6__.func_920(iParam0))
	{
	}
	return 0;
}

int func_624(int iParam0, var* uParam1)//Position - 0x6DF32
{
	int iVar0;
	bool bVar1;
	if (NETWORK::NETWORK_IS_HANDLE_VALID(uParam1, 13) && NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(uParam1))
	{
		iVar0 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(uParam1);
	}
	else
	{
		iVar0 = __LIB_0__.func_160();
	}
	bVar1 = false;
	if (iVar0 == PLAYER::PLAYER_ID())
	{
		if (__LIB_27__.func_430(15, 0))
		{
			bVar1 = true;
		}
		else if (__LIB_18__.func_447(1))
		{
			bVar1 = true;
		}
	}
	else
	{
		bVar1 = true;
	}
	if (((((((!(ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, false)) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0)) || !NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true)) || !((NETWORK::NETWORK_IS_HANDLE_VALID(uParam1, 13) && NETWORK::NETWORK_CLAN_SERVICE_IS_VALID()) && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam1))) || iVar0 == __LIB_0__.func_160()) || !__LIB_0__.func_154(iVar0, 0, 0)) || !bVar1) || __LIB_8__.func_625(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_640(int iParam0, var uParam1, bool bParam2, bool bParam3)//Position - 0x6E85B
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (uParam1->f_66 != 0)
		{
		}
		if (!__LIB_7__.func_288(iParam0))
		{
			if (MISC::GET_HASH_KEY(&(uParam1->f_1)) != 0)
			{
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iParam0, &(uParam1->f_1));
			}
			if (*uParam1 >= 0 && *uParam1 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
			{
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam0, *uParam1);
			}
		}
		if (uParam1->f_66 == joaat("sovereign"))
		{
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
		}
		else if (uParam1->f_66 == joaat("casco"))
		{
			iVar0 = 1;
			if (BitTest(uParam1->f_77, __LIB_0__.func_110(iVar0 + 1)))
			{
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), __LIB_0__.func_110(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("sandking") || uParam1->f_66 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (BitTest(uParam1->f_77, __LIB_0__.func_110(iVar1 + 1)))
			{
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), __LIB_0__.func_110(iVar1 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("formula") || uParam1->f_66 == joaat("formula2"))
		{
			iVar2 = 1;
			while (iVar2 <= 9)
			{
				if (BitTest(uParam1->f_77, __LIB_0__.func_110(iVar2)))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_77), __LIB_0__.func_110(iVar2));
				}
				iVar2++;
			}
		}
		else if (uParam1->f_66 == joaat("openwheel1"))
		{
			iVar3 = 1;
			while (iVar3 <= 6)
			{
				if (BitTest(uParam1->f_77, __LIB_0__.func_110(iVar3)))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_77), __LIB_0__.func_110(iVar3));
				}
				iVar3++;
			}
		}
		else if (uParam1->f_66 == joaat("openwheel2"))
		{
			iVar4 = 1;
			while (iVar4 <= 11)
			{
				if (iVar4 != 9 && iVar4 != 10)
				{
					if (BitTest(uParam1->f_77, __LIB_0__.func_110(iVar4)))
					{
					}
					else
					{
						MISC::SET_BIT(&(uParam1->f_77), __LIB_0__.func_110(iVar4));
					}
				}
				iVar4++;
			}
		}
		else if (uParam1->f_66 == joaat("dinghy5"))
		{
			if (BitTest(uParam1->f_77, __LIB_0__.func_110(4)))
			{
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), __LIB_0__.func_110(4));
			}
		}
		else if (uParam1->f_66 == joaat("coquette4"))
		{
			if (VEHICLE::GET_VEHICLE_MOD(iParam0, 10) != 0)
			{
				MISC::SET_BIT(&(uParam1->f_77), 0);
			}
		}
		else if (uParam1->f_66 == joaat("yosemite2"))
		{
			MISC::SET_BIT(&(uParam1->f_77), __LIB_0__.func_110(1));
		}
		else if (uParam1->f_66 == joaat("hotknife"))
		{
			iVar5 = 1;
			while (iVar5 <= 2)
			{
				if (BitTest(uParam1->f_77, __LIB_0__.func_110(iVar5)))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_77), __LIB_0__.func_110(iVar5));
				}
				iVar5++;
			}
		}
		if (uParam1->f_66 == joaat("nightshark"))
		{
			VEHICLE::SET_DONT_PROCESS_VEHICLE_GLASS(iParam0, false);
			if (VEHICLE::GET_VEHICLE_MOD(iParam0, 5) != -1)
			{
				VEHICLE::SET_DONT_PROCESS_VEHICLE_GLASS(iParam0, true);
			}
		}
		if (BitTest(uParam1->f_77, 13))
		{
			VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			VEHICLE::CLEAR_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0);
		}
		if (BitTest(uParam1->f_77, 12))
		{
			VEHICLE::SET_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			VEHICLE::CLEAR_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0);
		}
		if (uParam1->f_5 != -1 && uParam1->f_6 != -1)
		{
			if (__LIB_6__.func_820(uParam1->f_5) || __LIB_6__.func_820(uParam1->f_6))
			{
			}
			else
			{
				VEHICLE::SET_VEHICLE_COLOURS(iParam0, uParam1->f_5, uParam1->f_6);
			}
		}
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam0, uParam1->f_7, uParam1->f_8);
		if (((BitTest(uParam1->f_77, 15) || __LIB_0__.func_289(iParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && __LIB_0__.func_262())
		{
			uParam1->f_62 = 0;
			uParam1->f_63 = 0;
			uParam1->f_64 = 0;
		}
		else if ((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0)
		{
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
		}
		VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
		if (uParam1->f_65 == -1 && !__LIB_0__.func_111(uParam1->f_66))
		{
			VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, 0);
		}
		else
		{
			VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, 0);
			VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, uParam1->f_65);
		}
		if (BitTest(uParam1->f_77, 9))
		{
			VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam0, false);
			VEHICLE::SET_DRIFT_TYRES(iParam0, false);
		}
		if (bParam2)
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iParam0, uParam1->f_70);
		}
		VEHICLE::SET_VEHICLE_NEON_COLOUR(iParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		VEHICLE::SET_VEHICLE_NEON_ENABLED(iParam0, 2, BitTest(uParam1->f_77, 28));
		VEHICLE::SET_VEHICLE_NEON_ENABLED(iParam0, 3, BitTest(uParam1->f_77, 29));
		VEHICLE::SET_VEHICLE_NEON_ENABLED(iParam0, 0, BitTest(uParam1->f_77, 30));
		VEHICLE::SET_VEHICLE_NEON_ENABLED(iParam0, 1, BitTest(uParam1->f_77, 31));
		VEHICLE::SET_VEHICLE_IS_STOLEN(iParam0, BitTest(uParam1->f_77, 10));
		if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(iParam0) > 1 && uParam1->f_67 >= 0)
		{
			VEHICLE::SET_VEHICLE_LIVERY(iParam0, uParam1->f_67);
		}
		if (uParam1->f_69 > -1 && uParam1->f_69 < 255)
		{
			if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iParam0)))
			{
				if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iParam0)))
				{
					if (uParam1->f_69 == 6)
					{
						__LIB_0__.func_288(iParam0, uParam1->f_69);
					}
				}
				else
				{
					__LIB_0__.func_288(iParam0, uParam1->f_69);
				}
			}
		}
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, false))
		{
			if ((uParam1->f_68 == 0 || uParam1->f_68 == 3) || uParam1->f_68 == 5)
			{
				VEHICLE::RAISE_CONVERTIBLE_ROOF(iParam0, true);
			}
			else
			{
				VEHICLE::LOWER_CONVERTIBLE_ROOF(iParam0, true);
			}
		}
		if (bParam3)
		{
			__LIB_18__.func_176(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!VEHICLE::IS_THIS_MODEL_A_HELI(uParam1->f_66) && !VEHICLE::IS_THIS_MODEL_A_BOAT(uParam1->f_66))
		{
			iVar6 = 0;
			while (iVar6 <= 11)
			{
				if (BitTest(uParam1->f_77, __LIB_0__.func_110(iVar6 + 1)))
				{
					if (!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar6 + 1))
					{
						VEHICLE::SET_VEHICLE_EXTRA(iParam0, iVar6 + 1, false);
					}
				}
				else if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar6 + 1))
				{
					VEHICLE::SET_VEHICLE_EXTRA(iParam0, iVar6 + 1, true);
				}
				iVar6++;
			}
		}
		if ((ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("sheava") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("omnis")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("le7b"))
		{
			if (VEHICLE::GET_VEHICLE_MOD(iParam0, 0) == -1)
			{
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 1, false);
			}
		}
		if (((__LIB_8__.func_882() && VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66)) && VEHICLE::GET_VEHICLE_HAS_LANDING_GEAR(iParam0)) && !VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("avenger")))
		{
			if (!BitTest(uParam1->f_77, 23))
			{
				if (BitTest(uParam1->f_77, 22))
				{
					VEHICLE::CONTROL_LANDING_GEAR(iParam0, 2);
				}
				else
				{
					VEHICLE::CONTROL_LANDING_GEAR(iParam0, 3);
				}
			}
			else
			{
				VEHICLE::CONTROL_LANDING_GEAR(iParam0, 4);
			}
		}
		if (BitTest(uParam1->f_77, 27))
		{
			DECORATOR::DECOR_SET_BOOL(iParam0, "IgnoredByQuickSave", true);
		}
		else
		{
			DECORATOR::DECOR_SET_BOOL(iParam0, "IgnoredByQuickSave", false);
		}
	}
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
	if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/) || __LIB_2__.func_338())
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "CANCEL", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
		__LIB_0__.func_495(&(iParam0->f_493), 0, 0);
		__LIB_4__.func_587(iParam0, 5);
	}
	else if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT" /* GXT: Filter List */, "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
		__LIB_4__.func_587(iParam0, 3);
	}
}

void func_661(int* iParam0, bool bParam1)//Position - 0x6FC91
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	if (!__LIB_4__.func_529(bParam1))
	{
		return;
	}
	if (!bParam1)
	{
		iParam0->f_5 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	}
	else
	{
		iParam0->f_5 = __LIB_7__.func_978(iParam0);
	}
	if (!__LIB_8__.func_270(iParam0->f_5))
	{
		return;
	}
	__LIB_18__.func_774(iParam0, &iVar0, &iVar1);
	if (!PAD::IS_CONTROL_PRESSED(iVar0, iVar1) && !__LIB_0__.func_492(iParam0, 2))
	{
		return;
	}
	__LIB_4__.func_527(iParam0, 1);
	__LIB_7__.func_967(iParam0, 2);
	__LIB_4__.func_524(PLAYER::PLAYER_ID(), 0, 0, 0);
	__LIB_32__.func_466(iParam0->f_5, &(iParam0->f_388));
	Var2 = { __LIB_8__.func_268() };
	iParam0->f_388.f_1 = { Var2 };
	__LIB_4__.func_587(iParam0, 2);
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
		if (!__LIB_0__.func_154(PLAYER::PLAYER_ID(), 1, 1))
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
	if (!__LIB_0__.func_121(iParam0))
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
		fVar22 = __LIB_2__.func_365(fVar22);
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
			__LIB_4__.func_536(&(Local_164.f_506));
			Var23 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, __LIB_2__.func_364()) };
			CAM::SET_USE_HI_DOF();
			Local_164.f_506.f_3 = __LIB_2__.func_365(Local_164.f_506.f_3);
			Local_164.f_506.f_7 = (Local_164.f_506.f_6 + Local_164.f_506.f_3);
			Local_164.f_506.f_4 = __LIB_0__.func_301(Local_164.f_506.f_4, fVar13, fVar14);
			Local_164.f_506.f_8 = (Local_164.f_506.f_8 + (__LIB_4__.func_533(Local_164.f_506.f_8, Local_164.f_506.f_7) * fVar17));
			Local_164.f_506.f_5 = (Local_164.f_506.f_5 + ((Local_164.f_506.f_4 - Local_164.f_506.f_5) * fVar17));
			Local_164.f_506.f_5 = __LIB_0__.func_301(Local_164.f_506.f_5, fVar13, fVar14);
			Var4 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, __LIB_2__.func_364()), Local_164.f_506.f_8, 0f, fVar7, 0f) };
			Var4.f_2 = (fVar0 + Local_164.f_506.f_5);
			Var24 = { __LIB_0__.func_620(__LIB_0__.func_79(Var23 - Var4), 0f, 0f, 1f) };
			Var25 = { __LIB_0__.func_620(__LIB_0__.func_79(Var23 - Var4), Var24) };
			Var23 = { Var23 + Var24 * Vector(Var6.f_0, Var6.f_0, Var6.f_0) };
			Var23 = { Var23 + Var25 * Vector(Var6.f_2, Var6.f_2, Var6.f_2) };
			CAM::SET_CAM_COORD(Local_164.f_506, Var4);
			CAM::POINT_CAM_AT_COORD(Local_164.f_506, OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var23, ENTITY::GET_ENTITY_HEADING(iParam0), __LIB_2__.func_364()));
			if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, __LIB_4__.func_532()))
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
			fVar26 = __LIB_4__.func_223(fVar8, fVar9, Local_164.f_506.f_2);
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

void func_702(bool bParam0)//Position - 0x71188
{
	if (bParam0)
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE(__LIB_4__.func_537()))
		{
			AUDIO::START_AUDIO_SCENE(__LIB_4__.func_537());
		}
	}
	else if (AUDIO::IS_AUDIO_SCENE_ACTIVE(__LIB_4__.func_537()))
	{
		AUDIO::STOP_AUDIO_SCENE(__LIB_4__.func_537());
	}
}

int func_705()//Position - 0x71206
{
	if (Local_164.f_2 < 0 || Local_164.f_2 >= 2)
	{
		return 0;
	}
	return Local_164.f_6[Local_164.f_2];
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
	__LIB_4__.func_590(&(Local_164.f_10), Local_164.f_10.f_7);
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
	__LIB_8__.func_253(uParam0);
	uParam0->f_12.f_370 = 0;
	uParam0->f_12.f_373 = 0;
	if (bParam1)
	{
		if (__LIB_0__.func_154(PLAYER::PLAYER_ID(), 1, 1) && __LIB_4__.func_715())
		{
			__LIB_4__.func_524(PLAYER::PLAYER_ID(), 1, 0, 0);
		}
	}
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	__LIB_4__.func_587(uParam0, 0);
	__LIB_4__.func_514(uParam0, 0);
}

void func_718()//Position - 0x715EF
{
	if (__LIB_4__.func_715())
	{
		__LIB_4__.func_524(PLAYER::PLAYER_ID(), 1, 0, 0);
	}
	__LIB_0__.func_801();
	func_719();
}

void func_719()//Position - 0x71611
{
	if (Global_1574582.f_1 == 1)
	{
		func_720(7, 0, 1);
		Global_1574582.f_1 = 0;
		Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_9 = 0;
	}
}

void func_720(int iParam0, int iParam1, bool bParam2)//Position - 0x7163F
{
	if (__LIB_0__.func_674())
	{
		if (iParam1 == 1)
		{
			if (Global_2815059.f_4462 == -1)
			{
				Global_2815059.f_4462 = Global_262145.f_27172 /* Tunable: 945146471 */;
			}
			__LIB_0__.func_495(&(Global_2815059.f_4460), 0, 0);
			if (bParam2)
			{
				if (Global_2815059.f_4465 == -1)
				{
					Global_2815059.f_4465 = Global_262145.f_27173 /* Tunable: -29732167 */;
				}
				__LIB_0__.func_495(&(Global_2815059.f_4463), 0, 0);
			}
			else
			{
				Global_1574582 = 0;
				Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_8 = 0;
				__LIB_4__.func_543(1);
			}
		}
		else
		{
			Global_1574582 = 0;
			Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_8 = 0;
			__LIB_4__.func_543(1);
		}
		if ((!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !__LIB_1__.func_203()) && !func_721(PLAYER::PLAYER_ID()))
		{
			Global_1057408 = 0;
		}
		STATS::PLAYSTATS_SWITCH_PASSIVE_MODE(false, -1, -1, iParam0);
	}
}

int func_721(int iParam0)//Position - 0x71709
{
	if (__LIB_4__.func_540(iParam0, 1, 0))
	{
		if (Global_1853348[iParam0 /*834*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

void func_749()//Position - 0x721A3
{
	int iVar0;
	int iVar1;
	__LIB_1__.func_58(&(Local_164.f_506.f_10));
	__LIB_2__.func_33(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, func_708(), true), "LUX_SRM_BACK" /* GXT: Back */, &(Local_164.f_506.f_10), 0);
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		__LIB_2__.func_33(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/, true), "LUX_SRM_MOVE" /* GXT: Move Camera */, &(Local_164.f_506.f_10), 0);
	}
	else
	{
		__LIB_2__.func_33(PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, __LIB_0__.func_109(), true), "LUX_SRM_MOVE" /* GXT: Move Camera */, &(Local_164.f_506.f_10), 0);
	}
	__LIB_2__.func_33(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, __LIB_4__.func_532(), true), "LUX_SRM_ZOOM" /* GXT: Zoom */, &(Local_164.f_506.f_10), 0);
	__LIB_2__.func_33(PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, __LIB_4__.func_566(), true), "LUX_SRM_VEH" /* GXT: Vehicles */, &(Local_164.f_506.f_10), 0);
	if (__LIB_8__.func_270(func_705()))
	{
		__LIB_9__.func_102(&iVar0, &iVar1);
		__LIB_2__.func_33(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(iVar0, iVar1, true), "LUX_SRM_BUY" /* GXT: Purchase */, &(Local_164.f_506.f_10), 0);
	}
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
		__LIB_4__.func_557(&(Local_164.f_10), 463366/*func_705*/);
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
	if (!__LIB_4__.func_549())
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
	if (!__LIB_4__.func_549() || !func_3(0))
	{
		func_718();
		func_776(&(Local_164.f_1216));
		func_716(1);
		return;
	}
	func_775();
	HUD::DISABLE_FRONTEND_THIS_FRAME();
	__LIB_4__.func_568(&(Local_164.f_1216));
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
						__LIB_2__.func_375();
						func_716(3);
						break;
					case 1:
						if (__LIB_8__.func_270(func_705()))
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
						if (__LIB_8__.func_270(func_705()))
						{
							__LIB_4__.func_527(&(Local_164.f_10), 2);
							__LIB_4__.func_527(&(Local_164.f_10), 3);
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

void func_760(var uParam0)//Position - 0x726D0
{
	switch (*uParam0)
	{
		case 0:
			__LIB_1__.func_342("LUX_SRM_M_D_0" /* GXT: View the ~a~ on display. */, 0, 0);
			__LIB_2__.func_353(Local_164.f_5);
			break;
		case 1:
			if (uParam0->f_3 == 1)
			{
				__LIB_1__.func_342("BUY_VEH_CONF" /* GXT: Are you sure you would like to purchase the ~a~ for $~1~? */, 0, 0);
				__LIB_2__.func_353(Local_164.f_5);
				__LIB_9__.func_102(Local_164.f_4);
			}
			else if (__LIB_8__.func_270(func_705()))
			{
				__LIB_1__.func_342("LUX_SRM_M_D_1" /* GXT: Purchase the ~a~ now for $~1~. */, 0, 0);
				__LIB_2__.func_353(Local_164.f_5);
				__LIB_9__.func_102(Local_164.f_4);
			}
			else
			{
				__LIB_1__.func_342("LUX_SRM_H_SOON" /* GXT: This vehicle will be available for purchase soon. */, 0, 0);
			}
			break;
	}
}

void func_762(var uParam0)//Position - 0x727BA
{
	__LIB_4__.func_569("LUX_SRM_M_TTL" /* GXT: LUXURY AUTOS */);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(func_765(), false);
	if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(func_765()))
	{
		__LIB_7__.func_286(1, func_765(), func_765());
	}
	__LIB_18__.func_477(0, "LUX_SRM_M_O_0" /* GXT: Inspect Vehicle */, 0, 1, 0, 0, 0);
	__LIB_18__.func_477(1, "LUX_SRM_M_O_1" /* GXT: Purchase Vehicle */, 0, __LIB_8__.func_270(func_705()), 0, 0, 0);
	__LIB_2__.func_183(*uParam0, 1, 1);
	if (uParam0->f_3 == 1)
	{
		__LIB_1__.func_345(201, "ITEM_YES" /* GXT: Confirm */, -1, 0);
	}
	else
	{
		__LIB_1__.func_345(201, "ITEM_SELECT" /* GXT: Select */, -1, 0);
	}
	__LIB_1__.func_345(202, "ITEM_BACK" /* GXT: Back */, -1, 0);
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
	__LIB_4__.func_62(1);
	__LIB_6__.func_849(1);
	bVar4 = PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/);
	bVar5 = (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/));
	iVar2 = PAD::GET_CONTROL_VALUE(2 /*FRONTEND_CONTROL*/, 31 /*INPUT_MOVE_UD*/);
	if (__LIB_0__.func_706() || __LIB_0__.func_77(0))
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
			__LIB_0__.func_580(&(uParam0->f_1), 0, 0);
			MISC::SET_BIT(&Local_164, 1);
		}
	}
	else if (__LIB_2__.func_47(&(uParam0->f_1), iVar3, 0))
	{
		__LIB_0__.func_579(&(uParam0->f_1));
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
	if (bVar5 || __LIB_0__.func_661())
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
			__LIB_7__.func_287(0, 0, 0, 1);
			__LIB_2__.func_158(0, -1, 1);
		}
		if (__LIB_2__.func_157())
		{
			if (Global_4539961 == *uParam0)
			{
				*bParam3 = 1;
			}
			else
			{
				*uParam0 = Global_4539961;
				__LIB_2__.func_183(*uParam0, 1, 1);
			}
		}
		if (__LIB_2__.func_338())
		{
			*bParam4 = 1;
		}
		if (__LIB_2__.func_367(0, 0, 0) || PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/))
		{
			*uParam1 = 1;
		}
		if (__LIB_2__.func_366(0, 0, 0) || PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/))
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
	__LIB_0__.func_579(&(uParam0->f_1));
	__LIB_7__.func_49(1, -1);
}

void func_777()//Position - 0x72DE7
{
	if (__LIB_4__.func_549() && func_3(1))
	{
		func_791();
		if (__LIB_0__.func_1("LUX_SRM_MSN" /* GXT: Luxury Autos is unavailable whilst on a mission. */))
		{
			HUD::CLEAR_HELP(true);
		}
		if (PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
		}
		if (Local_164.f_3 == -1)
		{
			__LIB_7__.func_508(&(Local_164.f_3), 4, "LUX_SRM_ENTER" /* GXT: Press ~INPUT_CONTEXT~ to browse Luxury Autos. */, 0, 0, 0, 0);
		}
		else if (__LIB_2__.func_187(Local_164.f_3, 1))
		{
			func_785();
			if (__LIB_4__.func_739())
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			}
			func_756(func_6(func_10()));
			MISC::SET_BIT(&Local_164, 4);
			__LIB_6__.func_404(&(Local_164.f_3));
			__LIB_4__.func_557(&(Local_164.f_10), 463366/*func_705*/);
			func_778(&(Local_164.f_10), 1);
			__LIB_4__.func_556(func_705());
			__LIB_4__.func_555(func_705());
			AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT" /* GXT: Filter List */, "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			func_716(2);
		}
	}
	else if (Local_164.f_3 != -1)
	{
		__LIB_6__.func_404(&(Local_164.f_3));
	}
	else if (func_3(1) && (__LIB_4__.func_552() || (__LIB_0__.func_581(PLAYER::PLAYER_ID()) && __LIB_0__.func_396(PLAYER::PLAYER_ID()) != -1)))
	{
		if (!__LIB_0__.func_1("LUX_SRM_MSN" /* GXT: Luxury Autos is unavailable whilst on a mission. */))
		{
			__LIB_0__.func_187("LUX_SRM_MSN" /* GXT: Luxury Autos is unavailable whilst on a mission. */);
		}
	}
	else if (func_3(1) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		if (!__LIB_0__.func_1("LUX_SRM_WANTED" /* GXT: Luxury Autos is unavailable while you have a Wanted Level. */))
		{
			__LIB_0__.func_187("LUX_SRM_WANTED" /* GXT: Luxury Autos is unavailable while you have a Wanted Level. */);
		}
	}
	else if (__LIB_0__.func_1("LUX_SRM_MSN" /* GXT: Luxury Autos is unavailable whilst on a mission. */) || __LIB_0__.func_1("LUX_SRM_WANTED" /* GXT: Luxury Autos is unavailable while you have a Wanted Level. */))
	{
		HUD::CLEAR_HELP(true);
	}
}

void func_778(var uParam0, bool bParam1)//Position - 0x72F5E
{
	if (bParam1)
	{
		__LIB_3__.func_683(uParam0, 470937/*func_781*/);
	}
	else
	{
		__LIB_3__.func_683(uParam0, 470914/*func_779*/);
	}
}

void func_785()//Position - 0x7304D
{
	int iVar0;
	func_787(1, 0);
	iVar0 = 73600;
	__LIB_4__.func_524(PLAYER::PLAYER_ID(), 0, iVar0, 0);
	__LIB_0__.func_802();
}

void func_787(int iParam0, int iParam1)//Position - 0x73090
{
	if (!__LIB_4__.func_540(PLAYER::PLAYER_ID(), 1, 0) || iParam1)
	{
		if (!__LIB_0__.func_674())
		{
			Global_1574582.f_1 = 1;
			Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_9 = 1;
			if (iParam0 == 1)
			{
				Global_1574582.f_2 = 1;
			}
			func_788(7, 0, -1);
		}
	}
}

void func_788(int iParam0, int iParam1, int iParam2)//Position - 0x730E5
{
	if (!__LIB_0__.func_674() || iParam1)
	{
		Global_1574582 = 1;
		__LIB_4__.func_543(1);
		if (((!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !__LIB_1__.func_203()) && !func_721(PLAYER::PLAYER_ID())) && !__LIB_4__.func_530(PLAYER::PLAYER_ID()))
		{
			Global_1057408 = 1;
		}
		Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_8 = 1;
		STATS::PLAYSTATS_SWITCH_PASSIVE_MODE(true, iParam0, iParam2, -1);
	}
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
		if (!__LIB_0__.func_121(Local_164.f_6[iVar1]))
		{
			iVar2 = func_799(iVar1);
			if ((iVar2 != 0 && STREAMING::IS_MODEL_IN_CDIMAGE(iVar2)) && STREAMING::IS_MODEL_A_VEHICLE(iVar2))
			{
				if (__LIB_0__.func_584(iVar2))
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
					func_607(Local_164.f_6[iVar1], &Var0, 0, 1, 1);
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
	__LIB_4__.func_967(iParam2, uParam1);
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
	return __LIB_2__.func_364();
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
	return __LIB_2__.func_364();
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
	if (__LIB_6__.func_949())
	{
		return 1;
	}
	if (__LIB_2__.func_369() && !__LIB_1__.func_352(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (__LIB_1__.func_351(PLAYER::PLAYER_ID()) && CAM::IS_SCREEN_FADED_OUT())
	{
		return 1;
	}
	if (__LIB_0__.func_121(PLAYER::PLAYER_PED_ID()) && MISC::GET_DISTANCE_BETWEEN_COORDS(__LIB_0__.func_85(PLAYER::PLAYER_ID()), __LIB_24__.func_39(), true) > 210f)
	{
		return 1;
	}
	return 0;
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
	__LIB_1__.func_569(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&uLocal_130, 1, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&uLocal_131, 33, 0);
	if (!__LIB_0__.func_672())
	{
		__LIB_7__.func_300();
	}
	Local_164.f_10.f_7 = 464231/*func_715*/;
	__LIB_7__.func_979(&(Local_164.f_10), Local_164.f_10.f_7);
	__LIB_9__.func_115(&(Local_164.f_10), 185);
	__LIB_9__.func_116(&(Local_164.f_1220));
	func_778(&(Local_164.f_10), 1);
}

