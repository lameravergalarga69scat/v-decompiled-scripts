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
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	int iLocal_52 = 0;
	struct<36> Local_53[8];
	var uLocal_54 = 0;
	struct<5> Local_55[58];
	struct<1117> Local_56 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0 } ;
	float fLocal_57 = 0f;
	struct<3> Local_58 = { 0, 0, 0 } ;
	bool bLocal_59 = 0;
	float fLocal_60 = 0f;
	float fLocal_61 = 0f;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	struct<3> Local_67 = { 0, 0, 0 } ;
	bool bLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int* iLocal_71 = NULL;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	struct<3> Local_74 = { 0, 0, 0 } ;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	float fLocal_84 = 0f;
	float fLocal_85 = 0f;
	int iLocal_86 = 0;
	var uLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	struct<48> Local_93 = { 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 15;
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
	float fLocal_150 = 0f;
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	int iLocal_154 = 0;
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	int iLocal_158 = 0;
	int iLocal_159 = 0;
	int iLocal_160 = 0;
	int iLocal_161 = 0;
	int iLocal_162 = 0;
	var uLocal_163 = 0;
	int iLocal_164 = 0;
	int iLocal_165 = 0;
	int iLocal_166 = 0;
	int iLocal_167 = 0;
	int iLocal_168 = 0;
	int iLocal_169 = 0;
	int iLocal_170 = 0;
	int iLocal_171 = 0;
	int iLocal_172 = 0;
	struct<29> Local_173[3];
	struct<29> Local_174[2];
	bool bLocal_175 = 0;
	int iLocal_176 = 0;
	int iLocal_177 = 0;
	struct<3> Local_178[55];
	int iLocal_179 = 0;
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
	float fLocal_195 = 0f;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	struct<3> Local_199 = { 0, 0, 0 } ;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 8;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 4;
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
	var uLocal_221 = 4;
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
	var uLocal_236 = 4;
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
	var uLocal_251 = 4;
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
	var uLocal_266 = 4;
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
	var uLocal_281 = 4;
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
	var uLocal_296 = 4;
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
	var uLocal_311 = 4;
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
	bool bLocal_324 = 0;
	int iLocal_325 = 0;
	bool bLocal_326 = 0;
	int iLocal_327 = 0;
	int iLocal_328 = 0;
	int iLocal_329 = 0;
	int iLocal_330 = 0;
	int iLocal_331 = 0;
	int iLocal_332 = 0;
	int iLocal_333 = 0;
	int iLocal_334 = 0;
	int iLocal_335 = 0;
	int* iLocal_336 = NULL;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	int iLocal_339 = 0;
	int iLocal_340 = 0;
	int iLocal_341 = 0;
	int iLocal_342 = 0;
	bool bLocal_343 = 0;
	int iLocal_344 = 0;
	int iLocal_345 = 0;
	int iLocal_346 = 0;
	int iLocal_347 = 0;
	struct<3> Local_348 = { 0, 0, 0 } ;
	struct<3> Local_349 = { 0, 0, 0 } ;
	float fLocal_350 = 0f;
	int iLocal_351 = 0;
	bool bLocal_352 = 0;
	int iLocal_353 = 0;
	int iLocal_354 = 0;
	int iLocal_355 = 0;
	int iLocal_356 = 0;
	int iLocal_357 = 0;
	int iLocal_358 = 0;
	int iLocal_359 = 0;
	int iLocal_360 = 0;
	int iLocal_361 = 0;
	int iLocal_362 = 0;
	int iLocal_363 = 0;
	int iLocal_364 = 0;
	int iLocal_365 = 0;
	int iLocal_366 = 0;
	int iLocal_367 = -1;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
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
	fLocal_21 = 0f;
	fLocal_23 = -0.0375f;
	fLocal_24 = 0.17f;
	fLocal_28 = 80f;
	fLocal_29 = 140f;
	fLocal_30 = 180f;
	iLocal_33 = 3;
	iLocal_43 = 1;
	iLocal_44 = 65;
	iLocal_45 = 49;
	iLocal_46 = 64;
	fLocal_61 = 1f;
	Local_74 = { 0f, 40f, 0f };
	iLocal_79 = -1;
	iLocal_80 = -1;
	iLocal_82 = -1;
	fLocal_84 = 0f;
	fLocal_85 = 0f;
	fLocal_150 = 1f;
	iLocal_161 = -1;
	iLocal_164 = -1;
	iLocal_167 = -1;
	iLocal_177 = -1;
	iLocal_179 = -1;
	fLocal_195 = ((0.05f + 0.275f) - 0.01f);
	Local_199 = { 500f, 500f, 500f };
	iLocal_325 = -1;
	iLocal_332 = -1;
	iLocal_332 = iScriptParam_367;
	HUD::CLEAR_HELP(true);
	HUD::CLEAR_PRINTS();
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	VEHICLE::SET_RANDOM_TRAINS(false);
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(500);
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(83))
	{
		func_856(1);
	}
	MISC::SET_MISSION_FLAG(true);
	func_841();
	while (true)
	{
		if (__LIB_1__.func_197(PLAYER::PLAYER_PED_ID()))
		{
			if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true))
			{
				func_856(0);
			}
			Local_67 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			func_839();
			func_838();
			func_817();
			func_814();
			switch (iLocal_333)
			{
				case 0:
					func_791(&iScriptParam_367);
					break;
				case 1:
					func_621();
					func_579();
					break;
				case 2:
					func_1(0, (CLOCK::GET_CLOCK_HOURS() > 20 || CLOCK::GET_CLOCK_HOURS() < 5), iLocal_335 == 6, iLocal_335 == 4, iLocal_335 == 7);
					break;
				}
		}
		SYSTEM::WAIT(0);
	}
}

void func_1(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x1BA
{
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	HUD::THEFEED_HIDE_THIS_FRAME();
	switch (iLocal_334)
	{
		case 0:
			if (!CAM::IS_SCREEN_FADING_OUT())
			{
				HUD::CLEAR_HELP(true);
				__LIB_8__.func_770(1);
				func_576((((bParam0 || bParam1) || bParam2) || bParam3));
				func_567(&(Local_56.f_74), bParam0);
				if (PLAYER::IS_PLAYER_ONLINE())
				{
					func_555();
					Local_56.f_1116 = 1;
				}
				else
				{
					Local_56.f_1116 = 0;
				}
				func_554(MISC::GET_GAME_TIMER() + 10000);
				iLocal_329 = 0;
				iLocal_328 = 0;
				iLocal_363 = 0;
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				CLOCK::PAUSE_CLOCK(true);
				if (bParam2)
				{
					GRAPHICS::ANIMPOSTFX_PLAY("MinigameTransitionIn", 0, false);
				}
				iLocal_334 = 2;
			}
			break;
		case 2:
			if (Local_56.f_7 != 0 && !Local_56.f_8)
			{
				if (CAM::IS_SCREEN_FADED_IN())
				{
					Local_56.f_8 = 1;
					__LIB_39__.func_706(2, 1, 26, Local_56.f_7, 1);
				}
			}
			if (bParam4 || bParam1)
			{
				if (func_216())
				{
					func_856(0);
				}
			}
			else if (bParam3)
			{
				if (func_215())
				{
					func_856(0);
				}
			}
			if (!bLocal_324)
			{
				if (func_92((((bParam0 || bParam1) || bParam2) || bParam3)))
				{
					__LIB_10__.func_573(&(Local_56.f_74));
					bLocal_324 = true;
					iLocal_327 = 1;
				}
			}
			if (iLocal_327)
			{
				if (__LIB_35__.func_928(&(Local_56.f_74), 0, 1065353216, 0, 0, 0))
				{
					CLOCK::PAUSE_CLOCK(false);
					if (bParam0)
					{
						CAM::DO_SCREEN_FADE_OUT(500);
						func_856(0);
					}
					else if (bLocal_343)
					{
						CAM::DO_SCREEN_FADE_OUT(500);
						iLocal_329 = 0;
						func_554(-1);
						bLocal_324 = false;
						iLocal_334 = 3;
					}
					else
					{
						iLocal_329 = 0;
						if (bParam2)
						{
							GRAPHICS::ANIMPOSTFX_STOP("MinigameTransitionIn");
							GRAPHICS::ANIMPOSTFX_PLAY("MinigameTransitionOut", 0, false);
							iLocal_334 = 3;
						}
					}
					iLocal_327 = 0;
				}
			}
			break;
		case 3:
			if (bLocal_324)
			{
				func_856(0);
			}
			else if (CAM::IS_SCREEN_FADED_OUT())
			{
				if (__LIB_29__.func_686() == -1)
				{
					func_51();
					func_50();
					func_46();
					GRAPHICS::ANIMPOSTFX_STOP("MinigameTransitionIn");
					GRAPHICS::ANIMPOSTFX_PLAY("MinigameTransitionOut", 0, false);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					MISC::CLEAR_AREA_OF_PEDS(Local_93.f_47, 1000f, 1);
					MISC::CLEAR_AREA(Local_93.f_47, 1000f, true, false, false, false);
					if (Local_56.f_49 != -15)
					{
						CLOCK::SET_CLOCK_TIME(__LIB_0__.func_196(Local_56.f_49), __LIB_0__.func_195(Local_56.f_49), __LIB_0__.func_483(Local_56.f_49));
					}
					__LIB_1__.func_37(&(Local_56.f_658));
					Local_56.f_657 = 0;
					Local_56.f_661 = 0;
					__LIB_21__.func_672();
					__LIB_19__.func_72(&(Local_56.f_678), 0);
					iLocal_366 = 0;
					HUD::THEFEED_FLUSH_QUEUE();
					func_20(1);
					func_19();
					ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
					func_18();
					func_4();
					__LIB_8__.func_770(0);
					Local_56.f_62 = 0;
					Local_56.f_73 = 0;
					func_3(&Local_56);
					if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_SNIPERRIFLE"), false))
					{
						WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_SNIPERRIFLE"), true);
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_56.f_673))
					{
						VEHICLE::DELETE_VEHICLE(&(Local_56.f_673));
					}
					STREAMING::REQUEST_MODEL(joaat("blazer"));
					while (!STREAMING::HAS_MODEL_LOADED(joaat("blazer")))
					{
						SYSTEM::WAIT(0);
					}
					MISC::CLEAR_AREA_OF_VEHICLES(-1707.4337f, 4666.5625f, 22.1095f, 2f, false, false, false, false, false, false, 0);
					Local_56.f_673 = VEHICLE::CREATE_VEHICLE(joaat("blazer"), -1707.4337f, 4666.5625f, 22.1095f, 323.2491f, true, true, false);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("blazer"));
					func_2();
					func_554(MISC::GET_GAME_TIMER() + 1000);
				}
				else if (__LIB_29__.func_686() < MISC::GET_GAME_TIMER())
				{
					CAM::DO_SCREEN_FADE_IN(500);
					iLocal_333 = 1;
					iLocal_334 = 0;
				}
			}
			break;
		case 5:
			break;
	}
}

void func_2()//Position - 0x540
{
	int iVar0;
	int iVar1;
	int iVar2;
	while (ITEMSET::GET_ITEMSET_SIZE(Local_56.f_655) > 0)
	{
		iVar0 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(0, Local_56.f_655);
		ITEMSET::REMOVE_FROM_ITEMSET(iVar0, Local_56.f_655);
		if (ENTITY::IS_AN_ENTITY(iVar0))
		{
			iVar1 = iVar0;
			iVar2 = HUD::GET_BLIP_FROM_ENTITY(iVar1);
			HUD::REMOVE_BLIP(&iVar2);
			ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar1);
		}
		ITEMSET::CLEAN_ITEMSET(Local_56.f_655);
	}
	while (ITEMSET::GET_ITEMSET_SIZE(Local_56.f_656) > 0)
	{
		iVar0 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(0, Local_56.f_656);
		ITEMSET::REMOVE_FROM_ITEMSET(iVar0, Local_56.f_656);
		if (ENTITY::IS_AN_ENTITY(iVar0))
		{
			iVar1 = iVar0;
			iVar2 = HUD::GET_BLIP_FROM_ENTITY(iVar1);
			HUD::REMOVE_BLIP(&iVar2);
			ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar1);
		}
		ITEMSET::CLEAN_ITEMSET(Local_56.f_656);
	}
}

void func_3(var uParam0)//Position - 0x5F2
{
	uParam0->f_34 = 0;
	uParam0->f_33 = 0;
	uParam0->f_35 = 0;
	uParam0->f_32 = 0;
	uParam0->f_48 = -1;
}

void func_4()//Position - 0x613
{
	int iVar0;
	iLocal_65 = 1;
	iLocal_342 = 0;
	iLocal_341 = 0;
	iLocal_153 = 0;
	iLocal_158 = 0;
	iLocal_66 = 0;
	iLocal_344 = 0;
	iLocal_345 = 0;
	iLocal_154 = 0;
	iLocal_357 = 0;
	iLocal_358 = 0;
	iLocal_359 = 0;
	iLocal_330 = 0;
	iLocal_77 = MISC::GET_GAME_TIMER() + 5000;
	Local_56.f_6 = 0;
	Local_56.f_1 = 0;
	Local_56.f_7 = 0;
	Local_56.f_8 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		Local_56.f_9[iVar0] = 0;
		iVar0++;
	}
	Local_56.f_50 = 0;
	Local_56.f_51 = 0;
	Local_56.f_52 = 0;
	Local_56.f_53 = 0;
	Local_56.f_61 = 0;
	if (Local_56.f_49 == -15)
	{
		Local_56.f_49 = __LIB_18__.func_240();
	}
	if (iLocal_335 != 0)
	{
		iLocal_335 = 0;
	}
	func_5();
	iVar0 = 0;
	while (iVar0 < Local_56.f_37)
	{
		Local_56.f_37[iVar0] = 0;
		iVar0++;
	}
	if (ITEMSET::IS_ITEMSET_VALID(Local_56.f_655))
	{
		ITEMSET::CLEAN_ITEMSET(Local_56.f_655);
	}
	else
	{
		Local_56.f_655 = ITEMSET::CREATE_ITEMSET(false);
	}
	if (ITEMSET::IS_ITEMSET_VALID(Local_56.f_656))
	{
		ITEMSET::CLEAN_ITEMSET(Local_56.f_656);
	}
	else
	{
		Local_56.f_656 = ITEMSET::CREATE_ITEMSET(false);
	}
	GRAPHICS::REMOVE_DECALS_IN_RANGE(Local_93.f_47, 800f);
	MISC::CLEAR_AREA_OF_PEDS(Local_93.f_47, 800f, 0);
}

void func_5()//Position - 0x75D
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_113386.f_10049.f_109 == 0)
		{
			Global_113386.f_10049.f_111[iVar0] = -1;
		}
		Local_56.f_19[iVar0 /*3*/] = Global_113386.f_10049.f_111[iVar0];
		iVar0++;
	}
	func_6();
}

void func_6()//Position - 0x7AC
{
	char cVar0[16];
	HUD::CLEAR_BRIEF();
	HUD::BEGIN_TEXT_COMMAND_ADD_DIRECTLY_TO_PREVIOUS_BRIEFS("AHT_RTIT");
	HUD::END_TEXT_COMMAND_ADD_DIRECTLY_TO_PREVIOUS_BRIEFS(false);
	if (Local_56.f_19[0 /*3*/] != -1)
	{
		StringCopy(&cVar0, "HUNTT_HUNTER_", 16);
		StringIntConCat(&cVar0, Local_56.f_19[0 /*3*/] + 1, 16);
		HUD::BEGIN_TEXT_COMMAND_ADD_DIRECTLY_TO_PREVIOUS_BRIEFS(&cVar0);
		HUD::END_TEXT_COMMAND_ADD_DIRECTLY_TO_PREVIOUS_BRIEFS(false);
		StringCopy(&cVar0, "HUNTC_HUNTER_", 16);
		StringIntConCat(&cVar0, Local_56.f_19[0 /*3*/] + 1, 16);
		HUD::BEGIN_TEXT_COMMAND_ADD_DIRECTLY_TO_PREVIOUS_BRIEFS(&cVar0);
		HUD::END_TEXT_COMMAND_ADD_DIRECTLY_TO_PREVIOUS_BRIEFS(false);
		if (Local_56.f_19[0 /*3*/] != 5)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "CHALLENGE_UNLOCKED", "HUD_AWARDS", true);
		}
	}
	if (Local_56.f_19[2 /*3*/] != -1)
	{
		StringCopy(&cVar0, "HUNTT_WEAPON_", 16);
		StringIntConCat(&cVar0, Local_56.f_19[2 /*3*/] + 1, 16);
		HUD::BEGIN_TEXT_COMMAND_ADD_DIRECTLY_TO_PREVIOUS_BRIEFS(&cVar0);
		HUD::END_TEXT_COMMAND_ADD_DIRECTLY_TO_PREVIOUS_BRIEFS(false);
		StringCopy(&cVar0, "HUNTC_WEAPON_", 16);
		StringIntConCat(&cVar0, Local_56.f_19[2 /*3*/] + 1, 16);
		HUD::BEGIN_TEXT_COMMAND_ADD_DIRECTLY_TO_PREVIOUS_BRIEFS(&cVar0);
		HUD::END_TEXT_COMMAND_ADD_DIRECTLY_TO_PREVIOUS_BRIEFS(false);
		if (Local_56.f_19[2 /*3*/] != 5)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "CHALLENGE_UNLOCKED", "HUD_AWARDS", true);
		}
	}
	if (Local_56.f_19[1 /*3*/] != -1)
	{
		StringCopy(&cVar0, "HUNTT_PHOTO_", 16);
		StringIntConCat(&cVar0, Local_56.f_19[1 /*3*/] + 1, 16);
		HUD::BEGIN_TEXT_COMMAND_ADD_DIRECTLY_TO_PREVIOUS_BRIEFS(&cVar0);
		HUD::END_TEXT_COMMAND_ADD_DIRECTLY_TO_PREVIOUS_BRIEFS(false);
		StringCopy(&cVar0, "HUNTC_PHOTO_", 16);
		StringIntConCat(&cVar0, Local_56.f_19[1 /*3*/] + 1, 16);
		HUD::BEGIN_TEXT_COMMAND_ADD_DIRECTLY_TO_PREVIOUS_BRIEFS(&cVar0);
		HUD::END_TEXT_COMMAND_ADD_DIRECTLY_TO_PREVIOUS_BRIEFS(false);
		if (Local_56.f_19[1 /*3*/] != 5)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "CHALLENGE_UNLOCKED", "HUD_AWARDS", true);
		}
	}
}

void func_18()//Position - 0xBD9
{
	if (CAM::DOES_CAM_EXIST(iLocal_361))
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::DESTROY_CAM(iLocal_361, false);
	}
}

void func_19()//Position - 0xBFF
{
	int iVar0;
	iVar0 = PLAYER::PLAYER_PED_ID();
	ENTITY::SET_ENTITY_COORDS(iVar0, Local_349, true, false, false, true);
	ENTITY::SET_ENTITY_HEADING(iVar0, fLocal_350);
	PED::CLEAR_PED_BLOOD_DAMAGE(iVar0);
	PED::RESET_PED_VISIBLE_DAMAGE(iVar0);
	PED::CLEAR_PED_WETNESS(iVar0);
	if (PED::GET_PED_STEALTH_MOVEMENT(iVar0))
	{
		PED::SET_PED_STEALTH_MOVEMENT(iVar0, false, 0);
	}
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
}

void func_20(bool bParam0)//Position - 0xC57
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!MISC::IS_STRING_NULL(&(Global_113386.f_14141[iVar0 /*104*/])))
		{
			if ((bParam0 && Global_113386.f_14141[iVar0 /*104*/].f_17 == 54) || !bParam0)
			{
				__LIB_36__.func_409(&(Global_113386.f_14141[iVar0 /*104*/]));
			}
		}
		iVar0++;
	}
}

void func_46()//Position - 0x164B
{
	int iVar0;
	func_49();
	iVar0 = 0;
	while (iVar0 < 8)
	{
		__LIB_0__.func_523(&(Local_53[iVar0 /*36*/].f_1));
		if (ENTITY::DOES_ENTITY_EXIST(Local_53[iVar0 /*36*/]) && ENTITY::IS_ENTITY_A_MISSION_ENTITY(Local_53[iVar0 /*36*/]))
		{
			PED::DELETE_PED(&(Local_53[iVar0 /*36*/]));
		}
		__LIB_0__.func_523(&(Local_53[iVar0 /*36*/].f_1));
		func_47(iVar0, 0);
		Local_53[iVar0 /*36*/].f_16 = 0;
		Local_53[iVar0 /*36*/].f_6 = 0;
		iVar0++;
	}
	iLocal_72 = 0;
	iLocal_73 = 0;
}

void func_47(int iParam0, int iParam1)//Position - 0x16C9
{
	if (iParam0 < 0 || iParam0 >= 8)
	{
		return;
	}
	Local_53[iParam0 /*36*/].f_9 = iParam1;
}

void func_49()//Position - 0x1710
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 58)
	{
		Local_55[iVar0 /*5*/].f_3 = 0;
		Local_55[iVar0 /*5*/].f_4 = 0;
		iVar0++;
	}
}

void func_50()//Position - 0x173F
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		__LIB_0__.func_523(&(Local_173[iVar0 /*29*/].f_1));
		Local_173[iVar0 /*29*/].f_6 = 0;
		Local_173[iVar0 /*29*/].f_4 = 0;
		Local_173[iVar0 /*29*/].f_25 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(5000, 20000));
		Local_173[iVar0 /*29*/].f_26 = 1;
		Local_173[iVar0 /*29*/].f_12 = 1;
		Local_173[iVar0 /*29*/].f_2 = 0;
		if (ENTITY::DOES_ENTITY_EXIST(Local_173[iVar0 /*29*/]))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_173[iVar0 /*29*/]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		__LIB_0__.func_523(&(Local_174[iVar0 /*29*/].f_1));
		Local_174[iVar0 /*29*/].f_6 = 0;
		Local_174[iVar0 /*29*/].f_4 = 0;
		Local_174[iVar0 /*29*/].f_25 = (MISC::GET_GAME_TIMER() + 210000);
		Local_174[iVar0 /*29*/].f_26 = 1;
		Local_174[iVar0 /*29*/].f_12 = 1;
		Local_174[iVar0 /*29*/].f_2 = 0;
		if (ENTITY::DOES_ENTITY_EXIST(Local_174[iVar0 /*29*/]))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_174[iVar0 /*29*/]));
		}
		iVar0++;
	}
}

void func_51()//Position - 0x1845
{
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("HUNTING_02_SETTINGS"))
	{
		AUDIO::STOP_AUDIO_SCENE("HUNTING_02_SETTINGS");
		AUDIO::STOP_SOUND(iLocal_82);
		AUDIO::RELEASE_SOUND_ID(iLocal_82);
		iLocal_82 = -1;
	}
}

int func_92(bool bParam0)//Position - 0x400A
{
	var uVar0;
	var uVar1;
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	uVar1 = func_211(&bLocal_343, &uVar0, bParam0, iLocal_366);
	if (CAM::IS_SCREEN_FADED_IN())
	{
		if ((!bLocal_326 && MISC::GET_GAME_TIMER() > iLocal_329) && iLocal_329 != 0)
		{
			__LIB_7__.func_44(&uLocal_200, 1128792064, 1, 0, 1, 1065353216);
		}
		if (PLAYER::IS_PLAYER_ONLINE())
		{
			if (!Local_56.f_1116)
			{
				Local_56.f_1116 = 1;
				iLocal_366 = 0;
				func_555();
				__LIB_0__.func_924(&uLocal_200, 0, 0, 1, 1);
				__LIB_0__.func_713(&uLocal_200, "HCONT", 2, 215, 1, 1, 0);
				if (!bParam0)
				{
					__LIB_0__.func_713(&uLocal_200, "HRETRY", 2, 216, 1, 1, 0);
				}
				__LIB_30__.func_242(&uLocal_200, 1);
			}
			if (!iLocal_366)
			{
				if (Global_2097157.f_1 && !Global_2097157.f_2)
				{
					func_194();
					Global_2097157.f_2 = 1;
				}
				if (__LIB_40__.func_551(&(Local_56.f_678)))
				{
					__LIB_0__.func_924(&uLocal_200, 0, 0, 1, 1);
					__LIB_0__.func_713(&uLocal_200, "HCONT", 2, 215, 1, 1, 0);
					if (!bParam0)
					{
						__LIB_0__.func_713(&uLocal_200, "HRETRY", 2, 216, 1, 1, 0);
					}
					__LIB_0__.func_713(&uLocal_200, "HLEADR", 2, 211, 1, 1, 0);
					__LIB_30__.func_242(&uLocal_200, 1);
					iLocal_366 = 1;
					Global_2097532 = 1;
				}
			}
		}
		if (iLocal_330)
		{
			if (PLAYER::IS_PLAYER_ONLINE())
			{
				func_107();
			}
			else
			{
				if (__LIB_26__.func_185(&iLocal_365, 0))
				{
					iLocal_365 = 0;
					iLocal_330 = 0;
					__LIB_0__.func_924(&uLocal_200, 0, 0, 1, 1);
					__LIB_0__.func_713(&uLocal_200, "HCONT", 2, 215, 1, 1, 0);
					if (!bParam0)
					{
						__LIB_0__.func_713(&uLocal_200, "HRETRY", 2, 216, 1, 1, 0);
					}
					__LIB_0__.func_713(&uLocal_200, "HLEADR", 2, 211, 1, 1, 0);
					__LIB_30__.func_242(&uLocal_200, 1);
				}
				func_554(0);
				bLocal_326 = false;
				bLocal_343 = false;
				return 0;
			}
		}
		else if (!bLocal_326 && uVar0)
		{
			if (Local_56.f_672)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "LOSER", "HUD_AWARDS", true);
				Local_56.f_672 = 0;
			}
			func_93(&(Local_56.f_74));
		}
	}
	return uVar1;
}

void func_93(var uParam0)//Position - 0x4208
{
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
	__LIB_35__.func_928(uParam0, 0, 1065353216, 0, 0, 0);
}

void func_107()//Position - 0x48D6
{
	func_108(&(Local_56.f_1115), &(Local_56.f_678));
}

void func_108(var uParam0, var uParam1)//Position - 0x48EE
{
	int iVar0;
	bool bVar1;
	var uVar2[3];
	int iVar3;
	bool bVar4;
	bool bVar5;
	struct<8> Var6;
	char[] cVar7[8];
	int iVar8[3];
	int iVar9;
	struct<13> Var10;
	var uVar11;
	struct<3> Var12;
	struct<3> Var13;
	bool bVar14;
	__LIB_0__.func_495(&(Global_2103068.f_49), 1, 0);
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	__LIB_1__.func_304();
	__LIB_8__.func_611(0);
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	__LIB_7__.func_167(1);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
	__LIB_0__.func_660(1);
	__LIB_0__.func_733(1);
	if (!__LIB_19__.func_797())
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("LEADERBOARD_SCENE"))
		{
			AUDIO::START_AUDIO_SCENE("LEADERBOARD_SCENE");
		}
	}
	if (!BitTest(uParam1->f_42, 3))
	{
		*uParam0 = __LIB_5__.func_29();
		MISC::SET_BIT(&(uParam1->f_42), 3);
	}
	Var10 = { __LIB_0__.func_604(PLAYER::PLAYER_ID()) };
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		if (((!NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS() || !PLAYER::IS_PLAYER_ONLINE()) || (!NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES() && NETWORK::NETWORK_HAS_AGE_RESTRICTIONS())) || Global_2097536.f_2832 != 0)
		{
			if (!PLAYER::IS_PLAYER_ONLINE())
			{
				if (Global_2097536.f_2829 != 2)
				{
					MISC::CLEAR_BIT(&(uParam1->f_42), 1);
					Global_2097536.f_2829 = 2;
				}
			}
			else if (!NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES() && NETWORK::NETWORK_HAS_AGE_RESTRICTIONS())
			{
				if (Global_2097536.f_2829 != 3)
				{
					MISC::CLEAR_BIT(&(uParam1->f_42), 1);
					Global_2097536.f_2829 = 3;
				}
			}
			else if (!NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
			{
				if (Global_2097536.f_2829 != 4)
				{
					MISC::CLEAR_BIT(&(uParam1->f_42), 1);
					Global_2097536.f_2829 = 4;
				}
			}
			else if (Global_2097536.f_2832 != 0)
			{
				if (Global_2097536.f_2829 != 5)
				{
					MISC::CLEAR_BIT(&(uParam1->f_42), 1);
					Global_2097536.f_2829 = 5;
				}
			}
			if (!BitTest(uParam1->f_42, 1))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "CLEAR_ALL_SLOTS");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				__LIB_5__.func_28(*uParam0, Global_2097536.f_2780);
				if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_2097536.f_2780.f_1)))
				{
					if (!__LIB_5__.func_27(uParam1->f_44))
					{
						if (Global_2097536.f_2780.f_26 > 0)
						{
							Var6 = { Global_2097536.f_2780.f_9 };
							__LIB_5__.func_26(*uParam0, &(Global_2097536.f_2780.f_1), &cVar7, &Var6, Global_2097536.f_2780.f_25, Global_2097536.f_2780.f_26);
						}
						else
						{
							__LIB_5__.func_26(*uParam0, &(Global_2097536.f_2780.f_1), &cVar7, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
						}
					}
					else if (!Global_2097536.f_2780.f_27)
					{
						StringCopy(&Var6, "FMMC_COR_SCLB5" /* GXT: Driver */, 64);
						if (Global_2097536.f_2780.f_26 > 0)
						{
							__LIB_5__.func_26(*uParam0, &(Global_2097536.f_2780.f_1), &Var6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, Global_2097536.f_2780.f_26);
						}
						else
						{
							__LIB_5__.func_26(*uParam0, &(Global_2097536.f_2780.f_1), &Var6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
						}
					}
					else
					{
						StringCopy(&Var6, "FMMC_COR_SCLB6" /* GXT: Co-Driver */, 64);
						if (Global_2097536.f_2780.f_26 > 0)
						{
							__LIB_5__.func_26(*uParam0, &(Global_2097536.f_2780.f_1), &Var6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, Global_2097536.f_2780.f_26);
						}
						else
						{
							__LIB_5__.func_26(*uParam0, &(Global_2097536.f_2780.f_1), &Var6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
						}
					}
					__LIB_5__.func_25(*uParam0, "SCLB_C_RANK" /* GXT: POSITION */, &(Global_2097536.f_2717), Global_2097536.f_2708);
				}
				iVar9 = 0;
				MISC::SET_BIT(&iVar9, 4);
				func_171(*uParam0, &iVar3, iVar9, 1, 1);
				iVar9 = 0;
				MISC::SET_BIT(&iVar9, 5);
				func_171(*uParam0, &iVar3, iVar9, 1, 1);
				iVar9 = 0;
				MISC::SET_BIT(&iVar9, 6);
				func_171(*uParam0, &iVar3, iVar9, 1, 1);
				MISC::SET_BIT(&(uParam1->f_42), 1);
				__LIB_5__.func_24(*uParam0);
				MISC::CLEAR_BIT(&(uParam1->f_42), 2);
				HUD::CLEAR_HELP(true);
			}
			else
			{
				__LIB_5__.func_24(*uParam0);
			}
		}
		else
		{
			if (Global_2097536.f_2829 != 1)
			{
				MISC::CLEAR_BIT(&(uParam1->f_42), 1);
				Global_2097536.f_2829 = 1;
			}
			if (!__LIB_41__.func_445(uParam1))
			{
				uParam1->f_246.f_1 = -1;
				MISC::CLEAR_BIT(&(uParam1->f_42), 1);
				if (!BitTest(uParam1->f_42, 0))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "CLEAR_ALL_SLOTS");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					__LIB_5__.func_28(*uParam0, Global_2097536.f_2780);
					if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_2097536.f_2780.f_1)))
					{
						if (!__LIB_5__.func_27(uParam1->f_44))
						{
							if (Global_2097536.f_2780.f_26 > 0)
							{
								Var6 = { Global_2097536.f_2780.f_9 };
								__LIB_5__.func_26(*uParam0, &(Global_2097536.f_2780.f_1), &cVar7, &Var6, 1, Global_2097536.f_2780.f_26);
							}
							else
							{
								__LIB_5__.func_26(*uParam0, &(Global_2097536.f_2780.f_1), &cVar7, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
							}
						}
						else if (!Global_2097536.f_2780.f_27)
						{
							StringCopy(&Var6, "FMMC_COR_SCLB5" /* GXT: Driver */, 64);
							if (Global_2097536.f_2780.f_26 > 0)
							{
								__LIB_5__.func_26(*uParam0, &(Global_2097536.f_2780.f_1), &Var6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, Global_2097536.f_2780.f_26);
							}
							else
							{
								__LIB_5__.func_26(*uParam0, &(Global_2097536.f_2780.f_1), &Var6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
							}
						}
						else
						{
							StringCopy(&Var6, "FMMC_COR_SCLB6" /* GXT: Co-Driver */, 64);
							if (Global_2097536.f_2780.f_26 > 0)
							{
								__LIB_5__.func_26(*uParam0, &(Global_2097536.f_2780.f_1), &Var6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, Global_2097536.f_2780.f_26);
							}
							else
							{
								__LIB_5__.func_26(*uParam0, &(Global_2097536.f_2780.f_1), &Var6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
							}
						}
						__LIB_5__.func_25(*uParam0, "SCLB_C_RANK" /* GXT: POSITION */, &(Global_2097536.f_2717), Global_2097536.f_2708);
					}
					MISC::SET_BIT(&(uParam1->f_42), 0);
					MISC::CLEAR_BIT(&(uParam1->f_42), 2);
				}
				iVar3 = 0;
				iVar0 = 0;
				if (Global_2097536.f_2825 == -1)
				{
					StringCopy(&Var12, "SC_LB_DL0" /* GXT: Downloading */, 24);
					iVar0 = 0;
					while (iVar0 < 3)
					{
						if (iVar0 == 0)
						{
							iVar9 = 0;
							MISC::SET_BIT(&iVar9, 4);
							func_171(*uParam0, &iVar3, iVar9, 0, 0);
						}
						else if (iVar0 == 1)
						{
							iVar9 = 0;
							MISC::SET_BIT(&iVar9, 5);
							func_171(*uParam0, &iVar3, iVar9, 0, 0);
						}
						else if (iVar0 == 2)
						{
							iVar9 = 0;
							MISC::SET_BIT(&iVar9, 6);
							func_171(*uParam0, &iVar3, iVar9, 0, 0);
						}
						iVar9 = 0;
						MISC::SET_BIT(&iVar9, 7);
						__LIB_5__.func_10(*uParam0, iVar3, iVar9, &Var12);
						iVar3++;
						iVar0++;
					}
					Global_2097536.f_2825 = 1;
					__LIB_0__.func_579(&(Global_2097536.f_2823));
				}
				else if (__LIB_2__.func_47(&(Global_2097536.f_2823), 300, 0))
				{
					StringCopy(&Var13, "SC_LB_DL", 24);
					StringIntConCat(&Var13, Global_2097536.f_2825, 24);
					iVar0 = 0;
					while (iVar0 < 3)
					{
						if (iVar0 == 0)
						{
							iVar9 = 0;
							MISC::SET_BIT(&iVar9, 4);
							func_171(*uParam0, &iVar3, iVar9, 0, 0);
						}
						else if (iVar0 == 1)
						{
							iVar9 = 0;
							MISC::SET_BIT(&iVar9, 5);
							func_171(*uParam0, &iVar3, iVar9, 0, 0);
						}
						else if (iVar0 == 2)
						{
							iVar9 = 0;
							MISC::SET_BIT(&iVar9, 6);
							func_171(*uParam0, &iVar3, iVar9, 0, 0);
						}
						iVar9 = 0;
						MISC::SET_BIT(&iVar9, 7);
						__LIB_5__.func_10(*uParam0, iVar3, iVar9, &Var13);
						iVar3++;
						iVar0++;
					}
					Global_2097536.f_2825++;
					if (Global_2097536.f_2825 > 3)
					{
						Global_2097536.f_2825 = 0;
					}
					__LIB_0__.func_579(&(Global_2097536.f_2823));
				}
				__LIB_5__.func_24(*uParam0);
			}
			else
			{
				MISC::CLEAR_BIT(&(uParam1->f_42), 0);
				if (!BitTest(uParam1->f_42, 1))
				{
					iVar0 = 0;
					while (iVar0 < 3)
					{
						uParam1->f_246.f_187[iVar0] = 0;
						iVar0++;
					}
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "CLEAR_ALL_SLOTS");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					__LIB_5__.func_28(*uParam0, Global_2097536.f_2780);
					if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_2097536.f_2780.f_1)))
					{
						if (!__LIB_5__.func_27(uParam1->f_44))
						{
							if (Global_2097536.f_2780.f_26 > 0)
							{
								Var6 = { Global_2097536.f_2780.f_9 };
								__LIB_5__.func_26(*uParam0, &(Global_2097536.f_2780.f_1), &cVar7, &Var6, 1, Global_2097536.f_2780.f_26);
							}
							else
							{
								__LIB_5__.func_26(*uParam0, &(Global_2097536.f_2780.f_1), &cVar7, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
							}
						}
						else if (!Global_2097536.f_2780.f_27)
						{
							StringCopy(&Var6, "FMMC_COR_SCLB5" /* GXT: Driver */, 64);
							if (Global_2097536.f_2780.f_26 > 0)
							{
								__LIB_5__.func_26(*uParam0, &(Global_2097536.f_2780.f_1), &Var6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, Global_2097536.f_2780.f_26);
							}
							else
							{
								__LIB_5__.func_26(*uParam0, &(Global_2097536.f_2780.f_1), &Var6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
							}
						}
						else
						{
							StringCopy(&Var6, "FMMC_COR_SCLB6" /* GXT: Co-Driver */, 64);
							if (Global_2097536.f_2780.f_26 > 0)
							{
								__LIB_5__.func_26(*uParam0, &(Global_2097536.f_2780.f_1), &Var6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, Global_2097536.f_2780.f_26);
							}
							else
							{
								__LIB_5__.func_26(*uParam0, &(Global_2097536.f_2780.f_1), &Var6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
							}
						}
						__LIB_5__.func_25(*uParam0, "SCLB_C_RANK" /* GXT: POSITION */, &(Global_2097536.f_2717), Global_2097536.f_2708);
					}
					if (!BitTest(uParam1->f_42, 6))
					{
						__LIB_1__.func_902(&Global_2101867);
						__LIB_37__.func_171(uParam1, &Global_2101867);
						__LIB_5__.func_7(uParam1, &Global_2101867);
					}
					iVar3 = 0;
					uParam1->f_246.f_2 = 0;
					if ((Global_2097536.f_2704[0] > 1 || (Global_2097536.f_2704[0] > 0 && Global_2097536.f_2775[0] != -1)) || (((Global_2097536.f_2704[0] > 0 && Global_2097536.f_2780.f_27) && __LIB_5__.func_27(uParam1->f_44)) && Global_2097536.f_2775[0] != -1))
					{
						uParam1->f_246.f_1 = -1;
						iVar0 = 0;
						iVar0 = 0;
						while (iVar0 < 12)
						{
							bVar14 = false;
							if (Global_2101867[iVar0 /*100*/].f_75 == 1)
							{
								if (!iVar8[0])
								{
									iVar9 = 0;
									MISC::SET_BIT(&iVar9, 4);
									func_171(*uParam0, &iVar3, iVar9, 0, 0);
									iVar8[0] = 1;
								}
							}
							else if (Global_2101867[iVar0 /*100*/].f_75 == 2)
							{
								if (!iVar8[1])
								{
									iVar9 = 0;
									MISC::SET_BIT(&iVar9, 5);
									if ((Global_2097536.f_2704[1] < 1 && Global_2097536.f_2775[1] == -1) && !(((Global_2097536.f_2704[1] > 0 && Global_2097536.f_2780.f_27) && __LIB_5__.func_27(uParam1->f_44)) && Global_2097536.f_2775[1] != -1))
									{
										func_171(*uParam0, &iVar3, iVar9, 1, 0);
										bVar14 = true;
									}
									else
									{
										func_171(*uParam0, &iVar3, iVar9, 0, 0);
									}
									iVar8[1] = 1;
								}
							}
							else if (Global_2101867[iVar0 /*100*/].f_75 == 3)
							{
								if (!iVar8[2])
								{
									iVar9 = 0;
									MISC::SET_BIT(&iVar9, 6);
									if (!NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT())
									{
										bVar14 = true;
									}
									else if (!NETWORK::NETWORK_ARE_SOCIAL_CLUB_POLICIES_CURRENT())
									{
										bVar14 = true;
									}
									if ((Global_2097536.f_2704[2] < 2 && Global_2097536.f_2775[2] == -1) && !(((Global_2097536.f_2704[2] > 0 && Global_2097536.f_2780.f_27) && __LIB_5__.func_27(uParam1->f_44)) && Global_2097536.f_2775[2] != -1))
									{
										bVar14 = true;
									}
									if (bVar14)
									{
										func_171(*uParam0, &iVar3, iVar9, 1, 0);
									}
									else
									{
										func_171(*uParam0, &iVar3, iVar9, 0, 0);
									}
									iVar8[2] = 1;
								}
							}
							if (__LIB_0__.func_585(Global_2101867[iVar0 /*100*/].f_32))
							{
								if (__LIB_5__.func_27(uParam1->f_44))
								{
									NETWORK::NETWORK_PLAYER_GET_USERID(PLAYER::PLAYER_ID(), &uVar11);
									if (!Global_2101867[iVar0 /*100*/].f_74 && MISC::ARE_STRINGS_EQUAL(&(uParam1->f_44.f_3.f_1[1 /*16*/].f_8), &uVar11))
									{
										bVar14 = true;
									}
								}
								if (!bVar14)
								{
									iVar9 = 0;
									if (!Global_2097536.f_2780.f_27)
									{
										if (__LIB_5__.func_6(&(Global_2101867[iVar0 /*100*/].f_32), &Var10))
										{
											MISC::SET_BIT(&iVar9, 1);
											if (uParam1->f_246.f_1 == -1)
											{
												bVar4 = true;
												uParam1->f_246.f_1 = iVar0;
												MISC::SET_BIT(&iVar9, 3);
											}
										}
									}
									if (__LIB_5__.func_27(uParam1->f_44))
									{
										Var6 = { Global_2101867[iVar0 /*100*/] };
										if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_2101867[iVar0 /*100*/].f_84)) && !MISC::ARE_STRINGS_EQUAL(&(Global_2101867[iVar0 /*100*/].f_84), ""))
										{
											StringConCat(&Var6, "/", 64);
											StringConCat(&Var6, &(Global_2101867[iVar0 /*100*/].f_84), 64);
										}
										__LIB_5__.func_5(*uParam0, iVar3, iVar9, Global_2101867[iVar0 /*100*/].f_59, &Var6, &(Global_2101867[iVar0 /*100*/].f_80));
										uParam1->f_246.f_6[iVar0 /*15*/] = iVar3;
										uParam1->f_246.f_6[iVar0 /*15*/].f_1 = iVar9;
										uParam1->f_246.f_6[iVar0 /*15*/].f_2 = { Global_2101867[iVar0 /*100*/].f_32 };
										uParam1->f_246.f_2++;
									}
									else
									{
										__LIB_5__.func_5(*uParam0, iVar3, iVar9, Global_2101867[iVar0 /*100*/].f_59, &(Global_2101867[iVar0 /*100*/]), &(Global_2101867[iVar0 /*100*/].f_80));
										uParam1->f_246.f_6[iVar0 /*15*/] = iVar3;
										uParam1->f_246.f_6[iVar0 /*15*/].f_1 = iVar9;
										uParam1->f_246.f_6[iVar0 /*15*/].f_2 = { Global_2101867[iVar0 /*100*/].f_32 };
										uParam1->f_246.f_2++;
									}
									bVar1 = false;
									while (bVar1 < Global_2097536.f_2708)
									{
										bVar5 = false;
										if (BitTest(Global_2097536.f_2770, bVar1))
										{
											if (BitTest(Global_2097536.f_2768, bVar1))
											{
												if (Global_2097536.f_2754[bVar1] == Global_2101867[iVar0 /*100*/].f_67[bVar1])
												{
													bVar5 = true;
												}
											}
											if (bVar5)
											{
												__LIB_20__.func_979(Global_2097536.f_2780, bVar1, Global_2101867[iVar0 /*100*/].f_67[bVar1], 0, Global_2101867[iVar0 /*100*/].f_58);
											}
											else
											{
												__LIB_20__.func_979(Global_2097536.f_2780, bVar1, Global_2101867[iVar0 /*100*/].f_67[bVar1], Global_2101867[iVar0 /*100*/].f_74, Global_2101867[iVar0 /*100*/].f_58);
											}
										}
										else
										{
											if (BitTest(Global_2097536.f_2768, bVar1))
											{
												if (Global_2097536.f_2761[bVar1] == Global_2101867[iVar0 /*100*/].f_67[bVar1])
												{
													bVar5 = true;
												}
											}
											if (bVar5)
											{
												__LIB_19__.func_792(Global_2097536.f_2780, bVar1, Global_2101867[iVar0 /*100*/].f_60[bVar1], 0);
											}
											else
											{
												__LIB_19__.func_792(Global_2097536.f_2780, bVar1, Global_2101867[iVar0 /*100*/].f_60[bVar1], Global_2101867[iVar0 /*100*/].f_74);
											}
										}
										bVar1++;
									}
									__LIB_5__.func_1();
									uVar2[(Global_2101867[iVar0 /*100*/].f_75 - 1)]++;
									if (uVar2[(Global_2101867[iVar0 /*100*/].f_75 - 1)] == 2)
									{
										if (Global_2101867[iVar0 /*100*/].f_59 > 2)
										{
											MISC::SET_BIT(&iVar9, 2);
											MISC::SET_BIT(&(uParam1->f_246.f_6[0 /*15*/].f_1), 2);
											__LIB_5__.func_0(*uParam0, (iVar3 - 1), iVar9);
										}
									}
									iVar3++;
								}
							}
							iVar0++;
						}
						iVar0 = 0;
						iVar0 = 0;
						while (iVar0 < 3)
						{
							uParam1->f_246.f_187[iVar0] = uVar2[iVar0];
							iVar0++;
						}
					}
					else
					{
						iVar9 = 0;
						MISC::SET_BIT(&iVar9, 4);
						func_171(*uParam0, &iVar3, iVar9, 1, 0);
						iVar9 = 0;
						MISC::SET_BIT(&iVar9, 5);
						func_171(*uParam0, &iVar3, iVar9, 1, 0);
						iVar9 = 0;
						MISC::SET_BIT(&iVar9, 6);
						func_171(*uParam0, &iVar3, iVar9, 1, 0);
					}
					MISC::SET_BIT(&(uParam1->f_42), 1);
					MISC::CLEAR_BIT(&(uParam1->f_42), 2);
					__LIB_5__.func_24(*uParam0);
					HUD::CLEAR_HELP(true);
					if (uParam1->f_246.f_1 == -1 && !bVar4 == 1)
					{
						if (Global_2097536.f_2704[0] > 1)
						{
							uParam1->f_246.f_1 = 0;
							MISC::SET_BIT(&(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1), 3);
							__LIB_5__.func_0(*uParam0, uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/], uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1);
						}
					}
				}
				else
				{
					__LIB_5__.func_24(*uParam0);
					__LIB_21__.func_617(uParam0, uParam1);
				}
			}
		}
	}
}

