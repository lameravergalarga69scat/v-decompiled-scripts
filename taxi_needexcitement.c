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
	int iLocal_85 = 0;
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
	struct<411> Local_230 = { 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = -1;
	var uLocal_239 = -1;
	var uLocal_240 = -1;
	var uLocal_241 = -1;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	int iLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	struct<3> Local_258[1];
	int iLocal_259 = 0;
	struct<3> Local_260 = { 0, 0, 0 } ;
	struct<3> Local_261 = { 0, 0, 0 } ;
	struct<3> Local_262 = { 0, 0, 0 } ;
	int iLocal_263 = 0;
	var uLocal_264 = 0;
	bool bLocal_265 = 0;
	int iLocal_266 = 0;
	bool bLocal_267 = 0;
	struct<28> Local_268 = { -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 5;
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
	var uLocal_314 = 1097859072;
	var uLocal_315 = 1500;
	var uLocal_316 = 45;
	var uLocal_317 = 1103626240;
	var uLocal_318 = 5;
	int* iLocal_319 = NULL;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	int iLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
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
	iLocal_259 = joaat("A_M_Y_Skater_02");
	Local_260 = { -496.0739f, -336.6628f, 33.5017f };
	Local_261 = { -484.6879f, -330.1646f, 33.3534f };
	Local_262 = { 725.3476f, 1204.526f, 324.9057f };
	iLocal_263 = 1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(67))
	{
		__LIB_30__.func_728(2);
		func_427();
	}
	MISC::SET_MISSION_FLAG(true);
	func_414(0);
	while (true)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_230.f_2))
		{
			func_9();
		}
		else
		{
			__LIB_40__.func_780(&Local_230);
		}
		SYSTEM::WAIT(0);
	}
}

