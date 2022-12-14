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
	var uLocal_78 = 0;
	int iLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	int* iLocal_82 = NULL;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	bool bLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
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
	struct<3> Local_230 = { 0, 0, 0 } ;
	struct<3> Local_231 = { 0, 0, 0 } ;
	struct<3> Local_232 = { 0, 0, 0 } ;
	struct<3> Local_233 = { 0, 0, 0 } ;
	struct<3> Local_234 = { 0, 0, 0 } ;
	struct<3> Local_235 = { 0, 0, 0 } ;
	struct<3> Local_236 = { 0, 0, 0 } ;
	struct<3> Local_237 = { 0, 0, 0 } ;
	int iLocal_238 = 0;
	int* iLocal_239 = NULL;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	int* iLocal_242 = NULL;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	int iLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	bool bLocal_248 = 0;
	bool bLocal_249 = 0;
	int iLocal_250 = 0;
	int iLocal_251 = 0;
	bool bLocal_252 = 0;
	int iLocal_253 = 0;
	int iLocal_254 = 0;
	float fLocal_255 = 0f;
	float fLocal_256 = 0f;
	float fLocal_257 = 0f;
	var uLocal_258[4] = { 0, 0, 0, 0 };
	var uLocal_259[4] = { 0, 0, 0, 0 };
	struct<429> Local_260 = { 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_261 = 0;
	struct<27> Local_262 = { 3, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3 } ;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 3;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 3;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 5;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 3;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 3;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 1;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 4;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 4;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 4;
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
	var uLocal_330 = 1;
	var uLocal_331 = 2;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	struct<3> Local_338[1];
	int iLocal_339 = 0;
	var uLocal_340 = 0;
	struct<3> Local_341 = { 0, 0, 0 } ;
	struct<3> Local_342 = { 0, 0, 0 } ;
	int iLocal_343 = 0;
	bool bLocal_344 = 0;
	int iLocal_345 = 0;
	int iLocal_346 = 0;
	bool bLocal_347 = 0;
	struct<28> Local_348 = { -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 5;
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
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 1097859072;
	var uLocal_395 = 1500;
	var uLocal_396 = 45;
	var uLocal_397 = 1103626240;
	var uLocal_398 = 5;
	int iLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
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
	fLocal_255 = 98f;
	fLocal_256 = 55f;
	fLocal_257 = 60f;
	iLocal_339 = 1;
	Local_341 = { -1284.3666f, 295.74365f, 63.83044f };
	Local_342 = { -1286.2181f, 292.573f, 63.7927f };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(67))
	{
		__LIB_39__::func_78(2);
		func_414();
	}
	MISC::SET_MISSION_FLAG(true);
	func_401();
	while (true)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_260.f_2))
		{
			func_9();
		}
		else
		{
			__LIB_40__::func_227(&Local_260);
		}
		SYSTEM::WAIT(0);
	}
}

void func_9()//Position - 0x31F
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	if (__LIB_40__::func_166(&Local_260))
	{
		__LIB_40__::func_110(&Local_260);
		if (Local_260.f_410 > 0)
		{
			if (__LIB_42__::func_844(&Local_260, 0))
			{
				func_396();
			}
		}
		else if (__LIB_40__::func_293(&Local_260, 31) > 5f)
		{
			__LIB_39__::func_78(2);
			func_414();
		}
	}
	else
	{
		__LIB_42__::func_848(&Local_260, &uLocal_392);
		__LIB_40__::func_332(&Local_260);
		__LIB_40__::func_165(&Local_260, &uLocal_340, 0);
		if (Local_260.f_410 < 9)
		{
			func_358(&Local_260, &Local_262, &uLocal_392);
		}
		if (Local_260.f_410 > 5 && !iLocal_343)
		{
			iLocal_343 = 1;
			Local_262.f_16[0 /*3*/] = { 27.36738f, -1356.9482f, 28.2181f };
			Local_262.f_16[1 /*3*/] = { 314.30136f, -266.3495f, 52.78319f };
			Local_262.f_16[2 /*3*/] = { -159.9642f, -856.53094f, 28.71328f };
			Local_262.f_26[0 /*3*/] = { 30.9791f, -1347.3896f, 28.4939f };
			Local_262.f_26[1 /*3*/] = { 313.893f, -279.0695f, 53.1647f };
			Local_262.f_26[2 /*3*/] = { -88.0743f, -845.7833f, 40.797f };
		}
		if (Local_260.f_410 > 2)
		{
			if (!__LIB_40__::func_164(&Local_260))
			{
				if (!iLocal_345)
				{
					if (func_356())
					{
						func_354(&Local_262);
						iLocal_345 = 1;
					}
				}
				func_324();
			}
			else
			{
				__LIB_40__::func_297(&Local_260, "Taxi Not Driveable", __LIB_40__::func_154(&Local_260));
			}
		}
		if (Local_260.f_410 > 3)
		{
			if (!bVar3)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_260.f_4, false))
				{
					iVar0 = 0;
					while (iVar0 < 5)
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_262.f_4[iVar0], false))
						{
							if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_262.f_4[iVar0], Local_260.f_4, true))
							{
								bVar3 = true;
							}
						}
						iVar0++;
					}
				}
			}
			if (bVar3)
			{
				iVar1 = 0;
				while (iVar1 < 5)
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_262.f_4[iVar1], false))
					{
						if (!PED::IS_PED_INJURED(Local_262.f_4[iVar1]))
						{
							TASK::CLEAR_PED_TASKS(Local_262.f_4[iVar1]);
							TASK::CLEAR_SEQUENCE_TASK(&iVar2);
							TASK::OPEN_SEQUENCE_TASK(&iVar2);
							TASK::TASK_SMART_FLEE_PED(0, Local_260.f_2, 1000f, -1, false, false);
							TASK::CLOSE_SEQUENCE_TASK(iVar2);
							TASK::TASK_PERFORM_SEQUENCE(Local_262.f_4[iVar1], iVar2);
							TASK::CLEAR_SEQUENCE_TASK(&iVar2);
						}
					}
					iVar1++;
				}
			}
		}
		if (Local_260.f_410 == 9)
		{
			__LIB_42__::func_846(&Local_260, 0, 1);
			func_275(&Local_260, &Local_262, 1128792064);
		}
		switch (Local_260.f_410)
		{
			case 0:
				__LIB_40__::func_136(&(Local_338[0 /*3*/]), "TAXI_SC_BN_10", 200);
				__LIB_40__::func_135(&Local_260, &Local_338);
				func_271();
				func_269();
				func_268();
				__LIB_40__::func_183(&Local_260, 16, 4f, 0);
				func_264(&Local_260, Local_341, Local_342, &Local_262);
				func_263(&Local_260);
				__LIB_40__::func_146(&Local_260, 1);
				break;
			case 1:
				if (func_259())
				{
					__LIB_40__::func_144();
					func_238();
					__LIB_40__::func_134(&Local_260);
					__LIB_40__::func_104(&(Local_260.f_100), 8);
					__LIB_40__::func_104(&(Local_260.f_100), 2048);
					__LIB_40__::func_104(&(Local_260.f_100), 256);
					Local_260.f_14 = { Local_341 };
					Local_260.f_49 = 0;
					__LIB_40__::func_146(&Local_260, 3);
				}
				break;
			case 3:
				if (__LIB_40__::func_337(&Local_260, 3))
				{
					__LIB_40__::func_223(&Local_260, 1, 0);
					__LIB_40__::func_254(&uLocal_409, Local_341, 20f, 0);
					__LIB_40__::func_146(&Local_260, 5);
				}
				break;
			case 5:
				func_222();
				if (func_202(&Local_260, &Local_262))
				{
					STATS::STAT_GET_FLOAT(Local_260.f_428, &(Local_260.f_42), -1);
					__LIB_40__::func_146(&Local_260, 15);
				}
				break;
			case 15:
				if (func_200(&Local_260, &Local_262))
				{
					__LIB_40__::func_294(&Local_260, 8, 1, 0, 0);
					if (!ENTITY::IS_ENTITY_DEAD(Local_262[0], false))
					{
						PED::SET_PED_CONFIG_FLAG(Local_262[0], 26, true);
					}
					if (!ENTITY::IS_ENTITY_DEAD(Local_262[1], false))
					{
						PED::SET_PED_CONFIG_FLAG(Local_262[1], 26, true);
					}
					if (!ENTITY::IS_ENTITY_DEAD(Local_262[2], false))
					{
						PED::SET_PED_CONFIG_FLAG(Local_262[2], 26, true);
					}
					__LIB_40__::func_191(&Local_260);
					__LIB_42__::func_827(&Local_260, 0);
					func_192();
					__LIB_40__::func_179(&Local_260, 11);
					__LIB_40__::func_183(&Local_260, 10, 0, 0);
					__LIB_40__::func_183(&Local_260, 6, 0, 0);
					func_189();
					Local_260.f_36 = MISC::GET_RANDOM_FLOAT_IN_RANGE(3f, 10f);
					func_187(&Local_262);
					__LIB_40__::func_146(&Local_260, 9);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_260.f_4, false))
				{
					if (!PED::IS_PED_IN_VEHICLE(Local_260.f_2, Local_260.f_4, false))
					{
						func_183(&Local_260, &Local_262);
						__LIB_40__::func_146(&Local_260, 5);
					}
				}
				break;
			case 9:
				if (!bLocal_344)
				{
				}
				__LIB_43__::func_629(&Local_260);
				if (func_137(&Local_260, &Local_262, &Local_348, &uLocal_351))
				{
					__LIB_40__::func_126(&Local_348, -1, 1);
					if (func_135(&Local_262))
					{
						__LIB_40__::func_119(&Local_260, 0);
					}
					func_133(&Local_262);
					__LIB_40__::func_206(&Local_260);
					__LIB_40__::func_342(&Local_260);
					__LIB_40__::func_205(&Local_260);
					__LIB_40__::func_146(&Local_260, 27);
				}
				break;
			case 27:
				if (__LIB_40__::func_305(&Local_260, 1))
				{
					TASK::CLEAR_SEQUENCE_TASK(&iVar2);
					TASK::OPEN_SEQUENCE_TASK(&iVar2);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_262.f_26[0 /*3*/], 1f, 20000, 0.25f, 0, 40000f);
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
					if (TASK::DOES_SCENARIO_EXIST_IN_AREA(Local_260.f_29, 4f, true))
					{
						TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(0, Local_260.f_29, 4f, 0);
					}
					else
					{
						TASK::TASK_ACHIEVE_HEADING(0, 350.8689f, 0);
						TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_WINDOW_SHOP_BROWSE", 0, false);
					}
					TASK::CLOSE_SEQUENCE_TASK(iVar2);
					TASK::TASK_PERFORM_SEQUENCE(Local_260.f_3, iVar2);
					PED::SET_PED_KEEP_TASK(Local_260.f_3, true);
					__LIB_40__::func_146(&Local_260, 29);
				}
				break;
			case 29:
				if (!PED::IS_PED_INJURED(Local_260.f_3))
				{
					if (__LIB_2__::func_485(Local_260.f_3, 29.112947f, -1349.2177f, 29.6128f, 1) < 3f)
					{
						PED::SET_PED_RESET_FLAG(Local_260.f_3, 60, true);
					}
				}
				if (__LIB_42__::func_839(&Local_260, &iLocal_399))
				{
					__LIB_40__::func_310(1, &Local_260, 0);
					__LIB_40__::func_183(&Local_260, 31, 0, 0);
					__LIB_40__::func_146(&Local_260, 30);
				}
				break;
			case 30:
				if (!PED::IS_PED_INJURED(Local_260.f_3))
				{
					if (__LIB_2__::func_485(Local_260.f_3, 29.112947f, -1349.2177f, 29.6128f, 1) < 3f)
					{
						PED::SET_PED_RESET_FLAG(Local_260.f_3, 60, true);
					}
					if ((ENTITY::IS_ENTITY_AT_COORD(Local_260.f_3, 31.050192f, -1347.2848f, 29.497032f, 1f, 1f, 1f, false, true, 1) || __LIB_14__::func_556(Local_260.f_3, 1) > 50f) || __LIB_40__::func_293(&Local_260, 31) > 30f)
					{
						if (ENTITY::IS_ENTITY_AT_COORD(Local_260.f_3, 31.050192f, -1347.2848f, 29.497032f, 1f, 1f, 1f, false, true, 1))
						{
						}
						if (__LIB_14__::func_556(Local_260.f_3, 1) > 50f)
						{
						}
						if (__LIB_40__::func_293(&Local_260, 31) > 30f)
						{
						}
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_260.f_3, false);
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, Local_260.f_413, joaat("PLAYER"));
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_260.f_3));
						func_414();
					}
				}
				else
				{
					func_414();
				}
				break;
			}
	}
}