void func_171(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0xB899
{
	char* sVar0;
	struct<2> Var1;
	struct<16> Var2;
	bool bVar3;
	struct<13> Var4;
	int iVar5;
	struct<13> Var6;
	int iVar7;
	sVar0 = "";
	if (BitTest(iParam2, 4))
	{
		sVar0 = "SCLB_GLOBAL" /* GXT: GLOBAL */;
	}
	else if (BitTest(iParam2, 5))
	{
		*iParam1++;
		sVar0 = "SCLB_FRIENDS" /* GXT: FRIENDS */;
	}
	else if (BitTest(iParam2, 6))
	{
		*iParam1++;
		if (NETWORK::NETWORK_IS_SIGNED_ONLINE() && NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
		{
			if ((__LIB_0__.func_52() || __LIB_0__.func_53()) && !NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
			{
				sVar0 = "SCLB_CREW" /* GXT: CREW */;
			}
			else
			{
				Var4 = { __LIB_0__.func_604(PLAYER::PLAYER_ID()) };
				if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var4))
				{
					NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Var1, 35, &Var4);
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Var1.f_1)))
					{
						sVar0 = "STRING";
						Var2 = { Var1.f_1 };
						bVar3 = true;
					}
					else
					{
						sVar0 = "SCLB_CREW" /* GXT: CREW */;
					}
				}
				else
				{
					sVar0 = "SCLB_CREW" /* GXT: CREW */;
				}
			}
		}
		else
		{
			sVar0 = "SCLB_CREW" /* GXT: CREW */;
		}
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(*iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	if (bVar3)
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sVar0);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(&Var2);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	else
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sVar0);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	*iParam1++;
	if (bParam4)
	{
		iVar5 = 0;
		MISC::SET_BIT(&iVar5, 7);
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(*iParam1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar5);
		if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			sVar0 = "SCLB_NOT_ONL" /* GXT: Sign in to view leaderboard data. */;
		}
		else if (!NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
		{
			sVar0 = "SCLB_NO_ROS" /* GXT: The Rockstar game services are unavailable right now. Please try again later. */;
		}
		else if (Global_2097536.f_2832 != 0)
		{
			sVar0 = "SCLB_READ_FAIL" /* GXT: Unable to retrieve leaderboard data. Please try again later. */;
		}
		else
		{
			sVar0 = "HUD_PERM" /* GXT: Your profile does not have the correct permissions to access Social Club functionality. */;
		}
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sVar0);
		GRAPHICS::END_TEXT_COMMAND_UNPARSED_SCALEFORM_STRING();
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		*iParam1++;
	}
	else if (bParam3)
	{
		if (BitTest(iParam2, 4))
		{
			sVar0 = "SCLB_NO_GLOBAL" /* GXT: No data available yet for this leaderboard. */;
		}
		else if (BitTest(iParam2, 5))
		{
			if (NETWORK::NETWORK_GET_FRIEND_COUNT() > 0)
			{
				sVar0 = "SCLB_NO_FRNDS" /* GXT: No friends listed on this leaderboard. */;
			}
			else
			{
				sVar0 = "SCLB_NO_FRNDSb" /* GXT: Search for friends on Social Club to add and compare your scores with. */;
			}
		}
		else if (BitTest(iParam2, 6))
		{
			if (NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT())
			{
				if (NETWORK::NETWORK_ARE_SOCIAL_CLUB_POLICIES_CURRENT())
				{
					if (NETWORK::NETWORK_IS_SIGNED_ONLINE() && NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
					{
						if ((__LIB_0__.func_52() || __LIB_0__.func_53()) && !NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
						{
							sVar0 = "SCLB_NO_CREWc" /* GXT: No Crew members listed on this leaderboard. */;
						}
						else
						{
							Var6 = { __LIB_0__.func_604(PLAYER::PLAYER_ID()) };
							if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var6))
							{
								NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Var1, 35, &Var6);
								if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Var1.f_1)))
								{
									sVar0 = "SCLB_NO_CREWb" /* GXT: No ~a~ members listed on this leaderboard. */;
									Var2 = { Var1.f_1 };
									bVar3 = true;
								}
								else
								{
									sVar0 = "SCLB_NO_CREWc" /* GXT: No Crew members listed on this leaderboard. */;
								}
							}
							else
							{
								sVar0 = "SCLB_NO_CREWa" /* GXT: Visit ~HUD_COLOUR_SOCIAL_CLUB~www.rockstargames.com/socialclub~s~ to participate in a Crew. */;
							}
						}
					}
					else
					{
						sVar0 = "SCLB_NO_CREWa" /* GXT: Visit ~HUD_COLOUR_SOCIAL_CLUB~www.rockstargames.com/socialclub~s~ to participate in a Crew. */;
					}
				}
				else
				{
					sVar0 = "SCLB_NO_CREWe" /* GXT: ~HUD_COLOUR_SOCIAL_CLUB~Social Club~s~ policies have been updated. Visit the Players menu, and press ~INPUT_FRONTEND_Y~ to view and accept the updated policies. */;
				}
			}
			else
			{
				sVar0 = "SCLB_NO_CREWd" /* GXT: Sign up to Social Club to gain access to Crew leaderboards. */;
			}
		}
		iVar7 = 0;
		MISC::SET_BIT(&iVar7, 7);
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(*iParam1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
		if (bVar3)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sVar0);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(&Var2);
			GRAPHICS::END_TEXT_COMMAND_UNPARSED_SCALEFORM_STRING();
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sVar0);
			GRAPHICS::END_TEXT_COMMAND_UNPARSED_SCALEFORM_STRING();
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		*iParam1++;
	}
}

void func_194()//Position - 0xC58B
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	uVar0 = 1;
	uVar1 = 1;
	iVar3 = Global_113386.f_10049.f_110;
	if (iVar3 == 0)
	{
		iVar3 = 2147483647;
	}
	if (__LIB_29__.func_687() && __LIB_1__.func_29(811, &uVar1, &uVar0, 0, -1, 1, 0))
	{
		if (Local_56.f_6 >= Local_56.f_5)
		{
			iVar2 = 3;
			iVar3 = SYSTEM::ROUND((__LIB_5__.func_736(&(Local_56.f_58)) * 1000f));
			if (iVar3 < Global_113386.f_10049.f_110 || Global_113386.f_10049.f_110 == 0)
			{
				Global_113386.f_10049.f_110 = iVar3;
			}
		}
		else if (Local_56.f_6 >= Local_56.f_4)
		{
			iVar2 = 2;
		}
		else if (Local_56.f_6 >= Local_56.f_3)
		{
			iVar2 = 1;
		}
		__LIB_13__.func_99(811, 131, Local_56.f_6, 0f, 0);
		__LIB_13__.func_99(811, 147, iVar3, 0f, 0);
		iVar4 = Local_56.f_1;
		iVar4 = (iVar4 - ((Local_56.f_51 + Local_56.f_52) + Local_56.f_53));
		__LIB_13__.func_99(811, 191, iVar4, 0f, 0);
		__LIB_13__.func_99(811, 193, Local_56.f_50, 0f, 0);
		__LIB_13__.func_99(811, 8, Local_56.f_7, 0f, 0);
		__LIB_13__.func_99(811, 192, Local_56.f_9[3], 0f, 0);
		__LIB_13__.func_99(811, 96, iVar2, 0f, 0);
	}
}

int func_211(var uParam0, var uParam1, bool bParam2, bool bParam3)//Position - 0xCE6A
{
	PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/, true);
	if (!iLocal_328)
	{
		if (bParam2)
		{
			iLocal_329 = MISC::GET_GAME_TIMER() + 500;
		}
		else
		{
			iLocal_329 = MISC::GET_GAME_TIMER() + 1000;
		}
		iLocal_328 = 1;
	}
	if (__LIB_29__.func_686() < MISC::GET_GAME_TIMER() && __LIB_29__.func_686() != -1)
	{
		func_554(-1);
		return 0;
	}
	if (bLocal_326)
	{
		return 1;
	}
	if (iLocal_330)
	{
		*uParam1 = 0;
	}
	else
	{
		*uParam1 = 1;
	}
	if (MISC::GET_GAME_TIMER() > iLocal_329 && !bLocal_326)
	{
		if (!iLocal_330)
		{
			if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 211 /*INPUT_FRONTEND_LEADERBOARD*/) && __LIB_30__.func_828(&uLocal_200, 2, 211))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "LEADER_BOARD", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				*uParam1 = 0;
				iLocal_330 = 1;
				if (PLAYER::IS_PLAYER_ONLINE())
				{
					iLocal_331 = 0;
					__LIB_0__.func_924(&uLocal_200, 0, 0, 1, 1);
					__LIB_0__.func_713(&uLocal_200, "HCONT", 2, 215, 1, 1, 0);
					if (!bParam2)
					{
						__LIB_0__.func_713(&uLocal_200, "HRETRY", 2, 216, 1, 1, 0);
					}
					__LIB_0__.func_713(&uLocal_200, "HT_BACK_PMT", 2, 202, 1, 1, 0);
					if (__LIB_11__.func_621(&(Local_56.f_678)))
					{
						__LIB_0__.func_713(&uLocal_200, "SCLB_PROFILE" /* GXT: View Profile */, 2, 217, 1, 1, 0);
						iLocal_331 = 1;
					}
					__LIB_30__.func_242(&uLocal_200, 1);
				}
			}
		}
		else if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			*uParam1 = 1;
			iLocal_330 = 0;
			__LIB_0__.func_924(&uLocal_200, 0, 0, 1, 1);
			__LIB_0__.func_713(&uLocal_200, "HCONT", 2, 215, 1, 1, 0);
			if (!bParam2)
			{
				__LIB_0__.func_713(&uLocal_200, "HRETRY", 2, 216, 1, 1, 0);
			}
			if (bParam3)
			{
				__LIB_0__.func_713(&uLocal_200, "HLEADR", 2, 211, 1, 1, 0);
			}
			__LIB_30__.func_242(&uLocal_200, 1);
		}
		else if (!iLocal_331)
		{
			if (__LIB_11__.func_621(&(Local_56.f_678)))
			{
				if (PLAYER::IS_PLAYER_ONLINE())
				{
					__LIB_0__.func_924(&uLocal_200, 0, 0, 1, 1);
					__LIB_0__.func_713(&uLocal_200, "HCONT", 2, 215, 1, 1, 0);
					if (!bParam2)
					{
						__LIB_0__.func_713(&uLocal_200, "HRETRY", 2, 216, 1, 1, 0);
					}
					__LIB_0__.func_713(&uLocal_200, "HT_BACK_PMT", 2, 202, 1, 1, 0);
					__LIB_0__.func_713(&uLocal_200, "SCLB_PROFILE" /* GXT: View Profile */, 2, 217, 1, 1, 0);
					__LIB_30__.func_242(&uLocal_200, 1);
					iLocal_331 = 1;
				}
			}
		}
		if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 215 /*INPUT_FRONTEND_ENDSCREEN_ACCEPT*/))
		{
			func_554(MISC::GET_GAME_TIMER() + 1000);
			bLocal_326 = true;
			*uParam0 = 0;
			func_212();
			return 0;
		}
		else if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 216 /*INPUT_FRONTEND_ENDSCREEN_EXPAND*/) && !bParam2)
		{
			*uParam0 = 1;
			func_212();
			return 1;
		}
	}
	return 0;
}

void func_212()//Position - 0xD0E4
{
	AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT" /* GXT: Filter List */, "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
}

int func_215()//Position - 0xD1B7
{
	switch (iLocal_363)
	{
		case 0:
			GRAPHICS::ANIMPOSTFX_PLAY("MinigameTransitionIn", 0, false);
			iLocal_363 = 1;
			break;
		case 1:
			if (bLocal_324)
			{
				GRAPHICS::ANIMPOSTFX_STOP("MinigameTransitionIn");
				GRAPHICS::ANIMPOSTFX_PLAY("MinigameTransitionOut", 0, false);
				iLocal_363 = 2;
			}
			break;
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_216()//Position - 0xD20C
{
	struct<3> Var0;
	struct<3> Var1;
	switch (iLocal_363)
	{
		case 0:
			if (CAM::DOES_CAM_EXIST(iLocal_361))
			{
				CAM::DESTROY_CAM(iLocal_361, false);
			}
			if (CAM::DOES_CAM_EXIST(iLocal_362))
			{
				CAM::DESTROY_CAM(iLocal_362, false);
			}
			GRAPHICS::ANIMPOSTFX_PLAY("MinigameTransitionIn", 0, false);
			iLocal_362 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", -1705.3109f, 4664.6797f, 38.8278f, 10.2934f, -1.8316f, -85.2144f, 42.79f, true, 2);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			iLocal_353 = STREAMING::STREAMVOL_CREATE_FRUSTUM(-1708.5167f, 4663.8687f, 44.9329f, 6.5082f, 0f, -85.7712f, 200f, 12, 127);
			__LIB_32__.func_742(-1703.123f, 4665.463f, 21.2f, -1704.077f, 4660.555f, 25.4f, 7f, -1710.8226f, 4656.964f, 21.8008f, 82.9948f, 1, 1, 1, 0, 0);
			iLocal_363 = 1;
			break;
		case 1:
			if (STREAMING::STREAMVOL_IS_VALID(iLocal_353))
			{
				if (STREAMING::STREAMVOL_HAS_LOADED(iLocal_353) || __LIB_29__.func_686() < MISC::GET_GAME_TIMER())
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(500);
					}
					STREAMING::STREAMVOL_DELETE(iLocal_353);
					iLocal_328 = 0;
					iLocal_363 = 2;
				}
			}
			break;
		case 2:
			if (bLocal_324)
			{
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
				func_51();
				HUD::CLEAR_PRINTS();
				func_46();
				func_554(MISC::GET_GAME_TIMER() + 500);
				iLocal_363 = 3;
			}
			break;
		case 3:
			if (__LIB_29__.func_686() < MISC::GET_GAME_TIMER())
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_351) || ENTITY::IS_ENTITY_DEAD(iLocal_351, false))
				{
					GRAPHICS::ANIMPOSTFX_STOP("MinigameTransitionIn");
					GRAPHICS::ANIMPOSTFX_PLAY("MinigameTransitionOut", 0, false);
					return 1;
				}
				Var0 = { ENTITY::GET_ENTITY_COORDS(iLocal_351, false) };
				Var1 = { ENTITY::GET_ENTITY_ROTATION(iLocal_351, 2) };
				iLocal_360 = PED::CREATE_SYNCHRONIZED_SCENE(Var0, Var1, 2);
				PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_360, false);
				iLocal_361 = CAM::CREATE_CAMERA(joaat("DEFAULT_ANIMATED_CAMERA"), false);
				CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_361, iLocal_360, "_Trevor_cam", "oddjobs@hunterOutro");
				TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_360, "oddjobs@hunterOutro", "_Trevor", 1000f, -2f, 0, 0, 1000f, 0);
				PED::SET_FORCE_FOOTSTEP_UPDATE(PLAYER::PLAYER_PED_ID(), true);
				ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_351, iLocal_360, "_Trevor_journey", "oddjobs@hunterOutro", 1000f, -2f, 0, 1000f);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_361, iLocal_362, 700, 1, 1);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "QUIT_WHOOSH", "HUD_MINI_GAME_SOUNDSET", true);
				GRAPHICS::ANIMPOSTFX_STOP("MinigameTransitionIn");
				GRAPHICS::ANIMPOSTFX_PLAY("MinigameTransitionOut", 0, false);
				func_217(PLAYER::PLAYER_PED_ID());
				func_554(MISC::GET_GAME_TIMER() + 15000);
				iLocal_363 = 4;
			}
			break;
		case 4:
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_360) > 0.99f || __LIB_29__.func_686() < MISC::GET_GAME_TIMER())
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_351) && !ENTITY::IS_ENTITY_DEAD(iLocal_351, false))
				{
					ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_351, 1000f, true);
				}
				CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(false, 0f, 3, 0);
				return 1;
			}
			break;
	}
	return 0;
}

