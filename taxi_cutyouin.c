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
	struct<3> Local_230[1];
	struct<418> Local_231 = { 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_232 = -1;
	var uLocal_233 = -1;
	var uLocal_234 = -1;
	var uLocal_235 = -1;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	int iLocal_244 = 0;
	int iLocal_245 = 0;
	struct<3> Local_246 = { 0, 0, 0 } ;
	struct<3> Local_247 = { 0, 0, 0 } ;
	struct<3> Local_248 = { 0, 0, 0 } ;
	struct<3> Local_249 = { 0, 0, 0 } ;
	struct<3> Local_250 = { 0, 0, 0 } ;
	int iLocal_251 = 0;
	int iLocal_252 = 0;
	int iLocal_253 = 0;
	bool bLocal_254 = 0;
	int iLocal_255 = 0;
	bool bLocal_256 = 0;
	int iLocal_257 = 0;
	int iLocal_258 = 0;
	int iLocal_259 = 0;
	int iLocal_260 = 0;
	int iLocal_261 = 0;
	int iLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	int iLocal_265 = 0;
	int iLocal_266 = 0;
	int iLocal_267 = 0;
	int iLocal_268 = 0;
	char cLocal_269[24] = "";
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	char cLocal_273[24] = "";
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	char cLocal_277[24] = "";
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	char cLocal_281[24] = "";
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	char cLocal_285[24] = "";
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	char cLocal_289[24] = "";
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	char cLocal_293[24] = "";
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	char cLocal_297[24] = "";
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	char cLocal_301[24] = "";
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	struct<6> Local_305 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 1097859072;
	var uLocal_309 = 1500;
	var uLocal_310 = 45;
	var uLocal_311 = 1103626240;
	var uLocal_312 = 5;
	int iLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	int iLocal_323[2] = { 0, 0 };
	int iLocal_324 = 0;
	var uLocal_325[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_326 = 0;
	int iLocal_327 = 0;
	int iLocal_328 = 0;
	bool bLocal_329 = 0;
	struct<28> Local_330 = { -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 5;
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
	int iLocal_374 = 0;
	int iLocal_375 = 0;
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
	Local_246 = { 342.6987f, -996.7599f, 28.2438f };
	Local_247 = { 321.10886f, -996.4285f, 28.20932f };
	Local_248 = { -1042.9464f, -2689.5498f, 12.7572f };
	Local_249 = { -1044.8083f, -2694.138f, 12.728f };
	Local_250 = { 348.0136f, -993.6165f, 31.9655f };
	iLocal_262 = 1;
	iLocal_266 = -1;
	StringCopy(&cLocal_269, "txm8_thank1M_2", 24);
	StringCopy(&cLocal_273, "txm8_thank1T_2", 24);
	StringCopy(&cLocal_277, "txm8_thank1F_2", 24);
	StringCopy(&cLocal_281, "txm8_thank2M_2", 24);
	StringCopy(&cLocal_285, "txm8_thank2T_2", 24);
	StringCopy(&cLocal_289, "txm8_thank2F_2", 24);
	StringCopy(&cLocal_293, "txm8_thank3M_2", 24);
	StringCopy(&cLocal_297, "txm8_thank3T_2", 24);
	StringCopy(&cLocal_301, "txm8_thank3F_2", 24);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(67))
	{
		__LIB_38__::func_753(2);
		func_441();
	}
	MISC::SET_MISSION_FLAG(true);
	func_428(5);
	while (true)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_231.f_2))
		{
			func_9();
		}
		else
		{
			__LIB_39__::func_903(&Local_231);
		}
		SYSTEM::WAIT(0);
	}
}