void func_133(var uParam0)//Position - 0x4226
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam0->f_73[iVar0]))
		{
			GRAPHICS::STOP_PARTICLE_FX_LOOPED(uParam0->f_73[iVar0], false);
		}
		iVar0++;
	}
	iLocal_245 = 0;
}

bool func_135(var uParam0)//Position - 0x428E
{
	return ((uParam0->f_55[0] && uParam0->f_55[1]) && uParam0->f_55[2]);
}

int func_137(var uParam0, var uParam1, var uParam2, var uParam3)//Position - 0x42D9
{
	int iVar0;
	func_175(uParam0, uParam2, uParam1);
	if (__LIB_40__::func_128(uParam0) >= 14)
	{
		if (iLocal_250)
		{
			if (((__LIB_40__::func_293(uParam0, 11) > 20f && !__LIB_0__::func_75()) && !HUD::IS_MESSAGE_BEING_DISPLAYED()) && !bLocal_248)
			{
				bLocal_248 = true;
			}
		}
	}
	if (uParam1->f_90 < 2)
	{
		if (uParam1->f_65 && !iLocal_250)
		{
			func_168(uParam0, uParam1, 0, uParam1->f_65);
			uParam1->f_65 = 0;
		}
		else
		{
			func_168(uParam0, uParam1, 0, 0);
		}
		if (uParam1->f_66 && uParam1->f_90 < 1)
		{
			if (!PED::IS_PED_INJURED((*uParam1)[uParam1->f_95]) && PED::IS_PED_IN_ANY_VEHICLE((*uParam1)[uParam1->f_95], false))
			{
				if (!iLocal_254)
				{
					if (func_167(uParam1[uParam1->f_95], &(uParam1->f_94)))
					{
						func_166(&(uParam1->f_95));
					}
				}
				else if (!uParam1->f_72)
				{
					TASK::CLEAR_PED_TASKS((*uParam1)[uParam1->f_95]);
					TASK::TASK_STAND_STILL((*uParam1)[uParam1->f_95], 500);
					uParam1->f_72 = 1;
				}
			}
		}
	}
	else if (!uParam1->f_62)
	{
		func_168(uParam0, uParam1, 1, 0);
	}
	if ((((PED::IS_PED_INJURED((*uParam1)[0]) || PED::IS_PED_INJURED((*uParam1)[1])) || PED::IS_PED_INJURED((*uParam1)[2])) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY((*uParam1)[1], uParam0->f_4, true)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY((*uParam1)[2], uParam0->f_4, true))
	{
		uParam0->f_415 = 14;
		__LIB_40__::func_297(uParam0, "Passenger injured.", 14);
	}
	if (!func_152(uParam0, uParam1))
	{
		if (!VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(uParam0->f_2, uParam0->f_4, -1, false, false))
		{
			TASK::TASK_LEAVE_ANY_VEHICLE((*uParam1)[0], 0, 0);
			bLocal_252 = true;
			iLocal_253 = 0;
		}
	}
	else
	{
		if (bLocal_252)
		{
			if (VEHICLE::IS_VEHICLE_SEAT_FREE(uParam0->f_4, 0, false))
			{
				if (!iLocal_253)
				{
					TASK::TASK_ENTER_VEHICLE((*uParam1)[0], uParam0->f_4, 20000, 0, 2f, 1, 0);
					iLocal_253 = 1;
				}
				if (__LIB_0__::func_76(uParam0->f_4, (*uParam1)[0], 1) > 40f)
				{
					__LIB_40__::func_297(uParam0, "Passenger left behind.", 8);
				}
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, 0, false) == (*uParam1)[0])
			{
				func_187(uParam1);
				bLocal_252 = false;
			}
		}
		__LIB_42__::func_840(uParam0, 1097859072, 1117782016);
		__LIB_40__::func_120(uParam0, &(uParam0->f_43));
		if (!bLocal_252 && !PED::IS_PED_IN_VEHICLE((*uParam1)[0], uParam0->f_4, false))
		{
			__LIB_40__::func_297(uParam0, "Passenger left car.", 9);
		}
		switch (uParam1->f_90)
		{
			case 0:
				if (!uParam1->f_51[2])
				{
					if (__LIB_2__::func_485(uParam0->f_4, uParam1->f_16[2 /*3*/], 1) < 150f && !iLocal_254)
					{
						__LIB_40__::func_294(uParam0, 99, 1, 0, 0);
						iLocal_254 = 1;
					}
					if (ENTITY::IS_ENTITY_AT_COORD(uParam0->f_4, uParam1->f_16[2 /*3*/], 5f, 5f, 2f, !uParam0->f_140, true, 0))
					{
						if (__LIB_40__::func_249(uParam0, 1, 4f))
						{
							if (!PED::IS_PED_INJURED((*uParam1)[2]))
							{
								HUD::REMOVE_BLIP(&(uParam1->f_36[2]));
								__LIB_0__::func_638();
								if (uParam1->f_95 == 2)
								{
									TASK::CLEAR_PED_TASKS((*uParam1)[2]);
								}
								TASK::CLEAR_SEQUENCE_TASK(&iVar0);
								TASK::OPEN_SEQUENCE_TASK(&iVar0);
								TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -98.0071f, -851.2611f, 40.9833f, 1f, 30000, 0.25f, 0, 40000f);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -83.1601f, -835.3889f, 39.5744f, 1f, 20000, 0.25f, 0, 40000f);
								TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_STAND_MOBILE", 0, false);
								TASK::CLOSE_SEQUENCE_TASK(iVar0);
								TASK::TASK_PERFORM_SEQUENCE((*uParam1)[2], iVar0);
								TASK::CLEAR_SEQUENCE_TASK(&iVar0);
								if (__LIB_40__::func_293(uParam0, 6) < fLocal_255)
								{
									uParam1->f_55[2] = 1;
									__LIB_40__::func_294(uParam0, 38, 1, 0, 0);
									uParam0->f_56 += 3;
								}
								else
								{
									uParam1->f_55[2] = 0;
									__LIB_40__::func_294(uParam0, 39, 1, 0, 0);
									uParam0->f_56 = (uParam0->f_56 - 3);
								}
								uParam1->f_90++;
								__LIB_40__::func_177(uParam0, 6);
							}
						}
					}
				}
				break;
			case 1:
				if ((!func_144((*uParam1)[2], uParam0->f_4) && __LIB_40__::func_293(uParam0, 20) > 1f) && !uParam1->f_51[2])
				{
					func_133(uParam1);
					uParam1->f_51[2] = 1;
					uParam0->f_26 = { 193.102f, -220.0569f, 52.8647f };
					uParam0->f_34 = 250.7f;
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0);
				}
				else if (!__LIB_40__::func_299(uParam0) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
				{
					__LIB_40__::func_180(uParam3);
					__LIB_40__::func_126(uParam2, -1, 0);
					__LIB_40__::func_183(uParam0, 6, 0, 0);
					__LIB_40__::func_183(uParam0, 11, 0, 0);
					__LIB_40__::func_294(uParam0, 40, 1, 0, 0);
					if (!HUD::DOES_BLIP_EXIST(uParam1->f_36[1]))
					{
						func_187(uParam1);
					}
					iLocal_254 = 0;
					uParam1->f_90++;
				}
				break;
			case 2:
				if (!uParam1->f_51[1])
				{
					if (__LIB_2__::func_485(uParam0->f_4, uParam1->f_16[1 /*3*/], 1) < 175f && !iLocal_254)
					{
						__LIB_40__::func_294(uParam0, 99, 1, 0, 0);
						iLocal_254 = 1;
					}
					if (ENTITY::IS_ENTITY_AT_COORD(uParam0->f_4, uParam1->f_16[1 /*3*/], 5f, 5f, 2f, !uParam0->f_140, true, 0))
					{
						if (__LIB_40__::func_249(uParam0, 1, 4f))
						{
							if (!PED::IS_PED_INJURED((*uParam1)[1]))
							{
								__LIB_0__::func_638();
								HUD::REMOVE_BLIP(&(uParam1->f_36[1]));
								func_138(&(uParam0->f_4), uParam1[1], uParam1->f_26[1 /*3*/]);
								if (__LIB_40__::func_293(uParam0, 6) < fLocal_256)
								{
									uParam1->f_55[1] = 1;
									__LIB_40__::func_294(uParam0, 41, 1, 0, 0);
									uParam0->f_56 += 2;
								}
								else
								{
									uParam1->f_55[1] = 0;
									__LIB_40__::func_294(uParam0, 42, 1, 0, 0);
									uParam0->f_56 = (uParam0->f_56 - 2);
								}
								uParam1->f_90++;
								__LIB_40__::func_177(uParam0, 6);
							}
						}
					}
				}
				break;
			case 3:
				if ((!func_144((*uParam1)[1], uParam0->f_4) && __LIB_40__::func_293(uParam0, 20) > 1f) && !uParam1->f_51[1])
				{
					uParam1->f_51[1] = 1;
					uParam0->f_26 = { 51.4688f, -1302.0417f, 28.1383f };
					uParam0->f_34 = 216.5f;
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0);
				}
				else if (!__LIB_40__::func_299(uParam0) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
				{
					__LIB_40__::func_180(uParam3);
					__LIB_40__::func_126(uParam2, -1, 0);
					__LIB_40__::func_183(uParam0, 6, 0, 0);
					__LIB_40__::func_183(uParam0, 11, 0, 0);
					__LIB_40__::func_294(uParam0, 43, 1, 0, 0);
					iLocal_254 = 0;
					if (!HUD::DOES_BLIP_EXIST(uParam1->f_36[0]))
					{
						func_187(uParam1);
					}
					uParam1->f_90++;
				}
				break;
			case 4:
				if (!uParam1->f_51[0])
				{
					if (__LIB_2__::func_485(uParam0->f_4, uParam1->f_16[0 /*3*/], 1) < 100f && !iLocal_254)
					{
						__LIB_40__::func_294(uParam0, 99, 1, 0, 0);
						iLocal_254 = 1;
					}
					if (ENTITY::IS_ENTITY_AT_COORD(uParam0->f_4, uParam1->f_16[0 /*3*/], 5f, 5f, 2f, !uParam0->f_140, true, 0))
					{
						if (__LIB_40__::func_249(uParam0, 1, 4f))
						{
							HUD::REMOVE_BLIP(&(uParam1->f_36[0]));
							uParam1->f_51[0] = 1;
							__LIB_0__::func_638();
							if (__LIB_40__::func_293(uParam0, 6) < fLocal_257)
							{
								uParam1->f_55[0] = 1;
								uParam0->f_56 += 2;
							}
							else
							{
								uParam1->f_55[0] = 0;
								uParam0->f_56 = (uParam0->f_56 - 2);
							}
							return 1;
						}
					}
				}
				break;
			}
	}
	return 0;
}