void func_217(int iParam0)//Position - 0xD4F9
{
	int iVar0;
	int iVar1;
	bool bVar2;
	iVar0 = __LIB_18__.func_168(iParam0);
	if (__LIB_0__.func_43(iVar0))
	{
		if (!Global_100362[iVar0])
		{
			if (Global_113386.f_2363.f_539.f_2391[iVar0] != 0)
			{
				if (__LIB_0__.func_352(iParam0) != Global_113386.f_2363.f_539.f_2391[iVar0])
				{
					__LIB_10__.func_1(iVar0);
					Global_113386.f_2363.f_539.f_2391[iVar0] = __LIB_0__.func_352(iParam0);
				}
			}
		}
		func_319(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
		if (!Global_100362[iVar0])
		{
			bVar2 = false;
			if (iVar0 == 0)
			{
				if (!__LIB_0__.func_365(49))
				{
					iVar1 = func_304(iParam0, 12, -1);
					if (iVar1 == 16)
					{
						bVar2 = true;
					}
					func_218(__LIB_6__.func_757(0), 12, 16, 0, 0, 0, 0);
				}
				if (!__LIB_0__.func_365(44))
				{
					iVar1 = func_304(iParam0, 3, -1);
					if (((((iVar1 == 70 || iVar1 == 71) || iVar1 == 72) || iVar1 == 73) || iVar1 == 74) || iVar1 == 75)
					{
						bVar2 = true;
					}
					iVar1 = func_304(iParam0, 4, -1);
					if ((((iVar1 == 41 || iVar1 == 42) || iVar1 == 43) || iVar1 == 44) || iVar1 == 45)
					{
						bVar2 = true;
					}
					func_218(__LIB_6__.func_757(0), 3, 70, 1, 0, 0, 0);
					func_218(__LIB_6__.func_757(0), 3, 71, 1, 0, 0, 0);
					func_218(__LIB_6__.func_757(0), 3, 72, 1, 0, 0, 0);
					func_218(__LIB_6__.func_757(0), 3, 73, 1, 0, 0, 0);
					func_218(__LIB_6__.func_757(0), 3, 74, 1, 0, 0, 0);
					func_218(__LIB_6__.func_757(0), 3, 75, 1, 0, 0, 0);
					func_218(__LIB_6__.func_757(0), 4, 41, 1, 0, 0, 0);
					func_218(__LIB_6__.func_757(0), 4, 42, 1, 0, 0, 0);
					func_218(__LIB_6__.func_757(0), 4, 43, 1, 0, 0, 0);
					func_218(__LIB_6__.func_757(0), 4, 44, 1, 0, 0, 0);
					func_218(__LIB_6__.func_757(0), 4, 45, 1, 0, 0, 0);
				}
			}
			else if (iVar0 == 2)
			{
				iVar1 = func_304(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				__LIB_10__.func_1(iVar0);
				func_319(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
			}
		}
		Global_100362[iVar0] = 1;
	}
}

void func_218(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)//Position - 0xD756
{
	__LIB_38__.func_82(iParam0, iParam1, iParam2, bParam3);
	func_291(iParam0, iParam1, iParam2, bParam4, 1);
	if (bParam5)
	{
		__LIB_0__.func_364(iParam0, iParam1, iParam2, 0);
	}
	if (iParam6 == 1)
	{
		__LIB_38__.func_81(iParam0, iParam1, iParam2, 0);
	}
}

int func_291(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x2473D
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	Global_78130[1 /*14*/] = { __LIB_35__.func_896(iParam0, iParam1, iParam2, -1) };
	if (BitTest(Global_78130[1 /*14*/].f_6, 0) && !BitTest(Global_78130[1 /*14*/].f_6, 6))
	{
		if (bParam3)
		{
			__LIB_0__.func_31(iParam1, Global_78130[1 /*14*/].f_5, Global_78130[1 /*14*/].f_2, 1, Global_78130[1 /*14*/].f_1, 1, 0);
			if (iParam1 == 12)
			{
				iVar0 = 1;
				if (iParam0 == joaat("Player_Zero"))
				{
					if (iParam2 == 31)
					{
						iVar0 = 0;
					}
				}
				if (iVar0 == 1)
				{
					uVar3 = { __LIB_18__.func_180(iParam0, iParam2) };
					iVar1 = 0;
					while (iVar1 <= 14)
					{
						if ((uVar3[iVar1] != -99 && iVar1 != 12) && iVar1 != 14)
						{
							if (iVar1 != 13)
							{
								func_291(iParam0, iVar1, uVar3[iVar1], 1, 1);
								__LIB_38__.func_82(iParam0, iVar1, uVar3[iVar1], 1);
							}
							else
							{
								uVar4 = { __LIB_18__.func_247(iParam0, uVar3[iVar1]) };
								iVar2 = 0;
								while (iVar2 <= 8)
								{
									func_291(iParam0, 14, uVar4[iVar2], 1, 1);
									__LIB_38__.func_82(iParam0, 14, uVar4[iVar2], 1);
									iVar2++;
								}
							}
						}
						iVar1++;
					}
				}
			}
		}
		else
		{
			__LIB_0__.func_31(iParam1, Global_78130[1 /*14*/].f_5, Global_78130[1 /*14*/].f_2, 1, Global_78130[1 /*14*/].f_1, 0, 1);
		}
		if (iParam4 == 1 && bParam3 == 1)
		{
			switch (iParam0)
			{
				case joaat("Player_Zero"):
					break;
				case joaat("Player_One"):
					switch (iParam1)
					{
						case 3:
							if (iParam2 >= 176 && iParam2 <= 191)
							{
								iVar5 = (227 + Global_78130[1 /*14*/].f_4);
								func_291(iParam0, 3, iVar5, 1, 0);
							}
							else if (iParam2 >= 227 && iParam2 <= 242)
							{
								iVar5 = (176 + Global_78130[1 /*14*/].f_4);
								func_291(iParam0, 3, iVar5, 1, 0);
							}
							break;
						case 11:
							if (iParam2 >= 9 && iParam2 <= 24)
							{
								iVar5 = (25 + Global_78130[1 /*14*/].f_4);
								func_291(iParam0, 11, iVar5, 1, 0);
							}
							else if (iParam2 >= 25 && iParam2 <= 40)
							{
								iVar5 = (9 + Global_78130[1 /*14*/].f_4);
								func_291(iParam0, 11, iVar5, 1, 0);
							}
							break;
						case 8:
							if (iParam2 >= 27 && iParam2 <= 42)
							{
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_291(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_291(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 43 && iParam2 <= 58)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_291(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_291(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 59 && iParam2 <= 74)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_291(iParam0, 8, iVar5, 1, 0);
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_291(iParam0, 8, iVar5, 1, 0);
							}
							break;
						case 14:
							if (iParam2 >= 64 && iParam2 <= 79)
							{
								iVar5 = (41 + Global_78130[1 /*14*/].f_4);
								func_291(iParam0, 14, iVar5, 1, 0);
							}
							break;
					}
					break;
				case joaat("Player_Two"):
					switch (iParam1)
					{
						case 4:
							if (iParam2 >= 81 && iParam2 <= 90)
							{
								iVar5 = (94 + Global_78130[1 /*14*/].f_4);
								func_291(iParam0, 4, iVar5, 1, 0);
							}
							break;
						case 12:
							if (iParam2 == 2)
							{
								func_291(iParam0, 14, 17, 1, 0);
							}
							break;
					}
					break;
				}
		}
		return 1;
	}
	return 0;
}

int func_304(int iParam0, int iParam1, int iParam2)//Position - 0x27CCB
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
				if (func_311(iParam0, iParam1, iVar0))
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
				if (func_311(iParam0, iParam1, iVar1))
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

int func_311(int iParam0, int iParam1, int iParam2)//Position - 0x2812A
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
				if (!func_311(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_18__.func_247(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_311(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_35__.func_896(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_311(iParam0, 14, iVar4))
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
			if (!func_311(iParam0, 14, uVar8[iVar7]))
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

void func_319(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)//Position - 0x294E4
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	struct<5> Var12;
	if (!PED::IS_PED_INJURED(iParam0) || iParam5)
	{
		iVar0 = __LIB_18__.func_168(iParam0);
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar3 = 0;
		while (iVar3 < 12)
		{
			if (iVar3 != 1 || (iVar3 == 1 && !bParam2))
			{
				if (bParam4)
				{
					if (uParam1->f_13[iVar3] != 0 && uParam1->f_13[iVar3] >= PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(iParam0, iVar3))
					{
						uParam1->f_13[iVar3] = 0;
					}
					if ((*uParam1)[iVar3] != 0 && (*uParam1)[iVar3] >= PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(iParam0, iVar3, uParam1->f_13[iVar3]))
					{
						(*uParam1)[iVar3] = 0;
					}
				}
				PED::SET_PED_COMPONENT_VARIATION(iParam0, iVar3, uParam1->f_13[iVar3], (*uParam1)[iVar3], uParam1->f_26[iVar3]);
			}
			iVar3++;
		}
		iVar3 = 0;
		while (iVar3 < 9)
		{
			if (bParam4)
			{
				if (uParam1->f_39[iVar3] != -1 && uParam1->f_39[iVar3] != 255)
				{
					if (uParam1->f_39[iVar3] >= PED::GET_NUMBER_OF_PED_PROP_DRAWABLE_VARIATIONS(iParam0, iVar3))
					{
						uParam1->f_39[iVar3] = -1;
					}
					else if (uParam1->f_49[iVar3] >= PED::GET_NUMBER_OF_PED_PROP_TEXTURE_VARIATIONS(iParam0, iVar3, uParam1->f_39[iVar3]))
					{
						uParam1->f_49[iVar3] = 0;
					}
				}
			}
			if (uParam1->f_39[iVar3] != -1 && uParam1->f_39[iVar3] != 255)
			{
				PED::SET_PED_PROP_INDEX(iParam0, iVar3, uParam1->f_39[iVar3], uParam1->f_49[iVar3], false);
			}
			else
			{
				PED::CLEAR_PED_PROP(iParam0, iVar3);
			}
			iVar3++;
		}
		if (__LIB_0__.func_43(iVar0))
		{
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_59 = uParam1->f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = uParam1->f_60;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = uParam1->f_61;
			if (func_515(iParam0, iVar1, &iVar2, 0))
			{
				func_501(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_62 = uParam1->f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = uParam1->f_63;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = uParam1->f_64;
			if (func_499(iParam0, iVar1, &iVar2))
			{
				func_501(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			bVar4 = func_496(iParam0);
			__LIB_0__.func_427(754, uParam1->f_60, Global_78127, 1, 0);
			__LIB_0__.func_427(755, uParam1->f_61, Global_78127, 1, 0);
			iVar5 = __LIB_0__.func_350(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
			if (iVar5 != -99)
			{
				iVar6 = -99;
				if (iVar1 == joaat("MP_M_Freemode_01"))
				{
					iVar6 = __LIB_18__.func_181(iVar5);
				}
				else if (iVar1 == joaat("MP_F_Freemode_01"))
				{
					iVar6 = __LIB_18__.func_186(iVar5);
				}
				if (iVar6 != -99 && iVar5 != iVar6)
				{
					iVar5 = iVar6;
				}
			}
			func_322(iParam0, 2, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			if (!bParam2)
			{
				iVar7 = __LIB_0__.func_350(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_322(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			}
			if (!bParam3)
			{
				iVar8 = __LIB_6__.func_766(iParam0, uParam1->f_39[0], uParam1->f_49[0], 0);
				func_322(iParam0, 14, iVar8, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			}
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iParam0 == PLAYER::PLAYER_PED_ID())
		{
			iVar9 = uParam1->f_59;
			if (iVar1 == joaat("MP_M_Freemode_01"))
			{
				iVar9 = __LIB_18__.func_181(iVar9);
			}
			else
			{
				iVar9 = __LIB_18__.func_186(iVar9);
			}
			__LIB_0__.func_427(753, iVar9, Global_78127, 1, 0);
			__LIB_0__.func_427(2053, iVar9, Global_78127, 1, 0);
			__LIB_6__.func_796(161, 1, -1, 1);
		}
		if (iVar1 == joaat("MP_M_Freemode_01") || iVar1 == joaat("MP_F_Freemode_01"))
		{
			iVar10 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1));
			iVar11 = FILES::GET_HASH_NAME_FOR_PROP(iParam0, 1, PED::GET_PED_PROP_INDEX(iParam0, 1), PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, 1));
			if (iVar10 == joaat("DLC_MP_ARENA_M_BERD_13_0") || iVar10 == joaat("DLC_MP_ARENA_F_BERD_13_0"))
			{
				if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar11, joaat("ARENA_DRAW_0"), 1))
				{
					FILES::INIT_SHOP_PED_PROP(&Var12);
					if (iVar10 == joaat("DLC_MP_ARENA_M_BERD_13_0"))
					{
						FILES::GET_SHOP_PED_QUERY_PROP(joaat("DLC_MP_ARENA_M_PEYES_0_0"), &Var12);
					}
					else
					{
						FILES::GET_SHOP_PED_QUERY_PROP(joaat("DLC_MP_ARENA_F_PEYES_0_0"), &Var12);
					}
					PED::SET_PED_PROP_INDEX(iParam0, 1, Var12.f_3, Var12.f_4, false);
				}
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar11, joaat("ARENA_DRAW_0"), 1))
			{
				PED::CLEAR_PED_PROP(iParam0, 1);
			}
		}
	}
}

int func_322(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)//Position - 0x299C0
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
		Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, iParam1, iParam2, -1) };
		if (!__LIB_0__.func_32(iParam3))
		{
			Global_78128 = (Global_78128 - 1);
			return 0;
		}
		if (iParam1 == 11 && Global_78128 > 1)
		{
		}
		else
		{
			func_454(iVar5, iParam1, iParam2, 1);
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
			uVar14 = { __LIB_18__.func_180(iVar5, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar14[iVar0] != -99)
			{
				if (iVar0 == 10 && uVar14.f_16)
				{
					Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, 10, 0, -1) };
					if (iParam4 == -1)
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, __LIB_0__.func_33(iVar0)));
					}
					else
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, iParam4);
					}
					if (BitTest(Global_78130[1 /*14*/].f_6, 1))
					{
						func_454(iVar5, 10, 0, 1);
					}
				}
				else
				{
					Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, iVar0, uVar14[iVar0], -1) };
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
								uVar15 = { __LIB_18__.func_247(iVar5, uVar14[iVar0]) };
							}
							iVar1 = 0;
							while (iVar1 <= 8)
							{
								Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, 14, uVar15[iVar1], -1) };
								__LIB_6__.func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
								if (BitTest(Global_78130[1 /*14*/].f_6, 1))
								{
									func_454(iVar5, iVar0, uVar14[iVar0], 1);
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
									PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, __LIB_0__.func_33(iVar0)));
								}
								else
								{
									PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, iParam4);
								}
							}
							else
							{
								func_322(iParam0, iVar0, uVar14[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (BitTest(Global_78130[1 /*14*/].f_6, 1))
							{
								func_454(iVar5, iVar0, uVar14[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, iVar0, func_452(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					uVar16 = { __LIB_18__.func_180(iVar5, 0) };
					func_322(iParam0, iVar0, uVar16[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			iVar0++;
		}
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1), 0);
		Global_2883588 = uVar12;
		Global_2883589 = uVar13;
		if (iParam5 == 0)
		{
			iVar17 = __LIB_18__.func_468();
			if (iVar17 != -1)
			{
				__LIB_25__.func_43(iVar17, 0, iParam10);
			}
			func_446(iParam0, 11, uVar14[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar18 = { __LIB_18__.func_247(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, 14, uVar18[iVar1], -1) };
			__LIB_6__.func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
			if (BitTest(Global_78130[1 /*14*/].f_6, 1))
			{
				func_454(iVar5, 14, uVar18[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_78128 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = __LIB_40__.func_849(iParam0, iVar5, 14, uVar18[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_322(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		__LIB_6__.func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
		if (BitTest(Global_78130[1 /*14*/].f_6, 1))
		{
			func_454(iVar5, iParam1, iParam2, 1);
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			if (BitTest(Global_78130[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HAIR"), 1))
			{
			}
			else if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 1, joaat("HAIR_SHRINK")))
			{
				func_322(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, iParam1, iParam2, -1) };
			}
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			__LIB_32__.func_411(iParam0);
		}
		if (iParam5 == 0)
		{
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = __LIB_40__.func_849(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_322(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = __LIB_40__.func_849(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_322(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
		}
	}
	else
	{
		iVar19 = __LIB_0__.func_33(iParam1);
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
				iVar23 = __LIB_6__.func_795(iParam0, 11);
				iVar24 = __LIB_6__.func_795(iParam0, 8);
				iVar25 = __LIB_6__.func_795(iParam0, 4);
				if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
				{
					if (iVar5 == joaat("MP_M_Freemode_01"))
					{
						iVar22 = __LIB_0__.func_420(iVar5, iParam2, 11, 3);
					}
					else if (iVar5 == joaat("MP_F_Freemode_01"))
					{
						iVar22 = __LIB_0__.func_420(iVar5, iParam2, 11, 4);
					}
					if ((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("SILK_ROBE"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("SILK_PYJAMAS"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("SMOKING_JACKET"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("SANTA_SUIT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("MORPH_SUIT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("GORKA_SUIT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("CAT_SUIT"), 0))
					{
					}
					else
					{
						iVar8 = __LIB_6__.func_795(iParam0, 8);
					}
				}
				iVar26 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar26, joaat("GLOVES"), 0))
				{
					iVar27 = func_436(iVar5, iVar24, iVar23, iVar25);
					if (iVar27 == -99)
					{
						iVar27 = __LIB_40__.func_849(iParam0, iVar5, 11, iVar23, 3, 0);
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
							iVar22 = __LIB_0__.func_420(iVar5, iParam2, 11, 4);
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
							if (__LIB_0__.func_254(iVar5, iVar27, iVar28) == iVar26)
							{
								iVar10 = iVar28;
								iVar11 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 3);
							}
							iVar28++;
						}
					}
				}
				iVar22 = -1;
				if ((iVar5 == joaat("MP_F_Freemode_01") && iParam2 >= 256) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__.func_420(iVar5, iParam2, 11, 4), joaat("VEST"), 0))
				{
					iVar23 = __LIB_6__.func_795(iParam0, 11);
					if (iVar23 >= 256)
					{
						iVar22 = __LIB_0__.func_420(iVar5, iVar23, 11, 4);
					}
					if (iVar23 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("VEST_SHIRT"), 0))
					{
						iVar29 = __LIB_6__.func_809(iVar5, iVar23, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
						if (iVar29 != -99)
						{
							func_322(iParam0, 8, iVar29, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				else if (__LIB_6__.func_808(iVar5, iParam2, -1))
				{
					if (iVar5 == joaat("MP_M_Freemode_01"))
					{
						if (iVar23 >= 237)
						{
							iVar22 = __LIB_0__.func_420(iVar5, iVar23, 11, 3);
						}
					}
					else if (iVar5 == joaat("MP_F_Freemode_01"))
					{
						if (iVar23 >= 256)
						{
							iVar22 = __LIB_0__.func_420(iVar5, iVar23, 11, 4);
						}
					}
					iVar8 = -99;
					if (!__LIB_6__.func_808(iVar5, iVar23, -1))
					{
						if ((iVar5 == joaat("MP_F_Freemode_01") && iVar23 >= 256) && (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("VEST"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("VEST_SHIRT"), 0)))
						{
						}
						else if ((iVar5 == joaat("MP_F_Freemode_01") && iVar23 >= 256) && ((((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_5"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_11"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_12"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("APART_DRAW_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("APART_DRAW_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("STUNT_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("STUNT_DRAW_9"), 0)))
						{
						}
						else
						{
							iVar30 = __LIB_37__.func_821(iParam0, iParam2);
							iVar31 = __LIB_6__.func_809(iVar5, iVar23, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
							if (iVar31 != -99)
							{
								func_322(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, iParam1, iParam2, -1) };
								iVar8 = -99;
							}
							else if (iVar30 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								func_322(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, iParam1, iParam2, -1) };
							}
							else
							{
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									iVar32 = __LIB_0__.func_356(iVar5, 11, -1);
									Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, 11, iVar32, -1) };
									iVar31 = __LIB_6__.func_809(iVar5, iVar32, iParam2, Global_78130[1 /*14*/].f_4);
									iVar33 = __LIB_0__.func_420(iVar5, iParam2, 11, 3);
									if ((iVar31 == -99 || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar33, joaat("BIKER_VEST"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar33, joaat("OPEN_SHORT"), 0))
									{
										iVar31 = 240;
									}
								}
								else if (iVar5 == joaat("MP_F_Freemode_01"))
								{
									if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__.func_420(iVar5, iParam2, 11, 4), joaat("BIKER_VEST"), 0))
									{
										iVar31 = 120;
									}
									else
									{
										iVar31 = 48;
									}
								}
								func_322(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, iParam1, iParam2, -1) };
							}
						}
					}
					else
					{
						Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, 11, iVar23, -1) };
						iVar34 = Global_78130[1 /*14*/].f_3;
						Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, 11, iParam2, -1) };
						iVar35 = Global_78130[1 /*14*/].f_3;
						if (iVar34 != iVar35)
						{
							iVar37 = __LIB_37__.func_821(iParam0, iParam2);
							Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, 8, iVar24, -1) };
							iVar36 = Global_78130[1 /*14*/].f_4;
							iVar38 = __LIB_6__.func_807(iVar5, iVar24, iVar36);
							if (iVar37 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								iVar39 = iVar37;
							}
							else if (iVar38 == -99)
							{
								iVar39 = iVar24;
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									iVar40 = __LIB_0__.func_420(iVar5, iParam2, 11, 3);
									if (((iParam2 >= 96 && iParam2 <= 107) || __LIB_0__.func_252(iVar40) == 6) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar40, joaat("BIKER_VEST"), 0))
									{
										iVar38 = __LIB_0__.func_356(iVar5, 11, -1);
										Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, 11, iVar38, -1) };
										iVar39 = __LIB_6__.func_809(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
									}
								}
								if (iVar5 == joaat("MP_F_Freemode_01") && ((iVar24 == 32 || iVar24 == 33) || iVar24 == 119))
								{
									if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__.func_420(iVar5, iParam2, 11, 4), joaat("JACKET_ONLY"), 0))
									{
										iVar38 = __LIB_0__.func_356(iVar5, 11, -1);
										Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, 11, iVar38, -1) };
										iVar39 = __LIB_6__.func_809(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
									}
								}
								iVar41 = -1;
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									iVar41 = __LIB_0__.func_420(iVar5, iVar24, 8, 3);
								}
								else if (iVar5 == joaat("MP_F_Freemode_01"))
								{
									iVar41 = __LIB_0__.func_420(iVar5, iVar24, 8, 4);
								}
								if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar41, joaat("OVERCOAT_ACCS"), 0))
								{
									iVar38 = __LIB_0__.func_356(iVar5, 11, -1);
									Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, 11, iVar38, -1) };
									iVar39 = __LIB_6__.func_809(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
								}
							}
							else
							{
								iVar39 = __LIB_6__.func_809(iVar5, iVar38, iParam2, iVar36);
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__.func_420(iVar5, iParam2, 11, 3), joaat("LOW2_OPEN_CHECK"), 0))
									{
										if (!__LIB_6__.func_806(iVar5, __LIB_6__.func_795(iParam0, 4), iVar38))
										{
											iVar39 = 240;
										}
									}
								}
								else if (iVar5 == joaat("MP_F_Freemode_01"))
								{
									if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__.func_420(iVar5, iParam2, 11, 4), joaat("LOW2_OPEN_CHECK"), 0))
									{
										if (!__LIB_6__.func_806(iVar5, __LIB_6__.func_795(iParam0, 4), iVar38))
										{
											iVar39 = 48;
										}
									}
								}
							}
							if (iVar39 != -99)
							{
								func_322(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_M_Freemode_01"))
							{
								iVar38 = __LIB_0__.func_356(iVar5, 11, -1);
								Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, 11, iVar38, -1) };
								iVar39 = __LIB_6__.func_809(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
								if (iVar39 == -99)
								{
									iVar39 = 240;
								}
								func_322(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_F_Freemode_01"))
							{
								func_322(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				__LIB_31__.func_927(iVar5, iParam2);
				if (!bParam13)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 10));
				}
			}
			func_446(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_436(iVar5, func_452(iParam0, 8, -1), iParam2, func_452(iParam0, 4, -1));
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam5 == 0)
			{
				if (iParam8 == -1)
				{
					iParam8 = __LIB_0__.func_534(2153, iParam10, 0);
				}
				if (iParam9 == -1)
				{
					iParam9 = __LIB_0__.func_534(2160, iParam10, 0);
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
						iVar42 = __LIB_18__.func_181(iParam2);
					}
					else if (iVar5 == joaat("MP_F_Freemode_01"))
					{
						iVar42 = __LIB_18__.func_186(iParam2);
					}
					if (iVar42 != -99 && iParam2 != iVar42)
					{
						iParam2 = iVar42;
					}
				}
				func_369(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar43 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar43, joaat("GLOVES"), 0))
			{
				iVar44 = __LIB_6__.func_795(iParam0, 11);
				iVar45 = __LIB_6__.func_795(iParam0, 4);
				iVar46 = func_436(iVar5, iParam2, iVar44, iVar45);
				if (iVar46 == -99)
				{
					iVar46 = __LIB_40__.func_849(iParam0, iVar5, 11, iVar44, 3, 0);
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
						iVar47 = __LIB_0__.func_420(iVar5, iParam2, 11, 4);
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
						if (__LIB_0__.func_254(iVar5, iVar46, iVar48) == iVar43)
						{
							iVar10 = iVar48;
							iVar11 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 3);
						}
						iVar48++;
					}
				}
			}
			func_446(iParam0, iParam1, iParam2, iParam6, 0);
			iVar49 = __LIB_6__.func_795(iParam0, 11);
			if (__LIB_6__.func_808(iVar5, iVar49, -1))
			{
				iVar50 = __LIB_6__.func_807(iVar5, iParam2, Global_78130[1 /*14*/].f_4);
				__LIB_31__.func_927(iVar5, iVar50);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_436(iVar5, iParam2, __LIB_6__.func_795(iParam0, 11), __LIB_6__.func_795(iParam0, 4));
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 1 && iParam2 <= 41)
			{
				iVar51 = __LIB_6__.func_795(iParam0, 7);
				if (!__LIB_24__.func_966(iVar5, iVar51, 9, -99, -99, -99, iParam0, 0, iParam2, -99, -99, -99))
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(7), 0, 0, 0);
				}
			}
		}
		else if (iParam1 == 1)
		{
			if (((iVar5 == joaat("MP_M_Freemode_01") && iParam2 >= 26) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HEAD"), 0)) || ((iVar5 == joaat("MP_F_Freemode_01") && iParam2 >= 26) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HEAD"), 0)))
			{
				iVar52 = __LIB_0__.func_534(2100, iParam10, 0);
				iVar53 = __LIB_0__.func_534(2101, iParam10, 0);
				iVar54 = __LIB_0__.func_534(2102, iParam10, 0);
				fVar55 = __LIB_0__.func_424(135, iParam10);
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
				__LIB_31__.func_910(iParam0, iParam10);
			}
		}
		else if (iParam1 == 4)
		{
			iVar57 = __LIB_6__.func_795(iParam0, 11);
			iVar58 = __LIB_6__.func_795(iParam0, 8);
			if (iVar5 == joaat("MP_M_Freemode_01"))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__.func_420(iVar5, iVar57, 11, 3), joaat("LOW2_OPEN_CHECK"), 0))
				{
					if (!__LIB_6__.func_806(iVar5, iParam2, __LIB_6__.func_807(iVar5, iVar58, 0)))
					{
						func_322(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			else if (iVar5 == joaat("MP_F_Freemode_01"))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__.func_420(iVar5, iVar57, 11, 4), joaat("LOW2_OPEN_CHECK"), 0))
				{
					if (!__LIB_6__.func_806(iVar5, iParam2, __LIB_6__.func_807(iVar5, iVar58, 0)))
					{
						func_322(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_436(iVar5, __LIB_6__.func_795(iParam0, 8), __LIB_6__.func_795(iParam0, 11), iParam2);
			}
			iVar59 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar59, joaat("GLOVES"), 0))
			{
				iVar60 = func_436(iVar5, iVar58, iVar57, iParam2);
				if (iVar60 == -99)
				{
					iVar60 = __LIB_40__.func_849(iParam0, iVar5, 11, iVar57, 3, 0);
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
						iVar61 = __LIB_0__.func_420(iVar5, iParam2, 11, 4);
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
						if (__LIB_0__.func_254(iVar5, iVar60, iVar62) == iVar59)
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
			PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(iParam1), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, __LIB_0__.func_33(iParam1)));
		}
		else
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(iParam1), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, iParam4);
		}
		if (iParam5 == 0)
		{
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = __LIB_40__.func_849(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_322(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
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
								iVar6 = func_436(iVar5, iVar3, __LIB_6__.func_795(iParam0, 11), __LIB_6__.func_795(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = __LIB_40__.func_849(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_322(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			if ((iParam1 == 11 || iParam1 == 8) || iParam1 == 4)
			{
				if (__LIB_0__.func_223(iParam0))
				{
					iVar63 = __LIB_6__.func_803(iParam0, iVar5, iParam1, iParam2);
					if (iVar63 > 0)
					{
						iVar63 = (iVar63 + PED::GET_PED_TEXTURE_VARIATION(iParam0, 9));
						if (!func_346(iParam0, 9, iVar63))
						{
							func_322(iParam0, 9, iVar63, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_322(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
					{
						func_322(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 8)
			{
				iVar64 = __LIB_0__.func_534(2042, -1, 0);
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 5) != 0)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 5, __LIB_18__.func_183(iParam0, iVar64), __LIB_0__.func_217(iParam0, iVar64), __LIB_0__.func_114(iParam0, iVar64));
				}
				if (iParam0 == PLAYER::PLAYER_PED_ID())
				{
					PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(PLAYER::PLAYER_ID(), 5, __LIB_18__.func_183(PLAYER::PLAYER_PED_ID(), iVar64), __LIB_0__.func_217(PLAYER::PLAYER_PED_ID(), iVar64), false);
					PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), __LIB_0__.func_114(PLAYER::PLAYER_PED_ID(), iVar64));
					__LIB_6__.func_782(PLAYER::PLAYER_ID(), iVar64);
				}
			}
			if (iParam1 == 7)
			{
				if ((iVar5 == joaat("MP_M_Freemode_01") && iParam2 >= 92) || (iVar5 == joaat("MP_F_Freemode_01") && iParam2 >= 55))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("BIG_CHAIN"), 0))
					{
						func_322(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("MP_F_Freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar65 = func_452(iParam0, 4, -1);
					iVar66 = iParam2;
				}
				else
				{
					iVar65 = iParam2;
					iVar66 = func_452(iParam0, 11, -1);
				}
				if (__LIB_6__.func_802(iVar5, 11, iVar66, -1))
				{
					if (!__LIB_6__.func_801(iVar5, 4, iVar65, -1))
					{
						if (__LIB_6__.func_800(iVar5, 4, iVar65, &uVar67))
						{
							func_322(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (__LIB_6__.func_801(iVar5, 4, iVar65, -1))
				{
					if (__LIB_6__.func_799(iVar5, 4, iVar65, &uVar67))
					{
						func_322(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				iVar74 = __LIB_6__.func_795(iParam0, 4);
				iVar75 = __LIB_6__.func_795(iParam0, 6);
				if (__LIB_0__.func_215(iVar5, iVar70))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar70, joaat("ALT_FEET"), 0) != __LIB_6__.func_798(iVar5, iVar74, iVar70))
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
										iVar75 = __LIB_6__.func_758(iVar5, iVar78, 6, 3);
										iVar70 = iVar78;
										func_322(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_6__.func_758(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_322(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar77 = iVar76 + 1;
								}
							}
							iVar77++;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar73, joaat("ALT_LEGS"), 0) != __LIB_6__.func_797(iVar5, iVar75, iVar73))
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
										iVar74 = __LIB_6__.func_758(iVar5, iVar78, 4, 3);
										iVar73 = iVar78;
										func_322(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_6__.func_758(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_322(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar77 = iVar76 + 1;
								}
							}
							iVar77++;
						}
					}
				}
				if (__LIB_0__.func_215(iVar5, iVar73))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar73, joaat("ALT_LEGS"), 0) != __LIB_6__.func_797(iVar5, iVar75, iVar73))
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
										iVar74 = __LIB_6__.func_758(iVar5, iVar78, 4, 3);
										iVar73 = iVar78;
										func_322(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_6__.func_758(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_322(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar77 = iVar76 + 1;
								}
							}
							iVar77++;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar70, joaat("ALT_FEET"), 0) != __LIB_6__.func_798(iVar5, iVar74, iVar70))
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
										iVar75 = __LIB_6__.func_758(iVar5, iVar78, 6, 3);
										iVar70 = iVar78;
										func_322(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_6__.func_758(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_322(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				__LIB_32__.func_411(iParam0);
				iVar81 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
				iVar82 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
				iVar83 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar81, iVar82);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar83, joaat("FORCE_PROP"), 0))
				{
					iVar3 = __LIB_40__.func_849(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_322(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = __LIB_40__.func_849(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_322(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_323(iParam0, &uVar4))
		{
			func_322(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_322(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar8 != -99)
	{
		func_322(iParam0, 8, iVar8, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_322(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar10 != -1)
	{
		iVar84 = __LIB_0__.func_254(iVar5, func_452(iParam0, 3, -1), iVar10);
		if (iVar84 != -1)
		{
			if (iVar5 == joaat("MP_M_Freemode_01"))
			{
				iVar9 = __LIB_6__.func_758(iVar5, iVar84, 3, 3);
			}
			else if (iVar5 == joaat("MP_F_Freemode_01"))
			{
				iVar9 = __LIB_6__.func_758(iVar5, iVar84, 3, 4);
			}
			if (iVar9 != -99)
			{
				iVar9 = (iVar9 + iVar11);
				func_322(iParam0, 3, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_323(int iParam0, var uParam1)//Position - 0x2B86A
{
	int iVar0;
	int iVar1;
	*uParam1 = func_452(PLAYER::PLAYER_PED_ID(), 2, -1);
	if (__LIB_0__.func_534(754, Global_78127, 0) != -99 && __LIB_6__.func_781())
	{
		if (__LIB_0__.func_214() == 4)
		{
			return 1;
		}
		if (__LIB_0__.func_534(754, Global_78127, 0) == 0 && __LIB_0__.func_534(755, Global_78127, 0) == 0)
		{
			if (__LIB_0__.func_421(161, Global_78127))
			{
				if (__LIB_0__.func_534(2053, Global_78127, 0) == 0)
				{
					return 0;
				}
			}
			else if (__LIB_0__.func_534(753, Global_78127, 0) == 0)
			{
				return 0;
			}
		}
		iVar0 = __LIB_0__.func_534(754, Global_78127, 0);
		iVar1 = __LIB_0__.func_534(755, Global_78127, 0);
		if (!func_346(iParam0, iVar1, iVar0))
		{
			if (__LIB_0__.func_421(161, Global_78127))
			{
				*uParam1 = __LIB_0__.func_534(2053, Global_78127, 0);
			}
			else
			{
				*uParam1 = __LIB_0__.func_534(753, Global_78127, 0);
			}
			__LIB_0__.func_427(754, -99, Global_78127, 1, 0);
			__LIB_0__.func_427(755, 2, Global_78127, 1, 0);
			return 1;
		}
	}
	return 0;
}

int func_346(int iParam0, int iParam1, int iParam2)//Position - 0x2FB95
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
	Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar0, iParam1, iParam2, -1) };
	uVar2 = Global_2883588;
	uVar3 = Global_2883589;
	if (!BitTest(Global_78130[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar8 = { __LIB_18__.func_180(iVar0, iParam2) };
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
				if (!func_346(iParam0, iVar4, uVar8[iVar4]))
				{
					Global_2883588 = uVar2;
					Global_2883589 = uVar3;
					return 0;
					if (iVar4 == 13)
					{
						uVar9 = { __LIB_18__.func_247(iVar0, uVar8[iVar4]) };
						iVar5 = 0;
						while (iVar5 <= 8)
						{
							if (!func_346(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_35__.func_544(iVar0, 14, iVar6, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar5)
									{
										if (func_346(iParam0, 14, iVar6))
										{
											if (!__LIB_24__.func_955(iVar0, iParam2, 14, iVar6, &uVar8, &(Global_78130[2 /*14*/])))
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
						iVar1 = __LIB_6__.func_795(iParam0, iVar4);
						Global_78130[2 /*14*/] = { __LIB_35__.func_544(iVar0, iVar4, iVar1, -1) };
						if (!__LIB_24__.func_955(iVar0, iParam2, iVar4, iVar1, &uVar8, &(Global_78130[2 /*14*/])))
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
			if (__LIB_0__.func_534(1759, Global_78127, 0) != uVar8[10])
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
		uVar11 = { __LIB_18__.func_247(iVar0, iParam2) };
		iVar10 = 0;
		while (iVar10 <= 8)
		{
			if (!func_346(iParam0, 14, uVar11[iVar10]))
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
		if (Global_78130[1 /*14*/].f_3 == PED::GET_PED_DRAWABLE_VARIATION(iParam0, __LIB_0__.func_33(iParam1)) && Global_78130[1 /*14*/].f_4 == PED::GET_PED_TEXTURE_VARIATION(iParam0, __LIB_0__.func_33(iParam1)))
		{
			return 1;
		}
		if (iParam1 == 4)
		{
			Global_78129++;
			if (Global_78129 == 1)
			{
				if (__LIB_6__.func_802(iVar0, 11, __LIB_6__.func_795(iParam0, 11), -1))
				{
					if (__LIB_6__.func_800(iVar0, 4, iParam2, &uVar18))
					{
						return func_346(iParam0, 4, uVar18);
					}
				}
				else if (__LIB_6__.func_799(iVar0, 4, iParam2, &uVar18))
				{
					return func_346(iParam0, 4, uVar18);
				}
			}
			Global_78129 = (Global_78129 - 1);
		}
	}
	return 0;
}

void func_369(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x368AE
{
	int iVar0;
	int iVar1;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	__LIB_31__.func_926(MISC::GET_HASH_KEY("hairOverlay"), iParam0);
	iVar1 = __LIB_6__.func_805(iVar0, iParam1);
	if (iVar1 != -1)
	{
		if (iParam2 == -1)
		{
			iParam2 = Global_78127;
		}
		__LIB_25__.func_43(iVar1, 1, iParam2);
	}
	func_370(iParam0, bParam3, 0, -1);
}

void func_370(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x368FB
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
		iVar2 = __LIB_0__.func_250(iParam0);
		bVar3 = func_416(iParam0, 0);
		bVar4 = __LIB_31__.func_887(iParam0);
		bVar5 = func_407(iParam0, iParam3);
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
			if (__LIB_18__.func_432(iVar6, iVar0))
			{
				if (__LIB_6__.func_785(&Var1, iVar6, iVar2, iParam0, -1))
				{
					if (__LIB_25__.func_69(iParam0, &Var1, iVar6, Var1.f_4, Var1.f_8, bVar3, bVar4, bParam1, bVar5))
					{
						PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var1.f_4, Var1.f_5);
					}
				}
			}
			iVar6++;
		}
		if (__LIB_18__.func_432(123, iVar0))
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
					if (__LIB_18__.func_432(iVar10, iVar0))
					{
						if (__LIB_25__.func_69(iParam0, &(Var9.f_7), iVar10, Var9.f_2, Var9.f_6, bVar3, bVar4, bParam1, bVar5))
						{
							if (!__LIB_31__.func_925(Var9.f_2, Var9.f_3, iVar10))
							{
								PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var9.f_2, Var9.f_3);
								__LIB_0__.func_235(iParam0, Var9.f_2, Var9.f_3);
							}
						}
					}
				}
			}
			iVar7++;
		}
	}
}

int func_407(int iParam0, int iParam1)//Position - 0x45C4C
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
			iVar2 = __LIB_0__.func_534(1759, -1, 0);
			if (iParam1 != -1)
			{
				iVar2 = iParam1;
			}
			if (iVar0 > 15)
			{
				iVar3 = func_452(iParam0, 11, -1);
				if (iVar3 >= 237)
				{
					iVar4 = __LIB_0__.func_420(joaat("MP_M_Freemode_01"), iVar3, 11, 3);
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
			iVar2 = __LIB_0__.func_534(1759, -1, 0);
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
				iVar5 = func_452(iParam0, 11, -1);
				if (iVar5 >= 256)
				{
					iVar6 = __LIB_0__.func_420(joaat("MP_F_Freemode_01"), iVar5, 11, 4);
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

int func_416(int iParam0, bool bParam1)//Position - 0x460AA
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
							iVar2 = __LIB_18__.func_431(joaat("MP_M_Freemode_01"), 11, func_452(iParam0, 11, -1), 0);
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
						if (__LIB_18__.func_432(13, -1))
						{
							return 1;
						}
						else if (__LIB_18__.func_432(14, -1))
						{
							return 1;
						}
						else if (__LIB_18__.func_432(15, -1))
						{
							return 1;
						}
						else if (__LIB_18__.func_432(16, -1))
						{
							return 1;
						}
						else if (__LIB_18__.func_432(71, -1))
						{
							return 1;
						}
						else if (__LIB_18__.func_432(72, -1))
						{
						}
						else if (__LIB_18__.func_185(PLAYER::PLAYER_ID(), 1) && Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_76.f_21 != 0)
						{
							return 1;
						}
					}
					break;
				default:
					if (iVar0 > 15)
					{
						iVar3 = func_452(iParam0, 11, -1);
						if (iVar3 >= 237)
						{
							iVar4 = __LIB_0__.func_420(joaat("MP_M_Freemode_01"), iVar3, 11, 3);
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
						iVar5 = func_452(iParam0, 8, -1);
						if (iVar5 >= 241)
						{
							iVar6 = __LIB_0__.func_420(joaat("MP_M_Freemode_01"), iVar5, 8, 3);
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
							iVar7 = __LIB_18__.func_431(joaat("MP_F_Freemode_01"), 11, func_452(iParam0, 11, -1), 0);
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
						iVar8 = func_452(iParam0, 11, -1);
						if (iVar8 >= 256)
						{
							iVar9 = __LIB_0__.func_420(joaat("MP_F_Freemode_01"), iVar8, 11, 4);
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
							iVar10 = __LIB_18__.func_431(joaat("MP_F_Freemode_01"), 11, func_452(iParam0, 11, -1), 0);
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
							iVar11 = __LIB_18__.func_431(joaat("MP_F_Freemode_01"), 11, func_452(iParam0, 11, -1), 0);
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
						iVar12 = func_452(iParam0, 8, -1);
						if (iVar12 >= 136)
						{
							iVar13 = __LIB_0__.func_420(joaat("MP_F_Freemode_01"), iVar12, 8, 4);
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

int func_436(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x4EF38
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
				iVar2 = __LIB_0__.func_420(iParam0, iParam2, 11, 3);
				iVar1 = __LIB_0__.func_252(iVar2);
			}
			if (iParam1 >= 241)
			{
				iVar4 = __LIB_0__.func_420(iParam0, iParam1, 8, 3);
				iVar3 = __LIB_0__.func_252(iVar4);
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
						iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_M_TORSO_0_0"), 3, 3);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_1"), 0))
					{
						iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_M_TORSO_1_0"), 3, 3);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_2"), 0))
					{
						iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_M_TORSO_2_0"), 3, 3);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_5"), 0))
					{
						iVar0 = 5;
					}
				}
				else
				{
					iVar0 = func_436(iParam0, -99, __LIB_6__.func_807(iParam0, iParam1, 0), iParam3);
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
									iVar0 = __LIB_6__.func_758(iParam0, iVar7, 3, 3);
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
				iVar2 = __LIB_0__.func_420(iParam0, iParam2, 11, 4);
				iVar1 = __LIB_0__.func_252(iVar2);
			}
			if (iParam1 >= 136)
			{
				iVar4 = __LIB_0__.func_420(iParam0, iParam1, 8, 4);
				iVar3 = __LIB_0__.func_252(iVar4);
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
						iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_F_TORSO_0_0"), 3, 4);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_1"), 0))
					{
						iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_F_TORSO_1_0"), 3, 4);
					}
					else if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_2"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("X17_DRAW_6"), 0))
					{
						iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_F_TORSO_2_0"), 3, 4);
					}
				}
				else if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_9"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_10"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_11"), 0))
				{
					iVar0 = 11;
				}
				else
				{
					iVar0 = func_436(iParam0, -99, __LIB_6__.func_807(iParam0, iParam1, 0), iParam3);
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
					iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_H4_F_TORSO_0_0"), 3, 4);
				}
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("OVERCOAT_ACCS"), 0))
			{
				iVar0 = 3;
			}
			else if (((iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("VEST_SHIRT"), 0)) && !__LIB_6__.func_808(iParam0, iParam2, -1)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SILK_ROBE"), 0))
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
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__.func_420(iParam0, iParam3, 4, 4), joaat("HIGH_WAIST"), 0))
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
									iVar0 = __LIB_6__.func_758(iParam0, iVar12, 3, 4);
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

void func_446(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x53626
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (func_496(iParam0))
		{
			return;
		}
		if (iParam1 == 11 || iParam1 == 8)
		{
			iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
			if (iParam1 == 11)
			{
				if (__LIB_6__.func_808(iVar0, iParam2, -1))
				{
					iParam1 = 8;
					iParam2 = __LIB_6__.func_795(iParam0, iParam1);
				}
			}
			else if (iParam1 == 8)
			{
				iVar1 = __LIB_6__.func_795(iParam0, 11);
				if (!__LIB_6__.func_808(iVar0, iVar1, -1))
				{
					return;
				}
			}
			__LIB_31__.func_926(MISC::GET_HASH_KEY("torsoDecal"), iParam0);
			if (iParam1 == 11)
			{
				if (((((!__LIB_25__.func_42(iVar0, iParam2, 13) && !__LIB_25__.func_42(iVar0, iParam2, 14)) && !__LIB_25__.func_42(iVar0, iParam2, 15)) && !__LIB_25__.func_42(iVar0, iParam2, 16)) && !__LIB_25__.func_42(iVar0, iParam2, 71)) && !__LIB_25__.func_42(iVar0, iParam2, 72))
				{
					__LIB_31__.func_926(MISC::GET_HASH_KEY("crewLogo"), iParam0);
				}
			}
			iVar2 = __LIB_18__.func_431(iVar0, iParam1, iParam2, iParam4);
			if (iVar2 != -1)
			{
				if (iParam3 == 1)
				{
					__LIB_18__.func_467(iParam0, iVar2, 0);
				}
				else
				{
					__LIB_25__.func_43(iVar2, 1, Global_78127);
				}
			}
		}
	}
}

int func_452(int iParam0, int iParam1, int iParam2)//Position - 0x538D7
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
				if (func_346(iParam0, iParam1, iVar0))
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
				if (func_346(iParam0, iParam1, iVar1))
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

void func_454(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x53A10
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
		if (Global_78127 != __LIB_0__.func_5() || iParam2 == -99)
		{
			return;
		}
		Global_78130[2 /*14*/] = { __LIB_35__.func_544(iParam0, iParam1, iParam2, -1) };
		if (BitTest(Global_78130[2 /*14*/].f_6, 1) && BitTest(Global_78130[2 /*14*/].f_6, 6))
		{
			if (iParam1 == 12)
			{
				__LIB_7__.func_238(Global_2883588, 2, 1, 1, -1);
			}
			else if (iParam1 == 13)
			{
			}
			else if (iParam1 == 14)
			{
				__LIB_7__.func_238(Global_2883588, 2, 1, 1, -1);
			}
			else
			{
				__LIB_7__.func_238(Global_2883588, 2, 1, 1, -1);
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
							__LIB_7__.func_238(iVar2, 2, 1, 1, -1);
							if (iVar5 < Global_4538446)
							{
								Global_4538446[iVar5] = iVar2;
								Global_4538457[iVar5] = iVar4;
								iVar5++;
							}
						}
						else
						{
							func_454(iParam0, __LIB_0__.func_33(iVar4), uVar3, 0);
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
									func_454(iParam0, __LIB_0__.func_33(Global_4538457[iVar1]), __LIB_6__.func_758(iParam0, Global_4538446[iVar1], __LIB_0__.func_33(Global_4538457[iVar1]), 3), 1);
								}
								else
								{
									func_454(iParam0, __LIB_0__.func_33(Global_4538457[iVar1]), __LIB_6__.func_758(iParam0, Global_4538446[iVar1], __LIB_0__.func_33(Global_4538457[iVar1]), 4), 1);
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
			if (__LIB_0__.func_36(iParam1, Global_78130[1 /*14*/].f_2, &iVar6))
			{
				iVar7 = __LIB_0__.func_534(iVar6, Global_78127, 0);
				MISC::SET_BIT(&iVar7, Global_78130[2 /*14*/].f_1);
				__LIB_0__.func_427(iVar6, iVar7, Global_78127, 1, 0);
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
							func_454(iParam0, 14, iVar8, 0);
						}
						else if (iParam2 >= 75 && iParam2 <= 82)
						{
							iVar8 = (83 + Global_78130[2 /*14*/].f_4);
							func_454(iParam0, 14, iVar8, 0);
						}
					}
					else if (iParam1 == 8)
					{
						if (iParam2 >= 48 && iParam2 <= 63)
						{
							iVar8 = (64 + Global_78130[2 /*14*/].f_4);
							func_454(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 64 && iParam2 <= 79)
						{
							iVar8 = (48 + Global_78130[2 /*14*/].f_4);
							func_454(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 96 && iParam2 <= 111)
						{
							iVar8 = (112 + Global_78130[2 /*14*/].f_4);
							func_454(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 112 && iParam2 <= 127)
						{
							iVar8 = (96 + Global_78130[2 /*14*/].f_4);
							func_454(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 176 && iParam2 <= 191)
						{
							iVar8 = (160 + Global_78130[2 /*14*/].f_4);
							func_454(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 160 && iParam2 <= 175)
						{
							iVar8 = (176 + Global_78130[2 /*14*/].f_4);
							func_454(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 32 && iParam2 <= 47)
						{
							iVar8 = (0 + Global_78130[2 /*14*/].f_4);
							func_454(iParam0, 11, iVar8, 0);
						}
						else if (iParam2 >= 224 && iParam2 <= 239)
						{
							iVar8 = (16 + Global_78130[2 /*14*/].f_4);
							func_454(iParam0, 11, iVar8, 0);
						}
					}
					else if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar8 = (32 + Global_78130[2 /*14*/].f_4);
							func_454(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 16 && iParam2 <= 31)
						{
							iVar8 = (224 + Global_78130[2 /*14*/].f_4);
							func_454(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 220 && iParam2 <= 235)
						{
							switch (iParam2)
							{
								case 220:
									func_454(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_0"), 8, 3), 0);
									func_454(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_0"), 8, 3), 0);
									break;
								case 221:
									func_454(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_1"), 8, 3), 0);
									func_454(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_1"), 8, 3), 0);
									break;
								case 222:
									func_454(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_2"), 8, 3), 0);
									func_454(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_2"), 8, 3), 0);
									break;
								case 223:
									func_454(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_3"), 8, 3), 0);
									func_454(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_3"), 8, 3), 0);
									break;
								case 224:
									func_454(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_4"), 8, 3), 0);
									func_454(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_4"), 8, 3), 0);
									break;
								case 225:
									func_454(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_5"), 8, 3), 0);
									func_454(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_5"), 8, 3), 0);
									break;
								case 226:
									func_454(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_6"), 8, 3), 0);
									func_454(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_6"), 8, 3), 0);
									break;
								case 227:
									func_454(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_7"), 8, 3), 0);
									func_454(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_7"), 8, 3), 0);
									break;
								case 228:
									func_454(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_8"), 8, 3), 0);
									func_454(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_8"), 8, 3), 0);
									break;
								case 229:
									func_454(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_9"), 8, 3), 0);
									func_454(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_9"), 8, 3), 0);
									break;
								case 230:
									func_454(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_10"), 8, 3), 0);
									func_454(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_10"), 8, 3), 0);
									break;
								case 231:
									func_454(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_11"), 8, 3), 0);
									func_454(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_11"), 8, 3), 0);
									break;
								case 232:
									func_454(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_12"), 8, 3), 0);
									func_454(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_12"), 8, 3), 0);
									break;
								case 233:
									func_454(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_13"), 8, 3), 0);
									func_454(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_13"), 8, 3), 0);
									break;
								case 234:
									func_454(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_14"), 8, 3), 0);
									func_454(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_14"), 8, 3), 0);
									break;
								case 235:
									func_454(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_15"), 8, 3), 0);
									func_454(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_15"), 8, 3), 0);
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
									func_454(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_0"), 7, 3), 0);
									func_454(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_0"), 7, 3), 0);
									break;
								case 1:
									func_454(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_1"), 7, 3), 0);
									func_454(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_1"), 7, 3), 0);
									break;
								case 2:
									func_454(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_2"), 7, 3), 0);
									func_454(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_2"), 7, 3), 0);
									break;
								case 3:
									func_454(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_3"), 7, 3), 0);
									func_454(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_3"), 7, 3), 0);
									break;
								case 4:
									func_454(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_4"), 7, 3), 0);
									func_454(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_4"), 7, 3), 0);
									break;
								case 5:
									func_454(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_5"), 7, 3), 0);
									func_454(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_5"), 7, 3), 0);
									break;
								case 6:
									func_454(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_6"), 7, 3), 0);
									func_454(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_6"), 7, 3), 0);
									break;
								case 7:
									func_454(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_7"), 7, 3), 0);
									func_454(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_7"), 7, 3), 0);
									break;
								case 8:
									func_454(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_8"), 7, 3), 0);
									func_454(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_8"), 7, 3), 0);
									break;
								case 9:
									func_454(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_9"), 7, 3), 0);
									func_454(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_9"), 7, 3), 0);
									break;
								case 10:
									func_454(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_10"), 7, 3), 0);
									func_454(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_10"), 7, 3), 0);
									break;
								case 11:
									func_454(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_11"), 7, 3), 0);
									func_454(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_11"), 7, 3), 0);
									break;
								case 12:
									func_454(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_12"), 7, 3), 0);
									func_454(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_12"), 7, 3), 0);
									break;
								case 13:
									func_454(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_13"), 7, 3), 0);
									func_454(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_13"), 7, 3), 0);
									break;
								case 14:
									func_454(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_14"), 7, 3), 0);
									func_454(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_14"), 7, 3), 0);
									break;
								case 15:
									func_454(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_15"), 7, 3), 0);
									func_454(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_15"), 7, 3), 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_78130[2 /*14*/].f_4)
							{
								case 0:
									func_454(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_0"), 7, 3), 0);
									func_454(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_0"), 7, 3), 0);
									break;
								case 1:
									func_454(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_1"), 7, 3), 0);
									func_454(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_1"), 7, 3), 0);
									break;
								case 2:
									func_454(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_2"), 7, 3), 0);
									func_454(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_2"), 7, 3), 0);
									break;
								case 3:
									func_454(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_3"), 7, 3), 0);
									func_454(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_3"), 7, 3), 0);
									break;
								case 4:
									func_454(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_4"), 7, 3), 0);
									func_454(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_4"), 7, 3), 0);
									break;
								case 5:
									func_454(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_5"), 7, 3), 0);
									func_454(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_5"), 7, 3), 0);
									break;
								case 6:
									func_454(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_6"), 7, 3), 0);
									func_454(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_6"), 7, 3), 0);
									break;
								case 7:
									func_454(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_7"), 7, 3), 0);
									func_454(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_7"), 7, 3), 0);
									break;
								case 8:
									func_454(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_8"), 7, 3), 0);
									func_454(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_8"), 7, 3), 0);
									break;
								case 9:
									func_454(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_9"), 7, 3), 0);
									func_454(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_9"), 7, 3), 0);
									break;
								case 10:
									func_454(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_10"), 7, 3), 0);
									func_454(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_10"), 7, 3), 0);
									break;
								case 11:
									func_454(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_11"), 7, 3), 0);
									func_454(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_11"), 7, 3), 0);
									break;
								case 12:
									func_454(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_12"), 7, 3), 0);
									func_454(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_12"), 7, 3), 0);
									break;
								case 13:
									func_454(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_13"), 7, 3), 0);
									func_454(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_13"), 7, 3), 0);
									break;
								case 14:
									func_454(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_14"), 7, 3), 0);
									func_454(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_14"), 7, 3), 0);
									break;
								case 15:
									func_454(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_15"), 7, 3), 0);
									func_454(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_15"), 7, 3), 0);
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
							func_454(iParam0, 8, iVar8, 0);
						}
					}
				}
				Global_78130[2 /*14*/] = { __LIB_35__.func_544(iParam0, iParam1, iParam2, -1) };
				if (iParam1 == 11)
				{
					iVar9 = __LIB_6__.func_811(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_454(iParam0, 8, iVar9, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203)
					{
						switch (iParam2)
						{
							case 199:
								func_454(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_0"), 7, 4), 0);
								break;
							case 200:
								func_454(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_1"), 7, 4), 0);
								break;
							case 201:
								func_454(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_2"), 7, 4), 0);
								break;
							}
					}
				}
				else if (iParam1 == 8)
				{
					iVar9 = __LIB_6__.func_807(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_454(iParam0, 11, iVar9, 0);
					}
				}
			}
		}
	}
}

int func_496(int iParam0)//Position - 0x6C78A
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
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != __LIB_0__.func_160() && __LIB_0__.func_357(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar1 = func_452(iParam0, 11, -1);
				if (iVar1 >= 237)
				{
					iVar2 = __LIB_0__.func_420(joaat("MP_M_Freemode_01"), iVar1, 11, 3);
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
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != __LIB_0__.func_160() && __LIB_0__.func_357(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar3 = func_452(iParam0, 11, -1);
				if (iVar3 >= 237)
				{
					iVar4 = __LIB_0__.func_420(joaat("MP_F_Freemode_01"), iVar3, 11, 4);
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

int func_499(int iParam0, int iParam1, int iParam2)//Position - 0x6CAFC
{
	int iVar0;
	iVar0 = __LIB_0__.func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_311(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_501(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x6CBC3
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
										func_501(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
									func_501(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_35__.func_896(iVar10, iVar0, func_304(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_515(iParam0, iVar10, &iVar4, 1))
							{
								func_501(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_18__.func_180(iVar10, 0) };
						func_501(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_501(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__.func_896(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_501(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__.func_896(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_501(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__.func_896(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_501(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__.func_896(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_501(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
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
						func_501(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_501(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_501(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		if (func_515(iParam0, iVar10, &iVar4, 0))
		{
			func_501(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_499(iParam0, iVar10, &iVar4))
		{
			func_501(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_515(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x6F17F
{
	int iVar0;
	iVar0 = __LIB_0__.func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_311(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

void func_554(int iParam0)//Position - 0x71124
{
	iLocal_325 = iParam0;
}

void func_555()//Position - 0x71131
{
	__LIB_11__.func_629();
	__LIB_19__.func_798(&(Local_56.f_678), 92, "", "", -1, -1, 0, 0);
}

void func_567(var uParam0, bool bParam1)//Position - 0x76761
{
	int iVar0;
	float fVar1;
	__LIB_6__.func_927(uParam0);
	if (bParam1)
	{
		__LIB_10__.func_563(uParam0, "RESPAWN_W" /* GXT: ~r~WASTED~s~ */, "HUNT_RESULT", 0);
	}
	else if (Local_56.f_6 >= Local_56.f_3)
	{
		__LIB_10__.func_563(uParam0, "REPLAY_PAS" /* GXT: ~y~PASSED~s~ */, "HUNT_RESULT", 0);
	}
	else
	{
		Local_56.f_672 = 1;
		__LIB_10__.func_563(uParam0, "REPLAY_TMG" /* GXT: ~r~FAILED~s~ */, "HUNT_RESULT", 0);
	}
	uParam0->f_565 = 1;
	iVar0 = 0;
	__LIB_10__.func_584(uParam0, 1, "AHT_SCRE", "", Local_56.f_6, 0, 0, 0);
	fVar1 = __LIB_5__.func_736(&(Local_56.f_55));
	__LIB_10__.func_584(uParam0, 8, "AHT_TIME", "", SYSTEM::ROUND((fVar1 * 1000f)), 0, 0, 0);
	__LIB_10__.func_584(uParam0, 1, "AHT_PHOTOTAKEN", "", Local_56.f_50, 0, 0, 0);
	__LIB_10__.func_584(uParam0, 1, "AHT_ELK_KILLS", "", (Local_56.f_1 - ((Local_56.f_51 + Local_56.f_52) + Local_56.f_53)), 0, 0, 0);
	__LIB_10__.func_584(uParam0, 3, "AHT_MONEYEARN", "", Local_56.f_7, 0, 0, 0);
	iVar0 = 5;
	if (Local_56.f_51 > 2)
	{
		__LIB_10__.func_584(uParam0, 1, "AHT_COU_KILLS", "", Local_56.f_51, 0, 0, 0);
		iVar0++;
	}
	if (Local_56.f_52 > 4)
	{
		__LIB_10__.func_584(uParam0, 1, "AHT_BOAR_KILLS", "", Local_56.f_52, 0, 0, 0);
		iVar0++;
	}
	if (Local_56.f_53 > 5)
	{
		__LIB_10__.func_584(uParam0, 1, "AHT_COY_KILLS", "", Local_56.f_53, 0, 0, 0);
		iVar0++;
	}
	if (Local_56.f_9[3] > 1)
	{
		__LIB_10__.func_584(uParam0, 1, "AHT_HITS_HEART", "", Local_56.f_9[3], 0, 0, 0);
		iVar0++;
	}
	if (Local_56.f_9[1] > 1)
	{
		__LIB_10__.func_584(uParam0, 1, "AHT_HITS_HEAD", "", Local_56.f_9[1], 0, 0, 0);
		iVar0++;
	}
	if (Local_56.f_9[2] > 3 && iVar0 < 8)
	{
		__LIB_10__.func_584(uParam0, 1, "AHT_HITS_NECK", "", Local_56.f_9[2], 0, 0, 0);
		iVar0++;
	}
	if (Local_56.f_9[6] > 3 && iVar0 < 8)
	{
		__LIB_10__.func_584(uParam0, 1, "AHT_HITS_REAR", "", Local_56.f_9[6], 0, 0, 0);
		iVar0++;
	}
	if (Local_56.f_9[5] > 5 && iVar0 < 8)
	{
		__LIB_10__.func_584(uParam0, 1, "AHT_HITS_TORSO", "", Local_56.f_9[5], 0, 0, 0);
		iVar0++;
	}
	if (Local_56.f_9[4] > 6 && iVar0 < 8)
	{
		__LIB_10__.func_584(uParam0, 1, "AHT_HITS_FLEG", "", Local_56.f_9[4], 0, 0, 0);
		iVar0++;
	}
	if (Local_56.f_9[7] > 6 && iVar0 < 8)
	{
		__LIB_10__.func_584(uParam0, 1, "AHT_HITS_BLEG", "", Local_56.f_9[7], 0, 0, 0);
		iVar0++;
	}
	if (Local_56.f_6 >= Local_56.f_5)
	{
		__LIB_10__.func_562(uParam0, 1, "AHT_MEDAL_EARN", 0, 0, -1, 3, 0);
	}
	else if (Local_56.f_6 >= Local_56.f_4)
	{
		__LIB_10__.func_562(uParam0, 1, "AHT_MEDAL_EARN", 0, 0, -1, 2, 0);
	}
	else if (Local_56.f_6 >= Local_56.f_3)
	{
		__LIB_10__.func_562(uParam0, 1, "AHT_MEDAL_EARN", 0, 0, -1, 1, 0);
	}
	else
	{
		__LIB_10__.func_562(uParam0, 0, "AHT_NO_MEDAL", 0, 0, -1, 0, 0);
	}
	__LIB_20__.func_175(uParam0, 1, 0);
	uParam0->f_570 = 1;
	__LIB_0__.func_518(1);
}

void func_576(bool bParam0)//Position - 0x76FC3
{
	__LIB_0__.func_924(&uLocal_200, 0, 0, 1, 1);
	__LIB_0__.func_713(&uLocal_200, "HCONT", 2, 215, 1, 1, 0);
	if (!bParam0)
	{
		__LIB_0__.func_713(&uLocal_200, "HRETRY", 2, 216, 1, 1, 0);
	}
	__LIB_0__.func_713(&uLocal_200, "HLEADR", 2, 211, 1, 1, 0);
	__LIB_30__.func_242(&uLocal_200, 1);
}

void func_579()//Position - 0x770A6
{
	int iVar0;
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_616(&(Local_173[iVar0 /*29*/]), iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if ((iVar0 != 0 && Local_56.f_6 >= Local_56.f_5) || iVar0 == 0)
		{
			func_580(&(Local_174[iVar0 /*29*/]), iVar0);
		}
		iVar0++;
	}
}

void func_580(int* iParam0, int iParam1)//Position - 0x7711B
{
	float fVar0;
	struct<3> Var1;
	fVar0 = 9999.9f;
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!PED::IS_PED_INJURED(*iParam0))
		{
			func_613(iParam0);
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(*iParam0, true) };
				fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_67, Var1, true);
				if (fVar0 > 170f)
				{
					if (!CAM::IS_SPHERE_VISIBLE(Var1, 2f) || CAM::IS_SCREEN_FADED_OUT())
					{
						iParam0->f_12 = 11;
					}
				}
			}
		}
		else
		{
			iParam0->f_12 = 10;
		}
	}
	switch (iParam0->f_12)
	{
		case 1:
			if (iParam1 != 0)
			{
				return;
			}
			if (iParam0->f_25 == -1)
			{
				iParam0->f_25 = (MISC::GET_GAME_TIMER() + 210000);
			}
			else if (MISC::GET_GAME_TIMER() > iParam0->f_25)
			{
				iParam0->f_12 = 2;
				if ((Local_56.f_6 >= Local_56.f_5 && (!ENTITY::DOES_ENTITY_EXIST(Local_174[1 /*29*/]) || PED::IS_PED_INJURED(Local_174[1 /*29*/]))) && Local_174[1 /*29*/].f_12 != 2)
				{
					Local_174[1 /*29*/].f_12 = 2;
				}
			}
			break;
		case 2:
			if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
			{
				if (func_608(&(iParam0->f_19), &(iParam0->f_22), 1))
				{
					iParam0->f_11 = joaat("A_C_MtLion");
					iParam0->f_13 = 0;
					if (func_605(iParam0, iParam0->f_19, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f), iParam0->f_11, 0, 0))
					{
						func_604(iParam0, 3, 1);
						func_603(iParam0);
						PED::SET_PED_CONFIG_FLAG(*iParam0, 169, true);
						iParam0->f_12 = 6;
					}
				}
			}
			else
			{
				iParam0->f_12 = 6;
			}
			break;
		case 6:
			PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 46, true);
			WEAPON::GIVE_DELAYED_WEAPON_TO_PED(*iParam0, joaat("WEAPON_COUGAR"), -1, true);
			TASK::TASK_GO_TO_ENTITY(*iParam0, PLAYER::PLAYER_PED_ID(), -1, 10f, 1f, 2f, 0);
			iParam0->f_12 = 7;
			break;
		case 7:
			if (fVar0 > 25f)
			{
				PED::SET_PED_MIN_MOVE_BLEND_RATIO(*iParam0, 2f);
			}
			else if (fVar0 <= 25f && fVar0 >= 15f)
			{
				PED::SET_PED_MIN_MOVE_BLEND_RATIO(*iParam0, 1f);
			}
			else if (!iParam0->f_27)
			{
				iParam0->f_27 = 1;
				TASK::CLEAR_PED_TASKS(*iParam0);
				TASK::TASK_STAND_STILL(*iParam0, 3200);
				TASK::TASK_PLAY_ANIM(*iParam0, "creatures@cougar@melee@", "growling", 8f, -8f, -1, 0, 0f, false, false, false);
				__LIB_0__.func_523(&(iParam0->f_1));
				func_599(iParam0);
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(*iParam0, joaat("SCRIPT_TASK_STAND_STILL")) == 7 && TASK::GET_SCRIPT_TASK_STATUS(*iParam0, joaat("SCRIPT_TASK_PLAY_ANIM")) == 7)
			{
				func_599(iParam0);
				iParam0->f_12 = 8;
				return;
			}
			if (func_582(iParam0))
			{
				iParam0->f_12 = 8;
			}
			else if (fVar0 < 14f || (fVar0 < 24f && iParam0->f_4))
			{
				func_599(iParam0);
				iParam0->f_12 = 8;
			}
			break;
		case 8:
			TASK::CLEAR_PED_TASKS(*iParam0);
			TASK::TASK_COMBAT_PED(*iParam0, PLAYER::PLAYER_PED_ID(), 0, 16);
			iParam0->f_12 = 9;
			break;
		case 9:
			break;
		case 10:
		case 11:
			func_581(iParam0);
			break;
	}
}

void func_581(int* iParam0)//Position - 0x77422
{
	__LIB_0__.func_523(&(iParam0->f_1));
	iParam0->f_6 = 0;
	iParam0->f_4 = 0;
	iParam0->f_3 = 0;
	iParam0->f_2 = 0;
	iParam0->f_24 = -1;
	iParam0->f_8 = 0;
	iParam0->f_27 = 0;
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (iParam0->f_12 == 10)
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
		}
		else
		{
			PED::DELETE_PED(iParam0);
		}
	}
	if (iParam0->f_13 == 0)
	{
		iParam0->f_25 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(160000, 270000));
		if (Local_56.f_6 >= Local_56.f_5)
		{
			iParam0->f_25 = (iParam0->f_25 - 35000);
		}
		else if (Local_56.f_6 >= Local_56.f_4)
		{
			iParam0->f_25 = (iParam0->f_25 - 20000);
		}
		else if (Local_56.f_6 >= Local_56.f_3)
		{
			iParam0->f_25 = (iParam0->f_25 - 10000);
		}
	}
	else
	{
		iParam0->f_25 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(5000, 20000));
	}
	iParam0->f_26 = 1;
	iParam0->f_12 = 1;
	*iParam0 = 0;
}

int func_582(var uParam0)//Position - 0x7750A
{
	float fVar0;
	if (uParam0->f_13 == 0)
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(*uParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (__LIB_36__.func_80(*uParam0, 1090519040, 1097859072))
	{
		func_593("HUNTING_MISSED", 0);
		uParam0->f_6 = 1;
		return 1;
	}
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(*uParam0, PLAYER::PLAYER_PED_ID(), true))
	{
		uParam0->f_6 = 1;
		return 1;
	}
	if (PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), *uParam0))
	{
		uParam0->f_6 = 1;
		return 1;
	}
	fVar0 = __LIB_0__.func_76(*uParam0, PLAYER::PLAYER_PED_ID(), 1);
	if (uParam0->f_13 == 2)
	{
		if (__LIB_26__.func_262(*uParam0, PLAYER::PLAYER_PED_ID(), 1126825984, 1, 250, 7) && fVar0 < 25f)
		{
			uParam0->f_6 = 1;
			return 1;
		}
		if (fVar0 < 18f)
		{
			uParam0->f_6 = 1;
			return 1;
		}
	}
	else if (uParam0->f_13 != 0)
	{
		if (__LIB_26__.func_262(*uParam0, PLAYER::PLAYER_PED_ID(), 1126825984, 1, 250, 7) && fVar0 < 15f)
		{
			uParam0->f_6 = 1;
			return 1;
		}
		if (fVar0 < 8f)
		{
			uParam0->f_6 = 1;
			return 1;
		}
	}
	return 0;
}

void func_593(char* sParam0, bool bParam1)//Position - 0x77ABC
{
	if (!bParam1 && Local_56.f_54 > MISC::GET_GAME_TIMER())
	{
		return;
	}
	AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(PLAYER::PLAYER_PED_ID(), sParam0, "TREVOR_NORMAL", __LIB_0__.func_375(3), false);
	Local_56.f_54 += 8000;
}

void func_599(var uParam0)//Position - 0x77F7F
{
	if (HUD::DOES_BLIP_EXIST(uParam0->f_1))
	{
		HUD::REMOVE_BLIP(&(uParam0->f_1));
	}
	__LIB_39__.func_378(&(uParam0->f_1), *uParam0, 1, 0.7f);
	HUD::SET_BLIP_ALPHA(uParam0->f_1, 128);
	HUD::SET_BLIP_SHOW_CONE(uParam0->f_1, true, 11);
}

void func_603(var uParam0)//Position - 0x780E3
{
	struct<3> Var0;
	Var0 = { ENTITY::GET_ENTITY_COORDS(*uParam0, false) };
	MISC::GET_GROUND_Z_FOR_3D_COORD(ENTITY::GET_ENTITY_COORDS(*uParam0, false), &(Var0.f_2), false, false);
	ENTITY::SET_ENTITY_COORDS(*uParam0, Var0, false, false, false, true);
}

void func_604(var uParam0, int iParam1, int iParam2)//Position - 0x78119
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 0, false);
		PED::SET_PED_FLEE_ATTRIBUTES(*uParam0, 1, false);
		ENTITY::SET_ENTITY_HEALTH(*uParam0, 100, 0);
		PED::SET_PED_BLOCKS_PATHING_WHEN_DEAD(*uParam0, true);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*uParam0, true, 1);
		PED::SET_PED_SEEING_RANGE(*uParam0, 20f);
		PED::SET_PED_HEARING_RANGE(*uParam0, 10f);
		ENTITY::SET_ENTITY_LOD_DIST(*uParam0, 1500);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*uParam0, true, 1);
		PED::SET_PED_LOD_MULTIPLIER(*uParam0, 5f);
		if (uParam0->f_13 == 0)
		{
			PED::SET_PED_CAN_BE_TARGETTED(*uParam0, true);
		}
		else
		{
			PED::SET_PED_CAN_BE_TARGETTED(*uParam0, false);
		}
		uParam0->f_7 = iParam2;
		uParam0->f_6 = 0;
		uParam0->f_3 = 0;
		iLocal_86 = 0;
		uParam0->f_10 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(30000, 60000));
		uParam0->f_12 = iParam1;
	}
}

int func_605(var uParam0, struct<3> Param1, float fParam2, int iParam3, bool bParam4, int iParam5)//Position - 0x781DC
{
	if (func_606(uParam0, iParam3, Param1, fParam2, bParam4, 0, iParam5))
	{
		if (__LIB_1__.func_197(*uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_606(var uParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4, bool bParam5, var uParam6)//Position - 0x78209
{
	bool bVar0;
	float fVar1;
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (__LIB_16__.func_640(iParam1))
		{
			*uParam0 = PED::CREATE_PED(26, iParam1, Param2, fParam3, true, true);
			if (!bParam5)
			{
				if (iParam1 == joaat("A_C_Deer"))
				{
					bVar0 = true;
					if (iLocal_72 < 3 || uParam6)
					{
						fVar1 = 50f;
						if (iLocal_73 != 0)
						{
							fVar1 = (SYSTEM::TO_FLOAT(iLocal_72) / SYSTEM::TO_FLOAT(iLocal_73));
							fVar1 = (fVar1 * 75f);
						}
						if (IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 100)) > fVar1 || uParam6)
						{
							PED::SET_PED_COMPONENT_VARIATION(*uParam0, 8, 0, 0, 0);
							DECORATOR::DECOR_SET_BOOL(*uParam0, "doe_elk", true);
							bVar0 = false;
							iLocal_72++;
						}
					}
					if (bVar0)
					{
						PED::SET_PED_COMPONENT_VARIATION(*uParam0, 8, 1, 0, 0);
						if (DECORATOR::DECOR_EXIST_ON(*uParam0, "doe_elk"))
						{
							DECORATOR::DECOR_REMOVE(*uParam0, "doe_elk");
						}
					}
					PED::SET_PED_COMPONENT_VARIATION(*uParam0, 0, 0, MISC::GET_RANDOM_INT_IN_RANGE(0, 3), 0);
				}
				else if (iParam1 == joaat("A_C_MtLion"))
				{
					PED::SET_PED_COMPONENT_VARIATION(*uParam0, 0, 0, MISC::GET_RANDOM_INT_IN_RANGE(0, 3), 0);
				}
				else if (iParam1 == joaat("A_C_Boar"))
				{
					PED::SET_PED_COMPONENT_VARIATION(*uParam0, 0, 0, MISC::GET_RANDOM_INT_IN_RANGE(0, 4), 0);
				}
				ENTITY::SET_ENTITY_LOD_DIST(*uParam0, 1500);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*uParam0, true, 1);
				PED::SET_PED_LOD_MULTIPLIER(*uParam0, 5f);
			}
			if (bParam4)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam1);
			}
			if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
			{
				PED::SET_PED_CAN_BE_TARGETTED(*uParam0, false);
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_608(var uParam0, var uParam1, bool bParam2)//Position - 0x7839D
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 55);
	if (iVar0 == iLocal_179)
	{
		return 0;
	}
	fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_67, Local_178[iVar0 /*3*/], true);
	fVar2 = 30f;
	fVar3 = 125f;
	if (bParam2)
	{
		fVar2 = 60f;
		fVar3 = 150f;
	}
	if (fVar1 > fVar2 && fVar1 < fVar3)
	{
		if (((!CAM::IS_SPHERE_VISIBLE(Local_178[iVar0 /*3*/], 1.5f) || CAM::IS_SCREEN_FADED_OUT()) && (bParam2 || __LIB_34__.func_807(Local_178[iVar0 /*3*/]))) && func_610(iVar0))
		{
			*uParam0 = { Local_178[iVar0 /*3*/] };
			__LIB_29__.func_681(uParam0, 0);
			*uParam1 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 359f);
			iLocal_179 = iVar0;
			return 1;
		}
	}
	return 0;
}

int func_610(int iParam0)//Position - 0x784B2
{
	int iVar0;
	struct<3> Var1;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_173[iVar0 /*29*/]) && !PED::IS_PED_INJURED(Local_173[iVar0 /*29*/]))
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(Local_173[iVar0 /*29*/], true) };
			if (SYSTEM::VDIST2(Var1, Local_178[iParam0 /*3*/]) < 400f)
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_613(var uParam0)//Position - 0x78586
{
	struct<3> Var0;
	float fVar1;
	bool bVar2;
	float fVar3;
	struct<3> Var4;
	int iVar5;
	bool bVar6;
	int iVar7;
	float fVar8;
	float fVar9;
	Var0 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true) };
	fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_67, Var0, true);
	bVar2 = ENTITY::IS_ENTITY_ON_SCREEN(*uParam0);
	if (!uParam0->f_8)
	{
		if (!HUD::DOES_BLIP_EXIST(uParam0->f_1))
		{
			if (MISC::GET_GAME_TIMER() > uParam0->f_28)
			{
				fVar3 = (fVar1 * 0.5f);
				Var4 = { Var0 + Vector(0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(-3f, 3f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-3f, 3f)) };
				uParam0->f_1 = HUD::ADD_BLIP_FOR_RADIUS(Var4, fVar3);
				HUD::SET_BLIP_ALPHA(uParam0->f_1, 100);
				HUD::SET_BLIP_COLOUR(uParam0->f_1, 1);
				HUD::SHOW_HEIGHT_ON_BLIP(uParam0->f_1, false);
				uParam0->f_9 = MISC::GET_GAME_TIMER() + 1500;
			}
		}
		else
		{
			iVar5 = HUD::GET_BLIP_ALPHA(uParam0->f_1);
			if (iVar5 != 0)
			{
				if (MISC::GET_GAME_TIMER() > uParam0->f_9)
				{
					iVar5 = (iVar5 - 1);
					HUD::SET_BLIP_ALPHA(uParam0->f_1, iVar5);
				}
			}
			else
			{
				__LIB_0__.func_523(&(uParam0->f_1));
				uParam0->f_28 = MISC::GET_GAME_TIMER() + 1500;
			}
		}
		bVar6 = true;
		if ((bVar2 && uParam0->f_2 < MISC::GET_GAME_TIMER()) && fVar1 < fLocal_60)
		{
			iVar7 = func_614(uParam0, Var0, fVar1);
			if (iVar7 == 1)
			{
				bVar6 = false;
			}
		}
		if (bVar2 && !bVar6)
		{
			HUD::GET_HUD_SCREEN_POSITION_FROM_WORLD_POSITION(Var0, &fVar8, &fVar9);
			if ((((fVar8 > 0.3f && fVar8 < 0.7f) && fVar9 > 0.3f) && fVar9 < 0.7f) && fVar1 < fLocal_60)
			{
				__LIB_0__.func_523(&(uParam0->f_1));
				__LIB_39__.func_378(&(uParam0->f_1), *uParam0, 1, 1065353216);
				HUD::SET_BLIP_SHOW_CONE(uParam0->f_1, true, 11);
				uParam0->f_8 = 1;
				uParam0->f_4 = 1;
				func_593("HUNTING_SPOT_COUGAR", 0);
				return;
			}
		}
	}
}

int func_614(var uParam0, struct<3> Param1, float fParam2)//Position - 0x7873D
{
	struct<3> Var0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	if (iLocal_176 == 0)
	{
		Var0 = { Local_67 + Vector(0.75f, 0f, 0f) };
		iLocal_176 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Var0, Param1, 1, 0, 7);
	}
	else
	{
		iVar5 = SHAPETEST::GET_SHAPE_TEST_RESULT(iLocal_176, &iVar1, &uVar2, &uVar3, &uVar4);
		if (iVar5 == 2)
		{
			if (iVar1 == 0)
			{
				uParam0->f_2 = (MISC::GET_GAME_TIMER() + __LIB_29__.func_688(fParam2));
				iLocal_177 = -1;
				iLocal_176 = 0;
				return 1;
			}
			else
			{
				uParam0->f_2 = (MISC::GET_GAME_TIMER() + __LIB_29__.func_688(fParam2));
				iLocal_177 = -1;
				iLocal_176 = 0;
				return -1;
			}
		}
		else if (iVar5 == 0)
		{
			iLocal_177 = -1;
			iLocal_176 = 0;
			return -1;
		}
	}
	return 0;
}

void func_616(int* iParam0, int iParam1)//Position - 0x78822
{
	float fVar0;
	struct<3> Var1;
	fVar0 = 9999.9f;
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!PED::IS_PED_INJURED(*iParam0))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(*iParam0, true) };
				fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_67, Var1, true);
				if (fVar0 < 45f)
				{
					if (CAM::IS_SPHERE_VISIBLE(Var1, 1.5f) && (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/) || fVar0 < 20f))
					{
						iParam0->f_4 = 1;
					}
					else
					{
						iParam0->f_4 = 0;
					}
				}
				else
				{
					iParam0->f_4 = 0;
				}
				if (fVar0 > 135f)
				{
					if (!CAM::IS_SPHERE_VISIBLE(Var1, 1.5f) || CAM::IS_SCREEN_FADED_OUT())
					{
						iParam0->f_12 = 11;
					}
				}
			}
		}
		else
		{
			if (iParam0->f_13 == 1)
			{
				func_620(iParam0);
			}
			iParam0->f_12 = 10;
		}
	}
	func_619(iParam0, iParam1);
	switch (iParam0->f_12)
	{
		case 1:
			if (iParam0->f_25 == -1)
			{
				iParam0->f_25 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(2000, 6000));
			}
			if (!iParam0->f_26)
			{
				iParam0->f_12 = 2;
			}
			else if (MISC::GET_GAME_TIMER() > iParam0->f_25)
			{
				iParam0->f_12 = 2;
			}
			break;
		case 2:
			if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
			{
				if (func_608(&(iParam0->f_19), &(iParam0->f_22), 0))
				{
					if (bLocal_175)
					{
						iParam0->f_11 = joaat("A_C_Boar");
						iParam0->f_13 = 2;
					}
					else
					{
						iParam0->f_11 = joaat("A_C_Coyote");
						iParam0->f_13 = 1;
					}
					if (func_605(iParam0, iParam0->f_19, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f), iParam0->f_11, 0, 0))
					{
						func_604(iParam0, 3, 1);
						func_603(iParam0);
						bLocal_175 = !bLocal_175;
						if (iParam0->f_13 == 2)
						{
							PED::SET_PED_SEEING_RANGE(*iParam0, 35f);
							PED::SET_PED_ID_RANGE(*iParam0, 40f);
							PED::SET_PED_HEARING_RANGE(*iParam0, 20f);
							PED::SET_PED_HIGHLY_PERCEPTIVE(*iParam0, true);
							PED::SET_PED_VISUAL_FIELD_MIN_ANGLE(*iParam0, -80f);
							PED::SET_PED_VISUAL_FIELD_MAX_ANGLE(*iParam0, 80f);
							TASK::TASK_WANDER_IN_AREA(*iParam0, iParam0->f_19, 20f, 1f, 6f);
							iParam0->f_12 = 3;
						}
						else if (iParam0->f_13 == 1)
						{
							if (func_617(iParam1) != 0)
							{
								iParam0->f_24 = iParam1;
							}
							TASK::TASK_WANDER_IN_AREA(*iParam0, iParam0->f_19, 20f, 1f, 6f);
							iParam0->f_12 = 3;
						}
					}
				}
			}
			break;
		case 3:
			if (func_582(iParam0))
			{
				if (iParam0->f_13 == 1)
				{
					func_620(iParam0);
				}
				func_599(iParam0);
				iParam0->f_12 = 4;
			}
			break;
		case 4:
			TASK::CLEAR_PED_TASKS(*iParam0);
			TASK::TASK_SMART_FLEE_PED(*iParam0, PLAYER::PLAYER_PED_ID(), 500f, -1, false, false);
			PED::SET_PED_KEEP_TASK(*iParam0, true);
			iParam0->f_12 = 5;
			break;
		case 5:
			break;
		case 10:
		case 11:
			func_581(iParam0);
			break;
	}
}

int func_617(int iParam0)//Position - 0x78ADF
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (MISC::GET_RANDOM_INT_IN_RANGE(0, 100) < 75)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(Local_173[iVar0 /*29*/]) || PED::IS_PED_INJURED(Local_173[iVar0 /*29*/]))
			{
				if (func_618(iVar0, iParam0))
				{
					iVar1++;
				}
			}
		}
		iVar0++;
		iVar0++;
	}
	return iVar1;
}

int func_618(int iParam0, int iParam1)//Position - 0x78B41
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	switch (iParam0)
	{
		case 0:
			Var0 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-2f, -1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-2f, -1f), 0f };
			break;
		case 1:
			Var0 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(2f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-2f, -1f), 0f };
			break;
		case 2:
			Var0 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(2f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(2f, 1f), 0f };
			break;
	}
	Var1 = { ENTITY::GET_ENTITY_COORDS(Local_173[iParam1 /*29*/], true) };
	fVar2 = ENTITY::GET_ENTITY_HEADING(Local_173[iParam1 /*29*/]);
	Local_173[iParam0 /*29*/].f_19 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var1, fVar2, Var0) };
	__LIB_29__.func_681(&(Local_173[iParam0 /*29*/].f_14), 0);
	Local_173[iParam0 /*29*/].f_22 = (fVar2 + MISC::GET_RANDOM_FLOAT_IN_RANGE(-30f, 30f));
	Local_173[iParam0 /*29*/].f_6 = 0;
	Local_173[iParam0 /*29*/].f_11 = joaat("A_C_Coyote");
	Local_173[iParam0 /*29*/].f_13 = 1;
	Local_173[iParam0 /*29*/].f_24 = iParam1;
	if (func_605(&(Local_173[iParam0 /*29*/]), Local_173[iParam0 /*29*/].f_19, Local_173[iParam0 /*29*/].f_22, joaat("A_C_Coyote"), 0, 0))
	{
		func_604(&(Local_173[iParam0 /*29*/]), 3, 1);
		TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(Local_173[iParam0 /*29*/], Local_173[iParam1 /*29*/], Var0, 1f, -1, 0.1f, true);
		return 1;
	}
	return 0;
}

void func_619(var uParam0, int iParam1)//Position - 0x78C8F
{
	struct<3> Var0;
	float fVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	struct<3> Var8;
	int iVar9;
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(*uParam0, false))
	{
		return;
	}
	if (uParam0->f_6)
	{
		return;
	}
	if (uParam0->f_3)
	{
		return;
	}
	Var0 = { ENTITY::GET_ENTITY_COORDS(*uParam0, false) };
	fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_67, Var0, true);
	bVar2 = ENTITY::IS_ENTITY_ON_SCREEN(*uParam0);
	if (!uParam0->f_8)
	{
		bVar3 = true;
		if (((bVar2 && uParam0->f_2 < MISC::GET_GAME_TIMER()) && fVar1 < 210f) && (iLocal_177 == iParam1 || iLocal_177 == -1))
		{
			iLocal_177 = iParam1;
			iVar4 = func_614(uParam0, Var0, fVar1);
			if (iVar4 == 1)
			{
				bVar3 = false;
			}
		}
		if (bVar2 && !bVar3)
		{
			HUD::GET_HUD_SCREEN_POSITION_FROM_WORLD_POSITION(Var0, &fVar5, &fVar6);
			if ((((fVar5 > 0.33f && fVar5 < 0.66f) && fVar6 > 0.33f) && fVar6 < 0.66f) && fVar1 < fLocal_60)
			{
				__LIB_0__.func_523(&(uParam0->f_1));
				__LIB_39__.func_378(&(uParam0->f_1), *uParam0, 1, 1065353216);
				HUD::SET_BLIP_SHOW_CONE(uParam0->f_1, true, 11);
				uParam0->f_8 = 1;
				func_593("HUNTING_SPOT_ANIMAL", 0);
				return;
			}
		}
	}
	if (!HUD::DOES_BLIP_EXIST(uParam0->f_1))
	{
		if (uParam0->f_10 < MISC::GET_GAME_TIMER())
		{
			fVar7 = (fVar1 * 0.5f);
			Var8 = { Var0 + Vector(0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(-3f, 3f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-3f, 3f)) };
			uParam0->f_1 = HUD::ADD_BLIP_FOR_RADIUS(Var8, fVar7);
			HUD::SET_BLIP_ALPHA(uParam0->f_1, 100);
			HUD::SET_BLIP_COLOUR(uParam0->f_1, 1);
			HUD::SHOW_HEIGHT_ON_BLIP(uParam0->f_1, false);
			uParam0->f_9 = MISC::GET_GAME_TIMER() + 10000;
			uParam0->f_10 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(30000, 60000));
		}
	}
	else
	{
		if ((MISC::GET_GAME_TIMER() > uParam0->f_9 && fVar1 > 35f) && uParam0->f_7)
		{
			if (bVar2)
			{
				if ((uParam0->f_2 < MISC::GET_GAME_TIMER() && (iLocal_177 == iParam1 || iLocal_177 == -1)) && fVar1 < fLocal_60)
				{
					iLocal_177 = iParam1;
					iVar9 = func_614(uParam0, Var0, fVar1);
					if (iVar9 == 1)
					{
						if (uParam0->f_8)
						{
							HUD::SET_BLIP_ALPHA(uParam0->f_1, 255);
						}
						else
						{
							HUD::SET_BLIP_ALPHA(uParam0->f_1, 100);
						}
						uParam0->f_9 = MISC::GET_GAME_TIMER() + 4000;
						return;
					}
					else if (iVar9 == -1)
					{
					}
					else if (iVar9 == 0)
					{
					}
				}
			}
		}
		uParam0->f_5 = HUD::GET_BLIP_ALPHA(uParam0->f_1);
		if (uParam0->f_5 > 0)
		{
			if (MISC::GET_RANDOM_INT_IN_RANGE(0, 1000) > 666)
			{
				uParam0->f_5 = (uParam0->f_5 - 1);
				HUD::SET_BLIP_ALPHA(uParam0->f_1, uParam0->f_5);
			}
		}
		else
		{
			HUD::SET_BLIP_SHOW_CONE(uParam0->f_1, false, 11);
			__LIB_0__.func_523(&(uParam0->f_1));
			uParam0->f_8 = 0;
		}
	}
}

void func_620(var uParam0)//Position - 0x78F5F
{
	int iVar0;
	int iVar1;
	iVar0 = uParam0->f_24;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_173[iVar1 /*29*/]) && !PED::IS_PED_INJURED(Local_173[iVar1 /*29*/]))
		{
			if (Local_173[iVar1 /*29*/].f_24 == iVar0)
			{
				Local_173[iVar1 /*29*/].f_6 = 1;
				func_599(&(Local_173[iVar1 /*29*/]));
				Local_173[iVar1 /*29*/].f_12 = 4;
			}
		}
		iVar1++;
	}
}

void func_621()//Position - 0x78FCB
{
	switch (iLocal_334)
	{
		case 0:
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			func_4();
			func_790();
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			bLocal_68 = false;
			HUD::ALLOW_SONAR_BLIPS(true);
			MISC::ACTION_MANAGER_ENABLE_ACTION(MISC::GET_HASH_KEY("AR_knife_low_kick_far"), false);
			MISC::ACTION_MANAGER_ENABLE_ACTION(MISC::GET_HASH_KEY("AR_knife_low_kick_close"), false);
			MISC::ACTION_MANAGER_ENABLE_ACTION(MISC::GET_HASH_KEY("ACT_low_kick_close"), false);
			MISC::ACTION_MANAGER_ENABLE_ACTION(MISC::GET_HASH_KEY("ACT_low_kick_far"), false);
			__LIB_6__.func_892(&(Local_56.f_58));
			SYSTEM::SETTIMERA(0);
			iLocal_346 = 0;
			__LIB_6__.func_892(&(Local_56.f_55));
			iLocal_334 = 2;
			break;
		case 2:
			func_838();
			func_785();
			if (!iLocal_346)
			{
				if (SYSTEM::TIMERA() > 500)
				{
					func_782(4, 0f, 0f, 0f, 0);
					iLocal_346 = 1;
				}
			}
			if (bLocal_352)
			{
				if (ENTITY::IS_ENTITY_DEAD(iLocal_351, false))
				{
					PLAYER::SET_MAX_WANTED_LEVEL(1);
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 1, false);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
				}
			}
			if (!iLocal_342)
			{
				HUD::FORCE_SONAR_BLIPS_THIS_FRAME();
				func_741();
				func_738();
				func_708();
				func_695(&Local_56);
				func_688();
				if (func_687(&(Local_56.f_63)))
				{
					if (__LIB_1__.func_303(PLAYER::PLAYER_PED_ID()))
					{
						__LIB_1__.func_37(&(Local_56.f_63.f_2));
					}
					else
					{
						__LIB_35__.func_437(&(Local_56.f_63), 0);
					}
				}
				if (func_654())
				{
					iLocal_340 = MISC::GET_GAME_TIMER() + 2000;
					if (iLocal_335 == 4)
					{
						iLocal_340 = MISC::GET_GAME_TIMER() + 5000;
						__LIB_0__.func_151("HLEFT1", 10000);
						HUD::CLEAR_PRINTS();
					}
					else if (iLocal_335 == 6)
					{
						HUD::CLEAR_PRINTS();
						__LIB_0__.func_151("HWANTED", 10000);
					}
					else
					{
						func_576(0);
					}
					Local_56.f_657 = 0;
					Local_56.f_661 = 0;
					HUD::THEFEED_FLUSH_QUEUE();
					func_20(1);
					iLocal_342 = 1;
				}
				else if (func_648())
				{
					__LIB_6__.func_892(&iLocal_336);
					CAM::DO_SCREEN_FADE_OUT(0);
					iLocal_334 = 4;
				}
			}
			else
			{
				func_741();
				if (MISC::GET_GAME_TIMER() > iLocal_340)
				{
					if (iLocal_335 != 6 && iLocal_335 != 4)
					{
						CAM::DO_SCREEN_FADE_OUT(500);
					}
					__LIB_6__.func_892(&iLocal_336);
					iLocal_334 = 4;
				}
			}
			break;
		case 3:
			if (__LIB_34__.func_808(&iLocal_336, 1f))
			{
				iLocal_334 = 4;
			}
			break;
		case 4:
			func_51();
			func_623();
			HUD::CLEAR_PRINTS();
			func_46();
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			func_622(0);
			break;
		case 5:
			break;
	}
}

void func_622(bool bParam0)//Position - 0x7920D
{
	iLocal_339 = iLocal_333;
	if (!bParam0)
	{
		iLocal_333 = iLocal_339 + 1;
	}
	else if (iLocal_339 > 0)
	{
		iLocal_333 = (iLocal_339 - 1);
	}
	iLocal_334 = 0;
}

void func_623()//Position - 0x7923F
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bVar0 = false;
	bVar1 = false;
	if (Local_56.f_6 > Global_113386.f_10049.f_109)
	{
		Global_113386.f_10049.f_109 = Local_56.f_6;
		Local_56.f_2 = Global_113386.f_10049.f_109;
		bVar0 = true;
	}
	if (Local_56.f_6 > Local_56.f_5)
	{
		bVar1 = true;
	}
	iVar2 = 0;
	while (iVar2 < 3)
	{
		if (Local_56.f_19[iVar2 /*3*/] > Global_113386.f_10049.f_111[iVar2])
		{
			Global_113386.f_10049.f_111[iVar2] = Local_56.f_19[iVar2 /*3*/];
			bVar0 = true;
		}
		iVar2++;
	}
	if (Local_56.f_6 > 0)
	{
		func_628(bVar1);
	}
	if (bVar0)
	{
		__LIB_0__.func_533();
	}
	if (Global_113386.f_10049.f_109 >= Local_56.f_3)
	{
		__LIB_24__.func_943(180, 0, 0);
	}
}

void func_628(bool bParam0)//Position - 0x7991D
{
	Global_113386.f_10049.f_116 = __LIB_18__.func_240();
	__LIB_38__.func_13(&(Global_113386.f_10049.f_116), 0, 0, 0, 7, 0, 0);
	__LIB_36__.func_53(-358013836);
	__LIB_36__.func_53(-589035286);
	__LIB_36__.func_53(-1842374536);
	__LIB_36__.func_53(-418954710);
	__LIB_36__.func_53(-1783816333);
	if (bParam0)
	{
		__LIB_20__.func_779(-1783816333, 4, 54, 3, 7200000, -1, 4);
	}
	else
	{
		__LIB_20__.func_779(-358013836, 4, 54, 3, 7200000, -1, 4);
		__LIB_20__.func_779(-589035286, 4, 54, 3, 7200000, -1, 4);
	}
}

int func_648()//Position - 0x7A3ED
{
	if (!iLocal_341)
	{
		if ((((__LIB_0__.func_77(0) || __LIB_0__.func_661()) || __LIB_29__.func_689()) || HUD::IS_HUD_COMPONENT_ACTIVE(19)) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/))
		{
			iLocal_364 = MISC::GET_GAME_TIMER() + 1000;
			return 0;
		}
		if (MISC::GET_GAME_TIMER() > iLocal_364)
		{
			PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, 51 /*INPUT_CONTEXT*/);
			if (PAD::IS_CONTROL_JUST_RELEASED(0 /*PLAYER_CONTROL*/, 51 /*INPUT_CONTEXT*/))
			{
				HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
				__LIB_8__.func_770(1);
				func_650();
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				MISC::SET_GAME_PAUSED(true);
				iLocal_153 = 1;
				iLocal_341 = 1;
			}
		}
	}
	else
	{
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
		HUD::SET_WARNING_MESSAGE_WITH_HEADER("HT_QTITLE" /* GXT: Quit */, "HT_QUIT", 36, 0, false, -1, 0, 0, true, 0);
		if ((__LIB_0__.func_1("AHT_CALL") || __LIB_0__.func_1("AHT_CANC1")) || __LIB_0__.func_1("AHT_CANC2"))
		{
			HUD::CLEAR_HELP(true);
		}
		if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
		{
			func_576(0);
			func_567(&(Local_56.f_74), 0);
			MISC::SET_GAME_PAUSED(false);
			Local_56.f_0 = "HCHEND";
			iLocal_335 = 7;
			CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
			return 1;
		}
		else if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			MISC::SET_GAME_PAUSED(false);
			CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
			iLocal_153 = 0;
			iLocal_341 = 0;
			__LIB_8__.func_770(0);
		}
	}
	return 0;
}

void func_650()//Position - 0x7A545
{
	AUDIO::PLAY_SOUND_FRONTEND(-1, "CANCEL", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
}

int func_654()//Position - 0x7A5B7
{
	struct<4> Var0;
	int iVar1;
	if (func_675())
	{
		Local_56.f_0 = "HLEFT";
		iLocal_335 = 4;
		HUD::THEFEED_FLUSH_QUEUE();
		return 1;
	}
	if (bLocal_68)
	{
		Local_56.f_0 = "HWRONG";
		iLocal_335 = 5;
		HUD::THEFEED_FLUSH_QUEUE();
		return 1;
	}
	iVar1 = CLOCK::GET_CLOCK_HOURS();
	if ((iVar1 > 19 || iVar1 < 5) && bLocal_59)
	{
		if (iVar1 > 20 || iVar1 < 5)
		{
			if (!iLocal_344)
			{
				Var0 = { func_674("LATE_QUIT", 5) };
				__LIB_37__.func_818(54, &Var0, 1, 0, 0, 0, 0, 1, 0, 1);
				iLocal_344 = 1;
			}
			else
			{
				if (!__LIB_0__.func_516(&(Local_56.f_658)))
				{
					__LIB_18__.func_364(&(Local_56.f_658));
				}
				if (func_656(&(Local_56.f_658), 5f))
				{
					__LIB_29__.func_823(2);
					Local_56.f_0 = "HNOTIME";
					iLocal_335 = 2;
					HUD::THEFEED_FLUSH_QUEUE();
					return 1;
				}
			}
		}
		else if (!iLocal_345)
		{
			Var0 = { func_674("LATE", 5) };
			__LIB_37__.func_818(54, &Var0, 1, 0, 0, 0, 0, 1, 0, 1);
			iLocal_345 = 1;
			__LIB_29__.func_823(2);
		}
	}
	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
	{
		Local_56.f_0 = "REASON_WANTED";
		iLocal_335 = 6;
		HUD::THEFEED_FLUSH_QUEUE();
		return 1;
	}
	return 0;
}

int func_656(var uParam0, float fParam1)//Position - 0x7A725
{
	if (__LIB_34__.func_808(uParam0, fParam1))
	{
		__LIB_1__.func_37(uParam0);
		return 1;
	}
	return 0;
}

struct<4> func_674(char* sParam0, int iParam1)//Position - 0x7B826
{
	struct<4> Var0;
	StringCopy(&Var0, "HTXT_", 16);
	StringConCat(&Var0, sParam0, 16);
	if (iParam1 != 0)
	{
		StringIntConCat(&Var0, MISC::GET_RANDOM_INT_IN_RANGE(1, iParam1 + 1), 16);
	}
	return Var0;
}

int func_675()//Position - 0x7B854
{
	if (!func_683())
	{
		if (!iLocal_69)
		{
			if (!bLocal_59)
			{
				HUD::CLEAR_HELP(true);
			}
			__LIB_0__.func_210("AHT_RTN", 7500, 0);
			iLocal_71 = __LIB_10__.func_658(Local_93.f_47, 7, 0);
			func_679();
			iLocal_65 = 0;
			iLocal_69 = 1;
		}
		else if (!func_677())
		{
			__LIB_0__.func_523(&iLocal_71);
			return 1;
		}
	}
	else if (iLocal_69)
	{
		HUD::CLEAR_PRINTS();
		if (HUD::DOES_BLIP_EXIST(iLocal_71))
		{
			HUD::REMOVE_BLIP(&iLocal_71);
		}
		if (!bLocal_59)
		{
			__LIB_0__.func_151("AHT_CALL", -1);
		}
		iLocal_65 = 1;
		iLocal_69 = 0;
		func_676();
	}
	return 0;
}

void func_676()//Position - 0x7B8F2
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		Local_53[iVar0 /*36*/].f_4 = MISC::GET_GAME_TIMER();
		iVar0++;
	}
	iLocal_77 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(30000, 60000));
}

int func_677()//Position - 0x7B92C
{
	struct<3> Var0;
	Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	if (__LIB_11__.func_325(&uLocal_98, Var0))
	{
		return 1;
	}
	return 0;
}

void func_679()//Position - 0x7BA10
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (func_680(iVar0))
		{
			Local_53[iVar0 /*36*/].f_16 = 14;
		}
		iVar0++;
	}
}

bool func_680(int iParam0)//Position - 0x7BA3E
{
	return (ENTITY::DOES_ENTITY_EXIST(Local_53[iParam0 /*36*/]) && !ENTITY::IS_ENTITY_DEAD(Local_53[iParam0 /*36*/], false));
}

int func_683()//Position - 0x7BAA8
{
	struct<3> Var0;
	Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	if (__LIB_11__.func_325(&Local_93, Var0))
	{
		return 1;
	}
	return 0;
}

bool func_687(var uParam0)//Position - 0x7BC57
{
	if (!__LIB_0__.func_516(&(uParam0->f_2)))
	{
		return 0;
	}
	return ((__LIB_5__.func_736(&(uParam0->f_2)) - 1f) * 1000f) <= SYSTEM::TO_FLOAT(uParam0->f_1);
}

void func_688()//Position - 0x7BC88
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
	{
		if (((func_693() && !iLocal_69) && PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID())) && CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
		{
			if (iLocal_82 == -1)
			{
				iLocal_82 = AUDIO::GET_SOUND_ID();
			}
			if (iLocal_83 >= 10)
			{
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("HUNTING_02_SETTINGS"))
				{
					AUDIO::START_AUDIO_SCENE("HUNTING_02_SETTINGS");
					__LIB_34__.func_810(&fLocal_84, &fLocal_85);
					AUDIO::SET_AUDIO_SCENE_VARIABLE("HUNTING_02_SETTINGS", "Concentration", fLocal_84);
					AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_82, "Heart_Breathing", PLAYER::PLAYER_PED_ID(), 0, false, 0);
				}
				else
				{
					__LIB_34__.func_809(&fLocal_84, &fLocal_85);
					AUDIO::SET_AUDIO_SCENE_VARIABLE("HUNTING_02_SETTINGS", "Concentration", fLocal_84);
				}
				AUDIO::SET_VARIABLE_ON_SOUND(iLocal_82, "Concentration", fLocal_85);
			}
			else
			{
				iLocal_83++;
			}
		}
		else
		{
			iLocal_83 = 0;
			func_689();
		}
	}
	else if (AUDIO::IS_AUDIO_SCENE_ACTIVE("HUNTING_02_SETTINGS"))
	{
		AUDIO::STOP_AUDIO_SCENE("HUNTING_02_SETTINGS");
		AUDIO::STOP_SOUND(iLocal_82);
		AUDIO::RELEASE_SOUND_ID(iLocal_82);
		iLocal_82 = -1;
	}
}

void func_689()//Position - 0x7BD7F
{
	fLocal_84 = (fLocal_84 - 0.05f);
	if (!func_690())
	{
		fLocal_85 = (fLocal_85 - 0.05f);
	}
	if (fLocal_84 <= 0f)
	{
		fLocal_84 = 0f;
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("HUNTING_02_SETTINGS"))
		{
			AUDIO::STOP_AUDIO_SCENE("HUNTING_02_SETTINGS");
			AUDIO::STOP_SOUND(iLocal_82);
			AUDIO::RELEASE_SOUND_ID(iLocal_82);
			iLocal_82 = -1;
		}
	}
	if (fLocal_84 >= 1f)
	{
		fLocal_84 = 1f;
	}
	if (fLocal_85 >= 100f)
	{
		fLocal_85 = 100f;
	}
	if (fLocal_85 <= 70f)
	{
		fLocal_85 = 70f;
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("HUNTING_02_SETTINGS"))
	{
		AUDIO::SET_AUDIO_SCENE_VARIABLE("HUNTING_02_SETTINGS", "Concentration", fLocal_84);
		AUDIO::SET_AUDIO_SCENE_VARIABLE("HUNTING_02_SETTINGS", "Breathing", fLocal_84);
		AUDIO::SET_VARIABLE_ON_SOUND(iLocal_82, "Concentration", fLocal_85);
	}
}

int func_690()//Position - 0x7BE41
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (func_680(iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_693()//Position - 0x7BF2D
{
	if (__LIB_1__.func_197(PLAYER::PLAYER_PED_ID()))
	{
		if (WEAPON::GET_WEAPONTYPE_GROUP(__LIB_1__.func_562(PLAYER::PLAYER_PED_ID())) == joaat("GROUP_SNIPER"))
		{
			if (!iLocal_70)
			{
				iLocal_70 = 1;
			}
			return 1;
		}
	}
	return 0;
}

void func_695(var uParam0)//Position - 0x7BF78
{
	int iVar0;
	char* sVar1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_19)
	{
		if (uParam0->f_19[iVar0 /*3*/] == -1)
		{
			if (uParam0->f_19[iVar0 /*3*/].f_1 == 3 && !CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
			{
				if (func_656(&(uParam0->f_29), 21.5f))
				{
					__LIB_29__.func_823(2);
					uParam0->f_19[iVar0 /*3*/] = 0;
					uParam0->f_19[iVar0 /*3*/].f_1 = 0;
					Local_56.f_62 = 0;
					if (!Local_56.f_666)
					{
						if (!Global_113386.f_10049.f_115)
						{
							Global_113386.f_10049.f_115 = 1;
							__LIB_0__.func_151("AHT_CHAL_UNLOCKED", -1);
						}
						Local_56.f_666 = 1;
					}
					func_6();
				}
				else if (__LIB_34__.func_808(&(uParam0->f_29), 20f) && !uParam0->f_665)
				{
					sVar1 = func_707(iVar0);
					__LIB_37__.func_818(54, sVar1, 2, 0, 0, 0, 0, 1, 0, 1);
					uParam0->f_665 = 1;
				}
				else if (!__LIB_0__.func_516(&(uParam0->f_29)))
				{
					__LIB_18__.func_364(&(uParam0->f_29));
					uParam0->f_665 = 0;
				}
			}
		}
		else if (uParam0->f_19[iVar0 /*3*/] != 5)
		{
			switch (iVar0)
			{
				case 0:
					func_703(uParam0, iVar0);
					break;
				case 1:
					func_702(uParam0, iVar0);
					break;
				case 2:
					func_696(uParam0, iVar0);
					break;
				}
		}
		iVar0++;
	}
}

void func_696(var uParam0, int iParam1)//Position - 0x7C0C4
{
	struct<2> Var0;
	switch (uParam0->f_19[iParam1 /*3*/].f_1)
	{
		case 0:
			uParam0->f_19[iParam1 /*3*/].f_1 = 1;
			Local_56.f_73 = 0;
			break;
		case 1:
			break;
		case 2:
			if (uParam0->f_48 != -1)
			{
				if (uParam0->f_48 > MISC::GET_GAME_TIMER())
				{
					return;
				}
				else
				{
					uParam0->f_48 = -1;
				}
			}
			if (!func_687(&(Local_56.f_63)) && !CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
			{
				StringCopy(&Var0, "HUNTUI_RANKUP", 16);
				if (uParam0->f_19[iParam1 /*3*/] == 4)
				{
					StringCopy(&Var0, "HUNTUI_COMPLETE", 16);
				}
				__LIB_37__.func_686(&(Local_56.f_63), "HUNTUI_WEAPON_T", uParam0->f_19[iParam1 /*3*/] + 1, &Var0, 4000, 5, 1);
				uParam0->f_19[iParam1 /*3*/].f_1 = 3;
			}
			break;
		case 3:
			if (!func_687(&(Local_56.f_63)))
			{
				func_698(uParam0->f_19[iParam1 /*3*/]);
				if (uParam0->f_19[iParam1 /*3*/] != 1)
				{
					__LIB_26__.func_515(2, 6, 2);
				}
				else
				{
					__LIB_26__.func_515(2, 4, 2);
				}
				uParam0->f_19[iParam1 /*3*/]++;
				func_6();
				uParam0->f_19[iParam1 /*3*/].f_1 = 0;
			}
			break;
	}
}

void func_698(int iParam0)//Position - 0x7C2D4
{
	int iVar0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 5;
			break;
		case 1:
			iVar0 = 10;
			break;
		case 2:
			iVar0 = 15;
			break;
		case 3:
			iVar0 = 20;
			break;
		case 4:
			iVar0 = 25;
			break;
	}
	if (iVar0 > 0)
	{
		Local_56.f_6 = (Local_56.f_6 + iVar0);
		func_699("HN_RANK", iVar0);
	}
}

void func_699(char* sParam0, int iParam1)//Position - 0x7C341
{
	char cVar0[16];
	StringCopy(&cVar0, "HN_ELK", 16);
	if (iParam1 == 1)
	{
		StringConCat(&cVar0, "_1PT", 16);
	}
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(&cVar0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
}

void func_702(var uParam0, int iParam1)//Position - 0x7C45C
{
	struct<2> Var0;
	switch (uParam0->f_19[iParam1 /*3*/].f_1)
	{
		case 0:
			uParam0->f_19[iParam1 /*3*/].f_1 = 1;
			Local_56.f_73 = 0;
			break;
		case 1:
			break;
		case 2:
			if (uParam0->f_48 != -1)
			{
				if (uParam0->f_48 > MISC::GET_GAME_TIMER())
				{
					return;
				}
				else
				{
					uParam0->f_48 = -1;
				}
			}
			if (!func_687(&(Local_56.f_63)) && !CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
			{
				StringCopy(&Var0, "HUNTUI_RANKUP", 16);
				if (uParam0->f_19[iParam1 /*3*/] == 4)
				{
					StringCopy(&Var0, "HUNTUI_COMPLETE", 16);
				}
				__LIB_37__.func_686(&(Local_56.f_63), "HUNTUI_PHOTO_T", uParam0->f_19[iParam1 /*3*/] + 1, &Var0, 4000, 5, 1);
				uParam0->f_19[iParam1 /*3*/].f_1 = 3;
			}
			break;
		case 3:
			if (!func_687(&(Local_56.f_63)))
			{
				func_698(uParam0->f_19[iParam1 /*3*/]);
				if (uParam0->f_19[iParam1 /*3*/] == 0)
				{
					__LIB_26__.func_515(2, 7, 2);
				}
				uParam0->f_19[iParam1 /*3*/]++;
				func_6();
				uParam0->f_19[iParam1 /*3*/].f_1 = 0;
			}
			break;
	}
}

void func_703(var uParam0, int iParam1)//Position - 0x7C572
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	struct<2> Var3;
	switch (uParam0->f_19[iParam1 /*3*/].f_1)
	{
		case 0:
			switch (uParam0->f_19[iParam1 /*3*/])
			{
				case 0:
					uParam0->f_33 = 0;
					break;
				case 1:
					uParam0->f_34 = 0;
					break;
				case 2:
					uParam0->f_32 = 0;
					break;
				case 3:
					iVar0 = 0;
					while (iVar0 < Local_56.f_37)
					{
						Local_56.f_37[iVar0] = 0;
						iVar0++;
					}
					break;
				case 4:
					iVar0 = 0;
					while (iVar0 < Local_56.f_37)
					{
						Local_56.f_37[iVar0] = 0;
						iVar0++;
					}
					break;
			}
			Local_56.f_73 = 0;
			uParam0->f_19[iParam1 /*3*/].f_1 = 1;
			break;
		case 1:
			switch (uParam0->f_19[iParam1 /*3*/])
			{
				case 0:
					if (uParam0->f_33 > uParam0->f_19[iParam1 /*3*/].f_2)
					{
						Local_56.f_73 = 0;
					}
					else if (uParam0->f_33 < uParam0->f_19[iParam1 /*3*/].f_2)
					{
						Local_56.f_73 = 0;
						func_705("HUNTNOT_HUNTER_1", uParam0->f_33, func_706(iParam1, uParam0->f_19[iParam1 /*3*/]));
					}
					uParam0->f_19[iParam1 /*3*/].f_2 = uParam0->f_33;
					if (uParam0->f_33 >= func_706(iParam1, uParam0->f_19[iParam1 /*3*/]))
					{
						uParam0->f_19[iParam1 /*3*/].f_1 = 2;
					}
					break;
				case 1:
					if (uParam0->f_34 > uParam0->f_19[iParam1 /*3*/].f_2)
					{
						Local_56.f_73 = 0;
						if (uParam0->f_34 < func_706(iParam1, uParam0->f_19[iParam1 /*3*/]))
						{
							func_705("HUNTNOT_HUNTER_2", uParam0->f_34, func_706(iParam1, uParam0->f_19[iParam1 /*3*/]));
						}
					}
					else if (uParam0->f_34 < uParam0->f_19[iParam1 /*3*/].f_2)
					{
						Local_56.f_73 = 0;
						func_705("HUNTNOT_HUNTER_2", uParam0->f_34, func_706(iParam1, uParam0->f_19[iParam1 /*3*/]));
					}
					uParam0->f_19[iParam1 /*3*/].f_2 = uParam0->f_34;
					if (uParam0->f_34 >= func_706(iParam1, uParam0->f_19[iParam1 /*3*/]))
					{
						uParam0->f_19[iParam1 /*3*/].f_1 = 2;
					}
					break;
				case 2:
					if (uParam0->f_32 > uParam0->f_19[iParam1 /*3*/].f_2)
					{
						Local_56.f_73 = 0;
						if (uParam0->f_32 < func_706(iParam1, uParam0->f_19[iParam1 /*3*/]))
						{
							func_705("HUNTNOT_HUNTER_3", uParam0->f_32, func_706(iParam1, uParam0->f_19[iParam1 /*3*/]));
						}
					}
					else if (uParam0->f_32 < uParam0->f_19[iParam1 /*3*/].f_2)
					{
						Local_56.f_73 = 0;
						func_705("HUNTNOT_HUNTER_3", uParam0->f_32, func_706(iParam1, uParam0->f_19[iParam1 /*3*/]));
					}
					uParam0->f_19[iParam1 /*3*/].f_2 = uParam0->f_32;
					if (uParam0->f_32 >= func_706(iParam1, uParam0->f_19[iParam1 /*3*/]))
					{
						uParam0->f_19[iParam1 /*3*/].f_1 = 2;
					}
					break;
				case 3:
					uParam0->f_35 = 0;
					Local_56.f_36 = 0;
					Local_56.f_48 = MISC::GET_GAME_TIMER() + 1750;
					iVar1 = func_704(uParam0->f_19[iParam1 /*3*/]);
					iVar0 = 0;
					while (iVar0 < Local_56.f_37)
					{
						if (Local_56.f_37[iVar0] != 0)
						{
							if (Local_56.f_37[iVar0] + iVar1) >= MISC::GET_GAME_TIMER()
							{
								uParam0->f_35++;
								Local_56.f_48 = MISC::GET_GAME_TIMER() + 1750;
								if (Local_56.f_37[iVar0] < Local_56.f_36 || Local_56.f_36 == 0)
								{
									Local_56.f_36 = Local_56.f_37[iVar0];
								}
							}
							else
							{
								Local_56.f_37[iVar0] = 0;
							}
						}
						iVar0++;
					}
					if (uParam0->f_35 != uParam0->f_19[iParam1 /*3*/].f_2)
					{
						StringCopy(&Var2, "HUNTNOT_HUNTER_", 32);
						StringIntConCat(&Var2, uParam0->f_19[iParam1 /*3*/] + 1, 32);
						Local_56.f_73 = 0;
						if (uParam0->f_35 < func_706(iParam1, uParam0->f_19[iParam1 /*3*/]))
						{
							func_705(&Var2, uParam0->f_35, func_706(iParam1, uParam0->f_19[iParam1 /*3*/]));
						}
					}
					uParam0->f_19[iParam1 /*3*/].f_2 = uParam0->f_35;
					if (uParam0->f_35 >= func_706(iParam1, uParam0->f_19[iParam1 /*3*/]))
					{
						uParam0->f_19[iParam1 /*3*/].f_1 = 2;
					}
					break;
				case 4:
					uParam0->f_35 = 0;
					Local_56.f_36 = 0;
					iVar1 = func_704(uParam0->f_19[iParam1 /*3*/]);
					iVar0 = 0;
					while (iVar0 < Local_56.f_37)
					{
						if (Local_56.f_37[iVar0] != 0)
						{
							if (Local_56.f_37[iVar0] + iVar1) >= MISC::GET_GAME_TIMER()
							{
								uParam0->f_35++;
								Local_56.f_48 = MISC::GET_GAME_TIMER() + 1750;
								if (Local_56.f_37[iVar0] < Local_56.f_36 || Local_56.f_36 == 0)
								{
									Local_56.f_36 = Local_56.f_37[iVar0];
								}
							}
							else
							{
								Local_56.f_37[iVar0] = 0;
							}
						}
						iVar0++;
					}
					uParam0->f_19[iParam1 /*3*/].f_2 = uParam0->f_35;
					if (uParam0->f_35 >= func_706(iParam1, uParam0->f_19[iParam1 /*3*/]))
					{
						uParam0->f_19[iParam1 /*3*/].f_1 = 2;
					}
					break;
			}
			break;
		case 2:
			if (uParam0->f_48 != -1)
			{
				if (uParam0->f_48 > MISC::GET_GAME_TIMER())
				{
					return;
				}
				else
				{
					uParam0->f_48 = -1;
				}
			}
			if (!func_687(&(Local_56.f_63)) && !CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
			{
				StringCopy(&Var3, "HUNTUI_RANKUP", 16);
				if (uParam0->f_19[iParam1 /*3*/] == 4)
				{
					StringCopy(&Var3, "HUNTUI_COMPLETE", 16);
				}
				__LIB_37__.func_686(&(Local_56.f_63), "HUNTUI_HUNTER_T", uParam0->f_19[iParam1 /*3*/] + 1, &Var3, 4000, 5, 1);
				uParam0->f_19[iParam1 /*3*/].f_1 = 3;
			}
			break;
		case 3:
			if (!func_687(&(Local_56.f_63)))
			{
				func_698(uParam0->f_19[iParam1 /*3*/]);
				__LIB_26__.func_515(2, 6, 2);
				if (uParam0->f_19[iParam1 /*3*/] == 2)
				{
					__LIB_26__.func_515(2, 7, 1);
				}
				uParam0->f_19[iParam1 /*3*/]++;
				uParam0->f_19[iParam1 /*3*/].f_1 = 0;
				uParam0->f_19[iParam1 /*3*/].f_2 = 0;
				func_6();
			}
			break;
	}
}

int func_704(int iParam0)//Position - 0x7CB2C
{
	switch (iParam0)
	{
		case 3:
			return 240000;
			break;
		case 4:
			return 500;
			break;
	}
	return 1000;
}

void func_705(char* sParam0, int iParam1, int iParam2)//Position - 0x7CB5D
{
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
}

int func_706(int iParam0, int iParam1)//Position - 0x7CB7E
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
				case 1:
					return 2;
					break;
				case 2:
					return 3;
					break;
				case 3:
					return 4;
					break;
				case 4:
					return 2;
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
				case 1:
					return 1;
					break;
				case 2:
					return 1;
					break;
				case 3:
					return 1;
					break;
				case 4:
					return 1;
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
				case 1:
					return 1;
					break;
				case 2:
					return 1;
					break;
				case 3:
					return 1;
					break;
				case 4:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

char* func_707(int iParam0)//Position - 0x7CC81
{
	switch (iParam0)
	{
		case 1:
			return "HTXT_PHOTO" /* GXT: think u can get me a photo of some does?  Wanna frame it up for a certain lady friend :) */;
			break;
		case 0:
			return "HTXT_HUNTER" /* GXT: I wanna see heart shots Trevor! Sign of a good hunter in my book. */;
			break;
		case 2:
			return "HTXT_WEAPON" /* GXT: Reckon you can take down a coyote with a shotgun trevor? */;
			break;
	}
	return "";
}

void func_708()//Position - 0x7CCC6
{
	struct<3> Var0;
	float fVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	struct<4> Var5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	if (!ITEMSET::IS_ITEMSET_VALID(Local_56.f_655))
	{
		return;
	}
	iVar6 = 0;
	switch (Local_56.f_657)
	{
		case 0:
			if (__LIB_2__.func_174())
			{
				Local_56.f_675 = CAM::GET_FIRST_PERSON_AIM_CAM_ZOOM_FACTOR();
				Local_56.f_657 = 1;
			}
			else if (Local_56.f_50 == 0 && !Local_56.f_662)
			{
				if (ITEMSET::GET_ITEMSET_SIZE(Local_56.f_655) > 0)
				{
					if (!__LIB_0__.func_516(&(Local_56.f_658)))
					{
						__LIB_18__.func_364(&(Local_56.f_658));
					}
					else if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
					{
						if (func_656(&(Local_56.f_658), 1.5f))
						{
							__LIB_0__.func_151("AHT_PHOTO", -1);
							Local_56.f_662 = 1;
						}
					}
				}
			}
			Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			bVar4 = Local_56.f_661;
			Local_56.f_661 = 0;
			iVar6 = 0;
			while (iVar6 < ITEMSET::GET_ITEMSET_SIZE(Local_56.f_655))
			{
				iVar2 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar6, Local_56.f_655);
				if (ENTITY::IS_AN_ENTITY(iVar2))
				{
					iVar3 = iVar2;
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar3, true, false);
					if (!ENTITY::IS_ENTITY_DEAD(iVar3, false))
					{
						return;
					}
					fVar1 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iVar3, false), Var0);
					if (fVar1 < 25f)
					{
						Local_56.f_661 = 1;
						if (Local_56.f_50 == 0 && !Local_56.f_663)
						{
							if (!__LIB_0__.func_1("AHT_PHOTO"))
							{
								__LIB_0__.func_151("AHT_PHOTO_NEAR", -1);
							}
							Local_56.f_663 = 1;
						}
					}
					bVar8 = true;
					if (DECORATOR::DECOR_EXIST_ON(iVar3, "hunt_kill_time"))
					{
						iVar9 = DECORATOR::DECOR_GET_INT(iVar3, "hunt_kill_time");
						if (MISC::GET_GAME_TIMER() < iVar9 + 250)
						{
							bVar8 = false;
						}
						if (bVar8)
						{
							if (MISC::GET_GAME_TIMER() > iVar9 + 20000)
							{
								GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("ent_amb_insect_plane", iVar3, 0f, 0f, 0f, 0f, 0f, 0f, 1f, false, false, false);
								DECORATOR::DECOR_REMOVE(iVar3, "hunt_kill_time");
							}
						}
					}
					if (bVar8)
					{
						if (!HUD::DOES_BLIP_EXIST(HUD::GET_BLIP_FROM_ENTITY(iVar3)))
						{
							iVar10 = HUD::ADD_BLIP_FOR_ENTITY(iVar3);
							HUD::SET_BLIP_PRIORITY(iVar10, 5);
							HUD::SET_BLIP_SPRITE(iVar10, 274);
							HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iVar10, "HUNT_KILL_BLIP");
							HUD::SET_BLIP_ALPHA(iVar10, 75);
						}
					}
				}
				iVar6++;
			}
			if (bVar4 != Local_56.f_661)
			{
				Local_56.f_62 = 0;
			}
			break;
		case 1:
			__LIB_14__.func_366(1);
			if (CAM::GET_FIRST_PERSON_AIM_CAM_ZOOM_FACTOR() > 1f)
			{
				Local_56.f_675 = CAM::GET_FIRST_PERSON_AIM_CAM_ZOOM_FACTOR();
			}
			if (__LIB_11__.func_741() && Local_56.f_677 < MISC::GET_GAME_TIMER())
			{
				Local_56.f_677 = MISC::GET_GAME_TIMER() + 3000;
				bVar4 = false;
				iVar6 = 0;
				while (iVar6 < ITEMSET::GET_ITEMSET_SIZE(Local_56.f_655))
				{
					iVar2 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar6, Local_56.f_655);
					if (ENTITY::IS_AN_ENTITY(iVar2))
					{
						iVar3 = iVar2;
						if (func_734(iVar3))
						{
							iVar11 = HUD::GET_BLIP_FROM_ENTITY(iVar3);
							HUD::REMOVE_BLIP(&iVar11);
							if (!ITEMSET::IS_IN_ITEMSET(iVar3, Local_56.f_656))
							{
								ITEMSET::ADD_TO_ITEMSET(iVar3, Local_56.f_656);
							}
							bVar4 = true;
						}
					}
					iVar6++;
				}
				iVar6 = 0;
				while (iVar6 < Local_53.f_0)
				{
					if (func_734(Local_53[iVar6 /*36*/]))
					{
						if (!ITEMSET::IS_IN_ITEMSET(Local_53[iVar6 /*36*/], Local_56.f_656))
						{
							ITEMSET::ADD_TO_ITEMSET(Local_53[iVar6 /*36*/], Local_56.f_656);
						}
						bVar4 = true;
					}
					iVar6++;
				}
				iVar6 = 0;
				while (iVar6 < Local_173.f_0)
				{
					if (func_734(Local_173[iVar6 /*29*/]))
					{
						if (!ITEMSET::IS_IN_ITEMSET(Local_173[iVar6 /*29*/], Local_56.f_656))
						{
							ITEMSET::ADD_TO_ITEMSET(Local_173[iVar6 /*29*/], Local_56.f_656);
						}
						bVar4 = true;
					}
					iVar6++;
				}
				iVar6 = 0;
				while (iVar6 < Local_174.f_0)
				{
					if (func_734(Local_174[iVar6 /*29*/]))
					{
						if (!ITEMSET::IS_IN_ITEMSET(Local_174[iVar6 /*29*/], Local_56.f_656))
						{
							ITEMSET::ADD_TO_ITEMSET(Local_174[iVar6 /*29*/], Local_56.f_656);
						}
						bVar4 = true;
					}
					iVar6++;
				}
				if (bVar4)
				{
					if (Local_56.f_50 == 0 && !Local_56.f_664)
					{
						__LIB_0__.func_151("AHT_PHOTO_SEND", -1);
						Local_56.f_664 = 1;
					}
					__LIB_14__.func_367(1);
					Local_56.f_657 = 2;
				}
				else
				{
					Local_56.f_657 = 0;
				}
			}
			else if (__LIB_9__.func_600())
			{
				Local_56.f_657 = 0;
			}
			break;
		case 2:
			if (__LIB_0__.func_507())
			{
				Local_56.f_657 = 3;
			}
			else if (__LIB_9__.func_596(2, Global_20235, 0))
			{
				__LIB_14__.func_366(0);
				__LIB_14__.func_367(0);
				Local_56.f_657 = 1;
			}
			break;
		case 3:
			if (__LIB_14__.func_722())
			{
				__LIB_6__.func_849(0);
				__LIB_14__.func_366(0);
				__LIB_14__.func_367(0);
				__LIB_18__.func_364(&(Local_56.f_658));
				if (__LIB_21__.func_414(54))
				{
					Local_56.f_50++;
					__LIB_21__.func_368(54);
					Local_56.f_657 = 4;
				}
				else
				{
					Local_56.f_657 = 5;
				}
			}
			else if (!__LIB_0__.func_507())
			{
				__LIB_14__.func_366(0);
				__LIB_14__.func_367(0);
				while (ITEMSET::GET_ITEMSET_SIZE(Local_56.f_656) > 0)
				{
					ITEMSET::REMOVE_FROM_ITEMSET(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(0, Local_56.f_656), Local_56.f_656);
				}
				Local_56.f_657 = 0;
			}
			break;
		case 5:
			if (func_656(&(Local_56.f_658), 3.5f))
			{
				while (ITEMSET::GET_ITEMSET_SIZE(Local_56.f_656) > 0)
				{
					ITEMSET::REMOVE_FROM_ITEMSET(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(0, Local_56.f_656), Local_56.f_656);
				}
				iVar12 = __LIB_0__.func_505();
				iVar7 = 0;
				while (iVar7 < iVar12)
				{
					if (Global_117[iVar7 /*10*/].f_8 != 166 && __LIB_21__.func_414(iVar7))
					{
						Var5 = { func_721(iVar7) };
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var5))
						{
							__LIB_37__.func_818(iVar7, &Var5, 1, 0, 0, 0, 0, 1, 0, 1);
						}
						__LIB_21__.func_368(iVar7);
					}
					iVar7++;
				}
				__LIB_18__.func_364(&(Local_56.f_658));
				Local_56.f_657 = 6;
			}
			break;
		case 6:
			if (func_656(&(Local_56.f_658), 0.5f))
			{
				__LIB_29__.func_823(2);
				Local_56.f_657 = 0;
			}
			break;
		case 4:
			if (func_656(&(Local_56.f_658), 3.5f))
			{
				Local_56.f_657 = 7;
				iVar13 = 15;
				iVar15 = 0;
				iVar16 = -1;
				iVar6 = 0;
				while (iVar6 < ITEMSET::GET_ITEMSET_SIZE(Local_56.f_656))
				{
					iVar17 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar6, Local_56.f_656);
					if (ENTITY::IS_AN_ENTITY(iVar17))
					{
						if (DECORATOR::DECOR_EXIST_ON(iVar17, "hunt_score"))
						{
							iVar14 = DECORATOR::DECOR_GET_INT(iVar17, "hunt_score");
							if (iVar15 == 0)
							{
								if (DECORATOR::DECOR_EXIST_ON(iVar17, "hunt_weapon"))
								{
									iVar15 = DECORATOR::DECOR_GET_INT(iVar17, "hunt_weapon");
								}
							}
						}
						else
						{
							iVar14 = 14;
							iVar15 = 0;
						}
						if (iVar14 < iVar13)
						{
							iVar13 = iVar14;
							iVar18 = iVar17;
						}
						if (ENTITY::IS_AN_ENTITY(iVar17))
						{
							iVar3 = iVar17;
							iVar19 = (iVar19 + func_718(iVar3));
						}
					}
					iVar6++;
				}
				switch (iVar13)
				{
					case 0:
						if (Local_56.f_19[0 /*3*/] == -1)
						{
							iVar16 = 0;
						}
						break;
					case 6:
					case 13:
					case 8:
					case 9:
					case 10:
						if (Local_56.f_19[2 /*3*/] == -1)
						{
							iVar16 = 2;
						}
						break;
					default:
						if (Local_56.f_19[1 /*3*/] == -1 && iVar16 == -1)
						{
							iVar16 = 1;
						}
						break;
				}
				if (iVar16 != -1)
				{
					Local_56.f_19[iVar16 /*3*/].f_1 = 3;
				}
				if (func_716(&Local_56))
				{
					StringCopy(&Var5, func_715(Local_56.f_19[1 /*3*/]), 16);
					iVar19 += 25;
				}
				else
				{
					Var5 = { func_713(iVar18, iVar13, iVar15) };
				}
				__LIB_41__.func_299(54, &Var5, 1, "", iVar19, "", 2, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0);
				__LIB_18__.func_364(&(Local_56.f_658));
			}
			break;
		case 7:
			if (func_656(&(Local_56.f_658), 1.5f))
			{
				if (func_716(&Local_56))
				{
					Local_56.f_73 = 0;
					Local_56.f_19[1 /*3*/].f_1 = 2;
				}
				while (iVar6 < ITEMSET::GET_ITEMSET_SIZE(Local_56.f_656))
				{
					iVar2 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar6, Local_56.f_656);
					ITEMSET::REMOVE_FROM_ITEMSET(iVar2, Local_56.f_656);
					if (ITEMSET::IS_IN_ITEMSET(iVar2, Local_56.f_655))
					{
						ITEMSET::REMOVE_FROM_ITEMSET(iVar2, Local_56.f_655);
					}
					if (ENTITY::IS_AN_ENTITY(iVar2))
					{
						iVar3 = iVar2;
						func_709(iVar3);
						if (DECORATOR::DECOR_EXIST_ON(iVar3, "hunt_score"))
						{
							ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar3);
						}
					}
				}
				__LIB_29__.func_823(2);
				ITEMSET::CLEAN_ITEMSET(Local_56.f_656);
				ITEMSET::CLEAN_ITEMSET(Local_56.f_655);
				Local_56.f_657 = 0;
			}
			break;
	}
}

void func_709(int iParam0)//Position - 0x7D4E2
{
	int iVar0;
	int iVar1;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		return;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "hunt_score"))
	{
		return;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "hunt_score");
	iVar1 = func_711(iVar0);
	Local_56.f_6 = (Local_56.f_6 + iVar1);
	func_699(func_710(iVar0), iVar1);
}

char* func_710(int iParam0)//Position - 0x7D538
{
	switch (iParam0)
	{
		case 0:
			return "HN_HT";
		case 1:
			return "HN_HS";
		case 2:
			return "HN_NS";
		case 3:
			return "HN_TS";
		case 4:
			return "HN_REAR";
		case 5:
			return "HN_FL";
		case 6:
			return "HN_SPK";
		case 13:
			return "HN_RDK";
		case 7:
			return "HN_DOE";
		case 8:
			return "HN_MLK";
		case 9:
			return "HN_BRK";
		case 10:
			return "HN_CYK";
		case 11:
			return "HN_BDK";
		case 12:
			return "HN_HMK";
		default:
	}
	return "";
}

int func_711(int iParam0)//Position - 0x7D60E
{
	switch (iParam0)
	{
		case 0:
			return 10;
		case 1:
			return 5;
		case 2:
			return 7;
		case 3:
			return 4;
		case 4:
			return 2;
		case 5:
			return 1;
		case 6:
			return 1;
		case 13:
			return 1;
		case 8:
			return 5;
		case 9:
			return 3;
		case 10:
			return 2;
		case 11:
			return 5;
		case 12:
			return 5;
		default:
	}
	return 0;
}

struct<4> func_713(int iParam0, int iParam1, int iParam2)//Position - 0x7D74D
{
	struct<4> Var0;
	int iVar1;
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "hunt_chal_weapon"))
	{
		StringCopy(&Var0, "HTXT_WCHAL", 16);
		StringIntConCat(&Var0, DECORATOR::DECOR_GET_INT(iParam0, "hunt_chal_weapon"), 16);
		return Var0;
	}
	iVar1 = func_711(iParam1);
	if ((((iVar1 < 5 && !Local_56.f_668) && Local_56.f_6 < Local_56.f_3) && Local_56.f_50 > 4) && IntToFloat((Local_56.f_6 / Local_56.f_50)) < 4f)
	{
		Local_56.f_668 = 1;
		return func_674("LOWPPK", 5);
	}
	if (!Local_56.f_669 && Local_56.f_6 < Local_56.f_3)
	{
		if ((Local_56.f_6 + iVar1) < Local_56.f_3 && (Local_56.f_6 + iVar1) + 5 > Local_56.f_3)
		{
			Local_56.f_669 = 1;
			return func_674("NBRONZE", 3);
		}
	}
	else if (!Local_56.f_670 && Local_56.f_6 < Local_56.f_4)
	{
		if ((Local_56.f_6 + iVar1) < Local_56.f_4 && (Local_56.f_6 + iVar1) + 5 > Local_56.f_4)
		{
			Local_56.f_670 = 1;
			return func_674("NSILVER", 3);
		}
	}
	else if (!Local_56.f_671 && Local_56.f_6 < Local_56.f_5)
	{
		if ((Local_56.f_6 + iVar1) < Local_56.f_5 && (Local_56.f_6 + iVar1) + 5 > Local_56.f_5)
		{
			Local_56.f_671 = 1;
			return func_674("NGOLD", 3);
		}
	}
	if (Local_56.f_6 < Local_56.f_3)
	{
		if ((Local_56.f_6 + iVar1) > Local_56.f_3)
		{
			return func_674("BRONZE" /* GXT: Bronze */, 3);
		}
	}
	else if (Local_56.f_6 < Local_56.f_4)
	{
		if ((Local_56.f_6 + iVar1) > Local_56.f_4)
		{
			return func_674("SILVER" /* GXT: Silver */, 3);
		}
	}
	else if (Local_56.f_6 < Local_56.f_5)
	{
		if ((Local_56.f_6 + iVar1) > Local_56.f_5)
		{
			return func_674("GOLD" /* GXT: Gold */, 3);
		}
	}
	if (iParam1 == 7)
	{
		return func_714(iParam1);
	}
	switch (iParam2)
	{
		case joaat("WEAPON_PISTOL"):
		case joaat("WEAPON_COMBATPISTOL"):
		case joaat("WEAPON_APPISTOL"):
		case joaat("WEAPON_SNSPISTOL"):
			if (Local_56.f_674 != joaat("GROUP_PISTOL"))
			{
				Local_56.f_674 = joaat("GROUP_PISTOL");
				return func_674("PISTOL", 3);
			}
			break;
		case joaat("WEAPON_MICROSMG"):
		case joaat("WEAPON_SMG"):
			if (Local_56.f_674 != joaat("GROUP_SMG"))
			{
				Local_56.f_674 = joaat("GROUP_SMG");
				return func_674("SMG", 3);
			}
			break;
		case joaat("WEAPON_ASSAULTRIFLE"):
		case joaat("WEAPON_CARBINERIFLE"):
		case joaat("WEAPON_SPECIALCARBINE"):
		case joaat("WEAPON_ADVANCEDRIFLE"):
		case joaat("WEAPON_MG"):
		case joaat("WEAPON_COMBATMG"):
		case joaat("WEAPON_MINIGUN"):
			if (Local_56.f_674 != joaat("GROUP_MG"))
			{
				Local_56.f_674 = joaat("GROUP_MG");
				return func_674("MG", 3);
			}
			break;
		case joaat("WEAPON_PUMPSHOTGUN"):
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			if (Local_56.f_674 != joaat("GROUP_SHOTGUN"))
			{
				Local_56.f_674 = joaat("GROUP_SHOTGUN");
				return func_674("SHOTGUN", 3);
			}
			break;
		case joaat("WEAPON_GRENADELAUNCHER"):
		case joaat("WEAPON_RPG"):
		case joaat("WEAPON_GRENADE"):
		case joaat("WEAPON_STICKYBOMB"):
		case joaat("WEAPON_MOLOTOV"):
			if (Local_56.f_674 != joaat("GROUP_HEAVY"))
			{
				Local_56.f_674 = joaat("GROUP_HEAVY");
				return func_674("EXPL", 3);
			}
			break;
		case joaat("WEAPON_UNARMED"):
		case joaat("WEAPON_BALL"):
		case joaat("WEAPON_KNIFE"):
		case joaat("WEAPON_NIGHTSTICK"):
		case joaat("WEAPON_HAMMER"):
		case joaat("WEAPON_BAT"):
		case joaat("WEAPON_CROWBAR"):
		case joaat("WEAPON_GOLFCLUB"):
		case joaat("WEAPON_BOTTLE"):
			if (Local_56.f_674 != joaat("GROUP_MELEE"))
			{
				Local_56.f_674 = joaat("GROUP_MELEE");
				return func_674("MELEE", 3);
			}
			break;
		default:
			Local_56.f_674 = joaat("GROUP_SNIPER");
			break;
	}
	return func_714(iParam1);
}

struct<4> func_714(int iParam0)//Position - 0x7DB3A
{
	switch (iParam0)
	{
		case 0:
			return func_674("HT", 5);
		case 1:
			return func_674("HS", 5);
		case 2:
			return func_674("NS", 5);
		case 3:
			return func_674("TS", 5);
		case 4:
			return func_674("REAR", 5);
		case 5:
			return func_674("RL", 5);
		case 6:
			return func_674("SPK", 5);
		case 7:
			return func_674("DOE", 5);
		case 13:
			return func_674("RDK", 3);
		case 8:
			return func_674("MLK", 3);
		case 9:
			return func_674("BRK", 3);
		case 10:
			return func_674("CYK", 3);
		case 11:
			return func_674("BDK", 3);
		case 12:
			return func_674("HMK", 3);
		case 14:
			return func_674("LIVE", 3);
		default:
	}
	return func_674("GEN", 0);
}

char* func_715(int iParam0)//Position - 0x7DC70
{
	switch (iParam0)
	{
		case 0:
			return "HTXT_PCHAL1" /* GXT: nice - that should put a smile on her face!  Know what'd put a smile on mine?  A couple of felled elk lying next to each other!  $~1~ for a job well done. */;
		case 1:
			return "HTXT_PCHAL2" /* GXT: that'll go on the wall above my bed!  While you're at it reckon you can get a shot of a dead boar and coyote together???  $~1~ for your troubles. */;
		case 2:
			return "HTXT_PCHAL3" /* GXT: My new screensaver!  Let's make this real interesting shall we...how about a photo of a dead elk and a LIVE cougar???  Just for the HELL OF IT!  $~1~ coming you way. */;
		case 3:
			return "HTXT_PCHAL4" /* GXT: Didn't think you'd manage that!  Alright lets go real crazy and see if you can get a dead elk, coyote, boar AND cougar in one shot!  STEP IT UP!  How does $~1~ sound for that last masterpiece? */;
		case 4:
			return "HTXT_PCHAL5" /* GXT: Now that's what I call a Cletus buffet!!!!!  $~1~ and you earned every cent of it! */;
		default:
	}
	return "HTXT_PHOTO_1";
}

int func_716(var uParam0)//Position - 0x7DCCA
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	iVar0 = ITEMSET::GET_ITEMSET_SIZE(uParam0->f_656);
	if (iVar0 == 0)
	{
		return 0;
	}
	iVar6 = 0;
	while (iVar6 < iVar0)
	{
		iVar7 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar6, uParam0->f_656);
		if (ENTITY::IS_AN_ENTITY(iVar7))
		{
			iVar8 = iVar7;
			if (DECORATOR::DECOR_EXIST_ON(iVar7, "hunt_score"))
			{
				iVar9 = DECORATOR::DECOR_GET_INT(iVar7, "hunt_score");
			}
			else
			{
				iVar9 = 14;
			}
			switch (uParam0->f_19[1 /*3*/])
			{
				case 0:
					if (iVar9 == 14)
					{
						if (__LIB_29__.func_690(iVar8))
						{
							return 1;
						}
					}
					break;
				case 1:
					if (iVar9 <= 6)
					{
						if (!bVar1)
						{
							bVar1 = true;
						}
						else
						{
							iVar2 = 1;
						}
					}
					if (bVar1 && iVar2)
					{
						return 1;
					}
					break;
				case 2:
					if (iVar9 == 10)
					{
						iVar3 = 1;
					}
					else if (iVar9 == 9)
					{
						iVar5 = 1;
					}
					if (iVar3 && iVar5)
					{
						return 1;
					}
					break;
				case 3:
					if (iVar9 <= 6)
					{
						bVar1 = true;
					}
					else if (iVar9 == 14 && ENTITY::GET_ENTITY_MODEL(iVar8) == joaat("A_C_MtLion"))
					{
						iVar4 = 1;
					}
					if (bVar1 && iVar4)
					{
						return 1;
					}
					break;
				case 4:
					if (iVar9 <= 6)
					{
						bVar1 = true;
					}
					else if (iVar9 == 8)
					{
						iVar4 = 1;
					}
					else if (iVar9 == 10)
					{
						iVar3 = 1;
					}
					else if (iVar9 == 9)
					{
						iVar5 = 1;
					}
					if (((bVar1 && iVar4) && iVar3) && iVar5)
					{
						return 1;
					}
					break;
				}
		}
		iVar6++;
	}
	return 0;
}

int func_718(int iParam0)//Position - 0x7DE84
{
	int iVar0;
	int iVar1;
	float fVar2;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		return 0;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "hunt_score"))
	{
		return 0;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "hunt_score");
	iVar1 = func_720(iVar0);
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "hunt_weapon"))
	{
		fVar2 = func_719(WEAPON::GET_WEAPONTYPE_GROUP(DECORATOR::DECOR_GET_INT(iParam0, "hunt_weapon")));
	}
	else
	{
		fVar2 = func_719(0);
	}
	iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * fVar2));
	Local_56.f_7 = (Local_56.f_7 + iVar1);
	return iVar1;
}

float func_719(int iParam0)//Position - 0x7DF0E
{
	switch (iParam0)
	{
		case joaat("GROUP_MELEE"):
			return 0.5f;
		case joaat("GROUP_PISTOL"):
			return 1f;
		case joaat("GROUP_SMG"):
			return 0.75f;
		case joaat("GROUP_RIFLE"):
			return 1f;
		case joaat("GROUP_MG"):
			return 0.25f;
		case joaat("GROUP_SHOTGUN"):
			return 0.25f;
		case joaat("GROUP_SNIPER"):
			return 1f;
		case joaat("GROUP_HEAVY"):
			return 0.1f;
		case joaat("GROUP_THROWN"):
			return 0.1f;
		default:
	}
	return 0.5f;
}

int func_720(int iParam0)//Position - 0x7DF94
{
	switch (iParam0)
	{
		case 0:
			return 100;
		case 1:
			return 50;
		case 2:
			return 75;
		case 3:
			return 50;
		case 4:
			return 50;
		case 5:
			return 50;
		case 6:
			return 50;
		case 13:
			return 5;
		case 7:
			return 25;
		case 8:
			return 25;
		case 9:
			return 50;
		case 10:
			return 10;
		case 11:
			return 10;
		case 12:
			return 0;
		default:
	}
	return 0;
}

struct<4> func_721(int iParam0)//Position - 0x7E03C
{
	struct<4> Var0;
	switch (iParam0)
	{
		case 0:
			if (!__LIB_29__.func_691(0))
			{
				StringCopy(&Var0, "", 16);
				return Var0;
			}
			return func_674("MICHAEL", 3);
		case 1:
			return func_674("FRANKLIN", 3);
		case 20:
			return func_674("RON", 0);
		case 24:
			return func_674("WADE", 0);
		case 34:
			return func_674("OSCAR", 0);
		case 29:
			if (!__LIB_0__.func_176(27))
			{
				return func_674("DEVIN", 0);
			}
			else
			{
				StringCopy(&Var0, "", 16);
				return Var0;
			}
			break;
		case 21:
		case 35:
			if (!__LIB_0__.func_176(27))
			{
				return func_674("CHENG", 0);
			}
			else
			{
				StringCopy(&Var0, "", 16);
				return Var0;
			}
			break;
		case 14:
			return func_674("JIMMY", 0);
		case 30:
			return func_674("DAVE", 0);
		case 12:
			return func_674("LESTER", 0);
		case 19:
			return func_674("LAMAR", 0);
		case 40:
			return func_674("PATRICIA", 0);
		case 62:
			return func_674("MAUDE", 0);
		case 135:
			return func_674("CASTRO", 0);
		case 33:
			return func_674("GAYMILIT", 0);
		case 93:
			return func_674("HITCHGRL", 0);
		case 49:
			return func_674("BARRY", 0);
		case 56:
			return func_674("JOE", 0);
		case 57:
			return func_674("JOSEF", 0);
		case 58:
			return func_674("JOSH", 0);
		case 64:
			return func_674("NIGEL", 0);
		case 39:
			if (__LIB_0__.func_176(13))
			{
				StringCopy(&Var0, "", 16);
				return Var0;
			}
			return func_674("ONEIL" /* GXT: O'Neil Way */, 0);
			break;
	}
	return func_674("RANDOM_", 3);
}

int func_734(int iParam0)//Position - 0x7E487
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	float fVar3;
	float fVar4;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	Var2 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	fVar3 = SYSTEM::VDIST2(Var2, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
	fVar4 = 100f;
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "hunt_score"))
	{
		fVar4 = 400f;
	}
	if ((fVar3 < ((fVar4 * Local_56.f_675) * Local_56.f_675) && CAM::IS_SPHERE_VISIBLE(Var2, 0.5f)) && GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(Var2, &fVar0, &fVar1))
	{
		if (((fVar0 > 0.25f && fVar0 < 0.75f) && fVar1 > 0.25f) && fVar1 < 0.75f)
		{
			return 1;
		}
	}
	return 0;
}

void func_738()//Position - 0x7E59E
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(0))
	{
		switch (SCRIPT::GET_EVENT_AT_INDEX(0, iVar0))
		{
			case 142:
				SCRIPT::GET_EVENT_DATA(0, iVar0, &iVar1, 1);
				if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					return;
				}
				if (!ENTITY::IS_ENTITY_A_PED(iVar1))
				{
					return;
				}
				if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar1, PLAYER::PLAYER_PED_ID(), true))
				{
					return;
				}
				iVar2 = ENTITY::GET_ENTITY_MODEL(iVar1);
				if (!WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar3, true))
				{
					iVar3 = 0;
				}
				switch (iVar2)
				{
					case joaat("A_C_Chickenhawk"):
					case joaat("A_C_Cormorant"):
					case joaat("A_C_Crow"):
					case joaat("A_C_Pigeon"):
					case joaat("A_C_Seagull"):
						func_740(iVar1, 11, iVar3);
						func_739(&Local_56, iVar1);
						break;
					default:
						if (PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1)))
						{
							func_740(iVar1, 12, iVar3);
						}
						break;
				}
				break;
		}
		iVar0++;
	}
}

void func_739(var uParam0, int iParam1)//Position - 0x7E677
{
	int iVar0;
	if (uParam0->f_19[2 /*3*/].f_1 != 1)
	{
		return;
	}
	switch (uParam0->f_19[2 /*3*/])
	{
		case 0:
			if (ENTITY::GET_ENTITY_MODEL(iParam1) != joaat("A_C_Coyote"))
			{
				return;
			}
			if ((WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iParam1, joaat("WEAPON_PUMPSHOTGUN"), 0) || WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iParam1, joaat("WEAPON_SAWNOFFSHOTGUN"), 0)) || WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iParam1, joaat("WEAPON_ASSAULTSHOTGUN"), 0))
			{
				Local_56.f_48 = MISC::GET_GAME_TIMER() + 1750;
				Local_56.f_73 = 0;
				uParam0->f_19[2 /*3*/].f_1 = 2;
			}
			break;
		case 1:
			if (ENTITY::GET_ENTITY_MODEL(iParam1) != joaat("A_C_Boar"))
			{
				return;
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), joaat("WEAPON_RUN_OVER_BY_CAR"), 0))
			{
				Local_56.f_48 = MISC::GET_GAME_TIMER() + 1750;
				Local_56.f_73 = 0;
				uParam0->f_19[2 /*3*/].f_1 = 2;
			}
			break;
		case 2:
			if (ENTITY::GET_ENTITY_MODEL(iParam1) != joaat("A_C_MtLion"))
			{
				return;
			}
			if ((WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iParam1, joaat("WEAPON_GRENADELAUNCHER"), 0) || WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iParam1, joaat("WEAPON_RPG"), 0)) || WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iParam1, joaat("WEAPON_GRENADE"), 0))
			{
				Local_56.f_48 = MISC::GET_GAME_TIMER() + 1750;
				Local_56.f_73 = 0;
				uParam0->f_19[2 /*3*/].f_1 = 2;
			}
			break;
		case 3:
			if (ENTITY::GET_ENTITY_MODEL(iParam1) != joaat("A_C_Deer"))
			{
				return;
			}
			if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iParam1, joaat("WEAPON_SNIPERRIFLE"), 0) || WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iParam1, joaat("WEAPON_HEAVYSNIPER"), 0))
			{
				if (!CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE() && !__LIB_29__.func_690(iParam1))
				{
					Local_56.f_48 = MISC::GET_GAME_TIMER() + 1750;
					Local_56.f_73 = 0;
					uParam0->f_19[2 /*3*/].f_1 = 2;
				}
			}
			break;
		case 4:
			iVar0 = ENTITY::GET_ENTITY_MODEL(iParam1);
			if ((((iVar0 != joaat("A_C_Chickenhawk") && iVar0 != joaat("A_C_Cormorant")) && iVar0 != joaat("A_C_Crow")) && iVar0 != joaat("A_C_Pigeon")) && iVar0 != joaat("A_C_Seagull"))
			{
				return;
			}
			if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iParam1, joaat("WEAPON_SNIPERRIFLE"), 0) || WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iParam1, joaat("WEAPON_HEAVYSNIPER"), 0))
			{
				Local_56.f_48 = MISC::GET_GAME_TIMER() + 1750;
				Local_56.f_73 = 0;
				uParam0->f_19[2 /*3*/].f_1 = 2;
			}
			break;
	}
}

void func_740(int iParam0, int iParam1, int iParam2)//Position - 0x7E8BF
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ITEMSET::IS_IN_ITEMSET(iParam0, Local_56.f_655))
	{
		return;
	}
	DECORATOR::DECOR_SET_INT(iParam0, "hunt_score", iParam1);
	if (Local_56.f_32 > 0)
	{
		DECORATOR::DECOR_SET_BOOL(iParam0, "hunt_undetected", true);
	}
	if (Local_56.f_34 > 0)
	{
		DECORATOR::DECOR_SET_BOOL(iParam0, "hunt_nocall", true);
	}
	if (WEAPON::IS_WEAPON_VALID(iParam2))
	{
		DECORATOR::DECOR_SET_INT(iParam0, "hunt_weapon", iParam2);
	}
	if (Local_56.f_19[2 /*3*/] == 1)
	{
		if (iParam1 == 9 && iParam2 == joaat("WEAPON_RUN_OVER_BY_CAR"))
		{
			DECORATOR::DECOR_SET_INT(iParam0, "hunt_chal_weapon", 2);
		}
	}
	else if (Local_56.f_19[2 /*3*/] == 0)
	{
		if (iParam1 == 10 && ((iParam2 == joaat("WEAPON_PUMPSHOTGUN") || iParam2 == joaat("WEAPON_SAWNOFFSHOTGUN")) || iParam2 == joaat("WEAPON_ASSAULTSHOTGUN")))
		{
			DECORATOR::DECOR_SET_INT(iParam0, "hunt_chal_weapon", 1);
		}
	}
	else if (Local_56.f_19[2 /*3*/] == 2)
	{
		if (iParam1 == 8 && ((iParam2 == joaat("WEAPON_GRENADELAUNCHER") || iParam2 == joaat("WEAPON_RPG")) || iParam2 == joaat("WEAPON_GRENADE")))
		{
			DECORATOR::DECOR_SET_INT(iParam0, "hunt_chal_weapon", 3);
		}
	}
	else if (Local_56.f_19[2 /*3*/] == 3)
	{
		if (iParam1 < 7 && (iParam2 == joaat("WEAPON_SNIPERRIFLE") || iParam2 == joaat("WEAPON_HEAVYSNIPER")))
		{
			if (!CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
			{
				DECORATOR::DECOR_SET_INT(iParam0, "hunt_chal_weapon", 4);
			}
		}
	}
	DECORATOR::DECOR_SET_INT(iParam0, "hunt_kill_time", MISC::GET_GAME_TIMER());
	if (!ITEMSET::IS_IN_ITEMSET(iParam0, Local_56.f_655))
	{
		ITEMSET::ADD_TO_ITEMSET(iParam0, Local_56.f_655);
	}
	ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, true, false);
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	PED::SET_PED_CONFIG_FLAG(iVar0, 137, true);
	Local_56.f_662 = 0;
	Local_56.f_663 = 0;
	Local_56.f_664 = 0;
}

void func_741()//Position - 0x7EAA0
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_780(&(Local_173[iVar0 /*29*/]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_780(&(Local_174[iVar0 /*29*/]));
		iVar0++;
	}
	func_742(0, iLocal_354 >= 2);
}

void func_742(bool bParam0, bool bParam1)//Position - 0x7EAEC
{
	int iVar0;
	iVar0 = 0;
	if (!iLocal_153)
	{
		if (iLocal_158)
		{
			iLocal_157 = MISC::GET_GAME_TIMER();
			iLocal_155 = (iLocal_157 - iLocal_156);
			iLocal_154 = (iLocal_154 + iLocal_155);
			iLocal_158 = 0;
		}
	}
	else if (!iLocal_158)
	{
		iLocal_156 = MISC::GET_GAME_TIMER();
		iLocal_158 = 1;
	}
	fLocal_61 = 1f;
	if (CAM::IS_AIM_CAM_ACTIVE())
	{
		fLocal_61 = CAM::GET_FIRST_PERSON_AIM_CAM_ZOOM_FACTOR();
	}
	fLocal_60 = (40f * fLocal_61);
	func_778();
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_772(iVar0);
		func_750(iVar0);
		iVar0++;
	}
	if (iLocal_76)
	{
		iLocal_76 = 0;
		iLocal_77 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(30000, 60000));
		iLocal_78 = -1;
		iLocal_79 = -1;
	}
	if (func_693())
	{
		iLocal_70 = 1;
	}
	if ((iLocal_153 || __LIB_0__.func_77(0)) || __LIB_0__.func_661())
	{
		return;
	}
	if (!bParam0 && bParam1)
	{
		__LIB_17__.func_701();
		func_746(0, 1132920832);
		if (Local_56.f_6 >= Local_56.f_5)
		{
			if (Local_56.f_6 > Local_56.f_2)
			{
				__LIB_6__.func_986(Local_56.f_6, "AHT_HIGHSCORE", -1, 1, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
			}
			else
			{
				__LIB_6__.func_986(Local_56.f_2, "AHT_HIGHSCORE", -1, 1, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
			}
		}
		else if (Local_56.f_6 >= Local_56.f_4)
		{
			__LIB_6__.func_986(Local_56.f_5, "AHT_TGT_GOLD", -1, 109, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
		}
		else if (Local_56.f_6 >= Local_56.f_3)
		{
			__LIB_6__.func_986(Local_56.f_4, "AHT_TGT_SILVER", -1, 108, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
		}
		else
		{
			__LIB_6__.func_986(Local_56.f_3, "AHT_TGT_BRONZE", -1, 107, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
		}
		__LIB_6__.func_986(Local_56.f_6, "AHT_SCRE_UPPR", -1, 1, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
		__LIB_6__.func_986(Local_56.f_7, "AHT_MONY_UPPR", -1, 1, 4, 0, "HUD_CASH" /* GXT: $~1~ */, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	if (iLocal_92)
	{
		iLocal_91 = 0;
		iLocal_92 = 0;
	}
}

void func_746(bool bParam0, float fParam1)//Position - 0x7F01B
{
	var uVar0;
	float fVar1;
	struct<3> Var2;
	float fVar3;
	if (iLocal_164 == -1)
	{
		HUD::GET_HUD_COLOUR(18, &iLocal_164, &iLocal_165, &iLocal_166, &uVar0);
		HUD::GET_HUD_COLOUR(18, &iLocal_170, &iLocal_171, &iLocal_172, &uVar0);
		HUD::GET_HUD_COLOUR(6, &iLocal_167, &iLocal_168, &iLocal_169, &uVar0);
	}
	fVar1 = 0f;
	Var2 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
	if (!bParam0)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			Local_58 = { MISC::GET_WIND_DIRECTION() };
			fLocal_57 = MISC::GET_HEADING_FROM_VECTOR_2D(Local_58.f_0, Local_58.f_1);
			fVar1 = (Var2.f_2 - fLocal_57);
		}
	}
	else
	{
		fLocal_57 = fParam1;
		fVar1 = (Var2.f_2 - fParam1);
	}
	while (fLocal_57 < 0f)
	{
		fLocal_57 = (fLocal_57 + 360f);
	}
	while (fVar1 < 0f)
	{
		fVar1 = (fVar1 + 360f);
	}
	fVar3 = MISC::GET_WIND_SPEED();
	if (func_748())
	{
		if (iLocal_164 < iLocal_167)
		{
			iLocal_164++;
		}
		else if (iLocal_164 > iLocal_167)
		{
			iLocal_164 = (iLocal_164 - 1);
		}
		if (iLocal_166 < iLocal_169)
		{
			iLocal_166++;
		}
		else if (iLocal_166 > iLocal_169)
		{
			iLocal_166 = (iLocal_166 - 1);
		}
		if (iLocal_165 < iLocal_168)
		{
			iLocal_165++;
		}
		else if (iLocal_165 > iLocal_168)
		{
			iLocal_165 = (iLocal_165 - 1);
		}
	}
	else
	{
		if (iLocal_164 < iLocal_170)
		{
			iLocal_164++;
		}
		else if (iLocal_164 > iLocal_170)
		{
			iLocal_164 = (iLocal_164 - 1);
		}
		if (iLocal_166 < iLocal_172)
		{
			iLocal_166++;
		}
		else if (iLocal_166 > iLocal_172)
		{
			iLocal_166 = (iLocal_166 - 1);
		}
		if (iLocal_165 < iLocal_171)
		{
			iLocal_165++;
		}
		else if (iLocal_165 > iLocal_171)
		{
			iLocal_165 = (iLocal_165 - 1);
		}
	}
	__LIB_34__.func_811("AHT_WIND_UPPR" /* GXT: ~1~ MPH */, SYSTEM::ROUND(fVar3), fVar1, iLocal_164, iLocal_165, iLocal_166, 6);
}

int func_748()//Position - 0x7F294
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (func_680(iVar0) && !Local_53[iVar0 /*36*/].f_9)
		{
			Var1 = { __LIB_0__.func_79(Local_53[iVar0 /*36*/].f_20 + Vector(45f, 0f, 0f) - Local_53[iVar0 /*36*/].f_17 + Vector(-45f, 0f, 0f)) };
			Var2 = { Local_53[iVar0 /*36*/].f_17 + Vector(45f, 0f, 0f) };
			Var3 = { Local_53[iVar0 /*36*/].f_20 + Vector(-45f, 0f, 0f) + Var1 * Vector(45f, 45f, 45f) };
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var2, Var3, (10f + 20f), false, false, 0))
			{
				if (bLocal_59)
				{
					if (!Local_56.f_667)
					{
						if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
						{
							__LIB_0__.func_151("AHT_DOWNWIND", -1);
							Local_56.f_667 = 1;
						}
					}
				}
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_750(int iParam0)//Position - 0x7F38D
{
	float fVar0;
	struct<3> Var1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	int iVar5;
	int iVar6;
	int iVar7;
	float fVar8;
	struct<3> Var9;
	if (Local_53[iParam0 /*36*/].f_9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_53[iParam0 /*36*/]) && ENTITY::IS_ENTITY_DEAD(Local_53[iParam0 /*36*/], false))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_53[iParam0 /*36*/], PLAYER::PLAYER_PED_ID(), true))
			{
				iLocal_86 = 1;
			}
		}
	}
	else
	{
		func_768(iParam0);
		func_767(iParam0);
		func_765(&(Local_53[iParam0 /*36*/]), iParam0);
		if (bLocal_59)
		{
			fVar0 = 9999.9f;
			if (ENTITY::DOES_ENTITY_EXIST(Local_53[iParam0 /*36*/]))
			{
				if (!PED::IS_PED_INJURED(Local_53[iParam0 /*36*/]))
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						Var1 = { ENTITY::GET_ENTITY_COORDS(Local_53[iParam0 /*36*/], true) };
						fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_67, Var1, true);
						if (fVar0 > 250f)
						{
							if (!CAM::IS_SPHERE_VISIBLE(Var1, 2f) || CAM::IS_SCREEN_FADED_OUT())
							{
								Local_53[iParam0 /*36*/].f_16 = 16;
							}
						}
					}
				}
			}
		}
	}
	if (Local_53[iParam0 /*36*/].f_29)
	{
		Local_53[iParam0 /*36*/].f_16 = Local_53[Local_53[iParam0 /*36*/].f_30 /*36*/].f_16;
		return;
	}
	switch (Local_53[iParam0 /*36*/].f_16)
	{
		case 0:
			break;
		case 1:
			if (bLocal_59)
			{
				if (iLocal_73 < 8 && !iLocal_69)
				{
					if (!Local_53[iParam0 /*36*/].f_35)
					{
						Local_53[iParam0 /*36*/].f_16 = 2;
					}
					else if (MISC::GET_GAME_TIMER() > Local_53[iParam0 /*36*/].f_34)
					{
						Local_53[iParam0 /*36*/].f_16 = 2;
					}
				}
			}
			break;
		case 2:
			if (func_760(iParam0, 8, 1, 1))
			{
				if (bLocal_59 && !__LIB_29__.func_690(Local_53[iParam0 /*36*/]))
				{
					if (!func_759())
					{
						if (MISC::GET_RANDOM_INT_IN_RANGE(0, 100) < 100)
						{
							Local_53[iParam0 /*36*/].f_16 = 3;
							func_756(iParam0);
						}
					}
				}
			}
			break;
		case 3:
			if (!Local_53[iParam0 /*36*/].f_9)
			{
				iVar2 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) % 3);
				TASK::OPEN_SEQUENCE_TASK(&iVar3);
				TASK::TASK_PLAY_ANIM(0, "creatures@deer@amb@world_deer_grazing@enter", "enter", 8f, -8f, -1, 0, 0f, false, false, false);
				if (iVar2 == 0)
				{
					TASK::TASK_PLAY_ANIM(0, "creatures@deer@amb@world_deer_grazing@idle_a", "idle_a", 8f, -8f, -1, 1, 0f, false, false, false);
				}
				else if (iVar2 == 1)
				{
					TASK::TASK_PLAY_ANIM(0, "creatures@deer@amb@world_deer_grazing@idle_a", "idle_b", 8f, -8f, -1, 1, 0f, false, false, false);
				}
				else
				{
					TASK::TASK_PLAY_ANIM(0, "creatures@deer@amb@world_deer_grazing@idle_a", "idle_c", 8f, -8f, -1, 1, 0f, false, false, false);
				}
				TASK::CLOSE_SEQUENCE_TASK(iVar3);
				TASK::TASK_PERFORM_SEQUENCE(Local_53[iParam0 /*36*/], iVar3);
				TASK::CLEAR_SEQUENCE_TASK(&iVar3);
				Local_53[iParam0 /*36*/].f_23 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(15000, 25000));
				Local_53[iParam0 /*36*/].f_16 = 4;
			}
			else
			{
				Local_53[iParam0 /*36*/].f_16 = 14;
			}
			break;
		case 4:
			if (func_680(iParam0))
			{
				if (!Local_53[iParam0 /*36*/].f_9)
				{
					Var4 = { ENTITY::GET_ENTITY_COORDS(Local_53[iParam0 /*36*/], true) };
					if ((MISC::GET_GAME_TIMER() > Local_53[iParam0 /*36*/].f_23 && __LIB_34__.func_807(Var4)) && SYSTEM::VDIST2(Var4, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < 10000f)
					{
						TASK::OPEN_SEQUENCE_TASK(&iVar5);
						if (TASK::GET_SCRIPT_TASK_STATUS(Local_53[iParam0 /*36*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 1)
						{
							TASK::TASK_PLAY_ANIM(0, "creatures@deer@amb@world_deer_grazing@exit", "exit", 4f, -8f, -1, 0, 0f, false, false, false);
						}
						TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 4200, 0, 2);
						TASK::CLOSE_SEQUENCE_TASK(iVar5);
						TASK::TASK_PERFORM_SEQUENCE(Local_53[iParam0 /*36*/], iVar5);
						TASK::CLEAR_SEQUENCE_TASK(&iVar5);
						Local_53[iParam0 /*36*/].f_23 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(1500, 3000));
						Local_53[iParam0 /*36*/].f_16 = 5;
					}
				}
				else
				{
					Local_53[iParam0 /*36*/].f_16 = 14;
				}
			}
			else
			{
				AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "ELK_PAIN_MASTER", Local_53[iParam0 /*36*/], 0, false, 0);
				Local_53[iParam0 /*36*/].f_16 = 16;
			}
			break;
		case 5:
			if (func_680(iParam0))
			{
				if (!Local_53[iParam0 /*36*/].f_9)
				{
					if (MISC::GET_GAME_TIMER() > Local_53[iParam0 /*36*/].f_23)
					{
						Local_53[iParam0 /*36*/].f_16 = 6;
					}
				}
				else
				{
					Local_53[iParam0 /*36*/].f_16 = 14;
				}
			}
			else
			{
				AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "ELK_PAIN_MASTER", Local_53[iParam0 /*36*/], 0, false, 0);
				Local_53[iParam0 /*36*/].f_16 = 16;
			}
			break;
		case 6:
			if (func_680(iParam0))
			{
				if (!Local_53[iParam0 /*36*/].f_9)
				{
					iLocal_75 = MISC::GET_RANDOM_INT_IN_RANGE(0, 58);
					if (func_754(iParam0, iLocal_75))
					{
						Local_53[iParam0 /*36*/].f_27 = iLocal_75;
					}
					else
					{
						Local_53[iParam0 /*36*/].f_27 = func_753(iParam0);
					}
					Local_55[Local_53[iParam0 /*36*/].f_25 /*5*/].f_3 = 0;
					if (bLocal_59)
					{
						Local_55[Local_53[iParam0 /*36*/].f_27 /*5*/].f_3 = 1;
					}
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_53[iParam0 /*36*/], Local_55[Local_53[iParam0 /*36*/].f_27 /*5*/], 1f, -1, 0.25f, 0, 40000f);
					Local_53[iParam0 /*36*/].f_26 = Local_53[iParam0 /*36*/].f_25;
					Local_53[iParam0 /*36*/].f_16 = 7;
				}
				else
				{
					Local_53[iParam0 /*36*/].f_16 = 14;
				}
			}
			else
			{
				AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "ELK_PAIN_MASTER", Local_53[iParam0 /*36*/], 0, false, 0);
				Local_53[iParam0 /*36*/].f_16 = 16;
			}
			break;
		case 7:
			if (func_680(iParam0))
			{
				if (!Local_53[iParam0 /*36*/].f_9)
				{
					if (ENTITY::IS_ENTITY_AT_COORD(Local_53[iParam0 /*36*/], Local_55[Local_53[iParam0 /*36*/].f_27 /*5*/], 3f, 3f, 3f, false, false, 0))
					{
						Local_53[iParam0 /*36*/].f_25 = Local_53[iParam0 /*36*/].f_27;
						TASK::CLEAR_PED_TASKS(Local_53[iParam0 /*36*/]);
						Local_53[iParam0 /*36*/].f_23 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(1500, 3000));
						Local_53[iParam0 /*36*/].f_16 = 8;
					}
				}
				else
				{
					Local_53[iParam0 /*36*/].f_16 = 14;
				}
			}
			else
			{
				AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "ELK_PAIN_MASTER", Local_53[iParam0 /*36*/], 0, false, 0);
				Local_53[iParam0 /*36*/].f_16 = 16;
			}
			break;
		case 9:
			if (func_680(iParam0))
			{
				if (!Local_53[iParam0 /*36*/].f_9)
				{
					if (ENTITY::IS_ENTITY_AT_COORD(Local_53[iParam0 /*36*/], Local_55[Local_53[iParam0 /*36*/].f_27 /*5*/], 3f, 3f, 3f, false, false, 0))
					{
						Local_53[iParam0 /*36*/].f_25 = Local_53[iParam0 /*36*/].f_27;
						TASK::CLEAR_PED_TASKS(Local_53[iParam0 /*36*/]);
						Local_53[iParam0 /*36*/].f_23 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(1500, 3000));
						Local_53[iParam0 /*36*/].f_16 = 10;
					}
				}
				else
				{
					Local_53[iParam0 /*36*/].f_16 = 14;
				}
			}
			else
			{
				AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "ELK_PAIN_MASTER", Local_53[iParam0 /*36*/], 0, false, 0);
				Local_53[iParam0 /*36*/].f_16 = 16;
			}
			break;
		case 8:
			if (func_680(iParam0))
			{
				if (!Local_53[iParam0 /*36*/].f_9)
				{
					if (MISC::GET_GAME_TIMER() > Local_53[iParam0 /*36*/].f_23)
					{
						Local_53[iParam0 /*36*/].f_16 = 3;
					}
				}
				else
				{
					Local_53[iParam0 /*36*/].f_16 = 14;
				}
			}
			else
			{
				AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "ELK_PAIN_MASTER", Local_53[iParam0 /*36*/], 0, false, 0);
				Local_53[iParam0 /*36*/].f_16 = 16;
			}
			break;
		case 14:
			if (iLocal_69)
			{
				__LIB_0__.func_523(&(Local_53[iParam0 /*36*/].f_1));
			}
			if (func_680(iParam0))
			{
				__LIB_41__.func_382(&(Local_53[iParam0 /*36*/]));
				TASK::CLEAR_PED_TASKS(Local_53[iParam0 /*36*/]);
				TASK::TASK_SMART_FLEE_PED(Local_53[iParam0 /*36*/], PLAYER::PLAYER_PED_ID(), 500f, -1, false, false);
				PED::SET_PED_KEEP_TASK(Local_53[iParam0 /*36*/], true);
				Local_53[iParam0 /*36*/].f_16 = 15;
			}
			else
			{
				AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "ELK_PAIN_MASTER", Local_53[iParam0 /*36*/], 0, false, 0);
				Local_53[iParam0 /*36*/].f_16 = 16;
			}
			break;
		case 10:
			if (func_680(iParam0))
			{
				if (!Local_53[iParam0 /*36*/].f_9)
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(Local_53[iParam0 /*36*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 7 || TASK::GET_SCRIPT_TASK_STATUS(Local_53[iParam0 /*36*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1)
					{
						TASK::OPEN_SEQUENCE_TASK(&iVar6);
						TASK::TASK_PLAY_ANIM(0, "creatures@deer@amb@world_deer_grazing@enter", "enter", 8f, -8f, -1, 0, 0f, false, false, false);
						TASK::TASK_PLAY_ANIM(0, "creatures@deer@amb@world_deer_grazing@base", "base", 8f, -8f, -1, 0, 0f, false, false, false);
						if (__LIB_0__.func_502())
						{
							TASK::TASK_PLAY_ANIM(0, "creatures@deer@amb@world_deer_grazing@idle_a", "idle_b", 8f, -8f, -1, 0, 0f, false, false, false);
							TASK::TASK_PLAY_ANIM(0, "creatures@deer@amb@world_deer_grazing@base", "base", 8f, -8f, -1, 0, 0f, false, false, false);
						}
						if (__LIB_0__.func_502())
						{
							TASK::TASK_PLAY_ANIM(0, "creatures@deer@amb@world_deer_grazing@idle_a", "idle_a", 8f, -8f, -1, 0, 0f, false, false, false);
						}
						else
						{
							TASK::TASK_PLAY_ANIM(0, "creatures@deer@amb@world_deer_grazing@idle_a", "idle_c", 8f, -8f, -1, 0, 0f, false, false, false);
						}
						TASK::TASK_PLAY_ANIM(0, "creatures@deer@amb@world_deer_grazing@base", "base", 8f, -8f, -1, 0, 0f, false, false, false);
						TASK::TASK_PLAY_ANIM(0, "creatures@deer@amb@world_deer_grazing@exit", "exit", 8f, -4f, -1, 0, 0f, false, false, false);
						TASK::CLOSE_SEQUENCE_TASK(iVar6);
						TASK::TASK_PERFORM_SEQUENCE(Local_53[iParam0 /*36*/], iVar6);
						TASK::CLEAR_SEQUENCE_TASK(&iVar6);
						Local_53[iParam0 /*36*/].f_24 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(10000, 15000));
						Local_53[iParam0 /*36*/].f_16 = 11;
					}
				}
				else
				{
					Local_53[iParam0 /*36*/].f_16 = 14;
				}
			}
			else
			{
				AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "ELK_PAIN_MASTER", Local_53[iParam0 /*36*/], 0, false, 0);
				Local_53[iParam0 /*36*/].f_16 = 16;
			}
			break;
		case 11:
			if (func_680(iParam0))
			{
				if (!Local_53[iParam0 /*36*/].f_9)
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(Local_53[iParam0 /*36*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 7 || TASK::GET_SCRIPT_TASK_STATUS(Local_53[iParam0 /*36*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1)
					{
						if (MISC::GET_GAME_TIMER() > Local_53[iParam0 /*36*/].f_24)
						{
							TASK::OPEN_SEQUENCE_TASK(&iVar7);
							TASK::TASK_PLAY_ANIM(0, "creatures@deer@amb@world_deer_grazing@enter", "enter", 16f, -8f, -1, 0, 0f, false, false, false);
							TASK::TASK_PLAY_ANIM(0, "creatures@deer@amb@world_deer_grazing@base", "base", 8f, -8f, -1, 0, 0f, false, false, false);
							if (__LIB_0__.func_502())
							{
								TASK::TASK_PLAY_ANIM(0, "creatures@deer@amb@world_deer_grazing@base", "base", 8f, -8f, -1, 0, 0f, false, false, false);
								TASK::TASK_PLAY_ANIM(0, "creatures@deer@amb@world_deer_grazing@idle_a", "idle_b", 8f, -8f, -1, 0, 0f, false, false, false);
							}
							TASK::TASK_PLAY_ANIM(0, "creatures@deer@amb@world_deer_grazing@exit", "exit", 8f, -4f, -1, 0, 0f, false, false, false);
							TASK::CLOSE_SEQUENCE_TASK(iVar7);
							TASK::TASK_PERFORM_SEQUENCE(Local_53[iParam0 /*36*/], iVar7);
							TASK::CLEAR_SEQUENCE_TASK(&iVar7);
							Local_53[iParam0 /*36*/].f_16 = 10;
						}
					}
				}
				else
				{
					Local_53[iParam0 /*36*/].f_16 = 14;
				}
			}
			else
			{
				AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "ELK_PAIN_MASTER", Local_53[iParam0 /*36*/], 0, false, 0);
				Local_53[iParam0 /*36*/].f_16 = 16;
			}
			break;
		case 15:
			if (func_680(iParam0) && __LIB_1__.func_197(PLAYER::PLAYER_PED_ID()))
			{
				Var9 = { ENTITY::GET_ENTITY_COORDS(Local_53[iParam0 /*36*/], false) };
				fVar8 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Var9, true);
				if (fVar8 > 70f && !CAM::IS_SPHERE_VISIBLE(Var9, 5f))
				{
					Local_53[iParam0 /*36*/].f_16 = 16;
				}
			}
			else
			{
				AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "ELK_PAIN_MASTER", Local_53[iParam0 /*36*/], 0, false, 0);
				Local_53[iParam0 /*36*/].f_16 = 16;
			}
			break;
		case 16:
			__LIB_0__.func_523(&(Local_53[iParam0 /*36*/].f_1));
			Local_55[Local_53[iParam0 /*36*/].f_25 /*5*/].f_3 = 0;
			Local_55[Local_53[iParam0 /*36*/].f_27 /*5*/].f_3 = 0;
			Local_55[Local_53[iParam0 /*36*/].f_25 /*5*/].f_4 = (MISC::GET_GAME_TIMER() + 40000);
			Local_55[Local_53[iParam0 /*36*/].f_27 /*5*/].f_4 = (MISC::GET_GAME_TIMER() + 40000);
			if (ENTITY::DOES_ENTITY_EXIST(Local_53[iParam0 /*36*/]))
			{
				if (DECORATOR::DECOR_EXIST_ON(Local_53[iParam0 /*36*/], "doe_elk"))
				{
					iLocal_72 = (iLocal_72 - 1);
				}
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_53[iParam0 /*36*/]));
			}
			if (iLocal_80 == iParam0)
			{
				iLocal_80 = -1;
				iLocal_81 = 0;
			}
			iLocal_73 = (iLocal_73 - 1);
			Local_53[iParam0 /*36*/].f_34 = MISC::GET_GAME_TIMER() + 1000;
			Local_53[iParam0 /*36*/].f_35 = 1;
			Local_53[iParam0 /*36*/].f_29 = 0;
			Local_53[iParam0 /*36*/].f_28 = 0;
			func_47(iParam0, 0);
			Local_53[iParam0 /*36*/].f_13 = 0;
			Local_53[iParam0 /*36*/].f_30 = -1;
			Local_53[iParam0 /*36*/].f_6 = 0;
			Local_53[iParam0 /*36*/].f_16 = 1;
			break;
	}
}

int func_753(int iParam0)//Position - 0x7FFCC
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	fVar0 = 0f;
	fVar1 = 10000f;
	iVar2 = 0;
	iVar3 = 0;
	iVar2 = 0;
	while (iVar2 < 58)
	{
		if ((iVar2 != Local_53[iParam0 /*36*/].f_25 && iVar2 != Local_53[iParam0 /*36*/].f_26) && !Local_55[iVar2 /*5*/].f_3)
		{
			fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_55[Local_53[iParam0 /*36*/].f_25 /*5*/], Local_55[iVar2 /*5*/], false);
			if (fVar0 < fVar1)
			{
				fVar1 = fVar0;
				iVar3 = iVar2;
			}
		}
		iVar2++;
	}
	return iVar3;
}

int func_754(int iParam0, int iParam1)//Position - 0x80057
{
	if (bLocal_59 == 0)
	{
		return 0;
	}
	if (((iParam1 == Local_53[iParam0 /*36*/].f_25 || iParam1 == Local_53[iParam0 /*36*/].f_26) || Local_55[iParam1 /*5*/].f_3) || __LIB_0__.func_529(Local_53[iParam0 /*36*/], Local_55[iParam1 /*5*/], 1) > 50f)
	{
		return 0;
	}
	return 1;
}

void func_756(int iParam0)//Position - 0x800F7
{
	int iVar0;
	int iVar1;
	iVar0 = 1;
	iVar1 = 3;
	while (iVar1 < 8 && iVar0 < 3)
	{
		if (!func_680(iVar1))
		{
			if (MISC::GET_RANDOM_INT_IN_RANGE(0, 100) < 50)
			{
				func_757(iVar1, iParam0);
				iVar0++;
				Local_53[iParam0 /*36*/].f_31++;
			}
		}
		iVar1++;
	}
}

int func_757(int iParam0, int iParam1)//Position - 0x80156
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	int iVar3;
	if (__LIB_1__.func_197(Local_53[iParam1 /*36*/]))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(Local_53[iParam1 /*36*/], true) };
		fVar2 = ENTITY::GET_ENTITY_HEADING(Local_53[iParam1 /*36*/]);
		switch (iParam0)
		{
			case 3:
				Var0 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-3f, -2f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-2f, -2f), 0f };
				break;
			case 4:
				Var0 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(3f, 2f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-2f, -2f), 0f };
				break;
			case 5:
				Var0 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-2f, 2f), MISC::GET_RANDOM_FLOAT_IN_RANGE(2f, 3f), 0f };
				break;
			case 6:
				Var0 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-2f, 2f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-3f, -2f), 0f };
				break;
		}
		Local_53[iParam0 /*36*/].f_17 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var1, fVar2, Var0) };
		__LIB_29__.func_681(&(Local_53[iParam0 /*36*/].f_17), 0);
		Local_53[iParam0 /*36*/].f_32 = (fVar2 + MISC::GET_RANDOM_FLOAT_IN_RANGE(-30f, 30f));
		Local_53[iParam0 /*36*/].f_25 = Local_53[iParam1 /*36*/].f_25;
		func_47(iParam0, 0);
		Local_53[iParam0 /*36*/].f_29 = 1;
		Local_53[iParam0 /*36*/].f_30 = iParam1;
		Local_53[iParam1 /*36*/].f_28 = 1;
		while (Local_53[iParam0 /*36*/].f_32 < -180f)
		{
			Local_53[iParam0 /*36*/].f_32 = (Local_53[iParam0 /*36*/].f_32 + 360f);
		}
		while (Local_53[iParam0 /*36*/].f_32 > 180f)
		{
			Local_53[iParam0 /*36*/].f_32 = (Local_53[iParam0 /*36*/].f_32 - 360f);
		}
		iVar3 = 0;
		if (Local_53[iParam1 /*36*/].f_31 != 0)
		{
			iVar3 = 1;
		}
		if (func_605(&(Local_53[iParam0 /*36*/]), Local_53[iParam0 /*36*/].f_17, Local_53[iParam0 /*36*/].f_32, Local_53[iParam0 /*36*/].f_15, 0, iVar3))
		{
			func_758(&(Local_53[iParam0 /*36*/]), 4, 1);
			TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(Local_53[iParam0 /*36*/], Local_53[iParam1 /*36*/], Var0, 1f, -1, 0.1f, true);
			return 1;
		}
		return 0;
	}
	return 0;
}

