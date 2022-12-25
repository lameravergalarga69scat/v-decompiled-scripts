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
	struct<428> Local_230 = { 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	int iLocal_233 = 0;
	int iLocal_234 = 0;
	int iLocal_235 = 0;
	struct<3> Local_236[1];
	var uLocal_237[3] = { 0, 0, 0 };
	int iLocal_238 = 0;
	struct<3> Local_239 = { 0, 0, 0 } ;
	struct<3> Local_240 = { 0, 0, 0 } ;
	struct<3> Local_241[58];
	struct<3> Local_242[58];
	struct<3> Local_243[58];
	struct<3> Local_244[58];
	struct<3> Local_245 = { 0, 0, 0 } ;
	var uLocal_246 = 0;
	int iLocal_247 = 0;
	int iLocal_248 = 0;
	int iLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	int iLocal_253 = 0;
	float fLocal_254[58] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	bool bLocal_255 = 0;
	struct<28> Local_256 = { -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 5;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
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
	var uLocal_301 = 0;
	var uLocal_302 = 1097859072;
	var uLocal_303 = 1500;
	var uLocal_304 = 45;
	var uLocal_305 = 1103626240;
	var uLocal_306 = 5;
	int iLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
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
	iLocal_235 = joaat("A_F_Y_BevHills_03");
	Local_239 = { -412.0875f, 1171.3588f, 324.8176f };
	Local_240 = { -411.0378f, 1175.7334f, 324.6417f };
	iLocal_249 = 1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(67))
	{
		__LIB_38__::func_753(2);
		func_429();
	}
	MISC::SET_MISSION_FLAG(true);
	func_416();
	while (true)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_230.f_2, false))
		{
			func_9();
		}
		else
		{
			__LIB_39__::func_903(&Local_230);
		}
		SYSTEM::WAIT(0);
	}
}

