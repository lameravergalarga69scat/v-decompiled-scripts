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
	var uLocal_46 = 0;
	var uLocal_47 = -1;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 1000;
	var uLocal_55 = 1000;
	var uLocal_56 = 0;
	int iLocal_57[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	bool bLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	struct<3> Local_77 = { 0, 0, 0 } ;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int* iLocal_82 = NULL;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	bool bLocal_86 = 0;
	float fLocal_87 = 0f;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 1132396544;
	var uLocal_93 = 1132396544;
	var uLocal_94 = 1132396544;
	var uLocal_95 = 0;
	var uLocal_96 = -1082130432;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 8;
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
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = -1;
	var uLocal_157 = 1092616192;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	int iLocal_160 = 0;
	struct<21> Local_161 = { 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<10> Local_162[15];
	int iLocal_163 = 0;
	float fLocal_164 = 0f;
	struct<2> Local_165 = { 0, 16 } ;
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
	struct<414> Local_230 = { 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = -1;
	var uLocal_236 = -1;
	var uLocal_237 = -1;
	var uLocal_238 = -1;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	struct<33> Local_247 = { 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4 } ;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 4;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	struct<38> Local_257 = { 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4 } ;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	int iLocal_262 = 0;
	int iLocal_263 = 0;
	struct<3> Local_264[1];
	int iLocal_265 = 0;
	int iLocal_266 = 0;
	int iLocal_267 = 0;
	int iLocal_268 = 0;
	int iLocal_269 = 0;
	int iLocal_270 = 0;
	int iLocal_271[3] = { 0, 0, 0 };
	int iLocal_272 = 0;
	int iLocal_273 = 0;
	int iLocal_274[2] = { 0, 0 };
	int iLocal_275 = 0;
	int iLocal_276 = 0;
	int iLocal_277 = 0;
	int iLocal_278 = 0;
	int iLocal_279 = 0;
	var uLocal_280 = 0;
	int iLocal_281 = 0;
	int iLocal_282 = 0;
	int iLocal_283 = 0;
	int iLocal_284 = 0;
	int iLocal_285 = 0;
	int iLocal_286 = 0;
	int iLocal_287 = 0;
	int iLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	int iLocal_291 = 0;
	int iLocal_292 = 0;
	int iLocal_293 = 0;
	int iLocal_294 = 0;
	int iLocal_295 = 0;
	int iLocal_296 = 0;
	int iLocal_297 = 0;
	int iLocal_298 = 0;
	int iLocal_299 = 0;
	int iLocal_300 = 0;
	int iLocal_301 = 0;
	bool bLocal_302 = 0;
	int iLocal_303 = 0;
	bool bLocal_304 = 0;
	int iLocal_305 = 0;
	int iLocal_306 = 0;
	int iLocal_307 = 0;
	int iLocal_308 = 0;
	struct<3> Local_309 = { 0, 0, 0 } ;
	struct<3> Local_310 = { 0, 0, 0 } ;
	struct<3> Local_311 = { 0, 0, 0 } ;
	struct<3> Local_312 = { 0, 0, 0 } ;
	struct<3> Local_313 = { 0, 0, 0 } ;
	struct<3> Local_314 = { 0, 0, 0 } ;
	struct<3> Local_315 = { 0, 0, 0 } ;
	struct<3> Local_316 = { 0, 0, 0 } ;
	struct<3> Local_317 = { 0, 0, 0 } ;
	struct<3> Local_318 = { 0, 0, 0 } ;
	char* sLocal_319 = NULL;
	char cLocal_320[24] = "";
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	char cLocal_324[24] = "";
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	struct<6> Local_328 = { 0, 0, 0, 0, 0, 0 } ;
	int* iLocal_329 = NULL;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	int* iLocal_332 = NULL;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	bool bLocal_335 = 0;
	struct<28> Local_336 = { -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 5;
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
	var uLocal_382 = 1097859072;
	var uLocal_383 = 1500;
	var uLocal_384 = 45;
	var uLocal_385 = 1103626240;
	var uLocal_386 = 5;
	int iLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	int iLocal_397 = 0;
	int iLocal_398 = 0;
	int iLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
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
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	iLocal_71 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	iLocal_72 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	Local_77 = { 500f, 500f, 500f };
	iLocal_265 = joaat("A_M_M_Farmer_01");
	iLocal_266 = joaat("prop_box_wood04a");
	iLocal_267 = joaat("prop_cardbordbox_03a");
	iLocal_268 = joaat("prop_barrel_exp_01a");
	iLocal_281 = 1;
	iLocal_285 = 112;
	Local_309 = { 11.8607f, -1123.48f, 27.6801f };
	Local_310 = { 11.8607f, -1123.48f, 27.6801f };
	Local_311 = { 144.3291f, -3352.7734f, 3.6651f };
	Local_312 = { 311.9527f, -3305.6133f, 10.6651f };
	Local_313 = { 206.636f, -3322.673f, 4.6339f };
	Local_314 = { 0f, 0f, 24f };
	Local_315 = { 208.786f, -3319.823f, 4.6339f };
	Local_316 = { 0f, 0f, 47f };
	Local_317 = { 199.51877f, -3326.2012f, 4.78716f };
	Local_318 = { 232.99445f, -3327.825f, 4.79877f };
	sLocal_319 = "oddjobs@taxi@argument";
	StringCopy(&cLocal_320, "txm12_deal1_7", 24);
	StringCopy(&cLocal_324, "txm12_deal1_7", 24);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(67))
	{
		__LIB_38__::func_753(2);
		func_433();
	}
	MISC::SET_MISSION_FLAG(true);
	func_417();
	Local_230.f_102 = 1;
	while (true)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_230.f_2))
		{
			func_9();
		}
		else
		{
			__LIB_39__::func_958(&Local_230);
		}
		SYSTEM::WAIT(0);
	}
}

void func_9()//Position - 0x3D9
{
	if (__LIB_39__::func_842(&Local_230))
	{
		__LIB_39__::func_786(&Local_230);
		if (func_414(&Local_230, 0))
		{
			func_412();
		}
	}
	else
	{
		__LIB_39__::func_893(&Local_230);
		if (Local_230.f_410 >= 9)
		{
			CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
			func_409();
		}
		func_375(&Local_230, &uLocal_380);
		if (Local_230.f_410 < 22)
		{
			func_374(&Local_230);
		}
		__LIB_39__::func_841(&Local_230, &uLocal_289, 0);
		if (Local_230.f_410 > 5 && !BitTest(uLocal_290, 0))
		{
			Local_230.f_17 = { 189.7825f, -3325.6838f, 4.6697f };
			MISC::SET_BIT(&uLocal_290, 0);
		}
		if (Local_230.f_410 > 2)
		{
			if (!__LIB_39__::func_840(&Local_230))
			{
				func_339();
			}
			else
			{
				func_330(&Local_230, "Taxi Not Driveable", __LIB_39__::func_830(&Local_230));
			}
		}
		if (Local_230.f_410 == 9)
		{
			func_306(&Local_230, 0, 1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_230.f_3))
		{
			if (ENTITY::IS_ENTITY_DEAD(Local_230.f_3, false))
			{
				if (!__LIB_39__::func_929(&Local_230, 0))
				{
					func_304(&Local_230, 0);
				}
				if (Local_230.f_410 >= 22 || iLocal_269 >= 1)
				{
					iLocal_299 = 1;
				}
				func_303(&(Local_247.f_3));
				func_303(&(Local_257.f_3));
				func_302(&iLocal_274);
				func_330(&Local_230, "TX12_GYB - Walter has been killed", 15);
			}
		}
		switch (Local_230.f_410)
		{
			case 0:
				func_299();
				__LIB_39__::func_933(&Local_230, 16, 4f, 0);
				__LIB_39__::func_914(&Local_230, Local_309, Local_310, "TaxiWalter", iLocal_265, 202f, 35f);
				__LIB_39__::func_900(&Local_230);
				__LIB_39__::func_931(&Local_230, 1);
				break;
			case 1:
				if (func_291())
				{
					__LIB_39__::func_820();
					__LIB_39__::func_812(&(Local_264[0 /*3*/]), "TAXI_SC_BN_12", 200);
					__LIB_39__::func_811(&Local_230, &Local_264);
					func_268();
					__LIB_39__::func_810(&Local_230);
					__LIB_39__::func_931(&Local_230, 2);
				}
				break;
			case 2:
				Local_230.f_14 = { Local_309 };
				Local_230.f_17 = { Local_247 };
				__LIB_39__::func_931(&Local_230, 3);
				break;
			case 3:
				if (func_260(&Local_230, 1))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_230.f_3, false))
					{
						PED::SET_PED_COMPONENT_VARIATION(Local_230.f_3, 3, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_230.f_3, 4, 0, 2, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_230.f_3, 0, 0, 2, 0);
					}
					__LIB_42__::func_713(&Local_230, 1, 0);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_262, Local_230.f_413);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Local_230.f_413, iLocal_262);
					PED::SET_PED_CAN_BE_TARGETTED(Local_230.f_3, false);
					__LIB_39__::func_931(&Local_230, 5);
				}
				break;
			case 5:
				if (func_233(&Local_230, 0, 1109393408))
				{
					__LIB_39__::func_931(&Local_230, 15);
				}
				break;
			case 15:
				if (func_232(&Local_230))
				{
					__LIB_43__::func_584(&Local_230, 9, 1, 0, 0);
					func_227(&Local_230);
					__LIB_39__::func_931(&Local_230, 7);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_230.f_4, false))
				{
					if (!PED::IS_PED_IN_VEHICLE(Local_230.f_2, Local_230.f_4, false))
					{
						__LIB_42__::func_704(&Local_230);
						__LIB_39__::func_931(&Local_230, 5);
					}
				}
				break;
			case 7:
				if (BitTest(uLocal_290, 0))
				{
					func_224();
					__LIB_39__::func_931(&Local_230, 9);
				}
				break;
			case 9:
				func_208();
				if ((__LIB_2__::func_485(Local_230.f_4, Local_230.f_17, 1) < 675f && !Local_230.f_140) && !iLocal_297)
				{
					VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_311, Local_312, false, true);
					PED::SET_PED_NON_CREATION_AREA(Local_311, Local_312);
					iLocal_278 = PED::ADD_SCENARIO_BLOCKING_AREA(Local_311, Local_312, false, true, true, true);
					MISC::CLEAR_AREA_OF_PEDS(195.16f, -3282.54f, 4.79f, 25f, 0);
					func_206(&Local_230);
					__LIB_39__::func_856(&uLocal_339);
					__LIB_39__::func_802(&Local_336, 3, 0);
					__LIB_43__::func_584(&Local_230, 97, 1, 0, 0);
					WEAPON::GIVE_WEAPON_TO_PED(Local_230.f_2, joaat("WEAPON_COMBATPISTOL"), 200, true, true);
					iLocal_297 = 1;
				}
				if (func_172(&Local_230, 16f, 1097859072, 1117782016))
				{
					HUD::REMOVE_BLIP(&(Local_230.f_9));
					__LIB_39__::func_780(&uLocal_380, 4);
					__LIB_39__::func_780(&uLocal_380, 8);
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
					SYSTEM::SETTIMERA(0);
					__LIB_39__::func_931(&Local_230, 22);
				}
				if (__LIB_2__::func_485(Local_230.f_4, Local_230.f_17, 1) < 10f && __LIB_0__::func_76(Local_230.f_4, Local_247.f_3[1], 1) < 10f)
				{
					if (__LIB_39__::func_925(&Local_230, 1, 1084227584))
					{
						HUD::REMOVE_BLIP(&(Local_230.f_9));
						func_164(1, 0);
						func_164(2, 0);
						func_164(3, 0);
						func_164(4, 0);
						func_164(5, 0);
						func_164(0, 1);
						PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
						SYSTEM::SETTIMERA(0);
						__LIB_39__::func_931(&Local_230, 22);
					}
				}
				if (!iLocal_301)
				{
				}
				if (!iLocal_301)
				{
					if (bLocal_302)
					{
						if ((((((((((PED::IS_PED_INJURED(Local_247.f_3[0]) || PED::IS_PED_INJURED(Local_247.f_3[1])) || PED::IS_PED_INJURED(Local_247.f_3[2])) || PED::IS_PED_INJURED(Local_247.f_3[3])) || (!ENTITY::IS_ENTITY_DEAD(Local_247.f_3[0], false) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(Local_247.f_3[0]))) || (!ENTITY::IS_ENTITY_DEAD(Local_247.f_3[1], false) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(Local_247.f_3[1]))) || (!ENTITY::IS_ENTITY_DEAD(Local_247.f_3[2], false) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(Local_247.f_3[2]))) || (!ENTITY::IS_ENTITY_DEAD(Local_247.f_3[0], false) && WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_247.f_3[0], 0, 2))) || (!ENTITY::IS_ENTITY_DEAD(Local_247.f_3[1], false) && WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_247.f_3[1], 0, 2))) || (!ENTITY::IS_ENTITY_DEAD(Local_247.f_3[2], false) && WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_247.f_3[2], 0, 2))) || __LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_247.f_3[1], 1) < 6f)
						{
							PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_247.f_3[0], iLocal_262);
							func_303(&(Local_247.f_3));
							func_302(&iLocal_274);
							func_330(&Local_230, "Aggro Heard Shot", 8);
							iLocal_301 = 1;
						}
					}
				}
				break;
			case 22:
				if (__LIB_14__::func_556(Local_230.f_3, 1) < 250f)
				{
					if (func_124())
					{
						__LIB_39__::func_851(&uLocal_380, 1);
						__LIB_39__::func_851(&uLocal_380, 16);
						__LIB_39__::func_851(&uLocal_380, 32);
						__LIB_43__::func_584(&Local_230, 100, 1, 0, 0);
						if (!PED::IS_PED_INJURED(Local_230.f_3) && !PED::IS_PED_INJURED(Local_230.f_2))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_230.f_3);
							TASK::TASK_GO_TO_ENTITY(Local_230.f_3, Local_230.f_2, 20000, 6f, 2f, 2f, 0);
						}
						SYSTEM::SETTIMERA(0);
						Local_230.f_114 = 0;
						__LIB_39__::func_931(&Local_230, 24);
					}
				}
				else
				{
					func_330(&Local_230, "Player abandoned passenger", 8);
				}
				break;
			case 24:
				if (__LIB_14__::func_556(Local_230.f_2, 1) < 7f && SYSTEM::TIMERA() > 3000)
				{
					TASK::TASK_LOOK_AT_ENTITY(Local_230.f_3, Local_230.f_2, -1, 2048, 4);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_270);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_270);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_230.f_2, -1);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_270);
					TASK::TASK_PERFORM_SEQUENCE(Local_230.f_3, iLocal_270);
					Local_230.f_56 = 50;
					__LIB_39__::func_882(&Local_230);
					__LIB_43__::func_914(&Local_230);
					__LIB_39__::func_943(&Local_230);
					if (iLocal_288 == 8)
					{
						func_114(&Local_230, 0);
					}
					__LIB_39__::func_931(&Local_230, 27);
				}
				else if (__LIB_14__::func_556(Local_230.f_3, 1) > 100f)
				{
					func_330(&Local_230, "Player abandoned passenger", 8);
				}
				break;
			case 27:
				if ((!__LIB_0__::func_75() && !ENTITY::IS_ENTITY_DEAD(Local_230.f_3, false)) && func_111(&Local_230, 19) > 2f)
				{
					__LIB_39__::func_927(&Local_230, 19, 0);
					__LIB_39__::func_931(&Local_230, 29);
					if (MISC::CREATE_INCIDENT(5, Local_318, 1, 0f, &iLocal_279, 0, 0))
					{
						MISC::SET_IDEAL_SPAWN_DISTANCE_FOR_INCIDENT(iLocal_279, 200f);
						bLocal_304 = true;
					}
					if (MISC::CREATE_INCIDENT(7, Local_318, 3, 0f, &uLocal_280, 0, 0))
					{
						bLocal_304 = true;
					}
				}
				break;
			case 29:
				if (func_77(&Local_230, &iLocal_387))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_230.f_3))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_230.f_3, false))
						{
							TASK::CLEAR_PED_TASKS(Local_230.f_3);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_270);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_270);
							TASK::TASK_SMART_FLEE_COORD(0, Local_230.f_17, 500f, 30000, false, false);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 261.09155f, -3089.0615f, 4.79249f, 2f, -1, 0.25f, 0, 40000f);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 304.63266f, -2965.9224f, 5.00012f, 2f, -1, 0.25f, 0, 40000f);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 309.89066f, -2870.473f, 5.15704f, 2f, -1, 0.25f, 0, 40000f);
							TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_270);
							TASK::TASK_PERFORM_SEQUENCE(Local_230.f_3, iLocal_270);
							PED::SET_PED_KEEP_TASK(Local_230.f_3, true);
						}
					}
					func_11(1, &Local_230, 0);
					SYSTEM::SETTIMERA(0);
					__LIB_39__::func_931(&Local_230, 30);
				}
				break;
			case 30:
				if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), 213.4579f, -3329.4707f, 4.7971f, 1) > 40f)
				{
					func_433();
				}
				else if (bLocal_304)
				{
					iLocal_277 = VEHICLE::GET_RANDOM_VEHICLE_IN_SPHERE(Local_318, 40f, joaat("ambulance"), 0);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_277, false))
					{
						iLocal_305 = 1;
					}
					iLocal_277 = VEHICLE::GET_RANDOM_VEHICLE_IN_SPHERE(Local_318, 40f, joaat("police"), 0);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_277, false))
					{
						iLocal_305 = 1;
					}
					iLocal_275 = PED::GET_RANDOM_PED_AT_COORD(Local_318, 10f, 10f, 5f, -1);
					if (!PED::IS_PED_INJURED(iLocal_275))
					{
						iLocal_305 = 1;
					}
					if (iLocal_305 || SYSTEM::TIMERA() > 30000)
					{
						PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 1, false);
						PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
						func_433();
					}
				}
				else
				{
					func_433();
				}
				break;
			}
	}
}

void func_11(bool bParam0, var uParam1, bool bParam2)//Position - 0xE22
{
	if (bParam0)
	{
		__LIB_39__::func_910(uParam1);
		if (!PED::IS_PED_INJURED(uParam1->f_3))
		{
			PED::SET_PED_CONFIG_FLAG(uParam1->f_3, 317, true);
		}
	}
	else
	{
		__LIB_39__::func_852(1, 0);
	}
	func_12(uParam1, bParam2);
}

void func_12(var uParam0, bool bParam1)//Position - 0xE5E
{
	__LIB_39__::func_786(uParam0);
	if (__LIB_0__::func_75())
	{
		__LIB_0__::func_429();
	}
	__LIB_16__::func_616();
	HUD::CLEAR_PRINTS();
	HUD::CLEAR_HELP(true);
	__LIB_0__::func_366(0);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(uParam0->f_4, false);
		VEHICLE::REMOVE_VEHICLE_STUCK_CHECK(uParam0->f_4);
		VEHICLE::REMOVE_VEHICLE_UPSIDEDOWN_CHECK(uParam0->f_4);
	}
	__LIB_39__::func_849(uParam0->f_14, 1);
	__LIB_39__::func_806(uParam0->f_14, 1, 1114636288);
	__LIB_0__::func_221(&(uParam0->f_244), 3);
	PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, true);
	if (__LIB_39__::func_878())
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	}
	CUTSCENE::SET_PAD_CAN_SHAKE_DURING_CUTSCENE(true);
	__LIB_0__::func_532(0, 1, 1, 0, 0, 0, 0);
	HUD::DISPLAY_RADAR(true);
	HUD::DISPLAY_HUD(true);
	if (CAM::DOES_CAM_EXIST(*uParam0))
	{
		CAM::DESTROY_CAM(*uParam0, false);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
	}
	if (__LIB_0__::func_703(Global_113386.f_19097, 4))
	{
		__LIB_39__::func_851(&(Global_113386.f_19097), 4);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(__LIB_12__::func_850(), false);
	}
	if (bParam1)
	{
		__LIB_39__::func_784(uParam0);
	}
	__LIB_39__::func_783(uParam0);
	STREAMING::REMOVE_ANIM_DICT("gestures@m@standing@casual");
	STREAMING::REMOVE_ANIM_DICT("oddjobs@taxi@");
	STREAMING::REMOVE_ANIM_DICT("oddjobs@towingcome_here");
	if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		__LIB_39__::func_877(uParam0->f_411);
	}
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0);
	}
	STATS::PLAYSTATS_ODDJOB_DONE(SYSTEM::ROUND((__LIB_38__::func_100(&iLocal_82) * 1000f)), 12, false);
}

int func_77(int iParam0, int iParam1)//Position - 0x281E
{
	switch (iLocal_160)
	{
		case 0:
			if (!__LIB_0__::func_75() && func_111(iParam0, 0) > 1f)
			{
				if (__LIB_39__::func_878())
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				}
				__LIB_39__::func_932(iParam0);
				__LIB_39__::func_851(&(Global_113386.f_19097), 4096);
				__LIB_39__::func_879(iParam1, "TAXI_FARE_TITLE", iParam0->f_50, iParam0->f_56, ((iParam0->f_50 + iParam0->f_56) + iParam0->f_105), iParam0->f_105, __LIB_39__::func_926(iParam0), "TAXI_FARE_MID", 4000, 1);
				iParam1->f_1 = 4000;
				AUDIO::PLAY_SOUND_FRONTEND(-1, "CHECKPOINT_UNDER_THE_BRIDGE", "HUD_MINI_GAME_SOUNDSET", false);
				__LIB_0__::func_704(1);
				iLocal_160 = 6;
			}
			break;
		case 6:
			if (!__LIB_39__::func_956(iParam1, 0))
			{
				__LIB_39__::func_964(iParam0);
				__LIB_39__::func_933(iParam0, 0, 0, 0);
				__LIB_0__::func_704(0);
				iLocal_160 = 7;
				return 1;
			}
			break;
	}
	return 0;
}

float func_111(int iParam0, int iParam1)//Position - 0x3E9E
{
	if (!__LIB_0__::func_702(&(iParam0->f_146[iParam1 /*3*/])))
	{
		__LIB_3__::func_128(&(iParam0->f_146[iParam1 /*3*/]));
	}
	return __LIB_37__::func_276(&(iParam0->f_146[iParam1 /*3*/]));
}

void func_114(int iParam0, int iParam1)//Position - 0x3F08
{
	if (iParam1 < 5)
	{
		MISC::SET_BIT(&(iParam0->f_60[iParam1 /*3*/]), 2);
		iParam0->f_105 = (iParam0->f_105 + iParam0->f_60[iParam1 /*3*/].f_1);
	}
}