void func_758(var uParam0, int iParam1, int iParam2)//Position - 0x80350
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 0, false);
		PED::SET_PED_FLEE_ATTRIBUTES(*uParam0, 1, false);
		ENTITY::SET_ENTITY_HEALTH(*uParam0, 100, 0);
		PED::SET_PED_BLOCKS_PATHING_WHEN_DEAD(*uParam0, true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(*uParam0, iLocal_52);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_52, joaat("PLAYER"));
		PED::SET_PED_SEEING_RANGE(*uParam0, 20f);
		PED::SET_PED_HEARING_RANGE(*uParam0, 10f);
		ENTITY::SET_ENTITY_LOD_DIST(*uParam0, 1500);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*uParam0, true, 1);
		PED::SET_PED_LOD_MULTIPLIER(*uParam0, 5f);
		PED::SET_PED_CAN_BE_TARGETTED(*uParam0, false);
		uParam0->f_31 = 0;
		uParam0->f_8 = 1;
		uParam0->f_12 = 0;
		uParam0->f_11 = iParam2;
		uParam0->f_9 = 0;
		if (bLocal_59 && !uParam0->f_29)
		{
			Local_55[uParam0->f_25 /*5*/].f_3 = 1;
			Local_55[uParam0->f_25 /*5*/].f_4 = (MISC::GET_GAME_TIMER() + 40000);
		}
		iLocal_86 = 0;
		iLocal_73++;
		uParam0->f_16 = iParam1;
	}
}