void func_9()//Position - 0x391
{
	int iVar0;
	int iVar1;
	if (__LIB_39__::func_842(&Local_231))
	{
		if (__LIB_39__::func_998(&Local_231, bLocal_254))
		{
			func_424();
		}
	}
	else
	{
		__LIB_39__::func_893(&Local_231);
		__LIB_42__::func_725(&Local_231, &uLocal_306);
		if (Local_231.f_410 != 28 && Local_231.f_410 != 30)
		{
			__LIB_40__::func_8(&Local_231);
		}
		__LIB_39__::func_841(&Local_231, &uLocal_264, 0);
		if (Local_231.f_410 > 2)
		{
			if (((Local_231.f_410 == 21 || Local_231.f_410 == 25) || Local_231.f_410 == 9) || Local_231.f_410 == 22)
			{
				__LIB_42__::func_728(&Local_231);
			}
			if (!__LIB_39__::func_840(&Local_231))
			{
				func_355();
			}
			else
			{
				__LIB_39__::func_973(&Local_231, "Taxi Not Driveable", __LIB_39__::func_830(&Local_231));
			}
		}
		if (Local_231.f_410 == 9 || Local_231.f_410 == 22)
		{
			__LIB_40__::func_20(&Local_231, 0, 1);
		}
		if (Local_231.f_410 == 17 || Local_231.f_410 == 21)
		{
			if (__LIB_39__::func_823(&Local_231) && __LIB_0__::func_669(1, 1, 0))
			{
				__LIB_40__::func_310(&uLocal_45, Local_250, 0, 0, 1, 1, 1);
			}
			else
			{
				__LIB_0__::func_345(&uLocal_45, 0, 0);
			}
			if (__LIB_40__::func_22(&Local_231) && __LIB_0__::func_669(1, 1, 0))
			{
				if (!BitTest(uLocal_263, 3))
				{
					__LIB_0__::func_151("TAXI_HNT_CAM" /* GXT: ~s~To look down the alley press ~INPUT_VEH_CIN_CAM~ */, -1);
					MISC::SET_BIT(&uLocal_263, 3);
					if (BitTest(uLocal_263, 4))
					{
						MISC::CLEAR_BIT(&uLocal_263, 4);
					}
				}
			}
			else if (!BitTest(uLocal_263, 4))
			{
				HUD::CLEAR_HELP(true);
				MISC::SET_BIT(&uLocal_263, 4);
			}
		}
		switch (Local_231.f_410)
		{
			case 0:
				func_282();
				__LIB_39__::func_859(&Local_231, 16, 4f, 0);
				__LIB_39__::func_914(&Local_231, Local_248, Local_249, "TaxiDerrick", func_280(0), 116.1366f, 10f);
				__LIB_39__::func_900(&Local_231);
				__LIB_39__::func_822(&Local_231, 1);
				break;
			case 1:
				if (func_273())
				{
					PED::ADD_RELATIONSHIP_GROUP("TAXI_Pursuers", &iLocal_328);
					__LIB_39__::func_820();
					func_252();
					__LIB_39__::func_812(&(Local_230[0 /*3*/]), "TAXI_SC_BN_07", 1000);
					__LIB_39__::func_811(&Local_231, &Local_230);
					__LIB_39__::func_810(&Local_231);
					Local_231.f_14 = { Local_248 };
					__LIB_39__::func_822(&Local_231, 3);
				}
				break;
			case 3:
				if (__LIB_40__::func_13(&Local_231, 1))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_231.f_3, false))
					{
						PED::SET_PED_COMPONENT_VARIATION(Local_231.f_3, 8, 0, 0, 0);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_231.f_3, iLocal_328);
						WEAPON::REMOVE_ALL_PED_WEAPONS(Local_231.f_3, true);
					}
					PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1035.326f, -2703.3054f, 12.8004f, -1056.0803f, -2568.6753f, 12.8181f, 125f, true, false, true);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(0, joaat("AMBIENT_GANG_FAMILY"), Local_231.f_413);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(0, joaat("AMBIENT_GANG_LOST"), Local_231.f_413);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(0, joaat("AMBIENT_GANG_MEXICAN"), Local_231.f_413);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_280(0));
					__LIB_39__::func_899(&Local_231, 1, 0);
					__LIB_39__::func_822(&Local_231, 5);
				}
				break;
			case 5:
				if (__LIB_42__::func_727(&Local_231, 0, 1109393408))
				{
					Local_231.f_17 = { func_215(0) };
					iLocal_251 = 1;
					__LIB_39__::func_822(&Local_231, 15);
				}
				break;
			case 15:
				if (__LIB_39__::func_868(&Local_231))
				{
					__LIB_39__::func_970(&Local_231, 9, 1, 0, 0);
					__LIB_39__::func_867(&Local_231);
					func_209();
					__LIB_39__::func_806(func_215(-1), 0, 1114636288);
					__LIB_39__::func_822(&Local_231, 9);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_231.f_4, false))
				{
					if (!PED::IS_PED_IN_VEHICLE(Local_231.f_2, Local_231.f_4, false))
					{
						__LIB_39__::func_980(&Local_231);
						__LIB_39__::func_822(&Local_231, 5);
					}
				}
				break;
			case 9:
				if (!__LIB_0__::func_703(Local_231.f_82, 16384) && __LIB_39__::func_804(&Local_231) != 35)
				{
					if (__LIB_39__::func_803(&Local_231))
					{
						if (__LIB_40__::func_22(&Local_231))
						{
							if (__LIB_2__::func_485(Local_231.f_4, Local_231.f_17, 1) <= 80f)
							{
								__LIB_39__::func_856(&uLocal_333);
								__LIB_39__::func_802(&Local_330, 4, 0);
								__LIB_39__::func_970(&Local_231, 35, 1, 1, 0);
								PED::SET_CREATE_RANDOM_COPS(false);
							}
						}
					}
				}
				if (!iLocal_261)
				{
					if (__LIB_39__::func_803(&Local_231))
					{
						if (__LIB_40__::func_22(&Local_231))
						{
							if (__LIB_2__::func_485(Local_231.f_4, Local_231.f_17, 1) <= 100f)
							{
								MISC::CLEAR_AREA_OF_COPS(333.6208f, -955.50275f, 28.4225f, 60f, 0);
								iLocal_261 = 1;
							}
						}
					}
				}
				if (__LIB_43__::func_587(&Local_231, 1086324736, 1097859072, 1117782016))
				{
					iLocal_251 = 0;
					HUD::SET_BLIP_ALPHA(Local_231.f_9, 0);
					Local_231.f_26 = { -1047.5184f, -2722.1135f, 19.0823f };
					Local_231.f_34 = 238.52f;
					__LIB_39__::func_859(&Local_231, 6, 0, 0);
					__LIB_39__::func_780(&(Local_231.f_81), 67108864);
					__LIB_39__::func_970(&Local_231, 28, 1, 1, 0);
					Local_231.f_417 = 29;
					__LIB_39__::func_822(&Local_231, 16);
				}
				break;
			case 16:
				if (!PED::IS_PED_INJURED(Local_231.f_3))
				{
					if (__LIB_39__::func_803(&Local_231))
					{
						__LIB_39__::func_854(&Local_231, Local_246);
					}
					else if (TASK::GET_SCRIPT_TASK_STATUS(Local_231.f_3, joaat("SCRIPT_TASK_LEAVE_VEHICLE")) == 7)
					{
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_245);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_245);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_246, 1.5f, 40000, 0.25f, 0, 40000f);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 337.3356f, -997.7456f, 28.1318f, 3f, 40000, 0.25f, 0, 40000f);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_247, 3f, 40000, 0.25f, 0, 40000f);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_245);
						TASK::TASK_PERFORM_SEQUENCE(Local_231.f_3, iLocal_245);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_245);
						PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0);
						__LIB_39__::func_859(&Local_231, 6, 0, 0);
						__LIB_39__::func_822(&Local_231, 17);
						iLocal_252 = 0;
					}
				}
				break;
			case 17:
				if (!PED::IS_PED_INJURED(Local_231.f_3))
				{
				}
				if (!iLocal_252)
				{
					func_167();
				}
				if (__LIB_40__::func_22(&Local_231))
				{
					if (!ENTITY::IS_ENTITY_AT_COORD(Local_231.f_4, Local_231.f_17, 10f, 10f, 10f, false, true, 0))
					{
						if (__LIB_2__::func_485(Local_231.f_4, Local_231.f_17, 1) > 250f)
						{
							__LIB_39__::func_973(&Local_231, "Player abandoned his accomplice while he at the jewelry store", 8);
						}
						if (__LIB_14__::func_556(Local_231.f_3, 1) > 10f)
						{
							if (HUD::GET_BLIP_ALPHA(Local_231.f_9) == 0 && !bLocal_254)
							{
								__LIB_42__::func_702(&Local_231, 1);
								HUD::CLEAR_THIS_PRINT("TAXI_OBJ_CYI_01");
							}
							__LIB_39__::func_970(&Local_231, 57, 1, 0, 1);
						}
					}
					else if (HUD::DOES_BLIP_EXIST(Local_231.f_9) && HUD::GET_BLIP_ALPHA(Local_231.f_9) > 0)
					{
						HUD::SET_BLIP_ALPHA(Local_231.f_9, 0);
						HUD::SET_BLIP_ROUTE(Local_231.f_9, false);
						__LIB_39__::func_970(&Local_231, 29, 1, 0, 1);
						HUD::CLEAR_THIS_PRINT("TAXI_OBJ_CYI_1B");
					}
				}
				else
				{
					if (!iLocal_253)
					{
						iLocal_253 = 1;
					}
					__LIB_40__::func_25(&Local_231, 1);
				}
				if (((ENTITY::IS_ENTITY_AT_COORD(Local_231.f_4, Local_231.f_17, 10f, 10f, 10f, false, true, 0) && ENTITY::IS_ENTITY_AT_COORD(Local_231.f_3, Local_247, 5f, 5f, 5f, false, true, 0)) && __LIB_39__::func_823(&Local_231)) && !iLocal_252)
				{
					if (!PED::IS_PED_INJURED(Local_231.f_3))
					{
						if (ENTITY::IS_ENTITY_OCCLUDED(Local_231.f_3))
						{
							MISC::SET_BIT(&uLocal_306, 8);
							WEAPON::GIVE_WEAPON_TO_PED(Local_231.f_3, joaat("WEAPON_COMBATPISTOL"), 50, false, true);
							TASK::TASK_SHOOT_AT_COORD(Local_231.f_3, 335.53137f, -992.4785f, 28.38245f, 10000, joaat("FIRING_PATTERN_BURST_FIRE"));
							ENTITY::SET_ENTITY_VISIBLE(Local_231.f_3, false, false);
							ENTITY::SET_ENTITY_CAN_BE_DAMAGED(Local_231.f_3, false);
							ENTITY::SET_ENTITY_INVINCIBLE(Local_231.f_3, true);
							ENTITY::SET_ENTITY_COORDS(Local_231.f_3, 339.9392f, -992.9357f, 28.3731f, true, false, false, true);
							iLocal_252 = 1;
							__LIB_39__::func_859(&Local_231, 6, 0, 0);
						}
					}
				}
				if (iLocal_252)
				{
					if ((__LIB_39__::func_978(&Local_231, 6) > 8f && ENTITY::IS_ENTITY_AT_COORD(Local_231.f_4, Local_231.f_17, 10f, 10f, 10f, false, true, 0)) && __LIB_39__::func_823(&Local_231))
					{
						if (!PED::IS_PED_INJURED(Local_231.f_3))
						{
							if (ENTITY::IS_ENTITY_OCCLUDED(Local_231.f_3))
							{
								MISC::CLEAR_BIT(&uLocal_306, 8);
								ENTITY::SET_ENTITY_VISIBLE(Local_231.f_3, true, false);
								ENTITY::SET_ENTITY_CAN_BE_DAMAGED(Local_231.f_3, true);
								ENTITY::SET_ENTITY_INVINCIBLE(Local_231.f_3, false);
								ENTITY::SET_ENTITY_COORDS(Local_231.f_3, Local_247, true, false, false, true);
								PED::SET_PED_COMPONENT_VARIATION(Local_231.f_3, 8, 1, 0, 0);
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_231.f_4, false))
								{
									PED::SET_PED_CONFIG_FLAG(Local_231.f_3, 118, false);
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_231.f_3);
									iVar0 = __LIB_39__::func_871(Local_231.f_4, Local_231.f_3);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_245);
									TASK::OPEN_SEQUENCE_TASK(&iLocal_245);
									TASK::TASK_GO_TO_COORD_ANY_MEANS(0, 343.9973f, -998.308f, 28.2314f, 3f, 0, false, 786603, -1f);
									TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
									TASK::TASK_SWAP_WEAPON(0, false);
									TASK::TASK_ENTER_VEHICLE(0, Local_231.f_4, 40000, iVar0, 2f, 1, 0);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_245);
									TASK::TASK_PERFORM_SEQUENCE(Local_231.f_3, iLocal_245);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_245);
									__LIB_39__::func_859(&Local_231, 6, 0, 0);
									if (HUD::DOES_BLIP_EXIST(Local_231.f_9))
									{
										HUD::SET_BLIP_ALPHA(Local_231.f_9, 0);
										HUD::SET_BLIP_ROUTE(Local_231.f_9, false);
									}
									PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(Local_231.f_3, "MOVE_P_M_ZERO_RUCKSACK");
									__LIB_39__::func_822(&Local_231, 21);
								}
							}
						}
					}
				}
				break;
			case 21:
				if (__LIB_39__::func_978(&Local_231, 6) > 23f)
				{
					if (!PED::IS_PED_INJURED(Local_231.f_3))
					{
						TASK::CLEAR_PED_TASKS(Local_231.f_3);
						TASK::TASK_SHOOT_AT_ENTITY(Local_231.f_3, PLAYER::PLAYER_PED_ID(), -1, 0);
					}
					__LIB_39__::func_973(&Local_231, "player didn't let teh Passenger in", 8);
				}
				else if ((MISC::GET_GAME_TIMER() % 1000) < 50)
				{
				}
				if ((ENTITY::IS_ENTITY_AT_COORD(Local_231.f_3, 347.8621f, -983.6118f, 31.308886f, 4f, 3f, 3f, false, true, 0) && ENTITY::IS_ENTITY_AT_COORD(Local_231.f_4, Local_231.f_17, 10f, 10f, 10f, false, true, 0)) && iLocal_252)
				{
					FIRE::ADD_EXPLOSION(344.5906f, -996.409f, 28.30219f, 4, 0.5f, true, false, 1f, false);
					AUDIO::PLAY_SOUND_FROM_COORD(iLocal_266, "Burglar_Bell", 340.8f, -965.4f, 28.4f, "Generic_Alarms", false, 0, false);
					iLocal_252 = 0;
				}
				if (__LIB_39__::func_803(&Local_231))
				{
					PED::SET_CREATE_RANDOM_COPS(true);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::GET_PLAYER_INDEX(), 2, false);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::GET_PLAYER_INDEX(), false);
					AUDIO::START_AUDIO_SCENE("TAXI_CUT_U_IN");
					__LIB_39__::func_806(func_215(0), 1, 1114636288);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, Local_231.f_413, joaat("COP"));
					__LIB_39__::func_852(6, 2);
					__LIB_39__::func_970(&Local_231, 49, 1, 0, 0);
					if (HUD::DOES_BLIP_EXIST(Local_231.f_9))
					{
						HUD::SET_BLIP_ROUTE(Local_231.f_9, false);
						HUD::REMOVE_BLIP(&(Local_231.f_9));
					}
					__LIB_0__::func_345(&uLocal_45, 0, 0);
					__LIB_39__::func_859(&Local_231, 6, 0, 0);
					__LIB_39__::func_859(&Local_231, 9, 0, 0);
					__LIB_39__::func_859(&Local_231, 7, 0, 0);
					__LIB_39__::func_822(&Local_231, 25);
				}
				break;
			case 25:
				__LIB_39__::func_796(&Local_231, &(Local_231.f_43));
				if (__LIB_0__::func_703(Local_231.f_44, 4))
				{
					__LIB_39__::func_851(&(Local_231.f_44), 4);
				}
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) > 0)
				{
					if (!__LIB_21__::func_727(&Local_231))
					{
						if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							if ((__LIB_39__::func_978(&Local_231, 16) > MISC::GET_RANDOM_FLOAT_IN_RANGE(15f, 25f) && iLocal_268 < 8) || __LIB_39__::func_978(&Local_231, 16) > MISC::GET_RANDOM_FLOAT_IN_RANGE(25f, 35f))
							{
								if (__LIB_39__::func_804(&Local_231) != 51)
								{
									__LIB_39__::func_970(&Local_231, 51, 1, 0, 0);
									iLocal_268++;
								}
								else
								{
									__LIB_39__::func_899(&Local_231, 1, 0);
								}
							}
						}
					}
				}
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) < 1 && __LIB_39__::func_978(&Local_231, 6) > 10f)
				{
					AUDIO::STOP_AUDIO_SCENE("TAXI_CUT_U_IN");
					__LIB_39__::func_822(&Local_231, 26);
					__LIB_39__::func_780(&(Local_231.f_44), 1);
				}
				break;
			case 26:
				__LIB_39__::func_796(&Local_231, &(Local_231.f_43));
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) > 0)
				{
					if (!__LIB_21__::func_727(&Local_231))
					{
						if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							if ((__LIB_39__::func_978(&Local_231, 16) > MISC::GET_RANDOM_FLOAT_IN_RANGE(15f, 25f) && iLocal_268 < 8) || __LIB_39__::func_978(&Local_231, 16) > MISC::GET_RANDOM_FLOAT_IN_RANGE(25f, 35f))
							{
								if (__LIB_39__::func_804(&Local_231) != 51)
								{
									__LIB_39__::func_970(&Local_231, 51, 1, 0, 0);
									iLocal_268++;
								}
								else
								{
									__LIB_39__::func_899(&Local_231, 1, 0);
								}
							}
						}
					}
				}
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) < 1 && __LIB_39__::func_978(&Local_231, 9) > 2f)
				{
					if (__LIB_39__::func_978(&Local_231, 9) <= 180f)
					{
						__LIB_39__::func_795(&Local_231, 0);
					}
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(0, Local_231.f_413, joaat("COP"));
					Local_231.f_17 = { func_215(5) };
					__LIB_39__::func_852(7, 2);
					__LIB_39__::func_968(&Local_231);
					__LIB_39__::func_794(&Local_231, 9, 0);
					__LIB_39__::func_794(&Local_231, 2, 0);
					__LIB_39__::func_794(&Local_231, 3, 0);
					if (!__LIB_0__::func_703(Local_231.f_44, 4))
					{
						__LIB_39__::func_780(&(Local_231.f_44), 4);
					}
					Local_231.f_116 = 1;
					__LIB_39__::func_822(&Local_231, 14);
				}
				break;
			case 14:
				if (!__LIB_39__::func_975(&Local_231))
				{
					func_134();
					__LIB_42__::func_702(&Local_231, 1);
					func_133();
					__LIB_39__::func_822(&Local_231, 22);
				}
				break;
			case 22:
				if (!bLocal_256)
				{
					if (Local_231.f_417 == 33 && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) < 1)
					{
						bLocal_256 = true;
						__LIB_39__::func_780(&(Local_231.f_44), 4);
						__LIB_2__::func_814(&iLocal_266);
						Local_330.f_27++;
					}
				}
				if (bLocal_256)
				{
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) > 0)
					{
						if (HUD::DOES_BLIP_EXIST(Local_231.f_9))
						{
							HUD::SET_BLIP_ROUTE(Local_231.f_9, false);
							HUD::REMOVE_BLIP(&(Local_231.f_9));
						}
					}
					else
					{
						__LIB_42__::func_702(&Local_231, 1);
					}
				}
				if (__LIB_0__::func_703(Local_231.f_44, 1) && bLocal_256)
				{
					__LIB_39__::func_851(&(Local_231.f_44), 1);
					if (bLocal_329)
					{
					}
				}
				if (!__LIB_0__::func_703(Local_231.f_82, 32768) && __LIB_39__::func_804(&Local_231) != 36)
				{
					if (__LIB_39__::func_803(&Local_231))
					{
						if (__LIB_40__::func_22(&Local_231))
						{
							if (__LIB_2__::func_485(Local_231.f_4, Local_231.f_17, 1) <= 300f)
							{
								if (!__LIB_0__::func_75())
								{
									__LIB_39__::func_970(&Local_231, 36, 1, 1, 0);
								}
								else
								{
									__LIB_0__::func_325();
								}
								if (iLocal_255 && !iLocal_258)
								{
									MISC::CLEAR_AREA(Local_231.f_17, 3f, false, false, false, false);
									iLocal_326 = PED::ADD_SCENARIO_BLOCKING_AREA(-1033.1877f, -2743.1797f, 19f, -1047.9482f, -2739.1797f, 20.20066f, false, true, true, true);
									iLocal_323[0] = PED::CREATE_PED(6, func_280(3), -1036.502f, -2742.9856f, 20.169693f, 0f, true, true);
									iLocal_323[1] = PED::CREATE_PED(6, func_280(3), -1043.7057f, -2739.2336f, 19.16969f, 0f, true, true);
									WEAPON::GIVE_WEAPON_TO_PED(iLocal_323[0], joaat("WEAPON_CARBINERIFLE"), -1, true, true);
									WEAPON::GIVE_WEAPON_TO_PED(iLocal_323[1], joaat("WEAPON_CARBINERIFLE"), -1, true, true);
									if (TASK::DOES_SCENARIO_EXIST_IN_AREA(-1036.502f, -2742.9856f, 20.169693f, 5f, true))
									{
										TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(iLocal_323[0], -1036.502f, -2742.9856f, 20.169693f, 2.5f, 0);
									}
									else
									{
										TASK::TASK_START_SCENARIO_IN_PLACE(iLocal_323[0], "WORLD_HUMAN_GUARD_STAND_ARMY", 0, false);
									}
									if (TASK::DOES_SCENARIO_EXIST_IN_AREA(-1043.7057f, -2739.2336f, 19.16969f, 5f, true))
									{
										TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(iLocal_323[1], -1043.7057f, -2739.2336f, 19.16969f, 2.5f, 0);
									}
									else
									{
										TASK::TASK_START_SCENARIO_IN_PLACE(iLocal_323[1], "WORLD_HUMAN_GUARD_STAND_ARMY", 0, false);
									}
									iLocal_258 = 1;
								}
							}
						}
					}
				}
				if (__LIB_43__::func_587(&Local_231, 1086324736, 1097859072, 1117782016))
				{
					Local_330.f_0 = 0;
					HUD::REMOVE_BLIP(&(Local_231.f_9));
					__LIB_39__::func_882(&Local_231);
					__LIB_40__::func_18(&Local_231);
					func_122();
					__LIB_39__::func_822(&Local_231, 27);
				}
				break;
			case 27:
				if (func_120() && !iLocal_257)
				{
					__LIB_39__::func_791(&Local_231, &iVar1);
					iLocal_244 = OBJECT::CREATE_OBJECT(joaat("p_banknote_s"), ENTITY::GET_ENTITY_COORDS(Local_231.f_3, true), true, true, false);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_244, Local_231.f_3, 57005, 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
					if (!PED::IS_PED_INJURED(Local_231.f_3) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						TASK::TASK_PLAY_ANIM(Local_231.f_3, "oddjobs@taxi@cyi", func_118(iVar1), 2f, -2f, -1, 0, 0f, false, false, false);
						TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "oddjobs@taxi@cyi", func_117(iVar1), 2f, -2f, -1, 0, 0f, false, false, false);
						ENTITY::PLAY_ENTITY_ANIM(iLocal_244, func_116(iVar1), "oddjobs@taxi@cyi", 1f, false, false, false, 0f, 0);
					}
					iLocal_257 = 1;
				}
				if (__LIB_39__::func_981(&Local_231, 1))
				{
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_245);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_245);
					TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
					TASK::TASK_CLEAR_LOOK_AT(0);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_231.f_29, 1f, 20000, 0.25f, 0, 40000f);
					TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_STAND_MOBILE", 0, true);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_245);
					TASK::TASK_PERFORM_SEQUENCE(Local_231.f_3, iLocal_245);
					PED::SET_PED_KEEP_TASK(Local_231.f_3, true);
					PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(Local_231.f_3, "MOVE_P_M_ZERO_RUCKSACK");
					__LIB_39__::func_822(&Local_231, 29);
				}
				break;
			case 29:
				if (__LIB_40__::func_26(&Local_231, &iLocal_313))
				{
					if (iLocal_255 || iLocal_265 == -1)
					{
						__LIB_39__::func_822(&Local_231, 28);
					}
					else
					{
						__LIB_39__::func_986(1, &Local_231, 1);
						__LIB_39__::func_822(&Local_231, 30);
					}
				}
				break;
			case 28:
				if (func_10())
				{
					__LIB_39__::func_986(1, &Local_231, 1);
					__LIB_39__::func_822(&Local_231, 30);
				}
				break;
			case 30:
				func_441();
				break;
			}
	}
}

