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
	int iLocal_18 = 0;
	char* sLocal_19 = NULL;
	var uLocal_20 = 0;
	int iLocal_21 = 0;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
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
	float fLocal_62 = 0f;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	struct<5> Local_66 = { 0, 0, 0, 0, 58 } ;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
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
	struct<3> Local_125[32];
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	float fLocal_138 = 0f;
	bool bLocal_139 = 0;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	struct<524> Local_142 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
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
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 12;
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
	var uLocal_275 = 12;
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
	var uLocal_288 = 12;
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
	var uLocal_301 = 9;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 9;
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
	var uLocal_335 = 2;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 2;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = -1;
	var uLocal_344 = 0;
	struct<4> Local_345 = { 0, 0, 0, 0 } ;
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
	iLocal_18 = 3;
	sLocal_19 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_41 = 1;
	iLocal_42 = 65;
	iLocal_43 = 49;
	iLocal_44 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	iLocal_134 = 207;
	iLocal_137 = AUDIO::GET_SOUND_ID();
	fLocal_138 = -1f;
	iLocal_141 = -99;
	Local_142.f_1 = ScriptParam_345.f_1;
	Local_142.f_3 = -1;
	Local_142.f_523 = ScriptParam_345.f_0;
	if (!Local_142.f_1)
	{
		MISC::SET_BIT(&(Global_100493.f_1393[ScriptParam_345.f_0]), 16);
	}
	Local_142.f_477 = 920226/*func_1259*/;
	Local_142.f_478 = 920065/*func_1258*/;
	Local_142.f_479 = 820954/*func_1211*/;
	Local_142.f_480 = 820914/*__LIB_19__::func_94*/;
	Local_142.f_481 = 820874/*__LIB_36__::func_130*/;
	Local_142.f_482 = 808842/*func_1202*/;
	Local_142.f_483 = 808802/*func_1201*/;
	Local_142.f_484 = 715964/*__LIB_6__::func_38*/;
	Local_142.f_485 = 576062/*func_1121*/;
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, false, ScriptParam_345.f_3);
	if (!__LIB_0__::func_895(0, -1, 1))
	{
		func_1109(&Local_142, 0);
	}
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_66, 63, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_125, 97, 0);
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(2);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	if (!__LIB_0__::func_934())
	{
		func_1109(&Local_142, 0);
	}
	__LIB_14__::func_937(Local_142.f_523);
	__LIB_16__::func_507(&uLocal_126, Local_142.f_523, 0);
	while (true)
	{
		SYSTEM::WAIT(0);
		func_1(&Local_142);
	}
}

void func_1(var uParam0)//Position - 0x187
{
	int iVar0;
	__LIB_36__::func_892(&(uParam0->f_12));
	if (uParam0->f_7)
	{
		GRAPHICS::DISABLE_OCCLUSION_THIS_FRAME();
	}
	if (__LIB_15__::func_117(uParam0->f_523) && !__LIB_16__::func_571(uParam0, uParam0->f_523))
	{
		if (__LIB_16__::func_505(uParam0))
		{
			PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOUT(2 /*FRONTEND_CONTROL*/);
			PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOUT(0 /*PLAYER_CONTROL*/);
			func_1092(uParam0->f_523);
			if (!uParam0->f_11 == 2 && !__LIB_42__::func_331(uParam0))
			{
				iVar0 = 0;
				__LIB_16__::func_570(uParam0, &iVar0, 0, 0);
			}
			func_1072(uParam0, &(uParam0->f_116));
			if (uParam0->f_9)
			{
				if (!__LIB_14__::func_479(*uParam0))
				{
					__LIB_31__::func_922(uParam0, &(uParam0->f_116), uParam0->f_593);
				}
				else
				{
					__LIB_42__::func_330(uParam0);
					if (!uParam0->f_11 == 2 && !__LIB_42__::func_331(uParam0))
					{
						__LIB_42__::func_329(uParam0);
					}
				}
			}
			__LIB_36__::func_891(uParam0);
			func_1045(uParam0);
			if (*uParam0 == 50)
			{
				__LIB_36__::func_890();
			}
			__LIB_36__::func_917(uParam0);
			switch (uParam0->f_11)
			{
				case 0:
					func_1016(uParam0);
					break;
				case 1:
					__LIB_16__::func_557(0);
					__LIB_36__::func_886(uParam0);
					func_1010(uParam0);
					if (__LIB_36__::func_885(uParam0))
					{
						if (uParam0->f_11 == 2)
						{
							uParam0->f_592 = 1;
							func_979(uParam0);
						}
					}
					else
					{
						__LIB_43__::func_894(uParam0);
					}
					break;
				case 2:
					func_979(uParam0);
					__LIB_16__::func_569(uParam0, &(uParam0->f_116));
					break;
				case 3:
					__LIB_36__::func_882(uParam0, 1);
					__LIB_43__::func_894(uParam0);
					func_954(uParam0);
					func_933(uParam0);
					__LIB_43__::func_481(uParam0);
					break;
				case 4:
					func_22(uParam0);
					__LIB_16__::func_569(uParam0, &(uParam0->f_116));
					break;
				case 5:
					uParam0->f_11 = 3;
					break;
				}
		}
	}
	else
	{
		func_1109(uParam0, 0);
	}
	if (__LIB_14__::func_484(uParam0))
	{
		func_9(uParam0);
	}
	__LIB_36__::func_906(uParam0);
}

void func_9(var uParam0)//Position - 0x3DF2
{
	func_1109(uParam0, 1);
	__LIB_36__::func_894(uParam0);
}

void func_22(var uParam0)//Position - 0x452A
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	struct<3> Var6;
	struct<3> Var7;
	struct<10> Var8;
	var uVar9;
	struct<2> Var10;
	char cVar11[16];
	var uVar12;
	struct<11> Var13;
	bool bVar14;
	char* sVar15;
	var uVar16;
	float fVar17;
	struct<2> Var18;
	char cVar19[16];
	float fVar20;
	float fVar21;
	var uVar22;
	int iVar23;
	int iVar24;
	__LIB_16__::func_422(1);
	__LIB_36__::func_880(1);
	if (__LIB_9__::func_354(1))
	{
		if (__LIB_0__::func_156(PLAYER::PLAYER_ID(), 0, 1))
		{
			__LIB_9__::func_353();
			__LIB_9__::func_340();
		}
		else if (!__LIB_14__::func_292())
		{
			__LIB_9__::func_340();
		}
		return;
	}
	if (__LIB_14__::func_189())
	{
		__LIB_14__::func_188();
		__LIB_42__::func_325(uParam0);
	}
	__LIB_31__::func_911(uParam0, &(uParam0->f_116), -1);
	if (*uParam0 == 50 && !__LIB_36__::func_878(PLAYER::PLAYER_ID(), uParam0->f_523, 0))
	{
		uParam0->f_116.f_31 = 8;
	}
	Global_4539662 = 1;
	__LIB_15__::func_77(0, 1, 1);
	__LIB_1__::func_33(0);
	fVar3 = 0f;
	if (!PED::IS_PED_INJURED(uParam0->f_12))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_12, uParam0->f_486, "keeper_idle_a", 3))
		{
			fVar1 = 0.29f;
			fVar2 = 0.474f;
		}
		else if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_12, uParam0->f_486, "keeper_idle_b", 3))
		{
			fVar1 = 0.33f;
			fVar2 = 0.59f;
		}
		else
		{
			fVar1 = 0.3f;
			fVar2 = 0.5f;
		}
	}
	switch (uParam0->f_116.f_31)
	{
		case 0:
			uParam0->f_503.f_19 = 0;
			uParam0->f_503.f_18 = 0;
			if (*uParam0 != 50)
			{
				__LIB_36__::func_877(PLAYER::PLAYER_ID(), uParam0->f_523);
			}
			else
			{
				__LIB_36__::func_876(PLAYER::PLAYER_ID(), uParam0->f_523);
			}
			if (__LIB_14__::func_404(1))
			{
				if ((((((((__LIB_36__::func_882(uParam0, 1) && __LIB_36__::func_875(uParam0)) && __LIB_3__::func_67("HAR_MNU", *uParam0, 1)) && __LIB_36__::func_905(uParam0)) && __LIB_14__::func_403(*uParam0, 0)) && __LIB_42__::func_324(uParam0, 1)) && ((__LIB_14__::func_285(PLAYER::PLAYER_ID(), uParam0->f_523, 1) && *uParam0 != 50) || (__LIB_36__::func_878(PLAYER::PLAYER_ID(), uParam0->f_523, 1) && *uParam0 == 50))) && __LIB_16__::func_422(1)) && __LIB_36__::func_880(1))
				{
					__LIB_31__::func_910(1);
					if (!Global_78319)
					{
						iVar4 = PLAYER::PLAYER_PED_ID();
						if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_640.f_2) && !PED::IS_PED_INJURED(uParam0->f_640.f_2))
						{
							iVar4 = uParam0->f_640.f_2;
						}
						iVar4 = iVar4;
					}
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !PED::IS_PED_INJURED(uParam0->f_12))
					{
						ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_12, true);
						PED::SET_PED_CAN_RAGDOLL(uParam0->f_12, false);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_12, Global_1837198);
					}
					__LIB_16__::func_572(&(uParam0->f_116), 0);
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					uParam0->f_492 = 0;
					uParam0->f_493 = 0;
					uParam0->f_494 = 0;
					uParam0->f_500 = 0;
					uParam0->f_589 = 0;
					uParam0->f_590 = 1;
					uParam0->f_594 = 0;
					uParam0->f_595 = 0;
					uParam0->f_272 = -1;
					uParam0->f_273 = -1;
					uParam0->f_611 = -1;
					uParam0->f_275 = 1f;
					uParam0->f_116.f_19 = 1;
					uParam0->f_116.f_18 = 0;
					uParam0->f_116.f_15 = 0;
					uParam0->f_116.f_23 = 0;
					uParam0->f_116.f_22 = 0;
					StringCopy(&(uParam0->f_116.f_11), "", 16);
					uParam0->f_116.f_5 = 0;
					uParam0->f_725 = 0;
					uParam0->f_525 = 0;
					uParam0->f_116.f_31 = 1;
					uParam0->f_499 = 0;
				}
				else if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), uParam0->f_722)) > 8000) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - uParam0->f_723) > 8000))
				{
					uParam0->f_116.f_31 = 8;
				}
			}
			break;
		case 1:
			func_810(uParam0);
			break;
		case 6:
			func_809(uParam0);
			break;
		case 5:
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (PED::HAS_PED_PRELOAD_PROP_DATA_FINISHED(PLAYER::PLAYER_PED_ID()) && PED::HAS_PED_PRELOAD_VARIATION_DATA_FINISHED(PLAYER::PLAYER_PED_ID()))
				{
					func_808(uParam0);
				}
			}
			else
			{
				func_808(uParam0);
			}
			break;
		case 2:
			__LIB_14__::func_184();
			if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
			{
				iLocal_134 = 209;
			}
			else
			{
				iLocal_134 = 207;
			}
			iVar5 = PLAYER::PLAYER_PED_ID();
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_640.f_2) && !PED::IS_PED_INJURED(uParam0->f_640.f_2))
			{
				iVar5 = uParam0->f_640.f_2;
			}
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				PED::SET_PED_CONFIG_FLAG(iVar5, 240, true);
			}
			if ((__LIB_14__::func_404(1) && !PED::IS_PED_INJURED(iVar5)) && !PED::IS_PED_INJURED(uParam0->f_12))
			{
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (NETWORK::NETWORK_PLAYER_HAS_HEADSET(PLAYER::PLAYER_ID()))
					{
						if (NETWORK::NETWORK_IS_PLAYER_TALKING(PLAYER::PLAYER_ID()))
						{
							PED::SET_PED_RESET_FLAG(iVar5, 302, true);
						}
					}
				}
				if (!uParam0->f_116.f_22 && uParam0->f_116.f_15)
				{
					Global_4539662 = 0;
					if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && __LIB_3__::func_538()) && __LIB_36__::func_913(uParam0))
					{
					}
					else if (!__LIB_42__::func_323(uParam0, uParam0->f_488))
					{
						__LIB_36__::func_920(*uParam0, &Var6, &Var7);
						if (__LIB_36__::func_873(uParam0))
						{
							uParam0->f_489 = __LIB_42__::func_322(uParam0);
						}
						else
						{
							uParam0->f_489 = "player_base";
						}
						TASK::TASK_PLAY_ANIM_ADVANCED(iVar5, uParam0->f_486, uParam0->f_489, Var6, Var7, 8f, -8f, -1, 5641, 0f, 2, 1);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iVar5, false, false);
						uParam0->f_488 = __LIB_42__::func_321(uParam0);
						if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						{
							TASK::TASK_PLAY_ANIM_ADVANCED(uParam0->f_12, uParam0->f_486, uParam0->f_488, Var6, Var7, 1000f, -1000f, -1, 5640, 0f, 2, 1);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uParam0->f_12, false, false);
							ENTITY::PLAY_ENTITY_ANIM(NETWORK::NET_TO_ENT(Local_66.f_1), __LIB_36__::func_872(uParam0->f_488), uParam0->f_486, 1000f, false, true, true, 0f, 0);
							ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(NETWORK::NET_TO_ENT(Local_66.f_1));
							__LIB_36__::func_871(uParam0);
							__LIB_42__::func_320(uParam0, 1, 0);
							__LIB_36__::func_870(uParam0, uParam0->f_12, uParam0->f_488, 69, 4f, -998637568);
							__LIB_36__::func_870(uParam0, PLAYER::PLAYER_PED_ID(), uParam0->f_489, 64, 4f, -998637568);
							__LIB_36__::func_869(uParam0, NETWORK::NET_TO_ENT(Local_66.f_1), __LIB_36__::func_872(uParam0->f_488), 64, 1148846080, -998637568);
							__LIB_36__::func_868(uParam0);
							if (__LIB_36__::func_880(1))
							{
								if ((((((uParam0->f_525 == 3 || uParam0->f_525 == 8) || uParam0->f_525 == 10) || uParam0->f_525 == 11) || uParam0->f_525 == 13) || uParam0->f_525 == 14) || uParam0->f_525 == 15)
								{
									ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_ENT(Local_66.f_1), false, false);
								}
								else
								{
									ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_ENT(Local_66.f_1), true, false);
								}
							}
						}
						else
						{
							__LIB_42__::func_319(uParam0, uParam0->f_488, 0, 0, 1, -1056964608);
						}
						__LIB_42__::func_317(uParam0, __LIB_42__::func_318(uParam0, 3, uParam0->f_488));
						if (CAM::DOES_CAM_EXIST(uParam0->f_51[1 /*12*/]))
						{
							CAM::SET_CAM_ACTIVE(uParam0->f_51[1 /*12*/], false);
							CAM::DESTROY_CAM(uParam0->f_51[1 /*12*/], false);
						}
					}
					else
					{
						HUD::SHOW_HUD_COMPONENT_THIS_FRAME(3);
						HUD::SHOW_HUD_COMPONENT_THIS_FRAME(4);
						HUD::SHOW_HUD_COMPONENT_THIS_FRAME(5);
						HUD::SHOW_HUD_COMPONENT_THIS_FRAME(13);
						if (__LIB_36__::func_867(&(uParam0->f_529), &(uParam0->f_531)) == 1f)
						{
							uParam0->f_116.f_15 = 0;
							uParam0->f_116.f_23 = 0;
							uParam0->f_116.f_22 = 0;
							uParam0->f_488 = "";
							uParam0->f_590 = 1;
							uParam0->f_591 = 1;
							if (__LIB_36__::func_866() || __LIB_36__::func_865())
							{
								if (uParam0->f_525 == 1)
								{
									uParam0->f_525 = 0;
									uParam0->f_116.f_1 = 0;
								}
								else if (uParam0->f_525 == 2)
								{
									uParam0->f_525 = 0;
									uParam0->f_116.f_1 = 1;
								}
								else if (uParam0->f_525 == 3)
								{
									uParam0->f_525 = 3;
									if (__LIB_36__::func_866())
									{
										uParam0->f_116.f_1 = 2;
									}
									else
									{
										uParam0->f_116.f_1 = 1;
									}
								}
								else if (__LIB_36__::func_864(uParam0->f_525))
								{
								}
							}
							func_771(uParam0, iVar5);
							if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
							{
								__LIB_36__::func_871(uParam0);
								__LIB_42__::func_320(uParam0, 0, 1);
								__LIB_36__::func_870(uParam0, uParam0->f_12, "keeper_base", 69, 1148846080, -998637568);
								__LIB_36__::func_869(uParam0, NETWORK::NET_TO_ENT(Local_66.f_1), __LIB_36__::func_872("keeper_base"), 64, 1148846080, -998637568);
								__LIB_36__::func_868(uParam0);
							}
							else
							{
								__LIB_42__::func_319(uParam0, "keeper_base", 0, 1, 0, -1056964608);
							}
							__LIB_42__::func_315(uParam0, 0);
						}
						else if (__LIB_36__::func_867(&(uParam0->f_529), &(uParam0->f_531)) > 0.6f)
						{
							if (!uParam0->f_116.f_23)
							{
								func_656(uParam0);
							}
						}
						else if (__LIB_36__::func_867(&(uParam0->f_529), &(uParam0->f_531)) > fVar2)
						{
							if (uParam0->f_556 != 0)
							{
								GRAPHICS::STOP_PARTICLE_FX_LOOPED(uParam0->f_556, false);
								uParam0->f_556 = 0;
							}
							if (uParam0->f_499)
							{
								uParam0->f_489 = __LIB_42__::func_322(uParam0);
								__LIB_36__::func_920(*uParam0, &Var6, &Var7);
								if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
								{
									uParam0->f_530 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(Var6, Var7, 2, false, true, 1f, 0f, 1f);
									NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_530, uParam0->f_486, uParam0->f_489, 8f, -8f, 0, 0, 1000f, 0);
									NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam0->f_530);
								}
								else
								{
									TASK::OPEN_SEQUENCE_TASK(&iVar0);
									TASK::TASK_PLAY_ANIM_ADVANCED(0, uParam0->f_486, uParam0->f_489, Var6, Var7, 8f, -8f, -1, 5640, 0f, 2, 1);
									TASK::TASK_PLAY_ANIM_ADVANCED(0, uParam0->f_486, "player_base", Var6, Var7, 8f, -8f, -1, 5641, 0f, 2, 1);
									TASK::CLOSE_SEQUENCE_TASK(iVar0);
									TASK::TASK_PERFORM_SEQUENCE(iVar5, iVar0);
									TASK::CLEAR_SEQUENCE_TASK(&iVar0);
								}
								AUDIO::STOP_SOUND(uParam0->f_557);
								AUDIO::STOP_SOUND(uParam0->f_558);
								AUDIO::STOP_SOUND(uParam0->f_559);
								uParam0->f_499 = 0;
							}
						}
						else if (__LIB_36__::func_867(&(uParam0->f_529), &(uParam0->f_531)) > 0.4f)
						{
							if (!uParam0->f_116.f_23)
							{
								func_656(uParam0);
							}
							if (uParam0->f_525 == 1)
							{
								Stack.Push(PLAYER::PLAYER_PED_ID());
								Stack.Push(Global_4537616.f_126[uParam0->f_116.f_1]);
								Stack.Push(Global_4537616[uParam0->f_116.f_1]);
								Call_Loc(uParam0->f_477);
								if (!StackVal)
								{
									Stack.Push(PLAYER::PLAYER_PED_ID());
									Stack.Push(Global_4537616.f_126[uParam0->f_116.f_1]);
									Stack.Push(Global_4537616[uParam0->f_116.f_1]);
									Stack.Push(0);
									Stack.Push(-1);
									Stack.Push(0);
									Stack.Push(0);
									Stack.Push(0);
									Stack.Push(-1);
									Stack.Push(-1);
									Stack.Push(-1);
									Stack.Push(0);
									Stack.Push(0);
									Stack.Push(0);
									Call_Loc(uParam0->f_479);
									if (Global_78319)
									{
										__LIB_0__::func_408(385, Global_4537616[uParam0->f_116.f_1], -1);
										__LIB_2__::func_471(8);
										__LIB_1__::func_354(753, Global_4537616[uParam0->f_116.f_1], -1, 1, 0);
										__LIB_1__::func_354(2053, Global_4537616[uParam0->f_116.f_1], -1, 1, 0);
									}
								}
								if (PLAYER::PLAYER_PED_ID() != iVar5)
								{
									Stack.Push(iVar5);
									Stack.Push(Global_4537616.f_126[uParam0->f_116.f_1]);
									Stack.Push(Global_4537616[uParam0->f_116.f_1]);
									Stack.Push(0);
									Stack.Push(-1);
									Stack.Push(0);
									Stack.Push(0);
									Stack.Push(0);
									Stack.Push(-1);
									Stack.Push(-1);
									Stack.Push(-1);
									Stack.Push(0);
									Stack.Push(0);
									Stack.Push(0);
									Call_Loc(uParam0->f_479);
								}
							}
							else if (uParam0->f_525 == 2)
							{
								if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
								{
									func_636(PLAYER::PLAYER_PED_ID(), 1, (__LIB_36__::func_904(uParam0->f_116.f_1) - 1), uParam0->f_634, 0, 0, uParam0->f_275, 1);
									if (PLAYER::PLAYER_PED_ID() != iVar5)
									{
										func_636(iVar5, 1, (__LIB_36__::func_904(uParam0->f_116.f_1) - 1), uParam0->f_634, 0, 0, uParam0->f_275, 1);
									}
									__LIB_2__::func_471(8);
									__LIB_0__::func_408(448, (__LIB_36__::func_904(uParam0->f_116.f_1) - 1), -1);
									__LIB_18__::func_308(88, 1f, -1, 1);
									uParam0->f_273 = __LIB_36__::func_904(uParam0->f_116.f_1);
									uParam0->f_275 = 1f;
								}
								else
								{
									Stack.Push(PLAYER::PLAYER_PED_ID());
									Stack.Push(Global_4537616.f_126[uParam0->f_116.f_1]);
									Stack.Push(Global_4537616[uParam0->f_116.f_1]);
									Call_Loc(uParam0->f_477);
									if (!StackVal)
									{
										Stack.Push(PLAYER::PLAYER_PED_ID());
										Stack.Push(Global_4537616.f_126[uParam0->f_116.f_1]);
										Stack.Push(Global_4537616[uParam0->f_116.f_1]);
										Stack.Push(0);
										Stack.Push(-1);
										Stack.Push(0);
										Stack.Push(0);
										Stack.Push(0);
										Stack.Push(-1);
										Stack.Push(-1);
										Stack.Push(-1);
										Stack.Push(0);
										Stack.Push(0);
										Stack.Push(0);
										Call_Loc(uParam0->f_479);
										uParam0->f_273 = Global_4537616[uParam0->f_116.f_1];
									}
									if (PLAYER::PLAYER_PED_ID() != iVar5)
									{
										Stack.Push(iVar5);
										Stack.Push(Global_4537616.f_126[uParam0->f_116.f_1]);
										Stack.Push(Global_4537616[uParam0->f_116.f_1]);
										Stack.Push(0);
										Stack.Push(-1);
										Stack.Push(0);
										Stack.Push(0);
										Stack.Push(0);
										Stack.Push(-1);
										Stack.Push(-1);
										Stack.Push(-1);
										Stack.Push(0);
										Stack.Push(0);
										Stack.Push(0);
										Call_Loc(uParam0->f_479);
									}
								}
							}
							else if (uParam0->f_525 == 3)
							{
								if (Global_78319)
								{
									uParam0->f_611 = uParam0->f_116.f_1;
									func_636(PLAYER::PLAYER_PED_ID(), 4, (uParam0->f_611 - 1), uParam0->f_634, 0, 0, 1f, 1);
									__LIB_0__::func_408(451, (uParam0->f_611 - 1), -1);
									__LIB_18__::func_308(91, 1f, -1, 1);
									if ((uParam0->f_611 - 1) == -1 || (uParam0->f_611 - 1) > 15)
									{
										func_636(PLAYER::PLAYER_PED_ID(), 2, __LIB_0__::func_253(449, __LIB_0__::func_5()), uParam0->f_634, 0, 0, 1f, 1);
										__LIB_18__::func_308(89, 1f, -1, 1);
									}
									else
									{
										func_636(PLAYER::PLAYER_PED_ID(), 2, __LIB_0__::func_253(449, __LIB_0__::func_5()), uParam0->f_634, 0, 0, 0f, 1);
										__LIB_18__::func_308(89, 0f, -1, 1);
									}
									__LIB_18__::func_308(__LIB_0__::func_254(4), 1f, -1, 1);
									__LIB_2__::func_471(8);
									if (PLAYER::PLAYER_PED_ID() != iVar5)
									{
										func_636(iVar5, 4, (uParam0->f_611 - 1), uParam0->f_634, 0, 0, 1f, 1);
										if ((uParam0->f_611 - 1) == -1 || (uParam0->f_611 - 1) > 15)
										{
											func_636(iVar5, 2, __LIB_0__::func_253(449, __LIB_0__::func_5()), uParam0->f_634, 0, 0, 1f, 1);
										}
										else
										{
											func_636(iVar5, 2, __LIB_0__::func_253(449, __LIB_0__::func_5()), uParam0->f_634, 0, 0, 0f, 1);
										}
									}
								}
							}
							else if (__LIB_36__::func_864(uParam0->f_525))
							{
								if (__LIB_42__::func_314(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), uParam0->f_525, uParam0->f_116.f_1, &Var8, __LIB_36__::func_861(uParam0->f_523)))
								{
									if (Var8.f_9 == 0)
									{
										if (!func_625(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), &Var8, uParam0))
										{
											Stack.Push(PLAYER::PLAYER_PED_ID());
											Stack.Push(2);
											Stack.Push(Var8.f_8);
											Stack.Push(0);
											Stack.Push(-1);
											Stack.Push(0);
											Stack.Push(0);
											Stack.Push(0);
											Stack.Push(uParam0->f_634);
											Stack.Push(uParam0->f_635);
											Stack.Push(-1);
											Stack.Push(0);
											Stack.Push(0);
											Stack.Push(0);
											Call_Loc(uParam0->f_479);
											if (Global_78319)
											{
												__LIB_0__::func_408(385, Var8.f_8, -1);
												__LIB_2__::func_471(8);
												__LIB_1__::func_354(753, Var8.f_8, -1, 1, 0);
												__LIB_1__::func_354(2053, Var8.f_8, -1, 1, 0);
												__LIB_1__::func_354(2153, uParam0->f_634, -1, 1, 0);
												__LIB_1__::func_354(2160, uParam0->f_635, -1, 1, 0);
												Global_78130[1 /*14*/] = { __LIB_6__::func_38(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), 2, Var8.f_8, -1) };
												__LIB_0__::func_408(389, Global_78130[1 /*14*/].f_4, -1);
												__LIB_0__::func_408(401, Global_78130[1 /*14*/].f_3, -1);
											}
										}
										if (PLAYER::PLAYER_PED_ID() != iVar5)
										{
											Stack.Push(iVar5);
											Stack.Push(2);
											Stack.Push(Var8.f_8);
											Stack.Push(0);
											Stack.Push(-1);
											Stack.Push(0);
											Stack.Push(0);
											Stack.Push(0);
											Stack.Push(uParam0->f_634);
											Stack.Push(uParam0->f_635);
											Stack.Push(-1);
											Stack.Push(0);
											Stack.Push(0);
											Stack.Push(0);
											Call_Loc(uParam0->f_479);
										}
									}
									else if (Var8.f_9 == 1 || Var8.f_9 == 2)
									{
										func_636(PLAYER::PLAYER_PED_ID(), Var8.f_5, Var8.f_6, uParam0->f_634, uParam0->f_635, uParam0->f_637, uParam0->f_639, 1);
										if (Global_78319)
										{
											if (Var8.f_5 == 7)
											{
												__LIB_18__::func_308(157, SYSTEM::TO_FLOAT(Var8.f_6), -1, 1);
												uParam0->f_634 = -1;
												uParam0->f_635 = -1;
												uParam0->f_636 = uParam0->f_635;
											}
											else
											{
												__LIB_0__::func_408(__LIB_0__::func_255(Var8.f_5), Var8.f_6, -1);
												if (uParam0->f_634 >= 0)
												{
													if (Var8.f_5 == 5 && uParam0->f_637 == 0)
													{
														uParam0->f_637 = 2;
													}
													else if (Var8.f_5 == 4 && uParam0->f_637 == 2)
													{
														uParam0->f_637 = 0;
													}
													func_622(Var8.f_5, uParam0->f_634, uParam0->f_637, -1, 1);
												}
												if (uParam0->f_635 >= 0)
												{
													__LIB_1__::func_354(__LIB_0__::func_250(Var8.f_5), uParam0->f_635, -1, 1, 0);
												}
												__LIB_18__::func_308(__LIB_0__::func_254(Var8.f_5), uParam0->f_639, -1, 1);
												if (uParam0->f_525 == 11)
												{
													if (Var8.f_5 == 4)
													{
														__LIB_0__::func_408(__LIB_0__::func_255(5), 255, -1);
													}
													else if (Var8.f_5 == 5)
													{
														__LIB_0__::func_408(__LIB_0__::func_255(4), 255, -1);
													}
												}
											}
										}
										if (PLAYER::PLAYER_PED_ID() != iVar5)
										{
											func_636(iVar5, Var8.f_5, Var8.f_6, uParam0->f_634, uParam0->f_635, uParam0->f_637, uParam0->f_639, 1);
										}
									}
								}
							}
						}
						else if (__LIB_36__::func_867(&(uParam0->f_529), &(uParam0->f_531)) > fVar1)
						{
							if (uParam0->f_496 && uParam0->f_556 == 0)
							{
								if (uParam0->f_525 == 1)
								{
									uParam0->f_556 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_PED_BONE("scr_barbers_haircut", iVar5, 0f, 0f, 0.1f, 0f, 0f, 0f, 31086, 1f, false, false, false);
								}
							}
							if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam0->f_556))
							{
								GRAPHICS::SET_PARTICLE_FX_LOOPED_COLOUR(uParam0->f_556, 0f, 0f, 0f, false);
							}
							if (!uParam0->f_499)
							{
								if (uParam0->f_525 == 1 || uParam0->f_525 == 6)
								{
									if (AUDIO::HAS_SOUND_FINISHED(uParam0->f_557))
									{
										AUDIO::PLAY_SOUND_FROM_ENTITY(uParam0->f_557, "Scissors", iVar5, "Barber_Sounds", false, 0);
									}
								}
								else if (((uParam0->f_525 == 2 || uParam0->f_525 == 7) || uParam0->f_525 == 9) || uParam0->f_525 == 8)
								{
									if (AUDIO::HAS_SOUND_FINISHED(uParam0->f_558))
									{
										AUDIO::PLAY_SOUND_FROM_ENTITY(uParam0->f_557, "Scissors", iVar5, "Barber_Sounds", false, 0);
									}
								}
								else if (uParam0->f_525 == 10)
								{
								}
								else if (AUDIO::HAS_SOUND_FINISHED(uParam0->f_559))
								{
									AUDIO::PLAY_SOUND_FROM_ENTITY(uParam0->f_559, "Makeup", iVar5, "Barber_Sounds", false, 0);
								}
								uParam0->f_499 = 1;
							}
						}
					}
				}
				if (uParam0->f_590)
				{
					func_616(iVar5);
					func_771(uParam0, iVar5);
				}
				if (__LIB_14__::func_186(&uLocal_126))
				{
				}
				else if (!uParam0->f_116.f_22 && !uParam0->f_116.f_15)
				{
					if (PAD::HAVE_CONTROLS_CHANGED(2 /*FRONTEND_CONTROL*/))
					{
						uVar9 = uParam0->f_116.f_1;
						uParam0->f_590 = 1;
						func_616(iVar5);
						func_771(uParam0, iVar5);
						uParam0->f_116.f_1 = uVar9;
						__LIB_3__::func_110(uParam0->f_116.f_1, 1, 1);
						uParam0->f_725 = __LIB_5__::func_392();
					}
					else if ((((!HUD::IS_PAUSE_MENU_ACTIVE() && !PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !Global_100493.f_1458) && !NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
					{
						__LIB_42__::func_315(uParam0, 1);
						switch (uParam0->f_525)
						{
							case 0:
								func_612(uParam0, iVar5);
								break;
							case 4:
								func_611(uParam0, iVar5);
								break;
							case 1:
								func_587(uParam0, iVar5);
								break;
							case 2:
								if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
								{
									func_548(uParam0, iVar5);
								}
								else
								{
									func_587(uParam0, iVar5);
								}
								break;
							case 3:
								func_545(uParam0, iVar5);
								break;
							default:
								if (__LIB_36__::func_864(uParam0->f_525))
								{
									func_462(uParam0, iVar5);
								}
								break;
							}
					}
					if (__LIB_42__::func_314(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), uParam0->f_525, uParam0->f_116.f_1, &Var10, __LIB_36__::func_861(uParam0->f_523)))
					{
						if (__LIB_36__::func_841(&(Var10.f_1), uParam0->f_525, Var10.f_0) && !func_625(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), &Var10, uParam0))
						{
							StringCopy(&cVar11, "", 16);
							__LIB_14__::func_8(&cVar11);
							if (MISC::GET_HASH_KEY(&cVar11) == 0)
							{
								__LIB_11__::func_617("HAIR_SALE" /* GXT: A sale is active on this item. */, 0, 0);
							}
						}
					}
				}
				if (uParam0->f_492)
				{
					if (uParam0->f_116.f_1 >= 0)
					{
						if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						{
							__LIB_16__::func_397(&uVar12);
							if (MISC::GET_HASH_KEY(&uVar12) == 0)
							{
								if (uParam0->f_525 == 1)
								{
									__LIB_1__::func_789("HAIR_UNLOCK", 0, 0);
									__LIB_8__::func_283(__LIB_22__::func_337(Global_4537616[uParam0->f_116.f_1]));
								}
								else if (uParam0->f_525 == 2)
								{
									__LIB_1__::func_789("HAIR_UNLOCK", 0, 0);
									__LIB_8__::func_283(__LIB_22__::func_173(__LIB_36__::func_840(__LIB_36__::func_904(uParam0->f_116.f_1))));
								}
								else if (uParam0->f_525 == 3)
								{
									__LIB_1__::func_789("HAIR_UNLOCK", 0, 0);
									__LIB_8__::func_283(__LIB_22__::func_173(__LIB_36__::func_839(uParam0->f_116.f_1)));
								}
								else if (__LIB_36__::func_864(uParam0->f_525))
								{
									if (__LIB_42__::func_314(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), uParam0->f_525, uParam0->f_116.f_1, &Var13, __LIB_36__::func_861(uParam0->f_523)))
									{
										bVar14 = true;
										if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && __LIB_3__::func_538()) && !MISC::IS_STRING_NULL_OR_EMPTY(&(Var13.f_1)))
										{
											__LIB_36__::func_908(&sVar15, uParam0->f_525, Var13.f_1, 0, 0);
											if (!NETSHOPPING::NET_GAMESERVER_CATALOG_ITEM_IS_VALID(&sVar15))
											{
												bVar14 = false;
											}
										}
										if (bVar14)
										{
											if (Var13.f_9 == 0)
											{
												if (Var13.f_8 == -99)
												{
													bVar14 = false;
												}
												else if (__LIB_22__::func_337(Var13.f_8) == 0)
												{
													bVar14 = false;
												}
											}
											else if (Var13.f_9 == 1 || Var13.f_9 == 2)
											{
												if (Var13.f_10 == -1)
												{
													bVar14 = false;
												}
												else if (__LIB_22__::func_173(Var13.f_10) == 0)
												{
													bVar14 = false;
												}
											}
										}
										if (!bVar14)
										{
											if (Var13.f_9 == 0)
											{
												__LIB_1__::func_789("HAIR_LCKPC", 0, 0);
											}
											else if (Var13.f_9 == 1 || Var13.f_9 == 2)
											{
												if (Var13.f_5 == 1)
												{
													__LIB_1__::func_789("HAIR_LCKPC", 0, 0);
												}
												else if (Var13.f_5 == 4)
												{
													__LIB_1__::func_789("HAIR_LCKPC", 0, 0);
												}
											}
										}
										else if (Var13.f_9 == 0)
										{
											__LIB_1__::func_789("HAIR_UNLOCK", 0, 0);
											__LIB_8__::func_283(__LIB_22__::func_337(Var13.f_8));
										}
										else if (Var13.f_9 == 1 || Var13.f_9 == 2)
										{
											if (Var13.f_5 == 1)
											{
												__LIB_1__::func_789("HAIR_UNLOCK", 0, 0);
												__LIB_8__::func_283(__LIB_22__::func_173(Var13.f_10));
											}
											else if (Var13.f_5 == 4)
											{
												__LIB_1__::func_789("HAIR_UNLOCK", 0, 0);
												__LIB_8__::func_283(__LIB_22__::func_173(Var13.f_10));
											}
										}
									}
								}
							}
						}
					}
				}
				else if (uParam0->f_525 == 0)
				{
					if (uParam0->f_116.f_1 >= 0)
					{
						if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						{
							__LIB_16__::func_397(&uVar12);
							if (MISC::GET_HASH_KEY(&uVar12) == 0)
							{
								if (uParam0->f_116.f_1 == 0)
								{
									if (func_394(uParam0, ENTITY::GET_ENTITY_MODEL(iVar5), 1))
									{
										__LIB_1__::func_789("HAIR_UNLOCK_M", 0, 0);
									}
								}
								else if (uParam0->f_116.f_1 == 1)
								{
									if (func_394(uParam0, ENTITY::GET_ENTITY_MODEL(iVar5), 2))
									{
										__LIB_1__::func_789("HAIR_UNLOCK_M", 0, 0);
									}
								}
								else if (uParam0->f_116.f_1 == 2)
								{
									if (func_394(uParam0, ENTITY::GET_ENTITY_MODEL(iVar5), 3))
									{
										__LIB_1__::func_789("HAIR_UNLOCK_M", 0, 0);
									}
								}
							}
						}
					}
				}
				else if (uParam0->f_525 == 5)
				{
				}
				else if (uParam0->f_525 == 4)
				{
					if (uParam0->f_715 > -1)
					{
						if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						{
							__LIB_16__::func_397(&uVar12);
							if (MISC::GET_HASH_KEY(&uVar12) == 0)
							{
								if (BitTest(uParam0->f_719[(uParam0->f_715 / 32)], (uParam0->f_715 % 32)))
								{
									__LIB_1__::func_789("HAIR_UNLOCK_M", 0, 0);
								}
							}
						}
					}
				}
				else if ((uParam0->f_525 != 0 && uParam0->f_493) && !uParam0->f_500)
				{
					if (uParam0->f_116.f_1 >= 0)
					{
						if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						{
							__LIB_16__::func_397(&uVar12);
							if (MISC::GET_HASH_KEY(&uVar12) == 0)
							{
								if (uParam0->f_494)
								{
									if (__LIB_13__::func_983(&(uParam0->f_566)))
									{
										__LIB_1__::func_789("SHOP_UNLOCKDLC" /* GXT: This item has just been unlocked, it is part of the ~a~ Pack. */, 4000, 0);
										__LIB_3__::func_542(__LIB_13__::func_984(&(uParam0->f_566), 0));
									}
									else if (__LIB_13__::func_982(&(uParam0->f_566)))
									{
										__LIB_1__::func_789("SHOP_UNLOCKDLC3" /* GXT: This item has just been unlocked, it is part of the ~a~ Special. */, 4000, 0);
										__LIB_3__::func_542(__LIB_13__::func_984(&(uParam0->f_566), 0));
									}
									else if (__LIB_13__::func_981(&(uParam0->f_566)))
									{
										__LIB_1__::func_789("SHOP_UNLOCKDLC4" /* GXT: This item has just been unlocked, it is part of the ~a~ Surprise. */, 4000, 0);
										__LIB_3__::func_542(__LIB_13__::func_984(&(uParam0->f_566), 0));
									}
									else if (__LIB_13__::func_980(&(uParam0->f_566)))
									{
										__LIB_1__::func_789("SHOP_UNLOCKDLC6" /* GXT: This item has just been unlocked, it is part of ~a~. */, 4000, 0);
										__LIB_3__::func_542(__LIB_13__::func_984(&(uParam0->f_566), 0));
									}
									else if (__LIB_13__::func_979(&(uParam0->f_566)))
									{
										__LIB_1__::func_789("SHOP_UNLOCKDLC7" /* GXT: This item has just been unlocked, it is part of the Halloween Surprise. */, 4000, 0);
									}
									else if (__LIB_13__::func_978(&(uParam0->f_566)))
									{
										__LIB_1__::func_789("SHOP_UNLOCKDLC8", 4000, 0);
									}
									else
									{
										__LIB_1__::func_789("SHOP_UNLOCKDLC2" /* GXT: This item has just been unlocked, it is part of The ~a~. */, 4000, 0);
										__LIB_3__::func_542(__LIB_13__::func_984(&(uParam0->f_566), 1));
									}
								}
								else
								{
									__LIB_1__::func_789("HAIR_UNLOCK_N", 4000, 0);
								}
								uParam0->f_500 = 1;
							}
						}
					}
				}
				if (__LIB_15__::func_107(&uLocal_126))
				{
				}
				else if (!uParam0->f_116.f_15 || uParam0->f_116.f_22)
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !iLocal_136)
					{
						HUD::SET_MULTIPLAYER_WALLET_CASH();
						HUD::SET_MULTIPLAYER_BANK_CASH();
						iLocal_136 = 1;
					}
					if ((((uParam0->f_525 == 1 || uParam0->f_525 == 2) || uParam0->f_525 == 3) || uParam0->f_525 == 6) || uParam0->f_525 == 11)
					{
						__LIB_16__::func_397(&uVar16);
						if (MISC::GET_HASH_KEY(&uVar16) == 0)
						{
							if (uParam0->f_494 && !MISC::IS_STRING_NULL_OR_EMPTY(__LIB_13__::func_984(&(uParam0->f_566), 0)))
							{
								if (__LIB_13__::func_983(&(uParam0->f_566)))
								{
									__LIB_1__::func_789("SHOP_DLC_PACK" /* GXT: Part of the ~a~ Pack. */, 0, 0);
									__LIB_3__::func_542(__LIB_13__::func_984(&(uParam0->f_566), 0));
								}
								else if (__LIB_13__::func_982(&(uParam0->f_566)))
								{
									__LIB_1__::func_789("SHOP_DLC_PACK3" /* GXT: Part of the ~a~ Special. */, 0, 0);
									__LIB_3__::func_542(__LIB_13__::func_984(&(uParam0->f_566), 0));
								}
								else if (__LIB_13__::func_981(&(uParam0->f_566)))
								{
									__LIB_1__::func_789("SHOP_DLC_PACK4" /* GXT: Part of the ~a~ Surprise. */, 0, 0);
									__LIB_3__::func_542(__LIB_13__::func_984(&(uParam0->f_566), 0));
								}
								else if (__LIB_13__::func_980(&(uParam0->f_566)))
								{
									__LIB_1__::func_789("SHOP_DLC_PACK6" /* GXT: Part of ~a~. */, 0, 0);
									__LIB_3__::func_542(__LIB_13__::func_984(&(uParam0->f_566), 0));
								}
								else if (__LIB_13__::func_979(&(uParam0->f_566)))
								{
									__LIB_1__::func_789("SHOP_DLC_PACK7" /* GXT: Part of the Halloween Surprise. */, 0, 0);
								}
								else if (__LIB_13__::func_978(&(uParam0->f_566)))
								{
									__LIB_1__::func_789("SHOP_DLC_PACK8", 0, 0);
								}
								else
								{
									__LIB_1__::func_789("SHOP_DLC_PACK2" /* GXT: Part of The ~a~. */, 0, 0);
									__LIB_3__::func_542(__LIB_13__::func_984(&(uParam0->f_566), 1));
								}
							}
						}
					}
					HUD::SHOW_HUD_COMPONENT_THIS_FRAME(3);
					HUD::SHOW_HUD_COMPONENT_THIS_FRAME(4);
					HUD::SHOW_HUD_COMPONENT_THIS_FRAME(5);
					HUD::SHOW_HUD_COMPONENT_THIS_FRAME(13);
					__LIB_11__::func_266(1, *uParam0, 1, 0, 1, -1082130432, 0, 0, -1);
					fVar3 = 0f;
					if (MISC::IS_PC_VERSION())
					{
						if (!__LIB_36__::func_826(uParam0))
						{
							fVar3 = 0.4f;
						}
						if (MISC::ABSF((GRAPHICS::GET_ASPECT_RATIO(false) - 1.6f)) < 0.1f)
						{
							fVar17 = 0.013f;
						}
						else if (MISC::ABSF((GRAPHICS::GET_ASPECT_RATIO(false) - 1.7777777f)) < 0.1f)
						{
							fVar17 = 0f;
						}
						else if (MISC::ABSF((GRAPHICS::GET_ASPECT_RATIO(false) - 1.3333333f)) < 0.1f)
						{
							fVar17 = 0.038f;
						}
						else
						{
							fVar17 = 0f;
						}
					}
					GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
					GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
					GRAPHICS::DRAW_SCALEFORM_MOVIE(uParam0->f_614, (0.113f + fVar17), (0.255f + __LIB_13__::func_631()), Global_23149, 0.5972f, 255, 255, 255, 255, 0);
					GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
					GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
					GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
					GRAPHICS::DRAW_SCALEFORM_MOVIE(uParam0->f_624, ((0.113f + fVar17) + fVar3), (0.255f + __LIB_13__::func_631()), Global_23149, 0.5972f, 255, 255, 255, 255, 0);
					GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
					if (((uParam0->f_525 == 1 || uParam0->f_525 == 2) || uParam0->f_525 == 6) || uParam0->f_525 == 11)
					{
						__LIB_16__::func_397(&uVar16);
						if (MISC::GET_HASH_KEY(&uVar16) == 0)
						{
							if (uParam0->f_494 && !MISC::IS_STRING_NULL_OR_EMPTY(__LIB_13__::func_984(&(uParam0->f_566), 0)))
							{
								if (__LIB_13__::func_983(&(uParam0->f_566)))
								{
									__LIB_1__::func_789("SHOP_DLC_PACK" /* GXT: Part of the ~a~ Pack. */, 0, 0);
									__LIB_3__::func_542(__LIB_13__::func_984(&(uParam0->f_566), 0));
								}
								else if (__LIB_13__::func_982(&(uParam0->f_566)))
								{
									__LIB_1__::func_789("SHOP_DLC_PACK3" /* GXT: Part of the ~a~ Special. */, 0, 0);
									__LIB_3__::func_542(__LIB_13__::func_984(&(uParam0->f_566), 0));
								}
								else if (__LIB_13__::func_981(&(uParam0->f_566)))
								{
									__LIB_1__::func_789("SHOP_DLC_PACK4" /* GXT: Part of the ~a~ Surprise. */, 0, 0);
									__LIB_3__::func_542(__LIB_13__::func_984(&(uParam0->f_566), 0));
								}
								else if (__LIB_13__::func_980(&(uParam0->f_566)))
								{
									__LIB_1__::func_789("SHOP_DLC_PACK6" /* GXT: Part of ~a~. */, 0, 0);
									__LIB_3__::func_542(__LIB_13__::func_984(&(uParam0->f_566), 0));
								}
								else if (__LIB_13__::func_979(&(uParam0->f_566)))
								{
									__LIB_1__::func_789("SHOP_DLC_PACK7" /* GXT: Part of the Halloween Surprise. */, 0, 0);
								}
								else if (__LIB_13__::func_978(&(uParam0->f_566)))
								{
									__LIB_1__::func_789("SHOP_DLC_PACK8", 0, 0);
								}
								else
								{
									__LIB_1__::func_789("SHOP_DLC_PACK2" /* GXT: Part of The ~a~. */, 0, 0);
									__LIB_3__::func_542(__LIB_13__::func_984(&(uParam0->f_566), 1));
								}
							}
						}
					}
					if (__LIB_42__::func_314(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), uParam0->f_525, uParam0->f_116.f_1, &Var18, __LIB_36__::func_861(uParam0->f_523)))
					{
						if (__LIB_36__::func_841(&(Var18.f_1), uParam0->f_525, Var18.f_0) && !func_625(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), &Var18, uParam0))
						{
							StringCopy(&cVar19, "", 16);
							__LIB_14__::func_8(&cVar19);
							if (MISC::GET_HASH_KEY(&cVar19) == 0)
							{
								__LIB_11__::func_617("HAIR_SALE" /* GXT: A sale is active on this item. */, 0, 0);
							}
						}
					}
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						HUD::SET_MULTIPLAYER_WALLET_CASH();
						HUD::SET_MULTIPLAYER_BANK_CASH();
						if (Global_262145.f_2463 /* Tunable: IS_SALE_ON_IN_HAIR_SHOP */)
						{
							if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPShops"))
							{
								if (__LIB_3__::func_124(29, 1, 1, &fVar20, &fVar21, 0))
								{
									GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
									GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
									GRAPHICS::DRAW_SPRITE("MPShops", "ShopUI_Title_Graphics_SALE", 0.112f, 0.045f, Global_23149, fVar21, 0f, 255, 255, 255, 255, false, 0);
									GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
								}
							}
						}
					}
				}
				else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iLocal_136)
				{
					HUD::REMOVE_MULTIPLAYER_WALLET_CASH();
					HUD::REMOVE_MULTIPLAYER_BANK_CASH();
					iLocal_136 = 0;
				}
			}
			break;
		case 7:
			PED::SET_PED_CAN_ARM_IK(PLAYER::PLAYER_PED_ID(), true);
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 104, true);
			PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 60, true);
			if (uParam0->f_116.f_19)
			{
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					func_324(uParam0);
				}
				else
				{
					PED::RELEASE_PED_PRELOAD_PROP_DATA(PLAYER::PLAYER_PED_ID());
					PED::RELEASE_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID());
				}
				if (!PED::IS_PED_INJURED(uParam0->f_12))
				{
					TASK::CLEAR_PED_TASKS(uParam0->f_12);
					__LIB_42__::func_301(uParam0, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_12, true);
				}
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					__LIB_42__::func_300();
					__LIB_36__::func_871(uParam0);
				}
				__LIB_1__::func_895(1, *uParam0);
				__LIB_36__::func_900(uParam0);
				__LIB_14__::func_423(*uParam0, 0);
				func_122(uParam0);
				__LIB_13__::func_610(1);
				uParam0->f_503.f_19 = 0;
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (!__LIB_16__::func_373(PLAYER::PLAYER_PED_ID()))
						{
							Stack.Push(PLAYER::PLAYER_PED_ID());
							Stack.Push(2);
							Stack.Push(-1);
							Call_Loc(uParam0->f_478);
							uVar22 = StackVal;
							Stack.Push(PLAYER::PLAYER_PED_ID());
							Stack.Push(2);
							Stack.Push(uVar22);
							Stack.Push(0);
							Stack.Push(-1);
							Stack.Push(0);
							Stack.Push(0);
							Stack.Push(0);
							Stack.Push(-1);
							Stack.Push(-1);
							Stack.Push(-1);
							Stack.Push(0);
							Stack.Push(0);
							Stack.Push(0);
							Call_Loc(uParam0->f_479);
							if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
							{
								iVar23 = func_106(2153, -1, 0);
								iVar24 = func_106(2160, -1, 0);
								PED::SET_PED_HAIR_TINT(PLAYER::PLAYER_PED_ID(), iVar23, iVar24);
							}
							if (uParam0->f_724 != -1)
							{
								__LIB_2__::func_978(uParam0->f_724, 1, -1);
								uParam0->f_724 = -1;
							}
							func_616(PLAYER::PLAYER_PED_ID());
						}
					}
				}
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					HUD::REMOVE_MULTIPLAYER_WALLET_CASH();
					HUD::REMOVE_MULTIPLAYER_BANK_CASH();
				}
				__LIB_15__::func_133(&(uParam0->f_116), 0, 0, 1, 1);
				__LIB_14__::func_455();
				__LIB_31__::func_910(0);
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (__LIB_1__::func_520(1) && __LIB_0__::func_287(PLAYER::PLAYER_ID()))
					{
					}
					else
					{
						func_47(PLAYER::PLAYER_PED_ID(), -1);
					}
				}
				if (*uParam0 != 50 && __LIB_14__::func_285(PLAYER::PLAYER_ID(), uParam0->f_523, 1))
				{
					__LIB_14__::func_359(PLAYER::PLAYER_ID(), uParam0->f_523);
				}
				if (*uParam0 == 50 && __LIB_36__::func_878(PLAYER::PLAYER_ID(), uParam0->f_523, 0))
				{
					__LIB_36__::func_821(PLAYER::PLAYER_ID(), uParam0->f_523);
				}
				if (!Global_78319)
				{
					func_33(PLAYER::PLAYER_PED_ID(), 1);
				}
				if (Global_4535613)
				{
					if (Global_78319)
					{
						__LIB_10__::func_577(-1326764176, __LIB_0__::func_943(1, 1));
					}
				}
				SYSTEM::SETTIMERB(0);
				uParam0->f_116.f_9 = MISC::GET_GAME_TIMER();
				uParam0->f_116.f_19 = 0;
				uParam0->f_116.f_18 = 1;
				uParam0->f_116.f_23 = 0;
				uParam0->f_116.f_22 = 0;
			}
			else if (uParam0->f_116.f_18)
			{
				__LIB_14__::func_405(&(uParam0->f_236), 300);
				if (((((TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD")) == 7 || uParam0->f_236 < -75) || uParam0->f_236 > 75) || uParam0->f_236.f_1 < -75) || uParam0->f_236.f_1 > 75) || MISC::IS_POSITION_OCCUPIED(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, 1.5f, 0f), 0.2f, false, true, true, false, false, PLAYER::PLAYER_PED_ID(), false))
				{
					__LIB_14__::func_455();
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !PED::IS_PED_INJURED(uParam0->f_12)) && __LIB_16__::func_422(0))
					{
						ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_12, false);
						PED::SET_PED_CAN_RAGDOLL(uParam0->f_12, true);
						if (uParam0->f_495)
						{
							PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_12, uParam0->f_524);
						}
					}
					if (uParam0->f_501)
					{
						__LIB_36__::func_895();
					}
					uParam0->f_592 = 0;
					uParam0->f_116.f_17 = 0;
					uParam0->f_501 = 0;
					uParam0->f_11 = 5;
				}
			}
			else
			{
				if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !PED::IS_PED_INJURED(uParam0->f_12)) && __LIB_16__::func_422(0))
				{
					ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_12, false);
					PED::SET_PED_CAN_RAGDOLL(uParam0->f_12, true);
					if (uParam0->f_495)
					{
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_12, uParam0->f_524);
					}
				}
				if (uParam0->f_501)
				{
					__LIB_36__::func_895();
				}
				uParam0->f_592 = 0;
				uParam0->f_116.f_17 = 0;
				uParam0->f_501 = 0;
				uParam0->f_11 = 5;
			}
			break;
		case 8:
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				HUD::REMOVE_MULTIPLAYER_WALLET_CASH();
				HUD::REMOVE_MULTIPLAYER_BANK_CASH();
			}
			__LIB_13__::func_905(&(uParam0->f_51));
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			__LIB_1__::func_895(1, *uParam0);
			__LIB_36__::func_900(uParam0);
			__LIB_14__::func_423(*uParam0, 0);
			func_122(uParam0);
			uParam0->f_503.f_19 = 0;
			func_324(uParam0);
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			}
			__LIB_15__::func_133(&(uParam0->f_116), 1, 1, 1, 1);
			__LIB_13__::func_610(1);
			__LIB_14__::func_455();
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				__LIB_42__::func_300();
				__LIB_36__::func_871(uParam0);
				uParam0->f_488 = "";
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_66.f_1))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_66.f_1))
					{
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_ENT(Local_66.f_1), false, false);
						ENTITY::SET_ENTITY_COLLISION(NETWORK::NET_TO_ENT(Local_66.f_1), false, false);
						ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_ENT(Local_66.f_1), true);
					}
				}
			}
			else
			{
				PED::RELEASE_PED_PRELOAD_PROP_DATA(PLAYER::PLAYER_PED_ID());
				PED::RELEASE_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID());
			}
			if (!PED::IS_PED_INJURED(uParam0->f_12))
			{
				TASK::CLEAR_PED_TASKS(uParam0->f_12);
				__LIB_42__::func_301(uParam0, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_12, true);
			}
			if (Global_4535613)
			{
				if (Global_78319)
				{
					__LIB_10__::func_577(-1326764176, __LIB_0__::func_943(1, 1));
				}
			}
			__LIB_31__::func_910(0);
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (__LIB_1__::func_520(1) && __LIB_0__::func_287(PLAYER::PLAYER_ID()))
				{
				}
				else
				{
					func_47(PLAYER::PLAYER_PED_ID(), -1);
				}
			}
			if (*uParam0 != 50 && __LIB_14__::func_285(PLAYER::PLAYER_ID(), uParam0->f_523, 1))
			{
				__LIB_14__::func_359(PLAYER::PLAYER_ID(), uParam0->f_523);
			}
			if (*uParam0 == 50 && __LIB_36__::func_878(PLAYER::PLAYER_ID(), uParam0->f_523, 0))
			{
				__LIB_36__::func_821(PLAYER::PLAYER_ID(), uParam0->f_523);
			}
			if (!Global_78319)
			{
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 240, false);
			}
			uParam0->f_592 = 0;
			uParam0->f_116.f_17 = 0;
			uParam0->f_116.f_19 = 0;
			uParam0->f_11 = 3;
			break;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if ((ENTITY::DOES_ENTITY_EXIST(uParam0->f_640.f_2) && !PED::IS_PED_INJURED(uParam0->f_640.f_2)) && ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(uParam0->f_640.f_2))
		{
			NETWORK::SET_LOCAL_PLAYER_INVISIBLE_LOCALLY(false);
		}
	}
	__LIB_16__::func_382(&(uParam0->f_503), 1);
}

void func_33(int iParam0, int iParam1)//Position - 0x71F5
{
	bool bVar0;
	struct<27> Var1;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		bVar0 = __LIB_13__::func_716(iParam0);
		if (__LIB_0__::func_374(bVar0))
		{
			Var1 = 12;
			Var1.f_13 = 12;
			Var1.f_26 = 12;
			Var1.f_39 = 9;
			Var1.f_49 = 9;
			func_37(iParam0, &Var1, 1, -1);
			__LIB_0__::func_408(1306, Var1[0], -1);
			__LIB_0__::func_408(1307, Var1[1], -1);
			__LIB_0__::func_408(1308, Var1[2], -1);
			__LIB_0__::func_408(1318, Var1.f_13[0], -1);
			__LIB_0__::func_408(1319, Var1.f_13[1], -1);
			__LIB_0__::func_408(1320, Var1.f_13[2], -1);
			__LIB_0__::func_408(1330, Var1.f_26[0], -1);
			__LIB_0__::func_408(1331, Var1.f_26[1], -1);
			__LIB_0__::func_408(1332, Var1.f_26[2], -1);
			Global_100166[bVar0 /*65*/][0] = Var1[0];
			Global_100166[bVar0 /*65*/][1] = Var1[1];
			Global_100166[bVar0 /*65*/][2] = Var1[2];
			Global_100166[bVar0 /*65*/].f_13[0] = Var1.f_13[0];
			Global_100166[bVar0 /*65*/].f_13[1] = Var1.f_13[1];
			Global_100166[bVar0 /*65*/].f_13[2] = Var1.f_13[2];
			Global_100166[bVar0 /*65*/].f_26[0] = Var1.f_26[0];
			Global_100166[bVar0 /*65*/].f_26[1] = Var1.f_26[1];
			Global_100166[bVar0 /*65*/].f_26[2] = Var1.f_26[2];
			if (!__LIB_0__::func_540(0) || iParam1)
			{
				Global_113386.f_2363.f_539[bVar0 /*65*/][0] = Var1[0];
				Global_113386.f_2363.f_539[bVar0 /*65*/][1] = Var1[1];
				Global_113386.f_2363.f_539[bVar0 /*65*/][2] = Var1[2];
				Global_113386.f_2363.f_539[bVar0 /*65*/].f_13[0] = Var1.f_13[0];
				Global_113386.f_2363.f_539[bVar0 /*65*/].f_13[1] = Var1.f_13[1];
				Global_113386.f_2363.f_539[bVar0 /*65*/].f_13[2] = Var1.f_13[2];
				Global_113386.f_2363.f_539[bVar0 /*65*/].f_26[0] = Var1.f_26[0];
				Global_113386.f_2363.f_539[bVar0 /*65*/].f_26[1] = Var1.f_26[1];
				Global_113386.f_2363.f_539[bVar0 /*65*/].f_26[2] = Var1.f_26[2];
			}
		}
	}
}

void func_37(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x7672
{
	bool bVar0;
	int iVar1;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		bVar0 = __LIB_13__::func_716(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			__LIB_14__::func_626(iParam0, iVar1, &(uParam1->f_13[iVar1]), uParam1[iVar1], &(uParam1->f_26[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			__LIB_14__::func_625(iParam0, iVar1, &(uParam1->f_39[iVar1]), &(uParam1->f_49[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (__LIB_0__::func_374(bVar0))
		{
			uParam1->f_59 = Global_113386.f_2363.f_539[bVar0 /*65*/].f_59;
			uParam1->f_60 = Global_113386.f_2363.f_539[bVar0 /*65*/].f_60;
			uParam1->f_61 = Global_113386.f_2363.f_539[bVar0 /*65*/].f_61;
			uParam1->f_62 = Global_113386.f_2363.f_539[bVar0 /*65*/].f_62;
			uParam1->f_63 = Global_113386.f_2363.f_539[bVar0 /*65*/].f_63;
			uParam1->f_64 = Global_113386.f_2363.f_539[bVar0 /*65*/].f_64;
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			if (__LIB_1__::func_342(161, iParam3))
			{
				uParam1->f_59 = __LIB_1__::func_360(2053, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = __LIB_1__::func_360(753, iParam3, 0);
			}
			uParam1->f_60 = __LIB_1__::func_360(754, iParam3, 0);
			uParam1->f_61 = __LIB_1__::func_360(755, iParam3, 0);
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iParam0 == PLAYER::PLAYER_PED_ID())
		{
			if (__LIB_1__::func_342(161, iParam3))
			{
				uParam1->f_59 = __LIB_1__::func_360(2053, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = __LIB_1__::func_360(753, iParam3, 0);
			}
		}
	}
}

void func_47(int iParam0, int iParam1)//Position - 0x80BA
{
	struct<65> Var0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		Var0 = 12;
		Var0.f_13 = 12;
		Var0.f_26 = 12;
		Var0.f_39 = 9;
		Var0.f_49 = 9;
		func_37(iParam0, &Var0, 1, iParam1);
		__LIB_37__::func_695(iParam0, Var0, iParam1);
	}
}

int func_106(int iParam0, int iParam1, int iParam2)//Position - 0x9A52
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return __LIB_1__::func_360(iParam0, iParam1, iParam2);
}

void func_122(var uParam0)//Position - 0xAA4D
{
	if (uParam0->f_640)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_640.f_1);
		uParam0->f_640 = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_640.f_2))
	{
		PED::DELETE_PED(&(uParam0->f_640.f_2));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_4538723))
	{
		PED::DELETE_PED(&Global_4538723);
	}
	func_123(uParam0);
}

int func_123(var uParam0)//Position - 0xAAA1
{
	int iVar0;
	iVar0 = __LIB_36__::func_811();
	if (uParam0->f_640.f_68 != iVar0)
	{
		if (iVar0 == 0)
		{
			func_245(0);
			func_127(PLAYER::PLAYER_PED_ID(), 1);
			__LIB_11__::func_671(0);
			uParam0->f_640.f_68 = 0;
		}
		return 1;
	}
	return 0;
}

void func_127(int iParam0, int iParam1)//Position - 0xAB37
{
	bool bVar0;
	int iVar1;
	struct<65> Var2;
	int iVar3;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		bVar0 = __LIB_13__::func_716(iParam0);
		if (__LIB_0__::func_374(bVar0))
		{
			if (bVar0 == 2)
			{
				iVar1 = func_244(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					__LIB_0__::func_414(bVar0);
					func_137(iParam0, &(Global_113386.f_2363.f_539[bVar0 /*65*/]), 0, 0, 1, 0);
				}
			}
			Var2 = 12;
			Var2.f_13 = 12;
			Var2.f_26 = 12;
			Var2.f_39 = 9;
			Var2.f_49 = 9;
			func_37(iParam0, &Var2, 1, -1);
			Global_100166[bVar0 /*65*/] = { Var2 };
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				func_131();
			}
			if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != MISC::GET_HASH_KEY("clothes_shop_sp") || (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("lester1")) == 0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("michael4")) == 0))
			{
				if (iParam1 || ((((((!__LIB_0__::func_39(0) && !__LIB_0__::func_39(1)) && !__LIB_0__::func_39(2)) && !__LIB_0__::func_39(3)) && !__LIB_0__::func_39(4)) && !__LIB_0__::func_39(9)) && !__LIB_0__::func_39(10)))
				{
					Global_113386.f_2363.f_539[bVar0 /*65*/] = { Var2 };
					Global_113386.f_2363.f_539.f_2391[bVar0] = __LIB_0__::func_407(iParam0);
					iVar3 = 0;
					while (iVar3 < 12)
					{
						Global_113386.f_2363.f_539.f_204[iVar3 /*4*/][bVar0] = __LIB_0__::func_350(iParam0, __LIB_0__::func_33(iVar3));
						iVar3++;
					}
					iVar3 = 0;
					while (iVar3 < 12)
					{
						Global_113386.f_2363.f_539.f_204[iVar3 /*4*/][bVar0] = __LIB_0__::func_350(iParam0, __LIB_0__::func_33(iVar3));
						iVar3++;
					}
					if (bVar0 == 0)
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

void func_131()//Position - 0xAE70
{
	struct<50> Var0;
	if ((PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) || !__LIB_0__::func_374(__LIB_14__::func_466())) || !__LIB_0__::func_438())
	{
		return;
	}
	Var0 = 12;
	Var0.f_13 = 12;
	Var0.f_26 = 12;
	Var0.f_39 = 9;
	Var0.f_49 = 9;
	func_37(PLAYER::PLAYER_PED_ID(), &Var0, 1, -1);
	__LIB_0__::func_408(1306, Var0[0], -1);
	__LIB_0__::func_408(1307, Var0[1], -1);
	__LIB_0__::func_408(1308, Var0[2], -1);
	__LIB_0__::func_408(1309, Var0[3], -1);
	__LIB_0__::func_408(1310, Var0[4], -1);
	__LIB_0__::func_408(1311, Var0[5], -1);
	__LIB_0__::func_408(1312, Var0[6], -1);
	__LIB_0__::func_408(1313, Var0[7], -1);
	__LIB_0__::func_408(1314, Var0[8], -1);
	__LIB_0__::func_408(1315, Var0[9], -1);
	__LIB_0__::func_408(1316, Var0[10], -1);
	__LIB_0__::func_408(1317, Var0[11], -1);
	__LIB_0__::func_408(1318, Var0.f_13[0], -1);
	__LIB_0__::func_408(1319, Var0.f_13[1], -1);
	__LIB_0__::func_408(1320, Var0.f_13[2], -1);
	__LIB_0__::func_408(1321, Var0.f_13[3], -1);
	__LIB_0__::func_408(1322, Var0.f_13[4], -1);
	__LIB_0__::func_408(1323, Var0.f_13[5], -1);
	__LIB_0__::func_408(1324, Var0.f_13[6], -1);
	__LIB_0__::func_408(1325, Var0.f_13[7], -1);
	__LIB_0__::func_408(1326, Var0.f_13[8], -1);
	__LIB_0__::func_408(1327, Var0.f_13[9], -1);
	__LIB_0__::func_408(1328, Var0.f_13[10], -1);
	__LIB_0__::func_408(1329, Var0.f_13[11], -1);
	__LIB_0__::func_408(1330, Var0.f_26[0], -1);
	__LIB_0__::func_408(1331, Var0.f_26[1], -1);
	__LIB_0__::func_408(1332, Var0.f_26[2], -1);
	__LIB_0__::func_408(1333, Var0.f_26[3], -1);
	__LIB_0__::func_408(1334, Var0.f_26[4], -1);
	__LIB_0__::func_408(1335, Var0.f_26[5], -1);
	__LIB_0__::func_408(1336, Var0.f_26[6], -1);
	__LIB_0__::func_408(1337, Var0.f_26[7], -1);
	__LIB_0__::func_408(1338, Var0.f_26[8], -1);
	__LIB_0__::func_408(1339, Var0.f_26[9], -1);
	__LIB_0__::func_408(1340, Var0.f_26[10], -1);
	__LIB_0__::func_408(1341, Var0.f_26[11], -1);
	__LIB_0__::func_408(1342, Var0.f_39[0], -1);
	__LIB_0__::func_408(1343, Var0.f_39[1], -1);
	__LIB_0__::func_408(1344, Var0.f_39[2], -1);
	__LIB_0__::func_408(1345, Var0.f_39[3], -1);
	__LIB_0__::func_408(1346, Var0.f_39[4], -1);
	__LIB_0__::func_408(1347, Var0.f_39[5], -1);
	__LIB_0__::func_408(1348, Var0.f_39[6], -1);
	__LIB_0__::func_408(1349, Var0.f_39[7], -1);
	__LIB_0__::func_408(1350, Var0.f_39[8], -1);
	__LIB_0__::func_408(1351, Var0.f_49[0], -1);
	__LIB_0__::func_408(1352, Var0.f_49[1], -1);
	__LIB_0__::func_408(1353, Var0.f_49[2], -1);
	__LIB_0__::func_408(1354, Var0.f_49[3], -1);
	__LIB_0__::func_408(1355, Var0.f_49[4], -1);
	__LIB_0__::func_408(1356, Var0.f_49[5], -1);
	__LIB_0__::func_408(1357, Var0.f_49[6], -1);
	__LIB_0__::func_408(1358, Var0.f_49[7], -1);
	__LIB_0__::func_408(1359, Var0.f_49[8], -1);
	__LIB_0__::func_408(1360, __LIB_14__::func_466(), -1);
	STATS::STAT_SET_BOOL(joaat("CLO_STORED_INITIAL"), true, true);
	Global_113386.f_2363.f_539.f_4315 = 1;
}

void func_137(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)//Position - 0xB36C
{
	bool bVar0;
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
		bVar0 = __LIB_13__::func_716(iParam0);
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
		if (__LIB_0__::func_374(bVar0))
		{
			Global_113386.f_2363.f_539[bVar0 /*65*/].f_59 = uParam1->f_59;
			Global_113386.f_2363.f_539[bVar0 /*65*/].f_60 = uParam1->f_60;
			Global_113386.f_2363.f_539[bVar0 /*65*/].f_61 = uParam1->f_61;
			if (func_242(iParam0, iVar1, &iVar2, 0))
			{
				func_224(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
			Global_113386.f_2363.f_539[bVar0 /*65*/].f_62 = uParam1->f_62;
			Global_113386.f_2363.f_539[bVar0 /*65*/].f_63 = uParam1->f_63;
			Global_113386.f_2363.f_539[bVar0 /*65*/].f_64 = uParam1->f_64;
			if (func_145(iParam0, iVar1, &iVar2))
			{
				func_224(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			bVar4 = func_144(iParam0);
			__LIB_1__::func_354(754, uParam1->f_60, Global_78127, 1, 0);
			__LIB_1__::func_354(755, uParam1->f_61, Global_78127, 1, 0);
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
			func_1211(iParam0, 2, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			if (!bParam2)
			{
				iVar7 = __LIB_0__::func_206(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_1211(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			}
			if (!bParam3)
			{
				iVar8 = __LIB_0__::func_349(iParam0, uParam1->f_39[0], uParam1->f_49[0], 0);
				func_1211(iParam0, 14, iVar8, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
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
			__LIB_1__::func_354(753, iVar9, Global_78127, 1, 0);
			__LIB_1__::func_354(2053, iVar9, Global_78127, 1, 0);
			__LIB_1__::func_348(161, 1, -1, 1);
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

int func_144(int iParam0)//Position - 0xC73B
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
				iVar1 = func_1258(iParam0, 11, -1);
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
				iVar3 = func_1258(iParam0, 11, -1);
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

int func_145(int iParam0, int iParam1, int iParam2)//Position - 0xCA85
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_146(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_146(int iParam0, int iParam1, int iParam2)//Position - 0xCB11
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
	Global_78130[1 /*14*/] = { __LIB_12__::func_14(iVar0, iParam1, iParam2, -1) };
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
				if (!func_146(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_0__::func_466(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_146(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_12__::func_14(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_146(iParam0, 14, iVar4))
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
						Global_78130[2 /*14*/] = { __LIB_12__::func_14(iVar0, iVar2, iVar1, -1) };
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
			if (!func_146(iParam0, 14, uVar8[iVar7]))
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

int func_224(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x27422
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
		Global_78130[1 /*14*/] = { __LIB_12__::func_14(iVar10, iParam1, iParam2, -1) };
		if (!__LIB_0__::func_32(iParam3))
		{
			Global_78128 = (Global_78128 - 1);
			return 0;
		}
		__LIB_3__::func_367(iParam1);
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
				Global_78130[1 /*14*/] = { __LIB_12__::func_14(iVar10, iVar0, uVar11[iVar0], -1) };
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
							Global_78130[1 /*14*/] = { __LIB_12__::func_14(iVar10, 14, uVar12[iVar1], -1) };
							__LIB_0__::func_454(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
							__LIB_3__::func_367(14);
							if (Global_78128 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = __LIB_16__::func_225(iParam0, iVar10, 14, uVar12[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_224(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						__LIB_3__::func_367(iVar0);
						if (Global_78128 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								iVar3 = __LIB_16__::func_225(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_224(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_12__::func_14(iVar10, iVar0, func_244(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_242(iParam0, iVar10, &iVar4, 1))
							{
								func_224(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_0__::func_459(iVar10, 0) };
						func_224(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var14 = { __LIB_12__::func_14(iVar10, 8, iVar5, -1) };
			if (iVar5 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 8, iVar5, &uVar11, &Var14))
				{
					func_224(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_12__::func_14(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_224(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_12__::func_14(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_224(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_12__::func_14(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_224(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_12__::func_14(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_224(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
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
			Global_78130[1 /*14*/] = { __LIB_12__::func_14(iVar10, 14, uVar15[iVar1], -1) };
			__LIB_0__::func_454(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
			__LIB_3__::func_367(14);
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = __LIB_16__::func_225(iParam0, iVar10, 14, uVar15[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_224(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		__LIB_3__::func_367(iParam1);
		if (Global_78128 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = __LIB_16__::func_225(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_224(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				iVar3 = __LIB_16__::func_225(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_224(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			__LIB_13__::func_589(iVar10, iParam1, iParam2);
		}
	}
	if (Global_78128 == 1)
	{
		if (func_242(iParam0, iVar10, &iVar4, 0))
		{
			func_224(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_145(iParam0, iVar10, &iVar4))
		{
			func_224(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_242(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x29BD7
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_146(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_244(int iParam0, int iParam1, int iParam2)//Position - 0x29E97
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
				if (func_146(iParam0, iParam1, iVar0))
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
				if (func_146(iParam0, iParam1, iVar1))
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

void func_245(int iParam0)//Position - 0x29F38
{
	struct<50> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		GRAPHICS::OVERRIDE_PED_CREW_LOGO_TEXTURE(PLAYER::PLAYER_PED_ID(), "", "");
		Var0 = 12;
		Var0.f_13 = 12;
		Var0.f_26 = 12;
		Var0.f_39 = 9;
		Var0.f_49 = 9;
		PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 5, 0, 0, 0);
		PED::CLEAR_PED_PARACHUTE_PACK_VARIATION(PLAYER::PLAYER_PED_ID());
		PED::CLEAR_PED_STORED_HAT_PROP(PLAYER::PLAYER_PED_ID());
		PED::SET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), 0, 0, 0, false);
		PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 0);
		if (PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
		{
			PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), true);
		}
		PED::CLEAR_ALL_PED_PROPS(PLAYER::PLAYER_PED_ID());
		__LIB_11__::func_800(&Var0, -1);
		func_137(PLAYER::PLAYER_PED_ID(), &Var0, 0, 0, 1, iParam0);
		iVar1 = FILES::GET_HASH_NAME_FOR_COMPONENT(PLAYER::PLAYER_PED_ID(), 1, PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 1), PED::GET_PED_TEXTURE_VARIATION(PLAYER::PLAYER_PED_ID(), 1));
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("SHRINK_HEAD"), 0))
		{
			iVar2 = __LIB_1__::func_360(2100, -1, 0);
			iVar3 = __LIB_1__::func_360(2101, -1, 0);
			iVar4 = __LIB_1__::func_360(2102, -1, 0);
			fVar5 = __LIB_1__::func_680(135, -1);
			iVar6 = ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());
			if (iVar6 == joaat("MP_M_Freemode_01"))
			{
				PED::SET_PED_HEAD_BLEND_DATA(PLAYER::PLAYER_PED_ID(), 0, 0, 0, iVar2, iVar3, iVar4, 0f, fVar5, 0f, false);
			}
			else if (iVar6 == joaat("MP_F_Freemode_01"))
			{
				PED::SET_PED_HEAD_BLEND_DATA(PLAYER::PLAYER_PED_ID(), 21, 0, 0, iVar2, iVar3, iVar4, 0f, fVar5, 0f, false);
			}
			iVar7 = 0;
			while (iVar7 < 20)
			{
				PED::SET_PED_MICRO_MORPH(PLAYER::PLAYER_PED_ID(), iVar7, 0f);
				iVar7++;
			}
		}
		else
		{
			__LIB_2__::func_996(PLAYER::PLAYER_PED_ID(), -1);
		}
		func_290(0);
		func_246(PLAYER::PLAYER_PED_ID(), 0, 1, -1);
		__LIB_10__::func_577(-1326764176, __LIB_0__::func_943(1, 1));
	}
}

void func_246(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x2A0CC
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
		bVar3 = func_284(iParam0, 0);
		bVar4 = __LIB_1__::func_37(iParam0);
		bVar5 = func_275(iParam0, iParam3);
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
			if (__LIB_2__::func_761(iVar6, iVar0))
			{
				if (__LIB_0__::func_445(&Var1, iVar6, iVar2, iParam0, -1))
				{
					if (__LIB_2__::func_998(iParam0, &Var1, iVar6, Var1.f_4, Var1.f_8, bVar3, bVar4, bParam1, bVar5))
					{
						PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var1.f_4, Var1.f_5);
					}
				}
			}
			iVar6++;
		}
		if (__LIB_2__::func_761(123, iVar0))
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
					if (__LIB_2__::func_761(iVar10, iVar0))
					{
						if (__LIB_2__::func_998(iParam0, &(Var9.f_7), iVar10, Var9.f_2, Var9.f_6, bVar3, bVar4, bParam1, bVar5))
						{
							if (!__LIB_5__::func_179(Var9.f_2, Var9.f_3, iVar10))
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

int func_275(int iParam0, int iParam1)//Position - 0x38E25
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
			iVar2 = __LIB_1__::func_360(1759, -1, 0);
			if (iParam1 != -1)
			{
				iVar2 = iParam1;
			}
			if (iVar0 > 15)
			{
				iVar3 = func_1258(iParam0, 11, -1);
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
			iVar2 = __LIB_1__::func_360(1759, -1, 0);
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
				iVar5 = func_1258(iParam0, 11, -1);
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

int func_284(int iParam0, bool bParam1)//Position - 0x39283
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
							iVar2 = __LIB_5__::func_29(joaat("MP_M_Freemode_01"), 11, func_1258(iParam0, 11, -1), 0);
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
						if (__LIB_2__::func_761(13, -1))
						{
							return 1;
						}
						else if (__LIB_2__::func_761(14, -1))
						{
							return 1;
						}
						else if (__LIB_2__::func_761(15, -1))
						{
							return 1;
						}
						else if (__LIB_2__::func_761(16, -1))
						{
							return 1;
						}
						else if (__LIB_2__::func_761(71, -1))
						{
							return 1;
						}
						else if (__LIB_2__::func_761(72, -1))
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
						iVar3 = func_1258(iParam0, 11, -1);
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
						iVar5 = func_1258(iParam0, 8, -1);
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
							iVar7 = __LIB_5__::func_29(joaat("MP_F_Freemode_01"), 11, func_1258(iParam0, 11, -1), 0);
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
						iVar8 = func_1258(iParam0, 11, -1);
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
							iVar10 = __LIB_5__::func_29(joaat("MP_F_Freemode_01"), 11, func_1258(iParam0, 11, -1), 0);
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
							iVar11 = __LIB_5__::func_29(joaat("MP_F_Freemode_01"), 11, func_1258(iParam0, 11, -1), 0);
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
						iVar12 = func_1258(iParam0, 8, -1);
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

void func_290(int iParam0)//Position - 0x3A400
{
	struct<14> Var0;
	int iVar1;
	if (func_1258(PLAYER::PLAYER_PED_ID(), 14, 0) != -99)
	{
		Var0 = { __LIB_6__::func_38(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), 14, func_1258(PLAYER::PLAYER_PED_ID(), 14, 0), -1) };
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || iParam0 == 1)
		{
			if (iParam0 == 0)
			{
				iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			}
			switch (MISC::GET_HASH_KEY(&(Var0.f_8)))
			{
				case joaat("CLO_BUS_P_1_0"):
				case joaat("CLO_BUS_P_1_1"):
				case joaat("CLO_BUS_P_1_2"):
				case joaat("CLO_BUS_P_1_3"):
				case joaat("CLO_BUS_P_1_4"):
				case joaat("CLO_BUS_P_1_5"):
				case joaat("CLO_BUS_P_1_6"):
				case joaat("CLO_BUS_P_1_7"):
				case joaat("CLO_BUS_P_1_8"):
				case joaat("CLO_BUS_P_1_9"):
				case joaat("CLO_BUS_P_1_10"):
				case joaat("CLO_BUS_P_1_11"):
				case joaat("CLO_BUS_P_1_12"):
				case joaat("CLO_BUS_P_1_13"):
				case joaat("CLO_X2M_HT_0_0"):
				case joaat("CLO_X2M_HT_0_1"):
				case joaat("CLO_X2M_HT_0_2"):
				case joaat("CLO_X2M_HT_0_3"):
				case joaat("CLO_X2M_HT_0_4"):
				case joaat("CLO_X2M_HT_0_5"):
				case joaat("CLO_X2M_HT_0_6"):
				case joaat("CLO_X2M_HT_0_7"):
				case joaat("CLO_X2F_HT_0_0"):
				case joaat("CLO_X2F_HT_0_1"):
				case joaat("CLO_X2F_HT_0_2"):
				case joaat("CLO_X2F_HT_0_3"):
				case joaat("CLO_X2F_HT_0_4"):
				case joaat("CLO_X2F_HT_0_5"):
				case joaat("CLO_X2F_HT_0_6"):
				case joaat("CLO_X2F_HT_0_7"):
				case joaat("HT_FMM_13_0"):
				case joaat("HT_FMM_13_1"):
				case joaat("HT_FMM_13_2"):
				case joaat("HT_FMM_13_3"):
				case joaat("HT_FMM_13_4"):
				case joaat("HT_FMM_13_5"):
				case joaat("HT_FMM_13_6"):
				case joaat("HT_FMM_13_7"):
				case joaat("CLO_BBF_P2_0"):
				case joaat("CLO_BBF_P2_1"):
				case joaat("CLO_BBF_P2_2"):
				case joaat("CLO_BBF_P2_3"):
				case joaat("CLO_BBF_P2_4"):
				case joaat("CLO_BBF_P2_5"):
				case joaat("CLO_BBF_P2_6"):
					if (iParam0 == 0)
					{
						if (VEHICLE::DOES_VEHICLE_HAVE_ROOF(iVar1))
						{
							PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 0);
						}
					}
					else
					{
						PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 0);
					}
					break;
				}
		}
	}
}

void func_324(var uParam0)//Position - 0x3BCED
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			func_329(uParam0);
			if (uParam0->f_545 != -99)
			{
				Stack.Push(PLAYER::PLAYER_PED_ID());
				Stack.Push(14);
				Stack.Push(uParam0->f_545);
				Stack.Push(0);
				Stack.Push(-1);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Stack.Push(-1);
				Stack.Push(-1);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Call_Loc(uParam0->f_479);
			}
			if (uParam0->f_546 != -99)
			{
				Stack.Push(PLAYER::PLAYER_PED_ID());
				Stack.Push(8);
				Stack.Push(uParam0->f_546);
				Stack.Push(0);
				Stack.Push(-1);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Stack.Push(-1);
				Stack.Push(-1);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Call_Loc(uParam0->f_479);
			}
			if (uParam0->f_547 != -99)
			{
				Stack.Push(PLAYER::PLAYER_PED_ID());
				Stack.Push(9);
				Stack.Push(uParam0->f_547);
				Stack.Push(0);
				Stack.Push(-1);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Stack.Push(-1);
				Stack.Push(-1);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Call_Loc(uParam0->f_479);
			}
			if (uParam0->f_548 != -99)
			{
				Stack.Push(PLAYER::PLAYER_PED_ID());
				Stack.Push(2);
				Stack.Push(uParam0->f_548);
				Stack.Push(0);
				Stack.Push(-1);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Stack.Push(-1);
				Stack.Push(-1);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Call_Loc(uParam0->f_479);
			}
			if (uParam0->f_553 != -1)
			{
				func_325(PLAYER::PLAYER_PED_ID(), uParam0->f_553);
			}
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (uParam0->f_549 != -99)
				{
					Stack.Push(PLAYER::PLAYER_PED_ID());
					Stack.Push(1);
					Stack.Push(uParam0->f_549);
					Stack.Push(0);
					Stack.Push(-1);
					Stack.Push(0);
					Stack.Push(0);
					Stack.Push(0);
					Stack.Push(-1);
					Stack.Push(-1);
					Stack.Push(-1);
					Stack.Push(0);
					Stack.Push(0);
					Stack.Push(0);
					Call_Loc(uParam0->f_479);
				}
				if (uParam0->f_550 != -99)
				{
					Stack.Push(PLAYER::PLAYER_PED_ID());
					Stack.Push(7);
					Stack.Push(uParam0->f_550);
					Stack.Push(0);
					Stack.Push(-1);
					Stack.Push(0);
					Stack.Push(0);
					Stack.Push(0);
					Stack.Push(-1);
					Stack.Push(-1);
					Stack.Push(-1);
					Stack.Push(0);
					Stack.Push(0);
					Stack.Push(0);
					Call_Loc(uParam0->f_479);
				}
				if (uParam0->f_551 != -1 && uParam0->f_552 != -1)
				{
					PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), __LIB_0__::func_33(5), uParam0->f_551, uParam0->f_552, 0);
				}
			}
		}
	}
	uParam0->f_544 = -99;
	uParam0->f_545 = -99;
	uParam0->f_549 = -99;
	uParam0->f_550 = -99;
	uParam0->f_551 = -1;
	uParam0->f_552 = -1;
	uParam0->f_546 = -99;
	uParam0->f_547 = -99;
	uParam0->f_548 = -99;
	uParam0->f_553 = -1;
}

void func_325(int iParam0, int iParam1)//Position - 0x3BE94
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int* iVar6;
	struct<5> Var7;
	int iVar8;
	int iVar9;
	struct<5> Var10;
	iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
	iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 11);
	iVar2 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 11, iVar0, iVar1);
	iVar3 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 10);
	iVar4 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 10);
	iVar5 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 10, iVar3, iVar4);
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("HOODED_JACKET"), 0))
	{
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("HOOD_UP"), 0) != iParam1 == 1 || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("HOOD_TUCKED"), 0) != iParam1 == 2)
		{
			if (__LIB_17__::func_933(iVar2, iParam1 == 1, iParam1 == 2, &iVar6))
			{
				FILES::GET_SHOP_PED_COMPONENT(iVar6, &Var7);
				if (iParam1 != 1)
				{
					iVar8 = FILES::GET_HASH_NAME_FOR_PROP(iParam0, 0, PED::GET_PED_PROP_INDEX(iParam0, 0), PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, 0));
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar8, joaat("FAKE_HAT"), 1))
					{
						PED::CLEAR_PED_PROP(iParam0, 0);
					}
				}
				func_1211(iParam0, 11, __LIB_0__::func_206(iParam0, Var7.f_3, Var7.f_4, 11), 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 10) == 0 && __LIB_0__::func_285(iVar5, 11, -1))
				{
					if (__LIB_0__::func_285(iVar5, 11, Var7.f_1))
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, iVar3, iVar4, 0);
					}
					else if (__LIB_0__::func_284(iVar5, 10, &iVar9, -1))
					{
						if (__LIB_0__::func_285(iVar9, 11, Var7.f_1))
						{
							FILES::GET_SHOP_PED_COMPONENT(iVar9, &Var10);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var10.f_3, Var10.f_4, 0);
						}
					}
				}
				if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_M_Freemode_01"))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("CREW_LOGO"), 0))
					{
						if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("IE_DRAW_16"), 0) && iVar5 != joaat("DLC_MP_IE_M_DECL_1_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_IE_M_DECL_1_0"), &Var7);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var7.f_3, Var7.f_4, 0);
						}
						else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("IE_DRAW_19"), 0) && iVar5 != joaat("DLC_MP_IE_M_DECL_2_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_IE_M_DECL_2_0"), &Var7);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var7.f_3, Var7.f_4, 0);
						}
						else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("GORKA_SUIT"), 0))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_X17_M_DECL_10_0"), &Var7);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var7.f_3, Var7.f_4, 0);
						}
						else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("FX_DRAW_2"), 0) && iVar5 != joaat("DLC_MP_FIXER_M_DECL_0_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_FIXER_M_DECL_0_0"), &Var7);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var7.f_3, Var7.f_4, 0);
						}
						else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("FX_DRAW_3"), 0) && iVar5 != joaat("DLC_MP_FIXER_M_DECL_1_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_FIXER_M_DECL_1_0"), &Var7);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var7.f_3, Var7.f_4, 0);
						}
					}
				}
				else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("CREW_LOGO"), 0))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("IE_DRAW_16"), 0) && iVar5 != joaat("DLC_MP_IE_F_DECL_1_0"))
					{
						FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_IE_F_DECL_1_0"), &Var7);
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var7.f_3, Var7.f_4, 0);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("IE_DRAW_19"), 0) && iVar5 != joaat("DLC_MP_IE_F_DECL_2_0"))
					{
						FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_IE_F_DECL_2_0"), &Var7);
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var7.f_3, Var7.f_4, 0);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("GORKA_SUIT"), 0))
					{
						FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_X17_F_DECL_10_0"), &Var7);
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var7.f_3, Var7.f_4, 0);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("FX_DRAW_7"), 0) && iVar5 != joaat("DLC_MP_FIXER_F_DECL_1_0"))
					{
						FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_FIXER_F_DECL_1_0"), &Var7);
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var7.f_3, Var7.f_4, 0);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("FX_DRAW_8"), 0) && iVar5 != joaat("DLC_MP_FIXER_F_DECL_2_0"))
					{
						FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_FIXER_F_DECL_2_0"), &Var7);
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var7.f_3, Var7.f_4, 0);
					}
				}
			}
		}
	}
}

void func_329(var uParam0)//Position - 0x3C3A1
{
	int iVar0;
	if (uParam0->f_544 != -99)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar0 = PLAYER::PLAYER_PED_ID();
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_640.f_2) && !PED::IS_PED_INJURED(uParam0->f_640.f_2))
			{
				iVar0 = uParam0->f_640.f_2;
			}
			if (func_330(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), uParam0->f_544, __LIB_0__::func_350(iVar0, 2)))
			{
				Stack.Push(PLAYER::PLAYER_PED_ID());
				Stack.Push(14);
				Stack.Push(uParam0->f_544);
				Stack.Push(0);
				Stack.Push(-1);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Stack.Push(-1);
				Stack.Push(-1);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Call_Loc(uParam0->f_479);
			}
			else
			{
				Stack.Push(PLAYER::PLAYER_PED_ID());
				Stack.Push(14);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Stack.Push(-1);
				Stack.Push(-1);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Call_Loc(uParam0->f_479);
			}
		}
		else
		{
			Stack.Push(PLAYER::PLAYER_PED_ID());
			Stack.Push(14);
			Stack.Push(uParam0->f_544);
			Stack.Push(0);
			Stack.Push(-1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Stack.Push(-1);
			Stack.Push(-1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Call_Loc(uParam0->f_479);
		}
	}
}

int func_330(int iParam0, int iParam1, int iParam2)//Position - 0x3C45D
{
	int iVar0;
	if (iParam0 == joaat("MP_F_Freemode_01"))
	{
		if ((iParam2 >= 60 && iParam2 <= 66) || (iParam2 >= 18 && iParam2 <= 23))
		{
			if (((((((((iParam1 >= 19 && iParam1 <= 26) || (iParam1 >= 27 && iParam1 <= 34)) || (iParam1 >= 35 && iParam1 <= 42)) || (iParam1 >= 43 && iParam1 <= 50)) || (iParam1 >= 59 && iParam1 <= 66)) || (iParam1 >= 75 && iParam1 <= 82)) || (iParam1 >= 91 && iParam1 <= 98)) || (iParam1 >= 99 && iParam1 <= 106)) || (iParam1 >= 107 && iParam1 <= 114))
			{
				return 0;
			}
			if (iParam1 >= __LIB_0__::func_26(iParam0))
			{
				__LIB_6__::func_38(iParam0, 14, iParam1, -1);
				if (Global_2883589 == joaat("CU_XMAS_CLOTHES"))
				{
					return 0;
				}
			}
			if (iParam1 >= 327)
			{
				iVar0 = -1;
				iVar0 = __LIB_0__::func_205(iParam0, iParam1, 14, 3);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("TAT_DECL"), 1))
				{
					return 0;
				}
				switch (Global_2883588)
				{
					case joaat("DLC_MP_BEACH_F_HEAD2_0"):
					case joaat("DLC_MP_BEACH_F_HEAD2_1"):
					case joaat("DLC_MP_BEACH_F_HEAD2_2"):
					case joaat("DLC_MP_BEACH_F_HEAD2_3"):
					case joaat("DLC_MP_BEACH_F_HEAD2_4"):
					case joaat("DLC_MP_BEACH_F_HEAD2_5"):
					case joaat("DLC_MP_BEACH_F_HEAD2_6"):
						return 0;
						break;
					case joaat("DLC_MP_BEACH_F_HEAD4_0"):
					case joaat("DLC_MP_BEACH_F_HEAD4_1"):
					case joaat("DLC_MP_BEACH_F_HEAD4_2"):
					case joaat("DLC_MP_BEACH_F_HEAD4_3"):
					case joaat("DLC_MP_BEACH_F_HEAD4_4"):
					case joaat("DLC_MP_BEACH_F_HEAD4_5"):
					case joaat("DLC_MP_BEACH_F_HEAD4_6"):
						return 0;
						break;
					}
			}
		}
		else if ((iParam2 >= 85 && iParam2 <= 91) || (iParam2 >= 30 && iParam2 <= 34))
		{
			if (iParam1 >= 131 && iParam1 <= 154)
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_394(var uParam0, int iParam1, int iParam2)//Position - 0x4339D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	if (iParam2 == 1)
	{
		func_432(&(uParam0->f_485), &Global_4537616, 1, __LIB_36__::func_873(uParam0), -1, &(uParam0->f_716), &(uParam0->f_719));
		iVar0 = 0;
		while (iVar0 < Global_4537616.f_252)
		{
			Stack.Push(iParam1);
			Stack.Push(Global_4537616.f_126[iVar0]);
			Stack.Push(Global_4537616[iVar0]);
			Call_Loc(uParam0->f_483);
			Stack.Push(iParam1);
			Stack.Push(Global_4537616.f_126[iVar0]);
			Stack.Push(Global_4537616[iVar0]);
			Call_Loc(uParam0->f_480);
			if (StackVal && StackVal)
			{
				return 1;
			}
			iVar0++;
		}
	}
	else if (iParam2 == 2)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_432(&(uParam0->f_485), &Global_4537616, 0, __LIB_36__::func_873(uParam0), -1, &(uParam0->f_716), &(uParam0->f_719));
			iVar1 = 0;
			while (iVar1 < Global_4537616.f_252)
			{
				Stack.Push(iParam1);
				Stack.Push(Global_4537616.f_126[iVar1]);
				Stack.Push(Global_4537616[iVar1]);
				Call_Loc(uParam0->f_483);
				Stack.Push(iParam1);
				Stack.Push(Global_4537616.f_126[iVar1]);
				Stack.Push(Global_4537616[iVar1]);
				Call_Loc(uParam0->f_480);
				if (StackVal && StackVal)
				{
					return 1;
				}
				iVar1++;
			}
		}
		else
		{
			iVar3 = __LIB_36__::func_836();
			iVar2 = 0;
			while (iVar2 < iVar3)
			{
				if (func_430(iVar2) && !__LIB_42__::func_306(iVar2))
				{
					return 1;
				}
				iVar2++;
			}
		}
	}
	else if (iParam2 == 3)
	{
		iVar4 = 0;
		while (iVar4 < uParam0->f_612)
		{
			if (__LIB_43__::func_476(iVar4))
			{
				if (func_422(iVar4) && !__LIB_42__::func_303(iVar4))
				{
					return 1;
				}
			}
			iVar4++;
		}
	}
	else if (__LIB_36__::func_864(iParam2))
	{
		iVar5 = 0;
		while (iVar5 < __LIB_36__::func_834(iParam1, iParam2))
		{
			if (func_399(uParam0, iParam1, iParam2, iVar5) && !func_395(uParam0, iParam1, iParam2, iVar5))
			{
				return 1;
			}
			iVar5++;
		}
		return 0;
	}
	return 0;
}

int func_395(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x4356D
{
	struct<12> Var0;
	if (__LIB_42__::func_314(iParam1, iParam2, iParam3, &Var0, __LIB_36__::func_861(uParam0->f_523)))
	{
		if (!func_396(Var0.f_11, 2, -1))
		{
			return 0;
		}
		return 1;
	}
	return 1;
}

int func_396(int iParam0, int iParam1, int iParam2)//Position - 0x435A4
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	iVar0 = Global_78127;
	if (iParam2 != -1)
	{
		iVar0 = iParam2;
	}
	if (__LIB_42__::func_302(iParam0, iParam1, &iVar2, &uVar1))
	{
		iVar3 = __LIB_1__::func_360(iVar2, iVar0, 0);
		return BitTest(iVar3, uVar1);
	}
	return 0;
}

int func_399(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x45708
{
	struct<11> Var0;
	char* sVar1;
	struct<14> Var2;
	if (__LIB_42__::func_314(iParam1, iParam2, iParam3, &Var0, __LIB_36__::func_861(uParam0->f_523)))
	{
		if (!func_404(iParam1, iParam2, iParam3, uParam0->f_523))
		{
			return 0;
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && __LIB_3__::func_538())
		{
			__LIB_36__::func_908(&sVar1, iParam2, Var0.f_1, iParam1, 0);
			if (!NETSHOPPING::NET_GAMESERVER_CATALOG_ITEM_IS_VALID(&sVar1))
			{
				return 0;
			}
		}
		if (Var0.f_9 == 0)
		{
			Stack.Push(iParam1);
			Stack.Push(2);
			Stack.Push(Var0.f_8);
			Stack.Push(-1);
			Call_Loc(uParam0->f_484);
			Var2 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal };
			if (!BitTest(Var2.f_6, 1))
			{
				return 0;
			}
			return 1;
		}
		else if (Var0.f_9 == 1 || Var0.f_9 == 2)
		{
			if (Var0.f_10 == -1)
			{
				return 1;
			}
			if (Var0.f_5 == 1)
			{
				if (!func_400(Var0.f_10))
				{
					return 0;
				}
				return 1;
			}
			else if (Var0.f_5 == 4)
			{
				if (!func_400(Var0.f_10))
				{
					return 0;
				}
				return 1;
			}
			else
			{
				return 1;
			}
		}
	}
	return 1;
}

int func_400(var uParam0)//Position - 0x45802
{
	var uVar0;
	int iVar1;
	if (__LIB_0__::func_980())
	{
		return 0;
	}
	uVar0 = __LIB_23__::func_348(uParam0);
	iVar1 = uParam0;
	return BitTest(uVar0, __LIB_0__::func_160(iVar1));
}

int func_404(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x45944
{
	struct<11> Var0;
	struct<11> Var1;
	struct<11> Var2;
	struct<11> Var3;
	if (iParam0 == joaat("MP_M_Freemode_01"))
	{
		switch (iParam1)
		{
			case 6:
				if (iParam3 == 50)
				{
					if (((((((((((((iParam2 == 22 || iParam2 == 23) || iParam2 == 24) || iParam2 == 25) || iParam2 == 26) || iParam2 == 27) || iParam2 == 28) || iParam2 == 29) || iParam2 == 30) || iParam2 == 31) || iParam2 == 32) || iParam2 == 33) || iParam2 == 34) || iParam2 == 35)
					{
						return 0;
					}
				}
				switch (iParam2)
				{
					case 22:
						if (__LIB_0__::func_291() && (Global_262145.f_8258 /* Tunable: TOGGLE_ACTIVATE_INDEPENDENCE_PACK */ || __LIB_0__::func_137(3606, -1)))
						{
							return 1;
						}
						return 0;
						break;
					case 23:
					case 24:
					case 25:
					case 26:
						if (__LIB_0__::func_306())
						{
							return 1;
						}
						return 0;
						break;
					case 27:
					case 28:
					case 29:
						if (__LIB_0__::func_305())
						{
							return 1;
						}
						return 0;
						break;
					case 30:
					case 31:
					case 32:
					case 33:
					case 34:
					case 35:
						if (__LIB_36__::func_833())
						{
							return 1;
						}
						return 0;
						break;
					case 38:
						if (__LIB_0__::func_137(26968, -1))
						{
							return 1;
						}
						return 0;
						break;
					case 39:
						if (__LIB_36__::func_832())
						{
							return 1;
						}
						return 0;
						break;
					case 40:
						if (__LIB_36__::func_831())
						{
							return 1;
						}
						return 0;
						break;
					case 41:
					case 42:
						if (__LIB_0__::func_299())
						{
							return 1;
						}
						return 0;
						break;
				}
				break;
			case 11:
				if (iParam2 == 13)
				{
					if (__LIB_0__::func_291() && (Global_262145.f_8258 /* Tunable: TOGGLE_ACTIVATE_INDEPENDENCE_PACK */ || __LIB_0__::func_137(3607, -1)))
					{
						return 1;
					}
					return 0;
				}
				else if (iParam2 >= 14 && iParam2 <= 43)
				{
					if (__LIB_36__::func_830())
					{
						if (Global_262145.f_12040 /* Tunable: TURN_ON_HALLOWEEN_FACEPAINT */)
						{
							return 1;
						}
						if (__LIB_42__::func_314(iParam0, iParam1, iParam2, &Var0, 0) && func_407(Var0.f_10))
						{
							return 1;
						}
						if (iParam2 == 14 && __LIB_0__::func_137(4270, -1))
						{
							return 1;
						}
						else if (iParam2 == 15 && __LIB_0__::func_137(4271, -1))
						{
							return 1;
						}
						else if (iParam2 == 16 && __LIB_0__::func_137(4272, -1))
						{
							return 1;
						}
						else if (iParam2 == 17 && __LIB_0__::func_137(4273, -1))
						{
							return 1;
						}
						else if (iParam2 == 18 && __LIB_0__::func_137(4274, -1))
						{
							return 1;
						}
						else if (iParam2 == 19 && __LIB_0__::func_137(4275, -1))
						{
							return 1;
						}
						else if (iParam2 == 20 && __LIB_0__::func_137(4276, -1))
						{
							return 1;
						}
						else if (iParam2 == 21 && __LIB_0__::func_137(4277, -1))
						{
							return 1;
						}
						else if (iParam2 == 22 && __LIB_0__::func_137(4278, -1))
						{
							return 1;
						}
						else if (iParam2 == 23 && __LIB_0__::func_137(4279, -1))
						{
							return 1;
						}
						else if (iParam2 == 24 && __LIB_0__::func_137(4280, -1))
						{
							return 1;
						}
						else if (iParam2 == 25 && __LIB_0__::func_137(4281, -1))
						{
							return 1;
						}
						else if (iParam2 == 26 && __LIB_0__::func_137(4282, -1))
						{
							return 1;
						}
						else if (iParam2 == 27 && __LIB_0__::func_137(4283, -1))
						{
							return 1;
						}
						else if (iParam2 == 28 && __LIB_0__::func_137(4284, -1))
						{
							return 1;
						}
						else if (iParam2 == 29 && __LIB_0__::func_137(4285, -1))
						{
							return 1;
						}
						else if (iParam2 == 30 && __LIB_0__::func_137(4286, -1))
						{
							return 1;
						}
						else if (iParam2 == 31 && __LIB_0__::func_137(4287, -1))
						{
							return 1;
						}
						else if (iParam2 == 32 && __LIB_0__::func_137(4288, -1))
						{
							return 1;
						}
						else if (iParam2 == 33 && __LIB_0__::func_137(4289, -1))
						{
							return 1;
						}
						else if (iParam2 == 34 && __LIB_0__::func_137(4290, -1))
						{
							return 1;
						}
						else if (iParam2 == 35 && __LIB_0__::func_137(4291, -1))
						{
							return 1;
						}
						else if (iParam2 == 36 && __LIB_0__::func_137(4292, -1))
						{
							return 1;
						}
						else if (iParam2 == 37 && __LIB_0__::func_137(4293, -1))
						{
							return 1;
						}
						else if (iParam2 == 38 && __LIB_0__::func_137(4294, -1))
						{
							return 1;
						}
						else if (iParam2 == 39 && __LIB_0__::func_137(4295, -1))
						{
							return 1;
						}
						else if (iParam2 == 40 && __LIB_0__::func_137(4296, -1))
						{
							return 1;
						}
						else if (iParam2 == 41 && __LIB_0__::func_137(4297, -1))
						{
							return 1;
						}
						else if (iParam2 == 42 && __LIB_0__::func_137(4298, -1))
						{
							return 1;
						}
						else if (iParam2 == 43 && __LIB_0__::func_137(4299, -1))
						{
							return 1;
						}
					}
					return 0;
				}
				else if (iParam2 >= 44 && iParam2 <= 69)
				{
					if (__LIB_36__::func_828())
					{
						if (Global_262145.f_12041 /* Tunable: TURN_ON_GANGOPS_FACEPAINT */)
						{
							return 1;
						}
						if (__LIB_42__::func_314(iParam0, iParam1, iParam2, &Var1, 0) && func_407(Var1.f_10))
						{
							return 1;
						}
					}
					return 0;
				}
				break;
		}
	}
	else if (iParam0 == joaat("MP_F_Freemode_01"))
	{
		switch (iParam1)
		{
			case 6:
				if (iParam3 == 50)
				{
					if (((((((((((((((iParam2 == 20 || iParam2 == 23) || iParam2 == 24) || iParam2 == 25) || iParam2 == 26) || iParam2 == 27) || iParam2 == 28) || iParam2 == 29) || iParam2 == 30) || iParam2 == 31) || iParam2 == 32) || iParam2 == 33) || iParam2 == 34) || iParam2 == 35) || iParam2 == 36) || iParam2 == 37)
					{
						return 0;
					}
				}
				switch (iParam2)
				{
					case 20:
						if (__LIB_13__::func_908() && ((Global_262145.f_7058 /* Tunable: TURN_ON_VALENTINES_EVENT */ || Global_262145.f_12030 /* Tunable: TURN_ON_VALENTINE_HAIR */) || __LIB_0__::func_137(4246, -1)))
						{
							return 1;
						}
						return 0;
						break;
					case 23:
						if (__LIB_0__::func_291() && (Global_262145.f_8258 /* Tunable: TOGGLE_ACTIVATE_INDEPENDENCE_PACK */ || __LIB_0__::func_137(3606, -1)))
						{
							return 1;
						}
						return 0;
						break;
					case 24:
					case 25:
					case 26:
					case 27:
						if (__LIB_0__::func_306())
						{
							return 1;
						}
						return 0;
						break;
					case 28:
					case 29:
					case 30:
						if (__LIB_0__::func_305())
						{
							return 1;
						}
						return 0;
						break;
					case 31:
					case 32:
					case 33:
					case 34:
					case 35:
					case 36:
					case 37:
						if (__LIB_36__::func_833())
						{
							return 1;
						}
						return 0;
						break;
					case 40:
						if (__LIB_0__::func_137(26968, -1))
						{
							return 1;
						}
						return 0;
						break;
					case 41:
						if (__LIB_36__::func_832())
						{
							return 1;
						}
						return 0;
						break;
					case 42:
						if (__LIB_36__::func_831())
						{
							return 1;
						}
						return 0;
						break;
					case 43:
					case 44:
						if (__LIB_0__::func_299())
						{
							return 1;
						}
						return 0;
						break;
				}
				break;
			case 11:
				if (iParam2 == 13)
				{
					if (__LIB_0__::func_291() && (Global_262145.f_8258 /* Tunable: TOGGLE_ACTIVATE_INDEPENDENCE_PACK */ || __LIB_0__::func_137(3607, -1)))
					{
						return 1;
					}
					return 0;
				}
				else if (iParam2 >= 14 && iParam2 <= 43)
				{
					if (__LIB_36__::func_830())
					{
						if (Global_262145.f_12040 /* Tunable: TURN_ON_HALLOWEEN_FACEPAINT */)
						{
							return 1;
						}
						if (__LIB_42__::func_314(iParam0, iParam1, iParam2, &Var2, 0) && func_407(Var2.f_10))
						{
							return 1;
						}
						if (iParam2 == 14 && __LIB_0__::func_137(4270, -1))
						{
							return 1;
						}
						else if (iParam2 == 15 && __LIB_0__::func_137(4271, -1))
						{
							return 1;
						}
						else if (iParam2 == 16 && __LIB_0__::func_137(4272, -1))
						{
							return 1;
						}
						else if (iParam2 == 17 && __LIB_0__::func_137(4273, -1))
						{
							return 1;
						}
						else if (iParam2 == 18 && __LIB_0__::func_137(4274, -1))
						{
							return 1;
						}
						else if (iParam2 == 19 && __LIB_0__::func_137(4275, -1))
						{
							return 1;
						}
						else if (iParam2 == 20 && __LIB_0__::func_137(4276, -1))
						{
							return 1;
						}
						else if (iParam2 == 21 && __LIB_0__::func_137(4277, -1))
						{
							return 1;
						}
						else if (iParam2 == 22 && __LIB_0__::func_137(4278, -1))
						{
							return 1;
						}
						else if (iParam2 == 23 && __LIB_0__::func_137(4279, -1))
						{
							return 1;
						}
						else if (iParam2 == 24 && __LIB_0__::func_137(4280, -1))
						{
							return 1;
						}
						else if (iParam2 == 25 && __LIB_0__::func_137(4281, -1))
						{
							return 1;
						}
						else if (iParam2 == 26 && __LIB_0__::func_137(4282, -1))
						{
							return 1;
						}
						else if (iParam2 == 27 && __LIB_0__::func_137(4283, -1))
						{
							return 1;
						}
						else if (iParam2 == 28 && __LIB_0__::func_137(4284, -1))
						{
							return 1;
						}
						else if (iParam2 == 29 && __LIB_0__::func_137(4285, -1))
						{
							return 1;
						}
						else if (iParam2 == 30 && __LIB_0__::func_137(4286, -1))
						{
							return 1;
						}
						else if (iParam2 == 31 && __LIB_0__::func_137(4287, -1))
						{
							return 1;
						}
						else if (iParam2 == 32 && __LIB_0__::func_137(4288, -1))
						{
							return 1;
						}
						else if (iParam2 == 33 && __LIB_0__::func_137(4289, -1))
						{
							return 1;
						}
						else if (iParam2 == 34 && __LIB_0__::func_137(4290, -1))
						{
							return 1;
						}
						else if (iParam2 == 35 && __LIB_0__::func_137(4291, -1))
						{
							return 1;
						}
						else if (iParam2 == 36 && __LIB_0__::func_137(4292, -1))
						{
							return 1;
						}
						else if (iParam2 == 37 && __LIB_0__::func_137(4293, -1))
						{
							return 1;
						}
						else if (iParam2 == 38 && __LIB_0__::func_137(4294, -1))
						{
							return 1;
						}
						else if (iParam2 == 39 && __LIB_0__::func_137(4295, -1))
						{
							return 1;
						}
						else if (iParam2 == 40 && __LIB_0__::func_137(4296, -1))
						{
							return 1;
						}
						else if (iParam2 == 41 && __LIB_0__::func_137(4297, -1))
						{
							return 1;
						}
						else if (iParam2 == 42 && __LIB_0__::func_137(4298, -1))
						{
							return 1;
						}
						else if (iParam2 == 43 && __LIB_0__::func_137(4299, -1))
						{
							return 1;
						}
					}
					return 0;
				}
				else if (iParam2 >= 44 && iParam2 <= 69)
				{
					if (__LIB_36__::func_828())
					{
						if (Global_262145.f_12041 /* Tunable: TURN_ON_GANGOPS_FACEPAINT */)
						{
							return 1;
						}
						if (__LIB_42__::func_314(iParam0, iParam1, iParam2, &Var3, 0) && func_407(Var3.f_10))
						{
							return 1;
						}
					}
					return 0;
				}
				break;
			}
	}
	return 1;
}

int func_407(var uParam0)//Position - 0x465CB
{
	var uVar0;
	int iVar1;
	if (__LIB_0__::func_980())
	{
		return 0;
	}
	uVar0 = func_408(uParam0);
	iVar1 = uParam0;
	return BitTest(uVar0, __LIB_0__::func_160(iVar1));
}

int func_408(var uParam0)//Position - 0x465F3
{
	int iVar0;
	iVar0 = __LIB_1__::func_360(__LIB_36__::func_829(uParam0), -1, 0);
	return iVar0;
}

int func_422(int iParam0)//Position - 0x468E3
{
	return func_400(__LIB_36__::func_839(iParam0));
	return 1;
}

int func_430(int iParam0)//Position - 0x469EB
{
	if (iParam0 >= 19 + 1)
	{
		if (iParam0 >= 27 && iParam0 <= 36)
		{
			return 1;
		}
		return 0;
	}
	return func_400(__LIB_36__::func_840(iParam0));
	return 1;
}

void func_432(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, var uParam5, var uParam6)//Position - 0x46A47
{
	struct<401> Var0;
	Var0 = 125;
	Var0.f_126 = 125;
	Var0.f_253 = 125;
	Var0.f_379 = 10;
	Var0.f_390 = 10;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_436(uParam0, &Var0, __LIB_16__::func_483(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())), 0, iParam4, uParam5, uParam6);
	}
	else if (iParam2 == 1)
	{
		__LIB_36__::func_914(uParam0, &Var0, __LIB_16__::func_483(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())), 0, bParam3);
	}
	else
	{
		__LIB_36__::func_902(uParam0, &Var0, __LIB_16__::func_483(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())), 0, bParam3);
	}
	*uParam1 = { Var0 };
}

void func_436(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5, var uParam6)//Position - 0x47231
{
	struct<10> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	FILES::INIT_SHOP_PED_COMPONENT(&Var0);
	switch (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
	{
		case joaat("MP_M_Freemode_01"):
			iVar3 = 91;
			break;
		case joaat("MP_F_Freemode_01"):
			iVar3 = 92;
			break;
	}
	iVar6 = 1;
	iVar7 = 0;
	while (iVar7 < *uParam5)
	{
		(*uParam5)[iVar7] = 0;
		(*uParam6)[iVar7] = 0;
		iVar7++;
	}
	Global_2883587 = iParam3;
	Global_4539547 = iParam4 == -1;
	iVar2 = FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam2, 10, -1, false, 0, 2);
	iVar1 = 0;
	while (iVar1 < iVar2)
	{
		FILES::GET_SHOP_PED_QUERY_COMPONENT(iVar1, &Var0);
		if (!FILES::IS_CONTENT_ITEM_LOCKED(Var0.f_0))
		{
			if (!func_439(Var0.f_0, Var0.f_1, 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Var0.f_1, joaat("NIGHT_VISION"), 0))
			{
				iVar5 = __LIB_36__::func_838(&(Var0.f_9));
				if (__LIB_36__::func_837(iParam4, iVar5))
				{
					MISC::SET_BIT(uParam5[(iVar5 / 32)], (iVar5 % 32));
					if (!__LIB_2__::func_97(Var0.f_1, 2, 1, 1, -1))
					{
						MISC::SET_BIT(uParam6[(iVar5 / 32)], (iVar5 % 32));
					}
					iVar4 = (iVar3 + iVar1);
					Stack.Push(uParam1);
					Stack.Push(iParam2);
					Stack.Push(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()));
					Stack.Push(iParam3);
					Stack.Push(0);
					Stack.Push(iVar4);
					Stack.Push(2);
					Stack.Push(0);
					Stack.Push(0);
					Stack.Push(iVar6);
					Stack.Push(0);
					Stack.Push(0);
					Stack.Push(-1);
					Call_Loc(*uParam0);
				}
			}
		}
		iVar1++;
	}
	iVar5 = 28;
	Global_4537613 = 0;
	Global_4537612 = 0;
	if (__LIB_36__::func_837(iParam4, iVar5))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_M_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		if (Global_4537612)
		{
			MISC::SET_BIT(uParam5[(iVar5 / 32)], (iVar5 % 32));
			if (Global_4537613)
			{
				MISC::SET_BIT(uParam6[(iVar5 / 32)], (iVar5 % 32));
			}
		}
	}
	iVar5 = 29;
	Global_4537613 = 0;
	Global_4537612 = 0;
	if (__LIB_36__::func_837(iParam4, iVar5))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_M_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(1);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_M_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(2);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_M_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(3);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_M_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(4);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_M_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(5);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		if (Global_4537612)
		{
			MISC::SET_BIT(uParam5[(iVar5 / 32)], (iVar5 % 32));
			if (Global_4537613)
			{
				MISC::SET_BIT(uParam6[(iVar5 / 32)], (iVar5 % 32));
			}
		}
	}
	iVar5 = 30;
	Global_4537613 = 0;
	Global_4537612 = 0;
	if (__LIB_36__::func_837(iParam4, iVar5))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_M_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(7);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_M_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(8);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_M_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(9);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_M_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(10);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_M_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(11);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		if (Global_4537612)
		{
			MISC::SET_BIT(uParam5[(iVar5 / 32)], (iVar5 % 32));
			if (Global_4537613)
			{
				MISC::SET_BIT(uParam6[(iVar5 / 32)], (iVar5 % 32));
			}
		}
	}
	iVar5 = 31;
	Global_4537613 = 0;
	Global_4537612 = 0;
	if (__LIB_36__::func_837(iParam4, iVar5))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_M_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(13);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_M_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(14);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_M_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(15);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_M_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(16);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_M_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(17);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		if (Global_4537612)
		{
			MISC::SET_BIT(uParam5[(iVar5 / 32)], (iVar5 % 32));
			if (Global_4537613)
			{
				MISC::SET_BIT(uParam6[(iVar5 / 32)], (iVar5 % 32));
			}
		}
	}
	iVar5 = 32;
	Global_4537613 = 0;
	Global_4537612 = 0;
	if (__LIB_36__::func_837(iParam4, iVar5))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_M_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(19);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_M_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(20);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_M_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(21);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_M_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(22);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_M_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(23);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		if (Global_4537612)
		{
			MISC::SET_BIT(uParam5[(iVar5 / 32)], (iVar5 % 32));
			if (Global_4537613)
			{
				MISC::SET_BIT(uParam6[(iVar5 / 32)], (iVar5 % 32));
			}
		}
	}
	iVar5 = 33;
	Global_4537613 = 0;
	Global_4537612 = 0;
	if (__LIB_36__::func_837(iParam4, iVar5))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_M_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(26);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_M_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(27);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_M_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(28);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_M_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(29);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_M_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(30);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		if (Global_4537612)
		{
			MISC::SET_BIT(uParam5[(iVar5 / 32)], (iVar5 % 32));
			if (Global_4537613)
			{
				MISC::SET_BIT(uParam6[(iVar5 / 32)], (iVar5 % 32));
			}
		}
	}
	iVar5 = 34;
	Global_4537613 = 0;
	Global_4537612 = 0;
	if (__LIB_36__::func_837(iParam4, iVar5))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_M_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(32);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_M_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(33);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_M_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(34);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_M_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(35);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_M_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(36);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		if (Global_4537612)
		{
			MISC::SET_BIT(uParam5[(iVar5 / 32)], (iVar5 % 32));
			if (Global_4537613)
			{
				MISC::SET_BIT(uParam6[(iVar5 / 32)], (iVar5 % 32));
			}
		}
	}
	iVar5 = 35;
	Global_4537613 = 0;
	Global_4537612 = 0;
	if (__LIB_36__::func_837(iParam4, iVar5))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_M_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(38);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_M_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(39);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_M_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(40);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_M_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(41);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_M_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(42);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		if (Global_4537612)
		{
			MISC::SET_BIT(uParam5[(iVar5 / 32)], (iVar5 % 32));
			if (Global_4537613)
			{
				MISC::SET_BIT(uParam6[(iVar5 / 32)], (iVar5 % 32));
			}
		}
	}
	iVar5 = 36;
	Global_4537613 = 0;
	Global_4537612 = 0;
	if (__LIB_36__::func_837(iParam4, iVar5))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_M_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(45);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_M_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(46);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_M_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(47);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_M_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(48);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_M_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(49);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		if (Global_4537612)
		{
			MISC::SET_BIT(uParam5[(iVar5 / 32)], (iVar5 % 32));
			if (Global_4537613)
			{
				MISC::SET_BIT(uParam6[(iVar5 / 32)], (iVar5 % 32));
			}
		}
	}
	iVar5 = 37;
	Global_4537613 = 0;
	Global_4537612 = 0;
	if (__LIB_36__::func_837(iParam4, iVar5))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_M_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(50);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_M_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(51);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_M_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(52);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_M_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(53);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_M_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(54);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		if (Global_4537612)
		{
			MISC::SET_BIT(uParam5[(iVar5 / 32)], (iVar5 % 32));
			if (Global_4537613)
			{
				MISC::SET_BIT(uParam6[(iVar5 / 32)], (iVar5 % 32));
			}
		}
	}
	iVar5 = 38;
	Global_4537613 = 0;
	Global_4537612 = 0;
	if (__LIB_36__::func_837(iParam4, iVar5))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_M_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(57);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_M_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(58);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_M_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(59);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_M_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(60);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_M_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(61);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		if (Global_4537612)
		{
			MISC::SET_BIT(uParam5[(iVar5 / 32)], (iVar5 % 32));
			if (Global_4537613)
			{
				MISC::SET_BIT(uParam6[(iVar5 / 32)], (iVar5 % 32));
			}
		}
	}
	iVar5 = 39;
	Global_4537613 = 0;
	Global_4537612 = 0;
	if (__LIB_36__::func_837(iParam4, iVar5))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_M_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(63);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_M_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(64);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_M_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(65);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_M_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(66);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_M_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(67);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		if (Global_4537612)
		{
			MISC::SET_BIT(uParam5[(iVar5 / 32)], (iVar5 % 32));
			if (Global_4537613)
			{
				MISC::SET_BIT(uParam6[(iVar5 / 32)], (iVar5 % 32));
			}
		}
	}
	iVar5 = 40;
	Global_4537613 = 0;
	Global_4537612 = 0;
	if (__LIB_36__::func_837(iParam4, iVar5))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_M_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(69);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_M_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(70);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_M_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(71);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_M_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(72);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_M_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(73);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		if (Global_4537612)
		{
			MISC::SET_BIT(uParam5[(iVar5 / 32)], (iVar5 % 32));
			if (Global_4537613)
			{
				MISC::SET_BIT(uParam6[(iVar5 / 32)], (iVar5 % 32));
			}
		}
	}
	iVar5 = 41;
	Global_4537613 = 0;
	Global_4537612 = 0;
	if (__LIB_36__::func_837(iParam4, iVar5))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_M_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(74);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_M_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(75);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_M_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(76);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_M_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(77);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_M_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(78);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		if (Global_4537612)
		{
			MISC::SET_BIT(uParam5[(iVar5 / 32)], (iVar5 % 32));
			if (Global_4537613)
			{
				MISC::SET_BIT(uParam6[(iVar5 / 32)], (iVar5 % 32));
			}
		}
	}
	iVar5 = 42;
	Global_4537613 = 0;
	Global_4537612 = 0;
	if (__LIB_36__::func_837(iParam4, iVar5))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_M_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(80);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_M_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(81);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_M_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(82);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_M_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(83);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_M_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(84);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		if (Global_4537612)
		{
			MISC::SET_BIT(uParam5[(iVar5 / 32)], (iVar5 % 32));
			if (Global_4537613)
			{
				MISC::SET_BIT(uParam6[(iVar5 / 32)], (iVar5 % 32));
			}
		}
	}
	iVar5 = 43;
	Global_4537613 = 0;
	Global_4537612 = 0;
	if (__LIB_36__::func_837(iParam4, iVar5))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_M_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(85);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_M_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(86);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_M_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(87);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_M_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(88);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_M_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(89);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		if (Global_4537612)
		{
			MISC::SET_BIT(uParam5[(iVar5 / 32)], (iVar5 % 32));
			if (Global_4537613)
			{
				MISC::SET_BIT(uParam6[(iVar5 / 32)], (iVar5 % 32));
			}
		}
	}
	iVar5 = 44;
	Global_4537613 = 0;
	Global_4537612 = 0;
	if (__LIB_36__::func_837(iParam4, iVar5))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_F_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		if (Global_4537612)
		{
			MISC::SET_BIT(uParam5[(iVar5 / 32)], (iVar5 % 32));
			if (Global_4537613)
			{
				MISC::SET_BIT(uParam6[(iVar5 / 32)], (iVar5 % 32));
			}
		}
	}
	iVar5 = 45;
	Global_4537613 = 0;
	Global_4537612 = 0;
	if (__LIB_36__::func_837(iParam4, iVar5))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_F_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(1);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_F_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(2);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_F_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(3);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_F_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(4);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_F_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(5);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		if (Global_4537612)
		{
			MISC::SET_BIT(uParam5[(iVar5 / 32)], (iVar5 % 32));
			if (Global_4537613)
			{
				MISC::SET_BIT(uParam6[(iVar5 / 32)], (iVar5 % 32));
			}
		}
	}
	iVar5 = 46;
	Global_4537613 = 0;
	Global_4537612 = 0;
	if (__LIB_36__::func_837(iParam4, iVar5))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_F_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(7);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_F_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(8);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_F_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(9);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_F_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(10);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_F_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(11);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		if (Global_4537612)
		{
			MISC::SET_BIT(uParam5[(iVar5 / 32)], (iVar5 % 32));
			if (Global_4537613)
			{
				MISC::SET_BIT(uParam6[(iVar5 / 32)], (iVar5 % 32));
			}
		}
	}
	iVar5 = 47;
	Global_4537613 = 0;
	Global_4537612 = 0;
	if (__LIB_36__::func_837(iParam4, iVar5))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_F_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(13);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_F_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(14);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_F_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(15);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_F_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(16);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_F_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(17);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		if (Global_4537612)
		{
			MISC::SET_BIT(uParam5[(iVar5 / 32)], (iVar5 % 32));
			if (Global_4537613)
			{
				MISC::SET_BIT(uParam6[(iVar5 / 32)], (iVar5 % 32));
			}
		}
	}
	iVar5 = 48;
	Global_4537613 = 0;
	Global_4537612 = 0;
	if (__LIB_36__::func_837(iParam4, iVar5))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_F_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(18);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_F_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(19);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_F_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(20);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_F_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(21);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_F_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(22);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		if (Global_4537612)
		{
			MISC::SET_BIT(uParam5[(iVar5 / 32)], (iVar5 % 32));
			if (Global_4537613)
			{
				MISC::SET_BIT(uParam6[(iVar5 / 32)], (iVar5 % 32));
			}
		}
	}
	iVar5 = 49;
	Global_4537613 = 0;
	Global_4537612 = 0;
	if (__LIB_36__::func_837(iParam4, iVar5))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_F_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(24);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_F_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(25);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_F_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(26);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_F_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(27);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_F_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(28);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		if (Global_4537612)
		{
			MISC::SET_BIT(uParam5[(iVar5 / 32)], (iVar5 % 32));
			if (Global_4537613)
			{
				MISC::SET_BIT(uParam6[(iVar5 / 32)], (iVar5 % 32));
			}
		}
	}
	iVar5 = 50;
	Global_4537613 = 0;
	Global_4537612 = 0;
	if (__LIB_36__::func_837(iParam4, iVar5))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_F_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(30);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_F_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(31);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_F_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(32);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_F_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(33);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_F_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(34);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		if (Global_4537612)
		{
			MISC::SET_BIT(uParam5[(iVar5 / 32)], (iVar5 % 32));
			if (Global_4537613)
			{
				MISC::SET_BIT(uParam6[(iVar5 / 32)], (iVar5 % 32));
			}
		}
	}
	iVar5 = 51;
	Global_4537613 = 0;
	Global_4537612 = 0;
	if (__LIB_36__::func_837(iParam4, iVar5))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_F_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(35);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_F_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(36);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_F_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(37);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_F_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(38);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_F_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(39);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		if (Global_4537612)
		{
			MISC::SET_BIT(uParam5[(iVar5 / 32)], (iVar5 % 32));
			if (Global_4537613)
			{
				MISC::SET_BIT(uParam6[(iVar5 / 32)], (iVar5 % 32));
			}
		}
	}
	iVar5 = 52;
	Global_4537613 = 0;
	Global_4537612 = 0;
	if (__LIB_36__::func_837(iParam4, iVar5))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_F_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(41);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_F_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(42);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_F_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(43);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_F_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(44);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_F_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(45);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		if (Global_4537612)
		{
			MISC::SET_BIT(uParam5[(iVar5 / 32)], (iVar5 % 32));
			if (Global_4537613)
			{
				MISC::SET_BIT(uParam6[(iVar5 / 32)], (iVar5 % 32));
			}
		}
	}
	iVar5 = 53;
	Global_4537613 = 0;
	Global_4537612 = 0;
	if (__LIB_36__::func_837(iParam4, iVar5))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_F_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(47);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_F_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(48);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_F_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(49);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_F_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(50);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_F_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(51);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		if (Global_4537612)
		{
			MISC::SET_BIT(uParam5[(iVar5 / 32)], (iVar5 % 32));
			if (Global_4537613)
			{
				MISC::SET_BIT(uParam6[(iVar5 / 32)], (iVar5 % 32));
			}
		}
	}
	iVar5 = 54;
	Global_4537613 = 0;
	Global_4537612 = 0;
	if (__LIB_36__::func_837(iParam4, iVar5))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_F_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(53);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_F_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(54);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_F_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(55);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_F_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(56);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_F_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(57);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		if (Global_4537612)
		{
			MISC::SET_BIT(uParam5[(iVar5 / 32)], (iVar5 % 32));
			if (Global_4537613)
			{
				MISC::SET_BIT(uParam6[(iVar5 / 32)], (iVar5 % 32));
			}
		}
	}
	iVar5 = 55;
	Global_4537613 = 0;
	Global_4537612 = 0;
	if (__LIB_36__::func_837(iParam4, iVar5))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_F_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(60);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_F_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(61);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_F_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(62);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_F_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(63);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_F_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(64);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		if (Global_4537612)
		{
			MISC::SET_BIT(uParam5[(iVar5 / 32)], (iVar5 % 32));
			if (Global_4537613)
			{
				MISC::SET_BIT(uParam6[(iVar5 / 32)], (iVar5 % 32));
			}
		}
	}
	iVar5 = 56;
	Global_4537613 = 0;
	Global_4537612 = 0;
	if (__LIB_36__::func_837(iParam4, iVar5))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_F_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(67);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_F_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(68);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_F_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(69);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_F_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(70);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_F_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(71);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		if (Global_4537612)
		{
			MISC::SET_BIT(uParam5[(iVar5 / 32)], (iVar5 % 32));
			if (Global_4537613)
			{
				MISC::SET_BIT(uParam6[(iVar5 / 32)], (iVar5 % 32));
			}
		}
	}
	iVar5 = 57;
	Global_4537613 = 0;
	Global_4537612 = 0;
	if (__LIB_36__::func_837(iParam4, iVar5))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_F_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(73);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_F_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(74);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_F_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(75);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_F_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(76);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_F_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(77);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		if (Global_4537612)
		{
			MISC::SET_BIT(uParam5[(iVar5 / 32)], (iVar5 % 32));
			if (Global_4537613)
			{
				MISC::SET_BIT(uParam6[(iVar5 / 32)], (iVar5 % 32));
			}
		}
	}
	iVar5 = 58;
	Global_4537613 = 0;
	Global_4537612 = 0;
	if (__LIB_36__::func_837(iParam4, iVar5))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_F_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(79);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_F_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(80);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_F_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(81);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_F_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(82);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_F_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(83);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		if (Global_4537612)
		{
			MISC::SET_BIT(uParam5[(iVar5 / 32)], (iVar5 % 32));
			if (Global_4537613)
			{
				MISC::SET_BIT(uParam6[(iVar5 / 32)], (iVar5 % 32));
			}
		}
	}
	iVar5 = 59;
	Global_4537613 = 0;
	Global_4537612 = 0;
	if (__LIB_36__::func_837(iParam4, iVar5))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_F_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(85);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_F_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(86);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_F_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(87);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_F_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(88);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("MP_F_Freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(89);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar6);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(-1);
		Call_Loc(*uParam0);
		if (Global_4537612)
		{
			MISC::SET_BIT(uParam5[(iVar5 / 32)], (iVar5 % 32));
			if (Global_4537613)
			{
				MISC::SET_BIT(uParam6[(iVar5 / 32)], (iVar5 % 32));
			}
		}
	}
}

int func_439(int iParam0, int iParam1, int iParam2)//Position - 0x4915D
{
	switch (iParam0)
	{
		case joaat("CU_SUM2_G9EC_MASKS"):
			if (__LIB_2__::func_97(iParam1, 1, 1, 1, -1))
			{
				return 0;
			}
			switch (iParam1)
			{
				case joaat("DLC_MP_SUM2_G9EC_M_BERD_0_0"):
				case joaat("DLC_MP_SUM2_G9EC_F_BERD_0_0"):
					if (!__LIB_0__::func_137(34397, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_G9EC_M_BERD_0_1"):
				case joaat("DLC_MP_SUM2_G9EC_F_BERD_0_1"):
					if (!__LIB_0__::func_137(34398, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_G9EC_M_BERD_1_0"):
				case joaat("DLC_MP_SUM2_G9EC_F_BERD_1_0"):
					if (!__LIB_0__::func_137(34395, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_G9EC_M_BERD_1_1"):
				case joaat("DLC_MP_SUM2_G9EC_F_BERD_1_1"):
					if (!__LIB_0__::func_137(34396, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_G9EC_M_BERD_4_0"):
				case joaat("DLC_MP_SUM2_G9EC_M_BERD_4_1"):
				case joaat("DLC_MP_SUM2_G9EC_F_BERD_4_0"):
				case joaat("DLC_MP_SUM2_G9EC_F_BERD_4_1"):
					if (!__LIB_0__::func_137(34399/*__LIB_1__::func_30*/, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_G9EC_M_BERD_2_0"):
				case joaat("DLC_MP_SUM2_G9EC_F_BERD_2_0"):
					if (!__LIB_0__::func_137(34400, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
			}
			break;
		case joaat("CU_SUM2_G9EC_CLOTHES"):
			if (__LIB_2__::func_97(iParam1, 1, 1, 1, -1))
			{
				return 0;
			}
			switch (iParam1)
			{
				case joaat("DLC_MP_SUM2_G9EC_M_OUTFIT_MUMMY"):
				case joaat("DLC_MP_SUM2_G9EC_F_OUTFIT_MUMMY"):
					if (!__LIB_0__::func_137(34389, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_G9EC_M_LEGS_0_0"):
				case joaat("DLC_MP_SUM2_G9EC_F_LEGS_0_0"):
					if (!__LIB_0__::func_137(34410, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_G9EC_M_LEGS_0_1"):
				case joaat("DLC_MP_SUM2_G9EC_F_LEGS_0_1"):
					if (!__LIB_0__::func_137(34409, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_G9EC_M_JBIB_0_0"):
				case joaat("DLC_MP_SUM2_G9EC_M_JBIB_1_0"):
				case joaat("DLC_MP_SUM2_G9EC_F_JBIB_1_0"):
				case joaat("DLC_MP_SUM2_G9EC_F_JBIB_2_0"):
					if (!__LIB_0__::func_137(34404, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_G9EC_M_JBIB_0_1"):
				case joaat("DLC_MP_SUM2_G9EC_M_JBIB_1_1"):
				case joaat("DLC_MP_SUM2_G9EC_F_JBIB_1_1"):
				case joaat("DLC_MP_SUM2_G9EC_F_JBIB_2_1"):
					if (!__LIB_0__::func_137(34403, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_G9EC_M_JBIB_2_0"):
				case joaat("DLC_MP_SUM2_G9EC_M_JBIB_3_0"):
				case joaat("DLC_MP_SUM2_G9EC_F_JBIB_3_0"):
				case joaat("DLC_MP_SUM2_G9EC_F_JBIB_4_0"):
					if (!__LIB_0__::func_137(34406, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_G9EC_M_JBIB_6_0"):
				case joaat("DLC_MP_SUM2_G9EC_F_JBIB_8_0"):
					if (!__LIB_0__::func_137(34408, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_G9EC_M_JBIB_7_0"):
				case joaat("DLC_MP_SUM2_G9EC_F_JBIB_5_0"):
					if (!__LIB_0__::func_137(34405, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_G9EC_M_PHEAD_0_0"):
				case joaat("DLC_MP_SUM2_G9EC_M_PHEAD_1_0"):
				case joaat("DLC_MP_SUM2_G9EC_F_PHEAD_0_0"):
				case joaat("DLC_MP_SUM2_G9EC_F_PHEAD_1_0"):
					if (!__LIB_0__::func_137(34391, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_G9EC_M_PHEAD_2_0"):
				case joaat("DLC_MP_SUM2_G9EC_F_PHEAD_2_0"):
					if (!__LIB_0__::func_137(34394, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_G9EC_M_PHEAD_3_0"):
				case joaat("DLC_MP_SUM2_G9EC_M_PHEAD_4_0"):
				case joaat("DLC_MP_SUM2_G9EC_F_PHEAD_3_0"):
				case joaat("DLC_MP_SUM2_G9EC_F_PHEAD_4_0"):
					if (!__LIB_0__::func_137(34390, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_G9EC_M_PHEAD_6_0"):
				case joaat("DLC_MP_SUM2_G9EC_M_PHEAD_7_0"):
				case joaat("DLC_MP_SUM2_G9EC_F_PHEAD_6_0"):
				case joaat("DLC_MP_SUM2_G9EC_F_PHEAD_7_0"):
					if (!__LIB_0__::func_137(34392, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_G9EC_M_PHEAD_5_0"):
				case joaat("DLC_MP_SUM2_G9EC_F_PHEAD_5_0"):
					if (!__LIB_0__::func_137(34393, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_G9EC_M_PHEAD_5_1"):
				case joaat("DLC_MP_SUM2_G9EC_F_PHEAD_5_1"):
					if (!__LIB_0__::func_137(34730, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_G9EC_M_PHEAD_5_2"):
				case joaat("DLC_MP_SUM2_G9EC_F_PHEAD_5_2"):
					if (!__LIB_0__::func_137(34731, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_G9EC_M_PHEAD_5_3"):
				case joaat("DLC_MP_SUM2_G9EC_F_PHEAD_5_3"):
					if (!__LIB_0__::func_137(34732, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_G9EC_M_PHEAD_5_4"):
				case joaat("DLC_MP_SUM2_G9EC_F_PHEAD_5_4"):
					if (!__LIB_0__::func_137(34733, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_G9EC_M_PHEAD_5_7"):
				case joaat("DLC_MP_SUM2_G9EC_F_PHEAD_5_7"):
					if (!__LIB_0__::func_137(34736, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_G9EC_M_PHEAD_5_8"):
				case joaat("DLC_MP_SUM2_G9EC_F_PHEAD_5_8"):
					if (!__LIB_0__::func_137(34737, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_G9EC_M_PHEAD_5_5"):
				case joaat("DLC_MP_SUM2_G9EC_F_PHEAD_5_5"):
					if (!__LIB_0__::func_137(34734, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_G9EC_M_PHEAD_5_6"):
				case joaat("DLC_MP_SUM2_G9EC_F_PHEAD_5_6"):
					if (!__LIB_0__::func_137(34735, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_G9EC_M_PEARS_0_0"):
				case joaat("DLC_MP_SUM2_G9EC_F_PEARS_0_0"):
					if (!__LIB_0__::func_137(34401, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_G9EC_M_PLEFT_WRIST_0_0"):
				case joaat("DLC_MP_SUM2_G9EC_M_PRIGHT_WRIST_0_0"):
				case joaat("DLC_MP_SUM2_G9EC_F_PLEFT_WRIST_0_0"):
				case joaat("DLC_MP_SUM2_G9EC_F_PRIGHT_WRIST_0_0"):
					if (!__LIB_0__::func_137(34402, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_G9EC_M_DECL_0_0"):
				case joaat("DLC_MP_SUM2_G9EC_F_DECL_0_0"):
					if (!__LIB_0__::func_137(34407, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
			}
			break;
		case joaat("CU_SUM2_MASKS"):
			if (__LIB_2__::func_97(iParam1, 1, 1, 1, -1))
			{
				return 0;
			}
			switch (iParam1)
			{
				case joaat("DLC_MP_SUM2_M_BERD_5_0"):
				case joaat("DLC_MP_SUM2_F_BERD_5_0"):
					if (!__LIB_0__::func_137(34451/*__LIB_0__::func_796*/, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_BERD_5_1"):
				case joaat("DLC_MP_SUM2_F_BERD_5_1"):
					if (!__LIB_0__::func_137(34452, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_BERD_5_2"):
				case joaat("DLC_MP_SUM2_F_BERD_5_2"):
					if (!__LIB_0__::func_137(34453, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_BERD_5_3"):
				case joaat("DLC_MP_SUM2_F_BERD_5_3"):
					if (!__LIB_0__::func_137(34454, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_BERD_6_0"):
				case joaat("DLC_MP_SUM2_F_BERD_6_0"):
					if (!__LIB_0__::func_137(34418, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_BERD_6_1"):
				case joaat("DLC_MP_SUM2_F_BERD_6_1"):
					if (!__LIB_0__::func_137(34419, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_BERD_6_2"):
				case joaat("DLC_MP_SUM2_F_BERD_6_2"):
					if (!__LIB_0__::func_137(34420, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_BERD_7_0"):
				case joaat("DLC_MP_SUM2_F_BERD_7_0"):
					if (!__LIB_0__::func_137(34372, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_BERD_8_0"):
				case joaat("DLC_MP_SUM2_F_BERD_8_0"):
					if (!__LIB_0__::func_137(34421, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_BERD_9_0"):
				case joaat("DLC_MP_SUM2_F_BERD_9_0"):
					if (!__LIB_0__::func_137(34415, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_BERD_9_1"):
				case joaat("DLC_MP_SUM2_F_BERD_9_1"):
					if (!__LIB_0__::func_137(34416, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_BERD_9_2"):
				case joaat("DLC_MP_SUM2_F_BERD_9_2"):
					if (!__LIB_0__::func_137(34417, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_BERD_10_0"):
				case joaat("DLC_MP_SUM2_F_BERD_10_0"):
					if (!__LIB_0__::func_137(34425, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_BERD_10_1"):
				case joaat("DLC_MP_SUM2_F_BERD_10_1"):
					if (!__LIB_0__::func_137(34426, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_BERD_10_2"):
				case joaat("DLC_MP_SUM2_F_BERD_10_2"):
					if (!__LIB_0__::func_137(34427, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_BERD_10_3"):
				case joaat("DLC_MP_SUM2_F_BERD_10_3"):
					if (!__LIB_0__::func_137(34428, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_BERD_10_4"):
				case joaat("DLC_MP_SUM2_F_BERD_10_4"):
					if (!__LIB_0__::func_137(34429, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_BERD_10_5"):
				case joaat("DLC_MP_SUM2_F_BERD_10_5"):
					if (!__LIB_0__::func_137(34430, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_BERD_10_6"):
				case joaat("DLC_MP_SUM2_F_BERD_10_6"):
					if (!__LIB_0__::func_137(34431, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_BERD_10_7"):
				case joaat("DLC_MP_SUM2_F_BERD_10_7"):
					if (!__LIB_0__::func_137(34432, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_BERD_10_8"):
				case joaat("DLC_MP_SUM2_F_BERD_10_8"):
					if (!__LIB_0__::func_137(34433, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_BERD_10_9"):
				case joaat("DLC_MP_SUM2_F_BERD_10_9"):
					if (!__LIB_0__::func_137(34434, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_BERD_10_10"):
				case joaat("DLC_MP_SUM2_F_BERD_10_10"):
					if (!__LIB_0__::func_137(34435, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_BERD_10_11"):
				case joaat("DLC_MP_SUM2_F_BERD_10_11"):
					if (!__LIB_0__::func_137(34436, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_BERD_10_12"):
				case joaat("DLC_MP_SUM2_F_BERD_10_12"):
					if (!__LIB_0__::func_137(34437, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_BERD_10_13"):
				case joaat("DLC_MP_SUM2_F_BERD_10_13"):
					if (!__LIB_0__::func_137(34438, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_BERD_10_14"):
				case joaat("DLC_MP_SUM2_F_BERD_10_14"):
					if (!__LIB_0__::func_137(34439, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_BERD_10_15"):
				case joaat("DLC_MP_SUM2_F_BERD_10_15"):
					if (!__LIB_0__::func_137(34440, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_BERD_10_16"):
				case joaat("DLC_MP_SUM2_F_BERD_10_16"):
					if (!__LIB_0__::func_137(34441, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_BERD_10_17"):
				case joaat("DLC_MP_SUM2_F_BERD_10_17"):
					if (!__LIB_0__::func_137(34442/*__LIB_0__::func_162*/, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_BERD_10_18"):
				case joaat("DLC_MP_SUM2_F_BERD_10_18"):
					if (!__LIB_0__::func_137(34443, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_BERD_10_19"):
				case joaat("DLC_MP_SUM2_F_BERD_10_19"):
					if (!__LIB_0__::func_137(34444, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_BERD_10_20"):
				case joaat("DLC_MP_SUM2_F_BERD_10_20"):
					if (!__LIB_0__::func_137(34445, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_BERD_10_21"):
				case joaat("DLC_MP_SUM2_F_BERD_10_21"):
					if (!__LIB_0__::func_137(34446, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_BERD_10_22"):
				case joaat("DLC_MP_SUM2_F_BERD_10_22"):
					if (!__LIB_0__::func_137(34447, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_BERD_10_23"):
				case joaat("DLC_MP_SUM2_F_BERD_10_23"):
					if (!__LIB_0__::func_137(34448, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_BERD_10_24"):
				case joaat("DLC_MP_SUM2_F_BERD_10_24"):
					if (!__LIB_0__::func_137(34449, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_BERD_10_25"):
				case joaat("DLC_MP_SUM2_F_BERD_10_25"):
					if (!__LIB_0__::func_137(34450, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_BERD_0_0"):
				case joaat("DLC_MP_SUM2_F_BERD_0_0"):
					if (!__LIB_0__::func_137(34423, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_BERD_1_0"):
				case joaat("DLC_MP_SUM2_F_BERD_1_0"):
					if (!__LIB_0__::func_137(34703, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_BERD_1_1"):
				case joaat("DLC_MP_SUM2_F_BERD_1_1"):
					if (!__LIB_0__::func_137(34704, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_BERD_1_2"):
				case joaat("DLC_MP_SUM2_F_BERD_1_2"):
					if (!__LIB_0__::func_137(34705, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_BERD_3_0"):
				case joaat("DLC_MP_SUM2_F_BERD_3_0"):
					if (!__LIB_0__::func_137(34424, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_BERD_4_0"):
				case joaat("DLC_MP_SUM2_F_BERD_4_0"):
					if (!__LIB_0__::func_137(34422, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
			}
			break;
		case joaat("CU_SUM2_CLOTHES"):
			if (__LIB_2__::func_97(iParam1, 1, 1, 1, -1))
			{
				return 0;
			}
			switch (iParam1)
			{
				case joaat("DLC_MP_SUM2_M_OUTFIT_SASQUATCH"):
				case joaat("DLC_MP_SUM2_F_OUTFIT_SASQUATCH"):
					if (!__LIB_0__::func_137(34411, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_LEGS_2_0"):
				case joaat("DLC_MP_SUM2_F_LEGS_0_0"):
					if (!__LIB_0__::func_137(34506, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_LEGS_2_1"):
				case joaat("DLC_MP_SUM2_F_LEGS_0_1"):
					if (!__LIB_0__::func_137(34507, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_JBIB_13_0"):
				case joaat("DLC_MP_SUM2_F_JBIB_15_0"):
				case joaat("DLC_MP_SUM2_F_JBIB_16_0"):
					if (!__LIB_0__::func_137(34380, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_JBIB_14_0"):
				case joaat("DLC_MP_SUM2_F_JBIB_19_0"):
					if (!__LIB_0__::func_137(34388, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_JBIB_15_0"):
				case joaat("DLC_MP_SUM2_M_JBIB_16_0"):
				case joaat("DLC_MP_SUM2_F_JBIB_20_0"):
					if (!__LIB_0__::func_137(34383, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_JBIB_15_1"):
				case joaat("DLC_MP_SUM2_M_JBIB_16_1"):
				case joaat("DLC_MP_SUM2_F_JBIB_20_1"):
					if (!__LIB_0__::func_137(34381/*__LIB_1__::func_520*/, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_JBIB_15_2"):
				case joaat("DLC_MP_SUM2_M_JBIB_16_2"):
				case joaat("DLC_MP_SUM2_F_JBIB_20_2"):
					if (!__LIB_0__::func_137(34385, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_JBIB_17_0"):
				case joaat("DLC_MP_SUM2_F_JBIB_8_0"):
					if (!__LIB_0__::func_137(34382, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_JBIB_7_0"):
				case joaat("DLC_MP_SUM2_M_JBIB_8_0"):
				case joaat("DLC_MP_SUM2_F_JBIB_24_0"):
				case joaat("DLC_MP_SUM2_F_JBIB_21_0"):
					if (!__LIB_0__::func_137(34384, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_PHEAD_6_0"):
				case joaat("DLC_MP_SUM2_F_PHEAD_6_0"):
					if (!__LIB_0__::func_137(34455, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_PHEAD_6_1"):
				case joaat("DLC_MP_SUM2_F_PHEAD_6_1"):
					if (!__LIB_0__::func_137(34456, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_PHEAD_6_2"):
				case joaat("DLC_MP_SUM2_F_PHEAD_6_2"):
					if (!__LIB_0__::func_137(34457, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_PHEAD_6_3"):
				case joaat("DLC_MP_SUM2_F_PHEAD_6_3"):
					if (!__LIB_0__::func_137(34458, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_PHEAD_6_4"):
				case joaat("DLC_MP_SUM2_F_PHEAD_6_4"):
					if (!__LIB_0__::func_137(34459, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_PHEAD_6_5"):
				case joaat("DLC_MP_SUM2_F_PHEAD_6_5"):
					if (!__LIB_0__::func_137(34460, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_PHEAD_6_6"):
				case joaat("DLC_MP_SUM2_F_PHEAD_6_6"):
					if (!__LIB_0__::func_137(34461, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_PHEAD_6_7"):
				case joaat("DLC_MP_SUM2_F_PHEAD_6_7"):
					if (!__LIB_0__::func_137(34462, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_PHEAD_6_8"):
				case joaat("DLC_MP_SUM2_F_PHEAD_6_8"):
					if (!__LIB_0__::func_137(34463, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_PHEAD_6_9"):
				case joaat("DLC_MP_SUM2_F_PHEAD_6_9"):
					if (!__LIB_0__::func_137(34464, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_PHEAD_6_10"):
				case joaat("DLC_MP_SUM2_F_PHEAD_6_10"):
					if (!__LIB_0__::func_137(34465, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_PHEAD_6_11"):
				case joaat("DLC_MP_SUM2_F_PHEAD_6_11"):
					if (!__LIB_0__::func_137(34466, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_PHEAD_6_12"):
				case joaat("DLC_MP_SUM2_F_PHEAD_6_12"):
					if (!__LIB_0__::func_137(34467, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_PHEAD_6_13"):
				case joaat("DLC_MP_SUM2_F_PHEAD_6_13"):
					if (!__LIB_0__::func_137(34468, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_PHEAD_0_0"):
				case joaat("DLC_MP_SUM2_M_PHEAD_1_0"):
				case joaat("DLC_MP_SUM2_F_PHEAD_0_0"):
				case joaat("DLC_MP_SUM2_F_PHEAD_1_0"):
					if (!__LIB_0__::func_137(34375, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_PHEAD_2_0"):
				case joaat("DLC_MP_SUM2_M_PHEAD_4_0"):
				case joaat("DLC_MP_SUM2_F_PHEAD_2_0"):
				case joaat("DLC_MP_SUM2_F_PHEAD_4_0"):
					if (!__LIB_0__::func_137(34508, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_PHEAD_2_1"):
				case joaat("DLC_MP_SUM2_M_PHEAD_4_1"):
				case joaat("DLC_MP_SUM2_F_PHEAD_2_1"):
				case joaat("DLC_MP_SUM2_F_PHEAD_4_1"):
					if (!__LIB_0__::func_137(34509, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_PHEAD_3_0"):
				case joaat("DLC_MP_SUM2_M_PHEAD_7_0"):
				case joaat("DLC_MP_SUM2_F_PHEAD_3_0"):
				case joaat("DLC_MP_SUM2_F_PHEAD_7_0"):
					if (!__LIB_0__::func_137(34510, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_PHEAD_8_0"):
				case joaat("DLC_MP_SUM2_F_PHEAD_8_0"):
					if (!__LIB_0__::func_137(34387, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_PEARS_0_0"):
				case joaat("DLC_MP_SUM2_F_PEARS_0_0"):
					if (!__LIB_0__::func_137(34469, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_PEARS_0_1"):
				case joaat("DLC_MP_SUM2_F_PEARS_0_1"):
					if (!__LIB_0__::func_137(34470, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_PEARS_0_2"):
				case joaat("DLC_MP_SUM2_F_PEARS_0_2"):
					if (!__LIB_0__::func_137(34471, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_PEARS_0_3"):
				case joaat("DLC_MP_SUM2_F_PEARS_0_3"):
					if (!__LIB_0__::func_137(34472, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_PEARS_0_4"):
				case joaat("DLC_MP_SUM2_F_PEARS_0_4"):
					if (!__LIB_0__::func_137(34473, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_PEARS_0_5"):
				case joaat("DLC_MP_SUM2_F_PEARS_0_5"):
					if (!__LIB_0__::func_137(34474, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_PEARS_0_6"):
				case joaat("DLC_MP_SUM2_F_PEARS_0_6"):
					if (!__LIB_0__::func_137(34475, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_PEARS_0_7"):
				case joaat("DLC_MP_SUM2_F_PEARS_0_7"):
					if (!__LIB_0__::func_137(34476, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_PEARS_0_8"):
				case joaat("DLC_MP_SUM2_F_PEARS_0_8"):
					if (!__LIB_0__::func_137(34477, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_PEARS_0_9"):
				case joaat("DLC_MP_SUM2_F_PEARS_0_9"):
					if (!__LIB_0__::func_137(34478, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_PEARS_0_10"):
				case joaat("DLC_MP_SUM2_F_PEARS_0_10"):
					if (!__LIB_0__::func_137(34479, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_PEARS_0_11"):
				case joaat("DLC_MP_SUM2_F_PEARS_0_11"):
					if (!__LIB_0__::func_137(34480, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_SPECIAL_1_0"):
				case joaat("DLC_MP_SUM2_F_SPECIAL_1_0"):
					if (!__LIB_0__::func_137(34386, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_FEET_5_0"):
				case joaat("DLC_MP_SUM2_F_FEET_5_0"):
					if (!__LIB_0__::func_137(34481, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_FEET_5_1"):
				case joaat("DLC_MP_SUM2_F_FEET_5_1"):
					if (!__LIB_0__::func_137(34482, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_FEET_5_2"):
				case joaat("DLC_MP_SUM2_F_FEET_5_2"):
					if (!__LIB_0__::func_137(34483, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_FEET_5_3"):
				case joaat("DLC_MP_SUM2_F_FEET_5_3"):
					if (!__LIB_0__::func_137(34484, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_FEET_5_4"):
				case joaat("DLC_MP_SUM2_F_FEET_5_4"):
					if (!__LIB_0__::func_137(34485, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_FEET_5_5"):
				case joaat("DLC_MP_SUM2_F_FEET_5_5"):
					if (!__LIB_0__::func_137(34486, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_FEET_5_6"):
				case joaat("DLC_MP_SUM2_F_FEET_5_6"):
					if (!__LIB_0__::func_137(34487, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_FEET_5_7"):
				case joaat("DLC_MP_SUM2_F_FEET_5_7"):
					if (!__LIB_0__::func_137(34488, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_FEET_5_8"):
				case joaat("DLC_MP_SUM2_F_FEET_5_8"):
					if (!__LIB_0__::func_137(34489, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_FEET_6_0"):
				case joaat("DLC_MP_SUM2_F_FEET_6_0"):
					if (!__LIB_0__::func_137(34490, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_FEET_6_1"):
				case joaat("DLC_MP_SUM2_F_FEET_6_1"):
					if (!__LIB_0__::func_137(34491, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_FEET_6_2"):
				case joaat("DLC_MP_SUM2_F_FEET_6_2"):
					if (!__LIB_0__::func_137(34492, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_FEET_6_3"):
				case joaat("DLC_MP_SUM2_F_FEET_6_3"):
					if (!__LIB_0__::func_137(34493, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_FEET_6_4"):
				case joaat("DLC_MP_SUM2_F_FEET_6_4"):
					if (!__LIB_0__::func_137(34494, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_FEET_6_5"):
				case joaat("DLC_MP_SUM2_F_FEET_6_5"):
					if (!__LIB_0__::func_137(34495, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_FEET_6_6"):
				case joaat("DLC_MP_SUM2_F_FEET_6_6"):
					if (!__LIB_0__::func_137(34496, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_FEET_6_7"):
				case joaat("DLC_MP_SUM2_F_FEET_6_7"):
					if (!__LIB_0__::func_137(34497, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_FEET_6_8"):
				case joaat("DLC_MP_SUM2_F_FEET_6_8"):
					if (!__LIB_0__::func_137(34498, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_FEET_6_9"):
				case joaat("DLC_MP_SUM2_F_FEET_6_9"):
					if (!__LIB_0__::func_137(34499, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_FEET_6_10"):
				case joaat("DLC_MP_SUM2_F_FEET_6_10"):
					if (!__LIB_0__::func_137(34500, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_FEET_6_11"):
				case joaat("DLC_MP_SUM2_F_FEET_6_11"):
					if (!__LIB_0__::func_137(34501, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_FEET_6_12"):
				case joaat("DLC_MP_SUM2_F_FEET_6_12"):
					if (!__LIB_0__::func_137(34502, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_FEET_6_13"):
				case joaat("DLC_MP_SUM2_F_FEET_6_13"):
					if (!__LIB_0__::func_137(34503, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM2_M_FEET_6_14"):
				case joaat("DLC_MP_SUM2_F_FEET_6_14"):
					if (!__LIB_0__::func_137(34504/*__LIB_14__::func_455*/, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("CU_FIXER_MASKS"):
			switch (iParam1)
			{
				case joaat("DLC_MP_FIXER_M_BERD_0_0"):
				case joaat("DLC_MP_FIXER_F_BERD_0_0"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(32295, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_FIXER_M_BERD_0_1"):
				case joaat("DLC_MP_FIXER_F_BERD_0_1"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(32296, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_FIXER_M_BERD_0_2"):
				case joaat("DLC_MP_FIXER_F_BERD_0_2"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(32297, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_FIXER_M_BERD_0_3"):
				case joaat("DLC_MP_FIXER_F_BERD_0_3"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(32298, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_FIXER_M_BERD_1_0"):
				case joaat("DLC_MP_FIXER_F_BERD_1_0"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(32299, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_FIXER_M_BERD_1_1"):
				case joaat("DLC_MP_FIXER_F_BERD_1_1"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(32300, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_FIXER_M_BERD_1_2"):
				case joaat("DLC_MP_FIXER_F_BERD_1_2"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(32301, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_FIXER_M_BERD_1_3"):
				case joaat("DLC_MP_FIXER_F_BERD_1_3"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(32302, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_FIXER_M_BERD_2_0"):
				case joaat("DLC_MP_FIXER_F_BERD_2_0"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(32303, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_FIXER_M_BERD_2_1"):
				case joaat("DLC_MP_FIXER_F_BERD_2_1"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(32304, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_FIXER_M_BERD_2_2"):
				case joaat("DLC_MP_FIXER_F_BERD_2_2"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(32305, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_FIXER_M_BERD_2_3"):
				case joaat("DLC_MP_FIXER_F_BERD_2_3"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(32306, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
			}
			break;
		case joaat("CU_FIXER_CLOTHES"):
			switch (iParam1)
			{
				case joaat("DLC_MP_FIXER_M_OUTFIT_GOLF_1"):
				case joaat("DLC_MP_FIXER_F_OUTFIT_GOLF_1"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(32288, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_FIXER_M_OUTFIT_GOLF_2"):
				case joaat("DLC_MP_FIXER_F_OUTFIT_GOLF_2"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(32289, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_FIXER_M_OUTFIT_GOLF_3"):
				case joaat("DLC_MP_FIXER_F_OUTFIT_GOLF_3"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(32290, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_FIXER_M_OUTFIT_GOLF_4"):
				case joaat("DLC_MP_FIXER_F_OUTFIT_GOLF_4"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(32291, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_FIXER_M_JBIB_10_0"):
				case joaat("DLC_MP_FIXER_M_SPECIAL_0_0"):
				case joaat("DLC_MP_FIXER_M_SPECIAL_1_0"):
				case joaat("DLC_MP_FIXER_M_SPECIAL_2_0"):
				case joaat("DLC_MP_FIXER_M_SPECIAL_3_0"):
				case joaat("DLC_MP_FIXER_M_SPECIAL_4_0"):
				case joaat("DLC_MP_FIXER_F_JBIB_13_0"):
				case joaat("DLC_MP_FIXER_F_SPECIAL_0_0"):
				case joaat("DLC_MP_FIXER_F_SPECIAL_1_0"):
				case joaat("DLC_MP_FIXER_F_SPECIAL_2_0"):
				case joaat("DLC_MP_FIXER_F_SPECIAL_3_0"):
				case joaat("DLC_MP_FIXER_F_SPECIAL_4_0"):
				case joaat("DLC_MP_FIXER_F_SPECIAL_5_0"):
				case joaat("DLC_MP_FIXER_F_JBIB_14_0"):
				case joaat("DLC_MP_FIXER_F_SPECIAL_6_0"):
				case joaat("DLC_MP_FIXER_F_SPECIAL_7_0"):
				case joaat("DLC_MP_FIXER_F_SPECIAL_8_0"):
				case joaat("DLC_MP_FIXER_F_SPECIAL_9_0"):
				case joaat("DLC_MP_FIXER_F_SPECIAL_10_0"):
				case joaat("DLC_MP_FIXER_F_SPECIAL_11_0"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(32307, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_FIXER_M_JBIB_10_1"):
				case joaat("DLC_MP_FIXER_M_SPECIAL_0_1"):
				case joaat("DLC_MP_FIXER_M_SPECIAL_1_1"):
				case joaat("DLC_MP_FIXER_M_SPECIAL_2_1"):
				case joaat("DLC_MP_FIXER_M_SPECIAL_3_1"):
				case joaat("DLC_MP_FIXER_M_SPECIAL_4_1"):
				case joaat("DLC_MP_FIXER_F_JBIB_13_1"):
				case joaat("DLC_MP_FIXER_F_SPECIAL_0_1"):
				case joaat("DLC_MP_FIXER_F_SPECIAL_1_1"):
				case joaat("DLC_MP_FIXER_F_SPECIAL_2_1"):
				case joaat("DLC_MP_FIXER_F_SPECIAL_3_1"):
				case joaat("DLC_MP_FIXER_F_SPECIAL_4_1"):
				case joaat("DLC_MP_FIXER_F_SPECIAL_5_1"):
				case joaat("DLC_MP_FIXER_F_JBIB_14_1"):
				case joaat("DLC_MP_FIXER_F_SPECIAL_6_1"):
				case joaat("DLC_MP_FIXER_F_SPECIAL_7_1"):
				case joaat("DLC_MP_FIXER_F_SPECIAL_8_1"):
				case joaat("DLC_MP_FIXER_F_SPECIAL_9_1"):
				case joaat("DLC_MP_FIXER_F_SPECIAL_10_1"):
				case joaat("DLC_MP_FIXER_F_SPECIAL_11_1"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(32308, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_FIXER_M_JBIB_10_2"):
				case joaat("DLC_MP_FIXER_F_JBIB_13_2"):
				case joaat("DLC_MP_FIXER_F_JBIB_14_2"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(32309, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_FIXER_M_JBIB_10_3"):
				case joaat("DLC_MP_FIXER_F_JBIB_13_3"):
				case joaat("DLC_MP_FIXER_F_JBIB_14_3"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(32310, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_FIXER_M_JBIB_10_4"):
				case joaat("DLC_MP_FIXER_F_JBIB_13_4"):
				case joaat("DLC_MP_FIXER_F_JBIB_14_4"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(32311, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_FIXER_M_DECL_8_0"):
				case joaat("DLC_MP_FIXER_M_DECL_9_0"):
				case joaat("DLC_MP_FIXER_F_DECL_10_0"):
				case joaat("DLC_MP_FIXER_F_DECL_11_0"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(32316, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("CU_TUNER_CLOTHES"):
		case joaat("CU_TUNER_MASKS"):
			switch (iParam1)
			{
				case joaat("DLC_MP_TUNER_M_OUTFIT_FRONTIER"):
				case joaat("DLC_MP_TUNER_M_PHEAD_0_0"):
				case joaat("DLC_MP_TUNER_F_OUTFIT_FRONTIER"):
				case joaat("DLC_MP_TUNER_F_PHEAD_0_0"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(31736, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_TUNER_M_OUTFIT_BOILER_0"):
				case joaat("DLC_MP_TUNER_M_JBIB_1_2"):
				case joaat("DLC_MP_TUNER_M_LEGS_1_2"):
				case joaat("DLC_MP_TUNER_F_OUTFIT_BOILER_0"):
				case joaat("DLC_MP_TUNER_F_JBIB_1_2"):
				case joaat("DLC_MP_TUNER_F_LEGS_1_2"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(31776, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_TUNER_M_OUTFIT_BOILER_1"):
				case joaat("DLC_MP_TUNER_M_JBIB_1_3"):
				case joaat("DLC_MP_TUNER_M_LEGS_1_3"):
				case joaat("DLC_MP_TUNER_F_OUTFIT_BOILER_1"):
				case joaat("DLC_MP_TUNER_F_JBIB_1_3"):
				case joaat("DLC_MP_TUNER_F_LEGS_1_3"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(31777, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_TUNER_M_OUTFIT_LMC_1"):
				case joaat("DLC_MP_TUNER_F_OUTFIT_LMC_1"):
				case joaat("DLC_MP_TUNER_M_JBIB_6_0"):
				case joaat("DLC_MP_TUNER_F_JBIB_6_0"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(31779, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_TUNER_M_OUTFIT_LMC_2"):
				case joaat("DLC_MP_TUNER_F_OUTFIT_LMC_2"):
				case joaat("DLC_MP_TUNER_M_JBIB_4_0"):
				case joaat("DLC_MP_TUNER_F_JBIB_4_0"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(31780, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_TUNER_M_OUTFIT_LMC_3"):
				case joaat("DLC_MP_TUNER_F_OUTFIT_LMC_3"):
				case joaat("DLC_MP_TUNER_M_JBIB_5_4"):
				case joaat("DLC_MP_TUNER_F_JBIB_5_4"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(31781, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_TUNER_M_OUTFIT_LMC_4"):
				case joaat("DLC_MP_TUNER_F_OUTFIT_LMC_4"):
				case joaat("DLC_MP_TUNER_M_JBIB_3_1"):
				case joaat("DLC_MP_TUNER_F_JBIB_3_1"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(31782, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_TUNER_M_OUTFIT_DOCK_1"):
				case joaat("DLC_MP_TUNER_F_OUTFIT_DOCK_1"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(31805, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_TUNER_M_OUTFIT_DOCK_2"):
				case joaat("DLC_MP_TUNER_F_OUTFIT_DOCK_2"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(31806, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_TUNER_M_OUTFIT_DOCK_3"):
				case joaat("DLC_MP_TUNER_F_OUTFIT_DOCK_3"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(31807, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_TUNER_M_OUTFIT_DOCK_4"):
				case joaat("DLC_MP_TUNER_F_OUTFIT_DOCK_4"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(31808, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_TUNER_M_OUTFIT_MORPH_0"):
				case joaat("DLC_MP_TUNER_F_OUTFIT_MORPH_0"):
					if (((!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(31789, -1)) && !Global_262145.f_32772 /* Tunable: UNLOCK_SPRUNK_AND_ECOLA_BODYSUITS_FOR_PURCHASE */) && !Global_262145.f_32773 /* Tunable: UNLOCK_ECOLA_ITEMS_FOR_PURCHASE */)
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_TUNER_M_OUTFIT_MORPH_1"):
				case joaat("DLC_MP_TUNER_F_OUTFIT_MORPH_1"):
					if (((!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(31790, -1)) && !Global_262145.f_32772 /* Tunable: UNLOCK_SPRUNK_AND_ECOLA_BODYSUITS_FOR_PURCHASE */) && !Global_262145.f_32774 /* Tunable: UNLOCK_SPRUNK_ITEMS_FOR_PURCHASE */)
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_TUNER_M_DECL_39_0"):
				case joaat("DLC_MP_TUNER_F_DECL_38_0"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(32275, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_TUNER_M_DECL_30_1"):
				case joaat("DLC_MP_TUNER_F_DECL_29_1"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(32273, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_TUNER_M_JBIB_13_1"):
				case joaat("DLC_MP_TUNER_M_JBIB_14_1"):
				case joaat("DLC_MP_TUNER_F_JBIB_13_1"):
					if ((!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(31785, -1)) && !Global_262145.f_32773 /* Tunable: UNLOCK_ECOLA_ITEMS_FOR_PURCHASE */)
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_TUNER_M_JBIB_13_0"):
				case joaat("DLC_MP_TUNER_M_JBIB_14_0"):
				case joaat("DLC_MP_TUNER_F_JBIB_13_0"):
					if ((!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(31786, -1)) && !Global_262145.f_32774 /* Tunable: UNLOCK_SPRUNK_ITEMS_FOR_PURCHASE */)
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_TUNER_M_JBIB_13_2"):
				case joaat("DLC_MP_TUNER_M_JBIB_14_2"):
				case joaat("DLC_MP_TUNER_F_JBIB_13_2"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(31787, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_TUNER_M_JBIB_9_15"):
				case joaat("DLC_MP_TUNER_F_JBIB_9_15"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(31788, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_TUNER_M_JBIB_11_0"):
				case joaat("DLC_MP_TUNER_M_JBIB_12_0"):
				case joaat("DLC_MP_TUNER_F_JBIB_11_0"):
				case joaat("DLC_MP_TUNER_F_JBIB_12_0"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(31784, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_TUNER_M_BERD_3_0"):
				case joaat("DLC_MP_TUNER_F_BERD_4_0"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(31783, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_TUNER_M_PHEAD_1_0"):
				case joaat("DLC_MP_TUNER_M_PHEAD_2_0"):
				case joaat("DLC_MP_TUNER_F_PHEAD_1_0"):
				case joaat("DLC_MP_TUNER_F_PHEAD_2_0"):
					if ((!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(31766, -1)) && !Global_262145.f_32774 /* Tunable: UNLOCK_SPRUNK_ITEMS_FOR_PURCHASE */)
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_TUNER_M_PHEAD_1_1"):
				case joaat("DLC_MP_TUNER_M_PHEAD_2_1"):
				case joaat("DLC_MP_TUNER_F_PHEAD_1_1"):
				case joaat("DLC_MP_TUNER_F_PHEAD_2_1"):
					if ((!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(31767, -1)) && !Global_262145.f_32773 /* Tunable: UNLOCK_ECOLA_ITEMS_FOR_PURCHASE */)
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("CU_HEIST4_CLOTHES"):
		case joaat("CU_HEIST4_MASKS"):
			switch (iParam1)
			{
				case joaat("DLC_MP_H4_F_JBIB_8_0"):
				case joaat("DLC_MP_H4_F_JBIB_9_0"):
				case joaat("DLC_MP_H4_M_JBIB_8_0"):
				case joaat("DLC_MP_H4_M_JBIB_9_0"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30563, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_F_JBIB_10_0"):
				case joaat("DLC_MP_H4_M_JBIB_10_0"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30564, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_F_JBIB_5_0"):
				case joaat("DLC_MP_H4_M_JBIB_6_0"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30565, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_F_JBIB_5_1"):
				case joaat("DLC_MP_H4_M_JBIB_6_1"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30566, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_F_JBIB_7_5"):
				case joaat("DLC_MP_H4_M_JBIB_0_9"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30572, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_F_JBIB_7_4"):
				case joaat("DLC_MP_H4_M_JBIB_0_8"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30573, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_F_JBIB_6_4"):
				case joaat("DLC_MP_H4_M_JBIB_7_4"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30578, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_F_JBIB_6_3"):
				case joaat("DLC_MP_H4_M_JBIB_7_3"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30579, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_F_JBIB_6_2"):
				case joaat("DLC_MP_H4_M_JBIB_7_2"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30580, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_F_JBIB_6_1"):
				case joaat("DLC_MP_H4_M_JBIB_7_1"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30581, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_F_JBIB_6_0"):
				case joaat("DLC_MP_H4_M_JBIB_7_0"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30582, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_F_LEGS_1_0"):
				case joaat("DLC_MP_H4_M_LEGS_1_0"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30583, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_F_LEGS_1_1"):
				case joaat("DLC_MP_H4_M_LEGS_1_1"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30584, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_F_LEGS_1_2"):
				case joaat("DLC_MP_H4_M_LEGS_1_2"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30585, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_F_LEGS_0_0"):
				case joaat("DLC_MP_H4_M_LEGS_0_0"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30586, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_F_PHEAD_1_0"):
				case joaat("DLC_MP_H4_M_PHEAD_1_0"):
				case joaat("DLC_MP_H4_F_PHEAD_2_0"):
				case joaat("DLC_MP_H4_M_PHEAD_2_0"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30587, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_F_PHEAD_1_1"):
				case joaat("DLC_MP_H4_M_PHEAD_1_1"):
				case joaat("DLC_MP_H4_F_PHEAD_2_1"):
				case joaat("DLC_MP_H4_M_PHEAD_2_1"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30588, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_F_PHEAD_1_2"):
				case joaat("DLC_MP_H4_M_PHEAD_1_2"):
				case joaat("DLC_MP_H4_F_PHEAD_2_2"):
				case joaat("DLC_MP_H4_M_PHEAD_2_2"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30589, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_F_PHEAD_1_3"):
				case joaat("DLC_MP_H4_M_PHEAD_1_3"):
				case joaat("DLC_MP_H4_F_PHEAD_2_3"):
				case joaat("DLC_MP_H4_M_PHEAD_2_3"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30590, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_F_PHEAD_1_4"):
				case joaat("DLC_MP_H4_M_PHEAD_1_4"):
				case joaat("DLC_MP_H4_F_PHEAD_2_4"):
				case joaat("DLC_MP_H4_M_PHEAD_2_4"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30591, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
			}
			switch (iParam1)
			{
				case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_0"):
				case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_0"):
				case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_0"):
				case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_0"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30592, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_1"):
				case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_1"):
				case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_1"):
				case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_1"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30593, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_2"):
				case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_2"):
				case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_2"):
				case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_2"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30594, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_3"):
				case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_3"):
				case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_3"):
				case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_3"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30595, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_4"):
				case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_4"):
				case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_4"):
				case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_4"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30596, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_5"):
				case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_5"):
				case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_5"):
				case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_5"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30597, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_6"):
				case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_6"):
				case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_6"):
				case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_6"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30598, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_7"):
				case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_7"):
				case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_7"):
				case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_7"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30599, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_8"):
				case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_8"):
				case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_8"):
				case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_8"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30600, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_9"):
				case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_9"):
				case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_9"):
				case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_9"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30601, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_10"):
				case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_10"):
				case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_10"):
				case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_10"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30602, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_11"):
				case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_11"):
				case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_11"):
				case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_11"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30603, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_F_PEYES_0_0"):
				case joaat("DLC_MP_H4_M_PEYES_0_0"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30604, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_F_PEYES_0_1"):
				case joaat("DLC_MP_H4_M_PEYES_0_1"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30605, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_F_PEYES_0_2"):
				case joaat("DLC_MP_H4_M_PEYES_0_2"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30606, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_F_PEYES_0_3"):
				case joaat("DLC_MP_H4_M_PEYES_0_3"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30607, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_F_PEYES_0_4"):
				case joaat("DLC_MP_H4_M_PEYES_0_4"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30608, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_F_PEYES_0_5"):
				case joaat("DLC_MP_H4_M_PEYES_0_5"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30609, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_F_PEYES_0_6"):
				case joaat("DLC_MP_H4_M_PEYES_0_6"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30610, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_F_PEYES_0_7"):
				case joaat("DLC_MP_H4_M_PEYES_0_7"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30611, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_F_PEYES_0_8"):
				case joaat("DLC_MP_H4_M_PEYES_0_8"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30612, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_F_PEYES_0_9"):
				case joaat("DLC_MP_H4_M_PEYES_0_9"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30613, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_F_PEYES_0_10"):
				case joaat("DLC_MP_H4_M_PEYES_0_10"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30614, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_F_PEYES_0_11"):
				case joaat("DLC_MP_H4_M_PEYES_0_11"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30615, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_F_TEETH_13_0"):
				case joaat("DLC_MP_H4_M_TEETH_13_0"):
				case joaat("DLC_MP_H4_F_TEETH_14_0"):
				case joaat("DLC_MP_H4_M_TEETH_14_0"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30616, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_F_TEETH_13_1"):
				case joaat("DLC_MP_H4_M_TEETH_13_1"):
				case joaat("DLC_MP_H4_F_TEETH_14_1"):
				case joaat("DLC_MP_H4_M_TEETH_14_1"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30617, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_F_TEETH_13_2"):
				case joaat("DLC_MP_H4_M_TEETH_13_2"):
				case joaat("DLC_MP_H4_F_TEETH_14_2"):
				case joaat("DLC_MP_H4_M_TEETH_14_2"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30618, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_F_TEETH_13_3"):
				case joaat("DLC_MP_H4_M_TEETH_13_3"):
				case joaat("DLC_MP_H4_F_TEETH_14_3"):
				case joaat("DLC_MP_H4_M_TEETH_14_3"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30619, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_F_TEETH_13_4"):
				case joaat("DLC_MP_H4_M_TEETH_13_4"):
				case joaat("DLC_MP_H4_F_TEETH_14_4"):
				case joaat("DLC_MP_H4_M_TEETH_14_4"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30620, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_F_TEETH_13_5"):
				case joaat("DLC_MP_H4_M_TEETH_13_5"):
				case joaat("DLC_MP_H4_F_TEETH_14_5"):
				case joaat("DLC_MP_H4_M_TEETH_14_5"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30621, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_F_TEETH_13_6"):
				case joaat("DLC_MP_H4_M_TEETH_13_6"):
				case joaat("DLC_MP_H4_F_TEETH_14_6"):
				case joaat("DLC_MP_H4_M_TEETH_14_6"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30622, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_F_TEETH_13_7"):
				case joaat("DLC_MP_H4_M_TEETH_13_7"):
				case joaat("DLC_MP_H4_F_TEETH_14_7"):
				case joaat("DLC_MP_H4_M_TEETH_14_7"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30623, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_F_TEETH_13_8"):
				case joaat("DLC_MP_H4_M_TEETH_13_8"):
				case joaat("DLC_MP_H4_F_TEETH_14_8"):
				case joaat("DLC_MP_H4_M_TEETH_14_8"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30624, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_F_TEETH_13_9"):
				case joaat("DLC_MP_H4_M_TEETH_13_9"):
				case joaat("DLC_MP_H4_F_TEETH_14_9"):
				case joaat("DLC_MP_H4_M_TEETH_14_9"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30625, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_F_TEETH_13_10"):
				case joaat("DLC_MP_H4_M_TEETH_13_10"):
				case joaat("DLC_MP_H4_F_TEETH_14_10"):
				case joaat("DLC_MP_H4_M_TEETH_14_10"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30626, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_F_TEETH_13_11"):
				case joaat("DLC_MP_H4_M_TEETH_13_11"):
				case joaat("DLC_MP_H4_F_TEETH_14_11"):
				case joaat("DLC_MP_H4_M_TEETH_14_11"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30627, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_F_TEETH_13_12"):
				case joaat("DLC_MP_H4_M_TEETH_13_12"):
				case joaat("DLC_MP_H4_F_TEETH_14_12"):
				case joaat("DLC_MP_H4_M_TEETH_14_12"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30628, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_F_TEETH_13_13"):
				case joaat("DLC_MP_H4_M_TEETH_13_13"):
				case joaat("DLC_MP_H4_F_TEETH_14_13"):
				case joaat("DLC_MP_H4_M_TEETH_14_13"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30629, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_F_TEETH_13_14"):
				case joaat("DLC_MP_H4_M_TEETH_13_14"):
				case joaat("DLC_MP_H4_F_TEETH_14_14"):
				case joaat("DLC_MP_H4_M_TEETH_14_14"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30630, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_F_TEETH_13_15"):
				case joaat("DLC_MP_H4_M_TEETH_13_15"):
				case joaat("DLC_MP_H4_F_TEETH_14_15"):
				case joaat("DLC_MP_H4_M_TEETH_14_15"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30631, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_M_DECL_0_0"):
				case joaat("DLC_MP_H4_F_DECL_0_0"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30574, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_M_JBIB_0_5"):
				case joaat("DLC_MP_H4_F_JBIB_7_1"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30567, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_M_JBIB_0_6"):
				case joaat("DLC_MP_H4_F_JBIB_7_2"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30575, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_M_JBIB_0_7"):
				case joaat("DLC_MP_H4_F_JBIB_7_3"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30576, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_F_JBIB_4_0"):
				case joaat("DLC_MP_H4_M_JBIB_5_0"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30577, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
			}
			switch (iParam1)
			{
				case joaat("DLC_MP_H4_M_PEYES_1_0"):
				case joaat("DLC_MP_H4_F_PEYES_1_0"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30638, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_M_PEYES_1_1"):
				case joaat("DLC_MP_H4_F_PEYES_1_1"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30639, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_M_PEYES_1_2"):
				case joaat("DLC_MP_H4_F_PEYES_1_2"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30640, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_M_PEYES_1_3"):
				case joaat("DLC_MP_H4_F_PEYES_1_3"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30641, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_M_PEYES_1_4"):
				case joaat("DLC_MP_H4_F_PEYES_1_4"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30642, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_M_PEYES_1_5"):
				case joaat("DLC_MP_H4_F_PEYES_1_5"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30643, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_M_PEYES_1_6"):
				case joaat("DLC_MP_H4_F_PEYES_1_6"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30644, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_M_PEYES_1_7"):
				case joaat("DLC_MP_H4_F_PEYES_1_7"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30645, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_M_PEYES_1_8"):
				case joaat("DLC_MP_H4_F_PEYES_1_8"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30646, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_M_PEYES_1_9"):
				case joaat("DLC_MP_H4_F_PEYES_1_9"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30647, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_M_PEYES_1_10"):
				case joaat("DLC_MP_H4_F_PEYES_1_10"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30648, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_M_PEYES_1_11"):
				case joaat("DLC_MP_H4_F_PEYES_1_11"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30649, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_M_PEYES_2_0"):
				case joaat("DLC_MP_H4_F_PEYES_2_0"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30650, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_M_PEYES_2_1"):
				case joaat("DLC_MP_H4_F_PEYES_2_1"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30651, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_M_PEYES_2_2"):
				case joaat("DLC_MP_H4_F_PEYES_2_2"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30652, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_M_PEYES_2_3"):
				case joaat("DLC_MP_H4_F_PEYES_2_3"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30653, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_M_PEYES_2_4"):
				case joaat("DLC_MP_H4_F_PEYES_2_4"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30654, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_M_PEYES_2_5"):
				case joaat("DLC_MP_H4_F_PEYES_2_5"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30655, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_M_PEYES_2_6"):
				case joaat("DLC_MP_H4_F_PEYES_2_6"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30656, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_M_PEYES_2_7"):
				case joaat("DLC_MP_H4_F_PEYES_2_7"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30657, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_M_PEYES_2_8"):
				case joaat("DLC_MP_H4_F_PEYES_2_8"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30658, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_M_PEYES_2_9"):
				case joaat("DLC_MP_H4_F_PEYES_2_9"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30659, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_M_PEYES_2_10"):
				case joaat("DLC_MP_H4_F_PEYES_2_10"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30660, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_M_PEYES_2_11"):
				case joaat("DLC_MP_H4_F_PEYES_2_11"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30661, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_M_PEYES_3_0"):
				case joaat("DLC_MP_H4_F_PEYES_3_0"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30662, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_M_PEYES_3_1"):
				case joaat("DLC_MP_H4_F_PEYES_3_1"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30663, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_M_PEYES_3_2"):
				case joaat("DLC_MP_H4_F_PEYES_3_2"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30664, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_M_PEYES_3_3"):
				case joaat("DLC_MP_H4_F_PEYES_3_3"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30665, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_M_PEYES_3_4"):
				case joaat("DLC_MP_H4_F_PEYES_3_4"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30666, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_M_PEYES_3_5"):
				case joaat("DLC_MP_H4_F_PEYES_3_5"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30667, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_M_PEYES_3_6"):
				case joaat("DLC_MP_H4_F_PEYES_3_6"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30668, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_M_PEYES_3_7"):
				case joaat("DLC_MP_H4_F_PEYES_3_7"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30669, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_M_PEYES_3_8"):
				case joaat("DLC_MP_H4_F_PEYES_3_8"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30670, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_M_PEYES_3_9"):
				case joaat("DLC_MP_H4_F_PEYES_3_9"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30671, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_M_PEYES_3_10"):
				case joaat("DLC_MP_H4_F_PEYES_3_10"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30672, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_M_PEYES_3_11"):
				case joaat("DLC_MP_H4_F_PEYES_3_11"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30673, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
			}
			switch (iParam1)
			{
				case joaat("DLC_MP_H4_M_BERD_4_0"):
				case joaat("DLC_MP_H4_F_BERD_4_0"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30674, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_M_BERD_4_1"):
				case joaat("DLC_MP_H4_F_BERD_4_1"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30675, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_M_BERD_4_2"):
				case joaat("DLC_MP_H4_F_BERD_4_2"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30676, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_M_BERD_4_3"):
				case joaat("DLC_MP_H4_F_BERD_4_3"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30677, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_M_BERD_4_4"):
				case joaat("DLC_MP_H4_F_BERD_4_4"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30678, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_M_BERD_4_5"):
				case joaat("DLC_MP_H4_F_BERD_4_5"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30679, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_M_BERD_4_6"):
				case joaat("DLC_MP_H4_F_BERD_4_6"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30680, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_M_BERD_4_7"):
				case joaat("DLC_MP_H4_F_BERD_4_7"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30681, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_M_BERD_4_8"):
				case joaat("DLC_MP_H4_F_BERD_4_8"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30682, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_M_BERD_4_9"):
				case joaat("DLC_MP_H4_F_BERD_4_9"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30683, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_M_BERD_4_10"):
				case joaat("DLC_MP_H4_F_BERD_4_10"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30684, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_M_BERD_4_11"):
				case joaat("DLC_MP_H4_F_BERD_4_11"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30685, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_M_BERD_4_12"):
				case joaat("DLC_MP_H4_F_BERD_4_12"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30686, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_M_BERD_4_13"):
				case joaat("DLC_MP_H4_F_BERD_4_13"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30687, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_M_BERD_4_14"):
				case joaat("DLC_MP_H4_F_BERD_4_14"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30688, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_M_BERD_4_15"):
				case joaat("DLC_MP_H4_F_BERD_4_15"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30689, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_M_BERD_4_16"):
				case joaat("DLC_MP_H4_F_BERD_4_16"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30690, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_M_BERD_4_17"):
				case joaat("DLC_MP_H4_F_BERD_4_17"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30691, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_M_BERD_4_18"):
				case joaat("DLC_MP_H4_F_BERD_4_18"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30692, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H4_M_BERD_4_19"):
				case joaat("DLC_MP_H4_F_BERD_4_19"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30693, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
			}
			break;
		case joaat("CU_SUM_CLOTHES"):
		case joaat("CU_SUM_MASKS"):
			switch (iParam1)
			{
				case joaat("DLC_MP_SUM_M_OUTFIT_1"):
				case joaat("DLC_MP_SUM_F_OUTFIT_1"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30240, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM_M_OUTFIT_2"):
				case joaat("DLC_MP_SUM_M_PHEAD_0_0"):
				case joaat("DLC_MP_SUM_F_OUTFIT_2"):
				case joaat("DLC_MP_SUM_F_PHEAD_0_0"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30259, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM_M_BERD_3_4"):
				case joaat("DLC_MP_SUM_F_BERD_3_4"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30290, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM_M_BERD_3_5"):
				case joaat("DLC_MP_SUM_F_BERD_3_5"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30291, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM_M_BERD_3_6"):
				case joaat("DLC_MP_SUM_F_BERD_3_6"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30292, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM_M_BERD_3_7"):
				case joaat("DLC_MP_SUM_F_BERD_3_7"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30293, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM_M_LEGS_1_25"):
				case joaat("DLC_MP_SUM_F_LEGS_2_25"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30294, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM_M_JBIB_0_25"):
				case joaat("DLC_MP_SUM_F_JBIB_0_25"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30295, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
			}
			switch (iParam1)
			{
				case joaat("DLC_MP_SUM_F_JBIB_22_0"):
				case joaat("DLC_MP_SUM_M_JBIB_13_8"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !(__LIB_0__::func_137(28255, -1) && __LIB_0__::func_137(28254, -1)))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_SUM_F_JBIB_22_2"):
				case joaat("DLC_MP_SUM_M_JBIB_13_10"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(28254, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
			}
			switch (iParam1)
			{
				case joaat("DLC_MP_SUM_F_JBIB_22_1"):
				case joaat("DLC_MP_SUM_M_JBIB_13_9"):
					if ((!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_1__::func_676(91, -1)) && !__LIB_0__::func_137(30258, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
			}
			break;
		case joaat("CU_HEIST3_CLOTHES"):
		case joaat("CU_HEIST3_MASKS"):
			switch (iParam1)
			{
				case joaat("DLC_MP_H3_F_JBIB_10_22"):
				case joaat("DLC_MP_H3_M_JBIB_9_22"):
					return 1;
					break;
				case joaat("DLC_MP_H3_F_JBIB_10_24"):
				case joaat("DLC_MP_H3_M_JBIB_9_24"):
					return 1;
					break;
			}
			switch (iParam1)
			{
				case joaat("DLC_MP_H3_F_JBIB_10_0"):
				case joaat("DLC_MP_H3_F_JBIB_10_1"):
				case joaat("DLC_MP_H3_M_JBIB_9_0"):
				case joaat("DLC_MP_H3_M_JBIB_9_1"):
				case joaat("DLC_MP_H3_F_FEET_0_0"):
				case joaat("DLC_MP_H3_F_TEETH_1_0"):
				case joaat("DLC_MP_H3_F_TEETH_2_0"):
				case joaat("DLC_MP_H3_M_FEET_0_0"):
				case joaat("DLC_MP_H3_M_TEETH_1_0"):
				case joaat("DLC_MP_H3_M_TEETH_2_0"):
					if (((!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !Global_262145.f_28370 /* Tunable: 1822091832 */) && !(Global_262145.f_28371 /* Tunable: -1806041478 */ && __LIB_16__::func_377(146))) && !__LIB_0__::func_137(28224, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
			}
			switch (iParam1)
			{
				case joaat("DLC_MP_H3_F_JBIB_16_0"):
				case joaat("DLC_MP_H3_M_JBIB_12_0"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(28172, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
			}
			switch (iParam1)
			{
				case joaat("DLC_MP_H3_F_JBIB_10_18"):
				case joaat("DLC_MP_H3_M_JBIB_9_18"):
					if ((!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_1__::func_676(77, -1)) && !__LIB_0__::func_137(28197, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H3_F_JBIB_10_15"):
				case joaat("DLC_MP_H3_M_JBIB_9_15"):
					if ((!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_1__::func_677(92, -1) >= __LIB_0__::func_264(92, 5, 9)) && !__LIB_0__::func_137(28198, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H3_F_JBIB_10_16"):
				case joaat("DLC_MP_H3_F_JBIB_10_17"):
				case joaat("DLC_MP_H3_F_JBIB_10_19"):
				case joaat("DLC_MP_H3_M_JBIB_9_16"):
				case joaat("DLC_MP_H3_M_JBIB_9_17"):
				case joaat("DLC_MP_H3_M_JBIB_9_19"):
					if ((!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !((__LIB_1__::func_676(77, -1) && __LIB_1__::func_676(78, -1)) && __LIB_1__::func_677(92, -1) >= __LIB_0__::func_264(92, 5, 9))) && !__LIB_0__::func_137(28200, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
			}
			switch (iParam1)
			{
				case joaat("DLC_MP_H3_F_JBIB_10_23"):
				case joaat("DLC_MP_H3_M_JBIB_9_23"):
					if ((!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_1__::func_677(93, -1) >= __LIB_0__::func_264(93, 5, 9)) && !__LIB_0__::func_137(28201, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H3_F_JBIB_10_21"):
				case joaat("DLC_MP_H3_M_JBIB_9_21"):
					if ((!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_1__::func_676(79, -1)) && !__LIB_0__::func_137(28202, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H3_F_JBIB_10_20"):
				case joaat("DLC_MP_H3_M_JBIB_9_20"):
					if ((!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_1__::func_676(80, -1)) && !__LIB_0__::func_137(28203, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
			}
			switch (iParam1)
			{
				case joaat("DLC_MP_H3_F_JBIB_10_7"):
				case joaat("DLC_MP_H3_M_JBIB_9_7"):
					if ((!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_1__::func_677(95, -1) >= __LIB_0__::func_264(95, 5, 9)) && !__LIB_0__::func_137(28205, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H3_F_JBIB_10_8"):
				case joaat("DLC_MP_H3_F_JBIB_10_9"):
				case joaat("DLC_MP_H3_F_JBIB_10_10"):
				case joaat("DLC_MP_H3_M_JBIB_9_8"):
				case joaat("DLC_MP_H3_M_JBIB_9_9"):
				case joaat("DLC_MP_H3_M_JBIB_9_10"):
					if ((!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !((__LIB_1__::func_676(81, -1) && __LIB_1__::func_677(94, -1) >= __LIB_0__::func_264(94, 5, 9)) && __LIB_1__::func_677(95, -1) >= __LIB_0__::func_264(95, 5, 9))) && !__LIB_0__::func_137(28208, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
			}
			switch (iParam1)
			{
				case joaat("DLC_MP_H3_F_JBIB_10_2"):
				case joaat("DLC_MP_H3_M_JBIB_9_2"):
					if ((!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_1__::func_676(82, -1)) && !__LIB_0__::func_137(28209, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H3_F_JBIB_10_5"):
				case joaat("DLC_MP_H3_M_JBIB_9_5"):
					if ((!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_1__::func_676(83, -1)) && !__LIB_0__::func_137(28210, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H3_F_JBIB_10_3"):
				case joaat("DLC_MP_H3_M_JBIB_9_3"):
					if ((!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_1__::func_677(96, -1) >= __LIB_0__::func_264(96, 5, 9)) && !__LIB_0__::func_137(28211, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H3_F_JBIB_10_4"):
				case joaat("DLC_MP_H3_F_JBIB_10_6"):
				case joaat("DLC_MP_H3_M_JBIB_9_4"):
				case joaat("DLC_MP_H3_M_JBIB_9_6"):
					if ((!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !((__LIB_1__::func_676(82, -1) && __LIB_1__::func_676(83, -1)) && __LIB_1__::func_677(96, -1) >= __LIB_0__::func_264(96, 5, 9))) && !__LIB_0__::func_137(28212, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
			}
			switch (iParam1)
			{
				case joaat("DLC_MP_H3_F_JBIB_10_11"):
				case joaat("DLC_MP_H3_M_JBIB_9_11"):
					if ((!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_1__::func_676(84, -1)) && !__LIB_0__::func_137(28213, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H3_F_JBIB_10_12"):
				case joaat("DLC_MP_H3_M_JBIB_9_12"):
					if ((!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_1__::func_676(85, -1)) && !__LIB_0__::func_137(28214, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H3_F_JBIB_10_14"):
				case joaat("DLC_MP_H3_M_JBIB_9_14"):
					if ((!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_1__::func_677(97, -1) >= __LIB_0__::func_264(97, 5, 9)) && !__LIB_0__::func_137(28215, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H3_F_JBIB_10_13"):
				case joaat("DLC_MP_H3_M_JBIB_9_13"):
					if ((!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !((__LIB_1__::func_676(84, -1) && __LIB_1__::func_676(85, -1)) && __LIB_1__::func_677(97, -1) >= __LIB_0__::func_264(97, 5, 9))) && !__LIB_0__::func_137(28216, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
			}
			switch (iParam1)
			{
				case joaat("DLC_MP_H3_F_JBIB_13_11"):
				case joaat("DLC_MP_H3_F_JBIB_13_12"):
				case joaat("DLC_MP_H3_M_JBIB_11_19"):
				case joaat("DLC_MP_H3_M_JBIB_11_20"):
					if ((!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_1__::func_676(86, -1)) && !__LIB_0__::func_137(28217, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H3_F_JBIB_13_14"):
				case joaat("DLC_MP_H3_M_JBIB_11_22"):
					if ((!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_1__::func_676(87, -1)) && !__LIB_0__::func_137(28218, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H3_F_JBIB_13_13"):
				case joaat("DLC_MP_H3_M_JBIB_11_21"):
					if ((!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_1__::func_676(88, -1)) && !__LIB_0__::func_137(28219, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H3_F_JBIB_13_10"):
				case joaat("DLC_MP_H3_M_JBIB_11_18"):
				case joaat("DLC_MP_H3_F_JBIB_13_15"):
				case joaat("DLC_MP_H3_M_JBIB_11_23"):
					if ((!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !((__LIB_1__::func_676(86, -1) && __LIB_1__::func_676(87, -1)) && __LIB_1__::func_676(88, -1))) && !__LIB_0__::func_137(28220, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
			}
			switch (iParam1)
			{
				case joaat("DLC_MP_H3_F_JBIB_12_2"):
				case joaat("DLC_MP_H3_M_JBIB_11_2"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(28185, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H3_F_JBIB_12_3"):
				case joaat("DLC_MP_H3_M_JBIB_11_3"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(28188, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H3_F_JBIB_12_4"):
				case joaat("DLC_MP_H3_M_JBIB_11_4"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(28186, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_H3_F_JBIB_12_5"):
				case joaat("DLC_MP_H3_M_JBIB_11_5"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(28187, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
			}
			switch (iParam1)
			{
				case joaat("DLC_MP_H3_F_JBIB_12_0"):
				case joaat("DLC_MP_H3_F_JBIB_12_1"):
				case joaat("DLC_MP_H3_M_JBIB_11_0"):
				case joaat("DLC_MP_H3_M_JBIB_11_1"):
					if (!__LIB_0__::func_443(0, 1) && !__LIB_0__::func_137(28222, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
			}
			break;
		case joaat("CU_VINEWOOD_CLOTHES"):
		case joaat("CU_VINEWOOD_MASKS"):
			switch (iParam1)
			{
				case joaat("DLC_MP_VWD_M_OUTFIT_IMPRAGE_0"):
				case joaat("DLC_MP_VWD_M_BERD_0_0"):
				case joaat("DLC_MP_VWD_M_TORSO_0_0"):
				case joaat("DLC_MP_VWD_M_LEGS_0_0"):
				case joaat("DLC_MP_VWD_M_FEET_0_0"):
				case joaat("DLC_MP_VWD_M_SPECIAL_0_0"):
				case joaat("DLC_MP_VWD_M_JBIB_1_0"):
				case joaat("DLC_MP_VWD_M_HAIR_0_0"):
				case joaat("DLC_MP_VWD_F_OUTFIT_IMPRAGE_0"):
				case joaat("DLC_MP_VWD_F_BERD_0_0"):
				case joaat("DLC_MP_VWD_F_TORSO_0_0"):
				case joaat("DLC_MP_VWD_F_LEGS_0_0"):
				case joaat("DLC_MP_VWD_F_FEET_0_0"):
				case joaat("DLC_MP_VWD_F_SPECIAL_0_0"):
				case joaat("DLC_MP_VWD_F_JBIB_1_0"):
				case joaat("DLC_MP_VWD_F_HAIR_0_0"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(26968, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_VWD_M_OUTFIT_HIGHROLL_0"):
				case joaat("DLC_MP_VWD_M_JBIB_2_2"):
				case joaat("DLC_MP_VWD_M_JBIB_3_2"):
				case joaat("DLC_MP_VWD_M_LEGS_1_1"):
				case joaat("DLC_MP_VWD_M_SPECIAL_2_2"):
				case joaat("DLC_MP_VWD_M_SPECIAL_3_2"):
				case joaat("DLC_MP_VWD_M_SPECIAL_4_2"):
				case joaat("DLC_MP_VWD_M_SPECIAL_5_2"):
				case joaat("DLC_MP_VWD_F_OUTFIT_HIGHROLL_0"):
				case joaat("DLC_MP_VWD_F_JBIB_19_7"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(26969, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_VWD_M_JBIB_20_4"):
				case joaat("DLC_MP_VWD_F_JBIB_18_4"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_4__::func_142(PLAYER::PLAYER_ID()))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_VWD_M_DECL_1_0"):
				case joaat("DLC_MP_VWD_F_DECL_1_0"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(27194, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_VWD_M_DECL_1_1"):
				case joaat("DLC_MP_VWD_F_DECL_1_1"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(27193, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_VWD_M_DECL_1_2"):
				case joaat("DLC_MP_VWD_F_DECL_1_2"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(27192, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_VWD_M_DECL_1_3"):
				case joaat("DLC_MP_VWD_F_DECL_1_3"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(27189, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_VWD_M_DECL_1_4"):
				case joaat("DLC_MP_VWD_F_DECL_1_4"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(27190, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_VWD_M_DECL_1_5"):
				case joaat("DLC_MP_VWD_F_DECL_1_5"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(27191, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_VWD_M_DECL_1_6"):
				case joaat("DLC_MP_VWD_F_DECL_1_6"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(27195, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_VWD_M_DECL_1_7"):
				case joaat("DLC_MP_VWD_F_DECL_1_7"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(27196, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_VWD_M_DECL_1_8"):
				case joaat("DLC_MP_VWD_F_DECL_1_8"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(27197, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_VWD_M_DECL_1_9"):
				case joaat("DLC_MP_VWD_F_DECL_1_9"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(27188, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_VWD_M_DECL_1_10"):
				case joaat("DLC_MP_VWD_F_DECL_1_10"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(27186, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_VWD_M_DECL_1_11"):
				case joaat("DLC_MP_VWD_F_DECL_1_11"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(27202, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_VWD_M_DECL_1_12"):
				case joaat("DLC_MP_VWD_F_DECL_1_12"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(27203, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_VWD_M_DECL_1_13"):
				case joaat("DLC_MP_VWD_F_DECL_1_13"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(27204, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_VWD_M_DECL_1_14"):
				case joaat("DLC_MP_VWD_F_DECL_1_14"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(27205, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_VWD_M_DECL_1_15"):
				case joaat("DLC_MP_VWD_F_DECL_1_15"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(27206, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_VWD_M_DECL_1_16"):
				case joaat("DLC_MP_VWD_F_DECL_1_16"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(27207, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_VWD_M_DECL_1_17"):
				case joaat("DLC_MP_VWD_F_DECL_1_17"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(27208, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_VWD_M_DECL_1_18"):
				case joaat("DLC_MP_VWD_F_DECL_1_18"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(27209, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_VWD_M_JBIB_23_0"):
				case joaat("DLC_MP_VWD_F_JBIB_21_0"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(27210, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_VWD_M_JBIB_23_1"):
				case joaat("DLC_MP_VWD_F_JBIB_21_1"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(27184, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_VWD_M_JBIB_23_2"):
				case joaat("DLC_MP_VWD_F_JBIB_21_2"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(27211, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_VWD_M_JBIB_23_3"):
				case joaat("DLC_MP_VWD_F_JBIB_21_3"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(27185, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_VWD_M_JBIB_23_4"):
				case joaat("DLC_MP_VWD_F_JBIB_21_4"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(27212, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_VWD_M_JBIB_23_5"):
				case joaat("DLC_MP_VWD_F_JBIB_21_5"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(27198, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_VWD_M_JBIB_23_6"):
				case joaat("DLC_MP_VWD_F_JBIB_21_6"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(27187, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_VWD_M_JBIB_23_7"):
				case joaat("DLC_MP_VWD_F_JBIB_21_7"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(27213, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_VWD_M_JBIB_23_8"):
				case joaat("DLC_MP_VWD_F_JBIB_21_8"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(27199, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_VWD_M_JBIB_23_9"):
				case joaat("DLC_MP_VWD_F_JBIB_21_9"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(27200, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_VWD_M_JBIB_23_10"):
				case joaat("DLC_MP_VWD_F_JBIB_21_10"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(27201, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
			}
			break;
		case joaat("CU_XMAS6_CLOTHES"):
		case joaat("CU_XMAS6_MASKS"):
		case joaat("CU_ARENA_CLOTHES"):
			switch (iParam1)
			{
				case joaat("DLC_MP_ARENA_M_OUTFIT_MORPH_A_2"):
				case joaat("DLC_MP_ARENA_M_BERD_0_18"):
				case joaat("DLC_MP_ARENA_M_LEGS_4_18"):
				case joaat("DLC_MP_ARENA_M_FEET_6_18"):
				case joaat("DLC_MP_ARENA_M_JBIB_2_18"):
				case joaat("DLC_MP_ARENA_F_OUTFIT_MORPH_A_2"):
				case joaat("DLC_MP_ARENA_F_BERD_0_18"):
				case joaat("DLC_MP_ARENA_F_LEGS_4_18"):
				case joaat("DLC_MP_ARENA_F_FEET_6_18"):
				case joaat("DLC_MP_ARENA_F_JBIB_2_18"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(28171, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_ARENA_M_OUTFIT_MORPH_A_1"):
				case joaat("DLC_MP_ARENA_M_BERD_0_17"):
				case joaat("DLC_MP_ARENA_M_LEGS_4_17"):
				case joaat("DLC_MP_ARENA_M_FEET_6_17"):
				case joaat("DLC_MP_ARENA_M_JBIB_2_17"):
				case joaat("DLC_MP_ARENA_F_OUTFIT_MORPH_A_1"):
				case joaat("DLC_MP_ARENA_F_BERD_0_17"):
				case joaat("DLC_MP_ARENA_F_LEGS_4_17"):
				case joaat("DLC_MP_ARENA_F_FEET_6_17"):
				case joaat("DLC_MP_ARENA_F_JBIB_2_17"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(28173, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_ARENA_M_OUTFIT_MORPH_A_0"):
				case joaat("DLC_MP_ARENA_M_BERD_0_16"):
				case joaat("DLC_MP_ARENA_M_LEGS_4_16"):
				case joaat("DLC_MP_ARENA_M_FEET_6_16"):
				case joaat("DLC_MP_ARENA_M_JBIB_2_16"):
				case joaat("DLC_MP_ARENA_F_OUTFIT_MORPH_A_0"):
				case joaat("DLC_MP_ARENA_F_BERD_0_16"):
				case joaat("DLC_MP_ARENA_F_LEGS_4_16"):
				case joaat("DLC_MP_ARENA_F_FEET_6_16"):
				case joaat("DLC_MP_ARENA_F_JBIB_2_16"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(28174, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_ARENA_M_OUTFIT_MORPH_A_3"):
				case joaat("DLC_MP_ARENA_M_BERD_0_19"):
				case joaat("DLC_MP_ARENA_M_LEGS_4_19"):
				case joaat("DLC_MP_ARENA_M_FEET_6_19"):
				case joaat("DLC_MP_ARENA_M_JBIB_2_19"):
				case joaat("DLC_MP_ARENA_F_OUTFIT_MORPH_A_3"):
				case joaat("DLC_MP_ARENA_F_BERD_0_19"):
				case joaat("DLC_MP_ARENA_F_LEGS_4_19"):
				case joaat("DLC_MP_ARENA_F_FEET_6_19"):
				case joaat("DLC_MP_ARENA_F_JBIB_2_19"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(28175, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
			}
			switch (iParam1)
			{
				case joaat("DLC_MP_ARENA_M_OUTFIT_CHARACTERS_A_0"):
				case joaat("DLC_MP_ARENA_M_LEGS_9_0"):
				case joaat("DLC_MP_ARENA_M_FEET_12_0"):
				case joaat("DLC_MP_ARENA_M_SPECIAL_5_0"):
				case joaat("DLC_MP_ARENA_M_JBIB_12_0"):
				case joaat("DLC_MP_ARENA_F_OUTFIT_CHARACTERS_A_0"):
				case joaat("DLC_MP_ARENA_F_LEGS_9_0"):
				case joaat("DLC_MP_ARENA_F_FEET_12_0"):
				case joaat("DLC_MP_ARENA_F_SPECIAL_5_0"):
				case joaat("DLC_MP_ARENA_F_JBIB_12_0"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_4__::func_251())
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
			}
			switch (iParam1)
			{
				case joaat("DLC_MP_ARENA_F_JBIB_16_0"):
				case joaat("DLC_MP_ARENA_M_JBIB_16_0"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(25022, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_ARENA_F_JBIB_16_1"):
				case joaat("DLC_MP_ARENA_M_JBIB_16_1"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(25023, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_ARENA_F_JBIB_16_2"):
				case joaat("DLC_MP_ARENA_M_JBIB_16_2"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(25024, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_ARENA_F_JBIB_16_3"):
				case joaat("DLC_MP_ARENA_M_JBIB_16_3"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(25025, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_ARENA_F_JBIB_16_4"):
				case joaat("DLC_MP_ARENA_M_JBIB_16_4"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(25026, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_ARENA_F_JBIB_16_5"):
				case joaat("DLC_MP_ARENA_M_JBIB_16_5"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(25027, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_ARENA_F_JBIB_16_6"):
				case joaat("DLC_MP_ARENA_M_JBIB_16_6"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(25028, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_ARENA_F_JBIB_16_7"):
				case joaat("DLC_MP_ARENA_M_JBIB_16_7"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(25019, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_ARENA_F_JBIB_16_8"):
				case joaat("DLC_MP_ARENA_M_JBIB_16_8"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(25029, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_ARENA_F_JBIB_16_9"):
				case joaat("DLC_MP_ARENA_M_JBIB_16_9"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(25021, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_ARENA_F_JBIB_16_10"):
				case joaat("DLC_MP_ARENA_M_JBIB_16_10"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(25018, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_ARENA_F_JBIB_16_11"):
				case joaat("DLC_MP_ARENA_M_JBIB_16_11"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(25020, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_ARENA_F_JBIB_16_12"):
				case joaat("DLC_MP_ARENA_M_JBIB_16_12"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(25030, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_ARENA_F_JBIB_16_13"):
				case joaat("DLC_MP_ARENA_M_JBIB_16_13"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(25031, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_ARENA_F_OUTFIT_MORPH_A_0"):
				case joaat("DLC_MP_ARENA_F_BERD_0_16"):
				case joaat("DLC_MP_ARENA_F_LEGS_4_16"):
				case joaat("DLC_MP_ARENA_F_FEET_6_16"):
				case joaat("DLC_MP_ARENA_F_JBIB_2_16"):
				case joaat("DLC_MP_ARENA_F_OUTFIT_MORPH_A_1"):
				case joaat("DLC_MP_ARENA_F_BERD_0_17"):
				case joaat("DLC_MP_ARENA_F_LEGS_4_17"):
				case joaat("DLC_MP_ARENA_F_FEET_6_17"):
				case joaat("DLC_MP_ARENA_F_JBIB_2_17"):
				case joaat("DLC_MP_ARENA_F_OUTFIT_MORPH_A_2"):
				case joaat("DLC_MP_ARENA_F_BERD_0_18"):
				case joaat("DLC_MP_ARENA_F_LEGS_4_18"):
				case joaat("DLC_MP_ARENA_F_FEET_6_18"):
				case joaat("DLC_MP_ARENA_F_JBIB_2_18"):
				case joaat("DLC_MP_ARENA_F_OUTFIT_MORPH_A_3"):
				case joaat("DLC_MP_ARENA_F_BERD_0_19"):
				case joaat("DLC_MP_ARENA_F_LEGS_4_19"):
				case joaat("DLC_MP_ARENA_F_FEET_6_19"):
				case joaat("DLC_MP_ARENA_F_JBIB_2_19"):
				case joaat("DLC_MP_ARENA_M_OUTFIT_MORPH_A_0"):
				case joaat("DLC_MP_ARENA_M_BERD_0_16"):
				case joaat("DLC_MP_ARENA_M_LEGS_4_16"):
				case joaat("DLC_MP_ARENA_M_FEET_6_16"):
				case joaat("DLC_MP_ARENA_M_JBIB_2_16"):
				case joaat("DLC_MP_ARENA_M_OUTFIT_MORPH_A_1"):
				case joaat("DLC_MP_ARENA_M_BERD_0_17"):
				case joaat("DLC_MP_ARENA_M_LEGS_4_17"):
				case joaat("DLC_MP_ARENA_M_FEET_6_17"):
				case joaat("DLC_MP_ARENA_M_JBIB_2_17"):
				case joaat("DLC_MP_ARENA_M_OUTFIT_MORPH_A_2"):
				case joaat("DLC_MP_ARENA_M_BERD_0_18"):
				case joaat("DLC_MP_ARENA_M_LEGS_4_18"):
				case joaat("DLC_MP_ARENA_M_FEET_6_18"):
				case joaat("DLC_MP_ARENA_M_JBIB_2_18"):
				case joaat("DLC_MP_ARENA_M_OUTFIT_MORPH_A_3"):
				case joaat("DLC_MP_ARENA_M_BERD_0_19"):
				case joaat("DLC_MP_ARENA_M_LEGS_4_19"):
				case joaat("DLC_MP_ARENA_M_FEET_6_19"):
				case joaat("DLC_MP_ARENA_M_JBIB_2_19"):
					if (Global_262145.f_25908 /* Tunable: CHRISTMAS2018_CLOTHING */)
					{
						return 0;
					}
					else
					{
						return 1;
					}
					break;
				case joaat("DLC_MP_ARENA_M_OUTFIT_EPSILON_0"):
				case joaat("DLC_MP_ARENA_F_OUTFIT_EPSILON_0"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(25005, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_ARENA_M_TEETH_0_0"):
				case joaat("DLC_MP_ARENA_F_TEETH_0_0"):
				case joaat("DLC_MP_ARENA_M_TEETH_1_0"):
				case joaat("DLC_MP_ARENA_F_TEETH_1_0"):
				case joaat("DLC_MP_ARENA_M_TEETH_2_0"):
				case joaat("DLC_MP_ARENA_F_TEETH_2_0"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(25004, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
			}
			break;
		case joaat("CU_XMAS5_CLOTHES"):
		case joaat("CU_XMAS5_MASKS"):
		case joaat("CU_GANGOPS_CLOTHES"):
			switch (iParam1)
			{
				case joaat("DLC_MP_X17_M_JBIB_4_0"):
				case joaat("DLC_MP_X17_M_JBIB_4_1"):
				case joaat("DLC_MP_X17_M_JBIB_4_2"):
				case joaat("DLC_MP_X17_M_JBIB_4_3"):
				case joaat("DLC_MP_X17_M_JBIB_4_4"):
				case joaat("DLC_MP_X17_M_JBIB_4_5"):
				case joaat("DLC_MP_X17_M_JBIB_4_6"):
				case joaat("DLC_MP_X17_M_JBIB_4_7"):
				case joaat("DLC_MP_X17_M_JBIB_4_8"):
				case joaat("DLC_MP_X17_M_JBIB_4_9"):
				case joaat("DLC_MP_X17_F_JBIB_4_0"):
				case joaat("DLC_MP_X17_F_JBIB_4_1"):
				case joaat("DLC_MP_X17_F_JBIB_4_2"):
				case joaat("DLC_MP_X17_F_JBIB_4_3"):
				case joaat("DLC_MP_X17_F_JBIB_4_4"):
				case joaat("DLC_MP_X17_F_JBIB_4_5"):
				case joaat("DLC_MP_X17_F_JBIB_4_6"):
				case joaat("DLC_MP_X17_F_JBIB_4_7"):
				case joaat("DLC_MP_X17_F_JBIB_4_8"):
				case joaat("DLC_MP_X17_F_JBIB_4_9"):
				case joaat("DLC_MP_X17_M_OUTFIT_MORPH_5"):
				case joaat("DLC_MP_X17_M_BERD_2_5"):
				case joaat("DLC_MP_X17_M_LEGS_1_5"):
				case joaat("DLC_MP_X17_M_FEET_1_5"):
				case joaat("DLC_MP_X17_M_JBIB_5_5"):
				case joaat("DLC_MP_X17_M_OUTFIT_MORPH_6"):
				case joaat("DLC_MP_X17_M_BERD_2_6"):
				case joaat("DLC_MP_X17_M_LEGS_1_6"):
				case joaat("DLC_MP_X17_M_FEET_1_6"):
				case joaat("DLC_MP_X17_M_JBIB_5_6"):
				case joaat("DLC_MP_X17_M_OUTFIT_MORPH_7"):
				case joaat("DLC_MP_X17_M_BERD_2_7"):
				case joaat("DLC_MP_X17_M_LEGS_1_7"):
				case joaat("DLC_MP_X17_M_FEET_1_7"):
				case joaat("DLC_MP_X17_M_JBIB_5_7"):
				case joaat("DLC_MP_X17_M_OUTFIT_MORPH_8"):
				case joaat("DLC_MP_X17_M_BERD_2_8"):
				case joaat("DLC_MP_X17_M_LEGS_1_8"):
				case joaat("DLC_MP_X17_M_FEET_1_8"):
				case joaat("DLC_MP_X17_M_JBIB_5_8"):
				case joaat("DLC_MP_X17_M_OUTFIT_MORPH_9"):
				case joaat("DLC_MP_X17_M_BERD_2_9"):
				case joaat("DLC_MP_X17_M_LEGS_1_9"):
				case joaat("DLC_MP_X17_M_FEET_1_9"):
				case joaat("DLC_MP_X17_M_JBIB_5_9"):
				case joaat("DLC_MP_X17_M_OUTFIT_MORPH_10"):
				case joaat("DLC_MP_X17_M_BERD_2_10"):
				case joaat("DLC_MP_X17_M_LEGS_1_10"):
				case joaat("DLC_MP_X17_M_FEET_1_10"):
				case joaat("DLC_MP_X17_M_JBIB_5_10"):
				case joaat("DLC_MP_X17_M_OUTFIT_MORPH_11"):
				case joaat("DLC_MP_X17_M_BERD_2_11"):
				case joaat("DLC_MP_X17_M_LEGS_1_11"):
				case joaat("DLC_MP_X17_M_FEET_1_11"):
				case joaat("DLC_MP_X17_M_JBIB_5_11"):
				case joaat("DLC_MP_X17_F_OUTFIT_MORPH_5"):
				case joaat("DLC_MP_X17_F_BERD_2_5"):
				case joaat("DLC_MP_X17_F_LEGS_1_5"):
				case joaat("DLC_MP_X17_F_FEET_1_5"):
				case joaat("DLC_MP_X17_F_JBIB_5_5"):
				case joaat("DLC_MP_X17_F_OUTFIT_MORPH_6"):
				case joaat("DLC_MP_X17_F_BERD_2_6"):
				case joaat("DLC_MP_X17_F_LEGS_1_6"):
				case joaat("DLC_MP_X17_F_FEET_1_6"):
				case joaat("DLC_MP_X17_F_JBIB_5_6"):
				case joaat("DLC_MP_X17_F_OUTFIT_MORPH_7"):
				case joaat("DLC_MP_X17_F_BERD_2_7"):
				case joaat("DLC_MP_X17_F_LEGS_1_7"):
				case joaat("DLC_MP_X17_F_FEET_1_7"):
				case joaat("DLC_MP_X17_F_JBIB_5_7"):
				case joaat("DLC_MP_X17_F_OUTFIT_MORPH_8"):
				case joaat("DLC_MP_X17_F_BERD_2_8"):
				case joaat("DLC_MP_X17_F_LEGS_1_8"):
				case joaat("DLC_MP_X17_F_FEET_1_8"):
				case joaat("DLC_MP_X17_F_JBIB_5_8"):
				case joaat("DLC_MP_X17_F_OUTFIT_MORPH_9"):
				case joaat("DLC_MP_X17_F_BERD_2_9"):
				case joaat("DLC_MP_X17_F_LEGS_1_9"):
				case joaat("DLC_MP_X17_F_FEET_1_9"):
				case joaat("DLC_MP_X17_F_JBIB_5_9"):
				case joaat("DLC_MP_X17_F_OUTFIT_MORPH_10"):
				case joaat("DLC_MP_X17_F_BERD_2_10"):
				case joaat("DLC_MP_X17_F_LEGS_1_10"):
				case joaat("DLC_MP_X17_F_FEET_1_10"):
				case joaat("DLC_MP_X17_F_JBIB_5_10"):
				case joaat("DLC_MP_X17_F_OUTFIT_MORPH_11"):
				case joaat("DLC_MP_X17_F_BERD_2_11"):
				case joaat("DLC_MP_X17_F_LEGS_1_11"):
				case joaat("DLC_MP_X17_F_FEET_1_11"):
				case joaat("DLC_MP_X17_F_JBIB_5_11"):
					if (Global_262145.f_23084 /* Tunable: CHRISTMAS2017_CLOTHING */)
					{
						return 0;
					}
					else
					{
						return 1;
					}
					break;
				case joaat("DLC_MP_X17_M_BERD_6_0"):
				case joaat("DLC_MP_X17_M_BERD_6_1"):
				case joaat("DLC_MP_X17_M_BERD_6_2"):
				case joaat("DLC_MP_X17_M_BERD_6_3"):
				case joaat("DLC_MP_X17_F_BERD_6_0"):
				case joaat("DLC_MP_X17_F_BERD_6_1"):
				case joaat("DLC_MP_X17_F_BERD_6_2"):
				case joaat("DLC_MP_X17_F_BERD_6_3"):
					if (Global_262145.f_23083 /* Tunable: -1018881951 */)
					{
						return 0;
					}
					else
					{
						return 1;
					}
					break;
			}
			switch (iParam1)
			{
				case joaat("DLC_MP_X17_M_OUTFIT_MORPH_0"):
				case joaat("DLC_MP_X17_M_BERD_2_0"):
				case joaat("DLC_MP_X17_M_LEGS_1_0"):
				case joaat("DLC_MP_X17_M_FEET_1_0"):
				case joaat("DLC_MP_X17_M_JBIB_5_0"):
				case joaat("DLC_MP_X17_F_OUTFIT_MORPH_0"):
				case joaat("DLC_MP_X17_F_BERD_2_0"):
				case joaat("DLC_MP_X17_F_LEGS_1_0"):
				case joaat("DLC_MP_X17_F_FEET_1_0"):
				case joaat("DLC_MP_X17_F_JBIB_5_0"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(18121, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_X17_M_OUTFIT_MORPH_1"):
				case joaat("DLC_MP_X17_M_BERD_2_1"):
				case joaat("DLC_MP_X17_M_LEGS_1_1"):
				case joaat("DLC_MP_X17_M_FEET_1_1"):
				case joaat("DLC_MP_X17_M_JBIB_5_1"):
				case joaat("DLC_MP_X17_F_OUTFIT_MORPH_1"):
				case joaat("DLC_MP_X17_F_BERD_2_1"):
				case joaat("DLC_MP_X17_F_LEGS_1_1"):
				case joaat("DLC_MP_X17_F_FEET_1_1"):
				case joaat("DLC_MP_X17_F_JBIB_5_1"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(18122, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_X17_M_OUTFIT_MORPH_2"):
				case joaat("DLC_MP_X17_M_BERD_2_2"):
				case joaat("DLC_MP_X17_M_LEGS_1_2"):
				case joaat("DLC_MP_X17_M_FEET_1_2"):
				case joaat("DLC_MP_X17_M_JBIB_5_2"):
				case joaat("DLC_MP_X17_F_OUTFIT_MORPH_2"):
				case joaat("DLC_MP_X17_F_BERD_2_2"):
				case joaat("DLC_MP_X17_F_LEGS_1_2"):
				case joaat("DLC_MP_X17_F_FEET_1_2"):
				case joaat("DLC_MP_X17_F_JBIB_5_2"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(18123, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_X17_M_OUTFIT_MORPH_3"):
				case joaat("DLC_MP_X17_M_BERD_2_3"):
				case joaat("DLC_MP_X17_M_LEGS_1_3"):
				case joaat("DLC_MP_X17_M_FEET_1_3"):
				case joaat("DLC_MP_X17_M_JBIB_5_3"):
				case joaat("DLC_MP_X17_F_OUTFIT_MORPH_3"):
				case joaat("DLC_MP_X17_F_BERD_2_3"):
				case joaat("DLC_MP_X17_F_LEGS_1_3"):
				case joaat("DLC_MP_X17_F_FEET_1_3"):
				case joaat("DLC_MP_X17_F_JBIB_5_3"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(18124, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_X17_M_OUTFIT_MORPH_4"):
				case joaat("DLC_MP_X17_M_BERD_2_4"):
				case joaat("DLC_MP_X17_M_LEGS_1_4"):
				case joaat("DLC_MP_X17_M_FEET_1_4"):
				case joaat("DLC_MP_X17_M_JBIB_5_4"):
				case joaat("DLC_MP_X17_F_OUTFIT_MORPH_4"):
				case joaat("DLC_MP_X17_F_BERD_2_4"):
				case joaat("DLC_MP_X17_F_LEGS_1_4"):
				case joaat("DLC_MP_X17_F_FEET_1_4"):
				case joaat("DLC_MP_X17_F_JBIB_5_4"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(18125, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
			}
			switch (iParam1)
			{
				case joaat("DLC_MP_X17_M_BERD_10_0"):
				case joaat("DLC_MP_X17_F_BERD_10_0"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(18134, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_X17_M_BERD_10_1"):
				case joaat("DLC_MP_X17_F_BERD_10_1"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(18135, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_X17_M_BERD_10_2"):
				case joaat("DLC_MP_X17_F_BERD_10_2"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(18136, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_X17_M_BERD_10_3"):
				case joaat("DLC_MP_X17_F_BERD_10_3"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(18137, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
			}
			break;
		case joaat("CU_GUNRUN_CLOTHES"):
			switch (iParam1)
			{
				case joaat("DLC_MP_GR_M_JBIB_19_0"):
				case joaat("DLC_MP_GR_F_JBIB_25_0"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(15417, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_GR_M_JBIB_19_1"):
				case joaat("DLC_MP_GR_F_JBIB_25_1"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(15418, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_GR_M_JBIB_20_0"):
				case joaat("DLC_MP_GR_F_JBIB_26_0"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(15425, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
			}
			switch (iParam1)
			{
				case joaat("DLC_MP_GR_M_DECL_5_0"):
				case joaat("DLC_MP_GR_F_DECL_5_0"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(15405, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_GR_M_DECL_5_1"):
				case joaat("DLC_MP_GR_F_DECL_5_1"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(15393, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_GR_M_DECL_5_2"):
				case joaat("DLC_MP_GR_F_DECL_5_2"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(15409, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_GR_M_DECL_5_3"):
				case joaat("DLC_MP_GR_F_DECL_5_3"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(15396, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_GR_M_DECL_5_4"):
				case joaat("DLC_MP_GR_F_DECL_5_4"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(15412, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_GR_M_DECL_5_5"):
				case joaat("DLC_MP_GR_F_DECL_5_5"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_1__::func_342(209, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_GR_M_DECL_5_6"):
				case joaat("DLC_MP_GR_F_DECL_5_6"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(15403, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_GR_M_DECL_5_7"):
				case joaat("DLC_MP_GR_F_DECL_5_7"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_1__::func_342(209, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_GR_M_DECL_5_8"):
				case joaat("DLC_MP_GR_F_DECL_5_8"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(15389, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_GR_M_DECL_5_9"):
				case joaat("DLC_MP_GR_F_DECL_5_9"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_1__::func_342(209, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_GR_M_DECL_5_10"):
				case joaat("DLC_MP_GR_F_DECL_5_10"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(15398, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
			}
			switch (iParam1)
			{
				case joaat("DLC_MP_GR_M_PHEAD_6_0"):
				case joaat("DLC_MP_GR_F_PHEAD_6_0"):
				case joaat("DLC_MP_GR_M_PHEAD_7_0"):
				case joaat("DLC_MP_GR_F_PHEAD_7_0"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(15400, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_GR_M_PHEAD_6_1"):
				case joaat("DLC_MP_GR_F_PHEAD_6_1"):
				case joaat("DLC_MP_GR_M_PHEAD_7_1"):
				case joaat("DLC_MP_GR_F_PHEAD_7_1"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_1__::func_342(209, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_GR_M_PHEAD_6_2"):
				case joaat("DLC_MP_GR_F_PHEAD_6_2"):
				case joaat("DLC_MP_GR_M_PHEAD_7_2"):
				case joaat("DLC_MP_GR_F_PHEAD_7_2"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(15408, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_GR_M_PHEAD_6_3"):
				case joaat("DLC_MP_GR_F_PHEAD_6_3"):
				case joaat("DLC_MP_GR_M_PHEAD_7_3"):
				case joaat("DLC_MP_GR_F_PHEAD_7_3"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_1__::func_342(209, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_GR_M_PHEAD_6_4"):
				case joaat("DLC_MP_GR_F_PHEAD_6_4"):
				case joaat("DLC_MP_GR_M_PHEAD_7_4"):
				case joaat("DLC_MP_GR_F_PHEAD_7_4"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(15411, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_GR_M_PHEAD_6_5"):
				case joaat("DLC_MP_GR_F_PHEAD_6_5"):
				case joaat("DLC_MP_GR_M_PHEAD_7_5"):
				case joaat("DLC_MP_GR_F_PHEAD_7_5"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(15397, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_GR_M_PHEAD_6_6"):
				case joaat("DLC_MP_GR_F_PHEAD_6_6"):
				case joaat("DLC_MP_GR_M_PHEAD_7_6"):
				case joaat("DLC_MP_GR_F_PHEAD_7_6"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(15413, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_GR_M_PHEAD_6_7"):
				case joaat("DLC_MP_GR_F_PHEAD_6_7"):
				case joaat("DLC_MP_GR_M_PHEAD_7_7"):
				case joaat("DLC_MP_GR_F_PHEAD_7_7"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(15391, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_GR_M_PHEAD_6_8"):
				case joaat("DLC_MP_GR_F_PHEAD_6_8"):
				case joaat("DLC_MP_GR_M_PHEAD_7_8"):
				case joaat("DLC_MP_GR_F_PHEAD_7_8"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(15388, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_GR_M_PHEAD_6_9"):
				case joaat("DLC_MP_GR_F_PHEAD_6_9"):
				case joaat("DLC_MP_GR_M_PHEAD_7_9"):
				case joaat("DLC_MP_GR_F_PHEAD_7_9"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_1__::func_342(209, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_GR_M_PHEAD_6_10"):
				case joaat("DLC_MP_GR_F_PHEAD_6_10"):
				case joaat("DLC_MP_GR_M_PHEAD_7_10"):
				case joaat("DLC_MP_GR_F_PHEAD_7_10"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(15401, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
			}
			break;
		case joaat("CU_IMPEXP_CLOTHES"):
			switch (iParam1)
			{
				case joaat("DLC_MP_IE_M_BERD_7_0"):
				case joaat("DLC_MP_IE_F_BERD_7_0"):
					if (__LIB_0__::func_137(27087, -1))
					{
						return 0;
					}
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(9443, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_IE_F_JBIB_17_4"):
				case joaat("DLC_MP_IE_F_JBIB_14_4"):
					if (__LIB_0__::func_137(27017, -1))
					{
						return 0;
					}
					break;
			}
			switch (iParam1)
			{
				case joaat("DLC_MP_IE_M_OUTFIT_0"):
				case joaat("DLC_MP_IE_M_BERD_11_0"):
				case joaat("DLC_MP_IE_M_LEGS_7_0"):
				case joaat("DLC_MP_IE_M_FEET_1_0"):
				case joaat("DLC_MP_IE_M_JBIB_15_0"):
					if (!Global_262145.f_19302 /* Tunable: ENABLE_2016_OUTFITS */ && !__LIB_2__::func_97(joaat("DLC_MP_IE_M_OUTFIT_0"), 1, 1, 1, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_IE_M_OUTFIT_1"):
				case joaat("DLC_MP_IE_M_BERD_11_1"):
				case joaat("DLC_MP_IE_M_LEGS_7_1"):
				case joaat("DLC_MP_IE_M_FEET_1_1"):
				case joaat("DLC_MP_IE_M_JBIB_15_1"):
					if (!Global_262145.f_19302 /* Tunable: ENABLE_2016_OUTFITS */ && !__LIB_2__::func_97(joaat("DLC_MP_IE_M_OUTFIT_1"), 1, 1, 1, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_IE_M_OUTFIT_2"):
				case joaat("DLC_MP_IE_M_BERD_11_2"):
				case joaat("DLC_MP_IE_M_LEGS_7_2"):
				case joaat("DLC_MP_IE_M_FEET_1_2"):
				case joaat("DLC_MP_IE_M_JBIB_15_2"):
					if (!Global_262145.f_19302 /* Tunable: ENABLE_2016_OUTFITS */ && !__LIB_2__::func_97(joaat("DLC_MP_IE_M_OUTFIT_2"), 1, 1, 1, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_IE_F_OUTFIT_0"):
				case joaat("DLC_MP_IE_F_BERD_11_0"):
				case joaat("DLC_MP_IE_F_LEGS_7_0"):
				case joaat("DLC_MP_IE_F_FEET_1_0"):
				case joaat("DLC_MP_IE_F_JBIB_15_0"):
					if (!Global_262145.f_19302 /* Tunable: ENABLE_2016_OUTFITS */ && !__LIB_2__::func_97(joaat("DLC_MP_IE_F_OUTFIT_0"), 1, 1, 1, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_IE_F_OUTFIT_1"):
				case joaat("DLC_MP_IE_F_BERD_11_1"):
				case joaat("DLC_MP_IE_F_LEGS_7_1"):
				case joaat("DLC_MP_IE_F_FEET_1_1"):
				case joaat("DLC_MP_IE_F_JBIB_15_1"):
					if (!Global_262145.f_19302 /* Tunable: ENABLE_2016_OUTFITS */ && !__LIB_2__::func_97(joaat("DLC_MP_IE_F_OUTFIT_1"), 1, 1, 1, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_IE_F_OUTFIT_2"):
				case joaat("DLC_MP_IE_F_BERD_11_2"):
				case joaat("DLC_MP_IE_F_LEGS_7_2"):
				case joaat("DLC_MP_IE_F_FEET_1_2"):
				case joaat("DLC_MP_IE_F_JBIB_15_2"):
					if (!Global_262145.f_19302 /* Tunable: ENABLE_2016_OUTFITS */ && !__LIB_2__::func_97(joaat("DLC_MP_IE_F_OUTFIT_2"), 1, 1, 1, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
			}
			break;
		case joaat("CU_BIKER_CLOTHES"):
			switch (iParam1)
			{
				case joaat("DLC_MP_BIKER_M_OUTFIT_0"):
				case joaat("DLC_MP_BIKER_M_OUTFIT_1"):
				case joaat("DLC_MP_BIKER_M_OUTFIT_2"):
				case joaat("DLC_MP_BIKER_M_OUTFIT_3"):
				case joaat("DLC_MP_BIKER_M_OUTFIT_4"):
				case joaat("DLC_MP_BIKER_M_OUTFIT_5"):
				case joaat("DLC_MP_BIKER_M_OUTFIT_6"):
				case joaat("DLC_MP_BIKER_M_OUTFIT_7"):
				case joaat("DLC_MP_BIKER_M_PHEAD_8_0"):
				case joaat("DLC_MP_BIKER_M_PHEAD_8_1"):
				case joaat("DLC_MP_BIKER_M_PHEAD_8_2"):
				case joaat("DLC_MP_BIKER_M_PHEAD_8_3"):
				case joaat("DLC_MP_BIKER_M_PHEAD_8_4"):
				case joaat("DLC_MP_BIKER_M_PHEAD_8_5"):
				case joaat("DLC_MP_BIKER_M_PHEAD_8_6"):
				case joaat("DLC_MP_BIKER_M_PHEAD_8_9"):
				case joaat("DLC_MP_BIKER_M_PHEAD_9_0"):
				case joaat("DLC_MP_BIKER_M_PHEAD_9_1"):
				case joaat("DLC_MP_BIKER_M_PHEAD_9_2"):
				case joaat("DLC_MP_BIKER_M_PHEAD_9_3"):
				case joaat("DLC_MP_BIKER_M_PHEAD_9_4"):
				case joaat("DLC_MP_BIKER_M_PHEAD_9_5"):
				case joaat("DLC_MP_BIKER_M_PHEAD_9_6"):
				case joaat("DLC_MP_BIKER_M_PHEAD_9_9"):
				case joaat("DLC_MP_BIKER_F_OUTFIT_0"):
				case joaat("DLC_MP_BIKER_F_OUTFIT_1"):
				case joaat("DLC_MP_BIKER_F_OUTFIT_2"):
				case joaat("DLC_MP_BIKER_F_OUTFIT_3"):
				case joaat("DLC_MP_BIKER_F_OUTFIT_4"):
				case joaat("DLC_MP_BIKER_F_OUTFIT_5"):
				case joaat("DLC_MP_BIKER_F_OUTFIT_6"):
				case joaat("DLC_MP_BIKER_F_OUTFIT_7"):
				case joaat("DLC_MP_BIKER_F_PHEAD_8_0"):
				case joaat("DLC_MP_BIKER_F_PHEAD_8_1"):
				case joaat("DLC_MP_BIKER_F_PHEAD_8_2"):
				case joaat("DLC_MP_BIKER_F_PHEAD_8_3"):
				case joaat("DLC_MP_BIKER_F_PHEAD_8_4"):
				case joaat("DLC_MP_BIKER_F_PHEAD_8_5"):
				case joaat("DLC_MP_BIKER_F_PHEAD_8_6"):
				case joaat("DLC_MP_BIKER_F_PHEAD_8_9"):
				case joaat("DLC_MP_BIKER_F_PHEAD_9_0"):
				case joaat("DLC_MP_BIKER_F_PHEAD_9_1"):
				case joaat("DLC_MP_BIKER_F_PHEAD_9_2"):
				case joaat("DLC_MP_BIKER_F_PHEAD_9_3"):
				case joaat("DLC_MP_BIKER_F_PHEAD_9_4"):
				case joaat("DLC_MP_BIKER_F_PHEAD_9_5"):
				case joaat("DLC_MP_BIKER_F_PHEAD_9_6"):
				case joaat("DLC_MP_BIKER_F_PHEAD_9_9"):
					if ((!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(9386, -1)) && Global_262145.f_17603 /* Tunable: -201556170 */ != 0)
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
			}
			switch (iParam1)
			{
				case joaat("DLC_MP_BIKER_M_DECL_0_0"):
				case joaat("DLC_MP_BIKER_F_DECL_0_0"):
					if ((!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(9375, -1)) && !Global_262145.f_17593 /* Tunable: 559860177 */)
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_BIKER_M_DECL_0_1"):
				case joaat("DLC_MP_BIKER_F_DECL_0_1"):
					if ((!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(9376, -1)) && !Global_262145.f_17594 /* Tunable: -1239730604 */)
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_BIKER_M_DECL_0_2"):
				case joaat("DLC_MP_BIKER_F_DECL_0_2"):
					if ((!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(9377, -1)) && !Global_262145.f_17595 /* Tunable: -1999951230 */)
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_BIKER_M_DECL_0_3"):
				case joaat("DLC_MP_BIKER_F_DECL_0_3"):
					if ((!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(9378, -1)) && !Global_262145.f_17596 /* Tunable: 1028164569 */)
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_BIKER_M_DECL_0_4"):
				case joaat("DLC_MP_BIKER_F_DECL_0_4"):
					if ((!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(9379, -1)) && !Global_262145.f_17597 /* Tunable: 1813059180 */)
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_BIKER_M_DECL_0_5"):
				case joaat("DLC_MP_BIKER_F_DECL_0_5"):
					if (__LIB_0__::func_137(27076, -1))
					{
						return 0;
					}
					if ((!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(9380, -1)) && !Global_262145.f_17598 /* Tunable: -1528114388 */)
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_BIKER_M_DECL_0_6"):
				case joaat("DLC_MP_BIKER_F_DECL_0_6"):
					if ((!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(9381, -1)) && !Global_262145.f_17599 /* Tunable: -1236322922 */)
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_BIKER_M_DECL_0_7"):
				case joaat("DLC_MP_BIKER_F_DECL_0_7"):
					if ((!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(9382, -1)) && !Global_262145.f_17600 /* Tunable: 2030112196 */)
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_BIKER_M_DECL_0_8"):
				case joaat("DLC_MP_BIKER_F_DECL_0_8"):
					if ((!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(9383, -1)) && !Global_262145.f_17601 /* Tunable: 310744591 */)
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
			}
			break;
		case joaat("CU_STUNT_CLOTHES"):
			switch (iParam1)
			{
				case joaat("DLC_MP_STUNT_M_OUTFIT_E_0"):
				case joaat("DLC_MP_STUNT_M_PHEAD_11_0"):
				case joaat("DLC_MP_STUNT_M_PHEAD_12_0"):
				case joaat("DLC_MP_STUNT_F_OUTFIT_E_0"):
				case joaat("DLC_MP_STUNT_F_PHEAD_11_0"):
				case joaat("DLC_MP_STUNT_F_PHEAD_12_0"):
					if ((!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(7595, -1)) && !Global_262145.f_16832 /* Tunable: AVAILABLE_PURCHASE_JUMPSUIT_WHITE */)
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_STUNT_M_OUTFIT_E_1"):
				case joaat("DLC_MP_STUNT_M_PHEAD_11_1"):
				case joaat("DLC_MP_STUNT_M_PHEAD_12_1"):
				case joaat("DLC_MP_STUNT_F_OUTFIT_E_1"):
				case joaat("DLC_MP_STUNT_F_PHEAD_11_1"):
				case joaat("DLC_MP_STUNT_F_PHEAD_12_1"):
					if (__LIB_0__::func_137(26977, -1))
					{
						return 0;
					}
					if ((!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(7596, -1)) && !Global_262145.f_16833 /* Tunable: AVAILABLE_PURCHASE_JUMPSUIT_BLUE */)
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_STUNT_M_OUTFIT_E_2"):
				case joaat("DLC_MP_STUNT_M_PHEAD_11_2"):
				case joaat("DLC_MP_STUNT_M_PHEAD_12_2"):
				case joaat("DLC_MP_STUNT_F_OUTFIT_E_2"):
				case joaat("DLC_MP_STUNT_F_PHEAD_11_2"):
				case joaat("DLC_MP_STUNT_F_PHEAD_12_2"):
					if ((!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(7597, -1)) && !Global_262145.f_16834 /* Tunable: AVAILABLE_PURCHASE_JUMPSUIT_RED */)
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_STUNT_M_OUTFIT_E_3"):
				case joaat("DLC_MP_STUNT_M_PHEAD_11_3"):
				case joaat("DLC_MP_STUNT_M_PHEAD_12_3"):
				case joaat("DLC_MP_STUNT_F_OUTFIT_E_3"):
				case joaat("DLC_MP_STUNT_F_PHEAD_11_3"):
				case joaat("DLC_MP_STUNT_F_PHEAD_12_3"):
					if ((!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(7599, -1)) && !Global_262145.f_16836 /* Tunable: AVAILABLE_PURCHASE_JUMPSUIT_BLACK */)
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_STUNT_M_OUTFIT_E_4"):
				case joaat("DLC_MP_STUNT_M_PHEAD_11_4"):
				case joaat("DLC_MP_STUNT_M_PHEAD_12_4"):
				case joaat("DLC_MP_STUNT_F_OUTFIT_E_4"):
				case joaat("DLC_MP_STUNT_F_PHEAD_11_4"):
				case joaat("DLC_MP_STUNT_F_PHEAD_12_4"):
					if ((!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(7600, -1)) && !Global_262145.f_16837 /* Tunable: AVAILABLE_PURCHASE_JUMPSUIT_PINK */)
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_STUNT_M_OUTFIT_E_5"):
				case joaat("DLC_MP_STUNT_M_PHEAD_13_0"):
				case joaat("DLC_MP_STUNT_M_PHEAD_14_0"):
				case joaat("DLC_MP_STUNT_F_OUTFIT_E_5"):
				case joaat("DLC_MP_STUNT_F_PHEAD_13_0"):
				case joaat("DLC_MP_STUNT_F_PHEAD_14_0"):
					if ((!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(7598, -1)) && !Global_262145.f_16835 /* Tunable: AVAILABLE_PURCHASE_JUMPSUIT_GOLD */)
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_STUNT_M_OUTFIT_E_6"):
				case joaat("DLC_MP_STUNT_M_PHEAD_13_1"):
				case joaat("DLC_MP_STUNT_M_PHEAD_14_1"):
				case joaat("DLC_MP_STUNT_F_OUTFIT_E_6"):
				case joaat("DLC_MP_STUNT_F_PHEAD_13_1"):
				case joaat("DLC_MP_STUNT_F_PHEAD_14_1"):
					if ((!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(7601, -1)) && !Global_262145.f_16838 /* Tunable: AVAILABLE_PURCHASE_JUMPSUIT_SILVER */)
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
			}
			break;
		case joaat("CU_EXE_CLOTHES"):
			switch (iParam1)
			{
				case joaat("DLC_MP_EXEC_F_JBIB_15_0"):
				case joaat("DLC_MP_EXEC_F_LEGS_1_0"):
				case joaat("DLC_MP_EXEC_M_JBIB_15_0"):
				case joaat("DLC_MP_EXEC_M_LEGS_1_0"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(7482, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_EXEC_F_JBIB_15_1"):
				case joaat("DLC_MP_EXEC_F_LEGS_1_1"):
				case joaat("DLC_MP_EXEC_M_JBIB_15_1"):
				case joaat("DLC_MP_EXEC_M_LEGS_1_1"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(7483, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_EXEC_F_JBIB_15_2"):
				case joaat("DLC_MP_EXEC_F_LEGS_1_2"):
				case joaat("DLC_MP_EXEC_M_JBIB_15_2"):
				case joaat("DLC_MP_EXEC_M_LEGS_1_2"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(7484, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_EXEC_F_JBIB_15_3"):
				case joaat("DLC_MP_EXEC_F_LEGS_1_3"):
				case joaat("DLC_MP_EXEC_M_JBIB_15_3"):
				case joaat("DLC_MP_EXEC_M_LEGS_1_3"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(7485, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_EXEC_F_JBIB_15_4"):
				case joaat("DLC_MP_EXEC_F_LEGS_1_4"):
				case joaat("DLC_MP_EXEC_M_JBIB_15_4"):
				case joaat("DLC_MP_EXEC_M_LEGS_1_4"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(7486, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_EXEC_F_JBIB_15_5"):
				case joaat("DLC_MP_EXEC_F_LEGS_1_5"):
				case joaat("DLC_MP_EXEC_M_JBIB_15_5"):
				case joaat("DLC_MP_EXEC_M_LEGS_1_5"):
					if ((!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(7487, -1)) && !__LIB_0__::func_137(9441, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_EXEC_F_JBIB_15_6"):
				case joaat("DLC_MP_EXEC_F_LEGS_1_6"):
				case joaat("DLC_MP_EXEC_M_JBIB_15_6"):
				case joaat("DLC_MP_EXEC_M_LEGS_1_6"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(7488, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_EXEC_F_JBIB_15_7"):
				case joaat("DLC_MP_EXEC_F_LEGS_1_7"):
				case joaat("DLC_MP_EXEC_M_JBIB_15_7"):
				case joaat("DLC_MP_EXEC_M_LEGS_1_7"):
					if ((!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(7489, -1)) && !__LIB_0__::func_137(9442, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_EXEC_F_JBIB_15_8"):
				case joaat("DLC_MP_EXEC_F_LEGS_1_8"):
				case joaat("DLC_MP_EXEC_M_JBIB_15_8"):
				case joaat("DLC_MP_EXEC_M_LEGS_1_8"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(7490, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_EXEC_F_JBIB_15_9"):
				case joaat("DLC_MP_EXEC_F_LEGS_1_9"):
				case joaat("DLC_MP_EXEC_M_JBIB_15_9"):
				case joaat("DLC_MP_EXEC_M_LEGS_1_9"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(7491, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_EXEC_F_JBIB_15_10"):
				case joaat("DLC_MP_EXEC_F_LEGS_1_10"):
				case joaat("DLC_MP_EXEC_M_JBIB_15_10"):
				case joaat("DLC_MP_EXEC_M_LEGS_1_10"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(7492, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_EXEC_F_JBIB_15_11"):
				case joaat("DLC_MP_EXEC_F_LEGS_1_11"):
				case joaat("DLC_MP_EXEC_M_JBIB_15_11"):
				case joaat("DLC_MP_EXEC_M_LEGS_1_11"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(7493, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_EXEC_F_JBIB_15_12"):
				case joaat("DLC_MP_EXEC_F_LEGS_1_12"):
				case joaat("DLC_MP_EXEC_M_JBIB_15_12"):
				case joaat("DLC_MP_EXEC_M_LEGS_1_12"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(7494, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_EXEC_F_JBIB_15_13"):
				case joaat("DLC_MP_EXEC_F_LEGS_1_13"):
				case joaat("DLC_MP_EXEC_M_JBIB_15_13"):
				case joaat("DLC_MP_EXEC_M_LEGS_1_13"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(7495, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_EXEC_F_JBIB_16_0"):
				case joaat("DLC_MP_EXEC_M_JBIB_16_0"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(7515, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_EXEC_F_JBIB_16_1"):
				case joaat("DLC_MP_EXEC_M_JBIB_16_1"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(7516, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_EXEC_F_JBIB_16_2"):
				case joaat("DLC_MP_EXEC_M_JBIB_16_2"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(7517, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_EXEC_F_JBIB_16_3"):
				case joaat("DLC_MP_EXEC_M_JBIB_16_3"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(7518, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_EXEC_F_JBIB_16_4"):
				case joaat("DLC_MP_EXEC_M_JBIB_16_4"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(7519, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_EXEC_F_JBIB_16_5"):
				case joaat("DLC_MP_EXEC_M_JBIB_16_5"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(7520, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_EXEC_F_JBIB_16_6"):
				case joaat("DLC_MP_EXEC_M_JBIB_16_6"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(7521, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_EXEC_F_JBIB_16_7"):
				case joaat("DLC_MP_EXEC_M_JBIB_16_7"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(7522, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_EXEC_F_JBIB_16_8"):
				case joaat("DLC_MP_EXEC_M_JBIB_16_8"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(7523, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_EXEC_F_JBIB_16_9"):
				case joaat("DLC_MP_EXEC_M_JBIB_16_9"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(7524, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_EXEC_F_JBIB_16_10"):
				case joaat("DLC_MP_EXEC_M_JBIB_16_10"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(7525, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_EXEC_F_JBIB_16_11"):
				case joaat("DLC_MP_EXEC_M_JBIB_16_11"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(7526, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_EXEC_F_JBIB_16_12"):
				case joaat("DLC_MP_EXEC_M_JBIB_16_12"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(7527, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_EXEC_F_JBIB_16_13"):
				case joaat("DLC_MP_EXEC_M_JBIB_16_13"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(7528, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
			}
			break;
		case joaat("CU_LOW_CLOTHES"):
			switch (iParam1)
			{
				case joaat("DLC_MP_LOW_F_PHEAD_1_0"):
				case joaat("DLC_MP_LOW_M_PHEAD_1_0"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(4247, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_LOW_F_PHEAD_1_1"):
				case joaat("DLC_MP_LOW_M_PHEAD_1_1"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(4248, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_LOW_F_PHEAD_1_2"):
				case joaat("DLC_MP_LOW_M_PHEAD_1_2"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(4249, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_LOW_F_PHEAD_1_3"):
				case joaat("DLC_MP_LOW_M_PHEAD_1_3"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(4250, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_LOW_F_PHEAD_1_4"):
				case joaat("DLC_MP_LOW_M_PHEAD_1_4"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(4251, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_LOW_F_PHEAD_1_5"):
				case joaat("DLC_MP_LOW_M_PHEAD_1_5"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(4252, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_LOW_F_PHEAD_1_6"):
				case joaat("DLC_MP_LOW_M_PHEAD_1_6"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(4253, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_LOW_F_PHEAD_1_7"):
				case joaat("DLC_MP_LOW_M_PHEAD_1_7"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(4254, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_LOW_F_PHEAD_1_8"):
				case joaat("DLC_MP_LOW_M_PHEAD_1_8"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(4255, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_LOW_F_PHEAD_1_9"):
				case joaat("DLC_MP_LOW_M_PHEAD_1_9"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(4256, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
			}
			break;
		case joaat("CU_REPLAY_CLOTHES"):
			return 1;
			break;
		case joaat("CU_BEAST_CLOTHES"):
			return 1;
			break;
		case joaat("CU_HEIST_CLOTHES"):
			return 1;
			break;
		case joaat("CU_XMAS_CLOTHES"):
		case joaat("CU_XMAS2_CLOTHES"):
		case joaat("CU_XMAS3_CLOTHES"):
		case joaat("CU_XMAS4_CLOTHES"):
			switch (iParam1)
			{
				case joaat("DLC_MP_XMAS3_M_JBIB_0_0"):
				case joaat("DLC_MP_XMAS3_M_JBIB_0_1"):
				case joaat("DLC_MP_XMAS3_M_JBIB_0_2"):
				case joaat("DLC_MP_XMAS3_M_FEET_0_0"):
				case joaat("DLC_MP_XMAS3_M_LEGS_0_0"):
				case joaat("DLC_MP_XMAS3_M_LEGS_0_1"):
				case joaat("DLC_MP_XMAS3_M_LEGS_0_2"):
				case joaat("DLC_MP_XMAS3_F_JBIB_0_0"):
				case joaat("DLC_MP_XMAS3_F_JBIB_0_1"):
				case joaat("DLC_MP_XMAS3_F_JBIB_0_2"):
				case joaat("DLC_MP_XMAS3_F_FEET_0_0"):
				case joaat("DLC_MP_XMAS3_F_LEGS_0_0"):
				case joaat("DLC_MP_XMAS3_F_LEGS_0_1"):
				case joaat("DLC_MP_XMAS3_F_LEGS_0_2"):
					if (Global_262145.f_12709 /* Tunable: XMAS2015_COSTUME */)
					{
						return 0;
					}
					else
					{
						return 1;
					}
					break;
			}
			switch (iParam1)
			{
				case joaat("DLC_MP_XMAS3_F_JBIB_1_0"):
				case joaat("DLC_MP_XMAS3_M_JBIB_1_0"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(110, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_XMAS3_F_JBIB_1_1"):
				case joaat("DLC_MP_XMAS3_M_JBIB_1_1"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(111, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_XMAS3_F_JBIB_1_2"):
				case joaat("DLC_MP_XMAS3_M_JBIB_1_2"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(112, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
			}
			switch (iParam1)
			{
				case joaat("DLC_MP_XMAS3_M_JBIB_1_3"):
				case joaat("DLC_MP_XMAS3_M_JBIB_1_4"):
				case joaat("DLC_MP_XMAS3_M_JBIB_1_5"):
				case joaat("DLC_MP_XMAS3_M_JBIB_1_6"):
				case joaat("DLC_MP_XMAS3_M_JBIB_1_7"):
				case joaat("DLC_MP_XMAS3_M_JBIB_1_8"):
				case joaat("DLC_MP_XMAS3_M_JBIB_1_9"):
				case joaat("DLC_MP_XMAS3_M_JBIB_1_10"):
				case joaat("DLC_MP_XMAS3_M_JBIB_1_11"):
				case joaat("DLC_MP_XMAS3_M_JBIB_1_12"):
				case joaat("DLC_MP_XMAS3_M_JBIB_1_13"):
				case joaat("DLC_MP_XMAS3_M_JBIB_1_14"):
				case joaat("DLC_MP_XMAS3_M_JBIB_1_15"):
				case joaat("DLC_MP_XMAS3_F_JBIB_1_3"):
				case joaat("DLC_MP_XMAS3_F_JBIB_1_4"):
				case joaat("DLC_MP_XMAS3_F_JBIB_1_5"):
				case joaat("DLC_MP_XMAS3_F_JBIB_1_6"):
				case joaat("DLC_MP_XMAS3_F_JBIB_1_7"):
				case joaat("DLC_MP_XMAS3_F_JBIB_1_8"):
				case joaat("DLC_MP_XMAS3_F_JBIB_1_9"):
				case joaat("DLC_MP_XMAS3_F_JBIB_1_10"):
				case joaat("DLC_MP_XMAS3_F_JBIB_1_11"):
				case joaat("DLC_MP_XMAS3_F_JBIB_1_12"):
				case joaat("DLC_MP_XMAS3_F_JBIB_1_13"):
				case joaat("DLC_MP_XMAS3_F_JBIB_1_14"):
				case joaat("DLC_MP_XMAS3_F_JBIB_1_15"):
					if (Global_262145.f_12710 /* Tunable: XMAS2015_PYJAMAS */)
					{
						return 0;
					}
					else
					{
						return 1;
					}
					break;
			}
			switch (iParam1)
			{
				case joaat("DLC_MP_XMAS2_F_PHEAD_4_0"):
				case joaat("DLC_MP_XMAS2_F_PHEAD_5_0"):
				case joaat("DLC_MP_XMAS2_M_PHEAD_4_0"):
				case joaat("DLC_MP_XMAS2_M_PHEAD_5_0"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(4333, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
			}
			switch (iParam1)
			{
				case joaat("DLC_MP_XMAS2_F_PHEAD_4_3"):
				case joaat("DLC_MP_XMAS2_F_PHEAD_5_3"):
				case joaat("DLC_MP_XMAS2_M_PHEAD_4_3"):
				case joaat("DLC_MP_XMAS2_M_PHEAD_5_3"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(4334, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
			}
			if (iParam0 == joaat("CU_XMAS4_CLOTHES"))
			{
				if (!Global_262145.f_19301 /* Tunable: CHRISTMAS2016_CLOTHING */)
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (Global_262145.f_9396 /* Tunable: DISABLE_CHRISTMAS_CLOTHING */)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case joaat("CU_XMAS2_MASKS"):
		case joaat("CU_XMAS3_MASKS"):
		case joaat("CU_XMAS4_MASKS"):
			switch (iParam1)
			{
				case joaat("DLC_MP_XMAS3_M_BERD_10_0"):
				case joaat("DLC_MP_XMAS3_F_BERD_10_0"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(4335, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
			}
			switch (iParam1)
			{
				case joaat("DLC_MP_XMAS2_M_BERD_1_0"):
				case joaat("DLC_MP_XMAS2_F_BERD_1_0"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(3750, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
			}
			if (iParam0 == joaat("CU_XMAS2_MASKS"))
			{
				switch (iParam1)
				{
					case joaat("DLC_MP_XMAS2_M_BERD_2_0"):
					case joaat("DLC_MP_XMAS2_F_BERD_2_0"):
						if (__LIB_0__::func_137(27088, -1))
						{
							return 0;
						}
						break;
					}
			}
			if (iParam0 == joaat("CU_XMAS4_MASKS"))
			{
				if (!Global_262145.f_19300 /* Tunable: XMAS2016_MASKS */)
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (iParam0 != joaat("CU_XMAS3_MASKS"))
			{
				if (Global_262145.f_9397 /* Tunable: DISABLE_CHRISTMAS_MASKS */)
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (!Global_262145.f_12708 /* Tunable: XMAS2015_MASKS */)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case joaat("CU_VAL_CLOTHES"):
			if (__LIB_13__::func_615())
			{
				switch (iParam1)
				{
					case joaat("DLC_MP_VAL_F_JBIB2_0"):
					case joaat("DLC_MP_VAL_F_JBIB2_1"):
					case joaat("DLC_MP_VAL_F_JBIB2_2"):
					case joaat("DLC_MP_VAL_F_ACCS0_0"):
					case joaat("DLC_MP_VAL_F_ACCS0_1"):
					case joaat("DLC_MP_VAL_F_ACCS0_2"):
					case joaat("DLC_MP_VAL_F_ACCS1_0"):
					case joaat("DLC_MP_VAL_F_ACCS1_1"):
					case joaat("DLC_MP_VAL_F_ACCS1_2"):
						return 1;
						break;
					}
			}
			switch (iParam1)
			{
				case joaat("DLC_MP_VAL_M_BERD0_0"):
				case joaat("DLC_MP_VAL_M_BERD0_1"):
				case joaat("DLC_MP_VAL_M_BERD0_2"):
				case joaat("DLC_MP_VAL_M_BERD1_0"):
				case joaat("DLC_MP_VAL_M_BERD1_1"):
				case joaat("DLC_MP_VAL_M_BERD1_2"):
				case joaat("DLC_MP_VAL_M_BERD2_0"):
				case joaat("DLC_MP_VAL_F_BERD0_0"):
				case joaat("DLC_MP_VAL_F_BERD0_1"):
				case joaat("DLC_MP_VAL_F_BERD0_2"):
				case joaat("DLC_MP_VAL_F_BERD1_0"):
				case joaat("DLC_MP_VAL_F_BERD1_1"):
				case joaat("DLC_MP_VAL_F_BERD1_2"):
				case joaat("DLC_MP_VAL_F_BERD2_0"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !Global_262145.f_12029 /* Tunable: TURN_ON_VALENTINE_MASKS */)
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
			}
			if (((!Global_262145.f_7058 /* Tunable: TURN_ON_VALENTINES_EVENT */ && !__LIB_2__::func_97(iParam1, 1, 1, 1, -1)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam1, joaat("MULTI_DECAL"), iParam2)) && !Global_262145.f_12031 /* Tunable: TURN_ON_VALENTINE_CLOTHING */)
			{
				return 1;
			}
			break;
		case joaat("CU_VAL2_CLOTHES"):
			if ((!Global_262145.f_13393 /* Tunable: TURN_ON_VALENTINE_2016_CLOTHING */ && !__LIB_2__::func_97(iParam1, 1, 1, 1, -1)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam1, joaat("MULTI_DECAL"), iParam2))
			{
				return 1;
			}
			break;
		case joaat("CU_INDI_CLOTHES"):
			switch (iParam1)
			{
				case joaat("DLC_MP_IND_F_PHEAD_6_0"):
				case joaat("DLC_MP_IND_M_PHEAD_6_0"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(3594, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_IND_F_PHEAD_6_1"):
				case joaat("DLC_MP_IND_M_PHEAD_6_1"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(3595, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_IND_F_PHEAD_6_2"):
				case joaat("DLC_MP_IND_M_PHEAD_6_2"):
					if (iParam1 == joaat("DLC_MP_IND_F_PHEAD_6_2"))
					{
						if (__LIB_0__::func_137(27085, -1))
						{
							return 0;
						}
					}
					if (iParam1 == joaat("DLC_MP_IND_M_PHEAD_6_2"))
					{
						if (__LIB_0__::func_137(27086, -1))
						{
							return 0;
						}
					}
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(3596, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_IND_F_PHEAD_6_3"):
				case joaat("DLC_MP_IND_M_PHEAD_6_3"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(3597, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_IND_F_PHEAD_6_4"):
				case joaat("DLC_MP_IND_M_PHEAD_6_4"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(3598, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_IND_F_PHEAD_6_5"):
				case joaat("DLC_MP_IND_M_PHEAD_6_5"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(3599, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_IND_F_HAIR0_0"):
				case joaat("DLC_MP_IND_F_HAIR0_1"):
				case joaat("DLC_MP_IND_F_HAIR0_2"):
				case joaat("DLC_MP_IND_F_HAIR0_3"):
				case joaat("DLC_MP_IND_F_HAIR0_4"):
				case joaat("DLC_MP_IND_M_HAIR0_0"):
				case joaat("DLC_MP_IND_M_HAIR0_1"):
				case joaat("DLC_MP_IND_M_HAIR0_2"):
				case joaat("DLC_MP_IND_M_HAIR0_3"):
				case joaat("DLC_MP_IND_M_HAIR0_4"):
					if (((!Global_262145.f_8258 /* Tunable: TOGGLE_ACTIVATE_INDEPENDENCE_PACK */ && !__LIB_2__::func_97(iParam1, 1, 1, 1, -1)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam1, joaat("MULTI_DECAL"), iParam2)) && !__LIB_0__::func_137(3606, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case joaat("DLC_MP_IND_F_BERD_0_0"):
				case joaat("DLC_MP_IND_F_BERD_0_1"):
				case joaat("DLC_MP_IND_F_BERD_1_0"):
				case joaat("DLC_MP_IND_F_BERD_1_1"):
				case joaat("DLC_MP_IND_F_BERD_2_0"):
				case joaat("DLC_MP_IND_F_BERD_2_1"):
				case joaat("DLC_MP_IND_F_BERD_3_0"):
				case joaat("DLC_MP_IND_F_BERD_3_1"):
				case joaat("DLC_MP_IND_F_BERD_4_0"):
				case joaat("DLC_MP_IND_F_BERD_4_1"):
				case joaat("DLC_MP_IND_F_BERD_5_0"):
				case joaat("DLC_MP_IND_F_BERD_5_1"):
				case joaat("DLC_MP_IND_M_BERD_0_0"):
				case joaat("DLC_MP_IND_M_BERD_0_1"):
				case joaat("DLC_MP_IND_M_BERD_1_0"):
				case joaat("DLC_MP_IND_M_BERD_1_1"):
				case joaat("DLC_MP_IND_M_BERD_2_0"):
				case joaat("DLC_MP_IND_M_BERD_2_1"):
				case joaat("DLC_MP_IND_M_BERD_3_0"):
				case joaat("DLC_MP_IND_M_BERD_3_1"):
				case joaat("DLC_MP_IND_M_BERD_4_0"):
				case joaat("DLC_MP_IND_M_BERD_4_1"):
				case joaat("DLC_MP_IND_M_BERD_5_0"):
				case joaat("DLC_MP_IND_M_BERD_5_1"):
					if (!Global_262145.f_12055 /* Tunable: TURN_ON_INDEPENDENCE_MASKS */ && !__LIB_2__::func_97(iParam1, 1, 1, 1, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
			}
			if ((!Global_262145.f_8258 /* Tunable: TOGGLE_ACTIVATE_INDEPENDENCE_PACK */ && !__LIB_2__::func_97(iParam1, 1, 1, 1, -1)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam1, joaat("MULTI_DECAL"), iParam2))
			{
				return 1;
			}
			break;
		case joaat("CU_LTS_CLOTHES"):
			switch (iParam1)
			{
				case joaat("DLC_MP_LTS_M_BERD_2_0"):
				case joaat("DLC_MP_LTS_F_BERD_2_0"):
					if (!__LIB_2__::func_97(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(3616, -1))
					{
						return 1;
					}
					break;
				case joaat("DLC_MP_LTS_M_BERD_0_0"):
				case joaat("DLC_MP_LTS_M_BERD_0_1"):
				case joaat("DLC_MP_LTS_M_BERD_0_2"):
				case joaat("DLC_MP_LTS_M_BERD_0_3"):
				case joaat("DLC_MP_LTS_M_BERD_0_4"):
				case joaat("DLC_MP_LTS_F_BERD_0_0"):
				case joaat("DLC_MP_LTS_F_BERD_0_1"):
				case joaat("DLC_MP_LTS_F_BERD_0_2"):
				case joaat("DLC_MP_LTS_F_BERD_0_3"):
				case joaat("DLC_MP_LTS_F_BERD_0_4"):
					return 1;
					break;
			}
			break;
		case joaat("CU_HAL_CLOTHES"):
			if ((!Global_262145.f_12048 /* Tunable: TURN_ON_HALLOWEEN_CLOTHING */ && !__LIB_2__::func_97(iParam1, 1, 1, 1, -1)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam1, joaat("MULTI_DECAL"), iParam2))
			{
				return 1;
			}
			break;
		case joaat("CU_HAL_MASKS"):
			if (!Global_262145.f_12039 /* Tunable: TURN_ON_HALLOWEEN_MASKS */ && !__LIB_2__::func_97(iParam1, 1, 1, 1, -1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_462(var uParam0, int iParam1)//Position - 0x54B3E
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	int iVar7;
	struct<12> Var8;
	struct<2> Var9;
	float fVar10;
	struct<2> Var11;
	struct<2> Var12;
	struct<6> Var13;
	int iVar14;
	int iVar15;
	int iVar16;
	struct<4> Var17;
	if (PED::IS_PED_INJURED(iParam1))
	{
		return;
	}
	if ((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/)) || __LIB_3__::func_528())
	{
		func_543(iParam1, uParam0);
		__LIB_42__::func_325(uParam0);
		if ((uParam0->f_525 == 5 || uParam0->f_525 == 12) || uParam0->f_525 == 9)
		{
			uParam0->f_710 = 1;
		}
		else
		{
			uParam0->f_710 = 0;
		}
		func_539(iParam1, uParam0->f_525);
		return;
	}
	iVar0 = 0;
	fVar1 = -1f;
	iVar7 = ENTITY::GET_ENTITY_MODEL(iParam1);
	__LIB_14__::func_405(&(uParam0->f_236), 300);
	switch (uParam0->f_525)
	{
		case 5:
			uParam0->f_116.f_15 = 0;
			__LIB_3__::func_567(0, 0, 0, 1);
			if (__LIB_3__::func_51())
			{
				if (Global_4539961 == uParam0->f_116.f_1)
				{
					iVar0 = 1;
				}
				else
				{
					uParam0->f_116.f_1 = Global_4539961;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					__LIB_3__::func_110(uParam0->f_116.f_1, 1, 1);
				}
			}
			if (((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/) || (uParam0->f_236.f_1 < -100 && uParam0->f_236.f_4)) || (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/) && uParam0->f_236.f_8)) || __LIB_14__::func_181(uParam0->f_236.f_8, 0, 0))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				uParam0->f_236.f_8 = 0;
				uParam0->f_236.f_4 = 0;
				uParam0->f_236.f_20 = MISC::GET_GAME_TIMER();
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					uParam0->f_236.f_24 = NETWORK::GET_NETWORK_TIME();
				}
				uParam0->f_116.f_1 = (uParam0->f_116.f_1 - 1);
				while (uParam0->f_116.f_1 >= 0 && !__LIB_36__::func_851(iVar7, __LIB_36__::func_852(uParam0->f_116.f_1), uParam0->f_523))
				{
					uParam0->f_116.f_1 = (uParam0->f_116.f_1 - 1);
				}
				if (!__LIB_36__::func_851(iVar7, __LIB_36__::func_852(uParam0->f_116.f_1), uParam0->f_523))
				{
					uParam0->f_116.f_1 = 6;
				}
				while (uParam0->f_116.f_1 >= 0 && !__LIB_36__::func_851(iVar7, __LIB_36__::func_852(uParam0->f_116.f_1), uParam0->f_523))
				{
					uParam0->f_116.f_1 = (uParam0->f_116.f_1 - 1);
				}
				__LIB_3__::func_110(uParam0->f_116.f_1, 1, 1);
			}
			else if (((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/) || (uParam0->f_236.f_1 > 100 && uParam0->f_236.f_4)) || (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/) && uParam0->f_236.f_9)) || __LIB_14__::func_180(uParam0->f_236.f_9, 0, 0))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				uParam0->f_236.f_9 = 0;
				uParam0->f_236.f_4 = 0;
				uParam0->f_236.f_20 = MISC::GET_GAME_TIMER();
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					uParam0->f_236.f_24 = NETWORK::GET_NETWORK_TIME();
				}
				uParam0->f_116.f_1++;
				while (uParam0->f_116.f_1 <= 6 && !__LIB_36__::func_851(iVar7, __LIB_36__::func_852(uParam0->f_116.f_1), uParam0->f_523))
				{
					uParam0->f_116.f_1++;
				}
				if (!__LIB_36__::func_851(iVar7, __LIB_36__::func_852(uParam0->f_116.f_1), uParam0->f_523))
				{
					uParam0->f_116.f_1 = 0;
				}
				while (uParam0->f_116.f_1 <= 6 && !__LIB_36__::func_851(iVar7, __LIB_36__::func_852(uParam0->f_116.f_1), uParam0->f_523))
				{
					uParam0->f_116.f_1++;
				}
				__LIB_3__::func_110(uParam0->f_116.f_1, 1, 1);
			}
			else if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) || iVar0 == 1)
			{
				iVar0 = 0;
				AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT" /* GXT: Filter List */, "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				uParam0->f_715 = -1;
				uParam0->f_525 = __LIB_36__::func_852(uParam0->f_116.f_1);
				uParam0->f_590 = 1;
				uParam0->f_116.f_1 = 0;
				uParam0->f_638 = 0;
				if (uParam0->f_525 == 9)
				{
					func_539(iParam1, uParam0->f_525);
				}
				if ((uParam0->f_525 == 5 || uParam0->f_525 == 12) || uParam0->f_525 == 9)
				{
					uParam0->f_710 = 1;
				}
				else
				{
					uParam0->f_710 = 0;
				}
				if (uParam0->f_525 == 12)
				{
					while (uParam0->f_116.f_1 <= 2 && !__LIB_36__::func_851(iVar7, __LIB_36__::func_850(uParam0->f_116.f_1), uParam0->f_523))
					{
						uParam0->f_116.f_1++;
					}
				}
			}
			break;
		case 12:
			uParam0->f_116.f_15 = 0;
			__LIB_3__::func_567(0, 0, 0, 1);
			if (__LIB_3__::func_51())
			{
				if (Global_4539961 == uParam0->f_116.f_1)
				{
					iVar0 = 1;
				}
				else
				{
					uParam0->f_116.f_1 = Global_4539961;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					__LIB_3__::func_110(uParam0->f_116.f_1, 1, 1);
					uParam0->f_725 = __LIB_5__::func_392();
				}
			}
			if (((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/) || (uParam0->f_236.f_1 < -100 && uParam0->f_236.f_4)) || (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/) && uParam0->f_236.f_8)) || __LIB_14__::func_181(uParam0->f_236.f_8, 0, 0))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				uParam0->f_236.f_8 = 0;
				uParam0->f_236.f_4 = 0;
				uParam0->f_236.f_20 = MISC::GET_GAME_TIMER();
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					uParam0->f_236.f_24 = NETWORK::GET_NETWORK_TIME();
				}
				uParam0->f_116.f_1 = (uParam0->f_116.f_1 - 1);
				while (uParam0->f_116.f_1 >= 0 && !__LIB_36__::func_851(iVar7, __LIB_36__::func_850(uParam0->f_116.f_1), uParam0->f_523))
				{
					uParam0->f_116.f_1 = (uParam0->f_116.f_1 - 1);
				}
				if (!__LIB_36__::func_851(iVar7, __LIB_36__::func_850(uParam0->f_116.f_1), uParam0->f_523))
				{
					uParam0->f_116.f_1 = 2;
				}
				while (uParam0->f_116.f_1 >= 0 && !__LIB_36__::func_851(iVar7, __LIB_36__::func_850(uParam0->f_116.f_1), uParam0->f_523))
				{
					uParam0->f_116.f_1 = (uParam0->f_116.f_1 - 1);
				}
				__LIB_3__::func_110(uParam0->f_116.f_1, 1, 1);
				uParam0->f_725 = __LIB_5__::func_392();
			}
			else if (((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/) || (uParam0->f_236.f_1 > 100 && uParam0->f_236.f_4)) || (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/) && uParam0->f_236.f_9)) || __LIB_14__::func_180(uParam0->f_236.f_9, 0, 0))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				uParam0->f_236.f_9 = 0;
				uParam0->f_236.f_4 = 0;
				uParam0->f_236.f_20 = MISC::GET_GAME_TIMER();
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					uParam0->f_236.f_24 = NETWORK::GET_NETWORK_TIME();
				}
				uParam0->f_116.f_1++;
				while (uParam0->f_116.f_1 <= 2 && !__LIB_36__::func_851(iVar7, __LIB_36__::func_850(uParam0->f_116.f_1), uParam0->f_523))
				{
					uParam0->f_116.f_1++;
				}
				if (!__LIB_36__::func_851(iVar7, __LIB_36__::func_850(uParam0->f_116.f_1), uParam0->f_523))
				{
					uParam0->f_116.f_1 = 0;
				}
				while (uParam0->f_116.f_1 <= 2 && !__LIB_36__::func_851(iVar7, __LIB_36__::func_850(uParam0->f_116.f_1), uParam0->f_523))
				{
					uParam0->f_116.f_1++;
				}
				__LIB_3__::func_110(uParam0->f_116.f_1, 1, 1);
				uParam0->f_725 = __LIB_5__::func_392();
			}
			else if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) || iVar0 == 1)
			{
				iVar0 = 0;
				AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT" /* GXT: Filter List */, "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				uParam0->f_525 = __LIB_36__::func_850(uParam0->f_116.f_1);
				if ((uParam0->f_525 == 5 || uParam0->f_525 == 12) || uParam0->f_525 == 9)
				{
					uParam0->f_710 = 1;
				}
				else
				{
					uParam0->f_710 = 0;
				}
				uParam0->f_590 = 1;
				uParam0->f_116.f_1 = 0;
			}
			break;
		default:
			if ((uParam0->f_116.f_1 != -1 && uParam0->f_493) && !uParam0->f_492)
			{
				if (__LIB_42__::func_314(iVar7, uParam0->f_525, uParam0->f_116.f_1, &Var8, __LIB_36__::func_861(uParam0->f_523)))
				{
					func_529(Var8.f_11, 2, -1);
				}
			}
			uParam0->f_116.f_15 = 0;
			__LIB_3__::func_567(0, 0, 0, 1);
			if (__LIB_3__::func_51())
			{
				if (Global_4539961 == uParam0->f_116.f_1)
				{
					iVar0 = 1;
				}
				else
				{
					uParam0->f_116.f_1 = Global_4539961;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					if (uParam0->f_493)
					{
						uParam0->f_590 = 1;
						uParam0->f_594 = 1;
						uParam0->f_595 = __LIB_5__::func_392();
					}
					uParam0->f_492 = !func_399(uParam0, iVar7, uParam0->f_525, uParam0->f_116.f_1);
					uParam0->f_493 = (!uParam0->f_492 && !func_395(uParam0, iVar7, uParam0->f_525, uParam0->f_116.f_1));
					if (__LIB_42__::func_314(iVar7, uParam0->f_525, uParam0->f_116.f_1, &Var9, __LIB_36__::func_861(uParam0->f_523)))
					{
						uParam0->f_494 = __LIB_36__::func_849(iVar7, uParam0->f_525, &Var9);
					}
					else
					{
						uParam0->f_494 = 0;
					}
					func_526(uParam0, iParam1, uParam0->f_525, uParam0->f_116.f_1);
					if (uParam0->f_590)
					{
						uParam0->f_709 = 1;
						func_509(uParam0, iParam1, 0, 0);
						uParam0->f_590 = 0;
					}
					else
					{
						func_499(uParam0, iVar7, 1);
					}
					__LIB_3__::func_110(uParam0->f_116.f_1, 1, 1);
					uParam0->f_725 = __LIB_5__::func_392();
					if (__LIB_42__::func_314(iVar7, uParam0->f_525, uParam0->f_116.f_1, &Var9, __LIB_36__::func_861(uParam0->f_523)))
					{
						uParam0->f_566 = { Var9.f_1 };
					}
					__LIB_43__::func_480(iVar7, uParam0->f_525, uParam0->f_116.f_1, __LIB_36__::func_861(uParam0->f_523));
				}
			}
			if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
			{
				if (__LIB_36__::func_826(uParam0))
				{
					if (HUD::GET_MOUSE_EVENT(uParam0->f_624, &iVar4, &iVar5, &uVar6))
					{
						if (iVar4 == 5)
						{
							if (iVar5 > -1)
							{
								uParam0->f_635 = __LIB_42__::func_309(iVar7, uParam0->f_525, iVar5, uParam0->f_523);
								uParam0->f_709 = 1;
								func_526(uParam0, iParam1, uParam0->f_525, uParam0->f_116.f_1);
								if (uParam0->f_709)
								{
									uParam0->f_709 = 1;
									func_509(uParam0, iParam1, 0, 0);
									uParam0->f_590 = 0;
								}
							}
							else if (iVar5 == -1)
							{
								PAD::SET_CONTROL_VALUE_NEXT_FRAME(2 /*FRONTEND_CONTROL*/, 205 /*INPUT_FRONTEND_LB*/, 1f);
							}
							else if (iVar5 == -2)
							{
								PAD::SET_CONTROL_VALUE_NEXT_FRAME(2 /*FRONTEND_CONTROL*/, 206 /*INPUT_FRONTEND_RB*/, 1f);
							}
						}
					}
				}
				if (__LIB_43__::func_479(uParam0, iVar7))
				{
					if (HUD::GET_MOUSE_EVENT(uParam0->f_614, &iVar4, &iVar5, &uVar6))
					{
						if (iVar4 == 5)
						{
							if (iVar5 > -1)
							{
								uParam0->f_634 = __LIB_42__::func_309(iVar7, uParam0->f_525, iVar5, uParam0->f_523);
								uParam0->f_709 = 1;
								func_526(uParam0, iParam1, uParam0->f_525, uParam0->f_116.f_1);
								if (uParam0->f_709)
								{
									uParam0->f_709 = 1;
									func_509(uParam0, iParam1, 0, 0);
									uParam0->f_590 = 0;
								}
							}
							else if (iVar5 == -1)
							{
								PAD::SET_CONTROL_VALUE_NEXT_FRAME(2 /*FRONTEND_CONTROL*/, 207 /*INPUT_FRONTEND_LT*/, 1f);
							}
							else if (iVar5 == -2)
							{
								PAD::SET_CONTROL_VALUE_NEXT_FRAME(2 /*FRONTEND_CONTROL*/, 208 /*INPUT_FRONTEND_RT*/, 1f);
							}
						}
					}
				}
				if (__LIB_43__::func_478(uParam0, iVar7))
				{
					fVar2 = (0.113f - (Global_23149 / 2f));
					fVar3 = (__LIB_13__::func_631() + (0.255f - (0.5972f / 2f)));
					fVar1 = __LIB_36__::func_903(4, fVar2, fVar3, Global_23149, 0.15f, 1f);
					if (fVar1 >= 0f && fVar1 != fLocal_138)
					{
						if (uParam0->f_525 != 6)
						{
							uParam0->f_639 = fVar1;
							uParam0->f_709 = 1;
							func_526(uParam0, iParam1, uParam0->f_525, uParam0->f_116.f_1);
							func_499(uParam0, iVar7, 1);
						}
						AUDIO::PLAY_SOUND_FRONTEND(iLocal_137, "CONTINUOUS_SLIDER", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					}
					else
					{
						if (uParam0->f_709)
						{
							uParam0->f_709 = 1;
							func_509(uParam0, iParam1, 0, 0);
							uParam0->f_590 = 0;
						}
						AUDIO::STOP_SOUND(iLocal_137);
					}
					fLocal_138 = fVar1;
				}
			}
			fVar10 = ((1f - 0.15f) / 20f);
			if (((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/) || (uParam0->f_236.f_1 < -100 && uParam0->f_236.f_4)) || (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/) && uParam0->f_236.f_8)) || __LIB_14__::func_181(uParam0->f_236.f_8, 0, 0))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				uParam0->f_236.f_8 = 0;
				uParam0->f_236.f_4 = 0;
				uParam0->f_236.f_20 = MISC::GET_GAME_TIMER();
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					uParam0->f_236.f_24 = NETWORK::GET_NETWORK_TIME();
				}
				uParam0->f_116.f_1 = (uParam0->f_116.f_1 - 1);
				while (uParam0->f_116.f_1 >= 0 && !func_404(iVar7, uParam0->f_525, uParam0->f_116.f_1, uParam0->f_523))
				{
					uParam0->f_116.f_1 = (uParam0->f_116.f_1 - 1);
				}
				if (!func_404(iVar7, uParam0->f_525, uParam0->f_116.f_1, uParam0->f_523))
				{
					uParam0->f_116.f_1 = (__LIB_36__::func_834(iVar7, uParam0->f_525) - 1);
				}
				while (uParam0->f_116.f_1 >= 0 && !func_404(iVar7, uParam0->f_525, uParam0->f_116.f_1, uParam0->f_523))
				{
					uParam0->f_116.f_1 = (uParam0->f_116.f_1 - 1);
				}
				if (uParam0->f_116.f_1 < 0)
				{
					uParam0->f_116.f_1 = (__LIB_36__::func_834(iVar7, uParam0->f_525) - 1);
				}
				while (uParam0->f_116.f_1 >= 0 && !func_404(iVar7, uParam0->f_525, uParam0->f_116.f_1, uParam0->f_523))
				{
					uParam0->f_116.f_1 = (uParam0->f_116.f_1 - 1);
				}
				if (uParam0->f_493)
				{
					uParam0->f_590 = 1;
					uParam0->f_594 = 1;
					uParam0->f_595 = __LIB_5__::func_392();
				}
				uParam0->f_492 = !func_399(uParam0, iVar7, uParam0->f_525, uParam0->f_116.f_1);
				uParam0->f_493 = (!uParam0->f_492 && !func_395(uParam0, iVar7, uParam0->f_525, uParam0->f_116.f_1));
				if (__LIB_42__::func_314(iVar7, uParam0->f_525, uParam0->f_116.f_1, &Var11, __LIB_36__::func_861(uParam0->f_523)))
				{
					uParam0->f_494 = __LIB_36__::func_849(iVar7, uParam0->f_525, &Var11);
				}
				else
				{
					uParam0->f_494 = 0;
				}
				func_526(uParam0, iParam1, uParam0->f_525, uParam0->f_116.f_1);
				if (uParam0->f_590)
				{
					uParam0->f_709 = 1;
					func_509(uParam0, iParam1, 0, 0);
					uParam0->f_590 = 0;
				}
				else
				{
					func_499(uParam0, iVar7, 1);
				}
				__LIB_3__::func_110(uParam0->f_116.f_1, 1, 1);
				uParam0->f_725 = __LIB_5__::func_392();
				if (__LIB_42__::func_314(iVar7, uParam0->f_525, uParam0->f_116.f_1, &Var11, __LIB_36__::func_861(uParam0->f_523)))
				{
					uParam0->f_566 = { Var11.f_1 };
				}
				__LIB_43__::func_480(iVar7, uParam0->f_525, uParam0->f_116.f_1, __LIB_36__::func_861(uParam0->f_523));
			}
			else if (((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/) || (uParam0->f_236.f_1 > 100 && uParam0->f_236.f_4)) || (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/) && uParam0->f_236.f_9)) || __LIB_14__::func_180(uParam0->f_236.f_9, 0, 0))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				uParam0->f_236.f_9 = 0;
				uParam0->f_236.f_4 = 0;
				uParam0->f_236.f_20 = MISC::GET_GAME_TIMER();
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					uParam0->f_236.f_24 = NETWORK::GET_NETWORK_TIME();
				}
				uParam0->f_116.f_1++;
				while (uParam0->f_116.f_1 <= (__LIB_36__::func_834(iVar7, uParam0->f_525) - 1) && !func_404(iVar7, uParam0->f_525, uParam0->f_116.f_1, uParam0->f_523))
				{
					uParam0->f_116.f_1++;
				}
				if (!func_404(iVar7, uParam0->f_525, uParam0->f_116.f_1, uParam0->f_523))
				{
					uParam0->f_116.f_1 = 0;
				}
				while (uParam0->f_116.f_1 <= (__LIB_36__::func_834(iVar7, uParam0->f_525) - 1) && !func_404(iVar7, uParam0->f_525, uParam0->f_116.f_1, uParam0->f_523))
				{
					uParam0->f_116.f_1++;
				}
				if (uParam0->f_116.f_1 >= __LIB_36__::func_834(iVar7, uParam0->f_525))
				{
					uParam0->f_116.f_1 = 0;
				}
				while (uParam0->f_116.f_1 <= (__LIB_36__::func_834(iVar7, uParam0->f_525) - 1) && !func_404(iVar7, uParam0->f_525, uParam0->f_116.f_1, uParam0->f_523))
				{
					uParam0->f_116.f_1++;
				}
				if (uParam0->f_493)
				{
					uParam0->f_590 = 1;
					uParam0->f_594 = 1;
					uParam0->f_595 = __LIB_5__::func_392();
				}
				uParam0->f_492 = !func_399(uParam0, iVar7, uParam0->f_525, uParam0->f_116.f_1);
				uParam0->f_493 = (!uParam0->f_492 && !func_395(uParam0, iVar7, uParam0->f_525, uParam0->f_116.f_1));
				if (__LIB_42__::func_314(iVar7, uParam0->f_525, uParam0->f_116.f_1, &Var12, __LIB_36__::func_861(uParam0->f_523)))
				{
					uParam0->f_494 = __LIB_36__::func_849(iVar7, uParam0->f_525, &Var12);
				}
				else
				{
					uParam0->f_494 = 0;
				}
				func_526(uParam0, iParam1, uParam0->f_525, uParam0->f_116.f_1);
				if (uParam0->f_590)
				{
					uParam0->f_709 = 1;
					func_509(uParam0, iParam1, 0, 0);
					uParam0->f_590 = 0;
				}
				else
				{
					func_499(uParam0, iVar7, 1);
				}
				__LIB_3__::func_110(uParam0->f_116.f_1, 1, 1);
				uParam0->f_725 = __LIB_5__::func_392();
				if (__LIB_42__::func_314(iVar7, uParam0->f_525, uParam0->f_116.f_1, &Var12, __LIB_36__::func_861(uParam0->f_523)))
				{
					uParam0->f_566 = { Var12.f_1 };
				}
				__LIB_43__::func_480(iVar7, uParam0->f_525, uParam0->f_116.f_1, __LIB_36__::func_861(uParam0->f_523));
			}
			else if ((__LIB_42__::func_308(uParam0, iVar7) && !uParam0->f_525 == 14) && (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 207 /*INPUT_FRONTEND_LT*/) || (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 207 /*INPUT_FRONTEND_LT*/) && uParam0->f_236.f_14)))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				uParam0->f_236.f_14 = 0;
				uParam0->f_236.f_16 = MISC::GET_GAME_TIMER();
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					uParam0->f_236.f_17 = NETWORK::GET_NETWORK_TIME();
				}
				uParam0->f_634 = (uParam0->f_634 - 1);
				while (uParam0->f_634 >= 0 && !__LIB_36__::func_844(uParam0->f_525, uParam0->f_634, uParam0->f_523))
				{
					uParam0->f_634 = (uParam0->f_634 - 1);
				}
				if (!__LIB_36__::func_844(uParam0->f_525, uParam0->f_634, uParam0->f_523))
				{
					uParam0->f_634 = (__LIB_36__::func_843(iVar7, uParam0->f_525) - 1);
				}
				while (uParam0->f_634 >= 0 && !__LIB_36__::func_844(uParam0->f_525, uParam0->f_634, uParam0->f_523))
				{
					uParam0->f_634 = (uParam0->f_634 - 1);
				}
				if (uParam0->f_634 < 0)
				{
					uParam0->f_634 = (__LIB_36__::func_843(iVar7, uParam0->f_525) - 1);
				}
				while (uParam0->f_634 >= 0 && !__LIB_36__::func_844(uParam0->f_525, uParam0->f_634, uParam0->f_523))
				{
					uParam0->f_634 = (uParam0->f_634 - 1);
				}
				if (!uParam0->f_638)
				{
					uParam0->f_635 = PED::GET_DEFAULT_SECONDARY_TINT_FOR_BARBER(uParam0->f_634);
				}
				else
				{
					uParam0->f_636 = uParam0->f_635;
				}
				uParam0->f_709 = 1;
				func_526(uParam0, iParam1, uParam0->f_525, uParam0->f_116.f_1);
				if (uParam0->f_709)
				{
					uParam0->f_709 = 1;
					func_509(uParam0, iParam1, 0, 0);
					uParam0->f_590 = 0;
				}
			}
			else if ((__LIB_42__::func_308(uParam0, iVar7) && !uParam0->f_525 == 14) && (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 208 /*INPUT_FRONTEND_RT*/) || (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 208 /*INPUT_FRONTEND_RT*/) && uParam0->f_236.f_15)))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				uParam0->f_236.f_15 = 0;
				uParam0->f_236.f_16 = MISC::GET_GAME_TIMER();
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					uParam0->f_236.f_17 = NETWORK::GET_NETWORK_TIME();
				}
				uParam0->f_634++;
				while (uParam0->f_634 <= (__LIB_36__::func_843(iVar7, uParam0->f_525) - 1) && !__LIB_36__::func_844(uParam0->f_525, uParam0->f_634, uParam0->f_523))
				{
					uParam0->f_634++;
				}
				if (!__LIB_36__::func_844(uParam0->f_525, uParam0->f_634, uParam0->f_523))
				{
					uParam0->f_634 = 0;
				}
				while (uParam0->f_634 <= (__LIB_36__::func_843(iVar7, uParam0->f_525) - 1) && !__LIB_36__::func_844(uParam0->f_525, uParam0->f_634, uParam0->f_523))
				{
					uParam0->f_634++;
				}
				if (uParam0->f_634 >= __LIB_36__::func_843(iVar7, uParam0->f_525))
				{
					uParam0->f_634 = 0;
				}
				while (uParam0->f_634 <= (__LIB_36__::func_843(iVar7, uParam0->f_525) - 1) && !__LIB_36__::func_844(uParam0->f_525, uParam0->f_634, uParam0->f_523))
				{
					uParam0->f_634++;
				}
				if (!uParam0->f_638)
				{
					uParam0->f_635 = PED::GET_DEFAULT_SECONDARY_TINT_FOR_BARBER(uParam0->f_634);
				}
				else
				{
					uParam0->f_636 = uParam0->f_635;
				}
				uParam0->f_709 = 1;
				func_526(uParam0, iParam1, uParam0->f_525, uParam0->f_116.f_1);
				if (uParam0->f_709)
				{
					uParam0->f_709 = 1;
					func_509(uParam0, iParam1, 0, 0);
					uParam0->f_590 = 0;
				}
			}
			else if (__LIB_42__::func_308(uParam0, iVar7) && (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 205 /*INPUT_FRONTEND_LB*/) || (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 205 /*INPUT_FRONTEND_LB*/) && uParam0->f_236.f_12)))
			{
				if (uParam0->f_525 == 6)
				{
					if (uParam0->f_638)
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
						uParam0->f_236.f_12 = 0;
						uParam0->f_236.f_16 = MISC::GET_GAME_TIMER();
						if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						{
							uParam0->f_236.f_17 = NETWORK::GET_NETWORK_TIME();
						}
						uParam0->f_635 = (uParam0->f_635 - 1);
						while (uParam0->f_635 >= 0 && !__LIB_36__::func_844(uParam0->f_525, uParam0->f_635, uParam0->f_523))
						{
							uParam0->f_635 = (uParam0->f_635 - 1);
						}
						if (!__LIB_36__::func_844(uParam0->f_525, uParam0->f_635, uParam0->f_523))
						{
							uParam0->f_635 = (__LIB_36__::func_843(iVar7, uParam0->f_525) - 1);
						}
						while (uParam0->f_635 >= 0 && !__LIB_36__::func_844(uParam0->f_525, uParam0->f_635, uParam0->f_523))
						{
							uParam0->f_635 = (uParam0->f_635 - 1);
						}
						if (uParam0->f_635 < 0)
						{
							uParam0->f_635 = (__LIB_36__::func_843(iVar7, uParam0->f_525) - 1);
						}
						while (uParam0->f_635 >= 0 && !__LIB_36__::func_844(uParam0->f_525, uParam0->f_635, uParam0->f_523))
						{
							uParam0->f_635 = (uParam0->f_635 - 1);
						}
						uParam0->f_709 = 1;
					}
				}
				else
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					uParam0->f_236.f_12 = 0;
					uParam0->f_236.f_16 = MISC::GET_GAME_TIMER();
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						uParam0->f_236.f_17 = NETWORK::GET_NETWORK_TIME();
					}
					uParam0->f_639 = (uParam0->f_639 - fVar10);
					if (uParam0->f_639 < 0.15f)
					{
						uParam0->f_639 = 0.15f;
					}
					uParam0->f_709 = 1;
				}
				func_526(uParam0, iParam1, uParam0->f_525, uParam0->f_116.f_1);
				if (uParam0->f_709)
				{
					uParam0->f_709 = 1;
					func_509(uParam0, iParam1, 0, 0);
					uParam0->f_590 = 0;
				}
			}
			else if (__LIB_42__::func_308(uParam0, iVar7) && (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 206 /*INPUT_FRONTEND_RB*/) || (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 206 /*INPUT_FRONTEND_RB*/) && uParam0->f_236.f_13)))
			{
				if (uParam0->f_525 == 6)
				{
					if (uParam0->f_638)
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
						uParam0->f_236.f_13 = 0;
						uParam0->f_236.f_16 = MISC::GET_GAME_TIMER();
						if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						{
							uParam0->f_236.f_17 = NETWORK::GET_NETWORK_TIME();
						}
						uParam0->f_635++;
						while (uParam0->f_635 <= (__LIB_36__::func_843(iVar7, uParam0->f_525) - 1) && !__LIB_36__::func_844(uParam0->f_525, uParam0->f_635, uParam0->f_523))
						{
							uParam0->f_635++;
						}
						if (!__LIB_36__::func_844(uParam0->f_525, uParam0->f_635, uParam0->f_523))
						{
							uParam0->f_635 = 0;
						}
						while (uParam0->f_635 <= (__LIB_36__::func_843(iVar7, uParam0->f_525) - 1) && !__LIB_36__::func_844(uParam0->f_525, uParam0->f_635, uParam0->f_523))
						{
							uParam0->f_635++;
						}
						if (uParam0->f_635 >= __LIB_36__::func_843(iVar7, uParam0->f_525))
						{
							uParam0->f_635 = 0;
						}
						while (uParam0->f_635 <= (__LIB_36__::func_843(iVar7, uParam0->f_525) - 1) && !__LIB_36__::func_844(uParam0->f_525, uParam0->f_635, uParam0->f_523))
						{
							uParam0->f_635++;
						}
						uParam0->f_709 = 1;
					}
				}
				else
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					uParam0->f_236.f_13 = 0;
					uParam0->f_236.f_16 = MISC::GET_GAME_TIMER();
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						uParam0->f_236.f_17 = NETWORK::GET_NETWORK_TIME();
					}
					uParam0->f_639 = (uParam0->f_639 + fVar10);
					if (uParam0->f_639 > 1f)
					{
						uParam0->f_639 = 1f;
					}
					uParam0->f_709 = 1;
				}
				func_526(uParam0, iParam1, uParam0->f_525, uParam0->f_116.f_1);
				if (uParam0->f_709)
				{
					uParam0->f_709 = 1;
					func_509(uParam0, iParam1, 0, 0);
					uParam0->f_590 = 0;
				}
			}
			else if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 203 /*INPUT_FRONTEND_X*/))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				uParam0->f_638 = !uParam0->f_638;
				if (uParam0->f_525 == 6)
				{
					if (!uParam0->f_638)
					{
						uParam0->f_636 = uParam0->f_635;
						uParam0->f_635 = PED::GET_DEFAULT_SECONDARY_TINT_FOR_BARBER(uParam0->f_634);
					}
					else
					{
						uParam0->f_635 = uParam0->f_636;
					}
				}
				uParam0->f_709 = 1;
				func_526(uParam0, iParam1, uParam0->f_525, uParam0->f_116.f_1);
				if (uParam0->f_709)
				{
					func_499(uParam0, iVar7, 1);
					uParam0->f_709 = 0;
				}
			}
			else if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) || iVar0 == 1)
			{
				iVar0 = 0;
				AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT" /* GXT: Filter List */, "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				__LIB_42__::func_314(iVar7, uParam0->f_525, uParam0->f_116.f_1, &Var13, __LIB_36__::func_861(uParam0->f_523));
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && __LIB_3__::func_538())
				{
					if (__LIB_13__::func_376(0))
					{
						Var13.f_0 = 0;
					}
				}
				iVar14 = 0;
				iVar15 = -1;
				iVar16 = -1;
				StringCopy(&Var17, "", 16);
				if (uParam0->f_525 == 11)
				{
					if (Var13.f_5 == 4)
					{
						iVar14 = 1;
						iVar15 = 13;
						iVar16 = 5;
						StringCopy(&Var17, "NONE" /* GXT: None */, 16);
					}
					else if (Var13.f_5 == 5)
					{
						iVar14 = 1;
						iVar15 = 11;
						iVar16 = 4;
						StringCopy(&Var17, "NONE" /* GXT: None */, 16);
					}
				}
				if (func_625(iVar7, &Var13, uParam0))
				{
					switch (uParam0->f_525)
					{
						case 7:
							__LIB_1__::func_789("HAIR_CUR_1", 4000, 0);
							break;
						case 6:
							__LIB_1__::func_789("HAIR_CUR_2", 4000, 0);
							break;
						case 11:
						case 13:
						case 14:
						case 15:
							__LIB_1__::func_789("HAIR_CUR_3", 4000, 0);
							break;
						default:
							__LIB_1__::func_789("HAIR_CUR_9", 4000, 0);
							break;
					}
					uParam0->f_274 = __LIB_36__::func_904(uParam0->f_116.f_1);
				}
				else if (!func_399(uParam0, iVar7, uParam0->f_525, uParam0->f_116.f_1))
				{
					__LIB_1__::func_789("HAIR_LOCK", 4000, 0);
				}
				else if (!__LIB_36__::func_915(Var13.f_0))
				{
					switch (uParam0->f_525)
					{
						case 7:
							__LIB_1__::func_789("HAIR_AFF_1", 4000, 0);
							break;
						case 6:
							__LIB_1__::func_789("HAIR_AFF_2", 4000, 0);
							break;
						case 11:
						case 13:
						case 14:
						case 15:
							__LIB_1__::func_789("HAIR_AFF_3", 4000, 0);
							break;
						default:
							__LIB_1__::func_789("HAIR_AFF_9", 4000, 0);
							break;
					}
					__LIB_13__::func_630(MISC::GET_HASH_KEY(&(Global_100493.f_1384)), Global_100493.f_1388, MISC::GET_HASH_KEY(__LIB_12__::func_769(*uParam0, 0, 0)));
					__LIB_2__::func_820(0, 10, 3);
				}
				else if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && __LIB_3__::func_538()) && !__LIB_16__::func_564(joaat("NET_SHOP_TTYPE_BASKET"), __LIB_36__::func_842(uParam0->f_525, Var13.f_5), __LIB_42__::func_307(uParam0->f_525, uParam0->f_566, 0, __LIB_43__::func_477(uParam0->f_525, uParam0->f_116.f_1, uParam0->f_523, 0)), joaat("NET_SHOP_ACTION_BUY_ITEM"), 1, Var13.f_0, 1, 4, __LIB_37__::func_676(uParam0->f_525, Var13.f_5), 3))
				{
					__LIB_1__::func_34(__LIB_3__::func_534());
					__LIB_1__::func_789("CSHOP_FAIL" /* GXT: Sorry - this item is unavailable. */, 4000, 0);
				}
				else if (((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && __LIB_3__::func_538()) && iVar14) && !__LIB_16__::func_564(joaat("NET_SHOP_TTYPE_BASKET"), __LIB_36__::func_842(iVar15, iVar16), __LIB_42__::func_307(iVar15, Var17, 0, 1), joaat("NET_SHOP_ACTION_BUY_ITEM"), 1, 0, 1, 4, __LIB_37__::func_676(iVar15, iVar16), 3))
				{
					__LIB_1__::func_34(__LIB_3__::func_534());
					__LIB_1__::func_789("CSHOP_FAIL" /* GXT: Sorry - this item is unavailable. */, 4000, 0);
				}
				else if (((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && __LIB_3__::func_538()) && __LIB_13__::func_376(0)) && !__LIB_16__::func_564(joaat("NET_SHOP_TTYPE_BASKET"), __LIB_36__::func_842(uParam0->f_525, Var13.f_5), __LIB_37__::func_676(uParam0->f_525, Var13.f_5), joaat("NET_SHOP_ACTION_SPEND"), 1, 0, 1, 4, joaat("PO_COUPON_HAIRCUT"), 3))
				{
					__LIB_1__::func_34(__LIB_3__::func_534());
					__LIB_1__::func_789("CSHOP_FAIL" /* GXT: Sorry - this item is unavailable. */, 4000, 0);
				}
				else
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && __LIB_3__::func_538())
					{
						uParam0->f_116.f_25 = 1;
						uParam0->f_116.f_26 = 0;
					}
					uParam0->f_116.f_15 = 1;
					func_543(iParam1, uParam0);
				}
			}
			break;
	}
}

void func_499(var uParam0, int iParam1, bool bParam2)//Position - 0x57ADF
{
	char* sVar0;
	char* sVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	char* sVar5;
	int iVar6;
	struct<6> Var7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	bool bVar13;
	bool bVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	__LIB_36__::func_905(uParam0);
	sVar0 = "FACE_OPAC" /* GXT: Opacity */;
	sVar1 = "FACE_COLOUR" /* GXT: Color (~1~ of ~1~) */;
	fVar2 = ((uParam0->f_639 - 0.15f) * (1f / (1f - 0.15f)));
	if (fVar2 >= 1f)
	{
		fVar2 = 1f;
	}
	else if (fVar2 <= 0f)
	{
		fVar2 = 0f;
	}
	fVar2 = (fVar2 * 100f);
	iVar3 = func_508(iParam1, uParam0->f_525, uParam0->f_634, uParam0->f_523);
	uParam0->f_711 = 0;
	iVar4 = 0;
	while (iVar4 < __LIB_36__::func_843(iParam1, uParam0->f_525))
	{
		if (__LIB_36__::func_844(uParam0->f_525, iVar4, uParam0->f_523))
		{
			uParam0->f_711++;
		}
		iVar4++;
	}
	sVar5 = "";
	iVar6 = -1;
	switch (uParam0->f_525)
	{
		case 6:
			sVar0 = "";
			fVar2 = -1f;
			sVar5 = "FACE_COLHILI" /* GXT: Highlights (~1~ of ~1~) */;
			if (__LIB_42__::func_308(uParam0, iParam1))
			{
				if (uParam0->f_634 == -1)
				{
					uParam0->f_634 = func_106(2153, -1, 0);
				}
				if (uParam0->f_635 == -1)
				{
					uParam0->f_635 = func_106(2160, -1, 0);
					uParam0->f_636 = uParam0->f_635;
				}
				uParam0->f_639 = 1f;
				sVar5 = "FACE_COLHILI" /* GXT: Highlights (~1~ of ~1~) */;
				iVar3 = func_508(iParam1, uParam0->f_525, uParam0->f_634, uParam0->f_523);
				iVar6 = func_508(iParam1, uParam0->f_525, uParam0->f_635, uParam0->f_523);
			}
			else
			{
				sVar0 = "";
				fVar2 = -1f;
				sVar1 = "";
				iVar3 = -1;
				sVar5 = "";
				iVar6 = -1;
				uParam0->f_711 = -1;
			}
			break;
		case 10:
			sVar0 = "";
			fVar2 = -1f;
			sVar1 = "";
			iVar3 = -1;
			uParam0->f_711 = -1;
			uParam0->f_634 = __LIB_42__::func_309(iParam1, uParam0->f_525, iVar3, uParam0->f_523);
			uParam0->f_635 = __LIB_42__::func_309(iParam1, uParam0->f_525, iVar6, uParam0->f_523);
			uParam0->f_636 = uParam0->f_635;
			uParam0->f_639 = 1f;
			break;
		case 14:
			sVar1 = "";
			iVar3 = -1;
			uParam0->f_711 = -1;
			if (uParam0->f_116.f_1 == 0)
			{
				sVar0 = "";
				fVar2 = -1f;
			}
			uParam0->f_634 = __LIB_42__::func_309(iParam1, uParam0->f_525, iVar3, uParam0->f_523);
			uParam0->f_635 = __LIB_42__::func_309(iParam1, uParam0->f_525, iVar6, uParam0->f_523);
			uParam0->f_636 = uParam0->f_635;
			break;
		case 11:
			if (__LIB_42__::func_314(iParam1, uParam0->f_525, uParam0->f_116.f_1, &Var7, __LIB_36__::func_861(uParam0->f_523)))
			{
				if (!__LIB_42__::func_308(uParam0, iParam1) || Var7.f_5 != 5)
				{
					sVar1 = "";
					iVar3 = -1;
					uParam0->f_711 = -1;
					if (uParam0->f_116.f_1 == 0)
					{
						sVar0 = "";
						fVar2 = -1f;
					}
					uParam0->f_634 = __LIB_42__::func_309(iParam1, uParam0->f_525, iVar3, uParam0->f_523);
					uParam0->f_635 = __LIB_42__::func_309(iParam1, uParam0->f_525, iVar6, uParam0->f_523);
					uParam0->f_636 = uParam0->f_635;
				}
				else
				{
					uParam0->f_634 = __LIB_42__::func_309(iParam1, uParam0->f_525, iVar3, uParam0->f_523);
					if (uParam0->f_634 == -1)
					{
						uParam0->f_634 = func_507(Var7.f_5, &(uParam0->f_637), -1);
						iVar3 = func_508(iParam1, uParam0->f_525, uParam0->f_634, uParam0->f_523);
					}
				}
			}
			break;
		case 13:
		case 15:
		case 7:
		case 8:
		case 9:
			if (__LIB_42__::func_314(iParam1, uParam0->f_525, uParam0->f_116.f_1, &Var7, __LIB_36__::func_861(uParam0->f_523)))
			{
				if (!__LIB_42__::func_308(uParam0, iParam1))
				{
					sVar0 = "";
					fVar2 = -1f;
					sVar1 = "";
					iVar3 = -1;
					uParam0->f_711 = -1;
				}
				else
				{
					uParam0->f_634 = __LIB_42__::func_309(iParam1, uParam0->f_525, iVar3, uParam0->f_523);
					if (uParam0->f_634 == -1)
					{
						uParam0->f_634 = func_507(Var7.f_5, &(uParam0->f_637), -1);
						iVar3 = func_508(iParam1, uParam0->f_525, uParam0->f_634, uParam0->f_523);
					}
				}
			}
			break;
		default:
			break;
	}
	__LIB_36__::func_846(uParam0);
	if (MISC::IS_PC_VERSION())
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_614, "SET_IS_PC");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_614, "SET_TITLE"))
	{
		__LIB_0__::func_610(sVar0);
		if (iVar3 != -1 && uParam0->f_711 != -1)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sVar1);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iVar3 + 1);
			HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_711);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		if (fVar2 != -1f)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar2);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		iVar8 = 0;
		while (iVar8 < uParam0->f_711)
		{
			iVar12 = __LIB_42__::func_309(iParam1, uParam0->f_525, iVar8, uParam0->f_523);
			if (((uParam0->f_525 == 6 || uParam0->f_525 == 7) || uParam0->f_525 == 9) || uParam0->f_525 == 8)
			{
				PED::GET_PED_HAIR_TINT_COLOR(iVar12, &iVar9, &iVar10, &iVar11);
			}
			else if ((uParam0->f_525 == 13 || uParam0->f_525 == 15) || uParam0->f_525 == 11)
			{
				PED::GET_PED_MAKEUP_TINT_COLOR(iVar12, &iVar9, &iVar10, &iVar11);
			}
			if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_614, "SET_DATA_SLOT"))
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar8);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar9);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar10);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar11);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			iVar8++;
		}
		if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_614, "DISPLAY_VIEW"))
		{
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_614, "SET_HIGHLIGHT"))
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar3);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
	if (fVar2 == -1f)
	{
		bVar13 = false;
		if (!uParam0->f_638)
		{
			bVar14 = true;
		}
		else
		{
			bVar14 = false;
		}
	}
	else
	{
		bVar13 = true;
		bVar14 = false;
	}
	if (fVar2 == -1f)
	{
		if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_614, "SHOW_OPACITY"))
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bVar13);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bVar14);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar5) || !uParam0->f_638)
	{
	}
	else
	{
		if (MISC::IS_PC_VERSION())
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_624, "SET_IS_PC");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_624, "SET_TITLE"))
		{
			__LIB_0__::func_610(sVar0);
			if (iVar6 != -1 && uParam0->f_711 != -1)
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sVar5);
				HUD::ADD_TEXT_COMPONENT_INTEGER(iVar6 + 1);
				HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_711);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			if (fVar2 != -1f)
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar2);
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_624, "SET_DATA_SLOT_EMPTY"))
		{
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar5))
		{
			iVar15 = 0;
			while (iVar15 < uParam0->f_711)
			{
				iVar19 = __LIB_42__::func_309(iParam1, uParam0->f_525, iVar15, uParam0->f_523);
				if (((uParam0->f_525 == 6 || uParam0->f_525 == 7) || uParam0->f_525 == 9) || uParam0->f_525 == 8)
				{
					PED::GET_PED_HAIR_TINT_COLOR(iVar19, &iVar16, &iVar17, &iVar18);
				}
				else if ((uParam0->f_525 == 13 || uParam0->f_525 == 15) || uParam0->f_525 == 11)
				{
					PED::GET_PED_MAKEUP_TINT_COLOR(iVar19, &iVar16, &iVar17, &iVar18);
				}
				if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_624, "SET_DATA_SLOT"))
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar15);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar16);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar17);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar18);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				iVar15++;
			}
			if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_624, "DISPLAY_VIEW"))
			{
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_624, "SET_HIGHLIGHT"))
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar6);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
	}
	if (bParam2)
	{
		__LIB_3__::func_564(-1);
	}
	if (!__LIB_36__::func_864(uParam0->f_525))
	{
		__LIB_1__::func_792(201, "ITEM_SELECT" /* GXT: Select */, -1, 0);
	}
	else if (uParam0->f_525 == 5 || uParam0->f_525 == 12)
	{
		__LIB_1__::func_792(201, "ITEM_SELECT" /* GXT: Select */, -1, 0);
	}
	else
	{
		__LIB_1__::func_792(201, "ITEM_BUY" /* GXT: Buy */, -1, 0);
	}
	if (uParam0->f_710)
	{
		__LIB_1__::func_792(202, "ITEM_BACK" /* GXT: Back */, -1, 0);
		__LIB_14__::func_964(&uLocal_126);
		__LIB_6__::func_170(21, "ITEM_MOV_CAM" /* GXT: Move Camera */, -1);
		if (!__LIB_36__::func_864(uParam0->f_525))
		{
			__LIB_1__::func_792(iLocal_134, "ITEM_ZOOM" /* GXT: Zoom */, -1, 0);
		}
	}
	else
	{
		__LIB_1__::func_792(202, "ITEM_BACK" /* GXT: Back */, -1, 0);
		__LIB_14__::func_964(&uLocal_126);
		__LIB_6__::func_170(21, "ITEM_MOV_CAM" /* GXT: Move Camera */, -1);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0) || !MISC::IS_STRING_NULL_OR_EMPTY(sVar5))
		{
			if (uParam0->f_638)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
				{
					__LIB_6__::func_170(14, "ITEM_B_OPACITY", -1);
				}
				else if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar5))
				{
					__LIB_1__::func_792(203, "ITEM_X_TINT", -1, 0);
					__LIB_6__::func_170(14, "ITEM_B_HILI", -1);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar5))
				{
					__LIB_6__::func_170(15, "ITEM_T_HCOL", -1);
				}
				else
				{
					__LIB_6__::func_170(15, "ITEM_T_COL", -1);
				}
			}
			else
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
				{
					__LIB_6__::func_170(14, "ITEM_B_OPACITY", -1);
				}
				else if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar5))
				{
					__LIB_1__::func_792(203, "ITEM_X_HILI", -1, 0);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar5))
				{
					__LIB_6__::func_170(15, "ITEM_T_HCOL", -1);
				}
				else
				{
					__LIB_6__::func_170(15, "ITEM_T_COL", -1);
				}
			}
		}
	}
	else
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
		{
			__LIB_6__::func_170(14, "ITEM_B_OPACITY", -1);
		}
		else if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar5))
		{
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar5))
		{
		}
	}
}

int func_507(int iParam0, int iParam1, int iParam2)//Position - 0x5887C
{
	int iVar0;
	int iVar1;
	var uVar2;
	iVar0 = __LIB_0__::func_251(iParam0);
	if (iVar0 == -1)
	{
		*iParam1 = 0;
		return -1;
	}
	iVar1 = __LIB_1__::func_360(iVar0, iParam2, 0);
	__LIB_0__::func_249(iVar1, &uVar2, iParam1);
	return uVar2;
}

int func_508(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x588B1
{
	int iVar0;
	int iVar1;
	if (iParam2 == -1)
	{
		return -1;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < __LIB_36__::func_843(iParam0, iParam1))
	{
		if (__LIB_36__::func_844(iParam1, iVar0, iParam3))
		{
			iVar1++;
			if (iVar0 == iParam2)
			{
				return iVar1;
			}
		}
		iVar0++;
	}
	if (iParam3 == 50)
	{
		return func_508(iParam0, iParam1, iParam2, 0);
	}
	if (iParam1 == 13)
	{
		return 0;
	}
	return -1;
}

void func_509(var uParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x58925
{
	int iVar0;
	struct<12> Var1;
	int iVar2;
	struct<10> Var3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	func_524(uParam0, 0);
	__LIB_1__::func_602(0, 0);
	__LIB_8__::func_891(*uParam0, 0);
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_1__::func_767(__LIB_36__::func_847(uParam0->f_525, 1));
	uParam0->f_492 = 0;
	uParam0->f_493 = 0;
	uParam0->f_500 = 0;
	iVar2 = ENTITY::GET_ENTITY_MODEL(iParam1);
	if (uParam0->f_709 && iParam3)
	{
		if (!(!uParam0->f_116.f_22 && uParam0->f_116.f_15))
		{
			if (__LIB_42__::func_314(iVar2, uParam0->f_525, uParam0->f_116.f_1, &Var3, __LIB_36__::func_861(uParam0->f_523)))
			{
				if (Var1.f_11 != 0 && func_396(Var1.f_11, 2, -1))
				{
				}
				else if (Var3.f_9 == 0)
				{
					uParam0->f_634 = func_106(2153, -1, 0);
					uParam0->f_635 = func_106(2160, -1, 0);
					uParam0->f_636 = uParam0->f_635;
					uParam0->f_639 = 1f;
				}
				else if (Var3.f_9 == 1)
				{
					if (Var3.f_5 == 4)
					{
						uParam0->f_634 = -1;
						uParam0->f_637 = 0;
					}
					else if (Var3.f_5 == 5)
					{
						uParam0->f_634 = func_507(Var3.f_5, &(uParam0->f_637), -1);
						uParam0->f_637 = 2;
					}
					else
					{
						uParam0->f_634 = func_507(Var3.f_5, &(uParam0->f_637), -1);
					}
					iVar4 = __LIB_0__::func_250(Var3.f_5);
					iVar5 = __LIB_0__::func_254(Var3.f_5);
					if (iVar4 != -1)
					{
						uParam0->f_635 = func_106(iVar4, -1, 0);
					}
					else
					{
						uParam0->f_635 = 0;
					}
					uParam0->f_636 = uParam0->f_635;
					if (iVar5 != -1)
					{
						uParam0->f_639 = __LIB_1__::func_680(iVar5, -1);
						if (uParam0->f_116.f_1 == 0 && uParam0->f_639 == 0f)
						{
							uParam0->f_639 = Var3.f_7;
						}
					}
					else
					{
						uParam0->f_639 = Var3.f_7;
					}
				}
				else if (Var3.f_9 == 2)
				{
					uParam0->f_634 = -1;
					uParam0->f_637 = 0;
					uParam0->f_635 = -1;
					uParam0->f_636 = uParam0->f_635;
					uParam0->f_639 = Var3.f_7;
				}
			}
		}
	}
	if (iVar2 == joaat("MP_F_Freemode_01") && uParam0->f_525 == 6)
	{
		if (!__LIB_0__::func_137(4246, -1))
		{
			iVar6 = __LIB_0__::func_204(iVar2, joaat("DLC_MP_VAL_F_HAIR0_0"), 2, 4);
			if (iVar6 == __LIB_0__::func_253(385, -1) || __LIB_0__::func_462(iVar6) == __LIB_0__::func_253(385, -1))
			{
				if (__LIB_13__::func_908())
				{
					__LIB_0__::func_186(4246, 1, -1);
				}
			}
		}
	}
	bVar7 = false;
	while (__LIB_42__::func_314(iVar2, uParam0->f_525, iVar0, &Var1, __LIB_36__::func_861(uParam0->f_523)))
	{
		if (func_404(iVar2, uParam0->f_525, iVar0, uParam0->f_523))
		{
			if (func_399(uParam0, iVar2, uParam0->f_525, iVar0) && !func_395(uParam0, iVar2, uParam0->f_525, iVar0))
			{
				__LIB_3__::func_572(iVar0, &(Var1.f_1), 1, 1, 0, 0, 0);
				__LIB_14__::func_431(2, 0);
				if (iVar0 == uParam0->f_116.f_1)
				{
					uParam0->f_493 = 1;
				}
			}
			else if ((func_399(uParam0, iVar2, uParam0->f_525, iVar0) && __LIB_36__::func_841(&(Var1.f_1), uParam0->f_525, Var1.f_0)) && !func_625(iVar2, &Var1, uParam0))
			{
				__LIB_3__::func_572(iVar0, &(Var1.f_1), 1, 1, 0, 0, 0);
				__LIB_14__::func_431(51, 0);
			}
			else
			{
				__LIB_3__::func_572(iVar0, &(Var1.f_1), 0, 1, 0, 0, 0);
			}
			if (iVar0 == uParam0->f_116.f_1)
			{
				uParam0->f_566 = { Var1.f_1 };
			}
			if (func_625(iVar2, &Var1, uParam0))
			{
				bVar7 = true;
				if (bParam2)
				{
					if (!(!uParam0->f_116.f_22 && uParam0->f_116.f_15))
					{
						uParam0->f_116.f_1 = iVar0;
					}
					uParam0->f_494 = __LIB_36__::func_849(iVar2, uParam0->f_525, &Var1);
				}
				__LIB_3__::func_572(iVar0, "", 1, 1, 0, 0, 0);
				if (((uParam0->f_525 == 11 || uParam0->f_525 == 13) || uParam0->f_525 == 14) || uParam0->f_525 == 15)
				{
					__LIB_14__::func_431(20, 0);
				}
				else
				{
					__LIB_14__::func_431(14, 0);
				}
			}
			else if (!func_399(uParam0, iVar2, uParam0->f_525, iVar0))
			{
				__LIB_3__::func_572(iVar0, "", 1, 1, 0, 0, 0);
				__LIB_14__::func_431(15, 0);
				if (iVar0 == uParam0->f_116.f_1)
				{
					uParam0->f_492 = 1;
				}
			}
			else if (Var1.f_0 > 0)
			{
				__LIB_3__::func_572(iVar0, "ITEM_COST" /* GXT: $~1~ */, 1, 1, 0, 0, 0);
				__LIB_13__::func_722(Var1.f_0, 0);
			}
			else
			{
				__LIB_3__::func_572(iVar0, "ITEM_FREE" /* GXT: FREE */, 0, 1, 0, 0, 0);
			}
		}
		iVar0++;
	}
	if (iVar0 == 0)
	{
		__LIB_3__::func_572(0, "HAIR_NONE", 0, 1, 0, 0, 0);
	}
	else if (!bVar7)
	{
		if (bParam2)
		{
			if (!(!uParam0->f_116.f_22 && uParam0->f_116.f_15))
			{
				if ((uParam0->f_525 == 11 || uParam0->f_525 == 14) || uParam0->f_525 == 13)
				{
					uParam0->f_639 = 1f;
					uParam0->f_116.f_1 = 0;
					func_526(uParam0, iParam1, uParam0->f_525, uParam0->f_116.f_1);
				}
				else
				{
					uParam0->f_639 = 1f;
					uParam0->f_116.f_1 = 0;
					if (__LIB_42__::func_314(iVar2, uParam0->f_525, uParam0->f_116.f_1, &Var1, __LIB_36__::func_861(uParam0->f_523)))
					{
						if (Var1.f_9 == 0)
						{
							iVar8 = __LIB_0__::func_253(385, -1);
							Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar2, 2, iVar8, -1) };
							if (Global_102961)
							{
								iVar9 = -99;
								if (iVar2 == joaat("MP_M_Freemode_01"))
								{
									iVar9 = __LIB_0__::func_463(iVar8);
								}
								else if (iVar2 == joaat("MP_F_Freemode_01"))
								{
									iVar9 = __LIB_0__::func_462(iVar8);
								}
								if (iVar9 != -99 && iVar8 != iVar9)
								{
								}
							}
							uParam0->f_116.f_1 = Global_78130[1 /*14*/].f_3;
						}
						else if (Var1.f_9 == 1)
						{
						}
						else if (Var1.f_9 == 2)
						{
						}
					}
				}
			}
		}
	}
	__LIB_5__::func_393(uParam0->f_725);
	__LIB_3__::func_110(uParam0->f_116.f_1, 1, 1);
	__LIB_43__::func_480(iVar2, uParam0->f_525, uParam0->f_116.f_1, __LIB_36__::func_861(uParam0->f_523));
	if (!__LIB_36__::func_864(uParam0->f_525))
	{
		__LIB_1__::func_792(201, "ITEM_SELECT" /* GXT: Select */, -1, 0);
	}
	else if (uParam0->f_525 == 5 || uParam0->f_525 == 12)
	{
		__LIB_1__::func_792(201, "ITEM_SELECT" /* GXT: Select */, -1, 0);
	}
	else
	{
		__LIB_1__::func_792(201, "ITEM_BUY" /* GXT: Buy */, -1, 0);
	}
	if (uParam0->f_710)
	{
		__LIB_1__::func_792(202, "ITEM_BACK" /* GXT: Back */, -1, 0);
		__LIB_14__::func_964(&uLocal_126);
		__LIB_6__::func_170(21, "ITEM_MOV_CAM" /* GXT: Move Camera */, -1);
		if (!__LIB_36__::func_864(uParam0->f_525))
		{
			__LIB_1__::func_792(iLocal_134, "ITEM_ZOOM" /* GXT: Zoom */, -1, 0);
		}
	}
	else
	{
		__LIB_1__::func_792(202, "ITEM_BACK" /* GXT: Back */, -1, 0);
		__LIB_14__::func_964(&uLocal_126);
		__LIB_6__::func_170(21, "ITEM_MOV_CAM" /* GXT: Move Camera */, -1);
	}
	if (uParam0->f_709)
	{
		func_499(uParam0, iVar2, 1);
		uParam0->f_709 = 0;
	}
}

void func_524(var uParam0, bool bParam1)//Position - 0x59F56
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	if (__LIB_14__::func_404(1))
	{
		iVar2 = PLAYER::PLAYER_PED_ID();
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_640.f_2) && !PED::IS_PED_INJURED(uParam0->f_640.f_2))
		{
			iVar2 = uParam0->f_640.f_2;
		}
		iVar0 = ENTITY::GET_ENTITY_MODEL(iVar2);
		if (uParam0->f_525 == 1)
		{
			if (uParam0->f_272 == -1)
			{
				Stack.Push(iVar2);
				Stack.Push(2);
				Stack.Push(-1);
				Call_Loc(uParam0->f_478);
				uParam0->f_272 = StackVal;
			}
		}
		else if (uParam0->f_525 == 2)
		{
			if (uParam0->f_273 == -1)
			{
				Stack.Push(iVar2);
				Stack.Push(1);
				Stack.Push(-1);
				Call_Loc(uParam0->f_478);
				uParam0->f_273 = StackVal;
			}
		}
		else if (__LIB_36__::func_864(uParam0->f_525))
		{
			if (__LIB_42__::func_314(ENTITY::GET_ENTITY_MODEL(iVar2), uParam0->f_525, uParam0->f_116.f_1, &Var3, __LIB_36__::func_861(uParam0->f_523)))
			{
				if (Var3.f_9 == 0)
				{
					uParam0->f_272 = __LIB_0__::func_253(385, -1);
					if (bParam1)
					{
						uParam0->f_634 = func_106(2153, -1, 0);
						uParam0->f_635 = func_106(2160, -1, 0);
						uParam0->f_636 = uParam0->f_635;
					}
				}
				else if (Var3.f_9 == 1 || Var3.f_9 == 2)
				{
					uParam0->f_273 = __LIB_0__::func_253(__LIB_0__::func_255(Var3.f_5), -1);
					if (bParam1)
					{
						uParam0->f_634 = func_507(Var3.f_5, &(uParam0->f_637), -1);
						uParam0->f_635 = func_525(Var3.f_5, -1);
						uParam0->f_636 = uParam0->f_635;
						uParam0->f_639 = __LIB_1__::func_680(__LIB_0__::func_254(Var3.f_5), -1);
					}
				}
			}
			if (bParam1)
			{
			}
		}
		if (bParam1)
		{
			iVar1 = 0;
			while (iVar1 < Global_4537616.f_252)
			{
				Stack.Push(iVar0);
				Stack.Push(Global_4537616.f_126[iVar1]);
				Stack.Push(Global_4537616[iVar1]);
				Call_Loc(uParam0->f_480);
				if (StackVal)
				{
					uParam0->f_116.f_1 = iVar1;
					return;
				}
				iVar1++;
			}
			uParam0->f_116.f_1 = 0;
		}
	}
}

int func_525(int iParam0, int iParam1)//Position - 0x5A112
{
	int iVar0;
	iVar0 = __LIB_0__::func_250(iParam0);
	if (iVar0 == -1)
	{
		return -1;
	}
	return __LIB_1__::func_360(iVar0, iParam1, 0);
}

void func_526(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x5A135
{
	struct<10> Var0;
	__LIB_42__::func_314(ENTITY::GET_ENTITY_MODEL(iParam1), iParam2, iParam3, &Var0, __LIB_36__::func_861(uParam0->f_523));
	switch (Var0.f_9)
	{
		case 0:
			Stack.Push(iParam1);
			Stack.Push(2);
			Stack.Push(Var0.f_8);
			Stack.Push(0);
			Stack.Push(-1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(uParam0->f_634);
			Stack.Push(uParam0->f_635);
			Stack.Push(-1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Call_Loc(uParam0->f_479);
			break;
		case 1:
			if (iParam2 == 11)
			{
				if (Var0.f_5 == 5 && uParam0->f_637 == 0)
				{
					uParam0->f_637 = 2;
					func_636(iParam1, 4, -1, -1, -1, 0, 1f, 1);
				}
				else if (Var0.f_5 == 4)
				{
					uParam0->f_637 = 0;
					if (__LIB_0__::func_253(__LIB_0__::func_255(5), -1) >= 7)
					{
						func_636(iParam1, 5, -1, -1, -1, 2, 1f, 1);
					}
				}
			}
			__LIB_36__::func_848(Var0.f_5, &(uParam0->f_637));
			func_636(iParam1, Var0.f_5, Var0.f_6, uParam0->f_634, uParam0->f_635, uParam0->f_637, uParam0->f_639, 1);
			break;
		case 2:
			__LIB_36__::func_848(Var0.f_5, &(uParam0->f_637));
			func_636(iParam1, Var0.f_5, Var0.f_6, uParam0->f_634, uParam0->f_635, uParam0->f_637, uParam0->f_639, 1);
			break;
	}
	func_539(iParam1, iParam2);
}

void func_529(int iParam0, int iParam1, int iParam2)//Position - 0x5A466
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = Global_78127;
	if (iParam2 != -1)
	{
		iVar0 = iParam2;
	}
	if (__LIB_42__::func_302(iParam0, iParam1, &iVar2, &iVar1))
	{
		iVar3 = __LIB_1__::func_360(iVar2, iVar0, 0);
		MISC::SET_BIT(&iVar3, iVar1);
		__LIB_1__::func_354(iVar2, iVar3, iVar0, 1, 0);
	}
}

void func_539(int iParam0, int iParam1)//Position - 0x5AB45
{
	bool bVar0;
	int iVar1;
	if (iParam0 != PLAYER::PLAYER_PED_ID())
	{
		bVar0 = false;
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_M_Freemode_01"))
		{
			if (iParam1 == 9)
			{
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11) != 15)
				{
					iLocal_141 = __LIB_0__::func_350(iParam0, 11);
					func_1211(iParam0, 11, __LIB_0__::func_279(ENTITY::GET_ENTITY_MODEL(iParam0), 11, -1), 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 11, 15, 0, 0);
					bVar0 = true;
				}
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3) != 15)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 3, 15, 0, 0);
					bVar0 = true;
				}
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8) != 15)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, 15, 0, 0);
					bVar0 = true;
				}
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 9) != 0)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 9, 0, 0, 0);
					bVar0 = true;
				}
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 10) != 0)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 0, 0);
					bVar0 = true;
				}
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 5) != 0)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 5, 0, 0, 0);
					bVar0 = true;
				}
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 7) != 0)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 7, 0, 0, 0);
					bVar0 = true;
				}
				if (bVar0)
				{
					func_246(iParam0, 0, 0, -1);
					__LIB_3__::func_222(MISC::GET_HASH_KEY("torsoDecal"), iParam0);
				}
			}
			else
			{
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11) != PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 11))
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 11, PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 11), PED::GET_PED_TEXTURE_VARIATION(PLAYER::PLAYER_PED_ID(), 11), 0);
					bVar0 = true;
				}
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3) != PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 3))
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 3), PED::GET_PED_TEXTURE_VARIATION(PLAYER::PLAYER_PED_ID(), 3), 0);
					bVar0 = true;
				}
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8) != PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 8))
				{
					iVar1 = PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 8);
					if (iVar1 == __LIB_3__::func_333(iParam0, 1))
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, __LIB_3__::func_333(PLAYER::PLAYER_PED_ID(), 0), PED::GET_PED_TEXTURE_VARIATION(PLAYER::PLAYER_PED_ID(), 8), 0);
						bVar0 = true;
					}
					else
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 8), PED::GET_PED_TEXTURE_VARIATION(PLAYER::PLAYER_PED_ID(), 8), 0);
						bVar0 = true;
					}
				}
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 9) != PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 9))
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 9, PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 9), PED::GET_PED_TEXTURE_VARIATION(PLAYER::PLAYER_PED_ID(), 9), 0);
					bVar0 = true;
				}
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 10) != PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 10))
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 10), PED::GET_PED_TEXTURE_VARIATION(PLAYER::PLAYER_PED_ID(), 10), 0);
					bVar0 = true;
				}
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 5) != PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 5))
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 5, PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 5), PED::GET_PED_TEXTURE_VARIATION(PLAYER::PLAYER_PED_ID(), 5), 0);
					bVar0 = true;
				}
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 7) != PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 7))
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 7, PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 7), PED::GET_PED_TEXTURE_VARIATION(PLAYER::PLAYER_PED_ID(), 7), 0);
					bVar0 = true;
				}
				if (bVar0)
				{
					if (iLocal_141 != -99)
					{
						func_1211(iParam0, 11, iLocal_141, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iLocal_141 = -99;
					func_246(iParam0, 0, 0, -1);
				}
			}
		}
	}
}

void func_543(int iParam0, var uParam1)//Position - 0x5B8B5
{
	int iVar0;
	int iVar1;
	if (iParam0 == PLAYER::PLAYER_PED_ID())
	{
	}
	else if (iParam0 == Global_4538723)
	{
	}
	iVar0 = __LIB_0__::func_253(385, -1);
	if (iVar0 != -99)
	{
		iVar1 = -99;
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_M_Freemode_01"))
		{
			iVar1 = __LIB_0__::func_463(iVar0);
		}
		else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_F_Freemode_01"))
		{
			iVar1 = __LIB_0__::func_462(iVar0);
		}
		if (iVar1 != -99 && iVar0 != iVar1)
		{
			iVar0 = iVar1;
		}
	}
	Stack.Push(iParam0);
	Stack.Push(2);
	Stack.Push(iVar0);
	Stack.Push(0);
	Stack.Push(-1);
	Stack.Push(0);
	Stack.Push(0);
	Stack.Push(0);
	Stack.Push(-1);
	Stack.Push(-1);
	Stack.Push(-1);
	Stack.Push(0);
	Stack.Push(0);
	Stack.Push(0);
	Call_Loc(uParam1->f_479);
	__LIB_2__::func_780(iParam0, -1, 0);
}

void func_545(var uParam0, int iParam1)//Position - 0x5B970
{
	int iVar0;
	iVar0 = 0;
	__LIB_14__::func_405(&(uParam0->f_236), 300);
	if ((uParam0->f_116.f_1 != -1 && uParam0->f_493) && !uParam0->f_492)
	{
		__LIB_42__::func_310(uParam0->f_116.f_1);
	}
	if (!PED::IS_PED_INJURED(iParam1))
	{
		uParam0->f_116.f_15 = 0;
		__LIB_3__::func_567(0, 0, 0, 1);
		if (__LIB_3__::func_51())
		{
			if (Global_4539961 == uParam0->f_116.f_1)
			{
				iVar0 = 1;
			}
			else
			{
				uParam0->f_116.f_1 = Global_4539961;
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				func_636(iParam1, 4, uParam0->f_116.f_1, uParam0->f_634, 0, 0, 1f, 1);
				if ((uParam0->f_116.f_1 - 1) == -1 || (uParam0->f_116.f_1 - 1) > 15)
				{
					func_636(iParam1, 2, __LIB_0__::func_253(449, __LIB_0__::func_5()), uParam0->f_634, 0, 0, 1f, 1);
				}
				else
				{
					func_636(iParam1, 2, __LIB_0__::func_253(449, __LIB_0__::func_5()), uParam0->f_634, 0, 0, 0f, 1);
				}
				if (uParam0->f_590)
				{
					func_771(uParam0, iParam1);
					uParam0->f_590 = 0;
				}
				else
				{
					__LIB_3__::func_110(uParam0->f_116.f_1, 1, 1);
				}
			}
		}
		if (((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/) || __LIB_14__::func_181(uParam0->f_236.f_8, 0, 0)) || (uParam0->f_236.f_1 < -100 && uParam0->f_236.f_4)) || (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/) && uParam0->f_236.f_8))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			uParam0->f_236.f_8 = 0;
			uParam0->f_236.f_4 = 0;
			uParam0->f_236.f_20 = MISC::GET_GAME_TIMER();
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				uParam0->f_236.f_24 = NETWORK::GET_NETWORK_TIME();
			}
			if (uParam0->f_116.f_1 > 0)
			{
				uParam0->f_116.f_1 = (uParam0->f_116.f_1 - 1);
				while (!__LIB_43__::func_476(uParam0->f_116.f_1))
				{
					uParam0->f_116.f_1 = (uParam0->f_116.f_1 - 1);
				}
			}
			else
			{
				uParam0->f_116.f_1 = (uParam0->f_612 - 1);
				while (!__LIB_43__::func_476(uParam0->f_116.f_1))
				{
					uParam0->f_116.f_1 = (uParam0->f_116.f_1 - 1);
				}
			}
			if (uParam0->f_493)
			{
				uParam0->f_590 = 1;
				uParam0->f_594 = 1;
				uParam0->f_595 = __LIB_5__::func_392();
			}
			uParam0->f_492 = !func_422(uParam0->f_116.f_1);
			uParam0->f_493 = (!uParam0->f_492 && !__LIB_42__::func_303(uParam0->f_116.f_1));
			uParam0->f_494 = 0;
			if (uParam0->f_116.f_1 != -1)
			{
				func_636(iParam1, 4, (uParam0->f_116.f_1 - 1), uParam0->f_634, 0, 0, 1f, 1);
				if ((uParam0->f_116.f_1 - 1) == -1 || (uParam0->f_116.f_1 - 1) > 15)
				{
					func_636(iParam1, 2, __LIB_0__::func_253(449, __LIB_0__::func_5()), uParam0->f_634, 0, 0, 1f, 1);
				}
				else
				{
					func_636(iParam1, 2, __LIB_0__::func_253(449, __LIB_0__::func_5()), uParam0->f_634, 0, 0, 0f, 1);
				}
				if (uParam0->f_590)
				{
					func_771(uParam0, iParam1);
					uParam0->f_590 = 0;
				}
				else
				{
					__LIB_3__::func_110(uParam0->f_116.f_1, 1, 1);
				}
			}
		}
		else if (((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/) || __LIB_14__::func_180(uParam0->f_236.f_9, 0, 0)) || (uParam0->f_236.f_1 > 100 && uParam0->f_236.f_9)) || (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/) && uParam0->f_236.f_9))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			uParam0->f_236.f_9 = 0;
			uParam0->f_236.f_4 = 0;
			uParam0->f_236.f_20 = MISC::GET_GAME_TIMER();
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				uParam0->f_236.f_24 = NETWORK::GET_NETWORK_TIME();
			}
			if (uParam0->f_116.f_1 < (uParam0->f_612 - 1))
			{
				uParam0->f_116.f_1++;
				while (!__LIB_43__::func_476(uParam0->f_116.f_1))
				{
					uParam0->f_116.f_1++;
				}
				if (!__LIB_43__::func_476(uParam0->f_116.f_1) || uParam0->f_116.f_1 >= uParam0->f_612)
				{
					uParam0->f_116.f_1 = 0;
					while (!__LIB_43__::func_476(uParam0->f_116.f_1))
					{
						uParam0->f_116.f_1++;
					}
				}
			}
			else
			{
				uParam0->f_116.f_1 = 0;
				while (!__LIB_43__::func_476(uParam0->f_116.f_1))
				{
					uParam0->f_116.f_1++;
				}
			}
			if (uParam0->f_493)
			{
				uParam0->f_590 = 1;
				uParam0->f_594 = 1;
				uParam0->f_595 = __LIB_5__::func_392();
			}
			uParam0->f_492 = !func_422(uParam0->f_116.f_1);
			uParam0->f_493 = (!uParam0->f_492 && !__LIB_42__::func_303(uParam0->f_116.f_1));
			uParam0->f_494 = 0;
			if (uParam0->f_116.f_1 != -1)
			{
				func_636(iParam1, 4, (uParam0->f_116.f_1 - 1), uParam0->f_634, 0, 0, 1f, 1);
				if ((uParam0->f_116.f_1 - 1) == -1 || (uParam0->f_116.f_1 - 1) > 15)
				{
					func_636(iParam1, 2, __LIB_0__::func_253(449, __LIB_0__::func_5()), uParam0->f_634, 0, 0, 1f, 1);
				}
				else
				{
					func_636(iParam1, 2, __LIB_0__::func_253(449, __LIB_0__::func_5()), uParam0->f_634, 0, 0, 0f, 1);
				}
				if (uParam0->f_590)
				{
					func_771(uParam0, iParam1);
					uParam0->f_590 = 0;
				}
				else
				{
					__LIB_3__::func_110(uParam0->f_116.f_1, 1, 1);
				}
			}
		}
		else if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) || iVar0 == 1)
		{
			iVar0 = 0;
			iLocal_135 = 0;
			AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT" /* GXT: Filter List */, "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			if (uParam0->f_116.f_1 == uParam0->f_611)
			{
				__LIB_1__::func_789("HAIR_CUR_3", 4000, 0);
				uParam0->f_610 = uParam0->f_116.f_1;
			}
			else if (!func_422(uParam0->f_116.f_1))
			{
				__LIB_1__::func_789("HAIR_LOCK", 4000, 0);
			}
			else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && __LIB_3__::func_538())
			{
				__LIB_1__::func_34(__LIB_3__::func_534());
				__LIB_1__::func_789("CSHOP_FAIL" /* GXT: Sorry - this item is unavailable. */, 4000, 0);
			}
			else if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && __LIB_13__::func_376(0)) && !__LIB_16__::func_564(joaat("NET_SHOP_TTYPE_BASKET"), __LIB_36__::func_842(uParam0->f_525, -1), __LIB_37__::func_676(uParam0->f_525, -1), joaat("NET_SHOP_ACTION_SPEND"), 1, 0, 1, 4, joaat("PO_COUPON_HAIRCUT"), 3))
			{
				__LIB_1__::func_34(__LIB_3__::func_534());
				__LIB_1__::func_789("CSHOP_FAIL" /* GXT: Sorry - this item is unavailable. */, 4000, 0);
			}
			else
			{
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && __LIB_3__::func_538())
				{
					uParam0->f_116.f_25 = 1;
					uParam0->f_116.f_26 = 0;
				}
				func_636(iParam1, 4, (uParam0->f_611 - 1), uParam0->f_634, 0, 0, 1f, 1);
				if ((uParam0->f_611 - 1) == -1 || (uParam0->f_611 - 1) > 15)
				{
					func_636(iParam1, 2, __LIB_0__::func_253(449, __LIB_0__::func_5()), uParam0->f_634, 0, 0, 1f, 1);
				}
				else
				{
					func_636(iParam1, 2, __LIB_0__::func_253(449, __LIB_0__::func_5()), uParam0->f_634, 0, 0, 0f, 1);
				}
				uParam0->f_116.f_15 = 1;
				uParam0->f_610 = uParam0->f_116.f_1;
			}
		}
		else if ((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/)) || __LIB_3__::func_528())
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "CANCEL", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			func_636(iParam1, 4, (uParam0->f_610 - 1), uParam0->f_634, 0, 0, 1f, 1);
			if ((uParam0->f_610 - 1) == -1 || (uParam0->f_610 - 1) > 15)
			{
				func_636(iParam1, 2, __LIB_0__::func_253(449, __LIB_0__::func_5()), uParam0->f_634, 0, 0, 1f, 1);
			}
			else
			{
				func_636(iParam1, 2, __LIB_0__::func_253(449, __LIB_0__::func_5()), uParam0->f_634, 0, 0, 0f, 1);
			}
			uParam0->f_116.f_15 = 0;
			uParam0->f_116.f_23 = 0;
			uParam0->f_116.f_22 = 0;
			if (__LIB_36__::func_866())
			{
				uParam0->f_116.f_1 = 2;
			}
			else
			{
				uParam0->f_116.f_1 = 1;
			}
			uParam0->f_525 = 0;
			uParam0->f_590 = 1;
		}
	}
}

void func_548(var uParam0, int iParam1)//Position - 0x5C148
{
	int iVar0;
	struct<4> Var1;
	struct<4> Var2;
	iVar0 = 0;
	__LIB_14__::func_405(&(uParam0->f_236), 300);
	if ((uParam0->f_116.f_1 != -1 && uParam0->f_493) && !uParam0->f_492)
	{
		__LIB_42__::func_312(__LIB_36__::func_904(uParam0->f_116.f_1));
	}
	if (!PED::IS_PED_INJURED(iParam1))
	{
		uParam0->f_116.f_15 = 0;
		__LIB_3__::func_567(0, 0, 0, 1);
		if (__LIB_3__::func_51())
		{
			if (Global_4539961 == uParam0->f_116.f_1)
			{
				iVar0 = 1;
			}
			else
			{
				uParam0->f_116.f_1 = Global_4539961;
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				uParam0->f_492 = !func_430(uParam0->f_116.f_1);
				uParam0->f_493 = (!uParam0->f_492 && !__LIB_42__::func_306(uParam0->f_116.f_1));
				uParam0->f_494 = 0;
				func_636(iParam1, 1, __LIB_36__::func_904(uParam0->f_116.f_1), uParam0->f_634, 0, 0, uParam0->f_275, 1);
				func_552(uParam0);
				if (uParam0->f_590)
				{
					func_771(uParam0, iParam1);
					uParam0->f_590 = 0;
				}
				else
				{
					__LIB_3__::func_110(uParam0->f_116.f_1, 1, 1);
				}
			}
		}
		if (((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/) || __LIB_14__::func_181(uParam0->f_236.f_8, 0, 0)) || (uParam0->f_236.f_1 < -100 && uParam0->f_236.f_4)) || (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/) && uParam0->f_236.f_8))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			uParam0->f_236.f_8 = 0;
			uParam0->f_236.f_4 = 0;
			uParam0->f_236.f_20 = MISC::GET_GAME_TIMER();
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				uParam0->f_236.f_24 = NETWORK::GET_NETWORK_TIME();
			}
			if (uParam0->f_116.f_1 > 0)
			{
				uParam0->f_116.f_1 = (uParam0->f_116.f_1 - 1);
				while (__LIB_42__::func_311(__LIB_36__::func_904(uParam0->f_116.f_1)) && !__LIB_36__::func_854(__LIB_36__::func_904(uParam0->f_116.f_1)))
				{
					uParam0->f_116.f_1 = (uParam0->f_116.f_1 - 1);
				}
			}
			else
			{
				uParam0->f_116.f_1 = (__LIB_36__::func_836() - 1);
			}
			if (uParam0->f_493)
			{
				uParam0->f_590 = 1;
				uParam0->f_594 = 1;
				uParam0->f_595 = __LIB_5__::func_392();
			}
			uParam0->f_492 = !func_430(__LIB_36__::func_904(uParam0->f_116.f_1));
			uParam0->f_493 = (!uParam0->f_492 && !__LIB_42__::func_306(__LIB_36__::func_904(uParam0->f_116.f_1)));
			StringCopy(&Var1, "HAIR_BEARD", 16);
			StringIntConCat(&Var1, __LIB_36__::func_904(uParam0->f_116.f_1), 16);
			uParam0->f_494 = __LIB_36__::func_853(&Var1, __LIB_36__::func_904(uParam0->f_116.f_1));
			uParam0->f_566 = { Var1 };
			func_636(iParam1, 1, (__LIB_36__::func_904(uParam0->f_116.f_1) - 1), uParam0->f_634, 0, 0, uParam0->f_275, 1);
			func_552(uParam0);
			if (uParam0->f_590)
			{
				func_771(uParam0, iParam1);
				uParam0->f_590 = 0;
			}
			else
			{
				__LIB_3__::func_110(uParam0->f_116.f_1, 1, 1);
			}
		}
		else if (((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/) || __LIB_14__::func_180(uParam0->f_236.f_9, 0, 0)) || (uParam0->f_236.f_1 > 100 && uParam0->f_236.f_4)) || (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/) && uParam0->f_236.f_9))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			uParam0->f_236.f_9 = 0;
			uParam0->f_236.f_4 = 0;
			uParam0->f_236.f_20 = MISC::GET_GAME_TIMER();
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				uParam0->f_236.f_24 = NETWORK::GET_NETWORK_TIME();
			}
			if (uParam0->f_116.f_1 < (__LIB_36__::func_836() - 1))
			{
				uParam0->f_116.f_1++;
				while (__LIB_42__::func_311(__LIB_36__::func_904(uParam0->f_116.f_1)) && !__LIB_36__::func_854(__LIB_36__::func_904(uParam0->f_116.f_1)))
				{
					uParam0->f_116.f_1++;
				}
			}
			else
			{
				uParam0->f_116.f_1 = 0;
			}
			if (uParam0->f_493)
			{
				uParam0->f_590 = 1;
				uParam0->f_594 = 1;
				uParam0->f_595 = __LIB_5__::func_392();
			}
			uParam0->f_492 = !func_430(__LIB_36__::func_904(uParam0->f_116.f_1));
			uParam0->f_493 = (!uParam0->f_492 && !__LIB_42__::func_306(__LIB_36__::func_904(uParam0->f_116.f_1)));
			StringCopy(&Var2, "HAIR_BEARD", 16);
			StringIntConCat(&Var2, __LIB_36__::func_904(uParam0->f_116.f_1), 16);
			uParam0->f_494 = __LIB_36__::func_853(&Var2, __LIB_36__::func_904(uParam0->f_116.f_1));
			uParam0->f_566 = { Var2 };
			func_636(iParam1, 1, (__LIB_36__::func_904(uParam0->f_116.f_1) - 1), uParam0->f_634, 0, 0, uParam0->f_275, 1);
			func_552(uParam0);
			if (uParam0->f_590)
			{
				func_771(uParam0, iParam1);
				uParam0->f_590 = 0;
			}
			else
			{
				__LIB_3__::func_110(uParam0->f_116.f_1, 1, 1);
			}
		}
		else if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) || iVar0 == 1)
		{
			iVar0 = 0;
			iLocal_135 = 0;
			AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT" /* GXT: Filter List */, "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			if (__LIB_36__::func_904(uParam0->f_116.f_1) == uParam0->f_273)
			{
				__LIB_1__::func_789("HAIR_CUR_1", 4000, 0);
				uParam0->f_274 = __LIB_36__::func_904(uParam0->f_116.f_1);
			}
			else if (!func_430(__LIB_36__::func_904(uParam0->f_116.f_1)))
			{
				__LIB_1__::func_789("HAIR_LOCK", 4000, 0);
			}
			else if (!__LIB_36__::func_915(uParam0->f_116.f_2))
			{
				__LIB_1__::func_789("HAIR_AFF_1", 4000, 0);
				__LIB_13__::func_630(MISC::GET_HASH_KEY(&(Global_100493.f_1384)), Global_100493.f_1388, MISC::GET_HASH_KEY(__LIB_12__::func_769(*uParam0, 0, 0)));
				__LIB_2__::func_820(0, 10, 3);
			}
			else if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && __LIB_3__::func_538()) && !__LIB_16__::func_564(joaat("NET_SHOP_TTYPE_BASKET"), __LIB_36__::func_842(uParam0->f_525, -1), __LIB_42__::func_307(uParam0->f_525, uParam0->f_566, 0, 0), joaat("NET_SHOP_ACTION_BUY_ITEM"), 1, uParam0->f_116.f_2, 1, 4, __LIB_37__::func_676(uParam0->f_525, -1), 3))
			{
				__LIB_1__::func_34(__LIB_3__::func_534());
				__LIB_1__::func_789("CSHOP_FAIL" /* GXT: Sorry - this item is unavailable. */, 4000, 0);
			}
			else if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && __LIB_13__::func_376(0)) && !__LIB_16__::func_564(joaat("NET_SHOP_TTYPE_BASKET"), __LIB_36__::func_842(uParam0->f_525, -1), joaat("PO_COUPON_HAIRCUT"), joaat("NET_SHOP_ACTION_SPEND"), 1, 0, 1, 4, __LIB_37__::func_676(uParam0->f_525, -1), 3))
			{
				__LIB_1__::func_34(__LIB_3__::func_534());
				__LIB_1__::func_789("CSHOP_FAIL" /* GXT: Sorry - this item is unavailable. */, 4000, 0);
			}
			else
			{
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && __LIB_3__::func_538())
				{
					uParam0->f_116.f_25 = 1;
					uParam0->f_116.f_26 = 0;
				}
				func_636(iParam1, 1, (uParam0->f_273 - 1), uParam0->f_634, 0, 0, uParam0->f_275, 1);
				uParam0->f_116.f_15 = 1;
				uParam0->f_274 = __LIB_36__::func_904(uParam0->f_116.f_1);
			}
		}
		else if ((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/)) || __LIB_3__::func_528())
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "CANCEL", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				func_636(iParam1, 1, (uParam0->f_274 - 1), uParam0->f_634, 0, 0, uParam0->f_275, 1);
			}
			else
			{
				func_636(iParam1, 1, uParam0->f_273 + 1, uParam0->f_634, 0, 0, uParam0->f_275, 1);
			}
			uParam0->f_116.f_15 = 0;
			uParam0->f_116.f_23 = 0;
			uParam0->f_116.f_22 = 0;
			uParam0->f_116.f_1 = 1;
			uParam0->f_525 = 0;
			uParam0->f_590 = 1;
		}
	}
}

void func_552(var uParam0)//Position - 0x5C8CD
{
	struct<4> Var0;
	if (__LIB_14__::func_404(1))
	{
		StringCopy(&Var0, "HAIR_BEARD", 16);
		StringIntConCat(&Var0, __LIB_36__::func_904(uParam0->f_116.f_1), 16);
		uParam0->f_494 = __LIB_36__::func_853(&Var0, __LIB_36__::func_904(uParam0->f_116.f_1));
		uParam0->f_116.f_2 = func_553(uParam0, __LIB_36__::func_904(uParam0->f_116.f_1), &Var0, 1);
		__LIB_13__::func_897(Var0, uParam0->f_116.f_2, 0, 1, 0, 0);
	}
}

int func_553(var uParam0, int iParam1, char* sParam2, bool bParam3)//Position - 0x5C934
{
	int iVar0;
	iVar0 = 5;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		switch (iParam1)
		{
			case 0:
				iVar0 = 500;
				iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2653 /* Tunable: BEARD_UNLOCKS_CLEANSHAVEN_EXPENDITURE_TUNABLE */));
				break;
			case 1:
				iVar0 = 150;
				iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2654 /* Tunable: BEARD_UNLOCKS_LIGHTSTUBBLE_EXPENDITURE_TUNABLE */));
				break;
			case 2:
				iVar0 = 430;
				iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2655 /* Tunable: BEARD_UNLOCKS_BALBO_EXPENDITURE_TUNABLE */));
				break;
			case 3:
				iVar0 = 325;
				iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2656 /* Tunable: BEARD_UNLOCKS_CIRCLEBEARD_EXPENDITURE_TUNABLE */));
				break;
			case 4:
				iVar0 = 465;
				iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2657 /* Tunable: BEARD_UNLOCKS_GOATEE_EXPENDITURE_TUNABLE */));
				break;
			case 5:
				iVar0 = 500;
				iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2658 /* Tunable: BEARD_UNLOCKS_CHIN_EXPENDITURE_TUNABLE */));
				break;
			case 6:
				iVar0 = 350;
				iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2659 /* Tunable: BEARD_UNLOCKS_SOULPATCH_EXPENDITURE_TUNABLE */));
				break;
			case 7:
				iVar0 = 600;
				iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2660 /* Tunable: BEARD_UNLOCKS_PENCILCHINSTRAP_EXPENDITURE_TUNABLE */));
				break;
			case 8:
				iVar0 = 220;
				iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2661 /* Tunable: BEARD_UNLOCKS_LIGHTBEARD_EXPENDITURE_TUNABLE */));
				break;
			case 9:
				iVar0 = 1425;
				iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2662 /* Tunable: BEARD_UNLOCKS_MUSKETEER_EXPENDITURE_TUNABLE */));
				break;
			case 10:
				iVar0 = 1700;
				iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2663 /* Tunable: BEARD_UNLOCKS_MOUSTACHE_EXPENDITURE_TUNABLE */));
				break;
			case 11:
				iVar0 = 290;
				iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2664 /* Tunable: BEARD_UNLOCKS_HEAVYBEARD_EXPENDITURE_TUNABLE */));
				break;
			case 12:
				iVar0 = 185;
				iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2665 /* Tunable: BEARD_UNLOCKS_STUBBLE_EXPENDITURE_TUNABLE */));
				break;
			case 13:
				iVar0 = 255;
				iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2666 /* Tunable: BEARD_UNLOCKS_CIRCLEBEARD2_EXPENDITURE_TUNABLE */));
				break;
			case 14:
				iVar0 = 1150;
				iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2667 /* Tunable: BEARD_UNLOCKS_HORSESHOEANDSIDEBURNS_EXPENDITURE_TUNABLE */));
				break;
			case 15:
				iVar0 = 1975;
				iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2668 /* Tunable: BEARD_UNLOCKS_PENCILMOUSTACHEANDMUTTONCHOPS_EXPENDITURE_TUNABLE */));
				break;
			case 16:
				iVar0 = 875;
				iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2669 /* Tunable: BEARD_UNLOCKS_PENCILMOUSTACHEANDCHINSTRAP_EXPENDITURE_TUNABLE */));
				break;
			case 17:
				iVar0 = 2000;
				iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2670 /* Tunable: BEARD_UNLOCKS_BALBOANDDESIGNSIDEBURNS_EXPENDITURE_TUNABLE */));
				break;
			case 18:
				iVar0 = 725;
				iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2671 /* Tunable: BEARD_UNLOCKS_MUTTONCHOPS_EXPENDITURE_TUNABLE */));
				break;
			case 19:
				iVar0 = 395;
				iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2672 /* Tunable: BEARD_UNLOCKS_FULLBEARD_EXPENDITURE_TUNABLE */));
				break;
			case 20:
				iVar0 = 395;
				iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_2672 /* Tunable: BEARD_UNLOCKS_FULLBEARD_EXPENDITURE_TUNABLE */));
				break;
			case 27:
				iVar0 = Global_262145.f_4336 /* Tunable: DLC_MALE_BEARDS_CURLY */;
				break;
			case 28:
				iVar0 = Global_262145.f_4337 /* Tunable: DLC_MALE_BEARDS_CURLY_DEEP_STRANGER */;
				break;
			case 29:
				iVar0 = Global_262145.f_4338 /* Tunable: DLC_MALE_BEARDS_HANDLEBAR */;
				break;
			case 30:
				iVar0 = Global_262145.f_4339 /* Tunable: DLC_MALE_BEARDS_FAUSTIC */;
				break;
			case 31:
				iVar0 = Global_262145.f_4340 /* Tunable: DLC_MALE_BEARDS_OTTO_PATCH */;
				break;
			case 32:
				iVar0 = Global_262145.f_4341 /* Tunable: DLC_MALE_BEARDS_OTTO_FULL_STRANGER */;
				break;
			case 33:
				iVar0 = Global_262145.f_4342 /* Tunable: DLC_MALE_BEARDS_LIGHT_FRANZ */;
				break;
			case 36:
				iVar0 = Global_262145.f_4343 /* Tunable: DLC_MALE_BEARDS_LINCOLN_CURTAIN */;
				break;
			case 34:
				iVar0 = Global_262145.f_4344 /* Tunable: DLC_MALE_BEARDS_HAMPSTEAD */;
				break;
			case 35:
				iVar0 = Global_262145.f_4345 /* Tunable: DLC_MALE_BEARDS_AMBROSE */;
				break;
			}
	}
	if (bParam3)
	{
		func_554(uParam0, &iVar0);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && __LIB_3__::func_538())
	{
		iVar0 = NETSHOPPING::NET_GAMESERVER_GET_PRICE(__LIB_42__::func_307(uParam0->f_525, *sParam2, 0, 0), joaat("CATEGORY_BEARD"), true);
	}
	return iVar0;
}

void func_554(var uParam0, int iParam1)//Position - 0x5CD01
{
	int iVar0;
	iVar0 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (__LIB_15__::func_885())
		{
			iVar0 = (iVar0 + Global_262145.f_132 /* Tunable: SHOP_GOODBOY_DISCOUNT_PERCENT */);
		}
	}
	if (func_556(*uParam0, __LIB_14__::func_466()))
	{
		iVar0 += 100;
	}
	iVar0 = __LIB_0__::func_340(iVar0, 0, 100);
	*iParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*iParam1) * (1f - (SYSTEM::TO_FLOAT(iVar0) / 100f))));
}

int func_556(int iParam0, bool bParam1)//Position - 0x5CD86
{
	switch (bParam1)
	{
		case 0:
			return __LIB_1__::func_686(iParam0, 5, 0);
			break;
		case 1:
			return __LIB_1__::func_686(iParam0, 7, 0);
			break;
		case 2:
			return __LIB_1__::func_686(iParam0, 6, 0);
			break;
	}
	return 0;
}

void func_587(var uParam0, int iParam1)//Position - 0x5D83E
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	__LIB_14__::func_405(&(uParam0->f_236), 300);
	if (!PED::IS_PED_INJURED(iParam1))
	{
		uParam0->f_116.f_15 = 0;
		iVar0 = ENTITY::GET_ENTITY_MODEL(iParam1);
		if (MISC::IS_PC_VERSION())
		{
			__LIB_3__::func_567(0, 0, 0, 1);
			if (__LIB_3__::func_51())
			{
				if (Global_4539961 == uParam0->f_116.f_1)
				{
					iVar1 = 1;
				}
				else
				{
					uParam0->f_116.f_1 = Global_4539961;
					if (__LIB_36__::func_856(&Global_4537616, 0, uParam0->f_116.f_1))
					{
						if (uParam0->f_493)
						{
							uParam0->f_590 = 1;
							uParam0->f_594 = 1;
							uParam0->f_595 = __LIB_5__::func_392();
						}
						Stack.Push(iVar0);
						Stack.Push(Global_4537616.f_126[uParam0->f_116.f_1]);
						Stack.Push(Global_4537616[uParam0->f_116.f_1]);
						Call_Loc(uParam0->f_480);
						uParam0->f_492 = !StackVal;
						Stack.Push(!uParam0->f_492);
						Stack.Push(iVar0);
						Stack.Push(Global_4537616.f_126[uParam0->f_116.f_1]);
						Stack.Push(Global_4537616[uParam0->f_116.f_1]);
						Call_Loc(uParam0->f_483);
						uParam0->f_493 = (StackVal && StackVal);
						uParam0->f_494 = BitTest(Global_78130[1 /*14*/].f_6, 6);
						uParam0->f_566 = { Global_78130[1 /*14*/].f_8 };
						Stack.Push(iParam1);
						Stack.Push(Global_4537616.f_126[uParam0->f_116.f_1]);
						Stack.Push(Global_4537616[uParam0->f_116.f_1]);
						Stack.Push(0);
						Stack.Push(-1);
						Stack.Push(0);
						Stack.Push(0);
						Stack.Push(0);
						Stack.Push(-1);
						Stack.Push(-1);
						Stack.Push(-1);
						Stack.Push(0);
						Stack.Push(0);
						Stack.Push(0);
						Call_Loc(uParam0->f_479);
						func_609(uParam0);
						if (uParam0->f_590)
						{
							func_593(uParam0, iParam1, uParam0->f_493);
							uParam0->f_590 = 0;
						}
						else
						{
							__LIB_3__::func_110(uParam0->f_116.f_1, 1, 1);
						}
					}
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				}
			}
		}
		if ((((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/) || (uParam0->f_236.f_1 < -100 && uParam0->f_236.f_4)) || (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/) && uParam0->f_236.f_8)) || __LIB_14__::func_181(uParam0->f_236.f_8, 0, 0)) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 241 /*INPUT_CURSOR_SCROLL_UP*/))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			uParam0->f_236.f_8 = 0;
			uParam0->f_236.f_4 = 0;
			uParam0->f_236.f_20 = MISC::GET_GAME_TIMER();
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				uParam0->f_236.f_24 = NETWORK::GET_NETWORK_TIME();
			}
			if (__LIB_31__::func_879(&Global_4537616, 0, uParam0->f_116.f_1, &(uParam0->f_116.f_1), 1))
			{
				if (uParam0->f_493)
				{
					uParam0->f_590 = 1;
					uParam0->f_594 = 1;
					uParam0->f_595 = __LIB_5__::func_392();
				}
				Stack.Push(iVar0);
				Stack.Push(Global_4537616.f_126[uParam0->f_116.f_1]);
				Stack.Push(Global_4537616[uParam0->f_116.f_1]);
				Call_Loc(uParam0->f_480);
				uParam0->f_492 = !StackVal;
				Stack.Push(!uParam0->f_492);
				Stack.Push(iVar0);
				Stack.Push(Global_4537616.f_126[uParam0->f_116.f_1]);
				Stack.Push(Global_4537616[uParam0->f_116.f_1]);
				Call_Loc(uParam0->f_483);
				uParam0->f_493 = (StackVal && StackVal);
				uParam0->f_494 = BitTest(Global_78130[1 /*14*/].f_6, 6);
				uParam0->f_566 = { Global_78130[1 /*14*/].f_8 };
				Stack.Push(iParam1);
				Stack.Push(Global_4537616.f_126[uParam0->f_116.f_1]);
				Stack.Push(Global_4537616[uParam0->f_116.f_1]);
				Stack.Push(0);
				Stack.Push(-1);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Stack.Push(-1);
				Stack.Push(-1);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Call_Loc(uParam0->f_479);
				func_609(uParam0);
				if (uParam0->f_590)
				{
					func_593(uParam0, iParam1, uParam0->f_493);
					uParam0->f_590 = 0;
				}
				else
				{
					__LIB_3__::func_110(uParam0->f_116.f_1, 1, 1);
				}
			}
		}
		else if ((((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/) || (uParam0->f_236.f_1 > 100 && uParam0->f_236.f_4)) || (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/) && uParam0->f_236.f_9)) || __LIB_14__::func_180(uParam0->f_236.f_9, 0, 0)) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 242 /*INPUT_CURSOR_SCROLL_DOWN*/))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			uParam0->f_236.f_9 = 0;
			uParam0->f_236.f_4 = 0;
			uParam0->f_236.f_20 = MISC::GET_GAME_TIMER();
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				uParam0->f_236.f_24 = NETWORK::GET_NETWORK_TIME();
			}
			if (__LIB_31__::func_880(&Global_4537616, 0, uParam0->f_116.f_1, &(uParam0->f_116.f_1), 1))
			{
				if (uParam0->f_493)
				{
					uParam0->f_590 = 1;
					uParam0->f_594 = 1;
					uParam0->f_595 = __LIB_5__::func_392();
				}
				Stack.Push(iVar0);
				Stack.Push(Global_4537616.f_126[uParam0->f_116.f_1]);
				Stack.Push(Global_4537616[uParam0->f_116.f_1]);
				Call_Loc(uParam0->f_480);
				uParam0->f_492 = !StackVal;
				Stack.Push(!uParam0->f_492);
				Stack.Push(iVar0);
				Stack.Push(Global_4537616.f_126[uParam0->f_116.f_1]);
				Stack.Push(Global_4537616[uParam0->f_116.f_1]);
				Call_Loc(uParam0->f_483);
				uParam0->f_493 = (StackVal && StackVal);
				uParam0->f_494 = BitTest(Global_78130[1 /*14*/].f_6, 6);
				uParam0->f_566 = { Global_78130[1 /*14*/].f_8 };
				Stack.Push(iParam1);
				Stack.Push(Global_4537616.f_126[uParam0->f_116.f_1]);
				Stack.Push(Global_4537616[uParam0->f_116.f_1]);
				Stack.Push(0);
				Stack.Push(-1);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Stack.Push(-1);
				Stack.Push(-1);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Call_Loc(uParam0->f_479);
				func_609(uParam0);
				if (uParam0->f_590)
				{
					func_593(uParam0, iParam1, uParam0->f_493);
					uParam0->f_590 = 0;
				}
				else
				{
					__LIB_3__::func_110(uParam0->f_116.f_1, 1, 1);
				}
			}
		}
		else if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) || iVar1 == 1)
		{
			iVar1 = 0;
			iLocal_135 = 0;
			AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT" /* GXT: Filter List */, "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			Stack.Push(iVar0);
			Stack.Push(Global_4537616.f_126[uParam0->f_116.f_1]);
			Stack.Push(Global_4537616[uParam0->f_116.f_1]);
			Call_Loc(uParam0->f_480);
			if (!StackVal)
			{
				__LIB_1__::func_789("HAIR_LOCK", 4000, 0);
			}
			else if (__LIB_36__::func_855(uParam0, uParam0->f_116.f_1))
			{
				if (uParam0->f_494 && !MISC::IS_STRING_NULL_OR_EMPTY(__LIB_13__::func_984(&(uParam0->f_566), 0)))
				{
					__LIB_1__::func_789("HAIR_CUR_2_DLC", 4000, 0);
					__LIB_3__::func_542(__LIB_13__::func_984(&(uParam0->f_566), 0));
				}
				else
				{
					__LIB_1__::func_789("HAIR_CUR_2", 4000, 0);
				}
			}
			else if (!__LIB_36__::func_915(uParam0->f_116.f_2))
			{
				__LIB_1__::func_789("HAIR_AFF_2", 4000, 0);
				__LIB_13__::func_630(MISC::GET_HASH_KEY(&(Global_100493.f_1384)), Global_100493.f_1388, MISC::GET_HASH_KEY(__LIB_12__::func_769(*uParam0, 0, 0)));
				__LIB_2__::func_820(0, 10, 3);
			}
			else if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && __LIB_3__::func_538()) && !__LIB_16__::func_564(joaat("NET_SHOP_TTYPE_BASKET"), __LIB_36__::func_842(uParam0->f_525, -1), __LIB_42__::func_307(uParam0->f_525, uParam0->f_566, 0, 0), joaat("NET_SHOP_ACTION_BUY_ITEM"), 1, uParam0->f_116.f_2, 1, 4, __LIB_37__::func_676(uParam0->f_525, -1), 3))
			{
				__LIB_1__::func_34(__LIB_3__::func_534());
				__LIB_1__::func_789("CSHOP_FAIL" /* GXT: Sorry - this item is unavailable. */, 4000, 0);
			}
			else if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && __LIB_13__::func_376(0)) && !__LIB_16__::func_564(joaat("NET_SHOP_TTYPE_BASKET"), __LIB_36__::func_842(uParam0->f_525, -1), joaat("PO_COUPON_HAIRCUT"), joaat("NET_SHOP_ACTION_SPEND"), 1, 0, 1, 4, __LIB_37__::func_676(uParam0->f_525, -1), 3))
			{
				__LIB_1__::func_34(__LIB_3__::func_534());
				__LIB_1__::func_789("CSHOP_FAIL" /* GXT: Sorry - this item is unavailable. */, 4000, 0);
			}
			else
			{
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && __LIB_3__::func_538())
				{
					uParam0->f_116.f_25 = 1;
					uParam0->f_116.f_26 = 0;
				}
				if (uParam0->f_525 == 1)
				{
					Stack.Push(iParam1);
					Stack.Push(2);
					Stack.Push(uParam0->f_272);
					Stack.Push(0);
					Stack.Push(-1);
					Stack.Push(0);
					Stack.Push(0);
					Stack.Push(0);
					Stack.Push(-1);
					Stack.Push(-1);
					Stack.Push(-1);
					Stack.Push(0);
					Stack.Push(0);
					Stack.Push(0);
					Call_Loc(uParam0->f_479);
					uParam0->f_116.f_15 = 1;
				}
				else if (uParam0->f_525 == 2)
				{
					Stack.Push(iParam1);
					Stack.Push(1);
					Stack.Push(uParam0->f_273);
					Stack.Push(0);
					Stack.Push(-1);
					Stack.Push(0);
					Stack.Push(0);
					Stack.Push(0);
					Stack.Push(-1);
					Stack.Push(-1);
					Stack.Push(-1);
					Stack.Push(0);
					Stack.Push(0);
					Stack.Push(0);
					Call_Loc(uParam0->f_479);
					uParam0->f_116.f_15 = 1;
				}
			}
		}
		else if ((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/)) || __LIB_3__::func_528())
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "CANCEL", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			uParam0->f_116.f_15 = 0;
			uParam0->f_116.f_23 = 0;
			uParam0->f_116.f_22 = 0;
			if (__LIB_36__::func_866() || __LIB_36__::func_865())
			{
				if (uParam0->f_525 == 1)
				{
					Stack.Push(iParam1);
					Stack.Push(2);
					Stack.Push(uParam0->f_272);
					Stack.Push(0);
					Stack.Push(-1);
					Stack.Push(0);
					Stack.Push(0);
					Stack.Push(0);
					Stack.Push(-1);
					Stack.Push(-1);
					Stack.Push(-1);
					Stack.Push(0);
					Stack.Push(0);
					Stack.Push(0);
					Call_Loc(uParam0->f_479);
				}
				else if (uParam0->f_525 == 2)
				{
					Stack.Push(iParam1);
					Stack.Push(1);
					Stack.Push(uParam0->f_273);
					Stack.Push(0);
					Stack.Push(-1);
					Stack.Push(0);
					Stack.Push(0);
					Stack.Push(0);
					Stack.Push(-1);
					Stack.Push(-1);
					Stack.Push(-1);
					Stack.Push(0);
					Stack.Push(0);
					Stack.Push(0);
					Call_Loc(uParam0->f_479);
				}
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					uParam0->f_525 = 4;
					uParam0->f_594 = 1;
					func_432(&(uParam0->f_485), &Global_4537616, 1, __LIB_36__::func_873(uParam0), -1, &(uParam0->f_716), &(uParam0->f_719));
				}
				else
				{
					uParam0->f_525 = 0;
				}
				uParam0->f_116.f_1 = 0;
				uParam0->f_590 = 1;
			}
			else
			{
				uParam0->f_116.f_31 = 6;
				uParam0->f_116.f_5 = 0;
			}
		}
	}
}

void func_593(var uParam0, int iParam1, int iParam2)//Position - 0x5E2EB
{
	int iVar0;
	struct<4> Var1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	struct<14> Var7;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam1);
	func_524(uParam0, !uParam0->f_594);
	__LIB_1__::func_602(0, 0);
	__LIB_8__::func_891(*uParam0, 0);
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	if (uParam0->f_525 == 2)
	{
		__LIB_1__::func_767("HAIR_TITLE_1");
	}
	else
	{
		__LIB_1__::func_767("HAIR_TITLE_2");
	}
	uParam0->f_492 = 0;
	uParam0->f_493 = 0;
	uParam0->f_494 = 0;
	uParam0->f_500 = 0;
	if (Global_4537616.f_252 == 0)
	{
		__LIB_3__::func_572(0, "HAIR_NONE", 0, 1, 0, 0, 0);
	}
	else
	{
		iVar2 = 0;
		while (iVar2 < Global_4537616.f_252)
		{
			iVar5 = Global_4537616[iVar2];
			uVar6 = Global_4537616.f_126[iVar2];
			Stack.Push(iVar0);
			Stack.Push(uVar6);
			Stack.Push(iVar5);
			Stack.Push(-1);
			Call_Loc(uParam0->f_484);
			Var7 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal };
			if (__LIB_42__::func_298(Global_4537616.f_253[iVar2], &Var1))
			{
				Var7.f_8 = { Var1 };
			}
			if (uParam0->f_116.f_1 == iVar2)
			{
				uParam0->f_566 = { Var7.f_8 };
			}
			if (!BitTest(Var7.f_6, 1))
			{
				__LIB_3__::func_572(iVar2, &(Var7.f_8), 0, 1, 0, 0, 0);
				__LIB_3__::func_572(iVar2, "", 1, 1, 0, 0, 0);
				__LIB_14__::func_431(15, 0);
				if (iVar2 == uParam0->f_116.f_1)
				{
					uParam0->f_492 = 1;
				}
			}
			else if (__LIB_36__::func_855(uParam0, iVar2))
			{
				__LIB_3__::func_572(iVar2, &(Var7.f_8), 0, 1, 0, 0, 0);
				__LIB_3__::func_572(iVar2, "", 1, 1, 0, 0, 0);
				__LIB_14__::func_431(14, 0);
				iVar3 = iVar2;
			}
			else
			{
				if (BitTest(Var7.f_6, 4) || (iParam2 && iVar2 == uParam0->f_116.f_1))
				{
					__LIB_3__::func_572(iVar2, &(Var7.f_8), 1, 1, 0, 0, 0);
					__LIB_14__::func_431(2, 0);
					if (iVar2 == uParam0->f_116.f_1)
					{
						uParam0->f_493 = 1;
					}
				}
				else
				{
					__LIB_3__::func_572(iVar2, &(Var7.f_8), 0, 1, 0, 0, 0);
				}
				iVar4 = func_594(uParam0, &Var7, iVar0, iVar5, 0);
				if (iVar4 > 0)
				{
					__LIB_3__::func_572(iVar2, "ITEM_COST" /* GXT: $~1~ */, 1, 1, 0, 0, 0);
					__LIB_13__::func_722(iVar4, 0);
				}
				else
				{
					__LIB_3__::func_572(iVar2, "ITEM_FREE" /* GXT: FREE */, 0, 1, 0, 0, 0);
				}
			}
			iVar2++;
		}
	}
	if (uParam0->f_594)
	{
		uParam0->f_594 = 0;
		__LIB_5__::func_393(uParam0->f_595);
	}
	else
	{
		uParam0->f_116.f_1 = iVar3;
	}
	__LIB_3__::func_110(uParam0->f_116.f_1, 1, 1);
	Stack.Push(iParam1);
	Stack.Push(Global_4537616.f_126[uParam0->f_116.f_1]);
	Stack.Push(Global_4537616[uParam0->f_116.f_1]);
	Stack.Push(0);
	Stack.Push(-1);
	Stack.Push(0);
	Stack.Push(0);
	Stack.Push(0);
	Stack.Push(-1);
	Stack.Push(-1);
	Stack.Push(-1);
	Stack.Push(0);
	Stack.Push(0);
	Stack.Push(0);
	Call_Loc(uParam0->f_479);
	uParam0->f_494 = BitTest(Global_78130[1 /*14*/].f_6, 6);
	func_609(uParam0);
	if (uParam0->f_710)
	{
		__LIB_1__::func_792(201, "ITEM_BUY" /* GXT: Buy */, -1, 0);
		__LIB_1__::func_792(202, "ITEM_BACK" /* GXT: Back */, -1, 0);
		__LIB_6__::func_170(21, "ITEM_MOV_CAM" /* GXT: Move Camera */, -1);
		if (!__LIB_36__::func_864(uParam0->f_525))
		{
			__LIB_1__::func_792(iLocal_134, "ITEM_ZOOM" /* GXT: Zoom */, -1, 0);
		}
	}
	else
	{
		__LIB_1__::func_792(201, "ITEM_BUY" /* GXT: Buy */, -1, 0);
		__LIB_1__::func_792(202, "ITEM_BACK" /* GXT: Back */, -1, 0);
		__LIB_6__::func_170(21, "ITEM_MOV_CAM" /* GXT: Move Camera */, -1);
	}
}

int func_594(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x5E5DC
{
	int iVar0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = uParam1->f_7;
		if (uParam0->f_525 == 1)
		{
			iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) * Global_295754.f_5));
		}
		else if (uParam0->f_525 == 2)
		{
			iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) * Global_295754.f_1));
		}
		else if (uParam0->f_525 == 2)
		{
			iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) * Global_295754.f_3));
		}
		switch (MISC::GET_HASH_KEY(&(uParam1->f_8)))
		{
			case joaat("CLO_BBF_H_05"):
				iVar0 = Global_262145.f_7482 /* Tunable: DLC_FEMALE_HAIR_MESSY_BUN_CHESTNUT */;
				break;
			case joaat("CLO_BBF_H_06"):
				iVar0 = Global_262145.f_7483 /* Tunable: DLC_FEMALE_HAIR_MESSY_BUN_BLONDE */;
				break;
			case joaat("CLO_BBF_H_07"):
				iVar0 = Global_262145.f_7484 /* Tunable: DLC_FEMALE_HAIR_MESSY_BUN_AUBURN */;
				break;
			case joaat("CLO_BBF_H_08"):
				iVar0 = Global_262145.f_7485 /* Tunable: DLC_FEMALE_HAIR_MESSY_BUN_BLACK */;
				break;
			case joaat("CLO_BBF_H_09"):
				iVar0 = Global_262145.f_7486 /* Tunable: DLC_FEMALE_HAIR_MESSY_BUN_BROWN */;
				break;
			case joaat("CLO_BBF_H_00"):
				iVar0 = Global_262145.f_7487 /* Tunable: DLC_FEMALE_HAIR_PIN_UP_GIRL_CHESTNUT */;
				break;
			case joaat("CLO_BBF_H_01"):
				iVar0 = Global_262145.f_7488 /* Tunable: DLC_FEMALE_HAIR_PIN_UP_GIRL_BLONDE */;
				break;
			case joaat("CLO_BBF_H_02"):
				iVar0 = Global_262145.f_7489 /* Tunable: DLC_FEMALE_HAIR_PIN_UP_GIRL_AUBURN */;
				break;
			case joaat("CLO_BBF_H_03"):
				iVar0 = Global_262145.f_7490 /* Tunable: DLC_FEMALE_HAIR_PIN_UP_GIRL_BLACK */;
				break;
			case joaat("CLO_BBF_H_04"):
				iVar0 = Global_262145.f_7491 /* Tunable: DLC_FEMALE_HAIR_PIN_UP_GIRL_BROWN */;
				break;
			case joaat("CLO_BUS_F_H_1_0"):
				iVar0 = Global_262145.f_7492 /* Tunable: DLC_FEMALE_HAIR_TWISTED_BOB_CHESTNUT */;
				break;
			case joaat("CLO_BUS_F_H_1_1"):
				iVar0 = Global_262145.f_7493 /* Tunable: DLC_FEMALE_HAIR_TWISTED_BOB_BLACK */;
				break;
			case joaat("CLO_BUS_F_H_1_2"):
				iVar0 = Global_262145.f_7494 /* Tunable: DLC_FEMALE_HAIR_TWISTED_BOB_AUBURN */;
				break;
			case joaat("CLO_BUS_F_H_1_3"):
				iVar0 = Global_262145.f_7495 /* Tunable: DLC_FEMALE_HAIR_TWISTED_BOB_BROWN */;
				break;
			case joaat("CLO_BUS_F_H_1_4"):
				iVar0 = Global_262145.f_7496 /* Tunable: DLC_FEMALE_HAIR_TWISTED_BOB_BLONDE */;
				break;
			case joaat("CLO_BUS_F_H_0_3"):
				iVar0 = Global_262145.f_7497 /* Tunable: DLC_FEMALE_HAIR_TIGHT_BUN_CHESTNUT */;
				break;
			case joaat("CLO_BUS_F_H_0_4"):
				iVar0 = Global_262145.f_7498 /* Tunable: DLC_FEMALE_HAIR_TIGHT_BUN_BLONDE */;
				break;
			case joaat("CLO_BUS_F_H_0_2"):
				iVar0 = Global_262145.f_7499 /* Tunable: DLC_FEMALE_HAIR_TIGHT_BUN_AUBURN */;
				break;
			case joaat("CLO_BUS_F_H_0_0"):
				iVar0 = Global_262145.f_7500 /* Tunable: DLC_FEMALE_HAIR_TIGHT_BUN_BLACK */;
				break;
			case joaat("CLO_BUS_F_H_0_1"):
				iVar0 = Global_262145.f_7501 /* Tunable: DLC_FEMALE_HAIR_TIGHT_BUN_BROWN */;
				break;
			case joaat("CLO_BBM_H_05"):
				iVar0 = Global_262145.f_7502 /* Tunable: DLC_MALE_HAIR_SURFER_DUDE_DARK_BROWN */;
				break;
			case joaat("CLO_BBM_H_06"):
				iVar0 = Global_262145.f_7503 /* Tunable: DLC_MALE_HAIR_SURFER_DUDE_LIGHT_BROWN */;
				break;
			case joaat("CLO_BBM_H_07"):
				iVar0 = Global_262145.f_7504 /* Tunable: DLC_MALE_HAIR_SURFER_DUDE_AUBURN */;
				break;
			case joaat("CLO_BBM_H_08"):
				iVar0 = Global_262145.f_7505 /* Tunable: DLC_MALE_HAIR_SURFER_DUDE_BLONDE */;
				break;
			case joaat("CLO_BBM_H_09"):
				iVar0 = Global_262145.f_7506 /* Tunable: DLC_MALE_HAIR_SURFER_DUDE_BLACK */;
				break;
			case joaat("CLO_BBM_H_00"):
				iVar0 = Global_262145.f_7507 /* Tunable: DLC_MALE_HAIR_SHAGGY_CURLS_DARK_BROWN */;
				break;
			case joaat("CLO_BBM_H_01"):
				iVar0 = Global_262145.f_7508 /* Tunable: DLC_MALE_HAIR_SHAGGY_CURLS_LIGHT_BROWN */;
				break;
			case joaat("CLO_BBM_H_02"):
				iVar0 = Global_262145.f_7509 /* Tunable: DLC_MALE_HAIR_SHAGGY_CURLS_AUBURN */;
				break;
			case joaat("CLO_BBM_H_03"):
				iVar0 = Global_262145.f_7510 /* Tunable: DLC_MALE_HAIR_SHAGGY_CURLS_BLONDE */;
				break;
			case joaat("CLO_BBM_H_04"):
				iVar0 = Global_262145.f_7511 /* Tunable: DLC_MALE_HAIR_SHAGGY_CURLS_BLACK */;
				break;
			case joaat("CLO_BUS_H_1_0"):
				iVar0 = Global_262145.f_7512 /* Tunable: DLC_MALE_HAIR_HIGH_SLICKED_SIDES_DARK_BROWN */;
				break;
			case joaat("CLO_BUS_H_1_1"):
				iVar0 = Global_262145.f_7513 /* Tunable: DLC_MALE_HAIR_HIGH_SLICKED_SIDES_LIGHT_BROWN */;
				break;
			case joaat("CLO_BUS_H_1_2"):
				iVar0 = Global_262145.f_7514 /* Tunable: DLC_MALE_HAIR_HIGH_SLICKED_SIDES_AUBURN */;
				break;
			case joaat("CLO_BUS_H_1_3"):
				iVar0 = Global_262145.f_7515 /* Tunable: DLC_MALE_HAIR_HIGH_SLICKED_SIDES_BLONDE */;
				break;
			case joaat("CLO_BUS_H_1_4"):
				iVar0 = Global_262145.f_7516 /* Tunable: DLC_MALE_HAIR_HIGH_SLICKED_SIDES_BLACK */;
				break;
			case joaat("CLO_BUS_H_0_0"):
				iVar0 = Global_262145.f_7517 /* Tunable: DLC_MALE_HAIR_SHORT_SIDE_PART_DARK_BROWN */;
				break;
			case joaat("CLO_BUS_H_0_1"):
				iVar0 = Global_262145.f_7518 /* Tunable: DLC_MALE_HAIR_SHORT_SIDE_PART_LIGHT_BROWN */;
				break;
			case joaat("CLO_BUS_H_0_2"):
				iVar0 = Global_262145.f_7519 /* Tunable: DLC_MALE_HAIR_SHORT_SIDE_PART_AUBURN */;
				break;
			case joaat("CLO_BUS_H_0_3"):
				iVar0 = Global_262145.f_7520 /* Tunable: DLC_MALE_HAIR_SHORT_SIDE_PART_BLONDE */;
				break;
			case joaat("CLO_BUS_H_0_4"):
				iVar0 = Global_262145.f_7521 /* Tunable: DLC_MALE_HAIR_SHORT_SIDE_PART_BLACK */;
				break;
			case joaat("CLO_HP_F_HR_0_0"):
				iVar0 = Global_262145.f_8082[0];
				break;
			case joaat("CLO_HP_F_HR_0_1"):
				iVar0 = Global_262145.f_8082[1];
				break;
			case joaat("CLO_HP_F_HR_0_2"):
				iVar0 = Global_262145.f_8082[2];
				break;
			case joaat("CLO_HP_F_HR_0_3"):
				iVar0 = Global_262145.f_8082[3];
				break;
			case joaat("CLO_HP_F_HR_0_4"):
				iVar0 = Global_262145.f_8082[4];
				break;
			case joaat("CLO_HP_F_HR_1_0"):
				iVar0 = Global_262145.f_8082[5];
				break;
			case joaat("CLO_HP_F_HR_1_1"):
				iVar0 = Global_262145.f_8082[6];
				break;
			case joaat("CLO_HP_F_HR_1_2"):
				iVar0 = Global_262145.f_8082[7];
				break;
			case joaat("CLO_HP_F_HR_1_3"):
				iVar0 = Global_262145.f_8082[8];
				break;
			case joaat("CLO_HP_F_HR_1_4"):
				iVar0 = Global_262145.f_8082[9];
				break;
			case joaat("CLO_HP_HR_0_0"):
				iVar0 = Global_262145.f_8082[10];
				break;
			case joaat("CLO_HP_HR_0_1"):
				iVar0 = Global_262145.f_8082[11];
				break;
			case joaat("CLO_HP_HR_0_2"):
				iVar0 = Global_262145.f_8082[12];
				break;
			case joaat("CLO_HP_HR_0_3"):
				iVar0 = Global_262145.f_8082[13];
				break;
			case joaat("CLO_HP_HR_0_4"):
				iVar0 = Global_262145.f_8082[14];
				break;
			case joaat("CLO_HP_HR_1_0"):
				iVar0 = Global_262145.f_8082[15];
				break;
			case joaat("CLO_HP_HR_1_1"):
				iVar0 = Global_262145.f_8082[16];
				break;
			case joaat("CLO_HP_HR_1_2"):
				iVar0 = Global_262145.f_8082[17];
				break;
			case joaat("CLO_HP_HR_1_3"):
				iVar0 = Global_262145.f_8082[18];
				break;
			case joaat("CLO_HP_HR_1_4"):
				iVar0 = Global_262145.f_8082[19];
				break;
		}
		iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_75 /* Tunable: HAIRDO_SHOP_MULTIPLIER */));
		if (BitTest(uParam1->f_6, 6))
		{
			switch (Global_2883589)
			{
				case joaat("CU_VAL_CLOTHES"):
					iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_7057 /* Tunable: VALENTINES_MODIFIER_HAIRCUTS_MULTIPLIER */));
					break;
				case joaat("CU_INDI_CLOTHES"):
					iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_8275 /* Tunable: HAIR_MAKEUP_INDEPENDENCEDAY_GROUP */));
					break;
				}
		}
	}
	else if (uParam0->f_525 == 1)
	{
		iVar0 = __LIB_42__::func_313(uParam0, iParam2, iParam3, 1);
	}
	else if (uParam0->f_525 == 2)
	{
		iVar0 = __LIB_42__::func_313(uParam0, iParam2, iParam3, 0);
	}
	if (bParam4)
	{
		func_554(uParam0, &iVar0);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && __LIB_3__::func_538())
	{
		iVar0 = NETSHOPPING::NET_GAMESERVER_GET_PRICE(__LIB_42__::func_307(uParam0->f_525, uParam1->f_8, 0, 0), joaat("CATEGORY_HAIR"), true);
	}
	return iVar0;
}

void func_609(var uParam0)//Position - 0x622CF
{
	int iVar0;
	struct<14> Var1;
	if (__LIB_14__::func_404(1))
	{
		iVar0 = ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());
		Stack.Push(iVar0);
		Stack.Push(Global_4537616.f_126[uParam0->f_116.f_1]);
		Stack.Push(Global_4537616[uParam0->f_116.f_1]);
		Stack.Push(-1);
		Call_Loc(uParam0->f_484);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal };
		uParam0->f_116.f_2 = func_594(uParam0, &Var1, iVar0, Global_4537616[uParam0->f_116.f_1], 1);
		__LIB_13__::func_897(Var1.f_8, uParam0->f_116.f_2, 0, 1, 0, 0);
	}
}

void func_611(var uParam0, int iParam1)//Position - 0x62373
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	iVar0 = 0;
	__LIB_14__::func_405(&(uParam0->f_236), 300);
	if (!PED::IS_PED_INJURED(iParam1))
	{
		uParam0->f_116.f_15 = 0;
		__LIB_3__::func_567(0, 0, 0, 1);
		if (__LIB_3__::func_51())
		{
			if (Global_4539961 == uParam0->f_715)
			{
				iVar0 = 1;
			}
			else if (BitTest(uParam0->f_716[(Global_4539961 / 32)], (Global_4539961 % 32)))
			{
				uParam0->f_715 = Global_4539961;
				__LIB_3__::func_110(Global_4539961, 1, 1);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			}
		}
		if (((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/) || (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/) && uParam0->f_236.f_8)) || (uParam0->f_236.f_1 < -100 && uParam0->f_236.f_4)) || __LIB_14__::func_181(uParam0->f_236.f_8, 0, 0))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			uParam0->f_236.f_8 = 0;
			uParam0->f_236.f_4 = 0;
			uParam0->f_236.f_20 = MISC::GET_GAME_TIMER();
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				uParam0->f_236.f_24 = NETWORK::GET_NETWORK_TIME();
			}
			bVar1 = false;
			iVar2 = (uParam0->f_715 - 1);
			while (iVar2 >= 0)
			{
				if (BitTest(uParam0->f_716[(iVar2 / 32)], (iVar2 % 32)))
				{
					bVar1 = true;
					uParam0->f_715 = iVar2;
					iVar2 = -1;
				}
				iVar2 = (iVar2 + -1);
			}
			if (!bVar1)
			{
				iVar2 = 59;
				while (iVar2 >= uParam0->f_715 + 1)
				{
					if (BitTest(uParam0->f_716[(iVar2 / 32)], (iVar2 % 32)))
					{
						bVar1 = true;
						uParam0->f_715 = iVar2;
						iVar2 = -1;
					}
					iVar2 = (iVar2 + -1);
				}
			}
			if (bVar1)
			{
				__LIB_3__::func_110(uParam0->f_715, 1, 1);
			}
		}
		else if (((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/) || (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/) && uParam0->f_236.f_9)) || (uParam0->f_236.f_1 > 100 && uParam0->f_236.f_4)) || __LIB_14__::func_180(uParam0->f_236.f_9, 0, 0))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			uParam0->f_236.f_9 = 0;
			uParam0->f_236.f_4 = 0;
			uParam0->f_236.f_20 = MISC::GET_GAME_TIMER();
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				uParam0->f_236.f_24 = NETWORK::GET_NETWORK_TIME();
			}
			bVar3 = false;
			iVar4 = uParam0->f_715 + 1;
			while (iVar4 <= 59)
			{
				if (BitTest(uParam0->f_716[(iVar4 / 32)], (iVar4 % 32)))
				{
					bVar3 = true;
					uParam0->f_715 = iVar4;
					iVar4 = 61;
				}
				iVar4++;
			}
			if (!bVar3)
			{
				iVar4 = 0;
				while (iVar4 <= (uParam0->f_715 - 1))
				{
					if (BitTest(uParam0->f_716[(iVar4 / 32)], (iVar4 % 32)))
					{
						bVar3 = true;
						uParam0->f_715 = iVar4;
						iVar4 = 61;
					}
					iVar4++;
				}
			}
			if (bVar3)
			{
				__LIB_3__::func_110(uParam0->f_715, 1, 1);
			}
		}
		else if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) || iVar0 == 1)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT" /* GXT: Filter List */, "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			uParam0->f_525 = 1;
			uParam0->f_590 = 1;
			func_432(&(uParam0->f_485), &Global_4537616, 1, __LIB_36__::func_873(uParam0), uParam0->f_715, &(uParam0->f_716), &(uParam0->f_719));
		}
		else if ((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/)) || __LIB_3__::func_528())
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "CANCEL", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			uParam0->f_116.f_15 = 0;
			uParam0->f_116.f_23 = 0;
			uParam0->f_116.f_22 = 0;
			if (__LIB_36__::func_866() || __LIB_36__::func_865())
			{
				uParam0->f_525 = 0;
				uParam0->f_116.f_1 = 0;
				uParam0->f_590 = 1;
				func_771(uParam0, iParam1);
			}
			else
			{
				uParam0->f_116.f_31 = 6;
				uParam0->f_116.f_5 = 0;
			}
		}
	}
}

void func_612(var uParam0, int iParam1)//Position - 0x62703
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	__LIB_14__::func_405(&(uParam0->f_236), 300);
	iVar1 = 0;
	if (__LIB_36__::func_866())
	{
		iVar1++;
	}
	if (__LIB_36__::func_865())
	{
		iVar1++;
	}
	if (!PED::IS_PED_INJURED(iParam1))
	{
		uParam0->f_116.f_15 = 0;
		__LIB_3__::func_567(0, 0, 0, 1);
		if (__LIB_3__::func_51())
		{
			if (Global_4539961 == uParam0->f_116.f_1)
			{
				iVar0 = 1;
			}
			else
			{
				uParam0->f_116.f_1 = Global_4539961;
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				__LIB_3__::func_110(uParam0->f_116.f_1, 1, 1);
			}
		}
		if (((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/) || (uParam0->f_236.f_1 < -100 && uParam0->f_236.f_4)) || (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/) && uParam0->f_236.f_8)) || __LIB_14__::func_181(uParam0->f_236.f_8, 0, 0))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			uParam0->f_236.f_8 = 0;
			uParam0->f_236.f_4 = 0;
			uParam0->f_236.f_20 = MISC::GET_GAME_TIMER();
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				uParam0->f_236.f_24 = NETWORK::GET_NETWORK_TIME();
			}
			if (uParam0->f_116.f_1 > 0)
			{
				uParam0->f_116.f_1 = (uParam0->f_116.f_1 - 1);
			}
			else
			{
				uParam0->f_116.f_1 = iVar1;
			}
			__LIB_3__::func_110(uParam0->f_116.f_1, 1, 1);
		}
		else if (((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/) || (uParam0->f_236.f_1 > 100 && uParam0->f_236.f_4)) || (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/) && uParam0->f_236.f_9)) || __LIB_14__::func_180(uParam0->f_236.f_9, 0, 0))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			uParam0->f_236.f_9 = 0;
			uParam0->f_236.f_4 = 0;
			uParam0->f_236.f_20 = MISC::GET_GAME_TIMER();
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				uParam0->f_236.f_24 = NETWORK::GET_NETWORK_TIME();
			}
			if (uParam0->f_116.f_1 < iVar1)
			{
				uParam0->f_116.f_1++;
			}
			else
			{
				uParam0->f_116.f_1 = 0;
			}
			__LIB_3__::func_110(uParam0->f_116.f_1, 1, 1);
		}
		else if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) || iVar0 == 1)
		{
			iVar0 = 0;
			AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT" /* GXT: Filter List */, "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			if (uParam0->f_116.f_1 == 0)
			{
				uParam0->f_525 = 1;
				uParam0->f_590 = 1;
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					uParam0->f_525 = 4;
					uParam0->f_715 = -1;
				}
				func_432(&(uParam0->f_485), &Global_4537616, 1, __LIB_36__::func_873(uParam0), uParam0->f_715, &(uParam0->f_716), &(uParam0->f_719));
			}
			else if (uParam0->f_116.f_1 == 1)
			{
				if (__LIB_36__::func_866())
				{
					uParam0->f_525 = 2;
					if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						func_432(&(uParam0->f_485), &Global_4537616, 0, __LIB_36__::func_873(uParam0), uParam0->f_715, &(uParam0->f_716), &(uParam0->f_719));
					}
				}
				else if (__LIB_36__::func_865())
				{
					uParam0->f_525 = 3;
				}
				uParam0->f_590 = 1;
			}
			else if (uParam0->f_116.f_1 == 2)
			{
				uParam0->f_525 = 3;
				uParam0->f_590 = 1;
			}
		}
		else if ((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/)) || __LIB_3__::func_528())
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "CANCEL", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			uParam0->f_116.f_15 = 0;
			uParam0->f_116.f_23 = 0;
			uParam0->f_116.f_22 = 0;
			uParam0->f_116.f_31 = 5;
			uParam0->f_116.f_5 = 0;
		}
	}
}

void func_616(int iParam0)//Position - 0x62C34
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (Global_78319)
		{
			func_620(&iParam0, -1, 0, 0);
		}
		else
		{
			__LIB_36__::func_910(iParam0);
		}
	}
}

void func_620(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x62D5A
{
	struct<9> Var0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	struct<8> Var8;
	int iVar9;
	if (iParam1 == -1)
	{
		iParam1 = __LIB_0__::func_5();
	}
	if (!bParam3)
	{
		PED::CLEAR_PED_DECORATIONS_LEAVE_SCARS(*iParam0);
	}
	iVar1 = __LIB_0__::func_276(*iParam0);
	bVar2 = func_284(*iParam0, 0);
	bVar3 = __LIB_1__::func_37(*iParam0);
	bVar4 = func_275(*iParam0, -1);
	if (!bParam2)
	{
		if (func_144(*iParam0))
		{
			bParam2 = true;
		}
	}
	if (bParam2)
	{
		bVar3 = true;
	}
	iVar5 = 0;
	while (iVar5 < 127)
	{
		if (__LIB_2__::func_761(iVar5, iParam1))
		{
			if (__LIB_0__::func_445(&Var0, iVar5, iVar1, *iParam0, -1))
			{
				if (__LIB_2__::func_998(*iParam0, &Var0, iVar5, Var0.f_4, Var0.f_8, bVar2, bVar3, bParam2, bVar4))
				{
					if (!bParam3)
					{
						PED::ADD_PED_DECORATION_FROM_HASHES(*iParam0, Var0.f_4, Var0.f_5);
					}
				}
			}
		}
		iVar5++;
	}
	if (__LIB_2__::func_761(123, -1))
	{
		if (PED::GET_PED_DECORATION_ZONE_FROM_HASHES(joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz")) != 7)
		{
			if (!bParam3)
			{
				PED::ADD_PED_DECORATION_FROM_HASHES(*iParam0, joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz"));
			}
		}
	}
	iVar7 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(iVar1);
	iVar6 = 0;
	while (iVar6 < iVar7)
	{
		if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(iVar1, iVar6, &Var8))
		{
			if (!FILES::IS_CONTENT_ITEM_LOCKED(Var8.f_0))
			{
				iVar9 = (129 + iVar6);
				if (__LIB_2__::func_761(iVar9, iParam1))
				{
					if (__LIB_2__::func_998(*iParam0, &(Var8.f_7), iVar9, Var8.f_2, Var8.f_6, bVar2, bVar3, bParam2, bVar4))
					{
						if (!bParam3)
						{
							PED::ADD_PED_DECORATION_FROM_HASHES(*iParam0, Var8.f_2, Var8.f_3);
							__LIB_0__::func_260(*iParam0, Var8.f_2, Var8.f_3);
						}
					}
				}
			}
		}
		iVar6++;
	}
}

void func_622(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x62F25
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_0__::func_251(iParam0);
	if (iVar0 != -1)
	{
		__LIB_36__::func_848(iParam0, &iParam2);
		iVar1 = __LIB_36__::func_857(iParam1, iParam2);
		__LIB_1__::func_354(iVar0, iVar1, iParam3, bParam4, 0);
	}
}

int func_625(int iParam0, int iParam1, var uParam2)//Position - 0x63020
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
	bool bVar9;
	switch (iParam1->f_9)
	{
		case 0:
			iVar0 = __LIB_0__::func_253(385, -1);
			if ((!Global_102961 || (iParam0 == joaat("MP_M_Freemode_01") && !iVar0 >= 91)) || (iParam0 == joaat("MP_F_Freemode_01") && !iVar0 >= 92))
			{
				if (iVar0 != -99)
				{
					iVar1 = -99;
					if (iParam0 == joaat("MP_M_Freemode_01"))
					{
						iVar1 = __LIB_0__::func_463(iVar0);
					}
					else if (iParam0 == joaat("MP_F_Freemode_01"))
					{
						iVar1 = __LIB_0__::func_462(iVar0);
					}
					if (iVar1 != -99 && iVar0 != iVar1)
					{
						iVar0 = iVar1;
					}
				}
			}
			if (iParam1->f_8 == iVar0)
			{
				if (!__LIB_42__::func_308(uParam2, iParam0))
				{
					return 1;
				}
				if (uParam2->f_634 == __LIB_1__::func_360(2153, -1, 0) && uParam2->f_635 == __LIB_1__::func_360(2160, -1, 0))
				{
					return 1;
				}
			}
			break;
		case 1:
			iVar2 = iParam1->f_6;
			if (iVar2 == -1)
			{
				iVar2 = 255;
			}
			iVar3 = __LIB_0__::func_255(iParam1->f_5);
			iVar4 = -99;
			if (iParam1->f_5 == 10)
			{
				if (iVar3 != -1 && __LIB_0__::func_253(iVar3, -1) == 17)
				{
					__LIB_0__::func_408(iVar3, 16, -1);
					iVar4 = 16;
				}
			}
			if (iVar3 != -1 && (iVar2 == __LIB_0__::func_253(iVar3, -1) || iVar2 == iVar4))
			{
				if (iParam1->f_5 == 4 && iVar2 == 255)
				{
					iVar5 = __LIB_0__::func_255(5);
					if (iVar5 != -1)
					{
						if (__LIB_0__::func_253(iVar5, -1) >= 7 && __LIB_0__::func_253(iVar5, -1) < 33)
						{
							return 0;
						}
					}
				}
				if (!__LIB_42__::func_308(uParam2, iParam0))
				{
					return 1;
				}
				iVar6 = func_507(iParam1->f_5, &(uParam2->f_637), -1);
				iVar7 = __LIB_0__::func_250(iParam1->f_5);
				iVar8 = __LIB_0__::func_254(iParam1->f_5);
				if (iVar8 != -1)
				{
					if (uParam2->f_639 != __LIB_1__::func_680(iVar8, -1) && uParam2->f_639 == 0f)
					{
						uParam2->f_639 = __LIB_1__::func_680(iVar8, -1);
					}
				}
				if (((iVar6 == -1 || uParam2->f_634 == iVar6) && (iVar7 == -1 || uParam2->f_635 == __LIB_1__::func_360(iVar7, -1, 0))) && (iVar8 == -1 || uParam2->f_639 == __LIB_1__::func_680(iVar8, -1)))
				{
					return 1;
				}
				else if (iVar2 == 255)
				{
					return 1;
				}
				else
				{
					bVar9 = false;
					if (iVar7 != -1)
					{
						bVar9 = true;
					}
					else
					{
						bVar9 = true;
					}
					if (iVar8 != -1)
					{
						bVar9 = true;
					}
					else
					{
						bVar9 = true;
					}
					if (!bVar9)
					{
						bVar9 = true;
					}
				}
			}
			break;
		case 2:
			if (iParam1->f_6 == SYSTEM::ROUND(__LIB_1__::func_680(157, -1)))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_636(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, int iParam7)//Position - 0x6953D
{
	if (iParam7 == 1)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return;
		}
	}
	if (iParam1 == 7)
	{
		PED::SET_HEAD_BLEND_EYE_COLOR(iParam0, iParam2);
	}
	else
	{
		if (iParam1 == 5 && iParam5 != 2)
		{
			iParam5 = 2;
		}
		else if (iParam1 == 4 && iParam5 != 0)
		{
			iParam5 = 0;
		}
		__LIB_36__::func_848(iParam1, &iParam5);
		if (iParam5 == 1)
		{
		}
		PED::SET_PED_HEAD_OVERLAY(iParam0, iParam1, iParam2, fParam6);
		if (iParam5 != 0)
		{
			if (iParam3 == -1)
			{
				iParam3 = func_507(iParam1, &iParam5, -1);
				if ((iParam1 == 5 && iParam2 != -1) && iParam3 == -1)
				{
					iParam3 = 0;
				}
			}
			if (iParam4 == -1)
			{
				iParam4 = func_525(iParam1, -1);
			}
			PED::SET_PED_HEAD_OVERLAY_TINT(iParam0, iParam1, iParam5, iParam3, iParam4);
		}
		if (iParam1 == 4)
		{
			PED::SET_PED_HEAD_OVERLAY(iParam0, 5, -1, -1f);
		}
		else if (iParam1 == 5)
		{
			PED::SET_PED_HEAD_OVERLAY(iParam0, 4, -1, -1f);
		}
	}
}

void func_656(var uParam0)//Position - 0x69BF8
{
	int iVar0;
	struct<12> Var1;
	int iVar2;
	bool bVar3;
	struct<10> Var4;
	if (__LIB_14__::func_404(1))
	{
		if (Global_78319)
		{
			if (uParam0->f_525 == 2)
			{
			}
			else if (uParam0->f_525 == 1)
			{
				__LIB_2__::func_428(27, 1, -1);
				if (uParam0->f_116.f_2 > 0)
				{
					__LIB_2__::func_553(joaat("MPPLY_INGAMESTORE_MONEYSPENT"), uParam0->f_116.f_2);
				}
				__LIB_36__::func_816(Global_4537616[uParam0->f_116.f_1]);
				Stack.Push(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()));
				Stack.Push(Global_4537616.f_126[uParam0->f_116.f_1]);
				Stack.Push(Global_4537616[uParam0->f_116.f_1]);
				Stack.Push(1);
				Stack.Push(1);
				Call_Loc(uParam0->f_482);
				iVar0 = MISC::GET_HASH_KEY(&(uParam0->f_566));
				if (((((((((iVar0 == joaat("CLO_IND_H_0_0") || iVar0 == joaat("CLO_IND_H_0_1")) || iVar0 == joaat("CLO_IND_H_0_2")) || iVar0 == joaat("CLO_IND_H_0_3")) || iVar0 == joaat("CLO_IND_H_0_4")) || iVar0 == joaat("CLO_INDF_H_0_0")) || iVar0 == joaat("CLO_INDF_H_0_1")) || iVar0 == joaat("CLO_INDF_H_0_2")) || iVar0 == joaat("CLO_INDF_H_0_3")) || iVar0 == joaat("CLO_INDF_H_0_4"))
				{
					__LIB_0__::func_186(3606, 1, -1);
				}
				else if ((((iVar0 == joaat("CLO_VALF_H_0_0") || iVar0 == joaat("CLO_VALF_H_0_1")) || iVar0 == joaat("CLO_VALF_H_0_2")) || iVar0 == joaat("CLO_VALF_H_0_3")) || iVar0 == joaat("CLO_VALF_H_0_4"))
				{
					__LIB_0__::func_186(4246, 1, -1);
				}
				uParam0->f_501 = 1;
			}
			else if (uParam0->f_525 == 3)
			{
				uParam0->f_501 = 1;
			}
			else if (__LIB_36__::func_864(uParam0->f_525))
			{
				if (__LIB_42__::func_314(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), uParam0->f_525, uParam0->f_116.f_1, &Var1, __LIB_36__::func_861(uParam0->f_523)))
				{
					if (Var1.f_9 == 0)
					{
						__LIB_2__::func_428(27, 1, -1);
						if (uParam0->f_116.f_2 > 0)
						{
							__LIB_2__::func_553(joaat("MPPLY_INGAMESTORE_MONEYSPENT"), uParam0->f_116.f_2);
						}
						__LIB_36__::func_816(Global_4537616[uParam0->f_116.f_1]);
						Stack.Push(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()));
						Stack.Push(Global_4537616.f_126[uParam0->f_116.f_1]);
						Stack.Push(Global_4537616[uParam0->f_116.f_1]);
						Stack.Push(1);
						Stack.Push(1);
						Call_Loc(uParam0->f_482);
						if (Var1.f_11 == 1271240597 || Var1.f_11 == -1827014795)
						{
							__LIB_0__::func_186(3606, 1, -1);
						}
						else if (Var1.f_11 == 914374215)
						{
							__LIB_0__::func_186(4246, 1, -1);
						}
						uParam0->f_501 = 1;
					}
					else if (Var1.f_9 == 1 || Var1.f_9 == 2)
					{
						if (((uParam0->f_525 == 11 || uParam0->f_525 == 13) || uParam0->f_525 == 14) || uParam0->f_525 == 15)
						{
							if (Var1.f_11 == 1397114629 || Var1.f_11 == -1384887359)
							{
								__LIB_0__::func_186(3607, 1, -1);
							}
							if (Var1.f_11 == 1034427337 || Var1.f_11 == 689718031)
							{
								__LIB_0__::func_186(4270, 1, -1);
							}
							else if (Var1.f_11 == 773946556 || Var1.f_11 == 1188920977)
							{
								__LIB_0__::func_186(4271, 1, -1);
							}
							else if (Var1.f_11 == 332646433 || Var1.f_11 == 1425414854)
							{
								__LIB_0__::func_186(4272, 1, -1);
							}
							else if (Var1.f_11 == 101002372 || Var1.f_11 == 1680914747)
							{
								__LIB_0__::func_186(4273, 1, -1);
							}
							else if (Var1.f_11 == -259915394 || Var1.f_11 == -1397044638)
							{
								__LIB_0__::func_186(4274, 1, -1);
							}
							else if (Var1.f_11 == -491231765 || Var1.f_11 == -1202658930)
							{
								__LIB_0__::func_186(4275, 1, -1);
							}
							else if (Var1.f_11 == 1624727807 || Var1.f_11 == -2077294849)
							{
								__LIB_0__::func_186(4276, 1, -1);
							}
							else if (Var1.f_11 == 1920336964 || Var1.f_11 == 1871566269)
							{
								__LIB_0__::func_186(4277, 1, -1);
							}
							else if (Var1.f_11 == -1998999285 || Var1.f_11 == -638735717)
							{
								__LIB_0__::func_186(4278, 1, -1);
							}
							else if (Var1.f_11 == -1691200068 || Var1.f_11 == -885912284)
							{
								__LIB_0__::func_186(4279, 1, -1);
							}
							else if (Var1.f_11 == -1249146258 || Var1.f_11 == 911795056)
							{
								__LIB_0__::func_186(4280, 1, -1);
							}
							else if (Var1.f_11 == -942723339 || Var1.f_11 == 680937451)
							{
								__LIB_0__::func_186(4281, 1, -1);
							}
							else if (Var1.f_11 == -693318480 || Var1.f_11 == -1507671294)
							{
								__LIB_0__::func_186(4282, 1, -1);
							}
							else if (Var1.f_11 == -465836082 || Var1.f_11 == -1734596619)
							{
								__LIB_0__::func_186(4283, 1, -1);
							}
							else if (Var1.f_11 == -214792773 || Var1.f_11 == -1832969157)
							{
								__LIB_0__::func_186(4284, 1, -1);
							}
							else if (Var1.f_11 == 209893467 || Var1.f_11 == -53415839)
							{
								__LIB_0__::func_186(4285, 1, -1);
							}
							else if (Var1.f_11 == -163640692 || Var1.f_11 == 646954998)
							{
								__LIB_0__::func_186(4286, 1, -1);
							}
							else if (Var1.f_11 == 2012777989 || Var1.f_11 == -404995440)
							{
								__LIB_0__::func_186(4287, 1, -1);
							}
							else if (Var1.f_11 == 1782084221 || Var1.f_11 == -92411949)
							{
								__LIB_0__::func_186(4288, 1, -1);
							}
							else if (Var1.f_11 == 1532613824 || Var1.f_11 == -894465993)
							{
								__LIB_0__::func_186(4289, 1, -1);
							}
							else if (Var1.f_11 == 1318894406 || Var1.f_11 == 1287195724)
							{
								__LIB_0__::func_186(4290, 1, -1);
							}
							else if (Var1.f_11 == -818529153 || Var1.f_11 == 790876446)
							{
								__LIB_0__::func_186(4291, 1, -1);
							}
							else if (Var1.f_11 == -1578376725 || Var1.f_11 == 1070035557)
							{
								__LIB_0__::func_186(4292, 1, -1);
							}
							else if (Var1.f_11 == -1832828010 || Var1.f_11 == 301242048)
							{
								__LIB_0__::func_186(4293, 1, -1);
							}
							else if (Var1.f_11 == -2072074479 || Var1.f_11 == 1741013601)
							{
								__LIB_0__::func_186(4294, 1, -1);
							}
							else if (Var1.f_11 == 107719401 || Var1.f_11 == 2044421772)
							{
								__LIB_0__::func_186(4295, 1, -1);
							}
							else if (Var1.f_11 == 1090494188 || Var1.f_11 == -1643561644)
							{
								__LIB_0__::func_186(4296, 1, -1);
							}
							else if (Var1.f_11 == -1065738777 || Var1.f_11 == -2018242390)
							{
								__LIB_0__::func_186(4297, 1, -1);
							}
							else if (Var1.f_11 == -841762662 || Var1.f_11 == 561169449)
							{
								__LIB_0__::func_186(4298, 1, -1);
							}
							else if (Var1.f_11 == -1694870808 || Var1.f_11 == 444970575)
							{
								__LIB_0__::func_186(4299, 1, -1);
							}
						}
						if (uParam0->f_525 == 11 && uParam0->f_116.f_1 == 0)
						{
							iVar2 = __LIB_0__::func_255(5);
							if (iVar2 != -1)
							{
								if (__LIB_0__::func_253(iVar2, -1) >= 7 && __LIB_0__::func_253(iVar2, -1) < 33)
								{
									__LIB_0__::func_408(iVar2, 255, -1);
								}
							}
						}
						uParam0->f_501 = 1;
					}
					if (Var1.f_10 != -1)
					{
						func_744(Var1.f_10, 1);
					}
				}
				uParam0->f_501 = 1;
			}
		}
		else
		{
			if (uParam0->f_116.f_2 > 0)
			{
				__LIB_16__::func_576(__LIB_14__::func_466(), __LIB_13__::func_874(*uParam0), uParam0->f_116.f_2);
			}
			bVar3 = __LIB_14__::func_466();
			if (uParam0->f_525 == 1)
			{
				__LIB_36__::func_911();
				if (__LIB_0__::func_786(6, 0))
				{
					if (bVar3 == 1)
					{
						__LIB_13__::func_782(6, 1, 1);
					}
				}
				Global_113386.f_2363.f_539[bVar3 /*65*/].f_59 = Global_4537616[uParam0->f_116.f_1];
			}
			else if (uParam0->f_525 == 2)
			{
				Global_113386.f_2363.f_539[bVar3 /*65*/].f_62 = Global_4537616[uParam0->f_116.f_1];
			}
		}
		Global_4535613 = 1;
		__LIB_42__::func_299(*uParam0, 1, 4, 0);
		if (__LIB_0__::func_112())
		{
			__LIB_1__::func_34(__LIB_3__::func_534());
		}
		if (uParam0->f_525 == 1)
		{
			uParam0->f_272 = Global_4537616[uParam0->f_116.f_1];
		}
		else if (uParam0->f_525 == 2)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				uParam0->f_273 = __LIB_36__::func_904(uParam0->f_116.f_1);
			}
			else
			{
				uParam0->f_273 = Global_4537616[uParam0->f_116.f_1];
			}
			uParam0->f_275 = 1f;
		}
		else if (uParam0->f_525 == 3)
		{
			uParam0->f_611 = uParam0->f_116.f_1;
		}
		else if (__LIB_36__::func_864(uParam0->f_525))
		{
			if (__LIB_42__::func_314(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), uParam0->f_525, uParam0->f_116.f_1, &Var4, __LIB_36__::func_861(uParam0->f_523)))
			{
				if (Var4.f_9 == 0)
				{
					uParam0->f_272 = uParam0->f_116.f_1;
				}
				else if (Var4.f_9 == 1 || Var4.f_9 == 2)
				{
					uParam0->f_273 = uParam0->f_116.f_1;
					if (Var4.f_9 == 2)
					{
						PED::CLONE_PED_TO_TARGET(uParam0->f_640.f_2, PLAYER::PLAYER_PED_ID());
					}
				}
			}
		}
		else
		{
			uParam0->f_272 = uParam0->f_116.f_1;
			uParam0->f_273 = uParam0->f_116.f_1;
		}
		uParam0->f_116.f_23 = 1;
		uParam0->f_590 = 1;
		__LIB_0__::func_183(136, 1);
	}
}

void func_744(var uParam0, bool bParam1)//Position - 0x78A67
{
	int iVar0;
	int iVar1;
	iVar0 = func_408(uParam0);
	iVar1 = uParam0;
	if (iVar1 > -1)
	{
		if (bParam1)
		{
			MISC::SET_BIT(&iVar0, __LIB_0__::func_160(iVar1));
		}
		else
		{
			MISC::CLEAR_BIT(&iVar0, __LIB_0__::func_160(iVar1));
		}
		__LIB_1__::func_354(__LIB_36__::func_829(uParam0), iVar0, -1, 1, 0);
	}
}

void func_771(var uParam0, int iParam1)//Position - 0x7B026
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<4> Var5;
	iVar1 = ENTITY::GET_ENTITY_MODEL(iParam1);
	if (!uParam0->f_589 || uParam0->f_590)
	{
		switch (uParam0->f_525)
		{
			case 0:
				if (!uParam0->f_590)
				{
					uParam0->f_116.f_1 = 0;
				}
				__LIB_1__::func_602(0, 0);
				__LIB_8__::func_891(*uParam0, 0);
				__LIB_1__::func_766(1, 0, 0, 0, 0);
				__LIB_1__::func_765(1, 1, 1, 1, 1);
				__LIB_1__::func_767("HAIR_TITLE_0");
				uParam0->f_492 = 0;
				uParam0->f_493 = 0;
				uParam0->f_500 = 0;
				if (func_394(uParam0, iVar1, 1))
				{
					__LIB_3__::func_572(0, "HAIR_OPTION_1", 1, 1, 0, 0, 0);
					__LIB_14__::func_431(2, 0);
				}
				else
				{
					__LIB_3__::func_572(0, "HAIR_OPTION_1", 0, 1, 0, 0, 0);
				}
				if (__LIB_36__::func_866())
				{
					if (func_394(uParam0, iVar1, 2))
					{
						__LIB_3__::func_572(1, "HAIR_OPTION_0", 1, 1, 0, 0, 0);
						__LIB_14__::func_431(2, 0);
					}
					else
					{
						__LIB_3__::func_572(1, "HAIR_OPTION_0", 0, 1, 0, 0, 0);
					}
					if (__LIB_36__::func_865())
					{
						if (func_394(uParam0, iVar1, 3))
						{
							__LIB_3__::func_572(2, "HAIR_OPTION_2", 1, 1, 0, 0, 0);
							__LIB_14__::func_431(2, 0);
						}
						else
						{
							__LIB_3__::func_572(2, "HAIR_OPTION_2", 0, 1, 0, 0, 0);
						}
					}
				}
				else if (__LIB_36__::func_865())
				{
					if (func_394(uParam0, iVar1, 3))
					{
						__LIB_3__::func_572(1, "HAIR_OPTION_2", 1, 1, 0, 0, 0);
						__LIB_14__::func_431(2, 0);
					}
					else
					{
						__LIB_3__::func_572(1, "HAIR_OPTION_2", 0, 1, 0, 0, 0);
					}
				}
				__LIB_3__::func_110(uParam0->f_116.f_1, 1, 1);
				if (!__LIB_36__::func_864(uParam0->f_525))
				{
					__LIB_1__::func_792(201, "ITEM_SELECT" /* GXT: Select */, -1, 0);
				}
				else if (uParam0->f_525 == 5 || uParam0->f_525 == 12)
				{
					__LIB_1__::func_792(201, "ITEM_SELECT" /* GXT: Select */, -1, 0);
				}
				else
				{
					__LIB_1__::func_792(201, "ITEM_BUY" /* GXT: Buy */, -1, 0);
				}
				if (uParam0->f_710)
				{
					__LIB_1__::func_792(202, "ITEM_BACK" /* GXT: Back */, -1, 0);
					__LIB_14__::func_964(&uLocal_126);
					__LIB_6__::func_170(21, "ITEM_MOV_CAM" /* GXT: Move Camera */, -1);
					if (!__LIB_36__::func_864(uParam0->f_525))
					{
						__LIB_1__::func_792(iLocal_134, "ITEM_ZOOM" /* GXT: Zoom */, -1, 0);
					}
				}
				else
				{
					__LIB_1__::func_792(202, "ITEM_BACK" /* GXT: Back */, -1, 0);
					__LIB_14__::func_964(&uLocal_126);
					__LIB_6__::func_170(21, "ITEM_MOV_CAM" /* GXT: Move Camera */, -1);
				}
				break;
			case 4:
				__LIB_42__::func_316(uParam0);
				break;
			case 1:
				func_593(uParam0, iParam1, 0);
				break;
			case 2:
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					func_593(uParam0, iParam1, 0);
				}
				else
				{
					func_776(uParam0, !uParam0->f_594);
					func_552(uParam0);
					__LIB_1__::func_602(0, 0);
					__LIB_8__::func_891(*uParam0, 0);
					__LIB_1__::func_766(1, 1, 0, 0, 0);
					__LIB_1__::func_765(1, 2, 1, 1, 1);
					__LIB_1__::func_767("HAIR_TITLE_1");
					uParam0->f_492 = 0;
					uParam0->f_493 = 0;
					uParam0->f_494 = 0;
					uParam0->f_500 = 0;
					iVar4 = __LIB_36__::func_836();
					iVar3 = 0;
					while (iVar3 < iVar4)
					{
						iVar2 = __LIB_36__::func_904(iVar3);
						StringCopy(&Var5, "HAIR_BEARD", 16);
						StringIntConCat(&Var5, iVar2, 16);
						if (__LIB_36__::func_853(&Var5, iVar2))
						{
							if (uParam0->f_116.f_1 == iVar3)
							{
								uParam0->f_494 = 1;
							}
						}
						if (uParam0->f_116.f_1 == iVar3)
						{
							uParam0->f_566 = { Var5 };
						}
						if (!__LIB_42__::func_311(iVar2) || __LIB_36__::func_854(iVar2))
						{
							if (func_430(iVar2) && !__LIB_42__::func_306(iVar2))
							{
								__LIB_3__::func_572(iVar3, &Var5, 1, 1, 0, 0, 0);
								__LIB_14__::func_431(2, 0);
								if (iVar3 == uParam0->f_116.f_1)
								{
									uParam0->f_493 = 1;
								}
							}
							else
							{
								__LIB_3__::func_572(iVar3, &Var5, 0, 1, 0, 0, 0);
							}
							if (iVar2 == uParam0->f_273)
							{
								__LIB_3__::func_572(iVar3, "", 1, 1, 0, 0, 0);
								__LIB_14__::func_431(14, 0);
							}
							else if (!func_430(iVar2))
							{
								__LIB_3__::func_572(iVar3, "", 1, 1, 0, 0, 0);
								__LIB_14__::func_431(15, 0);
								if (iVar3 == uParam0->f_116.f_1)
								{
									uParam0->f_492 = 1;
								}
							}
							else
							{
								__LIB_3__::func_572(iVar3, "ITEM_COST" /* GXT: $~1~ */, 1, 1, 0, 0, 0);
								__LIB_13__::func_722(func_553(uParam0, iVar2, &Var5, 1), 0);
							}
						}
						iVar3++;
					}
					if (uParam0->f_116.f_1 > iVar4 || uParam0->f_116.f_1 < 0)
					{
						uParam0->f_116.f_1 = 0;
					}
					func_636(iParam1, 1, (__LIB_36__::func_904(uParam0->f_116.f_1) - 1), uParam0->f_634, 0, 0, 1f, 1);
					if (uParam0->f_710)
					{
						__LIB_1__::func_792(201, "ITEM_BUY" /* GXT: Buy */, -1, 0);
						__LIB_1__::func_792(202, "ITEM_BACK" /* GXT: Back */, -1, 0);
						__LIB_14__::func_964(&uLocal_126);
						__LIB_6__::func_170(21, "ITEM_MOV_CAM" /* GXT: Move Camera */, -1);
						if (!__LIB_36__::func_864(uParam0->f_525))
						{
							__LIB_1__::func_792(iLocal_134, "ITEM_ZOOM" /* GXT: Zoom */, -1, 0);
						}
					}
					else
					{
						__LIB_1__::func_792(201, "ITEM_BUY" /* GXT: Buy */, -1, 0);
						__LIB_1__::func_792(202, "ITEM_BACK" /* GXT: Back */, -1, 0);
						__LIB_14__::func_964(&uLocal_126);
						__LIB_6__::func_170(21, "ITEM_MOV_CAM" /* GXT: Move Camera */, -1);
					}
					if (uParam0->f_594)
					{
						uParam0->f_594 = 0;
						__LIB_5__::func_393(uParam0->f_595);
					}
					__LIB_3__::func_110(uParam0->f_116.f_1, 1, 1);
				}
				break;
			case 3:
				__LIB_1__::func_602(0, 0);
				__LIB_8__::func_891(*uParam0, 0);
				__LIB_1__::func_766(1, 1, 0, 0, 0);
				__LIB_1__::func_765(1, 2, 1, 1, 1);
				__LIB_1__::func_767("HAIR_TITLE_3");
				__LIB_36__::func_912(uParam0, !uParam0->f_594);
				if (uParam0->f_611 < 0 || uParam0->f_611 >= uParam0->f_612)
				{
					uParam0->f_611 = 0;
				}
				uParam0->f_494 = 0;
				iVar0 = 0;
				while (iVar0 < uParam0->f_612)
				{
					iVar0++;
				}
				if (uParam0->f_594)
				{
					uParam0->f_594 = 0;
					__LIB_5__::func_393(uParam0->f_595);
				}
				else
				{
					uParam0->f_116.f_1 = uParam0->f_611;
				}
				__LIB_3__::func_110(uParam0->f_116.f_1, 1, 1);
				if (uParam0->f_710)
				{
					__LIB_1__::func_792(201, "ITEM_BUY" /* GXT: Buy */, -1, 0);
					__LIB_1__::func_792(202, "ITEM_BACK" /* GXT: Back */, -1, 0);
					__LIB_14__::func_964(&uLocal_126);
					__LIB_6__::func_170(21, "ITEM_MOV_CAM" /* GXT: Move Camera */, -1);
					if (!__LIB_36__::func_864(uParam0->f_525))
					{
						__LIB_1__::func_792(iLocal_134, "ITEM_ZOOM" /* GXT: Zoom */, -1, 0);
					}
				}
				else
				{
					__LIB_1__::func_792(201, "ITEM_BUY" /* GXT: Buy */, -1, 0);
					__LIB_1__::func_792(202, "ITEM_BACK" /* GXT: Back */, -1, 0);
					__LIB_14__::func_964(&uLocal_126);
					__LIB_6__::func_170(21, "ITEM_MOV_CAM" /* GXT: Move Camera */, -1);
				}
				break;
			case 5:
				func_774(uParam0, iParam1);
				break;
			case 12:
				func_772(uParam0, iParam1);
				break;
			default:
				if (__LIB_36__::func_864(uParam0->f_525))
				{
					uParam0->f_709 = 1;
					func_509(uParam0, iParam1, 1, 1);
				}
				break;
		}
		uParam0->f_589 = 1;
		uParam0->f_590 = 0;
		uParam0->f_709 = 0;
	}
}

void func_772(var uParam0, int iParam1)//Position - 0x7B66B
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam1);
	func_524(uParam0, !uParam0->f_590);
	__LIB_1__::func_602(0, 0);
	__LIB_8__::func_891(*uParam0, 0);
	uParam0->f_725 = 0;
	uParam0->f_492 = 0;
	uParam0->f_493 = 0;
	uParam0->f_500 = 0;
	__LIB_1__::func_766(1, 0, 0, 0, 0);
	__LIB_1__::func_765(1, 1, 1, 1, 1);
	__LIB_1__::func_767(__LIB_36__::func_847(12, 1));
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = __LIB_36__::func_850(iVar1);
		if (__LIB_36__::func_851(iVar0, iVar2, uParam0->f_523))
		{
			if (func_394(uParam0, iVar0, iVar2))
			{
				__LIB_3__::func_572(iVar1, __LIB_36__::func_847(iVar2, 0), 1, 1, 0, 0, 0);
				__LIB_14__::func_431(2, 0);
			}
			else if (func_773(uParam0, iVar0, iVar2))
			{
				__LIB_3__::func_572(iVar1, __LIB_36__::func_847(iVar2, 0), 1, 1, 0, 0, 0);
				__LIB_14__::func_431(51, 0);
			}
			else
			{
				__LIB_3__::func_572(iVar1, __LIB_36__::func_847(iVar2, 0), 0, 1, 0, 0, 0);
			}
		}
		iVar1++;
	}
	__LIB_5__::func_393(uParam0->f_725);
	__LIB_3__::func_110(uParam0->f_116.f_1, 1, 1);
	if (!__LIB_36__::func_864(uParam0->f_525))
	{
		__LIB_1__::func_792(201, "ITEM_SELECT" /* GXT: Select */, -1, 0);
	}
	else if (uParam0->f_525 == 5 || uParam0->f_525 == 12)
	{
		__LIB_1__::func_792(201, "ITEM_SELECT" /* GXT: Select */, -1, 0);
	}
	else
	{
		__LIB_1__::func_792(201, "ITEM_BUY" /* GXT: Buy */, -1, 0);
	}
	if (uParam0->f_710)
	{
		__LIB_1__::func_792(202, "ITEM_BACK" /* GXT: Back */, -1, 0);
		__LIB_14__::func_964(&uLocal_126);
		__LIB_6__::func_170(21, "ITEM_MOV_CAM" /* GXT: Move Camera */, -1);
		if (!__LIB_36__::func_864(uParam0->f_525))
		{
			__LIB_1__::func_792(iLocal_134, "ITEM_ZOOM" /* GXT: Zoom */, -1, 0);
		}
	}
	else
	{
		__LIB_1__::func_792(202, "ITEM_BACK" /* GXT: Back */, -1, 0);
		__LIB_14__::func_964(&uLocal_126);
		__LIB_6__::func_170(21, "ITEM_MOV_CAM" /* GXT: Move Camera */, -1);
	}
	__LIB_36__::func_846(uParam0);
}

int func_773(var uParam0, int iParam1, int iParam2)//Position - 0x7B827
{
	struct<2> Var0;
	int iVar1;
	if (__LIB_36__::func_864(iParam2))
	{
		iVar1 = 0;
		while (iVar1 < __LIB_36__::func_834(iParam1, iParam2))
		{
			if (__LIB_42__::func_314(iParam1, iParam2, iVar1, &Var0, __LIB_36__::func_861(uParam0->f_523)))
			{
				if ((func_399(uParam0, iParam1, iParam2, iVar1) && __LIB_36__::func_841(&(Var0.f_1), iParam2, Var0.f_0)) && !func_625(iParam1, &Var0, uParam0))
				{
					return 1;
				}
			}
			iVar1++;
		}
		return 0;
	}
	return 0;
}

void func_774(var uParam0, int iParam1)//Position - 0x7B8A2
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam1);
	func_524(uParam0, !uParam0->f_590);
	__LIB_1__::func_602(0, 0);
	__LIB_8__::func_891(*uParam0, 0);
	__LIB_1__::func_766(1, 0, 0, 0, 0);
	__LIB_1__::func_765(1, 1, 1, 1, 1);
	__LIB_1__::func_767(__LIB_36__::func_847(5, 1));
	uParam0->f_725 = 0;
	uParam0->f_492 = 0;
	uParam0->f_493 = 0;
	uParam0->f_500 = 0;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		iVar2 = __LIB_36__::func_852(iVar1);
		if (__LIB_36__::func_851(iVar0, iVar2, uParam0->f_523))
		{
			bVar3 = false;
			bVar4 = false;
			if (iVar2 == 12)
			{
				if (!bVar3)
				{
					if (__LIB_36__::func_851(iVar0, 13, uParam0->f_523))
					{
						if (func_394(uParam0, iVar0, 13))
						{
							bVar3 = true;
						}
					}
				}
				if (!bVar3)
				{
					if (__LIB_36__::func_851(iVar0, 14, uParam0->f_523))
					{
						if (func_394(uParam0, iVar0, 14))
						{
							bVar3 = true;
						}
					}
				}
				if (!bVar3)
				{
					if (__LIB_36__::func_851(iVar0, 15, uParam0->f_523))
					{
						if (func_394(uParam0, iVar0, 15))
						{
							bVar3 = true;
						}
					}
				}
				if (!bVar3)
				{
					if (!bVar4)
					{
						if (__LIB_36__::func_851(iVar0, 13, uParam0->f_523))
						{
							if (func_773(uParam0, iVar0, 13))
							{
								bVar4 = true;
							}
						}
					}
					if (!bVar4)
					{
						if (__LIB_36__::func_851(iVar0, 14, uParam0->f_523))
						{
							if (func_773(uParam0, iVar0, 14))
							{
								bVar4 = true;
							}
						}
					}
					if (!bVar4)
					{
						if (__LIB_36__::func_851(iVar0, 15, uParam0->f_523))
						{
							if (func_773(uParam0, iVar0, 15))
							{
								bVar4 = true;
							}
						}
					}
				}
			}
			else if (func_394(uParam0, iVar0, iVar2))
			{
				bVar3 = true;
			}
			else if (func_773(uParam0, iVar0, iVar2))
			{
				bVar4 = true;
			}
			if (bVar3)
			{
				__LIB_3__::func_572(iVar1, __LIB_36__::func_847(iVar2, 0), 1, 1, 0, 0, 0);
				__LIB_14__::func_431(2, 0);
			}
			else if (bVar4)
			{
				__LIB_3__::func_572(iVar1, __LIB_36__::func_847(iVar2, 0), 1, 1, 0, 0, 0);
				__LIB_14__::func_431(51, 0);
			}
			else
			{
				__LIB_3__::func_572(iVar1, __LIB_36__::func_847(iVar2, 0), 0, 1, 0, 0, 0);
			}
		}
		iVar1++;
	}
	__LIB_3__::func_110(uParam0->f_116.f_1, 1, 1);
	if (!__LIB_36__::func_864(uParam0->f_525))
	{
		__LIB_1__::func_792(201, "ITEM_SELECT" /* GXT: Select */, -1, 0);
	}
	else if (uParam0->f_525 == 5 || uParam0->f_525 == 12)
	{
		__LIB_1__::func_792(201, "ITEM_SELECT" /* GXT: Select */, -1, 0);
	}
	else
	{
		__LIB_1__::func_792(201, "ITEM_BUY" /* GXT: Buy */, -1, 0);
	}
	if (uParam0->f_710)
	{
		__LIB_1__::func_792(202, "ITEM_BACK" /* GXT: Back */, -1, 0);
		__LIB_14__::func_964(&uLocal_126);
		__LIB_6__::func_170(21, "ITEM_MOV_CAM" /* GXT: Move Camera */, -1);
		if (!__LIB_36__::func_864(uParam0->f_525))
		{
			__LIB_1__::func_792(iLocal_134, "ITEM_ZOOM" /* GXT: Zoom */, -1, 0);
		}
	}
	else
	{
		__LIB_1__::func_792(202, "ITEM_BACK" /* GXT: Back */, -1, 0);
		__LIB_14__::func_964(&uLocal_126);
		__LIB_6__::func_170(21, "ITEM_MOV_CAM" /* GXT: Move Camera */, -1);
	}
	__LIB_36__::func_846(uParam0);
}

void func_776(var uParam0, bool bParam1)//Position - 0x7BBBB
{
	if (__LIB_14__::func_404(1))
	{
		if (uParam0->f_273 == -1)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				uParam0->f_273 = __LIB_0__::func_253(448, -1) + 1;
				if (uParam0->f_273 == 256)
				{
					uParam0->f_273 = 0;
				}
				uParam0->f_275 = __LIB_1__::func_680(88, -1);
			}
			else
			{
				Stack.Push(PLAYER::PLAYER_PED_ID());
				Stack.Push(1);
				Stack.Push(-1);
				Call_Loc(uParam0->f_478);
				uParam0->f_273 = StackVal;
				uParam0->f_275 = 1f;
			}
			uParam0->f_274 = uParam0->f_273;
		}
		if (bParam1)
		{
			uParam0->f_116.f_1 = __LIB_36__::func_862(uParam0->f_273);
		}
	}
}

void func_808(var uParam0)//Position - 0x7DBE8
{
	int iVar0;
	bool bVar1;
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_640.f_2) && !PED::IS_PED_INJURED(uParam0->f_640.f_2))
	{
		iVar0 = uParam0->f_640.f_2;
	}
	if (!Global_78319)
	{
		PED::SET_PED_CONFIG_FLAG(iVar0, 240, false);
	}
	if ((__LIB_14__::func_404(1) && !PED::IS_PED_INJURED(iVar0)) && !PED::IS_PED_INJURED(uParam0->f_12))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_324(uParam0);
			PED::RELEASE_PED_PRELOAD_PROP_DATA(PLAYER::PLAYER_PED_ID());
			PED::RELEASE_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID());
		}
		if (uParam0->f_525 == 1)
		{
			Stack.Push(iVar0);
			Stack.Push(2);
			Stack.Push(uParam0->f_272);
			Stack.Push(0);
			Stack.Push(-1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Stack.Push(-1);
			Stack.Push(-1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Call_Loc(uParam0->f_479);
		}
		else if (uParam0->f_525 == 2)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (__LIB_36__::func_866())
				{
					func_636(iVar0, 1, (uParam0->f_273 - 1), uParam0->f_634, 0, 0, uParam0->f_275, 1);
				}
			}
			else
			{
				Stack.Push(iVar0);
				Stack.Push(1);
				Stack.Push(uParam0->f_273);
				Stack.Push(0);
				Stack.Push(-1);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Stack.Push(-1);
				Stack.Push(-1);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Call_Loc(uParam0->f_479);
			}
		}
		else if (uParam0->f_525 == 3)
		{
			if (__LIB_36__::func_865())
			{
				func_636(iVar0, 4, (uParam0->f_611 - 1), uParam0->f_634, 0, 0, 1f, 1);
				if ((uParam0->f_611 - 1) == -1 || (uParam0->f_611 - 1) > 15)
				{
					func_636(iVar0, 2, __LIB_0__::func_253(449, __LIB_0__::func_5()), uParam0->f_634, 0, 0, 1f, 1);
				}
				else
				{
					func_636(iVar0, 2, __LIB_0__::func_253(449, __LIB_0__::func_5()), uParam0->f_634, 0, 0, 0f, 1);
				}
			}
		}
		if (!Global_78319)
		{
			bVar1 = __LIB_14__::func_466();
			if (__LIB_0__::func_374(bVar1))
			{
				Global_100166[bVar1 /*65*/].f_13[2] = PED::GET_PED_DRAWABLE_VARIATION(iVar0, 2);
				Global_100166[bVar1 /*65*/][2] = PED::GET_PED_TEXTURE_VARIATION(iVar0, 2);
				Global_100166[bVar1 /*65*/].f_13[0] = PED::GET_PED_DRAWABLE_VARIATION(iVar0, 0);
				Global_100166[bVar1 /*65*/][0] = PED::GET_PED_TEXTURE_VARIATION(iVar0, 0);
				Global_100166[bVar1 /*65*/].f_13[1] = PED::GET_PED_DRAWABLE_VARIATION(iVar0, 1);
				Global_100166[bVar1 /*65*/][1] = PED::GET_PED_TEXTURE_VARIATION(iVar0, 1);
			}
		}
		uParam0->f_116.f_31 = 6;
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_329(uParam0);
		}
	}
}

void func_809(var uParam0)//Position - 0x7DE03
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	float fVar4;
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_640.f_2) && !PED::IS_PED_INJURED(uParam0->f_640.f_2))
	{
		iVar0 = uParam0->f_640.f_2;
	}
	if (!Global_78319)
	{
		PED::SET_PED_CONFIG_FLAG(iVar0, 240, false);
	}
	if ((__LIB_14__::func_404(1) && !PED::IS_PED_INJURED(iVar0)) && !PED::IS_PED_INJURED(uParam0->f_12))
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (NETWORK::NETWORK_PLAYER_HAS_HEADSET(PLAYER::PLAYER_ID()))
			{
				if (NETWORK::NETWORK_IS_PLAYER_TALKING(PLAYER::PLAYER_ID()))
				{
					PED::SET_PED_RESET_FLAG(iVar0, 302, true);
				}
			}
		}
		switch (uParam0->f_116.f_5)
		{
			case 0:
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					func_122(uParam0);
					__LIB_13__::func_610(1);
					iVar0 = PLAYER::PLAYER_PED_ID();
				}
				__LIB_13__::func_617();
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					HUD::REMOVE_MULTIPLAYER_WALLET_CASH();
					HUD::REMOVE_MULTIPLAYER_BANK_CASH();
				}
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					func_324(uParam0);
				}
				__LIB_36__::func_920(*uParam0, &Var1, &Var2);
				TASK::TASK_PLAY_ANIM_ADVANCED(iVar0, uParam0->f_486, "player_exitchair", Var1, Var2, 1000f, -2f, -1, 37896, 0f, 2, 1);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iVar0, false, false);
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					uParam0->f_530 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(Var1, Var2, 2, false, false, 1f, 0f, 1f);
					NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_530, uParam0->f_486, "player_exitchair", 1000f, -1f, 263, 0, 1000f, 0);
					NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam0->f_530);
					TASK::TASK_PLAY_ANIM_ADVANCED(uParam0->f_12, uParam0->f_486, "keeper_exitchair", Var1, Var2, 1000f, -1000f, -1, 5642, 0f, 2, 1);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uParam0->f_12, false, false);
					__LIB_36__::func_871(uParam0);
					__LIB_42__::func_320(uParam0, 1, 0);
					__LIB_36__::func_870(uParam0, uParam0->f_12, "keeper_exitchair", 5, 4f, -2f);
					__LIB_36__::func_869(uParam0, NETWORK::NET_TO_ENT(Local_66.f_1), __LIB_36__::func_872("keeper_exitchair"), 0, 1148846080, -998637568);
					__LIB_36__::func_868(uParam0);
				}
				else
				{
					__LIB_42__::func_319(uParam0, "keeper_exitchair", 0, 0, 1, -1056964608);
				}
				__LIB_42__::func_317(uParam0, __LIB_42__::func_318(uParam0, 1, ""));
				PED::SET_FORCE_FOOTSTEP_UPDATE(PLAYER::PLAYER_PED_ID(), true);
				if (!Global_78319)
				{
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 240, false);
				}
				uParam0->f_503.f_19 = 0;
				uParam0->f_116.f_5++;
				break;
			case 1:
				if (__LIB_36__::func_873(uParam0))
				{
					fVar3 = 0.807f;
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD")) != 0)
						{
							uParam0->f_528 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam0->f_530);
							if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uParam0->f_528) || PED::GET_SYNCHRONIZED_SCENE_PHASE(uParam0->f_528) >= 0.7181f)
							{
								TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), uParam0->f_184.f_39, 1f, -1, 40000f, 0.5f);
								PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Walk"), false, 1, false);
							}
						}
					}
				}
				else
				{
					fVar3 = 0.92f;
				}
				if (CAM::GET_CAM_ANIM_CURRENT_PHASE(uParam0->f_51[0 /*12*/]) >= fVar3)
				{
					CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(true, 0f, 3, 0);
					uParam0->f_116.f_5++;
				}
				break;
			case 2:
				if (__LIB_36__::func_873(uParam0))
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						fVar4 = 0.7181f;
					}
					else
					{
						fVar4 = 0.9151f;
					}
				}
				else
				{
					fVar4 = 0.8779f;
				}
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (ENTITY::HAS_ENTITY_ANIM_FINISHED(iVar0, uParam0->f_486, "player_exitchair", 3) || ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iVar0, uParam0->f_486, "player_exitchair") >= fVar4)
					{
						uParam0->f_116.f_31 = 7;
						PED::SET_FORCE_FOOTSTEP_UPDATE(PLAYER::PLAYER_PED_ID(), false);
						TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), uParam0->f_184.f_39, 1f, -1, 40000f, 0.5f);
						PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Walk"), false, 1, false);
					}
				}
				else
				{
					uParam0->f_528 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam0->f_530);
					if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uParam0->f_528) || PED::GET_SYNCHRONIZED_SCENE_PHASE(uParam0->f_528) >= fVar4)
					{
						uParam0->f_116.f_31 = 7;
						PED::SET_FORCE_FOOTSTEP_UPDATE(PLAYER::PLAYER_PED_ID(), false);
						__LIB_42__::func_300();
						__LIB_36__::func_871(uParam0);
						if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD")) != 0)
						{
							if (*uParam0 == 50)
							{
							}
							else
							{
								TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), uParam0->f_184.f_39, 1f, -1, 40000f, 0.5f);
								PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Walk"), false, 1, false);
							}
						}
					}
				}
				break;
			}
	}
}

void func_810(var uParam0)//Position - 0x7E26D
{
	int iVar0;
	var uVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var4;
	int iVar5;
	int iVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	char* sVar10;
	float fVar11;
	iVar2 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_640.f_2) && !PED::IS_PED_INJURED(uParam0->f_640.f_2))
	{
		iVar2 = uParam0->f_640.f_2;
	}
	if ((__LIB_14__::func_404(1) && !PED::IS_PED_INJURED(iVar2)) && !PED::IS_PED_INJURED(uParam0->f_12))
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (NETWORK::NETWORK_PLAYER_HAS_HEADSET(PLAYER::PLAYER_ID()))
			{
				if (NETWORK::NETWORK_IS_PLAYER_TALKING(PLAYER::PLAYER_ID()))
				{
					PED::SET_PED_RESET_FLAG(iVar2, 302, true);
				}
			}
		}
		switch (uParam0->f_116.f_5)
		{
			case 0:
				func_616(iVar2);
				uParam0->f_116.f_5++;
				break;
			case 1:
				if (!Global_78319)
				{
					PED::SET_PED_CONFIG_FLAG(iVar2, 240, true);
				}
				if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(uParam0->f_184.f_13[0 /*3*/], 3f) && !Global_78319)
				{
					__LIB_16__::func_529(uParam0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_640.f_2) && !PED::IS_PED_INJURED(uParam0->f_640.f_2))
				{
					if (!ENTITY::IS_ENTITY_VISIBLE(uParam0->f_640.f_2))
					{
						ENTITY::SET_ENTITY_VISIBLE(uParam0->f_640.f_2, true, false);
						PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(uParam0->f_640.f_2, 1);
					}
				}
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar2);
				__LIB_36__::func_920(*uParam0, &Var3, &Var4);
				MISC::CLEAR_AREA_OF_OBJECTS(ENTITY::GET_ENTITY_COORDS(iVar2, true), 2.75f, 0);
				TASK::TASK_PLAY_ANIM_ADVANCED(iVar2, uParam0->f_486, "player_enterchair", Var3, Var4, 1000f, -1000f, -1, 5642, 0f, 2, 1);
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (__LIB_36__::func_873(uParam0))
					{
						TASK::TASK_PLAY_ANIM_ADVANCED(uParam0->f_12, uParam0->f_486, "keeper_enterchair", Var3, Var4, 1000f, -1000f, -1, 5642, 0f, 2, 1);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uParam0->f_12, false, false);
					}
					__LIB_36__::func_871(uParam0);
					__LIB_42__::func_320(uParam0, 1, 0);
					__LIB_36__::func_870(uParam0, uParam0->f_12, "keeper_enterchair", 69, 1148846080, -998637568);
					__LIB_36__::func_870(uParam0, PLAYER::PLAYER_PED_ID(), "player_enterchair", 64, 1148846080, -998637568);
					__LIB_36__::func_869(uParam0, NETWORK::NET_TO_ENT(Local_66.f_1), __LIB_36__::func_872("keeper_enterchair"), 64, 1148846080, -998637568);
					__LIB_36__::func_868(uParam0);
				}
				else
				{
					__LIB_42__::func_319(uParam0, "keeper_enterchair", 0, 0, 1, -1056964608);
				}
				uParam0->f_503.f_19 = 1;
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					__LIB_14__::func_625(PLAYER::PLAYER_PED_ID(), 0, &iVar0, &uVar1, 1, 145);
				}
				if (iVar0 != -1)
				{
					Stack.Push(iVar2);
					Stack.Push(14);
					Stack.Push(0);
					Call_Loc(uParam0->f_478);
					uParam0->f_544 = StackVal;
				}
				else
				{
					uParam0->f_544 = 0;
				}
				Stack.Push(iVar2);
				Stack.Push(14);
				Stack.Push(1);
				Call_Loc(uParam0->f_478);
				uParam0->f_545 = StackVal;
				iVar5 = ENTITY::GET_ENTITY_MODEL(iVar2);
				Stack.Push(iVar2);
				Stack.Push(8);
				Stack.Push(-1);
				Call_Loc(uParam0->f_478);
				iVar6 = StackVal;
				if (__LIB_0__::func_233(iVar5, 8, iVar6, -1))
				{
					uParam0->f_546 = iVar6;
				}
				Stack.Push(iVar2);
				Stack.Push(9);
				Stack.Push(-1);
				Call_Loc(uParam0->f_478);
				iVar6 = StackVal;
				if (__LIB_0__::func_233(iVar5, 9, iVar6, -1))
				{
					uParam0->f_547 = iVar6;
				}
				Stack.Push(iVar2);
				Stack.Push(2);
				Stack.Push(-1);
				Call_Loc(uParam0->f_478);
				iVar6 = StackVal;
				if (__LIB_0__::func_233(iVar5, 2, iVar6, -1))
				{
					uParam0->f_548 = iVar6;
				}
				PED::RELEASE_PED_PRELOAD_PROP_DATA(PLAYER::PLAYER_PED_ID());
				PED::RELEASE_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID());
				func_816(uParam0);
				Stack.Push(iVar2);
				Stack.Push(14);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Stack.Push(-1);
				Stack.Push(-1);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Call_Loc(uParam0->f_479);
				Stack.Push(iVar2);
				Stack.Push(14);
				Stack.Push(1);
				Stack.Push(0);
				Stack.Push(-1);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Stack.Push(-1);
				Stack.Push(-1);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Call_Loc(uParam0->f_479);
				__LIB_16__::func_562(iVar2, &(uParam0->f_479));
				if (__LIB_36__::func_812(PLAYER::PLAYER_PED_ID(), &bVar7, &bVar8))
				{
					func_325(iVar2, 0);
				}
				bVar9 = false;
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					Stack.Push(PLAYER::PLAYER_PED_ID());
					Stack.Push(1);
					Stack.Push(-1);
					Call_Loc(uParam0->f_478);
					uParam0->f_549 = StackVal;
					Stack.Push(iVar2);
					Stack.Push(1);
					Stack.Push(0);
					Stack.Push(0);
					Stack.Push(-1);
					Stack.Push(0);
					Stack.Push(0);
					Stack.Push(0);
					Stack.Push(-1);
					Stack.Push(-1);
					Stack.Push(-1);
					Stack.Push(0);
					Stack.Push(0);
					Stack.Push(0);
					Call_Loc(uParam0->f_479);
					Stack.Push(PLAYER::PLAYER_PED_ID());
					Stack.Push(7);
					Stack.Push(-1);
					Call_Loc(uParam0->f_478);
					uParam0->f_550 = StackVal;
					if ((iVar5 == joaat("MP_M_Freemode_01") && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_205(iVar5, uParam0->f_550, 7, 3), joaat("PILOT_SUIT"), 0)) || (iVar5 == joaat("MP_F_Freemode_01") && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_205(iVar5, uParam0->f_550, 7, 4), joaat("PILOT_SUIT"), 0)))
					{
						bVar9 = true;
						Stack.Push(iVar2);
						Stack.Push(7);
						Stack.Push(0);
						Stack.Push(0);
						Stack.Push(-1);
						Stack.Push(0);
						Stack.Push(0);
						Stack.Push(0);
						Stack.Push(-1);
						Stack.Push(-1);
						Stack.Push(-1);
						Stack.Push(0);
						Stack.Push(0);
						Stack.Push(0);
						Call_Loc(uParam0->f_479);
					}
					uParam0->f_551 = PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), __LIB_0__::func_33(5));
					uParam0->f_552 = PED::GET_PED_TEXTURE_VARIATION(PLAYER::PLAYER_PED_ID(), __LIB_0__::func_33(5));
					Stack.Push(iVar2);
					Stack.Push(5);
					Stack.Push(0);
					Stack.Push(0);
					Stack.Push(-1);
					Stack.Push(0);
					Stack.Push(0);
					Stack.Push(0);
					Stack.Push(-1);
					Stack.Push(-1);
					Stack.Push(-1);
					Stack.Push(0);
					Stack.Push(0);
					Stack.Push(0);
					Call_Loc(uParam0->f_479);
				}
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					Stack.Push(PLAYER::PLAYER_PED_ID());
					Stack.Push(14);
					Stack.Push(0);
					Stack.Push(0);
					Stack.Push(-1);
					Stack.Push(0);
					Stack.Push(0);
					Stack.Push(0);
					Stack.Push(-1);
					Stack.Push(-1);
					Stack.Push(-1);
					Stack.Push(0);
					Stack.Push(0);
					Stack.Push(0);
					Call_Loc(uParam0->f_479);
					Stack.Push(PLAYER::PLAYER_PED_ID());
					Stack.Push(14);
					Stack.Push(1);
					Stack.Push(0);
					Stack.Push(-1);
					Stack.Push(0);
					Stack.Push(0);
					Stack.Push(0);
					Stack.Push(-1);
					Stack.Push(-1);
					Stack.Push(-1);
					Stack.Push(0);
					Stack.Push(0);
					Stack.Push(0);
					Call_Loc(uParam0->f_479);
					__LIB_16__::func_562(PLAYER::PLAYER_PED_ID(), &(uParam0->f_479));
					Stack.Push(PLAYER::PLAYER_PED_ID());
					Stack.Push(1);
					Stack.Push(0);
					Stack.Push(0);
					Stack.Push(-1);
					Stack.Push(0);
					Stack.Push(0);
					Stack.Push(0);
					Stack.Push(-1);
					Stack.Push(-1);
					Stack.Push(-1);
					Stack.Push(0);
					Stack.Push(0);
					Stack.Push(0);
					Call_Loc(uParam0->f_479);
					if (__LIB_36__::func_812(PLAYER::PLAYER_PED_ID(), &bVar7, &bVar8))
					{
						if (bVar8)
						{
							uParam0->f_553 = 2;
						}
						else if (bVar7)
						{
							uParam0->f_553 = 1;
						}
						else
						{
							uParam0->f_553 = 0;
						}
						func_325(PLAYER::PLAYER_PED_ID(), 0);
					}
					else
					{
						uParam0->f_553 = -1;
					}
					if (bVar9)
					{
						Stack.Push(PLAYER::PLAYER_PED_ID());
						Stack.Push(7);
						Stack.Push(0);
						Stack.Push(0);
						Stack.Push(-1);
						Stack.Push(0);
						Stack.Push(0);
						Stack.Push(0);
						Stack.Push(-1);
						Stack.Push(-1);
						Stack.Push(-1);
						Stack.Push(0);
						Stack.Push(0);
						Stack.Push(0);
						Call_Loc(uParam0->f_479);
					}
					uParam0->f_724 = __LIB_2__::func_979();
				}
				__LIB_14__::func_441(uParam0, 1077936128);
				__LIB_42__::func_317(uParam0, __LIB_42__::func_318(uParam0, 0, ""));
				PED::SET_FORCE_FOOTSTEP_UPDATE(PLAYER::PLAYER_PED_ID(), true);
				uParam0->f_116.f_5++;
				break;
			case 2:
				if ((ENTITY::HAS_ENTITY_ANIM_FINISHED(iVar2, uParam0->f_486, "player_enterchair", 3) && __LIB_36__::func_867(&(uParam0->f_529), &(uParam0->f_531)) == 1f) && CAM::GET_CAM_ANIM_CURRENT_PHASE(uParam0->f_51[0 /*12*/]) >= 1f)
				{
					__LIB_36__::func_920(*uParam0, &Var3, &Var4);
					sVar10 = __LIB_42__::func_322(uParam0);
					if (__LIB_36__::func_873(uParam0))
					{
						TASK::TASK_PLAY_ANIM_ADVANCED(iVar2, uParam0->f_486, sVar10, Var3, Var4, 1000f, -8f, -1, 5641, 0f, 2, 1);
					}
					else
					{
						TASK::TASK_PLAY_ANIM_ADVANCED(iVar2, uParam0->f_486, "player_base", Var3, Var4, 1000f, -8f, -1, 5641, 0f, 2, 1);
					}
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						uParam0->f_530 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(Var3, Var4, 2, false, true, 1f, 0f, 1f);
						if (__LIB_36__::func_873(uParam0))
						{
							NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_530, uParam0->f_486, sVar10, 1000f, -8f, 0, 0, 1000f, 0);
						}
						else
						{
							NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_530, uParam0->f_486, "player_base", 1000f, -8f, 0, 0, 1000f, 0);
						}
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam0->f_530);
					}
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iVar2, true, false);
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						__LIB_36__::func_871(uParam0);
						__LIB_42__::func_320(uParam0, 0, 1);
						__LIB_36__::func_870(uParam0, uParam0->f_12, "keeper_base", 69, 1148846080, -998637568);
						__LIB_36__::func_869(uParam0, NETWORK::NET_TO_ENT(Local_66.f_1), __LIB_36__::func_872("keeper_base"), 64, 1148846080, -998637568);
						__LIB_36__::func_868(uParam0);
					}
					else
					{
						__LIB_42__::func_319(uParam0, "keeper_base", 0, 1, 0, -1056964608);
					}
					__LIB_42__::func_315(uParam0, 1);
					func_524(uParam0, 0);
					func_776(uParam0, 0);
					if (__LIB_36__::func_866() || __LIB_36__::func_865())
					{
						uParam0->f_525 = 0;
					}
					else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						uParam0->f_525 = 4;
					}
					else
					{
						uParam0->f_525 = 1;
					}
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						if ((__LIB_0__::func_52() || __LIB_0__::func_53()) || MISC::IS_PC_VERSION())
						{
							uParam0->f_525 = 5;
							uParam0->f_116.f_1 = 0;
							while (uParam0->f_116.f_1 <= 6 && !__LIB_36__::func_851(iVar5, __LIB_36__::func_852(uParam0->f_116.f_1), uParam0->f_523))
							{
								uParam0->f_116.f_1++;
							}
							if (uParam0->f_116.f_1 >= 7)
							{
								uParam0->f_116.f_1 = 0;
							}
						}
						if (__LIB_1__::func_680(157, -1) == 255f)
						{
							fVar11 = SYSTEM::TO_FLOAT(PED::GET_HEAD_BLEND_EYE_COLOR(PLAYER::PLAYER_PED_ID()));
							__LIB_18__::func_308(157, fVar11, -1, 1);
						}
					}
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						NETWORK::NETWORK_DISABLE_LEAVE_REMOTE_PED_BEHIND(true);
						uParam0->f_502 = 1;
					}
					__LIB_3__::func_112();
					PED::SET_FORCE_FOOTSTEP_UPDATE(PLAYER::PLAYER_PED_ID(), false);
					uParam0->f_116.f_31 = 2;
				}
				break;
			}
	}
}

void func_816(var uParam0)//Position - 0x7ECD8
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_817(PLAYER::PLAYER_PED_ID(), 14, uParam0->f_544);
		func_817(PLAYER::PLAYER_PED_ID(), 14, uParam0->f_545);
		func_817(PLAYER::PLAYER_PED_ID(), 14, uParam0->f_546);
		func_817(PLAYER::PLAYER_PED_ID(), 14, uParam0->f_547);
		func_817(PLAYER::PLAYER_PED_ID(), 14, uParam0->f_548);
	}
}

void func_817(int iParam0, int iParam1, int iParam2)//Position - 0x7ED33
{
	struct<14> Var0;
	if (iParam1 == 12 || iParam1 == 13)
	{
		return;
	}
	Var0 = { __LIB_12__::func_14(ENTITY::GET_ENTITY_MODEL(iParam0), iParam1, iParam2, -1) };
	if (iParam1 == 14)
	{
		if (Var0.f_3 != -1 && Var0.f_3 != 255)
		{
			PED::SET_PED_PRELOAD_PROP_DATA(iParam0, Var0.f_12, Var0.f_3, Var0.f_4);
		}
	}
	else if (Var0.f_3 != -1 && Var0.f_4 != -1)
	{
		PED::SET_PED_PRELOAD_VARIATION_DATA(iParam0, __LIB_0__::func_33(iParam1), Var0.f_3, Var0.f_4);
	}
}

void func_933(var uParam0)//Position - 0x81FA9
{
	if (__LIB_14__::func_404(1))
	{
		__LIB_16__::func_574(uParam0);
		if (!Global_78319)
		{
			PED::SET_PED_CAN_ARM_IK(PLAYER::PLAYER_PED_ID(), true);
			PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 60, true);
		}
		if (!uParam0->f_8)
		{
			if (uParam0->f_3 != -1)
			{
				__LIB_3__::func_122(&(uParam0->f_3));
			}
			if (__LIB_14__::func_285(PLAYER::PLAYER_ID(), uParam0->f_523, 1) && *uParam0 != 50)
			{
				__LIB_14__::func_359(PLAYER::PLAYER_ID(), uParam0->f_523);
			}
			if (__LIB_36__::func_878(PLAYER::PLAYER_ID(), uParam0->f_523, 0) && *uParam0 == 50)
			{
				__LIB_36__::func_821(PLAYER::PLAYER_ID(), uParam0->f_523);
			}
			__LIB_13__::func_617();
		}
		if (!uParam0->f_7)
		{
			uParam0->f_11 = 1;
		}
	}
}

void func_954(var uParam0)//Position - 0x831F9
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	char* sVar7;
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	iVar6 = -1;
	if (__LIB_14__::func_404(1) && !PED::IS_PED_INJURED(uParam0->f_12))
	{
		if (__LIB_9__::func_354(1) || ((!HUD::IS_PAUSE_MENU_ACTIVE() && __LIB_16__::func_556(*uParam0, 1, 0, -1)) && !__LIB_14__::func_475(*uParam0)))
		{
			if (__LIB_15__::func_111(-1))
			{
				bVar0 = true;
			}
			else if (!__LIB_14__::func_285(PLAYER::PLAYER_ID(), uParam0->f_523, 0) && *uParam0 != 50)
			{
				bVar2 = true;
			}
			else if (!__LIB_36__::func_878(PLAYER::PLAYER_ID(), uParam0->f_523, 0) && *uParam0 == 50)
			{
				bVar2 = true;
			}
			else
			{
				if (uParam0->f_116 == -1 || ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) != uParam0->f_613)
				{
					uParam0->f_613 = ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());
					if (func_963(&(uParam0->f_485), *uParam0, &(uParam0->f_184), &Global_4537616, &(uParam0->f_716), &(uParam0->f_719)))
					{
						__LIB_13__::func_836("GRABBED LOCATE DATA", -1);
						uParam0->f_116 = 0;
					}
					else
					{
						__LIB_13__::func_836("FAILED TO GRAB LOCATE DATA", -1);
						uParam0->f_116 = 99;
					}
				}
				if (uParam0->f_116 == 0)
				{
					if (!bVar3)
					{
						if (__LIB_9__::func_354(1) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), uParam0->f_184.f_13[0 /*3*/], uParam0->f_184.f_13[1 /*3*/], uParam0->f_184.f_26[0], false, true, 0))
						{
							bVar5 = true;
							if (__LIB_36__::func_882(uParam0, 0))
							{
								if (uParam0->f_3 == -1)
								{
									if (__LIB_36__::func_866())
									{
										if (__LIB_36__::func_865())
										{
											sVar7 = "HAIR_BROWSE_MB" /* GXT: Press ~a~ to get a haircut, a beard or to have makeup applied. */;
										}
										else
										{
											sVar7 = "HAIR_BROWSE_B" /* GXT: Press ~a~ to get a haircut or a beard. */;
										}
									}
									else if (__LIB_36__::func_865())
									{
										sVar7 = "HAIR_BROWSE_M" /* GXT: Press ~a~ to get a haircut or to have makeup applied. */;
									}
									else
									{
										sVar7 = "HAIR_BROWSE" /* GXT: Press ~a~ to get a haircut. */;
									}
									if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
									{
										if ((__LIB_0__::func_52() || __LIB_0__::func_53()) || MISC::IS_PC_VERSION())
										{
											sVar7 = "HAIR_BROWSE_NG" /* GXT: Press ~a~ to get a makeover. */;
										}
									}
									__LIB_5__::func_569(&(uParam0->f_3), 3, sVar7, 0, 0, 0, 0);
								}
								bVar4 = true;
								PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, 51 /*INPUT_CONTEXT*/);
								if (__LIB_3__::func_113(uParam0->f_3, 1) || __LIB_9__::func_354(1))
								{
									bVar4 = false;
									bVar3 = true;
								}
							}
						}
					}
				}
			}
		}
		else
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (__LIB_2__::func_821(PLAYER::PLAYER_ID()))
				{
					if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() || __LIB_3__::func_56("SHOP_CLOSED" /* GXT: ~a~ is closed. Please come back later. */, __LIB_12__::func_769(*uParam0, 0, 0)))
					{
						bVar1 = true;
					}
				}
			}
			uParam0->f_592 = 0;
			uParam0->f_592 = uParam0->f_592;
		}
	}
	if (bVar0)
	{
		__LIB_14__::func_962("SHOP_COPS" /* GXT: Lose the Cops. */);
	}
	else if (bVar2)
	{
		if (!__LIB_42__::func_326(uParam0) && *uParam0 != 50)
		{
			__LIB_14__::func_962("HAIR_FTRIG_BUSY" /* GXT: The hairdresser is busy, please wait. */);
		}
	}
	else if (bVar1)
	{
		if (*uParam0 != 50 && !__LIB_0__::func_927(PLAYER::PLAYER_ID()))
		{
			__LIB_15__::func_19("SHOP_CLOSED" /* GXT: ~a~ is closed. Please come back later. */, __LIB_12__::func_769(*uParam0, 0, 0));
		}
	}
	else if (__LIB_1__::func_101(PLAYER::PLAYER_PED_ID()) && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() || __LIB_3__::func_56("SHOP_NONE" /* GXT: ~a~ is unavailable. */, __LIB_12__::func_769(*uParam0, 0, 0)))
		{
			__LIB_15__::func_19("SHOP_JUGG_NONE" /* GXT: ~a~ is unavailable while wearing the Ballistic Equipment. */, __LIB_12__::func_769(*uParam0, 0, 0));
		}
	}
	else if (bVar3)
	{
		if (*uParam0 == 50)
		{
			__LIB_36__::func_876(PLAYER::PLAYER_ID(), uParam0->f_523);
		}
		else
		{
			__LIB_36__::func_877(PLAYER::PLAYER_ID(), uParam0->f_523);
		}
		__LIB_13__::func_617();
		uParam0->f_11 = 4;
		uParam0->f_116.f_31 = 0;
		uParam0->f_723 = MISC::GET_GAME_TIMER();
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			uParam0->f_722 = NETWORK::GET_NETWORK_TIME();
		}
		uParam0->f_714 = -1;
		__LIB_16__::func_569(uParam0, &(uParam0->f_116));
	}
	else if ((iVar6 == 0 && !Global_78319) && !bVar4)
	{
		__LIB_14__::func_962(__LIB_36__::func_881(uParam0->f_184));
	}
	else
	{
		__LIB_13__::func_617();
		uParam0->f_116.f_19 = 0;
	}
	if (!bVar4 && !__LIB_42__::func_326(uParam0))
	{
		if (uParam0->f_3 != -1)
		{
			__LIB_3__::func_122(&(uParam0->f_3));
		}
	}
	if (!bVar3)
	{
		if (*uParam0 != 50 && __LIB_14__::func_285(PLAYER::PLAYER_ID(), uParam0->f_523, 1))
		{
			__LIB_14__::func_359(PLAYER::PLAYER_ID(), uParam0->f_523);
		}
		if (*uParam0 == 50 && __LIB_36__::func_878(PLAYER::PLAYER_ID(), uParam0->f_523, 0))
		{
			__LIB_36__::func_821(PLAYER::PLAYER_ID(), uParam0->f_523);
		}
		if (uParam0->f_523 == 50 && !bVar5)
		{
			__LIB_36__::func_886(uParam0);
		}
	}
}

bool func_963(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x83762
{
	struct<52> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	Var0.f_13 = 4;
	Var0.f_26 = 4;
	iVar2 = 0;
	while (iVar2 < uParam3->f_253)
	{
		uParam3->f_253[iVar2] = 0;
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 < uParam3->f_379)
	{
		uParam3->f_379[iVar2] = 0;
		uParam3->f_390[iVar2] = 0;
		iVar2++;
	}
	uParam3->f_252 = 0;
	iVar3 = MISC::GET_HASH_KEY("v_hairdresser");
	iVar4 = MISC::GET_HASH_KEY("v_barbers");
	iVar5 = MISC::GET_HASH_KEY("vw_dlc_casino_apart");
	iVar6 = MISC::GET_HASH_KEY(__LIB_3__::func_285(iParam1));
	if (iVar6 == iVar3)
	{
		iVar1 = 0;
		Var0.f_0 = 6;
		Var0.f_1 = { -816.09f, -183.22f, 38f };
		Var0.f_13[0 /*3*/] = { -817.9705f, -184.58022f, 36.568916f };
		Var0.f_13[1 /*3*/] = { -812.0129f, -181.25389f, 38.568916f };
		Var0.f_26[0] = 5.8f;
		Var0.f_31 = { -816.279f, -182.9f, 36.588f };
		Var0.f_42 = { -816.279f, -182.9f, 36.588f };
		Var0.f_45 = { 0f, 0f, 120f };
		Var0.f_4 = { -815.9199f, -183.44055f, 36.56892f };
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_436(uParam0, uParam3, __LIB_16__::func_483(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())), 0, -1, uParam4, uParam5);
		}
		else
		{
			__LIB_36__::func_914(uParam0, uParam3, __LIB_16__::func_483(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())), 0, 1);
		}
	}
	else if (iVar6 == iVar4)
	{
		iVar1 = 1;
		Var0.f_0 = 6;
		Var0.f_1 = { 138.45f, -1709.32f, 30f };
		Var0.f_13[0 /*3*/] = { 139.69107f, -1706.9822f, 28.29159f };
		Var0.f_13[1 /*3*/] = { 136.35257f, -1710.8248f, 30.301617f };
		Var0.f_26[0] = 5.4f;
		Var0.f_31 = { 136.6735f, -1709.513f, 29.2964f };
		Var0.f_42 = { 138.353f, -1709.266f, 28.305f };
		Var0.f_45 = { 0f, 0f, -40f };
		Var0.f_4 = { 138.0074f, -1709.343f, 28.4607f };
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_436(uParam0, uParam3, __LIB_16__::func_483(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())), 0, -1, uParam4, uParam5);
		}
		else
		{
			__LIB_36__::func_914(uParam0, uParam3, __LIB_16__::func_483(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())), 0, 0);
		}
	}
	else if (iVar6 == iVar5)
	{
		iVar1 = 0;
		Var0.f_0 = 6;
		Var0.f_1 = { -816.09f, -183.22f, 38f };
		Var0.f_13[0 /*3*/] = { -816.7995f, -184.67522f, 36.569916f };
		Var0.f_13[1 /*3*/] = { -815.53986f, -180.6359f, 38.569916f };
		Var0.f_26[0] = 5.8f;
		Var0.f_31 = { -816.279f, -182.9f, 36.588f };
		Var0.f_42 = { -816.279f, -182.9f, 36.588f };
		Var0.f_45 = { 0f, 0f, 120f };
		Var0.f_4 = { -815.9199f, -183.44055f, 36.56892f };
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_436(uParam0, uParam3, __LIB_16__::func_483(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())), 0, -1, uParam4, uParam5);
		}
		else
		{
			__LIB_36__::func_914(uParam0, uParam3, __LIB_16__::func_483(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())), 0, 1);
		}
	}
	__LIB_15__::func_119(iVar1, iParam1, &(Var0.f_1));
	__LIB_15__::func_119(iVar1, iParam1, &(Var0.f_13[0 /*3*/]));
	__LIB_15__::func_119(iVar1, iParam1, &(Var0.f_13[1 /*3*/]));
	__LIB_15__::func_119(iVar1, iParam1, &(Var0.f_31));
	__LIB_15__::func_119(iVar1, iParam1, &(Var0.f_4));
	__LIB_15__::func_119(iVar1, iParam1, &(Var0.f_42));
	__LIB_15__::func_128(iVar1, iParam1, &(Var0.f_45));
	__LIB_36__::func_919(iParam1, &(Var0.f_39));
	*uParam2 = { Var0 };
	return (uParam3->f_379[0] != 0 || uParam3->f_379[1] != 0);
}

void func_979(var uParam0)//Position - 0x841D2
{
	if (__LIB_36__::func_885(uParam0))
	{
		if (__LIB_14__::func_404(1))
		{
			__LIB_2__::func_911(*uParam0, 20, 1);
			if (__LIB_36__::func_873(uParam0))
			{
				func_1006(uParam0);
			}
			else
			{
				func_981(uParam0);
			}
			__LIB_16__::func_382(&(uParam0->f_503), 1);
		}
	}
	else
	{
		__LIB_2__::func_943(*uParam0, 20, 1);
		__LIB_14__::func_473(*uParam0, 1);
		uParam0->f_11 = 3;
	}
}

void func_981(var uParam0)//Position - 0x842B6
{
	struct<3> Var0;
	struct<3> Var1;
	int iVar2;
	int iVar3;
	iVar2 = 6;
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		return;
	}
	if ((__LIB_0__::func_134() || __LIB_14__::func_479(*uParam0)) || SYSTEM::VDIST(uParam0->f_12.f_6, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > 30f)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		if (CAM::DOES_CAM_EXIST(uParam0->f_51[0 /*12*/]))
		{
			CAM::DESTROY_CAM(uParam0->f_51[0 /*12*/], false);
		}
		if (CAM::DOES_CAM_EXIST(uParam0->f_51[1 /*12*/]))
		{
			CAM::DESTROY_CAM(uParam0->f_51[1 /*12*/], false);
		}
		return;
	}
	switch (uParam0->f_155.f_28)
	{
		case 0:
			__LIB_43__::func_483(uParam0);
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
			__LIB_36__::func_920(*uParam0, &Var0, &Var1);
			__LIB_42__::func_319(uParam0, "keeper_tutorial", 1, 0, 0, -1f);
			__LIB_36__::func_920(*uParam0, &Var0, &Var1);
			uParam0->f_528 = PED::CREATE_SYNCHRONIZED_SCENE(Var0, Var1, 2);
			PED::SET_FORCE_FOOTSTEP_UPDATE(PLAYER::PLAYER_PED_ID(), true);
			TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_528, uParam0->f_486, "player_intro", 1000f, -1f, 0, 0, 1000f, 0);
			PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uParam0->f_528, false);
			if (!PED::IS_PED_INJURED(uParam0->f_43))
			{
				TASK::CLEAR_PED_TASKS(uParam0->f_43);
				PED::SET_FORCE_FOOTSTEP_UPDATE(uParam0->f_43, true);
				TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_43, uParam0->f_529, uParam0->f_486, "customer_tutorial", 1000f, -2f, 0, 0, 1000f, 0);
				uParam0->f_489 = "customer_tutorial";
				__LIB_0__::func_222(&(uParam0->f_276.f_5), __LIB_13__::func_103("F"), uParam0->f_43, "HairCustomer", 0, 1);
			}
			ENTITY::PLAY_SYNCHRONIZED_MAP_ENTITY_ANIM(__LIB_0__::func_785(*uParam0, 0), 20f, joaat("v_ilev_bs_door"), uParam0->f_529, "DOOR_TUTORIAL", uParam0->f_486, 8f, -8f, 0, 1000f);
			StringCopy(&(uParam0->f_116.f_11), "SHOP_INTRO" /* GXT: Welcome to ~a~. */, 16);
			uParam0->f_116.f_9 = MISC::GET_GAME_TIMER();
			uParam0->f_155.f_28++;
			break;
		case 1:
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			__LIB_1__::func_33(0);
			if (__LIB_36__::func_916(uParam0))
			{
				uParam0->f_155.f_28 = iVar2;
			}
			if (__LIB_14__::func_403(*uParam0, 0))
			{
				__LIB_14__::func_409(*uParam0, &(uParam0->f_116.f_11), 0);
			}
			if (!__LIB_0__::func_75() && (MISC::GET_GAME_TIMER() - uParam0->f_116.f_9) >= 1000)
			{
				__LIB_15__::func_872(&(uParam0->f_276.f_5), "hairdau", "haird_bbye", 4, Global_100492, 0, 0);
			}
			if ((MISC::GET_GAME_TIMER() - uParam0->f_116.f_9) >= 4200)
			{
				StringCopy(&(uParam0->f_116.f_11), "HAIR_INTRO_0" /* GXT: Take a seat and choose the hairstyle that is right for you. */, 16);
				uParam0->f_116.f_9 = MISC::GET_GAME_TIMER();
				uParam0->f_155.f_28++;
			}
			break;
		case 2:
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			__LIB_1__::func_33(0);
			if (__LIB_36__::func_916(uParam0))
			{
				uParam0->f_155.f_28 = iVar2;
			}
			if (__LIB_14__::func_403(*uParam0, 0))
			{
				__LIB_14__::func_409(*uParam0, &(uParam0->f_116.f_11), 0);
			}
			if ((MISC::GET_GAME_TIMER() - uParam0->f_116.f_9) >= 1100)
			{
				uParam0->f_116.f_9 = MISC::GET_GAME_TIMER();
				uParam0->f_155.f_28++;
			}
			break;
		case 3:
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			__LIB_1__::func_33(0);
			if (__LIB_36__::func_916(uParam0))
			{
				uParam0->f_155.f_28 = iVar2;
			}
			if (__LIB_14__::func_403(*uParam0, 0))
			{
				__LIB_14__::func_409(*uParam0, &(uParam0->f_116.f_11), 0);
				if ((MISC::GET_GAME_TIMER() - uParam0->f_116.f_9) >= 4000)
				{
					StringCopy(&(uParam0->f_116.f_11), "HAIR_INTRO_1" /* GXT: Choose a hairstyle to suit your style and budget. */, 16);
				}
			}
			if (CAM::GET_CAM_ANIM_CURRENT_PHASE(uParam0->f_51[0 /*12*/]) >= 0.7525f)
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uParam0->f_528))
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					}
				}
				uParam0->f_155.f_28++;
			}
			break;
		case 4:
			__LIB_36__::func_922(*uParam0, &(uParam0->f_155));
			uParam0->f_155.f_28++;
			break;
		case 5:
			if (CAM::GET_CAM_ANIM_CURRENT_PHASE(uParam0->f_51[0 /*12*/]) >= 0.792f)
			{
				if (!PED::IS_PED_INJURED(uParam0->f_12) && !PED::IS_PED_HEADTRACKING_PED(uParam0->f_12, PLAYER::PLAYER_PED_ID()))
				{
					TASK::TASK_LOOK_AT_ENTITY(uParam0->f_12, PLAYER::PLAYER_PED_ID(), -1, 2096, 4);
				}
			}
			if (CAM::GET_CAM_ANIM_CURRENT_PHASE(uParam0->f_51[0 /*12*/]) >= 0.911f)
			{
				CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(false, 0f, 3, 0);
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				}
				uParam0->f_155.f_28 = iVar2;
			}
			break;
		case 6:
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			__LIB_1__::func_33(0);
			if (uParam0->f_490 == 1)
			{
				StringCopy(&(uParam0->f_116.f_11), "", 16);
				if (Global_100493.f_5 && Global_100493.f_6 == MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()))
				{
					HUD::CLEAR_HELP(true);
					Global_100493.f_5 = 0;
				}
				else if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					HUD::CLEAR_HELP(true);
				}
				if (!CAM::IS_SCREEN_FADED_OUT())
				{
					if (!CAM::IS_SCREEN_FADING_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(500);
					}
					return;
				}
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uParam0->f_529))
			{
				ENTITY::STOP_SYNCHRONIZED_MAP_ENTITY_ANIM(__LIB_0__::func_785(*uParam0, 0), 20f, joaat("v_ilev_bs_door"), -1000f);
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uParam0->f_528))
			{
				PED::SET_SYNCHRONIZED_SCENE_PHASE(uParam0->f_528, 1f);
			}
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				__LIB_36__::func_922(*uParam0, &(uParam0->f_155));
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), uParam0->f_155[1 /*3*/], true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), uParam0->f_155.f_7[1]);
				}
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uParam0->f_529))
				{
					ENTITY::STOP_SYNCHRONIZED_MAP_ENTITY_ANIM(__LIB_0__::func_785(*uParam0, 0), 20f, joaat("v_ilev_bs_door"), -1000f);
					PED::SET_SYNCHRONIZED_SCENE_PHASE(uParam0->f_529, 1f);
				}
				if (CAM::DOES_CAM_EXIST(uParam0->f_51[1 /*12*/]))
				{
					CAM::DESTROY_CAM(uParam0->f_51[1 /*12*/], false);
				}
				uParam0->f_51[1 /*12*/] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
				CAM::SET_CAM_COORD(uParam0->f_51[1 /*12*/], uParam0->f_155.f_11[0 /*3*/]);
				CAM::SET_CAM_ROT(uParam0->f_51[1 /*12*/], uParam0->f_155.f_18[0 /*3*/], 2);
				CAM::SET_CAM_FOV(uParam0->f_51[1 /*12*/], uParam0->f_155.f_25[0]);
				CAM::SET_CAM_ACTIVE(uParam0->f_51[1 /*12*/], true);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			}
			if (!PED::IS_PED_INJURED(uParam0->f_12))
			{
				TASK::CLEAR_PED_TASKS(uParam0->f_12);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uParam0->f_12, false, false);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(uParam0->f_12, PLAYER::PLAYER_PED_ID(), 0);
				PED::SET_FORCE_FOOTSTEP_UPDATE(uParam0->f_12, false);
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					__LIB_36__::func_822(uParam0, 0);
				}
				else
				{
					__LIB_42__::func_327(uParam0, 0);
				}
				uParam0->f_488 = "";
			}
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_43) && !PED::IS_PED_INJURED(uParam0->f_43))
			{
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					PED::DELETE_PED(&(uParam0->f_43));
				}
				else
				{
					__LIB_36__::func_919(*uParam0, &(uParam0->f_184.f_39));
					PED::SET_FORCE_FOOTSTEP_UPDATE(uParam0->f_43, false);
					TASK::CLEAR_PED_TASKS(uParam0->f_43);
					PED::FORCE_PED_MOTION_STATE(uParam0->f_43, joaat("MotionState_Walk"), false, 1, false);
					PED::SET_PED_MIN_MOVE_BLEND_RATIO(uParam0->f_43, 1f);
					ENTITY::SET_ENTITY_COLLISION(uParam0->f_43, true, false);
					TASK::OPEN_SEQUENCE_TASK(&iVar3);
					TASK::TASK_GO_STRAIGHT_TO_COORD(0, uParam0->f_184.f_39, 1f, -1, 40000f, 0.5f);
					TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
					TASK::CLOSE_SEQUENCE_TASK(iVar3);
					TASK::TASK_PERFORM_SEQUENCE(uParam0->f_43, iVar3);
					TASK::CLEAR_SEQUENCE_TASK(&iVar3);
					PED::SET_PED_KEEP_TASK(uParam0->f_43, true);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_43));
				}
				uParam0->f_489 = "";
			}
			func_982(uParam0);
			break;
	}
}

void func_982(var uParam0)//Position - 0x849C9
{
	int iVar0;
	TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
	PED::SET_FORCE_FOOTSTEP_UPDATE(PLAYER::PLAYER_PED_ID(), false);
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
	if (CAM::IS_SCREEN_FADED_OUT())
	{
	}
	if (CAM::DOES_CAM_EXIST(uParam0->f_155.f_10))
	{
		if (CAM::IS_CAM_ACTIVE(uParam0->f_155.f_10))
		{
			CAM::SET_CAM_ACTIVE(uParam0->f_155.f_10, false);
		}
		CAM::DESTROY_CAM(uParam0->f_155.f_10, false);
	}
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(false, 0f, 3, 0);
	}
	else
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
	}
	__LIB_14__::func_455();
	HUD::CLEAR_HELP(true);
	__LIB_13__::func_617();
	__LIB_14__::func_423(*uParam0, 0);
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		SYSTEM::WAIT(0);
		if (!CAM::IS_SCREEN_FADING_IN())
		{
			__LIB_13__::func_836("END_SHOP_CUTSCENE - fading in screen", -1);
			CAM::DO_SCREEN_FADE_IN(500);
		}
	}
	iVar0 = 0;
	while (iVar0 < 58)
	{
		if (__LIB_0__::func_328(iVar0) == 0)
		{
			__LIB_14__::func_474(iVar0, 1);
		}
		iVar0++;
	}
	uParam0->f_105 = 0;
	uParam0->f_503.f_19 = 0;
	uParam0->f_592 = 0;
	uParam0->f_490 = 0;
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
}

void func_1006(var uParam0)//Position - 0x85FF4
{
	struct<3> Var0;
	struct<3> Var1;
	int iVar2;
	int iVar3;
	iVar2 = 4;
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		return;
	}
	if ((__LIB_0__::func_134() || __LIB_14__::func_479(*uParam0)) || SYSTEM::VDIST(uParam0->f_12.f_6, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > 40f)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		if (CAM::DOES_CAM_EXIST(uParam0->f_51[0 /*12*/]))
		{
			CAM::DESTROY_CAM(uParam0->f_51[0 /*12*/], false);
		}
		if (CAM::DOES_CAM_EXIST(uParam0->f_51[1 /*12*/]))
		{
			CAM::DESTROY_CAM(uParam0->f_51[1 /*12*/], false);
		}
		return;
	}
	switch (uParam0->f_155.f_28)
	{
		case 0:
			__LIB_43__::func_483(uParam0);
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
			__LIB_36__::func_920(*uParam0, &Var0, &Var1);
			uParam0->f_528 = PED::CREATE_SYNCHRONIZED_SCENE(Var0, Var1, 2);
			PED::SET_FORCE_FOOTSTEP_UPDATE(PLAYER::PLAYER_PED_ID(), true);
			TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_528, uParam0->f_486, "player_intro", 1000f, -1f, 0, 0, 1000f, 0);
			PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uParam0->f_528, false);
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_446))
			{
				if (!PED::IS_PED_INJURED(uParam0->f_446))
				{
				}
			}
			__LIB_42__::func_319(uParam0, "keeper_intro", 1, 0, 0, -1056964608);
			if (!PED::IS_PED_INJURED(uParam0->f_43))
			{
				__LIB_36__::func_919(*uParam0, &(uParam0->f_184.f_39));
				PED::SET_FORCE_FOOTSTEP_UPDATE(uParam0->f_43, true);
				TASK::CLEAR_PED_TASKS(uParam0->f_43);
				TASK::OPEN_SEQUENCE_TASK(&iVar3);
				uParam0->f_489 = "customer_intro";
				TASK::TASK_PLAY_ANIM_ADVANCED(0, uParam0->f_486, uParam0->f_489, Var0, Var1, 1000f, -4f, -1, 1536, 0f, 2, 0);
				TASK::CLOSE_SEQUENCE_TASK(iVar3);
				TASK::TASK_PERFORM_SEQUENCE(uParam0->f_43, iVar3);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uParam0->f_43, false, false);
				TASK::CLEAR_SEQUENCE_TASK(&iVar3);
				__LIB_0__::func_222(&(uParam0->f_276.f_5), __LIB_13__::func_103("F"), uParam0->f_43, "HairCustomer", 0, 1);
			}
			StringCopy(&(uParam0->f_116.f_11), "SHOP_INTRO" /* GXT: Welcome to ~a~. */, 16);
			uParam0->f_116.f_9 = MISC::GET_GAME_TIMER();
			uParam0->f_155.f_28++;
			break;
		case 1:
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			__LIB_1__::func_33(0);
			if (__LIB_36__::func_916(uParam0))
			{
				uParam0->f_155.f_28 = iVar2;
			}
			if (__LIB_14__::func_403(*uParam0, 0))
			{
				__LIB_14__::func_409(*uParam0, &(uParam0->f_116.f_11), 0);
			}
			if (!__LIB_0__::func_75() && (MISC::GET_GAME_TIMER() - uParam0->f_116.f_9) >= 500)
			{
				__LIB_15__::func_872(&(uParam0->f_276.f_5), "hairdau", "haird_hbye", 4, Global_100492, 0, 0);
			}
			if ((MISC::GET_GAME_TIMER() - uParam0->f_116.f_9) >= 4700)
			{
				StringCopy(&(uParam0->f_116.f_11), "HAIR_INTRO_0" /* GXT: Take a seat and choose the hairstyle that is right for you. */, 16);
				uParam0->f_116.f_9 = MISC::GET_GAME_TIMER();
				uParam0->f_155.f_28++;
			}
			break;
		case 2:
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			__LIB_1__::func_33(0);
			if (__LIB_36__::func_916(uParam0))
			{
				uParam0->f_155.f_28 = iVar2;
			}
			if (__LIB_14__::func_403(*uParam0, 0))
			{
				__LIB_14__::func_409(*uParam0, &(uParam0->f_116.f_11), 0);
			}
			if ((MISC::GET_GAME_TIMER() - uParam0->f_116.f_9) >= 1100)
			{
				uParam0->f_116.f_9 = MISC::GET_GAME_TIMER();
				uParam0->f_155.f_28++;
			}
			break;
		case 3:
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			__LIB_1__::func_33(0);
			if (__LIB_36__::func_916(uParam0))
			{
				uParam0->f_155.f_28 = iVar2;
			}
			if (__LIB_14__::func_403(*uParam0, 0))
			{
				__LIB_14__::func_409(*uParam0, &(uParam0->f_116.f_11), 0);
				if ((MISC::GET_GAME_TIMER() - uParam0->f_116.f_9) >= 4000)
				{
					StringCopy(&(uParam0->f_116.f_11), "HAIR_INTRO_1" /* GXT: Choose a hairstyle to suit your style and budget. */, 16);
				}
			}
			if (CAM::GET_CAM_ANIM_CURRENT_PHASE(uParam0->f_51[0 /*12*/]) >= 0.883f)
			{
				uParam0->f_155.f_28 = iVar2;
			}
			if (CAM::GET_CAM_ANIM_CURRENT_PHASE(uParam0->f_51[0 /*12*/]) >= 0.734f)
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uParam0->f_528))
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE")) == 1)
					{
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					}
				}
			}
			break;
		case 4:
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			__LIB_1__::func_33(0);
			if (uParam0->f_490 == 1)
			{
				StringCopy(&(uParam0->f_116.f_11), "", 16);
				__LIB_13__::func_617();
				if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					HUD::CLEAR_HELP(true);
				}
				if (!CAM::IS_SCREEN_FADED_OUT())
				{
					if (!CAM::IS_SCREEN_FADING_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(500);
					}
					return;
				}
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uParam0->f_528))
				{
				}
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uParam0->f_529))
				{
				}
				__LIB_14__::func_659(PLAYER::PLAYER_PED_ID(), -820.9124f, -187.2931f, 36.5689f, 319.5678f, 0, 1);
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			}
			if (!PED::IS_PED_INJURED(uParam0->f_12))
			{
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					__LIB_36__::func_822(uParam0, 0);
				}
				TASK::CLEAR_PED_TASKS(uParam0->f_12);
				__LIB_42__::func_327(uParam0, 0);
				uParam0->f_488 = "";
			}
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_43) && !PED::IS_PED_INJURED(uParam0->f_43))
			{
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					PED::DELETE_PED(&(uParam0->f_43));
				}
				else
				{
					TASK::CLEAR_PED_TASKS(uParam0->f_43);
					PED::FORCE_PED_MOTION_STATE(uParam0->f_43, joaat("MotionState_Walk"), false, 1, false);
					PED::SET_PED_MIN_MOVE_BLEND_RATIO(uParam0->f_43, 1f);
					ENTITY::SET_ENTITY_COLLISION(uParam0->f_43, true, false);
					TASK::OPEN_SEQUENCE_TASK(&iVar3);
					TASK::TASK_GO_STRAIGHT_TO_COORD(0, uParam0->f_184.f_39, 1f, -1, 40000f, 0.5f);
					TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
					TASK::CLOSE_SEQUENCE_TASK(iVar3);
					TASK::TASK_PERFORM_SEQUENCE(uParam0->f_43, iVar3);
					TASK::CLEAR_SEQUENCE_TASK(&iVar3);
					PED::SET_PED_KEEP_TASK(uParam0->f_43, true);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_43));
				}
				uParam0->f_489 = "";
			}
			func_982(uParam0);
			break;
	}
}

void func_1010(var uParam0)//Position - 0x865BD
{
	if (((__LIB_14__::func_404(1) && !__LIB_0__::func_134()) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || __LIB_9__::func_354(1))
	{
		__LIB_16__::func_574(uParam0);
		if (uParam0->f_8 == 1)
		{
			if ((__LIB_36__::func_885(uParam0) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				return;
			}
			if (!Global_78319 && !uParam0->f_491)
			{
				Global_113386.f_668.f_61++;
				uParam0->f_491 = 1;
			}
			uParam0->f_116.f_17 = 1;
			uParam0->f_116 = -1;
			uParam0->f_11 = 2;
			uParam0->f_116.f_5 = 0;
		}
	}
}

void func_1016(var uParam0)//Position - 0x8680F
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	bool bVar3;
	int iVar4;
	struct<3> Var5;
	int iVar6;
	char cVar7[16];
	char* sVar8;
	char* sVar9;
	switch (uParam0->f_116.f_5)
	{
		case 0:
			uParam0->f_544 = -99;
			uParam0->f_545 = -99;
			uParam0->f_549 = -99;
			uParam0->f_550 = -99;
			uParam0->f_551 = -1;
			uParam0->f_552 = -1;
			uParam0->f_546 = -99;
			uParam0->f_547 = -99;
			uParam0->f_548 = -99;
			uParam0->f_553 = -1;
			StringCopy(&(uParam0->f_560), "SCRIPT\Hair_Cut", 24);
			uParam0->f_612 = PED::GET_PED_HEAD_OVERLAY_NUM(4) + 1;
			if (__LIB_42__::func_328(uParam0, &(uParam0->f_446), uParam0->f_523))
			{
				uParam0->f_116.f_5++;
			}
			else
			{
				func_1109(uParam0, 0);
			}
			break;
		case 1:
			if (__LIB_13__::func_725(*uParam0))
			{
				uParam0->f_116.f_5++;
			}
			break;
		case 2:
			STREAMING::REQUEST_MODEL(joaat("p_cs_scissors_s"));
			if ((!__LIB_14__::func_476(*uParam0) && !Global_78319) && !__LIB_0__::func_78(uParam0->f_43.f_2, 0f, 0f, 0f, 0))
			{
				uParam0->f_105 = 1;
			}
			else
			{
				uParam0->f_105 = 0;
			}
			if (!uParam0->f_12.f_26)
			{
				__LIB_36__::func_887(&(uParam0->f_12), uParam0->f_12.f_6);
				if (uParam0->f_12.f_3 != 0)
				{
					STREAMING::REQUEST_MODEL(uParam0->f_12.f_3);
					uParam0->f_12.f_28 = 1;
				}
			}
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (!uParam0->f_446.f_26)
				{
					__LIB_36__::func_887(&(uParam0->f_446), uParam0->f_446.f_6);
					if (uParam0->f_446.f_3 != 0)
					{
						STREAMING::REQUEST_MODEL(uParam0->f_446.f_3);
						uParam0->f_446.f_28 = 1;
					}
				}
			}
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (!uParam0->f_43.f_6)
				{
					__LIB_36__::func_887(&(uParam0->f_43), uParam0->f_43.f_2);
					if (__LIB_36__::func_885(uParam0))
					{
						if (uParam0->f_43.f_1 != 0)
						{
							STREAMING::REQUEST_MODEL(uParam0->f_43.f_1);
							uParam0->f_43.f_7 = 1;
						}
					}
				}
			}
			if ((((uParam0->f_12.f_28 && !STREAMING::HAS_MODEL_LOADED(uParam0->f_12.f_3)) || (uParam0->f_446.f_28 && !STREAMING::HAS_MODEL_LOADED(uParam0->f_446.f_3))) || (uParam0->f_43.f_7 && !STREAMING::HAS_MODEL_LOADED(uParam0->f_43.f_1))) || !STREAMING::HAS_MODEL_LOADED(joaat("p_cs_scissors_s")))
			{
				return;
			}
			if (__LIB_36__::func_885(uParam0))
			{
				if (__LIB_36__::func_873(uParam0))
				{
					uParam0->f_486 = "misshair_shop@hair_dressers";
				}
				else if (*uParam0 == 50)
				{
					uParam0->f_486 = "anim@amb@luxury_suite@spa@barbers";
				}
				else
				{
					uParam0->f_486 = "misshair_shop@barbers";
				}
				if (!__LIB_36__::func_875(uParam0))
				{
					return;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_12) && uParam0->f_12.f_28)
			{
				bVar3 = false;
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if ((NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT() && !NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_66.f_0)) && !Local_66.f_3)
					{
						bVar3 = true;
					}
					if (bVar3 && *uParam0 == 50)
					{
						iVar4 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(__LIB_0__::func_785(*uParam0, 0), __LIB_3__::func_285(*uParam0));
						if (iVar4 == 0)
						{
							__LIB_13__::func_836("Hairdo interior is null..", -1);
							bVar3 = false;
						}
					}
				}
				else
				{
					bVar3 = true;
				}
				if (!bVar3)
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						__LIB_13__::func_836("Using net shop keeper..", -1);
						__LIB_36__::func_892(&(uParam0->f_12));
						if (!uParam0->f_12.f_27)
						{
							__LIB_13__::func_836("Waiting for shop keeper to be initialised", -1);
							return;
						}
					}
				}
				else
				{
					__LIB_13__::func_836("Creating shop keeper..", -1);
					MISC::CLEAR_AREA(uParam0->f_12.f_6, 2.5f, true, false, false, false);
					Var5 = { uParam0->f_12.f_6 };
					if (__LIB_36__::func_885(uParam0))
					{
						if (!__LIB_36__::func_873(uParam0))
						{
							if (__LIB_36__::func_920(*uParam0, &Var1, &Var2))
							{
								Var5 = { Var1 };
							}
						}
					}
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						if (!__LIB_1__::func_672(&Local_66, 4, uParam0->f_12.f_3, Var5, uParam0->f_12.f_15, 1, 1, 1))
						{
							return;
						}
						if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
						{
							Local_66.f_3 = 1;
						}
						__LIB_36__::func_892(&(uParam0->f_12));
					}
					else
					{
						uParam0->f_12 = PED::CREATE_PED(4, uParam0->f_12.f_3, Var5, uParam0->f_12.f_15, false, false);
					}
					if (__LIB_16__::func_422(0))
					{
						if (*uParam0 == 50)
						{
							PED::SET_PED_DEFAULT_COMPONENT_VARIATION(uParam0->f_12);
							PED::SET_PED_COMPONENT_VARIATION(uParam0->f_12, 2, 1, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(uParam0->f_12, 0, 1, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(uParam0->f_12, 3, 1, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(uParam0->f_12, 4, 0, 1, 0);
							PED::SET_PED_COMPONENT_VARIATION(uParam0->f_12, 5, 0, 1, 0);
							PED::SET_PED_COMPONENT_VARIATION(uParam0->f_12, 8, 0, 0, 0);
							ENTITY::SET_ENTITY_CAN_BE_DAMAGED(uParam0->f_12, false);
							PED::SET_PED_AS_ENEMY(uParam0->f_12, false);
							WEAPON::SET_CURRENT_PED_WEAPON(uParam0->f_12, joaat("WEAPON_UNARMED"), true);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_12, true);
							PED::SET_PED_RESET_FLAG(uParam0->f_12, 249, true);
							PED::SET_PED_CONFIG_FLAG(uParam0->f_12, 185, true);
							PED::SET_PED_CONFIG_FLAG(uParam0->f_12, 108, true);
							PED::SET_PED_CONFIG_FLAG(uParam0->f_12, 106, true);
							PED::SET_PED_CAN_EVASIVE_DIVE(uParam0->f_12, false);
							PED::SET_TREAT_AS_AMBIENT_PED_FOR_DRIVER_LOCKON(uParam0->f_12, true);
							PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(uParam0->f_12, false);
							PED::SET_PED_CAN_RAGDOLL(uParam0->f_12, false);
							PED::SET_PED_CONFIG_FLAG(uParam0->f_12, 208, true);
							NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(uParam0->f_12, true);
						}
						else if (__LIB_36__::func_873(uParam0))
						{
							PED::SET_PED_DEFAULT_COMPONENT_VARIATION(uParam0->f_12);
						}
						else
						{
							iVar0 = (*uParam0 - 1);
							switch (iVar0)
							{
								case 0:
									PED::SET_PED_COMPONENT_VARIATION(uParam0->f_12, 0, 0, 0, 0);
									PED::SET_PED_COMPONENT_VARIATION(uParam0->f_12, 2, 1, 0, 0);
									PED::SET_PED_COMPONENT_VARIATION(uParam0->f_12, 3, 0, 0, 0);
									PED::SET_PED_COMPONENT_VARIATION(uParam0->f_12, 4, 1, 0, 0);
									break;
								case 1:
									PED::SET_PED_COMPONENT_VARIATION(uParam0->f_12, 0, 1, 0, 0);
									PED::SET_PED_COMPONENT_VARIATION(uParam0->f_12, 2, 0, 1, 0);
									PED::SET_PED_COMPONENT_VARIATION(uParam0->f_12, 3, 1, 0, 0);
									PED::SET_PED_COMPONENT_VARIATION(uParam0->f_12, 4, 0, 0, 0);
									break;
								case 2:
									PED::SET_PED_COMPONENT_VARIATION(uParam0->f_12, 0, 1, 0, 0);
									PED::SET_PED_COMPONENT_VARIATION(uParam0->f_12, 2, 1, 0, 0);
									PED::SET_PED_COMPONENT_VARIATION(uParam0->f_12, 3, 1, 0, 0);
									PED::SET_PED_COMPONENT_VARIATION(uParam0->f_12, 4, 1, 0, 0);
									PED::SET_PED_COMPONENT_VARIATION(uParam0->f_12, 8, 0, 0, 0);
									break;
								case 3:
									PED::SET_PED_COMPONENT_VARIATION(uParam0->f_12, 0, 1, 1, 0);
									PED::SET_PED_COMPONENT_VARIATION(uParam0->f_12, 2, 1, 1, 0);
									PED::SET_PED_COMPONENT_VARIATION(uParam0->f_12, 3, 1, 0, 0);
									PED::SET_PED_COMPONENT_VARIATION(uParam0->f_12, 4, 0, 0, 0);
									break;
								case 4:
									PED::SET_PED_COMPONENT_VARIATION(uParam0->f_12, 0, 1, 0, 0);
									PED::SET_PED_COMPONENT_VARIATION(uParam0->f_12, 2, 1, 0, 0);
									PED::SET_PED_COMPONENT_VARIATION(uParam0->f_12, 3, 0, 0, 0);
									PED::SET_PED_COMPONENT_VARIATION(uParam0->f_12, 4, 1, 0, 0);
									break;
								case 5:
									PED::SET_PED_COMPONENT_VARIATION(uParam0->f_12, 0, 1, 0, 0);
									PED::SET_PED_COMPONENT_VARIATION(uParam0->f_12, 2, 1, 1, 0);
									PED::SET_PED_COMPONENT_VARIATION(uParam0->f_12, 3, 1, 0, 0);
									PED::SET_PED_COMPONENT_VARIATION(uParam0->f_12, 4, 1, 0, 0);
									break;
								}
						}
						if (__LIB_14__::func_289(*uParam0))
						{
							INTERIOR::RETAIN_ENTITY_IN_INTERIOR(uParam0->f_12, INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(__LIB_0__::func_785(*uParam0, 0), __LIB_3__::func_285(*uParam0)));
						}
						ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(uParam0->f_12, true);
						ENTITY::SET_ENTITY_LOD_DIST(uParam0->f_12, 300);
						if (__LIB_36__::func_873(uParam0))
						{
							PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(uParam0->f_12, false);
							PED::SET_PED_CONFIG_FLAG(uParam0->f_12, 185, true);
						}
						PED::SET_PED_CAN_EVASIVE_DIVE(uParam0->f_12, false);
						PED::SET_TREAT_AS_AMBIENT_PED_FOR_DRIVER_LOCKON(uParam0->f_12, true);
						PED::SET_PED_AS_ENEMY(uParam0->f_12, false);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_12, true);
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_12) && !PED::IS_PED_INJURED(uParam0->f_12))
				{
					if (__LIB_36__::func_873(uParam0))
					{
						__LIB_0__::func_221(&(uParam0->f_276.f_5), __LIB_13__::func_103("E"));
						__LIB_0__::func_222(&(uParam0->f_276.f_5), __LIB_13__::func_103("E"), uParam0->f_12, "ShopHairStylist", 0, 1);
					}
					else
					{
						__LIB_0__::func_221(&(uParam0->f_276.f_5), __LIB_13__::func_103("D"));
						__LIB_0__::func_222(&(uParam0->f_276.f_5), __LIB_13__::func_103("D"), uParam0->f_12, "ShopBarber", 0, 1);
					}
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_12.f_3);
					uParam0->f_12.f_28 = 0;
					uParam0->f_12.f_26 = 1;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_446) && uParam0->f_446.f_28)
			{
				__LIB_13__::func_836("Creating shop receptionist", -1);
				MISC::CLEAR_AREA(uParam0->f_446.f_6, 2.5f, true, false, false, false);
				uParam0->f_446 = PED::CREATE_PED(5, uParam0->f_446.f_3, uParam0->f_446.f_6, uParam0->f_446.f_15, false, false);
				PED::SET_PED_DEFAULT_COMPONENT_VARIATION(uParam0->f_446);
				if (__LIB_14__::func_289(*uParam0))
				{
					INTERIOR::RETAIN_ENTITY_IN_INTERIOR(uParam0->f_446, INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(__LIB_0__::func_785(*uParam0, 0), __LIB_3__::func_285(*uParam0)));
				}
				ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(uParam0->f_446, true);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_446, 185, true);
				PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(uParam0->f_12, false);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_446.f_3);
				uParam0->f_446.f_28 = 0;
				PED::SET_PED_AS_ENEMY(uParam0->f_446, false);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_446, true);
				uParam0->f_446.f_26 = 1;
				__LIB_0__::func_221(&(uParam0->f_276.f_5), __LIB_13__::func_103("D"));
				__LIB_0__::func_222(&(uParam0->f_276.f_5), __LIB_13__::func_103("D"), uParam0->f_12, "ShopBarberAssistant", 0, 1);
				if (__LIB_36__::func_873(uParam0))
				{
					AUDIO::SET_AMBIENT_VOICE_NAME(uParam0->f_12, "S_M_M_HAIRDRESSER_01_BLACK_MINI_01");
				}
				else
				{
					AUDIO::SET_AMBIENT_VOICE_NAME(uParam0->f_12, "S_F_M_FEMBARBER_BLACK_MINI_01");
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_43) && uParam0->f_43.f_7)
			{
				__LIB_13__::func_836("Creating shop customer", -1);
				MISC::CLEAR_AREA(uParam0->f_43.f_2, 2.5f, true, false, false, false);
				uParam0->f_43 = PED::CREATE_PED(4, uParam0->f_43.f_1, uParam0->f_43.f_2, uParam0->f_43.f_5, false, false);
				if (__LIB_36__::func_873(uParam0))
				{
					PED::SET_PED_DEFAULT_COMPONENT_VARIATION(uParam0->f_43);
				}
				else
				{
					PED::SET_PED_COMPONENT_VARIATION(uParam0->f_43, 0, 1, 1, 0);
					PED::SET_PED_COMPONENT_VARIATION(uParam0->f_43, 2, 0, 1, 0);
					PED::SET_PED_COMPONENT_VARIATION(uParam0->f_43, 3, 1, 2, 0);
					PED::SET_PED_COMPONENT_VARIATION(uParam0->f_43, 4, 0, 0, 0);
				}
				ENTITY::SET_ENTITY_COLLISION(uParam0->f_43, false, false);
				if (__LIB_14__::func_289(*uParam0))
				{
					INTERIOR::RETAIN_ENTITY_IN_INTERIOR(uParam0->f_43, INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(__LIB_0__::func_785(*uParam0, 0), __LIB_3__::func_285(*uParam0)));
				}
				ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(uParam0->f_43, true);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_43.f_1);
				uParam0->f_43.f_7 = 0;
				STREAMING::REQUEST_ANIM_DICT("amb@prop_human_seat_chair@male@generic@react_cowering");
				uParam0->f_43.f_6 = 1;
			}
			if (!uParam0->f_495)
			{
				iVar6 = 1;
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_12) || PED::IS_PED_INJURED(uParam0->f_12))
				{
					iVar6 = 0;
				}
				if (__LIB_36__::func_873(uParam0) && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_446))
					{
						iVar6 = 0;
					}
				}
				if (iVar6 == 1)
				{
					StringCopy(&cVar7, "HAIRDRESSER", 16);
					StringIntConCat(&cVar7, *uParam0, 16);
					PED::ADD_RELATIONSHIP_GROUP(&cVar7, &(uParam0->f_524));
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_446))
					{
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_446, uParam0->f_524);
					}
					if (__LIB_16__::func_422(0))
					{
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_12, uParam0->f_524);
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, uParam0->f_524, joaat("PLAYER"));
						if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						{
							PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("PLAYER"), uParam0->f_524);
							PED::SET_PED_CAN_BE_TARGETTED(uParam0->f_12, false);
						}
					}
					uParam0->f_495 = 1;
				}
			}
			if (!__LIB_36__::func_885(uParam0))
			{
				if (__LIB_36__::func_873(uParam0))
				{
					uParam0->f_486 = "misshair_shop@hair_dressers";
				}
				else if (*uParam0 == 50)
				{
					uParam0->f_486 = "anim@amb@luxury_suite@spa@barbers";
				}
				else
				{
					uParam0->f_486 = "misshair_shop@barbers";
				}
				if (!__LIB_36__::func_875(uParam0))
				{
					return;
				}
			}
			if (__LIB_36__::func_885(uParam0))
			{
				if (__LIB_36__::func_873(uParam0))
				{
					sVar8 = "keeper_base";
					sVar9 = "player_base";
				}
				else
				{
					sVar8 = "keeper_tutorial_base";
					sVar9 = "customer_tutorial_base";
				}
				if (!PED::IS_PED_INJURED(uParam0->f_12))
				{
					__LIB_42__::func_319(uParam0, sVar8, 0, 0, 0, -1056964608);
				}
				if (!PED::IS_PED_INJURED(uParam0->f_43))
				{
					if (__LIB_36__::func_920(*uParam0, &Var1, &Var2))
					{
						TASK::TASK_PLAY_ANIM_ADVANCED(uParam0->f_43, uParam0->f_486, sVar9, Var1, Var2, 1000f, -8f, -1, 5641, 0f, 2, 0);
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_446))
			{
				if (!PED::IS_PED_INJURED(uParam0->f_446))
				{
					TASK::TASK_START_SCENARIO_IN_PLACE(uParam0->f_446, "WORLD_HUMAN_STAND_IMPATIENT_UPRIGHT", 0, false);
				}
			}
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (Global_262145.f_2463 /* Tunable: IS_SALE_ON_IN_HAIR_SHOP */)
				{
					GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPShops", false);
				}
			}
			__LIB_15__::func_884(*uParam0, 0, 0);
			uParam0->f_116.f_5 = 0;
			uParam0->f_11 = 1;
			break;
	}
}

void func_1045(var uParam0)//Position - 0x88FF1
{
	int iVar0;
	int iVar1;
	if (!uParam0->f_9)
	{
		__LIB_13__::func_901(&(uParam0->f_276), -1, 1);
		return;
	}
	if (PED::IS_PED_INJURED(uParam0->f_12))
	{
		return;
	}
	if (uParam0->f_7)
	{
		if (uParam0->f_11 == 3)
		{
			if (!uParam0->f_575)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uParam0->f_12, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < 5.5f || !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!uParam0->f_576)
					{
						if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						{
							uParam0->f_574 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), MISC::GET_RANDOM_INT_IN_RANGE(300, 600));
						}
						else
						{
							uParam0->f_573 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(300, 600));
						}
						uParam0->f_576 = 1;
					}
					else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						if (NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), uParam0->f_574))
						{
							__LIB_13__::func_901(&(uParam0->f_276), 0, 2);
							uParam0->f_575 = 1;
						}
					}
					else if ((MISC::GET_GAME_TIMER() - uParam0->f_573) > 0)
					{
						__LIB_13__::func_901(&(uParam0->f_276), 0, 2);
						uParam0->f_575 = 1;
					}
				}
			}
		}
		else if (uParam0->f_11 == 4)
		{
			uParam0->f_575 = 1;
		}
	}
	else if (__LIB_14__::func_291(*uParam0) > 30f)
	{
		uParam0->f_575 = 0;
		uParam0->f_576 = 0;
	}
	if (uParam0->f_116.f_19)
	{
		uParam0->f_575 = 1;
		if (uParam0->f_116.f_31 == 1)
		{
			__LIB_13__::func_901(&(uParam0->f_276), -1, 1);
			if (!uParam0->f_579)
			{
				if (!uParam0->f_580)
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						uParam0->f_578 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 100);
					}
					else
					{
						uParam0->f_577 = MISC::GET_GAME_TIMER() + 100;
					}
					uParam0->f_580 = 1;
				}
				else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), uParam0->f_578))
					{
						__LIB_13__::func_901(&(uParam0->f_276), 1, 2);
						uParam0->f_579 = 1;
					}
				}
				else if ((MISC::GET_GAME_TIMER() - uParam0->f_577) > 0)
				{
					__LIB_13__::func_901(&(uParam0->f_276), 1, 2);
					uParam0->f_579 = 1;
				}
			}
		}
		else if (uParam0->f_116.f_31 == 2)
		{
			uParam0->f_588 = 1;
			uParam0->f_587 = 0;
			if (uParam0->f_116.f_15 && !uParam0->f_116.f_22)
			{
				if (!uParam0->f_583)
				{
					if (!uParam0->f_584)
					{
						if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						{
							uParam0->f_582 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), MISC::GET_RANDOM_INT_IN_RANGE(100, 400));
						}
						else
						{
							uParam0->f_581 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(100, 400));
						}
						uParam0->f_584 = 1;
					}
					else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						if (NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), uParam0->f_582))
						{
							__LIB_13__::func_901(&(uParam0->f_276), 2, 2);
							uParam0->f_583 = 1;
						}
					}
					else if ((MISC::GET_GAME_TIMER() - uParam0->f_581) > 0)
					{
						__LIB_13__::func_901(&(uParam0->f_276), 2, 2);
						uParam0->f_583 = 1;
					}
				}
			}
		}
	}
	else
	{
		uParam0->f_579 = 0;
		uParam0->f_580 = 0;
		uParam0->f_583 = 0;
		uParam0->f_584 = 0;
	}
	if (uParam0->f_116.f_31 == 6)
	{
		if (uParam0->f_588)
		{
			if (!uParam0->f_587)
			{
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					uParam0->f_586 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), MISC::GET_RANDOM_INT_IN_RANGE(300, 600));
				}
				else
				{
					uParam0->f_585 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(300, 600));
				}
				uParam0->f_587 = 1;
			}
			else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), uParam0->f_586))
				{
					__LIB_13__::func_901(&(uParam0->f_276), 3, 2);
					uParam0->f_588 = 0;
				}
			}
			else if ((MISC::GET_GAME_TIMER() - uParam0->f_585) > 0)
			{
				__LIB_13__::func_901(&(uParam0->f_276), 3, 2);
				uParam0->f_588 = 0;
			}
		}
	}
	if (uParam0->f_276 != -1)
	{
		if (!__LIB_15__::func_115(&(uParam0->f_276), *uParam0, 0))
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (!uParam0->f_572)
				{
					uParam0->f_571 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 3000);
					uParam0->f_572 = 1;
				}
				else if (NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), uParam0->f_571))
				{
					__LIB_13__::func_839(&(uParam0->f_276));
					uParam0->f_572 = 0;
				}
			}
			else if (!uParam0->f_572)
			{
				uParam0->f_570 = MISC::GET_GAME_TIMER();
				uParam0->f_572 = 1;
			}
			else if ((MISC::GET_GAME_TIMER() - uParam0->f_570) > 3000)
			{
				__LIB_13__::func_839(&(uParam0->f_276));
				uParam0->f_572 = 0;
			}
		}
		else
		{
			uParam0->f_572 = 0;
			iVar1 = 1;
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_12))
			{
				iVar1 = 0;
			}
			switch (uParam0->f_276)
			{
				case 0:
					if (__LIB_15__::func_111(-1))
					{
						AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(uParam0->f_12, "SHOP_NO_COPS", "SPEECH_PARAMS_FORCE", iVar1);
					}
					else if (__LIB_4__::func_962(PLAYER::PLAYER_PED_ID()) || (__LIB_0__::func_512(PLAYER::PLAYER_PED_ID()) && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()))
					{
						AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(uParam0->f_12, "SHOP_GREET_UNUSUAL", "SPEECH_PARAMS_FORCE", iVar1);
					}
					else if ((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == joaat("Player_Zero")) && (func_146(PLAYER::PLAYER_PED_ID(), 12, 8) || func_146(PLAYER::PLAYER_PED_ID(), 12, 28)))
					{
						AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(uParam0->f_12, "KIFFLOM_GREET", "SPEECH_PARAMS_FORCE", iVar1);
					}
					else
					{
						AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(uParam0->f_12, "SHOP_GREET", "SPEECH_PARAMS_FORCE", iVar1);
					}
					break;
				case 1:
					switch (*uParam0)
					{
						case 0:
							if (Global_100493.f_1452 == 1)
							{
								AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(uParam0->f_12, "SHOP_HAIR_WHAT_WANT", "SPEECH_PARAMS_FORCE", iVar1);
							}
							else
							{
								Stack.Push(PLAYER::PLAYER_PED_ID());
								Stack.Push(2);
								Stack.Push(-1);
								Call_Loc(uParam0->f_478);
								iVar0 = StackVal;
								if (iVar0 != 1 && __LIB_14__::func_466() == 0)
								{
									AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(uParam0->f_12, "SHOP_HAIR_WHAT_WANT", "SPEECH_PARAMS_FORCE", iVar1);
								}
							}
							Global_100493.f_1452 = 2;
							break;
						default:
							AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(uParam0->f_12, "SHOP_HAIR_WHAT_WANT", "SPEECH_PARAMS_FORCE", iVar1);
							Global_100493.f_1452 = 0;
							break;
					}
					break;
				case 2:
					switch (*uParam0)
					{
						case 0:
							AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(uParam0->f_12, "SHOP_CUTTING_HAIR", "SPEECH_PARAMS_FORCE", iVar1);
							Global_100493.f_1452 = 3;
							break;
						default:
							AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(uParam0->f_12, "SHOP_CUTTING_HAIR", "SPEECH_PARAMS_FORCE", iVar1);
							Global_100493.f_1452 = 1;
							break;
					}
					break;
				case 3:
					AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(uParam0->f_12, "SHOP_GOODBYE", "SPEECH_PARAMS_FORCE", iVar1);
					break;
				default:
					break;
			}
			__LIB_14__::func_344(&(uParam0->f_276));
		}
	}
}

void func_1072(var uParam0, var uParam1)//Position - 0x8A2DF
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	float fVar5;
	if (uParam0->f_9)
	{
		if (!uParam0->f_108)
		{
			if ((__LIB_1__::func_686(*uParam0, 12, 1) || __LIB_1__::func_686(*uParam0, 13, 1)) || __LIB_1__::func_686(*uParam0, 2, 1))
			{
				uParam0->f_108 = 1;
			}
		}
		if (uParam0->f_11 != 6 && !BitTest(Global_100493.f_1393[*uParam0], 11))
		{
			bVar0 = __LIB_13__::func_725(*uParam0);
			if (*uParam0 == 44)
			{
				if (uParam0->f_11 == 0)
				{
					if (uParam1->f_5 == 1)
					{
						if (!__LIB_3__::func_200(*uParam0) && !__LIB_13__::func_725(*uParam0))
						{
							bVar0 = true;
						}
					}
				}
			}
			if (*uParam0 == 45)
			{
				bVar0 = true;
			}
			if (!bVar0 || (((((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || uParam0->f_12.f_27) && ENTITY::DOES_ENTITY_EXIST(uParam0->f_12)) && PED::IS_PED_INJURED(uParam0->f_12)) && *uParam0 != 44) && *uParam0 != 45))
			{
				if (uParam0->f_11 == 4)
				{
					uParam1->f_31 = 8;
				}
				else
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && __LIB_0__::func_328(*uParam0) == 4)
					{
						if (uParam0->f_11 == 4)
						{
							__LIB_15__::func_133(uParam1, 0, 0, 0, 0);
							__LIB_13__::func_610(1);
							__LIB_14__::func_455();
						}
					}
					uParam0->f_11 = 6;
				}
			}
			if (uParam0->f_11 == 6)
			{
				__LIB_13__::func_617();
			}
		}
		if (uParam0->f_11 == 6)
		{
			__LIB_16__::func_574(uParam0);
			if (!uParam0->f_1)
			{
				if (uParam0->f_3 != -1)
				{
					__LIB_3__::func_122(&(uParam0->f_3));
				}
				bVar1 = false;
				bVar2 = false;
				bVar3 = false;
				if (uParam0->f_7 || ((__LIB_14__::func_479(*uParam0) && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) && __LIB_0__::func_328(*uParam0) != 4))
				{
					bVar2 = true;
				}
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (((!__LIB_14__::func_350(*uParam0) || !__LIB_1__::func_686(*uParam0, 0, 0)) || __LIB_1__::func_16()) || __LIB_1__::func_872(PLAYER::PLAYER_ID()))
					{
						bVar1 = true;
					}
				}
				else if ((!__LIB_14__::func_349(*uParam0) || !__LIB_1__::func_686(*uParam0, 0, 0)) || __LIB_1__::func_872(PLAYER::PLAYER_ID()))
				{
					bVar1 = true;
				}
				if (!bVar1)
				{
					if ((PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || ((uParam0->f_7 && !uParam0->f_8) && __LIB_0__::func_328(*uParam0) == 3))
					{
						bVar1 = true;
					}
				}
				if (!bVar1)
				{
					if (!uParam0->f_7)
					{
						if (__LIB_1__::func_686(*uParam0, 0, 1) || (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !__LIB_0__::func_328(*uParam0) == 4))
						{
							bVar1 = true;
						}
						if (!bVar1)
						{
							fVar4 = 2.5f;
							if (*uParam0 == 9)
							{
								fVar4 = 4f;
							}
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
								fVar4 = 7.5f;
							}
							fVar5 = __LIB_14__::func_291(*uParam0);
							if (fVar5 > fVar4)
							{
								bVar1 = true;
							}
						}
					}
					else if (!uParam0->f_8 && __LIB_0__::func_328(*uParam0) == 3)
					{
						bVar1 = true;
					}
				}
				if (__LIB_14__::func_478(*uParam0))
				{
					bVar1 = true;
					bVar2 = true;
				}
				if (*uParam0 == 22 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("family6")) != 0)
				{
					bVar3 = true;
					if (!bVar1)
					{
						bVar1 = true;
					}
				}
				if (bVar1)
				{
					__LIB_13__::func_617();
				}
				else if ((((((!__LIB_14__::func_290(*uParam0) && !__LIB_13__::func_661(*uParam0)) && *uParam0 != 50) && *uParam0 != 51) && *uParam0 != 54) && *uParam0 != 55) && *uParam0 != 57)
				{
					if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() || __LIB_3__::func_56("SHOP_CLOSED" /* GXT: ~a~ is closed. Please come back later. */, __LIB_12__::func_769(*uParam0, 0, 0)))
					{
						if (!__LIB_0__::func_1("VENDHLP" /* GXT: Press ~INPUT_CONTEXT~ to buy a soda for $1. */) && !__LIB_0__::func_927(PLAYER::PLAYER_ID()))
						{
							__LIB_15__::func_19("SHOP_CLOSED" /* GXT: ~a~ is closed. Please come back later. */, __LIB_12__::func_769(*uParam0, 0, 0));
						}
					}
				}
				if (!bVar3)
				{
					if (bVar2)
					{
						if (__LIB_14__::func_934(*uParam0))
						{
							__LIB_15__::func_884(*uParam0, 0, 1);
						}
						__LIB_15__::func_884(*uParam0, 0, 0);
					}
					else
					{
						__LIB_15__::func_884(*uParam0, 1, 0);
					}
				}
			}
			if (__LIB_14__::func_404(1))
			{
				if (Global_100493.f_77[*uParam0])
				{
					if ((uParam0->f_108 && !__LIB_1__::func_29(PLAYER::PLAYER_ID(), 1, 0)) && !__LIB_14__::func_479(*uParam0))
					{
						__LIB_3__::func_506(*uParam0);
					}
				}
				else if ((((((uParam0->f_108 && !__LIB_0__::func_39(11)) && !__LIB_0__::func_39(9)) && !__LIB_0__::func_39(0)) && !__LIB_0__::func_39(3)) && !BitTest(Global_100493.f_1393[*uParam0], 1)) && !BitTest(Global_100493.f_1393[*uParam0], 2))
				{
					if (__LIB_0__::func_328(*uParam0) == 3)
					{
						__LIB_3__::func_506(*uParam0);
					}
					else if (!uParam0->f_7 && __LIB_14__::func_291(*uParam0) > 50f)
					{
						__LIB_3__::func_506(*uParam0);
					}
				}
			}
		}
	}
}

void func_1092(int iParam0)//Position - 0x8B232
{
	bool bVar0;
	bVar0 = false;
	if (iParam0 == 50)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		__LIB_2__::func_911(iParam0, 0, 1);
		__LIB_2__::func_911(iParam0, 0, 1);
		__LIB_2__::func_911(iParam0, 4, 1);
		__LIB_2__::func_943(iParam0, 4, 0);
		Global_100493.f_17 = 1;
	}
}

void func_1109(var uParam0, bool bParam1)//Position - 0x8C1C8
{
	int iVar0;
	__LIB_16__::func_557(1);
	if (uParam0->f_116.f_19)
	{
		if (__LIB_10__::func_320())
		{
			__LIB_9__::func_341();
			Global_2714762.f_785.f_39 = uParam0->f_116;
		}
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			PED::RELEASE_PED_PRELOAD_PROP_DATA(PLAYER::PLAYER_PED_ID());
			PED::RELEASE_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID());
		}
	}
	if (uParam0->f_3 != -1)
	{
		__LIB_3__::func_122(&(uParam0->f_3));
	}
	if (__LIB_14__::func_285(PLAYER::PLAYER_ID(), uParam0->f_523, 1) && *uParam0 != 50)
	{
		__LIB_14__::func_359(PLAYER::PLAYER_ID(), uParam0->f_523);
	}
	if (__LIB_36__::func_878(PLAYER::PLAYER_ID(), uParam0->f_523, 0) && *uParam0 == 50)
	{
		__LIB_36__::func_821(PLAYER::PLAYER_ID(), uParam0->f_523);
	}
	__LIB_36__::func_819(uParam0, uParam0->f_523);
	__LIB_13__::func_862(&(uParam0->f_51));
	if (!PED::IS_PED_INJURED(uParam0->f_12))
	{
		if (uParam0->f_10)
		{
			if (__LIB_14__::func_311(uParam0->f_523) || NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
			}
			else
			{
				PED::DELETE_PED(&(uParam0->f_12));
			}
		}
		else if (bParam1)
		{
			if (__LIB_14__::func_311(uParam0->f_523) || NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
			}
			else
			{
				PED::DELETE_PED(&(uParam0->f_12));
			}
		}
		else if (__LIB_14__::func_311(uParam0->f_523) || NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
		}
		else
		{
			PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(uParam0->f_12, true);
			PED::SET_PED_KEEP_TASK(uParam0->f_12, true);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_12));
		}
	}
	else
	{
		uParam0->f_12 = 0;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("p_cs_scissors_s"));
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_526))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam0->f_526));
	}
	if (uParam0->f_12.f_28)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_12.f_3);
		uParam0->f_12.f_28 = 0;
	}
	if (!PED::IS_PED_INJURED(uParam0->f_446))
	{
		if (uParam0->f_10)
		{
			PED::DELETE_PED(&(uParam0->f_446));
		}
		else if (bParam1)
		{
			PED::DELETE_PED(&(uParam0->f_446));
		}
		else
		{
			if (__LIB_16__::func_422(0))
			{
				PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(uParam0->f_446, true);
			}
			PED::SET_PED_KEEP_TASK(uParam0->f_446, true);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_446));
		}
	}
	else
	{
		uParam0->f_446 = 0;
	}
	if (uParam0->f_446.f_28)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_446.f_3);
		uParam0->f_446.f_28 = 0;
	}
	if (!PED::IS_PED_INJURED(uParam0->f_43))
	{
		if (uParam0->f_10)
		{
			PED::DELETE_PED(&(uParam0->f_43));
		}
		else if (bParam1)
		{
			PED::DELETE_PED(&(uParam0->f_43));
		}
		else
		{
			PED::SET_PED_KEEP_TASK(uParam0->f_43, true);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_43));
		}
	}
	else
	{
		uParam0->f_43 = 0;
	}
	if (uParam0->f_43.f_7)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_43.f_1);
		uParam0->f_43.f_7 = 0;
	}
	__LIB_36__::func_893(uParam0);
	if (uParam0->f_496)
	{
		STREAMING::REMOVE_PTFX_ASSET();
		uParam0->f_496 = 0;
	}
	if (uParam0->f_497)
	{
		AUDIO::RELEASE_AMBIENT_AUDIO_BANK();
		uParam0->f_497 = 0;
	}
	if (uParam0->f_495)
	{
		PED::REMOVE_RELATIONSHIP_GROUP(uParam0->f_524);
		uParam0->f_495 = 0;
	}
	STREAMING::REMOVE_ANIM_DICT("amb@prop_human_seat_chair@male@generic@react_cowering");
	iVar0 = 0;
	if (__LIB_2__::func_764(uParam0->f_523))
	{
		iVar0 = 1;
	}
	if (Global_102575 == 1)
	{
		if (uParam0->f_11 == 2 || uParam0->f_11 == 4)
		{
			iVar0 = 1;
		}
	}
	__LIB_42__::func_330(uParam0);
	if (uParam0->f_523 == 50)
	{
		Global_1945920 = -1;
	}
	if (iVar0 == 1)
	{
		if (__LIB_14__::func_404(1))
		{
			func_324(uParam0);
		}
		__LIB_15__::func_133(&(uParam0->f_116), 1, 1, 1, 1);
		CAM::SET_WIDESCREEN_BORDERS(false, 0);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		__LIB_13__::func_610(1);
		__LIB_14__::func_455();
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (Global_262145.f_2463 /* Tunable: IS_SALE_ON_IN_HAIR_SHOP */)
			{
				GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPShops");
			}
		}
		__LIB_1__::func_895(1, *uParam0);
		__LIB_36__::func_900(uParam0);
		__LIB_14__::func_423(*uParam0, 0);
		func_122(uParam0);
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			Stack.Push(PLAYER::PLAYER_PED_ID());
			Stack.Push(2);
			Stack.Push(uParam0->f_272);
			Stack.Push(0);
			Stack.Push(-1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Stack.Push(-1);
			Stack.Push(-1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Call_Loc(uParam0->f_479);
			Stack.Push(PLAYER::PLAYER_PED_ID());
			Stack.Push(1);
			Stack.Push(uParam0->f_273);
			Stack.Push(0);
			Stack.Push(-1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Stack.Push(-1);
			Stack.Push(-1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Call_Loc(uParam0->f_479);
		}
		uParam0->f_503.f_19 = 0;
		__LIB_16__::func_382(&(uParam0->f_503), 1);
		__LIB_31__::func_910(0);
		if (Global_102575 == 1)
		{
			INTERIOR::CLEAR_ROOM_FOR_GAME_VIEWPORT();
		}
		Global_102575 = 0;
		if (uParam0->f_502)
		{
			NETWORK::NETWORK_DISABLE_LEAVE_REMOTE_PED_BEHIND(false);
			uParam0->f_502 = 0;
		}
	}
	if (bParam1)
	{
		__LIB_13__::func_836("Resetting script", -1);
		MISC::SET_BIT(&(Global_100493.f_1393[uParam0->f_523]), 11);
	}
	else
	{
		__LIB_13__::func_836("Terminating script", -1);
		MISC::CLEAR_BIT(&(Global_100493.f_1393[uParam0->f_523]), 16);
		SCRIPT::TERMINATE_THIS_THREAD();
	}
}

void func_1121(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, bool bParam9, int iParam10, bool bParam11, int iParam12)//Position - 0x8CA3E
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
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
	int iVar20;
	bool bVar21;
	int iVar22;
	int iVar23;
	bool bVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	bVar0 = !iParam10 == false;
	if (((((Global_4539548 && BitTest(Global_4539549[(iParam3 / 32)], (iParam3 % 32))) && !__LIB_16__::func_380(iParam3)) || ((iParam3 != iParam4 && iParam3 != 1) && iParam3 != 0)) || iParam1 != __LIB_16__::func_483(iParam2)) || iParam5 == -99)
	{
		return;
	}
	if (uParam0->f_252 < 124)
	{
		Global_4537108[uParam0->f_252] = 0;
		Global_4536982[uParam0->f_252] = 0;
	}
	bVar2 = true;
	if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == MISC::GET_HASH_KEY("wardrobe_mp"))
	{
		if (iParam8 == 0)
		{
			Global_78130[1 /*14*/] = { __LIB_6__::func_38(iParam2, iParam6, iParam5, iParam12) };
			if (BitTest(Global_78130[1 /*14*/].f_6, 6))
			{
				iParam12 = Global_2883588;
			}
			if ((BitTest(Global_78130[1 /*14*/].f_6, 6) && func_1162(Global_2883588, -1, -1)) && uParam0->f_252 < 124)
			{
			}
			else if (iParam6 == 10 && iParam5 == 0)
			{
			}
			else if ((iParam6 < 12 && BitTest(Global_78130[1 /*14*/].f_6, 6)) && uParam0->f_252 < 124)
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("MULTI_DECAL"), 0))
				{
				}
				else if (!BitTest(Global_78130[1 /*14*/].f_6, 2))
				{
					bVar2 = false;
				}
			}
			else if (!BitTest(Global_78130[1 /*14*/].f_6, 2))
			{
				bVar2 = false;
			}
		}
	}
	else if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != MISC::GET_HASH_KEY("hairdo_shop_mp"))
	{
		Global_78130[1 /*14*/] = { __LIB_6__::func_38(iParam2, iParam6, iParam5, iParam12) };
		if (!BitTest(Global_78130[1 /*14*/].f_6, 6))
		{
			if (__LIB_1__::func_783(PLAYER::PLAYER_ID()) && !__LIB_36__::func_815(iParam8))
			{
				bVar2 = false;
			}
			if (__LIB_2__::func_904(PLAYER::PLAYER_ID()))
			{
				if (iParam8 == 0)
				{
					bVar2 = false;
				}
			}
			if (__LIB_3__::func_501(PLAYER::PLAYER_ID()))
			{
				if (iParam8 == 0)
				{
					bVar2 = false;
				}
			}
			if (iParam6 == 12)
			{
			}
			else if (__LIB_16__::func_520(iParam6, iParam5))
			{
				__LIB_16__::func_519(iParam6, iParam5, &iVar1);
			}
			else
			{
				if (iParam6 == 10 || iParam4 == 3)
				{
					iVar1 = 1;
				}
				else
				{
					iVar1 = __LIB_16__::func_546(iParam6, iParam5);
				}
				if (iVar1 < 4)
				{
					if (!BitTest(Global_78130[1 /*14*/].f_6, 6))
					{
						if (!__LIB_16__::func_554(iParam2, iParam6, iParam5))
						{
							if (BitTest(Global_78130[1 /*14*/].f_6, 4))
							{
								MISC::CLEAR_BIT(&(Global_78130[1 /*14*/].f_6), 4);
							}
						}
					}
				}
			}
			if (((iParam8 == 0 && iParam6 != 10) && iParam4 != 3) && iParam6 != 12)
			{
				if (bParam9)
				{
					if (!__LIB_16__::func_520(iParam6, iParam5))
					{
						if (iVar1 > __LIB_1__::func_136(PLAYER::PLAYER_ID()))
						{
							bVar2 = false;
						}
					}
					else if (iVar1 > __LIB_16__::func_388(__LIB_31__::func_928(PLAYER::PLAYER_ID()), 0))
					{
						bVar2 = false;
					}
				}
				else if (!__LIB_16__::func_520(iParam6, iParam5))
				{
					if (iVar1 <= __LIB_1__::func_136(PLAYER::PLAYER_ID()))
					{
						bVar2 = false;
					}
				}
				else if (iVar1 <= __LIB_16__::func_388(__LIB_31__::func_928(PLAYER::PLAYER_ID()), 0))
				{
					bVar2 = false;
				}
			}
		}
		else
		{
			iParam12 = Global_2883588;
			bVar3 = false;
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam12, joaat("CASINO_ITEM"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam12, joaat("CASINO_ITEM"), 1))
			{
				bVar3 = true;
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam12, joaat("MULTI_DECAL"), 0) && iParam3 == 248)
			{
				bVar3 = true;
			}
			if ((bVar3 != __LIB_1__::func_783(PLAYER::PLAYER_ID()) && !__LIB_36__::func_815(iParam8)) && !__LIB_31__::func_932(iParam3))
			{
				bVar2 = false;
			}
			if (bVar3)
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam12, joaat("MULTI_DECAL"), 0))
				{
					__LIB_9__::func_828(MISC::GET_HASH_KEY(&Global_4538855), &iVar4, iParam6);
				}
				else
				{
					__LIB_9__::func_828(MISC::GET_HASH_KEY(&(Global_78130[1 /*14*/].f_8)), &iVar4, iParam6);
				}
				if (iVar4 == -1)
				{
					bVar2 = false;
				}
			}
			iVar5 = 0;
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam12, joaat("CAR_MEET_ITEM"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam12, joaat("CAR_MEET_ITEM"), 1))
			{
				iVar5 = 1;
			}
			if (iVar5 != __LIB_2__::func_904(PLAYER::PLAYER_ID()) && iParam6 != 12)
			{
				bVar2 = false;
			}
			bVar6 = false;
			iVar7 = 0;
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam12, joaat("MUSIC_STUDIO_ITEM"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam12, joaat("MUSIC_STUDIO_ITEM"), 1))
			{
				bVar6 = true;
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam12, joaat("MULTI_DECAL"), 0) && __LIB_36__::func_814(&Global_4538855))
			{
				bVar6 = true;
				iVar7 = 1;
			}
			if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam12, joaat("MULTI_DECAL"), 0) && __LIB_36__::func_814(&(Global_78130[1 /*14*/].f_8)))
			{
				bVar6 = true;
				iVar7 = 1;
			}
			if (((!bVar6 && __LIB_3__::func_501(PLAYER::PLAYER_ID())) && iParam6 != 12) && !bParam7)
			{
				bVar2 = false;
			}
			if (iVar7 && !__LIB_3__::func_501(PLAYER::PLAYER_ID()))
			{
				bVar2 = false;
			}
		}
	}
	else
	{
		Global_78130[1 /*14*/] = { __LIB_6__::func_38(iParam2, iParam6, iParam5, iParam12) };
		if (BitTest(Global_78130[1 /*14*/].f_6, 6))
		{
			iParam12 = Global_2883588;
		}
	}
	if (((iParam8 == 0 && iParam4 != 3) && !bParam11) && !Global_4539548)
	{
		if (!HUD::DOES_TEXT_LABEL_EXIST(&(Global_78130[1 /*14*/].f_8)) && !(BitTest(Global_78130[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("MULTI_DECAL"), 0)))
		{
			bVar2 = false;
		}
	}
	if (Global_4539548)
	{
		if (bVar2 && !bParam7)
		{
			MISC::SET_BIT(&(Global_4539549[(iParam4 / 32)]), (iParam4 % 32));
		}
	}
	else if (bVar2)
	{
		if (iParam3 == iParam4)
		{
			if (uParam0->f_252 < 124)
			{
				(*uParam0)[uParam0->f_252] = iParam5;
				uParam0->f_126[uParam0->f_252] = iParam6;
				uParam0->f_253[uParam0->f_252] = iParam8;
				Global_4536856[uParam0->f_252] = (Global_78130[1 /*14*/].f_3 * 1000 + Global_78130[1 /*14*/].f_4);
				if (BitTest(Global_78130[1 /*14*/].f_6, 6))
				{
					Global_4537108[uParam0->f_252] = Global_2883588;
					Global_4536477 = uParam0->f_252;
				}
				if (BitTest(Global_78130[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("MULTI_DECAL"), 0))
				{
					Global_4537234[uParam0->f_252] = __LIB_36__::func_813(iParam4, &Global_4538855);
					Global_4536982[uParam0->f_252] = __LIB_13__::func_996(__LIB_31__::func_876(Global_4538855));
				}
				else
				{
					Global_4537234[uParam0->f_252] = __LIB_36__::func_813(iParam4, &(Global_78130[1 /*14*/].f_8));
					Global_4536982[uParam0->f_252] = __LIB_13__::func_996(__LIB_31__::func_876(Global_78130[1 /*14*/].f_8));
				}
				Global_4537360[uParam0->f_252] = bVar0;
				Global_4537486[uParam0->f_252] = iParam10;
				if (bVar0)
				{
				}
			}
			if (!bParam7)
			{
				if (iParam3 == 78)
				{
					iVar8 = __LIB_36__::func_817(&(Global_78130[1 /*14*/].f_8));
					MISC::SET_BIT(&(Global_4538837[(iVar8 / 32)]), (iVar8 % 32));
				}
				else if (iParam3 == 89)
				{
					iVar9 = __LIB_16__::func_339(&(Global_78130[1 /*14*/].f_8));
					MISC::SET_BIT(&(Global_4538837[(iVar9 / 32)]), (iVar9 % 32));
				}
				else if (iParam3 == 122)
				{
					iVar10 = __LIB_16__::func_466(&Global_4538855);
					MISC::SET_BIT(&(Global_4538837[(iVar10 / 32)]), (iVar10 % 32));
				}
				else if (iParam3 == 153)
				{
					iVar11 = __LIB_16__::func_465(&Global_4538855);
					MISC::SET_BIT(&(Global_4538837[(iVar11 / 32)]), (iVar11 % 32));
				}
				else if (iParam3 == 235)
				{
					iVar12 = __LIB_16__::func_464(&Global_4538855);
					MISC::SET_BIT(&(Global_4538837[(iVar12 / 32)]), (iVar12 % 32));
				}
				else if (iParam3 == 238)
				{
					iVar13 = __LIB_16__::func_473(&(Global_78130[1 /*14*/].f_8));
					MISC::SET_BIT(&(Global_4538837[(iVar13 / 32)]), (iVar13 % 32));
				}
				else if (iParam3 == 247)
				{
					iVar14 = __LIB_16__::func_472(&(Global_78130[1 /*14*/].f_8));
					MISC::SET_BIT(&(Global_4538837[(iVar14 / 32)]), (iVar14 % 32));
				}
				else if (iParam3 == 242)
				{
					iVar15 = __LIB_16__::func_471(&(Global_78130[1 /*14*/].f_8));
					MISC::SET_BIT(&(Global_4538837[(iVar15 / 32)]), (iVar15 % 32));
				}
				else if (iParam3 == 243)
				{
					iVar16 = __LIB_16__::func_470(&(Global_78130[1 /*14*/].f_8));
					MISC::SET_BIT(&(Global_4538837[(iVar16 / 32)]), (iVar16 % 32));
				}
				else if (iParam3 == 258)
				{
					iVar17 = __LIB_16__::func_469(&(Global_78130[1 /*14*/].f_8));
					MISC::SET_BIT(&(Global_4538837[(iVar17 / 32)]), (iVar17 % 32));
				}
			}
			if (iParam6 == 2 && Global_4539547)
			{
			}
			else if (Global_4539548)
			{
			}
			else if (uParam0->f_252 == 123)
			{
			}
			else
			{
				uParam0->f_252++;
			}
		}
		if (!bParam7)
		{
			MISC::SET_BIT(&(uParam0->f_379[(iParam4 / 32)]), (iParam4 % 32));
			if (Global_4539548)
			{
				MISC::SET_BIT(&(Global_4539549[(iParam4 / 32)]), (iParam4 % 32));
			}
		}
		if (!bParam7)
		{
			if (iParam3 == 78)
			{
				if (BitTest(Global_78130[1 /*14*/].f_6, 1))
				{
					iVar18 = __LIB_36__::func_817(&(Global_78130[1 /*14*/].f_8));
					if (!BitTest(Global_4538840[(iVar18 / 32)], (iVar18 % 32)) && BitTest(Global_78130[1 /*14*/].f_6, 4))
					{
						MISC::SET_BIT(&(Global_4538840[(iVar18 / 32)]), (iVar18 % 32));
					}
					else if (!Global_4538835 && Global_4537614)
					{
						if (BitTest(Global_262145.f_14698[(iVar18 / 32)], (iVar18 % 32)))
						{
							MISC::SET_BIT(&(Global_4538843[(iVar18 / 32)]), (iVar18 % 32));
						}
					}
					else if (((!BitTest(Global_4538843[(iVar18 / 32)], (iVar18 % 32)) && Global_4537614) && Global_4538835) && __LIB_31__::func_892(Global_78130[1 /*14*/].f_6, iParam6, iParam5, iParam3, 0, &(Global_78130[1 /*14*/].f_8), "mask menu", -1, iParam12))
					{
						MISC::SET_BIT(&(Global_4538843[(iVar18 / 32)]), (iVar18 % 32));
					}
				}
			}
			else if (iParam3 == 89)
			{
				if (BitTest(Global_78130[1 /*14*/].f_6, 1))
				{
					iVar19 = __LIB_16__::func_339(&(Global_78130[1 /*14*/].f_8));
					if (!BitTest(Global_4538840[(iVar19 / 32)], (iVar19 % 32)) && BitTest(Global_78130[1 /*14*/].f_6, 4))
					{
						MISC::SET_BIT(&(Global_4538840[(iVar19 / 32)]), (iVar19 % 32));
					}
					else if ((!BitTest(Global_4538843[(iVar19 / 32)], (iVar19 % 32)) && Global_4537614) && __LIB_31__::func_892(Global_78130[1 /*14*/].f_6, iParam6, iParam5, iParam3, 0, &(Global_78130[1 /*14*/].f_8), "mask menu", -1, iParam12))
					{
						MISC::SET_BIT(&(Global_4538843[(iVar19 / 32)]), (iVar19 % 32));
					}
				}
			}
			else if (iParam3 == 122)
			{
				bVar21 = true;
				if (BitTest(Global_78130[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("MULTI_DECAL"), 0))
				{
					iVar20 = __LIB_16__::func_466(&Global_4538855);
					bVar21 = Global_4538859;
				}
				else
				{
					iVar20 = __LIB_16__::func_466(&(Global_78130[1 /*14*/].f_8));
					bVar21 = !BitTest(Global_78130[1 /*14*/].f_6, 4);
				}
				if (!BitTest(Global_4538840[(iVar20 / 32)], (iVar20 % 32)) && !bVar21)
				{
					MISC::SET_BIT(&(Global_4538840[(iVar20 / 32)]), (iVar20 % 32));
				}
			}
			else if (iParam3 == 153)
			{
				iVar22 = __LIB_16__::func_465(&Global_4538855);
				if (!BitTest(Global_4538840[(iVar22 / 32)], (iVar22 % 32)) && BitTest(Global_78130[1 /*14*/].f_6, 4))
				{
					MISC::SET_BIT(&(Global_4538840[(iVar22 / 32)]), (iVar22 % 32));
				}
				else if ((!BitTest(Global_4538843[(iVar22 / 32)], (iVar22 % 32)) && Global_4537614) && __LIB_31__::func_892(Global_78130[1 /*14*/].f_6, iParam6, iParam5, iParam3, 0, &Global_4538855, "festive menu", -1, iParam12))
				{
					MISC::SET_BIT(&(Global_4538843[(iVar22 / 32)]), (iVar22 % 32));
				}
			}
			else if (iParam3 == 235)
			{
				bVar24 = true;
				if (BitTest(Global_78130[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("MULTI_DECAL"), 0))
				{
					iVar23 = __LIB_16__::func_464(&Global_4538855);
					bVar24 = Global_4538859;
				}
				else
				{
					iVar23 = __LIB_16__::func_464(&(Global_78130[1 /*14*/].f_8));
					bVar24 = !BitTest(Global_78130[1 /*14*/].f_6, 4);
				}
				if (!BitTest(Global_4538840[(iVar23 / 32)], (iVar23 % 32)) && !bVar24)
				{
					MISC::SET_BIT(&(Global_4538840[(iVar23 / 32)]), (iVar23 % 32));
				}
				else if ((!BitTest(Global_4538843[(iVar23 / 32)], (iVar23 % 32)) && Global_4537614) && __LIB_31__::func_892(Global_78130[1 /*14*/].f_6, iParam6, iParam5, iParam3, 0, &Global_4538855, "arena top", -1, iParam12))
				{
					MISC::SET_BIT(&(Global_4538843[(iVar23 / 32)]), (iVar23 % 32));
				}
			}
			else if (iParam3 == 238)
			{
				iVar25 = __LIB_16__::func_473(&(Global_78130[1 /*14*/].f_8));
				if (!BitTest(Global_4538840[(iVar25 / 32)], (iVar25 % 32)) && BitTest(Global_78130[1 /*14*/].f_6, 4))
				{
					MISC::SET_BIT(&(Global_4538840[(iVar25 / 32)]), (iVar25 % 32));
				}
				else if ((!BitTest(Global_4538843[(iVar25 / 32)], (iVar25 % 32)) && Global_4537614) && __LIB_31__::func_892(Global_78130[1 /*14*/].f_6, iParam6, iParam5, iParam3, 0, &(Global_78130[1 /*14*/].f_8), "arena outfit", -1, iParam12))
				{
					MISC::SET_BIT(&(Global_4538843[(iVar25 / 32)]), (iVar25 % 32));
				}
			}
			else if (iParam3 == 247)
			{
				iVar26 = __LIB_16__::func_472(&(Global_78130[1 /*14*/].f_8));
				if (!BitTest(Global_4538840[(iVar26 / 32)], (iVar26 % 32)) && BitTest(Global_78130[1 /*14*/].f_6, 4))
				{
					MISC::SET_BIT(&(Global_4538840[(iVar26 / 32)]), (iVar26 % 32));
				}
				else if ((!BitTest(Global_4538843[(iVar26 / 32)], (iVar26 % 32)) && Global_4537614) && __LIB_31__::func_892(Global_78130[1 /*14*/].f_6, iParam6, iParam5, iParam3, 0, &(Global_78130[1 /*14*/].f_8), "vinewood outfit", -1, iParam12))
				{
					MISC::SET_BIT(&(Global_4538843[(iVar26 / 32)]), (iVar26 % 32));
				}
			}
			else if (iParam3 == 242)
			{
				iVar27 = __LIB_16__::func_471(&(Global_78130[1 /*14*/].f_8));
				if (!BitTest(Global_4538840[(iVar27 / 32)], (iVar27 % 32)) && BitTest(Global_78130[1 /*14*/].f_6, 4))
				{
					MISC::SET_BIT(&(Global_4538840[(iVar27 / 32)]), (iVar27 % 32));
				}
				else if ((!BitTest(Global_4538843[(iVar27 / 32)], (iVar27 % 32)) && Global_4537614) && __LIB_31__::func_892(Global_78130[1 /*14*/].f_6, iParam6, iParam5, iParam3, 0, &(Global_78130[1 /*14*/].f_8), "heist3 outfit", -1, iParam12))
				{
					MISC::SET_BIT(&(Global_4538843[(iVar27 / 32)]), (iVar27 % 32));
				}
			}
			else if (iParam3 == 243)
			{
				iVar28 = __LIB_16__::func_470(&(Global_78130[1 /*14*/].f_8));
				if (!BitTest(Global_4538840[(iVar28 / 32)], (iVar28 % 32)) && BitTest(Global_78130[1 /*14*/].f_6, 4))
				{
					MISC::SET_BIT(&(Global_4538840[(iVar28 / 32)]), (iVar28 % 32));
				}
				else if ((!BitTest(Global_4538843[(iVar28 / 32)], (iVar28 % 32)) && Global_4537614) && __LIB_31__::func_892(Global_78130[1 /*14*/].f_6, iParam6, iParam5, iParam3, 0, &(Global_78130[1 /*14*/].f_8), "heist4 outfit", -1, iParam12))
				{
					MISC::SET_BIT(&(Global_4538843[(iVar28 / 32)]), (iVar28 % 32));
				}
			}
			else if (iParam3 == 258)
			{
				iVar29 = __LIB_16__::func_469(&(Global_78130[1 /*14*/].f_8));
				if (!BitTest(Global_4538840[(iVar29 / 32)], (iVar29 % 32)) && BitTest(Global_78130[1 /*14*/].f_6, 4))
				{
					MISC::SET_BIT(&(Global_4538840[(iVar29 / 32)]), (iVar29 % 32));
				}
				else if ((!BitTest(Global_4538843[(iVar29 / 32)], (iVar29 % 32)) && Global_4537614) && __LIB_31__::func_892(Global_78130[1 /*14*/].f_6, iParam6, iParam5, iParam3, 0, &(Global_78130[1 /*14*/].f_8), "tuner outfit", -1, iParam12))
				{
					MISC::SET_BIT(&(Global_4538843[(iVar29 / 32)]), (iVar29 % 32));
				}
			}
		}
		if (!BitTest(uParam0->f_390[(iParam4 / 32)], (iParam4 % 32)))
		{
			if (((((((iParam4 == 122 || iParam4 == 153) || iParam4 == 235) || iParam4 == 238) || iParam4 == 247) || iParam4 == 242) || iParam4 == 243) || iParam4 == 258)
			{
				if (!Global_4538859)
				{
					MISC::SET_BIT(&(uParam0->f_390[(iParam4 / 32)]), (iParam4 % 32));
				}
			}
			else if ((BitTest(Global_78130[1 /*14*/].f_6, 1) && BitTest(Global_78130[1 /*14*/].f_6, 4)) && !__LIB_16__::func_509(iParam8))
			{
				if (BitTest(Global_78130[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("MULTI_DECAL"), 0))
				{
				}
				else if (BitTest(Global_78130[1 /*14*/].f_6, 6) && !__LIB_16__::func_455(Global_2883588))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam0->f_390[(iParam4 / 32)]), (iParam4 % 32));
				}
			}
		}
		if (iParam6 == 2)
		{
			Global_4537612 = 1;
			if (BitTest(Global_78130[1 /*14*/].f_6, 1) && BitTest(Global_78130[1 /*14*/].f_6, 4))
			{
				Global_4537613 = 1;
			}
		}
	}
}

int func_1162(int iParam0, int iParam1, int iParam2)//Position - 0xA55F4
{
	switch (iParam1)
	{
		case joaat("mpSum2_overlays"):
			switch (iParam2)
			{
				case joaat("MP_Sum2_Tee_000_M"):
				case joaat("MP_Sum2_Tee_000_F"):
					if (__LIB_0__::func_137(34505, -1))
					{
						return 1;
					}
					break;
				case joaat("MP_Sum2_Tee_001_M"):
				case joaat("MP_Sum2_Tee_001_F"):
					if (__LIB_0__::func_137(34375, -1))
					{
						return 1;
					}
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_SUM2_G9EC_M_BERD_0_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_BERD_0_0"):
			if (__LIB_0__::func_137(34397, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_BERD_0_1"):
		case joaat("DLC_MP_SUM2_G9EC_F_BERD_0_1"):
			if (__LIB_0__::func_137(34398, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_BERD_1_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_BERD_1_0"):
			if (__LIB_0__::func_137(34395, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_BERD_1_1"):
		case joaat("DLC_MP_SUM2_G9EC_F_BERD_1_1"):
			if (__LIB_0__::func_137(34396, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_BERD_4_0"):
		case joaat("DLC_MP_SUM2_G9EC_M_BERD_4_1"):
		case joaat("DLC_MP_SUM2_G9EC_F_BERD_4_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_BERD_4_1"):
			if (__LIB_0__::func_137(34399/*__LIB_1__::func_30*/, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_BERD_2_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_BERD_2_0"):
			if (__LIB_0__::func_137(34400, -1))
			{
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_SUM2_G9EC_M_OUTFIT_MUMMY"):
		case joaat("DLC_MP_SUM2_G9EC_F_OUTFIT_MUMMY"):
			if (__LIB_0__::func_137(34389, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_LEGS_0_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_LEGS_0_0"):
			if (__LIB_0__::func_137(34410, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_LEGS_0_1"):
		case joaat("DLC_MP_SUM2_G9EC_F_LEGS_0_1"):
			if (__LIB_0__::func_137(34409, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_JBIB_0_0"):
		case joaat("DLC_MP_SUM2_G9EC_M_JBIB_1_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_JBIB_1_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_JBIB_2_0"):
			if (__LIB_0__::func_137(34404, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_JBIB_0_1"):
		case joaat("DLC_MP_SUM2_G9EC_M_JBIB_1_1"):
		case joaat("DLC_MP_SUM2_G9EC_F_JBIB_1_1"):
		case joaat("DLC_MP_SUM2_G9EC_F_JBIB_2_1"):
			if (__LIB_0__::func_137(34403, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_JBIB_2_0"):
		case joaat("DLC_MP_SUM2_G9EC_M_JBIB_3_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_JBIB_3_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_JBIB_4_0"):
			if (__LIB_0__::func_137(34406, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_JBIB_6_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_JBIB_8_0"):
			if (__LIB_0__::func_137(34408, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_JBIB_7_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_JBIB_5_0"):
			if (__LIB_0__::func_137(34405, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_PHEAD_0_0"):
		case joaat("DLC_MP_SUM2_G9EC_M_PHEAD_1_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_PHEAD_0_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_PHEAD_1_0"):
			if (__LIB_0__::func_137(34391, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_PHEAD_2_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_PHEAD_2_0"):
			if (__LIB_0__::func_137(34394, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_PHEAD_3_0"):
		case joaat("DLC_MP_SUM2_G9EC_M_PHEAD_4_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_PHEAD_3_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_PHEAD_4_0"):
			if (__LIB_0__::func_137(34390, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_PHEAD_6_0"):
		case joaat("DLC_MP_SUM2_G9EC_M_PHEAD_7_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_PHEAD_6_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_PHEAD_7_0"):
			if (__LIB_0__::func_137(34392, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_PHEAD_5_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_PHEAD_5_0"):
			if (__LIB_0__::func_137(34393, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_PHEAD_5_1"):
		case joaat("DLC_MP_SUM2_G9EC_F_PHEAD_5_1"):
			if (__LIB_0__::func_137(34730, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_PHEAD_5_2"):
		case joaat("DLC_MP_SUM2_G9EC_F_PHEAD_5_2"):
			if (__LIB_0__::func_137(34731, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_PHEAD_5_3"):
		case joaat("DLC_MP_SUM2_G9EC_F_PHEAD_5_3"):
			if (__LIB_0__::func_137(34732, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_PHEAD_5_4"):
		case joaat("DLC_MP_SUM2_G9EC_F_PHEAD_5_4"):
			if (__LIB_0__::func_137(34733, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_PHEAD_5_7"):
		case joaat("DLC_MP_SUM2_G9EC_F_PHEAD_5_7"):
			if (__LIB_0__::func_137(34736, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_PHEAD_5_8"):
		case joaat("DLC_MP_SUM2_G9EC_F_PHEAD_5_8"):
			if (__LIB_0__::func_137(34737, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_PHEAD_5_5"):
		case joaat("DLC_MP_SUM2_G9EC_F_PHEAD_5_5"):
			if (__LIB_0__::func_137(34734, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_PHEAD_5_6"):
		case joaat("DLC_MP_SUM2_G9EC_F_PHEAD_5_6"):
			if (__LIB_0__::func_137(34735, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_PEARS_0_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_PEARS_0_0"):
			if (__LIB_0__::func_137(34401, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_PLEFT_WRIST_0_0"):
		case joaat("DLC_MP_SUM2_G9EC_M_PRIGHT_WRIST_0_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_PLEFT_WRIST_0_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_PRIGHT_WRIST_0_0"):
			if (__LIB_0__::func_137(34402, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_G9EC_M_DECL_0_0"):
		case joaat("DLC_MP_SUM2_G9EC_F_DECL_0_0"):
			if (__LIB_0__::func_137(34407, -1))
			{
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_SUM2_M_BERD_5_0"):
		case joaat("DLC_MP_SUM2_F_BERD_5_0"):
			if (__LIB_0__::func_137(34451/*__LIB_0__::func_796*/, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_BERD_5_1"):
		case joaat("DLC_MP_SUM2_F_BERD_5_1"):
			if (__LIB_0__::func_137(34452, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_BERD_5_2"):
		case joaat("DLC_MP_SUM2_F_BERD_5_2"):
			if (__LIB_0__::func_137(34453, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_BERD_5_3"):
		case joaat("DLC_MP_SUM2_F_BERD_5_3"):
			if (__LIB_0__::func_137(34454, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_BERD_6_0"):
		case joaat("DLC_MP_SUM2_F_BERD_6_0"):
			if (__LIB_0__::func_137(34418, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_BERD_6_1"):
		case joaat("DLC_MP_SUM2_F_BERD_6_1"):
			if (__LIB_0__::func_137(34419, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_BERD_6_2"):
		case joaat("DLC_MP_SUM2_F_BERD_6_2"):
			if (__LIB_0__::func_137(34420, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_BERD_7_0"):
		case joaat("DLC_MP_SUM2_F_BERD_7_0"):
			if (__LIB_0__::func_137(34372, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_BERD_8_0"):
		case joaat("DLC_MP_SUM2_F_BERD_8_0"):
			if (__LIB_0__::func_137(34421, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_BERD_9_0"):
		case joaat("DLC_MP_SUM2_F_BERD_9_0"):
			if (__LIB_0__::func_137(34415, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_BERD_9_1"):
		case joaat("DLC_MP_SUM2_F_BERD_9_1"):
			if (__LIB_0__::func_137(34416, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_BERD_9_2"):
		case joaat("DLC_MP_SUM2_F_BERD_9_2"):
			if (__LIB_0__::func_137(34417, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_BERD_10_0"):
		case joaat("DLC_MP_SUM2_F_BERD_10_0"):
			if (__LIB_0__::func_137(34425, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_BERD_10_1"):
		case joaat("DLC_MP_SUM2_F_BERD_10_1"):
			if (__LIB_0__::func_137(34426, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_BERD_10_2"):
		case joaat("DLC_MP_SUM2_F_BERD_10_2"):
			if (__LIB_0__::func_137(34427, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_BERD_10_3"):
		case joaat("DLC_MP_SUM2_F_BERD_10_3"):
			if (__LIB_0__::func_137(34428, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_BERD_10_4"):
		case joaat("DLC_MP_SUM2_F_BERD_10_4"):
			if (__LIB_0__::func_137(34429, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_BERD_10_5"):
		case joaat("DLC_MP_SUM2_F_BERD_10_5"):
			if (__LIB_0__::func_137(34430, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_BERD_10_6"):
		case joaat("DLC_MP_SUM2_F_BERD_10_6"):
			if (__LIB_0__::func_137(34431, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_BERD_10_7"):
		case joaat("DLC_MP_SUM2_F_BERD_10_7"):
			if (__LIB_0__::func_137(34432, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_BERD_10_8"):
		case joaat("DLC_MP_SUM2_F_BERD_10_8"):
			if (__LIB_0__::func_137(34433, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_BERD_10_9"):
		case joaat("DLC_MP_SUM2_F_BERD_10_9"):
			if (__LIB_0__::func_137(34434, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_BERD_10_10"):
		case joaat("DLC_MP_SUM2_F_BERD_10_10"):
			if (__LIB_0__::func_137(34435, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_BERD_10_11"):
		case joaat("DLC_MP_SUM2_F_BERD_10_11"):
			if (__LIB_0__::func_137(34436, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_BERD_10_12"):
		case joaat("DLC_MP_SUM2_F_BERD_10_12"):
			if (__LIB_0__::func_137(34437, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_BERD_10_13"):
		case joaat("DLC_MP_SUM2_F_BERD_10_13"):
			if (__LIB_0__::func_137(34438, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_BERD_10_14"):
		case joaat("DLC_MP_SUM2_F_BERD_10_14"):
			if (__LIB_0__::func_137(34439, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_BERD_10_15"):
		case joaat("DLC_MP_SUM2_F_BERD_10_15"):
			if (__LIB_0__::func_137(34440, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_BERD_10_16"):
		case joaat("DLC_MP_SUM2_F_BERD_10_16"):
			if (__LIB_0__::func_137(34441, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_BERD_10_17"):
		case joaat("DLC_MP_SUM2_F_BERD_10_17"):
			if (__LIB_0__::func_137(34442/*__LIB_0__::func_162*/, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_BERD_10_18"):
		case joaat("DLC_MP_SUM2_F_BERD_10_18"):
			if (__LIB_0__::func_137(34443, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_BERD_10_19"):
		case joaat("DLC_MP_SUM2_F_BERD_10_19"):
			if (__LIB_0__::func_137(34444, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_BERD_10_20"):
		case joaat("DLC_MP_SUM2_F_BERD_10_20"):
			if (__LIB_0__::func_137(34445, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_BERD_10_21"):
		case joaat("DLC_MP_SUM2_F_BERD_10_21"):
			if (__LIB_0__::func_137(34446, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_BERD_10_22"):
		case joaat("DLC_MP_SUM2_F_BERD_10_22"):
			if (__LIB_0__::func_137(34447, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_BERD_10_23"):
		case joaat("DLC_MP_SUM2_F_BERD_10_23"):
			if (__LIB_0__::func_137(34448, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_BERD_10_24"):
		case joaat("DLC_MP_SUM2_F_BERD_10_24"):
			if (__LIB_0__::func_137(34449, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_BERD_10_25"):
		case joaat("DLC_MP_SUM2_F_BERD_10_25"):
			if (__LIB_0__::func_137(34450, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_BERD_0_0"):
		case joaat("DLC_MP_SUM2_F_BERD_0_0"):
			if (__LIB_0__::func_137(34423, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_BERD_1_0"):
		case joaat("DLC_MP_SUM2_F_BERD_1_0"):
			if (__LIB_0__::func_137(34703, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_BERD_1_1"):
		case joaat("DLC_MP_SUM2_F_BERD_1_1"):
			if (__LIB_0__::func_137(34704, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_BERD_1_2"):
		case joaat("DLC_MP_SUM2_F_BERD_1_2"):
			if (__LIB_0__::func_137(34705, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_BERD_3_0"):
		case joaat("DLC_MP_SUM2_F_BERD_3_0"):
			if (__LIB_0__::func_137(34424, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_BERD_4_0"):
		case joaat("DLC_MP_SUM2_F_BERD_4_0"):
			if (__LIB_0__::func_137(34422, -1))
			{
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_SUM2_M_OUTFIT_SASQUATCH"):
		case joaat("DLC_MP_SUM2_F_OUTFIT_SASQUATCH"):
			if (__LIB_0__::func_137(34411, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_LEGS_2_0"):
		case joaat("DLC_MP_SUM2_F_LEGS_0_0"):
			if (__LIB_0__::func_137(34506, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_LEGS_2_1"):
		case joaat("DLC_MP_SUM2_F_LEGS_0_1"):
			if (__LIB_0__::func_137(34507, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_JBIB_13_0"):
		case joaat("DLC_MP_SUM2_F_JBIB_15_0"):
		case joaat("DLC_MP_SUM2_F_JBIB_16_0"):
			if (__LIB_0__::func_137(34380, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_JBIB_14_0"):
		case joaat("DLC_MP_SUM2_F_JBIB_19_0"):
			if (__LIB_0__::func_137(34388, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_JBIB_15_0"):
		case joaat("DLC_MP_SUM2_M_JBIB_16_0"):
		case joaat("DLC_MP_SUM2_F_JBIB_20_0"):
			if (__LIB_0__::func_137(34383, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_JBIB_15_1"):
		case joaat("DLC_MP_SUM2_M_JBIB_16_1"):
		case joaat("DLC_MP_SUM2_F_JBIB_20_1"):
			if (__LIB_0__::func_137(34381/*__LIB_1__::func_520*/, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_JBIB_15_2"):
		case joaat("DLC_MP_SUM2_M_JBIB_16_2"):
		case joaat("DLC_MP_SUM2_F_JBIB_20_2"):
			if (__LIB_0__::func_137(34385, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_JBIB_17_0"):
		case joaat("DLC_MP_SUM2_F_JBIB_8_0"):
			if (__LIB_0__::func_137(34382, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_JBIB_7_0"):
		case joaat("DLC_MP_SUM2_M_JBIB_8_0"):
		case joaat("DLC_MP_SUM2_F_JBIB_24_0"):
		case joaat("DLC_MP_SUM2_F_JBIB_21_0"):
			if (__LIB_0__::func_137(34384, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_PHEAD_6_0"):
		case joaat("DLC_MP_SUM2_F_PHEAD_6_0"):
			if (__LIB_0__::func_137(34455, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_PHEAD_6_1"):
		case joaat("DLC_MP_SUM2_F_PHEAD_6_1"):
			if (__LIB_0__::func_137(34456, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_PHEAD_6_2"):
		case joaat("DLC_MP_SUM2_F_PHEAD_6_2"):
			if (__LIB_0__::func_137(34457, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_PHEAD_6_3"):
		case joaat("DLC_MP_SUM2_F_PHEAD_6_3"):
			if (__LIB_0__::func_137(34458, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_PHEAD_6_4"):
		case joaat("DLC_MP_SUM2_F_PHEAD_6_4"):
			if (__LIB_0__::func_137(34459, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_PHEAD_6_5"):
		case joaat("DLC_MP_SUM2_F_PHEAD_6_5"):
			if (__LIB_0__::func_137(34460, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_PHEAD_6_6"):
		case joaat("DLC_MP_SUM2_F_PHEAD_6_6"):
			if (__LIB_0__::func_137(34461, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_PHEAD_6_7"):
		case joaat("DLC_MP_SUM2_F_PHEAD_6_7"):
			if (__LIB_0__::func_137(34462, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_PHEAD_6_8"):
		case joaat("DLC_MP_SUM2_F_PHEAD_6_8"):
			if (__LIB_0__::func_137(34463, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_PHEAD_6_9"):
		case joaat("DLC_MP_SUM2_F_PHEAD_6_9"):
			if (__LIB_0__::func_137(34464, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_PHEAD_6_10"):
		case joaat("DLC_MP_SUM2_F_PHEAD_6_10"):
			if (__LIB_0__::func_137(34465, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_PHEAD_6_11"):
		case joaat("DLC_MP_SUM2_F_PHEAD_6_11"):
			if (__LIB_0__::func_137(34466, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_PHEAD_6_12"):
		case joaat("DLC_MP_SUM2_F_PHEAD_6_12"):
			if (__LIB_0__::func_137(34467, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_PHEAD_6_13"):
		case joaat("DLC_MP_SUM2_F_PHEAD_6_13"):
			if (__LIB_0__::func_137(34468, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_PHEAD_0_0"):
		case joaat("DLC_MP_SUM2_M_PHEAD_1_0"):
		case joaat("DLC_MP_SUM2_F_PHEAD_0_0"):
		case joaat("DLC_MP_SUM2_F_PHEAD_1_0"):
			if (__LIB_0__::func_137(34375, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_PHEAD_2_0"):
		case joaat("DLC_MP_SUM2_M_PHEAD_4_0"):
		case joaat("DLC_MP_SUM2_F_PHEAD_2_0"):
		case joaat("DLC_MP_SUM2_F_PHEAD_4_0"):
			if (__LIB_0__::func_137(34508, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_PHEAD_2_1"):
		case joaat("DLC_MP_SUM2_M_PHEAD_4_1"):
		case joaat("DLC_MP_SUM2_F_PHEAD_2_1"):
		case joaat("DLC_MP_SUM2_F_PHEAD_4_1"):
			if (__LIB_0__::func_137(34509, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_PHEAD_3_0"):
		case joaat("DLC_MP_SUM2_M_PHEAD_7_0"):
		case joaat("DLC_MP_SUM2_F_PHEAD_3_0"):
		case joaat("DLC_MP_SUM2_F_PHEAD_7_0"):
			if (__LIB_0__::func_137(34510, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_PHEAD_8_0"):
		case joaat("DLC_MP_SUM2_F_PHEAD_8_0"):
			if (__LIB_0__::func_137(34387, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_PEARS_0_0"):
		case joaat("DLC_MP_SUM2_F_PEARS_0_0"):
			if (__LIB_0__::func_137(34469, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_PEARS_0_1"):
		case joaat("DLC_MP_SUM2_F_PEARS_0_1"):
			if (__LIB_0__::func_137(34470, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_PEARS_0_2"):
		case joaat("DLC_MP_SUM2_F_PEARS_0_2"):
			if (__LIB_0__::func_137(34471, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_PEARS_0_3"):
		case joaat("DLC_MP_SUM2_F_PEARS_0_3"):
			if (__LIB_0__::func_137(34472, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_PEARS_0_4"):
		case joaat("DLC_MP_SUM2_F_PEARS_0_4"):
			if (__LIB_0__::func_137(34473, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_PEARS_0_5"):
		case joaat("DLC_MP_SUM2_F_PEARS_0_5"):
			if (__LIB_0__::func_137(34474, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_PEARS_0_6"):
		case joaat("DLC_MP_SUM2_F_PEARS_0_6"):
			if (__LIB_0__::func_137(34475, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_PEARS_0_7"):
		case joaat("DLC_MP_SUM2_F_PEARS_0_7"):
			if (__LIB_0__::func_137(34476, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_PEARS_0_8"):
		case joaat("DLC_MP_SUM2_F_PEARS_0_8"):
			if (__LIB_0__::func_137(34477, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_PEARS_0_9"):
		case joaat("DLC_MP_SUM2_F_PEARS_0_9"):
			if (__LIB_0__::func_137(34478, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_PEARS_0_10"):
		case joaat("DLC_MP_SUM2_F_PEARS_0_10"):
			if (__LIB_0__::func_137(34479, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_PEARS_0_11"):
		case joaat("DLC_MP_SUM2_F_PEARS_0_11"):
			if (__LIB_0__::func_137(34480, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_SPECIAL_1_0"):
		case joaat("DLC_MP_SUM2_F_SPECIAL_1_0"):
			if (__LIB_0__::func_137(34386, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_FEET_5_0"):
		case joaat("DLC_MP_SUM2_F_FEET_5_0"):
			if (__LIB_0__::func_137(34481, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_FEET_5_1"):
		case joaat("DLC_MP_SUM2_F_FEET_5_1"):
			if (__LIB_0__::func_137(34482, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_FEET_5_2"):
		case joaat("DLC_MP_SUM2_F_FEET_5_2"):
			if (__LIB_0__::func_137(34483, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_FEET_5_3"):
		case joaat("DLC_MP_SUM2_F_FEET_5_3"):
			if (__LIB_0__::func_137(34484, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_FEET_5_4"):
		case joaat("DLC_MP_SUM2_F_FEET_5_4"):
			if (__LIB_0__::func_137(34485, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_FEET_5_5"):
		case joaat("DLC_MP_SUM2_F_FEET_5_5"):
			if (__LIB_0__::func_137(34486, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_FEET_5_6"):
		case joaat("DLC_MP_SUM2_F_FEET_5_6"):
			if (__LIB_0__::func_137(34487, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_FEET_5_7"):
		case joaat("DLC_MP_SUM2_F_FEET_5_7"):
			if (__LIB_0__::func_137(34488, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_FEET_5_8"):
		case joaat("DLC_MP_SUM2_F_FEET_5_8"):
			if (__LIB_0__::func_137(34489, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_FEET_6_0"):
		case joaat("DLC_MP_SUM2_F_FEET_6_0"):
			if (__LIB_0__::func_137(34490, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_FEET_6_1"):
		case joaat("DLC_MP_SUM2_F_FEET_6_1"):
			if (__LIB_0__::func_137(34491, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_FEET_6_2"):
		case joaat("DLC_MP_SUM2_F_FEET_6_2"):
			if (__LIB_0__::func_137(34492, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_FEET_6_3"):
		case joaat("DLC_MP_SUM2_F_FEET_6_3"):
			if (__LIB_0__::func_137(34493, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_FEET_6_4"):
		case joaat("DLC_MP_SUM2_F_FEET_6_4"):
			if (__LIB_0__::func_137(34494, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_FEET_6_5"):
		case joaat("DLC_MP_SUM2_F_FEET_6_5"):
			if (__LIB_0__::func_137(34495, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_FEET_6_6"):
		case joaat("DLC_MP_SUM2_F_FEET_6_6"):
			if (__LIB_0__::func_137(34496, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_FEET_6_7"):
		case joaat("DLC_MP_SUM2_F_FEET_6_7"):
			if (__LIB_0__::func_137(34497, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_FEET_6_8"):
		case joaat("DLC_MP_SUM2_F_FEET_6_8"):
			if (__LIB_0__::func_137(34498, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_FEET_6_9"):
		case joaat("DLC_MP_SUM2_F_FEET_6_9"):
			if (__LIB_0__::func_137(34499, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_FEET_6_10"):
		case joaat("DLC_MP_SUM2_F_FEET_6_10"):
			if (__LIB_0__::func_137(34500, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_FEET_6_11"):
		case joaat("DLC_MP_SUM2_F_FEET_6_11"):
			if (__LIB_0__::func_137(34501, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_FEET_6_12"):
		case joaat("DLC_MP_SUM2_F_FEET_6_12"):
			if (__LIB_0__::func_137(34502, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_FEET_6_13"):
		case joaat("DLC_MP_SUM2_F_FEET_6_13"):
			if (__LIB_0__::func_137(34503, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM2_M_FEET_6_14"):
		case joaat("DLC_MP_SUM2_F_FEET_6_14"):
			if (__LIB_0__::func_137(34504/*__LIB_14__::func_455*/, -1))
			{
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_FIXER_M_BERD_0_0"):
		case joaat("DLC_MP_FIXER_F_BERD_0_0"):
			if (__LIB_0__::func_137(32295, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_FIXER_M_BERD_0_1"):
		case joaat("DLC_MP_FIXER_F_BERD_0_1"):
			if (__LIB_0__::func_137(32296, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_FIXER_M_BERD_0_2"):
		case joaat("DLC_MP_FIXER_F_BERD_0_2"):
			if (__LIB_0__::func_137(32297, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_FIXER_M_BERD_0_3"):
		case joaat("DLC_MP_FIXER_F_BERD_0_3"):
			if (__LIB_0__::func_137(32298, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_FIXER_M_BERD_1_0"):
		case joaat("DLC_MP_FIXER_F_BERD_1_0"):
			if (__LIB_0__::func_137(32299, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_FIXER_M_BERD_1_1"):
		case joaat("DLC_MP_FIXER_F_BERD_1_1"):
			if (__LIB_0__::func_137(32300, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_FIXER_M_BERD_1_2"):
		case joaat("DLC_MP_FIXER_F_BERD_1_2"):
			if (__LIB_0__::func_137(32301, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_FIXER_M_BERD_1_3"):
		case joaat("DLC_MP_FIXER_F_BERD_1_3"):
			if (__LIB_0__::func_137(32302, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_FIXER_M_BERD_2_0"):
		case joaat("DLC_MP_FIXER_F_BERD_2_0"):
			if (__LIB_0__::func_137(32303, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_FIXER_M_BERD_2_1"):
		case joaat("DLC_MP_FIXER_F_BERD_2_1"):
			if (__LIB_0__::func_137(32304, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_FIXER_M_BERD_2_2"):
		case joaat("DLC_MP_FIXER_F_BERD_2_2"):
			if (__LIB_0__::func_137(32305, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_FIXER_M_BERD_2_3"):
		case joaat("DLC_MP_FIXER_F_BERD_2_3"):
			if (__LIB_0__::func_137(32306, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_FIXER_M_OUTFIT_GOLF_1"):
		case joaat("DLC_MP_FIXER_F_OUTFIT_GOLF_1"):
			if (__LIB_0__::func_137(32288, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_FIXER_M_OUTFIT_GOLF_2"):
		case joaat("DLC_MP_FIXER_F_OUTFIT_GOLF_2"):
			if (__LIB_0__::func_137(32289, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_FIXER_M_OUTFIT_GOLF_3"):
		case joaat("DLC_MP_FIXER_F_OUTFIT_GOLF_3"):
			if (__LIB_0__::func_137(32290, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_FIXER_M_OUTFIT_GOLF_4"):
		case joaat("DLC_MP_FIXER_F_OUTFIT_GOLF_4"):
			if (__LIB_0__::func_137(32291, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_FIXER_M_JBIB_10_0"):
		case joaat("DLC_MP_FIXER_M_SPECIAL_0_0"):
		case joaat("DLC_MP_FIXER_M_SPECIAL_1_0"):
		case joaat("DLC_MP_FIXER_M_SPECIAL_2_0"):
		case joaat("DLC_MP_FIXER_M_SPECIAL_3_0"):
		case joaat("DLC_MP_FIXER_M_SPECIAL_4_0"):
		case joaat("DLC_MP_FIXER_F_JBIB_13_0"):
		case joaat("DLC_MP_FIXER_F_SPECIAL_0_0"):
		case joaat("DLC_MP_FIXER_F_SPECIAL_1_0"):
		case joaat("DLC_MP_FIXER_F_SPECIAL_2_0"):
		case joaat("DLC_MP_FIXER_F_SPECIAL_3_0"):
		case joaat("DLC_MP_FIXER_F_SPECIAL_4_0"):
		case joaat("DLC_MP_FIXER_F_SPECIAL_5_0"):
		case joaat("DLC_MP_FIXER_F_JBIB_14_0"):
		case joaat("DLC_MP_FIXER_F_SPECIAL_6_0"):
		case joaat("DLC_MP_FIXER_F_SPECIAL_7_0"):
		case joaat("DLC_MP_FIXER_F_SPECIAL_8_0"):
		case joaat("DLC_MP_FIXER_F_SPECIAL_9_0"):
		case joaat("DLC_MP_FIXER_F_SPECIAL_10_0"):
		case joaat("DLC_MP_FIXER_F_SPECIAL_11_0"):
			if (__LIB_0__::func_137(32307, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_FIXER_M_JBIB_10_1"):
		case joaat("DLC_MP_FIXER_M_SPECIAL_0_1"):
		case joaat("DLC_MP_FIXER_M_SPECIAL_1_1"):
		case joaat("DLC_MP_FIXER_M_SPECIAL_2_1"):
		case joaat("DLC_MP_FIXER_M_SPECIAL_3_1"):
		case joaat("DLC_MP_FIXER_M_SPECIAL_4_1"):
		case joaat("DLC_MP_FIXER_F_JBIB_13_1"):
		case joaat("DLC_MP_FIXER_F_SPECIAL_0_1"):
		case joaat("DLC_MP_FIXER_F_SPECIAL_1_1"):
		case joaat("DLC_MP_FIXER_F_SPECIAL_2_1"):
		case joaat("DLC_MP_FIXER_F_SPECIAL_3_1"):
		case joaat("DLC_MP_FIXER_F_SPECIAL_4_1"):
		case joaat("DLC_MP_FIXER_F_SPECIAL_5_1"):
		case joaat("DLC_MP_FIXER_F_JBIB_14_1"):
		case joaat("DLC_MP_FIXER_F_SPECIAL_6_1"):
		case joaat("DLC_MP_FIXER_F_SPECIAL_7_1"):
		case joaat("DLC_MP_FIXER_F_SPECIAL_8_1"):
		case joaat("DLC_MP_FIXER_F_SPECIAL_9_1"):
		case joaat("DLC_MP_FIXER_F_SPECIAL_10_1"):
		case joaat("DLC_MP_FIXER_F_SPECIAL_11_1"):
			if (__LIB_0__::func_137(32308, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_FIXER_M_JBIB_10_2"):
		case joaat("DLC_MP_FIXER_F_JBIB_13_2"):
		case joaat("DLC_MP_FIXER_F_JBIB_14_2"):
			if (__LIB_0__::func_137(32309, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_FIXER_M_JBIB_10_3"):
		case joaat("DLC_MP_FIXER_F_JBIB_13_3"):
		case joaat("DLC_MP_FIXER_F_JBIB_14_3"):
			if (__LIB_0__::func_137(32310, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_FIXER_M_JBIB_10_4"):
		case joaat("DLC_MP_FIXER_F_JBIB_13_4"):
		case joaat("DLC_MP_FIXER_F_JBIB_14_4"):
			if (__LIB_0__::func_137(32311, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_HEIST_M_OUTFIT_11"):
		case joaat("DLC_MP_HEIST_M_OUTFIT_13"):
		case joaat("DLC_MP_HEIST_F_OUTFIT_11"):
		case joaat("DLC_MP_HEIST_F_OUTFIT_13"):
			if (__LIB_0__::func_137(32314, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_FIXER_M_DECL_8_0"):
		case joaat("DLC_MP_FIXER_M_DECL_9_0"):
		case joaat("DLC_MP_FIXER_F_DECL_10_0"):
		case joaat("DLC_MP_FIXER_F_DECL_11_0"):
			if (__LIB_0__::func_137(32316, -1))
			{
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_TUNER_M_OUTFIT_FRONTIER"):
		case joaat("DLC_MP_TUNER_M_PHEAD_0_0"):
		case joaat("DLC_MP_TUNER_F_OUTFIT_FRONTIER"):
		case joaat("DLC_MP_TUNER_F_PHEAD_0_0"):
			if (__LIB_0__::func_137(31736, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_TUNER_M_OUTFIT_BOILER_0"):
		case joaat("DLC_MP_TUNER_M_JBIB_1_2"):
		case joaat("DLC_MP_TUNER_M_LEGS_1_2"):
		case joaat("DLC_MP_TUNER_F_OUTFIT_BOILER_0"):
		case joaat("DLC_MP_TUNER_F_JBIB_1_2"):
		case joaat("DLC_MP_TUNER_F_LEGS_1_2"):
			if (__LIB_0__::func_137(31776, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_TUNER_M_OUTFIT_BOILER_1"):
		case joaat("DLC_MP_TUNER_M_JBIB_1_3"):
		case joaat("DLC_MP_TUNER_M_LEGS_1_3"):
		case joaat("DLC_MP_TUNER_F_OUTFIT_BOILER_1"):
		case joaat("DLC_MP_TUNER_F_JBIB_1_3"):
		case joaat("DLC_MP_TUNER_F_LEGS_1_3"):
			if (__LIB_0__::func_137(31777, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_TUNER_M_OUTFIT_MORPH_0"):
		case joaat("DLC_MP_TUNER_F_OUTFIT_MORPH_0"):
			if (__LIB_0__::func_137(31789, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_TUNER_M_OUTFIT_MORPH_1"):
		case joaat("DLC_MP_TUNER_F_OUTFIT_MORPH_1"):
			if (__LIB_0__::func_137(31790, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_TUNER_M_OUTFIT_LMC_1"):
		case joaat("DLC_MP_TUNER_F_OUTFIT_LMC_1"):
		case joaat("DLC_MP_TUNER_M_JBIB_6_0"):
		case joaat("DLC_MP_TUNER_F_JBIB_6_0"):
			if (__LIB_0__::func_137(31779, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_TUNER_M_OUTFIT_LMC_2"):
		case joaat("DLC_MP_TUNER_F_OUTFIT_LMC_2"):
		case joaat("DLC_MP_TUNER_M_JBIB_4_0"):
		case joaat("DLC_MP_TUNER_F_JBIB_4_0"):
			if (__LIB_0__::func_137(31780, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_TUNER_M_OUTFIT_LMC_3"):
		case joaat("DLC_MP_TUNER_F_OUTFIT_LMC_3"):
		case joaat("DLC_MP_TUNER_M_JBIB_5_4"):
		case joaat("DLC_MP_TUNER_F_JBIB_5_4"):
			if (__LIB_0__::func_137(31781, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_TUNER_M_OUTFIT_LMC_4"):
		case joaat("DLC_MP_TUNER_F_OUTFIT_LMC_4"):
		case joaat("DLC_MP_TUNER_M_JBIB_3_1"):
		case joaat("DLC_MP_TUNER_F_JBIB_3_1"):
			if (__LIB_0__::func_137(31782, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_TUNER_M_OUTFIT_DOCK_1"):
		case joaat("DLC_MP_TUNER_F_OUTFIT_DOCK_1"):
			if (__LIB_0__::func_137(31805, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_TUNER_M_OUTFIT_DOCK_2"):
		case joaat("DLC_MP_TUNER_F_OUTFIT_DOCK_2"):
			if (__LIB_0__::func_137(31806, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_TUNER_M_OUTFIT_DOCK_3"):
		case joaat("DLC_MP_TUNER_F_OUTFIT_DOCK_3"):
			if (__LIB_0__::func_137(31807, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_TUNER_M_OUTFIT_DOCK_4"):
		case joaat("DLC_MP_TUNER_F_OUTFIT_DOCK_4"):
			if (__LIB_0__::func_137(31808, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_TUNER_M_DECL_39_0"):
		case joaat("DLC_MP_TUNER_F_DECL_38_0"):
			if (__LIB_0__::func_137(32275, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_TUNER_M_DECL_30_1"):
		case joaat("DLC_MP_TUNER_F_DECL_29_1"):
			if (__LIB_0__::func_137(32273, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_TUNER_M_JBIB_13_1"):
		case joaat("DLC_MP_TUNER_M_JBIB_14_1"):
		case joaat("DLC_MP_TUNER_F_JBIB_13_1"):
			if (__LIB_0__::func_137(31785, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_TUNER_M_JBIB_13_0"):
		case joaat("DLC_MP_TUNER_M_JBIB_14_0"):
		case joaat("DLC_MP_TUNER_F_JBIB_13_0"):
			if (__LIB_0__::func_137(31786, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_TUNER_M_JBIB_13_2"):
		case joaat("DLC_MP_TUNER_M_JBIB_14_2"):
		case joaat("DLC_MP_TUNER_F_JBIB_13_2"):
			if (__LIB_0__::func_137(31787, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_TUNER_M_JBIB_9_15"):
		case joaat("DLC_MP_TUNER_F_JBIB_9_15"):
			if (__LIB_0__::func_137(31788, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_TUNER_M_JBIB_11_0"):
		case joaat("DLC_MP_TUNER_M_JBIB_12_0"):
		case joaat("DLC_MP_TUNER_F_JBIB_11_0"):
		case joaat("DLC_MP_TUNER_F_JBIB_12_0"):
			if (__LIB_0__::func_137(31784, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_TUNER_M_BERD_3_0"):
		case joaat("DLC_MP_TUNER_F_BERD_4_0"):
			if (__LIB_0__::func_137(31783, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_TUNER_M_PHEAD_1_0"):
		case joaat("DLC_MP_TUNER_M_PHEAD_2_0"):
		case joaat("DLC_MP_TUNER_F_PHEAD_1_0"):
		case joaat("DLC_MP_TUNER_F_PHEAD_2_0"):
			if (__LIB_0__::func_137(31766, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_TUNER_M_PHEAD_1_1"):
		case joaat("DLC_MP_TUNER_M_PHEAD_2_1"):
		case joaat("DLC_MP_TUNER_F_PHEAD_1_1"):
		case joaat("DLC_MP_TUNER_F_PHEAD_2_1"):
			if (__LIB_0__::func_137(31767, -1))
			{
				return 1;
			}
			break;
	}
	switch (iParam1)
	{
		case joaat("mpTuner_overlays"):
			switch (iParam2)
			{
				case joaat("MP_Tuner_Tee_000_M"):
				case joaat("MP_Tuner_Tee_000_F"):
					if (__LIB_1__::func_677(116, -1) >= __LIB_0__::func_264(116, 5, 9) || __LIB_0__::func_137(31760, -1))
					{
						return 1;
					}
					break;
				case joaat("MP_Tuner_Tee_002_M"):
				case joaat("MP_Tuner_Tee_002_F"):
					if (__LIB_1__::func_676(123, -1) || __LIB_0__::func_137(31761, -1))
					{
						return 1;
					}
					break;
				case joaat("MP_Tuner_Tee_003_M"):
				case joaat("MP_Tuner_Tee_003_F"):
					if (__LIB_1__::func_676(124, -1) || __LIB_0__::func_137(31762, -1))
					{
						return 1;
					}
					break;
				case joaat("MP_Tuner_Tee_005_M"):
				case joaat("MP_Tuner_Tee_005_F"):
					if (__LIB_1__::func_676(125, -1) || __LIB_0__::func_137(31763, -1))
					{
						return 1;
					}
					break;
				case joaat("MP_Tuner_Tee_006_M"):
				case joaat("MP_Tuner_Tee_006_F"):
					if (__LIB_1__::func_676(126, -1) || __LIB_0__::func_137(31764, -1))
					{
						return 1;
					}
					break;
				case joaat("MP_Tuner_Tee_008_M"):
				case joaat("MP_Tuner_Tee_008_F"):
					if (__LIB_0__::func_137(31768, -1))
					{
						return 1;
					}
					break;
				case joaat("MP_Tuner_Tee_010_M"):
				case joaat("MP_Tuner_Tee_010_F"):
					if (__LIB_0__::func_137(31769, -1))
					{
						return 1;
					}
					break;
				case joaat("MP_Tuner_Tee_011_M"):
				case joaat("MP_Tuner_Tee_011_F"):
					if (__LIB_0__::func_137(31770, -1))
					{
						return 1;
					}
					break;
				case joaat("MP_Tuner_Tee_012_M"):
				case joaat("MP_Tuner_Tee_012_F"):
					if (__LIB_0__::func_137(31771, -1))
					{
						return 1;
					}
					break;
				case joaat("MP_Tuner_Tee_013_M"):
				case joaat("MP_Tuner_Tee_013_F"):
					if (__LIB_0__::func_137(31772, -1))
					{
						return 1;
					}
					break;
				case joaat("MP_Tuner_Tee_014_M"):
				case joaat("MP_Tuner_Tee_014_F"):
					if (__LIB_0__::func_137(31773, -1))
					{
						return 1;
					}
					break;
				case joaat("MP_Tuner_Tee_015_M"):
				case joaat("MP_Tuner_Tee_015_F"):
					if (__LIB_0__::func_137(31774, -1))
					{
						return 1;
					}
					break;
				case joaat("MP_Tuner_Tee_016_M"):
				case joaat("MP_Tuner_Tee_016_F"):
					if (__LIB_0__::func_137(31775, -1))
					{
						return 1;
					}
					break;
			}
			break;
	}
	switch (iParam1)
	{
		case joaat("mpHeist4_overlays"):
			switch (iParam2)
			{
				case joaat("MP_Heist4_Tee_030_M"):
				case joaat("MP_Heist4_Tee_030_F"):
					if (__LIB_0__::func_137(30533, -1))
					{
						return 1;
					}
					break;
				case joaat("MP_Heist4_Tee_032_M"):
				case joaat("MP_Heist4_Tee_032_F"):
					if (__LIB_0__::func_137(30534, -1))
					{
						return 1;
					}
					break;
				case joaat("MP_Heist4_Tee_028_M"):
				case joaat("MP_Heist4_Tee_028_F"):
					if (__LIB_0__::func_137(30535, -1))
					{
						return 1;
					}
					break;
				case joaat("MP_Heist4_Tee_029_M"):
				case joaat("MP_Heist4_Tee_029_F"):
					if (__LIB_0__::func_137(30536, -1))
					{
						return 1;
					}
					break;
				case joaat("MP_Heist4_Tee_031_M"):
				case joaat("MP_Heist4_Tee_031_F"):
					if (__LIB_0__::func_137(30537, -1))
					{
						return 1;
					}
					break;
				case joaat("MP_Heist4_Tee_022_M"):
				case joaat("MP_Heist4_Tee_022_F"):
					if (__LIB_0__::func_137(30538, -1))
					{
						return 1;
					}
					break;
				case joaat("MP_Heist4_Tee_023_M"):
				case joaat("MP_Heist4_Tee_023_F"):
					if (__LIB_0__::func_137(30539, -1))
					{
						return 1;
					}
					break;
				case joaat("MP_Heist4_Tee_020_M"):
				case joaat("MP_Heist4_Tee_020_F"):
					if (__LIB_0__::func_137(30540, -1))
					{
						return 1;
					}
					break;
				case joaat("MP_Heist4_Tee_021_M"):
				case joaat("MP_Heist4_Tee_021_F"):
					if (__LIB_0__::func_137(30541, -1))
					{
						return 1;
					}
					break;
				case joaat("MP_Heist4_Tee_003_M"):
				case joaat("MP_Heist4_Tee_003_F"):
					if (__LIB_0__::func_137(30542, -1))
					{
						return 1;
					}
					break;
				case joaat("MP_Heist4_Tee_004_M"):
				case joaat("MP_Heist4_Tee_004_F"):
					if (__LIB_0__::func_137(30543, -1))
					{
						return 1;
					}
					break;
				case joaat("MP_Heist4_Tee_005_M"):
				case joaat("MP_Heist4_Tee_005_F"):
					if (__LIB_0__::func_137(30544, -1))
					{
						return 1;
					}
					break;
				case joaat("MP_Heist4_Tee_006_M"):
				case joaat("MP_Heist4_Tee_006_F"):
					if (__LIB_0__::func_137(30545, -1))
					{
						return 1;
					}
					break;
				case joaat("MP_Heist4_Tee_027_M"):
				case joaat("MP_Heist4_Tee_027_F"):
					if (__LIB_0__::func_137(30546, -1))
					{
						return 1;
					}
					break;
				case joaat("MP_Heist4_Tee_026_M"):
				case joaat("MP_Heist4_Tee_026_F"):
					if (__LIB_0__::func_137(30547, -1))
					{
						return 1;
					}
					break;
				case joaat("MP_Heist4_Tee_025_M"):
				case joaat("MP_Heist4_Tee_025_F"):
					if (__LIB_0__::func_137(30548, -1))
					{
						return 1;
					}
					break;
				case joaat("MP_Heist4_Tee_024_M"):
				case joaat("MP_Heist4_Tee_024_F"):
					if (__LIB_0__::func_137(30549, -1))
					{
						return 1;
					}
					break;
				case joaat("MP_Heist4_Tee_002_M"):
				case joaat("MP_Heist4_Tee_002_F"):
					if (__LIB_0__::func_137(30550, -1))
					{
						return 1;
					}
					break;
				case joaat("MP_Heist4_Tee_001_M"):
				case joaat("MP_Heist4_Tee_001_F"):
					if (__LIB_0__::func_137(30551, -1))
					{
						return 1;
					}
					break;
				case joaat("MP_Heist4_Tee_000_M"):
				case joaat("MP_Heist4_Tee_000_F"):
					if (__LIB_0__::func_137(30552, -1))
					{
						return 1;
					}
					break;
				case joaat("MP_Heist4_Tee_007_M"):
				case joaat("MP_Heist4_Tee_007_F"):
					if (__LIB_0__::func_137(30553, -1))
					{
						return 1;
					}
					break;
				case joaat("MP_Heist4_Tee_008_M"):
				case joaat("MP_Heist4_Tee_008_F"):
					if (__LIB_0__::func_137(30554, -1))
					{
						return 1;
					}
					break;
				case joaat("MP_Heist4_Tee_009_M"):
				case joaat("MP_Heist4_Tee_009_F"):
					if (__LIB_0__::func_137(30555, -1))
					{
						return 1;
					}
					break;
				case joaat("MP_Heist4_Tee_010_M"):
				case joaat("MP_Heist4_Tee_010_F"):
					if (__LIB_0__::func_137(30556, -1))
					{
						return 1;
					}
					break;
				case joaat("MP_Heist4_Tee_011_M"):
				case joaat("MP_Heist4_Tee_011_F"):
					if (__LIB_0__::func_137(30557, -1))
					{
						return 1;
					}
					break;
				case joaat("MP_Heist4_Tee_012_M"):
				case joaat("MP_Heist4_Tee_012_F"):
					if (__LIB_0__::func_137(30524, -1))
					{
						return 1;
					}
					break;
				case joaat("MP_Heist4_Tee_013_M"):
				case joaat("MP_Heist4_Tee_013_F"):
					if (__LIB_0__::func_137(30525, -1))
					{
						return 1;
					}
					break;
				case joaat("MP_Heist4_Tee_014_M"):
				case joaat("MP_Heist4_Tee_014_F"):
					if (__LIB_0__::func_137(30526, -1))
					{
						return 1;
					}
					break;
				case joaat("MP_Heist4_Tee_015_M"):
				case joaat("MP_Heist4_Tee_015_F"):
					if (__LIB_0__::func_137(30527, -1))
					{
						return 1;
					}
					break;
				case joaat("MP_Heist4_Tee_016_M"):
				case joaat("MP_Heist4_Tee_016_F"):
					if (__LIB_0__::func_137(30528, -1))
					{
						return 1;
					}
					break;
				case joaat("MP_Heist4_Tee_017_M"):
				case joaat("MP_Heist4_Tee_017_F"):
					if (__LIB_0__::func_137(30529, -1))
					{
						return 1;
					}
					break;
				case joaat("MP_Heist4_Tee_018_M"):
				case joaat("MP_Heist4_Tee_018_F"):
					if (__LIB_0__::func_137(30530, -1))
					{
						return 1;
					}
					break;
				case joaat("MP_Heist4_Tee_019_M"):
				case joaat("MP_Heist4_Tee_019_F"):
					if (__LIB_0__::func_137(30531, -1))
					{
						return 1;
					}
					break;
				case joaat("MP_Heist4_Tee_033_M"):
				case joaat("MP_Heist4_Tee_033_F"):
					if (__LIB_0__::func_137(30532, -1))
					{
						return 1;
					}
					break;
				case joaat("MP_Heist4_Tee_045_M"):
				case joaat("MP_Heist4_Tee_045_F"):
					if (__LIB_0__::func_137(30570, -1))
					{
						return 1;
					}
					break;
				case joaat("MP_Heist4_Tee_046_M"):
				case joaat("MP_Heist4_Tee_046_F"):
					if (__LIB_0__::func_137(30571, -1))
					{
						return 1;
					}
					break;
				case joaat("MP_Heist4_Tee_048_M"):
				case joaat("MP_Heist4_Tee_048_F"):
					if (__LIB_0__::func_137(30568, -1))
					{
						return 1;
					}
					break;
				case joaat("MP_Heist4_Tee_047_M"):
				case joaat("MP_Heist4_Tee_047_F"):
					if (__LIB_0__::func_137(30569, -1))
					{
						return 1;
					}
					break;
				case joaat("MP_Heist4_Tee_049_M"):
				case joaat("MP_Heist4_Tee_049_F"):
					if (__LIB_0__::func_137(30634, -1))
					{
						return 1;
					}
					break;
				case joaat("MP_Heist4_Tee_051_M"):
				case joaat("MP_Heist4_Tee_051_F"):
					if (__LIB_0__::func_137(30635, -1))
					{
						return 1;
					}
					break;
				case joaat("MP_Heist4_Tee_053_M"):
				case joaat("MP_Heist4_Tee_053_F"):
					if (__LIB_0__::func_137(30636, -1))
					{
						return 1;
					}
					break;
				case joaat("MP_Heist4_Tee_054_M"):
				case joaat("MP_Heist4_Tee_054_F"):
					if (__LIB_0__::func_137(30637, -1))
					{
						return 1;
					}
					break;
				case joaat("MP_Heist4_Tee_055_M"):
				case joaat("MP_Heist4_Tee_055_F"):
					if (__LIB_0__::func_137(30703, -1))
					{
						return 1;
					}
					break;
				case joaat("MP_Heist4_Tee_057_M"):
				case joaat("MP_Heist4_Tee_057_F"):
					if (__LIB_0__::func_137(30704, -1))
					{
						return 1;
					}
					break;
				case joaat("MP_Heist4_Tee_059_M"):
				case joaat("MP_Heist4_Tee_059_F"):
					if (__LIB_0__::func_137(30700, -1))
					{
						return 1;
					}
					break;
				case joaat("MP_Heist4_Tee_061_M"):
				case joaat("MP_Heist4_Tee_061_F"):
					if (__LIB_0__::func_137(30701, -1))
					{
						return 1;
					}
					break;
				case joaat("MP_Heist4_Tee_063_M"):
				case joaat("MP_Heist4_Tee_063_F"):
					if (__LIB_0__::func_137(30702, -1))
					{
						return 1;
					}
					break;
				case joaat("MP_Heist4_Tee_065_M"):
				case joaat("MP_Heist4_Tee_065_F"):
					if (__LIB_0__::func_137(30699, -1))
					{
						return 1;
					}
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_H4_F_JBIB_8_0"):
		case joaat("DLC_MP_H4_F_JBIB_9_0"):
		case joaat("DLC_MP_H4_M_JBIB_8_0"):
		case joaat("DLC_MP_H4_M_JBIB_9_0"):
			if (__LIB_0__::func_137(30563, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_F_JBIB_10_0"):
		case joaat("DLC_MP_H4_M_JBIB_10_0"):
			if (__LIB_0__::func_137(30564, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_F_JBIB_5_0"):
		case joaat("DLC_MP_H4_M_JBIB_6_0"):
			if (__LIB_0__::func_137(30565, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_F_JBIB_5_1"):
		case joaat("DLC_MP_H4_M_JBIB_6_1"):
			if (__LIB_0__::func_137(30566, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_F_JBIB_7_5"):
		case joaat("DLC_MP_H4_M_JBIB_0_9"):
			if (__LIB_0__::func_137(30572, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_F_JBIB_7_4"):
		case joaat("DLC_MP_H4_M_JBIB_0_8"):
			if (__LIB_0__::func_137(30573, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_F_JBIB_6_4"):
		case joaat("DLC_MP_H4_M_JBIB_7_4"):
			if (__LIB_0__::func_137(30578, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_F_JBIB_6_3"):
		case joaat("DLC_MP_H4_M_JBIB_7_3"):
			if (__LIB_0__::func_137(30579, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_F_JBIB_6_2"):
		case joaat("DLC_MP_H4_M_JBIB_7_2"):
			if (__LIB_0__::func_137(30580, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_F_JBIB_6_1"):
		case joaat("DLC_MP_H4_M_JBIB_7_1"):
			if (__LIB_0__::func_137(30581, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_F_JBIB_6_0"):
		case joaat("DLC_MP_H4_M_JBIB_7_0"):
			if (__LIB_0__::func_137(30582, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_F_LEGS_1_0"):
		case joaat("DLC_MP_H4_M_LEGS_1_0"):
			if (__LIB_0__::func_137(30583, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_F_LEGS_1_1"):
		case joaat("DLC_MP_H4_M_LEGS_1_1"):
			if (__LIB_0__::func_137(30584, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_F_LEGS_1_2"):
		case joaat("DLC_MP_H4_M_LEGS_1_2"):
			if (__LIB_0__::func_137(30585, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_F_LEGS_0_0"):
		case joaat("DLC_MP_H4_M_LEGS_0_0"):
			if (__LIB_0__::func_137(30586, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_F_PHEAD_1_0"):
		case joaat("DLC_MP_H4_M_PHEAD_1_0"):
		case joaat("DLC_MP_H4_F_PHEAD_2_0"):
		case joaat("DLC_MP_H4_M_PHEAD_2_0"):
			if (__LIB_0__::func_137(30587, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_F_PHEAD_1_1"):
		case joaat("DLC_MP_H4_M_PHEAD_1_1"):
		case joaat("DLC_MP_H4_F_PHEAD_2_1"):
		case joaat("DLC_MP_H4_M_PHEAD_2_1"):
			if (__LIB_0__::func_137(30588, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_F_PHEAD_1_2"):
		case joaat("DLC_MP_H4_M_PHEAD_1_2"):
		case joaat("DLC_MP_H4_F_PHEAD_2_2"):
		case joaat("DLC_MP_H4_M_PHEAD_2_2"):
			if (__LIB_0__::func_137(30589, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_F_PHEAD_1_3"):
		case joaat("DLC_MP_H4_M_PHEAD_1_3"):
		case joaat("DLC_MP_H4_F_PHEAD_2_3"):
		case joaat("DLC_MP_H4_M_PHEAD_2_3"):
			if (__LIB_0__::func_137(30590, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_F_PHEAD_1_4"):
		case joaat("DLC_MP_H4_M_PHEAD_1_4"):
		case joaat("DLC_MP_H4_F_PHEAD_2_4"):
		case joaat("DLC_MP_H4_M_PHEAD_2_4"):
			if (__LIB_0__::func_137(30591, -1))
			{
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_0"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_0"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_0"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_0"):
			if (__LIB_0__::func_137(30592, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_1"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_1"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_1"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_1"):
			if (__LIB_0__::func_137(30593, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_2"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_2"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_2"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_2"):
			if (__LIB_0__::func_137(30594, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_3"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_3"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_3"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_3"):
			if (__LIB_0__::func_137(30595, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_4"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_4"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_4"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_4"):
			if (__LIB_0__::func_137(30596, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_5"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_5"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_5"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_5"):
			if (__LIB_0__::func_137(30597, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_6"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_6"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_6"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_6"):
			if (__LIB_0__::func_137(30598, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_7"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_7"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_7"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_7"):
			if (__LIB_0__::func_137(30599, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_8"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_8"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_8"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_8"):
			if (__LIB_0__::func_137(30600, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_9"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_9"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_9"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_9"):
			if (__LIB_0__::func_137(30601, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_10"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_10"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_10"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_10"):
			if (__LIB_0__::func_137(30602, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_F_PLEFT_WRIST_0_11"):
		case joaat("DLC_MP_H4_F_PRIGHT_WRIST_0_11"):
		case joaat("DLC_MP_H4_M_PLEFT_WRIST_0_11"):
		case joaat("DLC_MP_H4_M_PRIGHT_WRIST_0_11"):
			if (__LIB_0__::func_137(30603, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_F_PEYES_0_0"):
		case joaat("DLC_MP_H4_M_PEYES_0_0"):
			if (__LIB_0__::func_137(30604, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_F_PEYES_0_1"):
		case joaat("DLC_MP_H4_M_PEYES_0_1"):
			if (__LIB_0__::func_137(30605, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_F_PEYES_0_2"):
		case joaat("DLC_MP_H4_M_PEYES_0_2"):
			if (__LIB_0__::func_137(30606, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_F_PEYES_0_3"):
		case joaat("DLC_MP_H4_M_PEYES_0_3"):
			if (__LIB_0__::func_137(30607, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_F_PEYES_0_4"):
		case joaat("DLC_MP_H4_M_PEYES_0_4"):
			if (__LIB_0__::func_137(30608, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_F_PEYES_0_5"):
		case joaat("DLC_MP_H4_M_PEYES_0_5"):
			if (__LIB_0__::func_137(30609, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_F_PEYES_0_6"):
		case joaat("DLC_MP_H4_M_PEYES_0_6"):
			if (__LIB_0__::func_137(30610, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_F_PEYES_0_7"):
		case joaat("DLC_MP_H4_M_PEYES_0_7"):
			if (__LIB_0__::func_137(30611, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_F_PEYES_0_8"):
		case joaat("DLC_MP_H4_M_PEYES_0_8"):
			if (__LIB_0__::func_137(30612, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_F_PEYES_0_9"):
		case joaat("DLC_MP_H4_M_PEYES_0_9"):
			if (__LIB_0__::func_137(30613, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_F_PEYES_0_10"):
		case joaat("DLC_MP_H4_M_PEYES_0_10"):
			if (__LIB_0__::func_137(30614, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_F_PEYES_0_11"):
		case joaat("DLC_MP_H4_M_PEYES_0_11"):
			if (__LIB_0__::func_137(30615, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_F_TEETH_13_0"):
		case joaat("DLC_MP_H4_M_TEETH_13_0"):
		case joaat("DLC_MP_H4_F_TEETH_14_0"):
		case joaat("DLC_MP_H4_M_TEETH_14_0"):
			if (__LIB_0__::func_137(30616, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_F_TEETH_13_1"):
		case joaat("DLC_MP_H4_M_TEETH_13_1"):
		case joaat("DLC_MP_H4_F_TEETH_14_1"):
		case joaat("DLC_MP_H4_M_TEETH_14_1"):
			if (__LIB_0__::func_137(30617, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_F_TEETH_13_2"):
		case joaat("DLC_MP_H4_M_TEETH_13_2"):
		case joaat("DLC_MP_H4_F_TEETH_14_2"):
		case joaat("DLC_MP_H4_M_TEETH_14_2"):
			if (__LIB_0__::func_137(30618, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_F_TEETH_13_3"):
		case joaat("DLC_MP_H4_M_TEETH_13_3"):
		case joaat("DLC_MP_H4_F_TEETH_14_3"):
		case joaat("DLC_MP_H4_M_TEETH_14_3"):
			if (__LIB_0__::func_137(30619, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_F_TEETH_13_4"):
		case joaat("DLC_MP_H4_M_TEETH_13_4"):
		case joaat("DLC_MP_H4_F_TEETH_14_4"):
		case joaat("DLC_MP_H4_M_TEETH_14_4"):
			if (__LIB_0__::func_137(30620, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_F_TEETH_13_5"):
		case joaat("DLC_MP_H4_M_TEETH_13_5"):
		case joaat("DLC_MP_H4_F_TEETH_14_5"):
		case joaat("DLC_MP_H4_M_TEETH_14_5"):
			if (__LIB_0__::func_137(30621, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_F_TEETH_13_6"):
		case joaat("DLC_MP_H4_M_TEETH_13_6"):
		case joaat("DLC_MP_H4_F_TEETH_14_6"):
		case joaat("DLC_MP_H4_M_TEETH_14_6"):
			if (__LIB_0__::func_137(30622, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_F_TEETH_13_7"):
		case joaat("DLC_MP_H4_M_TEETH_13_7"):
		case joaat("DLC_MP_H4_F_TEETH_14_7"):
		case joaat("DLC_MP_H4_M_TEETH_14_7"):
			if (__LIB_0__::func_137(30623, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_F_TEETH_13_8"):
		case joaat("DLC_MP_H4_M_TEETH_13_8"):
		case joaat("DLC_MP_H4_F_TEETH_14_8"):
		case joaat("DLC_MP_H4_M_TEETH_14_8"):
			if (__LIB_0__::func_137(30624, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_F_TEETH_13_9"):
		case joaat("DLC_MP_H4_M_TEETH_13_9"):
		case joaat("DLC_MP_H4_F_TEETH_14_9"):
		case joaat("DLC_MP_H4_M_TEETH_14_9"):
			if (__LIB_0__::func_137(30625, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_F_TEETH_13_10"):
		case joaat("DLC_MP_H4_M_TEETH_13_10"):
		case joaat("DLC_MP_H4_F_TEETH_14_10"):
		case joaat("DLC_MP_H4_M_TEETH_14_10"):
			if (__LIB_0__::func_137(30626, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_F_TEETH_13_11"):
		case joaat("DLC_MP_H4_M_TEETH_13_11"):
		case joaat("DLC_MP_H4_F_TEETH_14_11"):
		case joaat("DLC_MP_H4_M_TEETH_14_11"):
			if (__LIB_0__::func_137(30627, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_F_TEETH_13_12"):
		case joaat("DLC_MP_H4_M_TEETH_13_12"):
		case joaat("DLC_MP_H4_F_TEETH_14_12"):
		case joaat("DLC_MP_H4_M_TEETH_14_12"):
			if (__LIB_0__::func_137(30628, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_F_TEETH_13_13"):
		case joaat("DLC_MP_H4_M_TEETH_13_13"):
		case joaat("DLC_MP_H4_F_TEETH_14_13"):
		case joaat("DLC_MP_H4_M_TEETH_14_13"):
			if (__LIB_0__::func_137(30629, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_F_TEETH_13_14"):
		case joaat("DLC_MP_H4_M_TEETH_13_14"):
		case joaat("DLC_MP_H4_F_TEETH_14_14"):
		case joaat("DLC_MP_H4_M_TEETH_14_14"):
			if (__LIB_0__::func_137(30630, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_F_TEETH_13_15"):
		case joaat("DLC_MP_H4_M_TEETH_13_15"):
		case joaat("DLC_MP_H4_F_TEETH_14_15"):
		case joaat("DLC_MP_H4_M_TEETH_14_15"):
			if (__LIB_0__::func_137(30631, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_M_DECL_0_0"):
		case joaat("DLC_MP_H4_F_DECL_0_0"):
			if (__LIB_0__::func_137(30574, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_M_JBIB_0_5"):
		case joaat("DLC_MP_H4_F_JBIB_7_1"):
			if (__LIB_0__::func_137(30567, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_M_JBIB_0_6"):
		case joaat("DLC_MP_H4_F_JBIB_7_2"):
			if (__LIB_0__::func_137(30575, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_M_JBIB_0_7"):
		case joaat("DLC_MP_H4_F_JBIB_7_3"):
			if (__LIB_0__::func_137(30576, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_M_JBIB_5_0"):
		case joaat("DLC_MP_H4_F_JBIB_4_0"):
			if (__LIB_0__::func_137(30577, -1))
			{
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_H4_M_PEYES_1_0"):
		case joaat("DLC_MP_H4_F_PEYES_1_0"):
			if (__LIB_0__::func_137(30638, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_M_PEYES_1_1"):
		case joaat("DLC_MP_H4_F_PEYES_1_1"):
			if (__LIB_0__::func_137(30639, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_M_PEYES_1_2"):
		case joaat("DLC_MP_H4_F_PEYES_1_2"):
			if (__LIB_0__::func_137(30640, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_M_PEYES_1_3"):
		case joaat("DLC_MP_H4_F_PEYES_1_3"):
			if (__LIB_0__::func_137(30641, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_M_PEYES_1_4"):
		case joaat("DLC_MP_H4_F_PEYES_1_4"):
			if (__LIB_0__::func_137(30642, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_M_PEYES_1_5"):
		case joaat("DLC_MP_H4_F_PEYES_1_5"):
			if (__LIB_0__::func_137(30643, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_M_PEYES_1_6"):
		case joaat("DLC_MP_H4_F_PEYES_1_6"):
			if (__LIB_0__::func_137(30644, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_M_PEYES_1_7"):
		case joaat("DLC_MP_H4_F_PEYES_1_7"):
			if (__LIB_0__::func_137(30645, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_M_PEYES_1_8"):
		case joaat("DLC_MP_H4_F_PEYES_1_8"):
			if (__LIB_0__::func_137(30646, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_M_PEYES_1_9"):
		case joaat("DLC_MP_H4_F_PEYES_1_9"):
			if (__LIB_0__::func_137(30647, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_M_PEYES_1_10"):
		case joaat("DLC_MP_H4_F_PEYES_1_10"):
			if (__LIB_0__::func_137(30648, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_M_PEYES_1_11"):
		case joaat("DLC_MP_H4_F_PEYES_1_11"):
			if (__LIB_0__::func_137(30649, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_M_PEYES_2_0"):
		case joaat("DLC_MP_H4_F_PEYES_2_0"):
			if (__LIB_0__::func_137(30650, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_M_PEYES_2_1"):
		case joaat("DLC_MP_H4_F_PEYES_2_1"):
			if (__LIB_0__::func_137(30651, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_M_PEYES_2_2"):
		case joaat("DLC_MP_H4_F_PEYES_2_2"):
			if (__LIB_0__::func_137(30652, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_M_PEYES_2_3"):
		case joaat("DLC_MP_H4_F_PEYES_2_3"):
			if (__LIB_0__::func_137(30653, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_M_PEYES_2_4"):
		case joaat("DLC_MP_H4_F_PEYES_2_4"):
			if (__LIB_0__::func_137(30654, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_M_PEYES_2_5"):
		case joaat("DLC_MP_H4_F_PEYES_2_5"):
			if (__LIB_0__::func_137(30655, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_M_PEYES_2_6"):
		case joaat("DLC_MP_H4_F_PEYES_2_6"):
			if (__LIB_0__::func_137(30656, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_M_PEYES_2_7"):
		case joaat("DLC_MP_H4_F_PEYES_2_7"):
			if (__LIB_0__::func_137(30657, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_M_PEYES_2_8"):
		case joaat("DLC_MP_H4_F_PEYES_2_8"):
			if (__LIB_0__::func_137(30658, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_M_PEYES_2_9"):
		case joaat("DLC_MP_H4_F_PEYES_2_9"):
			if (__LIB_0__::func_137(30659, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_M_PEYES_2_10"):
		case joaat("DLC_MP_H4_F_PEYES_2_10"):
			if (__LIB_0__::func_137(30660, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_M_PEYES_2_11"):
		case joaat("DLC_MP_H4_F_PEYES_2_11"):
			if (__LIB_0__::func_137(30661, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_M_PEYES_3_0"):
		case joaat("DLC_MP_H4_F_PEYES_3_0"):
			if (__LIB_0__::func_137(30662, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_M_PEYES_3_1"):
		case joaat("DLC_MP_H4_F_PEYES_3_1"):
			if (__LIB_0__::func_137(30663, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_M_PEYES_3_2"):
		case joaat("DLC_MP_H4_F_PEYES_3_2"):
			if (__LIB_0__::func_137(30664, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_M_PEYES_3_3"):
		case joaat("DLC_MP_H4_F_PEYES_3_3"):
			if (__LIB_0__::func_137(30665, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_M_PEYES_3_4"):
		case joaat("DLC_MP_H4_F_PEYES_3_4"):
			if (__LIB_0__::func_137(30666, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_M_PEYES_3_5"):
		case joaat("DLC_MP_H4_F_PEYES_3_5"):
			if (__LIB_0__::func_137(30667, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_M_PEYES_3_6"):
		case joaat("DLC_MP_H4_F_PEYES_3_6"):
			if (__LIB_0__::func_137(30668, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_M_PEYES_3_7"):
		case joaat("DLC_MP_H4_F_PEYES_3_7"):
			if (__LIB_0__::func_137(30669, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_M_PEYES_3_8"):
		case joaat("DLC_MP_H4_F_PEYES_3_8"):
			if (__LIB_0__::func_137(30670, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_M_PEYES_3_9"):
		case joaat("DLC_MP_H4_F_PEYES_3_9"):
			if (__LIB_0__::func_137(30671, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_M_PEYES_3_10"):
		case joaat("DLC_MP_H4_F_PEYES_3_10"):
			if (__LIB_0__::func_137(30672, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_M_PEYES_3_11"):
		case joaat("DLC_MP_H4_F_PEYES_3_11"):
			if (__LIB_0__::func_137(30673, -1))
			{
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_H4_M_BERD_4_0"):
		case joaat("DLC_MP_H4_F_BERD_4_0"):
			if (__LIB_0__::func_137(30674, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_M_BERD_4_1"):
		case joaat("DLC_MP_H4_F_BERD_4_1"):
			if (__LIB_0__::func_137(30675, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_M_BERD_4_2"):
		case joaat("DLC_MP_H4_F_BERD_4_2"):
			if (__LIB_0__::func_137(30676, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_M_BERD_4_3"):
		case joaat("DLC_MP_H4_F_BERD_4_3"):
			if (__LIB_0__::func_137(30677, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_M_BERD_4_4"):
		case joaat("DLC_MP_H4_F_BERD_4_4"):
			if (__LIB_0__::func_137(30678, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_M_BERD_4_5"):
		case joaat("DLC_MP_H4_F_BERD_4_5"):
			if (__LIB_0__::func_137(30679, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_M_BERD_4_6"):
		case joaat("DLC_MP_H4_F_BERD_4_6"):
			if (__LIB_0__::func_137(30680, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_M_BERD_4_7"):
		case joaat("DLC_MP_H4_F_BERD_4_7"):
			if (__LIB_0__::func_137(30681, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_M_BERD_4_8"):
		case joaat("DLC_MP_H4_F_BERD_4_8"):
			if (__LIB_0__::func_137(30682, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_M_BERD_4_9"):
		case joaat("DLC_MP_H4_F_BERD_4_9"):
			if (__LIB_0__::func_137(30683, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_M_BERD_4_10"):
		case joaat("DLC_MP_H4_F_BERD_4_10"):
			if (__LIB_0__::func_137(30684, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_M_BERD_4_11"):
		case joaat("DLC_MP_H4_F_BERD_4_11"):
			if (__LIB_0__::func_137(30685, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_M_BERD_4_12"):
		case joaat("DLC_MP_H4_F_BERD_4_12"):
			if (__LIB_0__::func_137(30686, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_M_BERD_4_13"):
		case joaat("DLC_MP_H4_F_BERD_4_13"):
			if (__LIB_0__::func_137(30687, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_M_BERD_4_14"):
		case joaat("DLC_MP_H4_F_BERD_4_14"):
			if (__LIB_0__::func_137(30688, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_M_BERD_4_15"):
		case joaat("DLC_MP_H4_F_BERD_4_15"):
			if (__LIB_0__::func_137(30689, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_M_BERD_4_16"):
		case joaat("DLC_MP_H4_F_BERD_4_16"):
			if (__LIB_0__::func_137(30690, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_M_BERD_4_17"):
		case joaat("DLC_MP_H4_F_BERD_4_17"):
			if (__LIB_0__::func_137(30691, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_M_BERD_4_18"):
		case joaat("DLC_MP_H4_F_BERD_4_18"):
			if (__LIB_0__::func_137(30692, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_H4_M_BERD_4_19"):
		case joaat("DLC_MP_H4_F_BERD_4_19"):
			if (__LIB_0__::func_137(30693, -1))
			{
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_H4_M_OUTFIT_SM_M1"):
		case joaat("DLC_MP_H4_M_OUTFIT_SM_M2"):
		case joaat("DLC_MP_H4_M_OUTFIT_SM_M3"):
		case joaat("DLC_MP_H4_M_OUTFIT_SM_M4"):
		case joaat("DLC_MP_H4_F_OUTFIT_SM_F1"):
		case joaat("DLC_MP_H4_F_OUTFIT_SM_F2"):
		case joaat("DLC_MP_H4_F_OUTFIT_SM_F3"):
		case joaat("DLC_MP_H4_F_OUTFIT_SM_F4"):
			if (__LIB_0__::func_137(30320, -1))
			{
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_SUM_M_OUTFIT_1"):
		case joaat("DLC_MP_SUM_F_OUTFIT_1"):
			if (__LIB_0__::func_137(30240, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM_M_OUTFIT_2"):
		case joaat("DLC_MP_SUM_M_PHEAD_0_0"):
		case joaat("DLC_MP_SUM_F_OUTFIT_2"):
		case joaat("DLC_MP_SUM_F_PHEAD_0_0"):
			if (__LIB_0__::func_137(30259, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM_M_BERD_3_4"):
		case joaat("DLC_MP_SUM_F_BERD_3_4"):
			if (__LIB_0__::func_137(30290, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM_M_BERD_3_5"):
		case joaat("DLC_MP_SUM_F_BERD_3_5"):
			if (__LIB_0__::func_137(30291, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM_M_BERD_3_6"):
		case joaat("DLC_MP_SUM_F_BERD_3_6"):
			if (__LIB_0__::func_137(30292, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM_M_BERD_3_7"):
		case joaat("DLC_MP_SUM_F_BERD_3_7"):
			if (__LIB_0__::func_137(30293, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM_M_LEGS_1_25"):
		case joaat("DLC_MP_SUM_F_LEGS_2_25"):
			if (__LIB_0__::func_137(30294, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM_M_JBIB_0_25"):
		case joaat("DLC_MP_SUM_F_JBIB_0_25"):
			if (__LIB_0__::func_137(30295, -1))
			{
				return 1;
			}
			break;
	}
	switch (iParam1)
	{
		case joaat("mpSum_overlays"):
			switch (iParam2)
			{
				case joaat("mpSum_Tee_000_M"):
				case joaat("mpSum_Tee_000_F"):
					if (__LIB_0__::func_137(30260, -1))
					{
						return 1;
					}
					break;
				case joaat("mpSum_Tee_001_M"):
				case joaat("mpSum_Tee_001_F"):
					if (__LIB_0__::func_137(30261, -1))
					{
						return 1;
					}
					break;
				case joaat("mpSum_Tee_002_M"):
				case joaat("mpSum_Tee_002_F"):
					if (__LIB_0__::func_137(30262, -1))
					{
						return 1;
					}
					break;
				case joaat("mpSum_Tee_003_M"):
				case joaat("mpSum_Tee_003_F"):
					if (__LIB_0__::func_137(30263, -1))
					{
						return 1;
					}
					break;
				case joaat("mpSum_Tee_004_M"):
				case joaat("mpSum_Tee_004_F"):
					if (__LIB_0__::func_137(30264, -1))
					{
						return 1;
					}
					break;
				case joaat("mpSum_Tee_005_M"):
				case joaat("mpSum_Tee_005_F"):
					if (__LIB_0__::func_137(30265, -1))
					{
						return 1;
					}
					break;
				case joaat("mpSum_Tee_006_M"):
				case joaat("mpSum_Tee_006_F"):
					if (__LIB_0__::func_137(30266, -1))
					{
						return 1;
					}
					break;
				case joaat("mpSum_Tee_007_M"):
				case joaat("mpSum_Tee_007_F"):
					if (__LIB_0__::func_137(30267, -1))
					{
						return 1;
					}
					break;
				case joaat("mpSum_Tee_008_M"):
				case joaat("mpSum_Tee_008_F"):
					if (__LIB_0__::func_137(30268, -1))
					{
						return 1;
					}
					break;
				case joaat("mpSum_Tee_009_M"):
				case joaat("mpSum_Tee_009_F"):
					if (__LIB_0__::func_137(30269, -1))
					{
						return 1;
					}
					break;
				case joaat("mpSum_Tee_010_M"):
				case joaat("mpSum_Tee_010_F"):
					if (__LIB_0__::func_137(30270, -1))
					{
						return 1;
					}
					break;
				case joaat("mpSum_Tee_011_M"):
				case joaat("mpSum_Tee_011_F"):
					if (__LIB_0__::func_137(30271, -1))
					{
						return 1;
					}
					break;
				case joaat("mpSum_Tee_012_M"):
				case joaat("mpSum_Tee_012_F"):
					if (__LIB_0__::func_137(30272, -1))
					{
						return 1;
					}
					break;
				case joaat("mpSum_Tee_013_M"):
				case joaat("mpSum_Tee_013_F"):
					if (__LIB_0__::func_137(30273, -1))
					{
						return 1;
					}
					break;
				case joaat("mpSum_Tee_014_M"):
				case joaat("mpSum_Tee_014_F"):
					if (__LIB_0__::func_137(30274, -1))
					{
						return 1;
					}
					break;
				case joaat("mpSum_Tee_015_M"):
				case joaat("mpSum_Tee_015_F"):
					if (__LIB_0__::func_137(30275, -1))
					{
						return 1;
					}
					break;
				case joaat("mpSum_Tee_016_M"):
				case joaat("mpSum_Tee_016_F"):
					if (__LIB_0__::func_137(30276, -1))
					{
						return 1;
					}
					break;
				case joaat("mpSum_Tee_017_M"):
				case joaat("mpSum_Tee_017_F"):
					if (__LIB_0__::func_137(30277, -1))
					{
						return 1;
					}
					break;
				case joaat("mpSum_Tee_018_M"):
				case joaat("mpSum_Tee_018_F"):
					if (__LIB_0__::func_137(30278, -1))
					{
						return 1;
					}
					break;
				case joaat("mpSum_Tee_019_M"):
				case joaat("mpSum_Tee_019_F"):
					if (__LIB_0__::func_137(30279, -1))
					{
						return 1;
					}
					break;
				case joaat("mpSum_Tee_020_M"):
				case joaat("mpSum_Tee_020_F"):
					if (__LIB_0__::func_137(30280, -1))
					{
						return 1;
					}
					break;
				case joaat("mpSum_Tee_021_M"):
				case joaat("mpSum_Tee_021_F"):
					if (__LIB_0__::func_137(30281, -1))
					{
						return 1;
					}
					break;
				case joaat("mpSum_Tee_022_M"):
				case joaat("mpSum_Tee_022_F"):
					if (__LIB_0__::func_137(30282, -1))
					{
						return 1;
					}
					break;
				case joaat("mpSum_Tee_023_M"):
				case joaat("mpSum_Tee_023_F"):
					if (__LIB_0__::func_137(30283, -1))
					{
						return 1;
					}
					break;
				case joaat("mpSum_Tee_024_M"):
				case joaat("mpSum_Tee_024_F"):
					if (__LIB_0__::func_137(30284, -1))
					{
						return 1;
					}
					break;
				case joaat("mpSum_Tee_025_M"):
				case joaat("mpSum_Tee_025_F"):
					if (__LIB_0__::func_137(30285, -1))
					{
						return 1;
					}
					break;
				case joaat("mpSum_Tee_026_M"):
				case joaat("mpSum_Tee_026_F"):
					if (__LIB_0__::func_137(30286, -1))
					{
						return 1;
					}
					break;
				case joaat("mpSum_Tee_027_M"):
				case joaat("mpSum_Tee_027_F"):
					if (__LIB_0__::func_137(30287, -1))
					{
						return 1;
					}
					break;
				case joaat("mpSum_Tee_028_M"):
				case joaat("mpSum_Tee_028_F"):
					if (__LIB_0__::func_137(30288, -1))
					{
						return 1;
					}
					break;
				case joaat("mpSum_Tee_029_M"):
				case joaat("mpSum_Tee_029_F"):
					if (__LIB_0__::func_137(30289, -1))
					{
						return 1;
					}
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_SUM_F_JBIB_22_0"):
		case joaat("DLC_MP_SUM_M_JBIB_13_8"):
			if (__LIB_0__::func_137(28255, -1) && __LIB_0__::func_137(28254, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_SUM_F_JBIB_22_2"):
		case joaat("DLC_MP_SUM_M_JBIB_13_10"):
			if (__LIB_0__::func_137(28254, -1))
			{
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_SUM_F_JBIB_22_1"):
		case joaat("DLC_MP_SUM_M_JBIB_13_9"):
			if (__LIB_1__::func_676(91, -1) || __LIB_0__::func_137(30258, -1))
			{
				return 1;
			}
			break;
	}
	switch (iParam1)
	{
		case joaat("mpSum_overlays"):
			switch (iParam2)
			{
				case joaat("mpSum_Tee_030_M"):
				case joaat("mpSum_Tee_030_F"):
					if (__LIB_0__::func_137(28255, -1))
					{
						return 1;
					}
					break;
			}
			break;
	}
	switch (iParam1)
	{
		case joaat("mpSum_overlays"):
			switch (iParam2)
			{
				case joaat("mpSum_Tee_031_M"):
				case joaat("mpSum_Tee_031_F"):
					if (__LIB_1__::func_676(89, -1) || __LIB_0__::func_137(30254, -1))
					{
						return 1;
					}
					break;
				case joaat("mpSum_Tee_032_M"):
				case joaat("mpSum_Tee_032_F"):
					if (__LIB_1__::func_676(90, -1) || __LIB_0__::func_137(30255, -1))
					{
						return 1;
					}
					break;
				case joaat("mpSum_Tee_033_M"):
				case joaat("mpSum_Tee_033_F"):
					if (__LIB_1__::func_676(92, -1) || __LIB_0__::func_137(30256, -1))
					{
						return 1;
					}
					break;
				case joaat("mpSum_Tee_034_M"):
				case joaat("mpSum_Tee_034_F"):
					if ((((__LIB_1__::func_676(89, -1) && __LIB_1__::func_676(90, -1)) && __LIB_1__::func_676(92, -1)) && __LIB_1__::func_676(91, -1)) || __LIB_0__::func_137(30257, -1))
					{
						return 1;
					}
					break;
			}
			break;
	}
	if (__LIB_16__::func_526(iParam0, iParam1, iParam2))
	{
		return 1;
	}
	if (__LIB_16__::func_335(iParam0, -1, -1))
	{
		if (__LIB_0__::func_137(__LIB_16__::func_334(iParam0), -1))
		{
			return 1;
		}
	}
	switch (iParam1)
	{
		case joaat("mpLuxe_overlays"):
			switch (iParam2)
			{
				case joaat("MP_FAKE_SC_000_F"):
				case joaat("MP_FAKE_SC_000_M"):
					if (__LIB_0__::func_137(27081, -1))
					{
						return 1;
					}
					break;
			}
			break;
		case joaat("mpVinewood_overlays"):
			switch (iParam2)
			{
				case joaat("CasinoTop_M_21"):
				case joaat("CasinoTop_F_21"):
					if (__LIB_0__::func_137(27109, -1))
					{
						return 1;
					}
					break;
				case joaat("CasinoTop_M_23"):
				case joaat("CasinoTop_F_23"):
					if (__LIB_0__::func_137(27110, -1))
					{
						return 1;
					}
					break;
				case joaat("CasinoTop_M_2"):
				case joaat("CasinoTop_F_2"):
					if (__LIB_0__::func_137(27111, -1))
					{
						return 1;
					}
					break;
				case joaat("CasinoTop_M_4"):
				case joaat("CasinoTop_F_4"):
					if (__LIB_0__::func_137(27112, -1))
					{
						return 1;
					}
					break;
				case joaat("CasinoTop_M_6"):
				case joaat("CasinoTop_F_6"):
					if (__LIB_0__::func_137(27113, -1))
					{
						return 1;
					}
					break;
				case joaat("CasinoTop_M_10"):
				case joaat("CasinoTop_F_10"):
					if (__LIB_0__::func_137(27114, -1))
					{
						return 1;
					}
					break;
				case joaat("CasinoTop_M_22"):
				case joaat("CasinoTop_F_22"):
					if (__LIB_0__::func_137(27115, -1))
					{
						return 1;
					}
					break;
				case joaat("CasinoTop_M_1"):
				case joaat("CasinoTop_F_1"):
					if (__LIB_0__::func_137(27140, -1))
					{
						return 1;
					}
					break;
				case joaat("CasinoTop_M_3"):
				case joaat("CasinoTop_F_3"):
					if (__LIB_0__::func_137(27141, -1))
					{
						return 1;
					}
					break;
				case joaat("CasinoTop_M_5"):
				case joaat("CasinoTop_F_5"):
					if (__LIB_0__::func_137(27142, -1))
					{
						return 1;
					}
					break;
				case joaat("CasinoTop_M_7"):
				case joaat("CasinoTop_F_7"):
					if (__LIB_0__::func_137(27143, -1))
					{
						return 1;
					}
					break;
				case joaat("CasinoTop_M_8"):
				case joaat("CasinoTop_F_8"):
					if (__LIB_0__::func_137(27144, -1))
					{
						return 1;
					}
					break;
				case joaat("CasinoTop_M_9"):
				case joaat("CasinoTop_F_9"):
					if (__LIB_0__::func_137(27145, -1))
					{
						return 1;
					}
					break;
				case joaat("CasinoTop_M_27"):
				case joaat("CasinoTop_F_27"):
					if (__LIB_0__::func_137(27147, -1))
					{
						return 1;
					}
					break;
				case joaat("CasinoTop_M_28"):
				case joaat("CasinoTop_F_28"):
					if (__LIB_0__::func_137(27148, -1))
					{
						return 1;
					}
					break;
				case joaat("CasinoTop_M_33"):
				case joaat("CasinoTop_F_33"):
					if (__LIB_0__::func_137(27149, -1))
					{
						return 1;
					}
					break;
				case joaat("CasinoTop_M_34"):
				case joaat("CasinoTop_F_34"):
					if (__LIB_0__::func_137(27150, -1))
					{
						return 1;
					}
					break;
				case joaat("CasinoTop_M_35"):
				case joaat("CasinoTop_F_35"):
					if (__LIB_0__::func_137(27151, -1))
					{
						return 1;
					}
					break;
				case joaat("CasinoTop_M_36"):
				case joaat("CasinoTop_F_36"):
					if (__LIB_0__::func_137(27152, -1))
					{
						return 1;
					}
					break;
				case joaat("CasinoTop_M_37"):
				case joaat("CasinoTop_F_37"):
					if (__LIB_0__::func_137(27153, -1))
					{
						return 1;
					}
					break;
				case joaat("CasinoTop_M_38"):
				case joaat("CasinoTop_F_38"):
					if (__LIB_0__::func_137(27154, -1))
					{
						return 1;
					}
					break;
				case joaat("CasinoTop_M_39"):
				case joaat("CasinoTop_F_39"):
					if (__LIB_0__::func_137(27155, -1))
					{
						return 1;
					}
					break;
				case joaat("CasinoTop_M_40"):
				case joaat("CasinoTop_F_40"):
					if (__LIB_0__::func_137(27156, -1))
					{
						return 1;
					}
					break;
				case joaat("CasinoTop_M_41"):
				case joaat("CasinoTop_F_41"):
					if (__LIB_0__::func_137(27157, -1))
					{
						return 1;
					}
					break;
				case joaat("CasinoTop_M_42"):
				case joaat("CasinoTop_F_42"):
					if (__LIB_0__::func_137(27158, -1))
					{
						return 1;
					}
					break;
				case joaat("CasinoTop_M_24"):
				case joaat("CasinoTop_F_24"):
					if (__LIB_0__::func_137(27174, -1))
					{
						return 1;
					}
					break;
				case joaat("CasinoTop_M_25"):
				case joaat("CasinoTop_F_25"):
					if (__LIB_0__::func_137(27175, -1))
					{
						return 1;
					}
					break;
				case joaat("CasinoTop_M_26"):
				case joaat("CasinoTop_F_26"):
					if (__LIB_0__::func_137(27176, -1))
					{
						return 1;
					}
					break;
				case joaat("CasinoTop_M_29"):
				case joaat("CasinoTop_F_29"):
					if (__LIB_0__::func_137(27177, -1))
					{
						return 1;
					}
					break;
				case joaat("CasinoTop_M_30"):
				case joaat("CasinoTop_F_30"):
					if (__LIB_0__::func_137(27178, -1))
					{
						return 1;
					}
					break;
				case joaat("CasinoTop_M_31"):
				case joaat("CasinoTop_F_31"):
					if (__LIB_0__::func_137(27179, -1))
					{
						return 1;
					}
					break;
				case joaat("CasinoTop_M_32"):
				case joaat("CasinoTop_F_32"):
					if (__LIB_0__::func_137(27180, -1))
					{
						return 1;
					}
					break;
				case joaat("CasinoTop_M_43"):
				case joaat("CasinoTop_F_43"):
					if (__LIB_0__::func_137(27181, -1))
					{
						return 1;
					}
					break;
				case joaat("CasinoTop_M_44"):
				case joaat("CasinoTop_F_44"):
					if (__LIB_0__::func_137(27182, -1))
					{
						return 1;
					}
					break;
			}
			break;
		case joaat("mpExecutive_overlays"):
			switch (iParam2)
			{
				case joaat("MP_exec_prizes_001_M"):
					if (__LIB_0__::func_137(27083, -1))
					{
						return 1;
					}
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_VWD_M_OUTFIT_IMPRAGE_0"):
		case joaat("DLC_MP_VWD_M_HAIR_0_0"):
		case joaat("DLC_MP_VWD_M_BERD_0_0"):
		case joaat("DLC_MP_VWD_F_OUTFIT_IMPRAGE_0"):
		case joaat("DLC_MP_VWD_F_HAIR_0_0"):
		case joaat("DLC_MP_VWD_F_BERD_0_0"):
			if (__LIB_0__::func_137(26968, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_VWD_M_OUTFIT_HIGHROLL_0"):
		case joaat("DLC_MP_VWD_M_JBIB_2_2"):
		case joaat("DLC_MP_VWD_M_JBIB_3_2"):
		case joaat("DLC_MP_VWD_M_LEGS_1_1"):
		case joaat("DLC_MP_VWD_M_SPECIAL_2_2"):
		case joaat("DLC_MP_VWD_M_SPECIAL_3_2"):
		case joaat("DLC_MP_VWD_M_SPECIAL_4_2"):
		case joaat("DLC_MP_VWD_M_SPECIAL_5_2"):
		case joaat("DLC_MP_VWD_F_OUTFIT_HIGHROLL_0"):
		case joaat("DLC_MP_VWD_F_JBIB_19_7"):
			if (__LIB_0__::func_137(26969, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_VWD_M_SPECIAL_6_2"):
			if ((((__LIB_2__::func_97(joaat("DLC_MP_VWD_M_SPECIAL_2_0"), 1, 1, 1, -1) || __LIB_2__::func_97(joaat("DLC_MP_VWD_M_SPECIAL_2_2"), 1, 1, 1, -1)) || __LIB_2__::func_97(joaat("DLC_MP_VWD_M_SPECIAL_2_4"), 1, 1, 1, -1)) || __LIB_2__::func_97(joaat("DLC_MP_VWD_M_SPECIAL_2_11"), 1, 1, 1, -1)) || __LIB_0__::func_137(26969, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_VWD_M_SPECIAL_6_5"):
			if (((((__LIB_2__::func_97(joaat("DLC_MP_VWD_M_SPECIAL_2_5"), 1, 1, 1, -1) || __LIB_2__::func_97(joaat("DLC_MP_VWD_M_SPECIAL_2_6"), 1, 1, 1, -1)) || __LIB_2__::func_97(joaat("DLC_MP_VWD_M_SPECIAL_2_7"), 1, 1, 1, -1)) || __LIB_2__::func_97(joaat("DLC_MP_VWD_M_SPECIAL_2_8"), 1, 1, 1, -1)) || __LIB_2__::func_97(joaat("DLC_MP_VWD_M_SPECIAL_2_9"), 1, 1, 1, -1)) || __LIB_2__::func_97(joaat("DLC_MP_VWD_M_SPECIAL_2_12"), 1, 1, 1, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_VWD_M_JBIB_20_6"):
		case joaat("DLC_MP_VWD_F_JBIB_18_6"):
			if (__LIB_0__::func_137(27159, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_VWD_M_JBIB_20_7"):
		case joaat("DLC_MP_VWD_F_JBIB_18_7"):
			if (__LIB_0__::func_137(27160, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_VWD_M_JBIB_20_8"):
		case joaat("DLC_MP_VWD_F_JBIB_18_8"):
			if (__LIB_0__::func_137(27161, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_VWD_M_JBIB_20_9"):
		case joaat("DLC_MP_VWD_F_JBIB_18_9"):
			if (__LIB_0__::func_137(27162, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_VWD_M_JBIB_20_10"):
		case joaat("DLC_MP_VWD_F_JBIB_18_10"):
			if (__LIB_0__::func_137(27163, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_VWD_M_PEYES_1_16"):
		case joaat("DLC_MP_VWD_F_PEYES_1_16"):
			if (__LIB_0__::func_137(27164, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_VWD_M_PEYES_1_17"):
		case joaat("DLC_MP_VWD_F_PEYES_1_17"):
			if (__LIB_0__::func_137(27165, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_VWD_M_PEYES_1_18"):
		case joaat("DLC_MP_VWD_F_PEYES_1_18"):
			if (__LIB_0__::func_137(27166, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_VWD_M_PEYES_1_19"):
		case joaat("DLC_MP_VWD_F_PEYES_1_19"):
			if (__LIB_0__::func_137(27167, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_VWD_M_PEARS_0_0"):
		case joaat("DLC_MP_VWD_F_PEARS_0_0"):
			if (__LIB_0__::func_137(27168, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_VWD_M_PEARS_0_1"):
		case joaat("DLC_MP_VWD_F_PEARS_0_1"):
			if (__LIB_0__::func_137(27169, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_VWD_M_PLEFT_WRIST_2_6"):
		case joaat("DLC_MP_VWD_F_PLEFT_WRIST_2_6"):
			if (__LIB_0__::func_137(27170, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_VWD_M_PLEFT_WRIST_2_7"):
		case joaat("DLC_MP_VWD_F_PLEFT_WRIST_2_7"):
			if (__LIB_0__::func_137(27171, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_VWD_M_PLEFT_WRIST_2_8"):
		case joaat("DLC_MP_VWD_F_PLEFT_WRIST_2_8"):
			if (__LIB_0__::func_137(27172, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_VWD_M_PLEFT_WRIST_2_9"):
		case joaat("DLC_MP_VWD_F_PLEFT_WRIST_2_9"):
			if (__LIB_0__::func_137(27173, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_VWD_M_JBIB_20_4"):
		case joaat("DLC_MP_VWD_F_JBIB_18_4"):
			if (__LIB_1__::func_124(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_VWD_M_DECL_1_0"):
		case joaat("DLC_MP_VWD_F_DECL_1_0"):
			if (__LIB_0__::func_137(27194, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_VWD_M_DECL_1_1"):
		case joaat("DLC_MP_VWD_F_DECL_1_1"):
			if (__LIB_0__::func_137(27193, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_VWD_M_DECL_1_2"):
		case joaat("DLC_MP_VWD_F_DECL_1_2"):
			if (__LIB_0__::func_137(27192, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_VWD_M_DECL_1_3"):
		case joaat("DLC_MP_VWD_F_DECL_1_3"):
			if (__LIB_0__::func_137(27189, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_VWD_M_DECL_1_4"):
		case joaat("DLC_MP_VWD_F_DECL_1_4"):
			if (__LIB_0__::func_137(27190, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_VWD_M_DECL_1_5"):
		case joaat("DLC_MP_VWD_F_DECL_1_5"):
			if (__LIB_0__::func_137(27191, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_VWD_M_DECL_1_6"):
		case joaat("DLC_MP_VWD_F_DECL_1_6"):
			if (__LIB_0__::func_137(27195, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_VWD_M_DECL_1_7"):
		case joaat("DLC_MP_VWD_F_DECL_1_7"):
			if (__LIB_0__::func_137(27196, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_VWD_M_DECL_1_8"):
		case joaat("DLC_MP_VWD_F_DECL_1_8"):
			if (__LIB_0__::func_137(27197, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_VWD_M_DECL_1_9"):
		case joaat("DLC_MP_VWD_F_DECL_1_9"):
			if (__LIB_0__::func_137(27188, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_VWD_M_DECL_1_10"):
		case joaat("DLC_MP_VWD_F_DECL_1_10"):
			if (__LIB_0__::func_137(27186, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_VWD_M_DECL_1_11"):
		case joaat("DLC_MP_VWD_F_DECL_1_11"):
			if (__LIB_0__::func_137(27202, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_VWD_M_DECL_1_12"):
		case joaat("DLC_MP_VWD_F_DECL_1_12"):
			if (__LIB_0__::func_137(27203, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_VWD_M_DECL_1_13"):
		case joaat("DLC_MP_VWD_F_DECL_1_13"):
			if (__LIB_0__::func_137(27204, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_VWD_M_DECL_1_14"):
		case joaat("DLC_MP_VWD_F_DECL_1_14"):
			if (__LIB_0__::func_137(27205, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_VWD_M_DECL_1_15"):
		case joaat("DLC_MP_VWD_F_DECL_1_15"):
			if (__LIB_0__::func_137(27206, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_VWD_M_DECL_1_16"):
		case joaat("DLC_MP_VWD_F_DECL_1_16"):
			if (__LIB_0__::func_137(27207, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_VWD_M_DECL_1_17"):
		case joaat("DLC_MP_VWD_F_DECL_1_17"):
			if (__LIB_0__::func_137(27208, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_VWD_M_DECL_1_18"):
		case joaat("DLC_MP_VWD_F_DECL_1_18"):
			if (__LIB_0__::func_137(27209, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_VWD_M_JBIB_23_0"):
		case joaat("DLC_MP_VWD_F_JBIB_21_0"):
			if (__LIB_0__::func_137(27210, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_VWD_M_JBIB_23_1"):
		case joaat("DLC_MP_VWD_F_JBIB_21_1"):
			if (__LIB_0__::func_137(27184, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_VWD_M_JBIB_23_2"):
		case joaat("DLC_MP_VWD_F_JBIB_21_2"):
			if (__LIB_0__::func_137(27211, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_VWD_M_JBIB_23_3"):
		case joaat("DLC_MP_VWD_F_JBIB_21_3"):
			if (__LIB_0__::func_137(27185, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_VWD_M_JBIB_23_4"):
		case joaat("DLC_MP_VWD_F_JBIB_21_4"):
			if (__LIB_0__::func_137(27212, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_VWD_M_JBIB_23_5"):
		case joaat("DLC_MP_VWD_F_JBIB_21_5"):
			if (__LIB_0__::func_137(27198, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_VWD_M_JBIB_23_6"):
		case joaat("DLC_MP_VWD_F_JBIB_21_6"):
			if (__LIB_0__::func_137(27187, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_VWD_M_JBIB_23_7"):
		case joaat("DLC_MP_VWD_F_JBIB_21_7"):
			if (__LIB_0__::func_137(27213, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_VWD_M_JBIB_23_8"):
		case joaat("DLC_MP_VWD_F_JBIB_21_8"):
			if (__LIB_0__::func_137(27199, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_VWD_M_JBIB_23_9"):
		case joaat("DLC_MP_VWD_F_JBIB_21_9"):
			if (__LIB_0__::func_137(27200, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_VWD_M_JBIB_23_10"):
		case joaat("DLC_MP_VWD_F_JBIB_21_10"):
			if (__LIB_0__::func_137(27201, -1))
			{
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_ARENA_M_OUTFIT_CHARACTERS_A_0"):
		case joaat("DLC_MP_ARENA_F_OUTFIT_CHARACTERS_A_0"):
			if (__LIB_4__::func_251())
			{
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_ARENA_F_JBIB_16_0"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_0"):
			if (__LIB_0__::func_137(25022, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_ARENA_F_JBIB_16_1"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_1"):
			if (__LIB_0__::func_137(25023, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_ARENA_F_JBIB_16_2"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_2"):
			if (__LIB_0__::func_137(25024, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_ARENA_F_JBIB_16_3"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_3"):
			if (__LIB_0__::func_137(25025, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_ARENA_F_JBIB_16_4"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_4"):
			if (__LIB_0__::func_137(25026, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_ARENA_F_JBIB_16_5"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_5"):
			if (__LIB_0__::func_137(25027, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_ARENA_F_JBIB_16_6"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_6"):
			if (__LIB_0__::func_137(25028, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_ARENA_F_JBIB_16_7"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_7"):
			if (__LIB_0__::func_137(25019, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_ARENA_F_JBIB_16_8"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_8"):
			if (__LIB_0__::func_137(25029, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_ARENA_F_JBIB_16_9"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_9"):
			if (__LIB_0__::func_137(25021, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_ARENA_F_JBIB_16_10"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_10"):
			if (__LIB_0__::func_137(25018, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_ARENA_F_JBIB_16_11"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_11"):
			if (__LIB_0__::func_137(25020, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_ARENA_F_JBIB_16_12"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_12"):
			if (__LIB_0__::func_137(25030, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_ARENA_F_JBIB_16_13"):
		case joaat("DLC_MP_ARENA_M_JBIB_16_13"):
			if (__LIB_0__::func_137(25031, -1))
			{
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_ARENA_M_OUTFIT_EPSILON_0"):
		case joaat("DLC_MP_ARENA_F_OUTFIT_EPSILON_0"):
			if (__LIB_0__::func_137(25005, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_ARENA_M_TEETH_0_0"):
		case joaat("DLC_MP_ARENA_F_TEETH_0_0"):
		case joaat("DLC_MP_ARENA_M_TEETH_1_0"):
		case joaat("DLC_MP_ARENA_F_TEETH_1_0"):
		case joaat("DLC_MP_ARENA_M_TEETH_2_0"):
		case joaat("DLC_MP_ARENA_F_TEETH_2_0"):
			if (__LIB_0__::func_137(25004, -1))
			{
				return 1;
			}
			break;
	}
	switch (iParam2)
	{
		case joaat("Blank_Hoody_F_0"):
			if (__LIB_0__::func_137(27060, -1))
			{
				return 1;
			}
			break;
		case joaat("F_TankTop_Smug_5_4_a"):
		case joaat("M_TankTop_Smug_5_4_a"):
			if (__LIB_0__::func_137(27067, -1))
			{
				return 1;
			}
			break;
		case joaat("F_TankTop_Smug_5_7_a"):
		case joaat("M_TankTop_Smug_5_7_a"):
			if (__LIB_0__::func_137(27069, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Biker_Tee_002_F"):
		case joaat("MP_Biker_Tee_002_M"):
			if (__LIB_0__::func_137(27070, -1))
			{
				return 1;
			}
			break;
		case joaat("F_TankTop_Smug_5_21_a"):
		case joaat("M_TankTop_Smug_5_21_a"):
			if (__LIB_0__::func_137(27071, -1))
			{
				return 1;
			}
			break;
		case joaat("F_TankTop_Smug_5_13_a"):
		case joaat("M_TankTop_Smug_5_13_a"):
			if (__LIB_0__::func_137(27075, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Christmas2018_Tee_023_F"):
		case joaat("MP_Christmas2018_Tee_023_M"):
			if (__LIB_0__::func_137(27077, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Biker_Tee_049_F"):
		case joaat("MP_Biker_Tee_049_M"):
			if (__LIB_0__::func_137(27078, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Battle_Clothing_020_F"):
			if (__LIB_0__::func_137(27084, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_exec_prizes_001_F"):
			if (__LIB_0__::func_137(27086, -1))
			{
				return 1;
			}
			break;
		case joaat("Blank_Hoody_M_0"):
			if (__LIB_0__::func_137(27061, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Battle_Clothing_020_M"):
			if (__LIB_0__::func_137(27085, -1))
			{
				return 1;
			}
			break;
	}
	switch (iParam2)
	{
		case joaat("MP_Christmas2018_Tee_000_M"):
		case joaat("MP_Christmas2018_Tee_000_F"):
			if (__LIB_0__::func_137(25032, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Christmas2018_Tee_001_M"):
		case joaat("MP_Christmas2018_Tee_001_F"):
			if (__LIB_0__::func_137(25033, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Christmas2018_Tee_002_M"):
		case joaat("MP_Christmas2018_Tee_002_F"):
			if (__LIB_0__::func_137(25034, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Christmas2018_Tee_003_M"):
		case joaat("MP_Christmas2018_Tee_003_F"):
			if (__LIB_0__::func_137(25035, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Christmas2018_Tee_004_M"):
		case joaat("MP_Christmas2018_Tee_004_F"):
			if (__LIB_0__::func_137(25036, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Christmas2018_Tee_005_M"):
		case joaat("MP_Christmas2018_Tee_005_F"):
			if (__LIB_0__::func_137(25037, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Christmas2018_Tee_006_M"):
		case joaat("MP_Christmas2018_Tee_006_F"):
			if (__LIB_0__::func_137(25038, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Christmas2018_Tee_007_M"):
		case joaat("MP_Christmas2018_Tee_007_F"):
			if (__LIB_0__::func_137(25039, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Christmas2018_Tee_008_M"):
		case joaat("MP_Christmas2018_Tee_008_F"):
			if (__LIB_0__::func_137(25040, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Christmas2018_Tee_009_M"):
		case joaat("MP_Christmas2018_Tee_009_F"):
			if (__LIB_0__::func_137(25041, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Christmas2018_Tee_010_M"):
		case joaat("MP_Christmas2018_Tee_010_F"):
			if (__LIB_0__::func_137(25042, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Christmas2018_Tee_011_M"):
		case joaat("MP_Christmas2018_Tee_011_F"):
			if (__LIB_0__::func_137(25043, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Christmas2018_Tee_012_M"):
		case joaat("MP_Christmas2018_Tee_012_F"):
			if (__LIB_0__::func_137(25044, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Christmas2018_Tee_013_M"):
		case joaat("MP_Christmas2018_Tee_013_F"):
			if (__LIB_0__::func_137(25045, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Christmas2018_Tee_014_M"):
		case joaat("MP_Christmas2018_Tee_014_F"):
			if (__LIB_0__::func_137(25046, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Christmas2018_Tee_015_M"):
		case joaat("MP_Christmas2018_Tee_015_F"):
			if (__LIB_0__::func_137(25047, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Christmas2018_Tee_016_M"):
		case joaat("MP_Christmas2018_Tee_016_F"):
			if (__LIB_0__::func_137(25048, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Christmas2018_Tee_017_M"):
		case joaat("MP_Christmas2018_Tee_017_F"):
			if (__LIB_0__::func_137(25049, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Christmas2018_Tee_018_M"):
		case joaat("MP_Christmas2018_Tee_018_F"):
			if (__LIB_0__::func_137(25050, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Christmas2018_Tee_019_M"):
		case joaat("MP_Christmas2018_Tee_019_F"):
			if (__LIB_0__::func_137(25051, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Christmas2018_Tee_020_M"):
		case joaat("MP_Christmas2018_Tee_020_F"):
			if (__LIB_0__::func_137(25052, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Christmas2018_Tee_021_M"):
		case joaat("MP_Christmas2018_Tee_021_F"):
			if (__LIB_0__::func_137(25053, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Christmas2018_Tee_022_M"):
		case joaat("MP_Christmas2018_Tee_022_F"):
			if (__LIB_0__::func_137(25054, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Christmas2018_Tee_023_M"):
		case joaat("MP_Christmas2018_Tee_023_F"):
			if (__LIB_0__::func_137(25055, -1))
			{
				return 1;
			}
			if (__LIB_0__::func_137(27077, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Christmas2018_Tee_024_M"):
		case joaat("MP_Christmas2018_Tee_024_F"):
			if (__LIB_0__::func_137(25056, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Christmas2018_Tee_025_M"):
		case joaat("MP_Christmas2018_Tee_025_F"):
			if (__LIB_0__::func_137(25057, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Christmas2018_Tee_026_M"):
		case joaat("MP_Christmas2018_Tee_026_F"):
			if (__LIB_0__::func_137(25058, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Christmas2018_Tee_027_M"):
		case joaat("MP_Christmas2018_Tee_027_F"):
			if (__LIB_0__::func_137(25059, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Christmas2018_Tee_028_M"):
		case joaat("MP_Christmas2018_Tee_028_F"):
			if (__LIB_0__::func_137(25060, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Christmas2018_Tee_029_M"):
		case joaat("MP_Christmas2018_Tee_029_F"):
			if (__LIB_0__::func_137(25061, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Christmas2018_Tee_030_M"):
		case joaat("MP_Christmas2018_Tee_030_F"):
			if (__LIB_0__::func_137(25062, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Christmas2018_Tee_031_M"):
		case joaat("MP_Christmas2018_Tee_031_F"):
			if (__LIB_0__::func_137(25063, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Christmas2018_Tee_032_M"):
		case joaat("MP_Christmas2018_Tee_032_F"):
			if (__LIB_0__::func_137(25064, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Christmas2018_Tee_033_M"):
		case joaat("MP_Christmas2018_Tee_033_F"):
			if (__LIB_0__::func_137(25065, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Christmas2018_Tee_034_M"):
		case joaat("MP_Christmas2018_Tee_034_F"):
			if (__LIB_0__::func_137(25066, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Christmas2018_Tee_035_M"):
		case joaat("MP_Christmas2018_Tee_035_F"):
			if (__LIB_0__::func_137(25067, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Christmas2018_Tee_036_M"):
		case joaat("MP_Christmas2018_Tee_036_F"):
			if (__LIB_0__::func_137(25068, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Christmas2018_Tee_037_M"):
		case joaat("MP_Christmas2018_Tee_037_F"):
			if (__LIB_0__::func_137(25069, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Christmas2018_Tee_038_M"):
		case joaat("MP_Christmas2018_Tee_038_F"):
			if (__LIB_0__::func_137(25070, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Christmas2018_Tee_039_M"):
		case joaat("MP_Christmas2018_Tee_039_F"):
			if (__LIB_0__::func_137(25071, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Christmas2018_Tee_040_M"):
		case joaat("MP_Christmas2018_Tee_040_F"):
			if (__LIB_0__::func_137(25072, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Christmas2018_Tee_041_M"):
		case joaat("MP_Christmas2018_Tee_041_F"):
			if (__LIB_0__::func_137(25073, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Christmas2018_Tee_042_M"):
		case joaat("MP_Christmas2018_Tee_042_F"):
			if (__LIB_0__::func_137(25074, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Christmas2018_Tee_043_M"):
		case joaat("MP_Christmas2018_Tee_043_F"):
			if (__LIB_0__::func_137(25075, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Christmas2018_Tee_044_M"):
		case joaat("MP_Christmas2018_Tee_044_F"):
			if (__LIB_0__::func_137(25076, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Christmas2018_Tee_045_M"):
		case joaat("MP_Christmas2018_Tee_045_F"):
			if (__LIB_0__::func_137(25077, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Christmas2018_Tee_046_M"):
		case joaat("MP_Christmas2018_Tee_046_F"):
			if (__LIB_0__::func_137(25078, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Christmas2018_Tee_047_M"):
		case joaat("MP_Christmas2018_Tee_047_F"):
			if (__LIB_0__::func_137(25079, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Christmas2018_Tee_048_M"):
		case joaat("MP_Christmas2018_Tee_048_F"):
			if (__LIB_0__::func_137(25080, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Christmas2018_Tee_049_M"):
		case joaat("MP_Christmas2018_Tee_049_F"):
			if (__LIB_0__::func_137(25081, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Christmas2018_Tee_050_M"):
		case joaat("MP_Christmas2018_Tee_050_F"):
			if (__LIB_0__::func_137(25082, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Christmas2018_Tee_051_M"):
		case joaat("MP_Christmas2018_Tee_051_F"):
			if (__LIB_0__::func_137(25083, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Christmas2018_Tee_052_M"):
		case joaat("MP_Christmas2018_Tee_052_F"):
			if (__LIB_0__::func_137(25084, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Christmas2018_Tee_053_M"):
		case joaat("MP_Christmas2018_Tee_053_F"):
			if (__LIB_0__::func_137(25085, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Christmas2018_Tee_054_M"):
		case joaat("MP_Christmas2018_Tee_054_F"):
			if (__LIB_0__::func_137(25086, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Christmas2018_Tee_055_M"):
		case joaat("MP_Christmas2018_Tee_055_F"):
			if (__LIB_0__::func_137(25087, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Christmas2018_Tee_056_M"):
		case joaat("MP_Christmas2018_Tee_056_F"):
			if (__LIB_0__::func_137(25088, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Christmas2018_Tee_057_M"):
		case joaat("MP_Christmas2018_Tee_057_F"):
			if (__LIB_0__::func_137(25089, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Christmas2018_Tee_058_M"):
		case joaat("MP_Christmas2018_Tee_058_F"):
			if (__LIB_0__::func_137(25090, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Christmas2018_Tee_059_M"):
		case joaat("MP_Christmas2018_Tee_059_F"):
			if (__LIB_0__::func_137(25091, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Christmas2018_Tee_060_M"):
		case joaat("MP_Christmas2018_Tee_060_F"):
			if (__LIB_0__::func_137(25092, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Christmas2018_Tee_061_M"):
		case joaat("MP_Christmas2018_Tee_061_F"):
			if (__LIB_0__::func_137(25093, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Christmas2018_Tee_062_M"):
		case joaat("MP_Christmas2018_Tee_062_F"):
			if (__LIB_0__::func_137(25094, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Christmas2018_Tee_063_M"):
		case joaat("MP_Christmas2018_Tee_063_F"):
			if (__LIB_0__::func_137(25095, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Christmas2018_Tee_064_M"):
		case joaat("MP_Christmas2018_Tee_064_F"):
			if (__LIB_0__::func_137(25096, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Christmas2018_Tee_065_M"):
		case joaat("MP_Christmas2018_Tee_065_F"):
			if (__LIB_0__::func_137(25097, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Christmas2018_Tee_066_M"):
		case joaat("MP_Christmas2018_Tee_066_F"):
			if (__LIB_0__::func_137(25098, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Christmas2018_Tee_067_M"):
		case joaat("MP_Christmas2018_Tee_067_F"):
			if (__LIB_0__::func_137(25099, -1))
			{
				return 1;
			}
			break;
	}
	switch (iParam2)
	{
		case joaat("MP_Battle_Clothing_000_M"):
		case joaat("MP_Battle_Clothing_000_F"):
			if (__LIB_0__::func_137(22108, -1) || __LIB_0__::func_137(25006, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Battle_Clothing_002_M"):
		case joaat("MP_Battle_Clothing_002_F"):
			if (__LIB_0__::func_137(9481, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Battle_Clothing_003_M"):
		case joaat("MP_Battle_Clothing_003_F"):
			if (__LIB_0__::func_137(9470, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Battle_Clothing_004_M"):
		case joaat("MP_Battle_Clothing_004_F"):
			if (__LIB_0__::func_137(9475, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Battle_Clothing_005_M"):
		case joaat("MP_Battle_Clothing_005_F"):
			if (__LIB_0__::func_137(9472, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Battle_Clothing_006_M"):
		case joaat("MP_Battle_Clothing_006_F"):
			if (__LIB_0__::func_137(9465, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Battle_Clothing_007_M"):
		case joaat("MP_Battle_Clothing_007_F"):
			if (__LIB_0__::func_137(9463, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Battle_Clothing_008_M"):
		case joaat("MP_Battle_Clothing_008_F"):
			if (__LIB_0__::func_137(9464, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Battle_Clothing_009_M"):
		case joaat("MP_Battle_Clothing_009_F"):
			if (__LIB_0__::func_137(9468, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Battle_Clothing_010_M"):
		case joaat("MP_Battle_Clothing_010_F"):
			if (__LIB_0__::func_137(9469, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Battle_Clothing_011_M"):
		case joaat("MP_Battle_Clothing_011_F"):
			if (__LIB_0__::func_137(9479, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Battle_Clothing_012_M"):
		case joaat("MP_Battle_Clothing_012_F"):
			if (__LIB_0__::func_137(9473, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Battle_Clothing_013_M"):
		case joaat("MP_Battle_Clothing_013_F"):
			if (__LIB_0__::func_137(9480, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Battle_Clothing_014_M"):
		case joaat("MP_Battle_Clothing_014_F"):
			if (__LIB_0__::func_137(9476, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Battle_Clothing_015_M"):
		case joaat("MP_Battle_Clothing_015_F"):
			if (__LIB_0__::func_137(9477, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Battle_Clothing_016_M"):
		case joaat("MP_Battle_Clothing_016_F"):
			if (__LIB_0__::func_137(9471, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Battle_Clothing_017_M"):
		case joaat("MP_Battle_Clothing_017_F"):
			if (__LIB_0__::func_137(9474, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Battle_Clothing_018_M"):
		case joaat("MP_Battle_Clothing_018_F"):
			if (__LIB_0__::func_137(9467, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Battle_Clothing_019_M"):
		case joaat("MP_Battle_Clothing_019_F"):
			if (__LIB_0__::func_137(9478, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Battle_Clothing_020_M"):
		case joaat("MP_Battle_Clothing_020_F"):
			if (__LIB_0__::func_137(9462, -1))
			{
				return 1;
			}
			if (iParam2 == joaat("MP_Battle_Clothing_020_F"))
			{
				if (__LIB_0__::func_137(27084, -1))
				{
					return 1;
				}
			}
			else if (__LIB_0__::func_137(27085, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Battle_Clothing_021_M"):
		case joaat("MP_Battle_Clothing_021_F"):
			if (__LIB_0__::func_137(9466, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Battle_Clothing_022_M"):
		case joaat("MP_Battle_Clothing_022_F"):
			if (__LIB_0__::func_137(22126, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Battle_Clothing_023_M"):
		case joaat("MP_Battle_Clothing_023_F"):
			if (__LIB_0__::func_137(22127, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Battle_Clothing_024_M"):
		case joaat("MP_Battle_Clothing_024_F"):
			if (__LIB_0__::func_137(22128, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Battle_Clothing_025_M"):
		case joaat("MP_Battle_Clothing_025_F"):
			if (__LIB_0__::func_137(22124, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Battle_Clothing_026_M"):
		case joaat("MP_Battle_Clothing_026_F"):
			if (__LIB_0__::func_137(22130, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Battle_Clothing_027_M"):
		case joaat("MP_Battle_Clothing_027_F"):
			if (__LIB_0__::func_137(22125, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Battle_Clothing_028_M"):
		case joaat("MP_Battle_Clothing_028_F"):
			if (__LIB_0__::func_137(22129, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Battle_Clothing_029_M"):
		case joaat("MP_Battle_Clothing_029_F"):
			if (__LIB_0__::func_137(22131, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Battle_Clothing_030_M"):
		case joaat("MP_Battle_Clothing_030_F"):
			if (__LIB_0__::func_137(22132, -1))
			{
				return 1;
			}
			break;
	}
	switch (iParam2)
	{
		case joaat("MP_Battle_Clothing_031_M"):
		case joaat("MP_Battle_Clothing_031_F"):
			if (__LIB_0__::func_137(22147, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Battle_Clothing_032_M"):
		case joaat("MP_Battle_Clothing_032_F"):
			if (__LIB_0__::func_137(22148, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Battle_Clothing_033_M"):
		case joaat("MP_Battle_Clothing_033_F"):
			if (__LIB_0__::func_137(22149, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Battle_Clothing_034_M"):
		case joaat("MP_Battle_Clothing_034_F"):
			if (__LIB_0__::func_137(22150, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Battle_Clothing_035_M"):
		case joaat("MP_Battle_Clothing_035_F"):
			if (__LIB_0__::func_137(22151, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Battle_Clothing_036_M"):
		case joaat("MP_Battle_Clothing_036_F"):
			if (__LIB_0__::func_137(22152, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Battle_Clothing_037_M"):
		case joaat("MP_Battle_Clothing_037_F"):
			if (__LIB_0__::func_137(22153, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Battle_Clothing_038_M"):
		case joaat("MP_Battle_Clothing_038_F"):
			if (__LIB_0__::func_137(22154, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Battle_Clothing_039_M"):
		case joaat("MP_Battle_Clothing_039_F"):
			if (__LIB_0__::func_137(22155, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Battle_Clothing_040_M"):
		case joaat("MP_Battle_Clothing_040_F"):
			if (__LIB_0__::func_137(22156, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Battle_Clothing_041_M"):
		case joaat("MP_Battle_Clothing_041_F"):
			if (__LIB_0__::func_137(22157, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Battle_Clothing_042_M"):
		case joaat("MP_Battle_Clothing_042_F"):
			if (__LIB_0__::func_137(22158, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Battle_Clothing_043_M"):
		case joaat("MP_Battle_Clothing_043_F"):
			if (__LIB_0__::func_137(22159, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Battle_Clothing_044_M"):
		case joaat("MP_Battle_Clothing_044_F"):
			if (__LIB_0__::func_137(22160, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Battle_Clothing_045_M"):
		case joaat("MP_Battle_Clothing_045_F"):
			if (__LIB_0__::func_137(22161, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Battle_Clothing_046_M"):
		case joaat("MP_Battle_Clothing_046_F"):
			if (__LIB_0__::func_137(22162, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Battle_Clothing_047_M"):
		case joaat("MP_Battle_Clothing_047_F"):
			if (__LIB_0__::func_137(22163, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Battle_Clothing_048_M"):
		case joaat("MP_Battle_Clothing_048_F"):
			if (__LIB_0__::func_137(22164, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Battle_Clothing_049_M"):
		case joaat("MP_Battle_Clothing_049_F"):
			if (__LIB_0__::func_137(22165, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Battle_Clothing_050_M"):
		case joaat("MP_Battle_Clothing_050_F"):
			if (__LIB_0__::func_137(22166, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Battle_Clothing_051_M"):
		case joaat("MP_Battle_Clothing_051_F"):
			if (__LIB_0__::func_137(22167, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Battle_Clothing_052_M"):
		case joaat("MP_Battle_Clothing_052_F"):
			if (__LIB_0__::func_137(22168, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Battle_Clothing_053_M"):
		case joaat("MP_Battle_Clothing_053_F"):
			if (__LIB_0__::func_137(22169, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Battle_Clothing_054_M"):
		case joaat("MP_Battle_Clothing_054_F"):
			if (__LIB_0__::func_137(22170, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Battle_Clothing_055_M"):
		case joaat("MP_Battle_Clothing_055_F"):
			if (__LIB_0__::func_137(22171, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Battle_Clothing_056_M"):
		case joaat("MP_Battle_Clothing_056_F"):
			if (__LIB_0__::func_137(22172, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Battle_Clothing_057_M"):
		case joaat("MP_Battle_Clothing_057_F"):
			if (__LIB_0__::func_137(22173, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Battle_Clothing_058_M"):
		case joaat("MP_Battle_Clothing_058_F"):
			if (__LIB_0__::func_137(22174, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Battle_Clothing_059_M"):
		case joaat("MP_Battle_Clothing_059_F"):
			if (__LIB_0__::func_137(22175, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Battle_Clothing_060_M"):
		case joaat("MP_Battle_Clothing_060_F"):
			if (__LIB_0__::func_137(22176, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Battle_Clothing_061_M"):
		case joaat("MP_Battle_Clothing_061_F"):
			if (__LIB_0__::func_137(22177, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Battle_Clothing_062_M"):
		case joaat("MP_Battle_Clothing_062_F"):
			if (__LIB_0__::func_137(22178, -1))
			{
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_LTS_M_OUTFIT_14"):
		case joaat("DLC_MP_LTS_F_OUTFIT_14"):
			if (__LIB_0__::func_137(18099, -1))
			{
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_X17_M_OUTFIT_MORPH_0"):
		case joaat("DLC_MP_X17_M_BERD_2_0"):
		case joaat("DLC_MP_X17_M_LEGS_1_0"):
		case joaat("DLC_MP_X17_M_FEET_1_0"):
		case joaat("DLC_MP_X17_M_JBIB_5_0"):
		case joaat("DLC_MP_X17_F_OUTFIT_MORPH_0"):
		case joaat("DLC_MP_X17_F_BERD_2_0"):
		case joaat("DLC_MP_X17_F_LEGS_1_0"):
		case joaat("DLC_MP_X17_F_FEET_1_0"):
		case joaat("DLC_MP_X17_F_JBIB_5_0"):
			if (__LIB_0__::func_137(18121, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_X17_M_OUTFIT_MORPH_1"):
		case joaat("DLC_MP_X17_M_BERD_2_1"):
		case joaat("DLC_MP_X17_M_LEGS_1_1"):
		case joaat("DLC_MP_X17_M_FEET_1_1"):
		case joaat("DLC_MP_X17_M_JBIB_5_1"):
		case joaat("DLC_MP_X17_F_OUTFIT_MORPH_1"):
		case joaat("DLC_MP_X17_F_BERD_2_1"):
		case joaat("DLC_MP_X17_F_LEGS_1_1"):
		case joaat("DLC_MP_X17_F_FEET_1_1"):
		case joaat("DLC_MP_X17_F_JBIB_5_1"):
			if (__LIB_0__::func_137(18122, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_X17_M_OUTFIT_MORPH_2"):
		case joaat("DLC_MP_X17_M_BERD_2_2"):
		case joaat("DLC_MP_X17_M_LEGS_1_2"):
		case joaat("DLC_MP_X17_M_FEET_1_2"):
		case joaat("DLC_MP_X17_M_JBIB_5_2"):
		case joaat("DLC_MP_X17_F_OUTFIT_MORPH_2"):
		case joaat("DLC_MP_X17_F_BERD_2_2"):
		case joaat("DLC_MP_X17_F_LEGS_1_2"):
		case joaat("DLC_MP_X17_F_FEET_1_2"):
		case joaat("DLC_MP_X17_F_JBIB_5_2"):
			if (__LIB_0__::func_137(18123, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_X17_M_OUTFIT_MORPH_3"):
		case joaat("DLC_MP_X17_M_BERD_2_3"):
		case joaat("DLC_MP_X17_M_LEGS_1_3"):
		case joaat("DLC_MP_X17_M_FEET_1_3"):
		case joaat("DLC_MP_X17_M_JBIB_5_3"):
		case joaat("DLC_MP_X17_F_OUTFIT_MORPH_3"):
		case joaat("DLC_MP_X17_F_BERD_2_3"):
		case joaat("DLC_MP_X17_F_LEGS_1_3"):
		case joaat("DLC_MP_X17_F_FEET_1_3"):
		case joaat("DLC_MP_X17_F_JBIB_5_3"):
			if (__LIB_0__::func_137(18124, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_X17_M_OUTFIT_MORPH_4"):
		case joaat("DLC_MP_X17_M_BERD_2_4"):
		case joaat("DLC_MP_X17_M_LEGS_1_4"):
		case joaat("DLC_MP_X17_M_FEET_1_4"):
		case joaat("DLC_MP_X17_M_JBIB_5_4"):
		case joaat("DLC_MP_X17_F_OUTFIT_MORPH_4"):
		case joaat("DLC_MP_X17_F_BERD_2_4"):
		case joaat("DLC_MP_X17_F_LEGS_1_4"):
		case joaat("DLC_MP_X17_F_FEET_1_4"):
		case joaat("DLC_MP_X17_F_JBIB_5_4"):
			if (__LIB_0__::func_137(18125, -1))
			{
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_X17_M_BERD_10_0"):
		case joaat("DLC_MP_X17_F_BERD_10_0"):
			if (__LIB_0__::func_137(18134, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_X17_M_BERD_10_1"):
		case joaat("DLC_MP_X17_F_BERD_10_1"):
			if (__LIB_0__::func_137(18135, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_X17_M_BERD_10_2"):
		case joaat("DLC_MP_X17_F_BERD_10_2"):
			if (__LIB_0__::func_137(18136, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_X17_M_BERD_10_3"):
		case joaat("DLC_MP_X17_F_BERD_10_3"):
			if (__LIB_0__::func_137(18137, -1))
			{
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_JBIB_19_0"):
		case joaat("DLC_MP_GR_F_JBIB_25_0"):
			if (__LIB_0__::func_137(15417, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_GR_M_JBIB_19_1"):
		case joaat("DLC_MP_GR_F_JBIB_25_1"):
			if (__LIB_0__::func_137(15418, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_GR_M_JBIB_20_0"):
		case joaat("DLC_MP_GR_F_JBIB_26_0"):
			if (__LIB_0__::func_137(15425, -1))
			{
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_DECL_5_0"):
		case joaat("DLC_MP_GR_F_DECL_5_0"):
			if (__LIB_0__::func_137(15405, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_GR_M_DECL_5_1"):
		case joaat("DLC_MP_GR_F_DECL_5_1"):
			if (__LIB_0__::func_137(15393, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_GR_M_DECL_5_2"):
		case joaat("DLC_MP_GR_F_DECL_5_2"):
			if (__LIB_0__::func_137(15409, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_GR_M_DECL_5_3"):
		case joaat("DLC_MP_GR_F_DECL_5_3"):
			if (__LIB_0__::func_137(15396, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_GR_M_DECL_5_4"):
		case joaat("DLC_MP_GR_F_DECL_5_4"):
			if (__LIB_0__::func_137(15412, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_GR_M_DECL_5_5"):
		case joaat("DLC_MP_GR_F_DECL_5_5"):
			if (__LIB_1__::func_342(209, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_GR_M_DECL_5_6"):
		case joaat("DLC_MP_GR_F_DECL_5_6"):
			if (__LIB_0__::func_137(15403, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_GR_M_DECL_5_7"):
		case joaat("DLC_MP_GR_F_DECL_5_7"):
			if (__LIB_1__::func_342(209, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_GR_M_DECL_5_8"):
		case joaat("DLC_MP_GR_F_DECL_5_8"):
			if (__LIB_0__::func_137(15389, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_GR_M_DECL_5_9"):
		case joaat("DLC_MP_GR_F_DECL_5_9"):
			if (__LIB_1__::func_342(209, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_GR_M_DECL_5_10"):
		case joaat("DLC_MP_GR_F_DECL_5_10"):
			if (__LIB_0__::func_137(15398, -1))
			{
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_PHEAD_6_0"):
		case joaat("DLC_MP_GR_F_PHEAD_6_0"):
		case joaat("DLC_MP_GR_M_PHEAD_7_0"):
		case joaat("DLC_MP_GR_F_PHEAD_7_0"):
			if (__LIB_0__::func_137(15400, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_GR_M_PHEAD_6_1"):
		case joaat("DLC_MP_GR_F_PHEAD_6_1"):
		case joaat("DLC_MP_GR_M_PHEAD_7_1"):
		case joaat("DLC_MP_GR_F_PHEAD_7_1"):
			if (__LIB_1__::func_342(209, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_GR_M_PHEAD_6_2"):
		case joaat("DLC_MP_GR_F_PHEAD_6_2"):
		case joaat("DLC_MP_GR_M_PHEAD_7_2"):
		case joaat("DLC_MP_GR_F_PHEAD_7_2"):
			if (__LIB_0__::func_137(15408, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_GR_M_PHEAD_6_3"):
		case joaat("DLC_MP_GR_F_PHEAD_6_3"):
		case joaat("DLC_MP_GR_M_PHEAD_7_3"):
		case joaat("DLC_MP_GR_F_PHEAD_7_3"):
			if (__LIB_1__::func_342(209, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_GR_M_PHEAD_6_4"):
		case joaat("DLC_MP_GR_F_PHEAD_6_4"):
		case joaat("DLC_MP_GR_M_PHEAD_7_4"):
		case joaat("DLC_MP_GR_F_PHEAD_7_4"):
			if (__LIB_0__::func_137(15411, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_GR_M_PHEAD_6_5"):
		case joaat("DLC_MP_GR_F_PHEAD_6_5"):
		case joaat("DLC_MP_GR_M_PHEAD_7_5"):
		case joaat("DLC_MP_GR_F_PHEAD_7_5"):
			if (__LIB_0__::func_137(15397, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_GR_M_PHEAD_6_6"):
		case joaat("DLC_MP_GR_F_PHEAD_6_6"):
		case joaat("DLC_MP_GR_M_PHEAD_7_6"):
		case joaat("DLC_MP_GR_F_PHEAD_7_6"):
			if (__LIB_0__::func_137(15413, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_GR_M_PHEAD_6_7"):
		case joaat("DLC_MP_GR_F_PHEAD_6_7"):
		case joaat("DLC_MP_GR_M_PHEAD_7_7"):
		case joaat("DLC_MP_GR_F_PHEAD_7_7"):
			if (__LIB_0__::func_137(15391, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_GR_M_PHEAD_6_8"):
		case joaat("DLC_MP_GR_F_PHEAD_6_8"):
		case joaat("DLC_MP_GR_M_PHEAD_7_8"):
		case joaat("DLC_MP_GR_F_PHEAD_7_8"):
			if (__LIB_0__::func_137(15388, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_GR_M_PHEAD_6_9"):
		case joaat("DLC_MP_GR_F_PHEAD_6_9"):
		case joaat("DLC_MP_GR_M_PHEAD_7_9"):
		case joaat("DLC_MP_GR_F_PHEAD_7_9"):
			if (__LIB_1__::func_342(209, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_GR_M_PHEAD_6_10"):
		case joaat("DLC_MP_GR_F_PHEAD_6_10"):
		case joaat("DLC_MP_GR_M_PHEAD_7_10"):
		case joaat("DLC_MP_GR_F_PHEAD_7_10"):
			if (__LIB_0__::func_137(15401, -1))
			{
				return 1;
			}
			break;
	}
	switch (iParam2)
	{
		case joaat("MP_Gunrunning_Award_000_M"):
		case joaat("MP_Gunrunning_Award_000_F"):
			if (__LIB_0__::func_137(15394, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Gunrunning_Award_001_M"):
		case joaat("MP_Gunrunning_Award_001_F"):
			if (__LIB_1__::func_342(209, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Gunrunning_Award_002_M"):
		case joaat("MP_Gunrunning_Award_002_F"):
			if (__LIB_0__::func_137(15406, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Gunrunning_Award_003_M"):
		case joaat("MP_Gunrunning_Award_003_F"):
			if (__LIB_0__::func_137(15395, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Gunrunning_Award_004_M"):
		case joaat("MP_Gunrunning_Award_004_F"):
			if (__LIB_1__::func_342(209, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Gunrunning_Award_005_M"):
		case joaat("MP_Gunrunning_Award_005_F"):
			if (__LIB_0__::func_137(15410, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Gunrunning_Award_006_M"):
		case joaat("MP_Gunrunning_Award_006_F"):
			if (__LIB_0__::func_137(15407, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Gunrunning_Award_007_M"):
		case joaat("MP_Gunrunning_Award_007_F"):
			if (__LIB_1__::func_342(209, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Gunrunning_Award_008_M"):
		case joaat("MP_Gunrunning_Award_008_F"):
			if (__LIB_1__::func_342(209, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Gunrunning_Award_009_M"):
		case joaat("MP_Gunrunning_Award_009_F"):
			if (__LIB_0__::func_137(15414, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Gunrunning_Award_010_M"):
		case joaat("MP_Gunrunning_Award_010_F"):
			if (__LIB_0__::func_137(15415, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Gunrunning_Award_011_M"):
		case joaat("MP_Gunrunning_Award_011_F"):
			if (__LIB_0__::func_137(15399, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Gunrunning_Award_012_M"):
		case joaat("MP_Gunrunning_Award_012_F"):
			if (__LIB_0__::func_137(15404, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Gunrunning_Award_013_M"):
		case joaat("MP_Gunrunning_Award_013_F"):
			if (__LIB_1__::func_342(209, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Gunrunning_Award_014_M"):
		case joaat("MP_Gunrunning_Award_014_F"):
			if (__LIB_0__::func_137(15392, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Gunrunning_Award_015_M"):
		case joaat("MP_Gunrunning_Award_015_F"):
			if (__LIB_0__::func_137(15390, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Gunrunning_Award_016_M"):
		case joaat("MP_Gunrunning_Award_016_F"):
			if (__LIB_0__::func_137(15402, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Gunrunning_Award_017_M"):
		case joaat("MP_Gunrunning_Award_017_F"):
			if (__LIB_0__::func_137(15416, -1))
			{
				return 1;
			}
			break;
		case joaat("MP_Gunrunning_Award_018_M"):
		case joaat("MP_Gunrunning_Award_018_F"):
			if (__LIB_1__::func_342(209, -1))
			{
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_IE_M_BERD_7_0"):
		case joaat("DLC_MP_IE_F_BERD_7_0"):
			if (__LIB_0__::func_137(27087, -1))
			{
				return 1;
			}
			if (__LIB_0__::func_137(9443, -1))
			{
				return 1;
			}
			break;
		case joaat("FM_Ind_M_Award_000"):
		case joaat("FM_Ind_F_Award_000"):
			if (__LIB_0__::func_137(9444, -1))
			{
				return 1;
			}
			break;
	}
	switch (iParam1)
	{
		case joaat("mpLowrider2_overlays"):
			switch (iParam2)
			{
				case joaat("MP_Hntr_006_F"):
				case joaat("MP_Hntr_006_M"):
					if (__LIB_0__::func_137(27074, -1))
					{
						return 1;
					}
					break;
				case joaat("MP_Dense_007_F"):
					if (__LIB_0__::func_137(27055, -1))
					{
						return 1;
					}
					break;
				case joaat("MP_Hntr_001_F"):
				case joaat("MP_Hntr_001_M"):
					if (__LIB_0__::func_137(27052, -1))
					{
						return 1;
					}
					break;
			}
			break;
		case joaat("mpHalloween_overlays"):
			switch (iParam2)
			{
				case joaat("HW_Tee_010_F"):
				case joaat("HW_Tee_010_M"):
					if (__LIB_0__::func_137(27079, -1))
					{
						return 1;
					}
					break;
			}
			break;
		case joaat("mpLowrider_overlays"):
			switch (iParam2)
			{
				case joaat("MP_Bennys_001_F"):
				case joaat("MP_Bennys_001_M"):
					if (__LIB_0__::func_137(27068, -1))
					{
						return 1;
					}
					break;
			}
			break;
		case joaat("mpHeist_overlays"):
			switch (iParam2)
			{
				case joaat("MP_Award_M_Tshirt_004"):
				case joaat("MP_Award_F_Tshirt_004"):
				case joaat("MP_Award_M_Tshirt_013"):
					if (iParam2 == joaat("MP_Award_M_Tshirt_004") || iParam2 == joaat("MP_Award_F_Tshirt_004"))
					{
						if (__LIB_0__::func_137(27082, -1))
						{
							return 1;
						}
					}
					else if (iParam2 == joaat("MP_Award_M_Tshirt_013"))
					{
						if (__LIB_0__::func_137(27084, -1))
						{
							return 1;
						}
					}
					break;
				case joaat("MP_Award_F_Tshirt_013"):
					if (__LIB_0__::func_137(27083, -1))
					{
						return 1;
					}
					break;
			}
			break;
		case joaat("mpBiker_overlays"):
			switch (iParam2)
			{
				case joaat("MP_Biker_Tee_022_M"):
				case joaat("MP_Biker_Tee_022_F"):
					if (__LIB_0__::func_137(9366, -1))
					{
						return 1;
					}
					break;
				case joaat("MP_Biker_Tee_023_M"):
				case joaat("MP_Biker_Tee_023_F"):
					if (__LIB_0__::func_137(9367, -1))
					{
						return 1;
					}
					break;
				case joaat("MP_Biker_Tee_024_M"):
				case joaat("MP_Biker_Tee_024_F"):
					if (__LIB_0__::func_137(9369, -1))
					{
						return 1;
					}
					break;
				case joaat("MP_Biker_Tee_025_M"):
				case joaat("MP_Biker_Tee_025_F"):
					if (__LIB_0__::func_137(9368, -1))
					{
						return 1;
					}
					break;
				case joaat("MP_Biker_Tee_047_M"):
				case joaat("MP_Biker_Tee_047_F"):
					if (__LIB_0__::func_137(9365, -1))
					{
						return 1;
					}
					break;
				case joaat("MP_Biker_Tee_048_M"):
				case joaat("MP_Biker_Tee_048_F"):
					if (__LIB_0__::func_137(9364, -1))
					{
						return 1;
					}
					break;
				case joaat("MP_Biker_Tee_049_M"):
				case joaat("MP_Biker_Tee_049_F"):
					if (__LIB_0__::func_137(27078, -1))
					{
						return 1;
					}
					if (__LIB_0__::func_137(9363, -1))
					{
						return 1;
					}
					break;
				case joaat("MP_Biker_Tee_050_M"):
				case joaat("MP_Biker_Tee_050_F"):
					if (__LIB_0__::func_137(9362, -1))
					{
						return 1;
					}
					break;
				case joaat("MP_Biker_Tee_051_M"):
				case joaat("MP_Biker_Tee_051_F"):
					if (__LIB_0__::func_137(9370, -1))
					{
						return 1;
					}
					break;
				case joaat("MP_Biker_Tee_052_M"):
				case joaat("MP_Biker_Tee_052_F"):
					if (__LIB_0__::func_137(9371, -1))
					{
						return 1;
					}
					break;
				case joaat("MP_Biker_Tee_053_M"):
				case joaat("MP_Biker_Tee_053_F"):
					if (__LIB_0__::func_137(9372, -1))
					{
						return 1;
					}
					break;
				case joaat("MP_Biker_Tee_054_M"):
				case joaat("MP_Biker_Tee_054_F"):
					if (__LIB_0__::func_137(9373, -1))
					{
						return 1;
					}
					break;
				case joaat("MP_Biker_Tee_055_M"):
				case joaat("MP_Biker_Tee_055_F"):
					if (__LIB_0__::func_137(9374, -1))
					{
						return 1;
					}
					break;
				case joaat("MP_Biker_Award_000_M"):
				case joaat("MP_Biker_Award_000_F"):
					if (__LIB_0__::func_137(9384, -1))
					{
						return 1;
					}
					break;
				case joaat("MP_Biker_Award_001_M"):
				case joaat("MP_Biker_Award_001_F"):
					if (__LIB_0__::func_137(9385, -1))
					{
						return 1;
					}
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_BIKER_M_DECL_0_0"):
		case joaat("DLC_MP_BIKER_F_DECL_0_0"):
			if (__LIB_0__::func_137(9375, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_BIKER_M_DECL_0_1"):
		case joaat("DLC_MP_BIKER_F_DECL_0_1"):
			if (__LIB_0__::func_137(9376, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_BIKER_M_DECL_0_2"):
		case joaat("DLC_MP_BIKER_F_DECL_0_2"):
			if (__LIB_0__::func_137(9377, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_BIKER_M_DECL_0_3"):
		case joaat("DLC_MP_BIKER_F_DECL_0_3"):
			if (__LIB_0__::func_137(9378, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_BIKER_M_DECL_0_4"):
		case joaat("DLC_MP_BIKER_F_DECL_0_4"):
			if (__LIB_0__::func_137(9379, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_BIKER_M_DECL_0_5"):
		case joaat("DLC_MP_BIKER_F_DECL_0_5"):
			if (__LIB_0__::func_137(27076, -1))
			{
				return 1;
			}
			if (__LIB_0__::func_137(9380, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_BIKER_M_DECL_0_6"):
		case joaat("DLC_MP_BIKER_F_DECL_0_6"):
			if (__LIB_0__::func_137(9381, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_BIKER_M_DECL_0_7"):
		case joaat("DLC_MP_BIKER_F_DECL_0_7"):
			if (__LIB_0__::func_137(9382, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_BIKER_M_DECL_0_8"):
		case joaat("DLC_MP_BIKER_F_DECL_0_8"):
			if (__LIB_0__::func_137(9383, -1))
			{
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_0"):
		case joaat("DLC_MP_STUNT_M_PHEAD_11_0"):
		case joaat("DLC_MP_STUNT_M_PHEAD_12_0"):
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_0"):
		case joaat("DLC_MP_STUNT_F_PHEAD_11_0"):
		case joaat("DLC_MP_STUNT_F_PHEAD_12_0"):
			if (__LIB_0__::func_137(7595, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_1"):
		case joaat("DLC_MP_STUNT_M_PHEAD_11_1"):
		case joaat("DLC_MP_STUNT_M_PHEAD_12_1"):
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_1"):
		case joaat("DLC_MP_STUNT_F_PHEAD_11_1"):
		case joaat("DLC_MP_STUNT_F_PHEAD_12_1"):
			if (__LIB_0__::func_137(26977, -1))
			{
				return 1;
			}
			if (__LIB_0__::func_137(7596, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_2"):
		case joaat("DLC_MP_STUNT_M_PHEAD_11_2"):
		case joaat("DLC_MP_STUNT_M_PHEAD_12_2"):
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_2"):
		case joaat("DLC_MP_STUNT_F_PHEAD_11_2"):
		case joaat("DLC_MP_STUNT_F_PHEAD_12_2"):
			if (__LIB_0__::func_137(7597, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_3"):
		case joaat("DLC_MP_STUNT_M_PHEAD_11_3"):
		case joaat("DLC_MP_STUNT_M_PHEAD_12_3"):
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_3"):
		case joaat("DLC_MP_STUNT_F_PHEAD_11_3"):
		case joaat("DLC_MP_STUNT_F_PHEAD_12_3"):
			if (__LIB_0__::func_137(7599, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_4"):
		case joaat("DLC_MP_STUNT_M_PHEAD_11_4"):
		case joaat("DLC_MP_STUNT_M_PHEAD_12_4"):
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_4"):
		case joaat("DLC_MP_STUNT_F_PHEAD_11_4"):
		case joaat("DLC_MP_STUNT_F_PHEAD_12_4"):
			if (__LIB_0__::func_137(7600, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_5"):
		case joaat("DLC_MP_STUNT_M_PHEAD_13_0"):
		case joaat("DLC_MP_STUNT_M_PHEAD_14_0"):
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_5"):
		case joaat("DLC_MP_STUNT_F_PHEAD_13_0"):
		case joaat("DLC_MP_STUNT_F_PHEAD_14_0"):
			if (__LIB_0__::func_137(7598, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_STUNT_M_OUTFIT_E_6"):
		case joaat("DLC_MP_STUNT_M_PHEAD_13_1"):
		case joaat("DLC_MP_STUNT_M_PHEAD_14_1"):
		case joaat("DLC_MP_STUNT_F_OUTFIT_E_6"):
		case joaat("DLC_MP_STUNT_F_PHEAD_13_1"):
		case joaat("DLC_MP_STUNT_F_PHEAD_14_1"):
			if (__LIB_0__::func_137(7601, -1))
			{
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_STUNT_F_TORSO_0_0"):
		case joaat("DLC_MP_STUNT_F_TORSO_0_1"):
		case joaat("DLC_MP_STUNT_F_TORSO_0_2"):
		case joaat("DLC_MP_STUNT_F_TORSO_0_3"):
		case joaat("DLC_MP_STUNT_F_TORSO_0_4"):
		case joaat("DLC_MP_STUNT_F_TORSO_0_5"):
		case joaat("DLC_MP_STUNT_F_TORSO_0_6"):
		case joaat("DLC_MP_STUNT_F_TORSO_0_7"):
		case joaat("DLC_MP_STUNT_F_TORSO_1_0"):
		case joaat("DLC_MP_STUNT_F_TORSO_1_1"):
		case joaat("DLC_MP_STUNT_F_TORSO_1_2"):
		case joaat("DLC_MP_STUNT_F_TORSO_1_3"):
		case joaat("DLC_MP_STUNT_F_TORSO_1_4"):
		case joaat("DLC_MP_STUNT_F_TORSO_1_5"):
		case joaat("DLC_MP_STUNT_F_TORSO_1_6"):
		case joaat("DLC_MP_STUNT_F_TORSO_1_7"):
		case joaat("DLC_MP_STUNT_F_TORSO_1_8"):
		case joaat("DLC_MP_STUNT_F_TORSO_1_9"):
		case joaat("DLC_MP_STUNT_F_TORSO_1_10"):
		case joaat("DLC_MP_STUNT_F_TORSO_1_11"):
		case joaat("DLC_MP_STUNT_F_TORSO_1_12"):
		case joaat("DLC_MP_STUNT_F_TORSO_1_13"):
		case joaat("DLC_MP_STUNT_F_TORSO_1_14"):
		case joaat("DLC_MP_STUNT_F_TORSO_1_15"):
		case joaat("DLC_MP_STUNT_M_TORSO_0_0"):
		case joaat("DLC_MP_STUNT_M_TORSO_0_1"):
		case joaat("DLC_MP_STUNT_M_TORSO_0_2"):
		case joaat("DLC_MP_STUNT_M_TORSO_0_3"):
		case joaat("DLC_MP_STUNT_M_TORSO_0_4"):
		case joaat("DLC_MP_STUNT_M_TORSO_0_5"):
		case joaat("DLC_MP_STUNT_M_TORSO_0_6"):
		case joaat("DLC_MP_STUNT_M_TORSO_0_7"):
		case joaat("DLC_MP_STUNT_M_TORSO_1_0"):
		case joaat("DLC_MP_STUNT_M_TORSO_1_1"):
		case joaat("DLC_MP_STUNT_M_TORSO_1_2"):
		case joaat("DLC_MP_STUNT_M_TORSO_1_3"):
		case joaat("DLC_MP_STUNT_M_TORSO_1_4"):
		case joaat("DLC_MP_STUNT_M_TORSO_1_5"):
		case joaat("DLC_MP_STUNT_M_TORSO_1_6"):
		case joaat("DLC_MP_STUNT_M_TORSO_1_7"):
		case joaat("DLC_MP_STUNT_M_TORSO_1_8"):
		case joaat("DLC_MP_STUNT_M_TORSO_1_9"):
		case joaat("DLC_MP_STUNT_M_TORSO_1_10"):
		case joaat("DLC_MP_STUNT_M_TORSO_1_11"):
		case joaat("DLC_MP_STUNT_M_TORSO_1_12"):
		case joaat("DLC_MP_STUNT_M_TORSO_1_13"):
		case joaat("DLC_MP_STUNT_M_TORSO_1_14"):
		case joaat("DLC_MP_STUNT_M_TORSO_1_15"):
			return 1;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_APA_M_FEET_1_0"):
		case joaat("DLC_MP_APA_F_FEET_1_0"):
			return 1;
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_EXEC_F_JBIB_15_0"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_0"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_0"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_0"):
			if (__LIB_0__::func_137(7482, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_EXEC_F_JBIB_15_1"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_1"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_1"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_1"):
			if (__LIB_0__::func_137(7483, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_EXEC_F_JBIB_15_2"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_2"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_2"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_2"):
			if (__LIB_0__::func_137(7484, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_EXEC_F_JBIB_15_3"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_3"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_3"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_3"):
			if (__LIB_0__::func_137(7485, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_EXEC_F_JBIB_15_4"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_4"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_4"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_4"):
			if (__LIB_0__::func_137(7486, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_EXEC_F_JBIB_15_5"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_5"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_5"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_5"):
			if (__LIB_0__::func_137(7487, -1) || __LIB_0__::func_137(9441, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_EXEC_F_JBIB_15_6"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_6"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_6"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_6"):
			if (__LIB_0__::func_137(7488, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_EXEC_F_JBIB_15_7"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_7"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_7"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_7"):
			if (__LIB_0__::func_137(7489, -1) || __LIB_0__::func_137(9442, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_EXEC_F_JBIB_15_8"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_8"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_8"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_8"):
			if (__LIB_0__::func_137(7490, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_EXEC_F_JBIB_15_9"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_9"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_9"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_9"):
			if (__LIB_0__::func_137(7491, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_EXEC_F_JBIB_15_10"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_10"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_10"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_10"):
			if (__LIB_0__::func_137(7492, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_EXEC_F_JBIB_15_11"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_11"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_11"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_11"):
			if (__LIB_0__::func_137(7493, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_EXEC_F_JBIB_15_12"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_12"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_12"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_12"):
			if (__LIB_0__::func_137(7494, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_EXEC_F_JBIB_15_13"):
		case joaat("DLC_MP_EXEC_F_LEGS_1_13"):
		case joaat("DLC_MP_EXEC_M_JBIB_15_13"):
		case joaat("DLC_MP_EXEC_M_LEGS_1_13"):
			if (__LIB_0__::func_137(7495, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_EXEC_F_JBIB_16_0"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_0"):
			if (__LIB_0__::func_137(7515, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_EXEC_F_JBIB_16_1"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_1"):
			if (__LIB_0__::func_137(7516, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_EXEC_F_JBIB_16_2"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_2"):
			if (__LIB_0__::func_137(7517, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_EXEC_F_JBIB_16_3"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_3"):
			if (__LIB_0__::func_137(7518, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_EXEC_F_JBIB_16_4"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_4"):
			if (__LIB_0__::func_137(7519, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_EXEC_F_JBIB_16_5"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_5"):
			if (__LIB_0__::func_137(7520, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_EXEC_F_JBIB_16_6"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_6"):
			if (__LIB_0__::func_137(7521, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_EXEC_F_JBIB_16_7"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_7"):
			if (__LIB_0__::func_137(7522, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_EXEC_F_JBIB_16_8"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_8"):
			if (__LIB_0__::func_137(7523, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_EXEC_F_JBIB_16_9"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_9"):
			if (__LIB_0__::func_137(7524, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_EXEC_F_JBIB_16_10"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_10"):
			if (__LIB_0__::func_137(7525, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_EXEC_F_JBIB_16_11"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_11"):
			if (__LIB_0__::func_137(7526, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_EXEC_F_JBIB_16_12"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_12"):
			if (__LIB_0__::func_137(7527, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_EXEC_F_JBIB_16_13"):
		case joaat("DLC_MP_EXEC_M_JBIB_16_13"):
			if (__LIB_0__::func_137(7528, -1))
			{
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_LOW_F_PHEAD_1_0"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_0"):
			if (__LIB_0__::func_137(4247, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_LOW_F_PHEAD_1_1"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_1"):
			if (__LIB_0__::func_137(4248, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_LOW_F_PHEAD_1_2"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_2"):
			if (__LIB_0__::func_137(4249, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_LOW_F_PHEAD_1_3"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_3"):
			if (__LIB_0__::func_137(4250, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_LOW_F_PHEAD_1_4"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_4"):
			if (__LIB_0__::func_137(4251, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_LOW_F_PHEAD_1_5"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_5"):
			if (__LIB_0__::func_137(4252, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_LOW_F_PHEAD_1_6"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_6"):
			if (__LIB_0__::func_137(4253, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_LOW_F_PHEAD_1_7"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_7"):
			if (__LIB_0__::func_137(4254, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_LOW_F_PHEAD_1_8"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_8"):
			if (__LIB_0__::func_137(4255, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_LOW_F_PHEAD_1_9"):
		case joaat("DLC_MP_LOW_M_PHEAD_1_9"):
			if (__LIB_0__::func_137(4256, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_XMAS3_F_JBIB_1_0"):
		case joaat("DLC_MP_XMAS3_M_JBIB_1_0"):
			if (__LIB_0__::func_137(110, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_XMAS3_F_JBIB_1_1"):
		case joaat("DLC_MP_XMAS3_M_JBIB_1_1"):
			if (__LIB_0__::func_137(111, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_XMAS3_F_JBIB_1_2"):
		case joaat("DLC_MP_XMAS3_M_JBIB_1_2"):
			if (__LIB_0__::func_137(112, -1))
			{
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_XMAS2_F_PHEAD_4_0"):
		case joaat("DLC_MP_XMAS2_F_PHEAD_5_0"):
		case joaat("DLC_MP_XMAS2_M_PHEAD_4_0"):
		case joaat("DLC_MP_XMAS2_M_PHEAD_5_0"):
			if (__LIB_0__::func_137(4333, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_XMAS2_F_PHEAD_4_3"):
		case joaat("DLC_MP_XMAS2_F_PHEAD_5_3"):
		case joaat("DLC_MP_XMAS2_M_PHEAD_4_3"):
		case joaat("DLC_MP_XMAS2_M_PHEAD_5_3"):
			if (__LIB_0__::func_137(4334, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_XMAS3_M_BERD_10_0"):
		case joaat("DLC_MP_XMAS3_F_BERD_10_0"):
			if (__LIB_0__::func_137(4335, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_XMAS2_M_BERD_1_0"):
		case joaat("DLC_MP_XMAS2_F_BERD_1_0"):
			if (__LIB_0__::func_137(3750, -1))
			{
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_HEIST_F_BERD_11_0"):
			if (((__LIB_2__::func_97(joaat("DLC_MP_HEIST_F_OUTFIT_18"), 1, 1, 1, -1) || __LIB_2__::func_97(joaat("DLC_MP_HEIST_F_OUTFIT_19"), 1, 1, 1, -1)) || __LIB_2__::func_97(joaat("DLC_MP_HEIST_F_OUTFIT_20"), 1, 1, 1, -1)) || __LIB_2__::func_97(joaat("DLC_MP_HEIST_F_OUTFIT_21"), 1, 1, 1, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_HEIST_M_BERD_11_0"):
			if (((__LIB_2__::func_97(joaat("DLC_MP_HEIST_M_OUTFIT_18"), 1, 1, 1, -1) || __LIB_2__::func_97(joaat("DLC_MP_HEIST_M_OUTFIT_19"), 1, 1, 1, -1)) || __LIB_2__::func_97(joaat("DLC_MP_HEIST_M_OUTFIT_20"), 1, 1, 1, -1)) || __LIB_2__::func_97(joaat("DLC_MP_HEIST_M_OUTFIT_21"), 1, 1, 1, -1))
			{
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_IND_F_PHEAD_6_0"):
		case joaat("DLC_MP_IND_M_PHEAD_6_0"):
			if (__LIB_0__::func_137(3594, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_IND_F_PHEAD_6_1"):
		case joaat("DLC_MP_IND_M_PHEAD_6_1"):
			if (__LIB_0__::func_137(3595, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_IND_F_PHEAD_6_2"):
		case joaat("DLC_MP_IND_M_PHEAD_6_2"):
			if (iParam0 == joaat("DLC_MP_IND_F_PHEAD_6_2"))
			{
				if (__LIB_0__::func_137(27085, -1))
				{
					return 1;
				}
			}
			if (iParam0 == joaat("DLC_MP_IND_M_PHEAD_6_2"))
			{
				if (__LIB_0__::func_137(27086, -1))
				{
					return 1;
				}
			}
			if (__LIB_0__::func_137(3596, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_IND_F_PHEAD_6_3"):
		case joaat("DLC_MP_IND_M_PHEAD_6_3"):
			if (__LIB_0__::func_137(3597, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_IND_F_PHEAD_6_4"):
		case joaat("DLC_MP_IND_M_PHEAD_6_4"):
			if (__LIB_0__::func_137(3598, -1))
			{
				return 1;
			}
			break;
		case joaat("DLC_MP_IND_F_PHEAD_6_5"):
		case joaat("DLC_MP_IND_M_PHEAD_6_5"):
			if (__LIB_0__::func_137(3599, -1))
			{
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_LTS_M_BERD_2_0"):
		case joaat("DLC_MP_LTS_F_BERD_2_0"):
			if (__LIB_0__::func_137(3616, -1))
			{
				return 1;
			}
			break;
	}
	switch (iParam1)
	{
		case joaat("mpLTS_overlays"):
			switch (iParam2)
			{
				case joaat("FM_LTS_M_Tshirt_000"):
				case joaat("FM_LTS_F_Tshirt_000"):
					if (__LIB_0__::func_137(3615, -1) || __LIB_0__::func_137(9438, -1))
					{
						return 1;
					}
					break;
			}
			break;
		case joaat("mpHipster_overlays"):
			switch (iParam2)
			{
				case joaat("FM_Hip_F_Tshirt_009"):
					if (__LIB_0__::func_137(27072, -1))
					{
						return 1;
					}
					break;
				case joaat("FM_Hip_F_Tshirt_010"):
					if (__LIB_0__::func_137(27057, -1))
					{
						return 1;
					}
					break;
				case joaat("FM_Hip_M_Retro_010"):
				case joaat("FM_Hip_F_Retro_010"):
					if (__LIB_1__::func_342(152, -1) || __LIB_0__::func_137(9440, -1))
					{
						return 1;
					}
					break;
				case joaat("FM_Hip_M_Retro_003"):
				case joaat("FM_Hip_F_Retro_003"):
					if (__LIB_1__::func_342(151, -1) || __LIB_0__::func_137(9430, -1))
					{
						return 1;
					}
					break;
				case joaat("FM_Hip_M_Retro_000"):
				case joaat("FM_Hip_F_Retro_000"):
					if (__LIB_0__::func_137(9426, -1))
					{
						return 1;
					}
					break;
				case joaat("FM_Hip_M_Retro_001"):
				case joaat("FM_Hip_F_Retro_001"):
					if (__LIB_0__::func_137(9427, -1))
					{
						return 1;
					}
					break;
				case joaat("FM_Hip_M_Retro_002"):
				case joaat("FM_Hip_F_Retro_002"):
					if (__LIB_0__::func_137(9428, -1))
					{
						return 1;
					}
					break;
				case joaat("FM_Hip_M_Retro_004"):
				case joaat("FM_Hip_F_Retro_004"):
					if (__LIB_0__::func_137(9431, -1))
					{
						return 1;
					}
					break;
				case joaat("FM_Hip_M_Retro_005"):
				case joaat("FM_Hip_F_Retro_005"):
					if (__LIB_0__::func_137(9432, -1))
					{
						return 1;
					}
					break;
				case joaat("FM_Hip_M_Retro_006"):
				case joaat("FM_Hip_F_Retro_006"):
					if (__LIB_0__::func_137(9433, -1))
					{
						return 1;
					}
					break;
				case joaat("FM_Hip_M_Retro_007"):
				case joaat("FM_Hip_F_Retro_007"):
					if (__LIB_0__::func_137(9439, -1))
					{
						return 1;
					}
					break;
				case joaat("FM_Hip_M_Retro_008"):
				case joaat("FM_Hip_F_Retro_008"):
					if (__LIB_0__::func_137(9434, -1))
					{
						return 1;
					}
					break;
				case joaat("FM_Hip_M_Retro_009"):
				case joaat("FM_Hip_F_Retro_009"):
					if (__LIB_0__::func_137(9435, -1))
					{
						return 1;
					}
					break;
				case joaat("FM_Hip_M_Retro_011"):
				case joaat("FM_Hip_F_Retro_011"):
					if (__LIB_0__::func_137(9436, -1))
					{
						return 1;
					}
					break;
				case joaat("FM_Hip_M_Retro_012"):
				case joaat("FM_Hip_F_Retro_012"):
					if (__LIB_0__::func_137(9429, -1))
					{
						return 1;
					}
					break;
				case joaat("FM_Hip_M_Retro_013"):
				case joaat("FM_Hip_F_Retro_013"):
					if (__LIB_0__::func_137(9437, -1))
					{
						return 1;
					}
					break;
			}
			break;
		case joaat("mpIndependence_overlays"):
			switch (iParam2)
			{
				case joaat("FM_Ind_M_Award_000"):
				case joaat("FM_Ind_F_Award_000"):
					if (__LIB_0__::func_137(3593, -1))
					{
						return 1;
					}
					break;
			}
			break;
	}
	return 0;
}

var func_1201(int iParam0, int iParam1, int iParam2)//Position - 0xC5762
{
	Global_78130[1 /*14*/] = { __LIB_6__::func_38(iParam0, iParam1, iParam2, -1) };
	return BitTest(Global_78130[1 /*14*/].f_6, 4);
}

int func_1202(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0xC578A
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	var uVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	var uVar12;
	var uVar13;
	int iVar14;
	int iVar15;
	Global_78130[1 /*14*/] = { __LIB_6__::func_38(iParam0, iParam1, iParam2, -1) };
	if (BitTest(Global_78130[1 /*14*/].f_6, 0))
	{
		if (BitTest(Global_78130[1 /*14*/].f_6, 6))
		{
			if (iParam1 == 12)
			{
				if (bParam3)
				{
					__LIB_2__::func_411(Global_2883588, 1, 1, 1, -1);
				}
				else
				{
					__LIB_11__::func_499(Global_2883588, 1, 1, 1, -1);
				}
			}
			else if (iParam1 == 13)
			{
			}
			else if (iParam1 == 14)
			{
				if (bParam3)
				{
					__LIB_2__::func_411(Global_2883588, 1, 1, 1, -1);
				}
				else
				{
					__LIB_11__::func_499(Global_2883588, 1, 1, 1, -1);
				}
			}
			else if (bParam3)
			{
				__LIB_2__::func_411(Global_2883588, 1, 1, 1, -1);
			}
			else
			{
				__LIB_11__::func_499(Global_2883588, 1, 1, 1, -1);
			}
			if (iParam4 == 1 && bParam3 == 1)
			{
				iVar0 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(Global_2883588);
				iVar1 = 0;
				while (iVar1 < iVar0)
				{
					FILES::GET_VARIANT_COMPONENT(Global_2883588, iVar1, &iVar2, &uVar3, &iVar4);
					if (iVar2 != 0 && iVar2 != joaat("0"))
					{
						__LIB_2__::func_411(iVar2, 1, 1, 1, -1);
					}
					else
					{
						func_1202(iParam0, __LIB_0__::func_33(iVar4), uVar3, 1, 0);
					}
					iVar1++;
				}
			}
			if (iParam1 == 12)
			{
				uVar7 = { __LIB_0__::func_459(iParam0, iParam2) };
				iVar5 = 0;
				while (iVar5 <= 14)
				{
					if ((uVar7[iVar5] != -99 && iVar5 != 12) && iVar5 != 14)
					{
						if (iVar5 != 13)
						{
							func_1202(iParam0, iVar5, uVar7[iVar5], 1, 1);
							func_1204(iParam0, iVar5, uVar7[iVar5], 1, 0);
						}
						else
						{
							uVar8 = { __LIB_0__::func_466(iParam0, uVar7[iVar5]) };
							iVar6 = 0;
							while (iVar6 <= 8)
							{
								if (uVar8[iVar6] >= 10)
								{
									func_1202(iParam0, 14, uVar8[iVar6], 1, 1);
									func_1204(iParam0, 14, uVar8[iVar6], 1, 0);
								}
								iVar6++;
							}
						}
					}
					iVar5++;
				}
			}
		}
		else
		{
			if (iParam1 != 5)
			{
				iVar9 = __LIB_1__::func_360(__LIB_0__::func_37(iParam1, Global_78130[1 /*14*/].f_2), Global_78127, 0);
				if (bParam3)
				{
					MISC::SET_BIT(&iVar9, Global_78130[1 /*14*/].f_1);
				}
				else
				{
					MISC::CLEAR_BIT(&iVar9, Global_78130[1 /*14*/].f_1);
				}
				__LIB_1__::func_354(__LIB_0__::func_37(iParam1, Global_78130[1 /*14*/].f_2), iVar9, Global_78127, 1, 0);
			}
			if (iParam1 == 12)
			{
				uVar12 = { __LIB_0__::func_459(iParam0, iParam2) };
				iVar10 = 0;
				while (iVar10 <= 14)
				{
					if ((uVar12[iVar10] != -99 && iVar10 != 12) && iVar10 != 14)
					{
						if (iVar10 != 13)
						{
							func_1202(iParam0, iVar10, uVar12[iVar10], 1, 1);
							func_1204(iParam0, iVar10, uVar12[iVar10], 1, 0);
						}
						else
						{
							uVar13 = { __LIB_0__::func_466(iParam0, uVar12[iVar10]) };
							iVar11 = 0;
							while (iVar11 <= 8)
							{
								func_1202(iParam0, 14, uVar13[iVar11], 1, 1);
								func_1204(iParam0, 14, uVar13[iVar11], 1, 0);
								iVar11++;
							}
						}
					}
					iVar10++;
				}
			}
			if (iParam4 == 1 && bParam3 == 1)
			{
				if (iParam0 == joaat("MP_M_Freemode_01"))
				{
					if (iParam1 == 14)
					{
						if (iParam2 >= 83 && iParam2 <= 90)
						{
							iVar14 = (75 + Global_78130[1 /*14*/].f_4);
							func_1202(iParam0, 14, iVar14, 1, 0);
						}
						else if (iParam2 >= 75 && iParam2 <= 82)
						{
							iVar14 = (83 + Global_78130[1 /*14*/].f_4);
							func_1202(iParam0, 14, iVar14, 1, 0);
						}
					}
					else if (iParam1 == 8)
					{
						if (iParam2 >= 48 && iParam2 <= 63)
						{
							iVar14 = (64 + Global_78130[1 /*14*/].f_4);
							func_1202(iParam0, 8, iVar14, 1, 0);
						}
						else if (iParam2 >= 64 && iParam2 <= 79)
						{
							iVar14 = (48 + Global_78130[1 /*14*/].f_4);
							func_1202(iParam0, 8, iVar14, 1, 0);
						}
						else if (iParam2 >= 96 && iParam2 <= 111)
						{
							iVar14 = (112 + Global_78130[1 /*14*/].f_4);
							func_1202(iParam0, 8, iVar14, 1, 0);
						}
						else if (iParam2 >= 112 && iParam2 <= 127)
						{
							iVar14 = (96 + Global_78130[1 /*14*/].f_4);
							func_1202(iParam0, 8, iVar14, 1, 0);
						}
						else if (iParam2 >= 176 && iParam2 <= 191)
						{
							iVar14 = (160 + Global_78130[1 /*14*/].f_4);
							func_1202(iParam0, 8, iVar14, 1, 0);
						}
						else if (iParam2 >= 160 && iParam2 <= 175)
						{
							iVar14 = (176 + Global_78130[1 /*14*/].f_4);
							func_1202(iParam0, 8, iVar14, 1, 0);
						}
						else if (iParam2 >= 32 && iParam2 <= 47)
						{
							iVar14 = (0 + Global_78130[1 /*14*/].f_4);
							func_1202(iParam0, 11, iVar14, 1, 0);
						}
						else if (iParam2 >= 224 && iParam2 <= 239)
						{
							iVar14 = (16 + Global_78130[1 /*14*/].f_4);
							func_1202(iParam0, 11, iVar14, 1, 0);
						}
					}
					else if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar14 = (32 + Global_78130[1 /*14*/].f_4);
							func_1202(iParam0, 8, iVar14, 1, 0);
						}
						else if (iParam2 >= 16 && iParam2 <= 31)
						{
							iVar14 = (224 + Global_78130[1 /*14*/].f_4);
							func_1202(iParam0, 8, iVar14, 1, 0);
						}
						else if (iParam2 >= 220 && iParam2 <= 235)
						{
							switch (iParam2)
							{
								case 220:
									func_1202(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_0"), 8, 3), 1, 0);
									func_1202(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_0"), 8, 3), 1, 0);
									break;
								case 221:
									func_1202(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_1"), 8, 3), 1, 0);
									func_1202(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_1"), 8, 3), 1, 0);
									break;
								case 222:
									func_1202(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_2"), 8, 3), 1, 0);
									func_1202(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_2"), 8, 3), 1, 0);
									break;
								case 223:
									func_1202(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_3"), 8, 3), 1, 0);
									func_1202(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_3"), 8, 3), 1, 0);
									break;
								case 224:
									func_1202(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_4"), 8, 3), 1, 0);
									func_1202(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_4"), 8, 3), 1, 0);
									break;
								case 225:
									func_1202(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_5"), 8, 3), 1, 0);
									func_1202(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_5"), 8, 3), 1, 0);
									break;
								case 226:
									func_1202(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_6"), 8, 3), 1, 0);
									func_1202(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_6"), 8, 3), 1, 0);
									break;
								case 227:
									func_1202(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_7"), 8, 3), 1, 0);
									func_1202(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_7"), 8, 3), 1, 0);
									break;
								case 228:
									func_1202(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_8"), 8, 3), 1, 0);
									func_1202(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_8"), 8, 3), 1, 0);
									break;
								case 229:
									func_1202(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_9"), 8, 3), 1, 0);
									func_1202(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_9"), 8, 3), 1, 0);
									break;
								case 230:
									func_1202(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_10"), 8, 3), 1, 0);
									func_1202(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_10"), 8, 3), 1, 0);
									break;
								case 231:
									func_1202(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_11"), 8, 3), 1, 0);
									func_1202(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_11"), 8, 3), 1, 0);
									break;
								case 232:
									func_1202(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_12"), 8, 3), 1, 0);
									func_1202(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_12"), 8, 3), 1, 0);
									break;
								case 233:
									func_1202(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_13"), 8, 3), 1, 0);
									func_1202(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_13"), 8, 3), 1, 0);
									break;
								case 234:
									func_1202(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_14"), 8, 3), 1, 0);
									func_1202(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_14"), 8, 3), 1, 0);
									break;
								case 235:
									func_1202(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_15"), 8, 3), 1, 0);
									func_1202(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_15"), 8, 3), 1, 0);
									break;
							}
						}
						else if (iParam2 >= 188 && iParam2 <= 203)
						{
							switch (iParam2)
							{
								case 188:
									func_1202(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_HEIST_M_SPECIAL_8_0"), 8, 3), 1, 0);
									func_1202(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_HEIST_M_SPECIAL_9_0"), 8, 3), 1, 0);
									break;
								case 189:
									func_1202(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_HEIST_M_SPECIAL_8_1"), 8, 3), 1, 0);
									func_1202(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_HEIST_M_SPECIAL_9_1"), 8, 3), 1, 0);
									break;
								case 190:
									func_1202(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_HEIST_M_SPECIAL_8_2"), 8, 3), 1, 0);
									func_1202(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_HEIST_M_SPECIAL_9_2"), 8, 3), 1, 0);
									break;
								case 191:
									func_1202(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_HEIST_M_SPECIAL_8_3"), 8, 3), 1, 0);
									func_1202(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_HEIST_M_SPECIAL_9_3"), 8, 3), 1, 0);
									break;
								case 192:
									func_1202(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_HEIST_M_SPECIAL_8_4"), 8, 3), 1, 0);
									func_1202(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_HEIST_M_SPECIAL_9_4"), 8, 3), 1, 0);
									break;
								case 193:
									func_1202(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_HEIST_M_SPECIAL_8_5"), 8, 3), 1, 0);
									func_1202(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_HEIST_M_SPECIAL_9_5"), 8, 3), 1, 0);
									break;
								case 194:
									func_1202(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_HEIST_M_SPECIAL_8_6"), 8, 3), 1, 0);
									func_1202(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_HEIST_M_SPECIAL_9_6"), 8, 3), 1, 0);
									break;
								case 195:
									func_1202(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_HEIST_M_SPECIAL_8_7"), 8, 3), 1, 0);
									func_1202(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_HEIST_M_SPECIAL_9_7"), 8, 3), 1, 0);
									break;
								case 196:
									func_1202(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_HEIST_M_SPECIAL_8_8"), 8, 3), 1, 0);
									func_1202(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_HEIST_M_SPECIAL_9_8"), 8, 3), 1, 0);
									break;
								case 197:
									func_1202(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_HEIST_M_SPECIAL_8_9"), 8, 3), 1, 0);
									func_1202(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_HEIST_M_SPECIAL_9_9"), 8, 3), 1, 0);
									break;
								case 198:
									func_1202(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_HEIST_M_SPECIAL_8_10"), 8, 3), 1, 0);
									func_1202(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_HEIST_M_SPECIAL_9_10"), 8, 3), 1, 0);
									break;
								case 199:
									func_1202(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_HEIST_M_SPECIAL_8_11"), 8, 3), 1, 0);
									func_1202(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_HEIST_M_SPECIAL_9_11"), 8, 3), 1, 0);
									break;
								case 200:
									func_1202(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_HEIST_M_SPECIAL_8_12"), 8, 3), 1, 0);
									func_1202(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_HEIST_M_SPECIAL_9_12"), 8, 3), 1, 0);
									break;
								case 201:
									func_1202(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_HEIST_M_SPECIAL_8_13"), 8, 3), 1, 0);
									func_1202(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_HEIST_M_SPECIAL_9_13"), 8, 3), 1, 0);
									break;
								case 202:
									func_1202(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_HEIST_M_SPECIAL_8_14"), 8, 3), 1, 0);
									func_1202(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_HEIST_M_SPECIAL_9_14"), 8, 3), 1, 0);
									break;
								case 203:
									func_1202(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_HEIST_M_SPECIAL_8_15"), 8, 3), 1, 0);
									func_1202(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_HEIST_M_SPECIAL_9_15"), 8, 3), 1, 0);
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
									func_1202(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_0"), 7, 3), 1, 0);
									func_1202(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_0"), 7, 3), 1, 0);
									break;
								case 1:
									func_1202(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_1"), 7, 3), 1, 0);
									func_1202(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_1"), 7, 3), 1, 0);
									break;
								case 2:
									func_1202(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_2"), 7, 3), 1, 0);
									func_1202(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_2"), 7, 3), 1, 0);
									break;
								case 3:
									func_1202(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_3"), 7, 3), 1, 0);
									func_1202(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_3"), 7, 3), 1, 0);
									break;
								case 4:
									func_1202(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_4"), 7, 3), 1, 0);
									func_1202(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_4"), 7, 3), 1, 0);
									break;
								case 5:
									func_1202(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_5"), 7, 3), 1, 0);
									func_1202(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_5"), 7, 3), 1, 0);
									break;
								case 6:
									func_1202(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_6"), 7, 3), 1, 0);
									func_1202(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_6"), 7, 3), 1, 0);
									break;
								case 7:
									func_1202(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_7"), 7, 3), 1, 0);
									func_1202(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_7"), 7, 3), 1, 0);
									break;
								case 8:
									func_1202(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_8"), 7, 3), 1, 0);
									func_1202(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_8"), 7, 3), 1, 0);
									break;
								case 9:
									func_1202(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_9"), 7, 3), 1, 0);
									func_1202(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_9"), 7, 3), 1, 0);
									break;
								case 10:
									func_1202(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_10"), 7, 3), 1, 0);
									func_1202(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_10"), 7, 3), 1, 0);
									break;
								case 11:
									func_1202(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_11"), 7, 3), 1, 0);
									func_1202(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_11"), 7, 3), 1, 0);
									break;
								case 12:
									func_1202(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_12"), 7, 3), 1, 0);
									func_1202(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_12"), 7, 3), 1, 0);
									break;
								case 13:
									func_1202(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_13"), 7, 3), 1, 0);
									func_1202(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_13"), 7, 3), 1, 0);
									break;
								case 14:
									func_1202(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_14"), 7, 3), 1, 0);
									func_1202(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_14"), 7, 3), 1, 0);
									break;
								case 15:
									func_1202(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_15"), 7, 3), 1, 0);
									func_1202(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_15"), 7, 3), 1, 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_78130[2 /*14*/].f_4)
							{
								case 0:
									func_1202(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_0"), 7, 3), 1, 0);
									func_1202(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_0"), 7, 3), 1, 0);
									break;
								case 1:
									func_1202(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_1"), 7, 3), 1, 0);
									func_1202(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_1"), 7, 3), 1, 0);
									break;
								case 2:
									func_1202(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_2"), 7, 3), 1, 0);
									func_1202(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_2"), 7, 3), 1, 0);
									break;
								case 3:
									func_1202(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_3"), 7, 3), 1, 0);
									func_1202(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_3"), 7, 3), 1, 0);
									break;
								case 4:
									func_1202(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_4"), 7, 3), 1, 0);
									func_1202(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_4"), 7, 3), 1, 0);
									break;
								case 5:
									func_1202(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_5"), 7, 3), 1, 0);
									func_1202(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_5"), 7, 3), 1, 0);
									break;
								case 6:
									func_1202(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_6"), 7, 3), 1, 0);
									func_1202(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_6"), 7, 3), 1, 0);
									break;
								case 7:
									func_1202(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_7"), 7, 3), 1, 0);
									func_1202(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_7"), 7, 3), 1, 0);
									break;
								case 8:
									func_1202(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_8"), 7, 3), 1, 0);
									func_1202(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_8"), 7, 3), 1, 0);
									break;
								case 9:
									func_1202(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_9"), 7, 3), 1, 0);
									func_1202(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_9"), 7, 3), 1, 0);
									break;
								case 10:
									func_1202(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_10"), 7, 3), 1, 0);
									func_1202(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_10"), 7, 3), 1, 0);
									break;
								case 11:
									func_1202(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_11"), 7, 3), 1, 0);
									func_1202(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_11"), 7, 3), 1, 0);
									break;
								case 12:
									func_1202(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_12"), 7, 3), 1, 0);
									func_1202(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_12"), 7, 3), 1, 0);
									break;
								case 13:
									func_1202(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_13"), 7, 3), 1, 0);
									func_1202(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_13"), 7, 3), 1, 0);
									break;
								case 14:
									func_1202(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_14"), 7, 3), 1, 0);
									func_1202(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_14"), 7, 3), 1, 0);
									break;
								case 15:
									func_1202(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_15"), 7, 3), 1, 0);
									func_1202(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_15"), 7, 3), 1, 0);
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
							iVar14 = (16 + Global_78130[1 /*14*/].f_4);
							func_1202(iParam0, 8, iVar14, 1, 0);
						}
					}
				}
				Global_78130[1 /*14*/] = { __LIB_6__::func_38(iParam0, iParam1, iParam2, -1) };
				if (iParam1 == 11)
				{
					iVar15 = __LIB_0__::func_358(iParam0, iParam2, Global_78130[1 /*14*/].f_4);
					if (iVar15 != -99)
					{
						func_1202(iParam0, 8, iVar15, 1, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203)
					{
						switch (iParam2)
						{
							case 199:
								func_1202(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_0"), 7, 4), 1, 0);
								break;
							case 200:
								func_1202(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_1"), 7, 4), 1, 0);
								break;
							case 201:
								func_1202(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_2"), 7, 4), 1, 0);
								break;
							}
					}
				}
				else if (iParam1 == 8)
				{
					iVar15 = __LIB_0__::func_357(iParam0, iParam2, Global_78130[1 /*14*/].f_4);
					if (iVar15 != -99)
					{
						func_1202(iParam0, 11, iVar15, 1, 0);
					}
				}
			}
			if (bParam3)
			{
				if (iParam0 == joaat("MP_M_Freemode_01"))
				{
					if ((((((((((((((((((((((Global_2883588 == joaat("DLC_MP_X17_M_OUTFIT_SCUBA_0") || Global_2883588 == joaat("DLC_MP_X17_M_OUTFIT_SCUBA_1")) || Global_2883588 == joaat("DLC_MP_X17_M_OUTFIT_SCUBA_2")) || Global_2883588 == joaat("DLC_MP_X17_M_OUTFIT_SCUBA_3")) || Global_2883588 == joaat("DLC_MP_X17_M_OUTFIT_SCUBA_4")) || Global_2883588 == joaat("DLC_MP_X17_M_OUTFIT_SCUBA_5")) || Global_2883588 == joaat("DLC_MP_X17_M_OUTFIT_SCUBA_6")) || Global_2883588 == joaat("DLC_MP_X17_M_OUTFIT_SCUBA_7")) || Global_2883588 == joaat("DLC_MP_X17_M_OUTFIT_SCUBA_8")) || Global_2883588 == joaat("DLC_MP_X17_M_OUTFIT_SCUBA_9")) || Global_2883588 == joaat("DLC_MP_X17_M_OUTFIT_SCUBA_10")) || Global_2883588 == joaat("DLC_MP_X17_M_OUTFIT_SCUBA_11")) || Global_2883588 == joaat("DLC_MP_X17_M_OUTFIT_SCUBA_12")) || Global_2883588 == joaat("DLC_MP_X17_M_OUTFIT_SCUBA_13")) || Global_2883588 == joaat("DLC_MP_X17_M_OUTFIT_SCUBA_14")) || Global_2883588 == joaat("DLC_MP_X17_M_OUTFIT_SCUBA_15")) || Global_2883588 == joaat("DLC_MP_X17_M_OUTFIT_SCUBA_16")) || Global_2883588 == joaat("DLC_MP_X17_M_OUTFIT_SCUBA_17")) || Global_2883588 == joaat("DLC_MP_X17_M_OUTFIT_SCUBA_18")) || Global_2883588 == joaat("DLC_MP_X17_M_OUTFIT_SCUBA_19")) || Global_2883588 == joaat("DLC_MP_X17_M_OUTFIT_SCUBA_20")) || Global_2883588 == joaat("DLC_MP_X17_M_OUTFIT_SCUBA_21")) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SCUBA_GEAR"), 0))
					{
						if (__LIB_0__::func_137(26965, -1))
						{
						}
						else
						{
							__LIB_0__::func_186(26965, 1, -1);
						}
					}
				}
				else if (iParam0 == joaat("MP_F_Freemode_01"))
				{
					if ((((((((((((((((((((((Global_2883588 == joaat("DLC_MP_X17_F_OUTFIT_SCUBA_0") || Global_2883588 == joaat("DLC_MP_X17_F_OUTFIT_SCUBA_1")) || Global_2883588 == joaat("DLC_MP_X17_F_OUTFIT_SCUBA_2")) || Global_2883588 == joaat("DLC_MP_X17_F_OUTFIT_SCUBA_3")) || Global_2883588 == joaat("DLC_MP_X17_F_OUTFIT_SCUBA_4")) || Global_2883588 == joaat("DLC_MP_X17_F_OUTFIT_SCUBA_5")) || Global_2883588 == joaat("DLC_MP_X17_F_OUTFIT_SCUBA_6")) || Global_2883588 == joaat("DLC_MP_X17_F_OUTFIT_SCUBA_7")) || Global_2883588 == joaat("DLC_MP_X17_F_OUTFIT_SCUBA_8")) || Global_2883588 == joaat("DLC_MP_X17_F_OUTFIT_SCUBA_9")) || Global_2883588 == joaat("DLC_MP_X17_F_OUTFIT_SCUBA_10")) || Global_2883588 == joaat("DLC_MP_X17_F_OUTFIT_SCUBA_11")) || Global_2883588 == joaat("DLC_MP_X17_F_OUTFIT_SCUBA_12")) || Global_2883588 == joaat("DLC_MP_X17_F_OUTFIT_SCUBA_13")) || Global_2883588 == joaat("DLC_MP_X17_F_OUTFIT_SCUBA_14")) || Global_2883588 == joaat("DLC_MP_X17_F_OUTFIT_SCUBA_15")) || Global_2883588 == joaat("DLC_MP_X17_F_OUTFIT_SCUBA_16")) || Global_2883588 == joaat("DLC_MP_X17_F_OUTFIT_SCUBA_17")) || Global_2883588 == joaat("DLC_MP_X17_F_OUTFIT_SCUBA_18")) || Global_2883588 == joaat("DLC_MP_X17_F_OUTFIT_SCUBA_19")) || Global_2883588 == joaat("DLC_MP_X17_F_OUTFIT_SCUBA_20")) || Global_2883588 == joaat("DLC_MP_X17_F_OUTFIT_SCUBA_21")) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SCUBA_GEAR"), 0))
					{
						if (__LIB_0__::func_137(26965, -1))
						{
						}
						else
						{
							__LIB_0__::func_186(26965, 1, -1);
						}
					}
				}
			}
		}
		return 1;
	}
	return 0;
}

int func_1204(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0xC7318
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	Global_78130[1 /*14*/] = { __LIB_6__::func_38(iParam0, iParam1, iParam2, -1) };
	Global_78128++;
	if (BitTest(Global_78130[1 /*14*/].f_6, 0) && !BitTest(Global_78130[1 /*14*/].f_6, 6))
	{
		if (bParam3)
		{
			if (((((iParam1 == 4 || iParam1 == 11) || iParam1 == 6) || iParam1 == 0) || iParam1 == 14) || iParam1 == 7)
			{
				__LIB_1__::func_364(1237, Global_1659801[__LIB_1__::func_27(-1)] + 1, -1, 1);
			}
			if (iParam1 == 1)
			{
				__LIB_1__::func_746(1243, 1, -1);
			}
		}
		else
		{
			if (((((iParam1 == 4 || iParam1 == 11) || iParam1 == 6) || iParam1 == 0) || iParam1 == 14) || iParam1 == 7)
			{
				__LIB_1__::func_364(1237, (Global_1659801[__LIB_1__::func_27(-1)] - 1), -1, 1);
			}
			if (iParam1 == 1)
			{
				__LIB_1__::func_746(1243, -1, -1);
			}
		}
		if (iParam1 != 5)
		{
			iVar0 = __LIB_1__::func_360(__LIB_0__::func_38(iParam1, Global_78130[1 /*14*/].f_2), Global_78127, 0);
			if (bParam3)
			{
				MISC::SET_BIT(&iVar0, Global_78130[1 /*14*/].f_1);
			}
			else
			{
				MISC::CLEAR_BIT(&iVar0, Global_78130[1 /*14*/].f_1);
			}
			__LIB_1__::func_354(__LIB_0__::func_38(iParam1, Global_78130[1 /*14*/].f_2), iVar0, Global_78127, 1, 0);
		}
		if (bParam4)
		{
			if (__LIB_0__::func_36(iParam1, Global_78130[1 /*14*/].f_2, &iVar1))
			{
				iVar2 = __LIB_1__::func_360(iVar1, Global_78127, 0);
				MISC::SET_BIT(&iVar2, Global_78130[1 /*14*/].f_1);
				__LIB_1__::func_354(iVar1, iVar2, Global_78127, 1, 0);
			}
		}
		if (Global_78128 == 1 && bParam3 == 1)
		{
			if (iParam0 == joaat("MP_M_Freemode_01"))
			{
				if (iParam1 == 14)
				{
					if (iParam2 >= 83 && iParam2 <= 90)
					{
						iVar3 = (75 + Global_78130[1 /*14*/].f_4);
						func_1204(iParam0, 14, iVar3, 1, bParam4);
					}
					else if (iParam2 >= 75 && iParam2 <= 82)
					{
						iVar3 = (83 + Global_78130[1 /*14*/].f_4);
						func_1204(iParam0, 14, iVar3, 1, bParam4);
					}
				}
				else if (iParam1 == 8)
				{
					if (iParam2 >= 48 && iParam2 <= 63)
					{
						iVar3 = (64 + Global_78130[1 /*14*/].f_4);
						func_1204(iParam0, 8, iVar3, 1, bParam4);
					}
					else if (iParam2 >= 64 && iParam2 <= 79)
					{
						iVar3 = (48 + Global_78130[1 /*14*/].f_4);
						func_1204(iParam0, 8, iVar3, 1, bParam4);
					}
					else if (iParam2 >= 96 && iParam2 <= 111)
					{
						iVar3 = (112 + Global_78130[1 /*14*/].f_4);
						func_1204(iParam0, 8, iVar3, 1, bParam4);
					}
					else if (iParam2 >= 112 && iParam2 <= 127)
					{
						iVar3 = (96 + Global_78130[1 /*14*/].f_4);
						func_1204(iParam0, 8, iVar3, 1, bParam4);
					}
					else if (iParam2 >= 176 && iParam2 <= 191)
					{
						iVar3 = (160 + Global_78130[1 /*14*/].f_4);
						func_1204(iParam0, 8, iVar3, 1, bParam4);
					}
					else if (iParam2 >= 160 && iParam2 <= 175)
					{
						iVar3 = (176 + Global_78130[1 /*14*/].f_4);
						func_1204(iParam0, 8, iVar3, 1, bParam4);
					}
					else if (iParam2 >= 32 && iParam2 <= 47)
					{
						iVar3 = (0 + Global_78130[1 /*14*/].f_4);
						func_1204(iParam0, 11, iVar3, 1, bParam4);
					}
					else if (iParam2 >= 224 && iParam2 <= 239)
					{
						iVar3 = (16 + Global_78130[1 /*14*/].f_4);
						func_1204(iParam0, 11, iVar3, 1, bParam4);
					}
				}
				else if (iParam1 == 11)
				{
					if (iParam2 >= 0 && iParam2 <= 15)
					{
						iVar3 = (32 + Global_78130[1 /*14*/].f_4);
						func_1204(iParam0, 8, iVar3, 1, bParam4);
					}
					else if (iParam2 >= 16 && iParam2 <= 31)
					{
						iVar3 = (224 + Global_78130[1 /*14*/].f_4);
						func_1204(iParam0, 8, iVar3, 1, bParam4);
					}
				}
			}
			else if (iParam0 == joaat("MP_F_Freemode_01"))
			{
				if (iParam1 == 11)
				{
					if (iParam2 >= 0 && iParam2 <= 15)
					{
						iVar3 = (16 + Global_78130[1 /*14*/].f_4);
						func_1204(iParam0, 8, iVar3, 1, bParam4);
					}
				}
			}
			Global_78130[1 /*14*/] = { __LIB_6__::func_38(iParam0, iParam1, iParam2, -1) };
			if (iParam1 == 11)
			{
				iVar4 = __LIB_0__::func_358(iParam0, iParam2, Global_78130[1 /*14*/].f_4);
				if (iVar4 != -99)
				{
					func_1204(iParam0, 8, iVar4, 1, bParam4);
				}
			}
			else if (iParam1 == 8)
			{
				iVar4 = __LIB_0__::func_357(iParam0, iParam2, Global_78130[1 /*14*/].f_4);
				if (iVar4 != -99)
				{
					func_1204(iParam0, 11, iVar4, 1, bParam4);
				}
			}
		}
		Global_78128 = (Global_78128 - 1);
		return 1;
	}
	Global_78128 = (Global_78128 - 1);
	return 0;
}

int func_1211(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)//Position - 0xC86DA
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
		Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, iParam1, iParam2, -1) };
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
			func_1257(iVar5, iParam1, iParam2, 1);
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
					Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, 10, 0, -1) };
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
						func_1257(iVar5, 10, 0, 1);
					}
				}
				else
				{
					Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, iVar0, uVar14[iVar0], -1) };
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
								Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, 14, uVar15[iVar1], -1) };
								__LIB_0__::func_454(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
								if (BitTest(Global_78130[1 /*14*/].f_6, 1))
								{
									func_1257(iVar5, iVar0, uVar14[iVar0], 1);
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
								func_1211(iParam0, iVar0, uVar14[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (BitTest(Global_78130[1 /*14*/].f_6, 1))
							{
								func_1257(iVar5, iVar0, uVar14[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, iVar0, func_1258(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					uVar16 = { __LIB_0__::func_459(iVar5, 0) };
					func_1211(iParam0, iVar0, uVar16[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			iVar0++;
		}
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1), 0);
		Global_2883588 = uVar12;
		Global_2883589 = uVar13;
		if (iParam5 == 0)
		{
			iVar17 = __LIB_2__::func_979();
			if (iVar17 != -1)
			{
				__LIB_2__::func_978(iVar17, 0, iParam10);
			}
			func_1255(iParam0, 11, uVar14[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar18 = { __LIB_0__::func_466(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, 14, uVar18[iVar1], -1) };
			__LIB_0__::func_454(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
			if (BitTest(Global_78130[1 /*14*/].f_6, 1))
			{
				func_1257(iVar5, 14, uVar18[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_78128 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = __LIB_9__::func_528(iParam0, iVar5, 14, uVar18[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_1211(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_1257(iVar5, iParam1, iParam2, 1);
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			if (BitTest(Global_78130[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HAIR"), 1))
			{
			}
			else if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 1, joaat("HAIR_SHRINK")))
			{
				func_1211(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, iParam1, iParam2, -1) };
			}
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			func_1250(iParam0);
		}
		if (iParam5 == 0)
		{
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = __LIB_9__::func_528(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_1211(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = __LIB_9__::func_528(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_1211(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					iVar27 = func_1249(iVar5, iVar24, iVar23, iVar25);
					if (iVar27 == -99)
					{
						iVar27 = __LIB_9__::func_528(iParam0, iVar5, 11, iVar23, 3, 0);
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
							func_1211(iParam0, 8, iVar29, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, iParam1, iParam2, -1) };
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
							iVar30 = __LIB_7__::func_884(iParam0, iParam2);
							iVar31 = __LIB_0__::func_452(iVar5, iVar23, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
							if (iVar31 != -99)
							{
								func_1211(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, iParam1, iParam2, -1) };
								iVar8 = -99;
							}
							else if (iVar30 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								func_1211(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, iParam1, iParam2, -1) };
							}
							else
							{
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									iVar32 = __LIB_0__::func_279(iVar5, 11, -1);
									Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, 11, iVar32, -1) };
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
								func_1211(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, iParam1, iParam2, -1) };
							}
						}
					}
					else
					{
						Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, 11, iVar23, -1) };
						iVar34 = Global_78130[1 /*14*/].f_3;
						Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, 11, iParam2, -1) };
						iVar35 = Global_78130[1 /*14*/].f_3;
						if (iVar34 != iVar35)
						{
							iVar37 = __LIB_7__::func_884(iParam0, iParam2);
							Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, 8, iVar24, -1) };
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
										Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, 11, iVar38, -1) };
										iVar39 = __LIB_0__::func_452(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
									}
								}
								if (iVar5 == joaat("MP_F_Freemode_01") && ((iVar24 == 32 || iVar24 == 33) || iVar24 == 119))
								{
									if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_205(iVar5, iParam2, 11, 4), joaat("JACKET_ONLY"), 0))
									{
										iVar38 = __LIB_0__::func_279(iVar5, 11, -1);
										Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, 11, iVar38, -1) };
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
									Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, 11, iVar38, -1) };
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
								func_1211(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_M_Freemode_01"))
							{
								iVar38 = __LIB_0__::func_279(iVar5, 11, -1);
								Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, 11, iVar38, -1) };
								iVar39 = __LIB_0__::func_452(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
								if (iVar39 == -99)
								{
									iVar39 = 240;
								}
								func_1211(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_F_Freemode_01"))
							{
								func_1211(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				__LIB_6__::func_37(iVar5, iParam2);
				if (!bParam13)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 10));
				}
			}
			func_1255(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_1249(iVar5, func_1258(iParam0, 8, -1), iParam2, func_1258(iParam0, 4, -1));
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam5 == 0)
			{
				if (iParam8 == -1)
				{
					iParam8 = __LIB_1__::func_360(2153, iParam10, 0);
				}
				if (iParam9 == -1)
				{
					iParam9 = __LIB_1__::func_360(2160, iParam10, 0);
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
				func_1237(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar43 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar43, joaat("GLOVES"), 0))
			{
				iVar44 = __LIB_0__::func_350(iParam0, 11);
				iVar45 = __LIB_0__::func_350(iParam0, 4);
				iVar46 = func_1249(iVar5, iParam2, iVar44, iVar45);
				if (iVar46 == -99)
				{
					iVar46 = __LIB_9__::func_528(iParam0, iVar5, 11, iVar44, 3, 0);
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
			func_1255(iParam0, iParam1, iParam2, iParam6, 0);
			iVar49 = __LIB_0__::func_350(iParam0, 11);
			if (__LIB_0__::func_280(iVar5, iVar49, -1))
			{
				iVar50 = __LIB_0__::func_357(iVar5, iParam2, Global_78130[1 /*14*/].f_4);
				__LIB_6__::func_37(iVar5, iVar50);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_1249(iVar5, iParam2, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
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
				iVar52 = __LIB_1__::func_360(2100, iParam10, 0);
				iVar53 = __LIB_1__::func_360(2101, iParam10, 0);
				iVar54 = __LIB_1__::func_360(2102, iParam10, 0);
				fVar55 = __LIB_1__::func_680(135, iParam10);
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
				__LIB_2__::func_996(iParam0, iParam10);
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
						func_1211(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			else if (iVar5 == joaat("MP_F_Freemode_01"))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_205(iVar5, iVar57, 11, 4), joaat("LOW2_OPEN_CHECK"), 0))
				{
					if (!__LIB_0__::func_451(iVar5, iParam2, __LIB_0__::func_357(iVar5, iVar58, 0)))
					{
						func_1211(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_1249(iVar5, __LIB_0__::func_350(iParam0, 8), __LIB_0__::func_350(iParam0, 11), iParam2);
			}
			iVar59 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar59, joaat("GLOVES"), 0))
			{
				iVar60 = func_1249(iVar5, iVar58, iVar57, iParam2);
				if (iVar60 == -99)
				{
					iVar60 = __LIB_9__::func_528(iParam0, iVar5, 11, iVar57, 3, 0);
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
					iVar3 = __LIB_9__::func_528(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_1211(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
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
								iVar6 = func_1249(iVar5, iVar3, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = __LIB_9__::func_528(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_1211(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						if (!func_1259(iParam0, 9, iVar63))
						{
							func_1211(iParam0, 9, iVar63, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_1211(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
					{
						func_1211(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 8)
			{
				iVar64 = __LIB_1__::func_360(2042, -1, 0);
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
						func_1211(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("MP_F_Freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar65 = func_1258(iParam0, 4, -1);
					iVar66 = iParam2;
				}
				else
				{
					iVar65 = iParam2;
					iVar66 = func_1258(iParam0, 11, -1);
				}
				if (__LIB_0__::func_240(iVar5, 11, iVar66, -1))
				{
					if (!__LIB_0__::func_239(iVar5, 4, iVar65, -1))
					{
						if (__LIB_0__::func_353(iVar5, 4, iVar65, &uVar67))
						{
							func_1211(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (__LIB_0__::func_239(iVar5, 4, iVar65, -1))
				{
					if (__LIB_0__::func_352(iVar5, 4, iVar65, &uVar67))
					{
						func_1211(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_1211(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_1211(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_1211(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_1211(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_1211(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_1211(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_1211(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_1211(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				func_1250(iParam0);
				iVar81 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
				iVar82 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
				iVar83 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar81, iVar82);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar83, joaat("FORCE_PROP"), 0))
				{
					iVar3 = __LIB_9__::func_528(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_1211(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = __LIB_9__::func_528(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_1211(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_1212(iParam0, &uVar4))
		{
			func_1211(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_1211(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar8 != -99)
	{
		func_1211(iParam0, 8, iVar8, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_1211(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar10 != -1)
	{
		iVar84 = __LIB_0__::func_282(iVar5, func_1258(iParam0, 3, -1), iVar10);
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
				func_1211(iParam0, 3, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_1212(int iParam0, var uParam1)//Position - 0xCA584
{
	int iVar0;
	int iVar1;
	*uParam1 = func_1258(PLAYER::PLAYER_PED_ID(), 2, -1);
	if (__LIB_1__::func_360(754, Global_78127, 0) != -99 && __LIB_0__::func_438())
	{
		if (__LIB_0__::func_236() == 4)
		{
			return 1;
		}
		if (__LIB_1__::func_360(754, Global_78127, 0) == 0 && __LIB_1__::func_360(755, Global_78127, 0) == 0)
		{
			if (__LIB_1__::func_342(161, Global_78127))
			{
				if (__LIB_1__::func_360(2053, Global_78127, 0) == 0)
				{
					return 0;
				}
			}
			else if (__LIB_1__::func_360(753, Global_78127, 0) == 0)
			{
				return 0;
			}
		}
		iVar0 = __LIB_1__::func_360(754, Global_78127, 0);
		iVar1 = __LIB_1__::func_360(755, Global_78127, 0);
		if (!func_1259(iParam0, iVar1, iVar0))
		{
			if (__LIB_1__::func_342(161, Global_78127))
			{
				*uParam1 = __LIB_1__::func_360(2053, Global_78127, 0);
			}
			else
			{
				*uParam1 = __LIB_1__::func_360(753, Global_78127, 0);
			}
			__LIB_1__::func_354(754, -99, Global_78127, 1, 0);
			__LIB_1__::func_354(755, 2, Global_78127, 1, 0);
			return 1;
		}
	}
	return 0;
}

void func_1237(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0xD4327
{
	int iVar0;
	int iVar1;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	__LIB_3__::func_222(MISC::GET_HASH_KEY("hairOverlay"), iParam0);
	iVar1 = __LIB_0__::func_450(iVar0, iParam1);
	if (iVar1 != -1)
	{
		if (iParam2 == -1)
		{
			iParam2 = Global_78127;
		}
		__LIB_2__::func_978(iVar1, 1, iParam2);
	}
	func_246(iParam0, bParam3, 0, -1);
}

int func_1249(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xDB376
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
					iVar0 = func_1249(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
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
					iVar0 = func_1249(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
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

void func_1250(int iParam0)//Position - 0xDC6B2
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
		if (!func_1252(iParam0, &bVar14, iVar9, iVar10, iVar12) || PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			if (__LIB_17__::func_933(iVar9, 0, 0, &iVar16))
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
			if (__LIB_17__::func_933(iVar9, 1, 0, &iVar19))
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
		if (!func_1252(iParam0, &bVar14, iVar9, iVar10, iVar12))
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

int func_1252(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0xDCF35
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
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAZ_MASK"), 0) && !__LIB_0__::func_348(iVar0, 14, func_1258(iParam0, 14, 0), -1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_1255(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0xDF84F
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (func_144(iParam0))
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
			__LIB_3__::func_222(MISC::GET_HASH_KEY("torsoDecal"), iParam0);
			if (iParam1 == 11)
			{
				if (((((!__LIB_5__::func_175(iVar0, iParam2, 13) && !__LIB_5__::func_175(iVar0, iParam2, 14)) && !__LIB_5__::func_175(iVar0, iParam2, 15)) && !__LIB_5__::func_175(iVar0, iParam2, 16)) && !__LIB_5__::func_175(iVar0, iParam2, 71)) && !__LIB_5__::func_175(iVar0, iParam2, 72))
				{
					__LIB_3__::func_222(MISC::GET_HASH_KEY("crewLogo"), iParam0);
				}
			}
			iVar2 = __LIB_5__::func_29(iVar0, iParam1, iParam2, iParam4);
			if (iVar2 != -1)
			{
				if (iParam3 == 1)
				{
					__LIB_2__::func_977(iParam0, iVar2, 0);
				}
				else
				{
					__LIB_2__::func_978(iVar2, 1, Global_78127);
				}
			}
		}
	}
}

void func_1257(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0xDF9DE
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
		Global_78130[2 /*14*/] = { __LIB_6__::func_38(iParam0, iParam1, iParam2, -1) };
		if (BitTest(Global_78130[2 /*14*/].f_6, 1) && BitTest(Global_78130[2 /*14*/].f_6, 6))
		{
			if (iParam1 == 12)
			{
				__LIB_2__::func_411(Global_2883588, 2, 1, 1, -1);
			}
			else if (iParam1 == 13)
			{
			}
			else if (iParam1 == 14)
			{
				__LIB_2__::func_411(Global_2883588, 2, 1, 1, -1);
			}
			else
			{
				__LIB_2__::func_411(Global_2883588, 2, 1, 1, -1);
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
							__LIB_2__::func_411(iVar2, 2, 1, 1, -1);
							if (iVar5 < Global_4538446)
							{
								Global_4538446[iVar5] = iVar2;
								Global_4538457[iVar5] = iVar4;
								iVar5++;
							}
						}
						else
						{
							func_1257(iParam0, __LIB_0__::func_33(iVar4), uVar3, 0);
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
									func_1257(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 3), 1);
								}
								else
								{
									func_1257(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 4), 1);
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
				iVar7 = __LIB_1__::func_360(iVar6, Global_78127, 0);
				MISC::SET_BIT(&iVar7, Global_78130[2 /*14*/].f_1);
				__LIB_1__::func_354(iVar6, iVar7, Global_78127, 1, 0);
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
							func_1257(iParam0, 14, iVar8, 0);
						}
						else if (iParam2 >= 75 && iParam2 <= 82)
						{
							iVar8 = (83 + Global_78130[2 /*14*/].f_4);
							func_1257(iParam0, 14, iVar8, 0);
						}
					}
					else if (iParam1 == 8)
					{
						if (iParam2 >= 48 && iParam2 <= 63)
						{
							iVar8 = (64 + Global_78130[2 /*14*/].f_4);
							func_1257(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 64 && iParam2 <= 79)
						{
							iVar8 = (48 + Global_78130[2 /*14*/].f_4);
							func_1257(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 96 && iParam2 <= 111)
						{
							iVar8 = (112 + Global_78130[2 /*14*/].f_4);
							func_1257(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 112 && iParam2 <= 127)
						{
							iVar8 = (96 + Global_78130[2 /*14*/].f_4);
							func_1257(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 176 && iParam2 <= 191)
						{
							iVar8 = (160 + Global_78130[2 /*14*/].f_4);
							func_1257(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 160 && iParam2 <= 175)
						{
							iVar8 = (176 + Global_78130[2 /*14*/].f_4);
							func_1257(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 32 && iParam2 <= 47)
						{
							iVar8 = (0 + Global_78130[2 /*14*/].f_4);
							func_1257(iParam0, 11, iVar8, 0);
						}
						else if (iParam2 >= 224 && iParam2 <= 239)
						{
							iVar8 = (16 + Global_78130[2 /*14*/].f_4);
							func_1257(iParam0, 11, iVar8, 0);
						}
					}
					else if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar8 = (32 + Global_78130[2 /*14*/].f_4);
							func_1257(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 16 && iParam2 <= 31)
						{
							iVar8 = (224 + Global_78130[2 /*14*/].f_4);
							func_1257(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 220 && iParam2 <= 235)
						{
							switch (iParam2)
							{
								case 220:
									func_1257(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_0"), 8, 3), 0);
									func_1257(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_0"), 8, 3), 0);
									break;
								case 221:
									func_1257(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_1"), 8, 3), 0);
									func_1257(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_1"), 8, 3), 0);
									break;
								case 222:
									func_1257(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_2"), 8, 3), 0);
									func_1257(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_2"), 8, 3), 0);
									break;
								case 223:
									func_1257(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_3"), 8, 3), 0);
									func_1257(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_3"), 8, 3), 0);
									break;
								case 224:
									func_1257(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_4"), 8, 3), 0);
									func_1257(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_4"), 8, 3), 0);
									break;
								case 225:
									func_1257(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_5"), 8, 3), 0);
									func_1257(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_5"), 8, 3), 0);
									break;
								case 226:
									func_1257(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_6"), 8, 3), 0);
									func_1257(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_6"), 8, 3), 0);
									break;
								case 227:
									func_1257(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_7"), 8, 3), 0);
									func_1257(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_7"), 8, 3), 0);
									break;
								case 228:
									func_1257(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_8"), 8, 3), 0);
									func_1257(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_8"), 8, 3), 0);
									break;
								case 229:
									func_1257(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_9"), 8, 3), 0);
									func_1257(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_9"), 8, 3), 0);
									break;
								case 230:
									func_1257(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_10"), 8, 3), 0);
									func_1257(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_10"), 8, 3), 0);
									break;
								case 231:
									func_1257(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_11"), 8, 3), 0);
									func_1257(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_11"), 8, 3), 0);
									break;
								case 232:
									func_1257(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_12"), 8, 3), 0);
									func_1257(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_12"), 8, 3), 0);
									break;
								case 233:
									func_1257(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_13"), 8, 3), 0);
									func_1257(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_13"), 8, 3), 0);
									break;
								case 234:
									func_1257(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_14"), 8, 3), 0);
									func_1257(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_14"), 8, 3), 0);
									break;
								case 235:
									func_1257(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_15"), 8, 3), 0);
									func_1257(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_15"), 8, 3), 0);
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
									func_1257(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_0"), 7, 3), 0);
									func_1257(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_0"), 7, 3), 0);
									break;
								case 1:
									func_1257(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_1"), 7, 3), 0);
									func_1257(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_1"), 7, 3), 0);
									break;
								case 2:
									func_1257(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_2"), 7, 3), 0);
									func_1257(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_2"), 7, 3), 0);
									break;
								case 3:
									func_1257(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_3"), 7, 3), 0);
									func_1257(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_3"), 7, 3), 0);
									break;
								case 4:
									func_1257(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_4"), 7, 3), 0);
									func_1257(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_4"), 7, 3), 0);
									break;
								case 5:
									func_1257(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_5"), 7, 3), 0);
									func_1257(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_5"), 7, 3), 0);
									break;
								case 6:
									func_1257(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_6"), 7, 3), 0);
									func_1257(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_6"), 7, 3), 0);
									break;
								case 7:
									func_1257(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_7"), 7, 3), 0);
									func_1257(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_7"), 7, 3), 0);
									break;
								case 8:
									func_1257(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_8"), 7, 3), 0);
									func_1257(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_8"), 7, 3), 0);
									break;
								case 9:
									func_1257(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_9"), 7, 3), 0);
									func_1257(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_9"), 7, 3), 0);
									break;
								case 10:
									func_1257(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_10"), 7, 3), 0);
									func_1257(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_10"), 7, 3), 0);
									break;
								case 11:
									func_1257(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_11"), 7, 3), 0);
									func_1257(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_11"), 7, 3), 0);
									break;
								case 12:
									func_1257(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_12"), 7, 3), 0);
									func_1257(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_12"), 7, 3), 0);
									break;
								case 13:
									func_1257(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_13"), 7, 3), 0);
									func_1257(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_13"), 7, 3), 0);
									break;
								case 14:
									func_1257(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_14"), 7, 3), 0);
									func_1257(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_14"), 7, 3), 0);
									break;
								case 15:
									func_1257(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_15"), 7, 3), 0);
									func_1257(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_15"), 7, 3), 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_78130[2 /*14*/].f_4)
							{
								case 0:
									func_1257(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_0"), 7, 3), 0);
									func_1257(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_0"), 7, 3), 0);
									break;
								case 1:
									func_1257(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_1"), 7, 3), 0);
									func_1257(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_1"), 7, 3), 0);
									break;
								case 2:
									func_1257(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_2"), 7, 3), 0);
									func_1257(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_2"), 7, 3), 0);
									break;
								case 3:
									func_1257(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_3"), 7, 3), 0);
									func_1257(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_3"), 7, 3), 0);
									break;
								case 4:
									func_1257(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_4"), 7, 3), 0);
									func_1257(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_4"), 7, 3), 0);
									break;
								case 5:
									func_1257(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_5"), 7, 3), 0);
									func_1257(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_5"), 7, 3), 0);
									break;
								case 6:
									func_1257(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_6"), 7, 3), 0);
									func_1257(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_6"), 7, 3), 0);
									break;
								case 7:
									func_1257(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_7"), 7, 3), 0);
									func_1257(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_7"), 7, 3), 0);
									break;
								case 8:
									func_1257(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_8"), 7, 3), 0);
									func_1257(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_8"), 7, 3), 0);
									break;
								case 9:
									func_1257(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_9"), 7, 3), 0);
									func_1257(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_9"), 7, 3), 0);
									break;
								case 10:
									func_1257(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_10"), 7, 3), 0);
									func_1257(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_10"), 7, 3), 0);
									break;
								case 11:
									func_1257(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_11"), 7, 3), 0);
									func_1257(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_11"), 7, 3), 0);
									break;
								case 12:
									func_1257(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_12"), 7, 3), 0);
									func_1257(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_12"), 7, 3), 0);
									break;
								case 13:
									func_1257(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_13"), 7, 3), 0);
									func_1257(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_13"), 7, 3), 0);
									break;
								case 14:
									func_1257(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_14"), 7, 3), 0);
									func_1257(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_14"), 7, 3), 0);
									break;
								case 15:
									func_1257(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_15"), 7, 3), 0);
									func_1257(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_15"), 7, 3), 0);
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
							func_1257(iParam0, 8, iVar8, 0);
						}
					}
				}
				Global_78130[2 /*14*/] = { __LIB_6__::func_38(iParam0, iParam1, iParam2, -1) };
				if (iParam1 == 11)
				{
					iVar9 = __LIB_0__::func_358(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_1257(iParam0, 8, iVar9, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203)
					{
						switch (iParam2)
						{
							case 199:
								func_1257(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_0"), 7, 4), 0);
								break;
							case 200:
								func_1257(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_1"), 7, 4), 0);
								break;
							case 201:
								func_1257(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_2"), 7, 4), 0);
								break;
							}
					}
				}
				else if (iParam1 == 8)
				{
					iVar9 = __LIB_0__::func_357(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_1257(iParam0, 11, iVar9, 0);
					}
				}
			}
		}
	}
}

int func_1258(int iParam0, int iParam1, int iParam2)//Position - 0xE0A01
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
				if (func_1259(iParam0, iParam1, iVar0))
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
				if (func_1259(iParam0, iParam1, iVar1))
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

int func_1259(int iParam0, int iParam1, int iParam2)//Position - 0xE0AA2
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
	Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar0, iParam1, iParam2, -1) };
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
				if (!func_1259(iParam0, iVar4, uVar8[iVar4]))
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
							if (!func_1259(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_6__::func_38(iVar0, 14, iVar6, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar5)
									{
										if (func_1259(iParam0, 14, iVar6))
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
						Global_78130[2 /*14*/] = { __LIB_6__::func_38(iVar0, iVar4, iVar1, -1) };
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
			if (__LIB_1__::func_360(1759, Global_78127, 0) != uVar8[10])
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
			if (!func_1259(iParam0, 14, uVar11[iVar10]))
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
						return func_1259(iParam0, 4, uVar18);
					}
				}
				else if (__LIB_0__::func_352(iVar0, 4, iParam2, &uVar18))
				{
					return func_1259(iParam0, 4, uVar18);
				}
			}
			Global_78129 = (Global_78129 - 1);
		}
	}
	return 0;
}

