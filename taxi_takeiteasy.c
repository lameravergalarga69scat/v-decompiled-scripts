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
	var uLocal_230 = 0;
	struct<411> Local_231 = { 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = -1;
	var uLocal_240 = -1;
	var uLocal_241 = -1;
	var uLocal_242 = -1;
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
	int iLocal_258 = 0;
	struct<3> Local_259[1];
	int iLocal_260 = 0;
	int iLocal_261 = 0;
	struct<3> Local_262 = { 0, 0, 0 } ;
	struct<3> Local_263 = { 0, 0, 0 } ;
	struct<3> Local_264 = { 0, 0, 0 } ;
	struct<3> Local_265 = { 0, 0, 0 } ;
	struct<3> Local_266 = { 0, 0, 0 } ;
	int iLocal_267 = 0;
	int iLocal_268 = 0;
	var uLocal_269 = 0;
	int iLocal_270 = 0;
	float fLocal_271 = 0f;
	float fLocal_272 = 0f;
	float fLocal_273 = 0f;
	int iLocal_274 = 0;
	int iLocal_275 = 0;
	int iLocal_276 = 0;
	bool bLocal_277 = 0;
	bool bLocal_278 = 0;
	int iLocal_279 = 0;
	int iLocal_280 = 0;
	char* sLocal_281 = NULL;
	char* sLocal_282 = NULL;
	bool bLocal_283 = 0;
	struct<28> Local_284 = { -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 5;
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
	var uLocal_330 = 1097859072;
	var uLocal_331 = 1500;
	var uLocal_332 = 45;
	var uLocal_333 = 1103626240;
	var uLocal_334 = 5;
	int iLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
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
	iLocal_260 = joaat("A_M_Y_SouCent_04");
	Local_262 = { -1230.5504f, -896.7814f, 11.11059f };
	Local_263 = { 58.8213f, 293.848f, 109.6124f };
	Local_264 = { 62.7742f, 307.4984f, 109.981f };
	Local_265 = { 0f, 0f, 0f };
	Local_266 = { 0f, 0f, 0f };
	iLocal_267 = 1;
	fLocal_271 = 0f;
	fLocal_272 = 12f;
	sLocal_282 = "random@drunk_driver_1";
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(67))
	{
		__LIB_30__::func_728(2);
		func_439();
	}
	MISC::SET_MISSION_FLAG(true);
	func_426();
	while (true)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_231.f_2))
		{
			func_9();
		}
		else
		{
			__LIB_40__::func_780(&Local_231);
		}
		SYSTEM::WAIT(0);
	}
}