int func_10()//Position - 0x1564
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	int iVar3;
	Var1 = { Var1 };
	if (iLocal_265 > 2)
	{
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	}
	switch (iLocal_265)
	{
		case -1:
			iLocal_265++;
			break;
		case 0:
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			PED::SET_CREATE_RANDOM_COPS(false);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 256);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1041.8997f, -2745.1133f, 20.3644f, 1.25f, 20000, 0.25f, 0, 40000f);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(Local_231.f_3, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			iLocal_327 = VEHICLE::CREATE_VEHICLE(func_280(4), -1067.1459f, -2579.6316f, 19.7762f, 150f, true, true, false);
			iLocal_324 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_327, 26, func_280(3), -1, true, true);
			__LIB_39__::func_859(&Local_231, 9, 0, 0);
			iLocal_265++;
			break;
		case 1:
			if (__LIB_39__::func_978(&Local_231, 9) > 0.5f)
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_231.f_3, false))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_323[0], false))
					{
						TASK::TASK_LOOK_AT_ENTITY(iLocal_323[0], Local_231.f_3, -1, 2049, 3);
						__LIB_0__::func_222(&(Local_231.f_244), 4, iLocal_323[0], "TaxiOJCop1", 0, 1);
						AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_323[0], "TaxiOJCop1");
					}
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_323[1], false))
					{
						TASK::TASK_LOOK_AT_ENTITY(iLocal_323[1], Local_231.f_3, -1, 2049, 3);
					}
				}
				iLocal_265++;
			}
			break;
		case 2:
			if ((!ENTITY::IS_ENTITY_DEAD(iLocal_323[0], false) && !ENTITY::IS_ENTITY_DEAD(iLocal_323[1], false)) && !ENTITY::IS_ENTITY_DEAD(Local_231.f_3, false))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_231.f_3, -1032.6752f, -2738.7751f, 19.169693f, -1041.5101f, -2733.6152f, 21.545042f, 2f, false, true, 0))
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, Local_231.f_3, Local_231.f_3, 1f, false, 4f, 4f, true, false, joaat("FIRING_PATTERN_FULL_AUTO"));
					TASK::TASK_AIM_GUN_AT_ENTITY(0, Local_231.f_3, -1, false);
					TASK::CLOSE_SEQUENCE_TASK(iVar0);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_323[0], iVar0);
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
					PED::SET_PED_KEEP_TASK(iLocal_323[0], true);
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_STAND_STILL(0, 1500);
					TASK::TASK_AIM_GUN_AT_ENTITY(0, Local_231.f_3, 2000, false);
					TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, Local_231.f_3, Local_231.f_3, 1f, false, 4f, 4f, true, false, joaat("FIRING_PATTERN_FULL_AUTO"));
					TASK::TASK_AIM_GUN_AT_ENTITY(0, Local_231.f_3, -1, false);
					TASK::CLOSE_SEQUENCE_TASK(iVar0);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_323[1], iVar0);
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
					PED::SET_PED_KEEP_TASK(iLocal_323[1], true);
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_323[0], 3);
					TASK::TASK_LOOK_AT_ENTITY(0, iLocal_323[0], -1, 2049, 3);
					TASK::TASK_STAND_STILL(0, 1000);
					TASK::TASK_HANDS_UP(0, -1, 0, -1, 0);
					TASK::CLOSE_SEQUENCE_TASK(iVar0);
					TASK::TASK_PERFORM_SEQUENCE(Local_231.f_3, iVar0);
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
					__LIB_39__::func_970(&Local_231, 54, 1, 0, 0);
					iLocal_267 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uLocal_325, -1);
					iVar2 = 0;
					while (iVar2 < iLocal_267)
					{
						if (((((uLocal_325[iVar2] != PLAYER::PLAYER_PED_ID() && uLocal_325[iVar2] != Local_231.f_3) && uLocal_325[iVar2] != iLocal_323[1]) && uLocal_325[iVar2] != iLocal_323[0]) && uLocal_325[iVar2] != iLocal_324) && !ENTITY::IS_ENTITY_A_MISSION_ENTITY(uLocal_325[iVar2]))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uLocal_325[iVar2], true, true);
							TASK::TASK_SMART_FLEE_PED(uLocal_325[iVar2], Local_231.f_3, 100f, -1, false, false);
						}
						iVar2++;
					}
					__LIB_39__::func_859(&Local_231, 9, 0, 0);
					iLocal_265++;
				}
			}
			break;
		case 3:
			if (__LIB_39__::func_978(&Local_231, 9) > 5f && !__LIB_0__::func_75())
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_328, joaat("COP"));
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("COP"), iLocal_328);
				WEAPON::GET_CURRENT_PED_WEAPON(Local_231.f_3, &iVar3, true);
				if (iVar3 == joaat("WEAPON_UNARMED"))
				{
					WEAPON::GIVE_WEAPON_TO_PED(Local_231.f_3, joaat("WEAPON_COMBATPISTOL"), -1, false, true);
				}
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_231.f_3, 13, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_231.f_3, 24, true);
				PED::SET_PED_COMBAT_MOVEMENT(Local_231.f_3, 2);
				PED::SET_PED_CAN_EVASIVE_DIVE(Local_231.f_3, true);
				PED::SET_PED_ACCURACY(Local_231.f_3, 80);
				TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_231.f_3, 50f, 0);
				__LIB_39__::func_859(&Local_231, 9, 0, 0);
				iLocal_265++;
			}
			if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_323[0], PLAYER::PLAYER_PED_ID(), true) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_323[1], PLAYER::PLAYER_PED_ID(), true)) && !PED::IS_PED_INJURED(Local_231.f_3))
			{
				TASK::TASK_SMART_FLEE_PED(Local_231.f_3, PLAYER::PLAYER_PED_ID(), 300f, -1, false, false);
				__LIB_39__::func_859(&Local_231, 9, 0, 0);
				iLocal_265++;
			}
			break;
		case 4:
			if (ENTITY::IS_ENTITY_DEAD(Local_231.f_3, false))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_323[0], false))
				{
					TASK::CLEAR_PED_TASKS(iLocal_323[0]);
					if (TASK::DOES_SCENARIO_EXIST_IN_AREA(-1036.502f, -2742.9856f, 20.169693f, 5f, true))
					{
						TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(iLocal_323[0], -1036.502f, -2742.9856f, 20.169693f, 1f, 0);
					}
					else
					{
						TASK::TASK_START_SCENARIO_IN_PLACE(iLocal_323[0], "WORLD_HUMAN_GUARD_STAND_ARMY", 0, false);
					}
					PED::SET_PED_KEEP_TASK(iLocal_323[0], true);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_323[1], false))
				{
					TASK::CLEAR_PED_TASKS(iLocal_323[1]);
					Var1 = { ENTITY::GET_ENTITY_COORDS(Local_231.f_3, false) };
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Var1, Var1, 1f, false, 3f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"));
					TASK::TASK_AIM_GUN_AT_COORD(0, Var1, 500, false, false);
					TASK::TASK_LOOK_AT_COORD(0, Var1, -1, 2049, 3);
					TASK::CLOSE_SEQUENCE_TASK(iVar0);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_323[1], iVar0);
					PED::SET_PED_KEEP_TASK(iLocal_323[0], true);
				}
				return 1;
			}
			else
			{
				if (__LIB_39__::func_978(&Local_231, 9) > 6f)
				{
					__LIB_39__::func_970(&Local_231, 140, 1, 0, 1);
					__LIB_39__::func_859(&Local_231, 9, 0, 0);
				}
				if (ENTITY::IS_ENTITY_DEAD(iLocal_323[0], false) && ENTITY::IS_ENTITY_DEAD(iLocal_323[1], false))
				{
					TASK::CLEAR_PED_TASKS(Local_231.f_3);
					TASK::TASK_SMART_FLEE_PED(Local_231.f_3, PLAYER::PLAYER_PED_ID(), 300f, -1, false, false);
				}
				if (__LIB_14__::func_556(Local_231.f_3, 1) > 50f)
				{
					return 1;
				}
			}
			__LIB_39__::func_859(&Local_231, 9, 0, 0);
			iLocal_265++;
			break;
		case 5:
			if (__LIB_39__::func_978(&Local_231, 9) > 2f)
			{
				__LIB_39__::func_859(&Local_231, 9, 0, 0);
				iLocal_265++;
			}
			break;
		case 6:
			if (__LIB_39__::func_978(&Local_231, 9) > 2f)
			{
				Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_327, func_11(5)) };
				__LIB_39__::func_859(&Local_231, 9, 0, 0);
				iLocal_265++;
			}
			break;
		case 7:
			if (__LIB_39__::func_978(&Local_231, 9) >= 1f)
			{
				iLocal_265++;
			}
			break;
		case 8:
			iLocal_265++;
			break;
		case 9:
			return 1;
			break;
	}
	return 0;
}