int func_124()//Position - 0x40EA
{
	int iVar0;
	if (iLocal_269 < 4 && ((((((((((PED::IS_PED_INJURED(Local_247.f_3[0]) || PED::IS_PED_INJURED(Local_247.f_3[1])) || PED::IS_PED_INJURED(Local_247.f_3[2])) || (!ENTITY::IS_ENTITY_DEAD(Local_247.f_3[0], false) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(Local_247.f_3[0]))) || (!ENTITY::IS_ENTITY_DEAD(Local_247.f_3[1], false) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(Local_247.f_3[1]))) || (!ENTITY::IS_ENTITY_DEAD(Local_247.f_3[2], false) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(Local_247.f_3[2]))) || (!ENTITY::IS_ENTITY_DEAD(Local_247.f_3[0], false) && WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_247.f_3[0], 0, 2))) || (!ENTITY::IS_ENTITY_DEAD(Local_247.f_3[1], false) && WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_247.f_3[1], 0, 2))) || (!ENTITY::IS_ENTITY_DEAD(Local_247.f_3[2], false) && WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_247.f_3[2], 0, 2))) || __LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_247.f_3[1], 1) < 6f) || (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 204.07832f, -3331.3054f, 6.040432f, 7.5f, 7.5f, 1.25f, false, true, 0) && ((((((!ENTITY::IS_ENTITY_DEAD(Local_247.f_3[0], false) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), Local_247.f_3[0])) || (!ENTITY::IS_ENTITY_DEAD(Local_247.f_3[1], false) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), Local_247.f_3[1]))) || (!ENTITY::IS_ENTITY_DEAD(Local_247.f_3[2], false) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), Local_247.f_3[2]))) || (!ENTITY::IS_ENTITY_DEAD(Local_247.f_3[0], false) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), Local_247.f_3[0]))) || (!ENTITY::IS_ENTITY_DEAD(Local_247.f_3[1], false) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), Local_247.f_3[1]))) || (!ENTITY::IS_ENTITY_DEAD(Local_247.f_3[2], false) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), Local_247.f_3[2]))))))
	{
		Local_230.f_114 = 1;
		iLocal_269 = 4;
	}
	switch (iLocal_269)
	{
		case 0:
			__LIB_43__::func_584(&Local_230, 90, 1, 0, 0);
			__LIB_39__::func_802(&Local_336, -1, 1);
			func_162();
			MISC::CLEAR_BIT(&uLocal_290, 1);
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_295))
			{
				if ((!PED::IS_PED_INJURED(Local_247.f_3[0]) && !PED::IS_PED_INJURED(Local_247.f_3[1])) && !PED::IS_PED_INJURED(Local_247.f_3[2]))
				{
					iLocal_295 = PED::CREATE_SYNCHRONIZED_SCENE(Local_315, Local_316, 2);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_295, true);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_247.f_3[0], iLocal_295, "oddjobs@taxi@argument", "idle_a_biker_a", 1000f, -1000f, 0, 0, 1000f, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_247.f_3[1], iLocal_295, "oddjobs@taxi@argument", "idle_a_biker_b", 1000f, -1000f, 0, 0, 1000f, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_247.f_3[2], iLocal_295, "oddjobs@taxi@argument", "idle_a_biker_c", 1000f, -1000f, 0, 0, 1000f, 0);
				}
			}
			iLocal_282 = MISC::GET_GAME_TIMER();
			iLocal_269 = 1;
			break;
		case 1:
			if (!__LIB_0__::func_75() && !BitTest(uLocal_290, 10))
			{
				__LIB_43__::func_584(&Local_230, 91, 1, 0, 0);
				MISC::SET_BIT(&uLocal_290, 10);
				__LIB_3__::func_128(&iLocal_329);
			}
			if ((MISC::GET_GAME_TIMER() - iLocal_282) > 4000)
			{
				if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
				{
					if (__LIB_39__::func_928(&Local_230))
					{
						__LIB_0__::func_151("TAXI_VIEW", -1);
					}
					iLocal_298 = 1;
					if ((!PED::IS_PED_INJURED(Local_247.f_3[3]) && !PED::IS_PED_INJURED(iLocal_274[0])) && !PED::IS_PED_INJURED(iLocal_274[1]))
					{
						iLocal_292 = PED::CREATE_SYNCHRONIZED_SCENE(Local_313, Local_314, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(Local_247.f_3[3], iLocal_292, "oddjobs@taxi@argument", "bridge_biker_d", 1000f, -1000f, 0, 0, 1000f, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_274[0], iLocal_292, "oddjobs@taxi@argument", "bridge_hooker_a", 1000f, -1000f, 0, 0, 1000f, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_274[1], iLocal_292, "oddjobs@taxi@argument", "bridge_hooker_b", 1000f, -1000f, 0, 0, 1000f, 0);
					}
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0);
				}
			}
			if (__LIB_0__::func_1("TAXI_VIEW") && (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/) || !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)))
			{
				HUD::CLEAR_HELP(true);
			}
			if (!PED::IS_PED_INJURED(Local_230.f_3) && (!__LIB_0__::func_75() || __LIB_38__::func_100(&iLocal_329) > 9f))
			{
				if ((ENTITY::IS_ENTITY_AT_COORD(Local_230.f_3, Local_317, 1.5f, 1.5f, 2f, false, true, 0) && TASK::GET_SCRIPT_TASK_STATUS(Local_230.f_3, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 7) && (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_295) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_295) > 0.995f))
				{
					if ((!PED::IS_PED_INJURED(Local_247.f_3[0]) && !PED::IS_PED_INJURED(Local_247.f_3[1])) && !PED::IS_PED_INJURED(Local_247.f_3[2]))
					{
						iLocal_296 = PED::CREATE_SYNCHRONIZED_SCENE(Local_315, Local_316, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(Local_247.f_3[0], iLocal_296, "oddjobs@taxi@argument", "stand_off_biker_a", 1000f, -4f, 0, 0, 1000f, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(Local_247.f_3[1], iLocal_296, "oddjobs@taxi@argument", "stand_off_biker_b", 1000f, -4f, 0, 0, 1000f, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(Local_247.f_3[2], iLocal_296, "oddjobs@taxi@argument", "stand_off_biker_c", 1000f, -4f, 0, 0, 1000f, 0);
						PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_296, true);
					}
					TASK::TASK_PLAY_ANIM(Local_230.f_3, "oddjobs@taxi@argument", "stand_off_passenger", 4f, -8f, -1, 0, 0f, false, false, false);
					iLocal_284 = MISC::GET_GAME_TIMER();
					iLocal_282 = MISC::GET_GAME_TIMER();
					iLocal_269 = 2;
				}
			}
			break;
		case 2:
			if ((MISC::GET_GAME_TIMER() - iLocal_282) > 2500 && !BitTest(uLocal_290, 1))
			{
				__LIB_43__::func_584(&Local_230, 89, 1, 1, 0);
				MISC::SET_BIT(&uLocal_290, 1);
			}
			if (((PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_296) >= 0.838f && !PED::IS_PED_INJURED(Local_230.f_3)) && !PED::IS_PED_INJURED(Local_247.f_3[1])) && !BitTest(uLocal_290, 6))
			{
				WEAPON::GIVE_WEAPON_TO_PED(Local_247.f_3[1], joaat("WEAPON_PISTOL"), -1, true, true);
				WEAPON::GIVE_WEAPON_TO_PED(Local_230.f_3, joaat("WEAPON_PISTOL"), -1, true, true);
				MISC::SET_BIT(&uLocal_290, 6);
			}
			if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_296) >= 0.853f && !PED::IS_PED_INJURED(Local_247.f_3[2])) && !BitTest(uLocal_290, 7))
			{
				WEAPON::GIVE_WEAPON_TO_PED(Local_247.f_3[2], joaat("WEAPON_PISTOL"), -1, true, true);
				MISC::SET_BIT(&uLocal_290, 7);
			}
			if (!BitTest(uLocal_290, 3))
			{
				if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_292) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_292) == 1f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_292))
				{
					if ((!PED::IS_PED_INJURED(Local_247.f_3[3]) && !PED::IS_PED_INJURED(iLocal_274[0])) && !PED::IS_PED_INJURED(iLocal_274[1]))
					{
						iLocal_293 = PED::CREATE_SYNCHRONIZED_SCENE(Local_313, Local_314, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(Local_247.f_3[3], iLocal_293, "oddjobs@taxi@argument", "hooker_loop_b_biker_d", 1000f, -1000f, 0, 0, 1000f, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_274[0], iLocal_293, "oddjobs@taxi@argument", "hooker_loop_b_hooker_a", 1000f, -1000f, 0, 0, 1000f, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_274[1], iLocal_293, "oddjobs@taxi@argument", "hooker_loop_b_hooker_b", 1000f, -1000f, 0, 0, 1000f, 0);
						PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_293, true);
						MISC::SET_BIT(&uLocal_290, 3);
					}
				}
			}
			if (BitTest(uLocal_290, 1))
			{
				Local_328 = { __LIB_13__::func_743() };
				if (MISC::ARE_STRINGS_EQUAL(&cLocal_320, &Local_328) || MISC::ARE_STRINGS_EQUAL(&cLocal_324, &Local_328))
				{
					if ((!PED::IS_PED_INJURED(Local_247.f_3[3]) && !PED::IS_PED_INJURED(iLocal_274[0])) && !PED::IS_PED_INJURED(iLocal_274[1]))
					{
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_293))
						{
							iLocal_294 = PED::CREATE_SYNCHRONIZED_SCENE(Local_313, Local_314, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(Local_247.f_3[3], iLocal_294, "oddjobs@taxi@argument", "hooker_outro_biker_d", 1000f, -1000f, 0, 0, 1000f, 0);
							TASK::TASK_SYNCHRONIZED_SCENE(iLocal_274[0], iLocal_294, "oddjobs@taxi@argument", "hooker_outro_hooker_a", 1000f, -1000f, 0, 0, 1000f, 0);
							TASK::TASK_SYNCHRONIZED_SCENE(iLocal_274[1], iLocal_294, "oddjobs@taxi@argument", "hooker_outro_hooker_b", 1000f, -1000f, 0, 0, 1000f, 0);
							PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_294, true);
							iLocal_283 = MISC::GET_GAME_TIMER();
							iLocal_269 = 3;
						}
						else
						{
							iLocal_294 = PED::CREATE_SYNCHRONIZED_SCENE(Local_313, Local_314, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(Local_247.f_3[3], iLocal_294, "oddjobs@taxi@argument", "hooker_outro_biker_d", 1000f, -1000f, 0, 0, 1000f, 0);
							TASK::TASK_SYNCHRONIZED_SCENE(iLocal_274[0], iLocal_294, "oddjobs@taxi@argument", "hooker_outro_hooker_a", 1000f, -1000f, 0, 0, 1000f, 0);
							TASK::TASK_SYNCHRONIZED_SCENE(iLocal_274[1], iLocal_294, "oddjobs@taxi@argument", "hooker_outro_hooker_b", 1000f, -1000f, 0, 0, 1000f, 0);
							PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_294, true);
							iLocal_283 = MISC::GET_GAME_TIMER();
							iLocal_269 = 3;
						}
					}
				}
			}
			break;
		case 3:
			switch (iLocal_286)
			{
				case 0:
					if (((MISC::GET_GAME_TIMER() - iLocal_283) > 850 && !PED::IS_PED_INJURED(Local_247.f_3[3])) && !BitTest(uLocal_290, 8))
					{
						WEAPON::GIVE_WEAPON_TO_PED(Local_247.f_3[3], joaat("WEAPON_PISTOL"), -1, true, true);
						MISC::SET_BIT(&uLocal_290, 8);
					}
					if (((!PED::IS_PED_INJURED(Local_247.f_3[0]) && !PED::IS_PED_INJURED(Local_247.f_3[1])) && !PED::IS_PED_INJURED(Local_247.f_3[2])) && !PED::IS_PED_INJURED(Local_230.f_3))
					{
						PED::SET_PED_RESET_FLAG(Local_247.f_3[0], 156, true);
						PED::SET_PED_RESET_FLAG(Local_247.f_3[1], 156, true);
						PED::SET_PED_RESET_FLAG(Local_247.f_3[2], 156, true);
						PED::SET_PED_RESET_FLAG(Local_230.f_3, 156, true);
						if (((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_296) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_296) == 1f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_296)) || (MISC::GET_GAME_TIMER() - iLocal_284) > 27000)
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_284) > 27000)
							{
							}
							iLocal_307 = 1;
							TASK::TASK_AIM_GUN_AT_ENTITY(Local_247.f_3[0], Local_230.f_3, -1, false);
							TASK::TASK_AIM_GUN_AT_ENTITY(Local_247.f_3[1], Local_230.f_3, -1, false);
							TASK::TASK_AIM_GUN_AT_ENTITY(Local_247.f_3[2], Local_230.f_3, -1, false);
							TASK::TASK_AIM_GUN_AT_ENTITY(Local_230.f_3, Local_247.f_3[1], -1, false);
							iLocal_282 = 0;
							iLocal_286++;
						}
					}
					break;
				case 1:
					if (((MISC::GET_GAME_TIMER() - iLocal_283) > 850 && !PED::IS_PED_INJURED(Local_247.f_3[3])) && !BitTest(uLocal_290, 8))
					{
						WEAPON::GIVE_WEAPON_TO_PED(Local_247.f_3[3], joaat("WEAPON_PISTOL"), -1, true, true);
						MISC::SET_BIT(&uLocal_290, 8);
					}
					if (!PED::IS_PED_INJURED(Local_247.f_3[3]))
					{
						PED::SET_PED_RESET_FLAG(Local_247.f_3[3], 156, true);
					}
					if (!BitTest(uLocal_290, 4))
					{
						if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_294) || PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_294) == 1f)
						{
							if (((!PED::IS_PED_INJURED(Local_247.f_3[3]) && !PED::IS_PED_INJURED(iLocal_274[0])) && !PED::IS_PED_INJURED(iLocal_274[1])) && !PED::IS_PED_INJURED(Local_230.f_3))
							{
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_274[0], 299.3585f, -3204.9048f, 4.7214f, 3f, 20000, 0.25f, 0, 40000f);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_274[1], 299.3585f, -3204.9048f, 4.7214f, 3f, 20000, 0.25f, 0, 40000f);
								PED::FORCE_PED_MOTION_STATE(iLocal_274[0], joaat("MotionState_Sprint"), false, 0, false);
								PED::FORCE_PED_MOTION_STATE(iLocal_274[1], joaat("MotionState_Sprint"), false, 0, false);
								TASK::TASK_AIM_GUN_AT_ENTITY(Local_247.f_3[3], Local_230.f_3, -1, true);
								MISC::SET_BIT(&uLocal_290, 4);
							}
						}
					}
					Local_328 = { __LIB_13__::func_743() };
					if (MISC::ARE_STRINGS_EQUAL("txm12_deal1_7", &Local_328) && iLocal_282 == 0)
					{
						iLocal_282 = MISC::GET_GAME_TIMER();
					}
					else if ((iLocal_282 > 0 && (MISC::GET_GAME_TIMER() - iLocal_282) > 1500) && !BitTest(uLocal_290, 9))
					{
						__LIB_0__::func_325();
						__LIB_0__::func_229("TAXI_OBJ_GYB", 4000, 0);
						func_155(&(Local_247.f_3), &(Local_247.f_11));
						iLocal_298 = 0;
						CAM::DESTROY_CAM(Local_230.f_0, false);
						CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
						iLocal_282 = MISC::GET_GAME_TIMER();
						iLocal_286 = 2;
						MISC::SET_BIT(&uLocal_290, 9);
					}
					else if (iLocal_282 > 0 && (MISC::GET_GAME_TIMER() - iLocal_282) > 1200)
					{
						if (__LIB_7__::func_691() && CAM::IS_CAM_ACTIVE(Local_230.f_0))
						{
							if (!iLocal_308)
							{
								GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, false);
								AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
								iLocal_308 = 1;
							}
						}
					}
					break;
				case 2:
					if ((MISC::GET_GAME_TIMER() - iLocal_282) > 4000 && BitTest(uLocal_290, 9))
					{
						__LIB_14__::func_535(&(Local_230.f_244), Local_230.f_144, "txm12_deal1", "txm12_deal1_9", 9, 0, 0);
						iLocal_282 = MISC::GET_GAME_TIMER();
						MISC::CLEAR_BIT(&uLocal_290, 9);
					}
					if ((((!PED::IS_PED_INJURED(Local_230.f_3) && !PED::IS_PED_INJURED(Local_247.f_3[0])) && !PED::IS_PED_INJURED(Local_247.f_3[2])) && !BitTest(uLocal_290, 9)) && (MISC::GET_GAME_TIMER() - iLocal_282) > 2000)
					{
						ENTITY::SET_ENTITY_HEALTH(Local_247.f_3[0], 115, 0);
						ENTITY::SET_ENTITY_HEALTH(Local_247.f_3[2], 115, 0);
						iLocal_282 = MISC::GET_GAME_TIMER();
						iLocal_286 = 8;
					}
					break;
				case 3:
					if (!__LIB_0__::func_75())
					{
						__LIB_43__::func_584(&Local_230, 12, 1, 0, 0);
						__LIB_39__::func_933(&Local_230, 19, 0, 0);
						iLocal_282 = MISC::GET_GAME_TIMER();
						iLocal_286++;
					}
					break;
				case 4:
					if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
					{
						__LIB_39__::func_933(&Local_230, 19, 0, 0);
						__LIB_43__::func_584(&Local_230, 116, 1, 0, 0);
						iLocal_286++;
					}
					break;
				case 5:
				case 6:
				case 7:
					if (func_111(&Local_230, 19) > 2f)
					{
						__LIB_39__::func_933(&Local_230, 19, 0, 0);
						__LIB_43__::func_584(&Local_230, 116, 1, 0, 0);
						iLocal_286++;
					}
					break;
				case 8:
					if ((!PED::IS_PED_INJURED(Local_247.f_3[0]) && !PED::IS_PED_INJURED(Local_247.f_3[1])) && !PED::IS_PED_INJURED(Local_247.f_3[2]))
					{
						PED::CLEAR_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_262, Local_230.f_413);
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_262, Local_230.f_413);
						PED::SET_PED_ACCURACY(Local_247.f_3[0], 100);
						PED::SET_PED_ACCURACY(Local_247.f_3[2], 100);
						TASK::TASK_SHOOT_AT_ENTITY(Local_247.f_3[0], Local_230.f_3, 5000, joaat("FIRING_PATTERN_FULL_AUTO"));
						TASK::TASK_SHOOT_AT_ENTITY(Local_247.f_3[1], Local_230.f_3, 5000, joaat("FIRING_PATTERN_BURST_FIRE"));
						TASK::TASK_SHOOT_AT_ENTITY(Local_247.f_3[2], Local_230.f_3, 5000, joaat("FIRING_PATTERN_FULL_AUTO"));
						iLocal_282 = MISC::GET_GAME_TIMER();
						iLocal_286++;
					}
					break;
				case 9:
					if ((MISC::GET_GAME_TIMER() - iLocal_282) > 5000)
					{
						iLocal_269 = 4;
					}
					break;
			}
			break;
		case 4:
			if (!Local_230.f_114)
			{
				Local_230.f_114 = 1;
			}
			__LIB_39__::func_780(&uLocal_380, 1);
			__LIB_39__::func_780(&uLocal_380, 16);
			__LIB_39__::func_780(&uLocal_380, 32);
			__LIB_0__::func_325();
			func_136();
			func_135();
			func_303(&(Local_247.f_3));
			func_155(&(Local_247.f_3), &(Local_247.f_11));
			func_302(&iLocal_274);
			iLocal_282 = MISC::GET_GAME_TIMER();
			iLocal_269 = 5;
			break;
		case 5:
			if (iLocal_287 >= 2 && !__LIB_39__::func_929(&Local_230, 8))
			{
				func_304(&Local_230, 8);
			}
			else if (__LIB_39__::func_929(&Local_230, 8) && func_111(&Local_230, 8) > 3f)
			{
				func_133();
				func_130();
				iLocal_282 = MISC::GET_GAME_TIMER();
				iLocal_269 = 6;
			}
			else
			{
				iLocal_287 = 0;
			}
			func_128(&(Local_247.f_3), &(Local_247.f_11), &(Local_257.f_3), &(Local_257.f_11));
			break;
		case 6:
			if ((PED::IS_PED_INJURED(Local_257.f_3[0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_257.f_27[0], false)) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_257.f_27[0]))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_257.f_27[0]);
			}
			if ((((PED::IS_PED_INJURED(Local_257.f_3[2]) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_257.f_3[2], PLAYER::PLAYER_PED_ID(), true)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_257.f_3[2], Local_230.f_3, true)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_257.f_27[1], false)) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_257.f_27[1]))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_257.f_27[1]);
			}
			if (HUD::DOES_BLIP_EXIST(Local_257.f_37[0]) && !VEHICLE::IS_VEHICLE_DRIVEABLE(Local_257.f_27[0], false))
			{
				HUD::REMOVE_BLIP(&(Local_257.f_37[0]));
			}
			if (HUD::DOES_BLIP_EXIST(Local_257.f_37[1]) && !VEHICLE::IS_VEHICLE_DRIVEABLE(Local_257.f_27[1], false))
			{
				HUD::REMOVE_BLIP(&(Local_257.f_37[1]));
			}
			if (!iLocal_303 && ((VEHICLE::IS_VEHICLE_DRIVEABLE(Local_257.f_27[0], false) && !VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_257.f_27[0])) || (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_257.f_27[1], false) && !VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_257.f_27[1]))))
			{
				if (func_127(&(Local_257.f_3)))
				{
					func_155(&(Local_257.f_3), &(Local_257.f_11));
					func_126();
					iLocal_303 = 1;
				}
			}
			if (!BitTest(uLocal_290, 2))
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_282) > 5000)
				{
					func_303(&(Local_257.f_3));
					func_125(&(Local_247.f_3));
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_262, Local_230.f_413);
					MISC::SET_BIT(&uLocal_290, 2);
				}
			}
			else
			{
				iVar0 = 0;
				while (iVar0 < Local_257.f_3)
				{
					if (!PED::IS_PED_INJURED(Local_257.f_3[iVar0]))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(Local_257.f_3[iVar0], joaat("SCRIPT_TASK_COMBAT_HATED_TARGETS_AROUND_PED")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_257.f_3[iVar0], joaat("SCRIPT_TASK_COMBAT_HATED_TARGETS_AROUND_PED")) != 0)
						{
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_257.f_3[iVar0], 1000f, 0);
						}
					}
					iVar0++;
				}
			}
			if (!PED::IS_PED_INJURED(Local_230.f_3))
			{
				if (iLocal_306)
				{
					if (!__LIB_0__::func_75())
					{
						__LIB_43__::func_584(&Local_230, 140, 1, 0, 1);
					}
					iLocal_306 = 0;
				}
			}
			return func_128(&(Local_247.f_3), &(Local_247.f_11), &(Local_257.f_3), &(Local_257.f_11));
			break;
	}
	return 0;
}

void func_125(var uParam0)//Position - 0x541E
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!PED::IS_PED_INJURED((*uParam0)[iVar0]))
		{
			PED::SET_PED_ACCURACY((*uParam0)[iVar0], 1);
		}
		iVar0++;
	}
}

void func_126()//Position - 0x5453
{
	if (HUD::DOES_BLIP_EXIST(Local_257.f_37[0]))
	{
		HUD::REMOVE_BLIP(&(Local_257.f_37[0]));
	}
	if (HUD::DOES_BLIP_EXIST(Local_257.f_37[1]))
	{
		HUD::REMOVE_BLIP(&(Local_257.f_37[1]));
	}
}

int func_127(var uParam0)//Position - 0x5491
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!PED::IS_PED_INJURED((*uParam0)[iVar0]))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE((*uParam0)[iVar0], false))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_128(var uParam0, var uParam1, var uParam2, var uParam3)//Position - 0x54CF
{
	int iVar0;
	int iVar1;
	iVar1 = 1;
	iLocal_288 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (ENTITY::IS_ENTITY_DEAD((*uParam0)[iVar0], false))
		{
			if (HUD::DOES_BLIP_EXIST((*uParam1)[iVar0]))
			{
				HUD::REMOVE_BLIP(uParam1[iVar0]);
			}
			if (__LIB_39__::func_938(&Local_230, (*uParam0)[iVar0], 1))
			{
				iLocal_288++;
			}
			iLocal_287++;
		}
		else
		{
			iLocal_288 = 0;
			iVar1 = 0;
		}
		if (ENTITY::IS_ENTITY_DEAD((*uParam2)[iVar0], false))
		{
			if (HUD::DOES_BLIP_EXIST((*uParam3)[iVar0]))
			{
				HUD::REMOVE_BLIP(uParam3[iVar0]);
				iLocal_306 = 1;
			}
			if (__LIB_39__::func_938(&Local_230, (*uParam2)[iVar0], 1))
			{
				iLocal_288++;
			}
		}
		else
		{
			iLocal_288 = 0;
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

void func_130()//Position - 0x55EB
{
	if (!HUD::DOES_BLIP_EXIST(Local_257.f_37[0]) && !HUD::DOES_BLIP_EXIST(Local_257.f_37[1]))
	{
		Local_257.f_37[0] = __LIB_0__::func_511(Local_257.f_27[0], 0, 0);
		Local_257.f_37[1] = __LIB_0__::func_511(Local_257.f_27[1], 0, 0);
	}
}

void func_133()//Position - 0x56FC
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_257.f_27[0], false))
	{
		VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(Local_257.f_27[0], iLocal_285, func_134(0), 6, 1000, 786603);
		VEHICLE::SET_PLAYBACK_SPEED(Local_257.f_27[0], 1f);
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_257.f_27[1], false))
	{
		VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(Local_257.f_27[1], iLocal_285, func_134(1), 6, 1000, 786603);
		VEHICLE::SET_PLAYBACK_SPEED(Local_257.f_27[1], 1f);
	}
}

char* func_134(int iParam0)//Position - 0x5776
{
	char* sVar0;
	switch (iParam0)
	{
		case 0:
			sVar0 = "txm12_s01_a";
			break;
		case 1:
			sVar0 = "txm12_s01_b";
			break;
	}
	return sVar0;
}

void func_135()//Position - 0x57A5
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(Local_230.f_3))
	{
		if (!PED::IS_PED_INJURED(Local_230.f_3))
		{
			if (!HUD::DOES_BLIP_EXIST(Local_230.f_8))
			{
				Local_230.f_8 = __LIB_0__::func_511(Local_230.f_3, 1, 0);
			}
			WEAPON::GET_CURRENT_PED_WEAPON(Local_230.f_3, &iVar0, true);
			if (iVar0 == joaat("WEAPON_UNARMED"))
			{
				WEAPON::GIVE_WEAPON_TO_PED(Local_230.f_3, joaat("WEAPON_COMBATPISTOL"), 100, false, true);
			}
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_230.f_3, 3, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_230.f_3, 13, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_230.f_3, 12, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_230.f_3, 0, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_230.f_3, 24, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_230.f_3, 34, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_230.f_3, 37, true);
			PED::SET_PED_SEEING_RANGE(Local_230.f_3, 300f);
			PED::SET_PED_HEARING_RANGE(Local_230.f_3, 300f);
			PED::SET_PED_ID_RANGE(Local_230.f_3, 300f);
			PED::SET_PED_COMBAT_MOVEMENT(Local_230.f_3, 1);
			PED::SET_PED_CAN_EVASIVE_DIVE(Local_230.f_3, true);
			PED::SET_PED_ACCURACY(Local_230.f_3, 80);
			PED::SET_PED_COMBAT_RANGE(Local_230.f_3, 2);
			PED::SET_PED_ANGLED_DEFENSIVE_AREA(Local_230.f_3, 203.7838f, -3326.7012f, 4.7901f, 204.288f, -3334.8457f, 6.883f, 5.5f, false, false);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_262, Local_230.f_413);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, Local_230.f_413, iLocal_262);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_270);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_270);
			TASK::TASK_SEEK_COVER_FROM_POS(0, 201.9434f, -3324.029f, 4.7888f, 5000, true);
			TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 200f, 0);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_270);
			TASK::TASK_PERFORM_SEQUENCE(Local_230.f_3, iLocal_270);
			PED::SET_PED_KEEP_TASK(Local_230.f_3, true);
		}
	}
}

void func_136()//Position - 0x5949
{
	int iVar0;
	Local_257.f_27[0] = VEHICLE::CREATE_VEHICLE(Local_257.f_32[0], func_138(1), func_137(1), true, true, false);
	Local_257.f_27[1] = VEHICLE::CREATE_VEHICLE(Local_257.f_32[1], func_138(2), func_137(2), true, true, false);
	Local_257.f_3[0] = PED::CREATE_PED_INSIDE_VEHICLE(Local_257.f_27[0], 26, Local_257.f_19[0], -1, true, true);
	Local_257.f_3[1] = PED::CREATE_PED_INSIDE_VEHICLE(Local_257.f_27[0], 26, Local_257.f_19[0], 0, true, true);
	Local_257.f_3[2] = PED::CREATE_PED_INSIDE_VEHICLE(Local_257.f_27[1], 26, Local_257.f_19[0], -1, true, true);
	Local_257.f_3[3] = PED::CREATE_PED_INSIDE_VEHICLE(Local_257.f_27[1], 26, Local_257.f_19[0], 0, true, true);
	VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(Local_257.f_27[1], "LuisLopz");
	__LIB_0__::func_222(&(Local_230.f_244), 6, Local_257.f_3[0], "TaxiBruce", 0, 1);
	AUDIO::SET_AMBIENT_VOICE_NAME(Local_257.f_3[0], "TaxiBruce");
	WEAPON::GIVE_WEAPON_TO_PED(Local_257.f_3[0], joaat("WEAPON_SMG"), 100, false, true);
	WEAPON::GIVE_WEAPON_TO_PED(Local_257.f_3[1], joaat("WEAPON_PISTOL"), 100, false, true);
	WEAPON::GIVE_WEAPON_TO_PED(Local_257.f_3[2], joaat("WEAPON_SMG"), 100, false, true);
	WEAPON::GIVE_WEAPON_TO_PED(Local_257.f_3[3], joaat("WEAPON_PISTOL"), 100, true, true);
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		PED::SET_PED_MONEY(Local_257.f_3[iVar0], MISC::GET_RANDOM_INT_IN_RANGE(50, 100));
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_257.f_3[iVar0], 2, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_257.f_3[iVar0], 13, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_257.f_3[iVar0], 1, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_257.f_3[iVar0], 3, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_257.f_3[iVar0], 37, true);
		PED::SET_PED_CONFIG_FLAG(Local_257.f_3[iVar0], 42, true);
		PED::SET_PED_SEEING_RANGE(Local_257.f_3[iVar0], 300f);
		PED::SET_PED_HEARING_RANGE(Local_257.f_3[iVar0], 300f);
		PED::SET_PED_ID_RANGE(Local_257.f_3[iVar0], 300f);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_257.f_3[iVar0], true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_257.f_3[iVar0], iLocal_262);
		PED::SET_PED_ACCURACY(Local_257.f_3[iVar0], 50);
		iVar0++;
	}
}