void func_9()//Position - 0x346
{
	if (__LIB_31__::func_419(&Local_231))
	{
		__LIB_31__::func_365(&Local_231);
		if (Local_231.f_410 > 0)
		{
			if ((MISC::GET_GAME_TIMER() % 1000) < 50)
			{
			}
			if (__LIB_35__::func_396(&Local_231, 0))
			{
				func_421();
			}
		}
		else if (__LIB_35__::func_393(&Local_231, 31) > 5f)
		{
			__LIB_30__::func_728(2);
			func_439();
		}
	}
	else
	{
		__LIB_35__::func_352(&Local_231);
		__LIB_42__::func_384(&Local_231, &uLocal_328);
		__LIB_31__::func_418(&Local_231, &uLocal_269, 0);
		__LIB_42__::func_42(&Local_231);
		if (Local_231.f_410 > 2 && iLocal_258 == 0)
		{
			if (!__LIB_31__::func_417(&Local_231))
			{
				func_349();
			}
			else
			{
				__LIB_42__::func_41(&Local_231, "Taxi Not Driveable", __LIB_31__::func_407(&Local_231));
			}
		}
		if (Local_231.f_410 == 9 && iLocal_258 == 0)
		{
			__LIB_40__::func_795(&Local_231, 0, 0);
			func_317();
			if (bLocal_277)
			{
				if (func_316())
				{
					__LIB_42__::func_41(&Local_231, "Rider is too damn uncomfortable.", 9);
				}
			}
		}
		switch (Local_231.f_410)
		{
			case 0:
				__LIB_31__::func_390(&(Local_259[0 /*3*/]), "TAXI_SC_BN_01", 100);
				__LIB_31__::func_389(&Local_231, &Local_259);
				func_311();
				__LIB_35__::func_334(&Local_231, 16, 4f, 0);
				__LIB_35__::func_357(&Local_231, Local_263, Local_264, "TaxiOtis", iLocal_260, 135.3f, 40f);
				__LIB_35__::func_370(&Local_231);
				__LIB_31__::func_399(&Local_231, 1);
				break;
			case 1:
				if (func_303())
				{
					__LIB_31__::func_398();
					func_282();
					__LIB_31__::func_388(&Local_231);
					Local_231.f_14 = { Local_263 };
					__LIB_31__::func_399(&Local_231, 3);
				}
				break;
			case 3:
				if (__LIB_42__::func_378(&Local_231, 1))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_231.f_3, false))
					{
						PED::SET_PED_COMPONENT_VARIATION(Local_231.f_3, 3, 1, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_231.f_3, 4, 1, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_231.f_3, 0, 1, 0, 0);
						PED::SET_PED_FLEE_ATTRIBUTES(Local_231.f_3, 1024, true);
						PED::SET_PED_FLEE_ATTRIBUTES(Local_231.f_3, 131072, true);
					}
					__LIB_37__::func_675(&Local_231, 1, 0);
					__LIB_31__::func_399(&Local_231, 5);
				}
				break;
			case 5:
				if (__LIB_42__::func_726(&Local_231, 0, 1109393408))
				{
					__LIB_31__::func_399(&Local_231, 15);
				}
				break;
			case 15:
				if (__LIB_31__::func_427(&Local_231))
				{
					Local_231.f_17 = { Local_262 };
					__LIB_39__::func_641(&Local_231, 9, 1, 0, 0);
					__LIB_31__::func_426(&Local_231);
					Local_231.f_46 = ENTITY::GET_ENTITY_HEALTH(Local_231.f_4);
					func_237();
					switch (func_236(&Local_231))
					{
						case 2:
							sLocal_281 = "vomit_van";
							break;
						case 0:
							sLocal_281 = "vomit_low";
							break;
						case 1:
							sLocal_281 = "vomit_outside";
							break;
					}
					__LIB_31__::func_399(&Local_231, 9);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_231.f_4, false))
				{
					if (!PED::IS_PED_IN_VEHICLE(Local_231.f_2, Local_231.f_4, false))
					{
						__LIB_35__::func_390(&Local_231);
						__LIB_31__::func_399(&Local_231, 5);
					}
				}
				break;
			case 9:
				if (!iLocal_280)
				{
					if ((__LIB_31__::func_457(&Local_231, 0) || __LIB_31__::func_457(&Local_231, 2)) || __LIB_31__::func_456(&Local_231, 2))
					{
						iLocal_280 = 1;
					}
				}
				if (__LIB_37__::func_672(&Local_231, 1086324736) && iLocal_258 == 1)
				{
					if (iLocal_261 != 0)
					{
						GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_261, false);
						iLocal_261 = 0;
					}
					TASK::CLEAR_PED_TASKS(Local_231.f_3);
					bLocal_277 = true;
				}
				switch (iLocal_258)
				{
					case 0:
						if (func_211(&Local_231, 1086324736, 1097859072))
						{
							__LIB_35__::func_330(&uLocal_287);
							__LIB_31__::func_381(&Local_284, 3, 0);
							HUD::REMOVE_BLIP(&(Local_231.f_9));
							__LIB_35__::func_355(&Local_231);
							__LIB_35__::func_536(&(Local_231.f_244), Local_231.f_144, "txm1_arrive", 9, 0, 0, 0);
							__LIB_31__::func_399(&Local_231, 22);
						}
						if ((((__LIB_15__::func_97(&Local_231) >= 2 && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 1) && !ENTITY::IS_ENTITY_UPSIDEDOWN(Local_231.f_4)) && !(ENTITY::GET_ENTITY_ROLL(Local_231.f_4) <= -145f || ENTITY::GET_ENTITY_ROLL(Local_231.f_4) >= 145f)) && !bLocal_277)
						{
							if (__LIB_0__::func_75())
							{
								__LIB_0__::func_296();
								__LIB_39__::func_641(&Local_231, 61, 1, 0, 0);
							}
							Local_231.f_76 = 0;
							iLocal_258 = 1;
						}
						if (CAM::DOES_CAM_EXIST(Local_231.f_0))
						{
							CAM::DESTROY_CAM(Local_231.f_0, false);
							CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
						}
						break;
					case 1:
						if (!bLocal_277)
						{
							func_187(&(Local_231.f_3));
						}
						if (func_184())
						{
							if (bLocal_278)
							{
								__LIB_39__::func_641(&Local_231, 62, 1, 0, 0);
								iLocal_258 = 0;
							}
							else
							{
								__LIB_39__::func_641(&Local_231, 63, 1, 0, 0);
								iLocal_258 = 0;
							}
							CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
						}
						if (!__LIB_41__::func_503(&Local_231))
						{
							__LIB_42__::func_590(&Local_231, 1);
							if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
							{
								PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0);
							}
						}
						else if (ENTITY::IS_ENTITY_AT_COORD(Local_231.f_4, Local_231.f_17, 2f, 2f, 20f, false, true, 0))
						{
							PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 0);
						}
						break;
				}
				break;
			case 22:
				if (!__LIB_0__::func_75())
				{
					if (bLocal_277)
					{
						func_166(0);
					}
					else
					{
						func_166(1);
						__LIB_31__::func_374(&Local_231, 0);
					}
					__LIB_31__::func_399(&Local_231, 27);
				}
				break;
			case 27:
				if (__LIB_39__::func_640(&Local_231, 1))
				{
					__LIB_31__::func_405(&Local_231);
					__LIB_39__::func_641(&Local_231, 104, 1, 1, 0);
					__LIB_31__::func_399(&Local_231, 29);
				}
				break;
			case 28:
				if (__LIB_42__::func_589(&uLocal_230, &Local_231, &(Local_231.f_3), &uLocal_251, 1))
				{
					__LIB_39__::func_641(&Local_231, 104, 1, 1, 0);
					__LIB_31__::func_399(&Local_231, 29);
				}
				break;
			case 29:
				if (__LIB_42__::func_724(&Local_231, &iLocal_335))
				{
					__LIB_42__::func_376(1, &Local_231, 1);
					__LIB_31__::func_399(&Local_231, 30);
				}
				if (!PED::IS_PED_INJURED(Local_231.f_3))
				{
					if (__LIB_1__::func_844(Local_231.f_3, -1226.25f, -902.82f, 11.33f, 1) < 3f)
					{
						PED::SET_PED_RESET_FLAG(Local_231.f_3, 60, true);
					}
				}
				break;
			case 30:
				if (!PED::IS_PED_INJURED(Local_231.f_3))
				{
					if (__LIB_1__::func_844(Local_231.f_3, -1226.25f, -902.82f, 11.33f, 1) < 3f)
					{
						PED::SET_PED_RESET_FLAG(Local_231.f_3, 60, true);
					}
					if (__LIB_1__::func_844(Local_231.f_3, Local_231.f_29, 1) < 1f)
					{
						func_439();
					}
				}
				else
				{
					func_439();
				}
				break;
			}
	}
}