Vector3 func_11(int iParam0)//Position - 0x1C7F
{
	struct<3> Var0;
	switch (iParam0)
	{
		case 0:
			Var0 = { -1040.4861f, -2726.0576f, 21.4491f };
			break;
		case 4:
			Var0 = { -1044.8472f, -2726.239f, 20.2197f };
			break;
		case 6:
			Var0 = { -1045.2518f, -2733.1543f, 23.9084f };
			break;
		case 5:
			Var0 = { -1053.6528f, -2720.4998f, 20.1615f };
			break;
		case 1:
			Var0 = { -1042.0082f, -2729.2322f, 21.2022f };
			break;
		case 2:
			Var0 = { -1049.7991f, -2725.0686f, 20.7481f };
			break;
		case 3:
			Var0 = { -1043.8876f, -2723.7827f, 20.6874f };
			break;
		case 7:
			Var0 = { -1041.9169f, -2746.2385f, 22.2494f };
			break;
		case 8:
			Var0 = { -1041.8114f, -2739.3528f, 21.2173f };
			break;
	}
	return Var0;
}

char* func_116(int iParam0)//Position - 0x4D80
{
	switch (iParam0)
	{
		case 0:
			return "std_hand_off_ps_money";
		case 2:
			return "std_hand_off_rps_money";
		case 1:
			return "std_hand_off_rds_money";
		default:
	}
	return "";
}