void func_9()//Position - 0x324
{
	if (__LIB_31__.func_419(&Local_230))
	{
		__LIB_31__.func_365(&Local_230);
		if (Local_230.f_410 > 0)
		{
			if (__LIB_37__.func_681(&Local_230, 0))
			{
				func_409();
			}
		}
		else if (__LIB_35__.func_388(&Local_230, 31) > 5f)
		{
			__LIB_30__.func_728(2);
			func_427();
		}
	}
	else
	{
		__LIB_35__.func_352(&Local_230);
		if (Local_230.f_410 <= 9)
		{
			__LIB_42__.func_587(&Local_230, &uLocal_312);
			__LIB_42__.func_42(&Local_230);
		}
		__LIB_31__.func_418(&Local_230, &uLocal_264, 0);
		if (Local_230.f_410 > 2)
		{
			if (!__LIB_31__.func_417(&Local_230))
			{
				func_339();
			}
			else
			{
				__LIB_42__.func_41(&Local_230, "Taxi Not Driveable", __LIB_31__.func_407(&Local_230));
			}
		}
		if (Local_230.f_410 == 9)
		{
			if (Local_230.f_139)
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_230.f_4, false) && __LIB_1__.func_844(Local_230.f_4, Local_230.f_17, 1) > 450f)
				{
					__LIB_41__.func_500(&Local_230, 0, 0);
				}
				else
				{
					__LIB_41__.func_500(&Local_230, 0, 1);
				}
			}
		}
		switch (Local_230.f_410)
		{
			case 0:
				__LIB_31__.func_390(&(Local_258[0 /*3*/]), "TAXI_SC_BN_02", 200);
				__LIB_31__.func_389(&Local_230, &Local_258);
				func_303();
				__LIB_35__.func_334(&Local_230, 16, 4f, 0);
				__LIB_35__.func_357(&Local_230, Local_260, Local_261, "TaxiFelipe", iLocal_259, 256f, 30f);
				__LIB_35__.func_370(&Local_230);
				__LIB_31__.func_399(&Local_230, 1);
				break;
			case 1:
				if (func_295())
				{
					__LIB_31__.func_398();
					func_274();
					__LIB_31__.func_388(&Local_230);
					Local_230.f_14 = { Local_260 };
					__LIB_31__.func_399(&Local_230, 3);
				}
				break;
			case 3:
				if (__LIB_42__.func_378(&Local_230, 1))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_230.f_3, false))
					{
						PED::SET_PED_CONFIG_FLAG(Local_230.f_3, 29, false);
						PED::SET_PED_COMPONENT_VARIATION(Local_230.f_3, 3, 1, 1, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_230.f_3, 4, 1, 2, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_230.f_3, 0, 0, 1, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_230.f_3, 11, 1, 0, 0);
					}
					__LIB_37__.func_675(&Local_230, 1, 0);
					__LIB_31__.func_399(&Local_230, 5);
				}
				break;
			case 5:
				if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_230.f_4, -484.92175f, -370.1231f, 33.408054f, -517.90894f, -362.78995f, 37.31326f, 28.75f, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_230.f_4, -472.05884f, -321.03604f, 33.353264f, -485.47897f, -285.4217f, 37.492317f, 28.75f, false, true, 0))
				{
					if (func_237(&Local_230, 0, 30f))
					{
						__LIB_31__.func_399(&Local_230, 15);
					}
				}
				break;
			case 15:
				if (__LIB_31__.func_427(&Local_230))
				{
					Local_230.f_17 = { Local_262 };
					bLocal_265 = true;
					__LIB_39__.func_641(&Local_230, 9, 1, 0, 0);
					__LIB_31__.func_426(&Local_230);
					Local_230.f_46 = ENTITY::GET_ENTITY_HEALTH(Local_230.f_4);
					__LIB_31__.func_399(&Local_230, 7);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_230.f_4, false))
				{
					if (!PED::IS_PED_IN_VEHICLE(Local_230.f_2, Local_230.f_4, false))
					{
						__LIB_35__.func_390(&Local_230);
						__LIB_31__.func_399(&Local_230, 5);
					}
				}
				break;
			case 7:
				if (bLocal_265)
				{
					func_228();
					__LIB_31__.func_399(&Local_230, 9);
				}
				break;
			case 9:
				if (((__LIB_1__.func_844(Local_230.f_4, Local_230.f_17, 1) < 875f && __LIB_31__.func_383(&Local_230) != 68) && !__LIB_0__.func_75()) && !iLocal_266)
				{
					__LIB_31__.func_446(&(Local_230.f_100), 16384);
					__LIB_39__.func_641(&Local_230, 68, 1, 0, 1);
					SYSTEM::SETTIMERA(0);
					iLocal_266 = 1;
				}
				if (__LIB_0__.func_517(Local_230.f_81, 67108864))
				{
					if (!__LIB_31__.func_378(&Local_230))
					{
					}
				}
				if (func_185(&Local_230, 9f, 7.5f))
				{
					HUD::REMOVE_BLIP(&(Local_230.f_9));
					__LIB_0__.func_296();
					__LIB_31__.func_381(&Local_268, -1, 1);
					if (Local_230.f_76 >= 95)
					{
						__LIB_31__.func_374(&Local_230, 0);
					}
					__LIB_35__.func_355(&Local_230);
					__LIB_40__.func_793(&Local_230);
					if (Local_230.f_56 < Local_230.f_58)
					{
						__LIB_31__.func_399(&Local_230, 28);
					}
					else
					{
						TASK::TASK_LOOK_AT_ENTITY(Local_230.f_3, PLAYER::PLAYER_PED_ID(), -1, 2049, 3);
						TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_230.f_3, -1, 2049, 3);
						__LIB_31__.func_399(&Local_230, 27);
					}
					__LIB_35__.func_394(&Local_230);
				}
				break;
			case 27:
				if (__LIB_39__.func_640(&Local_230, 1))
				{
					TASK::TASK_CLEAR_LOOK_AT(Local_230.f_3);
					TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
					__LIB_31__.func_405(&Local_230);
					__LIB_31__.func_399(&Local_230, 29);
				}
				break;
			case 28:
				if (iLocal_250 == 2 && !__LIB_31__.func_454(Local_230.f_2, Local_230.f_3))
				{
					if (!__LIB_0__.func_516(&iLocal_319))
					{
						__LIB_6__.func_892(&iLocal_319);
					}
					else if (__LIB_31__.func_353(&iLocal_319) > 5f)
					{
						__LIB_39__.func_641(&Local_230, 106, 1, 0, 1);
						__LIB_6__.func_892(&iLocal_319);
					}
				}
				if (func_121(&iLocal_250, &Local_230, &(Local_230.f_3), &uLocal_251, 1))
				{
					if (!PED::IS_PED_INJURED(Local_230.f_3))
					{
						__LIB_35__.func_536(&(Local_230.f_244), Local_230.f_144, "txm2_runoff", 9, 0, 0, 0);
					}
					__LIB_31__.func_399(&Local_230, 29);
				}
				break;
			case 29:
				if (__LIB_42__.func_799(&Local_230, &iLocal_322))
				{
					if (!__LIB_0__.func_75())
					{
						__LIB_42__.func_376(1, &Local_230, 1);
						__LIB_31__.func_399(&Local_230, 30);
					}
				}
				break;
			case 30:
				func_427();
				break;
			}
	}
}