void func_9()//Position - 0x311
{
	if (__LIB_39__::func_842(&Local_230))
	{
		__LIB_39__::func_786(&Local_230);
		if (Local_230.f_410 > 0)
		{
			if (__LIB_39__::func_998(&Local_230, 0))
			{
				func_411();
			}
		}
		else if (__LIB_39__::func_978(&Local_230, 31) > 5f)
		{
			__LIB_38__::func_753(2);
			func_429();
		}
	}
	else
	{
		__LIB_39__::func_893(&Local_230);
		__LIB_42__::func_725(&Local_230, &uLocal_300);
		__LIB_39__::func_841(&Local_230, &uLocal_250, 0);
		__LIB_40__::func_8(&Local_230);
		if (Local_230.f_410 > 2)
		{
			__LIB_42__::func_728(&Local_230);
			if (!__LIB_39__::func_840(&Local_230))
			{
				func_338();
			}
			else
			{
				__LIB_39__::func_973(&Local_230, "Taxi Not Driveable", __LIB_39__::func_830(&Local_230));
			}
		}
		if (Local_230.f_410 == 9)
		{
			__LIB_40__::func_20(&Local_230, 0, 1);
		}
		switch (Local_230.f_410)
		{
			case 0:
				func_290();
				__LIB_39__::func_859(&Local_230, 16, 4f, 0);
				__LIB_39__::func_914(&Local_230, Local_239, Local_240, "TaxiMiranda", iLocal_235, 0f, 10f);
				__LIB_39__::func_900(&Local_230);
				__LIB_39__::func_822(&Local_230, 1);
				break;
			case 1:
				if (func_282())
				{
					__LIB_39__::func_820();
					func_261();
					__LIB_39__::func_812(&(Local_236[0 /*3*/]), "TAXI_SC_BN_08", 500);
					__LIB_39__::func_811(&Local_230, &Local_236);
					Local_230.f_14 = { Local_239 };
					__LIB_39__::func_810(&Local_230);
					__LIB_39__::func_822(&Local_230, 3);
				}
				break;
			case 3:
				if (__LIB_40__::func_13(&Local_230, 1))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_230.f_3, false))
					{
						PED::SET_PED_COMPONENT_VARIATION(Local_230.f_3, 3, 0, 2, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_230.f_3, 2, 1, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_230.f_3, 4, 1, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_230.f_3, 0, 0, 1, 0);
						PED::SET_PED_CONFIG_FLAG(Local_230.f_3, 29, false);
					}
					Local_230.f_427 = 1;
					__LIB_39__::func_899(&Local_230, 1, 0);
					__LIB_39__::func_822(&Local_230, 5);
				}
				break;
			case 5:
				if (__LIB_42__::func_727(&Local_230, 0, 1109393408))
				{
					__LIB_39__::func_822(&Local_230, 15);
				}
				break;
			case 15:
				if (__LIB_39__::func_868(&Local_230))
				{
					__LIB_39__::func_970(&Local_230, 7, 1, 0, 0);
					__LIB_39__::func_867(&Local_230);
					func_213();
					__LIB_39__::func_822(&Local_230, 9);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_230.f_4, false))
				{
					if (!PED::IS_PED_IN_VEHICLE(Local_230.f_2, Local_230.f_4, false))
					{
						__LIB_39__::func_980(&Local_230);
						__LIB_39__::func_822(&Local_230, 5);
					}
				}
				break;
			case 9:
				if (!iLocal_253)
				{
					if (Local_230.f_139)
					{
						func_202();
						func_199(0);
						iLocal_253 = 1;
					}
				}
				func_177();
				if (__LIB_43__::func_587(&Local_230, 5f, 1097859072, 1117782016))
				{
					__LIB_39__::func_856(&uLocal_259);
					__LIB_39__::func_802(&Local_256, 15, 0);
					if (iLocal_234 == iLocal_233)
					{
						TASK::TASK_LOOK_AT_COORD(Local_230.f_3, -713.4489f, -153.40938f, 37.1441f, 10000, 2049, 3);
						__LIB_39__::func_795(&Local_230, 0);
						Local_230.f_56 = 50;
						Local_230.f_108 = 0;
					}
					else if (iLocal_234 == 14)
					{
						TASK::TASK_LOOK_AT_COORD(Local_230.f_3, -1196.3718f, -772.46075f, 17.30166f, 10000, 2049, 3);
						Local_230.f_56 = 25;
						Local_230.f_108 = 0;
					}
					else
					{
						TASK::TASK_LOOK_AT_COORD(Local_230.f_3, 72.87311f, -1392.5974f, 29.76223f, 10000, 2049, 3);
						Local_230.f_56 = 0;
						Local_230.f_108 = 1;
					}
					__LIB_39__::func_882(&Local_230);
					__LIB_40__::func_18(&Local_230);
					__LIB_39__::func_881(&Local_230);
					__LIB_39__::func_822(&Local_230, 27);
				}
				break;
			case 27:
				if (__LIB_39__::func_981(&Local_230, 1))
				{
					TASK::CLEAR_PED_TASKS(Local_230.f_3);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_238);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_238);
					TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_230.f_29, 1f, -1, 0.25f, 0, 40000f);
					TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(0, Local_230.f_29, 15f, 5000);
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_245, 1f, -1, 0.25f, 0, 40000f);
					TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(0, Local_245, 15f, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_238);
					TASK::TASK_PERFORM_SEQUENCE(Local_230.f_3, iLocal_238);
					PED::SET_PED_KEEP_TASK(Local_230.f_3, true);
					__LIB_39__::func_822(&Local_230, 29);
				}
				break;
			case 29:
				if (__LIB_40__::func_26(&Local_230, &iLocal_307))
				{
					__LIB_39__::func_986(1, &Local_230, 0);
					__LIB_39__::func_859(&Local_230, 31, 0, 0);
					__LIB_39__::func_822(&Local_230, 30);
				}
				break;
			case 30:
				__LIB_39__::func_784(&Local_230);
				func_429();
				break;
			}
	}
}