float func_137(int iParam0)//Position - 0x5B89
{
	switch (iParam0)
	{
		case 1:
			return 159.2139f;
			break;
		case 2:
			return 156.7733f;
			break;
	}
	return 0f;
}

Vector3 func_138(int iParam0)//Position - 0x5BBB
{
	switch (iParam0)
	{
		case 1:
			return 290.2584f, -3236.6604f, 4.8352f;
			break;
		case 2:
			return 299.2215f, -3235.248f, 4.7762f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_155(var uParam0, var uParam1)//Position - 0x6348
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (!PED::IS_PED_INJURED((*uParam0)[iVar0]))
		{
			if (!HUD::DOES_BLIP_EXIST((*uParam1)[iVar0]))
			{
				(*uParam1)[iVar0] = __LIB_0__::func_511((*uParam0)[iVar0], 0, 0);
			}
		}
		iVar0++;
	}
}

void func_162()//Position - 0x6455
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_230.f_3))
	{
		if (!PED::IS_PED_INJURED(Local_230.f_3))
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_230.f_3, Local_230.f_413);
			TASK::TASK_LOOK_AT_ENTITY(Local_230.f_3, Local_247.f_3[1], -1, 2048, 4);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_270);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_270);
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 262144);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_317, 1f, 30000, 0.25f, 0, 40000f);
			TASK::TASK_ACHIEVE_HEADING(0, -30.3f, 0);
			TASK::TASK_CLEAR_LOOK_AT(0);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_270);
			TASK::TASK_PERFORM_SEQUENCE(Local_230.f_3, iLocal_270);
		}
	}
}

void func_164(int iParam0, bool bParam1)//Position - 0x6507
{
	if (iParam0 < Local_165.f_0 && iParam0 >= 0)
	{
		if (bParam1)
		{
			__LIB_0__::func_989(&(Local_165.f_1[iParam0 /*4*/]), 2);
		}
		else
		{
			__LIB_0__::func_988(&(Local_165.f_1[iParam0 /*4*/]), 2);
		}
	}
}

int func_172(int iParam0, float fParam1, float fParam2, float fParam3)//Position - 0x6826
{
	if ((((CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN()) && !CAM::IS_SCREEN_FADING_OUT()) && !CAM::IS_SCREEN_FADED_OUT()) && !iParam0->f_142)
	{
		if (func_189(iParam0))
		{
			__LIB_39__::func_796(iParam0, &(iParam0->f_43));
			func_183(iParam0);
			func_182(iParam0);
			func_179(iParam0);
			func_178(iParam0, fParam2, fParam3);
			func_175(iParam0);
			return func_173(iParam0, fParam1);
		}
	}
	return 0;
}

int func_173(int iParam0, float fParam1)//Position - 0x689E
{
	if (__LIB_39__::func_787(iParam0) == 2)
	{
		if (ENTITY::IS_ENTITY_AT_COORD(iParam0->f_4, iParam0->f_17, (fParam1 + 1f), (fParam1 + 1f), 2f, !iParam0->f_140, true, 0))
		{
		}
		if (((__LIB_0__::func_724(iParam0->f_4, iParam0->f_17, 1) <= (fParam1 + 1f) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) < 1) && __LIB_0__::func_494(1, 1, 1)) && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iParam0->f_4))
		{
			return __LIB_39__::func_925(iParam0, 1, fParam1);
		}
	}
	else if (((ENTITY::IS_ENTITY_AT_COORD(iParam0->f_4, iParam0->f_17, (fParam1 + 1f), (fParam1 + 1f), 2f, !iParam0->f_140, true, 0) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) < 1) && __LIB_0__::func_494(1, 1, 1)) && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iParam0->f_4))
	{
		return __LIB_39__::func_925(iParam0, 1, fParam1);
	}
	return 0;
}

void func_175(int iParam0)//Position - 0x6A5A
{
	float fVar0;
	if ((func_177(iParam0) && __LIB_0__::func_703(iParam0->f_81, 67108864)) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
	{
		if ((MISC::GET_GAME_TIMER() - iLocal_89) >= 10000)
		{
			fVar0 = __LIB_14__::func_523(iParam0->f_17, 1);
			if (fVar0 > fLocal_87)
			{
				iLocal_88++;
			}
			else
			{
				iLocal_88 = 0;
			}
			fLocal_87 = fVar0;
			iLocal_89 = MISC::GET_GAME_TIMER();
		}
		if (iLocal_88 >= 2 && !__LIB_0__::func_75())
		{
			__LIB_43__::func_584(iParam0, 136, 1, 0, 1);
			iLocal_88 = 0;
		}
		if ((MISC::GET_GAME_TIMER() % 1000) < 50)
		{
		}
	}
	else
	{
		if ((MISC::GET_GAME_TIMER() % 4000) < 50)
		{
			if (!func_177(iParam0))
			{
			}
			if (!__LIB_0__::func_703(iParam0->f_81, 67108864))
			{
			}
		}
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
		{
			if (iLocal_88 > 0)
			{
				iLocal_88 = 0;
			}
		}
	}
}

int func_177(int iParam0)//Position - 0x6B4A
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_4, false))
	{
		if (!PED::IS_PED_INJURED(iParam0->f_3))
		{
			if (PED::IS_PED_IN_VEHICLE(iParam0->f_3, iParam0->f_4, true))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_178(int iParam0, float fParam1, float fParam2)//Position - 0x6B7F
{
	if (func_177(iParam0) && __LIB_0__::func_703(iParam0->f_44, 4))
	{
		if ((VEHICLE::IS_VEHICLE_STOPPED(iParam0->f_4) || ENTITY::GET_ENTITY_SPEED(iParam0->f_4) < 3f) && __LIB_39__::func_928(iParam0))
		{
			if (!__LIB_39__::func_929(iParam0, 2))
			{
				func_304(iParam0, 2);
			}
			else if (func_177(iParam0))
			{
				if (func_111(iParam0, 2) > fParam1 && !__LIB_39__::func_929(iParam0, 14))
				{
					if (__LIB_39__::func_785())
					{
						__LIB_43__::func_584(iParam0, 48, 1, 0, 0);
					}
					else
					{
						__LIB_43__::func_584(iParam0, 48, 1, 0, 0);
					}
					__LIB_39__::func_933(iParam0, 2, 0, 0);
					if (__LIB_39__::func_929(iParam0, 10))
					{
						__LIB_39__::func_933(iParam0, 10, 0, 0);
					}
				}
				if (!__LIB_39__::func_929(iParam0, 3))
				{
					__LIB_39__::func_933(iParam0, 3, 0, 0);
				}
				else if (func_111(iParam0, 3) >= fParam2)
				{
					__LIB_39__::func_927(iParam0, 3, 0);
					func_330(iParam0, "Car not moving", 20);
				}
			}
		}
		else
		{
			if (__LIB_39__::func_929(iParam0, 2))
			{
				__LIB_39__::func_927(iParam0, 2, 0);
			}
			if (__LIB_39__::func_929(iParam0, 3))
			{
				__LIB_39__::func_927(iParam0, 3, 0);
			}
		}
	}
}

void func_179(int iParam0)//Position - 0x6C9A
{
	if (__LIB_39__::func_799(iParam0))
	{
		func_180(iParam0);
	}
}

void func_180(int iParam0)//Position - 0x6CB1
{
	if (AUDIO::IS_RADIO_RETUNING() && iParam0->f_418.f_4 != 0)
	{
		iParam0->f_418.f_4 = 0;
	}
	switch (iParam0->f_418.f_4)
	{
		case 0:
			iParam0->f_418 = AUDIO::GET_PLAYER_RADIO_STATION_INDEX();
			__LIB_39__::func_927(iParam0, 20, 0);
			iParam0->f_418.f_4++;
			break;
		case 1:
			if (iParam0->f_418.f_8 && !iParam0->f_418 == iParam0->f_418.f_2)
			{
				if (func_111(iParam0, 20) > 3f)
				{
					__LIB_43__::func_584(iParam0, 87, 1, 0, 0);
					iParam0->f_418.f_8 = 0;
					iParam0->f_418.f_4++;
				}
			}
			else if (iParam0->f_418 == iParam0->f_418.f_1)
			{
				if (!__LIB_0__::func_703(iParam0->f_81, 262144) || !__LIB_0__::func_703(iParam0->f_81, 1048576))
				{
					if (func_111(iParam0, 20) > 5f)
					{
						iParam0->f_418.f_5 = 1;
						__LIB_43__::func_584(iParam0, 84, 1, 0, 0);
						iParam0->f_418.f_4++;
					}
				}
			}
			else if (iParam0->f_418 == iParam0->f_418.f_2)
			{
				if (!__LIB_0__::func_703(iParam0->f_82, 67108864))
				{
					if (func_111(iParam0, 20) > 5f)
					{
						iParam0->f_418.f_6 = 1;
						iParam0->f_418.f_8 = 0;
						__LIB_43__::func_584(iParam0, 85, 1, 0, 0);
						__LIB_39__::func_927(iParam0, 22, 0);
						iParam0->f_418.f_4++;
					}
				}
			}
			else if (iParam0->f_418.f_7)
			{
				if (func_111(iParam0, 20) > 8f)
				{
					__LIB_43__::func_584(iParam0, 86, 1, 0, 0);
					iParam0->f_418.f_4++;
				}
			}
			break;
		case 2:
			if (__LIB_0__::func_703(iParam0->f_81, 262144) || __LIB_0__::func_703(iParam0->f_82, 67108864))
			{
				if (!__LIB_39__::func_929(iParam0, 22))
				{
					func_304(iParam0, 22);
				}
			}
			if (__LIB_39__::func_929(iParam0, 22) && func_111(iParam0, 22) > 15f)
			{
				if (iParam0->f_418 == iParam0->f_418.f_1)
				{
					if (!__LIB_0__::func_703(iParam0->f_81, 1048576))
					{
						__LIB_43__::func_584(iParam0, 84, 1, 0, 0);
						__LIB_39__::func_927(iParam0, 22, 0);
					}
				}
				else if (iParam0->f_418 == iParam0->f_418.f_2)
				{
					if (!__LIB_0__::func_703(iParam0->f_82, 134217728))
					{
						__LIB_43__::func_584(iParam0, 85, 1, 0, 0);
						__LIB_39__::func_927(iParam0, 22, 0);
					}
				}
			}
			break;
	}
}

void func_182(int iParam0)//Position - 0x6F38
{
	if (PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::GET_PLAYER_INDEX()) && !__LIB_0__::func_703(iParam0->f_44, 2))
	{
		__LIB_39__::func_780(&(iParam0->f_44), 2);
	}
	else if (!PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::GET_PLAYER_INDEX()) && __LIB_0__::func_703(iParam0->f_44, 2))
	{
		__LIB_39__::func_851(&(iParam0->f_44), 2);
		iParam0->f_47++;
		__LIB_39__::func_852(9, 0);
	}
	if (iParam0->f_47 > 30)
	{
		__LIB_43__::func_584(iParam0, 47, 1, 0, 0);
		iParam0->f_47 = 0;
		iParam0->f_76 = (iParam0->f_76 + SYSTEM::CEIL(5f));
	}
}

void func_183(int iParam0)//Position - 0x6FC1
{
	if (!__LIB_0__::func_703(iParam0->f_44, 1))
	{
		switch (iParam0->f_412)
		{
			case 0:
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) >= 1)
				{
					if (func_111(iParam0, 9) > 1f)
					{
						func_187(iParam0, PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()));
						if (iParam0->f_410 != 22)
						{
							__LIB_43__::func_584(iParam0, 50, 1, 1, 0);
						}
						__LIB_39__::func_933(iParam0, 9, 0, 0);
						if (HUD::DOES_BLIP_EXIST(iParam0->f_9))
						{
							HUD::SET_BLIP_ALPHA(iParam0->f_9, 0);
							HUD::SET_BLIP_ROUTE(iParam0->f_9, false);
						}
						iParam0->f_140 = 1;
						iParam0->f_412 = 1;
					}
				}
				break;
			case 1:
				if (!__LIB_0__::func_75() && func_111(iParam0, 9) > 4f)
				{
					__LIB_43__::func_584(iParam0, 52, 1, 0, 0);
					iParam0->f_412 = 2;
				}
				break;
			case 2:
				if (__LIB_0__::func_501("TAXI_OBJ_POL", 0, 0))
				{
					if (iParam0->f_410 != 22)
					{
						__LIB_43__::func_584(iParam0, 51, 0, 0, 0);
					}
					iParam0->f_412 = 3;
				}
				else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) < 1)
				{
					iParam0->f_412 = 3;
				}
				break;
			case 3:
				if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::GET_PLAYER_INDEX(), func_185(iParam0)))
				{
					func_187(iParam0, PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()));
					__LIB_39__::func_852(6, 0);
				}
				if (!func_184(iParam0))
				{
					if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						if (func_111(iParam0, 16) > 10f)
						{
							if (iParam0->f_410 != 22)
							{
								__LIB_43__::func_584(iParam0, 51, 1, 0, 0);
							}
						}
					}
				}
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) < 1)
				{
					if (__LIB_0__::func_501("TAXI_OBJ_POL", 0, 0))
					{
						HUD::CLEAR_PRINTS();
					}
					if (HUD::DOES_BLIP_EXIST(iParam0->f_9))
					{
						HUD::SET_BLIP_ALPHA(iParam0->f_9, 255);
						HUD::SET_BLIP_ROUTE(iParam0->f_9, true);
					}
					iParam0->f_140 = 0;
					iParam0->f_412 = 4;
				}
				break;
			case 4:
				if (!__LIB_0__::func_75())
				{
					if (iParam0->f_410 != 22)
					{
						__LIB_43__::func_584(iParam0, 53, 1, 0, 1);
					}
					__LIB_39__::func_852(7, func_185(iParam0));
					func_187(iParam0, 0);
					iParam0->f_412 = 5;
				}
				break;
			case 5:
				if (!__LIB_0__::func_75())
				{
					__LIB_39__::func_927(iParam0, 9, 0);
					__LIB_39__::func_933(iParam0, 11, 0, 0);
					iParam0->f_412 = 0;
				}
				break;
			}
	}
}

bool func_184(int iParam0)//Position - 0x71E5
{
	return iParam0->f_110;
}

int func_185(int iParam0)//Position - 0x71F1
{
	return iParam0->f_106;
}

void func_187(int iParam0, int iParam1)//Position - 0x721B
{
	if (iParam0->f_106 != iParam1)
	{
		iParam0->f_106 = iParam1;
	}
}

int func_189(var uParam0)//Position - 0x7253
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (!PED::IS_PED_INJURED(uParam0->f_3))
		{
			if (!PED::IS_PED_IN_VEHICLE(uParam0->f_3, uParam0->f_4, true) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(uParam0->f_3))
			{
				func_330(uParam0, "Passenger left car.", 9);
			}
			else if (func_199(uParam0))
			{
				if (__LIB_0__::func_501("TAXI_OBJ_PICKUP", 0, 0))
				{
					HUD::CLEAR_THIS_PRINT("TAXI_OBJ_PICKUP");
				}
				if (CAM::IS_SCREEN_FADED_IN())
				{
					return 1;
				}
			}
			else
			{
				if ((MISC::GET_GAME_TIMER() % 1000) < 50)
				{
				}
				func_190(uParam0, 1);
			}
		}
	}
	return 0;
}

void func_190(var uParam0, bool bParam1)//Position - 0x72E2
{
	func_198(uParam0, uParam0->f_3);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (!PED::IS_PED_IN_VEHICLE(uParam0->f_2, uParam0->f_4, false))
		{
			if (!__LIB_39__::func_929(uParam0, 14))
			{
				if (__LIB_0__::func_75())
				{
					__LIB_0__::func_620(1);
				}
				__LIB_39__::func_797(uParam0, 11, 1);
				func_191(uParam0, 1);
				__LIB_39__::func_933(uParam0, 14, 0f, 1);
				if (uParam0->f_410 < 15)
				{
				}
			}
			else if (bParam1)
			{
				if (!func_177(uParam0))
				{
					if ((MISC::GET_GAME_TIMER() % 1000) < 50)
					{
					}
					if (PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_2, false))
					{
						if (func_111(uParam0, 15) > 5f)
						{
							__LIB_39__::func_933(uParam0, 15, 0f, 1);
						}
					}
					if (func_111(uParam0, 14) > 20f)
					{
						func_330(uParam0, "Player not in taxi. - YELL RETURN", 8);
					}
				}
				else if (func_111(uParam0, 14) > 20f)
				{
					if (__LIB_14__::func_556(uParam0->f_4, 1) > 40f)
					{
						func_330(uParam0, "Player not in taxi.", 21);
					}
					else
					{
						func_330(uParam0, "Player not in taxi. - YELL RETURN 2", 8);
					}
				}
			}
		}
	}
}

void func_191(var uParam0, bool bParam1)//Position - 0x73ED
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (bParam1)
		{
			if (HUD::DOES_BLIP_EXIST(uParam0->f_8))
			{
				HUD::SET_BLIP_ALPHA(uParam0->f_8, 0);
				HUD::SET_BLIP_ROUTE(uParam0->f_8, false);
				__LIB_43__::func_916(uParam0, &(uParam0->f_98), 4, 3);
			}
			else if (HUD::DOES_BLIP_EXIST(uParam0->f_9))
			{
				HUD::SET_BLIP_ALPHA(uParam0->f_9, 0);
				HUD::SET_BLIP_ROUTE(uParam0->f_9, false);
				HUD::CLEAR_PRINTS();
				if (func_177(uParam0))
				{
					__LIB_43__::func_584(uParam0, 2, 1, 0, 0);
				}
				else
				{
					__LIB_43__::func_916(uParam0, &(uParam0->f_98), 4, 3);
				}
			}
			__LIB_43__::func_915(uParam0, 0, 0);
		}
		else if (HUD::DOES_BLIP_EXIST(uParam0->f_10))
		{
			HUD::REMOVE_BLIP(&(uParam0->f_10));
			if (HUD::DOES_BLIP_EXIST(uParam0->f_8))
			{
				HUD::SET_BLIP_ALPHA(uParam0->f_8, 255);
				HUD::SET_BLIP_ROUTE(uParam0->f_8, true);
			}
			else if (HUD::DOES_BLIP_EXIST(uParam0->f_9))
			{
				if (uParam0->f_411 == 5 && uParam0->f_410 == 17)
				{
					HUD::SET_BLIP_ALPHA(uParam0->f_9, 0);
					HUD::SET_BLIP_ROUTE(uParam0->f_9, false);
				}
				else if (uParam0->f_411 != 4)
				{
					HUD::SET_BLIP_ALPHA(uParam0->f_9, 255);
					HUD::SET_BLIP_ROUTE(uParam0->f_9, true);
				}
			}
			HUD::CLEAR_PRINTS();
		}
	}
}

void func_198(var uParam0, int iParam1)//Position - 0x75F2
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (!PED::IS_PED_INJURED(iParam1))
		{
			if (PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID()))
			{
				if ((WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(iParam1, joaat("WEAPON_STUNGUN"), 0) || WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(iParam1, 0, 2)) || WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(iParam1, 0, 1))
				{
					func_330(uParam0, "Passenger injured by player with weapon.", 14);
				}
				PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
			}
		}
	}
}

int func_199(var uParam0)//Position - 0x7657
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, -1, false) == uParam0->f_2)
		{
			if (__LIB_39__::func_929(uParam0, 14))
			{
				__LIB_39__::func_944(uParam0);
			}
			func_191(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

void func_206(var uParam0)//Position - 0x7771
{
	uParam0->f_120 = 0;
}

void func_208()//Position - 0x77A8
{
	switch (iLocal_263)
	{
		case 0:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_230.f_4, false) && __LIB_0__::func_724(Local_230.f_4, Local_230.f_17, 1) < 300f)
			{
				func_223();
				iLocal_263 = 1;
			}
			break;
		case 1:
			if (func_221())
			{
				iLocal_263 = 2;
			}
			break;
		case 2:
			if (!bLocal_302)
			{
				func_218();
				func_217();
				func_213();
				func_212();
				func_211();
				func_210();
				iLocal_263 = 3;
				bLocal_302 = true;
			}
			break;
		case 3:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_230.f_4, false) && __LIB_0__::func_724(Local_230.f_4, Local_230.f_17, 1) > 350f)
			{
				func_209();
				iLocal_263 = 0;
			}
			break;
	}
}

void func_209()//Position - 0x7870
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_266);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_267);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_268);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_247.f_19[0]);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_247.f_19[1]);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_247.f_32[0]);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_247.f_32[1]);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_247.f_32[2]);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_247.f_32[3]);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_257.f_32[1]);
	VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_285, func_134(0));
	VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_285, func_134(1));
	STREAMING::REMOVE_ANIM_DICT("random@countryside_gang_fight");
	STREAMING::REMOVE_ANIM_DICT(sLocal_319);
}

void func_210()//Position - 0x7908
{
	iLocal_271[0] = OBJECT::CREATE_OBJECT(iLocal_266, 204.84451f, -3333.9983f, 4.795367f, true, true, false);
	ENTITY::SET_ENTITY_COORDS(iLocal_271[0], 204.84451f, -3333.9983f, 4.795367f, true, false, false, true);
	ENTITY::SET_ENTITY_ROTATION(iLocal_271[0], -0.036243f, -0.00124f, 91.56063f, 2, true);
	iLocal_271[1] = OBJECT::CREATE_OBJECT(iLocal_266, 212.67f, -3328.77f, 4.79f, true, true, false);
	ENTITY::SET_ENTITY_COORDS(iLocal_271[1], 212.67f, -3328.77f, 4.79f, true, false, false, true);
	ENTITY::SET_ENTITY_ROTATION(iLocal_271[1], -0.04f, -0.01f, 86.36f, 2, true);
	iLocal_271[2] = OBJECT::CREATE_OBJECT(iLocal_266, 204.8248f, -3328.631f, 4.7915f, true, true, false);
	ENTITY::SET_ENTITY_COORDS(iLocal_271[2], 204.8248f, -3328.631f, 4.7915f, true, false, false, true);
	ENTITY::SET_ENTITY_ROTATION(iLocal_271[2], -0.0027f, -0.0374f, 0.1414f, 2, true);
	iLocal_273 = OBJECT::CREATE_OBJECT(iLocal_267, 214.2505f, -3314.6729f, 4.7883f, true, true, false);
	ENTITY::SET_ENTITY_COORDS(iLocal_273, 214.2505f, -3314.6729f, 4.7883f, true, false, false, true);
	ENTITY::SET_ENTITY_ROTATION(iLocal_273, 0f, 0f, -17.399f, 2, true);
	if (STREAMING::HAS_MODEL_LOADED(iLocal_268))
	{
		iLocal_272 = OBJECT::CREATE_OBJECT(iLocal_268, 220.7266f, -3320.0015f, 5.2749f, true, true, false);
		ENTITY::SET_ENTITY_COORDS(iLocal_272, 220.7266f, -3320.0015f, 5.2749f, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(iLocal_272, 0f, 0f, 0f, 2, true);
	}
}

void func_211()//Position - 0x7AA7
{
	if ((!PED::IS_PED_INJURED(iLocal_274[0]) && !PED::IS_PED_INJURED(iLocal_274[0])) && !PED::IS_PED_INJURED(Local_247.f_3[3]))
	{
		iLocal_291 = PED::CREATE_SYNCHRONIZED_SCENE(Local_313, Local_314, 2);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_291, true);
		TASK::TASK_SYNCHRONIZED_SCENE(Local_247.f_3[3], iLocal_291, sLocal_319, "hooker_loop_a_biker_d", 1000f, -1000f, 64, 0, 1000f, 0);
		TASK::TASK_SYNCHRONIZED_SCENE(iLocal_274[0], iLocal_291, sLocal_319, "hooker_loop_a_hooker_a", 1000f, -1000f, 64, 0, 1000f, 0);
		TASK::TASK_SYNCHRONIZED_SCENE(iLocal_274[1], iLocal_291, sLocal_319, "hooker_loop_a_hooker_b", 1000f, -1000f, 64, 0, 1000f, 0);
	}
	if ((!PED::IS_PED_INJURED(Local_247.f_3[0]) && !PED::IS_PED_INJURED(Local_247.f_3[1])) && !PED::IS_PED_INJURED(Local_247.f_3[2]))
	{
		WEAPON::GIVE_WEAPON_TO_PED(Local_247.f_3[0], joaat("WEAPON_PISTOL"), -1, true, true);
		iLocal_295 = PED::CREATE_SYNCHRONIZED_SCENE(Local_315, Local_316, 2);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_295, true);
		TASK::TASK_SYNCHRONIZED_SCENE(Local_247.f_3[0], iLocal_295, "oddjobs@taxi@argument", "idle_a_biker_a", 1000f, -1000f, 0, 0, 1000f, 0);
		TASK::TASK_SYNCHRONIZED_SCENE(Local_247.f_3[1], iLocal_295, "oddjobs@taxi@argument", "idle_a_biker_b", 1000f, -1000f, 0, 0, 1000f, 0);
		TASK::TASK_SYNCHRONIZED_SCENE(Local_247.f_3[2], iLocal_295, "oddjobs@taxi@argument", "idle_a_biker_c", 1000f, -1000f, 0, 0, 1000f, 0);
	}
}