int func_759()//Position - 0x8043A
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (func_680(iVar0))
		{
			if (Local_53[iVar0 /*36*/].f_29)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_760(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x8046E
{
	int iVar0;
	struct<3> Var1;
	if (iParam2 && bLocal_59)
	{
		iVar0 = func_763();
		if (iVar0 > 58)
		{
			return 0;
		}
		else
		{
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_55[iVar0 /*5*/]) > 22500f)
			{
				return 0;
			}
			if (MISC::GET_GAME_TIMER() < Local_55[iVar0 /*5*/].f_4)
			{
				return 0;
			}
			Var1 = { __LIB_22__.func_673(Local_55[iVar0 /*5*/], 5f) };
			MISC::GET_GROUND_Z_FOR_3D_COORD(Var1 + Vector(0f, 0.5f, 0f), &(Var1.f_2), false, false);
			Local_53[iParam0 /*36*/].f_17 = { Var1 };
			Local_53[iParam0 /*36*/].f_25 = iVar0;
			func_47(iParam0, 0);
			if (bLocal_59)
			{
				Local_55[iVar0 /*5*/].f_3 = 1;
			}
		}
	}
	Local_53[iParam0 /*36*/].f_32 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 359.9f);
	if (func_605(&(Local_53[iParam0 /*36*/]), Local_53[iParam0 /*36*/].f_17, Local_53[iParam0 /*36*/].f_32, Local_53[iParam0 /*36*/].f_15, 0, 0))
	{
		func_758(&(Local_53[iParam0 /*36*/]), iParam1, iParam3);
		return 1;
	}
	return 0;
}