void func_177()//Position - 0x506C
{
	int iVar0;
	if (!iLocal_247)
	{
		if (__LIB_39__::func_793(&Local_230, 14))
		{
			func_198();
			__LIB_39__::func_970(&Local_230, 2, 1, 0, 0);
			iLocal_247 = 1;
		}
	}
	else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (!__LIB_39__::func_793(&Local_230, 14))
		{
			__LIB_39__::func_897(&Local_230);
			func_197();
			iLocal_247 = 0;
		}
	}
	if (Local_230.f_140)
	{
		func_198();
		iLocal_248 = 1;
	}
	else if (iLocal_248)
	{
		func_197();
		iLocal_248 = 0;
	}
	iLocal_234 = __LIB_12__::func_900(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_230.f_427, -1, 0, 1, -1);
	if (iLocal_234 != -1)
	{
		iVar0 = __LIB_12__::func_900(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_230.f_427, -1, 0, 1, -1);
		if (!__LIB_0__::func_78(Local_230.f_17, Local_241[iVar0 /*3*/], 0))
		{
			Local_230.f_17 = { Local_241[iVar0 /*3*/] };
			Local_230.f_29 = { Local_242[iVar0 /*3*/] };
			Local_230.f_26 = { Local_243[iVar0 /*3*/] };
			Local_230.f_34 = fLocal_254[iVar0];
			Local_245 = { Local_244[iVar0 /*3*/] };
		}
	}
}

void func_197()//Position - 0x71E5
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_237[iVar0]))
		{
			HUD::SET_BLIP_ALPHA(uLocal_237[iVar0], 255);
		}
		iVar0++;
	}
}

void func_198()//Position - 0x721A
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_237[iVar0]))
		{
			HUD::SET_BLIP_ALPHA(uLocal_237[iVar0], 0);
		}
		iVar0++;
	}
}

void func_199(bool bParam0)//Position - 0x724E
{
	if (bParam0)
	{
		__LIB_40__::func_16(7, 1);
	}
	else
	{
		__LIB_40__::func_16(7, 0);
	}
}

void func_202()//Position - 0x7359
{
	float fVar0;
	iLocal_233 = func_208(Local_230.f_427, 0);
	func_203(Local_230.f_427);
	if (iLocal_233 != -1)
	{
		fVar0 = __LIB_2__::func_485(PLAYER::PLAYER_PED_ID(), __LIB_0__::func_785(iLocal_233, 0), 1);
		Local_230.f_35 = (fVar0 * 0.3f);
	}
	else
	{
		Local_230.f_35 = 120f;
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_230.f_4, false))
	{
		Local_230.f_46 = ENTITY::GET_ENTITY_HEALTH(Local_230.f_4);
	}
}

void func_203(int iParam0)//Position - 0x73C8
{
	func_207();
	switch (iParam0)
	{
		case 0:
			break;
		case 1:
			__LIB_40__::func_16(7, 0);
			func_206(&uLocal_237);
			func_204(&(uLocal_237[0]), 7, 73, 5);
			func_204(&(uLocal_237[1]), 14, 73, 5);
			func_204(&(uLocal_237[2]), 18, 73, 5);
			break;
		case 2:
			break;
		case 3:
			break;
	}
}

void func_204(int* iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x7436
{
	if (HUD::DOES_BLIP_EXIST(*iParam0))
	{
		HUD::REMOVE_BLIP(iParam0);
	}
	*iParam0 = HUD::ADD_BLIP_FOR_COORD(__LIB_0__::func_785(iParam1, 0));
	HUD::SET_BLIP_SPRITE(*iParam0, iParam2);
	HUD::SET_BLIP_COLOUR(*iParam0, iParam3);
	HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam0, __LIB_12__::func_769(iParam1, 0, 0));
	HUD::SET_BLIP_SCALE(*iParam0, 1f);
	HUD::SET_BLIP_AS_MISSION_CREATOR_BLIP(*iParam0, true);
}

void func_206(var uParam0)//Position - 0x79EA
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (HUD::DOES_BLIP_EXIST((*uParam0)[iVar0]))
		{
			HUD::REMOVE_BLIP(uParam0[iVar0]);
		}
		iVar0++;
	}
}