char* func_117(int iParam0)//Position - 0x4DBA
{
	switch (iParam0)
	{
		case 0:
			return "std_hand_off_ps_driver";
		case 2:
			return "std_hand_off_rps_driver";
		case 1:
			return "std_hand_off_rds_driver";
		default:
	}
	return "";
}

char* func_118(int iParam0)//Position - 0x4DF4
{
	switch (iParam0)
	{
		case 0:
			return "std_hand_off_ps_passenger";
		case 2:
			return "std_hand_off_rps_passenger";
		case 1:
			return "std_hand_off_rds_passenger";
		default:
	}
	return "";
}

int func_120()//Position - 0x4EA3
{
	Local_305 = { __LIB_13__::func_743() };
	if ((((((((MISC::ARE_STRINGS_EQUAL(&cLocal_269, &Local_305) || MISC::ARE_STRINGS_EQUAL(&cLocal_273, &Local_305)) || MISC::ARE_STRINGS_EQUAL(&cLocal_277, &Local_305)) || MISC::ARE_STRINGS_EQUAL(&cLocal_281, &Local_305)) || MISC::ARE_STRINGS_EQUAL(&cLocal_285, &Local_305)) || MISC::ARE_STRINGS_EQUAL(&cLocal_289, &Local_305)) || MISC::ARE_STRINGS_EQUAL(&cLocal_293, &Local_305)) || MISC::ARE_STRINGS_EQUAL(&cLocal_297, &Local_305)) || MISC::ARE_STRINGS_EQUAL(&cLocal_301, &Local_305))
	{
		return 1;
	}
	return 0;
}