int func_121(int iParam0, var uParam1, int* iParam2, var uParam3, bool bParam4)//Position - 0x3F60
{
	int iVar0;
	switch (*iParam0)
	{
		case 0:
			if (!ENTITY::IS_ENTITY_DEAD(*iParam2, false))
			{
				__LIB_35__.func_347(uParam1, 320, bParam4);
				PED::SET_PED_MONEY(*iParam2, MISC::GET_RANDOM_INT_IN_RANGE(100, 300));
				__LIB_35__.func_389(uParam1, iParam2, "TAXI_BLIP_PASS" /* GXT: Passenger */, 1);
				__LIB_35__.func_327(13, 0);
				*iParam0 = 1;
			}
			else
			{
				*iParam0 = 5;
			}
			break;
		case 1:
			if (!ENTITY::IS_ENTITY_DEAD(*iParam2, false))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(*iParam2, false))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0);
					*iParam0 = 2;
				}
			}
			else
			{
				*iParam0 = 2;
			}
			break;
		case 2:
			if (!ENTITY::IS_ENTITY_DEAD(*iParam2, false))
			{
				__LIB_40__.func_938(&uLocal_45, *iParam2, 0, 0, 1, 1, 1);
				if (!__LIB_31__.func_454(uParam1->f_2, *iParam2))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam1->f_4, false))
					{
						if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(*iParam2, uParam1->f_4, true))
						{
							*iParam0 = 3;
						}
					}
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(*iParam2, uParam1->f_2, true))
					{
						*iParam0 = 3;
					}
					if (*iParam0 != 3)
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(uParam1->f_2, false))
						{
							if (ENTITY::IS_ENTITY_AT_ENTITY(uParam1->f_2, *iParam2, 20f, 20f, 10f, false, true, 0))
							{
								if (PED::IS_PED_SHOOTING(uParam1->f_2))
								{
									*iParam0 = 3;
								}
								else
								{
									if (ENTITY::IS_ENTITY_AT_ENTITY(uParam1->f_2, *iParam2, 2f, 2f, 10f, false, true, 0))
									{
										*iParam0 = 3;
									}
									if (WEAPON::IS_PED_ARMED(uParam1->f_2, 6))
									{
										if (CAM::IS_AIM_CAM_ACTIVE())
										{
											*iParam0 = 3;
										}
									}
								}
							}
							else if (ENTITY::IS_ENTITY_AT_ENTITY(uParam1->f_2, *iParam2, 50f, 50f, 10f, false, true, 0))
							{
								if (PED::IS_PED_SHOOTING(uParam1->f_2))
								{
									*iParam0 = 3;
								}
							}
						}
						else if (ENTITY::IS_ENTITY_AT_ENTITY(uParam1->f_2, *iParam2, 50f, 50f, 25f, false, true, 0))
						{
							if (PED::IS_PED_SHOOTING(uParam1->f_2))
							{
								*iParam0 = 3;
							}
						}
					}
				}
				else
				{
					__LIB_9__.func_981(&uLocal_45, 0, 0);
					uParam1->f_109 = 1;
					*iParam0 = 5;
				}
			}
			else
			{
				__LIB_9__.func_981(&uLocal_45, 0, 0);
				*iParam0 = 5;
			}
			break;
		case 3:
			__LIB_9__.func_981(&uLocal_45, 0, 0);
			if (!ENTITY::IS_ENTITY_DEAD(*iParam2, false))
			{
				if (HUD::DOES_BLIP_EXIST(uParam1->f_8))
				{
					HUD::REMOVE_BLIP(&(uParam1->f_8));
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam2, true);
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_COWER(0, 5000);
				TASK::TASK_SMART_FLEE_PED(0, uParam1->f_2, 1000f, -1, false, false);
				TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::TASK_PERFORM_SEQUENCE(*iParam2, iVar0);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
				PED::SET_PED_KEEP_TASK(*iParam2, true);
				__LIB_39__.func_641(uParam1, 109, 1, 0, 0);
				*iParam0 = 4;
				HUD::CLEAR_PRINTS();
			}
			else
			{
				*iParam0 = 4;
				HUD::CLEAR_PRINTS();
			}
			if (HUD::DOES_BLIP_EXIST(uParam1->f_8))
			{
				HUD::REMOVE_BLIP(&(uParam1->f_8));
			}
			__LIB_37__.func_682(*iParam2, uParam3, 1, -1);
			break;
		case 4:
			if (OBJECT::HAS_PICKUP_BEEN_COLLECTED(uParam3->f_6))
			{
				if (HUD::DOES_BLIP_EXIST(uParam3->f_5))
				{
					HUD::REMOVE_BLIP(&(uParam3->f_5));
				}
				__LIB_35__.func_355(uParam1);
				__LIB_35__.func_327(14, 0);
				uParam1->f_56 = 0;
				*iParam0 = 5;
			}
			break;
		case 5:
			if (!ENTITY::IS_ENTITY_DEAD(*iParam2, false))
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam2);
				if (HUD::DOES_BLIP_EXIST(uParam1->f_8))
				{
					HUD::REMOVE_BLIP(&(uParam1->f_8));
				}
			}
			else
			{
				PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::GET_PLAYER_INDEX(), 2, false);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::GET_PLAYER_INDEX(), false);
			}
			return 1;
			break;
	}
	return 0;
}

int func_185(var uParam0, float fParam1, float fParam2)//Position - 0x60EE
{
	if ((((CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN()) && !CAM::IS_SCREEN_FADING_OUT()) && !CAM::IS_SCREEN_FADED_OUT()) && !uParam0->f_142)
	{
		if (func_206(uParam0))
		{
			__LIB_31__.func_375(uParam0, &(uParam0->f_43));
			__LIB_42__.func_377(uParam0);
			func_198(uParam0);
			__LIB_42__.func_586(uParam0, fParam2, 1117782016);
			__LIB_40__.func_790(uParam0);
			__LIB_40__.func_789(uParam0);
			if ((SYSTEM::ROUND(__LIB_35__.func_388(uParam0, 7)) % 5) == 0 && !iLocal_85)
			{
				iLocal_85 = 1;
			}
			if ((SYSTEM::ROUND(__LIB_35__.func_388(uParam0, 7)) % 5) == 2 && iLocal_85)
			{
				iLocal_85 = 0;
			}
			return __LIB_37__.func_672(uParam0, fParam1);
		}
	}
	return 0;
}