void func_166(bool bParam0)//Position - 0x598C
{
	if (Local_231.f_56 < Local_231.f_58)
	{
		__LIB_39__::func_641(&Local_231, 103, 1, 0, 0);
	}
	else if (Local_231.f_56 >= Local_231.f_59)
	{
		if (!bParam0)
		{
			__LIB_39__::func_641(&Local_231, 101, 1, 0, 0);
		}
		else
		{
			__LIB_31__::func_446(&(Local_231.f_82), 4194304);
			__LIB_39__::func_641(&Local_231, 22, 1, 0, 0);
		}
	}
	else if (!bParam0)
	{
		__LIB_39__::func_641(&Local_231, 102, 1, 0, 0);
	}
	else
	{
		__LIB_31__::func_446(&(Local_231.f_82), 2097152);
		__LIB_39__::func_641(&Local_231, 22, 1, 0, 0);
	}
}

int func_184()//Position - 0x5F10
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_231.f_4, false))
	{
		if (iLocal_274 && ENTITY::GET_ENTITY_SPEED(Local_231.f_4) < 5f)
		{
			if (!__LIB_31__::func_372(&Local_231, 21))
			{
				__LIB_35__::func_334(&Local_231, 21, 0, 0);
			}
		}
		if (ENTITY::GET_ENTITY_SPEED(Local_231.f_4) >= 5f && __LIB_31__::func_372(&Local_231, 21))
		{
			__LIB_31__::func_373(&Local_231, 21, 0);
		}
	}
	if (bLocal_277)
	{
		__LIB_35__::func_328(&Local_231, 21);
		fLocal_273 = __LIB_35__::func_393(&Local_231, 21);
		if (fLocal_273 >= fLocal_272)
		{
			bLocal_278 = true;
			return 1;
		}
		else
		{
			bLocal_278 = false;
			return 1;
		}
	}
	return 0;
}

