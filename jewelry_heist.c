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
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	float fLocal_48 = 0f;
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
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	struct<3> Local_67 = { 0, 0, 0 } ;
	struct<3> Local_68 = { 0, 0, 0 } ;
	int iLocal_69 = 0;
	var uLocal_70 = 0;
	bool bLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	struct<3> Local_80 = { 0, 0, 0 } ;
	struct<3> Local_81 = { 0, 0, 0 } ;
	struct<3> Local_82 = { 0, 0, 0 } ;
	float fLocal_83 = 0f;
	struct<3> Local_84 = { 0, 0, 0 } ;
	struct<3> Local_85 = { 0, 0, 0 } ;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	bool bLocal_92 = 0;
	bool bLocal_93 = 0;
	bool bLocal_94 = 0;
	bool bLocal_95 = 0;
	bool bLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	bool bLocal_99 = 0;
	bool bLocal_100 = 0;
	int iLocal_101 = 0;
	bool bLocal_102 = 0;
	bool bLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	var uLocal_107 = 0;
	bool bLocal_108 = 0;
	bool bLocal_109 = 0;
	bool bLocal_110 = 0;
	int iLocal_111 = 0;
	bool bLocal_112 = 0;
	var uLocal_113 = 0;
	bool bLocal_114 = 0;
	bool bLocal_115 = 0;
	bool bLocal_116 = 0;
	bool bLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	bool bLocal_120 = 0;
	bool bLocal_121 = 0;
	bool bLocal_122 = 0;
	bool bLocal_123 = 0;
	float fLocal_124[36] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_125[36] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_126[36] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_127[36] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_128[36] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_129 = 0f;
	float fLocal_130 = 0f;
	float fLocal_131 = 0f;
	float fLocal_132 = 0f;
	float fLocal_133[35] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_134[35] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_135[35] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_136[35] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_137[35] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_138[35] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_139[17] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_140[17] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_141[17] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_142[17] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_143 = 0f;
	float fLocal_144 = 0f;
	float fLocal_145 = 0f;
	float fLocal_146 = 0f;
	float fLocal_147 = 0f;
	float fLocal_148 = 0f;
	float fLocal_149 = 0f;
	float fLocal_150 = 0f;
	float fLocal_151 = 0f;
	float fLocal_152 = 0f;
	float fLocal_153 = 0f;
	float fLocal_154 = 0f;
	float fLocal_155 = 0f;
	float fLocal_156 = 0f;
	float fLocal_157 = 0f;
	float fLocal_158 = 0f;
	float fLocal_159 = 0f;
	float fLocal_160 = 0f;
	float fLocal_161 = 0f;
	float fLocal_162 = 0f;
	float fLocal_163 = 0f;
	int iLocal_164[36] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_165[36] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_166[36] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_167[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_168[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_169[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_170[17] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_171 = 0;
	int iLocal_172 = 0;
	int iLocal_173 = 0;
	int iLocal_174 = 0;
	int iLocal_175 = 0;
	int iLocal_176 = 0;
	int iLocal_177 = 0;
	int iLocal_178 = 0;
	int iLocal_179 = 0;
	int iLocal_180 = 0;
	int iLocal_181 = 0;
	int iLocal_182 = 0;
	int iLocal_183 = 0;
	int iLocal_184 = 0;
	int iLocal_185 = 0;
	int iLocal_186 = 0;
	int iLocal_187 = 0;
	struct<3> Local_188[36];
	struct<3> Local_189[17];
	struct<3> Local_190[35];
	struct<3> Local_191 = { 0, 0, 0 } ;
	struct<3> Local_192 = { 0, 0, 0 } ;
	struct<3> Local_193 = { 0, 0, 0 } ;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	struct<3> Local_200 = { 0, 0, 0 } ;
	struct<3> Local_201 = { 0, 0, 0 } ;
	struct<3> Local_202 = { 0, 0, 0 } ;
	struct<3> Local_203 = { 0, 0, 0 } ;
	char cLocal_204[64] = "";
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	int iLocal_213 = 0;
	int iLocal_214[36] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_215[17] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_216[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_217 = 0;
	int iLocal_218 = 0;
	int iLocal_219 = 0;
	int iLocal_220[36] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_221[28] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_222[17] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_223[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_224[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_225 = 0;
	int iLocal_226 = 0;
	int iLocal_227 = 0;
	var uLocal_228 = 28;
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
	float fLocal_257 = 0f;
	float fLocal_258 = 0f;
	float fLocal_259 = 0f;
	float fLocal_260 = 0f;
	float fLocal_261 = 0f;
	int iLocal_262 = 0;
	int iLocal_263[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_264 = 0;
	int iLocal_265 = 0;
	int iLocal_266 = 0;
	int iLocal_267 = 0;
	int iLocal_268 = 0;
	int iLocal_269 = 0;
	int iLocal_270 = 0;
	int iLocal_271 = 0;
	int iLocal_272 = 0;
	int iLocal_273 = 0;
	int iLocal_274 = 0;
	int iLocal_275 = 0;
	int iLocal_276 = 0;
	int iLocal_277 = 0;
	int iLocal_278 = 0;
	int iLocal_279 = 0;
	int* iLocal_280 = NULL;
	int iLocal_281 = 0;
	int iLocal_282 = 0;
	int iLocal_283 = 0;
	int iLocal_284 = 0;
	int iLocal_285 = 0;
	struct<2> Local_286 = { 0, 0 } ;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	struct<2> Local_289 = { 0, 0 } ;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	int iLocal_292 = 0;
	struct<6> Local_293[4];
	int iLocal_294 = 0;
	struct<3> Local_295 = { 0, 0, 0 } ;
	struct<3> Local_296 = { 0, 0, 0 } ;
	struct<3> Local_297 = { 0, 0, 0 } ;
	struct<3> Local_298 = { 0, 0, 0 } ;
	struct<3> Local_299[3];
	float fLocal_300[3] = { 0f, 0f, 0f };
	struct<3> Local_301[5];
	float fLocal_302[5] = { 0f, 0f, 0f, 0f, 0f };
	struct<3> Local_303 = { 0, 0, 0 } ;
	struct<3> Local_304 = { 0, 0, 0 } ;
	struct<3> Local_305 = { 0, 0, 0 } ;
	int iLocal_306 = 0;
	struct<3> Local_307 = { 0, 0, 0 } ;
	struct<3> Local_308 = { 0, 0, 0 } ;
	struct<3> Local_309 = { 0, 0, 0 } ;
	struct<3> Local_310 = { 0, 0, 0 } ;
	struct<3> Local_311 = { 0, 0, 0 } ;
	struct<3> Local_312 = { 0, 0, 0 } ;
	struct<3> Local_313 = { 0, 0, 0 } ;
	struct<3> Local_314[6];
	struct<3> Local_315 = { 0, 0, 0 } ;
	struct<3> Local_316 = { 0, 0, 0 } ;
	struct<3> Local_317 = { 0, 0, 0 } ;
	struct<3> Local_318 = { 0, 0, 0 } ;
	struct<3> Local_319 = { 0, 0, 0 } ;
	struct<3> Local_320 = { 0, 0, 0 } ;
	struct<3> Local_321 = { 0, 0, 0 } ;
	struct<3> Local_322 = { 0, 0, 0 } ;
	struct<3> Local_323 = { 0, 0, 0 } ;
	struct<3> Local_324 = { 0, 0, 0 } ;
	struct<3> Local_325 = { 0, 0, 0 } ;
	struct<3> Local_326 = { 0, 0, 0 } ;
	struct<3> Local_327 = { 0, 0, 0 } ;
	float fLocal_328 = 0f;
	struct<3> Local_329[3];
	float fLocal_330[3] = { 0f, 0f, 0f };
	struct<3> Local_331 = { 0, 0, 0 } ;
	struct<3> Local_332 = { 0, 0, 0 } ;
	struct<3> Local_333 = { 0, 0, 0 } ;
	float fLocal_334 = 0f;
	struct<3> Local_335 = { 0, 0, 0 } ;
	struct<3> Local_336 = { 0, 0, 0 } ;
	float fLocal_337 = 0f;
	struct<3> Local_338[5];
	float fLocal_339[5] = { 0f, 0f, 0f, 0f, 0f };
	float fLocal_340 = 0f;
	float fLocal_341 = 0f;
	float fLocal_342 = 0f;
	float fLocal_343 = 0f;
	int iLocal_344 = 0;
	char* sLocal_345 = NULL;
	int iLocal_346 = 0;
	int iLocal_347 = 0;
	int* iLocal_348 = NULL;
	struct<30> Local_349[20];
	struct<2> Local_350 = { 0, 0 } ;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	int iLocal_369 = 0;
	struct<14> Local_370 = { 0, 3, 0, 0, 0, 0, 0, 1092616192, 1101004800, 0, 0, 0, 0, 0 } ;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 3;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	bool bLocal_382 = 0;
	int iLocal_383 = 0;
	int iLocal_384 = 0;
	int iLocal_385 = 0;
	bool bLocal_386 = 0;
	int iLocal_387 = 0;
	bool bLocal_388 = 0;
	bool bLocal_389 = 0;
	bool bLocal_390 = 0;
	int iLocal_391 = 0;
	int iLocal_392 = 0;
	int iLocal_393 = 0;
	int iLocal_394 = 0;
	int iLocal_395 = 0;
	int iLocal_396 = 0;
	int iLocal_397 = 0;
	int iLocal_398 = 0;
	bool bLocal_399 = 0;
	int iLocal_400 = 0;
	int iLocal_401 = 0;
	int iLocal_402 = 0;
	int iLocal_403 = 0;
	int iLocal_404 = 0;
	int iLocal_405 = 0;
	int iLocal_406 = 0;
	int iLocal_407 = 0;
	int iLocal_408[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<3> Local_409 = { 0, 0, 0 } ;
	int iLocal_410 = 0;
	int iLocal_411 = 0;
	int iLocal_412 = 0;
	int iLocal_413 = 0;
	int iLocal_414 = 0;
	int iLocal_415 = 0;
	int iLocal_416 = 0;
	int iLocal_417 = 0;
	int iLocal_418 = 0;
	int iLocal_419 = 0;
	int iLocal_420 = 0;
	int iLocal_421 = 0;
	int iLocal_422 = 0;
	float fLocal_423 = 0f;
	bool bLocal_424 = 0;
	bool bLocal_425 = 0;
	int iLocal_426 = 0;
	int iLocal_427 = 0;
	int iLocal_428 = 0;
	int iLocal_429 = 0;
	int iLocal_430 = 0;
	int iLocal_431 = 0;
	int iLocal_432 = 0;
	int iLocal_433 = 0;
	int iLocal_434 = 0;
	int iLocal_435 = 0;
	int iLocal_436[4] = { 0, 0, 0, 0 };
	int* iLocal_437 = NULL;
	int iLocal_438[5] = { 0, 0, 0, 0, 0 };
	int iLocal_439[5] = { 0, 0, 0, 0, 0 };
	int* iLocal_440 = NULL;
	int iLocal_441[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_442[6] = { 0, 0, 0, 0, 0, 0 };
	int* iLocal_443 = NULL;
	int iLocal_444 = 0;
	int iLocal_445 = 0;
	int iLocal_446 = 0;
	int iLocal_447 = 0;
	int iLocal_448 = 0;
	int iLocal_449 = 0;
	int iLocal_450 = 0;
	int iLocal_451 = 0;
	int iLocal_452 = 0;
	int iLocal_453 = 0;
	int iLocal_454 = 0;
	int iLocal_455 = 0;
	int iLocal_456[4] = { 0, 0, 0, 0 };
	int* iLocal_457 = NULL;
	int iLocal_458[6] = { 0, 0, 0, 0, 0, 0 };
	float fLocal_459[6] = { 0f, 0f, 0f, 0f, 0f, 0f };
	int* iLocal_460 = NULL;
	int* iLocal_461[35] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int* iLocal_462 = NULL;
	int* iLocal_463 = NULL;
	int iLocal_464 = 0;
	int* iLocal_465 = NULL;
	float fLocal_466 = 0f;
	int* iLocal_467 = NULL;
	int* iLocal_468 = NULL;
	int iLocal_469 = 0;
	int iLocal_470 = 0;
	int iLocal_471 = 0;
	int iLocal_472 = 0;
	int iLocal_473 = 0;
	int iLocal_474 = 0;
	int iLocal_475 = 0;
	int iLocal_476 = 0;
	int iLocal_477 = 0;
	int iLocal_478 = 0;
	var uLocal_479[2] = { 0, 0 };
	int iLocal_480 = 0;
	var uLocal_481 = 0;
	int iLocal_482 = 0;
	int iLocal_483 = 0;
	int iLocal_484 = 0;
	int iLocal_485 = 0;
	int* iLocal_486[3] = { NULL, NULL, NULL };
	int* iLocal_487 = NULL;
	int* iLocal_488 = NULL;
	var uLocal_489[6] = { 0, 0, 0, 0, 0, 0 };
	var uLocal_490 = 4;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	int* iLocal_495 = NULL;
	int* iLocal_496 = NULL;
	int* iLocal_497 = NULL;
	int iLocal_498 = 0;
	int iLocal_499 = 0;
	char[] cLocal_500[8] = 0;
	char* sLocal_501 = NULL;
	int iLocal_502 = 0;
	int iLocal_503 = 0;
	int iLocal_504 = 0;
	char* sLocal_505 = NULL;
	char* sLocal_506 = NULL;
	int iLocal_507 = 0;
	float fLocal_508 = 0f;
	float fLocal_509 = 0f;
	float fLocal_510 = 0f;
	float fLocal_511 = 0f;
	float fLocal_512 = 0f;
	char* sLocal_513 = NULL;
	int iLocal_514 = 0;
	float fLocal_515 = 0f;
	float fLocal_516 = 0f;
	float fLocal_517 = 0f;
	struct<3> Local_518 = { 0, 0, 0 } ;
	struct<40> Local_519 = { 4, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0 } ;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	struct<20> Local_524 = { 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_539 = 16;
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
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
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
	var uLocal_678 = 0;
	var uLocal_679 = 0;
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
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	var uLocal_700 = 0;
	var uLocal_701 = 0;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = -1;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 1000;
	var uLocal_714 = 1000;
	var uLocal_715 = 0;
	int iLocal_716 = 0;
	int iLocal_717 = 0;
	int iLocal_718 = 0;
	int iLocal_719 = 0;
	int iLocal_720 = 0;
	bool bLocal_721 = 0;
	bool bLocal_722 = 0;
	bool bLocal_723 = 0;
	bool bLocal_724 = 0;
	int iLocal_725 = 0;
	int iLocal_726 = 0;
	int iLocal_727 = 0;
	int iLocal_728 = 0;
	int iLocal_729 = 0;
	int iLocal_730 = 0;
	int iLocal_731 = 0;
	bool bLocal_732 = 0;
	struct<7> Local_733[8];
	int iLocal_734 = 0;
	int iLocal_735 = 0;
	int iLocal_736 = 0;
	struct<3> Local_737[12];
	int iLocal_738 = 0;
	struct<3> Local_739[35];
	int iLocal_740 = 0;
	struct<3> Local_741[50];
	int iLocal_742 = 0;
	struct<4> Local_743[19];
	int iLocal_744 = 0;
	int iLocal_745 = 0;
	int iLocal_746 = 0;
	int iLocal_747 = 0;
	struct<282> Local_748 = { 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	float fLocal_749 = 0f;
	int iLocal_750 = 0;
	struct<2> Local_751 = { 0, 0 } ;
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = 2;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 2;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 20;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	var uLocal_764 = -1;
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
	var uLocal_779 = 0;
	var uLocal_780 = 0;
	var uLocal_781 = 0;
	var uLocal_782 = 0;
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
	var uLocal_794 = 1065353216;
	var uLocal_795 = 0;
	var uLocal_796 = 0;
	var uLocal_797 = 0;
	var uLocal_798 = 0;
	var uLocal_799 = 0;
	var uLocal_800 = 0;
	var uLocal_801 = 0;
	var uLocal_802 = 0;
	var uLocal_803 = 0;
	var uLocal_804 = 0;
	var uLocal_805 = 0;
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
	var uLocal_823 = 0;
	var uLocal_824 = 0;
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
	var uLocal_846 = 0;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	var uLocal_849 = 0;
	var uLocal_850 = 0;
	var uLocal_851 = 1065353216;
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
	var uLocal_863 = 0;
	var uLocal_864 = 0;
	var uLocal_865 = 0;
	var uLocal_866 = 0;
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
	var uLocal_878 = -1;
	var uLocal_879 = 0;
	var uLocal_880 = 0;
	var uLocal_881 = 0;
	var uLocal_882 = 0;
	var uLocal_883 = 0;
	var uLocal_884 = 0;
	var uLocal_885 = 0;
	var uLocal_886 = 0;
	var uLocal_887 = 0;
	var uLocal_888 = 0;
	var uLocal_889 = 0;
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
	var uLocal_905 = 0;
	var uLocal_906 = 0;
	var uLocal_907 = 0;
	var uLocal_908 = 1065353216;
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
	var uLocal_930 = 0;
	var uLocal_931 = 0;
	var uLocal_932 = 0;
	var uLocal_933 = 0;
	var uLocal_934 = 0;
	var uLocal_935 = -1;
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
	var uLocal_947 = 0;
	var uLocal_948 = 0;
	var uLocal_949 = 0;
	var uLocal_950 = 0;
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
	var uLocal_965 = 1065353216;
	var uLocal_966 = 0;
	var uLocal_967 = 0;
	var uLocal_968 = 0;
	var uLocal_969 = 0;
	var uLocal_970 = 0;
	var uLocal_971 = 0;
	var uLocal_972 = 0;
	var uLocal_973 = 0;
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
	var uLocal_989 = 0;
	var uLocal_990 = 0;
	var uLocal_991 = 0;
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
	var uLocal_1014 = 0;
	var uLocal_1015 = 0;
	var uLocal_1016 = 0;
	var uLocal_1017 = 0;
	var uLocal_1018 = 0;
	var uLocal_1019 = 0;
	var uLocal_1020 = 0;
	var uLocal_1021 = 0;
	var uLocal_1022 = 1065353216;
	var uLocal_1023 = 0;
	var uLocal_1024 = 0;
	var uLocal_1025 = 0;
	var uLocal_1026 = 0;
	var uLocal_1027 = 0;
	var uLocal_1028 = 0;
	var uLocal_1029 = 0;
	var uLocal_1030 = 0;
	var uLocal_1031 = 0;
	var uLocal_1032 = 0;
	var uLocal_1033 = 0;
	var uLocal_1034 = 0;
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
	var uLocal_1049 = -1;
	var uLocal_1050 = 0;
	var uLocal_1051 = 0;
	var uLocal_1052 = 0;
	var uLocal_1053 = 0;
	var uLocal_1054 = 0;
	var uLocal_1055 = 0;
	var uLocal_1056 = 0;
	var uLocal_1057 = 0;
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
	var uLocal_1073 = 0;
	var uLocal_1074 = 0;
	var uLocal_1075 = 0;
	var uLocal_1076 = 0;
	var uLocal_1077 = 0;
	var uLocal_1078 = 0;
	var uLocal_1079 = 1065353216;
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
	var uLocal_1098 = 0;
	var uLocal_1099 = 0;
	var uLocal_1100 = 0;
	var uLocal_1101 = 0;
	var uLocal_1102 = 0;
	var uLocal_1103 = 0;
	var uLocal_1104 = 0;
	var uLocal_1105 = 0;
	var uLocal_1106 = -1;
	var uLocal_1107 = 0;
	var uLocal_1108 = 0;
	var uLocal_1109 = 0;
	var uLocal_1110 = 0;
	var uLocal_1111 = 0;
	var uLocal_1112 = 0;
	var uLocal_1113 = 0;
	var uLocal_1114 = 0;
	var uLocal_1115 = 0;
	var uLocal_1116 = 0;
	var uLocal_1117 = 0;
	var uLocal_1118 = 0;
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
	var uLocal_1136 = 1065353216;
	var uLocal_1137 = 0;
	var uLocal_1138 = 0;
	var uLocal_1139 = 0;
	var uLocal_1140 = 0;
	var uLocal_1141 = 0;
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
	var uLocal_1157 = 0;
	var uLocal_1158 = 0;
	var uLocal_1159 = 0;
	var uLocal_1160 = 0;
	var uLocal_1161 = 0;
	var uLocal_1162 = 0;
	var uLocal_1163 = -1;
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
	var uLocal_1193 = 1065353216;
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
	var uLocal_1220 = -1;
	var uLocal_1221 = 0;
	var uLocal_1222 = 0;
	var uLocal_1223 = 0;
	var uLocal_1224 = 0;
	var uLocal_1225 = 0;
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
	var uLocal_1241 = 0;
	var uLocal_1242 = 0;
	var uLocal_1243 = 0;
	var uLocal_1244 = 0;
	var uLocal_1245 = 0;
	var uLocal_1246 = 0;
	var uLocal_1247 = 0;
	var uLocal_1248 = 0;
	var uLocal_1249 = 0;
	var uLocal_1250 = 1065353216;
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
	var uLocal_1266 = 0;
	var uLocal_1267 = 0;
	var uLocal_1268 = 0;
	var uLocal_1269 = 0;
	var uLocal_1270 = 0;
	var uLocal_1271 = 0;
	var uLocal_1272 = 0;
	var uLocal_1273 = 0;
	var uLocal_1274 = 0;
	var uLocal_1275 = 0;
	var uLocal_1276 = 0;
	var uLocal_1277 = -1;
	var uLocal_1278 = 0;
	var uLocal_1279 = 0;
	var uLocal_1280 = 0;
	var uLocal_1281 = 0;
	var uLocal_1282 = 0;
	var uLocal_1283 = 0;
	var uLocal_1284 = 0;
	var uLocal_1285 = 0;
	var uLocal_1286 = 0;
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
	var uLocal_1307 = 1065353216;
	var uLocal_1308 = 0;
	var uLocal_1309 = 0;
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
	var uLocal_1325 = 0;
	var uLocal_1326 = 0;
	var uLocal_1327 = 0;
	var uLocal_1328 = 0;
	var uLocal_1329 = 0;
	var uLocal_1330 = 0;
	var uLocal_1331 = 0;
	var uLocal_1332 = 0;
	var uLocal_1333 = 0;
	var uLocal_1334 = -1;
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
	var uLocal_1350 = 0;
	var uLocal_1351 = 0;
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
	var uLocal_1364 = 1065353216;
	var uLocal_1365 = 0;
	var uLocal_1366 = 0;
	var uLocal_1367 = 0;
	var uLocal_1368 = 0;
	var uLocal_1369 = 0;
	var uLocal_1370 = 0;
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
	var uLocal_1391 = -1;
	var uLocal_1392 = 0;
	var uLocal_1393 = 0;
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
	var uLocal_1409 = 0;
	var uLocal_1410 = 0;
	var uLocal_1411 = 0;
	var uLocal_1412 = 0;
	var uLocal_1413 = 0;
	var uLocal_1414 = 0;
	var uLocal_1415 = 0;
	var uLocal_1416 = 0;
	var uLocal_1417 = 0;
	var uLocal_1418 = 0;
	var uLocal_1419 = 0;
	var uLocal_1420 = 0;
	var uLocal_1421 = 1065353216;
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
	var uLocal_1434 = 0;
	var uLocal_1435 = 0;
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
	var uLocal_1448 = -1;
	var uLocal_1449 = 0;
	var uLocal_1450 = 0;
	var uLocal_1451 = 0;
	var uLocal_1452 = 0;
	var uLocal_1453 = 0;
	var uLocal_1454 = 0;
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
	var uLocal_1476 = 0;
	var uLocal_1477 = 0;
	var uLocal_1478 = 1065353216;
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
	var uLocal_1493 = 0;
	var uLocal_1494 = 0;
	var uLocal_1495 = 0;
	var uLocal_1496 = 0;
	var uLocal_1497 = 0;
	var uLocal_1498 = 0;
	var uLocal_1499 = 0;
	var uLocal_1500 = 0;
	var uLocal_1501 = 0;
	var uLocal_1502 = 0;
	var uLocal_1503 = 0;
	var uLocal_1504 = 0;
	var uLocal_1505 = -1;
	var uLocal_1506 = 0;
	var uLocal_1507 = 0;
	var uLocal_1508 = 0;
	var uLocal_1509 = 0;
	var uLocal_1510 = 0;
	var uLocal_1511 = 0;
	var uLocal_1512 = 0;
	var uLocal_1513 = 0;
	var uLocal_1514 = 0;
	var uLocal_1515 = 0;
	var uLocal_1516 = 0;
	var uLocal_1517 = 0;
	var uLocal_1518 = 0;
	var uLocal_1519 = 0;
	var uLocal_1520 = 0;
	var uLocal_1521 = 0;
	var uLocal_1522 = 0;
	var uLocal_1523 = 0;
	var uLocal_1524 = 0;
	var uLocal_1525 = 0;
	var uLocal_1526 = 0;
	var uLocal_1527 = 0;
	var uLocal_1528 = 0;
	var uLocal_1529 = 0;
	var uLocal_1530 = 0;
	var uLocal_1531 = 0;
	var uLocal_1532 = 0;
	var uLocal_1533 = 0;
	var uLocal_1534 = 0;
	var uLocal_1535 = 1065353216;
	var uLocal_1536 = 0;
	var uLocal_1537 = 0;
	var uLocal_1538 = 0;
	var uLocal_1539 = 0;
	var uLocal_1540 = 0;
	var uLocal_1541 = 0;
	var uLocal_1542 = 0;
	var uLocal_1543 = 0;
	var uLocal_1544 = 0;
	var uLocal_1545 = 0;
	var uLocal_1546 = 0;
	var uLocal_1547 = 0;
	var uLocal_1548 = 0;
	var uLocal_1549 = 0;
	var uLocal_1550 = 0;
	var uLocal_1551 = 0;
	var uLocal_1552 = 0;
	var uLocal_1553 = 0;
	var uLocal_1554 = 0;
	var uLocal_1555 = 0;
	var uLocal_1556 = 0;
	var uLocal_1557 = 0;
	var uLocal_1558 = 0;
	var uLocal_1559 = 0;
	var uLocal_1560 = 0;
	var uLocal_1561 = 0;
	var uLocal_1562 = -1;
	var uLocal_1563 = 0;
	var uLocal_1564 = 0;
	var uLocal_1565 = 0;
	var uLocal_1566 = 0;
	var uLocal_1567 = 0;
	var uLocal_1568 = 0;
	var uLocal_1569 = 0;
	var uLocal_1570 = 0;
	var uLocal_1571 = 0;
	var uLocal_1572 = 0;
	var uLocal_1573 = 0;
	var uLocal_1574 = 0;
	var uLocal_1575 = 0;
	var uLocal_1576 = 0;
	var uLocal_1577 = 0;
	var uLocal_1578 = 0;
	var uLocal_1579 = 0;
	var uLocal_1580 = 0;
	var uLocal_1581 = 0;
	var uLocal_1582 = 0;
	var uLocal_1583 = 0;
	var uLocal_1584 = 0;
	var uLocal_1585 = 0;
	var uLocal_1586 = 0;
	var uLocal_1587 = 0;
	var uLocal_1588 = 0;
	var uLocal_1589 = 0;
	var uLocal_1590 = 0;
	var uLocal_1591 = 0;
	var uLocal_1592 = 1065353216;
	var uLocal_1593 = 0;
	var uLocal_1594 = 0;
	var uLocal_1595 = 0;
	var uLocal_1596 = 0;
	var uLocal_1597 = 0;
	var uLocal_1598 = 0;
	var uLocal_1599 = 0;
	var uLocal_1600 = 0;
	var uLocal_1601 = 0;
	var uLocal_1602 = 0;
	var uLocal_1603 = 0;
	var uLocal_1604 = 0;
	var uLocal_1605 = 0;
	var uLocal_1606 = 0;
	var uLocal_1607 = 0;
	var uLocal_1608 = 0;
	var uLocal_1609 = 0;
	var uLocal_1610 = 0;
	var uLocal_1611 = 0;
	var uLocal_1612 = 0;
	var uLocal_1613 = 0;
	var uLocal_1614 = 0;
	var uLocal_1615 = 0;
	var uLocal_1616 = 0;
	var uLocal_1617 = 0;
	var uLocal_1618 = 0;
	var uLocal_1619 = -1;
	var uLocal_1620 = 0;
	var uLocal_1621 = 0;
	var uLocal_1622 = 0;
	var uLocal_1623 = 0;
	var uLocal_1624 = 0;
	var uLocal_1625 = 0;
	var uLocal_1626 = 0;
	var uLocal_1627 = 0;
	var uLocal_1628 = 0;
	var uLocal_1629 = 0;
	var uLocal_1630 = 0;
	var uLocal_1631 = 0;
	var uLocal_1632 = 0;
	var uLocal_1633 = 0;
	var uLocal_1634 = 0;
	var uLocal_1635 = 0;
	var uLocal_1636 = 0;
	var uLocal_1637 = 0;
	var uLocal_1638 = 0;
	var uLocal_1639 = 0;
	var uLocal_1640 = 0;
	var uLocal_1641 = 0;
	var uLocal_1642 = 0;
	var uLocal_1643 = 0;
	var uLocal_1644 = 0;
	var uLocal_1645 = 0;
	var uLocal_1646 = 0;
	var uLocal_1647 = 0;
	var uLocal_1648 = 0;
	var uLocal_1649 = 1065353216;
	var uLocal_1650 = 0;
	var uLocal_1651 = 0;
	var uLocal_1652 = 0;
	var uLocal_1653 = 0;
	var uLocal_1654 = 0;
	var uLocal_1655 = 0;
	var uLocal_1656 = 0;
	var uLocal_1657 = 0;
	var uLocal_1658 = 0;
	var uLocal_1659 = 0;
	var uLocal_1660 = 0;
	var uLocal_1661 = 0;
	var uLocal_1662 = 0;
	var uLocal_1663 = 0;
	var uLocal_1664 = 0;
	var uLocal_1665 = 0;
	var uLocal_1666 = 0;
	var uLocal_1667 = 0;
	var uLocal_1668 = 0;
	var uLocal_1669 = 0;
	var uLocal_1670 = 0;
	var uLocal_1671 = 0;
	var uLocal_1672 = 0;
	var uLocal_1673 = 0;
	var uLocal_1674 = 0;
	var uLocal_1675 = 0;
	var uLocal_1676 = -1;
	var uLocal_1677 = 0;
	var uLocal_1678 = 0;
	var uLocal_1679 = 0;
	var uLocal_1680 = 0;
	var uLocal_1681 = 0;
	var uLocal_1682 = 0;
	var uLocal_1683 = 0;
	var uLocal_1684 = 0;
	var uLocal_1685 = 0;
	var uLocal_1686 = 0;
	var uLocal_1687 = 0;
	var uLocal_1688 = 0;
	var uLocal_1689 = 0;
	var uLocal_1690 = 0;
	var uLocal_1691 = 0;
	var uLocal_1692 = 0;
	var uLocal_1693 = 0;
	var uLocal_1694 = 0;
	var uLocal_1695 = 0;
	var uLocal_1696 = 0;
	var uLocal_1697 = 0;
	var uLocal_1698 = 0;
	var uLocal_1699 = 0;
	var uLocal_1700 = 0;
	var uLocal_1701 = 0;
	var uLocal_1702 = 0;
	var uLocal_1703 = 0;
	var uLocal_1704 = 0;
	var uLocal_1705 = 0;
	var uLocal_1706 = 1065353216;
	var uLocal_1707 = 0;
	var uLocal_1708 = 0;
	var uLocal_1709 = 0;
	var uLocal_1710 = 0;
	var uLocal_1711 = 0;
	var uLocal_1712 = 0;
	var uLocal_1713 = 0;
	var uLocal_1714 = 0;
	var uLocal_1715 = 0;
	var uLocal_1716 = 0;
	var uLocal_1717 = 0;
	var uLocal_1718 = 0;
	var uLocal_1719 = 0;
	var uLocal_1720 = 0;
	var uLocal_1721 = 0;
	var uLocal_1722 = 0;
	var uLocal_1723 = 0;
	var uLocal_1724 = 0;
	var uLocal_1725 = 0;
	var uLocal_1726 = 0;
	var uLocal_1727 = 0;
	var uLocal_1728 = 0;
	var uLocal_1729 = 0;
	var uLocal_1730 = 0;
	var uLocal_1731 = 0;
	var uLocal_1732 = 0;
	var uLocal_1733 = -1;
	var uLocal_1734 = 0;
	var uLocal_1735 = 0;
	var uLocal_1736 = 0;
	var uLocal_1737 = 0;
	var uLocal_1738 = 0;
	var uLocal_1739 = 0;
	var uLocal_1740 = 0;
	var uLocal_1741 = 0;
	var uLocal_1742 = 0;
	var uLocal_1743 = 0;
	var uLocal_1744 = 0;
	var uLocal_1745 = 0;
	var uLocal_1746 = 0;
	var uLocal_1747 = 0;
	var uLocal_1748 = 0;
	var uLocal_1749 = 0;
	var uLocal_1750 = 0;
	var uLocal_1751 = 0;
	var uLocal_1752 = 0;
	var uLocal_1753 = 0;
	var uLocal_1754 = 0;
	var uLocal_1755 = 0;
	var uLocal_1756 = 0;
	var uLocal_1757 = 0;
	var uLocal_1758 = 0;
	var uLocal_1759 = 0;
	var uLocal_1760 = 0;
	var uLocal_1761 = 0;
	var uLocal_1762 = 0;
	var uLocal_1763 = 1065353216;
	var uLocal_1764 = 0;
	var uLocal_1765 = 0;
	var uLocal_1766 = 0;
	var uLocal_1767 = 0;
	var uLocal_1768 = 0;
	var uLocal_1769 = 0;
	var uLocal_1770 = 0;
	var uLocal_1771 = 0;
	var uLocal_1772 = 0;
	var uLocal_1773 = 0;
	var uLocal_1774 = 0;
	var uLocal_1775 = 0;
	var uLocal_1776 = 0;
	var uLocal_1777 = 0;
	var uLocal_1778 = 0;
	var uLocal_1779 = 0;
	var uLocal_1780 = 0;
	var uLocal_1781 = 0;
	var uLocal_1782 = 0;
	var uLocal_1783 = 0;
	var uLocal_1784 = 0;
	var uLocal_1785 = 0;
	var uLocal_1786 = 0;
	var uLocal_1787 = 0;
	var uLocal_1788 = 0;
	var uLocal_1789 = 0;
	var uLocal_1790 = -1;
	var uLocal_1791 = 0;
	var uLocal_1792 = 0;
	var uLocal_1793 = 0;
	var uLocal_1794 = 0;
	var uLocal_1795 = 0;
	var uLocal_1796 = 0;
	var uLocal_1797 = 0;
	var uLocal_1798 = 0;
	var uLocal_1799 = 0;
	var uLocal_1800 = 0;
	var uLocal_1801 = 0;
	var uLocal_1802 = 0;
	var uLocal_1803 = 0;
	var uLocal_1804 = 0;
	var uLocal_1805 = 0;
	var uLocal_1806 = 0;
	var uLocal_1807 = 0;
	var uLocal_1808 = 0;
	var uLocal_1809 = 0;
	var uLocal_1810 = 0;
	var uLocal_1811 = 0;
	var uLocal_1812 = 0;
	var uLocal_1813 = 0;
	var uLocal_1814 = 0;
	var uLocal_1815 = 0;
	var uLocal_1816 = 0;
	var uLocal_1817 = 0;
	var uLocal_1818 = 0;
	var uLocal_1819 = 0;
	var uLocal_1820 = 1065353216;
	var uLocal_1821 = 0;
	var uLocal_1822 = 0;
	var uLocal_1823 = 0;
	var uLocal_1824 = 0;
	var uLocal_1825 = 0;
	var uLocal_1826 = 0;
	var uLocal_1827 = 0;
	var uLocal_1828 = 0;
	var uLocal_1829 = 0;
	var uLocal_1830 = 0;
	var uLocal_1831 = 0;
	var uLocal_1832 = 0;
	var uLocal_1833 = 0;
	var uLocal_1834 = 0;
	var uLocal_1835 = 0;
	var uLocal_1836 = 0;
	var uLocal_1837 = 0;
	var uLocal_1838 = 0;
	var uLocal_1839 = 0;
	var uLocal_1840 = 0;
	var uLocal_1841 = 0;
	var uLocal_1842 = 0;
	var uLocal_1843 = 0;
	var uLocal_1844 = 0;
	var uLocal_1845 = 0;
	var uLocal_1846 = 0;
	var uLocal_1847 = -1;
	var uLocal_1848 = 0;
	var uLocal_1849 = 0;
	var uLocal_1850 = 0;
	var uLocal_1851 = 0;
	var uLocal_1852 = 0;
	var uLocal_1853 = 0;
	var uLocal_1854 = 0;
	var uLocal_1855 = 0;
	var uLocal_1856 = 0;
	var uLocal_1857 = 0;
	var uLocal_1858 = 0;
	var uLocal_1859 = 0;
	var uLocal_1860 = 0;
	var uLocal_1861 = 0;
	var uLocal_1862 = 0;
	var uLocal_1863 = 0;
	var uLocal_1864 = 0;
	var uLocal_1865 = 0;
	var uLocal_1866 = 0;
	var uLocal_1867 = 0;
	var uLocal_1868 = 0;
	var uLocal_1869 = 0;
	var uLocal_1870 = 0;
	var uLocal_1871 = 0;
	var uLocal_1872 = 0;
	var uLocal_1873 = 0;
	var uLocal_1874 = 0;
	var uLocal_1875 = 0;
	var uLocal_1876 = 0;
	var uLocal_1877 = 1065353216;
	var uLocal_1878 = 0;
	var uLocal_1879 = 0;
	var uLocal_1880 = 0;
	var uLocal_1881 = 0;
	var uLocal_1882 = 0;
	var uLocal_1883 = 0;
	var uLocal_1884 = 0;
	var uLocal_1885 = 0;
	var uLocal_1886 = 0;
	var uLocal_1887 = 0;
	var uLocal_1888 = 0;
	var uLocal_1889 = 0;
	var uLocal_1890 = 0;
	var uLocal_1891 = 0;
	var uLocal_1892 = 0;
	var uLocal_1893 = 0;
	var uLocal_1894 = 0;
	var uLocal_1895 = 0;
	var uLocal_1896 = 0;
	var uLocal_1897 = 0;
	var uLocal_1898 = 0;
	var uLocal_1899 = 0;
	var uLocal_1900 = 0;
	var uLocal_1901 = 16;
	var uLocal_1902 = 0;
	var uLocal_1903 = -1082130432;
	var uLocal_1904 = 0;
	var uLocal_1905 = -1082130432;
	var uLocal_1906 = 0;
	var uLocal_1907 = -1082130432;
	var uLocal_1908 = 0;
	var uLocal_1909 = -1082130432;
	var uLocal_1910 = 0;
	var uLocal_1911 = -1082130432;
	var uLocal_1912 = 0;
	var uLocal_1913 = -1082130432;
	var uLocal_1914 = 0;
	var uLocal_1915 = -1082130432;
	var uLocal_1916 = 0;
	var uLocal_1917 = -1082130432;
	var uLocal_1918 = 0;
	var uLocal_1919 = -1082130432;
	var uLocal_1920 = 0;
	var uLocal_1921 = -1082130432;
	var uLocal_1922 = 0;
	var uLocal_1923 = -1082130432;
	var uLocal_1924 = 0;
	var uLocal_1925 = -1082130432;
	var uLocal_1926 = 0;
	var uLocal_1927 = -1082130432;
	var uLocal_1928 = 0;
	var uLocal_1929 = -1082130432;
	var uLocal_1930 = 0;
	var uLocal_1931 = -1082130432;
	var uLocal_1932 = 0;
	var uLocal_1933 = -1082130432;
	var uLocal_1934 = 16;
	var uLocal_1935 = 0;
	var uLocal_1936 = -1082130432;
	var uLocal_1937 = 0;
	var uLocal_1938 = -1082130432;
	var uLocal_1939 = 0;
	var uLocal_1940 = -1082130432;
	var uLocal_1941 = 0;
	var uLocal_1942 = -1082130432;
	var uLocal_1943 = 0;
	var uLocal_1944 = -1082130432;
	var uLocal_1945 = 0;
	var uLocal_1946 = -1082130432;
	var uLocal_1947 = 0;
	var uLocal_1948 = -1082130432;
	var uLocal_1949 = 0;
	var uLocal_1950 = -1082130432;
	var uLocal_1951 = 0;
	var uLocal_1952 = -1082130432;
	var uLocal_1953 = 0;
	var uLocal_1954 = -1082130432;
	var uLocal_1955 = 0;
	var uLocal_1956 = -1082130432;
	var uLocal_1957 = 0;
	var uLocal_1958 = -1082130432;
	var uLocal_1959 = 0;
	var uLocal_1960 = -1082130432;
	var uLocal_1961 = 0;
	var uLocal_1962 = -1082130432;
	var uLocal_1963 = 0;
	var uLocal_1964 = -1082130432;
	var uLocal_1965 = 0;
	var uLocal_1966 = -1082130432;
	var uLocal_1967 = 0;
	var uLocal_1968 = 0;
	var uLocal_1969 = 0;
	var uLocal_1970 = 0;
	var uLocal_1971 = 0;
	var uLocal_1972 = 0;
	var uLocal_1973 = 0;
	var uLocal_1974 = 0;
	var uLocal_1975 = 0;
	var uLocal_1976 = 0;
	var uLocal_1977 = 0;
	var uLocal_1978 = 0;
	var uLocal_1979 = 0;
	var uLocal_1980 = 0;
	var uLocal_1981 = 0;
	var uLocal_1982 = 0;
	var uLocal_1983 = -1082130432;
	var uLocal_1984 = -1082130432;
	var uLocal_1985 = 1;
	var uLocal_1986 = 1;
	var uLocal_1987 = 1;
	var uLocal_1988 = -1;
	var uLocal_1989 = -1;
	var uLocal_1990 = -1;
	int iLocal_1991 = 0;
	int iLocal_1992 = 0;
	float fLocal_1993 = 0f;
	float fLocal_1994 = 0f;
	char* sLocal_1995 = NULL;
	char* sLocal_1996 = NULL;
	char* sLocal_1997 = NULL;
	float fLocal_1998 = 0f;
	float fLocal_1999 = 0f;
	float fLocal_2000 = 0f;
	float fLocal_2001 = 0f;
	int iLocal_2002 = 0;
	float fLocal_2003 = 0f;
	int iLocal_2004 = 0;
	int iLocal_2005 = 0;
	int iLocal_2006 = 0;
	int iLocal_2007 = 0;
	int iLocal_2008 = 0;
	float fLocal_2009 = 0f;
	float fLocal_2010 = 0f;
	float fLocal_2011 = 0f;
	float fLocal_2012 = 0f;
	int iLocal_2013 = 0;
	int iLocal_2014 = 0;
	int iLocal_2015 = 0;
	int iLocal_2016 = 0;
	int iLocal_2017 = 0;
	int iLocal_2018 = 0;
	char* sLocal_2019 = NULL;
	int iLocal_2020 = 0;
	int iLocal_2021 = 0;
	int iLocal_2022 = 0;
	int iLocal_2023 = 0;
	int iLocal_2024 = 0;
	int iLocal_2025 = 0;
	int iLocal_2026 = 0;
	int iLocal_2027 = 0;
	int* iLocal_2028 = NULL;
	int iLocal_2029 = 0;
	int iLocal_2030 = 0;
	float fLocal_2031 = 0f;
	int iLocal_2032 = 0;
	int iLocal_2033 = 0;
	int iLocal_2034 = 0;
	int iLocal_2035 = 0;
	int iLocal_2036 = 0;
	int iLocal_2037 = 0;
	int iLocal_2038 = 0;
	int iLocal_2039 = 0;
	int iLocal_2040 = 0;
	bool bLocal_2041 = 0;
	struct<5> Local_2042 = { 0, 0, 0, 0, 0 } ;
	var uLocal_2043 = 0;
	var uLocal_2044 = 0;
	var uLocal_2045 = 21;
	var uLocal_2046 = 6;
	var uLocal_2047 = 0;
	var uLocal_2048 = 0;
	var uLocal_2049 = 0;
	int iLocal_2050 = 0;
	int iLocal_2051 = 0;
	int iLocal_2052 = 0;
	char* sLocal_2053 = NULL;
	char* sLocal_2054 = NULL;
	int iLocal_2055 = 0;
	float fLocal_2056 = 0f;
	int iLocal_2057 = 0;
	int iLocal_2058 = 0;
	bool bLocal_2059 = 0;
	int iLocal_2060 = 0;
	int iLocal_2061 = 0;
	int iLocal_2062 = 0;
	int iLocal_2063 = 0;
	bool bLocal_2064 = 0;
	float fLocal_2065 = 0f;
	float fLocal_2066 = 0f;
	int iLocal_2067 = 0;
	int iLocal_2068 = 0;
	int iLocal_2069 = 0;
	int iLocal_2070 = 0;
	int iLocal_2071 = 0;
	int iLocal_2072 = 0;
	int iLocal_2073 = 0;
	int iLocal_2074 = 0;
	struct<3> Local_2075 = { 0, 0, 0 } ;
	int iLocal_2076 = 0;
	int iLocal_2077 = 0;
	int iLocal_2078 = 0;
	int iLocal_2079 = 0;
	int iLocal_2080 = 0;
	int iLocal_2081 = 0;
	int iLocal_2082 = 0;
	int iLocal_2083 = 0;
	int iLocal_2084 = 0;
	bool bLocal_2085 = 0;
	int iLocal_2086 = 0;
	int iLocal_2087 = 0;
	int iLocal_2088[5] = { 0, 0, 0, 0, 0 };
	int iLocal_2089[5] = { 0, 0, 0, 0, 0 };
	int iLocal_2090 = 0;
	int iLocal_2091 = 0;
	var uLocal_2092 = 0;
	var uLocal_2093 = 0;
	int iLocal_2094 = 0;
	struct<3> Local_2095 = { 0, 0, 0 } ;
	int iLocal_2096 = 0;
	int iLocal_2097 = 0;
	float fLocal_2098 = 0f;
	int iLocal_2099 = 0;
	int iLocal_2100 = 0;
	int iLocal_2101 = 0;
	int iLocal_2102 = 0;
	int iLocal_2103 = 0;
	int iLocal_2104 = 0;
	int iLocal_2105 = 0;
	int iLocal_2106 = 0;
	int iLocal_2107 = 0;
	int iLocal_2108 = 0;
	int iLocal_2109 = 0;
	int iLocal_2110 = 0;
	int iLocal_2111 = 0;
	struct<3> Local_2112 = { 0, 0, 0 } ;
	float fLocal_2113 = 0f;
	float fLocal_2114 = 0f;
	float fLocal_2115 = 0f;
	int iLocal_2116 = 0;
	int iLocal_2117 = 0;
	float fLocal_2118 = 0f;
	float fLocal_2119 = 0f;
	int iLocal_2120 = 0;
	float fLocal_2121 = 0f;
	float fLocal_2122 = 0f;
	int iLocal_2123 = 0;
	bool bLocal_2124 = 0;
	int iLocal_2125 = 0;
	int iLocal_2126 = 0;
	float fLocal_2127 = 0f;
	int iLocal_2128 = 0;
	int iLocal_2129 = 0;
	int iLocal_2130 = 0;
	struct<3> Local_2131 = { 0, 0, 0 } ;
	int iLocal_2132 = 0;
	int iLocal_2133 = 0;
	int iLocal_2134 = 0;
	int iLocal_2135 = 0;
	int iLocal_2136 = 0;
	int iLocal_2137 = 0;
	int iLocal_2138 = 0;
	int iLocal_2139 = 0;
#endregion
void __EntryFunction__()//Position - 0x0
{
	int iVar0;
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
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	iLocal_46 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	iLocal_47 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	fLocal_48 = 1f;
	Local_67 = { 0f, 0f, 0f };
	Local_68 = { 0f, 0f, 0f };
	iLocal_69 = -1;
	Local_84 = { 210.75f, -2006.8f, 20.2f };
	Local_85 = { 0f, 0f, 50f };
	bLocal_93 = true;
	bLocal_100 = true;
	bLocal_122 = true;
	fLocal_143 = 120f;
	fLocal_144 = 0f;
	fLocal_146 = 1f;
	fLocal_147 = 0f;
	fLocal_148 = 1f;
	fLocal_149 = 30f;
	fLocal_151 = 1f;
	fLocal_152 = 5f;
	fLocal_153 = 1f;
	fLocal_154 = 1f;
	fLocal_155 = 100f;
	fLocal_156 = 100f;
	fLocal_157 = 0f;
	fLocal_158 = 7000f;
	fLocal_159 = 0f;
	fLocal_160 = 0f;
	fLocal_161 = 0.3f;
	fLocal_162 = 0.5f;
	fLocal_163 = 50f;
	iLocal_174 = -1;
	iLocal_182 = -1;
	iLocal_183 = -1;
	fLocal_258 = 26f;
	fLocal_260 = 0.5f;
	fLocal_261 = 1.75f;
	Local_295 = { 712.3005f, -964.644f, 29.3953f };
	Local_296 = { 713.8555f, -962.8375f, 29.3956f };
	Local_297 = { 706.1772f, -966.1973f, 29.4598f };
	Local_298 = { 706.4446f, -963.6882f, 29.4181f };
	Local_303 = { 716.7158f, -987.8787f, 23.1366f };
	Local_304 = { 726.6455f, -980.41f, 23.1478f };
	Local_305 = { 726.4868f, -987.6694f, 23.1752f };
	Local_307 = { -579.8401f, -279.824f, 34.1553f };
	Local_308 = { -668.3368f, -228.1611f, 36.1767f };
	Local_309 = { -655.8611f, -196.5738f, 36.5397f };
	Local_310 = { -590.6932f, -227.4862f, 35.4301f };
	Local_311 = { -669.2445f, -226.8173f, 36.1665f };
	Local_312 = { -627.515f, -231.408f, 37.022f };
	Local_313 = { 0f, 0f, -21f };
	Local_315 = { 0f, 0f, 0f };
	Local_316 = { 0f, 0f, 0f };
	Local_317 = { 717.1673f, -965.0396f, 29.4338f };
	Local_318 = { -634.1773f, -239.6257f, 37.1375f };
	Local_319 = { -573.496f, -290.6799f, 34.1626f };
	Local_320 = { -633.7017f, -237.1157f, 36.994f };
	Local_321 = { -631.645f, -237.565f, 37.107f };
	Local_322 = { 542.7192f, -890.5296f, 11.8885f };
	Local_323 = { 1090.2834f, -245.7385f, 56.7453f };
	Local_324 = { 659.3379f, -775.9125f, 22.532f };
	Local_325 = { -657.5221f, -224.0321f, 36.7346f };
	Local_326 = { -657.3683f, -211.9329f, 36.2962f };
	Local_331 = { -631.96f, -236.34f, 38.21f };
	Local_332 = { 0f, 0f, 125.98f };
	Local_333 = { 636.5427f, -1846.3568f, 8.8126f };
	fLocal_334 = 175.6148f;
	Local_335 = { 648.2646f, -1843.4121f, 8.1401f };
	fLocal_340 = 0f;
	iLocal_344 = joaat("A_C_Seagull");
	sLocal_345 = "creatures@gull@move";
	bLocal_382 = true;
	iLocal_411 = 19;
	iLocal_421 = 1;
	fLocal_423 = 1f;
	fLocal_466 = 1f;
	iLocal_478 = joaat("GtaMloRoom01");
	cLocal_500 = "JHAUD";
	sLocal_501 = "H3HEIST";
	fLocal_508 = 0f;
	fLocal_509 = 0f;
	fLocal_510 = 0f;
	fLocal_511 = 0f;
	fLocal_512 = 0f;
	fLocal_515 = 0f;
	fLocal_516 = 0f;
	fLocal_517 = 0f;
	Local_518 = { 0f, 0f, 0f };
	iLocal_720 = -1;
	iLocal_1992 = 1000;
	fLocal_1993 = 0f;
	fLocal_1994 = 0f;
	sLocal_1995 = "missHeist_Jewel@Switch";
	sLocal_1996 = "switchcam_incar_buddy";
	sLocal_1997 = "switchcam_incar_mic";
	fLocal_1998 = 3600f;
	fLocal_1999 = 6000f;
	fLocal_2000 = 30f;
	fLocal_2001 = 0.9f;
	iLocal_2002 = 3000;
	fLocal_2003 = 2000f;
	iLocal_2008 = -1;
	fLocal_2009 = 0.61f;
	fLocal_2010 = 0.74f;
	fLocal_2011 = 0.61f;
	fLocal_2012 = 0.74f;
	sLocal_2019 = "shake_cam_all@";
	fLocal_2031 = 0.05f;
	fLocal_2056 = 0f;
	fLocal_2065 = 1f;
	fLocal_2066 = 1f;
	iLocal_2072 = 1;
	bLocal_2085 = true;
	fLocal_2098 = 0f;
	Local_2112 = { -51.2869f, -553.8421f, 29.2955f };
	fLocal_2119 = 0.01f;
	fLocal_2121 = 0f;
	func_1145(0, 4);
	func_1144(0, 4);
	func_1143(0, 0);
	func_1143(0, 1);
	__LIB_17__::func_738(0, 1, (1000 - Global_96866) * 5);
	MISC::SET_MISSION_FLAG(true);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		__LIB_13__::func_803(0, iLocal_88);
		__LIB_13__::func_803(1, iLocal_89);
		func_1139();
		func_1131();
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	func_1129(0);
	switch (__LIB_0__::func_566(7))
	{
		case 1:
			bLocal_382 = true;
			break;
		case 2:
			bLocal_382 = false;
			break;
	}
	__LIB_0__::func_544(88, 1, 0, 1, 0);
	__LIB_0__::func_544(89, 1, 0, 1, 0);
	while (true)
	{
		func_1122();
		switch (iLocal_369)
		{
			case 0:
				StringCopy(&Local_286, __LIB_42__::func_591(__LIB_16__::func_594(0, 0)), 16);
				StringCopy(&Local_289, __LIB_42__::func_591(__LIB_16__::func_594(0, 1)), 16);
				func_1106();
				if (__LIB_0__::func_323())
				{
					iLocal_369 = __LIB_0__::func_344();
					iVar0 = __LIB_0__::func_344();
					if (bLocal_382)
					{
						switch (iVar0)
						{
							case 0:
							case 1:
								iLocal_369 = 3;
								break;
							case 2:
								iLocal_369 = 4;
								break;
							case 3:
								iLocal_369 = 7;
								break;
							case 4:
								iLocal_369 = 9;
								break;
							case 5:
								iLocal_369 = 10;
								break;
							case 6:
								iLocal_369 = 11;
								break;
							case 7:
								iLocal_369 = 13;
								break;
							case 8:
								iLocal_369 = 14;
								break;
						}
					}
					else
					{
						switch (iVar0)
						{
							case 0:
							case 1:
								iLocal_369 = 3;
								break;
							case 2:
								iLocal_369 = 7;
								break;
							case 3:
								iLocal_369 = 9;
								break;
							case 4:
								iLocal_369 = 10;
								break;
							case 5:
								iLocal_369 = 11;
								break;
							case 6:
								iLocal_369 = 13;
								break;
							case 7:
								iLocal_369 = 14;
								break;
							}
					}
					iLocal_369 = func_1103(&iLocal_369);
					func_1098(1);
					iLocal_383 = 0;
					iLocal_413 = Global_100441.f_12[0];
					iLocal_719 = iLocal_413;
					MISC::CLEAR_AREA(Local_518, 5000f, true, true, false, false);
					func_1086(1);
				}
				else
				{
					Global_96865 = 1;
					Global_96863 = 0;
					iLocal_369 = 2;
				}
				break;
		}
		if (func_1084())
		{
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				func_1074();
			}
		}
		func_1067();
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("M_TheJewelStoreJob", 0);
		switch (iLocal_369)
		{
			case 2:
				if (func_1011())
				{
					iLocal_369 = 3;
				}
				break;
			case 3:
				if (bLocal_382)
				{
					if (func_1008())
					{
						iLocal_369 = 4;
					}
				}
				else if (func_1001())
				{
					iLocal_369 = 6;
				}
				break;
			case 4:
				if (func_997())
				{
					iLocal_369 = 5;
				}
				break;
			case 5:
				if (func_996())
				{
					iLocal_369 = 7;
				}
				break;
			case 6:
				if (func_987())
				{
					iLocal_369 = 7;
				}
				break;
			case 7:
				if (func_942())
				{
					iLocal_369 = 8;
				}
				break;
			case 8:
				if (func_937())
				{
					iLocal_369 = 9;
				}
				break;
			case 9:
			case 10:
			case 11:
				if (func_894())
				{
					iLocal_369 = 12;
				}
				break;
			case 12:
				if (func_753())
				{
					iLocal_369 = 13;
				}
				break;
			case 13:
				if (func_703())
				{
					iLocal_369 = 14;
				}
				break;
			case 14:
				if (func_564())
				{
					iLocal_369 = 15;
				}
				break;
			case 15:
				func_134();
				break;
			case 16:
				if (func_8())
				{
					func_1074();
				}
				break;
		}
		func_1();
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x80F
{
	if (iLocal_401)
	{
		__LIB_1__::func_910();
		if (iLocal_719 < iLocal_413)
		{
			if (iLocal_720 == -1)
			{
				iLocal_720 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FRONTEND(iLocal_720, "ROBBERY_MONEY_TOTAL", "HUD_FRONTEND_CUSTOM_SOUNDSET", true);
			}
			iLocal_719 = (iLocal_719 + SYSTEM::ROUND((0f + (255000f * SYSTEM::TIMESTEP()))));
		}
		else
		{
			iLocal_720 = -1;
			iLocal_719 = iLocal_413;
		}
		if (iLocal_719 < 3300000 && iLocal_369 == 7)
		{
			__LIB_2__::func_131(iLocal_719, "CMN_TAKE" /* GXT: TAKE */, 1000, 6, 2, 0, "HUD_CASH" /* GXT: $~1~ */, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
		}
		else
		{
			__LIB_2__::func_131(iLocal_719, "CMN_TAKE" /* GXT: TAKE */, 1000, 18, 2, 0, "HUD_CASH" /* GXT: $~1~ */, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
		}
	}
}

int func_8()//Position - 0xBE3
{
	if (!iLocal_383)
	{
		func_133();
		func_129(1, 0);
		func_126(0, 1, 1, 1);
		func_125(joaat("WEAPON_PISTOL"), 1, 1, 0);
		iLocal_401 = 0;
		CUTSCENE::REMOVE_CUTSCENE();
		SYSTEM::WAIT(0);
		iLocal_416 = 0;
		while (iLocal_416 <= 24)
		{
			iLocal_408[iLocal_416] = 0;
			iLocal_416++;
		}
		VEHICLE::SET_RANDOM_TRAINS(false);
		func_114();
		func_111(800, 0, 0);
		iLocal_417 = 0;
		iLocal_384 = 0;
		iLocal_383 = 1;
	}
	else
	{
		PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		switch (iLocal_417)
		{
			case 0:
				SYSTEM::SETTIMERA(0);
				CUTSCENE::REQUEST_CUTSCENE("JH_2_ARREST_FAIL_C", 8);
				__LIB_0__::func_532(1, 1, 1, 0, 0, 0, 0);
				iLocal_417++;
				break;
			case 1:
				if (bLocal_382)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("JH2A_MISSION_FAIL");
				}
				else
				{
					AUDIO::TRIGGER_MUSIC_EVENT("JH2B_MISSION_FAIL");
				}
				if (!ENTITY::IS_ENTITY_DEAD(func_94(0), false))
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Michael", func_94(0), 0);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_436[0], false))
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("driver_selection", iLocal_436[0], 0);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_436[1], false))
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("gunman_selection_1", iLocal_436[1], 0);
				}
				if (bLocal_382)
				{
					__LIB_17__::func_43("Franklin", joaat("Player_One"), 8);
				}
				else
				{
					__LIB_17__::func_43("Franklin", joaat("Player_One"), 18);
				}
				if (CUTSCENE::HAS_CUTSCENE_LOADED() && !AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					if (!ENTITY::IS_ENTITY_DEAD(func_94(1), false))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(func_94(1), "Franklin", 0, 0, 0);
					}
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_436[0], false))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_436[0], "driver_selection", 0, 0, 0);
					}
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_436[1], false))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_436[1], "gunman_selection_1", 0, 0, 0);
					}
					if (Local_748.f_0 == joaat("bati2"))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "drivers_bike", 3, Local_748.f_0, 0);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "gunmans_bike", 3, Local_748.f_0, 0);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "franklins_getaway_bike", 3, Local_748.f_0, 0);
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_456[0], false))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_456[0], "drivers_bati", 0, 0, 0);
						}
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_456[1], false))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_456[1], "gunmans_bati", 0, 0, 0);
						}
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_456[2], false))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_456[2], "franklins_getaway_bati", 0, 0, 0);
						}
					}
					else
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "drivers_bati", 3, Local_748.f_0, 0);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "gunmans_bati", 3, Local_748.f_0, 0);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "franklins_getaway_bati", 3, Local_748.f_0, 0);
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_456[0], false))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_456[0], "drivers_bike", 0, 0, 0);
						}
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_456[1], false))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_456[1], "gunmans_bike", 0, 0, 0);
						}
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_456[2], false))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_456[2], "franklins_getaway_bike", 0, 0, 0);
						}
					}
					CUTSCENE::SET_CUTSCENE_FADE_VALUES(false, false, true, false);
					CUTSCENE::START_CUTSCENE(0);
					iLocal_417++;
				}
				break;
			case 2:
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					CUTSCENE::SET_CUTSCENE_FADE_VALUES(false, false, true, false);
					func_9(func_94(0), 0, 0);
					OBJECT::DELETE_OBJECT(&iLocal_475);
					PED::DELETE_PED(&iLocal_276);
					VEHICLE::DELETE_VEHICLE(&iLocal_460);
					PED::DELETE_PED(&(iLocal_436[2]));
					iLocal_417++;
				}
				break;
			case 3:
				iLocal_2101 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("police_left", joaat("police")));
				iLocal_2102 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("police_right", joaat("police")));
				iLocal_2103 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("rear_police", joaat("police")));
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_2101, false) && iLocal_2104 == 0)
				{
					AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_2101, true);
					VEHICLE::SET_VEHICLE_SIREN(iLocal_2101, true);
					iLocal_2104 = 1;
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_2102, false) && iLocal_2105 == 0)
				{
					AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_2102, true);
					VEHICLE::SET_VEHICLE_SIREN(iLocal_2102, true);
					iLocal_2105 = 1;
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_2103, false) && iLocal_2106 == 0)
				{
					AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_2103, true);
					VEHICLE::SET_VEHICLE_SIREN(iLocal_2103, true);
					iLocal_2106 = 1;
				}
				if (CUTSCENE::GET_CUTSCENE_TIME() > 13000)
				{
					__LIB_0__::func_532(0, 1, 1, 0, 0, 0, 0);
					iLocal_285 = 26;
					func_1074();
				}
				break;
		}
		if (iLocal_417 >= 4)
		{
			iLocal_285 = 26;
			WEAPON::REMOVE_WEAPON_ASSET(joaat("WEAPON_PISTOL"));
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			iLocal_383 = 0;
			iLocal_384 = 0;
			return 1;
		}
	}
	return 0;
}

void func_9(int iParam0, bool bParam1, bool bParam2)//Position - 0x102E
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (iParam0 == func_94(0) || iParam0 == func_94(1))
		{
			if (bParam1)
			{
				if (iParam0 == func_94(0))
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 9, 1, 0, 0);
				}
				else
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 9, 6, 0, 0);
				}
			}
			else
			{
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 9, 0, 0, 0);
			}
		}
		else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("HC_Gunman"))
		{
			if (bParam1)
			{
				if (bParam2)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 9, 4, 0, 0);
				}
				else
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 9, 4, 0, 0);
				}
			}
			else
			{
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 9, 0, 0, 0);
			}
		}
		else if (bParam1)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 9, 1, 0, 0);
		}
		else
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 9, 0, 0, 0);
		}
	}
}

int func_94(int iParam0)//Position - 0x1B377
{
	switch (iParam0)
	{
		case 0:
			if (__LIB_0__::func_682(__LIB_15__::func_944()) == 0)
			{
				return PLAYER::PLAYER_PED_ID();
			}
			else
			{
				return Local_519[0];
			}
			break;
		case 1:
			if (__LIB_0__::func_682(__LIB_15__::func_944()) == 1)
			{
				return PLAYER::PLAYER_PED_ID();
			}
			else
			{
				return Local_519[1];
			}
			break;
		case 2:
			if (__LIB_0__::func_682(__LIB_15__::func_944()) == 2)
			{
				return PLAYER::PLAYER_PED_ID();
			}
			else
			{
				return Local_519[2];
			}
			break;
	}
	return PLAYER::PLAYER_PED_ID();
}

void func_111(int iParam0, bool bParam1, bool bParam2)//Position - 0x1B883
{
	if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
	{
		__LIB_37__::func_92();
		CAM::DO_SCREEN_FADE_IN(iParam0);
	}
	if (bParam1)
	{
		while (CAM::IS_SCREEN_FADING_IN())
		{
			if (bParam2)
			{
				func_112(0);
			}
			else
			{
				SYSTEM::WAIT(0);
			}
		}
	}
}

void func_112(int iParam0)//Position - 0x1B8C7
{
	func_1();
	SYSTEM::WAIT(iParam0);
	func_1084();
}

void func_114()//Position - 0x1B8F5
{
	func_121(func_94(0), __LIB_13__::func_103("0"), "MICHAEL");
	func_121(func_94(1), __LIB_13__::func_103("1"), "FRANKLIN");
	if (func_120())
	{
		func_121(iLocal_436[0], 3, "EDDIE");
	}
	else if (func_119())
	{
		func_121(iLocal_436[0], 3, "TALINA");
	}
	else if (func_118())
	{
		func_121(iLocal_436[0], 3, "KARIM");
	}
	if (func_117())
	{
		func_121(iLocal_436[1], 4, "PACKIE");
	}
	else if (func_116())
	{
		func_121(iLocal_436[1], 4, "GUSTAVO");
	}
	else if (func_115())
	{
		func_121(iLocal_436[1], 4, "NORM");
	}
	func_121(iLocal_438[0], __LIB_13__::func_103("5"), "JewelSales");
	func_121(iLocal_437, __LIB_13__::func_103("6"), "JewelGuard");
	if (iLocal_369 < 7)
	{
		switch (__LIB_16__::func_594(0, 2))
		{
			case 6:
				func_121(iLocal_436[2], 7, "PAIGE");
				break;
			case 7:
				func_121(iLocal_436[2], 7, "CHRISTIAN");
				break;
			case 12:
				func_121(iLocal_436[2], 7, "LIEngineer");
				break;
		}
	}
	else
	{
		switch (__LIB_16__::func_594(0, 2))
		{
			case 6:
				func_121(0, 7, "PAIGE");
				break;
			case 7:
				func_121(0, 7, "CHRISTIAN");
				break;
			case 12:
				func_121(0, 7, "LIEngineer");
				break;
			}
	}
	func_121(iLocal_440, 8, "JewelManager");
	func_121(iLocal_438[1], __LIB_13__::func_103("B"), "JewelShop0");
	func_121(iLocal_438[2], __LIB_13__::func_103("C"), "JewelShop1");
	func_121(0, __LIB_13__::func_103("D"), "POLICE" /* GXT: Police Cruiser */);
	func_121(iLocal_443, __LIB_13__::func_103("E"), "LESTER");
}

bool func_115()//Position - 0x1BADE
{
	return __LIB_16__::func_594(0, 1) == 4;
}

bool func_116()//Position - 0x1BAEE
{
	return __LIB_16__::func_594(0, 1) == 1;
}

bool func_117()//Position - 0x1BAFE
{
	return __LIB_16__::func_594(0, 1) == 10;
}

bool func_118()//Position - 0x1BB0F
{
	return __LIB_16__::func_594(0, 0) == 9;
}

bool func_119()//Position - 0x1BB20
{
	return __LIB_16__::func_594(0, 0) == 13;
}

bool func_120()//Position - 0x1BB31
{
	return __LIB_16__::func_594(0, 0) == 8;
}

void func_121(int iParam0, int iParam1, char* sParam2)//Position - 0x1BB42
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !PED::IS_PED_INJURED(iParam0))
	{
		__LIB_0__::func_222(&uLocal_539, iParam1, iParam0, sParam2, 0, 1);
	}
	else
	{
		__LIB_0__::func_221(&uLocal_539, iParam1);
		__LIB_0__::func_222(&uLocal_539, iParam1, 0, sParam2, 0, 1);
	}
}

void func_125(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x1BEDD
{
	WEAPON::REQUEST_WEAPON_ASSET(iParam0, 31, iParam3);
	if (bParam1)
	{
		while (!WEAPON::HAS_WEAPON_ASSET_LOADED(iParam0))
		{
			if (bParam2)
			{
				func_112(0);
			}
			else
			{
				SYSTEM::WAIT(0);
			}
		}
	}
}

void func_126(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x1BF13
{
	__LIB_17__::func_781(__LIB_16__::func_594(iParam0, iParam1));
	if (bParam2)
	{
		while (!__LIB_17__::func_780(__LIB_16__::func_594(iParam0, iParam1)))
		{
			if (bParam3)
			{
				func_112(0);
			}
			else
			{
				SYSTEM::WAIT(0);
			}
		}
	}
}

void func_129(bool bParam0, bool bParam1)//Position - 0x1BF7D
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (iLocal_738 - 1))
	{
		if (Local_739[iVar0 /*3*/] != 0)
		{
			if (Local_739[iVar0 /*3*/].f_1)
			{
				if (!Local_739[iVar0 /*3*/].f_2)
				{
					func_132(Local_739[iVar0 /*3*/], 1, bParam0, bParam1);
					Local_739[iVar0 /*3*/].f_2 = 1;
				}
			}
			else if (Local_739[iVar0 /*3*/].f_2)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_739[iVar0 /*3*/]);
				Local_739[iVar0 /*3*/].f_2 = 0;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_740 - 1))
	{
		if (!MISC::ARE_STRINGS_EQUAL(Local_741[iVar0 /*3*/], "missing"))
		{
			if (Local_741[iVar0 /*3*/].f_1)
			{
				if (!Local_741[iVar0 /*3*/].f_2)
				{
					func_131(Local_741[iVar0 /*3*/], 1, bParam0, bParam1);
					Local_741[iVar0 /*3*/].f_2 = 1;
				}
			}
			else if (Local_741[iVar0 /*3*/].f_2)
			{
				STREAMING::REMOVE_ANIM_DICT(Local_741[iVar0 /*3*/]);
				Local_741[iVar0 /*3*/].f_2 = 0;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_742 - 1))
	{
		if (!MISC::ARE_STRINGS_EQUAL(Local_743[iVar0 /*4*/], "missing") && Local_743[iVar0 /*4*/].f_1 != -1)
		{
			if (Local_743[iVar0 /*4*/].f_2)
			{
				if (!Local_743[iVar0 /*4*/].f_3)
				{
					func_130(Local_743[iVar0 /*4*/].f_1, Local_743[iVar0 /*4*/], 1, bParam0, bParam1);
					Local_743[iVar0 /*4*/].f_3 = 1;
				}
			}
			else if (Local_743[iVar0 /*4*/].f_3)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(Local_743[iVar0 /*4*/].f_1, Local_743[iVar0 /*4*/]);
				Local_743[iVar0 /*4*/].f_3 = 0;
			}
		}
		iVar0++;
	}
}

void func_130(int iParam0, char* sParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x1C120
{
	VEHICLE::REQUEST_VEHICLE_RECORDING(iParam0, sParam1);
	if (bParam2)
	{
		while (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam0, sParam1))
		{
			if (bParam4)
			{
				HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
			}
			if (bParam3)
			{
				func_112(0);
			}
			else
			{
				SYSTEM::WAIT(0);
			}
		}
	}
}

void func_131(char* sParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x1C164
{
	STREAMING::REQUEST_ANIM_DICT(sParam0);
	if (bParam1)
	{
		while (!STREAMING::HAS_ANIM_DICT_LOADED(sParam0))
		{
			if (bParam3)
			{
				HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
			}
			if (bParam2)
			{
				func_112(0);
			}
			else
			{
				SYSTEM::WAIT(0);
			}
		}
	}
}

void func_132(int iParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x1C1A4
{
	STREAMING::REQUEST_MODEL(iParam0);
	if (bParam1)
	{
		while (!STREAMING::HAS_MODEL_LOADED(iParam0))
		{
			if (bParam3)
			{
				HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
			}
			if (bParam2)
			{
				func_112(0);
			}
			else
			{
				SYSTEM::WAIT(0);
			}
		}
	}
}

void func_133()//Position - 0x1C1E4
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (iLocal_738 - 1))
	{
		Local_739[iVar0 /*3*/].f_1 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_740 - 1))
	{
		Local_741[iVar0 /*3*/].f_1 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_742 - 1))
	{
		Local_743[iVar0 /*4*/].f_2 = 0;
		iVar0++;
	}
}

void func_134()//Position - 0x1C24C
{
	func_9(func_94(0), 0, 0);
	if (!ENTITY::IS_ENTITY_DEAD(func_94(1), false))
	{
		PED::REMOVE_PED_HELMET(func_94(1), false);
	}
	if (bLocal_382)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("JH2A_MISSION_FAIL");
	}
	else
	{
		AUDIO::TRIGGER_MUSIC_EVENT("JH2B_MISSION_FAIL");
	}
	CLOCK::SET_CLOCK_TIME(6, 0, 0);
	func_557(func_94(1));
	__LIB_0__::func_433(0, -1, 1);
	Global_100480.f_8 = 1;
	func_550();
	PED::CLEAR_PED_WETNESS(func_94(1));
	PED::CLEAR_PED_BLOOD_DAMAGE(func_94(1));
	PED::RESET_PED_VISIBLE_DAMAGE(func_94(1));
	if (!ENTITY::DOES_ENTITY_EXIST(func_94(1)) || PED::IS_PED_INJURED(func_94(1)))
	{
		PED::DELETE_PED(&(Local_519[1]));
		while (!func_325(&(Local_519[1]), 1, 117.2587f, -1285.1025f, 27.2705f, 98.4916f, 1, 0, 0))
		{
			SYSTEM::WAIT(0);
		}
	}
	while (!__LIB_16__::func_939(&iLocal_2027, 1, 138.1478f, -1301.5951f, 28.1939f, 120.2019f, 0, 1))
	{
		SYSTEM::WAIT(0);
	}
	if (__LIB_15__::func_944() != 1)
	{
		__LIB_17__::func_760(&Local_519, 1);
		func_176(&Local_519, 1, 0, 0);
	}
	WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
	PED::DELETE_PED(&(Local_519[0]));
	ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Global_98880[11 /*3*/], true, false, false, true);
	__LIB_17__::func_712(Global_98880[11 /*3*/], 40f, 0, 10000);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(PLAYER::PLAYER_PED_ID(), false);
	while (!func_153())
	{
		SYSTEM::WAIT(0);
	}
	__LIB_0__::func_544(88, 2, 1, 1, 0);
	__LIB_0__::func_544(89, 0, 1, 1, 0);
	__LIB_16__::func_874(6, 0);
	__LIB_0__::func_526(0, 0);
	func_1131();
	SCRIPT::TERMINATE_THIS_THREAD();
}

int func_153()//Position - 0x1C875
{
	float fVar0;
	var uVar1;
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	switch (iLocal_2025)
	{
		case 0:
			__LIB_0__::func_46(1, 1);
			if (__LIB_0__::func_2(0))
			{
				SCRIPT::REQUEST_SCRIPT("controller_AmbientArea");
				while (!SCRIPT::HAS_SCRIPT_LOADED("controller_AmbientArea"))
				{
					SYSTEM::WAIT(0);
				}
				SYSTEM::START_NEW_SCRIPT("controller_AmbientArea", 1424);
			}
			PATHFIND::DISABLE_NAVMESH_IN_AREA((115.1569f - 5f), (-1286.684f - 5f), (28.2613f - 5f), (115.1569f + 5f), (-1286.684f + 5f), (28.2613f + 5f), true);
			__LIB_0__::func_429();
			iLocal_2025++;
			break;
		case 1:
			SYSTEM::SETTIMERA(0);
			if (CUTSCENE::HAS_CUTSCENE_LOADED())
			{
				CUTSCENE::STOP_CUTSCENE_IMMEDIATELY();
				CUTSCENE::REMOVE_CUTSCENE();
			}
			iLocal_2025++;
			break;
		case 2:
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("mission_stat_watcher")) < 1 || SYSTEM::TIMERA() > 10000)
			{
				iLocal_2025++;
			}
			else if (Global_78579)
			{
				STREAMING::REQUEST_ANIM_DICT("SWITCH@FRANKLIN@STRIPCLUB");
				STREAMING::REQUEST_MODEL(joaat("prop_phone_ing_03"));
				SYSTEM::SETTIMERA(0);
				iLocal_2025++;
			}
			break;
		case 3:
			if (STREAMING::HAS_ANIM_DICT_LOADED("SWITCH@FRANKLIN@STRIPCLUB") && STREAMING::HAS_MODEL_LOADED(joaat("prop_phone_ing_03")))
			{
				if (!Global_78579)
				{
					MISC::CLEAR_AREA_OF_VEHICLES(153.3041f, -1308.0714f, 31.1902f, 50f, false, false, false, false, false, false, 0);
					iLocal_2024 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);
					CAM::SET_CAM_COORD(iLocal_2024, 153.3041f, -1308.0714f, 31.1902f);
					CAM::SET_CAM_ROT(iLocal_2024, 1.6837f, 0.2426f, 67.9347f, 2);
					CAM::SET_CAM_FOV(iLocal_2024, 45f);
					CAM::SET_CAM_ACTIVE(iLocal_2024, true);
					CAM::SHAKE_CAM(iLocal_2024, "HAND_SHAKE", 1f);
					CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
					SYSTEM::SETTIMERA(0);
					SCRIPT::SET_NO_LOADING_SCREEN(false);
					CAM::DO_SCREEN_FADE_IN(500);
					__LIB_0__::func_222(&uLocal_539, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					__LIB_0__::func_222(&uLocal_539, 4, 0, "TANISHA", 0, 1);
					iLocal_2025++;
				}
			}
			break;
		case 4:
			if (__LIB_15__::func_305())
			{
				if (__LIB_17__::func_730(&uLocal_539, "PRSAUD", "PSF_ARM3_D", 9, 0, 0, 0, 0))
				{
					iLocal_2025++;
				}
			}
			break;
		case 5:
			if (SYSTEM::TIMERA() > 4000 && (__LIB_0__::func_703(Global_112411, 32) || SYSTEM::TIMERA() > 10000))
			{
				iLocal_2022 = PED::CREATE_SYNCHRONIZED_SCENE(115.1569f, -1286.684f, 28.2613f, 0f, 0f, 111f, 2);
				iLocal_2023 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", true);
				PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_2022, false);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_2022, false);
				PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_2022, 0f);
				TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_2022, "SWITCH@FRANKLIN@STRIPCLUB", "002113_02_FRAS_15_STRIPCLUB_EXIT", 1000f, -1.5f, 0, 0, 1000f, 0);
				CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_2023, iLocal_2022, "002113_02_FRAS_15_STRIPCLUB_EXIT_CAM", "SWITCH@FRANKLIN@STRIPCLUB");
				CAM::SET_CAM_ACTIVE(iLocal_2023, true);
				iLocal_2026 = OBJECT::CREATE_OBJECT(joaat("prop_phone_ing_03"), 115.1569f, -1286.684f, 28.2613f, true, true, false);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_2026, func_94(1), PED::GET_PED_BONE_INDEX(func_94(1), 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
				__LIB_13__::func_783();
				iLocal_2025++;
			}
			break;
		case 6:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_2022))
			{
				PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 19 /*INPUT_CHARACTER_WHEEL*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 28 /*INPUT_SPECIAL_ABILITY*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 29 /*INPUT_SPECIAL_ABILITY_SECONDARY*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 171 /*INPUT_SPECIAL_ABILITY_PC*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 36 /*INPUT_DUCK*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 44 /*INPUT_COVER*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 45 /*INPUT_RELOAD*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 55 /*INPUT_DIVE*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 21 /*INPUT_SPRINT*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 23 /*INPUT_ENTER*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/, true);
				HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
				if (!ENTITY::FIND_ANIM_EVENT_PHASE("SWITCH@FRANKLIN@STRIPCLUB", "002113_02_FRAS_15_STRIPCLUB_EXIT", "WALKINTERRUPTABLE", &fVar0, &uVar1))
				{
					fVar0 = 0.9f;
				}
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_2022) >= fVar0)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_2026))
					{
						OBJECT::DELETE_OBJECT(&iLocal_2026);
					}
					PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Idle"), true, 0, false);
					CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(false, 0f, 3, 0);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
					STREAMING::REMOVE_ANIM_DICT("SWITCH@FRANKLIN@STRIPCLUB");
					PATHFIND::DISABLE_NAVMESH_IN_AREA((115.1569f - 5f), (-1286.684f - 5f), (28.2613f - 5f), (115.1569f + 5f), (-1286.684f + 5f), (28.2613f + 5f), false);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_176(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x1D509
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	char cVar6[64];
	int iVar7;
	var uVar8;
	char* sVar9;
	if (!iParam0->f_39)
	{
		if (iParam0->f_7 == 4)
		{
			return 1;
		}
	}
	if (*iParam0)[iParam0->f_7] != PLAYER::PLAYER_PED_ID()
	{
	}
	if ((!PED::IS_PED_INJURED((*iParam0)[iParam0->f_7]) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && (*iParam0)[iParam0->f_7] != PLAYER::PLAYER_PED_ID())
	{
		if (!bParam2)
		{
			if ((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) && !FIRE::IS_ENTITY_ON_FIRE(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			}
			else
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			}
			if ((PED::IS_PED_RAGDOLL((*iParam0)[iParam0->f_7]) && !FIRE::IS_ENTITY_ON_FIRE((*iParam0)[iParam0->f_7])) && !PED::IS_PED_GETTING_INTO_A_VEHICLE((*iParam0)[iParam0->f_7]))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY((*iParam0)[iParam0->f_7]);
			}
			else
			{
				TASK::CLEAR_PED_TASKS((*iParam0)[iParam0->f_7]);
			}
		}
		iVar0 = PLAYER::PLAYER_PED_ID();
		iVar1 = __LIB_15__::func_944();
		if (!iParam0->f_23)
		{
			func_235(iVar0, 0);
		}
		__LIB_13__::func_813(iVar1, &iVar0);
		PED::SET_PED_CONFIG_FLAG(iVar0, 32, true);
		PED::SET_PED_CONFIG_FLAG(iVar0, 250, true);
		iVar2 = __LIB_0__::func_484(iParam0->f_7);
		func_235((*iParam0)[iParam0->f_7], 0);
		fVar3 = (((SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH((*iParam0)[iParam0->f_7])) - 100f) / (SYSTEM::TO_FLOAT(PED::GET_PED_MAX_HEALTH((*iParam0)[iParam0->f_7])) - 100f)) * 100f);
		switch (__LIB_0__::func_650(PLAYER::PLAYER_PED_ID()))
		{
			case 0:
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("BulletTime"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("BulletTime");
				}
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("BulletTimeOut"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("BulletTimeOut");
				}
				break;
			case 1:
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("DrivingFocus"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("DrivingFocus");
				}
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("DrivingFocusOut"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("DrivingFocusOut");
				}
				break;
			case 2:
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("REDMIST"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("REDMIST");
				}
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("REDMISTOut"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("REDMISTOut");
				}
				break;
		}
		if (__LIB_0__::func_374(__LIB_15__::func_944()))
		{
			if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
			{
				PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
			}
		}
		PLAYER::CHANGE_PLAYER_PED(PLAYER::PLAYER_ID(), (*iParam0)[iParam0->f_7], bParam2, false);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(3);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
		if (iParam3 & 1 != 0)
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 210, false);
		}
		if (__LIB_0__::func_540(0) || __LIB_0__::func_540(3))
		{
			if (Global_23011.f_13)
			{
				iVar4 = 0;
				while (iVar4 < 7)
				{
					if (BitTest(Global_91193[iVar4 /*5*/].f_1, 2))
					{
						iVar5 = Global_91193[iVar4 /*5*/];
						StringCopy(&cVar6, "MISS_SWITCH_", 64);
						StringConCat(&cVar6, &(Global_91229[Global_78588.f_109[iVar5 /*4*/] /*34*/]), 64);
						STATS::STAT_INCREMENT(MISC::GET_HASH_KEY(&cVar6), 1f);
					}
					iVar4++;
				}
			}
		}
		Global_23011.f_13 = 0;
		iParam0->f_5 = __LIB_0__::func_682(iVar1);
		if (iParam0->f_5 == 4)
		{
			iParam0->f_5 = 3;
		}
		(*iParam0)[iParam0->f_5] = iVar0;
		(*iParam0)[iParam0->f_7] = 0;
		iParam0->f_6 = __LIB_0__::func_682(iVar2);
		iParam0->f_7 = 4;
		iVar7 = PLAYER::PLAYER_PED_ID();
		ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
		__LIB_16__::func_22(iVar7);
		PED::SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(iVar7, false, 0);
		if (fVar3 < 25f && !PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), SYSTEM::ROUND((((25f / 100f) * (SYSTEM::TO_FLOAT(PED::GET_PED_MAX_HEALTH(PLAYER::PLAYER_PED_ID())) - 100f)) + 100f)), 0);
		}
		if (bParam1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				ENTITY::SET_ENTITY_VISIBLE(iVar0, true, false);
				__LIB_16__::func_22(iVar0);
				PED::SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(iVar0, false, 0);
				PED::SET_PED_STEALTH_MOVEMENT(iVar0, false, 0);
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			sVar9 = ENTITY::GET_ENTITY_SCRIPT(iVar0, &uVar8);
			if (!MISC::IS_STRING_NULL(sVar9))
			{
				if (!MISC::ARE_STRINGS_EQUAL(sVar9, SCRIPT::GET_THIS_SCRIPT_NAME()))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, false, true);
				}
				PED::DELETE_PED(&iVar0);
			}
		}
		Global_97723 = 1;
		__LIB_0__::func_481(PLAYER::PLAYER_PED_ID());
		__LIB_15__::func_943();
		__LIB_13__::func_799(iVar2);
		__LIB_17__::func_180();
		__LIB_13__::func_822(iVar2);
		__LIB_32__::func_13(__LIB_0__::func_517(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 145, 0));
		PLAYER::RESET_PLAYER_STAMINA(PLAYER::PLAYER_ID());
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(PLAYER::PLAYER_PED_ID(), false);
		PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), true);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_AUTO_GIVE_PARACHUTE_WHEN_ENTER_PLANE(PLAYER::PLAYER_ID(), __LIB_0__::func_425(67));
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_AUTO_GIVE_SCUBA_GEAR_WHEN_EXIT_VEHICLE(PLAYER::PLAYER_ID(), __LIB_0__::func_425(68));
		}
		__LIB_13__::func_818(iVar2, &iVar7);
		if (((__LIB_0__::func_39(0) || __LIB_0__::func_39(3)) || __LIB_0__::func_39(2)) || __LIB_0__::func_39(4))
		{
			PED::SET_PED_CONFIG_FLAG(iVar7, 32, false);
			PED::SET_PED_CONFIG_FLAG(iVar7, 250, false);
		}
		else
		{
			PED::SET_PED_CONFIG_FLAG(iVar7, 32, true);
			PED::SET_PED_CONFIG_FLAG(iVar7, 250, true);
		}
		if (!__LIB_0__::func_477())
		{
			__LIB_30__::func_856();
		}
		Global_97360 = 0;
		return 1;
	}
	else
	{
		if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
		}
		if (PED::IS_PED_INJURED((*iParam0)[iParam0->f_7]))
		{
		}
		if (PLAYER::PLAYER_PED_ID() == (*iParam0)[iParam0->f_7])
		{
		}
	}
	return 0;
}

void func_235(int iParam0, bool bParam1)//Position - 0x23D4C
{
	__LIB_37__::func_181(iParam0);
	func_241(iParam0, bParam1);
	__LIB_16__::func_27(iParam0);
	__LIB_16__::func_26(iParam0);
	__LIB_16__::func_25(iParam0);
	__LIB_16__::func_24(iParam0);
	__LIB_16__::func_23(iParam0);
}

void func_241(int iParam0, bool bParam1)//Position - 0x2402C
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = __LIB_0__::func_650(iParam0);
	if (__LIB_0__::func_374(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		if (iParam0 == PLAYER::PLAYER_PED_ID())
		{
			__LIB_13__::func_814(iParam0, &(Global_113386.f_2363.f_539.f_298[iVar0 /*477*/]));
			iVar2 = 0;
			while (iVar2 <= (8 - 1))
			{
				Global_113386.f_2363.f_539.f_1730[iVar2 /*4*/][iVar0] = HUD::HUD_GET_WEAPON_WHEEL_TOP_SLOT(iVar2);
				if (bParam1)
				{
					iVar1 = HUD::HUD_GET_WEAPON_WHEEL_CURRENTLY_HIGHLIGHTED();
					if (Global_113386.f_2363.f_539.f_1730[iVar2 /*4*/][iVar0] == iVar1)
					{
						Global_113386.f_2363.f_539.f_1763 = iVar2;
					}
				}
				iVar2++;
			}
			PLAYER::GET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), &iVar3);
			if (iVar0 == 0)
			{
				STATS::STAT_SET_INT(joaat("SP0_PARACHUTE_CURRENT_TINT"), iVar3, true);
			}
			else if (iVar0 == 1)
			{
				STATS::STAT_SET_INT(joaat("SP1_PARACHUTE_CURRENT_TINT"), iVar3, true);
			}
			else if (iVar0 == 2)
			{
				STATS::STAT_SET_INT(joaat("SP2_PARACHUTE_CURRENT_TINT"), iVar3, true);
			}
		}
	}
}

int func_325(int* iParam0, bool bParam1, struct<3> Param2, float fParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x2E982
{
	int iVar0;
	if (__LIB_0__::func_374(bParam1))
	{
		iVar0 = __LIB_0__::func_518(bParam1);
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
			{
				PED::DELETE_PED(iParam0);
			}
			*iParam0 = PED::CREATE_PED(26, iVar0, Param2, fParam3, false, false);
			__LIB_17__::func_238(*iParam0, bParam1, bParam5);
			PED::SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(*iParam0, false, 0);
			func_557(*iParam0);
			__LIB_37__::func_182(*iParam0, 1, 0);
			__LIB_37__::func_180(*iParam0);
			__LIB_37__::func_179(*iParam0);
			func_327(*iParam0, bParam6);
			__LIB_0__::func_405(*iParam0);
			if (bParam4)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
			}
			return 1;
		}
	}
	return 0;
}

int func_327(int iParam0, bool bParam1)//Position - 0x2EA9A
{
	int iVar0;
	bool bVar1;
	iVar0 = __LIB_0__::func_650(iParam0);
	if (__LIB_13__::func_804(iVar0))
	{
		__LIB_13__::func_803(iVar0, 0);
		func_519(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		func_340(iParam0, 1);
		return 1;
	}
	if (!bParam1)
	{
		if (__LIB_0__::func_512(iParam0))
		{
			__LIB_13__::func_803(iVar0, 0);
			func_519(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			func_340(iParam0, 1);
			return 1;
		}
	}
	bVar1 = false;
	switch (iVar0)
	{
		case 0:
			if (Global_113386.f_9085.f_99.f_58[120] && !Global_113386.f_9085.f_99.f_58[122])
			{
				func_519(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_113386.f_9085.f_99.f_58[121] = 1;
				return 1;
			}
			if (Global_113386.f_9085.f_99.f_58[123])
			{
				Global_113386.f_9085.f_99.f_58[123] = 0;
				if (!PED::IS_PED_INJURED(iParam0))
				{
					if (func_329(iParam0, 3, 169))
					{
						func_519(iParam0, 3, 85, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						return 1;
					}
				}
			}
			if (func_329(iParam0, 12, 6))
			{
				func_519(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_329(iParam0, 12, 17))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_519(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_329(iParam0, 12, 20))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 20))
				{
					func_519(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_329(iParam0, 12, 21))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 21))
				{
					func_519(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_329(iParam0, 12, 22))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 22))
				{
					func_519(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_329(iParam0, 12, 11))
			{
				func_519(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_329(iParam0, 12, 10))
			{
				func_519(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_329(iParam0, 12, 50))
			{
				func_519(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_329(iParam0, 14, 59))
			{
				func_519(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_329(iParam0, 8, 22))
			{
				func_519(iParam0, 8, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_329(iParam0, 12, 14))
			{
				func_519(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		case 1:
			if (func_329(iParam0, 12, 13))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 13))
				{
					func_519(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_329(iParam0, 12, 14))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 14))
				{
					func_519(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_329(iParam0, 12, 15))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 15))
				{
					func_519(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_329(iParam0, 12, 4))
			{
				func_519(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_329(iParam0, 12, 3))
			{
				func_519(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_329(iParam0, 14, 82))
			{
				func_519(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_329(iParam0, 8, 76))
			{
				func_519(iParam0, 8, 26, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_329(iParam0, 12, 1))
			{
				func_519(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		case 2:
			if (func_329(iParam0, 12, 12))
			{
				func_519(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_329(iParam0, 12, 15))
			{
				func_519(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (!bParam1)
			{
				if (func_329(iParam0, 3, 71))
				{
					func_519(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_329(iParam0, 12, 17))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_519(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_329(iParam0, 12, 18))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 18))
				{
					func_519(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_329(iParam0, 12, 19))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 19))
				{
					func_519(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_329(iParam0, 12, 7))
			{
				func_519(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_329(iParam0, 12, 6))
			{
				func_519(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_329(iParam0, 14, 88))
			{
				func_519(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_329(iParam0, 8, 17))
			{
				func_519(iParam0, 8, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_329(iParam0, 12, 11))
			{
				func_519(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
	}
	return 0;
}

int func_329(int iParam0, int iParam1, int iParam2)//Position - 0x2F120
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
				if (!func_329(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_0__::func_466(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_329(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_13__::func_798(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_329(iParam0, 14, iVar4))
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
			if (!func_329(iParam0, 14, uVar8[iVar7]))
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

void func_340(int iParam0, int iParam1)//Position - 0x30687
{
	int iVar0;
	int iVar1;
	struct<65> Var2;
	int iVar3;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = __LIB_0__::func_650(iParam0);
		if (__LIB_0__::func_374(iVar0))
		{
			if (iVar0 == 2)
			{
				iVar1 = func_518(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					__LIB_13__::func_802(iVar0);
					func_342(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
				}
			}
			Var2 = 12;
			Var2.f_13 = 12;
			Var2.f_26 = 12;
			Var2.f_39 = 9;
			Var2.f_49 = 9;
			__LIB_16__::func_32(iParam0, &Var2, 1, -1);
			Global_100166[iVar0 /*65*/] = { Var2 };
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				__LIB_17__::func_180();
			}
			if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != MISC::GET_HASH_KEY("clothes_shop_sp") || (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("lester1")) == 0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("michael4")) == 0))
			{
				if (iParam1 || ((((((!__LIB_0__::func_39(0) && !__LIB_0__::func_39(1)) && !__LIB_0__::func_39(2)) && !__LIB_0__::func_39(3)) && !__LIB_0__::func_39(4)) && !__LIB_0__::func_39(9)) && !__LIB_0__::func_39(10)))
				{
					Global_113386.f_2363.f_539[iVar0 /*65*/] = { Var2 };
					Global_113386.f_2363.f_539.f_2391[iVar0] = __LIB_0__::func_407(iParam0);
					iVar3 = 0;
					while (iVar3 < 12)
					{
						Global_113386.f_2363.f_539.f_204[iVar3 /*4*/][iVar0] = __LIB_0__::func_350(iParam0, __LIB_0__::func_33(iVar3));
						iVar3++;
					}
					iVar3 = 0;
					while (iVar3 < 12)
					{
						Global_113386.f_2363.f_539.f_204[iVar3 /*4*/][iVar0] = __LIB_0__::func_350(iParam0, __LIB_0__::func_33(iVar3));
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

void func_342(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)//Position - 0x30902
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
		iVar0 = __LIB_0__::func_650(iParam0);
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
		if (__LIB_0__::func_374(iVar0))
		{
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_59 = uParam1->f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = uParam1->f_60;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = uParam1->f_61;
			if (func_516(iParam0, iVar1, &iVar2, 0))
			{
				func_519(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_62 = uParam1->f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = uParam1->f_63;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = uParam1->f_64;
			if (func_514(iParam0, iVar1, &iVar2))
			{
				func_519(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			bVar4 = func_512(iParam0);
			__LIB_0__::func_413(754, uParam1->f_60, Global_78127, 1, 0);
			__LIB_0__::func_413(755, uParam1->f_61, Global_78127, 1, 0);
			iVar5 = __LIB_0__::func_206(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
			if (iVar5 != -99)
			{
				iVar6 = -99;
				if (iVar1 == joaat("MP_M_Freemode_01"))
				{
					iVar6 = __LIB_0__::func_463(iVar5);
				}
				else if (iVar1 == joaat("MP_F_Freemode_01"))
				{
					iVar6 = __LIB_0__::func_462(iVar5);
				}
				if (iVar6 != -99 && iVar5 != iVar6)
				{
					iVar5 = iVar6;
				}
			}
			func_347(iParam0, 2, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			if (!bParam2)
			{
				iVar7 = __LIB_0__::func_206(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_347(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			}
			if (!bParam3)
			{
				iVar8 = __LIB_0__::func_349(iParam0, uParam1->f_39[0], uParam1->f_49[0], 0);
				func_347(iParam0, 14, iVar8, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			}
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iParam0 == PLAYER::PLAYER_PED_ID())
		{
			iVar9 = uParam1->f_59;
			if (iVar1 == joaat("MP_M_Freemode_01"))
			{
				iVar9 = __LIB_0__::func_463(iVar9);
			}
			else
			{
				iVar9 = __LIB_0__::func_462(iVar9);
			}
			__LIB_0__::func_413(753, iVar9, Global_78127, 1, 0);
			__LIB_0__::func_413(2053, iVar9, Global_78127, 1, 0);
			__LIB_0__::func_513(161, 1, -1, 1);
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

int func_347(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)//Position - 0x31018
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
		Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
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
			func_470(iVar5, iParam1, iParam2, 1);
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
					Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, 10, 0, -1) };
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
						func_470(iVar5, 10, 0, 1);
					}
				}
				else
				{
					Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iVar0, uVar14[iVar0], -1) };
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
								Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, 14, uVar15[iVar1], -1) };
								__LIB_0__::func_454(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
								if (BitTest(Global_78130[1 /*14*/].f_6, 1))
								{
									func_470(iVar5, iVar0, uVar14[iVar0], 1);
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
								func_347(iParam0, iVar0, uVar14[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (BitTest(Global_78130[1 /*14*/].f_6, 1))
							{
								func_470(iVar5, iVar0, uVar14[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iVar0, func_467(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					uVar16 = { __LIB_0__::func_459(iVar5, 0) };
					func_347(iParam0, iVar0, uVar16[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			iVar0++;
		}
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1), 0);
		Global_2883588 = uVar12;
		Global_2883589 = uVar13;
		if (iParam5 == 0)
		{
			iVar17 = __LIB_0__::func_662();
			if (iVar17 != -1)
			{
				__LIB_0__::func_661(iVar17, 0, iParam10);
			}
			func_461(iParam0, 11, uVar14[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar18 = { __LIB_0__::func_466(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, 14, uVar18[iVar1], -1) };
			__LIB_0__::func_454(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
			if (BitTest(Global_78130[1 /*14*/].f_6, 1))
			{
				func_470(iVar5, 14, uVar18[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_78128 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = __LIB_12__::func_901(iParam0, iVar5, 14, uVar18[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_347(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_470(iVar5, iParam1, iParam2, 1);
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			if (BitTest(Global_78130[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HAIR"), 1))
			{
			}
			else if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 1, joaat("HAIR_SHRINK")))
			{
				func_347(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
			}
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			func_452(iParam0);
		}
		if (iParam5 == 0)
		{
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_347(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_347(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					iVar27 = func_451(iVar5, iVar24, iVar23, iVar25);
					if (iVar27 == -99)
					{
						iVar27 = __LIB_12__::func_901(iParam0, iVar5, 11, iVar23, 3, 0);
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
							func_347(iParam0, 8, iVar29, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
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
							iVar30 = __LIB_3__::func_523(iParam0, iParam2);
							iVar31 = __LIB_0__::func_452(iVar5, iVar23, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
							if (iVar31 != -99)
							{
								func_347(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
								iVar8 = -99;
							}
							else if (iVar30 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								func_347(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
							}
							else
							{
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									iVar32 = __LIB_0__::func_279(iVar5, 11, -1);
									Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, 11, iVar32, -1) };
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
								func_347(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
							}
						}
					}
					else
					{
						Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, 11, iVar23, -1) };
						iVar34 = Global_78130[1 /*14*/].f_3;
						Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, 11, iParam2, -1) };
						iVar35 = Global_78130[1 /*14*/].f_3;
						if (iVar34 != iVar35)
						{
							iVar37 = __LIB_3__::func_523(iParam0, iParam2);
							Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, 8, iVar24, -1) };
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
										Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, 11, iVar38, -1) };
										iVar39 = __LIB_0__::func_452(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
									}
								}
								if (iVar5 == joaat("MP_F_Freemode_01") && ((iVar24 == 32 || iVar24 == 33) || iVar24 == 119))
								{
									if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_205(iVar5, iParam2, 11, 4), joaat("JACKET_ONLY"), 0))
									{
										iVar38 = __LIB_0__::func_279(iVar5, 11, -1);
										Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, 11, iVar38, -1) };
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
									Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, 11, iVar38, -1) };
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
								func_347(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_M_Freemode_01"))
							{
								iVar38 = __LIB_0__::func_279(iVar5, 11, -1);
								Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, 11, iVar38, -1) };
								iVar39 = __LIB_0__::func_452(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
								if (iVar39 == -99)
								{
									iVar39 = 240;
								}
								func_347(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_F_Freemode_01"))
							{
								func_347(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				__LIB_3__::func_520(iVar5, iParam2);
				if (!bParam13)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 10));
				}
			}
			func_461(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_451(iVar5, func_467(iParam0, 8, -1), iParam2, func_467(iParam0, 4, -1));
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam5 == 0)
			{
				if (iParam8 == -1)
				{
					iParam8 = __LIB_0__::func_369(2153, iParam10, 0);
				}
				if (iParam9 == -1)
				{
					iParam9 = __LIB_0__::func_369(2160, iParam10, 0);
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
				func_390(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar43 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar43, joaat("GLOVES"), 0))
			{
				iVar44 = __LIB_0__::func_350(iParam0, 11);
				iVar45 = __LIB_0__::func_350(iParam0, 4);
				iVar46 = func_451(iVar5, iParam2, iVar44, iVar45);
				if (iVar46 == -99)
				{
					iVar46 = __LIB_12__::func_901(iParam0, iVar5, 11, iVar44, 3, 0);
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
			func_461(iParam0, iParam1, iParam2, iParam6, 0);
			iVar49 = __LIB_0__::func_350(iParam0, 11);
			if (__LIB_0__::func_280(iVar5, iVar49, -1))
			{
				iVar50 = __LIB_0__::func_357(iVar5, iParam2, Global_78130[1 /*14*/].f_4);
				__LIB_3__::func_520(iVar5, iVar50);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_451(iVar5, iParam2, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
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
				iVar52 = __LIB_0__::func_369(2100, iParam10, 0);
				iVar53 = __LIB_0__::func_369(2101, iParam10, 0);
				iVar54 = __LIB_0__::func_369(2102, iParam10, 0);
				fVar55 = __LIB_0__::func_412(135, iParam10);
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
				__LIB_3__::func_345(iParam0, iParam10);
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
						func_347(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			else if (iVar5 == joaat("MP_F_Freemode_01"))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_205(iVar5, iVar57, 11, 4), joaat("LOW2_OPEN_CHECK"), 0))
				{
					if (!__LIB_0__::func_451(iVar5, iParam2, __LIB_0__::func_357(iVar5, iVar58, 0)))
					{
						func_347(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_451(iVar5, __LIB_0__::func_350(iParam0, 8), __LIB_0__::func_350(iParam0, 11), iParam2);
			}
			iVar59 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar59, joaat("GLOVES"), 0))
			{
				iVar60 = func_451(iVar5, iVar58, iVar57, iParam2);
				if (iVar60 == -99)
				{
					iVar60 = __LIB_12__::func_901(iParam0, iVar5, 11, iVar57, 3, 0);
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
					iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_347(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
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
								iVar6 = func_451(iVar5, iVar3, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_347(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						if (!func_367(iParam0, 9, iVar63))
						{
							func_347(iParam0, 9, iVar63, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_347(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
					{
						func_347(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 8)
			{
				iVar64 = __LIB_0__::func_369(2042, -1, 0);
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
						func_347(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("MP_F_Freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar65 = func_467(iParam0, 4, -1);
					iVar66 = iParam2;
				}
				else
				{
					iVar65 = iParam2;
					iVar66 = func_467(iParam0, 11, -1);
				}
				if (__LIB_0__::func_240(iVar5, 11, iVar66, -1))
				{
					if (!__LIB_0__::func_239(iVar5, 4, iVar65, -1))
					{
						if (__LIB_0__::func_353(iVar5, 4, iVar65, &uVar67))
						{
							func_347(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (__LIB_0__::func_239(iVar5, 4, iVar65, -1))
				{
					if (__LIB_0__::func_352(iVar5, 4, iVar65, &uVar67))
					{
						func_347(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_347(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_347(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_347(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_347(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_347(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_347(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_347(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_347(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				func_452(iParam0);
				iVar81 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
				iVar82 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
				iVar83 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar81, iVar82);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar83, joaat("FORCE_PROP"), 0))
				{
					iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_347(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_347(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_348(iParam0, &uVar4))
		{
			func_347(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_347(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar8 != -99)
	{
		func_347(iParam0, 8, iVar8, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_347(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar10 != -1)
	{
		iVar84 = __LIB_0__::func_282(iVar5, func_467(iParam0, 3, -1), iVar10);
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
				func_347(iParam0, 3, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_348(int iParam0, var uParam1)//Position - 0x32EC2
{
	int iVar0;
	int iVar1;
	*uParam1 = func_467(PLAYER::PLAYER_PED_ID(), 2, -1);
	if (__LIB_0__::func_369(754, Global_78127, 0) != -99 && __LIB_0__::func_438())
	{
		if (__LIB_0__::func_236() == 4)
		{
			return 1;
		}
		if (__LIB_0__::func_369(754, Global_78127, 0) == 0 && __LIB_0__::func_369(755, Global_78127, 0) == 0)
		{
			if (__LIB_0__::func_351(161, Global_78127))
			{
				if (__LIB_0__::func_369(2053, Global_78127, 0) == 0)
				{
					return 0;
				}
			}
			else if (__LIB_0__::func_369(753, Global_78127, 0) == 0)
			{
				return 0;
			}
		}
		iVar0 = __LIB_0__::func_369(754, Global_78127, 0);
		iVar1 = __LIB_0__::func_369(755, Global_78127, 0);
		if (!func_367(iParam0, iVar1, iVar0))
		{
			if (__LIB_0__::func_351(161, Global_78127))
			{
				*uParam1 = __LIB_0__::func_369(2053, Global_78127, 0);
			}
			else
			{
				*uParam1 = __LIB_0__::func_369(753, Global_78127, 0);
			}
			__LIB_0__::func_413(754, -99, Global_78127, 1, 0);
			__LIB_0__::func_413(755, 2, Global_78127, 1, 0);
			return 1;
		}
	}
	return 0;
}

int func_367(int iParam0, int iParam1, int iParam2)//Position - 0x37180
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
	Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar0, iParam1, iParam2, -1) };
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
				if (!func_367(iParam0, iVar4, uVar8[iVar4]))
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
							if (!func_367(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_3__::func_84(iVar0, 14, iVar6, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar5)
									{
										if (func_367(iParam0, 14, iVar6))
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
						Global_78130[2 /*14*/] = { __LIB_3__::func_84(iVar0, iVar4, iVar1, -1) };
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
			if (__LIB_0__::func_369(1759, Global_78127, 0) != uVar8[10])
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
			if (!func_367(iParam0, 14, uVar11[iVar10]))
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
						return func_367(iParam0, 4, uVar18);
					}
				}
				else if (__LIB_0__::func_352(iVar0, 4, iParam2, &uVar18))
				{
					return func_367(iParam0, 4, uVar18);
				}
			}
			Global_78129 = (Global_78129 - 1);
		}
	}
	return 0;
}

void func_390(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x3DE97
{
	int iVar0;
	int iVar1;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	__LIB_3__::func_346(MISC::GET_HASH_KEY("hairOverlay"), iParam0);
	iVar1 = __LIB_0__::func_450(iVar0, iParam1);
	if (iVar1 != -1)
	{
		if (iParam2 == -1)
		{
			iParam2 = Global_78127;
		}
		__LIB_0__::func_661(iVar1, 1, iParam2);
	}
	func_391(iParam0, bParam3, 0, -1);
}

void func_391(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x3DEE4
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
		bVar3 = func_431(iParam0, 0);
		bVar4 = __LIB_1__::func_37(iParam0);
		bVar5 = func_422(iParam0, iParam3);
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
			if (__LIB_0__::func_549(iVar6, iVar0))
			{
				if (__LIB_0__::func_445(&Var1, iVar6, iVar2, iParam0, -1))
				{
					if (__LIB_0__::func_674(iParam0, &Var1, iVar6, Var1.f_4, Var1.f_8, bVar3, bVar4, bParam1, bVar5))
					{
						PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var1.f_4, Var1.f_5);
					}
				}
			}
			iVar6++;
		}
		if (__LIB_0__::func_549(123, iVar0))
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
					if (__LIB_0__::func_549(iVar10, iVar0))
					{
						if (__LIB_0__::func_674(iParam0, &(Var9.f_7), iVar10, Var9.f_2, Var9.f_6, bVar3, bVar4, bParam1, bVar5))
						{
							if (!__LIB_3__::func_348(Var9.f_2, Var9.f_3, iVar10))
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

int func_422(int iParam0, int iParam1)//Position - 0x4D09A
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
			iVar2 = __LIB_0__::func_369(1759, -1, 0);
			if (iParam1 != -1)
			{
				iVar2 = iParam1;
			}
			if (iVar0 > 15)
			{
				iVar3 = func_467(iParam0, 11, -1);
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
			iVar2 = __LIB_0__::func_369(1759, -1, 0);
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
				iVar5 = func_467(iParam0, 11, -1);
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

int func_431(int iParam0, bool bParam1)//Position - 0x4D4F8
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
							iVar2 = __LIB_0__::func_676(joaat("MP_M_Freemode_01"), 11, func_467(iParam0, 11, -1), 0);
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
						if (__LIB_0__::func_549(13, -1))
						{
							return 1;
						}
						else if (__LIB_0__::func_549(14, -1))
						{
							return 1;
						}
						else if (__LIB_0__::func_549(15, -1))
						{
							return 1;
						}
						else if (__LIB_0__::func_549(16, -1))
						{
							return 1;
						}
						else if (__LIB_0__::func_549(71, -1))
						{
							return 1;
						}
						else if (__LIB_0__::func_549(72, -1))
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
						iVar3 = func_467(iParam0, 11, -1);
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
						iVar5 = func_467(iParam0, 8, -1);
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
							iVar7 = __LIB_0__::func_676(joaat("MP_F_Freemode_01"), 11, func_467(iParam0, 11, -1), 0);
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
						iVar8 = func_467(iParam0, 11, -1);
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
							iVar10 = __LIB_0__::func_676(joaat("MP_F_Freemode_01"), 11, func_467(iParam0, 11, -1), 0);
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
							iVar11 = __LIB_0__::func_676(joaat("MP_F_Freemode_01"), 11, func_467(iParam0, 11, -1), 0);
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
						iVar12 = func_467(iParam0, 8, -1);
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

int func_451(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x56385
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
					iVar0 = func_451(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
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
					iVar0 = func_451(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
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

void func_452(int iParam0)//Position - 0x576C0
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
		if (!func_457(iParam0, &bVar14, iVar9, iVar10, iVar12) || PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
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
		if (!func_457(iParam0, &bVar14, iVar9, iVar10, iVar12))
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

int func_457(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x5808B
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
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAZ_MASK"), 0) && !__LIB_0__::func_348(iVar0, 14, func_467(iParam0, 14, 0), -1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_461(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x5AA73
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (func_512(iParam0))
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
			__LIB_3__::func_346(MISC::GET_HASH_KEY("torsoDecal"), iParam0);
			if (iParam1 == 11)
			{
				if (((((!__LIB_3__::func_347(iVar0, iParam2, 13) && !__LIB_3__::func_347(iVar0, iParam2, 14)) && !__LIB_3__::func_347(iVar0, iParam2, 15)) && !__LIB_3__::func_347(iVar0, iParam2, 16)) && !__LIB_3__::func_347(iVar0, iParam2, 71)) && !__LIB_3__::func_347(iVar0, iParam2, 72))
				{
					__LIB_3__::func_346(MISC::GET_HASH_KEY("crewLogo"), iParam0);
				}
			}
			iVar2 = __LIB_0__::func_676(iVar0, iParam1, iParam2, iParam4);
			if (iVar2 != -1)
			{
				if (iParam3 == 1)
				{
					__LIB_0__::func_660(iParam0, iVar2, 0);
				}
				else
				{
					__LIB_0__::func_661(iVar2, 1, Global_78127);
				}
			}
		}
	}
}

int func_467(int iParam0, int iParam1, int iParam2)//Position - 0x5AD22
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
				if (func_367(iParam0, iParam1, iVar0))
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
				if (func_367(iParam0, iParam1, iVar1))
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

void func_470(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x5AEA1
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
		Global_78130[2 /*14*/] = { __LIB_3__::func_84(iParam0, iParam1, iParam2, -1) };
		if (BitTest(Global_78130[2 /*14*/].f_6, 1) && BitTest(Global_78130[2 /*14*/].f_6, 6))
		{
			if (iParam1 == 12)
			{
				__LIB_0__::func_538(Global_2883588, 2, 1, 1, -1);
			}
			else if (iParam1 == 13)
			{
			}
			else if (iParam1 == 14)
			{
				__LIB_0__::func_538(Global_2883588, 2, 1, 1, -1);
			}
			else
			{
				__LIB_0__::func_538(Global_2883588, 2, 1, 1, -1);
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
							__LIB_0__::func_538(iVar2, 2, 1, 1, -1);
							if (iVar5 < Global_4538446)
							{
								Global_4538446[iVar5] = iVar2;
								Global_4538457[iVar5] = iVar4;
								iVar5++;
							}
						}
						else
						{
							func_470(iParam0, __LIB_0__::func_33(iVar4), uVar3, 0);
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
									func_470(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 3), 1);
								}
								else
								{
									func_470(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 4), 1);
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
				iVar7 = __LIB_0__::func_369(iVar6, Global_78127, 0);
				MISC::SET_BIT(&iVar7, Global_78130[2 /*14*/].f_1);
				__LIB_0__::func_413(iVar6, iVar7, Global_78127, 1, 0);
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
							func_470(iParam0, 14, iVar8, 0);
						}
						else if (iParam2 >= 75 && iParam2 <= 82)
						{
							iVar8 = (83 + Global_78130[2 /*14*/].f_4);
							func_470(iParam0, 14, iVar8, 0);
						}
					}
					else if (iParam1 == 8)
					{
						if (iParam2 >= 48 && iParam2 <= 63)
						{
							iVar8 = (64 + Global_78130[2 /*14*/].f_4);
							func_470(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 64 && iParam2 <= 79)
						{
							iVar8 = (48 + Global_78130[2 /*14*/].f_4);
							func_470(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 96 && iParam2 <= 111)
						{
							iVar8 = (112 + Global_78130[2 /*14*/].f_4);
							func_470(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 112 && iParam2 <= 127)
						{
							iVar8 = (96 + Global_78130[2 /*14*/].f_4);
							func_470(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 176 && iParam2 <= 191)
						{
							iVar8 = (160 + Global_78130[2 /*14*/].f_4);
							func_470(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 160 && iParam2 <= 175)
						{
							iVar8 = (176 + Global_78130[2 /*14*/].f_4);
							func_470(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 32 && iParam2 <= 47)
						{
							iVar8 = (0 + Global_78130[2 /*14*/].f_4);
							func_470(iParam0, 11, iVar8, 0);
						}
						else if (iParam2 >= 224 && iParam2 <= 239)
						{
							iVar8 = (16 + Global_78130[2 /*14*/].f_4);
							func_470(iParam0, 11, iVar8, 0);
						}
					}
					else if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar8 = (32 + Global_78130[2 /*14*/].f_4);
							func_470(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 16 && iParam2 <= 31)
						{
							iVar8 = (224 + Global_78130[2 /*14*/].f_4);
							func_470(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 220 && iParam2 <= 235)
						{
							switch (iParam2)
							{
								case 220:
									func_470(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_0"), 8, 3), 0);
									func_470(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_0"), 8, 3), 0);
									break;
								case 221:
									func_470(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_1"), 8, 3), 0);
									func_470(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_1"), 8, 3), 0);
									break;
								case 222:
									func_470(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_2"), 8, 3), 0);
									func_470(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_2"), 8, 3), 0);
									break;
								case 223:
									func_470(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_3"), 8, 3), 0);
									func_470(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_3"), 8, 3), 0);
									break;
								case 224:
									func_470(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_4"), 8, 3), 0);
									func_470(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_4"), 8, 3), 0);
									break;
								case 225:
									func_470(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_5"), 8, 3), 0);
									func_470(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_5"), 8, 3), 0);
									break;
								case 226:
									func_470(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_6"), 8, 3), 0);
									func_470(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_6"), 8, 3), 0);
									break;
								case 227:
									func_470(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_7"), 8, 3), 0);
									func_470(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_7"), 8, 3), 0);
									break;
								case 228:
									func_470(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_8"), 8, 3), 0);
									func_470(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_8"), 8, 3), 0);
									break;
								case 229:
									func_470(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_9"), 8, 3), 0);
									func_470(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_9"), 8, 3), 0);
									break;
								case 230:
									func_470(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_10"), 8, 3), 0);
									func_470(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_10"), 8, 3), 0);
									break;
								case 231:
									func_470(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_11"), 8, 3), 0);
									func_470(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_11"), 8, 3), 0);
									break;
								case 232:
									func_470(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_12"), 8, 3), 0);
									func_470(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_12"), 8, 3), 0);
									break;
								case 233:
									func_470(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_13"), 8, 3), 0);
									func_470(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_13"), 8, 3), 0);
									break;
								case 234:
									func_470(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_14"), 8, 3), 0);
									func_470(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_14"), 8, 3), 0);
									break;
								case 235:
									func_470(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_15"), 8, 3), 0);
									func_470(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_15"), 8, 3), 0);
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
									func_470(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_0"), 7, 3), 0);
									func_470(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_0"), 7, 3), 0);
									break;
								case 1:
									func_470(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_1"), 7, 3), 0);
									func_470(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_1"), 7, 3), 0);
									break;
								case 2:
									func_470(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_2"), 7, 3), 0);
									func_470(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_2"), 7, 3), 0);
									break;
								case 3:
									func_470(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_3"), 7, 3), 0);
									func_470(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_3"), 7, 3), 0);
									break;
								case 4:
									func_470(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_4"), 7, 3), 0);
									func_470(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_4"), 7, 3), 0);
									break;
								case 5:
									func_470(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_5"), 7, 3), 0);
									func_470(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_5"), 7, 3), 0);
									break;
								case 6:
									func_470(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_6"), 7, 3), 0);
									func_470(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_6"), 7, 3), 0);
									break;
								case 7:
									func_470(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_7"), 7, 3), 0);
									func_470(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_7"), 7, 3), 0);
									break;
								case 8:
									func_470(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_8"), 7, 3), 0);
									func_470(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_8"), 7, 3), 0);
									break;
								case 9:
									func_470(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_9"), 7, 3), 0);
									func_470(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_9"), 7, 3), 0);
									break;
								case 10:
									func_470(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_10"), 7, 3), 0);
									func_470(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_10"), 7, 3), 0);
									break;
								case 11:
									func_470(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_11"), 7, 3), 0);
									func_470(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_11"), 7, 3), 0);
									break;
								case 12:
									func_470(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_12"), 7, 3), 0);
									func_470(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_12"), 7, 3), 0);
									break;
								case 13:
									func_470(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_13"), 7, 3), 0);
									func_470(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_13"), 7, 3), 0);
									break;
								case 14:
									func_470(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_14"), 7, 3), 0);
									func_470(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_14"), 7, 3), 0);
									break;
								case 15:
									func_470(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_15"), 7, 3), 0);
									func_470(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_15"), 7, 3), 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_78130[2 /*14*/].f_4)
							{
								case 0:
									func_470(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_0"), 7, 3), 0);
									func_470(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_0"), 7, 3), 0);
									break;
								case 1:
									func_470(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_1"), 7, 3), 0);
									func_470(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_1"), 7, 3), 0);
									break;
								case 2:
									func_470(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_2"), 7, 3), 0);
									func_470(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_2"), 7, 3), 0);
									break;
								case 3:
									func_470(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_3"), 7, 3), 0);
									func_470(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_3"), 7, 3), 0);
									break;
								case 4:
									func_470(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_4"), 7, 3), 0);
									func_470(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_4"), 7, 3), 0);
									break;
								case 5:
									func_470(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_5"), 7, 3), 0);
									func_470(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_5"), 7, 3), 0);
									break;
								case 6:
									func_470(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_6"), 7, 3), 0);
									func_470(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_6"), 7, 3), 0);
									break;
								case 7:
									func_470(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_7"), 7, 3), 0);
									func_470(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_7"), 7, 3), 0);
									break;
								case 8:
									func_470(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_8"), 7, 3), 0);
									func_470(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_8"), 7, 3), 0);
									break;
								case 9:
									func_470(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_9"), 7, 3), 0);
									func_470(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_9"), 7, 3), 0);
									break;
								case 10:
									func_470(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_10"), 7, 3), 0);
									func_470(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_10"), 7, 3), 0);
									break;
								case 11:
									func_470(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_11"), 7, 3), 0);
									func_470(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_11"), 7, 3), 0);
									break;
								case 12:
									func_470(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_12"), 7, 3), 0);
									func_470(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_12"), 7, 3), 0);
									break;
								case 13:
									func_470(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_13"), 7, 3), 0);
									func_470(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_13"), 7, 3), 0);
									break;
								case 14:
									func_470(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_14"), 7, 3), 0);
									func_470(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_14"), 7, 3), 0);
									break;
								case 15:
									func_470(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_15"), 7, 3), 0);
									func_470(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_15"), 7, 3), 0);
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
							func_470(iParam0, 8, iVar8, 0);
						}
					}
				}
				Global_78130[2 /*14*/] = { __LIB_3__::func_84(iParam0, iParam1, iParam2, -1) };
				if (iParam1 == 11)
				{
					iVar9 = __LIB_0__::func_358(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_470(iParam0, 8, iVar9, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203)
					{
						switch (iParam2)
						{
							case 199:
								func_470(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_0"), 7, 4), 0);
								break;
							case 200:
								func_470(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_1"), 7, 4), 0);
								break;
							case 201:
								func_470(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_2"), 7, 4), 0);
								break;
							}
					}
				}
				else if (iParam1 == 8)
				{
					iVar9 = __LIB_0__::func_357(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_470(iParam0, 11, iVar9, 0);
					}
				}
			}
		}
	}
}

int func_512(int iParam0)//Position - 0x73D6F
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
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != __LIB_0__::func_162() && __LIB_0__::func_287(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar1 = func_467(iParam0, 11, -1);
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
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != __LIB_0__::func_162() && __LIB_0__::func_287(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar3 = func_467(iParam0, 11, -1);
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

int func_514(int iParam0, int iParam1, int iParam2)//Position - 0x740CB
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_329(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_516(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x74192
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_329(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_518(int iParam0, int iParam1, int iParam2)//Position - 0x74452
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
				if (func_329(iParam0, iParam1, iVar0))
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
				if (func_329(iParam0, iParam1, iVar1))
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

int func_519(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x744F3
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
										func_519(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
									func_519(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_13__::func_798(iVar10, iVar0, func_518(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_516(iParam0, iVar10, &iVar4, 1))
							{
								func_519(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_0__::func_459(iVar10, 0) };
						func_519(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_519(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_519(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_519(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_519(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_519(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
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
						func_519(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_519(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_519(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		if (func_516(iParam0, iVar10, &iVar4, 0))
		{
			func_519(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_514(iParam0, iVar10, &iVar4))
		{
			func_519(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

void func_550()//Position - 0x77C3C
{
	int iVar0;
	if (Global_100441.f_12[2] > 20)
	{
	}
	iVar0 = (1000 - Global_96866) * 5;
	if ((iLocal_413 - iVar0) <= 0)
	{
		iLocal_413 = 0;
	}
	__LIB_0__::func_497(816, Global_100441.f_12[2], 0);
	__LIB_0__::func_497(810, iLocal_413, 0);
	__LIB_17__::func_738(0, 0, iLocal_414);
	__LIB_16__::func_849(0, (iLocal_413 + iLocal_414));
	__LIB_16__::func_877(0, (iLocal_413 + iLocal_414));
	HUD::CLEAR_HELP(true);
}

void func_557(int iParam0)//Position - 0x77EAD
{
	int iVar0;
	int iVar1;
	bool bVar2;
	iVar0 = __LIB_0__::func_650(iParam0);
	if (__LIB_0__::func_374(iVar0))
	{
		if (!Global_100362[iVar0])
		{
			if (Global_113386.f_2363.f_539.f_2391[iVar0] != 0)
			{
				if (__LIB_0__::func_407(iParam0) != Global_113386.f_2363.f_539.f_2391[iVar0])
				{
					__LIB_13__::func_802(iVar0);
					Global_113386.f_2363.f_539.f_2391[iVar0] = __LIB_0__::func_407(iParam0);
				}
			}
		}
		func_342(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
		if (!Global_100362[iVar0])
		{
			bVar2 = false;
			if (iVar0 == 0)
			{
				if (!__LIB_0__::func_422(49))
				{
					iVar1 = func_518(iParam0, 12, -1);
					if (iVar1 == 16)
					{
						bVar2 = true;
					}
					func_558(__LIB_0__::func_518(0), 12, 16, 0, 0, 0, 0);
				}
				if (!__LIB_0__::func_422(44))
				{
					iVar1 = func_518(iParam0, 3, -1);
					if (((((iVar1 == 70 || iVar1 == 71) || iVar1 == 72) || iVar1 == 73) || iVar1 == 74) || iVar1 == 75)
					{
						bVar2 = true;
					}
					iVar1 = func_518(iParam0, 4, -1);
					if ((((iVar1 == 41 || iVar1 == 42) || iVar1 == 43) || iVar1 == 44) || iVar1 == 45)
					{
						bVar2 = true;
					}
					func_558(__LIB_0__::func_518(0), 3, 70, 1, 0, 0, 0);
					func_558(__LIB_0__::func_518(0), 3, 71, 1, 0, 0, 0);
					func_558(__LIB_0__::func_518(0), 3, 72, 1, 0, 0, 0);
					func_558(__LIB_0__::func_518(0), 3, 73, 1, 0, 0, 0);
					func_558(__LIB_0__::func_518(0), 3, 74, 1, 0, 0, 0);
					func_558(__LIB_0__::func_518(0), 3, 75, 1, 0, 0, 0);
					func_558(__LIB_0__::func_518(0), 4, 41, 1, 0, 0, 0);
					func_558(__LIB_0__::func_518(0), 4, 42, 1, 0, 0, 0);
					func_558(__LIB_0__::func_518(0), 4, 43, 1, 0, 0, 0);
					func_558(__LIB_0__::func_518(0), 4, 44, 1, 0, 0, 0);
					func_558(__LIB_0__::func_518(0), 4, 45, 1, 0, 0, 0);
				}
			}
			else if (iVar0 == 2)
			{
				iVar1 = func_518(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				__LIB_13__::func_802(iVar0);
				func_342(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
			}
		}
		Global_100362[iVar0] = 1;
	}
}

void func_558(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)//Position - 0x7810B
{
	__LIB_15__::func_950(iParam0, iParam1, iParam2, bParam3);
	func_561(iParam0, iParam1, iParam2, bParam4, 1);
	if (bParam5)
	{
		__LIB_0__::func_421(iParam0, iParam1, iParam2, 0);
	}
	if (iParam6 == 1)
	{
		__LIB_15__::func_952(iParam0, iParam1, iParam2, 0);
	}
}

int func_561(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x782C6
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	Global_78130[1 /*14*/] = { __LIB_13__::func_798(iParam0, iParam1, iParam2, -1) };
	if (BitTest(Global_78130[1 /*14*/].f_6, 0) && !BitTest(Global_78130[1 /*14*/].f_6, 6))
	{
		if (bParam3)
		{
			__LIB_0__::func_31(iParam1, Global_78130[1 /*14*/].f_5, Global_78130[1 /*14*/].f_2, 1, Global_78130[1 /*14*/].f_1, 1, 0);
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
					uVar3 = { __LIB_0__::func_459(iParam0, iParam2) };
					iVar1 = 0;
					while (iVar1 <= 14)
					{
						if ((uVar3[iVar1] != -99 && iVar1 != 12) && iVar1 != 14)
						{
							if (iVar1 != 13)
							{
								func_561(iParam0, iVar1, uVar3[iVar1], 1, 1);
								__LIB_15__::func_950(iParam0, iVar1, uVar3[iVar1], 1);
							}
							else
							{
								uVar4 = { __LIB_0__::func_466(iParam0, uVar3[iVar1]) };
								iVar2 = 0;
								while (iVar2 <= 8)
								{
									func_561(iParam0, 14, uVar4[iVar2], 1, 1);
									__LIB_15__::func_950(iParam0, 14, uVar4[iVar2], 1);
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
			__LIB_0__::func_31(iParam1, Global_78130[1 /*14*/].f_5, Global_78130[1 /*14*/].f_2, 1, Global_78130[1 /*14*/].f_1, 0, 1);
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
								func_561(iParam0, 3, iVar5, 1, 0);
							}
							else if (iParam2 >= 227 && iParam2 <= 242)
							{
								iVar5 = (176 + Global_78130[1 /*14*/].f_4);
								func_561(iParam0, 3, iVar5, 1, 0);
							}
							break;
						case 11:
							if (iParam2 >= 9 && iParam2 <= 24)
							{
								iVar5 = (25 + Global_78130[1 /*14*/].f_4);
								func_561(iParam0, 11, iVar5, 1, 0);
							}
							else if (iParam2 >= 25 && iParam2 <= 40)
							{
								iVar5 = (9 + Global_78130[1 /*14*/].f_4);
								func_561(iParam0, 11, iVar5, 1, 0);
							}
							break;
						case 8:
							if (iParam2 >= 27 && iParam2 <= 42)
							{
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_561(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_561(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 43 && iParam2 <= 58)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_561(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_561(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 59 && iParam2 <= 74)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_561(iParam0, 8, iVar5, 1, 0);
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_561(iParam0, 8, iVar5, 1, 0);
							}
							break;
						case 14:
							if (iParam2 >= 64 && iParam2 <= 79)
							{
								iVar5 = (41 + Global_78130[1 /*14*/].f_4);
								func_561(iParam0, 14, iVar5, 1, 0);
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
								func_561(iParam0, 4, iVar5, 1, 0);
							}
							break;
						case 12:
							if (iParam2 == 2)
							{
								func_561(iParam0, 14, 17, 1, 0);
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

int func_564()//Position - 0x78754
{
	if (!iLocal_383)
	{
		if (bLocal_382)
		{
			func_652(8, "STAGE_RETURN_TO_BASE", 0, 0, 0, 1);
		}
		else
		{
			func_652(7, "STAGE_RETURN_TO_BASE", 0, 0, 0, 1);
		}
		AUDIO::SET_AUDIO_FLAG("OnlyAllowScriptTriggerPoliceScanner", true);
		Global_100441.f_12[0] = iLocal_413;
		__LIB_17__::func_171(25, 1, 1);
		__LIB_17__::func_171(26, 1, 1);
		func_133();
		func_129(1, 0);
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
		iLocal_417 = 0;
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_460, false))
		{
			VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(iLocal_460, 5, false);
			ENTITY::SET_ENTITY_PROOFS(iLocal_460, false, false, false, false, false, false, false, false);
		}
		if (!PED::IS_PED_INJURED(iLocal_436[2]))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_436[2], true);
		}
		__LIB_15__::func_912();
		AUDIO::DISTANT_COP_CAR_SIRENS(false);
		func_121(func_94(0), __LIB_13__::func_103("0"), "MICHAEL");
		func_121(0, __LIB_13__::func_103("1"), "FRANKLIN");
		if (func_120())
		{
			func_121(0, 3, "EDDIE");
		}
		else if (func_119())
		{
			func_121(0, 3, "TALINA");
		}
		else if (func_118())
		{
			func_121(0, 3, "KARIM");
		}
		if (func_117())
		{
			func_121(0, 4, "PACKIE");
		}
		else if (func_116())
		{
			func_121(0, 4, "GUSTAVO");
		}
		else if (func_115())
		{
			func_121(0, 4, "NORM");
		}
		switch (__LIB_16__::func_594(0, 2))
		{
			case 6:
				func_121(iLocal_436[2], 7, "PAIGE");
				break;
			case 7:
				func_121(iLocal_436[2], 7, "CHRISTIAN");
				break;
			case 12:
				func_121(iLocal_436[2], 7, "LIEngineer");
				break;
		}
		SYSTEM::SETTIMERA(0);
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.5f);
		func_649(1);
		PED::SET_CREATE_RANDOM_COPS(true);
		iLocal_2060 = 0;
		if (!PED::IS_PED_INJURED(func_94(1)))
		{
			PED::REMOVE_PED_HELMET(func_94(1), true);
		}
		AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("JWL_HEIST_CAR_SMASHES_BIG");
		iLocal_2136 = 0;
		iLocal_2137 = 0;
		PED::ADD_SCENARIO_BLOCKING_AREA(192.9551f, -2060.9285f, 10.8338f, 231.7729f, -1969.8544f, 34.4133f, false, true, true, true);
		__LIB_0__::func_377(iLocal_460, 817);
		AUDIO::STOP_AUDIO_SCENE("JSH_2B_LOAD_UP_TRUCK");
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("JSH_2B_GO_TO_LOCKUP"))
		{
			AUDIO::START_AUDIO_SCENE("JSH_2B_GO_TO_LOCKUP");
		}
		RECORDING::REPLAY_RECORD_BACK_FOR_TIME(0f, 10f, 4);
		__LIB_17__::func_756(0, 1);
		func_111(800, 0, 0);
		iLocal_383 = 1;
		iLocal_417 = 0;
	}
	else
	{
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
		if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), 207.8754f, -2024.499f, 17.2804f, 1) < 200f && iLocal_2136 == 0)
		{
			STREAMING::REQUEST_ANIM_DICT("missheist_jewel");
			STREAMING::REQUEST_MODEL(joaat("IG_LesterCrest"));
			STREAMING::REQUEST_MODEL(joaat("p_clothtarp_s"));
			STREAMING::REQUEST_MODEL(Local_748.f_23);
			STREAMING::REQUEST_ANIM_DICT("p_clothtarp_s");
			STREAMING::REQUEST_ANIM_SET("move_lester_CaneUp");
			STREAMING::REQUEST_ANIM_DICT("missheist_jewel@tarp");
			AUDIO::REQUEST_AMBIENT_AUDIO_BANK("JWL_HEIST_FINALE_TARP", false, -1);
			VEHICLE::REQUEST_VEHICLE_RECORDING(1, "JHTarpScene");
			VEHICLE::REQUEST_VEHICLE_RECORDING(2, "JHTarpScene");
			iLocal_2136 = 1;
		}
		if (iLocal_2136 == 1 && iLocal_2137 == 0)
		{
			if ((((((((((STREAMING::HAS_MODEL_LOADED(joaat("IG_LesterCrest")) && STREAMING::HAS_MODEL_LOADED(joaat("p_clothtarp_s"))) && STREAMING::HAS_MODEL_LOADED(Local_748.f_23)) && STREAMING::HAS_ANIM_DICT_LOADED("missheist_jewel")) && STREAMING::HAS_ANIM_DICT_LOADED("p_clothtarp_s")) && STREAMING::HAS_ANIM_DICT_LOADED("missheist_jewel@tarp")) && STREAMING::HAS_ANIM_SET_LOADED("move_lester_CaneUp")) && !ENTITY::DOES_ENTITY_EXIST(iLocal_443)) && AUDIO::REQUEST_AMBIENT_AUDIO_BANK("JWL_HEIST_FINALE_TARP", false, -1)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "JHTarpScene")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(2, "JHTarpScene"))
			{
				iLocal_443 = PED::CREATE_PED(26, joaat("IG_LesterCrest"), 206.7173f, -2024.6572f, 17.2513f, 227.0582f, true, true);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_443, 0, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_443, 2, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_443, 3, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_443, 4, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_443, 5, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_443, 7, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_443, 8, 1, 0, 0);
				PED::SET_PED_PROP_INDEX(iLocal_443, 1, 0, 0, false);
				ENTITY::SET_ENTITY_HEALTH(iLocal_443, 500, 0);
				PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_443, false);
				TASK::TASK_PLAY_ANIM(iLocal_443, "missheist_jewel", "hacker_waive_in_lester", 8f, -4f, -1, 1, 0f, false, false, false);
				TASK::TASK_LOOK_AT_ENTITY(iLocal_443, func_94(0), -1, 2048, 2);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_443, true);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_443, joaat("PLAYER"));
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_443, true, false);
				PED::SET_PED_LOD_MULTIPLIER(iLocal_443, 2f);
				iLocal_455 = OBJECT::CREATE_OBJECT(Local_748.f_23, ENTITY::GET_ENTITY_COORDS(iLocal_443, false), true, true, false);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_455, iLocal_443, PED::GET_PED_BONE_INDEX(iLocal_443, 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
				PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(iLocal_443, "move_lester_CaneUp");
				__LIB_0__::func_222(&uLocal_539, __LIB_13__::func_103("E"), iLocal_443, "LESTER", 0, 1);
				iLocal_2135 = OBJECT::CREATE_OBJECT(joaat("p_clothtarp_s"), Local_84, true, true, false);
				ENTITY::SET_ENTITY_ROTATION(iLocal_2135, Local_85, 2, true);
				iLocal_2137 = 1;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2135))
		{
			ENTITY::SET_ENTITY_COORDS(iLocal_2135, Local_84, true, false, false, true);
			ENTITY::SET_ENTITY_ROTATION(iLocal_2135, Local_85, 2, true);
		}
		RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
		if (ENTITY::DOES_ENTITY_EXIST(func_94(1)) && ENTITY::DOES_ENTITY_EXIST(iLocal_460))
		{
			if (VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iLocal_460, 5) < 0.05f)
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_456[0]));
				VEHICLE::DELETE_VEHICLE(&(iLocal_456[1]));
				VEHICLE::DELETE_VEHICLE(&(iLocal_456[2]));
				PED::DELETE_PED(&(iLocal_436[0]));
				PED::DELETE_PED(&(iLocal_436[1]));
				ENTITY::SET_ENTITY_VISIBLE(func_94(1), false, false);
			}
			else if (!ENTITY::IS_ENTITY_DEAD(iLocal_460, false))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_456[0], false))
				{
					if (!ENTITY::IS_ENTITY_ATTACHED(iLocal_456[0]))
					{
						ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_456[0], iLocal_460, 0, ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_460, ENTITY::GET_ENTITY_COORDS(iLocal_456[0], true)), ENTITY::GET_ENTITY_ROTATION(iLocal_456[0], 2) - ENTITY::GET_ENTITY_ROTATION(iLocal_460, 2), false, false, false, false, 2, true, 0);
						ENTITY::SET_ENTITY_COLLISION(iLocal_456[0], false, false);
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_456[1], false))
				{
					if (!ENTITY::IS_ENTITY_ATTACHED(iLocal_456[1]))
					{
						ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_456[1], iLocal_460, 0, ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_460, ENTITY::GET_ENTITY_COORDS(iLocal_456[1], true)), ENTITY::GET_ENTITY_ROTATION(iLocal_456[1], 2) - ENTITY::GET_ENTITY_ROTATION(iLocal_460, 2), false, false, false, false, 2, true, 0);
						ENTITY::SET_ENTITY_COLLISION(iLocal_456[1], false, false);
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_456[2], false))
				{
					if (!ENTITY::IS_ENTITY_ATTACHED(iLocal_456[2]))
					{
						ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_456[2], iLocal_460, 0, ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_460, ENTITY::GET_ENTITY_COORDS(iLocal_456[2], true)), ENTITY::GET_ENTITY_ROTATION(iLocal_456[2], 2) - ENTITY::GET_ENTITY_ROTATION(iLocal_460, 2), false, false, false, false, 2, true, 0);
						ENTITY::SET_ENTITY_COLLISION(iLocal_456[2], false, false);
					}
				}
			}
		}
		switch (iLocal_417)
		{
			case 0:
				if (bLocal_382)
				{
					if (AUDIO::PREPARE_MUSIC_EVENT("JH2A_ARRIVE_STOP_TRACK"))
					{
						AUDIO::TRIGGER_MUSIC_EVENT("JH2A_ARRIVE_STOP_TRACK");
						iLocal_417 = 2;
					}
				}
				else if (AUDIO::PREPARE_MUSIC_EVENT("JH2B_ARRIVE_STOP_TRACK"))
				{
					AUDIO::TRIGGER_MUSIC_EVENT("JH2B_ARRIVE_STOP_TRACK");
					iLocal_417 = 2;
				}
				iLocal_417 = 2;
				break;
			case 2:
			case 3:
			case 4:
			case 5:
			case 6:
			case 7:
			case 8:
			case 9:
			case 10:
			case 11:
			case 12:
				if (HUD::DOES_BLIP_EXIST(Local_370.f_5))
				{
					if (iLocal_417 == 2)
					{
						if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING() && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 207.8754f, -2024.499f, 17.2804f, 255f, 255f, 20f, false, true, 0))
						{
							if (__LIB_17__::func_243(&uLocal_539, "JHAUD", "JH_END2", 9, 0, 0, 0))
							{
								iLocal_417 = 3;
							}
						}
					}
					if (iLocal_417 == 3)
					{
						if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 207.8754f, -2024.499f, 17.2804f, 255f, 255f, 20f, false, true, 0))
						{
							if (__LIB_17__::func_243(&uLocal_539, "JHAUD", "JH_CELEBRATE", 9, 0, 0, 0))
							{
								iLocal_417 = 4;
							}
						}
					}
					if (iLocal_417 == 4)
					{
						if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							if (__LIB_17__::func_243(&uLocal_539, "JHAUD", "JH_CELEB", 9, 0, 0, 0))
							{
								iLocal_417 = 5;
							}
						}
					}
					if (iLocal_417 == 5)
					{
						if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							if (func_116())
							{
								if (__LIB_17__::func_243(&uLocal_539, "JHAUD", "JH_CELEB_GM", 9, 0, 0, 0))
								{
									iLocal_417 = 6;
								}
							}
							else if (func_117())
							{
								if (__LIB_17__::func_243(&uLocal_539, "JHAUD", "JH_CELEB_PM", 9, 0, 0, 0))
								{
									iLocal_417 = 6;
								}
							}
						}
						if (bLocal_425)
						{
							iLocal_417 = 6;
						}
					}
					if (iLocal_417 == 6)
					{
						if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							if (func_120())
							{
								if (__LIB_17__::func_243(&uLocal_539, "JHAUD", "JH_CEL_ET", 9, 0, 0, 0))
								{
									iLocal_417 = 7;
								}
							}
							else if (__LIB_17__::func_243(&uLocal_539, "JHAUD", "JH_CEL_KD", 9, 0, 0, 0))
							{
								iLocal_417 = 7;
							}
						}
					}
					if (iLocal_417 == 7)
					{
						if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							if (func_630())
							{
								if (__LIB_17__::func_243(&uLocal_539, "JHAUD", "JH_HCKCEL_PH", 9, 0, 0, 0))
								{
									iLocal_417 = 8;
								}
							}
							else if (func_629())
							{
								if (__LIB_17__::func_243(&uLocal_539, "JHAUD", "JH_HCKCEL_CF", 9, 0, 0, 0))
								{
									iLocal_417 = 8;
								}
							}
							else if (func_628())
							{
								if (__LIB_17__::func_243(&uLocal_539, "JHAUD", "JH_HCKCEL_RL", 9, 0, 0, 0))
								{
									iLocal_417 = 8;
								}
							}
						}
					}
					if (iLocal_417 == 8)
					{
						iLocal_417 = 9;
					}
					if (iLocal_417 == 9)
					{
						if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 207.8754f, -2024.499f, 17.2804f, 20f, 20f, 20f, false, true, 0))
						{
							if (__LIB_17__::func_243(&uLocal_539, "JHAUD", "JH_WAVEIN", 9, 0, 0, 0))
							{
								RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 4);
								iLocal_417 = 10;
							}
						}
					}
					if (iLocal_417 == 10)
					{
						if (__LIB_17__::func_243(&uLocal_539, "JHAUD", "JH_GEMGUY", 9, 0, 0, 0) && !AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							iLocal_417 = 11;
						}
					}
					if (iLocal_417 == 11)
					{
						if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 204.2339f, -2003.6603f, 17.8616f, 20.5f, 20.5f, 4f, false, true, 0))
						{
							if (!PED::IS_PED_INJURED(iLocal_443))
							{
								TASK::CLEAR_PED_TASKS(iLocal_443);
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_443, iLocal_460, 15000);
								iLocal_417 = 12;
							}
						}
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_443, false))
				{
					if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iLocal_460, iLocal_443) && (MISC::GET_GAME_TIMER() - iLocal_2139) > 6000)
					{
						__LIB_0__::func_709(iLocal_443, "GENERIC_CURSE_HIGH", "LESTER", 3);
						iLocal_2139 = MISC::GET_GAME_TIMER();
					}
				}
				if (__LIB_17__::func_732(&Local_370, 204.2339f, -2003.6603f, 17.8616f, 0.1f, 0.1f, 2f, 1, iLocal_436[2], 0, 0, iLocal_460, "G_MIKEHOUSE", "", "", "", "", "G_JHTRUCK", "G_JHTRUCK", 1, 1, 1, -1) || (HUD::DOES_BLIP_EXIST(Local_370.f_5) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_460, 209.6063f, -2005.6425f, 17.361458f, 212.18361f, -2012.6353f, 21.525574f, 11f, false, true, 0)))
				{
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
					CUTSCENE::REQUEST_CUTSCENE("JH_2_CELEB", 8);
					__LIB_0__::func_325();
					ENTITY::CREATE_MODEL_HIDE(207.3416f, -2009.9231f, 17.8473f, 1f, joaat("prop_rub_binbag_03"), true);
					__LIB_17__::func_221(&Local_370, 0);
					AUDIO::STOP_AUDIO_SCENE("JSH_2B_GO_TO_LOCKUP");
					if (!CAM::DOES_CAM_EXIST(iLocal_744))
					{
						iLocal_744 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);
					}
					if (!CAM::DOES_CAM_EXIST(iLocal_745))
					{
						iLocal_745 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
					}
					CAM::SET_CAM_COORD(iLocal_744, 210.34914f, -2023.8848f, 19.040403f);
					CAM::SET_CAM_ROT(iLocal_744, 6.383267f, 0f, 8.404858f, 2);
					CAM::SET_CAM_FOV(iLocal_744, 39.818157f);
					CAM::SET_CAM_COORD(iLocal_745, 210.97583f, -2022.5837f, 23.660158f);
					CAM::SET_CAM_ROT(iLocal_745, 5.365558f, 0f, 13.652684f, 2);
					CAM::SET_CAM_FOV(iLocal_745, 39.818157f);
					CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_745, iLocal_744, 14000, 1, 1);
					CAM::SHAKE_CAM(iLocal_745, "HAND_SHAKE", 0.4f);
					CAM::RENDER_SCRIPT_CAMS(true, false, 3500, true, false, 0);
					SYSTEM::SETTIMERA(0);
					MISC::CLEAR_AREA(204.7989f, -2002.9592f, 17.8615f, 80f, true, true, true, false);
					GRAPHICS::REMOVE_DECALS_IN_RANGE(204.7989f, -2002.9592f, 17.8615f, 80f);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
					if (__LIB_6__::func_177(ENTITY::GET_ENTITY_HEADING(iLocal_460), 15.0468f, 90f))
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_460, 1, "JHTarpScene", true);
						VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_460, 4600f);
						iLocal_2138 = 1;
					}
					else
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_460, 2, "JHTarpScene", true);
						VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_460, 4400f);
						iLocal_2138 = 0;
					}
					VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_460, true);
					__LIB_0__::func_532(1, 1, 1, 0, 0, 0, 0);
					SYSTEM::SETTIMERA(0);
					iLocal_417 = 13;
				}
				break;
			case 13:
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Michael", PLAYER::PLAYER_PED_ID(), 0);
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_460, false))
				{
					VEHICLE::SET_FORCE_HD_VEHICLE(iLocal_460, true);
				}
				if (bLocal_382)
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lester", 0, 0, 0, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lester", 2, 0, 0, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lester", 3, 1, 0, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lester", 4, 1, 0, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lester", 5, 0, 0, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lester", 7, 0, 0, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lester", 8, 1, 0, 0);
					CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Lester", 1, 0, 0, 0);
					__LIB_17__::func_43("Franklin", joaat("Player_One"), 8);
					__LIB_32__::func_98("Driver_selection", __LIB_16__::func_594(0, 0), 1, 1);
					if (!bLocal_425)
					{
						__LIB_32__::func_98("gunman_selection_1", __LIB_16__::func_594(0, 1), 1, 1);
					}
					__LIB_32__::func_98("hacker_selection", __LIB_16__::func_594(0, 2), 0, 1);
				}
				else
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lester", 0, 0, 0, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lester", 2, 0, 0, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lester", 3, 1, 0, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lester", 4, 1, 0, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lester", 5, 0, 0, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lester", 7, 0, 0, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lester", 8, 1, 0, 0);
					CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Lester", 1, 0, 0, 0);
					__LIB_17__::func_43("Franklin", joaat("Player_One"), 18);
					CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Michael", 2, 0, 0, 0);
					__LIB_32__::func_98("Driver_selection", __LIB_16__::func_594(0, 0), 10, 1);
					if (!bLocal_425)
					{
						__LIB_32__::func_98("gunman_selection_1", __LIB_16__::func_594(0, 1), 10, 1);
					}
					__LIB_32__::func_98("hacker_selection", __LIB_16__::func_594(0, 2), 0, 1);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_460, false))
				{
					VEHICLE::SET_FORCE_HD_VEHICLE(iLocal_460, true);
				}
				HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
				if (SYSTEM::TIMERA() > 3000 && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
				}
				if ((SYSTEM::TIMERA() > 5000 && !AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()) && __LIB_0__::func_90())
				{
					if (bLocal_425)
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_436[1], "gunman_selection_1", 3, joaat("HC_Gunman"), 0);
					}
					VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_460, false, false, false);
					CUTSCENE::START_CUTSCENE(0);
					RECORDING::REPLAY_START_EVENT(4);
					SYSTEM::SETTIMERA(0);
					iLocal_417 = 14;
				}
				break;
			case 14:
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_460, false))
				{
					VEHICLE::SET_FORCE_HD_VEHICLE(iLocal_460, true);
				}
				PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					if (iLocal_2138 == 1)
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_460, 204.7989f, -2002.9592f, 17.8615f, true, false, false, true);
					}
					MISC::CLEAR_AREA(204.7989f, -2002.9592f, 17.8615f, 80f, true, true, true, false);
					GRAPHICS::REMOVE_DECALS_IN_RANGE(204.7989f, -2002.9592f, 17.8615f, 80f);
					CUTSCENE::SET_CUTSCENE_FADE_VALUES(false, false, true, false);
					PED::DELETE_PED(&iLocal_443);
					PED::DELETE_PED(&(iLocal_436[2]));
				}
				HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
				if (IntToFloat(CUTSCENE::GET_CUTSCENE_TIME()) > 2966.667f)
				{
					ENTITY::PLAY_ENTITY_ANIM(iLocal_2135, "p_clothtarp_s_fall", "p_clothtarp_s", 1000f, false, true, false, 0f, 0);
					ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_2135);
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "TARP", iLocal_2135, "JEWEL_HEIST_SOUNDS", false, 0);
					iLocal_417 = 15;
				}
				break;
			case 15:
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_460, false))
				{
					VEHICLE::SET_FORCE_HD_VEHICLE(iLocal_460, true);
				}
				if (IntToFloat(CUTSCENE::GET_CUTSCENE_TIME()) > 34500f)
				{
					if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(3000);
					}
				}
				if (!CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					iLocal_417 = 16;
				}
				break;
		}
		if (iLocal_417 >= 16)
		{
			__LIB_17__::func_221(&Local_370, 0);
			STREAMING::REMOVE_ANIM_DICT("missheist_jewel@hacking");
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_LesterCrest"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("p_clothtarp_s"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_748.f_23);
			STREAMING::REMOVE_ANIM_DICT("p_clothtarp_s");
			if (HUD::DOES_BLIP_EXIST(iLocal_487))
			{
				HUD::REMOVE_BLIP(&iLocal_487);
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_496))
			{
				HUD::REMOVE_BLIP(&iLocal_496);
			}
			RECORDING::REPLAY_STOP_EVENT();
			iLocal_416 = 0;
			while (iLocal_416 <= 3)
			{
				func_568(&(iLocal_436[iLocal_416]), 1);
				iLocal_416++;
			}
			iLocal_416 = 0;
			while (iLocal_416 <= 5)
			{
				func_568(&(iLocal_441[iLocal_416]), 1);
				iLocal_416++;
			}
			iLocal_416 = 0;
			while (iLocal_416 <= 3)
			{
				func_568(&(iLocal_442[iLocal_416]), 1);
				iLocal_416++;
			}
			iLocal_416 = 0;
			while (iLocal_416 <= 4)
			{
				func_568(&(iLocal_438[iLocal_416]), 1);
				iLocal_416++;
			}
			func_568(&iLocal_437, 1);
			func_568(&iLocal_440, 1);
			func_568(&iLocal_443, 1);
			func_567(&iLocal_467, 1);
			iLocal_416 = 0;
			while (iLocal_416 <= 3)
			{
				func_565(&(iLocal_456[iLocal_416]), 1);
				iLocal_416++;
			}
			func_565(&iLocal_457, 1);
			iLocal_416 = 0;
			while (iLocal_416 <= 5)
			{
				func_565(&(iLocal_458[iLocal_416]), 1);
				iLocal_416++;
			}
			func_565(&iLocal_460, 1);
			func_565(&iLocal_462, 1);
			func_565(&iLocal_463, 1);
			func_565(&iLocal_465, 1);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			__LIB_0__::func_532(0, 1, 1, 0, 0, 0, 0);
			iLocal_383 = 0;
			return 1;
		}
	}
	return 0;
}

void func_565(int* iParam0, bool bParam1)//Position - 0x79955
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (bParam1)
		{
			__LIB_3__::func_87(*iParam0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(*iParam0))
				{
					ENTITY::DETACH_ENTITY(*iParam0, false, true);
				}
			}
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, false);
			}
			VEHICLE::DELETE_VEHICLE(iParam0);
		}
		else
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam0);
		}
	}
}

void func_567(int* iParam0, bool bParam1)//Position - 0x79A50
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (bParam1)
		{
			if (ENTITY::IS_ENTITY_ATTACHED(*iParam0))
			{
				ENTITY::DETACH_ENTITY(*iParam0, false, true);
			}
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, false);
			}
			OBJECT::DELETE_OBJECT(iParam0);
		}
		else
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(iParam0);
		}
	}
}

void func_568(int* iParam0, bool bParam1)//Position - 0x79A9D
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (bParam1)
		{
			if (!PED::IS_PED_INJURED(*iParam0))
			{
				if (!PED::IS_PED_INJURED(*iParam0))
				{
					if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, false);
					}
				}
			}
			PED::DELETE_PED(iParam0);
		}
		else
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
		}
	}
}

bool func_628()//Position - 0x7D158
{
	return __LIB_16__::func_594(0, 2) == 12;
}

bool func_629()//Position - 0x7D169
{
	return __LIB_16__::func_594(0, 2) == 7;
}

bool func_630()//Position - 0x7D179
{
	return __LIB_16__::func_594(0, 2) == 6;
}

void func_649(bool bParam0)//Position - 0x7D945
{
	MISC::ENABLE_DISPATCH_SERVICE(5, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(3, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(1, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(2, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(6, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(4, bParam0);
}

void func_652(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x7DA4E
{
	int iVar0;
	int iVar1;
	int iVar2;
	char[] cVar3[8];
	int iVar4;
	var uVar5;
	int iVar6;
	if (iParam3 == 1)
	{
		if (!MISC::ARE_STRINGS_EQUAL("FinaleC2", SCRIPT::GET_THIS_SCRIPT_NAME()))
		{
		}
	}
	iVar0 = 0;
	if (iParam3 == 1)
	{
		if (iParam0 != Global_100478)
		{
			iVar0 = 1;
		}
	}
	else if (iParam0 > Global_100478)
	{
		iVar0 = 1;
	}
	if (iVar0 == 1)
	{
		__LIB_0__::func_179(1);
		if (iParam0 <= Global_100478)
		{
		}
		iVar1 = __LIB_0__::func_365(SCRIPT::GET_THIS_SCRIPT_NAME(), 1);
		if (iVar1 != -1 && iVar1 != 94)
		{
			Global_113386.f_9085.f_330[iVar1 /*6*/].f_1 = 0;
			iVar2 = __LIB_0__::func_510(iVar1);
			cVar3 = { Global_91229[iVar1 /*34*/].f_8 };
			if (iVar1 == 90)
			{
				switch (Global_113386.f_9085.f_99.f_205[7])
				{
					case 1:
						StringConCat(&cVar3, "A", 8);
						break;
					case 2:
						StringConCat(&cVar3, "B", 8);
						break;
					}
			}
			STATS::PLAYSTATS_MISSION_CHECKPOINT(&cVar3, iVar2, Global_100478, iParam0);
		}
		else
		{
			iVar4 = __LIB_0__::func_531(SCRIPT::GET_THIS_SCRIPT_NAME(), 1);
			if (iVar4 != -1)
			{
				Global_113386.f_18574[iVar4 /*6*/].f_4 = 0;
				MemCopy(&uVar5, {__LIB_0__::func_45(iVar4)}, 4);
				STATS::PLAYSTATS_MISSION_CHECKPOINT(&uVar5, 0, Global_100478, iParam0);
			}
			else
			{
				iVar6 = __LIB_0__::func_125(&(Global_100441.f_3));
				if (iVar6 > -1)
				{
					Global_113386.f_24986.f_4[iVar6] = 0;
				}
			}
		}
		Global_94619 = iParam2;
		Global_100478 = iParam0;
		func_653(iParam0, sParam1, iParam4, iParam5);
		if (MISC::ARE_STRINGS_EQUAL(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_100478)
	{
	}
}

void func_653(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x7DBC5
{
	func_654(&Global_106934, SCRIPT::GET_THIS_SCRIPT_NAME(), iParam0, uParam1, iParam3, iParam2);
}

void func_654(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5)//Position - 0x7DBE1
{
	int iVar0;
	int iVar1;
	*uParam0 = __LIB_15__::func_944();
	uParam0->f_1 = __LIB_11__::func_762();
	MISC::GET_CURR_WEATHER_STATE(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		__LIB_17__::func_186(&(uParam0->f_2884), 0);
		__LIB_16__::func_26(PLAYER::PLAYER_PED_ID());
		func_241(PLAYER::PLAYER_PED_ID(), 0);
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &(uParam0->f_2), true);
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("OBJECT"))
		{
			uParam0->f_2 = joaat("WEAPON_UNARMED");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_17[iVar1] = Global_113386.f_2363.f_539.f_294[iVar1];
		if (iVar1 == __LIB_15__::func_944())
		{
			__LIB_16__::func_32(PLAYER::PLAYER_PED_ID(), &(uParam0->f_616[iVar1 /*65*/]), 1, -1);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 12)
			{
				uParam0->f_616[iVar1 /*65*/][iVar0] = Global_100166[iVar1 /*65*/][iVar0];
				uParam0->f_616[iVar1 /*65*/].f_13[iVar0] = Global_100166[iVar1 /*65*/].f_13[iVar0];
				iVar0++;
			}
			uParam0->f_616[iVar1 /*65*/].f_59 = Global_100166[iVar1 /*65*/].f_59;
			uParam0->f_616[iVar1 /*65*/].f_60 = Global_100166[iVar1 /*65*/].f_60;
			uParam0->f_616[iVar1 /*65*/].f_61 = Global_100166[iVar1 /*65*/].f_61;
			uParam0->f_616[iVar1 /*65*/].f_62 = Global_100166[iVar1 /*65*/].f_62;
			uParam0->f_616[iVar1 /*65*/].f_63 = Global_100166[iVar1 /*65*/].f_63;
			uParam0->f_616[iVar1 /*65*/].f_64 = Global_100166[iVar1 /*65*/].f_64;
			iVar0 = 0;
			while (iVar0 < 9)
			{
				uParam0->f_616[iVar1 /*65*/].f_39[iVar0] = Global_100166[iVar1 /*65*/].f_39[iVar0];
				uParam0->f_616[iVar1 /*65*/].f_49[iVar0] = Global_100166[iVar1 /*65*/].f_49[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_812[iVar1 /*477*/][iVar0 /*5*/] = { Global_113386.f_2363.f_539.f_298[iVar1 /*477*/][iVar0 /*5*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 51)
		{
			uParam0->f_812[iVar1 /*477*/].f_221[iVar0 /*5*/] = { Global_113386.f_2363.f_539.f_298[iVar1 /*477*/].f_221[iVar0 /*5*/] };
			iVar0++;
		}
		switch (iVar1)
		{
			case 0:
				STATS::STAT_GET_INT(joaat("SP0_WEAP_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
			case 1:
				STATS::STAT_GET_INT(joaat("SP1_WEAP_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
			case 2:
				STATS::STAT_GET_INT(joaat("SP2_WEAP_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
		}
		uParam0->f_9[iVar1] = Global_113386.f_20564.f_233[iVar1 /*69*/].f_1;
		uParam0->f_13[iVar1] = Global_60328[iVar1];
		uParam0->f_25[0 /*295*/][iVar1 /*98*/] = { Global_113386.f_2363.f_539.f_2407[0 /*295*/][iVar1 /*98*/] };
		uParam0->f_25[1 /*295*/][iVar1 /*98*/] = { Global_113386.f_2363.f_539.f_2407[1 /*295*/][iVar1 /*98*/] };
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_2838[iVar1 /*15*/][iVar0] = Global_113386.f_2363.f_493[iVar1 /*15*/][iVar0];
			uParam0->f_2838[iVar1 /*15*/].f_5[iVar0] = Global_113386.f_2363.f_493[iVar1 /*15*/].f_5[iVar0];
			uParam0->f_2838[iVar1 /*15*/].f_10[iVar0] = Global_113386.f_2363.f_493[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_2345[iVar1 /*164*/][iVar0] = Global_113386.f_2363[iVar1 /*164*/][iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_4[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_4[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_8[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_8[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_12[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_12[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_16[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_16[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_20[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_20[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_24[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_24[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_28[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_28[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_32[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_32[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_36[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_36[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_40[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_40[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_44[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_44[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_48[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_48[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_52[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_52[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_56[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_56[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_60[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_60[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_64[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_64[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_68[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_68[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_72[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_72[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_76[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_76[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_80[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_80[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_84[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_84[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_88[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_88[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_92[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_92[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_96[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_96[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_100[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_100[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_104[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_104[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_108[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_108[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_112[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_112[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_116[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_116[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_120[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_120[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_124[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_124[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_128[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_128[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_132[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_132[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_136[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_136[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_140[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_140[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_144[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_144[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_148[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_148[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_152[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_152[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_156[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_156[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_160[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	STATS::STAT_GET_INT(joaat("SP0_SPECIAL_ABILITY"), &(uParam0->f_2341[0]), -1);
	STATS::STAT_GET_INT(joaat("SP1_SPECIAL_ABILITY"), &(uParam0->f_2341[1]), -1);
	STATS::STAT_GET_INT(joaat("SP2_SPECIAL_ABILITY"), &(uParam0->f_2341[2]), -1);
	uParam0->f_5 = 145;
	if (iParam4 == 1)
	{
		__LIB_32__::func_103(&(uParam0->f_2890), uParam0, iParam5, 1, 1, 0);
	}
	__LIB_0__::func_384(&(uParam0->f_2980));
	uParam3 = uParam3;
	uParam2 = uParam2;
}

int func_703()//Position - 0x83CC7
{
	if (!iLocal_383)
	{
		__LIB_12__::func_849(9, 0);
		__LIB_12__::func_849(8, 0);
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_456[2], false))
		{
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_456[2], "JSH_2B_PLAYER_BIKE", 0f);
			AUDIO::SET_AUDIO_VEHICLE_PRIORITY(iLocal_456[2], 3);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_456[0], false))
		{
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_456[0], "JSH_2B_BUDDY_BIKES", 0f);
			AUDIO::SET_AUDIO_VEHICLE_PRIORITY(iLocal_456[0], 3);
		}
		if (!bLocal_425)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_456[1], false))
			{
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_456[1], "JSH_2B_BUDDY_BIKES", 0f);
				AUDIO::SET_AUDIO_VEHICLE_PRIORITY(iLocal_456[1], 3);
			}
		}
		AUDIO::SET_AUDIO_FLAG("OnlyAllowScriptTriggerPoliceScanner", true);
		if (bLocal_382)
		{
			func_652(7, "STAGE_CUTSCENE_RAMP_DOWN", 0, 0, 0, 1);
		}
		else
		{
			func_652(6, "STAGE_CUTSCENE_RAMP_DOWN", 0, 0, 0, 1);
		}
		Global_100441.f_12[0] = iLocal_413;
		AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("JWL_HEIST_CAR_SMASHES_BIG");
		AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("ALARM_BELL_02");
		AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("JWL_HEIST_RAID_GLASS_SMASH");
		AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK(Local_748.f_247);
		__LIB_17__::func_221(&Local_370, 0);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("police"));
		VEHICLE::REMOVE_VEHICLE_RECORDING(700, "JHUBER");
		VEHICLE::REMOVE_VEHICLE_RECORDING(998, "JHUBER");
		func_750();
		VEHICLE::DELETE_MISSION_TRAIN(&iLocal_274);
		__LIB_39__::func_104();
		func_133();
		VEHICLE::REQUEST_VEHICLE_RECORDING(1, "JHLoadVan");
		VEHICLE::REQUEST_VEHICLE_RECORDING(2, "JHLoadVan");
		VEHICLE::REQUEST_VEHICLE_RECORDING(3, "JHLoadVan");
		AUDIO::REQUEST_AMBIENT_AUDIO_BANK("TRUCK_RAMP_DOOR", false, -1);
		STREAMING::REQUEST_ANIM_DICT("MISSHeist_Jewel");
		STREAMING::PREFETCH_SRL("JHRAMPDOWNSCENE");
		while (((((!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "JHLoadVan") || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(2, "JHLoadVan")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(3, "JHLoadVan")) || !AUDIO::REQUEST_AMBIENT_AUDIO_BANK("TRUCK_RAMP_DOOR", false, -1)) || !STREAMING::HAS_ANIM_DICT_LOADED("MISSHeist_Jewel")) || !STREAMING::IS_SRL_LOADED())
		{
			SYSTEM::WAIT(0);
		}
		GRAPHICS::SET_PARTICLE_FX_BANG_SCRAPE_LODRANGE_SCALE(0f);
		func_129(1, 0);
		func_748(0, 0, 1, 1, 1);
		STREAMING::BEGIN_SRL();
		__LIB_0__::func_345(&uLocal_704, 0, 0);
		if (iLocal_2128 != 0)
		{
			CAM::SET_FOLLOW_VEHICLE_CAM_VIEW_MODE(iLocal_2128);
		}
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
		iLocal_416 = 0;
		while (iLocal_416 <= 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_456[iLocal_416]))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_456[iLocal_416], true, true);
			}
			iLocal_416++;
		}
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_436[0], true, true);
		if (!bLocal_425)
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_436[1], true, true);
		}
		func_726(1);
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			func_721(0);
			func_9(iLocal_436[1], 1, 0);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_436[0], false))
			{
				PED::SET_PED_HELMET_PROP_INDEX(iLocal_436[1], 3, true);
				PED::SET_PED_HELMET_TEXTURE_INDEX(iLocal_436[1], 0);
				PED::SET_PED_PROP_INDEX(iLocal_436[0], 0, 3, 0, false);
				PED::GIVE_PED_HELMET(iLocal_436[0], true, 16384, -1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_436[1], false))
			{
				PED::SET_PED_HELMET_PROP_INDEX(iLocal_436[1], 4, true);
				PED::SET_PED_HELMET_TEXTURE_INDEX(iLocal_436[1], 0);
				PED::SET_PED_PROP_INDEX(iLocal_436[1], 0, 4, 0, false);
				PED::GIVE_PED_HELMET(iLocal_436[1], true, 16384, -1);
			}
			if (!PED::IS_PED_INJURED(func_94(1)))
			{
				PED::SET_PED_HELMET_PROP_INDEX(func_94(1), 6, true);
				PED::SET_PED_HELMET_TEXTURE_INDEX(func_94(1), 8);
				PED::SET_PED_PROP_INDEX(func_94(1), 0, 6, 8, false);
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_460, false))
		{
			if (!PED::IS_PED_INJURED(iLocal_436[2]))
			{
				if (!PED::IS_PED_IN_VEHICLE(iLocal_436[2], iLocal_460, false))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_436[2]);
					PED::SET_PED_INTO_VEHICLE(iLocal_436[2], iLocal_460, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_436[2], false, false);
				}
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_436[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_456[0], false))
		{
			VEHICLE::SET_VEHICLE_FIXED(iLocal_456[0]);
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_456[0]);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_436[0], false);
			if (!PED::IS_PED_IN_VEHICLE(iLocal_436[0], iLocal_456[0], false))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_436[0]);
				PED::SET_PED_INTO_VEHICLE(iLocal_436[0], iLocal_456[0], -1);
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_436[1]) && !ENTITY::IS_ENTITY_DEAD(iLocal_456[1], false))
		{
			VEHICLE::SET_VEHICLE_FIXED(iLocal_456[1]);
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_456[1]);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_436[1], false);
			if (!PED::IS_PED_IN_VEHICLE(iLocal_436[1], iLocal_456[1], false))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_436[1]);
				PED::SET_PED_INTO_VEHICLE(iLocal_436[1], iLocal_456[1], -1);
			}
		}
		if (!PED::IS_PED_INJURED(func_94(1)) && !ENTITY::IS_ENTITY_DEAD(iLocal_456[2], false))
		{
			VEHICLE::SET_VEHICLE_FIXED(iLocal_456[2]);
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_456[2]);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(func_94(1));
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_94(1), false);
			PED::SET_PED_INTO_VEHICLE(func_94(1), iLocal_456[2], -1);
			PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(func_94(1), 1);
		}
		func_720(iLocal_460, func_94(0), Local_333, fLocal_334);
		func_720(iLocal_456[0], iLocal_436[0], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_460, -0.25f, -10f, -1f), fLocal_334);
		func_720(iLocal_456[1], iLocal_436[1], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_460, 0.8f, -15f, -1f), fLocal_334);
		func_720(iLocal_456[2], func_94(1), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_460, -0.1f, -20f, -1f), fLocal_334);
		iLocal_416 = 0;
		while (iLocal_416 <= 24)
		{
			iLocal_408[iLocal_416] = 0;
			iLocal_416++;
		}
		if (!PED::IS_PED_INJURED(iLocal_436[2]))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_436[2], true);
		}
		iLocal_416 = 0;
		while (iLocal_416 <= 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_456[iLocal_416]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_456[iLocal_416], false))
				{
					VEHICLE::SET_VEHICLE_FIXED(iLocal_456[iLocal_416]);
				}
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_486[iLocal_416]))
			{
				HUD::REMOVE_BLIP(&(iLocal_486[iLocal_416]));
			}
			iLocal_416++;
		}
		MISC::SET_FAKE_WANTED_LEVEL(0);
		__LIB_15__::func_907();
		func_114();
		func_111(800, 0, 0);
		iLocal_416 = 0;
		while (iLocal_416 <= 24)
		{
			iLocal_408[iLocal_416] = 0;
			iLocal_416++;
		}
		iLocal_417 = 0;
		iLocal_384 = 0;
		iLocal_383 = 1;
		PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
		__LIB_0__::func_532(1, 1, 1, 0, 0, 0, 0);
		func_718(657.07623f, -1879.3612f, 9.100791f, 8.990174f, 0.270771f, 33.970856f, 34.12487f, 656.5653f, -1878.1232f, 9.054264f, 8.990174f, 0.270771f, 33.970856f, 34.12487f, 3000, 0);
		func_717("ROAD_VIBRATION_SHAKE", 0.1f);
		SYSTEM::SETTIMERA(0);
		iLocal_384 = 1;
		MISC::CLEAR_AREA_OF_PEDS(657.07623f, -1879.3612f, 9.100791f, 200f, 0);
		TASK::TASK_LOOK_AT_COORD(iLocal_436[2], 635.0606f, -1848.388f, 10.1182f, 4000, 2048, 2);
		TASK::TASK_PLAY_ANIM(func_94(0), "MISSHeist_Jewel", "Michael_InTruck_Shouting", 8f, -8f, -1, 40, 0f, false, false, false);
		VEHICLE::ROLL_DOWN_WINDOW(iLocal_460, 0);
		if (bLocal_382)
		{
			AUDIO::TRIGGER_MUSIC_EVENT("JH2A_ENTER_TRUCK");
		}
		else
		{
			AUDIO::TRIGGER_MUSIC_EVENT("JH2B_ENTER_TRUCK");
		}
		func_709(Local_748.f_130, 1, 0, 1, 7, 0, 0);
		AUDIO::START_AUDIO_SCENE("JSH_2B_LOAD_UP_TRUCK");
		RECORDING::REPLAY_START_EVENT(4);
	}
	else
	{
		STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(0.9f);
		STREAMING::SET_SRL_TIME(SYSTEM::TO_FLOAT(SYSTEM::TIMERA()));
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_456[0], false))
		{
			VEHICLE::SET_FORCE_HD_VEHICLE(iLocal_456[0], true);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_456[1], false))
		{
			VEHICLE::SET_FORCE_HD_VEHICLE(iLocal_456[1], true);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_456[2], false))
		{
			VEHICLE::SET_FORCE_HD_VEHICLE(iLocal_456[2], true);
		}
		switch (iLocal_417)
		{
			case 0:
				if (!iLocal_384)
				{
				}
				else
				{
					if (SYSTEM::TIMERA() > 2000 && !iLocal_408[5])
					{
						func_708(iLocal_460, 1, 0.95f);
						iLocal_408[5] = 1;
					}
					if (SYSTEM::TIMERA() > 3000)
					{
						iLocal_417++;
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_456[0], 1, "JHLoadVan", true);
						ENTITY::SET_ENTITY_INVINCIBLE(iLocal_456[0], true);
						if (!bLocal_425)
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_456[1], 2, "JHLoadVan", true);
							ENTITY::SET_ENTITY_INVINCIBLE(iLocal_456[1], true);
						}
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_456[2], 3, "JHLoadVan", true);
						ENTITY::SET_ENTITY_INVINCIBLE(iLocal_456[2], true);
						if (Local_748.f_0 == joaat("sanchez"))
						{
							VEHICLE::SET_POSITION_OFFSET_FOR_RECORDED_VEHICLE_PLAYBACK(iLocal_456[0], 0f, 0f, 0.15f);
							if (!bLocal_425)
							{
								VEHICLE::SET_POSITION_OFFSET_FOR_RECORDED_VEHICLE_PLAYBACK(iLocal_456[1], 0f, 0f, 0.15f);
							}
							VEHICLE::SET_POSITION_OFFSET_FOR_RECORDED_VEHICLE_PLAYBACK(iLocal_456[2], 0f, 0f, 0.15f);
						}
						iLocal_384 = 0;
					}
				}
				break;
			case 1:
				if (!iLocal_384)
				{
					func_718(638.8626f, -1824.6198f, 8.847853f, 4.575484f, -1.939967f, 172.09265f, 34.24781f, 639.02997f, -1824.6198f, 8.847853f, 4.575484f, -1.939967f, 172.09265f, 34.24781f, 2500, 0);
					func_717("ROAD_VIBRATION_SHAKE", 0.1f);
					iLocal_384 = 1;
				}
				else
				{
					func_708(iLocal_460, 1, 0.95f);
					if (SYSTEM::TIMERA() > 0)
					{
						iLocal_417++;
						iLocal_384 = 0;
					}
				}
				break;
			case 2:
				if (!iLocal_384)
				{
					func_717("ROAD_VIBRATION_SHAKE", 0.1f);
					iLocal_2134 = 0;
					iLocal_384 = 1;
				}
				else
				{
					if (iLocal_2134 == 0 && SYSTEM::TIMERA() > 4700)
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "RAMP_DOWN", "TRUCK_RAMP_DOWN", true);
						iLocal_2134 = 1;
					}
					if (!iLocal_408[0] && SYSTEM::TIMERA() > 3750)
					{
						if (func_707(iLocal_456[0]))
						{
							func_706(iLocal_436[0], iLocal_456[0]);
							iLocal_408[0] = 1;
						}
					}
					if (SYSTEM::TIMERA() > 4800)
					{
						iLocal_417++;
						iLocal_384 = 0;
					}
				}
				break;
			case 3:
				if (!iLocal_384)
				{
					iLocal_384 = 1;
				}
				else
				{
					if (!iLocal_408[0] && SYSTEM::TIMERA() > 4800)
					{
						if (func_707(iLocal_456[0]))
						{
							func_706(iLocal_436[0], iLocal_456[0]);
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_460, true);
							iLocal_408[0] = 1;
						}
					}
					func_708(iLocal_460, 1, 0.95f);
					if (SYSTEM::TIMERA() > 5050)
					{
						iLocal_417++;
						iLocal_384 = 0;
					}
				}
				break;
			case 4:
				if (!iLocal_384)
				{
					func_718(668.66785f, -1764.7833f, 9.198649f, 2.612283f, -0.362411f, 165.77545f, 17.23542f, 664.33417f, -1764.7833f, 9.198649f, 2.612283f, -0.362411f, 165.77545f, 17.23542f, 20000, 0);
					SYSTEM::SETTIMERB(0);
					CAM::SET_CAM_DOF_PLANES(iLocal_745, 5f, 15f, 200f, 225f);
					iLocal_384 = 1;
				}
				else
				{
					CAM::SET_USE_HI_DOF();
					func_708(iLocal_460, 1, 0.95f);
					if (!iLocal_408[0] && SYSTEM::TIMERA() > 5050)
					{
						if (func_707(iLocal_456[0]))
						{
							func_706(iLocal_436[0], iLocal_456[0]);
							iLocal_408[0] = 1;
						}
					}
					if (!iLocal_408[1] && SYSTEM::TIMERA() > 5050)
					{
						if (!bLocal_425)
						{
							if (func_707(iLocal_456[1]))
							{
								func_706(iLocal_436[1], iLocal_456[1]);
								iLocal_408[1] = 1;
							}
						}
						else
						{
							iLocal_408[1] = 1;
						}
					}
					if (!iLocal_408[2] && SYSTEM::TIMERA() > 5400)
					{
						if (func_707(iLocal_456[2]))
						{
							func_706(func_94(1), iLocal_456[2]);
							func_708(iLocal_460, 0, 1065353216);
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_460, false);
							iLocal_408[2] = 1;
						}
					}
					iLocal_408[3] = 1;
					if (func_705() == 1)
					{
						if (!bLocal_425)
						{
							if (!func_707(iLocal_456[0]))
							{
								iLocal_408[3] = 0;
							}
						}
					}
					else
					{
						if (!func_707(iLocal_456[0]))
						{
							iLocal_408[3] = 0;
						}
						if (!bLocal_425)
						{
							if (!func_707(iLocal_456[1]))
							{
								iLocal_408[3] = 0;
							}
						}
						if (!func_707(iLocal_456[2]))
						{
							iLocal_408[3] = 0;
						}
					}
					if ((!bLocal_425 && SYSTEM::TIMERB() > 7550) || (bLocal_425 && SYSTEM::TIMERB() > 8350))
					{
						func_708(iLocal_460, 0, 1065353216);
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_460, false);
					}
					if (SYSTEM::TIMERB() > 11550 && !iLocal_408[4])
					{
						iLocal_408[4] = 1;
					}
					if ((iLocal_408[3] && SYSTEM::TIMERB() > 5000) || SYSTEM::TIMERB() > 12600)
					{
						iLocal_417++;
						func_718(638.2712f, -1836.9514f, 11.575692f, -7.141413f, 0f, 169.55852f, 50f, 638.2678f, -1836.9698f, 12.075953f, -2.140849f, 0f, 169.55852f, 50f, 2000, 3);
						func_708(iLocal_460, 0, 1065353216);
						CAM::SET_CAM_DOF_PLANES(iLocal_745, 0f, 3f, 175f, 200f);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "RAMP_UP", "TRUCK_RAMP_DOWN", true);
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
						SYSTEM::SETTIMERB(0);
						iLocal_384 = 0;
					}
				}
				break;
			case 5:
				CAM::SET_USE_HI_DOF();
				if (__LIB_17__::func_243(&uLocal_539, "JHAUD", "JH_PARK", 9, 0, 0, 0))
				{
					iLocal_417++;
				}
				break;
			case 6:
				CAM::SET_USE_HI_DOF();
				if (SYSTEM::TIMERB() > 2000)
				{
					iLocal_417++;
				}
				break;
		}
		if (iLocal_417 >= 7)
		{
			RECORDING::REPLAY_STOP_EVENT();
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_FOLLOW_VEHICLE_CAM_HIGH_ANGLE_MODE_EVERY_UPDATE(false, false);
			VEHICLE::ROLL_UP_WINDOW(iLocal_460, 0);
			STREAMING::END_SRL();
			func_704(1, 1, 3000, 1, 1);
			GRAPHICS::SET_PARTICLE_FX_BANG_SCRAPE_LODRANGE_SCALE(1f);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_460, false);
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_456[0]);
			if (!bLocal_425)
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_456[1]);
			}
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_456[2]);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_460, false))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_456[0], false))
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_456[0], iLocal_460, 0, ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_460, ENTITY::GET_ENTITY_COORDS(iLocal_456[0], true)), ENTITY::GET_ENTITY_ROTATION(iLocal_456[0], 2) - ENTITY::GET_ENTITY_ROTATION(iLocal_460, 2), false, false, false, false, 2, true, 0);
					ENTITY::SET_ENTITY_COLLISION(iLocal_456[0], false, false);
					AUDIO::SET_AUDIO_VEHICLE_PRIORITY(iLocal_456[0], 0);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_456[1], false))
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_456[1], iLocal_460, 0, ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_460, ENTITY::GET_ENTITY_COORDS(iLocal_456[1], true)), ENTITY::GET_ENTITY_ROTATION(iLocal_456[1], 2) - ENTITY::GET_ENTITY_ROTATION(iLocal_460, 2), false, false, false, false, 2, true, 0);
					ENTITY::SET_ENTITY_COLLISION(iLocal_456[1], false, false);
					AUDIO::SET_AUDIO_VEHICLE_PRIORITY(iLocal_456[1], 0);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_456[2], false))
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_456[2], iLocal_460, 0, ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_460, ENTITY::GET_ENTITY_COORDS(iLocal_456[2], true)), ENTITY::GET_ENTITY_ROTATION(iLocal_456[2], 2) - ENTITY::GET_ENTITY_ROTATION(iLocal_460, 2), false, false, false, false, 2, true, 0);
					ENTITY::SET_ENTITY_COLLISION(iLocal_456[2], false, false);
					AUDIO::SET_AUDIO_VEHICLE_PRIORITY(iLocal_456[2], 0);
				}
			}
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_456[0], 0f);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_456[1]))
			{
				AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_456[1], 0f);
			}
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_456[2], 0f);
			VEHICLE::REMOVE_VEHICLE_RECORDING(1, "JHLoadVan");
			VEHICLE::REMOVE_VEHICLE_RECORDING(2, "JHLoadVan");
			VEHICLE::REMOVE_VEHICLE_RECORDING(3, "JHLoadVan");
			VEHICLE::REMOVE_VEHICLE_RECORDING(700, "JHUber");
			func_708(iLocal_460, 0, 1065353216);
			__LIB_0__::func_532(0, 1, 1, 0, 0, 0, 0);
			iLocal_383 = 0;
			iLocal_384 = 0;
			return 1;
		}
	}
	return 0;
}

void func_704(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x84C57
{
	if (iLocal_747)
	{
		__LIB_0__::func_532(0, 1, iParam4, 0, 0, 0, 0);
		HUD::DISPLAY_HUD(true);
		HUD::DISPLAY_RADAR(true);
		CAM::SET_WIDESCREEN_BORDERS(false, 500);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (CAM::DOES_CAM_EXIST(iLocal_744))
			{
				CAM::SET_CAM_ACTIVE(iLocal_744, false);
				CAM::DESTROY_CAM(iLocal_744, false);
			}
			if (CAM::DOES_CAM_EXIST(iLocal_745))
			{
				CAM::SET_CAM_ACTIVE(iLocal_745, false);
				CAM::DESTROY_CAM(iLocal_745, false);
			}
			if (CAM::DOES_CAM_EXIST(iLocal_746))
			{
				CAM::SET_CAM_ACTIVE(iLocal_746, false);
				CAM::DESTROY_CAM(iLocal_746, false);
			}
			if (!bParam1)
			{
				CAM::RENDER_SCRIPT_CAMS(false, false, iParam2, true, false, 0);
			}
			else if (bParam3)
			{
				CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(false, 0f, 3, 0);
			}
			else
			{
				CAM::RENDER_SCRIPT_CAMS(false, true, iParam2, true, false, 0);
			}
			CAM::STOP_GAMEPLAY_CAM_SHAKING(true);
			if (bParam0)
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			}
			WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), false);
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (!ENTITY::IS_ENTITY_ATTACHED_TO_ANY_OBJECT(PLAYER::PLAYER_PED_ID()))
				{
					ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
				}
			}
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			iLocal_747 = 0;
		}
	}
}

int func_705()//Position - 0x84D56
{
	switch (__LIB_0__::func_682(__LIB_15__::func_944()))
	{
		case 0:
			return 0;
			break;
		case 1:
			return 1;
			break;
		case 2:
			return 2;
			break;
	}
	return 0;
}

void func_706(int iParam0, int iParam1)//Position - 0x84D93
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, false) && !PED::IS_PED_INJURED(iParam0))
	{
		TASK::TASK_VEHICLE_DRIVE_TO_COORD(iParam0, iParam1, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam1, 0f, 10f, 0f), ENTITY::GET_ENTITY_SPEED(iParam1), 0, ENTITY::GET_ENTITY_MODEL(iParam1), 262144, 9999999f, 9999999f);
	}
}

int func_707(int iParam0)//Position - 0x84DE2
{
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(ENTITY::GET_ENTITY_COORDS(iParam0, true), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_460, -0.035128f, 0.555196f, 0.113579f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_460, 0.031168f, -3.357668f, 2.159969f), 2.375f, false, true))
	{
		VEHICLE::SET_VEHICLE_ENGINE_ON(iParam0, false, true, false);
		return 1;
	}
	return 0;
}

void func_708(int iParam0, bool bParam1, float fParam2)//Position - 0x84E39
{
	if (bParam1)
	{
		VEHICLE::SET_VEHICLE_DOOR_LATCHED(iParam0, 5, false, false, true);
		VEHICLE::SET_VEHICLE_DOOR_CONTROL(iParam0, 5, 1, fParam2);
	}
	else
	{
		VEHICLE::SET_VEHICLE_DOOR_SHUT(iParam0, 5, false);
	}
}

void func_709(char* sParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6)//Position - 0x84E65
{
	if (bParam2 == 0)
	{
		bParam2 = !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON();
	}
	func_713(sParam0, bParam1, bParam2, bParam3, iParam4, iParam5, iParam6);
	if (!(bLocal_721 && iLocal_725 == MISC::GET_HASH_KEY(sParam0)))
	{
		if ((bParam1 || bParam2) || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
		{
			if (Local_733[0 /*7*/].f_1 != -1)
			{
				func_710();
			}
			Local_733[0 /*7*/] = sParam0;
			Local_733[0 /*7*/].f_1 = MISC::GET_HASH_KEY(sParam0);
			Local_733[0 /*7*/].f_2 = 1;
			Local_733[0 /*7*/].f_6 = 0;
			Local_733[0 /*7*/].f_3 = 0;
			Local_733[0 /*7*/].f_4 = bParam3;
			Local_733[0 /*7*/].f_5 = 0;
		}
	}
}

void func_710()//Position - 0x84F0E
{
	func_712(7);
	iLocal_728 = 0;
	while (iLocal_728 <= 6)
	{
		func_711(((8 - iLocal_728) - 1), ((8 - iLocal_728) - 2));
		iLocal_728++;
	}
	func_712(0);
}

void func_711(int iParam0, int iParam1)//Position - 0x84F4A
{
	Local_733[iParam0 /*7*/] = Local_733[iParam1 /*7*/];
	Local_733[iParam0 /*7*/].f_1 = Local_733[iParam1 /*7*/].f_1;
	Local_733[iParam0 /*7*/].f_2 = Local_733[iParam1 /*7*/].f_2;
	Local_733[iParam0 /*7*/].f_6 = Local_733[iParam1 /*7*/].f_6;
	Local_733[iParam0 /*7*/].f_3 = Local_733[iParam1 /*7*/].f_3;
	Local_733[iParam0 /*7*/].f_4 = Local_733[iParam1 /*7*/].f_4;
	Local_733[iParam0 /*7*/].f_5 = Local_733[iParam1 /*7*/].f_5;
}

void func_712(int iParam0)//Position - 0x84FCC
{
	Local_733[iParam0 /*7*/] = "";
	Local_733[iParam0 /*7*/].f_1 = -1;
	Local_733[iParam0 /*7*/].f_5 = 0;
	Local_733[iParam0 /*7*/].f_2 = 0;
	Local_733[iParam0 /*7*/].f_6 = 0;
}

void func_713(char* sParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6)//Position - 0x85007
{
	bool bVar0;
	bool bVar1;
	if (iLocal_725 != MISC::GET_HASH_KEY(sParam0))
	{
		bVar0 = false;
	}
	else
	{
		bVar0 = true;
	}
	bVar1 = true;
	if (bParam3)
	{
		bVar1 = false;
	}
	if (bParam1)
	{
		func_716(1, 1, 1);
		func_715();
	}
	else if (bParam2)
	{
		if (!bVar0)
		{
			func_716(bParam2, bParam2, bVar1);
		}
	}
	if (((!HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON() || bParam1) || (bParam2 && !bVar0)) || !bLocal_721)
	{
		if (__LIB_17__::func_243(&uLocal_539, cLocal_500, sParam0, iParam4, iParam5, iParam6, 0))
		{
			func_714(sParam0);
			bLocal_721 = true;
		}
	}
}

void func_714(char* sParam0)//Position - 0x850A1
{
	iLocal_725 = MISC::GET_HASH_KEY(sParam0);
}

void func_715()//Position - 0x850B2
{
	iLocal_728 = 0;
	while (iLocal_728 <= 7)
	{
		func_712(iLocal_728);
		iLocal_728++;
	}
}

void func_716(bool bParam0, bool bParam1, bool bParam2)//Position - 0x850D7
{
	if (bParam0 == 1)
	{
		__LIB_0__::func_325();
		iLocal_725 = -1;
	}
	if (bParam1)
	{
		HUD::CLEAR_PRINTS();
		iLocal_726 = -1;
	}
	if (bParam2)
	{
		HUD::CLEAR_HELP(true);
		iLocal_727 = -1;
	}
}

void func_717(char* sParam0, float fParam1)//Position - 0x85108
{
	CAM::SHAKE_CAM(iLocal_744, sParam0, fParam1);
	CAM::SHAKE_CAM(iLocal_745, sParam0, fParam1);
}

void func_718(struct<3> Param0, struct<3> Param1, float fParam2, struct<3> Param3, struct<3> Param4, float fParam5, int iParam6, int iParam7)//Position - 0x85126
{
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	CAM::DETACH_CAM(iLocal_744);
	CAM::STOP_CAM_POINTING(iLocal_744);
	CAM::SET_CAM_COORD(iLocal_744, Param0);
	CAM::SET_CAM_ROT(iLocal_744, Param1, 2);
	CAM::SET_CAM_FOV(iLocal_744, fParam2);
	CAM::SET_CAM_ACTIVE(iLocal_745, false);
	CAM::SET_CAM_ACTIVE(iLocal_744, true);
	CAM::DETACH_CAM(iLocal_745);
	CAM::STOP_CAM_POINTING(iLocal_745);
	CAM::SET_CAM_COORD(iLocal_745, Param3);
	CAM::SET_CAM_ROT(iLocal_745, Param4, 2);
	CAM::SET_CAM_FOV(iLocal_745, fParam5);
	CAM::SET_CAM_ACTIVE(iLocal_745, true);
	CAM::SET_CAM_ACTIVE(iLocal_744, true);
	CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_745, iLocal_744, iParam6, iParam7, iParam7);
}

void func_720(int iParam0, int iParam1, struct<3> Param2, float fParam3)//Position - 0x85210
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (!PED::IS_PED_INJURED(iParam1))
		{
			if (!PED::IS_PED_SITTING_IN_VEHICLE(iParam1, iParam0))
			{
				PED::SET_PED_INTO_VEHICLE(iParam1, iParam0, -1);
			}
			ENTITY::SET_ENTITY_COORDS(iParam0, Param2, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(iParam0, fParam3);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iParam0, 5f);
			func_706(iParam1, iParam0);
		}
	}
}

void func_721(bool bParam0)//Position - 0x8526B
{
	int iVar0;
	if (bLocal_382)
	{
		if (!PED::IS_PED_INJURED(iLocal_436[0]))
		{
			__LIB_17__::func_726(iLocal_436[0], __LIB_16__::func_594(0, 0), 1, 1);
		}
		if (!PED::IS_PED_INJURED(iLocal_436[1]))
		{
			__LIB_17__::func_726(iLocal_436[1], __LIB_16__::func_594(0, 1), 1, 1);
		}
		if (!PED::IS_PED_INJURED(iLocal_436[2]))
		{
			__LIB_17__::func_726(iLocal_436[2], __LIB_16__::func_594(0, 2), 0, 1);
		}
	}
	else
	{
		if (!PED::IS_PED_INJURED(iLocal_436[0]))
		{
			__LIB_17__::func_726(iLocal_436[0], __LIB_16__::func_594(0, 0), 10, 1);
		}
		if (!PED::IS_PED_INJURED(iLocal_436[1]))
		{
			__LIB_17__::func_726(iLocal_436[1], __LIB_16__::func_594(0, 1), 10, 1);
		}
		if (!PED::IS_PED_INJURED(iLocal_436[2]))
		{
			__LIB_17__::func_726(iLocal_436[2], __LIB_16__::func_594(0, 2), 0, 1);
		}
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		func_724(iLocal_436[iVar0]);
		iVar0++;
	}
	func_722(iLocal_436[0], bParam0);
	func_722(iLocal_436[1], bParam0);
}

void func_722(int iParam0, bool bParam1)//Position - 0x85373
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (bLocal_382)
		{
			if (iParam0 == func_94(0))
			{
				if (bParam1)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, 9, 0, 0);
				}
				else
				{
					func_723(iParam0);
				}
			}
			else if (bParam1)
			{
				if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("HC_Gunman"))
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 6, 3, 0, 0);
					PED::SET_PED_PROP_INDEX(iParam0, 2, 0, 0, false);
					PED::SET_PED_PROP_INDEX(iParam0, 0, 2, 0, false);
				}
				else
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 2, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 6, 1, 0, 0);
				}
			}
			else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("HC_Gunman"))
			{
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 6, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, 0, 0, 0);
			}
			else
			{
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 2, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 6, 0, 0, 0);
			}
		}
		else if (iParam0 == func_94(0))
		{
			if (bParam1)
			{
				PED::SET_PED_PROP_INDEX(iParam0, 0, 25, 0, false);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 2, 1, 0, 0);
			}
			else
			{
				func_723(iParam0);
			}
		}
		else if (bParam1)
		{
			if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("HC_Gunman"))
			{
				PED::SET_PED_PROP_INDEX(iParam0, 0, 4, 0, false);
			}
			else
			{
				PED::SET_PED_PROP_INDEX(iParam0, 0, 3, 0, false);
			}
		}
		else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("HC_Gunman"))
		{
			PED::CLEAR_PED_PROP(iParam0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 2, 1, 0, 0);
		}
		else
		{
			PED::CLEAR_PED_PROP(iParam0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 2, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 6, 0, 0, 0);
		}
	}
}

void func_723(int iParam0)//Position - 0x854D3
{
	int iVar0;
	iVar0 = __LIB_0__::func_650(iParam0);
	if (__LIB_0__::func_374(iVar0))
	{
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 2, Global_113386.f_2363.f_539[iVar0 /*65*/].f_13[2], Global_113386.f_2363.f_539[iVar0 /*65*/][2], 0);
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_13[0], Global_113386.f_2363.f_539[iVar0 /*65*/][0], 0);
	}
}

void func_724(int iParam0)//Position - 0x85544
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			PED::SET_PED_CAN_BE_DRAGGED_OUT(iParam0, false);
			PED::SET_PED_CAN_BE_TARGETTED(iParam0, false);
			PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iParam0, false);
			PED::SET_PED_NEVER_LEAVES_GROUP(iParam0, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, joaat("PLAYER"));
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 13, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 14, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 8, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 9, false);
			PED::SET_PED_ALERTNESS(iParam0, 0);
			PED::SET_PED_COMBAT_ABILITY(iParam0, 0);
			PED::SET_PED_COMBAT_RANGE(iParam0, 0);
			PED::SET_PED_GENERATES_DEAD_BODY_EVENTS(iParam0, false);
			PED::SET_PED_SEEING_RANGE(iParam0, 0f);
			PED::SET_PED_HEARING_RANGE(iParam0, 0f);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
			PED::SET_PED_CAN_BE_DRAGGED_OUT(iParam0, false);
			PED::SET_PED_HELMET(iParam0, true);
		}
	}
}

void func_726(bool bParam0)//Position - 0x85602
{
	int iVar0;
	iLocal_223[0] = 0;
	func_727(bParam0, 1);
	iVar0 = 0;
	while (iVar0 <= 34)
	{
		iLocal_263[iVar0] = 0;
		iVar0++;
	}
}

void func_727(bool bParam0, bool bParam1)//Position - 0x85633
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_204))
	{
		iLocal_106 = 0;
		__LIB_15__::func_912();
		PED::REMOVE_RELATIONSHIP_GROUP(iLocal_213);
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(-9999f, -9999f, -9999f, 9999f, 9999f, 9999f, 1);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
			PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), true);
			PED::SET_CREATE_RANDOM_COPS(true);
		}
		if (bLocal_122)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_745());
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_15__::func_911());
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_15__::func_910());
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_15__::func_909());
		if (!CAM::IS_SCREEN_FADED_OUT() && !bParam0)
		{
			func_741();
			func_740();
			func_737();
		}
		else
		{
			func_733();
			func_732();
		}
		if (bParam1)
		{
			__LIB_14__::func_804(0);
		}
	}
}

void func_732()//Position - 0x8582D
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 36)
	{
		iLocal_220[iVar0] = 0;
		Local_188[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_124[iVar0] = 0f;
		fLocal_125[iVar0] = 0f;
		fLocal_126[iVar0] = 0f;
		fLocal_127[iVar0] = 0f;
		iLocal_164[iVar0] = 0;
		fLocal_128[iVar0] = 0f;
		iLocal_165[iVar0] = 0;
		iLocal_214[iVar0] = 0;
		iLocal_166[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 28)
	{
		iLocal_221[iVar0] = 0;
		iVar0++;
	}
	iLocal_171 = 0;
	iVar0 = 0;
	while (iVar0 < 17)
	{
		iLocal_222[iVar0] = 0;
		Local_189[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_139[iVar0] = 0f;
		fLocal_140[iVar0] = 0f;
		fLocal_141[iVar0] = 0f;
		fLocal_142[iVar0] = 0f;
		iLocal_170[iVar0] = 0;
		iLocal_215[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		iLocal_224[iVar0] = 0;
		iVar0++;
	}
	iLocal_173 = 0;
	iVar0 = 0;
	while (iVar0 < 35)
	{
		iLocal_223[iVar0] = 0;
		Local_190[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_133[iVar0] = 0f;
		fLocal_134[iVar0] = 0f;
		fLocal_135[iVar0] = 0f;
		fLocal_136[iVar0] = 0f;
		iLocal_167[iVar0] = 0;
		fLocal_137[iVar0] = 0f;
		iLocal_168[iVar0] = 0;
		iLocal_216[iVar0] = 0;
		iLocal_169[iVar0] = 0;
		iVar0++;
	}
	iLocal_172 = 0;
	iLocal_175 = 0;
	iLocal_178 = 0;
	iLocal_179 = 0;
	iLocal_180 = 0;
}

void func_733()//Position - 0x859B8
{
	func_736();
	func_735();
	func_734();
}

void func_734()//Position - 0x859CC
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_223[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_223[iVar0], false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_223[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_223[iVar0]);
				}
				iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_223[iVar0], -1, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != PLAYER::PLAYER_PED_ID())
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
					{
						PED::DELETE_PED(&iVar1);
					}
				}
			}
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_223[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_223[iVar0]));
			}
		}
		iLocal_168[iVar0] = 0;
		if (!bLocal_102 && !bLocal_115)
		{
			if (iLocal_167[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_167[iVar0], &cLocal_204);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!iLocal_216[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_216[iVar0]);
		}
		iVar0++;
	}
}

void func_735()//Position - 0x85AC3
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 17)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_222[iVar0]))
		{
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_222[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_222[iVar0]));
			}
		}
		iLocal_170[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 17)
	{
		if (!iLocal_215[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_215[iVar0]);
		}
		iVar0++;
	}
	iLocal_176 = 0;
	iLocal_173 = 0;
}

void func_736()//Position - 0x85B40
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 36)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_220[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_220[iVar0], false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_220[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_220[iVar0]);
				}
				iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_220[iVar0], -1, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != PLAYER::PLAYER_PED_ID())
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
					{
						PED::DELETE_PED(&iVar1);
					}
				}
			}
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_220[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_220[iVar0]));
			}
		}
		if (!bLocal_102 && !bLocal_115)
		{
			if (iLocal_164[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_164[iVar0], &cLocal_204);
			}
		}
		iLocal_165[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 36)
	{
		if (!iLocal_214[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_214[iVar0]);
		}
		iVar0++;
	}
	iLocal_175 = 0;
	iLocal_171 = 0;
}

void func_737()//Position - 0x85C3F
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_223[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_223[iVar0], false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_223[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_223[iVar0]);
				}
			}
			func_739(iLocal_223[iVar0]);
			__LIB_15__::func_908(iLocal_223[iVar0]);
		}
		iLocal_168[iVar0] = 0;
		iLocal_169[iVar0] = 0;
		if (!bLocal_102 && !bLocal_115)
		{
			if (iLocal_167[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_167[iVar0], &cLocal_204);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!iLocal_216[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_216[iVar0]);
		}
		iVar0++;
	}
	iLocal_177 = 0;
}

void func_739(int iParam0)//Position - 0x85D23
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
				if (bLocal_123)
				{
					PED::SET_PED_FLEE_ATTRIBUTES(iVar1, 65536, true);
					PED::SET_PED_FLEE_ATTRIBUTES(iVar1, 2, false);
				}
				PED::SET_PED_COMBAT_ATTRIBUTES(iVar1, 6, false);
			}
		}
	}
}

void func_740()//Position - 0x85DBD
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 17)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_222[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_222[iVar0], false))
			{
				ENTITY::SET_ENTITY_COLLISION(iLocal_222[iVar0], true, false);
			}
			__LIB_15__::func_908(iLocal_222[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 17)
	{
		if (!iLocal_215[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_215[iVar0]);
		}
		iVar0++;
	}
	iLocal_176 = 0;
	iLocal_173 = 0;
}

void func_741()//Position - 0x85E41
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 36)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_220[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_220[iVar0], false))
			{
				ENTITY::SET_ENTITY_COLLISION(iLocal_220[iVar0], true, false);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_220[iVar0], false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_220[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_220[iVar0]);
				}
			}
			func_739(iLocal_220[iVar0]);
			__LIB_15__::func_908(iLocal_220[iVar0]);
		}
		iLocal_165[iVar0] = 0;
		iLocal_166[iVar0] = 0;
		if (!bLocal_102 && !bLocal_115)
		{
			if (iLocal_164[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_164[iVar0], &cLocal_204);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 36)
	{
		if (!iLocal_214[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_214[iVar0]);
		}
		iVar0++;
	}
	iLocal_175 = 0;
	iLocal_171 = 0;
}

int func_745()//Position - 0x85F56
{
	if (iLocal_217 == 0)
	{
		return joaat("A_M_Y_Business_01");
	}
	return iLocal_217;
}

void func_748(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)//Position - 0x86067
{
	if (!iLocal_747)
	{
		__LIB_0__::func_532(1, 1, iParam4, 0, 0, 0, 0);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			CAM::DESTROY_ALL_CAMS(false);
			if (!bParam1)
			{
				iLocal_744 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);
				iLocal_745 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
				CAM::SET_CAM_COORD(iLocal_744, 1f, 1f, 1f);
			}
			else
			{
				iLocal_744 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);
				iLocal_745 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
				iLocal_746 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", false);
				CAM::SET_CAM_COORD(iLocal_746, 1f, 1f, 1f);
			}
			if (bParam3)
			{
				HUD::DISPLAY_HUD(false);
				HUD::DISPLAY_RADAR(false);
				CAM::SET_WIDESCREEN_BORDERS(true, 500);
			}
			if (bParam0)
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 4);
			}
			else
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			}
			WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), bParam2);
		}
		SYSTEM::SETTIMERB(0);
		iLocal_747 = 1;
	}
}

void func_750()//Position - 0x86170
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_748.f_12);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_748.f_14);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_748.f_15);
	VEHICLE::REMOVE_VEHICLE_RECORDING(Local_748.f_85, Local_748.f_83);
	VEHICLE::REMOVE_VEHICLE_RECORDING(Local_748.f_84, Local_748.f_83);
	VEHICLE::REMOVE_VEHICLE_RECORDING(717, "JHUBER");
	__LIB_37__::func_173(__LIB_16__::func_594(0, 1));
	__LIB_37__::func_173(__LIB_16__::func_594(0, 2));
	WEAPON::REMOVE_WEAPON_ASSET(joaat("WEAPON_PISTOL"));
}

int func_753()//Position - 0x86210
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (!iLocal_383)
	{
		__LIB_12__::func_849(9, 1);
		__LIB_12__::func_849(8, 1);
		CAM::SET_FOLLOW_VEHICLE_CAM_HIGH_ANGLE_MODE_EVERY_UPDATE(true, true);
		GRAPHICS::SET_PARTICLE_FX_BULLET_IMPACT_LODRANGE_SCALE(2f);
		AUDIO::SET_AUDIO_FLAG("OnlyAllowScriptTriggerPoliceScanner", true);
		Local_524.f_19 = 0;
		func_133();
		func_892();
		while (!func_891())
		{
			func_112(0);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_460))
		{
			func_889();
		}
		if (!ENTITY::DOES_ENTITY_EXIST(func_94(0)) || PED::IS_PED_INJURED(func_94(0)))
		{
			while (!func_325(&(Local_519[0]), 0, Local_323, 147.6818f, 1, 0, 0))
			{
				func_112(0);
			}
		}
		else
		{
			ENTITY::SET_ENTITY_COORDS(func_94(0), Local_323, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(func_94(0), 147.6818f);
			PED::SET_PED_INTO_VEHICLE(func_94(0), iLocal_460, -1);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_456[0], false))
		{
			if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_456[0]))
			{
				func_886(0);
				func_883();
				func_882(Local_748.f_83, Local_748.f_84, 1, 1);
				func_883();
				iLocal_223[0] = iLocal_456[1];
				iLocal_168[0] = 3;
				fLocal_340 = 1f;
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_456[0], Local_748.f_84, Local_748.f_83, true);
				if (!bLocal_425)
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_456[1], false);
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_456[1], iLocal_167[0], Local_748.f_83, true);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_456[1], 157000f);
					VEHICLE::SET_POSITION_OFFSET_FOR_RECORDED_VEHICLE_PLAYBACK(iLocal_456[1], Local_81);
					VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_456[1], true);
				}
				VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_456[0], 157000f);
				VEHICLE::SET_POSITION_OFFSET_FOR_RECORDED_VEHICLE_PLAYBACK(iLocal_456[0], Local_81);
				VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_456[0], true);
				func_881(iLocal_456[0], 157000f);
				func_880();
				func_855(iLocal_456[0], 1f);
				func_112(0);
				func_880();
			}
		}
		func_854(0, 1, 0);
		func_9(func_94(1), 1, 0);
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_436[2]) || PED::IS_PED_INJURED(iLocal_436[2]))
		{
			iLocal_436[2] = __LIB_17__::func_787(0, 2, Local_324, 261.2985f, 0, 1);
			__LIB_37__::func_173(__LIB_16__::func_594(0, 2));
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_436[2], joaat("WEAPON_PISTOL"), -1, true, true);
		}
		else
		{
			ENTITY::SET_ENTITY_COORDS(iLocal_436[2], Local_324, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(iLocal_436[2], 261.2985f);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_436[2], joaat("WEAPON_PISTOL"), -1, true, true);
		}
		func_114();
		switch (__LIB_16__::func_594(0, 2))
		{
			case 6:
				func_121(iLocal_436[2], 7, "PAIGE");
				break;
			case 7:
				func_121(iLocal_436[2], 7, "CHRISTIAN");
				break;
			case 12:
				func_121(iLocal_436[2], 7, "LIEngineer");
				break;
		}
		PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(iLocal_436[2], false);
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_436[2]);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_436[2], true);
		PED::SET_PED_NAME_DEBUG(iLocal_436[2], "Driver");
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_460, false))
		{
			if (!PED::IS_PED_IN_VEHICLE(func_94(0), iLocal_460, false))
			{
				PED::SET_PED_INTO_VEHICLE(func_94(0), iLocal_460, -1);
			}
			if (!PED::IS_PED_IN_VEHICLE(iLocal_436[2], iLocal_460, false))
			{
				PED::SET_PED_INTO_VEHICLE(iLocal_436[2], iLocal_460, 0);
			}
		}
		WEAPON::GIVE_WEAPON_TO_PED(iLocal_436[2], joaat("WEAPON_PISTOL"), -1, true, true);
		if (!PED::IS_PED_IN_VEHICLE(func_94(1), iLocal_456[2], false))
		{
			PED::SET_PED_INTO_VEHICLE(func_94(1), iLocal_456[2], -1);
		}
		VEHICLE::SET_RANDOM_TRAINS(false);
		iLocal_384 = 0;
		iLocal_383 = 1;
		iLocal_407 = 0;
		ENTITY::SET_ENTITY_COLLISION(iLocal_460, true, false);
		WEAPON::REMOVE_WEAPON_ASSET(joaat("WEAPON_PISTOL"));
		if (__LIB_15__::func_944() != 1)
		{
			__LIB_17__::func_760(&Local_519, 1);
			func_176(&Local_519, 1, 0, 0);
			func_724(func_94(0));
			func_724(func_94(1));
		}
		func_133();
		func_129(1, 0);
		WEAPON::GIVE_WEAPON_TO_PED(func_94(0), joaat("WEAPON_PISTOL"), 200, true, true);
		iLocal_416 = 0;
		while (iLocal_416 <= 24)
		{
			iLocal_408[iLocal_416] = 0;
			iLocal_416++;
		}
		iLocal_275 = 0;
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
		__LIB_15__::func_907();
		SYSTEM::SETTIMERA(0);
		iLocal_401 = 0;
		iLocal_417 = 0;
		iLocal_383 = 1;
		iLocal_268 = 0;
		iLocal_269 = 0;
		iLocal_416 = 0;
		while (iLocal_416 <= 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_456[iLocal_416]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_456[iLocal_416], false))
				{
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_456[iLocal_416], iLocal_416);
					VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_456[iLocal_416], true, true, false);
				}
			}
			iLocal_416++;
		}
		func_849(&iLocal_488);
		PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(func_94(1), 1);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(func_94(1), true);
		fLocal_2115 = 0f;
		iLocal_119 = 0;
		iLocal_118 = 1;
		iLocal_417 = 0;
		iLocal_277 = 0;
		iLocal_278 = 0;
		iLocal_750 = 1;
		iLocal_2116 = 0;
		iLocal_417 = 1;
	}
	else
	{
		PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		func_845();
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_456[2]))
		{
			if (!PED::IS_PED_IN_VEHICLE(func_94(1), iLocal_456[2], false))
			{
				PED::SET_PED_INTO_VEHICLE(func_94(1), iLocal_456[2], -1);
			}
		}
		if (!PED::IS_PED_IN_VEHICLE(iLocal_436[0], iLocal_456[0], false))
		{
			PED::SET_PED_INTO_VEHICLE(iLocal_436[0], iLocal_456[0], -1);
		}
		__LIB_17__::func_71(&uLocal_704, iLocal_456[2], 0, 0, 1, 1, 1);
		switch (iLocal_417)
		{
			case 1:
				if (iLocal_277 == 0)
				{
					__LIB_17__::func_221(&Local_370, 0);
					func_715();
					func_716(1, 1, 1);
					__LIB_17__::func_78(&Local_519, 0, 1);
					__LIB_17__::func_78(&Local_519, 1, 0);
					SYSTEM::SETTIMERA(0);
					Local_524.f_12 = func_94(0);
					AUDIO::START_AUDIO_SCENE("JSH_2B_CHASE_EXIT_TUNNELS");
					func_816(0.975f);
					func_815();
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_436[2], false) && !ENTITY::IS_ENTITY_DEAD(iLocal_223[0], false))
					{
						TASK::TASK_DRIVE_BY(iLocal_436[2], 0, iLocal_223[0], 0f, -5f, 0f, 200f, 100, false, joaat("FIRING_PATTERN_BURST_FIRE_DRIVEBY"));
					}
					iLocal_277 = 1;
				}
				fLocal_340 = 1f;
				VEHICLE::SET_PLAYBACK_SPEED(iLocal_456[0], fLocal_340);
				func_855(iLocal_456[0], fLocal_340);
				func_814();
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
				if (func_781(&Local_751))
				{
					Local_524.f_19 = 1;
				}
				if (Local_524.f_19)
				{
					STREAMING::REMOVE_ANIM_DICT(sLocal_2019);
					HUD::DISPLAY_RADAR(true);
					HUD::DISPLAY_HUD(true);
					CAM::DESTROY_CAM(Local_751.f_1, false);
					iLocal_2128 = CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE();
					if (CAM::GET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL() != 4)
					{
						CAM::SET_FOLLOW_VEHICLE_CAM_VIEW_MODE(2);
					}
					AUDIO::STOP_AUDIO_SCENE("JSH_2B_CHASE_EXIT_TUNNELS");
					AUDIO::START_AUDIO_SCENE("JSH_2B_RAM_POLICE");
					iLocal_277 = 0;
					func_780();
					PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(func_94(1), 1);
					if (!PED::IS_PED_IN_VEHICLE(func_94(1), iLocal_456[2], false))
					{
						PED::SET_PED_INTO_VEHICLE(func_94(1), iLocal_456[2], -1);
					}
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_456[2]))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_456[2]);
					}
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_456[2], 700, "JHUBER", true);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_456[2], (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_456[0]) - fLocal_137[15]));
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_456[2], false))
					{
						ENTITY::SET_ENTITY_INVINCIBLE(iLocal_456[2], false);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_1991))
					{
						OBJECT::DELETE_OBJECT(&iLocal_1991);
					}
					if (__LIB_16__::func_594(0, 2) != 12)
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_436[2], false) && !ENTITY::IS_ENTITY_DEAD(iLocal_223[17], false))
						{
							TASK::TASK_DRIVE_BY(iLocal_436[2], 0, iLocal_223[17], 0f, 0f, 0f, 2000f, 75, false, joaat("FIRING_PATTERN_BURST_FIRE_DRIVEBY"));
						}
					}
					VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_456[2], 100f);
					VEHICLE::SET_VEHICLE_STRONG(iLocal_460, true);
					ENTITY::SET_ENTITY_HEALTH(iLocal_460, 1000, 0);
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_436[2], true);
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iLocal_460, false);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_436[1]))
					{
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_436[1], true);
					}
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_436[0], true);
					ENTITY::SET_ENTITY_INVINCIBLE(iLocal_456[0], true);
					if (!bLocal_425)
					{
						ENTITY::SET_ENTITY_INVINCIBLE(iLocal_456[1], true);
					}
					ENTITY::SET_ENTITY_INVINCIBLE(iLocal_456[2], false);
					VEHICLE::SET_VEHICLE_FIXED(iLocal_456[2]);
					__LIB_0__::func_377(iLocal_456[2], 815);
					AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_JSH_2A_05", 0f);
					fLocal_340 = 0.7f;
					iLocal_2126 = MISC::GET_GAME_TIMER();
					iLocal_417 = 2;
				}
				break;
			case 2:
				if (__LIB_39__::func_114() || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_460))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_460);
					}
				}
				iLocal_273 = 0;
				iVar3 = 0;
				while (iVar3 <= 16)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_222[iVar3]))
					{
						func_775(iLocal_222[iVar3], iLocal_460, 0.95f, 1.45f, 1);
					}
					iVar3++;
				}
				iLocal_416 = 17;
				while (iLocal_416 <= 34)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_223[iLocal_416]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_223[iLocal_416], false))
						{
							if (ENTITY::GET_ENTITY_MODEL(iLocal_223[iLocal_416]) == joaat("police3"))
							{
								if (!HUD::DOES_BLIP_EXIST(iLocal_461[iLocal_416]))
								{
									if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_223[iLocal_416], false) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_223[iLocal_416])) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_223[iLocal_416]) > 3750f)
									{
										VEHICLE::SET_VEHICLE_ACTIVE_DURING_PLAYBACK(iLocal_223[iLocal_416], true);
										iLocal_461[iLocal_416] = __LIB_0__::func_639(iLocal_223[iLocal_416], 1, 0);
										iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_223[iLocal_416], -1, false);
										if (!PED::IS_PED_INJURED(iVar1))
										{
											PED::SET_PED_CONFIG_FLAG(iVar1, 272, true);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar1, true);
											PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar1, iLocal_499);
											WEAPON::GIVE_WEAPON_TO_PED(iVar1, joaat("WEAPON_PISTOL"), -1, false, true);
											if (__LIB_0__::func_680())
											{
												if (!ENTITY::IS_ENTITY_DEAD(iLocal_456[0], false))
												{
													TASK::TASK_DRIVE_BY(iVar1, 0, iLocal_456[0], 0f, 0f, 0f, 200f, 75, true, joaat("FIRING_PATTERN_BURST_FIRE_DRIVEBY"));
												}
											}
											else if (!ENTITY::IS_ENTITY_DEAD(iLocal_456[2], false))
											{
												TASK::TASK_DRIVE_BY(iVar1, 0, iLocal_456[2], 0f, 0f, 0f, 200f, 75, true, joaat("FIRING_PATTERN_BURST_FIRE_DRIVEBY"));
											}
											PED::SET_PED_ACCURACY(iVar1, 80);
										}
										if (((VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_223[iLocal_416], 0, false) && iLocal_416 != 17) && iLocal_416 != 18) && iLocal_416 != 20)
										{
											iVar2 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_223[iLocal_416], 6, joaat("S_M_Y_Cop_01"), 0, true, true);
											PED::SET_PED_CONFIG_FLAG(iVar2, 272, true);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar2, true);
											WEAPON::GIVE_WEAPON_TO_PED(iVar2, joaat("WEAPON_PISTOL"), -1, false, true);
											PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar2, iLocal_499);
											if (__LIB_0__::func_680())
											{
												if (!ENTITY::IS_ENTITY_DEAD(iLocal_456[0], false))
												{
													TASK::TASK_DRIVE_BY(iVar2, 0, iLocal_456[0], 0f, 0f, 0f, 200f, 90, false, joaat("FIRING_PATTERN_BURST_FIRE_DRIVEBY"));
												}
											}
											else if (!ENTITY::IS_ENTITY_DEAD(iLocal_456[2], false))
											{
												TASK::TASK_DRIVE_BY(iVar2, 0, iLocal_456[2], 0f, 0f, 0f, 200f, 90, false, joaat("FIRING_PATTERN_BURST_FIRE_DRIVEBY"));
											}
											PED::SET_PED_KEEP_TASK(iVar2, true);
											PED::SET_PED_ACCURACY(iVar2, 80);
											ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar2);
										}
									}
								}
								else
								{
									iLocal_273++;
								}
								if (func_775(iLocal_223[iLocal_416], iLocal_460, 0.95f, 1.45f, 1))
								{
									func_849(&(iLocal_461[iLocal_416]));
								}
								if (fLocal_2115 > (fLocal_137[iLocal_416] + 3000f))
								{
									if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_223[iLocal_416]) || (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_335, true) < MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_223[iLocal_416], 0f, 15f, 0f), Local_335, true) && fLocal_2115 > 214664.9f))
									{
										if (func_849(&(iLocal_461[iLocal_416])))
										{
											if (!ENTITY::IS_ENTITY_DEAD(iLocal_223[iLocal_416], false))
											{
												VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_223[iLocal_416]);
												VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_223[iLocal_416], 0f);
											}
										}
									}
								}
							}
						}
					}
					iLocal_416++;
				}
				func_772();
				if (fLocal_2115 < 187929.9f)
				{
					iVar0 = func_770(func_771(), PLAYER::PLAYER_PED_ID());
				}
				else if (!bLocal_425)
				{
					iVar0 = func_770(func_771(), iLocal_456[1]);
				}
				else
				{
					iVar0 = func_770(func_771(), iLocal_456[2]);
				}
				if ((MISC::GET_GAME_TIMER() - iLocal_2130) > 5000 && iLocal_273 > 0)
				{
					if (__LIB_16__::func_594(0, 2) != 12)
					{
						if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("police3"))
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_436[2], false) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
							{
								TASK::TASK_DRIVE_BY(iLocal_436[2], 0, iVar0, 0f, -5f, 0f, 200f, 100, false, joaat("FIRING_PATTERN_BURST_FIRE_DRIVEBY"));
							}
							iLocal_2130 = MISC::GET_GAME_TIMER();
						}
					}
				}
				else
				{
					TASK::CLEAR_PED_TASKS(iLocal_436[2]);
				}
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_456[0]))
				{
					fLocal_2115 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_456[0]);
				}
				if (ENTITY::GET_ENTITY_MODEL(iVar0) == Local_748.f_0)
				{
					if (fLocal_2115 > 0f)
					{
						fLocal_341 = -8.5f;
					}
					if (fLocal_2115 > 180102.8f)
					{
						fLocal_341 = -12.75f;
					}
					if (fLocal_2115 > 182929.9f)
					{
						fLocal_341 = -15f;
					}
					if (fLocal_2115 > 188000f)
					{
						fLocal_341 = -16f;
					}
					if (fLocal_2115 > 201344.1f)
					{
						fLocal_341 = -18f;
					}
					if (iLocal_273 == 0 && iLocal_278)
					{
						fLocal_341 = -26f;
					}
					fLocal_340 = func_768(iVar0, fLocal_341);
				}
				else
				{
					if (fLocal_2115 > 0f)
					{
						fLocal_341 = 15.5f;
					}
					if (fLocal_2115 > 180102.8f)
					{
						fLocal_341 = 9f;
					}
					if (fLocal_2115 > 185102.8f)
					{
						fLocal_341 = 13f;
					}
					if (fLocal_2115 > 200303.2f)
					{
						fLocal_341 = 15.5f;
					}
					fLocal_340 = func_768(iVar0, fLocal_341);
				}
				VEHICLE::SET_PLAYBACK_SPEED(iLocal_456[0], fLocal_340);
				func_855(iLocal_456[0], fLocal_340);
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_456[2]) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_456[0]))
				{
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_456[2]) + fLocal_137[15]) < VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_456[0])
					{
						fLocal_2113 = (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_456[0]) - (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_456[2]) + fLocal_137[15]));
						if (fLocal_2113 > 1500f)
						{
							fLocal_2114 = 2.25f;
						}
						else
						{
							fLocal_2114 = ((fLocal_2113 / 1500f) * 2.25f);
						}
						fLocal_342 = (fLocal_340 * fLocal_2114);
						if (fLocal_342 < 1.25f)
						{
							fLocal_342 = 1.25f;
						}
						if (!CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(iLocal_456[2], true), 1f))
						{
							fLocal_342 = 6f;
						}
						VEHICLE::SET_PLAYBACK_SPEED(iLocal_456[2], fLocal_342);
					}
					else
					{
						iLocal_407 = 1;
						VEHICLE::SET_PLAYBACK_SPEED(iLocal_456[2], fLocal_340);
					}
				}
				if (ENTITY::IS_ENTITY_AT_COORD(func_94(0), 680.7623f, -528.5031f, 14.2773f, 165f, 165f, 100f, false, true, 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_444))
					{
						PED::DELETE_PED(&iLocal_444);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_445))
					{
						PED::DELETE_PED(&iLocal_445);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_446))
					{
						PED::DELETE_PED(&iLocal_446);
					}
				}
				func_766();
				func_814();
				func_764();
				if (HUD::DOES_BLIP_EXIST(Local_370.f_6))
				{
					HUD::SET_BLIP_ROUTE(Local_370.f_6, false);
					HUD::SET_BLIP_EXTENDED_HEIGHT_THRESHOLD(Local_370.f_6, true);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_456[0], false))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_456[0]))
					{
						if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_456[0]) > 213898.7f)
						{
							if (iLocal_278 == 0)
							{
								if (bLocal_382)
								{
									AUDIO::TRIGGER_MUSIC_EVENT("JH2A_STORM_DRAIN_MA");
								}
								else
								{
									AUDIO::TRIGGER_MUSIC_EVENT("JH2B_STORM_DRAIN_MA");
								}
								iLocal_278 = 1;
							}
						}
					}
				}
				if (!__LIB_13__::func_755(&Local_370, 1) && !AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					switch (iLocal_269)
					{
						case 0:
							if (fLocal_2115 > 0.5f)
							{
								__LIB_0__::func_429();
								if (__LIB_17__::func_243(&uLocal_539, "JHAUD", "JH_TRAP", 9, 0, 0, 0))
								{
									iLocal_269++;
								}
							}
							break;
						case 1:
							if (fLocal_2115 > 0.5f)
							{
								if (__LIB_17__::func_243(&uLocal_539, "JHAUD", "JH_SWITCH", 9, 0, 0, 0))
								{
									iLocal_269++;
								}
							}
							break;
						case 2:
							if (!__LIB_13__::func_755(&Local_370, 1))
							{
								MISC::SET_BIT(&(Local_370.f_13), 2);
								__LIB_0__::func_229(Local_748.f_234, 7500, 1);
								iLocal_269++;
							}
							break;
						case 3:
							if (fLocal_2115 > 168995.5f)
							{
								if (!func_763(PLAYER::PLAYER_PED_ID()))
								{
									__LIB_0__::func_429();
									if (__LIB_17__::func_243(&uLocal_539, "JHAUD", "JH_CROSS", 9, 0, 0, 0))
									{
										func_762("JH_FRSAVE2", 0, 0, 1);
										if (func_120())
										{
											func_762("JH_OHSHIT_ET", 0, 0, 1);
										}
										else
										{
											func_762("JH_OHSHIT_KD", 0, 0, 1);
										}
										iLocal_2126 = MISC::GET_GAME_TIMER();
										iLocal_269++;
									}
								}
								else if (__LIB_17__::func_243(&uLocal_539, "JHAUD", "JH_FRSAVE2", 9, 0, 0, 0))
								{
									iLocal_269++;
								}
							}
							break;
						case 4:
							if ((fLocal_2115 > 173000f && HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON()) || (fLocal_2115 > 177000f && !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON()))
							{
								if (func_763(PLAYER::PLAYER_PED_ID()))
								{
									__LIB_0__::func_429();
									if (__LIB_17__::func_243(&uLocal_539, "JHAUD", "JH_RIVERLEFT", 9, 0, 0, 0))
									{
										if (func_120())
										{
											func_762("JH_OHSHIT_ET", 0, 0, 1);
										}
										else
										{
											func_762("JH_OHSHIT_KD", 0, 0, 1);
										}
										iLocal_269++;
									}
								}
								else
								{
									if (func_120())
									{
										func_762("JH_OHSHIT_ET", 0, 0, 1);
									}
									else
									{
										func_762("JH_OHSHIT_KD", 0, 0, 1);
									}
									iLocal_269++;
								}
							}
							break;
						case 5:
							if (fLocal_2115 > 206199.1f)
							{
								if (!func_763(PLAYER::PLAYER_PED_ID()))
								{
									__LIB_0__::func_429();
									if (__LIB_17__::func_243(&uLocal_539, "JHAUD", "JH_RIVERRIGH", 9, 0, 0, 0))
									{
										iLocal_269++;
									}
								}
							}
							break;
						}
				}
				if (!__LIB_13__::func_755(&Local_370, 1) && !AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					switch (iLocal_270)
					{
						case 0:
							if (iLocal_273 > 0)
							{
								if (fLocal_2115 > 175159f)
								{
									if (MISC::GET_RANDOM_INT_IN_RANGE(0, 10) > 5)
									{
										__LIB_17__::func_243(&uLocal_539, "JHAUD", "JH_RIVERHLPR", 9, 0, 0, 0);
										iLocal_270++;
									}
									else
									{
										__LIB_17__::func_243(&uLocal_539, "JHAUD", "JH_RIVERMORF", 9, 0, 0, 0);
										iLocal_270++;
									}
								}
								else
								{
									iLocal_270++;
								}
							}
							break;
						case 1:
							if (fLocal_2115 > 190433.2f)
							{
								if (iLocal_273 > 0)
								{
									if (MISC::GET_RANDOM_INT_IN_RANGE(0, 10) > 5)
									{
										__LIB_17__::func_243(&uLocal_539, "JHAUD", "JH_RIVERHLPR", 9, 0, 0, 0);
										iLocal_270++;
									}
									else
									{
										__LIB_17__::func_243(&uLocal_539, "JHAUD", "JH_RIVERMORF", 9, 0, 0, 0);
										iLocal_270++;
									}
								}
								else
								{
									iLocal_270++;
								}
							}
							break;
						case 2:
							if (!__LIB_13__::func_755(&Local_370, 1))
							{
								if (func_630())
								{
									if (__LIB_17__::func_243(&uLocal_539, "JHAUD", "JH_HCKINT_PH", 9, 0, 0, 0))
									{
										iLocal_270++;
									}
								}
								else if (func_629())
								{
									if (__LIB_17__::func_243(&uLocal_539, "JHAUD", "JH_HCKINT_CF", 9, 0, 0, 0))
									{
										iLocal_270++;
									}
								}
								else if (func_628())
								{
									if (__LIB_17__::func_243(&uLocal_539, "JHAUD", "JH_HCKINT_RL", 9, 0, 0, 0))
									{
										iLocal_270++;
									}
								}
							}
							break;
						case 3:
							if (!__LIB_13__::func_755(&Local_370, 1))
							{
								if (func_116())
								{
									if (__LIB_17__::func_243(&uLocal_539, "JHAUD", "JH_COPS_GM", 9, 0, 0, 0))
									{
										iLocal_270++;
									}
								}
								else if (func_117())
								{
									if (__LIB_17__::func_243(&uLocal_539, "JHAUD", "JH_COPS_PM", 9, 0, 0, 0))
									{
										iLocal_270++;
									}
								}
							}
							break;
						case 4:
							if (fLocal_2115 > 202000.8f)
							{
								if (iLocal_273 > 0)
								{
									if (MISC::GET_RANDOM_INT_IN_RANGE(0, 10) > 5)
									{
										__LIB_17__::func_243(&uLocal_539, "JHAUD", "JH_RIVERHLPR", 9, 0, 0, 0);
										iLocal_270++;
									}
									else
									{
										__LIB_17__::func_243(&uLocal_539, "JHAUD", "JH_RIVERMORF", 9, 0, 0, 0);
										iLocal_270++;
									}
								}
								else
								{
									iLocal_270++;
								}
							}
							break;
						case 5:
							if (fLocal_2115 > 208199.1f && iLocal_273 > 0)
							{
								if (!__LIB_13__::func_755(&Local_370, 1))
								{
									if (__LIB_17__::func_243(&uLocal_539, "JHAUD", "JH_NORIVER", 9, 0, 0, 0))
									{
										iLocal_270++;
									}
								}
							}
							break;
						}
				}
				if ((((iLocal_273 > 0 && !__LIB_13__::func_755(&Local_370, 1)) && !func_761()) && !func_760()) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_456[2]))
				{
					if ((ENTITY::GET_ENTITY_HEALTH(iLocal_456[2]) - iLocal_86) > 0 && (MISC::GET_GAME_TIMER() - iLocal_2126) > 4000)
					{
						if (iLocal_2133 == 0)
						{
							if (func_120())
							{
								if (__LIB_17__::func_243(&uLocal_539, "JHAUD", "JH_COPOFF_ET", 9, 0, 0, 0))
								{
									iLocal_2133 = 1;
									iLocal_2126 = MISC::GET_GAME_TIMER();
									iLocal_86 = ENTITY::GET_ENTITY_HEALTH(iLocal_456[2]);
								}
							}
							else if (__LIB_17__::func_243(&uLocal_539, "JHAUD", "JH_COPOFF_KD", 9, 0, 0, 0))
							{
								iLocal_2133 = 1;
								iLocal_2126 = MISC::GET_GAME_TIMER();
								iLocal_86 = ENTITY::GET_ENTITY_HEALTH(iLocal_456[2]);
							}
						}
						else if (__LIB_17__::func_243(&uLocal_539, "JHAUD", "JH_RIVERDAMA", 9, 0, 0, 0))
						{
							iLocal_2133 = 0;
							iLocal_2126 = MISC::GET_GAME_TIMER();
							iLocal_86 = ENTITY::GET_ENTITY_HEALTH(iLocal_456[2]);
						}
					}
					switch (iLocal_268)
					{
						case 0:
							if ((MISC::GET_GAME_TIMER() - iLocal_2126) > 6000)
							{
								if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_456[2]) < 500f)
								{
									iLocal_268 = 3;
								}
								else
								{
									iLocal_268 = 1;
								}
								iLocal_2126 = MISC::GET_GAME_TIMER();
							}
							break;
						case 1:
							if (iLocal_2133 == 0)
							{
								if (func_120())
								{
									if (__LIB_17__::func_243(&uLocal_539, "JHAUD", "JH_COPOFF_ET", 9, 0, 0, 0))
									{
										iLocal_2133 = 1;
										iLocal_268 = 2;
									}
								}
								else if (__LIB_17__::func_243(&uLocal_539, "JHAUD", "JH_COPOFF_KD", 9, 0, 0, 0))
								{
									iLocal_2133 = 1;
									iLocal_268 = 2;
								}
							}
							else if ((func_763(func_94(1)) && !func_763(PLAYER::PLAYER_PED_ID())) || (!func_763(func_94(1)) && func_763(PLAYER::PLAYER_PED_ID())))
							{
								if (__LIB_17__::func_243(&uLocal_539, "JHAUD", "JH_RIVERSIDE", 9, 0, 0, 0))
								{
									iLocal_2133 = 0;
									iLocal_268 = 2;
								}
							}
							else if (__LIB_17__::func_243(&uLocal_539, "JHAUD", "JH_RIVERHELP", 9, 0, 0, 0))
							{
								iLocal_2133 = 0;
								iLocal_268 = 2;
							}
							break;
						case 2:
							if (__LIB_17__::func_243(&uLocal_539, "JHAUD", "JH_MIKECOPS", 9, 0, 0, 0))
							{
								iLocal_268 = 0;
							}
							break;
						}
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_223[24], false))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_223[24]))
					{
						if (func_759(iLocal_223[24]) > 10f)
						{
							VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_456[2], (20f + (83f - func_759(iLocal_223[24]))));
						}
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_223[22], false))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_223[22]))
					{
						if (func_759(iLocal_223[22]) > 10f)
						{
							VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_456[2], (20f + (88f - func_759(iLocal_223[22]))));
						}
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_456[2], false))
				{
					if (((VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_456[2]) < 100f && VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_456[2]) > 40f) && (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_456[2]) - fLocal_2127) != 0f) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_456[2]))
					{
						iLocal_268 = -1;
						if ((MISC::GET_GAME_TIMER() - iLocal_2126) > 8000)
						{
							if (__LIB_17__::func_243(&uLocal_539, "JHAUD", "JH_MOREDAM", 9, 0, 0, 0))
							{
								iLocal_2126 = MISC::GET_GAME_TIMER();
							}
						}
						iLocal_2129 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
						if (((MISC::GET_GAME_TIMER() - iLocal_2126) % 5) == 0)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_456[iLocal_2129]))
							{
								MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_456[iLocal_2129], 0.5f, -2f, 0.1f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_456[iLocal_2129], 0f, 0f, 0.2f), 1, true, joaat("WEAPON_ASSAULTRIFLE"), 0, true, true, -1f);
							}
						}
					}
					if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_456[2]) < 40f)
					{
						PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(func_94(1), 2);
						if ((((MISC::GET_GAME_TIMER() - iLocal_2126) > 5000 && (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_456[2]) - fLocal_2127) != 0f) && PED::IS_PED_IN_VEHICLE(func_94(1), iLocal_456[2], false)) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_456[2]))
						{
							if (__LIB_17__::func_243(&uLocal_539, "JHAUD", "JH_RIVERDAM2", 9, 0, 0, 0))
							{
								iLocal_2126 = MISC::GET_GAME_TIMER();
							}
							iLocal_2129 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
							if (((MISC::GET_GAME_TIMER() - iLocal_2126) % 2) == 0)
							{
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_456[iLocal_2129]))
								{
									MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_456[iLocal_2129], 0.5f, -2f, 0.1f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_456[iLocal_2129], 0f, 0f, 0.2f), 1, true, joaat("WEAPON_ASSAULTRIFLE"), 0, true, true, -1f);
								}
							}
							VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iLocal_456[2], 5f);
						}
						if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_456[2]) < 30f)
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_456[2]))
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_456[2]);
								VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iLocal_456[2], 30f);
								PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(func_94(1), 2);
							}
							else if (PED::CAN_KNOCK_PED_OFF_VEHICLE(func_94(1)))
							{
								PED::KNOCK_PED_OFF_VEHICLE(func_94(1));
								iLocal_2126 = MISC::GET_GAME_TIMER();
							}
						}
						Local_2131 = { ENTITY::GET_ENTITY_ROTATION(iLocal_456[2], 2) };
						if (((Local_2131.f_1 > 70f && Local_2131.f_1 < 290f) || (Local_2131.f_0 > 70f && Local_2131.f_0 < 290f)) || VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iLocal_456[2]) < 15f)
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_456[2], false))
							{
								SYSTEM::WAIT(1000);
							}
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_456[2], false))
							{
								VEHICLE::EXPLODE_VEHICLE(iLocal_456[2], true, false);
								ENTITY::SET_ENTITY_HEALTH(func_94(1), 0, 0);
							}
						}
					}
					fLocal_2127 = VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_456[2]);
				}
				if ((iLocal_273 == 0 && iLocal_278) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_456[2], false))
				{
					if (iLocal_2116 == 0)
					{
						PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_450);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_451);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_452);
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_453);
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_454);
						TASK::CLEAR_PED_TASKS(iLocal_436[2]);
						if (__LIB_0__::func_564(__LIB_16__::func_594(0, 1)) == 0)
						{
							func_762("JH_BRANCH2", 0, 0, 1);
							func_762("JH_BRANCH3A", 0, 0, 1);
							func_762("JH_BRANCH4A", 0, 0, 1);
							if (Global_100441.f_12[1] == 0)
							{
								func_762("JH_BRANCH5A", 0, 0, 1);
							}
							else
							{
								func_762("JH_BRANCH5B", 0, 0, 1);
							}
						}
						else
						{
							if (func_630())
							{
								func_709("JH_HCKNO_PH", 1, 1, 1, 9, 0, 0);
							}
							else if (func_629())
							{
								func_709("JH_HCKNO_CF", 1, 1, 1, 9, 0, 0);
							}
							else if (func_628())
							{
								func_709("JH_HCKNO_RL", 1, 1, 1, 9, 0, 0);
							}
							func_762("JH_LATECOPS1", 0, 0, 1);
						}
						iLocal_2116 = 1;
					}
				}
				else
				{
					PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::PLAYER_ID());
				}
				if (__LIB_17__::func_733(&Local_370, Local_333, 12f, 8f, 2f, 1, iLocal_460, Local_748.f_234, Local_748.f_233, Local_748.f_233, 0, 0, 1, -1))
				{
					while (!__LIB_0__::func_213(iLocal_460, 6f, 5, 1056964608, 0, 1, 0))
					{
						SYSTEM::WAIT(0);
					}
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
					if (bLocal_382)
					{
						AUDIO::TRIGGER_MUSIC_EVENT("JH2A_ARRIVE_DRAIN_MA");
					}
					iLocal_417 = 6;
				}
				break;
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_456[0], false))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iLocal_456[0], Local_333, 12f, 8f, 8f, false, true, 0))
			{
				VEHICLE::BRING_VEHICLE_TO_HALT(iLocal_456[0], 2f, -1, false);
				if (!PED::IS_PED_INJURED(iLocal_436[0]))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_436[0], true);
				}
			}
		}
		if (!bLocal_425)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_456[1], false))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(iLocal_456[1], Local_333, 12f, 8f, 8f, false, true, 0))
				{
					VEHICLE::BRING_VEHICLE_TO_HALT(iLocal_456[1], 2f, -1, false);
					if (!PED::IS_PED_INJURED(iLocal_436[1]))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_436[1], true);
					}
				}
			}
		}
		if (!__LIB_15__::func_944() == 1)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_456[2], false))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(iLocal_456[2], Local_333, 12f, 8f, 8f, false, true, 0))
				{
					VEHICLE::BRING_VEHICLE_TO_HALT(iLocal_456[2], 2f, -1, false);
					if (!ENTITY::IS_ENTITY_DEAD(func_94(1), false))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_94(1), true);
					}
				}
			}
		}
		if (iLocal_417 >= 6)
		{
			AUDIO::STOP_AUDIO_SCENE("JSH_2B_RAM_POLICE");
			PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
			if (!ENTITY::IS_ENTITY_DEAD(func_94(1), false))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(func_94(1), false);
			}
			if (!ENTITY::IS_ENTITY_DEAD(func_94(0), false))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(func_94(0), false);
			}
			CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
			iLocal_416 = 0;
			while (iLocal_416 <= 3)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_460, false) && (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_458[iLocal_416], false) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_458[iLocal_416], false)))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_441[iLocal_416]))
					{
						PED::DELETE_PED(&(iLocal_441[iLocal_416]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_442[iLocal_416]))
					{
						PED::DELETE_PED(&(iLocal_442[iLocal_416]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_458[iLocal_416]))
					{
						VEHICLE::DELETE_VEHICLE(&(iLocal_458[iLocal_416]));
					}
				}
				iLocal_416++;
			}
			WEAPON::REMOVE_WEAPON_ASSET(joaat("WEAPON_SMG"));
			iLocal_416 = 0;
			while (iLocal_416 <= 2)
			{
				if (HUD::DOES_BLIP_EXIST(iLocal_486[iLocal_416]))
				{
					HUD::REMOVE_BLIP(&(iLocal_486[iLocal_416]));
				}
				iLocal_416++;
			}
			ENTITY::SET_ENTITY_PROOFS(iLocal_460, false, false, false, false, false, false, false, false);
			iLocal_383 = 0;
			return 1;
		}
	}
	return 0;
}

float func_759(int iParam0)//Position - 0x88229
{
	int iVar0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
		{
			iVar0 = VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iParam0);
			return (100f * (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iParam0) / VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID(iVar0)));
		}
	}
	else
	{
		return -1f;
	}
	return -1f;
}

int func_760()//Position - 0x8826E
{
	iLocal_728 = 0;
	while (iLocal_728 <= 7)
	{
		if (Local_733[iLocal_728 /*7*/].f_2)
		{
			if (Local_733[iLocal_728 /*7*/].f_3 == 1)
			{
				return 1;
			}
		}
		iLocal_728++;
	}
	return 0;
}

int func_761()//Position - 0x882AC
{
	iLocal_728 = 0;
	while (iLocal_728 <= 7)
	{
		if (Local_733[iLocal_728 /*7*/].f_2)
		{
			if (Local_733[iLocal_728 /*7*/].f_3 == 0)
			{
				return 1;
			}
		}
		iLocal_728++;
	}
	return 0;
}

void func_762(char* sParam0, int iParam1, int iParam2, int iParam3)//Position - 0x882EA
{
	int iVar0;
	iVar0 = -1;
	iLocal_728 = 0;
	while (iLocal_728 < 8 && iVar0 == -1)
	{
		if (Local_733[iLocal_728 /*7*/].f_2 == 0)
		{
			iVar0 = iLocal_728;
		}
		iLocal_728++;
	}
	if (iVar0 != -1)
	{
		Local_733[iVar0 /*7*/] = sParam0;
		Local_733[iVar0 /*7*/].f_1 = MISC::GET_HASH_KEY(sParam0);
		Local_733[iVar0 /*7*/].f_2 = 1;
		Local_733[iVar0 /*7*/].f_6 = 1;
		Local_733[iVar0 /*7*/].f_3 = iParam1;
		Local_733[iVar0 /*7*/].f_4 = iParam3;
		Local_733[iVar0 /*7*/].f_5 = iParam2;
	}
}

int func_763(int iParam0)//Position - 0x8837C
{
	if (((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, 893.9555f, -388.95718f, 33.313915f, 765.80096f, -419.56534f, 19.336096f, 25.75f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, 623.36395f, -511.02774f, 13.724644f, 732.4224f, -403.3153f, 35.580723f, 46.25f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, 623.36395f, -511.02774f, 11.974644f, 569.4682f, -648.63135f, 27.654888f, 46.25f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, 575.3029f, -612.5222f, 7.281809f, 562.24744f, -1278.5852f, 23.742533f, 46.25f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, 653.6655f, -1606.389f, 2.708879f, 562.24744f, -1278.5852f, 23.742533f, 46.25f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, 653.6655f, -1606.389f, 2.708879f, 634.5008f, -1797.1576f, 25.875072f, 46.25f, false, true, 0))
	{
		return 1;
	}
	return 0;
}

void func_764()//Position - 0x884B2
{
	if (PED::IS_PED_IN_VEHICLE(func_94(0), iLocal_460, false))
	{
		if (!HUD::DOES_BLIP_EXIST(iLocal_486[0]))
		{
			iLocal_486[0] = __LIB_0__::func_666(iLocal_436[0], 0, 145);
		}
		if (!bLocal_425)
		{
			if (!HUD::DOES_BLIP_EXIST(iLocal_486[1]))
			{
				iLocal_486[1] = __LIB_0__::func_666(iLocal_436[1], 0, 145);
			}
		}
		if (!HUD::DOES_BLIP_EXIST(iLocal_486[2]))
		{
			iLocal_486[2] = __LIB_0__::func_666(func_94(1), 0, 145);
		}
	}
	else
	{
		func_849(&(iLocal_486[0]));
		if (!bLocal_425)
		{
			func_849(&(iLocal_486[1]));
		}
		func_849(&(iLocal_486[2]));
	}
}

void func_766()//Position - 0x885A8
{
	switch (iLocal_2132)
	{
		case 0:
			if (ENTITY::IS_ENTITY_AT_COORD(func_94(0), 680.7623f, -528.5031f, 14.2773f, 105f, 105f, 100f, false, true, 0))
			{
				STREAMING::REQUEST_MODEL(joaat("primo"));
				iLocal_2132++;
			}
			break;
		case 1:
			iLocal_447 = PED::CREATE_PED(6, Local_748.f_15, 680.7623f, -528.5031f, 14.2773f, 112.5884f, true, true);
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_447, 680.7623f, -528.5031f, 14.2773f, 2f, false, false);
			func_767(iLocal_447, 0);
			TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(iLocal_447, 680.7623f, -528.5031f, 14.2773f, 200f, 0);
			iLocal_2132++;
			break;
		case 2:
			iLocal_448 = PED::CREATE_PED(6, Local_748.f_15, 683.2385f, -529.8103f, 14.3534f, 172.5926f, true, true);
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_448, 683.2385f, -529.8103f, 14.3534f, 2f, false, false);
			func_767(iLocal_448, 0);
			TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(iLocal_448, 680.7623f, -528.5031f, 14.2773f, 200f, 0);
			iLocal_2132++;
			break;
		case 3:
			iLocal_449 = PED::CREATE_PED(6, Local_748.f_15, 668.7509f, -522.4036f, 14.2263f, 66f, true, true);
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_449, 668.7509f, -522.4036f, 14.2263f, 2f, false, false);
			func_767(iLocal_449, 0);
			TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(iLocal_449, 680.7623f, -528.5031f, 14.2773f, 200f, 0);
			iLocal_2132++;
			break;
		case 4:
			if (STREAMING::HAS_MODEL_LOADED(joaat("primo")))
			{
				iLocal_453 = VEHICLE::CREATE_VEHICLE(joaat("primo"), 575.9414f, -1103.2699f, 9.199f, 227.2179f, true, true, false);
				VEHICLE::EXPLODE_VEHICLE(iLocal_453, true, false);
				iLocal_2132++;
			}
			break;
		case 5:
			iLocal_454 = VEHICLE::CREATE_VEHICLE(joaat("primo"), 565.9907f, -1116.2458f, 9.1632f, 303.9077f, true, true, false);
			VEHICLE::EXPLODE_VEHICLE(iLocal_454, true, false);
			iLocal_2132++;
			break;
		case 6:
			if (ENTITY::IS_ENTITY_AT_COORD(func_94(0), 581.0883f, -840.3623f, 9.9252f, 100f, 100f, 100f, false, true, 0))
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_447);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_448);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_449);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("primo"));
				iLocal_450 = PED::CREATE_PED(6, Local_748.f_15, 581.0883f, -840.3623f, 9.9252f, 333.9399f, true, true);
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_450, 581.0883f, -840.3623f, 9.9252f, 2f, false, false);
				func_767(iLocal_450, 0);
				TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(iLocal_450, 581.0883f, -840.3623f, 9.9252f, 200f, 0);
				iLocal_2132++;
			}
			break;
		case 7:
			iLocal_451 = PED::CREATE_PED(6, Local_748.f_15, 575.5164f, -839.3569f, 9.9279f, 348.5494f, true, true);
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_451, 575.5164f, -839.3569f, 9.9279f, 2f, false, false);
			func_767(iLocal_451, 0);
			TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(iLocal_451, 581.0883f, -840.3623f, 9.9252f, 200f, 0);
			iLocal_2132++;
			break;
		case 8:
			iLocal_452 = PED::CREATE_PED(6, Local_748.f_15, 571.9435f, -839.0884f, 9.9286f, 356.4424f, true, true);
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_452, 571.9435f, -839.0884f, 9.9286f, 2f, false, false);
			func_767(iLocal_452, 0);
			TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(iLocal_452, 581.0883f, -840.3623f, 9.9252f, 200f, 0);
			iLocal_2132++;
			break;
	}
}

void func_767(int iParam0, bool bParam1)//Position - 0x88976
{
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, iLocal_499);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 13, bParam1);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 14, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 8, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 9, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 1, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 3, true);
	PED::SET_PED_ALERTNESS(iParam0, 3);
	PED::SET_PED_COMBAT_ABILITY(iParam0, 0);
	if (bParam1)
	{
		PED::SET_PED_COMBAT_RANGE(iParam0, 0);
	}
	else
	{
		PED::SET_PED_COMBAT_RANGE(iParam0, 2);
	}
	PED::SET_PED_GENERATES_DEAD_BODY_EVENTS(iParam0, false);
	PED::SET_PED_SEEING_RANGE(iParam0, 60f);
	PED::SET_PED_HEARING_RANGE(iParam0, 60f);
	PED::SET_PED_ACCURACY(iParam0, 0);
	WEAPON::GIVE_WEAPON_TO_PED(iParam0, joaat("WEAPON_PISTOL"), -1, true, true);
}

float func_768(int iParam0, float fParam1)//Position - 0x88A12
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	struct<3> Var3;
	Var0 = { 0f, 0f, 0f };
	Var1 = { 0f, 2.5f, 0f };
	Var3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_460, Var1) };
	Var0.f_1 = -10f;
	if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_456[0]))
	{
		fVar2 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_456[0]);
		if (fVar2 > 135000f)
		{
			fLocal_260 = 0.675f;
			fLocal_261 = 1.95f;
		}
		if (fVar2 > 175000f)
		{
			fLocal_260 = 0.8f;
			fLocal_261 = 1.75f;
		}
		if (fVar2 > 190000f)
		{
			fLocal_260 = 0.525f;
			fLocal_261 = 1.75f;
		}
		if (fVar2 > 184714.5f && fVar2 < 186961f)
		{
			fLocal_260 = 0.525f;
			fLocal_261 = 1.3f;
		}
		if (fVar2 > 207559.5f && fVar2 < 215057.1f)
		{
			fLocal_260 = 0.525f;
			fLocal_261 = 1.15f;
		}
		if (fVar2 > 231790.1f)
		{
			fLocal_260 = 0.5f;
			fLocal_261 = 1f;
		}
	}
	if (fParam1 != -1f)
	{
		Var0.f_1 = fParam1;
	}
	PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var3, Local_335, true) < MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var0), Local_335, true) && fVar2 > 170211.4f)
			{
				fLocal_257 = fLocal_261;
				fLocal_83 = 0.35f;
			}
			else
			{
				fLocal_257 = (fLocal_258 / MISC::GET_DISTANCE_BETWEEN_COORDS(Var3, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var0), true));
				fLocal_83 = 0.225f;
				PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
				VEHICLE::SET_VEHICLE_CHEAT_POWER_INCREASE(iLocal_460, 1.8f);
			}
			if (fLocal_259 < fLocal_257)
			{
				fLocal_259 = (fLocal_259 + (fLocal_83 * SYSTEM::TIMESTEP()));
			}
			else
			{
				fLocal_259 = (fLocal_259 - (0.75f * SYSTEM::TIMESTEP()));
			}
			if (fLocal_259 < fLocal_260)
			{
				fLocal_259 = fLocal_260;
			}
			if (ENTITY::GET_ENTITY_MODEL(iParam0) == Local_748.f_0)
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var3, Local_335, true) < MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, -1.75f, 0f), Local_335, true) && !iLocal_278)
				{
					fLocal_259 = fLocal_261;
					PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 2.5f);
				}
			}
		}
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 693.0313f, -520.2139f, 20.34405f, 629.4738f, -657.351f, 11.148476f, 46f, false, true, 0))
	{
		PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 2.55f);
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 560.62067f, -1202.8695f, 41.158386f, 558.3175f, -749.7428f, 8.30583f, 46.75f, false, true, 0))
	{
		PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 2.55f);
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 705.6175f, -1545.0829f, 6.983787f, 632.2512f, -1315.3246f, 18.492258f, 46f, false, true, 0))
	{
		PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 2.55f);
	}
	if (__LIB_0__::func_76(iLocal_460, iLocal_456[0], 1) < 10f || __LIB_0__::func_76(iLocal_460, iLocal_456[2], 1) < 10f)
	{
		PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 14.5f);
		VEHICLE::SET_VEHICLE_CHEAT_POWER_INCREASE(iLocal_460, 0.7f);
	}
	if (!bLocal_425)
	{
		if (__LIB_0__::func_76(iLocal_460, iLocal_456[1], 1) < 10f)
		{
			PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 14.5f);
			VEHICLE::SET_VEHICLE_CHEAT_POWER_INCREASE(iLocal_460, 0.7f);
		}
	}
	if (iLocal_273 == 0 && iLocal_278)
	{
		VEHICLE::SET_VEHICLE_CHEAT_POWER_INCREASE(iLocal_460, 1f);
	}
	return fLocal_259;
}

int func_770(int iParam0, int iParam1)//Position - 0x88DF9
{
	int iVar0;
	float fVar1;
	int iVar2;
	fVar1 = 1000000f;
	iVar0 = 0;
	while (iVar0 <= 34)
	{
		if (iVar0 != 14 && ENTITY::DOES_ENTITY_EXIST(iLocal_223[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_223[iVar0], false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_223[iVar0]))
				{
					if ((ENTITY::GET_ENTITY_MODEL(iLocal_223[iVar0]) == joaat("police") || ENTITY::GET_ENTITY_MODEL(iLocal_223[iVar0]) == joaat("police2")) || ENTITY::GET_ENTITY_MODEL(iLocal_223[iVar0]) == joaat("police3"))
					{
						if (__LIB_0__::func_76(iParam1, iLocal_223[iVar0], 1) < fVar1)
						{
							fVar1 = __LIB_0__::func_76(iParam1, iLocal_223[iVar0], 1);
							iVar2 = iVar0;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (fVar1 > __LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iParam0, 1))
	{
		return iParam0;
	}
	return iLocal_223[iVar2];
}

int func_771()//Position - 0x88EDB
{
	float fVar0;
	float fVar1;
	float fVar2;
	fVar0 = 100000000f;
	fVar1 = 100000000f;
	fVar2 = 100000000f;
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_456[0]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_456[0], false))
		{
			fVar0 = __LIB_0__::func_76(iLocal_456[0], PLAYER::PLAYER_PED_ID(), 1);
		}
	}
	if (!bLocal_425)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_456[1]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_456[1], false))
			{
				fVar1 = __LIB_0__::func_76(iLocal_456[1], PLAYER::PLAYER_PED_ID(), 1);
			}
		}
	}
	if (iLocal_407)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_456[2]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_456[2], false))
			{
				fVar2 = __LIB_0__::func_76(iLocal_456[2], PLAYER::PLAYER_PED_ID(), 1);
			}
		}
	}
	if (fVar0 < fVar1 && fVar0 < fVar2)
	{
		return iLocal_456[0];
	}
	if (!bLocal_425)
	{
		if (fVar1 < fVar0 && fVar1 < fVar2)
		{
			return iLocal_456[1];
		}
	}
	if (fVar2 < fVar0 && fVar2 < fVar1)
	{
		return iLocal_456[2];
	}
	return 0;
}

void func_772()//Position - 0x88FE5
{
	iLocal_111 = 1;
}

int func_775(int iParam0, int iParam1, float fParam2, float fParam3, bool bParam4)//Position - 0x89021
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	float fVar5;
	float fVar6;
	bool bVar7;
	int iVar8;
	float fVar9;
	float fVar10;
	if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("JWL_HEIST_CAR_SMASHES_BIG", false, -1) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam1, iParam0) && !ENTITY::IS_ENTITY_IN_AIR(iParam0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iParam0);
				}
				Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam0, ENTITY::GET_ENTITY_COORDS(iParam1, true)) };
				Var1 = { Local_518 };
				Var2 = { Local_518 };
				Var3 = { ENTITY::GET_ENTITY_SPEED_VECTOR(iParam1, false) };
				Var4 = { ENTITY::GET_ENTITY_SPEED_VECTOR(iParam0, false) };
				fVar5 = ENTITY::GET_ENTITY_SPEED(iParam1);
				fVar6 = ENTITY::GET_ENTITY_SPEED(iParam0);
				bVar7 = false;
				iVar8 = 0;
				if (MISC::ABSF(Var0.f_0) > (fParam2 + fParam3))
				{
					iVar8 = 0;
				}
				else if (Var0.f_1 > 0f)
				{
					iVar8 = 1;
				}
				else
				{
					iVar8 = 2;
				}
				if (bParam4)
				{
					fVar9 = 0.6f;
					fVar10 = 5f;
				}
				else
				{
					fVar9 = 1.4f;
					fVar10 = 15f;
				}
				switch (iVar8)
				{
					case 0:
						if (MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var3.f_0, Var3.f_1, Var4.f_0, Var4.f_1) > 2.5f && fVar5 > fVar10)
						{
							Var1.f_0 = -Var0.f_0;
							Var1.f_1 = 0f;
							Var1.f_2 = 0f;
							Var1 = { __LIB_0__::func_79(Var1) };
							Var1.f_0 = (Var1.f_0 * fVar9);
							Var1.f_2 = fVar9;
							Var2.f_0 = Var0.f_0;
							Var2.f_1 = 0f;
							Var2.f_2 = 0f;
							if (Var0.f_0 > 0f)
							{
								VEHICLE::SMASH_VEHICLE_WINDOW(iParam0, 1);
								VEHICLE::SMASH_VEHICLE_WINDOW(iParam0, 3);
							}
							else
							{
								VEHICLE::SMASH_VEHICLE_WINDOW(iParam0, 0);
								VEHICLE::SMASH_VEHICLE_WINDOW(iParam0, 2);
							}
							bVar7 = true;
						}
						break;
					case 1:
						if (fVar6 > fVar10)
						{
							Var1.f_0 = 0f;
							Var1.f_1 = -Var0.f_1;
							Var1.f_2 = 0f;
							Var1 = { __LIB_0__::func_79(Var1) };
							Var1.f_1 = (Var1.f_1 * fVar9);
							Var1.f_2 = 0f;
							Var2.f_0 = (Var0.f_0 / 2f);
							Var2.f_1 = Var0.f_1;
							Var2.f_2 = 0f;
							VEHICLE::SMASH_VEHICLE_WINDOW(iParam0, 1);
							VEHICLE::SMASH_VEHICLE_WINDOW(iParam0, 0);
							bVar7 = true;
						}
						break;
					case 2:
						if (fVar5 > fVar10)
						{
							Var1.f_0 = -Var0.f_0;
							Var1.f_1 = 0f;
							Var1.f_2 = 0f;
							Var1 = { __LIB_0__::func_79(Var1) };
							Var1.f_0 = (Var1.f_0 * fVar9);
							Var1.f_2 = 0f;
							Var2.f_0 = Var0.f_0;
							Var2.f_1 = (Var0.f_1 / 2f);
							Var2.f_2 = 0f;
							VEHICLE::SMASH_VEHICLE_WINDOW(iParam0, 3);
							VEHICLE::SMASH_VEHICLE_WINDOW(iParam0, 2);
							bVar7 = true;
						}
						break;
				}
				if (bVar7)
				{
					VEHICLE::SET_VEHICLE_DAMAGE(iParam0, Var0, 20f, 100f, true);
					if (Var2.f_0 > 1.7f)
					{
						Var2.f_0 = 1.7f;
					}
					if (Var2.f_0 < -1.7f)
					{
						Var2.f_0 = -1.7f;
					}
					if (Var2.f_1 > 1.7f)
					{
						Var2.f_1 = 1.7f;
					}
					if (Var2.f_1 < -1.7f)
					{
						Var2.f_1 = -1.7f;
					}
					if (Var2.f_2 > 1.7f)
					{
						Var2.f_2 = 1.7f;
					}
					if (Var2.f_2 < -1.7f)
					{
						Var2.f_2 = -1.7f;
					}
					Var1 = { Var1 * Vector(0.72f, 0.72f, 0.72f) };
					if (!__LIB_13__::func_755(&Local_370, 1))
					{
						__LIB_14__::func_654(&uLocal_539, "JHAUD", "JH_SMASHCOPS", 9, 0, 0);
					}
					if (!ENTITY::IS_ENTITY_DEAD(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false), false))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false), false);
						WEAPON::GIVE_WEAPON_TO_PED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false), joaat("WEAPON_PISTOL"), -1, false, true);
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false), 200f, 0);
						PED::SET_PED_COMBAT_ATTRIBUTES(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false), 1, false);
					}
					if ((MISC::GET_GAME_TIMER() - iLocal_2040) > 2500)
					{
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 2f, 3);
						iLocal_2039 = AUDIO::GET_SOUND_ID();
						AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_2039, "Destroy_Cop_Car", iParam0, "JEWEL_HEIST_SOUNDS", false, 0);
						iLocal_2040 = MISC::GET_GAME_TIMER();
					}
					if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iParam0) > 100f)
					{
						VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iParam0, 20f);
					}
					if (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iParam0) > 100f)
					{
						VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iParam0, 75f);
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_780()//Position - 0x89575
{
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(12, true);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(2, true);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(4, true);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(7, true);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(8, true);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(9, true);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(10, true);
	MISC::ENABLE_DISPATCH_SERVICE(1, false);
	MISC::ENABLE_DISPATCH_SERVICE(12, false);
	MISC::ENABLE_DISPATCH_SERVICE(2, false);
	MISC::ENABLE_DISPATCH_SERVICE(4, false);
	MISC::ENABLE_DISPATCH_SERVICE(7, false);
	MISC::ENABLE_DISPATCH_SERVICE(8, false);
	MISC::ENABLE_DISPATCH_SERVICE(9, false);
	MISC::ENABLE_DISPATCH_SERVICE(10, false);
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 4, false);
	PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
}

int func_781(var uParam0)//Position - 0x895F7
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 0 /*INPUT_NEXT_CAMERA*/, true);
	switch (iLocal_750)
	{
		case 0:
			break;
		case 1:
			STREAMING::SET_GAME_PAUSES_FOR_STREAMING(false);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_456[2], false))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(iLocal_456[2], true);
			}
			RECORDING::REPLAY_START_EVENT(3);
			CAM::DESTROY_ALL_CAMS(false);
			func_813(uParam0, iLocal_456[2], iLocal_460);
			__LIB_16__::func_29(uParam0);
			CAM::SET_CAM_ACTIVE(uParam0->f_1, true);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			GRAPHICS::ANIMPOSTFX_PLAY("SwitchOpenFranklin", 0, false);
			HUD::DISPLAY_RADAR(false);
			HUD::DISPLAY_HUD(false);
			__LIB_0__::func_532(1, 1, 1, 0, 0, 0, 0);
			iLocal_2004 = 0;
			iLocal_2005 = 0;
			iLocal_2006 = 0;
			iLocal_2013 = 0;
			iLocal_2014 = 0;
			iLocal_2015 = 0;
			iLocal_2016 = 0;
			iLocal_2017 = 0;
			iLocal_2018 = 0;
			if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 4)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Hit_In", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
			}
			SYSTEM::SETTIMERB(0);
			iLocal_750 = 2;
		case 2:
			if (CAM::IS_CAM_ACTIVE(uParam0->f_1))
			{
				iVar0 = __LIB_17__::func_618(uParam0);
				fVar1 = CAM::GET_CAM_SPLINE_PHASE(uParam0->f_1);
				if (__LIB_15__::func_944() != 0)
				{
					if (iVar0 >= uParam0->f_1218)
					{
						__LIB_17__::func_760(&Local_519, 0);
						Local_519.f_39 = 1;
						Local_519.f_7 = 0;
						func_176(&Local_519, 1, 0, 0);
					}
				}
				if (iLocal_2005 == 0)
				{
					if (iVar0 >= uParam0->f_1218)
					{
						func_782();
						iLocal_2005 = 1;
					}
				}
				if (!iLocal_2004)
				{
					if (iVar0 >= 4)
					{
						func_715();
						func_716(1, 1, 1);
						__LIB_0__::func_325();
						__LIB_17__::func_243(&uLocal_539, "JHAUD", "JH_TRUCK", 9, 0, 0, 0);
						iLocal_2004 = 1;
					}
				}
				if (!iLocal_2013)
				{
					if (fVar1 >= fLocal_2009)
					{
						iLocal_2008 = AUDIO::GET_SOUND_ID();
						if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 4)
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "Hit_out", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
						}
						AUDIO::PLAY_SOUND_FRONTEND(iLocal_2008, "In", "SHORT_PLAYER_SWITCH_SOUND_SET", true);
						iLocal_2013 = 1;
					}
				}
				if (!iLocal_2014)
				{
					if (fVar1 >= fLocal_2010)
					{
						AUDIO::STOP_SOUND(iLocal_2008);
						iLocal_2014 = 1;
					}
				}
				if (!iLocal_2015)
				{
					if (fVar1 >= fLocal_2011)
					{
						GRAPHICS::ANIMPOSTFX_PLAY("SwitchShortFranklinIn", 0, false);
						iLocal_2015 = 1;
					}
				}
				if (!iLocal_2016)
				{
					if (fVar1 >= fLocal_2012)
					{
						GRAPHICS::ANIMPOSTFX_PLAY("SwitchShortMichaelMid", 0, false);
						iLocal_2016 = 1;
					}
				}
				if (!iLocal_2017)
				{
					if (iVar0 >= 4)
					{
						AUDIO::ACTIVATE_AUDIO_SLOWMO_MODE("JSH_EXIT_TUNNEL_SLOWMO");
						iLocal_2017 = 1;
					}
				}
				if (!iLocal_2018)
				{
					if (iVar0 >= 7)
					{
						AUDIO::DEACTIVATE_AUDIO_SLOWMO_MODE("JSH_EXIT_TUNNEL_SLOWMO");
						iLocal_2018 = 1;
					}
				}
				if (iVar0 == (uParam0->f_1217 - 1))
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fLocal_1993);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fLocal_1994, 1f);
				}
				if (fVar1 >= 0.925f && iLocal_2021 == 0)
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 4)
					{
						GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, false);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
					}
					iLocal_2021 = 1;
				}
				if (fVar1 >= 1f)
				{
					MISC::SET_TIME_SCALE(1f);
					if (CAM::DOES_CAM_EXIST(uParam0->f_1))
					{
						CAM::DESTROY_CAM(uParam0->f_1, false);
						CAM::DESTROY_ALL_CAMS(false);
					}
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					AUDIO::STOP_SOUND(iLocal_2008);
					HUD::DISPLAY_RADAR(true);
					HUD::DISPLAY_HUD(true);
					__LIB_0__::func_532(0, 1, 1, 0, 0, 0, 0);
					SYSTEM::SETTIMERB(0);
					iLocal_750 = 3;
				}
			}
			break;
		case 3:
			if (!iLocal_2006)
			{
				__LIB_0__::func_603(&iVar2, &iVar3, &iVar4, &iVar5, 0);
				if ((((((iVar2 != 0 || iVar3 != 0) || iVar4 != 0) || iVar5 != 0) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/)) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/)) || SYSTEM::TIMERB() > iLocal_1992)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_460))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_460, false))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_460))
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_460);
							}
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(func_94(0)))
					{
						if (!ENTITY::IS_ENTITY_DEAD(func_94(0), false))
						{
							TASK::CLEAR_PED_TASKS(func_94(0));
						}
					}
					RECORDING::REPLAY_STOP_EVENT();
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					STREAMING::SET_GAME_PAUSES_FOR_STREAMING(true);
					SYSTEM::SETTIMERA(0);
					iLocal_750 = 0;
					iLocal_2006 = 1;
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_782()//Position - 0x899DA
{
	if (!STREAMING::HAS_ANIM_DICT_LOADED(sLocal_1995))
	{
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_436[2]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_436[2], false))
		{
			TASK::TASK_PLAY_ANIM(iLocal_436[2], sLocal_1995, sLocal_1996, 1000f, -1000f, -1, 1, 0f, false, false, false);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_436[2], true, false);
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(func_94(0), false))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_436[2], false))
		{
			TASK::TASK_PLAY_ANIM(func_94(0), sLocal_1995, sLocal_1997, 1000f, -1000f, -1, 1, 0f, false, false, false);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_94(0), true, false);
		}
	}
}

void func_813(var uParam0, var uParam1, int iParam2)//Position - 0x8B5D1
{
	if (!*uParam0)
	{
		uParam0->f_10[0 /*57*/].f_2 = 2;
		uParam0->f_10[0 /*57*/].f_4 = 0;
		uParam0->f_10[0 /*57*/].f_5 = 0;
		uParam0->f_10[0 /*57*/].f_6 = { 1020.4197f, -223.5525f, 44.3141f };
		uParam0->f_10[0 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[0 /*57*/].f_12 = 0f;
		uParam0->f_10[0 /*57*/].f_9 = { 0.5452f, 2.0735f, 162.6459f };
		uParam0->f_10[0 /*57*/].f_18 = 1;
		uParam0->f_10[0 /*57*/].f_19 = 1;
		uParam0->f_10[0 /*57*/].f_20 = 0;
		if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 4)
		{
			uParam0->f_10[0 /*57*/].f_21 = 62.5f;
		}
		else
		{
			uParam0->f_10[0 /*57*/].f_21 = 50f;
		}
		uParam0->f_10[0 /*57*/].f_50 = 0;
		uParam0->f_10[0 /*57*/].f_51 = 0f;
		uParam0->f_10[0 /*57*/].f_52 = 0f;
		uParam0->f_10[0 /*57*/].f_22 = 0f;
		uParam0->f_10[0 /*57*/].f_53 = 2;
		uParam0->f_10[0 /*57*/].f_23 = 0.2f;
		uParam0->f_10[0 /*57*/].f_28 = 0;
		uParam0->f_10[0 /*57*/].f_29 = 0f;
		uParam0->f_10[0 /*57*/].f_30 = 0;
		uParam0->f_10[0 /*57*/].f_33 = 1f;
		uParam0->f_10[0 /*57*/].f_34 = 0;
		uParam0->f_10[0 /*57*/].f_35 = 0f;
		uParam0->f_10[0 /*57*/].f_36 = 0;
		uParam0->f_10[0 /*57*/].f_39 = 0f;
		uParam0->f_10[0 /*57*/].f_40 = 0f;
		uParam0->f_10[0 /*57*/].f_41 = 0;
		uParam0->f_10[0 /*57*/].f_42 = 0;
		uParam0->f_10[0 /*57*/].f_43 = 0;
		uParam0->f_10[0 /*57*/].f_38 = 0f;
		uParam0->f_10[0 /*57*/].f_45 = 0;
		uParam0->f_10[0 /*57*/].f_46 = 0;
		uParam0->f_10[0 /*57*/].f_47 = 0f;
		uParam0->f_10[0 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[0 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[1 /*57*/].f_2 = 2;
		uParam0->f_10[1 /*57*/].f_4 = 0;
		uParam0->f_10[1 /*57*/].f_5 = 0;
		uParam0->f_10[1 /*57*/].f_6 = { 1020.4197f, -223.5525f, 44.3141f };
		uParam0->f_10[1 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[1 /*57*/].f_12 = 0f;
		uParam0->f_10[1 /*57*/].f_9 = { 0.5452f, 2.0735f, 162.6459f };
		uParam0->f_10[1 /*57*/].f_18 = 1;
		uParam0->f_10[1 /*57*/].f_19 = 1;
		uParam0->f_10[1 /*57*/].f_20 = 0;
		if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 4)
		{
			uParam0->f_10[1 /*57*/].f_21 = 62.5f;
		}
		else
		{
			uParam0->f_10[1 /*57*/].f_21 = 50f;
		}
		uParam0->f_10[1 /*57*/].f_50 = 0;
		uParam0->f_10[1 /*57*/].f_51 = 0f;
		uParam0->f_10[1 /*57*/].f_52 = 0f;
		uParam0->f_10[1 /*57*/].f_22 = 0f;
		uParam0->f_10[1 /*57*/].f_53 = 2;
		uParam0->f_10[1 /*57*/].f_23 = 0.2f;
		uParam0->f_10[1 /*57*/].f_28 = 0;
		uParam0->f_10[1 /*57*/].f_29 = 0f;
		uParam0->f_10[1 /*57*/].f_30 = 0;
		uParam0->f_10[1 /*57*/].f_33 = 1f;
		uParam0->f_10[1 /*57*/].f_34 = 0;
		uParam0->f_10[1 /*57*/].f_35 = 0f;
		uParam0->f_10[1 /*57*/].f_36 = 0;
		uParam0->f_10[1 /*57*/].f_39 = 0f;
		uParam0->f_10[1 /*57*/].f_40 = 0f;
		uParam0->f_10[1 /*57*/].f_41 = 0;
		uParam0->f_10[1 /*57*/].f_42 = 0;
		uParam0->f_10[1 /*57*/].f_43 = 0;
		uParam0->f_10[1 /*57*/].f_38 = 0f;
		uParam0->f_10[1 /*57*/].f_45 = 0;
		uParam0->f_10[1 /*57*/].f_46 = 0;
		uParam0->f_10[1 /*57*/].f_47 = 0f;
		uParam0->f_10[1 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[1 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[2 /*57*/].f_2 = 0;
		uParam0->f_10[2 /*57*/].f_4 = 0;
		uParam0->f_10[2 /*57*/].f_5 = 1000;
		uParam0->f_10[2 /*57*/].f_6 = { -1.2686f, 4.4238f, 0.7634f };
		uParam0->f_10[2 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[2 /*57*/].f_12 = 0f;
		uParam0->f_10[2 /*57*/].f_9 = { -0.1759f, -0.0402f, 0.7239f };
		uParam0->f_10[2 /*57*/].f_18 = 1;
		uParam0->f_10[2 /*57*/].f_19 = 1;
		uParam0->f_10[2 /*57*/].f_20 = 0;
		if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 4)
		{
			uParam0->f_10[2 /*57*/].f_21 = 65.5f;
		}
		else
		{
			uParam0->f_10[2 /*57*/].f_21 = 50f;
		}
		uParam0->f_10[2 /*57*/].f_50 = 0;
		uParam0->f_10[2 /*57*/].f_51 = 0f;
		uParam0->f_10[2 /*57*/].f_52 = 0f;
		uParam0->f_10[2 /*57*/].f_22 = 0f;
		uParam0->f_10[2 /*57*/].f_53 = 2;
		uParam0->f_10[2 /*57*/].f_23 = 0.2f;
		uParam0->f_10[2 /*57*/].f_28 = 0;
		uParam0->f_10[2 /*57*/].f_29 = 0f;
		uParam0->f_10[2 /*57*/].f_30 = 0;
		uParam0->f_10[2 /*57*/].f_33 = 1f;
		uParam0->f_10[2 /*57*/].f_34 = 0;
		uParam0->f_10[2 /*57*/].f_35 = 0f;
		uParam0->f_10[2 /*57*/].f_36 = 0;
		uParam0->f_10[2 /*57*/].f_39 = 0f;
		uParam0->f_10[2 /*57*/].f_40 = 0f;
		uParam0->f_10[2 /*57*/].f_41 = 0;
		uParam0->f_10[2 /*57*/].f_42 = 0;
		uParam0->f_10[2 /*57*/].f_43 = 0;
		uParam0->f_10[2 /*57*/].f_38 = 0f;
		uParam0->f_10[2 /*57*/].f_45 = 0;
		uParam0->f_10[2 /*57*/].f_46 = 0;
		uParam0->f_10[2 /*57*/].f_47 = 0f;
		uParam0->f_10[2 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[2 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[3 /*57*/].f_2 = 0;
		uParam0->f_10[3 /*57*/].f_4 = 0;
		uParam0->f_10[3 /*57*/].f_5 = 1000;
		uParam0->f_10[3 /*57*/].f_6 = { -3.3723f, 3.9445f, -0.1419f };
		uParam0->f_10[3 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[3 /*57*/].f_12 = 0f;
		uParam0->f_10[3 /*57*/].f_9 = { 3.7017f, 0f, -137.848f };
		uParam0->f_10[3 /*57*/].f_18 = 0;
		uParam0->f_10[3 /*57*/].f_19 = 0;
		uParam0->f_10[3 /*57*/].f_20 = 0;
		uParam0->f_10[3 /*57*/].f_21 = 50f;
		uParam0->f_10[3 /*57*/].f_50 = 0;
		uParam0->f_10[3 /*57*/].f_51 = 0f;
		uParam0->f_10[3 /*57*/].f_52 = 0f;
		uParam0->f_10[3 /*57*/].f_22 = 0f;
		uParam0->f_10[3 /*57*/].f_53 = 2;
		uParam0->f_10[3 /*57*/].f_23 = 0.2f;
		uParam0->f_10[3 /*57*/].f_28 = 0;
		uParam0->f_10[3 /*57*/].f_29 = 0f;
		uParam0->f_10[3 /*57*/].f_30 = 0;
		uParam0->f_10[3 /*57*/].f_33 = 1f;
		uParam0->f_10[3 /*57*/].f_34 = 0;
		uParam0->f_10[3 /*57*/].f_35 = 0f;
		uParam0->f_10[3 /*57*/].f_36 = 0;
		uParam0->f_10[3 /*57*/].f_39 = 0f;
		uParam0->f_10[3 /*57*/].f_40 = 0f;
		uParam0->f_10[3 /*57*/].f_41 = 0;
		uParam0->f_10[3 /*57*/].f_42 = 0;
		uParam0->f_10[3 /*57*/].f_43 = 0;
		uParam0->f_10[3 /*57*/].f_38 = 0f;
		uParam0->f_10[3 /*57*/].f_45 = 0;
		uParam0->f_10[3 /*57*/].f_46 = 0;
		uParam0->f_10[3 /*57*/].f_47 = 0f;
		uParam0->f_10[3 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[3 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[4 /*57*/].f_2 = 0;
		uParam0->f_10[4 /*57*/].f_4 = 0;
		uParam0->f_10[4 /*57*/].f_5 = 500;
		uParam0->f_10[4 /*57*/].f_6 = { -2.8073f, 3.3803f, 0.0177f };
		uParam0->f_10[4 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[4 /*57*/].f_12 = 0f;
		uParam0->f_10[4 /*57*/].f_9 = { -0.5709f, -0.2904f, 0.0941f };
		uParam0->f_10[4 /*57*/].f_18 = 1;
		uParam0->f_10[4 /*57*/].f_19 = 1;
		uParam0->f_10[4 /*57*/].f_20 = 0;
		uParam0->f_10[4 /*57*/].f_21 = 50f;
		uParam0->f_10[4 /*57*/].f_50 = 0;
		uParam0->f_10[4 /*57*/].f_51 = 0f;
		uParam0->f_10[4 /*57*/].f_52 = 0f;
		uParam0->f_10[4 /*57*/].f_22 = 0f;
		uParam0->f_10[4 /*57*/].f_53 = 2;
		uParam0->f_10[4 /*57*/].f_23 = 0.2f;
		uParam0->f_10[4 /*57*/].f_28 = 0;
		uParam0->f_10[4 /*57*/].f_29 = 0f;
		uParam0->f_10[4 /*57*/].f_30 = 0;
		uParam0->f_10[4 /*57*/].f_33 = 1f;
		uParam0->f_10[4 /*57*/].f_34 = 0;
		uParam0->f_10[4 /*57*/].f_35 = 0f;
		uParam0->f_10[4 /*57*/].f_36 = 0;
		uParam0->f_10[4 /*57*/].f_39 = 0f;
		uParam0->f_10[4 /*57*/].f_40 = 0f;
		uParam0->f_10[4 /*57*/].f_41 = 0;
		uParam0->f_10[4 /*57*/].f_42 = 0;
		uParam0->f_10[4 /*57*/].f_43 = 0;
		uParam0->f_10[4 /*57*/].f_38 = 0f;
		uParam0->f_10[4 /*57*/].f_45 = 0;
		uParam0->f_10[4 /*57*/].f_46 = 0;
		uParam0->f_10[4 /*57*/].f_47 = 0f;
		uParam0->f_10[4 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[4 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[5 /*57*/].f_2 = 0;
		uParam0->f_10[5 /*57*/].f_4 = 0;
		uParam0->f_10[5 /*57*/].f_5 = 1000;
		uParam0->f_10[5 /*57*/].f_6 = { -1.9069f, 4.1475f, 0.0177f };
		uParam0->f_10[5 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[5 /*57*/].f_12 = 0f;
		uParam0->f_10[5 /*57*/].f_9 = { -0.5866f, -0.2491f, 0.0934f };
		uParam0->f_10[5 /*57*/].f_18 = 1;
		uParam0->f_10[5 /*57*/].f_19 = 1;
		uParam0->f_10[5 /*57*/].f_20 = 0;
		uParam0->f_10[5 /*57*/].f_21 = 50f;
		uParam0->f_10[5 /*57*/].f_50 = 0;
		uParam0->f_10[5 /*57*/].f_51 = 0f;
		uParam0->f_10[5 /*57*/].f_52 = 0f;
		uParam0->f_10[5 /*57*/].f_22 = 0f;
		uParam0->f_10[5 /*57*/].f_53 = 2;
		uParam0->f_10[5 /*57*/].f_23 = 0.2f;
		uParam0->f_10[5 /*57*/].f_28 = 0;
		uParam0->f_10[5 /*57*/].f_29 = 0f;
		uParam0->f_10[5 /*57*/].f_30 = 0;
		uParam0->f_10[5 /*57*/].f_33 = 0.5f;
		uParam0->f_10[5 /*57*/].f_34 = 0;
		uParam0->f_10[5 /*57*/].f_35 = 0f;
		uParam0->f_10[5 /*57*/].f_36 = 0;
		uParam0->f_10[5 /*57*/].f_39 = 0f;
		uParam0->f_10[5 /*57*/].f_40 = 0f;
		uParam0->f_10[5 /*57*/].f_41 = 0;
		uParam0->f_10[5 /*57*/].f_42 = 0;
		uParam0->f_10[5 /*57*/].f_43 = 0;
		uParam0->f_10[5 /*57*/].f_38 = 0f;
		uParam0->f_10[5 /*57*/].f_45 = 0;
		uParam0->f_10[5 /*57*/].f_46 = 0;
		uParam0->f_10[5 /*57*/].f_47 = 0f;
		uParam0->f_10[5 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[5 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[6 /*57*/].f_2 = 0;
		uParam0->f_10[6 /*57*/].f_4 = 0;
		uParam0->f_10[6 /*57*/].f_5 = 300;
		uParam0->f_10[6 /*57*/].f_6 = { -0.2482f, 10.6558f, 0.9422f };
		uParam0->f_10[6 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[6 /*57*/].f_12 = 0f;
		uParam0->f_10[6 /*57*/].f_9 = { 2.3013f, 0.9288f, 1.0667f };
		uParam0->f_10[6 /*57*/].f_18 = 1;
		uParam0->f_10[6 /*57*/].f_19 = 1;
		uParam0->f_10[6 /*57*/].f_20 = 0;
		uParam0->f_10[6 /*57*/].f_21 = 50f;
		uParam0->f_10[6 /*57*/].f_50 = 0;
		uParam0->f_10[6 /*57*/].f_51 = 0f;
		uParam0->f_10[6 /*57*/].f_52 = 0f;
		uParam0->f_10[6 /*57*/].f_22 = 0.5f;
		uParam0->f_10[6 /*57*/].f_53 = 2;
		uParam0->f_10[6 /*57*/].f_23 = 0.2f;
		uParam0->f_10[6 /*57*/].f_28 = 0;
		uParam0->f_10[6 /*57*/].f_29 = 0f;
		uParam0->f_10[6 /*57*/].f_30 = 0;
		uParam0->f_10[6 /*57*/].f_33 = 0.5f;
		uParam0->f_10[6 /*57*/].f_34 = 0;
		uParam0->f_10[6 /*57*/].f_35 = 0f;
		uParam0->f_10[6 /*57*/].f_36 = 0;
		uParam0->f_10[6 /*57*/].f_39 = 0f;
		uParam0->f_10[6 /*57*/].f_40 = 0f;
		uParam0->f_10[6 /*57*/].f_41 = 0;
		uParam0->f_10[6 /*57*/].f_42 = 0;
		uParam0->f_10[6 /*57*/].f_43 = 0;
		uParam0->f_10[6 /*57*/].f_38 = 0f;
		uParam0->f_10[6 /*57*/].f_45 = 0;
		uParam0->f_10[6 /*57*/].f_46 = 0;
		uParam0->f_10[6 /*57*/].f_47 = 0f;
		uParam0->f_10[6 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[6 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[7 /*57*/].f_2 = 0;
		uParam0->f_10[7 /*57*/].f_4 = 0;
		uParam0->f_10[7 /*57*/].f_5 = 300;
		uParam0->f_10[7 /*57*/].f_6 = { 6.3795f, 13.1729f, 3.1116f };
		uParam0->f_10[7 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[7 /*57*/].f_12 = 0f;
		uParam0->f_10[7 /*57*/].f_9 = { -1.0851f, -0.1238f, 2.4081f };
		uParam0->f_10[7 /*57*/].f_18 = 1;
		uParam0->f_10[7 /*57*/].f_19 = 1;
		uParam0->f_10[7 /*57*/].f_20 = 0;
		uParam0->f_10[7 /*57*/].f_21 = 50f;
		uParam0->f_10[7 /*57*/].f_50 = 0;
		uParam0->f_10[7 /*57*/].f_51 = 0f;
		uParam0->f_10[7 /*57*/].f_52 = 0f;
		uParam0->f_10[7 /*57*/].f_22 = 0f;
		uParam0->f_10[7 /*57*/].f_53 = 2;
		uParam0->f_10[7 /*57*/].f_23 = 0.2f;
		uParam0->f_10[7 /*57*/].f_28 = 0;
		uParam0->f_10[7 /*57*/].f_29 = 0f;
		uParam0->f_10[7 /*57*/].f_30 = 0;
		uParam0->f_10[7 /*57*/].f_33 = 1f;
		uParam0->f_10[7 /*57*/].f_34 = 0;
		uParam0->f_10[7 /*57*/].f_35 = 0f;
		uParam0->f_10[7 /*57*/].f_36 = 0;
		uParam0->f_10[7 /*57*/].f_39 = 0f;
		uParam0->f_10[7 /*57*/].f_40 = 0f;
		uParam0->f_10[7 /*57*/].f_41 = 0;
		uParam0->f_10[7 /*57*/].f_42 = 0;
		uParam0->f_10[7 /*57*/].f_43 = 0;
		uParam0->f_10[7 /*57*/].f_38 = 0f;
		uParam0->f_10[7 /*57*/].f_45 = 0;
		uParam0->f_10[7 /*57*/].f_46 = 0;
		uParam0->f_10[7 /*57*/].f_47 = 0f;
		uParam0->f_10[7 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[7 /*57*/].f_47.f_2 = 0f;
		uParam0->f_1217 = 8;
		uParam0->f_1218 = 6;
		uParam0->f_2 = 1;
		uParam0->f_3 = 1;
		uParam0->f_1219 = 1000;
		uParam0->f_1221 = "thisSwitchCam";
		uParam0->f_1220 = "CameraInfo_JewelHeist_SwitchCam.txt";
		uParam0->f_1225 = "CameraInfo_JewelHeist_SwitchCam.xml";
		*uParam0 = 1;
	}
	uParam0->f_4[0] = uParam1;
	uParam0->f_4[1] = iParam2;
}

void func_814()//Position - 0x8C306
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_460, false))
	{
		if (!bLocal_425)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_456[1], false))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_436[1], func_94(0), 20f, 20f, 20f, false, false, 0))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_436[1], func_94(0), true) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(iLocal_460, iLocal_456[1]))
					{
						if (!iLocal_408[0])
						{
							func_709(Local_748.f_152, 1, 0, 1, 7, 0, 0);
							ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_436[1]);
							PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iLocal_436[1], 2);
							PED::KNOCK_PED_OFF_VEHICLE(iLocal_436[1]);
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_456[1]);
							ENTITY::SET_ENTITY_HEALTH(iLocal_436[1], 0, 0);
							iLocal_408[0] = 1;
						}
					}
				}
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_456[0], false))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_436[0], func_94(0), 20f, 20f, 20f, false, false, 0))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_436[0], func_94(0), true) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(iLocal_460, iLocal_456[0]))
				{
					if (!iLocal_408[1])
					{
						func_709(Local_748.f_152, 1, 0, 1, 7, 0, 0);
						ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_436[0]);
						PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iLocal_436[0], 2);
						PED::KNOCK_PED_OFF_VEHICLE(iLocal_436[0]);
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_456[0]);
						ENTITY::SET_ENTITY_HEALTH(iLocal_436[0], 0, 0);
						iLocal_408[1] = 1;
					}
				}
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_456[2], false))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(func_94(1), func_94(0), 20f, 20f, 20f, false, false, 0))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(func_94(1), func_94(0), true) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(iLocal_460, iLocal_456[2]))
				{
					if (!iLocal_408[2])
					{
						func_709(Local_748.f_152, 1, 0, 1, 7, 0, 0);
						ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(func_94(1));
						PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(func_94(1), 2);
						PED::KNOCK_PED_OFF_VEHICLE(func_94(1));
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_456[2]);
						PED::APPLY_DAMAGE_TO_PED(func_94(1), 500, true, 0);
						iLocal_408[2] = 1;
					}
				}
			}
		}
	}
}

void func_815()//Position - 0x8C528
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_436[2]) && ENTITY::DOES_ENTITY_EXIST(iLocal_223[0]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_436[2], false) && !ENTITY::IS_ENTITY_DEAD(iLocal_223[0], false))
		{
			TASK::CLEAR_PED_TASKS(iLocal_436[2]);
			TASK::TASK_DRIVE_BY(iLocal_436[2], 0, iLocal_223[0], 0f, -5f, 0f, 200f, 100, false, joaat("FIRING_PATTERN_BURST_FIRE_DRIVEBY"));
		}
	}
}

void func_816(float fParam0)//Position - 0x8C59B
{
	if (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(717, "JHUBER"))
	{
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_460))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_460, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_460))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_460);
			}
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_460, 717, "JHUBER", true);
			VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_460, fLocal_1998);
			VEHICLE::SET_PLAYBACK_SPEED(iLocal_460, fParam0);
		}
	}
}

void func_845()//Position - 0x8D67B
{
	switch (iLocal_275)
	{
		case 0:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_456[0], false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_456[0]))
				{
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_456[0]) > 180763.7f)
					{
						func_848();
						iLocal_275++;
					}
				}
			}
			break;
		case 1:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_456[0], false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_456[0]))
				{
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_456[0]) > 190763.7f)
					{
						func_847();
						iLocal_275++;
					}
				}
			}
			break;
		case 2:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_456[0], false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_456[0]))
				{
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_456[0]) > 198763.7f)
					{
						iLocal_275++;
					}
				}
			}
			break;
		case 3:
			if (__LIB_39__::func_102())
			{
				VEHICLE::SET_RANDOM_TRAINS(false);
				iLocal_274 = VEHICLE::CREATE_MISSION_TRAIN(2, 542.7376f, -1536.9722f, 21.3978f, true, 0, 0);
				VEHICLE::SET_TRAIN_CRUISE_SPEED(iLocal_274, 18f);
				VEHICLE::SET_TRAIN_SPEED(iLocal_274, 18f);
				iLocal_275++;
			}
			break;
		case 4:
			fLocal_466 = fLocal_340;
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_274, false))
			{
				VEHICLE::SET_TRAIN_SPEED(iLocal_274, (18f * fLocal_466));
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_456[0], false))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_456[0], 647.3274f, -1292.1619f, 19.982584f, 565.9138f, -1380.3717f, 28.395435f, 15f, false, true, 0))
				{
					iLocal_2125 = MISC::GET_GAME_TIMER();
					iLocal_275++;
				}
			}
			break;
		case 5:
			if ((MISC::GET_GAME_TIMER() - iLocal_2125) > 5000)
			{
				VEHICLE::SET_MISSION_TRAIN_AS_NO_LONGER_NEEDED(&iLocal_274, false);
				__LIB_39__::func_104();
				iLocal_275++;
			}
			break;
	}
}

void func_847()//Position - 0x8D8A8
{
	STREAMING::REQUEST_MODEL(joaat("freight"));
	STREAMING::REQUEST_MODEL(joaat("freightcont1"));
	STREAMING::REQUEST_MODEL(joaat("freightcont2"));
}

void func_848()//Position - 0x8D8CB
{
	STREAMING::REQUEST_MODEL(joaat("freightgrain"));
	STREAMING::REQUEST_MODEL(joaat("tankercar"));
	STREAMING::REQUEST_MODEL(joaat("freightcar"));
}

int func_849(int* iParam0)//Position - 0x8D8EE
{
	if (HUD::DOES_BLIP_EXIST(*iParam0))
	{
		HUD::REMOVE_BLIP(iParam0);
		return 1;
	}
	return 0;
}

void func_854(bool bParam0, int iParam1, int iParam2)//Position - 0x8DA3E
{
	if (bLocal_382)
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_94(0)) && iParam1)
		{
			if (!PED::IS_PED_INJURED(func_94(0)))
			{
				func_519(func_94(0), 12, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(func_94(0), 5, 6, 0, 0);
				PED::CLEAR_PED_PROP(func_94(0), 0);
				PED::CLEAR_PED_PROP(func_94(0), 1);
				PED::CLEAR_PED_PROP(func_94(0), 2);
				PED::CLEAR_PED_PROP(func_94(0), 3);
				PED::CLEAR_PED_PROP(func_94(0), 4);
				PED::CLEAR_PED_PROP(func_94(0), 5);
				PED::CLEAR_PED_PROP(func_94(0), 6);
				PED::CLEAR_PED_PROP(func_94(0), 7);
				PED::CLEAR_PED_PROP(func_94(0), 8);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(func_94(1)) && iParam2)
		{
			if (!PED::IS_PED_INJURED(func_94(1)))
			{
				PED::SET_PED_COMPONENT_VARIATION(func_94(1), 0, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(func_94(1), 3, 1, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(func_94(1), 4, 1, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(func_94(1), 5, 4, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(func_94(1), 6, 7, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(func_94(1), 7, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(func_94(1), 8, 14, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(func_94(1), 9, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(func_94(1), 10, 2, 0, 0);
				PED::SET_PED_PROP_INDEX(func_94(1), 0, 15, 0, false);
			}
		}
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_94(0)) && iParam1)
		{
			if (!PED::IS_PED_INJURED(func_94(0)))
			{
				PED::CLEAR_PED_PROP(func_94(0), 0);
				PED::CLEAR_PED_PROP(func_94(0), 1);
				PED::CLEAR_PED_PROP(func_94(0), 2);
				PED::CLEAR_PED_PROP(func_94(0), 3);
				PED::CLEAR_PED_PROP(func_94(0), 4);
				PED::CLEAR_PED_PROP(func_94(0), 5);
				PED::CLEAR_PED_PROP(func_94(0), 6);
				PED::CLEAR_PED_PROP(func_94(0), 7);
				PED::CLEAR_PED_PROP(func_94(0), 8);
				func_519(func_94(0), 12, 31, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(func_94(1)) && iParam2)
		{
			if (!PED::IS_PED_INJURED(func_94(1)))
			{
				func_519(func_94(1), 12, 18, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	func_722(func_94(0), bParam0);
	func_519(func_94(0), 14, 112, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}

void func_855(int iParam0, float fParam1)//Position - 0x8DC83
{
	float fVar0;
	struct<3> Var1;
	int iVar2;
	fVar0 = MISC::GET_FRAME_TIME();
	fVar0 = (fVar0 * 1000f);
	bLocal_121 = false;
	if (!bLocal_103)
	{
		if (bLocal_102)
		{
			__LIB_15__::func_907();
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				MISC::CLEAR_AREA(Var1, 1000f, true, false, false, false);
			}
			bLocal_103 = true;
		}
	}
	else if (!bLocal_102)
	{
		__LIB_15__::func_912();
		bLocal_103 = false;
	}
	if (bLocal_102)
	{
		fParam1 = 1f;
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	}
	if (!bLocal_96)
	{
		if (iLocal_91)
		{
			fLocal_148 = 0f;
		}
		else
		{
			fLocal_148 = 1f;
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
			{
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					if (__LIB_15__::func_927(PLAYER::PLAYER_PED_ID(), iParam0))
					{
						iLocal_101 = 1;
					}
					else
					{
						iLocal_101 = 0;
					}
				}
				fLocal_145 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iParam0);
				VEHICLE::SET_PLAYBACK_SPEED(iParam0, ((fParam1 * fLocal_146) * fLocal_148));
				if (bLocal_100)
				{
					func_878(iParam0, fLocal_145);
					func_877(iParam0, fLocal_155);
					if (fLocal_150 > 1000f)
					{
						if (iLocal_187 == 0)
						{
							func_876(iParam0, fLocal_155);
						}
						fVar0 = ((fLocal_145 + 4000f) + (SYSTEM::TO_FLOAT(iLocal_187) * 2000f));
						func_875(iParam0, fVar0, fLocal_149);
						iLocal_187++;
						if (iLocal_187 > 2)
						{
							fLocal_150 = 0f;
						}
					}
					else
					{
						iLocal_187 = 0;
						fLocal_150 = (fLocal_150 + (MISC::GET_FRAME_TIME() * 1000f));
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
		if (fLocal_145 == 0f || CAM::IS_SCREEN_FADED_OUT())
		{
			iVar2 = 1;
		}
		if (iVar2 && !bLocal_108)
		{
			if (!iLocal_90)
			{
				func_872(iParam0, ((fParam1 * fLocal_146) * fLocal_148), 0);
				if (!iLocal_111)
				{
				}
				iLocal_111 = 0;
			}
			if (bLocal_93)
			{
				func_871(iParam0);
			}
			if (!iLocal_90)
			{
				func_858(iParam0, ((fParam1 * fLocal_146) * fLocal_148), 0);
			}
		}
		if (iLocal_98)
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iLocal_225 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					Local_191 = { ENTITY::GET_ENTITY_COORDS(iLocal_225, true) };
					ENTITY::GET_ENTITY_QUATERNION(iLocal_225, &fLocal_129, &fLocal_130, &fLocal_131, &fLocal_132);
				}
			}
			iLocal_98 = 0;
		}
		if (iLocal_97)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_225))
			{
				__LIB_15__::func_908(iLocal_226);
				iLocal_226 = iLocal_225;
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_226, false))
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_226, Local_191, true, false, false, true);
				ENTITY::SET_ENTITY_QUATERNION(iLocal_226, fLocal_129, fLocal_130, fLocal_131, fLocal_132);
			}
			fLocal_144 = fLocal_147;
			iLocal_90 = 1;
			iLocal_97 = 0;
		}
		if (iLocal_90)
		{
			while (!func_856(&iParam0, fLocal_144))
			{
				SYSTEM::WAIT(0);
			}
			iLocal_91 = 1;
		}
		if (iLocal_104)
		{
			iLocal_104 = 0;
		}
	}
}

int func_856(int iParam0, float fParam1)//Position - 0x8DF1E
{
	if (!iLocal_105)
	{
		iLocal_90 = 1;
		func_733();
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*iParam0);
				VEHICLE::SET_VEHICLE_FIXED(*iParam0);
			}
			if (!iLocal_174 == -1)
			{
				while (!func_857(iParam0, iLocal_174, fParam1, 1, 0, 0, 0, 0))
				{
					SYSTEM::WAIT(0);
				}
				if (!bLocal_95)
				{
					iLocal_91 = 1;
					fLocal_148 = 0f;
					iLocal_175 = 0;
					iLocal_177 = 0;
					iLocal_176 = 0;
					iLocal_171 = 0;
					iLocal_172 = 0;
					iLocal_173 = 0;
					iLocal_178 = 0;
					iLocal_179 = 0;
					iLocal_180 = 0;
				}
			}
		}
		iLocal_105 = 1;
	}
	else
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0))
			{
				VEHICLE::SET_PLAYBACK_SPEED(*iParam0, ((1f * fLocal_146) * fLocal_148));
				func_857(iParam0, iLocal_174, fParam1, 1, 0, 0, 0, 0);
			}
		}
		fLocal_145 = fParam1;
		iLocal_181 = 0;
		iLocal_184 = 0;
		fLocal_160 = 0f;
		fLocal_159 = 0f;
		func_858(*iParam0, ((1f * fLocal_146) * fLocal_148), 1);
		func_872(*iParam0, ((1f * fLocal_146) * fLocal_148), 1);
		func_871(*iParam0);
		if ((iLocal_178 == 0 && iLocal_179 == 0) && iLocal_180 == 0)
		{
			iLocal_91 = 0;
			iLocal_90 = 0;
			iLocal_105 = 0;
			return 1;
		}
	}
	return 0;
}

int func_857(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x8E050
{
	float fVar0;
	if (iParam1 > 0)
	{
		VEHICLE::REQUEST_VEHICLE_RECORDING(iParam1, &cLocal_204);
		if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam1, &cLocal_204))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(*iParam0, false);
					if (bParam4)
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(*iParam0, iParam1, &cLocal_204, 10f, 786603);
					}
					else
					{
						if (iParam1 != iLocal_182 && iParam1 != iLocal_183)
						{
							if (bParam7)
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*iParam0, iParam1, &cLocal_204, 2 | 4, 0, 786603);
							}
							else if (bParam6)
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*iParam0, iParam1, &cLocal_204, 1 | 4, 0, 786603);
							}
							else
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*iParam0, iParam1, &cLocal_204, true);
							}
						}
						else
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*iParam0, iParam1, &cLocal_204, true);
						}
						VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*iParam0, fParam2);
						if (bParam5)
						{
							VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(*iParam0, true);
						}
						return 1;
					}
				}
				else if (VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(*iParam0) == VEHICLE::GET_VEHICLE_RECORDING_ID(iParam1, &cLocal_204))
				{
					fVar0 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(*iParam0);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*iParam0, (fParam2 - fVar0));
					if (!bParam3)
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*iParam0);
						VEHICLE::REQUEST_VEHICLE_RECORDING(iParam1, &cLocal_204);
					}
					if (bParam5)
					{
						VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(*iParam0, true);
					}
					return 1;
				}
				else
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*iParam0);
					ENTITY::FREEZE_ENTITY_POSITION(*iParam0, false);
					if (bParam4)
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(*iParam0, iParam1, &cLocal_204, 10f, 786603);
					}
					else if (iParam1 != iLocal_182 && iParam1 != iLocal_183)
					{
						if (bParam7)
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*iParam0, iParam1, &cLocal_204, 2 | 4, 0, 786603);
						}
						else if (bParam6)
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*iParam0, iParam1, &cLocal_204, 1 | 4, 0, 786603);
						}
						else
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*iParam0, iParam1, &cLocal_204, true);
						}
					}
					else
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*iParam0, iParam1, &cLocal_204, true);
					}
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*iParam0, fParam2);
					if (bParam5)
					{
						VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(*iParam0, true);
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_858(int iParam0, float fParam1, bool bParam2)//Position - 0x8E236
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
		iVar0 = iLocal_177;
		while (iVar0 < 35)
		{
			if (iLocal_168[iVar0] != 99)
			{
				if (iLocal_168[iVar0] == 0)
				{
					if (iLocal_167[iVar0] > 0)
					{
						if (!iLocal_90)
						{
							if (fLocal_145 > (fLocal_137[iVar0] - (7000f * fParam1)))
							{
								if (__LIB_15__::func_896(iLocal_216[iVar0]))
								{
									MISC::SET_BIT(&(iLocal_169[iVar0]), 0);
								}
								else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_216[iVar0]))
								{
									MISC::SET_BIT(&(iLocal_169[iVar0]), 2);
								}
								MISC::CLEAR_BIT(&(iLocal_169[iVar0]), 1);
								iLocal_168[iVar0]++;
								iLocal_179++;
							}
						}
						else
						{
							fVar6 = (fLocal_145 - fLocal_137[iVar0]);
							fVar6 = (fVar6 * fLocal_138[iVar0]);
							if (fVar6 >= 0f)
							{
								if (fVar6 < func_869(iLocal_167[iVar0]))
								{
									if (__LIB_15__::func_896(iLocal_216[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_169[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_216[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_169[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_169[iVar0]), 1);
									iLocal_168[iVar0]++;
									iLocal_179++;
								}
								else
								{
									iLocal_168[iVar0] = 99;
								}
							}
						}
					}
					else
					{
						iLocal_168[iVar0] = 99;
					}
				}
				else if (iLocal_168[iVar0] == 1)
				{
					bVar8 = false;
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_167[iVar0], &cLocal_204);
					if (BitTest(iLocal_169[iVar0], 0))
					{
						STREAMING::REQUEST_MODEL(__LIB_15__::func_909());
						bVar8 = STREAMING::HAS_MODEL_LOADED(__LIB_15__::func_909());
					}
					else if (!bLocal_117 && ((!BitTest(iLocal_169[iVar0], 2) && bVar10) || (BitTest(iLocal_169[iVar0], 2) && bVar11)))
					{
						bVar8 = true;
					}
					else
					{
						STREAMING::REQUEST_MODEL(func_745());
						bVar8 = STREAMING::HAS_MODEL_LOADED(func_745());
					}
					if (bVar8)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_223[iVar0]))
						{
							STREAMING::REQUEST_MODEL(iLocal_216[iVar0]);
							if (STREAMING::HAS_MODEL_LOADED(iLocal_216[iVar0]) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_167[iVar0], &cLocal_204))
							{
								if (fLocal_145 >= (fLocal_137[iVar0] - (fLocal_158 * fParam1)))
								{
									if ((iLocal_104 || bParam2) || (!bLocal_121 && !func_868(Local_190[iVar0 /*3*/], Var5, 5f, fLocal_156)))
									{
										if (bLocal_100)
										{
											func_867(Local_190[iVar0 /*3*/], Var5, fLocal_149);
										}
										iLocal_223[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_216[iVar0], Local_190[iVar0 /*3*/], 0f, false, false, false);
										if (iLocal_216[iVar0] == joaat("polmav"))
										{
											VEHICLE::SET_VEHICLE_LIVERY(iLocal_223[iVar0], 0);
										}
										if (uLocal_113 && !BitTest(iLocal_169[iVar0], 0))
										{
											func_866(iLocal_223[iVar0]);
										}
										if (BitTest(iLocal_169[iVar0], 3))
										{
											ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_223[iVar0], true);
										}
										ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_223[iVar0], Local_190[iVar0 /*3*/], false, false, true);
										ENTITY::SET_ENTITY_QUATERNION(iLocal_223[iVar0], fLocal_133[iVar0], fLocal_134[iVar0], fLocal_135[iVar0], fLocal_136[iVar0]);
										if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_216[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_216[iVar0]))
										{
											VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_223[iVar0], 5f);
										}
										if (!BitTest(iLocal_169[iVar0], 0))
										{
											VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_223[iVar0], true, true, false);
											if (CLOCK::GET_CLOCK_HOURS() > 19 || CLOCK::GET_CLOCK_HOURS() < 7)
											{
												VEHICLE::SET_VEHICLE_LIGHTS(iLocal_223[iVar0], 3);
											}
										}
										ENTITY::FREEZE_ENTITY_POSITION(iLocal_223[iVar0], true);
										STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_216[iVar0]);
										iLocal_179 = (iLocal_179 - 1);
										iLocal_168[iVar0]++;
										bLocal_121 = true;
									}
								}
							}
						}
						else if (!ENTITY::IS_ENTITY_DEAD(iLocal_223[iVar0], false) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_223[iVar0], false))
						{
							ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_223[iVar0], Local_190[iVar0 /*3*/], false, false, true);
							ENTITY::SET_ENTITY_QUATERNION(iLocal_223[iVar0], fLocal_133[iVar0], fLocal_134[iVar0], fLocal_135[iVar0], fLocal_136[iVar0]);
							if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_216[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_216[iVar0]))
							{
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_223[iVar0], 5f);
							}
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_223[iVar0], true);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_216[iVar0]);
							iLocal_179 = (iLocal_179 - 1);
							iLocal_168[iVar0]++;
						}
					}
				}
				else if (iLocal_168[iVar0] == 2)
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_167[iVar0], &cLocal_204);
					if (!BitTest(iLocal_169[iVar0], 1))
					{
						bVar8 = false;
						if (BitTest(iLocal_169[iVar0], 0))
						{
							STREAMING::REQUEST_MODEL(__LIB_15__::func_909());
							bVar8 = STREAMING::HAS_MODEL_LOADED(__LIB_15__::func_909());
							iVar13 = 2;
						}
						else if (!bLocal_117 && ((!BitTest(iLocal_169[iVar0], 2) && bVar10) || (BitTest(iLocal_169[iVar0], 2) && bVar11)))
						{
							bVar8 = true;
							iVar13 = 1;
						}
						else
						{
							STREAMING::REQUEST_MODEL(func_745());
							bVar8 = STREAMING::HAS_MODEL_LOADED(func_745());
							iVar13 = 0;
						}
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_223[iVar0], false))
						{
							if (!bLocal_121 && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_223[iVar0], -1, false))
							{
								if (bVar8)
								{
									if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_223[iVar0], true), Var5) < 10000f || bParam2) || iLocal_104)
									{
										func_864(&(iLocal_223[iVar0]), iVar13, 1);
										MISC::SET_BIT(&(iLocal_169[iVar0]), 1);
									}
								}
							}
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_223[iVar0], false))
					{
						if (fLocal_145 >= fLocal_137[iVar0])
						{
							if (14 > iLocal_172)
							{
								fVar6 = (fLocal_145 - fLocal_137[iVar0]);
								fVar6 = (fVar6 * fLocal_138[iVar0]);
								if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_167[iVar0], &cLocal_204))
								{
									if (fVar6 < VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_167[iVar0], &cLocal_204))
									{
										Var3 = { ENTITY::GET_ENTITY_COORDS(iLocal_223[iVar0], true) };
										Var4 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_167[iVar0], fVar6, &cLocal_204) };
										if (((!func_868(Var3, Var5, 5f, fLocal_156) && func_868(Var4, Var5, 5f, fLocal_156)) && !iLocal_104) && !bParam2)
										{
											if (!BitTest(iLocal_169[iVar0], 1))
											{
												func_864(&(iLocal_223[iVar0]), iVar13, 1);
											}
											iLocal_172++;
											iLocal_168[iVar0]++;
										}
										else if (((!bLocal_121 || BitTest(iLocal_169[iVar0], 1)) || iLocal_104) || bParam2)
										{
											if (func_857(&(iLocal_223[iVar0]), iLocal_167[iVar0], fVar6, 1, 0, 0, iLocal_119, iLocal_118))
											{
												VEHICLE::SET_PLAYBACK_SPEED(iLocal_223[iVar0], (fParam1 * fLocal_138[iVar0]));
												if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_223[iVar0], false))
												{
													if (BitTest(iLocal_169[iVar0], 0))
													{
														VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_223[iVar0], true, true, false);
														VEHICLE::SET_VEHICLE_SIREN(iLocal_223[iVar0], true);
														VEHICLE::SET_VEHICLE_LIGHTS(iLocal_223[iVar0], 2);
														if (!VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_216[iVar0]))
														{
															AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_223[iVar0], true);
														}
													}
												}
												if (!BitTest(iLocal_169[iVar0], 1))
												{
													func_864(&(iLocal_223[iVar0]), iVar13, 1);
												}
												iLocal_172++;
												iLocal_168[iVar0]++;
											}
										}
									}
									else
									{
										if (!BitTest(iLocal_169[iVar0], 1))
										{
											func_864(&(iLocal_223[iVar0]), iVar13, 1);
										}
										iLocal_172++;
										iLocal_168[iVar0]++;
									}
								}
							}
							else
							{
								if (!BitTest(iLocal_169[iVar0], 1))
								{
									func_864(&(iLocal_223[iVar0]), iVar13, 1);
								}
								iLocal_172++;
								iLocal_168[iVar0]++;
							}
						}
					}
					else
					{
						if (!BitTest(iLocal_169[iVar0], 1))
						{
							func_864(&(iLocal_223[iVar0]), iVar13, 1);
						}
						iLocal_172++;
						iLocal_168[iVar0]++;
					}
				}
				else if (iLocal_168[iVar0] == 3)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_223[iVar0], false))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_223[iVar0]))
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_223[iVar0], -1, false);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								if (bVar9)
								{
									if (((!bLocal_94 && !iLocal_91) && !bLocal_110) && (((!iLocal_119 && !iLocal_118) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_223[iVar0])) || func_863(iLocal_223[iVar0])))
									{
										if (ENTITY::DOES_ENTITY_EXIST(iVar2))
										{
											bVar8 = false;
											if (bLocal_112)
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
												else if (MISC::ABSF((fVar7 - ENTITY::GET_ENTITY_SPEED(iLocal_223[iVar0]))) > 15f)
												{
													bVar8 = true;
												}
												else if (!__LIB_15__::func_925(iLocal_223[iVar0], iVar2, 45f))
												{
													bVar8 = true;
												}
												else if (__LIB_15__::func_941(iVar2, iLocal_223[iVar0], 0))
												{
													bVar8 = true;
												}
											}
											if (bVar8)
											{
												func_859(iLocal_223[iVar0]);
												iLocal_168[iVar0]++;
											}
										}
									}
									else
									{
										VEHICLE::SET_PLAYBACK_SPEED(iLocal_223[iVar0], (fParam1 * fLocal_138[iVar0]));
									}
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_223[iVar0]);
							}
						}
						else
						{
							iLocal_168[iVar0]++;
						}
					}
					else
					{
						iLocal_168[iVar0]++;
					}
				}
				else if (iLocal_168[iVar0] == 4)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_223[iVar0], false))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_223[iVar0]))
						{
							iLocal_168[iVar0]++;
						}
						else
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_223[iVar0], -1, false);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								VEHICLE::SET_PLAYBACK_SPEED(iLocal_223[iVar0], (fParam1 * fLocal_138[iVar0]));
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_223[iVar0]);
							}
							if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_167[iVar0], &cLocal_204))
							{
								if (fLocal_145 > (fLocal_137[iVar0] + VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_167[iVar0], &cLocal_204)))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_223[iVar0]);
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_223[iVar0]);
							}
						}
					}
					else
					{
						iLocal_168[iVar0]++;
					}
				}
				else if (iLocal_168[iVar0] == 5)
				{
					if (!iLocal_223[iVar0] == iLocal_227)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_223[iVar0], false))
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_223[iVar0], -1, false);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								iVar14 = TASK::GET_SCRIPT_TASK_STATUS(iVar1, joaat("SCRIPT_TASK_PERFORM_SEQUENCE"));
								if (iVar14 == 7)
								{
									fVar7 = ENTITY::GET_ENTITY_SPEED(iLocal_223[iVar0]);
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
						if (!bLocal_102 && !bLocal_115)
						{
							if (iLocal_167[iVar0] > 0)
							{
								VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_167[iVar0], &cLocal_204);
							}
						}
						if (!bLocal_92)
						{
							if (!bLocal_120)
							{
								__LIB_15__::func_908(iLocal_223[iVar0]);
							}
						}
						else if (ENTITY::DOES_ENTITY_EXIST(iLocal_223[iVar0]))
						{
							VEHICLE::DELETE_VEHICLE(&(iLocal_223[iVar0]));
						}
					}
					iLocal_172 = (iLocal_172 - 1);
					iLocal_168[iVar0] = 99;
				}
				if (!bVar12)
				{
					iLocal_177 = iVar0;
					bVar12 = true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		func_737();
	}
}

void func_859(int iParam0)//Position - 0x8EE14
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		func_739(iParam0);
		VEHICLE::SET_PLAYBACK_TO_USE_AI(iParam0, 786603);
	}
}

int func_863(int iParam0)//Position - 0x8EF77
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (bLocal_116)
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

int func_864(var uParam0, int iParam1, bool bParam2)//Position - 0x8EFD5
{
	int iVar0;
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0, false))
	{
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(*uParam0, -1, false))
		{
			if (iParam1 == 2)
			{
				iVar0 = PED::CREATE_PED_INSIDE_VEHICLE(*uParam0, 6, __LIB_15__::func_909(), -1, false, false);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, iLocal_213);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_15__::func_909());
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
				iVar0 = PED::CREATE_PED_INSIDE_VEHICLE(*uParam0, 4, func_745(), -1, false, false);
				if (bLocal_122)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_745());
				}
			}
			if (bParam2)
			{
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iVar0, true);
				PED::SET_PED_SUFFERS_CRITICAL_HITS(iVar0, false);
				PED::SET_PED_CONFIG_FLAG(iVar0, 32, false);
			}
			if (bLocal_123)
			{
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 8192, true);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 65536, true);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 2, false);
				VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(*uParam0, true);
			}
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
			__LIB_15__::func_895(iVar0);
			bLocal_121 = true;
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_866(int iParam0)//Position - 0x8F0E3
{
	int iVar0;
	int iVar1;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 12);
	if (iLocal_218 >= -1 && iLocal_219 >= -1)
	{
		while (iVar0 == iLocal_218 || iVar0 == iLocal_219)
		{
			iVar0++;
		}
	}
	else if (iLocal_218 >= -1)
	{
		if (iVar0 == iLocal_218)
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

void func_867(struct<3> Param0, struct<3> Param1, float fParam2)//Position - 0x8F25C
{
	bool bVar0;
	int iVar1;
	bVar0 = true;
	if (!bLocal_103)
	{
		if (!func_868(Param0, Param1, fParam2, 200f))
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

int func_868(struct<3> Param0, struct<3> Param1, float fParam2, float fParam3)//Position - 0x8F2CF
{
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		if (!bLocal_103)
		{
			if (!iLocal_90)
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

float func_869(int iParam0)//Position - 0x8F316
{
	float fVar0;
	VEHICLE::REQUEST_VEHICLE_RECORDING(iParam0, &cLocal_204);
	while (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam0, &cLocal_204))
	{
		SYSTEM::WAIT(0);
	}
	fVar0 = VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iParam0, &cLocal_204);
	VEHICLE::REMOVE_VEHICLE_RECORDING(iParam0, &cLocal_204);
	return fVar0;
}

void func_871(int iParam0)//Position - 0x8F3CC
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
		iVar0 = iLocal_176;
		while (iVar0 < 17)
		{
			switch (iLocal_170[iVar0])
			{
				case 0:
					if (!iLocal_215[iVar0] == 0)
					{
						if (ENTITY::IS_ENTITY_AT_COORD(iParam0, Local_189[iVar0 /*3*/], fLocal_143, fLocal_143, fLocal_143, false, true, 0))
						{
							iLocal_178++;
							iLocal_170[iVar0]++;
						}
					}
					else
					{
						iLocal_170[iVar0] = 99;
					}
					break;
				case 1:
					if (16 > iLocal_173)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_222[iVar0]))
						{
							STREAMING::REQUEST_MODEL(iLocal_215[iVar0]);
							if (STREAMING::HAS_MODEL_LOADED(iLocal_215[iVar0]))
							{
								if ((iLocal_90 || iLocal_104) || (!bLocal_121 && !func_868(Local_189[iVar0 /*3*/], Var1, 5f, fLocal_156)))
								{
									if (bLocal_100)
									{
										func_867(Local_189[iVar0 /*3*/], Var1, fLocal_149);
									}
									iLocal_222[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_215[iVar0], Local_189[iVar0 /*3*/], 0f, false, false, false);
									if (iLocal_215[iVar0] == joaat("polmav"))
									{
										VEHICLE::SET_VEHICLE_LIVERY(iLocal_222[iVar0], 0);
									}
									ENTITY::SET_ENTITY_QUATERNION(iLocal_222[iVar0], fLocal_139[iVar0], fLocal_140[iVar0], fLocal_141[iVar0], fLocal_142[iVar0]);
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_215[iVar0]);
									if (VEHICLE::IS_VEHICLE_MODEL(iLocal_222[iVar0], __LIB_15__::func_910()))
									{
										VEHICLE::SET_VEHICLE_SIREN(iLocal_222[iVar0], true);
										if (!VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_215[iVar0]))
										{
											AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_222[iVar0], true);
										}
									}
									if (VEHICLE::IS_VEHICLE_MODEL(iLocal_222[iVar0], __LIB_15__::func_911()))
									{
										VEHICLE::SET_VEHICLE_COLOURS(iLocal_222[iVar0], 0, 0);
									}
									ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_222[iVar0], true);
									iLocal_178 = (iLocal_178 - 1);
									iLocal_173++;
									iLocal_170[iVar0]++;
									bLocal_121 = true;
								}
							}
						}
						else
						{
							iLocal_178 = (iLocal_178 - 1);
							iLocal_173++;
							iLocal_170[iVar0]++;
						}
					}
					break;
				case 2:
					if (!bVar3)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_222[iVar0], false))
						{
							Var2 = { ENTITY::GET_ENTITY_COORDS(iLocal_222[iVar0], true) };
						}
						if (fLocal_157 == 0f || SYSTEM::VDIST2(Var1, Var2) < (fLocal_157 * fLocal_157))
						{
							if (!__LIB_15__::func_941(iLocal_222[iVar0], iParam0, 0))
							{
								if (!bLocal_92)
								{
									__LIB_15__::func_908(iLocal_222[iVar0]);
								}
								else
								{
									VEHICLE::DELETE_VEHICLE(&(iLocal_222[iVar0]));
								}
								iLocal_173 = (iLocal_173 - 1);
								iLocal_170[iVar0] = 99;
								bVar3 = true;
							}
						}
					}
					break;
			}
			if (iLocal_170[iVar0] != 99)
			{
				if (!bVar4)
				{
					iLocal_176 = iVar0;
					bVar4 = true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		func_740();
	}
}

void func_872(int iParam0, float fParam1, int iParam2)//Position - 0x8F6C4
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
			fLocal_145 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iParam0);
		}
		iVar16 = -1;
		bVar17 = false;
		bVar18 = false;
		iVar0 = iLocal_175;
		while (iVar0 < 36 && !bVar17)
		{
			if (iLocal_165[iVar0] != 99)
			{
				if (iLocal_165[iVar0] == 0)
				{
					if (iLocal_164[iVar0] > 0 && iLocal_214[iVar0] != 0)
					{
						if (!iLocal_90)
						{
							if (fLocal_145 < (fLocal_128[iVar0] + 20000f))
							{
								if (fLocal_145 >= (fLocal_128[iVar0] - (7000f * fParam1)))
								{
									if (__LIB_15__::func_896(iLocal_214[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_166[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_214[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_166[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_166[iVar0]), 1);
									iLocal_180++;
									iLocal_165[iVar0]++;
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
								func_874(iVar0, 1090519040);
							}
						}
						else
						{
							fVar9 = (fLocal_145 - fLocal_128[iVar0]);
							if (fVar9 >= 0f)
							{
								if (fVar9 < func_869(iLocal_164[iVar0]))
								{
									if (__LIB_15__::func_896(iLocal_214[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_166[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_214[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_166[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_166[iVar0]), 1);
									iLocal_180++;
									iLocal_165[iVar0]++;
								}
								else
								{
									func_874(iVar0, 1090519040);
								}
							}
						}
					}
					else
					{
						func_874(iVar0, 1090519040);
					}
				}
				else if (iLocal_165[iVar0] == 1)
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_164[iVar0], &cLocal_204);
					bVar11 = false;
					if (BitTest(iLocal_166[iVar0], 0))
					{
						STREAMING::REQUEST_MODEL(__LIB_15__::func_909());
						if (STREAMING::HAS_MODEL_LOADED(__LIB_15__::func_909()))
						{
							bVar11 = true;
						}
					}
					else if (!bLocal_117 && ((!BitTest(iLocal_166[iVar0], 2) && bVar13) || (BitTest(iLocal_166[iVar0], 2) && bVar14)))
					{
						bVar11 = true;
					}
					else
					{
						STREAMING::REQUEST_MODEL(func_745());
						bVar11 = STREAMING::HAS_MODEL_LOADED(func_745());
					}
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_220[iVar0]))
					{
						STREAMING::REQUEST_MODEL(iLocal_214[iVar0]);
						if ((STREAMING::HAS_MODEL_LOADED(iLocal_214[iVar0]) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_164[iVar0], &cLocal_204)) && bVar11)
						{
							if (fLocal_145 >= (fLocal_128[iVar0] - (fLocal_158 * fParam1)))
							{
								if ((iLocal_104 || iParam2) || (!bLocal_121 && !func_868(Local_188[iVar0 /*3*/], Var8, 5f, fLocal_156)))
								{
									if (bLocal_100)
									{
										func_867(Local_188[iVar0 /*3*/], Var8, fLocal_149);
									}
									iLocal_220[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_214[iVar0], Local_188[iVar0 /*3*/], 0f, false, false, false);
									if (iLocal_214[iVar0] == joaat("polmav"))
									{
										VEHICLE::SET_VEHICLE_LIVERY(iLocal_220[iVar0], 0);
									}
									if (uLocal_113 && !BitTest(iLocal_166[iVar0], 0))
									{
										func_866(iLocal_220[iVar0]);
									}
									ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_220[iVar0], Local_188[iVar0 /*3*/], false, false, true);
									ENTITY::SET_ENTITY_QUATERNION(iLocal_220[iVar0], fLocal_124[iVar0], fLocal_125[iVar0], fLocal_126[iVar0], fLocal_127[iVar0]);
									if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_214[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_214[iVar0]))
									{
										VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_220[iVar0], 5f);
									}
									if (BitTest(iLocal_166[iVar0], 3))
									{
										ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_220[iVar0], true);
									}
									if (!BitTest(iLocal_166[iVar0], 0))
									{
										VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_220[iVar0], true, true, false);
										if (CLOCK::GET_CLOCK_HOURS() > 19 || CLOCK::GET_CLOCK_HOURS() < 7)
										{
											VEHICLE::SET_VEHICLE_LIGHTS(iLocal_220[iVar0], 3);
										}
									}
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_220[iVar0], true);
									ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_220[iVar0], true);
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_214[iVar0]);
									iLocal_180 = (iLocal_180 - 1);
									iLocal_165[iVar0]++;
									bLocal_121 = true;
								}
								else if (fLocal_145 > fLocal_128[iVar0])
								{
									iLocal_180 = (iLocal_180 - 1);
									func_874(iVar0, 1090519040);
								}
							}
						}
					}
				}
				else if (iLocal_165[iVar0] == 2)
				{
					bVar11 = false;
					if (((iVar3 < 8 && (iVar0 > iLocal_186 || iLocal_186 == 0)) || iLocal_104) || iParam2)
					{
						if (!BitTest(iLocal_166[iVar0], 1))
						{
							if (BitTest(iLocal_166[iVar0], 0))
							{
								STREAMING::REQUEST_MODEL(__LIB_15__::func_909());
								bVar11 = STREAMING::HAS_MODEL_LOADED(__LIB_15__::func_909());
								iVar15 = 2;
							}
							else if (!bLocal_117 && ((!BitTest(iLocal_166[iVar0], 2) && bVar13) || (BitTest(iLocal_166[iVar0], 2) && bVar14)))
							{
								bVar11 = true;
								iVar15 = 1;
							}
							else
							{
								STREAMING::REQUEST_MODEL(func_745());
								bVar11 = STREAMING::HAS_MODEL_LOADED(func_745());
								iVar15 = 0;
							}
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_220[iVar0], false))
							{
								if (!bLocal_121 && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_220[iVar0], -1, false))
								{
									if (bVar11)
									{
										if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_220[iVar0], true), Var8) < 10000f || iParam2) || iLocal_104)
										{
											func_864(&(iLocal_220[iVar0]), iVar15, 0);
											MISC::SET_BIT(&(iLocal_166[iVar0]), 1);
										}
									}
								}
							}
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_220[iVar0], false))
						{
							VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_164[iVar0], &cLocal_204);
							if (fLocal_145 >= fLocal_128[iVar0])
							{
								if (28 > iLocal_171)
								{
									fVar9 = (fLocal_145 - fLocal_128[iVar0]);
									if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_164[iVar0], &cLocal_204))
									{
										if (fVar9 < VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_164[iVar0], &cLocal_204))
										{
											Var6 = { ENTITY::GET_ENTITY_COORDS(iLocal_220[iVar0], true) };
											Var7 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_164[iVar0], fVar9, &cLocal_204) };
											if (!func_868(Var6, Var8, 5f, fLocal_156) && func_868(Var7, Var8, 5f, fLocal_156))
											{
												if (!BitTest(iLocal_166[iVar0], 1))
												{
													func_864(&(iLocal_220[iVar0]), iVar15, 0);
												}
												func_874(iVar0, 1090519040);
											}
											else if (((!bLocal_121 || BitTest(iLocal_166[iVar0], 1)) || iLocal_104) || iParam2)
											{
												if (func_857(&(iLocal_220[iVar0]), iLocal_164[iVar0], fVar9, 1, 0, 0, 1, iLocal_118))
												{
													if (!BitTest(iLocal_166[iVar0], 1))
													{
														func_864(&(iLocal_220[iVar0]), iVar15, 0);
													}
													ENTITY::SET_ENTITY_COLLISION(iLocal_220[iVar0], true, false);
													VEHICLE::SET_PLAYBACK_SPEED(iLocal_220[iVar0], fParam1);
													iLocal_171++;
													iLocal_165[iVar0]++;
												}
											}
										}
										else
										{
											if (!BitTest(iLocal_166[iVar0], 1))
											{
												func_864(&(iLocal_220[iVar0]), iVar15, 0);
											}
											func_874(iVar0, 1090519040);
										}
									}
									else if (fVar9 > VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_164[iVar0], &cLocal_204))
									{
										if (!BitTest(iLocal_166[iVar0], 1))
										{
											func_864(&(iLocal_220[iVar0]), iVar15, 0);
										}
										func_874(iVar0, 1090519040);
									}
								}
								else
								{
									if (!BitTest(iLocal_166[iVar0], 1))
									{
										func_864(&(iLocal_220[iVar0]), iVar15, 0);
									}
									func_874(iVar0, 1090519040);
								}
							}
							else if (iLocal_101 && !bLocal_109)
							{
								if (!BitTest(iLocal_166[iVar0], 1))
								{
									func_864(&(iLocal_220[iVar0]), iVar15, 0);
								}
								func_874(iVar0, 1090519040);
							}
						}
						else
						{
							if (!BitTest(iLocal_166[iVar0], 1))
							{
								func_864(&(iLocal_220[iVar0]), iVar15, 0);
							}
							func_874(iVar0, 1090519040);
						}
						iVar3++;
						iLocal_186 = iVar0;
					}
				}
				else if (iLocal_165[iVar0] == 3)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_220[iVar0], false))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_220[iVar0]))
						{
							iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_220[iVar0], -1, false);
							if (!PED::IS_PED_INJURED(iVar4))
							{
								if (bVar12)
								{
									bVar18 = false;
									if (!bLocal_99)
									{
										if ((!bLocal_94 && !iLocal_91) && func_863(iLocal_220[iVar0]))
										{
											if (iVar2 < 3 && (iVar0 > iLocal_185 || iLocal_185 == 0))
											{
												if (!ENTITY::IS_ENTITY_DEAD(iVar5, false))
												{
													bVar11 = false;
													if (!__LIB_15__::func_926(iLocal_220[iVar0], iVar5) || __LIB_15__::func_941(iVar5, iLocal_220[iVar0], 0))
													{
														bVar18 = true;
													}
												}
												iLocal_185 = iVar0;
												iVar2++;
											}
										}
										else if (((!bLocal_114 && !BitTest(iLocal_166[iVar0], 4)) && iVar2 < 3) && (iVar0 > iLocal_185 || iLocal_185 == 0))
										{
											Var19 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam0, ENTITY::GET_ENTITY_COORDS(iLocal_220[iVar0], true)) };
											if (Var19.f_1 < 0f)
											{
												if (MISC::ABSF(Var19.f_1) > MISC::ABSF(Var19.f_0))
												{
													bVar18 = true;
												}
											}
											iVar2++;
											iLocal_185 = iVar0;
										}
									}
									if (bVar18)
									{
										func_859(iLocal_220[iVar0]);
										iLocal_165[iVar0]++;
									}
									else
									{
										VEHICLE::SET_PLAYBACK_SPEED(iLocal_220[iVar0], fParam1);
									}
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_220[iVar0]);
							}
						}
						else
						{
							iLocal_165[iVar0]++;
						}
					}
					else
					{
						iLocal_165[iVar0]++;
					}
				}
				else if (iLocal_165[iVar0] == 4)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_220[iVar0], false))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_220[iVar0]))
						{
							iLocal_165[iVar0]++;
						}
						else
						{
							iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_220[iVar0], -1, false);
							if (!PED::IS_PED_INJURED(iVar4))
							{
								VEHICLE::SET_PLAYBACK_SPEED(iLocal_220[iVar0], fParam1);
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_220[iVar0]);
							}
							if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_164[iVar0], &cLocal_204))
							{
								if (fLocal_145 > (fLocal_128[iVar0] + VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_164[iVar0], &cLocal_204)))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_220[iVar0]);
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_220[iVar0]);
							}
						}
					}
					else
					{
						iLocal_165[iVar0]++;
					}
				}
				else if (iLocal_165[iVar0] == 5)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_220[iVar0], false))
					{
						fVar10 = ENTITY::GET_ENTITY_SPEED(iLocal_220[iVar0]);
					}
					iLocal_171 = (iLocal_171 - 1);
					func_874(iVar0, fVar10);
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
			iLocal_175 = iVar16;
		}
		if (iVar2 < 3)
		{
			iLocal_185 = 0;
		}
		if (iVar3 < 8)
		{
			iLocal_186 = 0;
		}
	}
	else
	{
		func_741();
	}
}

void func_874(int iParam0, float fParam1)//Position - 0x90261
{
	int iVar0;
	if (!iLocal_214[iParam0] == 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_214[iParam0]);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_220[iParam0], false))
	{
		ENTITY::SET_ENTITY_COLLISION(iLocal_220[iParam0], true, false);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_220[iParam0], false);
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_220[iParam0], -1, false);
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
			TASK::TASK_VEHICLE_MISSION(iVar0, iLocal_220[iParam0], 0, 1, fParam1, 786603, 5f, 5f, true);
			PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 8192, true);
			if (bLocal_123)
			{
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 65536, true);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 2, false);
			}
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 6, false);
			TASK::SET_DRIVE_TASK_CRUISE_SPEED(iVar0, fParam1);
		}
	}
	if (!bLocal_92)
	{
		if (!bLocal_120)
		{
			__LIB_15__::func_895(iVar0);
			__LIB_15__::func_908(iLocal_220[iParam0]);
		}
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			PED::DELETE_PED(&iVar0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_220[iParam0]))
		{
			VEHICLE::DELETE_VEHICLE(&(iLocal_220[iParam0]));
		}
	}
	if (!bLocal_102 && !bLocal_115)
	{
		if (iLocal_164[iParam0] > 0)
		{
			VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_164[iParam0], &cLocal_204);
		}
	}
	iLocal_165[iParam0] = 99;
}

void func_875(int iParam0, float fParam1, float fParam2)//Position - 0x903BC
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
			func_867(Var1, Var4, fVar5);
		}
	}
}

void func_876(int iParam0, float fParam1)//Position - 0x9043F
{
	if (!bLocal_103)
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

void func_877(int iParam0, float fParam1)//Position - 0x9048D
{
	if (!bLocal_103)
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

void func_878(int iParam0, float fParam1)//Position - 0x904DB
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
	{
		fVar1 = (fLocal_159 + 2000f);
		fVar2 = (fLocal_160 + 2000f);
		bVar4 = false;
		if (fVar1 < (fParam1 + 25000f))
		{
			iVar0 = VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iParam0);
			if (fVar1 <= VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID(iVar0))
			{
				if (iLocal_181 == 0)
				{
					Local_200 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fLocal_159) };
					iLocal_181++;
				}
				else if (iLocal_181 == 1)
				{
					Local_201 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fVar1) };
					iLocal_181++;
				}
				else if (!bLocal_121)
				{
					if (Local_200.f_0 > Local_201.f_0)
					{
						fVar3 = Local_200.f_0;
						Local_200.f_0 = Local_201.f_0;
						Local_201.f_0 = fVar3;
					}
					if (Local_200.f_1 > Local_201.f_1)
					{
						fVar3 = Local_200.f_1;
						Local_200.f_1 = Local_201.f_1;
						Local_201.f_1 = fVar3;
					}
					if (Local_200.f_2 > Local_201.f_2)
					{
						fVar3 = Local_200.f_2;
						Local_200.f_2 = Local_201.f_2;
						Local_201.f_2 = fVar3;
					}
					Local_200 = { Local_200 - Vector(fLocal_163, fLocal_163, fLocal_163) };
					Local_201 = { Local_201 + Vector(fLocal_163, fLocal_163, fLocal_163) };
					PATHFIND::SET_ROADS_IN_AREA(Local_200, Local_201, false, false);
					fLocal_159 = fVar1;
					iLocal_181 = 0;
				}
			}
		}
		if (fVar2 < (fParam1 - 8000f))
		{
			iVar0 = VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iParam0);
			if (iLocal_184 == 0)
			{
				Local_202 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fLocal_160) };
				iLocal_184++;
			}
			else if (iLocal_184 == 1)
			{
				Local_203 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fVar2) };
				iLocal_184++;
			}
			else if (!bLocal_121 && !bVar4)
			{
				if (Local_202.f_0 > Local_203.f_0)
				{
					fVar3 = Local_202.f_0;
					Local_202.f_0 = Local_203.f_0;
					Local_203.f_0 = fVar3;
				}
				if (Local_202.f_1 > Local_203.f_1)
				{
					fVar3 = Local_202.f_1;
					Local_202.f_1 = Local_203.f_1;
					Local_203.f_1 = fVar3;
				}
				if (Local_202.f_2 > Local_203.f_2)
				{
					fVar3 = Local_202.f_2;
					Local_202.f_2 = Local_203.f_2;
					Local_203.f_2 = fVar3;
				}
				Local_202 = { Local_202 - Vector(fLocal_163, fLocal_163, fLocal_163) };
				Local_203 = { Local_203 + Vector(fLocal_163, fLocal_163, fLocal_163) };
				PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Local_202, Local_203, 1);
				fLocal_160 = fVar2;
				iLocal_184 = 0;
			}
		}
	}
}

void func_880()//Position - 0x907CC
{
	iLocal_104 = 1;
}

void func_881(int iParam0, float fParam1)//Position - 0x907D7
{
	int iVar0;
	float fVar1;
	bool bVar2;
	struct<3> Var3;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
		{
			func_880();
			func_857(&iParam0, iLocal_174, fParam1, 1, 0, 1, 0, 0);
			fLocal_145 = fParam1;
			iVar0 = 0;
			while (iVar0 < 35)
			{
				if (iLocal_168[iVar0] > 2 && iLocal_168[iVar0] < 6)
				{
					bVar2 = false;
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_223[iVar0]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_223[iVar0], false))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_223[iVar0]))
							{
								fVar1 = (fParam1 - fLocal_137[iVar0]);
								fVar1 = (fVar1 * fLocal_138[iVar0]);
								if (fVar1 >= 0f)
								{
									if (fVar1 < func_869(iLocal_167[iVar0]))
									{
										func_857(&(iLocal_223[iVar0]), iLocal_167[iVar0], fVar1, 1, 0, 1, iLocal_119, iLocal_118);
									}
									else
									{
										bVar2 = true;
									}
								}
								else
								{
									bVar2 = true;
								}
							}
							else
							{
								bVar2 = true;
							}
						}
						else
						{
							bVar2 = true;
						}
					}
					else
					{
						bVar2 = true;
					}
					if (bVar2)
					{
						iLocal_168[iVar0] = 99;
						iLocal_172 = (iLocal_172 - 1);
					}
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < 36)
			{
				if (iLocal_165[iVar0] > 2 && iLocal_165[iVar0] < 6)
				{
					bVar2 = false;
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_220[iVar0]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_220[iVar0], false))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_220[iVar0]))
							{
								fVar1 = (fParam1 - fLocal_128[iVar0]);
								if (fVar1 >= 0f)
								{
									if (fVar1 < func_869(iLocal_164[iVar0]))
									{
										func_857(&(iLocal_220[iVar0]), iLocal_164[iVar0], fVar1, 1, 0, 1, 1, iLocal_118);
									}
									else
									{
										bVar2 = true;
									}
								}
								else
								{
									bVar2 = true;
								}
							}
							else
							{
								bVar2 = true;
							}
						}
						else
						{
							bVar2 = true;
						}
					}
					else
					{
						bVar2 = true;
					}
					if (bVar2)
					{
						iLocal_165[iVar0] = 99;
						iLocal_171 = (iLocal_171 - 1);
					}
				}
				iVar0++;
			}
			iLocal_175 = 0;
			iLocal_177 = 0;
			iVar0 = 0;
			while (iVar0 < 17)
			{
				if (iLocal_170[iVar0] > 2)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_222[iVar0]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_222[iVar0], false))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_222[iVar0], true, false);
							iLocal_173++;
							iLocal_170[iVar0] = 2;
						}
					}
					else
					{
						iLocal_170[iVar0] = 0;
					}
				}
				iVar0++;
			}
			iLocal_176 = 0;
			iLocal_181 = 0;
			iLocal_184 = 0;
			fLocal_160 = fParam1;
			fLocal_159 = fParam1;
			Var3 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
			Local_192 = { Var3 - Vector(100f, 100f, 100f) };
			Local_193 = { Var3 + Vector(100f, 100f, 100f) };
			PATHFIND::SET_ROADS_IN_AREA(Local_192, Local_193, false, false);
		}
	}
}

void func_882(char* sParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x90A86
{
	struct<3> Var0;
	StringCopy(&cLocal_204, sParam0, 64);
	bLocal_100 = true;
	iLocal_105 = 0;
	iLocal_171 = 0;
	iLocal_172 = 0;
	iLocal_173 = 0;
	iLocal_174 = iParam1;
	iLocal_175 = 0;
	iLocal_176 = 0;
	iLocal_177 = 0;
	iLocal_181 = 0;
	iLocal_184 = 0;
	iLocal_182 = -1;
	iLocal_183 = -1;
	iLocal_185 = 0;
	iLocal_186 = 0;
	fLocal_159 = 0f;
	fLocal_160 = 0f;
	fLocal_145 = 0f;
	iLocal_106 = 0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		Local_192.f_0 = (Var0.f_0 - 100f);
		Local_192.f_1 = (Var0.f_1 - 100f);
		Local_192.f_2 = (Var0.f_2 - 100f);
		Local_193.f_0 = (Var0.f_0 + 100f);
		Local_193.f_1 = (Var0.f_1 + 100f);
		Local_193.f_2 = (Var0.f_2 + 100f);
		PATHFIND::SET_ROADS_IN_AREA(Local_192, Local_193, false, false);
		if (bParam2)
		{
			MISC::CLEAR_AREA_OF_VEHICLES(Var0, 500f, false, false, false, false, false, false, 0);
		}
	}
	PED::ADD_RELATIONSHIP_GROUP("rgh_traffic", &iLocal_213);
	__LIB_15__::func_907();
	if (bParam3)
	{
		__LIB_14__::func_804(1);
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), false);
		PED::SET_CREATE_RANDOM_COPS(false);
	}
	func_732();
}

void func_883()//Position - 0x90BAA
{
	func_885(1);
	func_884();
}

void func_884()//Position - 0x90BBB
{
	Local_188[4 /*3*/] = { -33.8633f, -499.4361f, 32.4682f };
	fLocal_124[4] = -0.0134f;
	fLocal_125[4] = -0.0135f;
	fLocal_126[4] = 0.7107f;
	fLocal_127[4] = 0.7033f;
	iLocal_164[4] = 25;
	fLocal_128[4] = 0f;
	iLocal_214[4] = joaat("intruder");
	Local_188[5 /*3*/] = { -782.225f, -280.0836f, 36.5154f };
	fLocal_124[5] = -0.0062f;
	fLocal_125[5] = 0.0047f;
	fLocal_126[5] = 0.1901f;
	fLocal_127[5] = 0.9817f;
	iLocal_164[5] = 28;
	fLocal_128[5] = 5f;
	iLocal_214[5] = joaat("intruder");
	Local_188[6 /*3*/] = { -780.7571f, -281.1153f, 36.4944f };
	fLocal_124[6] = -0.0074f;
	fLocal_125[6] = 0.0167f;
	fLocal_126[6] = 0.1845f;
	fLocal_127[6] = 0.9827f;
	iLocal_164[6] = 29;
	fLocal_128[6] = 7000f;
	iLocal_214[6] = joaat("intruder");
	Local_188[7 /*3*/] = { -792.6519f, -285.0189f, 36.6133f };
	fLocal_124[7] = 0.0236f;
	fLocal_125[7] = 0.0063f;
	fLocal_126[7] = 0.9975f;
	fLocal_127[7] = -0.0664f;
	iLocal_164[7] = 2;
	fLocal_128[7] = 7458f;
	iLocal_214[7] = joaat("futo");
	Local_188[8 /*3*/] = { -807.5777f, -268.1831f, 36.4f };
	fLocal_124[8] = 0.0231f;
	fLocal_125[8] = -0.0174f;
	fLocal_126[8] = 0.9862f;
	fLocal_127[8] = -0.1629f;
	iLocal_164[8] = 3;
	fLocal_128[8] = 7722f;
	iLocal_214[8] = joaat("intruder");
	Local_188[9 /*3*/] = { -804.7911f, -324.1086f, 36.6377f };
	fLocal_124[9] = 0.0045f;
	fLocal_125[9] = -0.0154f;
	fLocal_126[9] = 0.8405f;
	fLocal_127[9] = -0.5416f;
	iLocal_164[9] = 8;
	fLocal_128[9] = 9000f;
	iLocal_214[9] = joaat("intruder");
	if (!Global_96863)
	{
		Local_188[10 /*3*/] = { -761.9318f, -336.713f, 35.7959f };
		fLocal_124[10] = 0.003f;
		fLocal_125[10] = -0.017f;
		fLocal_126[10] = 0.8328f;
		fLocal_127[10] = -0.5533f;
		iLocal_164[10] = 10;
		fLocal_128[10] = 9000f;
		iLocal_214[10] = joaat("intruder");
	}
	Local_188[11 /*3*/] = { -743.8067f, -349.9666f, 35.1022f };
	fLocal_124[11] = -0.0101f;
	fLocal_125[11] = -0.0319f;
	fLocal_126[11] = 0.8296f;
	fLocal_127[11] = -0.5573f;
	iLocal_164[11] = 12;
	fLocal_128[11] = 9000f;
	iLocal_214[11] = joaat("intruder");
	Local_188[12 /*3*/] = { -808.8842f, -298.8781f, 36.6708f };
	fLocal_124[12] = 0.0049f;
	fLocal_125[12] = 0.0272f;
	fLocal_126[12] = 0.5848f;
	fLocal_127[12] = 0.8107f;
	iLocal_164[12] = 4;
	fLocal_128[12] = 9240f;
	iLocal_214[12] = joaat("futo");
	Local_188[13 /*3*/] = { -658.5707f, -365.369f, 34.3948f };
	fLocal_124[13] = -0.0044f;
	fLocal_125[13] = -0.0145f;
	fLocal_126[13] = 0.5708f;
	fLocal_127[13] = 0.821f;
	iLocal_164[13] = 45;
	fLocal_128[13] = 11000f;
	iLocal_214[13] = joaat("futo");
	Local_188[14 /*3*/] = { -700.582f, -343.4963f, 34.2747f };
	fLocal_124[14] = -0.007f;
	fLocal_125[14] = 0.0146f;
	fLocal_126[14] = 0.583f;
	fLocal_127[14] = 0.8123f;
	iLocal_164[14] = 31;
	fLocal_128[14] = 11000f;
	iLocal_214[14] = joaat("intruder");
	Local_188[15 /*3*/] = { -742.2833f, -333.4205f, 35.5649f };
	fLocal_124[15] = 0.0118f;
	fLocal_125[15] = -0.0022f;
	fLocal_126[15] = 0.5698f;
	fLocal_127[15] = 0.8217f;
	iLocal_164[15] = 30;
	fLocal_128[15] = 13000f;
	iLocal_214[15] = joaat("intruder");
	if (Global_96862 == 0)
	{
		Local_188[16 /*3*/] = { -652.4525f, -309.8684f, 34.8913f };
		fLocal_124[16] = 0.0048f;
		fLocal_125[16] = -0.0153f;
		fLocal_126[16] = 0.9671f;
		fLocal_127[16] = -0.2538f;
		iLocal_164[16] = 57;
		fLocal_128[16] = 14500f;
		iLocal_214[16] = joaat("surfer");
	}
	Local_188[17 /*3*/] = { -629.4591f, -419.8522f, 34.3522f };
	fLocal_124[17] = -0.0038f;
	fLocal_125[17] = -0.0006f;
	fLocal_126[17] = 0.1536f;
	fLocal_127[17] = 0.9881f;
	iLocal_164[17] = 56;
	fLocal_128[17] = 17000f;
	iLocal_214[17] = joaat("washington");
	Local_188[18 /*3*/] = { -646.1561f, -330.1735f, 34.4512f };
	fLocal_124[18] = 0.0023f;
	fLocal_125[18] = -0.0063f;
	fLocal_126[18] = 0.972f;
	fLocal_127[18] = -0.2347f;
	iLocal_164[18] = 6;
	fLocal_128[18] = 17000f;
	iLocal_214[18] = joaat("buffalo");
	Local_188[19 /*3*/] = { -645.9526f, -365.6587f, 34.2968f };
	fLocal_124[19] = 0.0087f;
	fLocal_125[19] = -0.0028f;
	fLocal_126[19] = 0.6804f;
	fLocal_127[19] = 0.7328f;
	iLocal_164[19] = 11;
	fLocal_128[19] = 17556f;
	iLocal_214[19] = joaat("intruder");
	Local_188[20 /*3*/] = { -533.9698f, -366.4778f, 34.7457f };
	fLocal_124[20] = 0.0024f;
	fLocal_125[20] = -0.01f;
	fLocal_126[20] = 0.6975f;
	fLocal_127[20] = 0.7166f;
	iLocal_164[20] = 35;
	fLocal_128[20] = 18000f;
	iLocal_214[20] = joaat("intruder");
	Local_188[21 /*3*/] = { -537.3636f, -339.162f, 34.6386f };
	fLocal_124[21] = -0.0126f;
	fLocal_125[21] = -0.0109f;
	fLocal_126[21] = 0.9881f;
	fLocal_127[21] = -0.1527f;
	iLocal_164[21] = 38;
	fLocal_128[21] = 18000f;
	iLocal_214[21] = joaat("futo");
	if (Global_96862 == 0)
	{
		Local_188[22 /*3*/] = { -583.7382f, -370.7444f, 34.7169f };
		fLocal_124[22] = 0.0012f;
		fLocal_125[22] = -0.0106f;
		fLocal_126[22] = 0.7034f;
		fLocal_127[22] = 0.7108f;
		iLocal_164[22] = 5;
		fLocal_128[22] = 18000f;
		iLocal_214[22] = joaat("bobcatxl");
	}
	Local_188[24 /*3*/] = { -519.8954f, -365.4402f, 34.6054f };
	fLocal_124[24] = -0.0167f;
	fLocal_125[24] = -0.007f;
	fLocal_126[24] = 0.7061f;
	fLocal_127[24] = 0.7079f;
	iLocal_164[24] = 14;
	fLocal_128[24] = 22704f;
	iLocal_214[24] = joaat("intruder");
	Local_188[25 /*3*/] = { -536.8012f, -381.7743f, 34.5752f };
	fLocal_124[25] = 0.0049f;
	fLocal_125[25] = 0.0087f;
	fLocal_126[25] = -0.7044f;
	fLocal_127[25] = 0.7098f;
	iLocal_164[25] = 40;
	fLocal_128[25] = 25000f;
	iLocal_214[25] = joaat("futo");
	Local_188[26 /*3*/] = { -326.7438f, -373.6238f, 29.595f };
	fLocal_124[26] = -0.0009f;
	fLocal_125[26] = -0.0062f;
	fLocal_126[26] = 0.959f;
	fLocal_127[26] = 0.2834f;
	iLocal_164[26] = 43;
	fLocal_128[26] = 28000f;
	iLocal_214[26] = joaat("intruder");
	Local_188[27 /*3*/] = { -292.27f, -394.0676f, 29.6529f };
	fLocal_124[27] = -0.0033f;
	fLocal_125[27] = -0.0044f;
	fLocal_126[27] = 0.6476f;
	fLocal_127[27] = 0.762f;
	iLocal_164[27] = 44;
	fLocal_128[27] = 28000f;
	iLocal_214[27] = joaat("futo");
	Local_188[28 /*3*/] = { -430.528f, -391.5486f, 32.3151f };
	fLocal_124[28] = 0.0072f;
	fLocal_125[28] = -0.0286f;
	fLocal_126[28] = 0.7321f;
	fLocal_127[28] = -0.6806f;
	iLocal_164[28] = 47;
	fLocal_128[28] = 29000f;
	iLocal_214[28] = joaat("intruder");
	Local_188[29 /*3*/] = { -498.0784f, -378.6452f, 34.5305f };
	fLocal_124[29] = 0.0118f;
	fLocal_125[29] = -0.0114f;
	fLocal_126[29] = 0.7557f;
	fLocal_127[29] = -0.6547f;
	iLocal_164[29] = 15;
	fLocal_128[29] = 29000f;
	iLocal_214[29] = joaat("bjxl");
	Local_188[30 /*3*/] = { -408.6873f, -378.5633f, 31.8791f };
	fLocal_124[30] = 0.0077f;
	fLocal_125[30] = 0.0055f;
	fLocal_126[30] = 0.6494f;
	fLocal_127[30] = 0.7604f;
	iLocal_164[30] = 42;
	fLocal_128[30] = 30000f;
	iLocal_214[30] = joaat("intruder");
	Local_188[31 /*3*/] = { -316.7394f, -402.1969f, 30.3198f };
	fLocal_124[31] = 0.0029f;
	fLocal_125[31] = -0.0031f;
	fLocal_126[31] = 0.7466f;
	fLocal_127[31] = -0.6653f;
	iLocal_164[31] = 17;
	fLocal_128[31] = 30228f;
	iLocal_214[31] = joaat("intruder");
	Local_188[33 /*3*/] = { -275.0721f, -400.0645f, 29.6053f };
	fLocal_124[33] = 0.0063f;
	fLocal_125[33] = 0.0002f;
	fLocal_126[33] = -0.2606f;
	fLocal_127[33] = 0.9654f;
	iLocal_164[33] = 18;
	fLocal_128[33] = 31746f;
	iLocal_214[33] = joaat("intruder");
	Local_188[35 /*3*/] = { -223.3546f, -530.3926f, 26.3561f };
	fLocal_124[35] = -0.0131f;
	fLocal_125[35] = 0.0132f;
	fLocal_126[35] = 0.7157f;
	fLocal_127[35] = -0.6982f;
	iLocal_164[35] = 718;
	fLocal_128[35] = 34719f;
	iLocal_214[35] = joaat("jackal");
	Local_189[1 /*3*/] = { -452.527f, -392.0529f, 33.3284f };
	fLocal_139[1] = -0.0042f;
	fLocal_140[1] = -0.0277f;
	fLocal_141[1] = 0.7473f;
	fLocal_142[1] = -0.6639f;
	iLocal_215[1] = joaat("futo");
	Local_189[2 /*3*/] = { -379.4753f, -401.2219f, 31.11f };
	fLocal_139[2] = -0.0141f;
	fLocal_140[2] = -0.0365f;
	fLocal_141[2] = 0.7427f;
	fLocal_142[2] = -0.6685f;
	iLocal_215[2] = joaat("futo");
	Local_189[3 /*3*/] = { -371.2489f, -402.2385f, 30.8473f };
	fLocal_139[3] = -0.004f;
	fLocal_140[3] = -0.0306f;
	fLocal_141[3] = 0.7518f;
	fLocal_142[3] = -0.6586f;
	iLocal_215[3] = joaat("futo");
	Local_189[4 /*3*/] = { -336.2818f, -406.7365f, 29.5646f };
	fLocal_139[4] = -0.0099f;
	fLocal_140[4] = -0.0202f;
	fLocal_141[4] = 0.7622f;
	fLocal_142[4] = -0.647f;
	iLocal_215[4] = joaat("intruder");
	Local_189[5 /*3*/] = { 1041.398f, -276.8591f, 50.223f };
	fLocal_139[5] = -0.0127f;
	fLocal_140[5] = -0.0271f;
	fLocal_141[5] = 0.9913f;
	fLocal_142[5] = 0.1283f;
	iLocal_215[5] = joaat("police3");
	Local_189[6 /*3*/] = { 1045.6538f, -299.9178f, 49.4434f };
	fLocal_139[6] = 0.0082f;
	fLocal_140[6] = -0.0401f;
	fLocal_141[6] = -0.4631f;
	fLocal_142[6] = 0.8854f;
	iLocal_215[6] = joaat("police3");
	Local_189[11 /*3*/] = { 565.6103f, -836.3173f, 9.9359f };
	fLocal_139[11] = 0.0012f;
	fLocal_140[11] = 0.0008f;
	fLocal_141[11] = -0.6146f;
	fLocal_142[11] = 0.7888f;
	iLocal_215[11] = joaat("police3");
	Local_189[12 /*3*/] = { 573.8864f, -837.935f, 9.9314f };
	fLocal_139[12] = 0.0012f;
	fLocal_140[12] = -0.0009f;
	fLocal_141[12] = 0.7139f;
	fLocal_142[12] = 0.7003f;
	iLocal_215[12] = joaat("police3");
	Local_189[13 /*3*/] = { 582.9113f, -839.4673f, 9.7816f };
	fLocal_139[13] = 0.0501f;
	fLocal_140[13] = 0.0509f;
	fLocal_141[13] = 0.6493f;
	fLocal_142[13] = 0.7572f;
	iLocal_215[13] = joaat("police3");
	Local_189[14 /*3*/] = { 679.7463f, -525.5728f, 14.256f };
	fLocal_139[14] = -0.0102f;
	fLocal_140[14] = -0.0023f;
	fLocal_141[14] = 0.9769f;
	fLocal_142[14] = -0.2135f;
	iLocal_215[14] = joaat("police3");
	Local_189[15 /*3*/] = { 686.1791f, -529.5911f, 14.4451f };
	fLocal_139[15] = -0.012f;
	fLocal_140[15] = 0.01f;
	fLocal_141[15] = 0.7669f;
	fLocal_142[15] = -0.6416f;
	iLocal_215[15] = joaat("police3");
	Local_189[16 /*3*/] = { 670.8864f, -522.0038f, 14.2409f };
	fLocal_139[16] = 0.0035f;
	fLocal_140[16] = -0.0055f;
	fLocal_141[16] = 0.5541f;
	fLocal_142[16] = 0.8324f;
	iLocal_215[16] = joaat("police3");
	Local_190[0 /*3*/] = { -638.6117f, -242.9966f, 37.6235f };
	fLocal_133[0] = 0f;
	fLocal_134[0] = 0f;
	fLocal_135[0] = 0.3646f;
	fLocal_136[0] = 0.9312f;
	iLocal_167[0] = 998;
	fLocal_137[0] = 0f;
	fLocal_138[0] = 1f;
	iLocal_216[0] = Local_748.f_0;
	Local_190[1 /*3*/] = { -840.979f, -377.3532f, 39.4003f };
	fLocal_133[1] = -0.0063f;
	fLocal_134[1] = 0.0194f;
	fLocal_135[1] = -0.512f;
	fLocal_136[1] = 0.8588f;
	iLocal_167[1] = 53;
	fLocal_137[1] = 3500f;
	fLocal_138[1] = 1f;
	iLocal_216[1] = joaat("biff");
	Local_190[2 /*3*/] = { -868.8333f, -287.1481f, 40.2375f };
	fLocal_133[2] = 0.0024f;
	fLocal_134[2] = -0.0158f;
	fLocal_135[2] = 0.8924f;
	fLocal_136[2] = -0.451f;
	iLocal_167[2] = 54;
	fLocal_137[2] = 7250f;
	fLocal_138[2] = 1f;
	iLocal_216[2] = joaat("bjxl");
	Local_190[3 /*3*/] = { -875.2956f, -282.3078f, 39.9842f };
	fLocal_133[3] = -0.0007f;
	fLocal_134[3] = -0.0132f;
	fLocal_135[3] = 0.8808f;
	fLocal_136[3] = -0.4733f;
	iLocal_167[3] = 55;
	fLocal_137[3] = 7250f;
	fLocal_138[3] = 1f;
	iLocal_216[3] = joaat("washington");
	Local_190[4 /*3*/] = { -479.2266f, -344.1364f, 34.14f };
	fLocal_133[4] = -0.0001f;
	fLocal_134[4] = -0.0003f;
	fLocal_135[4] = 0.9967f;
	fLocal_136[4] = 0.0811f;
	iLocal_167[4] = 7;
	fLocal_137[4] = 19500f;
	fLocal_138[4] = 0.8f;
	iLocal_216[4] = joaat("ambulance");
	Local_190[6 /*3*/] = { -160.6159f, -349.8996f, 34.0634f };
	fLocal_133[6] = -0.0608f;
	fLocal_134[6] = -0.0647f;
	fLocal_135[6] = 0.9587f;
	fLocal_136[6] = 0.2702f;
	iLocal_167[6] = 60;
	fLocal_137[6] = 30000f;
	fLocal_138[6] = 1f;
	iLocal_216[6] = joaat("police3");
	Local_190[8 /*3*/] = { -136.4866f, -296.7225f, 39.7642f };
	fLocal_133[8] = -0.021f;
	fLocal_134[8] = -0.0531f;
	fLocal_135[8] = 0.9846f;
	fLocal_136[8] = 0.1651f;
	iLocal_167[8] = 50;
	fLocal_137[8] = 30000f;
	fLocal_138[8] = 1f;
	iLocal_216[8] = joaat("police3");
	Local_190[9 /*3*/] = { -233.3454f, -619.1058f, 33.8295f };
	fLocal_133[9] = 0.0149f;
	fLocal_134[9] = 0.0266f;
	fLocal_135[9] = -0.1565f;
	fLocal_136[9] = 0.9872f;
	iLocal_167[9] = 51;
	fLocal_137[9] = 31000f;
	fLocal_138[9] = 1f;
	iLocal_216[9] = joaat("bus");
	Local_190[10 /*3*/] = { -231.0461f, -603.5657f, 33.8332f };
	fLocal_133[10] = 0.0017f;
	fLocal_134[10] = 0.0013f;
	fLocal_135[10] = -0.1655f;
	fLocal_136[10] = 0.9862f;
	iLocal_167[10] = 52;
	fLocal_137[10] = 30000f;
	fLocal_138[10] = 1f;
	iLocal_216[10] = joaat("police3");
	Local_190[12 /*3*/] = { 1081.2266f, -354.8069f, 67.0946f };
	fLocal_133[12] = -0.017f;
	fLocal_134[12] = -0.0003f;
	fLocal_135[12] = 0.3461f;
	fLocal_136[12] = 0.9381f;
	iLocal_167[12] = 803;
	fLocal_137[12] = 151328f;
	fLocal_138[12] = 1f;
	iLocal_216[12] = joaat("riot");
	Local_190[13 /*3*/] = { 1021.5374f, -310.6206f, 66.7659f };
	fLocal_133[13] = -0.01f;
	fLocal_134[13] = 0.0008f;
	fLocal_135[13] = 0.8815f;
	fLocal_136[13] = -0.4722f;
	iLocal_167[13] = 804;
	fLocal_137[13] = 159087f;
	fLocal_138[13] = 1f;
	iLocal_216[13] = joaat("police3");
	Local_190[14 /*3*/] = { 695.325f, -395.2741f, 40.9185f };
	fLocal_133[14] = -0.0003f;
	fLocal_134[14] = -0.002f;
	fLocal_135[14] = 0.7092f;
	fLocal_136[14] = -0.705f;
	iLocal_167[14] = 805;
	fLocal_137[14] = 166840f;
	fLocal_138[14] = 1f;
	iLocal_216[14] = joaat("police3");
	Local_190[15 /*3*/] = { 1040.1321f, -284.6946f, 49.7886f };
	fLocal_133[15] = 0.0118f;
	fLocal_134[15] = -0.0124f;
	fLocal_135[15] = 0.9569f;
	fLocal_136[15] = 0.2898f;
	iLocal_167[15] = 700;
	fLocal_137[15] = 158000f;
	fLocal_138[15] = 1f;
	iLocal_216[15] = Local_748.f_0;
	iLocal_168[15] = 3;
	Local_190[17 /*3*/] = { 1084.0251f, -254.2668f, 57.7442f };
	fLocal_133[17] = 0.0041f;
	fLocal_134[17] = 0.0153f;
	fLocal_135[17] = 0.9649f;
	fLocal_136[17] = 0.2623f;
	iLocal_167[17] = 702;
	fLocal_137[17] = 152700f;
	fLocal_138[17] = 0.95f;
	iLocal_216[17] = joaat("police3");
	Local_190[18 /*3*/] = { 1085.7998f, -257.063f, 57.7623f };
	fLocal_133[18] = 0f;
	fLocal_134[18] = 0f;
	fLocal_135[18] = 0.9545f;
	fLocal_136[18] = 0.2982f;
	iLocal_167[18] = 703;
	fLocal_137[18] = 153100f;
	fLocal_138[18] = 0.92f;
	iLocal_216[18] = joaat("police3");
	Local_190[19 /*3*/] = { 976.2125f, -325.9881f, 61.8851f };
	fLocal_133[19] = 0.2821f;
	fLocal_134[19] = -0.2157f;
	fLocal_135[19] = 0.9255f;
	fLocal_136[19] = 0.1313f;
	iLocal_167[19] = 999;
	fLocal_137[19] = 153500f;
	fLocal_138[19] = 1f;
	iLocal_216[19] = joaat("police3");
	Local_190[20 /*3*/] = { 973.0397f, -317.2896f, 66.2431f };
	fLocal_133[20] = -0.034f;
	fLocal_134[20] = -0.0516f;
	fLocal_135[20] = 0.9158f;
	fLocal_136[20] = -0.3969f;
	iLocal_167[20] = 705;
	fLocal_137[20] = 154400f;
	fLocal_138[20] = 0.95f;
	iLocal_216[20] = joaat("police3");
	Local_190[21 /*3*/] = { 623.5294f, -468.4917f, 24.5423f };
	fLocal_133[21] = 0.0006f;
	fLocal_134[21] = 0.0061f;
	fLocal_135[21] = 0.9911f;
	fLocal_136[21] = 0.1329f;
	iLocal_167[21] = 706;
	fLocal_137[21] = 172600f;
	fLocal_138[21] = 0.907f;
	iLocal_216[21] = joaat("police3");
	Local_190[22 /*3*/] = { 659.6873f, -854.3524f, 14.0619f };
	fLocal_133[22] = -0.0338f;
	fLocal_134[22] = -0.0317f;
	fLocal_135[22] = 0.7275f;
	fLocal_136[22] = 0.6846f;
	iLocal_167[22] = 707;
	fLocal_137[22] = 187300f;
	fLocal_138[22] = 0.99f;
	iLocal_216[22] = joaat("police3");
	Local_190[24 /*3*/] = { 658.1793f, -1169.9729f, 13.8373f };
	fLocal_133[24] = -0.031f;
	fLocal_134[24] = -0.0276f;
	fLocal_135[24] = 0.7661f;
	fLocal_136[24] = 0.6414f;
	iLocal_167[24] = 708;
	fLocal_137[24] = 200000f;
	fLocal_138[24] = 0.9205f;
	iLocal_216[24] = joaat("police3");
	Local_190[25 /*3*/] = { -582.8351f, -304.9959f, 34.7214f };
	fLocal_133[25] = -0.0057f;
	fLocal_134[25] = -0.0024f;
	fLocal_135[25] = 0.8591f;
	fLocal_136[25] = 0.5118f;
	iLocal_167[25] = 709;
	fLocal_137[25] = 15615f;
	fLocal_138[25] = 1f;
	iLocal_216[25] = joaat("police3");
	Local_190[26 /*3*/] = { -571.1154f, -309.1694f, 34.7754f };
	fLocal_133[26] = -0.002f;
	fLocal_134[26] = -0.0042f;
	fLocal_135[26] = 0.8688f;
	fLocal_136[26] = 0.4952f;
	iLocal_167[26] = 710;
	fLocal_137[26] = 11615f;
	fLocal_138[26] = 1f;
	iLocal_216[26] = joaat("police3");
	Local_190[27 /*3*/] = { -623.1417f, -446.3074f, 34.381f };
	fLocal_133[27] = -0.0018f;
	fLocal_134[27] = 0.0103f;
	fLocal_135[27] = -0.0151f;
	fLocal_136[27] = 0.9998f;
	iLocal_167[27] = 711;
	fLocal_137[27] = 16298f;
	fLocal_138[27] = 1f;
	iLocal_216[27] = joaat("police3");
	Local_190[28 /*3*/] = { -522.9142f, -446.6633f, 33.8793f };
	fLocal_133[28] = -0.0099f;
	fLocal_134[28] = -0.0197f;
	fLocal_135[28] = -0.0663f;
	fLocal_136[28] = 0.9976f;
	iLocal_167[28] = 712;
	fLocal_137[28] = 21963f;
	fLocal_138[28] = 1f;
	iLocal_216[28] = joaat("police3");
	Local_190[30 /*3*/] = { -37.9929f, -499.319f, 32.5247f };
	fLocal_133[30] = -0.0082f;
	fLocal_134[30] = -0.008f;
	fLocal_135[30] = 0.7138f;
	fLocal_136[30] = 0.7002f;
	iLocal_167[30] = 714;
	fLocal_137[30] = 34719f;
	fLocal_138[30] = 1f;
	iLocal_216[30] = joaat("tiptruck");
	Local_190[31 /*3*/] = { -22.294f, -493.0348f, 33.4044f };
	fLocal_133[31] = -0.0053f;
	fLocal_134[31] = -0.005f;
	fLocal_135[31] = 0.7117f;
	fLocal_136[31] = 0.7024f;
	iLocal_167[31] = 715;
	fLocal_137[31] = 34719f;
	fLocal_138[31] = 1f;
	iLocal_216[31] = joaat("flatbed");
	Local_190[32 /*3*/] = { -196.7399f, -517.8179f, 27.2766f };
	fLocal_133[32] = 0.005f;
	fLocal_134[32] = -0.018f;
	fLocal_135[32] = -0.7058f;
	fLocal_136[32] = 0.7082f;
	iLocal_167[32] = 696;
	fLocal_137[32] = 32841f;
	fLocal_138[32] = 1f;
	iLocal_216[32] = joaat("bus");
	if (Global_96863)
	{
		Local_190[33 /*3*/] = { -651.2066f, -193.8645f, 37.2064f };
		fLocal_133[33] = -0.0118f;
		fLocal_134[33] = 0.0007f;
		fLocal_135[33] = 0.8824f;
		fLocal_136[33] = 0.4703f;
		iLocal_167[33] = 721;
		fLocal_137[33] = 1500f;
		fLocal_138[33] = 1f;
		iLocal_216[33] = joaat("police3");
	}
	else
	{
		Local_190[7 /*3*/] = { -154.2711f, -348.7168f, 34.8215f };
		fLocal_133[7] = -0.0296f;
		fLocal_134[7] = -0.056f;
		fLocal_135[7] = 0.9915f;
		fLocal_136[7] = 0.1138f;
		iLocal_167[7] = 61;
		fLocal_137[7] = 30000f;
		fLocal_138[7] = 1f;
		iLocal_216[7] = joaat("police3");
	}
	if (!Global_96863)
	{
		Local_190[34 /*3*/] = { -676.7388f, -250.0423f, 36.027f };
		fLocal_133[34] = -0.0004f;
		fLocal_134[34] = 0.0247f;
		fLocal_135[34] = 0.2695f;
		fLocal_136[34] = 0.9627f;
		iLocal_167[34] = 26;
		fLocal_137[34] = 700f;
		fLocal_138[34] = 1f;
		iLocal_216[34] = joaat("intruder");
	}
}

void func_885(int iParam0)//Position - 0x92804
{
	bLocal_117 = iParam0;
}

void func_886(int iParam0)//Position - 0x92810
{
	switch (iParam0)
	{
		case 0:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_456[0]))
			{
				iLocal_456[0] = VEHICLE::CREATE_VEHICLE(Local_748.f_0, Local_299[0 /*3*/] + Local_81, fLocal_300[0], true, true, false);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_456[1]) && !(bLocal_425 && iLocal_369 >= 10))
			{
				iLocal_456[1] = VEHICLE::CREATE_VEHICLE(Local_748.f_0, Local_299[1 /*3*/] + Local_81, fLocal_300[1], true, true, false);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_456[2]))
			{
				iLocal_456[2] = VEHICLE::CREATE_VEHICLE(Local_748.f_0, Local_299[2 /*3*/] + Local_81, fLocal_300[2], true, true, false);
			}
			break;
		case 1:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_456[0]))
			{
				iLocal_456[0] = VEHICLE::CREATE_VEHICLE(Local_748.f_0, -53.0656f, -551.6052f, 29.5633f, 219.6935f, true, true, false);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_456[1]) && !(bLocal_425 && iLocal_369 >= 10))
			{
				iLocal_456[1] = VEHICLE::CREATE_VEHICLE(Local_748.f_0, -53.0656f, -551.6052f, 29.5633f, 219.6935f, true, true, false);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_456[2]))
			{
				iLocal_456[2] = VEHICLE::CREATE_VEHICLE(Local_748.f_0, -63.0551f, -541.7521f, 30.8795f, 219.6935f, true, true, false);
			}
			break;
		case 2:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_456[0]))
			{
				iLocal_456[0] = VEHICLE::CREATE_VEHICLE(Local_748.f_0, Vector(49.2269f, -284.8706f, 1033.8641f) + Local_81, 208.3043f, true, true, false);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_456[1]) && !(bLocal_425 && iLocal_369 >= 10))
			{
				iLocal_456[1] = VEHICLE::CREATE_VEHICLE(Local_748.f_0, Vector(49.2269f, -284.8706f, 1035.8641f) + Local_81, 208.3043f, true, true, false);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_456[2]))
			{
				iLocal_456[2] = VEHICLE::CREATE_VEHICLE(Local_748.f_0, Vector(49.2269f, -284.8706f, 1037.8641f) + Local_81, 208.3043f, true, true, false);
			}
			break;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_456[0], false))
	{
		VEHICLE::SET_VEHICLE_LOD_MULTIPLIER(iLocal_456[0], 2f);
		VEHICLE::SET_VEHICLE_ACT_AS_IF_HIGH_SPEED_FOR_FRAG_SMASHING(iLocal_456[0], true);
		VEHICLE::SET_VEHICLE_ACTIVE_DURING_PLAYBACK(iLocal_456[0], true);
		ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_456[0], false);
		ENTITY::SET_ENTITY_PROOFS(iLocal_456[0], false, false, false, true, false, true, false, false);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_456[1], false))
	{
		VEHICLE::SET_VEHICLE_LOD_MULTIPLIER(iLocal_456[1], 2f);
		VEHICLE::SET_VEHICLE_ACT_AS_IF_HIGH_SPEED_FOR_FRAG_SMASHING(iLocal_456[1], true);
		VEHICLE::SET_VEHICLE_ACTIVE_DURING_PLAYBACK(iLocal_456[1], true);
		ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_456[1], false);
		ENTITY::SET_ENTITY_PROOFS(iLocal_456[1], false, false, false, true, false, true, false, false);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_456[2], false))
	{
		VEHICLE::SET_VEHICLE_LOD_MULTIPLIER(iLocal_456[2], 2f);
		ENTITY::SET_ENTITY_PROOFS(iLocal_456[2], false, false, false, true, false, true, false, false);
		ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_456[2], false);
		if (Local_748.f_0 == joaat("bati2"))
		{
			AUDIO::FORCE_USE_AUDIO_GAME_OBJECT(iLocal_456[2], "CARBONRS");
		}
		__LIB_15__::func_956(iLocal_456[2], -1);
	}
	VEHICLE::SET_VEHICLE_NAME_DEBUG(iLocal_456[0], "Bike 0");
	if (!bLocal_425)
	{
		VEHICLE::SET_VEHICLE_NAME_DEBUG(iLocal_456[1], "Bike 1");
	}
	VEHICLE::SET_VEHICLE_NAME_DEBUG(iLocal_456[2], "Bike 2");
	func_887();
}

void func_887()//Position - 0x92B72
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_456[iVar0], false))
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_456[iVar0]))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_456[iVar0], true, false);
			}
			VEHICLE::SET_VEHICLE_STRONG(iLocal_456[iVar0], true);
			VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(iLocal_456[iVar0], false);
			VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(iLocal_456[iVar0], false);
			VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_456[iVar0], true, true, false);
			if (iVar0 != 2)
			{
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_456[iVar0], false);
			}
			VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(iLocal_456[iVar0], false);
			VEHICLE::SET_VEHICLE_TYRE_FIXED(iLocal_456[iVar0], 6);
			VEHICLE::SET_VEHICLE_TYRE_FIXED(iLocal_456[iVar0], 7);
			VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iLocal_456[iVar0], false);
			VEHICLE::SET_VEHICLE_HAS_UNBREAKABLE_LIGHTS(iLocal_456[iVar0], true);
			VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_456[iVar0], iVar0);
		}
		iVar0++;
	}
}

void func_889()//Position - 0x92C57
{
	iLocal_460 = VEHICLE::CREATE_VEHICLE(Local_748.f_12, 1104.0579f, -222.2266f, 55.7692f, 147.2209f, true, true, false);
	func_890(iLocal_460);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_460))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_460, false))
		{
			VEHICLE::SET_VEHICLE_COLOURS(iLocal_460, 128, 3);
			VEHICLE::SET_VEHICLE_EXTRA(iLocal_460, 6, false);
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_460, true);
			ENTITY::SET_ENTITY_PROOFS(iLocal_460, false, true, true, false, false, false, false, false);
			VEHICLE::SET_VEHICLE_CAN_BREAK(iLocal_460, false);
			PED::SET_PED_INTO_VEHICLE(Local_519[0], iLocal_460, -1);
		}
	}
}

void func_890(int iParam0)//Position - 0x92CDF
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			iVar0 = 0;
			while (iVar0 < 10)
			{
				if (iVar0 > 0)
				{
					if (VEHICLE::DOES_EXTRA_EXIST(iParam0, iVar0))
					{
						if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0))
						{
							VEHICLE::SET_VEHICLE_EXTRA(iParam0, iVar0, true);
						}
					}
				}
				iVar0++;
			}
		}
	}
}

int func_891()//Position - 0x92D33
{
	if ((((((((((((STREAMING::HAS_MODEL_LOADED(Local_748.f_0) && STREAMING::HAS_MODEL_LOADED(Local_748.f_12)) && STREAMING::HAS_MODEL_LOADED(Local_748.f_14)) && STREAMING::HAS_MODEL_LOADED(Local_748.f_15)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_748.f_85, Local_748.f_83)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_748.f_84, Local_748.f_83)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(717, "JHUBER")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(700, "JHUBER")) && STREAMING::HAS_ANIM_DICT_LOADED(Local_748.f_60)) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_2019)) && __LIB_17__::func_780(__LIB_16__::func_594(0, 1))) && __LIB_17__::func_780(__LIB_16__::func_594(0, 2))) && WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("WEAPON_PISTOL")))
	{
		return 1;
	}
	return 0;
}

void func_892()//Position - 0x92E02
{
	STREAMING::REQUEST_MODEL(Local_748.f_0);
	STREAMING::REQUEST_MODEL(Local_748.f_12);
	STREAMING::REQUEST_MODEL(Local_748.f_14);
	STREAMING::REQUEST_MODEL(Local_748.f_15);
	VEHICLE::REQUEST_VEHICLE_RECORDING(Local_748.f_85, Local_748.f_83);
	VEHICLE::REQUEST_VEHICLE_RECORDING(Local_748.f_84, Local_748.f_83);
	VEHICLE::REQUEST_VEHICLE_RECORDING(717, "JHUBER");
	VEHICLE::REQUEST_VEHICLE_RECORDING(700, "JHUBER");
	VEHICLE::REQUEST_VEHICLE_RECORDING(722, Local_748.f_83);
	STREAMING::REQUEST_ANIM_DICT(Local_748.f_60);
	STREAMING::REQUEST_ANIM_DICT(sLocal_2019);
	__LIB_17__::func_781(__LIB_16__::func_594(0, 1));
	__LIB_17__::func_781(__LIB_16__::func_594(0, 2));
	WEAPON::REQUEST_WEAPON_ASSET(joaat("WEAPON_PISTOL"), 31, 0);
	__LIB_17__::func_752(0);
}

int func_894()//Position - 0x92EC6
{
	if (!iLocal_383)
	{
		__LIB_12__::func_849(9, 1);
		__LIB_12__::func_849(8, 1);
		CAM::SET_FOLLOW_VEHICLE_CAM_HIGH_ANGLE_MODE_EVERY_UPDATE(true, true);
		INTERIOR::DISABLE_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-164.3822f, -619.0884f, 33.3318f, "dt1_02_carpark"), true);
		INTERIOR::DISABLE_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-179.314f, -180.2154f, 42.6246f, "bt1_04_carpark"), true);
		INTERIOR::DISABLE_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-16.2958f, -684.0385f, 33.5083f, "dt1_03_carpark"), true);
		INTERIOR::DISABLE_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(141.2044f, -717.2167f, 32.1327f, "dt1_05_carpark"), true);
		AUDIO::SET_AUDIO_FLAG("OnlyAllowScriptTriggerPoliceScanner", true);
		iLocal_2111 = -1;
		iLocal_2109 = 0;
		if (iLocal_369 == 9)
		{
			__LIB_37__::func_92();
			if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) != 4)
			{
				func_704(0, 1, 1500, 0, 1);
			}
			iLocal_2111 = 0;
			if (bLocal_382)
			{
				func_652(4, "STAGE_BIKE_CHASE", 0, 0, 0, 1);
			}
			else
			{
				func_652(3, "STAGE_BIKE_CHASE", 0, 0, 0, 1);
			}
			Global_100441.f_12[0] = iLocal_413;
			if (!bLocal_71 && CAM::IS_SCREEN_FADED_OUT())
			{
				STREAMING::LOAD_SCENE(-665.6722f, -231.6896f, 36.1003f);
			}
		}
		else if (iLocal_369 == 10)
		{
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -63.0551f, -541.7521f, 30.8795f, true, false, false, true);
			if (!bLocal_71)
			{
				STREAMING::NEW_LOAD_SCENE_START_SPHERE(-63.0551f, -541.7521f, 30.8795f, 15f, 0);
				while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED())
				{
					SYSTEM::WAIT(0);
				}
				STREAMING::NEW_LOAD_SCENE_STOP();
			}
			if (bLocal_382)
			{
				func_652(5, "STAGE_BIKE_CHASE_START_OF_TUNNEL", 0, 0, 0, 1);
			}
			else
			{
				func_652(4, "STAGE_BIKE_CHASE_START_OF_TUNNEL", 0, 0, 0, 1);
			}
		}
		else if (iLocal_369 == 11)
		{
			func_936(&iLocal_2110, 1021.4163f, -201.1791f, 41.7879f, "V_31_NEWTUN4", 1, 1);
			if (bLocal_382)
			{
				func_652(6, "STAGE_BIKE_CHASE_END_OF_TUNNEL", 0, 0, 0, 1);
			}
			else
			{
				func_652(5, "STAGE_BIKE_CHASE_END_OF_TUNNEL", 0, 0, 0, 1);
			}
			if (!bLocal_71)
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1021.4163f, -201.1791f, 41.7879f, true, false, false, true);
				STREAMING::NEW_LOAD_SCENE_START_SPHERE(1021.4163f, -201.1791f, 41.7879f, 25f, 0);
				while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED())
				{
					SYSTEM::WAIT(0);
				}
				STREAMING::NEW_LOAD_SCENE_STOP();
			}
		}
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_475);
		STREAMING::SET_VEHICLE_POPULATION_BUDGET(0);
		STREAMING::SET_PED_POPULATION_BUDGET(1);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_748.f_0, true);
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
		PED::SET_PED_NON_CREATION_AREA(-186.7415f, -506.2248f, 30.7621f, -166.2254f, -476.2848f, 39.7972f);
		PATHFIND::DISABLE_NAVMESH_IN_AREA(-186.7415f, -506.2248f, 30.7621f, -166.2254f, -476.2848f, 39.7972f, true);
		func_133();
		func_935(Local_748.f_0);
		func_935(joaat("IG_TrafficWarden"));
		func_933(Local_748.f_35);
		func_932(Local_748.f_83, Local_748.f_84);
		VEHICLE::REQUEST_VEHICLE_RECORDING(722, Local_748.f_83);
		func_932(Local_748.f_83, Local_748.f_85);
		if (Global_96863)
		{
			func_935(Local_748.f_14);
			func_935(Local_748.f_15);
			func_932("JHLateCops", 1);
			func_932("JHLateCops", 2);
			func_932("JHLateCops", 3);
		}
		VEHICLE::REQUEST_VEHICLE_ASSET(Local_748.f_0, 3);
		STREAMING::REQUEST_PTFX_ASSET();
		while ((!func_931() || !VEHICLE::HAS_VEHICLE_ASSET_LOADED(Local_748.f_0)) || !STREAMING::HAS_PTFX_ASSET_LOADED())
		{
			func_112(0);
		}
		if (iLocal_369 == 10)
		{
			func_886(1);
		}
		else if (iLocal_369 == 11)
		{
			func_886(2);
		}
		else
		{
			func_886(0);
		}
		WEAPON::SET_PED_AMMO(func_94(1), joaat("WEAPON_BZGAS"), 0, false);
		WEAPON::REMOVE_WEAPON_FROM_PED(func_94(1), joaat("WEAPON_BZGAS"));
		if (!PED::IS_PED_INJURED(iLocal_436[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_456[0], false))
		{
			if (!PED::IS_PED_IN_VEHICLE(iLocal_436[0], iLocal_456[0], false))
			{
				PED::SET_PED_INTO_VEHICLE(iLocal_436[0], iLocal_456[0], -1);
			}
			ENTITY::SET_ENTITY_VISIBLE(iLocal_436[0], true, false);
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_436[0], true);
			PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iLocal_436[0], 1);
			if (!PED::IS_PED_IN_VEHICLE(iLocal_436[0], iLocal_456[0], false))
			{
				PED::SET_PED_INTO_VEHICLE(iLocal_436[0], iLocal_456[0], -1);
			}
			PED::SET_PED_PROP_INDEX(iLocal_436[0], 0, 3, 0, false);
			PED::SET_PED_LOD_MULTIPLIER(iLocal_436[0], 2f);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_436[0], true);
			EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(98 /*EVENT_SHOCKING_MAD_DRIVER*/, iLocal_436[0], -1f);
		}
		if (!PED::IS_PED_INJURED(iLocal_436[1]) && !ENTITY::IS_ENTITY_DEAD(iLocal_456[1], false))
		{
			if (!PED::IS_PED_IN_VEHICLE(iLocal_436[1], iLocal_456[1], false))
			{
				PED::SET_PED_INTO_VEHICLE(iLocal_436[1], iLocal_456[1], -1);
			}
			ENTITY::SET_ENTITY_VISIBLE(iLocal_436[1], true, false);
			if (!PED::IS_PED_IN_VEHICLE(iLocal_436[1], iLocal_456[1], false))
			{
				PED::SET_PED_INTO_VEHICLE(iLocal_436[1], iLocal_456[1], -1);
			}
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_436[1], true);
			PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iLocal_436[1], 1);
			PED::SET_PED_PROP_INDEX(iLocal_436[1], 0, 4, 0, false);
			func_9(iLocal_436[1], 1, 0);
			PED::SET_PED_LOD_MULTIPLIER(iLocal_436[1], 2f);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_436[1], true);
			EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(98 /*EVENT_SHOCKING_MAD_DRIVER*/, iLocal_436[1], -1f);
		}
		if (!PED::IS_PED_INJURED(func_94(1)) && !ENTITY::IS_ENTITY_DEAD(iLocal_456[2], false))
		{
			ENTITY::SET_ENTITY_VISIBLE(func_94(1), true, false);
			if (!PED::IS_PED_IN_VEHICLE(func_94(1), iLocal_456[2], false))
			{
				PED::SET_PED_INTO_VEHICLE(func_94(1), iLocal_456[2], -1);
			}
			PED::REMOVE_PED_HELMET(func_94(1), true);
			PED::SET_PED_HELMET_PROP_INDEX(func_94(1), 6, true);
			PED::SET_PED_PROP_INDEX(func_94(1), 0, 6, 8, false);
			PED::SET_PED_HELMET(func_94(1), true);
			PED::SET_PED_LOD_MULTIPLIER(func_94(1), 2f);
			EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(98 /*EVENT_SHOCKING_MAD_DRIVER*/, func_94(1), -1f);
		}
		func_724(func_94(0));
		func_722(func_94(0), 1);
		func_724(func_94(1));
		func_930(func_94(1), 0);
		func_930(iLocal_436[0], 0);
		func_930(iLocal_436[1], 0);
		WEAPON::REQUEST_WEAPON_ASSET(joaat("WEAPON_PISTOL"), 31, 0);
		func_933(Local_748.f_60);
		func_131(Local_748.f_60, 0, 0, 0);
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_456[0], false))
		{
			func_883();
			MISC::CLEAR_AREA_OF_VEHICLES(ENTITY::GET_ENTITY_COORDS(func_94(1), true), 500f, false, false, false, false, false, false, 0);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_456[2], false);
			func_882(Local_748.f_83, Local_748.f_84, 1, 1);
			iLocal_119 = 1;
			iLocal_182 = 998;
			func_883();
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_456[0], false);
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_456[0], Local_748.f_84, Local_748.f_83, true);
			iLocal_223[0] = iLocal_456[1];
			iLocal_168[0] = 3;
			if (iLocal_369 == 9)
			{
				Global_100441.f_12[1] = 0;
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_456[1], false);
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_456[1], iLocal_167[0], Local_748.f_83, true);
				VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_456[1], 1000f);
				VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_456[0], 1000f);
				VEHICLE::SET_POSITION_OFFSET_FOR_RECORDED_VEHICLE_PLAYBACK(iLocal_456[0], Local_81);
				VEHICLE::SET_POSITION_OFFSET_FOR_RECORDED_VEHICLE_PLAYBACK(iLocal_456[1], Local_81);
				VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_456[0], true);
				VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_456[1], true);
				GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_jew_biKe_burnout", iLocal_456[0], 0f, 0f, 0f, 0f, 0f, 0f, 1.1f, false, false, false);
				GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_jew_biKe_burnout", iLocal_456[1], 0f, 0f, 0f, 0f, 0f, 0f, 1f, false, false, false);
			}
			else if (iLocal_369 == 10)
			{
				fLocal_340 = 1f;
				if (!bLocal_425)
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_456[1], false);
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_456[1], iLocal_167[0], Local_748.f_83, true);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_456[1], 46810.32f);
					VEHICLE::SET_POSITION_OFFSET_FOR_RECORDED_VEHICLE_PLAYBACK(iLocal_456[1], Local_81);
					VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_456[1], true);
				}
				VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_456[0], 46810.32f);
				VEHICLE::SET_POSITION_OFFSET_FOR_RECORDED_VEHICLE_PLAYBACK(iLocal_456[0], Local_81);
				VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_456[0], true);
			}
			else if (iLocal_369 == 11)
			{
				fLocal_340 = 1f;
				if (bLocal_425)
				{
					fLocal_2122 = 146000f;
				}
				else
				{
					fLocal_2122 = 147000f;
				}
				if (!bLocal_425)
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_456[1], false);
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_456[1], iLocal_167[0], Local_748.f_83, true);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_456[1], fLocal_2122);
					VEHICLE::SET_POSITION_OFFSET_FOR_RECORDED_VEHICLE_PLAYBACK(iLocal_456[1], Local_81);
					VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_456[1], true);
				}
				VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_456[0], fLocal_2122);
				VEHICLE::SET_POSITION_OFFSET_FOR_RECORDED_VEHICLE_PLAYBACK(iLocal_456[0], Local_81);
				VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_456[0], true);
				func_880();
			}
			if (iLocal_369 == 10)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_456[2], false))
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_456[2], -63.0551f, -541.7521f, 30.8795f, true, false, false, true);
					ENTITY::SET_ENTITY_ROTATION(iLocal_456[2], 0f, 0f, 0f, 2, true);
					ENTITY::SET_ENTITY_HEADING(iLocal_456[2], 219.6241f);
				}
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_456[2], 16f);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_94(1), true, false);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			}
			else if (iLocal_369 == 11)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_456[2], false))
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_456[2], 979.6f, -139.4f, 34.2f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(iLocal_456[2], -130f);
				}
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_456[2], 20f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			}
			if (iLocal_369 == 11)
			{
				func_892();
			}
			if (Global_96863 && iLocal_369 == 9)
			{
				iLocal_416 = 0;
				while (iLocal_416 <= 2)
				{
					if (iLocal_416 != 1)
					{
						iLocal_458[iLocal_416] = VEHICLE::CREATE_VEHICLE(Local_748.f_14, VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_416 + 1, 0f, "JHLateCops"), 0f, true, true, false);
						iLocal_441[iLocal_416] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_458[iLocal_416], 6, Local_748.f_15, -1, true, true);
						func_767(iLocal_441[iLocal_416], 0);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_441[iLocal_416], 39, true);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_441[iLocal_416], true);
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_458[iLocal_416], iLocal_416 + 1, "JHLateCops", true);
						VEHICLE::SET_VEHICLE_SIREN(iLocal_458[iLocal_416], true);
						func_929("JHLateCops", iLocal_416 + 1);
						VEHICLE::SET_VEHICLE_NAME_DEBUG(iLocal_458[iLocal_416], __LIB_1__::func_331(iLocal_416));
					}
					iLocal_416++;
				}
				VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_458[2], 2000f);
				VEHICLE::SET_PLAYBACK_SPEED(iLocal_458[2], 1.2f);
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_456[2], false))
		{
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_456[2], true);
		}
		AUDIO::DISTANT_COP_CAR_SIRENS(true);
		__LIB_17__::func_739(0);
		func_924(func_94(1), 1);
		fLocal_143 = 200f;
		fLocal_157 = 50f;
		iLocal_398 = 0;
		bLocal_399 = false;
		iLocal_404 = 0;
		iLocal_426 = 0;
		iLocal_2029 = 0;
		iLocal_2007 = 0;
		iLocal_412 = MISC::GET_GAME_TIMER();
		iLocal_416 = 0;
		while (iLocal_416 <= 24)
		{
			iLocal_408[iLocal_416] = 0;
			iLocal_416++;
		}
		iLocal_403 = 0;
		iLocal_401 = 1;
		VEHICLE::SET_RANDOM_TRAINS(false);
		PATHFIND::SET_ROADS_IN_AREA(-891.3078f, -707.2606f, -17.5355f, 395.0734f, -125.4589f, 127.5168f, false, true);
		PATHFIND::SET_ROADS_IN_AREA(-322.6849f, -509.2203f, 21.5231f, 112.3121f, -484.9729f, 38.3947f, true, true);
		func_114();
		if (iLocal_369 == 9)
		{
			if (Local_748.f_0 == joaat("sanchez"))
			{
				AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_JSH_2A_01", 0f);
			}
			else
			{
				AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_JSH_2A_02", 0f);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_276))
			{
				iLocal_276 = PED::CREATE_PED(26, joaat("IG_TrafficWarden"), -630.91f, -240.94f, 37.2314f, 132.86717f, true, true);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_276))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_276, false))
				{
					AUDIO::STOP_PED_SPEAKING(iLocal_276, true);
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_276, "missheist_jewel", "cop_on_floor", 3))
					{
						TASK::TASK_PLAY_ANIM(iLocal_276, "missheist_jewel", "cop_on_floor", 1000f, -8f, -1, 262145, 0f, false, false, false);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_276, false, false);
					}
					PED::SET_PED_PROP_INDEX(iLocal_276, 0, 0, 0, false);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_276, true);
					func_923(joaat("IG_TrafficWarden"));
					STREAMING::REMOVE_ANIM_DICT(Local_748.f_35);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_276, joaat("PLAYER"));
				}
			}
			func_709("JH_BIKESGO", 1, 0, 1, 7, 0, 0);
			if (func_120())
			{
				func_762("JH_LEFTE", 0, 0, 1);
			}
			else if (func_119())
			{
				func_762("JH_LEFTT", 0, 0, 1);
			}
			else if (func_118())
			{
				func_762("JH_LEFTK", 0, 0, 1);
			}
			func_762(Local_748.f_223, 1, 0, 1);
			if (Global_96863)
			{
				if (func_117())
				{
					func_762("JH_GET_COPCP", 0, 0, 1);
				}
				else if (func_116())
				{
					func_762("JH_GET_COPCR", 0, 0, 1);
				}
				else if (func_115())
				{
					func_762("JH_GET_COPCN", 0, 0, 1);
				}
			}
			AUDIO::START_AUDIO_SCENE("JSH_2B_CHASE_START");
		}
		__LIB_0__::func_377(iLocal_456[2], 815);
		func_111(800, 0, 0);
		iLocal_417 = 0;
		iLocal_383 = 1;
		iLocal_384 = 0;
		__LIB_17__::func_760(&Local_519, 1);
		iLocal_385 = 0;
		iLocal_431 = 0;
		iLocal_432 = 0;
		iLocal_433 = 0;
		iLocal_428 = 0;
		iLocal_427 = 0;
		iLocal_2117 = 0;
		iLocal_266 = 0;
		if (iLocal_369 == 10)
		{
			PLAYER::SPECIAL_ABILITY_CHARGE_ABSOLUTE(PLAYER::PLAYER_ID(), 25, true, 0);
			iLocal_417 = 4;
			iLocal_432 = 1;
			iLocal_428 = 1;
		}
		func_780();
		MISC::SET_INSTANCE_PRIORITY_HINT(2);
		ENTITY::CREATE_FORCED_OBJECT(-63f, -541f, 32f, 15f, joaat("prop_barrier_work06b"), true);
		ENTITY::CREATE_FORCED_OBJECT(-63f, -541f, 32f, 15f, joaat("prop_barrier_work06a"), true);
		AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_456[2], "JSH_2B_PLAYER_BIKE", 0f);
		AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_456[0], "JSH_2B_BUDDY_BIKES", 0f);
		if (iLocal_369 == 9 || bLocal_425 == 0)
		{
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_456[1], "JSH_2B_BUDDY_BIKES", 0f);
		}
		SYSTEM::SETTIMERA(0);
		SYSTEM::SETTIMERB(0);
		iLocal_2123 = MISC::GET_GAME_TIMER();
		RECORDING::REPLAY_RECORD_BACK_FOR_TIME(0f, 10f, 4);
	}
	else
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_436[0], false))
		{
			PED::SET_PED_RESET_FLAG(iLocal_436[0], 236, true);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_436[1], false))
		{
			PED::SET_PED_RESET_FLAG(iLocal_436[1], 236, true);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_223[3]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_223[3], false))
			{
				VEHICLE::SET_VEHICLE_COLOURS(iLocal_223[3], 14, 14);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_220[5]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_220[5], false))
			{
				VEHICLE::SET_VEHICLE_COLOURS(iLocal_220[5], 28, 28);
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_276))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_276, PLAYER::PLAYER_PED_ID(), true) || __LIB_0__::func_76(iLocal_276, PLAYER::PLAYER_PED_ID(), 1) > 60f)
			{
				PED::APPLY_DAMAGE_TO_PED(iLocal_276, 100, true, 0);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_276);
				func_935(joaat("IG_TrafficWarden"));
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_519[0]));
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iLocal_276))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_276);
			func_935(joaat("IG_TrafficWarden"));
		}
		__LIB_14__::func_655(iLocal_486[0], iLocal_456[0], 195f, 0.85f, 0);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_456[1]))
		{
			__LIB_14__::func_655(iLocal_486[1], iLocal_456[1], 195f, 0.85f, 0);
		}
		if (iLocal_396 == 0)
		{
			if (AUDIO::PREPARE_ALARM("JEWEL_STORE_HEIST_ALARMS"))
			{
				AUDIO::START_ALARM("JEWEL_STORE_HEIST_ALARMS", false);
				iLocal_396 = 1;
			}
		}
		func_921();
		if (iLocal_2117 == 0)
		{
		}
		if (iLocal_428 == 0)
		{
			if (bLocal_382)
			{
				if (AUDIO::PREPARE_MUSIC_EVENT("JH2A_ONTO_BIKE_MA"))
				{
					AUDIO::TRIGGER_MUSIC_EVENT("JH2A_ONTO_BIKE_MA");
					iLocal_428 = 1;
				}
			}
			else if (AUDIO::PREPARE_MUSIC_EVENT("JH2B_ONTO_BIKE_MA"))
			{
				AUDIO::TRIGGER_MUSIC_EVENT("JH2B_ONTO_BIKE_MA");
				iLocal_428 = 1;
			}
		}
		if (iLocal_417 >= 5)
		{
			HUD::SET_RADAR_ZOOM(1100);
			HUD::SET_RADAR_AS_INTERIOR_THIS_FRAME(MISC::GET_HASH_KEY("V_fakeTunnels"), -150f, -500f, 0, 0);
		}
		PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::PLAYER_ID());
		if (Global_96864 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_223[5]))
			{
				Global_96864 = 1;
			}
		}
		func_919();
		if (iLocal_369 == 9)
		{
			func_918();
		}
		switch (iLocal_417)
		{
			case 0:
				if (iLocal_2110 != 0)
				{
					INTERIOR::UNPIN_INTERIOR(iLocal_2110);
				}
				SYSTEM::SETTIMERA(0);
				if (__LIB_15__::func_944() != 1)
				{
					__LIB_17__::func_760(&Local_519, 1);
					func_176(&Local_519, 1, 0, 0);
					func_724(func_94(0));
					func_724(func_94(1));
				}
				WEAPON::GIVE_WEAPON_TO_PED(func_94(1), joaat("WEAPON_MICROSMG"), 200, true, true);
				if (!func_917(func_94(0), joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(func_94(0), Local_319, 1f, -1, 0.25f, 0, 40000f);
				}
				ENTITY::SET_ENTITY_INVINCIBLE(func_94(0), false);
				ENTITY::SET_ENTITY_CAN_BE_DAMAGED(func_94(0), true);
				if (ENTITY::DOES_ENTITY_EXIST(Local_519[0]))
				{
					if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(Local_519[0], true), 50f, 50f, 50f, false, true, 0))
					{
						PED::REMOVE_PED_ELEGANTLY(&(Local_519[0]));
					}
				}
				fLocal_340 = 1f;
				VEHICLE::SET_PLAYBACK_SPEED(iLocal_456[0], fLocal_340);
				func_855(iLocal_456[0], fLocal_340);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_458[0], false))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_458[0]))
					{
						VEHICLE::SET_PLAYBACK_SPEED(iLocal_458[0], fLocal_340);
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_458[1], false))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_458[1]))
					{
						VEHICLE::SET_PLAYBACK_SPEED(iLocal_458[1], fLocal_340);
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_458[2], false))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_458[2]))
					{
						VEHICLE::SET_PLAYBACK_SPEED(iLocal_458[2], fLocal_340);
					}
				}
				SYSTEM::SETTIMERA(0);
				CAM::DESTROY_CAM(iLocal_746, false);
				iLocal_417 = 3;
				func_880();
				func_855(iLocal_456[0], fLocal_340);
				break;
			case 3:
			case 4:
			case 5:
			case 6:
				func_914();
				func_907();
				if (iLocal_417 < 5)
				{
					func_906();
				}
				func_903();
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -172.83484f, -483.79898f, 33.229412f, -176.14809f, -494.0209f, 37.720833f, 4f, false, true, 0))
				{
					iLocal_431 = 1;
				}
				if (iLocal_431 == 1 && iLocal_428 == 1)
				{
					if (iLocal_417 == 3)
					{
						if (bLocal_382)
						{
							if (AUDIO::PREPARE_MUSIC_EVENT("JH2A_JUMP_OS"))
							{
								AUDIO::TRIGGER_MUSIC_EVENT("JH2A_JUMP_OS");
								iLocal_417 = 4;
							}
						}
						else if (AUDIO::PREPARE_MUSIC_EVENT("JH2B_JUMP_OS"))
						{
							AUDIO::TRIGGER_MUSIC_EVENT("JH2B_JUMP_OS");
							iLocal_417 = 4;
						}
					}
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -58.07921f, -540.8043f, 30.774742f, -68.36142f, -541.7203f, 36.437607f, 8f, false, true, 0) || iLocal_369 == 10)
				{
					iLocal_432 = 1;
				}
				if (iLocal_432 == 1)
				{
					if (iLocal_417 == 4)
					{
						if (bLocal_382)
						{
							if (AUDIO::PREPARE_MUSIC_EVENT("JH2A_ENTER_TUNNEL_MA"))
							{
								AUDIO::TRIGGER_MUSIC_EVENT("JH2A_ENTER_TUNNEL_MA");
								if (AUDIO::IS_AUDIO_SCENE_ACTIVE("JSH_2B_CHASE_START"))
								{
									AUDIO::STOP_AUDIO_SCENE("JSH_2B_CHASE_START");
								}
								RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 4f, 4);
								iLocal_2117 = 1;
								if (iLocal_2110 != 0)
								{
									INTERIOR::UNPIN_INTERIOR(iLocal_2110);
								}
								if (bLocal_382)
								{
									func_652(5, "STAGE_BIKE_CHASE_START_OF_TUNNEL", 0, 0, 0, 1);
								}
								else
								{
									func_652(4, "STAGE_BIKE_CHASE_START_OF_TUNNEL", 0, 0, 0, 1);
								}
								Global_100441.f_12[0] = iLocal_413;
								__LIB_0__::func_345(&uLocal_704, 0, 0);
								iLocal_417 = 5;
							}
						}
						else if (AUDIO::PREPARE_MUSIC_EVENT("JH2B_ENTER_TUNNEL_MA"))
						{
							if (AUDIO::IS_AUDIO_SCENE_ACTIVE("JSH_2B_CHASE_START"))
							{
								AUDIO::STOP_AUDIO_SCENE("JSH_2B_CHASE_START");
							}
							RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 4f, 4);
							AUDIO::SET_AUDIO_FLAG("OnlyAllowScriptTriggerPoliceScanner", true);
							if (iLocal_2110 != 0)
							{
								INTERIOR::UNPIN_INTERIOR(iLocal_2110);
							}
							iLocal_2117 = 1;
							AUDIO::TRIGGER_MUSIC_EVENT("JH2B_ENTER_TUNNEL_MA");
							if (bLocal_382)
							{
								func_652(5, "STAGE_BIKE_CHASE_START_OF_TUNNEL", 0, 0, 0, 1);
							}
							else
							{
								func_652(4, "STAGE_BIKE_CHASE_START_OF_TUNNEL", 0, 0, 0, 1);
							}
							Global_100441.f_12[0] = iLocal_413;
							__LIB_0__::func_345(&uLocal_704, 0, 0);
							iLocal_417 = 5;
						}
					}
				}
				if (iLocal_266 == 0 || iLocal_266 == 10)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_456[1], false))
					{
						func_901(iLocal_456[2], iLocal_456[1], &fLocal_2118);
					}
					else
					{
						func_901(iLocal_456[2], iLocal_456[0], &fLocal_2118);
					}
					fLocal_2119 = 0.01f;
					if (fLocal_340 < 1f && fLocal_257 > fLocal_340)
					{
						fLocal_2119 = (fLocal_2119 * 2f);
					}
					__LIB_28__::func_222(&fLocal_340, fLocal_2118, fLocal_2119);
					VEHICLE::SET_PLAYBACK_SPEED(iLocal_456[0], fLocal_340);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_458[1], false))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_458[1]))
						{
							VEHICLE::SET_PLAYBACK_SPEED(iLocal_456[1], fLocal_340);
						}
					}
					if ((MISC::GET_GAME_TIMER() - iLocal_2123) < 5000)
					{
						func_880();
					}
					func_855(iLocal_456[0], fLocal_340);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_458[0], false))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_458[0]))
						{
							VEHICLE::SET_PLAYBACK_SPEED(iLocal_458[0], fLocal_340);
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_458[1], false))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_458[1]))
						{
							VEHICLE::SET_PLAYBACK_SPEED(iLocal_458[1], fLocal_340);
						}
					}
				}
				if (__LIB_0__::func_564(__LIB_16__::func_594(0, 0)) == 0 && bLocal_425)
				{
					switch (iLocal_266)
					{
						case 0:
							STREAMING::REQUEST_ANIM_DICT("missheist_jewel@lost");
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_456[0], -14.763006f, -805.2279f, 15.391008f, -24.694069f, -782.25494f, 22.467754f, 21.75f, false, true, 0) && STREAMING::HAS_ANIM_DICT_LOADED("missHeist_jewel@lost"))
							{
								if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_456[0]))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_456[0]);
								}
								iLocal_2120 = 0;
								iLocal_266++;
							}
							break;
						case 1:
							if (__LIB_0__::func_213(iLocal_456[0], 15f, 1, 1056964608, 0, 1, 0))
							{
								TASK::TASK_VEHICLE_TEMP_ACTION(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_456[0], -1, false), iLocal_456[0], 6, -1);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_456[0], -1, false), true);
								iLocal_2120 = 1;
							}
							if (iLocal_2120)
							{
								RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 4);
								func_715();
								__LIB_0__::func_325();
								iLocal_266++;
							}
							break;
						case 2:
							if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								if (__LIB_17__::func_243(&uLocal_539, "JHAUD", "JH_WHICH_KD", 9, 0, 0, 0))
								{
									iLocal_2120 = 0;
									fLocal_342 = 0.1f;
									iLocal_267 = MISC::GET_GAME_TIMER();
									if (Local_748.f_0 == joaat("bati2"))
									{
										TASK::TASK_PLAY_ANIM(iLocal_436[0], "missheist_jewel@lost", "lost_idle_sports_b", 8f, -8f, -1, 0, 0f, false, false, false);
									}
									else
									{
										TASK::TASK_PLAY_ANIM(iLocal_436[0], "missheist_jewel@lost", "lost_idle_dirt_b", 8f, -8f, -1, 0, 0f, false, false, false);
									}
									TASK::TASK_LOOK_AT_ENTITY(iLocal_436[0], PLAYER::PLAYER_PED_ID(), 15000, 2048, 2);
									bLocal_2124 = false;
									iLocal_266++;
								}
							}
							break;
						case 3:
							if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_436[0], 1) > 20f)
								{
									if ((MISC::GET_GAME_TIMER() - iLocal_267) > 6000)
									{
										if (__LIB_17__::func_243(&uLocal_539, "JHAUD", "JH_WHERE_KD", 9, 0, 0, 0))
										{
											bLocal_2124 = true;
											iLocal_267 = MISC::GET_GAME_TIMER();
										}
									}
								}
								else if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_436[0], 1) < 16f)
								{
									if (bLocal_2124)
									{
										if (__LIB_17__::func_243(&uLocal_539, "JHAUD", "JH_FRANK_KD", 9, 0, 0, 0))
										{
											iLocal_266++;
										}
									}
									else
									{
										iLocal_266++;
									}
								}
							}
							break;
						case 4:
							if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								if (__LIB_17__::func_243(&uLocal_539, "JHAUD", "JH_WHICH_KD", 9, 0, 0, 0))
								{
									TASK::TASK_LOOK_AT_COORD(iLocal_436[0], -17.8649f, -809.1964f, 18.7799f, 4000, 2048, 2);
									iLocal_266 = 5;
								}
							}
							break;
						case 5:
							if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								if (__LIB_17__::func_243(&uLocal_539, "JHAUD", "JH_LOST_KD", 9, 0, 0, 0))
								{
									TASK::TASK_LOOK_AT_COORD(iLocal_436[0], -17.8649f, -809.1964f, 18.7799f, 4000, 2048, 2);
									iLocal_266++;
								}
							}
							break;
						case 6:
							if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								if (__LIB_17__::func_243(&uLocal_539, "JHAUD", "JH_UMM_KD", 9, 0, 0, 0))
								{
									TASK::TASK_LOOK_AT_COORD(iLocal_436[0], -7.7608f, -805.0465f, 18.8407f, 4000, 2048, 2);
									iLocal_266++;
								}
							}
							break;
						case 7:
							if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								if (__LIB_17__::func_243(&uLocal_539, "JHAUD", "JH_THIS_KD", 9, 0, 0, 0))
								{
									TASK::TASK_LOOK_AT_COORD(iLocal_436[0], -17.8649f, -809.1964f, 18.7799f, 4000, 2048, 2);
									iLocal_266++;
								}
							}
							break;
						case 8:
							if ((MISC::GET_GAME_TIMER() - iLocal_267) > 5000)
							{
								if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
								{
									if (__LIB_17__::func_243(&uLocal_539, "JHAUD", "JH_SETOFF_KD", 9, 0, 0, 0))
									{
										RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 4);
										VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_456[0], Local_748.f_84, Local_748.f_83, true);
										VEHICLE::SET_PLAYBACK_SPEED(iLocal_456[0], 0.1f);
										VEHICLE::SET_PLAYBACK_TO_USE_AI_TRY_TO_REVERT_BACK_LATER(iLocal_456[0], 2000, 786469, false);
										fLocal_2121 = 0f;
										iLocal_266 = 9;
									}
								}
							}
							break;
						case 9:
							if (fLocal_2121 < fLocal_257)
							{
								fLocal_2121 = (fLocal_2121 + (0.2f * SYSTEM::TIMESTEP()));
							}
							else
							{
								iLocal_266 = 10;
							}
							VEHICLE::SET_PLAYBACK_SPEED(iLocal_456[0], fLocal_2121);
							break;
						}
				}
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 77.9623f, -758.2039f, 16.7359f, 5f, 5f, 5f, false, true, 0))
				{
					if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
					{
						STREAMING::NEW_LOAD_SCENE_STOP();
					}
				}
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 124.5188f, -615.0482f, 16.7761f, 5f, 5f, 5f, false, true, 0) && iLocal_433 == 0)
				{
					if (bLocal_382)
					{
						AUDIO::TRIGGER_MUSIC_EVENT("JH2A_TUNNEL_MID");
					}
					else
					{
						AUDIO::TRIGGER_MUSIC_EVENT("JH2B_TUNNEL_MID");
					}
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 4);
					func_892();
					iLocal_433 = 1;
				}
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -65.733f, -539.4092f, 30.7915f, 25f, 25f, 30f, false, true, 0) && iLocal_427 == 0)
				{
					VEHICLE::SET_VEHICLE_LIGHTS(iLocal_456[0], 3);
					if (!bLocal_425)
					{
						VEHICLE::SET_VEHICLE_LIGHTS(iLocal_456[1], 2);
					}
					if (__LIB_17__::func_243(&uLocal_539, "JHAUD", "JH_LIGHTSON", 9, 0, 0, 0))
					{
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(10f, 5f, 4);
						iLocal_427 = 1;
					}
				}
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 1022.06f, -207.22f, 43f, 65f, 65f, 40f, false, true, 0) && iLocal_385 == 0)
				{
					__LIB_17__::func_752(0);
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 4);
					AUDIO::DISTANT_COP_CAR_SIRENS(true);
					CLOCK::SET_CLOCK_TIME(19, 20, 0);
					iLocal_385 = 1;
				}
				if (!ENTITY::DOES_ENTITY_EXIST(Local_519[0]))
				{
					if (!func_325(&(Local_519[0]), 0, 1091.118f, -260.9309f, 68.3108f, 129.7877f, 1, 0, 0))
					{
					}
					else
					{
						if (bLocal_382)
						{
							func_519(func_94(0), 12, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
						else
						{
							func_519(func_94(0), 12, 31, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_519[0], true);
					}
				}
				if (!iLocal_2007)
				{
					if (func_899())
					{
						func_898();
						iLocal_2007 = 1;
					}
				}
				if (func_897())
				{
					if (bLocal_382)
					{
						AUDIO::TRIGGER_MUSIC_EVENT("JH2A_EXIT_TUNNEL_MA");
					}
					else
					{
						AUDIO::TRIGGER_MUSIC_EVENT("JH2B_EXIT_TUNNEL_MA");
					}
					if (bLocal_382)
					{
						func_652(6, "STAGE_BIKE_CHASE_END_OF_TUNNEL", 0, 0, 0, 1);
					}
					else
					{
						func_652(5, "STAGE_BIKE_CHASE_END_OF_TUNNEL", 0, 0, 0, 1);
					}
					Global_100441.f_12[0] = iLocal_413;
					func_889();
					AUDIO::STOP_AUDIO_SCENE("JSH_2B_CHASE_ENTER_TUNNELS");
					AUDIO::SET_AUDIO_FLAG("OnlyAllowScriptTriggerPoliceScanner", true);
					fLocal_340 = func_768(iLocal_460, -7f);
					if (fLocal_340 <= 0.5f)
					{
						fLocal_340 = 0.5f;
					}
					VEHICLE::SET_PLAYBACK_SPEED(iLocal_456[0], fLocal_340);
					func_855(iLocal_456[0], fLocal_340);
					iLocal_417 = 7;
				}
				break;
		}
		if (iLocal_417 >= 7)
		{
			iLocal_416 = 0;
			while (iLocal_416 <= 2)
			{
				if (!(bLocal_425 && iLocal_416 == 1))
				{
					if (HUD::DOES_BLIP_EXIST(iLocal_486[iLocal_416]))
					{
						HUD::REMOVE_BLIP(&(iLocal_486[iLocal_416]));
					}
				}
				iLocal_416++;
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_488))
			{
				HUD::REMOVE_BLIP(&iLocal_488);
			}
			PLAYER::SET_POLICE_RADAR_BLIPS(true);
			STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
			STREAMING::SET_PED_POPULATION_BUDGET(3);
			func_895(0);
			func_895(5);
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_748.f_0, false);
			PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_464))
			{
				VEHICLE::DELETE_MISSION_TRAIN(&iLocal_464);
			}
			CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
			__LIB_15__::func_912();
			CAM::STOP_GAMEPLAY_HINT(false);
			WEAPON::REMOVE_WEAPON_ASSET(joaat("WEAPON_PISTOL"));
			iLocal_383 = 0;
			return 1;
		}
	}
	return 0;
}

void func_895(int iParam0)//Position - 0x94B12
{
	if (func_896(iParam0))
	{
		if (!AUDIO::HAS_SOUND_FINISHED(Local_737[iParam0 /*3*/]))
		{
			AUDIO::STOP_SOUND(Local_737[iParam0 /*3*/]);
		}
		AUDIO::RELEASE_SOUND_ID(Local_737[iParam0 /*3*/]);
		Local_737[iParam0 /*3*/].f_1 = 0;
		Local_737[iParam0 /*3*/].f_2 = 0;
	}
}

int func_896(int iParam0)//Position - 0x94B5C
{
	if (Local_737[iParam0 /*3*/].f_2)
	{
		return 1;
	}
	return 0;
}

int func_897()//Position - 0x94B75
{
	struct<3> Var0;
	struct<3> Var1;
	Var0 = { 1038f, -226f, 40f };
	Var1 = { 1008f, -231.5f, 55f };
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && ENTITY::DOES_ENTITY_EXIST(iLocal_456[2]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !ENTITY::IS_ENTITY_DEAD(iLocal_456[2], false))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_456[2], false))
			{
				if (iLocal_2020 == 0)
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var0, Var1, 12.5f, false, true, 0))
					{
						if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 4)
						{
							GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, false);
							AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
							iLocal_2020 = 1;
						}
					}
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var0, Var1, 5f, false, true, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_898()//Position - 0x94C53
{
	if (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(722, "JHUBER"))
	{
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_456[2]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_456[2], false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_456[2]))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_456[2]);
			}
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(iLocal_456[2], 722, "JHUBER", fLocal_2000, 262144);
			VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_456[2], fLocal_1999);
			VEHICLE::SET_PLAYBACK_SPEED(iLocal_456[2], fLocal_2001);
			VEHICLE::SET_PLAYBACK_TO_USE_AI_TRY_TO_REVERT_BACK_LATER(iLocal_456[2], iLocal_2002, 262144, false);
		}
	}
}

int func_899()//Position - 0x94CED
{
	struct<3> Var0;
	struct<3> Var1;
	Var0 = { 1007.6f, -198.4f, 35f };
	Var1 = { 1033.6f, -192.9f, 50f };
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && ENTITY::DOES_ENTITY_EXIST(iLocal_456[2]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !ENTITY::IS_ENTITY_DEAD(iLocal_456[2], false))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_456[2], false))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var0, Var1, 5f, false, true, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_901(var uParam0, int iParam1, var uParam2)//Position - 0x94DA4
{
	Local_82 = { 0f, 0f, 0f };
	Local_82.f_1 = -20f;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_456[0], false))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_456[0]))
		{
			fLocal_343 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_456[0]);
		}
	}
	if (fLocal_343 > IntToFloat(Local_748.f_118))
	{
		if (bLocal_425)
		{
			Local_82.f_1 = 45f;
		}
		else
		{
			Local_82.f_1 = 35f;
		}
	}
	else if (fLocal_343 > IntToFloat(Local_748.f_102))
	{
		if (bLocal_425)
		{
			Local_82.f_1 = 34.5f;
		}
		else
		{
			Local_82.f_1 = 24.5f;
		}
	}
	else if (fLocal_343 > IntToFloat(Local_748.f_101))
	{
		Local_82.f_1 = 26.5f;
	}
	else if (fLocal_343 > IntToFloat(Local_748.f_100))
	{
		Local_82.f_1 = 22f;
	}
	else if (fLocal_343 > IntToFloat(Local_748.f_99))
	{
		Local_82.f_1 = 25f;
	}
	else if (fLocal_343 > IntToFloat(Local_748.f_98))
	{
		Local_82.f_1 = 22f;
	}
	else if (fLocal_343 > IntToFloat(Local_748.f_97))
	{
		Local_82.f_1 = 22.5f;
	}
	else if (fLocal_343 > IntToFloat(Local_748.f_96))
	{
		Local_82.f_1 = 20f;
	}
	else if (fLocal_343 > IntToFloat(Local_748.f_95))
	{
		Local_82.f_1 = 24.5f;
	}
	else if (fLocal_343 > IntToFloat(Local_748.f_94))
	{
		Local_82.f_1 = 20f;
	}
	else if (fLocal_343 > IntToFloat(Local_748.f_93))
	{
		Local_82.f_1 = 21f;
	}
	else if (fLocal_343 > IntToFloat(Local_748.f_92))
	{
		Local_82.f_1 = 25f;
	}
	else if (fLocal_343 > IntToFloat(Local_748.f_91))
	{
		Local_82.f_1 = 25f;
	}
	else if (fLocal_343 > IntToFloat(Local_748.f_90))
	{
		Local_82.f_1 = 25f;
	}
	else if (fLocal_343 > IntToFloat(Local_748.f_89))
	{
		Local_82.f_1 = 30f;
	}
	else if (fLocal_343 > IntToFloat(Local_748.f_88))
	{
		Local_82.f_1 = 30f;
	}
	else if (fLocal_343 > IntToFloat(Local_748.f_87))
	{
		Local_82.f_1 = 22f;
	}
	else
	{
		Local_82.f_1 = 20f;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_78))
	{
		func_902(uParam2, &uParam0, iParam1, 5f, 10f, 50f, 100f, 30f, 1f, 0.4f, 0.4f, 2f, 1, (fLocal_749 * 3f), 30f, 1);
	}
	else if (((__LIB_0__::func_564(__LIB_16__::func_594(0, 0)) == 0 && bLocal_425) && fLocal_343 > 55000f) && fLocal_343 < 60000f)
	{
		func_902(uParam2, &uParam0, iParam1, 5f, 10f, 50f, 100f, 30f, 1f, 0.65f, 0.5f, 2f, 1, (fLocal_749 * 3f), 30f, 1);
	}
	else
	{
		func_902(uParam2, &uParam0, iParam1, (Local_82.f_1 * 0.85f), Local_82.f_1, 50f, 100f, 30f, 1f, 0.75f, 0.5f, 2f, 1, fLocal_749, (fLocal_749 * 2f), 1);
	}
	if (iLocal_408[4])
	{
		VEHICLE::MODIFY_VEHICLE_TOP_SPEED(iLocal_456[2], (fLocal_749 * -1f));
	}
}

void func_902(var uParam0, var uParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9, float fParam10, float fParam11, bool bParam12, float fParam13, float fParam14, int iParam15)//Position - 0x950BF
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	float fVar8;
	float fVar9;
	Var0 = { ENTITY::GET_ENTITY_COORDS(*uParam1, true) };
	Var1 = { ENTITY::GET_ENTITY_COORDS(iParam2, true) };
	Var2 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam2, Var0) };
	fVar3 = SYSTEM::VDIST(Var0, Var1);
	fVar4 = 0f;
	fVar5 = (fParam11 - 1f);
	fVar6 = (1f - fParam9);
	if (Var2.f_1 < 1f)
	{
		if (fVar3 > fParam5)
		{
			iVar7 = 0;
			if (fVar3 > fParam6)
			{
				if (fVar3 > (fParam6 * 2f))
				{
					iVar7 = 1;
				}
				fVar3 = fParam6;
			}
			fVar4 = ((fVar3 - fParam5) / (fParam6 - fParam5));
			if (!ENTITY::IS_ENTITY_ON_SCREEN(iParam2) || iVar7)
			{
				*uParam0 = (fParam9 - ((fParam9 - fParam10) * fVar4));
			}
			else
			{
				*uParam0 = fParam9;
			}
		}
		else if (fVar3 > fParam4)
		{
			fVar4 = ((fVar3 - fParam4) / (fParam5 - fParam4));
			*uParam0 = (1f - (fVar6 * fVar4));
		}
		else
		{
			if (fVar3 < fParam3)
			{
				fVar3 = fParam3;
			}
			fVar4 = ((fParam4 - fVar3) / (fParam4 - fParam3));
			if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0) && iParam15)
			{
				*uParam0 = (1f + ((fVar4 * fVar5) * 2f));
			}
			else
			{
				*uParam0 = (1f + (fVar4 * fVar5));
			}
		}
	}
	else
	{
		if (fVar3 > fParam7)
		{
			fVar3 = fParam7;
		}
		fVar4 = (fVar3 / fParam7);
		fVar8 = (ENTITY::GET_ENTITY_SPEED(iParam2) - ENTITY::GET_ENTITY_SPEED(*uParam1));
		if (fVar8 > 0f)
		{
			fVar4 = (fVar4 * 0.5f);
		}
		if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0) && iParam15)
		{
			*uParam0 = (2f + fVar4);
		}
		else if (ENTITY::GET_ENTITY_SPEED(*uParam1) < 5f && fVar8 > 0f)
		{
			*uParam0 = (0.6f + fVar4);
		}
		else
		{
			*uParam0 = (1f + fVar4);
		}
	}
	*uParam0 = (*uParam0 * fParam8);
	if (bParam12)
	{
		fVar9 = fParam13;
		if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0) && iParam15)
		{
			fParam14 = (fParam14 * 2f);
			fParam13 = (fParam13 * 2f);
		}
		if (*uParam0 > 1f)
		{
			fVar9 = (fParam13 + ((fParam14 - fParam13) * (*uParam0 - 1f)));
		}
		VEHICLE::MODIFY_VEHICLE_TOP_SPEED(*uParam1, -fVar9);
	}
}

void func_903()//Position - 0x952A6
{
	if (!PED::IS_PED_IN_VEHICLE(func_94(1), iLocal_456[2], false))
	{
		if (!HUD::DOES_BLIP_EXIST(iLocal_488))
		{
			iLocal_488 = __LIB_0__::func_639(iLocal_456[2], 0, 0);
			func_904("G_BIKE", 0, 1, 1, 7500);
		}
		func_849(&(iLocal_486[0]));
		func_849(&(iLocal_486[1]));
	}
	else
	{
		func_849(&iLocal_488);
		if (!HUD::DOES_BLIP_EXIST(iLocal_486[0]))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_456[0]))
			{
				iLocal_486[0] = __LIB_0__::func_639(iLocal_456[0], 0, 0);
			}
		}
		if (!HUD::DOES_BLIP_EXIST(iLocal_486[1]))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_456[1]))
			{
				iLocal_486[1] = __LIB_0__::func_639(iLocal_456[1], 0, 0);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_456[1]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_456[1], false))
		{
			if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_456[1]))
			{
				func_849(&(iLocal_486[1]));
			}
		}
	}
	else
	{
		func_849(&(iLocal_486[1]));
	}
}

void func_904(char* sParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)//Position - 0x953A9
{
	bool bVar0;
	bool bVar1;
	if (iLocal_726 != MISC::GET_HASH_KEY(sParam0))
	{
		bVar0 = false;
	}
	else
	{
		bVar0 = true;
	}
	bVar1 = true;
	if (bParam3)
	{
		bVar1 = false;
	}
	if (bParam1)
	{
		func_716(1, 1, 1);
		func_715();
	}
	else if (bParam2)
	{
		if (!bVar0)
		{
			func_716(bParam2, bParam2, bVar1);
		}
	}
	if (((bParam1 || (bParam2 && !bVar0)) || !bLocal_722) || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
	{
		__LIB_0__::func_229(sParam0, iParam4, 1);
		func_905(sParam0);
		bLocal_722 = true;
	}
}

void func_905(char* sParam0)//Position - 0x95436
{
	iLocal_726 = MISC::GET_HASH_KEY(sParam0);
}

void func_906()//Position - 0x95447
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_456[0], false))
	{
		__LIB_17__::func_71(&uLocal_704, iLocal_456[0], "H_HELPFOCUS", 0, 1, 0, 1);
	}
}

void func_907()//Position - 0x95474
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<3> Var5;
	if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_456[0]))
	{
		fLocal_343 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_456[0]);
	}
	if (Global_96862 == 0)
	{
		if (fLocal_343 > 23480.4f)
		{
			Global_96862 = 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_2030))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_2030, false))
		{
			if (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iLocal_2030)))
			{
				AUDIO::SET_HORN_PERMANENTLY_ON(iLocal_2030);
			}
		}
	}
	else
	{
		iLocal_2030 = VEHICLE::GET_CLOSEST_VEHICLE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 30f, 0, 0);
	}
	if (!iLocal_393)
	{
		if (ENTITY::IS_ENTITY_AT_COORD(iLocal_456[2], Local_322, 6f, 6f, 6f, false, false, 0))
		{
			iLocal_416 = 0;
			while (iLocal_416 <= 3)
			{
				if (HUD::DOES_BLIP_EXIST(uLocal_489[iLocal_416]))
				{
					HUD::REMOVE_BLIP(&(uLocal_489[iLocal_416]));
				}
				iLocal_458[iLocal_416] = VEHICLE::CREATE_VEHICLE(Local_748.f_14, VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(Local_748.f_84, 0f, Local_748.f_76[iLocal_416]), 0f, true, true, false);
				iLocal_441[iLocal_416] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_458[iLocal_416], 6, Local_748.f_15, -1, true, true);
				func_767(iLocal_441[iLocal_416], 0);
				iLocal_442[iLocal_416] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_458[iLocal_416], 6, Local_748.f_15, 0, true, true);
				func_767(iLocal_442[iLocal_416], 0);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_441[iLocal_416]));
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_442[iLocal_416]));
				VEHICLE::SET_VEHICLE_SIREN(iLocal_458[iLocal_416], true);
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_458[iLocal_416], Local_748.f_84, Local_748.f_76[iLocal_416], true);
				VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_458[iLocal_416], 0f);
				fLocal_459[iLocal_416] = 0.5f;
				VEHICLE::SET_PLAYBACK_SPEED(iLocal_458[iLocal_416], fLocal_459[iLocal_416]);
				iLocal_416++;
			}
			iLocal_393 = 1;
		}
	}
	iLocal_416 = 0;
	while (iLocal_416 <= 34)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_223[iLocal_416]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_223[iLocal_416], false))
			{
				if (ENTITY::GET_ENTITY_MODEL(iLocal_223[iLocal_416]) == joaat("ambulance"))
				{
					if (!VEHICLE::IS_VEHICLE_SIREN_ON(iLocal_223[iLocal_416]))
					{
						VEHICLE::SET_VEHICLE_SIREN(iLocal_223[iLocal_416], true);
						AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_223[iLocal_416], true);
					}
				}
				if (ENTITY::IS_ENTITY_UPSIDEDOWN(iLocal_223[iLocal_416]))
				{
					iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
					iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
					if (__LIB_12__::func_390(ENTITY::GET_ENTITY_MODEL(iLocal_223[iLocal_416])))
					{
						if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iLocal_223[iLocal_416], iVar0))
						{
							VEHICLE::SET_VEHICLE_DOOR_BROKEN(iLocal_223[iLocal_416], iVar0, false);
							VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_223[iLocal_416], iVar1, false, false);
						}
					}
				}
				if (__LIB_12__::func_390(ENTITY::GET_ENTITY_MODEL(iLocal_223[iLocal_416])))
				{
					if (!VEHICLE::IS_VEHICLE_SIREN_ON(iLocal_223[iLocal_416]))
					{
						VEHICLE::SET_VEHICLE_SIREN(iLocal_223[iLocal_416], true);
						AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_223[iLocal_416], true);
					}
					if (((VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_223[iLocal_416]) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_223[iLocal_416]) > 5000f) && ENTITY::GET_ENTITY_SPEED(iLocal_223[iLocal_416]) < 1f) && !VEHICLE::IS_VEHICLE_MODEL(iLocal_223[iLocal_416], joaat("polmav")))
					{
						if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_223[iLocal_416], -1, false))
						{
							iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_223[iLocal_416], -1, false);
							if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !PED::IS_PED_INJURED(iVar2))
							{
								WEAPON::GIVE_WEAPON_TO_PED(iVar2, joaat("WEAPON_PISTOL"), -1, true, true);
								PED::SET_PED_COMBAT_ATTRIBUTES(iVar2, 1, false);
								TASK::TASK_DRIVE_BY(iVar2, func_94(1), 0, 0f, 0f, 0f, 150f, 100, true, joaat("FIRING_PATTERN_FULL_AUTO"));
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(iVar2, ENTITY::GET_ENTITY_COORDS(iVar2, true), 5.5f, false, false);
								PED::SET_PED_KEEP_TASK(iVar2, true);
								ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar2);
							}
						}
					}
					if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_223[iLocal_416], 0, false) && iLocal_263[iLocal_416] == 0)
					{
						iVar4 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_223[iLocal_416], 6, joaat("S_M_Y_Cop_01"), 0, true, true);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar4, true);
						WEAPON::GIVE_WEAPON_TO_PED(iVar4, joaat("WEAPON_PISTOL"), -1, true, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(iVar4, 1, false);
						iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_456[iVar3]))
						{
							if (ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_456[iVar3], -1, false)))
							{
								TASK::TASK_DRIVE_BY(iVar4, VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_456[iVar3], -1, false), 0, 0f, 0f, 0f, 700f, 100, true, joaat("FIRING_PATTERN_FULL_AUTO"));
							}
						}
						else
						{
							TASK::TASK_DRIVE_BY(iVar4, func_94(1), 0, 0f, 0f, 0f, 150f, 100, true, joaat("FIRING_PATTERN_FULL_AUTO"));
						}
						PED::SET_PED_KEEP_TASK(iVar4, true);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar4);
						iLocal_263[iLocal_416] = 1;
					}
				}
			}
		}
		iLocal_416++;
	}
	iLocal_416 = 0;
	while (iLocal_416 <= 16)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_222[iLocal_416]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_222[iLocal_416], false))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(iLocal_222[iLocal_416], -5.679473f, -524.588f, 34.294395f, 69.3125f, 16.25f, 4f, false, false, 0))
				{
					if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_222[iLocal_416], -1, false))
					{
						if (PED::CAN_CREATE_RANDOM_PED(false))
						{
							PED::CREATE_RANDOM_PED_AS_DRIVER(iLocal_222[iLocal_416], true);
							VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_222[iLocal_416], true, true, false);
						}
					}
				}
			}
		}
		iLocal_416++;
	}
	if (!iLocal_404)
	{
		if (ENTITY::IS_ENTITY_AT_COORD(func_94(1), 1042.1293f, -278.9554f, 49.519f, 28f, 24.4f, 13.75f, false, true, 0))
		{
			iLocal_444 = PED::CREATE_PED(6, Local_748.f_15, 1042.1293f, -278.9554f, 49.519f, 65.9411f, true, true);
			iLocal_445 = PED::CREATE_PED(6, Local_748.f_15, 1044.8005f, -301.9515f, 48.7054f, 133.1042f, true, true);
			iLocal_446 = PED::CREATE_PED(6, Local_748.f_15, 1047.8716f, -299.8919f, 49.1066f, 7.8463f, true, true);
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_444, 1042.1293f, -278.9554f, 49.519f, 2f, false, false);
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_445, 1044.8005f, -301.9515f, 48.7054f, 2f, false, false);
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_446, 1047.8716f, -299.8919f, 49.1066f, 2f, false, false);
			func_767(iLocal_444, 0);
			func_767(iLocal_445, 0);
			func_767(iLocal_446, 0);
			iLocal_404 = 1;
		}
	}
	if (bLocal_425)
	{
		STREAMING::REQUEST_MODEL(joaat("prop_cs_heist_bag_02"));
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_456[1]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_456[1], false))
			{
				if (!PED::IS_PED_INJURED(iLocal_436[1]))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_456[1]))
					{
						if (fLocal_343 > 34174f)
						{
							STREAMING::REQUEST_COLLISION_AT_COORD(-125.4693f, -522.0388f, 28.9007f);
						}
						if (fLocal_343 > 45174f)
						{
							PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iLocal_436[1], 2);
							if (PED::CAN_KNOCK_PED_OFF_VEHICLE(iLocal_436[1]))
							{
								AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Gunman_Bike_Crash", iLocal_456[1], "JEWEL_HEIST_SOUNDS", false, 0);
								__LIB_0__::func_709(iLocal_436[1], "JH_FPAA", "NORM", 4);
								if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_223[0]))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_223[0]);
								}
								if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_456[1]))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_456[1]);
								}
								func_9(iLocal_436[1], 0, 0);
								ENTITY::SET_ENTITY_PROOFS(iLocal_436[1], false, false, false, false, false, false, false, false);
								PED::SET_PED_CAN_RAGDOLL(iLocal_436[1], true);
								PED::SET_PED_CAN_BE_DRAGGED_OUT(iLocal_436[1], true);
								ENTITY::SET_ENTITY_PROOFS(iLocal_456[1], false, false, false, false, false, false, false, false);
								PED::KNOCK_PED_OFF_VEHICLE(iLocal_436[1]);
								ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_436[1], 1, 0f, 3f, 1f, 0f, 0f, 0.3f, 0, true, true, true, false, true);
								ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_456[1], 1, 1f, 0.5f, 0f, 0f, 0.3f, 0f, 0, true, true, true, false, true);
								Var5 = { ENTITY::GET_ENTITY_COORDS(iLocal_436[1], true) };
								MISC::GET_GROUND_Z_FOR_3D_COORD(Var5, &(Var5.f_2), false, false);
								iLocal_78 = OBJECT::CREATE_OBJECT(joaat("prop_cs_heist_bag_02"), Var5, true, true, false);
								iLocal_2028 = __LIB_0__::func_643(iLocal_78);
								iLocal_79 = 0;
								Local_80 = { ENTITY::GET_ENTITY_VELOCITY(iLocal_456[1]) };
								if ((iLocal_413 / 3) * 2 < 2741082)
								{
									iLocal_414 = (iLocal_413 - 2741082);
									iLocal_413 = 2741082;
								}
								else
								{
									iLocal_414 = (iLocal_413 / 3);
									iLocal_413 = (iLocal_413 / 3) * 2;
								}
								func_112(0);
								if (!PED::IS_PED_INJURED(iLocal_436[1]))
								{
									ENTITY::SET_ENTITY_HEALTH(iLocal_436[1], 99, 0);
								}
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_456[1], false))
								{
									ENTITY::SET_ENTITY_HEALTH(iLocal_456[1], 0, 0);
									VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_456[1], 0f);
								}
								func_114();
							}
						}
						else
						{
							ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_436[1], true);
							ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_456[1], true);
						}
					}
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_78))
		{
			if (ENTITY::DOES_ENTITY_HAVE_PHYSICS(iLocal_78) && iLocal_79 == 0)
			{
				ENTITY::SET_ENTITY_VELOCITY(iLocal_78, Local_80);
				iLocal_79 = 1;
			}
		}
		if (iLocal_426 == 0 && fLocal_343 > 46500f)
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -171.15495f, -488.45288f, 25.97522f, -63.240566f, -537.0475f, 40.2474f, 64.75f, false, true, 0))
			{
				func_709(Local_748.f_148, 1, 1, 1, 7, 0, 0);
				if (func_120())
				{
					func_762("JH_GDIE_ET", 0, 0, 1);
				}
				else
				{
					func_762("JH_GDIE_KD", 0, 0, 1);
				}
				iLocal_426 = 1;
			}
		}
	}
	else
	{
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_436[1], true);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_456[1], true);
	}
	if (bLocal_399)
	{
		func_910(Local_748.f_12);
		func_910(Local_748.f_14);
		func_910(Local_748.f_15);
		func_908(Local_748.f_82, Local_748.f_84);
		func_126(0, 1, 0, 0);
		func_126(0, 2, 0, 0);
		if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_748.f_84, Local_748.f_82) && STREAMING::HAS_MODEL_LOADED(Local_748.f_12))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_460) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_460, false))
			{
				iLocal_460 = VEHICLE::CREATE_VEHICLE(Local_748.f_12, VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(Local_748.f_84, 0f, Local_748.f_82), 135f, true, true, false);
				func_890(iLocal_460);
				VEHICLE::SET_VEHICLE_COLOURS(iLocal_460, 128, 3);
				VEHICLE::SET_VEHICLE_EXTRA(iLocal_460, 6, false);
			}
			else
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_460, VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(Local_748.f_84, 0f, Local_748.f_82), true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(iLocal_460, 135f);
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(func_94(0)) || PED::IS_PED_INJURED(func_94(0)))
		{
			func_325(&(Local_519[0]), 0, Local_323, 147.6818f, 1, 0, 0);
		}
		else
		{
			ENTITY::SET_ENTITY_COORDS(func_94(0), Local_323, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(func_94(0), 147.6818f);
		}
		if (__LIB_17__::func_780(__LIB_16__::func_594(0, 2)))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_436[2]) || PED::IS_PED_INJURED(iLocal_436[2]))
			{
				iLocal_436[2] = __LIB_17__::func_787(0, 2, Local_324, 261.2985f, 0, 1);
			}
			else
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_436[2], Local_324, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(iLocal_436[2], 261.2985f);
			}
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_436[2], joaat("WEAPON_PISTOL"), -1, true, true);
		}
	}
}

void func_908(char* sParam0, int iParam1)//Position - 0x95F4E
{
	int iVar0;
	iVar0 = func_909(sParam0, iParam1);
	if (iVar0 != -1)
	{
		if (!Local_743[iVar0 /*4*/].f_3)
		{
			func_130(Local_743[iVar0 /*4*/].f_1, Local_743[iVar0 /*4*/], 0, 0, 0);
			Local_743[iVar0 /*4*/].f_2 = 1;
		}
	}
}

int func_909(char* sParam0, int iParam1)//Position - 0x95F94
{
	int iVar0;
	bool bVar1;
	int iVar2;
	iVar0 = -1;
	bVar1 = false;
	iVar2 = 0;
	while (!bVar1)
	{
		if (MISC::ARE_STRINGS_EQUAL(Local_743[iVar2 /*4*/], sParam0) && Local_743[iVar2 /*4*/].f_1 == iParam1)
		{
			bVar1 = true;
			iVar0 = iVar2;
		}
		else
		{
			iVar2++;
			if (iVar2 >= iLocal_742)
			{
				bVar1 = true;
			}
		}
	}
	return iVar0;
}

void func_910(int iParam0)//Position - 0x95FEC
{
	int iVar0;
	iVar0 = func_911(iParam0);
	if (iVar0 != -1)
	{
		if (!Local_739[iVar0 /*3*/].f_2)
		{
			func_132(Local_739[iVar0 /*3*/], 0, 0, 0);
			Local_739[iVar0 /*3*/].f_1 = 1;
		}
	}
}

int func_911(int iParam0)//Position - 0x96027
{
	int iVar0;
	bool bVar1;
	int iVar2;
	iVar0 = -1;
	bVar1 = false;
	iVar2 = 0;
	while (!bVar1)
	{
		if (Local_739[iVar2 /*3*/] == iParam0)
		{
			bVar1 = true;
			iVar0 = iVar2;
		}
		else
		{
			iVar2++;
			if (iVar2 >= iLocal_738)
			{
				bVar1 = true;
			}
		}
	}
	return iVar0;
}

void func_914()//Position - 0x960D3
{
	if (!iLocal_403)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(func_94(0)))
		{
			func_114();
			iLocal_403 = 1;
		}
	}
	if (!iLocal_408[0])
	{
		if (ENTITY::IS_ENTITY_AT_COORD(iLocal_456[0], -777.4823f, -259.3957f, 45.095806f, 11.0625f, 14.5625f, 9f, false, true, 0))
		{
			func_916("JH_SHARPLE", "JH_SHARPLT", "JH_LOSTF");
			if (!Global_96863)
			{
				if (func_118())
				{
					func_762(Local_748.f_194, 0, 0, 1);
				}
				else
				{
					func_762("JH_FRENCO", 0, 0, 1);
				}
			}
			iLocal_408[0] = 1;
		}
	}
	if (!iLocal_408[1])
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_456[0], -295.63718f, -425.58954f, 28.487122f, -291.26584f, -364.64767f, 33.50071f, 14.25f, false, true, 0))
		{
			func_915("JH_BRIDE", "JH_BRIDT", "JH_LOSTF");
			iLocal_408[1] = 1;
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("JSH_2B_CHASE_POLICE_AT_BRIDGE"))
			{
				AUDIO::START_AUDIO_SCENE("JSH_2B_CHASE_POLICE_AT_BRIDGE");
			}
		}
	}
	if (!iLocal_408[2])
	{
		if (ENTITY::IS_ENTITY_AT_COORD(iLocal_456[0], -176.02953f, -486.39355f, 42.424618f, 46f, 40f, 9f, false, true, 0))
		{
			iLocal_408[2] = 1;
		}
	}
	if (ENTITY::IS_ENTITY_AT_COORD(iLocal_456[0], -176.02953f, -486.39355f, 42.424618f, 5f, 5f, 9f, false, true, 0))
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("JSH_2B_CHASE_JUMP_FREEWAY"))
		{
			AUDIO::START_AUDIO_SCENE("JSH_2B_CHASE_JUMP_FREEWAY");
		}
	}
	if (!iLocal_408[3])
	{
		if (iLocal_408[2] == 1)
		{
			if (!bLocal_425)
			{
				func_915("JH_OFFE", "JH_OFFT", "JH_OFFK");
			}
			if (func_115())
			{
				func_762("JH_JUMP_NR", 0, 0, 1);
				func_762("JH_LSCN_NR", 0, 0, 1);
			}
			else if (func_116())
			{
				func_762("JH_JUMP_GM", 0, 0, 1);
			}
			else if (func_117())
			{
				func_762("JH_JUMP_PM", 0, 0, 1);
			}
			func_915("JH_RIGHTE", "JH_RIGHTT", "JH_LOSTF");
			iLocal_408[3] = 1;
		}
	}
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -60.5417f, -543.5551f, 30.8804f, 8f, 8f, 8f, false, true, 0))
	{
		if (bLocal_425)
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_436[1]));
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_456[1]));
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("JSH_2B_CHASE_POLICE_AT_BRIDGE"))
		{
			AUDIO::STOP_AUDIO_SCENE("JSH_2B_CHASE_POLICE_AT_BRIDGE");
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("JSH_2B_CHASE_JUMP_FREEWAY"))
		{
			AUDIO::STOP_AUDIO_SCENE("JSH_2B_CHASE_JUMP_FREEWAY");
		}
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("JSH_2B_CHASE_ENTER_TUNNELS"))
		{
			AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_JSH_2A_04", 0f);
			AUDIO::START_AUDIO_SCENE("JSH_2B_CHASE_ENTER_TUNNELS");
		}
	}
	if (!iLocal_408[4])
	{
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -65.733f, -539.4092f, 30.7915f, 42f, 42f, 30f, false, true, 0))
		{
			PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 6.5f);
			VEHICLE::SET_VEHICLE_LIGHTS(iLocal_456[0], 2);
			if (!bLocal_425)
			{
				VEHICLE::SET_VEHICLE_LIGHTS(iLocal_456[1], 2);
			}
			VEHICLE::SET_VEHICLE_LIGHTS(iLocal_456[2], 3);
			VEHICLE::SET_VEHICLE_FULLBEAM(iLocal_456[0], true);
			if (!bLocal_425)
			{
				VEHICLE::SET_VEHICLE_FULLBEAM(iLocal_456[1], true);
			}
			VEHICLE::SET_VEHICLE_FULLBEAM(iLocal_456[2], true);
			AUDIO::DISTANT_COP_CAR_SIRENS(false);
			AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK(Local_748.f_244);
			iLocal_408[4] = 1;
			iLocal_408[1] = 1;
		}
	}
	if (!iLocal_408[5])
	{
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -32.7017f, -578.515f, 27.3165f, 5f, 5f, 5f, false, true, 0))
		{
			iLocal_408[5] = 1;
		}
	}
	if (!iLocal_408[6])
	{
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 20.5861f, -647.6309f, 15.0881f, 5f, 5f, 5f, false, true, 0))
		{
			func_915("JH_TUNNELE", "JH_TUNNELT", "JH_TUNNELK");
			func_915("JH_SPLITE", "JH_SPLITT", "JH_SPLITK");
			iLocal_408[6] = 1;
		}
	}
	if (!iLocal_408[7])
	{
		if (ENTITY::IS_ENTITY_AT_COORD(iLocal_456[0], 2.365517f, -633.196f, 18.06596f, 21.3125f, 20f, 3.5625f, false, true, 0))
		{
			iLocal_408[7] = 1;
		}
	}
	if (!iLocal_408[8])
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_456[0], -14.763006f, -805.2279f, 15.391008f, -24.694069f, -782.25494f, 22.467754f, 21.75f, false, true, 0))
		{
			iLocal_408[8] = 1;
		}
	}
	if (!iLocal_408[9])
	{
		if (ENTITY::IS_ENTITY_AT_COORD(iLocal_456[0], 49.1018f, -801.2584f, 16.8009f, 15f, 15f, 4f, false, true, 0))
		{
			func_915("JH_MUDE", "JH_MUDT", "JH_MUDK");
			if (Local_748.f_0 == joaat("bati2"))
			{
				func_762("JH_SHITBIKE", 0, 0, 1);
			}
			else if (func_116())
			{
				func_762("JH_BIKEG_GM", 0, 0, 1);
			}
			else if (func_117())
			{
				func_762("JH_BIKEG_PM", 0, 0, 1);
			}
			func_915("JH_COMP_ET", "JH_COMP_ET", "JH_COMP_KD");
			iLocal_408[9] = 1;
		}
	}
	if (ENTITY::IS_ENTITY_IN_AIR(iLocal_456[2]))
	{
		PLAYER::SPECIAL_ABILITY_CHARGE_CONTINUOUS(PLAYER::PLAYER_ID(), 1, 0);
	}
	if (iLocal_2029 == 0)
	{
		if (PLAYER::IS_SPECIAL_ABILITY_ENABLED(PLAYER::PLAYER_ID(), 0))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 124.5188f, -615.0482f, 16.7761f, 5f, 5f, 5f, false, true, 0))
			{
				PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 10.5f);
				if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
				{
					__LIB_0__::func_151("JWL_ABILITY_KM", 12000);
				}
				else
				{
					__LIB_0__::func_151("JWL_ABILITY", 12000);
				}
				iLocal_2029 = 1;
			}
		}
	}
	if (!iLocal_408[10])
	{
		if (ENTITY::IS_ENTITY_AT_COORD(iLocal_456[0], 122.4857f, -612.9412f, 16.7999f, 15f, 15f, 4f, false, true, 0))
		{
			if (!func_118())
			{
				if (bLocal_425)
				{
					func_915("JH_LEFTE2", "JH_LEFTT2", "JH_LEFTK2");
				}
			}
			iLocal_408[10] = 1;
		}
	}
	if (!iLocal_408[11])
	{
		if (ENTITY::IS_ENTITY_AT_COORD(iLocal_456[0], 230.4518f, -504.3735f, 23.5882f, 11f, 10f, 4f, false, true, 0))
		{
			PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 6.5f);
			func_915("JH_CORRE", "JH_CORRT", "JH_CORRK");
			iLocal_408[11] = 1;
		}
	}
	if (!iLocal_408[12])
	{
		if (ENTITY::IS_ENTITY_AT_COORD(iLocal_456[0], 337.6855f, -454.0294f, 22.505f, 11f, 10f, 4f, false, true, 0))
		{
			func_915("JH_LIPE", "JH_LIPT", "JH_LIPK");
			iLocal_408[12] = 1;
		}
	}
	if (!iLocal_408[13])
	{
		if (ENTITY::IS_ENTITY_AT_COORD(iLocal_456[0], 421.6507f, -495.5566f, 7.7602f, 11f, 10f, 4f, false, true, 0))
		{
			func_915("JH_LEFLEFE", "JH_LEFLEFT", "JH_LEFLEFK");
			iLocal_408[13] = 1;
		}
	}
	if (!iLocal_408[13])
	{
		if (ENTITY::IS_ENTITY_AT_COORD(iLocal_456[0], 551.4762f, -520.8657f, -4.4253f, 11f, 10f, 4f, false, true, 0))
		{
			func_915("JH_GATEE", "JH_GATET", "JH_GATEK");
			iLocal_408[13] = 1;
		}
	}
	if (!iLocal_408[14])
	{
		if (ENTITY::IS_ENTITY_AT_COORD(iLocal_456[0], 134.773f, -606.3827f, 19.62934f, 15.875f, 15f, 3.125f, false, true, 0))
		{
			iLocal_408[14] = 1;
		}
	}
	if (!iLocal_408[15])
	{
		if (ENTITY::IS_ENTITY_AT_COORD(iLocal_456[0], 1015.7123f, -181.0643f, 39.7388f, 80.75f, 70.5625f, 30.25f, false, true, 0))
		{
			func_915("JH_HILLE", "JH_HILLT", "JH_HILLK");
			switch (__LIB_0__::func_564(__LIB_16__::func_594(0, 2)))
			{
				case 2:
					func_762("JH_HCKARIVER", 0, 0, 1);
					break;
				case 1:
					func_762("JH_HCKBRIVER", 0, 0, 1);
					break;
				case 0:
					func_762("JH_HCKCRIVER", 0, 0, 1);
					break;
			}
			iLocal_408[15] = 1;
		}
	}
	if (!iLocal_408[16])
	{
		if (ENTITY::IS_ENTITY_AT_COORD(iLocal_456[0], 595.4016f, -437.2173f, -4.3002f, 10.75f, 4.5625f, 4.25f, false, true, 0))
		{
			func_915("JH_CLIMBE", "JH_CLIMBT", "JH_CLIMBK");
			iLocal_408[16] = 1;
		}
	}
	if (!iLocal_408[17])
	{
		if (ENTITY::IS_ENTITY_AT_COORD(iLocal_456[0], 1034.2031f, -285.5826f, 49.1856f, 6f, 6f, 6f, false, true, 0))
		{
			func_762(Local_748.f_128, 0, 0, 1);
			iLocal_408[17] = 1;
		}
	}
	if (!iLocal_408[18])
	{
		if (ENTITY::IS_ENTITY_AT_COORD(iLocal_456[0], 833.7619f, -294.1365f, 4.4777f, 11f, 10f, 4f, false, true, 0))
		{
			func_915("JH_TRUCKE", "JH_TRUCKT", "JH_TRUCKK");
			iLocal_408[18] = 1;
		}
	}
	if (!bLocal_722 && !bLocal_721)
	{
		if (!func_761())
		{
			if (((!func_760() && (iLocal_266 == 0 || iLocal_266 == 10)) && __LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_456[0], 1) < 80f) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				if ((SYSTEM::TIMERA() > 10000 && iLocal_2029) && iLocal_408[14] == 0)
				{
					SYSTEM::SETTIMERA(0);
					if (iLocal_408[6] && !iLocal_408[15])
					{
						if (!bLocal_425)
						{
							func_709(Local_748.f_195, 1, 1, 1, 7, 0, 0);
						}
					}
					else if (!iLocal_408[15])
					{
						if (func_118())
						{
							func_709(Local_748.f_194, 1, 1, 1, 7, 0, 0);
						}
						else
						{
							func_709("JH_FRENCO", 1, 1, 1, 7, 0, 0);
						}
					}
				}
			}
		}
	}
}

void func_915(char* sParam0, char* sParam1, char* sParam2)//Position - 0x96AB7
{
	if (func_120())
	{
		func_762(sParam0, 0, 0, 1);
	}
	else if (func_119())
	{
		func_762(sParam1, 0, 0, 1);
	}
	else if (func_118())
	{
		func_762(sParam2, 0, 0, 1);
	}
}

void func_916(char* sParam0, char* sParam1, char* sParam2)//Position - 0x96AF5
{
	if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_456[0], 1) < 95f)
	{
		if (func_120())
		{
			func_709(sParam0, 1, 1, 1, 7, 0, 0);
		}
		else if (func_119())
		{
			func_709(sParam1, 1, 1, 1, 7, 0, 0);
		}
		else if (func_118())
		{
			if (HUD::GET_LENGTH_OF_LITERAL_STRING(sParam2) > 0)
			{
				func_709(sParam2, 1, 1, 1, 7, 0, 0);
			}
		}
	}
}

int func_917(int iParam0, int iParam1)//Position - 0x96B61
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

void func_918()//Position - 0x96B8F
{
	int iVar0;
	if (Global_96863)
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_456[0]))
		{
			if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_456[0]) > 5753.612f)
			{
				if (!iLocal_398)
				{
					iLocal_416 = 0;
					while (iLocal_416 <= 2)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_458[iLocal_416], false))
						{
							if (!PED::IS_PED_INJURED(iLocal_441[iLocal_416]))
							{
								if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_458[iLocal_416]))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_458[iLocal_416]);
									VEHICLE::BRING_VEHICLE_TO_HALT(iLocal_458[iLocal_416], 3f, -1, false);
								}
								else if (VEHICLE::IS_VEHICLE_STOPPED(iLocal_458[iLocal_416]))
								{
									PED::SET_PED_ACCURACY(iLocal_441[iLocal_416], 0);
									WEAPON::GIVE_WEAPON_TO_PED(iLocal_441[iLocal_416], joaat("WEAPON_PISTOL"), 1000, true, true);
									PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_441[iLocal_416], iLocal_499);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_441[iLocal_416], false);
									TASK::OPEN_SEQUENCE_TASK(&iLocal_480);
									TASK::TASK_PAUSE(0, MISC::GET_RANDOM_INT_IN_RANGE(0, 1000));
									TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 200f, 0);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_480);
									TASK::TASK_PERFORM_SEQUENCE(iLocal_441[iLocal_416], iLocal_480);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_480);
									iLocal_398 = 1;
								}
								else
								{
									VEHICLE::BRING_VEHICLE_TO_HALT(iLocal_458[iLocal_416], 3f, -1, false);
								}
							}
						}
						iLocal_416++;
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_223[33]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_223[33], false))
				{
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_223[33], true);
					if (ENTITY::GET_ENTITY_HEALTH(iLocal_223[33]) < 850)
					{
						iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_223[33], -1, false);
						if (!PED::IS_PED_INJURED(iVar0) && ENTITY::GET_ENTITY_HEALTH(iVar0) > 0)
						{
							ENTITY::SET_ENTITY_HEALTH(iVar0, 0, 0);
							ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
							if (func_116())
							{
								func_709("JH_GET_COPRE", 1, 1, 1, 7, 0, 0);
							}
							else if (func_117())
							{
								func_709("JH_THNX_PM", 1, 1, 1, 7, 0, 0);
							}
							else if (func_115())
							{
								func_709("JH_THNX_NR", 1, 1, 1, 7, 0, 0);
							}
							if (func_120())
							{
								func_762("JH_GOOD_ET", 0, 0, 1);
							}
							else if (func_118())
							{
								func_762("JH_GOOD_KD", 0, 0, 1);
							}
						}
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_223[33]);
					}
					else if ((MISC::GET_GAME_TIMER() - iLocal_2108) > 4500 && __LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_456[0], 1) < 100f)
					{
						if (iLocal_2109 == 0)
						{
							if (func_117())
							{
								func_762("JH_COPOFF_PM", 0, 0, 1);
							}
							else if (func_116())
							{
								func_762("JH_COPOFF_GM", 0, 0, 1);
							}
							else if (func_115())
							{
								func_762("JH_COPOFF_NR", 0, 0, 1);
							}
							iLocal_2109 = 1;
						}
						else if (func_117())
						{
							func_762("JH_GET_COPCP", 0, 0, 1);
						}
						else if (func_116())
						{
							func_762("JH_GET_COPCR", 0, 0, 1);
						}
						else if (func_115())
						{
							func_762("JH_GET_COPCN", 0, 0, 1);
						}
						iLocal_2108 = MISC::GET_GAME_TIMER();
					}
				}
			}
		}
	}
}

void func_919()//Position - 0x96E79
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	if ((MISC::GET_GAME_TIMER() - iLocal_2107) > 3000)
	{
		if (!__LIB_0__::func_75())
		{
			iVar0 = VEHICLE::GET_CLOSEST_VEHICLE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 10f, 0, __LIB_15__::func_916());
			if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
			{
				bVar2 = false;
				iVar3 = 0;
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar0, iLocal_456[2]))
				{
					bVar2 = true;
				}
				else if (MISC::ABSF(ENTITY::GET_ENTITY_SPEED(iVar0)) > 2f)
				{
					if (MISC::ABSF((ENTITY::GET_ENTITY_HEADING(iVar0) - ENTITY::GET_ENTITY_HEADING(iLocal_456[2]))) > 60f)
					{
						iVar3 = 1;
					}
				}
				if (bVar2 || iVar3)
				{
					iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false);
					if (!PED::IS_PED_INJURED(iVar1))
					{
						if (bVar2)
						{
							__LIB_0__::func_640(iVar1, "GENERIC_CURSE_HIGH", 5);
						}
						else
						{
							__LIB_0__::func_640(iVar1, "GENERIC_INSULT_HIGH", 5);
						}
						iLocal_2107 = MISC::GET_GAME_TIMER();
					}
				}
			}
		}
	}
}

void func_921()//Position - 0x96F59
{
	switch (iLocal_2111)
	{
		case 0:
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_2112, 200f, 200f, 200f, false, true, 0))
			{
				iLocal_2110 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Local_2112, "V_31_TUN_01");
				iLocal_2111++;
			}
			break;
		case 1:
			INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_2110);
			iLocal_2111++;
			break;
		case 2:
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_2112, 9f, 9f, 9f, false, true, 0))
			{
				INTERIOR::UNPIN_INTERIOR(iLocal_2110);
				iLocal_2111++;
			}
			break;
	}
}

void func_923(int iParam0)//Position - 0x97158
{
	int iVar0;
	iVar0 = func_911(iParam0);
	if (iVar0 != -1)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_739[iVar0 /*3*/]);
		Local_739[iVar0 /*3*/].f_1 = 0;
		Local_739[iVar0 /*3*/].f_2 = 0;
	}
}

void func_924(int iParam0, bool bParam1)//Position - 0x9718D
{
	if (bParam1)
	{
		PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iParam0, 3);
	}
	else
	{
		PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iParam0, 0);
	}
}

void func_929(char* sParam0, int iParam1)//Position - 0x9727D
{
	int iVar0;
	iVar0 = func_909(sParam0, iParam1);
	if (iVar0 != -1)
	{
		VEHICLE::REMOVE_VEHICLE_RECORDING(Local_743[iVar0 /*4*/].f_1, Local_743[iVar0 /*4*/]);
		Local_743[iVar0 /*4*/].f_2 = 0;
		Local_743[iVar0 /*4*/].f_3 = 0;
	}
}

void func_930(int iParam0, bool bParam1)//Position - 0x972BD
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		ENTITY::SET_ENTITY_VISIBLE(iParam0, !bParam1, false);
		if (!PED::IS_PED_IN_ANY_VEHICLE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), false))
		{
			ENTITY::SET_ENTITY_COLLISION(iParam0, !bParam1, false);
		}
		if (!ENTITY::IS_ENTITY_ATTACHED_TO_ANY_OBJECT(iParam0))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), false))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iParam0, bParam1);
			}
		}
		if (bParam1)
		{
			ENTITY::SET_ENTITY_COORDS(iParam0, -722.6866f, -346.5041f, 34.45f, true, false, false, true);
		}
	}
}

int func_931()//Position - 0x97330
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (iLocal_738 - 1))
	{
		if (Local_739[iVar0 /*3*/] != 0)
		{
			if (Local_739[iVar0 /*3*/].f_1)
			{
				STREAMING::REQUEST_MODEL(Local_739[iVar0 /*3*/]);
				Local_739[iVar0 /*3*/].f_2 = 1;
			}
			else if (Local_739[iVar0 /*3*/].f_2)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_739[iVar0 /*3*/]);
				Local_739[iVar0 /*3*/].f_2 = 0;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_740 - 1))
	{
		if (!MISC::ARE_STRINGS_EQUAL(Local_741[iVar0 /*3*/], "missing"))
		{
			if (Local_741[iVar0 /*3*/].f_1)
			{
				STREAMING::REQUEST_ANIM_DICT(Local_741[iVar0 /*3*/]);
				Local_741[iVar0 /*3*/].f_2 = 1;
			}
			else if (Local_741[iVar0 /*3*/].f_2)
			{
				STREAMING::REMOVE_ANIM_DICT(Local_741[iVar0 /*3*/]);
				Local_741[iVar0 /*3*/].f_2 = 0;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_742 - 1))
	{
		if (!MISC::ARE_STRINGS_EQUAL(Local_743[iVar0 /*4*/], "missing") && Local_743[iVar0 /*4*/].f_1 != -1)
		{
			if (Local_743[iVar0 /*4*/].f_2)
			{
				VEHICLE::REQUEST_VEHICLE_RECORDING(Local_743[iVar0 /*4*/].f_1, Local_743[iVar0 /*4*/]);
				Local_743[iVar0 /*4*/].f_3 = 1;
			}
			else if (Local_743[iVar0 /*4*/].f_3)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(Local_743[iVar0 /*4*/].f_1, Local_743[iVar0 /*4*/]);
				Local_743[iVar0 /*4*/].f_3 = 0;
			}
		}
		iVar0++;
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		STREAMING::LOAD_ALL_OBJECTS_NOW();
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_738 - 1))
	{
		if (Local_739[iVar0 /*3*/].f_2 == 1)
		{
			if (!STREAMING::HAS_MODEL_LOADED(Local_739[iVar0 /*3*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_740 - 1))
	{
		if (Local_741[iVar0 /*3*/].f_2 == 1)
		{
			if (!STREAMING::HAS_ANIM_DICT_LOADED(Local_741[iVar0 /*3*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_742 - 1))
	{
		if (Local_743[iVar0 /*4*/].f_3 == 1)
		{
			if (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_743[iVar0 /*4*/].f_1, Local_743[iVar0 /*4*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_932(char* sParam0, int iParam1)//Position - 0x97553
{
	int iVar0;
	iVar0 = func_909(sParam0, iParam1);
	if (iVar0 != -1)
	{
		Local_743[iVar0 /*4*/].f_2 = 1;
	}
}

void func_933(char* sParam0)//Position - 0x97575
{
	int iVar0;
	iVar0 = func_934(sParam0);
	if (iVar0 != -1)
	{
		Local_741[iVar0 /*3*/].f_1 = 1;
	}
}

int func_934(char* sParam0)//Position - 0x97595
{
	int iVar0;
	bool bVar1;
	int iVar2;
	iVar0 = -1;
	bVar1 = false;
	iVar2 = 0;
	while (!bVar1)
	{
		if (MISC::ARE_STRINGS_EQUAL(Local_741[iVar2 /*3*/], sParam0))
		{
			bVar1 = true;
			iVar0 = iVar2;
		}
		else
		{
			iVar2++;
			if (iVar2 >= iLocal_740)
			{
				bVar1 = true;
			}
		}
	}
	return iVar0;
}

void func_935(int iParam0)//Position - 0x975DC
{
	int iVar0;
	iVar0 = func_911(iParam0);
	if (iVar0 != -1)
	{
		Local_739[iVar0 /*3*/].f_1 = 1;
	}
}

void func_936(int iParam0, struct<3> Param1, char* sParam2, bool bParam3, bool bParam4)//Position - 0x975FC
{
	*iParam0 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Param1, sParam2);
	INTERIOR::PIN_INTERIOR_IN_MEMORY(*iParam0);
	if (bParam3)
	{
		while (!INTERIOR::IS_INTERIOR_READY(*iParam0))
		{
			if (bParam4)
			{
				func_112(0);
			}
			else
			{
				SYSTEM::WAIT(0);
			}
		}
	}
}

int func_937()//Position - 0x9763D
{
	int iVar0;
	int iVar1;
	if (!iLocal_383)
	{
		AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK(Local_748.f_245);
		AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK(Local_748.f_247);
		if (bLocal_382)
		{
			AUDIO::STOP_SOUND(Local_737[11 /*3*/]);
		}
		AUDIO::SET_AUDIO_FLAG("OnlyAllowScriptTriggerPoliceScanner", true);
		AUDIO::CLEAR_ALL_BROKEN_GLASS();
		PED::DELETE_PED(&(iLocal_438[0]));
		PED::DELETE_PED(&(iLocal_438[1]));
		PED::DELETE_PED(&(iLocal_438[2]));
		PED::DELETE_PED(&(iLocal_438[3]));
		PED::DELETE_PED(&(iLocal_438[4]));
		PED::DELETE_PED(&iLocal_437);
		if (iLocal_477 != 0)
		{
			INTERIOR::UNPIN_INTERIOR(iLocal_477);
		}
		if (!ENTITY::IS_ENTITY_DEAD(func_94(1), false) && !ENTITY::IS_ENTITY_DEAD(iLocal_456[2], false))
		{
			if (!PED::IS_PED_IN_VEHICLE(func_94(1), iLocal_456[2], false))
			{
				PED::SET_PED_INTO_VEHICLE(func_94(1), iLocal_456[2], -1);
				func_9(func_94(1), 0, 0);
				PED::REMOVE_PED_HELMET(func_94(1), true);
				PED::SET_PED_HELMET_PROP_INDEX(func_94(1), 6, true);
				PED::SET_PED_HELMET_TEXTURE_INDEX(func_94(1), 8);
				PED::SET_PED_PROP_INDEX(func_94(1), 0, 6, 8, false);
				PED::SET_PED_HELMET(func_94(1), true);
				TASK::TASK_LOOK_AT_ENTITY(func_94(1), func_94(0), 5000, 2048, 2);
				PED::SET_PED_PRELOAD_VARIATION_DATA(func_94(1), 9, 6, 0);
			}
		}
		STREAMING::REMOVE_PTFX_ASSET();
		func_133();
		func_129(1, 0);
		VEHICLE::REQUEST_VEHICLE_RECORDING(Local_748.f_84, Local_748.f_83);
		VEHICLE::REQUEST_VEHICLE_RECORDING(998, Local_748.f_83);
		VEHICLE::REQUEST_VEHICLE_RECORDING(722, Local_748.f_83);
		STREAMING::REQUEST_ANIM_DICT("missheist_jewel");
		STREAMING::REQUEST_PTFX_ASSET();
		if (Global_96863)
		{
			VEHICLE::REQUEST_VEHICLE_RECORDING(1, "JHLateCops");
			VEHICLE::REQUEST_VEHICLE_RECORDING(2, "JHLateCops");
			VEHICLE::REQUEST_VEHICLE_RECORDING(3, "JHLateCops");
			STREAMING::REQUEST_MODEL(Local_748.f_14);
			STREAMING::REQUEST_MODEL(Local_748.f_15);
		}
		if (Local_748.f_0 == joaat("bati2"))
		{
			CUTSCENE::REQUEST_CUTSCENE(Local_748.f_123, 8);
		}
		else
		{
			CUTSCENE::REQUEST_CUTSCENE(Local_748.f_124, 8);
		}
		VEHICLE::REQUEST_VEHICLE_ASSET(Local_748.f_0, 3);
		while (((!CUTSCENE::HAS_CUTSCENE_LOADED() || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_748.f_84, Local_748.f_83)) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(998, Local_748.f_83)) || !STREAMING::HAS_ANIM_DICT_LOADED("missheist_jewel"))
		{
			func_112(0);
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Franklin", func_94(1), 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Michael", func_94(0), 0);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_276))
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Traffic_Warden", iLocal_276, 0);
				}
			}
		}
		func_936(&iLocal_477, -625.1706f, -232.8408f, 39.4937f, "V_JEWEL2", 1, 1);
		func_114();
		func_9(iLocal_436[1], 1, 0);
		SYSTEM::SETTIMERA(0);
		func_111(800, 0, 0);
		iLocal_417 = 0;
		iLocal_384 = 0;
		iLocal_383 = 1;
		iLocal_2100 = 0;
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_456[2], false))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_456[2]);
			if (Local_748.f_0 == joaat("bati2"))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_456[2], "Franklins_Heist_Bike", 0, Local_748.f_0, 0);
			}
			else
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_456[2], "Franklins_Heist_Bike", 0, Local_748.f_0, 0);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_276))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_276, false))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_276, "Traffic_Warden", 0, 0, 0);
			}
		}
		CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(func_94(0), "Michael", 0, 0, 0);
		__LIB_0__::func_532(1, 1, 1, 0, 0, 0, 0);
		func_940(1, 1, 0);
		__LIB_0__::func_429();
		CUTSCENE::START_CUTSCENE(0);
		RECORDING::REPLAY_START_EVENT(4);
		func_910(Local_748.f_0);
		func_125(joaat("WEAPON_PISTOL"), 0, 0, 0);
		func_883();
		iVar0 = iLocal_223;
		iVar1 = iLocal_220;
		iLocal_416 = 0;
		while (iLocal_416 < iVar0)
		{
			if (iLocal_167[iLocal_416] > 0)
			{
				VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_167[iLocal_416], Local_748.f_83);
			}
			iLocal_416++;
		}
		iLocal_416 = 0;
		while (iLocal_416 < iVar1)
		{
			if (iLocal_164[iLocal_416] > 0)
			{
				VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_164[iLocal_416], Local_748.f_83);
			}
			iLocal_416++;
		}
		iLocal_434 = 0;
		AUDIO::PREPARE_ALARM("JEWEL_STORE_HEIST_ALARMS");
		if (Global_96863)
		{
			func_910(Local_748.f_14);
			func_910(Local_748.f_15);
			func_908("JHLateCops", 1);
			func_908("JHLateCops", 2);
			func_908("JHLateCops", 3);
		}
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
		iLocal_719 = iLocal_413;
	}
	else
	{
		switch (iLocal_417)
		{
			case 0:
			case 1:
			case 2:
				if (CUTSCENE::IS_CUTSCENE_PLAYING() && iLocal_2100 == 0)
				{
					CLOCK::SET_CLOCK_TIME(15, 0, 0);
					if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_483))
					{
						GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_483, false);
					}
					func_9(func_94(0), 0, 0);
					if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_748.f_84, Local_748.f_83) && !ENTITY::IS_ENTITY_DEAD(iLocal_456[0], false))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_456[0]);
						ENTITY::SET_ENTITY_COORDS(iLocal_456[0], VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(Local_748.f_84, 1000f, Local_748.f_83) + Local_81, true, false, false, true);
						ENTITY::SET_ENTITY_ROTATION(iLocal_456[0], VEHICLE::GET_ROTATION_OF_VEHICLE_RECORDING_AT_TIME(Local_748.f_84, 1000f, Local_748.f_83), 2, true);
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_456[0], true);
						VEHICLE::SET_VEHICLE_USE_CUTSCENE_WHEEL_COMPRESSION(iLocal_456[0], true, true, true);
					}
					if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_167[0], Local_748.f_83) && !ENTITY::IS_ENTITY_DEAD(iLocal_456[1], false))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_456[1]);
						ENTITY::SET_ENTITY_COORDS(iLocal_456[1], Local_81 + VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_167[0], 1000f, Local_748.f_83), true, false, false, true);
						ENTITY::SET_ENTITY_ROTATION(iLocal_456[1], VEHICLE::GET_ROTATION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_167[0], 1000f, Local_748.f_83), 2, true);
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_456[1], true);
						VEHICLE::SET_VEHICLE_USE_CUTSCENE_WHEEL_COMPRESSION(iLocal_456[1], true, true, true);
					}
					MISC::CLEAR_AREA_OF_PEDS(-636.56f, -241.84f, 38.41f, 200f, 1);
					MISC::CLEAR_AREA_OF_VEHICLES(-636.56f, -241.84f, 38.41f, 200f, true, false, false, false, false, false, 0);
					MISC::CLEAR_AREA_OF_PROJECTILES(-636.56f, -241.84f, 38.41f, 200f, 1);
					if (!PED::IS_PED_INJURED(iLocal_437))
					{
						PED::SET_PED_KEEP_TASK(iLocal_437, true);
					}
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_437);
					VEHICLE::DELETE_VEHICLE(&iLocal_460);
					PED::DELETE_PED(&(iLocal_436[2]));
					__LIB_37__::func_173(__LIB_16__::func_594(0, 2));
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_456[0], false) && !ENTITY::IS_ENTITY_DEAD(iLocal_436[0], false))
					{
						if (!PED::IS_PED_IN_VEHICLE(iLocal_436[0], iLocal_456[0], false))
						{
							PED::SET_PED_INTO_VEHICLE(iLocal_436[0], iLocal_456[0], -1);
						}
						func_722(iLocal_436[0], 0);
						func_9(iLocal_436[0], 1, 0);
						PED::SET_PED_PROP_INDEX(iLocal_436[0], 0, 3, 0, false);
						func_939(iLocal_436[0], iLocal_456[0]);
					}
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_436[1], false) && !ENTITY::IS_ENTITY_DEAD(iLocal_456[1], false))
					{
						if (!PED::IS_PED_IN_VEHICLE(iLocal_436[1], iLocal_456[1], false))
						{
							PED::SET_PED_INTO_VEHICLE(iLocal_436[1], iLocal_456[1], -1);
						}
						func_722(iLocal_436[1], 0);
						PED::SET_PED_PROP_INDEX(iLocal_436[1], 0, 4, 0, false);
						func_939(iLocal_436[1], iLocal_456[1]);
					}
					if (__LIB_15__::func_944() != 1)
					{
						__LIB_17__::func_760(&Local_519, 1);
						func_176(&Local_519, 1, 1, 0);
					}
					iLocal_2100 = 1;
				}
				if (Local_748.f_0 == joaat("bati2"))
				{
					if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Franklins_Heist_Bike", 0)))
					{
						iLocal_456[2] = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Franklins_Heist_Bike", 0));
						VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_456[2], 2);
					}
				}
				else if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Franklins_getaway_Bike", 0)))
				{
					iLocal_456[2] = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Franklins_getaway_Bike", 0));
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_456[2], 2);
				}
				if (CUTSCENE::GET_CUTSCENE_TIME() > 1402 && iLocal_434 == 0)
				{
					if (bLocal_382)
					{
						if (AUDIO::PREPARE_MUSIC_EVENT("JH2A_EXIT_SHOP_MA"))
						{
							AUDIO::TRIGGER_MUSIC_EVENT("JH2A_EXIT_SHOP_MA");
							iLocal_434 = 1;
						}
					}
					else if (AUDIO::PREPARE_MUSIC_EVENT("JH2B_EXIT_SHOP_MA"))
					{
						AUDIO::TRIGGER_MUSIC_EVENT("JH2B_EXIT_SHOP_MA");
						iLocal_434 = 1;
					}
				}
				if (iLocal_396 == 0 && CUTSCENE::GET_CUTSCENE_TIME() > 5402)
				{
					if (AUDIO::PREPARE_ALARM("JEWEL_STORE_HEIST_ALARMS"))
					{
						AUDIO::START_ALARM("JEWEL_STORE_HEIST_ALARMS", false);
						iLocal_396 = 1;
					}
				}
				if (iLocal_417 == 0)
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > 10866)
					{
						iLocal_417 = 1;
					}
				}
				if (iLocal_417 == 1)
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > 12066)
					{
						iLocal_435 = AUDIO::GET_SOUND_ID();
						AUDIO::PLAY_SOUND_FRONTEND(iLocal_435, "all", "SHORT_PLAYER_SWITCH_SOUND_SET", true);
						iLocal_417 = 2;
					}
				}
				if (CUTSCENE::GET_CUTSCENE_TIME() > 13000)
				{
					func_9(func_94(1), 1, 0);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_456[2], false))
				{
					if (Local_748.f_0 == joaat("bati2"))
					{
						if (!CUTSCENE::IS_CUTSCENE_PLAYING())
						{
							ENTITY::SET_ENTITY_VELOCITY(iLocal_456[2], 0f, 0f, 0f);
							if (!PED::IS_PED_IN_VEHICLE(func_94(1), iLocal_456[2], false))
							{
								PED::SET_PED_INTO_VEHICLE(func_94(1), iLocal_456[2], -1);
							}
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_94(1), false, false);
							func_9(func_94(1), 1, 0);
							if (!(CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 4 || (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4 && CAM::IS_ALLOWED_INDEPENDENT_CAMERA_MODES())))
							{
								func_748(0, 0, 1, 1, 1);
								CAM::SET_CAM_COORD(iLocal_745, -631.2991f, -241.8959f, 38.921356f);
								CAM::SET_CAM_ROT(iLocal_745, -7.602906f, 0f, 78.4102f, 2);
								CAM::SET_CAM_FOV(iLocal_745, 50f);
								CAM::SET_CAM_ACTIVE(iLocal_745, true);
								CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
							}
							func_886(0);
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_456[0], false) && !ENTITY::IS_ENTITY_DEAD(iLocal_436[0], false))
							{
								if (!PED::IS_PED_IN_VEHICLE(iLocal_436[0], iLocal_456[0], false))
								{
									PED::SET_PED_INTO_VEHICLE(iLocal_436[0], iLocal_456[0], -1);
								}
							}
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_456[1], false) && !ENTITY::IS_ENTITY_DEAD(iLocal_436[1], false))
							{
								if (!PED::IS_PED_IN_VEHICLE(iLocal_436[1], iLocal_456[1], false))
								{
									PED::SET_PED_INTO_VEHICLE(iLocal_436[1], iLocal_456[1], -1);
								}
							}
							ENTITY::SET_ENTITY_HEADING(func_94(0), 205.4952f);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(func_94(0), Local_319, 1f, -1, 0.25f, 0, 40000f);
							PED::FORCE_PED_MOTION_STATE(func_94(0), joaat("MotionState_Walk"), true, 1, false);
						}
					}
					else if (!CUTSCENE::IS_CUTSCENE_PLAYING())
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_456[2], false) && !ENTITY::IS_ENTITY_DEAD(func_94(1), false))
						{
							if (!PED::IS_PED_IN_VEHICLE(func_94(1), iLocal_456[2], false))
							{
								PED::SET_PED_INTO_VEHICLE(func_94(1), iLocal_456[2], -1);
							}
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_94(1), false, false);
							func_9(func_94(1), 1, 0);
							if (!(CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 4 || (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4 && CAM::IS_ALLOWED_INDEPENDENT_CAMERA_MODES())))
							{
								func_748(0, 0, 1, 1, 1);
								CAM::SET_CAM_COORD(iLocal_745, -631.2991f, -241.8959f, 38.921356f);
								CAM::SET_CAM_ROT(iLocal_745, -7.602906f, 0f, 78.4102f, 2);
								CAM::SET_CAM_FOV(iLocal_745, 50f);
								CAM::SET_CAM_ACTIVE(iLocal_745, true);
								CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
							}
							func_886(0);
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_456[0], false) && !ENTITY::IS_ENTITY_DEAD(iLocal_436[0], false))
							{
								if (!PED::IS_PED_IN_VEHICLE(iLocal_436[0], iLocal_456[0], false))
								{
									PED::SET_PED_INTO_VEHICLE(iLocal_436[0], iLocal_456[0], -1);
								}
							}
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_456[1], false) && !ENTITY::IS_ENTITY_DEAD(iLocal_436[1], false))
							{
								if (!PED::IS_PED_IN_VEHICLE(iLocal_436[1], iLocal_456[1], false))
								{
									PED::SET_PED_INTO_VEHICLE(iLocal_436[1], iLocal_456[1], -1);
								}
							}
						}
						ENTITY::SET_ENTITY_HEADING(func_94(0), 205.4952f);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(func_94(0), Local_319, 1f, -1, 0.25f, 0, 40000f);
						PED::FORCE_PED_MOTION_STATE(func_94(0), joaat("MotionState_Walk"), true, 1, false);
					}
				}
				if (!CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					if (!PED::IS_PED_INJURED(iLocal_276))
					{
						TASK::TASK_PLAY_ANIM(iLocal_276, "missheist_jewel", "cop_on_floor", 1000f, -8f, -1, 262145, 0f, false, false, false);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_276, false, false);
					}
				}
				if (!CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					__LIB_0__::func_532(0, 1, 1, 0, 0, 0, 0);
					func_114();
					iLocal_417 = 3;
				}
				break;
		}
		if (CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
		}
		if (iLocal_417 >= 3)
		{
			__LIB_37__::func_174(1);
			if (!bLocal_382)
			{
				PED::SET_PED_CLOTH_PACKAGE_INDEX(PLAYER::PLAYER_PED_ID(), 1);
			}
			func_939(iLocal_436[0], iLocal_456[0]);
			func_939(iLocal_436[1], iLocal_456[1]);
			INTERIOR::UNPIN_INTERIOR(iLocal_477);
			func_9(func_94(1), 1, 0);
			if (!AUDIO::HAS_SOUND_FINISHED(iLocal_435))
			{
				AUDIO::STOP_SOUND(iLocal_435);
			}
			RECORDING::REPLAY_STOP_EVENT();
			iLocal_383 = 0;
			iLocal_384 = 0;
			return 1;
		}
	}
	return 0;
}

void func_939(int iParam0, int iParam1)//Position - 0x98326
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		if (PED::IS_PED_IN_VEHICLE(iParam0, iParam1, false))
		{
			TASK::CLEAR_PED_TASKS(iParam0);
			PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iParam0, 1);
			PED::SET_PED_CAN_BE_DRAGGED_OUT(iParam0, false);
			ENTITY::SET_ENTITY_PROOFS(iParam1, false, true, true, true, true, false, false, false);
			ENTITY::FREEZE_ENTITY_POSITION(iParam1, false);
		}
	}
}

void func_940(bool bParam0, bool bParam1, bool bParam2)//Position - 0x9837B
{
	if (bParam0)
	{
		if (func_705() != 0)
		{
			if (func_941(0))
			{
				if (!PED::IS_PED_INJURED(func_94(0)))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(func_94(0), "Michael", 0, joaat("Player_Zero"), 0);
				}
			}
		}
	}
	if (bParam1)
	{
		if (func_705() != 1)
		{
			if (func_941(1))
			{
				if (!PED::IS_PED_INJURED(func_94(1)))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(func_94(1), "Franklin", 0, joaat("Player_One"), 0);
				}
			}
		}
	}
	if (bParam2)
	{
		if (func_705() != 2)
		{
			if (func_941(2))
			{
				if (!PED::IS_PED_INJURED(func_94(1)))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(func_94(2), "Trevor", 0, joaat("Player_Two"), 0);
				}
			}
		}
	}
}

int func_941(int iParam0)//Position - 0x98426
{
	switch (iParam0)
	{
		case 0:
			if (__LIB_0__::func_682(__LIB_15__::func_944()) == 0)
			{
				return 1;
			}
			else if (ENTITY::DOES_ENTITY_EXIST(Local_519[0]))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case 1:
			if (__LIB_0__::func_682(__LIB_15__::func_944()) == 1)
			{
				return 1;
			}
			else if (ENTITY::DOES_ENTITY_EXIST(Local_519[1]))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case 2:
			if (__LIB_0__::func_682(__LIB_15__::func_944()) == 2)
			{
				return 1;
			}
			else if (ENTITY::DOES_ENTITY_EXIST(Local_519[2]))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
	}
	return 0;
}

int func_942()//Position - 0x984D2
{
	float fVar0;
	if (!iLocal_383)
	{
		Global_100441.f_12[0] = 0;
		PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), true, -1, 0);
		func_984();
		AUDIO::SET_AUDIO_FLAG("OnlyAllowScriptTriggerPoliceScanner", true);
		if (!bLocal_382)
		{
			iLocal_420 = 0;
			iLocal_421 = 1;
		}
		WEAPON::GIVE_WEAPON_TO_PED(iLocal_436[0], iLocal_262, 1000, false, true);
		WEAPON::GIVE_WEAPON_TO_PED(iLocal_436[1], iLocal_262, 1000, false, true);
		WEAPON::SET_CURRENT_PED_WEAPON(iLocal_436[0], iLocal_262, true);
		WEAPON::SET_CURRENT_PED_WEAPON(iLocal_436[1], iLocal_262, true);
		WEAPON::SET_CURRENT_PED_WEAPON(func_94(0), iLocal_262, true);
		VEHICLE::DELETE_VEHICLE(&iLocal_463);
		func_923(Local_748.f_2);
		func_133();
		iLocal_416 = 0;
		iLocal_416 = 0;
		while (iLocal_416 <= 19)
		{
			iLocal_504 = OBJECT::GET_RAYFIRE_MAP_OBJECT(Local_349[iLocal_416 /*30*/], 1f, Local_349[iLocal_416 /*30*/].f_27);
			if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_504))
			{
				if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_504) != 3)
				{
					OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_504, 11);
				}
			}
			Local_349[iLocal_416 /*30*/].f_28 = 0;
			iLocal_416++;
		}
		Global_100441.f_12[2] = 0;
		STREAMING::REQUEST_MODEL(Local_748.f_18);
		STREAMING::REQUEST_MODEL(Local_748.f_19);
		STREAMING::REQUEST_MODEL(Local_748.f_20);
		STREAMING::REQUEST_MODEL(Local_748.f_21);
		STREAMING::REQUEST_ANIM_DICT(Local_748.f_35);
		STREAMING::REQUEST_ANIM_DICT(Local_748.f_61);
		STREAMING::REQUEST_ANIM_DICT(Local_748.f_35);
		while (((((!STREAMING::HAS_MODEL_LOADED(Local_748.f_18) || !STREAMING::HAS_MODEL_LOADED(Local_748.f_19)) || !STREAMING::HAS_MODEL_LOADED(Local_748.f_20)) || !STREAMING::HAS_MODEL_LOADED(Local_748.f_21)) || !STREAMING::HAS_ANIM_DICT_LOADED(Local_748.f_35)) || !STREAMING::HAS_ANIM_DICT_LOADED(Local_748.f_61))
		{
			SYSTEM::WAIT(0);
		}
		AUDIO::REQUEST_AMBIENT_AUDIO_BANK(Local_748.f_245, false, -1);
		AUDIO::REQUEST_AMBIENT_AUDIO_BANK(Local_748.f_244, false, -1);
		STREAMING::REQUEST_PTFX_ASSET();
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			if (!PED::IS_PED_INJURED(iLocal_436[iLocal_420]))
			{
				if (bLocal_382)
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_436[iLocal_420], -629.47f, -232.86f, 37.057f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(iLocal_436[iLocal_420], -118.52f);
				}
				else
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_436[iLocal_420], -629.42f, -236.67f, 37.057f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(iLocal_436[iLocal_420], -121.52f);
				}
				PED::SET_PED_USING_ACTION_MODE(iLocal_436[iLocal_420], true, -1, 0);
			}
			if (!PED::IS_PED_INJURED(iLocal_436[iLocal_421]))
			{
				if (bLocal_382)
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_436[iLocal_421], -629.56f, -236.72f, 37.057f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(iLocal_436[iLocal_421], -114.55f);
				}
				else
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_436[iLocal_421], -628.6705f, -232.0854f, 37.057f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(iLocal_436[iLocal_421], 305.2619f);
				}
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_436[iLocal_421]))
		{
			TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(iLocal_436[iLocal_421], -623.2735f, -236.2186f, 37.057f, -622.8721f, -230.6936f, 37.8568f, 2f, false, 0.5f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"));
		}
		if (bLocal_382)
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_480);
			TASK::TASK_GO_TO_COORD_ANY_MEANS(0, Local_320, 1f, 0, false, 786603, -1f);
			TASK::TASK_ACHIEVE_HEADING(0, 130.4809f, 0);
			TASK::TASK_PLAY_ANIM(0, Local_748.f_61, "idle_a", 8f, -8f, -1, 0, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, Local_748.f_61, "idle_b", 8f, -8f, -1, 0, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, Local_748.f_61, "idle_d", 8f, -8f, -1, 0, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, Local_748.f_61, Local_748.f_62, 8f, -8f, -1, 1, 0f, false, false, false);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_480);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_436[iLocal_421], iLocal_480);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_480);
		}
		func_983();
		if (bLocal_382)
		{
			func_982(1, 0, 0, 1, 1);
		}
		else
		{
			func_982(0, 0, 0, 1, 1);
		}
		func_114();
		func_716(1, 1, 1);
		func_715();
		func_762("JH_GOGO", 0, 0, 1);
		if (bLocal_382)
		{
			if (func_116())
			{
				func_762("JH_CLEARG", 0, 0, 1);
			}
			else if (func_117())
			{
				func_762("JH_CLEARP", 0, 0, 1);
			}
			else if (func_115())
			{
				func_762("JH_CLEARN", 0, 0, 1);
			}
		}
		else if (func_120())
		{
			func_762("JH_CLEAN_ET", 0, 0, 1);
		}
		else if (func_118())
		{
			func_762("JH_CLEAN_KD", 0, 0, 1);
		}
		func_762(Local_748.f_220, 1, 0, 1);
		switch (__LIB_0__::func_564(__LIB_16__::func_594(0, 2)))
		{
			case 2:
				func_762(Local_748.f_142, 0, 0, 1);
				func_762("JH_HCKARESP", 0, 0, 1);
				break;
			case 1:
				func_762(Local_748.f_143, 0, 0, 1);
				func_762("JH_HCKBRESP", 0, 0, 1);
				break;
			case 0:
				func_762("JH_HCKCGO", 0, 0, 1);
				func_762("JH_HCKCRESP", 0, 0, 1);
				break;
		}
		if (!bLocal_382)
		{
			iLocal_281 = 0;
			if (bLocal_424)
			{
				iLocal_419 = 0;
			}
		}
		Global_100441.f_12[2] = 0;
		iLocal_2034 = MISC::GET_GAME_TIMER();
		iLocal_395 = 0;
		iLocal_397 = 0;
		bLocal_389 = false;
		bLocal_390 = false;
		iLocal_391 = 0;
		iLocal_392 = 0;
		iLocal_396 = 0;
		iLocal_405 = 0;
		iLocal_2096 = 0;
		iLocal_2038 = 0;
		func_981();
		PED::SET_CREATE_RANDOM_COPS(false);
		AUDIO::PREPARE_ALARM("JEWEL_STORE_HEIST_ALARMS");
		SYSTEM::SETTIMERA(0);
		SYSTEM::SETTIMERB(0);
		iLocal_416 = 0;
		while (iLocal_416 <= 24)
		{
			iLocal_408[iLocal_416] = 0;
			iLocal_416++;
		}
		func_9(iLocal_436[0], 1, 1);
		func_9(iLocal_436[1], 1, 1);
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			func_9(func_94(0), 1, 1);
		}
		func_722(func_94(0), 1);
		func_722(iLocal_436[0], 1);
		func_722(iLocal_436[1], 1);
		if (bLocal_382)
		{
			func_980(11, Local_748.f_254, 1);
		}
		iLocal_413 = 0;
		iLocal_415 = 0;
		iLocal_410 = 0;
		iLocal_272 = 0;
		iLocal_346 = 0;
		iLocal_2094 = 0;
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
		PLAYER::SET_MAX_WANTED_LEVEL(0);
		MISC::SET_FAKE_WANTED_LEVEL(0);
		func_979(&Local_350);
		func_978(&uLocal_351);
		func_978(&uLocal_360);
		CUTSCENE::REMOVE_CUTSCENE();
		iLocal_401 = 1;
		iLocal_395 = 0;
		iLocal_74 = 0;
		OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("v_ilev_j2_door"), -629.1f, -230.2f, 38.2f, true, 0f, false);
		PLAYER::SET_PLAYER_CLOTH_PIN_FRAMES(PLAYER::PLAYER_ID(), 1);
		__LIB_0__::func_499(814, 0);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		iLocal_387 = 0;
		AUDIO::START_AUDIO_SCENE("JSH_2B_GRAB_LOOT_MAIN");
		if (bLocal_382)
		{
			fLocal_2098 = 0f;
			func_652(3, "STAGE_GRAB_LOOT", 0, 0, 0, 1);
		}
		else
		{
			func_652(2, "STAGE_GRAB_LOOT", 0, 0, 0, 1);
		}
		func_111(800, 0, 0);
		iLocal_417 = 0;
		iLocal_383 = 1;
		iLocal_2097 = 0;
		if (Local_748.f_0 == joaat("bati2"))
		{
			CUTSCENE::REQUEST_CUTSCENE(Local_748.f_123, 8);
		}
		else
		{
			CUTSCENE::REQUEST_CUTSCENE(Local_748.f_124, 8);
		}
		VEHICLE::REQUEST_VEHICLE_RECORDING(Local_748.f_84, Local_748.f_83);
		VEHICLE::REQUEST_VEHICLE_RECORDING(998, Local_748.f_83);
		iLocal_2099 = 0;
		RECORDING::REPLAY_RECORD_BACK_FOR_TIME(0f, 8f, 4);
	}
	else
	{
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Franklin", func_94(1), 0);
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Michael", func_94(0), 0);
		func_976();
		PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		if (bLocal_382)
		{
			if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_483))
			{
				iLocal_483 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_jewel_fog_volume", -622f, -231f, 38f, 0f, 0f, 0f, 1f, false, false, false, false);
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(iLocal_483, "scr_jewel_fog_volume", fLocal_2098, false);
			}
			if (SYSTEM::TIMERA() < (iLocal_422 - 7000) && Global_100441.f_12[2] < 16)
			{
				fLocal_2098 = (fLocal_2098 + (0.05f * SYSTEM::TIMESTEP()));
				if (fLocal_2098 >= 1f)
				{
					fLocal_2098 = 1f;
				}
			}
			else
			{
				fLocal_2098 = (fLocal_2098 - (0.01f * SYSTEM::TIMESTEP()));
				if (fLocal_2098 <= 0f)
				{
					fLocal_2098 = 0.1f;
				}
			}
			GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(iLocal_483, "scr_jewel_fog_volume", fLocal_2098, false);
		}
		func_975();
		func_972();
		if (!bLocal_389 && !bLocal_390)
		{
			if (iLocal_73 == 0)
			{
				iLocal_416 = 0;
				while (iLocal_416 <= 4)
				{
					if (func_971(iLocal_438[iLocal_416]))
					{
						iLocal_73 = 1;
					}
					iLocal_416++;
				}
				if (func_971(iLocal_440) || func_971(iLocal_437))
				{
					iLocal_73 = 1;
				}
			}
			if (iLocal_73 && !AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (bLocal_382)
				{
				}
			}
		}
		if (!(!func_115() && (bLocal_390 == 1 && iLocal_392 == 0)))
		{
			if (!bLocal_382)
			{
				if (!iLocal_395)
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_436[iLocal_421], joaat("SCRIPT_TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_436[iLocal_421], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1)
					{
						func_968(iLocal_436[iLocal_421], &uLocal_351);
					}
				}
			}
		}
		STREAMING::SET_INTERIOR_ACTIVE(iLocal_477, true);
		INTERIOR::SET_ROOM_FOR_GAME_VIEWPORT_BY_KEY(iLocal_478);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 102, true);
		switch (iLocal_417)
		{
			case 0:
				if (!bLocal_382)
				{
					func_965();
				}
				if (!bLocal_389 && !bLocal_390)
				{
					func_964(SYSTEM::TIMERA());
				}
				if (!iLocal_395)
				{
					if (!bLocal_389 && !bLocal_390)
					{
						if (!bLocal_722 && !bLocal_721)
						{
							if ((!func_761() && !__LIB_13__::func_755(&Local_370, 1)) && !AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								if (!func_760())
								{
									if (bLocal_724)
									{
										SYSTEM::SETTIMERB(0);
									}
									else if (SYSTEM::TIMERB() > 3000)
									{
										if (iLocal_719 > 3300000)
										{
											if (iLocal_387 == 0)
											{
												func_762("JH_2MIL", 0, 0, 1);
												iLocal_387 = 1;
											}
											else
											{
												func_762(Local_748.f_147, 0, 0, 1);
												func_762(Local_748.f_191, 0, 0, 1);
											}
										}
										else
										{
											switch (iLocal_2094)
											{
												case 0:
													if (!bLocal_382)
													{
														if (func_117())
														{
															func_762("JH_STAYDWNGD", 0, 0, 1);
														}
														else if (func_116())
														{
															func_762("JH_CTRL", 0, 0, 1);
														}
														else if (func_115())
														{
															__LIB_0__::func_709(iLocal_436[1], "JH_CJAA", "NORM", 24);
														}
													}
													iLocal_2094++;
													break;
												case 1:
													func_762(Local_748.f_147, 0, 0, 1);
													iLocal_2094++;
													break;
												case 2:
													if (__LIB_0__::func_564(__LIB_16__::func_594(0, iLocal_420)) == 2)
													{
														func_762("JH_MENCGP", 0, 0, 1);
													}
													else
													{
														func_762("JH_MENCN", 0, 0, 1);
													}
													func_762(Local_748.f_191, 0, 0, 1);
													AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "DROP_ITEMS", iLocal_436[iLocal_420], "JEWEL_HEIST_SOUNDS", false, 0);
													iLocal_2094++;
													break;
												case 3:
													iLocal_2094 = 0;
													break;
											}
											func_762(Local_748.f_191, 0, 0, 1);
										}
									}
								}
							}
						}
					}
				}
				func_958(iLocal_436[iLocal_420], &Local_350);
				func_956();
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 263 /*INPUT_MELEE_ATTACK1*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 264 /*INPUT_MELEE_ATTACK2*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 142 /*INPUT_MELEE_ATTACK_ALTERNATE*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 140 /*INPUT_MELEE_ATTACK_LIGHT*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 141 /*INPUT_MELEE_ATTACK_HEAVY*/, true);
				if (bLocal_388)
				{
					func_951();
				}
				else
				{
					func_950();
					func_949();
					if (MISC::ARE_STRINGS_EQUAL(Local_349[iLocal_410 /*30*/].f_27, Local_748.f_278))
					{
						sLocal_505 = Local_748.f_39;
					}
					else if (MISC::ARE_STRINGS_EQUAL(Local_349[iLocal_410 /*30*/].f_27, Local_748.f_279))
					{
						sLocal_505 = Local_748.f_37;
					}
					else if (MISC::ARE_STRINGS_EQUAL(Local_349[iLocal_410 /*30*/].f_27, Local_748.f_280))
					{
						sLocal_505 = Local_748.f_42;
					}
					else if (MISC::ARE_STRINGS_EQUAL(Local_349[iLocal_410 /*30*/].f_27, Local_748.f_281))
					{
						sLocal_505 = Local_748.f_44;
					}
					if (ENTITY::IS_ENTITY_AT_COORD(func_94(0), PED::GET_ANIM_INITIAL_OFFSET_POSITION(Local_748.f_35, sLocal_505, Local_349[iLocal_410 /*30*/].f_3, Local_349[iLocal_410 /*30*/].f_6, 0f, 2), 0.75f, 0.75f, 1f, false, true, 0))
					{
						PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 45 /*INPUT_RELOAD*/, true);
					}
					if ((((((ENTITY::IS_ENTITY_AT_COORD(func_94(0), PED::GET_ANIM_INITIAL_OFFSET_POSITION(Local_748.f_35, sLocal_505, Local_349[iLocal_410 /*30*/].f_3, Local_349[iLocal_410 /*30*/].f_6, 0f, 2), 0.75f, 0.75f, 1f, false, true, 0) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_436[iLocal_420], PED::GET_ANIM_INITIAL_OFFSET_POSITION(Local_748.f_35, sLocal_505, Local_349[iLocal_410 /*30*/].f_3, Local_349[iLocal_410 /*30*/].f_6, 0f, 2), 0.75f, 0.75f, 1f, false, true, 0)) && !Local_349[iLocal_410 /*30*/].f_24) && !PED::IS_PED_IN_ANY_VEHICLE(func_94(0), false)) && PED::IS_PED_HEADING_TOWARDS_POSITION(func_94(0), Local_349[iLocal_410 /*30*/], 135f)) && !__LIB_0__::func_77(0)) && CAM::IS_GAMEPLAY_CAM_RENDERING())
					{
						if (!iLocal_397)
						{
							if (iLocal_415 < 2)
							{
								if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
								{
									if (!__LIB_0__::func_1("H_HELPSTEAL_KM"))
									{
										__LIB_0__::func_190("H_HELPSTEAL_KM");
										func_112(0);
										iLocal_397 = 1;
									}
								}
								else if (!__LIB_0__::func_1(Local_748.f_238))
								{
									__LIB_0__::func_190(Local_748.f_238);
									func_112(0);
									iLocal_397 = 1;
								}
							}
						}
						else
						{
							iLocal_397 = 0;
						}
						if ((PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 225 /*INPUT_SCRIPT_RRIGHT*/) && !PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/)) || ((PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 51 /*INPUT_CONTEXT*/) && !PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/)) && PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/)))
						{
							iLocal_502 = OBJECT::GET_RAYFIRE_MAP_OBJECT(Local_349[iLocal_410 /*30*/], 1f, Local_349[iLocal_410 /*30*/].f_27);
							if (Local_349[iLocal_410 /*30*/].f_28 == 0)
							{
								OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_502, 4);
							}
							iLocal_415++;
							func_947(&(Local_349[iLocal_410 /*30*/]));
						}
					}
					else if (func_946(Local_748.f_238) || (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/) && func_946("H_HELPSTEAL_KM")))
					{
						func_716(0, 0, 1);
					}
					if (!iLocal_395)
					{
						if ((!func_917(iLocal_436[iLocal_420], joaat("SCRIPT_TASK_PLAY_ANIM")) && !bLocal_388) && (iLocal_272 > 100 || iLocal_272 == 0))
						{
							if (SYSTEM::TIMERA() > (iLocal_422 - 7000) || Global_100441.f_12[2] > 16)
							{
								STREAMING::REQUEST_MODEL(joaat("IG_TrafficWarden"));
							}
							if (SYSTEM::TIMERA() > iLocal_422 || Global_100441.f_12[2] == 20)
							{
								if (STREAMING::HAS_MODEL_LOADED(joaat("IG_TrafficWarden")) && func_945(PLAYER::PLAYER_PED_ID()))
								{
									__LIB_0__::func_498(0, -1);
									if (!ENTITY::DOES_ENTITY_EXIST(iLocal_276))
									{
										iLocal_276 = PED::CREATE_PED(26, joaat("IG_TrafficWarden"), -629.4808f, -242.2689f, 37.2096f, 45.1069f, true, true);
									}
									PED::SET_PED_LOD_MULTIPLIER(iLocal_276, 1.5f);
									PED::SET_PED_IS_AVOIDED_BY_OTHERS(iLocal_276, false);
									AUDIO::STOP_PED_SPEAKING(iLocal_276, true);
									fVar0 = 170.4931f;
									TASK::OPEN_SEQUENCE_TASK(&iLocal_480);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -633.0743f, -240.248f, 37.0325f, 1f, 40000, 0.5f, 0, fVar0);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, func_94(1), 0);
									TASK::TASK_PLAY_ANIM(0, Local_748.f_35, Local_748.f_31, 8f, -8f, -1, 0, 0f, false, false, false);
									TASK::TASK_PLAY_ANIM(0, Local_748.f_35, Local_748.f_32, 8f, -8f, -1, 0, 0f, false, false, false);
									TASK::TASK_PLAY_ANIM(0, Local_748.f_35, Local_748.f_34, 8f, -8f, -1, 0, 0f, false, false, false);
									TASK::TASK_PLAY_ANIM(0, Local_748.f_35, "warden", 8f, -8f, -1, 0, 0f, false, false, false);
									TASK::TASK_PLAY_ANIM(0, Local_748.f_35, Local_748.f_33, 8f, -8f, -1, 0, 0f, false, false, false);
									TASK::TASK_PLAY_ANIM(0, Local_748.f_35, Local_748.f_34, 8f, -8f, -1, 0, 0f, false, false, false);
									TASK::TASK_PLAY_ANIM(0, Local_748.f_35, "warden", 8f, -8f, -1, 0, 0f, false, false, false);
									TASK::TASK_PLAY_ANIM(0, Local_748.f_35, Local_748.f_32, 8f, -8f, -1, 0, 0f, false, false, false);
									TASK::TASK_PLAY_ANIM(0, Local_748.f_35, Local_748.f_34, 8f, -8f, -1, 0, 0f, false, false, false);
									TASK::TASK_PLAY_ANIM(0, Local_748.f_35, "warden", 8f, -8f, -1, 0, 0f, false, false, false);
									TASK::TASK_PLAY_ANIM(0, Local_748.f_35, Local_748.f_33, 8f, -8f, -1, 0, 0f, false, false, false);
									TASK::TASK_PLAY_ANIM(0, Local_748.f_35, Local_748.f_31, 8f, -8f, -1, 17, 0f, false, false, false);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_480);
									TASK::TASK_PERFORM_SEQUENCE(iLocal_276, iLocal_480);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_480);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_276, true);
									PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_276, joaat("PLAYER"));
									PED::SET_PED_COMPONENT_VARIATION(iLocal_276, 0, 0, 0, 0);
									PED::SET_PED_COMPONENT_VARIATION(iLocal_276, 3, 0, 0, 0);
									PED::SET_PED_COMPONENT_VARIATION(iLocal_276, 4, 0, 0, 0);
									PED::SET_PED_COMPONENT_VARIATION(iLocal_276, 8, 0, 0, 0);
									PED::SET_PED_PROP_INDEX(iLocal_276, 0, 0, 0, false);
									if (iLocal_394)
									{
										func_943(0, 0f);
										iLocal_394 = 0;
									}
									VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_456[0], false);
									VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_456[1], false);
									func_923(Local_748.f_0);
									func_715();
									func_762("JH_CLEAR", 0, 0, 1);
									if (iLocal_413 > 0 && iLocal_413 < 3300000)
									{
										func_762("JH_SCORE_BAD", 0, 0, 1);
									}
									else if (iLocal_413 > 3300000 && iLocal_413 < 5000000)
									{
										func_762("JH_SCORE_MED", 0, 0, 1);
									}
									else if (iLocal_413 > 5000000)
									{
										func_762("JH_SCORE_GID", 0, 0, 1);
									}
									RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 4);
									func_762(Local_748.f_221, 1, 0, 1);
									PED::SET_PED_INTO_VEHICLE(func_94(1), iLocal_456[2], -1);
									if (!ENTITY::IS_ENTITY_ATTACHED(func_94(0)))
									{
										ENTITY::FREEZE_ENTITY_POSITION(func_94(0), false);
									}
									if (!ENTITY::IS_ENTITY_ATTACHED(iLocal_436[0]))
									{
										ENTITY::FREEZE_ENTITY_POSITION(iLocal_436[0], false);
									}
									TASK::TASK_LOOK_AT_ENTITY(iLocal_436[iLocal_420], func_94(0), 60000, 2048, 2);
									TASK::TASK_LOOK_AT_ENTITY(iLocal_436[iLocal_421], func_94(0), 60000, 2048, 2);
									TASK::TASK_LOOK_AT_ENTITY(func_94(1), func_94(0), 60000, 2048, 2);
									func_910(Local_748.f_17);
									iLocal_395 = 1;
								}
							}
						}
					}
					else
					{
						if ((!PED::IS_PED_IN_VEHICLE(iLocal_436[0], iLocal_456[0], true) && !PED::IS_PED_IN_VEHICLE(func_94(1), iLocal_456[0], true)) && !TASK::GET_SCRIPT_TASK_STATUS(iLocal_436[0], joaat("SCRIPT_TASK_ENTER_VEHICLE")) == 1)
						{
							if (iLocal_2099 == 0)
							{
								TASK::TASK_ENTER_VEHICLE(iLocal_436[0], iLocal_456[0], 20000, -1, 2f, 1, 0);
								iLocal_2099 = 1;
							}
						}
						if (!PED::IS_PED_IN_VEHICLE(iLocal_436[1], iLocal_456[1], false) && !func_917(iLocal_436[1], joaat("SCRIPT_TASK_ENTER_VEHICLE")))
						{
							if (!bLocal_382)
							{
								if (__LIB_0__::func_76(iLocal_436[0], iLocal_456[0], 1) < 9f)
								{
									TASK::TASK_ENTER_VEHICLE(iLocal_436[1], iLocal_456[1], 20000, -1, 2f, 131072, 0);
								}
							}
							else
							{
								TASK::TASK_ENTER_VEHICLE(iLocal_436[1], iLocal_456[1], 20000, -1, 2f, 131072, 0);
							}
						}
					}
					if (iLocal_413 >= 3300000 || iLocal_395)
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_276, false))
						{
							Local_2095 = { ENTITY::GET_ENTITY_COORDS(iLocal_276, true) };
						}
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_94(0), -630.1519f, -238.29895f, 37.067986f, -631.64166f, -236.04422f, 40.44416f, 1f, false, true, 0) || (iLocal_413 >= 3300000 && MISC::IS_BULLET_IN_AREA(Local_2095, 3f, true)))
						{
							iLocal_417++;
						}
					}
					if (Global_100441.f_12[2] == 20 && iLocal_2096 == 0)
					{
						if (__LIB_0__::func_680())
						{
							func_709("JH_SMASHALL", 1, 0, 1, 7, 0, 0);
						}
						else
						{
							func_709("JH_SMASHALL", 1, 0, 1, 7, 0, 0);
						}
						iLocal_2096 = 1;
					}
					if (iLocal_395 && iLocal_2096 == 0)
					{
						func_709("JH_MBYE", 1, 0, 1, 7, 0, 0);
						iLocal_2096 = 1;
					}
					if (iLocal_396 == 0 && SYSTEM::TIMERA() > iLocal_422 + 3500)
					{
						if (AUDIO::PREPARE_ALARM("JEWEL_STORE_HEIST_ALARMS"))
						{
							AUDIO::START_ALARM("JEWEL_STORE_HEIST_ALARMS", false);
							iLocal_396 = 1;
						}
					}
					if (iLocal_2097 == 0 && SYSTEM::TIMERA() > iLocal_422 + 5000)
					{
						AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_JSH_2A_03", 0f);
						iLocal_2097 = 1;
					}
					if (!Global_96863)
					{
						if (SYSTEM::TIMERA() > iLocal_422 + 15000)
						{
							switch (__LIB_0__::func_564(__LIB_16__::func_594(0, 2)))
							{
								case 2:
									func_762("JH_HCKACOPS", 0, 0, 1);
									break;
								case 1:
									func_762("JH_HCKBCOPS", 0, 0, 1);
									break;
								case 0:
									func_762("JH_LATECOPS2", 0, 0, 1);
									break;
							}
							Global_96863 = 1;
						}
					}
					if (SYSTEM::TIMERA() > iLocal_422 + 30000 || iLocal_406 == 1)
					{
						switch (__LIB_0__::func_564(__LIB_16__::func_594(0, 2)))
						{
							case 2:
								func_709("JH_HCKAOUT", 1, 1, 1, 7, 0, 0);
								break;
							case 1:
								func_709("JH_HCKBOUT", 1, 1, 1, 7, 0, 0);
								break;
							case 0:
								func_709("JH_HCKCCOPS", 1, 1, 1, 7, 0, 0);
								func_762("JH_LATECOPS3", 0, 0, 1);
								break;
						}
						if (!PED::IS_PED_INJURED(iLocal_276))
						{
							TASK::CLEAR_PED_TASKS(iLocal_276);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_276, -609.3799f, -286.0605f, 37.7909f, 1f, 20000, 0.25f, 0, 40000f);
						}
						iLocal_406 = 1;
						iLocal_417 = 2;
					}
				}
				break;
		}
		if (iLocal_417 >= 1)
		{
			AUDIO::STOP_AUDIO_SCENE("JSH_2B_GRAB_LOOT_MAIN");
			__LIB_0__::func_498(0, -1);
			func_895(6);
			func_895(7);
			if (bLocal_382)
			{
				func_895(10);
			}
			func_895(11);
			PATHFIND::DISABLE_NAVMESH_IN_AREA(-623.1895f, -231.5713f, 36.8759f, -620.66f, -229.683f, 38.0054f, false);
			iLocal_416 = 0;
			while (iLocal_416 <= 19)
			{
				if (HUD::DOES_BLIP_EXIST(Local_349[iLocal_416 /*30*/].f_23))
				{
					HUD::REMOVE_BLIP(&(Local_349[iLocal_416 /*30*/].f_23));
				}
				iLocal_416++;
			}
			if (iLocal_406 == 1)
			{
				iLocal_383 = 0;
				iLocal_417 = 0;
				func_716(1, 1, 1);
				func_715();
				iLocal_369 = 16;
				return 0;
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_350.f_1))
			{
				OBJECT::DELETE_OBJECT(&(Local_350.f_1));
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_467))
			{
				OBJECT::DELETE_OBJECT(&iLocal_467);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_470))
			{
				OBJECT::DELETE_OBJECT(&iLocal_470);
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_487))
			{
				HUD::REMOVE_BLIP(&iLocal_487);
			}
			iLocal_416 = 0;
			while (iLocal_416 <= 4)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_438[iLocal_416]))
				{
					if (!PED::IS_PED_INJURED(iLocal_438[iLocal_416]))
					{
						PED::SET_PED_KEEP_TASK(iLocal_438[iLocal_416], true);
					}
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_438[iLocal_416]));
				}
				iLocal_416++;
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_440))
			{
				if (!PED::IS_PED_INJURED(iLocal_440))
				{
					PED::SET_PED_KEEP_TASK(iLocal_440, true);
				}
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_440);
			}
			func_923(Local_748.f_18);
			func_923(Local_748.f_19);
			func_923(Local_748.f_20);
			func_923(Local_748.f_21);
			if (INTERIOR::IS_INTERIOR_READY(iLocal_477))
			{
				INTERIOR::UNPIN_INTERIOR(iLocal_477);
			}
			STREAMING::SET_INTERIOR_ACTIVE(iLocal_477, false);
			INTERIOR::CLEAR_ROOM_FOR_GAME_VIEWPORT();
			if (iLocal_394)
			{
				func_943(0, 0f);
				iLocal_394 = 0;
			}
			WEAPON::REMOVE_WEAPON_ASSET(iLocal_262);
			func_716(1, 1, 1);
			func_715();
			iLocal_401 = 0;
			iLocal_383 = 0;
			iLocal_417 = 0;
			if (iLocal_413 < 3300000)
			{
				iLocal_405 = 1;
			}
			return 1;
		}
	}
	return 0;
}

void func_943(bool bParam0, float fParam1)//Position - 0x99C26
{
	OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("p_jewel_door_r1"), -630.39f, -238.51f, 38.96f, bParam0, fParam1, false);
	OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("p_jewel_door_l"), -632.05f, -236.19f, 38.96f, bParam0, -fParam1, false);
}

bool func_945(int iParam0)//Position - 0x99D02
{
	return ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -617.0469f, -227.00038f, 35.408142f, -631.6362f, -237.87312f, 42.07837f, 17.25f, false, true, 0);
}

int func_946(char* sParam0)//Position - 0x99D36
{
	int iVar0;
	if (bLocal_721)
	{
		iVar0 = MISC::GET_HASH_KEY(sParam0);
		if (iVar0 == iLocal_725)
		{
			return 1;
		}
	}
	if (bLocal_722)
	{
		iVar0 = MISC::GET_HASH_KEY(sParam0);
		if (iVar0 == iLocal_726)
		{
			return 1;
		}
	}
	if (bLocal_723)
	{
		iVar0 = MISC::GET_HASH_KEY(sParam0);
		if (iVar0 == iLocal_727)
		{
			return 1;
		}
	}
	return 0;
}

void func_947(var uParam0)//Position - 0x99D8D
{
	if (HUD::DOES_BLIP_EXIST(uParam0->f_23))
	{
		HUD::REMOVE_BLIP(&(uParam0->f_23));
	}
	uParam0->f_24 = 1;
	bLocal_388 = true;
	iLocal_418 = 0;
}

void func_949()//Position - 0x99DCB
{
	struct<3> Var0;
	Var0 = { ENTITY::GET_ENTITY_COORDS(func_94(0), true) };
	iLocal_416 = 0;
	while (iLocal_416 <= 19)
	{
		if (!Local_349[iLocal_416 /*30*/].f_24)
		{
			if (SYSTEM::VDIST2(Local_349[iLocal_416 /*30*/], Var0) < SYSTEM::VDIST2(Local_349[iLocal_410 /*30*/], Var0))
			{
				if (iLocal_410 != iLocal_416)
				{
					iLocal_410 = iLocal_416;
				}
			}
		}
		iLocal_416++;
	}
}

void func_950()//Position - 0x99E3D
{
	iLocal_416 = 0;
	while (iLocal_416 <= 19)
	{
		if (!HUD::DOES_BLIP_EXIST(Local_349[iLocal_416 /*30*/].f_23))
		{
			if (!Local_349[iLocal_416 /*30*/].f_24)
			{
				Local_349[iLocal_416 /*30*/].f_23 = __LIB_0__::func_488(Local_349[iLocal_416 /*30*/], 0);
				HUD::SET_BLIP_SCALE(Local_349[iLocal_416 /*30*/].f_23, 0.5f);
				HUD::SET_BLIP_COLOUR(Local_349[iLocal_416 /*30*/].f_23, 2);
			}
		}
		iLocal_416++;
	}
}

void func_951()//Position - 0x99EB7
{
	struct<3> Var0;
	var uVar1;
	float fVar2;
	bool bVar3;
	struct<16> Var4;
	float fVar5;
	fVar2 = -1f;
	bVar3 = false;
	fVar5 = 0f;
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 0 /*INPUT_NEXT_CAMERA*/, true);
	switch (iLocal_418)
	{
		case 0:
			if (MISC::ARE_STRINGS_EQUAL(Local_349[iLocal_410 /*30*/].f_27, Local_748.f_278))
			{
				sLocal_505 = Local_748.f_39;
				Var4 = { func_955(sLocal_505) };
				sLocal_505 = __LIB_1__::func_601(&Var4);
				sLocal_506 = Local_748.f_40;
				iLocal_507 = Local_748.f_20;
				fLocal_508 = 0.2f;
				fLocal_509 = 0.4f;
				fLocal_510 = 0.71f;
				fLocal_511 = -1f;
				fLocal_512 = -1f;
				if (Local_349[iLocal_410 /*30*/].f_28 > 0)
				{
					fVar5 = 0.49f;
				}
				else
				{
					fVar5 = 0f;
				}
				if (iLocal_410 == 0)
				{
					sLocal_506 = Local_748.f_36;
				}
			}
			else if (MISC::ARE_STRINGS_EQUAL(Local_349[iLocal_410 /*30*/].f_27, Local_748.f_279))
			{
				sLocal_505 = Local_748.f_37;
				Var4 = { func_955(sLocal_505) };
				sLocal_505 = __LIB_1__::func_601(&Var4);
				sLocal_506 = Local_748.f_38;
				if (iLocal_410 == 4)
				{
					sLocal_506 = Local_748.f_43;
				}
				iLocal_507 = Local_748.f_21;
				fLocal_508 = 0.143f;
				fLocal_509 = 0.625f;
				fLocal_510 = 0.786f;
				fLocal_511 = -1f;
				fLocal_512 = -1f;
				if (Local_349[iLocal_410 /*30*/].f_28 > 0)
				{
					fVar5 = 0.319f;
				}
				else
				{
					fVar5 = 0f;
				}
			}
			else if (MISC::ARE_STRINGS_EQUAL(Local_349[iLocal_410 /*30*/].f_27, Local_748.f_280))
			{
				sLocal_505 = Local_748.f_42;
				Var4 = { func_955(sLocal_505) };
				sLocal_505 = __LIB_1__::func_601(&Var4);
				sLocal_506 = Local_748.f_43;
				iLocal_507 = Local_748.f_19;
				fLocal_508 = 0.168f;
				fLocal_509 = 0.483f;
				fLocal_510 = 0.753f;
				fLocal_511 = -1f;
				fLocal_512 = -1f;
				if (Local_349[iLocal_410 /*30*/].f_28 > 0)
				{
					fVar5 = 0.269f;
				}
				else
				{
					fVar5 = 0f;
				}
				if (iLocal_410 == 5)
				{
					sLocal_506 = Local_748.f_45;
				}
			}
			else if (MISC::ARE_STRINGS_EQUAL(Local_349[iLocal_410 /*30*/].f_27, Local_748.f_281))
			{
				sLocal_505 = Local_748.f_44;
				Var4 = { func_955(sLocal_505) };
				sLocal_505 = __LIB_1__::func_601(&Var4);
				sLocal_506 = Local_748.f_45;
				iLocal_507 = Local_748.f_18;
				fLocal_508 = 0.041f;
				fLocal_509 = 0.415f;
				fLocal_510 = 0.738f;
				fLocal_511 = -1f;
				fLocal_512 = -1f;
				if (Local_349[iLocal_410 /*30*/].f_28 > 0)
				{
					fVar5 = 0.25f;
				}
				else
				{
					fVar5 = 0f;
				}
			}
			WEAPON::SET_CURRENT_PED_WEAPON(func_94(0), iLocal_262, true);
			AUDIO::START_AUDIO_SCENE("JSH_2B_CABINET_SMASH");
			if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) != 4)
			{
				func_748(0, 1, 0, 0, 0);
			}
			HUD::CLEAR_HELP(true);
			if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) != 4)
			{
				iLocal_484 = PED::CREATE_SYNCHRONIZED_SCENE(Local_349[iLocal_410 /*30*/].f_3 - Vector(0f, 0f, 0f), Local_349[iLocal_410 /*30*/].f_6, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(func_94(0), iLocal_484, Local_748.f_35, sLocal_505, 1000f, -4f, 1, 0, 1000f, 0);
			}
			else
			{
				iLocal_484 = PED::CREATE_SYNCHRONIZED_SCENE(Local_349[iLocal_410 /*30*/].f_3 - Vector(0f, 0f, 0f), Local_349[iLocal_410 /*30*/].f_6, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(func_94(0), iLocal_484, Local_748.f_35, sLocal_505, 2f, -4f, 1, 0, 1000f, 0);
			}
			PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_484, fVar5);
			if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) != 4)
			{
				if (SYSTEM::VMAG(Local_349[iLocal_410 /*30*/].f_9) == 0f)
				{
					CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_746, iLocal_484, sLocal_506, Local_748.f_35);
					CAM::SET_CAM_ACTIVE(iLocal_746, true);
					CAM::SET_CAM_CONTROLS_MINI_MAP_HEADING(iLocal_746, true);
				}
				else
				{
					CAM::SET_CAM_COORD(iLocal_744, Local_349[iLocal_410 /*30*/].f_9);
					CAM::SET_CAM_ROT(iLocal_744, Local_349[iLocal_410 /*30*/].f_12, 2);
					CAM::SET_CAM_FOV(iLocal_744, Local_349[iLocal_410 /*30*/].f_21);
					CAM::SET_CAM_COORD(iLocal_745, Local_349[iLocal_410 /*30*/].f_15);
					CAM::SET_CAM_ROT(iLocal_745, Local_349[iLocal_410 /*30*/].f_18, 2);
					CAM::SET_CAM_FOV(iLocal_745, Local_349[iLocal_410 /*30*/].f_22);
					CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_745, iLocal_744, 2500, 3, 3);
					CAM::SET_CAM_CONTROLS_MINI_MAP_HEADING(iLocal_745, true);
				}
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			}
			iLocal_2036 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(Local_349[iLocal_410 /*30*/], 2f, 2f, 2f, 0f, false, 7);
			iLocal_418++;
			break;
		case 1:
			if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
			{
				if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_436[iLocal_420], 1) < 1f)
				{
					ENTITY::SET_ENTITY_VISIBLE(iLocal_436[iLocal_420], false, false);
				}
			}
			CAM::DISABLE_NEAR_CLIP_SCAN_THIS_UPDATE();
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_484))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_484) > fLocal_508)
				{
					if (Local_349[iLocal_410 /*30*/].f_28 == 0)
					{
						Local_737[6 /*3*/] = AUDIO::GET_SOUND_ID();
						AUDIO::PLAY_SOUND_FROM_COORD(Local_737[6 /*3*/], "SMASH_CABINET_PLAYER", Local_349[iLocal_410 /*30*/], "JEWEL_HEIST_SOUNDS", false, 0, false);
						if ((iLocal_410 % 2) == 0)
						{
							RECORDING::REPLAY_RECORD_BACK_FOR_TIME(2f, 4f, 4);
						}
						GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_jewel_cab_smash", WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(PLAYER::PLAYER_PED_ID(), 1), Local_315, Local_316, 1f, false, false, false);
						if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(Local_349[iLocal_410 /*30*/], 2f, joaat("p_int_jewel_mirror"), false))
						{
							OBJECT::GET_COORDS_AND_ROTATION_OF_CLOSEST_OBJECT_OF_TYPE(Local_349[iLocal_410 /*30*/], 2f, joaat("p_int_jewel_mirror"), &Var0, &uVar1, 2);
							if (!ENTITY::DOES_ENTITY_EXIST(iLocal_467))
							{
								iLocal_467 = OBJECT::CREATE_OBJECT(Local_748.f_11, Var0, true, true, false);
							}
							ENTITY::SET_ENTITY_VISIBLE(iLocal_467, false, false);
							ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_467, 0, 0f, 0f, 0.1f, Local_518, 0, true, true, false, false, true);
						}
					}
					iLocal_418++;
				}
			}
			break;
		case 2:
			if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
			{
				if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_436[iLocal_420], 1) < 1f)
				{
					ENTITY::SET_ENTITY_VISIBLE(iLocal_436[iLocal_420], false, false);
				}
			}
			CAM::DISABLE_NEAR_CLIP_SCAN_THIS_UPDATE();
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_484))
			{
				if (Local_349[iLocal_410 /*30*/].f_28 == 0)
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_484) > fLocal_508)
					{
						if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_502) == 5)
						{
							OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_502, 6);
						}
					}
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_469))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_484) > fLocal_509)
					{
						iLocal_469 = OBJECT::CREATE_OBJECT(iLocal_507, Local_349[iLocal_410 /*30*/].f_3, true, true, false);
						ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_469, func_94(0), PED::GET_PED_BONE_INDEX(func_94(0), 60309), Local_518, Local_518, false, false, false, false, 2, true, 0);
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_467))
						{
							OBJECT::DELETE_OBJECT(&iLocal_467);
						}
						iLocal_413 = (iLocal_413 + Local_349[iLocal_410 /*30*/].f_26);
						if ((iLocal_410 == 10 || iLocal_410 == 11) || iLocal_410 == 13)
						{
							iLocal_74 = 1;
						}
						Global_100441.f_12[2]++;
						iLocal_418++;
					}
				}
			}
			break;
		case 3:
			if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
			{
				if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_436[iLocal_420], 1) < 1f)
				{
					ENTITY::SET_ENTITY_VISIBLE(iLocal_436[iLocal_420], false, false);
				}
			}
			CAM::DISABLE_NEAR_CLIP_SCAN_THIS_UPDATE();
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_484))
			{
				if (fLocal_511 < 0f)
				{
					iLocal_418++;
				}
				else if (ENTITY::DOES_ENTITY_EXIST(iLocal_469))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_484) > fLocal_510)
					{
						OBJECT::DELETE_OBJECT(&iLocal_469);
					}
				}
				else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_484) > fLocal_511)
				{
					iLocal_469 = OBJECT::CREATE_OBJECT(iLocal_507, Local_349[iLocal_410 /*30*/].f_3, true, true, false);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_469, func_94(0), PED::GET_PED_BONE_INDEX(func_94(0), 60309), Local_518, Local_518, false, false, false, false, 2, true, 0);
					iLocal_418++;
				}
			}
			break;
		case 4:
			if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
			{
				if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_436[iLocal_420], 1) < 1f)
				{
					ENTITY::SET_ENTITY_VISIBLE(iLocal_436[iLocal_420], false, false);
				}
			}
			CAM::DISABLE_NEAR_CLIP_SCAN_THIS_UPDATE();
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_484))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_469))
				{
					if (fLocal_511 < 0f)
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_484) > fLocal_510)
						{
							OBJECT::DELETE_OBJECT(&iLocal_469);
						}
					}
					else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_484) > fLocal_512)
					{
						OBJECT::DELETE_OBJECT(&iLocal_469);
					}
				}
				fVar2 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_484);
				if (fVar2 > 0.92f)
				{
					bVar3 = true;
				}
				if (iLocal_410 == 0)
				{
					if (fVar2 > 0.8f)
					{
						bVar3 = true;
					}
				}
				if (func_953(iLocal_484) || (ENTITY::HAS_ANIM_EVENT_FIRED(func_94(0), MISC::GET_HASH_KEY("early_out")) && (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 30 /*INPUT_MOVE_LR*/) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 31 /*INPUT_MOVE_UD*/))))
				{
					bVar3 = true;
				}
			}
			else
			{
				bVar3 = true;
			}
			if (bVar3)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_469))
				{
					OBJECT::DELETE_OBJECT(&iLocal_469);
				}
				WEAPON::SET_CURRENT_PED_WEAPON(func_94(0), iLocal_262, true);
				WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(func_94(0), false);
				PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_2036);
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) != 4)
				{
					func_704(0, 1, 1500, 1, 0);
				}
				TASK::CLEAR_PED_TASKS(func_94(0));
				ENTITY::SET_ENTITY_VISIBLE(iLocal_436[iLocal_420], true, false);
				if (fVar2 > 0f)
				{
				}
				func_952(func_94(0), 0, 0, 0, 0, 0, 0, 0);
				AUDIO::STOP_AUDIO_SCENE("JSH_2B_CABINET_SMASH");
				bLocal_388 = false;
			}
			break;
	}
}

void func_952(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x9A78B
{
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iParam0, false, false);
	if (iParam1 != 0)
	{
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iParam1, false, false);
		if (iParam2 != 0)
		{
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iParam2, false, false);
			if (iParam3 != 0)
			{
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iParam3, false, false);
				if (iParam4 != 0)
				{
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iParam4, false, false);
					if (iParam5 != 0)
					{
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iParam5, false, false);
						if (iParam6 != 0)
						{
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iParam6, false, false);
							if (iParam7 != 0)
							{
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iParam7, false, false);
							}
						}
					}
				}
			}
		}
	}
}

int func_953(int iParam0)//Position - 0x9A7FD
{
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iParam0))
	{
		if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iParam0) >= 1f)
		{
			return 1;
		}
	}
	return 0;
}

struct<16> func_955(char* sParam0)//Position - 0x9A828
{
	struct<16> Var0;
	struct<16> Var1;
	StringCopy(&Var0, "FP_", 64);
	StringCopy(&Var1, sParam0, 64);
	if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
	{
		StringConCat(&Var0, &Var1, 64);
		return Var0;
	}
	return Var1;
}

void func_956()//Position - 0x9A85E
{
	struct<3> Var0;
	var uVar1;
	iLocal_416 = 0;
	while (iLocal_416 <= 19)
	{
		if (!Local_349[iLocal_416 /*30*/].f_24)
		{
			switch (Local_349[iLocal_416 /*30*/].f_28)
			{
				case 0:
					if (MISC::IS_BULLET_IN_AREA(Local_349[iLocal_416 /*30*/], 0.8f, true))
					{
						Local_349[iLocal_416 /*30*/].f_29 = OBJECT::GET_RAYFIRE_MAP_OBJECT(Local_349[iLocal_416 /*30*/], 1f, Local_349[iLocal_416 /*30*/].f_27);
						OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(Local_349[iLocal_416 /*30*/].f_29, 4);
						Local_349[iLocal_416 /*30*/].f_28++;
					}
					break;
				case 1:
					if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(Local_349[iLocal_416 /*30*/].f_29) == 5)
					{
						OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(Local_349[iLocal_416 /*30*/].f_29, 6);
						func_957(6, Local_748.f_249, Local_349[iLocal_416 /*30*/], 0);
						if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(Local_349[iLocal_416 /*30*/], 2f, joaat("p_int_jewel_mirror"), false))
						{
							OBJECT::GET_COORDS_AND_ROTATION_OF_CLOSEST_OBJECT_OF_TYPE(Local_349[iLocal_416 /*30*/], 2f, joaat("p_int_jewel_mirror"), &Var0, &uVar1, 2);
							if (!ENTITY::DOES_ENTITY_EXIST(iLocal_467))
							{
								iLocal_467 = OBJECT::CREATE_OBJECT(Local_748.f_11, Var0, true, true, false);
							}
							ENTITY::SET_ENTITY_VISIBLE(iLocal_467, false, false);
							ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_467, 0, 0f, 0f, 0.1f, Local_518, 0, true, true, false, false, true);
						}
						Local_349[iLocal_416 /*30*/].f_28++;
					}
					break;
				case 2:
					break;
				}
		}
		iLocal_416++;
	}
}

void func_957(int iParam0, char* sParam1, struct<3> Param2, bool bParam3)//Position - 0x9A9D3
{
	if (!Local_737[iParam0 /*3*/].f_1)
	{
		if (!Local_737[iParam0 /*3*/].f_2)
		{
			Local_737[iParam0 /*3*/] = AUDIO::GET_SOUND_ID();
		}
		AUDIO::PLAY_SOUND_FROM_COORD(Local_737[iParam0 /*3*/], sParam1, Param2, 0, false, 0, false);
		Local_737[iParam0 /*3*/].f_2 = 1;
		if (bParam3)
		{
			Local_737[iParam0 /*3*/].f_1 = 1;
		}
	}
}

void func_958(int iParam0, int iParam1)//Position - 0x9AA2E
{
	struct<3> Var0;
	var uVar1;
	struct<3> Var2;
	float fVar3;
	fVar3 = 0f;
	switch (iLocal_272)
	{
		case 0:
			if (Global_100441.f_12[2] >= 19 && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_2037))
			{
				iLocal_272 = 100;
			}
			else if ((bLocal_390 == 1 || bLocal_389 == 1) && iLocal_395 == 0)
			{
				iLocal_272 = 99;
			}
			else
			{
				if (iLocal_2038 == 0)
				{
					if (bLocal_382)
					{
						iLocal_411 = 8;
					}
					else
					{
						iLocal_411 = 6;
					}
					iLocal_2038 = 1;
				}
				else
				{
					func_962();
				}
				if (iLocal_411 != -1)
				{
					iLocal_271 = iLocal_411;
					if (Local_349[iLocal_271 /*30*/].f_28 == 0)
					{
						iLocal_503 = OBJECT::GET_RAYFIRE_MAP_OBJECT(Local_349[iLocal_271 /*30*/], 1f, Local_349[iLocal_271 /*30*/].f_27);
						OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_503, 4);
					}
					iLocal_272 = 1;
				}
			}
			break;
		case 1:
			if (iLocal_271 == iLocal_410)
			{
				TASK::CLEAR_PED_TASKS(iParam0);
				iLocal_272 = 0;
			}
			else if (func_959(iParam0, Local_349[iLocal_271 /*30*/].f_3, __LIB_0__::func_932(Local_349[iLocal_271 /*30*/].f_3, Local_349[iLocal_271 /*30*/]), 2f, 0.5f, 10f))
			{
				if (Local_349[iLocal_271 /*30*/].f_24 == 1)
				{
				}
				if (MISC::ARE_STRINGS_EQUAL(Local_349[iLocal_271 /*30*/].f_27, Local_748.f_278))
				{
					sLocal_513 = Local_748.f_41;
					iLocal_514 = Local_748.f_19;
					fLocal_515 = 0.204f;
					fLocal_516 = 0.3f;
					fLocal_517 = 0.691f;
					if (Local_349[iLocal_271 /*30*/].f_28 > 0)
					{
						fVar3 = 0.49f;
					}
					else
					{
						fVar3 = 0f;
					}
				}
				else if (MISC::ARE_STRINGS_EQUAL(Local_349[iLocal_271 /*30*/].f_27, Local_748.f_279))
				{
					sLocal_513 = Local_748.f_37;
					iLocal_514 = Local_748.f_21;
					fLocal_515 = 0.143f;
					fLocal_516 = 0.625f;
					fLocal_517 = 0.786f;
					if (Local_349[iLocal_271 /*30*/].f_28 > 0)
					{
						fVar3 = 0.319f;
					}
					else
					{
						fVar3 = 0f;
					}
				}
				else if (MISC::ARE_STRINGS_EQUAL(Local_349[iLocal_271 /*30*/].f_27, Local_748.f_280))
				{
					sLocal_513 = Local_748.f_42;
					iLocal_514 = Local_748.f_19;
					fLocal_515 = 0.168f;
					fLocal_516 = 0.483f;
					fLocal_517 = 0.753f;
					if (Local_349[iLocal_271 /*30*/].f_28 > 0)
					{
						fVar3 = 0.269f;
					}
					else
					{
						fVar3 = 0f;
					}
				}
				else if (MISC::ARE_STRINGS_EQUAL(Local_349[iLocal_271 /*30*/].f_27, Local_748.f_281))
				{
					sLocal_513 = Local_748.f_44;
					iLocal_514 = Local_748.f_18;
					fLocal_515 = 0.051f;
					fLocal_516 = 0.415f;
					fLocal_517 = 0.738f;
					if (Local_349[iLocal_271 /*30*/].f_28 > 0)
					{
						fVar3 = 0.25f;
					}
					else
					{
						fVar3 = 0f;
					}
				}
				WEAPON::SET_CURRENT_PED_WEAPON(iParam0, iLocal_262, true);
				if (HUD::DOES_BLIP_EXIST(Local_349[iLocal_271 /*30*/].f_23))
				{
					HUD::REMOVE_BLIP(&(Local_349[iLocal_271 /*30*/].f_23));
				}
				iLocal_2037 = PED::CREATE_SYNCHRONIZED_SCENE(Local_349[iLocal_271 /*30*/].f_3, Local_349[iLocal_271 /*30*/].f_6, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(iParam0, iLocal_2037, Local_748.f_35, sLocal_513, 4f, -4f, 1, 0, 4f, 0);
				PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_2037, fVar3);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_2037, false);
				Local_349[iLocal_271 /*30*/].f_24 = 1;
				Global_100441.f_12[2]++;
				iLocal_272++;
			}
			break;
		case 2:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_2037))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_1))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_2037) > fLocal_516 && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_2037) < fLocal_517)
					{
						iParam1->f_1 = OBJECT::CREATE_OBJECT(iLocal_514, Local_349[iLocal_271 /*30*/].f_3, true, true, false);
						ENTITY::ATTACH_ENTITY_TO_ENTITY(iParam1->f_1, iParam0, PED::GET_PED_BONE_INDEX(iParam0, 60309), Local_518, Local_518, false, false, false, false, 2, true, 0);
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_467))
						{
							OBJECT::DELETE_OBJECT(&iLocal_467);
						}
					}
				}
				else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_2037) > fLocal_517)
				{
					OBJECT::DELETE_OBJECT(&(iParam1->f_1));
				}
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_2037) > fLocal_515)
				{
					if (Local_349[iLocal_271 /*30*/].f_28 == 0)
					{
						if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_503) == 5)
						{
							OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_503, 6);
							Local_737[7 /*3*/] = AUDIO::GET_SOUND_ID();
							AUDIO::PLAY_SOUND_FROM_COORD(Local_737[7 /*3*/], "SMASH_CABINET_NPC", Local_349[iLocal_271 /*30*/], "JEWEL_HEIST_SOUNDS", false, 0, false);
							if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(Local_349[iLocal_271 /*30*/], 2f, joaat("p_int_jewel_mirror"), false))
							{
								OBJECT::GET_COORDS_AND_ROTATION_OF_CLOSEST_OBJECT_OF_TYPE(Local_349[iLocal_271 /*30*/], 2f, joaat("p_int_jewel_mirror"), &Var0, &uVar1, 2);
								if (!ENTITY::DOES_ENTITY_EXIST(iLocal_467))
								{
									iLocal_467 = OBJECT::CREATE_OBJECT(Local_748.f_11, Var0, true, true, false);
								}
								ENTITY::SET_ENTITY_VISIBLE(iLocal_467, false, false);
								ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_467, 0, 0f, 0f, 0.1f, Local_518, 0, true, true, false, false, true);
							}
							Var2 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(Local_748.f_35, sLocal_513, Local_349[iLocal_271 /*30*/].f_3, Local_349[iLocal_271 /*30*/].f_6, 0f, 2) };
							MISC::GET_GROUND_Z_FOR_3D_COORD(Var2, &(Var2.f_2), false, false);
							AUDIO::RECORD_BROKEN_GLASS(Var2, 2f);
						}
					}
					iLocal_272++;
				}
			}
			break;
		case 3:
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_2037) > 0.8f)
			{
				iLocal_413 = (iLocal_413 + SYSTEM::ROUND((IntToFloat(Local_349[iLocal_271 /*30*/].f_26) * fLocal_423)));
				iLocal_272++;
			}
			break;
		case 4:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_2037))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_2037) >= 1f)
				{
					iLocal_272 = 0;
					TASK::CLEAR_PED_TASKS(iParam0);
				}
			}
			else
			{
				iLocal_272 = 0;
			}
			break;
		case 99:
			if (bLocal_390 == 0 && (iLocal_419 == 99 || bLocal_389 == 0))
			{
				iLocal_272 = 0;
			}
			func_968(iParam0, &uLocal_360);
			break;
		case 100:
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_2037))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_1))
				{
					OBJECT::DELETE_OBJECT(&(iParam1->f_1));
				}
				if ((!func_917(iParam0, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) && !func_917(iParam0, joaat("SCRIPT_TASK_ENTER_VEHICLE"))) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam0, Local_318, 2f, 20000, 0.25f, 0, 40000f);
					iLocal_272++;
				}
			}
			break;
	}
}

int func_959(int iParam0, struct<3> Param1, float fParam2, float fParam3, float fParam4, float fParam5)//Position - 0x9B040
{
	struct<3> Var0;
	struct<3> Var1;
	Var0.f_0 = fParam2;
	Var1 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) + Vector(-1f, 0f, 0f) };
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (!func_917(iParam0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iParam0, false);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_480);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD_ADVANCED(0, Param1, fParam3, 40000, fParam4, 2, Var0, 40000f);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_480);
			TASK::TASK_PERFORM_SEQUENCE(iParam0, iLocal_480);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_480);
		}
		else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var1, Param1, true) < fParam4 && __LIB_16__::func_440(iParam0, fParam2, fParam5))
		{
			return 1;
		}
	}
	return 0;
}

void func_962()//Position - 0x9B19A
{
	float fVar0;
	float fVar1;
	fVar0 = 0f;
	fVar1 = 0f;
	iLocal_411 = -1;
	iLocal_416 = 0;
	while (iLocal_416 <= 19)
	{
		fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_349[iLocal_416 /*30*/], ENTITY::GET_ENTITY_COORDS(func_94(0), true), true);
		if (fVar0 > fVar1)
		{
			if (Local_349[iLocal_416 /*30*/].f_24 == 0)
			{
				iLocal_504 = OBJECT::GET_RAYFIRE_MAP_OBJECT(Local_349[iLocal_416 /*30*/], 1f, Local_349[iLocal_416 /*30*/].f_27);
				if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_504))
				{
					if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_504) == 3)
					{
						if (iLocal_411 == iLocal_410)
						{
						}
						else
						{
							iLocal_411 = iLocal_416;
							fVar1 = fVar0;
						}
					}
				}
			}
		}
		iLocal_416++;
	}
	if (func_963())
	{
	}
}

int func_963()//Position - 0x9B245
{
	iLocal_416 = 0;
	while (iLocal_416 <= 19)
	{
		if (!Local_349[iLocal_416 /*30*/].f_24)
		{
			return 0;
		}
		iLocal_416++;
	}
	return 1;
}

void func_964(int iParam0)//Position - 0x9B277
{
	switch (__LIB_16__::func_594(0, 2))
	{
		case 6:
			if (iParam0 > iLocal_422)
			{
				if (!iLocal_408[1])
				{
					func_762("JH_HCKA00", 0, 0, 1);
					iLocal_408[1] = 1;
				}
			}
			else if (iParam0 > iLocal_422)
			{
				if (!iLocal_408[2])
				{
					func_762(Local_748.f_132, 0, 0, 1);
					iLocal_408[2] = 1;
				}
			}
			else if (iParam0 > (iLocal_422 - 20000))
			{
				if (!iLocal_408[3])
				{
					if (Global_100441.f_12[2] < 17)
					{
						func_762("JH_NOTIME", 0, 0, 1);
					}
					func_762(Local_748.f_133, 0, 0, 1);
					if (iLocal_413 < 3300000)
					{
						func_762("JH_NO2MIL", 0, 0, 1);
					}
					iLocal_408[3] = 1;
				}
			}
			else if (iParam0 > (iLocal_422 - 30000))
			{
				if (!iLocal_408[4])
				{
					func_762(Local_748.f_134, 0, 0, 1);
					iLocal_408[4] = 1;
				}
			}
			else if (iParam0 > (iLocal_422 - 40000))
			{
				if (!iLocal_408[5])
				{
					func_762(Local_748.f_135, 0, 0, 1);
					if (iLocal_413 < 3300000)
					{
						func_762("JH_HALF", 0, 0, 1);
					}
					iLocal_408[5] = 1;
				}
			}
			else if (iParam0 > (iLocal_422 - 50000))
			{
				if (!iLocal_408[6])
				{
					func_762(Local_748.f_136, 0, 0, 1);
					iLocal_408[6] = 1;
				}
			}
			else if (iParam0 > (iLocal_422 - 60000))
			{
				if (!iLocal_408[7])
				{
					func_762(Local_748.f_137, 0, 0, 1);
					iLocal_408[7] = 1;
				}
			}
			else if (iParam0 > (iLocal_422 - 70000))
			{
				if (!iLocal_408[8])
				{
					iLocal_408[8] = 1;
				}
			}
			else if (iParam0 > (iLocal_422 - 80000))
			{
				if (!iLocal_408[9])
				{
					func_762("JH_LOTSTIME", 0, 0, 1);
					func_762("JH_HCKA80", 0, 0, 1);
					iLocal_408[9] = 1;
				}
			}
			break;
		case 7:
			if (iParam0 > iLocal_422)
			{
				if (!iLocal_408[1])
				{
					func_762("JH_HCKB00", 0, 0, 1);
					iLocal_408[1] = 1;
				}
			}
			else if (iParam0 > (iLocal_422 - 10000))
			{
				if (!iLocal_408[2])
				{
					func_762(Local_748.f_138, 0, 0, 1);
					iLocal_408[2] = 1;
				}
			}
			else if (iParam0 > (iLocal_422 - 20000))
			{
				if (!iLocal_408[3])
				{
					if (Global_100441.f_12[2] < 17)
					{
						func_762("JH_NOTIME", 0, 0, 1);
					}
					func_762(Local_748.f_139, 0, 0, 1);
					if (iLocal_413 < 3300000)
					{
						func_762("JH_NO2MIL", 0, 0, 1);
					}
					iLocal_408[3] = 1;
				}
			}
			else if (iParam0 > (iLocal_422 - 30000))
			{
				if (!iLocal_408[4])
				{
					func_762(Local_748.f_140, 0, 0, 1);
					if (iLocal_413 < 3300000)
					{
						func_762("JH_HALF", 0, 0, 1);
					}
					iLocal_408[4] = 1;
				}
			}
			else if (iParam0 > (iLocal_422 - 40000))
			{
				if (!iLocal_408[5])
				{
					func_762(Local_748.f_141, 0, 0, 1);
					iLocal_408[5] = 1;
				}
			}
			else if (iParam0 > (iLocal_422 - 50000))
			{
				if (!iLocal_408[6])
				{
					func_762("JH_HCKB50", 0, 0, 1);
					iLocal_408[6] = 1;
				}
			}
			break;
		case 12:
			if (iParam0 > iLocal_422 + 10000)
			{
				if (!iLocal_408[0])
				{
					func_762("JH_HCKCC5", 0, 0, 1);
					iLocal_408[0] = 1;
				}
			}
			else if (iParam0 > iLocal_422 + 8000)
			{
				if (!iLocal_408[1])
				{
					func_762("JH_HCKCC4", 0, 0, 1);
					iLocal_408[1] = 1;
				}
			}
			else if (iParam0 > iLocal_422 + 5000)
			{
				if (!iLocal_408[2])
				{
					iLocal_408[2] = 1;
				}
			}
			else if (iParam0 > (iLocal_422 - 13000))
			{
				if (!iLocal_408[3])
				{
					func_762("JH_HCKCCDWN", 0, 0, 1);
					iLocal_408[3] = 1;
				}
			}
			else if (iParam0 > (iLocal_422 - 19000))
			{
				if (!iLocal_408[4])
				{
					if (Global_100441.f_12[2] < 17)
					{
						func_762("JH_NOTIME", 0, 0, 1);
					}
					iLocal_408[4] = 1;
				}
			}
			else if (iParam0 > (iLocal_422 - 32000))
			{
				if (!iLocal_408[4])
				{
					func_762("JH_HCK30", 0, 0, 1);
					iLocal_408[4] = 1;
				}
			}
			else if (iParam0 > (iLocal_422 - 36500))
			{
				if (!iLocal_408[5])
				{
					if (iLocal_413 < 3300000)
					{
						func_762("JH_NO2MIL", 0, 0, 1);
					}
					iLocal_408[5] = 1;
				}
			}
			else if (iParam0 > (iLocal_422 - 50000))
			{
				if (!iLocal_408[6])
				{
					func_762("JH_HCKCC3", 0, 0, 1);
					iLocal_408[6] = 1;
				}
			}
			else if (iParam0 > (iLocal_422 - 50000))
			{
				if (!iLocal_408[7])
				{
					iLocal_408[7] = 1;
				}
			}
			else if (iParam0 > (iLocal_422 - 60000))
			{
				if (!iLocal_408[8])
				{
					iLocal_408[8] = 1;
				}
			}
			break;
	}
}

void func_965()//Position - 0x9B76A
{
	struct<3> Var0;
	if (!PED::IS_PED_INJURED(iLocal_437))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_437, PLAYER::PLAYER_PED_ID(), true))
		{
			PED::APPLY_DAMAGE_TO_PED(iLocal_437, 100, true, 0);
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_440))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_440, PLAYER::PLAYER_PED_ID(), true))
		{
			PED::APPLY_DAMAGE_TO_PED(iLocal_440, 100, true, 0);
		}
	}
	if (bLocal_424)
	{
		if (!iLocal_391)
		{
			if ((!iLocal_402 && bLocal_389 == 1) && iLocal_419 <= 7)
			{
				if (!PED::IS_PED_INJURED(iLocal_437))
				{
					if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_437) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_437))
					{
						HUD::CLEAR_PRINTS();
						func_715();
						__LIB_0__::func_429();
						func_709("JH_DOWN", 1, 1, 1, 7, 0, 0);
						func_762("JH_BERATE", 0, 0, 1);
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 2f, 3);
						ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_437, false, 0f);
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("JSH_2B_SECURITY_ESCAPE"))
						{
							AUDIO::STOP_AUDIO_SCENE("JSH_2B_SECURITY_ESCAPE");
						}
						iLocal_419 = 97;
						iLocal_402 = 1;
					}
				}
				else if (AUDIO::IS_AUDIO_SCENE_ACTIVE("JSH_2B_SECURITY_ESCAPE"))
				{
					AUDIO::STOP_AUDIO_SCENE("JSH_2B_SECURITY_ESCAPE");
				}
			}
			switch (iLocal_419)
			{
				case 0:
					if (!PED::IS_PED_INJURED(iLocal_437))
					{
						func_967(iLocal_437);
						PED::SET_PED_CAN_BE_TARGETTED(iLocal_437, true);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_437);
						TASK::TASK_MOVE_NETWORK_ADVANCED_BY_NAME(iLocal_437, "HeistJewel_SecurityGuard2B", -1629.104f, -231.389f, 38.064f, 0f, 0f, 158f, 2, 0f, false, "", 4);
					}
					iLocal_402 = 0;
					iLocal_419++;
					break;
				case 1:
					if (((((((((MISC::GET_GAME_TIMER() - iLocal_2034) > 7000 && !bLocal_388) && !HUD::IS_MESSAGE_BEING_DISPLAYED()) && !AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()) && ((iLocal_281 < 3 || iLocal_281 == 11) || (ENTITY::DOES_ENTITY_EXIST(iLocal_440) && PED::IS_PED_INJURED(iLocal_440)))) && !PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_437)) && !PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_437)) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && CAM::IS_GAMEPLAY_CAM_RENDERING())
					{
						if (__LIB_17__::func_243(&uLocal_539, "JHAUD", "JH_RUN", 9, 0, 0, 0))
						{
							AUDIO::START_AUDIO_SCENE("JSH_2B_SECURITY_ESCAPE");
							__LIB_0__::func_429();
							bLocal_389 = true;
							iLocal_419++;
						}
					}
					break;
				case 2:
					iLocal_419++;
					break;
				case 3:
					if (!PED::IS_PED_INJURED(iLocal_437))
					{
						if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(iLocal_437))
						{
							ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_437, true, 0f);
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_437, false);
							func_943(0, 0f);
							func_966();
							iLocal_497 = __LIB_0__::func_666(iLocal_437, 1, 145);
							func_748(1, 0, 0, 1, 1);
							func_718(-628.311f, -230.89638f, 37.33458f, 3.294292f, 0f, 145.18661f, 45f, -628.5309f, -231.21275f, 37.356766f, 3.294292f, 0f, 145.18661f, 45f, 2500, 0);
							SYSTEM::SETTIMERB(0);
							if (TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(iLocal_437))
							{
								TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(iLocal_437, "UP");
							}
							ENTITY::CREATE_MODEL_HIDE(-621.8983f, -230.8202f, 37.057f, 10f, joaat("p_jewel_door_l"), false);
							iLocal_475 = OBJECT::CREATE_OBJECT(joaat("p_jewel_door_l"), -631.96f, -236.33f, 37.057f, true, true, false);
							ENTITY::SET_ENTITY_HEADING(iLocal_475, -54.430992f);
							iLocal_476 = PED::CREATE_SYNCHRONIZED_SCENE(-631.934f, -236.331f, 37.059f, 0f, 0f, 36f, 2);
							ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_475, iLocal_476, "2B_door_shut", "missHeist_jewel", 1000f, 8f, 0, 1000f);
							PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_476, true);
							bLocal_389 = true;
							iLocal_419++;
						}
						else
						{
							iLocal_419 = 99;
						}
					}
					else
					{
						iLocal_419 = 99;
					}
					break;
				case 4:
					if (SYSTEM::TIMERB() > 2500)
					{
						if (!PED::IS_PED_INJURED(iLocal_437))
						{
							Var0 = { ENTITY::GET_ENTITY_COORDS(iLocal_437, true) - ENTITY::GET_ENTITY_COORDS(func_94(0), true) };
							ENTITY::SET_ENTITY_HEADING(func_94(0), MISC::GET_HEADING_FROM_VECTOR_2D(Var0.f_0, Var0.f_1));
							CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
							func_114();
							SYSTEM::SETTIMERB(0);
							func_904(Local_748.f_225, 1, 1, 1, 7500);
							if (!PED::IS_PED_INJURED(iLocal_437))
							{
								ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_437, true, 0f);
							}
						}
						iLocal_2035 = 0;
						func_704(1, 0, 3000, 1, 1);
						iLocal_419++;
					}
					break;
				case 5:
					if (!PED::IS_PED_INJURED(iLocal_437))
					{
						if (!PED::IS_PED_INJURED(iLocal_437))
						{
							if (TASK::GET_TASK_MOVE_NETWORK_SIGNAL_BOOL(iLocal_437, "Run"))
							{
								iLocal_419++;
							}
						}
					}
					else
					{
						iLocal_419 = 99;
					}
					break;
				case 6:
					if (!PED::IS_PED_INJURED(iLocal_437))
					{
						if (TASK::GET_TASK_MOVE_NETWORK_SIGNAL_BOOL(iLocal_437, "Escape"))
						{
							iLocal_476 = PED::CREATE_SYNCHRONIZED_SCENE(-631.934f, -236.331f, 37.059f, 0f, 0f, 36f, 2);
							ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_475, iLocal_476, "2B_door_escape", "missHeist_jewel", 1000f, 8f, 0, 1000f);
							PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_476, false);
							SYSTEM::SETTIMERB(0);
							iLocal_419++;
						}
					}
					else
					{
						iLocal_419 = 99;
					}
					break;
				case 7:
					if (!PED::IS_PED_INJURED(iLocal_437))
					{
						if (SYSTEM::TIMERB() > 2468)
						{
							ENTITY::SET_ENTITY_COLLISION(iLocal_437, true, false);
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_437);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_480);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_325, 3f, -1, 0.25f, 8192, 40000f);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_326, 3f, -1, 0.25f, 8192, 40000f);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_480);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_437, iLocal_480);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_480);
							PED::FORCE_PED_MOTION_STATE(iLocal_437, joaat("MotionState_Sprint"), true, 0, false);
							func_952(iLocal_437, 0, 0, 0, 0, 0, 0, 0);
							iLocal_419++;
						}
					}
					else
					{
						iLocal_419 = 99;
					}
					break;
				case 8:
					if (!PED::IS_PED_INJURED(iLocal_437))
					{
						if (ENTITY::IS_ENTITY_AT_COORD(iLocal_437, -656.51587f, -211.48466f, 38.809677f, 3.5625f, 3.75f, 2.5f, false, true, 0))
						{
							iLocal_285 = 20;
							func_1074();
						}
					}
					else
					{
						iLocal_419 = 99;
					}
					break;
				case 97:
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_437, true);
					TASK::TASK_PLAY_ANIM(iLocal_437, "missheist_jewel", "2b_guard_getdown", 8f, -8f, -1, 8, 0f, false, false, false);
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 2f, 3);
					SYSTEM::SETTIMERB(0);
					HUD::REMOVE_BLIP(&iLocal_497);
					iLocal_419 = 98;
					break;
				case 98:
					if (SYSTEM::TIMERB() > 1500)
					{
						iLocal_419 = 99;
					}
					break;
				case 99:
					func_704(1, 0, 3000, 1, 1);
					if (HUD::DOES_BLIP_EXIST(iLocal_497))
					{
						HUD::REMOVE_BLIP(&iLocal_497);
					}
					ENTITY::REMOVE_MODEL_HIDE(-621.8983f, -230.8202f, 37.057f, 10f, joaat("p_jewel_door_l"), false);
					OBJECT::DELETE_OBJECT(&iLocal_475);
					bLocal_389 = false;
					iLocal_391 = 1;
					iLocal_419 = 100;
					break;
			}
			if (iLocal_419 >= 3)
			{
				if (iLocal_2035 == 0)
				{
					if (__LIB_17__::func_243(&uLocal_539, "JHAUD", "JH_RUNNER", 9, 1, 0, 0))
					{
						iLocal_2035 = 1;
					}
				}
			}
		}
		else if (!PED::IS_PED_INJURED(iLocal_437))
		{
			if ((!TASK::IS_TASK_MOVE_NETWORK_ACTIVE(iLocal_437) && ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_437, "missheist_jewel", "2b_guard_getdown", 3)) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_437, "missheist_jewel", "2b_guard_getdown") >= 0.99f)
			{
				if (!PED::IS_PED_INJURED(iLocal_437))
				{
					ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_437, false, 0f);
				}
				TASK::TASK_PLAY_ANIM(iLocal_437, "missheist_jewel", Local_748.f_48, 1000f, -8f, -1, 9, 0f, false, false, false);
			}
		}
	}
	if (iLocal_419 > 6)
	{
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_476))
		{
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_476) >= 1f)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_475))
				{
					ENTITY::REMOVE_MODEL_HIDE(-621.8983f, -230.8202f, 37.057f, 10f, joaat("p_jewel_door_l"), false);
					OBJECT::DELETE_OBJECT(&iLocal_475);
				}
			}
		}
	}
	if (iLocal_2033 == 0)
	{
		if (iLocal_281 >= 3)
		{
			if (!PED::IS_PED_INJURED(iLocal_440))
			{
				if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_440) && (MISC::GET_GAME_TIMER() - iLocal_736) > 2000)
				{
					switch (iLocal_75)
					{
						case 0:
							__LIB_0__::func_709(iLocal_440, "JH_SVAA", "JEWELMANAGER", 4);
							iLocal_734 = 0;
							iLocal_75++;
							break;
						case 1:
							__LIB_0__::func_709(iLocal_440, "JH_SWAA", "JEWELMANAGER", 4);
							iLocal_75++;
							break;
						case 2:
							__LIB_0__::func_709(iLocal_440, "JH_SXAA", "JEWELMANAGER", 4);
							iLocal_75++;
							break;
						case 3:
							__LIB_0__::func_709(iLocal_440, "JH_SYAA", "JEWELMANAGER", 4);
							iLocal_75++;
							break;
					}
					iLocal_736 = MISC::GET_GAME_TIMER();
				}
			}
			iLocal_2034 = MISC::GET_GAME_TIMER();
		}
	}
	if (iLocal_75 >= 1 && iLocal_734 == 0)
	{
		if (func_115())
		{
			__LIB_0__::func_229("G_BACK", 7500, 1);
			iLocal_735 = 1;
			iLocal_734 = 1;
		}
		else if (func_117())
		{
			__LIB_0__::func_429();
			if (__LIB_17__::func_243(&uLocal_539, "JHAUD", "JH_GUNMANDWN", 9, 1, 0, 0))
			{
				iLocal_734 = 1;
			}
		}
		else if (func_116())
		{
			__LIB_0__::func_429();
			if (__LIB_17__::func_243(&uLocal_539, "JHAUD", "JH_GUNMANDWB", 9, 1, 0, 0))
			{
				iLocal_734 = 1;
			}
		}
	}
	if ((iLocal_734 == 1 && iLocal_735 == 0) && !AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		if (func_117())
		{
			if (__LIB_17__::func_243(&uLocal_539, "JHAUD", "JH_GUNDWNRES", 9, 1, 0, 0))
			{
				iLocal_735 = 1;
			}
		}
		else if (func_116())
		{
			if (__LIB_17__::func_243(&uLocal_539, "JHAUD", "JH_GUNDWN2", 9, 1, 0, 0))
			{
				iLocal_735 = 1;
			}
		}
	}
	if (!iLocal_392)
	{
		if (iLocal_281 > 2 && iLocal_281 < 5)
		{
			if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-629.1f, -230.2f, 38.2f, 2f, joaat("v_ilev_j2_door"), false))
			{
				fLocal_2031 = (fLocal_2031 + 0.06f);
				if (fLocal_2031 > 1f)
				{
					fLocal_2031 = 1f;
				}
				OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("v_ilev_j2_door"), -629.1f, -230.2f, 38.2f, true, (-1f * fLocal_2031), false);
			}
		}
		switch (iLocal_281)
		{
			case 0:
				STREAMING::REQUEST_MODEL(Local_748.f_10);
				STREAMING::REQUEST_MODEL(Local_748.f_16);
				iLocal_281 = 1;
				break;
			case 1:
				if (STREAMING::HAS_MODEL_LOADED(Local_748.f_10) && STREAMING::HAS_MODEL_LOADED(Local_748.f_16))
				{
					iLocal_281 = 2;
				}
				break;
			case 2:
				if (((iLocal_74 && bLocal_389 == 0) && SYSTEM::TIMERA() < (iLocal_422 - 10000)) && iLocal_413 < 3300000)
				{
					iLocal_2033 = 0;
					iLocal_75 = 0;
					iLocal_2032 = 0;
					iLocal_470 = OBJECT::CREATE_OBJECT(Local_748.f_16, -629.73f, -228.2782f, 37.057f, true, true, false);
					iLocal_440 = PED::CREATE_PED(26, Local_748.f_10, -629.73f, -228.2782f, 37.157f, 219.6529f, true, true);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_470, iLocal_440, PED::GET_PED_BONE_INDEX(iLocal_440, 60309), Local_518, Local_518, false, false, false, false, 2, true, 0);
					PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_440, false);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_748.f_10);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_748.f_16);
					func_114();
					func_967(iLocal_440);
					func_943(0, 0f);
					func_966();
					iLocal_497 = __LIB_0__::func_666(iLocal_440, 1, 145);
					iLocal_485 = PED::CREATE_SYNCHRONIZED_SCENE(Local_312, Local_313, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_440, iLocal_485, Local_748.f_35, Local_748.f_54, 1000f, -8f, 1, 0, 1000f, 0);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_485, false);
					SYSTEM::SETTIMERB(0);
					if (bLocal_424)
					{
						if (!PED::IS_PED_INJURED(iLocal_437))
						{
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_437, true);
						}
					}
					ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_440, true, 0f);
					AUDIO::START_AUDIO_SCENE("JSH_2B_MANAGER_ARRIVE");
					AUDIO::TRIGGER_MUSIC_EVENT("JH2B_SECURITY_MA");
					bLocal_390 = true;
					iLocal_281 = 3;
				}
				break;
			case 3:
				iLocal_281 = 4;
				break;
			case 4:
				if (!PED::IS_PED_INJURED(iLocal_440))
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_485))
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_485) >= 0.99f)
						{
							if (func_115())
							{
							}
							else
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_482);
								TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, -624.8931f, -234.163f, 37.057f, iLocal_440, 2f, false, 0.5f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
								TASK::TASK_AIM_GUN_AT_ENTITY(0, iLocal_440, 7000, false);
								TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, -623.2735f, -236.2186f, 37.057f, -622.8721f, -230.6936f, 37.8568f, 2f, false, 0.5f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"));
								TASK::CLOSE_SEQUENCE_TASK(iLocal_482);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_436[iLocal_421], iLocal_482);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_482);
							}
							if (!PED::IS_PED_INJURED(iLocal_440))
							{
								ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_440, true, 0f);
							}
							iLocal_281 = 5;
						}
					}
				}
				else
				{
					iLocal_281 = 6;
				}
				break;
			case 5:
				if (!PED::IS_PED_INJURED(iLocal_440))
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_485))
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_485) >= 1f || iLocal_2032)
						{
							iLocal_485 = PED::CREATE_SYNCHRONIZED_SCENE(Local_312, Local_313, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(iLocal_440, iLocal_485, Local_748.f_35, Local_748.f_58, 8f, -8f, 1, 0, 1000f, 0);
							PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_485, true);
							SYSTEM::SETTIMERB(0);
							iLocal_76 = MISC::GET_GAME_TIMER();
							if (bLocal_424)
							{
								if (!PED::IS_PED_INJURED(iLocal_437))
								{
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_437, false);
								}
							}
							iLocal_281 = 6;
						}
					}
				}
				else
				{
					iLocal_281 = 6;
				}
				break;
			case 6:
				if (!PED::IS_PED_INJURED(iLocal_440))
				{
					if ((!PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_440) && !PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_440)) && func_115())
					{
						func_966();
						if ((MISC::GET_GAME_TIMER() - iLocal_76) > 7500)
						{
							iLocal_485 = PED::CREATE_SYNCHRONIZED_SCENE(Local_312, Local_313, 2);
							PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_485, false);
							TASK::TASK_SYNCHRONIZED_SCENE(iLocal_440, iLocal_485, Local_748.f_35, Local_748.f_55, 8f, -8f, 1, 0, 1000f, 0);
							iLocal_281 = 7;
						}
					}
					else
					{
						if (!PED::IS_PED_INJURED(iLocal_440))
						{
							TASK::TASK_LOOK_AT_ENTITY(iLocal_440, func_94(0), 3000, 2048, 2);
						}
						iLocal_485 = PED::CREATE_SYNCHRONIZED_SCENE(Local_312, Local_313, 2);
						PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_485, false);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_440, iLocal_485, Local_748.f_35, Local_748.f_56, 8f, -8f, 1, 0, 1000f, 0);
						ENTITY::DETACH_ENTITY(iLocal_470, true, true);
						HUD::REMOVE_BLIP(&iLocal_497);
						AUDIO::PLAY_PAIN(iLocal_440, 7, 0, 0);
						iLocal_281 = 11;
					}
				}
				else
				{
					HUD::REMOVE_BLIP(&iLocal_497);
					bLocal_390 = false;
					iLocal_392 = 1;
				}
				break;
			case 11:
				if (!PED::IS_PED_INJURED(iLocal_440))
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_485))
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_485) > 0.6f)
						{
							iLocal_485 = PED::CREATE_SYNCHRONIZED_SCENE(Local_312, Local_313, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(iLocal_440, iLocal_485, Local_748.f_35, Local_748.f_57, 4f, -4f, 5, 0, 1000f, 0);
							PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_485, true);
							if (HUD::DOES_BLIP_EXIST(iLocal_497))
							{
								HUD::REMOVE_BLIP(&iLocal_497);
							}
							bLocal_390 = false;
							iLocal_392 = 1;
						}
						else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_485) > 0.1f)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_470))
							{
								if (ENTITY::IS_ENTITY_ATTACHED(iLocal_470))
								{
									ENTITY::DETACH_ENTITY(iLocal_470, false, true);
								}
							}
						}
					}
				}
				else
				{
					HUD::REMOVE_BLIP(&iLocal_497);
					bLocal_390 = false;
					iLocal_392 = 1;
				}
				break;
			case 7:
				if (!PED::IS_PED_INJURED(iLocal_440))
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_485))
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_485) > 0.025f)
						{
							SYSTEM::SETTIMERB(0);
							iLocal_281 = 8;
						}
					}
				}
				else
				{
					ENTITY::DETACH_ENTITY(iLocal_470, true, true);
					HUD::REMOVE_BLIP(&iLocal_497);
					bLocal_390 = false;
					iLocal_392 = 1;
				}
				break;
			case 8:
				if (!PED::IS_PED_INJURED(iLocal_440))
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_485))
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_485) > 0.61f)
						{
							fLocal_2031 = (fLocal_2031 - 0.06f);
							if (fLocal_2031 < 0f)
							{
								fLocal_2031 = 0f;
							}
						}
						OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("v_ilev_j2_door"), -629.1f, -230.2f, 38.2f, true, (-1f * fLocal_2031), false);
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_485) > 0.99f)
						{
							if (SYSTEM::TIMERA() < (iLocal_422 - 10000) && iLocal_413 < 3300000)
							{
								iLocal_285 = 19;
								func_1074();
							}
						}
					}
				}
				else
				{
					ENTITY::DETACH_ENTITY(iLocal_470, true, true);
					func_716(1, 1, 1);
					func_715();
					HUD::REMOVE_BLIP(&iLocal_497);
					bLocal_390 = false;
					iLocal_392 = 1;
				}
				break;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_440))
		{
			if (SYSTEM::TIMERA() > (iLocal_422 - 10000) || iLocal_413 > 3300000)
			{
				if (HUD::DOES_BLIP_EXIST(iLocal_497))
				{
					HUD::REMOVE_BLIP(&iLocal_497);
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_440, false))
			{
				if ((PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_440) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_440)) || !func_115())
				{
					if (iLocal_2032 == 0)
					{
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("JSH_2B_MANAGER_ARRIVE"))
						{
							AUDIO::STOP_AUDIO_SCENE("JSH_2B_MANAGER_ARRIVE");
							func_715();
							HUD::CLEAR_PRINTS();
						}
						if (func_115())
						{
							__LIB_0__::func_429();
							if (__LIB_17__::func_243(&uLocal_539, "JHAUD", "JH_GETDOWN", 9, 0, 0, 0))
							{
								iLocal_2032 = 1;
							}
						}
						else
						{
							iLocal_2032 = 1;
						}
					}
				}
				else if (iLocal_281 >= 6 && iLocal_2032 == 0)
				{
					if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_436[1]))
					{
						AUDIO::SET_AUDIO_FLAG("ScriptedConvListenerMaySpeak", true);
						__LIB_0__::func_709(iLocal_436[1], "JH_IVAA", "JEWELGUNBAD", 4);
					}
				}
			}
			else if (AUDIO::IS_AUDIO_SCENE_ACTIVE("JSH_2B_MANAGER_ARRIVE"))
			{
				AUDIO::STOP_AUDIO_SCENE("JSH_2B_MANAGER_ARRIVE");
			}
		}
	}
	else if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -632.52747f, -230.29555f, 37.057034f, -628.84894f, -227.6441f, 40.557034f, 3.6f, false, true, 0) && !ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -629.1f, -230.2f, 38.2f, 1.5f, 1.5f, 1.5f, false, true, 0))
	{
		fLocal_2031 = (fLocal_2031 - 0.06f);
		if (fLocal_2031 < 0f)
		{
			fLocal_2031 = 0f;
		}
		OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("v_ilev_j2_door"), -629.1f, -230.2f, 38.2f, true, (-1f * fLocal_2031), false);
	}
}

void func_966()//Position - 0x9C94B
{
	iLocal_416 = 0;
	while (iLocal_416 <= 19)
	{
		if (HUD::DOES_BLIP_EXIST(Local_349[iLocal_416 /*30*/].f_23))
		{
			HUD::REMOVE_BLIP(&(Local_349[iLocal_416 /*30*/].f_23));
		}
		iLocal_416++;
	}
}

void func_967(int iParam0)//Position - 0x9C989
{
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, iLocal_498);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 13, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 14, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 8, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 9, false);
	PED::SET_PED_ALERTNESS(iParam0, 0);
	PED::SET_PED_COMBAT_ABILITY(iParam0, 0);
	PED::SET_PED_COMBAT_RANGE(iParam0, 0);
	PED::SET_PED_GENERATES_DEAD_BODY_EVENTS(iParam0, false);
	PED::SET_PED_SEEING_RANGE(iParam0, 0f);
	PED::SET_PED_HEARING_RANGE(iParam0, 0f);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
}

void func_968(int iParam0, var uParam1)//Position - 0x9C9EF
{
	int iVar0;
	bool bVar1;
	iVar0 = 0;
	bVar1 = false;
	uParam1->f_7 = (uParam1->f_7 + (MISC::GET_GAME_TIMER() - uParam1->f_6));
	uParam1->f_6 = MISC::GET_GAME_TIMER();
	if (uParam1->f_7 > uParam1->f_8)
	{
		uParam1->f_7 = 0;
		uParam1->f_8 = (1500 + MISC::GET_RANDOM_INT_IN_RANGE(0, 500));
		*uParam1 = { uParam1->f_3 };
		if ((((((PED::IS_PED_INJURED(iLocal_438[0]) && PED::IS_PED_INJURED(iLocal_438[1])) && PED::IS_PED_INJURED(iLocal_438[2])) && PED::IS_PED_INJURED(iLocal_438[3])) && PED::IS_PED_INJURED(iLocal_438[4])) && PED::IS_PED_INJURED(iLocal_437)) && PED::IS_PED_INJURED(iLocal_440))
		{
			uParam1->f_3 = { ENTITY::GET_ENTITY_COORDS(func_94(0), true) };
			bVar1 = true;
		}
		else if (!bVar1)
		{
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
			if (bLocal_390)
			{
				iVar0 = 1;
			}
			if (iVar0 > 87)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_437) && !PED::IS_PED_INJURED(iLocal_437))
				{
					uParam1->f_3 = { ENTITY::GET_ENTITY_COORDS(iLocal_437, true) };
					bVar1 = true;
				}
			}
			else if (iVar0 > 74)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_438[0]) && !PED::IS_PED_INJURED(iLocal_438[0]))
				{
					uParam1->f_3 = { ENTITY::GET_ENTITY_COORDS(iLocal_438[0], true) };
					bVar1 = true;
				}
			}
			else if (iVar0 > 61)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_438[1]) && !PED::IS_PED_INJURED(iLocal_438[1]))
				{
					uParam1->f_3 = { ENTITY::GET_ENTITY_COORDS(iLocal_438[1], true) };
					bVar1 = true;
				}
			}
			else if (iVar0 > 48)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_438[2]) && !PED::IS_PED_INJURED(iLocal_438[2]))
				{
					uParam1->f_3 = { ENTITY::GET_ENTITY_COORDS(iLocal_438[2], true) };
					bVar1 = true;
				}
			}
			else if (iVar0 > 35)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_438[3]) && !PED::IS_PED_INJURED(iLocal_438[3]))
				{
					uParam1->f_3 = { ENTITY::GET_ENTITY_COORDS(iLocal_438[3], true) };
					bVar1 = true;
				}
			}
			else if (iVar0 > 22)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_438[4]) && !PED::IS_PED_INJURED(iLocal_438[4]))
				{
					uParam1->f_3 = { ENTITY::GET_ENTITY_COORDS(iLocal_438[4], true) };
					bVar1 = true;
				}
			}
			else if (iVar0 > 0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_440) && !PED::IS_PED_INJURED(iLocal_440))
				{
					uParam1->f_3 = { ENTITY::GET_ENTITY_COORDS(iLocal_440, true) };
					bVar1 = true;
				}
			}
		}
		if (!bLocal_389 && !bLocal_390)
		{
			if (func_117())
			{
				if (!func_970("JH_STAYDWNGD"))
				{
					if (!bLocal_721 && !bLocal_722)
					{
						func_709("JH_STAYDWNGD", 1, 1, 1, 7, 0, 0);
					}
				}
			}
			else if (func_116())
			{
				if (!func_970("JH_CTRL"))
				{
					if (!bLocal_721 && !bLocal_722)
					{
						func_709("JH_CTRL", 1, 1, 1, 7, 0, 0);
					}
				}
			}
		}
	}
	else if (!iLocal_395 && !Global_100441.f_12[2] >= 19)
	{
		TASK::TASK_AIM_GUN_AT_COORD(iParam0, func_969(*uParam1, uParam1->f_3, (SYSTEM::TO_FLOAT(uParam1->f_7) / IntToFloat(uParam1->f_8))), 1000, false, false);
	}
}

Vector3 func_969(struct<3> Param0, struct<3> Param1, float fParam2)//Position - 0x9CD13
{
	struct<3> Var0;
	if (fParam2 > 1f)
	{
		fParam2 = 1f;
	}
	else if (fParam2 < 0f)
	{
		fParam2 = 0f;
	}
	Var0.f_0 = (Param0.f_0 + ((Param1.f_0 - Param0.f_0) * fParam2));
	Var0.f_1 = (Param0.f_1 + ((Param1.f_1 - Param0.f_1) * fParam2));
	Var0.f_2 = (Param0.f_2 + ((Param1.f_2 - Param0.f_2) * fParam2));
	return Var0;
}

int func_970(char* sParam0)//Position - 0x9CD6D
{
	bool bVar0;
	bVar0 = false;
	iLocal_728 = 0;
	while (iLocal_728 < 8 && bVar0 == 0)
	{
		if (Local_733[iLocal_728 /*7*/].f_2 == 1)
		{
			if (Local_733[iLocal_728 /*7*/].f_1 == MISC::GET_HASH_KEY(sParam0))
			{
				bVar0 = true;
			}
		}
		iLocal_728++;
	}
	if (bVar0)
	{
		return 1;
	}
	return 0;
}

int func_971(int iParam0)//Position - 0x9CDC7
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_972()//Position - 0x9CE04
{
	switch (iLocal_346)
	{
		case 0:
			VEHICLE::REQUEST_VEHICLE_RECORDING(1, "JHGetBike");
			VEHICLE::REQUEST_VEHICLE_RECORDING(2, "JHGetBike");
			VEHICLE::REQUEST_VEHICLE_RECORDING(3, "JHGetBike");
			VEHICLE::REQUEST_VEHICLE_RECORDING(4, "JHGetBike");
			STREAMING::REQUEST_MODEL(Local_748.f_12);
			STREAMING::REQUEST_MODEL(Local_748.f_0);
			__LIB_17__::func_781(__LIB_16__::func_594(0, 2));
			if (!ENTITY::IS_ENTITY_DEAD(func_94(1), false))
			{
				func_974();
				PED::SET_PED_HELMET_PROP_INDEX(func_94(1), 6, true);
				PED::SET_PED_HELMET_TEXTURE_INDEX(func_94(1), 8);
				PED::SET_PED_PROP_INDEX(func_94(1), 0, 6, 8, false);
				PED::GIVE_PED_HELMET(func_94(1), true, 4096, -1);
			}
			iLocal_346++;
			break;
		case 1:
			if ((((((VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "JHGetBike") && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(2, "JHGetBike")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(3, "JHGetBike")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(4, "JHGetBike")) && STREAMING::HAS_MODEL_LOADED(Local_748.f_12)) && STREAMING::HAS_MODEL_LOADED(Local_748.f_0)) && __LIB_17__::func_780(__LIB_16__::func_594(0, 2)))
			{
				iLocal_346++;
			}
			break;
		case 2:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_460))
			{
				iLocal_460 = VEHICLE::CREATE_VEHICLE(Local_748.f_12, VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(1, 3000f, "JHGetBike"), 135f, true, true, false);
				func_890(iLocal_460);
				VEHICLE::SET_VEHICLE_COLOURS(iLocal_460, 128, 3);
				VEHICLE::SET_VEHICLE_EXTRA(iLocal_460, 6, false);
			}
			iLocal_436[2] = __LIB_17__::func_787(0, 2, Local_324, 261.2985f, 0, 1);
			PED::SET_PED_INTO_VEHICLE(iLocal_436[2], iLocal_460, -1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_436[2], true);
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_460, false);
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_460, 1, "JHGetBike", true);
			VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_460, 3000f);
			ENTITY::SET_ENTITY_PROOFS(iLocal_460, false, false, false, true, false, false, false, false);
			VEHICLE::SET_PLAYBACK_SPEED(iLocal_460, -1.1f);
			iLocal_346++;
			break;
		case 3:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_460, false))
			{
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_460) < 100f)
				{
					func_708(iLocal_460, 1, 0.92f);
					iLocal_2091 = MISC::GET_GAME_TIMER();
					iLocal_346++;
				}
			}
			break;
		case 4:
			if ((MISC::GET_GAME_TIMER() - iLocal_2091) > 500)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_456[2]))
				{
					iLocal_456[2] = VEHICLE::CREATE_VEHICLE(Local_748.f_0, VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(2, 0f, "JHGetBike"), ENTITY::GET_ENTITY_HEADING(iLocal_460), true, true, false);
				}
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_456[2], 0);
				ENTITY::SET_ENTITY_PROOFS(iLocal_456[2], false, false, false, true, false, false, false, false);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_456[2], false);
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_456[2], 2, "JHGetBike", true);
				VEHICLE::SET_POSITION_OFFSET_FOR_RECORDED_VEHICLE_PLAYBACK(iLocal_456[2], Local_81);
				VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_456[2], false);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_456[2], false);
				PED::SET_PED_INTO_VEHICLE(func_94(1), iLocal_456[2], -1);
				PED::REMOVE_PED_HELMET(func_94(1), true);
				PED::SET_PED_HELMET_PROP_INDEX(func_94(1), 6, true);
				PED::SET_PED_HELMET_TEXTURE_INDEX(func_94(1), 8);
				PED::SET_PED_PROP_INDEX(func_94(1), 0, 6, 8, false);
				PED::SET_PED_HELMET(func_94(1), true);
				PED::SET_PED_STEERS_AROUND_OBJECTS(func_94(1), false);
				VEHICLE::SET_PLAYBACK_SPEED(iLocal_456[2], 1.15f);
				PED::SET_PED_CAN_RAGDOLL(func_94(1), false);
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_456[1]))
				{
					iLocal_456[1] = VEHICLE::CREATE_VEHICLE(Local_748.f_0, VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(3, 50f, "JHGetBike"), ENTITY::GET_ENTITY_HEADING(iLocal_460), true, true, false);
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_456[1], false);
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_456[1], 3, "JHGetBike", true);
					VEHICLE::SET_POSITION_OFFSET_FOR_RECORDED_VEHICLE_PLAYBACK(iLocal_456[1], Local_81 + Vector(0f, -0.4f, 0.3f));
					VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(iLocal_456[1]);
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_456[1], 1);
					VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_456[1], false);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_456[0]))
				{
					iLocal_456[0] = VEHICLE::CREATE_VEHICLE(Local_748.f_0, VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(4, 50f, "JHGetBike"), ENTITY::GET_ENTITY_HEADING(iLocal_460), true, true, false);
					ENTITY::SET_ENTITY_PROOFS(iLocal_456[0], false, false, false, true, false, false, false, false);
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_456[0], false);
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_456[0], 4, "JHGetBike", true);
					VEHICLE::SET_POSITION_OFFSET_FOR_RECORDED_VEHICLE_PLAYBACK(iLocal_456[0], Local_81);
					VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_456[0], false);
					VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(iLocal_456[0]);
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_456[0], 2);
					ENTITY::SET_ENTITY_COLLISION(iLocal_456[0], false, false);
				}
				iLocal_346++;
			}
			break;
		case 5:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_460, false))
			{
				func_708(iLocal_460, 1, 0.92f);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_456[2], false))
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_456[2]))
				{
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_456[2], 5f);
					iLocal_346++;
				}
			}
			break;
		case 6:
			if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_456[1], -1, false))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_456[1]))
				{
					ENTITY::SET_ENTITY_COLLISION(iLocal_456[1], true, false);
				}
				VEHICLE::SET_VEHICLE_INACTIVE_DURING_PLAYBACK(iLocal_460, true);
				ENTITY::SET_ENTITY_PROOFS(iLocal_456[1], false, false, false, true, false, false, false, false);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_456[1], false);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_347);
				TASK::TASK_GO_STRAIGHT_TO_COORD(0, -639.9664f, -239.2199f, 36.9977f, 2f, 20000, 40000f, 0.5f);
				TASK::TASK_ENTER_VEHICLE(0, iLocal_456[1], 5000, -1, 2f, 1, 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_347);
				TASK::TASK_PERFORM_SEQUENCE(func_94(1), iLocal_347);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_347);
				iLocal_346++;
			}
			break;
		case 7:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_460, false))
			{
				VEHICLE::SET_VEHICLE_DOOR_CONTROL(iLocal_460, 5, 0, 1f);
			}
			if (PED::IS_PED_IN_VEHICLE(func_94(1), iLocal_456[1], false))
			{
				VEHICLE::UNPAUSE_PLAYBACK_RECORDED_VEHICLE(iLocal_456[1]);
				VEHICLE::SET_PLAYBACK_SPEED(iLocal_456[1], 1.15f);
				iLocal_346++;
			}
			break;
		case 8:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_460, false))
			{
				VEHICLE::SET_VEHICLE_DOOR_CONTROL(iLocal_460, 5, 0, 1f);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_456[1], false))
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_456[1]))
				{
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_456[1], 5f);
					iLocal_346++;
				}
			}
			break;
		case 9:
			if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_456[0], -1, false))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_456[0]))
				{
					ENTITY::SET_ENTITY_COLLISION(iLocal_456[0], true, false);
				}
				TASK::OPEN_SEQUENCE_TASK(&iLocal_347);
				TASK::TASK_GO_STRAIGHT_TO_COORD(0, -638.5618f, -240.0035f, 37.0538f, 2f, 6000, 40000f, 0.5f);
				TASK::TASK_ENTER_VEHICLE(0, iLocal_456[0], 5000, -1, 2f, 1, 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_347);
				TASK::TASK_PERFORM_SEQUENCE(func_94(1), iLocal_347);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_347);
				iLocal_346++;
			}
			break;
		case 10:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_460, false))
			{
				VEHICLE::SET_VEHICLE_DOOR_CONTROL(iLocal_460, 5, 0, 1f);
			}
			if (PED::IS_PED_IN_VEHICLE(func_94(1), iLocal_456[0], false))
			{
				VEHICLE::UNPAUSE_PLAYBACK_RECORDED_VEHICLE(iLocal_456[0]);
				VEHICLE::SET_PLAYBACK_SPEED(iLocal_456[0], 1.15f);
				iLocal_346++;
			}
			break;
		case 11:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_460, false))
			{
				VEHICLE::SET_VEHICLE_DOOR_CONTROL(iLocal_460, 5, 0, 1f);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_456[0], false))
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_456[0]))
				{
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_456[0], 5f);
					VEHICLE::SET_VEHICLE_INACTIVE_DURING_PLAYBACK(iLocal_460, false);
					TASK::TASK_LOOK_AT_ENTITY(func_94(1), func_94(0), 60000, 2048, 2);
					iLocal_346++;
				}
			}
			break;
		case 12:
			if (!func_973(func_94(0)))
			{
				func_708(iLocal_460, 0, 1065353216);
				VEHICLE::UNPAUSE_PLAYBACK_RECORDED_VEHICLE(iLocal_460);
				VEHICLE::SET_PLAYBACK_SPEED(iLocal_460, 1.15f);
				iLocal_346++;
			}
			else
			{
				func_708(iLocal_460, 1, 0.92f);
			}
			break;
		case 13:
			if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_456[2], -1, false))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_347);
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
				TASK::TASK_ENTER_VEHICLE(0, iLocal_456[2], 5000, -1, 2f, 1, 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_347);
				TASK::TASK_PERFORM_SEQUENCE(func_94(1), iLocal_347);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_347);
				iLocal_346++;
			}
			break;
		case 14:
			func_708(iLocal_460, 0, 1065353216);
			if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_460))
			{
				__LIB_37__::func_173(__LIB_16__::func_594(0, 2));
				VEHICLE::DELETE_VEHICLE(&iLocal_460);
				PED::DELETE_PED(&(iLocal_436[2]));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_748.f_12);
				VEHICLE::REMOVE_VEHICLE_RECORDING(1, "JHGetBike");
				VEHICLE::REMOVE_VEHICLE_RECORDING(2, "JHGetBike");
				VEHICLE::REMOVE_VEHICLE_RECORDING(3, "JHGetBike");
				VEHICLE::REMOVE_VEHICLE_RECORDING(4, "JHGetBike");
				PED::SET_PED_CAN_RAGDOLL(func_94(1), true);
				iLocal_346++;
			}
			break;
	}
}

int func_973(int iParam0)//Position - 0x9D69B
{
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(ENTITY::GET_ENTITY_COORDS(iParam0, true), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_460, -0.035128f, 0.555196f, 0.113579f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_460, 0.031168f, -3.357668f, 2.159969f), 2.375f, false, true))
	{
		return 1;
	}
	return 0;
}

void func_974()//Position - 0x9D6E9
{
	if (bLocal_382)
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_94(1)))
		{
			if (!PED::IS_PED_INJURED(func_94(1)))
			{
				func_519(func_94(1), 12, 8, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(func_94(1)))
	{
		if (!PED::IS_PED_INJURED(func_94(1)))
		{
			func_519(func_94(1), 12, 18, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
}

void func_975()//Position - 0x9D75C
{
	if (!bLocal_382)
	{
		switch (iLocal_283)
		{
			case 0:
				iLocal_2087 = 0;
				while (iLocal_2087 <= 4)
				{
					iLocal_2088[iLocal_2087] = 0;
					iLocal_439[iLocal_2087] = 0;
					iLocal_2087++;
				}
				iLocal_283++;
				break;
			case 1:
				iLocal_284 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
				if (!PED::IS_PED_INJURED(iLocal_438[iLocal_284]))
				{
					if ((MISC::GET_GAME_TIMER() - iLocal_2086) > 4000)
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_282) > 750)
						{
							if (PED::IS_PED_MALE(iLocal_438[iLocal_284]))
							{
								__LIB_0__::func_709(iLocal_438[iLocal_284], "WHIMPER", "WAVELOAD_PAIN_MALE", 24);
							}
							else
							{
								__LIB_0__::func_709(iLocal_438[iLocal_284], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 24);
							}
							iLocal_282 = MISC::GET_GAME_TIMER();
						}
					}
					else if ((MISC::GET_GAME_TIMER() - iLocal_2090) > 50)
					{
						if (__LIB_0__::func_680())
						{
							AUDIO::PLAY_PAIN(iLocal_438[iLocal_284], 6, 0, 0);
						}
						else if (__LIB_0__::func_680())
						{
							__LIB_0__::func_640(iLocal_438[iLocal_284], "GENERIC_FRIGHTENED_HIGH", 4);
						}
						else
						{
							AUDIO::PLAY_PAIN(iLocal_438[iLocal_284], 3, 0, 0);
						}
						iLocal_2090 = MISC::GET_GAME_TIMER();
					}
					iLocal_283++;
				}
				break;
			case 2:
				if ((MISC::GET_GAME_TIMER() - iLocal_282) > 500)
				{
					iLocal_283 = 1;
				}
				break;
			}
	}
	if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
	{
		iLocal_2086 = MISC::GET_GAME_TIMER();
	}
	iLocal_2087 = 0;
	while (iLocal_2087 <= 4)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(iLocal_438[iLocal_2087]) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_438[iLocal_2087], PLAYER::PLAYER_PED_ID(), true)) && iLocal_439[iLocal_2087] == 0)
		{
			func_709("JH_SHOOTING", 1, 1, 1, 9, 0, 0);
			iLocal_439[iLocal_2087] = 1;
		}
		if (!__LIB_13__::func_755(&Local_370, 1))
		{
			if (!iLocal_2088[iLocal_2087])
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_438[iLocal_2087]))
				{
					if (ENTITY::IS_ENTITY_DEAD(iLocal_438[iLocal_2087], false) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_438[iLocal_2087], PLAYER::PLAYER_PED_ID(), true))
					{
						if (func_117())
						{
							func_709("JH_KOP", 1, 1, 1, 9, 0, 0);
						}
						else if (func_116())
						{
							func_709("JH_GUSSTOP", 1, 1, 1, 9, 0, 0);
						}
						else if (func_115())
						{
							func_709("JH_NORMSTOP", 1, 1, 1, 9, 0, 0);
						}
						iLocal_2088[iLocal_2087] = 1;
					}
				}
			}
			else if (!iLocal_2089[iLocal_2087] && !PED::IS_PED_INJURED(iLocal_438[iLocal_2087]))
			{
				iLocal_2089[iLocal_2087] = 1;
			}
		}
		iLocal_2087++;
	}
}

void func_976()//Position - 0x9D9F1
{
	if (bLocal_382)
	{
		if (!PED::IS_PED_INJURED(iLocal_438[0]))
		{
			if (ENTITY::GET_ENTITY_HEALTH(iLocal_438[0]) < 10000)
			{
				PED::SET_PED_CAN_RAGDOLL(iLocal_438[0], true);
			}
			if (!func_917(iLocal_438[0], joaat("SCRIPT_TASK_PLAY_ANIM")))
			{
				TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_438[0], Local_748.f_35, Local_748.f_46, Local_331, Local_332, 1000f, -1000f, -1, 5121, 0f, 2, 0);
			}
		}
		iLocal_416 = 1;
		while (iLocal_416 <= 4)
		{
			if (!PED::IS_PED_INJURED(iLocal_438[iLocal_416]))
			{
				if (ENTITY::GET_ENTITY_HEALTH(iLocal_438[iLocal_416]) < 10000)
				{
					PED::SET_PED_CAN_RAGDOLL(iLocal_438[iLocal_416], true);
				}
				if (!func_917(iLocal_438[iLocal_416], joaat("SCRIPT_TASK_PLAY_ANIM")))
				{
					TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_438[iLocal_416], Local_748.f_35, Local_748.f_49[(iLocal_416 - 1)], Local_331, Local_332, 1000f, -1000f, -1, 5121, 0f, 2, 0);
				}
			}
			iLocal_416++;
		}
		if (!PED::IS_PED_INJURED(iLocal_437))
		{
			if (ENTITY::GET_ENTITY_HEALTH(iLocal_437) < 10000)
			{
				PED::SET_PED_CAN_RAGDOLL(iLocal_437, true);
				ENTITY::SET_ENTITY_HEALTH(iLocal_437, 0, 0);
			}
			if (!func_917(iLocal_437, joaat("SCRIPT_TASK_PLAY_ANIM")))
			{
				TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_437, Local_748.f_35, Local_748.f_47, Local_331, Local_332, 1000f, -1000f, -1, 5121, 0f, 2, 0);
			}
		}
	}
}

void func_978(var uParam0)//Position - 0x9DBAB
{
	uParam0->f_7 = 0;
	uParam0->f_6 = MISC::GET_GAME_TIMER();
	uParam0->f_8 = 1000;
	if (!PED::IS_PED_INJURED(iLocal_438[0]))
	{
		*uParam0 = { ENTITY::GET_ENTITY_COORDS(iLocal_438[0], true) };
	}
	else
	{
		*uParam0 = { Local_518 };
	}
	if (!PED::IS_PED_INJURED(iLocal_438[1]))
	{
		uParam0->f_3 = { ENTITY::GET_ENTITY_COORDS(iLocal_438[1], true) };
	}
	else
	{
		uParam0->f_3 = { Local_518 };
	}
}

void func_979(var uParam0)//Position - 0x9DC1D
{
	Local_350.f_0 = -1;
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_1));
	}
}

void func_980(int iParam0, char* sParam1, bool bParam2)//Position - 0x9DC3C
{
	if (!Local_737[iParam0 /*3*/].f_1)
	{
		if (!Local_737[iParam0 /*3*/].f_2)
		{
			Local_737[iParam0 /*3*/] = AUDIO::GET_SOUND_ID();
		}
		AUDIO::PLAY_SOUND_FRONTEND(Local_737[iParam0 /*3*/], sParam1, 0, true);
		Local_737[iParam0 /*3*/].f_2 = 1;
		if (bParam2)
		{
			Local_737[iParam0 /*3*/].f_1 = 1;
		}
	}
}

void func_981()//Position - 0x9DC91
{
	iLocal_416 = 0;
	while (iLocal_416 <= 19)
	{
		Local_349[iLocal_416 /*30*/].f_24 = 0;
		iLocal_416++;
	}
	func_950();
}

void func_982(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x9DCBF
{
	if (bParam4)
	{
		func_935(Local_748.f_3);
		iLocal_416 = 0;
		while (iLocal_416 <= 4)
		{
			func_935(Local_748.f_4[iLocal_416]);
			iLocal_416++;
		}
		func_129(bParam3, 0);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_437))
	{
		iLocal_437 = PED::CREATE_PED(26, Local_748.f_3, Local_336, fLocal_337, true, true);
		func_923(Local_748.f_3);
		if (!PED::IS_PED_INJURED(iLocal_437))
		{
		}
	}
	else if (!PED::IS_PED_INJURED(iLocal_437))
	{
		ENTITY::SET_ENTITY_COORDS(iLocal_437, Local_336, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(iLocal_437, fLocal_337);
	}
	if (!PED::IS_PED_INJURED(iLocal_437))
	{
		func_967(iLocal_437);
	}
	iLocal_416 = 0;
	while (iLocal_416 <= 4)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_438[iLocal_416]))
		{
			iLocal_438[iLocal_416] = PED::CREATE_PED(26, Local_748.f_4[iLocal_416], Local_338[iLocal_416 /*3*/], fLocal_339[iLocal_416], true, true);
			if (!PED::IS_PED_INJURED(iLocal_438[iLocal_416]))
			{
			}
		}
		else if (!PED::IS_PED_INJURED(iLocal_438[iLocal_416]))
		{
			ENTITY::SET_ENTITY_COORDS(iLocal_438[iLocal_416], Local_338[iLocal_416 /*3*/], true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(iLocal_438[iLocal_416], fLocal_339[iLocal_416]);
		}
		if (!PED::IS_PED_INJURED(iLocal_438[iLocal_416]))
		{
			func_967(iLocal_438[iLocal_416]);
			PED::SET_PED_IS_AVOIDED_BY_OTHERS(iLocal_438[iLocal_416], false);
		}
		iLocal_416++;
	}
	iLocal_416 = 0;
	while (iLocal_416 <= 4)
	{
		func_923(Local_748.f_4[iLocal_416]);
		iLocal_416++;
	}
	if (!PED::IS_PED_INJURED(iLocal_438[0]))
	{
		PED::SET_PED_COMPONENT_VARIATION(iLocal_438[0], 0, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_438[0], 1, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_438[0], 2, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_438[0], 3, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_438[0], 4, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_438[0], 5, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_438[0], 6, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_438[0], 7, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_438[0], 8, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_438[0], 9, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_438[0], 10, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_438[0], 11, 0, 0, 0);
		PED::CLEAR_PED_PROP(iLocal_438[0], 0);
		PED::CLEAR_PED_PROP(iLocal_438[0], 1);
		PED::CLEAR_PED_PROP(iLocal_438[0], 2);
		PED::CLEAR_PED_PROP(iLocal_438[0], 3);
		PED::CLEAR_PED_PROP(iLocal_438[0], 4);
		PED::CLEAR_PED_PROP(iLocal_438[0], 5);
		PED::CLEAR_PED_PROP(iLocal_438[0], 6);
		PED::CLEAR_PED_PROP(iLocal_438[0], 7);
		PED::CLEAR_PED_PROP(iLocal_438[0], 8);
	}
	if (!PED::IS_PED_INJURED(iLocal_438[2]))
	{
		PED::SET_PED_COMPONENT_VARIATION(iLocal_438[2], 0, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_438[2], 2, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_438[2], 3, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_438[2], 4, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_438[2], 8, 0, 0, 0);
	}
	if (!PED::IS_PED_INJURED(iLocal_438[3]))
	{
		PED::SET_PED_COMPONENT_VARIATION(iLocal_438[3], 0, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_438[3], 2, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_438[3], 3, 0, 5, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_438[3], 4, 1, 2, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_438[3], 8, 0, 0, 0);
	}
	if (!PED::IS_PED_INJURED(iLocal_438[4]) && !bLocal_382)
	{
		PED::SET_PED_COMPONENT_VARIATION(iLocal_438[4], 0, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_438[4], 2, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_438[4], 3, 0, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_438[4], 4, 1, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_438[4], 8, 0, 0, 0);
	}
	if (bParam0)
	{
		TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_437, Local_748.f_35, Local_748.f_47, Local_331, Local_332, 1000f, -1000f, -1, 2102272, 0.9f, 2, 0);
		TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_438[0], Local_748.f_35, Local_748.f_46, Local_331, Local_332, 1000f, -1000f, -1, 2102272, 0.9f, 2, 0);
		iLocal_416 = 1;
		while (iLocal_416 <= 4)
		{
			TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_438[iLocal_416], Local_748.f_35, Local_748.f_49[(iLocal_416 - 1)], Local_331, Local_332, 1000f, -1000f, -1, 2102272, 0.9f, 2, 0);
			iLocal_416++;
		}
		TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_438[2], Local_748.f_35, Local_748.f_49[1], Local_331 + Vector(-0.85f, 0f, 0f), Local_332, 1000f, -1000f, -1, 2102272, 0.9f, 2, 0);
	}
	else if (bParam1)
	{
		TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_438[0], Local_748.f_35, "JH_2B_EndLoop_Male2", -625.444f, -234.01f, 37.72f, 0f, 0f, 36f, 1000f, -1000f, -1, 790537, 0f, 2, 0);
		TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_438[1], Local_748.f_35, "JH_2B_EndLoop_female1", -625.444f, -234.01f, 37.72f, 0f, 0f, 36f, 1000f, -1000f, -1, 790537, 0f, 2, 0);
		TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_438[2], Local_748.f_35, "JH_2B_EndLoop_female2", -625.444f, -234.01f, 37.72f, 0f, 0f, 36f, 1000f, -1000f, -1, 790537, 0f, 2, 0);
		TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_438[3], Local_748.f_35, "JH_2B_EndLoop_Male3", -625.444f, -234.01f, 37.72f, 0f, 0f, 36f, 1000f, -1000f, -1, 790537, 0f, 2, 0);
		TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_438[4], Local_748.f_35, "JH_2B_EndLoop_Male1", -625.444f, -234.01f, 37.72f, 0f, 0f, 36f, 1000f, -1000f, -1, 790537, 0f, 2, 0);
		TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_437, Local_748.f_35, Local_748.f_48, -625.445f, -234.01f, 37.719f, 0f, 0f, 36.1f, 1000f, -1000f, -1, 5129, 0f, 2, 0);
	}
	if (bParam2)
	{
		func_952(iLocal_438[0], iLocal_438[1], iLocal_438[2], iLocal_438[3], iLocal_438[4], iLocal_437, 0, 0);
	}
	if (bParam0)
	{
		iLocal_416 = 0;
		while (iLocal_416 <= 4)
		{
			ENTITY::SET_ENTITY_HEALTH(iLocal_438[iLocal_416], 101, 0);
			PED::SET_PED_CAN_RAGDOLL(iLocal_438[iLocal_416], false);
			PED::SET_PED_KEEP_TASK(iLocal_438[iLocal_416], true);
			PED::SET_PED_CAN_BE_TARGETTED(iLocal_438[iLocal_416], false);
			iLocal_416++;
		}
		ENTITY::SET_ENTITY_HEALTH(iLocal_437, 10000, 0);
		PED::SET_PED_CAN_RAGDOLL(iLocal_437, false);
		PED::SET_PED_SUFFERS_CRITICAL_HITS(iLocal_437, false);
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_437, false);
	}
	else
	{
		iLocal_416 = 0;
		while (iLocal_416 <= 4)
		{
			PED::SET_PED_CAN_BE_TARGETTED(iLocal_438[iLocal_416], false);
			PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_438[iLocal_416], false);
			iLocal_416++;
		}
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_437, false);
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_437, false);
	}
	iLocal_416 = 0;
	while (iLocal_416 <= 4)
	{
		ENTITY::SET_ENTITY_HEALTH(iLocal_438[iLocal_416], 101, 0);
		iLocal_416++;
	}
	PED::DELETE_PED(&(iLocal_438[3]));
}

void func_983()//Position - 0x9E401
{
	MISC::CLEAR_AREA_OF_PEDS(-625.1706f, -232.8408f, 39.4937f, 100f, 0);
}

void func_984()//Position - 0x9E422
{
	switch (__LIB_0__::func_564(__LIB_16__::func_594(0, 2)))
	{
		case 2:
			iLocal_422 = 90000;
			break;
		case 1:
			iLocal_422 = 65000;
			break;
		case 0:
			iLocal_422 = 55000;
			break;
	}
	if (bLocal_382)
	{
		switch (__LIB_0__::func_564(__LIB_16__::func_594(0, 1)))
		{
			case 2:
				fLocal_423 = 1f;
				break;
			case 1:
				fLocal_423 = 0.9f;
				break;
			case 0:
				fLocal_423 = 0.8f;
				break;
		}
	}
	else
	{
		switch (__LIB_0__::func_564(__LIB_16__::func_594(0, 0)))
		{
			case 2:
				fLocal_423 = 1f;
				break;
			case 1:
				fLocal_423 = 0.9f;
				break;
			case 0:
				fLocal_423 = 0.8f;
				break;
			}
	}
	iLocal_420 = 1;
	iLocal_421 = 0;
	if (__LIB_0__::func_564(__LIB_16__::func_594(0, 1)) == 0)
	{
		bLocal_425 = true;
	}
	else
	{
		bLocal_425 = false;
	}
	if (!bLocal_382)
	{
		if (__LIB_0__::func_564(__LIB_16__::func_594(0, 1)) == 0)
		{
			bLocal_424 = true;
		}
	}
	else
	{
		bLocal_424 = false;
	}
	__LIB_16__::func_866(0, __LIB_16__::func_594(0, 0), 1);
	if (bLocal_425)
	{
		__LIB_16__::func_866(0, __LIB_16__::func_594(0, 1), 3);
	}
	else
	{
		__LIB_16__::func_866(0, __LIB_16__::func_594(0, 1), 1);
	}
	__LIB_16__::func_866(0, __LIB_16__::func_594(0, 2), 1);
	__LIB_16__::func_866(0, __LIB_16__::func_594(0, 2), 1);
}

int func_987()//Position - 0x9E5F8
{
	if (!iLocal_383)
	{
		PED::ADD_SCENARIO_BLOCKING_AREA(-655.1706f, -272.8408f, 9.4937f, -575.1706f, -152.8408f, 69.4937f, false, true, true, true);
		PED::SET_PED_NON_CREATION_AREA(-655.1706f, -272.8408f, 9.4937f, -575.1706f, -152.8408f, 69.4937f);
		func_565(&iLocal_460, 1);
		func_923(Local_748.f_12);
		if (iLocal_306 == 0)
		{
			iLocal_306 = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
		}
		if (iLocal_306 != 4)
		{
			VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_306, "JHArrive");
		}
		WEAPON::REQUEST_WEAPON_ASSET(iLocal_262, 31, 20);
		STREAMING::REQUEST_MODEL(WEAPON::GET_WEAPON_COMPONENT_TYPE_MODEL(joaat("COMPONENT_AT_AR_SUPP")));
		func_715();
		__LIB_0__::func_429();
		AUDIO::SET_RADIO_POSITION_AUDIO_MUTE(true);
		AUDIO::TRIGGER_MUSIC_EVENT("JH2B_RADIO_FADE");
		AUDIO::START_AUDIO_SCENE("JSH_2B_REVERSE_TRUCK_CUTSCENE");
		iLocal_417 = 0;
		iLocal_384 = 0;
		iLocal_383 = 1;
		STREAMING::REQUEST_MODEL(Local_748.f_3);
		iLocal_416 = 0;
		while (iLocal_416 <= 4)
		{
			STREAMING::REQUEST_MODEL(Local_748.f_4[iLocal_416]);
			iLocal_416++;
		}
		STREAMING::REQUEST_ANIM_DICT(Local_748.f_35);
		VEHICLE::REQUEST_VEHICLE_RECORDING(1, "JHArrive");
		VEHICLE::REQUEST_VEHICLE_RECORDING(2, "JHArrive");
		VEHICLE::REQUEST_VEHICLE_RECORDING(3, "JHArrive");
		func_721(0);
		WEAPON::GIVE_WEAPON_TO_PED(iLocal_436[0], iLocal_262, 1000, true, true);
		func_9(iLocal_436[0], 1, 1);
		WEAPON::GIVE_WEAPON_TO_PED(iLocal_436[1], iLocal_262, 1000, true, true);
		func_9(iLocal_436[1], 1, 1);
		WEAPON::GIVE_WEAPON_TO_PED(func_94(0), iLocal_262, 1000, true, true);
		func_9(func_94(0), 1, 1);
		func_722(func_94(0), 1);
		func_722(iLocal_436[0], 1);
		func_722(iLocal_436[1], 1);
		bLocal_2085 = false;
		CUTSCENE::REQUEST_CUTSCENE(Local_748.f_122, 8);
		PED::REQUEST_ACTION_MODE_ASSET("MICHAEL_ACTION");
		iLocal_417 = 0;
	}
	else
	{
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Michael", func_94(0), 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("gunman_selection_1", iLocal_436[1], 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("driver_selection", iLocal_436[0], 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Franklin", func_94(1), 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("angry_customer", 0, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("angry_customer", 2, 1, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("angry_customer", 3, 1, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("angry_customer", 4, 1, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("angry_customer", 8, 0, 0, 0);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_438[1]))
			{
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Jewellery_Assitance", iLocal_438[1], 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_438[4]))
			{
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("shop_assistant", iLocal_438[4], 0);
			}
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("boyfriend", 0, 1, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("boyfriend", 2, 1, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("boyfriend", 3, 0, 5, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("boyfriend", 4, 1, 2, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("boyfriend", 8, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("customer", 0, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("customer", 2, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("customer", 3, 0, 1, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("customer", 4, 1, 1, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("customer", 8, 0, 0, 0);
		}
		if (iLocal_400)
		{
			iLocal_400 = 0;
			iLocal_416 = 0;
			while (iLocal_416 <= 19)
			{
				iLocal_504 = OBJECT::GET_RAYFIRE_MAP_OBJECT(Local_349[iLocal_416 /*30*/], 1f, Local_349[iLocal_416 /*30*/].f_27);
				if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_504))
				{
					if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_504) != 3)
					{
						OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_504, 11);
					}
				}
				else
				{
					iLocal_400 = 1;
				}
				iLocal_416++;
			}
		}
		if (!CUTSCENE::IS_CUTSCENE_ACTIVE() || CUTSCENE::HAS_CUTSCENE_FINISHED())
		{
			if (__LIB_0__::func_500() && iLocal_417 > 1)
			{
				CAM::DO_SCREEN_FADE_OUT(500);
				while (CAM::IS_SCREEN_FADING_OUT())
				{
					SYSTEM::WAIT(0);
				}
				CUTSCENE::REMOVE_CUTSCENE();
				STREAMING::REQUEST_MODEL(Local_748.f_3);
				iLocal_416 = 0;
				while (iLocal_416 <= 4)
				{
					STREAMING::REQUEST_MODEL(Local_748.f_4[iLocal_416]);
					iLocal_416++;
				}
				STREAMING::REQUEST_ANIM_DICT(Local_748.f_35);
				while (((((((!STREAMING::HAS_MODEL_LOADED(Local_748.f_3) || !STREAMING::HAS_MODEL_LOADED(Local_748.f_4[0])) || !STREAMING::HAS_MODEL_LOADED(Local_748.f_4[1])) || !STREAMING::HAS_MODEL_LOADED(Local_748.f_4[2])) || !STREAMING::HAS_MODEL_LOADED(Local_748.f_4[3])) || !STREAMING::HAS_MODEL_LOADED(Local_748.f_4[4])) || !STREAMING::HAS_ANIM_DICT_LOADED(Local_748.f_35)) || !PED::HAS_ACTION_MODE_ASSET_LOADED("MICHAEL_ACTION"))
				{
					SYSTEM::WAIT(0);
				}
				func_936(&iLocal_477, -625.1706f, -232.8408f, 39.4937f, "V_JEWEL2", 1, 0);
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_463, false))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_463))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_463);
					}
				}
				func_982(0, 1, 1, 1, 1);
				if (__LIB_15__::func_944() != 0)
				{
					__LIB_17__::func_760(&Local_519, 0);
					func_176(&Local_519, 1, 0, 0);
					func_724(func_94(0));
					func_724(func_94(1));
				}
				bLocal_2085 = true;
				iLocal_417 = 5;
			}
		}
		switch (iLocal_417)
		{
			case 0:
				if ((iLocal_306 != 4 && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_306, "JHArrive")) || iLocal_306 == 4)
				{
					__LIB_0__::func_429();
					__LIB_0__::func_620(0);
					if (iLocal_306 == 1)
					{
						func_748(0, 1, 0, 1, 1);
						CAM::SET_CAM_COORD(iLocal_744, -681.9772f, -222.69237f, 36.835697f);
						CAM::SET_CAM_ROT(iLocal_744, 9.68531f, 0.613758f, -104.18648f, 2);
						CAM::SET_CAM_FOV(iLocal_744, 43.554966f);
						CAM::SET_CAM_COORD(iLocal_745, -682.05585f, -223.22394f, 36.83055f);
						CAM::SET_CAM_ROT(iLocal_745, 1.751721f, 0.613758f, -135.18857f, 2);
						CAM::SET_CAM_FOV(iLocal_745, 43.554966f);
						CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_745, iLocal_744, 4250, 3, 3);
						iLocal_306 = 1;
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_463, iLocal_306, "JHArrive", true);
						VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_463, 6000f);
						VEHICLE::SET_PLAYBACK_SPEED(iLocal_463, 0.9f);
						VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_463, true);
						MISC::CLEAR_AREA(-669.3546f, -224.706f, 36.219f, 20f, true, false, false, false);
						func_983();
						CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
						PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
						iLocal_417++;
						SYSTEM::SETTIMERA(0);
					}
					else if (iLocal_306 == 2)
					{
						func_748(0, 1, 0, 1, 1);
						CAM::SET_CAM_COORD(iLocal_744, -678.8114f, -227.01675f, 36.637974f);
						CAM::SET_CAM_ROT(iLocal_744, 14.191272f, 0.284852f, -77.502815f, 2);
						CAM::SET_CAM_FOV(iLocal_744, 34.806614f);
						CAM::SET_CAM_COORD(iLocal_745, -678.4884f, -227.71411f, 36.71359f);
						CAM::SET_CAM_ROT(iLocal_745, 7.48602f, 0.28485f, -107.432816f, 2);
						CAM::SET_CAM_FOV(iLocal_745, 34.806614f);
						CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_745, iLocal_744, 3250, 3, 3);
						iLocal_306 = 2;
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_463, iLocal_306, "JHArrive", true);
						VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_463, 3700f);
						VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_463, true);
						MISC::CLEAR_AREA(-669.3546f, -224.706f, 36.219f, 20f, true, false, false, false);
						func_983();
						CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
						PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
						iLocal_417++;
						SYSTEM::SETTIMERA(0);
					}
					else if (iLocal_306 == 3)
					{
						func_748(0, 1, 0, 1, 1);
						CAM::SET_CAM_COORD(iLocal_744, -687.8701f, -219.99359f, 36.743427f);
						CAM::SET_CAM_ROT(iLocal_744, 9.234026f, -2.307101f, -110.81298f, 2);
						CAM::SET_CAM_FOV(iLocal_744, 37.249252f);
						CAM::SET_CAM_COORD(iLocal_745, -686.5961f, -219.91576f, 36.886288f);
						CAM::SET_CAM_ROT(iLocal_745, 3.781409f, -2.307101f, -99.38617f, 2);
						CAM::SET_CAM_FOV(iLocal_745, 37.249252f);
						CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_745, iLocal_744, 3750, 3, 3);
						iLocal_306 = 3;
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_463, iLocal_306, "JHArrive", true);
						VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_463, 4500f);
						VEHICLE::SET_PLAYBACK_SPEED(iLocal_463, 1.15f);
						VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_463, true);
						MISC::CLEAR_AREA(-669.3546f, -224.706f, 36.219f, 20f, true, false, false, false);
						func_983();
						CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
						PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
						SYSTEM::SETTIMERA(0);
						iLocal_417++;
					}
					else if (iLocal_306 == 4)
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
						iLocal_417++;
					}
					if (__LIB_15__::func_944() != 0)
					{
						__LIB_17__::func_760(&Local_519, 0);
						func_176(&Local_519, 1, 0, 0);
						func_724(func_94(0));
						func_724(func_94(1));
					}
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_463, false))
					{
						ENTITY::SET_ENTITY_HEALTH(iLocal_463, 1000, 0);
					}
					if (!PED::IS_PED_IN_VEHICLE(func_94(0), iLocal_463, false))
					{
						PED::SET_PED_INTO_VEHICLE(func_94(0), iLocal_463, 0);
					}
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 5f, 3);
					func_111(800, 0, 0);
				}
				break;
			case 1:
				if (__LIB_17__::func_243(&uLocal_539, "JHAUD", "JH_ACRLVE", 9, 0, 0, 0))
				{
					AUDIO::TRIGGER_MUSIC_EVENT("JH2B_MISSION_START_ST");
					PED::REQUEST_ACTION_MODE_ASSET("MICHAEL_ACTION");
					Local_409 = { Local_308 };
					func_114();
					func_936(&iLocal_477, -625.1706f, -232.8408f, 39.4937f, "V_JEWEL2", 0, 0);
					func_649(0);
					if (iLocal_306 == 4)
					{
						iLocal_417 = 5;
					}
					else
					{
						iLocal_417 = 3;
					}
				}
				break;
			case 3:
				switch (iLocal_306)
				{
					case 1:
						if (SYSTEM::TIMERA() > 4300)
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_463, false))
							{
								VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_463, 2000f);
								VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_463, false);
							}
							CAM::SET_CAM_COORD(iLocal_744, -640.45087f, -233.44388f, 37.806362f);
							CAM::SET_CAM_ROT(iLocal_744, 4.411565f, 0.527128f, 81.38555f, 2);
							CAM::SET_CAM_FOV(iLocal_744, 33.844154f);
							CAM::SET_CAM_COORD(iLocal_745, -642.6585f, -233.653f, 37.528545f);
							CAM::SET_CAM_ROT(iLocal_745, 3.940768f, 0.527128f, 96.260635f, 2);
							CAM::SET_CAM_FOV(iLocal_745, 33.844154f);
							CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_745, iLocal_744, 2000, 3, 3);
							iLocal_417 = 4;
						}
						break;
					case 2:
						if (SYSTEM::TIMERA() > 3000)
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_463, false))
							{
								VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_463, 1700f);
								VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_463, false);
							}
							CAM::SET_CAM_COORD(iLocal_745, -639.4245f, -231.28117f, 37.31658f);
							CAM::SET_CAM_ROT(iLocal_745, 4.64518f, -2.29626f, 91.56691f, 2);
							CAM::SET_CAM_FOV(iLocal_745, 34.806614f);
							CAM::SET_CAM_COORD(iLocal_744, -642.1667f, -230.96701f, 37.46484f);
							CAM::SET_CAM_ROT(iLocal_744, 6.755442f, -2.29626f, 90.17682f, 2);
							CAM::SET_CAM_FOV(iLocal_744, 34.806614f);
							CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_745, iLocal_744, 3250, 3, 3);
							iLocal_417 = 4;
						}
						break;
					case 3:
						if (SYSTEM::TIMERA() > 3000)
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_463, false))
							{
								VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_463, 2000f);
								VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_463, false);
							}
							CAM::SET_CAM_COORD(iLocal_744, -633.4784f, -235.19792f, 37.634644f);
							CAM::SET_CAM_ROT(iLocal_744, 4.998171f, -2.24293f, 83.91781f, 2);
							CAM::SET_CAM_FOV(iLocal_744, 29.616934f);
							CAM::SET_CAM_COORD(iLocal_745, -636.2968f, -235.58305f, 37.673473f);
							CAM::SET_CAM_ROT(iLocal_745, 4.210197f, -2.24293f, 93.950935f, 2);
							CAM::SET_CAM_FOV(iLocal_745, 29.616934f);
							CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_745, iLocal_744, 3000, 3, 3);
							iLocal_417 = 4;
						}
						break;
				}
				break;
			case 4:
				CAM::SET_USE_HI_DOF();
				if (((((((((PED::HAS_ACTION_MODE_ASSET_LOADED("MICHAEL_ACTION") && CUTSCENE::HAS_CUTSCENE_LOADED()) && STREAMING::HAS_MODEL_LOADED(Local_748.f_3)) && STREAMING::HAS_MODEL_LOADED(Local_748.f_4[0])) && STREAMING::HAS_MODEL_LOADED(Local_748.f_4[1])) && STREAMING::HAS_MODEL_LOADED(Local_748.f_4[2])) && STREAMING::HAS_MODEL_LOADED(Local_748.f_4[3])) && STREAMING::HAS_MODEL_LOADED(Local_748.f_4[4])) && STREAMING::HAS_ANIM_DICT_LOADED(Local_748.f_35)) && WEAPON::HAS_WEAPON_ASSET_LOADED(iLocal_262))
				{
					if (((SYSTEM::TIMERA() > 7000 && iLocal_306 == 1) || (SYSTEM::TIMERA() > 7000 && iLocal_306 == 2)) || (SYSTEM::TIMERA() > 6300 && iLocal_306 == 3))
					{
						func_982(0, 1, 1, 1, 1);
						iLocal_417++;
					}
				}
				break;
			case 5:
				if (STREAMING::HAS_MODEL_LOADED(WEAPON::GET_WEAPON_COMPONENT_TYPE_MODEL(joaat("COMPONENT_AT_AR_SUPP"))) && WEAPON::HAS_WEAPON_ASSET_LOADED(iLocal_262))
				{
					if (__LIB_15__::func_944() != 0)
					{
						__LIB_17__::func_760(&Local_519, 0);
						func_176(&Local_519, 1, 0, 0);
						func_724(func_94(0));
						func_724(func_94(1));
					}
					WEAPON::SET_CURRENT_PED_WEAPON(func_94(0), iLocal_262, true);
					WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(func_94(0), iLocal_262, joaat("COMPONENT_AT_AR_SUPP"));
					func_993(func_94(0), iLocal_262, joaat("COMPONENT_CARBINERIFLE_CLIP_01"));
					iLocal_471 = __LIB_42__::func_359(func_94(0), 1, 0, 0, 0, 0);
					iLocal_472 = WEAPON::CREATE_WEAPON_OBJECT(iLocal_262, -1, 0.1f, 1f, 1f, true, 1f, 0, 0, 1);
					WEAPON::GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT(iLocal_472, joaat("COMPONENT_CARBINERIFLE_CLIP_01"));
					WEAPON::GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT(iLocal_472, joaat("COMPONENT_AT_AR_SUPP"));
					iLocal_473 = WEAPON::CREATE_WEAPON_OBJECT(iLocal_262, -1, 0.1f, 1f, 1f, true, 1f, 0, 0, 1);
					WEAPON::GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT(iLocal_473, joaat("COMPONENT_CARBINERIFLE_CLIP_01"));
					WEAPON::GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT(iLocal_473, joaat("COMPONENT_AT_AR_SUPP"));
					if (!bLocal_2085)
					{
						func_940(1, 1, 0);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_519[1], "Franklin", 0, joaat("Player_One"), 0);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_438[0], "angry_customer", 0, 0, 0);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_438[1], "Jewellery_Assitance", 0, 0, 0);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_438[4], "shop_assistant", 0, 0, 0);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_438[2], "customer", 0, 0, 0);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_437, "security_guard", 0, 0, 0);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_436[1], "gunman_selection_1", 0, 0, 0);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_436[0], "driver_selection", 0, 0, 0);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_463, "BURRITO3", 0, joaat("burrito3"), 0);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_471, "Michaels_weapon", 0, 0, 0);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_472, "HC_GUNMAN_2_HANDEDWEAPON", 0, 0, 0);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_473, "HC_GUNMAN1_2_HANDEDWEAPON", 0, 0, 0);
						iLocal_416 = 0;
						while (iLocal_416 <= 4)
						{
							func_923(Local_748.f_4[iLocal_416]);
							iLocal_416++;
						}
						func_923(Local_748.f_3);
						__LIB_0__::func_532(1, 1, 1, 0, 0, 0, 0);
						CUTSCENE::START_CUTSCENE(0);
						RECORDING::REPLAY_START_EVENT(4);
					}
					AUDIO::STOP_AUDIO_SCENE("JSH_2B_REVERSE_TRUCK_CUTSCENE");
					AUDIO::TRIGGER_MUSIC_EVENT("JH2B_MISSION_START_ST");
					iLocal_417++;
				}
				break;
			case 6:
			case 7:
				if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
				{
					ENTITY::SET_ENTITY_COORDS(func_94(0), -629.2506f, -234.1249f, 37.057f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(func_94(0), 291.8499f);
					if (__LIB_15__::func_944() != 0)
					{
						__LIB_17__::func_760(&Local_519, 0);
						func_176(&Local_519, 1, 0, 0);
						func_724(func_94(0));
						func_724(func_94(1));
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_471))
					{
						WEAPON::GIVE_WEAPON_OBJECT_TO_PED(iLocal_471, PLAYER::PLAYER_PED_ID());
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_472))
					{
						WEAPON::GIVE_WEAPON_OBJECT_TO_PED(iLocal_472, iLocal_436[0]);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_473))
					{
						WEAPON::GIVE_WEAPON_OBJECT_TO_PED(iLocal_473, iLocal_436[1]);
					}
					WEAPON::SET_CURRENT_PED_WEAPON(func_94(0), iLocal_262, true);
					PED::SET_PED_USING_ACTION_MODE(func_94(0), true, -1, 0);
					PED::FORCE_PED_MOTION_STATE(func_94(0), joaat("MotionState_Idle"), true, 1, false);
					if (!bLocal_2085)
					{
						TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_438[0], Local_748.f_35, "JH_2B_EndLoop_Male2", -625.444f, -234.01f, 37.72f, 0f, 0f, 36f, 1000f, -1000f, -1, 5121, 0f, 2, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_438[0], false, false);
						TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_438[1], Local_748.f_35, "JH_2B_EndLoop_female1", -625.444f, -234.01f, 37.72f, 0f, 0f, 36f, 1000f, -1000f, -1, 790529, 0f, 2, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_438[1], false, false);
						TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_438[2], Local_748.f_35, "JH_2B_EndLoop_female2", -625.444f, -234.01f, 37.72f, 0f, 0f, 36f, 1000f, -1000f, -1, 5121, 0f, 2, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_438[2], false, false);
						TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_438[4], Local_748.f_35, "JH_2B_EndLoop_Male1", -625.444f, -234.01f, 37.72f, 0f, 0f, 36f, 1000f, -1000f, -1, 790529, 0f, 2, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_438[4], false, false);
						TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_437, Local_748.f_35, Local_748.f_48, Local_331, Local_332, 1000f, -1000f, -1, 5121, 0f, 2, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_437, false, false);
					}
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						STREAMING::NEW_LOAD_SCENE_START_SPHERE(-625.1706f, -232.8408f, 39.4937f, 10f, 0);
						while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED())
						{
							SYSTEM::WAIT(0);
						}
						STREAMING::NEW_LOAD_SCENE_STOP();
					}
					__LIB_37__::func_92();
				}
				if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
				{
					func_958(iLocal_436[0], &Local_350);
				}
				if (IntToFloat(CUTSCENE::GET_CUTSCENE_TIME()) > 8890f && iLocal_429 == 0)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("JH2B_ENTER_SHOP_MA");
					iLocal_429 = 1;
				}
				if (iLocal_417 == 6)
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > 18000)
					{
						iLocal_417 = 7;
					}
				}
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					PED::SET_PED_COMPONENT_VARIATION(func_94(0), 6, 0, 0, 0);
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_463, false))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_463))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_463);
						}
					}
				}
				__LIB_37__::func_92();
				if (CUTSCENE::IS_CUTSCENE_ACTIVE())
				{
					func_704(0, 0, 3000, 1, 1);
					HUD::DISPLAY_HUD(false);
					HUD::DISPLAY_RADAR(false);
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				}
				if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
				{
					__LIB_0__::func_532(0, 1, 1, 0, 0, 0, 0);
					func_114();
					func_704(0, 0, 3000, 1, 1);
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					iLocal_417 = 8;
				}
				break;
		}
		if (iLocal_417 >= 8)
		{
			func_988(0);
			__LIB_37__::func_174(0);
			if (iLocal_429 == 0)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("JH2B_MISSION_RESTART");
			}
			if (__LIB_15__::func_944() != 0)
			{
				__LIB_17__::func_760(&Local_519, 0);
				func_176(&Local_519, 1, 0, 0);
				func_724(func_94(0));
				func_724(func_94(1));
			}
			func_929("JHArrive", 1);
			func_929("JHArrive", 2);
			func_929("JHArrive", 3);
			func_982(0, 1, 0, 1, 1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(WEAPON::GET_WEAPON_COMPONENT_TYPE_MODEL(joaat("COMPONENT_AT_AR_SUPP")));
			HUD::DISPLAY_HUD(true);
			HUD::DISPLAY_RADAR(true);
			RECORDING::REPLAY_STOP_EVENT();
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			ENTITY::SET_ENTITY_COORDS(func_94(1), -617.9512f, -240.0968f, 54.6514f, true, false, false, true);
			WEAPON::REMOVE_WEAPON_ASSET(iLocal_262);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_463))
			{
				VEHICLE::DELETE_VEHICLE(&iLocal_463);
			}
			iLocal_383 = 0;
			return 1;
		}
	}
	return 0;
}

void func_988(bool bParam0)//Position - 0x9F8B4
{
	if (CAM::DOES_CAM_EXIST(iLocal_744))
	{
		CAM::STOP_CAM_SHAKING(iLocal_744, bParam0);
	}
	if (CAM::DOES_CAM_EXIST(iLocal_745))
	{
		CAM::STOP_CAM_SHAKING(iLocal_745, bParam0);
	}
}

void func_993(int iParam0, int iParam1, int iParam2)//Position - 0x9FC9C
{
	if (!bLocal_382)
	{
		WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(iParam0, iParam1, iParam2);
	}
	else
	{
		WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(iParam0, iParam1, joaat("COMPONENT_AT_AR_SUPP_02"));
	}
}

int func_996()//Position - 0x9FD04
{
	int iVar0;
	if (!iLocal_383)
	{
		func_568(&(iLocal_436[1]), 1);
		func_568(&(iLocal_436[0]), 1);
		PED::ADD_SCENARIO_BLOCKING_AREA(-655.1706f, -272.8408f, 9.4937f, -575.1706f, -152.8408f, 69.4937f, false, true, true, true);
		PED::SET_PED_NON_CREATION_AREA(-655.1706f, -272.8408f, 9.4937f, -575.1706f, -152.8408f, 69.4937f);
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			PED::DELETE_PED(&(Local_293[iVar0 /*6*/]));
			iVar0++;
		}
		STREAMING::REMOVE_ANIM_DICT(sLocal_345);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_344);
		AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("SEAGULLS");
		func_133();
		func_933(Local_748.f_35);
		func_935(Local_748.f_24);
		func_935(Local_748.f_25);
		WEAPON::REQUEST_WEAPON_ASSET(iLocal_262, 31, 4);
		STREAMING::REQUEST_PTFX_ASSET();
		while (!func_931() || !WEAPON::HAS_WEAPON_ASSET_LOADED(iLocal_262))
		{
			HUD::SET_RADAR_AS_INTERIOR_THIS_FRAME(MISC::GET_HASH_KEY("V_Refit"), -587.171f, -286.01f, 30, 2);
			SYSTEM::WAIT(0);
		}
		func_721(1);
		func_9(iLocal_436[0], 1, 0);
		func_9(iLocal_436[1], 1, 0);
		func_854(1, 1, 1);
		func_9(func_94(0), 1, 1);
		func_722(func_94(0), 1);
		CUTSCENE::REQUEST_CUTSCENE(Local_748.f_121, 8);
		PED::REQUEST_ACTION_MODE_ASSET("MICHAEL_ACTION");
		while (!CUTSCENE::HAS_CUTSCENE_LOADED() || !PED::HAS_ACTION_MODE_ASSET_LOADED("MICHAEL_ACTION"))
		{
			HUD::SET_RADAR_AS_INTERIOR_THIS_FRAME(MISC::GET_HASH_KEY("V_Refit"), -587.171f, -286.01f, 30, 2);
			func_112(0);
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Michael", func_94(0), 0);
			}
		}
		func_936(&iLocal_477, -625.1706f, -232.8408f, 39.4937f, "V_JEWEL2", 1, 1);
		ENTITY::SET_ENTITY_COORDS(func_94(0), -630.2189f, -236.5104f, 37.057f, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(func_94(0), 300.8775f);
		WEAPON::GIVE_WEAPON_TO_PED(func_94(0), iLocal_262, 1000, true, true);
		func_993(func_94(0), iLocal_262, joaat("COMPONENT_AT_AR_SUPP_02"));
		func_993(func_94(0), iLocal_262, joaat("COMPONENT_AT_AR_SUPP_02"));
		if (!PED::IS_PED_INJURED(iLocal_436[0]))
		{
			ENTITY::SET_ENTITY_COORDS(iLocal_436[0], -634.4145f, -243.1337f, 37.2759f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(iLocal_436[0], 38.2811f);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_436[0], iLocal_262, 1000, true, true);
			func_722(iLocal_436[0], 1);
		}
		if (!PED::IS_PED_INJURED(iLocal_436[1]))
		{
			ENTITY::SET_ENTITY_COORDS(iLocal_436[1], -637.5032f, -238.9592f, 37.0954f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(iLocal_436[1], 292.9207f);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_436[1], iLocal_262, 1000, true, true);
			func_993(iLocal_436[0], iLocal_262, joaat("COMPONENT_AT_AR_SUPP_02"));
			func_722(iLocal_436[1], 1);
		}
		WEAPON::SET_CURRENT_PED_WEAPON(func_94(0), joaat("WEAPON_UNARMED"), true);
		func_983();
		func_114();
		iLocal_408[0] = 0;
		func_111(800, 0, 0);
		iLocal_417 = 0;
		iLocal_384 = 0;
		iLocal_383 = 1;
		iLocal_2081 = 0;
		AUDIO::SET_RADIO_POSITION_AUDIO_MUTE(true);
		if (bLocal_382)
		{
			AUDIO::TRIGGER_MUSIC_EVENT("JH2A_GAS_SHOP_MA");
		}
	}
	else
	{
		switch (iLocal_417)
		{
			case 0:
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(func_94(0), "Michael", 0, 0, 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "customer_1_withassist_1", 2, joaat("A_M_Y_BevHills_01"), 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "shop_assistant", 2, joaat("A_F_Y_Business_02"), 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "customer_2_withassist_2", 2, joaat("A_M_Y_BevHills_01"), 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "jewellery_Assitance", 2, joaat("IG_JewelAss"), 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "security", 2, Local_748.f_3, 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "gunman_selection_1", 2, Local_748.f_24, 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "driver_selection", 2, Local_748.f_25, 0);
				WEAPON::SET_CURRENT_PED_WEAPON(func_94(0), iLocal_262, true);
				WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(func_94(0), iLocal_262, joaat("COMPONENT_AT_AR_SUPP_02"));
				func_993(func_94(0), iLocal_262, joaat("COMPONENT_AT_AR_SUPP_02"));
				iLocal_471 = __LIB_42__::func_359(func_94(0), 1, 0, 0, 0, 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_471, "Michaels_2_handedweapon", 0, 0, 0);
				iLocal_472 = WEAPON::CREATE_WEAPON_OBJECT(iLocal_262, -1, 0.1f, 1f, 1f, true, 1f, 0, 0, 1);
				WEAPON::GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT(iLocal_472, joaat("COMPONENT_AT_AR_SUPP_02"));
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_472, "HC_GUNMAN_2_HANDEDWEAPON", 0, 0, 0);
				iLocal_473 = WEAPON::CREATE_WEAPON_OBJECT(iLocal_262, -1, 0.1f, 1f, 1f, true, 1f, 0, 0, 1);
				WEAPON::GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT(iLocal_473, joaat("COMPONENT_AT_AR_SUPP_02"));
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_473, "HC_GUNMAN1_2_HANDEDWEAPON", 0, 0, 0);
				iLocal_2082 = 0;
				iLocal_2083 = 0;
				__LIB_0__::func_532(1, 1, 1, 0, 0, 0, 0);
				iLocal_429 = 0;
				iLocal_430 = 0;
				CUTSCENE::START_CUTSCENE(0);
				RECORDING::REPLAY_START_EVENT(4);
				STREAMING::REQUEST_MODEL(Local_748.f_18);
				STREAMING::REQUEST_MODEL(Local_748.f_19);
				STREAMING::REQUEST_MODEL(Local_748.f_20);
				STREAMING::REQUEST_MODEL(Local_748.f_21);
				STREAMING::REQUEST_ANIM_DICT(Local_748.f_35);
				STREAMING::REQUEST_ANIM_DICT(Local_748.f_61);
				STREAMING::REQUEST_ANIM_DICT(Local_748.f_35);
				iLocal_2084 = 0;
				iLocal_417++;
				break;
			case 1:
			case 2:
				if (IntToFloat(CUTSCENE::GET_CUTSCENE_TIME()) > 14100f && iLocal_429 == 0)
				{
					if (bLocal_382)
					{
						if (AUDIO::PREPARE_MUSIC_EVENT("JH2A_GAS_SHOP_OS"))
						{
							AUDIO::TRIGGER_MUSIC_EVENT("JH2A_GAS_SHOP_OS");
							iLocal_429 = 1;
						}
					}
				}
				if ((IntToFloat(CUTSCENE::GET_CUTSCENE_TIME()) > 20000f && iLocal_430 == 0) && iLocal_429 == 1)
				{
					if (bLocal_382)
					{
						if (AUDIO::PREPARE_MUSIC_EVENT("JH2A_ENTER_SHOP_MA"))
						{
							AUDIO::TRIGGER_MUSIC_EVENT("JH2A_ENTER_SHOP_MA");
							iLocal_430 = 1;
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Franklin", 0)))
				{
					Local_519[1] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Franklin", 0));
				}
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("customer_1_withassist_1", 0)))
				{
					iLocal_438[1] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("customer_1_withassist_1", 0));
				}
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("shop_assistant", 0)))
				{
					iLocal_438[2] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("shop_assistant", 0));
				}
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("customer_2_withassist_2", 0)))
				{
					iLocal_438[3] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("customer_2_withassist_2", 0));
				}
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("jewellery_Assitance", 0)))
				{
					iLocal_438[4] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("jewellery_Assitance", 0));
				}
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("security", 0)))
				{
					iLocal_437 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("security", 0));
				}
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("driver_selection", 0)) && iLocal_2082 == 0)
				{
					iLocal_436[0] = __LIB_17__::func_787(0, 0, 100f, 100f, 100f, 0f, 0, 1);
					PED::DELETE_PED(&(iLocal_436[0]));
					iLocal_436[0] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("driver_selection", 0));
					func_9(iLocal_436[0], 1, 0);
					iLocal_2082 = 1;
				}
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("gunman_selection_1", 0)) && iLocal_2083 == 0)
				{
					iLocal_436[1] = __LIB_17__::func_787(0, 1, 100f, 100f, 100f, 0f, 0, 1);
					PED::DELETE_PED(&(iLocal_436[1]));
					iLocal_436[1] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("gunman_selection_1", 0));
					func_9(iLocal_436[1], 1, 0);
					iLocal_2083 = 1;
				}
				if (iLocal_2081 == 0)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_436[0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_436[1]))
					{
						func_721(1);
						func_9(iLocal_436[1], 1, 0);
						func_9(iLocal_436[0], 1, 0);
						iLocal_2081 = 1;
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(true))
				{
				}
				if (iLocal_417 == 1)
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > 22655)
					{
						iLocal_417 = 2;
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
				{
					if (__LIB_15__::func_944() != 0)
					{
						__LIB_17__::func_760(&Local_519, 0);
						func_176(&Local_519, 1, 0, 0);
						func_724(func_94(0));
						func_724(func_94(1));
					}
					PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), true, -1, 0);
					PED::FORCE_PED_MOTION_STATE(func_94(0), joaat("MotionState_ActionMode_Walk"), true, 1, false);
					PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 250, 0f, true, false);
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michaels_2_handedweapon", 0))
				{
					WEAPON::GIVE_WEAPON_OBJECT_TO_PED(iLocal_471, func_94(0));
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("HC_GUNMAN_2_HANDEDWEAPON", 0))
				{
					if (!PED::IS_PED_INJURED(iLocal_436[0]))
					{
						WEAPON::GIVE_WEAPON_OBJECT_TO_PED(iLocal_472, iLocal_436[0]);
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("HC_GUNMAN1_2_HANDEDWEAPON", 0))
				{
					if (!PED::IS_PED_INJURED(iLocal_436[1]))
					{
						WEAPON::GIVE_WEAPON_OBJECT_TO_PED(iLocal_473, iLocal_436[1]);
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("customer_1_withassist_1", 0))
				{
					TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_438[1], Local_748.f_35, Local_748.f_49[0], Local_331, Local_332, 1000f, -1000f, -1, 2364416, 0.8f, 2, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_438[1], false, false);
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("shop_assistant", 0))
				{
					TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_438[2], Local_748.f_35, Local_748.f_49[1], Local_331 + Vector(-0.85f, 0f, 0f), Local_332, 1000f, -1000f, -1, 2102272, 0.8f, 2, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_438[2], false, false);
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("customer_2_withassist_2", 0))
				{
					TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_438[3], Local_748.f_35, Local_748.f_49[2], Local_331, Local_332, 1000f, -1000f, -1, 2102272, 0.8f, 2, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_438[3], false, false);
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("jewellery_Assitance", 0))
				{
					TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_438[4], Local_748.f_35, Local_748.f_49[3], Local_331, Local_332, 1000f, -1000f, -1, 2364416, 0.8f, 2, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_438[4], false, false);
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("security", 0))
				{
					TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_437, Local_748.f_35, Local_748.f_47, Local_331, Local_332, 1000f, -1000f, -1, 2102272, 0.8f, 2, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_437, false, false);
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("gunman_selection_1", 0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_436[iLocal_420], false))
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_436[iLocal_420], -631.8019f, -234.8645f, 37.057f, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(iLocal_436[iLocal_420], 320.984f);
						PED::SET_PED_USING_ACTION_MODE(iLocal_436[iLocal_420], true, -1, 0);
					}
				}
				if (CUTSCENE::IS_CUTSCENE_PLAYING() && iLocal_2084 == 0)
				{
					MISC::CLEAR_AREA(Local_518, 5000f, true, true, false, false);
					WEAPON::SET_CURRENT_PED_WEAPON(func_94(1), joaat("WEAPON_UNARMED"), false);
					iLocal_2084 = 1;
				}
				if (CUTSCENE::IS_CUTSCENE_ACTIVE())
				{
					if (!iLocal_408[0])
					{
						func_957(10, Local_748.f_253, -623.02f, -224.89f, 42.27f, 1);
						iLocal_408[0] = 1;
					}
					if (iLocal_400)
					{
						iLocal_400 = 0;
						iLocal_416 = 0;
						while (iLocal_416 <= 19)
						{
							iLocal_504 = OBJECT::GET_RAYFIRE_MAP_OBJECT(Local_349[iLocal_416 /*30*/], 1f, Local_349[iLocal_416 /*30*/].f_27);
							if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_504))
							{
								if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_504) != 3)
								{
									OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_504, 11);
								}
							}
							else
							{
								iLocal_400 = 1;
							}
							iLocal_416++;
						}
					}
				}
				else
				{
					func_982(1, 0, 0, 0, 1);
					__LIB_0__::func_532(0, 1, 1, 0, 0, 0, 0);
					func_114();
					iLocal_417++;
				}
				break;
		}
		if (iLocal_417 >= 3)
		{
			__LIB_37__::func_174(0);
			func_895(5);
			func_114();
			WEAPON::REMOVE_WEAPON_ASSET(iLocal_262);
			if (__LIB_15__::func_944() != 0)
			{
				__LIB_17__::func_760(&Local_519, 0);
				func_176(&Local_519, 1, 0, 0);
				func_724(func_94(0));
				func_724(func_94(1));
			}
			RECORDING::REPLAY_STOP_EVENT();
			STREAMING::NEW_LOAD_SCENE_STOP();
			iLocal_383 = 0;
			iLocal_384 = 0;
			return 1;
		}
	}
	return 0;
}

int func_997()//Position - 0xA0885
{
	if (!iLocal_383)
	{
		func_652(2, "STAGE_ROOF", 0, 0, 0, 1);
		Global_100441.f_12[0] = 0;
		func_565(&iLocal_460, 1);
		func_568(&(iLocal_436[2]), 1);
		func_568(&(iLocal_436[2]), 1);
		func_568(&(iLocal_436[1]), 1);
		func_568(&(iLocal_436[0]), 1);
		func_568(&iLocal_443, 1);
		func_133();
		func_933(Local_748.f_35);
		func_935(joaat("prop_ld_test_01"));
		func_935(Local_748.f_2);
		while (!func_931())
		{
			SYSTEM::WAIT(0);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_463))
		{
			iLocal_463 = VEHICLE::CREATE_VEHICLE(Local_748.f_2, -651.1321f, -234.4142f, 36.5393f, 75.5169f, true, true, false);
			func_1000();
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_463, false))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_463);
			ENTITY::SET_ENTITY_COORDS(iLocal_463, -651.1321f, -234.4142f, 36.5393f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(iLocal_463, 75.5169f);
		}
		func_762(Local_748.f_219, 1, 0, 1);
		if (HUD::DOES_BLIP_EXIST(iLocal_487))
		{
			HUD::REMOVE_BLIP(&iLocal_487);
		}
		iLocal_487 = __LIB_0__::func_488(Local_314[5 /*3*/], 0);
		func_957(5, Local_748.f_251, -622.4f, -233.6f, 57.7f, 1);
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
		if (__LIB_15__::func_944() != 1)
		{
			__LIB_17__::func_760(&Local_519, 1);
			func_176(&Local_519, 1, 1, 0);
			func_724(func_94(0));
			func_724(func_94(1));
			func_854(1, 1, 1);
			func_9(func_94(0), 1, 1);
			func_722(func_94(0), 1);
		}
		WEAPON::GIVE_WEAPON_TO_PED(func_94(1), joaat("WEAPON_BZGAS"), (5 - WEAPON::GET_AMMO_IN_PED_WEAPON(func_94(1), joaat("WEAPON_BZGAS"))), false, false);
		iLocal_264 = 1;
		TASK::TASK_CLEAR_LOOK_AT(func_94(1));
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_748.f_1, false);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_748.f_2, false);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_748.f_12, false);
		func_649(0);
		func_114();
		func_111(800, 0, 0);
		iLocal_2079 = MISC::GET_GAME_TIMER();
		iLocal_417 = 0;
		iLocal_383 = 1;
		iLocal_2076 = 0;
		func_936(&iLocal_477, -625.1706f, -232.8408f, 39.4937f, "V_JEWEL2", 0, 0);
		iLocal_2078 = 0;
		AUDIO::REQUEST_AMBIENT_AUDIO_BANK("JWL_HEIST_GRENADES", false, -1);
		iLocal_2077 = 0;
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_457))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_457, false))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_457, true), ENTITY::GET_ENTITY_COORDS(func_94(1), true), true) > 50f)
				{
					if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_457))
					{
						VEHICLE::DELETE_VEHICLE(&iLocal_457);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("primo"));
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_748.f_1);
						ENTITY::SET_ENTITY_COORDS(func_94(0), -661.0373f, -222.0719f, 36.7327f, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(func_94(0), 80.2333f);
					}
				}
			}
		}
		if (iLocal_417 <= 5)
		{
			if (ENTITY::IS_ENTITY_AT_COORD(func_94(1), -631.597f, -237.63469f, 38.877033f, 3f, 3f, 1.8125f, false, true, 0) && (MISC::GET_GAME_TIMER() - iLocal_2070) > 10000)
			{
				func_943(1, 0f);
				if (ENTITY::IS_ENTITY_AT_COORD(func_94(1), -631.597f, -237.63469f, 38.877033f, 1.5f, 1.5f, 1.8125f, false, true, 0))
				{
					if (!func_946(Local_748.f_199) && !func_970(Local_748.f_199))
					{
						func_709(Local_748.f_199, 1, 1, 1, 7, 0, 0);
						iLocal_2070 = MISC::GET_GAME_TIMER();
					}
				}
			}
		}
		iLocal_416 = 0;
		while (iLocal_416 <= 5)
		{
			if (iLocal_417 < iLocal_416)
			{
				if (ENTITY::IS_ENTITY_AT_COORD(func_94(1), Local_314[iLocal_416 /*3*/], 2f, 2f, 1.5f, iLocal_416 == 5, true, 0))
				{
					iLocal_417 = iLocal_416;
				}
			}
			iLocal_416++;
		}
		switch (iLocal_417)
		{
			case 0:
				if (ENTITY::IS_ENTITY_AT_COORD(func_94(1), Local_314[0 /*3*/], 2f, 2f, 1.5f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_94(1), -584.54f, -289.94876f, 34.45472f, -591.3989f, -279.32788f, 39.77776f, 13.25f, false, true, 0))
				{
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("JSH_2A_GET_TO_STORE"))
					{
						AUDIO::STOP_AUDIO_SCENE("JSH_2A_GET_TO_STORE");
					}
					AUDIO::START_AUDIO_SCENE("JSH_2A_GET_TO_ROOF");
					func_762("JH_SHOUT", 0, 0, 1);
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 3f, 4);
					iLocal_417++;
				}
				break;
			case 1:
				if (ENTITY::IS_ENTITY_AT_COORD(func_94(1), Local_314[1 /*3*/], 2f, 2f, 1.5f, false, true, 0))
				{
					func_762(Local_748.f_189, 0, 0, 1);
					iLocal_417++;
				}
				break;
			case 2:
				if (ENTITY::IS_ENTITY_AT_COORD(func_94(1), Local_314[2 /*3*/], 3f, 3f, 1.5f, false, true, 0))
				{
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 3f, 4);
					TASK::TASK_LOOK_AT_COORD(func_94(1), -595.126f, -293.2816f, 46.5502f, 5000, 2048, 2);
					iLocal_417++;
				}
				break;
			case 3:
				if (ENTITY::IS_ENTITY_AT_COORD(func_94(1), Local_314[3 /*3*/], 2f, 2f, 1.5f, false, true, 0))
				{
					iLocal_417++;
					AUDIO::STOP_AUDIO_SCENE("JSH_2A_GET_TO_ROOF");
					AUDIO::START_AUDIO_SCENE("JSH_2A_GET_ACROSS_ROOF");
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 3f, 4);
				}
				break;
			case 4:
				if (ENTITY::IS_ENTITY_AT_COORD(func_94(1), Local_314[4 /*3*/], 4f, 4f, 1.5f, false, true, 0) && __LIB_17__::func_243(&uLocal_539, "JHAUD", Local_748.f_131, 9, 0, 0, 0))
				{
					if (WEAPON::HAS_PED_GOT_WEAPON(func_94(1), joaat("WEAPON_GRENADE"), false) && WEAPON::GET_PED_AMMO_BY_TYPE(func_94(1), WEAPON::GET_PED_AMMO_TYPE_FROM_WEAPON(func_94(1), joaat("WEAPON_GRENADE"))) > 0)
					{
						func_762("JH_GRENADE", 0, 0, 1);
					}
					MISC::CLEAR_AREA_OF_PEDS(ENTITY::GET_ENTITY_COORDS(func_94(1), true), 200f, 0);
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 5f, 4);
					iLocal_417++;
				}
				break;
			case 5:
				ENTITY::IS_ENTITY_AT_COORD(func_94(1), Local_314[5 /*3*/], 3.5f, 3.5f, 1.75f, true, true, 0);
				if (ENTITY::IS_ENTITY_AT_COORD(func_94(1), -625.9125f, -216.1734f, 60.4256f, 3.5f, 3.5f, 1.75f, false, true, 0) && !PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
				{
					func_849(&iLocal_487);
					AUDIO::STOP_AUDIO_SCENE("JSH_2A_GET_ACROSS_ROOF");
					AUDIO::START_AUDIO_SCENE("JSH_2A_THROW_GAS");
					__LIB_0__::func_151("JH_GRENHELP1", -1);
					func_762("JH_ANGLE", 0, 0, 1);
					func_762("JWL_VENT", 1, 0, 1);
					iLocal_348 = OBJECT::CREATE_OBJECT(joaat("prop_ld_test_01"), -622.4311f, -233.65483f, 58.412594f, true, true, false);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_348, true);
					ENTITY::SET_ENTITY_COLLISION(iLocal_348, false, false);
					OBJECT::SET_OBJECT_TARGETTABLE(iLocal_348, true);
					ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_348, true, 0f);
					TASK::TASK_LOOK_AT_ENTITY(func_94(1), iLocal_348, 60000, 2048, 2);
					AUDIO::STOP_PED_SPEAKING(func_94(0), true);
					iLocal_280 = __LIB_0__::func_643(iLocal_348);
					HUD::SET_BLIP_COLOUR(iLocal_280, 2);
					PLAYER::SET_MAX_WANTED_LEVEL(0);
					iLocal_417 = 6;
				}
				break;
			case 6:
				if (HUD::IS_HUD_COMPONENT_ACTIVE(19))
				{
					if (HUD::HUD_GET_WEAPON_WHEEL_CURRENTLY_HIGHLIGHTED() == joaat("WEAPON_GRENADE"))
					{
						if (iLocal_2071 == 0)
						{
							__LIB_0__::func_151("JH_GRENHELPG", -1);
							iLocal_2071 = 1;
						}
					}
					else if (HUD::HUD_GET_WEAPON_WHEEL_CURRENTLY_HIGHLIGHTED() == joaat("WEAPON_BZGAS"))
					{
						iLocal_417++;
					}
				}
				break;
			case 7:
				WEAPON::GET_CURRENT_PED_WEAPON(func_94(1), &iLocal_2074, true);
				if (iLocal_2074 == joaat("WEAPON_BZGAS") && iLocal_2076 == 0)
				{
					__LIB_0__::func_151("JH_GRENHELP2", -1);
					iLocal_2076 = 1;
				}
				break;
			case 8:
				if (SYSTEM::TIMERA() > 500)
				{
					if (__LIB_17__::func_243(&uLocal_539, "JHAUD", "JH_CANIN", 9, 0, 0, 0))
					{
						iLocal_417++;
					}
				}
				break;
			case 9:
				if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					iLocal_417++;
				}
				break;
			case 10:
				break;
		}
		if (iLocal_417 >= 3)
		{
			if (iLocal_2077 == 0)
			{
				if (ENTITY::IS_ENTITY_AT_COORD(func_94(1), Local_314[5 /*3*/], 20.5f, 20.5f, 15.75f, true, true, 0))
				{
					STREAMING::NEW_LOAD_SCENE_START_SPHERE(-623.7916f, -232.2508f, 38.3262f, 35f, 0);
					iLocal_2077 = 1;
				}
			}
			EVENT::SUPPRESS_SHOCKING_EVENTS_NEXT_FRAME();
			HUD::SET_RADAR_AS_INTERIOR_THIS_FRAME(MISC::GET_HASH_KEY("V_Refit"), -587.171f, -286.01f, 30, 2);
			HUD::SET_RADAR_ZOOM(0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_348) && iLocal_417 < 8)
		{
			ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -622.4559f, -233.6758f, 56.7967f, 0.1f, 0.1f, 0.1f, !iLocal_2078, true, 0);
		}
		if (iLocal_417 < 8)
		{
			if (MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(-622.4311f, -233.65483f, 58.412594f, joaat("WEAPON_BZGAS"), 1f, true))
			{
				if (AUDIO::REQUEST_AMBIENT_AUDIO_BANK("JWL_HEIST_GRENADES", false, -1))
				{
					if (iLocal_2078 == 0)
					{
						AUDIO::PLAY_SOUND_FROM_COORD(-1, "Grenade_Throw_Success", -622.4311f, -233.65483f, 58.412594f, "JEWEL_HEIST_SOUNDS", false, 0, false);
						HUD::CLEAR_PRINTS();
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(8f, 3f, 4);
						iLocal_2080 = 0;
						iLocal_2078 = 1;
					}
				}
			}
			else if (!MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(-622.4311f, -233.65483f, 58.412594f, joaat("WEAPON_BZGAS"), 1.4f, true))
			{
				iLocal_2078 = 0;
			}
			if (FIRE::IS_EXPLOSION_IN_SPHERE(21, -622.4311f, -233.65483f, 58.412594f, 1.5f))
			{
				SYSTEM::SETTIMERA(0);
				iLocal_417 = 8;
			}
		}
		if (iLocal_2078 == 1 && iLocal_2080 == 0)
		{
			if (__LIB_17__::func_243(&uLocal_539, "JHAUD", "JH_LANDG", 9, 0, 0, 0))
			{
				iLocal_2080 = 1;
			}
		}
		if ((PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/) && !MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), joaat("WEAPON_BZGAS"), 2f, true)) && iLocal_417 < 8)
		{
			iLocal_265 = MISC::GET_GAME_TIMER();
			iLocal_2073 = 0;
			iLocal_2072 = 0;
		}
		if (iLocal_2072 == 0 && iLocal_417 < 8)
		{
			if ((MISC::GET_GAME_TIMER() - iLocal_265) > 4200)
			{
				if ((MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(-587.7454f, -295.5597f, -34.072205f, -638.5672f, -203.2724f, 165.57771f, 33.25f, joaat("WEAPON_BZGAS"), true) && !MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(-620.6958f, -236.4711f, 58.13749f, -624.11694f, -230.83354f, 59.137512f, 3f, joaat("WEAPON_BZGAS"), true)) && !FIRE::IS_EXPLOSION_IN_SPHERE(21, -622.4311f, -233.65483f, 58.412594f, 1.5f))
				{
					if (iLocal_2073 == 0)
					{
						MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_BZGAS"), 30.5f, &Local_2075, false);
						AUDIO::PLAY_SOUND_FROM_COORD(-1, "Grenade_Throw_Miss", Local_2075, "JEWEL_HEIST_SOUNDS", false, 0, false);
						iLocal_2073 = 1;
					}
					if (MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(-622.45105f, -233.72066f, 59.387516f, -609.8139f, -256.92328f, 51.043133f, 20.5f, joaat("WEAPON_BZGAS"), true))
					{
						if (__LIB_17__::func_243(&uLocal_539, "JHAUD", "JH_FAR", 9, 0, 0, 0))
						{
							iLocal_2072 = 1;
						}
					}
					else if (MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(-622.45105f, -233.72066f, 59.387516f, -630.0067f, -220.07161f, 52.294014f, 20.5f, joaat("WEAPON_BZGAS"), true))
					{
						if (__LIB_17__::func_243(&uLocal_539, "JHAUD", "JH_SHORT", 9, 0, 0, 0))
						{
							iLocal_2072 = 1;
						}
					}
					else if (__LIB_17__::func_243(&uLocal_539, "JHAUD", "JH_MISS", 9, 0, 0, 0))
					{
						iLocal_2072 = 1;
					}
				}
			}
		}
		if ((MISC::GET_GAME_TIMER() - iLocal_2079) > 70000 && iLocal_2078 == 0)
		{
			func_762("JH_IMP", 0, 0, 1);
			func_762("JH_CHILL", 0, 0, 1);
			iLocal_2079 = MISC::GET_GAME_TIMER();
		}
		func_998();
		if (iLocal_417 >= 10)
		{
			func_565(&iLocal_463, 1);
			CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
			HUD::REMOVE_BLIP(&iLocal_280);
			func_943(0, 0f);
			func_567(&iLocal_348, 0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_457, false))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_457);
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_487))
			{
				HUD::REMOVE_BLIP(&iLocal_487);
			}
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("JSH_2A_GET_TO_ROOF"))
			{
				AUDIO::STOP_AUDIO_SCENE("JSH_2A_GET_TO_ROOF");
			}
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("JSH_2A_GET_TO_ROOF"))
			{
				AUDIO::STOP_AUDIO_SCENE("JSH_2A_GET_ACROSS_ROOF");
			}
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("JSH_2A_THROW_GAS"))
			{
				AUDIO::STOP_AUDIO_SCENE("JSH_2A_THROW_GAS");
			}
			if (!PED::IS_PED_INJURED(func_94(0)))
			{
				AUDIO::STOP_PED_SPEAKING(func_94(0), false);
			}
			iLocal_383 = 0;
			return 1;
		}
	}
	return 0;
}

void func_998()//Position - 0xA1495
{
	int iVar0;
	switch (iLocal_292)
	{
		case 0:
			if (Global_96865 == 1)
			{
				iVar0 = 0;
				while (iVar0 < Local_293.f_0)
				{
					Local_293[iVar0 /*6*/].f_1 = 0;
					iVar0++;
				}
				iLocal_294 = 0;
				STREAMING::REQUEST_MODEL(iLocal_344);
				STREAMING::REQUEST_ANIM_DICT(sLocal_345);
				iLocal_292++;
			}
			break;
		case 1:
			if (STREAMING::HAS_MODEL_LOADED(iLocal_344) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_345))
			{
				iLocal_292++;
			}
			break;
		case 2:
			iVar0 = 0;
			while (iVar0 < Local_293.f_0)
			{
				if (Local_293[iVar0 /*6*/].f_1 == 0)
				{
					if (iVar0 == 0)
					{
						Local_293[iVar0 /*6*/] = PED::CREATE_PED(26, iLocal_344, Vector(49.3284f, -293.4879f, -592.2896f) + Vector(-0.15f, 0f, 0f), 298.4107f, true, true);
					}
					else if (iVar0 == 1)
					{
						Local_293[iVar0 /*6*/] = PED::CREATE_PED(26, iLocal_344, Vector(49.3288f, -279.8143f, -589.9229f) + Vector(-0.15f, 0f, 0f), 233.7321f, true, true);
					}
					else if (iVar0 == 2)
					{
						Local_293[iVar0 /*6*/] = PED::CREATE_PED(26, iLocal_344, Vector(49.9288f, -283.9244f, -581.4795f) + Vector(-0.15f, 0f, 0f), 358.268f, true, true);
					}
					else if (iVar0 == 3)
					{
						Local_293[iVar0 /*6*/] = PED::CREATE_PED(26, iLocal_344, Vector(49.9288f, -285.6026f, -580.4676f) + Vector(-0.15f, 0f, 0f), 199.0853f, true, true);
					}
					else if (iVar0 == 4)
					{
						Local_293[iVar0 /*6*/] = PED::CREATE_PED(26, iLocal_344, Vector(49.3287f, -278.951f, -587.5387f) + Vector(-0.15f, 0f, 0f), 45.4051f, true, true);
					}
					else if (iVar0 == 5)
					{
						Local_293[iVar0 /*6*/] = PED::CREATE_PED(26, iLocal_344, Vector(49.3285f, -288.1526f, -589.8799f) + Vector(-0.15f, 0f, 0f), 319.812f, true, true);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_344);
					}
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_293[iVar0 /*6*/], true);
					PED::SET_PED_CAN_RAGDOLL(Local_293[iVar0 /*6*/], true);
					ENTITY::FREEZE_ENTITY_POSITION(Local_293[iVar0 /*6*/], true);
					ENTITY::SET_ENTITY_COLLISION(Local_293[iVar0 /*6*/], true, false);
					PED::SET_PED_CAN_BE_TARGETTED(Local_293[iVar0 /*6*/], false);
					AUDIO::REQUEST_SCRIPT_AUDIO_BANK("Seagulls", false, -1);
				}
				iVar0++;
			}
			iLocal_292++;
			break;
		case 3:
			if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -584.7792f, -291.47168f, 49.077847f, -591.996f, -278.703f, 55.472153f, 15.75f, false, true, 0) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -592.7419f, -291.9719f, 49.327f, 2.15f, 2.15f, 2f, false, true, 0)) || iLocal_294 == 1)
			{
				if (__LIB_17__::func_243(&uLocal_539, "JHAUD", "JH_FRANSCARE", 8, 0, 0, 0))
				{
					iLocal_294 = 1;
					iLocal_292++;
				}
			}
			break;
		case 4:
			Global_96865 = 0;
			iVar0 = 0;
			while (iVar0 < Local_293.f_0)
			{
				if (Local_293[iVar0 /*6*/].f_1 == 0)
				{
					if (!PED::IS_PED_INJURED(Local_293[iVar0 /*6*/]))
					{
						TASK::TASK_PLAY_ANIM(Local_293[iVar0 /*6*/], sLocal_345, "idle", 8f, -8f, -1, 9, 0f, false, false, false);
						Local_293[iVar0 /*6*/].f_1 = 1;
					}
				}
				else if (ENTITY::DOES_ENTITY_EXIST(Local_293[iVar0 /*6*/]))
				{
					if (!PED::IS_PED_INJURED(Local_293[iVar0 /*6*/]))
					{
						switch (Local_293[iVar0 /*6*/].f_1)
						{
							case 1:
								if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("Seagulls", false, -1) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_293[iVar0 /*6*/], true)) < 625f)
								{
									if (iVar0 == 0)
									{
										AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Seagulls", Local_293[iVar0 /*6*/], "JEWEL_HEIST_SOUNDS", false, 0);
									}
									Local_293[iVar0 /*6*/].f_2 = MISC::GET_GAME_TIMER();
									Local_293[iVar0 /*6*/].f_1++;
								}
								break;
							case 2:
								if ((MISC::GET_GAME_TIMER() - Local_293[iVar0 /*6*/].f_2) > 100)
								{
									ENTITY::FREEZE_ENTITY_POSITION(Local_293[iVar0 /*6*/], false);
									ENTITY::SET_ENTITY_COLLISION(Local_293[iVar0 /*6*/], true, false);
									Local_293[iVar0 /*6*/].f_3 = { __LIB_3__::func_80(ENTITY::GET_ENTITY_ROTATION(Local_293[iVar0 /*6*/], 2) + Vector(0f, 0f, 45f)) };
									ENTITY::SET_ENTITY_VELOCITY(Local_293[iVar0 /*6*/], Local_293[iVar0 /*6*/].f_3 * Vector(7f, 7f, 7f));
									TASK::TASK_PLAY_ANIM(Local_293[iVar0 /*6*/], sLocal_345, "flapping", 4f, -8f, -1, 1, 0f, false, false, false);
									Local_293[iVar0 /*6*/].f_1++;
								}
								break;
							case 3:
								if (!PED::IS_PED_INJURED(Local_293[iVar0 /*6*/]))
								{
									ENTITY::SET_ENTITY_VELOCITY(Local_293[iVar0 /*6*/], Local_293[iVar0 /*6*/].f_3 * Vector(7f, 7f, 7f));
									if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_293[iVar0 /*6*/], sLocal_345, "flapping", 3))
									{
										ENTITY::SET_ENTITY_ANIM_SPEED(Local_293[iVar0 /*6*/], sLocal_345, "flapping", 1f);
										Local_293[iVar0 /*6*/].f_1++;
									}
								}
								break;
							case 4:
								if (!PED::IS_PED_INJURED(Local_293[iVar0 /*6*/]))
								{
									ENTITY::SET_ENTITY_VELOCITY(Local_293[iVar0 /*6*/], Local_293[iVar0 /*6*/].f_3 * Vector(7f, 7f, 7f));
								}
								break;
							}
					}
					if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -591.4834f, -291.3098f, 49.3284f, 7.5f, 7.5f, 7.5f, false, true, 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
					{
						PED::DELETE_PED(&(Local_293[iVar0 /*6*/]));
					}
				}
				else if (iVar0 == 0)
				{
					STREAMING::REMOVE_ANIM_DICT(sLocal_345);
					AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("Seagulls");
				}
				iVar0++;
			}
			break;
	}
}

void func_1000()//Position - 0xA1A57
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_463, false))
	{
		if (bLocal_382)
		{
			VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iLocal_463, "TODO PT1");
		}
		else
		{
			VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iLocal_463, "RW1602B0");
			VEHICLE::SET_VEHICLE_COLOURS(iLocal_463, 0, 0);
		}
	}
}

int func_1001()//Position - 0xA1A95
{
	if (!iLocal_383)
	{
		func_652(1, "STAGE_DRIVE_TO_STORE", 0, 0, 0, 1);
		Global_100441.f_12[0] = 0;
		func_133();
		VEHICLE::REQUEST_VEHICLE_RECORDING(1, "JHArrive");
		VEHICLE::REQUEST_VEHICLE_RECORDING(2, "JHArrive");
		VEHICLE::REQUEST_VEHICLE_RECORDING(3, "JHArrive");
		VEHICLE::REQUEST_VEHICLE_RECORDING(1, "JHBENSONEXIT");
		func_1007(Local_748.f_244, 0, 1);
		func_1007(Local_748.f_245, 0, 1);
		Local_409 = { Local_308 };
		func_114();
		iLocal_416 = 0;
		while (iLocal_416 <= 24)
		{
			iLocal_408[iLocal_416] = 0;
			iLocal_416++;
		}
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_748.f_2, true);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_748.f_12, true);
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_460, false))
		{
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_460, false);
		}
		Local_370.f_0 = __LIB_0__::func_639(iLocal_463, 0, 0);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_460, false))
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_460, 3);
		}
		func_709(Local_748.f_156, 1, 1, 1, 7, 0, 0);
		func_762(Local_748.f_231, 1, 0, 1);
		if (func_630())
		{
			func_762("JH_VAN_PH", 0, 0, 1);
		}
		else if (func_629())
		{
			func_762("JH_VAN_CF", 0, 0, 1);
		}
		else if (func_628())
		{
			func_762("JH_VAN_RL", 0, 0, 1);
		}
		if (func_116() && func_120())
		{
			func_762("JH_VAN_GE", 0, 0, 1);
		}
		else if (func_116() && func_118())
		{
			func_762("JH_VAN_GK", 0, 0, 1);
		}
		else if (func_117() && func_120())
		{
			func_762("JH_VAN_PE", 0, 0, 1);
		}
		else if (func_117() && func_118())
		{
			func_762("JH_VAN_PK", 0, 0, 1);
		}
		else if (func_115() && func_120())
		{
			func_762("JH_VAN_NE", 0, 0, 1);
		}
		else if (func_115() && func_118())
		{
			func_762("JH_VAN_NK", 0, 0, 1);
		}
		PATHFIND::SET_ROADS_IN_ANGLED_AREA(756.4408f, -1005.6302f, 21.892076f, 753.2204f, -919.53253f, 30.691278f, 55f, false, false, true);
		PATHFIND::SET_ROADS_IN_ANGLED_AREA(777.2901f, -991.4522f, 23.630905f, 770.1435f, -740.85876f, 31.30616f, 13.5f, false, false, true);
		fLocal_2056 = 1f;
		bLocal_2059 = false;
		AUDIO::TRIGGER_MUSIC_EVENT("JH2B_VEHICLE");
		bLocal_2064 = false;
		SYSTEM::SETTIMERA(0);
		iLocal_2060 = 0;
		func_111(800, 0, 0);
		iLocal_2058 = 0;
		iLocal_2062 = 0;
		iLocal_417 = 0;
		iLocal_87 = 0;
		iLocal_383 = 1;
		RECORDING::REPLAY_RECORD_BACK_FOR_TIME(0f, 6f, 4);
	}
	else
	{
		switch (iLocal_2068)
		{
			case 0:
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_331, 100f, 100f, 100f, false, true, 0))
				{
					func_9(iLocal_436[0], 1, 1);
					func_9(iLocal_436[1], 1, 1);
					CUTSCENE::REQUEST_CUTSCENE(Local_748.f_122, 8);
					iLocal_2068++;
				}
				break;
			case 1:
				if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
				{
					__LIB_17__::func_43("Franklin", joaat("Player_One"), 18);
					__LIB_17__::func_43("Michael", joaat("Player_Zero"), 31);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Michael", 9, 1, 0, 0);
					CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Michael", 2, 0, 0, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("gunman_selection_1", iLocal_436[1], 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("driver_selection", iLocal_436[0], 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("angry_customer", 0, 0, 0, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("angry_customer", 2, 1, 0, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("angry_customer", 3, 1, 0, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("angry_customer", 4, 1, 0, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("angry_customer", 8, 0, 0, 0);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_438[1]))
					{
						CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Jewellery_Assitance", iLocal_438[1], 0);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_438[4]))
					{
						CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("shop_assistant", iLocal_438[4], 0);
					}
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("boyfriend", 0, 1, 0, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("boyfriend", 2, 1, 0, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("boyfriend", 3, 0, 5, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("boyfriend", 4, 1, 2, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("boyfriend", 8, 0, 0, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("customer", 0, 0, 0, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("customer", 2, 0, 0, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("customer", 3, 0, 1, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("customer", 4, 1, 1, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("customer", 8, 0, 0, 0);
					iLocal_2068++;
				}
				break;
			case 2:
				if (CUTSCENE::HAS_CUTSCENE_LOADED())
				{
					STREAMING::REQUEST_MODEL(Local_748.f_3);
					iLocal_416 = 0;
					while (iLocal_416 <= 4)
					{
						STREAMING::REQUEST_MODEL(Local_748.f_4[iLocal_416]);
						iLocal_416++;
					}
					STREAMING::REQUEST_ANIM_DICT(Local_748.f_35);
					VEHICLE::REQUEST_VEHICLE_RECORDING(1, "JHArrive");
					VEHICLE::REQUEST_VEHICLE_RECORDING(2, "JHArrive");
					VEHICLE::REQUEST_VEHICLE_RECORDING(3, "JHArrive");
					WEAPON::REQUEST_WEAPON_ASSET(iLocal_262, 31, 16);
					iLocal_2068++;
				}
				break;
		}
		func_1006();
		if (PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()) || iLocal_2058 == 1)
		{
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(func_94(0), 2f);
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(iLocal_436[0], 2f);
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(iLocal_436[1], 2f);
			iLocal_2058 = 1;
		}
		else
		{
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(func_94(0), 1f);
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(iLocal_436[0], 1f);
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(iLocal_436[1], 1f);
		}
		TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(iLocal_436[2], 1f);
		switch (iLocal_417)
		{
			case 0:
				iLocal_2063 = 0;
				AUDIO::TRIGGER_MUSIC_EVENT("JH2B_START");
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_460, false))
				{
					VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iLocal_460, false, 0);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_463, false))
				{
					VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iLocal_463, false, 0);
					VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(iLocal_463, 1, false);
				}
				SYSTEM::SETTIMERA(0);
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_436[0], true);
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_436[1], true);
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_436[2], true);
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(func_94(0), true);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_436[2], PLAYER::PLAYER_PED_ID(), -1);
				TASK::TASK_LOOK_AT_ENTITY(iLocal_436[2], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				TASK::TASK_LOOK_AT_ENTITY(iLocal_436[0], iLocal_436[1], -1, 0, 2);
				TASK::TASK_LOOK_AT_ENTITY(iLocal_436[1], iLocal_436[0], -1, 0, 2);
				TASK::TASK_LOOK_AT_ENTITY(func_94(0), PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				if (!PED::IS_PED_INJURED(func_94(0)))
				{
					if (!PED::IS_PED_INJURED(func_94(0)) && !PED::IS_PED_INJURED(func_94(1)))
					{
						TASK::TASK_LOOK_AT_ENTITY(func_94(0), func_94(1), 99999999, 2048, 2);
					}
					func_959(Local_519[0], 713.2115f, -962.9461f, 29.4335f, 190.7033f, 1f, 1f, 15f);
				}
				iLocal_417++;
				break;
			case 1:
				if ((((ENTITY::IS_ENTITY_AT_COORD(func_94(1), Local_317, 9f, 9f, 3f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_94(1), 718.09564f, -975.37286f, 23.709906f, 717.5604f, -965.2232f, 31.395351f, 3.25f, false, true, 0)) || ENTITY::IS_ENTITY_AT_ENTITY(func_94(1), iLocal_463, 5f, 5f, 1.5f, false, true, 0)) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 31 /*INPUT_MOVE_UD*/)) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 30 /*INPUT_MOVE_LR*/))
				{
					func_1005(func_94(0), iLocal_463, 0, 1f, 60000, 0);
					PED::SET_PED_CONFIG_FLAG(func_94(0), 104, true);
					SYSTEM::SETTIMERA(0);
					__LIB_0__::func_709(func_94(0), "WALK_ME_TO_THE_CAR", "MICHAEL", 4);
					iLocal_417++;
				}
				else if (SYSTEM::TIMERA() > 15000 && iLocal_2063 == 0)
				{
					func_762("JH_GOF", 0, 0, 1);
					iLocal_2063 = 1;
				}
				break;
			case 2:
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_94(1), 717.65717f, -966.0149f, 31.645279f, 718.0654f, -975.37305f, 23.730608f, 3.25f, false, true, 0) || ENTITY::IS_ENTITY_AT_ENTITY(func_94(1), iLocal_463, 5f, 5f, 1.5f, false, true, 0))
				{
					iLocal_2052 = 99;
					TASK::TASK_CLEAR_LOOK_AT(func_94(1));
					func_1005(iLocal_436[2], iLocal_460, -1, 1f, 60000, 0);
					func_1005(iLocal_436[0], iLocal_463, 2, 1f, 60000, 500);
					func_1005(iLocal_436[1], iLocal_463, 1, 1f, 60000, 3000);
					PED::SET_PED_CONFIG_FLAG(iLocal_436[2], 104, true);
					PED::SET_PED_CONFIG_FLAG(iLocal_436[0], 104, true);
					PED::SET_PED_CONFIG_FLAG(iLocal_436[1], 104, true);
					PED::SET_PED_CONFIG_FLAG(func_94(0), 104, true);
					PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(iLocal_436[2], false);
					PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(iLocal_436[0], false);
					PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(iLocal_436[1], false);
					iLocal_417++;
				}
				else if (SYSTEM::TIMERA() > 15000 && iLocal_2063 == 0)
				{
					func_762("JH_GOF", 0, 0, 1);
					iLocal_2063 = 1;
				}
				break;
			case 3:
				if (PED::IS_PED_IN_VEHICLE(func_94(1), iLocal_463, false))
				{
					SYSTEM::SETTIMERA(0);
					fLocal_2056 = 2f;
					func_923(Local_748.f_22);
					func_923(Local_748.f_23);
					ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_455);
					func_568(&iLocal_443, 1);
					STREAMING::REMOVE_ANIM_DICT("move_m@generic_variations@idle@b");
					AUDIO::START_AUDIO_SCENE("JSH_2B_GET_TO_STORE");
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 10f, 4);
					iLocal_417++;
				}
				break;
			case 4:
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_460))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_436[2]))
					{
						if (PED::IS_PED_IN_VEHICLE(iLocal_436[2], iLocal_460, false))
						{
							if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_460, Local_310, 5f, 5f, 5f, false, true, 0))
							{
								if (!iLocal_2060 && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "JHBENSONEXIT"))
								{
									VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_460, 1, "JHBENSONEXIT", true);
									iLocal_2060 = 1;
								}
								if (iLocal_2060)
								{
									if (!func_917(iLocal_436[2], joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE")))
									{
										if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_460))
										{
											TASK::TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE(iLocal_436[2], iLocal_460, Local_310, 19f, 786603, 5f);
											SYSTEM::SETTIMERA(0);
										}
									}
								}
								if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_460, 0f, 3f, 0f), 4f, 4f, 4f, false, true, 0))
								{
									if (fLocal_2065 > 0f)
									{
										fLocal_2065 = (fLocal_2065 - (0.5f * SYSTEM::TIMESTEP()));
									}
									else
									{
										fLocal_2065 = 0f;
									}
								}
								else if (fLocal_2065 < 1f)
								{
									fLocal_2065 = (fLocal_2065 + (0.5f * SYSTEM::TIMESTEP()));
								}
								else
								{
									fLocal_2065 = 1f;
								}
								VEHICLE::SET_PLAYBACK_SPEED(iLocal_460, fLocal_2065);
							}
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(func_94(1)))
				{
					if (PED::IS_PED_IN_VEHICLE(func_94(1), iLocal_463, false))
					{
						bLocal_2059 = true;
					}
				}
				if ((((func_1004(&Local_370, Local_409, 5f, 5f, 5f, 1, func_94(0), iLocal_436[1], iLocal_436[0], iLocal_463, Local_748.f_218, Local_748.f_229, "G_PICKCREW", "G_PICKCREW", Local_748.f_230, Local_748.f_231, Local_748.f_232, "", &Local_286, &Local_289, 0, bLocal_2059, 1, -1) || (HUD::DOES_BLIP_EXIST(Local_370.f_5) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -665.70654f, -246.37125f, 35.002647f, -700.7289f, -266.41135f, 46.027256f, 38.75f, false, true, 0))) || (HUD::DOES_BLIP_EXIST(Local_370.f_5) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -648.91644f, -208.85909f, 35.889164f, -659.24286f, -187.9048f, 44.673836f, 42.25f, false, true, 0))) || (HUD::DOES_BLIP_EXIST(Local_370.f_5) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -701.6043f, -207.68472f, 35.562073f, -683.28754f, -243.60796f, 43.694168f, 42.25f, false, true, 0))) || (HUD::DOES_BLIP_EXIST(Local_370.f_5) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -663.1459f, -228.75304f, 35.3631f, -646.9983f, -233.37433f, 39.71256f, 16.5f, false, true, 0)))
				{
					if (__LIB_0__::func_494(1, 1, 1))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -665.70654f, -246.37125f, 35.002647f, -700.7289f, -266.41135f, 46.027256f, 38.75f, false, true, 0))
						{
							iLocal_306 = 1;
						}
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -648.91644f, -208.85909f, 35.889164f, -659.24286f, -187.9048f, 44.673836f, 42.25f, false, true, 0))
						{
							iLocal_306 = 2;
						}
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -701.6043f, -207.68472f, 35.562073f, -683.28754f, -243.60796f, 43.694168f, 42.25f, false, true, 0))
						{
							iLocal_306 = 3;
						}
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -663.1459f, -228.75304f, 35.3631f, -646.9983f, -233.37433f, 39.71256f, 16.5f, false, true, 0))
						{
							iLocal_306 = 4;
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
						}
						SYSTEM::SETTIMERB(0);
						__LIB_16__::func_318(&Local_370, 1, 0);
						iLocal_417++;
					}
				}
				if (PED::IS_PED_IN_VEHICLE(func_94(1), iLocal_463, false))
				{
					if ((PED::IS_PED_IN_VEHICLE(func_94(0), iLocal_463, false) && PED::IS_PED_IN_VEHICLE(iLocal_436[0], iLocal_463, false)) && PED::IS_PED_IN_VEHICLE(iLocal_436[1], iLocal_463, false))
					{
						if (!__LIB_13__::func_755(&Local_370, 0) && BitTest(Local_370.f_13, 2))
						{
							if (!iLocal_408[1])
							{
								func_716(1, 1, 1);
								func_762("JH_PLAN3", 0, 2000, 1);
								if (func_116())
								{
									func_762("JH_GUS", 0, 0, 1);
								}
								else if (func_115())
								{
									func_762("JH_NORM", 0, 0, 1);
								}
								else if (func_117())
								{
									func_762("JH_PACKIE", 0, 0, 1);
								}
								if (func_120())
								{
									func_762("JH_NOTCLOSE", 0, 0, 1);
								}
								else if (func_118())
								{
									func_762("JH_NOTCLOSEK", 0, 0, 1);
								}
								func_762("JH_CREWMEM", 2, 0, 0);
								TASK::TASK_CLEAR_LOOK_AT(func_94(0));
								iLocal_408[1] = 1;
								iLocal_408[2] = 1;
							}
						}
					}
				}
				if (((((iLocal_2062 == 0 && PED::IS_PED_IN_ANY_VEHICLE(func_94(1), false)) && PED::IS_PED_IN_ANY_VEHICLE(func_94(0), false)) && ENTITY::GET_ENTITY_SPEED(iLocal_463) < 0.5f) && iLocal_408[1] == 1) && !__LIB_13__::func_755(&Local_370, 1))
				{
					if (__LIB_17__::func_243(&uLocal_539, "JHAUD", "JH_MICGO", 9, 0, 0, 0))
					{
						iLocal_2062 = 1;
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_463, false))
				{
					if (ENTITY::GET_ENTITY_HEALTH(iLocal_463) < 500 && iLocal_2067 == 0)
					{
						func_762("JH_VANDAM", 0, 0, 1);
						iLocal_2067 = 1;
					}
				}
				if (ENTITY::IS_ENTITY_AT_COORD(func_94(1), Local_409, 200f, 200f, 50f, false, true, 0))
				{
					func_132(Local_748.f_3, 0, 0, 0);
					iLocal_416 = 0;
					while (iLocal_416 <= 4)
					{
						func_132(Local_748.f_4[iLocal_416], 0, 0, 0);
						iLocal_416++;
					}
					func_131(Local_748.f_35, 0, 0, 0);
					if (bLocal_2064 == 0)
					{
						bLocal_2064 = true;
					}
				}
				if (bLocal_2064)
				{
					func_1003();
				}
				if (iLocal_408[1] == 1 && iLocal_408[2] == 1)
				{
					if (!HUD::DOES_BLIP_EXIST(Local_370.f_5) || ENTITY::IS_ENTITY_UPSIDEDOWN(iLocal_463))
					{
						if (!__LIB_0__::func_568())
						{
							__LIB_0__::func_620(1);
							iLocal_2069 = 0;
						}
						if (!__LIB_13__::func_755(&Local_370, 1) && iLocal_2069 == 0)
						{
							if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
							{
								__LIB_0__::func_709(func_94(1), "POLICE_PURSUIT_DRIVEN", "FRANKLIN_NORMAL", 24);
								iLocal_2069 = 1;
							}
						}
					}
					else if (__LIB_0__::func_568() && __LIB_1__::func_854(func_94(0), func_94(1)))
					{
						__LIB_0__::func_620(0);
					}
				}
				break;
		}
		PED::SET_PED_RESET_FLAG(iLocal_436[2], 60, true);
		PED::SET_PED_RESET_FLAG(iLocal_436[0], 60, true);
		PED::SET_PED_RESET_FLAG(iLocal_436[1], 60, true);
		PED::SET_PED_RESET_FLAG(func_94(0), 60, true);
		if (iLocal_417 >= 5)
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_487))
			{
				HUD::REMOVE_BLIP(&iLocal_487);
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_488))
			{
				HUD::REMOVE_BLIP(&iLocal_488);
			}
			iLocal_416 = 0;
			while (iLocal_416 <= 2)
			{
				if (HUD::DOES_BLIP_EXIST(iLocal_486[iLocal_416]))
				{
					HUD::REMOVE_BLIP(&(iLocal_486[iLocal_416]));
				}
				iLocal_416++;
			}
			PED::SET_PED_CONFIG_FLAG(iLocal_436[2], 104, false);
			PED::SET_PED_CONFIG_FLAG(iLocal_436[0], 104, false);
			PED::SET_PED_CONFIG_FLAG(iLocal_436[1], 104, false);
			PED::SET_PED_CONFIG_FLAG(func_94(0), 104, false);
			if (bLocal_382)
			{
				func_565(&iLocal_463, 1);
			}
			func_565(&iLocal_460, 1);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_457);
			func_568(&(iLocal_436[2]), 1);
			func_568(&(iLocal_436[2]), 1);
			func_568(&iLocal_443, 1);
			AUDIO::STOP_AUDIO_SCENE("JSH_2B_GET_TO_STORE");
			func_114();
			iLocal_383 = 0;
			return 1;
		}
	}
	return 0;
}

void func_1003()//Position - 0xA2B88
{
	float fVar0;
	var uVar1;
	switch (iLocal_77)
	{
		case 0:
			STREAMING::REQUEST_ANIM_DICT("MISSCOMMON@VAN_PUT_ON_MASKS");
			iLocal_77++;
			break;
		case 1:
			if (STREAMING::HAS_ANIM_DICT_LOADED("MISSCOMMON@VAN_PUT_ON_MASKS"))
			{
				TASK::TASK_PLAY_ANIM(func_94(0), "MISSCOMMON@VAN_PUT_ON_MASKS", "PUT_ON_MASK_PS", 8f, -8f, -1, 40, 0f, false, false, false);
				iLocal_77++;
			}
			break;
		case 2:
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(func_94(0), "MISSCOMMON@VAN_PUT_ON_MASKS", "PUT_ON_MASK_PS", 3) && iLocal_2057 == 0)
			{
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
				ENTITY::FIND_ANIM_EVENT_PHASE("MISSCOMMON@VAN_PUT_ON_MASKS", "PUT_ON_MASK_PS", "MASK", &fVar0, &uVar1);
				if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(func_94(0), "MISSCOMMON@VAN_PUT_ON_MASKS", "PUT_ON_MASK_PS") > fVar0)
				{
					func_722(func_94(0), 1);
					STREAMING::REMOVE_ANIM_DICT("MISSCOMMON@VAN_PUT_ON_MASKS");
					iLocal_2057 = 1;
				}
			}
			break;
	}
}

int func_1004(int* iParam0, struct<3> Param1, struct<3> Param2, bool bParam3, int iParam4, var uParam5, var uParam6, int iParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11, char* sParam12, char* sParam13, char* sParam14, int iParam15, int iParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, int iParam21)//Position - 0xA2C68
{
	return __LIB_17__::func_223(iParam0, Param1, Param2, __LIB_0__::func_613(), __LIB_0__::func_613(), bParam3, 5, iParam4, uParam5, uParam6, iParam7, sParam8, sParam9, sParam10, sParam11, sParam12, sParam13, bParam18, bParam19, sParam14, 0, 0, bParam20, iParam21, iParam15, iParam16, iParam17, 1, 1065353216);
}

void func_1005(int iParam0, int iParam1, int iParam2, float fParam3, int iParam4, int iParam5)//Position - 0xA2CB5
{
	int iVar0;
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_PAUSE(0, iParam5);
	TASK::TASK_ENTER_VEHICLE(0, iParam1, iParam4, iParam2, fParam3, 1, 0);
	TASK::CLOSE_SEQUENCE_TASK(iVar0);
	if (!PED::IS_PED_INJURED(iParam0))
	{
		TASK::TASK_PERFORM_SEQUENCE(iParam0, iVar0);
	}
	TASK::CLEAR_SEQUENCE_TASK(&iVar0);
}

void func_1006()//Position - 0xA2CFA
{
	int iVar0;
	switch (iLocal_87)
	{
		case 0:
			STREAMING::REQUEST_ANIM_DICT("MISSHeist_JewelLester_waitidles");
			STREAMING::REQUEST_ANIM_DICT("move_characters@lester@STD_CaneUp");
			if (STREAMING::HAS_ANIM_DICT_LOADED("MISSHeist_JewelLester_waitidles") && STREAMING::HAS_ANIM_DICT_LOADED("move_characters@lester@STD_CaneUp"))
			{
				if (!PED::IS_PED_INJURED(iLocal_443))
				{
					sLocal_2053 = "LESTER_WAITIDLE_1";
					TASK::TASK_PLAY_ANIM(iLocal_443, "move_characters@lester@STD_CaneUp", "idle_outro", 8f, -8f, -1, 2, 0f, false, false, false);
					iLocal_87++;
				}
			}
			break;
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_443))
			{
				if (!PED::IS_PED_INJURED(iLocal_443))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_443, "MISSHeist_JewelLester_waitidles", sLocal_2053, 3))
					{
						if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_443, "MISSHeist_JewelLester_waitidles", sLocal_2053) >= 0.99f)
						{
							iLocal_72 = 1;
						}
					}
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_443, "move_characters@lester@STD_CaneUp", "idle_outro", 3))
					{
						if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_443, "move_characters@lester@STD_CaneUp", "idle_outro") >= 0.99f)
						{
							STREAMING::REMOVE_ANIM_DICT("move_characters@lester@STD_CaneUp");
							iLocal_72 = 1;
						}
					}
				}
			}
			if (iLocal_72 == 1)
			{
				iLocal_2050 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
				switch (iLocal_2050)
				{
					case 0:
						sLocal_2053 = "LESTER_WAITIDLE_1";
						break;
					case 1:
						sLocal_2053 = "LESTER_WAITIDLE_2";
						break;
					case 2:
						sLocal_2053 = "LESTER_WAITIDLE_3";
						break;
					case 3:
						sLocal_2053 = "LESTER_WAITIDLE_4";
						break;
					case 4:
						sLocal_2053 = "LESTER_WAITIDLE_5";
						break;
				}
				TASK::TASK_PLAY_ANIM(iLocal_443, "MISSHeist_JewelLester_waitidles", sLocal_2053, 8f, -8f, -1, 1, 0f, false, false, false);
				iLocal_72 = 0;
			}
			break;
	}
	switch (iLocal_2052)
	{
		case 0:
			STREAMING::REQUEST_ANIM_DICT("move_m@generic_variations@idle@b");
			iLocal_2052++;
			break;
		case 1:
			if (STREAMING::HAS_ANIM_DICT_LOADED("move_m@generic_variations@idle@b"))
			{
				sLocal_2054 = "idle_e";
				iLocal_2052++;
			}
			break;
		case 2:
			if ((MISC::GET_GAME_TIMER() - iLocal_2051) > 2000)
			{
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_436[iVar0]))
				{
					if (!PED::IS_PED_INJURED(iLocal_436[iVar0]))
					{
						if ((((!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_436[iVar0], "move_m@generic_variations@idle@b", "idle_e", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_436[iVar0], "move_m@generic_variations@idle@b", "idle_f", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_436[iVar0], "move_m@generic_variations@idle@b", "idle_g", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_436[iVar0], "move_m@generic_variations@idle@b", "idle_h", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_436[iVar0], "move_m@generic_variations@idle@b", "idle_i", 3))
						{
							iLocal_2050 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
							switch (iLocal_2050)
							{
								case 0:
									sLocal_2054 = "idle_e";
									break;
								case 1:
									sLocal_2054 = "idle_g";
									break;
								case 2:
									sLocal_2054 = "idle_i";
									break;
							}
							TASK::TASK_CLEAR_LOOK_AT(iLocal_436[iVar0]);
							TASK::TASK_PLAY_ANIM(iLocal_436[iVar0], "move_m@generic_variations@idle@b", sLocal_2054, 4f, -4f, -1, 0, 0f, false, false, false);
							iLocal_2051 = MISC::GET_GAME_TIMER();
						}
						else
						{
							TASK::TASK_LOOK_AT_ENTITY(iLocal_436[iVar0], PLAYER::PLAYER_PED_ID(), 4000, 0, 2);
						}
					}
				}
			}
			break;
	}
}

void func_1007(char* sParam0, bool bParam1, bool bParam2)//Position - 0xA3026
{
	AUDIO::REQUEST_AMBIENT_AUDIO_BANK(sParam0, false, -1);
	if (bParam1)
	{
		while (!AUDIO::REQUEST_AMBIENT_AUDIO_BANK(sParam0, false, -1))
		{
			if (bParam2)
			{
				func_112(0);
			}
			else
			{
				SYSTEM::WAIT(0);
			}
		}
	}
}

int func_1008()//Position - 0xA305D
{
	if (!iLocal_383)
	{
		func_652(1, "STAGE_DRIVE_TO_STORE", 0, 0, 0, 1);
		Global_100441.f_12[0] = 0;
		func_133();
		if (bLocal_382)
		{
			VEHICLE::REQUEST_VEHICLE_ASSET(Local_748.f_1, 3);
		}
		VEHICLE::REQUEST_VEHICLE_RECORDING(1, "JH2BArrive");
		VEHICLE::REQUEST_VEHICLE_RECORDING(2, "JH2BArrive");
		VEHICLE::REQUEST_VEHICLE_RECORDING(1, "JHBENSONEXIT");
		VEHICLE::REQUEST_VEHICLE_RECORDING(1, "JHBugStrExit");
		func_1007(Local_748.f_244, 0, 1);
		func_1007(Local_748.f_245, 0, 1);
		if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
		{
			__LIB_37__::func_92();
		}
		Local_409 = { Local_307 };
		func_114();
		iLocal_416 = 0;
		while (iLocal_416 <= 24)
		{
			iLocal_408[iLocal_416] = 0;
			iLocal_416++;
		}
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_748.f_1, true);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_748.f_2, true);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_748.f_12, true);
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_460, false))
		{
			VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iLocal_460, false, 0);
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_463, true);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_457, false))
		{
			VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iLocal_457, false, 0);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_463, false))
		{
			VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iLocal_463, false, 0);
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_463, true);
		}
		Local_370.f_0 = __LIB_0__::func_639(iLocal_457, 0, 0);
		if (!PED::IS_PED_INJURED(func_94(0)) && !PED::IS_PED_INJURED(func_94(1)))
		{
			TASK::TASK_LOOK_AT_ENTITY(func_94(1), func_94(0), 99999999, 2048, 2);
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_463, false))
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_463, 3);
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_460, false))
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_460, 3);
		}
		func_709(Local_748.f_155, 1, 1, 1, 7, 0, 0);
		if (__LIB_16__::func_594(0, 1) == 1 && __LIB_16__::func_594(0, 0) == 8)
		{
			func_762("JH_GETIN1", 0, 0, 1);
		}
		if (__LIB_16__::func_594(0, 1) == 1 && __LIB_16__::func_594(0, 0) == 13)
		{
			func_762("JH_GETIN2", 0, 0, 1);
		}
		if (__LIB_16__::func_594(0, 1) == 1 && __LIB_16__::func_594(0, 0) == 9)
		{
			func_762("JH_GETIN3", 0, 0, 1);
		}
		if (__LIB_16__::func_594(0, 1) == 10 && __LIB_16__::func_594(0, 0) == 8)
		{
			func_762("JH_GETIN4", 0, 0, 1);
		}
		if (__LIB_16__::func_594(0, 1) == 10 && __LIB_16__::func_594(0, 0) == 13)
		{
			func_762("JH_GETIN5", 0, 0, 1);
		}
		if (__LIB_16__::func_594(0, 1) == 10 && __LIB_16__::func_594(0, 0) == 9)
		{
			func_762("JH_GETIN6", 0, 0, 1);
		}
		if (__LIB_16__::func_594(0, 1) == 4 && __LIB_16__::func_594(0, 0) == 8)
		{
			func_762("JH_GETIN7", 0, 0, 1);
		}
		if (__LIB_16__::func_594(0, 1) == 4 && __LIB_16__::func_594(0, 0) == 13)
		{
			func_762("JH_GETIN8", 0, 0, 1);
		}
		if (__LIB_16__::func_594(0, 1) == 4 && __LIB_16__::func_594(0, 0) == 9)
		{
			func_762("JH_GETIN9", 0, 0, 1);
		}
		func_762(Local_748.f_227, 1, 0, 1);
		func_762("JH_DIR", 0, 0, 1);
		iLocal_2060 = 0;
		fLocal_2056 = 1f;
		MISC::SET_BIT(&(Local_370.f_13), 9);
		MISC::SET_BIT(&(Local_370.f_13), 3);
		MISC::SET_BIT(&(Local_370.f_13), 4);
		MISC::CLEAR_BIT(&(Local_370.f_13), 14);
		SYSTEM::SETTIMERA(0);
		PATHFIND::SET_ROADS_IN_ANGLED_AREA(756.4408f, -1005.6302f, 21.892076f, 753.2204f, -919.53253f, 30.691278f, 55f, false, false, true);
		PATHFIND::SET_ROADS_IN_ANGLED_AREA(777.2901f, -991.4522f, 23.630905f, 770.1435f, -740.85876f, 31.30616f, 13.5f, false, false, true);
		MISC::CLEAR_AREA_OF_VEHICLES(Local_305, 500f, true, false, false, false, false, false, 0);
		AUDIO::TRIGGER_MUSIC_EVENT("JH2A_VEHICLE");
		func_111(800, 0, 0);
		iLocal_2058 = 0;
		iLocal_417 = 0;
		iLocal_383 = 1;
		iLocal_2063 = 0;
		SYSTEM::SETTIMERA(0);
		RECORDING::REPLAY_RECORD_BACK_FOR_TIME(0f, 6f, 4);
	}
	else
	{
		func_1006();
		if ((PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/)) || iLocal_2058 == 1)
		{
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(func_94(1), 2f);
			iLocal_2058 = 1;
		}
		else
		{
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(func_94(1), 1f);
		}
		TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(iLocal_436[2], 1f);
		TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(iLocal_436[0], 1f);
		TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(iLocal_436[1], 1f);
		PED::SET_PED_RESET_FLAG(iLocal_436[2], 60, true);
		PED::SET_PED_RESET_FLAG(iLocal_436[0], 60, true);
		PED::SET_PED_RESET_FLAG(iLocal_436[1], 60, true);
		PED::SET_PED_RESET_FLAG(func_94(1), 60, true);
		switch (iLocal_417)
		{
			case 0:
				if (ENTITY::IS_ENTITY_AT_COORD(func_94(0), Local_317, 4f, 4f, 3f, false, true, 0))
				{
					iLocal_2052 = 99;
					TASK::TASK_CLEAR_LOOK_AT(func_94(1));
					func_1005(iLocal_436[2], iLocal_460, -1, fLocal_2056, 60000, 0);
					func_1005(iLocal_436[0], iLocal_463, -1, fLocal_2056, 60000, 3000);
					func_1005(iLocal_436[1], iLocal_463, 0, fLocal_2056, 60000, 4500);
					func_1005(func_94(1), iLocal_457, 0, fLocal_2056, 60000, 0);
					PED::SET_PED_CONFIG_FLAG(iLocal_436[2], 104, true);
					PED::SET_PED_CONFIG_FLAG(iLocal_436[0], 104, true);
					PED::SET_PED_CONFIG_FLAG(iLocal_436[1], 104, true);
					PED::SET_PED_CONFIG_FLAG(func_94(1), 104, true);
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_436[0], true);
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_436[1], true);
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_436[2], true);
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(func_94(1), true);
					PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(iLocal_436[2], false);
					PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(iLocal_436[0], false);
					PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(iLocal_436[1], false);
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_460, false);
					iLocal_417++;
				}
				else if (SYSTEM::TIMERA() > 25000 && iLocal_2063 == 0)
				{
					func_762("JH_LESGO", 0, 0, 1);
					iLocal_2063 = 1;
				}
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				__LIB_37__::func_183(&Local_370, Local_409, 5f, 5f, 5f, 1, func_94(1), iLocal_457, Local_748.f_218, Local_748.f_228, Local_748.f_227, Local_748.f_226, 0, 0, 1, -1);
				break;
			case 1:
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.2f);
				if (PED::IS_PED_IN_VEHICLE(func_94(0), iLocal_457, false))
				{
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 10f, 4);
					TASK::TASK_LOOK_AT_ENTITY(func_94(1), func_94(0), 60000, 2048, 2);
					SYSTEM::SETTIMERA(0);
					fLocal_2056 = 2f;
					__LIB_0__::func_377(iLocal_457, 817);
					func_923(Local_748.f_22);
					func_568(&iLocal_443, 1);
					VEHICLE::REMOVE_VEHICLE_ASSET(Local_748.f_1);
					STREAMING::REMOVE_ANIM_DICT("move_m@generic_variations@idle@b");
					AUDIO::SET_RADIO_TO_STATION_INDEX(4);
					AUDIO::START_AUDIO_SCENE("JSH_2A_GET_TO_STORE");
					if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_436[0], 1) < 15f)
					{
						if (func_120())
						{
							func_762("JH_DRIVE_ET", 0, 0, 1);
						}
						else if (func_118())
						{
							func_762("JH_DRIVE_KD", 0, 0, 1);
						}
					}
					iLocal_417++;
				}
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				__LIB_37__::func_183(&Local_370, Local_409, 5f, 5f, 5f, 1, func_94(1), iLocal_457, Local_748.f_218, Local_748.f_228, Local_748.f_227, Local_748.f_226, 0, 0, 1, -1);
				break;
			case 2:
				PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME(758.5399f, -1003.1363f, Local_310.f_0, Local_310.f_1);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_460))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_436[2]))
					{
						if (PED::IS_PED_IN_VEHICLE(iLocal_436[2], iLocal_460, false))
						{
							if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_460, Local_310, 5f, 5f, 5f, false, true, 0) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_463, Local_305, 5f, 5f, 3f, false, true, 0))
							{
								if (!iLocal_2060 && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "JHBENSONEXIT"))
								{
									VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_460, 1, "JHBENSONEXIT", false);
									VEHICLE::SET_PLAYBACK_TO_USE_AI_TRY_TO_REVERT_BACK_LATER(iLocal_460, 2000, 786603, true);
									VEHICLE::SET_SHOULD_LERP_FROM_AI_TO_FULL_RECORDING(iLocal_460, true);
									iLocal_2060 = 1;
								}
								if (iLocal_2060)
								{
									if (!func_917(iLocal_436[2], joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE")))
									{
										if (ENTITY::IS_ENTITY_AT_COORD(iLocal_460, 758.5399f, -1003.1363f, 25.2859f, 5f, 5f, 6f, false, true, 0))
										{
											TASK::TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE(iLocal_436[2], iLocal_460, Local_310, 19f, 786603, 5f);
											SYSTEM::SETTIMERA(0);
										}
									}
								}
								if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_460, 0f, 4f, 0f), 6f, 6f, 4f, false, true, 0) || ENTITY::IS_ENTITY_AT_COORD(iLocal_463, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_460, 0f, 5f, 0f), 11f, 11f, 4f, false, true, 0))
								{
									if (fLocal_2065 > 0f)
									{
										fLocal_2065 = (fLocal_2065 - (0.5f * SYSTEM::TIMESTEP()));
									}
									else
									{
										fLocal_2065 = 0f;
									}
								}
								else if (fLocal_2065 < 1f)
								{
									fLocal_2065 = (fLocal_2065 + (0.5f * SYSTEM::TIMESTEP()));
								}
								else
								{
									fLocal_2065 = 1f;
								}
								VEHICLE::SET_PLAYBACK_SPEED(iLocal_460, fLocal_2065);
							}
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_463))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_436[0]))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_436[1]))
						{
							if (PED::IS_PED_IN_VEHICLE(iLocal_436[0], iLocal_463, false))
							{
								if (PED::IS_PED_IN_VEHICLE(iLocal_436[1], iLocal_463, false))
								{
									if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_463, Local_311, 5f, 5f, 5f, false, true, 0))
									{
										if (!func_917(iLocal_436[0], joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE")))
										{
											if (!iLocal_2061 && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "JHBugStrExit"))
											{
												VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_463, 1, "JHBugStrExit", true);
												VEHICLE::SET_PLAYBACK_TO_USE_AI_TRY_TO_REVERT_BACK_LATER(iLocal_463, 2000, 786603, true);
												VEHICLE::SET_SHOULD_LERP_FROM_AI_TO_FULL_RECORDING(iLocal_463, true);
												iLocal_2061 = 1;
											}
											if (iLocal_2061 && ENTITY::IS_ENTITY_AT_COORD(iLocal_463, 748.7f, -1003.6f, 26.7f, 9f, 9f, 6f, false, true, 0))
											{
												TASK::TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE(iLocal_436[0], iLocal_463, Local_311, 19f, 786603, 5f);
											}
											if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_463, 0f, 3f, 0f), 4f, 4f, 4f, false, true, 0) || ENTITY::IS_ENTITY_AT_COORD(iLocal_460, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_463, 0f, 3f, 0f), 5f, 5f, 4f, false, true, 0))
											{
												if (fLocal_2066 > 0f)
												{
													fLocal_2066 = (fLocal_2066 - (0.5f * SYSTEM::TIMESTEP()));
												}
												else
												{
													fLocal_2066 = 0f;
												}
											}
											else if (fLocal_2066 < 1f)
											{
												fLocal_2066 = (fLocal_2066 + (0.5f * SYSTEM::TIMESTEP()));
											}
											else
											{
												fLocal_2066 = 1f;
											}
											VEHICLE::SET_PLAYBACK_SPEED(iLocal_463, fLocal_2066);
										}
									}
								}
							}
						}
					}
				}
				if (PED::IS_PED_IN_VEHICLE(func_94(0), iLocal_457, false))
				{
					if (PED::IS_PED_IN_VEHICLE(func_94(1), iLocal_457, false))
					{
						if (!iLocal_408[0])
						{
							func_762(Local_748.f_125, 0, 3000, 1);
							func_762(Local_748.f_175, 0, 0, 1);
							if ((__LIB_0__::func_564(__LIB_16__::func_594(0, 0)) == 0 && __LIB_0__::func_564(__LIB_16__::func_594(0, 1)) == 0) && (__LIB_0__::func_564(__LIB_16__::func_594(0, 2)) == 0 || __LIB_0__::func_564(__LIB_16__::func_594(0, 2)) == 1))
							{
								func_762("JH_TALK1", 0, 0, 1);
							}
							if ((__LIB_0__::func_564(__LIB_16__::func_594(0, 0)) == 2 && __LIB_0__::func_564(__LIB_16__::func_594(0, 1)) == 0) && (__LIB_0__::func_564(__LIB_16__::func_594(0, 2)) == 0 || __LIB_0__::func_564(__LIB_16__::func_594(0, 2)) == 1))
							{
								func_762("JH_TALK2", 0, 0, 1);
							}
							if ((__LIB_0__::func_564(__LIB_16__::func_594(0, 0)) == 2 && __LIB_0__::func_564(__LIB_16__::func_594(0, 1)) == 2) && (__LIB_0__::func_564(__LIB_16__::func_594(0, 2)) == 0 || __LIB_0__::func_564(__LIB_16__::func_594(0, 2)) == 1))
							{
								func_762("JH_TALK3", 0, 0, 1);
							}
							if ((__LIB_0__::func_564(__LIB_16__::func_594(0, 0)) == 0 && __LIB_0__::func_564(__LIB_16__::func_594(0, 1)) == 2) && (__LIB_0__::func_564(__LIB_16__::func_594(0, 2)) == 0 || __LIB_0__::func_564(__LIB_16__::func_594(0, 2)) == 1))
							{
								func_762("JH_TALK4", 0, 0, 1);
							}
							if ((__LIB_0__::func_564(__LIB_16__::func_594(0, 0)) == 2 && __LIB_0__::func_564(__LIB_16__::func_594(0, 1)) == 2) && __LIB_0__::func_564(__LIB_16__::func_594(0, 2)) == 2)
							{
								func_762("JH_TALK5", 0, 0, 1);
							}
							if ((__LIB_0__::func_564(__LIB_16__::func_594(0, 0)) == 0 && __LIB_0__::func_564(__LIB_16__::func_594(0, 1)) == 2) && __LIB_0__::func_564(__LIB_16__::func_594(0, 2)) == 2)
							{
								func_762("JH_TALK6", 0, 0, 1);
							}
							if ((__LIB_0__::func_564(__LIB_16__::func_594(0, 0)) == 0 && __LIB_0__::func_564(__LIB_16__::func_594(0, 1)) == 0) && __LIB_0__::func_564(__LIB_16__::func_594(0, 2)) == 2)
							{
								func_762("JH_TALK7", 0, 0, 1);
							}
							if ((__LIB_0__::func_564(__LIB_16__::func_594(0, 0)) == 2 && __LIB_0__::func_564(__LIB_16__::func_594(0, 1)) == 0) && __LIB_0__::func_564(__LIB_16__::func_594(0, 2)) == 2)
							{
								func_762("JH_TALK8", 0, 0, 1);
							}
							func_762("JH_CREWMEM", 2, 0, 0);
							TASK::TASK_CLEAR_LOOK_AT(func_94(1));
							iLocal_408[0] = 1;
							iLocal_408[2] = 1;
						}
					}
					else if (!iLocal_408[2] && !__LIB_13__::func_755(&Local_370, 1))
					{
						if (__LIB_17__::func_243(&uLocal_539, "JHAUD", Local_748.f_169, 9, 0, 0, 0))
						{
							iLocal_408[2] = 1;
						}
					}
				}
				if (iLocal_408[0] == 1)
				{
					if (!HUD::DOES_BLIP_EXIST(Local_370.f_5))
					{
						if (!__LIB_0__::func_568())
						{
							__LIB_0__::func_620(1);
							if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
							{
								__LIB_0__::func_709(func_94(1), "POLICE_PURSUIT_DRIVEN", "FRANKLIN_NORMAL", 24);
							}
						}
					}
					else if (__LIB_0__::func_568())
					{
						__LIB_0__::func_620(0);
					}
				}
				if (ENTITY::IS_ENTITY_AT_COORD(func_94(0), Local_409, 150f, 150f, 150f, false, true, 0) && iLocal_408[3] == 0)
				{
					func_762("JH_NEARLYTHE", 0, 0, 1);
					AUDIO::TRIGGER_MUSIC_EVENT("JH2A_RADIO_FADE");
					iLocal_408[3] = 1;
				}
				if (__LIB_37__::func_183(&Local_370, -576.1586f, -277.9921f, 33.8018f, 0.1f, 0.1f, 1.5f, 1, func_94(1), iLocal_457, Local_748.f_218, Local_748.f_228, Local_748.f_227, Local_748.f_226, 0, 1, 1, -1) || (HUD::DOES_BLIP_EXIST(Local_370.f_5) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_94(0), -574.1349f, -283.2379f, 33.778194f, -579.45056f, -274.0813f, 37.2725f, 6.75f, false, true, 0)))
				{
					if (__LIB_0__::func_494(1, 1, 1))
					{
						AUDIO::STOP_AUDIO_SCENE("JSH_2B_GET_TO_STORE");
						STREAMING::NEW_LOAD_SCENE_START(-583.3762f, -282.5733f, 35.2789f, Vector(35.2789f, -282.5733f, -583.3762f) - Vector(35.2799f, -282.8672f, -583.9982f), 500f, 0);
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(6f, 10f, 4);
						FIRE::STOP_FIRE_IN_RANGE(-576.1586f, -277.9921f, 33.8018f, 20f);
						while (!__LIB_0__::func_213(iLocal_457, 6f, 5, 1056964608, 0, 1, 0))
						{
							RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 10f, 4);
							SYSTEM::WAIT(0);
						}
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
						SYSTEM::SETTIMERB(0);
						iLocal_417++;
					}
				}
				break;
			case 3:
				if (bLocal_382)
				{
					if (AUDIO::PREPARE_MUSIC_EVENT("JH2A_MISSION_START_OS"))
					{
						AUDIO::TRIGGER_MUSIC_EVENT("JH2A_MISSION_START_OS");
						iLocal_417++;
					}
				}
				break;
			case 4:
				VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(iLocal_457);
				if ((SYSTEM::TIMERB() > 1000 && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "JH2BArrive")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(2, "JH2BArrive"))
				{
					__LIB_0__::func_325();
					__LIB_16__::func_318(&Local_370, 1, 0);
					func_748(1, 0, 1, 1, 1);
					MISC::CLEAR_AREA(Local_409, 100f, true, true, false, false);
					if (__LIB_6__::func_177(ENTITY::GET_ENTITY_HEADING(iLocal_457), 29.7f, 90f))
					{
						PED::SET_PED_COORDS_KEEP_VEHICLE(func_94(1), -575.5158f, -278.976f, 34.1733f);
						ENTITY::SET_ENTITY_HEADING(PED::GET_VEHICLE_PED_IS_IN(func_94(1), false), 29.7163f);
					}
					else
					{
						PED::SET_PED_COORDS_KEEP_VEHICLE(func_94(1), -575.416f, -277.5119f, 34.183f);
						ENTITY::SET_ENTITY_HEADING(PED::GET_VEHICLE_PED_IS_IN(func_94(1), false), 208.8154f);
					}
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(PED::GET_VEHICLE_PED_IS_IN(func_94(1), false), 5f);
					CAM::SET_CAM_FAR_DOF(iLocal_744, 9f);
					CAM::SET_CAM_NEAR_DOF(iLocal_744, 3.5f);
					CAM::SET_CAM_FAR_DOF(iLocal_745, 9f);
					CAM::SET_CAM_NEAR_DOF(iLocal_745, 3.5f);
					func_718(-584.7731f, -283.17596f, 35.33306f, 1.308213f, 1.022223f, -63.658546f, 25.95283f, -584.7682f, -283.16562f, 34.936966f, 1.308213f, 1.022223f, -63.658546f, 25.95283f, 5000, 0);
					TASK::TASK_LOOK_AT_ENTITY(func_94(0), func_94(1), 5000, 2048, 2);
					TASK::TASK_LOOK_AT_ENTITY(func_94(1), func_94(0), 5000, 2048, 2);
					func_709(Local_748.f_126, 1, 0, 1, 7, 0, 0);
					func_762(Local_748.f_176, 0, 0, 1);
					SYSTEM::SETTIMERB(0);
					if (__LIB_15__::func_944() != 1)
					{
						__LIB_17__::func_760(&Local_519, 1);
						func_176(&Local_519, 1, 0, 0);
						func_724(func_94(0));
						func_724(func_94(1));
					}
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_463))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_463);
					}
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_460))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_460);
					}
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_463, 1, "JH2BArrive", true);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_463, 2000f);
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_460, 2, "JH2BArrive", true);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_460, 4000f);
					iLocal_417++;
				}
				break;
			case 5:
				CAM::SET_USE_HI_DOF();
				MISC::CLEAR_AREA_OF_VEHICLES(-584.7731f, -283.17596f, 35.33306f, 40f, false, false, false, false, false, false, 0);
				VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(iLocal_457);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_457, false))
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(func_94(1), iLocal_457))
					{
						if (VEHICLE::IS_VEHICLE_STOPPED(iLocal_457))
						{
							RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 2f, 3);
							TASK::CLEAR_PED_TASKS(func_94(1));
							TASK::TASK_LOOK_AT_ENTITY(func_94(1), func_94(0), 4000, 2048, 2);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_480);
							TASK::TASK_LEAVE_VEHICLE(0, iLocal_457, 0);
							TASK::TASK_PAUSE(0, 0);
							TASK::TASK_ACHIEVE_HEADING(0, 108.7326f, 0);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_480);
							TASK::TASK_PERFORM_SEQUENCE(func_94(1), iLocal_480);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_480);
							iLocal_417++;
						}
					}
				}
				break;
			case 6:
				VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(iLocal_457);
				CAM::SET_USE_HI_DOF();
				if (!PED::IS_PED_INJURED(func_94(1)))
				{
					if (PED::IS_PED_ON_FOOT(func_94(1)))
					{
						SYSTEM::SETTIMERA(0);
						iLocal_417 = 7;
					}
				}
				if (__LIB_0__::func_645(1000))
				{
					CAM::DO_SCREEN_FADE_OUT(500);
					while (CAM::IS_SCREEN_FADING_OUT())
					{
						SYSTEM::WAIT(0);
					}
					iLocal_417 = 7;
				}
				break;
			case 7:
			case 8:
				VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(iLocal_457);
				CAM::SET_USE_HI_DOF();
				if (iLocal_417 == 7)
				{
					if (SYSTEM::TIMERA() > 500)
					{
						if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
						{
							GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, false);
							AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
						}
						iLocal_417 = 8;
					}
				}
				if (SYSTEM::TIMERA() > 1000)
				{
					iLocal_417 = 9;
				}
				if (__LIB_0__::func_500())
				{
					CAM::DO_SCREEN_FADE_OUT(500);
					while (CAM::IS_SCREEN_FADING_OUT())
					{
						SYSTEM::WAIT(0);
					}
					iLocal_417 = 9;
				}
				break;
			case 9:
				VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(iLocal_457);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_457, false))
				{
					TASK::TASK_VEHICLE_DRIVE_TO_COORD(func_94(0), iLocal_457, Local_309, 24f, 0, Local_748.f_1, 786469, 5f, 1f);
				}
				if (!PED::IS_PED_INJURED(func_94(1)))
				{
					if (__LIB_6__::func_177(ENTITY::GET_ENTITY_HEADING(iLocal_457), 29.7f, 90f))
					{
						ENTITY::SET_ENTITY_COORDS(func_94(1), -573.5828f, -278.3935f, 34.1906f, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(func_94(1), 105f);
					}
					else
					{
						ENTITY::SET_ENTITY_COORDS(func_94(1), -576.837f, -279.6357f, 34.2772f, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(func_94(1), 108.7326f);
					}
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				}
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_94(1), false, false);
				func_704(0, 0, 3000, 1, 1);
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) != 4)
				{
					__LIB_37__::func_174(1);
				}
				if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
				{
					while (CAM::IS_SCREEN_FADING_OUT())
					{
						SYSTEM::WAIT(0);
					}
					CAM::DO_SCREEN_FADE_IN(500);
				}
				iLocal_417++;
				break;
		}
		if (iLocal_417 >= 10)
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_487))
			{
				HUD::REMOVE_BLIP(&iLocal_487);
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_488))
			{
				HUD::REMOVE_BLIP(&iLocal_488);
			}
			if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
			{
				STREAMING::NEW_LOAD_SCENE_STOP();
			}
			VEHICLE::REMOVE_VEHICLE_RECORDING(1, "JH2BArrive");
			VEHICLE::REMOVE_VEHICLE_RECORDING(2, "JH2BArrive");
			VEHICLE::REMOVE_VEHICLE_RECORDING(1, "JHBENSONEXIT");
			iLocal_416 = 0;
			while (iLocal_416 <= 2)
			{
				if (HUD::DOES_BLIP_EXIST(iLocal_486[iLocal_416]))
				{
					HUD::REMOVE_BLIP(&(iLocal_486[iLocal_416]));
				}
				iLocal_416++;
			}
			func_114();
			__LIB_16__::func_318(&Local_370, 1, 0);
			iLocal_383 = 0;
			return 1;
		}
	}
	return 0;
}

int func_1011()//Position - 0xA4541
{
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 703.62976f, -965.6701f, 29.40725f, 719.13293f, -964.4007f, 31.645329f, 12.25f, false, true, 0))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
	}
	if (!iLocal_383)
	{
		iLocal_2055 = 0;
		HUD::DISPLAY_RADAR(false);
		PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), false, -1, 0);
		__LIB_37__::func_177(0, 1);
		func_133();
		STREAMING::REQUEST_ANIM_DICT("MISSHEIST_JEWEL");
		func_129(1, 0);
		if (ENTITY::DOES_ENTITY_EXIST(Local_519[1]))
		{
			if (!PED::IS_PED_A_PLAYER(Local_519[1]))
			{
				PED::DELETE_PED(&(Local_519[1]));
			}
		}
		func_1062(0, 1);
		__LIB_32__::func_5(&Local_519, 1, 1);
		if (__LIB_15__::func_944() == 1)
		{
			while (!func_325(&(Local_519[0]), 0, 0f, 3f, 0f, 0, 1, 0, 0))
			{
				HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
				SYSTEM::WAIT(0);
			}
		}
		else
		{
			while (!func_325(&(Local_519[1]), 1, 0f, 3f, 0f, 0, 1, 0, 0))
			{
				HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
				SYSTEM::WAIT(0);
			}
		}
		if (bLocal_382)
		{
			if (__LIB_15__::func_944() == 1)
			{
				CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST(Local_748.f_119, 71, 8);
			}
			else
			{
				CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST(Local_748.f_119, 120, 8);
			}
			while (!(CUTSCENE::HAS_CUTSCENE_LOADED() && __LIB_37__::func_176(0)))
			{
				HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
				func_112(0);
				__LIB_17__::func_43("Michael", joaat("Player_Zero"), 15);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lester", 0, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lester", 2, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lester", 3, 1, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lester", 4, 1, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lester", 5, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lester", 7, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lester", 8, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Lester", 1, 0, 0, 0);
				__LIB_17__::func_43("Franklin", joaat("Player_One"), 8);
				__LIB_32__::func_98("Driver_selection", __LIB_16__::func_594(0, 0), 1, 1);
				__LIB_32__::func_98("gunman_selection_1", __LIB_16__::func_594(0, 1), 1, 1);
				__LIB_32__::func_98("hacker_selection", __LIB_16__::func_594(0, 2), 0, 1);
			}
		}
		else
		{
			if (__LIB_15__::func_944() == 1)
			{
				CUTSCENE::REQUEST_CUTSCENE(Local_748.f_120, 8);
			}
			else
			{
				CUTSCENE::REQUEST_CUTSCENE(Local_748.f_120, 8);
			}
			while (!(CUTSCENE::HAS_CUTSCENE_LOADED() && __LIB_37__::func_176(0)))
			{
				HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
				func_112(0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lester", 0, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lester", 2, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lester", 3, 1, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lester", 4, 1, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lester", 5, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lester", 7, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lester", 8, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Lester", 1, 0, 0, 0);
				__LIB_17__::func_43("Michael", joaat("Player_Zero"), 31);
				__LIB_17__::func_43("Franklin", joaat("Player_One"), 18);
				__LIB_32__::func_98("Driver_selection", __LIB_16__::func_594(0, 0), 10, 1);
				__LIB_32__::func_98("gunman_selection_1", __LIB_16__::func_594(0, 1), 10, 1);
				__LIB_32__::func_98("hacker_selection", __LIB_16__::func_594(0, 2), 0, 1);
			}
		}
		while (!func_1018())
		{
			SYSTEM::WAIT(0);
		}
		func_1017(Local_748.f_12, 1);
		func_1017(Local_748.f_2, 1);
		MISC::CLEAR_AREA_OF_VEHICLES(Local_296, 50f, false, false, false, false, false, false, 0);
		iLocal_460 = VEHICLE::CREATE_VEHICLE(Local_748.f_12, Local_304, 269.3407f, true, true, false);
		func_890(iLocal_460);
		VEHICLE::SET_VEHICLE_COLOURS(iLocal_460, 128, 3);
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_460, 6, false);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_460, true);
		if (bLocal_382)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_457))
			{
				STREAMING::REQUEST_MODEL(joaat("primo"));
				while (!STREAMING::HAS_MODEL_LOADED(joaat("primo")))
				{
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
					func_112(0);
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 703.62976f, -965.6701f, 29.40725f, 719.13293f, -964.4007f, 31.645329f, 12.25f, false, true, 0))
					{
						PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
					}
				}
				iLocal_457 = VEHICLE::CREATE_VEHICLE(joaat("primo"), Local_303, 275.6314f, true, true, false);
				VEHICLE::SET_VEHICLE_COLOURS(iLocal_457, 0, 0);
			}
			else if (!ENTITY::IS_ENTITY_DEAD(iLocal_457, false))
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_457, Local_303, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(iLocal_457, 275.6314f);
			}
			iLocal_463 = VEHICLE::CREATE_VEHICLE(Local_748.f_2, Local_305, 275.8923f, true, true, false);
		}
		else
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_457, false))
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_457, 711.2791f, -979.8723f, 23.1111f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(iLocal_457, 223.3972f);
			}
			iLocal_463 = VEHICLE::CREATE_VEHICLE(Local_748.f_2, Local_303, 275.6314f, true, true, false);
		}
		func_1000();
		if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
		{
			STREAMING::NEW_LOAD_SCENE_START_SPHERE(716.5068f, -966.4983f, 29.1884f, 10f, 0);
			SYSTEM::SETTIMERA(0);
			while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED() && SYSTEM::TIMERA() < 10000)
			{
				SYSTEM::WAIT(0);
			}
			if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
			{
				STREAMING::NEW_LOAD_SCENE_STOP();
			}
		}
		__LIB_0__::func_424(1);
		__LIB_17__::func_764(64, 6);
		__LIB_17__::func_764(64, 0);
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-874851305, 0.8f, true, true);
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-874851305, -1f, false, false);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-874851305, 3, false, true);
		MISC::CLEAR_AREA_OF_VEHICLES(Local_303, 120f, false, false, false, false, false, false, 0);
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(719.4675f, -989.3281f, 22.3075f, 691.5195f, -972.6179f, 26.9428f, false, true);
		SYSTEM::SETTIMERA(0);
		iLocal_417 = 0;
		iLocal_384 = 0;
		iLocal_383 = 1;
	}
	else
	{
		switch (iLocal_417)
		{
			case 0:
				OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("v_ilev_ss_door8"), 716.8f, -975.4f, 25f, false, 0f, false);
				OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("v_ilev_ss_door7"), 719.4f, -975.4f, 25f, false, 0f, false);
				func_940(1, 0, 0);
				if (!ENTITY::IS_ENTITY_DEAD(Local_519[1], false))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_519[1], "Franklin", 0, joaat("Player_One"), 4);
				}
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_436[1], "gunman_selection_1", 2, Local_748.f_24, 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_436[0], "Driver_selection", 2, Local_748.f_25, 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_436[2], "Hacker_selection", 2, Local_748.f_26, 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_443, "Lester", 2, Local_748.f_22, 0);
				if (bLocal_382)
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "seamstress_near_michael", 3, joaat("S_F_Y_SweatShop_01"), 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "seamstress_near_door", 3, joaat("S_F_Y_SweatShop_01"), 0);
				}
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_455, "WalkingStick_lester", 2, Local_748.f_23, 0);
				__LIB_0__::func_532(1, 1, 1, 0, 0, 0, 0);
				CUTSCENE::START_CUTSCENE(0);
				RECORDING::REPLAY_START_EVENT(4);
				__LIB_38__::func_133(0);
				iLocal_417++;
				break;
			case 1:
			case 2:
				HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
				if (CUTSCENE::IS_CUTSCENE_PLAYING() && iLocal_417 == 1)
				{
					func_111(800, 0, 0);
					SCRIPT::SHUTDOWN_LOADING_SCREEN();
					if (iLocal_457 != PLAYER::GET_PLAYERS_LAST_VEHICLE())
					{
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
						{
							if ((ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYERS_LAST_VEHICLE()) != joaat("burrito2") && ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYERS_LAST_VEHICLE()) != joaat("boxville3")) && ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYERS_LAST_VEHICLE()) != joaat("fbi2"))
							{
								__LIB_37__::func_175(706.8325f, -980.0989f, 23.1208f, 221.3399f);
							}
						}
					}
					MISC::CLEAR_AREA(Local_303, 100f, true, false, false, false);
					MISC::CLEAR_AREA(Local_518, 5000f, true, true, false, false);
					CLOCK::SET_CLOCK_TIME(7, 0, 0);
					__LIB_15__::func_228(&Local_2042, 0, 0, 2000, 1, 1, 0, 1);
					MISC::SET_WEATHER_TYPE_NOW_PERSIST("EXTRASUNNY");
					iLocal_417 = 2;
				}
				if ((((ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Lester", 0)) && ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Hacker_selection", 0))) && ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Driver_selection", 0))) && ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("gunman_selection_1", 0))) && ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("WalkingStick_lester", 0)))
				{
					iLocal_443 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Lester", 0));
					iLocal_436[2] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Hacker_selection", 0));
					iLocal_436[0] = __LIB_17__::func_787(0, 0, 100f, 100f, 100f, 0f, 0, 1);
					iLocal_436[1] = __LIB_17__::func_787(0, 1, 100f, 100f, 100f, 0f, 0, 1);
					PED::DELETE_PED(&(iLocal_436[0]));
					PED::DELETE_PED(&(iLocal_436[1]));
					iLocal_436[0] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Driver_selection", 0));
					iLocal_436[1] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("gunman_selection_1", 0));
					iLocal_455 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("WalkingStick_lester", 0));
					func_519(Local_519[1], 14, 158, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					func_722(iLocal_436[0], 0);
					func_722(iLocal_436[1], 0);
					if (!bLocal_382)
					{
						if (__LIB_15__::func_944() != 1)
						{
							__LIB_17__::func_760(&Local_519, 1);
							func_176(&Local_519, 1, 1, 0);
						}
					}
					iLocal_417 = 3;
				}
				break;
			case 3:
				if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
				{
					__LIB_37__::func_92();
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
				{
					__LIB_37__::func_92();
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Lester", 0))
				{
					func_1006();
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_443, false))
					{
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_443, false, false);
						ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_455, iLocal_443, PED::GET_PED_BONE_INDEX(iLocal_443, 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
					}
				}
				if (!bLocal_382)
				{
					if (iLocal_2055 == 0)
					{
						if (IntToFloat(CUTSCENE::GET_CUTSCENE_TIME()) > 70432.32f)
						{
							if (bLocal_2041)
							{
								__LIB_37__::func_174(1);
								iLocal_2055 = 1;
							}
						}
					}
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
					{
						if (!ENTITY::IS_ENTITY_DEAD(func_94(0), false))
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(func_94(0), 713.2115f, -962.9461f, 29.4335f, 1f, 20000, 0.25f, 0, 190.7f);
							PED::FORCE_PED_MOTION_STATE(func_94(0), joaat("MotionState_Walk"), true, 1, false);
						}
					}
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
						iLocal_417 = 4;
					}
				}
				else
				{
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0))
					{
						if (!PED::IS_PED_INJURED(func_94(1)))
						{
							ENTITY::SET_ENTITY_COORDS(func_94(1), 705.3368f, -965.3012f, 29.3953f, true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(func_94(1), 275.2882f);
						}
					}
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
					{
						if (__LIB_15__::func_944() != 0)
						{
							if (!bLocal_2041)
							{
								__LIB_37__::func_174(0);
							}
							__LIB_17__::func_760(&Local_519, 0);
							func_176(&Local_519, 1, 0, 0);
							ENTITY::SET_ENTITY_COLLISION(PLAYER::PLAYER_PED_ID(), true, false);
						}
						if (!PED::IS_PED_INJURED(func_94(1)))
						{
							TASK::CLEAR_PED_TASKS(func_94(1));
						}
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 260.4394f);
						if (!PED::IS_PED_INJURED(iLocal_436[0]))
						{
							ENTITY::SET_ENTITY_COORDS(iLocal_436[0], 706.6033f, -966.9639f, 29.4179f, true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(iLocal_436[0], 7.126f);
						}
						if (bLocal_382)
						{
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
							PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 1500, 0f, true, false);
							PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Walk"), false, 1, false);
						}
						iLocal_417 = 4;
					}
				}
				break;
		}
		if (iLocal_417 >= 4)
		{
			if (bLocal_382)
			{
				if (!PED::IS_PED_INJURED(iLocal_436[2]))
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_436[2], 705.5753f, -966.6228f, 29.3953f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(iLocal_436[2], 309.9281f);
				}
			}
			RECORDING::REPLAY_STOP_EVENT();
			__LIB_0__::func_532(0, 1, 1, 0, 0, 0, 0);
			__LIB_37__::func_177(0, 0);
			func_114();
			func_9(iLocal_436[0], 0, 0);
			func_9(iLocal_436[1], 0, 0);
			if (!PED::IS_PED_INJURED(func_94(1)))
			{
				func_9(func_94(1), 0, 0);
			}
			func_9(func_94(0), 0, 0);
			func_721(0);
			func_854(0, 1, 1);
			func_114();
			if (!PED::IS_PED_INJURED(func_94(0)))
			{
				func_724(func_94(0));
			}
			if (!PED::IS_PED_INJURED(func_94(1)))
			{
				func_724(func_94(1));
				TASK::TASK_LOOK_AT_ENTITY(func_94(1), func_94(0), -1, 0, 2);
			}
			if (!PED::IS_PED_INJURED(iLocal_443))
			{
				func_724(iLocal_443);
			}
			if (!PED::IS_PED_INJURED(iLocal_436[0]))
			{
				func_724(iLocal_436[0]);
				TASK::TASK_LOOK_AT_ENTITY(iLocal_436[0], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
			}
			if (!PED::IS_PED_INJURED(iLocal_436[1]))
			{
				func_724(iLocal_436[1]);
				TASK::TASK_LOOK_AT_ENTITY(iLocal_436[1], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
			}
			if (!PED::IS_PED_INJURED(iLocal_436[2]))
			{
				func_724(iLocal_436[2]);
				TASK::TASK_LOOK_AT_ENTITY(iLocal_436[2], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
			}
			if (!PED::IS_PED_INJURED(iLocal_436[2]))
			{
				func_724(iLocal_436[2]);
				func_125(joaat("WEAPON_PISTOL"), 1, 1, 0);
				if (!PED::IS_PED_INJURED(iLocal_436[2]))
				{
					WEAPON::GIVE_WEAPON_TO_PED(iLocal_436[2], joaat("WEAPON_PISTOL"), 1000, false, true);
				}
				WEAPON::REMOVE_WEAPON_ASSET(joaat("WEAPON_PISTOL"));
				PED::SET_PED_ACCURACY(iLocal_436[2], 50);
				TASK::TASK_LOOK_AT_ENTITY(iLocal_436[2], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_463, false))
			{
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_463, true);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_457))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_457, false))
				{
					VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_463, true);
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_443, false))
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_443, 185, true);
			}
			Global_75595 = 0;
			HUD::DISPLAY_RADAR(true);
			iLocal_383 = 0;
			iLocal_384 = 0;
			return 1;
		}
	}
	return 0;
}

void func_1017(int iParam0, bool bParam1)//Position - 0xA54B6
{
	int iVar0;
	iVar0 = func_911(iParam0);
	if (iVar0 != -1)
	{
		func_132(Local_739[iVar0 /*3*/], 1, 1, bParam1);
		Local_739[iVar0 /*3*/].f_1 = 1;
		Local_739[iVar0 /*3*/].f_2 = 1;
	}
}

int func_1018()//Position - 0xA54EF
{
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 703.62976f, -965.6701f, 29.40725f, 719.13293f, -964.4007f, 31.645329f, 12.25f, false, true, 0))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
		}
	}
	if (__LIB_32__::func_107(90, &Local_2042, 1, 0, 0, 0, 0))
	{
		iLocal_417 = 0;
		func_854(0, 1, 1);
		return 1;
	}
	else if ((iLocal_417 == 0 && CAM::DOES_CAM_EXIST(Local_2042.f_4)) && CAM::IS_CAM_ACTIVE(Local_2042.f_4))
	{
		if (CAM::IS_CAM_RENDERING(Local_2042.f_4))
		{
			if (Local_2042.f_3 >= 1)
			{
				SCRIPT::SHUTDOWN_LOADING_SCREEN();
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 702.9835f, -984.5344f, 23.0969f, true, false, false, true);
					STREAMING::LOAD_SCENE(718.7215f, -977.4476f, 36.5705f);
					CAM::DO_SCREEN_FADE_IN(500);
				}
				iLocal_417++;
			}
		}
	}
	return 0;
}

int func_1062(int iParam0, bool bParam1)//Position - 0xA8E39
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	Global_23011.f_13 = 0;
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	bVar0 = __LIB_0__::func_484(iParam0);
	iVar1 = __LIB_0__::func_518(bVar0);
	if (iVar1 == 0)
	{
		return 1;
	}
	if (PED::IS_PED_MODEL(PLAYER::PLAYER_PED_ID(), iVar1))
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iVar1);
	if (!STREAMING::HAS_MODEL_LOADED(iVar1))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1, false))
		{
			iVar3 = -1;
		}
		else if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, 0, false))
		{
			iVar3 = 0;
		}
		else if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, 1, false))
		{
			iVar3 = 1;
		}
		else if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, 2, false))
		{
			iVar3 = 2;
		}
		else
		{
			iVar3 = -1;
		}
	}
	else
	{
		iVar2 = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar2) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
		func_1065(&(Global_22965[iParam0]), bVar0, iVar2, iVar3, bParam1, 0, 0);
	}
	else
	{
		Var4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		MISC::GET_GROUND_Z_FOR_3D_COORD(Var4, &(Var4.f_2), false, false);
		func_325(&(Global_22965[iParam0]), bVar0, Var4, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), bParam1, 0, 0);
	}
	Global_22965.f_7 = iParam0;
	Global_22965.f_39 = 1;
	func_176(&Global_22965, 0, 0, 0);
	__LIB_0__::func_649(iParam0);
	return 1;
}

int func_1065(int* iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0xA8FF7
{
	int iVar0;
	if (__LIB_0__::func_374(bParam1))
	{
		iVar0 = __LIB_0__::func_518(bParam1);
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
			{
				PED::DELETE_PED(iParam0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iParam2) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam2, false))
			{
				*iParam0 = PED::CREATE_PED_INSIDE_VEHICLE(iParam2, 26, iVar0, iParam3, true, true);
				__LIB_17__::func_238(*iParam0, bParam1, bParam5);
				PED::SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(*iParam0, false, 0);
				func_557(*iParam0);
				__LIB_37__::func_182(*iParam0, 1, 0);
				__LIB_37__::func_180(*iParam0);
				__LIB_37__::func_179(*iParam0);
				func_327(*iParam0, bParam6);
				__LIB_0__::func_405(*iParam0);
				if (bParam4)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_1067()//Position - 0xA90E2
{
	func_1073();
	bLocal_732 = false;
	if (Local_733[0 /*7*/].f_2 && bLocal_390 == 0)
	{
		switch (Local_733[0 /*7*/].f_3)
		{
			case 0:
				if (!bLocal_721 && (!bLocal_722 || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON()))
				{
					if (!bLocal_723 || Local_733[0 /*7*/].f_4)
					{
						if (func_1072(0))
						{
							func_713(Local_733[0 /*7*/], 0, 0, Local_733[0 /*7*/].f_4, 7, 0, 0);
							if (bLocal_721 && iLocal_725 == Local_733[0 /*7*/].f_1)
							{
								func_1071();
							}
						}
					}
				}
				break;
			case 1:
				if (!bLocal_722 && (!bLocal_721 || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON()))
				{
					if (!bLocal_723 || Local_733[0 /*7*/].f_4)
					{
						if (func_1072(0))
						{
							func_904(Local_733[0 /*7*/], 0, 0, Local_733[0 /*7*/].f_4, 7500);
							func_1071();
						}
					}
				}
				break;
			case 2:
				if (!bLocal_723)
				{
					if ((!bLocal_721 && !bLocal_722) || Local_733[0 /*7*/].f_4)
					{
						if (func_1072(0))
						{
							func_1069(Local_733[0 /*7*/], 0, 0, Local_733[0 /*7*/].f_4, 0);
							func_1071();
						}
					}
				}
				break;
			}
	}
	if (!bLocal_732)
	{
		func_1068();
	}
}

void func_1068()//Position - 0xA923D
{
	iLocal_730 = 0;
	iLocal_729 = 0;
	iLocal_731 = 0;
}

void func_1069(char* sParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0xA9251
{
	bool bVar0;
	bool bVar1;
	if (iLocal_727 != MISC::GET_HASH_KEY(sParam0))
	{
		bVar0 = false;
	}
	else
	{
		bVar0 = true;
	}
	bVar1 = true;
	if (bParam3)
	{
		bVar1 = false;
	}
	if (bParam1)
	{
		func_716(1, 1, 1);
		func_715();
	}
	else if (bParam2)
	{
		if (!bVar0)
		{
			func_716(bVar1, bVar1, bParam2);
		}
	}
	if ((bParam1 || (bParam2 && !bVar0)) || !bLocal_723)
	{
		if (bParam4)
		{
			__LIB_0__::func_190(sParam0);
		}
		else
		{
			__LIB_0__::func_151(sParam0, -1);
		}
		func_1070(sParam0);
		bLocal_723 = true;
	}
}

void func_1070(char* sParam0)//Position - 0xA92DF
{
	iLocal_727 = MISC::GET_HASH_KEY(sParam0);
}

void func_1071()//Position - 0xA92F0
{
	func_712(0);
	iLocal_728 = 0;
	while (iLocal_728 <= 6)
	{
		func_711(iLocal_728, iLocal_728 + 1);
		iLocal_728++;
	}
	func_712(7);
}

int func_1072(int iParam0)//Position - 0xA9324
{
	bLocal_732 = true;
	if (!iLocal_731)
	{
		iLocal_730 = MISC::GET_GAME_TIMER();
		iLocal_729 = 0;
		iLocal_731 = 1;
		if (Local_733[iParam0 /*7*/].f_5 == 0)
		{
			return 1;
		}
	}
	else
	{
		iLocal_729 = (iLocal_729 + (MISC::GET_GAME_TIMER() - iLocal_730));
		iLocal_730 = MISC::GET_GAME_TIMER();
		if (iLocal_729 > Local_733[iParam0 /*7*/].f_5)
		{
			return 1;
		}
	}
	return 0;
}

void func_1073()//Position - 0xA9384
{
	bLocal_721 = AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING();
	bLocal_722 = __LIB_13__::func_755(&Local_370, 1);
	bLocal_723 = HUD::IS_HELP_MESSAGE_BEING_DISPLAYED();
}

void func_1074()//Position - 0xA93A5
{
	switch (iLocal_285)
	{
		case 0:
			__LIB_0__::func_381(Local_748.f_201);
			break;
		case 1:
			__LIB_0__::func_381("JH_FAILCLOSE");
			break;
		case 2:
			__LIB_0__::func_381(Local_748.f_202);
			break;
		case 3:
			__LIB_0__::func_381(Local_748.f_203);
			break;
		case 4:
			__LIB_0__::func_381(Local_748.f_204);
			break;
		case 5:
			__LIB_0__::func_381(Local_748.f_205);
			break;
		case 6:
			__LIB_0__::func_381("JH2_HCKDEAD");
			break;
		case 7:
			__LIB_0__::func_381("JH2_HCKGUN");
			break;
		case 8:
			__LIB_0__::func_381("JH2_HCKDRV");
			break;
		case 9:
			__LIB_0__::func_381(Local_748.f_206);
			break;
		case 10:
			__LIB_0__::func_381(Local_748.f_215);
			break;
		case 11:
			__LIB_0__::func_381(Local_748.f_216);
			break;
		case 12:
			__LIB_0__::func_381(Local_748.f_217);
			break;
		case 13:
			__LIB_0__::func_381(Local_748.f_207);
			break;
		case 14:
			__LIB_0__::func_381(Local_748.f_208);
			break;
		case 15:
			__LIB_0__::func_381(Local_748.f_209);
			break;
		case 16:
			__LIB_0__::func_381(Local_748.f_210);
			break;
		case 17:
			__LIB_0__::func_381(Local_748.f_212);
			break;
		case 18:
			__LIB_0__::func_381(Local_748.f_213);
			break;
		case 19:
			__LIB_0__::func_381(Local_748.f_214);
			break;
		case 20:
			__LIB_0__::func_381("F_SECESCAPE");
			break;
		case 21:
			__LIB_0__::func_381("F_INSUFTAKE");
			break;
		case 26:
			__LIB_0__::func_381("F_ARRESTED");
			break;
		case 22:
			__LIB_0__::func_381("F_BLEW");
			break;
		case 23:
			__LIB_0__::func_381("F_BLEWID");
			break;
		case 24:
			__LIB_0__::func_381("JWL_GASFAIL");
			break;
		case 25:
			__LIB_0__::func_381("F_GAS");
			break;
	}
	func_1076(0);
	if (bLocal_382)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("JH2A_MISSION_FAIL");
	}
	else
	{
		AUDIO::TRIGGER_MUSIC_EVENT("JH2B_MISSION_FAIL");
	}
	while (!__LIB_0__::func_223())
	{
		SYSTEM::WAIT(0);
	}
	func_557(PLAYER::PLAYER_PED_ID());
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
	VEHICLE::DELETE_VEHICLE(&iLocal_457);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_463))
	{
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_463))
		{
			VEHICLE::DELETE_VEHICLE(&iLocal_463);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_436[0]))
	{
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_436[0]))
		{
			PED::DELETE_PED(&(iLocal_436[0]));
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_436[2]))
	{
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_436[2]))
		{
			PED::DELETE_PED(&(iLocal_436[2]));
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_436[1]))
	{
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_436[1]))
		{
			PED::DELETE_PED(&(iLocal_436[1]));
		}
	}
	__LIB_13__::func_803(0, iLocal_88);
	__LIB_13__::func_803(1, iLocal_89);
	__LIB_0__::func_544(88, 0, 1, 1, 0);
	__LIB_0__::func_544(89, 0, 1, 1, 0);
	func_1131();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_1076(int iParam0)//Position - 0xA96BE
{
	int iVar0;
	if (Global_113386.f_9085 || __LIB_0__::func_2(0))
	{
		iVar0 = __LIB_0__::func_380();
		if (!func_1077(iVar0))
		{
			return;
		}
		MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 5);
		Global_100477 = iParam0;
	}
}

int func_1077(int iParam0)//Position - 0xA9703
{
	int iVar0;
	int iVar1;
	__LIB_16__::func_40();
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::START_FIRING_AMNESTY(5000);
	}
	iVar0 = Global_91193[iParam0 /*5*/];
	iVar1 = Global_78588.f_109[iVar0 /*4*/];
	__LIB_0__::func_379(iVar1, 1);
	PLAYER::SPECIAL_ABILITY_CHARGE_ON_MISSION_FAILED(PLAYER::PLAYER_ID(), 0);
	PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
	func_1078(&(Global_113386.f_2363.f_539), iVar1);
	if (Global_94616 == Global_100478)
	{
		Global_113386.f_9085.f_330[iVar1 /*6*/].f_1++;
	}
	if (!BitTest(Global_91229[iVar1 /*34*/].f_15, 1))
	{
		if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			MISC::SET_FADE_IN_AFTER_DEATH_ARREST(false);
		}
	}
	Global_113386.f_9085.f_330[iVar1 /*6*/].f_2++;
	Global_94616 = Global_100478;
	if (iParam0 == -1)
	{
		if (Global_113386.f_9085)
		{
		}
		return 0;
	}
	if (BitTest(Global_91193[iParam0 /*5*/].f_1, 4))
	{
		return 0;
	}
	if (BitTest(Global_91193[iParam0 /*5*/].f_1, 5))
	{
		return 0;
	}
	return 1;
}

void func_1078(var uParam0, int iParam1)//Position - 0xA9813
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar3;
	if (iParam1 == 94)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = Global_113386.f_18533[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !BitTest(Global_113386.f_9085.f_99.f_219[0], 9))
		{
		}
		else
		{
			Var2 = { 0f, 0f, 0f };
			fVar3 = 0f;
			if (!func_1080(Global_113386.f_18533[iVar0], &Var2, &fVar3))
			{
				Global_113386.f_18533[iVar0] = 318;
				__LIB_0__::func_17(&(uParam0->f_2296[iVar0]));
				uParam0->f_2300[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2310[iVar0] = 0f;
				uParam0->f_2314[iVar0] = 0;
				uParam0->f_2318[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2328[iVar0] = 0;
				Global_97831[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_9 = 0f;
				Global_97831[iVar0 /*29*/].f_12 = 0f;
				Global_97831[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_10 = 0f;
				Global_97831[iVar0 /*29*/].f_13 = 0f;
				Global_97831[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_11 = 0f;
				Global_97831[iVar0 /*29*/].f_14 = 0f;
				Global_97831[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_26 = 0f;
				Global_97831[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_27 = 0f;
				Global_97831[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

int func_1080(int iParam0, var uParam1, float fParam2)//Position - 0xA99E7
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = { 115.1569f, -1286.684f, 28.2613f };
			*fParam2 = 111f;
			return 1;
			break;
		case 8:
			*uParam1 = { -90.0089f, -1324.1947f, 28.3203f };
			*fParam2 = 194.1887f;
			return 1;
			break;
		case 9:
			return func_1080(8, uParam1, fParam2);
			break;
		case 10:
			return func_1080(8, uParam1, fParam2);
			break;
		case 13:
			*uParam1 = { -807.2979f, -48.4004f, 36.8173f };
			*fParam2 = 201.6328f;
			return 1;
			break;
		case 14:
			*uParam1 = { 1432.3402f, -1887.3832f, 70.5768f };
			*fParam2 = 350.0509f;
			return 1;
			break;
		case 15:
			*uParam1 = { 1666.204f, 1967.2504f, 143.3213f };
			*fParam2 = 0.7896f;
			return 1;
			break;
		case 12:
			*uParam1 = { -1440.22f, -127.02f, 50f };
			*fParam2 = 42f;
			return 1;
			break;
		case 16:
			*uParam1 = { 135.055f, -1759.6396f, 27.8957f };
			*fParam2 = -129f;
			return 1;
			break;
		case 17:
			*uParam1 = { 687.6992f, -1744.0299f, 28.3624f };
			*fParam2 = 267.1409f;
			return 1;
			break;
		case 18:
			*uParam1 = { 56.5117f, -744.6122f, 43.1356f };
			*fParam2 = 340.0526f;
			return 1;
			break;
		case 19:
			*uParam1 = { 506.485f, -1884.967f, 24.764f };
			*fParam2 = 22.9566f;
			return 1;
			break;
		case 20:
			*uParam1 = { 1555.9575f, 953.6136f, 77.2063f };
			*fParam2 = 152.8118f;
			return 1;
			break;
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 22:
			*uParam1 = { 220.72f, -64.4177f, 68.2922f };
			*fParam2 = (250.4535f - 360f);
			return 1;
			break;
		case 74:
			*uParam1 = { 2048.07f, 3840.84f, 34.2238f };
			*fParam2 = 119.603f;
			return 1;
			break;
		case 23:
			*uParam1 = { -464.22f, -1592.98f, 38.73f };
			*fParam2 = 168f;
			return 1;
			break;
		case 24:
			*uParam1 = { (744.79f + 0.0186f), (-465.86f - 0.0114f), 36.6399f };
			*fParam2 = 51.7279f;
			return 1;
			break;
		case 67:
			*uParam1 = { -9f, 508.1f, 173.6278f };
			*fParam2 = 151.2504f;
			return 1;
			break;
		case 25:
			*uParam1 = { 72.2278f, -1464.6798f, 28.2915f };
			*fParam2 = 156.8827f;
			return 1;
			break;
		case 27:
			*uParam1 = { 763f, -906f, 24.2312f };
			*fParam2 = 7.2736f;
			return 1;
			break;
		case 26:
			*uParam1 = { 257.9167f, -1120.7855f, 28.3684f };
			*fParam2 = 97.2736f;
			return 1;
			break;
		case 28:
			*uParam1 = { 422.5858f, -978.6332f, 69.7073f };
			*fParam2 = 4f;
			return 1;
			break;
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 58:
			*uParam1 = { 294.8521f, 882.9366f, 197.8527f };
			*fParam2 = 162.693f;
			return 1;
			break;
		case 59:
			*uParam1 = { -1771.8015f, 794.4316f, 138.4211f };
			*fParam2 = 128.9946f;
			return 1;
			break;
		case 60:
			*uParam1 = { 1495.5953f, -1848.8207f, 70.2075f };
			*fParam2 = 32.2721f;
			return 1;
			break;
		case 38:
			*uParam1 = { 2897.5544f, 4032.241f, 50.1419f };
			*fParam2 = 192.8091f;
			return 1;
			break;
		case 39:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		case 40:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		case 41:
			*uParam1 = { 1397f, 3725.8f, 33.0673f };
			*fParam2 = -3.7534f;
			return 1;
			break;
		case 42:
			*uParam1 = { Vector(4.0205f, -2975.3408f, 798.4536f) + Vector(1f, 0f, 0f) };
			*fParam2 = 90f;
			return 1;
			break;
		case 43:
			*uParam1 = { 709.0244f, -2916.4788f, 5.0589f };
			*fParam2 = 355.326f;
			return 1;
			break;
		case 44:
			*uParam1 = { 643.5248f, -2917.325f, 5.1337f };
			*fParam2 = 334.1068f;
			return 1;
			break;
		case 45:
			*uParam1 = { 595.2742f, -2819.1826f, 5.0559f };
			*fParam2 = 46.8853f;
			return 1;
			break;
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 47:
			*uParam1 = { 314.4171f, 965.207f, 208.4024f };
			*fParam2 = 165.9421f;
			return 1;
			break;
		case 49:
			*uParam1 = { 3321.5369f, 4975.4546f, 25.9097f };
			*fParam2 = 221.228f;
			return 1;
			break;
		case 48:
			*uParam1 = { -111.1318f, 6316.479f, 30.4904f };
			*fParam2 = (42f + 180f);
			return 1;
			break;
		case 50:
			*uParam1 = { -731.3261f, 106.68f, 54.7169f };
			*fParam2 = 98.9764f;
			return 1;
			break;
		case 51:
			*uParam1 = { -1257.5f, -526.9999f, 30.2361f };
			*fParam2 = 220.9554f;
			return 1;
			break;
		case 52:
			*uParam1 = { 736.9869f, -2050.678f, 28.2718f };
			*fParam2 = 83.9922f;
			return 1;
			break;
		case 66:
			*uParam1 = { 262.5499f, -2540.1504f, 4.8433f };
			*fParam2 = -64.1366f;
			return 1;
			break;
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 55:
			*uParam1 = { -315.7789f, 6201.355f, 30.4322f };
			*fParam2 = 127.7547f;
			return 1;
			break;
		case 56:
			*uParam1 = { 118.0988f, -1264.916f, 32.3637f };
			*fParam2 = -63f;
			return 1;
			break;
		case 57:
			*uParam1 = { 37.5988f, -1351.5203f, 28.2954f };
			*fParam2 = 90.0339f;
			return 1;
			break;
		case 61:
			*uParam1 = { -558.2693f, 261.1167f, 82.07f };
			*fParam2 = 84.6231f;
			return 1;
			break;
		case 62:
			*uParam1 = { -196.9999f, 507.9999f, 132.477f };
			*fParam2 = 99.6049f;
			return 1;
			break;
		case 63:
			*uParam1 = { 1312.01f, -1645.87f, 51.2f };
			*fParam2 = 120f;
			return 1;
			break;
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 69:
			*uParam1 = { -818.7374f, 6.4824f, 41.2432f };
			*fParam2 = 211.8223f;
			return 1;
			break;
		case 64:
			*uParam1 = { 2091.2583f, 4714.852f, 40.1936f };
			*fParam2 = 136.0867f;
			return 1;
			break;
		case 54:
			*uParam1 = { 1762.59f, 3247.212f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		case 65:
			*uParam1 = { 1764.013f, 3252.902f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		default:
			break;
	}
	return 0;
}

int func_1084()//Position - 0xAA4C9
{
	int iVar0;
	if (iLocal_369 != 15 && iLocal_369 != 2)
	{
		if (iLocal_369 != 0 && iLocal_369 != 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(func_94(0)))
			{
				if (PED::IS_PED_INJURED(func_94(0)))
				{
					if ((iLocal_369 == 9 || iLocal_369 == 10) || iLocal_369 == 11)
					{
						if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(func_94(0), PLAYER::PLAYER_PED_ID(), true))
						{
							iLocal_285 = 3;
							return 1;
						}
					}
					if ((iLocal_369 != 9 || iLocal_369 != 10) || iLocal_369 != 11)
					{
						iLocal_285 = 3;
						return 1;
					}
				}
			}
			if (iLocal_369 != 14)
			{
				if (PED::IS_PED_INJURED(func_94(1)))
				{
					iLocal_285 = 18;
					return 1;
				}
			}
		}
		switch (iLocal_369)
		{
			case 1:
				break;
			case 2:
				if (PED::IS_PED_INJURED(iLocal_436[1]))
				{
					iLocal_285 = 5;
					return 1;
				}
				if (PED::IS_PED_INJURED(iLocal_436[2]))
				{
					iLocal_285 = 5;
					return 1;
				}
				if (PED::IS_PED_INJURED(iLocal_436[2]))
				{
					iLocal_285 = 5;
					return 1;
				}
				if (bLocal_382)
				{
					if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_457, false))
					{
					}
					if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_463, false))
					{
					}
					if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_460, false))
					{
					}
				}
				else
				{
					if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_463, false))
					{
					}
					if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_460, false))
					{
					}
				}
				break;
			case 3:
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_443))
				{
					if (PED::IS_PED_INJURED(iLocal_443))
					{
						iLocal_285 = 5;
						return 1;
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_436[1]))
				{
					if (PED::IS_PED_INJURED(iLocal_436[1]))
					{
						iLocal_285 = 5;
						return 1;
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_436[0]))
				{
					if (PED::IS_PED_INJURED(iLocal_436[0]))
					{
						iLocal_285 = 5;
						return 1;
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_436[2]))
				{
					if (PED::IS_PED_INJURED(iLocal_436[2]))
					{
						iLocal_285 = 5;
						return 1;
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_436[2]))
				{
					if (PED::IS_PED_INJURED(iLocal_436[2]))
					{
						iLocal_285 = 5;
						return 1;
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_460))
				{
					if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_460, false))
					{
						iLocal_285 = 12;
						return 1;
					}
				}
				if (bLocal_382)
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_94(0), -631.2317f, -237.48192f, 37.05722f, -617.0735f, -227.06868f, 41.903957f, 17f, false, true, 0))
					{
						iLocal_285 = 22;
						return 1;
					}
					if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_457, false))
					{
						iLocal_285 = 11;
						return 1;
					}
					else if (__LIB_15__::func_929(&iLocal_457))
					{
						iLocal_285 = 11;
						return 1;
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_463))
					{
						if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_463, false))
						{
							iLocal_285 = 10;
							return 1;
						}
					}
					if (!ENTITY::IS_ENTITY_DEAD(func_94(1), false) && !ENTITY::IS_ENTITY_DEAD(func_94(0), false))
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(func_94(1), true), ENTITY::GET_ENTITY_COORDS(func_94(0), true), true) > 200f)
						{
							__LIB_0__::func_229("CMN_FLEAVE" /* GXT: ~s~Return to ~b~Franklin.~s~ */, 7500, 1);
							iLocal_285 = 16;
							return 1;
						}
					}
				}
				else
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_94(1), -631.2317f, -237.48192f, 37.05722f, -617.0735f, -227.06868f, 41.903957f, 17f, false, true, 0))
					{
						iLocal_285 = 22;
						return 1;
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_463))
					{
						if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_463, false))
						{
							iLocal_285 = 10;
							return 1;
						}
						if (__LIB_15__::func_929(&iLocal_463))
						{
							iLocal_285 = 10;
							return 1;
						}
					}
					if (!ENTITY::IS_ENTITY_DEAD(func_94(1), false))
					{
						WEAPON::GET_CURRENT_PED_WEAPON(func_94(1), &iVar0, true);
						if (iVar0 != joaat("WEAPON_UNARMED"))
						{
							if (PED::IS_PED_ON_FOOT(func_94(1)))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(func_94(1), true), Local_308, true) < 50f)
								{
									iLocal_285 = 22;
									return 1;
								}
							}
						}
					}
					if (!ENTITY::IS_ENTITY_DEAD(func_94(1), false) && !ENTITY::IS_ENTITY_DEAD(func_94(0), false))
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(func_94(1), true), ENTITY::GET_ENTITY_COORDS(func_94(0), true), true) > 200f)
						{
							iLocal_285 = 15;
							return 1;
						}
					}
					if (!ENTITY::IS_ENTITY_DEAD(func_94(1), false) && !ENTITY::IS_ENTITY_DEAD(iLocal_436[0], false))
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(func_94(1), true), ENTITY::GET_ENTITY_COORDS(iLocal_436[0], true), true) > 200f)
						{
							iLocal_285 = 17;
							return 1;
						}
					}
					if (!ENTITY::IS_ENTITY_DEAD(func_94(1), false) && !ENTITY::IS_ENTITY_DEAD(iLocal_436[1], false))
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(func_94(1), true), ENTITY::GET_ENTITY_COORDS(iLocal_436[1], true), true) > 200f)
						{
							iLocal_285 = 17;
							return 1;
						}
					}
				}
				if (CLOCK::GET_CLOCK_HOURS() > 18)
				{
					iLocal_285 = 1;
					return 1;
				}
				break;
			case 4:
				if (CLOCK::GET_CLOCK_HOURS() > 18)
				{
					iLocal_285 = 1;
					return 1;
				}
				if (((!ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_94(1), -580.50916f, -296.54443f, 33.944912f, -651.7164f, -202.96754f, 90.15153f, 40.75f, false, true, 0) && !ENTITY::IS_ENTITY_AT_COORD(func_94(1), -578.8325f, -280.2415f, 34.3058f, 25f, 25f, 25f, false, true, 0)) && !PED::IS_PED_RAGDOLL(func_94(1))) && !PED::IS_PED_JUMPING(func_94(1)))
				{
					iLocal_285 = 2;
					return 1;
				}
				if (iLocal_264 == 1)
				{
					if (WEAPON::HAS_PED_GOT_WEAPON(func_94(1), joaat("WEAPON_BZGAS"), false))
					{
						iLocal_264 = 0;
						WEAPON::REQUEST_WEAPON_ASSET(joaat("WEAPON_BZGAS"), 31, 0);
					}
				}
				if (((iLocal_264 == 0 && iLocal_383) && iLocal_417 < 8) && (MISC::GET_GAME_TIMER() - iLocal_265) > 7500)
				{
					WEAPON::REQUEST_WEAPON_ASSET(joaat("WEAPON_BZGAS"), 31, 0);
					if (WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("WEAPON_BZGAS")))
					{
						if (WEAPON::GET_AMMO_IN_PED_WEAPON(func_94(1), joaat("WEAPON_BZGAS")) == 0)
						{
							iLocal_285 = 25;
							return 1;
						}
					}
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_94(1), -631.2317f, -237.48192f, 37.05722f, -617.0735f, -227.06868f, 41.903957f, 17f, false, true, 0) || ENTITY::IS_ENTITY_AT_COORD(func_94(1), -631.597f, -237.63469f, 38.877033f, 3.5f, 3.5f, 1.8125f, false, true, 0))
				{
					iLocal_285 = 23;
					return 1;
				}
				if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(-1, -550.51807f, -387.0717f, 30.874672f, -727.1269f, -77.976135f, 85.24414f, 223.5f) && !FIRE::IS_EXPLOSION_IN_ANGLED_AREA(21, -550.51807f, -387.0717f, 30.874672f, -727.1269f, -77.976135f, 85.24414f, 223.5f))
				{
					while (!__LIB_17__::func_243(&uLocal_539, "JHAUD", "JH_BOOM", 9, 0, 0, 0))
					{
						SYSTEM::WAIT(0);
					}
					while (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						SYSTEM::WAIT(0);
					}
					iLocal_285 = 22;
					return 1;
				}
				if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(21, -550.51807f, -387.0717f, 30.874672f, -727.1269f, -77.976135f, 85.24414f, 223.5f) && !FIRE::IS_EXPLOSION_IN_ANGLED_AREA(21, -587.7454f, -295.5597f, -34.072205f, -638.5672f, -203.2724f, 165.57771f, 33.25f))
				{
					iLocal_285 = 24;
					return 1;
				}
				if ((PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 && iLocal_417 < 6) || MISC::IS_BULLET_IN_ANGLED_AREA(-550.51807f, -387.0717f, 30.874672f, -727.1269f, -77.976135f, 85.24414f, 223.5f, true))
				{
					iLocal_285 = 22;
					return 1;
				}
				break;
			case 5:
				iLocal_416 = 0;
				while (iLocal_416 <= 4)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_438[iLocal_416]))
					{
						if (PED::IS_PED_INJURED(iLocal_438[iLocal_416]))
						{
						}
					}
					iLocal_416++;
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_437))
				{
					if (PED::IS_PED_INJURED(iLocal_437))
					{
					}
				}
				break;
			case 6:
				iLocal_416 = 0;
				while (iLocal_416 <= 4)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_438[iLocal_416]))
					{
						if (PED::IS_PED_INJURED(iLocal_438[iLocal_416]))
						{
						}
					}
					iLocal_416++;
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_437))
				{
					if (PED::IS_PED_INJURED(iLocal_437))
					{
					}
				}
				if (PED::IS_PED_INJURED(iLocal_436[0]))
				{
					iLocal_285 = 5;
					return 1;
				}
				if (PED::IS_PED_INJURED(iLocal_436[1]))
				{
					iLocal_285 = 5;
					return 1;
				}
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_463, false))
				{
				}
				break;
			case 7:
				if (PED::IS_PED_INJURED(iLocal_436[1]))
				{
					iLocal_285 = 5;
					return 1;
				}
				if (PED::IS_PED_INJURED(iLocal_436[0]))
				{
					iLocal_285 = 5;
					return 1;
				}
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_94(0), -643.1521f, -243.83548f, 50.90952f, -609.54877f, -224.07814f, 34.872833f, 21.25f, false, true, 0))
					{
						iLocal_285 = 2;
						return 1;
					}
				}
				if (bLocal_424)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_437))
					{
						if (!PED::IS_PED_INJURED(iLocal_437))
						{
							if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_437, -643.1521f, -243.83548f, 50.90952f, -609.54877f, -224.07814f, 34.872833f, 21.25f, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_437, -673.4018f, -222.5538f, 35.03787f, -639.30536f, -237.36362f, 39.207844f, 18.5f, false, true, 0))
							{
								iLocal_285 = 20;
								return 1;
							}
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_460))
				{
					if (ENTITY::IS_ENTITY_DEAD(iLocal_460, false))
					{
						iLocal_285 = 12;
						return 1;
					}
				}
				iLocal_416 = 0;
				while (iLocal_416 <= 2)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_456[iLocal_416]))
					{
						if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_456[iLocal_416], false) || (VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_456[iLocal_416], 6, false) || VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_456[iLocal_416], 7, false)))
						{
							iLocal_285 = 9;
							return 1;
						}
					}
					iLocal_416++;
				}
				if (!func_945(PLAYER::PLAYER_PED_ID()))
				{
					if (((MISC::GET_GAME_TIMER() - iLocal_718) > 20000 && iLocal_717 == 1) || bLocal_382)
					{
						iLocal_285 = 2;
						return 1;
					}
					if (iLocal_717 == 0 && !__LIB_13__::func_755(&Local_370, 2))
					{
						__LIB_0__::func_229("JH_ABANDON", 7500, 1);
						iLocal_717 = 1;
					}
				}
				else
				{
					iLocal_717 = 0;
					iLocal_718 = MISC::GET_GAME_TIMER();
				}
				break;
			case 8:
				if (iLocal_405)
				{
					iLocal_285 = 21;
					return 1;
				}
				if (PED::IS_PED_INJURED(iLocal_436[1]))
				{
					iLocal_285 = 5;
					return 1;
				}
				break;
			case 9:
			case 10:
			case 11:
				if (!bLocal_425)
				{
					if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_456[1], false))
					{
						iLocal_285 = 9;
						return 1;
					}
					else
					{
						if (PED::IS_PED_INJURED(iLocal_436[1]))
						{
							iLocal_285 = 5;
						}
						if (!PED::IS_PED_INJURED(iLocal_436[1]))
						{
							if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_436[1], false) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_456[1]))
							{
								iLocal_285 = 5;
								return 1;
							}
						}
					}
				}
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_456[0], false))
				{
					iLocal_285 = 9;
					return 1;
				}
				else
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(func_94(1), true), ENTITY::GET_ENTITY_COORDS(iLocal_456[0], true), true) > 150f)
					{
						if (iLocal_716 == 0)
						{
							__LIB_0__::func_229("JH_LOSINGC" /* GXT: ~s~You are losing the ~b~crew. */, 7500, 1);
							iLocal_716 = 1;
						}
					}
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(func_94(1), true), ENTITY::GET_ENTITY_COORDS(iLocal_456[0], true), true) > 200f)
					{
						if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_456[0]))
						{
							iLocal_285 = 13;
							return 1;
						}
					}
					if (ENTITY::IS_ENTITY_AT_COORD(func_94(1), 1003.3589f, -206.0158f, (69.3833f + 2.5f), 100f, 100f, 2f, false, true, 0))
					{
						iLocal_285 = 13;
						return 1;
					}
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_94(1), -213.0718f, -615.92694f, 47.344517f, -278.71338f, -607.777f, 30.75745f, 25f, false, true, 0))
					{
						iLocal_285 = 13;
						return 1;
					}
					if (!PED::IS_PED_INJURED(iLocal_436[0]))
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_436[0], false) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_456[0]))
						{
							iLocal_285 = 5;
						}
					}
				}
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_456[2], false))
				{
					iLocal_285 = 9;
					return 1;
				}
				else if (!ENTITY::IS_ENTITY_AT_ENTITY(iLocal_456[2], func_94(1), 150f, 150f, 150f, false, false, 0))
				{
					if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_456[2]))
					{
						iLocal_285 = 14;
						return 1;
					}
				}
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_456[0]))
				{
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_456[0]) > 152720.2f)
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(func_94(1), true), ENTITY::GET_ENTITY_COORDS(iLocal_456[0], true), true) > 125f)
						{
							iLocal_285 = 13;
							return 1;
						}
					}
				}
				break;
			case 12:
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_436[0]))
				{
					if (!PED::IS_PED_INJURED(iLocal_436[0]))
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_436[0], false))
						{
						}
					}
					else
					{
						iLocal_285 = 8;
						return iLocal_383;
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_436[2]))
				{
					if (PED::IS_PED_INJURED(iLocal_436[2]))
					{
						iLocal_285 = 6;
						return iLocal_383;
					}
				}
				if (!bLocal_425)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_436[1]))
					{
						if (PED::IS_PED_INJURED(iLocal_436[1]) || !PED::IS_PED_IN_ANY_VEHICLE(iLocal_436[1], false))
						{
							iLocal_285 = 7;
							return iLocal_383;
						}
					}
				}
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_456[0], false) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_456[2], false))
				{
					iLocal_285 = 9;
					return iLocal_383;
				}
				if (!bLocal_425)
				{
					if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_456[1], false))
					{
						iLocal_285 = 9;
						return iLocal_383;
					}
				}
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_460, false) || __LIB_15__::func_929(&iLocal_460))
					{
						iLocal_285 = 12;
						return iLocal_383;
					}
				}
				if (fLocal_343 > 222000f)
				{
					if (iLocal_273 > 0)
					{
						iLocal_285 = 26;
						return iLocal_383;
					}
				}
				if (iLocal_278 == 0)
				{
					if (ENTITY::DOES_ENTITY_EXIST(func_94(0)))
					{
						if (__LIB_0__::func_76(func_94(0), iLocal_436[0], 0) > 350f)
						{
							iLocal_285 = 17;
							return iLocal_383;
						}
					}
				}
				if (func_705() == 0)
				{
					if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_460, 0) > 200f)
					{
						iLocal_285 = 2;
						return iLocal_383;
					}
				}
				break;
			case 13:
				if (!bLocal_425)
				{
					if (PED::IS_PED_INJURED(iLocal_436[1]))
					{
					}
					if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_456[1], false))
					{
					}
				}
				if (PED::IS_PED_INJURED(iLocal_436[0]))
				{
				}
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_456[0], false) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_456[2], false))
				{
				}
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_460, false))
				{
				}
				break;
			case 14:
				if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), 206.7173f, -2024.6572f, 17.2513f, 1) > 1000f)
				{
					iLocal_285 = 2;
					return 1;
				}
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 209.6063f, -2005.6425f, 17.361458f, 212.18361f, -2012.6353f, 21.525574f, 11f, false, true, 0))
					{
						iLocal_285 = 22;
						return 1;
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_443))
				{
					if (PED::IS_PED_INJURED(iLocal_443))
					{
						iLocal_285 = 5;
						return 1;
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_436[2]))
				{
					if (PED::IS_PED_INJURED(iLocal_436[2]))
					{
						iLocal_285 = 6;
						return 1;
					}
				}
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_460, false) || __LIB_15__::func_929(&iLocal_460))
				{
					iLocal_285 = 12;
					return 1;
				}
				break;
			}
	}
	return 0;
}

void func_1086(bool bParam0)//Position - 0xAB4E6
{
	bLocal_71 = bParam0;
	func_984();
	PED::ADD_RELATIONSHIP_GROUP("SHOP", &iLocal_498);
	PED::ADD_RELATIONSHIP_GROUP("COPPERS", &iLocal_499);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, joaat("PLAYER"), iLocal_498);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("PLAYER"), iLocal_499);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_499, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_499, iLocal_498);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, iLocal_498, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_498, iLocal_499);
	func_1096(bParam0);
	func_1092();
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK(Local_748.f_244);
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK(Local_748.f_245);
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK(Local_748.f_246);
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK(Local_748.f_247);
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("JWL_HEIST_CAR_SMASHES_BIG");
	AUDIO::DISTANT_COP_CAR_SIRENS(false);
	PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	if (iLocal_477 != 0)
	{
		INTERIOR::UNPIN_INTERIOR(iLocal_477);
	}
	MISC::SET_WEATHER_TYPE_NOW_PERSIST("EXTRASUNNY");
	iLocal_400 = 1;
	if (iLocal_369 > 7)
	{
		if (iLocal_413 == 0)
		{
			iLocal_413 = 3160280;
			iLocal_719 = iLocal_413;
		}
	}
	switch (iLocal_369)
	{
		case 0:
			func_1091(&iLocal_279, 716.5068f, -966.4983f, 29.1884f, 1, 0);
			__LIB_0__::func_433(0, -1, 1);
			break;
		case 2:
			func_133();
			func_129(0, 0);
			func_1091(&iLocal_279, 716.5068f, -966.4983f, 29.1884f, 1, 0);
			__LIB_0__::func_433(0, -1, 1);
			break;
		case 3:
			func_133();
			func_935(Local_748.f_12);
			func_935(Local_748.f_2);
			func_129(0, 0);
			func_936(&iLocal_279, 716.5068f, -966.4983f, 29.1884f, "V_sweat", 1, 0);
			while (!__LIB_0__::func_648(&iLocal_443, 12, Local_298, 213.4447f, 1))
			{
				SYSTEM::WAIT(0);
			}
			func_724(iLocal_443);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_443, false))
			{
				PED::SET_PED_COMPONENT_VARIATION(iLocal_443, 0, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_443, 2, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_443, 3, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_443, 4, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_443, 5, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_443, 7, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_443, 8, 0, 0, 0);
				PED::SET_PED_PROP_INDEX(iLocal_443, 1, 0, 0, false);
				PED::SET_PED_CONFIG_FLAG(iLocal_443, 185, true);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_443, false))
			{
				iLocal_455 = OBJECT::CREATE_OBJECT(Local_748.f_23, ENTITY::GET_ENTITY_COORDS(iLocal_443, false), true, true, false);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_455, iLocal_443, PED::GET_PED_BONE_INDEX(iLocal_443, 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
			}
			if (bLocal_382)
			{
				STREAMING::REQUEST_MODEL(joaat("primo"));
				while (!STREAMING::HAS_MODEL_LOADED(joaat("primo")))
				{
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
					func_112(0);
				}
				iLocal_457 = VEHICLE::CREATE_VEHICLE(joaat("primo"), Local_303, 275.6314f, true, true, false);
				VEHICLE::SET_VEHICLE_COLOURS(iLocal_457, 0, 0);
				iLocal_463 = VEHICLE::CREATE_VEHICLE(Local_748.f_2, Local_305, 275.8923f, true, true, false);
			}
			else
			{
				iLocal_463 = VEHICLE::CREATE_VEHICLE(Local_748.f_2, Local_303, 275.6314f, true, true, false);
			}
			iLocal_460 = VEHICLE::CREATE_VEHICLE(Local_748.f_12, Local_304, 269.3407f, true, true, false);
			func_890(iLocal_460);
			VEHICLE::SET_VEHICLE_COLOURS(iLocal_460, 128, 3);
			VEHICLE::SET_VEHICLE_EXTRA(iLocal_460, 6, false);
			CLOCK::SET_CLOCK_TIME(9, 0, 0);
			__LIB_0__::func_433(0, -1, 1);
			break;
		case 4:
			func_133();
			func_129(0, 0);
			Local_409 = { Local_307 };
			STREAMING::REQUEST_MODEL(joaat("primo"));
			while (!STREAMING::HAS_MODEL_LOADED(joaat("primo")))
			{
				HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
				func_112(0);
			}
			iLocal_457 = VEHICLE::CREATE_VEHICLE(joaat("primo"), Local_303, 275.6314f, true, true, false);
			VEHICLE::SET_VEHICLE_COLOURS(iLocal_457, 0, 0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_457, false))
			{
				if (!PED::IS_PED_INJURED(func_94(0)))
				{
					PED::SET_PED_INTO_VEHICLE(func_94(0), iLocal_457, -1);
				}
				if (!PED::IS_PED_INJURED(iLocal_436[0]))
				{
					PED::SET_PED_INTO_VEHICLE(iLocal_436[0], iLocal_457, 1);
				}
				if (!PED::IS_PED_INJURED(iLocal_436[1]))
				{
					PED::SET_PED_INTO_VEHICLE(iLocal_436[1], iLocal_457, 2);
				}
			}
			AUDIO::TRIGGER_MUSIC_EVENT("JH2A_MISSION_START_ST");
			func_649(0);
			MISC::CLEAR_AREA(Local_307, 50f, true, false, false, false);
			__LIB_0__::func_433(0, -1, 1);
			break;
		case 5:
			func_1087(1, 0);
			func_133();
			func_129(0, 0);
			Local_409 = { Local_307 };
			if (!bParam0)
			{
				STREAMING::NEW_LOAD_SCENE_START_SPHERE(-623.7916f, -232.2508f, 38.3262f, 35f, 0);
				SYSTEM::SETTIMERA(0);
				while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED() && SYSTEM::TIMERA() < 10000)
				{
					SYSTEM::WAIT(0);
				}
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					STREAMING::NEW_LOAD_SCENE_STOP();
				}
			}
			func_649(0);
			if (bLocal_382)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("JH2A_GAS_SHOP_RESTART");
			}
			__LIB_0__::func_433(0, -1, 1);
			break;
		case 6:
			func_133();
			func_935(Local_748.f_2);
			func_935(Local_748.f_3);
			iLocal_416 = 0;
			while (iLocal_416 <= 4)
			{
				func_935(Local_748.f_4[iLocal_416]);
				iLocal_416++;
			}
			func_933(Local_748.f_35);
			func_129(0, 0);
			func_125(iLocal_262, 1, 0, 0);
			Local_409 = { Local_308 };
			iLocal_463 = VEHICLE::CREATE_VEHICLE(Local_748.f_2, Local_309, 275.6314f, true, true, false);
			if (!PED::IS_PED_INJURED(func_94(0)))
			{
				if (!bParam0)
				{
					WEAPON::GIVE_WEAPON_TO_PED(func_94(0), iLocal_262, 1000, true, true);
					func_993(func_94(0), iLocal_262, joaat("COMPONENT_AT_AR_SUPP"));
				}
				else
				{
					WEAPON::SET_CURRENT_PED_WEAPON(func_94(0), iLocal_262, true);
				}
			}
			if (!PED::IS_PED_INJURED(func_94(1)))
			{
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_463, false))
			{
				if (!PED::IS_PED_INJURED(func_94(1)))
				{
					PED::SET_PED_INTO_VEHICLE(func_94(1), iLocal_463, -1);
				}
				if (!PED::IS_PED_INJURED(func_94(0)))
				{
					PED::SET_PED_INTO_VEHICLE(func_94(0), iLocal_463, 0);
				}
				if (!PED::IS_PED_INJURED(iLocal_436[0]))
				{
					PED::SET_PED_INTO_VEHICLE(iLocal_436[0], iLocal_463, 1);
				}
				if (!PED::IS_PED_INJURED(iLocal_436[1]))
				{
					PED::SET_PED_INTO_VEHICLE(iLocal_436[1], iLocal_463, 2);
				}
			}
			WEAPON::REMOVE_WEAPON_ASSET(iLocal_262);
			func_649(0);
			if (iLocal_306 == 0)
			{
				iLocal_306 = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
			}
			iLocal_417 = 0;
			__LIB_0__::func_433(iLocal_463, -1, 1);
			break;
		case 7:
			func_133();
			func_935(Local_748.f_3);
			iLocal_416 = 0;
			while (iLocal_416 <= 4)
			{
				func_935(Local_748.f_4[iLocal_416]);
				iLocal_416++;
			}
			if (!bLocal_382)
			{
				func_935(Local_748.f_10);
			}
			if (bLocal_382)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("JH2A_ENTER_SHOP_RESTART");
			}
			else
			{
				AUDIO::TRIGGER_MUSIC_EVENT("JH2B_ENTER_SHOP_RESTART");
			}
			func_935(Local_748.f_18);
			func_935(Local_748.f_19);
			func_935(Local_748.f_20);
			func_935(Local_748.f_21);
			func_935(Local_748.f_0);
			func_933(Local_748.f_35);
			func_129(0, 0);
			while (!func_931())
			{
				SYSTEM::WAIT(0);
			}
			func_1087(1, 0);
			func_936(&iLocal_477, -625.1706f, -232.8408f, 39.4937f, "V_JEWEL2", 1, 1);
			func_1096(0);
			func_125(iLocal_262, 1, 0, 0);
			if (!PED::IS_PED_INJURED(func_94(0)) && !bParam0)
			{
				WEAPON::GIVE_WEAPON_TO_PED(func_94(0), iLocal_262, 1000, true, true);
				func_993(func_94(0), iLocal_262, joaat("COMPONENT_AT_AR_SUPP"));
			}
			else
			{
				WEAPON::SET_CURRENT_PED_WEAPON(func_94(0), iLocal_262, true);
			}
			iLocal_437 = PED::CREATE_PED(26, Local_748.f_3, Local_336, fLocal_337, true, true);
			if (bLocal_382)
			{
				func_982(1, 0, 1, 0, 1);
			}
			else
			{
				func_982(0, 1, 1, 0, 1);
			}
			WEAPON::REMOVE_WEAPON_ASSET(iLocal_262);
			func_649(0);
			func_9(func_94(0), 1, 0);
			func_722(func_94(0), 1);
			while (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(func_94(0)))
			{
				func_112(0);
			}
			__LIB_0__::func_433(0, -1, 1);
			MISC::CLEAR_AREA(Local_336, 300f, true, false, false, false);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_436[0], false))
			{
				while (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_436[0]))
				{
					func_112(0);
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_436[1], false))
			{
				while (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_436[1]))
				{
					func_112(0);
				}
			}
			break;
		case 8:
			func_133();
			func_935(Local_748.f_0);
			func_129(0, 0);
			func_125(iLocal_262, 1, 0, 0);
			func_1087(1, 0);
			func_886(0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_456[0], false) && !PED::IS_PED_INJURED(iLocal_436[0]))
			{
				PED::SET_PED_INTO_VEHICLE(iLocal_436[0], iLocal_456[0], -1);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_456[1], false) && !PED::IS_PED_INJURED(iLocal_436[1]))
			{
				PED::SET_PED_INTO_VEHICLE(iLocal_436[1], iLocal_456[1], -1);
			}
			if (!PED::IS_PED_INJURED(func_94(0)) && !bParam0)
			{
				WEAPON::GIVE_WEAPON_TO_PED(func_94(0), iLocal_262, 1000, true, true);
				func_993(func_94(0), iLocal_262, joaat("COMPONENT_AT_AR_SUPP"));
			}
			else
			{
				WEAPON::SET_CURRENT_PED_WEAPON(func_94(0), iLocal_262, true);
			}
			func_722(func_94(0), 1);
			if (!PED::IS_PED_INJURED(func_94(1)))
			{
			}
			WEAPON::REMOVE_WEAPON_ASSET(iLocal_262);
			func_649(0);
			if (bLocal_382)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("JH2A_EXIT_SHOP_RESTART");
			}
			else
			{
				AUDIO::TRIGGER_MUSIC_EVENT("JH2A_EXIT_SHOP_RESTART");
			}
			__LIB_0__::func_433(0, -1, 1);
			break;
		case 9:
			func_133();
			func_1087(1, 0);
			func_935(Local_748.f_0);
			func_129(0, 0);
			func_886(0);
			func_649(0);
			func_9(func_94(1), 1, 0);
			if (bLocal_382)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("JH2A_ONTO_BIKE_RESTART");
			}
			else
			{
				AUDIO::TRIGGER_MUSIC_EVENT("JH2B_ONTO_BIKE_RESTART");
			}
			__LIB_0__::func_433(iLocal_456[2], -1, 1);
			if (Global_96863)
			{
				STREAMING::REQUEST_MODEL(Local_748.f_14);
				STREAMING::REQUEST_MODEL(Local_748.f_15);
				while (!STREAMING::HAS_MODEL_LOADED(Local_748.f_14) || !STREAMING::HAS_MODEL_LOADED(Local_748.f_15))
				{
					SYSTEM::WAIT(0);
				}
			}
			else
			{
				STREAMING::REQUEST_MODEL(joaat("intruder"));
				while (!STREAMING::HAS_MODEL_LOADED(joaat("intruder")))
				{
					SYSTEM::WAIT(0);
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_456[0], false))
			{
				if (!PED::IS_PED_INJURED(iLocal_436[0]))
				{
					PED::SET_PED_INTO_VEHICLE(iLocal_436[0], iLocal_456[0], -1);
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_456[1], false))
			{
				if (!PED::IS_PED_INJURED(iLocal_436[1]))
				{
					PED::SET_PED_INTO_VEHICLE(iLocal_436[1], iLocal_456[1], -1);
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_436[0], false))
			{
				PED::SET_PED_HELMET_PROP_INDEX(iLocal_436[0], 3, true);
				PED::SET_PED_HELMET_TEXTURE_INDEX(iLocal_436[0], 0);
				PED::SET_PED_PROP_INDEX(iLocal_436[0], 0, 3, 0, false);
				PED::GIVE_PED_HELMET(iLocal_436[0], true, 16384, -1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_436[1], false))
			{
				PED::SET_PED_HELMET_PROP_INDEX(iLocal_436[1], 4, true);
				PED::SET_PED_HELMET_TEXTURE_INDEX(iLocal_436[1], 0);
				PED::SET_PED_PROP_INDEX(iLocal_436[1], 0, 4, 0, false);
				PED::GIVE_PED_HELMET(iLocal_436[1], true, 16384, -1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(func_94(1), false))
			{
				PED::SET_PED_HELMET_PROP_INDEX(func_94(1), 6, true);
				PED::SET_PED_HELMET_TEXTURE_INDEX(func_94(1), 8);
				PED::SET_PED_PROP_INDEX(func_94(1), 0, 6, 8, false);
			}
			PED::GIVE_PED_HELMET(func_94(1), true, 16384, -1);
			while (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_436[0]))
			{
				func_112(0);
			}
			if (!bLocal_425)
			{
				while (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_436[1]))
				{
					func_112(0);
				}
			}
			while (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(func_94(1)))
			{
				func_112(0);
			}
			iLocal_416 = 0;
			while (iLocal_416 <= 19)
			{
				iLocal_504 = OBJECT::GET_RAYFIRE_MAP_OBJECT(Local_349[iLocal_416 /*30*/], 1f, Local_349[iLocal_416 /*30*/].f_27);
				if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_504))
				{
					OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_504, 9);
				}
				iLocal_416++;
			}
			break;
		case 10:
			func_133();
			func_935(Local_748.f_0);
			func_129(0, 0);
			CLOCK::SET_CLOCK_TIME(19, 20, 0);
			func_886(1);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_456[0], false))
			{
				if (!PED::IS_PED_INJURED(iLocal_436[0]))
				{
					PED::SET_PED_INTO_VEHICLE(iLocal_436[0], iLocal_456[0], -1);
				}
			}
			if (!bLocal_425)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_456[1], false))
				{
					if (!PED::IS_PED_INJURED(iLocal_436[1]))
					{
						PED::SET_PED_INTO_VEHICLE(iLocal_436[1], iLocal_456[1], -1);
					}
				}
			}
			else
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_456[1]));
				PED::DELETE_PED(&(iLocal_436[1]));
			}
			if (bLocal_382)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("JH2A_EXIT_TUNNEL_RESTART");
			}
			else
			{
				AUDIO::TRIGGER_MUSIC_EVENT("JH2B_EXIT_TUNNEL_RESTART");
			}
			func_649(0);
			func_9(func_94(1), 1, 0);
			__LIB_0__::func_433(iLocal_456[2], -1, 1);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_436[0], false))
			{
				PED::SET_PED_HELMET_PROP_INDEX(iLocal_436[0], 3, true);
				PED::SET_PED_HELMET_TEXTURE_INDEX(iLocal_436[0], 0);
				PED::SET_PED_PROP_INDEX(iLocal_436[0], 0, 3, 0, false);
				PED::GIVE_PED_HELMET(iLocal_436[0], true, 16384, -1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_436[1], false))
			{
				PED::SET_PED_HELMET_PROP_INDEX(iLocal_436[1], 4, true);
				PED::SET_PED_HELMET_TEXTURE_INDEX(iLocal_436[1], 0);
				PED::SET_PED_PROP_INDEX(iLocal_436[1], 0, 4, 0, false);
				PED::GIVE_PED_HELMET(iLocal_436[1], true, 16384, -1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(func_94(1), false))
			{
				PED::SET_PED_HELMET_PROP_INDEX(func_94(1), 6, true);
				PED::SET_PED_HELMET_TEXTURE_INDEX(func_94(1), 8);
				PED::SET_PED_PROP_INDEX(func_94(1), 0, 6, 8, false);
			}
			PED::GIVE_PED_HELMET(func_94(1), true, 4096, -1);
			PED::INSTANTLY_FILL_PED_POPULATION();
			MISC::POPULATE_NOW();
			while (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_436[0]))
			{
				func_112(0);
			}
			if (!bLocal_425)
			{
				while (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_436[1]))
				{
					func_112(0);
				}
			}
			while (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(func_94(1)))
			{
				func_112(0);
			}
			break;
		case 11:
			func_133();
			func_935(Local_748.f_0);
			func_935(Local_748.f_12);
			func_935(Local_748.f_14);
			func_935(Local_748.f_15);
			func_932(Local_748.f_83, Local_748.f_85);
			func_932(Local_748.f_83, Local_748.f_84);
			func_932("JHUBER", 717);
			func_129(0, 0);
			func_126(0, 1, 1, 1);
			func_126(0, 2, 1, 1);
			func_125(joaat("WEAPON_PISTOL"), 1, 1, 0);
			CLOCK::SET_CLOCK_TIME(19, 20, 0);
			iLocal_456[0] = VEHICLE::CREATE_VEHICLE(Local_748.f_0, 1035.8641f, -284.8706f, 49.2269f, 208.3043f, true, true, false);
			iLocal_456[1] = VEHICLE::CREATE_VEHICLE(Local_748.f_0, 1037.8641f, -284.8706f, 49.2269f, 208.3043f, true, true, false);
			iLocal_456[2] = VEHICLE::CREATE_VEHICLE(Local_748.f_0, 1033.8641f, -284.8706f, 49.2269f, 208.3043f, true, true, false);
			iLocal_416 = 0;
			while (iLocal_416 <= 2)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_456[iLocal_416]))
				{
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_456[iLocal_416], 5f);
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_456[iLocal_416], iLocal_416);
				}
				iLocal_416++;
			}
			if (bLocal_382)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("JH2A_EXIT_TUNNEL_RESTART");
			}
			else
			{
				AUDIO::TRIGGER_MUSIC_EVENT("JH2B_EXIT_TUNNEL_RESTART");
			}
			func_649(0);
			func_9(func_94(1), 1, 0);
			__LIB_0__::func_433(0, -1, 1);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_456[2], false))
			{
				PED::SET_PED_INTO_VEHICLE(func_94(1), iLocal_456[2], -1);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_456[0], false))
			{
				if (!PED::IS_PED_INJURED(iLocal_436[0]))
				{
					PED::SET_PED_INTO_VEHICLE(iLocal_436[0], iLocal_456[0], -1);
				}
			}
			if (!bLocal_425)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_456[1], false))
				{
					if (!PED::IS_PED_INJURED(iLocal_436[1]))
					{
						PED::SET_PED_INTO_VEHICLE(iLocal_436[1], iLocal_456[1], -1);
					}
				}
			}
			else
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_456[1]));
				PED::DELETE_PED(&(iLocal_436[1]));
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_436[0], false))
			{
				PED::SET_PED_HELMET_PROP_INDEX(iLocal_436[0], 3, true);
				PED::SET_PED_HELMET_TEXTURE_INDEX(iLocal_436[0], 0);
				PED::SET_PED_PROP_INDEX(iLocal_436[0], 0, 3, 0, false);
				PED::GIVE_PED_HELMET(iLocal_436[0], true, 16384, -1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_436[1], false))
			{
				PED::SET_PED_HELMET_PROP_INDEX(iLocal_436[1], 4, true);
				PED::SET_PED_HELMET_TEXTURE_INDEX(iLocal_436[1], 0);
				PED::SET_PED_PROP_INDEX(iLocal_436[1], 0, 4, 0, false);
				PED::GIVE_PED_HELMET(iLocal_436[1], true, 16384, -1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(func_94(1), false))
			{
				PED::SET_PED_HELMET_PROP_INDEX(func_94(1), 6, true);
				PED::SET_PED_HELMET_TEXTURE_INDEX(func_94(1), 8);
				PED::SET_PED_PROP_INDEX(func_94(1), 0, 6, 8, false);
			}
			PED::GIVE_PED_HELMET(func_94(1), true, 4096, -1);
			while (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_436[0]))
			{
				func_112(0);
			}
			if (!bLocal_425)
			{
				while (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_436[1]))
				{
					func_112(0);
				}
			}
			while (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(func_94(1)))
			{
				func_112(0);
			}
			break;
		case 12:
			func_133();
			func_129(0, 0);
			func_892();
			while (!func_891())
			{
				SYSTEM::WAIT(0);
			}
			func_125(joaat("WEAPON_PISTOL"), 1, 0, 0);
			iLocal_460 = VEHICLE::CREATE_VEHICLE(Local_748.f_12, Local_327, fLocal_328, true, true, false);
			func_890(iLocal_460);
			VEHICLE::SET_VEHICLE_COLOURS(iLocal_460, 128, 3);
			VEHICLE::SET_VEHICLE_EXTRA(iLocal_460, 6, false);
			iLocal_416 = 0;
			while (iLocal_416 <= 2)
			{
				if (!(bLocal_425 && iLocal_416 == 1))
				{
					iLocal_456[iLocal_416] = VEHICLE::CREATE_VEHICLE(Local_748.f_0, Local_329[iLocal_416 /*3*/], fLocal_330[iLocal_416], true, true, false);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_456[iLocal_416], 5f);
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_456[iLocal_416], iLocal_416);
				}
				iLocal_416++;
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_456[2], false) && !PED::IS_PED_INJURED(func_94(1)))
			{
				if (!PED::IS_PED_IN_VEHICLE(func_94(1), iLocal_456[2], false))
				{
					PED::SET_PED_INTO_VEHICLE(func_94(1), iLocal_456[2], -1);
				}
				VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_456[2], true, true, false);
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_456[2], 8f);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_460, false) && !PED::IS_PED_INJURED(func_94(0)))
			{
				if (!PED::IS_PED_IN_VEHICLE(func_94(0), iLocal_460, false))
				{
					PED::SET_PED_INTO_VEHICLE(func_94(0), iLocal_460, -1);
				}
			}
			if (!bLocal_425)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_456[1], false) && !PED::IS_PED_INJURED(iLocal_436[1]))
				{
					if (!PED::IS_PED_IN_VEHICLE(iLocal_436[1], iLocal_456[1], false))
					{
						PED::SET_PED_INTO_VEHICLE(iLocal_436[1], iLocal_456[1], -1);
					}
					VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_456[1], true, true, false);
					VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_456[1], 8f);
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_456[0], false) && !PED::IS_PED_INJURED(iLocal_436[0]))
			{
				if (!PED::IS_PED_IN_VEHICLE(iLocal_436[0], iLocal_456[0], false))
				{
					PED::SET_PED_INTO_VEHICLE(iLocal_436[0], iLocal_456[0], -1);
				}
				VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_456[0], true, true, false);
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_456[0], 8f);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_460, false) && !PED::IS_PED_INJURED(iLocal_436[2]))
			{
				if (!PED::IS_PED_IN_VEHICLE(iLocal_436[2], iLocal_460, false))
				{
					PED::SET_PED_INTO_VEHICLE(iLocal_436[2], iLocal_460, 0);
				}
			}
			CLOCK::SET_CLOCK_TIME(19, 0, 0);
			if (bLocal_382)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("JH2A_EXIT_TUNNEL_RESTART");
			}
			else
			{
				AUDIO::TRIGGER_MUSIC_EVENT("JH2B_EXIT_TUNNEL_RESTART");
			}
			WEAPON::REMOVE_WEAPON_ASSET(joaat("WEAPON_PISTOL"));
			func_649(0);
			__LIB_0__::func_433(iLocal_460, -1, 1);
			break;
		case 13:
			func_133();
			func_935(Local_748.f_12);
			func_935(Local_748.f_0);
			func_129(0, 0);
			VEHICLE::DELETE_VEHICLE(&iLocal_460);
			iLocal_460 = VEHICLE::CREATE_VEHICLE(Local_748.f_12, Local_333, fLocal_334, true, true, false);
			func_890(iLocal_460);
			VEHICLE::SET_VEHICLE_COLOURS(iLocal_460, 128, 3);
			VEHICLE::SET_VEHICLE_EXTRA(iLocal_460, 6, false);
			iLocal_416 = 0;
			while (iLocal_416 <= 2)
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_456[iLocal_416]));
				if (!(bLocal_425 && iLocal_416 == 1))
				{
					iLocal_456[iLocal_416] = VEHICLE::CREATE_VEHICLE(Local_748.f_0, Local_329[iLocal_416 /*3*/], fLocal_330[iLocal_416], true, true, false);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_456[iLocal_416], 5f);
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_456[iLocal_416], iLocal_416);
				}
				iLocal_416++;
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_456[2], false) && !PED::IS_PED_INJURED(func_94(1)))
			{
				PED::SET_PED_INTO_VEHICLE(func_94(1), iLocal_456[2], -1);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_460, false) && !PED::IS_PED_INJURED(func_94(0)))
			{
				PED::SET_PED_INTO_VEHICLE(func_94(0), iLocal_460, -1);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_456[0], false) && !PED::IS_PED_INJURED(iLocal_436[0]))
			{
				PED::SET_PED_INTO_VEHICLE(iLocal_436[0], iLocal_456[0], -1);
			}
			if (!bLocal_425)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_456[1], false) && !PED::IS_PED_INJURED(iLocal_436[1]))
				{
					PED::SET_PED_INTO_VEHICLE(iLocal_436[1], iLocal_456[1], -1);
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_460, false) && !PED::IS_PED_INJURED(iLocal_436[2]))
			{
				PED::SET_PED_INTO_VEHICLE(iLocal_436[2], iLocal_460, 0);
			}
			CLOCK::SET_CLOCK_TIME(22, 0, 0);
			func_649(0);
			__LIB_0__::func_433(iLocal_460, -1, 1);
			break;
		case 14:
			func_133();
			func_935(Local_748.f_12);
			func_129(0, 0);
			iLocal_460 = VEHICLE::CREATE_VEHICLE(Local_748.f_12, Local_333, fLocal_334, true, true, false);
			func_890(iLocal_460);
			VEHICLE::SET_VEHICLE_COLOURS(iLocal_460, 128, 3);
			VEHICLE::SET_VEHICLE_EXTRA(iLocal_460, 6, false);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_460, false) && !PED::IS_PED_INJURED(func_94(0)))
			{
				PED::SET_PED_INTO_VEHICLE(func_94(0), iLocal_460, -1);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_460, false) && !ENTITY::IS_ENTITY_DEAD(func_94(1), false))
			{
				ENTITY::ATTACH_ENTITY_TO_ENTITY(func_94(1), iLocal_460, 0, -0.09f, -1.63f, 0.91f, 0f, 0f, -165.24f, false, false, false, false, 2, true, 0);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_460, false) && !ENTITY::IS_ENTITY_DEAD(iLocal_436[0], false))
			{
				ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_436[0], iLocal_460, 0, -0.67f, -2.81f, 0.91f, 0f, 0f, -147.96f, false, false, false, false, 2, true, 0);
			}
			if (!bLocal_425)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_460, false) && !ENTITY::IS_ENTITY_DEAD(iLocal_436[1], false))
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_436[1], iLocal_460, 0, 0.728f, -2.928f, 0.91f, 0f, 0f, 83.52f, false, false, false, false, 2, true, 0);
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_460, false) && !PED::IS_PED_INJURED(iLocal_436[2]))
			{
				PED::SET_PED_INTO_VEHICLE(iLocal_436[2], iLocal_460, 0);
			}
			CLOCK::SET_CLOCK_TIME(22, 0, 0);
			__LIB_0__::func_433(iLocal_460, -1, 1);
			break;
		case 15:
			func_134();
			break;
	}
	func_1000();
	func_114();
	func_721(0);
}

void func_1087(bool bParam0, bool bParam1)//Position - 0xACB8F
{
	STREAMING::REQUEST_PTFX_ASSET();
	if (bParam0)
	{
		while (!STREAMING::HAS_PTFX_ASSET_LOADED())
		{
			if (bParam1)
			{
				func_112(0);
			}
			else
			{
				SYSTEM::WAIT(0);
			}
		}
	}
}

void func_1091(int iParam0, struct<3> Param1, bool bParam2, bool bParam3)//Position - 0xACCB7
{
	*iParam0 = INTERIOR::GET_INTERIOR_AT_COORDS(Param1);
	INTERIOR::PIN_INTERIOR_IN_MEMORY(*iParam0);
	if (bParam2)
	{
		while (!INTERIOR::IS_INTERIOR_READY(*iParam0))
		{
			if (bParam3)
			{
				func_112(0);
			}
			else
			{
				SYSTEM::WAIT(0);
			}
		}
	}
}

void func_1092()//Position - 0xACCF6
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	float fVar3;
	bool bVar4;
	bool bVar5;
	struct<3> Var6;
	float fVar7;
	bool bVar8;
	bool bVar9;
	struct<3> Var10;
	float fVar11;
	bVar0 = false;
	bVar1 = false;
	Var2 = { Local_518 };
	fVar3 = 0f;
	bVar4 = false;
	bVar5 = false;
	Var6 = { Local_518 };
	fVar7 = 0f;
	bVar8 = false;
	bVar9 = false;
	Var10 = { Local_518 };
	fVar11 = 0f;
	func_133();
	if (bLocal_382)
	{
		func_935(Local_748.f_24);
	}
	else
	{
		func_935(Local_748.f_24);
	}
	func_129(0, 0);
	func_1093(0, 1, 0);
	func_125(joaat("WEAPON_PISTOL"), 1, 0, 0);
	switch (iLocal_369)
	{
		case 0:
			break;
		case 2:
			break;
		case 3:
			bVar0 = true;
			bVar1 = true;
			Var2 = { Local_301[0 /*3*/] };
			fVar3 = fLocal_302[0];
			bVar4 = false;
			bVar5 = true;
			Var6 = { Local_301[1 /*3*/] };
			fVar7 = fLocal_302[1];
			bVar8 = false;
			bVar9 = true;
			Var10 = { Local_301[3 /*3*/] };
			fVar11 = fLocal_302[3];
			break;
		case 4:
			bVar0 = true;
			bVar1 = true;
			Var2 = { Local_309 + Vector(0f, 0f, 2f) };
			fVar3 = fLocal_302[0];
			bVar4 = false;
			bVar5 = true;
			Var6 = { Local_309 + Vector(0f, 0f, -2f) };
			fVar7 = fLocal_302[1];
			bVar8 = false;
			break;
		case 5:
			bVar0 = true;
			bVar1 = true;
			Var2 = { Local_309 + Vector(0f, 0f, 2f) };
			fVar3 = fLocal_302[0];
			bVar4 = false;
			bVar5 = true;
			Var6 = { Local_309 + Vector(0f, 0f, -2f) };
			fVar7 = fLocal_302[1];
			bVar8 = false;
			break;
		case 6:
			bVar0 = true;
			bVar1 = true;
			Var2 = { Local_309 + Vector(0f, 0f, 2f) };
			fVar3 = fLocal_302[0];
			bVar4 = true;
			bVar5 = true;
			Var6 = { Local_309 + Vector(0f, 0f, -2f) };
			fVar7 = fLocal_302[1];
			bVar8 = true;
			break;
		case 7:
			bVar0 = true;
			bVar1 = true;
			Var2 = { -631.7494f, -239.9052f, 37.1067f };
			fVar3 = 126.86f;
			bVar4 = true;
			bVar5 = true;
			Var6 = { -633.5875f, -237.0871f, 37.0487f };
			fVar7 = 125.3744f;
			bVar8 = true;
			break;
		case 8:
			bVar0 = true;
			bVar1 = true;
			Var2 = { -633.5875f, -237.0871f, 37.0487f };
			fVar3 = 125.3744f;
			bVar4 = true;
			bVar5 = true;
			Var6 = { -631.7494f, -239.9052f, 37.1067f };
			fVar7 = 126.86f;
			bVar8 = true;
			break;
		case 9:
			bVar0 = true;
			bVar1 = true;
			Var2 = { -633.5875f, -237.0871f, 37.0487f };
			fVar3 = 125.3744f;
			bVar4 = true;
			bVar5 = true;
			Var6 = { -631.7494f, -239.9052f, 37.1067f };
			fVar7 = 126.86f;
			bVar8 = true;
			break;
		case 10:
			bVar0 = true;
			bVar1 = true;
			Var2 = { -633.5875f, -237.0871f, 37.0487f };
			fVar3 = 125.3744f;
			bVar4 = true;
			bVar5 = true;
			Var6 = { -631.7494f, -239.9052f, 37.1067f };
			fVar7 = 126.86f;
			bVar8 = true;
			break;
		case 11:
			bVar0 = true;
			bVar1 = true;
			Var2 = { 1025.4329f, -211.5901f, 42.0321f };
			fVar3 = 182.3647f;
			bVar4 = true;
			bVar5 = true;
			Var6 = { 1021.869f, -223.4366f, 42.282f };
			fVar7 = 187.8349f;
			bVar8 = true;
			break;
		case 12:
			bVar0 = true;
			bVar1 = true;
			Var2 = { Local_329[0 /*3*/] + Vector(0f, 0f, 3f) };
			fVar3 = 125.3744f;
			bVar4 = true;
			bVar5 = !bLocal_425;
			Var6 = { Local_329[1 /*3*/] + Vector(0f, 0f, 3f) };
			fVar7 = 126.86f;
			bVar8 = true;
			bVar9 = true;
			Var10 = { Local_324 };
			fVar11 = 261.2985f;
			break;
		case 13:
			bVar0 = true;
			bVar1 = true;
			Var2 = { Local_329[0 /*3*/] + Vector(0f, 0f, 3f) };
			fVar3 = 125.3744f;
			bVar4 = true;
			bVar5 = !bLocal_425;
			Var6 = { Local_329[1 /*3*/] + Vector(0f, 0f, 3f) };
			fVar7 = 126.86f;
			bVar8 = true;
			bVar9 = true;
			Var10 = { Local_324 };
			fVar11 = 261.2985f;
			break;
		case 14:
			bVar0 = true;
			bVar1 = true;
			Var2 = { -633.5875f, -237.0871f, 37.0487f };
			fVar3 = 125.3744f;
			bVar4 = true;
			bVar5 = !bLocal_425;
			Var6 = { -631.7494f, -239.9052f, 37.1067f };
			fVar7 = 126.86f;
			bVar8 = true;
			bVar9 = true;
			Var10 = { Local_324 };
			fVar11 = 261.2985f;
			break;
		case 15:
			break;
	}
	if (bVar0)
	{
		if (bVar1)
		{
			iLocal_436[0] = __LIB_17__::func_787(0, 0, Var2, fVar3, 0, 1);
			func_9(iLocal_436[0], bVar4, 0);
			func_724(iLocal_436[0]);
		}
		if (bVar5)
		{
			iLocal_436[1] = __LIB_17__::func_787(0, 1, Var6, fVar7, 0, 1);
			func_9(iLocal_436[1], bVar8, 0);
			func_724(iLocal_436[1]);
		}
		if (bVar9)
		{
			iLocal_436[2] = __LIB_17__::func_787(0, 2, Var10, fVar11, 0, 1);
			func_724(iLocal_436[2]);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_436[2], joaat("WEAPON_PISTOL"), 1000, false, true);
			PED::SET_PED_ACCURACY(iLocal_436[2], 50);
		}
	}
	func_721(0);
	__LIB_17__::func_739(0);
	WEAPON::REMOVE_WEAPON_ASSET(joaat("WEAPON_PISTOL"));
}

void func_1093(int iParam0, bool bParam1, bool bParam2)//Position - 0xAD209
{
	__LIB_17__::func_742(iParam0);
	if (bParam1)
	{
		while (!__LIB_17__::func_741(iParam0))
		{
			if (bParam2)
			{
				func_112(0);
			}
			else
			{
				SYSTEM::WAIT(0);
			}
		}
	}
}

void func_1096(bool bParam0)//Position - 0xAD2F5
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	struct<3> Var3;
	float fVar4;
	struct<3> Var5;
	float fVar6;
	bool bVar7;
	bool bVar8;
	bVar0 = false;
	bVar1 = false;
	bVar2 = false;
	Var3 = { Local_518 };
	fVar4 = 0f;
	Var5 = { Local_518 };
	fVar6 = 0f;
	bVar7 = false;
	bVar8 = false;
	switch (iLocal_369)
	{
		case 0:
			break;
		case 2:
			bVar0 = true;
			bVar1 = false;
			bVar2 = false;
			Var5 = { Local_295 };
			fVar6 = 253.4039f;
			bVar8 = false;
			break;
		case 3:
			if (bLocal_382)
			{
				bVar0 = true;
				bVar1 = false;
				bVar2 = true;
				Var3 = { Local_297 };
				fVar4 = 347.5504f;
				Var5 = { Local_295 };
				fVar6 = 253.4039f;
			}
			else
			{
				bVar0 = true;
				bVar1 = true;
				bVar2 = true;
				Var3 = { 705.2056f, -965.38f, 29.3953f };
				fVar4 = 278.2279f;
				Var5 = { Local_296 };
				fVar6 = 198.7614f;
			}
			bVar7 = false;
			bVar8 = false;
			break;
		case 4:
			bVar0 = true;
			bVar1 = true;
			bVar2 = true;
			Var3 = { -578.8325f, -280.2415f, 34.3058f };
			fVar4 = 109.3759f;
			Var5 = { Local_309 + Vector(0f, 2f, 0f) };
			fVar6 = 275.6314f;
			bVar7 = false;
			bVar8 = false;
			break;
		case 5:
			bVar0 = true;
			bVar1 = true;
			bVar2 = true;
			Var3 = { -614.3f, -224.1f, 37.5f };
			fVar4 = 0f;
			Var5 = { -634.8f, -235.7f, 38f };
			fVar6 = 275.6314f;
			bVar7 = false;
			bVar8 = false;
			break;
		case 6:
			bVar0 = true;
			bVar1 = true;
			bVar2 = true;
			Var3 = { -668.6204f, -227.7277f, 36.1821f };
			fVar4 = 0f;
			Var5 = { -669.6204f, -227.7277f, 36.1821f };
			fVar6 = 0f;
			bVar7 = false;
			bVar8 = true;
			break;
		case 7:
			bVar0 = true;
			bVar1 = false;
			bVar2 = true;
			Var3 = { -620.1548f, -232.3427f, 56.1278f };
			fVar4 = 31.6812f;
			if (bLocal_382)
			{
				Var5 = { -630.3759f, -235.1867f, 37.057f };
				fVar6 = 301.4192f;
			}
			else
			{
				Var5 = { -628.4352f, -234.1821f, 37.057f };
				fVar6 = 292.9868f;
			}
			bVar7 = false;
			bVar8 = true;
			break;
		case 8:
			bVar0 = true;
			bVar1 = false;
			bVar2 = true;
			Var3 = { -637.3582f, -241.8902f, 37.118f };
			fVar4 = 300.7801f;
			Var5 = { Local_321 };
			fVar6 = 0f;
			bVar7 = false;
			bVar8 = false;
			break;
		case 9:
			bVar0 = true;
			bVar1 = true;
			bVar2 = true;
			Var3 = { -637.3582f, -241.8902f, 37.118f };
			fVar4 = 300.7801f;
			Var5 = { -631.9154f, -244.42168f, 37.233f };
			fVar4 = 301.4192f;
			bVar7 = true;
			bVar8 = false;
			break;
		case 10:
			bVar0 = true;
			bVar1 = true;
			bVar2 = true;
			Var3 = { -63.0551f, -541.7521f, 30.8795f };
			fVar4 = 219.6241f;
			Var5 = { Local_318 };
			fVar6 = 131.8341f;
			bVar7 = true;
			bVar8 = false;
			break;
		case 11:
			bVar0 = true;
			bVar1 = true;
			bVar2 = true;
			Var3 = { 1021.4163f, -201.1791f, 41.7879f };
			fVar4 = 183.8065f;
			Var5 = { Local_318 };
			fVar6 = 131.8341f;
			bVar7 = true;
			bVar8 = false;
			break;
		case 12:
			bVar0 = true;
			bVar1 = false;
			bVar2 = true;
			Var3 = { 608.8254f, -850.8471f, 9.8777f };
			fVar4 = fLocal_330[2];
			Var5 = { 608.8254f, -850.8471f, 9.8777f };
			fVar6 = fLocal_330[2];
			bVar7 = true;
			bVar8 = false;
			break;
		case 13:
			bVar0 = true;
			bVar1 = false;
			bVar2 = true;
			Var3 = { 636.5349f, -1846.3693f, 8.2475f };
			fVar4 = 175.6113f;
			Var5 = { 636.5349f, -1846.3693f, 8.2475f };
			fVar6 = 175.6113f;
			bVar7 = true;
			bVar8 = false;
			break;
		case 14:
			bVar0 = true;
			bVar1 = false;
			bVar2 = true;
			Var3 = { 636.5349f, -1846.3693f, 8.2475f };
			fVar4 = 175.6113f;
			Var5 = { 636.5349f, -1846.3693f, 8.2475f };
			fVar6 = 175.6113f;
			bVar7 = false;
			bVar8 = false;
			break;
		case 15:
			bVar0 = true;
			bVar1 = true;
			bVar2 = false;
			Var3 = { -13.9543f, -1451.4767f, 29.5418f };
			fVar4 = 0f;
			Var5 = { -13.9543f, -1455.4767f, 29.5418f };
			fVar6 = 0f;
			bVar7 = false;
			bVar8 = false;
			break;
	}
	if (bVar0)
	{
		if (bVar1)
		{
			if (__LIB_15__::func_944() != 1)
			{
				if (!func_941(1))
				{
					while (!func_325(&(Local_519[1]), 1, Var3, 0, 1, 0, 0))
					{
						SYSTEM::WAIT(0);
					}
				}
				__LIB_17__::func_760(&Local_519, 1);
				func_176(&Local_519, 1, 0, 0);
			}
			if (!bParam0)
			{
				ENTITY::SET_ENTITY_COORDS(func_94(1), Var3, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(func_94(1), fVar4);
			}
			else
			{
				__LIB_0__::func_427(Var3, fVar4, 1, 0);
			}
			if (bVar2)
			{
				while (!func_325(&(Local_519[0]), 0, Var5, fVar6, 1, 0, 0))
				{
					SYSTEM::WAIT(0);
				}
			}
		}
		else
		{
			if (__LIB_15__::func_944() != 0)
			{
				if (!func_941(0))
				{
					while (!func_325(&(Local_519[0]), 0, Var5, 0, 1, 0, 0))
					{
						SYSTEM::WAIT(0);
					}
				}
				__LIB_17__::func_760(&Local_519, 0);
				func_176(&Local_519, 1, 0, 0);
			}
			if (!bParam0)
			{
				ENTITY::SET_ENTITY_COORDS(func_94(0), Var5, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(func_94(0), fVar6);
			}
			else
			{
				__LIB_0__::func_427(Var5, fVar6, 1, 0);
			}
			if (bVar2)
			{
				while (!func_325(&(Local_519[1]), 1, Var3, fVar4, 1, 0, 0))
				{
					SYSTEM::WAIT(0);
				}
			}
		}
		if (bVar1 || bVar2)
		{
			func_9(func_94(1), bVar7, 0);
			func_724(func_94(1));
		}
		if (!bVar1 || bVar2)
		{
			func_9(func_94(0), bVar8, 0);
			func_724(func_94(0));
			func_854(0, 1, 1);
		}
	}
}

void func_1098(bool bParam0)//Position - 0xAD969
{
	if (!PED::IS_PED_INJURED(func_94(0)))
	{
		AUDIO::STOP_PED_SPEAKING(func_94(0), false);
	}
	if (bLocal_382)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("JH2A_MISSION_FAIL");
	}
	else
	{
		AUDIO::TRIGGER_MUSIC_EVENT("JH2B_MISSION_FAIL");
	}
	MISC::SET_TIME_SCALE(1f);
	iLocal_716 = 0;
	CUTSCENE::REMOVE_CUTSCENE();
	func_750();
	AUDIO::STOP_AUDIO_SCENES();
	if (iLocal_279 != 0)
	{
		INTERIOR::UNPIN_INTERIOR(iLocal_279);
	}
	AUDIO::STOP_ALARM("JEWEL_STORE_HEIST_ALARMS", true);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	}
	if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
	{
		STREAMING::NEW_LOAD_SCENE_STOP();
	}
	AUDIO::CLEAR_ALL_BROKEN_GLASS();
	CAM::STOP_GAMEPLAY_HINT(false);
	PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
	}
	VEHICLE::SET_RANDOM_TRAINS(true);
	func_649(1);
	iLocal_400 = 0;
	iLocal_401 = 0;
	iLocal_87 = 0;
	iLocal_77 = 0;
	func_1102();
	func_726(1);
	__LIB_17__::func_221(&Local_370, 0);
	AUDIO::STOP_SOUND(Local_737[0 /*3*/]);
	STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
	STREAMING::SET_PED_POPULATION_BUDGET(3);
	if (iLocal_394)
	{
		func_943(0, 0f);
		iLocal_394 = 0;
	}
	func_849(&iLocal_280);
	func_1101(&iLocal_486);
	func_849(&iLocal_487);
	func_849(&iLocal_488);
	func_1101(&uLocal_489);
	func_1101(&uLocal_490);
	func_849(&iLocal_495);
	func_849(&iLocal_496);
	func_849(&iLocal_497);
	iLocal_416 = 0;
	while (iLocal_416 <= 19)
	{
		func_849(&(Local_349[iLocal_416 /*30*/].f_23));
		iLocal_416++;
	}
	func_1101(&iLocal_461);
	func_567(&iLocal_467, 1);
	func_567(&iLocal_468, 1);
	func_567(&iLocal_469, 1);
	func_567(&iLocal_470, 1);
	func_567(&iLocal_348, 1);
	OBJECT::DELETE_OBJECT(&iLocal_471);
	OBJECT::DELETE_OBJECT(&iLocal_472);
	OBJECT::DELETE_OBJECT(&iLocal_473);
	OBJECT::DELETE_OBJECT(&iLocal_455);
	func_1100();
	STREAMING::REMOVE_ANIM_DICT("missheist_jewellester_waitidles");
	STREAMING::REMOVE_ANIM_DICT("move_m@generic_variations@idle@b");
	if (func_1099(13))
	{
		func_565(&(iLocal_456[0]), 1);
		func_565(&(iLocal_456[1]), 1);
		func_565(&(iLocal_456[2]), bParam0);
		func_565(&(iLocal_456[3]), 1);
	}
	else
	{
		iLocal_416 = 0;
		while (iLocal_416 <= 3)
		{
			func_565(&(iLocal_456[iLocal_416]), bParam0);
			iLocal_416++;
		}
	}
	func_565(&iLocal_457, bParam0);
	iLocal_416 = 0;
	while (iLocal_416 <= 5)
	{
		func_565(&(iLocal_458[iLocal_416]), bParam0);
		iLocal_416++;
	}
	func_565(&iLocal_460, bParam0);
	func_565(&iLocal_462, bParam0);
	func_565(&iLocal_463, bParam0);
	func_565(&iLocal_465, 1);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_464))
	{
		if (bParam0)
		{
			VEHICLE::DELETE_MISSION_TRAIN(&iLocal_464);
		}
		else
		{
			VEHICLE::SET_MISSION_TRAIN_AS_NO_LONGER_NEEDED(&iLocal_464, false);
		}
	}
	__LIB_39__::func_104();
	VEHICLE::REMOVE_VEHICLE_RECORDING(1, "JH2BArrive");
	VEHICLE::REMOVE_VEHICLE_RECORDING(2, "JH2BArrive");
	VEHICLE::REMOVE_VEHICLE_RECORDING(1, "JHBENSONEXIT");
	PED::DELETE_PED(&iLocal_447);
	PED::DELETE_PED(&iLocal_448);
	PED::DELETE_PED(&iLocal_449);
	PED::DELETE_PED(&iLocal_450);
	PED::DELETE_PED(&iLocal_451);
	PED::DELETE_PED(&iLocal_452);
	PED::DELETE_PED(&iLocal_276);
	if (func_1099(13))
	{
		iLocal_416 = 0;
		while (iLocal_416 <= 3)
		{
			func_568(&(iLocal_436[iLocal_416]), 1);
			iLocal_416++;
		}
	}
	else
	{
		iLocal_416 = 0;
		while (iLocal_416 <= 3)
		{
			func_568(&(iLocal_436[iLocal_416]), bParam0);
			iLocal_416++;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_519[1]))
	{
		if (!PED::IS_PED_INJURED(Local_519[1]) || PED::IS_PED_INJURED(Local_519[1]))
		{
			func_9(func_94(1), 0, 0);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_519[0]))
	{
		if (!PED::IS_PED_INJURED(Local_519[0]) || PED::IS_PED_INJURED(Local_519[0]))
		{
			func_9(func_94(0), 0, 0);
			func_722(func_94(0), 0);
		}
	}
	if (!bParam0)
	{
		func_568(&(Local_519[1]), bParam0);
		func_568(&(Local_519[0]), bParam0);
	}
	iLocal_416 = 0;
	while (iLocal_416 <= 5)
	{
		func_568(&(iLocal_441[iLocal_416]), bParam0);
		iLocal_416++;
	}
	iLocal_416 = 0;
	while (iLocal_416 <= 3)
	{
		func_568(&(iLocal_442[iLocal_416]), bParam0);
		iLocal_416++;
	}
	iLocal_416 = 0;
	while (iLocal_416 <= 4)
	{
		func_568(&(iLocal_438[iLocal_416]), bParam0);
		iLocal_416++;
	}
	func_568(&iLocal_437, bParam0);
	func_568(&iLocal_440, bParam0);
	func_568(&iLocal_443, bParam0);
	PED::DELETE_PED(&iLocal_444);
	PED::DELETE_PED(&iLocal_445);
	PED::DELETE_PED(&iLocal_446);
	WEAPON::REMOVE_WEAPON_ASSET(joaat("WEAPON_PISTOL"));
	WEAPON::REMOVE_WEAPON_ASSET(iLocal_262);
	WEAPON::REMOVE_WEAPON_ASSET(joaat("WEAPON_PUMPSHOTGUN"));
	WEAPON::REMOVE_WEAPON_ASSET(joaat("WEAPON_SMG"));
	TASK::REMOVE_COVER_POINT(uLocal_479[0]);
	TASK::REMOVE_COVER_POINT(uLocal_479[1]);
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_480);
	TASK::CLEAR_SEQUENCE_TASK(&uLocal_481);
	if (CAM::DOES_CAM_EXIST(iLocal_746))
	{
		CAM::DESTROY_CAM(iLocal_746, false);
	}
	if (CAM::DOES_CAM_EXIST(iLocal_744))
	{
		CAM::DESTROY_CAM(iLocal_744, false);
	}
	if (CAM::DOES_CAM_EXIST(iLocal_745))
	{
		CAM::DESTROY_CAM(iLocal_745, false);
	}
	if (CAM::DOES_CAM_EXIST(Local_751.f_1))
	{
		CAM::SET_CAM_ACTIVE(Local_751.f_1, false);
		CAM::DESTROY_CAM(Local_751.f_1, false);
	}
	CAM::DESTROY_ALL_CAMS(false);
	MISC::SET_TIME_SCALE(1f);
	CAM::RENDER_SCRIPT_CAMS(false, true, 1000, true, false, 0);
	CAM::DESTROY_ALL_CAMS(false);
	func_704(1, 0, 3000, 1, 1);
	CAM::STOP_GAMEPLAY_CAM_SHAKING(true);
	CAM::SET_WIDESCREEN_BORDERS(false, 0);
	if (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
	{
		if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		}
	}
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_498);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_499);
	VEHICLE::REMOVE_VEHICLE_RECORDING(1, "JHGetBike");
	VEHICLE::REMOVE_VEHICLE_RECORDING(2, "JHGetBike");
	VEHICLE::REMOVE_VEHICLE_RECORDING(3, "JHGetBike");
	VEHICLE::REMOVE_VEHICLE_RECORDING(4, "JHGetBike");
	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
}

int func_1099(int iParam0)//Position - 0xADF00
{
	if (bLocal_386)
	{
		if (iLocal_285 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

void func_1100()//Position - 0xADF1B
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (iLocal_738 - 1))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_739[iVar0 /*3*/]);
		Local_739[iVar0 /*3*/].f_1 = 0;
		Local_739[iVar0 /*3*/].f_2 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_740 - 1))
	{
		STREAMING::REMOVE_ANIM_DICT(Local_741[iVar0 /*3*/]);
		Local_741[iVar0 /*3*/].f_1 = 0;
		Local_741[iVar0 /*3*/].f_2 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_742 - 1))
	{
		VEHICLE::REMOVE_VEHICLE_RECORDING(Local_743[iVar0 /*4*/].f_1, Local_743[iVar0 /*4*/]);
		Local_743[iVar0 /*4*/].f_2 = 0;
		Local_743[iVar0 /*4*/].f_3 = 0;
		iVar0++;
	}
}

void func_1101(var uParam0)//Position - 0xADFCB
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		func_849(uParam0[iVar0]);
		iVar0++;
	}
}

void func_1102()//Position - 0xADFF4
{
	func_715();
	bLocal_721 = false;
	bLocal_722 = false;
	bLocal_723 = false;
	iLocal_725 = -1;
	iLocal_726 = -1;
	iLocal_727 = -1;
	iLocal_728 = 0;
	iLocal_729 = 0;
	iLocal_730 = 0;
	iLocal_731 = 0;
	bLocal_732 = false;
}

int func_1103(int iParam0)//Position - 0xAE02C
{
	if (Global_94618 == 1)
	{
		switch (*iParam0)
		{
			case 2:
				return 3;
				break;
			case 3:
				if (bLocal_382)
				{
					return 4;
				}
				else
				{
					return 6;
				}
				break;
			case 4:
				return 5;
				break;
			case 5:
				return 7;
				break;
			case 6:
				return 7;
				break;
			case 7:
				return 8;
				break;
			case 8:
				return 9;
				break;
			case 9:
				return 10;
				break;
			case 10:
				return 11;
				break;
			case 11:
				return 13;
				break;
			case 12:
				return 13;
				break;
			case 13:
			case 14:
				return 15;
				break;
			}
	}
	return *iParam0;
}

void func_1106()//Position - 0xAE14B
{
	if (__LIB_15__::func_944() == 0)
	{
		bLocal_2041 = true;
	}
	else
	{
		bLocal_2041 = false;
	}
	if (bLocal_382)
	{
		iLocal_262 = joaat("WEAPON_ASSAULTRIFLE");
	}
	else
	{
		iLocal_262 = joaat("WEAPON_CARBINERIFLE");
	}
	AUDIO::SET_AUDIO_FLAG("ScriptedConvListenerMaySpeak", true);
	PED::REMOVE_SCENARIO_BLOCKING_AREAS();
	PED::ADD_SCENARIO_BLOCKING_AREA(713.7754f, -996.4443f, 22.3085f, 715.7624f, -991.7067f, 25.6214f, false, true, true, true);
	PED::ADD_SCENARIO_BLOCKING_AREA(Vector(42.108574f, -241.56905f, -636.59955f) - Vector(5.75f, 9.5f, 8.75f), -603.6248f, -208.9597f, 53.7091f, false, true, true, true);
	PED::ADD_SCENARIO_BLOCKING_AREA(-586.8279f, -310.899f, 27.7631f, -574.8138f, -244.2133f, 41.2733f, false, true, true, true);
	PED::ADD_SCENARIO_BLOCKING_AREA(Vector(37.381374f, -227.73529f, -669.31287f) - Vector(1.5f, 2.25f, 14.75f), Vector(37.381374f, -227.73529f, -669.31287f) + Vector(1.5f, 2.25f, 14.75f), false, true, true, true);
	PED::SET_PED_NON_CREATION_AREA(Vector(37.381374f, -227.73529f, -669.31287f) - Vector(1.5f, 2.25f, 14.75f), Vector(37.381374f, -227.73529f, -669.31287f) + Vector(1.5f, 2.25f, 14.75f));
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
	func_1118();
	func_1113();
	func_1111();
	__LIB_0__::func_54(0, 0);
	__LIB_0__::func_552(0);
	VEHICLE::DELETE_ALL_TRAINS();
	__LIB_0__::func_424(1);
	func_1108(sLocal_501, 0, 1, 1);
	func_984();
	PED::ADD_RELATIONSHIP_GROUP("SHOP", &iLocal_498);
	PED::ADD_RELATIONSHIP_GROUP("COPPERS", &iLocal_499);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, joaat("PLAYER"), iLocal_498);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("PLAYER"), iLocal_499);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_499, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_499, iLocal_498);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_498, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_498, iLocal_499);
	if (!PED::IS_PED_INJURED(func_94(0)))
	{
		if (PED::IS_PED_DUCKING(func_94(0)))
		{
			PED::SET_PED_DUCKING(func_94(0), false);
		}
	}
	MISC::CLEAR_AREA_OF_PEDS(Local_296, 2f, 0);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
	PED::CLEAR_PED_BLOOD_DAMAGE(PLAYER::PLAYER_PED_ID());
	PED::RESET_PED_VISIBLE_DAMAGE(PLAYER::PLAYER_PED_ID());
	__LIB_16__::func_1();
	iLocal_88 = __LIB_13__::func_804(0);
	iLocal_89 = __LIB_13__::func_804(1);
	if (bLocal_382)
	{
		GRAPHICS::ADD_TCMODIFIER_OVERRIDE("NEW_Jewel", "NEW_jewel_EXIT");
	}
}

void func_1108(char* sParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0xAE3BD
{
	HUD::REQUEST_ADDITIONAL_TEXT(sParam0, iParam1);
	if (bParam2)
	{
		while (!HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED(sParam0, iParam1))
		{
			if (bParam3)
			{
				func_112(0);
			}
			else
			{
				SYSTEM::WAIT(0);
			}
		}
	}
}

void func_1111()//Position - 0xAE415
{
	Local_299[0 /*3*/] = { -639.42f, -237.89f, 37.45f };
	fLocal_300[0] = 59.5395f;
	Local_299[1 /*3*/] = { -638.6117f, -242.9966f, 37.1304f };
	fLocal_300[1] = 42.6795f;
	Local_299[2 /*3*/] = { -634.4958f, -241.2315f, 37.1219f };
	fLocal_300[2] = 40.5422f;
	Local_301[0 /*3*/] = { 708.2659f, -966.5298f, 29.4334f };
	fLocal_302[0] = 26.5931f;
	Local_301[1 /*3*/] = { 706.1772f, -966.1973f, 29.4598f };
	fLocal_302[1] = 347.5504f;
	Local_301[2 /*3*/] = { 708.775f, -963.8549f, 29.4334f };
	fLocal_302[2] = 132.5186f;
	Local_301[3 /*3*/] = { 709.2004f, -965.6567f, 29.4334f };
	fLocal_302[3] = 101.424f;
	Local_301[4 /*3*/] = { 707.5271f, -962.924f, 29.4334f };
	fLocal_302[4] = 176.8285f;
	Local_314[0 /*3*/] = { -583.6948f, -283.4582f, 34.2523f };
	Local_314[1 /*3*/] = { -596.4763f, -284.1328f, 40.6868f };
	Local_314[2 /*3*/] = { -596.0881f, -293.9532f, 40.6868f };
	Local_314[3 /*3*/] = { -596.8112f, -294.6171f, 47.0676f };
	Local_314[4 /*3*/] = { -616.3251f, -239.7347f, 54.6582f };
	Local_314[5 /*3*/] = { -625.7886f, -216.2038f, 58.1056f };
	Local_327 = { 793.2487f, -462.3718f, 28.3002f };
	fLocal_328 = 75.2595f;
	Local_329[0 /*3*/] = { 722.6227f, -441.2054f, 16.2914f };
	fLocal_330[0] = 126.6293f;
	Local_329[1 /*3*/] = { 743.0473f, -463.6686f, 16.4246f };
	fLocal_330[1] = 122.2695f;
	Local_329[2 /*3*/] = { 745.7171f, -427.7663f, 18.2352f };
	fLocal_330[2] = 116.5734f;
	Local_336 = { -629.03754f, -232.82568f, 37.208f };
	fLocal_337 = 103.24883f;
	Local_338[0 /*3*/] = { -622.0082f, -230.51639f, 37.208f };
	fLocal_339[0] = 57.439987f;
	Local_338[1 /*3*/] = { -625.4323f, -235.85071f, 37.208f };
	fLocal_339[1] = 41.509983f;
	Local_338[2 /*3*/] = { -626.0464f, -236.60185f, 37.208f };
	fLocal_339[2] = 18.799986f;
	Local_338[3 /*3*/] = { -623.9794f, -232.24095f, 37.208f };
	fLocal_339[3] = 6.109993f;
	Local_338[4 /*3*/] = { -623.52985f, -234.93382f, 37.208f };
	fLocal_339[4] = -22.491545f;
	bLocal_388 = false;
	iLocal_394 = 0;
	bLocal_389 = false;
	bLocal_390 = false;
	iLocal_391 = 0;
	iLocal_392 = 0;
	func_1112(&(Local_349[0 /*30*/]), -627.735f, -234.439f, 37.875f, -628.187f, -233.538f, 37.0946f, 0f, 0f, -144f, Local_748.f_256[0], 99750, Local_748.f_278);
	func_1112(&(Local_349[1 /*30*/]), -626.716f, -233.685f, 37.8583f, -627.136f, -232.775f, 37.0946f, 0f, 0f, -144f, Local_748.f_256[1], 159600, Local_748.f_278);
	func_1112(&(Local_349[2 /*30*/]), -627.35f, -234.947f, 37.8531f, -626.62f, -235.725f, 37.0946f, 0f, 0f, 36f, Local_748.f_256[2], 104737, Local_748.f_280);
	func_1112(&(Local_349[3 /*30*/]), -626.298f, -234.193f, 37.8492f, -625.57f, -234.962f, 37.0946f, 0f, 0f, 36f, Local_748.f_256[3], 154613, Local_748.f_281);
	func_1112(&(Local_349[4 /*30*/]), -626.399f, -239.132f, 37.8616f, -626.894f, -238.2f, 37.0856f, 0f, 0f, -144f, Local_748.f_256[4], 39900, Local_748.f_279);
	func_1112(&(Local_349[5 /*30*/]), -625.376f, -238.358f, 37.8687f, -625.867f, -237.458f, 37.0946f, 0f, 0f, -144f, Local_748.f_256[5], 59850, Local_748.f_280);
	func_1112(&(Local_349[6 /*30*/]), -625.517f, -227.421f, 37.86f, -624.738f, -228.2f, 37.0946f, 0f, 0f, 36f, Local_748.f_256[6], 219450, Local_748.f_280);
	func_1112(&(Local_349[7 /*30*/]), -624.467f, -226.653f, 37.861f, -623.688f, -227.437f, 37.0946f, 0f, 0f, 36f, Local_748.f_256[7], 299250, Local_748.f_281);
	func_1112(&(Local_349[8 /*30*/]), -623.8118f, -228.6336f, 37.8522f, -624.293f, -227.831f, 37.0946f, 0f, 0f, -143.511f, Local_748.f_256[8], 305235, Local_748.f_279);
	func_1112(&(Local_349[9 /*30*/]), -624.1267f, -230.7476f, 37.8618f, -624.939f, -231.247f, 37.0946f, 0f, 0f, -54.13f, Local_748.f_256[9], 448793, Local_748.f_281);
	func_1112(&(Local_349[10 /*30*/]), -621.7181f, -228.9636f, 37.8425f, -620.864f, -228.481f, 37.0946f, 0f, 0f, 126.925f, Local_748.f_256[10], 546125, Local_748.f_280);
	Local_349[10 /*30*/].f_9 = { -620.8779f, -227.7553f, 38.7692f };
	Local_349[10 /*30*/].f_12 = { -15.0723f, -0.325f, 147.1275f };
	Local_349[10 /*30*/].f_21 = 35.207096f;
	Local_349[10 /*30*/].f_15 = { -620.4113f, -227.7727f, 38.6039f };
	Local_349[10 /*30*/].f_18 = { -1.7684f, 0.1702f, 123.3868f };
	Local_349[10 /*30*/].f_22 = 35.207096f;
	func_1112(&(Local_349[11 /*30*/]), -622.7541f, -232.614f, 37.8638f, -623.3596f, -233.2296f, 37.0946f, 0f, 0f, -52.984f, Local_748.f_256[11], 498750, Local_748.f_278);
	Local_349[11 /*30*/].f_9 = { -622.03595f, -233.60818f, 38.449856f };
	Local_349[11 /*30*/].f_12 = { -1.763292f, -2.630027f, 46.963608f };
	Local_349[11 /*30*/].f_21 = 39.749928f;
	Local_349[11 /*30*/].f_15 = { -621.4892f, -232.97182f, 38.6356f };
	Local_349[11 /*30*/].f_18 = { -8.36115f, -2.628445f, 86.69191f };
	Local_349[11 /*30*/].f_22 = 37.115498f;
	func_1112(&(Local_349[12 /*30*/]), -620.3262f, -230.829f, 37.8578f, -619.408f, -230.1969f, 37.0946f, 0f, 0f, 126.352f, Local_748.f_256[12], 685775, Local_748.f_278);
	func_1112(&(Local_349[13 /*30*/]), -620.6465f, -232.9308f, 37.8407f, -620.184f, -233.729f, 37.0946f, 0f, 0f, 36.398f, Local_748.f_256[13], 118450, Local_748.f_281);
	Local_349[13 /*30*/].f_9 = { -618.883f, -233.40976f, 38.15371f };
	Local_349[13 /*30*/].f_12 = { -2.226855f, -2.630027f, 64.844284f };
	Local_349[13 /*30*/].f_21 = 40.18032f;
	Local_349[13 /*30*/].f_15 = { -618.9713f, -233.348f, 38.638f };
	Local_349[13 /*30*/].f_18 = { -1.0873f, -1.7225f, 84.9176f };
	Local_349[13 /*30*/].f_22 = 40.18032f;
	func_1112(&(Local_349[14 /*30*/]), -619.978f, -234.93f, 37.8537f, -620.44f, -234.084f, 37.0946f, 0f, 0f, -144f, Local_748.f_256[14], 449375, Local_748.f_278);
	func_1112(&(Local_349[15 /*30*/]), -618.937f, -234.16f, 37.8425f, -619.39f, -233.32f, 37.0946f, 0f, 0f, -144f, Local_748.f_256[15], 59250, Local_748.f_280);
	func_1112(&(Local_349[16 /*30*/]), -620.163f, -226.212f, 37.8266f, -620.797f, -226.79f, 37.0946f, 0f, 0f, -54f, Local_748.f_256[16], 59350, Local_748.f_278);
	func_1112(&(Local_349[17 /*30*/]), -619.384f, -227.259f, 37.8342f, -620.055f, -227.817f, 37.0856f, 0f, 0f, -54f, Local_748.f_256[17], 99250, Local_748.f_279);
	func_1112(&(Local_349[18 /*30*/]), -618.019f, -229.115f, 37.8302f, -618.679f, -229.704f, 37.0946f, 0f, 0f, -54f, Local_748.f_256[18], 99250, Local_748.f_280);
	func_1112(&(Local_349[19 /*30*/]), -617.249f, -230.156f, 37.8201f, -617.937f, -230.731f, 37.0856f, 0f, 0f, -54f, Local_748.f_256[19], 439400, Local_748.f_279);
}

void func_1112(var uParam0, struct<3> Param1, struct<3> Param2, struct<3> Param3, var uParam4, int iParam5, var uParam6)//Position - 0xAEDE3
{
	*uParam0 = { Param1 };
	uParam0->f_3 = { Param2 };
	uParam0->f_6 = { Param3 };
	uParam0->f_24 = 0;
	uParam0->f_25 = uParam4;
	uParam0->f_26 = iParam5;
	uParam0->f_27 = uParam6;
}

void func_1113()//Position - 0xAEE1E
{
	func_1117();
	func_1116(joaat("prop_ld_test_01"));
	func_1116(Local_748.f_0);
	func_1116(Local_748.f_1);
	func_1116(Local_748.f_2);
	func_1116(Local_748.f_3);
	iLocal_416 = 0;
	while (iLocal_416 <= 4)
	{
		func_1116(Local_748.f_4[iLocal_416]);
		iLocal_416++;
	}
	func_1116(Local_748.f_10);
	func_1116(Local_748.f_11);
	func_1116(Local_748.f_12);
	func_1116(Local_748.f_14);
	func_1116(Local_748.f_15);
	func_1116(Local_748.f_16);
	func_1116(Local_748.f_17);
	func_1116(Local_748.f_18);
	func_1116(Local_748.f_19);
	func_1116(Local_748.f_20);
	func_1116(Local_748.f_21);
	func_1116(Local_748.f_24);
	func_1116(Local_748.f_25);
	func_1116(joaat("IG_TrafficWarden"));
	func_1116(Local_748.f_22);
	func_1116(Local_748.f_23);
	func_1115(Local_748.f_35);
	func_1115(Local_748.f_35);
	func_1115(Local_748.f_61);
	func_1115(Local_748.f_60);
	func_1114(Local_748.f_82, Local_748.f_84);
	func_1114(Local_748.f_81, Local_748.f_84);
	func_1114(Local_748.f_83, Local_748.f_84);
	func_1114(Local_748.f_83, Local_748.f_85);
	func_1114(Local_748.f_83, Local_748.f_86);
	func_1114("JHLateCops", 1);
	func_1114("JHLateCops", 2);
	func_1114("JHLateCops", 3);
	func_1114("JHUBER", 717);
	func_1114(Local_748.f_83, 998);
	func_1114("JHArrive", 1);
	func_1114("JHArrive", 2);
	func_1114("JHArrive", 3);
	func_1114("JHBENSONEXIT", 1);
	func_1114("JHBugStrExit", 1);
	func_1114("JH2BArrive", 1);
	func_1114("JH2BArrive", 2);
}

void func_1114(char* sParam0, int iParam1)//Position - 0xAEFEF
{
	if (iLocal_742 < 19)
	{
		Local_743[iLocal_742 /*4*/] = sParam0;
		Local_743[iLocal_742 /*4*/].f_1 = iParam1;
		Local_743[iLocal_742 /*4*/].f_2 = 0;
		Local_743[iLocal_742 /*4*/].f_3 = 0;
		iLocal_742++;
	}
}

void func_1115(char* sParam0)//Position - 0xAF036
{
	if (iLocal_740 < 50)
	{
		Local_741[iLocal_740 /*3*/] = sParam0;
		Local_741[iLocal_740 /*3*/].f_1 = 0;
		Local_741[iLocal_740 /*3*/].f_2 = 0;
		iLocal_740++;
	}
}

void func_1116(int iParam0)//Position - 0xAF071
{
	if (iLocal_738 < 35)
	{
		Local_739[iLocal_738 /*3*/] = iParam0;
		Local_739[iLocal_738 /*3*/].f_1 = 0;
		Local_739[iLocal_738 /*3*/].f_2 = 0;
		iLocal_738++;
	}
}

void func_1117()//Position - 0xAF0AC
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 34)
	{
		Local_739[iVar0 /*3*/] = 0;
		Local_739[iVar0 /*3*/].f_1 = 0;
		Local_739[iVar0 /*3*/].f_2 = 0;
		iVar0++;
	}
	iLocal_738 = 0;
	iVar0 = 0;
	while (iVar0 <= 49)
	{
		Local_741[iVar0 /*3*/] = "missing";
		Local_741[iVar0 /*3*/].f_1 = 0;
		Local_741[iVar0 /*3*/].f_2 = 0;
		iVar0++;
	}
	iLocal_740 = 0;
	iVar0 = 0;
	while (iVar0 <= 18)
	{
		Local_743[iVar0 /*4*/] = "missing";
		Local_743[iVar0 /*4*/].f_1 = -1;
		Local_743[iVar0 /*4*/].f_2 = 0;
		Local_743[iVar0 /*4*/].f_3 = 0;
		iVar0++;
	}
	iLocal_742 = 0;
}

void func_1118()//Position - 0xAF15D
{
	if (__LIB_0__::func_564(__LIB_16__::func_594(0, 0)) == 2 || __LIB_0__::func_564(__LIB_16__::func_594(0, 0)) == 1)
	{
		Local_748.f_0 = joaat("sanchez");
		Local_81 = { 0f, 0f, 0f };
		fLocal_749 = 5f;
	}
	else
	{
		Local_748.f_0 = joaat("bati2");
		Local_81 = { 0f, 0f, -0.1227f };
		fLocal_749 = 20f;
	}
	Local_748.f_1 = joaat("primo");
	if (bLocal_382)
	{
		Local_748.f_2 = joaat("burrito2");
	}
	else
	{
		Local_748.f_2 = joaat("burrito3");
	}
	Local_748.f_3 = joaat("U_M_M_JewelSec_01");
	Local_748.f_4[0] = joaat("A_F_Y_Business_02");
	Local_748.f_4[1] = joaat("IG_JewelAss");
	Local_748.f_4[2] = joaat("A_M_Y_BevHills_01");
	Local_748.f_4[3] = joaat("A_M_Y_BevHills_01");
	if (bLocal_382)
	{
		Local_748.f_4[4] = joaat("A_M_Y_BevHills_01");
	}
	else
	{
		Local_748.f_4[4] = joaat("A_F_Y_Business_02");
	}
	Local_748.f_10 = joaat("A_F_M_BevHills_02");
	Local_748.f_11 = joaat("prop_gas_grenade");
	Local_748.f_12 = joaat("benson");
	Local_748.f_14 = joaat("police3");
	Local_748.f_15 = joaat("S_M_Y_Cop_01");
	Local_748.f_16 = joaat("prop_phone_ing");
	Local_748.f_17 = joaat("prop_cs_heist_bag_02");
	Local_748.f_18 = joaat("prop_j_neck_disp_02");
	Local_748.f_19 = joaat("prop_jewel_02a");
	Local_748.f_20 = joaat("prop_jewel_04a");
	Local_748.f_21 = joaat("prop_jewel_04b");
	Local_748.f_22 = joaat("IG_LesterCrest");
	Local_748.f_23 = joaat("prop_cs_walking_stick");
	Local_748.f_24 = joaat("HC_Gunman");
	Local_748.f_25 = joaat("HC_Driver");
	Local_748.f_26 = joaat("HC_Hacker");
	Local_748.f_35 = "missheist_jewel";
	Local_748.f_36 = "cam_smash_case_d";
	Local_748.f_37 = "smash_case_e";
	Local_748.f_38 = "cam_smash_case_e";
	Local_748.f_39 = "smash_case_necklace";
	Local_748.f_40 = "cam_smash_case_necklace";
	Local_748.f_41 = "smash_case_necklace_skull";
	Local_748.f_42 = "smash_case_tray_a";
	Local_748.f_43 = "cam_smash_case_tray_a";
	Local_748.f_44 = "smash_case_tray_b";
	Local_748.f_45 = "cam_smash_case_tray_b";
	Local_748.f_46 = "gassed_npc_assistant";
	Local_748.f_47 = "gassed_npc_guard";
	Local_748.f_48 = "2b_guard_onfloor_loop";
	Local_748.f_49[0] = "gassed_npc_customer1";
	Local_748.f_49[1] = "gassed_npc_customer2";
	Local_748.f_49[2] = "gassed_npc_customer3";
	Local_748.f_49[3] = "gassed_npc_customer4";
	Local_748.f_54 = "manageress_enter";
	Local_748.f_55 = "manageress_exit";
	Local_748.f_56 = "manageress_kneel_intro";
	Local_748.f_57 = "manageress_kneel_loop";
	Local_748.f_58 = "manageress_loop";
	Local_748.f_59 = "manageress_enter_cam";
	Local_748.f_28 = "do_it";
	Local_748.f_29 = "time";
	Local_748.f_30 = "fold_arms_oh_yeah";
	Local_748.f_31 = "im_telling_you";
	Local_748.f_32 = "but_why";
	Local_748.f_33 = "damn";
	Local_748.f_34 = "despair";
	Local_748.f_61 = "missbigscore2big_2";
	Local_748.f_62 = "idle_e";
	Local_748.f_60 = "missHeist_Jewel@Switch";
	Local_748.f_64 = "switchcam_incar_buddy";
	Local_748.f_63 = "switchcam_incar_mic";
	Local_748.f_76[0] = "JHCopTrap1st";
	Local_748.f_76[1] = "JHCopTrap2nd";
	Local_748.f_76[2] = "JHCopTrap3rd";
	Local_748.f_76[3] = "JHCopTrap4th";
	Local_748.f_81 = "JHTruckExit";
	Local_748.f_82 = "JHTruckLead";
	Local_748.f_83 = "JHUber";
	Local_748.f_84 = 650;
	Local_748.f_85 = 998;
	Local_748.f_86 = 59;
	Local_748.f_87 = 0;
	Local_748.f_88 = 6689;
	Local_748.f_89 = 9792;
	Local_748.f_90 = 11768;
	Local_748.f_91 = 13744;
	Local_748.f_92 = 20344;
	Local_748.f_93 = 22413;
	Local_748.f_94 = 25325;
	Local_748.f_95 = 26112;
	Local_748.f_96 = 36000;
	Local_748.f_97 = 35737;
	Local_748.f_98 = 35737;
	Local_748.f_99 = 40891;
	Local_748.f_100 = 41600;
	Local_748.f_101 = 41377;
	Local_748.f_102 = 45023;
	Local_748.f_103 = 47653;
	Local_748.f_104 = 49412;
	Local_748.f_105 = 54300;
	Local_748.f_106 = 65621;
	Local_748.f_107 = 68548;
	Local_748.f_108 = 78070;
	Local_748.f_109 = 79936;
	Local_748.f_110 = 83350;
	Local_748.f_111 = 93149;
	Local_748.f_112 = 103173;
	Local_748.f_113 = 105225;
	Local_748.f_114 = 113288;
	Local_748.f_115 = 123606;
	Local_748.f_116 = 132227;
	Local_748.f_117 = 134596;
	Local_748.f_118 = 140440;
	Local_748.f_119 = "JH_2A_INTp4";
	Local_748.f_120 = "jh_2b_int";
	Local_748.f_121 = "JH_2A_MCS_1";
	Local_748.f_122 = "JH_2B_MCS_1";
	Local_748.f_123 = "Jh_2_fin_a_mcs4_a1";
	Local_748.f_124 = "Jh2_fina_mcs4_a1a2";
	Local_748.f_125 = "JH_PLAN";
	Local_748.f_126 = "JH_CARLVE";
	Local_748.f_127 = "JH_MOVE";
	Local_748.f_128 = "JH_TRAP";
	Local_748.f_129 = "JH_TRUCK";
	Local_748.f_130 = "JH_MOUNT";
	Local_748.f_131 = "JH_ROOF";
	Local_748.f_132 = "JH_HCKA10";
	Local_748.f_133 = "JH_HCKA20";
	Local_748.f_134 = "JH_HCKA30";
	Local_748.f_135 = "JH_HCKA40";
	Local_748.f_136 = "JH_HCKA50";
	Local_748.f_137 = "JH_HCKA60";
	Local_748.f_138 = "JH_HCKB10";
	Local_748.f_139 = "JH_HCKB20";
	Local_748.f_140 = "JH_HCKB30";
	Local_748.f_141 = "JH_HCKB40";
	Local_748.f_142 = "JH_HCKAGO";
	Local_748.f_143 = "JH_HCKBGO";
	Local_748.f_144 = "JH_HCKA00";
	Local_748.f_145 = "JH_HCKB00";
	Local_748.f_146 = "JH_HCKLT";
	Local_748.f_147 = "JH_MENC";
	Local_748.f_148 = "JH_BKCRSH";
	Local_748.f_149 = "JH_PLCSC2";
	Local_748.f_150 = "JH_FRLST";
	Local_748.f_151 = "JH_PLCSC3";
	Local_748.f_152 = "JH_MMISS";
	Local_748.f_153 = "JH_CTRL";
	switch (__LIB_0__::func_564(__LIB_16__::func_594(0, 2)))
	{
		case 2:
			Local_748.f_155 = "JH_WALK1";
			break;
		case 1:
			Local_748.f_155 = "JH_WALK2";
			break;
		case 0:
			Local_748.f_155 = "JH_WALK3";
			break;
	}
	Local_748.f_156 = "JH_VAN";
	Local_748.f_157 = "JH_MANAG";
	Local_748.f_158 = "JH_FMANA";
	Local_748.f_159 = "JH_RUN";
	Local_748.f_160 = "JH_CLEFT";
	Local_748.f_161 = "JH_CJUMP";
	Local_748.f_162 = "JH_CTUNN";
	Local_748.f_163 = "JH_CRAMP";
	Local_748.f_164 = "JH_AIM";
	Local_748.f_165 = "JH_AIMKO";
	Local_748.f_166 = "JH_BUMPM";
	Local_748.f_167 = "JH_BUMPF";
	Local_748.f_168 = "JH_BOYS";
	Local_748.f_169 = "JH_VAN";
	Local_748.f_170 = "JH_SLOWF";
	Local_748.f_171 = "JH_FASTF";
	Local_748.f_172 = "JH_BEHND";
	Local_748.f_173 = "JH_FASTM";
	Local_748.f_174 = "JH_SLOWM";
	Local_748.f_175 = "JH_PLAN2";
	Local_748.f_176 = "JH_SROOF";
	Local_748.f_177 = "JH_APLAN2";
	Local_748.f_178 = "JH_GSTOP";
	Local_748.f_179 = "JH_LVEGB";
	Local_748.f_180 = "JH_LVEGG";
	Local_748.f_181 = "JH_LVEGM";
	Local_748.f_182 = "JH_LVEMB";
	Local_748.f_183 = "JH_LVEBB";
	Local_748.f_184 = "JH_COPG1";
	Local_748.f_185 = "JH_COPG2";
	Local_748.f_186 = "JH_COPM";
	Local_748.f_187 = "JH_COPB1";
	Local_748.f_188 = "JH_COPB2";
	Local_748.f_189 = "JH_ROOFC";
	Local_748.f_190 = "JH_SHTCOP";
	if (bLocal_382)
	{
		if (func_117())
		{
			Local_748.f_191 = "JH_CRSPND";
		}
		else if (func_116())
		{
			Local_748.f_191 = "JH_RESPG";
		}
		else if (func_115())
		{
			Local_748.f_191 = "JH_RESPN";
		}
	}
	else if (func_120())
	{
		Local_748.f_191 = "JH_RESP_ET";
	}
	else if (func_118())
	{
		Local_748.f_191 = "JH_RESP_KD";
	}
	Local_748.f_192 = "JH_COPC1";
	Local_748.f_193 = "JH_COPC2";
	Local_748.f_194 = "JH_LOSTF";
	Local_748.f_195 = "JH_FRENCT";
	Local_748.f_196 = "JH_CRENC1";
	Local_748.f_197 = "JH_CRENC2";
	Local_748.f_198 = "JH_SHOOT";
	Local_748.f_199 = "JH_GOAWAY";
	Local_748.f_202 = "F_ABANDON";
	Local_748.f_203 = "F_KILLMICHAEL";
	Local_748.f_204 = "F_KILLTREVOR";
	Local_748.f_205 = "F_KILLCREW";
	Local_748.f_206 = "F_DESTROYBIKE";
	Local_748.f_216 = "F_DESTROYCAR";
	Local_748.f_207 = "F_LOSECHASE";
	Local_748.f_208 = "F_LOSEBIKE";
	Local_748.f_209 = "F_LOSEMICHAEL";
	Local_748.f_210 = "F_LOSEFRANKLIN";
	Local_748.f_211 = "F_LOSETREVOR";
	Local_748.f_212 = "F_LOSECREW";
	Local_748.f_213 = "F_KILLFRANK";
	Local_748.f_214 = "F_CALLPOLICE";
	Local_748.f_215 = "F_DESTROYVAN";
	Local_748.f_217 = "F_DESTROYTRUCK";
	Local_748.f_201 = "M_FAIL";
	Local_748.f_228 = "CMN_FLEAVE" /* GXT: ~s~Return to ~b~Franklin.~s~ */;
	Local_748.f_229 = "CMN_MLEAVE" /* GXT: ~s~Return to ~b~Michael.~s~ */;
	Local_748.f_200 = "G_GETVEHICLE";
	Local_748.f_218 = "G_DRIVETOSTORE";
	Local_748.f_219 = "G_GETTOROOF";
	Local_748.f_220 = "G_STEALJEWELRY";
	Local_748.f_221 = "G_LEAVE";
	Local_748.f_222 = "G_BIKE";
	Local_748.f_223 = "G_FOLLOWCREW";
	Local_748.f_224 = "G_COPS";
	Local_748.f_225 = "G_GUARD";
	Local_748.f_226 = "G_GETBACKCAR";
	Local_748.f_227 = "G_GETINCAR";
	Local_748.f_230 = "G_PICKCREW";
	Local_748.f_231 = "G_GETINVAN";
	Local_748.f_232 = "G_GETBACKVAN";
	Local_748.f_233 = "G_GETBACKTRUCK";
	Local_748.f_234 = "G_STRMSIDE";
	Local_748.f_235 = "G_DOSWCHM";
	Local_748.f_236 = "G_DOSWCHF";
	Local_748.f_237 = "H_HELPCLIMB";
	Local_748.f_238 = "H_HELPSTEAL";
	Local_748.f_239 = "H_HELPFOCUS";
	Local_748.f_240 = "H_VIEWMIKE";
	Local_748.f_241 = "H_VIEWFRNK";
	Local_748.f_242 = "H_SWITCHM";
	Local_748.f_243 = "H_SWITCHF";
	Local_748.f_244 = "SCRIPT\JWL_HA_RAID_STORE";
	Local_748.f_245 = "SCRIPT\JWL_HEIST_RAID_GLASS_SMASH";
	Local_748.f_246 = "SCRIPT\JWL_HEIST_RAID_RAYFIRE_CRASH";
	Local_748.f_247 = "SCRIPT\Underwater";
	Local_748.f_248 = "JWL_HA_RAYFIRE_CRASH";
	Local_748.f_249 = "JWL_HA_SMASH_CABINET";
	Local_748.f_250 = "JWL_HA_SMASH_CABINET_NPC";
	Local_748.f_251 = "JWL_HA_ROOFTOP_AIRCON";
	Local_748.f_252 = "JWL_HA_ALARM_BELL";
	Local_748.f_253 = "JWL_HA_GAS_ESCAPE";
	Local_748.f_254 = "JWL_HA_GAS_MASK";
	Local_748.f_255 = "jewel_heist_counter";
	Local_748.f_256[0] = "JWL_00";
	Local_748.f_256[1] = "JWL_01";
	Local_748.f_256[2] = "JWL_02";
	Local_748.f_256[3] = "JWL_03";
	Local_748.f_256[4] = "JWL_04";
	Local_748.f_256[5] = "JWL_05";
	Local_748.f_256[6] = "JWL_06";
	Local_748.f_256[7] = "JWL_07";
	Local_748.f_256[8] = "JWL_08";
	Local_748.f_256[9] = "JWL_09";
	Local_748.f_256[10] = "JWL_10";
	Local_748.f_256[11] = "JWL_11";
	Local_748.f_256[12] = "JWL_12";
	Local_748.f_256[13] = "JWL_13";
	Local_748.f_256[14] = "JWL_14";
	Local_748.f_256[15] = "JWL_15";
	Local_748.f_256[16] = "JWL_16";
	Local_748.f_256[17] = "JWL_17";
	Local_748.f_256[18] = "JWL_18";
	Local_748.f_256[19] = "JWL_19";
	Local_748.f_277 = "JWL_NONE";
	Local_748.f_278 = "DES_Jewel_Cab";
	Local_748.f_279 = "DES_Jewel_Cab2";
	Local_748.f_280 = "DES_Jewel_Cab3";
	Local_748.f_281 = "DES_Jewel_Cab4";
}

void func_1122()//Position - 0xAFE51
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_78))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_78, 1f, 1f, 2.2f, false, true, 0))
		{
			OBJECT::DELETE_OBJECT(&iLocal_78);
			func_849(&iLocal_2028);
			PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 250, 255);
			iLocal_413 = (iLocal_413 + iLocal_414);
			iLocal_414 = 0;
			Global_100441.f_12[0] = iLocal_413;
			Global_100441.f_12[1] = 1;
		}
		else if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_78, 65f, 65f, 120f, false, true, 0))
		{
			OBJECT::DELETE_OBJECT(&iLocal_78);
			func_849(&iLocal_2028);
		}
	}
}

void func_1129(int iParam0)//Position - 0xB4375
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_0__::func_566(__LIB_0__::func_567(iParam0));
	iVar1 = 0;
	while (iVar1 < Global_96470[iVar0 /*19*/])
	{
		if (Global_113386.f_1.f_12[iVar0 /*6*/][iVar1] == 0)
		{
			func_1130(iVar0, iVar1);
		}
		else if (Global_113386.f_1.f_12[iVar0 /*6*/][iVar1] == 15)
		{
			func_1130(iVar0, iVar1);
		}
		else if (__LIB_0__::func_617(Global_113386.f_1.f_12[iVar0 /*6*/][iVar1]) != Global_96470[iVar0 /*19*/].f_1[iVar1])
		{
			func_1130(iVar0, iVar1);
		}
		iVar1++;
	}
}

void func_1130(int iParam0, int iParam1)//Position - 0xB440E
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bVar1 = false;
	while (!bVar1)
	{
		bVar0 = MISC::GET_RANDOM_INT_IN_RANGE(1, 14);
		bVar1 = true;
		if (Global_96316[bVar0 /*5*/] != Global_96470[iParam0 /*19*/].f_1[iParam1])
		{
			bVar1 = false;
		}
		if (!BitTest(Global_113386.f_1.f_116, bVar0))
		{
			bVar1 = false;
		}
		if (BitTest(Global_113386.f_1.f_118, bVar0))
		{
			bVar1 = false;
		}
		if (bVar0 == 11)
		{
			if (iParam0 == 6 || iParam0 == 7)
			{
				bVar1 = false;
			}
		}
		iVar2 = 0;
		while (iVar2 < Global_96470[iParam0 /*19*/])
		{
			if (iVar2 != iParam1)
			{
				if (bVar0 == Global_113386.f_1.f_12[iParam0 /*6*/][iVar2])
				{
					bVar1 = false;
				}
			}
			iVar2++;
		}
	}
	Global_113386.f_1.f_12[iParam0 /*6*/][iParam1] = bVar0;
}

void func_1131()//Position - 0xB44D2
{
	CUTSCENE::STOP_CUTSCENE(true);
	__LIB_12__::func_849(9, 0);
	__LIB_12__::func_849(8, 0);
	__LIB_17__::func_171(25, 0, 1);
	__LIB_17__::func_171(26, 0, 1);
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_483))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_483, false);
	}
	CAM::SET_FOLLOW_VEHICLE_CAM_HIGH_ANGLE_MODE_EVERY_UPDATE(false, false);
	if (!PED::IS_PED_INJURED(func_94(1)))
	{
		EVENT::REMOVE_SHOCKING_EVENT(98);
		PED::REMOVE_PED_HELMET(func_94(1), true);
		PED::SET_PED_HELMET_TEXTURE_INDEX(func_94(1), -1);
	}
	if (!PED::IS_PED_INJURED(func_94(0)))
	{
		PED::REMOVE_PED_HELMET(func_94(0), true);
		PED::SET_PED_HELMET_TEXTURE_INDEX(func_94(0), -1);
	}
	iLocal_416 = 0;
	while (iLocal_416 <= 19)
	{
		iLocal_504 = OBJECT::GET_RAYFIRE_MAP_OBJECT(Local_349[iLocal_416 /*30*/], 1f, Local_349[iLocal_416 /*30*/].f_27);
		if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_504))
		{
			if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_504) != 3)
			{
				OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_504, 11);
			}
		}
		iLocal_416++;
	}
	INTERIOR::DISABLE_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-164.3822f, -619.0884f, 33.3318f, "dt1_02_carpark"), false);
	INTERIOR::DISABLE_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-179.314f, -180.2154f, 42.6246f, "bt1_04_carpark"), false);
	INTERIOR::DISABLE_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-16.2958f, -684.0385f, 33.5083f, "dt1_03_carpark"), false);
	INTERIOR::DISABLE_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(141.2044f, -717.2167f, 32.1327f, "dt1_05_carpark"), false);
	STREAMING::SET_GAME_PAUSES_FOR_STREAMING(true);
	if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
	{
		STREAMING::NEW_LOAD_SCENE_STOP();
	}
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	GRAPHICS::SET_PARTICLE_FX_BULLET_IMPACT_LODRANGE_SCALE(1f);
	PATHFIND::DISABLE_NAVMESH_IN_AREA(-623.1895f, -231.5713f, 36.8759f, -620.66f, -229.683f, 38.0054f, false);
	__LIB_0__::func_54(1, 1);
	AUDIO::SET_RADIO_POSITION_AUDIO_MUTE(false);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_474))
	{
		ENTITY::SET_ENTITY_VISIBLE(iLocal_474, true, false);
		ENTITY::SET_ENTITY_COLLISION(iLocal_474, true, false);
	}
	OBJECT::DELETE_OBJECT(&iLocal_475);
	__LIB_0__::func_424(0);
	AUDIO::DISTANT_COP_CAR_SIRENS(false);
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
	__LIB_0__::func_424(0);
	func_1098(0);
	__LIB_0__::func_671(0);
	__LIB_0__::func_552(1);
	AUDIO::UNREGISTER_SCRIPT_WITH_AUDIO();
	if (bLocal_382)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("JH2A_MISSION_FAIL");
	}
	else
	{
		AUDIO::TRIGGER_MUSIC_EVENT("JH2B_MISSION_FAIL");
	}
	__LIB_15__::func_931();
	iLocal_750 = 0;
	if (CAM::DOES_CAM_EXIST(Local_751.f_1))
	{
		CAM::SET_CAM_ACTIVE(Local_751.f_1, false);
		CAM::DESTROY_CAM(Local_751.f_1, false);
	}
	CAM::DESTROY_ALL_CAMS(false);
	Local_524.f_19 = 0;
}

void func_1139()//Position - 0xB48C3
{
	int iVar0;
	if (SCRIPT::HAS_SCRIPT_LOADED("buddyDeathResponse"))
	{
		SYSTEM::START_NEW_SCRIPT("buddyDeathResponse", 1424);
	}
	if (Global_113386.f_9085 || __LIB_0__::func_2(0))
	{
		if (!__LIB_0__::func_134())
		{
			iVar0 = __LIB_0__::func_380();
			if (iVar0 != -1)
			{
				if (!func_1077(iVar0))
				{
					return;
				}
				MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			__LIB_16__::func_40();
		}
	}
}

void func_1143(int iParam0, int iParam1)//Position - 0xB4B54
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_96671[iParam0 /*38*/].f_24)
	{
		if (Global_96671[iParam0 /*38*/].f_18[iVar0] == iParam1)
		{
			return;
		}
		iVar0++;
	}
	if (Global_96671[iParam0 /*38*/].f_24 == 5)
	{
		return;
	}
	Global_96671[iParam0 /*38*/].f_18[Global_96671[iParam0 /*38*/].f_24] = iParam1;
	Global_96671[iParam0 /*38*/].f_24++;
}

void func_1144(int iParam0, int iParam1)//Position - 0xB4BCF
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_96671[iParam0 /*38*/].f_12[iVar0] == iParam1)
		{
			Global_96671[iParam0 /*38*/][iVar0] = 0;
			return;
		}
		iVar0++;
	}
}

void func_1145(int iParam0, int iParam1)//Position - 0xB4C0F
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_96671[iParam0 /*38*/].f_12[iVar0] == iParam1)
		{
			Global_96671[iParam0 /*38*/][iVar0] = 1;
			return;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_96671[iParam0 /*38*/].f_12[iVar0] == 0)
		{
			Global_96671[iParam0 /*38*/].f_12[iVar0] = iParam1;
			Global_96671[iParam0 /*38*/][iVar0] = 1;
			Global_96671[iParam0 /*38*/].f_6[iVar0] = 0;
			return;
		}
		iVar0++;
	}
}