void func_122()//Position - 0x4F8C
{
	if (Local_231.f_56 >= Local_231.f_59)
	{
		Local_231.f_56 = 10000;
	}
	else if (Local_231.f_56 <= 0)
	{
		Local_231.f_56 = 0;
	}
	else
	{
		Local_231.f_56 = 5000;
	}
}

void func_133()//Position - 0x5189
{
	STREAMING::REQUEST_ANIM_DICT("oddjobs@taxi@cyi");
	STREAMING::REQUEST_MODEL(joaat("p_banknote_s"));
}

void func_134()//Position - 0x51A2
{
	if (__LIB_39__::func_978(&Local_231, 7) < 75f && !iLocal_255)
	{
		Local_231.f_57 += 12;
		__LIB_39__::func_970(&Local_231, 30, 1, 0, 1);
	}
	else if (__LIB_39__::func_978(&Local_231, 7) > 150f || iLocal_255)
	{
		Local_231.f_57 = -10;
		__LIB_39__::func_970(&Local_231, 32, 1, 0, 1);
		iLocal_255 = 1;
		func_135();
	}
	else
	{
		Local_231.f_57 += 5;
		__LIB_39__::func_970(&Local_231, 31, 1, 0, 1);
	}
}

void func_135()//Position - 0x5230
{
	STREAMING::REQUEST_MODEL(func_280(3));
	STREAMING::REQUEST_MODEL(func_280(4));
	VEHICLE::REQUEST_VEHICLE_RECORDING(0, func_136(1));
}

char* func_136(int iParam0)//Position - 0x5254
{
	char* sVar0;
	switch (iParam0)
	{
		case 1:
			sVar0 = "txm8_pol1_A";
			break;
	}
	return sVar0;
}