int func_187(var uParam0)//Position - 0x6055
{
	float fVar0;
	struct<3> Var1;
	if (!PED::IS_PED_INJURED(*uParam0))
	{
		switch (iLocal_268)
		{
			case 0:
				if (!__LIB_0__::func_75())
				{
					if (__LIB_35__::func_536(&(Local_231.f_244), "txm1aud", "txm1_Puke1", 8, 0, 0, 0))
					{
						TASK::TASK_PLAY_ANIM(*uParam0, sLocal_282, sLocal_281, 8f, -4f, -1, 0, 0f, false, false, false);
						if (!ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
						{
							switch (__LIB_0__::func_306(*uParam0, 0))
							{
								case 0:
									VEHICLE::REMOVE_VEHICLE_WINDOW(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1);
									break;
								case 2:
									VEHICLE::REMOVE_VEHICLE_WINDOW(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 3);
									break;
								default:
									VEHICLE::REMOVE_VEHICLE_WINDOW(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 3);
									break;
								}
						}
						if (__LIB_31__::func_372(&Local_231, 10))
						{
							__LIB_31__::func_373(&Local_231, 10, 0);
						}
						iLocal_268++;
					}
				}
				else if ((MISC::GET_GAME_TIMER() % 1000) < 50)
				{
				}
				break;
			case 1:
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, sLocal_282, sLocal_281, 3))
				{
					fVar0 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*uParam0, sLocal_282, sLocal_281);
					if (bLocal_283)
					{
					}
					if (fVar0 > 0.243f && fVar0 < 0.28f)
					{
						if (!iLocal_274)
						{
							GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE("scr_puke_in_car", *uParam0, Local_265, Local_266, 31086, 1f, false, false, false);
							iLocal_274 = 1;
						}
					}
					else if (fVar0 > 0.295f && fVar0 < 0.37f)
					{
						if (!iLocal_275)
						{
							GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE("scr_puke_in_car", *uParam0, Local_265, Local_266, 31086, 1f, false, false, false);
							iLocal_275 = 1;
						}
					}
					else if (fVar0 > 0.487857f && fVar0 < 0.55f)
					{
						if (!iLocal_276)
						{
							GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE("scr_puke_in_car", *uParam0, Local_265, Local_266, 31086, 1f, false, false, false);
							iLocal_276 = 1;
							if (!iLocal_279)
							{
								StringCopy(&Var1, "txm1_pukeR1", 24);
								__LIB_31__::func_385(&Var1);
								__LIB_35__::func_536(&(Local_231.f_244), "txm1aud", &Var1, 8, 0, 0, 0);
								iLocal_279 = 1;
							}
						}
					}
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*uParam0, sLocal_282, sLocal_281) > 0.9f)
					{
						iLocal_268++;
					}
				}
				break;
			case 2:
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, sLocal_282, sLocal_281, 3))
				{
				}
				TASK::TASK_PLAY_ANIM(*uParam0, sLocal_282, "drunk_idle", 8f, -8f, -1, 1, 0f, false, false, false);
				iLocal_274 = 0;
				iLocal_268++;
				break;
			case 3:
				bLocal_277 = true;
				if (!__LIB_31__::func_372(&Local_231, 10))
				{
					__LIB_35__::func_334(&Local_231, 10, 0, 0);
				}
				return 1;
				break;
			}
	}
	return 0;
}