void func_138(var uParam0, var uParam1, struct<3> Param2)//Position - 0x4A2E
{
	struct<3> Var0;
	struct<3> Var1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*uParam1, false))
		{
			Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(*uParam0, -1.78774f, -1.62399f, -0.6206f) };
			Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(*uParam0, 1.78498f, -1.24105f, -0.6422f) };
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Param2, false) < MISC::GET_DISTANCE_BETWEEN_COORDS(Var1, Param2, false) && VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(*uParam1, *uParam0, 1, false, false))
			{
				iVar2 = 131072;
			}
			else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Param2, false) >= MISC::GET_DISTANCE_BETWEEN_COORDS(Var1, Param2, false) && VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(*uParam1, *uParam0, 2, false, false))
			{
				iVar2 = 262144;
			}
			else
			{
				iVar2 = 16;
			}
			Var4 = { 312.99612f, -274.4479f, 52.92882f };
			if (iVar2 == 16)
			{
				TASK::CLEAR_SEQUENCE_TASK(&iVar3);
				TASK::OPEN_SEQUENCE_TASK(&iVar3);
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Var4, 1f, 20000, 0.25f, 0, 40000f);
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(0, Var4, 5f, 0);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Param2, 1f, 20000, 0.25f, 0, 40000f);
				TASK::CLOSE_SEQUENCE_TASK(iVar3);
				TASK::TASK_PERFORM_SEQUENCE(*uParam1, iVar3);
			}
			else
			{
				TASK::CLEAR_SEQUENCE_TASK(&iVar3);
				TASK::OPEN_SEQUENCE_TASK(&iVar3);
				TASK::TASK_LEAVE_VEHICLE(0, *uParam0, iVar2);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Var4, 1f, 20000, 0.25f, 0, 40000f);
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(0, Var4, 5f, 0);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Param2, 1f, 20000, 0.25f, 0, 40000f);
				TASK::CLOSE_SEQUENCE_TASK(iVar3);
				TASK::TASK_PERFORM_SEQUENCE(*uParam1, iVar3);
			}
		}
	}
}

int func_144(int iParam0, int iParam1)//Position - 0x4C7A
{
	if (__LIB_40__::func_237(iParam0, iParam1))
	{
		if (PED::IS_PED_IN_VEHICLE(iParam0, iParam1, false))
		{
			return 1;
		}
	}
	return 0;
}

int func_152(var uParam0, var uParam1)//Position - 0x4F11
{
	int iVar0;
	bool bVar1;
	bVar1 = true;
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		__LIB_40__::func_297(uParam0, "IS_TAXI_RIDE_ALL_READY - Taxi not drivable.", 0);
	}
	else
	{
		func_165(uParam0, &(uParam1->f_40));
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (PED::IS_PED_INJURED((*uParam1)[iVar0]))
			{
				__LIB_40__::func_297(uParam0, "Passenger injured.", 15);
				bVar1 = false;
			}
			iVar0++;
		}
		if (bVar1)
		{
			if (__LIB_40__::func_346(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_165(var uParam0, var uParam1)//Position - 0x52DA
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (!PED::IS_PED_IN_VEHICLE(uParam0->f_2, uParam0->f_4, false))
		{
			if (!__LIB_40__::func_117(uParam0, 14))
			{
				if (HUD::DOES_BLIP_EXIST(*uParam1) && HUD::GET_BLIP_ALPHA(*uParam1) > 0)
				{
					HUD::SET_BLIP_ALPHA(*uParam1, 0);
				}
				__LIB_40__::func_308(uParam0, 0, 0);
				__LIB_40__::func_294(uParam0, 2, 1, 1, 0);
			}
			else if (__LIB_40__::func_293(uParam0, 14) > 20f)
			{
				__LIB_40__::func_297(uParam0, "Player not in taxi.", 9);
			}
		}
		else
		{
			if (__LIB_40__::func_117(uParam0, 14))
			{
				__LIB_40__::func_291(uParam0);
			}
			if (HUD::DOES_BLIP_EXIST(uParam0->f_10))
			{
				HUD::REMOVE_BLIP(&(uParam0->f_10));
			}
			if ((HUD::DOES_BLIP_EXIST(*uParam1) && HUD::GET_BLIP_ALPHA(*uParam1) < 255) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) < 1)
			{
				HUD::SET_BLIP_ALPHA(*uParam1, 255);
				HUD::SET_BLIP_ROUTE(*uParam1, true);
			}
		}
	}
}

void func_166(var uParam0)//Position - 0x53BD
{
	int iVar0;
	iVar0 = *uParam0;
	iVar0++;
	if (iVar0 == 3)
	{
		iVar0 = 0;
	}
	*uParam0 = iVar0;
}

int func_167(var uParam0, var uParam1)//Position - 0x53DE
{
	int iVar0;
	switch (*uParam1)
	{
		case 0:
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_PLAY_ANIM(0, "oddjobs@taxi@gyn@cc@hotbox", "idle_b", 8f, -8f, -1, 0, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, "oddjobs@taxi@gyn@cc@hotbox", "base", 8f, -8f, -1, 0, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, "oddjobs@taxi@gyn@cc@hotbox", "idle_b", 8f, -8f, -1, 0, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, "oddjobs@taxi@gyn@cc@hotbox", "base", 8f, -8f, -1, 0, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, "oddjobs@taxi@gyn@cc@hotbox", "base", 8f, -8f, -1, 0, 0f, false, false, false);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(*uParam0, iVar0);
			*uParam1 = 1;
			break;
		case 1:
			if (TASK::GET_SCRIPT_TASK_STATUS(*uParam0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1 || TASK::GET_SCRIPT_TASK_STATUS(*uParam0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 7)
			{
				*uParam1 = 0;
				return 1;
			}
			break;
	}
	return 0;
}

void func_168(var uParam0, var uParam1, bool bParam2, bool bParam3)//Position - 0x54DE
{
	var uVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	float fVar8;
	if (bLocal_248)
	{
		if (!uParam1->f_59)
		{
			if (!__LIB_0__::func_75())
			{
				__LIB_42__::func_826(&(uParam1->f_99));
				uParam1->f_59 = 1;
				func_171(uParam0, uParam1);
				uParam1->f_91 = MISC::GET_GAME_TIMER();
			}
		}
	}
	if (bLocal_249)
	{
		if (!uParam1->f_60)
		{
			if (!__LIB_0__::func_75())
			{
				uParam1->f_60 = 1;
				func_170(uParam0, uParam1);
				uParam1->f_91 = MISC::GET_GAME_TIMER();
				uParam1->f_92 = MISC::GET_GAME_TIMER();
			}
		}
	}
	uVar0 = func_169(uParam0);
	if (uParam1->f_59 || uParam1->f_60)
	{
		fVar2 = ENTITY::GET_ENTITY_SPEED(uParam0->f_4);
		fVar3 = 4f;
		if (fVar2 >= fVar3)
		{
			fVar4 = 1f;
		}
		else
		{
			fVar4 = (fVar2 / fVar3);
		}
		if (uParam1->f_60)
		{
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < 4)
			{
				if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam1->f_73[iVar1]))
				{
					GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam1->f_73[iVar1], "speed", fVar4, false);
				}
				iVar1++;
			}
		}
		if (uParam1->f_59)
		{
			GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam1->f_88, "speed", fVar4, false);
			GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam1->f_89, "speed", fVar4, false);
		}
	}
	if (ENTITY::GET_ENTITY_SPEED(uParam0->f_4) >= 40f && !uParam1->f_63)
	{
		uParam1->f_91 = MISC::GET_GAME_TIMER();
		uParam1->f_63 = 1;
	}
	if ((ENTITY::GET_ENTITY_SPEED(uParam0->f_4) < 40f && uParam1->f_63) && !bParam2)
	{
		uParam1->f_91 = MISC::GET_GAME_TIMER();
		uParam1->f_63 = 0;
		uParam1->f_62 = 0;
	}
	if (bParam2 && !uParam1->f_63)
	{
		uParam1->f_91 = MISC::GET_GAME_TIMER();
		uParam1->f_63 = 1;
	}
	if (((uParam1->f_59 || uParam1->f_60) && !uParam1->f_63) && !bParam2)
	{
		if (bParam3)
		{
			fVar8 = 0f;
			uParam1->f_61 = 1;
			uParam1->f_63 = 0;
			if (uParam1->f_60)
			{
				iVar1 = 0;
				iVar1 = 0;
				while (iVar1 < 4)
				{
					if (VEHICLE::IS_VEHICLE_DOOR_FULLY_OPEN(uParam0->f_4, iVar1))
					{
						if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam1->f_73[iVar1]))
						{
							GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam1->f_73[iVar1], "smoke", 1f, false);
						}
					}
					else if (!VEHICLE::IS_VEHICLE_WINDOW_INTACT(uParam0->f_4, iVar1))
					{
						if ((MISC::GET_GAME_TIMER() % 2000) < 50)
						{
						}
						if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam1->f_73[iVar1]))
						{
							GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam1->f_73[iVar1], "smoke", 1f, false);
						}
					}
					else if (iVar1 > 1 && uVar0)
					{
						if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam1->f_73[iVar1]))
						{
							GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam1->f_73[iVar1], "smoke", fVar8, false);
						}
					}
					iVar1++;
				}
			}
			if (uParam1->f_59)
			{
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam1->f_88, "smoke", fVar8, false);
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam1->f_89, "smoke", fVar8, false);
			}
		}
		else
		{
			iVar6 = 6000;
			iVar5 = (MISC::GET_GAME_TIMER() - uParam1->f_91);
			if (iVar5 >= iVar6)
			{
				fVar8 = 0f;
				uParam1->f_61 = 1;
				uParam1->f_63 = 0;
			}
			else
			{
				fVar8 = (1f - (SYSTEM::TO_FLOAT(iVar5) / SYSTEM::TO_FLOAT(iVar6)));
			}
			if (uParam1->f_60)
			{
				iVar1 = 0;
				iVar1 = 0;
				while (iVar1 < 4)
				{
					if (VEHICLE::IS_VEHICLE_DOOR_FULLY_OPEN(uParam0->f_4, iVar1))
					{
						if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam1->f_73[iVar1]))
						{
							GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam1->f_73[iVar1], "smoke", 1f, false);
						}
					}
					else if (!VEHICLE::IS_VEHICLE_WINDOW_INTACT(uParam0->f_4, iVar1))
					{
						if ((MISC::GET_GAME_TIMER() % 2000) < 50)
						{
						}
						if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam1->f_73[iVar1]))
						{
							GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam1->f_73[iVar1], "smoke", 1f, false);
						}
					}
					else if (iVar1 > 1 && uVar0)
					{
						if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam1->f_73[iVar1]))
						{
							GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam1->f_73[iVar1], "smoke", fVar8, false);
						}
					}
					iVar1++;
				}
			}
			if (uParam1->f_59)
			{
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam1->f_88, "smoke", fVar8, false);
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam1->f_89, "smoke", fVar8, false);
			}
		}
	}
	if ((uParam1->f_59 || uParam1->f_60) && ((uParam1->f_61 && !uParam1->f_62) || bParam2))
	{
		if (uParam1->f_63)
		{
			iVar7 = 6000;
			iVar5 = (MISC::GET_GAME_TIMER() - uParam1->f_91);
			if (iVar5 >= iVar7)
			{
				fVar8 = 1f;
				uParam1->f_62 = 1;
			}
			else
			{
				fVar8 = (SYSTEM::TO_FLOAT(iVar5) / SYSTEM::TO_FLOAT(iVar7));
			}
			if (uParam1->f_60)
			{
				iVar1 = 0;
				iVar1 = 0;
				while (iVar1 < 4)
				{
					if (VEHICLE::IS_VEHICLE_DOOR_FULLY_OPEN(uParam0->f_4, iVar1))
					{
						if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam1->f_83[iVar1]))
						{
							GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam1->f_83[iVar1], "smoke", fVar8, false);
						}
					}
					else if (!VEHICLE::IS_VEHICLE_WINDOW_INTACT(uParam0->f_4, iVar1))
					{
						if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam1->f_78[iVar1]))
						{
							GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam1->f_78[iVar1], "smoke", fVar8, false);
						}
					}
					if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam1->f_73[iVar1]))
					{
						GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam1->f_73[iVar1], "smoke", fVar8, false);
					}
					iVar1++;
				}
			}
			if (uParam1->f_59)
			{
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam1->f_88, "smoke", fVar8, false);
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam1->f_89, "smoke", fVar8, false);
			}
		}
	}
}