void func_198(var uParam0)//Position - 0x66DF
{
	if (!__LIB_0__.func_517(uParam0->f_44, 1))
	{
		switch (uParam0->f_412)
		{
			case 0:
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) >= 1)
				{
					if (__LIB_35__.func_388(uParam0, 9) > 1f)
					{
						__LIB_31__.func_380(uParam0, PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()));
						if (uParam0->f_410 != 22)
						{
							__LIB_39__.func_641(uParam0, 50, 1, 1, 0);
						}
						__LIB_35__.func_334(uParam0, 9, 0, 0);
						if (HUD::DOES_BLIP_EXIST(uParam0->f_9))
						{
							HUD::SET_BLIP_ALPHA(uParam0->f_9, 0);
							HUD::SET_BLIP_ROUTE(uParam0->f_9, false);
						}
						uParam0->f_140 = 1;
						uParam0->f_412 = 1;
					}
				}
				break;
			case 1:
				if (!__LIB_0__.func_75() && __LIB_35__.func_388(uParam0, 9) > 4f)
				{
					__LIB_39__.func_641(uParam0, 52, 1, 0, 0);
					uParam0->f_412 = 2;
				}
				break;
			case 2:
				if (__LIB_0__.func_405("TAXI_OBJ_POL", 0, 0))
				{
					if (uParam0->f_410 != 22)
					{
						__LIB_39__.func_641(uParam0, 51, 0, 0, 0);
					}
					uParam0->f_412 = 3;
				}
				else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) < 1)
				{
					uParam0->f_412 = 3;
				}
				break;
			case 3:
				if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::GET_PLAYER_INDEX(), __LIB_31__.func_379(uParam0)))
				{
					__LIB_31__.func_380(uParam0, PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()));
					__LIB_35__.func_327(6, 0);
				}
				if (!__LIB_15__.func_87(uParam0))
				{
					if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						if (__LIB_35__.func_388(uParam0, 16) > 10f)
						{
							if (uParam0->f_410 != 22)
							{
								__LIB_39__.func_641(uParam0, 51, 1, 0, 0);
							}
						}
					}
				}
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) < 1)
				{
					if (__LIB_0__.func_405("TAXI_OBJ_POL", 0, 0))
					{
						HUD::CLEAR_PRINTS();
					}
					if (HUD::DOES_BLIP_EXIST(uParam0->f_9))
					{
						HUD::SET_BLIP_ALPHA(uParam0->f_9, 255);
						HUD::SET_BLIP_ROUTE(uParam0->f_9, true);
					}
					uParam0->f_140 = 0;
					uParam0->f_412 = 4;
				}
				break;
			case 4:
				if (!__LIB_0__.func_75())
				{
					if (uParam0->f_410 != 22)
					{
						__LIB_39__.func_641(uParam0, 53, 1, 0, 1);
					}
					__LIB_35__.func_327(7, __LIB_31__.func_379(uParam0));
					__LIB_31__.func_380(uParam0, 0);
					uParam0->f_412 = 5;
				}
				break;
			case 5:
				if (!__LIB_0__.func_75())
				{
					__LIB_31__.func_373(uParam0, 9, 0);
					__LIB_35__.func_334(uParam0, 11, 0, 0);
					uParam0->f_412 = 0;
				}
				break;
			}
	}
}

int func_206(var uParam0)//Position - 0x6C03
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (!PED::IS_PED_INJURED(uParam0->f_3))
		{
			if (!PED::IS_PED_IN_VEHICLE(uParam0->f_3, uParam0->f_4, true) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(uParam0->f_3))
			{
				__LIB_42__.func_41(uParam0, "Passenger left car.", 9);
			}
			else if (__LIB_41__.func_503(uParam0))
			{
				if (__LIB_0__.func_405("TAXI_OBJ_PICKUP", 0, 0))
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
				__LIB_42__.func_723(uParam0, 1);
			}
		}
	}
	return 0;
}