void func_212()//Position - 0x7C47
{
	int iVar0;
	iVar0 = 0;
	__LIB_0__::func_222(&(Local_230.f_244), 4, Local_247.f_3[1], "TaxiDom", 0, 1);
	__LIB_0__::func_222(&(Local_230.f_244), 5, Local_247.f_3[3], "TaxiGangM", 0, 1);
	AUDIO::SET_AMBIENT_VOICE_NAME(Local_247.f_3[1], "TaxiDom");
	AUDIO::SET_AMBIENT_VOICE_NAME(Local_247.f_3[3], "TaxiGangM");
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		PED::SET_PED_MONEY(Local_247.f_3[iVar0], MISC::GET_RANDOM_INT_IN_RANGE(20, 50));
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_247.f_3[iVar0], 2, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_247.f_3[iVar0], 13, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_247.f_3[iVar0], 1, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_247.f_3[iVar0], 3, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_247.f_3[iVar0], 37, true);
		PED::SET_PED_CONFIG_FLAG(Local_247.f_3[iVar0], 42, true);
		PED::SET_PED_SEEING_RANGE(Local_247.f_3[iVar0], 300f);
		PED::SET_PED_HEARING_RANGE(Local_247.f_3[iVar0], 300f);
		PED::SET_PED_ID_RANGE(Local_247.f_3[iVar0], 300f);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_247.f_3[iVar0], false);
		PED::SET_PED_ACCURACY(Local_247.f_3[iVar0], 1);
		iVar0++;
	}
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_247.f_3[0], iLocal_262);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_247.f_3[1], iLocal_262);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_247.f_3[2], iLocal_262);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_247.f_3[3], iLocal_262);
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		PED::SET_PED_CONFIG_FLAG(iLocal_274[iVar0], 42, true);
		PED::SET_PED_SEEING_RANGE(iLocal_274[iVar0], 100f);
		PED::SET_PED_HEARING_RANGE(iLocal_274[iVar0], 100f);
		PED::SET_PED_ID_RANGE(iLocal_274[iVar0], 100f);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_274[iVar0], true);
		iVar0++;
	}
	__LIB_0__::func_222(&(Local_230.f_244), 7, iLocal_274[1], "TaxiGangGirl2", 0, 1);
	__LIB_0__::func_222(&(Local_230.f_244), 8, iLocal_274[0], "TaxiGangGirl1", 0, 1);
	AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_274[1], "TaxiGangGirl2");
	AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_274[0], "TaxiGangGirl1");
}

void func_213()//Position - 0x7E58
{
	Local_247.f_3[0] = PED::CREATE_PED(26, Local_247.f_19[0], func_216(1), func_215(1), true, true);
	Local_247.f_3[1] = PED::CREATE_PED(26, Local_247.f_19[0], func_214(2), 0f, true, true);
	Local_247.f_3[2] = PED::CREATE_PED(26, Local_247.f_19[0], func_216(3), func_215(3), true, true);
	Local_247.f_3[3] = PED::CREATE_PED(26, Local_247.f_19[0], func_216(4), func_215(4), true, true);
	PED::SET_PED_CONFIG_FLAG(Local_247.f_3[1], 20, true);
	iLocal_274[0] = PED::CREATE_PED(26, Local_247.f_19[1], func_216(5), func_215(5), true, true);
	iLocal_274[1] = PED::CREATE_PED(26, Local_247.f_19[1], func_216(6), func_215(6), true, true);
	PED::SET_PED_CAN_BE_TARGETTED(iLocal_274[0], false);
	PED::SET_PED_CAN_BE_TARGETTED(iLocal_274[1], false);
	if (!ENTITY::IS_ENTITY_DEAD(Local_247.f_3[0], false))
	{
		PED::SET_PED_COMPONENT_VARIATION(Local_247.f_3[0], 0, 1, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_247.f_3[0], 3, 0, 5, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_247.f_3[0], 4, 0, 2, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_247.f_3[0], 10, 0, 0, 0);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_247.f_3[1], false))
	{
		PED::SET_PED_COMPONENT_VARIATION(Local_247.f_3[1], 0, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_247.f_3[1], 3, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_247.f_3[1], 4, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_247.f_3[1], 10, 0, 1, 0);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_247.f_3[2], false))
	{
		PED::SET_PED_COMPONENT_VARIATION(Local_247.f_3[2], 0, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_247.f_3[2], 3, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_247.f_3[2], 4, 1, 2, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_247.f_3[2], 10, 1, 0, 0);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_247.f_3[3], false))
	{
		PED::SET_PED_COMPONENT_VARIATION(Local_247.f_3[3], 0, 0, 2, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_247.f_3[3], 3, 1, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_247.f_3[3], 4, 0, 2, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_247.f_3[3], 10, 1, 0, 0);
	}
}

Vector3 func_214(int iParam0)//Position - 0x8092
{
	switch (iParam0)
	{
		case 1:
			return 202.24f, -3322.48f, 5.79f;
			break;
		case 2:
			return 203.4f, -3323.22f, 5.79f;
			break;
		case 3:
			return 205.66f, -3322.41f, 5.8f;
			break;
	}
	return 0f, 0f, 0f;
}

float func_215(int iParam0)//Position - 0x80F5
{
	switch (iParam0)
	{
		case 1:
			return 251.3766f;
			break;
		case 2:
			return -129.32f;
			break;
		case 3:
			return 39.53f;
			break;
		case 4:
			return -139.98f;
			break;
		case 5:
			return 147.25f;
			break;
		case 6:
			return 68.18f;
			break;
	}
	return 0f;
}

Vector3 func_216(int iParam0)//Position - 0x816B
{
	switch (iParam0)
	{
		case 1:
			return 202.35f, -3321.76f, 4.79f;
			break;
		case 2:
			return 204.27f, -3321.77f, 5.79f;
			break;
		case 3:
			return 204.93f, -3322.56f, 4.79f;
			break;
		case 4:
			return 218.19f, -3323.58f, 5.8f;
			break;
		case 5:
			return 219.52f, -3324f, 5.8f;
			break;
		case 6:
			return 220.14f, -3325.39f, 5.8f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_217()//Position - 0x821F
{
	VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_247.f_27[2], 5, false, false);
	VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_247.f_27[3], 5, false, false);
}

void func_218()//Position - 0x8245
{
	Local_247.f_27[0] = VEHICLE::CREATE_VEHICLE(Local_247.f_32[0], func_220(1), func_219(1), true, true, false);
	Local_247.f_27[1] = VEHICLE::CREATE_VEHICLE(Local_247.f_32[1], func_220(2), func_219(2), true, true, false);
	Local_247.f_27[2] = VEHICLE::CREATE_VEHICLE(Local_247.f_32[3], func_220(3), func_219(3), true, true, false);
	Local_247.f_27[3] = VEHICLE::CREATE_VEHICLE(Local_247.f_32[3], func_220(4), func_219(4), true, true, false);
	iLocal_276 = VEHICLE::CREATE_VEHICLE(Local_247.f_32[2], func_220(5), func_219(5), true, true, false);
	VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(Local_247.f_27[2], "NikoB");
	VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(Local_247.f_27[3], "RomanB");
}

float func_219(int iParam0)//Position - 0x830D
{
	switch (iParam0)
	{
		case 1:
			return 301.96f;
			break;
		case 2:
			return 33.5561f;
			break;
		case 3:
			return 87.9127f;
			break;
		case 4:
			return 195.38f;
			break;
		case 5:
			return 35.3307f;
			break;
	}
	return 0f;
}

Vector3 func_220(int iParam0)//Position - 0x8372
{
	switch (iParam0)
	{
		case 1:
			return 208.8206f, -3319.28f, 4.7925f;
			break;
		case 2:
			return 202.0773f, -3320.3933f, 4.7657f;
			break;
		case 3:
			return 216.1051f, -3318.8367f, 4.7918f;
			break;
		case 4:
			return 221.6868f, -3324.7466f, 5.3063f;
			break;
		case 5:
			return 200.1736f, -3320.6655f, 4.7361f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_221()//Position - 0x840B
{
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_266))
	{
		__LIB_39__::func_778("TAXI_ASSETS_STREAMED - Loading PROP_BOXPILE_02C", &iLocal_281, 1000);
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_267))
	{
		__LIB_39__::func_778("TAXI_ASSETS_STREAMED - Loading PROP_CARDBORDBOX_03A", &iLocal_281, 1000);
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(Local_247.f_19[0]))
	{
		__LIB_39__::func_778("TAXI_ASSETS_STREAMED - Loading Baddie driver model", &iLocal_281, 1000);
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(Local_247.f_19[1]))
	{
		__LIB_39__::func_778("TAXI_ASSETS_STREAMED - Loading Gangster girl model", &iLocal_281, 1000);
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(Local_247.f_32[0]))
	{
		__LIB_39__::func_778("TAXI_ASSETS_STREAMED - Loading modelName_Car1 model", &iLocal_281, 1000);
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(Local_247.f_32[1]))
	{
		__LIB_39__::func_778("TAXI_ASSETS_STREAMED - Loading modelName_Car2 model", &iLocal_281, 1000);
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(Local_247.f_32[2]))
	{
		__LIB_39__::func_778("TAXI_ASSETS_STREAMED - Loading modelName_Car3 model", &iLocal_281, 1000);
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(Local_247.f_32[3]))
	{
		__LIB_39__::func_778("TAXI_ASSETS_STREAMED - Loading modelName_Car4 model", &iLocal_281, 1000);
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(Local_257.f_32[1]))
	{
		__LIB_39__::func_778("TAXI_ASSETS_STREAMED - Loading modelName_Car5 model", &iLocal_281, 1000);
		return 0;
	}
	if (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_285, func_134(0)))
	{
		__LIB_39__::func_778("TAXI_ASSETS_STREAMING - Vehicle Recording Loading TXM12_S01_A...", &iLocal_281, 1000);
		return 0;
	}
	if (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_285, func_134(1)))
	{
		__LIB_39__::func_778("TAXI_ASSETS_STREAMING - Vehicle Recording Loading TXM12_S01_B...", &iLocal_281, 1000);
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("random@countryside_gang_fight"))
	{
		__LIB_39__::func_778("TAXI_ASSETS_STREAMED - Loading random@countryside_gang_fight ", &iLocal_281, 1000);
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED(sLocal_319))
	{
		__LIB_39__::func_778("TAXI_ASSETS_STREAMED - Loading sSyncSceneDict ", &iLocal_281, 1000);
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_268))
	{
		__LIB_39__::func_778("TAXI_ASSETS_STREAMED - Loading PROP_BARREL_EXP_01A", &iLocal_281, 1000);
	}
	return 1;
}

void func_223()//Position - 0x85F3
{
	STREAMING::REQUEST_MODEL(iLocal_266);
	STREAMING::REQUEST_MODEL(iLocal_267);
	STREAMING::REQUEST_MODEL(iLocal_268);
	STREAMING::REQUEST_MODEL(Local_247.f_19[0]);
	STREAMING::REQUEST_MODEL(Local_247.f_19[1]);
	STREAMING::REQUEST_MODEL(Local_247.f_32[0]);
	STREAMING::REQUEST_MODEL(Local_247.f_32[1]);
	STREAMING::REQUEST_MODEL(Local_247.f_32[2]);
	STREAMING::REQUEST_MODEL(Local_247.f_32[3]);
	STREAMING::REQUEST_MODEL(Local_257.f_32[1]);
	VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_285, func_134(0));
	VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_285, func_134(1));
	STREAMING::REQUEST_ANIM_DICT("random@countryside_gang_fight");
	STREAMING::REQUEST_ANIM_DICT(sLocal_319);
}

void func_224()//Position - 0x868B
{
	__LIB_39__::func_780(&(Local_230.f_55), 2);
	__LIB_39__::func_780(&(Local_230.f_55), 4);
	__LIB_39__::func_780(&(Local_230.f_55), 16);
	__LIB_39__::func_780(&(Local_230.f_55), 64);
	__LIB_39__::func_780(&(Local_230.f_55), 256);
	__LIB_39__::func_780(&(Local_230.f_55), 512);
	__LIB_39__::func_780(&(Local_230.f_55), 1024);
	__LIB_39__::func_780(&(Local_230.f_55), 2048);
	__LIB_39__::func_780(&(Local_230.f_55), 4096);
	__LIB_39__::func_780(&(Local_230.f_55), 1073741824);
	__LIB_39__::func_780(&(Local_230.f_100), 8);
	__LIB_39__::func_780(&(Local_230.f_100), 2048);
	__LIB_39__::func_780(&(Local_230.f_100), 256);
	__LIB_39__::func_780(&uLocal_380, 2);
}

void func_227(int iParam0)//Position - 0x87B8
{
	PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0);
	__LIB_39__::func_805(iParam0, 1000);
}

int func_232(int iParam0)//Position - 0x88AA
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_4, false))
	{
		if (!PED::IS_PED_INJURED(iParam0->f_3))
		{
			if ((PED::IS_PED_GETTING_INTO_A_VEHICLE(iParam0->f_3) && (MISC::GET_GAME_TIMER() - iLocal_81) > 500) || PED::IS_PED_IN_VEHICLE(iParam0->f_3, iParam0->f_4, true))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_233(int iParam0, bool bParam1, float fParam2)//Position - 0x88FD
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_4, false))
	{
		if (!PED::IS_PED_IN_VEHICLE(iParam0->f_2, iParam0->f_4, false))
		{
			if ((MISC::GET_GAME_TIMER() % 1000) < 50)
			{
			}
			func_190(iParam0, 1);
			if (__LIB_39__::func_878())
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0);
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0->f_3, joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD")) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0->f_3, joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD")) == 0)
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0->f_3);
				iParam0->f_48 = 0;
				iLocal_79 = 0;
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(iParam0->f_3, PLAYER::PLAYER_PED_ID(), 0);
			}
		}
		else if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::GET_PLAYER_INDEX(), 0))
		{
			func_258(iParam0);
			if (iParam0->f_48 > 1)
			{
				TASK::CLEAR_SEQUENCE_TASK(&iVar3);
				TASK::OPEN_SEQUENCE_TASK(&iVar3);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, iParam0->f_11, iParam0->f_6, 20000, 0.25f, 0, 40000f);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iParam0->f_4, 0);
				TASK::CLOSE_SEQUENCE_TASK(iVar3);
				TASK::TASK_PERFORM_SEQUENCE(iParam0->f_3, iVar3);
				iParam0->f_48 = 0;
			}
		}
		else
		{
			if (__LIB_39__::func_929(iParam0, 14))
			{
				__LIB_39__::func_944(iParam0);
				func_191(iParam0, 0);
			}
			if (__LIB_39__::func_929(iParam0, 9))
			{
				__LIB_39__::func_927(iParam0, 9, 0);
				HUD::CLEAR_PRINTS();
				if (HUD::DOES_BLIP_EXIST(iParam0->f_8))
				{
					HUD::SET_BLIP_ALPHA(iParam0->f_8, 255);
					HUD::SET_BLIP_ROUTE(iParam0->f_8, true);
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_3, false))
			{
				fVar4 = ((ENTITY::GET_ENTITY_SPEED(iParam0->f_4) / 5f) + 4f);
				if (iParam0->f_141 && __LIB_39__::func_939(iParam0, iParam0->f_3) > 300f)
				{
					func_330(iParam0, "Left Passenger", 8);
				}
				switch (iParam0->f_48)
				{
					case 0:
						if (TASK::GET_SCRIPT_TASK_STATUS(iParam0->f_3, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1 || ((__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iParam0->f_3, 1) < 20f && __LIB_0__::func_724(iParam0->f_3, iParam0->f_11, 1) <= 28f) && __LIB_0__::func_724(iParam0->f_4, iParam0->f_11, 1) <= 28f))
						{
							if (__LIB_43__::func_917(iParam0, fParam2))
							{
								iParam0->f_48++;
							}
						}
						break;
					case 1:
						if (func_253(iParam0, 0, 28f, fVar4, 4f))
						{
							iParam0->f_138 = 1;
							if (bLocal_86)
							{
								iParam0->f_7 = __LIB_39__::func_871(iParam0->f_4, iParam0->f_3);
								iVar0 = __LIB_39__::func_791(iParam0, &iVar1);
								if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
								{
									if (iVar1 == iParam0->f_7)
									{
										if (iParam0->f_7 == 1)
										{
											iVar2 = 262144;
										}
										else if (iParam0->f_7 == 2)
										{
											iVar2 = 131072;
										}
										TASK::TASK_LEAVE_ANY_VEHICLE(iVar0, 0, iVar2);
									}
									else
									{
										TASK::TASK_LEAVE_ANY_VEHICLE(iVar0, 0, 0);
									}
								}
								if (iParam0->f_411 == 0)
								{
									if (VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(iParam0->f_3, iParam0->f_4, 0, false, false))
									{
										if (iParam0->f_7 == 2)
										{
											iParam0->f_7 = 0;
											if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
											{
												TASK::TASK_LEAVE_ANY_VEHICLE(iVar0, 0, 4096);
											}
										}
									}
								}
							}
							TASK::CLEAR_PED_TASKS(iParam0->f_3);
							TASK::TASK_ENTER_VEHICLE(iParam0->f_3, iParam0->f_4, 20000, iParam0->f_7, iParam0->f_6, 1, 0);
							iParam0->f_48++;
						}
						else
						{
							if (bParam1)
							{
								GRAPHICS::DRAW_DEBUG_SPHERE(ENTITY::GET_ENTITY_COORDS(iParam0->f_3, true), fVar4, 0, 0, 255, 150);
							}
							if (!__LIB_39__::func_928(iParam0))
							{
								TASK::CLEAR_PED_TASKS(iParam0->f_3);
							}
							else if (((TASK::GET_SCRIPT_TASK_STATUS(iParam0->f_3, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iParam0->f_3, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 0) && TASK::GET_SCRIPT_TASK_STATUS(iParam0->f_3, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 7) && __LIB_39__::func_939(iParam0, iParam0->f_3) > 8f)
							{
								TASK::CLEAR_SEQUENCE_TASK(&(iParam0->f_243));
								TASK::OPEN_SEQUENCE_TASK(&(iParam0->f_243));
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
								if (iParam0->f_411 != 9)
								{
									TASK::TASK_PLAY_ANIM(0, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0f, false, false, false);
								}
								else
								{
									TASK::TASK_PLAY_ANIM(0, "oddjobs@towingcome_here", "come_here_idle_c", 8f, -8f, -1, 48, 0f, false, false, false);
								}
								TASK::CLOSE_SEQUENCE_TASK(iParam0->f_243);
								TASK::TASK_PERFORM_SEQUENCE(iParam0->f_3, iParam0->f_243);
							}
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
							{
								ENTITY::SET_ENTITY_ANIM_SPEED(iParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 1.75f);
							}
						}
						break;
					case 2:
						if (bLocal_86)
						{
							if (__LIB_0__::func_76(iParam0->f_4, iParam0->f_3, 1) < 3f)
							{
								if (!__LIB_39__::func_809(iParam0, 1))
								{
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0->f_3);
									func_330(iParam0, "You had a dead body in your back seat.", 5);
								}
								else if (!__LIB_39__::func_777(iParam0->f_4))
								{
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0->f_3);
									func_330(iParam0, "You had a dead body in your back seat.", 0);
								}
							}
						}
						func_247(iParam0);
						if (__LIB_39__::func_939(iParam0, iParam0->f_3) < fVar4 || __LIB_39__::func_878())
						{
							if (PED::IS_PED_IN_VEHICLE(iParam0->f_2, iParam0->f_4, false))
							{
								if (func_235(iParam0))
								{
									func_234(iParam0);
									iLocal_81 = MISC::GET_GAME_TIMER();
									PED::SET_PED_CONFIG_FLAG(iParam0->f_3, 26, true);
									__LIB_39__::func_927(iParam0, 5, 0);
									HUD::CLEAR_GPS_FLAGS();
									STATS::STAT_GET_FLOAT(iParam0->f_428, &(iParam0->f_42), -1);
									PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(iParam0->f_3, false);
									return 1;
								}
							}
						}
						else if (bParam1)
						{
							GRAPHICS::DRAW_DEBUG_SPHERE(ENTITY::GET_ENTITY_COORDS(iParam0->f_3, true), fVar4, 0, 0, 255, 150);
						}
						break;
					}
				}
			}
	}
	return 0;
}

void func_234(int iParam0)//Position - 0x8E0F
{
	if (HUD::DOES_BLIP_EXIST(iParam0->f_8))
	{
		HUD::SET_BLIP_ROUTE(iParam0->f_8, false);
		HUD::REMOVE_BLIP(&(iParam0->f_8));
	}
}

int func_235(int iParam0)//Position - 0x8E33
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	struct<3> Var7;
	__LIB_39__::func_778("UPDATE_PASSENGER_ENTER_CUTSCENE", &(iParam0->f_78), 1000);
	iVar6 = -1;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_3, false) && !ENTITY::IS_ENTITY_DEAD(iParam0->f_4, false))
	{
		__LIB_39__::func_898();
	}
	if (bLocal_86)
	{
		iLocal_78 = 10;
	}
	if ((iLocal_78 < 7 && iLocal_78 > 0) && !bLocal_86)
	{
		if (__LIB_14__::func_562(iLocal_80))
		{
			iLocal_78 = 7;
		}
	}
	switch (iLocal_78)
	{
		case 0:
			if (__LIB_39__::func_925(iParam0, 0, 1084227584) && __LIB_0__::func_494(1, 1, 1))
			{
				if (__LIB_39__::func_809(iParam0, 1))
				{
					iLocal_80 = MISC::GET_GAME_TIMER();
					SYSTEM::SETTIMERA(0);
					iLocal_78 = 1;
				}
				else
				{
					func_330(iParam0, "You had a dead body in your back seat.", 5);
				}
			}
			break;
		case 1:
			if (SYSTEM::TIMERA() > 500)
			{
				iParam0->f_7 = __LIB_39__::func_871(iParam0->f_4, iParam0->f_3);
				iVar3 = __LIB_39__::func_791(iParam0, &iVar4);
				if (!ENTITY::IS_ENTITY_DEAD(iVar3, false))
				{
					if (iVar4 == iParam0->f_7)
					{
						if (iParam0->f_7 == 1)
						{
							iVar5 = 262144;
						}
						else
						{
							iVar5 = 131072;
						}
						TASK::TASK_LEAVE_ANY_VEHICLE(iVar3, 0, iVar5);
					}
					else
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(iVar3, 0, 0);
					}
				}
				if (iParam0->f_411 == 0)
				{
					if (VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(iParam0->f_3, iParam0->f_4, 0, false, false))
					{
						iParam0->f_7 = 0;
						if (!ENTITY::IS_ENTITY_DEAD(iVar3, false))
						{
							TASK::TASK_LEAVE_ANY_VEHICLE(iVar3, 0, 4096);
						}
					}
				}
				iLocal_78 = 2;
			}
			break;
		case 2:
			if (iParam0->f_7 == 0)
			{
				Var2 = { 1.5f, 0f, -0.6422f };
				Var0 = { -1.4309f, 3.958f, 3.5037f };
				Var1 = { 0.1017f, 1.3354f, -0.0925f };
			}
			else if (iParam0->f_7 == 2)
			{
				Var2 = { 1.5f, -1f, -0.6422f };
				Var0 = { 1.4309f, 3.958f, 0.5037f };
				Var1 = { 0.1017f, 1.3354f, -0.0925f };
			}
			else
			{
				Var2 = { -1.5f, -1f, -0.6422f };
				Var0 = { -1.4823f, 4.2333f, 0.5939f };
				Var1 = { -0.4718f, 1.4282f, 0.3619f };
			}
			iVar6 = __LIB_39__::func_808(&(iParam0->f_409), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0->f_4, 0f, 2.2f, 0.275f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0->f_4, Var0), 1);
			if (iVar6 == 1)
			{
				Var0.f_2 = (Var0.f_2 + 1.5f);
				if (iParam0->f_7 == 2)
				{
					Var1 = { 0.7632f, 1.4884f, 0.4369f };
				}
			}
			if (iVar6 != -1)
			{
				__LIB_14__::func_563(0, 0, 1);
				MISC::CLEAR_AREA_OF_PEDS(ENTITY::GET_ENTITY_COORDS(iParam0->f_4, true), 3f, 0);
				MISC::CLEAR_AREA_OF_OBJECTS(ENTITY::GET_ENTITY_COORDS(iParam0->f_4, true), 25f, 0);
				HUD::CLEAR_HELP(true);
				HUD::CLEAR_PRINTS();
				__LIB_0__::func_638();
				__LIB_42__::func_713(iParam0, 0, 0);
				Var7 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0->f_4, Var2) };
				ENTITY::SET_ENTITY_COORDS(iParam0->f_3, Var7, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(iParam0->f_3, __LIB_39__::func_884(iParam0));
				func_239(iParam0, 1f, 1f, 1f, 0f, 0f, 0f, 1112014848);
				CAM::SET_CAM_COORD(*iParam0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0->f_4, Var0));
				CAM::POINT_CAM_AT_ENTITY(*iParam0, iParam0->f_4, Var1, true);
				CAM::SET_CAM_ACTIVE(*iParam0, true);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iParam0->f_3, false, false);
				TASK::TASK_ENTER_VEHICLE(iParam0->f_3, iParam0->f_4, 20000, iParam0->f_7, iParam0->f_6, 3, 0);
				iLocal_78 = 5;
			}
			break;
		case 5:
			__LIB_39__::func_778("TAXI_PED_ENTER_CUT_WAIT", &(iParam0->f_78), 1000);
			if (SYSTEM::TIMERA() > 3500)
			{
				iLocal_78 = 9;
			}
			break;
		case 6:
			break;
		case 7:
			if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_3, false) && !ENTITY::IS_ENTITY_DEAD(iParam0->f_4, false))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0->f_3, false))
				{
					PED::SET_PED_INTO_VEHICLE(iParam0->f_3, iParam0->f_4, iParam0->f_7);
					VEHICLE::SET_VEHICLE_DOOR_SHUT(iParam0->f_4, __LIB_39__::func_869(iParam0->f_7), true);
				}
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				CAM::DESTROY_CAM(*iParam0, false);
				CAM::DESTROY_CAM(iParam0->f_1, false);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				CAM::DO_SCREEN_FADE_IN(800);
				HUD::CLEAR_HELP(true);
				HUD::CLEAR_PRINTS();
				__LIB_0__::func_638();
				__LIB_42__::func_713(iParam0, 0, 0);
				iLocal_78 = 8;
			}
			break;
		case 8:
			if (CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
			{
				__LIB_14__::func_565(1, 1, 1);
				return 1;
			}
			break;
		case 9:
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			CAM::DESTROY_CAM(*iParam0, false);
			CAM::DESTROY_CAM(iParam0->f_1, false);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			__LIB_14__::func_565(1, 1, 1);
			return 1;
			break;
		case 10:
			if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_3, false) && !ENTITY::IS_ENTITY_DEAD(iParam0->f_4, false))
			{
				if (PED::IS_PED_GETTING_INTO_A_VEHICLE(iParam0->f_3) || PED::IS_PED_IN_ANY_VEHICLE(iParam0->f_3, true))
				{
					return 1;
				}
				else if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 0)
				{
					TASK::TASK_ENTER_VEHICLE(iParam0->f_3, iParam0->f_4, 20000, iParam0->f_7, iParam0->f_6, 1, 0);
				}
			}
			break;
	}
	return 0;
}

void func_239(int iParam0, struct<3> Param1, struct<3> Param2, float fParam3)//Position - 0x93D8
{
	if (!CAM::DOES_CAM_EXIST(*iParam0))
	{
		*iParam0 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), Param1, Param2, fParam3, false, 2);
	}
}