int func_169(var uParam0)//Position - 0x59C0
{
	int iVar0;
	int iVar1;
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (VEHICLE::IS_VEHICLE_DOOR_FULLY_OPEN(uParam0->f_4, iVar0))
		{
			if (!BitTest(uLocal_259[iVar0], 1))
			{
				MISC::SET_BIT(&(uLocal_259[iVar0]), 1);
			}
			if (VEHICLE::IS_VEHICLE_DOOR_DAMAGED(uParam0->f_4, iVar0))
			{
				iVar1 = 0;
				if (!iLocal_250)
				{
					iLocal_250 = 1;
				}
			}
		}
		else if (BitTest(uLocal_259[iVar0], 1))
		{
			MISC::CLEAR_BIT(&(uLocal_259[iVar0]), 1);
		}
		if (!VEHICLE::IS_VEHICLE_WINDOW_INTACT(uParam0->f_4, iVar0))
		{
			iVar1 = 0;
			if (!BitTest(uLocal_258[iVar0], 1))
			{
				MISC::SET_BIT(&(uLocal_258[iVar0]), 1);
			}
			if (!iLocal_250)
			{
				iLocal_250 = 1;
			}
		}
		else if (BitTest(uLocal_258[iVar0], 1))
		{
			MISC::CLEAR_BIT(&(uLocal_258[iVar0]), 1);
		}
		iVar0++;
	}
	return iVar1;
}

void func_170(var uParam0, var uParam1)//Position - 0x5A8B
{
	int iVar0;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		uParam1->f_73[0] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_ojtaxi_hotbox_trail", uParam0->f_4, Local_230, 0f, 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0.4f, 0.6f), false, false, false);
		uParam1->f_73[1] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_ojtaxi_hotbox_trail", uParam0->f_4, Local_232, 0f, 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0.4f, 0.6f), false, false, false);
		uParam1->f_73[2] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_ojtaxi_hotbox_trail", uParam0->f_4, Local_231, 0f, 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0.8f, 1f), false, false, false);
		uParam1->f_73[3] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_ojtaxi_hotbox_trail", uParam0->f_4, Local_233, 0f, 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0.8f, 1f), false, false, false);
		iVar0 = 0;
		while (iVar0 < 4)
		{
			GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam1->f_73[iVar0], "smoke", 1f, false);
			GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam1->f_73[iVar0], "speed", 0f, false);
			iVar0++;
		}
	}
}

void func_171(var uParam0, var uParam1)//Position - 0x5B7D
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		uParam1->f_88 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_ojtaxi_hotbox_door", uParam0->f_4, 0f, -0.15f, 0.2f, 0f, 0f, 0f, 1f, false, false, false);
		uParam1->f_89 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_ojtaxi_hotbox_window", uParam0->f_4, 0f, -0.15f, 0.6f, 0f, 0f, 0f, 1f, false, false, false);
	}
	GRAPHICS::SET_PARTICLE_FX_FORCE_VEHICLE_INTERIOR(true);
}

void func_175(var uParam0, var uParam1, var uParam2)//Position - 0x5C29
{
	if (!__LIB_0__::func_703(uParam0->f_44, 1))
	{
		switch (uParam0->f_412)
		{
			case 0:
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) >= 1)
				{
					if (__LIB_40__::func_293(uParam0, 9) > 1f)
					{
						__LIB_40__::func_125(uParam0, PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()));
						__LIB_40__::func_294(uParam0, 50, 1, 0, 0);
						__LIB_40__::func_183(uParam0, 9, 0, 0);
						if (HUD::DOES_BLIP_EXIST(uParam2->f_40))
						{
							HUD::SET_BLIP_ALPHA(uParam2->f_40, 0);
							HUD::SET_BLIP_ROUTE(uParam2->f_40, false);
						}
						uParam0->f_140 = 1;
						uParam0->f_412 = 1;
					}
				}
				break;
			case 1:
				if (!__LIB_0__::func_75() && __LIB_40__::func_293(uParam0, 9) > 4f)
				{
					__LIB_40__::func_294(uParam0, 52, 1, 0, 0);
					uParam0->f_412 = 2;
				}
				break;
			case 2:
				if (__LIB_0__::func_501("TAXI_OBJ_POL", 0, 0))
				{
					__LIB_40__::func_294(uParam0, 51, 0, 0, 0);
					uParam0->f_412 = 3;
				}
				else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) < 1)
				{
					uParam0->f_412 = 3;
				}
				break;
			case 3:
				if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::GET_PLAYER_INDEX(), __LIB_40__::func_124(uParam0)))
				{
					__LIB_40__::func_125(uParam0, PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()));
					__LIB_40__::func_176(6, 0);
				}
				if (!__LIB_21__::func_717(uParam0))
				{
					if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						if (__LIB_40__::func_293(uParam0, 16) > 10f)
						{
							__LIB_40__::func_294(uParam0, 51, 1, 0, 0);
						}
					}
				}
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) < 1)
				{
					if (HUD::DOES_BLIP_EXIST(uParam2->f_40))
					{
						HUD::SET_BLIP_ALPHA(uParam2->f_40, 255);
						HUD::SET_BLIP_ROUTE(uParam2->f_40, true);
					}
					uParam0->f_140 = 0;
					uParam0->f_412 = 4;
				}
				break;
			case 4:
				if (!__LIB_0__::func_75())
				{
					__LIB_40__::func_294(uParam0, 53, 1, 0, 1);
					__LIB_40__::func_176(7, __LIB_40__::func_124(uParam0));
					__LIB_40__::func_125(uParam0, 0);
					uParam0->f_412 = 5;
				}
				break;
			case 5:
				if (!__LIB_0__::func_75())
				{
					__LIB_40__::func_236(uParam1, -1, 4);
					uParam0->f_412 = 0;
				}
				break;
			}
	}
}

void func_183(var uParam0, var uParam1)//Position - 0x6101
{
	__LIB_40__::func_129(uParam0, 1000);
	if ((!ENTITY::IS_ENTITY_DEAD((*uParam1)[0], false) && !ENTITY::IS_ENTITY_DEAD((*uParam1)[1], false)) && !ENTITY::IS_ENTITY_DEAD((*uParam1)[2], false))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY((*uParam1)[0]);
		TASK::CLEAR_PED_TASKS_IMMEDIATELY((*uParam1)[1]);
		TASK::CLEAR_PED_TASKS_IMMEDIATELY((*uParam1)[2]);
	}
	__LIB_0__::func_325();
	__LIB_40__::func_291(uParam0);
}

void func_187(var uParam0)//Position - 0x6206
{
	if (!uParam0->f_51[2])
	{
		if (!HUD::DOES_BLIP_EXIST(uParam0->f_36[2]))
		{
			uParam0->f_36[2] = __LIB_0__::func_488(uParam0->f_16[2 /*3*/], 1);
			uParam0->f_40 = uParam0->f_36[2];
		}
		if (!HUD::DOES_BLIP_HAVE_GPS_ROUTE(uParam0->f_36[2]))
		{
			HUD::SET_BLIP_ROUTE(uParam0->f_36[2], true);
		}
	}
	else if (!uParam0->f_51[1])
	{
		if (!HUD::DOES_BLIP_EXIST(uParam0->f_36[1]))
		{
			uParam0->f_36[1] = __LIB_0__::func_488(uParam0->f_16[1 /*3*/], 1);
			uParam0->f_40 = uParam0->f_36[1];
		}
		if (!HUD::DOES_BLIP_HAVE_GPS_ROUTE(uParam0->f_36[1]))
		{
			HUD::SET_BLIP_ROUTE(uParam0->f_36[1], true);
		}
	}
	else
	{
		if (!HUD::DOES_BLIP_EXIST(uParam0->f_36[0]))
		{
			uParam0->f_36[0] = __LIB_0__::func_488(uParam0->f_16[0 /*3*/], 1);
			uParam0->f_40 = uParam0->f_36[0];
		}
		if (!HUD::DOES_BLIP_HAVE_GPS_ROUTE(uParam0->f_36[0]))
		{
			HUD::SET_BLIP_ROUTE(uParam0->f_36[0], true);
		}
	}
}

void func_189()//Position - 0x6334
{
	__LIB_40__::func_104(&(Local_260.f_55), 2);
	__LIB_40__::func_104(&(Local_260.f_55), 4);
	__LIB_40__::func_104(&(Local_260.f_55), 16);
	__LIB_40__::func_104(&(Local_260.f_55), 64);
	__LIB_40__::func_104(&(Local_260.f_55), 256);
	__LIB_40__::func_104(&(Local_260.f_55), 512);
	__LIB_40__::func_104(&(Local_260.f_55), 1024);
	__LIB_40__::func_104(&(Local_260.f_55), 2048);
	__LIB_40__::func_104(&(Local_260.f_55), 4096);
	__LIB_40__::func_104(&(Local_260.f_55), 1073741824);
	__LIB_40__::func_104(&uLocal_392, 2);
}

void func_192()//Position - 0x63E4
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("stretch"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("superd"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_262.f_45[0]);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_262.f_45[1]);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_262.f_45[2]);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_262.f_45[3]);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_262.f_45[4]);
	STREAMING::REMOVE_ANIM_DICT("oddjobs@taxi@gyn@cc@intro");
	STREAMING::REMOVE_ANIM_DICT("amb@world_human_stand_impatient@female@no_sign@exit");
	STREAMING::REMOVE_ANIM_DICT("amb@world_human_stand_impatient@female@no_sign@base");
}

bool func_200(var uParam0, var uParam1)//Position - 0x65CC
{
	return ((func_201((*uParam1)[0], uParam0) && func_201((*uParam1)[1], uParam0)) && func_201((*uParam1)[2], uParam0));
}

