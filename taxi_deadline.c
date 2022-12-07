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
	struct<3> Local_251[1];
	int iLocal_252 = 0;
	var uLocal_253 = 0;
	int iLocal_254 = 0;
	float fLocal_255 = 0f;
	int iLocal_256 = 0;
	struct<3> Local_257 = { 0, 0, 0 } ;
	int* iLocal_258 = NULL;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	int* iLocal_261 = NULL;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	int* iLocal_264 = NULL;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
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
	int iLocal_312 = 0;
	struct<2> Local_313 = { 0, 0 } ;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 1097859072;
	var uLocal_317 = 1500;
	var uLocal_318 = 45;
	var uLocal_319 = 1103626240;
	var uLocal_320 = 5;
	int iLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	int iLocal_331 = 0;
	int iLocal_332 = 0;
	int iLocal_333 = 0;
	float fLocal_334[7] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_335[22] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_336[22] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	bool bLocal_337 = 0;
	int iLocal_338 = 0;
	int iLocal_339 = 0;
	int iLocal_340 = 0;
	int iLocal_341 = 0;
	int iLocal_342 = 0;
	int iLocal_343 = 0;
	int iLocal_344 = 0;
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
	iLocal_250 = joaat("G_M_M_ChiGoon_02");
	iLocal_252 = 1;
	Local_257 = { 344.74585f, 452.18317f, 145.99359f };
	iLocal_333 = 2;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(67))
	{
		__LIB_30__::func_728(2);
		func_417();
	}
	MISC::SET_MISSION_FLAG(true);
	func_404();
	while (true)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_230.f_2))
		{
			func_9();
		}
		else
		{
			__LIB_40__::func_780(&Local_230);
		}
		SYSTEM::WAIT(0);
	}
}

void func_9()//Position - 0x2FF
{
	if (__LIB_31__::func_419(&Local_230))
	{
		__LIB_31__::func_365(&Local_230);
		if (Local_230.f_410 > 0)
		{
			if (func_401(&Local_230, 0))
			{
				func_399();
			}
		}
		else if (func_398(&Local_230, 31) > 5f)
		{
			__LIB_30__::func_728(2);
			func_417();
		}
	}
	else
	{
		__LIB_35__::func_352(&Local_230);
		func_376(&Local_230, &uLocal_314);
		func_371();
		__LIB_31__::func_418(&Local_230, &uLocal_253, 0);
		__LIB_42__::func_42(&Local_230);
		if (Local_230.f_410 == 9)
		{
			func_368(&Local_230);
			func_344(&Local_230, 0, 1);
		}
		if (Local_230.f_410 > 2)
		{
			if (!__LIB_31__::func_417(&Local_230))
			{
				func_308();
			}
			else
			{
				__LIB_42__::func_41(&Local_230, "Taxi Not Driveable", __LIB_31__::func_407(&Local_230));
			}
		}
		switch (Local_230.f_410)
		{
			case 0:
				func_283();
				__LIB_35__::func_334(&Local_230, 16, 4f, 0);
				__LIB_35__::func_357(&Local_230, func_281(iLocal_333), func_281(iLocal_332), "TaxiKwak", iLocal_250, 180.6f, 1114636288);
				__LIB_35__::func_370(&Local_230);
				__LIB_31__::func_399(&Local_230, 1);
				break;
			case 1:
				if (func_274())
				{
					__LIB_31__::func_398();
					__LIB_31__::func_390(&(Local_251[0 /*3*/]), "TAXI_SC_BN_03", 200);
					__LIB_31__::func_389(&Local_230, &Local_251);
					Local_230.f_14 = { func_281(iLocal_333) };
					func_251();
					__LIB_31__::func_388(&Local_230);
					__LIB_31__::func_399(&Local_230, 3);
				}
				break;
			case 3:
				if (func_241(&Local_230, 1))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_230.f_3, false))
					{
						PED::SET_PED_COMPONENT_VARIATION(Local_230.f_3, 0, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_230.f_3, 2, 1, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_230.f_3, 3, 1, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_230.f_3, 4, 0, 1, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_230.f_3, 8, 1, 1, 0);
					}
					__LIB_37__::func_675(&Local_230, 1, 0);
					__LIB_31__::func_399(&Local_230, 5);
				}
				break;
			case 5:
				if (func_212(&Local_230, 0, 1109393408))
				{
					__LIB_31__::func_399(&Local_230, 15);
				}
				break;
			case 15:
				if (__LIB_31__::func_427(&Local_230))
				{
					Local_230.f_17 = { Local_257 };
					iLocal_312 = func_197();
					Local_313 = { func_192(iLocal_312) };
					Local_230.f_136 = { Local_313 };
					fLocal_255 = 210f;
					__LIB_18__::func_276(&iLocal_258);
					__LIB_39__::func_641(&Local_230, 9, 1, 0, 0);
					__LIB_31__::func_426(&Local_230);
					func_185();
					__LIB_31__::func_399(&Local_230, 9);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_230.f_4, false))
				{
					if (!PED::IS_PED_IN_VEHICLE(Local_230.f_2, Local_230.f_4, false))
					{
						func_183(&Local_230);
						__LIB_31__::func_399(&Local_230, 5);
					}
				}
				break;
			case 9:
				func_179();
				if (__LIB_6__::func_891(&iLocal_258) > (fLocal_255 + 10f))
				{
					if (!__LIB_0__::func_75())
					{
						__LIB_42__::func_41(&Local_230, "Player did not hit the deadline", 20);
					}
					else
					{
						__LIB_0__::func_296();
					}
				}
				if (func_134(&Local_230, func_174(), 7f, 30f))
				{
					if (!__LIB_0__::func_75())
					{
						__LIB_31__::func_381(&Local_268, 15, 1);
						HUD::REMOVE_BLIP(&(Local_230.f_9));
						if (func_398(&Local_230, 7) < fLocal_334[5] || Local_230.f_56 >= Local_230.f_59)
						{
							__LIB_31__::func_374(&Local_230, 0);
						}
						if (__LIB_6__::func_891(&iLocal_258) > 210f)
						{
							Local_230.f_56 = 0;
						}
						__LIB_35__::func_355(&Local_230);
						__LIB_40__::func_793(&Local_230);
						__LIB_35__::func_394(&Local_230);
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 26, true);
						}
						__LIB_31__::func_399(&Local_230, 27);
					}
					else
					{
						__LIB_0__::func_296();
					}
				}
				break;
			case 27:
				if (__LIB_39__::func_640(&Local_230, 1))
				{
					func_112(0);
					if (!ENTITY::IS_ENTITY_DEAD(Local_230.f_3, false))
					{
						if (__LIB_0__::func_78(__LIB_0__::func_481(), Local_230.f_29, 0))
						{
							ENTITY::SET_ENTITY_HEADING(Local_230.f_3, 84.9058f);
							PED::SET_PED_KEEP_TASK(Local_230.f_3, true);
						}
						else
						{
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_256);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_256);
							TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
							TASK::TASK_CLEAR_LOOK_AT(0);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_230.f_29, 2f, 20000, 0.25f, 0, 40000f);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 322.1072f, 442.4288f, 140.6772f, 2f, 20000, 0.25f, 0, 40000f);
							TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_STAND_MOBILE", 0, false);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_256);
							TASK::TASK_PERFORM_SEQUENCE(Local_230.f_3, iLocal_256);
							PED::SET_PED_KEEP_TASK(Local_230.f_3, true);
						}
					}
					__LIB_31__::func_399(&Local_230, 29);
				}
				break;
			case 29:
				if (func_74(&Local_230, &iLocal_321))
				{
					func_10(1, &Local_230, 1);
					__LIB_31__::func_399(&Local_230, 30);
				}
				break;
			case 30:
				func_417();
				break;
			}
	}
}

void func_10(bool bParam0, var uParam1, bool bParam2)//Position - 0x792
{
	if (bParam0)
	{
		__LIB_42__::func_40(uParam1);
		if (!PED::IS_PED_INJURED(uParam1->f_3))
		{
			PED::SET_PED_CONFIG_FLAG(uParam1->f_3, 317, true);
		}
	}
	else
	{
		__LIB_35__::func_327(1, 0);
	}
	func_11(uParam1, bParam2);
}

void func_11(var uParam0, bool bParam1)//Position - 0x7CE
{
	__LIB_31__::func_365(uParam0);
	if (__LIB_0__::func_75())
	{
		__LIB_6__::func_771();
	}
	__LIB_20__::func_578();
	HUD::CLEAR_PRINTS();
	HUD::CLEAR_HELP(true);
	__LIB_6__::func_849(0);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(uParam0->f_4, false);
		VEHICLE::REMOVE_VEHICLE_STUCK_CHECK(uParam0->f_4);
		VEHICLE::REMOVE_VEHICLE_UPSIDEDOWN_CHECK(uParam0->f_4);
	}
	__LIB_35__::func_325(uParam0->f_14, 1);
	__LIB_31__::func_438(uParam0->f_14, 1, 1114636288);
	__LIB_0__::func_202(&(uParam0->f_244), 3);
	PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, true);
	if (__LIB_35__::func_340())
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	}
	CUTSCENE::SET_PAD_CAN_SHAKE_DURING_CUTSCENE(true);
	__LIB_7__::func_279(0, 1, 1, 0, 0, 0, 0);
	HUD::DISPLAY_RADAR(true);
	HUD::DISPLAY_HUD(true);
	if (CAM::DOES_CAM_EXIST(*uParam0))
	{
		CAM::DESTROY_CAM(*uParam0, false);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
	}
	if (__LIB_0__::func_517(Global_113386.f_19097, 4))
	{
		__LIB_35__::func_326(&(Global_113386.f_19097), 4);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(__LIB_9__::func_486(), false);
	}
	if (bParam1)
	{
		__LIB_31__::func_363(uParam0);
	}
	__LIB_31__::func_362(uParam0);
	STREAMING::REMOVE_ANIM_DICT("gestures@m@standing@casual");
	STREAMING::REMOVE_ANIM_DICT("oddjobs@taxi@");
	STREAMING::REMOVE_ANIM_DICT("oddjobs@towingcome_here");
	if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		__LIB_35__::func_339(uParam0->f_411);
	}
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0);
	}
	STATS::PLAYSTATS_ODDJOB_DONE(SYSTEM::ROUND((__LIB_6__::func_891(&iLocal_82) * 1000f)), 12, false);
}

int func_74(var uParam0, int iParam1)//Position - 0x20CF
{
	switch (iLocal_160)
	{
		case 0:
			if (!__LIB_0__::func_75() && func_398(uParam0, 0) > 1f)
			{
				if (__LIB_35__::func_340())
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				}
				__LIB_35__::func_387(uParam0);
				__LIB_35__::func_326(&(Global_113386.f_19097), 4096);
				__LIB_35__::func_341(iParam1, "TAXI_FARE_TITLE", uParam0->f_50, uParam0->f_56, ((uParam0->f_50 + uParam0->f_56) + uParam0->f_105), uParam0->f_105, __LIB_31__::func_368(uParam0), "TAXI_FARE_MID", 4000, 1);
				iParam1->f_1 = 4000;
				AUDIO::PLAY_SOUND_FRONTEND(-1, "CHECKPOINT_UNDER_THE_BRIDGE", "HUD_MINI_GAME_SOUNDSET", false);
				__LIB_0__::func_518(1);
				iLocal_160 = 6;
			}
			break;
		case 6:
			if (!__LIB_37__::func_687(iParam1, 0))
			{
				__LIB_42__::func_576(uParam0);
				__LIB_35__::func_334(uParam0, 0, 0, 0);
				__LIB_0__::func_518(0);
				iLocal_160 = 7;
				return 1;
			}
			break;
	}
	return 0;
}

void func_112(bool bParam0)//Position - 0x37CB
{
	if (bParam0)
	{
		func_113();
		OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_casino_door_01l"), 929.6144f, 46.3955f, 80.0993f, bParam0, 0f, false);
		OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_casino_door_01r"), 928.6238f, 44.9848f, 80.0993f, bParam0, 0f, false);
		OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_casino_door_01l"), 928.1625f, 43.7989f, 79.8993f, bParam0, 0f, false);
		OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_casino_door_01r"), 927.4266f, 42.1881f, 80.0884f, bParam0, 0f, false);
	}
	else
	{
		OBJECT::SET_LOCKED_UNSTREAMED_IN_DOOR_OF_TYPE(joaat("prop_casino_door_01l"), 929.6144f, 46.3955f, 80.0993f, bParam0, 0f, 50f, 0f);
		OBJECT::SET_LOCKED_UNSTREAMED_IN_DOOR_OF_TYPE(joaat("prop_casino_door_01r"), 928.6238f, 44.9848f, 80.0993f, bParam0, 0f, 50f, 0f);
		OBJECT::SET_LOCKED_UNSTREAMED_IN_DOOR_OF_TYPE(joaat("prop_casino_door_01l"), 928.1625f, 43.7989f, 79.8993f, bParam0, 0f, 50f, 0f);
		OBJECT::SET_LOCKED_UNSTREAMED_IN_DOOR_OF_TYPE(joaat("prop_casino_door_01r"), 927.4266f, 42.1881f, 80.0884f, bParam0, 0f, 50f, 0f);
	}
}

void func_113()//Position - 0x38D3
{
	OBJECT::SET_LOCKED_UNSTREAMED_IN_DOOR_OF_TYPE(joaat("prop_casino_door_01l"), 929.6144f, 46.3955f, 80.0993f, true, 1f, 50f, 0f);
	OBJECT::SET_LOCKED_UNSTREAMED_IN_DOOR_OF_TYPE(joaat("prop_casino_door_01r"), 928.6238f, 44.9848f, 80.0993f, true, 1f, 50f, 0f);
	OBJECT::SET_LOCKED_UNSTREAMED_IN_DOOR_OF_TYPE(joaat("prop_casino_door_01l"), 928.1625f, 43.7989f, 79.8993f, true, 1f, 50f, 0f);
	OBJECT::SET_LOCKED_UNSTREAMED_IN_DOOR_OF_TYPE(joaat("prop_casino_door_01r"), 927.4266f, 42.1881f, 80.0884f, true, 1f, 50f, 0f);
}

int func_134(var uParam0, float fParam1, float fParam2, float fParam3)//Position - 0x408F
{
	if ((((CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN()) && !CAM::IS_SCREEN_FADING_OUT()) && !CAM::IS_SCREEN_FADED_OUT()) && !uParam0->f_142)
	{
		if (func_156(uParam0))
		{
			__LIB_31__::func_375(uParam0, &(uParam0->f_43));
			func_150(uParam0);
			__LIB_40__::func_790(uParam0);
			func_146(uParam0);
			func_141(uParam0, fParam2, fParam3);
			__LIB_40__::func_789(uParam0);
			return __LIB_37__::func_672(uParam0, fParam1);
		}
	}
	return 0;
}

void func_141(var uParam0, float fParam1, float fParam2)//Position - 0x4417
{
	if (__LIB_31__::func_382(uParam0) && __LIB_0__::func_517(uParam0->f_44, 4))
	{
		if ((VEHICLE::IS_VEHICLE_STOPPED(uParam0->f_4) || ENTITY::GET_ENTITY_SPEED(uParam0->f_4) < 3f) && __LIB_31__::func_400(uParam0))
		{
			if (!func_144(uParam0, 2))
			{
				func_143(uParam0, 2);
			}
			else if (__LIB_31__::func_382(uParam0))
			{
				if (func_398(uParam0, 2) > fParam1 && !func_144(uParam0, 14))
				{
					if (__LIB_31__::func_364())
					{
						__LIB_39__::func_641(uParam0, 48, 1, 0, 0);
					}
					else
					{
						__LIB_39__::func_641(uParam0, 48, 1, 0, 0);
					}
					__LIB_35__::func_334(uParam0, 2, 0, 0);
					if (func_144(uParam0, 10))
					{
						__LIB_35__::func_334(uParam0, 10, 0, 0);
					}
				}
				if (!func_144(uParam0, 3))
				{
					__LIB_35__::func_334(uParam0, 3, 0, 0);
				}
				else if (func_398(uParam0, 3) >= fParam2)
				{
					func_142(uParam0, 3, 0);
					__LIB_42__::func_41(uParam0, "Car not moving", 20);
				}
			}
		}
		else
		{
			if (func_144(uParam0, 2))
			{
				func_142(uParam0, 2, 0);
			}
			if (func_144(uParam0, 3))
			{
				func_142(uParam0, 3, 0);
			}
		}
	}
}

void func_142(var uParam0, int iParam1, bool bParam2)//Position - 0x4532
{
	int iVar0;
	if (iParam1 == 14)
	{
	}
	if (iParam1 == 32)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			__LIB_0__::func_735(&(uParam0->f_146[iVar0 /*3*/]));
			iVar0++;
		}
	}
	else
	{
		__LIB_0__::func_735(&(uParam0->f_146[iParam1 /*3*/]));
	}
	if (bParam2)
	{
	}
}

void func_143(var uParam0, int iParam1)//Position - 0x457B
{
	__LIB_18__::func_276(&(uParam0->f_146[iParam1 /*3*/]));
}

bool func_144(var uParam0, int iParam1)//Position - 0x458F
{
	return __LIB_0__::func_736(&(uParam0->f_146[iParam1 /*3*/]));
}

void func_146(var uParam0)//Position - 0x45CD
{
	if (__LIB_31__::func_378(uParam0))
	{
		func_147(uParam0);
	}
}