void func_207()//Position - 0x7A1B
{
	Local_241[0 /*3*/] = { -829.8521f, -192.3817f, 36.3936f };
	Local_241[1 /*3*/] = { 129.8964f, -1716.6322f, 28.0725f };
	Local_241[7 /*3*/] = { 88.1425f, -1391.791f, 28.1999f };
	Local_241[14 /*3*/] = { -1210.9993f, -785.9365f, 16.0056f };
	Local_241[18 /*3*/] = { -723.82043f, -160.79854f, 35.92944f };
	Local_241[22 /*3*/] = { 339.2214f, 158.9484f, 102.1509f };
	Local_241[28 /*3*/] = { 15.1447f, -1127.161f, 27.7764f };
	Local_242[0 /*3*/] = { -815.6819f, -183.7194f, 36.5695f };
	Local_242[1 /*3*/] = { 136.1871f, -1712.0688f, 28.2916f };
	Local_242[7 /*3*/] = { 84.2585f, -1379.5623f, 28.2919f };
	Local_242[14 /*3*/] = { -1206.156f, -777.4578f, 16.3283f };
	Local_242[18 /*3*/] = { -716.05505f, -160.17415f, 35.98816f };
	Local_242[22 /*3*/] = { 342.1741f, 172.9035f, 102.1543f };
	Local_242[28 /*3*/] = { 22.1268f, -1109.868f, 28.797f };
	Local_244[7 /*3*/] = { 76.3885f, -1397.6653f, 28.3719f };
	Local_244[14 /*3*/] = { -1193.429f, -769.2299f, 16.3289f };
	Local_244[18 /*3*/] = { -710.8855f, -152.4612f, 36.4106f };
	Local_243[0 /*3*/] = { -821.3112f, -207.0323f, 36.3333f };
	Local_243[1 /*3*/] = { 138.4111f, -1726.907f, 28.0569f };
	Local_243[7 /*3*/] = { 96.1429f, -1407.3462f, 28.1563f };
	Local_243[14 /*3*/] = { -1202.8093f, -795.3967f, 15.2069f };
	Local_243[18 /*3*/] = { -710.7402f, -178.9253f, 35.8931f };
	Local_243[22 /*3*/] = { 348.4406f, 156.2108f, 101.9483f };
	Local_243[28 /*3*/] = { 40.1115f, -1113.9235f, 28.1427f };
	fLocal_254[0] = 33.19f;
	fLocal_254[1] = 50.6f;
	fLocal_254[7] = 48.99f;
	fLocal_254[14] = 37.21f;
	fLocal_254[18] = 28.39f;
	fLocal_254[22] = 71.56f;
	fLocal_254[28] = 148.91f;
}

int func_208(int iParam0, bool bParam1)//Position - 0x7CAA
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	iVar5 = -1;
	iVar1 = -1;
	iVar2 = -1;
	iVar0 = 0;
	while (iVar0 < 58)
	{
		if (__LIB_0__::func_328(iVar0) == iParam0)
		{
			iVar3++;
			if (iVar1 == -1)
			{
				iVar1 = iVar0;
			}
			else
			{
				iVar2 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar3 > 0)
	{
		if (iVar2 != -1)
		{
			if (bParam1)
			{
				iVar4 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) % iVar3);
				iVar5 = (iVar4 + iVar1);
			}
			else
			{
				iVar5 = 18;
			}
		}
		else
		{
			iVar5 = iVar1;
		}
	}
	return iVar5;
}

void func_213()//Position - 0x7E13
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
	__LIB_39__::func_780(&(Local_230.f_100), 256);
	__LIB_39__::func_780(&(Local_230.f_100), 2048);
	__LIB_39__::func_780(&uLocal_300, 2);
	__LIB_39__::func_855(&Local_230, 7);
}

void func_261()//Position - 0xA068
{
	Local_165.f_0 = 0;
	__LIB_39__::func_818(42011/*__LIB_39__::func_819*/, 41986/*__LIB_39__::func_993*/, 1);
	__LIB_39__::func_818(41747/*__LIB_39__::func_887*/, 41724/*__LIB_39__::func_992*/, 1);
	__LIB_39__::func_818(41662/*__LIB_39__::func_816*/, 41637/*__LIB_39__::func_991*/, 1);
	__LIB_39__::func_818(41565/*__LIB_39__::func_815*/, 41541/*__LIB_39__::func_990*/, 1);
	__LIB_39__::func_818(41431/*__LIB_40__::func_1*/, 41410/*__LIB_39__::func_873*/, 1);
	__LIB_39__::func_818(41357/*__LIB_39__::func_858*/, 41332/*__LIB_39__::func_989*/, 1);
	__LIB_39__::func_818(41190/*__LIB_39__::func_886*/, 41167/*__LIB_39__::func_988*/, 1);
}