int func_201(int iParam0, var uParam1)//Position - 0x65FF
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam1->f_4, false))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (PED::IS_PED_SITTING_IN_VEHICLE(iParam0, uParam1->f_4))
			{
				return 1;
			}
		}
		else
		{
			__LIB_40__::func_297(uParam1, "Passenger was injured", 15);
		}
	}
	else
	{
		__LIB_40__::func_297(uParam1, "Taxi was destroyed", 0);
	}
	return 0;
}

int func_202(var uParam0, var uParam1)//Position - 0x664C
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	__LIB_40__::func_318(uParam0, (*uParam1)[0]);
	__LIB_40__::func_318(uParam0, (*uParam1)[1]);
	__LIB_40__::func_318(uParam0, (*uParam1)[2]);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (!PED::IS_PED_IN_VEHICLE(uParam0->f_2, uParam0->f_4, false))
		{
			__LIB_42__::func_847(uParam0, 1);
			if (__LIB_40__::func_202())
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0);
				func_183(uParam0, uParam1);
			}
		}
		else if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::GET_PLAYER_INDEX(), 0))
		{
			__LIB_40__::func_336(uParam0);
		}
		else
		{
			if (__LIB_40__::func_117(uParam0, 14))
			{
				__LIB_40__::func_291(uParam0);
				func_216(uParam0, uParam1, 0);
			}
			if (__LIB_40__::func_117(uParam0, 9))
			{
				__LIB_40__::func_118(uParam0, 9, 0);
				HUD::CLEAR_PRINTS();
				if (HUD::DOES_BLIP_EXIST(uParam0->f_8))
				{
					HUD::SET_BLIP_ALPHA(uParam0->f_8, 255);
					HUD::SET_BLIP_ROUTE(uParam0->f_8, true);
				}
			}
			if (!PED::IS_PED_INJURED((*uParam1)[0]))
			{
				if (!uParam0->f_142)
				{
					fVar4 = ((ENTITY::GET_ENTITY_SPEED(uParam0->f_4) / 5f) + 4f);
					if (uParam0->f_141)
					{
						if (__LIB_40__::func_196(uParam0, (*uParam1)[iLocal_238]) > 50f || __LIB_9__::func_437(&iLocal_239) > 5f)
						{
							__LIB_40__::func_297(uParam0, "Left Passenger", 8);
						}
					}
					switch (uParam0->f_48)
					{
						case 0:
							if (TASK::GET_SCRIPT_TASK_STATUS((*uParam1)[iLocal_238], joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) != 1 || ((__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), (*uParam1)[iLocal_238], 1) < 20f && __LIB_0__::func_724((*uParam1)[iLocal_238], uParam0->f_11, 1) <= 28f) && __LIB_0__::func_724(uParam0->f_4, uParam0->f_11, 1) <= 28f))
							{
								if (func_212(uParam0, uParam1, 40f))
								{
									uParam0->f_48++;
								}
							}
							break;
						case 1:
							if (func_211(uParam0, uParam1, 0, 1108082688, 1090519040, 1082130432))
							{
								uParam0->f_138 = 1;
								if (bLocal_86)
								{
									iVar0 = __LIB_40__::func_115(uParam0, &uVar1);
									if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
									{
										TASK::TASK_LEAVE_ANY_VEHICLE(iVar0, 0, 0);
									}
								}
								iVar3 = 0;
								while (iVar3 < 3)
								{
									TASK::CLEAR_PED_TASKS((*uParam1)[iVar3]);
									TASK::CLEAR_SEQUENCE_TASK(&iVar2);
									TASK::OPEN_SEQUENCE_TASK(&iVar2);
									switch (iVar3)
									{
										case 0:
											if (!PED::IS_PED_IN_ANY_VEHICLE((*uParam1)[iVar3], false))
											{
												TASK::TASK_LOOK_AT_ENTITY(0, uParam0->f_4, -1, 0, 2);
												TASK::TASK_STAND_STILL(0, MISC::GET_RANDOM_INT_IN_RANGE(1750, 2250));
												TASK::TASK_ENTER_VEHICLE(0, uParam0->f_4, 40000, 0, 1f, 1, 0);
											}
											break;
										case 1:
											if (!PED::IS_PED_IN_ANY_VEHICLE((*uParam1)[iVar3], false))
											{
												TASK::TASK_LOOK_AT_ENTITY(0, uParam0->f_4, -1, 0, 2);
												TASK::TASK_ENTER_VEHICLE(0, uParam0->f_4, 40000, 1, 1f, 1, 0);
											}
											break;
										case 2:
											if (!PED::IS_PED_IN_ANY_VEHICLE((*uParam1)[iVar3], false))
											{
												TASK::TASK_LOOK_AT_ENTITY(0, uParam0->f_4, -1, 0, 2);
												TASK::TASK_STAND_STILL(0, MISC::GET_RANDOM_INT_IN_RANGE(750, 1250));
												TASK::TASK_ENTER_VEHICLE(0, uParam0->f_4, 40000, 2, 1f, 1, 0);
											}
											break;
									}
									TASK::CLOSE_SEQUENCE_TASK(iVar2);
									TASK::TASK_PERFORM_SEQUENCE((*uParam1)[iVar3], iVar2);
									iVar3++;
								}
								uParam0->f_48++;
							}
							else if (!__LIB_40__::func_147(uParam0))
							{
								TASK::CLEAR_PED_TASKS((*uParam1)[0]);
								TASK::CLEAR_PED_TASKS((*uParam1)[1]);
								TASK::CLEAR_PED_TASKS((*uParam1)[2]);
							}
							else if ((TASK::GET_SCRIPT_TASK_STATUS((*uParam1)[0], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS((*uParam1)[0], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 0) && __LIB_40__::func_196(uParam0, (*uParam1)[0]) > 8f)
							{
								TASK::CLEAR_SEQUENCE_TASK(&(uParam0->f_243));
								TASK::OPEN_SEQUENCE_TASK(&(uParam0->f_243));
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, uParam0->f_4, 0);
								TASK::TASK_PLAY_ANIM(0, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0f, false, false, false);
								TASK::CLOSE_SEQUENCE_TASK(uParam0->f_243);
								TASK::TASK_PERFORM_SEQUENCE((*uParam1)[0], uParam0->f_243);
							}
							break;
						case 2:
							if (bLocal_86)
							{
								if (__LIB_0__::func_76(uParam0->f_4, (*uParam1)[0], 1) < 3f)
								{
									if (!__LIB_40__::func_133(uParam0, 1))
									{
										TASK::CLEAR_PED_TASKS_IMMEDIATELY((*uParam1)[0]);
										TASK::CLEAR_PED_TASKS_IMMEDIATELY((*uParam1)[1]);
										TASK::CLEAR_PED_TASKS_IMMEDIATELY((*uParam1)[2]);
										__LIB_40__::func_297(uParam0, "You had a dead body in your back seat.", 5);
									}
								}
							}
							func_208(uParam0, uParam1);
							if (__LIB_40__::func_196(uParam0, (*uParam1)[0]) < fVar4 || __LIB_40__::func_202())
							{
								if (PED::IS_PED_IN_VEHICLE(uParam0->f_2, uParam0->f_4, false))
								{
									if ((PED::IS_PED_IN_ANY_VEHICLE((*uParam1)[0], false) && PED::IS_PED_IN_ANY_VEHICLE((*uParam1)[1], false)) && PED::IS_PED_IN_ANY_VEHICLE((*uParam1)[2], false))
									{
										__LIB_40__::func_122(uParam0);
										PED::SET_PED_CONFIG_FLAG((*uParam1)[0], 26, true);
										PED::SET_PED_CONFIG_FLAG((*uParam1)[1], 26, true);
										PED::SET_PED_CONFIG_FLAG((*uParam1)[2], 26, true);
										PED::SET_PED_CONFIG_FLAG((*uParam1)[0], 104, true);
										__LIB_40__::func_118(uParam0, 5, 0);
										HUD::CLEAR_GPS_FLAGS();
										return 1;
									}
								}
							}
							else
							{
								if ((MISC::GET_GAME_TIMER() % 1000) < 50)
								{
								}
								GRAPHICS::DRAW_DEBUG_SPHERE(ENTITY::GET_ENTITY_COORDS((*uParam1)[0], true), fVar4, 0, 0, 255, 150);
							}
							if (func_207(uParam1))
							{
								TASK::CLEAR_PED_TASKS((*uParam1)[0]);
								TASK::CLEAR_PED_TASKS((*uParam1)[1]);
								TASK::CLEAR_PED_TASKS((*uParam1)[2]);
								__LIB_40__::func_297(uParam0, "Left Passenger", 8);
							}
							if ((func_206(uParam0, uParam1) || func_205(uParam0, uParam1)) || func_204(uParam0, uParam1))
							{
								if (!PED::IS_PED_IN_ANY_VEHICLE((*uParam1)[2], false))
								{
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD((*uParam1)[2], __LIB_1__::func_657(uParam0->f_11, 0f, 0.5f, 0.5f, 0f), 1f, 20000, 0.25f, 0, 40000f);
									iLocal_238 = 2;
								}
								if (!PED::IS_PED_IN_ANY_VEHICLE((*uParam1)[1], false))
								{
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD((*uParam1)[1], __LIB_1__::func_657(uParam0->f_11, 0f, 0.5f, 0.5f, 0f), 1f, 20000, 0.25f, 0, 40000f);
									iLocal_238 = 1;
								}
								if (!PED::IS_PED_IN_ANY_VEHICLE((*uParam1)[0], false))
								{
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD((*uParam1)[0], uParam0->f_11, 1f, 20000, 0.25f, 0, 40000f);
									iLocal_238 = 0;
								}
								HUD::REMOVE_BLIP(&(uParam0->f_8));
								uParam0->f_8 = __LIB_0__::func_639((*uParam1)[iLocal_238], 0, 0);
								__LIB_1__::func_31(&iLocal_239);
								uParam0->f_48 = 0;
								iLocal_79 = 0;
							}
							break;
						}
				}
			}
			else
			{
				__LIB_40__::func_297(uParam0, "Passenger injured.", 9);
			}
		}
	}
	else
	{
		__LIB_40__::func_297(uParam0, "Taxi not drivable.", 9);
	}
	return 0;
}