void func_167()//Position - 0x5E2B
{
	if (bLocal_329)
	{
		__LIB_39__::func_778("TAXI_CYI_HANDLE_PLAYER_NEAR_JEWELRY_STORE", &iLocal_262, 1000);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_231.f_3, false))
	{
		switch (iLocal_374)
		{
			case 0:
				if (__LIB_2__::func_485(Local_231.f_3, Local_246, 1) < 16f)
				{
					iLocal_374 = 1;
				}
				break;
			case 1:
				if (__LIB_14__::func_556(Local_231.f_3, 1) < 10f)
				{
					WEAPON::GIVE_WEAPON_TO_PED(Local_231.f_3, joaat("WEAPON_COMBATPISTOL"), 50, true, true);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_245);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_245);
					TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_245);
					TASK::TASK_PERFORM_SEQUENCE(Local_231.f_3, iLocal_245);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_245);
					__LIB_39__::func_859(&Local_231, 12, 0, 0);
					iLocal_374 = 2;
				}
				break;
			case 2:
				if (__LIB_39__::func_978(&Local_231, 12) > 1.5f)
				{
					if (iLocal_375 != 5)
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_231.f_2, false))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_231.f_4, false))
							{
								if (PED::IS_PED_IN_VEHICLE(Local_231.f_2, Local_231.f_4, false))
								{
									__LIB_39__::func_970(&Local_231, 56, 1, 0, 0);
								}
								else
								{
									__LIB_39__::func_970(&Local_231, 55, 1, 1, 0);
								}
							}
						}
						iLocal_259 = 0;
						iLocal_253 = 1;
						__LIB_39__::func_859(&Local_231, 12, 0, 0);
						__LIB_39__::func_853(&Local_231, 6);
						iLocal_374 = 3;
					}
					else
					{
						__LIB_39__::func_794(&Local_231, 12, 0);
						iLocal_374 = 9;
					}
				}
				break;
			case 3:
				if (__LIB_14__::func_556(Local_231.f_3, 1) >= 10f)
				{
					iLocal_374 = 5;
				}
				else if (iLocal_260)
				{
					if (!__LIB_0__::func_75() && !AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						if (!iLocal_259)
						{
							__LIB_39__::func_859(&Local_231, 12, 0, 0);
							iLocal_259 = 1;
						}
						else if (__LIB_39__::func_978(&Local_231, 12) > 5f)
						{
							__LIB_39__::func_794(&Local_231, 12, 0);
							iLocal_374 = 9;
						}
					}
				}
				else if (!iLocal_260)
				{
					if (__LIB_17__::func_160("txm8_lvMe1") || __LIB_17__::func_160("txm8_lvMe2"))
					{
						iLocal_260 = 1;
					}
				}
				break;
			case 5:
				func_168(&Local_231, 6);
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_231.f_3, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 7)
				{
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_245);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_245);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_246, 1f, 40000, 0.25f, 0, 40000f);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 337.3356f, -997.7456f, 28.1318f, 3f, 40000, 0.25f, 0, 40000f);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_247, 3f, 40000, 0.25f, 0, 40000f);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_245);
					TASK::TASK_PERFORM_SEQUENCE(Local_231.f_3, iLocal_245);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_245);
					iLocal_375 = 5;
					iLocal_374 = 0;
				}
				break;
			case 9:
				if (__LIB_39__::func_793(&Local_231, 12))
				{
					if (__LIB_39__::func_978(&Local_231, 12) > 2f)
					{
						__LIB_39__::func_859(&Local_231, 6, 0, 0);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_245);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_245);
						TASK::TASK_SHOOT_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, joaat("FIRING_PATTERN_FULL_AUTO"));
						TASK::CLOSE_SEQUENCE_TASK(iLocal_245);
						TASK::TASK_PERFORM_SEQUENCE(Local_231.f_3, iLocal_245);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_245);
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, Local_231.f_413, joaat("PLAYER"));
						PED::SET_PED_KEEP_TASK(Local_231.f_3, true);
						bLocal_254 = true;
						if (HUD::DOES_BLIP_EXIST(Local_231.f_9) && HUD::GET_BLIP_ALPHA(Local_231.f_9) > 0)
						{
							HUD::SET_BLIP_ALPHA(Local_231.f_9, 0);
							HUD::SET_BLIP_ROUTE(Local_231.f_9, false);
							HUD::CLEAR_THIS_PRINT("TAXI_OBJ_CYI_1B");
						}
						iLocal_374 = 10;
					}
				}
				else
				{
					__LIB_39__::func_859(&Local_231, 12, 0, 0);
					if (!ENTITY::IS_ENTITY_DEAD(Local_231.f_2, false))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_231.f_4, false))
						{
							if (PED::IS_PED_IN_VEHICLE(Local_231.f_2, Local_231.f_4, false))
							{
								__LIB_39__::func_970(&Local_231, 56, 1, 0, 0);
							}
							else
							{
								__LIB_39__::func_970(&Local_231, 55, 1, 1, 0);
							}
						}
					}
				}
				break;
			case 10:
				if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING() && __LIB_39__::func_978(&Local_231, 6) > 2f)
				{
					__LIB_39__::func_973(&Local_231, "Passenger shoots player", 9);
				}
				break;
			}
	}
}

void func_168(var uParam0, int iParam1)//Position - 0x6212
{
	if (__LIB_0__::func_702(&(uParam0->f_146[iParam1 /*3*/])))
	{
		if (__LIB_0__::func_701(&(uParam0->f_146[iParam1 /*3*/])))
		{
			__LIB_30__::func_388(&(uParam0->f_146[iParam1 /*3*/]));
		}
	}
}

void func_209()//Position - 0x7237
{
	__LIB_39__::func_780(&(Local_231.f_55), 2);
	__LIB_39__::func_780(&(Local_231.f_55), 4);
	__LIB_39__::func_780(&(Local_231.f_55), 16);
	__LIB_39__::func_780(&(Local_231.f_55), 64);
	__LIB_39__::func_780(&(Local_231.f_55), 256);
	__LIB_39__::func_780(&(Local_231.f_55), 512);
	__LIB_39__::func_780(&(Local_231.f_55), 1024);
	__LIB_39__::func_780(&(Local_231.f_55), 2048);
	__LIB_39__::func_780(&(Local_231.f_55), 4096);
	__LIB_39__::func_780(&(Local_231.f_100), 8);
	__LIB_39__::func_780(&(Local_231.f_100), 2048);
	__LIB_39__::func_780(&(Local_231.f_100), 256);
	__LIB_39__::func_780(&uLocal_306, 2);
}

Vector3 func_215(int iParam0)//Position - 0x73F1
{
	switch (iParam0)
	{
		case -1:
			return 335.4227f, -956.4223f, 28.3588f;
			break;
		case 0:
			return 349.926f, -958.3827f, 28.3033f;
			break;
		case 1:
			return -1020.5814f, -2743.842f, 18.4049f;
			break;
		case 2:
			return -1043.9473f, -2748.6826f, 20.3594f;
			break;
		case 3:
			return -1042.3907f, -2731.6443f, 19.1701f;
			break;
		case 4:
			return -1045.6769f, -2730.1091f, 19.1701f;
			break;
		case 5:
			return -1032.2947f, -2731.4495f, 19.0458f;
			break;
		case 6:
			return -1051.0447f, -2722.9338f, 19.1693f;
			break;
		case 7:
			return -1052.9054f, -2723.3755f, 19.1693f;
			break;
		case 8:
			return -1042.8121f, -2743.0955f, 20.362f;
			break;
		default:
			return 354.5381f, -947.7332f, 28.359f;
			break;
	}
	return __LIB_0__::func_613();
}