int func_763()//Position - 0x805DD
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	float fVar5;
	struct<3> Var6;
	float fVar7;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 58);
	if (Local_55[iVar0 /*5*/].f_3)
	{
		return 59;
	}
	if (!__LIB_1__.func_197(PLAYER::PLAYER_PED_ID()))
	{
		return 59;
	}
	if (CAM::IS_SPHERE_VISIBLE(Local_55[iVar0 /*5*/], 4f))
	{
		return 59;
	}
	Var1 = { CAM::GET_GAMEPLAY_CAM_COORD() };
	Var2 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
	Var3 = { __LIB_0__.func_298(0f, 1f, 0f, Var2.f_2) };
	Var4 = { Local_55[iVar0 /*5*/] - Var1 };
	fVar5 = __LIB_0__.func_156(Var3, Var4);
	if (fVar5 > 0f)
	{
		return 59;
	}
	Var6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	fVar7 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var6, Local_55[iVar0 /*5*/], true);
	if (fVar7 > 30f || CAM::IS_SCREEN_FADED_OUT())
	{
		return iVar0;
	}
	return 59;
}

void func_765(var uParam0, int iParam1)//Position - 0x806F3
{
	struct<3> Var0;
	float fVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	struct<3> Var8;
	int iVar9;
	if (!func_680(iParam1))
	{
		if (HUD::DOES_BLIP_EXIST(uParam0->f_1))
		{
			HUD::REMOVE_BLIP(&(uParam0->f_1));
		}
		return;
	}
	if (uParam0->f_9)
	{
		return;
	}
	Var0 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true) };
	fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_67, Var0, true);
	bVar2 = ENTITY::IS_ENTITY_ON_SCREEN(*uParam0);
	if (!uParam0->f_12)
	{
		bVar3 = true;
		if (((bVar2 && uParam0->f_2 < MISC::GET_GAME_TIMER()) && fVar1 < fLocal_60) && (iLocal_80 == iParam1 || iLocal_80 == -1))
		{
			iLocal_80 = iParam1;
			iVar4 = func_766(uParam0, Var0, fVar1);
			if (iVar4 == 1)
			{
				bVar3 = false;
			}
		}
		if (bVar2 && !bVar3)
		{
			HUD::GET_HUD_SCREEN_POSITION_FROM_WORLD_POSITION(Var0, &fVar5, &fVar6);
			if ((((fVar5 > 0.3f && fVar5 < 0.7f) && fVar6 > 0.3f) && fVar6 < 0.7f) && fVar1 < fLocal_60)
			{
				__LIB_0__.func_523(&(uParam0->f_1));
				__LIB_39__.func_378(&(uParam0->f_1), *uParam0, 1, 1065353216);
				HUD::SET_BLIP_SHOW_CONE(uParam0->f_1, true, 11);
				uParam0->f_12 = 1;
				func_593("HUNTING_SPOT_ANIMAL", 0);
				return;
			}
		}
	}
	if (!HUD::DOES_BLIP_EXIST(uParam0->f_1))
	{
		if (((iLocal_66 && MISC::GET_GAME_TIMER() > iLocal_159) && !uParam0->f_10) || uParam0->f_10)
		{
			if (uParam0->f_10)
			{
				fVar7 = (fVar1 * 0.5f);
				Var8 = { Var0 };
				uParam0->f_1 = HUD::ADD_BLIP_FOR_RADIUS(Var8, fVar7);
				HUD::SET_BLIP_ALPHA(uParam0->f_1, 100);
				HUD::SET_BLIP_COLOUR(uParam0->f_1, 1);
				HUD::SHOW_HEIGHT_ON_BLIP(uParam0->f_1, false);
				uParam0->f_5 = MISC::GET_GAME_TIMER() + 4000;
			}
			if ((uParam0->f_8 && MISC::GET_GAME_TIMER() > iLocal_159) || iLocal_66)
			{
				if (!uParam0->f_10)
				{
					if (uParam0->f_6 == 0)
					{
						uParam0->f_6 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(0, 11) * 100);
					}
					else if (uParam0->f_6 < MISC::GET_GAME_TIMER())
					{
						uParam0->f_6 = 0;
						AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "ELK_BREY_MASTER", *uParam0, 0, false, 0);
						uParam0->f_10 = 1;
						iLocal_77 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(30000, 60000));
					}
				}
			}
		}
	}
	else if (HUD::DOES_BLIP_EXIST(uParam0->f_1))
	{
		if ((iLocal_66 && MISC::GET_GAME_TIMER() > iLocal_159) && !uParam0->f_10)
		{
			AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "ELK_BREY_MASTER", *uParam0, 0, false, 0);
			uParam0->f_10 = 1;
			iLocal_77 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(30000, 60000));
			return;
		}
		if ((MISC::GET_GAME_TIMER() > uParam0->f_5 && fVar1 > 35f) && uParam0->f_11)
		{
			if (bVar2)
			{
				if ((uParam0->f_2 < MISC::GET_GAME_TIMER() && (iLocal_80 == iParam1 || iLocal_80 == -1)) && fVar1 < fLocal_60)
				{
					iLocal_80 = iParam1;
					iVar9 = func_766(uParam0, Var0, fVar1);
					if (iVar9 == 1)
					{
						if (uParam0->f_12)
						{
							HUD::SET_BLIP_ALPHA(uParam0->f_1, 255);
						}
						else
						{
							HUD::SET_BLIP_ALPHA(uParam0->f_1, 100);
						}
						uParam0->f_5 = MISC::GET_GAME_TIMER() + 10000;
						return;
					}
					else if (iVar9 == -1)
					{
					}
					else if (iVar9 == 0)
					{
					}
				}
			}
			uParam0->f_3 = HUD::GET_BLIP_ALPHA(uParam0->f_1);
			if (uParam0->f_3 > 0)
			{
				if (MISC::GET_RANDOM_INT_IN_RANGE(0, 1000) > 666)
				{
					uParam0->f_3 = (uParam0->f_3 - 1);
					HUD::SET_BLIP_ALPHA(uParam0->f_1, uParam0->f_3);
				}
			}
			else
			{
				HUD::SET_BLIP_SHOW_CONE(uParam0->f_1, false, 11);
				__LIB_0__.func_523(&(uParam0->f_1));
				uParam0->f_12 = 0;
				uParam0->f_10 = 0;
				iLocal_66 = 0;
			}
		}
	}
}