void func_228()//Position - 0x7194
{
	__LIB_31__.func_446(&(Local_230.f_55), 2);
	__LIB_31__.func_446(&(Local_230.f_55), 8);
	__LIB_31__.func_446(&(Local_230.f_55), 32);
	__LIB_31__.func_446(&(Local_230.f_55), 128);
	__LIB_31__.func_446(&(Local_230.f_55), 256);
	__LIB_31__.func_446(&(Local_230.f_55), 512);
	__LIB_31__.func_446(&(Local_230.f_55), 1024);
	__LIB_31__.func_446(&(Local_230.f_55), 2048);
	__LIB_31__.func_446(&(Local_230.f_55), 1073741824);
	__LIB_31__.func_446(&(Local_230.f_55), 8192);
	__LIB_31__.func_446(&(Local_230.f_55), 16384);
	__LIB_31__.func_446(&(Local_230.f_55), 32768);
	__LIB_31__.func_446(&(Local_230.f_55), 131072);
	__LIB_31__.func_446(&(Local_230.f_55), 262144);
	__LIB_31__.func_446(&(Local_230.f_55), 524288);
	__LIB_31__.func_446(&(Local_230.f_55), 1048576);
	__LIB_31__.func_446(&(Local_230.f_55), 4194304);
	__LIB_31__.func_446(&(Local_230.f_100), 64);
	__LIB_31__.func_446(&(Local_230.f_100), 2048);
	__LIB_31__.func_446(&(Local_230.f_100), 128);
	__LIB_31__.func_446(&(Local_230.f_100), 32);
	__LIB_31__.func_446(&(Local_230.f_100), 256);
	__LIB_31__.func_446(&(Local_230.f_100), 8);
	__LIB_31__.func_446(&(Local_230.f_100), 1);
	__LIB_31__.func_446(&(Local_230.f_100), 8192);
	__LIB_31__.func_446(&(Local_230.f_100), 2);
	__LIB_31__.func_446(&(Local_230.f_100), 32768);
	__LIB_31__.func_446(&uLocal_312, 2);
	__LIB_35__.func_356(&Local_230, 7);
}

int func_237(var uParam0, bool bParam1, float fParam2)//Position - 0x74B7
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (!PED::IS_PED_IN_VEHICLE(uParam0->f_2, uParam0->f_4, false))
		{
			if ((MISC::GET_GAME_TIMER() % 1000) < 50)
			{
			}
			__LIB_42__.func_723(uParam0, 1);
			if (__LIB_35__.func_340())
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0);
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD")) == 1 || TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD")) == 0)
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_3);
				uParam0->f_48 = 0;
				iLocal_79 = 0;
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(uParam0->f_3, PLAYER::PLAYER_PED_ID(), 0);
			}
		}
		else if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::GET_PLAYER_INDEX(), 0))
		{
			__LIB_42__.func_383(uParam0);
			if (uParam0->f_48 > 1)
			{
				TASK::CLEAR_SEQUENCE_TASK(&iVar3);
				TASK::OPEN_SEQUENCE_TASK(&iVar3);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam0->f_11, uParam0->f_6, 20000, 0.25f, 0, 40000f);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, uParam0->f_4, 0);
				TASK::CLOSE_SEQUENCE_TASK(iVar3);
				TASK::TASK_PERFORM_SEQUENCE(uParam0->f_3, iVar3);
				uParam0->f_48 = 0;
			}
		}
		else
		{
			if (__LIB_31__.func_372(uParam0, 14))
			{
				__LIB_35__.func_331(uParam0);
				__LIB_41__.func_501(uParam0, 0);
			}
			if (__LIB_31__.func_372(uParam0, 9))
			{
				__LIB_31__.func_373(uParam0, 9, 0);
				HUD::CLEAR_PRINTS();
				if (HUD::DOES_BLIP_EXIST(uParam0->f_8))
				{
					HUD::SET_BLIP_ALPHA(uParam0->f_8, 255);
					HUD::SET_BLIP_ROUTE(uParam0->f_8, true);
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false))
			{
				fVar4 = ((ENTITY::GET_ENTITY_SPEED(uParam0->f_4) / 5f) + 4f);
				if (uParam0->f_141 && __LIB_31__.func_451(uParam0, uParam0->f_3) > 300f)
				{
					__LIB_42__.func_41(uParam0, "Left Passenger", 8);
				}
				switch (uParam0->f_48)
				{
					case 0:
						if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1 || ((__LIB_0__.func_76(PLAYER::PLAYER_PED_ID(), uParam0->f_3, 1) < 20f && __LIB_0__.func_529(uParam0->f_3, uParam0->f_11, 1) <= 28f) && __LIB_0__.func_529(uParam0->f_4, uParam0->f_11, 1) <= 28f))
						{
							if (__LIB_39__.func_645(uParam0, fParam2))
							{
								uParam0->f_48++;
							}
						}
						break;
					case 1:
						if (func_258(uParam0, 0, 28f, fVar4, 4f))
						{
							uParam0->f_138 = 1;
							if (bLocal_86)
							{
								uParam0->f_7 = __LIB_31__.func_430(uParam0->f_4, uParam0->f_3);
								iVar0 = __LIB_31__.func_370(uParam0, &iVar1);
								if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
								{
									if (iVar1 == uParam0->f_7)
									{
										if (uParam0->f_7 == 1)
										{
											iVar2 = 262144;
										}
										else if (uParam0->f_7 == 2)
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
								if (uParam0->f_411 == 0)
								{
									if (VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(uParam0->f_3, uParam0->f_4, 0, false, false))
									{
										if (uParam0->f_7 == 2)
										{
											uParam0->f_7 = 0;
											if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
											{
												TASK::TASK_LEAVE_ANY_VEHICLE(iVar0, 0, 4096);
											}
										}
									}
								}
							}
							TASK::CLEAR_PED_TASKS(uParam0->f_3);
							TASK::TASK_ENTER_VEHICLE(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 1, 0);
							uParam0->f_48++;
						}
						else
						{
							if (bParam1)
							{
								GRAPHICS::DRAW_DEBUG_SPHERE(ENTITY::GET_ENTITY_COORDS(uParam0->f_3, true), fVar4, 0, 0, 255, 150);
							}
							if (!__LIB_31__.func_400(uParam0))
							{
								TASK::CLEAR_PED_TASKS(uParam0->f_3);
							}
							else if (((TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 0) && TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 7) && __LIB_31__.func_451(uParam0, uParam0->f_3) > 8f)
							{
								TASK::CLEAR_SEQUENCE_TASK(&(uParam0->f_243));
								TASK::OPEN_SEQUENCE_TASK(&(uParam0->f_243));
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
								if (uParam0->f_411 != 9)
								{
									TASK::TASK_PLAY_ANIM(0, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0f, false, false, false);
								}
								else
								{
									TASK::TASK_PLAY_ANIM(0, "oddjobs@towingcome_here", "come_here_idle_c", 8f, -8f, -1, 48, 0f, false, false, false);
								}
								TASK::CLOSE_SEQUENCE_TASK(uParam0->f_243);
								TASK::TASK_PERFORM_SEQUENCE(uParam0->f_3, uParam0->f_243);
							}
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
							{
								ENTITY::SET_ENTITY_ANIM_SPEED(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 1.75f);
							}
						}
						break;
					case 2:
						if (bLocal_86)
						{
							if (__LIB_0__.func_76(uParam0->f_4, uParam0->f_3, 1) < 3f)
							{
								if (!__LIB_31__.func_387(uParam0, 1))
								{
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_3);
									__LIB_42__.func_41(uParam0, "You had a dead body in your back seat.", 5);
								}
								else if (!__LIB_31__.func_357(uParam0->f_4))
								{
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_3);
									__LIB_42__.func_41(uParam0, "You had a dead body in your back seat.", 0);
								}
							}
						}
						func_252(uParam0);
						if (__LIB_31__.func_451(uParam0, uParam0->f_3) < fVar4 || __LIB_35__.func_340())
						{
							if (PED::IS_PED_IN_VEHICLE(uParam0->f_2, uParam0->f_4, false))
							{
								if (__LIB_42__.func_363(uParam0))
								{
									__LIB_31__.func_377(uParam0);
									iLocal_81 = MISC::GET_GAME_TIMER();
									PED::SET_PED_CONFIG_FLAG(uParam0->f_3, 26, true);
									__LIB_31__.func_373(uParam0, 5, 0);
									HUD::CLEAR_GPS_FLAGS();
									STATS::STAT_GET_FLOAT(uParam0->f_428, &(uParam0->f_42), -1);
									PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(uParam0->f_3, false);
									return 1;
								}
							}
						}
						else if (bParam1)
						{
							GRAPHICS::DRAW_DEBUG_SPHERE(ENTITY::GET_ENTITY_COORDS(uParam0->f_3, true), fVar4, 0, 0, 255, 150);
						}
						break;
					}
				}
			}
	}
	return 0;
}