int func_211(var uParam0, float fParam1, float fParam2)//Position - 0x6B3D
{
	if ((((CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN()) && !CAM::IS_SCREEN_FADING_OUT()) && !CAM::IS_SCREEN_FADED_OUT()) && !uParam0->f_142)
	{
		if (__LIB_42__::func_725(uParam0))
		{
			__LIB_31__::func_375(uParam0, &(uParam0->f_43));
			__LIB_41__::func_502(uParam0);
			__LIB_40__::func_794(uParam0);
			__LIB_42__::func_381(uParam0, fParam2, 1117782016);
			__LIB_40__::func_790(uParam0);
			__LIB_40__::func_789(uParam0);
			if ((SYSTEM::ROUND(__LIB_35__::func_393(uParam0, 7)) % 5) == 0 && !iLocal_85)
			{
				iLocal_85 = 1;
			}
			if ((SYSTEM::ROUND(__LIB_35__::func_393(uParam0, 7)) % 5) == 2 && iLocal_85)
			{
				iLocal_85 = 0;
			}
			return __LIB_37__::func_672(uParam0, fParam1);
		}
	}
	return 0;
}

int func_236(var uParam0)//Position - 0x77AF
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4) && VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("granger") || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("rebel")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("rebel2")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("sandking")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("sandking2")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("patriot")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("surfer")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("surfer2")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("mesa")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("rancherxl")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("tiptruck2")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("mixer")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("mixer2")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("rubble")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("scrap")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("tiptruck")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("armytanker")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("barracks")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("barracks2")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("pranger")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("ambulance")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("firetruk")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("policet")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("riot")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("sheriff2")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("stockade")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("stockade3")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("biff")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("hauler")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("packer")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("trash")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("benson")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("phantom")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("pounder")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("utillitruck")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("utillitruck2")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("utillitruck3")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("dloader")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("flatbed")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("tourbus")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("towtruck")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("towtruck2")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("camper")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("taco")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("boxville")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("boxville2")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("burrito")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("burrito2")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("burrito3")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("burrito4")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("gburrito")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("journey")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("mule")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("mule2")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("pony")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("rumpo")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("speedo")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("speedo2")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("youga"))
		{
			return 2;
		}
		else if ((((((((((((((((((((((ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("phoenix") || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("coquette")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("dune")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("cheetah")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("cogcabrio")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("jb700")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("monroe")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("ninef")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("ninef2")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("rapidgt")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("rapidgt2")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("stinger")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("stingergt")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("ztype")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("banshee")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("bullet")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("carbonizzare")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("comet2")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("entityxf")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("f620")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("infernus")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("surano")) || ENTITY::GET_ENTITY_MODEL(uParam0->f_4) == joaat("voltic"))
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 3;
}

void func_237()//Position - 0x7E45
{
	__LIB_31__::func_446(&(Local_231.f_55), 2);
	__LIB_31__::func_446(&(Local_231.f_55), 4);
	__LIB_31__::func_446(&(Local_231.f_55), 16);
	__LIB_31__::func_446(&(Local_231.f_55), 64);
	__LIB_31__::func_446(&(Local_231.f_55), 256);
	__LIB_31__::func_446(&(Local_231.f_55), 512);
	__LIB_31__::func_446(&(Local_231.f_55), 1024);
	__LIB_31__::func_446(&(Local_231.f_55), 2048);
	__LIB_31__::func_446(&(Local_231.f_55), 67108864);
	__LIB_31__::func_446(&(Local_231.f_55), 134217728);
	__LIB_31__::func_446(&(Local_231.f_55), 536870912);
	__LIB_31__::func_446(&(Local_231.f_55), 268435456);
	__LIB_31__::func_446(&(Local_231.f_55), 8192);
	__LIB_31__::func_446(&(Local_231.f_55), 16384);
	__LIB_31__::func_446(&(Local_231.f_55), 32768);
	__LIB_31__::func_446(&(Local_231.f_55), 65536);
	__LIB_31__::func_446(&(Local_231.f_55), 131072);
	__LIB_31__::func_446(&(Local_231.f_55), 262144);
	__LIB_31__::func_446(&(Local_231.f_55), 524288);
	__LIB_31__::func_446(&(Local_231.f_55), 1048576);
	__LIB_31__::func_446(&(Local_231.f_55), 2097152);
	__LIB_31__::func_446(&(Local_231.f_100), 64);
	__LIB_31__::func_446(&(Local_231.f_100), 2048);
	__LIB_31__::func_446(&(Local_231.f_100), 128);
	__LIB_31__::func_446(&(Local_231.f_100), 32);
	__LIB_31__::func_446(&(Local_231.f_100), 256);
	__LIB_31__::func_446(&(Local_231.f_100), 8);
	__LIB_31__::func_446(&(Local_231.f_100), 1);
	__LIB_31__::func_446(&(Local_231.f_100), 4096);
	__LIB_31__::func_446(&(Local_231.f_100), 8192);
	MISC::CLEAR_BIT(&uLocal_328, 2);
	__LIB_35__::func_356(&Local_231, 7);
}

void func_282()//Position - 0xA0E6
{
	Local_165.f_0 = 0;
	__LIB_31__::func_396(42137/*func_301*/, 42112/*func_300*/, 1);
	__LIB_31__::func_396(41873/*func_297*/, 41850/*func_296*/, 1);
	__LIB_31__::func_396(41788/*func_295*/, 41763/*func_294*/, 1);
	__LIB_31__::func_396(41691/*func_293*/, 41667/*func_292*/, 1);
	__LIB_31__::func_396(41557/*func_291*/, 41536/*func_290*/, 1);
	__LIB_31__::func_396(41483/*func_288*/, 41458/*func_287*/, 1);
	__LIB_31__::func_396(41316/*func_284*/, 41293/*func_283*/, 1);
}

int func_303()//Position - 0xA6B1
{
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_260))
	{
		__LIB_31__::func_358("TAXI_ASSETS_STREAMED - Loading A_M_Y_SouCent_01", &iLocal_267, 1000);
		return 0;
	}
	if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_335))
	{
		return 0;
	}
	if (!__LIB_31__::func_432(&iLocal_267, 1))
	{
		__LIB_31__::func_358("TAXI_ASSETS_STREAMED - Loading shared assets", &iLocal_267, 1000);
		return 0;
	}
	return 1;
}

void func_311()//Position - 0xAC21
{
	STREAMING::REQUEST_MODEL(iLocal_260);
	STREAMING::REQUEST_ANIM_DICT(sLocal_282);
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("Taxi_Vomit", false, -1);
	iLocal_335 = __LIB_1__::func_638();
	STREAMING::REQUEST_PTFX_ASSET();
	__LIB_35__::func_335(1);
}

int func_316()//Position - 0xAD4B
{
	float fVar0;
	int iVar1;
	fVar0 = SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER());
	iVar1 = __LIB_15__::func_97(&Local_231);
	if ((fVar0 - fLocal_271) > 5f)
	{
		fLocal_271 = fVar0;
		if (iLocal_270 == 0)
		{
			if (__LIB_1__::func_844(Local_231.f_4, Local_231.f_17, 1) < 200f)
			{
				iLocal_270++;
			}
			if (iVar1 >= 5)
			{
				if (!__LIB_0__::func_75())
				{
					return 1;
				}
				else
				{
					__LIB_0__::func_296();
					fLocal_271 = 0f;
				}
			}
		}
		else if (iVar1 >= 7)
		{
			if (!__LIB_0__::func_75())
			{
				return 1;
			}
			else
			{
				__LIB_0__::func_296();
				fLocal_271 = 0f;
			}
		}
	}
	return 0;
}

void func_317()//Position - 0xADDD
{
	if (func_318(&Local_231, 27, 155f))
	{
	}
}

int func_318(var uParam0, int iParam1, float fParam2)//Position - 0xADF6
{
	if (uParam0->f_410 < 29)
	{
		if (__LIB_31__::func_372(uParam0, 7))
		{
			__LIB_35__::func_356(uParam0, 23);
			if (__LIB_35__::func_393(uParam0, 7) > fParam2 && __LIB_35__::func_393(uParam0, 23) > 35f)
			{
				__LIB_35__::func_334(uParam0, 23, 0, 0);
				__LIB_39__::func_641(uParam0, iParam1, 1, 0, 0);
				return 1;
			}
		}
	}
	return 0;
}

void func_349()//Position - 0xC8F8
{
	if (__LIB_31__::func_452(&Local_231, &Local_284))
	{
		switch (Local_284.f_27)
		{
			case 0:
				if (Local_231.f_410 == 9)
				{
					if (!__LIB_31__::func_458(&Local_231) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 1)
					{
						if (__LIB_31__::func_416("TX_OBJ_TIE_DO") || HUD::DOES_BLIP_EXIST(Local_231.f_9))
						{
							Local_284.f_27++;
						}
						else if (__LIB_31__::func_383(&Local_231) != 10)
						{
							__LIB_39__::func_641(&Local_231, 10, 1, 0, 1);
						}
					}
				}
				break;
			case 1:
				if (!bLocal_277)
				{
					if (__LIB_31__::func_383(&Local_231) > 10 && __LIB_31__::func_383(&Local_231) != 15)
					{
						__LIB_39__::func_641(&Local_231, 15, 1, 0, 0);
						__LIB_35__::func_334(&Local_231, 10, 0, 0);
						if (bLocal_283)
						{
						}
					}
				}
				else
				{
					Local_284.f_27++;
				}
				break;
			case 2:
				if ((bLocal_277 && iLocal_258 == 0) && !__LIB_0__::func_75())
				{
					if (__LIB_31__::func_383(&Local_231) > 10 && __LIB_31__::func_383(&Local_231) != 16)
					{
						__LIB_39__::func_641(&Local_231, 16, 1, 0, 0);
						__LIB_35__::func_334(&Local_231, 10, 0, 0);
						if (bLocal_283)
						{
						}
					}
				}
				break;
			case 3:
				break;
			}
	}
	func_350(&Local_231, &uLocal_287, &Local_284, 4, bLocal_283);
}

int func_350(var uParam0, var uParam1, var uParam2, int iParam3, bool bParam4)//Position - 0xCA55
{
	char cVar0[48];
	struct<6> Var1;
	__LIB_42__::func_50(uParam0, uParam1);
	if ((*uParam2 == -1 && uParam0->f_410 < 29) && !uParam0->f_109)
	{
		if (__LIB_31__::func_409(uParam1))
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
				if (!__LIB_31__::func_415(uParam0))
				{
					uParam2->f_7 = { __LIB_35__::func_337(uParam1) };
					__LIB_35__::func_536(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_7), 8, 0, 0, 0);
					*uParam2 = 2;
					if (bParam4)
					{
					}
				}
				break;
			case 2:
				if (__LIB_0__::func_75())
				{
					uParam2->f_13 = { __LIB_0__::func_390() };
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
				if (__LIB_15__::func_87(uParam0))
				{
					if (__LIB_0__::func_75())
					{
						if (AUDIO::IS_ANY_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
						{
							uParam2->f_29 = 1;
						}
						else
						{
							uParam2->f_29 = 0;
						}
						__LIB_35__::func_334(uParam0, 17, 0f, 1);
						if (uParam0->f_411 == 1)
						{
							uParam2->f_1 = { __LIB_9__::func_980() };
							__LIB_6__::func_771();
						}
						else
						{
							uParam2->f_1 = { __LIB_0__::func_389() };
							__LIB_0__::func_296();
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
				else if (__LIB_0__::func_75())
				{
					uParam2->f_19 = { __LIB_0__::func_389() };
				}
				else
				{
					__LIB_0__::func_712(&(uParam2->f_26), SYSTEM::ROUND(SYSTEM::POW(2f, SYSTEM::TO_FLOAT(uParam2->f_27))));
					uParam2->f_27++;
					__LIB_35__::func_348(uParam1);
					__LIB_35__::func_334(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam4)
					{
					}
					return 1;
				}
				break;
			case 4:
				if (((!__LIB_31__::func_372(uParam0, 14) && !__LIB_0__::func_75()) && !__LIB_15__::func_87(uParam0)) && __LIB_35__::func_393(uParam0, 18) > 1f)
				{
					__LIB_35__::func_334(uParam0, 18, 0, 0);
					*uParam2 = 5;
					if (bParam4)
					{
					}
				}
				break;
			case 5:
				if ((__LIB_35__::func_393(uParam0, 18) > 1.5f && !__LIB_0__::func_75()) && !__LIB_15__::func_87(uParam0))
				{
					StringCopy(&cVar0, uParam0->f_143, 24);
					if (__LIB_35__::func_392(uParam2, &cVar0))
					{
						__LIB_35__::func_536(&(uParam0->f_244), uParam0->f_144, &cVar0, 8, 0, 0, 0);
						__LIB_35__::func_334(uParam0, 18, 0, 0);
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
						__LIB_31__::func_435(&(uParam2->f_25), iParam3, &cVar0, 1, 1, 0);
						__LIB_35__::func_901(&(uParam0->f_244), uParam0->f_144, &Var1, &cVar0, 8, 0, 0);
						__LIB_35__::func_334(uParam0, 18, 0, 0);
						*uParam2 = 6;
					}
				}
				break;
			case 6:
				if (!__LIB_0__::func_75() && __LIB_35__::func_393(uParam0, 17) > 1f)
				{
					if (__LIB_35__::func_393(uParam0, 18) > 0.5f || uParam0->f_411 == 0)
					{
						if (MISC::ARE_STRINGS_EQUAL(&(uParam2->f_19), &(uParam2->f_1)) && uParam0->f_411 != 0)
						{
							StringCopy(&(uParam2->f_1), uParam0->f_143, 24);
							StringConCat(&(uParam2->f_1), "_end1", 24);
							__LIB_31__::func_385(&(uParam2->f_1));
							__LIB_35__::func_536(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_1), 8, 0, 0, 0);
							__LIB_31__::func_373(uParam0, 17, 1);
							*uParam2 = 7;
						}
						else if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_1)))
						{
							__LIB_36__::func_42(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_13), &(uParam2->f_1), 8, 0, 0);
							if (bParam4)
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
					__LIB_0__::func_712(&(uParam2->f_26), SYSTEM::ROUND(SYSTEM::POW(2f, SYSTEM::TO_FLOAT(uParam2->f_27))));
					uParam2->f_27++;
					__LIB_35__::func_348(uParam1);
					__LIB_35__::func_334(uParam0, 18, 0, 0);
					*uParam2 = -1;
				}
				break;
			}
	}
	return 0;
}

void func_421()//Position - 0x129D1
{
	__LIB_42__::func_380(&Local_231);
	func_439();
}

void func_426()//Position - 0x12B64
{
	__LIB_39__::func_648(&Local_231, 1);
	Local_231.f_410 = 0;
	__LIB_31__::func_420(&Local_231, 2, 4);
	Local_231.f_23 = { 31.3927f, 229.9863f, 108.45f };
	Local_231.f_33 = 340.5f;
	Local_231.f_26 = { -1239.9924f, -902.0005f, 10.8342f };
	Local_231.f_34 = 305.2155f;
	Local_231.f_29 = { -1224.0927f, -907.3411f, 11.3263f };
}

void func_439()//Position - 0x13138
{
	if (STREAMING::HAS_ANIM_DICT_LOADED(sLocal_282))
	{
		STREAMING::REMOVE_ANIM_DICT(sLocal_282);
	}
	if (iLocal_261 != 0)
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_261, false);
		iLocal_261 = 0;
	}
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	SCRIPT::TERMINATE_THIS_THREAD();
}