void func_147(var uParam0)//Position - 0x45E4
{
	if (AUDIO::IS_RADIO_RETUNING() && uParam0->f_418.f_4 != 0)
	{
		uParam0->f_418.f_4 = 0;
	}
	switch (uParam0->f_418.f_4)
	{
		case 0:
			uParam0->f_418 = AUDIO::GET_PLAYER_RADIO_STATION_INDEX();
			func_142(uParam0, 20, 0);
			uParam0->f_418.f_4++;
			break;
		case 1:
			if (uParam0->f_418.f_8 && !uParam0->f_418 == uParam0->f_418.f_2)
			{
				if (func_398(uParam0, 20) > 3f)
				{
					__LIB_39__::func_641(uParam0, 87, 1, 0, 0);
					uParam0->f_418.f_8 = 0;
					uParam0->f_418.f_4++;
				}
			}
			else if (uParam0->f_418 == uParam0->f_418.f_1)
			{
				if (!__LIB_0__::func_517(uParam0->f_81, 262144) || !__LIB_0__::func_517(uParam0->f_81, 1048576))
				{
					if (func_398(uParam0, 20) > 5f)
					{
						uParam0->f_418.f_5 = 1;
						__LIB_39__::func_641(uParam0, 84, 1, 0, 0);
						uParam0->f_418.f_4++;
					}
				}
			}
			else if (uParam0->f_418 == uParam0->f_418.f_2)
			{
				if (!__LIB_0__::func_517(uParam0->f_82, 67108864))
				{
					if (func_398(uParam0, 20) > 5f)
					{
						uParam0->f_418.f_6 = 1;
						uParam0->f_418.f_8 = 0;
						__LIB_39__::func_641(uParam0, 85, 1, 0, 0);
						func_142(uParam0, 22, 0);
						uParam0->f_418.f_4++;
					}
				}
			}
			else if (uParam0->f_418.f_7)
			{
				if (func_398(uParam0, 20) > 8f)
				{
					__LIB_39__::func_641(uParam0, 86, 1, 0, 0);
					uParam0->f_418.f_4++;
				}
			}
			break;
		case 2:
			if (__LIB_0__::func_517(uParam0->f_81, 262144) || __LIB_0__::func_517(uParam0->f_82, 67108864))
			{
				if (!func_144(uParam0, 22))
				{
					func_143(uParam0, 22);
				}
			}
			if (func_144(uParam0, 22) && func_398(uParam0, 22) > 15f)
			{
				if (uParam0->f_418 == uParam0->f_418.f_1)
				{
					if (!__LIB_0__::func_517(uParam0->f_81, 1048576))
					{
						__LIB_39__::func_641(uParam0, 84, 1, 0, 0);
						func_142(uParam0, 22, 0);
					}
				}
				else if (uParam0->f_418 == uParam0->f_418.f_2)
				{
					if (!__LIB_0__::func_517(uParam0->f_82, 134217728))
					{
						__LIB_39__::func_641(uParam0, 85, 1, 0, 0);
						func_142(uParam0, 22, 0);
					}
				}
			}
			break;
	}
}

void func_150(var uParam0)//Position - 0x48F4
{
	if (!__LIB_0__::func_517(uParam0->f_44, 1))
	{
		switch (uParam0->f_412)
		{
			case 0:
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) >= 1)
				{
					if (func_398(uParam0, 9) > 1f)
					{
						__LIB_31__::func_380(uParam0, PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()));
						if (uParam0->f_410 != 22)
						{
							__LIB_39__::func_641(uParam0, 50, 1, 1, 0);
						}
						__LIB_35__::func_334(uParam0, 9, 0, 0);
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
				if (!__LIB_0__::func_75() && func_398(uParam0, 9) > 4f)
				{
					__LIB_39__::func_641(uParam0, 52, 1, 0, 0);
					uParam0->f_412 = 2;
				}
				break;
			case 2:
				if (__LIB_0__::func_405("TAXI_OBJ_POL", 0, 0))
				{
					if (uParam0->f_410 != 22)
					{
						__LIB_39__::func_641(uParam0, 51, 0, 0, 0);
					}
					uParam0->f_412 = 3;
				}
				else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) < 1)
				{
					uParam0->f_412 = 3;
				}
				break;
			case 3:
				if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::GET_PLAYER_INDEX(), __LIB_31__::func_379(uParam0)))
				{
					__LIB_31__::func_380(uParam0, PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()));
					__LIB_35__::func_327(6, 0);
				}
				if (!__LIB_15__::func_87(uParam0))
				{
					if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						if (func_398(uParam0, 16) > 10f)
						{
							if (uParam0->f_410 != 22)
							{
								__LIB_39__::func_641(uParam0, 51, 1, 0, 0);
							}
						}
					}
				}
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) < 1)
				{
					if (__LIB_0__::func_405("TAXI_OBJ_POL", 0, 0))
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
				if (!__LIB_0__::func_75())
				{
					if (uParam0->f_410 != 22)
					{
						__LIB_39__::func_641(uParam0, 53, 1, 0, 1);
					}
					__LIB_35__::func_327(7, __LIB_31__::func_379(uParam0));
					__LIB_31__::func_380(uParam0, 0);
					uParam0->f_412 = 5;
				}
				break;
			case 5:
				if (!__LIB_0__::func_75())
				{
					func_142(uParam0, 9, 0);
					__LIB_35__::func_334(uParam0, 11, 0, 0);
					uParam0->f_412 = 0;
				}
				break;
			}
	}
}

int func_156(var uParam0)//Position - 0x4B86
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (!PED::IS_PED_INJURED(uParam0->f_3))
		{
			if (!PED::IS_PED_IN_VEHICLE(uParam0->f_3, uParam0->f_4, true) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(uParam0->f_3))
			{
				__LIB_42__::func_41(uParam0, "Passenger left car.", 9);
			}
			else if (func_170(uParam0))
			{
				if (__LIB_0__::func_405("TAXI_OBJ_PICKUP", 0, 0))
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
				func_157(uParam0, 1);
			}
		}
	}
	return 0;
}

void func_157(var uParam0, bool bParam1)//Position - 0x4C15
{
	__LIB_42__::func_362(uParam0, uParam0->f_3);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (!PED::IS_PED_IN_VEHICLE(uParam0->f_2, uParam0->f_4, false))
		{
			if (!func_144(uParam0, 14))
			{
				if (__LIB_0__::func_75())
				{
					__LIB_0__::func_488(1);
				}
				__LIB_31__::func_376(uParam0, 11, 1);
				__LIB_41__::func_501(uParam0, 1);
				__LIB_35__::func_334(uParam0, 14, 0f, 1);
				if (uParam0->f_410 < 15)
				{
				}
			}
			else if (bParam1)
			{
				if (!__LIB_31__::func_382(uParam0))
				{
					if ((MISC::GET_GAME_TIMER() % 1000) < 50)
					{
					}
					if (PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_2, false))
					{
						if (func_398(uParam0, 15) > 5f)
						{
							__LIB_35__::func_334(uParam0, 15, 0f, 1);
						}
					}
					if (func_398(uParam0, 14) > 20f)
					{
						__LIB_42__::func_41(uParam0, "Player not in taxi. - YELL RETURN", 8);
					}
				}
				else if (func_398(uParam0, 14) > 20f)
				{
					if (__LIB_10__::func_589(uParam0->f_4, 1) > 40f)
					{
						__LIB_42__::func_41(uParam0, "Player not in taxi.", 21);
					}
					else
					{
						__LIB_42__::func_41(uParam0, "Player not in taxi. - YELL RETURN 2", 8);
					}
				}
			}
		}
	}
}

int func_170(var uParam0)//Position - 0x50BB
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, -1, false) == uParam0->f_2)
		{
			if (func_144(uParam0, 14))
			{
				func_171(uParam0);
			}
			__LIB_41__::func_501(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

void func_171(var uParam0)//Position - 0x50FD
{
	func_142(uParam0, 14, 0);
	func_142(uParam0, 15, 0);
	__LIB_31__::func_355();
	if (__LIB_0__::func_436())
	{
		__LIB_0__::func_488(0);
	}
}

float func_174()//Position - 0x5167
{
	float fVar0;
	fVar0 = ENTITY::GET_ENTITY_SPEED(Local_230.f_4);
	if (fVar0 >= 10f)
	{
		return (fVar0 * 0.5f);
	}
	return 5f;
}

void func_179()//Position - 0x5253
{
	int iVar0;
	float fVar1;
	float fVar2;
	iVar0 = SYSTEM::ROUND(((fLocal_255 - __LIB_6__::func_891(&iLocal_258)) * 1000f));
	if (iVar0 < 0)
	{
		iVar0 = 0;
		bLocal_337 = true;
		if (!iLocal_339)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "TIMER_STOP", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_339 = 1;
		}
	}
	__LIB_6__::func_929(iVar0, "TIM_TIMER" /* GXT: TIME */, 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
	if (!bLocal_337)
	{
		if (!iLocal_338)
		{
			fVar1 = __LIB_19__::func_812(&iLocal_258);
			if (((((((((((((((fLocal_255 - fVar1) < 1f || (fLocal_255 - fVar1) < 1.5f) || (fLocal_255 - fVar1) < 2f) || (fLocal_255 - fVar1) < 2.5f) || (fLocal_255 - fVar1) < 3f) || (fLocal_255 - fVar1) < 3.5f) || (fLocal_255 - fVar1) < 4f) || (fLocal_255 - fVar1) < 4.5f) || (fLocal_255 - fVar1) < 5f) || (fLocal_255 - fVar1) < 6f) || (fLocal_255 - fVar1) < 7f) || (fLocal_255 - fVar1) < 8f) || (fLocal_255 - fVar1) < 9f) || (fLocal_255 - fVar1) < 10f) || (fLocal_255 - fVar1) < 11f)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_338 = 1;
				iLocal_340 = MISC::GET_GAME_TIMER();
			}
		}
		else
		{
			fVar2 = __LIB_19__::func_812(&iLocal_258);
			if (((fLocal_255 - fVar2) < 5.5f && (MISC::GET_GAME_TIMER() - iLocal_340) > 500) || ((fLocal_255 - fVar2) < 11f && (MISC::GET_GAME_TIMER() - iLocal_340) > 1000))
			{
				iLocal_338 = 0;
			}
		}
	}
}

void func_183(var uParam0)//Position - 0x55B0
{
	__LIB_31__::func_384(uParam0, 1000);
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_3);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(uParam0->f_3, PLAYER::PLAYER_PED_ID(), 0);
	}
	__LIB_0__::func_296();
	func_171(uParam0);
}

void func_185()//Position - 0x5636
{
	__LIB_31__::func_446(&(Local_230.f_55), 2);
	__LIB_31__::func_446(&(Local_230.f_55), 4);
	__LIB_31__::func_446(&(Local_230.f_55), 16);
	__LIB_31__::func_446(&(Local_230.f_55), 64);
	__LIB_31__::func_446(&(Local_230.f_55), 256);
	__LIB_31__::func_446(&(Local_230.f_55), 512);
	__LIB_31__::func_446(&(Local_230.f_55), 1024);
	__LIB_31__::func_446(&(Local_230.f_55), 2048);
	__LIB_31__::func_446(&(Local_230.f_55), 4096);
	__LIB_31__::func_446(&(Local_230.f_55), 1073741824);
	__LIB_31__::func_446(&(Local_230.f_100), 8);
	__LIB_31__::func_446(&(Local_230.f_100), 2048);
	__LIB_31__::func_446(&(Local_230.f_100), 256);
	__LIB_31__::func_446(&uLocal_314, 2);
	func_143(&Local_230, 7);
}

struct<2> func_192(int iParam0)//Position - 0x57EF
{
	struct<2> Var0;
	char cVar1[0];
	char cVar2[0];
	StringCopy(&cVar1, __LIB_7__::func_12(__LIB_0__::func_196(iParam0)), 4);
	StringConCat(&Var0, &cVar1, 8);
	StringConCat(&Var0, ":", 8);
	if (__LIB_0__::func_195(iParam0) < 10)
	{
		StringConCat(&Var0, "0", 8);
	}
	StringCopy(&cVar2, __LIB_7__::func_12(__LIB_0__::func_195(iParam0)), 4);
	StringConCat(&Var0, &cVar2, 8);
	return Var0;
}

int func_197()//Position - 0x588A
{
	int iVar0;
	iVar0 = func_202();
	func_200(&iVar0, 3);
	func_198(&iVar0, 30);
	return iVar0;
}

void func_198(int iParam0, int iParam1)//Position - 0x58A9
{
	if ((__LIB_0__::func_195(*iParam0) + iParam1) > 59)
	{
		__LIB_12__::func_264(iParam0, ((__LIB_0__::func_195(*iParam0) + iParam1) - 60));
		func_200(iParam0, 1);
	}
	else
	{
		__LIB_12__::func_264(iParam0, (__LIB_0__::func_195(*iParam0) + iParam1));
	}
}

void func_200(int iParam0, int iParam1)//Position - 0x5928
{
	if ((__LIB_0__::func_196(*iParam0) + iParam1) > 23)
	{
		__LIB_0__::func_142(iParam0, ((__LIB_0__::func_196(*iParam0) + iParam1) - 24));
	}
	else
	{
		__LIB_0__::func_142(iParam0, (__LIB_0__::func_196(*iParam0) + iParam1));
	}
}

int func_202()//Position - 0x599F
{
	var uVar0;
	__LIB_0__::func_144(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	__LIB_12__::func_264(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	__LIB_0__::func_142(&uVar0, CLOCK::GET_CLOCK_HOURS());
	__LIB_8__::func_242(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	__LIB_0__::func_141(&uVar0, CLOCK::GET_CLOCK_MONTH());
	__LIB_0__::func_140(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

int func_212(var uParam0, bool bParam1, float fParam2)//Position - 0x5C66
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
			func_157(uParam0, 1);
			if (__LIB_35__::func_340())
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
			func_238(uParam0);
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
			if (func_144(uParam0, 14))
			{
				func_171(uParam0);
				__LIB_41__::func_501(uParam0, 0);
			}
			if (func_144(uParam0, 9))
			{
				func_142(uParam0, 9, 0);
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
				if (uParam0->f_141 && __LIB_31__::func_451(uParam0, uParam0->f_3) > 300f)
				{
					__LIB_42__::func_41(uParam0, "Left Passenger", 8);
				}
				switch (uParam0->f_48)
				{
					case 0:
						if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1 || ((__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), uParam0->f_3, 1) < 20f && __LIB_0__::func_529(uParam0->f_3, uParam0->f_11, 1) <= 28f) && __LIB_0__::func_529(uParam0->f_4, uParam0->f_11, 1) <= 28f))
						{
							if (__LIB_39__::func_645(uParam0, fParam2))
							{
								uParam0->f_48++;
							}
						}
						break;
					case 1:
						if (func_233(uParam0, 0, 28f, fVar4, 4f))
						{
							uParam0->f_138 = 1;
							if (bLocal_86)
							{
								uParam0->f_7 = __LIB_31__::func_430(uParam0->f_4, uParam0->f_3);
								iVar0 = __LIB_31__::func_370(uParam0, &iVar1);
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
							if (!__LIB_31__::func_400(uParam0))
							{
								TASK::CLEAR_PED_TASKS(uParam0->f_3);
							}
							else if (((TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 0) && TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 7) && __LIB_31__::func_451(uParam0, uParam0->f_3) > 8f)
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
							if (__LIB_0__::func_76(uParam0->f_4, uParam0->f_3, 1) < 3f)
							{
								if (!__LIB_31__::func_387(uParam0, 1))
								{
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_3);
									__LIB_42__::func_41(uParam0, "You had a dead body in your back seat.", 5);
								}
								else if (!__LIB_31__::func_357(uParam0->f_4))
								{
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_3);
									__LIB_42__::func_41(uParam0, "You had a dead body in your back seat.", 0);
								}
							}
						}
						func_227(uParam0);
						if (__LIB_31__::func_451(uParam0, uParam0->f_3) < fVar4 || __LIB_35__::func_340())
						{
							if (PED::IS_PED_IN_VEHICLE(uParam0->f_2, uParam0->f_4, false))
							{
								if (__LIB_42__::func_363(uParam0))
								{
									__LIB_31__::func_377(uParam0);
									iLocal_81 = MISC::GET_GAME_TIMER();
									PED::SET_PED_CONFIG_FLAG(uParam0->f_3, 26, true);
									func_142(uParam0, 5, 0);
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

void func_227(var uParam0)//Position - 0x6986
{
	int iVar0;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (!PED::IS_PED_INJURED(uParam0->f_3))
		{
			if (__LIB_10__::func_589(uParam0->f_3, 1) > 30f || func_228(uParam0))
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
					__LIB_42__::func_41(uParam0, "Player abandoned passenger on pickup.", 8);
				}
			}
		}
	}
}

int func_228(var uParam0)//Position - 0x6A57
{
	if ((ENTITY::GET_ENTITY_SPEED(uParam0->f_4) > 3f && func_398(uParam0, 5) > 15f) || ENTITY::IS_ENTITY_UPSIDEDOWN(uParam0->f_4))
	{
		return 1;
	}
	return 0;
}

int func_233(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4)//Position - 0x6D34
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false))
	{
		if (!ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_3) && __LIB_10__::func_589(uParam0->f_3, 1) < fParam2)
		{
			if (!func_144(uParam0, 5))
			{
				__LIB_35__::func_334(uParam0, 5, 0, 0);
			}
		}
		else if (func_144(uParam0, 5))
		{
			func_142(uParam0, 5, 0);
		}
		if (((func_398(uParam0, 5) > IntToFloat(iParam1) && ENTITY::GET_ENTITY_SPEED(uParam0->f_4) < fParam4) && !ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_3)) || __LIB_10__::func_589(uParam0->f_3, 1) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_238(var uParam0)//Position - 0x72E7
{
	__LIB_42__::func_362(uParam0, uParam0->f_3);
	if (__LIB_31__::func_400(uParam0))
	{
		if (func_144(uParam0, 14))
		{
			func_171(uParam0);
			if (HUD::DOES_BLIP_EXIST(uParam0->f_10))
			{
				HUD::REMOVE_BLIP(&(uParam0->f_10));
			}
		}
	}
	if (!func_144(uParam0, 9))
	{
		if (HUD::DOES_BLIP_EXIST(uParam0->f_8))
		{
			HUD::SET_BLIP_ALPHA(uParam0->f_8, 0);
			HUD::SET_BLIP_ROUTE(uParam0->f_8, false);
		}
		__LIB_35__::func_334(uParam0, 9, 0, 0);
		__LIB_0__::func_210("TAXI_OBJ_POL", 7500, 1);
	}
}

int func_241(var uParam0, int iParam1)//Position - 0x73A3
{
	if (!HUD::HAS_ADDITIONAL_TEXT_LOADED(2))
	{
		return 0;
	}
	__LIB_29__::func_780(12);
	if (__LIB_0__::func_517(uParam0->f_44, 8))
	{
		if (!__LIB_0__::func_517(uParam0->f_44, 128))
		{
			if (PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID()) && !__LIB_0__::func_517(uParam0->f_44, 256))
			{
				__LIB_31__::func_446(&(uParam0->f_44), 256);
			}
			if (__LIB_0__::func_517(uParam0->f_44, 256) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				__LIB_39__::func_641(uParam0, 135, 1, 0, 1);
				__LIB_31__::func_446(&(uParam0->f_44), 128);
			}
		}
	}
	if (!__LIB_35__::func_344(uParam0, iParam1))
	{
		if (__LIB_10__::func_589(uParam0->f_3, 1) < 35f)
		{
			if (!__LIB_0__::func_517(uParam0->f_44, 8))
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(uParam0->f_3, PLAYER::PLAYER_PED_ID(), 0);
				__LIB_39__::func_641(uParam0, 133, 1, 0, 1);
				__LIB_31__::func_446(&(uParam0->f_44), 8);
			}
		}
		if ((PED::IS_PED_INJURED(uParam0->f_3) || PED::IS_PED_FLEEING(uParam0->f_3)) || __LIB_10__::func_589(uParam0->f_3, 1) > 400f)
		{
			__LIB_42__::func_41(uParam0, "ped is fleeing or injured", 5);
		}
	}
	else
	{
		uParam0->f_4 = PED::GET_VEHICLE_PED_IS_IN(uParam0->f_2, false);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(uParam0->f_4, true);
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, -1, false) == uParam0->f_2)
		{
			VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(uParam0->f_4);
			__LIB_35__::func_332(uParam0);
			__LIB_35__::func_327(2, 0);
			bLocal_86 = true;
			__LIB_18__::func_276(&iLocal_82);
			return 1;
		}
		else
		{
			__LIB_42__::func_41(uParam0, "No Taxi", 21);
			__LIB_0__::func_151("TAXI_DBG_NTAXI", -1);
		}
	}
	return 0;
}