void func_252(var uParam0)//Position - 0x81D9
{
	int iVar0;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (!PED::IS_PED_INJURED(uParam0->f_3))
		{
			if (__LIB_10__.func_589(uParam0->f_3, 1) > 30f || func_253(uParam0))
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
					__LIB_42__.func_41(uParam0, "Player abandoned passenger on pickup.", 8);
				}
			}
		}
	}
}

int func_253(var uParam0)//Position - 0x82AA
{
	if ((ENTITY::GET_ENTITY_SPEED(uParam0->f_4) > 3f && __LIB_35__.func_388(uParam0, 5) > 15f) || ENTITY::IS_ENTITY_UPSIDEDOWN(uParam0->f_4))
	{
		return 1;
	}
	return 0;
}

int func_258(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4)//Position - 0x8587
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false))
	{
		if (!ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_3) && __LIB_10__.func_589(uParam0->f_3, 1) < fParam2)
		{
			if (!__LIB_31__.func_372(uParam0, 5))
			{
				__LIB_35__.func_334(uParam0, 5, 0, 0);
			}
		}
		else if (__LIB_31__.func_372(uParam0, 5))
		{
			__LIB_31__.func_373(uParam0, 5, 0);
		}
		if (((__LIB_35__.func_388(uParam0, 5) > IntToFloat(iParam1) && ENTITY::GET_ENTITY_SPEED(uParam0->f_4) < fParam4) && !ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_3)) || __LIB_10__.func_589(uParam0->f_3, 1) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_274()//Position - 0x9468
{
	Local_165.f_0 = 0;
	__LIB_31__.func_396(38939/*func_293*/, 38914/*func_292*/, 1);
	__LIB_31__.func_396(38675/*func_289*/, 38652/*func_288*/, 1);
	__LIB_31__.func_396(38590/*func_287*/, 38565/*func_286*/, 1);
	__LIB_31__.func_396(38493/*func_285*/, 38469/*func_284*/, 1);
	__LIB_31__.func_396(38359/*func_283*/, 38338/*func_282*/, 1);
	__LIB_31__.func_396(38285/*func_280*/, 38260/*func_279*/, 1);
	__LIB_31__.func_396(38118/*func_276*/, 38095/*func_275*/, 1);
}