int func_766(var uParam0, struct<3> Param1, float fParam2)//Position - 0x80A8A
{
	struct<3> Var0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	if (iLocal_81 == 0)
	{
		Var0 = { Local_67 + Vector(0.75f, 0f, 0f) };
		iLocal_81 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Var0, Param1, 1, 0, 7);
	}
	else
	{
		iVar5 = SHAPETEST::GET_SHAPE_TEST_RESULT(iLocal_81, &iVar1, &uVar2, &uVar3, &uVar4);
		if (iVar5 == 2)
		{
			if (iVar1 == 0)
			{
				uParam0->f_2 = (MISC::GET_GAME_TIMER() + __LIB_29__.func_688(fParam2));
				iLocal_80 = -1;
				iLocal_81 = 0;
				return 1;
			}
			else
			{
				uParam0->f_2 = (MISC::GET_GAME_TIMER() + __LIB_29__.func_688(fParam2));
				iLocal_80 = -1;
				iLocal_81 = 0;
				return -1;
			}
		}
		else if (iVar5 == 0)
		{
			iLocal_80 = -1;
			iLocal_81 = 0;
			return -1;
		}
	}
	return 0;
}

void func_767(int iParam0)//Position - 0x80B2B
{
	if (!func_680(iParam0))
	{
		return;
	}
	if (!Local_53[iParam0 /*36*/].f_8)
	{
		return;
	}
	if (Local_53[iParam0 /*36*/].f_9)
	{
		return;
	}
	if ((iLocal_66 && iLocal_160 + 4000 + 5000 < MISC::GET_GAME_TIMER()) && Local_53[iParam0 /*36*/].f_4 < MISC::GET_GAME_TIMER())
	{
		iLocal_66 = 0;
		Local_53[iParam0 /*36*/].f_4 = MISC::GET_GAME_TIMER();
		Local_53[iParam0 /*36*/].f_10 = 1;
		AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "ELK_BREY_MASTER", Local_53[iParam0 /*36*/], 0, false, 0);
		iLocal_79 = -1;
		iLocal_77 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(30000, 60000));
	}
	if (iLocal_77 != -1 && iLocal_77 < MISC::GET_GAME_TIMER())
	{
		Local_53[iParam0 /*36*/].f_10 = 1;
		AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "ELK_BREY_MASTER", Local_53[iParam0 /*36*/], 0, false, 0);
		iLocal_78 = MISC::GET_GAME_TIMER() + 4000;
		iLocal_79 = iParam0;
		iLocal_77 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(30000, 60000));
	}
	else if ((iLocal_79 != -1 && iLocal_78 < MISC::GET_GAME_TIMER()) && iLocal_78 != -1)
	{
		if (iParam0 != iLocal_79)
		{
			Local_53[iParam0 /*36*/].f_4 = MISC::GET_GAME_TIMER();
			Local_53[iParam0 /*36*/].f_10 = 1;
			AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "ELK_BREY_MASTER", Local_53[iParam0 /*36*/], 0, false, 0);
			iLocal_78 = MISC::GET_GAME_TIMER() + 4000;
		}
		iLocal_76 = 1;
	}
}

void func_768(int iParam0)//Position - 0x80C7E
{
	bool bVar0;
	bVar0 = Local_53[iParam0 /*36*/].f_9;
	if (func_680(iParam0) && !Local_53[iParam0 /*36*/].f_9)
	{
		Local_53[iParam0 /*36*/].f_17 = { ENTITY::GET_ENTITY_COORDS(Local_53[iParam0 /*36*/], false) };
		Local_53[iParam0 /*36*/].f_33 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_53[iParam0 /*36*/].f_17, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), false);
		Local_53[iParam0 /*36*/].f_20 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Local_53[iParam0 /*36*/].f_17, fLocal_57, -Local_74) };
		if (PED::CAN_PED_SEE_HATED_PED(Local_53[iParam0 /*36*/], PLAYER::PLAYER_PED_ID()))
		{
			if (bLocal_59)
			{
				__LIB_0__.func_151("AHT_CROUCH", -1);
			}
			else
			{
				__LIB_0__.func_151("HT_CROUCH", -1);
				func_771(iParam0);
				Local_53[iParam0 /*36*/].f_14 = 1;
			}
			func_47(iParam0, 1);
		}
		if (Local_53[iParam0 /*36*/].f_33 < 8.25f)
		{
			if (bLocal_59)
			{
				__LIB_0__.func_151("AHT_NOTICED", -1);
			}
			else
			{
				__LIB_0__.func_151("HT_HEARD", -1);
			}
			Local_53[iParam0 /*36*/].f_14 = 2;
			func_47(iParam0, 1);
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_53[iParam0 /*36*/].f_17 + Vector(-45f, 0f, 0f), Local_53[iParam0 /*36*/].f_20 + Vector(45f, 0f, 0f), 10f, false, false, 0))
		{
			if (bLocal_59)
			{
				__LIB_0__.func_151("AHT_SCENT", -1);
			}
			else
			{
				__LIB_0__.func_151("HT_SCENT", -1);
			}
			func_771(iParam0);
			Local_53[iParam0 /*36*/].f_14 = 3;
			func_47(iParam0, 1);
		}
		if (PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), Local_53[iParam0 /*36*/]))
		{
			if (bLocal_59)
			{
				__LIB_0__.func_151("AHT_HEARD", -1);
			}
			else
			{
				func_771(iParam0);
				__LIB_0__.func_151("HT_HEARD", -1);
				Local_53[iParam0 /*36*/].f_14 = 2;
			}
			func_47(iParam0, 1);
		}
		if (func_770(iParam0))
		{
			if (!bLocal_59)
			{
				func_771(iParam0);
				Local_53[iParam0 /*36*/].f_14 = 4;
			}
			func_47(iParam0, 1);
		}
		if (__LIB_36__.func_80(Local_53[iParam0 /*36*/], 1090519040, 1097859072))
		{
			if (!iLocal_90)
			{
				iLocal_89 = MISC::GET_GAME_TIMER() + 500;
				iLocal_90 = 1;
			}
			if (bLocal_59)
			{
				func_593("HUNTING_MISSED", 0);
				iLocal_88 = Local_56.f_6;
				func_47(iParam0, 1);
			}
			else
			{
				func_771(iParam0);
				func_47(iParam0, 1);
				Local_53[iParam0 /*36*/].f_14 = 5;
			}
		}
		if (iLocal_90)
		{
			if (MISC::GET_GAME_TIMER() > iLocal_89)
			{
				if (iLocal_88 == Local_56.f_6 && !iLocal_91)
				{
					if (bLocal_59)
					{
						__LIB_0__.func_151("AHT_MISS", -1);
					}
					else
					{
						__LIB_0__.func_151("HT_MISS", -1);
					}
				}
				iLocal_92 = 1;
				iLocal_90 = 0;
			}
		}
	}
	if (Local_53[iParam0 /*36*/].f_9 && !bVar0)
	{
		Local_56.f_32 = 0;
		if (Local_53[iParam0 /*36*/].f_29 || Local_53[iParam0 /*36*/].f_28)
		{
			func_769(iParam0);
		}
	}
}

void func_769(int iParam0)//Position - 0x80F39
{
	int iVar0;
	int iVar1;
	iVar0 = iParam0;
	if (Local_53[iParam0 /*36*/].f_29)
	{
		iVar0 = Local_53[iParam0 /*36*/].f_30;
	}
	func_47(iParam0, 1);
	Local_53[iParam0 /*36*/].f_28 = 0;
	Local_53[iParam0 /*36*/].f_29 = 0;
	Local_53[iParam0 /*36*/].f_30 = -1;
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (Local_53[iVar1 /*36*/].f_30 == iVar0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_53[iVar1 /*36*/]) && !ENTITY::IS_ENTITY_DEAD(Local_53[iVar1 /*36*/], false))
			{
				func_771(iVar1);
				Local_53[iVar1 /*36*/].f_14 = 4;
				func_47(iVar1, 1);
				Local_53[iVar1 /*36*/].f_28 = 0;
				Local_53[iVar1 /*36*/].f_29 = 0;
				Local_53[iVar1 /*36*/].f_30 = -1;
			}
		}
		iVar1++;
	}
}

int func_770(int iParam0)//Position - 0x80FEB
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (iVar0 != iParam0)
		{
			if (func_680(iVar0))
			{
				if (Local_53[iVar0 /*36*/].f_9)
				{
					if (__LIB_0__.func_76(Local_53[iParam0 /*36*/], Local_53[iVar0 /*36*/], 1) < 10f)
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

void func_771(int iParam0)//Position - 0x81043
{
	if (!bLocal_59)
	{
		if (__LIB_0__.func_121(Local_53[iParam0 /*36*/]))
		{
			ENTITY::SET_ENTITY_PROOFS(Local_53[iParam0 /*36*/], true, false, false, false, false, false, false, false);
			TASK::TASK_SMART_FLEE_PED(Local_53[iParam0 /*36*/], PLAYER::PLAYER_PED_ID(), 500f, -1, false, false);
			PED::SET_PED_KEEP_TASK(Local_53[iParam0 /*36*/], true);
		}
		func_47(iParam0, 1);
	}
}

void func_772(int iParam0)//Position - 0x81099
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(Local_53[iParam0 /*36*/]))
	{
		if (!func_680(iParam0))
		{
			iLocal_91 = 1;
			if (__LIB_0__.func_1("AHT_MISS"))
			{
				HUD::CLEAR_HELP(true);
			}
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_53[iParam0 /*36*/], PLAYER::PLAYER_PED_ID(), true))
			{
				if (WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(Local_53[iParam0 /*36*/], joaat("WEAPON_RUN_OVER_BY_CAR"), 0))
				{
					func_740(Local_53[iParam0 /*36*/], 13, joaat("WEAPON_RUN_OVER_BY_CAR"));
					if (!__LIB_29__.func_690(Local_53[iParam0 /*36*/]))
					{
						Local_56.f_1++;
						func_777();
					}
					if (__LIB_0__.func_121(Local_53[iParam0 /*36*/]))
					{
						ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_53[iParam0 /*36*/]);
					}
					return;
				}
				func_739(&Local_56, Local_53[iParam0 /*36*/]);
				func_776(Local_53[iParam0 /*36*/]);
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_53[iParam0 /*36*/]);
				func_593("HUNTING_KILL", 1);
				if (Local_53[iParam0 /*36*/].f_9)
				{
					if (bLocal_59)
					{
						if (!__LIB_29__.func_690(Local_53[iParam0 /*36*/]))
						{
							Local_56.f_1++;
							if (MISC::GET_GAME_TIMER() > iLocal_162 + 30000)
							{
								Local_56.f_34++;
							}
							Local_56.f_48 = MISC::GET_GAME_TIMER() + 1750;
							if (!WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, true))
							{
								iVar0 = 0;
							}
							if (Local_56.f_6 < 0)
							{
								Local_56.f_6 = 0;
							}
							func_777();
						}
						if (__LIB_29__.func_690(Local_53[iParam0 /*36*/]))
						{
							func_740(Local_53[iParam0 /*36*/], 7, iVar0);
						}
						else
						{
							func_740(Local_53[iParam0 /*36*/], 6, iVar0);
						}
					}
				}
				else
				{
					if (!iLocal_90)
					{
						iLocal_89 = MISC::GET_GAME_TIMER() + 500;
						iLocal_91 = 1;
						iLocal_90 = 1;
					}
					if (bLocal_59)
					{
						if (!__LIB_29__.func_690(Local_53[iParam0 /*36*/]))
						{
							if (bLocal_59)
							{
								func_775(iParam0);
							}
							Local_56.f_1++;
							Local_56.f_32++;
							if (MISC::GET_GAME_TIMER() > iLocal_162 + 30000)
							{
								Local_56.f_34++;
							}
							func_777();
						}
						Local_56.f_48 = MISC::GET_GAME_TIMER() + 1750;
						func_773(iParam0);
					}
					if (Local_56.f_6 > 0)
					{
					}
				}
			}
		}
	}
}

void func_773(int iParam0)//Position - 0x81291
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	PED::GET_PED_LAST_DAMAGE_BONE(Local_53[iParam0 /*36*/], &uVar0);
	iVar1 = uVar0;
	iVar3 = __LIB_29__.func_692(iVar1);
	switch (iVar3)
	{
		case 1:
			iVar2 = 1;
			break;
		case 2:
			iVar2 = 2;
			break;
		case 3:
			iVar2 = 0;
			break;
		case 7:
		case 4:
			iVar2 = 5;
			break;
		case 6:
			iVar2 = 4;
			break;
		case 5:
			iVar2 = 3;
			break;
		default:
			iVar2 = 3;
			break;
	}
	if (__LIB_29__.func_690(Local_53[iParam0 /*36*/]))
	{
		iVar2 = 7;
	}
	if (!WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar4, true))
	{
		iVar4 = 0;
	}
	func_740(Local_53[iParam0 /*36*/], iVar2, iVar4);
}

void func_775(int iParam0)//Position - 0x8149E
{
	var uVar0;
	int iVar1;
	int iVar2;
	PED::GET_PED_LAST_DAMAGE_BONE(Local_53[iParam0 /*36*/], &uVar0);
	iVar1 = uVar0;
	iVar2 = __LIB_29__.func_692(iVar1);
	Local_56.f_9[iVar2]++;
	if (iVar2 == 3)
	{
		Local_56.f_33++;
	}
	else
	{
		Local_56.f_33 = 0;
	}
	Local_56.f_48 = MISC::GET_GAME_TIMER() + 1750;
}

void func_776(int iParam0)//Position - 0x814FA
{
	struct<3> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && __LIB_1__.func_197(PLAYER::PLAYER_PED_ID()))
	{
		if (!bLocal_59)
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
			if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, Var0, 20f))
			{
				HUD::CLEAR_PRINTS();
				bLocal_68 = true;
				return;
			}
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), true))
			{
				if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iParam0, joaat("WEAPON_SNIPERRIFLE"), 0))
				{
					return;
				}
				if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iParam0, joaat("WEAPON_KNIFE"), 0))
				{
					return;
				}
				HUD::CLEAR_PRINTS();
				bLocal_68 = true;
			}
		}
		else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), true))
		{
		}
	}
}

void func_777()//Position - 0x81591
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_56.f_37)
	{
		if (Local_56.f_37[iVar0] == 0)
		{
			Local_56.f_37[iVar0] = MISC::GET_GAME_TIMER();
			return;
		}
		iVar0++;
	}
}

void func_778()//Position - 0x815CC
{
	int iVar0;
	if (!iLocal_65)
	{
		return;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (INTERIOR::GET_INTERIOR_FROM_ENTITY(iVar0) != 0)
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_USING(iVar0)))
	{
		return;
	}
	if (__LIB_0__.func_75())
	{
		return;
	}
	if ((((PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 234 /*INPUT_SCRIPT_PAD_LEFT*/) && !PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID())) && !PED::IS_PED_RAGDOLL(iVar0)) && !PED::IS_PED_RUNNING_RAGDOLL_TASK(iVar0)) || iLocal_161 != -1)
	{
		if (MISC::GET_GAME_TIMER() > iLocal_162)
		{
			if (iLocal_161 == -1)
			{
				iLocal_161 = MISC::GET_GAME_TIMER() + 250;
			}
			else if (MISC::GET_GAME_TIMER() > iLocal_161)
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) != 4)
				{
					TASK::TASK_PLAY_ANIM(iVar0, "facials@p_m_one@variations@elkcall", "mood_elkcal_1", 8f, -8f, -1, 32, 0f, false, false, false);
				}
				AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "PLAYER_CALLS_ELK_MASTER", iVar0, 0, false, 0);
				HUD::TRIGGER_SONAR_BLIP(ENTITY::GET_ENTITY_COORDS(iVar0, true), 30f, 11);
				iLocal_162 = MISC::GET_GAME_TIMER() + 2500;
				Local_56.f_34 = 0;
				Local_56.f_48 = MISC::GET_GAME_TIMER() + 1750;
				iLocal_161 = -1;
				iLocal_77 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(30000, 60000));
				if (!iLocal_66)
				{
					iLocal_159 = MISC::GET_GAME_TIMER() + 3500;
					iLocal_160 = MISC::GET_GAME_TIMER() + 4000;
					iLocal_66 = 1;
				}
			}
		}
	}
	if (MISC::GET_GAME_TIMER() < iLocal_160)
	{
		HUD::FORCE_SONAR_BLIPS_THIS_FRAME();
	}
}

void func_780(var uParam0)//Position - 0x8174A
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return;
	}
	if (!PED::IS_PED_INJURED(*uParam0))
	{
		return;
	}
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(*uParam0, false))
	{
	}
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(*uParam0, PLAYER::PLAYER_PED_ID(), true))
	{
		iLocal_91 = 1;
		if (__LIB_0__.func_1("AHT_MISS"))
		{
			HUD::CLEAR_HELP(true);
		}
		func_739(&Local_56, *uParam0);
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(*uParam0, joaat("WEAPON_RUN_OVER_BY_CAR"), 0))
		{
			Local_56.f_1++;
			func_781(uParam0, joaat("WEAPON_RUN_OVER_BY_CAR"));
			if (__LIB_0__.func_121(*uParam0))
			{
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(*uParam0);
			}
			return;
		}
		if (__LIB_0__.func_121(*uParam0))
		{
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(*uParam0);
		}
		if (!iLocal_90)
		{
			iLocal_89 = MISC::GET_GAME_TIMER() + 500;
			iLocal_91 = 1;
			iLocal_90 = 1;
		}
		Local_56.f_1++;
		if (uParam0->f_13 == 1)
		{
			Local_56.f_53++;
		}
		else if (uParam0->f_13 == 2)
		{
			Local_56.f_52++;
		}
		else if (uParam0->f_13 == 0)
		{
			Local_56.f_51++;
		}
		if (!WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, true))
		{
			iVar0 = 0;
		}
		func_781(uParam0, iVar0);
		func_593("HUNTING_KILL", 1);
		if (Local_56.f_6 > 0)
		{
		}
	}
}