void func_251()//Position - 0x7C3F
{
	Local_165.f_0 = 0;
	__LIB_31__::func_396(32754/*func_270*/, 32729/*func_269*/, 1);
	__LIB_31__::func_396(32490/*func_266*/, 32467/*func_265*/, 1);
	__LIB_31__::func_396(32405/*func_264*/, 32380/*func_263*/, 1);
	__LIB_31__::func_396(32308/*func_262*/, 32284/*func_261*/, 1);
	__LIB_31__::func_396(32174/*func_260*/, 32153/*func_259*/, 1);
	__LIB_31__::func_396(32100/*func_257*/, 32075/*func_256*/, 1);
	__LIB_31__::func_396(31933/*func_253*/, 31910/*func_252*/, 1);
}

int func_260(var uParam0)//Position - 0x7DAE
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(uParam0->f_4) && !VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(uParam0->f_4))
		{
			if (!func_144(uParam0, 25))
			{
				__LIB_35__::func_334(uParam0, 25, 0, 0);
			}
			else if (func_398(uParam0, 25) > 2f)
			{
				return 1;
			}
		}
		else if (func_144(uParam0, 25))
		{
			func_142(uParam0, 25, 0);
		}
	}
	return 0;
}

int func_274()//Position - 0x829A
{
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_250))
	{
		__LIB_31__::func_358("TAXI_ASSETS_STREAMED - Loading G_M_M_ChiGoon_02", &iLocal_252, 1000);
		return 0;
	}
	if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_321))
	{
		return 0;
	}
	if (!__LIB_31__::func_432(&iLocal_252, 1))
	{
		__LIB_31__::func_358("TAXI_ASSETS_STREAMED - Loading shared assets", &iLocal_252, 1000);
		return 0;
	}
	return 1;
}

Vector3 func_281(int iParam0)//Position - 0x8797
{
	struct<3> Var0;
	Var0 = { __LIB_0__::func_481() };
	switch (iParam0)
	{
		case 0:
			Var0 = { 924.2684f, 50.078f, 79.7647f };
			break;
		case 1:
			Var0 = { 916.0502f, 39.3504f, 79.7647f };
			break;
		case 2:
			Var0 = { 1971.2462f, 3741.517f, 31.3268f };
			break;
		case 3:
			Var0 = { 2004.278f, 3752.3193f, 31.4156f };
			break;
		case 4:
			Var0 = { 1410.8911f, 3596.0676f, 33.8351f };
			break;
		case 5:
			Var0 = { -1383.0603f, -972.8339f, 8.014f };
			break;
		case 6:
			Var0 = { -1399.1967f, -944.1848f, 9.4306f };
			break;
		case 7:
			Var0 = { -1379.2621f, -972.9459f, 7.8097f };
			break;
		case 8:
			Var0 = { -1390.765f, -584.3324f, 29.2306f };
			break;
		case 9:
			Var0 = { -1410.2234f, -590.6025f, 29.3669f };
			break;
		case 10:
			Var0 = { -1379.2621f, -972.9459f, 7.8097f };
			break;
	}
	return Var0;
}

void func_283()//Position - 0x8958
{
	STREAMING::REQUEST_MODEL(iLocal_250);
	iLocal_321 = __LIB_1__::func_638();
	__LIB_35__::func_335(1);
}

void func_308()//Position - 0x9A3A
{
	func_342(&Local_230);
	if (func_341(&Local_230, &Local_268))
	{
		switch (Local_268.f_27)
		{
			case 0:
				if (Local_230.f_410 == 9)
				{
					if (!func_340(&Local_230))
					{
						if (__LIB_31__::func_416("TX_OBJ_DL_DO") || HUD::DOES_BLIP_EXIST(Local_230.f_9))
						{
							Local_268.f_27++;
						}
						else if (__LIB_31__::func_383(&Local_230) != 10)
						{
							__LIB_39__::func_641(&Local_230, 10, 1, 0, 1);
						}
					}
				}
				break;
			case 1:
				if (__LIB_31__::func_383(&Local_230) > 10 && __LIB_31__::func_383(&Local_230) != 16)
				{
					__LIB_31__::func_446(&(Local_230.f_81), 67108864);
					__LIB_39__::func_641(&Local_230, 16, 1, 0, 0);
					if (bLocal_267)
					{
					}
				}
				break;
			case 2:
				if (func_398(&Local_230, 18) > MISC::GET_RANDOM_FLOAT_IN_RANGE(8f, 14f))
				{
					if (!__LIB_31__::func_378(&Local_230))
					{
						__LIB_31__::func_448(&Local_230, 0);
						Local_268.f_27++;
						if (bLocal_267)
						{
						}
					}
				}
				break;
			}
	}
	func_309(&Local_230, &uLocal_271, &Local_268, bLocal_267);
}