void func_252()//Position - 0x9412
{
	Local_165.f_0 = 0;
	__LIB_39__::func_818(38853/*__LIB_39__::func_819*/, 38828/*__LIB_39__::func_993*/, 1);
	__LIB_39__::func_818(38589/*__LIB_39__::func_887*/, 38566/*__LIB_39__::func_992*/, 1);
	__LIB_39__::func_818(38504/*__LIB_39__::func_816*/, 38479/*__LIB_39__::func_991*/, 1);
	__LIB_39__::func_818(38407/*__LIB_39__::func_815*/, 38383/*__LIB_39__::func_990*/, 1);
	__LIB_39__::func_818(38273/*__LIB_40__::func_1*/, 38252/*__LIB_39__::func_873*/, 1);
	__LIB_39__::func_818(38199/*__LIB_39__::func_858*/, 38174/*__LIB_39__::func_989*/, 1);
	__LIB_39__::func_818(38032/*__LIB_39__::func_886*/, 38009/*__LIB_39__::func_988*/, 1);
}

int func_273()//Position - 0x99DD
{
	if (!__LIB_39__::func_821(&iLocal_262, 1))
	{
		__LIB_39__::func_778("TAXI_ASSETS_STREAMED - Loading shared assets", &iLocal_262, 1000);
		return 0;
	}
	if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_313))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(func_280(0)))
	{
		__LIB_39__::func_778("TAXI_ASSETS_STREAMED - Loading U_M_M_JewelThief", &iLocal_262, 1000);
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("MOVE_P_M_ZERO_RUCKSACK"))
	{
		__LIB_39__::func_778("TAXI_ASSETS_STREAMED - Loading MOVE_P_M_ZERO_RUCKSACK", &iLocal_262, 1000);
		return 0;
	}
	return 1;
}

int func_280(int iParam0)//Position - 0x9EFD
{
	int iVar0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("U_M_M_JewelThief");
			break;
		case 1:
			iVar0 = joaat("manana");
			break;
		case 2:
			iVar0 = joaat("issi2");
			break;
		case 3:
			iVar0 = joaat("S_M_Y_Cop_01");
			break;
		case 4:
			iVar0 = joaat("police2");
			break;
		default:
			iVar0 = joaat("U_M_M_JewelThief");
			break;
	}
	return iVar0;
}

void func_282()//Position - 0x9FDA
{
	__LIB_39__::func_860(1);
	STREAMING::REQUEST_MODEL(func_280(0));
	iLocal_313 = __LIB_2__::func_214();
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("Alarms", false, -1);
	STREAMING::REQUEST_ANIM_DICT("MOVE_P_M_ZERO_RUCKSACK");
}

void func_355()//Position - 0xD44C
{
	__LIB_39__::func_976(&Local_231);
	if (__LIB_39__::func_965(&Local_231, &Local_330))
	{
		switch (Local_330.f_27)
		{
			case 0:
				if (Local_231.f_410 == 9)
				{
					if (!__LIB_39__::func_975(&Local_231))
					{
						if (__LIB_39__::func_839("TX_OBJ_CYI_DO") || HUD::DOES_BLIP_EXIST(Local_231.f_9))
						{
							Local_330.f_27++;
						}
						else if (__LIB_39__::func_804(&Local_231) != 10)
						{
							__LIB_39__::func_970(&Local_231, 10, 1, 0, 1);
						}
					}
				}
				break;
			case 1:
				if ((__LIB_39__::func_804(&Local_231) > 10 && __LIB_39__::func_804(&Local_231) != 15) && !__LIB_39__::func_975(&Local_231))
				{
					__LIB_39__::func_970(&Local_231, 15, 1, 0, 0);
					__LIB_39__::func_855(&Local_231, 7);
				}
				break;
			case 2:
				if (__LIB_39__::func_978(&Local_231, 18) > 2f)
				{
					__LIB_39__::func_970(&Local_231, 16, 1, 0, 0);
				}
				break;
			case 3:
				if (__LIB_39__::func_978(&Local_231, 18) > 2f)
				{
					__LIB_39__::func_970(&Local_231, 17, 1, 0, 0);
				}
				break;
			case 5:
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) < 1)
				{
					if ((((__LIB_39__::func_804(&Local_231) != 33 && !__LIB_39__::func_838(&Local_231)) && !__LIB_39__::func_975(&Local_231)) && !bLocal_256) && Local_231.f_410 > 9)
					{
						if (__LIB_39__::func_978(&Local_231, 18) > 2f)
						{
							__LIB_39__::func_970(&Local_231, 33, 1, 0, 1);
							__LIB_39__::func_859(&Local_231, 16, 4f, 0);
							if (bLocal_329)
							{
							}
						}
					}
					else
					{
						if (__LIB_39__::func_804(&Local_231) != 33)
						{
						}
						if (!__LIB_39__::func_838(&Local_231))
						{
						}
						if (!__LIB_39__::func_975(&Local_231))
						{
						}
						if (!bLocal_256)
						{
						}
						if (Local_231.f_410 > 9)
						{
						}
					}
				}
				break;
			case 6:
				if (((__LIB_39__::func_978(&Local_231, 16) > 4f && __LIB_39__::func_804(&Local_231) != 34) && !__LIB_39__::func_975(&Local_231)) && !__LIB_39__::func_838(&Local_231))
				{
					__LIB_39__::func_970(&Local_231, 34, 1, 0, 0);
					if (bLocal_329)
					{
					}
				}
				break;
			case 7:
				Local_330.f_27++;
				break;
			}
	}
	__LIB_42__::func_724(&Local_231, &uLocal_333, &Local_330, bLocal_329);
}

void func_424()//Position - 0x1343A
{
	__LIB_40__::func_14(&Local_231);
	func_441();
}

void func_428(int iParam0)//Position - 0x1358C
{
	__LIB_42__::func_720(&Local_231, iParam0);
	Local_231.f_410 = 0;
	__LIB_39__::func_843(&Local_231, 2, 8);
	Local_231.f_23 = { -1069.2772f, -2666.1558f, 12.665f };
	Local_231.f_33 = 202.9f;
	Local_231.f_26 = { 323.9376f, -956.7155f, 28.346f };
	Local_231.f_34 = 262.6098f;
	Local_231.f_29 = { -1037.7112f, -2748.4631f, 20.3642f };
}

void func_441()//Position - 0x13B62
{
	int iVar0;
	__LIB_39__::func_806(func_215(-1), 1, 1114636288);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_323[iVar0], false))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_323[iVar0]));
		}
		iVar0++;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_280(0));
	__LIB_2__::func_814(&iLocal_266);
	AUDIO::DISTANT_COP_CAR_SIRENS(false);
	PED::SET_CREATE_RANDOM_COPS(true);
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	AUDIO::STOP_AUDIO_SCENE("TAXI_CUT_U_IN");
	STREAMING::REMOVE_ANIM_DICT("MOVE_P_M_ZERO_RUCKSACK");
	__LIB_0__::func_467();
	func_442();
	__LIB_0__::func_345(&uLocal_45, 0, 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_326, false);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_244))
	{
		OBJECT::DELETE_OBJECT(&iLocal_244);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_442()//Position - 0x13C01
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_280(3));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_280(4));
	VEHICLE::REMOVE_VEHICLE_RECORDING(0, func_136(1));
}