void func_781(var uParam0, int iParam1)//Position - 0x818A3
{
	int iVar0;
	switch (ENTITY::GET_ENTITY_MODEL(*uParam0))
	{
		case joaat("A_C_Coyote"):
			iVar0 = 10;
			break;
		case joaat("A_C_Boar"):
			iVar0 = 9;
			break;
		case joaat("A_C_MtLion"):
			iVar0 = 8;
			break;
	}
	func_740(*uParam0, iVar0, iParam1);
}

int func_782(int iParam0, struct<3> Param1, bool bParam2)//Position - 0x818E9
{
	if (bParam2)
	{
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	}
	switch (iParam0)
	{
		case 1:
			STREAMING::REQUEST_ANIM_DICT("oddjobs@hunterIntro");
			STREAMING::REQUEST_ANIM_DICT("oddjobs@hunterOutro");
			if (STREAMING::HAS_ANIM_DICT_LOADED("oddjobs@hunterIntro") && STREAMING::HAS_ANIM_DICT_LOADED("oddjobs@hunterOutro"))
			{
				return 1;
			}
			break;
		case 2:
			STREAMING::REQUEST_ANIM_DICT("creatures@deer@amb@world_deer_grazing@enter");
			STREAMING::REQUEST_ANIM_DICT("creatures@deer@amb@world_deer_grazing@idle_a");
			STREAMING::REQUEST_ANIM_DICT("creatures@deer@amb@world_deer_grazing@exit");
			STREAMING::REQUEST_ANIM_DICT("creatures@deer@amb@world_deer_grazing@base");
			STREAMING::REQUEST_ANIM_DICT("creatures@cougar@melee@");
			STREAMING::REQUEST_ANIM_DICT("facials@p_m_one@variations@elkcall");
			if (((((STREAMING::HAS_ANIM_DICT_LOADED("creatures@deer@amb@world_deer_grazing@enter") && STREAMING::HAS_ANIM_DICT_LOADED("creatures@deer@amb@world_deer_grazing@idle_a")) && STREAMING::HAS_ANIM_DICT_LOADED("creatures@deer@amb@world_deer_grazing@exit")) && STREAMING::HAS_ANIM_DICT_LOADED("creatures@deer@amb@world_deer_grazing@base")) && STREAMING::HAS_ANIM_DICT_LOADED("creatures@cougar@melee@")) && STREAMING::HAS_ANIM_DICT_LOADED("facials@p_m_one@variations@elkcall"))
			{
				return 1;
			}
			break;
		case 5:
			if (func_784(Param1, Local_348))
			{
				return 1;
			}
			break;
		case 3:
			STREAMING::REQUEST_MODEL(joaat("A_C_Deer"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("A_C_Deer")))
			{
				return 1;
			}
			break;
		case 4:
			func_783(1);
			return 1;
			break;
		case 6:
			GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CommonMenu", false);
			Local_56.f_74.f_1 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("MP_BIG_MESSAGE_FREEMODE");
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Local_56.f_74.f_1) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu"))
			{
				return 1;
			}
			break;
		case 7:
			if ((AUDIO::REQUEST_MISSION_AUDIO_BANK("SCRIPT\HUNTING_2_ELK_CALLS", false, -1) && AUDIO::REQUEST_MISSION_AUDIO_BANK("SCRIPT\HUNTING_2_ELK_VOCALS", false, -1)) && AUDIO::REQUEST_MISSION_AUDIO_BANK("SCRIPT\HUNTING_MAIN_A", false, -1))
			{
				return 1;
			}
			break;
		case 8:
			STREAMING::REQUEST_PTFX_ASSET();
			GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("Hunting", false);
			GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPLeaderboard", false);
			GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPHud", false);
			if (((GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("Hunting") && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPLeaderboard")) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPHud")) && STREAMING::HAS_PTFX_ASSET_LOADED())
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_783(bool bParam0)//Position - 0x81AF9
{
	int iVar0;
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (__LIB_1__.func_197(iVar0))
	{
		if (!WEAPON::HAS_PED_GOT_WEAPON(iVar0, joaat("WEAPON_SNIPERRIFLE"), false))
		{
			iLocal_62 = 0;
			WEAPON::GIVE_WEAPON_TO_PED(iVar0, joaat("WEAPON_SNIPERRIFLE"), -1, bParam0, true);
		}
		else
		{
			iLocal_62 = 1;
			WEAPON::SET_CURRENT_PED_WEAPON(iVar0, joaat("WEAPON_SNIPERRIFLE"), bParam0);
			iLocal_64 = WEAPON::GET_PED_AMMO_BY_TYPE(iVar0, joaat("AMMO_SNIPER"));
			if (iLocal_64 == 0)
			{
				WEAPON::SET_PED_AMMO_BY_TYPE(iVar0, joaat("AMMO_SNIPER"), 20);
				WEAPON::SET_AMMO_IN_CLIP(iVar0, joaat("WEAPON_SNIPERRIFLE"), 10);
				SYSTEM::WAIT(0);
			}
		}
		if (!WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iVar0, joaat("WEAPON_SNIPERRIFLE"), joaat("COMPONENT_AT_AR_SUPP_02")))
		{
			iLocal_63 = 0;
			WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(iVar0, joaat("WEAPON_SNIPERRIFLE"), joaat("COMPONENT_AT_AR_SUPP_02"));
		}
		else
		{
			iLocal_63 = 1;
		}
		WEAPON::SET_PED_INFINITE_AMMO(iVar0, true, joaat("WEAPON_SNIPERRIFLE"));
	}
}

int func_784(struct<3> Param0, struct<3> Param1)//Position - 0x81BB7
{
	if (__LIB_1__.func_197(PLAYER::PLAYER_PED_ID()))
	{
		if (!CAM::DOES_CAM_EXIST(iLocal_361))
		{
			iLocal_361 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", Param0, Param1, 50f, true, 2);
			if (CAM::DOES_CAM_EXIST(iLocal_361))
			{
				CAM::SET_CAM_PARAMS(iLocal_361, Param0, Param1, 50f, 0, 1, 1, 2);
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

void func_785()//Position - 0x81C1D
{
	if (!iLocal_357)
	{
		if (Local_56.f_6 >= Local_56.f_3)
		{
			HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("HUNT");
			HUD::END_TEXT_COMMAND_THEFEED_POST_AWARD("Hunting", "Hunting_Bronze_128", 0, 107, "HUD_MED_UNLKED" /* GXT: Medal */);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "MEDAL_BRONZE", "HUD_AWARDS", true);
			iLocal_357 = 1;
		}
	}
	else if (!iLocal_358)
	{
		if (Local_56.f_6 >= Local_56.f_4)
		{
			HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("HUNT");
			HUD::END_TEXT_COMMAND_THEFEED_POST_AWARD("Hunting", "Hunting_Silver_128", 0, 108, "HUD_MED_UNLKED" /* GXT: Medal */);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "MEDAL_SILVER", "HUD_AWARDS", true);
			iLocal_358 = 1;
		}
	}
	else if (!iLocal_359)
	{
		if (Local_56.f_6 >= Local_56.f_5)
		{
			HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("HUNT");
			HUD::END_TEXT_COMMAND_THEFEED_POST_AWARD("Hunting", "Hunting_Gold_128", 0, 109, "HUD_MED_UNLKED" /* GXT: Medal */);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "MEDAL_GOLD", "HUD_AWARDS", true);
			iLocal_359 = 1;
		}
	}
	func_786();
}

void func_786()//Position - 0x81D01
{
	if (!Local_56.f_61)
	{
		if (Local_56.f_6 >= Local_56.f_5)
		{
			__LIB_21__.func_175(&(Local_56.f_58));
			Local_56.f_61 = 1;
		}
	}
}

void func_790()//Position - 0x81D9F
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_53[iVar0 /*36*/]))
		{
			Local_53[iVar0 /*36*/].f_16 = 1;
		}
		iVar0++;
	}
}

void func_791(int iParam0)//Position - 0x81DD4
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	switch (iLocal_334)
	{
		case 0:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_351))
			{
				iLocal_351 = iParam0->f_1;
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_351) && !ENTITY::IS_ENTITY_DEAD(iLocal_351, false))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_351, true, true);
					bLocal_352 = true;
				}
				else
				{
					func_802(0, 0);
					return;
				}
			}
			else if (!ENTITY::IS_ENTITY_DEAD(iLocal_351, false))
			{
				iLocal_347 = iLocal_347;
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
				FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 25f);
				FIRE::STOP_ENTITY_FIRE(iLocal_351);
				Var0 = { ENTITY::GET_ENTITY_COORDS(iLocal_351, false) };
				Var1 = { ENTITY::GET_ENTITY_ROTATION(iLocal_351, 2) };
				iLocal_360 = PED::CREATE_SYNCHRONIZED_SCENE(Var0, Var1, 2);
				iLocal_361 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", false);
				CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_361, iLocal_360, "_Trevor_cam", "oddjobs@hunterIntro");
				CAM::SET_CAM_ACTIVE(iLocal_361, true);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				__LIB_32__.func_742(-1703.123f, 4665.463f, 21.2f, -1704.077f, 4660.555f, 25.4f, 7f, -1710.8226f, 4656.964f, 21.8008f, 82.9948f, 1, 1, 1, 0, 0);
				TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_360, "oddjobs@hunterIntro", "_Trevor", 1000f, -2f, 0, 0, 1000f, 0);
				PED::SET_FORCE_FOOTSTEP_UPDATE(PLAYER::PLAYER_PED_ID(), true);
				ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_351, iLocal_360, "_Trevor_journey", "oddjobs@hunterIntro", 1000f, -2f, 0, 1000f);
				iLocal_334 = 1;
			}
			else
			{
				func_622(0);
				return;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_56.f_673))
			{
				Local_56.f_673 = iParam0->f_2;
				if (ENTITY::DOES_ENTITY_EXIST(Local_56.f_673) && !ENTITY::IS_ENTITY_DEAD(Local_56.f_673, false))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_56.f_673, true, true);
					VEHICLE::SET_VEHICLE_UNDRIVEABLE(Local_56.f_673, false);
					if (!CAM::IS_SPHERE_VISIBLE(-1707.4337f, 4666.5625f, 22.1095f, 3f) && __LIB_0__.func_529(Local_56.f_673, -1707.4337f, 4666.5625f, 22.1095f, 1) > 5f)
					{
						MISC::CLEAR_AREA_OF_VEHICLES(-1707.4337f, 4666.5625f, 22.1095f, 2f, false, false, false, false, false, false, 0);
						ENTITY::SET_ENTITY_COORDS(Local_56.f_673, -1707.4337f, 4666.5625f, 22.1095f, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(Local_56.f_673, 323.2491f);
						ENTITY::SET_ENTITY_HEALTH(Local_56.f_673, ENTITY::GET_ENTITY_MAX_HEALTH(Local_56.f_673), 0);
					}
				}
			}
			break;
		case 1:
			if (func_802(iLocal_333, 0))
			{
				func_801();
				func_800();
				func_799();
				__LIB_21__.func_672();
				__LIB_19__.func_72(&(Local_56.f_678), 0);
				Var2 = { Local_93.f_47 - Vector(200f, 700f, 700f) };
				Var3 = { Local_93.f_47 + Vector(200f, 700f, 700f) };
				iLocal_356 = PED::ADD_SCENARIO_BLOCKING_AREA(Var2, Var3, false, true, true, true);
				PED::SET_PED_NON_CREATION_AREA(Var2, Var3);
				__LIB_29__.func_693("CHI2_U");
				iLocal_334 = 2;
			}
			break;
		case 2:
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_360) > 0.99f)
			{
				ENTITY::IS_ENTITY_DEAD(iLocal_351, false);
				func_792(PLAYER::PLAYER_PED_ID(), 0);
				func_501(PLAYER::PLAYER_PED_ID(), 12, 20, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Var4 = { ENTITY::GET_ENTITY_COORDS(iLocal_351, false) };
				Var5 = { ENTITY::GET_ENTITY_ROTATION(iLocal_351, 2) };
				iLocal_360 = PED::CREATE_SYNCHRONIZED_SCENE(Var4, Var5, 2);
				PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_360, false);
				iLocal_361 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", false);
				CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_361, iLocal_360, "_Trevor_cam", "oddjobs@hunterOutro");
				CAM::SET_CAM_ACTIVE(iLocal_361, true);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_360, "oddjobs@hunterOutro", "_Trevor", 1000f, -2f, 0, 0, 1000f, 0);
				PED::SET_FORCE_FOOTSTEP_UPDATE(PLAYER::PLAYER_PED_ID(), true);
				ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_351, iLocal_360, "_Trevor_journey", "oddjobs@hunterOutro", 1000f, -2f, 0, 1000f);
				iLocal_334 = 3;
			}
			break;
		case 3:
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_360) > 0.99f)
			{
				iLocal_334 = 4;
			}
			break;
		case 4:
			CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(false, 0f, 3, 0);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_351) && !ENTITY::IS_ENTITY_DEAD(iLocal_351, false))
			{
				ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_351, 1000f, true);
			}
			func_622(0);
			break;
		case 5:
			HUD::CLEAR_PRINTS();
			iLocal_334 = 4;
			break;
	}
}

void func_792(int iParam0, int iParam1)//Position - 0x82244
{
	int iVar0;
	int iVar1;
	struct<65> Var2;
	int iVar3;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = __LIB_18__.func_168(iParam0);
		if (__LIB_0__.func_43(iVar0))
		{
			if (iVar0 == 2)
			{
				iVar1 = func_304(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					__LIB_10__.func_1(iVar0);
					func_319(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
				}
			}
			Var2 = 12;
			Var2.f_13 = 12;
			Var2.f_26 = 12;
			Var2.f_39 = 9;
			Var2.f_49 = 9;
			__LIB_24__.func_948(iParam0, &Var2, 1, -1);
			Global_100166[iVar0 /*65*/] = { Var2 };
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				__LIB_32__.func_816();
			}
			if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != MISC::GET_HASH_KEY("clothes_shop_sp") || (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("lester1")) == 0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("michael4")) == 0))
			{
				if (iParam1 || ((((((!__LIB_0__.func_39(0) && !__LIB_0__.func_39(1)) && !__LIB_0__.func_39(2)) && !__LIB_0__.func_39(3)) && !__LIB_0__.func_39(4)) && !__LIB_0__.func_39(9)) && !__LIB_0__.func_39(10)))
				{
					Global_113386.f_2363.f_539[iVar0 /*65*/] = { Var2 };
					Global_113386.f_2363.f_539.f_2391[iVar0] = __LIB_0__.func_352(iParam0);
					iVar3 = 0;
					while (iVar3 < 12)
					{
						Global_113386.f_2363.f_539.f_204[iVar3 /*4*/][iVar0] = __LIB_6__.func_795(iParam0, __LIB_0__.func_33(iVar3));
						iVar3++;
					}
					iVar3 = 0;
					while (iVar3 < 12)
					{
						Global_113386.f_2363.f_539.f_204[iVar3 /*4*/][iVar0] = __LIB_6__.func_795(iParam0, __LIB_0__.func_33(iVar3));
						iVar3++;
					}
					if (iVar0 == 0)
					{
						if (Global_113386.f_9085.f_99.f_58[121])
						{
							Global_113386.f_9085.f_99.f_58[122] = 1;
						}
					}
				}
			}
		}
	}
}

void func_799()//Position - 0x83177
{
	int iVar0;
	int iVar1;
	var uVar2[30];
	int iVar3;
	int iVar4;
	int iVar5;
	struct<3> Var6;
	struct<3> Var7;
	int iVar8;
	iVar0 = 0;
	iVar1 = 0;
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar3 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar2, -1);
	}
	if (iVar3 != 0)
	{
		iVar4 = 0;
		while (iVar4 < iVar3)
		{
			if (!PED::IS_PED_INJURED(uVar2[iVar4]))
			{
				iVar5 = ENTITY::GET_ENTITY_MODEL(uVar2[iVar4]);
				if (iVar5 == joaat("A_C_Coyote") || iVar5 == joaat("A_C_Boar"))
				{
					if (iVar0 < 3)
					{
						Var6 = { ENTITY::GET_ENTITY_COORDS(uVar2[iVar4], false) };
						if (CAM::IS_SPHERE_VISIBLE(Var6, 4f))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uVar2[iVar4], true, true);
							Local_173[iVar0 /*29*/] = uVar2[iVar4];
							func_604(&(Local_173[iVar0 /*29*/]), 3, 1);
							iVar0++;
						}
						else
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uVar2[iVar4], true, true);
							PED::DELETE_PED(&(uVar2[iVar4]));
						}
					}
					else
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uVar2[iVar4], true, true);
						PED::SET_PED_KEEP_TASK(uVar2[iVar4], true);
						TASK::TASK_SMART_FLEE_PED(uVar2[iVar4], PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uVar2[iVar4]));
					}
				}
				else if (iVar5 == joaat("A_C_Deer"))
				{
					if (iVar1 < 8)
					{
						Var7 = { ENTITY::GET_ENTITY_COORDS(uVar2[iVar4], false) };
						if (CAM::IS_SPHERE_VISIBLE(Var7, 4f))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uVar2[iVar4], true, true);
							Local_53[iVar1 /*36*/] = uVar2[iVar4];
							func_758(&(Local_53[iVar1 /*36*/]), 8, 1);
							Local_53[iVar1 /*36*/].f_25 = 0;
							func_47(iVar1, 0);
							Local_53[iVar1 /*36*/].f_23 = (MISC::GET_GAME_TIMER() + 7500 + iVar1 * 666);
							iVar8 = PED::GET_PED_DRAWABLE_VARIATION(uVar2[iVar4], 8);
							if (iVar8 == 0)
							{
								DECORATOR::DECOR_SET_BOOL(uVar2[iVar4], "doe_elk", true);
								iLocal_72++;
							}
							iLocal_73++;
							iVar1++;
						}
						else
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uVar2[iVar4], true, true);
							PED::DELETE_PED(&(uVar2[iVar4]));
						}
					}
					else
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uVar2[iVar4], true, true);
						PED::SET_PED_KEEP_TASK(uVar2[iVar4], true);
						TASK::TASK_SMART_FLEE_PED(uVar2[iVar4], PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uVar2[iVar4]));
					}
				}
				else if (iVar5 == joaat("A_C_MtLion"))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uVar2[iVar4], true, true);
					PED::SET_PED_KEEP_TASK(uVar2[iVar4], true);
					TASK::TASK_SMART_FLEE_PED(uVar2[iVar4], PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uVar2[iVar4]));
				}
			}
			iVar4++;
		}
	}
}

void func_800()//Position - 0x833E9
{
	STREAMING::REQUEST_MODEL(joaat("A_C_Deer"));
	while (!STREAMING::HAS_MODEL_LOADED(joaat("A_C_Deer")))
	{
		SYSTEM::WAIT(0);
	}
}

void func_801()//Position - 0x8340F
{
	STREAMING::REQUEST_MODEL(joaat("A_C_MtLion"));
	STREAMING::REQUEST_MODEL(joaat("A_C_Boar"));
	STREAMING::REQUEST_MODEL(joaat("A_C_Coyote"));
	while ((!STREAMING::HAS_MODEL_LOADED(joaat("A_C_MtLion")) && !STREAMING::HAS_MODEL_LOADED(joaat("A_C_Boar"))) && !STREAMING::HAS_MODEL_LOADED(joaat("A_C_Coyote")))
	{
		SYSTEM::WAIT(0);
	}
}

int func_802(int iParam0, bool bParam1)//Position - 0x83465
{
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				bParam1 = false;
				__LIB_32__.func_751(1, 1, 1);
			}
			else if ((((func_782(3, 0f, 0f, 0f, 1) && func_782(6, 0f, 0f, 0f, 1)) && func_782(7, 0f, 0f, 0f, 1)) && func_782(2, 0f, 0f, 0f, 1)) && func_782(8, 0f, 0f, 0f, 1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_814()//Position - 0x8387F
{
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	__LIB_0__.func_186();
	func_815();
}

void func_815()//Position - 0x838A5
{
	if (__LIB_0__.func_1("AM_H_ARMST" /* GXT: Arms Trafficking now available at ~BLIP_ARMS_DEALING~ for Trevor only */) || __LIB_0__.func_1("AM_H_FTXT" /* GXT: A new text message has been received. Bring up the phone with ~INPUT_PHONE~ to read it. New text messages and emails also show on the Feed. */))
	{
		HUD::CLEAR_HELP(true);
	}
}

int func_817()//Position - 0x838DB
{
	struct<6> Var0;
	if (HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
	{
		switch (iLocal_354)
		{
			case 0:
				__LIB_29__.func_694(3);
				iLocal_354 = 1;
				break;
			case 1:
				__LIB_35__.func_898(Var0, 0, 0, 0, 0, 0);
				if (Global_78575 >= MISC::GET_GAME_TIMER())
				{
					if (!Global_113386.f_10049.f_115)
					{
						__LIB_0__.func_151("AHT_WLCOME", -1);
					}
					else
					{
						__LIB_0__.func_151("AHT_WLCOME_CHAL", -1);
					}
					iLocal_347 = 1;
				}
				if (Global_78573 == 6)
				{
					__LIB_0__.func_55();
					iLocal_354 = 2;
				}
				break;
			}
	}
	return 0;
}

void func_838()//Position - 0x848B3
{
	if (fLocal_150 > 0f)
	{
		if (!iLocal_152)
		{
			iLocal_151 = MISC::GET_GAME_TIMER() + 3000;
			iLocal_152 = 1;
		}
		else if (MISC::GET_GAME_TIMER() > iLocal_151)
		{
			fLocal_150 = (fLocal_150 - 0.1f);
			iLocal_152 = 0;
		}
	}
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(fLocal_150);
}

void func_839()//Position - 0x848FC
{
	if (iLocal_355 < MISC::GET_GAME_TIMER())
	{
		PATHFIND::REMOVE_NAVMESH_REQUIRED_REGIONS();
		PATHFIND::ADD_NAVMESH_REQUIRED_REGION(Local_67.f_0, Local_67.f_1, 225f);
		iLocal_355 = MISC::GET_GAME_TIMER() + 5000;
	}
}

void func_841()//Position - 0x8494D
{
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
	__LIB_24__.func_951(54, 2, 0);
	func_847();
	func_846();
	func_49();
	bLocal_59 = true;
	iLocal_354 = 0;
	iLocal_344 = 0;
	iLocal_345 = 0;
	AUDIO::START_AUDIO_SCENE("AMBIENT_HUNTING_MIX");
	PED::ADD_RELATIONSHIP_GROUP("Elk Group", &iLocal_52);
	PAD::INIT_PC_SCRIPTED_CONTROLS("HUNTING ELK CALL");
	Local_56.f_63 = __LIB_1__.func_638();
	func_844();
	AUDIO::SET_AUDIO_FLAG("AllowPlayerAIOnMission", true);
	MISC::CLEAR_AREA_OF_PROJECTILES(-1702.6951f, 4666.9414f, 22.7091f, 50f, 0);
	iLocal_77 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(30000, 60000));
	HUD::REQUEST_ADDITIONAL_TEXT("AMBHT", 0);
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("HUD_AWARDS", false, -1);
	func_782(1, 0f, 0f, 0f, 1);
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		__LIB_40__.func_981(PLAYER::PLAYER_PED_ID(), 20);
	}
}

void func_844()//Position - 0x84B2F
{
	int iVar0;
	iVar0 = 3;
	while (iVar0 < 8)
	{
		Local_53[iVar0 /*36*/].f_16 = 0;
		iVar0++;
	}
}

void func_846()//Position - 0x84B64
{
	Local_56.f_3 = 30;
	Local_56.f_4 = 60;
	Local_56.f_5 = 90;
}

void func_847()//Position - 0x84B81
{
	struct<3> Var0[8];
	Var0[0 /*3*/] = { -2151.1272f, 4431.3477f, 61.9329f };
	Var0[1 /*3*/] = { -1899.1481f, 4044.1296f, 246.3255f };
	Var0[2 /*3*/] = { -224.7574f, 3868.356f, 37.5636f };
	Var0[3 /*3*/] = { -58.7894f, 4365.256f, 52.7727f };
	Var0[4 /*3*/] = { -316.493f, 4684.796f, 248.4118f };
	Var0[5 /*3*/] = { -884.8384f, 4907.8447f, 273.6012f };
	Var0[6 /*3*/] = { -1263.8662f, 5396.532f, -0.0613f };
	Var0[7 /*3*/] = { -1753.4866f, 5058.2876f, 20.8162f };
	func_848(&Var0, 8);
	Local_55[0 /*5*/] = { -1511.7775f, 4784.5337f, 59.8112f };
	Local_55[1 /*5*/] = { -1398.8132f, 4454.7363f, 23.837f };
	Local_55[2 /*5*/] = { -1352.4169f, 4698.8076f, 64.4277f };
	Local_55[3 /*5*/] = { -1461.1115f, 4598.043f, 47.5845f };
	Local_55[4 /*5*/] = { -1599.158f, 4833.445f, 55.0841f };
	Local_55[5 /*5*/] = { -1937.9379f, 4543.3823f, 9.0519f };
	Local_55[6 /*5*/] = { -1517.0697f, 4718.626f, 45.1539f };
	Local_55[7 /*5*/] = { -1339.6239f, 4434.0605f, 26.5921f };
	Local_55[8 /*5*/] = { -1493.7471f, 4438.708f, 17.6355f };
	Local_55[9 /*5*/] = { -1553.9728f, 4448.385f, 11.385f };
	Local_55[10 /*5*/] = { -1671.279f, 4772.917f, 45.7077f };
	Local_55[11 /*5*/] = { -1586.5284f, 4522.006f, 16.6437f };
	Local_55[12 /*5*/] = { -1437.8397f, 4718.1875f, 41.1638f };
	Local_55[13 /*5*/] = { -1660.6385f, 4558.4946f, 40.7479f };
	Local_55[14 /*5*/] = { -1663.3369f, 4601.2656f, 46.9536f };
	Local_55[15 /*5*/] = { -1722.6177f, 4690.563f, 31.0306f };
	Local_55[16 /*5*/] = { -1522.1996f, 4530.8843f, 44.9653f };
	Local_55[17 /*5*/] = { -1550.4271f, 4770.592f, 61.3469f };
	Local_55[18 /*5*/] = { -1583.5095f, 4669.632f, 44.7582f };
	Local_55[19 /*5*/] = { -1738.6082f, 4630.1387f, 29.7174f };
	Local_55[20 /*5*/] = { -425.1335f, 4331.439f, 58.2179f };
	Local_55[21 /*5*/] = { -1227.6572f, 4959.6426f, 171.855f };
	Local_55[22 /*5*/] = { -756.1689f, 4744.0537f, 229.8765f };
	Local_55[23 /*5*/] = { -237.4276f, 4428.723f, 54.4526f };
	Local_55[24 /*5*/] = { -952.6023f, 4363.2085f, 10.8284f };
	Local_55[25 /*5*/] = { -1415.101f, 4398.042f, 44.0559f };
	Local_55[26 /*5*/] = { -1267.3019f, 4411.986f, 9.6374f };
	Local_55[27 /*5*/] = { -1259.8344f, 4347.884f, 7.0597f };
	Local_55[28 /*5*/] = { -1655.3364f, 4453.8853f, 0.6491f };
	Local_55[29 /*5*/] = { -1817.8634f, 4509.4414f, 25.4081f };
	Local_55[30 /*5*/] = { -1815.6727f, 4420.209f, 45.1439f };
	Local_55[31 /*5*/] = { -1657.9868f, 4281.4907f, 80.7132f };
	Local_55[32 /*5*/] = { -1518.7003f, 4235.5576f, 63.0872f };
	Local_55[33 /*5*/] = { -1405.1924f, 4251.4434f, 42.5107f };
	Local_55[34 /*5*/] = { -1148.8406f, 4580.364f, 140.3432f };
	Local_55[35 /*5*/] = { -1314.3433f, 4523.159f, 28.3174f };
	Local_55[36 /*5*/] = { -1269.1595f, 4665.286f, 92.2077f };
	Local_55[37 /*5*/] = { -1060.3892f, 4461.974f, 85.3426f };
	Local_55[38 /*5*/] = { -960.9619f, 4404.799f, 15.1577f };
	Local_55[39 /*5*/] = { -798.0543f, 4421.869f, 16.6733f };
	Local_55[40 /*5*/] = { -765.4644f, 4600.2295f, 123.3193f };
	Local_55[41 /*5*/] = { -729.2116f, 4628.92f, 128.4458f };
	Local_55[42 /*5*/] = { -622.1554f, 4514.7295f, 82.0527f };
	Local_55[43 /*5*/] = { -368.5648f, 4375.5923f, 49.8344f };
	Local_55[44 /*5*/] = { -299.489f, 4294.9604f, 40.4718f };
	Local_55[45 /*5*/] = { -291.6694f, 4600.0454f, 139.0713f };
	Local_55[46 /*5*/] = { -167.2124f, 4336.2563f, 49.6604f };
	Local_55[47 /*5*/] = { -160.3564f, 4279.9766f, 35.9502f };
	Local_55[48 /*5*/] = { -326.4175f, 4210.2095f, 48.8774f };
	Local_55[49 /*5*/] = { -353.8134f, 4276.1997f, 46.2023f };
	Local_55[50 /*5*/] = { -304.5437f, 4335.7f, 31.261f };
	Local_55[51 /*5*/] = { -1211.7333f, 4801.1953f, 212.5187f };
	Local_55[52 /*5*/] = { -1116.1746f, 4790.084f, 222.5111f };
	Local_55[53 /*5*/] = { -973.5195f, 4338.372f, 13.6037f };
	Local_55[54 /*5*/] = { -755.8174f, 4505.748f, 83.2461f };
	Local_55[55 /*5*/] = { -1175.0583f, 4435.0938f, 26.3625f };
	Local_55[56 /*5*/] = { -1223.8759f, 4458.65f, 29.3014f };
	Local_55[57 /*5*/] = { -173.0567f, 4480.761f, 69.3354f };
	Local_178[0 /*3*/] = { -1381.4938f, 4416.486f, 27.8185f };
	Local_178[1 /*3*/] = { -1538.3176f, 4823.24f, 72.7811f };
	Local_178[2 /*3*/] = { -1499.8807f, 4563.8755f, 36.7863f };
	Local_178[3 /*3*/] = { -1636.7708f, 4576.797f, 42.0251f };
	Local_178[4 /*3*/] = { -1700.879f, 4598.8154f, 45.403f };
	Local_178[5 /*3*/] = { -1643.5792f, 4651.792f, 29.0423f };
	Local_178[6 /*3*/] = { -1817.5378f, 4509.4966f, 25.4984f };
	Local_178[7 /*3*/] = { -1479.5502f, 4654.101f, 43.9694f };
	Local_178[8 /*3*/] = { -1492.2996f, 4481.02f, 17.2195f };
	Local_178[9 /*3*/] = { -1474.0715f, 4409.068f, 22.5295f };
	Local_178[10 /*3*/] = { -1633.4824f, 4734.986f, 52.2606f };
	Local_178[11 /*3*/] = { -1607.5784f, 4641.057f, 47.0786f };
	Local_178[12 /*3*/] = { -1532.2561f, 4566.3496f, 39.2169f };
	Local_178[13 /*3*/] = { -1430.2557f, 4409.0273f, 45.7995f };
	Local_178[14 /*3*/] = { -1531.6063f, 4613.405f, 28.4776f };
	Local_178[15 /*3*/] = { -1583.5251f, 4506.502f, 19.5027f };
	Local_178[16 /*3*/] = { -1625.884f, 4792.8696f, 50.1408f };
	Local_178[17 /*3*/] = { -1496.5253f, 4736.5146f, 54.6202f };
	Local_178[18 /*3*/] = { -1518.8767f, 4423.68f, 11.3467f };
	Local_178[19 /*3*/] = { -1706.089f, 4717.677f, 39.8586f };
	Local_178[20 /*3*/] = { -354.4631f, 3932.3337f, 72.4634f };
	Local_178[21 /*3*/] = { -319.2273f, 4281.0005f, 48.6787f };
	Local_178[22 /*3*/] = { -1659.1747f, 5006.936f, 35.1188f };
	Local_178[23 /*3*/] = { -906.1866f, 4822.891f, 304.3815f };
	Local_178[24 /*3*/] = { -964.5157f, 4402.6396f, 15.007f };
	Local_178[25 /*3*/] = { -1216.5475f, 4454.5537f, 29.5726f };
	Local_178[26 /*3*/] = { -1259.234f, 4675.2837f, 88.2272f };
	Local_178[27 /*3*/] = { -1295.1776f, 4747.443f, 95.7002f };
	Local_178[28 /*3*/] = { -1257.1818f, 4920.113f, 176.1196f };
	Local_178[29 /*3*/] = { -764.3734f, 4216.899f, 179.9306f };
	Local_178[30 /*3*/] = { -1294.6312f, 4605.923f, 120.0947f };
	Local_178[31 /*3*/] = { -1289.1989f, 4495.6924f, 13.2293f };
	Local_178[32 /*3*/] = { -1930.0492f, 4541.523f, 9.739f };
	Local_178[33 /*3*/] = { -1886.6348f, 4489.013f, 26.3309f };
	Local_178[34 /*3*/] = { -1682.3026f, 4422.8516f, 10.8683f };
	Local_178[35 /*3*/] = { -1543.6766f, 4341.02f, 0.9957f };
	Local_178[36 /*3*/] = { -1407.6846f, 4309.8545f, 3.1902f };
	Local_178[37 /*3*/] = { -1272.5139f, 4401.581f, 9.3275f };
	Local_178[38 /*3*/] = { -1215.9462f, 4304.0557f, 73.903f };
	Local_178[39 /*3*/] = { -1240.0525f, 4302.034f, 68.3904f };
	Local_178[40 /*3*/] = { -1078.8168f, 4554.217f, 94.6354f };
	Local_178[41 /*3*/] = { -1058.0194f, 4463.2783f, 85.9198f };
	Local_178[42 /*3*/] = { -808.1082f, 4427.5737f, 15.6468f };
	Local_178[43 /*3*/] = { -688.2943f, 4412.14f, 16.9693f };
	Local_178[44 /*3*/] = { -555.9728f, 4502.3765f, 68.863f };
	Local_178[45 /*3*/] = { -644.8114f, 4566.9487f, 123.9569f };
	Local_178[46 /*3*/] = { -410.4391f, 4655.3677f, 238.8684f };
	Local_178[47 /*3*/] = { -226.5519f, 4488.983f, 51.3667f };
	Local_178[48 /*3*/] = { -189.8527f, 4433.251f, 45.4967f };
	Local_178[49 /*3*/] = { -121.9785f, 4376.063f, 67.7734f };
	Local_178[50 /*3*/] = { -121.9785f, 4376.063f, 67.7734f };
	Local_178[51 /*3*/] = { -121.9785f, 4376.063f, 67.7734f };
	Local_178[52 /*3*/] = { -121.9785f, 4376.063f, 67.7734f };
	Local_178[53 /*3*/] = { -121.9785f, 4376.063f, 67.7734f };
	Local_178[54 /*3*/] = { -398.0512f, 4352.7363f, 54.0697f };
	Local_349 = { -1706.6096f, 4657.959f, 21.905f };
	fLocal_350 = 327.0001f;
}

void func_848(var uParam0, int iParam1)//Position - 0x856EB
{
	int iVar0;
	__LIB_11__.func_329(&Local_93);
	iVar0 = 0;
	while (iVar0 <= (iParam1 - 1))
	{
		__LIB_11__.func_328(&Local_93, *(uParam0[iVar0 /*3*/]));
		iVar0++;
	}
	__LIB_11__.func_327(&Local_93);
	__LIB_20__.func_743(&uLocal_98, &Local_93, 50f);
}

void func_856(int iParam0)//Position - 0x85B58
{
	if (iLocal_366 && !Global_2097157.f_2)
	{
		func_194();
	}
	__LIB_21__.func_672();
	__LIB_19__.func_72(&(Local_56.f_678), 0);
	func_870(iParam0);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_C_Deer"));
	MISC::ACTION_MANAGER_ENABLE_ACTION(MISC::GET_HASH_KEY("AR_knife_low_kick_far"), true);
	MISC::ACTION_MANAGER_ENABLE_ACTION(MISC::GET_HASH_KEY("AR_knife_low_kick_close"), true);
	MISC::ACTION_MANAGER_ENABLE_ACTION(MISC::GET_HASH_KEY("ACT_low_kick_close"), true);
	MISC::ACTION_MANAGER_ENABLE_ACTION(MISC::GET_HASH_KEY("ACT_low_kick_far"), true);
	func_50();
	VEHICLE::SET_RANDOM_TRAINS(true);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_356, false);
	PED::CLEAR_PED_NON_CREATION_AREA();
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_52);
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("HUNTING_02_SETTINGS"))
	{
		AUDIO::STOP_AUDIO_SCENE("HUNTING_02_SETTINGS");
		AUDIO::STOP_SOUND(iLocal_82);
		AUDIO::RELEASE_SOUND_ID(iLocal_82);
	}
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("SCRIPT\HUNTING_MAIN_A");
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("SCRIPT\HUNTING_2_ELK_CALLS");
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("SCRIPT\HUNTING_2_ELK_VOCALS");
	AUDIO::UNREGISTER_SCRIPT_WITH_AUDIO();
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_351) && !ENTITY::IS_ENTITY_DEAD(iLocal_351, false))
	{
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_351, true);
	}
	PATHFIND::REMOVE_NAVMESH_REQUIRED_REGIONS();
	__LIB_32__.func_576(1, 1, 1, 1);
	AUDIO::STOP_AUDIO_SCENE("AMBIENT_HUNTING_MIX");
	func_20(1);
	__LIB_10__.func_865(&iLocal_332);
	__LIB_32__.func_577(-1, 0, 0, 0);
	__LIB_8__.func_770(0);
	__LIB_2__.func_249(PLAYER::PLAYER_PED_ID());
	__LIB_14__.func_366(0);
	BRAIN::REACTIVATE_NAMED_WORLD_BRAINS_WAITING_TILL_OUT_OF_RANGE("launcher_Hunting_Ambient");
	__LIB_0__.func_518(0);
	AUDIO::SET_AUDIO_FLAG("AllowPlayerAIOnMission", false);
	CLOCK::PAUSE_CLOCK(false);
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
	PAD::SHUTDOWN_PC_SCRIPTED_CONTROLS();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_870(var uParam0)//Position - 0x874A6
{
	int iVar0;
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (__LIB_1__.func_197(iVar0) || uParam0)
	{
		WEAPON::SET_PED_INFINITE_AMMO(iVar0, false, joaat("WEAPON_SNIPERRIFLE"));
		WEAPON::SET_PED_AMMO_BY_TYPE(iVar0, joaat("AMMO_SNIPER"), iLocal_64);
		if (!iLocal_63)
		{
			if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iVar0, joaat("WEAPON_SNIPERRIFLE"), joaat("COMPONENT_AT_AR_SUPP_02")))
			{
				WEAPON::REMOVE_WEAPON_COMPONENT_FROM_PED(iVar0, joaat("WEAPON_SNIPERRIFLE"), joaat("COMPONENT_AT_AR_SUPP_02"));
			}
		}
		if (!iLocal_62)
		{
			WEAPON::REMOVE_WEAPON_FROM_PED(iVar0, joaat("WEAPON_SNIPERRIFLE"));
		}
	}
}

