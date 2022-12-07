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
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50[5] = { 0, 0, 0, 0, 0 };
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	float fLocal_61 = 0f;
	float fLocal_62 = 0f;
	int iLocal_63 = 0;
	bool bLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	float fLocal_68 = 0f;
	float fLocal_69 = 0f;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 21;
	var uLocal_78 = 6;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	bool bLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	bool bLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	bool bLocal_99 = 0;
	int iLocal_100 = 0;
	struct<3> Local_101 = { 0, 0, 0 } ;
	struct<3> Local_102 = { 0, 0, 0 } ;
	struct<3> Local_103 = { 0, 0, 0 } ;
	struct<3> Local_104 = { 0, 0, 0 } ;
	struct<3> Local_105 = { 0, 0, 0 } ;
	struct<3> Local_106 = { 0, 0, 0 } ;
	struct<3> Local_107 = { 0, 0, 0 } ;
	struct<3> Local_108 = { 0, 0, 0 } ;
	struct<3> Local_109 = { 0, 0, 0 } ;
	struct<3> Local_110 = { 0, 0, 0 } ;
	struct<3> Local_111 = { 0, 0, 0 } ;
	struct<3> Local_112 = { 0, 0, 0 } ;
	struct<3> Local_113 = { 0, 0, 0 } ;
	struct<6> Local_114 = { 0, 0, 0, 0, 0, 0 } ;
	char* sLocal_115 = NULL;
	char* sLocal_116 = NULL;
	char* sLocal_117 = NULL;
	char* sLocal_118 = NULL;
	char* sLocal_119 = NULL;
	char* sLocal_120 = NULL;
	char* sLocal_121 = NULL;
	char* sLocal_122 = NULL;
	char* sLocal_123 = NULL;
	int iLocal_124 = 0;
	struct<3> Local_125 = { 0, 0, 0 } ;
	struct<3> Local_126 = { 0, 0, 0 } ;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int* iLocal_135 = NULL;
	int* iLocal_136 = NULL;
	int* iLocal_137 = NULL;
	int iLocal_138 = 0;
	int* iLocal_139 = NULL;
	int iLocal_140 = 0;
	int* iLocal_141 = NULL;
	int iLocal_142[5] = { 0, 0, 0, 0, 0 };
	int iLocal_143[2] = { 0, 0 };
	int iLocal_144[2] = { 0, 0 };
	int* iLocal_145 = NULL;
	int* iLocal_146 = NULL;
	int* iLocal_147 = NULL;
	int* iLocal_148 = NULL;
	int* iLocal_149 = NULL;
	int* iLocal_150 = NULL;
	int* iLocal_151 = NULL;
	int* iLocal_152 = NULL;
	int* iLocal_153 = NULL;
	int* iLocal_154 = NULL;
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	int iLocal_158 = 0;
	int iLocal_159 = 0;
	int iLocal_160 = 0;
	int iLocal_161 = 0;
	int iLocal_162 = 0;
	int iLocal_163 = 0;
	int iLocal_164 = 0;
	int iLocal_165 = 0;
	int* iLocal_166 = NULL;
	int* iLocal_167 = NULL;
	int iLocal_168 = 0;
	int* iLocal_169 = NULL;
	int iLocal_170 = 0;
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
	struct<7> Local_183[7];
	int iLocal_184 = 0;
	int iLocal_185 = 0;
	int iLocal_186 = 0;
	int iLocal_187 = 0;
	int iLocal_188 = 0;
	int iLocal_189 = 0;
	int iLocal_190[3] = { 0, 0, 0 };
	int iLocal_191 = 0;
	int iLocal_192 = 0;
	int iLocal_193 = 0;
	int iLocal_194 = 0;
	int iLocal_195 = 0;
	int iLocal_196 = 0;
	int iLocal_197 = 0;
	int* iLocal_198 = NULL;
	var uLocal_199 = 3;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 1092616192;
	var uLocal_206 = 1101004800;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 3;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = -1;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 1000;
	var uLocal_233 = 1000;
	var uLocal_234 = 0;
	int iLocal_235 = 0;
	int iLocal_236 = 0;
	int iLocal_237 = 0;
	int iLocal_238 = 0;
	int iLocal_239[4] = { 0, 0, 0, 0 };
	int iLocal_240 = 0;
	int iLocal_241 = 0;
	char[] cLocal_242[8] = 0;
	int iLocal_243[120] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_244 = 0;
	int iLocal_245[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_246[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_247[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_248[4] = { 0, 0, 0, 0 };
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 4;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 4;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 4;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 4;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 4;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 4;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 16;
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
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
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
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	bool bLocal_453 = 0;
	float fLocal_454 = 0f;
	int iLocal_455 = 0;
	int iLocal_456 = 0;
	char* sLocal_457 = NULL;
	int iLocal_458 = 0;
	int iLocal_459 = 0;
	bool bLocal_460 = 0;
#endregion
void __EntryFunction__()//Position - 0x0
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
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
	iLocal_55 = -1;
	iLocal_57 = -1;
	iLocal_60 = 1000;
	fLocal_61 = 1000f;
	fLocal_62 = 1000f;
	Local_101 = { 0f, 0f, 0f };
	Local_102 = { -43.6345f, -1110.6049f, 25.9582f };
	Local_103 = { 0f, 0f, 178.9958f };
	Local_104 = { -63.0336f, -1107.3502f, 25.3198f };
	Local_105 = { -818.4653f, 180.4985f, 71.5139f };
	Local_106 = { -806.9441f, 171.6912f, 75.3206f };
	Local_107 = { -803.2621f, 176.0598f, 75.7406f };
	Local_108 = { -797.7103f, 181.8636f, 72.7925f };
	Local_109 = { -798.1318f, 181.0491f, 72.7808f };
	Local_110 = { -811.1514f, 187.6124f, 71.4744f };
	Local_111 = { -846.1608f, 158.1691f, 65.7346f };
	Local_112 = { -60.3707f, -1098.9924f, 25.4262f };
	sLocal_115 = "missarmenian3";
	sLocal_116 = "missarmenian3mcs2";
	sLocal_117 = "missarmenian3leadinoutArmenian_3_int";
	sLocal_118 = "missarmenian3mcs_1a";
	sLocal_119 = "missarmenian3@simeon_tauntsidle_b";
	sLocal_120 = "MOVE_M@LEAF_BLOWER";
	sLocal_121 = "missarmenian3_gardener";
	sLocal_122 = "missarmenian3_tryopendoor";
	sLocal_123 = "missarmenian3leadinoutarm3_mcs_8";
	Local_125 = { -802.411f, 166.269f, 70.557f };
	Local_126 = { 0f, 0f, 20.64f };
	iLocal_173 = -1223666875;
	iLocal_174 = 1850241841;
	iLocal_175 = -378388578;
	iLocal_176 = 1893421006;
	iLocal_177 = joaat("Garage_Door");
	iLocal_178 = -1831288286;
	iLocal_179 = -96283321;
	iLocal_180 = -293141277;
	iLocal_181 = 506750037;
	iLocal_182 = -1978427516;
	iLocal_184 = -1;
	iLocal_188 = -1;
	iLocal_191 = joaat("prop_controller_01");
	iLocal_192 = joaat("prop_headset_01");
	iLocal_193 = joaat("prop_tennis_rack_01");
	iLocal_194 = joaat("p_tennis_bag_01_s");
	iLocal_195 = joaat("WEAPON_PISTOL");
	cLocal_242 = "ARM3AUD";
	bLocal_453 = true;
	fLocal_454 = 1E-06f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_912();
		func_911();
		func_906(0);
	}
	MISC::SET_MISSION_FLAG(true);
	if (!__LIB_0__::func_294())
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_138))
		{
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					iLocal_138 = __LIB_10__::func_691();
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_138) && !ENTITY::IS_ENTITY_DEAD(iLocal_138, false))
					{
						VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_138, true);
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_138, true, true);
						ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_138, true);
					}
				}
			}
		}
	}
	if (!Global_96938.f_357)
	{
		if (!__LIB_0__::func_294())
		{
			bLocal_89 = false;
			while (!__LIB_39__::func_910(2, &uLocal_70, 0, 1, 0, 1, 0))
			{
				bLocal_89 = true;
				SYSTEM::WAIT(0);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]))
	{
		if (!PED::IS_PED_INJURED(Global_96938.f_9[0]))
		{
			iLocal_135 = Global_96938.f_9[0];
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_135, true, true);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[1]))
	{
		if (!PED::IS_PED_INJURED(Global_96938.f_9[1]))
		{
			iLocal_137 = Global_96938.f_9[1];
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_137, true, true);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_96938[0]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Global_96938[0], false))
		{
			iLocal_141 = Global_96938[0];
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_141, true, true);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_96938[1]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Global_96938[1], false))
		{
			iLocal_143[0] = Global_96938[1];
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_143[0], true, true);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_96938[2]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Global_96938[2], false))
		{
			iLocal_143[1] = Global_96938[2];
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_143[1], true, true);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_96938[3]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Global_96938[3], false))
		{
			iLocal_142[0] = Global_96938[3];
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_142[0], true, true);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_96938[4]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Global_96938[4], false))
		{
			iLocal_142[1] = Global_96938[4];
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_142[1], true, true);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_96938[5]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Global_96938[5], false))
		{
			iLocal_142[2] = Global_96938[5];
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_142[2], true, true);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_96938[6]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Global_96938[6], false))
		{
			iLocal_142[3] = Global_96938[6];
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_142[3], true, true);
		}
	}
	__LIB_0__::func_372(2);
	if (!__LIB_0__::func_294())
	{
		if (CUTSCENE::HAS_CUTSCENE_LOADED())
		{
			__LIB_7__::func_279(1, 1, 1, 0, 0, 0, 0);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_135) && !PED::IS_PED_INJURED(iLocal_135))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_135, "Siemon", 0, __LIB_11__::func_149(18), 0);
			}
			else
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Siemon", 2, __LIB_11__::func_149(18), 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_137) && !PED::IS_PED_INJURED(iLocal_137))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_137, "customer", 0, joaat("A_M_M_BevHills_02"), 0);
			}
			else
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "customer", 2, joaat("A_M_M_BevHills_02"), 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_141) && !ENTITY::IS_ENTITY_DEAD(iLocal_141, false))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_141, "Showroom_Car", 0, joaat("premier"), 0);
			}
			else
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Showroom_Car", 2, joaat("premier"), 0);
			}
			CUTSCENE::START_CUTSCENE(0);
			SYSTEM::WAIT(0);
			__LIB_32__::func_796(-36.443756f, -1114.313f, 24.939146f, -58.57041f, -1111.0518f, 37.435764f, 20f, -58.3923f, -1114.5612f, 25.4358f, 74.8206f, __LIB_9__::func_996(), 1, 1, 1, 0, 0);
			if (bLocal_89)
			{
				__LIB_32__::func_723(&uLocal_70, 0, 0, 2000, 1, 1, 0, 1);
				iLocal_90 = 1;
			}
			MISC::CLEAR_AREA(-47.07522f, -1114.4764f, 25.43581f, 7.5f, true, false, false, false);
			MISC::CLEAR_AREA(-40.14164f, -1113.7135f, 25.43738f, 5f, true, false, false, false);
			MISC::CLEAR_AREA(-57.75611f, -1112.7688f, 25.43581f, 10f, true, false, false, false);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-801.0658f, 187.03131f, 71.60547f, -797.86554f, 178.34364f, 74.83471f, 9f, false, false, true);
			CAM::STOP_GAMEPLAY_HINT(true);
			__LIB_37__::func_407();
			iLocal_97 = 1;
		}
	}
	while (true)
	{
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("M_Complications", 0);
		func_851();
		func_849();
		if (bLocal_89)
		{
			if (!__LIB_0__::func_294())
			{
				if (iLocal_90 == 0)
				{
					if (CUTSCENE::IS_CUTSCENE_PLAYING())
					{
						__LIB_32__::func_723(&uLocal_70, 0, 0, 2000, 1, 1, 0, 1);
						iLocal_90 = 1;
					}
				}
			}
			else
			{
				iLocal_90 = 1;
			}
		}
		if (func_848("ARM3_GUN"))
		{
			if (iLocal_236 >= 7 && iLocal_236 <= 10)
			{
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 73 /*INPUT_VEH_DUCK*/, true);
			}
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -856.008f, 170.52098f, 56.539825f, -764.7679f, 168.50711f, 86.73279f, 45f, false, true, 0))
		{
			if (iLocal_158 == 0)
			{
				iLocal_158 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-812.1879f, 179.9663f, 71.1639f, "V_Michael");
			}
			else if (iLocal_86 == 0)
			{
				INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_158);
				if (!INTERIOR::IS_INTERIOR_READY(iLocal_158))
				{
				}
				else
				{
					iLocal_86 = 1;
				}
			}
			ENTITY::CREATE_MODEL_HIDE(-802.73f, 167.5f, 77.58f, 1f, joaat("v_ilev_mm_windowwc"), false);
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_160))
			{
				if (func_845(joaat("v_ilev_mm_windowwc")))
				{
					MISC::CLEAR_AREA(-801.9f, 167.7f, 76.3f, 10f, true, false, false, false);
					iLocal_160 = OBJECT::CREATE_OBJECT(joaat("v_ilev_mm_windowwc"), -801.9f, 167.7f, 76.3f, true, true, false);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_160, true);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("v_ilev_mm_windowwc"));
				}
			}
			if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_173))
			{
				OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_173, joaat("v_ilev_mm_doorw"), -804.95f, 171.86f, 76.89f, true, true, false);
			}
			if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_174))
			{
				OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_174, joaat("v_ilev_mm_doorson"), -806.77f, 174.02f, 76.89f, true, true, false);
			}
			if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_175))
			{
				OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_175, joaat("v_ilev_mm_doordaughter"), -802.7f, 176.18f, 76.89f, true, true, false);
			}
			if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_176))
			{
				OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_176, joaat("v_ilev_mm_doorw"), -809.28f, 177.86f, 76.89f, true, true, false);
			}
			if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_177))
			{
				OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_177, joaat("v_ilev_mm_door"), -806.28f, 186.02f, 72.62f, true, true, false);
			}
			if (iLocal_236 <= 7)
			{
				if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_173))
				{
					if (OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iLocal_173) != -1f || OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iLocal_173) != 4)
					{
						OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_173, -1f, false, false);
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_173, 4, false, true);
					}
				}
				if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_174))
				{
					if (OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iLocal_174) != -1f || OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iLocal_174) != 4)
					{
						OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_174, -1f, false, false);
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_174, 4, false, true);
					}
				}
				if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_175))
				{
					if (OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iLocal_175) != 1f || OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iLocal_175) != 4)
					{
						OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_175, 1f, false, false);
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_175, 4, false, true);
					}
				}
				if (!func_848("GarageDoorLockedSkip"))
				{
					if (!func_848("DoorLocked"))
					{
						if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_177))
						{
							if ((OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iLocal_177) < (-0.4f - 0.05f) || OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iLocal_177) > (-0.4f + 0.05f)) || OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iLocal_177) != 4)
							{
								fVar0 = OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iLocal_177);
								if (fVar0 < -0.4f)
								{
									fVar0 = (fVar0 + (0.1f * SYSTEM::TIMESTEP()));
								}
								else if (fVar0 > -0.4f)
								{
									fVar0 = (fVar0 + (-0.1f * SYSTEM::TIMESTEP()));
								}
								OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_177, fVar0, false, false);
								OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_177, 4, false, true);
							}
						}
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -806.8881f, 183.77551f, 71.3478f, -805.19006f, 184.44276f, 73.8478f, 3.5f, false, true, 0))
						{
							func_842("DoorLocked", 1);
						}
					}
					else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -807.4023f, 189.0046f, 71.47892f, -815.2882f, 185.97816f, 74.95445f, 6.5f, false, true, 0))
					{
						if (func_841(4, joaat("v_ilev_mm_door"), -806.28f, 186.02f, 72.62f, 1, 1045220557, 1008981770, 0, 0))
						{
							func_842("GarageDoorSmoothClosed", 1);
						}
						else
						{
							func_842("GarageDoorSmoothClosed", 0);
						}
					}
					else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -806.959f, 186.04614f, 70.97479f, -804.7082f, 180.18422f, 74.3478f, 7f, false, true, 0))
					{
						if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_177))
						{
							if ((OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iLocal_177) < (-0.4f - 0.05f) || OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iLocal_177) > (-0.4f + 0.05f)) || OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iLocal_177) != 4)
							{
								fVar1 = OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iLocal_177);
								if (fVar1 < -0.4f)
								{
									fVar1 = (fVar1 + (0.1f * SYSTEM::TIMESTEP()));
								}
								else if (fVar1 > -0.4f)
								{
									fVar1 = (fVar1 + (-0.1f * SYSTEM::TIMESTEP()));
								}
								OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_177, fVar1, false, false);
								OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_177, 3, false, true);
							}
						}
					}
					else if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_177))
					{
						if ((OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iLocal_177) < (-0.4f - 0.05f) || OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iLocal_177) > (-0.4f + 0.05f)) || OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iLocal_177) != 4)
						{
							fVar2 = OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iLocal_177);
							if (fVar2 < -0.4f)
							{
								fVar2 = (fVar2 + (0.1f * SYSTEM::TIMESTEP()));
							}
							else if (fVar2 > -0.4f)
							{
								fVar2 = (fVar2 + (-0.1f * SYSTEM::TIMESTEP()));
							}
							OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_177, fVar2, false, false);
							OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_177, 4, false, true);
						}
					}
				}
				else if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_177))
				{
					if (OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iLocal_177) != 0f || OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iLocal_177) != 4)
					{
						OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_177, 0f, false, false);
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_177, 4, false, true);
					}
				}
				if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_176))
				{
					if (OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iLocal_176) != 0f || OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iLocal_176) != 4)
					{
						OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_176, 0f, false, false);
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_176, 4, false, true);
					}
				}
			}
		}
		else if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -864.31604f, 170.81046f, 56.56639f, -757.05743f, 167.81978f, 77.38649f, 55f, false, true, 0))
		{
			if (iLocal_158 != 0)
			{
				if (iLocal_86 == 1)
				{
					INTERIOR::UNPIN_INTERIOR(iLocal_158);
					iLocal_86 = 0;
				}
			}
		}
		if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_178))
		{
			OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_178, joaat("v_ilev_fib_door1"), -31.72f, -1101.85f, 26.57f, true, true, false);
		}
		if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_179))
		{
			OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_179, joaat("v_ilev_fib_door1"), -33.81f, -1107.58f, 26.57f, true, true, false);
		}
		if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_180))
		{
			OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_180, joaat("v_ilev_csr_door_l"), -59.89f, -1092.95f, 26.88f, true, true, false);
		}
		if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_181))
		{
			OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_181, joaat("v_ilev_csr_door_r"), -60.55f, -1094.75f, 26.89f, true, true, false);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_178))
		{
			if (OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iLocal_178) != 0f || OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iLocal_178) != 4)
			{
				OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_178, 0f, false, false);
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_178, 4, false, true);
			}
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_179))
		{
			if (OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iLocal_179) != 0f || OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iLocal_179) != 4)
			{
				OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_179, 0f, false, false);
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_179, 4, false, true);
			}
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_180))
		{
			if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iLocal_180) != 3)
			{
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_180, 3, false, true);
			}
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_181))
		{
			if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iLocal_181) != 3)
			{
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_181, 3, false, true);
			}
		}
		if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_182))
		{
			OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_182, joaat("prop_bh1_48_gate_1"), -8489343f, 179.3079f, 70.0247f, true, true, false);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_182))
		{
			if (OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iLocal_182) != 0f || OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iLocal_182) != 4)
			{
				OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_182, 0f, false, false);
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_182, 4, false, true);
			}
		}
		if (Local_183[0 /*7*/].f_5 != -2097039789)
		{
			Local_183[0 /*7*/] = { __LIB_0__::func_347(38) };
			Local_183[1 /*7*/] = { __LIB_0__::func_347(39) };
			Local_183[2 /*7*/] = { __LIB_0__::func_347(41) };
			Local_183[3 /*7*/] = { __LIB_0__::func_347(42) };
			Local_183[4 /*7*/] = { __LIB_0__::func_347(43) };
			Local_183[5 /*7*/] = { __LIB_0__::func_347(44) };
			Local_183[6 /*7*/] = { __LIB_0__::func_347(46) };
		}
		iVar3 = 0;
		while (iVar3 < Local_183.f_0)
		{
			if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(Local_183[iVar3 /*7*/].f_5))
			{
				if (OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(Local_183[iVar3 /*7*/].f_5) != 0f || OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(Local_183[iVar3 /*7*/].f_5) != 4)
				{
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(Local_183[iVar3 /*7*/].f_5, 0f, false, false);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Local_183[iVar3 /*7*/].f_5, 4, false, true);
				}
			}
			iVar3++;
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -160.9063f, -1036.9158f, 41.27324f, 95.394714f, -1132.6062f, 18.234772f, 280f, false, true, 0) || (iLocal_236 >= 8 && iLocal_236 <= 9))
		{
			if (iLocal_159 == 0)
			{
				iLocal_159 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Local_112, "v_carshowroom");
			}
			else if (iLocal_87 == 0)
			{
				INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_159);
				if (!INTERIOR::IS_INTERIOR_READY(iLocal_159))
				{
				}
				else
				{
					iLocal_87 = 1;
				}
			}
		}
		else if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -255.98178f, -1028.3988f, 42.45829f, 135.90625f, -1172.9733f, 21.366043f, 280f, false, true, 0))
		{
			if (iLocal_159 != 0)
			{
				if (iLocal_87 == 1)
				{
					INTERIOR::UNPIN_INTERIOR(iLocal_159);
					iLocal_87 = 0;
				}
			}
		}
		if (iLocal_159 != 0)
		{
			if (iLocal_236 > 7)
			{
				if (!func_848("ShowroomShutter"))
				{
					__LIB_18__::func_191(179, 1, 1, 1, 0);
					func_842("ShowroomShutter", 1);
				}
			}
		}
		if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_158)
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -802.75433f, 167.43784f, 75.59586f, -804.58154f, 172.115f, 79.2408f, 3f, false, true, 0))
			{
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 102, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/, true);
			}
		}
		if (((((MISC::IS_BULLET_IN_BOX(-850.43f, 139.94f, 61.96f, -770.38f, 191.25f, 74.2f, true) && !PED::IS_PED_PLANTING_BOMB(PLAYER::PLAYER_PED_ID())) && !WEAPON::IS_PED_CURRENT_WEAPON_SILENCED(PLAYER::PLAYER_PED_ID())) && func_834(PLAYER::PLAYER_PED_ID())) || FIRE::IS_EXPLOSION_IN_ANGLED_AREA(-1, -848.4577f, 168.8738f, 58.593575f, -768.443f, 168.83467f, 93.19075f, 55f)) || ((ENTITY::DOES_ENTITY_EXIST(iLocal_139) && !ENTITY::IS_ENTITY_DEAD(iLocal_139, false)) && VEHICLE::IS_VEHICLE_ALARM_ACTIVATED(iLocal_139)))
		{
			iLocal_237 = 17;
			func_821();
		}
		if (ENTITY::DOES_ENTITY_EXIST(func_820(0)))
		{
			PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(func_820(0), false);
		}
		if (ENTITY::DOES_ENTITY_EXIST(func_820(1)))
		{
			PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(func_820(1), false);
		}
		if (iLocal_85 == 0 || iLocal_456 == 1)
		{
			HUD::DISPLAY_RADAR(false);
			HUD::DISPLAY_HUD(false);
		}
		else
		{
			HUD::DISPLAY_RADAR(true);
			HUD::DISPLAY_HUD(true);
		}
		if (iLocal_236 == 2 || iLocal_236 == 3)
		{
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -843.0493f, 172.7284f, 68.7735f, 150f, 150f, 150f, false, true, 0))
			{
				if (func_845(joaat("S_M_M_Gardener_01")))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_136))
					{
						__LIB_30__::func_215(&iLocal_136, joaat("S_M_M_Gardener_01"), -835.3764f, 184.7189f, 70.8434f, 331.4128f, 1);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_M_Gardener_01"));
						ENTITY::SET_ENTITY_HEALTH(iLocal_136, 101, 0);
						PED::SET_PED_MAX_HEALTH(iLocal_136, 101);
						PED::SET_PED_COMPONENT_VARIATION(iLocal_136, 0, 0, 1, 0);
						PED::SET_PED_COMPONENT_VARIATION(iLocal_136, 3, 1, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iLocal_136, 4, 1, 1, 0);
						PED::SET_PED_COMPONENT_VARIATION(iLocal_136, 8, 1, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iLocal_136, 10, 2, 0, 0);
						PED::SET_PED_PROP_INDEX(iLocal_136, 0, 0, 1, false);
						PED::BLOCK_PED_FROM_GENERATING_DEAD_BODY_EVENTS_WHEN_DEAD(iLocal_136, true);
						PED::SET_PED_HEARING_RANGE(iLocal_136, 10f);
						__LIB_11__::func_168(iLocal_136, 40f, 10f, 30f, -80f, 80f);
						PED::SET_PED_CONFIG_FLAG(iLocal_136, 42, true);
						__LIB_0__::func_203(&uLocal_288, 2, iLocal_136, "GARDENER", 0, 1);
						iLocal_169 = OBJECT::CREATE_OBJECT(joaat("prop_leaf_blower_01"), -837.1777f, 181.6656f, 70.1302f, true, true, false);
						ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_169, iLocal_136, PED::GET_PED_BONE_INDEX(iLocal_136, 28422), Local_101, Local_101, false, false, false, false, 2, true, 0);
					}
					else
					{
						if (ENTITY::IS_ENTITY_ATTACHED(iLocal_169))
						{
							if (iLocal_188 == -1)
							{
								if (AUDIO::REQUEST_AMBIENT_AUDIO_BANK("GARDEN_LEAF_BLOWER", false, -1))
								{
									iLocal_188 = AUDIO::GET_SOUND_ID();
									AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_188, "GARDENING_LEAFBLOWER_ANIM_TRIGGERED", iLocal_169, 0, false, 0);
								}
							}
							if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_189))
							{
								STREAMING::REQUEST_PTFX_ASSET();
								if (STREAMING::HAS_PTFX_ASSET_LOADED())
								{
									iLocal_189 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("ent_anim_leaf_blower", iLocal_169, 1f, 0f, -0.25f, 0f, -45f, 0f, 1f, false, false, false);
								}
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_136) && CAM::IS_SCREEN_FADED_IN())
						{
							if (PED::IS_PED_INJURED(iLocal_136))
							{
								if (__LIB_0__::func_405("ARM3_GARDEN", 0, 0))
								{
									HUD::CLEAR_PRINTS();
								}
							}
							if (!PED::IS_PED_INJURED(iLocal_136))
							{
								if (func_815(sLocal_121))
								{
									if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_136, sLocal_121, "Blower_Idle_a", 3) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_136, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1)
									{
										TASK::TASK_PLAY_ANIM(iLocal_136, sLocal_121, "Blower_Idle_a", 2f, -2f, -1, 8193, 0f, false, false, false);
									}
								}
								if (!STREAMING::HAS_CLIP_SET_LOADED(sLocal_120))
								{
									STREAMING::REQUEST_CLIP_SET(sLocal_120);
								}
								if (func_815(sLocal_121) && STREAMING::HAS_CLIP_SET_LOADED(sLocal_120))
								{
									if (func_848("ARM3HLP_SNEAK"))
									{
										if (!func_848("GardenerAdvance"))
										{
											if (MISC::GET_GAME_TIMER() > iLocal_58)
											{
												PED::SET_PED_MOVEMENT_CLIPSET(iLocal_136, sLocal_120, 0.25f);
												PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(iLocal_136, sLocal_120);
												TASK::OPEN_SEQUENCE_TASK(&iLocal_157);
												TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -827.8197f, 191.4635f, 72.2064f, 0.5f, -1, 0.25f, 0, 299.3068f);
												TASK::TASK_PLAY_ANIM(0, sLocal_121, "Blower_Idle_a", 2f, -2f, -1, 8193, 0f, false, false, false);
												TASK::CLOSE_SEQUENCE_TASK(iLocal_157);
												TASK::TASK_PERFORM_SEQUENCE(iLocal_136, iLocal_157);
												TASK::CLEAR_SEQUENCE_TASK(&iLocal_157);
												func_842("GardenerAdvance", 1);
											}
										}
									}
								}
							}
							if (func_815(sLocal_121))
							{
								if (!func_848("ACT_stealth_kill_a_gardener"))
								{
									MISC::ACTION_MANAGER_ENABLE_ACTION(joaat("ACT_stealth_kill_a_gardener"), true);
									func_842("ACT_stealth_kill_a_gardener", 1);
								}
							}
							if (PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
							{
								iLocal_58 = MISC::GET_GAME_TIMER() + 3000;
							}
							if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iLocal_136, false), 8f, 8f, 2f, false, true, 0))
							{
								TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_136, 3000, 0, 2);
							}
							if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -847.8129f, 182.998f, 66.36266f, -811.2782f, 180.25085f, 81.59295f, 30f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -843.9734f, 159.88332f, 65.3092f, -809.6868f, 159.16342f, 76.78688f, 22f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -796.666f, 190.55618f, 71.834915f, -819.05493f, 191.73517f, 84.225395f, 7f, false, true, 0))
							{
								EVENT::SUPPRESS_SHOCKING_EVENTS_NEXT_FRAME();
								if ((PED::IS_PED_PLANTING_BOMB(PLAYER::PLAYER_PED_ID()) || WEAPON::IS_PED_CURRENT_WEAPON_SILENCED(PLAYER::PLAYER_PED_ID())) || !func_834(PLAYER::PLAYER_PED_ID()))
								{
									PLAYER::SUPPRESS_CRIME_THIS_FRAME(PLAYER::PLAYER_ID(), 28);
								}
								if (PED::IS_PED_INJURED(iLocal_136) || ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_136, joaat("drop")))
								{
									__LIB_10__::func_7(&iLocal_145);
									ENTITY::DETACH_ENTITY(iLocal_169, true, false);
									if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_189))
									{
										GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_189, false);
									}
									if (iLocal_188 != -1)
									{
										AUDIO::STOP_SOUND(iLocal_188);
										AUDIO::RELEASE_SOUND_ID(iLocal_188);
										iLocal_188 = -1;
									}
									__LIB_0__::func_498(29);
									func_842("GardenerTakedown", 1);
								}
								if (!HUD::DOES_BLIP_EXIST(iLocal_145) && !func_848("GardenerTakedown"))
								{
									__LIB_37__::func_503(&iLocal_145, &iLocal_136, 1);
								}
								if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(iLocal_136) != iLocal_197)
								{
									PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_136, iLocal_197);
								}
								if (!PED::IS_PED_INJURED(iLocal_136))
								{
									if (!func_848("GardenerAlert"))
									{
										if (!func_848("GardenerTakedown") || ENTITY::IS_ENTITY_ATTACHED(iLocal_169))
										{
											if (((((PED::IS_PED_IN_COMBAT(iLocal_136, 0) || PED::IS_PED_RAGDOLL(iLocal_136)) || (PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), iLocal_136) && MISC::GET_GAME_TIMER() > iLocal_58)) || PED::GET_PED_ALERTNESS(iLocal_136) != 0) || PED::IS_PED_FLEEING(iLocal_136)) || (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_136, sLocal_121, "Blower_Idle_a", 3) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_136, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1))
											{
												func_842("ARM3_GARDEN", 0);
												if ((__LIB_26__::func_375() % 2) == 0)
												{
													func_807("ARM3_GARDEN", 7, 1, 0);
												}
												else
												{
													func_807("ARM3_GARDEN2", 7, 1, 0);
												}
												func_842("ARM3_GARDEN", 1);
												TASK::CLEAR_PED_TASKS(iLocal_136);
												TASK::TASK_LOOK_AT_ENTITY(iLocal_136, PLAYER::PLAYER_PED_ID(), 1000, 1024, 2);
												TASK::OPEN_SEQUENCE_TASK(&iLocal_157);
												TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
												TASK::TASK_REACT_AND_FLEE_PED(0, PLAYER::PLAYER_PED_ID());
												TASK::CLOSE_SEQUENCE_TASK(iLocal_157);
												TASK::TASK_PERFORM_SEQUENCE(iLocal_136, iLocal_157);
												TASK::CLEAR_SEQUENCE_TASK(&iLocal_157);
												while ((((ENTITY::DOES_ENTITY_EXIST(iLocal_136) && !PED::IS_PED_INJURED(iLocal_136)) && !PED::IS_PED_IN_COMBAT(iLocal_136, 0)) && !PED::IS_PED_RAGDOLL(iLocal_136)) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_136, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1)
												{
													func_806(0);
												}
												if ((ENTITY::DOES_ENTITY_EXIST(iLocal_136) && !PED::IS_PED_INJURED(iLocal_136)) && ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_136, sLocal_121, "Blower_Idle_a", 3))
												{
													TASK::STOP_ANIM_TASK(iLocal_136, sLocal_121, "Blower_Idle_a", -8f);
												}
												ENTITY::DETACH_ENTITY(iLocal_169, true, false);
												if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_189))
												{
													GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_189, false);
												}
												if (iLocal_188 != -1)
												{
													AUDIO::STOP_SOUND(iLocal_188);
													AUDIO::RELEASE_SOUND_ID(iLocal_188);
													iLocal_188 = -1;
												}
												iLocal_59 = MISC::GET_GAME_TIMER() + 2000;
												if (ENTITY::DOES_ENTITY_EXIST(iLocal_136) && PED::IS_PED_INJURED(iLocal_136))
												{
													RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5.5f, 2f, 3);
												}
												func_842("GardenerAlert", 1);
											}
										}
									}
									else if (MISC::GET_GAME_TIMER() > iLocal_59)
									{
										func_806(500);
										iLocal_237 = 17;
										func_821();
									}
								}
							}
							else if (!PED::IS_PED_INJURED(iLocal_136))
							{
								if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(iLocal_136) == iLocal_197)
								{
									if (PED::IS_PED_IN_COMBAT(iLocal_136, 0))
									{
										TASK::CLEAR_PED_TASKS(iLocal_136);
									}
									PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_136, iLocal_196);
								}
							}
						}
					}
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_248[0]) && !PED::IS_PED_INJURED(uLocal_248[0]))
		{
			if ((((((ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_248[0], sLocal_115, "michaelappears_loop_michael", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_248[0], sLocal_115, "michaelappears_loop_michael") >= 1f) || (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_248[0], sLocal_115, "michaelappears_loop2_michael", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_248[0], sLocal_115, "michaelappears_loop2_michael") >= 1f)) || (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_248[0], sLocal_115, "michaelappears_loop3_michael", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_248[0], sLocal_115, "michaelappears_loop3_michael") >= 1f)) || (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_248[0], sLocal_115, "michaelappears_loop4_michael", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_248[0], sLocal_115, "michaelappears_loop4_michael") >= 1f)) || (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_248[0], sLocal_115, "michaelappears_loop5_michael", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_248[0], sLocal_115, "michaelappears_loop5_michael") >= 1f)) || (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_248[0], sLocal_115, "michaelappears_loop6_michael", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_248[0], sLocal_115, "michaelappears_loop6_michael") >= 1f))
			{
				iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
				if (iVar4 == 0)
				{
					TASK::TASK_PLAY_ANIM(uLocal_248[0], sLocal_115, "michaelappears_loop_michael", 4f, -4f, -1, 2, 0f, false, false, false);
				}
				else if (iVar4 == 1)
				{
					TASK::TASK_PLAY_ANIM(uLocal_248[0], sLocal_115, "michaelappears_loop2_michael", 4f, -4f, -1, 2, 0f, false, false, false);
				}
				else if (iVar4 == 2)
				{
					TASK::TASK_PLAY_ANIM(uLocal_248[0], sLocal_115, "michaelappears_loop3_michael", 4f, -4f, -1, 2, 0f, false, false, false);
				}
				else if (iVar4 == 3)
				{
					TASK::TASK_PLAY_ANIM(uLocal_248[0], sLocal_115, "michaelappears_loop4_michael", 4f, -4f, -1, 2, 0f, false, false, false);
				}
				else if (iVar4 == 4)
				{
					TASK::TASK_PLAY_ANIM(uLocal_248[0], sLocal_115, "michaelappears_loop5_michael", 4f, -4f, -1, 2, 0f, false, false, false);
				}
				else if (iVar4 == 5)
				{
					TASK::TASK_PLAY_ANIM(uLocal_248[0], sLocal_115, "michaelappears_loop6_michael", 4f, -4f, -1, 2, 0f, false, false, false);
				}
			}
		}
		if (func_805() && iLocal_236 == 7)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_248[0]))
			{
				if (((((((ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_248[0], sLocal_115, "michaelappears_intro_michael", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_248[0], sLocal_115, "michaelappears_intro_michael") > 0.75f) || ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_248[0], sLocal_115, "michaelappears_loop_michael", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_248[0], sLocal_115, "michaelappears_loop2_michael", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_248[0], sLocal_115, "michaelappears_loop3_michael", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_248[0], sLocal_115, "michaelappears_loop4_michael", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_248[0], sLocal_115, "michaelappears_loop5_michael", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_248[0], sLocal_115, "michaelappears_loop6_michael", 3))
				{
					if (func_848("ARM3_DRIV") && MISC::GET_GAME_TIMER() > iLocal_56)
					{
						if (!func_848("ARM3_STOP"))
						{
							if (!MISC::IS_STRING_NULL_OR_EMPTY(&Local_114))
							{
								if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !__LIB_0__::func_75())
								{
									if (ENTITY::IS_ENTITY_UPRIGHT(iLocal_140, 90f) && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iLocal_140))
									{
										StringCopy(&Local_114, __LIB_0__::func_459(), 24);
									}
								}
							}
						}
						if ((((((!__LIB_11__::func_869("ARM3_PHONE") && !__LIB_11__::func_869("ARM3_CRASH")) && !__LIB_11__::func_869("ARM3_FLIP")) && !__LIB_11__::func_869("ARM3_HIT")) && !__LIB_11__::func_869("ARM3_ROUTE")) && !__LIB_11__::func_869("ARM3_GOGO")) && !__LIB_11__::func_869("ARM3_GETOUT"))
						{
							if ((ENTITY::GET_ENTITY_HEALTH(iLocal_140) < iLocal_60 || VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iLocal_140) < fLocal_61) || VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_140) < fLocal_62)
							{
								if (__LIB_11__::func_869("ARM3_DRIV") || __LIB_11__::func_869(&Local_114))
								{
									Local_114 = { __LIB_0__::func_389() };
								}
								AUDIO::INTERRUPT_CONVERSATION(func_820(0), "ARM3_BGAA", "MICHAEL");
								iLocal_60 = ENTITY::GET_ENTITY_HEALTH(iLocal_140);
								fLocal_61 = VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iLocal_140);
								fLocal_62 = VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_140);
								iLocal_56 = MISC::GET_GAME_TIMER() + 12000;
							}
							if (!ENTITY::IS_ENTITY_UPRIGHT(iLocal_140, 90f))
							{
								if (__LIB_11__::func_869("ARM3_DRIV") || __LIB_11__::func_869(&Local_114))
								{
									Local_114 = { __LIB_0__::func_389() };
								}
								AUDIO::INTERRUPT_CONVERSATION(func_820(0), "ARM3_BPAA", "MICHAEL");
								iLocal_56 = MISC::GET_GAME_TIMER() + 12000;
							}
							iVar5 = 0;
							iVar6 = __LIB_0__::func_459();
							iVar5 = 0;
							while (iVar5 < SCRIPT::GET_NUMBER_OF_EVENTS(0))
							{
								iVar7 = SCRIPT::GET_EVENT_AT_INDEX(0, iVar5);
								switch (iVar7)
								{
									case 142:
									case 141:
										SCRIPT::GET_EVENT_DATA(0, iVar5, &iVar6, 1);
										if (ENTITY::DOES_ENTITY_EXIST(iVar6))
										{
											if (ENTITY::IS_ENTITY_A_PED(iVar6))
											{
												if (__LIB_11__::func_869("ARM3_DRIV") || __LIB_11__::func_869(&Local_114))
												{
													Local_114 = { __LIB_0__::func_389() };
												}
												AUDIO::INTERRUPT_CONVERSATION(func_820(0), "ARM3_BHAA", "MICHAEL");
												if (iVar7 == 142)
												{
													__LIB_0__::func_401(24, 1, 0);
												}
												iLocal_56 = MISC::GET_GAME_TIMER() + 12000;
											}
										}
										break;
								}
								iVar5++;
							}
							if (!func_848("ARM3_STOP"))
							{
								if (((((ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_248[0], sLocal_115, "michaelappears_loop_michael", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_248[0], sLocal_115, "michaelappears_loop2_michael", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_248[0], sLocal_115, "michaelappears_loop3_michael", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_248[0], sLocal_115, "michaelappears_loop4_michael", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_248[0], sLocal_115, "michaelappears_loop5_michael", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_248[0], sLocal_115, "michaelappears_loop6_michael", 3))
								{
									if (((!func_848("Destination1") && !func_848("Destination2")) && !func_848("Destination3")) && !func_848("Destination4"))
									{
										if (ENTITY::GET_ENTITY_SPEED(iLocal_140) < 1f)
										{
											if (iLocal_57 == -1)
											{
												iLocal_57 = MISC::GET_GAME_TIMER() + 3000;
											}
										}
										else
										{
											iLocal_57 = -1;
										}
										if ((iLocal_57 != -1 && MISC::GET_GAME_TIMER() > iLocal_57) && !func_848("HaltVehicle"))
										{
											if (__LIB_11__::func_869("ARM3_DRIV") || __LIB_11__::func_869(&Local_114))
											{
												Local_114 = { __LIB_0__::func_389() };
											}
											AUDIO::INTERRUPT_CONVERSATION(func_820(0), "ARM3_BJAA", "MICHAEL");
											iLocal_56 = MISC::GET_GAME_TIMER() + 12000;
										}
									}
								}
							}
							if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/))
							{
								if (__LIB_11__::func_869("ARM3_DRIV") || __LIB_11__::func_869(&Local_114))
								{
									Local_114 = { __LIB_0__::func_389() };
								}
								AUDIO::INTERRUPT_CONVERSATION(func_820(0), "ARM3_BKAA", "MICHAEL");
								iLocal_56 = MISC::GET_GAME_TIMER() + 12000;
							}
							if (__LIB_0__::func_77(1))
							{
								if (__LIB_11__::func_869("ARM3_DRIV") || __LIB_11__::func_869(&Local_114))
								{
									Local_114 = { __LIB_0__::func_389() };
								}
								AUDIO::INTERRUPT_CONVERSATION(func_820(0), "ARM3_BLAA", "MICHAEL");
								__LIB_6__::func_849(0);
								__LIB_8__::func_770(1);
								iLocal_56 = MISC::GET_GAME_TIMER() + 12000;
							}
						}
					}
				}
			}
		}
		if (__LIB_20__::func_728() == 0)
		{
			__LIB_0__::func_320(PLAYER::PLAYER_PED_ID(), 22);
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			__LIB_0__::func_320(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 23);
			__LIB_0__::func_409(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 26);
		}
		else
		{
			__LIB_0__::func_320(0, 23);
			__LIB_0__::func_409(0, 26);
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
		PLAYER::SUPPRESS_CRIME_THIS_FRAME(PLAYER::PLAYER_ID(), 5);
		PLAYER::SUPPRESS_CRIME_THIS_FRAME(PLAYER::PLAYER_ID(), 2);
		PLAYER::SUPPRESS_CRIME_THIS_FRAME(PLAYER::PLAYER_ID(), 3);
		PLAYER::SUPPRESS_CRIME_THIS_FRAME(PLAYER::PLAYER_ID(), 4);
		func_785();
		func_784();
		switch (iLocal_236)
		{
			case 0:
				func_691();
				break;
			case 1:
				if (func_815(sLocal_117))
				{
					func_690();
				}
				break;
			case 2:
				if (func_815(sLocal_117))
				{
					func_630();
				}
				break;
			case 3:
				if ((func_845(joaat("bjxl")) && func_845(joaat("bison3"))) && func_815(sLocal_115))
				{
					func_621();
				}
				break;
			case 4:
				if ((((func_845(__LIB_11__::func_149(14)) && func_845(__LIB_11__::func_149(15))) && func_815(sLocal_115)) && func_815(sLocal_118)) && func_815(sLocal_116))
				{
					func_592();
				}
				break;
			case 5:
				if (((((func_845(__LIB_11__::func_149(14)) && func_845(__LIB_11__::func_149(15))) && func_845(__LIB_11__::func_149(17))) && func_845(__LIB_11__::func_149(25))) && func_815(sLocal_115)) && func_815(sLocal_116))
				{
					func_573();
				}
				break;
			case 6:
				if (func_845(__LIB_19__::func_811(0)) && func_815(sLocal_115))
				{
					func_338();
				}
				break;
			case 7:
				if (func_815(sLocal_115))
				{
					func_337();
				}
				__LIB_10__::func_691();
				break;
			case 8:
				func_330();
				break;
			case 9:
				if (func_815(sLocal_115) && func_845(joaat("prop_showroom_glass_1b")))
				{
					func_283();
				}
				break;
			case 10:
				if (func_845(__LIB_11__::func_149(18)) && func_815(sLocal_123))
				{
					func_276();
				}
				break;
			case 11:
				if (func_815(sLocal_119))
				{
					func_6();
				}
				break;
			case 12:
				func_1();
				break;
			case 13:
				func_821();
				break;
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x219C
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(800);
	}
	__LIB_37__::func_407();
	if (ENTITY::DOES_ENTITY_EXIST(func_820(0)) && !ENTITY::IS_ENTITY_DEAD(func_820(0), false))
	{
		WEAPON::GIVE_WEAPON_TO_PED(func_820(0), iLocal_195, 120, false, true);
		WEAPON::SET_CURRENT_PED_WEAPON(func_820(0), joaat("WEAPON_UNARMED"), true);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_142[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_142[0], false))
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_142[0], 1);
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_142[0], true);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_142[1]) && !ENTITY::IS_ENTITY_DEAD(iLocal_142[1], false))
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_142[1], 1);
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_142[1], true);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_142[2]) && !ENTITY::IS_ENTITY_DEAD(iLocal_142[2], false))
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_142[2], 1);
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_142[2], true);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_142[3]) && !ENTITY::IS_ENTITY_DEAD(iLocal_142[3], false))
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_142[3], 1);
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_142[3], true);
	}
	__LIB_6__::func_823(0, 0);
	iLocal_88 = 1;
	func_906(0);
}

void func_6()//Position - 0x2427
{
	struct<3> Var0;
	struct<3> Var1;
	int iVar2;
	if (func_275())
	{
		__LIB_42__::func_873(5, "stageBeatDown", 1, 0, 0, 1);
		__LIB_11__::func_811(0, 1);
		__LIB_0__::func_503(115, 1);
		__LIB_0__::func_367(1);
		func_210(PLAYER::PLAYER_ID(), 1, 0);
		if (iLocal_66)
		{
			CAM::SET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL(iLocal_65);
			CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(0, iLocal_67);
			iLocal_66 = 0;
		}
		iLocal_85 = 1;
		HUD::ALLOW_SONAR_BLIPS(false);
		__LIB_8__::func_770(1);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_140) && !ENTITY::IS_ENTITY_DEAD(iLocal_140, false))
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_140, 1);
		}
		if (__LIB_20__::func_728() != 0)
		{
			__LIB_35__::func_983(&uLocal_248, 0);
			__LIB_42__::func_146(&uLocal_248, 1, 1, 0);
		}
		func_806(0);
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(PLAYER::PLAYER_PED_ID(), false);
		PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), true, -1, 0);
		__LIB_32__::func_730(PLAYER::PLAYER_PED_ID(), 1, 0);
		WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
		ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), false, false, false, false, false, false, false, false);
		__LIB_5__::func_674(&(uLocal_248[1]));
		PED::SET_PED_COMBAT_MOVEMENT(iLocal_135, 2);
		func_121(iLocal_135, 1);
		WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_135, true);
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_135, false))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(iLocal_135, false);
		}
		__LIB_37__::func_503(&iLocal_152, &iLocal_135, 1);
		CUTSCENE::REQUEST_CUTSCENE("Armenian_3_MCS_9_concat", 8);
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_BEAT_DOWN"))
		{
			AUDIO::START_AUDIO_SCENE("ARM_3_BEAT_DOWN");
		}
		if (iLocal_184 == -1)
		{
			iLocal_184 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-53.737026f, -1096.9838f, 26.494654f, 1.25f, 0.5f, 1f, 30f, false, 7);
		}
		AUDIO::RECORD_BROKEN_GLASS(-57.15079f, -1097.2635f, 25.42232f, 3f);
		AUDIO::RECORD_BROKEN_GLASS(-51.97326f, -1093.5098f, 25.42232f, 3.5f);
		if (!func_848("WindowSmashed"))
		{
			AUDIO::SET_PORTAL_SETTINGS_OVERRIDE("V_CARSHOWROOM_PS_WINDOW_UNBROKEN", "V_CARSHOWROOM_PS_WINDOW_BROKEN");
			func_842("WindowSmashed", 1);
		}
		PLAYER::SET_MAX_WANTED_LEVEL(0);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		MISC::CLEAR_AREA_OF_COPS(-57.6017f, -1095.0913f, 25.4343f, 500f, 0);
		MISC::ENABLE_DISPATCH_SERVICE(1, false);
		MISC::ENABLE_DISPATCH_SERVICE(10, false);
		MISC::ENABLE_DISPATCH_SERVICE(9, false);
		MISC::ENABLE_DISPATCH_SERVICE(2, false);
		MISC::ENABLE_DISPATCH_SERVICE(3, false);
		MISC::ENABLE_DISPATCH_SERVICE(4, false);
		MISC::ENABLE_DISPATCH_SERVICE(5, false);
		PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), false);
		PED::SET_CREATE_RANDOM_COPS(false);
		PED::SET_PED_RESET_FLAG(iLocal_135, 149, true);
		PED::SET_PED_RESET_FLAG(iLocal_135, 69, true);
		bLocal_460 = false;
		if (func_120())
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
			}
			if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_135, false))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_135, true);
			}
			if (iLocal_87 == 0)
			{
				iLocal_159 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Local_112, "v_carshowroom");
				INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_159);
				while (!INTERIOR::IS_INTERIOR_READY(iLocal_159))
				{
					func_806(0);
				}
				iLocal_87 = 1;
			}
			if (!bLocal_92)
			{
				func_119(-58.1243f, -1095.0555f, 25.4345f, 1101004800);
			}
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
			}
			if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_135, false))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_135, false);
			}
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			func_118(PLAYER::PLAYER_PED_ID(), -58.1243f, -1095.0555f, 25.4345f, 314.025f, 1);
			__LIB_11__::func_102(iLocal_140, -55.8188f, -1096.4149f, 25.4344f, 305.0423f);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_140, true);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING((__LIB_0__::func_670(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -56.13f, -1097.6f, 25.16f) - ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID())));
			iLocal_235 = OBJECT::GET_RAYFIRE_MAP_OBJECT(-56.13f, -1097.6f, 25.16f, 10f, "DES_Showroom");
			while (!OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_235))
			{
				iLocal_235 = OBJECT::GET_RAYFIRE_MAP_OBJECT(-56.13f, -1097.6f, 25.16f, 10f, "DES_Showroom");
				func_806(0);
			}
			if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_235))
			{
				if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_235) != 10)
				{
					OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_235, 9);
				}
			}
			while (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(func_820(0)))
			{
				func_806(0);
			}
			func_806(500);
			func_118(iLocal_135, -55.6653f, -1093.4874f, 25.4343f, 125.882f, 1);
			INTERIOR::RETAIN_ENTITY_IN_INTERIOR(iLocal_135, iLocal_159);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_135, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_135, iLocal_197);
			PED::SET_PED_AS_ENEMY(iLocal_135, true);
			TASK::TASK_PUT_PED_DIRECTLY_INTO_MELEE(iLocal_135, func_820(0), 0f, -1f, 0f, 0);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_135, false, false);
			ENTITY::SET_ENTITY_INVINCIBLE(iLocal_135, false);
			ENTITY::SET_ENTITY_HEALTH(iLocal_135, 450, 0);
			PED::SET_PED_MAX_HEALTH(iLocal_135, 450);
			func_118(PLAYER::PLAYER_PED_ID(), -58.1243f, -1095.0555f, 25.4345f, 314.025f, 1);
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
			TASK::TASK_PUT_PED_DIRECTLY_INTO_MELEE(func_820(0), iLocal_135, 0f, -1f, 0f, 0);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_820(0), false, false);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1f);
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 4f, 3);
			func_115(18);
			func_806(500);
			if (!iLocal_93)
			{
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(500);
				}
			}
		}
	}
	else
	{
		func_113("ARM3_BEAT", 7500, 1);
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			__LIB_20__::func_165("Michael", func_820(0), 0, 2);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Siemon", iLocal_135, 0);
		}
		switch (iLocal_48)
		{
			case 0:
				if (!CUTSCENE::IS_CUTSCENE_PLAYING() || iLocal_93 == 1)
				{
					if (PED::IS_PED_PERFORMING_A_COUNTER_ATTACK(PLAYER::PLAYER_PED_ID()))
					{
						if (!func_848("Dodged"))
						{
							__LIB_0__::func_401(28, 1, 0);
							func_842("Dodged", 1);
						}
					}
					else if (func_848("Dodged"))
					{
						func_842("Dodged", 0);
					}
					if (!bLocal_460)
					{
						if (PED::GET_PED_RESET_FLAG(iLocal_135, 330))
						{
							bLocal_460 = true;
						}
					}
					else
					{
						Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
						Var1 = { ENTITY::GET_ENTITY_COORDS(iLocal_135, true) };
						if (((MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var1, true) < 3.5f && Var0.f_2 > (Var1.f_2 - 0.15f)) && Var0.f_2 < (Var1.f_2 + 0.15f)) && !PED::IS_PED_ON_VEHICLE(PLAYER::PLAYER_PED_ID()))
						{
							bLocal_460 = false;
						}
					}
					if (((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -32.008007f, -1102.2522f, 25.434353f, -59.3003f, -1092.6743f, 29.434353f, 15f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -34.02697f, -1115.3788f, 25.422327f, -29.336802f, -1102.2947f, 28.922327f, 5.5f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -40.9341f, -1086.292f, 25.422327f, -25.776924f, -1091.713f, 28.9219f, 10.5f, false, true, 0)) || (iLocal_159 != 0 && INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_159)) && !bLocal_460) || iLocal_93 == 1)
					{
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_135, iLocal_197);
						__LIB_10__::func_7(&iLocal_151);
						__LIB_37__::func_503(&iLocal_152, &iLocal_135, 1);
						if (__LIB_0__::func_405("ARM3_BEATBACK", 0, 0))
						{
							HUD::CLEAR_PRINTS();
						}
						if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(iLocal_135) == iLocal_197)
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_135, joaat("SCRIPT_TASK_COMBAT")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_135, joaat("SCRIPT_TASK_PUT_PED_DIRECTLY_INTO_MELEE")) != 1)
							{
								TASK::CLEAR_PED_TASKS(iLocal_135);
								TASK::CLEAR_PED_SECONDARY_TASK(iLocal_135);
								TASK::TASK_COMBAT_PED(iLocal_135, func_820(0), 0, 16);
							}
						}
						if (!func_848("ARM3HLP_LOCKON"))
						{
							if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
							{
								func_19("ARM3HLP_LOCKON", 1, -1);
							}
						}
						else if (!func_848("ARM3HLP_FIGHT") && !func_848("ARM3HLP_FIGHT_KM"))
						{
							if ((__LIB_0__::func_1("ARM3HLP_LOCKON") && MISC::GET_GAME_TIMER() > iLocal_55) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_135))
							{
								__LIB_30__::func_214(1);
							}
							if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
							{
								if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
								{
									func_19("ARM3HLP_FIGHT_KM", 1, -1);
								}
								else
								{
									func_19("ARM3HLP_FIGHT", 1, -1);
								}
							}
						}
						else if (!func_848("ARM3HLP_FIGHT2") && !func_848("ARM3HLP_FIGHT2_KM"))
						{
							if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
							{
								if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
								{
									func_19("ARM3HLP_FIGHT2_KM", 1, -1);
								}
								else
								{
									func_19("ARM3HLP_FIGHT2", 1, -1);
								}
							}
						}
						else if (!func_848("ARM3HLP_FSTAT"))
						{
							if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
							{
								func_19("ARM3HLP_FSTAT", 1, -1);
							}
						}
						else if (!func_848("ARM3HLP_FSTAT2"))
						{
							if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
							{
								func_19("ARM3HLP_FSTAT2", 1, -1);
							}
						}
						if (SYSTEM::TIMERA() > 2000 && CAM::IS_SCREEN_FADED_IN())
						{
							if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !__LIB_0__::func_75())
							{
								if (!func_848("ARM3_SLAM"))
								{
									func_807("ARM3_SLAM", 7, 1, 0);
								}
								else if (MISC::GET_GAME_TIMER() > iLocal_51)
								{
									if (iLocal_50[0] == -1)
									{
										iLocal_50[0] = 10;
									}
									else if (iLocal_50[1] == -1)
									{
										iLocal_50[1] = 5;
									}
									if (iLocal_50[iLocal_49] > 0)
									{
										if (iLocal_49 == 0)
										{
											func_807("ARM3_FIGHTSI", 7, 0, 0);
										}
										else if (iLocal_49 == 1)
										{
											func_807("ARM3_SLAM2", 7, 0, 0);
										}
										iLocal_51 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(6000, 8000));
										iLocal_50[iLocal_49] = (iLocal_50[iLocal_49] - 1);
									}
									if (iLocal_49 == 0)
									{
										iLocal_49 = 1;
									}
									else if (iLocal_49 == 1)
									{
										iLocal_49 = 0;
									}
								}
							}
						}
						if (CUTSCENE::HAS_CUTSCENE_LOADED())
						{
							ENTITY::SET_ENTITY_INVINCIBLE(iLocal_135, false);
							PED::SET_PED_RESET_FLAG(iLocal_135, 187, true);
							if ((PED::IS_PED_INJURED(iLocal_135) || ENTITY::GET_ENTITY_HEALTH(iLocal_135) < 170) || iLocal_93 == 1)
							{
								iLocal_93 = 0;
								func_115(17);
								if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_BEAT_DOWN"))
								{
									AUDIO::STOP_AUDIO_SCENE("ARM_3_BEAT_DOWN");
								}
								CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_135, "Siemon", 0, __LIB_11__::func_149(18), 3);
								CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_140, "Jimmys_Car", 0, 0, 0);
								__LIB_7__::func_279(1, 1, 1, 0, 0, 0, 0);
								CUTSCENE::START_CUTSCENE(16);
								func_806(0);
								HUD::CLEAR_PRINTS();
								__LIB_6__::func_771();
								VEHICLE::SET_VEHICLE_DOOR_CONTROL(iLocal_140, 0, 0, 0f);
								TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
								TASK::CLEAR_PED_TASKS(iLocal_135);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_135, iLocal_196);
								MISC::CLEAR_AREA(-58.1243f, -1095.0555f, 25.4345f, 100f, true, false, false, false);
								ENTITY::SET_ENTITY_COLLISION(iLocal_140, false, false);
								RECORDING::REPLAY_START_EVENT(4);
								iLocal_85 = 0;
								PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), false, -1, 0);
								if (CAM::IS_SCREEN_FADED_OUT())
								{
									CAM::DO_SCREEN_FADE_IN(500);
								}
								func_14();
							}
						}
						else
						{
							ENTITY::SET_ENTITY_INVINCIBLE(iLocal_135, true);
						}
						SYSTEM::SETTIMERB(0);
					}
					else
					{
						ENTITY::SET_ENTITY_INVINCIBLE(iLocal_135, true);
						if (!(((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -32.008007f, -1102.2522f, 25.434353f, -59.3003f, -1092.6743f, 29.434353f, 15f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -34.02697f, -1115.3788f, 25.422327f, -29.336802f, -1102.2947f, 28.922327f, 5.5f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -40.9341f, -1086.292f, 25.422327f, -25.776924f, -1091.713f, 28.9219f, 10.5f, false, true, 0)) || (iLocal_159 != 0 && INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_159)))
						{
							__LIB_10__::func_7(&iLocal_152);
							__LIB_26__::func_360(&iLocal_151, -58.1243f, -1095.0555f, 25.4345f, 0);
							if (!func_848("ARM3_BEATBACK"))
							{
								__LIB_37__::func_407();
							}
							func_113("ARM3_BEATBACK", 7500, 1);
						}
						if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(iLocal_135) == iLocal_197)
						{
							TASK::CLEAR_PED_TASKS(iLocal_135);
							TASK::CLEAR_PED_SECONDARY_TASK(iLocal_135);
							PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_135, iLocal_196);
						}
						if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_135, -58.611813f, -1093.1742f, 25.422327f, -33.443916f, -1102.3184f, 29.422327f, 12.5f, false, true, 0))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_135, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1)
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_157);
								if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_135, -62.596004f, -1096.7404f, 25.352293f, -59.57545f, -1102.166f, 29.412632f, 5f, false, true, 0))
								{
									TASK::TASK_GO_STRAIGHT_TO_COORD(0, -59.083f, -1097.8198f, 25.4225f, 2f, 20000, 40000f, 0.5f);
								}
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -54.8776f, -1092.9445f, 25.4344f, 2f, 20000, 0.25f, 0, 40000f);
								TASK::TASK_TURN_PED_TO_FACE_COORD(0, ENTITY::GET_ENTITY_COORDS(func_820(0), true), 0);
								if (func_815(sLocal_119))
								{
									TASK::TASK_PLAY_ANIM(0, sLocal_119, "cmon", 1.5f, -4f, -1, 16, 0f, false, false, false);
								}
								TASK::CLOSE_SEQUENCE_TASK(iLocal_157);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_135, iLocal_157);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_157);
							}
						}
						else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_135, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1)
						{
							if (PED::IS_PED_FACING_PED(iLocal_135, PLAYER::PLAYER_PED_ID(), 20f))
							{
								if (func_815(sLocal_119))
								{
									if (((!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_135, sLocal_119, "cmon", 3) || (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_135, sLocal_119, "cmon", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_135, sLocal_119, "cmon") >= 0.8f)) && (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_135, sLocal_119, "areyounotman", 3) || (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_135, sLocal_119, "areyounotman", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_135, sLocal_119, "areyounotman") >= 0.8f))) && (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_135, sLocal_119, "lookathim", 3) || (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_135, sLocal_119, "lookathim", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_135, sLocal_119, "lookathim") >= 0.8f)))
									{
										iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
										if (iVar2 == 0)
										{
											TASK::TASK_PLAY_ANIM(iLocal_135, sLocal_119, "cmon", 4f, -4f, -1, 0, 0f, false, false, false);
											TASK::TASK_LOOK_AT_ENTITY(iLocal_135, func_820(0), -1, 1056, 4);
										}
										else if (iVar2 == 1)
										{
											TASK::TASK_PLAY_ANIM(iLocal_135, sLocal_119, "areyounotman", 4f, -4f, -1, 0, 0f, false, false, false);
											TASK::TASK_LOOK_AT_ENTITY(iLocal_135, func_820(0), -1, 1056, 4);
										}
										else if (iVar2 == 2)
										{
											TASK::TASK_PLAY_ANIM(iLocal_135, sLocal_119, "lookathim", 4f, -4f, -1, 0, 0f, false, false, false);
											TASK::TASK_LOOK_AT_ENTITY(iLocal_135, func_820(0), -1, 1056, 4);
										}
									}
								}
								if (CAM::IS_SCREEN_FADED_IN())
								{
									if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !__LIB_0__::func_75())
									{
										if (MISC::GET_GAME_TIMER() > iLocal_51)
										{
											if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_135, true), true) < 25f)
											{
												iLocal_49 = 1;
												if (iLocal_50[iLocal_49] == -1)
												{
													iLocal_50[iLocal_49] = 5;
												}
												if (iLocal_50[iLocal_49] > 0)
												{
													func_807("ARM3_SIMS", 7, 0, 0);
													iLocal_51 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(10000, 15000));
													iLocal_50[iLocal_49] = (iLocal_50[iLocal_49] - 1);
												}
											}
											else if (__LIB_11__::func_869("ARM3_SIMS"))
											{
												__LIB_6__::func_833();
											}
										}
									}
								}
							}
							else
							{
								if ((ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_135, sLocal_119, "cmon", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_135, sLocal_119, "areyounotman", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_135, sLocal_119, "lookathim", 3))
								{
									TASK::CLEAR_PED_TASKS(iLocal_135);
								}
								if ((TASK::GET_SCRIPT_TASK_STATUS(iLocal_135, joaat("SCRIPT_TASK_TURN_PED_TO_FACE_COORD")) != 0 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_135, joaat("SCRIPT_TASK_TURN_PED_TO_FACE_COORD")) != 1) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_135, joaat("SCRIPT_TASK_TURN_PED_TO_FACE_COORD")) != 2)
								{
									TASK::TASK_TURN_PED_TO_FACE_COORD(iLocal_135, ENTITY::GET_ENTITY_COORDS(func_820(0), true), 1000);
								}
							}
						}
						if (!func_848("WantedLevel"))
						{
							if (SYSTEM::TIMERB() > 20000)
							{
								PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 3, false);
								PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
								func_842("WantedLevel", 1);
							}
						}
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_135, true), true) > 100f)
						{
							iLocal_237 = 19;
							func_821();
						}
					}
				}
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 262 /*INPUT_NEXT_WEAPON*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 261 /*INPUT_PREV_WEAPON*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
				PLAYER::SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE(PLAYER::PLAYER_ID());
				break;
			case 1:
				if (!func_848("ARM3HLP_LOCKON"))
				{
					if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						func_19("ARM3HLP_LOCKON", 1, -1);
					}
				}
				else if (!func_848("ARM3HLP_FIGHT") && !func_848("ARM3HLP_FIGHT_KM"))
				{
					if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
						{
							func_19("ARM3HLP_FIGHT_KM", 1, -1);
						}
						else
						{
							func_19("ARM3HLP_FIGHT", 1, -1);
						}
					}
				}
				else if (!func_848("ARM3HLP_FIGHT2") && !func_848("ARM3HLP_FIGHT2_KM"))
				{
					if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
						{
							func_19("ARM3HLP_FIGHT2_KM", 1, -1);
						}
						else
						{
							func_19("ARM3HLP_FIGHT2", 1, -1);
						}
					}
				}
				else if (!func_848("ARM3HLP_FSTAT"))
				{
					if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						func_19("ARM3HLP_FSTAT", 1, -1);
					}
				}
				else if (!func_848("ARM3HLP_FSTAT2"))
				{
					if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						func_19("ARM3HLP_FSTAT2", 1, -1);
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
				{
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Jimmys_Car", 0))
				{
					VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_140, true);
					ENTITY::SET_ENTITY_COLLISION(iLocal_140, false, false);
					ENTITY::SET_ENTITY_DYNAMIC(iLocal_140, true);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_140, true);
				}
				if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
				{
					CUTSCENE::SET_CUTSCENE_FADE_VALUES(false, false, true, false);
					iLocal_94 = 1;
				}
				if (CUTSCENE::HAS_CUTSCENE_FINISHED())
				{
					if (iLocal_94)
					{
						func_119(-56.83f, -1094.947f, 25.4223f, 100f);
						CAM::DO_SCREEN_FADE_IN(1000);
					}
					iLocal_94 = 0;
					__LIB_7__::func_279(0, 1, 1, 0, 0, 0, 0);
					func_8();
				}
				break;
		}
		if ((PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/) || PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 140 /*INPUT_MELEE_ATTACK_LIGHT*/)) || PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 141 /*INPUT_MELEE_ATTACK_HEAVY*/))
		{
			func_842("FirstPunch", 1);
		}
		if (!func_848("FirstPunch") && SYSTEM::TIMERA() < 3000)
		{
			PED::SET_PED_RESET_FLAG(iLocal_135, 149, true);
			PED::SET_PED_RESET_FLAG(iLocal_135, 69, true);
		}
	}
	if (func_7())
	{
		CUTSCENE::REMOVE_CUTSCENE();
		RECORDING::REPLAY_STOP_EVENT();
		while (CUTSCENE::HAS_CUTSCENE_LOADED())
		{
			func_806(0);
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_BEAT_DOWN"))
		{
			AUDIO::STOP_AUDIO_SCENE("ARM_3_BEAT_DOWN");
		}
		__LIB_5__::func_674(&iLocal_135);
		__LIB_10__::func_7(&iLocal_151);
		__LIB_10__::func_7(&iLocal_152);
		__LIB_8__::func_770(0);
		PLAYER::SET_MAX_WANTED_LEVEL(6);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		iLocal_236++;
	}
}

int func_7()//Position - 0x357D
{
	int iVar0;
	if (iLocal_84 == 1)
	{
		SYSTEM::SETTIMERA(0);
		iLocal_83 = 0;
		iLocal_84 = 0;
		iLocal_48 = 0;
		iLocal_49 = 0;
		iVar0 = 0;
		while (iVar0 < iLocal_50)
		{
			iLocal_50[iVar0] = -1;
			iVar0++;
		}
		iLocal_51 = 0;
		return 1;
	}
	return 0;
}

void func_8()//Position - 0x35C1
{
	iLocal_84 = 1;
}

void func_14()//Position - 0x366C
{
	SYSTEM::SETTIMERA(0);
	iLocal_48++;
}

void func_19(char* sParam0, bool bParam1, int iParam2)//Position - 0x36D8
{
	if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() || (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && MISC::GET_GAME_TIMER() > iLocal_55))
	{
		if (!func_848(sParam0))
		{
			__LIB_0__::func_151(sParam0, iParam2);
			func_842(sParam0, bParam1);
			iLocal_55 = MISC::GET_GAME_TIMER() + 2000;
		}
	}
}

void func_22(int iParam0, var uParam1, int iParam2)//Position - 0x37F3
{
	int iVar0;
	var uVar1;
	struct<50> Var2;
	struct<14> Var3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	Var2 = 12;
	Var2.f_13 = 12;
	Var2.f_26 = 12;
	Var2.f_39 = 9;
	Var2.f_49 = 9;
	iVar4 = ENTITY::GET_ENTITY_MODEL(iParam0);
	__LIB_26__::func_544(iParam0, &Var2, 0, -1);
	__LIB_26__::func_544(iParam0, uParam1, iParam2, -1);
	iVar5 = 0;
	iVar6 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (uParam1->f_13[iVar0] != Var2.f_13[iVar0] || (*uParam1)[iVar0] != Var2[iVar0])
		{
			if (__LIB_0__::func_211(iVar4, __LIB_0__::func_33(iVar0), __LIB_0__::func_350(iParam0, Var2.f_13[iVar0], Var2[iVar0], __LIB_0__::func_33(iVar0)), &uVar1))
			{
				Var3 = { __LIB_35__::func_896(iVar4, 2, uParam1->f_59, -1) };
				uParam1->f_13[2] = Var3.f_3;
				(*uParam1)[2] = Var3.f_4;
				iVar5 = 1;
			}
			if (__LIB_0__::func_212(iVar4, __LIB_0__::func_33(iVar0), __LIB_0__::func_350(iParam0, Var2.f_13[iVar0], Var2[iVar0], __LIB_0__::func_33(iVar0)), &uVar1))
			{
				Var3 = { __LIB_35__::func_896(iVar4, 1, uParam1->f_62, -1) };
				uParam1->f_13[1] = Var3.f_3;
				(*uParam1)[1] = Var3.f_4;
				iVar6 = 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (uParam1->f_39[iVar0] != Var2.f_39[iVar0] || uParam1->f_49[iVar0] != Var2.f_49[iVar0])
		{
			if (__LIB_0__::func_211(iVar4, 14, __LIB_6__::func_766(iParam0, Var2.f_39[iVar0], Var2.f_49[iVar0], iVar0), &uVar1))
			{
				Var3 = { __LIB_35__::func_896(iVar4, 2, uParam1->f_59, -1) };
				uParam1->f_13[2] = Var3.f_3;
				(*uParam1)[2] = Var3.f_4;
				iVar5 = 1;
			}
			if (__LIB_0__::func_212(iVar4, 14, __LIB_6__::func_766(iParam0, Var2.f_39[iVar0], Var2.f_49[iVar0], iVar0), &uVar1))
			{
				Var3 = { __LIB_35__::func_896(iVar4, 1, uParam1->f_62, -1) };
				uParam1->f_13[1] = Var3.f_3;
				(*uParam1)[1] = Var3.f_4;
				iVar6 = 1;
			}
		}
		iVar0++;
	}
	if (iVar6 || iVar5)
	{
		iVar7 = __LIB_0__::func_350(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
		iVar8 = __LIB_0__::func_350(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
		iVar9 = __LIB_0__::func_24(iVar4, iVar8, iVar7);
		if (iVar9 != -99)
		{
			Var3 = { __LIB_35__::func_896(iVar4, 0, iVar9, -1) };
			uParam1->f_13[0] = Var3.f_3;
			(*uParam1)[0] = Var3.f_4;
		}
	}
}

int func_113(char* sParam0, int iParam1, bool bParam2)//Position - 0x1C2EA
{
	if (!func_848(sParam0))
	{
		__LIB_0__::func_210(sParam0, iParam1, 1);
		func_842(sParam0, bParam2);
		return 1;
	}
	return 0;
}

void func_115(int iParam0)//Position - 0x1C32E
{
	iLocal_241 = iParam0;
	func_784();
}

void func_118(int iParam0, struct<3> Param1, float fParam2, int iParam3)//Position - 0x1C377
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (iParam3 == 1)
			{
				PED::SET_PED_COORDS_KEEP_VEHICLE(iParam0, Param1);
			}
			else
			{
				ENTITY::SET_ENTITY_COORDS(iParam0, Param1, true, false, false, true);
			}
			PED::CLEAR_PED_WETNESS(iParam0);
			ENTITY::SET_ENTITY_HEADING(iParam0, fParam2);
		}
	}
}

void func_119(struct<3> Param0, float fParam1)//Position - 0x1C3C1
{
	int iVar0;
	STREAMING::NEW_LOAD_SCENE_START_SPHERE(Param0, fParam1, 0);
	iVar0 = MISC::GET_GAME_TIMER() + 20000;
	while ((STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() && !STREAMING::IS_NEW_LOAD_SCENE_LOADED()) && MISC::GET_GAME_TIMER() < iVar0)
	{
		func_806(0);
	}
	STREAMING::NEW_LOAD_SCENE_STOP();
}

int func_120()//Position - 0x1C407
{
	if (iLocal_91 == 1)
	{
		iLocal_91 = 0;
		return 1;
	}
	return 0;
}

void func_121(int iParam0, bool bParam1)//Position - 0x1C420
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			if (bParam1)
			{
				if (!ENTITY::IS_ENTITY_VISIBLE(iParam0))
				{
					ENTITY::SET_ENTITY_VISIBLE(iParam0, true, false);
				}
			}
			else if (ENTITY::IS_ENTITY_VISIBLE(iParam0))
			{
				ENTITY::SET_ENTITY_VISIBLE(iParam0, false, false);
			}
		}
	}
}

void func_210(int iParam0, bool bParam1, int iParam2)//Position - 0x21DC1
{
	PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, iParam2);
	bLocal_453 = bParam1;
}

int func_275()//Position - 0x28A7B
{
	if (iLocal_83 == 0)
	{
		SYSTEM::SETTIMERA(0);
		iLocal_83 = 1;
		return 1;
	}
	return 0;
}

void func_276()//Position - 0x28A99
{
	struct<3> Var0;
	struct<3> Var1;
	int iVar2;
	if (func_275())
	{
		__LIB_42__::func_873(5, "stageBeatDown", 1, 0, 0, 1);
		func_210(PLAYER::PLAYER_ID(), 0, 2048);
		iLocal_85 = 0;
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_166))
		{
			iLocal_166 = OBJECT::CREATE_OBJECT(WEAPON::GET_WEAPONTYPE_MODEL(joaat("WEAPON_PISTOL")), Local_105, true, true, false);
		}
		ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_166, uLocal_248[0], PED::GET_PED_BONE_INDEX(uLocal_248[0], 28422), Local_101, Local_101, false, false, false, false, 2, true, 0);
		__LIB_5__::func_674(&iLocal_135);
		while (!__LIB_20__::func_621(&iLocal_135, 18, -56.436f, -1098.8176f, 25.4345f, 31.149f, 1))
		{
			func_806(0);
		}
		PED::SET_PED_SUFFERS_CRITICAL_HITS(iLocal_135, false);
		ENTITY::SET_ENTITY_HEALTH(iLocal_135, 400, 0);
		PED::SET_PED_MAX_HEALTH(iLocal_135, 400);
		TASK::TASK_LOOK_AT_ENTITY(iLocal_135, iLocal_140, 3000, 0, 2);
		ENTITY::SET_ENTITY_INVINCIBLE(iLocal_135, true);
		func_121(iLocal_135, 0);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_11__::func_149(18));
		__LIB_0__::func_203(&uLocal_288, 8, iLocal_135, "SIMEON", 0, 1);
		if (!func_848("WindowSmashed"))
		{
			AUDIO::SET_PORTAL_SETTINGS_OVERRIDE("V_CARSHOWROOM_PS_WINDOW_UNBROKEN", "V_CARSHOWROOM_PS_WINDOW_BROKEN");
			func_842("WindowSmashed", 1);
		}
		VEHICLE::SET_VEHICLE_DAMAGE(iLocal_140, -0.84f, 2.21f, 0.22f, 100f, 400f, true);
		VEHICLE::SET_VEHICLE_DAMAGE(iLocal_140, 0.67f, 2.12f, -0.06f, 100f, 400f, true);
		VEHICLE::SET_VEHICLE_DAMAGE(iLocal_140, 0.05f, 1.97f, 0.2f, 100f, 400f, true);
		ENTITY::SET_ENTITY_INVINCIBLE(iLocal_140, true);
		CUTSCENE::REQUEST_CUTSCENE("Armenian_3_mcs_8", 4);
		RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 4f, 3);
		CAM::DISABLE_CINEMATIC_BONNET_CAMERA_THIS_UPDATE();
		if (func_120())
		{
			func_118(PLAYER::PLAYER_PED_ID(), -56.13f, -1097.6f, 25.16f, 0f, 1);
			if (!bLocal_92)
			{
				func_119(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1101004800);
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING((__LIB_0__::func_670(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -56.13f, -1097.6f, 25.16f) - ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID())));
			iLocal_235 = OBJECT::GET_RAYFIRE_MAP_OBJECT(-56.13f, -1097.6f, 25.16f, 10f, "DES_Showroom");
			while (!OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_235))
			{
				iLocal_235 = OBJECT::GET_RAYFIRE_MAP_OBJECT(-56.13f, -1097.6f, 25.16f, 10f, "DES_Showroom");
				func_806(0);
			}
			if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_235))
			{
				if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_235) != 10)
				{
					OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_235, 9);
				}
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1f);
			func_115(18);
		}
	}
	else
	{
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			__LIB_20__::func_165("Franklin", func_820(1), 0, 2);
			__LIB_20__::func_165("Michael", func_820(0), 0, 2);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Siemon", iLocal_135, 0);
		}
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("M_Complications", 0);
		switch (iLocal_48)
		{
			case 0:
				func_210(PLAYER::PLAYER_ID(), 1, 0);
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_140, Vector(26.58f, -1097.347f, -57.3905f) + Vector(0f, 1.23f, 2.08f), false, false, true);
				ENTITY::SET_ENTITY_ROTATION(iLocal_140, -8.8082f, 0.1836f, -58.895f, 2, true);
				__LIB_11__::func_811(0, 1);
				__LIB_0__::func_503(115, 1);
				if (__LIB_20__::func_728() != 0)
				{
					__LIB_35__::func_983(&uLocal_248, 0);
					__LIB_42__::func_146(&uLocal_248, 1, 1, 1);
				}
				PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
				Var0 = { Local_101 };
				Var1 = { Local_101 };
				iVar2 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", true);
				iLocal_187 = PED::CREATE_SYNCHRONIZED_SCENE(Var0, Var1, 2);
				PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_187, iLocal_140, 0);
				TASK::CLEAR_PED_TASKS(func_820(0));
				PED::SET_PED_INTO_VEHICLE(func_820(0), iLocal_140, 2);
				TASK::TASK_PLAY_ANIM(func_820(0), sLocal_123, "_leadin_mic", 1000f, -4f, -1, 2, 0f, false, false, false);
				PED::PLAY_FACIAL_ANIM(func_820(0), "_leadin_Mic_facial", sLocal_123);
				TASK::CLEAR_PED_TASKS(func_820(1));
				TASK::CLEAR_PED_TASKS(func_820(1));
				TASK::TASK_PLAY_ANIM(func_820(1), sLocal_123, "_leadin_fra", 1000f, -4f, -1, 2, 0f, false, false, false);
				PED::PLAY_FACIAL_ANIM(func_820(1), "_leadin_Fra_facial", sLocal_123);
				CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iVar2, iLocal_187, "_leadin_cam", sLocal_123);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				func_807("ARM3_SMASH1", 7, 1, 0);
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(500);
				}
				func_14();
				break;
			case 1:
				__LIB_6__::func_762(iLocal_140, 1f, 1, 0f, 0, 1, 0);
				func_210(PLAYER::PLAYER_ID(), 0, 0);
				if (ENTITY::GET_ENTITY_UPRIGHT_VALUE(iLocal_140) < 0.1f)
				{
					ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_140, 5, -ENTITY::GET_ENTITY_ROTATION_VELOCITY(iLocal_140), Local_101, 0, true, false, false, false, true);
				}
				if ((!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_187) || (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_187) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_187) >= 0.7f)) && __LIB_0__::func_90())
				{
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(6f, 0f, 3);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_248[1], "Franklin", 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_135, "Siemon", 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_140, "Jimmys_Car", 0, 0, 0);
					VEHICLE::SET_VEHICLE_DOOR_CONTROL(iLocal_140, 0, 0, 0f);
					__LIB_7__::func_279(1, 1, 1, 0, 0, 0, 0);
					CUTSCENE::START_CUTSCENE(1);
					func_806(0);
					VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_140, false, true, false);
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					func_121(iLocal_135, 1);
					MISC::CLEAR_AREA(-36.6411f, -1102.1914f, 26.3443f, 30f, true, false, false, false);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_142[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_142[0], false))
					{
						__LIB_11__::func_102(iLocal_142[0], -36.6411f, -1102.1914f, 26.3443f, 154.2468f);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_142[1]) && !ENTITY::IS_ENTITY_DEAD(iLocal_142[1], false))
					{
						__LIB_11__::func_102(iLocal_142[1], -41.7113f, -1100.0415f, 26.0671f, 138.7067f);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_142[2]) && !ENTITY::IS_ENTITY_DEAD(iLocal_142[2], false))
					{
						__LIB_11__::func_102(iLocal_142[2], -46.3951f, -1097.7783f, 26.3222f, 108.3411f);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_142[3]) && !ENTITY::IS_ENTITY_DEAD(iLocal_142[3], false))
					{
						__LIB_11__::func_102(iLocal_142[3], -50.0989f, -1094.534f, 26.0671f, 88.9621f);
					}
					RECORDING::REPLAY_START_EVENT(4);
					__LIB_11__::func_108(&iLocal_166);
					func_14();
				}
				break;
			case 2:
				PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_142[3]) && !ENTITY::IS_ENTITY_DEAD(iLocal_142[3], false))
				{
					VEHICLE::SET_FORCE_HD_VEHICLE(iLocal_142[3], true);
				}
				if (!func_848("SwitchFX[Armenian_3_mcs_8]"))
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > SYSTEM::ROUND((12.866668f * 1000f)) && CUTSCENE::HAS_CUTSCENE_CUT_THIS_FRAME())
					{
						GRAPHICS::ANIMPOSTFX_PLAY("SwitchSceneMichael", 0, false);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Hit_1", "LONG_PLAYER_SWITCH_SOUNDS", true);
						func_842("SwitchFX[Armenian_3_mcs_8]", 1);
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Siemon", joaat("IG_SiemonYetarian")))
				{
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_135, iLocal_197);
					PED::SET_PED_AS_ENEMY(iLocal_135, true);
					TASK::TASK_PUT_PED_DIRECTLY_INTO_MELEE(iLocal_135, func_820(0), 0.5f, -1f, 0f, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_135, false, false);
					ENTITY::SET_ENTITY_INVINCIBLE(iLocal_135, false);
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Jimmys_Car", 0))
				{
					VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_140, true);
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
				{
					MISC::CLEAR_AREA_OF_COPS(-57.6017f, -1095.0913f, 25.4343f, 500f, 0);
					MISC::ENABLE_DISPATCH_SERVICE(1, false);
					MISC::ENABLE_DISPATCH_SERVICE(10, false);
					MISC::ENABLE_DISPATCH_SERVICE(9, false);
					MISC::ENABLE_DISPATCH_SERVICE(2, false);
					MISC::ENABLE_DISPATCH_SERVICE(3, false);
					MISC::ENABLE_DISPATCH_SERVICE(4, false);
					MISC::ENABLE_DISPATCH_SERVICE(5, false);
					PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), false);
					PED::SET_CREATE_RANDOM_COPS(false);
					TASK::TASK_PUT_PED_DIRECTLY_INTO_MELEE(func_820(0), iLocal_135, 0f, -1f, 0f, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_820(0), false, false);
					if (iLocal_66)
					{
						CAM::SET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL(iLocal_65);
						CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(0, iLocal_67);
						iLocal_66 = 0;
					}
				}
				if (CUTSCENE::HAS_CUTSCENE_FINISHED())
				{
					if (iLocal_66)
					{
						CAM::SET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL(iLocal_65);
						CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(0, iLocal_67);
						iLocal_66 = 0;
					}
					__LIB_7__::func_279(0, 1, 1, 0, 0, 0, 0);
					func_210(PLAYER::PLAYER_ID(), 1, 0);
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
					func_113("ARM3_BEAT", 7500, 1);
					func_19("ARM3HLP_LOCKON", 1, -1);
					func_14();
				}
				break;
			case 3:
				if (CAM::IS_GAMEPLAY_CAM_RENDERING() && !CAM::IS_INTERPOLATING_FROM_SCRIPT_CAMS())
				{
					func_8();
				}
				break;
		}
		if (iLocal_48 < 2)
		{
			CAM::DISABLE_CINEMATIC_BONNET_CAMERA_THIS_UPDATE();
		}
		PED::SET_PED_RESET_FLAG(iLocal_135, 149, true);
		PED::SET_PED_RESET_FLAG(iLocal_135, 69, true);
		PED::SET_PED_COMBAT_MOVEMENT(iLocal_135, 0);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
	}
	if (func_7())
	{
		RECORDING::REPLAY_STOP_EVENT();
		if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
		{
			STREAMING::NEW_LOAD_SCENE_STOP();
		}
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		__LIB_7__::func_279(0, 1, 1, 0, 0, 0, 0);
		CUTSCENE::REMOVE_CUTSCENE();
		while (CUTSCENE::HAS_CUTSCENE_LOADED())
		{
			func_806(0);
		}
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_140))
		{
			VEHICLE::SKIP_TO_END_AND_STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_140);
		}
		ENTITY::SET_ENTITY_INVINCIBLE(iLocal_140, false);
		__LIB_10__::func_7(&iLocal_152);
		__LIB_11__::func_108(&iLocal_166);
		iLocal_236++;
	}
}

void func_283()//Position - 0x295F8
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	bool bVar3;
	if (func_275())
	{
		__LIB_42__::func_873(4, "stageRammingSpeed", 0, 0, 0, 1);
		iLocal_100 = 0;
		__LIB_8__::func_770(1);
		__LIB_9__::func_981(&uLocal_223, 0, 0);
		iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-49.9775f, -1097.2866f, 25.4223f, "v_carshowroom");
		if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar0, "csr_beforeMission"))
		{
			INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar0, "csr_beforeMission");
		}
		if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar0, "csr_afterMissionA"))
		{
			INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar0, "csr_afterMissionA");
		}
		if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar0, "csr_afterMissionB"))
		{
			INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar0, "csr_afterMissionB");
		}
		if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar0, "csr_inMission"))
		{
			INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iVar0, "csr_inMission");
		}
		__LIB_18__::func_191(179, 1, 0, 1, 0);
		func_210(PLAYER::PLAYER_ID(), 1, 0);
		AUDIO::STOP_PED_SPEAKING(func_820(1), true);
		AUDIO::STOP_PED_SPEAKING(func_820(0), true);
		STREAMING::REQUEST_CLIP_SET("clipset@missarmenian3@franklin_driving");
		while (!STREAMING::HAS_CLIP_SET_LOADED("clipset@missarmenian3@franklin_driving"))
		{
			STREAMING::REQUEST_CLIP_SET("clipset@missarmenian3@franklin_driving");
			__LIB_10__::func_691();
			func_806(0);
		}
		PED::SET_PED_IN_VEHICLE_CONTEXT(PLAYER::PLAYER_PED_ID(), MISC::GET_HASH_KEY("MISS_ARMENIAN3_FRANKLIN_TENSE"));
		iLocal_85 = 1;
		ENTITY::SET_ENTITY_PROOFS(func_820(0), true, true, true, true, true, true, false, false);
		PED::SET_PED_CONFIG_FLAG(func_820(0), 118, false);
		PED::SET_PED_CONFIG_FLAG(func_820(0), 208, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_820(0), true);
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
		AUDIO::FORCE_USE_AUDIO_GAME_OBJECT(iLocal_140, "BJXL_ARMENIAN_3");
		VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_140, true, true, false);
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_166))
		{
			iLocal_166 = OBJECT::CREATE_OBJECT(WEAPON::GET_WEAPONTYPE_MODEL(joaat("WEAPON_PISTOL")), Local_105, true, true, false);
		}
		ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_166, uLocal_248[0], PED::GET_PED_BONE_INDEX(uLocal_248[0], 28422), Local_101, Local_101, false, false, false, false, 2, true, 0);
		while (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(uLocal_248[0]))
		{
			func_806(0);
		}
		if (!ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_248[0], sLocal_115, "michaelappears_loop_michael", 3))
		{
			TASK::TASK_PLAY_ANIM(uLocal_248[0], sLocal_115, "michaelappears_loop_michael", 8f, -4f, -1, 2, 0f, false, false, false);
		}
		__LIB_0__::func_203(&uLocal_288, 1, uLocal_248[0], "MICHAEL", 0, 1);
		__LIB_37__::func_407();
		func_842("ARM3_GUN", 1);
		func_842("ARM3_GUNA", 1);
		func_842("ARM3_GUNB", 1);
		__LIB_10__::func_7(&iLocal_151);
		__LIB_26__::func_360(&iLocal_151, Local_112, 0);
		iLocal_53 = (MISC::GET_GAME_TIMER() + 120000);
		CUTSCENE::REQUEST_CUTSCENE("Armenian_3_mcs_8", 8);
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_RAM_DEALERSHIP"))
		{
			AUDIO::START_AUDIO_SCENE("ARM_3_RAM_DEALERSHIP");
		}
		func_328(16);
		func_115(14);
		VEHICLE::SET_VEHICLE_BRAKE_LIGHTS(iLocal_140, false);
		if (!iLocal_66)
		{
			iLocal_65 = CAM::GET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL();
			iLocal_67 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0);
			iLocal_66 = 1;
		}
		CAM::DISABLE_CINEMATIC_BONNET_CAMERA_THIS_UPDATE();
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		__LIB_7__::func_279(0, 1, 1, 0, 0, 0, 0);
		if (func_120())
		{
			func_115(15);
			AUDIO::SET_VEHICLE_RADIO_ENABLED(iLocal_140, false);
			AUDIO::SET_USER_RADIO_CONTROL_ENABLED(false);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_248[0]);
			PED::SET_PED_INTO_VEHICLE(uLocal_248[0], iLocal_140, 2);
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_248[0], sLocal_115, "michaelappears_loop_michael", 3))
			{
				TASK::TASK_PLAY_ANIM(uLocal_248[0], sLocal_115, "michaelappears_loop_michael", 8f, -4f, -1, 2, 0f, false, false, false);
			}
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_140, -1);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_140) && !ENTITY::IS_ENTITY_DEAD(iLocal_140, false))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_140, 4);
				__LIB_11__::func_102(iLocal_140, -72.6144f, -1106.4908f, 25.0423f, 299.8838f);
			}
			MISC::CLEAR_AREA(-59.8f, -1098.78f, 24.92f, 100f, true, false, false, false);
			if (!bLocal_92)
			{
				func_119(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1101004800);
			}
			INTERIOR::REFRESH_INTERIOR(iVar0);
			iLocal_87 = 0;
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING((__LIB_0__::func_670(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -56.13f, -1097.6f, 25.16f) - ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID())));
			iLocal_235 = OBJECT::GET_RAYFIRE_MAP_OBJECT(-56.13f, -1097.6f, 25.16f, 10f, "DES_Showroom");
			while (!OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_235))
			{
				iLocal_235 = OBJECT::GET_RAYFIRE_MAP_OBJECT(-56.13f, -1097.6f, 25.16f, 10f, "DES_Showroom");
				func_806(0);
			}
			if (!OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_235))
			{
				if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_235) != 3)
				{
					OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_235, 2);
				}
			}
			ENTITY::SET_ENTITY_COORDS(iLocal_140, -148.7664f, -1149.9998f, 23.1124f, true, false, false, true);
			ENTITY::SET_ENTITY_ROTATION(iLocal_140, 3.385f, 2.9552f, -88.1208f, 2, true);
			Var1 = { ENTITY::GET_ENTITY_COORDS(iLocal_140, true) };
			MISC::CLEAR_AREA(Var1, 15f, true, false, false, false);
			MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(Var1.f_0, Var1.f_1, 30f, -55.8188f, -1096.4149f, 20f, 20f, false, false, false, false, false, 0, 0);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-57.644516f, -1097.634f, 35.42235f, -145.06671f, -1156.5638f, 23.026037f, 20f, false, false, true);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING((__LIB_0__::func_670(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -56.13f, -1097.6f, 25.16f) - ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID())));
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1f);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(500);
			}
		}
	}
	else
	{
		if (SYSTEM::TIMERA() < 100)
		{
			VEHICLE::SET_VEHICLE_BRAKE_LIGHTS(iLocal_140, false);
		}
		func_113("ARM3_RAM1", 4000, 1);
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			__LIB_20__::func_165("Franklin", func_820(1), 0, 2);
			__LIB_20__::func_165("Michael", func_820(0), 0, 2);
		}
		if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_235))
		{
			if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_235) != 5)
			{
				if (!func_848("rfShowroomCrash1"))
				{
					OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_235, 4);
					func_842("rfShowroomCrash1", 1);
				}
			}
			else
			{
				func_842("rfShowroomCrash1", 0);
			}
		}
		else
		{
			iLocal_235 = OBJECT::GET_RAYFIRE_MAP_OBJECT(-56.13f, -1097.6f, 25.16f, 10f, "DES_Showroom");
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_167))
		{
			iLocal_167 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_showroom_glass_1b"), -59.87f, -1098.84f, 27.2f, true, true, false);
			ENTITY::SET_ENTITY_ROTATION(iLocal_167, 0f, 0f, 121.5f, 2, true);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_167, true);
		}
		if (iLocal_159 != 0)
		{
			INTERIOR::SET_INTERIOR_IN_USE(iLocal_159);
		}
		if ((MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -60.15f, -1098.69f, 25.44f, true) < 100f && (!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0)) && !__LIB_0__::func_75())
		{
			if (MISC::GET_GAME_TIMER() > iLocal_51)
			{
				if (iLocal_49 == 0)
				{
					func_312("ARM3_RAM", "ARM3_RAM_1", 7, 1);
					iLocal_49++;
				}
				else if (iLocal_49 == 1)
				{
					func_312("ARM3_RAM", "ARM3_RAM_2", 7, 1);
					iLocal_49++;
				}
				else if (iLocal_49 == 2)
				{
					func_312("ARM3_RAM", "ARM3_RAM_3", 7, 1);
					iLocal_49++;
				}
				iLocal_51 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(20000, 25000));
			}
		}
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_140, false))
		{
			if (!HUD::DOES_BLIP_EXIST(iLocal_151))
			{
				HUD::CLEAR_PRINTS();
				func_113("ARM3_RAM1", 7500, 0);
				__LIB_10__::func_7(&iLocal_150);
				__LIB_26__::func_360(&iLocal_151, Local_112, 0);
			}
		}
		else if (!HUD::DOES_BLIP_EXIST(iLocal_150))
		{
			HUD::CLEAR_PRINTS();
			func_113("ARM3_CAR2", 7500, 1);
			__LIB_10__::func_7(&iLocal_151);
			__LIB_32__::func_665(&iLocal_150, &iLocal_140, 0);
		}
		fLocal_68 = fLocal_69;
		fLocal_69 = MISC::GET_DISTANCE_BETWEEN_COORDS(-56.71602f, -1097.1697f, 25.4223f, ENTITY::GET_ENTITY_COORDS(iLocal_140, true), true);
		if (ENTITY::GET_ENTITY_SPEED(iLocal_140) > 5f)
		{
			ENTITY::SET_ENTITY_COLLISION(iLocal_167, false, false);
		}
		else
		{
			ENTITY::SET_ENTITY_COLLISION(iLocal_167, true, false);
		}
		if ((((((OBJECT::IS_POINT_IN_ANGLED_AREA(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_140, -1f, 2.2f, -0.25f), -59.76477f, -1098.7988f, 25.42232f, -53.614487f, -1095.079f, 28.922344f, 5.25f, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_140, 1f, 2.2f, -0.25f), -59.76477f, -1098.7988f, 25.42232f, -53.614487f, -1095.079f, 28.922344f, 5.25f, false, true)) || OBJECT::IS_POINT_IN_ANGLED_AREA(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_140, -1f, -2.3f, -0.25f), -59.76477f, -1098.7988f, 25.42232f, -53.614487f, -1095.079f, 28.922344f, 5.25f, false, true)) || OBJECT::IS_POINT_IN_ANGLED_AREA(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_140, 1f, -2.3f, -0.25f), -59.76477f, -1098.7988f, 25.42232f, -53.614487f, -1095.079f, 28.922344f, 5.25f, false, true)) && ENTITY::GET_ENTITY_SPEED(iLocal_140) > 5f) && fLocal_69 < fLocal_68) || (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -32.008007f, -1102.2522f, 25.434353f, -59.3003f, -1092.6743f, 29.434353f, 15f, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -61.38735f, -1103.479f, 24.859724f, -58.61892f, -1095.7994f, 29.434353f, 10f, false, true, 0)))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_140, false))
			{
				if (func_307(10f, 1))
				{
					__LIB_18__::func_191(178, 1, 0, 1, 0);
					func_115(16);
					if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_235))
					{
						if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_235) == 5)
						{
							OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_235, 6);
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_167))
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_167, ENTITY::GET_ENTITY_COORDS(iLocal_167, true) - Vector(10f, 0f, 0f), true, false, false, true);
					}
					if (!func_848("WindowSmashed"))
					{
						AUDIO::SET_PORTAL_SETTINGS_OVERRIDE("V_CARSHOWROOM_PS_WINDOW_UNBROKEN", "V_CARSHOWROOM_PS_WINDOW_BROKEN");
						func_842("WindowSmashed", 1);
					}
					AUDIO::PLAY_SOUND_FRONTEND(-1, "ARM_3_CAR_GLASS_CRASH", 0, true);
					PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 500, 256);
					iVar2 = MISC::GET_GAME_TIMER() + 500;
					while ((!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_140, -54.038837f, -1098.5023f, 25.422327f, -57.81364f, -1091.9712f, 28.422327f, 4f, false, true, 0) && iVar2 > MISC::GET_GAME_TIMER()) && ENTITY::GET_ENTITY_SPEED(iLocal_140) > 1f)
					{
						PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 30 /*INPUT_MOVE_LR*/, true);
						PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 31 /*INPUT_MOVE_UD*/, true);
						PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/, true);
						PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 59 /*INPUT_VEH_MOVE_LR*/, true);
						PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 60 /*INPUT_VEH_MOVE_UD*/, true);
						if (iVar2 < MISC::GET_GAME_TIMER())
						{
						}
						CAM::DISABLE_CINEMATIC_BONNET_CAMERA_THIS_UPDATE();
						func_806(0);
					}
					func_210(PLAYER::PLAYER_ID(), 0, 0);
					func_8();
				}
			}
		}
		else
		{
			func_285(&uLocal_223, -55.2f, -1095.8f, 27.3f, "ARM3HLP_WINDOW", joaat("VEHICLE_HIGH_ZOOM_HINT_HELPER"), 1, 1, 1);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 0 /*INPUT_NEXT_CAMERA*/, true);
			bVar3 = false;
			if (iLocal_100)
			{
				if ((!PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 0 /*INPUT_NEXT_CAMERA*/) && !__LIB_0__::func_190()) && !CAM::IS_GAMEPLAY_HINT_ACTIVE())
				{
					bVar3 = true;
					iLocal_100 = 0;
				}
				if (__LIB_0__::func_190() || CAM::IS_GAMEPLAY_HINT_ACTIVE())
				{
					iLocal_100 = 0;
				}
			}
			if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 0 /*INPUT_NEXT_CAMERA*/))
			{
				iLocal_100 = 1;
			}
			if (bVar3)
			{
				if (iLocal_65 == 4)
				{
					CAM::SET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL(1);
				}
				else if (iLocal_65 == 0)
				{
					CAM::SET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL(1);
				}
				else if (iLocal_65 == 1)
				{
					if (bLocal_64)
					{
						CAM::SET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL(2);
					}
					else
					{
						CAM::SET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL(0);
					}
					bLocal_64 = !bLocal_64;
				}
				else if (iLocal_65 == 2)
				{
					CAM::SET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL(1);
				}
				iLocal_65 = CAM::GET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL();
			}
		}
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_RAM_DEALERSHIP"))
			{
				AUDIO::STOP_AUDIO_SCENE("ARM_3_RAM_DEALERSHIP");
			}
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_WINDOW_FOCUS_CAM"))
			{
				AUDIO::START_AUDIO_SCENE("ARM_3_WINDOW_FOCUS_CAM");
			}
		}
		else
		{
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_RAM_DEALERSHIP"))
			{
				AUDIO::START_AUDIO_SCENE("ARM_3_RAM_DEALERSHIP");
			}
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_WINDOW_FOCUS_CAM"))
			{
				AUDIO::STOP_AUDIO_SCENE("ARM_3_WINDOW_FOCUS_CAM");
			}
		}
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 23 /*INPUT_ENTER*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 69 /*INPUT_VEH_ATTACK*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 70 /*INPUT_VEH_ATTACK2*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 262 /*INPUT_NEXT_WEAPON*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 261 /*INPUT_PREV_WEAPON*/, true);
		CAM::DISABLE_CINEMATIC_BONNET_CAMERA_THIS_UPDATE();
		if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -52.025787f, -1095.3108f, 32.230316f, 28f, 28f, 8f, false, true, 0))
		{
			if (MISC::GET_GAME_TIMER() > iLocal_53 || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -60.15f, -1098.69f, 25.44f, true) > 200f)
			{
				iLocal_237 = 18;
				func_821();
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_140) && !ENTITY::IS_ENTITY_DEAD(iLocal_140, false))
		{
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_248[0]) && !ENTITY::IS_ENTITY_DEAD(uLocal_248[0], false))
			{
				if (!PED::IS_PED_SITTING_IN_VEHICLE(uLocal_248[0], iLocal_140))
				{
					iLocal_237 = 20;
					func_821();
				}
			}
		}
	}
	if (func_7())
	{
		__LIB_9__::func_981(&uLocal_223, 0, 0);
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_RAM_DEALERSHIP"))
		{
			AUDIO::STOP_AUDIO_SCENE("ARM_3_RAM_DEALERSHIP");
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_WINDOW_FOCUS_CAM"))
		{
			AUDIO::STOP_AUDIO_SCENE("ARM_3_WINDOW_FOCUS_CAM");
		}
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
		if (CAM::DOES_CAM_EXIST(iLocal_156))
		{
			CAM::SET_CAM_ACTIVE(iLocal_156, false);
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		}
		if (!CAM::DOES_CAM_EXIST(iLocal_155))
		{
			iLocal_155 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);
		}
		if (CAM::DOES_CAM_EXIST(iLocal_155))
		{
			CAM::SET_CAM_ACTIVE(iLocal_155, true);
		}
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		__LIB_37__::func_407();
		if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_140, false))
		{
			PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_140, -1);
		}
		STREAMING::REMOVE_CLIP_SET("clipset@missarmenian3@franklin_driving");
		__LIB_10__::func_7(&iLocal_150);
		__LIB_10__::func_7(&iLocal_151);
		__LIB_11__::func_108(&iLocal_167);
		iLocal_236++;
	}
}

void func_285(var uParam0, struct<3> Param1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)//Position - 0x2A2E2
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
	{
		__LIB_9__::func_981(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	__LIB_11__::func_807(uParam0, Param1, sParam2, iParam3, bParam4, iParam5, bParam6);
}

bool func_307(float fParam0, int iParam1)//Position - 0x2B1BB
{
	if (__LIB_0__::func_398(1, 0, 1) == 1)
	{
		if (fParam0 != 0f)
		{
			MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), fParam0, true, true, false, false);
		}
		__LIB_37__::func_407();
		__LIB_7__::func_279(1, 1, iParam1, 0, 0, 0, 0);
	}
	return __LIB_0__::func_398(1, 0, 1);
}

void func_312(char* sParam0, char* sParam1, int iParam2, bool bParam3)//Position - 0x2B3DF
{
	if (!func_848(sParam1))
	{
		while (!__LIB_36__::func_30(&uLocal_288, cLocal_242, sParam0, sParam1, iParam2, 0, 0))
		{
			if (__LIB_0__::func_75())
			{
				__LIB_6__::func_771();
			}
			func_806(0);
		}
		func_842(sParam1, bParam3);
	}
}

void func_328(int iParam0)//Position - 0x2BB6C
{
	iLocal_240 = iParam0;
	func_784();
}

void func_330()//Position - 0x2BC57
{
	struct<3> Var0;
	float fVar1;
	struct<3> Var2;
	if (func_275())
	{
		func_210(PLAYER::PLAYER_ID(), 0, 0);
		CUTSCENE::REQUEST_CUTSCENE("Armenian_3_mcs_6", 8);
		func_115(12);
		CAM::DISABLE_CINEMATIC_BONNET_CAMERA_THIS_UPDATE();
		if (func_120())
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_140, -1);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_140) && !ENTITY::IS_ENTITY_DEAD(iLocal_140, false))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_140, 4);
				__LIB_11__::func_102(iLocal_140, -148.7715f, -1149.9026f, 23.2067f, 271.8071f);
			}
			if (!bLocal_92)
			{
				func_119(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1101004800);
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1f);
			func_115(13);
		}
	}
	else
	{
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			__LIB_20__::func_165("Franklin", func_820(1), 0, 2);
			__LIB_20__::func_165("Michael", func_820(0), 0, 2);
		}
		if (__LIB_6__::func_841(1000))
		{
			HUD::CLEAR_PRINTS();
			func_8();
		}
		switch (iLocal_48)
		{
			case 0:
				if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					STREAMING::NEW_LOAD_SCENE_START_SPHERE(ENTITY::GET_ENTITY_COORDS(iLocal_140, true), 200f, 0);
				}
				if (__LIB_10__::func_0("Armenian_3_mcs_6"))
				{
					if (CAM::DOES_CAM_EXIST(iLocal_156))
					{
						CAM::DETACH_CAM(iLocal_156);
					}
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Franklin", 0, 0, 384);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_248[0], "Michael", 0, 0, 384);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_140, "Jimmys_Car", 0, 0, 0);
					__LIB_7__::func_279(1, 1, 1, 0, 0, 0, 0);
					Var0 = { -148.7715f, -1149.9026f, 23.2067f };
					fVar1 = 271.8071f;
					if (ENTITY::IS_ENTITY_AT_COORD(iLocal_140, -91.7239f, -1180.303f, 25.3327f, 3f, 3f, 3f, false, true, 0))
					{
						Var0 = { -91.7239f, -1180.303f, 25.3327f };
						fVar1 = 3.5979f;
					}
					if (ENTITY::IS_ENTITY_AT_COORD(iLocal_140, -64.8446f, -1130.0518f, 24.7219f, 3f, 3f, 3f, false, true, 0))
					{
						Var0 = { -64.8446f, -1130.0518f, 24.7219f };
						fVar1 = 92.7692f;
					}
					if (ENTITY::IS_ENTITY_AT_COORD(iLocal_140, -97.2467f, -1087.589f, 25.2988f, 3f, 3f, 3f, false, true, 0))
					{
						Var0 = { -97.2467f, -1087.589f, 25.2988f };
						fVar1 = 161.1787f;
					}
					CUTSCENE::SET_CUTSCENE_TRIGGER_AREA(Local_101, 0f, (fVar1 - 270f), 0f);
					CUTSCENE::START_CUTSCENE_AT_COORDS(Var0 + Vector(1f, 0f, 0f), 2048);
					func_806(0);
					iLocal_456 = 0;
					__LIB_10__::func_691();
					PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
					MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_140, true), 25f, true, false, false, false);
					func_121(iLocal_166, 0);
					__LIB_37__::func_407();
					GRAPHICS::SET_PARTICLE_FX_CAM_INSIDE_NONPLAYER_VEHICLE(iLocal_140, true);
					iLocal_85 = 0;
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(500);
					}
					RECORDING::REPLAY_START_EVENT(4);
					func_14();
				}
				break;
			case 1:
				VEHICLE::SET_FORCE_HD_VEHICLE(iLocal_140, true);
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					if (!func_848("ARMENIAN_3_MCS_6_SHOT_1"))
					{
						GRAPHICS::SET_PARTICLE_FX_CAM_INSIDE_NONPLAYER_VEHICLE(iLocal_140, true);
						func_842("ARMENIAN_3_MCS_6_SHOT_1", 1);
					}
					else if (!func_848("ARMENIAN_3_MCS_6_SHOT_2"))
					{
						if (CUTSCENE::GET_CUTSCENE_TIME() > SYSTEM::ROUND((4.799f * 1000f)) && CUTSCENE::HAS_CUTSCENE_CUT_THIS_FRAME())
						{
							GRAPHICS::SET_PARTICLE_FX_CAM_INSIDE_NONPLAYER_VEHICLE(iLocal_140, false);
							func_842("ARMENIAN_3_MCS_6_SHOT_2", 1);
						}
					}
					else if (!func_848("ARMENIAN_3_MCS_6_SHOT_3"))
					{
						if (CUTSCENE::GET_CUTSCENE_TIME() > SYSTEM::ROUND((14.999f * 1000f)) && CUTSCENE::HAS_CUTSCENE_CUT_THIS_FRAME())
						{
							GRAPHICS::SET_PARTICLE_FX_CAM_INSIDE_NONPLAYER_VEHICLE(iLocal_140, true);
							func_842("ARMENIAN_3_MCS_6_SHOT_3", 1);
						}
					}
					else if (!func_848("ARMENIAN_3_MCS_6_SHOT_4"))
					{
						if (CUTSCENE::GET_CUTSCENE_TIME() > SYSTEM::ROUND((17.165668f * 1000f)) && CUTSCENE::HAS_CUTSCENE_CUT_THIS_FRAME())
						{
							GRAPHICS::SET_PARTICLE_FX_CAM_INSIDE_NONPLAYER_VEHICLE(iLocal_140, false);
							func_842("ARMENIAN_3_MCS_6_SHOT_4", 1);
						}
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0))
				{
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_140, false))
					{
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_140, -1);
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
				{
					if (!PED::IS_PED_IN_VEHICLE(uLocal_248[0], iLocal_140, false))
					{
						PED::SET_PED_INTO_VEHICLE(uLocal_248[0], iLocal_140, 2);
					}
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_166))
					{
						iLocal_166 = OBJECT::CREATE_OBJECT(WEAPON::GET_WEAPONTYPE_MODEL(joaat("WEAPON_PISTOL")), Local_105, true, true, false);
					}
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_166, uLocal_248[0], PED::GET_PED_BONE_INDEX(uLocal_248[0], 28422), Local_101, Local_101, false, false, false, false, 2, true, 0);
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_248[0], sLocal_115, "michaelappears_loop_michael", 3))
					{
						TASK::TASK_PLAY_ANIM(uLocal_248[0], sLocal_115, "michaelappears_loop_michael", 1000f, -4f, -1, 2, 0f, false, false, false);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uLocal_248[0], false, false);
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Jimmys_Car", 0))
				{
					VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_140, true, true, false);
					PHYSICS::ACTIVATE_PHYSICS(iLocal_140);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_140, 5f);
				}
				VEHICLE::SET_VEHICLE_BRAKE_LIGHTS(iLocal_140, false);
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING((__LIB_0__::func_670(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -56.13f, -1097.6f, 25.16f) - ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID())));
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1f);
					Var2 = { ENTITY::GET_ENTITY_COORDS(iLocal_140, true) };
					MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(Var2.f_0, Var2.f_1, 30f, -55.8188f, -1096.4149f, 20f, 30f, false, false, false, false, false, 0, 0);
				}
				if (CUTSCENE::HAS_CUTSCENE_FINISHED())
				{
					if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
					{
						if (ENTITY::IS_ENTITY_AT_COORD(iLocal_140, -148.7715f, -1149.9026f, 23.2067f, 3f, 3f, 3f, false, true, 0))
						{
							ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_140, -148.7664f, -1149.9998f, 24.1124f, false, false, true);
							ENTITY::SET_ENTITY_ROTATION(iLocal_140, 3.385f, 2.9552f, -88.1208f, 2, true);
						}
						if (ENTITY::IS_ENTITY_AT_COORD(iLocal_140, -91.7239f, -1180.303f, 25.3327f, 3f, 3f, 3f, false, true, 0))
						{
							__LIB_11__::func_102(iLocal_140, -91.7239f, -1180.303f, 25.3327f, 3.5979f);
						}
						if (ENTITY::IS_ENTITY_AT_COORD(iLocal_140, -64.8446f, -1130.0518f, 24.7219f, 3f, 3f, 3f, false, true, 0))
						{
							__LIB_11__::func_102(iLocal_140, -64.8446f, -1130.0518f, 24.7219f, 92.7692f);
						}
						if (ENTITY::IS_ENTITY_AT_COORD(iLocal_140, -97.2467f, -1087.589f, 25.2988f, 3f, 3f, 3f, false, true, 0))
						{
							__LIB_11__::func_102(iLocal_140, -97.2467f, -1087.589f, 25.2988f, 161.1787f);
						}
					}
					PATHFIND::SET_ROADS_IN_ANGLED_AREA(-57.644516f, -1097.634f, 35.42235f, -145.06671f, -1156.5638f, 23.026037f, 20f, false, false, true);
					__LIB_7__::func_279(0, 1, 1, 0, 0, 0, 0);
					func_8();
				}
				break;
		}
		CAM::DISABLE_CINEMATIC_BONNET_CAMERA_THIS_UPDATE();
	}
	if (func_7())
	{
		GRAPHICS::SET_PARTICLE_FX_CAM_INSIDE_NONPLAYER_VEHICLE(iLocal_140, false);
		CUTSCENE::REMOVE_CUTSCENE();
		RECORDING::REPLAY_STOP_EVENT();
		while (CUTSCENE::HAS_CUTSCENE_LOADED())
		{
			func_806(0);
		}
		if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
		{
			STREAMING::NEW_LOAD_SCENE_STOP();
		}
		if (!PED::IS_PED_IN_VEHICLE(uLocal_248[0], iLocal_140, false))
		{
			PED::SET_PED_INTO_VEHICLE(uLocal_248[0], iLocal_140, 2);
		}
		if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_140, false))
		{
			PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_140, -1);
		}
		__LIB_37__::func_407();
		func_121(iLocal_166, 1);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		__LIB_7__::func_279(0, 1, 1, 0, 0, 0, 0);
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_140))
		{
			VEHICLE::SKIP_TO_END_AND_STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_140);
		}
		iLocal_236++;
	}
}

void func_337()//Position - 0x2C665
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	struct<3> Var4;
	struct<3> Var5;
	var uVar6;
	var uVar7;
	int iVar8;
	int iVar9;
	if (func_275())
	{
		func_210(PLAYER::PLAYER_ID(), 1, 0);
		func_842("GarageDoorLockedSkip", 1);
		iLocal_85 = 1;
		__LIB_6__::func_849(0);
		__LIB_8__::func_770(1);
		AUDIO::STOP_PED_SPEAKING(func_820(1), true);
		AUDIO::STOP_PED_SPEAKING(func_820(0), true);
		if (iLocal_98 == 0)
		{
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			__LIB_7__::func_279(0, 1, 1, 0, 0, 0, 0);
		}
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_140))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_140);
		}
		STREAMING::REQUEST_CLIP_SET("clipset@missarmenian3@franklin_driving");
		while (!STREAMING::HAS_CLIP_SET_LOADED("clipset@missarmenian3@franklin_driving"))
		{
			STREAMING::REQUEST_CLIP_SET("clipset@missarmenian3@franklin_driving");
			__LIB_10__::func_691();
			func_806(0);
		}
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_DRIVE_TO_DEALERSHIP"))
		{
			AUDIO::START_AUDIO_SCENE("ARM_3_DRIVE_TO_DEALERSHIP");
		}
		iLocal_53 = (MISC::GET_GAME_TIMER() + 180000);
		CUTSCENE::REQUEST_CUTSCENE("Armenian_3_mcs_6", 8);
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(23.1441f, -1150.3278f, -149.383f) - Vector(5f, 5f, 5f), Vector(23.1441f, -1150.3278f, -149.383f) + Vector(5f, 5f, 5f), false, true);
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(23.1441f, -1150.3278f, -149.383f) - Vector(5f, 5f, 5f), Vector(23.1441f, -1150.3278f, -149.383f) + Vector(5f, 5f, 5f), false, true);
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(23.1441f, -1150.3278f, -149.383f) - Vector(5f, 5f, 5f), Vector(23.1441f, -1150.3278f, -149.383f) + Vector(5f, 5f, 5f), false, true);
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(23.1441f, -1150.3278f, -149.383f) - Vector(5f, 5f, 5f), Vector(23.1441f, -1150.3278f, -149.383f) + Vector(5f, 5f, 5f), false, true);
		PATHFIND::SET_ROADS_IN_AREA(Vector(23.1441f, -1150.3278f, -149.383f) - Vector(5f, 5f, 5f), Vector(23.1441f, -1150.3278f, -149.383f) + Vector(5f, 5f, 5f), false, true);
		PATHFIND::SET_ROADS_IN_AREA(Vector(23.1441f, -1150.3278f, -149.383f) - Vector(5f, 5f, 5f), Vector(23.1441f, -1150.3278f, -149.383f) + Vector(5f, 5f, 5f), false, true);
		PATHFIND::SET_ROADS_IN_AREA(Vector(23.1441f, -1150.3278f, -149.383f) - Vector(5f, 5f, 5f), Vector(23.1441f, -1150.3278f, -149.383f) + Vector(5f, 5f, 5f), false, true);
		PATHFIND::SET_ROADS_IN_AREA(Vector(23.1441f, -1150.3278f, -149.383f) - Vector(5f, 5f, 5f), Vector(23.1441f, -1150.3278f, -149.383f) + Vector(5f, 5f, 5f), false, true);
		MISC::CLEAR_AREA(-149.383f, -1150.3278f, 23.1441f, 10f, true, false, false, false);
		MISC::CLEAR_AREA(-149.383f, -1150.3278f, 23.1441f, 10f, true, false, false, false);
		MISC::CLEAR_AREA(-149.383f, -1150.3278f, 23.1441f, 10f, true, false, false, false);
		MISC::CLEAR_AREA(-149.383f, -1150.3278f, 23.1441f, 10f, true, false, false, false);
		iLocal_172 = 0;
		if (func_120())
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_140, -1);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_140) && !ENTITY::IS_ENTITY_DEAD(iLocal_140, false))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_140, 4);
				__LIB_11__::func_102(iLocal_140, -676.2552f, -278.2624f, 35.1f, 209.8584f);
			}
			if (!bLocal_92)
			{
				func_119(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1101004800);
			}
			func_806(0);
			VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_140, true, true, false);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_140, 20f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1f);
			func_113("ARM3_DEST", 7500, 1);
			__LIB_26__::func_360(&iLocal_151, -148.7715f, -1149.9026f, 23.2067f, 1);
			HUD::START_GPS_MULTI_ROUTE(156, true, false);
			HUD::ADD_POINT_TO_GPS_MULTI_ROUTE(-273.01468f, -1140.7899f, 22.784359f);
			HUD::ADD_POINT_TO_GPS_MULTI_ROUTE(-148.7715f, -1149.9026f, 23.2067f);
			HUD::SET_GPS_MULTI_ROUTE_RENDER(true);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(500);
			}
		}
	}
	else
	{
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			__LIB_20__::func_165("Franklin", func_820(1), 0, 2);
			__LIB_20__::func_165("Michael", func_820(0), 0, 2);
		}
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_111, 40f, 40f, 40f, false, true, 0))
		{
			__LIB_39__::func_848(40, 3);
		}
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_248[0], sLocal_115, "michaelappears_intro_michael", 3))
		{
			if (!func_848("PistolCock"))
			{
				RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
				if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_248[0], sLocal_115, "michaelappears_intro_michael") > 0.4f)
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "ARM_3_PISTOL_COCK", 0, true);
					func_842("PistolCock", 1);
				}
			}
			if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_248[0], sLocal_115, "michaelappears_intro_michael") > 0.45f)
			{
				if (!func_848("ARM3_GUN"))
				{
					PED::SET_PED_IN_VEHICLE_CONTEXT(PLAYER::PLAYER_PED_ID(), MISC::GET_HASH_KEY("MISS_ARMENIAN3_FRANKLIN_TENSE"));
					VEHICLE::SET_VEHICLE_EXTRA(iLocal_140, 5, true);
					func_115(10);
				}
				func_807("ARM3_GUN", 7, 1, 0);
			}
		}
		if ((func_848("ARM3_GUN") && !func_848("ARM3_GUNA")) && !func_848("ARM3_GUNB"))
		{
			if (!__LIB_0__::func_75())
			{
				if (MISC::ABSF(ENTITY::GET_ENTITY_SPEED(iLocal_140)) >= 1f)
				{
					func_807("ARM3_GUNA", 7, 1, 0);
				}
				else
				{
					func_807("ARM3_GUNB", 7, 1, 0);
				}
			}
		}
		if (((((((ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_248[0], sLocal_115, "michaelappears_intro_michael", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_248[0], sLocal_115, "michaelappears_intro_michael") > 0.57f) || ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_248[0], sLocal_115, "michaelappears_loop_michael", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_248[0], sLocal_115, "michaelappears_loop2_michael", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_248[0], sLocal_115, "michaelappears_loop3_michael", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_248[0], sLocal_115, "michaelappears_loop4_michael", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_248[0], sLocal_115, "michaelappears_loop5_michael", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_248[0], sLocal_115, "michaelappears_loop6_michael", 3))
		{
			if ((func_848("ARM3_GUNA") || func_848("ARM3_GUNB")) && !__LIB_0__::func_75())
			{
				if ((((!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -97.46745f, -1140.7008f, 19.82074f, -289.8f, -1141.7f, 67.07879f, 90f, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -97.46745f, -1140.7008f, 19.82074f, -101.7f, -1383.3f, 73.34282f, 90f, false, true, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -97.46745f, -1140.7008f, 19.82074f, 81.4f, -1129.5f, 73.334045f, 90f, false, true, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -97.46745f, -1140.7008f, 19.82074f, -22.4f, -914.9f, 72.96643f, 90f, false, true, 0)) && !func_848("ARM3_STOP"))
				{
					func_807("ARM3_DRIV", 7, 1, 0);
				}
			}
			if (!func_848("ARM3HLP_INCAR"))
			{
				if (CAM::IS_FOLLOW_VEHICLE_CAM_ACTIVE())
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
					{
						iVar0 = CAM::GET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL();
						if (((iVar0 == 0 || iVar0 == 1) || iVar0 == 2) && !CAM::IS_GAMEPLAY_CAM_LOOKING_BEHIND())
						{
							CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
							func_19("ARM3HLP_INCAR", 1, -1);
						}
					}
				}
			}
		}
		if (!iLocal_459 && __LIB_26__::func_362(&uLocal_223, 1, 1, 0))
		{
			if (__LIB_0__::func_1("ARM3HLP_INCAR"))
			{
				__LIB_30__::func_214(1);
			}
			iVar1 = 1;
		}
		if (__LIB_0__::func_190())
		{
			iLocal_459 = 1;
		}
		else
		{
			iLocal_459 = 0;
		}
		if (func_848("ARM3_GUN") || ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_248[0], sLocal_115, "michaelappears_intro_michael", 3))
		{
			if (!__LIB_0__::func_77(0) && iVar1)
			{
				iLocal_456 = 1;
				__LIB_10__::func_691();
			}
			else
			{
				iLocal_456 = 0;
			}
		}
		if ((func_848("ARM3_GUN") && !__LIB_0__::func_75()) && PED::IS_PED_IN_VEHICLE(uLocal_248[0], iLocal_140, false))
		{
			__LIB_10__::func_7(&iLocal_153);
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_140, false))
			{
				if (!__LIB_0__::func_75() && CAM::IS_GAMEPLAY_CAM_RENDERING())
				{
					if (!HUD::DOES_BLIP_EXIST(iLocal_151))
					{
						HUD::CLEAR_PRINTS();
						func_113("ARM3_TAKE", 7500, 0);
						__LIB_10__::func_7(&iLocal_150);
						__LIB_26__::func_360(&iLocal_151, -148.7715f, -1149.9026f, 23.2067f, 1);
						HUD::START_GPS_MULTI_ROUTE(156, true, false);
						HUD::ADD_POINT_TO_GPS_MULTI_ROUTE(-273.01468f, -1140.7899f, 22.784359f);
						HUD::ADD_POINT_TO_GPS_MULTI_ROUTE(-148.7715f, -1149.9026f, 23.2067f);
						HUD::SET_GPS_MULTI_ROUTE_RENDER(true);
					}
				}
			}
			else if (!HUD::DOES_BLIP_EXIST(iLocal_150))
			{
				HUD::CLEAR_PRINTS();
				func_113("ARM3_CAR2", 7500, 1);
				__LIB_10__::func_7(&iLocal_151);
				__LIB_32__::func_665(&iLocal_150, &iLocal_140, 0);
			}
		}
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_140, false) && PED::IS_PED_IN_VEHICLE(uLocal_248[0], iLocal_140, false))
		{
			if (((!func_848("Destination1") && !func_848("Destination2")) && !func_848("Destination3")) && !func_848("Destination4"))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -97.46745f, -1140.7008f, 19.82074f, -289.8f, -1141.7f, 67.07879f, 90f, false, true, 0))
				{
					if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !__LIB_0__::func_75())
					{
						func_807("ARM3_STOP", 7, 1, 0);
					}
					func_842("Destination1", 1);
				}
			}
			else if (func_848("Destination1"))
			{
				if (func_848("HaltVehicle") && __LIB_6__::func_762(iLocal_140, 1093140480, 1, 1056964608, 0, 1, 0))
				{
					func_210(PLAYER::PLAYER_ID(), 0, 256);
					if (!__LIB_11__::func_869("ARM3_STOP") && !__LIB_11__::func_869("ARM3_DRIV"))
					{
						func_8();
					}
				}
				if ((!func_848("HaltVehicle") && ENTITY::IS_ENTITY_AT_COORD(iLocal_140, -148.7715f, -1149.9026f, 23.2067f, 3f, 3f, 2f, true, true, 0)) && ENTITY::IS_ENTITY_UPRIGHT(iLocal_140, 90f))
				{
					HUD::SET_GPS_MULTI_ROUTE_RENDER(false);
					if (!HUD::DOES_BLIP_EXIST(iLocal_151))
					{
						HUD::CLEAR_GPS_MULTI_ROUTE();
						__LIB_10__::func_7(&iLocal_151);
						__LIB_26__::func_360(&iLocal_151, -148.7715f, -1149.9026f, 23.2067f, 1);
					}
					func_842("HaltVehicle", 1);
				}
			}
			if (((!func_848("Destination1") && !func_848("Destination2")) && !func_848("Destination3")) && !func_848("Destination4"))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -97.46745f, -1140.7008f, 19.82074f, -101.7f, -1383.3f, 73.34282f, 90f, false, true, 0))
				{
					HUD::SET_GPS_MULTI_ROUTE_RENDER(false);
					HUD::CLEAR_GPS_MULTI_ROUTE();
					__LIB_10__::func_7(&iLocal_151);
					__LIB_26__::func_360(&iLocal_151, -91.7239f, -1180.303f, 25.3327f, 1);
					if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !__LIB_0__::func_75())
					{
						func_807("ARM3_STOP", 7, 1, 0);
					}
					func_842("Destination2", 1);
				}
			}
			else if (func_848("Destination2"))
			{
				if (func_848("HaltVehicle") && __LIB_6__::func_762(iLocal_140, 1093140480, 1, 1056964608, 0, 1, 0))
				{
					func_210(PLAYER::PLAYER_ID(), 0, 256);
					if (!__LIB_11__::func_869("ARM3_STOP") && !__LIB_11__::func_869("ARM3_DRIV"))
					{
						func_8();
					}
				}
				if ((!func_848("HaltVehicle") && ENTITY::IS_ENTITY_AT_COORD(iLocal_140, -91.7239f, -1180.303f, 25.3327f, 3f, 3f, 2f, true, true, 0)) && ENTITY::IS_ENTITY_UPRIGHT(iLocal_140, 90f))
				{
					func_842("HaltVehicle", 1);
				}
			}
			if (((!func_848("Destination1") && !func_848("Destination2")) && !func_848("Destination3")) && !func_848("Destination4"))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -97.46745f, -1140.7008f, 19.82074f, 81.4f, -1129.5f, 73.334045f, 90f, false, true, 0))
				{
					HUD::SET_GPS_MULTI_ROUTE_RENDER(false);
					HUD::CLEAR_GPS_MULTI_ROUTE();
					__LIB_10__::func_7(&iLocal_151);
					__LIB_26__::func_360(&iLocal_151, -64.8446f, -1130.0518f, 24.7219f, 1);
					if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !__LIB_0__::func_75())
					{
						func_807("ARM3_STOP", 7, 1, 0);
					}
					func_842("Destination3", 1);
				}
			}
			else if (func_848("Destination3"))
			{
				if (func_848("HaltVehicle") && __LIB_6__::func_762(iLocal_140, 1093140480, 1, 1056964608, 0, 1, 0))
				{
					func_210(PLAYER::PLAYER_ID(), 0, 256);
					if (!__LIB_11__::func_869("ARM3_STOP") && !__LIB_11__::func_869("ARM3_DRIV"))
					{
						func_8();
					}
				}
				if ((!func_848("HaltVehicle") && ENTITY::IS_ENTITY_AT_COORD(iLocal_140, -64.8446f, -1130.0518f, 24.7219f, 3f, 3f, 2f, true, true, 0)) && ENTITY::IS_ENTITY_UPRIGHT(iLocal_140, 90f))
				{
					func_842("HaltVehicle", 1);
				}
			}
			if (((!func_848("Destination1") && !func_848("Destination2")) && !func_848("Destination3")) && !func_848("Destination4"))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -97.46745f, -1140.7008f, 19.82074f, -22.4f, -914.9f, 72.96643f, 90f, false, true, 0))
				{
					HUD::SET_GPS_MULTI_ROUTE_RENDER(false);
					HUD::CLEAR_GPS_MULTI_ROUTE();
					__LIB_10__::func_7(&iLocal_151);
					__LIB_26__::func_360(&iLocal_151, -97.2467f, -1087.589f, 25.2988f, 1);
					if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !__LIB_0__::func_75())
					{
						func_807("ARM3_STOP", 7, 1, 0);
					}
					func_842("Destination4", 1);
				}
			}
			else if (func_848("Destination4"))
			{
				if (func_848("HaltVehicle") && __LIB_6__::func_762(iLocal_140, 1093140480, 1, 1056964608, 0, 1, 0))
				{
					func_210(PLAYER::PLAYER_ID(), 0, 256);
					if (!__LIB_11__::func_869("ARM3_STOP") && !__LIB_11__::func_869("ARM3_DRIV"))
					{
						func_8();
					}
				}
				if ((!func_848("HaltVehicle") && ENTITY::IS_ENTITY_AT_COORD(iLocal_140, -97.2467f, -1087.589f, 25.2988f, 3f, 3f, 2f, true, true, 2)) && ENTITY::IS_ENTITY_UPRIGHT(iLocal_140, 90f))
				{
					func_842("HaltVehicle", 1);
				}
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_167))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -59.8f, -1098.78f, 24.92f, 100f, 100f, 50f, false, true, 0))
			{
				iLocal_167 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_showroom_glass_1b"), -59.87f, -1098.84f, 27.2f, true, true, false);
				ENTITY::SET_ENTITY_ROTATION(iLocal_167, 0f, 0f, 121.5f, 2, true);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_167, true);
			}
		}
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 23 /*INPUT_ENTER*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 69 /*INPUT_VEH_ATTACK*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 70 /*INPUT_VEH_ATTACK2*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 262 /*INPUT_NEXT_WEAPON*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 261 /*INPUT_PREV_WEAPON*/, true);
		if (MISC::GET_GAME_TIMER() > iLocal_53)
		{
			if (CUTSCENE::HAS_THIS_CUTSCENE_LOADED("Armenian_3_mcs_7"))
			{
				if (VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(func_820(0), iLocal_140, 2, false, false))
				{
					while (!__LIB_6__::func_762(iLocal_140, 10f, 10, 1056964608, 0, 1, 0))
					{
						func_806(0);
					}
					iVar2 = INTERIOR::GET_INTERIOR_FROM_ENTITY(iLocal_140);
					iVar8 = -1;
					MISC::GET_MODEL_DIMENSIONS(joaat("bjxl"), &Var4, &Var5);
					if (iLocal_172 == 0)
					{
						iLocal_172 = SHAPETEST::START_SHAPE_TEST_BOX(ENTITY::GET_ENTITY_COORDS(iLocal_140, true), Var5 - Var4, ENTITY::GET_ENTITY_ROTATION(iLocal_140, 2), 2, 346, iLocal_140, 4);
					}
					if (iLocal_172 != 0)
					{
						iVar9 = SHAPETEST::GET_SHAPE_TEST_RESULT(iLocal_172, &iVar8, &uVar6, &uVar7, &uVar3);
						if (iVar9 == 2)
						{
							iLocal_172 = 0;
						}
						if (iVar9 != 1)
						{
							if ((((iVar8 < 1 && ENTITY::IS_ENTITY_UPRIGHT(iLocal_140, 90f)) && !ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -52.025787f, -1095.3108f, 32.230316f, 50f, 50f, 8f, false, true, 0)) && !ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -148.7715f, -1149.9026f, 23.2067f, 20f, 20f, 8f, false, true, 0)) && !(iVar2 != 0 && INTERIOR::GET_INTERIOR_GROUP_ID(iVar2) == 1))
							{
								CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_248[0], "Michael", 0, 0, 0);
								CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_140, "Franklins_Car", 0, 0, 0);
								__LIB_7__::func_279(1, 1, 1, 0, 0, 0, 0);
								CUTSCENE::SET_CUTSCENE_FADE_VALUES(false, false, true, false);
								CUTSCENE::START_CUTSCENE(0);
								if (!ENTITY::IS_ENTITY_UPRIGHT(iLocal_140, 45f))
								{
									VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_140, 5f);
								}
								CUTSCENE::SET_CUTSCENE_ORIGIN_AND_ORIENTATION(ENTITY::GET_ENTITY_COORDS(iLocal_140, true), ENTITY::GET_ENTITY_ROTATION(iLocal_140, 2), 0);
								func_806(0);
								CUTSCENE::SET_CUTSCENE_CAN_BE_SKIPPED(false);
								__LIB_11__::func_108(&iLocal_166);
								while (!CUTSCENE::HAS_CUTSCENE_FINISHED())
								{
									if (CUTSCENE::GET_CUTSCENE_TIME() >= 11900)
									{
										__LIB_7__::func_279(0, 1, 1, 0, 0, 0, 0);
										iLocal_237 = 18;
										func_821();
									}
									func_806(0);
								}
								__LIB_7__::func_279(0, 1, 1, 0, 0, 0, 0);
								iLocal_237 = 18;
								func_821();
							}
							else
							{
								iLocal_237 = 18;
								func_821();
							}
						}
					}
				}
			}
			else if (CUTSCENE::HAS_CUTSCENE_LOADED())
			{
				CUTSCENE::REMOVE_CUTSCENE();
			}
			else
			{
				CUTSCENE::REQUEST_CUTSCENE("Armenian_3_mcs_7", 8);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_140) && !ENTITY::IS_ENTITY_DEAD(iLocal_140, false))
		{
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_248[0]) && !ENTITY::IS_ENTITY_DEAD(uLocal_248[0], false))
			{
				if (!PED::IS_PED_SITTING_IN_VEHICLE(uLocal_248[0], iLocal_140))
				{
					iLocal_237 = 20;
					func_821();
				}
			}
		}
		CAM::DISABLE_CINEMATIC_BONNET_CAMERA_THIS_UPDATE();
	}
	if (func_7())
	{
		__LIB_9__::func_981(&uLocal_223, 0, 0);
		if (!CUTSCENE::HAS_THIS_CUTSCENE_LOADED("Armenian_3_mcs_6"))
		{
			CUTSCENE::REMOVE_CUTSCENE();
			while (CUTSCENE::HAS_CUTSCENE_LOADED())
			{
				func_806(0);
			}
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_DRIVE_TO_DEALERSHIP"))
		{
			AUDIO::STOP_AUDIO_SCENE("ARM_3_DRIVE_TO_DEALERSHIP");
		}
		__LIB_8__::func_770(0);
		if (CAM::DOES_CAM_EXIST(iLocal_156))
		{
			if (CAM::IS_CAM_RENDERING(iLocal_156))
			{
				PLAYER::ENABLE_SPECIAL_ABILITY(PLAYER::PLAYER_ID(), true, 0);
			}
		}
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_140, 5, true);
		__LIB_10__::func_7(&iLocal_150);
		__LIB_10__::func_7(&iLocal_153);
		HUD::CLEAR_GPS_MULTI_ROUTE();
		iLocal_236++;
	}
}

void func_338()//Position - 0x2D7F3
{
	int iVar0;
	if (func_275())
	{
		__LIB_42__::func_873(3, "stageStealCar", 0, 0, 0, 1);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_138) && !ENTITY::IS_ENTITY_DEAD(iLocal_138, false))
		{
			__LIB_36__::func_52(iLocal_138);
		}
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
		__LIB_32__::func_762(1);
		iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-49.9775f, -1097.2866f, 25.4223f, "v_carshowroom");
		if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar0, "csr_beforeMission"))
		{
			INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar0, "csr_beforeMission");
		}
		if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar0, "csr_afterMissionA"))
		{
			INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar0, "csr_afterMissionA");
		}
		if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar0, "csr_afterMissionB"))
		{
			INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar0, "csr_afterMissionB");
		}
		if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar0, "csr_inMission"))
		{
			INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iVar0, "csr_inMission");
		}
		__LIB_18__::func_191(179, 1, 0, 1, 0);
		INTERIOR::REFRESH_INTERIOR(iVar0);
		iLocal_87 = 0;
		func_210(PLAYER::PLAYER_ID(), 1, 0);
		iLocal_85 = 1;
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		__LIB_7__::func_279(0, 1, 1, 0, 0, 0, 0);
		func_565(4, joaat("v_ilev_mm_door"), 0);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_140) && !ENTITY::IS_ENTITY_DEAD(iLocal_140, false))
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_140, 4);
		}
		iLocal_98 = 0;
		PLAYER::ENABLE_SPECIAL_ABILITY(PLAYER::PLAYER_ID(), true, 0);
		__LIB_11__::func_952(4, PLAYER::PLAYER_PED_ID());
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Global_41748[4 /*31*/], 0, true, true);
		__LIB_0__::func_203(&uLocal_288, 3, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
		__LIB_0__::func_203(&uLocal_288, 8, 0, "SIMEON", 0, 1);
		AUDIO::STOP_PED_SPEAKING(func_820(1), true);
		if (!ENTITY::DOES_ENTITY_EXIST(uLocal_248[0]))
		{
			func_375(&(uLocal_248[0]), 0, Local_105, 26.8488f, 0);
			func_341(uLocal_248[0], 12, 25, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			WEAPON::SET_CURRENT_PED_WEAPON(uLocal_248[0], joaat("WEAPON_UNARMED"), true);
			func_121(uLocal_248[0], 0);
			PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(uLocal_248[0], false);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_248[0], iLocal_196);
			PED::SET_PED_INTO_VEHICLE(uLocal_248[0], iLocal_140, 2);
		}
		ENTITY::SET_ENTITY_PROOFS(func_820(0), true, true, true, true, true, true, false, false);
		PED::SET_PED_CONFIG_FLAG(func_820(0), 118, false);
		PED::SET_PED_CONFIG_FLAG(func_820(0), 208, true);
		AUDIO::STOP_PED_SPEAKING(func_820(0), true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_820(0), true);
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_STEAL_CAR"))
		{
			AUDIO::START_AUDIO_SCENE("ARM_3_STEAL_CAR");
		}
		func_115(7);
		if (func_120())
		{
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
			iLocal_158 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-812.1879f, 179.9663f, 71.1639f, "V_Michael");
			INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_158);
			while (!INTERIOR::IS_INTERIOR_READY(iLocal_158))
			{
				func_806(0);
			}
			iLocal_86 = 1;
			func_842("GarageDoorLockedSkip", 1);
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_140, -1);
			if (!bLocal_92)
			{
				func_119(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 20f);
			}
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_140, 5f);
			PHYSICS::ACTIVATE_PHYSICS(iLocal_140);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1f);
			func_806(750);
			func_115(8);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(500);
			}
		}
	}
	else
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_140, false))
		{
			if (SYSTEM::TIMERA() > 1000)
			{
				__LIB_39__::func_848(40, 3);
			}
			if (!HUD::DOES_BLIP_EXIST(iLocal_151))
			{
				HUD::CLEAR_PRINTS();
				func_113("ARM3_DEST", 7500, 1);
				__LIB_10__::func_7(&iLocal_150);
				__LIB_26__::func_360(&iLocal_151, -148.7715f, -1149.9026f, 23.2067f, 1);
				HUD::START_GPS_MULTI_ROUTE(156, true, false);
				HUD::ADD_POINT_TO_GPS_MULTI_ROUTE(-273.01468f, -1140.7899f, 22.784359f);
				HUD::ADD_POINT_TO_GPS_MULTI_ROUTE(-148.7715f, -1149.9026f, 23.2067f);
				HUD::SET_GPS_MULTI_ROUTE_RENDER(true);
			}
			if (func_848("ARM3_DEST"))
			{
				if (!func_848("ARM3_INCAR"))
				{
					if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !__LIB_0__::func_75())
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -811.17505f, 187.6008f, 73.30764f, true) > 100f && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_140, false))
						{
							if (func_340(PLAYER::PLAYER_PED_ID()))
							{
								__LIB_35__::func_985(&uLocal_288, 18, "ARM3AUD", "ARM3_INCARA", 8, 1, 0, 0, 0);
							}
							else
							{
								__LIB_35__::func_985(&uLocal_288, 18, "ARM3AUD", "ARM3_INCARB", 8, 1, 0, 0, 0);
							}
							RECORDING::REPLAY_RECORD_BACK_FOR_TIME(10f, 8f, 3);
							func_842("ARM3_INCAR", 1);
						}
					}
				}
			}
			if (func_848("ARM3_INCAR"))
			{
				if (__LIB_11__::func_869("ARM3_INCARA") || __LIB_11__::func_869("ARM3_INCARB"))
				{
					if (PLAYER::IS_SPECIAL_ABILITY_ENABLED(PLAYER::PLAYER_ID(), 0))
					{
						PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
						PLAYER::ENABLE_SPECIAL_ABILITY(PLAYER::PLAYER_ID(), false, 0);
					}
				}
				else if (!PLAYER::IS_SPECIAL_ABILITY_ENABLED(PLAYER::PLAYER_ID(), 0))
				{
					PLAYER::ENABLE_SPECIAL_ABILITY(PLAYER::PLAYER_ID(), true, 0);
				}
			}
			if ((ENTITY::GET_ENTITY_HEALTH(iLocal_140) < iLocal_60 || VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iLocal_140) < fLocal_61) || VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_140) < fLocal_62)
			{
				AUDIO::INTERRUPT_CONVERSATION(func_820(1), "ARM3_BRAA", "FRANKLIN");
				iLocal_60 = ENTITY::GET_ENTITY_HEALTH(iLocal_140);
				fLocal_61 = VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iLocal_140);
				fLocal_62 = VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_140);
			}
		}
		else if (!HUD::DOES_BLIP_EXIST(iLocal_150))
		{
			HUD::CLEAR_PRINTS();
			func_113("ARM3_CAR2", 7500, 1);
			__LIB_10__::func_7(&iLocal_151);
			__LIB_32__::func_665(&iLocal_150, &iLocal_140, 0);
		}
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_140, false) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -845.28656f, 162.10336f, 64.66984f, -845.33167f, 155.96532f, 70.58934f, 4f, false, true, 0))
		{
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_STEAL_CAR"))
			{
				AUDIO::STOP_AUDIO_SCENE("ARM_3_STEAL_CAR");
			}
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_EXIT_THROUGH_GATE"))
			{
				AUDIO::START_AUDIO_SCENE("ARM_3_EXIT_THROUGH_GATE");
			}
		}
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_140, false) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			if (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 23 /*INPUT_ENTER*/) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/))
			{
				iLocal_98 = 1;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_140) && !ENTITY::IS_ENTITY_DEAD(iLocal_140, false))
		{
			if (ENTITY::IS_ENTITY_UPRIGHT(iLocal_140, 90f))
			{
				iLocal_54 = MISC::GET_GAME_TIMER() + 10000;
				if (VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iLocal_140))
				{
					if (((((MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -60.72f, -1100.55f, 25.4f, true) < 1200f || iLocal_98 == 1) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_140, false)) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) && !__LIB_11__::func_869("ARM3_INCARA")) && !__LIB_11__::func_869("ARM3_INCARB"))
					{
						if (func_307(0, 0))
						{
							VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_140, 4);
							if (!ENTITY::DOES_ENTITY_EXIST(uLocal_248[0]))
							{
								func_375(&(uLocal_248[0]), 0, Local_105, 26.8488f, 0);
								func_341(uLocal_248[0], 12, 25, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								WEAPON::SET_CURRENT_PED_WEAPON(uLocal_248[0], joaat("WEAPON_UNARMED"), true);
							}
							if (!ENTITY::DOES_ENTITY_EXIST(iLocal_166))
							{
								iLocal_166 = OBJECT::CREATE_OBJECT(WEAPON::GET_WEAPONTYPE_MODEL(joaat("WEAPON_PISTOL")), Local_105, true, true, false);
							}
							ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_166, uLocal_248[0], PED::GET_PED_BONE_INDEX(uLocal_248[0], 28422), Local_101, Local_101, false, false, false, false, 2, true, 0);
							PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(uLocal_248[0], false);
							PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_248[0], iLocal_196);
							__LIB_0__::func_203(&uLocal_288, 1, uLocal_248[0], "MICHAEL", 0, 1);
							PED::SET_PED_INTO_VEHICLE(uLocal_248[0], iLocal_140, 2);
							while (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(uLocal_248[0]))
							{
								PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 23 /*INPUT_ENTER*/, true);
								PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
								func_806(0);
							}
							TASK::OPEN_SEQUENCE_TASK(&iLocal_157);
							TASK::TASK_PLAY_ANIM(0, sLocal_115, "michaelappears_intro_franklin", 8f, -8f, -1, 32, 0.31f, false, false, false);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_157);
							TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iLocal_157);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_157);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_157);
							TASK::TASK_PLAY_ANIM(0, sLocal_115, "michaelappears_intro_michael", 1000f, -8f, -1, 0, 0f, false, false, false);
							TASK::TASK_PLAY_ANIM(0, sLocal_115, "michaelappears_loop_michael", 8f, -4f, -1, 2, 0f, false, false, false);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_157);
							TASK::TASK_PERFORM_SEQUENCE(uLocal_248[0], iLocal_157);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_157);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uLocal_248[0], false, false);
							WEAPON::GIVE_WEAPON_TO_PED(uLocal_248[0], iLocal_195, 120, true, true);
							WEAPON::SET_CURRENT_PED_WEAPON(uLocal_248[0], iLocal_195, true);
							func_806(0);
							CAM::SET_GAMEPLAY_ENTITY_HINT(iLocal_140, -0.1f, 1f, 1.1f, true, 2000, 6000, 2000, joaat("ARM3_VEHICLE_HINT_HELPER"));
							if (!iLocal_66)
							{
								iLocal_65 = CAM::GET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL();
								iLocal_67 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0);
								iLocal_66 = 1;
							}
							CAM::SET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL(0);
							func_121(uLocal_248[0], 1);
							RECORDING::REPLAY_RECORD_BACK_FOR_TIME(0f, 15f, 3);
							func_8();
						}
					}
				}
			}
			else if (ENTITY::GET_ENTITY_SPEED(iLocal_140) < 1f && MISC::GET_GAME_TIMER() > iLocal_54)
			{
				iLocal_237 = 20;
				func_821();
			}
		}
	}
	if (func_7())
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_140) && !ENTITY::IS_ENTITY_DEAD(iLocal_140, false))
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_140, 4);
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_STEAL_CAR"))
		{
			AUDIO::STOP_AUDIO_SCENE("ARM_3_STEAL_CAR");
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_EXIT_THROUGH_GATE"))
		{
			AUDIO::STOP_AUDIO_SCENE("ARM_3_EXIT_THROUGH_GATE");
		}
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::ENABLE_SPECIAL_ABILITY(PLAYER::PLAYER_ID(), false, 0);
		if (!ENTITY::DOES_ENTITY_EXIST(uLocal_248[0]))
		{
			PED::DELETE_PED(&(uLocal_248[0]));
			func_375(&(uLocal_248[0]), 0, Local_105, 26.8488f, 0);
			func_341(uLocal_248[0], 12, 25, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			WEAPON::SET_CURRENT_PED_WEAPON(uLocal_248[0], joaat("WEAPON_UNARMED"), true);
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_166))
			{
				iLocal_166 = OBJECT::CREATE_OBJECT(WEAPON::GET_WEAPONTYPE_MODEL(joaat("WEAPON_PISTOL")), Local_105, true, true, false);
			}
			ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_166, uLocal_248[0], PED::GET_PED_BONE_INDEX(uLocal_248[0], 28422), Local_101, Local_101, false, false, false, false, 2, true, 0);
			PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(uLocal_248[0], false);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_248[0], iLocal_196);
			PED::SET_PED_INTO_VEHICLE(uLocal_248[0], iLocal_140, 2);
			while (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(uLocal_248[0]))
			{
				func_806(0);
			}
			CAM::SET_GAMEPLAY_ENTITY_HINT(iLocal_140, -0.1f, 1f, 1.1f, true, 2000, 6000, 2000, joaat("ARM3_VEHICLE_HINT_HELPER"));
			if (!iLocal_66)
			{
				iLocal_65 = CAM::GET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL();
				iLocal_67 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0);
				iLocal_66 = 1;
			}
			CAM::SET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL(0);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_157);
			TASK::TASK_PLAY_ANIM(0, sLocal_115, "michaelappears_intro_franklin", 8f, -8f, -1, 32, 0f, false, false, false);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_157);
			TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iLocal_157);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_157);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_157);
			TASK::TASK_PLAY_ANIM(0, sLocal_115, "michaelappears_intro_michael", 8f, -8f, -1, 0, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, sLocal_115, "michaelappears_loop_michael", 8f, -4f, -1, 2, 0f, false, false, false);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_157);
			TASK::TASK_PERFORM_SEQUENCE(uLocal_248[0], iLocal_157);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_157);
			WEAPON::GIVE_WEAPON_TO_PED(uLocal_248[0], iLocal_195, 120, true, true);
			WEAPON::SET_CURRENT_PED_WEAPON(uLocal_248[0], iLocal_195, true);
		}
		__LIB_0__::func_203(&uLocal_288, 1, uLocal_248[0], "MICHAEL", 0, 1);
		func_121(uLocal_248[0], 1);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_19__::func_811(0));
		__LIB_39__::func_848(40, 3);
		__LIB_10__::func_7(&iLocal_150);
		iLocal_236++;
	}
}

int func_340(int iParam0)//Position - 0x2E347
{
	bool bVar0;
	int iVar1;
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
	{
		return 0;
	}
	bVar0 = __LIB_20__::func_509(iParam0);
	if (!__LIB_0__::func_317(bVar0))
	{
		return 0;
	}
	iVar1 = 0;
	while (iVar1 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_97772[iVar1]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_97772[iVar1], false))
			{
				if (PED::IS_PED_IN_VEHICLE(iParam0, Global_97772[iVar1], false))
				{
					return 1;
				}
			}
		}
		iVar1++;
	}
	return 0;
}

int func_341(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x2E3CA
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
		Global_78130[1 /*14*/] = { __LIB_35__::func_896(iVar10, iParam1, iParam2, -1) };
		if (!__LIB_0__::func_32(iParam3))
		{
			Global_78128 = (Global_78128 - 1);
			return 0;
		}
		__LIB_20__::func_322(iParam1);
	}
	if (iParam1 == 12)
	{
		if (iParam7 == 1)
		{
			if (iVar10 == joaat("Player_One"))
			{
				iVar5 = __LIB_6__::func_795(iParam0, 8);
				if (iVar5 != 9)
				{
					iVar5 = -99;
				}
			}
			iVar6 = __LIB_6__::func_795(iParam0, 9);
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
			iVar7 = __LIB_6__::func_788(iParam0, 1);
			if (!__LIB_6__::func_780(iVar10, 14, iVar7, -1))
			{
				iVar7 = -99;
			}
			iVar8 = __LIB_6__::func_788(iParam0, 0);
			if (!__LIB_6__::func_779(iVar10, 14, iVar8, -1) && !__LIB_6__::func_827(iVar10, 14, iVar8, -1))
			{
				iVar8 = -99;
			}
			if (iVar10 == joaat("Player_One"))
			{
				iVar9 = __LIB_6__::func_788(iParam0, 2);
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
			uVar11 = { __LIB_11__::func_102(iVar10, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar11[iVar0] != -99)
			{
				Global_78130[1 /*14*/] = { __LIB_35__::func_896(iVar10, iVar0, uVar11[iVar0], -1) };
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
							uVar12 = { __LIB_18__::func_247(iVar10, uVar11[iVar0]) };
						}
						iVar1 = 0;
						while (iVar1 <= 8)
						{
							Global_78130[1 /*14*/] = { __LIB_35__::func_896(iVar10, 14, uVar12[iVar1], -1) };
							__LIB_6__::func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
							__LIB_20__::func_322(14);
							if (Global_78128 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = __LIB_40__::func_943(iParam0, iVar10, 14, uVar12[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_341(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
							__LIB_0__::func_211(iVar10, 2, 20, &iVar4);
						}
						if (iParam4 == -1)
						{
							PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, __LIB_0__::func_33(iVar0)));
						}
						else
						{
							PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, iParam4);
						}
						__LIB_20__::func_322(iVar0);
						if (Global_78128 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								iVar3 = __LIB_40__::func_943(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_341(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_35__::func_896(iVar10, iVar0, func_350(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_349(iParam0, iVar10, &iVar4, 1))
							{
								func_341(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_11__::func_102(iVar10, 0) };
						func_341(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var14 = { __LIB_35__::func_896(iVar10, 8, iVar5, -1) };
			if (iVar5 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 8, iVar5, &uVar11, &Var14))
				{
					func_341(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__::func_896(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_341(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__::func_896(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_341(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__::func_896(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_341(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__::func_896(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_341(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
		}
	}
	else if (iParam1 == 13)
	{
		uVar15 = { __LIB_18__::func_247(iVar10, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_78130[1 /*14*/] = { __LIB_35__::func_896(iVar10, 14, uVar15[iVar1], -1) };
			__LIB_6__::func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
			__LIB_20__::func_322(14);
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = __LIB_40__::func_943(iParam0, iVar10, 14, uVar15[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_341(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		__LIB_6__::func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
		__LIB_20__::func_322(iParam1);
		if (Global_78128 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = __LIB_40__::func_943(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_341(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				iVar3 = __LIB_40__::func_943(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_341(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			__LIB_39__::func_857(iVar10, iParam1, iParam2);
		}
	}
	if (Global_78128 == 1)
	{
		if (func_349(iParam0, iVar10, &iVar4, 0))
		{
			func_341(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_342(iParam0, iVar10, &iVar4))
		{
			func_341(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_342(int iParam0, int iParam1, int iParam2)//Position - 0x2EBDA
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_343(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_343(int iParam0, int iParam1, int iParam2)//Position - 0x2EC66
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
	Global_78130[1 /*14*/] = { __LIB_35__::func_896(iVar0, iParam1, iParam2, -1) };
	if (!BitTest(Global_78130[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar5 = { __LIB_11__::func_102(iVar0, iParam2) };
		iVar2 = 0;
		while (iVar2 <= 14)
		{
			if ((uVar5[iVar2] != -99 && iVar2 != 12) && iVar2 != 14)
			{
				if (!func_343(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_18__::func_247(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_343(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_35__::func_896(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_343(iParam0, 14, iVar4))
										{
											if (!__LIB_24__::func_955(iVar0, iParam2, 14, iVar4, &uVar5, &(Global_78130[2 /*14*/])))
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
						iVar1 = __LIB_6__::func_795(iParam0, iVar2);
						Global_78130[2 /*14*/] = { __LIB_35__::func_896(iVar0, iVar2, iVar1, -1) };
						if (!__LIB_24__::func_955(iVar0, iParam2, iVar2, iVar1, &uVar5, &(Global_78130[2 /*14*/])))
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
		uVar8 = { __LIB_18__::func_247(iVar0, iParam2) };
		iVar7 = 0;
		while (iVar7 <= 8)
		{
			if (!func_343(iParam0, 14, uVar8[iVar7]))
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

int func_349(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x2F6EB
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_343(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_350(int iParam0, int iParam1, int iParam2)//Position - 0x2F781
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
				if (func_343(iParam0, iParam1, iVar0))
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
				if (func_343(iParam0, iParam1, iVar1))
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

void func_375(int* iParam0, int iParam1, struct<3> Param2, float fParam3, int iParam4)//Position - 0x3461A
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		while (!func_376(iParam0, iParam1, Param2, fParam3, 1, 0, 0))
		{
			SYSTEM::WAIT(0);
		}
		if (iParam4 == 1)
		{
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam0);
		}
	}
}

int func_376(int* iParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x34657
{
	int iVar0;
	if (__LIB_0__::func_317(iParam1))
	{
		iVar0 = __LIB_19__::func_811(iParam1);
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
			{
				PED::DELETE_PED(iParam0);
			}
			*iParam0 = PED::CREATE_PED(26, iVar0, Param2, fParam3, false, false);
			__LIB_26__::func_464(*iParam0, iParam1, bParam5);
			PED::SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(*iParam0, false, 0);
			func_557(*iParam0);
			__LIB_32__::func_730(*iParam0, 1, 0);
			__LIB_20__::func_721(*iParam0);
			__LIB_20__::func_720(*iParam0);
			func_378(*iParam0, bParam6);
			__LIB_0__::func_349(*iParam0);
			if (bParam4)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
			}
			return 1;
		}
	}
	return 0;
}

int func_378(int iParam0, bool bParam1)//Position - 0x3476F
{
	int iVar0;
	bool bVar1;
	iVar0 = __LIB_20__::func_509(iParam0);
	if (__LIB_10__::func_3(iVar0))
	{
		__LIB_10__::func_2(iVar0, 0);
		func_341(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		func_382(iParam0, 1);
		return 1;
	}
	if (!bParam1)
	{
		if (__LIB_6__::func_843(iParam0))
		{
			__LIB_10__::func_2(iVar0, 0);
			func_341(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			func_382(iParam0, 1);
			return 1;
		}
	}
	bVar1 = false;
	switch (iVar0)
	{
		case 0:
			if (Global_113386.f_9085.f_99.f_58[120] && !Global_113386.f_9085.f_99.f_58[122])
			{
				func_341(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_113386.f_9085.f_99.f_58[121] = 1;
				return 1;
			}
			if (Global_113386.f_9085.f_99.f_58[123])
			{
				Global_113386.f_9085.f_99.f_58[123] = 0;
				if (!PED::IS_PED_INJURED(iParam0))
				{
					if (func_343(iParam0, 3, 169))
					{
						func_341(iParam0, 3, 85, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						return 1;
					}
				}
			}
			if (func_343(iParam0, 12, 6))
			{
				func_341(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_343(iParam0, 12, 17))
			{
				if (!__LIB_38__::func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_341(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_343(iParam0, 12, 20))
			{
				if (!__LIB_38__::func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 20))
				{
					func_341(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_343(iParam0, 12, 21))
			{
				if (!__LIB_38__::func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 21))
				{
					func_341(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_343(iParam0, 12, 22))
			{
				if (!__LIB_38__::func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 22))
				{
					func_341(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_343(iParam0, 12, 11))
			{
				func_341(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_343(iParam0, 12, 10))
			{
				func_341(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_343(iParam0, 12, 50))
			{
				func_341(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_343(iParam0, 14, 59))
			{
				func_341(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_343(iParam0, 8, 22))
			{
				func_341(iParam0, 8, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_343(iParam0, 12, 14))
			{
				func_341(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		case 1:
			if (func_343(iParam0, 12, 13))
			{
				if (!__LIB_38__::func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 13))
				{
					func_341(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_343(iParam0, 12, 14))
			{
				if (!__LIB_38__::func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 14))
				{
					func_341(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_343(iParam0, 12, 15))
			{
				if (!__LIB_38__::func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 15))
				{
					func_341(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_343(iParam0, 12, 4))
			{
				func_341(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_343(iParam0, 12, 3))
			{
				func_341(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_343(iParam0, 14, 82))
			{
				func_341(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_343(iParam0, 8, 76))
			{
				func_341(iParam0, 8, 26, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_343(iParam0, 12, 1))
			{
				func_341(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		case 2:
			if (func_343(iParam0, 12, 12))
			{
				func_341(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_343(iParam0, 12, 15))
			{
				func_341(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (!bParam1)
			{
				if (func_343(iParam0, 3, 71))
				{
					func_341(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_343(iParam0, 12, 17))
			{
				if (!__LIB_38__::func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_341(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_343(iParam0, 12, 18))
			{
				if (!__LIB_38__::func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 18))
				{
					func_341(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_343(iParam0, 12, 19))
			{
				if (!__LIB_38__::func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 19))
				{
					func_341(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_343(iParam0, 12, 7))
			{
				func_341(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_343(iParam0, 12, 6))
			{
				func_341(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_343(iParam0, 14, 88))
			{
				func_341(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_343(iParam0, 8, 17))
			{
				func_341(iParam0, 8, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_343(iParam0, 12, 11))
			{
				func_341(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
	}
	return 0;
}

void func_382(int iParam0, int iParam1)//Position - 0x34F00
{
	int iVar0;
	int iVar1;
	struct<65> Var2;
	int iVar3;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = __LIB_20__::func_509(iParam0);
		if (__LIB_0__::func_317(iVar0))
		{
			if (iVar0 == 2)
			{
				iVar1 = func_350(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					__LIB_10__::func_1(iVar0);
					func_384(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
				}
			}
			Var2 = 12;
			Var2.f_13 = 12;
			Var2.f_26 = 12;
			Var2.f_39 = 9;
			Var2.f_49 = 9;
			__LIB_26__::func_544(iParam0, &Var2, 1, -1);
			Global_100166[iVar0 /*65*/] = { Var2 };
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				__LIB_32__::func_797();
			}
			if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != MISC::GET_HASH_KEY("clothes_shop_sp") || (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("lester1")) == 0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("michael4")) == 0))
			{
				if (iParam1 || ((((((!__LIB_0__::func_39(0) && !__LIB_0__::func_39(1)) && !__LIB_0__::func_39(2)) && !__LIB_0__::func_39(3)) && !__LIB_0__::func_39(4)) && !__LIB_0__::func_39(9)) && !__LIB_0__::func_39(10)))
				{
					Global_113386.f_2363.f_539[iVar0 /*65*/] = { Var2 };
					Global_113386.f_2363.f_539.f_2391[iVar0] = __LIB_0__::func_352(iParam0);
					iVar3 = 0;
					while (iVar3 < 12)
					{
						Global_113386.f_2363.f_539.f_204[iVar3 /*4*/][iVar0] = __LIB_6__::func_795(iParam0, __LIB_0__::func_33(iVar3));
						iVar3++;
					}
					iVar3 = 0;
					while (iVar3 < 12)
					{
						Global_113386.f_2363.f_539.f_204[iVar3 /*4*/][iVar0] = __LIB_6__::func_795(iParam0, __LIB_0__::func_33(iVar3));
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

void func_384(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)//Position - 0x3517B
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
		iVar0 = __LIB_20__::func_509(iParam0);
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
		if (__LIB_0__::func_317(iVar0))
		{
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_59 = uParam1->f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = uParam1->f_60;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = uParam1->f_61;
			if (func_349(iParam0, iVar1, &iVar2, 0))
			{
				func_341(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_62 = uParam1->f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = uParam1->f_63;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = uParam1->f_64;
			if (func_342(iParam0, iVar1, &iVar2))
			{
				func_341(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			bVar4 = func_548(iParam0);
			__LIB_0__::func_427(754, uParam1->f_60, Global_78127, 1, 0);
			__LIB_0__::func_427(755, uParam1->f_61, Global_78127, 1, 0);
			iVar5 = __LIB_0__::func_350(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
			if (iVar5 != -99)
			{
				iVar6 = -99;
				if (iVar1 == joaat("MP_M_Freemode_01"))
				{
					iVar6 = __LIB_18__::func_181(iVar5);
				}
				else if (iVar1 == joaat("MP_F_Freemode_01"))
				{
					iVar6 = __LIB_18__::func_186(iVar5);
				}
				if (iVar6 != -99 && iVar5 != iVar6)
				{
					iVar5 = iVar6;
				}
			}
			func_387(iParam0, 2, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			if (!bParam2)
			{
				iVar7 = __LIB_0__::func_350(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_387(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			}
			if (!bParam3)
			{
				iVar8 = __LIB_6__::func_766(iParam0, uParam1->f_39[0], uParam1->f_49[0], 0);
				func_387(iParam0, 14, iVar8, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			}
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iParam0 == PLAYER::PLAYER_PED_ID())
		{
			iVar9 = uParam1->f_59;
			if (iVar1 == joaat("MP_M_Freemode_01"))
			{
				iVar9 = __LIB_18__::func_181(iVar9);
			}
			else
			{
				iVar9 = __LIB_18__::func_186(iVar9);
			}
			__LIB_0__::func_427(753, iVar9, Global_78127, 1, 0);
			__LIB_0__::func_427(2053, iVar9, Global_78127, 1, 0);
			__LIB_6__::func_796(161, 1, -1, 1);
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

int func_387(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)//Position - 0x35657
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
		Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, iParam1, iParam2, -1) };
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
			func_509(iVar5, iParam1, iParam2, 1);
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
			uVar14 = { __LIB_11__::func_102(iVar5, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar14[iVar0] != -99)
			{
				if (iVar0 == 10 && uVar14.f_16)
				{
					Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, 10, 0, -1) };
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
						func_509(iVar5, 10, 0, 1);
					}
				}
				else
				{
					Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, iVar0, uVar14[iVar0], -1) };
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
								Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, 14, uVar15[iVar1], -1) };
								__LIB_6__::func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
								if (BitTest(Global_78130[1 /*14*/].f_6, 1))
								{
									func_509(iVar5, iVar0, uVar14[iVar0], 1);
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
								func_387(iParam0, iVar0, uVar14[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (BitTest(Global_78130[1 /*14*/].f_6, 1))
							{
								func_509(iVar5, iVar0, uVar14[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, iVar0, func_508(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					uVar16 = { __LIB_11__::func_102(iVar5, 0) };
					func_387(iParam0, iVar0, uVar16[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			iVar0++;
		}
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1), 0);
		Global_2883588 = uVar12;
		Global_2883589 = uVar13;
		if (iParam5 == 0)
		{
			iVar17 = __LIB_18__::func_468();
			if (iVar17 != -1)
			{
				__LIB_25__::func_43(iVar17, 0, iParam10);
			}
			func_502(iParam0, 11, uVar14[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar18 = { __LIB_18__::func_247(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, 14, uVar18[iVar1], -1) };
			__LIB_6__::func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
			if (BitTest(Global_78130[1 /*14*/].f_6, 1))
			{
				func_509(iVar5, 14, uVar18[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_78128 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = __LIB_40__::func_849(iParam0, iVar5, 14, uVar18[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_387(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_509(iVar5, iParam1, iParam2, 1);
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			if (BitTest(Global_78130[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HAIR"), 1))
			{
			}
			else if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 1, joaat("HAIR_SHRINK")))
			{
				func_387(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, iParam1, iParam2, -1) };
			}
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			func_494(iParam0);
		}
		if (iParam5 == 0)
		{
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = __LIB_40__::func_849(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_387(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = __LIB_40__::func_849(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_387(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					iVar27 = func_493(iVar5, iVar24, iVar23, iVar25);
					if (iVar27 == -99)
					{
						iVar27 = __LIB_40__::func_849(iParam0, iVar5, 11, iVar23, 3, 0);
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
							func_387(iParam0, 8, iVar29, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, iParam1, iParam2, -1) };
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
							iVar30 = __LIB_37__::func_821(iParam0, iParam2);
							iVar31 = __LIB_6__::func_809(iVar5, iVar23, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
							if (iVar31 != -99)
							{
								func_387(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, iParam1, iParam2, -1) };
								iVar8 = -99;
							}
							else if (iVar30 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								func_387(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, iParam1, iParam2, -1) };
							}
							else
							{
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									iVar32 = __LIB_0__::func_356(iVar5, 11, -1);
									Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, 11, iVar32, -1) };
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
								func_387(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, iParam1, iParam2, -1) };
							}
						}
					}
					else
					{
						Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, 11, iVar23, -1) };
						iVar34 = Global_78130[1 /*14*/].f_3;
						Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, 11, iParam2, -1) };
						iVar35 = Global_78130[1 /*14*/].f_3;
						if (iVar34 != iVar35)
						{
							iVar37 = __LIB_37__::func_821(iParam0, iParam2);
							Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, 8, iVar24, -1) };
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
										Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, 11, iVar38, -1) };
										iVar39 = __LIB_6__::func_809(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
									}
								}
								if (iVar5 == joaat("MP_F_Freemode_01") && ((iVar24 == 32 || iVar24 == 33) || iVar24 == 119))
								{
									if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_420(iVar5, iParam2, 11, 4), joaat("JACKET_ONLY"), 0))
									{
										iVar38 = __LIB_0__::func_356(iVar5, 11, -1);
										Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, 11, iVar38, -1) };
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
									Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, 11, iVar38, -1) };
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
								func_387(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_M_Freemode_01"))
							{
								iVar38 = __LIB_0__::func_356(iVar5, 11, -1);
								Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, 11, iVar38, -1) };
								iVar39 = __LIB_6__::func_809(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
								if (iVar39 == -99)
								{
									iVar39 = 240;
								}
								func_387(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_F_Freemode_01"))
							{
								func_387(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				func_481(iVar5, iParam2);
				if (!bParam13)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 10));
				}
			}
			func_502(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_493(iVar5, func_508(iParam0, 8, -1), iParam2, func_508(iParam0, 4, -1));
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam5 == 0)
			{
				if (iParam8 == -1)
				{
					iParam8 = __LIB_0__::func_534(2153, iParam10, 0);
				}
				if (iParam9 == -1)
				{
					iParam9 = __LIB_0__::func_534(2160, iParam10, 0);
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
				func_430(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar43 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar43, joaat("GLOVES"), 0))
			{
				iVar44 = __LIB_6__::func_795(iParam0, 11);
				iVar45 = __LIB_6__::func_795(iParam0, 4);
				iVar46 = func_493(iVar5, iParam2, iVar44, iVar45);
				if (iVar46 == -99)
				{
					iVar46 = __LIB_40__::func_849(iParam0, iVar5, 11, iVar44, 3, 0);
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
			func_502(iParam0, iParam1, iParam2, iParam6, 0);
			iVar49 = __LIB_6__::func_795(iParam0, 11);
			if (__LIB_6__::func_808(iVar5, iVar49, -1))
			{
				iVar50 = __LIB_6__::func_807(iVar5, iParam2, Global_78130[1 /*14*/].f_4);
				func_481(iVar5, iVar50);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_493(iVar5, iParam2, __LIB_6__::func_795(iParam0, 11), __LIB_6__::func_795(iParam0, 4));
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
				iVar52 = __LIB_0__::func_534(2100, iParam10, 0);
				iVar53 = __LIB_0__::func_534(2101, iParam10, 0);
				iVar54 = __LIB_0__::func_534(2102, iParam10, 0);
				fVar55 = __LIB_0__::func_424(135, iParam10);
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
				__LIB_31__::func_910(iParam0, iParam10);
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
						func_387(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			else if (iVar5 == joaat("MP_F_Freemode_01"))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_420(iVar5, iVar57, 11, 4), joaat("LOW2_OPEN_CHECK"), 0))
				{
					if (!__LIB_6__::func_806(iVar5, iParam2, __LIB_6__::func_807(iVar5, iVar58, 0)))
					{
						func_387(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_493(iVar5, __LIB_6__::func_795(iParam0, 8), __LIB_6__::func_795(iParam0, 11), iParam2);
			}
			iVar59 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar59, joaat("GLOVES"), 0))
			{
				iVar60 = func_493(iVar5, iVar58, iVar57, iParam2);
				if (iVar60 == -99)
				{
					iVar60 = __LIB_40__::func_849(iParam0, iVar5, 11, iVar57, 3, 0);
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
					iVar3 = __LIB_40__::func_849(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_387(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
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
								iVar6 = func_493(iVar5, iVar3, __LIB_6__::func_795(iParam0, 11), __LIB_6__::func_795(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = __LIB_40__::func_849(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_387(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						if (!func_407(iParam0, 9, iVar63))
						{
							func_387(iParam0, 9, iVar63, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_387(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
					{
						func_387(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 8)
			{
				iVar64 = __LIB_0__::func_534(2042, -1, 0);
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
						func_387(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("MP_F_Freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar65 = func_508(iParam0, 4, -1);
					iVar66 = iParam2;
				}
				else
				{
					iVar65 = iParam2;
					iVar66 = func_508(iParam0, 11, -1);
				}
				if (__LIB_6__::func_802(iVar5, 11, iVar66, -1))
				{
					if (!__LIB_6__::func_801(iVar5, 4, iVar65, -1))
					{
						if (__LIB_6__::func_800(iVar5, 4, iVar65, &uVar67))
						{
							func_387(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (__LIB_6__::func_801(iVar5, 4, iVar65, -1))
				{
					if (__LIB_6__::func_799(iVar5, 4, iVar65, &uVar67))
					{
						func_387(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_387(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_6__::func_758(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_387(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_387(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_6__::func_758(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_387(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_387(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_6__::func_758(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_387(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_387(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_6__::func_758(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_387(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				func_494(iParam0);
				iVar81 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
				iVar82 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
				iVar83 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar81, iVar82);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar83, joaat("FORCE_PROP"), 0))
				{
					iVar3 = __LIB_40__::func_849(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_387(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = __LIB_40__::func_849(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_387(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_388(iParam0, &uVar4))
		{
			func_387(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_387(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar8 != -99)
	{
		func_387(iParam0, 8, iVar8, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_387(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar10 != -1)
	{
		iVar84 = __LIB_0__::func_254(iVar5, func_508(iParam0, 3, -1), iVar10);
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
				func_387(iParam0, 3, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_388(int iParam0, var uParam1)//Position - 0x37501
{
	int iVar0;
	int iVar1;
	*uParam1 = func_508(PLAYER::PLAYER_PED_ID(), 2, -1);
	if (__LIB_0__::func_534(754, Global_78127, 0) != -99 && __LIB_6__::func_781())
	{
		if (__LIB_0__::func_214() == 4)
		{
			return 1;
		}
		if (__LIB_0__::func_534(754, Global_78127, 0) == 0 && __LIB_0__::func_534(755, Global_78127, 0) == 0)
		{
			if (__LIB_0__::func_421(161, Global_78127))
			{
				if (__LIB_0__::func_534(2053, Global_78127, 0) == 0)
				{
					return 0;
				}
			}
			else if (__LIB_0__::func_534(753, Global_78127, 0) == 0)
			{
				return 0;
			}
		}
		iVar0 = __LIB_0__::func_534(754, Global_78127, 0);
		iVar1 = __LIB_0__::func_534(755, Global_78127, 0);
		if (!func_407(iParam0, iVar1, iVar0))
		{
			if (__LIB_0__::func_421(161, Global_78127))
			{
				*uParam1 = __LIB_0__::func_534(2053, Global_78127, 0);
			}
			else
			{
				*uParam1 = __LIB_0__::func_534(753, Global_78127, 0);
			}
			__LIB_0__::func_427(754, -99, Global_78127, 1, 0);
			__LIB_0__::func_427(755, 2, Global_78127, 1, 0);
			return 1;
		}
	}
	return 0;
}

int func_407(int iParam0, int iParam1, int iParam2)//Position - 0x3B7BD
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
	Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar0, iParam1, iParam2, -1) };
	uVar2 = Global_2883588;
	uVar3 = Global_2883589;
	if (!BitTest(Global_78130[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar8 = { __LIB_11__::func_102(iVar0, iParam2) };
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
				if (!func_407(iParam0, iVar4, uVar8[iVar4]))
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
							if (!func_407(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_35__::func_544(iVar0, 14, iVar6, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar5)
									{
										if (func_407(iParam0, 14, iVar6))
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
						Global_78130[2 /*14*/] = { __LIB_35__::func_544(iVar0, iVar4, iVar1, -1) };
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
			if (__LIB_0__::func_534(1759, Global_78127, 0) != uVar8[10])
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
			if (!func_407(iParam0, 14, uVar11[iVar10]))
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
						return func_407(iParam0, 4, uVar18);
					}
				}
				else if (__LIB_6__::func_799(iVar0, 4, iParam2, &uVar18))
				{
					return func_407(iParam0, 4, uVar18);
				}
			}
			Global_78129 = (Global_78129 - 1);
		}
	}
	return 0;
}

void func_430(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x424D8
{
	int iVar0;
	int iVar1;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	__LIB_31__::func_926(MISC::GET_HASH_KEY("hairOverlay"), iParam0);
	iVar1 = __LIB_6__::func_805(iVar0, iParam1);
	if (iVar1 != -1)
	{
		if (iParam2 == -1)
		{
			iParam2 = Global_78127;
		}
		__LIB_25__::func_43(iVar1, 1, iParam2);
	}
	func_431(iParam0, bParam3, 0, -1);
}

void func_431(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x42525
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
		bVar3 = func_473(iParam0, 0);
		bVar4 = __LIB_31__::func_887(iParam0);
		bVar5 = func_464(iParam0, iParam3);
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
			if (__LIB_18__::func_432(iVar6, iVar0))
			{
				if (__LIB_6__::func_785(&Var1, iVar6, iVar2, iParam0, -1))
				{
					if (__LIB_25__::func_69(iParam0, &Var1, iVar6, Var1.f_4, Var1.f_8, bVar3, bVar4, bParam1, bVar5))
					{
						PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var1.f_4, Var1.f_5);
					}
				}
			}
			iVar6++;
		}
		if (__LIB_18__::func_432(123, iVar0))
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
					if (__LIB_18__::func_432(iVar10, iVar0))
					{
						if (__LIB_25__::func_69(iParam0, &(Var9.f_7), iVar10, Var9.f_2, Var9.f_6, bVar3, bVar4, bParam1, bVar5))
						{
							if (!func_433(Var9.f_2, Var9.f_3, iVar10))
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

int func_433(int iParam0, int iParam1, int iParam2)//Position - 0x438E0
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
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	switch (iParam0)
	{
		case joaat("mpSum2_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Sum2_Tee_000_M"):
				case joaat("MP_Sum2_Tee_000_F"):
					if (__LIB_0__::func_137(34505, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Sum2_Tee_000_M"));
					break;
				case joaat("MP_Sum2_Tee_001_M"):
				case joaat("MP_Sum2_Tee_001_F"):
					if (__LIB_0__::func_137(34375, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Sum2_Tee_001_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpTuner_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Tuner_Tee_000_M"):
				case joaat("MP_Tuner_Tee_000_F"):
					if (__LIB_11__::func_690(116, -1) >= __LIB_0__::func_238(116, 5, 9) || __LIB_0__::func_137(31760, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Tuner_Tee_000_M"));
					break;
				case joaat("MP_Tuner_Tee_002_M"):
				case joaat("MP_Tuner_Tee_002_F"):
					if (__LIB_0__::func_425(123, -1) || __LIB_0__::func_137(31761, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Tuner_Tee_002_M"));
					break;
				case joaat("MP_Tuner_Tee_003_M"):
				case joaat("MP_Tuner_Tee_003_F"):
					if (__LIB_0__::func_425(124, -1) || __LIB_0__::func_137(31762, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Tuner_Tee_003_M"));
					break;
				case joaat("MP_Tuner_Tee_005_M"):
				case joaat("MP_Tuner_Tee_005_F"):
					if (__LIB_0__::func_425(125, -1) || __LIB_0__::func_137(31763, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Tuner_Tee_005_M"));
					break;
				case joaat("MP_Tuner_Tee_006_M"):
				case joaat("MP_Tuner_Tee_006_F"):
					if (__LIB_0__::func_425(126, -1) || __LIB_0__::func_137(31764, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Tuner_Tee_006_M"));
					break;
				case joaat("MP_Tuner_Tee_008_M"):
				case joaat("MP_Tuner_Tee_008_F"):
					if (__LIB_0__::func_137(31768, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Tuner_Tee_008_M"));
					break;
				case joaat("MP_Tuner_Tee_010_M"):
				case joaat("MP_Tuner_Tee_010_F"):
					if (__LIB_0__::func_137(31769, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Tuner_Tee_010_M"));
					break;
				case joaat("MP_Tuner_Tee_011_M"):
				case joaat("MP_Tuner_Tee_011_F"):
					if (__LIB_0__::func_137(31770, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Tuner_Tee_011_M"));
					break;
				case joaat("MP_Tuner_Tee_012_M"):
				case joaat("MP_Tuner_Tee_012_F"):
					if (__LIB_0__::func_137(31771, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Tuner_Tee_012_M"));
					break;
				case joaat("MP_Tuner_Tee_013_M"):
				case joaat("MP_Tuner_Tee_013_F"):
					if (__LIB_0__::func_137(31772, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Tuner_Tee_013_M"));
					break;
				case joaat("MP_Tuner_Tee_014_M"):
				case joaat("MP_Tuner_Tee_014_F"):
					if (__LIB_0__::func_137(31773, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Tuner_Tee_014_M"));
					break;
				case joaat("MP_Tuner_Tee_015_M"):
				case joaat("MP_Tuner_Tee_015_F"):
					if (__LIB_0__::func_137(31774, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Tuner_Tee_015_M"));
					break;
				case joaat("MP_Tuner_Tee_016_M"):
				case joaat("MP_Tuner_Tee_016_F"):
					if (__LIB_0__::func_137(31775, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Tuner_Tee_016_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpHeist4_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Heist4_Tee_030_M"):
				case joaat("MP_Heist4_Tee_030_F"):
					if (__LIB_0__::func_137(30533, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_030_M"));
					break;
				case joaat("MP_Heist4_Tee_032_M"):
				case joaat("MP_Heist4_Tee_032_F"):
					if (__LIB_0__::func_137(30534, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_032_M"));
					break;
				case joaat("MP_Heist4_Tee_028_M"):
				case joaat("MP_Heist4_Tee_028_F"):
					if (__LIB_0__::func_137(30535, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_028_M"));
					break;
				case joaat("MP_Heist4_Tee_029_M"):
				case joaat("MP_Heist4_Tee_029_F"):
					if (__LIB_0__::func_137(30536, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_029_M"));
					break;
				case joaat("MP_Heist4_Tee_031_M"):
				case joaat("MP_Heist4_Tee_031_F"):
					if (__LIB_0__::func_137(30537, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_031_M"));
					break;
				case joaat("MP_Heist4_Tee_022_M"):
				case joaat("MP_Heist4_Tee_022_F"):
					if (__LIB_0__::func_137(30538, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_022_M"));
					break;
				case joaat("MP_Heist4_Tee_023_M"):
				case joaat("MP_Heist4_Tee_023_F"):
					if (__LIB_0__::func_137(30539, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_023_M"));
					break;
				case joaat("MP_Heist4_Tee_020_M"):
				case joaat("MP_Heist4_Tee_020_F"):
					if (__LIB_0__::func_137(30540, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_020_M"));
					break;
				case joaat("MP_Heist4_Tee_021_M"):
				case joaat("MP_Heist4_Tee_021_F"):
					if (__LIB_0__::func_137(30541, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_021_M"));
					break;
				case joaat("MP_Heist4_Tee_003_M"):
				case joaat("MP_Heist4_Tee_003_F"):
					if (__LIB_0__::func_137(30542, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_003_M"));
					break;
				case joaat("MP_Heist4_Tee_004_M"):
				case joaat("MP_Heist4_Tee_004_F"):
					if (__LIB_0__::func_137(30543, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_004_M"));
					break;
				case joaat("MP_Heist4_Tee_005_M"):
				case joaat("MP_Heist4_Tee_005_F"):
					if (__LIB_0__::func_137(30544, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_005_M"));
					break;
				case joaat("MP_Heist4_Tee_006_M"):
				case joaat("MP_Heist4_Tee_006_F"):
					if (__LIB_0__::func_137(30545, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_006_M"));
					break;
				case joaat("MP_Heist4_Tee_027_M"):
				case joaat("MP_Heist4_Tee_027_F"):
					if (__LIB_0__::func_137(30546, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_027_M"));
					break;
				case joaat("MP_Heist4_Tee_026_M"):
				case joaat("MP_Heist4_Tee_026_F"):
					if (__LIB_0__::func_137(30547, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_026_M"));
					break;
				case joaat("MP_Heist4_Tee_025_M"):
				case joaat("MP_Heist4_Tee_025_F"):
					if (__LIB_0__::func_137(30548, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_025_M"));
					break;
				case joaat("MP_Heist4_Tee_024_M"):
				case joaat("MP_Heist4_Tee_024_F"):
					if (__LIB_0__::func_137(30549, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_024_M"));
					break;
				case joaat("MP_Heist4_Tee_002_M"):
				case joaat("MP_Heist4_Tee_002_F"):
					if (__LIB_0__::func_137(30550, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_002_M"));
					break;
				case joaat("MP_Heist4_Tee_001_M"):
				case joaat("MP_Heist4_Tee_001_F"):
					if (__LIB_0__::func_137(30551, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_001_M"));
					break;
				case joaat("MP_Heist4_Tee_000_M"):
				case joaat("MP_Heist4_Tee_000_F"):
					if (__LIB_0__::func_137(30552, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_000_M"));
					break;
				case joaat("MP_Heist4_Tee_007_M"):
				case joaat("MP_Heist4_Tee_007_F"):
					if (__LIB_0__::func_137(30553, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_007_M"));
					break;
				case joaat("MP_Heist4_Tee_008_M"):
				case joaat("MP_Heist4_Tee_008_F"):
					if (__LIB_0__::func_137(30554, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_008_M"));
					break;
				case joaat("MP_Heist4_Tee_009_M"):
				case joaat("MP_Heist4_Tee_009_F"):
					if (__LIB_0__::func_137(30555, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_009_M"));
					break;
				case joaat("MP_Heist4_Tee_010_M"):
				case joaat("MP_Heist4_Tee_010_F"):
					if (__LIB_0__::func_137(30556, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_010_M"));
					break;
				case joaat("MP_Heist4_Tee_011_M"):
				case joaat("MP_Heist4_Tee_011_F"):
					if (__LIB_0__::func_137(30557, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_011_M"));
					break;
				case joaat("MP_Heist4_Tee_012_M"):
				case joaat("MP_Heist4_Tee_012_F"):
					if (__LIB_0__::func_137(30524, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_012_M"));
					break;
				case joaat("MP_Heist4_Tee_013_M"):
				case joaat("MP_Heist4_Tee_013_F"):
					if (__LIB_0__::func_137(30525, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_013_M"));
					break;
				case joaat("MP_Heist4_Tee_014_M"):
				case joaat("MP_Heist4_Tee_014_F"):
					if (__LIB_0__::func_137(30526, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_014_M"));
					break;
				case joaat("MP_Heist4_Tee_015_M"):
				case joaat("MP_Heist4_Tee_015_F"):
					if (__LIB_0__::func_137(30527, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_015_M"));
					break;
				case joaat("MP_Heist4_Tee_016_M"):
				case joaat("MP_Heist4_Tee_016_F"):
					if (__LIB_0__::func_137(30528, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_016_M"));
					break;
				case joaat("MP_Heist4_Tee_017_M"):
				case joaat("MP_Heist4_Tee_017_F"):
					if (__LIB_0__::func_137(30529, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_017_M"));
					break;
				case joaat("MP_Heist4_Tee_018_M"):
				case joaat("MP_Heist4_Tee_018_F"):
					if (__LIB_0__::func_137(30530, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_018_M"));
					break;
				case joaat("MP_Heist4_Tee_019_M"):
				case joaat("MP_Heist4_Tee_019_F"):
					if (__LIB_0__::func_137(30531, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_019_M"));
					break;
				case joaat("MP_Heist4_Tee_033_M"):
				case joaat("MP_Heist4_Tee_033_F"):
					if (__LIB_0__::func_137(30532, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_033_M"));
					break;
				case joaat("MP_Heist4_Tee_045_M"):
				case joaat("MP_Heist4_Tee_045_F"):
					if (__LIB_0__::func_137(30570, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_045_M"));
					break;
				case joaat("MP_Heist4_Tee_046_M"):
				case joaat("MP_Heist4_Tee_046_F"):
					if (__LIB_0__::func_137(30571, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_046_M"));
					break;
				case joaat("MP_Heist4_Tee_048_M"):
				case joaat("MP_Heist4_Tee_048_F"):
					if (__LIB_0__::func_137(30568, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_048_M"));
					break;
				case joaat("MP_Heist4_Tee_047_M"):
				case joaat("MP_Heist4_Tee_047_F"):
					if (__LIB_0__::func_137(30569, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_047_M"));
					break;
				case joaat("MP_Heist4_Tee_049_M"):
				case joaat("MP_Heist4_Tee_049_F"):
					if (__LIB_0__::func_137(30634, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_049_M"));
					break;
				case joaat("MP_Heist4_Tee_051_M"):
				case joaat("MP_Heist4_Tee_051_F"):
					if (__LIB_0__::func_137(30635, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_051_M"));
					break;
				case joaat("MP_Heist4_Tee_053_M"):
				case joaat("MP_Heist4_Tee_053_F"):
					if (__LIB_0__::func_137(30636, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_053_M"));
					break;
				case joaat("MP_Heist4_Tee_054_M"):
				case joaat("MP_Heist4_Tee_054_F"):
					if (__LIB_0__::func_137(30637, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_054_M"));
					break;
				case joaat("MP_Heist4_Tee_055_M"):
				case joaat("MP_Heist4_Tee_055_F"):
					if (__LIB_0__::func_137(30703, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_055_M"));
					break;
				case joaat("MP_Heist4_Tee_057_M"):
				case joaat("MP_Heist4_Tee_057_F"):
					if (__LIB_0__::func_137(30704, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_057_M"));
					break;
				case joaat("MP_Heist4_Tee_059_M"):
				case joaat("MP_Heist4_Tee_059_F"):
					if (__LIB_0__::func_137(30700, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_059_M"));
					break;
				case joaat("MP_Heist4_Tee_061_M"):
				case joaat("MP_Heist4_Tee_061_F"):
					if (__LIB_0__::func_137(30701, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_061_M"));
					break;
				case joaat("MP_Heist4_Tee_063_M"):
				case joaat("MP_Heist4_Tee_063_F"):
					if (__LIB_0__::func_137(30702, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_063_M"));
					break;
				case joaat("MP_Heist4_Tee_065_M"):
				case joaat("MP_Heist4_Tee_065_F"):
					if (__LIB_0__::func_137(30699, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_065_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpSum_overlays"):
			switch (iParam1)
			{
				case joaat("mpSum_Tee_000_M"):
				case joaat("mpSum_Tee_000_F"):
					if (__LIB_0__::func_137(30260, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_000_M"));
					break;
				case joaat("mpSum_Tee_001_M"):
				case joaat("mpSum_Tee_001_F"):
					if (__LIB_0__::func_137(30261, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_001_M"));
					break;
				case joaat("mpSum_Tee_002_M"):
				case joaat("mpSum_Tee_002_F"):
					if (__LIB_0__::func_137(30262, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_002_M"));
					break;
				case joaat("mpSum_Tee_003_M"):
				case joaat("mpSum_Tee_003_F"):
					if (__LIB_0__::func_137(30263, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_003_M"));
					break;
				case joaat("mpSum_Tee_004_M"):
				case joaat("mpSum_Tee_004_F"):
					if (__LIB_0__::func_137(30264, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_004_M"));
					break;
				case joaat("mpSum_Tee_005_M"):
				case joaat("mpSum_Tee_005_F"):
					if (__LIB_0__::func_137(30265, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_005_M"));
					break;
				case joaat("mpSum_Tee_006_M"):
				case joaat("mpSum_Tee_006_F"):
					if (__LIB_0__::func_137(30266, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_006_M"));
					break;
				case joaat("mpSum_Tee_007_M"):
				case joaat("mpSum_Tee_007_F"):
					if (__LIB_0__::func_137(30267, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_007_M"));
					break;
				case joaat("mpSum_Tee_008_M"):
				case joaat("mpSum_Tee_008_F"):
					if (__LIB_0__::func_137(30268, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_008_M"));
					break;
				case joaat("mpSum_Tee_009_M"):
				case joaat("mpSum_Tee_009_F"):
					if (__LIB_0__::func_137(30269, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_009_M"));
					break;
				case joaat("mpSum_Tee_010_M"):
				case joaat("mpSum_Tee_010_F"):
					if (__LIB_0__::func_137(30270, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_010_M"));
					break;
				case joaat("mpSum_Tee_011_M"):
				case joaat("mpSum_Tee_011_F"):
					if (__LIB_0__::func_137(30271, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_011_M"));
					break;
				case joaat("mpSum_Tee_012_M"):
				case joaat("mpSum_Tee_012_F"):
					if (__LIB_0__::func_137(30272, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_012_M"));
					break;
				case joaat("mpSum_Tee_013_M"):
				case joaat("mpSum_Tee_013_F"):
					if (__LIB_0__::func_137(30273, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_013_M"));
					break;
				case joaat("mpSum_Tee_014_M"):
				case joaat("mpSum_Tee_014_F"):
					if (__LIB_0__::func_137(30274, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_014_M"));
					break;
				case joaat("mpSum_Tee_015_M"):
				case joaat("mpSum_Tee_015_F"):
					if (__LIB_0__::func_137(30275, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_015_M"));
					break;
				case joaat("mpSum_Tee_016_M"):
				case joaat("mpSum_Tee_016_F"):
					if (__LIB_0__::func_137(30276, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_016_M"));
					break;
				case joaat("mpSum_Tee_017_M"):
				case joaat("mpSum_Tee_017_F"):
					if (__LIB_0__::func_137(30277, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_017_M"));
					break;
				case joaat("mpSum_Tee_018_M"):
				case joaat("mpSum_Tee_018_F"):
					if (__LIB_0__::func_137(30278, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_018_M"));
					break;
				case joaat("mpSum_Tee_019_M"):
				case joaat("mpSum_Tee_019_F"):
					if (__LIB_0__::func_137(30279, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_019_M"));
					break;
				case joaat("mpSum_Tee_020_M"):
				case joaat("mpSum_Tee_020_F"):
					if (__LIB_0__::func_137(30280, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_020_M"));
					break;
				case joaat("mpSum_Tee_021_M"):
				case joaat("mpSum_Tee_021_F"):
					if (__LIB_0__::func_137(30281, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_021_M"));
					break;
				case joaat("mpSum_Tee_022_M"):
				case joaat("mpSum_Tee_022_F"):
					if (__LIB_0__::func_137(30282, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_022_M"));
					break;
				case joaat("mpSum_Tee_023_M"):
				case joaat("mpSum_Tee_023_F"):
					if (__LIB_0__::func_137(30283, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_023_M"));
					break;
				case joaat("mpSum_Tee_024_M"):
				case joaat("mpSum_Tee_024_F"):
					if (__LIB_0__::func_137(30284, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_024_M"));
					break;
				case joaat("mpSum_Tee_025_M"):
				case joaat("mpSum_Tee_025_F"):
					if (__LIB_0__::func_137(30285, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_025_M"));
					break;
				case joaat("mpSum_Tee_026_M"):
				case joaat("mpSum_Tee_026_F"):
					if (__LIB_0__::func_137(30286, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_026_M"));
					break;
				case joaat("mpSum_Tee_027_M"):
				case joaat("mpSum_Tee_027_F"):
					if (__LIB_0__::func_137(30287, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_027_M"));
					break;
				case joaat("mpSum_Tee_028_M"):
				case joaat("mpSum_Tee_028_F"):
					if (__LIB_0__::func_137(30288, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_028_M"));
					break;
				case joaat("mpSum_Tee_029_M"):
				case joaat("mpSum_Tee_029_F"):
					if (__LIB_0__::func_137(30289, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_029_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpSum_overlays"):
			switch (iParam1)
			{
				case joaat("mpSum_Tee_030_M"):
				case joaat("mpSum_Tee_030_F"):
					if (__LIB_0__::func_137(28255, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_030_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpSum_overlays"):
			switch (iParam1)
			{
				case joaat("mpSum_Tee_031_M"):
				case joaat("mpSum_Tee_031_F"):
					if (__LIB_0__::func_425(89, -1) || __LIB_0__::func_137(30254, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_031_M"));
					break;
				case joaat("mpSum_Tee_032_M"):
				case joaat("mpSum_Tee_032_F"):
					if (__LIB_0__::func_425(90, -1) || __LIB_0__::func_137(30255, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_032_M"));
					break;
				case joaat("mpSum_Tee_033_M"):
				case joaat("mpSum_Tee_033_F"):
					if (__LIB_0__::func_425(92, -1) || __LIB_0__::func_137(30256, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_033_M"));
					break;
				case joaat("mpSum_Tee_034_M"):
				case joaat("mpSum_Tee_034_F"):
					if ((((__LIB_0__::func_425(89, -1) && __LIB_0__::func_425(90, -1)) && __LIB_0__::func_425(92, -1)) && __LIB_0__::func_425(91, -1)) || __LIB_0__::func_137(30257, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_034_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_001_F"):
				case joaat("mpHeist3_Tee_001_M"):
					if (__LIB_0__::func_425(78, -1) || __LIB_0__::func_137(28199, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_001_M"));
					break;
				case joaat("mpHeist3_Tee_000_F"):
				case joaat("mpHeist3_Tee_000_M"):
					if (((__LIB_0__::func_425(77, -1) && __LIB_0__::func_425(78, -1)) && __LIB_11__::func_690(92, -1) >= __LIB_0__::func_238(92, 5, 9)) || __LIB_0__::func_137(28200, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_000_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_007_F"):
				case joaat("mpHeist3_Tee_008_F"):
				case joaat("mpHeist3_Tee_009_F"):
				case joaat("mpHeist3_Tee_007_M"):
				case joaat("mpHeist3_Tee_008_M"):
				case joaat("mpHeist3_Tee_009_M"):
					if (((__LIB_11__::func_690(93, -1) >= __LIB_0__::func_238(93, 5, 9) && __LIB_0__::func_425(79, -1)) && __LIB_0__::func_425(80, -1)) || __LIB_0__::func_137(28204, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, ((iParam1 == joaat("mpHeist3_Tee_007_M") || iParam1 == joaat("mpHeist3_Tee_008_M")) || iParam1 == joaat("mpHeist3_Tee_009_M")));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_004_F"):
				case joaat("mpHeist3_Tee_004_M"):
					if (__LIB_0__::func_425(81, -1) || __LIB_0__::func_137(28206, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_004_M"));
					break;
				case joaat("mpHeist3_Tee_005_F"):
				case joaat("mpHeist3_Tee_005_M"):
					if (__LIB_11__::func_690(94, -1) >= __LIB_0__::func_238(94, 5, 9) || __LIB_0__::func_137(28207, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_005_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_006_F"):
				case joaat("mpHeist3_Tee_006_M"):
					if (((__LIB_0__::func_425(84, -1) && __LIB_0__::func_425(85, -1)) && __LIB_11__::func_690(97, -1) >= __LIB_0__::func_238(97, 5, 9)) || __LIB_0__::func_137(28212, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_006_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_002_F"):
				case joaat("mpHeist3_Tee_002_M"):
					if (__LIB_0__::func_137(28249, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_002_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_013_F"):
				case joaat("mpHeist3_Tee_013_M"):
					if (__LIB_0__::func_137(28183, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_013_M"));
					break;
				case joaat("mpHeist3_Tee_014_F"):
				case joaat("mpHeist3_Tee_014_M"):
					if (__LIB_0__::func_137(28182, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_014_M"));
					break;
				case joaat("mpHeist3_Tee_015_F"):
				case joaat("mpHeist3_Tee_015_M"):
					if (__LIB_0__::func_137(28184, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_015_M"));
					break;
				case joaat("mpHeist3_Tee_016_F"):
				case joaat("mpHeist3_Tee_016_M"):
					if (__LIB_0__::func_137(28181, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_016_M"));
					break;
				case joaat("mpHeist3_Tee_017_F"):
				case joaat("mpHeist3_Tee_017_M"):
					if (__LIB_0__::func_137(28178, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_017_M"));
					break;
				case joaat("mpHeist3_Tee_018_F"):
				case joaat("mpHeist3_Tee_018_M"):
					if (__LIB_0__::func_137(28177, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_018_M"));
					break;
				case joaat("mpHeist3_Tee_019_F"):
				case joaat("mpHeist3_Tee_019_M"):
					if (__LIB_0__::func_137(28176, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_019_M"));
					break;
				case joaat("mpHeist3_Tee_020_F"):
				case joaat("mpHeist3_Tee_020_M"):
					if (__LIB_0__::func_137(28180, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_020_M"));
					break;
				case joaat("mpHeist3_Tee_021_F"):
				case joaat("mpHeist3_Tee_021_M"):
					if (__LIB_0__::func_137(28179, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_021_M"));
					break;
				case joaat("mpHeist3_Tee_022_F"):
				case joaat("mpHeist3_Tee_022_M"):
					if (((((((((__LIB_0__::func_137(28176, -1) && __LIB_0__::func_137(28177, -1)) && __LIB_0__::func_137(28178, -1)) && __LIB_0__::func_137(28179, -1)) && __LIB_0__::func_137(28180, -1)) && __LIB_0__::func_137(28181, -1)) && __LIB_0__::func_137(28182, -1)) && __LIB_0__::func_137(28183, -1)) && __LIB_0__::func_137(28184, -1)) || __LIB_0__::func_137(28221, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_022_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_023_F"):
				case joaat("mpHeist3_Tee_023_M"):
					if (__LIB_0__::func_137(28191, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_023_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_011_F"):
				case joaat("mpHeist3_Tee_011_M"):
					if (__LIB_0__::func_137(28190, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_011_M"));
					break;
				case joaat("mpHeist3_Tee_012_F"):
				case joaat("mpHeist3_Tee_012_M"):
					if (__LIB_0__::func_137(28189, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_012_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_003_F"):
				case joaat("mpHeist3_Tee_003_M"):
					if (__LIB_6__::func_804(0, 1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_003_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_010_F"):
				case joaat("mpHeist3_Tee_010_M"):
					if ((((((((((((((((((__LIB_0__::func_425(77, -1) && __LIB_0__::func_425(78, -1)) && __LIB_11__::func_690(92, -1) >= __LIB_0__::func_238(92, 5, 9)) && __LIB_11__::func_690(93, -1) >= __LIB_0__::func_238(93, 5, 9)) && __LIB_0__::func_425(79, -1)) && __LIB_0__::func_425(80, -1)) && __LIB_0__::func_425(81, -1)) && __LIB_11__::func_690(94, -1) >= __LIB_0__::func_238(94, 5, 9)) && __LIB_11__::func_690(95, -1) >= __LIB_0__::func_238(95, 5, 9)) && __LIB_0__::func_425(82, -1)) && __LIB_0__::func_425(83, -1)) && __LIB_11__::func_690(96, -1) >= __LIB_0__::func_238(96, 5, 9)) && __LIB_0__::func_425(84, -1)) && __LIB_0__::func_425(85, -1)) && __LIB_11__::func_690(97, -1) >= __LIB_0__::func_238(97, 5, 9)) && __LIB_0__::func_425(86, -1)) && __LIB_0__::func_425(87, -1)) && __LIB_0__::func_425(88, -1)) || __LIB_0__::func_137(28222, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_010_M"));
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mpVinewood_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Vinewood_Tat_023_M"):
				case joaat("MP_Vinewood_Tat_023_F"):
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Vinewood_Tat_023_M"));
					break;
				case joaat("MP_Vinewood_Tat_030_M"):
				case joaat("MP_Vinewood_Tat_030_F"):
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Vinewood_Tat_030_M"));
					break;
				case joaat("CasinoTop_M_21"):
				case joaat("CasinoTop_F_21"):
					if (__LIB_0__::func_137(27109, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("CasinoTop_M_21"));
					break;
				case joaat("CasinoTop_M_23"):
				case joaat("CasinoTop_F_23"):
					if (__LIB_0__::func_137(27110, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("CasinoTop_M_23"));
					break;
				case joaat("CasinoTop_M_2"):
				case joaat("CasinoTop_F_2"):
					if (__LIB_0__::func_137(27111, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("CasinoTop_M_2"));
					break;
				case joaat("CasinoTop_M_4"):
				case joaat("CasinoTop_F_4"):
					if (__LIB_0__::func_137(27112, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("CasinoTop_M_4"));
					break;
				case joaat("CasinoTop_M_6"):
				case joaat("CasinoTop_F_6"):
					if (__LIB_0__::func_137(27113, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("CasinoTop_M_6"));
					break;
				case joaat("CasinoTop_M_10"):
				case joaat("CasinoTop_F_10"):
					if (__LIB_0__::func_137(27114, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("CasinoTop_M_10"));
					break;
				case joaat("CasinoTop_M_22"):
				case joaat("CasinoTop_F_22"):
					if (__LIB_0__::func_137(27115, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("CasinoTop_M_22"));
					break;
			}
			break;
		case joaat("mpChristmas2018_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Christmas2018_Tee_000_M"):
				case joaat("MP_Christmas2018_Tee_000_F"):
					if (__LIB_0__::func_137(25032, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_000_M"));
					break;
				case joaat("MP_Christmas2018_Tee_001_M"):
				case joaat("MP_Christmas2018_Tee_001_F"):
					if (__LIB_0__::func_137(25033, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_001_M"));
					break;
				case joaat("MP_Christmas2018_Tee_002_M"):
				case joaat("MP_Christmas2018_Tee_002_F"):
					if (__LIB_0__::func_137(25034, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_002_M"));
					break;
				case joaat("MP_Christmas2018_Tee_003_M"):
				case joaat("MP_Christmas2018_Tee_003_F"):
					if (__LIB_0__::func_137(25035, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_003_M"));
					break;
				case joaat("MP_Christmas2018_Tee_004_M"):
				case joaat("MP_Christmas2018_Tee_004_F"):
					if (__LIB_0__::func_137(25036, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_004_M"));
					break;
				case joaat("MP_Christmas2018_Tee_005_M"):
				case joaat("MP_Christmas2018_Tee_005_F"):
					if (__LIB_0__::func_137(25037, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_005_M"));
					break;
				case joaat("MP_Christmas2018_Tee_006_M"):
				case joaat("MP_Christmas2018_Tee_006_F"):
					if (__LIB_0__::func_137(25038, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_006_M"));
					break;
				case joaat("MP_Christmas2018_Tee_007_M"):
				case joaat("MP_Christmas2018_Tee_007_F"):
					if (__LIB_0__::func_137(25039, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_007_M"));
					break;
				case joaat("MP_Christmas2018_Tee_008_M"):
				case joaat("MP_Christmas2018_Tee_008_F"):
					if (__LIB_0__::func_137(25040, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_008_M"));
					break;
				case joaat("MP_Christmas2018_Tee_009_M"):
				case joaat("MP_Christmas2018_Tee_009_F"):
					if (__LIB_0__::func_137(25041, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_009_M"));
					break;
				case joaat("MP_Christmas2018_Tee_010_M"):
				case joaat("MP_Christmas2018_Tee_010_F"):
					if (__LIB_0__::func_137(25042, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_010_M"));
					break;
				case joaat("MP_Christmas2018_Tee_011_M"):
				case joaat("MP_Christmas2018_Tee_011_F"):
					if (__LIB_0__::func_137(25043, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_011_M"));
					break;
				case joaat("MP_Christmas2018_Tee_012_M"):
				case joaat("MP_Christmas2018_Tee_012_F"):
					if (__LIB_0__::func_137(25044, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_012_M"));
					break;
				case joaat("MP_Christmas2018_Tee_013_M"):
				case joaat("MP_Christmas2018_Tee_013_F"):
					if (__LIB_0__::func_137(25045, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_013_M"));
					break;
				case joaat("MP_Christmas2018_Tee_014_M"):
				case joaat("MP_Christmas2018_Tee_014_F"):
					if (__LIB_0__::func_137(25046, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_014_M"));
					break;
				case joaat("MP_Christmas2018_Tee_015_M"):
				case joaat("MP_Christmas2018_Tee_015_F"):
					if (__LIB_0__::func_137(25047, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_015_M"));
					break;
				case joaat("MP_Christmas2018_Tee_016_M"):
				case joaat("MP_Christmas2018_Tee_016_F"):
					if (__LIB_0__::func_137(25048, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_016_M"));
					break;
				case joaat("MP_Christmas2018_Tee_017_M"):
				case joaat("MP_Christmas2018_Tee_017_F"):
					if (__LIB_0__::func_137(25049, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_017_M"));
					break;
				case joaat("MP_Christmas2018_Tee_018_M"):
				case joaat("MP_Christmas2018_Tee_018_F"):
					if (__LIB_0__::func_137(25050, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_018_M"));
					break;
				case joaat("MP_Christmas2018_Tee_019_M"):
				case joaat("MP_Christmas2018_Tee_019_F"):
					if (__LIB_0__::func_137(25051, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_019_M"));
					break;
				case joaat("MP_Christmas2018_Tee_020_M"):
				case joaat("MP_Christmas2018_Tee_020_F"):
					if (__LIB_0__::func_137(25052, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_020_M"));
					break;
				case joaat("MP_Christmas2018_Tee_021_M"):
				case joaat("MP_Christmas2018_Tee_021_F"):
					if (__LIB_0__::func_137(25053, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_021_M"));
					break;
				case joaat("MP_Christmas2018_Tee_022_M"):
				case joaat("MP_Christmas2018_Tee_022_F"):
					if (__LIB_0__::func_137(25054, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_022_M"));
					break;
				case joaat("MP_Christmas2018_Tee_023_M"):
				case joaat("MP_Christmas2018_Tee_023_F"):
					if (__LIB_0__::func_137(25055, -1))
					{
						return 0;
					}
					if (__LIB_0__::func_137(27077, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_023_M"));
					break;
				case joaat("MP_Christmas2018_Tee_024_M"):
				case joaat("MP_Christmas2018_Tee_024_F"):
					if (__LIB_0__::func_137(25056, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_024_M"));
					break;
				case joaat("MP_Christmas2018_Tee_025_M"):
				case joaat("MP_Christmas2018_Tee_025_F"):
					if (__LIB_0__::func_137(25057, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_025_M"));
					break;
				case joaat("MP_Christmas2018_Tee_026_M"):
				case joaat("MP_Christmas2018_Tee_026_F"):
					if (__LIB_0__::func_137(25058, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_026_M"));
					break;
				case joaat("MP_Christmas2018_Tee_027_M"):
				case joaat("MP_Christmas2018_Tee_027_F"):
					if (__LIB_0__::func_137(25059, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_027_M"));
					break;
				case joaat("MP_Christmas2018_Tee_028_M"):
				case joaat("MP_Christmas2018_Tee_028_F"):
					if (__LIB_0__::func_137(25060, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_028_M"));
					break;
				case joaat("MP_Christmas2018_Tee_029_M"):
				case joaat("MP_Christmas2018_Tee_029_F"):
					if (__LIB_0__::func_137(25061, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_029_M"));
					break;
				case joaat("MP_Christmas2018_Tee_030_M"):
				case joaat("MP_Christmas2018_Tee_030_F"):
					if (__LIB_0__::func_137(25062, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_030_M"));
					break;
				case joaat("MP_Christmas2018_Tee_031_M"):
				case joaat("MP_Christmas2018_Tee_031_F"):
					if (__LIB_0__::func_137(25063, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_031_M"));
					break;
				case joaat("MP_Christmas2018_Tee_032_M"):
				case joaat("MP_Christmas2018_Tee_032_F"):
					if (__LIB_0__::func_137(25064, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_032_M"));
					break;
				case joaat("MP_Christmas2018_Tee_033_M"):
				case joaat("MP_Christmas2018_Tee_033_F"):
					if (__LIB_0__::func_137(25065, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_033_M"));
					break;
				case joaat("MP_Christmas2018_Tee_034_M"):
				case joaat("MP_Christmas2018_Tee_034_F"):
					if (__LIB_0__::func_137(25066, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_034_M"));
					break;
				case joaat("MP_Christmas2018_Tee_035_M"):
				case joaat("MP_Christmas2018_Tee_035_F"):
					if (__LIB_0__::func_137(25067, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_035_M"));
					break;
				case joaat("MP_Christmas2018_Tee_036_M"):
				case joaat("MP_Christmas2018_Tee_036_F"):
					if (__LIB_0__::func_137(25068, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_036_M"));
					break;
				case joaat("MP_Christmas2018_Tee_037_M"):
				case joaat("MP_Christmas2018_Tee_037_F"):
					if (__LIB_0__::func_137(25069, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_037_M"));
					break;
				case joaat("MP_Christmas2018_Tee_038_M"):
				case joaat("MP_Christmas2018_Tee_038_F"):
					if (__LIB_0__::func_137(25070, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_038_M"));
					break;
				case joaat("MP_Christmas2018_Tee_039_M"):
				case joaat("MP_Christmas2018_Tee_039_F"):
					if (__LIB_0__::func_137(25071, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_039_M"));
					break;
				case joaat("MP_Christmas2018_Tee_040_M"):
				case joaat("MP_Christmas2018_Tee_040_F"):
					if (__LIB_0__::func_137(25072, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_040_M"));
					break;
				case joaat("MP_Christmas2018_Tee_041_M"):
				case joaat("MP_Christmas2018_Tee_041_F"):
					if (__LIB_0__::func_137(25073, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_041_M"));
					break;
				case joaat("MP_Christmas2018_Tee_042_M"):
				case joaat("MP_Christmas2018_Tee_042_F"):
					if (__LIB_0__::func_137(25074, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_042_M"));
					break;
				case joaat("MP_Christmas2018_Tee_043_M"):
				case joaat("MP_Christmas2018_Tee_043_F"):
					if (__LIB_0__::func_137(25075, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_043_M"));
					break;
				case joaat("MP_Christmas2018_Tee_044_M"):
				case joaat("MP_Christmas2018_Tee_044_F"):
					if (__LIB_0__::func_137(25076, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_044_M"));
					break;
				case joaat("MP_Christmas2018_Tee_045_M"):
				case joaat("MP_Christmas2018_Tee_045_F"):
					if (__LIB_0__::func_137(25077, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_045_M"));
					break;
				case joaat("MP_Christmas2018_Tee_046_M"):
				case joaat("MP_Christmas2018_Tee_046_F"):
					if (__LIB_0__::func_137(25078, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_046_M"));
					break;
				case joaat("MP_Christmas2018_Tee_047_M"):
				case joaat("MP_Christmas2018_Tee_047_F"):
					if (__LIB_0__::func_137(25079, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_047_M"));
					break;
				case joaat("MP_Christmas2018_Tee_048_M"):
				case joaat("MP_Christmas2018_Tee_048_F"):
					if (__LIB_0__::func_137(25080, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_048_M"));
					break;
				case joaat("MP_Christmas2018_Tee_049_M"):
				case joaat("MP_Christmas2018_Tee_049_F"):
					if (__LIB_0__::func_137(25081, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_049_M"));
					break;
				case joaat("MP_Christmas2018_Tee_050_M"):
				case joaat("MP_Christmas2018_Tee_050_F"):
					if (__LIB_0__::func_137(25082, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_050_M"));
					break;
				case joaat("MP_Christmas2018_Tee_051_M"):
				case joaat("MP_Christmas2018_Tee_051_F"):
					if (__LIB_0__::func_137(25083, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_051_M"));
					break;
				case joaat("MP_Christmas2018_Tee_052_M"):
				case joaat("MP_Christmas2018_Tee_052_F"):
					if (__LIB_0__::func_137(25084, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_052_M"));
					break;
				case joaat("MP_Christmas2018_Tee_053_M"):
				case joaat("MP_Christmas2018_Tee_053_F"):
					if (__LIB_0__::func_137(25085, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_053_M"));
					break;
				case joaat("MP_Christmas2018_Tee_054_M"):
				case joaat("MP_Christmas2018_Tee_054_F"):
					if (__LIB_0__::func_137(25086, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_054_M"));
					break;
				case joaat("MP_Christmas2018_Tee_055_M"):
				case joaat("MP_Christmas2018_Tee_055_F"):
					if (__LIB_0__::func_137(25087, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_055_M"));
					break;
				case joaat("MP_Christmas2018_Tee_056_M"):
				case joaat("MP_Christmas2018_Tee_056_F"):
					if (__LIB_0__::func_137(25088, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_056_M"));
					break;
				case joaat("MP_Christmas2018_Tee_057_M"):
				case joaat("MP_Christmas2018_Tee_057_F"):
					if (__LIB_0__::func_137(25089, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_057_M"));
					break;
				case joaat("MP_Christmas2018_Tee_058_M"):
				case joaat("MP_Christmas2018_Tee_058_F"):
					if (__LIB_0__::func_137(25090, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_058_M"));
					break;
				case joaat("MP_Christmas2018_Tee_059_M"):
				case joaat("MP_Christmas2018_Tee_059_F"):
					if (__LIB_0__::func_137(25091, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_059_M"));
					break;
				case joaat("MP_Christmas2018_Tee_060_M"):
				case joaat("MP_Christmas2018_Tee_060_F"):
					if (__LIB_0__::func_137(25092, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_060_M"));
					break;
				case joaat("MP_Christmas2018_Tee_061_M"):
				case joaat("MP_Christmas2018_Tee_061_F"):
					if (__LIB_0__::func_137(25093, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_061_M"));
					break;
				case joaat("MP_Christmas2018_Tee_062_M"):
				case joaat("MP_Christmas2018_Tee_062_F"):
					if (__LIB_0__::func_137(25094, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_062_M"));
					break;
				case joaat("MP_Christmas2018_Tee_063_M"):
				case joaat("MP_Christmas2018_Tee_063_F"):
					if (__LIB_0__::func_137(25095, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_063_M"));
					break;
				case joaat("MP_Christmas2018_Tee_064_M"):
				case joaat("MP_Christmas2018_Tee_064_F"):
					if (__LIB_0__::func_137(25096, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_064_M"));
					break;
				case joaat("MP_Christmas2018_Tee_065_M"):
				case joaat("MP_Christmas2018_Tee_065_F"):
					if (__LIB_0__::func_137(25097, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_065_M"));
					break;
				case joaat("MP_Christmas2018_Tee_066_M"):
				case joaat("MP_Christmas2018_Tee_066_F"):
					if (__LIB_0__::func_137(25098, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_066_M"));
					break;
				case joaat("MP_Christmas2018_Tee_067_M"):
				case joaat("MP_Christmas2018_Tee_067_F"):
					if (__LIB_0__::func_137(25099, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_067_M"));
					break;
				case joaat("MP_Christmas2018_Tat_000_M"):
				case joaat("MP_Christmas2018_Tat_000_F"):
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tat_000_M"));
					break;
			}
			break;
		case joaat("mpBattle_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Battle_Clothing_000_M"):
				case joaat("MP_Battle_Clothing_000_F"):
					if (__LIB_0__::func_137(22108, -1) || __LIB_0__::func_137(25006, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_000_M"));
					break;
				case joaat("MP_Battle_Clothing_002_M"):
				case joaat("MP_Battle_Clothing_002_F"):
					if (__LIB_0__::func_137(9481, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_002_M"));
					break;
				case joaat("MP_Battle_Clothing_003_M"):
				case joaat("MP_Battle_Clothing_003_F"):
					if (__LIB_0__::func_137(9470, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_003_M"));
					break;
				case joaat("MP_Battle_Clothing_004_M"):
				case joaat("MP_Battle_Clothing_004_F"):
					if (__LIB_0__::func_137(9475, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_004_M"));
					break;
				case joaat("MP_Battle_Clothing_005_M"):
				case joaat("MP_Battle_Clothing_005_F"):
					if (__LIB_0__::func_137(9472, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_005_M"));
					break;
				case joaat("MP_Battle_Clothing_006_M"):
				case joaat("MP_Battle_Clothing_006_F"):
					if (__LIB_0__::func_137(9465, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_006_M"));
					break;
				case joaat("MP_Battle_Clothing_007_M"):
				case joaat("MP_Battle_Clothing_007_F"):
					if (__LIB_0__::func_137(9463, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_007_M"));
					break;
				case joaat("MP_Battle_Clothing_008_M"):
				case joaat("MP_Battle_Clothing_008_F"):
					if (__LIB_0__::func_137(9464, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_008_M"));
					break;
				case joaat("MP_Battle_Clothing_009_M"):
				case joaat("MP_Battle_Clothing_009_F"):
					if (__LIB_0__::func_137(9468, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_009_M"));
					break;
				case joaat("MP_Battle_Clothing_010_M"):
				case joaat("MP_Battle_Clothing_010_F"):
					if (__LIB_0__::func_137(9469, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_010_M"));
					break;
				case joaat("MP_Battle_Clothing_011_M"):
				case joaat("MP_Battle_Clothing_011_F"):
					if (__LIB_0__::func_137(9479, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_011_M"));
					break;
				case joaat("MP_Battle_Clothing_012_M"):
				case joaat("MP_Battle_Clothing_012_F"):
					if (__LIB_0__::func_137(9473, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_012_M"));
					break;
				case joaat("MP_Battle_Clothing_013_M"):
				case joaat("MP_Battle_Clothing_013_F"):
					if (__LIB_0__::func_137(9480, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_013_M"));
					break;
				case joaat("MP_Battle_Clothing_014_M"):
				case joaat("MP_Battle_Clothing_014_F"):
					if (__LIB_0__::func_137(9476, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_014_M"));
					break;
				case joaat("MP_Battle_Clothing_015_M"):
				case joaat("MP_Battle_Clothing_015_F"):
					if (__LIB_0__::func_137(9477, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_015_M"));
					break;
				case joaat("MP_Battle_Clothing_016_M"):
				case joaat("MP_Battle_Clothing_016_F"):
					if (__LIB_0__::func_137(9471, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_016_M"));
					break;
				case joaat("MP_Battle_Clothing_017_M"):
				case joaat("MP_Battle_Clothing_017_F"):
					if (__LIB_0__::func_137(9474, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_017_M"));
					break;
				case joaat("MP_Battle_Clothing_018_M"):
				case joaat("MP_Battle_Clothing_018_F"):
					if (__LIB_0__::func_137(9467, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_018_M"));
					break;
				case joaat("MP_Battle_Clothing_019_M"):
				case joaat("MP_Battle_Clothing_019_F"):
					if (__LIB_0__::func_137(9478, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_019_M"));
					break;
				case joaat("MP_Battle_Clothing_020_M"):
				case joaat("MP_Battle_Clothing_020_F"):
					if (__LIB_0__::func_137(9462, -1))
					{
						return 0;
					}
					if (iParam1 == joaat("MP_Battle_Clothing_020_M"))
					{
						if (__LIB_0__::func_137(27085, -1))
						{
							return 0;
						}
					}
					else if (__LIB_0__::func_137(27084, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_020_M"));
					break;
				case joaat("MP_Battle_Clothing_021_M"):
				case joaat("MP_Battle_Clothing_021_F"):
					if (__LIB_0__::func_137(9466, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_021_M"));
					break;
				case joaat("MP_Battle_Clothing_022_M"):
				case joaat("MP_Battle_Clothing_022_F"):
					if (__LIB_0__::func_137(22126, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_022_M"));
					break;
				case joaat("MP_Battle_Clothing_023_M"):
				case joaat("MP_Battle_Clothing_023_F"):
					if (__LIB_0__::func_137(22127, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_023_M"));
					break;
				case joaat("MP_Battle_Clothing_024_M"):
				case joaat("MP_Battle_Clothing_024_F"):
					if (__LIB_0__::func_137(22128, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_024_M"));
					break;
				case joaat("MP_Battle_Clothing_025_M"):
				case joaat("MP_Battle_Clothing_025_F"):
					if (__LIB_0__::func_137(22124, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_025_M"));
					break;
				case joaat("MP_Battle_Clothing_026_M"):
				case joaat("MP_Battle_Clothing_026_F"):
					if (__LIB_0__::func_137(22130, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_026_M"));
					break;
				case joaat("MP_Battle_Clothing_027_M"):
				case joaat("MP_Battle_Clothing_027_F"):
					if (__LIB_0__::func_137(22125, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_027_M"));
					break;
				case joaat("MP_Battle_Clothing_028_M"):
				case joaat("MP_Battle_Clothing_028_F"):
					if (__LIB_0__::func_137(22129, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_028_M"));
					break;
				case joaat("MP_Battle_Clothing_029_M"):
				case joaat("MP_Battle_Clothing_029_F"):
					if (__LIB_0__::func_137(22131, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_029_M"));
					break;
				case joaat("MP_Battle_Clothing_030_M"):
				case joaat("MP_Battle_Clothing_030_F"):
					if (__LIB_0__::func_137(22132, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_030_M"));
					break;
			}
			switch (iParam1)
			{
				case joaat("MP_Battle_Clothing_031_M"):
				case joaat("MP_Battle_Clothing_031_F"):
					if (__LIB_0__::func_137(22147, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_031_M"));
					break;
				case joaat("MP_Battle_Clothing_032_M"):
				case joaat("MP_Battle_Clothing_032_F"):
					if (__LIB_0__::func_137(22148, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_032_M"));
					break;
				case joaat("MP_Battle_Clothing_033_M"):
				case joaat("MP_Battle_Clothing_033_F"):
					if (__LIB_0__::func_137(22149, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_033_M"));
					break;
				case joaat("MP_Battle_Clothing_034_M"):
				case joaat("MP_Battle_Clothing_034_F"):
					if (__LIB_0__::func_137(22150, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_034_M"));
					break;
				case joaat("MP_Battle_Clothing_035_M"):
				case joaat("MP_Battle_Clothing_035_F"):
					if (__LIB_0__::func_137(22151, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_035_M"));
					break;
				case joaat("MP_Battle_Clothing_036_M"):
				case joaat("MP_Battle_Clothing_036_F"):
					if (__LIB_0__::func_137(22152, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_036_M"));
					break;
				case joaat("MP_Battle_Clothing_037_M"):
				case joaat("MP_Battle_Clothing_037_F"):
					if (__LIB_0__::func_137(22153, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_037_M"));
					break;
				case joaat("MP_Battle_Clothing_038_M"):
				case joaat("MP_Battle_Clothing_038_F"):
					if (__LIB_0__::func_137(22154, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_038_M"));
					break;
				case joaat("MP_Battle_Clothing_039_M"):
				case joaat("MP_Battle_Clothing_039_F"):
					if (__LIB_0__::func_137(22155, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_039_M"));
					break;
				case joaat("MP_Battle_Clothing_040_M"):
				case joaat("MP_Battle_Clothing_040_F"):
					if (__LIB_0__::func_137(22156, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_040_M"));
					break;
				case joaat("MP_Battle_Clothing_041_M"):
				case joaat("MP_Battle_Clothing_041_F"):
					if (__LIB_0__::func_137(22157, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_041_M"));
					break;
				case joaat("MP_Battle_Clothing_042_M"):
				case joaat("MP_Battle_Clothing_042_F"):
					if (__LIB_0__::func_137(22158, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_042_M"));
					break;
				case joaat("MP_Battle_Clothing_043_M"):
				case joaat("MP_Battle_Clothing_043_F"):
					if (__LIB_0__::func_137(22159, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_043_M"));
					break;
				case joaat("MP_Battle_Clothing_044_M"):
				case joaat("MP_Battle_Clothing_044_F"):
					if (__LIB_0__::func_137(22160, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_044_M"));
					break;
				case joaat("MP_Battle_Clothing_045_M"):
				case joaat("MP_Battle_Clothing_045_F"):
					if (__LIB_0__::func_137(22161, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_045_M"));
					break;
				case joaat("MP_Battle_Clothing_046_M"):
				case joaat("MP_Battle_Clothing_046_F"):
					if (__LIB_0__::func_137(22162, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_046_M"));
					break;
				case joaat("MP_Battle_Clothing_047_M"):
				case joaat("MP_Battle_Clothing_047_F"):
					if (__LIB_0__::func_137(22163, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_047_M"));
					break;
				case joaat("MP_Battle_Clothing_048_M"):
				case joaat("MP_Battle_Clothing_048_F"):
					if (__LIB_0__::func_137(22164, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_048_M"));
					break;
				case joaat("MP_Battle_Clothing_049_M"):
				case joaat("MP_Battle_Clothing_049_F"):
					if (__LIB_0__::func_137(22165, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_049_M"));
					break;
				case joaat("MP_Battle_Clothing_050_M"):
				case joaat("MP_Battle_Clothing_050_F"):
					if (__LIB_0__::func_137(22166, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_050_M"));
					break;
				case joaat("MP_Battle_Clothing_051_M"):
				case joaat("MP_Battle_Clothing_051_F"):
					if (__LIB_0__::func_137(22167, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_051_M"));
					break;
				case joaat("MP_Battle_Clothing_052_M"):
				case joaat("MP_Battle_Clothing_052_F"):
					if (__LIB_0__::func_137(22168, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_052_M"));
					break;
				case joaat("MP_Battle_Clothing_053_M"):
				case joaat("MP_Battle_Clothing_053_F"):
					if (__LIB_0__::func_137(22169, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_053_M"));
					break;
				case joaat("MP_Battle_Clothing_054_M"):
				case joaat("MP_Battle_Clothing_054_F"):
					if (__LIB_0__::func_137(22170, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_054_M"));
					break;
				case joaat("MP_Battle_Clothing_055_M"):
				case joaat("MP_Battle_Clothing_055_F"):
					if (__LIB_0__::func_137(22171, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_055_M"));
					break;
				case joaat("MP_Battle_Clothing_056_M"):
				case joaat("MP_Battle_Clothing_056_F"):
					if (__LIB_0__::func_137(22172, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_056_M"));
					break;
				case joaat("MP_Battle_Clothing_057_M"):
				case joaat("MP_Battle_Clothing_057_F"):
					if (__LIB_0__::func_137(22173, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_057_M"));
					break;
				case joaat("MP_Battle_Clothing_058_M"):
				case joaat("MP_Battle_Clothing_058_F"):
					if (__LIB_0__::func_137(22174, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_058_M"));
					break;
				case joaat("MP_Battle_Clothing_059_M"):
				case joaat("MP_Battle_Clothing_059_F"):
					if (__LIB_0__::func_137(22175, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_059_M"));
					break;
				case joaat("MP_Battle_Clothing_060_M"):
				case joaat("MP_Battle_Clothing_060_F"):
					if (__LIB_0__::func_137(22176, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_060_M"));
					break;
				case joaat("MP_Battle_Clothing_061_M"):
				case joaat("MP_Battle_Clothing_061_F"):
					if (__LIB_0__::func_137(22177, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_061_M"));
					break;
				case joaat("MP_Battle_Clothing_062_M"):
				case joaat("MP_Battle_Clothing_062_F"):
					if (__LIB_0__::func_137(22178, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_062_M"));
					break;
			}
			break;
		case joaat("mpGunrunning_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Gunrunning_Award_019_M"):
				case joaat("MP_Gunrunning_Award_025_F"):
					if (__LIB_0__::func_137(15426, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_019_M"));
					break;
				case joaat("MP_Gunrunning_Award_020_M"):
				case joaat("MP_Gunrunning_Award_020_F"):
					if (__LIB_0__::func_137(15422, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_020_M"));
					break;
				case joaat("MP_Gunrunning_Award_020_M_ALT"):
				case joaat("MP_Gunrunning_Award_020_F_ALT"):
					if (__LIB_0__::func_137(15423, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_020_M_ALT"));
					break;
				case joaat("MP_Gunrunning_Award_021_M"):
				case joaat("MP_Gunrunning_Award_021_F"):
					if (__LIB_0__::func_137(15421, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_021_M"));
					break;
				case joaat("MP_Gunrunning_Award_022_M"):
				case joaat("MP_Gunrunning_Award_026_F"):
					if (__LIB_0__::func_137(15427, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_022_M"));
					break;
				case joaat("MP_Gunrunning_Award_023_M"):
				case joaat("MP_Gunrunning_Award_023_F"):
					if (__LIB_0__::func_137(15419, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_023_M"));
					break;
				case joaat("MP_Gunrunning_Award_024_M"):
				case joaat("MP_Gunrunning_Award_024_F"):
					if (__LIB_0__::func_137(15420, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_024_M"));
					break;
			}
			switch (iParam1)
			{
				case joaat("MP_Gunrunning_Award_000_M"):
				case joaat("MP_Gunrunning_Award_000_F"):
					if (__LIB_0__::func_137(15394, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_000_M"));
					break;
				case joaat("MP_Gunrunning_Award_001_M"):
				case joaat("MP_Gunrunning_Award_001_F"):
					if (__LIB_0__::func_421(209, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_001_M"));
					break;
				case joaat("MP_Gunrunning_Award_002_M"):
				case joaat("MP_Gunrunning_Award_002_F"):
					if (__LIB_0__::func_137(15406, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_002_M"));
					break;
				case joaat("MP_Gunrunning_Award_003_M"):
				case joaat("MP_Gunrunning_Award_003_F"):
					if (__LIB_0__::func_137(15395, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_003_M"));
					break;
				case joaat("MP_Gunrunning_Award_004_M"):
				case joaat("MP_Gunrunning_Award_004_F"):
					if (__LIB_0__::func_421(209, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_004_M"));
					break;
				case joaat("MP_Gunrunning_Award_005_M"):
				case joaat("MP_Gunrunning_Award_005_F"):
					if (__LIB_0__::func_137(15410, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_005_M"));
					break;
				case joaat("MP_Gunrunning_Award_006_M"):
				case joaat("MP_Gunrunning_Award_006_F"):
					if (__LIB_0__::func_137(15407, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_006_M"));
					break;
				case joaat("MP_Gunrunning_Award_007_M"):
				case joaat("MP_Gunrunning_Award_007_F"):
					if (__LIB_0__::func_421(209, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_007_M"));
					break;
				case joaat("MP_Gunrunning_Award_008_M"):
				case joaat("MP_Gunrunning_Award_008_F"):
					if (__LIB_0__::func_421(209, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_008_M"));
					break;
				case joaat("MP_Gunrunning_Award_009_M"):
				case joaat("MP_Gunrunning_Award_009_F"):
					if (__LIB_0__::func_137(15414, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_009_M"));
					break;
				case joaat("MP_Gunrunning_Award_010_M"):
				case joaat("MP_Gunrunning_Award_010_F"):
					if (__LIB_0__::func_137(15415, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_010_M"));
					break;
				case joaat("MP_Gunrunning_Award_011_M"):
				case joaat("MP_Gunrunning_Award_011_F"):
					if (__LIB_0__::func_137(15399, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_011_M"));
					break;
				case joaat("MP_Gunrunning_Award_012_M"):
				case joaat("MP_Gunrunning_Award_012_F"):
					if (__LIB_0__::func_137(15404, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_012_M"));
					break;
				case joaat("MP_Gunrunning_Award_013_M"):
				case joaat("MP_Gunrunning_Award_013_F"):
					if (__LIB_0__::func_421(209, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_013_M"));
					break;
				case joaat("MP_Gunrunning_Award_014_M"):
				case joaat("MP_Gunrunning_Award_014_F"):
					if (__LIB_0__::func_137(15392, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_014_M"));
					break;
				case joaat("MP_Gunrunning_Award_015_M"):
				case joaat("MP_Gunrunning_Award_015_F"):
					if (__LIB_0__::func_137(15390, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_015_M"));
					break;
				case joaat("MP_Gunrunning_Award_016_M"):
				case joaat("MP_Gunrunning_Award_016_F"):
					if (__LIB_0__::func_137(15402, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_016_M"));
					break;
				case joaat("MP_Gunrunning_Award_017_M"):
				case joaat("MP_Gunrunning_Award_017_F"):
					if (__LIB_0__::func_137(15416, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_017_M"));
					break;
				case joaat("MP_Gunrunning_Award_018_M"):
				case joaat("MP_Gunrunning_Award_018_F"):
					if (__LIB_0__::func_421(209, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_018_M"));
					break;
			}
			break;
		case joaat("mpBiker_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Biker_Tee_022_M"):
				case joaat("MP_Biker_Tee_022_F"):
					if (__LIB_0__::func_137(9366, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_022_M"));
					break;
				case joaat("MP_Biker_Tee_023_M"):
				case joaat("MP_Biker_Tee_023_F"):
					if (__LIB_0__::func_137(9367, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_023_M"));
					break;
				case joaat("MP_Biker_Tee_024_M"):
				case joaat("MP_Biker_Tee_024_F"):
					if (__LIB_0__::func_137(9369, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_024_M"));
					break;
				case joaat("MP_Biker_Tee_025_M"):
				case joaat("MP_Biker_Tee_025_F"):
					if (__LIB_0__::func_137(9368, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_025_M"));
					break;
				case joaat("MP_Biker_Tee_047_M"):
				case joaat("MP_Biker_Tee_047_F"):
					if (__LIB_0__::func_137(9365, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_047_M"));
					break;
				case joaat("MP_Biker_Tee_048_M"):
				case joaat("MP_Biker_Tee_048_F"):
					if (__LIB_0__::func_137(9364, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_048_M"));
					break;
				case joaat("MP_Biker_Tee_049_M"):
				case joaat("MP_Biker_Tee_049_F"):
					if (__LIB_0__::func_137(27078, -1))
					{
						return 0;
					}
					if (__LIB_0__::func_137(9363, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_049_M"));
					break;
				case joaat("MP_Biker_Tee_050_M"):
				case joaat("MP_Biker_Tee_050_F"):
					if (__LIB_0__::func_137(9362, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_050_M"));
					break;
				case joaat("MP_Biker_Tee_051_M"):
				case joaat("MP_Biker_Tee_051_F"):
					if (__LIB_0__::func_137(9370, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_051_M"));
					break;
				case joaat("MP_Biker_Tee_052_M"):
				case joaat("MP_Biker_Tee_052_F"):
					if (__LIB_0__::func_137(9371, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_052_M"));
					break;
				case joaat("MP_Biker_Tee_053_M"):
				case joaat("MP_Biker_Tee_053_F"):
					if (__LIB_0__::func_137(9372, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_053_M"));
					break;
				case joaat("MP_Biker_Tee_054_M"):
				case joaat("MP_Biker_Tee_054_F"):
					if (__LIB_0__::func_137(9373, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_054_M"));
					break;
				case joaat("MP_Biker_Tee_055_M"):
				case joaat("MP_Biker_Tee_055_F"):
					if (__LIB_0__::func_137(9374, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_055_M"));
					break;
				case joaat("MP_Biker_Award_000_M"):
				case joaat("MP_Biker_Award_000_F"):
					if (__LIB_0__::func_137(9384, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Biker_Award_000_M"));
					break;
				case joaat("MP_Biker_Award_001_M"):
				case joaat("MP_Biker_Award_001_F"):
					if (__LIB_0__::func_137(9385, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_Biker_Award_001_M"));
					break;
			}
			break;
		case joaat("mpExecutive_overlays"):
			switch (iParam1)
			{
				case joaat("MP_exec_prizes_015_M"):
				case joaat("MP_exec_prizes_015_F"):
					if (__LIB_0__::func_137(7551, -1) || __LIB_0__::func_534(3792, -1, 0) >= Global_262145.f_16823 /* Tunable: DCTL_WIN_COUNT_REWARD */)
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_015_M"));
					break;
				case joaat("MP_exec_prizes_000_M"):
				case joaat("MP_exec_prizes_000_F"):
					if (__LIB_0__::func_137(7467, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_000_M"));
					break;
				case joaat("MP_exec_prizes_001_M"):
				case joaat("MP_exec_prizes_001_F"):
					if (__LIB_0__::func_137(7468, -1))
					{
						return 0;
					}
					if (iParam1 == joaat("MP_exec_prizes_001_M"))
					{
						if (__LIB_0__::func_137(27083, -1))
						{
							return 0;
						}
					}
					else if (__LIB_0__::func_137(27086, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_001_M"));
					break;
				case joaat("MP_exec_prizes_002_M"):
				case joaat("MP_exec_prizes_002_F"):
					if (__LIB_0__::func_137(7469, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_002_M"));
					break;
				case joaat("MP_exec_prizes_003_M"):
				case joaat("MP_exec_prizes_003_F"):
					if (__LIB_0__::func_137(7470, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_003_M"));
					break;
				case joaat("MP_exec_prizes_004_M"):
				case joaat("MP_exec_prizes_004_F"):
					if (__LIB_0__::func_137(7471, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_004_M"));
					break;
				case joaat("MP_exec_prizes_005_M"):
				case joaat("MP_exec_prizes_005_F"):
					if (__LIB_0__::func_137(7472, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_005_M"));
					break;
				case joaat("MP_exec_prizes_006_M"):
				case joaat("MP_exec_prizes_006_F"):
					if (__LIB_0__::func_137(7473, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_006_M"));
					break;
				case joaat("MP_exec_prizes_007_M"):
				case joaat("MP_exec_prizes_007_F"):
					if (__LIB_0__::func_137(7474, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_007_M"));
					break;
				case joaat("MP_exec_prizes_008_M"):
				case joaat("MP_exec_prizes_008_F"):
					if (__LIB_0__::func_137(7475, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_008_M"));
					break;
				case joaat("MP_exec_prizes_009_M"):
				case joaat("MP_exec_prizes_009_F"):
					if (__LIB_0__::func_137(7476, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_009_M"));
					break;
				case joaat("MP_exec_prizes_010_M"):
				case joaat("MP_exec_prizes_010_F"):
					if (__LIB_0__::func_137(7477, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_010_M"));
					break;
				case joaat("MP_exec_prizes_011_M"):
				case joaat("MP_exec_prizes_011_F"):
					if (__LIB_0__::func_137(7478, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_011_M"));
					break;
				case joaat("MP_exec_prizes_012_M"):
				case joaat("MP_exec_prizes_012_F"):
					if (__LIB_0__::func_137(7479, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_012_M"));
					break;
				case joaat("MP_exec_prizes_013_M"):
				case joaat("MP_exec_prizes_013_F"):
					if (__LIB_0__::func_137(7480, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_013_M"));
					break;
				case joaat("MP_exec_prizes_014_M"):
				case joaat("MP_exec_prizes_014_F"):
					if (__LIB_0__::func_137(7481, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_014_M"));
					break;
			}
			break;
		case joaat("mpHalloween_overlays"):
			switch (iParam1)
			{
				case joaat("HW_Tee_000_F"):
				case joaat("HW_Tee_000_M"):
					if (__LIB_0__::func_137(4260, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("HW_Tee_000_M"));
					break;
				case joaat("HW_Tee_001_F"):
				case joaat("HW_Tee_001_M"):
					if (__LIB_0__::func_137(4257, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("HW_Tee_001_M"));
					break;
				case joaat("HW_Tee_002_F"):
				case joaat("HW_Tee_002_M"):
					if (__LIB_0__::func_137(4269, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("HW_Tee_002_M"));
					break;
				case joaat("HW_Tee_003_F"):
				case joaat("HW_Tee_003_M"):
					if (__LIB_0__::func_137(4261, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("HW_Tee_003_M"));
					break;
				case joaat("HW_Tee_004_F"):
				case joaat("HW_Tee_004_M"):
					if (__LIB_0__::func_137(4259, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("HW_Tee_004_M"));
					break;
				case joaat("HW_Tee_005_F"):
				case joaat("HW_Tee_005_M"):
					if (__LIB_0__::func_137(4268, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("HW_Tee_005_M"));
					break;
				case joaat("HW_Tee_006_F"):
				case joaat("HW_Tee_006_M"):
					if (__LIB_0__::func_137(4265, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("HW_Tee_006_M"));
					break;
				case joaat("HW_Tee_007_F"):
				case joaat("HW_Tee_007_M"):
					if (__LIB_0__::func_137(4258, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("HW_Tee_007_M"));
					break;
				case joaat("HW_Tee_008_F"):
				case joaat("HW_Tee_008_M"):
					if (__LIB_0__::func_137(4264, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("HW_Tee_008_M"));
					break;
				case joaat("HW_Tee_009_F"):
				case joaat("HW_Tee_009_M"):
					if (__LIB_0__::func_137(4267, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("HW_Tee_009_M"));
					break;
				case joaat("HW_Tee_010_F"):
				case joaat("HW_Tee_010_M"):
					if (__LIB_0__::func_137(4262, -1))
					{
						return 0;
					}
					if (__LIB_0__::func_137(27079, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("HW_Tee_010_M"));
					break;
				case joaat("HW_Tee_011_F"):
				case joaat("HW_Tee_011_M"):
					if (__LIB_0__::func_137(4263, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("HW_Tee_011_M"));
					break;
				case joaat("HW_Tee_012_F"):
				case joaat("HW_Tee_012_M"):
					if (__LIB_0__::func_137(4266, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("HW_Tee_012_M"));
					break;
			}
			break;
		case joaat("mpLowrider_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Bennys_000_M"):
				case joaat("MP_Bennys_001_M"):
					if (__LIB_0__::func_534(2934, -1, 0) > 0)
					{
						return 0;
					}
					if (iParam1 == joaat("MP_Bennys_001_M"))
					{
						if (__LIB_0__::func_137(27068, -1))
						{
							return 0;
						}
					}
					return !__LIB_25__::func_41(iParam2, iParam1, 1);
					break;
				case joaat("MP_Bennys_000_F"):
				case joaat("MP_Bennys_001_F"):
					if (__LIB_0__::func_534(2934, -1, 0) > 0)
					{
						return 0;
					}
					if (iParam1 == joaat("MP_Bennys_001_F"))
					{
						if (__LIB_0__::func_137(27068, -1))
						{
							return 0;
						}
					}
					return !__LIB_25__::func_41(iParam2, iParam1, 0);
					break;
			}
			break;
		case joaat("mpxmas_604490_overlays"):
			switch (iParam1)
			{
				case joaat("MP_IHeartLC_000_M"):
				case joaat("MP_IHeartLC_001_F"):
					if (__LIB_0__::func_137(113, -1))
					{
						return 0;
					}
					return !__LIB_25__::func_41(iParam2, iParam1, iParam1 == joaat("MP_IHeartLC_000_M"));
					break;
			}
			break;
		case joaat("mpHeist_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Award_M_Tshirt_004"):
				case joaat("MP_Award_M_Tshirt_005"):
				case joaat("MP_Award_M_Tshirt_006"):
				case joaat("MP_Award_M_Tshirt_007"):
				case joaat("MP_Award_M_Tshirt_008"):
				case joaat("MP_Award_M_Tshirt_009"):
				case joaat("MP_Award_M_Tshirt_010"):
				case joaat("MP_Award_M_Tshirt_011"):
				case joaat("MP_Award_M_Tshirt_012"):
				case joaat("MP_Award_M_Tshirt_013"):
					if (iParam1 == joaat("MP_Award_M_Tshirt_004"))
					{
						if (__LIB_0__::func_137(27082, -1))
						{
							return 0;
						}
						if (__LIB_0__::func_137(3770, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_005"))
					{
						if (__LIB_0__::func_137(3771, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_006"))
					{
						if (__LIB_0__::func_137(3772, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_007"))
					{
						if (__LIB_0__::func_137(3773, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_008"))
					{
						if (__LIB_0__::func_137(3774, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_009"))
					{
						if (__LIB_0__::func_137(3775, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_010"))
					{
						if (__LIB_0__::func_137(3776, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_011"))
					{
						if (__LIB_0__::func_137(3777, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_012"))
					{
						if (__LIB_0__::func_137(3778, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_013"))
					{
						if (__LIB_0__::func_137(3779, -1) || __LIB_0__::func_137(27084, -1))
						{
							return 0;
						}
					}
					return !__LIB_25__::func_41(iParam2, iParam1, 1);
					break;
				case joaat("MP_Award_F_Tshirt_004"):
				case joaat("MP_Award_F_Tshirt_005"):
				case joaat("MP_Award_F_Tshirt_006"):
				case joaat("MP_Award_F_Tshirt_007"):
				case joaat("MP_Award_F_Tshirt_008"):
				case joaat("MP_Award_F_Tshirt_009"):
				case joaat("MP_Award_F_Tshirt_010"):
				case joaat("MP_Award_F_Tshirt_011"):
				case joaat("MP_Award_F_Tshirt_012"):
				case joaat("MP_Award_F_Tshirt_013"):
					if (iParam1 == joaat("MP_Award_F_Tshirt_004"))
					{
						if (__LIB_0__::func_137(3770, -1))
						{
							return 0;
						}
						if (__LIB_0__::func_137(27082, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_005"))
					{
						if (__LIB_0__::func_137(3771, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_006"))
					{
						if (__LIB_0__::func_137(3772, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_007"))
					{
						if (__LIB_0__::func_137(3773, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_008"))
					{
						if (__LIB_0__::func_137(3774, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_009"))
					{
						if (__LIB_0__::func_137(3775, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_010"))
					{
						if (__LIB_0__::func_137(3776, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_011"))
					{
						if (__LIB_0__::func_137(3777, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_012"))
					{
						if (__LIB_0__::func_137(3778, -1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_013"))
					{
						if (__LIB_0__::func_137(3779, -1) || __LIB_0__::func_137(27083, -1))
						{
							return 0;
						}
					}
					return !__LIB_25__::func_41(iParam2, iParam1, 0);
					break;
				case joaat("MP_Elite_M_Tshirt"):
				case joaat("MP_Elite_M_Tshirt_1"):
				case joaat("MP_Elite_F_Tshirt"):
				case joaat("MP_Elite_F_Tshirt_1"):
					if ((((__LIB_0__::func_137(3765, -1) && __LIB_0__::func_137(3766, -1)) && __LIB_0__::func_137(3767, -1)) && __LIB_0__::func_137(3768, -1)) && __LIB_0__::func_137(3769, -1))
					{
						return 0;
					}
					return 1;
					break;
			}
			break;
		case joaat("mpIndependence_overlays"):
			switch (iParam1)
			{
				case joaat("FM_Ind_M_Award_000"):
				case joaat("FM_Ind_F_Award_000"):
					return !__LIB_0__::func_137(3593, -1);
					break;
			}
			if (!Global_262145.f_8258 /* Tunable: TOGGLE_ACTIVATE_INDEPENDENCE_PACK */ && !__LIB_25__::func_41(iParam2, iParam1, 0))
			{
				return 1;
			}
			break;
		case joaat("mpHipster_overlays"):
			switch (iParam1)
			{
				case 1443536758:
				case 1333229624:
				case -1665422117:
				case 1100930183:
				case -1595008258:
				case 94055115:
				case -627896761:
				case 1873477305:
					return 1;
					break;
				case joaat("MP_Award_M_Tshirt_000"):
				case joaat("MP_Award_M_Tshirt_001"):
				case joaat("MP_Award_F_Tshirt_000"):
				case joaat("MP_Award_F_Tshirt_001"):
					return 1;
					break;
				case 300677115:
				case 262692161:
				case -1684141219:
				case 390655118:
				case -479442624:
				case -542924311:
				case 1696910411:
				case -1259058037:
					return 1;
					break;
				case joaat("MP_Award_M_Tshirt_002"):
				case joaat("MP_Award_M_Tshirt_003"):
				case joaat("MP_Award_F_Tshirt_002"):
				case joaat("MP_Award_F_Tshirt_003"):
					return 1;
					break;
				case joaat("FM_Hip_M_Retro_010"):
				case joaat("FM_Hip_F_Retro_010"):
					return (!__LIB_0__::func_421(152, -1) && !__LIB_0__::func_137(9440, -1));
					break;
				case joaat("FM_Hip_M_Retro_003"):
				case joaat("FM_Hip_F_Retro_003"):
					return (!__LIB_0__::func_421(151, -1) && !__LIB_0__::func_137(9430, -1));
					break;
				case joaat("FM_Hip_M_Retro_000"):
				case joaat("FM_Hip_F_Retro_000"):
					return (!__LIB_18__::func_349(iParam2, -1) && !__LIB_0__::func_137(9426, -1));
					break;
				case joaat("FM_Hip_M_Retro_001"):
				case joaat("FM_Hip_F_Retro_001"):
					return (!__LIB_18__::func_349(iParam2, -1) && !__LIB_0__::func_137(9427, -1));
					break;
				case joaat("FM_Hip_M_Retro_002"):
				case joaat("FM_Hip_F_Retro_002"):
					return (!__LIB_18__::func_349(iParam2, -1) && !__LIB_0__::func_137(9428, -1));
					break;
				case joaat("FM_Hip_M_Retro_004"):
				case joaat("FM_Hip_F_Retro_004"):
					return (!__LIB_18__::func_349(iParam2, -1) && !__LIB_0__::func_137(9431, -1));
					break;
				case joaat("FM_Hip_M_Retro_005"):
				case joaat("FM_Hip_F_Retro_005"):
					return (!__LIB_18__::func_349(iParam2, -1) && !__LIB_0__::func_137(9432, -1));
					break;
				case joaat("FM_Hip_M_Retro_006"):
				case joaat("FM_Hip_F_Retro_006"):
					return (!__LIB_18__::func_349(iParam2, -1) && !__LIB_0__::func_137(9433, -1));
					break;
				case joaat("FM_Hip_M_Retro_007"):
				case joaat("FM_Hip_F_Retro_007"):
					return (!__LIB_18__::func_349(iParam2, -1) && !__LIB_0__::func_137(9439, -1));
					break;
				case joaat("FM_Hip_M_Retro_008"):
				case joaat("FM_Hip_F_Retro_008"):
					return (!__LIB_18__::func_349(iParam2, -1) && !__LIB_0__::func_137(9434, -1));
					break;
				case joaat("FM_Hip_M_Retro_009"):
				case joaat("FM_Hip_F_Retro_009"):
					return (!__LIB_18__::func_349(iParam2, -1) && !__LIB_0__::func_137(9435, -1));
					break;
				case joaat("FM_Hip_M_Retro_011"):
				case joaat("FM_Hip_F_Retro_011"):
					return (!__LIB_18__::func_349(iParam2, -1) && !__LIB_0__::func_137(9436, -1));
					break;
				case joaat("FM_Hip_M_Retro_012"):
				case joaat("FM_Hip_F_Retro_012"):
					return (!__LIB_18__::func_349(iParam2, -1) && !__LIB_0__::func_137(9429, -1));
					break;
				case joaat("FM_Hip_M_Retro_013"):
				case joaat("FM_Hip_F_Retro_013"):
					return (!__LIB_18__::func_349(iParam2, -1) && !__LIB_0__::func_137(9437, -1));
					break;
				case joaat("FM_Rstar_M_Tshirt_000"):
				case joaat("FM_Rstar_M_Tshirt_001"):
				case joaat("FM_Rstar_M_Tshirt_002"):
				case joaat("FM_Rstar_F_Tshirt_000"):
				case joaat("FM_Rstar_F_Tshirt_001"):
				case joaat("FM_Rstar_F_Tshirt_002"):
					return !__LIB_0__::func_236();
					break;
			}
			break;
		case joaat("mpValentines_overlays"):
			if ((!Global_262145.f_7058 /* Tunable: TURN_ON_VALENTINES_EVENT */ && !__LIB_18__::func_349(iParam2, -1)) && !Global_262145.f_12031 /* Tunable: TURN_ON_VALENTINE_CLOTHING */)
			{
				return 1;
			}
			break;
		case joaat("mpPilot_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Fli_M_Tshirt_000"):
				case joaat("MP_Fli_F_Tshirt_000"):
					return !__LIB_0__::func_137(3608, -1);
					break;
			}
			break;
		case joaat("mpLTS_overlays"):
			switch (iParam1)
			{
				case joaat("FM_LTS_M_Tshirt_000"):
				case joaat("FM_LTS_F_Tshirt_000"):
					return (!__LIB_0__::func_137(3615, -1) && !__LIB_0__::func_137(9438, -1));
					break;
			}
			break;
		case joaat("mpLuxe_overlays"):
			if (iParam1 == joaat("MP_LUXE_VDG_006_F"))
			{
				return 1;
			}
			switch (iParam1)
			{
				case joaat("MP_FAKE_DIS_000_M"):
				case joaat("MP_FAKE_DIS_000_F"):
					return !__LIB_0__::func_137(3783, -1);
					break;
				case joaat("MP_FAKE_DIS_001_M"):
				case joaat("MP_FAKE_DIS_001_F"):
					return !__LIB_0__::func_137(3784, -1);
					break;
				case joaat("MP_FAKE_DS_000_M"):
				case joaat("MP_FAKE_DS_000_F"):
					return !__LIB_0__::func_137(3785, -1);
					break;
				case joaat("MP_FAKE_ENEMA_000_M"):
				case joaat("MP_FAKE_ENEMA_000_F"):
					return !__LIB_0__::func_137(3786, -1);
					break;
				case joaat("MP_FAKE_LB_000_M"):
				case joaat("MP_FAKE_LB_000_F"):
					return !__LIB_0__::func_137(3787, -1);
					break;
				case joaat("MP_FAKE_LC_000_M"):
				case joaat("MP_FAKE_LC_000_F"):
					return !__LIB_0__::func_137(3788, -1);
					break;
				case joaat("MP_FAKE_SC_000_M"):
				case joaat("MP_FAKE_SC_000_F"):
					if (__LIB_0__::func_137(27081, -1))
					{
						return 0;
					}
					return !__LIB_0__::func_137(3789, -1);
					break;
				case joaat("MP_FAKE_Vap_000_M"):
				case joaat("MP_FAKE_Vap_000_F"):
					return !__LIB_0__::func_137(3790, -1);
					break;
				case joaat("MP_FAKE_Per_000_M"):
				case joaat("MP_FAKE_Per_000_F"):
					return !__LIB_0__::func_137(3791, -1);
					break;
				case joaat("MP_FAKE_SN_000_M"):
				case joaat("MP_FAKE_SN_000_F"):
					return !__LIB_0__::func_137(3792, -1);
					break;
				case joaat("MP_FILM_000_F"):
				case joaat("MP_FILM_000_M"):
					if (iParam1 == joaat("MP_FILM_000_F"))
					{
						iVar0 = __LIB_0__::func_534(2444, -1, 0);
						if (BitTest(iVar0, 0))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_FILM_000_M"))
					{
						iVar1 = __LIB_0__::func_534(2424, -1, 0);
						if (BitTest(iVar1, 18))
						{
							return 0;
						}
					}
					return !__LIB_0__::func_137(3793, -1);
					break;
				case joaat("MP_FILM_001_F"):
				case joaat("MP_FILM_001_M"):
					if (iParam1 == joaat("MP_FILM_001_F"))
					{
						iVar2 = __LIB_0__::func_534(2444, -1, 0);
						if (BitTest(iVar2, 1))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_FILM_001_M"))
					{
						iVar3 = __LIB_0__::func_534(2424, -1, 0);
						if (BitTest(iVar3, 19))
						{
							return 0;
						}
					}
					return !__LIB_0__::func_137(3794, -1);
					break;
				case joaat("MP_FILM_002_F"):
				case joaat("MP_FILM_002_M"):
					if (iParam1 == joaat("MP_FILM_002_F"))
					{
						iVar4 = __LIB_0__::func_534(2444, -1, 0);
						if (BitTest(iVar4, 2))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_FILM_002_M"))
					{
						iVar5 = __LIB_0__::func_534(2424, -1, 0);
						if (BitTest(iVar5, 20))
						{
							return 0;
						}
					}
					return !__LIB_0__::func_137(3795, -1);
					break;
				case joaat("MP_FILM_003_F"):
				case joaat("MP_FILM_003_M"):
					if (iParam1 == joaat("MP_FILM_003_F"))
					{
						iVar6 = __LIB_0__::func_534(2444, -1, 0);
						if (BitTest(iVar6, 3))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_FILM_003_M"))
					{
						iVar7 = __LIB_0__::func_534(2424, -1, 0);
						if (BitTest(iVar7, 21))
						{
							return 0;
						}
					}
					return !__LIB_0__::func_137(3796, -1);
					break;
				case joaat("MP_FILM_004_F"):
				case joaat("MP_FILM_004_M"):
					if (iParam1 == joaat("MP_FILM_004_F"))
					{
						iVar8 = __LIB_0__::func_534(2444, -1, 0);
						if (BitTest(iVar8, 4))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_FILM_004_M"))
					{
						iVar9 = __LIB_0__::func_534(2424, -1, 0);
						if (BitTest(iVar9, 22))
						{
							return 0;
						}
					}
					return !__LIB_0__::func_137(3797, -1);
					break;
				case joaat("MP_FILM_005_F"):
				case joaat("MP_FILM_005_M"):
					if (iParam1 == joaat("MP_FILM_005_F"))
					{
						iVar10 = __LIB_0__::func_534(2444, -1, 0);
						if (BitTest(iVar10, 5))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_FILM_005_M"))
					{
						iVar11 = __LIB_0__::func_534(2424, -1, 0);
						if (BitTest(iVar11, 23))
						{
							return 0;
						}
					}
					return !__LIB_0__::func_137(3798, -1);
					break;
				case joaat("MP_FILM_006_F"):
				case joaat("MP_FILM_006_M"):
					if (iParam1 == joaat("MP_FILM_006_F"))
					{
						iVar12 = __LIB_0__::func_534(2444, -1, 0);
						if (BitTest(iVar12, 6))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_FILM_006_M"))
					{
						iVar13 = __LIB_0__::func_534(2424, -1, 0);
						if (BitTest(iVar13, 24))
						{
							return 0;
						}
					}
					return !__LIB_0__::func_137(3799, -1);
					break;
				case joaat("MP_FILM_007_F"):
				case joaat("MP_FILM_007_M"):
					if (iParam1 == joaat("MP_FILM_007_F"))
					{
						iVar14 = __LIB_0__::func_534(2444, -1, 0);
						if (BitTest(iVar14, 7))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_FILM_007_M"))
					{
						iVar15 = __LIB_0__::func_534(2424, -1, 0);
						if (BitTest(iVar15, 25))
						{
							return 0;
						}
					}
					return !__LIB_0__::func_137(3800, -1);
					break;
				case joaat("MP_FILM_008_F"):
				case joaat("MP_FILM_008_M"):
					if (iParam1 == joaat("MP_FILM_008_F"))
					{
						iVar16 = __LIB_0__::func_534(2444, -1, 0);
						if (BitTest(iVar16, 8))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_FILM_008_M"))
					{
						iVar17 = __LIB_0__::func_534(2424, -1, 0);
						if (BitTest(iVar17, 26))
						{
							return 0;
						}
					}
					return !__LIB_0__::func_137(3801, -1);
					break;
				case joaat("MP_FILM_009_F"):
				case joaat("MP_FILM_009_M"):
					if (iParam1 == joaat("MP_FILM_009_F"))
					{
						iVar18 = __LIB_0__::func_534(2444, -1, 0);
						if (BitTest(iVar18, 9))
						{
							return 0;
						}
					}
					else if (iParam1 == joaat("MP_FILM_009_M"))
					{
						iVar19 = __LIB_0__::func_534(2424, -1, 0);
						if (BitTest(iVar19, 27))
						{
							return 0;
						}
					}
					return !__LIB_0__::func_137(3802, -1);
					break;
			}
			break;
		case joaat("mpLuxe2_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Luxe_Tat_030_M"):
				case joaat("MP_Luxe_Tat_031_M"):
					return 1;
					break;
				case joaat("MP_Luxe_Tat_030_F"):
				case joaat("MP_Luxe_Tat_031_F"):
					return 1;
					break;
			}
			break;
		case joaat("multiplayer_overlays"):
			switch (iParam1)
			{
				case joaat("MP_FM_OGA_000_m"):
				case joaat("MP_FM_OGA_001_m"):
				case joaat("MP_FM_OGA_002_m"):
				case joaat("MP_FM_OGA_003_m"):
				case joaat("MP_FM_OGA_000_f"):
				case joaat("MP_FM_OGA_001_f"):
				case joaat("MP_FM_OGA_002_f"):
				case joaat("MP_FM_OGA_003_f"):
					return !__LIB_0__::func_116();
					break;
			}
			break;
	}
	return 0;
}

int func_464(int iParam0, int iParam1)//Position - 0x51718
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
			iVar2 = __LIB_0__::func_534(1759, -1, 0);
			if (iParam1 != -1)
			{
				iVar2 = iParam1;
			}
			if (iVar0 > 15)
			{
				iVar3 = func_508(iParam0, 11, -1);
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
			iVar2 = __LIB_0__::func_534(1759, -1, 0);
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
				iVar5 = func_508(iParam0, 11, -1);
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

int func_473(int iParam0, bool bParam1)//Position - 0x51B76
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
							iVar2 = __LIB_11__::func_108(joaat("MP_M_Freemode_01"), 11, func_508(iParam0, 11, -1), 0);
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
						if (__LIB_18__::func_432(13, -1))
						{
							return 1;
						}
						else if (__LIB_18__::func_432(14, -1))
						{
							return 1;
						}
						else if (__LIB_18__::func_432(15, -1))
						{
							return 1;
						}
						else if (__LIB_18__::func_432(16, -1))
						{
							return 1;
						}
						else if (__LIB_18__::func_432(71, -1))
						{
							return 1;
						}
						else if (__LIB_18__::func_432(72, -1))
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
						iVar3 = func_508(iParam0, 11, -1);
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
						iVar5 = func_508(iParam0, 8, -1);
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
							iVar7 = __LIB_11__::func_108(joaat("MP_F_Freemode_01"), 11, func_508(iParam0, 11, -1), 0);
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
						iVar8 = func_508(iParam0, 11, -1);
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
							iVar10 = __LIB_11__::func_108(joaat("MP_F_Freemode_01"), 11, func_508(iParam0, 11, -1), 0);
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
							iVar11 = __LIB_11__::func_108(joaat("MP_F_Freemode_01"), 11, func_508(iParam0, 11, -1), 0);
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
						iVar12 = func_508(iParam0, 8, -1);
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

int func_481(int iParam0, int iParam1)//Position - 0x5410B
{
	int iVar0;
	iVar0 = __LIB_18__::func_468();
	if (iVar0 != -1)
	{
		if (!func_482(iParam0, iParam1, iVar0))
		{
			__LIB_25__::func_43(iVar0, 0, Global_78127);
			return 1;
		}
	}
	return 0;
}

int func_482(int iParam0, int iParam1, int iParam2)//Position - 0x5413D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (!__LIB_6__::func_808(iParam0, iParam1, -1))
	{
		if (iParam0 == joaat("MP_M_Freemode_01"))
		{
			iVar0 = -1;
			iVar1 = -1;
			if (iParam1 >= 237)
			{
				iVar1 = __LIB_0__::func_420(iParam0, iParam1, 11, 3);
				iVar0 = __LIB_0__::func_252(iVar1);
			}
			if (iVar1 != -1 && __LIB_0__::func_219(iVar1, 0) != -1)
			{
				return 0;
			}
			if (iVar1 != -1 && __LIB_0__::func_251(iVar1, 0) != -1)
			{
				return 0;
			}
			if (iVar1 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("NO_CREW_EMBLEM"), 0))
			{
				return 0;
			}
			if ((iVar1 == joaat("DLC_MP_VAL_M_JBIB2_0") || iVar1 == joaat("DLC_MP_VAL_M_JBIB2_1")) || iVar1 == joaat("DLC_MP_VAL_M_JBIB2_2"))
			{
				return 0;
			}
			if ((((((iParam1 >= 0 && iParam1 <= 15) || (iParam1 >= 16 && iParam1 <= 31)) || (iParam1 >= 124 && iParam1 <= 139)) || iVar0 == 0) || iVar0 == 1) || iVar0 == 8)
			{
				if (iParam2 == 15)
				{
					return 1;
				}
				else if (iParam2 == 13 || iParam2 == 14)
				{
					if (__LIB_11__::func_108(iParam0, 11, iParam1, 0) == -1)
					{
						return 1;
					}
				}
			}
			else if ((iParam1 >= 80 && iParam1 <= 95) || iVar0 == 5)
			{
				if ((iParam2 == 16 || iParam2 == 71) || iParam2 == 72)
				{
					return 1;
				}
			}
			else if ((iParam1 >= 140 && iParam1 <= 155) || iVar0 == 9)
			{
				if (iParam2 == 13 || iParam2 == 15)
				{
					return 1;
				}
			}
		}
		else if (iParam0 == joaat("MP_F_Freemode_01"))
		{
			iVar2 = -1;
			iVar3 = -1;
			if (iParam1 >= 256)
			{
				iVar3 = __LIB_0__::func_420(iParam0, iParam1, 11, 4);
				iVar2 = __LIB_0__::func_252(iVar3);
			}
			if (iVar3 != -1 && __LIB_0__::func_219(iVar3, 0) != -1)
			{
				return 0;
			}
			if (iVar3 != -1 && __LIB_0__::func_251(iVar3, 0) != -1)
			{
				return 0;
			}
			if (iVar3 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("NO_CREW_EMBLEM"), 0))
			{
				return 0;
			}
			if ((iParam1 >= 0 && iParam1 <= 15) || iVar2 == 0)
			{
				if (iParam2 == 13 || iParam2 == 15)
				{
					if (__LIB_11__::func_108(iParam0, 11, iParam1, 0) == -1)
					{
						return 1;
					}
				}
			}
			else if ((iParam1 >= 32 && iParam1 <= 47) || iVar2 == 2)
			{
				if (iParam2 == 13 || iParam2 == 16)
				{
					if (__LIB_11__::func_108(iParam0, 11, iParam1, 0) == -1)
					{
						return 1;
					}
				}
			}
			else if ((iParam1 >= 64 && iParam1 <= 79) || iVar2 == 4)
			{
				if (iParam2 == 13)
				{
					return 1;
				}
				if (iParam2 == 15)
				{
					if (iVar2 != 4 || !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("TAT_DECL"), 0))
					{
						return 1;
					}
				}
			}
			else if ((iParam1 >= 80 && iParam1 <= 95) || iVar2 == 5)
			{
				if (iParam2 == 13)
				{
					return 1;
				}
			}
			else if ((iParam1 >= 144 && iParam1 <= 159) || iVar2 == 9)
			{
				if (iParam2 == 14)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_493(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x5AA07
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
					iVar0 = func_493(iParam0, -99, __LIB_6__::func_807(iParam0, iParam1, 0), iParam3);
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
					iVar0 = func_493(iParam0, -99, __LIB_6__::func_807(iParam0, iParam1, 0), iParam3);
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

void func_494(int iParam0)//Position - 0x5BD42
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
		if (!func_499(iParam0, &bVar14, iVar9, iVar10, iVar12) || PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
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
		if (!func_499(iParam0, &bVar14, iVar9, iVar10, iVar12))
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

int func_499(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x5C70E
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
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAZ_MASK"), 0) && !__LIB_0__::func_709(iVar0, 14, func_508(iParam0, 14, 0), -1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_502(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x5F028
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (func_548(iParam0))
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
			__LIB_31__::func_926(MISC::GET_HASH_KEY("torsoDecal"), iParam0);
			if (iParam1 == 11)
			{
				if (((((!func_482(iVar0, iParam2, 13) && !func_482(iVar0, iParam2, 14)) && !func_482(iVar0, iParam2, 15)) && !func_482(iVar0, iParam2, 16)) && !func_482(iVar0, iParam2, 71)) && !func_482(iVar0, iParam2, 72))
				{
					__LIB_31__::func_926(MISC::GET_HASH_KEY("crewLogo"), iParam0);
				}
			}
			iVar2 = __LIB_11__::func_108(iVar0, iParam1, iParam2, iParam4);
			if (iVar2 != -1)
			{
				if (iParam3 == 1)
				{
					__LIB_18__::func_467(iParam0, iVar2, 0);
				}
				else
				{
					__LIB_25__::func_43(iVar2, 1, Global_78127);
				}
			}
		}
	}
}

int func_508(int iParam0, int iParam1, int iParam2)//Position - 0x5F2D9
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
				if (func_407(iParam0, iParam1, iVar0))
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
				if (func_407(iParam0, iParam1, iVar1))
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

void func_509(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x5F37A
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
		Global_78130[2 /*14*/] = { __LIB_35__::func_544(iParam0, iParam1, iParam2, -1) };
		if (BitTest(Global_78130[2 /*14*/].f_6, 1) && BitTest(Global_78130[2 /*14*/].f_6, 6))
		{
			if (iParam1 == 12)
			{
				__LIB_7__::func_238(Global_2883588, 2, 1, 1, -1);
			}
			else if (iParam1 == 13)
			{
			}
			else if (iParam1 == 14)
			{
				__LIB_7__::func_238(Global_2883588, 2, 1, 1, -1);
			}
			else
			{
				__LIB_7__::func_238(Global_2883588, 2, 1, 1, -1);
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
							__LIB_7__::func_238(iVar2, 2, 1, 1, -1);
							if (iVar5 < Global_4538446)
							{
								Global_4538446[iVar5] = iVar2;
								Global_4538457[iVar5] = iVar4;
								iVar5++;
							}
						}
						else
						{
							func_509(iParam0, __LIB_0__::func_33(iVar4), uVar3, 0);
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
									func_509(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_6__::func_758(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 3), 1);
								}
								else
								{
									func_509(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_6__::func_758(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 4), 1);
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
				iVar7 = __LIB_0__::func_534(iVar6, Global_78127, 0);
				MISC::SET_BIT(&iVar7, Global_78130[2 /*14*/].f_1);
				__LIB_0__::func_427(iVar6, iVar7, Global_78127, 1, 0);
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
							func_509(iParam0, 14, iVar8, 0);
						}
						else if (iParam2 >= 75 && iParam2 <= 82)
						{
							iVar8 = (83 + Global_78130[2 /*14*/].f_4);
							func_509(iParam0, 14, iVar8, 0);
						}
					}
					else if (iParam1 == 8)
					{
						if (iParam2 >= 48 && iParam2 <= 63)
						{
							iVar8 = (64 + Global_78130[2 /*14*/].f_4);
							func_509(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 64 && iParam2 <= 79)
						{
							iVar8 = (48 + Global_78130[2 /*14*/].f_4);
							func_509(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 96 && iParam2 <= 111)
						{
							iVar8 = (112 + Global_78130[2 /*14*/].f_4);
							func_509(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 112 && iParam2 <= 127)
						{
							iVar8 = (96 + Global_78130[2 /*14*/].f_4);
							func_509(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 176 && iParam2 <= 191)
						{
							iVar8 = (160 + Global_78130[2 /*14*/].f_4);
							func_509(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 160 && iParam2 <= 175)
						{
							iVar8 = (176 + Global_78130[2 /*14*/].f_4);
							func_509(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 32 && iParam2 <= 47)
						{
							iVar8 = (0 + Global_78130[2 /*14*/].f_4);
							func_509(iParam0, 11, iVar8, 0);
						}
						else if (iParam2 >= 224 && iParam2 <= 239)
						{
							iVar8 = (16 + Global_78130[2 /*14*/].f_4);
							func_509(iParam0, 11, iVar8, 0);
						}
					}
					else if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar8 = (32 + Global_78130[2 /*14*/].f_4);
							func_509(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 16 && iParam2 <= 31)
						{
							iVar8 = (224 + Global_78130[2 /*14*/].f_4);
							func_509(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 220 && iParam2 <= 235)
						{
							switch (iParam2)
							{
								case 220:
									func_509(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_0"), 8, 3), 0);
									func_509(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_0"), 8, 3), 0);
									break;
								case 221:
									func_509(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_1"), 8, 3), 0);
									func_509(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_1"), 8, 3), 0);
									break;
								case 222:
									func_509(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_2"), 8, 3), 0);
									func_509(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_2"), 8, 3), 0);
									break;
								case 223:
									func_509(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_3"), 8, 3), 0);
									func_509(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_3"), 8, 3), 0);
									break;
								case 224:
									func_509(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_4"), 8, 3), 0);
									func_509(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_4"), 8, 3), 0);
									break;
								case 225:
									func_509(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_5"), 8, 3), 0);
									func_509(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_5"), 8, 3), 0);
									break;
								case 226:
									func_509(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_6"), 8, 3), 0);
									func_509(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_6"), 8, 3), 0);
									break;
								case 227:
									func_509(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_7"), 8, 3), 0);
									func_509(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_7"), 8, 3), 0);
									break;
								case 228:
									func_509(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_8"), 8, 3), 0);
									func_509(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_8"), 8, 3), 0);
									break;
								case 229:
									func_509(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_9"), 8, 3), 0);
									func_509(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_9"), 8, 3), 0);
									break;
								case 230:
									func_509(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_10"), 8, 3), 0);
									func_509(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_10"), 8, 3), 0);
									break;
								case 231:
									func_509(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_11"), 8, 3), 0);
									func_509(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_11"), 8, 3), 0);
									break;
								case 232:
									func_509(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_12"), 8, 3), 0);
									func_509(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_12"), 8, 3), 0);
									break;
								case 233:
									func_509(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_13"), 8, 3), 0);
									func_509(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_13"), 8, 3), 0);
									break;
								case 234:
									func_509(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_14"), 8, 3), 0);
									func_509(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_14"), 8, 3), 0);
									break;
								case 235:
									func_509(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_15"), 8, 3), 0);
									func_509(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_15"), 8, 3), 0);
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
									func_509(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_0"), 7, 3), 0);
									func_509(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_0"), 7, 3), 0);
									break;
								case 1:
									func_509(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_1"), 7, 3), 0);
									func_509(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_1"), 7, 3), 0);
									break;
								case 2:
									func_509(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_2"), 7, 3), 0);
									func_509(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_2"), 7, 3), 0);
									break;
								case 3:
									func_509(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_3"), 7, 3), 0);
									func_509(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_3"), 7, 3), 0);
									break;
								case 4:
									func_509(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_4"), 7, 3), 0);
									func_509(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_4"), 7, 3), 0);
									break;
								case 5:
									func_509(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_5"), 7, 3), 0);
									func_509(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_5"), 7, 3), 0);
									break;
								case 6:
									func_509(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_6"), 7, 3), 0);
									func_509(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_6"), 7, 3), 0);
									break;
								case 7:
									func_509(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_7"), 7, 3), 0);
									func_509(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_7"), 7, 3), 0);
									break;
								case 8:
									func_509(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_8"), 7, 3), 0);
									func_509(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_8"), 7, 3), 0);
									break;
								case 9:
									func_509(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_9"), 7, 3), 0);
									func_509(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_9"), 7, 3), 0);
									break;
								case 10:
									func_509(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_10"), 7, 3), 0);
									func_509(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_10"), 7, 3), 0);
									break;
								case 11:
									func_509(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_11"), 7, 3), 0);
									func_509(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_11"), 7, 3), 0);
									break;
								case 12:
									func_509(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_12"), 7, 3), 0);
									func_509(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_12"), 7, 3), 0);
									break;
								case 13:
									func_509(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_13"), 7, 3), 0);
									func_509(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_13"), 7, 3), 0);
									break;
								case 14:
									func_509(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_14"), 7, 3), 0);
									func_509(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_14"), 7, 3), 0);
									break;
								case 15:
									func_509(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_15"), 7, 3), 0);
									func_509(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_15"), 7, 3), 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_78130[2 /*14*/].f_4)
							{
								case 0:
									func_509(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_0"), 7, 3), 0);
									func_509(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_0"), 7, 3), 0);
									break;
								case 1:
									func_509(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_1"), 7, 3), 0);
									func_509(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_1"), 7, 3), 0);
									break;
								case 2:
									func_509(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_2"), 7, 3), 0);
									func_509(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_2"), 7, 3), 0);
									break;
								case 3:
									func_509(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_3"), 7, 3), 0);
									func_509(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_3"), 7, 3), 0);
									break;
								case 4:
									func_509(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_4"), 7, 3), 0);
									func_509(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_4"), 7, 3), 0);
									break;
								case 5:
									func_509(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_5"), 7, 3), 0);
									func_509(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_5"), 7, 3), 0);
									break;
								case 6:
									func_509(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_6"), 7, 3), 0);
									func_509(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_6"), 7, 3), 0);
									break;
								case 7:
									func_509(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_7"), 7, 3), 0);
									func_509(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_7"), 7, 3), 0);
									break;
								case 8:
									func_509(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_8"), 7, 3), 0);
									func_509(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_8"), 7, 3), 0);
									break;
								case 9:
									func_509(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_9"), 7, 3), 0);
									func_509(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_9"), 7, 3), 0);
									break;
								case 10:
									func_509(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_10"), 7, 3), 0);
									func_509(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_10"), 7, 3), 0);
									break;
								case 11:
									func_509(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_11"), 7, 3), 0);
									func_509(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_11"), 7, 3), 0);
									break;
								case 12:
									func_509(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_12"), 7, 3), 0);
									func_509(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_12"), 7, 3), 0);
									break;
								case 13:
									func_509(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_13"), 7, 3), 0);
									func_509(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_13"), 7, 3), 0);
									break;
								case 14:
									func_509(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_14"), 7, 3), 0);
									func_509(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_14"), 7, 3), 0);
									break;
								case 15:
									func_509(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_15"), 7, 3), 0);
									func_509(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_15"), 7, 3), 0);
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
							func_509(iParam0, 8, iVar8, 0);
						}
					}
				}
				Global_78130[2 /*14*/] = { __LIB_35__::func_544(iParam0, iParam1, iParam2, -1) };
				if (iParam1 == 11)
				{
					iVar9 = __LIB_6__::func_811(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_509(iParam0, 8, iVar9, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203)
					{
						switch (iParam2)
						{
							case 199:
								func_509(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_0"), 7, 4), 0);
								break;
							case 200:
								func_509(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_1"), 7, 4), 0);
								break;
							case 201:
								func_509(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_2"), 7, 4), 0);
								break;
							}
					}
				}
				else if (iParam1 == 8)
				{
					iVar9 = __LIB_6__::func_807(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_509(iParam0, 11, iVar9, 0);
					}
				}
			}
		}
	}
}

int func_548(int iParam0)//Position - 0x78013
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
				iVar1 = func_508(iParam0, 11, -1);
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
				iVar3 = func_508(iParam0, 11, -1);
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

void func_557(int iParam0)//Position - 0x78724
{
	int iVar0;
	int iVar1;
	bool bVar2;
	iVar0 = __LIB_20__::func_509(iParam0);
	if (__LIB_0__::func_317(iVar0))
	{
		if (!Global_100362[iVar0])
		{
			if (Global_113386.f_2363.f_539.f_2391[iVar0] != 0)
			{
				if (__LIB_0__::func_352(iParam0) != Global_113386.f_2363.f_539.f_2391[iVar0])
				{
					__LIB_10__::func_1(iVar0);
					Global_113386.f_2363.f_539.f_2391[iVar0] = __LIB_0__::func_352(iParam0);
				}
			}
		}
		func_384(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
		if (!Global_100362[iVar0])
		{
			bVar2 = false;
			if (iVar0 == 0)
			{
				if (!__LIB_0__::func_365(49))
				{
					iVar1 = func_350(iParam0, 12, -1);
					if (iVar1 == 16)
					{
						bVar2 = true;
					}
					func_558(__LIB_19__::func_811(0), 12, 16, 0, 0, 0, 0);
				}
				if (!__LIB_0__::func_365(44))
				{
					iVar1 = func_350(iParam0, 3, -1);
					if (((((iVar1 == 70 || iVar1 == 71) || iVar1 == 72) || iVar1 == 73) || iVar1 == 74) || iVar1 == 75)
					{
						bVar2 = true;
					}
					iVar1 = func_350(iParam0, 4, -1);
					if ((((iVar1 == 41 || iVar1 == 42) || iVar1 == 43) || iVar1 == 44) || iVar1 == 45)
					{
						bVar2 = true;
					}
					func_558(__LIB_19__::func_811(0), 3, 70, 1, 0, 0, 0);
					func_558(__LIB_19__::func_811(0), 3, 71, 1, 0, 0, 0);
					func_558(__LIB_19__::func_811(0), 3, 72, 1, 0, 0, 0);
					func_558(__LIB_19__::func_811(0), 3, 73, 1, 0, 0, 0);
					func_558(__LIB_19__::func_811(0), 3, 74, 1, 0, 0, 0);
					func_558(__LIB_19__::func_811(0), 3, 75, 1, 0, 0, 0);
					func_558(__LIB_19__::func_811(0), 4, 41, 1, 0, 0, 0);
					func_558(__LIB_19__::func_811(0), 4, 42, 1, 0, 0, 0);
					func_558(__LIB_19__::func_811(0), 4, 43, 1, 0, 0, 0);
					func_558(__LIB_19__::func_811(0), 4, 44, 1, 0, 0, 0);
					func_558(__LIB_19__::func_811(0), 4, 45, 1, 0, 0, 0);
				}
			}
			else if (iVar0 == 2)
			{
				iVar1 = func_350(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				__LIB_10__::func_1(iVar0);
				func_384(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
			}
		}
		Global_100362[iVar0] = 1;
	}
}

void func_558(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)//Position - 0x78981
{
	__LIB_38__::func_82(iParam0, iParam1, iParam2, bParam3);
	func_561(iParam0, iParam1, iParam2, bParam4, 1);
	if (bParam5)
	{
		__LIB_0__::func_364(iParam0, iParam1, iParam2, 0);
	}
	if (iParam6 == 1)
	{
		__LIB_38__::func_81(iParam0, iParam1, iParam2, 0);
	}
}

int func_561(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x78B3C
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	Global_78130[1 /*14*/] = { __LIB_35__::func_896(iParam0, iParam1, iParam2, -1) };
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
					uVar3 = { __LIB_11__::func_102(iParam0, iParam2) };
					iVar1 = 0;
					while (iVar1 <= 14)
					{
						if ((uVar3[iVar1] != -99 && iVar1 != 12) && iVar1 != 14)
						{
							if (iVar1 != 13)
							{
								func_561(iParam0, iVar1, uVar3[iVar1], 1, 1);
								__LIB_38__::func_82(iParam0, iVar1, uVar3[iVar1], 1);
							}
							else
							{
								uVar4 = { __LIB_18__::func_247(iParam0, uVar3[iVar1]) };
								iVar2 = 0;
								while (iVar2 <= 8)
								{
									func_561(iParam0, 14, uVar4[iVar2], 1, 1);
									__LIB_38__::func_82(iParam0, 14, uVar4[iVar2], 1);
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

void func_565(int iParam0, int iParam1, bool bParam2)//Position - 0x79121
{
	int iVar0;
	int iVar1;
	switch (iParam0)
	{
		case 0:
			iVar0 = iLocal_173;
			break;
		case 1:
			iVar0 = iLocal_174;
			break;
		case 2:
			iVar0 = iLocal_175;
			break;
		case 3:
			iVar0 = iLocal_176;
			break;
		case 4:
			iVar0 = iLocal_177;
			break;
	}
	iParam1 = iParam1;
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iVar0))
	{
		iVar1 = OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iVar0);
		if (iVar1 == 1)
		{
			OBJECT::DOOR_SYSTEM_SET_SPRING_REMOVED(iVar0, bParam2, false, false);
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iVar0, 0, false, true);
		}
		else
		{
			OBJECT::DOOR_SYSTEM_SET_SPRING_REMOVED(iVar0, bParam2, false, true);
		}
	}
}

void func_573()//Position - 0x79339
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	int iVar4;
	if (func_275())
	{
		__LIB_42__::func_873(2, "stageSneakThrough", 0, 0, 0, 1);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_138) && !ENTITY::IS_ENTITY_DEAD(iLocal_138, false))
		{
			__LIB_36__::func_52(iLocal_138);
		}
		func_210(PLAYER::PLAYER_ID(), 1, 0);
		iLocal_85 = 1;
		iLocal_238 = 0;
		iLocal_239[1] = 0;
		iLocal_239[2] = 0;
		iLocal_239[3] = 0;
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_140, 5, false);
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_131))
		{
			while (!__LIB_20__::func_621(&iLocal_131, 14, Local_106, 110.1351f, 1))
			{
				func_806(0);
			}
			ENTITY::SET_ENTITY_HEALTH(iLocal_131, 101, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_131, 3, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_131, 10, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_131, 6, 3, 0, 0);
			PED::SET_PED_CONFIG_FLAG(iLocal_131, 118, false);
			PED::SET_PED_CONFIG_FLAG(iLocal_131, 208, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_131, true);
			TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_131, sLocal_115, "jimmy_playingvideogame_base", -806.657f, 170.139f, 76.47f, 0f, 0f, 111f, 8f, -8f, -1, 3584, 0f, 2, 0);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_131, true);
			func_118(iLocal_131, Local_106, 110.1351f, 1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_11__::func_149(14));
			TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_131, sLocal_115, "jimmy_playingvideogame_loop_d", -806.52f, 169.751f, 75.693f, 0f, 0f, -50f, 8f, -8f, -1, 9225, 0f, 2, 0);
			func_806(0);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_132))
		{
			while (!__LIB_20__::func_621(&iLocal_132, 15, Local_107, 50.0651f, 1))
			{
				func_806(0);
			}
			ENTITY::SET_ENTITY_HEALTH(iLocal_132, 101, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_132, 3, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_132, 4, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_132, 6, 2, 0, 0);
			PED::SET_PED_CONFIG_FLAG(iLocal_132, 118, false);
			PED::SET_PED_CONFIG_FLAG(iLocal_132, 208, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_132, true);
			while (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_132))
			{
				func_806(0);
			}
			if (iLocal_158 == 0)
			{
				iLocal_158 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-812.1879f, 179.9663f, 71.1639f, "V_Michael");
			}
			INTERIOR::RETAIN_ENTITY_IN_INTERIOR(iLocal_132, iLocal_158);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_11__::func_149(15));
			func_118(iLocal_132, -800.5298f, 170.2849f, 75.7406f, 180.0982f, 1);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_157);
			TASK::TASK_PLAY_ANIM_ADVANCED(0, sLocal_116, "tracey_argument", -806.166f, 170.525f, 76.46f, 0f, 0f, 110f, 1000f, -1000f, -1, 9216, 0.9f, 2, 0);
			TASK::TASK_PLAY_ANIM_ADVANCED(0, sLocal_115, "tracey_idle_a", -800.835f, 170.158f, 75.79f, 0f, 0f, -64f, 1000f, -8f, -1, 9224, 0f, 2, 1);
			TASK::TASK_PLAY_ANIM_ADVANCED(0, sLocal_115, "tracey_idle_b", -800.835f, 170.158f, 75.79f, 0f, 0f, -64f, 8f, -8f, -1, 9224, 0f, 2, 1);
			TASK::TASK_PLAY_ANIM_ADVANCED(0, sLocal_115, "tracey_idle_c", -800.835f, 170.158f, 75.79f, 0f, 0f, -64f, 8f, -8f, -1, 9224, 0f, 2, 1);
			TASK::TASK_PLAY_ANIM_ADVANCED(0, sLocal_115, "tracey_idle_d", -800.835f, 170.158f, 75.79f, 0f, 0f, -64f, 8f, -8f, -1, 9225, 0f, 2, 1);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_157);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_132, iLocal_157);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_157);
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_168))
			{
				iLocal_168 = OBJECT::CREATE_OBJECT(joaat("prop_phone_ing_02"), ENTITY::GET_ENTITY_COORDS(iLocal_132, true), true, true, false);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_168, iLocal_132, PED::GET_PED_BONE_INDEX(iLocal_132, 60309), Local_101, Local_101, true, true, false, false, 2, true, 0);
			}
			func_806(0);
		}
		while (!__LIB_20__::func_621(&iLocal_133, 17, Local_108, 0.3001f, 1))
		{
			func_806(0);
		}
		PED::SET_PED_COMPONENT_VARIATION(iLocal_133, 2, 0, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_133, 3, 0, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_133, 4, 0, 1, 0);
		ENTITY::SET_ENTITY_HEALTH(iLocal_133, 101, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_133, true);
		__LIB_0__::func_203(&uLocal_288, 4, iLocal_133, "AMANDA", 0, 1);
		if (iLocal_158 == 0)
		{
			iLocal_158 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-812.1879f, 179.9663f, 71.1639f, "V_Michael");
		}
		INTERIOR::RETAIN_ENTITY_IN_INTERIOR(iLocal_133, iLocal_158);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_11__::func_149(17));
		func_806(0);
		while (!__LIB_20__::func_621(&iLocal_134, 25, Local_109, -3.4667f, 1))
		{
			func_806(0);
		}
		ENTITY::SET_ENTITY_HEALTH(iLocal_134, 101, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_134, true);
		__LIB_0__::func_203(&uLocal_288, 7, iLocal_134, "TENNISCOACH", 0, 1);
		if (iLocal_158 == 0)
		{
			iLocal_158 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-812.1879f, 179.9663f, 71.1639f, "V_Michael");
		}
		INTERIOR::RETAIN_ENTITY_IN_INTERIOR(iLocal_134, iLocal_158);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_11__::func_149(25));
		if (!TASK::DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS(-805.8604f, 172.6347f, 75.7407f))
		{
			iLocal_190[0] = TASK::ADD_COVER_POINT(-808.0162f, 178.515f, 71.1531f, -70f, 1, 2, 0, true);
		}
		if (!TASK::DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS(-805.7504f, 172.4508f, 75.7407f))
		{
			iLocal_190[1] = TASK::ADD_COVER_POINT(-805.7504f, 172.4508f, 75.7407f, 111f, 0, 2, 0, true);
		}
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_INSIDE_HOUSE"))
		{
			AUDIO::START_AUDIO_SCENE("ARM_3_INSIDE_HOUSE");
		}
		func_115(3);
		AUDIO::SET_PORTAL_SETTINGS_OVERRIDE("V_MICHAEL_PS_BATHROOM_WITH_WINDOW", "V_MICHAEL_PS_BATHROOM_WITHOUT_WINDOW");
		__LIB_32__::func_665(&iLocal_150, &iLocal_140, 0);
		func_806(0);
		iLocal_164 = OBJECT::CREATE_OBJECT(iLocal_191, -801.49f, 179.15f, 72.32f, true, true, false);
		func_806(0);
		iLocal_165 = OBJECT::CREATE_OBJECT(iLocal_192, -801.49f, 179.15f, 72.32f, true, true, false);
		func_806(0);
		iLocal_161 = OBJECT::CREATE_OBJECT(iLocal_193, -801.49f, 179.35f, 72.32f, true, true, false);
		func_806(0);
		iLocal_162 = OBJECT::CREATE_OBJECT(iLocal_193, -801.49f, 179.85f, 72.32f, true, true, false);
		func_806(0);
		iLocal_163 = OBJECT::CREATE_OBJECT(iLocal_194, -801.49f, 179.55f, 72.32f, true, true, false);
		func_806(0);
		ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_164, iLocal_131, PED::GET_PED_BONE_INDEX(iLocal_131, 28422), Local_101, Local_101, false, false, false, false, 2, true, 0);
		ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_165, iLocal_131, PED::GET_PED_BONE_INDEX(iLocal_131, 31086), 0.01f, 0f, 0f, -180f, 90f, 0f, false, false, false, false, 2, true, 0);
		ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_161, iLocal_133, PED::GET_PED_BONE_INDEX(iLocal_133, 28422), Local_101, Local_101, false, false, false, false, 2, true, 0);
		ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_162, iLocal_134, PED::GET_PED_BONE_INDEX(iLocal_134, 28422), Local_101, Local_101, false, false, false, false, 2, true, 0);
		ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_163, iLocal_134, PED::GET_PED_BONE_INDEX(iLocal_134, 60309), Local_101, Local_101, false, false, false, false, 2, true, 0);
		if (func_120())
		{
			func_118(PLAYER::PLAYER_PED_ID(), -802.6609f, 168.6319f, 75.7407f, 31.0258f, 1);
			__LIB_11__::func_102(iLocal_140, Local_110, 111.6656f);
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_132, true);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_131, true);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_133, true);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_134, true);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_140, true);
			iLocal_158 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-812.1879f, 179.9663f, 71.1639f, "V_Michael");
			INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_158);
			while (!INTERIOR::IS_INTERIOR_READY(iLocal_158))
			{
				func_806(0);
			}
			iLocal_86 = 1;
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_132, false);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_131, false);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_133, false);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_134, false);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_140, false);
			if (!bLocal_92)
			{
				func_119(-802.1f, 167.9f, 77.7f, 20f);
			}
			func_118(PLAYER::PLAYER_PED_ID(), -802.6609f, 168.6319f, 75.7407f, 31.0258f, 1);
			PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Idle"), false, 0, false);
			__LIB_11__::func_102(iLocal_140, Local_110, 111.6656f);
			PHYSICS::ACTIVATE_PHYSICS(iLocal_140);
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1f);
			func_115(5);
			if (!CAM::DOES_CAM_EXIST(iLocal_155))
			{
				iLocal_155 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);
			}
			CAM::SET_CAM_PARAMS(iLocal_155, -802.73315f, 167.99127f, 77.42276f, -11.807504f, 0f, 17.05362f, 50f, 0, 1, 1, 2);
			CAM::SET_CAM_ACTIVE(iLocal_155, true);
			func_806(0);
			CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(false, 0f, 1, 0);
			func_806(10);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(500);
			}
		}
	}
	else
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 2f);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_168))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_132) && !PED::IS_PED_INJURED(iLocal_132))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_132, sLocal_116, "tracey_argument", 3))
				{
					if (ENTITY::IS_ENTITY_VISIBLE(iLocal_168))
					{
						ENTITY::SET_ENTITY_VISIBLE(iLocal_168, false, false);
					}
				}
				else if (!ENTITY::IS_ENTITY_VISIBLE(iLocal_168))
				{
					ENTITY::SET_ENTITY_VISIBLE(iLocal_168, true, false);
				}
			}
		}
		switch (iLocal_48)
		{
			case 0:
				func_19("ARM3HLP_AVOID", 1, -1);
				if (!__LIB_0__::func_75())
				{
					INTERIOR::UNPIN_INTERIOR(iLocal_158);
					__LIB_0__::func_203(&uLocal_288, 6, iLocal_131, "JIMMY", 0, 1);
					func_807("ARM3_JIM1.5", 7, 1, 0);
					func_14();
				}
				break;
			case 1:
				if (!__LIB_0__::func_75())
				{
					func_113("ARM3_GETCAR", 7500, 1);
				}
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_185))
				{
					if (!PED::IS_SYNCHRONIZED_SCENE_LOOPED(iLocal_185))
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_185) == 1f && ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iLocal_161))
						{
							iLocal_185 = PED::CREATE_SYNCHRONIZED_SCENE(-796.971f, 185.839f, 72.717f, 0f, 0f, 51f, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(iLocal_133, iLocal_185, sLocal_115, "tennis_coach_loop_wife", 1000f, -4f, 8, 0, 1000f, 4);
							TASK::TASK_SYNCHRONIZED_SCENE(iLocal_134, iLocal_185, sLocal_115, "tennis_coach_loop_coach", 1000f, -4f, 8, 0, 1000f, 4);
							PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_185, true);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_185, 0f);
							ENTITY::DETACH_ENTITY(iLocal_161, false, true);
							ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_161, iLocal_185, "tennis_coach_loop_racketa", sLocal_115, 1000f, 8f, 0, 1000f);
							ENTITY::DETACH_ENTITY(iLocal_162, false, true);
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_162, true);
							ENTITY::DETACH_ENTITY(iLocal_163, false, true);
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_163, true);
							SYSTEM::SETTIMERA(0);
						}
					}
				}
				iVar0 = 0;
				if (HUD::IS_MESSAGE_BEING_DISPLAYED())
				{
					iVar0 = 1;
				}
				if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !__LIB_0__::func_75())
				{
					if (iLocal_50[iLocal_49] == -1)
					{
						iLocal_50[iLocal_49] = 9;
					}
					else if (iLocal_50[iLocal_49] > 0)
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -803.1275f, 167.65747f, 75.74072f, -807.44434f, 178.84273f, 78.99088f, 3.25f, false, true, 0))
						{
							if (SYSTEM::TIMERB() > iLocal_52)
							{
								if (!__LIB_11__::func_869("ARM3_JIM"))
								{
									func_807("ARM3_JIM", 8, 0, iVar0);
									iLocal_52 = MISC::GET_RANDOM_INT_IN_RANGE(5500, 10000);
									SYSTEM::SETTIMERB(0);
									iLocal_50[iLocal_49] = (iLocal_50[iLocal_49] - 1);
								}
							}
						}
					}
					else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -803.1275f, 167.65747f, 75.74072f, -807.44434f, 178.84273f, 78.99088f, 3.25f, false, true, 0))
					{
						if (SYSTEM::TIMERB() > iLocal_52)
						{
							__LIB_6__::func_834(iLocal_131, "GENERIC_CURSE_HIGH", 3);
							iLocal_52 = MISC::GET_RANDOM_INT_IN_RANGE(5500, 10000);
							SYSTEM::SETTIMERB(0);
						}
					}
				}
				if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !__LIB_0__::func_75())
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -802.1136f, 176.5611f, 73.9906f, -804.4435f, 182.1805f, 79.0034f, 5f, false, true, 0))
					{
						if ((!__LIB_11__::func_869("ARM3_TRCYA") || !__LIB_11__::func_869("ARM3_TRCYB")) || !__LIB_11__::func_869("ARM3_TRCYC"))
						{
							__LIB_0__::func_203(&uLocal_288, 5, iLocal_132, "TRACEY", 0, 1);
							if (!func_848("ARM3_TRCYA"))
							{
								func_807("ARM3_TRCYA", 8, 1, 0);
								RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3.5f, 4f, 3);
							}
							else if (!func_848("ARM3_TRCYB"))
							{
								func_807("ARM3_TRCYB", 8, 1, 0);
							}
							else if (!func_848("ARM3_TRCYC"))
							{
								func_807("ARM3_TRCYC", 8, 1, 0);
							}
						}
					}
				}
				if (((((func_848("ARM3_TRCYA") && func_848("ARM3_TRCYB")) && func_848("ARM3_TRCYC")) && !__LIB_11__::func_869("ARM3_TRCYA")) && !__LIB_11__::func_869("ARM3_TRCYB")) && !__LIB_11__::func_869("ARM3_TRCYC"))
				{
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_132, sLocal_115, "tracey_idle_a", 3))
					{
						TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_132, sLocal_115, "tracey_idle_a", -800.835f, 170.158f, 75.79f, 0f, 0f, -64f, 8f, -8f, -1, 9217, 0f, 2, 0);
					}
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -794.92755f, 184.10698f, 70.83471f, -815.3759f, 176.08621f, 74.15309f, 25f, false, true, 0))
				{
					if (((!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_185) && ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iLocal_161)) && ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iLocal_162)) && ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iLocal_163))
					{
						iLocal_185 = PED::CREATE_SYNCHRONIZED_SCENE(-796.971f, 185.839f, 72.717f, 0f, 0f, 51f, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_133, iLocal_185, sLocal_115, "tennis_coach_intro_wife", 1000f, -4f, 8, 0, 1000f, 4);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_134, iLocal_185, sLocal_115, "tennis_coach_intro_coach", 1000f, -4f, 8, 0, 1000f, 4);
						ENTITY::DETACH_ENTITY(iLocal_161, false, true);
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_161, iLocal_185, "tennis_coach_intro_racketa", sLocal_115, 1000f, 8f, 0, 1000f);
						ENTITY::DETACH_ENTITY(iLocal_162, false, true);
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_162, iLocal_185, "tennis_coach_intro_racketb", sLocal_115, 1000f, 8f, 0, 1000f);
						ENTITY::DETACH_ENTITY(iLocal_163, false, true);
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_163, iLocal_185, "tennis_coach_intro_bag", sLocal_115, 1000f, 8f, 0, 1000f);
					}
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_185))
					{
						if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !__LIB_0__::func_75())
						{
							if (!func_848("ARM3_WIFE_1"))
							{
								if (!PED::IS_SYNCHRONIZED_SCENE_LOOPED(iLocal_185) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_185) >= 0.125f)
								{
									func_312("ARM3_WIFE", "ARM3_WIFE_1", 7, 1);
									RECORDING::REPLAY_RECORD_BACK_FOR_TIME(1f, 4f, 4);
								}
							}
							if (!func_848("ARM3_WIFE_2"))
							{
								if (!PED::IS_SYNCHRONIZED_SCENE_LOOPED(iLocal_185) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_185) >= 0.335f)
								{
									func_312("ARM3_WIFE", "ARM3_WIFE_2", 7, 1);
								}
							}
							if (PED::IS_SYNCHRONIZED_SCENE_LOOPED(iLocal_185) || PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_185) >= 0.39f)
							{
								if (!func_848("GarageDoorSmoothClosed"))
								{
									if ((!__LIB_11__::func_869("ARM3_WIFEA") || !__LIB_11__::func_869("ARM3_WIFEB")) || !__LIB_11__::func_869("ARM3_WIFEC"))
									{
										if (!func_848("ARM3_WIFEA"))
										{
											func_807("ARM3_WIFEA", 8, 1, 0);
											RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4.5f, 6f, 3);
										}
										else if (!func_848("ARM3_WIFEB"))
										{
											func_807("ARM3_WIFEB", 8, 1, 0);
										}
										else if (!func_848("ARM3_WIFEC"))
										{
											func_807("ARM3_WIFEC", 8, 1, 0);
										}
									}
								}
							}
						}
					}
				}
				if (((!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -803.1275f, 167.65747f, 75.74072f, -807.44434f, 178.84273f, 78.99088f, 3.25f, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -802.1136f, 176.5611f, 73.9906f, -805.7435f, 185.8805f, 79.0034f, 5f, false, true, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -794.92755f, 184.10698f, 70.83471f, -815.3759f, 176.08621f, 74.15309f, 25f, false, true, 0)) || func_848("GarageDoorSmoothClosed"))
				{
					if (func_848("ARM3_JIM"))
					{
						func_842("ARM3_JIM", 0);
					}
					if (!__LIB_0__::func_77(0) && __LIB_0__::func_75())
					{
						__LIB_0__::func_296();
					}
				}
				if (!func_848("SneakReminder"))
				{
					if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						if (!PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -809.95654f, 175.54138f, 75.74074f, -801.04047f, 178.92603f, 79.24074f, 3.75f, false, true, 0) || !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -805.78577f, 179.74878f, 75.74074f, -801.4209f, 168.2948f, 79.24074f, 11f, false, true, 0))
							{
								func_842("ARM3HLP_SNEAK", 0);
								func_19("ARM3HLP_SNEAK", 1, -1);
								func_842("SneakReminder", 1);
							}
						}
						else
						{
							func_842("ARM3HLP_SNEAK", 1);
							func_842("SneakReminder", 1);
						}
					}
				}
				if (__LIB_0__::func_1("ARM3HLP_SNEAK"))
				{
					if (PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
					{
						__LIB_30__::func_214(1);
					}
				}
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					if (func_848("ARM3HLP_SNEAK"))
					{
						if (!func_848("ARM3HLP_SNEAK2"))
						{
							if (Global_96877 < 2)
							{
								func_19("ARM3HLP_SNEAK2", 1, -1);
								Global_96877 = 2;
							}
							else
							{
								func_842("ARM3HLP_SNEAK2", 1);
							}
						}
						else if (!func_848("ARM3HLP_STAT"))
						{
							if (Global_96877 < 3)
							{
								func_19("ARM3HLP_STAT", 1, -1);
								Global_96877 = 3;
							}
							else
							{
								func_842("ARM3HLP_STAT", 1);
							}
						}
						else if (!func_848("ARM3HLP_SOUNDBLIPS") && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -805.78577f, 179.74878f, 75.74074f, -801.4209f, 168.2948f, 79.24074f, 11f, false, true, 0))
						{
							func_19("ARM3HLP_SOUNDBLIPS", 1, -1);
						}
					}
				}
				break;
		}
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_132, sLocal_116, "tracey_argument", 3))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
			RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
			if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_132, sLocal_116, "tracey_argument") >= 0.95f && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_132, sLocal_116, "tracey_argument") < 1f)
			{
				ENTITY::SET_ENTITY_ANIM_CURRENT_TIME(iLocal_132, sLocal_116, "tracey_argument", 1f);
			}
		}
		func_586();
		func_583();
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -807.4023f, 189.0046f, 71.47892f, -815.2882f, 185.97816f, 74.95445f, 6.5f, false, true, 0))
		{
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_INSIDE_HOUSE"))
			{
				AUDIO::STOP_AUDIO_SCENE("ARM_3_INSIDE_HOUSE");
			}
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_ENTER_GARAGE"))
			{
				AUDIO::START_AUDIO_SCENE("ARM_3_ENTER_GARAGE");
			}
			if (!func_848("EnterGarageAudio"))
			{
				func_115(6);
				func_842("EnterGarageAudio", 1);
			}
		}
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_140, false) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			func_8();
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -805.78577f, 179.74878f, 75.74074f, -801.4209f, 168.2948f, 79.24074f, 11f, false, true, 0))
		{
			if (!HUD::DOES_BLIP_EXIST(iLocal_146) && ENTITY::DOES_ENTITY_EXIST(iLocal_131))
			{
				__LIB_37__::func_503(&iLocal_146, &iLocal_131, 1);
			}
			if (!HUD::DOES_BLIP_EXIST(iLocal_147) && ENTITY::DOES_ENTITY_EXIST(iLocal_132))
			{
				iLocal_147 = HUD::ADD_BLIP_FOR_COORD(ENTITY::GET_ENTITY_COORDS(iLocal_132, true));
				HUD::SET_BLIP_COLOUR(iLocal_147, 1);
				HUD::SET_BLIP_SCALE(iLocal_147, 0.75f);
				HUD::SET_BLIP_PRIORITY(iLocal_147, 9);
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_147, "ARM3_BLIPPED");
				Local_113 = { ENTITY::GET_ENTITY_COORDS(iLocal_132, true) };
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_147))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_132, sLocal_116, "tracey_argument", 3))
				{
					Local_113 = { ENTITY::GET_ENTITY_COORDS(iLocal_132, true) };
				}
				else
				{
					Var1 = { ENTITY::GET_ENTITY_COORDS(iLocal_132, true) };
					Local_113.f_0 = (Local_113.f_0 + ((((Var1.f_0 - Local_113.f_0) / 1f) * __LIB_0__::func_301(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID()), 1f, 2f)) * SYSTEM::TIMESTEP()));
					Local_113.f_1 = (Local_113.f_1 + ((((Var1.f_1 - Local_113.f_1) / 1f) * __LIB_0__::func_301(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID()), 1f, 2f)) * SYSTEM::TIMESTEP()));
					Local_113.f_2 = (Local_113.f_2 + ((((Var1.f_2 - Local_113.f_2) / 1f) * __LIB_0__::func_301(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID()), 1f, 2f)) * SYSTEM::TIMESTEP()));
				}
				Var2 = { Local_113 };
				Var3 = { HUD::GET_BLIP_COORDS(iLocal_147) };
				Var3.f_0 = (Var3.f_0 + ((((Var2.f_0 - Var3.f_0) / 1f) * __LIB_0__::func_301(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID()), 1f, 2f)) * SYSTEM::TIMESTEP()));
				Var3.f_1 = (Var3.f_1 + ((((Var2.f_1 - Var3.f_1) / 1f) * __LIB_0__::func_301(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID()), 1f, 2f)) * SYSTEM::TIMESTEP()));
				Var3.f_2 = (Var3.f_2 + ((((Var2.f_2 - Var3.f_2) / 1f) * __LIB_0__::func_301(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID()), 1f, 2f)) * SYSTEM::TIMESTEP()));
				HUD::SET_BLIP_COORDS(iLocal_147, Var3);
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_149))
			{
				__LIB_10__::func_7(&iLocal_149);
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_148))
			{
				__LIB_10__::func_7(&iLocal_148);
			}
		}
		else
		{
			if (!func_848("GarageDoorSmoothClosed"))
			{
				if (!HUD::DOES_BLIP_EXIST(iLocal_149) && ENTITY::DOES_ENTITY_EXIST(iLocal_134))
				{
					__LIB_37__::func_503(&iLocal_149, &iLocal_134, 1);
				}
				if (!HUD::DOES_BLIP_EXIST(iLocal_148) && ENTITY::DOES_ENTITY_EXIST(iLocal_133))
				{
					__LIB_37__::func_503(&iLocal_148, &iLocal_133, 1);
				}
			}
			else
			{
				if (HUD::DOES_BLIP_EXIST(iLocal_149))
				{
					__LIB_10__::func_7(&iLocal_149);
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_148))
				{
					__LIB_10__::func_7(&iLocal_148);
				}
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_146))
			{
				__LIB_10__::func_7(&iLocal_146);
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_147))
			{
				__LIB_10__::func_7(&iLocal_147);
			}
		}
		if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()) || (((PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_131) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_132)) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_133)) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_134)))
		{
			if (WEAPON::IS_FLASH_LIGHT_ON(PLAYER::PLAYER_PED_ID()))
			{
				if ((ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) > 32.1361f && ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) < 179.8933f) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -803.4743f, 169.5663f, 75.740326f, -806.65936f, 177.8588f, 78.24074f, 2.5f, false, true, 0))
				{
					func_581();
					if (func_815(sLocal_115))
					{
						iVar4 = PED::CREATE_SYNCHRONIZED_SCENE(-806.52f, 169.751f, 75.693f, 0f, 0f, -50f, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_131, iVar4, sLocal_115, "jimmy_playingvideogame_fail", 8f, -8f, 5, 0, 1000f, 0);
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_164, iVar4, "jimmy_playingvideogame_fail_controller", sLocal_115, 8f, -8f, 0, 1000f);
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_165, iVar4, "jimmy_playingvideogame_fail_headset", sLocal_115, 8f, -8f, 0, 1000f);
						PED::SET_SYNCHRONIZED_SCENE_PHASE(iVar4, 0.25f);
					}
					PED::SET_PED_KEEP_TASK(iLocal_131, true);
					__LIB_0__::func_203(&uLocal_288, 6, iLocal_131, "JIMMY", 0, 1);
					func_807("ARM3_JIMF", 7, 1, 0);
					func_806(2000);
					iLocal_237 = 17;
					func_821();
				}
				if ((ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) > 162.1006f && ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) < 240.0467f) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -803.47687f, 175.87029f, 73.99074f, -807.1281f, 185.34587f, 78.254265f, 3.25f, false, true, 0))
				{
					if (func_815(sLocal_115))
					{
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_132, sLocal_116, "tracey_argument", 3))
						{
							TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_132, sLocal_115, "tracey_fail", -800.835f, 170.158f, 75.79f, 0f, 0f, -64f, 4f, -8f, -1, 9218, 0f, 2, 1);
						}
						else
						{
							TASK::TASK_REACT_AND_FLEE_PED(iLocal_132, PLAYER::PLAYER_PED_ID());
						}
					}
					PED::SET_PED_KEEP_TASK(iLocal_132, true);
					__LIB_0__::func_203(&uLocal_288, 5, iLocal_132, "TRACEY", 0, 1);
					func_807("ARM3_TRCF", 7, 1, 0);
					func_806(2000);
					iLocal_237 = 17;
					func_821();
				}
				if ((((ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) > 262.5618f && ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) < 315.2036f) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -815.79254f, 177.14484f, 69.40309f, -796.05566f, 184.8813f, 73.85547f, 3.25f, false, true, 0)) || ((ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) > 291.0086f && ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) < 330.7509f) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -801.4074f, 186.81458f, 71.60547f, -797.24384f, 177.11436f, 74.83471f, 8f, false, true, 0))) || ((ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) > 313.1061f && ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) < 337.2681f) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -796.1494f, 185.40631f, 71.10547f, -806.5534f, 170.22183f, 74.83471f, 6f, false, true, 0)))
				{
					TASK::CLEAR_PED_TASKS(iLocal_133);
					TASK::TASK_REACT_AND_FLEE_PED(iLocal_133, PLAYER::PLAYER_PED_ID());
					PED::SET_PED_KEEP_TASK(iLocal_133, true);
					TASK::CLEAR_PED_TASKS(iLocal_134);
					TASK::TASK_REACT_AND_FLEE_PED(iLocal_134, PLAYER::PLAYER_PED_ID());
					PED::SET_PED_KEEP_TASK(iLocal_134, true);
					func_580();
					func_807("ARM3_WIFF", 7, 1, 0);
					func_806(2000);
					iLocal_237 = 17;
					func_821();
				}
			}
		}
		if (PED::IS_PED_JUMPING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
		{
			PLAYER::SET_PLAYER_SNEAKING_NOISE_MULTIPLIER(PLAYER::PLAYER_ID(), 2f);
		}
		else
		{
			PLAYER::SET_PLAYER_SNEAKING_NOISE_MULTIPLIER(PLAYER::PLAYER_ID(), 1f);
		}
		if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -805.78577f, 179.74878f, 75.74074f, -801.4209f, 168.2948f, 79.24074f, 11f, false, true, 0) && !PED::IS_PED_JUMPING(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
		{
			PLAYER::SET_PLAYER_NOISE_MULTIPLIER(PLAYER::PLAYER_ID(), 0.75f);
		}
		else
		{
			PLAYER::SET_PLAYER_NOISE_MULTIPLIER(PLAYER::PLAYER_ID(), 1f);
		}
		HUD::FORCE_SONAR_BLIPS_THIS_FRAME();
	}
	if (func_7())
	{
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_INSIDE_HOUSE"))
		{
			AUDIO::STOP_AUDIO_SCENE("ARM_3_INSIDE_HOUSE");
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_ENTER_GARAGE"))
		{
			AUDIO::STOP_AUDIO_SCENE("ARM_3_ENTER_GARAGE");
		}
		if (iLocal_95)
		{
			__LIB_26__::func_468(1, 5);
			iLocal_95 = 0;
		}
		PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
		CUTSCENE::REMOVE_CUTSCENE();
		while (CUTSCENE::HAS_CUTSCENE_LOADED())
		{
			func_806(0);
		}
		__LIB_0__::func_296();
		__LIB_10__::func_7(&iLocal_145);
		__LIB_10__::func_7(&iLocal_146);
		__LIB_10__::func_7(&iLocal_147);
		__LIB_10__::func_7(&iLocal_149);
		__LIB_10__::func_7(&iLocal_148);
		__LIB_10__::func_7(&iLocal_154);
		__LIB_10__::func_7(&iLocal_151);
		RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
		PED::SET_PED_KEEP_TASK(iLocal_131, true);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_131);
		PED::SET_PED_KEEP_TASK(iLocal_132, true);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_132);
		PED::SET_PED_KEEP_TASK(iLocal_133, true);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_133);
		PED::SET_PED_KEEP_TASK(iLocal_134, true);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_134);
		__LIB_11__::func_100(&iLocal_139);
		__LIB_0__::func_202(&uLocal_288, 4);
		__LIB_0__::func_202(&uLocal_288, 5);
		__LIB_0__::func_202(&uLocal_288, 6);
		__LIB_0__::func_202(&uLocal_288, 7);
		iLocal_236++;
	}
}

void func_580()//Position - 0x7AF18
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_161))
	{
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_185))
		{
			ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_161, 0f, true);
		}
		ENTITY::DETACH_ENTITY(iLocal_161, false, true);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_161, false);
		PHYSICS::ACTIVATE_PHYSICS(iLocal_161);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_162))
	{
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_185))
		{
			ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_162, 0f, true);
		}
		ENTITY::DETACH_ENTITY(iLocal_162, false, true);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_162, false);
		PHYSICS::ACTIVATE_PHYSICS(iLocal_162);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_163))
	{
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_185))
		{
			ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_163, 0f, true);
		}
		ENTITY::DETACH_ENTITY(iLocal_163, false, true);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_163, false);
		PHYSICS::ACTIVATE_PHYSICS(iLocal_163);
	}
}

void func_581()//Position - 0x7AFB3
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_164))
	{
		ENTITY::DETACH_ENTITY(iLocal_164, false, true);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_164, false);
		PHYSICS::ACTIVATE_PHYSICS(iLocal_164);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_165))
	{
		ENTITY::DETACH_ENTITY(iLocal_165, false, true);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_165, false);
		PHYSICS::ACTIVATE_PHYSICS(iLocal_165);
	}
}

void func_583()//Position - 0x7B01E
{
	if (iLocal_96 == 0)
	{
		if (__LIB_10__::func_5(4))
		{
			__LIB_11__::func_891(4, 1);
			iLocal_96 = 1;
		}
	}
}

void func_586()//Position - 0x7B075
{
	if (iLocal_95 == 0)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -803.0943f, 167.77483f, 75.24073f, -808.85394f, 184.6587f, 79.76219f, 11.75f, false, true, 0))
		{
			if (__LIB_10__::func_5(5))
			{
				__LIB_20__::func_680(5, 0, 6, 0, 0);
				GRAPHICS::SET_TV_VOLUME(0f);
				iLocal_95 = 1;
			}
		}
	}
}

void func_592()//Position - 0x7B3A7
{
	int iVar0;
	if (func_275())
	{
		__LIB_42__::func_873(2, "stageSneakThrough", 0, 0, 0, 1);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_138) && !ENTITY::IS_ENTITY_DEAD(iLocal_138, false))
		{
			__LIB_36__::func_52(iLocal_138);
		}
		func_210(PLAYER::PLAYER_ID(), 0, 256);
		iLocal_85 = 1;
		while (!__LIB_20__::func_621(&iLocal_131, 14, Local_106, 110.1351f, 1))
		{
			func_806(0);
		}
		ENTITY::SET_ENTITY_HEALTH(iLocal_131, 101, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_131, 3, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_131, 10, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_131, 6, 3, 0, 0);
		PED::SET_PED_CONFIG_FLAG(iLocal_131, 118, false);
		PED::SET_PED_CONFIG_FLAG(iLocal_131, 208, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_131, true);
		TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_131, sLocal_115, "jimmy_playingvideogame_base", -804.75f, 175.55f, 75.75f, 0f, 0f, 111f, 8f, -8f, -1, 3584, 0f, 2, 0);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_131, true);
		func_118(iLocal_131, Local_106, 110.1351f, 1);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_11__::func_149(14));
		func_806(0);
		while (!__LIB_20__::func_621(&iLocal_132, 15, Local_107, 50.0651f, 1))
		{
			func_806(0);
		}
		ENTITY::SET_ENTITY_HEALTH(iLocal_132, 101, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_132, 3, 3, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_132, 4, 3, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_132, 6, 2, 0, 0);
		PED::SET_PED_CONFIG_FLAG(iLocal_132, 118, false);
		PED::SET_PED_CONFIG_FLAG(iLocal_132, 208, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_132, true);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_11__::func_149(15));
		func_115(3);
		func_121(iLocal_131, 0);
		func_121(iLocal_132, 0);
		if (func_120())
		{
			func_118(PLAYER::PLAYER_PED_ID(), -802.1424f, 166.1851f, 75.4634f, 19.113f, 1);
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
			TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_118, "climb_in_window_v2", Local_125, Local_126, 0f, 2), 1f, 20000, __LIB_11__::func_128(PED::GET_ANIM_INITIAL_OFFSET_ROTATION(sLocal_118, "climb_in_window_v2", Local_125, Local_126, 0f, 2)), 0.5f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1f);
			func_115(4);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(500);
			}
		}
	}
	else
	{
		if (!func_848("ARM3_EAVDROP_3"))
		{
			if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !__LIB_0__::func_75())
			{
				__LIB_0__::func_203(&uLocal_288, 5, iLocal_132, "TRACEY", 0, 1);
				__LIB_0__::func_203(&uLocal_288, 6, iLocal_131, "JIMMY", 0, 1);
				func_312("ARM3_EAVDROP", "ARM3_EAVDROP_3", 7, 1);
			}
		}
		switch (iLocal_48)
		{
			case 0:
				func_14();
				break;
			case 1:
				if ((ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_118, "climb_in_window_v2", Local_125, Local_126, 0f, 2), 0.2f, 0.2f, 3f, false, true, 0) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_132)) || SYSTEM::TIMERA() > 5000)
				{
					iLocal_124 = PED::CREATE_SYNCHRONIZED_SCENE(Local_125, Local_126, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_124, sLocal_118, "climb_in_window_v2", 1.5f, -1.5f, 4, 0, 1.5f, 0);
					PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_124, false);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(8f, 10f, 3);
					func_14();
				}
				break;
			case 2:
				if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_124) || (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_124) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_124) >= 0.95f))
				{
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					func_8();
				}
				break;
			}
	}
	if (func_7())
	{
		iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (iVar0 != iLocal_138)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
			{
				iLocal_138 = iVar0;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_138) && !ENTITY::IS_ENTITY_DEAD(iLocal_138, false))
		{
			__LIB_11__::func_102(iLocal_138, -855.576f, 172.7193f, 67.1646f, 352.4847f);
			VEHICLE::SET_VEHICLE_FIXED(iLocal_138);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_138, 5f);
			__LIB_42__::func_99(-855.576f, 172.7193f, 67.1646f, 352.4847f, 0, 1);
		}
		func_121(iLocal_131, 1);
		TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_131, sLocal_115, "jimmy_playingvideogame_loop_d", -806.52f, 169.751f, 75.693f, 0f, 0f, -50f, 8f, -8f, -1, 9225, 0f, 2, 0);
		func_121(iLocal_132, 1);
		func_118(iLocal_132, -800.5298f, 170.2849f, 75.7406f, 180.0982f, 1);
		TASK::OPEN_SEQUENCE_TASK(&iLocal_157);
		TASK::TASK_PLAY_ANIM_ADVANCED(0, sLocal_116, "tracey_argument", -806.166f, 170.525f, 76.46f, 0f, 0f, 110f, 1000f, -1000f, -1, 9216, 0.9f, 2, 0);
		TASK::TASK_PLAY_ANIM_ADVANCED(0, sLocal_115, "tracey_idle_a", -800.835f, 170.158f, 75.79f, 0f, 0f, -64f, 1000f, -8f, -1, 9224, 0f, 2, 1);
		TASK::TASK_PLAY_ANIM_ADVANCED(0, sLocal_115, "tracey_idle_b", -800.835f, 170.158f, 75.79f, 0f, 0f, -64f, 8f, -8f, -1, 9224, 0f, 2, 1);
		TASK::TASK_PLAY_ANIM_ADVANCED(0, sLocal_115, "tracey_idle_c", -800.835f, 170.158f, 75.79f, 0f, 0f, -64f, 8f, -8f, -1, 9224, 0f, 2, 1);
		TASK::TASK_PLAY_ANIM_ADVANCED(0, sLocal_115, "tracey_idle_d", -800.835f, 170.158f, 75.79f, 0f, 0f, -64f, 8f, -8f, -1, 9225, 0f, 2, 1);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_157);
		TASK::TASK_PERFORM_SEQUENCE(iLocal_132, iLocal_157);
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_157);
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_168))
		{
			iLocal_168 = OBJECT::CREATE_OBJECT(joaat("prop_phone_ing_02"), ENTITY::GET_ENTITY_COORDS(iLocal_132, true), true, true, false);
			ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_168, iLocal_132, PED::GET_PED_BONE_INDEX(iLocal_132, 60309), Local_101, Local_101, true, true, false, false, 2, true, 0);
		}
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_132, false, false);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1f);
		iLocal_236++;
	}
}

void func_621()//Position - 0x81405
{
	if (func_275())
	{
		func_210(PLAYER::PLAYER_ID(), 1, 0);
		__LIB_7__::func_279(0, 1, 1, 0, 0, 0, 0);
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::ENABLE_SPECIAL_ABILITY(PLAYER::PLAYER_ID(), false, 0);
		__LIB_42__::func_873(1, "stageClimbUp", 0, 0, PLAYER::PLAYER_PED_ID(), 1);
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_138))
		{
			if (PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()) != 0)
			{
				iLocal_138 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
				VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_138, true);
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_138, true, true);
				ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_138, true);
			}
			else if (PLAYER::GET_PLAYERS_LAST_VEHICLE() != 0)
			{
				iLocal_138 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				if ((ENTITY::IS_ENTITY_DEAD(iLocal_138, false) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_138, false)) || ((!ENTITY::IS_ENTITY_DEAD(iLocal_138, false) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_138, false)) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_138, true), true) > 75f))
				{
					iLocal_138 = 0;
				}
				else
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_138, true, true);
					ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_138, true);
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_138) && !ENTITY::IS_ENTITY_DEAD(iLocal_138, false))
		{
			__LIB_36__::func_52(iLocal_138);
		}
		bLocal_99 = false;
		iLocal_85 = 1;
		HUD::DISPLAY_RADAR(true);
		HUD::DISPLAY_HUD(true);
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_139))
		{
			__LIB_30__::func_733(&iLocal_139, joaat("bison3"), -800.1796f, 164.9729f, 70.5296f, 111.0221f, 132, 0);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_139, 2);
			VEHICLE::SET_VEHICLE_ALARM(iLocal_139, true);
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("bison3"));
		__LIB_30__::func_733(&iLocal_140, joaat("bjxl"), Local_110, 111.6656f, 126, 0);
		func_627(iLocal_140);
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_140, 5, true);
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_140, Local_110, false, false, true);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("bjxl"));
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_CLIMB_INTO_GARDEN"))
		{
			AUDIO::START_AUDIO_SCENE("ARM_3_CLIMB_INTO_GARDEN");
		}
		while (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("ARM_3_03", false, -1))
		{
			func_806(0);
		}
		__LIB_10__::func_7(&iLocal_151);
		__LIB_32__::func_665(&iLocal_150, &iLocal_140, 0);
		if (func_120())
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			func_118(PLAYER::PLAYER_PED_ID(), -851.866f, 178.7462f, 68.6477f, 262.7337f, 1);
			if (!bLocal_92)
			{
				func_119(-851.866f, 178.7462f, 68.6477f, 50f);
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1f);
			func_806(1500);
			func_115(2);
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
			MISC::CLEAR_AREA(-851.866f, 178.7462f, 68.6477f, 10f, true, false, false, false);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(500);
			}
		}
	}
	else
	{
		if (CAM::IS_SCREEN_FADED_IN())
		{
			if (func_113("ARM3_FIND", 7500, 1))
			{
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 9f, 3);
			}
		}
		__LIB_39__::func_848(40, 4);
		if (!func_848("AudioTrackStart"))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -852.5234f, 171.69162f, 56.97251f, -816.68445f, 169.05966f, 90.5098f, 50.75f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -762.31616f, 171.4667f, 58.85421f, -821.1784f, 164.803f, 90.092186f, 45f, false, true, 0)) || bLocal_99))
			{
				func_115(1);
				func_842("AudioTrackStart", 1);
			}
		}
		if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
		{
			func_842("RagdollBlock", 1);
		}
		else if (func_848("RagdollBlock"))
		{
			if (((!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -818.04047f, 180.16129f, 70.22781f, -816.3772f, 175.83273f, 75.22781f, 5f, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -797.38324f, 175.26077f, 71.83491f, -792.3354f, 177.30612f, 74.83491f, 4f, false, true, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -791.3479f, 179.4418f, 71.83491f, -793.3248f, 184.54428f, 74.83491f, 4f, false, true, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -816.4725f, 182.13174f, 70.8271f, -818.8613f, 188.38844f, 75.31989f, 5f, false, true, 0))
			{
				func_842("RagdollBlock", 0);
			}
		}
		if (!func_848("TryFrontDoor1"))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -817.4048f, 178.4506f, (71.2278f - 10f), 100f, 100f, 100f, false, true, 0))
			{
				if (func_815(sLocal_122) && !func_848("RagdollBlock"))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -818.04047f, 180.16129f, 71.22781f, -816.3772f, 175.83273f, 75.22781f, 2f, false, true, 0) || (((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -818.04047f, 180.16129f, 70.22781f, -816.3772f, 175.83273f, 75.22781f, 5f, false, true, 0) && (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID()) > 1f && !PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))) && (ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) > 217.7497f || ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) < 9.0051f)) && !__LIB_0__::func_77(0)))
					{
						if (__LIB_0__::func_77(0))
						{
							__LIB_6__::func_849(0);
						}
						WEAPON::SET_CURRENT_PED_WEAPON(func_820(1), joaat("WEAPON_UNARMED"), true);
						if (PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
						{
							TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_122, "LockedDoor_TryOpen_Stealth", -816.445f, 178.149f, 71.27f, 0f, 0f, -70f, 0f, 2), 1f, -1, __LIB_11__::func_128(PED::GET_ANIM_INITIAL_OFFSET_ROTATION(sLocal_122, "LockedDoor_TryOpen_Stealth", -816.445f, 178.149f, 71.27f, 0f, 0f, -70f, 0f, 2)), 0.5f);
						}
						else
						{
							TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_122, "lockeddoor_tryopen", -816.445f, 178.149f, 71.27f, 0f, 0f, -70f, 0f, 2), 1f, -1, __LIB_11__::func_128(PED::GET_ANIM_INITIAL_OFFSET_ROTATION(sLocal_122, "lockeddoor_tryopen", -816.445f, 178.149f, 71.27f, 0f, 0f, -70f, 0f, 2)), 0.5f);
						}
						iLocal_63 = MISC::GET_GAME_TIMER() + 10000;
						func_842("TryFrontDoor1", 1);
					}
				}
			}
		}
		else if (!func_848("ARM3_LOCK_1"))
		{
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_127))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD")) == 1)
				{
					if (!TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID()) || TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
					{
						if ((ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_122, "LockedDoor_TryOpen_Stealth", -816.445f, 178.149f, 71.27f, 0f, 0f, -70f, 0f, 2), 0.2f, 0.2f, 3f, false, true, 0) && PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID())) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_122, "lockeddoor_tryopen", -816.445f, 178.149f, 71.27f, 0f, 0f, -70f, 0f, 2), 0.2f, 0.2f, 3f, false, true, 0))
						{
							iLocal_127 = PED::CREATE_SYNCHRONIZED_SCENE(-816.445f, 178.149f, 71.27f, 0f, 0f, -70f, 2);
							if (PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
							{
								TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_127, sLocal_122, "LockedDoor_TryOpen_Stealth", 1.5f, -1.5f, 4, 0, 1.5f, 0);
							}
							else
							{
								TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_127, sLocal_122, "lockeddoor_tryopen", 1.5f, -1.5f, 4, 0, 1.5f, 0);
							}
							PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_127, false);
							PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_127, false);
							RECORDING::REPLAY_RECORD_BACK_FOR_TIME(2f, 3.5f, 3);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
						}
					}
				}
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_127))
			{
				__LIB_8__::func_611(0);
			}
			if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_127) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_127) >= 0.9f) || MISC::GET_GAME_TIMER() > iLocal_63)
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				func_842("ARM3_LOCK_1", 1);
			}
		}
		if (!func_848("TryFrontDoor2"))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -795.44f, 177.572f, (71.825f - 10f), 100f, 100f, 100f, false, true, 0))
			{
				if (func_815(sLocal_122) && !func_848("RagdollBlock"))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -796.5758f, 177.10608f, 71.83519f, -794.4295f, 177.95029f, 75.33519f, 2f, false, true, 0) || (((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -797.38324f, 175.26077f, 71.83491f, -792.3354f, 177.30612f, 74.83491f, 4f, false, true, 0) && (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID()) > 1f && !PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))) && (ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) < 107.1689f && ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) > 32.9229f)) && !__LIB_0__::func_77(0)))
					{
						if (__LIB_0__::func_77(0))
						{
							__LIB_6__::func_849(0);
						}
						WEAPON::SET_CURRENT_PED_WEAPON(func_820(1), joaat("WEAPON_UNARMED"), true);
						if (PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
						{
							TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_122, "LockedDoor_TryOpen_Stealth", -795.44f, 177.572f, 71.825f, 0f, 0f, 18.802f, 0f, 2), 1f, -1, __LIB_11__::func_128(PED::GET_ANIM_INITIAL_OFFSET_ROTATION(sLocal_122, "LockedDoor_TryOpen_Stealth", -795.44f, 177.572f, 71.825f, 0f, 0f, 18.802f, 0f, 2)), 0.5f);
						}
						else
						{
							TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_122, "lockeddoor_tryopen", -795.44f, 177.572f, 71.825f, 0f, 0f, 18.802f, 0f, 2), 1f, -1, __LIB_11__::func_128(PED::GET_ANIM_INITIAL_OFFSET_ROTATION(sLocal_122, "lockeddoor_tryopen", -795.44f, 177.572f, 71.825f, 0f, 0f, 18.802f, 0f, 2)), 0.5f);
						}
						iLocal_63 = MISC::GET_GAME_TIMER() + 10000;
						func_842("TryFrontDoor2", 1);
					}
				}
			}
		}
		else if (!func_848("ARM3_LOCK_2"))
		{
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_128))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD")) == 1)
				{
					if (!TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID()) || TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
					{
						if ((ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_122, "LockedDoor_TryOpen_Stealth", -795.44f, 177.572f, 71.825f, 0f, 0f, 18.802f, 0f, 2), 0.2f, 0.2f, 3f, false, true, 0) && PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID())) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_122, "lockeddoor_tryopen", -795.44f, 177.572f, 71.825f, 0f, 0f, 18.802f, 0f, 2), 0.2f, 0.2f, 3f, false, true, 0))
						{
							iLocal_128 = PED::CREATE_SYNCHRONIZED_SCENE(-795.44f, 177.572f, 71.825f, 0f, 0f, 18.802f, 2);
							if (PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
							{
								TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_128, sLocal_122, "LockedDoor_TryOpen_Stealth", 1.5f, -1.5f, 4, 0, 1.5f, 0);
							}
							else
							{
								TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_128, sLocal_122, "lockeddoor_tryopen", 1.5f, -1.5f, 4, 0, 1.5f, 0);
							}
							PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_128, false);
							PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_128, false);
							RECORDING::REPLAY_RECORD_BACK_FOR_TIME(2f, 3.5f, 3);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
						}
					}
				}
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_128))
			{
				__LIB_8__::func_611(0);
			}
			if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_128) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_128) >= 0.9f) || MISC::GET_GAME_TIMER() > iLocal_63)
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				func_842("ARM3_LOCK_2", 1);
			}
		}
		if (!func_848("TryFrontDoor3"))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -793.703f, 181.647f, (71.825f - 10f), 100f, 100f, 100f, false, true, 0))
			{
				if (func_815(sLocal_122) && !func_848("RagdollBlock"))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -793.2989f, 180.48994f, 71.83519f, -794.1301f, 182.65128f, 75.33519f, 2f, false, true, 0) || (((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -791.3479f, 179.4418f, 71.83491f, -793.3248f, 184.54428f, 74.83491f, 4f, false, true, 0) && (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID()) > 1f && !PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))) && (ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) > 34.2561f && ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) < 176.6008f)) && !__LIB_0__::func_77(0)))
					{
						if (__LIB_0__::func_77(0))
						{
							__LIB_6__::func_849(0);
						}
						WEAPON::SET_CURRENT_PED_WEAPON(func_820(1), joaat("WEAPON_UNARMED"), true);
						if (PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
						{
							TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_122, "LockedDoor_TryOpen_Stealth", -793.703f, 181.647f, 71.825f, 0f, 0f, 100f, 0f, 2), 1f, -1, __LIB_11__::func_128(PED::GET_ANIM_INITIAL_OFFSET_ROTATION(sLocal_122, "LockedDoor_TryOpen_Stealth", -793.703f, 181.647f, 71.825f, 0f, 0f, 100f, 0f, 2)), 0.5f);
						}
						else
						{
							TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_122, "lockeddoor_tryopen", -793.703f, 181.647f, 71.825f, 0f, 0f, 100f, 0f, 2), 1f, -1, __LIB_11__::func_128(PED::GET_ANIM_INITIAL_OFFSET_ROTATION(sLocal_122, "lockeddoor_tryopen", -793.703f, 181.647f, 71.825f, 0f, 0f, 100f, 0f, 2)), 0.5f);
						}
						iLocal_63 = MISC::GET_GAME_TIMER() + 10000;
						func_842("TryFrontDoor3", 1);
					}
				}
			}
		}
		else if (!func_848("ARM3_LOCK_3"))
		{
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_129))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD")) == 1)
				{
					if (!TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID()) || TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
					{
						if ((ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_122, "LockedDoor_TryOpen_Stealth", -793.703f, 181.647f, 71.825f, 0f, 0f, 100f, 0f, 2), 0.2f, 0.2f, 3f, false, true, 0) && PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID())) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_122, "lockeddoor_tryopen", -793.703f, 181.647f, 71.825f, 0f, 0f, 100f, 0f, 2), 0.2f, 0.2f, 3f, false, true, 0))
						{
							iLocal_129 = PED::CREATE_SYNCHRONIZED_SCENE(-793.703f, 181.647f, 71.825f, 0f, 0f, 100f, 2);
							if (PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
							{
								TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_129, sLocal_122, "LockedDoor_TryOpen_Stealth", 1.5f, -1.5f, 4, 0, 1.5f, 0);
							}
							else
							{
								TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_129, sLocal_122, "lockeddoor_tryopen", 1.5f, -1.5f, 4, 0, 1.5f, 0);
							}
							PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_129, false);
							PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_129, false);
							RECORDING::REPLAY_RECORD_BACK_FOR_TIME(2f, 3.4f, 3);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
						}
					}
				}
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_129))
			{
				__LIB_8__::func_611(0);
			}
			if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_129) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_129) >= 0.9f) || MISC::GET_GAME_TIMER() > iLocal_63)
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				func_842("ARM3_LOCK_3", 1);
			}
		}
		if (!func_848("TryFrontDoor4"))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -793.703f, 181.647f, (71.825f - 10f), 100f, 100f, 100f, false, true, 0))
			{
				if (func_815(sLocal_122) && !func_848("RagdollBlock"))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -816.38214f, 188.40973f, 71.47899f, -815.03845f, 182.72157f, 74.92583f, 2.5f, false, true, 0) || (((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -816.4725f, 182.13174f, 70.8271f, -818.8613f, 188.38844f, 75.31989f, 5f, false, true, 0) && (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID()) > 1f && !PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))) && (ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) > 217.7497f || ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) < 9.0051f)) && !__LIB_0__::func_77(0)))
					{
						if (__LIB_0__::func_77(0))
						{
							__LIB_6__::func_849(0);
						}
						WEAPON::SET_CURRENT_PED_WEAPON(func_820(1), joaat("WEAPON_UNARMED"), true);
						if (PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
						{
							TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_115, "open_garage_fail_stealth", -815.94f, 185.655f, 72.4578f, 0f, 0f, -69f, 0f, 2), 1f, -1, __LIB_11__::func_128(PED::GET_ANIM_INITIAL_OFFSET_ROTATION(sLocal_115, "open_garage_fail_stealth", -815.94f, 185.655f, 72.4578f, 0f, 0f, -69f, 0f, 2)), 0.5f);
						}
						else
						{
							TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_115, "open_garage_fail", -815.84f, 185.695f, 72.465f, 0f, 0f, -69f, 0f, 2), 1f, -1, __LIB_11__::func_128(PED::GET_ANIM_INITIAL_OFFSET_ROTATION(sLocal_115, "open_garage_fail", -815.84f, 185.695f, 72.465f, 0f, 0f, -69f, 0f, 2)), 0.5f);
						}
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(2f, 3.5f, 3);
						iLocal_63 = MISC::GET_GAME_TIMER() + 10000;
						func_842("TryFrontDoor4", 1);
					}
				}
			}
		}
		else if (!func_848("ARM3_LOCK_4"))
		{
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_130))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD")) == 1)
				{
					if (!TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID()) || TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
					{
						if ((ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_115, "open_garage_fail_stealth", -815.94f, 185.655f, 72.4578f, 0f, 0f, -69f, 0f, 2), 0.2f, 0.2f, 3f, false, true, 0) && PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID())) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_115, "open_garage_fail", -815.84f, 185.695f, 72.465f, 0f, 0f, -69f, 0f, 2), 0.2f, 0.2f, 3f, false, true, 0))
						{
							if (PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
							{
								iLocal_130 = PED::CREATE_SYNCHRONIZED_SCENE(-815.94f, 185.655f, 72.4578f, 0f, 0f, -69f, 2);
							}
							else
							{
								iLocal_130 = PED::CREATE_SYNCHRONIZED_SCENE(-815.84f, 185.695f, 72.465f, 0f, 0f, -69f, 2);
							}
							if (PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
							{
								TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_130, sLocal_115, "open_garage_fail_stealth", 1.5f, -1.5f, 4, 0, 1.5f, 0);
							}
							else
							{
								TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_130, sLocal_115, "open_garage_fail", 1.5f, -1.5f, 4, 0, 1.5f, 0);
							}
							PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_130, false);
							PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_130, false);
							RECORDING::REPLAY_RECORD_BACK_FOR_TIME(2f, 3.5f, 3);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
						}
					}
				}
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_130))
			{
				__LIB_8__::func_611(0);
			}
			if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_130) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_130) >= 0.9f) || MISC::GET_GAME_TIMER() > iLocal_63)
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				func_842("ARM3_LOCK_4", 1);
			}
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("interrupt")))
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		}
		if (bLocal_99)
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_145))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_136) && !PED::IS_PED_INJURED(iLocal_136))
				{
					if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_136) && !ENTITY::IS_ENTITY_OCCLUDED(iLocal_136))
					{
						if (!__LIB_0__::func_405("ARM3_FIND", 0, 0))
						{
							func_113("ARM3_GARDEN", 7500, 1);
						}
					}
				}
			}
			if (!func_848("ARM3HLP_SNEAK"))
			{
				func_19("ARM3HLP_SNEAK", 1, -1);
				Global_96877 = 1;
			}
			else if (!func_848("ARM3HLP_SNEAK2"))
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					func_19("ARM3HLP_SNEAK2", 1, -1);
					Global_96877 = 2;
				}
			}
			else if (!func_848("AH_H_TAKEDOWN" /* GXT: ~s~Sneak behind an enemy when unarmed and while holding ~INPUT_AIM~ press ~INPUT_MELEE_ATTACK_LIGHT~ to knock them out.~s~ */))
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() || (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iLocal_136, false), 4f, 4f, 2f, false, true, 0) && CAM::IS_SCREEN_FADED_IN()))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -829.60565f, 194.84245f, 62.430786f, -832.31744f, 151.82742f, 87.16362f, 30f, false, true, 0))
					{
						__LIB_0__::func_187("AH_H_TAKEDOWN" /* GXT: ~s~Sneak behind an enemy when unarmed and while holding ~INPUT_AIM~ press ~INPUT_MELEE_ATTACK_LIGHT~ to knock them out.~s~ */);
						iLocal_55 = MISC::GET_GAME_TIMER() + 10000;
						__LIB_0__::func_460(21);
						func_842("AH_H_TAKEDOWN" /* GXT: ~s~Sneak behind an enemy when unarmed and while holding ~INPUT_AIM~ press ~INPUT_MELEE_ATTACK_LIGHT~ to knock them out.~s~ */, 1);
					}
				}
			}
			else if (!func_848("ARM3HLP_STAT"))
			{
				if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iLocal_136, false), 8f, 8f, 4f, false, true, 0))
				{
					if (__LIB_0__::func_1("AH_H_TAKEDOWN" /* GXT: ~s~Sneak behind an enemy when unarmed and while holding ~INPUT_AIM~ press ~INPUT_MELEE_ATTACK_LIGHT~ to knock them out.~s~ */))
					{
						if (MISC::GET_GAME_TIMER() > iLocal_55)
						{
							__LIB_30__::func_214(1);
						}
					}
				}
				if ((((!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() || PED::WAS_PED_KILLED_BY_STEALTH(iLocal_136)) || PED::WAS_PED_KILLED_BY_TAKEDOWN(iLocal_136)) || PED::WAS_PED_KNOCKED_OUT(iLocal_136)) || PED::IS_PED_INJURED(iLocal_136))
				{
					if (__LIB_0__::func_1("AH_H_TAKEDOWN" /* GXT: ~s~Sneak behind an enemy when unarmed and while holding ~INPUT_AIM~ press ~INPUT_MELEE_ATTACK_LIGHT~ to knock them out.~s~ */))
					{
						__LIB_30__::func_214(1);
					}
					else
					{
						func_19("ARM3HLP_STAT", 1, -1);
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(2.5f, 4f, 3);
						Global_96877 = 3;
					}
				}
			}
		}
		if (__LIB_0__::func_1("ARM3HLP_SNEAK"))
		{
			if (PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
			{
				__LIB_30__::func_214(1);
			}
		}
		bLocal_99 = ((((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -847.8129f, 182.998f, 66.36266f, -811.2782f, 180.25085f, 81.59295f, 30f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -843.9734f, 159.88332f, 65.3092f, -809.6868f, 159.16342f, 76.78688f, 22f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -818.61755f, 161.95332f, 59.90513f, -765.1132f, 168.86789f, 104.2193f, 40f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -772.1868f, 136.95117f, 65.97417f, -772.27637f, 151.57579f, 101.47451f, 20.5f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -823.9943f, 190.3666f, 71.40189f, -773.8348f, 189.7171f, 107.483505f, 10f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -776.78705f, 185.3354f, 71.33521f, -770.1446f, 190.45483f, 107.85865f, 10f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -850.6434f, 145.59607f, 58.64393f, -783.1994f, 146.32298f, 97.667755f, 10f, false, true, 0));
		if (!func_848("GardenerTakedown"))
		{
			if (bLocal_99)
			{
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_CLIMB_INTO_GARDEN"))
				{
					AUDIO::STOP_AUDIO_SCENE("ARM_3_CLIMB_INTO_GARDEN");
				}
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_TAKE_OUT_GARDENER"))
				{
					AUDIO::START_AUDIO_SCENE("ARM_3_TAKE_OUT_GARDENER");
				}
			}
			else
			{
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_TAKE_OUT_GARDENER"))
				{
					AUDIO::STOP_AUDIO_SCENE("ARM_3_TAKE_OUT_GARDENER");
				}
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_CLIMB_INTO_GARDEN"))
				{
					AUDIO::START_AUDIO_SCENE("ARM_3_CLIMB_INTO_GARDEN");
				}
			}
			if ((ENTITY::DOES_ENTITY_EXIST(iLocal_136) && !PED::IS_PED_INJURED(iLocal_136)) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_136))
			{
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_TARGET_GARDENER"))
				{
					AUDIO::START_AUDIO_SCENE("ARM_3_TARGET_GARDENER");
				}
			}
			else if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_TARGET_GARDENER"))
			{
				AUDIO::STOP_AUDIO_SCENE("ARM_3_TARGET_GARDENER");
			}
		}
		else
		{
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_CLIMB_INTO_GARDEN"))
			{
				AUDIO::STOP_AUDIO_SCENE("ARM_3_CLIMB_INTO_GARDEN");
			}
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_TAKE_OUT_GARDENER"))
			{
				AUDIO::STOP_AUDIO_SCENE("ARM_3_TAKE_OUT_GARDENER");
			}
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_TARGET_GARDENER"))
			{
				AUDIO::STOP_AUDIO_SCENE("ARM_3_TARGET_GARDENER");
			}
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_ENTER_HOUSE"))
			{
				AUDIO::START_AUDIO_SCENE("ARM_3_ENTER_HOUSE");
			}
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -800.96643f, 162.50937f, 69.05923f, -785.8609f, 168.4987f, 80.87254f, 17f, false, true, 0))
		{
			func_19("ARM3HLP_CLIMB", 1, 12000);
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -801.6855f, 164.1852f, 70.53752f, -792.5071f, 167.96964f, 77.39737f, 7f, false, true, 0) || (PED::IS_PED_ON_VEHICLE(PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_139, 0f, 2.15f, -2f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_139, 0f, -2.07f, 5f), 2f, false, true, 0)))
		{
			TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), -802.1f, 167.1f, 76.5f, 8000, 2048, 3);
			PLAYER::INCREASE_PLAYER_JUMP_SUPPRESSION_RANGE(PLAYER::PLAYER_ID());
		}
		if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !__LIB_0__::func_75())
		{
			if (!func_848("ARM3_EAVDROP_1"))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -799.5347f, 160.42696f, 73.34288f, -804.0911f, 172.13345f, 79.74031f, 10f, false, true, 0))
				{
					__LIB_0__::func_203(&uLocal_288, 5, 0, "TRACEY", 0, 1);
					__LIB_0__::func_203(&uLocal_288, 6, 0, "JIMMY", 0, 1);
					func_312("ARM3_EAVDROP", "ARM3_EAVDROP_1", 7, 1);
				}
			}
			else if (!func_848("ARM3_EAVDROP_2"))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -799.5347f, 160.42696f, 73.34288f, -804.0911f, 172.13345f, 79.74031f, 10f, false, true, 0))
				{
					__LIB_0__::func_203(&uLocal_288, 5, 0, "TRACEY", 0, 1);
					__LIB_0__::func_203(&uLocal_288, 6, 0, "JIMMY", 0, 1);
					func_312("ARM3_EAVDROP", "ARM3_EAVDROP_2", 7, 1);
				}
			}
			else if (!func_848("ARM3_EAVDROP_3"))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -799.5347f, 160.42696f, 73.34288f, -804.0911f, 172.13345f, 79.74031f, 10f, false, true, 0))
				{
					__LIB_0__::func_203(&uLocal_288, 5, 0, "TRACEY", 0, 1);
					__LIB_0__::func_203(&uLocal_288, 6, 0, "JIMMY", 0, 1);
					func_312("ARM3_EAVDROP", "ARM3_EAVDROP_3", 7, 1);
				}
			}
		}
		if (__LIB_0__::func_1("ARM3HLP_CLIMB"))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -804.2656f, 163.10707f, 76.96302f, 5f, 5f, 2f, false, true, 0))
			{
				__LIB_30__::func_214(1);
			}
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -801.26337f, 164.74147f, 74.86486f, -802.5189f, 168.10796f, 79.74074f, 4f, false, true, 0))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
			PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 102, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 257 /*INPUT_ATTACK2*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 44 /*INPUT_COVER*/, true);
		}
		if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			if (func_848("ClimbInTrigger"))
			{
				if ((TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD")) == 0 || TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD")) == 1) || TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD")) == 2)
				{
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					func_842("ClimbInTrigger", 0);
				}
			}
			if (((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -801.6701f, 166.00462f, 74.84126f, -802.5189f, 168.10796f, 79.74074f, 2f, false, true, 0) && !__LIB_0__::func_77(0)) && !__LIB_1__::func_414()) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -803.03973f, 169.52995f, 75.74064f, -802.29315f, 167.59018f, 79.05743f, 1.5f, false, true, 0))
			{
				func_210(PLAYER::PLAYER_ID(), 0, 256);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
				TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_118, "climb_in_window_v2", Local_125, Local_126, 0f, 2), 1f, 20000, __LIB_11__::func_128(PED::GET_ANIM_INITIAL_OFFSET_ROTATION(sLocal_118, "climb_in_window_v2", Local_125, Local_126, 0f, 2)), 0.5f);
				func_842("ClimbInTrigger", 1);
			}
		}
		else if ((ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_118, "climb_in_window_v2", Local_125, Local_126, 0f, 2), 0.5f, 0.5f, 3f, false, true, 0) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) && !TASK::IS_PED_GETTING_UP(PLAYER::PLAYER_PED_ID()))
		{
			func_8();
		}
		else if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -801.6701f, 166.00462f, 74.84126f, -802.5189f, 168.10796f, 79.74074f, 2f, false, true, 0))
		{
			func_210(PLAYER::PLAYER_ID(), 1, 0);
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		}
		PLAYER::SET_PLAYER_SNEAKING_NOISE_MULTIPLIER(PLAYER::PLAYER_ID(), 0.1f);
		PLAYER::SET_PLAYER_NOISE_MULTIPLIER(PLAYER::PLAYER_ID(), 1f);
	}
	if (func_7())
	{
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_CLIMB_INTO_GARDEN"))
		{
			AUDIO::STOP_AUDIO_SCENE("ARM_3_CLIMB_INTO_GARDEN");
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_TAKE_OUT_GARDENER"))
		{
			AUDIO::STOP_AUDIO_SCENE("ARM_3_TAKE_OUT_GARDENER");
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_TARGET_GARDENER"))
		{
			AUDIO::STOP_AUDIO_SCENE("ARM_3_TARGET_GARDENER");
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_ENTER_HOUSE"))
		{
			AUDIO::STOP_AUDIO_SCENE("ARM_3_ENTER_HOUSE");
		}
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_189))
		{
			GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_189, false);
		}
		if (iLocal_188 != -1)
		{
			AUDIO::STOP_SOUND(iLocal_188);
			AUDIO::RELEASE_SOUND_ID(iLocal_188);
			iLocal_188 = -1;
		}
		TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_136))
		{
			__LIB_5__::func_674(&iLocal_136);
			__LIB_11__::func_108(&iLocal_169);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_M_Gardener_01"));
			STREAMING::REMOVE_ANIM_DICT(sLocal_121);
			if (STREAMING::HAS_CLIP_SET_LOADED(sLocal_120))
			{
				STREAMING::REMOVE_CLIP_SET(sLocal_120);
			}
		}
		__LIB_8__::func_770(0);
		AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("ARM_3_03");
		__LIB_10__::func_7(&iLocal_151);
		__LIB_30__::func_214(1);
		iLocal_236++;
	}
}

int func_627(int iParam0)//Position - 0x831DA
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		__LIB_0__::func_501(iParam0, 0);
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iParam0, "57EIG117");
		VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(iParam0, false);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iParam0, true);
		ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iParam0, true);
		VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(iParam0, 0, false);
		VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam0, false);
		return 1;
	}
	return 0;
}

void func_630()//Position - 0x8328E
{
	struct<3> Var0;
	struct<3> Var1;
	int iVar2;
	int iVar3;
	bool bVar4;
	if (func_275())
	{
		func_210(PLAYER::PLAYER_ID(), 1, 0);
		iLocal_85 = 1;
		iLocal_85 = 1;
		if (func_120())
		{
			func_118(PLAYER::PLAYER_PED_ID(), -50.0827f, -1114.9438f, 25.4358f, 88.4128f, 1);
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_141))
			{
				STREAMING::REQUEST_MODEL(joaat("premier"));
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_135))
			{
				STREAMING::REQUEST_MODEL(__LIB_11__::func_149(18));
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_137))
			{
				STREAMING::REQUEST_MODEL(joaat("A_M_M_BevHills_02"));
			}
			while (((!ENTITY::DOES_ENTITY_EXIST(iLocal_141) && !STREAMING::HAS_MODEL_LOADED(joaat("premier"))) || (!ENTITY::DOES_ENTITY_EXIST(iLocal_135) && !STREAMING::HAS_MODEL_LOADED(__LIB_11__::func_149(18)))) || (!ENTITY::DOES_ENTITY_EXIST(iLocal_137) && !STREAMING::HAS_MODEL_LOADED(joaat("A_M_M_BevHills_02"))))
			{
				SYSTEM::WAIT(0);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_141))
			{
				STREAMING::REQUEST_MODEL(joaat("premier"));
				while (!STREAMING::HAS_MODEL_LOADED(joaat("premier")))
				{
					SYSTEM::WAIT(0);
				}
				__LIB_30__::func_733(&iLocal_141, joaat("premier"), Local_102, 178.9958f, -1, 0);
				VEHICLE::SET_VEHICLE_COLOURS(iLocal_141, 43, 43);
				VEHICLE::SET_VEHICLE_EXTRA(iLocal_141, 10, true);
				VEHICLE::SET_VEHICLE_EXTRA(iLocal_141, 11, true);
				VEHICLE::SET_VEHICLE_EXTRA(iLocal_141, 12, true);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iLocal_141, 43, 134);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_141, 10);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_141, false);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("premier"));
				ENTITY::PLAY_ENTITY_ANIM(iLocal_141, "_leadout_action_simeon_car", sLocal_117, 1000f, false, true, false, 0f, 262144);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_135))
			{
				while (!__LIB_20__::func_621(&iLocal_135, 18, -42.4751f, -1110.9316f, 25.4343f, 312.8127f, 1))
				{
					func_806(0);
				}
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_135, iLocal_196);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_135, true);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_11__::func_149(18));
				__LIB_0__::func_203(&uLocal_288, 8, iLocal_135, "SIMEON", 0, 1);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_157);
				TASK::TASK_PLAY_ANIM_ADVANCED(0, sLocal_117, "_leadout_action_simeon", Local_102, Local_103, 1000f, -4f, -1, 790536, 0f, 2, 0);
				TASK::TASK_PLAY_ANIM_ADVANCED(0, sLocal_117, "_leadout_loop_simeon", Local_102, Local_103, 4f, -4f, -1, 790537, 0f, 2, 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_157);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_135, iLocal_157);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_157);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_135, false, false);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_11__::func_149(18));
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_137))
			{
				__LIB_30__::func_215(&iLocal_137, joaat("A_M_M_BevHills_02"), -39.8746f, -1100.5786f, 25.4343f, 139.6499f, 1);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_137, 0, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_137, 3, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_137, 4, 0, 0, 0);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_137, iLocal_196);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_137, true);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_M_M_BevHills_02"));
				__LIB_0__::func_203(&uLocal_288, 7, iLocal_137, "MrKenneth", 0, 1);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_141) && !ENTITY::IS_ENTITY_DEAD(iLocal_141, false))
				{
					Var0 = { Local_101 };
					Var1 = { Local_101 };
					iLocal_186 = PED::CREATE_SYNCHRONIZED_SCENE(Var0, Var1, 2);
					PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_186, iLocal_141, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_141, "seat_dside_f"));
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_137, iLocal_186, sLocal_117, "_leadout_action_customer", 1000f, -8f, 4, 0, 1000f, 0);
					PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_186, true);
				}
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_137, false, false);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_M_M_BevHills_02"));
			}
			CLOCK::SET_CLOCK_TIME(10, 0, 0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1f);
			func_806(10);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(500);
			}
		}
	}
	else
	{
		if ((ENTITY::DOES_ENTITY_EXIST(iLocal_135) && ENTITY::DOES_ENTITY_EXIST(iLocal_137)) && ENTITY::DOES_ENTITY_EXIST(iLocal_141))
		{
			if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iLocal_135, false), 200f, 200f, 10f, false, true, 0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_141, false))
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_141, 1);
					ENTITY::STOP_ENTITY_ANIM(iLocal_141, "_leadout_loop_simeon_car", sLocal_117, -1000f);
					VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_141, true);
				}
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_141, false);
				__LIB_5__::func_674(&iLocal_135);
				__LIB_5__::func_674(&iLocal_137);
				__LIB_11__::func_100(&iLocal_141);
			}
			else
			{
				if (!__LIB_0__::func_75())
				{
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iLocal_135, false), 15f, 15f, 5f, false, true, 0) && !MISC::IS_PROJECTILE_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_135, false) - Vector(5f, 7.5f, 7.5f), ENTITY::GET_ENTITY_COORDS(iLocal_135, false) + Vector(5f, 7.5f, 7.5f), true))
					{
						if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0)
						{
							iVar2 = 0;
						}
						else
						{
							iVar2 = 1;
						}
						if (!func_848("ARM3_INT_LO"))
						{
							func_807("ARM3_INT_LO", 7, 1, iVar2);
						}
						else if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0)
						{
							if (MISC::GET_GAME_TIMER() > iLocal_51)
							{
								if (!func_848("ARM3_LOC1_1"))
								{
									func_312("ARM3_LOC1", "ARM3_LOC1_1", 7, 1);
								}
								else if (!func_848("ARM3_LOC1_2"))
								{
									func_312("ARM3_LOC1", "ARM3_LOC1_2", 7, 1);
								}
								else if (!func_848("ARM3_LOC1_3"))
								{
									func_312("ARM3_LOC1", "ARM3_LOC1_3", 7, 1);
									iLocal_51 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(5000, 8000));
								}
								else if (!func_848("ARM3_HANG_01"))
								{
									func_807("ARM3_HANG", 7, 0, 0);
									TASK::TASK_LOOK_AT_ENTITY(iLocal_135, func_820(1), 2000, 0, 2);
									iLocal_51 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(5000, 8000));
									func_842("ARM3_HANG_01", 1);
								}
								else if (!func_848("ARM3_LOC2_1"))
								{
									func_312("ARM3_LOC2", "ARM3_LOC2_1", 7, 1);
								}
								else if (!func_848("ARM3_LOC2_2"))
								{
									func_312("ARM3_LOC2", "ARM3_LOC2_2", 7, 1);
								}
								else if (!func_848("ARM3_LOC2_3"))
								{
									func_312("ARM3_LOC2", "ARM3_LOC2_3", 7, 1);
									iLocal_51 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(5000, 8000));
								}
								else if (!func_848("ARM3_HANG_02"))
								{
									func_807("ARM3_HANG", 7, 0, 0);
									TASK::TASK_LOOK_AT_ENTITY(iLocal_135, func_820(1), 2000, 0, 2);
									iLocal_51 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(5000, 8000));
									func_842("ARM3_HANG_02", 1);
								}
								else if (!func_848("ARM3_LOC3_1"))
								{
									func_312("ARM3_LOC3", "ARM3_LOC3_1", 7, 1);
								}
								else if (!func_848("ARM3_LOC3_2"))
								{
									func_312("ARM3_LOC3", "ARM3_LOC3_2", 7, 1);
									iLocal_51 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(5000, 8000));
								}
								else if (!func_848("ARM3_HANG_03"))
								{
									func_807("ARM3_HANG", 7, 0, 0);
									TASK::TASK_LOOK_AT_ENTITY(iLocal_135, func_820(1), 2000, 0, 2);
									iLocal_51 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(5000, 8000));
									func_842("ARM3_HANG_03", 1);
								}
								else if (!func_848("ARM3_LOC4_1"))
								{
									func_312("ARM3_LOC4", "ARM3_LOC4_1", 7, 1);
								}
								else if (!func_848("ARM3_LOC4_2"))
								{
									func_312("ARM3_LOC4", "ARM3_LOC4_2", 7, 1);
									iLocal_51 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(5000, 8000));
								}
								else if (iLocal_50[iLocal_49] == -1)
								{
									iLocal_50[iLocal_49] = 4;
								}
								else if (iLocal_50[iLocal_49] > 0)
								{
									iLocal_51 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(5000, 8000));
									iLocal_50[iLocal_49] = (iLocal_50[iLocal_49] - 1);
									if (iLocal_49 == 0)
									{
										func_807("ARM3_LOCS", 7, 0, 0);
										iLocal_49++;
									}
									else if (iLocal_49 == 1)
									{
										func_807("ARM3_LOCM", 7, 0, 0);
										iLocal_49 = 0;
									}
								}
							}
						}
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_141, false))
				{
					if (VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iLocal_141, 0) < 0.6f || VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iLocal_141, 0) > 0.7f)
					{
						VEHICLE::SET_VEHICLE_DOOR_CONTROL(iLocal_141, 0, 0, 0.64f);
					}
				}
				if (!func_848("AchievedDoorAngle"))
				{
					if (VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iLocal_141, 0) > 0.6f && VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iLocal_141, 0) < 0.7f)
					{
						func_842("AchievedDoorAngle", 1);
					}
				}
				if (!PED::IS_PED_INJURED(iLocal_137))
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_186) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_186) >= 1f)
					{
						TASK::CLEAR_PED_TASKS(iLocal_137);
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_141) && !ENTITY::IS_ENTITY_DEAD(iLocal_141, false))
						{
							PED::SET_PED_INTO_VEHICLE(iLocal_137, iLocal_141, -1);
						}
						TASK::TASK_PLAY_ANIM(iLocal_137, sLocal_117, "_leadout_loop_customer", 1000f, -4f, -1, 33, 0f, false, false, false);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_137, false, false);
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_141, false))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_141, sLocal_117, "_leadout_action_simeon_car", 3))
					{
						if (!PED::IS_PED_INJURED(iLocal_135))
						{
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_135, sLocal_117, "_leadout_action_simeon", 3))
							{
								ENTITY::SET_ENTITY_ANIM_CURRENT_TIME(iLocal_141, sLocal_117, "_leadout_action_simeon_car", ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_135, sLocal_117, "_leadout_action_simeon"));
							}
						}
						if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_141, sLocal_117, "_leadout_action_simeon_car") >= 1f)
						{
							ENTITY::PLAY_ENTITY_ANIM(iLocal_141, "_leadout_loop_simeon_car", sLocal_117, 1000f, true, false, false, 0f, 262144);
						}
					}
				}
				iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || (((ENTITY::DOES_ENTITY_EXIST(iVar3) && !ENTITY::IS_ENTITY_DEAD(iVar3, false)) && ENTITY::IS_ENTITY_AT_COORD(iVar3, Local_102, 10f, 10f, 10f, false, true, 0)) && ENTITY::GET_ENTITY_SPEED(iVar3) > 1f)) || MISC::IS_PROJECTILE_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_141, false) - Vector(3f, 3f, 3f), ENTITY::GET_ENTITY_COORDS(iLocal_141, false) - Vector(3f, 3f, 3f), false))
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_141, false);
					func_842("AchievedDoorAngle", 0);
				}
				else if (func_848("AchievedDoorAngle"))
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_141, true);
				}
				if (((((((((MISC::IS_BULLET_IN_ANGLED_AREA(-49.792606f, -1109.1611f, 24.935764f, -31.390413f, -1115.6296f, 32.42232f, 16f, true) || FIRE::IS_EXPLOSION_IN_ANGLED_AREA(-1, -49.792606f, -1109.1611f, 24.935764f, -31.390413f, -1115.6296f, 32.42232f, 16f)) || FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(ENTITY::GET_ENTITY_COORDS(iLocal_141, false), 10f) > 0) || ((!ENTITY::IS_ENTITY_DEAD(iLocal_141, false) && ENTITY::HAS_COLLISION_LOADED_AROUND_ENTITY(iLocal_141)) && (!ENTITY::IS_ENTITY_AT_COORD(iLocal_141, Local_102, 0.25f, 0.25f, 1f, false, true, 0) || (PED::IS_PED_ON_VEHICLE(PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_141, 0f, 2.15f, -2f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_141, 0f, -2.07f, 5f), 2f, false, true, 0))))) || (!ENTITY::IS_ENTITY_DEAD(iLocal_141, false) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_141, PLAYER::PLAYER_PED_ID(), true))) || (((!PED::IS_PED_INJURED(iLocal_135) && (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_135, sLocal_117, "_leadout_action_simeon", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_135, sLocal_117, "_leadout_loop_simeon", 3))) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_135)) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_135))) || (((!PED::IS_PED_INJURED(iLocal_137) && (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_186) && !(ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_137, sLocal_117, "_leadout_loop_customer", 3) || PED::IS_PED_IN_VEHICLE(iLocal_137, iLocal_141, false)))) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_137)) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_137))) || PED::IS_PED_RAGDOLL(iLocal_135)) || ((PED::IS_PED_INJURED(iLocal_135) || PED::IS_PED_INJURED(iLocal_137)) || ENTITY::IS_ENTITY_DEAD(iLocal_141, false))) || (!ENTITY::IS_ENTITY_DEAD(iLocal_141, false) && (func_848("AchievedDoorAngle") && (VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iLocal_141, 0) < 0.6f || VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iLocal_141, 0) > 0.7f))))
				{
					if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_186) || PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_186) < 0.568f)
					{
						if (!PED::IS_PED_INJURED(iLocal_135))
						{
							TASK::CLEAR_PED_TASKS(iLocal_135);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_135, PLAYER::PLAYER_PED_ID(), 0);
							PED::SET_PED_KEEP_TASK(iLocal_135, true);
							__LIB_0__::func_203(&uLocal_288, 8, iLocal_135, "SIMEON", 0, 1);
							func_807("ARM3_DISRUPT", 7, 1, 0);
						}
						if (!PED::IS_PED_INJURED(iLocal_137))
						{
							TASK::CLEAR_PED_TASKS(iLocal_137);
							TASK::CLEAR_PED_SECONDARY_TASK(iLocal_137);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_157);
							if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_137, false))
							{
								TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
							}
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_157);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_137, iLocal_157);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_157);
							PED::SET_PED_KEEP_TASK(iLocal_137, true);
						}
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_141, false))
						{
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_141, sLocal_117, "_leadout_action_simeon_car", 3))
							{
								ENTITY::STOP_ENTITY_ANIM(iLocal_141, "_leadout_action_simeon_car", sLocal_117, -1000f);
							}
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_141, sLocal_117, "_leadout_loop_simeon_car", 3))
							{
								ENTITY::STOP_ENTITY_ANIM(iLocal_141, "_leadout_loop_simeon_car", sLocal_117, -1000f);
							}
						}
					}
					iLocal_237 = 12;
					func_821();
				}
			}
		}
		if (!func_848("ARM3_ARV"))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_DRIVE_TO_MICHAELS_HOUSE"))
				{
					AUDIO::START_AUDIO_SCENE("ARM_3_DRIVE_TO_MICHAELS_HOUSE");
				}
			}
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_111, true) < 1000f && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_111, true) > 100f)
			{
				__LIB_0__::func_203(&uLocal_288, 8, 0, "SIMEON", 0, 1);
				__LIB_35__::func_985(&uLocal_288, 18, "ARM3AUD", "ARM3_ARV", 8, 1, 0, 0, 1);
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_DRIVE_TO_MICHAELS_HOUSE"))
				{
					AUDIO::STOP_AUDIO_SCENE("ARM_3_DRIVE_TO_MICHAELS_HOUSE");
				}
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_DRIVE_PHONE_SIMEON"))
				{
					AUDIO::START_AUDIO_SCENE("ARM_3_DRIVE_PHONE_SIMEON");
				}
				func_842("ARM3_ARV", 1);
			}
		}
		else
		{
			if (__LIB_2__::func_371() || __LIB_1__::func_412())
			{
				if (!func_848("RejectedCall"))
				{
					SYSTEM::SETTIMERB(0);
					func_842("RejectedCall", 1);
				}
			}
			if (func_848("RejectedCall"))
			{
				if (!func_848("ARM3_CALLTXT" /* GXT: ~s~The paperwork says daddy's boy has locked garage so you'll need to gain access from inside house. I know you keep the motorbike - do not betray me again~s~ */) && SYSTEM::TIMERB() > 2000)
				{
					__LIB_36__::func_66(18, "ARM3_CALLTXT" /* GXT: ~s~The paperwork says daddy's boy has locked garage so you'll need to gain access from inside house. I know you keep the motorbike - do not betray me again~s~ */, 1, 1, 0, 0, 0, 1, 0, 1);
					func_842("ARM3_CALLTXT" /* GXT: ~s~The paperwork says daddy's boy has locked garage so you'll need to gain access from inside house. I know you keep the motorbike - do not betray me again~s~ */, 1);
				}
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_139))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_111, true) < 150f)
			{
				if (func_845(joaat("bison3")))
				{
					__LIB_30__::func_733(&iLocal_139, joaat("bison3"), -800.1796f, 164.9729f, 70.5296f, 111.0221f, 132, 0);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_139, 2);
					VEHICLE::SET_VEHICLE_ALARM(iLocal_139, true);
				}
			}
		}
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -809.68933f, 167.73816f, 80.499176f, 55f, 35f, 25f, false, true, 0))
		{
			bVar4 = ((((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -847.8129f, 182.998f, 66.36266f, -811.2782f, 180.25085f, 81.59295f, 30f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -843.9734f, 159.88332f, 65.3092f, -809.6868f, 159.16342f, 76.78688f, 22f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -818.61755f, 161.95332f, 59.90513f, -765.1132f, 168.86789f, 104.2193f, 40f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -772.1868f, 136.95117f, 65.97417f, -772.27637f, 151.57579f, 101.47451f, 20.5f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -823.9943f, 190.3666f, 71.40189f, -773.8348f, 189.7171f, 107.483505f, 10f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -776.78705f, 185.3354f, 71.33521f, -770.1446f, 190.45483f, 107.85865f, 10f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -850.6434f, 145.59607f, 58.64393f, -783.1994f, 146.32298f, 97.667755f, 10f, false, true, 0));
		}
		if (__LIB_36__::func_14(&iLocal_198, -853.2845f, 178.8083f, 68.6371f, 6f, 6f, 2f, 1, "ARM3_GO", 1, 1, -1) || bVar4)
		{
			func_8();
		}
		if (iLocal_159 != 0)
		{
			if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_159)
			{
				if (iLocal_142[0] == 0 || !ENTITY::DOES_ENTITY_EXIST(iLocal_142[0]))
				{
					iLocal_142[0] = VEHICLE::GET_CLOSEST_VEHICLE(-36.5853f, -1101.4738f, 26.3444f, 5f, joaat("bjxl"), 4);
				}
				else if (ENTITY::DOES_ENTITY_EXIST(iLocal_142[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_142[0], false))
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_142[0], 10);
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_142[0], false);
				}
				if (iLocal_142[1] == 0 || !ENTITY::DOES_ENTITY_EXIST(iLocal_142[1]))
				{
					iLocal_142[1] = VEHICLE::GET_CLOSEST_VEHICLE(-41.4259f, -1099.6481f, 26.0534f, 5f, joaat("tailgater"), 4);
				}
				else if (ENTITY::DOES_ENTITY_EXIST(iLocal_142[1]) && !ENTITY::IS_ENTITY_DEAD(iLocal_142[1], false))
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_142[1], 10);
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_142[1], false);
				}
				if (iLocal_142[2] == 0 || !ENTITY::DOES_ENTITY_EXIST(iLocal_142[2]))
				{
					iLocal_142[2] = VEHICLE::GET_CLOSEST_VEHICLE(-46.2594f, -1097.8386f, 26.3444f, 5f, joaat("bjxl"), 4);
				}
				else if (ENTITY::DOES_ENTITY_EXIST(iLocal_142[2]) && !ENTITY::IS_ENTITY_DEAD(iLocal_142[2], false))
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_142[2], 10);
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_142[2], false);
				}
				if (iLocal_142[3] == 0 || !ENTITY::DOES_ENTITY_EXIST(iLocal_142[3]))
				{
					iLocal_142[3] = VEHICLE::GET_CLOSEST_VEHICLE(-50.08f, -1094.4625f, 26.0671f, 5f, joaat("tailgater"), 4);
				}
				else if (ENTITY::DOES_ENTITY_EXIST(iLocal_142[3]) && !ENTITY::IS_ENTITY_DEAD(iLocal_142[3], false))
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_142[3], 10);
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_142[3], false);
				}
				if (iLocal_142[4] == 0 || !ENTITY::DOES_ENTITY_EXIST(iLocal_142[4]))
				{
					iLocal_142[4] = VEHICLE::GET_CLOSEST_VEHICLE(-37.4128f, -1088.5618f, 26.0671f, 5f, joaat("tailgater"), 4);
				}
				else if (ENTITY::DOES_ENTITY_EXIST(iLocal_142[4]) && !ENTITY::IS_ENTITY_DEAD(iLocal_142[4], false))
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_142[4], 10);
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_142[4], false);
				}
			}
		}
	}
	if (func_7())
	{
		__LIB_18__::func_192(&iLocal_198, 1, 0);
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_DRIVE_TO_MICHAELS_HOUSE"))
		{
			AUDIO::STOP_AUDIO_SCENE("ARM_3_DRIVE_TO_MICHAELS_HOUSE");
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_DRIVE_PHONE_SIMEON"))
		{
			AUDIO::STOP_AUDIO_SCENE("ARM_3_DRIVE_PHONE_SIMEON");
		}
		__LIB_5__::func_674(&iLocal_137);
		__LIB_5__::func_674(&iLocal_135);
		HUD::CLEAR_PRINTS();
		__LIB_10__::func_7(&iLocal_150);
		__LIB_0__::func_202(&uLocal_288, 8);
		iLocal_236++;
	}
}

void func_690()//Position - 0x87D24
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	if (func_275())
	{
		func_210(PLAYER::PLAYER_ID(), 0, 0);
		iLocal_85 = 0;
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_141))
		{
			STREAMING::REQUEST_MODEL(joaat("premier"));
			while (!STREAMING::HAS_MODEL_LOADED(joaat("premier")))
			{
				SYSTEM::WAIT(0);
			}
			__LIB_30__::func_733(&iLocal_141, joaat("premier"), Local_102, 178.9958f, -1, 0);
			VEHICLE::SET_VEHICLE_COLOURS(iLocal_141, 43, 43);
			VEHICLE::SET_VEHICLE_EXTRA(iLocal_141, 10, true);
			VEHICLE::SET_VEHICLE_EXTRA(iLocal_141, 11, true);
			VEHICLE::SET_VEHICLE_EXTRA(iLocal_141, 12, true);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iLocal_141, 43, 134);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_141, 10);
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_141, false);
			ENTITY::PLAY_ENTITY_ANIM(iLocal_141, "_leadout_action_simeon_car", sLocal_117, 1000f, false, true, false, 0f, 262144);
		}
		if (bLocal_92 == 0 && iLocal_97 == 0)
		{
			CUTSCENE::REQUEST_CUTSCENE("Armenian_3_int", 8);
		}
		if (func_120())
		{
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1f);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(500);
			}
		}
	}
	else
	{
		switch (iLocal_48)
		{
			case 0:
				if (bLocal_92 == 0 && iLocal_97 == 0)
				{
					if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
					{
						__LIB_20__::func_165("Franklin", func_820(1), 0, 2);
					}
				}
				if ((bLocal_92 == 1 || iLocal_97 == 1) || CUTSCENE::HAS_THIS_CUTSCENE_LOADED("Armenian_3_int"))
				{
					if (bLocal_92 == 0 && iLocal_97 == 0)
					{
						__LIB_7__::func_279(1, 1, 1, 0, 0, 0, 0);
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_135) && !PED::IS_PED_INJURED(iLocal_135))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_135, "Siemon", 0, __LIB_11__::func_149(18), 0);
						}
						else
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Siemon", 2, __LIB_11__::func_149(18), 0);
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_137) && !PED::IS_PED_INJURED(iLocal_137))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_137, "customer", 0, joaat("A_M_M_BevHills_02"), 0);
						}
						else
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "customer", 2, joaat("A_M_M_BevHills_02"), 0);
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_141) && !ENTITY::IS_ENTITY_DEAD(iLocal_141, false))
						{
							ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_141, -1000f, true);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_141, "Showroom_Car", 0, joaat("premier"), 0);
						}
						else
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Showroom_Car", 2, joaat("premier"), 0);
						}
						CUTSCENE::START_CUTSCENE(0);
						func_806(0);
						__LIB_32__::func_796(-36.443756f, -1114.313f, 24.939146f, -58.57041f, -1111.0518f, 37.435764f, 20f, -58.3923f, -1114.5612f, 25.4358f, 74.8206f, __LIB_9__::func_996(), 1, 1, 1, 0, 0);
						MISC::CLEAR_AREA(-48.88689f, -1111.567f, 25.43577f, 12f, true, false, false, false);
						PATHFIND::SET_ROADS_IN_ANGLED_AREA(-801.0658f, 187.03131f, 71.60547f, -797.86554f, 178.34364f, 74.83471f, 9f, false, false, true);
						CAM::STOP_GAMEPLAY_HINT(true);
						__LIB_37__::func_407();
						if (bLocal_89)
						{
							__LIB_32__::func_723(&uLocal_70, 0, 0, 2000, 1, 1, 0, 1);
							iLocal_90 = 1;
						}
						func_121(iLocal_143[0], 1);
						func_121(iLocal_143[1], 1);
						RECORDING::REPLAY_START_EVENT(4);
						if (CAM::IS_SCREEN_FADED_OUT())
						{
							CAM::DO_SCREEN_FADE_IN(500);
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_138) && !ENTITY::IS_ENTITY_DEAD(iLocal_138, false))
					{
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_138, 5f);
						PHYSICS::ACTIVATE_PHYSICS(iLocal_138);
					}
					func_14();
				}
				break;
			case 1:
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_135))
				{
					iVar0 = CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Siemon", 0);
					if (ENTITY::DOES_ENTITY_EXIST(iVar0))
					{
						iLocal_135 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_135, iLocal_196);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_135, true);
					}
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_137))
				{
					iVar1 = CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("customer", 0);
					if (ENTITY::DOES_ENTITY_EXIST(iVar1))
					{
						iLocal_137 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_137, iLocal_196);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_137, true);
					}
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_141))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_141))
					{
						iVar2 = CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Showroom_Car", 0);
						if (ENTITY::DOES_ENTITY_EXIST(iVar2))
						{
							iLocal_141 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar2);
							VEHICLE::SET_VEHICLE_COLOURS(iLocal_141, 43, 43);
							VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iLocal_141, 43, 134);
						}
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1f);
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Showroom_Car", 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_141) && !ENTITY::IS_ENTITY_DEAD(iLocal_141, false))
					{
						__LIB_11__::func_102(iLocal_141, Local_102, 178.9958f);
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_141, 10);
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_141, false);
						ENTITY::PLAY_ENTITY_ANIM(iLocal_141, "_leadout_action_simeon_car", sLocal_117, 1000f, false, true, false, 0f, 262144);
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Siemon", 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_135) && !ENTITY::IS_ENTITY_DEAD(iLocal_135, false))
					{
						__LIB_0__::func_203(&uLocal_288, 8, iLocal_135, "SIMEON", 0, 1);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_157);
						TASK::TASK_PLAY_ANIM_ADVANCED(0, sLocal_117, "_leadout_action_simeon", Local_102, Local_103, 1000f, -4f, -1, 790536, 0f, 2, 0);
						TASK::TASK_PLAY_ANIM_ADVANCED(0, sLocal_117, "_leadout_loop_simeon", Local_102, Local_103, 4f, -4f, -1, 798729, 0f, 2, 0);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_157);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_135, iLocal_157);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_157);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_135, false, false);
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("customer", 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_137) && !ENTITY::IS_ENTITY_DEAD(iLocal_137, false))
					{
						__LIB_0__::func_203(&uLocal_288, 7, iLocal_137, "MrKenneth", 0, 1);
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_141) && !ENTITY::IS_ENTITY_DEAD(iLocal_141, false))
						{
							Var3 = { Local_101 };
							Var4 = { Local_101 };
							iLocal_186 = PED::CREATE_SYNCHRONIZED_SCENE(Var3, Var4, 2);
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_186, iLocal_141, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_141, "seat_dside_f"));
							TASK::TASK_SYNCHRONIZED_SCENE(iLocal_137, iLocal_186, sLocal_117, "_leadout_action_customer", 1000f, -8f, 4, 0, 1000f, 0);
							PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_186, true);
						}
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_137, false, false);
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0))
				{
					PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 0f, true, false);
					PED::FORCE_PED_MOTION_STATE(func_820(1), joaat("MotionState_Walk"), true, 1, false);
				}
				if (bLocal_92 == 1 || CUTSCENE::HAS_CUTSCENE_FINISHED())
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_141))
					{
						STREAMING::REQUEST_MODEL(joaat("premier"));
						while (!STREAMING::HAS_MODEL_LOADED(joaat("premier")))
						{
							SYSTEM::WAIT(0);
						}
						__LIB_30__::func_733(&iLocal_141, joaat("premier"), Local_102, 178.9958f, -1, 0);
						VEHICLE::SET_VEHICLE_COLOURS(iLocal_141, 43, 43);
						VEHICLE::SET_VEHICLE_EXTRA(iLocal_141, 10, true);
						VEHICLE::SET_VEHICLE_EXTRA(iLocal_141, 11, true);
						VEHICLE::SET_VEHICLE_EXTRA(iLocal_141, 12, true);
						VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iLocal_141, 43, 134);
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_141, 10);
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_141, false);
						ENTITY::PLAY_ENTITY_ANIM(iLocal_141, "_leadout_action_simeon_car", sLocal_117, 1000f, false, true, false, 0f, 262144);
					}
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_135))
					{
						STREAMING::REQUEST_MODEL(__LIB_11__::func_149(18));
						while (!STREAMING::HAS_MODEL_LOADED(__LIB_11__::func_149(18)))
						{
							SYSTEM::WAIT(0);
						}
						while (!__LIB_20__::func_621(&iLocal_135, 18, -42.4751f, -1110.9316f, 25.4343f, 312.8127f, 1))
						{
							func_806(0);
						}
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_135, iLocal_196);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_135, true);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_11__::func_149(18));
						__LIB_0__::func_203(&uLocal_288, 8, iLocal_135, "SIMEON", 0, 1);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_157);
						TASK::TASK_PLAY_ANIM_ADVANCED(0, sLocal_117, "_leadout_action_simeon", Local_102, Local_103, 1000f, -4f, -1, 790536, 0f, 2, 0);
						TASK::TASK_PLAY_ANIM_ADVANCED(0, sLocal_117, "_leadout_loop_simeon", Local_102, Local_103, 4f, -4f, -1, 790537, 0f, 2, 0);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_157);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_135, iLocal_157);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_157);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_135, false, false);
					}
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_137))
					{
						STREAMING::REQUEST_MODEL(joaat("A_M_M_BevHills_02"));
						while (!STREAMING::HAS_MODEL_LOADED(joaat("A_M_M_BevHills_02")))
						{
							SYSTEM::WAIT(0);
						}
						__LIB_30__::func_215(&iLocal_137, joaat("A_M_M_BevHills_02"), -39.8746f, -1100.5786f, 25.4343f, 139.6499f, 1);
						PED::SET_PED_COMPONENT_VARIATION(iLocal_137, 0, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iLocal_137, 3, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iLocal_137, 4, 0, 0, 0);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_137, iLocal_196);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_137, true);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_M_M_BevHills_02"));
						__LIB_0__::func_203(&uLocal_288, 7, iLocal_137, "MrKenneth", 0, 1);
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_141) && !ENTITY::IS_ENTITY_DEAD(iLocal_141, false))
						{
							Var5 = { Local_101 };
							Var6 = { Local_101 };
							iLocal_186 = PED::CREATE_SYNCHRONIZED_SCENE(Var5, Var6, 2);
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_186, iLocal_141, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_141, "seat_dside_f"));
							TASK::TASK_SYNCHRONIZED_SCENE(iLocal_137, iLocal_186, sLocal_117, "_leadout_action_customer", 1000f, -8f, 4, 0, 1000f, 0);
							PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_186, true);
						}
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_137, false, false);
					}
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("premier"));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("bjxl"));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("tailgater"));
					__LIB_7__::func_279(0, 1, 1, 0, 0, 0, 0);
					func_8();
				}
				break;
		}
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 26 /*INPUT_LOOK_BEHIND*/, true);
	}
	if (func_7())
	{
		RECORDING::REPLAY_STOP_EVENT();
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(-801.0658f, 187.03131f, 71.60547f, -797.86554f, 178.34364f, 74.83471f, 9f, 1);
		CUTSCENE::REMOVE_CUTSCENE();
		while (CUTSCENE::HAS_CUTSCENE_LOADED())
		{
			func_806(0);
		}
		__LIB_7__::func_279(0, 1, 1, 0, 0, 0, 0);
		iLocal_236++;
	}
}

void func_691()//Position - 0x8860E
{
	if (func_275())
	{
		PED::ADD_SCENARIO_BLOCKING_AREA(__LIB_11__::func_156(163, 0) - Vector(15f, 25f, 25f), __LIB_11__::func_156(171, 0) + Vector(15f, 25f, 25f), false, true, true, true);
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(29.436941f, -1105.479f, -46.890217f) - Vector(5f, 20f, 20f), Vector(29.436941f, -1105.479f, -46.890217f) + Vector(5f, 20f, 20f), false, true);
		if (!CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			MISC::CLEAR_AREA(-46.890217f, -1105.479f, 29.436941f, 20f, true, false, false, false);
		}
		MISC::CLEAR_AREA(-47.07522f, -1114.4764f, 25.43581f, 7.5f, true, false, false, false);
		MISC::CLEAR_AREA(-40.14164f, -1113.7135f, 25.43738f, 5f, true, false, false, false);
		MISC::CLEAR_AREA(-57.75611f, -1112.7688f, 25.43581f, 10f, true, false, false, false);
		iLocal_95 = 0;
		iLocal_96 = 0;
		MISC::CLEAR_AREA(Local_111, 500f, true, false, false, false);
		PED::ADD_SCENARIO_BLOCKING_AREA(Vector(70.56245f, 166.21902f, -804.9835f) - Vector(15f, 35f, 50f), Vector(70.56245f, 166.21902f, -804.9835f) + Vector(15f, 35f, 50f), false, true, true, true);
		TASK::ADD_COVER_BLOCKING_AREA(Vector(77.24071f, 173.09564f, -807.3651f) - Vector(1.5f, 1f, 1f), Vector(77.24071f, 173.09564f, -807.3651f) + Vector(1.5f, 1f, 1f), true, true, true, true);
		TASK::ADD_COVER_BLOCKING_AREA(Vector(77.24074f, 174.24188f, -801.8395f) - Vector(1.5f, 2f, 1.5f), Vector(77.24074f, 174.24188f, -801.8395f) + Vector(1.5f, 2f, 1.5f), true, true, true, true);
		TASK::ADD_COVER_BLOCKING_AREA(Vector(73.34528f, 181.63358f, -797.6738f) - Vector(2f, 4f, 3.5f), Vector(73.34528f, 181.63358f, -797.6738f) + Vector(2f, 4f, 3.5f), true, true, true, true);
		TASK::ADD_COVER_BLOCKING_AREA(Vector(73.35547f, 184.00615f, -799.449f) - Vector(2f, 4.5f, 4.5f), Vector(73.35547f, 184.00615f, -799.449f) + Vector(2f, 4.5f, 4.5f), true, true, true, true);
		HUD::REQUEST_ADDITIONAL_TEXT("ARM3", 0);
		while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
		{
			SYSTEM::WAIT(0);
		}
		if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_173))
		{
			OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_173, joaat("v_ilev_mm_doorw"), -804.95f, 171.86f, 76.89f, true, true, false);
		}
		if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_174))
		{
			OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_174, joaat("v_ilev_mm_doorson"), -806.77f, 174.02f, 76.89f, true, true, false);
		}
		if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_175))
		{
			OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_175, joaat("v_ilev_mm_doordaughter"), -802.7f, 176.18f, 76.89f, true, true, false);
		}
		if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_176))
		{
			OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_176, joaat("v_ilev_mm_doorw"), -809.28f, 177.86f, 76.89f, true, true, false);
		}
		if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_177))
		{
			OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_177, joaat("v_ilev_mm_door"), -806.28f, 186.02f, 72.62f, true, true, false);
		}
		if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_178))
		{
			OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_178, joaat("v_ilev_fib_door1"), -31.72f, -1101.85f, 26.57f, true, true, false);
		}
		if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_179))
		{
			OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_179, joaat("v_ilev_fib_door1"), -33.81f, -1107.58f, 26.57f, true, true, false);
		}
		AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
		PED::ADD_RELATIONSHIP_GROUP("BUDDIES", &iLocal_196);
		PED::ADD_RELATIONSHIP_GROUP("ENEMIES", &iLocal_197);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_196, joaat("PLAYER"));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("PLAYER"), iLocal_196);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_196, iLocal_197);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_197, iLocal_196);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("PLAYER"), iLocal_197);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_197, joaat("PLAYER"));
		TASK::ASSISTED_MOVEMENT_REQUEST_ROUTE("Mansion_1");
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(29.436941f, -1105.479f, -46.890217f) - Vector(5f, 20f, 20f), Vector(29.436941f, -1105.479f, -46.890217f) + Vector(5f, 20f, 20f), false, true);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("bjxl"), true);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("patriot"), true);
		while (!func_779(1, 1))
		{
			SYSTEM::WAIT(0);
		}
		while (__LIB_20__::func_728() != 1)
		{
			SYSTEM::WAIT(0);
		}
		__LIB_0__::func_387(4, PLAYER::PLAYER_PED_ID(), 0);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Global_41748[4 /*31*/], 1, true, true);
		__LIB_0__::func_203(&uLocal_288, 3, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
		__LIB_0__::func_203(&uLocal_288, 8, 0, "SIMEON", 0, 1);
		if (iLocal_159 == 0)
		{
			iLocal_159 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Local_112, "v_carshowroom");
		}
		STREAMING::REQUEST_MODEL(joaat("tailgater"));
		STREAMING::REQUEST_MODEL(joaat("bjxl"));
		while (!STREAMING::HAS_MODEL_LOADED(joaat("tailgater")) || !STREAMING::HAS_MODEL_LOADED(joaat("bjxl")))
		{
			STREAMING::REQUEST_MODEL(joaat("tailgater"));
			STREAMING::REQUEST_MODEL(joaat("bjxl"));
			SYSTEM::WAIT(0);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_142[0]))
		{
			__LIB_30__::func_733(&(iLocal_142[0]), joaat("bjxl"), -36.6411f, -1102.1914f, 25.4223f, 154.2468f, -1, 0);
			INTERIOR::RETAIN_ENTITY_IN_INTERIOR(iLocal_142[0], iLocal_159);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_142[1]))
		{
			__LIB_30__::func_733(&(iLocal_142[1]), joaat("tailgater"), -41.7113f, -1100.0415f, 25.4223f, 138.7067f, -1, 0);
			INTERIOR::RETAIN_ENTITY_IN_INTERIOR(iLocal_142[1], iLocal_159);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_142[2]))
		{
			__LIB_30__::func_733(&(iLocal_142[2]), joaat("bjxl"), -46.3951f, -1097.7783f, 25.4223f, 108.3411f, -1, 0);
			INTERIOR::RETAIN_ENTITY_IN_INTERIOR(iLocal_142[2], iLocal_159);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_142[3]))
		{
			__LIB_30__::func_733(&(iLocal_142[3]), joaat("tailgater"), -50.0989f, -1094.534f, 25.4223f, 88.9621f, -1, 0);
			INTERIOR::RETAIN_ENTITY_IN_INTERIOR(iLocal_142[3], iLocal_159);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_142[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_142[0], false))
		{
			VEHICLE::SET_VEHICLE_COLOURS(iLocal_142[0], 39, 39);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iLocal_142[0], 29, 134);
			VEHICLE::SET_VEHICLE_EXTRA(iLocal_142[0], 10, true);
			VEHICLE::SET_VEHICLE_EXTRA(iLocal_142[0], 11, true);
			VEHICLE::SET_VEHICLE_EXTRA(iLocal_142[0], 12, true);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_142[0], 10);
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_142[0], false);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_142[1]) && !ENTITY::IS_ENTITY_DEAD(iLocal_142[1], false))
		{
			VEHICLE::SET_VEHICLE_COLOURS(iLocal_142[1], 68, 68);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iLocal_142[1], 68, 134);
			VEHICLE::SET_VEHICLE_EXTRA(iLocal_142[1], 1, true);
			VEHICLE::SET_VEHICLE_EXTRA(iLocal_142[1], 2, true);
			VEHICLE::SET_VEHICLE_EXTRA(iLocal_142[1], 3, true);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_142[1], 10);
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_142[1], false);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_142[2]) && !ENTITY::IS_ENTITY_DEAD(iLocal_142[2], false))
		{
			VEHICLE::SET_VEHICLE_COLOURS(iLocal_142[2], 6, 3);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iLocal_142[2], 10, 134);
			VEHICLE::SET_VEHICLE_EXTRA(iLocal_142[2], 10, true);
			VEHICLE::SET_VEHICLE_EXTRA(iLocal_142[2], 11, true);
			VEHICLE::SET_VEHICLE_EXTRA(iLocal_142[2], 12, true);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_142[2], 10);
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_142[2], false);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_142[3]) && !ENTITY::IS_ENTITY_DEAD(iLocal_142[3], false))
		{
			VEHICLE::SET_VEHICLE_COLOURS(iLocal_142[3], 42, 42);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iLocal_142[3], 42, 134);
			VEHICLE::SET_VEHICLE_EXTRA(iLocal_142[3], 1, true);
			VEHICLE::SET_VEHICLE_EXTRA(iLocal_142[3], 2, true);
			VEHICLE::SET_VEHICLE_EXTRA(iLocal_142[3], 3, true);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_142[3], 10);
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_142[3], false);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_143[0]))
		{
			__LIB_30__::func_733(&(iLocal_143[0]), joaat("tailgater"), Vector(25.4364f, -1105.8546f, -57.1048f) + Vector(0f, -1.55f, 4.32f) * Vector(0f, 0f, 0f), 190.0401f, -1, 0);
			VEHICLE::SET_VEHICLE_EXTRA(iLocal_143[0], 1, true);
			VEHICLE::SET_VEHICLE_EXTRA(iLocal_143[0], 2, true);
			VEHICLE::SET_VEHICLE_EXTRA(iLocal_143[0], 3, true);
			if (!__LIB_0__::func_294())
			{
				func_121(iLocal_143[0], 0);
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_143[1]))
		{
			__LIB_30__::func_733(&(iLocal_143[1]), joaat("tailgater"), Vector(25.4364f, -1105.8546f, -57.1048f) + Vector(0f, -1.55f, 4.32f) * Vector(1f, 1f, 1f), 190.0401f, -1, 0);
			VEHICLE::SET_VEHICLE_EXTRA(iLocal_143[1], 1, true);
			VEHICLE::SET_VEHICLE_EXTRA(iLocal_143[1], 2, true);
			VEHICLE::SET_VEHICLE_EXTRA(iLocal_143[1], 3, true);
			if (!__LIB_0__::func_294())
			{
				func_121(iLocal_143[1], 0);
			}
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("tailgater"));
		if (func_120())
		{
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1f);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(500);
			}
		}
	}
	else
	{
		func_8();
	}
	if (func_7())
	{
		iLocal_236++;
		if (__LIB_0__::func_294())
		{
			if (Global_94618 == 1)
			{
				func_692(__LIB_0__::func_315() + 1);
			}
			else
			{
				func_692(__LIB_0__::func_315());
			}
		}
		else
		{
			Global_96877 = 0;
		}
	}
}

void func_692(int iParam0)//Position - 0x88EE6
{
	struct<3> Var0;
	float fVar1;
	switch (iParam0)
	{
		case 0:
			Var0 = { Local_104 };
			fVar1 = 113.3946f;
			break;
		case 1:
			Var0 = { -851.866f, 178.7462f, 68.6477f };
			fVar1 = 262.7337f;
			break;
		case 2:
			Var0 = { -802.6609f, 168.6319f, 75.7407f };
			fVar1 = 31.0258f;
			break;
		case 3:
			Var0 = { Local_110 };
			fVar1 = 111.6656f;
			break;
		case 4:
			Var0 = { -72.6144f, -1106.4908f, 25.0423f };
			fVar1 = 299.8838f;
			break;
		case 5:
			Var0 = { -58.1243f, -1095.0555f, 25.4345f };
			fVar1 = 314.025f;
			break;
		case 6:
			Var0 = { -63.8593f, -1092.5178f, 25.5585f };
			fVar1 = 71.5067f;
			break;
	}
	__LIB_0__::func_370(Var0, fVar1, 0, 0);
	__LIB_6__::func_775(0, -1, 0);
	switch (iParam0)
	{
		case 0:
			func_118(PLAYER::PLAYER_PED_ID(), Local_104, 113.3946f, 1);
			__LIB_40__::func_998(&iLocal_138, -58.3923f, -1114.5612f, 25.4358f, 74.8206f, 0, 0, 0, 0, 0, joaat("asterope"), 0, 145, 1);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_138))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_138, true, true);
			}
			iLocal_236 = 2;
			break;
		case 1:
			func_118(PLAYER::PLAYER_PED_ID(), -851.866f, 178.7462f, 68.6477f, 262.7337f, 1);
			__LIB_40__::func_998(&iLocal_138, -855.576f, 172.7193f, 67.1646f, 352.4847f, 0, 0, 0, 0, 1, joaat("asterope"), 0, 145, 1);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_138))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_138, true, true);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_138) && !ENTITY::IS_ENTITY_DEAD(iLocal_138, false))
			{
				__LIB_11__::func_102(iLocal_138, -855.576f, 172.7193f, 67.1646f, 352.4847f);
				VEHICLE::SET_VEHICLE_FIXED(iLocal_138);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_138, 5f);
				VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_138, true);
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_138, true, true);
				ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_138, true);
			}
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
			iLocal_236 = 3;
			break;
		case 2:
			__LIB_40__::func_998(&iLocal_138, -855.576f, 172.7193f, 67.1646f, 352.4847f, 0, 0, 0, 0, 0, joaat("asterope"), 0, 145, 1);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_138))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_138, true, true);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_138) && !ENTITY::IS_ENTITY_DEAD(iLocal_138, false))
			{
				__LIB_11__::func_102(iLocal_138, -855.576f, 172.7193f, 67.1646f, 352.4847f);
				VEHICLE::SET_VEHICLE_FIXED(iLocal_138);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_138, 5f);
				VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_138, true);
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_138, true, true);
				ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_138, true);
			}
			STREAMING::REQUEST_MODEL(joaat("bjxl"));
			while (!STREAMING::HAS_MODEL_LOADED(joaat("bjxl")))
			{
				SYSTEM::WAIT(0);
			}
			__LIB_30__::func_733(&iLocal_140, joaat("bjxl"), Local_110, 111.6656f, 126, 0);
			func_627(iLocal_140);
			VEHICLE::SET_VEHICLE_EXTRA(iLocal_140, 5, false);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_140, Local_110, false, false, true);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("bjxl"));
			STREAMING::REQUEST_MODEL(joaat("bison3"));
			while (!STREAMING::HAS_MODEL_LOADED(joaat("bison3")))
			{
				SYSTEM::WAIT(0);
			}
			__LIB_30__::func_733(&iLocal_139, joaat("bison3"), -800.1796f, 164.9729f, 70.5296f, 111.0221f, 132, 0);
			ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_139, true);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_139, 2);
			VEHICLE::SET_VEHICLE_ALARM(iLocal_139, true);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("bison3"));
			BRAIN::REACTIVATE_NAMED_OBJECT_BRAINS_WAITING_TILL_OUT_OF_RANGE("ob_tv");
			iLocal_171 = OBJECT::GET_RAYFIRE_MAP_OBJECT(-809.962f, 170.919f, 75.7407f, 3f, "des_tvsmash");
			if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_171))
			{
				OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_171, 11);
			}
			iLocal_236 = 5;
			break;
		case 3:
			iLocal_158 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-812.1879f, 179.9663f, 71.1639f, "V_Michael");
			INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_158);
			__LIB_40__::func_998(&iLocal_138, -855.576f, 172.7193f, 67.1646f, 352.4847f, 0, 0, 0, 0, 0, joaat("asterope"), 0, 145, 1);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_138))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_138, true, true);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_138) && !ENTITY::IS_ENTITY_DEAD(iLocal_138, false))
			{
				__LIB_11__::func_102(iLocal_138, -855.576f, 172.7193f, 67.1646f, 352.4847f);
				VEHICLE::SET_VEHICLE_FIXED(iLocal_138);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_138, 5f);
				VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_138, true);
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_138, true, true);
				ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_138, true);
			}
			STREAMING::REQUEST_MODEL(joaat("bjxl"));
			while (!STREAMING::HAS_MODEL_LOADED(joaat("bjxl")))
			{
				SYSTEM::WAIT(0);
			}
			__LIB_30__::func_733(&iLocal_140, joaat("bjxl"), Local_110, 111.6656f, 126, 0);
			func_627(iLocal_140);
			VEHICLE::SET_VEHICLE_EXTRA(iLocal_140, 5, false);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_140, Local_110, false, false, true);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("bjxl"));
			__LIB_32__::func_762(1);
			iLocal_236 = 6;
			break;
		case 4:
			STREAMING::REQUEST_MODEL(joaat("bjxl"));
			STREAMING::REQUEST_MODEL(__LIB_19__::func_811(0));
			while (!STREAMING::HAS_MODEL_LOADED(joaat("bjxl")) || !STREAMING::HAS_MODEL_LOADED(__LIB_19__::func_811(0)))
			{
				SYSTEM::WAIT(0);
			}
			__LIB_30__::func_733(&iLocal_140, joaat("bjxl"), Local_110, 111.6656f, 126, 0);
			func_627(iLocal_140);
			VEHICLE::SET_VEHICLE_EXTRA(iLocal_140, 5, true);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("bjxl"));
			__LIB_5__::func_674(&(uLocal_248[0]));
			func_375(&(uLocal_248[0]), 0, Local_105, 26.8488f, 0);
			func_341(uLocal_248[0], 12, 25, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_19__::func_811(0));
			WEAPON::SET_CURRENT_PED_WEAPON(uLocal_248[0], joaat("WEAPON_UNARMED"), true);
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_166))
			{
				iLocal_166 = OBJECT::CREATE_OBJECT(WEAPON::GET_WEAPONTYPE_MODEL(joaat("WEAPON_PISTOL")), Local_105, true, true, false);
			}
			ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_166, uLocal_248[0], PED::GET_PED_BONE_INDEX(uLocal_248[0], 28422), Local_101, Local_101, false, false, false, false, 2, true, 0);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_248[0], iLocal_196);
			PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(uLocal_248[0], false);
			__LIB_0__::func_203(&uLocal_288, 1, uLocal_248[0], "MICHAEL", 0, 1);
			func_842("ARM3_GUN", 1);
			func_842("ARM3_GUNA", 1);
			func_842("ARM3_GUNB", 1);
			__LIB_32__::func_762(1);
			if (Global_94618 == 1)
			{
				iLocal_236 = 8;
			}
			else
			{
				iLocal_236 = 9;
			}
			break;
		case 5:
			iLocal_159 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Local_112, "v_carshowroom");
			INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_159);
			while (!INTERIOR::IS_INTERIOR_READY(iLocal_159))
			{
				func_806(0);
			}
			iLocal_87 = 1;
			STREAMING::REQUEST_MODEL(joaat("bjxl"));
			STREAMING::REQUEST_MODEL(__LIB_19__::func_811(0));
			STREAMING::REQUEST_MODEL(__LIB_11__::func_149(18));
			while ((!STREAMING::HAS_MODEL_LOADED(joaat("bjxl")) || !STREAMING::HAS_MODEL_LOADED(__LIB_19__::func_811(0))) || !STREAMING::HAS_MODEL_LOADED(__LIB_11__::func_149(18)))
			{
				SYSTEM::WAIT(0);
			}
			__LIB_30__::func_733(&iLocal_140, joaat("bjxl"), Local_110, 111.6656f, 126, 0);
			func_627(iLocal_140);
			VEHICLE::SET_VEHICLE_EXTRA(iLocal_140, 5, true);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("bjxl"));
			__LIB_5__::func_674(&(uLocal_248[0]));
			func_375(&(uLocal_248[0]), 0, Local_105, 26.8488f, 0);
			func_341(uLocal_248[0], 12, 25, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_19__::func_811(0));
			WEAPON::SET_CURRENT_PED_WEAPON(uLocal_248[0], joaat("WEAPON_UNARMED"), true);
			PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(uLocal_248[0], false);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_248[0], iLocal_196);
			__LIB_0__::func_203(&uLocal_288, 1, uLocal_248[0], "MICHAEL", 0, 1);
			while (!__LIB_20__::func_621(&iLocal_135, 18, -56.436f, -1098.8176f, 25.4345f, 31.149f, 1))
			{
				func_806(0);
			}
			PED::SET_PED_SUFFERS_CRITICAL_HITS(iLocal_135, false);
			ENTITY::SET_ENTITY_HEALTH(iLocal_135, 400, 0);
			PED::SET_PED_MAX_HEALTH(iLocal_135, 400);
			TASK::TASK_LOOK_AT_ENTITY(iLocal_135, iLocal_140, 3000, 0, 2);
			ENTITY::SET_ENTITY_INVINCIBLE(iLocal_135, true);
			func_121(iLocal_135, 0);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_11__::func_149(18));
			__LIB_0__::func_203(&uLocal_288, 8, iLocal_135, "SIMEON", 0, 1);
			func_842("ARM3_GUN", 1);
			func_842("ARM3_GUNA", 1);
			func_842("ARM3_GUNB", 1);
			__LIB_32__::func_762(1);
			iLocal_236 = 11;
			break;
		case 6:
			iLocal_159 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Local_112, "v_carshowroom");
			INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_159);
			while (!INTERIOR::IS_INTERIOR_READY(iLocal_159))
			{
				func_806(0);
			}
			iLocal_87 = 1;
			STREAMING::REQUEST_MODEL(joaat("bjxl"));
			STREAMING::REQUEST_MODEL(__LIB_19__::func_811(0));
			STREAMING::REQUEST_MODEL(__LIB_11__::func_149(18));
			while ((!STREAMING::HAS_MODEL_LOADED(joaat("bjxl")) || !STREAMING::HAS_MODEL_LOADED(__LIB_19__::func_811(0))) || !STREAMING::HAS_MODEL_LOADED(__LIB_11__::func_149(18)))
			{
				SYSTEM::WAIT(0);
			}
			__LIB_30__::func_733(&iLocal_140, joaat("bjxl"), Local_110, 111.6656f, 126, 0);
			func_627(iLocal_140);
			VEHICLE::SET_VEHICLE_EXTRA(iLocal_140, 5, true);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("bjxl"));
			__LIB_5__::func_674(&(uLocal_248[0]));
			func_375(&(uLocal_248[0]), 0, Local_105, 26.8488f, 0);
			func_341(uLocal_248[0], 12, 25, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_19__::func_811(0));
			WEAPON::SET_CURRENT_PED_WEAPON(uLocal_248[0], joaat("WEAPON_UNARMED"), true);
			PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(uLocal_248[0], false);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_248[0], iLocal_196);
			__LIB_0__::func_203(&uLocal_288, 1, uLocal_248[0], "MICHAEL", 0, 1);
			while (!__LIB_20__::func_621(&iLocal_135, 18, -56.436f, -1098.8176f, 25.4345f, 31.149f, 1))
			{
				func_806(0);
			}
			PED::SET_PED_SUFFERS_CRITICAL_HITS(iLocal_135, false);
			ENTITY::SET_ENTITY_HEALTH(iLocal_135, 400, 0);
			PED::SET_PED_MAX_HEALTH(iLocal_135, 400);
			TASK::TASK_LOOK_AT_ENTITY(iLocal_135, iLocal_140, 3000, 0, 2);
			ENTITY::SET_ENTITY_INVINCIBLE(iLocal_135, true);
			func_121(iLocal_135, 0);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_11__::func_149(18));
			__LIB_0__::func_203(&uLocal_288, 8, iLocal_135, "SIMEON", 0, 1);
			func_842("ARM3_GUN", 1);
			func_842("ARM3_GUNA", 1);
			func_842("ARM3_GUNB", 1);
			__LIB_32__::func_762(1);
			iLocal_93 = 1;
			iLocal_236 = 11;
			break;
	}
	iLocal_91 = 1;
	bLocal_92 = true;
}

int func_779(int iParam0, bool bParam1)//Position - 0x8FFF0
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	Global_23011.f_13 = 0;
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	iVar0 = __LIB_0__::func_388(iParam0);
	iVar1 = __LIB_19__::func_811(iVar0);
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
		func_782(&(Global_22965[iParam0]), iVar0, iVar2, iVar3, bParam1, 0, 0);
	}
	else
	{
		Var4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		MISC::GET_GROUND_Z_FOR_3D_COORD(Var4, &(Var4.f_2), false, false);
		func_376(&(Global_22965[iParam0]), iVar0, Var4, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), bParam1, 0, 0);
	}
	Global_22965.f_7 = iParam0;
	Global_22965.f_39 = 1;
	__LIB_42__::func_146(&Global_22965, 0, 0, 0);
	__LIB_6__::func_846(iParam0);
	return 1;
}

int func_782(int* iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x901AF
{
	int iVar0;
	if (__LIB_0__::func_317(iParam1))
	{
		iVar0 = __LIB_19__::func_811(iParam1);
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
				__LIB_26__::func_464(*iParam0, iParam1, bParam5);
				PED::SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(*iParam0, false, 0);
				func_557(*iParam0);
				__LIB_32__::func_730(*iParam0, 1, 0);
				__LIB_20__::func_721(*iParam0);
				__LIB_20__::func_720(*iParam0);
				func_378(*iParam0, bParam6);
				__LIB_0__::func_349(*iParam0);
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

void func_784()//Position - 0x9029F
{
	if (iLocal_241 == 0 && (!AUDIO::IS_MUSIC_ONESHOT_PLAYING() || MISC::GET_GAME_TIMER() > iLocal_458))
	{
		switch (iLocal_240)
		{
			case 1:
				if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_457) || !MISC::ARE_STRINGS_EQUAL(sLocal_457, "ARM3_START"))
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_457))
					{
						AUDIO::CANCEL_MUSIC_EVENT(sLocal_457);
					}
					sLocal_457 = "ARM3_START";
				}
				else if (AUDIO::PREPARE_MUSIC_EVENT("ARM3_START"))
				{
					iLocal_240 = 0;
				}
				break;
			case 10:
				if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_457) || !MISC::ARE_STRINGS_EQUAL(sLocal_457, "ARM3_MIC"))
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_457))
					{
						AUDIO::CANCEL_MUSIC_EVENT(sLocal_457);
					}
					sLocal_457 = "ARM3_MIC";
				}
				else if (AUDIO::PREPARE_MUSIC_EVENT("ARM3_MIC"))
				{
					iLocal_240 = 0;
				}
				break;
			case 16:
				if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_457) || !MISC::ARE_STRINGS_EQUAL(sLocal_457, "ARM3_HIT"))
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_457))
					{
						AUDIO::CANCEL_MUSIC_EVENT(sLocal_457);
					}
					sLocal_457 = "ARM3_HIT";
				}
				else if (AUDIO::PREPARE_MUSIC_EVENT("ARM3_HIT"))
				{
					iLocal_240 = 0;
				}
				break;
			}
	}
	switch (iLocal_241)
	{
		case 1:
			if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_457) || !MISC::ARE_STRINGS_EQUAL(sLocal_457, "ARM3_START"))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_457))
				{
					AUDIO::CANCEL_MUSIC_EVENT(sLocal_457);
				}
				sLocal_457 = "ARM3_START";
			}
			else if (AUDIO::PREPARE_MUSIC_EVENT("ARM3_START"))
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT("ARM3_START"))
				{
					iLocal_458 = MISC::GET_GAME_TIMER() + 5000;
					iLocal_241 = 0;
				}
			}
			break;
		case 2:
			if (AUDIO::TRIGGER_MUSIC_EVENT("ARM3_RESTART_1"))
			{
				iLocal_241 = 0;
			}
			break;
		case 3:
			if (AUDIO::TRIGGER_MUSIC_EVENT("ARM3_WINDOW"))
			{
				iLocal_241 = 0;
			}
			break;
		case 4:
			if (AUDIO::TRIGGER_MUSIC_EVENT("ARM3_RESTART_2"))
			{
				iLocal_241 = 0;
			}
			break;
		case 5:
			if (AUDIO::TRIGGER_MUSIC_EVENT("ARM3_RESTART_3"))
			{
				iLocal_241 = 0;
			}
			break;
		case 6:
			if (AUDIO::TRIGGER_MUSIC_EVENT("ARM3_GARAGE_STOP"))
			{
				iLocal_241 = 0;
			}
			break;
		case 7:
			if (AUDIO::TRIGGER_MUSIC_EVENT("ARM3_CAR"))
			{
				iLocal_241 = 0;
			}
			break;
		case 8:
			if (AUDIO::TRIGGER_MUSIC_EVENT("ARM3_RESTART_4"))
			{
				iLocal_241 = 0;
			}
			break;
		case 9:
			if (AUDIO::TRIGGER_MUSIC_EVENT("ARM3_CALL"))
			{
				iLocal_241 = 0;
			}
			break;
		case 10:
			if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_457) || !MISC::ARE_STRINGS_EQUAL(sLocal_457, "ARM3_MIC"))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_457))
				{
					AUDIO::CANCEL_MUSIC_EVENT(sLocal_457);
				}
				sLocal_457 = "ARM3_MIC";
			}
			else if (AUDIO::PREPARE_MUSIC_EVENT("ARM3_MIC"))
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT("ARM3_MIC"))
				{
					iLocal_458 = MISC::GET_GAME_TIMER() + 5000;
					iLocal_241 = 0;
				}
			}
			break;
		case 11:
			if (AUDIO::TRIGGER_MUSIC_EVENT("ARM3_RESTART_5"))
			{
				iLocal_241 = 0;
			}
			break;
		case 12:
			if (AUDIO::TRIGGER_MUSIC_EVENT("ARM3_CS"))
			{
				iLocal_241 = 0;
			}
			break;
		case 13:
			if (AUDIO::TRIGGER_MUSIC_EVENT("ARM3_RESTART_6"))
			{
				iLocal_241 = 0;
			}
			break;
		case 14:
			if (AUDIO::TRIGGER_MUSIC_EVENT("ARM3_SPEED"))
			{
				iLocal_241 = 0;
			}
			break;
		case 15:
			if (AUDIO::TRIGGER_MUSIC_EVENT("ARM3_RESTART_7"))
			{
				iLocal_241 = 0;
			}
			break;
		case 16:
			if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_457) || !MISC::ARE_STRINGS_EQUAL(sLocal_457, "ARM3_HIT"))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_457))
				{
					AUDIO::CANCEL_MUSIC_EVENT(sLocal_457);
				}
				sLocal_457 = "ARM3_HIT";
			}
			else if (AUDIO::PREPARE_MUSIC_EVENT("ARM3_HIT"))
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT("ARM3_HIT"))
				{
					iLocal_458 = MISC::GET_GAME_TIMER() + 5000;
					iLocal_241 = 0;
				}
			}
			break;
		case 17:
			if (AUDIO::TRIGGER_MUSIC_EVENT("ARM3_HIT_STOP"))
			{
				iLocal_241 = 0;
			}
			break;
		case 18:
			if (AUDIO::TRIGGER_MUSIC_EVENT("ARM3_RESTART_8"))
			{
				iLocal_241 = 0;
			}
			break;
		case 19:
			if (AUDIO::TRIGGER_MUSIC_EVENT("ARM3_FAIL"))
			{
				iLocal_241 = 0;
			}
			break;
	}
}

void func_785()//Position - 0x9069A
{
	if (iLocal_236 == 3 || (iLocal_236 >= 4 && iLocal_236 <= 5))
	{
		func_845(__LIB_11__::func_149(14));
	}
	if (iLocal_236 == 3 || (iLocal_236 >= 4 && iLocal_236 <= 5))
	{
		func_845(__LIB_11__::func_149(15));
	}
	if (iLocal_236 >= 4 && iLocal_236 <= 5)
	{
		func_845(__LIB_11__::func_149(17));
	}
	if (iLocal_236 >= 4 && iLocal_236 <= 5)
	{
		func_845(__LIB_11__::func_149(25));
	}
	if ((iLocal_236 == 2 && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_111, true) < 200f) || (iLocal_236 >= 3 && iLocal_236 <= 11))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_140))
		{
			func_845(joaat("bjxl"));
		}
	}
	if (iLocal_236 == 5 || iLocal_236 == 6)
	{
		func_845(__LIB_19__::func_811(0));
	}
	if (iLocal_236 >= 8 && iLocal_236 <= 9)
	{
		func_845(joaat("prop_showroom_glass_1b"));
	}
	if (iLocal_236 >= 9 && iLocal_236 <= 10)
	{
		func_845(__LIB_11__::func_149(18));
	}
	if (iLocal_236 >= 5 && iLocal_236 <= 10)
	{
		func_845(WEAPON::GET_WEAPONTYPE_MODEL(joaat("WEAPON_PISTOL")));
	}
	if ((iLocal_236 == 2 && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_111, true) < 200f) || (iLocal_236 >= 3 && iLocal_236 <= 9))
	{
		func_815(sLocal_115);
	}
	else
	{
		func_786(sLocal_115);
	}
	if (iLocal_236 >= 3 && iLocal_236 <= 5)
	{
		func_815(sLocal_116);
	}
	else
	{
		func_786(sLocal_116);
	}
	if (iLocal_236 >= 3 && iLocal_236 <= 4)
	{
		func_815(sLocal_118);
	}
	else
	{
		func_786(sLocal_118);
	}
	if (!iLocal_236 == 3)
	{
		func_786(sLocal_122);
	}
	if (iLocal_236 >= 10 && iLocal_236 <= 11)
	{
		func_815(sLocal_119);
	}
	else
	{
		func_786(sLocal_119);
	}
	if (iLocal_236 >= 9 && iLocal_236 <= 10)
	{
		func_815(sLocal_123);
	}
	else
	{
		func_786(sLocal_123);
	}
	if ((iLocal_236 == 5 || iLocal_236 == 6) || iLocal_236 == 7)
	{
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK("ARM_3_01", false, -1);
	}
	if (iLocal_236 == 9 || iLocal_236 == 10)
	{
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK("ARM_3_02_CAR_CRASH", false, -1);
	}
}

void func_786(char* sParam0)//Position - 0x90927
{
	if (func_788(sParam0))
	{
		STREAMING::REMOVE_ANIM_DICT(sParam0);
		func_787(sParam0, 0);
	}
}

void func_787(char* sParam0, bool bParam1)//Position - 0x90945
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	iVar1 = iLocal_247;
	iVar2 = 0;
	bVar3 = false;
	while (iVar2 < iVar1 && !bVar3)
	{
		if (bParam1)
		{
			if (iLocal_247[iVar2] == 0)
			{
				iLocal_247[iVar2] = iVar0;
				bVar3 = true;
			}
		}
		else if (iLocal_247[iVar2] == iVar0)
		{
			iLocal_247[iVar2] = 0;
			bVar3 = true;
		}
		iVar2++;
	}
}

int func_788(char* sParam0)//Position - 0x909AF
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	iVar1 = iLocal_247;
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		if (iLocal_247[iVar2] == iVar0)
		{
			return 1;
		}
		iVar2++;
	}
	return 0;
}

int func_805()//Position - 0x90E48
{
	if (bLocal_453)
	{
		return 1;
	}
	return 0;
}

void func_806(int iParam0)//Position - 0x90E5B
{
	int iVar0;
	iVar0 = (MISC::GET_GAME_TIMER() + iParam0);
	while (MISC::GET_GAME_TIMER() <= iVar0)
	{
		SYSTEM::WAIT(0);
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("M_Complications", 0);
		func_851();
	}
}

void func_807(char* sParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x90E8A
{
	if (!func_848(sParam0))
	{
		while (!__LIB_35__::func_984(&uLocal_288, cLocal_242, sParam0, iParam1, iParam3, 0, 0))
		{
			if (__LIB_0__::func_75())
			{
				__LIB_6__::func_771();
			}
			func_806(0);
		}
		func_842(sParam0, bParam2);
	}
}

int func_815(char* sParam0)//Position - 0x91083
{
	if (!func_788(sParam0))
	{
		STREAMING::REQUEST_ANIM_DICT(sParam0);
		if (STREAMING::HAS_ANIM_DICT_LOADED(sParam0))
		{
			func_787(sParam0, 1);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_820(int iParam0)//Position - 0x911DB
{
	if (__LIB_20__::func_728() == iParam0)
	{
		return PLAYER::PLAYER_PED_ID();
	}
	return uLocal_248[__LIB_0__::func_504(iParam0)];
}

void func_821()//Position - 0x91201
{
	HUD::CLEAR_PRINTS();
	__LIB_30__::func_214(1);
	func_115(19);
	switch (iLocal_237)
	{
		case 0:
			__LIB_0__::func_324("ARM3_FAIL");
			break;
		case 1:
			__LIB_0__::func_324("ARM3_FAIL");
			break;
		case 2:
			if (iLocal_236 < 7)
			{
				__LIB_0__::func_324("ARM3_BLOWN");
			}
			else
			{
				__LIB_0__::func_324("CMN_MDIED" /* GXT: ~s~Michael died. */);
			}
			break;
		case 3:
			__LIB_0__::func_324("CMN_FDIED" /* GXT: ~s~Franklin died. */);
			break;
		case 4:
			__LIB_0__::func_324("ARM3_BLOWN");
			break;
		case 5:
			__LIB_0__::func_324("ARM3_FNOISE");
			break;
		case 6:
			__LIB_0__::func_324("ARM3_BLOWN");
			break;
		case 7:
			__LIB_0__::func_324("ARM3_FNOISE");
			break;
		case 8:
			__LIB_0__::func_324("ARM3_BLOWN");
			break;
		case 9:
			__LIB_0__::func_324("ARM3_BLOWN");
			break;
		case 10:
			__LIB_0__::func_324("ARM3_BLOWN");
			break;
		case 13:
			__LIB_0__::func_324("ARM3_FNOISE");
			break;
		case 14:
			__LIB_0__::func_324("ARM3_FNOISE2");
			break;
		case 15:
			__LIB_0__::func_324("ARM3_FNOISE3");
			break;
		case 16:
			__LIB_0__::func_324("ARM3_BLOWN");
			break;
		case 17:
			__LIB_0__::func_324("ARM3_FNOISE");
			break;
		case 18:
			__LIB_0__::func_324("ARM3_IGNORE");
			break;
		case 19:
			__LIB_0__::func_324("ARM3_FLED");
			break;
		case 20:
			__LIB_0__::func_324("CMN_GENDEST" /* GXT: ~s~The car was destroyed. */);
			break;
		case 21:
			__LIB_0__::func_324("ARM3_FEXP");
			break;
		case 22:
			if (iLocal_236 < 7)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -74.61548f, -1102.6023f, 24.006918f, -28.391909f, -1119.1436f, 41.558163f, 50f, false, true, 0))
				{
					__LIB_0__::func_324("ARM3_FDISRUPT");
				}
				else
				{
					__LIB_0__::func_324("ARM3_FCOPSALERT");
				}
			}
			else if (iLocal_236 < 11)
			{
				__LIB_0__::func_324("ARM3_FCOPSALERT");
			}
			else
			{
				__LIB_0__::func_324("ARM3_FCOPSALERT");
			}
			break;
		case 11:
			__LIB_0__::func_324("ARM3_FSIMEON");
			break;
		case 12:
			__LIB_0__::func_324("ARM3_FDISRUPT");
			break;
	}
	if (!CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		func_580();
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_136) && PED::IS_PED_INJURED(iLocal_136))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_169) && ENTITY::IS_ENTITY_ATTACHED(iLocal_169))
		{
			ENTITY::DETACH_ENTITY(iLocal_169, true, false);
		}
	}
	func_826(0);
	while (!__LIB_0__::func_204())
	{
		SYSTEM::WAIT(0);
	}
	while (!CUTSCENE::HAS_CUTSCENE_FINISHED())
	{
		CUTSCENE::STOP_CUTSCENE(true);
		SYSTEM::WAIT(0);
	}
	CUTSCENE::REMOVE_CUTSCENE();
	while (CUTSCENE::HAS_CUTSCENE_LOADED())
	{
		SYSTEM::WAIT(0);
	}
	func_911();
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -23.302967f, -1107.5415f, 24.672077f, -61.43049f, -1093.5531f, 35.486015f, 40f, false, true, 0))
	{
		__LIB_0__::func_428(-63.1009f, -1092.9005f, 25.5257f, 71.4989f);
		__LIB_20__::func_165(-70.5736f, -1088.5961f, 25.5754f, 340.4931f);
	}
	else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -807.415f, 135.21881f, 57.205853f, -807.6046f, 199.88086f, 94.7416f, 90f, false, true, 0))
	{
		__LIB_0__::func_428(-853.5109f, 179.5495f, 68.8114f, 173.1056f);
		__LIB_20__::func_165(-855.8997f, 172.389f, 66.9269f, 355.198f);
	}
	if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_235))
	{
		if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_235) != 10)
		{
			OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_235, 9);
		}
	}
	func_906(0);
}

void func_826(int iParam0)//Position - 0x91623
{
	int iVar0;
	if (Global_113386.f_9085 || __LIB_0__::func_2(0))
	{
		iVar0 = __LIB_0__::func_323();
		if (!func_827(iVar0))
		{
			return;
		}
		MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 5);
		Global_100477 = iParam0;
	}
}

int func_827(int iParam0)//Position - 0x91668
{
	int iVar0;
	int iVar1;
	__LIB_26__::func_546();
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::START_FIRING_AMNESTY(5000);
	}
	iVar0 = Global_91193[iParam0 /*5*/];
	iVar1 = Global_78588.f_109[iVar0 /*4*/];
	__LIB_0__::func_322(iVar1, 1);
	PLAYER::SPECIAL_ABILITY_CHARGE_ON_MISSION_FAILED(PLAYER::PLAYER_ID(), 0);
	PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
	func_828(&(Global_113386.f_2363.f_539), iVar1);
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

void func_828(var uParam0, int iParam1)//Position - 0x91778
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
			if (!func_830(Global_113386.f_18533[iVar0], &Var2, &fVar3))
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

int func_830(int iParam0, var uParam1, float fParam2)//Position - 0x9194C
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
			return func_830(8, uParam1, fParam2);
			break;
		case 10:
			return func_830(8, uParam1, fParam2);
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

int func_834(int iParam0)//Position - 0x9242E
{
	int iVar0;
	int iVar1;
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, true);
	iVar1 = WEAPON::GET_WEAPONTYPE_GROUP(iVar0);
	if (((((((iVar1 == joaat("GROUP_PISTOL") || iVar1 == joaat("GROUP_SMG")) || iVar1 == joaat("GROUP_RIFLE")) || iVar1 == joaat("GROUP_MG")) || iVar1 == joaat("GROUP_SHOTGUN")) || iVar1 == joaat("GROUP_SNIPER")) || iVar1 == joaat("GROUP_HEAVY")) || iVar1 == joaat("GROUP_RUBBERGUN"))
	{
		return 1;
	}
	return 0;
}

int func_841(int iParam0, int iParam1, struct<3> Param2, bool bParam3, float fParam4, float fParam5, float fParam6, bool bParam7)//Position - 0x99510
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	switch (iParam0)
	{
		case 0:
			iVar1 = iLocal_173;
			break;
		case 1:
			iVar1 = iLocal_174;
			break;
		case 2:
			iVar1 = iLocal_175;
			break;
		case 3:
			iVar1 = iLocal_176;
			break;
		case 4:
			iVar1 = iLocal_177;
			break;
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iVar1))
	{
		iVar2 = OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iVar1);
		fVar3 = OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iVar1);
		fVar3 = fVar3;
		iVar2 = iVar2;
		iParam1 = iParam1;
		OBJECT::DOOR_SYSTEM_SET_SPRING_REMOVED(iVar1, bParam7, true, false);
		if (fVar0 <= (fParam6 + -fParam5) || fVar0 >= (fParam6 + fParam5))
		{
			if (fVar0 > fParam6)
			{
				fVar0 = (fVar0 - fParam4);
			}
			else if (fVar0 < fParam6)
			{
				fVar0 = (fVar0 + fParam4);
			}
			OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iVar1, fVar0, false, false);
			MISC::CLEAR_AREA_OF_OBJECTS(Param2, 2f, 0);
			if (bParam3)
			{
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iVar1, 1, false, true);
			}
			else
			{
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iVar1, 0, false, true);
			}
			return 0;
		}
		else
		{
			fVar0 = fParam6;
			OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iVar1, fVar0, false, false);
			if (bParam3)
			{
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iVar1, 1, false, true);
			}
			else
			{
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iVar1, 0, false, true);
			}
			return 1;
		}
	}
	return 0;
}

void func_842(char* sParam0, bool bParam1)//Position - 0x9962F
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	if (bParam1)
	{
		if (!func_848(sParam0))
		{
			iVar1 = iLocal_243;
			if (iLocal_244 < iVar1)
			{
				iLocal_243[iLocal_244] = iVar0;
				iLocal_244++;
			}
		}
	}
	else
	{
		iVar2 = func_844(iVar0);
		if (iVar2 != -1)
		{
			iLocal_243[iVar2] = 0;
			func_843();
			iLocal_244 = (iLocal_244 - 1);
		}
	}
}

void func_843()//Position - 0x99692
{
	int iVar0;
	int iVar1;
	iVar0 = iLocal_243;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < (iVar0 - 1))
	{
		if (iLocal_243[iVar1] == 0)
		{
			if (iLocal_243[iVar1 + 1] != 0)
			{
				iLocal_243[iVar1] = iLocal_243[iVar1 + 1];
				iLocal_243[iVar1 + 1] = 0;
			}
		}
		iVar1++;
	}
}

int func_844(int iParam0)//Position - 0x996E9
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_244)
	{
		if (iLocal_243[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_845(int iParam0)//Position - 0x9971A
{
	if (!func_847(iParam0))
	{
		STREAMING::REQUEST_MODEL(iParam0);
		if (STREAMING::HAS_MODEL_LOADED(iParam0))
		{
			func_846(iParam0, 1);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_846(int iParam0, bool bParam1)//Position - 0x9974A
{
	int iVar0;
	int iVar1;
	bool bVar2;
	iVar0 = iParam0;
	iVar1 = 0;
	bVar2 = false;
	while (iVar1 < iLocal_245 && !bVar2)
	{
		if (bParam1)
		{
			if (iLocal_245[iVar1] == 0)
			{
				iLocal_245[iVar1] = iVar0;
				bVar2 = true;
			}
		}
		else if (iLocal_245[iVar1] == iVar0)
		{
			iLocal_245[iVar1] = 0;
			bVar2 = true;
		}
		iVar1++;
	}
}

int func_847(var uParam0)//Position - 0x997AC
{
	int iVar0;
	int iVar1;
	iVar0 = uParam0;
	iVar1 = 0;
	while (iVar1 < iLocal_245)
	{
		if (iLocal_245[iVar1] == iVar0)
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_848(char* sParam0)//Position - 0x997DD
{
	int iVar0;
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	if (func_844(iVar0) != -1)
	{
		return 1;
	}
	return 0;
}

void func_849()//Position - 0x997FC
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	int iVar4;
	int iVar5;
	if (((ENTITY::DOES_ENTITY_EXIST(iLocal_131) || ENTITY::DOES_ENTITY_EXIST(iLocal_132)) || ENTITY::DOES_ENTITY_EXIST(iLocal_133)) || ENTITY::DOES_ENTITY_EXIST(iLocal_134))
	{
		if (!CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -803.1275f, 167.65747f, 75.74072f, -807.44434f, 178.84273f, 78.99088f, 3.25f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -806.7242f, 167.14174f, 75.74088f, -809.21857f, 173.50833f, 79.24088f, 5f, false, true, 0))
			{
				if (iLocal_238 != 1)
				{
					if (CUTSCENE::HAS_CUTSCENE_LOADED() && !CUTSCENE::HAS_THIS_CUTSCENE_LOADED("Armenian_3_mcs_3"))
					{
						CUTSCENE::REMOVE_CUTSCENE();
					}
					else
					{
						CUTSCENE::REQUEST_CUTSCENE("Armenian_3_mcs_3", 8);
						if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
						{
							__LIB_20__::func_165("Franklin", func_820(1), 0, 2);
							CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Jimmy", iLocal_131, 0);
							CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Jimmy", 1, 1, 0, 0);
						}
						if (CUTSCENE::HAS_THIS_CUTSCENE_LOADED("Armenian_3_mcs_3"))
						{
							iLocal_238 = 1;
						}
					}
				}
			}
		}
		if (iLocal_238 == 1)
		{
			if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -806.7242f, 167.14174f, 75.74088f, -809.21857f, 173.50833f, 79.24088f, 5f, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -806.7697f, 174.02098f, 75.74074f, -806.3124f, 172.81013f, 78.24074f, 0.75f, false, true, 0)) || iLocal_239[1])
			{
				iLocal_239[1] = 1;
				if (__LIB_10__::func_0("Armenian_3_mcs_3"))
				{
					__LIB_37__::func_407();
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_131, "Jimmy", 0, 0, 0);
					__LIB_7__::func_279(1, 1, 1, 0, 0, 0, 0);
					__LIB_6__::func_849(1);
					CUTSCENE::SET_CUTSCENE_FADE_VALUES(false, false, true, false);
					CUTSCENE::START_CUTSCENE(0);
					func_806(0);
					CUTSCENE::SET_CUTSCENE_CAN_BE_SKIPPED(false);
					MISC::CLEAR_AREA(-808.4632f, 171.2454f, 75.7504f, 50f, true, false, false, false);
					__LIB_11__::func_108(&iLocal_164);
					__LIB_11__::func_108(&iLocal_165);
					while (!CUTSCENE::HAS_CUTSCENE_FINISHED())
					{
						if (CUTSCENE::GET_CUTSCENE_TIME() >= 900)
						{
							__LIB_7__::func_279(0, 1, 1, 0, 0, 0, 0);
							iLocal_237 = 5;
							func_821();
						}
						func_806(0);
					}
					__LIB_7__::func_279(0, 1, 1, 0, 0, 0, 0);
					iLocal_237 = 5;
					func_821();
				}
			}
		}
		if (!CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -802.1136f, 176.5611f, 73.9906f, -805.7435f, 185.8805f, 79.0034f, 5f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -799.6448f, 169.06088f, 75.74088f, -802.534f, 176.08485f, 79.24088f, 4f, false, true, 0))
			{
				if (iLocal_238 != 2)
				{
					if (CUTSCENE::HAS_CUTSCENE_LOADED() && !CUTSCENE::HAS_THIS_CUTSCENE_LOADED("Armenian_3_mcs_4"))
					{
						CUTSCENE::REMOVE_CUTSCENE();
					}
					else
					{
						CUTSCENE::REQUEST_CUTSCENE("Armenian_3_mcs_4", 8);
						if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
						{
							__LIB_20__::func_165("Franklin", func_820(1), 0, 2);
							CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Tracy", iLocal_132, 0);
						}
						if (CUTSCENE::HAS_THIS_CUTSCENE_LOADED("Armenian_3_mcs_4"))
						{
							iLocal_238 = 2;
						}
					}
				}
			}
		}
		if (iLocal_238 == 2)
		{
			if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -799.6448f, 169.06088f, 75.74088f, -802.534f, 176.08485f, 79.24088f, 4f, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -802.7047f, 176.17685f, 75.74074f, -803.912f, 175.71275f, 78.24074f, 0.75f, false, true, 0)) || iLocal_239[2])
			{
				iLocal_239[2] = 1;
				if (__LIB_10__::func_0("Armenian_3_mcs_4"))
				{
					__LIB_37__::func_407();
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_132, "Tracy", 0, 0, 0);
					__LIB_7__::func_279(1, 1, 1, 0, 0, 0, 0);
					__LIB_6__::func_849(1);
					CUTSCENE::SET_CUTSCENE_FADE_VALUES(false, false, true, false);
					CUTSCENE::START_CUTSCENE(0);
					func_806(0);
					CUTSCENE::SET_CUTSCENE_CAN_BE_SKIPPED(false);
					MISC::CLEAR_AREA(-801.2631f, 173.2075f, 75.7504f, 50f, true, false, false, false);
					__LIB_11__::func_108(&iLocal_168);
					while (!CUTSCENE::HAS_CUTSCENE_FINISHED())
					{
						if (CUTSCENE::GET_CUTSCENE_TIME() >= 4900)
						{
							__LIB_7__::func_279(0, 1, 1, 0, 0, 0, 0);
							iLocal_237 = 7;
							func_821();
						}
						func_806(0);
					}
					__LIB_7__::func_279(0, 1, 1, 0, 0, 0, 0);
					iLocal_237 = 7;
					func_821();
				}
			}
		}
		if (!CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -794.92755f, 184.10698f, 70.83471f, -815.3759f, 176.08621f, 74.15309f, 25f, false, true, 0))
			{
				if (iLocal_238 != 3)
				{
					if (CUTSCENE::HAS_CUTSCENE_LOADED() && !CUTSCENE::HAS_THIS_CUTSCENE_LOADED("Armenian_3_mcs_5"))
					{
						CUTSCENE::REMOVE_CUTSCENE();
					}
					else
					{
						CUTSCENE::REQUEST_CUTSCENE("Armenian_3_mcs_5", 8);
						if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
						{
							__LIB_20__::func_165("Franklin", func_820(1), 0, 2);
							CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Amanda", iLocal_133, 0);
							CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("TennisCoach", iLocal_134, 0);
						}
						if (CUTSCENE::HAS_THIS_CUTSCENE_LOADED("Armenian_3_mcs_5"))
						{
							iLocal_238 = 3;
						}
					}
				}
			}
		}
		if (iLocal_238 == 3)
		{
			if (((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -795.9236f, 177.49619f, 70.83471f, -799.761f, 187.48503f, 74.60547f, 5.5f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -800.22266f, 185.65544f, 71.60547f, -804.65466f, 184.05804f, 75.35743f, 2.75f, false, true, 0)) || func_848("CaughtWifeCoach")) || iLocal_239[3])
			{
				iLocal_239[3] = 1;
				if (__LIB_10__::func_0("Armenian_3_mcs_5"))
				{
					__LIB_37__::func_407();
					iLocal_237 = 13;
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_133, "Amanda", 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_134, "TennisCoach", 0, 0, 0);
					__LIB_7__::func_279(1, 1, 1, 0, 0, 0, 0);
					__LIB_6__::func_849(1);
					CUTSCENE::SET_CUTSCENE_FADE_VALUES(false, false, true, false);
					CUTSCENE::START_CUTSCENE(0);
					func_806(0);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_161))
					{
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_185))
						{
							ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_161, 0f, true);
						}
						ENTITY::DETACH_ENTITY(iLocal_161, false, true);
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_161, true);
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_161, -796.5159f, 183.8585f, 72.0977f, false, false, true);
						ENTITY::SET_ENTITY_ROTATION(iLocal_161, -17.1906f, -143.6059f, -99.3626f, 2, true);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_162))
					{
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_185))
						{
							ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_162, 0f, true);
						}
						ENTITY::DETACH_ENTITY(iLocal_162, false, true);
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_162, true);
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_162, -796.4891f, 183.8672f, 72.102f, false, false, true);
						ENTITY::SET_ENTITY_ROTATION(iLocal_162, -17.1865f, -146.0179f, -99.366f, 2, true);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_163))
					{
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_185))
						{
							ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_163, 0f, true);
						}
						ENTITY::DETACH_ENTITY(iLocal_163, false, true);
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_163, true);
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_163, -796.1265f, 184.2115f, 71.8298f, false, false, true);
						ENTITY::SET_ENTITY_ROTATION(iLocal_163, -10.7331f, 12.345f, -171.9909f, 2, true);
					}
					CUTSCENE::SET_CUTSCENE_CAN_BE_SKIPPED(false);
					MISC::CLEAR_AREA(-801.7021f, 183.1848f, 71.6055f, 50f, true, false, false, false);
					while (!CUTSCENE::HAS_CUTSCENE_FINISHED())
					{
						if (CUTSCENE::GET_CUTSCENE_TIME() >= 6400)
						{
							__LIB_7__::func_279(0, 1, 1, 0, 0, 0, 0);
							func_821();
						}
						func_806(0);
					}
					__LIB_7__::func_279(0, 1, 1, 0, 0, 0, 0);
					func_821();
				}
			}
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -815.67554f, 173.80232f, 70.683334f, -793.94244f, 182.04356f, 81.83512f, 30f, false, true, 0))
		{
			if ((((PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_PLANTING_BOMB(PLAYER::PLAYER_PED_ID())) && !WEAPON::IS_PED_CURRENT_WEAPON_SILENCED(PLAYER::PLAYER_PED_ID())) && func_834(PLAYER::PLAYER_PED_ID())) || (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_158 && __LIB_10__::func_9()))
			{
				func_806(200);
				__LIB_37__::func_407();
				Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				Var1 = { ENTITY::GET_ENTITY_COORDS(iLocal_131, true) };
				Var2 = { ENTITY::GET_ENTITY_COORDS(iLocal_132, true) };
				Var3 = { ENTITY::GET_ENTITY_COORDS(iLocal_133, true) };
				if (!PED::IS_PED_INJURED(iLocal_131))
				{
					func_581();
					if (func_815(sLocal_115))
					{
						iVar4 = PED::CREATE_SYNCHRONIZED_SCENE(-806.52f, 169.751f, 75.693f, 0f, 0f, -50f, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_131, iVar4, sLocal_115, "jimmy_playingvideogame_fail", 8f, -8f, 5, 0, 1000f, 0);
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_164, iVar4, "jimmy_playingvideogame_fail_controller", sLocal_115, 8f, -8f, 0, 1000f);
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_165, iVar4, "jimmy_playingvideogame_fail_headset", sLocal_115, 8f, -8f, 0, 1000f);
						PED::SET_SYNCHRONIZED_SCENE_PHASE(iVar4, 0.25f);
					}
					PED::SET_PED_KEEP_TASK(iLocal_131, true);
					if (Var0.f_2 > (Var1.f_2 - 2f) && Var0.f_2 < (Var1.f_2 + 2f))
					{
						if ((MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var1, true) < 10f && MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var1, true) < MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var2, true)) && MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var1, true) < MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var3, true))
						{
							__LIB_0__::func_203(&uLocal_288, 6, iLocal_131, "JIMMY", 0, 1);
							func_807("ARM3_JIMF", 7, 1, 0);
						}
					}
				}
				if (!PED::IS_PED_INJURED(iLocal_132))
				{
					if (func_815(sLocal_115))
					{
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_132, sLocal_116, "tracey_argument", 3))
						{
							TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_132, sLocal_115, "tracey_fail", -800.835f, 170.158f, 75.79f, 0f, 0f, -64f, 4f, -8f, -1, 9218, 0f, 2, 1);
						}
						else
						{
							TASK::TASK_REACT_AND_FLEE_PED(iLocal_132, PLAYER::PLAYER_PED_ID());
						}
					}
					PED::SET_PED_KEEP_TASK(iLocal_132, true);
					if (Var0.f_2 > (Var2.f_2 - 2f) && Var0.f_2 < (Var2.f_2 + 2f))
					{
						if ((MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var2, true) < 10f && MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var2, true) < MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var1, true)) && MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var2, true) < MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var3, true))
						{
							__LIB_0__::func_203(&uLocal_288, 5, iLocal_132, "TRACEY", 0, 1);
							func_807("ARM3_TRCF", 7, 1, 0);
						}
					}
				}
				if (!PED::IS_PED_INJURED(iLocal_133))
				{
					TASK::CLEAR_PED_TASKS(iLocal_133);
					TASK::TASK_REACT_AND_FLEE_PED(iLocal_133, PLAYER::PLAYER_PED_ID());
					PED::SET_PED_KEEP_TASK(iLocal_133, true);
				}
				if (!PED::IS_PED_INJURED(iLocal_134))
				{
					TASK::CLEAR_PED_TASKS(iLocal_134);
					TASK::TASK_REACT_AND_FLEE_PED(iLocal_134, PLAYER::PLAYER_PED_ID());
					PED::SET_PED_KEEP_TASK(iLocal_134, true);
				}
				if (!PED::IS_PED_INJURED(iLocal_133) && !PED::IS_PED_INJURED(iLocal_134))
				{
					if (Var0.f_2 > (Var3.f_2 - 2f) && Var0.f_2 < (Var3.f_2 + 2f))
					{
						if ((MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var3, true) < 10f && MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var3, true) < MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var1, true)) && MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var3, true) < MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var2, true))
						{
							func_807("ARM3_WIFF", 7, 1, 0);
						}
					}
				}
				func_580();
				func_806(2000);
				iLocal_237 = 16;
				func_821();
			}
		}
		if (iLocal_236 > 5 || (iLocal_236 == 5 && iLocal_48 > 0))
		{
			if (!CUTSCENE::IS_CUTSCENE_PLAYING() && CAM::IS_SCREEN_FADED_IN())
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -815.67554f, 173.80232f, 70.683334f, -793.94244f, 182.04356f, 81.83512f, 30f, false, true, 0) && !ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -802.75977f, 168.73921f, 77.2407f, 0.5f, 0.5f, 1.5f, false, true, 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_131))
					{
						if (((((PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), iLocal_131) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_JUMPING(PLAYER::PLAYER_PED_ID())) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -807.62866f, 170.72191f, 75.27358f, -804.66406f, 176.91496f, 78.24829f, 1.5f, false, true, 0)) || MISC::IS_BULLET_IN_ANGLED_AREA(-808.9304f, 173.65538f, 74.24014f, -806.4302f, 166.97472f, 79.24074f, 4.25f, true)) || MISC::IS_PROJECTILE_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_131, true) - Vector(1.5f, 2f, 2f), ENTITY::GET_ENTITY_COORDS(iLocal_131, true) + Vector(1.5f, 2f, 2f), true))
						{
							func_581();
							if (func_815(sLocal_115))
							{
								iVar5 = PED::CREATE_SYNCHRONIZED_SCENE(-806.52f, 169.751f, 75.693f, 0f, 0f, -50f, 2);
								TASK::TASK_SYNCHRONIZED_SCENE(iLocal_131, iVar5, sLocal_115, "jimmy_playingvideogame_fail", 8f, -8f, 5, 0, 1000f, 0);
								ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_164, iVar5, "jimmy_playingvideogame_fail_controller", sLocal_115, 8f, -8f, 0, 1000f);
								ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_165, iVar5, "jimmy_playingvideogame_fail_headset", sLocal_115, 8f, -8f, 0, 1000f);
								PED::SET_SYNCHRONIZED_SCENE_PHASE(iVar5, 0.25f);
							}
							PED::SET_PED_KEEP_TASK(iLocal_131, true);
							__LIB_0__::func_203(&uLocal_288, 6, iLocal_131, "JIMMY", 0, 1);
							func_807("ARM3_JIMF", 7, 1, 0);
							func_806(2800);
							iLocal_237 = 17;
							func_821();
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_132) && !PED::IS_PED_INJURED(iLocal_132))
					{
						if (((((PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), iLocal_132) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_JUMPING(PLAYER::PLAYER_PED_ID())) && (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -802.033f, 172.51349f, 75.74074f, -806.9184f, 185.42491f, 78.504135f, 2f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -803.71423f, 176.14018f, 75.74074f, -806.80475f, 179.29726f, 79.2408f, 3f, false, true, 0))) || MISC::IS_BULLET_IN_ANGLED_AREA(-802.3978f, 176.15532f, 74.24074f, -799.63025f, 168.9907f, 79.24074f, 4f, true)) || MISC::IS_PROJECTILE_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_132, true) - Vector(1.5f, 2f, 2f), ENTITY::GET_ENTITY_COORDS(iLocal_132, true) + Vector(1.5f, 2f, 2f), true))
						{
							if (func_815(sLocal_115))
							{
								if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_132, sLocal_116, "tracey_argument", 3))
								{
									TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_132, sLocal_115, "tracey_fail", -800.835f, 170.158f, 75.79f, 0f, 0f, -64f, 4f, -8f, -1, 9218, 0f, 2, 1);
								}
								else
								{
									TASK::TASK_REACT_AND_FLEE_PED(iLocal_132, PLAYER::PLAYER_PED_ID());
								}
							}
							PED::SET_PED_KEEP_TASK(iLocal_132, true);
							__LIB_0__::func_203(&uLocal_288, 5, iLocal_132, "TRACEY", 0, 1);
							func_807("ARM3_TRCF", 7, 1, 0);
							func_806(2000);
							iLocal_237 = 17;
							func_821();
						}
					}
					if (((ENTITY::DOES_ENTITY_EXIST(iLocal_133) && !PED::IS_PED_INJURED(iLocal_133)) && ENTITY::DOES_ENTITY_EXIST(iLocal_134)) && !PED::IS_PED_INJURED(iLocal_134))
					{
						if ((((((((((PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), iLocal_133) || PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), iLocal_134)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_JUMPING(PLAYER::PLAYER_PED_ID())) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -794.92755f, 184.10698f, 70.83471f, -815.3759f, 176.08621f, 74.15309f, 25f, false, true, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -807.37335f, 189.0489f, 71.47702f, -815.2399f, 185.99762f, 74.97866f, 6.5f, false, true, 0)) || ((!PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()) && TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID()) >= 1f) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -806.0699f, 179.8812f, 71.15309f, -794.9532f, 184.0973f, 73.83471f, 10f, false, true, 0))) && (((ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_133, -796.0438f, 184.97995f, 71.60547f, -801.0977f, 183.0096f, 74.60547f, 2f, false, true, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_134, -796.0438f, 184.97995f, 71.60547f, -801.0977f, 183.0096f, 74.60547f, 2f, false, true, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -817.577f, 179.8697f, 71.15309f, -807.61334f, 183.7363f, 75.80472f, 4.25f, false, true, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -806.8881f, 183.77551f, 71.3478f, -805.19006f, 184.44276f, 73.8478f, 3.5f, false, true, 0))) || MISC::IS_BULLET_IN_ANGLED_AREA(-803.29724f, 186.04341f, 70.10547f, -801.1071f, 180.29704f, 75.33471f, 4f, true)) || MISC::IS_PROJECTILE_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_133, true) - Vector(1.5f, 2f, 2f), ENTITY::GET_ENTITY_COORDS(iLocal_133, true) + Vector(1.5f, 2f, 2f), true)) || MISC::IS_PROJECTILE_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_134, true) - Vector(1.5f, 2f, 2f), ENTITY::GET_ENTITY_COORDS(iLocal_134, true) + Vector(1.5f, 2f, 2f), true))
						{
							if (!func_848("CaughtWifeCoach"))
							{
								if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -810.33563f, 179.16743f, 71.15309f, -796.08673f, 184.91301f, 74.35547f, 2f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -801.0658f, 187.03131f, 71.60547f, -797.86554f, 178.34364f, 74.83471f, 9f, false, true, 0))
								{
									func_210(PLAYER::PLAYER_ID(), 0, 0);
									func_842("CaughtWifeCoach", 1);
								}
								else
								{
									TASK::CLEAR_PED_TASKS(iLocal_133);
									TASK::TASK_REACT_AND_FLEE_PED(iLocal_133, PLAYER::PLAYER_PED_ID());
									PED::SET_PED_KEEP_TASK(iLocal_133, true);
									TASK::CLEAR_PED_TASKS(iLocal_134);
									TASK::TASK_REACT_AND_FLEE_PED(iLocal_134, PLAYER::PLAYER_PED_ID());
									PED::SET_PED_KEEP_TASK(iLocal_134, true);
									func_580();
									func_807("ARM3_WIFF", 7, 1, 0);
									func_806(2000);
									iLocal_237 = 17;
									func_821();
								}
							}
						}
					}
				}
			}
		}
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -757.2531f, 167.17636f, 57.202972f, -854.1731f, 169.95111f, 82.6092f, 70f, false, true, 0))
	{
		if (((PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_PLANTING_BOMB(PLAYER::PLAYER_PED_ID())) && !WEAPON::IS_PED_CURRENT_WEAPON_SILENCED(PLAYER::PLAYER_PED_ID())) && func_834(PLAYER::PLAYER_PED_ID()))
		{
			iLocal_237 = 16;
			func_821();
		}
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (iLocal_236 < 5)
		{
			if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -846.8918f, 183.00507f, 55.97863f, -767.86847f, 178.76204f, 97.749275f, 28f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -843.80023f, 155.6993f, 50.815834f, -766.0428f, 152.70665f, 91.474686f, 27f, false, true, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -760.6635f, 190.64626f, 68.49724f, -775.10004f, 201.88234f, 84.69663f, 10f, false, true, 0))
			{
				iLocal_237 = 17;
				func_821();
			}
		}
	}
}

void func_851()//Position - 0x9AAE4
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		iLocal_237 = 1;
		func_821();
	}
	if (__LIB_11__::func_809(&(uLocal_248[0])))
	{
		iLocal_237 = 2;
		func_821();
	}
	if (__LIB_11__::func_809(&(uLocal_248[1])) && CAM::IS_SCREEN_FADED_IN())
	{
		iLocal_237 = 3;
		func_821();
	}
	if (__LIB_11__::func_809(&iLocal_131))
	{
		iLocal_237 = 4;
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_132))
		{
			if (!PED::IS_PED_INJURED(iLocal_132))
			{
				if (func_815(sLocal_115))
				{
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_132, sLocal_116, "tracey_argument", 3))
					{
						TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_132, sLocal_115, "tracey_fail", -800.835f, 170.158f, 75.79f, 0f, 0f, -64f, 4f, -8f, -1, 9218, 0f, 2, 1);
					}
					else
					{
						TASK::TASK_REACT_AND_FLEE_PED(iLocal_132, PLAYER::PLAYER_PED_ID());
					}
				}
				PED::SET_PED_KEEP_TASK(iLocal_132, true);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_133))
		{
			if (!PED::IS_PED_INJURED(iLocal_133))
			{
				TASK::CLEAR_PED_TASKS(iLocal_133);
				TASK::TASK_REACT_AND_FLEE_PED(iLocal_133, PLAYER::PLAYER_PED_ID());
				PED::SET_PED_KEEP_TASK(iLocal_133, true);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_134))
		{
			if (!PED::IS_PED_INJURED(iLocal_134))
			{
				TASK::CLEAR_PED_TASKS(iLocal_134);
				TASK::TASK_REACT_AND_FLEE_PED(iLocal_134, PLAYER::PLAYER_PED_ID());
				PED::SET_PED_KEEP_TASK(iLocal_134, true);
			}
		}
		func_821();
	}
	if (__LIB_11__::func_809(&iLocal_132))
	{
		iLocal_237 = 6;
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_131))
		{
			if (!PED::IS_PED_INJURED(iLocal_131))
			{
				func_581();
				if (func_815(sLocal_115))
				{
					iVar0 = PED::CREATE_SYNCHRONIZED_SCENE(-806.52f, 169.751f, 75.693f, 0f, 0f, -50f, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_131, iVar0, sLocal_115, "jimmy_playingvideogame_fail", 8f, -8f, 5, 0, 1000f, 0);
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_164, iVar0, "jimmy_playingvideogame_fail_controller", sLocal_115, 8f, -8f, 0, 1000f);
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_165, iVar0, "jimmy_playingvideogame_fail_headset", sLocal_115, 8f, -8f, 0, 1000f);
					PED::SET_SYNCHRONIZED_SCENE_PHASE(iVar0, 0.25f);
				}
				PED::SET_PED_KEEP_TASK(iLocal_131, true);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_133))
		{
			if (!PED::IS_PED_INJURED(iLocal_133))
			{
				TASK::CLEAR_PED_TASKS(iLocal_133);
				TASK::TASK_REACT_AND_FLEE_PED(iLocal_133, PLAYER::PLAYER_PED_ID());
				PED::SET_PED_KEEP_TASK(iLocal_133, true);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_134))
		{
			if (!PED::IS_PED_INJURED(iLocal_134))
			{
				TASK::CLEAR_PED_TASKS(iLocal_134);
				TASK::TASK_REACT_AND_FLEE_PED(iLocal_134, PLAYER::PLAYER_PED_ID());
				PED::SET_PED_KEEP_TASK(iLocal_134, true);
			}
		}
		func_821();
	}
	if (__LIB_11__::func_809(&iLocal_133))
	{
		iLocal_237 = 8;
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_131))
		{
			if (!PED::IS_PED_INJURED(iLocal_131))
			{
				func_581();
				if (func_815(sLocal_115))
				{
					iVar1 = PED::CREATE_SYNCHRONIZED_SCENE(-806.52f, 169.751f, 75.693f, 0f, 0f, -50f, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_131, iVar1, sLocal_115, "jimmy_playingvideogame_fail", 8f, -8f, 5, 0, 1000f, 0);
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_164, iVar1, "jimmy_playingvideogame_fail_controller", sLocal_115, 8f, -8f, 0, 1000f);
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_165, iVar1, "jimmy_playingvideogame_fail_headset", sLocal_115, 8f, -8f, 0, 1000f);
					PED::SET_SYNCHRONIZED_SCENE_PHASE(iVar1, 0.25f);
				}
				PED::SET_PED_KEEP_TASK(iLocal_131, true);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_132))
		{
			if (!PED::IS_PED_INJURED(iLocal_132))
			{
				if (func_815(sLocal_115))
				{
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_132, sLocal_116, "tracey_argument", 3))
					{
						TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_132, sLocal_115, "tracey_fail", -800.835f, 170.158f, 75.79f, 0f, 0f, -64f, 4f, -8f, -1, 9218, 0f, 2, 1);
					}
					else
					{
						TASK::TASK_REACT_AND_FLEE_PED(iLocal_132, PLAYER::PLAYER_PED_ID());
					}
				}
				PED::SET_PED_KEEP_TASK(iLocal_132, true);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_134))
		{
			if (!PED::IS_PED_INJURED(iLocal_134))
			{
				TASK::CLEAR_PED_TASKS(iLocal_134);
				TASK::TASK_REACT_AND_FLEE_PED(iLocal_134, PLAYER::PLAYER_PED_ID());
				PED::SET_PED_KEEP_TASK(iLocal_134, true);
			}
		}
		func_821();
	}
	if (__LIB_11__::func_809(&iLocal_134))
	{
		iLocal_237 = 9;
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_131))
		{
			if (!PED::IS_PED_INJURED(iLocal_131))
			{
				func_581();
				if (func_815(sLocal_115))
				{
					iVar2 = PED::CREATE_SYNCHRONIZED_SCENE(-806.52f, 169.751f, 75.693f, 0f, 0f, -50f, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_131, iVar2, sLocal_115, "jimmy_playingvideogame_fail", 8f, -8f, 5, 0, 1000f, 0);
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_164, iVar2, "jimmy_playingvideogame_fail_controller", sLocal_115, 8f, -8f, 0, 1000f);
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_165, iVar2, "jimmy_playingvideogame_fail_headset", sLocal_115, 8f, -8f, 0, 1000f);
					PED::SET_SYNCHRONIZED_SCENE_PHASE(iVar2, 0.25f);
				}
				PED::SET_PED_KEEP_TASK(iLocal_131, true);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_132))
		{
			if (!PED::IS_PED_INJURED(iLocal_132))
			{
				if (func_815(sLocal_115))
				{
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_132, sLocal_116, "tracey_argument", 3))
					{
						TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_132, sLocal_115, "tracey_fail", -800.835f, 170.158f, 75.79f, 0f, 0f, -64f, 4f, -8f, -1, 9218, 0f, 2, 1);
					}
					else
					{
						TASK::TASK_REACT_AND_FLEE_PED(iLocal_132, PLAYER::PLAYER_PED_ID());
					}
				}
				PED::SET_PED_KEEP_TASK(iLocal_132, true);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_133))
		{
			if (!PED::IS_PED_INJURED(iLocal_133))
			{
				TASK::CLEAR_PED_TASKS(iLocal_133);
				PED::SET_PED_KEEP_TASK(iLocal_133, true);
			}
		}
		func_821();
	}
	if (__LIB_11__::func_809(&iLocal_135))
	{
		iLocal_237 = 11;
		func_821();
	}
	if (func_852(&iLocal_140) || ((ENTITY::DOES_ENTITY_EXIST(iLocal_140) && !ENTITY::IS_ENTITY_DEAD(iLocal_140, false)) && (((VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iLocal_140, 0) || VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iLocal_140, 1)) || VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iLocal_140, 2)) || VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iLocal_140, 3))))
	{
		if (!CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			if (iLocal_236 < 10)
			{
				iLocal_237 = 20;
				func_821();
			}
		}
	}
	if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(-1, -26.944561f, -1103.1642f, 25.434294f, -59.32895f, -1091.362f, 28.628263f, 18f) || FIRE::IS_EXPLOSION_IN_ANGLED_AREA(-1, -41.243816f, -1087.1223f, 25.434362f, -26.133615f, -1092.6874f, 28.43388f, 11.75f))
	{
		if (iLocal_236 < 7)
		{
			iLocal_237 = 21;
			func_821();
		}
	}
	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
	{
		if ((iLocal_236 >= 3 || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -741.3532f, 175.70107f, 44.151825f, -871.8698f, 171.45758f, 116.67694f, 100f, false, true, 0)) || (((iLocal_236 == 2 && ENTITY::DOES_ENTITY_EXIST(iLocal_135)) && ENTITY::DOES_ENTITY_EXIST(iLocal_137)) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -74.61548f, -1102.6023f, 24.006918f, -28.391909f, -1119.1436f, 41.558163f, 50f, false, true, 0)))
		{
			iLocal_237 = 22;
			func_821();
		}
	}
}

int func_852(int iParam0)//Position - 0x9B15F
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if ((ENTITY::IS_ENTITY_DEAD(*iParam0, false) || !VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, true)) || __LIB_10__::func_566(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_906(int iParam0)//Position - 0x9E2DE
{
	int iVar0;
	if (iLocal_82)
	{
		RECORDING::REPLAY_STOP_EVENT();
		iLocal_82 = 0;
	}
	iLocal_100 = 0;
	__LIB_0__::func_320(0, -1);
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
		AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(func_820(1)) && !PED::IS_PED_INJURED(func_820(1)))
	{
		PED::RESET_PED_IN_VEHICLE_CONTEXT(func_820(1));
	}
	if (ENTITY::DOES_ENTITY_EXIST(func_820(0)) && !PED::IS_PED_INJURED(func_820(0)))
	{
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(func_820(0), true);
	}
	PLAYER::SET_PLAYER_SNEAKING_NOISE_MULTIPLIER(PLAYER::PLAYER_ID(), 1f);
	PLAYER::SET_PLAYER_NOISE_MULTIPLIER(PLAYER::PLAYER_ID(), 1f);
	PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), true);
	PLAYER::DISABLE_PLAYER_FIRING(PLAYER::PLAYER_ID(), false);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_140))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_140, false))
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_140, 1);
		}
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_173))
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iLocal_173, 0);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_174))
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iLocal_174, 0);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_175))
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iLocal_175, 0);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_176))
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iLocal_176, 0);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_177))
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iLocal_177, 0);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_178))
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iLocal_178, 0);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_179))
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iLocal_179, 0);
	}
	AUDIO::REMOVE_PORTAL_SETTINGS_OVERRIDE("V_MICHAEL_PS_BATHROOM_WITH_WINDOW");
	__LIB_11__::func_952(4, PLAYER::PLAYER_PED_ID());
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Global_41748[4 /*31*/], 0, true, true);
	if (iLocal_88 == 0)
	{
		__LIB_18__::func_191(178, 0, 0, 1, 0);
	}
	if (iLocal_88 == 0)
	{
		if (func_848("WindowSmashed"))
		{
			AUDIO::REMOVE_PORTAL_SETTINGS_OVERRIDE("V_CARSHOWROOM_PS_WINDOW_UNBROKEN");
			func_842("WindowSmashed", 0);
		}
	}
	iLocal_86 = 0;
	if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
	{
		STREAMING::NEW_LOAD_SCENE_STOP();
	}
	__LIB_32__::func_762(0);
	__LIB_18__::func_192(&iLocal_198, 1, 0);
	iLocal_60 = 1000;
	fLocal_61 = 1000f;
	fLocal_62 = 1000f;
	iLocal_57 = -1;
	iLocal_85 = 1;
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
	GRAPHICS::CASCADE_SHADOWS_SET_ENTITY_TRACKER_SCALE(1f);
	GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
	GRAPHICS::CASCADE_SHADOWS_ENABLE_FREEZER(true);
	__LIB_9__::func_981(&uLocal_223, 0, 0);
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	CAM::DESTROY_ALL_CAMS(false);
	CAM::STOP_GAMEPLAY_HINT(true);
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_189))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_189, false);
	}
	if (iLocal_88 == 0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_248[0]))
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_248[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_248[1]))
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_248[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_135))
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_135);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_131))
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_131);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_132))
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_132);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_133))
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_133);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_134))
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_134);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_137))
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_137);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_136))
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_136);
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_169);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_M_Gardener_01"));
		STREAMING::REMOVE_ANIM_DICT(sLocal_121);
		if (STREAMING::HAS_CLIP_SET_LOADED(sLocal_120))
		{
			STREAMING::REMOVE_CLIP_SET(sLocal_120);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_138) && !ENTITY::IS_ENTITY_DEAD(iLocal_138, false))
	{
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_138) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_138, true))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_138);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_141))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_141);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_139))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_139);
	}
	if (!iLocal_88)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_140))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_140);
		}
	}
	iVar0 = 0;
	while (iVar0 < iLocal_142)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_142[iVar0]))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_142[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_143)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_143[iVar0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_143[iVar0], false))
		{
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_143[iVar0]) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_143[iVar0], true))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_143[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_144)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_144[iVar0]))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_144[iVar0]));
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_160))
	{
		if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_160) || ENTITY::IS_ENTITY_OCCLUDED(iLocal_160))
		{
			__LIB_11__::func_108(&iLocal_160);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_160))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_160);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_161))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_161);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_162))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_162);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_163))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_163);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_164))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_164);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_165))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_165);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_166))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_166);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_167))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_167);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_168))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_168);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_170))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_170);
	}
	ENTITY::REMOVE_MODEL_HIDE(-802.73f, 167.5f, 77.58f, 1f, joaat("v_ilev_mm_windowwc"), false);
	if (iLocal_88)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_140))
		{
			if (ENTITY::GET_ENTITY_MODEL(iLocal_140) == joaat("bjxl"))
			{
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_140, 5f);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_140, false);
				PHYSICS::ACTIVATE_PHYSICS(iLocal_140);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iLocal_140, true);
				__LIB_6__::func_770(36, 1);
				__LIB_38__::func_161(36, iLocal_140, 1);
			}
		}
		iVar0 = 0;
		while (iVar0 < iLocal_142)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_142[iVar0]))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_142[iVar0]));
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_143)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_143[iVar0]))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_143[iVar0]));
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_144)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_144[iVar0]))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_144[iVar0]));
			}
			iVar0++;
		}
	}
	if (func_848("ACT_stealth_kill_a_gardener"))
	{
		MISC::ACTION_MANAGER_ENABLE_ACTION(joaat("ACT_stealth_kill_a_gardener"), false);
	}
	PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), false, -1, 0);
	if (iLocal_66)
	{
		CAM::SET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL(iLocal_65);
		CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(0, iLocal_67);
		iLocal_66 = 0;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_190)
	{
		TASK::REMOVE_COVER_POINT(iLocal_190[iVar0]);
		iVar0++;
	}
	TASK::REMOVE_ALL_COVER_BLOCKING_AREAS();
	if (iLocal_184 != -1)
	{
		PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_184);
		iLocal_184 = -1;
	}
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("bjxl"), false);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("patriot"), false);
	PLAYER::SET_MAX_WANTED_LEVEL(6);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	MISC::ENABLE_DISPATCH_SERVICE(1, true);
	MISC::ENABLE_DISPATCH_SERVICE(10, true);
	MISC::ENABLE_DISPATCH_SERVICE(9, true);
	MISC::ENABLE_DISPATCH_SERVICE(2, true);
	MISC::ENABLE_DISPATCH_SERVICE(3, true);
	MISC::ENABLE_DISPATCH_SERVICE(4, true);
	MISC::ENABLE_DISPATCH_SERVICE(5, true);
	PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), true);
	PED::SET_CREATE_RANDOM_COPS(true);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Vector(23.1441f, -1150.3278f, -149.383f) - Vector(5f, 5f, 5f), Vector(23.1441f, -1150.3278f, -149.383f) + Vector(5f, 5f, 5f), 1);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Vector(23.1441f, -1150.3278f, -149.383f) - Vector(5f, 5f, 5f), Vector(23.1441f, -1150.3278f, -149.383f) + Vector(5f, 5f, 5f), 1);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Vector(23.1441f, -1150.3278f, -149.383f) - Vector(5f, 5f, 5f), Vector(23.1441f, -1150.3278f, -149.383f) + Vector(5f, 5f, 5f), 1);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Vector(23.1441f, -1150.3278f, -149.383f) - Vector(5f, 5f, 5f), Vector(23.1441f, -1150.3278f, -149.383f) + Vector(5f, 5f, 5f), 1);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(-57.644516f, -1097.634f, 35.42235f, -145.06671f, -1156.5638f, 23.026037f, 20f, 1);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(-801.0658f, 187.03131f, 71.60547f, -797.86554f, 178.34364f, 74.83471f, 9f, 1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(29.436941f, -1105.479f, -46.890217f) - Vector(5f, 20f, 20f), Vector(29.436941f, -1105.479f, -46.890217f) + Vector(5f, 20f, 20f), true, true);
	VEHICLE::CLEAR_VEHICLE_GENERATOR_AREA_OF_INTEREST();
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE();
	__LIB_10__::func_7(&iLocal_148);
	__LIB_10__::func_7(&iLocal_149);
	__LIB_10__::func_7(&iLocal_146);
	__LIB_10__::func_7(&iLocal_147);
	__LIB_10__::func_7(&iLocal_145);
	__LIB_10__::func_7(&iLocal_154);
	__LIB_10__::func_7(&iLocal_150);
	__LIB_10__::func_7(&iLocal_151);
	__LIB_10__::func_7(&iLocal_152);
	__LIB_10__::func_7(&iLocal_153);
	HUD::CLEAR_GPS_MULTI_ROUTE();
	if (iLocal_188 != -1)
	{
		AUDIO::STOP_SOUND(iLocal_188);
		AUDIO::RELEASE_SOUND_ID(iLocal_188);
		iLocal_188 = -1;
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_DRIVE_TO_MICHAELS_HOUSE"))
	{
		AUDIO::STOP_AUDIO_SCENE("ARM_3_DRIVE_TO_MICHAELS_HOUSE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_DRIVE_PHONE_SIMEON"))
	{
		AUDIO::STOP_AUDIO_SCENE("ARM_3_DRIVE_PHONE_SIMEON");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_CLIMB_INTO_GARDEN"))
	{
		AUDIO::STOP_AUDIO_SCENE("ARM_3_CLIMB_INTO_GARDEN");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_TAKE_OUT_GARDENER"))
	{
		AUDIO::STOP_AUDIO_SCENE("ARM_3_TAKE_OUT_GARDENER");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_TARGET_GARDENER"))
	{
		AUDIO::STOP_AUDIO_SCENE("ARM_3_TARGET_GARDENER");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_ENTER_HOUSE"))
	{
		AUDIO::STOP_AUDIO_SCENE("ARM_3_ENTER_HOUSE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_INSIDE_HOUSE"))
	{
		AUDIO::STOP_AUDIO_SCENE("ARM_3_INSIDE_HOUSE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_ENTER_GARAGE"))
	{
		AUDIO::STOP_AUDIO_SCENE("ARM_3_ENTER_GARAGE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_STEAL_CAR"))
	{
		AUDIO::STOP_AUDIO_SCENE("ARM_3_STEAL_CAR");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_EXIT_THROUGH_GATE"))
	{
		AUDIO::STOP_AUDIO_SCENE("ARM_3_EXIT_THROUGH_GATE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_DRIVE_TO_DEALERSHIP"))
	{
		AUDIO::STOP_AUDIO_SCENE("ARM_3_DRIVE_TO_DEALERSHIP");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_RAM_DEALERSHIP"))
	{
		AUDIO::STOP_AUDIO_SCENE("ARM_3_RAM_DEALERSHIP");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_WINDOW_FOCUS_CAM"))
	{
		AUDIO::STOP_AUDIO_SCENE("ARM_3_WINDOW_FOCUS_CAM");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_3_BEAT_DOWN"))
	{
		AUDIO::STOP_AUDIO_SCENE("ARM_3_BEAT_DOWN");
	}
	func_115(19);
	AUDIO::STOP_STREAM();
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	AUDIO::UNREGISTER_SCRIPT_WITH_AUDIO();
	AUDIO::SET_USER_RADIO_CONTROL_ENABLED(true);
	__LIB_0__::func_202(&uLocal_288, 1);
	__LIB_0__::func_202(&uLocal_288, 3);
	__LIB_0__::func_202(&uLocal_288, 4);
	__LIB_0__::func_202(&uLocal_288, 5);
	__LIB_0__::func_202(&uLocal_288, 6);
	__LIB_0__::func_202(&uLocal_288, 7);
	HUD::DISPLAY_RADAR(true);
	HUD::DISPLAY_HUD(true);
	HUD::ALLOW_SONAR_BLIPS(true);
	__LIB_0__::func_367(0);
	__LIB_7__::func_279(0, 1, 1, 0, 0, 0, 0);
	__LIB_11__::func_811(0, 0);
	__LIB_0__::func_503(115, 0);
	PLAYER::ENABLE_SPECIAL_ABILITY(PLAYER::PLAYER_ID(), true, 0);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_196);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_197);
	func_910();
	func_909();
	func_908();
	func_907();
	__LIB_7__::func_279(0, 1, 1, 0, 0, 0, 0);
	__LIB_37__::func_407();
	SYSTEM::SETTIMERA(0);
	iLocal_48 = 0;
	iLocal_49 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_50)
	{
		iLocal_50[iVar0] = -1;
		iVar0++;
	}
	iLocal_51 = 0;
	iLocal_55 = -1;
	iLocal_83 = 0;
	bLocal_92 = false;
	iLocal_93 = 0;
	iLocal_94 = 0;
	iLocal_88 = 0;
	if (iParam0 == 0)
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
}

void func_907()//Position - 0x9ECC1
{
	int iVar0;
	int iVar1;
	iVar0 = iLocal_247;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		iLocal_247[iVar1] = 0;
		iVar1++;
	}
}

void func_908()//Position - 0x9ECEC
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_246)
	{
		iLocal_246[iVar0] = 0;
		iVar0++;
	}
}

void func_909()//Position - 0x9ED13
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_245)
	{
		iLocal_245[iVar0] = 0;
		iVar0++;
	}
}

void func_910()//Position - 0x9ED3A
{
	int iVar0;
	int iVar1;
	iVar0 = iLocal_243;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		iLocal_243[iVar1] = 0;
		iVar1++;
	}
	iLocal_244 = 0;
}

void func_911()//Position - 0x9ED69
{
	if (__LIB_20__::func_509(PLAYER::PLAYER_PED_ID()) == 0)
	{
		__LIB_0__::func_428(-27.8311f, -1084.0056f, 25.5727f, 339.9998f);
		__LIB_20__::func_165(-26.5693f, -1082.2946f, 25.582f, 70.3239f);
	}
}

void func_912()//Position - 0x9EDAD
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
			iVar0 = __LIB_0__::func_323();
			if (iVar0 != -1)
			{
				if (!func_827(iVar0))
				{
					return;
				}
				MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			__LIB_26__::func_546();
		}
	}
}