int func_204(var uParam0, var uParam1)//Position - 0x6C8D
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!PED::IS_PED_INJURED((*uParam1)[iVar0]) && !PED::IS_PED_IN_ANY_VEHICLE((*uParam1)[iVar0], false))
		{
			if (__LIB_40__::func_196(uParam0, (*uParam1)[iVar0]) > 28f)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_205(var uParam0, var uParam1)//Position - 0x6CE0
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!PED::IS_PED_INJURED((*uParam1)[iVar0]) && !PED::IS_PED_IN_ANY_VEHICLE((*uParam1)[iVar0], false))
		{
			if (__LIB_0__::func_724(uParam0->f_4, uParam0->f_11, 1) > 28f)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_206(var uParam0, var uParam1)//Position - 0x6D36
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!PED::IS_PED_INJURED((*uParam1)[iVar0]) && !PED::IS_PED_IN_ANY_VEHICLE((*uParam1)[iVar0], false))
		{
			if (__LIB_0__::func_724((*uParam1)[iVar0], uParam0->f_11, 1) > 28f)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_207(var uParam0)//Position - 0x6D8E
{
	if ((!PED::IS_PED_INJURED((*uParam0)[0]) && !PED::IS_PED_INJURED((*uParam0)[1])) && !PED::IS_PED_INJURED((*uParam0)[2]))
	{
		if ((PED::IS_PED_IN_ANY_VEHICLE((*uParam0)[0], false) || PED::IS_PED_IN_ANY_VEHICLE((*uParam0)[1], false)) || PED::IS_PED_IN_ANY_VEHICLE((*uParam0)[2], false))
		{
			if ((!PED::IS_PED_IN_ANY_VEHICLE((*uParam0)[0], false) || !PED::IS_PED_IN_ANY_VEHICLE((*uParam0)[1], false)) || !PED::IS_PED_IN_ANY_VEHICLE((*uParam0)[2], false))
			{
				if (!__LIB_0__::func_702(&iLocal_242))
				{
					__LIB_3__::func_128(&iLocal_242);
				}
				else if (__LIB_37__::func_602(&iLocal_242) > 15f)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_208(var uParam0, var uParam1)//Position - 0x6E48
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (!PED::IS_PED_INJURED((*uParam1)[iLocal_238]))
		{
			if (__LIB_14__::func_556((*uParam1)[iLocal_238], 1) > 30f)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS((*uParam1)[iLocal_238], joaat("SCRIPT_TASK_ENTER_VEHICLE")) == 1 || TASK::GET_SCRIPT_TASK_STATUS((*uParam1)[iLocal_238], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 1)
				{
					__LIB_40__::func_297(uParam0, "Player abandoned passenger on pickup.", 8);
				}
			}
		}
	}
}

int func_211(var uParam0, var uParam1, int iParam2, float fParam3, float fParam4, float fParam5)//Position - 0x6FE8
{
	if (!ENTITY::IS_ENTITY_DEAD((*uParam1)[0], false))
	{
		if (!ENTITY::IS_ENTITY_OCCLUDED((*uParam1)[iLocal_238]) && __LIB_14__::func_556((*uParam1)[iLocal_238], 1) < fParam3)
		{
			if (!__LIB_40__::func_117(uParam0, 5))
			{
				__LIB_40__::func_183(uParam0, 5, 0, 0);
			}
		}
		else if (__LIB_40__::func_117(uParam0, 5))
		{
			__LIB_40__::func_118(uParam0, 5, 0);
		}
		if (((__LIB_40__::func_293(uParam0, 5) > IntToFloat(iParam2) && ENTITY::GET_ENTITY_SPEED(uParam0->f_4) < fParam5) && !ENTITY::IS_ENTITY_OCCLUDED((*uParam1)[iLocal_238])) || __LIB_14__::func_556((*uParam1)[iLocal_238], 1) <= fParam4)
		{
			return 1;
		}
	}
	return 0;
}

int func_212(var uParam0, var uParam1, float fParam2)//Position - 0x7093
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	int iVar3;
	int iVar4;
	iVar4 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(uParam0->f_4, "windscreen");
	Var2 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(uParam0->f_4, iVar4) };
	Var2 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(uParam0->f_4, Var2) };
	Var2.f_1 = (Var2.f_1 + 1f);
	Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, Var2) };
	Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_3, 0f, 0.25f, 0.9f) };
	GRAPHICS::DRAW_DEBUG_LINE(Var0, Var1, 0, 0, 255, 255);
	switch (iLocal_79)
	{
		case 0:
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS((*uParam1)[0], true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS((*uParam1)[1], true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS((*uParam1)[2], true);
			iLocal_79 = 1;
			break;
		case 1:
			if ((__LIB_0__::func_76(uParam0->f_4, (*uParam1)[iLocal_238], 0) <= fParam2 && !uParam0->f_142) && MISC::ABSF((Var0.f_2 - Var1.f_2)) < 5f)
			{
				iVar3 = __LIB_40__::func_132(&(uParam0->f_409), Var0, Var1, 0);
				if (iVar3 == 0)
				{
					iLocal_79 = 2;
				}
			}
			break;
		case 2:
			HUD::CLEAR_PRINTS();
			__LIB_40__::func_294(uParam0, 4, 1, 0, 1);
			TASK::CLEAR_PED_TASKS((*uParam1)[iLocal_238]);
			TASK::TASK_LOOK_AT_ENTITY(uParam0->f_3, uParam0->f_4, -1, 2048, 4);
			TASK::CLEAR_SEQUENCE_TASK(&(uParam0->f_243));
			TASK::OPEN_SEQUENCE_TASK(&(uParam0->f_243));
			TASK::TASK_PLAY_ANIM(0, "oddjobs@towingcome_here", "come_here_idle_a", 8f, -8f, -1, 49, 0f, false, false, false);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, uParam0->f_4, 0);
			TASK::CLOSE_SEQUENCE_TASK(uParam0->f_243);
			TASK::TASK_PERFORM_SEQUENCE((*uParam1)[iLocal_238], uParam0->f_243);
			return 1;
			break;
		case 3:
			iLocal_79 = 0;
			return 1;
			break;
	}
	return 0;
}

void func_216(var uParam0, var uParam1, bool bParam2)//Position - 0x7309
{
	int iVar0;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (bParam2)
		{
			if (HUD::DOES_BLIP_EXIST(uParam0->f_8))
			{
				HUD::SET_BLIP_ALPHA(uParam0->f_8, 0);
				HUD::SET_BLIP_ROUTE(uParam0->f_8, false);
				__LIB_40__::func_309(uParam0, &(uParam0->f_98), 4, 3);
			}
			else
			{
				iVar0 = 0;
				while (iVar0 < 3)
				{
					if (HUD::DOES_BLIP_EXIST(uParam1->f_36[iVar0]))
					{
						HUD::SET_BLIP_ALPHA(uParam1->f_36[iVar0], 0);
					}
					iVar0++;
				}
				__LIB_40__::func_294(uParam0, 2, 1, 1, 0);
			}
			__LIB_40__::func_308(uParam0, 0, 0);
		}
		else if (HUD::DOES_BLIP_EXIST(uParam0->f_10))
		{
			HUD::REMOVE_BLIP(&(uParam0->f_10));
			if (HUD::DOES_BLIP_EXIST(uParam0->f_8))
			{
				HUD::SET_BLIP_ALPHA(uParam0->f_8, 255);
				HUD::SET_BLIP_ROUTE(uParam0->f_8, true);
				__LIB_40__::func_309(uParam0, &(uParam0->f_98), 8, 1);
			}
			else
			{
				iVar0 = 0;
				while (iVar0 < 3)
				{
					if (HUD::DOES_BLIP_EXIST(uParam1->f_36[iVar0]))
					{
						HUD::SET_BLIP_ALPHA(uParam1->f_36[iVar0], 255);
					}
					iVar0++;
				}
			}
		}
	}
}

void func_222()//Position - 0x761C
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_260.f_4, false))
	{
		if (__LIB_40__::func_147(&Local_260))
		{
			if (!iLocal_346)
			{
				iVar0 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_260.f_4, "window_lf");
				iVar1 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_260.f_4, "window_lr");
				iVar2 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_260.f_4, "window_rf");
				iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_260.f_4, "window_rr");
				Local_230 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(Local_260.f_4, iVar0) };
				Local_230 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Local_260.f_4, Local_230) };
				Local_234 = { Local_230 };
				Local_230.f_2 = (Local_230.f_2 + 0.15f);
				Local_230.f_1 = (Local_230.f_1 - 0.15f);
				Local_231 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(Local_260.f_4, iVar1) };
				Local_231 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Local_260.f_4, Local_231) };
				Local_235 = { Local_231 };
				Local_231.f_2 = (Local_231.f_2 + 0.15f);
				Local_232 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(Local_260.f_4, iVar2) };
				Local_232 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Local_260.f_4, Local_232) };
				Local_236 = { Local_232 };
				Local_232.f_2 = (Local_232.f_2 + 0.15f);
				Local_232.f_1 = (Local_232.f_1 - 0.15f);
				Local_233 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(Local_260.f_4, iVar3) };
				Local_233 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Local_260.f_4, Local_233) };
				Local_237 = { Local_233 };
				Local_233.f_2 = (Local_233.f_2 + 0.15f);
				iLocal_346 = 1;
			}
		}
		else if (iLocal_346)
		{
			iLocal_346 = 0;
		}
	}
}

void func_238()//Position - 0x81D4
{
	Local_165.f_0 = 0;
	__LIB_40__::func_142(34183/*func_257*/, 34158/*func_256*/, 1);
	__LIB_40__::func_142(33919/*func_253*/, 33896/*func_252*/, 1);
	__LIB_40__::func_142(33834/*func_251*/, 33809/*func_250*/, 1);
	__LIB_40__::func_142(33737/*func_249*/, 33713/*func_248*/, 1);
	__LIB_40__::func_142(33603/*func_247*/, 33582/*func_246*/, 1);
	__LIB_40__::func_142(33529/*func_244*/, 33504/*func_243*/, 1);
	__LIB_40__::func_142(33362/*func_240*/, 33339/*func_239*/, 1);
}

int func_259()//Position - 0x879F
{
	if (!STREAMING::HAS_MODEL_LOADED(Local_262.f_41[0]))
	{
		__LIB_40__::func_102("TAXI_ASSETS_STREAMED - Loading A_M_Y_BUSINESS_01", &iLocal_339, 1000);
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(Local_262.f_41[1]))
	{
		__LIB_40__::func_102("TAXI_ASSETS_STREAMED - Loading A_M_Y_BUSINESS_02", &iLocal_339, 1000);
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(Local_262.f_41[2]))
	{
		__LIB_40__::func_102("TAXI_ASSETS_STREAMED - Loading A_M_Y_GOLFER_01", &iLocal_339, 1000);
		return 0;
	}
	if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_399))
	{
		return 0;
	}
	if (!__LIB_40__::func_145(&iLocal_339, 1))
	{
		__LIB_40__::func_102("TAXI_ASSETS_STREAMED - Waiting for assets...", &iLocal_339, 1000);
		return 0;
	}
	return 1;
}

void func_263(var uParam0)//Position - 0x8B2F
{
	if (!PED::IS_PED_INJURED(uParam0->f_3))
	{
		uParam0->f_8 = __LIB_0__::func_639(uParam0->f_3, 0, 0);
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_8, "TAXI_BLIP_PASS" /* GXT: Passenger */);
		HUD::SET_GPS_FLAGS(1, 0f);
		HUD::SET_BLIP_ROUTE(uParam0->f_8, true);
	}
}