int func_295()//Position - 0x9A33
{
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_259))
	{
		__LIB_31__.func_358("TAXI_ASSETS_STREAMED - Loading A_M_M_Skater_01", &iLocal_263, 1000);
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("gestures@m@standing@casual"))
	{
		__LIB_31__.func_358("TAXI_ASSETS_STREAMED - Loading gestures@m@standing@casual", &iLocal_263, 1000);
		return 0;
	}
	if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_322))
	{
		return 0;
	}
	if (!__LIB_31__.func_432(&iLocal_263, 1))
	{
		__LIB_31__.func_358("TAXI_ASSETS_STREAMED - Loading shared assets", &iLocal_263, 1000);
		return 0;
	}
	return 1;
}

void func_303()//Position - 0x9FBF
{
	STREAMING::REQUEST_MODEL(iLocal_259);
	STREAMING::REQUEST_ANIM_DICT("gestures@m@standing@casual");
	__LIB_35__.func_335(1);
	iLocal_322 = __LIB_1__.func_638();
}

void func_339()//Position - 0xBBA1
{
	if (__LIB_31__.func_452(&Local_230, &Local_268))
	{
		switch (Local_268.f_27)
		{
			case 0:
				if (Local_230.f_410 == 9)
				{
					if (__LIB_31__.func_383(&Local_230) > 10 && __LIB_31__.func_383(&Local_230) != 15)
					{
						__LIB_39__.func_641(&Local_230, 15, 1, 0, 0);
						__LIB_35__.func_334(&Local_230, 10, 0, 0);
						if (bLocal_267)
						{
						}
					}
				}
				break;
			case 1:
				if (__LIB_35__.func_388(&Local_230, 18) > 15f)
				{
					if (__LIB_31__.func_383(&Local_230) > 10 && __LIB_31__.func_383(&Local_230) != 17)
					{
						__LIB_31__.func_446(&(Local_230.f_81), 67108864);
						__LIB_39__.func_641(&Local_230, 17, 1, 0, 0);
						if (bLocal_267)
						{
						}
					}
				}
				else if ((MISC::GET_GAME_TIMER() % 1000) < 50)
				{
				}
				break;
			case 2:
				if (__LIB_35__.func_388(&Local_230, 18) > 30f)
				{
					if (__LIB_31__.func_383(&Local_230) > 10 && __LIB_31__.func_383(&Local_230) != 16)
					{
						__LIB_39__.func_641(&Local_230, 16, 1, 0, 0);
						if (bLocal_267)
						{
						}
					}
				}
				else if ((MISC::GET_GAME_TIMER() % 1000) < 50)
				{
				}
				break;
			case 3:
				if (__LIB_35__.func_388(&Local_230, 18) > 30f)
				{
					if (__LIB_31__.func_383(&Local_230) > 10 && __LIB_31__.func_383(&Local_230) != 18)
					{
						__LIB_39__.func_641(&Local_230, 18, 1, 0, 0);
						if (bLocal_267)
						{
						}
					}
				}
				else if ((MISC::GET_GAME_TIMER() % 1000) < 50)
				{
				}
				break;
			case 4:
				if (__LIB_35__.func_388(&Local_230, 18) > 30f)
				{
					if (__LIB_31__.func_383(&Local_230) > 10 && __LIB_31__.func_383(&Local_230) != 19)
					{
						__LIB_39__.func_641(&Local_230, 19, 1, 0, 0);
						if (bLocal_267)
						{
						}
					}
				}
				else if ((MISC::GET_GAME_TIMER() % 1000) < 50)
				{
				}
				break;
			}
	}
	func_340(&Local_230, &uLocal_271, &Local_268, 1, bLocal_267);
}