void func_247(var uParam0)//Position - 0x9601
{
	int iVar0;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (!PED::IS_PED_INJURED(uParam0->f_3))
		{
			if (__LIB_14__::func_556(uParam0->f_3, 1) > 30f || func_248(uParam0))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, joaat("SCRIPT_TASK_ENTER_VEHICLE")) == 1 || TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 1)
				{
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, uParam0->f_4, 0);
					TASK::TASK_PLAY_ANIM(0, "misscommon@response", "screw_you", 8f, -8f, -1, 0, 0f, false, false, false);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam0->f_11, uParam0->f_6, 20000, 0.25f, 0, 40000f);
					TASK::CLOSE_SEQUENCE_TASK(iVar0);
					TASK::TASK_PERFORM_SEQUENCE(uParam0->f_3, iVar0);
					func_330(uParam0, "Player abandoned passenger on pickup.", 8);
				}
			}
		}
	}
}

int func_248(var uParam0)//Position - 0x96D2
{
	if ((ENTITY::GET_ENTITY_SPEED(uParam0->f_4) > 3f && func_111(uParam0, 5) > 15f) || ENTITY::IS_ENTITY_UPSIDEDOWN(uParam0->f_4))
	{
		return 1;
	}
	return 0;
}

int func_253(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4)//Position - 0x99AF
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false))
	{
		if (!ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_3) && __LIB_14__::func_556(uParam0->f_3, 1) < fParam2)
		{
			if (!__LIB_39__::func_929(uParam0, 5))
			{
				__LIB_39__::func_933(uParam0, 5, 0, 0);
			}
		}
		else if (__LIB_39__::func_929(uParam0, 5))
		{
			__LIB_39__::func_927(uParam0, 5, 0);
		}
		if (((func_111(uParam0, 5) > IntToFloat(iParam1) && ENTITY::GET_ENTITY_SPEED(uParam0->f_4) < fParam4) && !ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_3)) || __LIB_14__::func_556(uParam0->f_3, 1) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_258(var uParam0)//Position - 0x9F64
{
	func_198(uParam0, uParam0->f_3);
	if (__LIB_39__::func_928(uParam0))
	{
		if (__LIB_39__::func_929(uParam0, 14))
		{
			__LIB_39__::func_944(uParam0);
			if (HUD::DOES_BLIP_EXIST(uParam0->f_10))
			{
				HUD::REMOVE_BLIP(&(uParam0->f_10));
			}
		}
	}
	if (!__LIB_39__::func_929(uParam0, 9))
	{
		if (HUD::DOES_BLIP_EXIST(uParam0->f_8))
		{
			HUD::SET_BLIP_ALPHA(uParam0->f_8, 0);
			HUD::SET_BLIP_ROUTE(uParam0->f_8, false);
		}
		__LIB_39__::func_933(uParam0, 9, 0, 0);
		__LIB_0__::func_229("TAXI_OBJ_POL", 7500, 1);
	}
}

int func_260(var uParam0, int iParam1)//Position - 0xA007
{
	if (!HUD::HAS_ADDITIONAL_TEXT_LOADED(2))
	{
		return 0;
	}
	__LIB_37__::func_274(12);
	if (__LIB_0__::func_703(uParam0->f_44, 8))
	{
		if (!__LIB_0__::func_703(uParam0->f_44, 128))
		{
			if (PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID()) && !__LIB_0__::func_703(uParam0->f_44, 256))
			{
				__LIB_39__::func_780(&(uParam0->f_44), 256);
			}
			if (__LIB_0__::func_703(uParam0->f_44, 256) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				__LIB_43__::func_584(uParam0, 135, 1, 0, 1);
				__LIB_39__::func_780(&(uParam0->f_44), 128);
			}
		}
	}
	if (!__LIB_39__::func_885(uParam0, iParam1))
	{
		if (__LIB_14__::func_556(uParam0->f_3, 1) < 35f)
		{
			if (!__LIB_0__::func_703(uParam0->f_44, 8))
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(uParam0->f_3, PLAYER::PLAYER_PED_ID(), 0);
				__LIB_43__::func_584(uParam0, 133, 1, 0, 1);
				__LIB_39__::func_780(&(uParam0->f_44), 8);
			}
		}
		if ((PED::IS_PED_INJURED(uParam0->f_3) || PED::IS_PED_FLEEING(uParam0->f_3)) || __LIB_14__::func_556(uParam0->f_3, 1) > 400f)
		{
			func_330(uParam0, "ped is fleeing or injured", 5);
		}
	}
	else
	{
		uParam0->f_4 = PED::GET_VEHICLE_PED_IS_IN(uParam0->f_2, false);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(uParam0->f_4, true);
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, -1, false) == uParam0->f_2)
		{
			VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(uParam0->f_4);
			__LIB_39__::func_857(uParam0);
			__LIB_39__::func_852(2, 0);
			bLocal_86 = true;
			__LIB_3__::func_128(&iLocal_82);
			return 1;
		}
		else
		{
			func_330(uParam0, "No Taxi", 21);
			__LIB_0__::func_151("TAXI_DBG_NTAXI", -1);
		}
	}
	return 0;
}

void func_268()//Position - 0xA879
{
	Local_165.f_0 = 0;
	__LIB_39__::func_818(44076/*__LIB_39__::func_819*/, 44051/*func_286*/, 1);
	__LIB_39__::func_818(43812/*__LIB_39__::func_887*/, 43789/*func_282*/, 1);
	__LIB_39__::func_818(43727/*__LIB_39__::func_816*/, 43702/*func_280*/, 1);
	__LIB_39__::func_818(43630/*__LIB_39__::func_815*/, 43606/*func_278*/, 1);
	__LIB_39__::func_818(43496/*func_277*/, 43475/*__LIB_39__::func_873*/, 1);
	__LIB_39__::func_818(43422/*__LIB_39__::func_858*/, 43397/*func_273*/, 1);
	__LIB_39__::func_818(43255/*__LIB_39__::func_886*/, 43232/*func_269*/, 1);
}

int func_269(int iParam0, var uParam1)//Position - 0xA8E0
{
	uParam1 = uParam1;
	func_330(iParam0, "Taxi Not Driveable", 1);
	return 1;
}

int func_273(int iParam0, var uParam1)//Position - 0xA985
{
	uParam1 = uParam1;
	func_330(iParam0, "Didn't lose police in time.", 9);
	return 1;
}

int func_277(int iParam0)//Position - 0xA9E8
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_4))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0->f_4) && !VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iParam0->f_4))
		{
			if (!__LIB_39__::func_929(iParam0, 25))
			{
				__LIB_39__::func_933(iParam0, 25, 0, 0);
			}
			else if (func_111(iParam0, 25) > 2f)
			{
				return 1;
			}
		}
		else if (__LIB_39__::func_929(iParam0, 25))
		{
			__LIB_39__::func_927(iParam0, 25, 0);
		}
	}
	return 0;
}

int func_278(int iParam0, var uParam1)//Position - 0xAA56
{
	uParam1 = uParam1;
	func_330(iParam0, "Taxi Is Flipped", 0);
	return 1;
}

int func_280(int iParam0, var uParam1)//Position - 0xAAB6
{
	uParam1 = uParam1;
	func_330(iParam0, "Stayed stopped for too long.", 9);
	return 1;
}

int func_282(int iParam0, var uParam1)//Position - 0xAB0D
{
	uParam1 = uParam1;
	func_330(iParam0, "Taxi Not Driveable", 0);
	return 1;
}

int func_286(int iParam0, var uParam1)//Position - 0xAC13
{
	uParam1 = uParam1;
	func_330(iParam0, "Passenger injured.", 15);
	return 1;
}

int func_291()//Position - 0xAED3
{
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_265))
	{
		__LIB_39__::func_778("TAXI_ASSETS_STREAMED - Loading A_M_M_Farmer_01", &iLocal_281, 1000);
		return 0;
	}
	if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_387))
	{
		return 0;
	}
	if (!__LIB_39__::func_821(&iLocal_281, 1))
	{
		__LIB_39__::func_778("TAXI_ASSETS_STREAMED - Loading shared assets", &iLocal_281, 1000);
		return 0;
	}
	return 1;
}

void func_299()//Position - 0xB444
{
	STREAMING::REQUEST_MODEL(iLocal_265);
	__LIB_39__::func_860(1);
	iLocal_387 = __LIB_2__::func_214();
}

void func_302(int iParam0)//Position - 0xB4CA
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (!PED::IS_PED_INJURED((*iParam0)[iVar0]))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY((*iParam0)[iVar0]);
			PED::SET_PED_FLEE_ATTRIBUTES((*iParam0)[iVar0], 13, true);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_270);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_270);
			TASK::TASK_STAND_STILL(0, MISC::GET_RANDOM_INT_IN_RANGE(1, 1000));
			TASK::TASK_SMART_FLEE_PED(0, Local_230.f_3, 4000f, -1, false, false);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_270);
			TASK::TASK_PERFORM_SEQUENCE((*iParam0)[iVar0], iLocal_270);
			PED::SET_PED_KEEP_TASK((*iParam0)[iVar0], true);
		}
		iVar0++;
	}
}

void func_303(var uParam0)//Position - 0xB557
{
	int iVar0;
	int iVar1;
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_262, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_262, Local_230.f_413);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_262, joaat("COP"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("COP"), iLocal_262);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!PED::IS_PED_INJURED((*uParam0)[iVar0]))
		{
			TASK::CLEAR_PED_TASKS((*uParam0)[iVar0]);
			WEAPON::GET_CURRENT_PED_WEAPON((*uParam0)[iVar0], &iVar1, true);
			if (iVar1 == joaat("WEAPON_UNARMED"))
			{
				WEAPON::GIVE_WEAPON_TO_PED((*uParam0)[iVar0], joaat("WEAPON_PISTOL"), -1, false, true);
			}
			PED::SET_PED_ACCURACY((*uParam0)[iVar0], 30);
			TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED((*uParam0)[iVar0], 1000f, 0);
			PED::SET_PED_KEEP_TASK((*uParam0)[iVar0], true);
		}
		iVar0++;
	}
}

void func_304(int iParam0, int iParam1)//Position - 0xB611
{
	__LIB_3__::func_128(&(iParam0->f_146[iParam1 /*3*/]));
}