int func_264(var uParam0, struct<3> Param1, struct<3> Param2, var uParam3)//Position - 0x8B6C
{
	uParam0->f_11 = { Param1 };
	uParam0->f_14 = { Param2 };
	__LIB_40__::func_173(uParam0->f_14, 0);
	MISC::CLEAR_AREA_OF_VEHICLES(uParam0->f_14, 25f, false, false, false, false, false, false, 0);
	if (ENTITY::DOES_ENTITY_EXIST(Global_112096.f_225[0]))
	{
		(*uParam3)[0] = Global_112096.f_225[0];
		(*uParam3)[1] = Global_112096.f_225[1];
		(*uParam3)[2] = Global_112096.f_225[2];
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY((*uParam3)[0], true, true);
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY((*uParam3)[1], true, true);
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY((*uParam3)[2], true, true);
	}
	else
	{
		(*uParam3)[0] = PED::CREATE_PED(26, uParam3->f_41[0], uParam0->f_11, -178.76f, true, true);
		(*uParam3)[1] = PED::CREATE_PED(26, uParam3->f_41[1], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS((*uParam3)[0], 0.5f, 0.5f, 0f), 21.77f, true, true);
		(*uParam3)[2] = PED::CREATE_PED(26, uParam3->f_41[1], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS((*uParam3)[0], 0.5f, -0.5f, 0f), -147.25f, true, true);
	}
	func_266(uParam0, uParam3[0]);
	uParam3->f_51[0] = 0;
	uParam3->f_51[1] = 0;
	uParam3->f_51[2] = 0;
	uParam3->f_12[0] = 0;
	uParam3->f_12[1] = 1;
	uParam3->f_12[2] = 2;
	if ((!PED::IS_PED_INJURED((*uParam3)[0]) && !PED::IS_PED_INJURED((*uParam3)[1])) && !PED::IS_PED_INJURED((*uParam3)[2]))
	{
		TASK::TASK_TURN_PED_TO_FACE_ENTITY((*uParam3)[1], (*uParam3)[0], 0);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY((*uParam3)[2], (*uParam3)[0], 0);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY((*uParam3)[0], (*uParam3)[1], 0);
	}
	if (!PED::IS_PED_INJURED((*uParam3)[2]))
	{
		__LIB_0__::func_222(&(uParam0->f_244), 5, (*uParam3)[2], "TaxiPaulie", 0, 1);
		AUDIO::SET_AMBIENT_VOICE_NAME((*uParam3)[2], "TaxiPaulie");
		PED::SET_PED_CONFIG_FLAG((*uParam3)[2], 317, true);
	}
	if (!PED::IS_PED_INJURED((*uParam3)[1]))
	{
		__LIB_0__::func_222(&(uParam0->f_244), 4, (*uParam3)[1], "TaxiClyde", 0, 1);
		AUDIO::SET_AMBIENT_VOICE_NAME((*uParam3)[1], "TaxiClyde");
		PED::SET_PED_CONFIG_FLAG((*uParam3)[1], 317, true);
	}
	if (!PED::IS_PED_INJURED((*uParam3)[0]))
	{
		__LIB_0__::func_222(&(uParam0->f_244), 3, (*uParam3)[0], "TaxiDarren", 0, 1);
		AUDIO::SET_AMBIENT_VOICE_NAME((*uParam3)[0], "TaxiDarren");
		PED::SET_PED_CONFIG_FLAG((*uParam3)[0], 317, true);
		PED::ADD_RELATIONSHIP_GROUP("TAXI_Passenger", &(uParam0->f_413));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, uParam0->f_413, joaat("PLAYER"));
		PED::SET_PED_RELATIONSHIP_GROUP_HASH((*uParam3)[0], uParam0->f_413);
		func_265((*uParam3)[1], uParam0->f_413);
		func_265((*uParam3)[2], uParam0->f_413);
		return 1;
	}
	return 0;
}

void func_265(int iParam0, int iParam1)//Position - 0x8E10
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, iParam1);
	}
}

void func_266(var uParam0, var uParam1)//Position - 0x8E2A
{
	if (!PED::IS_PED_INJURED(*uParam1))
	{
		uParam0->f_3 = *uParam1;
	}
}

void func_268()//Position - 0x8EB9
{
	STREAMING::REQUEST_PTFX_ASSET();
	STREAMING::REQUEST_ANIM_DICT("oddjobs@taxi@gyn@cc@hotbox");
}

void func_269()//Position - 0x8ECD
{
	STREAMING::REQUEST_MODEL(Local_262.f_45[0]);
	STREAMING::REQUEST_MODEL(Local_262.f_45[1]);
	STREAMING::REQUEST_MODEL(Local_262.f_45[2]);
	STREAMING::REQUEST_MODEL(Local_262.f_45[3]);
	STREAMING::REQUEST_MODEL(Local_262.f_45[4]);
	STREAMING::REQUEST_MODEL(joaat("stretch"));
	STREAMING::REQUEST_MODEL(joaat("superd"));
	STREAMING::REQUEST_ANIM_DICT("oddjobs@taxi@gyn@cc@intro");
	STREAMING::REQUEST_ANIM_DICT("amb@world_human_stand_impatient@female@no_sign@exit");
	STREAMING::REQUEST_ANIM_DICT("amb@world_human_stand_impatient@female@no_sign@base");
	iLocal_399 = __LIB_2__::func_214();
}

void func_271()//Position - 0x8F52
{
	STREAMING::REQUEST_MODEL(Local_262.f_41[0]);
	STREAMING::REQUEST_MODEL(Local_262.f_41[1]);
	STREAMING::REQUEST_MODEL(Local_262.f_41[2]);
	__LIB_40__::func_184(1);
}

void func_275(var uParam0, var uParam1, float fParam2)//Position - 0x906B
{
	int iVar0;
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_2, false))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_4[iVar0], false))
			{
				if (__LIB_0__::func_76(uParam0->f_2, uParam1->f_4[iVar0], 1) > fParam2)
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam1->f_4[iVar0]));
				}
			}
			iVar0++;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_10, false))
	{
		if (__LIB_0__::func_76(uParam0->f_2, uParam1->f_10, 1) > fParam2)
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(uParam1->f_10));
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(uParam1->f_11));
		}
	}
}

void func_324()//Position - 0xB74A
{
	__LIB_40__::func_300(&Local_260);
	if (__LIB_40__::func_289(&Local_260, &Local_348))
	{
		switch (Local_348.f_27)
		{
			case 0:
				if (Local_260.f_410 == 9)
				{
					if (!__LIB_40__::func_299(&Local_260))
					{
						if (__LIB_40__::func_163("TAXI_OBJ_CC1") || HUD::DOES_BLIP_EXIST(Local_262.f_36[2]))
						{
							Local_348.f_27++;
						}
						else if (__LIB_40__::func_128(&Local_260) != 10)
						{
							__LIB_40__::func_294(&Local_260, 10, 1, 0, 1);
						}
					}
				}
				break;
			case 1:
				if ((__LIB_40__::func_128(&Local_260) > 10 && __LIB_40__::func_128(&Local_260) != 15) && !__LIB_40__::func_299(&Local_260))
				{
					__LIB_40__::func_294(&Local_260, 15, 1, 0, 0);
					if (bLocal_347)
					{
					}
					__LIB_40__::func_179(&Local_260, 7);
				}
				break;
			case 2:
				if (!Local_262.f_66)
				{
					Local_262.f_66 = 1;
					bLocal_248 = true;
				}
				if (__LIB_2__::func_485(Local_260.f_4, Local_262.f_16[2 /*3*/], 1) < 530f)
				{
					Local_348.f_27++;
				}
				if (__LIB_40__::func_293(&Local_260, 11) > 17f || __LIB_2__::func_485(Local_260.f_4, Local_262.f_16[2 /*3*/], 1) < 700f)
				{
					__LIB_40__::func_294(&Local_260, 95, 1, 0, 0);
					if (bLocal_347)
					{
					}
				}
				else if ((MISC::GET_GAME_TIMER() % 1000) < 50)
				{
				}
				break;
			case 3:
				if ((__LIB_40__::func_128(&Local_260) > 10 && __LIB_40__::func_128(&Local_260) != 16) && !__LIB_40__::func_299(&Local_260))
				{
					__LIB_40__::func_294(&Local_260, 16, 1, 0, 0);
					if (bLocal_347)
					{
					}
				}
				break;
			case 4:
				if (__LIB_2__::func_485(Local_260.f_4, Local_262.f_16[2 /*3*/], 1) < 530f)
				{
					Local_348.f_27++;
				}
				if (__LIB_40__::func_293(&Local_260, 11) > 8f || __LIB_2__::func_485(Local_260.f_4, Local_262.f_16[2 /*3*/], 1) < 700f)
				{
					__LIB_40__::func_294(&Local_260, 94, 1, 0, 0);
					if (bLocal_347)
					{
					}
				}
				else if ((MISC::GET_GAME_TIMER() % 1000) < 50)
				{
				}
				break;
			case 5:
				if (__LIB_40__::func_293(&Local_260, 11) > 20f || __LIB_2__::func_485(Local_260.f_4, Local_262.f_16[2 /*3*/], 1) < 530f)
				{
					if (!iLocal_251)
					{
						iLocal_251 = 1;
					}
					if (!bLocal_249)
					{
						__LIB_40__::func_294(&Local_260, 96, 1, 0, 0);
						bLocal_249 = true;
						if (bLocal_347)
						{
						}
					}
				}
				else if ((MISC::GET_GAME_TIMER() % 1000) < 50)
				{
				}
				break;
			case 6:
				if (__LIB_40__::func_293(&Local_260, 18) > MISC::GET_RANDOM_FLOAT_IN_RANGE(8f, 16f))
				{
				}
				break;
			}
	}
	func_325(&Local_260, &uLocal_351, &Local_348, bLocal_347);
}