int func_282()//Position - 0xA633
{
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_235))
	{
		__LIB_39__::func_778("TAXI_ASSETS_STREAMED - Loading A_F_Y_BevHills_03", &iLocal_249, 1000);
		return 0;
	}
	if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_307))
	{
		return 0;
	}
	if (!__LIB_39__::func_821(&iLocal_249, 0))
	{
		__LIB_39__::func_778("TAXI_ASSETS_STREAMED - Loading shared assets", &iLocal_249, 1000);
		return 0;
	}
	return 1;
}

void func_290()//Position - 0xABA2
{
	STREAMING::REQUEST_MODEL(iLocal_235);
	iLocal_307 = __LIB_2__::func_214();
	__LIB_39__::func_860(0);
}

void func_338()//Position - 0xD05E
{
	__LIB_39__::func_976(&Local_230);
	if (__LIB_39__::func_965(&Local_230, &Local_256))
	{
		switch (Local_256.f_27)
		{
			case 0:
				if (Local_230.f_410 == 9)
				{
					if (!__LIB_39__::func_975(&Local_230))
					{
						if (__LIB_39__::func_839("TX_OBJ_TTB_DO") || HUD::DOES_BLIP_EXIST(Local_230.f_9))
						{
							Local_256.f_27++;
						}
						else if (__LIB_39__::func_804(&Local_230) != 10)
						{
							__LIB_39__::func_970(&Local_230, 10, 1, 0, 1);
						}
					}
				}
				break;
			case 1:
				if ((__LIB_39__::func_804(&Local_230) > 10 && __LIB_39__::func_804(&Local_230) != 20) && !__LIB_39__::func_975(&Local_230))
				{
					__LIB_39__::func_970(&Local_230, 20, 1, 0, 0);
					if (bLocal_255)
					{
					}
				}
				break;
			case 2:
				if (__LIB_39__::func_978(&Local_230, 18) > MISC::GET_RANDOM_FLOAT_IN_RANGE(2f, 10f))
				{
					if (__LIB_39__::func_804(&Local_230) != 17)
					{
						__LIB_39__::func_970(&Local_230, 17, 1, 0, 0);
						if (bLocal_255)
						{
						}
					}
				}
				break;
			case 3:
				if (__LIB_39__::func_978(&Local_230, 18) > MISC::GET_RANDOM_FLOAT_IN_RANGE(2f, 10f))
				{
					if (__LIB_39__::func_804(&Local_230) != 18)
					{
						__LIB_39__::func_970(&Local_230, 18, 1, 0, 0);
						if (bLocal_255)
						{
						}
					}
				}
				break;
			case 4:
				if (__LIB_39__::func_978(&Local_230, 18) > 30f)
				{
					if (__LIB_39__::func_804(&Local_230) != 16)
					{
						__LIB_39__::func_970(&Local_230, 16, 1, 0, 0);
						if (bLocal_255)
						{
						}
					}
				}
				break;
			case 5:
				if (__LIB_39__::func_978(&Local_230, 18) > MISC::GET_RANDOM_FLOAT_IN_RANGE(8f, 16f))
				{
				}
				break;
			}
	}
	__LIB_42__::func_724(&Local_230, &uLocal_259, &Local_256, bLocal_255);
}

void func_411()//Position - 0x13066
{
	__LIB_40__::func_14(&Local_230);
	func_429();
}

void func_416()//Position - 0x131F9
{
	__LIB_40__::func_17(&Local_230, 4);
	Local_230.f_410 = 0;
	Local_230.f_36 = 20f;
	Local_230.f_23 = { -422.4797f, 1181.769f, 324.6417f };
	Local_230.f_33 = 225.6436f;
	Local_230.f_26 = { 171.1731f, -3288.1711f, 4.7828f };
	Local_230.f_34 = 184.17f;
	__LIB_39__::func_843(&Local_230, 20, 40);
}

void func_429()//Position - 0x137C2
{
	func_199(1);
	func_206(&uLocal_237);
	func_430();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_430()//Position - 0x137DE
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_235);
}