void func_306(var uParam0, int iParam1, bool bParam2)//Position - 0xB639
{
	if (uParam0->f_411 == 0)
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
		{
			if (bParam2)
			{
				if (func_111(uParam0, 10) > (20f + 10f))
				{
					if (uParam0->f_112)
					{
						__LIB_43__::func_584(uParam0, 92, 1, 0, 0);
						uParam0->f_112 = 0;
					}
					else
					{
						__LIB_43__::func_584(uParam0, 83, 1, 0, 0);
					}
					uParam0->f_113 = 1;
					__LIB_39__::func_933(uParam0, 10, 0f, 1);
				}
			}
			else if (func_111(uParam0, 10) > 20f)
			{
				if (uParam0->f_112)
				{
					__LIB_43__::func_584(uParam0, 92, 1, 0, 0);
					uParam0->f_112 = 0;
				}
				else
				{
					__LIB_43__::func_584(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_113 = 1;
				__LIB_39__::func_933(uParam0, 10, 0f, 1);
			}
		}
	}
	if (uParam0->f_411 == 1)
	{
		if (func_111(uParam0, 10) > 30f)
		{
			if (!__LIB_0__::func_75())
			{
				if (uParam0->f_112)
				{
					__LIB_43__::func_584(uParam0, 92, 1, 0, 0);
					uParam0->f_112 = 0;
				}
				else
				{
					__LIB_43__::func_584(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_113 = 1;
				__LIB_39__::func_933(uParam0, 10, 0f, 1);
			}
		}
	}
	if (__LIB_0__::func_703(uParam0->f_100, 64))
	{
		if (!__LIB_0__::func_702(&(Local_162[5 /*10*/].f_6)))
		{
			__LIB_3__::func_128(&(Local_162[5 /*10*/].f_6));
		}
		else if (__LIB_37__::func_276(&(Local_162[5 /*10*/].f_6)) > 6f)
		{
			if (__LIB_39__::func_954(uParam0))
			{
				if (uParam0->f_113)
				{
					__LIB_43__::func_584(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					__LIB_43__::func_584(uParam0, Local_162[5 /*10*/].f_9, 1, 0, 0);
				}
				__LIB_39__::func_827(uParam0, 1);
				__LIB_39__::func_923(5, uParam0);
				__LIB_39__::func_953(uParam0);
			}
		}
	}
	if (__LIB_0__::func_703(uParam0->f_100, 1))
	{
		if (!__LIB_0__::func_702(&(Local_162[0 /*10*/].f_6)))
		{
			__LIB_3__::func_128(&(Local_162[0 /*10*/].f_6));
		}
		else if (__LIB_37__::func_276(&(Local_162[0 /*10*/].f_6)) > 5f)
		{
			if (__LIB_39__::func_952(uParam0))
			{
				__LIB_39__::func_827(uParam0, 1);
				__LIB_39__::func_923(0, uParam0);
				if (uParam0->f_113)
				{
					__LIB_43__::func_584(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					__LIB_43__::func_584(uParam0, Local_162[0 /*10*/].f_9, 1, 0, 0);
				}
				__LIB_39__::func_953(uParam0);
			}
		}
	}
	if (__LIB_0__::func_703(uParam0->f_100, 2))
	{
		if (!__LIB_0__::func_702(&(Local_162[1 /*10*/].f_6)))
		{
			__LIB_3__::func_128(&(Local_162[1 /*10*/].f_6));
		}
		else if (__LIB_37__::func_276(&(Local_162[1 /*10*/].f_6)) > 5f)
		{
			if (__LIB_39__::func_951(uParam0))
			{
				__LIB_39__::func_827(uParam0, 1);
				__LIB_39__::func_923(1, uParam0);
				if (uParam0->f_113)
				{
					__LIB_43__::func_584(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					__LIB_43__::func_584(uParam0, Local_162[1 /*10*/].f_9, 1, 0, 0);
				}
				__LIB_39__::func_953(uParam0);
			}
		}
	}
	if (__LIB_0__::func_703(uParam0->f_100, 2048))
	{
		if (!__LIB_0__::func_702(&(Local_162[8 /*10*/].f_6)))
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
			{
				uParam0->f_46 = ENTITY::GET_ENTITY_HEALTH(uParam0->f_4);
				__LIB_3__::func_128(&(Local_162[8 /*10*/].f_6));
			}
		}
		else if (__LIB_37__::func_276(&(Local_162[8 /*10*/].f_6)) > 7f || Local_162[8 /*10*/].f_1 == 0)
		{
			if (__LIB_43__::func_918(uParam0))
			{
				__LIB_39__::func_827(uParam0, 1);
				__LIB_39__::func_923(8, uParam0);
				__LIB_39__::func_953(uParam0);
			}
		}
	}
	if (__LIB_0__::func_703(uParam0->f_100, 128))
	{
		if (!__LIB_0__::func_702(&(Local_162[6 /*10*/].f_6)))
		{
			__LIB_3__::func_128(&(Local_162[6 /*10*/].f_6));
		}
		else if (__LIB_37__::func_276(&(Local_162[6 /*10*/].f_6)) > 5f)
		{
			if (__LIB_39__::func_950(uParam0))
			{
				__LIB_39__::func_827(uParam0, 1);
				__LIB_39__::func_923(6, uParam0);
				if (uParam0->f_113)
				{
					__LIB_43__::func_584(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					__LIB_43__::func_584(uParam0, Local_162[6 /*10*/].f_9, 1, 0, 0);
				}
				__LIB_39__::func_953(uParam0);
			}
		}
	}
	if (__LIB_0__::func_703(uParam0->f_100, 32))
	{
		if (!__LIB_0__::func_702(&(Local_162[4 /*10*/].f_6)))
		{
			__LIB_3__::func_128(&(Local_162[4 /*10*/].f_6));
		}
		else if (__LIB_37__::func_276(&(Local_162[4 /*10*/].f_6)) > 4f)
		{
			if (__LIB_39__::func_949(uParam0))
			{
				__LIB_39__::func_827(uParam0, 1);
				__LIB_39__::func_923(4, uParam0);
				if (uParam0->f_113)
				{
					__LIB_43__::func_584(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					__LIB_43__::func_584(uParam0, Local_162[4 /*10*/].f_9, 1, 0, 0);
				}
				__LIB_39__::func_953(uParam0);
			}
		}
	}
	if (__LIB_0__::func_703(uParam0->f_100, 256))
	{
		if (!__LIB_0__::func_702(&(Local_162[7 /*10*/].f_6)))
		{
			__LIB_3__::func_128(&(Local_162[7 /*10*/].f_6));
		}
		else if (__LIB_37__::func_276(&(Local_162[7 /*10*/].f_6)) > 5f || Local_162[7 /*10*/].f_1 == 0)
		{
			if (__LIB_39__::func_825(uParam0))
			{
				__LIB_39__::func_923(7, uParam0);
				__LIB_39__::func_827(uParam0, 1);
				if (uParam0->f_113)
				{
					__LIB_43__::func_584(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					__LIB_43__::func_584(uParam0, Local_162[7 /*10*/].f_9, 1, 0, 1);
				}
				__LIB_39__::func_953(uParam0);
			}
		}
	}
	if (__LIB_0__::func_703(uParam0->f_100, 8))
	{
		if (!__LIB_0__::func_702(&(Local_162[9 /*10*/].f_6)))
		{
			__LIB_3__::func_128(&(Local_162[9 /*10*/].f_6));
		}
		else if (__LIB_37__::func_276(&(Local_162[9 /*10*/].f_6)) <= 7f)
		{
			PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
		}
		else if (__LIB_37__::func_276(&(Local_162[9 /*10*/].f_6)) > 7f || Local_162[9 /*10*/].f_1 == 0)
		{
			if (__LIB_39__::func_824(uParam0))
			{
				__LIB_39__::func_827(uParam0, 1);
				__LIB_39__::func_923(9, uParam0);
				if (uParam0->f_113)
				{
					__LIB_43__::func_584(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					__LIB_43__::func_584(uParam0, Local_162[9 /*10*/].f_9, 1, 0, 1);
				}
				__LIB_39__::func_953(uParam0);
			}
		}
	}
	if (__LIB_0__::func_703(uParam0->f_100, 16384))
	{
		if (!__LIB_0__::func_702(&(Local_162[13 /*10*/].f_6)))
		{
			__LIB_3__::func_128(&(Local_162[13 /*10*/].f_6));
		}
		else if (__LIB_37__::func_276(&(Local_162[13 /*10*/].f_6)) > 10f)
		{
			if (__LIB_39__::func_971(uParam0))
			{
				__LIB_39__::func_827(uParam0, 1);
				__LIB_39__::func_923(13, uParam0);
				if (uParam0->f_113)
				{
					__LIB_43__::func_584(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					__LIB_43__::func_584(uParam0, Local_162[13 /*10*/].f_9, 1, 0, 0);
				}
				__LIB_39__::func_953(uParam0);
			}
		}
	}
	if (__LIB_0__::func_703(uParam0->f_100, 32768))
	{
		if (!__LIB_0__::func_702(&(Local_162[14 /*10*/].f_6)))
		{
			__LIB_3__::func_128(&(Local_162[14 /*10*/].f_6));
		}
		else if (__LIB_37__::func_276(&(Local_162[14 /*10*/].f_6)) > 7f)
		{
			if (__LIB_39__::func_948(uParam0))
			{
				__LIB_39__::func_827(uParam0, 1);
				__LIB_39__::func_923(14, uParam0);
				if (uParam0->f_113)
				{
					__LIB_43__::func_584(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					__LIB_43__::func_584(uParam0, Local_162[14 /*10*/].f_9, 1, 0, 0);
				}
				__LIB_39__::func_953(uParam0);
			}
		}
	}
	if (__LIB_0__::func_703(uParam0->f_100, 4096))
	{
		if (!__LIB_0__::func_702(&(Local_162[11 /*10*/].f_6)))
		{
			__LIB_3__::func_128(&(Local_162[11 /*10*/].f_6));
		}
		else if (__LIB_37__::func_276(&(Local_162[11 /*10*/].f_6)) > 8f)
		{
			if (__LIB_39__::func_947(uParam0))
			{
				__LIB_39__::func_827(uParam0, 1);
				__LIB_39__::func_923(11, uParam0);
				if (uParam0->f_113)
				{
					__LIB_43__::func_584(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					__LIB_43__::func_584(uParam0, Local_162[11 /*10*/].f_9, 1, 0, 0);
				}
				__LIB_39__::func_953(uParam0);
			}
		}
	}
	if (__LIB_0__::func_703(uParam0->f_100, 8192))
	{
		if (!__LIB_0__::func_702(&(Local_162[12 /*10*/].f_6)))
		{
			__LIB_3__::func_128(&(Local_162[12 /*10*/].f_6));
		}
		else if (__LIB_37__::func_276(&(Local_162[12 /*10*/].f_6)) > 5f)
		{
			if (__LIB_39__::func_946(uParam0))
			{
				__LIB_39__::func_827(uParam0, 1);
				__LIB_39__::func_923(12, uParam0);
				if (uParam0->f_113)
				{
					__LIB_43__::func_584(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					__LIB_43__::func_584(uParam0, Local_162[12 /*10*/].f_9, 1, 0, 0);
				}
				__LIB_39__::func_953(uParam0);
			}
		}
	}
	if (__LIB_0__::func_703(uParam0->f_100, 4))
	{
		if (!__LIB_0__::func_702(&(Local_162[2 /*10*/].f_6)))
		{
			__LIB_38__::func_939(&(Local_162[2 /*10*/].f_6), 0f);
		}
		else if (__LIB_37__::func_276(&(Local_162[2 /*10*/].f_6)) > 5f)
		{
			if (__LIB_39__::func_945(uParam0))
			{
				if (uParam0->f_113)
				{
					__LIB_43__::func_584(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					__LIB_43__::func_584(uParam0, Local_162[2 /*10*/].f_9, 1, 0, 0);
				}
				__LIB_39__::func_827(uParam0, 1);
				__LIB_39__::func_923(2, uParam0);
				__LIB_39__::func_953(uParam0);
			}
		}
	}
}

void func_330(int iParam0, char* sParam1, int iParam2)//Position - 0xCA22
{
	struct<3> Var0;
	__LIB_0__::func_325();
	__LIB_38__::func_753(2);
	Var0 = { __LIB_13__::func_743() };
	if ((!MISC::IS_STRING_NULL_OR_EMPTY(&Var0) && __LIB_0__::func_75()) && !MISC::ARE_STRINGS_EQUAL(&Var0, "NULL"))
	{
	}
	else
	{
		HUD::CLEAR_PRINTS();
		HUD::CLEAR_HELP(true);
		StringCopy(&Var0, iParam0->f_143, 24);
		if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_3, false))
		{
			if (!func_177(iParam0))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
				{
					TASK::STOP_ANIM_TASK(iParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", -8f);
				}
				else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
				{
					TASK::STOP_ANIM_TASK(iParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", -8f);
				}
				else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
				{
					TASK::STOP_ANIM_TASK(iParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", -8f);
				}
			}
		}
		iParam0->f_109 = 1;
		iParam0->f_121 = sParam1;
		iParam0->f_415 = iParam2;
		__LIB_39__::func_933(iParam0, 3, 0, 0);
		if (iParam2 == 8 || iParam2 == 18)
		{
			if (iParam0->f_411 != 9)
			{
				if (iParam0->f_115)
				{
					StringConCat(&Var0, "_aband2", 24);
				}
				else
				{
					StringConCat(&Var0, "_aband1", 24);
				}
				__LIB_39__::func_904(iParam0, &Var0);
			}
			else if (!PED::IS_PED_INJURED(iParam0->f_3))
			{
				__LIB_0__::func_709(iParam0->f_3, "TAXI_FAIL", iParam0->f_145, 4);
			}
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else if (iParam2 == 10)
		{
			if (iParam0->f_115)
			{
				StringConCat(&Var0, "_aggro2", 24);
			}
			else
			{
				StringConCat(&Var0, "_aggro", 24);
			}
			__LIB_39__::func_904(iParam0, &Var0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (iParam0->f_415 == 15)
		{
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_DEAD", 24);
		}
		else if (iParam2 == 2)
		{
			StringConCat(&Var0, "_lost1", 24);
			__LIB_39__::func_904(iParam0, &Var0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else if (iParam2 == 3)
		{
			StringConCat(&Var0, "_spotd1", 24);
			__LIB_39__::func_904(iParam0, &Var0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 4)
		{
			StringConCat(&Var0, "_wntd1", 24);
			__LIB_39__::func_904(iParam0, &Var0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 5)
		{
			StringConCat(&Var0, "_spook", 24);
			__LIB_39__::func_904(iParam0, &Var0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_SPK", 24);
			if (func_177(iParam0))
			{
				if (VEHICLE::IS_VEHICLE_STOPPED(iParam0->f_4))
				{
					__LIB_39__::func_888(iParam0, 4096, 0);
				}
				else
				{
					__LIB_39__::func_888(iParam0, 0, 0);
				}
			}
		}
		else if (iParam2 == 6)
		{
			StringConCat(&Var0, "_hit2", 24);
			__LIB_39__::func_904(iParam0, &Var0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (iParam2 == 7)
		{
			StringConCat(&Var0, "_jak", 24);
			__LIB_39__::func_904(iParam0, &Var0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 14)
		{
			if (iParam0->f_411 != 9)
			{
				if (iParam0->f_115)
				{
					StringConCat(&Var0, "_shot2", 24);
				}
				else
				{
					StringConCat(&Var0, "_shot1", 24);
				}
				__LIB_39__::func_904(iParam0, &Var0);
			}
			else if (!PED::IS_PED_INJURED(iParam0->f_3))
			{
				__LIB_0__::func_709(iParam0->f_3, "CALL_COPS_COMMIT", iParam0->f_145, 4);
			}
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 1, false);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_SHT", 24);
		}
		else if (iParam2 == 12)
		{
			StringConCat(&Var0, "_shot1", 24);
			__LIB_39__::func_904(iParam0, &Var0);
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 1, false);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 13)
		{
			StringConCat(&Var0, "_shot1", 24);
			__LIB_39__::func_904(iParam0, &Var0);
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 1, false);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_CK", 24);
		}
		else if (iParam2 == 11)
		{
			__LIB_39__::func_852(8, 0);
			iLocal_57[3] = 1;
			if (iParam0->f_411 != 9)
			{
				if (iParam0->f_115)
				{
					StringConCat(&Var0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&Var0, "_noDri1", 24);
				}
				__LIB_39__::func_904(iParam0, &Var0);
			}
			else if (!PED::IS_PED_INJURED(iParam0->f_3))
			{
				__LIB_0__::func_709(iParam0->f_3, "GENERIC_INSULT_MED", iParam0->f_145, 4);
			}
			__LIB_39__::func_888(iParam0, 0, 0);
			__LIB_39__::func_904(iParam0, &Var0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_WAT", 24);
		}
		else if (iParam2 == 0)
		{
			__LIB_39__::func_852(8, 0);
			iLocal_57[3] = 1;
			if (iParam0->f_411 != 9)
			{
				if (iParam0->f_115)
				{
					StringConCat(&Var0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&Var0, "_noDri1", 24);
				}
				__LIB_39__::func_904(iParam0, &Var0);
			}
			else if (!PED::IS_PED_INJURED(iParam0->f_3))
			{
				__LIB_0__::func_709(iParam0->f_3, "TAXI_FAIL", iParam0->f_145, 4);
			}
			__LIB_39__::func_904(iParam0, &Var0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_DR", 24);
		}
		else if (iParam2 == 1)
		{
			__LIB_39__::func_852(8, 0);
			iLocal_57[3] = 1;
			if (iParam0->f_411 != 9)
			{
				if (iParam0->f_115)
				{
					StringConCat(&Var0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&Var0, "_noDri1", 24);
				}
				__LIB_39__::func_904(iParam0, &Var0);
			}
			else if (!PED::IS_PED_INJURED(iParam0->f_3))
			{
				__LIB_0__::func_709(iParam0->f_3, "TAXI_FAIL", iParam0->f_145, 4);
			}
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_F_FIRE", 24);
		}
		else if (iParam2 == 19)
		{
			StringCopy(&Var0, "OJTX_QUIT_", 24);
			__LIB_39__::func_865(&Var0);
			__LIB_2__::func_859(&(iParam0->f_244), "OJTXAUD", &Var0, 7, 0, 0, 0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_CNCL", 24);
		}
		else if (iParam2 == 20)
		{
			if (iParam0->f_115)
			{
				StringConCat(&Var0, "_aband2", 24);
			}
			else
			{
				StringConCat(&Var0, "_fail1", 24);
			}
			__LIB_39__::func_904(iParam0, &Var0);
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else
		{
			if (iParam0->f_411 != 9)
			{
				if (iParam2 != 21)
				{
					StringConCat(&Var0, "_Fail1", 24);
				}
				else
				{
					StringConCat(&Var0, "_aband1", 24);
				}
				if (iParam0->f_410 > 5)
				{
					__LIB_39__::func_904(iParam0, &Var0);
				}
			}
			else if (!PED::IS_PED_INJURED(iParam0->f_3))
			{
				__LIB_0__::func_709(iParam0->f_3, "TAXI_FAIL", iParam0->f_145, 4);
			}
			StringCopy(&(iParam0->f_130), "TAXI_OBJ_FAIL", 24);
			__LIB_39__::func_852(3, 0);
		}
		__LIB_39__::func_933(iParam0, 3, 0f, 1);
	}
}

void func_339()//Position - 0xD3E8
{
	func_371(&Local_230);
	if (__LIB_39__::func_941(&Local_230, &Local_336))
	{
		switch (Local_336.f_27)
		{
			case 0:
				if (Local_230.f_410 == 9)
				{
					if (!func_369(&Local_230))
					{
						if (__LIB_39__::func_839("TX_OBJ_GYB_DO") || HUD::DOES_BLIP_EXIST(Local_230.f_9))
						{
							Local_336.f_27++;
						}
						else if (__LIB_39__::func_804(&Local_230) != 10)
						{
							__LIB_43__::func_584(&Local_230, 10, 1, 0, 1);
						}
					}
				}
				break;
			case 1:
				if ((__LIB_39__::func_804(&Local_230) > 10 && __LIB_39__::func_804(&Local_230) != 15) && !func_369(&Local_230))
				{
					__LIB_43__::func_584(&Local_230, 15, 1, 0, 0);
					if (bLocal_335)
					{
					}
					func_304(&Local_230, 7);
				}
				break;
			case 2:
				if (((__LIB_39__::func_804(&Local_230) != 16 && !func_369(&Local_230)) && func_111(&Local_230, 18) > 2f) && !__LIB_0__::func_75())
				{
					__LIB_43__::func_584(&Local_230, 16, 1, 0, 0);
					if (bLocal_335)
					{
					}
				}
				break;
			case 3:
				if (func_111(&Local_230, 18) > MISC::GET_RANDOM_FLOAT_IN_RANGE(2f, 7f))
				{
					if (!__LIB_39__::func_799(&Local_230))
					{
						__LIB_39__::func_940(&Local_230, 0);
						Local_336.f_27++;
						if (bLocal_335)
						{
						}
					}
				}
				break;
			}
	}
	func_340(&Local_230, &uLocal_339, &Local_336, bLocal_335);
}

int func_340(var uParam0, var uParam1, var uParam2, bool bParam3)//Position - 0xD55B
{
	func_348(uParam0, uParam1);
	if (((*uParam2 == -1 && uParam0->f_410 < 29) && !uParam0->f_109) && !__LIB_39__::func_929(uParam0, 2))
	{
		if (__LIB_39__::func_832(uParam1))
		{
			*uParam2 = 1;
			if (bParam3)
			{
			}
		}
		else if ((MISC::GET_GAME_TIMER() % 2000) < 50)
		{
		}
	}
	if (!uParam0->f_109)
	{
		switch (*uParam2)
		{
			case 1:
				if (!__LIB_39__::func_838(uParam0))
				{
					uParam2->f_7 = { __LIB_39__::func_862(uParam1) };
					__LIB_2__::func_859(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_7), 8, 0, 0, 0);
					*uParam2 = 2;
					if (bParam3)
					{
					}
				}
				break;
			case 2:
				if (__LIB_0__::func_75())
				{
					uParam2->f_13 = { __LIB_0__::func_486() };
					if (MISC::ARE_STRINGS_EQUAL(&(uParam2->f_13), &(uParam2->f_7)))
					{
						if (bParam3)
						{
						}
					}
				}
				else
				{
					__LIB_0__::func_989(&(uParam2->f_26), SYSTEM::ROUND(SYSTEM::POW(2f, SYSTEM::TO_FLOAT(uParam2->f_27))));
					uParam2->f_27++;
					__LIB_39__::func_889(uParam1);
					__LIB_39__::func_933(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			case 3:
				if (func_184(uParam0))
				{
					if (__LIB_0__::func_75())
					{
						__LIB_39__::func_933(uParam0, 17, 0f, 1);
						uParam2->f_1 = { __LIB_0__::func_485() };
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) >= 1)
						{
							*uParam2 = 0;
						}
						else
						{
							*uParam2 = 4;
						}
					}
				}
				else if (__LIB_0__::func_75())
				{
					uParam2->f_19 = { __LIB_13__::func_743() };
				}
				else
				{
					__LIB_0__::func_989(&(uParam2->f_26), SYSTEM::ROUND(SYSTEM::POW(2f, SYSTEM::TO_FLOAT(uParam2->f_27))));
					uParam2->f_27++;
					__LIB_39__::func_889(uParam1);
					__LIB_39__::func_933(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			case 4:
				if (((!__LIB_39__::func_929(uParam0, 14) && !__LIB_0__::func_75()) && !func_184(uParam0)) && func_111(uParam0, 18) > 1f)
				{
					__LIB_39__::func_933(uParam0, 18, 0, 0);
					*uParam2 = 6;
					if (bParam3)
					{
					}
				}
				break;
			case 6:
				if (!__LIB_0__::func_75())
				{
					if (func_111(uParam0, 18) > 1f)
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_1)))
						{
							__LIB_14__::func_782(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_13), &(uParam2->f_1), 8, 0, 0);
							if (bParam3)
							{
							}
						}
						*uParam2 = 3;
					}
				}
				break;
			case 7:
				if (!__LIB_0__::func_75())
				{
					__LIB_0__::func_989(&(uParam2->f_26), SYSTEM::ROUND(SYSTEM::POW(2f, SYSTEM::TO_FLOAT(uParam2->f_27))));
					uParam2->f_27++;
					__LIB_39__::func_889(uParam1);
					__LIB_39__::func_933(uParam0, 18, 0, 0);
					*uParam2 = -1;
				}
				break;
			}
	}
	return 0;
}

void func_348(var uParam0, var uParam1)//Position - 0xDC0B
{
	struct<3> Var0;
	char cVar1[48];
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5[8];
	bool bVar6;
	if (__LIB_39__::func_838(uParam0))
	{
	}
	else if (!uParam0->f_110)
	{
	}
	else if (__LIB_39__::func_929(uParam0, 14))
	{
		StringCopy(&Var0, uParam0->f_143, 24);
		switch (__LIB_39__::func_804(uParam0))
		{
			case 55:
				StringConCat(&Var0, "_lvMe1", 24);
				cVar1 = { Var0 };
				__LIB_39__::func_876(&(uParam0->f_93), 3, &cVar1, 0, 1, 0);
				__LIB_14__::func_535(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				__LIB_39__::func_933(uParam0, 16, 0, 0);
				__LIB_39__::func_892(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 2:
				if (!__LIB_0__::func_75())
				{
					if (uParam0->f_115)
					{
						StringConCat(&Var0, "_retrn2", 24);
					}
					else
					{
						StringConCat(&Var0, "_retrn1", 24);
					}
					if (uParam0->f_411 != 9)
					{
						__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
					}
				}
				else
				{
					__LIB_39__::func_955(uParam0, Var0, __LIB_39__::func_837(uParam0, 2));
				}
				if (__LIB_0__::func_703(uParam0->f_98, 4))
				{
					__LIB_39__::func_933(uParam0, 16, 0, 0);
					__LIB_42__::func_713(uParam0, 0, 0);
				}
				__LIB_43__::func_916(uParam0, &(uParam0->f_98), 4, 3);
				break;
			case 3:
				if (func_111(uParam0, 16) > 1f)
				{
					__LIB_0__::func_620(1);
					if (uParam0->f_411 == 9)
					{
						__LIB_0__::func_229("TAXI_OBJ_RETURN", 7500, 1);
					}
					else
					{
						__LIB_0__::func_229("TAXI_VIP_RETURN", 7500, 1);
					}
					__LIB_39__::func_933(uParam0, 16, 0, 0);
					__LIB_42__::func_713(uParam0, 0, 0);
				}
				break;
			case 65:
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_aggro2", 24);
				}
				else
				{
					StringConCat(&Var0, "_aggro", 24);
				}
				uParam0->f_107++;
				if (uParam0->f_411 != 9)
				{
					__LIB_43__::func_585(uParam0, &Var0, 0, 1, 8);
				}
				else if (!PED::IS_PED_INJURED(uParam0->f_3))
				{
					__LIB_0__::func_709(uParam0->f_3, "TAXI_WHAT_THE_HELL", uParam0->f_145, 4);
				}
				break;
		}
	}
	else if ((func_111(uParam0, 16) > __LIB_0__::func_373(uParam0->f_411 == 0, 1f, 4f) && !uParam0->f_142) && (((uParam0->f_411 == 0 || uParam0->f_411 == 1) && !__LIB_0__::func_75()) || (uParam0->f_411 != 0 && uParam0->f_411 != 1)))
	{
		StringCopy(&Var0, uParam0->f_143, 24);
		switch (__LIB_39__::func_804(uParam0))
		{
			case 142:
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&Var0, "_noDri1", 24);
				}
				__LIB_43__::func_585(uParam0, &Var0, 1, 0, 8);
				break;
			case 56:
				StringConCat(&Var0, "_lvMe2", 24);
				cVar1 = { Var0 };
				__LIB_39__::func_876(&(uParam0->f_93), 3, &cVar1, 0, 1, 0);
				__LIB_14__::func_535(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				__LIB_39__::func_933(uParam0, 16, 0, 0);
				__LIB_39__::func_892(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 0:
				if (uParam0->f_411 == 9)
				{
					__LIB_2__::func_859(&(uParam0->f_244), "OJTXAUD", "OJTX_PRO_CON", 8, 0, 0, 0);
				}
				__LIB_43__::func_584(uParam0, 1, 1, 0, 0);
				break;
			case 1:
				__LIB_39__::func_933(uParam0, 16, 0, 0);
				__LIB_43__::func_584(uParam0, 4, 0, 0, 0);
				break;
			case 4:
				StringConCat(&Var0, "_hail1", 24);
				cVar1 = { Var0 };
				if (!__LIB_0__::func_703(uParam0->f_44, 128))
				{
					if ((uParam0->f_411 == 0 || uParam0->f_411 == 1) || uParam0->f_411 == 4)
					{
						__LIB_39__::func_876(&(uParam0->f_99), 4, &cVar1, 0, 1, 0);
						__LIB_14__::func_535(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
					}
					else
					{
						__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
					}
				}
				__LIB_39__::func_933(uParam0, 16, 4f, 0);
				uParam0->f_141 = 1;
				__LIB_39__::func_933(uParam0, 16, 0, 0);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 5:
				if (uParam0->f_411 == 7)
				{
					__LIB_0__::func_229("TAXI_OBJ_GPCKUP", 7500, 1);
				}
				else
				{
					__LIB_0__::func_229("TAXI_OBJ_PICKUP", 7500, 1);
				}
				uParam0->f_141 = 1;
				__LIB_39__::func_933(uParam0, 16, 0, 0);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 8:
				StringConCat(&Var0, "_obj1", 24);
				__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!HUD::DOES_BLIP_EXIST(uParam0->f_9))
					{
						uParam0->f_9 = __LIB_0__::func_488(uParam0->f_17, 1);
					}
					else if (HUD::GET_BLIP_ALPHA(uParam0->f_9) == 0)
					{
						HUD::SET_BLIP_ALPHA(uParam0->f_9, 255);
						HUD::SET_BLIP_COORDS(uParam0->f_9, uParam0->f_17);
						HUD::SET_BLIP_ROUTE(uParam0->f_9, true);
					}
				}
				__LIB_43__::func_584(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			case 9:
				if ((uParam0->f_101 == 1 || uParam0->f_411 == 2) || uParam0->f_411 == 0)
				{
					StringConCat(&Var0, "_gret1", 24);
				}
				else
				{
					switch (uParam0->f_102)
					{
						case 1:
							StringConCat(&Var0, "_gret1", 24);
							break;
						case 0:
							StringConCat(&Var0, "_gret2", 24);
							break;
						case 2:
							StringConCat(&Var0, "_gret3", 24);
							break;
						default:
							StringConCat(&Var0, "_gret4", 24);
							break;
						}
				}
				__LIB_39__::func_807(&Var0);
				if (uParam0->f_411 != 9)
				{
					__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
				}
				else
				{
					__LIB_0__::func_709(uParam0->f_3, "TAXI_START", uParam0->f_145, 4);
				}
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!HUD::DOES_BLIP_EXIST(uParam0->f_9))
					{
						uParam0->f_9 = __LIB_0__::func_488(uParam0->f_17, 1);
					}
					else if (HUD::GET_BLIP_ALPHA(uParam0->f_9) == 0)
					{
						HUD::SET_BLIP_ALPHA(uParam0->f_9, 255);
						HUD::SET_BLIP_COORDS(uParam0->f_9, uParam0->f_17);
						HUD::SET_BLIP_ROUTE(uParam0->f_9, true);
					}
				}
				__LIB_43__::func_584(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			case 7:
				StringConCat(&Var0, "_dest2", 24);
				__LIB_39__::func_962(uParam0, 33554432, Var0, "", 1, 8);
				__LIB_39__::func_933(uParam0, 16, 0, 0);
				__LIB_43__::func_584(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			case 10:
				if (!__LIB_0__::func_75())
				{
					__LIB_39__::func_835(uParam0, 0);
					__LIB_39__::func_780(&(uParam0->f_44), 4);
					__LIB_39__::func_933(uParam0, 16, 0, 0);
					__LIB_43__::func_584(uParam0, 13, 0, 0, 0);
				}
				break;
			case 14:
				switch (uParam0->f_102)
				{
					case 0:
						StringConCat(&Var0, "_bant2", 24);
						break;
					case 1:
						StringConCat(&Var0, "_bant1", 24);
						break;
					case 2:
						StringConCat(&Var0, "_bant3", 24);
						break;
					default:
						StringConCat(&Var0, "_bant1", 24);
						break;
				}
				__LIB_39__::func_807(&Var0);
				__LIB_39__::func_890(Var0, uParam1);
				__LIB_39__::func_933(uParam0, 16, 0, 0);
				__LIB_39__::func_933(uParam0, 11, 0, 0);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 15:
				if (func_111(uParam0, 11) > uParam0->f_36)
				{
					if (uParam0->f_411 == 0)
					{
						StringConCat(&Var0, "_ban1", 24);
					}
					else
					{
						StringConCat(&Var0, "_bant1", 24);
						__LIB_39__::func_807(&Var0);
					}
					__LIB_39__::func_890(Var0, uParam1);
					__LIB_39__::func_780(&(uParam0->f_81), 67108864);
					__LIB_39__::func_933(uParam0, 16, 0, 0);
					__LIB_39__::func_933(uParam0, 11, 0, 0);
					__LIB_42__::func_713(uParam0, 0, 0);
				}
				break;
			case 16:
				if (func_111(uParam0, 11) > uParam0->f_36)
				{
					if (uParam0->f_411 == 0)
					{
						StringConCat(&Var0, "_ban2", 24);
					}
					else if (uParam0->f_411 == 1)
					{
						StringConCat(&Var0, "_banter", 24);
					}
					else
					{
						StringConCat(&Var0, "_bant2", 24);
						if (uParam0->f_411 != 6)
						{
							__LIB_39__::func_807(&Var0);
						}
					}
					__LIB_39__::func_890(Var0, uParam1);
					__LIB_39__::func_933(uParam0, 11, 0, 0);
					__LIB_39__::func_933(uParam0, 16, 0, 0);
					__LIB_42__::func_713(uParam0, 0, 0);
				}
				break;
			case 17:
				if (uParam0->f_411 == 0)
				{
					StringConCat(&Var0, "_ban3", 24);
				}
				else
				{
					StringConCat(&Var0, "_bant3", 24);
					__LIB_39__::func_807(&Var0);
				}
				__LIB_39__::func_890(Var0, uParam1);
				__LIB_39__::func_933(uParam0, 16, 0, 0);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 18:
				if (uParam0->f_411 == 0)
				{
					StringConCat(&Var0, "_BAN4", 24);
				}
				else
				{
					StringConCat(&Var0, "_bant4", 24);
				}
				__LIB_39__::func_807(&Var0);
				__LIB_39__::func_890(Var0, uParam1);
				__LIB_39__::func_933(uParam0, 16, 0, 0);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 19:
				if (uParam0->f_411 == 0)
				{
					StringConCat(&Var0, "_BAN5", 24);
				}
				else
				{
					StringConCat(&Var0, "_bant5", 24);
				}
				__LIB_39__::func_807(&Var0);
				__LIB_39__::func_890(Var0, uParam1);
				__LIB_39__::func_933(uParam0, 16, 0, 0);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 20:
				StringConCat(&Var0, "_dest2b", 24);
				__LIB_39__::func_807(&Var0);
				__LIB_39__::func_890(Var0, uParam1);
				__LIB_39__::func_933(uParam0, 16, 0, 0);
				__LIB_39__::func_933(uParam0, 11, 0, 0);
				__LIB_42__::func_713(uParam0, 0, 0);
				__LIB_39__::func_780(&(uParam0->f_82), 262144);
				uParam0->f_36 = 20f;
				break;
			case 23:
				StringConCat(&Var0, "_seePt1", 24);
				__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
				__LIB_43__::func_584(uParam0, 24, 1, 0, 0);
				break;
			case 24:
				uParam0->f_417 = 24;
				__LIB_39__::func_933(uParam0, 16, 0, 0);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 90:
				StringConCat(&Var0, "_talk", 24);
				StringIntConCat(&Var0, 1, 24);
				__LIB_39__::func_807(&Var0);
				__LIB_43__::func_585(uParam0, &Var0, 1, 0, 8);
				break;
			case 89:
				switch (uParam0->f_102)
				{
					case 0:
						StringConCat(&Var0, "_deal1", 24);
						break;
					case 1:
						StringConCat(&Var0, "_deal1", 24);
						break;
					default:
						StringConCat(&Var0, "_deal1", 24);
						break;
				}
				__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
				break;
			case 91:
				StringConCat(&Var0, "_ig1c", 24);
				__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
				break;
			case 27:
				StringConCat(&Var0, "_bTime", 24);
				if (uParam0->f_411 == 2)
				{
					iVar3 = 8;
				}
				else
				{
					iVar3 = 3;
				}
				iVar2 = 0;
				while (iVar2 < iVar3)
				{
					switch (uParam0->f_411)
					{
						case 2:
							switch (iVar2)
							{
								case 3:
								case 5:
								case 6:
								case 7:
									iVar5[iVar2] = 0;
									break;
								default:
									iVar5[iVar2] = 1;
									break;
							}
							break;
						default:
							iVar5[iVar2] = 1;
							break;
					}
					iVar2++;
				}
				if (uParam0->f_411 == 2)
				{
					__LIB_39__::func_875(&(uParam0->f_90), 8, &Var0, &iVar5, 1, 0);
				}
				else
				{
					__LIB_39__::func_875(&(uParam0->f_90), 3, &Var0, &iVar5, 1, 0);
				}
				__LIB_39__::func_890(Var0, uParam1);
				__LIB_39__::func_892(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				__LIB_39__::func_933(uParam0, 16, 0, 0);
				__LIB_39__::func_933(uParam0, 6, 0f, 1);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 26:
				StringConCat(&Var0, "_gTime", 24);
				iVar2 = 0;
				while (iVar2 < 8)
				{
					switch (uParam0->f_411)
					{
						case 2:
							switch (iVar2)
							{
								case 3:
								case 4:
								case 5:
								case 7:
									iVar5[iVar2] = 0;
									break;
								default:
									iVar5[iVar2] = 1;
									break;
							}
							break;
						default:
							iVar5[iVar2] = 1;
							break;
					}
					iVar2++;
				}
				if (uParam0->f_411 == 2)
				{
					__LIB_39__::func_875(&(uParam0->f_89), 8, &Var0, &iVar5, 1, 0);
				}
				else
				{
					__LIB_39__::func_875(&(uParam0->f_89), 3, &Var0, &iVar5, 1, 0);
				}
				__LIB_39__::func_890(Var0, uParam1);
				__LIB_39__::func_892(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 1);
				__LIB_39__::func_933(uParam0, 16, 0, 0);
				__LIB_39__::func_933(uParam0, 6, 0f, 1);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 12:
				__LIB_0__::func_229("TAXI_OBJ_GYB", 3500, 1);
				__LIB_39__::func_933(uParam0, 16, 0, 0);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 11:
				if (uParam0->f_410 == 12 || uParam0->f_410 == 18)
				{
					__LIB_0__::func_229("TAXI_OBJ_GYN_TG", 7500, 1);
				}
				else if (uParam0->f_410 < 21)
				{
					__LIB_0__::func_229("TAXI_OBJ_GYN", 7500, 1);
				}
				else
				{
					__LIB_0__::func_229("TAXI_OBJ_GYN_GF", 7500, 1);
				}
				uParam0->f_417 = 11;
				uParam0->f_141 = 1;
				__LIB_39__::func_933(uParam0, 16, 0, 0);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 28:
				switch (uParam0->f_102)
				{
					case 0:
						StringConCat(&Var0, "_dest1A", 24);
						break;
					case 1:
						StringConCat(&Var0, "_dest1B", 24);
						break;
					default:
						StringConCat(&Var0, "_dest1A", 24);
						break;
				}
				__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
				__LIB_43__::func_584(uParam0, 29, 1, 0, 0);
				break;
			case 29:
				if (!__LIB_0__::func_703(uParam0->f_98, 268435456))
				{
					__LIB_0__::func_229("TAXI_OBJ_CYI_01", 7500, 1);
					__LIB_39__::func_780(&(uParam0->f_98), 268435456);
				}
				uParam0->f_417 = 29;
				__LIB_39__::func_933(uParam0, 16, 0, 0);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 30:
				StringConCat(&Var0, "_rCar1", 24);
				__LIB_39__::func_807(&Var0);
				__LIB_39__::func_890(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				__LIB_39__::func_933(uParam0, 16, 0, 0);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 31:
				StringConCat(&Var0, "_rCar2", 24);
				__LIB_39__::func_807(&Var0);
				__LIB_39__::func_890(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				__LIB_39__::func_933(uParam0, 16, 0, 0);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 32:
				StringConCat(&Var0, "_rCar3", 24);
				__LIB_39__::func_807(&Var0);
				__LIB_39__::func_890(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				__LIB_39__::func_933(uParam0, 16, 0, 0);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 33:
				__LIB_0__::func_229("TAXI_OBJ_CYI_02", 7500, 1);
				uParam0->f_417 = 33;
				__LIB_39__::func_933(uParam0, 16, 0, 0);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 34:
				if (!__LIB_0__::func_703(uParam0->f_82, 8192))
				{
					if (func_111(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&Var0, "_airBr1", 24);
						__LIB_39__::func_807(&Var0);
						if (uParam0->f_411 == 5)
						{
							__LIB_39__::func_890(Var0, uParam1);
						}
						else
						{
							__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
						}
						__LIB_39__::func_780(&(uParam0->f_82), 8192);
						__LIB_39__::func_933(uParam0, 16, 0, 0);
						__LIB_39__::func_933(uParam0, 11, 0, 0);
						__LIB_42__::func_713(uParam0, 0, 0);
					}
				}
				break;
			case 35:
				if (!__LIB_0__::func_703(uParam0->f_82, 16384))
				{
					StringConCat(&Var0, "_seeD1", 24);
					__LIB_39__::func_807(&Var0);
					__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
					__LIB_39__::func_780(&(uParam0->f_82), 16384);
				}
				break;
			case 36:
				if (!__LIB_0__::func_703(uParam0->f_82, 32768))
				{
					StringConCat(&Var0, "_seeD2", 24);
					__LIB_39__::func_807(&Var0);
					__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
					__LIB_39__::func_780(&(uParam0->f_82), 32768);
				}
				break;
			case 37:
				StringConCat(&Var0, "_done1", 24);
				__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
				__LIB_43__::func_584(uParam0, 46, 1, 0, 0);
				break;
			case 138:
				if (uParam0->f_101 == 1)
				{
					StringConCat(&Var0, "_ftc1", 24);
				}
				else
				{
					switch (uParam0->f_102)
					{
						case 1:
							StringConCat(&Var0, "_ftc1", 24);
							break;
						case 0:
							StringConCat(&Var0, "_ftc2", 24);
							break;
						case 2:
							StringConCat(&Var0, "_ftc3", 24);
							break;
						default:
							StringConCat(&Var0, "_ftc3", 24);
							break;
						}
				}
				__LIB_39__::func_807(&Var0);
				__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
				__LIB_43__::func_584(uParam0, 139, 1, 0, 0);
				uParam0->f_417 = 139;
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 139:
				__LIB_0__::func_229("TAXI_OBJ_FTC2", 7500, 1);
				uParam0->f_417 = 13;
				__LIB_43__::func_584(uParam0, 13, 0, 0, 0);
				break;
			case 38:
				StringConCat(&Var0, "_dOff1", 24);
				cVar1 = { Var0 };
				iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(0, 120);
				if (!__LIB_0__::func_703(uParam0->f_82, 268435456))
				{
					if (iVar4 > 80)
					{
						StringConCat(&cVar1, "_1", 24);
					}
					else if (iVar4 > 40)
					{
						StringConCat(&cVar1, "_2", 24);
					}
					else
					{
						StringConCat(&cVar1, "_3", 24);
					}
					__LIB_39__::func_780(&(uParam0->f_82), 268435456);
				}
				else if (iVar4 > 80)
				{
					StringConCat(&cVar1, "_4", 24);
				}
				else if (iVar4 > 40)
				{
					StringConCat(&cVar1, "_5", 24);
				}
				else
				{
					StringConCat(&cVar1, "_6", 24);
				}
				__LIB_14__::func_535(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				__LIB_39__::func_933(uParam0, 16, 0, 0);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 39:
				StringConCat(&Var0, "_bdOff1", 24);
				cVar1 = { Var0 };
				iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
				if (!__LIB_0__::func_703(uParam0->f_82, 268435456))
				{
					if (iVar4 < 50)
					{
						StringConCat(&cVar1, "_1", 24);
					}
					else
					{
						StringConCat(&cVar1, "_2", 24);
					}
					__LIB_39__::func_780(&(uParam0->f_82), 268435456);
				}
				else if (iVar4 < 50)
				{
					StringConCat(&cVar1, "_3", 24);
				}
				else
				{
					StringConCat(&cVar1, "_4", 24);
				}
				__LIB_14__::func_535(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				__LIB_39__::func_933(uParam0, 16, 0, 0);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 41:
				StringConCat(&Var0, "_dr2P", 24);
				__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
				__LIB_39__::func_933(uParam0, 16, 0, 0);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 42:
				StringConCat(&Var0, "_dr2N", 24);
				__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
				__LIB_39__::func_933(uParam0, 16, 0, 0);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 40:
				StringConCat(&Var0, "_dOff2", 24);
				__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
				__LIB_43__::func_584(uParam0, 44, 1, 0, 0);
				break;
			case 44:
				__LIB_0__::func_229("TAXI_OBJ_CC2", 7500, 1);
				uParam0->f_417 = 44;
				__LIB_42__::func_713(uParam0, 0, 0);
				__LIB_43__::func_584(uParam0, 97, 1, 0, 0);
				break;
			case 43:
				StringConCat(&Var0, "_dOff3", 24);
				__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
				__LIB_43__::func_584(uParam0, 45, 1, 0, 0);
				break;
			case 45:
				if (!__LIB_0__::func_75())
				{
					__LIB_0__::func_229("TAXI_OBJ_CC3", 7500, 1);
					uParam0->f_417 = 45;
					__LIB_42__::func_713(uParam0, 0, 0);
					__LIB_43__::func_584(uParam0, 98, 1, 0, 0);
				}
				break;
			case 46:
				__LIB_0__::func_229("TAXI_OBJ_FTC3", 7500, 1);
				uParam0->f_417 = 46;
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 21:
				if (!__LIB_0__::func_703(uParam0->f_81, 1))
				{
					__LIB_39__::func_961(uParam0, 1, Var0, "_sick1", 8);
					__LIB_39__::func_851(&(uParam0->f_81), 2);
				}
				else if (!__LIB_0__::func_703(uParam0->f_81, 2))
				{
					__LIB_39__::func_961(uParam0, 2, Var0, "_sick2", 8);
					__LIB_39__::func_851(&(uParam0->f_81), 1);
				}
				__LIB_39__::func_892(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 22:
				if (!__LIB_0__::func_703(uParam0->f_82, 2097152))
				{
					StringConCat(&Var0, "_nopke1", 24);
				}
				else if (!__LIB_0__::func_703(uParam0->f_82, 4194304))
				{
					StringConCat(&Var0, "_nopke2", 24);
				}
				__LIB_39__::func_780(&(uParam0->f_81), 2097152);
				__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
				__LIB_39__::func_933(uParam0, 16, 0, 0);
				__LIB_39__::func_892(17, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 1);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 61:
				StringConCat(&Var0, "_Puke1", 24);
				__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
				__LIB_39__::func_892(18, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				break;
			case 63:
				StringConCat(&Var0, "_PkStp2", 24);
				__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
				__LIB_39__::func_892(20, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				__LIB_39__::func_933(uParam0, 16, 0, 0);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 62:
				StringConCat(&Var0, "_PkStp1", 24);
				__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
				__LIB_39__::func_892(19, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				break;
			case 64:
				StringConCat(&Var0, "_PukeR1", 24);
				__LIB_39__::func_807(&Var0);
				__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
				break;
			case 71:
				if (!__LIB_0__::func_703(uParam0->f_81, 4))
				{
					__LIB_39__::func_961(uParam0, 4, Var0, "_turns1", 8);
				}
				else if (!__LIB_0__::func_703(uParam0->f_81, 8))
				{
					__LIB_39__::func_961(uParam0, 8, Var0, "_turns2", 8);
				}
				else
				{
					__LIB_39__::func_961(uParam0, 8, Var0, "_turns3", 8);
					__LIB_39__::func_851(&(uParam0->f_81), 4);
					__LIB_39__::func_851(&(uParam0->f_81), 8);
				}
				__LIB_39__::func_892(13, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 72:
				if (__LIB_39__::func_833(uParam0))
				{
					__LIB_39__::func_955(uParam0, Var0, __LIB_39__::func_837(uParam0, 72));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!PED::IS_PED_INJURED(uParam0->f_3))
					{
						__LIB_0__::func_709(uParam0->f_3, "CRASH_GENERIC", uParam0->f_145, 4);
					}
				}
				else if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_carHt", 24);
					cVar1 = { Var0 };
					__LIB_39__::func_876(&(uParam0->f_95), 5, &cVar1, 1, 0, 1);
					__LIB_2__::func_859(&(uParam0->f_244), uParam0->f_144, &cVar1, 8, 0, 0, 0);
				}
				else
				{
					StringConCat(&Var0, "_carHt1", 24);
					cVar1 = { Var0 };
					if (uParam0->f_411 == 0)
					{
						__LIB_39__::func_876(&(uParam0->f_95), 8, &cVar1, 1, 1, 0);
					}
					else
					{
						__LIB_39__::func_876(&(uParam0->f_95), 5, &cVar1, 1, 1, 0);
					}
					__LIB_14__::func_535(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				}
				__LIB_39__::func_892(2, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar1, 0);
				__LIB_39__::func_933(uParam0, 16, 0, 0);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 73:
				StringConCat(&Var0, "_genPnHi", 24);
				__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
				break;
			case 75:
				if (!__LIB_0__::func_703(uParam0->f_83, 128))
				{
					StringConCat(&Var0, "_nMiss1", 24);
					__LIB_2__::func_859(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					__LIB_39__::func_780(&(uParam0->f_83), 128);
					__LIB_39__::func_851(&(uParam0->f_83), 256);
					__LIB_39__::func_933(uParam0, 16, 0, 0);
				}
				else if (!__LIB_0__::func_703(uParam0->f_83, 256))
				{
					StringConCat(&Var0, "_nMiss2", 24);
					__LIB_2__::func_859(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					__LIB_39__::func_780(&(uParam0->f_83), 256);
					__LIB_39__::func_851(&(uParam0->f_83), 512);
					__LIB_39__::func_933(uParam0, 16, 0, 0);
				}
				else if (!__LIB_0__::func_703(uParam0->f_83, 512))
				{
					StringConCat(&Var0, "_nMiss3", 24);
					__LIB_2__::func_859(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					__LIB_39__::func_780(&(uParam0->f_83), 512);
					__LIB_39__::func_851(&(uParam0->f_83), 128);
					__LIB_39__::func_933(uParam0, 16, 0, 0);
				}
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 76:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar6 = true;
				}
				if (!__LIB_0__::func_703(uParam0->f_83, 1))
				{
					StringConCat(&Var0, "_air1", 24);
					if (bVar6)
					{
						__LIB_39__::func_807(&Var0);
					}
					__LIB_2__::func_859(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					__LIB_39__::func_780(&(uParam0->f_83), 1);
					__LIB_39__::func_851(&(uParam0->f_83), 2);
					__LIB_39__::func_933(uParam0, 16, 0, 0);
				}
				else if (!__LIB_0__::func_703(uParam0->f_83, 2))
				{
					StringConCat(&Var0, "_air2", 24);
					if (bVar6)
					{
						__LIB_39__::func_807(&Var0);
					}
					__LIB_2__::func_859(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					__LIB_39__::func_780(&(uParam0->f_83), 2);
					if (uParam0->f_411 == 0)
					{
						__LIB_39__::func_851(&(uParam0->f_83), 4);
					}
					else
					{
						__LIB_39__::func_851(&(uParam0->f_83), 1);
					}
					__LIB_39__::func_933(uParam0, 16, 0, 0);
				}
				else if (!__LIB_0__::func_703(uParam0->f_83, 4))
				{
					StringConCat(&Var0, "_air3", 24);
					if (bVar6)
					{
						__LIB_39__::func_807(&Var0);
					}
					__LIB_2__::func_859(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					__LIB_39__::func_780(&(uParam0->f_83), 4);
					__LIB_39__::func_851(&(uParam0->f_83), 1);
					__LIB_39__::func_933(uParam0, 16, 0, 0);
				}
				__LIB_39__::func_892(11, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 79:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar6 = true;
				}
				if (!__LIB_0__::func_703(uParam0->f_81, 4096))
				{
					__LIB_39__::func_962(uParam0, 4096, Var0, "_sideW1", bVar6, 8);
				}
				else if (!__LIB_0__::func_703(uParam0->f_81, 8192))
				{
					__LIB_39__::func_962(uParam0, 8192, Var0, "_sideW2", bVar6, 8);
				}
				__LIB_39__::func_892(15, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 80:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar6 = true;
				}
				if (!__LIB_0__::func_703(uParam0->f_81, 16384))
				{
					__LIB_39__::func_962(uParam0, 16384, Var0, "_opLne1", bVar6, 8);
				}
				else if (!__LIB_0__::func_703(uParam0->f_81, 32768))
				{
					__LIB_39__::func_962(uParam0, 32768, Var0, "_opLne2", bVar6, 8);
				}
				__LIB_39__::func_892(14, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 83:
				if (uParam0->f_411 == 0)
				{
					if (!__LIB_0__::func_703(uParam0->f_82, 8))
					{
						__LIB_39__::func_960(uParam0, 8, Var0, "_bored1", 8, 0);
					}
					else if (!__LIB_0__::func_703(uParam0->f_82, 16))
					{
						__LIB_39__::func_960(uParam0, 16, Var0, "_bored2", 8, 0);
					}
					else if (!__LIB_0__::func_703(uParam0->f_82, 32))
					{
						__LIB_39__::func_960(uParam0, 32, Var0, "_bored3", 8, 0);
					}
					__LIB_39__::func_892(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
					__LIB_42__::func_713(uParam0, 0, 0);
				}
				if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_good1", 24);
					cVar1 = { Var0 };
					__LIB_39__::func_876(&(uParam0->f_93), 6, &cVar1, 0, 1, 0);
					__LIB_14__::func_535(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
					__LIB_39__::func_892(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
					__LIB_39__::func_933(uParam0, 16, 0, 0);
					__LIB_42__::func_713(uParam0, 0, 0);
				}
				break;
			case 92:
				StringConCat(&Var0, "_EtoB1", 24);
				cVar1 = { Var0 };
				__LIB_39__::func_876(&(uParam0->f_96), 2, &cVar1, 0, 1, 0);
				__LIB_14__::func_535(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				__LIB_39__::func_892(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				__LIB_39__::func_933(uParam0, 16, 0, 0);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 93:
				StringConCat(&Var0, "_BtoE1", 24);
				cVar1 = { Var0 };
				__LIB_39__::func_876(&(uParam0->f_97), 2, &cVar1, 0, 1, 0);
				__LIB_14__::func_535(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				__LIB_39__::func_892(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				__LIB_39__::func_933(uParam0, 16, 0, 0);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 81:
				if (!__LIB_0__::func_703(uParam0->f_81, 65536))
				{
					__LIB_39__::func_962(uParam0, 65536, Var0, "_runLit1", 1, 8);
				}
				else if (!__LIB_0__::func_703(uParam0->f_81, 131072))
				{
					__LIB_39__::func_962(uParam0, 131072, Var0, "_runLit2", 1, 8);
				}
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 82:
				if (__LIB_39__::func_833(uParam0))
				{
					__LIB_39__::func_955(uParam0, Var0, __LIB_39__::func_837(uParam0, 82));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!PED::IS_PED_INJURED(uParam0->f_3))
					{
						__LIB_0__::func_709(uParam0->f_3, "CAR_HIT_PED_DRIVEN", uParam0->f_145, 4);
					}
				}
				else if (!__LIB_0__::func_703(uParam0->f_83, 8))
				{
					StringConCat(&Var0, "_hitR1", 24);
					__LIB_39__::func_807(&Var0);
					__LIB_2__::func_859(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					__LIB_39__::func_780(&(uParam0->f_83), 8);
					__LIB_39__::func_851(&(uParam0->f_83), 16);
					__LIB_39__::func_933(uParam0, 16, 0, 0);
				}
				else if (!__LIB_0__::func_703(uParam0->f_83, 16))
				{
					StringConCat(&Var0, "_hitR2", 24);
					__LIB_39__::func_807(&Var0);
					__LIB_2__::func_859(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					__LIB_39__::func_780(&(uParam0->f_83), 16);
					__LIB_39__::func_851(&(uParam0->f_83), 32);
					__LIB_39__::func_933(uParam0, 16, 0, 0);
				}
				else if (!__LIB_0__::func_703(uParam0->f_83, 32))
				{
					StringConCat(&Var0, "_hitR3", 24);
					__LIB_39__::func_807(&Var0);
					__LIB_2__::func_859(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					__LIB_39__::func_780(&(uParam0->f_83), 32);
					if (uParam0->f_411 == 0)
					{
						__LIB_39__::func_851(&(uParam0->f_83), 64);
					}
					else
					{
						__LIB_39__::func_851(&(uParam0->f_83), 8);
					}
					__LIB_39__::func_933(uParam0, 16, 0, 0);
				}
				else if (!__LIB_0__::func_703(uParam0->f_83, 64))
				{
					StringConCat(&Var0, "_hitR4", 24);
					__LIB_39__::func_807(&Var0);
					__LIB_2__::func_859(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					__LIB_39__::func_780(&(uParam0->f_83), 64);
					__LIB_39__::func_851(&(uParam0->f_83), 8);
					__LIB_39__::func_933(uParam0, 16, 0, 0);
				}
				__LIB_39__::func_892(1, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 65:
				if (!__LIB_0__::func_75())
				{
					if (uParam0->f_115)
					{
						StringConCat(&Var0, "_aggro2", 24);
					}
					else
					{
						StringConCat(&Var0, "_aggro", 24);
					}
					__LIB_43__::func_585(uParam0, &Var0, 0, 1, 8);
				}
				else
				{
					__LIB_39__::func_955(uParam0, Var0, __LIB_39__::func_837(uParam0, 65));
					__LIB_42__::func_713(uParam0, 0, 0);
				}
				uParam0->f_107++;
				break;
			case 66:
				if (!__LIB_0__::func_75())
				{
					if (uParam0->f_411 == 4)
					{
						StringCopy(&Var0, "tm6_shoot", 24);
					}
					else if (uParam0->f_115)
					{
						StringConCat(&Var0, "_shootlz", 24);
					}
					else
					{
						StringConCat(&Var0, "_shoot", 24);
					}
					__LIB_43__::func_585(uParam0, &Var0, 0, 1, 8);
				}
				else
				{
					__LIB_39__::func_955(uParam0, Var0, __LIB_39__::func_837(uParam0, 66));
					__LIB_42__::func_713(uParam0, 0, 0);
				}
				uParam0->f_107++;
				break;
			case 13:
				if (uParam0->f_411 == 8)
				{
					if (!uParam0->f_109 && !__LIB_0__::func_75())
					{
						switch (uParam0->f_414)
						{
							case 3:
								StringConCat(&Var0, "_warnC1", 24);
								__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
								break;
							case 6:
								StringConCat(&Var0, "_warnF1", 24);
								__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
								break;
							case 1:
								StringConCat(&Var0, "_far1", 24);
								__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
								__LIB_39__::func_892(21, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
								break;
							case 2:
								StringConCat(&Var0, "_close1", 24);
								__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
								__LIB_39__::func_892(22, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
								break;
							case 10:
								StringConCat(&Var0, "_hit1", 24);
								__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
								break;
							case 8:
								StringConCat(&Var0, "_good1", 24);
								cVar1 = { Var0 };
								__LIB_39__::func_876(&(uParam0->f_93), 6, &cVar1, 1, 1, 0);
								__LIB_14__::func_535(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
								__LIB_39__::func_892(23, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar1, 0);
								__LIB_39__::func_933(uParam0, 16, 0, 0);
								__LIB_42__::func_713(uParam0, 0, 0);
								break;
							case 9:
								if (!iLocal_58)
								{
									StringConCat(&Var0, "_sBant1", 24);
									cVar1 = { Var0 };
									__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
									__LIB_39__::func_933(uParam0, 16, 0, 0);
									__LIB_39__::func_933(uParam0, 11, 0, 0);
									__LIB_42__::func_713(uParam0, 0, 0);
									if (!iLocal_60)
									{
										iLocal_58 = 1;
									}
								}
								else
								{
									if (!iLocal_59)
									{
										StringConCat(&Var0, "_bant3", 24);
										iLocal_59 = 1;
									}
									else
									{
										StringConCat(&Var0, "_bant2", 24);
										iLocal_60 = 1;
									}
									__LIB_39__::func_807(&Var0);
									__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
									__LIB_39__::func_933(uParam0, 16, 0, 0);
									__LIB_39__::func_933(uParam0, 11, 0, 0);
									__LIB_42__::func_713(uParam0, 0, 0);
									iLocal_58 = 0;
								}
								break;
							case 7:
								StringConCat(&Var0, "_done1", 24);
								__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
								break;
						}
						__LIB_43__::func_584(uParam0, 143, 0, 0, 0);
					}
				}
				break;
			case 78:
				StringConCat(&Var0, "_speed1", 24);
				cVar1 = { Var0 };
				__LIB_39__::func_876(&(uParam0->f_87), 6, &cVar1, 1, 1, 0);
				__LIB_14__::func_535(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				__LIB_39__::func_892(10, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				__LIB_39__::func_933(uParam0, 16, 0, 0);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 25:
				if (!__LIB_0__::func_703(uParam0->f_82, 1))
				{
					__LIB_39__::func_960(uParam0, 1, Var0, "_close1", 8, 0);
				}
				else if (!__LIB_0__::func_703(uParam0->f_82, 2))
				{
					__LIB_39__::func_960(uParam0, 2, Var0, "_close2", 8, 0);
				}
				else if (!__LIB_0__::func_703(uParam0->f_82, 4))
				{
					__LIB_39__::func_960(uParam0, 4, Var0, "_close3", 8, 0);
				}
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 48:
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_stop2", 24);
				}
				else
				{
					StringConCat(&Var0, "_stop1", 24);
				}
				cVar1 = { Var0 };
				__LIB_39__::func_876(&(uParam0->f_86), 4, &cVar1, 0, 1, 0);
				if (uParam0->f_411 != 9)
				{
					__LIB_14__::func_535(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				}
				else if (!PED::IS_PED_INJURED(uParam0->f_3))
				{
					__LIB_0__::func_709(uParam0->f_3, "TAXI_STOPPED", uParam0->f_145, 4);
				}
				__LIB_39__::func_933(uParam0, 16, 0, 0);
				__LIB_39__::func_892(5, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 74:
				if (__LIB_39__::func_833(uParam0))
				{
					__LIB_39__::func_955(uParam0, Var0, __LIB_39__::func_837(uParam0, 74));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!PED::IS_PED_INJURED(uParam0->f_3))
					{
						__LIB_0__::func_709(uParam0->f_3, "VEHICLE_FLIPPED", uParam0->f_145, 4);
					}
				}
				else
				{
					StringConCat(&Var0, "_roll1", 24);
					__LIB_39__::func_963(uParam0, Var0, 8);
				}
				__LIB_39__::func_892(3, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				__LIB_39__::func_933(uParam0, 16, 0, 0);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 70:
				if (!__LIB_0__::func_703(uParam0->f_83, 1024))
				{
					__LIB_39__::func_780(&(uParam0->f_83), 1024);
					__LIB_39__::func_933(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv1", 24);
					__LIB_39__::func_807(&Var0);
					__LIB_2__::func_859(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				else if (!__LIB_0__::func_703(uParam0->f_83, 2048))
				{
					__LIB_39__::func_780(&(uParam0->f_83), 2048);
					__LIB_39__::func_933(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv2", 24);
					__LIB_39__::func_807(&Var0);
					__LIB_2__::func_859(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				else if (!__LIB_0__::func_703(uParam0->f_83, 4096))
				{
					__LIB_39__::func_780(&(uParam0->f_83), 4096);
					__LIB_39__::func_933(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv3", 24);
					__LIB_39__::func_807(&Var0);
					__LIB_2__::func_859(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 69:
				if (!__LIB_0__::func_703(uParam0->f_82, 1024))
				{
					__LIB_39__::func_960(uParam0, 1024, Var0, "_rvrs1", 8, 1);
					__LIB_39__::func_851(&(uParam0->f_82), 2048);
				}
				else if (!__LIB_0__::func_703(uParam0->f_82, 2048))
				{
					__LIB_39__::func_960(uParam0, 2048, Var0, "_rvrs2", 8, 1);
				}
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 67:
				StringConCat(&Var0, "_ofrd1", 24);
				cVar1 = { Var0 };
				__LIB_39__::func_876(&(uParam0->f_88), 4, &cVar1, 0, 1, 0);
				__LIB_14__::func_535(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				__LIB_39__::func_892(16, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar1, 0);
				__LIB_39__::func_933(uParam0, 16, 0, 0);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 68:
				StringConCat(&Var0, "_ofrdch1", 24);
				__LIB_2__::func_859(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				__LIB_39__::func_933(uParam0, 16, 0, 0);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 49:
				StringConCat(&Var0, "_losPol1", 24);
				__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
				__LIB_43__::func_584(uParam0, 52, 1, 0, 0);
				break;
			case 50:
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_lsPo2", 24);
				}
				else
				{
					StringConCat(&Var0, "_lsPo1", 24);
				}
				if (uParam0->f_411 != 9)
				{
					__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
				}
				else if (!PED::IS_PED_INJURED(uParam0->f_3))
				{
					__LIB_0__::func_709(uParam0->f_3, "POLICE_PURSUIT_DRIVEN", uParam0->f_145, 4);
				}
				__LIB_39__::func_933(uParam0, 16, 0, 0);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 51:
				if (__LIB_39__::func_833(uParam0))
				{
					if (uParam0->f_411 == 2)
					{
						StringConCat(&Var0, "_copBa1", 24);
						cVar1 = { Var0 };
						cVar1 = { Var0 };
						__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
						__LIB_43__::func_584(uParam0, 52, 1, 0, 0);
						__LIB_39__::func_933(uParam0, 16, 0, 0);
					}
					else
					{
						if (uParam0->f_411 == 5 && uParam0->f_410 > 9)
						{
							StringConCat(&Var0, "_copBa2", 24);
						}
						else
						{
							StringConCat(&Var0, "_copBa1", 24);
						}
						cVar1 = { Var0 };
						__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
						__LIB_39__::func_933(uParam0, 16, 0, 0);
					}
				}
				else
				{
					StringConCat(&Var0, "_copBa1", 24);
					cVar1 = { Var0 };
					__LIB_39__::func_876(&(uParam0->f_85), 6, &cVar1, 1, 1, 0);
					__LIB_14__::func_535(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
					__LIB_39__::func_933(uParam0, 16, 0, 0);
					__LIB_42__::func_713(uParam0, 0, 0);
				}
				break;
			case 53:
				StringConCat(&Var0, "_evdeP1", 24);
				__LIB_39__::func_892(8, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
				__LIB_39__::func_933(uParam0, 10, 0f, 1);
				break;
			case 52:
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) >= 1)
				{
					__LIB_0__::func_229("TAXI_OBJ_POL", 7500, 1);
					uParam0->f_417 = 52;
				}
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 54:
				StringConCat(&Var0, "_cpFz1", 24);
				__LIB_39__::func_807(&Var0);
				__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
				break;
			case 84:
				if (!__LIB_0__::func_703(uParam0->f_81, 262144))
				{
					__LIB_39__::func_962(uParam0, 262144, Var0, "_rdCh1", 1, 8);
				}
				else if (!__LIB_0__::func_703(uParam0->f_81, 1048576))
				{
					if (uParam0->f_411 == 0 || uParam0->f_411 == 1)
					{
						__LIB_39__::func_962(uParam0, 1048576, Var0, "_rdCh2", 1, 8);
					}
					else
					{
						__LIB_39__::func_962(uParam0, 1048576, Var0, "_rdCh2", 0, 8);
					}
				}
				__LIB_39__::func_892(7, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 85:
				if (!__LIB_0__::func_703(uParam0->f_82, 67108864))
				{
					if (uParam0->f_418.f_6)
					{
						__LIB_39__::func_959(uParam0, 67108864, Var0, "_rdLk1", 1, 7);
					}
				}
				else if (!__LIB_0__::func_703(uParam0->f_82, 134217728))
				{
					__LIB_39__::func_959(uParam0, 134217728, Var0, "_rdFv1", 0, 7);
				}
				__LIB_39__::func_892(6, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 86:
				StringConCat(&Var0, "_rdneu1", 24);
				__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
				break;
			case 87:
				StringConCat(&Var0, "_rdtip1", 24);
				cVar1 = { Var0 };
				StringConCat(&cVar1, "_", 24);
				StringIntConCat(&cVar1, uParam0->f_418.f_3, 24);
				__LIB_14__::func_535(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				__LIB_39__::func_933(uParam0, 16, 0, 0);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 100:
				__LIB_0__::func_229("TAXI_OBJ_GYB_2", 7500, 1);
				uParam0->f_417 = 100;
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 47:
				if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_horn", 24);
					__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
				}
				break;
			case 101:
				StringConCat(&Var0, "_thank1", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					__LIB_39__::func_807(&Var0);
				}
				__LIB_39__::func_780(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
				}
				break;
			case 102:
				StringConCat(&Var0, "_thank2", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					__LIB_39__::func_807(&Var0);
				}
				__LIB_39__::func_780(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
				}
				break;
			case 103:
				if (uParam0->f_411 == 4)
				{
					StringConCat(&Var0, "_pissed1", 24);
				}
				else
				{
					StringConCat(&Var0, "_thank3", 24);
				}
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					__LIB_39__::func_807(&Var0);
				}
				__LIB_39__::func_780(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
				}
				break;
			case 97:
				if (!__LIB_0__::func_703(uParam0->f_82, 65536))
				{
					if (func_111(uParam0, 11) > uParam0->f_36)
					{
						switch (uParam0->f_102)
						{
							case 0:
								StringConCat(&Var0, "_ccba2", 24);
								break;
							case 1:
								StringConCat(&Var0, "_ccba1", 24);
								break;
							default:
								StringConCat(&Var0, "_ccba1", 24);
								break;
						}
						__LIB_39__::func_807(&Var0);
						__LIB_39__::func_890(Var0, uParam1);
						__LIB_39__::func_780(&(uParam0->f_82), 65536);
						__LIB_39__::func_933(uParam0, 16, 0, 0);
						__LIB_39__::func_933(uParam0, 11, 0, 0);
						__LIB_42__::func_713(uParam0, 0, 0);
					}
				}
				break;
			case 98:
				if (!__LIB_0__::func_703(uParam0->f_82, 131072))
				{
					if (func_111(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&Var0, "_ccbb1", 24);
						__LIB_39__::func_807(&Var0);
						__LIB_39__::func_890(Var0, uParam1);
						__LIB_39__::func_780(&(uParam0->f_82), 131072);
						__LIB_39__::func_933(uParam0, 16, 0, 0);
						__LIB_39__::func_933(uParam0, 11, 0, 0);
						__LIB_42__::func_713(uParam0, 0, 0);
					}
				}
				break;
			case 99:
				if (!__LIB_0__::func_703(uParam0->f_82, 8388608))
				{
					StringConCat(&Var0, "_close1", 24);
					__LIB_39__::func_780(&(uParam0->f_82), 8388608);
				}
				else if (!__LIB_0__::func_703(uParam0->f_82, 16777216))
				{
					StringConCat(&Var0, "_close2", 24);
					__LIB_39__::func_780(&(uParam0->f_82), 16777216);
				}
				else if (!__LIB_0__::func_703(uParam0->f_82, 33554432))
				{
					StringConCat(&Var0, "_close3", 24);
					__LIB_39__::func_780(&(uParam0->f_82), 33554432);
				}
				__LIB_39__::func_890(Var0, uParam1);
				__LIB_39__::func_933(uParam0, 16, 0, 0);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 58:
				if (uParam0->f_411 == 6)
				{
					StringConCat(&Var0, "_kill1", 24);
					cVar1 = { Var0 };
					__LIB_39__::func_876(&(uParam0->f_93), 6, &cVar1, 1, 1, 1);
					__LIB_39__::func_807(&Var0);
					__LIB_14__::func_535(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				}
				else if (uParam0->f_411 == 8)
				{
					StringConCat(&Var0, "_cheat1", 24);
					__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
				}
				else
				{
					StringConCat(&Var0, "_kill1", 24);
					__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
				}
				__LIB_39__::func_933(uParam0, 16, 0, 0);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 95:
				StringConCat(&Var0, "_wndw2", 24);
				__LIB_39__::func_890(Var0, uParam1);
				__LIB_39__::func_933(uParam0, 16, 0, 0);
				__LIB_39__::func_933(uParam0, 11, 0, 0);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 94:
				StringConCat(&Var0, "_wndw0", 24);
				__LIB_39__::func_890(Var0, uParam1);
				__LIB_39__::func_933(uParam0, 16, 0, 0);
				__LIB_39__::func_933(uParam0, 11, 0, 0);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 96:
				StringConCat(&Var0, "_wndw1", 24);
				__LIB_39__::func_890(Var0, uParam1);
				__LIB_39__::func_933(uParam0, 16, 0, 0);
				__LIB_39__::func_933(uParam0, 11, 0, 0);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 113:
				StringConCat(&Var0, "_csite1", 24);
				__LIB_39__::func_807(&Var0);
				__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
				break;
			case 119:
				StringConCat(&Var0, "_fair1", 24);
				__LIB_39__::func_807(&Var0);
				__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
				break;
			case 115:
				StringConCat(&Var0, "_AlCk1", 24);
				cVar1 = { Var0 };
				__LIB_39__::func_876(&(uParam0->f_91), 5, &cVar1, 1, 1, 0);
				__LIB_14__::func_535(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				__LIB_39__::func_933(uParam0, 16, 0, 0);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 116:
				StringConCat(&Var0, "_eggG1", 24);
				cVar1 = { Var0 };
				__LIB_39__::func_876(&(uParam0->f_92), 5, &cVar1, 1, 1, 0);
				__LIB_14__::func_535(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				__LIB_39__::func_933(uParam0, 16, 0, 0);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 114:
				StringConCat(&Var0, "_goons1", 24);
				__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
				break;
			case 59:
				StringConCat(&Var0, "_oRun1", 24);
				__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
				break;
			case 117:
				StringConCat(&Var0, "_gotG1", 24);
				__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
				break;
			case 118:
				StringConCat(&Var0, "_getA1", 24);
				__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
				break;
			case 120:
				StringConCat(&Var0, "_gnawy1", 24);
				__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
				break;
			case 121:
				StringConCat(&Var0, "_grl1", 24);
				__LIB_39__::func_807(&Var0);
				__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
				break;
			case 122:
				StringConCat(&Var0, "_figt1", 24);
				__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
				break;
			case 123:
				StringConCat(&Var0, "_gEgg1", 24);
				__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
				break;
			case 124:
				StringConCat(&Var0, "_gEgg3", 24);
				__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
				break;
			case 125:
				StringConCat(&Var0, "_gEgg2", 24);
				__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
				break;
			case 126:
				StringConCat(&Var0, "_gLeav1", 24);
				__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
				break;
			case 127:
				StringConCat(&Var0, "_aKill1", 24);
				__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
				break;
			case 129:
				StringConCat(&Var0, "_gHelp1", 24);
				__LIB_39__::func_807(&Var0);
				__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
				break;
			case 130:
				StringConCat(&Var0, "_gDest1", 24);
				__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
				__LIB_43__::func_584(uParam0, 11, 1, 0, 0);
				break;
			case 128:
				StringConCat(&Var0, "_gKO1", 24);
				__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
				break;
			case 132:
				StringConCat(&Var0, "_gThank1", 24);
				__LIB_39__::func_780(&(uParam0->f_81), 2097152);
				__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
				break;
			case 131:
				StringConCat(&Var0, "_gDriv1", 24);
				__LIB_39__::func_807(&Var0);
				__LIB_39__::func_890(Var0, uParam1);
				__LIB_39__::func_780(&(uParam0->f_81), 67108864);
				__LIB_39__::func_933(uParam0, 16, 0, 0);
				__LIB_39__::func_933(uParam0, 11, 0, 0);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 60:
				StringConCat(&Var0, "_cash1", 24);
				__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
				break;
			case 105:
				if (!__LIB_0__::func_703(uParam0->f_81, 33554432) && uParam0->f_411 != 9)
				{
					__LIB_39__::func_962(uParam0, 33554432, Var0, "_noPay1", 1, 8);
				}
				else if (uParam0->f_411 == 9)
				{
					if (!PED::IS_PED_INJURED(uParam0->f_3))
					{
						__LIB_0__::func_709(uParam0->f_3, "TAXI_NO_PAY", uParam0->f_145, 4);
					}
				}
				__LIB_43__::func_584(uParam0, 108, 1, 0, 0);
				break;
			case 106:
				StringConCat(&Var0, "_foot", 24);
				__LIB_2__::func_859(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				__LIB_39__::func_933(uParam0, 16, 0, 0);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 107:
				if (!__LIB_0__::func_703(uParam0->f_81, 268435456))
				{
					__LIB_39__::func_962(uParam0, 268435456, Var0, "_kPay1", 1, 8);
				}
				__LIB_43__::func_584(uParam0, 52, 1, 0, 0);
				break;
			case 108:
				__LIB_0__::func_229("TAXI_OBJ_RUNOUT", 7500, 1);
				uParam0->f_417 = 108;
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 109:
				if (!__LIB_0__::func_703(uParam0->f_81, 4194304))
				{
					if (uParam0->f_411 == 2 || uParam0->f_411 == 6)
					{
						__LIB_39__::func_962(uParam0, 4194304, Var0, "_mPay1", 0, 8);
					}
					else if (uParam0->f_411 == 9)
					{
						if (!PED::IS_PED_INJURED(uParam0->f_3))
						{
							__LIB_0__::func_709(uParam0->f_3, "APOLOGY_NO_TROUBLE", uParam0->f_145, 4);
						}
					}
					else
					{
						__LIB_39__::func_962(uParam0, 4194304, Var0, "_mPay1", 1, 8);
					}
				}
				__LIB_43__::func_584(uParam0, 111, 1, 0, 0);
				break;
			case 111:
				__LIB_0__::func_229("TAXI_OBJ_GETRUN", 7500, 1);
				uParam0->f_417 = 111;
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 110:
				StringConCat(&Var0, "_runoff", 24);
				__LIB_2__::func_859(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				__LIB_39__::func_933(uParam0, 16, 0, 0);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 141:
				if (!__LIB_0__::func_703(uParam0->f_81, 16777216))
				{
					__LIB_39__::func_962(uParam0, 16777216, Var0, "_ret1", 1, 8);
				}
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 88:
				__LIB_0__::func_229("TAXI_TIEFLEE", 7500, 1);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 57:
				if (!__LIB_0__::func_703(uParam0->f_98, 536870912))
				{
					__LIB_0__::func_229("TAXI_OBJ_CYI_1B", 7500, 1);
					__LIB_39__::func_780(&(uParam0->f_98), 536870912);
				}
				uParam0->f_417 = 57;
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 104:
				StringConCat(&Var0, "_joke1", 24);
				__LIB_39__::func_807(&Var0);
				__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
				break;
			case 136:
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_wronglz", 24);
				}
				else if (uParam0->f_116)
				{
					StringConCat(&Var0, "_wrong2", 24);
				}
				else
				{
					StringConCat(&Var0, "_wrong", 24);
				}
				__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 140:
				StringConCat(&Var0, "_shout", 24);
				__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 135:
				if (uParam0->f_411 == 4)
				{
					StringCopy(&Var0, "tm6_jack", 24);
				}
				else
				{
					StringConCat(&Var0, "_jack", 24);
				}
				__LIB_43__::func_585(uParam0, &Var0, 0, 0, 8);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			case 133:
				StringConCat(&Var0, "_getCar", 24);
				__LIB_43__::func_585(uParam0, &Var0, 1, 0, 8);
				__LIB_43__::func_584(uParam0, 134, 1, 0, 0);
				break;
			case 134:
				__LIB_0__::func_229("TX_VIP", 7500, 0);
				uParam0->f_417 = 134;
				__LIB_43__::func_584(uParam0, 0, 0, 0, 0);
				__LIB_42__::func_713(uParam0, 0, 0);
				break;
			}
	}
}

int func_369(var uParam0)//Position - 0x11F51
{
	if (__LIB_0__::func_75())
	{
		return 1;
	}
	if (__LIB_39__::func_929(uParam0, 17))
	{
		return 1;
	}
	if (__LIB_39__::func_929(uParam0, 14))
	{
		return 1;
	}
	if (func_184(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_371(var uParam0)//Position - 0x11FB7
{
	if (__LIB_39__::func_929(uParam0, 17))
	{
		if (!__LIB_39__::func_929(uParam0, 14))
		{
			if (!func_184(uParam0))
			{
				if (!__LIB_0__::func_75())
				{
					__LIB_39__::func_927(uParam0, 17, 1);
				}
			}
		}
	}
}

void func_374(var uParam0)//Position - 0x12083
{
	int iVar0;
	if (uParam0->f_410 >= 5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
		{
			if (Local_165.f_0 > 0 && !__LIB_0__::func_703(Local_165.f_1[4 /*4*/], 4))
			{
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 <= (Local_165.f_0 - 1))
				{
					if (__LIB_0__::func_703(Local_165.f_1[iVar0 /*4*/], 2))
					{
						Stack.Push(uParam0);
						Call_Loc(Local_165.f_1[iVar0 /*4*/].f_2);
						if (StackVal)
						{
							if (!__LIB_0__::func_703(Local_165.f_1[iVar0 /*4*/], 4))
							{
								__LIB_0__::func_989(&(Local_165.f_1[iVar0 /*4*/]), 4);
								Local_165.f_1[iVar0 /*4*/].f_1 = MISC::GET_GAME_TIMER();
							}
						}
						else
						{
							__LIB_0__::func_988(&(Local_165.f_1[iVar0 /*4*/]), 12);
						}
						if (__LIB_0__::func_703(Local_165.f_1[iVar0 /*4*/], 4) && !__LIB_0__::func_703(Local_165.f_1[iVar0 /*4*/], 8))
						{
							Stack.Push(uParam0);
							Stack.Push(Local_165.f_1[iVar0 /*4*/].f_1);
							Call_Loc(Local_165.f_1[iVar0 /*4*/].f_3);
							if (StackVal)
							{
								__LIB_0__::func_989(&(Local_165.f_1[iVar0 /*4*/]), 8);
							}
						}
					}
					iVar0++;
				}
			}
		}
		else
		{
			func_330(uParam0, "Taxi Garbage Collected", 18);
		}
	}
}

int func_375(int iParam0, var uParam1)//Position - 0x12196
{
	var uVar0;
	if (!__LIB_39__::func_929(iParam0, 27))
	{
		func_304(iParam0, 27);
		uParam1->f_3 = 250;
		uParam1->f_2 = 40f;
	}
	if (!iParam0->f_109 && func_111(iParam0, 27) > 5f)
	{
		if (__LIB_39__::func_902(iParam0->f_3, iParam0->f_4, uParam1, &uVar0, 0, 1, 0, 1, 1))
		{
			__LIB_39__::func_933(iParam0, 27, 0, 0);
			__LIB_39__::func_933(iParam0, 10, 0, 0);
			func_400(iParam0, &uVar0, uParam1);
		}
		func_397(iParam0);
	}
	if (iParam0->f_410 >= 3 && iParam0->f_410 <= 5)
	{
		func_376(iParam0);
	}
	if ((((!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) && (CAM::DOES_CAM_EXIST(*iParam0) && !CAM::IS_CAM_ACTIVE(*iParam0))) && (CAM::DOES_CAM_EXIST(iParam0->f_1) && !CAM::IS_CAM_ACTIVE(iParam0->f_1))) && !HUD::IS_MESSAGE_BEING_DISPLAYED()) && !__LIB_0__::func_75())
	{
		if (func_111(iParam0, 26) > 10f)
		{
			__LIB_39__::func_927(iParam0, 26, 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		}
	}
	else if (__LIB_39__::func_929(iParam0, 26))
	{
		__LIB_39__::func_927(iParam0, 26, 0);
	}
	return 0;
}

void func_376(var uParam0)//Position - 0x122C0
{
	if (!__LIB_3__::func_423(uParam0->f_429))
	{
		uParam0->f_429 = __LIB_11__::func_762();
		__LIB_13__::func_726(&(uParam0->f_429), 0, 0, MISC::GET_RANDOM_INT_IN_RANGE(4, 7), 0, 0, 0);
	}
	else if (__LIB_14__::func_793(uParam0->f_429))
	{
		func_330(uParam0, "Player took too long to make pickup", 9);
	}
}

void func_397(var uParam0)//Position - 0x129F5
{
	var uVar0;
	if (uParam0->f_410 < 7 && !uParam0->f_138)
	{
		if (((uParam0->f_411 == 9 && __LIB_39__::func_779()) && !__LIB_39__::func_928(uParam0)) || ((uParam0->f_411 != 9 && __LIB_39__::func_885(uParam0, 1)) && !__LIB_39__::func_928(uParam0)))
		{
			uVar0 = __LIB_1__::func_601(uParam0->f_4);
			ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&uVar0);
			uParam0->f_4 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_4, true, false);
			__LIB_39__::func_944(uParam0);
			func_191(uParam0, 0);
		}
	}
}

void func_400(var uParam0, var uParam1, var uParam2)//Position - 0x12AEC
{
	switch (*uParam1)
	{
		case 1:
			if (__LIB_43__::func_919(uParam0, 0, 1))
			{
				func_330(uParam0, "Aggro Aiming", 5);
			}
			break;
		case 4:
			if (__LIB_43__::func_919(uParam0, 0, 4))
			{
				func_330(uParam0, "Aggro Shot Near", 8);
			}
			break;
		case 8:
			if (__LIB_43__::func_919(uParam0, 0, 8))
			{
				func_330(uParam0, "Aggro Heard Shot", 8);
			}
			break;
		case 16:
			if (__LIB_43__::func_919(uParam0, 1, 1))
			{
				func_330(uParam0, "Aggro Attacked", 14);
			}
			break;
		case 32:
			if (__LIB_43__::func_919(uParam0, 0, 1))
			{
				func_330(uParam0, "Aggro Minor Attacked", 8);
			}
			break;
		case 2:
			if (!__LIB_0__::func_703(*uParam2, 2) && func_177(uParam0))
			{
				func_330(uParam0, "Aggro Went Wanted", 5);
			}
			break;
	}
}

void func_409()//Position - 0x132A4
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	struct<6> Var3;
	Var3 = { __LIB_13__::func_743() };
	if ((((iLocal_269 < 4 && __LIB_14__::func_556(Local_230.f_3, 1) < 50f) && Local_230.f_410 == 22) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && !iLocal_307)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/))
		{
			if (CAM::DOES_CAM_EXIST(Local_230.f_0))
			{
				if (!CAM::IS_CAM_ACTIVE(Local_230.f_0))
				{
					iLocal_399 = MISC::GET_GAME_TIMER();
					CAM::SET_CAM_ACTIVE(Local_230.f_0, true);
					CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				}
			}
		}
	}
	if ((((iLocal_269 < 4 && __LIB_14__::func_556(Local_230.f_3, 1) < 50f) && Local_230.f_410 == 22) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && !iLocal_307)
	{
		if (iLocal_298)
		{
			switch (iLocal_397)
			{
				case 0:
					iLocal_398 = MISC::GET_GAME_TIMER();
					Var0 = { 223.3f, -3326.3f, 6.4f };
					Var1 = { -4.1f, 0f, 78f };
					fVar2 = 24.3f;
					func_410(Var0, Var1, fVar2);
					iLocal_397 = 1;
					break;
				case 1:
					if (MISC::ARE_STRINGS_EQUAL("txm12_ig1c_3", &Var3))
					{
						iLocal_398 = MISC::GET_GAME_TIMER();
						Var0 = { 211.1f, -3326.1f, 5.8f };
						Var1 = { 4.1f, 0f, -81.2f };
						fVar2 = 24.3f;
						func_410(Var0, Var1, fVar2);
						iLocal_397 = 2;
					}
					break;
				case 2:
					if ((MISC::GET_GAME_TIMER() - iLocal_398) > 5000)
					{
						iLocal_398 = MISC::GET_GAME_TIMER();
						Var0 = { 202.0472f, -3314.8298f, 5.9369f };
						Var1 = { -1.9358f, -0.0169f, 169.6817f };
						fVar2 = 20.9113f;
						func_410(Var0, Var1, fVar2);
						iLocal_397 = 3;
					}
					break;
				case 3:
					if (MISC::ARE_STRINGS_EQUAL("txm12_deal1_3", &Var3))
					{
						iLocal_398 = MISC::GET_GAME_TIMER();
						Var0 = { 194.7488f, -3328.101f, 5.9471f };
						Var1 = { -0.3369f, -0.0169f, -55.7257f };
						fVar2 = 24.5237f;
						func_410(Var0, Var1, fVar2);
						iLocal_397 = 4;
					}
					break;
				case 4:
					if (MISC::ARE_STRINGS_EQUAL("txm12_deal1_5", &Var3))
					{
						iLocal_398 = MISC::GET_GAME_TIMER();
						Var0 = { 202.0472f, -3314.8298f, 5.9369f };
						Var1 = { -1.9358f, -0.0169f, 169.6817f };
						fVar2 = 20.9113f;
						func_410(Var0, Var1, fVar2);
						iLocal_397 = 5;
					}
					break;
				case 5:
					if (MISC::ARE_STRINGS_EQUAL("txm12_deal1_7", &Var3))
					{
						iLocal_398 = MISC::GET_GAME_TIMER();
						Var0 = { 194.1f, -3324.9f, 6.2f };
						Var1 = { -4.6f, 0f, -83.1f };
						fVar2 = 29f;
						func_410(Var0, Var1, fVar2);
						iLocal_397 = 6;
					}
					break;
			}
			if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/) && (MISC::GET_GAME_TIMER() - iLocal_399) > 500)
			{
				if (CAM::DOES_CAM_EXIST(Local_230.f_0))
				{
					CAM::SET_CAM_ACTIVE(Local_230.f_0, false);
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				}
			}
		}
	}
	else if (iLocal_298)
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (CAM::DOES_CAM_EXIST(Local_230.f_0))
			{
				if (CAM::IS_CAM_ACTIVE(Local_230.f_0))
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_CAM_ACTIVE(Local_230.f_0, false);
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				}
			}
		}
		if (iLocal_307)
		{
			if (!__LIB_0__::func_702(&iLocal_332))
			{
				if (__LIB_7__::func_691() && CAM::IS_CAM_ACTIVE(Local_230.f_0))
				{
					if (!iLocal_308)
					{
						GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, false);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
						iLocal_308 = 1;
					}
				}
				__LIB_1__::func_31(&iLocal_332);
			}
			else if (__LIB_37__::func_276(&iLocal_332) > 0.3f)
			{
				if (CAM::DOES_CAM_EXIST(Local_230.f_0))
				{
					if (CAM::IS_CAM_ACTIVE(Local_230.f_0))
					{
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_CAM_ACTIVE(Local_230.f_0, false);
						CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					}
				}
			}
		}
	}
	else
	{
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
	}
}

void func_410(struct<3> Param0, struct<3> Param1, float fParam2)//Position - 0x136B5
{
	if (!CAM::DOES_CAM_EXIST(Local_230.f_0))
	{
		func_239(&Local_230, 0f, 0f, 0f, 0f, 0f, 0f, fParam2);
	}
	CAM::SET_CAM_COORD(Local_230.f_0, Param0);
	CAM::SET_CAM_ROT(Local_230.f_0, Param1, 2);
	CAM::SHAKE_CAM(Local_230.f_0, "HAND_SHAKE", 0.3f);
}

void func_412()//Position - 0x13756
{
	if (!iLocal_300)
	{
		func_413(&Local_230);
		iLocal_300 = 1;
	}
	__LIB_38__::func_753(2);
	if (iLocal_299)
	{
		if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), Local_230.f_17, 1) > 50f || func_128(&(Local_247.f_3), &(Local_247.f_11), &(Local_257.f_3), &(Local_257.f_11)))
		{
			func_433();
		}
	}
	else
	{
		func_433();
	}
}

void func_413(var uParam0)//Position - 0x137BD
{
	func_11(0, uParam0, 1);
	if (uParam0->f_411 != 9)
	{
		__LIB_38__::func_753(2);
	}
}

int func_414(var uParam0, bool bParam1)//Position - 0x137DC
{
	if (bParam1)
	{
		return 1;
	}
	if ((((!__LIB_0__::func_75() && func_111(uParam0, 3) > 1f) || uParam0->f_415 == 18) || uParam0->f_415 == 14) || uParam0->f_415 == 15)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
			{
				if (PED::IS_PED_IN_VEHICLE(uParam0->f_3, uParam0->f_4, false))
				{
					if (__LIB_39__::func_787(uParam0) == 0 || __LIB_0__::func_703(uParam0->f_85, 32))
					{
						if (!VEHICLE::IS_VEHICLE_STOPPED(uParam0->f_4))
						{
							__LIB_39__::func_888(uParam0, 4160, 0);
						}
						else
						{
							__LIB_39__::func_888(uParam0, 0, 0);
						}
						return 1;
					}
					else
					{
						__LIB_39__::func_888(uParam0, 0, 0);
						return 1;
					}
				}
				else
				{
					__LIB_39__::func_888(uParam0, 0, 0);
					return 1;
				}
			}
			else
			{
				__LIB_39__::func_888(uParam0, 0, 0);
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	else if ((MISC::GET_GAME_TIMER() % 1000) < 50)
	{
	}
	return 0;
}

void func_417()//Position - 0x1393D
{
	Local_230.f_23 = { 107.3107f, -1124.8654f, 28.198f };
	Local_230.f_33 = 88.9745f;
	Local_230.f_26 = { 195.7672f, -2981.732f, 4.8916f };
	Local_230.f_34 = 173.6662f;
	PED::ADD_RELATIONSHIP_GROUP("TAXI_Pursuers", &iLocal_262);
	func_432(1);
	__LIB_42__::func_712(&Local_230, 3);
	Local_230.f_410 = 0;
	__LIB_39__::func_843(&Local_230, 3, 6);
	func_418();
}

void func_418()//Position - 0x139B2
{
	func_419();
	Local_247 = { 187.5257f, -3320.1628f, 4.6276f };
}

void func_419()//Position - 0x139D2
{
	Local_247.f_19[0] = joaat("G_M_Y_Lost_01");
	Local_247.f_19[1] = joaat("S_F_Y_Hooker_01");
	Local_247.f_32[0] = joaat("gburrito");
	Local_247.f_32[1] = joaat("daemon");
	Local_247.f_32[2] = joaat("hexer");
	Local_247.f_32[3] = joaat("emperor");
	Local_257.f_19[0] = joaat("G_M_Y_Lost_01");
	Local_257.f_32[0] = joaat("gburrito");
	Local_257.f_32[1] = joaat("hexer");
}

void func_432(int iParam0)//Position - 0x13FAD
{
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, iLocal_262, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, iLocal_262, joaat("COP"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, joaat("COP"), iLocal_262);
}

void func_433()//Position - 0x13FDF
{
	__LIB_39__::func_784(&Local_230);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_311, Local_312, true, true);
	PED::CLEAR_PED_NON_CREATION_AREA();
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_278, false);
	ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_276);
	func_434();
	func_209();
	if (CAM::DOES_CAM_EXIST(Local_230.f_0))
	{
		CAM::DESTROY_CAM(Local_230.f_0, false);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_434()//Position - 0x14049
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_265);
}