int func_325(var uParam0, var uParam1, var uParam2, bool bParam3)//Position - 0xBA2A
{
	__LIB_42__::func_843(uParam0, uParam1);
	if (((*uParam2 == -1 && uParam0->f_410 < 29) && !uParam0->f_109) && !__LIB_40__::func_117(uParam0, 2))
	{
		if (__LIB_40__::func_156(uParam1))
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
				if (!__LIB_40__::func_162(uParam0))
				{
					uParam2->f_7 = { __LIB_40__::func_186(uParam1) };
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
					__LIB_40__::func_213(uParam1);
					__LIB_40__::func_183(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			case 3:
				if (__LIB_21__::func_717(uParam0))
				{
					if (__LIB_0__::func_75())
					{
						__LIB_40__::func_183(uParam0, 17, 0f, 1);
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
					__LIB_40__::func_213(uParam1);
					__LIB_40__::func_183(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			case 4:
				if (((!__LIB_40__::func_117(uParam0, 14) && !__LIB_0__::func_75()) && !__LIB_21__::func_717(uParam0)) && __LIB_40__::func_293(uParam0, 18) > 1f)
				{
					__LIB_40__::func_183(uParam0, 18, 0, 0);
					*uParam2 = 6;
					if (bParam3)
					{
					}
				}
				break;
			case 6:
				if (!__LIB_0__::func_75())
				{
					if (__LIB_40__::func_293(uParam0, 18) > 1f)
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
					__LIB_40__::func_213(uParam1);
					__LIB_40__::func_183(uParam0, 18, 0, 0);
					*uParam2 = -1;
				}
				break;
			}
	}
	return 0;
}

void func_354(var uParam0)//Position - 0x10489
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var3;
	if (ENTITY::DOES_ENTITY_EXIST(Global_112096.f_225[3]))
	{
		uParam0->f_4[0] = Global_112096.f_225[3];
		uParam0->f_4[1] = Global_112096.f_225[4];
		uParam0->f_4[2] = Global_112096.f_225[5];
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_4[0], true, true);
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_4[1], true, true);
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_4[2], true, true);
	}
	else
	{
		uParam0->f_4[0] = PED::CREATE_PED(26, uParam0->f_45[0], -1283.4502f, 299.3781f, 63.9305f, 151.9095f, true, true);
		uParam0->f_4[1] = PED::CREATE_PED(26, uParam0->f_45[1], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4[0], 1f, 1f, 0f), 90.5877f, true, true);
		uParam0->f_4[2] = PED::CREATE_PED(26, uParam0->f_45[2], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4[0], -1f, 1f, 0f), 163.5411f, true, true);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_112096.f_225[6]))
	{
		uParam0->f_4[3] = Global_112096.f_225[6];
		uParam0->f_4[4] = Global_112096.f_225[7];
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_4[3], true, true);
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_4[4], true, true);
	}
	else
	{
		uParam0->f_4[3] = PED::CREATE_PED(26, uParam0->f_45[3], -1282.8298f, 306.2308f, 63.9354f, 163.5411f, true, true);
		uParam0->f_4[4] = PED::CREATE_PED(26, uParam0->f_45[4], -1280.987f, 305.4652f, 63.9499f, 90.5877f, true, true);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_112096.f_222[0]))
	{
		uParam0->f_10 = Global_112096.f_222[0];
		uParam0->f_11 = Global_112096.f_222[1];
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_10, true, true);
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_11, true, true);
	}
	else
	{
		uParam0->f_10 = VEHICLE::CREATE_VEHICLE(joaat("stretch"), -1290.7235f, 284.893f, 63.7823f, 55.6864f, true, true, false);
		uParam0->f_11 = VEHICLE::CREATE_VEHICLE(joaat("superd"), -1288.9644f, 296.9287f, 63.8537f, 67.6169f, true, true, false);
	}
	Var2 = { -1276.693f, 312.9434f, 64.491f };
	Var3 = { -1281.3488f, 315.1646f, 64.4805f };
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_4[iVar1], false))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_4[iVar1]);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			switch (iVar1)
			{
				case 0:
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, uParam0->f_4[1], 0);
					TASK::TASK_PLAY_ANIM(0, "oddjobs@taxi@gyn@cc@intro", "f_impatient_a", 8f, -8f, -1, 0, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "amb@world_human_stand_impatient@female@no_sign@base", "base", 4f, -4f, 4000, 0, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "amb@world_human_stand_impatient@female@no_sign@exit", "exit", 4f, -4f, -1, 0, 0f, false, false, false);
					TASK::TASK_GO_STRAIGHT_TO_COORD(0, Var2, 1f, 20000, 40000f, 0.5f);
					TASK::TASK_GO_STRAIGHT_TO_COORD(0, Var3, 1f, 20000, 40000f, 0.5f);
					break;
				case 1:
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, uParam0->f_4[0], 0);
					TASK::TASK_PLAY_ANIM(0, "oddjobs@taxi@gyn@cc@intro", "f_impatient_b", 8f, -8f, -1, 0, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "amb@world_human_stand_impatient@female@no_sign@base", "base", 4f, -4f, 6000, 0, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "amb@world_human_stand_impatient@female@no_sign@exit", "exit", 4f, -4f, -1, 0, 0f, false, false, false);
					TASK::TASK_GO_STRAIGHT_TO_COORD(0, Var2, 1f, 20000, 40000f, 0.5f);
					TASK::TASK_GO_STRAIGHT_TO_COORD(0, Var3, 1f, 20000, 40000f, 0.5f);
					break;
				case 2:
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, uParam0->f_4[0], 0);
					TASK::TASK_PLAY_ANIM(0, "oddjobs@taxi@gyn@cc@intro", "f_impatient_c", 8f, -8f, -1, 0, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "amb@world_human_stand_impatient@female@no_sign@base", "base", 4f, -4f, 8500, 0, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "amb@world_human_stand_impatient@female@no_sign@exit", "exit", 4f, -4f, -1, 0, 0f, false, false, false);
					TASK::TASK_GO_STRAIGHT_TO_COORD(0, Var2, 1f, 20000, 40000f, 0.5f);
					TASK::TASK_GO_STRAIGHT_TO_COORD(0, Var3, 1f, 20000, 40000f, 0.5f);
					break;
				case 3:
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, uParam0->f_4[4], 0);
					TASK::TASK_LOOK_AT_ENTITY(0, uParam0->f_4[4], 3, 2, 2);
					TASK::TASK_CHAT_TO_PED(0, uParam0->f_4[4], 16, 0f, 0f, 0f, 0f, 0f);
					break;
				case 4:
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, uParam0->f_4[3], 0);
					TASK::TASK_LOOK_AT_ENTITY(0, uParam0->f_4[3], 3, 2, 2);
					TASK::TASK_CHAT_TO_PED(0, uParam0->f_4[3], 16, 0f, 0f, 0f, 0f, 0f);
					break;
			}
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(uParam0->f_4[iVar1], iVar0);
		}
		iVar1++;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (!PED::IS_PED_INJURED((*uParam0)[iVar1]) && (TASK::GET_SCRIPT_TASK_STATUS((*uParam0)[iVar1], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1 || TASK::GET_SCRIPT_TASK_STATUS((*uParam0)[iVar1], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 7))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS((*uParam0)[iVar1], true);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY((*uParam0)[iVar1]);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			func_355(uParam0, iVar1, MISC::GET_RANDOM_INT_IN_RANGE(1000, 2000));
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE((*uParam0)[iVar1], iVar0);
		}
		iVar1++;
	}
}

void func_355(var uParam0, int iParam1, int iParam2)//Position - 0x109E1
{
	iParam2 = iParam2;
	switch (iParam1)
	{
		case 0:
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, (*uParam0)[1], 0);
			TASK::TASK_LOOK_AT_ENTITY(0, (*uParam0)[1], 3, 2, 2);
			TASK::TASK_PLAY_ANIM(0, "oddjobs@taxi@gyn@cc@intro", "m_impatient_a", 8f, -8f, -1, 0, 0f, false, false, false);
			break;
		case 1:
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, (*uParam0)[0], 0);
			TASK::TASK_LOOK_AT_ENTITY(0, (*uParam0)[0], 3, 2, 2);
			TASK::TASK_PLAY_ANIM(0, "oddjobs@taxi@gyn@cc@intro", "m_impatient_b", 8f, -8f, -1, 0, 0f, false, false, false);
			break;
		case 2:
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, (*uParam0)[0], 0);
			TASK::TASK_LOOK_AT_ENTITY(0, (*uParam0)[0], 3, 2, 2);
			TASK::TASK_PLAY_ANIM(0, "oddjobs@taxi@gyn@cc@intro", "m_impatient_c", 8f, -8f, -1, 0, 0f, false, false, false);
			break;
	}
}

int func_356()//Position - 0x10AAE
{
	if (!STREAMING::HAS_MODEL_LOADED(Local_262.f_45[0]))
	{
		__LIB_40__::func_102("TAXI_ASSETS_STREAMED - Loading TAXI_AMB_P0_AMANDA", &iLocal_339, 1000);
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(Local_262.f_45[1]))
	{
		__LIB_40__::func_102("TAXI_ASSETS_STREAMED - Loading TAXI_AMB_P1_BRENDA", &iLocal_339, 1000);
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(Local_262.f_45[2]))
	{
		__LIB_40__::func_102("TAXI_ASSETS_STREAMED - Loading TAXI_AMB_P2_CANDY", &iLocal_339, 1000);
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(Local_262.f_45[3]))
	{
		__LIB_40__::func_102("TAXI_ASSETS_STREAMED - Loading TAXI_AMB_P4_GUEST1", &iLocal_339, 1000);
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(Local_262.f_45[4]))
	{
		__LIB_40__::func_102("TAXI_ASSETS_STREAMED - Loading TAXI_AMB_P6_GUEST3", &iLocal_339, 1000);
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("stretch")))
	{
		__LIB_40__::func_102("TAXI_ASSETS_STREAMED - Loading STRETCH", &iLocal_339, 1000);
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("superd")))
	{
		__LIB_40__::func_102("TAXI_ASSETS_STREAMED - Loading SUPERD", &iLocal_339, 1000);
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("oddjobs@taxi@gyn@cc@intro"))
	{
		__LIB_40__::func_102("TAXI_ASSETS_STREAMED - Anim Dicts oddjobs@taxi@gyn@cc@intro Loading...", &iLocal_339, 1000);
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("amb@world_human_stand_impatient@female@no_sign@exit"))
	{
		__LIB_40__::func_102("TAXI_ASSETS_STREAMED - Anim Dicts amb@world_human_stand_impatient@female@no_sign@exit Loading...", &iLocal_339, 1000);
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("amb@world_human_stand_impatient@female@no_sign@base"))
	{
		__LIB_40__::func_102("TAXI_ASSETS_STREAMED - Anim Dicts amb@world_human_stand_impatient@female@no_sign@exit Loading...", &iLocal_339, 1000);
		return 0;
	}
	return 1;
}

int func_358(var uParam0, var uParam1, var uParam2)//Position - 0x10C05
{
	var uVar0;
	int iVar1;
	if (!uParam0->f_109)
	{
		if ((__LIB_40__::func_226((*uParam1)[0], uParam0->f_4, uParam2, &uVar0, 0, 1, 0, 1, 1) || __LIB_40__::func_226((*uParam1)[1], uParam0->f_4, uParam2, &uVar0, 0, 1, 0, 1, 1)) || __LIB_40__::func_226((*uParam1)[2], uParam0->f_4, uParam2, &uVar0, 0, 1, 0, 1, 1))
		{
			__LIB_40__::func_333(uParam0, &uVar0, uParam2);
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
			{
				if (__LIB_40__::func_226(uParam1->f_4[iVar1], uParam0->f_4, uParam2, &uVar0, 0, 1, 0, 1, 1))
				{
					__LIB_40__::func_297(uParam0, "Taxi attacked the entourage", 9);
					return 1;
				}
			}
			iVar1++;
		}
		__LIB_40__::func_347(uParam0);
	}
	return 0;
}

void func_396()//Position - 0x11F99
{
	__LIB_40__::func_338(&Local_260);
	func_414();
}

void func_401()//Position - 0x1212C
{
	__LIB_40__::func_341(&Local_260, 7);
	Local_260.f_410 = 0;
	Local_260.f_23 = { -1248.422f, 252.6221f, 63.0799f };
	Local_260.f_33 = 34.4f;
	Local_260.f_26 = { -231.2259f, -889.5931f, 28.8903f };
	Local_260.f_34 = 251.9658f;
	Local_262.f_41[0] = joaat("A_M_Y_Business_02");
	Local_262.f_41[1] = joaat("A_M_Y_Business_02");
	Local_262.f_41[2] = joaat("A_M_Y_Business_02");
	Local_262.f_45[0] = joaat("A_F_Y_Beach_01");
	Local_262.f_45[1] = joaat("A_F_Y_Beach_01");
	Local_262.f_45[2] = joaat("A_F_Y_Beach_01");
	Local_262.f_45[3] = joaat("A_F_Y_Beach_01");
	Local_262.f_45[4] = joaat("A_M_Y_Business_01");
	__LIB_40__::func_167(&Local_260, 3, 6);
}

void func_414()//Position - 0x12752
{
	func_417(&Local_262);
	func_192();
	func_416();
	func_415();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_415()//Position - 0x12771
{
	STREAMING::REMOVE_PTFX_ASSET();
	STREAMING::REMOVE_ANIM_DICT("oddjobs@taxi@gyn@cc@hotbox");
}

void func_416()//Position - 0x12785
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_262.f_41[0]);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_262.f_41[1]);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_262.f_41[2]);
}

void func_417(var uParam0)//Position - 0x127B1
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam0->f_73[iVar0]))
		{
			GRAPHICS::REMOVE_PARTICLE_FX(uParam0->f_73[iVar0], false);
		}
		iVar0++;
	}
}