int func_340(var uParam0, var uParam1, var uParam2, int iParam3, bool bParam4)//Position - 0xBD91
{
	char cVar0[48];
	struct<6> Var1;
	__LIB_42__.func_379(uParam0, uParam1);
	if ((*uParam2 == -1 && uParam0->f_410 < 29) && !uParam0->f_109)
	{
		if (__LIB_31__.func_409(uParam1))
		{
			*uParam2 = 1;
			if (bParam4)
			{
			}
		}
	}
	if (!uParam0->f_109)
	{
		switch (*uParam2)
		{
			case 1:
				if (!__LIB_31__.func_415(uParam0))
				{
					uParam2->f_7 = { __LIB_35__.func_337(uParam1) };
					__LIB_35__.func_536(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_7), 8, 0, 0, 0);
					*uParam2 = 2;
					if (bParam4)
					{
					}
				}
				break;
			case 2:
				if (__LIB_0__.func_75())
				{
					uParam2->f_13 = { __LIB_0__.func_390() };
					if (MISC::ARE_STRINGS_EQUAL(&(uParam2->f_13), &(uParam2->f_7)))
					{
						*uParam2 = 3;
						if (bParam4)
						{
						}
					}
					else
					{
						*uParam2 = 1;
					}
				}
				break;
			case 3:
				if (__LIB_15__.func_87(uParam0))
				{
					if (__LIB_0__.func_75())
					{
						if (AUDIO::IS_ANY_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
						{
							uParam2->f_29 = 1;
						}
						else
						{
							uParam2->f_29 = 0;
						}
						__LIB_35__.func_334(uParam0, 17, 0f, 1);
						if (uParam0->f_411 == 1)
						{
							uParam2->f_1 = { __LIB_9__.func_980() };
							__LIB_6__.func_771();
						}
						else
						{
							uParam2->f_1 = { __LIB_0__.func_389() };
							__LIB_0__.func_296();
						}
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) >= 1)
						{
							*uParam2 = 0;
						}
						else if (uParam0->f_411 == 1)
						{
							*uParam2 = 4;
						}
						else
						{
							*uParam2 = 6;
						}
					}
				}
				else if (__LIB_0__.func_75())
				{
					uParam2->f_19 = { __LIB_0__.func_389() };
				}
				else
				{
					__LIB_0__.func_712(&(uParam2->f_26), SYSTEM::ROUND(SYSTEM::POW(2f, SYSTEM::TO_FLOAT(uParam2->f_27))));
					uParam2->f_27++;
					__LIB_35__.func_348(uParam1);
					__LIB_35__.func_334(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam4)
					{
					}
					return 1;
				}
				break;
			case 4:
				if (((!__LIB_31__.func_372(uParam0, 14) && !__LIB_0__.func_75()) && !__LIB_15__.func_87(uParam0)) && __LIB_35__.func_388(uParam0, 18) > 1f)
				{
					__LIB_35__.func_334(uParam0, 18, 0, 0);
					*uParam2 = 5;
					if (bParam4)
					{
					}
				}
				break;
			case 5:
				if ((__LIB_35__.func_388(uParam0, 18) > 1.5f && !__LIB_0__.func_75()) && !__LIB_15__.func_87(uParam0))
				{
					StringCopy(&cVar0, uParam0->f_143, 24);
					if (__LIB_35__.func_392(uParam2, &cVar0))
					{
						__LIB_35__.func_536(&(uParam0->f_244), uParam0->f_144, &cVar0, 8, 0, 0, 0);
						__LIB_35__.func_334(uParam0, 18, 0, 0);
						*uParam2 = 7;
					}
					else
					{
						if (uParam2->f_29)
						{
							StringConCat(&cVar0, "_resB", 24);
						}
						else
						{
							StringConCat(&cVar0, "_resA", 24);
						}
						Var1 = { cVar0 };
						__LIB_31__.func_435(&(uParam2->f_25), iParam3, &cVar0, 1, 1, 0);
						__LIB_35__.func_901(&(uParam0->f_244), uParam0->f_144, &Var1, &cVar0, 8, 0, 0);
						__LIB_35__.func_334(uParam0, 18, 0, 0);
						*uParam2 = 6;
					}
				}
				break;
			case 6:
				if (!__LIB_0__.func_75() && __LIB_35__.func_388(uParam0, 17) > 1f)
				{
					if (__LIB_35__.func_388(uParam0, 18) > 0.5f || uParam0->f_411 == 0)
					{
						if (MISC::ARE_STRINGS_EQUAL(&(uParam2->f_19), &(uParam2->f_1)) && uParam0->f_411 != 0)
						{
							StringCopy(&(uParam2->f_1), uParam0->f_143, 24);
							StringConCat(&(uParam2->f_1), "_end1", 24);
							__LIB_31__.func_385(&(uParam2->f_1));
							__LIB_35__.func_536(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_1), 8, 0, 0, 0);
							__LIB_31__.func_373(uParam0, 17, 1);
							*uParam2 = 7;
						}
						else if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_1)))
						{
							__LIB_36__.func_42(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_13), &(uParam2->f_1), 8, 0, 0);
							if (bParam4)
							{
							}
						}
						*uParam2 = 3;
					}
				}
				break;
			case 7:
				if (!__LIB_0__.func_75())
				{
					__LIB_0__.func_712(&(uParam2->f_26), SYSTEM::ROUND(SYSTEM::POW(2f, SYSTEM::TO_FLOAT(uParam2->f_27))));
					uParam2->f_27++;
					__LIB_35__.func_348(uParam1);
					__LIB_35__.func_334(uParam0, 18, 0, 0);
					*uParam2 = -1;
				}
				break;
			}
	}
	return 0;
}

void func_409()//Position - 0x11CAB
{
	__LIB_42__.func_380(&Local_230);
	func_427();
}

void func_414(int iParam0)//Position - 0x11E3E
{
	__LIB_39__.func_644(&Local_230, iParam0);
	Local_230.f_410 = 0;
	__LIB_31__.func_420(&Local_230, 7, 14);
	Local_230.f_23 = { -492.4436f, -290.3657f, 34.486f };
	Local_230.f_33 = 202.0759f;
	Local_230.f_26 = { 856.3766f, 1288.918f, 357.7924f };
	Local_230.f_34 = 162.3f;
	Local_230.f_6 = 1f;
	Local_230.f_29 = { 810.3334f, 1172.4128f, 321.8036f };
}

void func_427()//Position - 0x1241A
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_259);
	STREAMING::REMOVE_ANIM_DICT("gestures@m@standing@casual");
	__LIB_9__.func_981(&uLocal_45, 0, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