int func_309(var uParam0, var uParam1, var uParam2, bool bParam3)//Position - 0x9B5F
{
	func_318(uParam0, uParam1);
	if (((*uParam2 == -1 && uParam0->f_410 < 29) && !uParam0->f_109) && !func_144(uParam0, 2))
	{
		if (__LIB_31__::func_409(uParam1))
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
				if (!__LIB_31__::func_415(uParam0))
				{
					uParam2->f_7 = { __LIB_35__::func_337(uParam1) };
					__LIB_35__::func_536(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_7), 8, 0, 0, 0);
					*uParam2 = 2;
					if (bParam3)
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
						if (bParam3)
						{
						}
					}
				}
				else
				{
					__LIB_0__::func_712(&(uParam2->f_26), SYSTEM::ROUND(SYSTEM::POW(2f, SYSTEM::TO_FLOAT(uParam2->f_27))));
					uParam2->f_27++;
					__LIB_35__::func_348(uParam1);
					__LIB_35__::func_334(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			case 3:
				if (__LIB_15__::func_87(uParam0))
				{
					if (__LIB_0__::func_75())
					{
						__LIB_35__::func_334(uParam0, 17, 0f, 1);
						uParam2->f_1 = { __LIB_0__::func_389() };
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
					uParam2->f_19 = { __LIB_9__::func_980() };
				}
				else
				{
					__LIB_0__::func_712(&(uParam2->f_26), SYSTEM::ROUND(SYSTEM::POW(2f, SYSTEM::TO_FLOAT(uParam2->f_27))));
					uParam2->f_27++;
					__LIB_35__::func_348(uParam1);
					__LIB_35__::func_334(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			case 4:
				if (((!func_144(uParam0, 14) && !__LIB_0__::func_75()) && !__LIB_15__::func_87(uParam0)) && func_398(uParam0, 18) > 1f)
				{
					__LIB_35__::func_334(uParam0, 18, 0, 0);
					*uParam2 = 6;
					if (bParam3)
					{
					}
				}
				break;
			case 6:
				if (!__LIB_0__::func_75())
				{
					if (func_398(uParam0, 18) > 1f)
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_1)))
						{
							__LIB_36__::func_42(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_13), &(uParam2->f_1), 8, 0, 0);
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

void func_318(var uParam0, var uParam1)//Position - 0xA219
{
	struct<3> Var0;
	char cVar1[48];
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5[8];
	bool bVar6;
	if (__LIB_31__::func_415(uParam0))
	{
	}
	else if (!uParam0->f_110)
	{
	}
	else if (func_144(uParam0, 14))
	{
		StringCopy(&Var0, uParam0->f_143, 24);
		switch (__LIB_31__::func_383(uParam0))
		{
			case 55:
				StringConCat(&Var0, "_lvMe1", 24);
				cVar1 = { Var0 };
				__LIB_31__::func_435(&(uParam0->f_93), 3, &cVar1, 0, 1, 0);
				__LIB_35__::func_901(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				__LIB_35__::func_334(uParam0, 16, 0, 0);
				__LIB_35__::func_351(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				__LIB_37__::func_675(uParam0, 0, 0);
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
						__LIB_41__::func_495(uParam0, &Var0, 0, 0, 8);
					}
				}
				else
				{
					__LIB_35__::func_350(uParam0, Var0, __LIB_31__::func_414(uParam0, 2));
				}
				if (__LIB_0__::func_517(uParam0->f_98, 4))
				{
					__LIB_35__::func_334(uParam0, 16, 0, 0);
					__LIB_37__::func_675(uParam0, 0, 0);
				}
				__LIB_40__::func_788(uParam0, &(uParam0->f_98), 4, 3);
				break;
			case 3:
				if (func_398(uParam0, 16) > 1f)
				{
					__LIB_0__::func_488(1);
					if (uParam0->f_411 == 9)
					{
						__LIB_0__::func_210("TAXI_OBJ_RETURN", 7500, 1);
					}
					else
					{
						__LIB_0__::func_210("TAXI_VIP_RETURN", 7500, 1);
					}
					__LIB_35__::func_334(uParam0, 16, 0, 0);
					__LIB_37__::func_675(uParam0, 0, 0);
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
					__LIB_41__::func_495(uParam0, &Var0, 0, 1, 8);
				}
				else if (!PED::IS_PED_INJURED(uParam0->f_3))
				{
					__LIB_5__::func_759(uParam0->f_3, "TAXI_WHAT_THE_HELL", uParam0->f_145, 4);
				}
				break;
		}
	}
	else if ((func_398(uParam0, 16) > __LIB_0__::func_316(uParam0->f_411 == 0, 1f, 4f) && !uParam0->f_142) && (((uParam0->f_411 == 0 || uParam0->f_411 == 1) && !__LIB_0__::func_75()) || (uParam0->f_411 != 0 && uParam0->f_411 != 1)))
	{
		StringCopy(&Var0, uParam0->f_143, 24);
		switch (__LIB_31__::func_383(uParam0))
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
				__LIB_41__::func_495(uParam0, &Var0, 1, 0, 8);
				break;
			case 56:
				StringConCat(&Var0, "_lvMe2", 24);
				cVar1 = { Var0 };
				__LIB_31__::func_435(&(uParam0->f_93), 3, &cVar1, 0, 1, 0);
				__LIB_35__::func_901(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				__LIB_35__::func_334(uParam0, 16, 0, 0);
				__LIB_35__::func_351(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				__LIB_37__::func_675(uParam0, 0, 0);
				break;
			case 0:
				if (uParam0->f_411 == 9)
				{
					__LIB_35__::func_536(&(uParam0->f_244), "OJTXAUD", "OJTX_PRO_CON", 8, 0, 0, 0);
				}
				__LIB_39__::func_641(uParam0, 1, 1, 0, 0);
				break;
			case 1:
				__LIB_35__::func_334(uParam0, 16, 0, 0);
				__LIB_39__::func_641(uParam0, 4, 0, 0, 0);
				break;
			case 4:
				StringConCat(&Var0, "_hail1", 24);
				cVar1 = { Var0 };
				if (!__LIB_0__::func_517(uParam0->f_44, 128))
				{
					if ((uParam0->f_411 == 0 || uParam0->f_411 == 1) || uParam0->f_411 == 4)
					{
						__LIB_31__::func_435(&(uParam0->f_99), 4, &cVar1, 0, 1, 0);
						__LIB_35__::func_901(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
					}
					else
					{
						__LIB_41__::func_495(uParam0, &Var0, 0, 0, 8);
					}
				}
				__LIB_35__::func_334(uParam0, 16, 4f, 0);
				uParam0->f_141 = 1;
				__LIB_35__::func_334(uParam0, 16, 0, 0);
				__LIB_37__::func_675(uParam0, 0, 0);
				break;
			case 5:
				if (uParam0->f_411 == 7)
				{
					__LIB_0__::func_210("TAXI_OBJ_GPCKUP", 7500, 1);
				}
				else
				{
					__LIB_0__::func_210("TAXI_OBJ_PICKUP", 7500, 1);
				}
				uParam0->f_141 = 1;
				__LIB_35__::func_334(uParam0, 16, 0, 0);
				__LIB_37__::func_675(uParam0, 0, 0);
				break;
			case 8:
				StringConCat(&Var0, "_obj1", 24);
				__LIB_41__::func_495(uParam0, &Var0, 0, 0, 8);
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!HUD::DOES_BLIP_EXIST(uParam0->f_9))
					{
						uParam0->f_9 = __LIB_0__::func_392(uParam0->f_17, 1);
					}
					else if (HUD::GET_BLIP_ALPHA(uParam0->f_9) == 0)
					{
						HUD::SET_BLIP_ALPHA(uParam0->f_9, 255);
						HUD::SET_BLIP_COORDS(uParam0->f_9, uParam0->f_17);
						HUD::SET_BLIP_ROUTE(uParam0->f_9, true);
					}
				}
				__LIB_39__::func_641(uParam0, 10, 1, 0, 0);
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
				__LIB_31__::func_385(&Var0);
				if (uParam0->f_411 != 9)
				{
					__LIB_41__::func_495(uParam0, &Var0, 0, 0, 8);
				}
				else
				{
					__LIB_5__::func_759(uParam0->f_3, "TAXI_START", uParam0->f_145, 4);
				}
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!HUD::DOES_BLIP_EXIST(uParam0->f_9))
					{
						uParam0->f_9 = __LIB_0__::func_392(uParam0->f_17, 1);
					}
					else if (HUD::GET_BLIP_ALPHA(uParam0->f_9) == 0)
					{
						HUD::SET_BLIP_ALPHA(uParam0->f_9, 255);
						HUD::SET_BLIP_COORDS(uParam0->f_9, uParam0->f_17);
						HUD::SET_BLIP_ROUTE(uParam0->f_9, true);
					}
				}
				__LIB_39__::func_641(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			case 7:
				StringConCat(&Var0, "_dest2", 24);
				__LIB_41__::func_494(uParam0, 33554432, Var0, "", 1, 8);
				__LIB_35__::func_334(uParam0, 16, 0, 0);
				__LIB_39__::func_641(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			case 10:
				if (!__LIB_0__::func_75())
				{
					__LIB_31__::func_412(uParam0, 0);
					__LIB_31__::func_446(&(uParam0->f_44), 4);
					__LIB_35__::func_334(uParam0, 16, 0, 0);
					__LIB_39__::func_641(uParam0, 13, 0, 0, 0);
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
				__LIB_31__::func_385(&Var0);
				__LIB_35__::func_349(Var0, uParam1);
				__LIB_35__::func_334(uParam0, 16, 0, 0);
				__LIB_35__::func_334(uParam0, 11, 0, 0);
				__LIB_37__::func_675(uParam0, 0, 0);
				break;
			case 15:
				if (func_398(uParam0, 11) > uParam0->f_36)
				{
					if (uParam0->f_411 == 0)
					{
						StringConCat(&Var0, "_ban1", 24);
					}
					else
					{
						StringConCat(&Var0, "_bant1", 24);
						__LIB_31__::func_385(&Var0);
					}
					__LIB_35__::func_349(Var0, uParam1);
					__LIB_31__::func_446(&(uParam0->f_81), 67108864);
					__LIB_35__::func_334(uParam0, 16, 0, 0);
					__LIB_35__::func_334(uParam0, 11, 0, 0);
					__LIB_37__::func_675(uParam0, 0, 0);
				}
				break;
			case 16:
				if (func_398(uParam0, 11) > uParam0->f_36)
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
							__LIB_31__::func_385(&Var0);
						}
					}
					__LIB_35__::func_349(Var0, uParam1);
					__LIB_35__::func_334(uParam0, 11, 0, 0);
					__LIB_35__::func_334(uParam0, 16, 0, 0);
					__LIB_37__::func_675(uParam0, 0, 0);
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
					__LIB_31__::func_385(&Var0);
				}
				__LIB_35__::func_349(Var0, uParam1);
				__LIB_35__::func_334(uParam0, 16, 0, 0);
				__LIB_37__::func_675(uParam0, 0, 0);
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
				__LIB_31__::func_385(&Var0);
				__LIB_35__::func_349(Var0, uParam1);
				__LIB_35__::func_334(uParam0, 16, 0, 0);
				__LIB_37__::func_675(uParam0, 0, 0);
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
				__LIB_31__::func_385(&Var0);
				__LIB_35__::func_349(Var0, uParam1);
				__LIB_35__::func_334(uParam0, 16, 0, 0);
				__LIB_37__::func_675(uParam0, 0, 0);
				break;
			case 20:
				StringConCat(&Var0, "_dest2b", 24);
				__LIB_31__::func_385(&Var0);
				__LIB_35__::func_349(Var0, uParam1);
				__LIB_35__::func_334(uParam0, 16, 0, 0);
				__LIB_35__::func_334(uParam0, 11, 0, 0);
				__LIB_37__::func_675(uParam0, 0, 0);
				__LIB_31__::func_446(&(uParam0->f_82), 262144);
				uParam0->f_36 = 20f;
				break;
			case 23:
				StringConCat(&Var0, "_seePt1", 24);
				__LIB_41__::func_495(uParam0, &Var0, 0, 0, 8);
				__LIB_39__::func_641(uParam0, 24, 1, 0, 0);
				break;
			case 24:
				uParam0->f_417 = 24;
				__LIB_35__::func_334(uParam0, 16, 0, 0);
				__LIB_37__::func_675(uParam0, 0, 0);
				break;
			case 90:
				StringConCat(&Var0, "_talk", 24);
				StringIntConCat(&Var0, 1, 24);
				__LIB_31__::func_385(&Var0);
				__LIB_41__::func_495(uParam0, &Var0, 1, 0, 8);
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
				__LIB_41__::func_495(uParam0, &Var0, 0, 0, 8);
				break;
			case 91:
				StringConCat(&Var0, "_ig1c", 24);
				__LIB_41__::func_495(uParam0, &Var0, 0, 0, 8);
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
					__LIB_31__::func_434(&(uParam0->f_90), 8, &Var0, &iVar5, 1, 0);
				}
				else
				{
					__LIB_31__::func_434(&(uParam0->f_90), 3, &Var0, &iVar5, 1, 0);
				}
				__LIB_35__::func_349(Var0, uParam1);
				__LIB_35__::func_351(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				__LIB_35__::func_334(uParam0, 16, 0, 0);
				__LIB_35__::func_334(uParam0, 6, 0f, 1);
				__LIB_37__::func_675(uParam0, 0, 0);
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
					__LIB_31__::func_434(&(uParam0->f_89), 8, &Var0, &iVar5, 1, 0);
				}
				else
				{
					__LIB_31__::func_434(&(uParam0->f_89), 3, &Var0, &iVar5, 1, 0);
				}
				__LIB_35__::func_349(Var0, uParam1);
				__LIB_35__::func_351(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 1);
				__LIB_35__::func_334(uParam0, 16, 0, 0);
				__LIB_35__::func_334(uParam0, 6, 0f, 1);
				__LIB_37__::func_675(uParam0, 0, 0);
				break;
			case 12:
				__LIB_0__::func_210("TAXI_OBJ_GYB", 3500, 1);
				__LIB_35__::func_334(uParam0, 16, 0, 0);
				__LIB_37__::func_675(uParam0, 0, 0);
				break;
			case 11:
				if (uParam0->f_410 == 12 || uParam0->f_410 == 18)
				{
					__LIB_0__::func_210("TAXI_OBJ_GYN_TG", 7500, 1);
				}
				else if (uParam0->f_410 < 21)
				{
					__LIB_0__::func_210("TAXI_OBJ_GYN", 7500, 1);
				}
				else
				{
					__LIB_0__::func_210("TAXI_OBJ_GYN_GF", 7500, 1);
				}
				uParam0->f_417 = 11;
				uParam0->f_141 = 1;
				__LIB_35__::func_334(uParam0, 16, 0, 0);
				__LIB_37__::func_675(uParam0, 0, 0);
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
				__LIB_41__::func_495(uParam0, &Var0, 0, 0, 8);
				__LIB_39__::func_641(uParam0, 29, 1, 0, 0);
				break;
			case 29:
				if (!__LIB_0__::func_517(uParam0->f_98, 268435456))
				{
					__LIB_0__::func_210("TAXI_OBJ_CYI_01", 7500, 1);
					__LIB_31__::func_446(&(uParam0->f_98), 268435456);
				}
				uParam0->f_417 = 29;
				__LIB_35__::func_334(uParam0, 16, 0, 0);
				__LIB_37__::func_675(uParam0, 0, 0);
				break;
			case 30:
				StringConCat(&Var0, "_rCar1", 24);
				__LIB_31__::func_385(&Var0);
				__LIB_35__::func_349(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				__LIB_35__::func_334(uParam0, 16, 0, 0);
				__LIB_37__::func_675(uParam0, 0, 0);
				break;
			case 31:
				StringConCat(&Var0, "_rCar2", 24);
				__LIB_31__::func_385(&Var0);
				__LIB_35__::func_349(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				__LIB_35__::func_334(uParam0, 16, 0, 0);
				__LIB_37__::func_675(uParam0, 0, 0);
				break;
			case 32:
				StringConCat(&Var0, "_rCar3", 24);
				__LIB_31__::func_385(&Var0);
				__LIB_35__::func_349(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				__LIB_35__::func_334(uParam0, 16, 0, 0);
				__LIB_37__::func_675(uParam0, 0, 0);
				break;
			case 33:
				__LIB_0__::func_210("TAXI_OBJ_CYI_02", 7500, 1);
				uParam0->f_417 = 33;
				__LIB_35__::func_334(uParam0, 16, 0, 0);
				__LIB_37__::func_675(uParam0, 0, 0);
				break;
			case 34:
				if (!__LIB_0__::func_517(uParam0->f_82, 8192))
				{
					if (func_398(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&Var0, "_airBr1", 24);
						__LIB_31__::func_385(&Var0);
						if (uParam0->f_411 == 5)
						{
							__LIB_35__::func_349(Var0, uParam1);
						}
						else
						{
							__LIB_41__::func_495(uParam0, &Var0, 0, 0, 8);
						}
						__LIB_31__::func_446(&(uParam0->f_82), 8192);
						__LIB_35__::func_334(uParam0, 16, 0, 0);
						__LIB_35__::func_334(uParam0, 11, 0, 0);
						__LIB_37__::func_675(uParam0, 0, 0);
					}
				}
				break;
			case 35:
				if (!__LIB_0__::func_517(uParam0->f_82, 16384))
				{
					StringConCat(&Var0, "_seeD1", 24);
					__LIB_31__::func_385(&Var0);
					__LIB_41__::func_495(uParam0, &Var0, 0, 0, 8);
					__LIB_31__::func_446(&(uParam0->f_82), 16384);
				}
				break;
			case 36:
				if (!__LIB_0__::func_517(uParam0->f_82, 32768))
				{
					StringConCat(&Var0, "_seeD2", 24);
					__LIB_31__::func_385(&Var0);
					__LIB_41__::func_495(uParam0, &Var0, 0, 0, 8);
					__LIB_31__::func_446(&(uParam0->f_82), 32768);
				}
				break;
			case 37:
				StringConCat(&Var0, "_done1", 24);
				__LIB_41__::func_495(uParam0, &Var0, 0, 0, 8);
				__LIB_39__::func_641(uParam0, 46, 1, 0, 0);
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
				__LIB_31__::func_385(&Var0);
				__LIB_41__::func_495(uParam0, &Var0, 0, 0, 8);
				__LIB_39__::func_641(uParam0, 139, 1, 0, 0);
				uParam0->f_417 = 139;
				__LIB_37__::func_675(uParam0, 0, 0);
				break;
			case 139:
				__LIB_0__::func_210("TAXI_OBJ_FTC2", 7500, 1);
				uParam0->f_417 = 13;
				__LIB_39__::func_641(uParam0, 13, 0, 0, 0);
				break;
			case 38:
				StringConCat(&Var0, "_dOff1", 24);
				cVar1 = { Var0 };
				iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(0, 120);
				if (!__LIB_0__::func_517(uParam0->f_82, 268435456))
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
					__LIB_31__::func_446(&(uParam0->f_82), 268435456);
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
				__LIB_35__::func_901(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				__LIB_35__::func_334(uParam0, 16, 0, 0);
				__LIB_37__::func_675(uParam0, 0, 0);
				break;
			case 39:
				StringConCat(&Var0, "_bdOff1", 24);
				cVar1 = { Var0 };
				iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
				if (!__LIB_0__::func_517(uParam0->f_82, 268435456))
				{
					if (iVar4 < 50)
					{
						StringConCat(&cVar1, "_1", 24);
					}
					else
					{
						StringConCat(&cVar1, "_2", 24);
					}
					__LIB_31__::func_446(&(uParam0->f_82), 268435456);
				}
				else if (iVar4 < 50)
				{
					StringConCat(&cVar1, "_3", 24);
				}
				else
				{
					StringConCat(&cVar1, "_4", 24);
				}
				__LIB_35__::func_901(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				__LIB_35__::func_334(uParam0, 16, 0, 0);
				__LIB_37__::func_675(uParam0, 0, 0);
				break;
			case 41:
				StringConCat(&Var0, "_dr2P", 24);
				__LIB_41__::func_495(uParam0, &Var0, 0, 0, 8);
				__LIB_35__::func_334(uParam0, 16, 0, 0);
				__LIB_37__::func_675(uParam0, 0, 0);
				break;
			case 42:
				StringConCat(&Var0, "_dr2N", 24);
				__LIB_41__::func_495(uParam0, &Var0, 0, 0, 8);
				__LIB_35__::func_334(uParam0, 16, 0, 0);
				__LIB_37__::func_675(uParam0, 0, 0);
				break;
			case 40:
				StringConCat(&Var0, "_dOff2", 24);
				__LIB_41__::func_495(uParam0, &Var0, 0, 0, 8);
				__LIB_39__::func_641(uParam0, 44, 1, 0, 0);
				break;
			case 44:
				__LIB_0__::func_210("TAXI_OBJ_CC2", 7500, 1);
				uParam0->f_417 = 44;
				__LIB_37__::func_675(uParam0, 0, 0);
				__LIB_39__::func_641(uParam0, 97, 1, 0, 0);
				break;
			case 43:
				StringConCat(&Var0, "_dOff3", 24);
				__LIB_41__::func_495(uParam0, &Var0, 0, 0, 8);
				__LIB_39__::func_641(uParam0, 45, 1, 0, 0);
				break;
			case 45:
				if (!__LIB_0__::func_75())
				{
					__LIB_0__::func_210("TAXI_OBJ_CC3", 7500, 1);
					uParam0->f_417 = 45;
					__LIB_37__::func_675(uParam0, 0, 0);
					__LIB_39__::func_641(uParam0, 98, 1, 0, 0);
				}
				break;
			case 46:
				__LIB_0__::func_210("TAXI_OBJ_FTC3", 7500, 1);
				uParam0->f_417 = 46;
				__LIB_37__::func_675(uParam0, 0, 0);
				break;
			case 21:
				if (!__LIB_0__::func_517(uParam0->f_81, 1))
				{
					__LIB_41__::func_493(uParam0, 1, Var0, "_sick1", 8);
					__LIB_35__::func_326(&(uParam0->f_81), 2);
				}
				else if (!__LIB_0__::func_517(uParam0->f_81, 2))
				{
					__LIB_41__::func_493(uParam0, 2, Var0, "_sick2", 8);
					__LIB_35__::func_326(&(uParam0->f_81), 1);
				}
				__LIB_35__::func_351(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				__LIB_37__::func_675(uParam0, 0, 0);
				break;
			case 22:
				if (!__LIB_0__::func_517(uParam0->f_82, 2097152))
				{
					StringConCat(&Var0, "_nopke1", 24);
				}
				else if (!__LIB_0__::func_517(uParam0->f_82, 4194304))
				{
					StringConCat(&Var0, "_nopke2", 24);
				}
				__LIB_31__::func_446(&(uParam0->f_81), 2097152);
				__LIB_41__::func_495(uParam0, &Var0, 0, 0, 8);
				__LIB_35__::func_334(uParam0, 16, 0, 0);
				__LIB_35__::func_351(17, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 1);
				__LIB_37__::func_675(uParam0, 0, 0);
				break;
			case 61:
				StringConCat(&Var0, "_Puke1", 24);
				__LIB_41__::func_495(uParam0, &Var0, 0, 0, 8);
				__LIB_35__::func_351(18, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				break;
			case 63:
				StringConCat(&Var0, "_PkStp2", 24);
				__LIB_41__::func_495(uParam0, &Var0, 0, 0, 8);
				__LIB_35__::func_351(20, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				__LIB_35__::func_334(uParam0, 16, 0, 0);
				__LIB_37__::func_675(uParam0, 0, 0);
				break;
			case 62:
				StringConCat(&Var0, "_PkStp1", 24);
				__LIB_41__::func_495(uParam0, &Var0, 0, 0, 8);
				__LIB_35__::func_351(19, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				break;
			case 64:
				StringConCat(&Var0, "_PukeR1", 24);
				__LIB_31__::func_385(&Var0);
				__LIB_41__::func_495(uParam0, &Var0, 0, 0, 8);
				break;
			case 71:
				if (!__LIB_0__::func_517(uParam0->f_81, 4))
				{
					__LIB_41__::func_493(uParam0, 4, Var0, "_turns1", 8);
				}
				else if (!__LIB_0__::func_517(uParam0->f_81, 8))
				{
					__LIB_41__::func_493(uParam0, 8, Var0, "_turns2", 8);
				}
				else
				{
					__LIB_41__::func_493(uParam0, 8, Var0, "_turns3", 8);
					__LIB_35__::func_326(&(uParam0->f_81), 4);
					__LIB_35__::func_326(&(uParam0->f_81), 8);
				}
				__LIB_35__::func_351(13, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				__LIB_37__::func_675(uParam0, 0, 0);
				break;
			case 72:
				if (__LIB_31__::func_410(uParam0))
				{
					__LIB_35__::func_350(uParam0, Var0, __LIB_31__::func_414(uParam0, 72));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!PED::IS_PED_INJURED(uParam0->f_3))
					{
						__LIB_5__::func_759(uParam0->f_3, "CRASH_GENERIC", uParam0->f_145, 4);
					}
				}
				else if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_carHt", 24);
					cVar1 = { Var0 };
					__LIB_31__::func_435(&(uParam0->f_95), 5, &cVar1, 1, 0, 1);
					__LIB_35__::func_536(&(uParam0->f_244), uParam0->f_144, &cVar1, 8, 0, 0, 0);
				}
				else
				{
					StringConCat(&Var0, "_carHt1", 24);
					cVar1 = { Var0 };
					if (uParam0->f_411 == 0)
					{
						__LIB_31__::func_435(&(uParam0->f_95), 8, &cVar1, 1, 1, 0);
					}
					else
					{
						__LIB_31__::func_435(&(uParam0->f_95), 5, &cVar1, 1, 1, 0);
					}
					__LIB_35__::func_901(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				}
				__LIB_35__::func_351(2, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar1, 0);
				__LIB_35__::func_334(uParam0, 16, 0, 0);
				__LIB_37__::func_675(uParam0, 0, 0);
				break;
			case 73:
				StringConCat(&Var0, "_genPnHi", 24);
				__LIB_41__::func_495(uParam0, &Var0, 0, 0, 8);
				break;
			case 75:
				if (!__LIB_0__::func_517(uParam0->f_83, 128))
				{
					StringConCat(&Var0, "_nMiss1", 24);
					__LIB_35__::func_536(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					__LIB_31__::func_446(&(uParam0->f_83), 128);
					__LIB_35__::func_326(&(uParam0->f_83), 256);
					__LIB_35__::func_334(uParam0, 16, 0, 0);
				}
				else if (!__LIB_0__::func_517(uParam0->f_83, 256))
				{
					StringConCat(&Var0, "_nMiss2", 24);
					__LIB_35__::func_536(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					__LIB_31__::func_446(&(uParam0->f_83), 256);
					__LIB_35__::func_326(&(uParam0->f_83), 512);
					__LIB_35__::func_334(uParam0, 16, 0, 0);
				}
				else if (!__LIB_0__::func_517(uParam0->f_83, 512))
				{
					StringConCat(&Var0, "_nMiss3", 24);
					__LIB_35__::func_536(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					__LIB_31__::func_446(&(uParam0->f_83), 512);
					__LIB_35__::func_326(&(uParam0->f_83), 128);
					__LIB_35__::func_334(uParam0, 16, 0, 0);
				}
				__LIB_37__::func_675(uParam0, 0, 0);
				break;
			case 76:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar6 = true;
				}
				if (!__LIB_0__::func_517(uParam0->f_83, 1))
				{
					StringConCat(&Var0, "_air1", 24);
					if (bVar6)
					{
						__LIB_31__::func_385(&Var0);
					}
					__LIB_35__::func_536(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					__LIB_31__::func_446(&(uParam0->f_83), 1);
					__LIB_35__::func_326(&(uParam0->f_83), 2);
					__LIB_35__::func_334(uParam0, 16, 0, 0);
				}
				else if (!__LIB_0__::func_517(uParam0->f_83, 2))
				{
					StringConCat(&Var0, "_air2", 24);
					if (bVar6)
					{
						__LIB_31__::func_385(&Var0);
					}
					__LIB_35__::func_536(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					__LIB_31__::func_446(&(uParam0->f_83), 2);
					if (uParam0->f_411 == 0)
					{
						__LIB_35__::func_326(&(uParam0->f_83), 4);
					}
					else
					{
						__LIB_35__::func_326(&(uParam0->f_83), 1);
					}
					__LIB_35__::func_334(uParam0, 16, 0, 0);
				}
				else if (!__LIB_0__::func_517(uParam0->f_83, 4))
				{
					StringConCat(&Var0, "_air3", 24);
					if (bVar6)
					{
						__LIB_31__::func_385(&Var0);
					}
					__LIB_35__::func_536(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					__LIB_31__::func_446(&(uParam0->f_83), 4);
					__LIB_35__::func_326(&(uParam0->f_83), 1);
					__LIB_35__::func_334(uParam0, 16, 0, 0);
				}
				__LIB_35__::func_351(11, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				__LIB_37__::func_675(uParam0, 0, 0);
				break;
			case 79:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar6 = true;
				}
				if (!__LIB_0__::func_517(uParam0->f_81, 4096))
				{
					__LIB_41__::func_494(uParam0, 4096, Var0, "_sideW1", bVar6, 8);
				}
				else if (!__LIB_0__::func_517(uParam0->f_81, 8192))
				{
					__LIB_41__::func_494(uParam0, 8192, Var0, "_sideW2", bVar6, 8);
				}
				__LIB_35__::func_351(15, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				__LIB_37__::func_675(uParam0, 0, 0);
				break;
			case 80:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar6 = true;
				}
				if (!__LIB_0__::func_517(uParam0->f_81, 16384))
				{
					__LIB_41__::func_494(uParam0, 16384, Var0, "_opLne1", bVar6, 8);
				}
				else if (!__LIB_0__::func_517(uParam0->f_81, 32768))
				{
					__LIB_41__::func_494(uParam0, 32768, Var0, "_opLne2", bVar6, 8);
				}
				__LIB_35__::func_351(14, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				__LIB_37__::func_675(uParam0, 0, 0);
				break;
			case 83:
				if (uParam0->f_411 == 0)
				{
					if (!__LIB_0__::func_517(uParam0->f_82, 8))
					{
						__LIB_41__::func_492(uParam0, 8, Var0, "_bored1", 8, 0);
					}
					else if (!__LIB_0__::func_517(uParam0->f_82, 16))
					{
						__LIB_41__::func_492(uParam0, 16, Var0, "_bored2", 8, 0);
					}
					else if (!__LIB_0__::func_517(uParam0->f_82, 32))
					{
						__LIB_41__::func_492(uParam0, 32, Var0, "_bored3", 8, 0);
					}
					__LIB_35__::func_351(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
					__LIB_37__::func_675(uParam0, 0, 0);
				}
				if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_good1", 24);
					cVar1 = { Var0 };
					__LIB_31__::func_435(&(uParam0->f_93), 6, &cVar1, 0, 1, 0);
					__LIB_35__::func_901(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
					__LIB_35__::func_351(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
					__LIB_35__::func_334(uParam0, 16, 0, 0);
					__LIB_37__::func_675(uParam0, 0, 0);
				}
				break;
			case 92:
				StringConCat(&Var0, "_EtoB1", 24);
				cVar1 = { Var0 };
				__LIB_31__::func_435(&(uParam0->f_96), 2, &cVar1, 0, 1, 0);
				__LIB_35__::func_901(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				__LIB_35__::func_351(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				__LIB_35__::func_334(uParam0, 16, 0, 0);
				__LIB_37__::func_675(uParam0, 0, 0);
				break;
			case 93:
				StringConCat(&Var0, "_BtoE1", 24);
				cVar1 = { Var0 };
				__LIB_31__::func_435(&(uParam0->f_97), 2, &cVar1, 0, 1, 0);
				__LIB_35__::func_901(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				__LIB_35__::func_351(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				__LIB_35__::func_334(uParam0, 16, 0, 0);
				__LIB_37__::func_675(uParam0, 0, 0);
				break;
			case 81:
				if (!__LIB_0__::func_517(uParam0->f_81, 65536))
				{
					__LIB_41__::func_494(uParam0, 65536, Var0, "_runLit1", 1, 8);
				}
				else if (!__LIB_0__::func_517(uParam0->f_81, 131072))
				{
					__LIB_41__::func_494(uParam0, 131072, Var0, "_runLit2", 1, 8);
				}
				__LIB_37__::func_675(uParam0, 0, 0);
				break;
			case 82:
				if (__LIB_31__::func_410(uParam0))
				{
					__LIB_35__::func_350(uParam0, Var0, __LIB_31__::func_414(uParam0, 82));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!PED::IS_PED_INJURED(uParam0->f_3))
					{
						__LIB_5__::func_759(uParam0->f_3, "CAR_HIT_PED_DRIVEN", uParam0->f_145, 4);
					}
				}
				else if (!__LIB_0__::func_517(uParam0->f_83, 8))
				{
					StringConCat(&Var0, "_hitR1", 24);
					__LIB_31__::func_385(&Var0);
					__LIB_35__::func_536(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					__LIB_31__::func_446(&(uParam0->f_83), 8);
					__LIB_35__::func_326(&(uParam0->f_83), 16);
					__LIB_35__::func_334(uParam0, 16, 0, 0);
				}
				else if (!__LIB_0__::func_517(uParam0->f_83, 16))
				{
					StringConCat(&Var0, "_hitR2", 24);
					__LIB_31__::func_385(&Var0);
					__LIB_35__::func_536(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					__LIB_31__::func_446(&(uParam0->f_83), 16);
					__LIB_35__::func_326(&(uParam0->f_83), 32);
					__LIB_35__::func_334(uParam0, 16, 0, 0);
				}
				else if (!__LIB_0__::func_517(uParam0->f_83, 32))
				{
					StringConCat(&Var0, "_hitR3", 24);
					__LIB_31__::func_385(&Var0);
					__LIB_35__::func_536(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					__LIB_31__::func_446(&(uParam0->f_83), 32);
					if (uParam0->f_411 == 0)
					{
						__LIB_35__::func_326(&(uParam0->f_83), 64);
					}
					else
					{
						__LIB_35__::func_326(&(uParam0->f_83), 8);
					}
					__LIB_35__::func_334(uParam0, 16, 0, 0);
				}
				else if (!__LIB_0__::func_517(uParam0->f_83, 64))
				{
					StringConCat(&Var0, "_hitR4", 24);
					__LIB_31__::func_385(&Var0);
					__LIB_35__::func_536(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					__LIB_31__::func_446(&(uParam0->f_83), 64);
					__LIB_35__::func_326(&(uParam0->f_83), 8);
					__LIB_35__::func_334(uParam0, 16, 0, 0);
				}
				__LIB_35__::func_351(1, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				__LIB_37__::func_675(uParam0, 0, 0);
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
					__LIB_41__::func_495(uParam0, &Var0, 0, 1, 8);
				}
				else
				{
					__LIB_35__::func_350(uParam0, Var0, __LIB_31__::func_414(uParam0, 65));
					__LIB_37__::func_675(uParam0, 0, 0);
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
					__LIB_41__::func_495(uParam0, &Var0, 0, 1, 8);
				}
				else
				{
					__LIB_35__::func_350(uParam0, Var0, __LIB_31__::func_414(uParam0, 66));
					__LIB_37__::func_675(uParam0, 0, 0);
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
								__LIB_41__::func_495(uParam0, &Var0, 0, 0, 8);
								break;
							case 6:
								StringConCat(&Var0, "_warnF1", 24);
								__LIB_41__::func_495(uParam0, &Var0, 0, 0, 8);
								break;
							case 1:
								StringConCat(&Var0, "_far1", 24);
								__LIB_41__::func_495(uParam0, &Var0, 0, 0, 8);
								__LIB_35__::func_351(21, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
								break;
							case 2:
								StringConCat(&Var0, "_close1", 24);
								__LIB_41__::func_495(uParam0, &Var0, 0, 0, 8);
								__LIB_35__::func_351(22, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
								break;
							case 10:
								StringConCat(&Var0, "_hit1", 24);
								__LIB_41__::func_495(uParam0, &Var0, 0, 0, 8);
								break;
							case 8:
								StringConCat(&Var0, "_good1", 24);
								cVar1 = { Var0 };
								__LIB_31__::func_435(&(uParam0->f_93), 6, &cVar1, 1, 1, 0);
								__LIB_35__::func_901(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
								__LIB_35__::func_351(23, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar1, 0);
								__LIB_35__::func_334(uParam0, 16, 0, 0);
								__LIB_37__::func_675(uParam0, 0, 0);
								break;
							case 9:
								if (!iLocal_58)
								{
									StringConCat(&Var0, "_sBant1", 24);
									cVar1 = { Var0 };
									__LIB_41__::func_495(uParam0, &Var0, 0, 0, 8);
									__LIB_35__::func_334(uParam0, 16, 0, 0);
									__LIB_35__::func_334(uParam0, 11, 0, 0);
									__LIB_37__::func_675(uParam0, 0, 0);
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
									__LIB_31__::func_385(&Var0);
									__LIB_41__::func_495(uParam0, &Var0, 0, 0, 8);
									__LIB_35__::func_334(uParam0, 16, 0, 0);
									__LIB_35__::func_334(uParam0, 11, 0, 0);
									__LIB_37__::func_675(uParam0, 0, 0);
									iLocal_58 = 0;
								}
								break;
							case 7:
								StringConCat(&Var0, "_done1", 24);
								__LIB_41__::func_495(uParam0, &Var0, 0, 0, 8);
								break;
						}
						__LIB_39__::func_641(uParam0, 143, 0, 0, 0);
					}
				}
				break;
			case 78:
				StringConCat(&Var0, "_speed1", 24);
				cVar1 = { Var0 };
				__LIB_31__::func_435(&(uParam0->f_87), 6, &cVar1, 1, 1, 0);
				__LIB_35__::func_901(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				__LIB_35__::func_351(10, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				__LIB_35__::func_334(uParam0, 16, 0, 0);
				__LIB_37__::func_675(uParam0, 0, 0);
				break;
			case 25:
				if (!__LIB_0__::func_517(uParam0->f_82, 1))
				{
					__LIB_41__::func_492(uParam0, 1, Var0, "_close1", 8, 0);
				}
				else if (!__LIB_0__::func_517(uParam0->f_82, 2))
				{
					__LIB_41__::func_492(uParam0, 2, Var0, "_close2", 8, 0);
				}
				else if (!__LIB_0__::func_517(uParam0->f_82, 4))
				{
					__LIB_41__::func_492(uParam0, 4, Var0, "_close3", 8, 0);
				}
				__LIB_37__::func_675(uParam0, 0, 0);
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
				__LIB_31__::func_435(&(uParam0->f_86), 4, &cVar1, 0, 1, 0);
				if (uParam0->f_411 != 9)
				{
					__LIB_35__::func_901(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				}
				else if (!PED::IS_PED_INJURED(uParam0->f_3))
				{
					__LIB_5__::func_759(uParam0->f_3, "TAXI_STOPPED", uParam0->f_145, 4);
				}
				__LIB_35__::func_334(uParam0, 16, 0, 0);
				__LIB_35__::func_351(5, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				__LIB_37__::func_675(uParam0, 0, 0);
				break;
			case 74:
				if (__LIB_31__::func_410(uParam0))
				{
					__LIB_35__::func_350(uParam0, Var0, __LIB_31__::func_414(uParam0, 74));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!PED::IS_PED_INJURED(uParam0->f_3))
					{
						__LIB_5__::func_759(uParam0->f_3, "VEHICLE_FLIPPED", uParam0->f_145, 4);
					}
				}
				else
				{
					StringConCat(&Var0, "_roll1", 24);
					__LIB_40__::func_792(uParam0, Var0, 8);
				}
				__LIB_35__::func_351(3, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				__LIB_35__::func_334(uParam0, 16, 0, 0);
				__LIB_37__::func_675(uParam0, 0, 0);
				break;
			case 70:
				if (!__LIB_0__::func_517(uParam0->f_83, 1024))
				{
					__LIB_31__::func_446(&(uParam0->f_83), 1024);
					__LIB_35__::func_334(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv1", 24);
					__LIB_31__::func_385(&Var0);
					__LIB_35__::func_536(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				else if (!__LIB_0__::func_517(uParam0->f_83, 2048))
				{
					__LIB_31__::func_446(&(uParam0->f_83), 2048);
					__LIB_35__::func_334(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv2", 24);
					__LIB_31__::func_385(&Var0);
					__LIB_35__::func_536(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				else if (!__LIB_0__::func_517(uParam0->f_83, 4096))
				{
					__LIB_31__::func_446(&(uParam0->f_83), 4096);
					__LIB_35__::func_334(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv3", 24);
					__LIB_31__::func_385(&Var0);
					__LIB_35__::func_536(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				__LIB_37__::func_675(uParam0, 0, 0);
				break;
			case 69:
				if (!__LIB_0__::func_517(uParam0->f_82, 1024))
				{
					__LIB_41__::func_492(uParam0, 1024, Var0, "_rvrs1", 8, 1);
					__LIB_35__::func_326(&(uParam0->f_82), 2048);
				}
				else if (!__LIB_0__::func_517(uParam0->f_82, 2048))
				{
					__LIB_41__::func_492(uParam0, 2048, Var0, "_rvrs2", 8, 1);
				}
				__LIB_37__::func_675(uParam0, 0, 0);
				break;
			case 67:
				StringConCat(&Var0, "_ofrd1", 24);
				cVar1 = { Var0 };
				__LIB_31__::func_435(&(uParam0->f_88), 4, &cVar1, 0, 1, 0);
				__LIB_35__::func_901(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				__LIB_35__::func_351(16, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar1, 0);
				__LIB_35__::func_334(uParam0, 16, 0, 0);
				__LIB_37__::func_675(uParam0, 0, 0);
				break;
			case 68:
				StringConCat(&Var0, "_ofrdch1", 24);
				__LIB_35__::func_536(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				__LIB_35__::func_334(uParam0, 16, 0, 0);
				__LIB_37__::func_675(uParam0, 0, 0);
				break;
			case 49:
				StringConCat(&Var0, "_losPol1", 24);
				__LIB_41__::func_495(uParam0, &Var0, 0, 0, 8);
				__LIB_39__::func_641(uParam0, 52, 1, 0, 0);
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
					__LIB_41__::func_495(uParam0, &Var0, 0, 0, 8);
				}
				else if (!PED::IS_PED_INJURED(uParam0->f_3))
				{
					__LIB_5__::func_759(uParam0->f_3, "POLICE_PURSUIT_DRIVEN", uParam0->f_145, 4);
				}
				__LIB_35__::func_334(uParam0, 16, 0, 0);
				__LIB_37__::func_675(uParam0, 0, 0);
				break;
			case 51:
				if (__LIB_31__::func_410(uParam0))
				{
					if (uParam0->f_411 == 2)
					{
						StringConCat(&Var0, "_copBa1", 24);
						cVar1 = { Var0 };
						cVar1 = { Var0 };
						__LIB_41__::func_495(uParam0, &Var0, 0, 0, 8);
						__LIB_39__::func_641(uParam0, 52, 1, 0, 0);
						__LIB_35__::func_334(uParam0, 16, 0, 0);
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
						__LIB_41__::func_495(uParam0, &Var0, 0, 0, 8);
						__LIB_35__::func_334(uParam0, 16, 0, 0);
					}
				}
				else
				{
					StringConCat(&Var0, "_copBa1", 24);
					cVar1 = { Var0 };
					__LIB_31__::func_435(&(uParam0->f_85), 6, &cVar1, 1, 1, 0);
					__LIB_35__::func_901(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
					__LIB_35__::func_334(uParam0, 16, 0, 0);
					__LIB_37__::func_675(uParam0, 0, 0);
				}
				break;
			case 53:
				StringConCat(&Var0, "_evdeP1", 24);
				__LIB_35__::func_351(8, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				__LIB_41__::func_495(uParam0, &Var0, 0, 0, 8);
				__LIB_35__::func_334(uParam0, 10, 0f, 1);
				break;
			case 52:
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) >= 1)
				{
					__LIB_0__::func_210("TAXI_OBJ_POL", 7500, 1);
					uParam0->f_417 = 52;
				}
				__LIB_37__::func_675(uParam0, 0, 0);
				break;
			case 54:
				StringConCat(&Var0, "_cpFz1", 24);
				__LIB_31__::func_385(&Var0);
				__LIB_41__::func_495(uParam0, &Var0, 0, 0, 8);
				break;
			case 84:
				if (!__LIB_0__::func_517(uParam0->f_81, 262144))
				{
					__LIB_41__::func_494(uParam0, 262144, Var0, "_rdCh1", 1, 8);
				}
				else if (!__LIB_0__::func_517(uParam0->f_81, 1048576))
				{
					if (uParam0->f_411 == 0 || uParam0->f_411 == 1)
					{
						__LIB_41__::func_494(uParam0, 1048576, Var0, "_rdCh2", 1, 8);
					}
					else
					{
						__LIB_41__::func_494(uParam0, 1048576, Var0, "_rdCh2", 0, 8);
					}
				}
				__LIB_35__::func_351(7, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				__LIB_37__::func_675(uParam0, 0, 0);
				break;
			case 85:
				if (!__LIB_0__::func_517(uParam0->f_82, 67108864))
				{
					if (uParam0->f_418.f_6)
					{
						__LIB_41__::func_491(uParam0, 67108864, Var0, "_rdLk1", 1, 7);
					}
				}
				else if (!__LIB_0__::func_517(uParam0->f_82, 134217728))
				{
					__LIB_41__::func_491(uParam0, 134217728, Var0, "_rdFv1", 0, 7);
				}
				__LIB_35__::func_351(6, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				__LIB_37__::func_675(uParam0, 0, 0);
				break;
			case 86:
				StringConCat(&Var0, "_rdneu1", 24);
				__LIB_41__::func_495(uParam0, &Var0, 0, 0, 8);
				break;
			case 87:
				StringConCat(&Var0, "_rdtip1", 24);
				cVar1 = { Var0 };
				StringConCat(&cVar1, "_", 24);
				StringIntConCat(&cVar1, uParam0->f_418.f_3, 24);
				__LIB_35__::func_901(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				__LIB_35__::func_334(uParam0, 16, 0, 0);
				__LIB_37__::func_675(uParam0, 0, 0);
				break;
			case 100:
				__LIB_0__::func_210("TAXI_OBJ_GYB_2", 7500, 1);
				uParam0->f_417 = 100;
				__LIB_37__::func_675(uParam0, 0, 0);
				break;
			case 47:
				if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_horn", 24);
					__LIB_41__::func_495(uParam0, &Var0, 0, 0, 8);
				}
				break;
			case 101:
				StringConCat(&Var0, "_thank1", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					__LIB_31__::func_385(&Var0);
				}
				__LIB_31__::func_446(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					__LIB_41__::func_495(uParam0, &Var0, 0, 0, 8);
				}
				break;
			case 102:
				StringConCat(&Var0, "_thank2", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					__LIB_31__::func_385(&Var0);
				}
				__LIB_31__::func_446(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					__LIB_41__::func_495(uParam0, &Var0, 0, 0, 8);
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
					__LIB_31__::func_385(&Var0);
				}
				__LIB_31__::func_446(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					__LIB_41__::func_495(uParam0, &Var0, 0, 0, 8);
				}
				break;
			case 97:
				if (!__LIB_0__::func_517(uParam0->f_82, 65536))
				{
					if (func_398(uParam0, 11) > uParam0->f_36)
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
						__LIB_31__::func_385(&Var0);
						__LIB_35__::func_349(Var0, uParam1);
						__LIB_31__::func_446(&(uParam0->f_82), 65536);
						__LIB_35__::func_334(uParam0, 16, 0, 0);
						__LIB_35__::func_334(uParam0, 11, 0, 0);
						__LIB_37__::func_675(uParam0, 0, 0);
					}
				}
				break;
			case 98:
				if (!__LIB_0__::func_517(uParam0->f_82, 131072))
				{
					if (func_398(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&Var0, "_ccbb1", 24);
						__LIB_31__::func_385(&Var0);
						__LIB_35__::func_349(Var0, uParam1);
						__LIB_31__::func_446(&(uParam0->f_82), 131072);
						__LIB_35__::func_334(uParam0, 16, 0, 0);
						__LIB_35__::func_334(uParam0, 11, 0, 0);
						__LIB_37__::func_675(uParam0, 0, 0);
					}
				}
				break;
			case 99:
				if (!__LIB_0__::func_517(uParam0->f_82, 8388608))
				{
					StringConCat(&Var0, "_close1", 24);
					__LIB_31__::func_446(&(uParam0->f_82), 8388608);
				}
				else if (!__LIB_0__::func_517(uParam0->f_82, 16777216))
				{
					StringConCat(&Var0, "_close2", 24);
					__LIB_31__::func_446(&(uParam0->f_82), 16777216);
				}
				else if (!__LIB_0__::func_517(uParam0->f_82, 33554432))
				{
					StringConCat(&Var0, "_close3", 24);
					__LIB_31__::func_446(&(uParam0->f_82), 33554432);
				}
				__LIB_35__::func_349(Var0, uParam1);
				__LIB_35__::func_334(uParam0, 16, 0, 0);
				__LIB_37__::func_675(uParam0, 0, 0);
				break;
			case 58:
				if (uParam0->f_411 == 6)
				{
					StringConCat(&Var0, "_kill1", 24);
					cVar1 = { Var0 };
					__LIB_31__::func_435(&(uParam0->f_93), 6, &cVar1, 1, 1, 1);
					__LIB_31__::func_385(&Var0);
					__LIB_35__::func_901(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				}
				else if (uParam0->f_411 == 8)
				{
					StringConCat(&Var0, "_cheat1", 24);
					__LIB_41__::func_495(uParam0, &Var0, 0, 0, 8);
				}
				else
				{
					StringConCat(&Var0, "_kill1", 24);
					__LIB_41__::func_495(uParam0, &Var0, 0, 0, 8);
				}
				__LIB_35__::func_334(uParam0, 16, 0, 0);
				__LIB_37__::func_675(uParam0, 0, 0);
				break;
			case 95:
				StringConCat(&Var0, "_wndw2", 24);
				__LIB_35__::func_349(Var0, uParam1);
				__LIB_35__::func_334(uParam0, 16, 0, 0);
				__LIB_35__::func_334(uParam0, 11, 0, 0);
				__LIB_37__::func_675(uParam0, 0, 0);
				break;
			case 94:
				StringConCat(&Var0, "_wndw0", 24);
				__LIB_35__::func_349(Var0, uParam1);
				__LIB_35__::func_334(uParam0, 16, 0, 0);
				__LIB_35__::func_334(uParam0, 11, 0, 0);
				__LIB_37__::func_675(uParam0, 0, 0);
				break;
			case 96:
				StringConCat(&Var0, "_wndw1", 24);
				__LIB_35__::func_349(Var0, uParam1);
				__LIB_35__::func_334(uParam0, 16, 0, 0);
				__LIB_35__::func_334(uParam0, 11, 0, 0);
				__LIB_37__::func_675(uParam0, 0, 0);
				break;
			case 113:
				StringConCat(&Var0, "_csite1", 24);
				__LIB_31__::func_385(&Var0);
				__LIB_41__::func_495(uParam0, &Var0, 0, 0, 8);
				break;
			case 119:
				StringConCat(&Var0, "_fair1", 24);
				__LIB_31__::func_385(&Var0);
				__LIB_41__::func_495(uParam0, &Var0, 0, 0, 8);
				break;
			case 115:
				StringConCat(&Var0, "_AlCk1", 24);
				cVar1 = { Var0 };
				__LIB_31__::func_435(&(uParam0->f_91), 5, &cVar1, 1, 1, 0);
				__LIB_35__::func_901(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				__LIB_35__::func_334(uParam0, 16, 0, 0);
				__LIB_37__::func_675(uParam0, 0, 0);
				break;
			case 116:
				StringConCat(&Var0, "_eggG1", 24);
				cVar1 = { Var0 };
				__LIB_31__::func_435(&(uParam0->f_92), 5, &cVar1, 1, 1, 0);
				__LIB_35__::func_901(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar1, 8, 0, 0);
				__LIB_35__::func_334(uParam0, 16, 0, 0);
				__LIB_37__::func_675(uParam0, 0, 0);
				break;
			case 114:
				StringConCat(&Var0, "_goons1", 24);
				__LIB_41__::func_495(uParam0, &Var0, 0, 0, 8);
				break;
			case 59:
				StringConCat(&Var0, "_oRun1", 24);
				__LIB_41__::func_495(uParam0, &Var0, 0, 0, 8);
				break;
			case 117:
				StringConCat(&Var0, "_gotG1", 24);
				__LIB_41__::func_495(uParam0, &Var0, 0, 0, 8);
				break;
			case 118:
				StringConCat(&Var0, "_getA1", 24);
				__LIB_41__::func_495(uParam0, &Var0, 0, 0, 8);
				break;
			case 120:
				StringConCat(&Var0, "_gnawy1", 24);
				__LIB_41__::func_495(uParam0, &Var0, 0, 0, 8);
				break;
			case 121:
				StringConCat(&Var0, "_grl1", 24);
				__LIB_31__::func_385(&Var0);
				__LIB_41__::func_495(uParam0, &Var0, 0, 0, 8);
				break;
			case 122:
				StringConCat(&Var0, "_figt1", 24);
				__LIB_41__::func_495(uParam0, &Var0, 0, 0, 8);
				break;
			case 123:
				StringConCat(&Var0, "_gEgg1", 24);
				__LIB_41__::func_495(uParam0, &Var0, 0, 0, 8);
				break;
			case 124:
				StringConCat(&Var0, "_gEgg3", 24);
				__LIB_41__::func_495(uParam0, &Var0, 0, 0, 8);
				break;
			case 125:
				StringConCat(&Var0, "_gEgg2", 24);
				__LIB_41__::func_495(uParam0, &Var0, 0, 0, 8);
				break;
			case 126:
				StringConCat(&Var0, "_gLeav1", 24);
				__LIB_41__::func_495(uParam0, &Var0, 0, 0, 8);
				break;
			case 127:
				StringConCat(&Var0, "_aKill1", 24);
				__LIB_41__::func_495(uParam0, &Var0, 0, 0, 8);
				break;
			case 129:
				StringConCat(&Var0, "_gHelp1", 24);
				__LIB_31__::func_385(&Var0);
				__LIB_41__::func_495(uParam0, &Var0, 0, 0, 8);
				break;
			case 130:
				StringConCat(&Var0, "_gDest1", 24);
				__LIB_41__::func_495(uParam0, &Var0, 0, 0, 8);
				__LIB_39__::func_641(uParam0, 11, 1, 0, 0);
				break;
			case 128:
				StringConCat(&Var0, "_gKO1", 24);
				__LIB_41__::func_495(uParam0, &Var0, 0, 0, 8);
				break;
			case 132:
				StringConCat(&Var0, "_gThank1", 24);
				__LIB_31__::func_446(&(uParam0->f_81), 2097152);
				__LIB_41__::func_495(uParam0, &Var0, 0, 0, 8);
				break;
			case 131:
				StringConCat(&Var0, "_gDriv1", 24);
				__LIB_31__::func_385(&Var0);
				__LIB_35__::func_349(Var0, uParam1);
				__LIB_31__::func_446(&(uParam0->f_81), 67108864);
				__LIB_35__::func_334(uParam0, 16, 0, 0);
				__LIB_35__::func_334(uParam0, 11, 0, 0);
				__LIB_37__::func_675(uParam0, 0, 0);
				break;
			case 60:
				StringConCat(&Var0, "_cash1", 24);
				__LIB_41__::func_495(uParam0, &Var0, 0, 0, 8);
				break;
			case 105:
				if (!__LIB_0__::func_517(uParam0->f_81, 33554432) && uParam0->f_411 != 9)
				{
					__LIB_41__::func_494(uParam0, 33554432, Var0, "_noPay1", 1, 8);
				}
				else if (uParam0->f_411 == 9)
				{
					if (!PED::IS_PED_INJURED(uParam0->f_3))
					{
						__LIB_5__::func_759(uParam0->f_3, "TAXI_NO_PAY", uParam0->f_145, 4);
					}
				}
				__LIB_39__::func_641(uParam0, 108, 1, 0, 0);
				break;
			case 106:
				StringConCat(&Var0, "_foot", 24);
				__LIB_35__::func_536(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				__LIB_35__::func_334(uParam0, 16, 0, 0);
				__LIB_37__::func_675(uParam0, 0, 0);
				break;
			case 107:
				if (!__LIB_0__::func_517(uParam0->f_81, 268435456))
				{
					__LIB_41__::func_494(uParam0, 268435456, Var0, "_kPay1", 1, 8);
				}
				__LIB_39__::func_641(uParam0, 52, 1, 0, 0);
				break;
			case 108:
				__LIB_0__::func_210("TAXI_OBJ_RUNOUT", 7500, 1);
				uParam0->f_417 = 108;
				__LIB_37__::func_675(uParam0, 0, 0);
				break;
			case 109:
				if (!__LIB_0__::func_517(uParam0->f_81, 4194304))
				{
					if (uParam0->f_411 == 2 || uParam0->f_411 == 6)
					{
						__LIB_41__::func_494(uParam0, 4194304, Var0, "_mPay1", 0, 8);
					}
					else if (uParam0->f_411 == 9)
					{
						if (!PED::IS_PED_INJURED(uParam0->f_3))
						{
							__LIB_5__::func_759(uParam0->f_3, "APOLOGY_NO_TROUBLE", uParam0->f_145, 4);
						}
					}
					else
					{
						__LIB_41__::func_494(uParam0, 4194304, Var0, "_mPay1", 1, 8);
					}
				}
				__LIB_39__::func_641(uParam0, 111, 1, 0, 0);
				break;
			case 111:
				__LIB_0__::func_210("TAXI_OBJ_GETRUN", 7500, 1);
				uParam0->f_417 = 111;
				__LIB_37__::func_675(uParam0, 0, 0);
				break;
			case 110:
				StringConCat(&Var0, "_runoff", 24);
				__LIB_35__::func_536(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				__LIB_35__::func_334(uParam0, 16, 0, 0);
				__LIB_37__::func_675(uParam0, 0, 0);
				break;
			case 141:
				if (!__LIB_0__::func_517(uParam0->f_81, 16777216))
				{
					__LIB_41__::func_494(uParam0, 16777216, Var0, "_ret1", 1, 8);
				}
				__LIB_37__::func_675(uParam0, 0, 0);
				break;
			case 88:
				__LIB_0__::func_210("TAXI_TIEFLEE", 7500, 1);
				__LIB_37__::func_675(uParam0, 0, 0);
				break;
			case 57:
				if (!__LIB_0__::func_517(uParam0->f_98, 536870912))
				{
					__LIB_0__::func_210("TAXI_OBJ_CYI_1B", 7500, 1);
					__LIB_31__::func_446(&(uParam0->f_98), 536870912);
				}
				uParam0->f_417 = 57;
				__LIB_37__::func_675(uParam0, 0, 0);
				break;
			case 104:
				StringConCat(&Var0, "_joke1", 24);
				__LIB_31__::func_385(&Var0);
				__LIB_41__::func_495(uParam0, &Var0, 0, 0, 8);
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
				__LIB_41__::func_495(uParam0, &Var0, 0, 0, 8);
				__LIB_37__::func_675(uParam0, 0, 0);
				break;
			case 140:
				StringConCat(&Var0, "_shout", 24);
				__LIB_41__::func_495(uParam0, &Var0, 0, 0, 8);
				__LIB_37__::func_675(uParam0, 0, 0);
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
				__LIB_41__::func_495(uParam0, &Var0, 0, 0, 8);
				__LIB_37__::func_675(uParam0, 0, 0);
				break;
			case 133:
				StringConCat(&Var0, "_getCar", 24);
				__LIB_41__::func_495(uParam0, &Var0, 1, 0, 8);
				__LIB_39__::func_641(uParam0, 134, 1, 0, 0);
				break;
			case 134:
				__LIB_0__::func_210("TX_VIP", 7500, 0);
				uParam0->f_417 = 134;
				__LIB_39__::func_641(uParam0, 0, 0, 0, 0);
				__LIB_37__::func_675(uParam0, 0, 0);
				break;
			}
	}
}

int func_340(var uParam0)//Position - 0xE5B1
{
	if (__LIB_0__::func_75())
	{
		return 1;
	}
	if (func_144(uParam0, 17))
	{
		return 1;
	}
	if (func_144(uParam0, 14))
	{
		return 1;
	}
	if (__LIB_15__::func_87(uParam0))
	{
		return 1;
	}
	return 0;
}

bool func_341(var uParam0, var uParam1)//Position - 0xE5F0
{
	return ((*uParam1 == -1 && uParam0->f_412 == 0) && !func_144(uParam0, 9));
}

void func_342(var uParam0)//Position - 0xE617
{
	if (func_144(uParam0, 17))
	{
		if (!func_144(uParam0, 14))
		{
			if (!__LIB_15__::func_87(uParam0))
			{
				if (!__LIB_0__::func_75())
				{
					func_142(uParam0, 17, 1);
				}
			}
		}
	}
}

void func_344(var uParam0, int iParam1, bool bParam2)//Position - 0xE65D
{
	if (uParam0->f_411 == 0)
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
		{
			if (bParam2)
			{
				if (func_398(uParam0, 10) > (20f + 10f))
				{
					if (uParam0->f_112)
					{
						__LIB_39__::func_641(uParam0, 92, 1, 0, 0);
						uParam0->f_112 = 0;
					}
					else
					{
						__LIB_39__::func_641(uParam0, 83, 1, 0, 0);
					}
					uParam0->f_113 = 1;
					__LIB_35__::func_334(uParam0, 10, 0f, 1);
				}
			}
			else if (func_398(uParam0, 10) > 20f)
			{
				if (uParam0->f_112)
				{
					__LIB_39__::func_641(uParam0, 92, 1, 0, 0);
					uParam0->f_112 = 0;
				}
				else
				{
					__LIB_39__::func_641(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_113 = 1;
				__LIB_35__::func_334(uParam0, 10, 0f, 1);
			}
		}
	}
	if (uParam0->f_411 == 1)
	{
		if (func_398(uParam0, 10) > 30f)
		{
			if (!__LIB_0__::func_75())
			{
				if (uParam0->f_112)
				{
					__LIB_39__::func_641(uParam0, 92, 1, 0, 0);
					uParam0->f_112 = 0;
				}
				else
				{
					__LIB_39__::func_641(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_113 = 1;
				__LIB_35__::func_334(uParam0, 10, 0f, 1);
			}
		}
	}
	if (__LIB_0__::func_517(uParam0->f_100, 64))
	{
		if (!__LIB_0__::func_736(&(Local_162[5 /*10*/].f_6)))
		{
			__LIB_18__::func_276(&(Local_162[5 /*10*/].f_6));
		}
		else if (__LIB_19__::func_812(&(Local_162[5 /*10*/].f_6)) > 6f)
		{
			if (func_367(uParam0))
			{
				if (uParam0->f_113)
				{
					__LIB_39__::func_641(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					__LIB_39__::func_641(uParam0, Local_162[5 /*10*/].f_9, 1, 0, 0);
				}
				__LIB_31__::func_404(uParam0, 1);
				func_364(5, uParam0);
				func_363(uParam0);
			}
		}
	}
	if (__LIB_0__::func_517(uParam0->f_100, 1))
	{
		if (!__LIB_0__::func_736(&(Local_162[0 /*10*/].f_6)))
		{
			__LIB_18__::func_276(&(Local_162[0 /*10*/].f_6));
		}
		else if (__LIB_19__::func_812(&(Local_162[0 /*10*/].f_6)) > 5f)
		{
			if (func_362(uParam0))
			{
				__LIB_31__::func_404(uParam0, 1);
				func_364(0, uParam0);
				if (uParam0->f_113)
				{
					__LIB_39__::func_641(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					__LIB_39__::func_641(uParam0, Local_162[0 /*10*/].f_9, 1, 0, 0);
				}
				func_363(uParam0);
			}
		}
	}
	if (__LIB_0__::func_517(uParam0->f_100, 2))
	{
		if (!__LIB_0__::func_736(&(Local_162[1 /*10*/].f_6)))
		{
			__LIB_18__::func_276(&(Local_162[1 /*10*/].f_6));
		}
		else if (__LIB_19__::func_812(&(Local_162[1 /*10*/].f_6)) > 5f)
		{
			if (func_361(uParam0))
			{
				__LIB_31__::func_404(uParam0, 1);
				func_364(1, uParam0);
				if (uParam0->f_113)
				{
					__LIB_39__::func_641(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					__LIB_39__::func_641(uParam0, Local_162[1 /*10*/].f_9, 1, 0, 0);
				}
				func_363(uParam0);
			}
		}
	}
	if (__LIB_0__::func_517(uParam0->f_100, 2048))
	{
		if (!__LIB_0__::func_736(&(Local_162[8 /*10*/].f_6)))
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
			{
				uParam0->f_46 = ENTITY::GET_ENTITY_HEALTH(uParam0->f_4);
				__LIB_18__::func_276(&(Local_162[8 /*10*/].f_6));
			}
		}
		else if (__LIB_19__::func_812(&(Local_162[8 /*10*/].f_6)) > 7f || Local_162[8 /*10*/].f_1 == 0)
		{
			if (func_360(uParam0))
			{
				__LIB_31__::func_404(uParam0, 1);
				func_364(8, uParam0);
				func_363(uParam0);
			}
		}
	}
	if (__LIB_0__::func_517(uParam0->f_100, 128))
	{
		if (!__LIB_0__::func_736(&(Local_162[6 /*10*/].f_6)))
		{
			__LIB_18__::func_276(&(Local_162[6 /*10*/].f_6));
		}
		else if (__LIB_19__::func_812(&(Local_162[6 /*10*/].f_6)) > 5f)
		{
			if (func_359(uParam0))
			{
				__LIB_31__::func_404(uParam0, 1);
				func_364(6, uParam0);
				if (uParam0->f_113)
				{
					__LIB_39__::func_641(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					__LIB_39__::func_641(uParam0, Local_162[6 /*10*/].f_9, 1, 0, 0);
				}
				func_363(uParam0);
			}
		}
	}
	if (__LIB_0__::func_517(uParam0->f_100, 32))
	{
		if (!__LIB_0__::func_736(&(Local_162[4 /*10*/].f_6)))
		{
			__LIB_18__::func_276(&(Local_162[4 /*10*/].f_6));
		}
		else if (__LIB_19__::func_812(&(Local_162[4 /*10*/].f_6)) > 4f)
		{
			if (func_358(uParam0))
			{
				__LIB_31__::func_404(uParam0, 1);
				func_364(4, uParam0);
				if (uParam0->f_113)
				{
					__LIB_39__::func_641(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					__LIB_39__::func_641(uParam0, Local_162[4 /*10*/].f_9, 1, 0, 0);
				}
				func_363(uParam0);
			}
		}
	}
	if (__LIB_0__::func_517(uParam0->f_100, 256))
	{
		if (!__LIB_0__::func_736(&(Local_162[7 /*10*/].f_6)))
		{
			__LIB_18__::func_276(&(Local_162[7 /*10*/].f_6));
		}
		else if (__LIB_19__::func_812(&(Local_162[7 /*10*/].f_6)) > 5f || Local_162[7 /*10*/].f_1 == 0)
		{
			if (__LIB_31__::func_402(uParam0))
			{
				func_364(7, uParam0);
				__LIB_31__::func_404(uParam0, 1);
				if (uParam0->f_113)
				{
					__LIB_39__::func_641(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					__LIB_39__::func_641(uParam0, Local_162[7 /*10*/].f_9, 1, 0, 1);
				}
				func_363(uParam0);
			}
		}
	}
	if (__LIB_0__::func_517(uParam0->f_100, 8))
	{
		if (!__LIB_0__::func_736(&(Local_162[9 /*10*/].f_6)))
		{
			__LIB_18__::func_276(&(Local_162[9 /*10*/].f_6));
		}
		else if (__LIB_19__::func_812(&(Local_162[9 /*10*/].f_6)) <= 7f)
		{
			PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
		}
		else if (__LIB_19__::func_812(&(Local_162[9 /*10*/].f_6)) > 7f || Local_162[9 /*10*/].f_1 == 0)
		{
			if (__LIB_31__::func_401(uParam0))
			{
				__LIB_31__::func_404(uParam0, 1);
				func_364(9, uParam0);
				if (uParam0->f_113)
				{
					__LIB_39__::func_641(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					__LIB_39__::func_641(uParam0, Local_162[9 /*10*/].f_9, 1, 0, 1);
				}
				func_363(uParam0);
			}
		}
	}
	if (__LIB_0__::func_517(uParam0->f_100, 16384))
	{
		if (!__LIB_0__::func_736(&(Local_162[13 /*10*/].f_6)))
		{
			__LIB_18__::func_276(&(Local_162[13 /*10*/].f_6));
		}
		else if (__LIB_19__::func_812(&(Local_162[13 /*10*/].f_6)) > 10f)
		{
			if (func_350(uParam0))
			{
				__LIB_31__::func_404(uParam0, 1);
				func_364(13, uParam0);
				if (uParam0->f_113)
				{
					__LIB_39__::func_641(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					__LIB_39__::func_641(uParam0, Local_162[13 /*10*/].f_9, 1, 0, 0);
				}
				func_363(uParam0);
			}
		}
	}
	if (__LIB_0__::func_517(uParam0->f_100, 32768))
	{
		if (!__LIB_0__::func_736(&(Local_162[14 /*10*/].f_6)))
		{
			__LIB_18__::func_276(&(Local_162[14 /*10*/].f_6));
		}
		else if (__LIB_19__::func_812(&(Local_162[14 /*10*/].f_6)) > 7f)
		{
			if (func_349(uParam0))
			{
				__LIB_31__::func_404(uParam0, 1);
				func_364(14, uParam0);
				if (uParam0->f_113)
				{
					__LIB_39__::func_641(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					__LIB_39__::func_641(uParam0, Local_162[14 /*10*/].f_9, 1, 0, 0);
				}
				func_363(uParam0);
			}
		}
	}
	if (__LIB_0__::func_517(uParam0->f_100, 4096))
	{
		if (!__LIB_0__::func_736(&(Local_162[11 /*10*/].f_6)))
		{
			__LIB_18__::func_276(&(Local_162[11 /*10*/].f_6));
		}
		else if (__LIB_19__::func_812(&(Local_162[11 /*10*/].f_6)) > 8f)
		{
			if (func_348(uParam0))
			{
				__LIB_31__::func_404(uParam0, 1);
				func_364(11, uParam0);
				if (uParam0->f_113)
				{
					__LIB_39__::func_641(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					__LIB_39__::func_641(uParam0, Local_162[11 /*10*/].f_9, 1, 0, 0);
				}
				func_363(uParam0);
			}
		}
	}
	if (__LIB_0__::func_517(uParam0->f_100, 8192))
	{
		if (!__LIB_0__::func_736(&(Local_162[12 /*10*/].f_6)))
		{
			__LIB_18__::func_276(&(Local_162[12 /*10*/].f_6));
		}
		else if (__LIB_19__::func_812(&(Local_162[12 /*10*/].f_6)) > 5f)
		{
			if (func_347(uParam0))
			{
				__LIB_31__::func_404(uParam0, 1);
				func_364(12, uParam0);
				if (uParam0->f_113)
				{
					__LIB_39__::func_641(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					__LIB_39__::func_641(uParam0, Local_162[12 /*10*/].f_9, 1, 0, 0);
				}
				func_363(uParam0);
			}
		}
	}
	if (__LIB_0__::func_517(uParam0->f_100, 4))
	{
		if (!__LIB_0__::func_736(&(Local_162[2 /*10*/].f_6)))
		{
			__LIB_6__::func_878(&(Local_162[2 /*10*/].f_6), 0f);
		}
		else if (__LIB_19__::func_812(&(Local_162[2 /*10*/].f_6)) > 5f)
		{
			if (func_345(uParam0))
			{
				if (uParam0->f_113)
				{
					__LIB_39__::func_641(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					__LIB_39__::func_641(uParam0, Local_162[2 /*10*/].f_9, 1, 0, 0);
				}
				__LIB_31__::func_404(uParam0, 1);
				func_364(2, uParam0);
				func_363(uParam0);
			}
		}
	}
}

int func_345(var uParam0)//Position - 0xEE57
{
	float fVar0;
	if (!PED::IS_PED_INJURED(uParam0->f_2))
	{
		if ((!PED::IS_PED_STOPPED(uParam0->f_2) && !__LIB_0__::func_736(&(Local_162[0 /*10*/].f_3))) && !__LIB_0__::func_736(&(Local_162[1 /*10*/].f_3)))
		{
			if (!__LIB_0__::func_736(&(Local_162[2 /*10*/].f_3)))
			{
				uParam0->f_37 = ENTITY::GET_ENTITY_SPEED(uParam0->f_2);
				if (uParam0->f_37 > 10f)
				{
					__LIB_18__::func_276(&(Local_162[2 /*10*/].f_3));
				}
			}
			else if (__LIB_19__::func_812(&(Local_162[2 /*10*/].f_3)) > 0.9f)
			{
				uParam0->f_38 = uParam0->f_37;
				uParam0->f_37 = ENTITY::GET_ENTITY_SPEED(uParam0->f_2);
				fVar0 = (uParam0->f_38 - uParam0->f_37);
				__LIB_0__::func_735(&(Local_162[2 /*10*/].f_3));
				if (fVar0 > 10f && uParam0->f_37 < 12f)
				{
					return 1;
				}
			}
		}
		else
		{
			__LIB_0__::func_735(&(Local_162[2 /*10*/].f_3));
		}
	}
	return 0;
}

int func_347(var uParam0)//Position - 0xEF54
{
	struct<3> Var0;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		Var0 = { ENTITY::GET_ENTITY_SPEED_VECTOR(uParam0->f_4, true) };
		if (Var0.f_1 < -10f && !__LIB_0__::func_736(&(Local_162[0 /*10*/].f_3)))
		{
			if (!__LIB_0__::func_736(&(Local_162[12 /*10*/].f_3)))
			{
				__LIB_18__::func_276(&(Local_162[12 /*10*/].f_3));
			}
			else if (__LIB_19__::func_812(&(Local_162[12 /*10*/].f_3)) > 5f)
			{
				__LIB_0__::func_735(&(Local_162[12 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			__LIB_0__::func_735(&(Local_162[12 /*10*/].f_3));
		}
	}
	return 0;
}

int func_348(var uParam0)//Position - 0xEFE3
{
	struct<3> Var0;
	if ((((((VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false) && !__LIB_0__::func_736(&(Local_162[0 /*10*/].f_3))) && !__LIB_0__::func_736(&(Local_162[1 /*10*/].f_3))) && !__LIB_0__::func_736(&(Local_162[5 /*10*/].f_3))) && !__LIB_0__::func_736(&(Local_162[9 /*10*/].f_3))) && !__LIB_0__::func_736(&(Local_162[7 /*10*/].f_3))) && !__LIB_0__::func_736(&(Local_162[8 /*10*/].f_3)))
	{
		Var0 = { ENTITY::GET_ENTITY_SPEED_VECTOR(uParam0->f_4, true) };
		if (MISC::ABSF(Var0.f_0) > 2.5f && !__LIB_0__::func_736(&(Local_162[0 /*10*/].f_3)))
		{
			if (!__LIB_0__::func_736(&(Local_162[11 /*10*/].f_3)))
			{
				__LIB_18__::func_276(&(Local_162[11 /*10*/].f_3));
				fLocal_164 = Var0.f_0;
			}
			else if (__LIB_19__::func_812(&(Local_162[11 /*10*/].f_3)) < 1.5f && (MISC::ABSF(fLocal_164) - MISC::ABSF(Var0.f_0)) < 0f)
			{
				__LIB_0__::func_735(&(Local_162[11 /*10*/].f_3));
				return 1;
			}
			else if (__LIB_19__::func_812(&(Local_162[11 /*10*/].f_3)) >= 1.5f)
			{
				__LIB_0__::func_735(&(Local_162[11 /*10*/].f_3));
				return 0;
			}
		}
	}
	return 0;
}

int func_349(var uParam0)//Position - 0xF113
{
	if (((((VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false) && !__LIB_0__::func_736(&(Local_162[0 /*10*/].f_3))) && !__LIB_0__::func_736(&(Local_162[8 /*10*/].f_3))) && !__LIB_0__::func_736(&(Local_162[5 /*10*/].f_3))) && !__LIB_0__::func_736(&(Local_162[9 /*10*/].f_3))) && !__LIB_0__::func_736(&(Local_162[7 /*10*/].f_3)))
	{
		if (!__LIB_0__::func_736(&(Local_162[14 /*10*/].f_3)))
		{
			uParam0->f_5 = VEHICLE::GET_CLOSEST_VEHICLE(ENTITY::GET_ENTITY_COORDS(uParam0->f_4, true), 10f, 0, 260);
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_5))
			{
				if ((ENTITY::GET_ENTITY_SPEED(uParam0->f_4) > 15f && __LIB_0__::func_76(uParam0->f_5, uParam0->f_4, 1) < 3f) && (!ENTITY::IS_ENTITY_DEAD(uParam0->f_5, false) && !VEHICLE::IS_VEHICLE_SEAT_FREE(uParam0->f_5, -1, false)))
				{
					__LIB_18__::func_276(&(Local_162[14 /*10*/].f_3));
				}
			}
		}
		else if ((__LIB_19__::func_812(&(Local_162[14 /*10*/].f_3)) < 1.5f && __LIB_0__::func_76(uParam0->f_5, uParam0->f_4, 1) > 4.5f) && !ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(uParam0->f_5))
		{
			__LIB_0__::func_735(&(Local_162[14 /*10*/].f_3));
			return 1;
		}
		else if (__LIB_19__::func_812(&(Local_162[14 /*10*/].f_3)) >= 1.5f)
		{
			__LIB_0__::func_735(&(Local_162[14 /*10*/].f_3));
			return 0;
		}
		else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(uParam0->f_5))
		{
			__LIB_0__::func_735(&(Local_162[14 /*10*/].f_3));
			return 0;
		}
	}
	return 0;
}

int func_350(var uParam0)//Position - 0xF298
{
	if (((VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false) && !__LIB_0__::func_736(&(Local_162[9 /*10*/].f_3))) && !__LIB_0__::func_736(&(Local_162[7 /*10*/].f_3))) && !__LIB_0__::func_736(&(Local_162[4 /*10*/].f_3)))
	{
		if (!__LIB_37__::func_676(uParam0->f_4) && ENTITY::GET_ENTITY_SPEED(uParam0->f_4) > 15f)
		{
			if (!__LIB_0__::func_736(&(Local_162[13 /*10*/].f_3)))
			{
				__LIB_18__::func_276(&(Local_162[13 /*10*/].f_3));
			}
			else if (__LIB_19__::func_812(&(Local_162[13 /*10*/].f_3)) > 5f)
			{
				__LIB_0__::func_735(&(Local_162[13 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			__LIB_0__::func_735(&(Local_162[13 /*10*/].f_3));
		}
	}
	return 0;
}

int func_358(var uParam0)//Position - 0xF6AA
{
	int iVar0;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		iVar0 = PLAYER::GET_TIME_SINCE_PLAYER_DROVE_ON_PAVEMENT(PLAYER::PLAYER_ID());
		if (iVar0 == 0)
		{
			if (!__LIB_0__::func_736(&(Local_162[4 /*10*/].f_3)))
			{
				__LIB_18__::func_276(&(Local_162[4 /*10*/].f_3));
			}
			else if (__LIB_19__::func_812(&(Local_162[4 /*10*/].f_3)) > 2f)
			{
				__LIB_0__::func_735(&(Local_162[4 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			__LIB_0__::func_735(&(Local_162[4 /*10*/].f_3));
		}
	}
	return 0;
}

int func_359(var uParam0)//Position - 0xF71C
{
	int iVar0;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		iVar0 = PLAYER::GET_TIME_SINCE_PLAYER_DROVE_AGAINST_TRAFFIC(PLAYER::PLAYER_ID());
		if (iVar0 == 0)
		{
			if (!__LIB_0__::func_736(&(Local_162[6 /*10*/].f_3)))
			{
				__LIB_18__::func_276(&(Local_162[6 /*10*/].f_3));
			}
			else if (__LIB_19__::func_812(&(Local_162[6 /*10*/].f_3)) > 3.5f)
			{
				__LIB_0__::func_735(&(Local_162[6 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			__LIB_0__::func_735(&(Local_162[6 /*10*/].f_3));
		}
	}
	return 0;
}

int func_360(var uParam0)//Position - 0xF792
{
	int iVar0;
	int iVar1;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(uParam0->f_4))
		{
			iVar0 = ENTITY::GET_ENTITY_HEALTH(uParam0->f_4);
			iVar1 = (uParam0->f_46 - iVar0);
			uParam0->f_46 = iVar0;
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(uParam0->f_4);
			if (IntToFloat(iVar1) > 10f)
			{
				if (uParam0->f_113)
				{
					__LIB_39__::func_641(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					__LIB_39__::func_641(uParam0, 72, 1, 0, 1);
				}
				__LIB_0__::func_735(&(Local_162[2 /*10*/].f_6));
				return 1;
			}
		}
	}
	return 0;
}

int func_361(var uParam0)//Position - 0xF813
{
	struct<3> Var0;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		Var0 = { ENTITY::GET_ENTITY_SPEED_VECTOR(uParam0->f_4, true) };
		if (MISC::ABSF(Var0.f_0) > 3f && !__LIB_0__::func_736(&(Local_162[0 /*10*/].f_3)))
		{
			if (!__LIB_0__::func_736(&(Local_162[1 /*10*/].f_3)))
			{
				__LIB_18__::func_276(&(Local_162[1 /*10*/].f_3));
			}
			else if (__LIB_19__::func_812(&(Local_162[1 /*10*/].f_3)) > 1.2f)
			{
				__LIB_0__::func_735(&(Local_162[1 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			__LIB_0__::func_735(&(Local_162[1 /*10*/].f_3));
		}
	}
	return 0;
}

int func_362(var uParam0)//Position - 0xF89F
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (!VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(uParam0->f_4) && ENTITY::IS_ENTITY_IN_AIR(uParam0->f_4))
		{
			if (!__LIB_0__::func_736(&(Local_162[0 /*10*/].f_3)))
			{
				__LIB_18__::func_276(&(Local_162[0 /*10*/].f_3));
			}
			else if (__LIB_19__::func_812(&(Local_162[0 /*10*/].f_3)) > 0.7f)
			{
				__LIB_0__::func_735(&(Local_162[0 /*10*/].f_3));
				__LIB_6__::func_892(&(Local_162[1 /*10*/].f_6));
				return 1;
			}
		}
		else
		{
			__LIB_0__::func_735(&(Local_162[0 /*10*/].f_3));
		}
	}
	return 0;
}

void func_363(var uParam0)//Position - 0xF929
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (__LIB_0__::func_736(&(Local_162[iVar0 /*10*/].f_6)))
		{
			__LIB_6__::func_892(&(Local_162[iVar0 /*10*/].f_6));
		}
		iVar0++;
	}
	__LIB_35__::func_334(uParam0, 10, 0f, 1);
	PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
}

void func_364(int iParam0, var uParam1)//Position - 0xF971
{
	Local_162[iParam0 /*10*/].f_1++;
	__LIB_31__::func_403(uParam1, iParam0);
	__LIB_0__::func_735(&(Local_162[iParam0 /*10*/].f_6));
	uParam1->f_112 = 1;
}

int func_367(var uParam0)//Position - 0xF9CE
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
	{
		if (ENTITY::GET_ENTITY_SPEED(uParam0->f_4) > 25f)
		{
			if (!__LIB_0__::func_736(&(Local_162[5 /*10*/].f_3)))
			{
				__LIB_18__::func_276(&(Local_162[5 /*10*/].f_3));
			}
			else if (__LIB_19__::func_812(&(Local_162[5 /*10*/].f_3)) > 3.5f)
			{
				__LIB_0__::func_735(&(Local_162[5 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			__LIB_0__::func_735(&(Local_162[5 /*10*/].f_3));
		}
	}
	return 0;
}

void func_368(var uParam0)//Position - 0xFA45
{
	if (!__LIB_31__::func_400(uParam0))
	{
		if ((MISC::GET_GAME_TIMER() % 1000) < 50)
		{
		}
		func_157(uParam0, 1);
	}
	else if (func_144(uParam0, 14))
	{
		func_171(uParam0);
		__LIB_41__::func_501(uParam0, 0);
	}
}

void func_371()//Position - 0xFC1F
{
	if ((SYSTEM::ROUND((func_398(&Local_230, 7) * 1000f)) % 10000) < 50)
	{
	}
	if (!func_375(&Local_230, 27, fLocal_334[0]))
	{
		switch (iLocal_254)
		{
			case 0:
				func_373();
				Local_230.f_39 = fLocal_334[1];
				Local_230.f_40 = fLocal_334[2];
				iLocal_254++;
				break;
			case 1:
				func_372(26, 27, Local_230.f_39);
				break;
			}
	}
}

int func_372(int iParam0, int iParam1, float fParam2)//Position - 0xFC9E
{
	if (func_144(&Local_230, 7))
	{
		if (iLocal_341 < 22)
		{
			if (!__LIB_0__::func_75())
			{
				if (func_398(&Local_230, 7) <= (fLocal_335[iLocal_341] + 6f) && func_398(&Local_230, 7) >= (fLocal_335[iLocal_341] - 6f))
				{
					if (__LIB_10__::func_567(Local_230.f_17, 0) <= fLocal_336[iLocal_341] && iLocal_342 < 8)
					{
						if (!iLocal_344)
						{
							iLocal_341++;
							iLocal_342++;
							__LIB_39__::func_641(&Local_230, iParam0, 1, 0, 0);
							__LIB_6__::func_892(&iLocal_261);
							iLocal_344 = 1;
						}
						if (__LIB_0__::func_736(&iLocal_261))
						{
							if (__LIB_19__::func_812(&iLocal_261) > 20f)
							{
								iLocal_341++;
								iLocal_342++;
								__LIB_39__::func_641(&Local_230, iParam0, 1, 0, 0);
								__LIB_0__::func_735(&iLocal_261);
								__LIB_6__::func_892(&iLocal_261);
							}
						}
						return 1;
					}
					else if (__LIB_10__::func_567(Local_230.f_17, 0) > fLocal_336[iLocal_341] && iLocal_343 < 8)
					{
						if (!iLocal_344)
						{
							iLocal_341++;
							iLocal_343++;
							__LIB_39__::func_641(&Local_230, iParam1, 1, 0, 0);
							__LIB_6__::func_892(&iLocal_261);
							iLocal_344 = 1;
						}
						if (__LIB_0__::func_736(&iLocal_261))
						{
							if (__LIB_19__::func_812(&iLocal_261) > 20f)
							{
								iLocal_341++;
								iLocal_343++;
								__LIB_39__::func_641(&Local_230, iParam1, 1, 0, 0);
								__LIB_0__::func_735(&iLocal_261);
								__LIB_6__::func_892(&iLocal_261);
							}
						}
						return 1;
					}
				}
				else if (func_398(&Local_230, 7) > (fLocal_335[iLocal_341] + 6f))
				{
					iLocal_341++;
					return 1;
				}
			}
		}
		else if (func_398(&Local_230, 7) >= fParam2 && __LIB_10__::func_567(Local_230.f_17, 0) > 50f)
		{
			if (!__LIB_0__::func_75())
			{
				if (!__LIB_0__::func_736(&iLocal_264))
				{
					__LIB_6__::func_892(&iLocal_264);
				}
				else if (__LIB_19__::func_812(&iLocal_264) > 4f)
				{
					__LIB_39__::func_641(&Local_230, iParam1, 1, 0, 0);
				}
			}
			else if (__LIB_0__::func_736(&iLocal_264))
			{
				__LIB_0__::func_735(&iLocal_264);
			}
			return 1;
		}
	}
	return 0;
}

void func_373()//Position - 0xFEBF
{
	if (iLocal_333 == 2)
	{
		iLocal_331 = 3;
		iLocal_332 = 4;
		fLocal_334[0] = 210f;
		fLocal_334[1] = 60f;
		fLocal_334[2] = 3150f;
		fLocal_334[3] = 105f;
		fLocal_334[4] = 1800f;
		fLocal_334[5] = 150f;
		fLocal_334[6] = 200f;
	}
	else
	{
		iLocal_331 = 9;
		iLocal_332 = 10;
		fLocal_334[0] = 140f;
		fLocal_334[1] = 60f;
		fLocal_334[2] = 1780f;
		fLocal_334[3] = 90f;
		fLocal_334[4] = 900f;
		fLocal_334[5] = 120f;
		fLocal_334[6] = 228f;
	}
	fLocal_335[0] = 70.05005f;
	fLocal_336[0] = 3090.4175f;
	fLocal_335[1] = 76.25293f;
	fLocal_336[1] = 2929.0833f;
	fLocal_335[2] = 82.693115f;
	fLocal_336[2] = 2759.8303f;
	fLocal_335[3] = 88.343994f;
	fLocal_336[3] = 2576.0613f;
	fLocal_335[4] = 94.97803f;
	fLocal_336[4] = 2350.886f;
	fLocal_335[5] = 100.798096f;
	fLocal_336[5] = 2177.4424f;
	fLocal_335[6] = 106.46704f;
	fLocal_336[6] = 2016.6814f;
	fLocal_335[7] = 112.928955f;
	fLocal_336[7] = 1839.4174f;
	fLocal_335[8] = 118.4209f;
	fLocal_336[8] = 1689.6205f;
	fLocal_335[9] = 124.42407f;
	fLocal_336[9] = 1526.638f;
	fLocal_335[10] = 130.76001f;
	fLocal_336[10] = 1356.0388f;
	fLocal_335[11] = 136.69995f;
	fLocal_336[11] = 1184.0127f;
	fLocal_335[12] = 142.573f;
	fLocal_336[12] = 1034.024f;
	fLocal_335[13] = 148.21606f;
	fLocal_336[13] = 894.6225f;
	fLocal_335[14] = 154.43213f;
	fLocal_336[14] = 756.5219f;
	fLocal_335[15] = 160.2749f;
	fLocal_336[15] = 669.36395f;
	fLocal_335[16] = 166.25f;
	fLocal_336[16] = 570.29535f;
	fLocal_335[17] = 172.25098f;
	fLocal_336[17] = 521.977f;
	fLocal_335[18] = 178.60596f;
	fLocal_336[18] = 340.74658f;
	fLocal_335[19] = 184.68091f;
	fLocal_336[19] = 224.30913f;
	fLocal_335[20] = 190.70801f;
	fLocal_336[20] = 126.95346f;
	fLocal_335[21] = 193.06201f;
	fLocal_336[21] = 81.80421f;
	Local_230.f_23 = { func_281(iLocal_331) };
	Local_230.f_33 = func_374(iLocal_331);
	Local_230.f_26 = { func_281(1) };
	Local_230.f_34 = func_374(1);
	Local_230.f_29 = { 328.67575f, 443.98456f, 144.22983f };
}

float func_374(int iParam0)//Position - 0x101C5
{
	float fVar0;
	fVar0 = 0f;
	switch (iParam0)
	{
		case 0:
			fVar0 = 328.48f;
			break;
		case 1:
			fVar0 = 328.48f;
			break;
		case 2:
			fVar0 = 239.143f;
			break;
		case 3:
			fVar0 = 121.2021f;
			break;
		case 5:
			fVar0 = 268.6f;
			break;
		case 6:
			fVar0 = 218.5f;
			break;
		case 8:
			fVar0 = 268.6f;
			break;
		case 9:
			fVar0 = 301.6025f;
			break;
	}
	return fVar0;
}

int func_375(var uParam0, int iParam1, float fParam2)//Position - 0x10259
{
	if (uParam0->f_410 < 29)
	{
		if (func_144(uParam0, 7))
		{
			func_143(uParam0, 23);
			if (func_398(uParam0, 7) > fParam2 && func_398(uParam0, 23) > 35f)
			{
				__LIB_35__::func_334(uParam0, 23, 0, 0);
				__LIB_39__::func_641(uParam0, iParam1, 1, 0, 0);
				return 1;
			}
		}
	}
	return 0;
}

int func_376(var uParam0, var uParam1)//Position - 0x102B7
{
	var uVar0;
	if (!func_144(uParam0, 27))
	{
		func_143(uParam0, 27);
		uParam1->f_3 = 250;
		uParam1->f_2 = 40f;
	}
	if (!uParam0->f_109 && func_398(uParam0, 27) > 5f)
	{
		if (__LIB_37__::func_677(uParam0->f_3, uParam0->f_4, uParam1, &uVar0, 0, 1, 0, 1, 1))
		{
			__LIB_35__::func_334(uParam0, 27, 0, 0);
			__LIB_35__::func_334(uParam0, 10, 0, 0);
			__LIB_42__::func_43(uParam0, &uVar0, uParam1);
		}
		func_385(uParam0);
	}
	if (uParam0->f_410 >= 3 && uParam0->f_410 <= 5)
	{
		func_377(uParam0);
	}
	if ((((!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) && (CAM::DOES_CAM_EXIST(*uParam0) && !CAM::IS_CAM_ACTIVE(*uParam0))) && (CAM::DOES_CAM_EXIST(uParam0->f_1) && !CAM::IS_CAM_ACTIVE(uParam0->f_1))) && !HUD::IS_MESSAGE_BEING_DISPLAYED()) && !__LIB_0__::func_75())
	{
		if (func_398(uParam0, 26) > 10f)
		{
			func_142(uParam0, 26, 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		}
	}
	else if (func_144(uParam0, 26))
	{
		func_142(uParam0, 26, 0);
	}
	return 0;
}

void func_377(var uParam0)//Position - 0x103E1
{
	if (!__LIB_9__::func_51(uParam0->f_429))
	{
		uParam0->f_429 = func_202();
		func_382(&(uParam0->f_429), 0, 0, MISC::GET_RANDOM_INT_IN_RANGE(4, 7), 0, 0, 0);
	}
	else if (func_378(uParam0->f_429))
	{
		__LIB_42__::func_41(uParam0, "Player took too long to make pickup", 9);
	}
}

bool func_378(int iParam0)//Position - 0x1042E
{
	return __LIB_20__::func_682(func_202(), iParam0);
}

void func_382(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x10571
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	iVar0 = __LIB_1__::func_26(*uParam0);
	iVar1 = __LIB_0__::func_411(*uParam0);
	iVar2 = __LIB_0__::func_482(*uParam0);
	iVar3 = __LIB_0__::func_196(*uParam0);
	iVar4 = __LIB_0__::func_195(*uParam0);
	iVar5 = __LIB_0__::func_483(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = __LIB_0__::func_139(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = __LIB_0__::func_139(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_383(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_383(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x106F3
{
	__LIB_0__::func_144(uParam0, iParam1);
	__LIB_12__::func_264(uParam0, iParam2);
	__LIB_0__::func_142(uParam0, iParam3);
	__LIB_0__::func_141(uParam0, iParam5);
	__LIB_8__::func_242(uParam0, iParam4);
	__LIB_0__::func_140(uParam0, iParam6);
}

void func_385(var uParam0)//Position - 0x10807
{
	var uVar0;
	if (uParam0->f_410 < 7 && !uParam0->f_138)
	{
		if (((uParam0->f_411 == 9 && __LIB_31__::func_360()) && !__LIB_31__::func_400(uParam0)) || ((uParam0->f_411 != 9 && __LIB_35__::func_344(uParam0, 1)) && !__LIB_31__::func_400(uParam0)))
		{
			uVar0 = __LIB_1__::func_192(uParam0->f_4);
			ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&uVar0);
			uParam0->f_4 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_4, true, false);
			func_171(uParam0);
			__LIB_41__::func_501(uParam0, 0);
		}
	}
}

float func_398(var uParam0, int iParam1)//Position - 0x1110F
{
	if (!__LIB_0__::func_736(&(uParam0->f_146[iParam1 /*3*/])))
	{
		__LIB_18__::func_276(&(uParam0->f_146[iParam1 /*3*/]));
	}
	return __LIB_19__::func_812(&(uParam0->f_146[iParam1 /*3*/]));
}

void func_399()//Position - 0x1113F
{
	func_400(&Local_230);
	func_417();
}

void func_400(var uParam0)//Position - 0x11152
{
	func_10(0, uParam0, 1);
	if (uParam0->f_411 != 9)
	{
		__LIB_30__::func_728(2);
	}
}

int func_401(var uParam0, bool bParam1)//Position - 0x11171
{
	if (bParam1)
	{
		return 1;
	}
	if ((((!__LIB_0__::func_75() && func_398(uParam0, 3) > 1f) || uParam0->f_415 == 18) || uParam0->f_415 == 14) || uParam0->f_415 == 15)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3, false))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
			{
				if (PED::IS_PED_IN_VEHICLE(uParam0->f_3, uParam0->f_4, false))
				{
					if (__LIB_31__::func_366(uParam0) == 0 || __LIB_0__::func_517(uParam0->f_85, 32))
					{
						if (!VEHICLE::IS_VEHICLE_STOPPED(uParam0->f_4))
						{
							__LIB_35__::func_347(uParam0, 4160, 0);
						}
						else
						{
							__LIB_35__::func_347(uParam0, 0, 0);
						}
						return 1;
					}
					else
					{
						__LIB_35__::func_347(uParam0, 0, 0);
						return 1;
					}
				}
				else
				{
					__LIB_35__::func_347(uParam0, 0, 0);
					return 1;
				}
			}
			else
			{
				__LIB_35__::func_347(uParam0, 0, 0);
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

void func_404()//Position - 0x112D2
{
	func_406(&Local_230, 2);
	Local_230.f_410 = 0;
	__LIB_31__::func_420(&Local_230, 3, 6);
	Local_230.f_6 = 2f;
}

void func_406(var uParam0, int iParam1)//Position - 0x1130C
{
	__LIB_0__::func_367(1);
	__LIB_31__::func_355();
	__LIB_37__::func_666(&(uParam0->f_244));
	func_415(uParam0);
	uParam0->f_411 = iParam1;
	if (!__LIB_0__::func_517(Global_113386.f_19097, 4))
	{
		__LIB_31__::func_446(&(Global_113386.f_19097), 4);
	}
	__LIB_35__::func_354(uParam0);
	__LIB_35__::func_353(uParam0);
	PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
	uParam0->f_102 = (__LIB_31__::func_421(uParam0->f_411) % uParam0->f_101);
	uParam0->f_80 = 0;
	uParam0->f_428 = __LIB_39__::func_631();
	HUD::REQUEST_ADDITIONAL_TEXT("TAXI" /* GXT: Taxi */, 2);
}

void func_415(var uParam0)//Position - 0x117CC
{
	uParam0->f_2 = PLAYER::PLAYER_PED_ID();
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_14 = { __LIB_0__::func_481() };
	uParam0->f_17 = { __LIB_0__::func_481() };
	uParam0->f_35 = 0f;
	uParam0->f_76 = 0;
	uParam0->f_49 = 0;
	uParam0->f_109 = 0;
	uParam0->f_36 = 0f;
	uParam0->f_410 = 2;
	uParam0->f_123 = "TRS_FINDING_LOCATION";
	func_142(uParam0, 32, 0);
}

void func_417()//Position - 0x11856
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 26, false);
	}
	func_418();
	func_113();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_418()//Position - 0x11881
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_250);
}

