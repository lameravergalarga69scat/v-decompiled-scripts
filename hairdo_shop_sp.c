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
	struct<2> Local_345 = { 0, 0 } ;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
#endregion
void __EntryFunction__()//Position - 0x0
{
	struct<3> Var0;
	var uVar1;
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
	Local_142.f_477 = 771179/*func_1207*/;
	Local_142.f_478 = 771018/*func_1206*/;
	Local_142.f_479 = 761396/*func_1193*/;
	Local_142.f_480 = 761356/*func_1192*/;
	Local_142.f_481 = 761316/*func_1191*/;
	Local_142.f_482 = 760172/*func_1189*/;
	Local_142.f_483 = 760132/*func_1188*/;
	Local_142.f_484 = 683109/*func_1132*/;
	Local_142.f_485 = 682391/*func_1130*/;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(66))
	{
		func_1120(&Local_142, 0);
	}
	if (Local_142.f_523 != 0)
	{
		if (__LIB_41__::func_379(Local_142.f_523, &Var0, &uVar1))
		{
			__LIB_11__::func_517(Var0, 3.5f);
		}
	}
	__LIB_11__::func_487(&uLocal_126, Local_142.f_523, 0);
	while (true)
	{
		SYSTEM::WAIT(0);
		func_1(&Local_142);
	}
}

void func_1(var uParam0)//Position - 0x16C
{
	int iVar0;
	__LIB_29__::func_559(&(uParam0->f_12));
	if (uParam0->f_7)
	{
		GRAPHICS::DISABLE_OCCLUSION_THIS_FRAME();
	}
	if (__LIB_32__::func_608(uParam0->f_523) && !__LIB_40__::func_775(uParam0, uParam0->f_523))
	{
		if (__LIB_11__::func_485(uParam0))
		{
			PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOUT(2 /*FRONTEND_CONTROL*/);
			PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOUT(0 /*PLAYER_CONTROL*/);
			func_1103(uParam0->f_523);
			if (!uParam0->f_11 == 2 && !__LIB_34__::func_780(uParam0))
			{
				iVar0 = 0;
				__LIB_41__::func_489(uParam0, &iVar0, 0, 0);
			}
			func_1083(uParam0, &(uParam0->f_116));
			if (uParam0->f_9)
			{
				if (!__LIB_26__::func_574(*uParam0))
				{
					func_1069(uParam0, &(uParam0->f_116), uParam0->f_593);
				}
				else
				{
					__LIB_34__::func_779(uParam0);
					if (!uParam0->f_11 == 2 && !__LIB_34__::func_780(uParam0))
					{
						__LIB_34__::func_778(uParam0);
					}
				}
			}
			__LIB_29__::func_558(uParam0);
			func_1056(uParam0);
			if (*uParam0 == 50)
			{
				__LIB_29__::func_557();
			}
			__LIB_39__::func_373(uParam0);
			switch (uParam0->f_11)
			{
				case 0:
					func_1027(uParam0);
					break;
				case 1:
					__LIB_26__::func_448(0);
					__LIB_29__::func_553(uParam0);
					func_1021(uParam0);
					if (__LIB_29__::func_552(uParam0))
					{
						if (uParam0->f_11 == 2)
						{
							uParam0->f_592 = 1;
							func_990(uParam0);
						}
					}
					else
					{
						__LIB_41__::func_376(uParam0);
					}
					break;
				case 2:
					func_990(uParam0);
					func_979(uParam0, &(uParam0->f_116));
					break;
				case 3:
					__LIB_29__::func_549(uParam0, 1);
					__LIB_41__::func_376(uParam0);
					func_964(uParam0);
					func_941(uParam0);
					__LIB_42__::func_522(uParam0);
					break;
				case 4:
					func_22(uParam0);
					func_979(uParam0, &(uParam0->f_116));
					break;
				case 5:
					uParam0->f_11 = 3;
					break;
				}
		}
	}
	else
	{
		func_1120(uParam0, 0);
	}
	if (__LIB_40__::func_771(uParam0))
	{
		func_9(uParam0);
	}
	__LIB_37__::func_257(uParam0);
}

void func_9(var uParam0)//Position - 0x3DD7
{
	func_1120(uParam0, 1);
	__LIB_34__::func_760(uParam0);
}

void func_22(var uParam0)//Position - 0x450F
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
	__LIB_11__::func_398(1);
	__LIB_29__::func_547(1);
	if (__LIB_5__::func_743(1))
	{
		if (__LIB_0__::func_154(PLAYER::PLAYER_ID(), 0, 1))
		{
			__LIB_5__::func_742();
			__LIB_5__::func_728();
		}
		else if (!__LIB_10__::func_489())
		{
			__LIB_5__::func_728();
		}
		return;
	}
	if (__LIB_10__::func_382())
	{
		__LIB_10__::func_381();
		__LIB_37__::func_279(uParam0);
	}
	__LIB_42__::func_39(uParam0, &(uParam0->f_116), -1);
	if (*uParam0 == 50 && !__LIB_29__::func_545(PLAYER::PLAYER_ID(), uParam0->f_523, 0))
	{
		uParam0->f_116.f_31 = 8;
	}
	Global_4539662 = 1;
	__LIB_26__::func_196(0, 1, 1);
	__LIB_8__::func_611(0);
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
				__LIB_29__::func_544(PLAYER::PLAYER_ID(), uParam0->f_523);
			}
			else
			{
				__LIB_29__::func_543(PLAYER::PLAYER_ID(), uParam0->f_523);
			}
			if (__LIB_20__::func_554(1))
			{
				if ((((((((__LIB_29__::func_549(uParam0, 1) && __LIB_29__::func_542(uParam0)) && __LIB_7__::func_161("HAR_MNU", *uParam0, 1)) && __LIB_34__::func_776(uParam0)) && __LIB_20__::func_112(*uParam0, 0)) && __LIB_40__::func_585(uParam0, 1)) && ((__LIB_10__::func_482(PLAYER::PLAYER_ID(), uParam0->f_523, 1) && *uParam0 != 50) || (__LIB_29__::func_545(PLAYER::PLAYER_ID(), uParam0->f_523, 1) && *uParam0 == 50))) && __LIB_11__::func_398(1)) && __LIB_29__::func_547(1))
				{
					__LIB_42__::func_37(1);
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
					func_828(&(uParam0->f_116), 0);
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
			func_819(uParam0);
			break;
		case 6:
			func_818(uParam0);
			break;
		case 5:
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (PED::HAS_PED_PRELOAD_PROP_DATA_FINISHED(PLAYER::PLAYER_PED_ID()) && PED::HAS_PED_PRELOAD_VARIATION_DATA_FINISHED(PLAYER::PLAYER_PED_ID()))
				{
					func_817(uParam0);
				}
			}
			else
			{
				func_817(uParam0);
			}
			break;
		case 2:
			__LIB_10__::func_377();
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
			if ((__LIB_20__::func_554(1) && !PED::IS_PED_INJURED(iVar5)) && !PED::IS_PED_INJURED(uParam0->f_12))
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
					if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && __LIB_4__::func_571()) && __LIB_37__::func_277(uParam0))
					{
					}
					else if (!__LIB_34__::func_775(uParam0, uParam0->f_488))
					{
						__LIB_41__::func_379(*uParam0, &Var6, &Var7);
						if (__LIB_29__::func_540(uParam0))
						{
							uParam0->f_489 = __LIB_37__::func_276(uParam0);
						}
						else
						{
							uParam0->f_489 = "player_base";
						}
						TASK::TASK_PLAY_ANIM_ADVANCED(iVar5, uParam0->f_486, uParam0->f_489, Var6, Var7, 8f, -8f, -1, 5641, 0f, 2, 1);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iVar5, false, false);
						uParam0->f_488 = __LIB_37__::func_275(uParam0);
						if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						{
							TASK::TASK_PLAY_ANIM_ADVANCED(uParam0->f_12, uParam0->f_486, uParam0->f_488, Var6, Var7, 1000f, -1000f, -1, 5640, 0f, 2, 1);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uParam0->f_12, false, false);
							ENTITY::PLAY_ENTITY_ANIM(NETWORK::NET_TO_ENT(Local_66.f_1), __LIB_29__::func_539(uParam0->f_488), uParam0->f_486, 1000f, false, true, true, 0f, 0);
							ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(NETWORK::NET_TO_ENT(Local_66.f_1));
							__LIB_29__::func_538(uParam0);
							__LIB_42__::func_325(uParam0, 1, 0);
							__LIB_29__::func_537(uParam0, uParam0->f_12, uParam0->f_488, 69, 4f, -998637568);
							__LIB_29__::func_537(uParam0, PLAYER::PLAYER_PED_ID(), uParam0->f_489, 64, 4f, -998637568);
							__LIB_29__::func_536(uParam0, NETWORK::NET_TO_ENT(Local_66.f_1), __LIB_29__::func_539(uParam0->f_488), 64, 1148846080, -998637568);
							__LIB_29__::func_535(uParam0);
							if (__LIB_29__::func_547(1))
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
							__LIB_42__::func_324(uParam0, uParam0->f_488, 0, 0, 1, -1056964608);
						}
						__LIB_42__::func_323(uParam0, __LIB_37__::func_274(uParam0, 3, uParam0->f_488));
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
						if (__LIB_29__::func_534(&(uParam0->f_529), &(uParam0->f_531)) == 1f)
						{
							uParam0->f_116.f_15 = 0;
							uParam0->f_116.f_23 = 0;
							uParam0->f_116.f_22 = 0;
							uParam0->f_488 = "";
							uParam0->f_590 = 1;
							uParam0->f_591 = 1;
							if (__LIB_29__::func_533() || __LIB_29__::func_532())
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
									if (__LIB_29__::func_533())
									{
										uParam0->f_116.f_1 = 2;
									}
									else
									{
										uParam0->f_116.f_1 = 1;
									}
								}
								else if (__LIB_29__::func_531(uParam0->f_525))
								{
								}
							}
							func_784(uParam0, iVar5);
							if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
							{
								__LIB_29__::func_538(uParam0);
								__LIB_42__::func_325(uParam0, 0, 1);
								__LIB_29__::func_537(uParam0, uParam0->f_12, "keeper_base", 69, 1148846080, -998637568);
								__LIB_29__::func_536(uParam0, NETWORK::NET_TO_ENT(Local_66.f_1), __LIB_29__::func_539("keeper_base"), 64, 1148846080, -998637568);
								__LIB_29__::func_535(uParam0);
							}
							else
							{
								__LIB_42__::func_324(uParam0, "keeper_base", 0, 1, 0, -1056964608);
							}
							__LIB_41__::func_966(uParam0, 0);
						}
						else if (__LIB_29__::func_534(&(uParam0->f_529), &(uParam0->f_531)) > 0.6f)
						{
							if (!uParam0->f_116.f_23)
							{
								func_669(uParam0);
							}
						}
						else if (__LIB_29__::func_534(&(uParam0->f_529), &(uParam0->f_531)) > fVar2)
						{
							if (uParam0->f_556 != 0)
							{
								GRAPHICS::STOP_PARTICLE_FX_LOOPED(uParam0->f_556, false);
								uParam0->f_556 = 0;
							}
							if (uParam0->f_499)
							{
								uParam0->f_489 = __LIB_37__::func_276(uParam0);
								__LIB_41__::func_379(*uParam0, &Var6, &Var7);
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
						else if (__LIB_29__::func_534(&(uParam0->f_529), &(uParam0->f_531)) > 0.4f)
						{
							if (!uParam0->f_116.f_23)
							{
								func_669(uParam0);
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
										__LIB_0__::func_353(385, Global_4537616[uParam0->f_116.f_1], -1);
										__LIB_41__::func_486(8);
										__LIB_0__::func_427(753, Global_4537616[uParam0->f_116.f_1], -1, 1, 0);
										__LIB_0__::func_427(2053, Global_4537616[uParam0->f_116.f_1], -1, 1, 0);
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
									func_649(PLAYER::PLAYER_PED_ID(), 1, (__LIB_34__::func_774(uParam0->f_116.f_1) - 1), uParam0->f_634, 0, 0, uParam0->f_275, 1);
									if (PLAYER::PLAYER_PED_ID() != iVar5)
									{
										func_649(iVar5, 1, (__LIB_34__::func_774(uParam0->f_116.f_1) - 1), uParam0->f_634, 0, 0, uParam0->f_275, 1);
									}
									__LIB_41__::func_486(8);
									__LIB_0__::func_353(448, (__LIB_34__::func_774(uParam0->f_116.f_1) - 1), -1);
									func_648(88, 1f, -1, 1);
									uParam0->f_273 = __LIB_34__::func_774(uParam0->f_116.f_1);
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
									func_649(PLAYER::PLAYER_PED_ID(), 4, (uParam0->f_611 - 1), uParam0->f_634, 0, 0, 1f, 1);
									__LIB_0__::func_353(451, (uParam0->f_611 - 1), -1);
									func_648(91, 1f, -1, 1);
									if ((uParam0->f_611 - 1) == -1 || (uParam0->f_611 - 1) > 15)
									{
										func_649(PLAYER::PLAYER_PED_ID(), 2, __LIB_0__::func_228(449, __LIB_0__::func_5()), uParam0->f_634, 0, 0, 1f, 1);
										func_648(89, 1f, -1, 1);
									}
									else
									{
										func_649(PLAYER::PLAYER_PED_ID(), 2, __LIB_0__::func_228(449, __LIB_0__::func_5()), uParam0->f_634, 0, 0, 0f, 1);
										func_648(89, 0f, -1, 1);
									}
									func_648(__LIB_0__::func_229(4), 1f, -1, 1);
									__LIB_41__::func_486(8);
									if (PLAYER::PLAYER_PED_ID() != iVar5)
									{
										func_649(iVar5, 4, (uParam0->f_611 - 1), uParam0->f_634, 0, 0, 1f, 1);
										if ((uParam0->f_611 - 1) == -1 || (uParam0->f_611 - 1) > 15)
										{
											func_649(iVar5, 2, __LIB_0__::func_228(449, __LIB_0__::func_5()), uParam0->f_634, 0, 0, 1f, 1);
										}
										else
										{
											func_649(iVar5, 2, __LIB_0__::func_228(449, __LIB_0__::func_5()), uParam0->f_634, 0, 0, 0f, 1);
										}
									}
								}
							}
							else if (__LIB_29__::func_531(uParam0->f_525))
							{
								if (__LIB_39__::func_370(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), uParam0->f_525, uParam0->f_116.f_1, &Var8, __LIB_29__::func_528(uParam0->f_523)))
								{
									if (Var8.f_9 == 0)
									{
										if (!func_638(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), &Var8, uParam0))
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
												__LIB_0__::func_353(385, Var8.f_8, -1);
												__LIB_41__::func_486(8);
												__LIB_0__::func_427(753, Var8.f_8, -1, 1, 0);
												__LIB_0__::func_427(2053, Var8.f_8, -1, 1, 0);
												__LIB_0__::func_427(2153, uParam0->f_634, -1, 1, 0);
												__LIB_0__::func_427(2160, uParam0->f_635, -1, 1, 0);
												Global_78130[1 /*14*/] = { __LIB_35__::func_544(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), 2, Var8.f_8, -1) };
												__LIB_0__::func_353(389, Global_78130[1 /*14*/].f_4, -1);
												__LIB_0__::func_353(401, Global_78130[1 /*14*/].f_3, -1);
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
										func_649(PLAYER::PLAYER_PED_ID(), Var8.f_5, Var8.f_6, uParam0->f_634, uParam0->f_635, uParam0->f_637, uParam0->f_639, 1);
										if (Global_78319)
										{
											if (Var8.f_5 == 7)
											{
												func_648(157, SYSTEM::TO_FLOAT(Var8.f_6), -1, 1);
												uParam0->f_634 = -1;
												uParam0->f_635 = -1;
												uParam0->f_636 = uParam0->f_635;
											}
											else
											{
												__LIB_0__::func_353(__LIB_0__::func_230(Var8.f_5), Var8.f_6, -1);
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
													func_595(Var8.f_5, uParam0->f_634, uParam0->f_637, -1, 1);
												}
												if (uParam0->f_635 >= 0)
												{
													__LIB_0__::func_427(__LIB_0__::func_225(Var8.f_5), uParam0->f_635, -1, 1, 0);
												}
												func_648(__LIB_0__::func_229(Var8.f_5), uParam0->f_639, -1, 1);
												if (uParam0->f_525 == 11)
												{
													if (Var8.f_5 == 4)
													{
														__LIB_0__::func_353(__LIB_0__::func_230(5), 255, -1);
													}
													else if (Var8.f_5 == 5)
													{
														__LIB_0__::func_353(__LIB_0__::func_230(4), 255, -1);
													}
												}
											}
										}
										if (PLAYER::PLAYER_PED_ID() != iVar5)
										{
											func_649(iVar5, Var8.f_5, Var8.f_6, uParam0->f_634, uParam0->f_635, uParam0->f_637, uParam0->f_639, 1);
										}
									}
								}
							}
						}
						else if (__LIB_29__::func_534(&(uParam0->f_529), &(uParam0->f_531)) > fVar1)
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
					func_589(iVar5);
					func_784(uParam0, iVar5);
				}
				if (__LIB_10__::func_379(&uLocal_126))
				{
				}
				else if (!uParam0->f_116.f_22 && !uParam0->f_116.f_15)
				{
					if (PAD::HAVE_CONTROLS_CHANGED(2 /*FRONTEND_CONTROL*/))
					{
						uVar9 = uParam0->f_116.f_1;
						uParam0->f_590 = 1;
						func_589(iVar5);
						func_784(uParam0, iVar5);
						uParam0->f_116.f_1 = uVar9;
						__LIB_2__::func_183(uParam0->f_116.f_1, 1, 1);
						uParam0->f_725 = __LIB_3__::func_979();
					}
					else if ((((!HUD::IS_PAUSE_MENU_ACTIVE() && !PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED()) && !HUD::IS_WARNING_MESSAGE_ACTIVE()) && !Global_100493.f_1458) && !NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
					{
						__LIB_41__::func_966(uParam0, 1);
						switch (uParam0->f_525)
						{
							case 0:
								func_585(uParam0, iVar5);
								break;
							case 4:
								func_584(uParam0, iVar5);
								break;
							case 1:
								func_560(uParam0, iVar5);
								break;
							case 2:
								if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
								{
									func_521(uParam0, iVar5);
								}
								else
								{
									func_560(uParam0, iVar5);
								}
								break;
							case 3:
								func_518(uParam0, iVar5);
								break;
							default:
								if (__LIB_29__::func_531(uParam0->f_525))
								{
									func_437(uParam0, iVar5);
								}
								break;
							}
					}
					if (__LIB_39__::func_370(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), uParam0->f_525, uParam0->f_116.f_1, &Var10, __LIB_29__::func_528(uParam0->f_523)))
					{
						if (__LIB_29__::func_508(&(Var10.f_1), uParam0->f_525, Var10.f_0) && !func_638(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), &Var10, uParam0))
						{
							StringCopy(&cVar11, "", 16);
							__LIB_10__::func_199(&cVar11);
							if (MISC::GET_HASH_KEY(&cVar11) == 0)
							{
								__LIB_9__::func_27("HAIR_SALE" /* GXT: A sale is active on this item. */, 0, 0);
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
							__LIB_11__::func_373(&uVar12);
							if (MISC::GET_HASH_KEY(&uVar12) == 0)
							{
								if (uParam0->f_525 == 1)
								{
									__LIB_1__::func_342("HAIR_UNLOCK", 0, 0);
									__LIB_4__::func_999(__LIB_22__::func_245(Global_4537616[uParam0->f_116.f_1]));
								}
								else if (uParam0->f_525 == 2)
								{
									__LIB_1__::func_342("HAIR_UNLOCK", 0, 0);
									__LIB_4__::func_999(__LIB_15__::func_535(__LIB_29__::func_507(__LIB_34__::func_774(uParam0->f_116.f_1))));
								}
								else if (uParam0->f_525 == 3)
								{
									__LIB_1__::func_342("HAIR_UNLOCK", 0, 0);
									__LIB_4__::func_999(__LIB_15__::func_535(__LIB_29__::func_506(uParam0->f_116.f_1)));
								}
								else if (__LIB_29__::func_531(uParam0->f_525))
								{
									if (__LIB_39__::func_370(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), uParam0->f_525, uParam0->f_116.f_1, &Var13, __LIB_29__::func_528(uParam0->f_523)))
									{
										bVar14 = true;
										if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && __LIB_4__::func_571()) && !MISC::IS_STRING_NULL_OR_EMPTY(&(Var13.f_1)))
										{
											__LIB_37__::func_265(&sVar15, uParam0->f_525, Var13.f_1, 0, 0);
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
												else if (__LIB_22__::func_245(Var13.f_8) == 0)
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
												else if (__LIB_15__::func_535(Var13.f_10) == 0)
												{
													bVar14 = false;
												}
											}
										}
										if (!bVar14)
										{
											if (Var13.f_9 == 0)
											{
												__LIB_1__::func_342("HAIR_LCKPC", 0, 0);
											}
											else if (Var13.f_9 == 1 || Var13.f_9 == 2)
											{
												if (Var13.f_5 == 1)
												{
													__LIB_1__::func_342("HAIR_LCKPC", 0, 0);
												}
												else if (Var13.f_5 == 4)
												{
													__LIB_1__::func_342("HAIR_LCKPC", 0, 0);
												}
											}
										}
										else if (Var13.f_9 == 0)
										{
											__LIB_1__::func_342("HAIR_UNLOCK", 0, 0);
											__LIB_4__::func_999(__LIB_22__::func_245(Var13.f_8));
										}
										else if (Var13.f_9 == 1 || Var13.f_9 == 2)
										{
											if (Var13.f_5 == 1)
											{
												__LIB_1__::func_342("HAIR_UNLOCK", 0, 0);
												__LIB_4__::func_999(__LIB_15__::func_535(Var13.f_10));
											}
											else if (Var13.f_5 == 4)
											{
												__LIB_1__::func_342("HAIR_UNLOCK", 0, 0);
												__LIB_4__::func_999(__LIB_15__::func_535(Var13.f_10));
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
							__LIB_11__::func_373(&uVar12);
							if (MISC::GET_HASH_KEY(&uVar12) == 0)
							{
								if (uParam0->f_116.f_1 == 0)
								{
									if (func_368(uParam0, ENTITY::GET_ENTITY_MODEL(iVar5), 1))
									{
										__LIB_1__::func_342("HAIR_UNLOCK_M", 0, 0);
									}
								}
								else if (uParam0->f_116.f_1 == 1)
								{
									if (func_368(uParam0, ENTITY::GET_ENTITY_MODEL(iVar5), 2))
									{
										__LIB_1__::func_342("HAIR_UNLOCK_M", 0, 0);
									}
								}
								else if (uParam0->f_116.f_1 == 2)
								{
									if (func_368(uParam0, ENTITY::GET_ENTITY_MODEL(iVar5), 3))
									{
										__LIB_1__::func_342("HAIR_UNLOCK_M", 0, 0);
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
							__LIB_11__::func_373(&uVar12);
							if (MISC::GET_HASH_KEY(&uVar12) == 0)
							{
								if (BitTest(uParam0->f_719[(uParam0->f_715 / 32)], (uParam0->f_715 % 32)))
								{
									__LIB_1__::func_342("HAIR_UNLOCK_M", 0, 0);
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
							__LIB_11__::func_373(&uVar12);
							if (MISC::GET_HASH_KEY(&uVar12) == 0)
							{
								if (uParam0->f_494)
								{
									if (__LIB_10__::func_174(&(uParam0->f_566)))
									{
										__LIB_1__::func_342("SHOP_UNLOCKDLC" /* GXT: This item has just been unlocked, it is part of the ~a~ Pack. */, 4000, 0);
										__LIB_2__::func_353(__LIB_10__::func_175(&(uParam0->f_566), 0));
									}
									else if (__LIB_10__::func_173(&(uParam0->f_566)))
									{
										__LIB_1__::func_342("SHOP_UNLOCKDLC3" /* GXT: This item has just been unlocked, it is part of the ~a~ Special. */, 4000, 0);
										__LIB_2__::func_353(__LIB_10__::func_175(&(uParam0->f_566), 0));
									}
									else if (__LIB_10__::func_172(&(uParam0->f_566)))
									{
										__LIB_1__::func_342("SHOP_UNLOCKDLC4" /* GXT: This item has just been unlocked, it is part of the ~a~ Surprise. */, 4000, 0);
										__LIB_2__::func_353(__LIB_10__::func_175(&(uParam0->f_566), 0));
									}
									else if (__LIB_10__::func_171(&(uParam0->f_566)))
									{
										__LIB_1__::func_342("SHOP_UNLOCKDLC6" /* GXT: This item has just been unlocked, it is part of ~a~. */, 4000, 0);
										__LIB_2__::func_353(__LIB_10__::func_175(&(uParam0->f_566), 0));
									}
									else if (__LIB_10__::func_170(&(uParam0->f_566)))
									{
										__LIB_1__::func_342("SHOP_UNLOCKDLC7" /* GXT: This item has just been unlocked, it is part of the Halloween Surprise. */, 4000, 0);
									}
									else if (__LIB_10__::func_169(&(uParam0->f_566)))
									{
										__LIB_1__::func_342("SHOP_UNLOCKDLC8", 4000, 0);
									}
									else
									{
										__LIB_1__::func_342("SHOP_UNLOCKDLC2" /* GXT: This item has just been unlocked, it is part of The ~a~. */, 4000, 0);
										__LIB_2__::func_353(__LIB_10__::func_175(&(uParam0->f_566), 1));
									}
								}
								else
								{
									__LIB_1__::func_342("HAIR_UNLOCK_N", 4000, 0);
								}
								uParam0->f_500 = 1;
							}
						}
					}
				}
				if (func_340(&uLocal_126))
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
						__LIB_11__::func_373(&uVar16);
						if (MISC::GET_HASH_KEY(&uVar16) == 0)
						{
							if (uParam0->f_494 && !MISC::IS_STRING_NULL_OR_EMPTY(__LIB_10__::func_175(&(uParam0->f_566), 0)))
							{
								if (__LIB_10__::func_174(&(uParam0->f_566)))
								{
									__LIB_1__::func_342("SHOP_DLC_PACK" /* GXT: Part of the ~a~ Pack. */, 0, 0);
									__LIB_2__::func_353(__LIB_10__::func_175(&(uParam0->f_566), 0));
								}
								else if (__LIB_10__::func_173(&(uParam0->f_566)))
								{
									__LIB_1__::func_342("SHOP_DLC_PACK3" /* GXT: Part of the ~a~ Special. */, 0, 0);
									__LIB_2__::func_353(__LIB_10__::func_175(&(uParam0->f_566), 0));
								}
								else if (__LIB_10__::func_172(&(uParam0->f_566)))
								{
									__LIB_1__::func_342("SHOP_DLC_PACK4" /* GXT: Part of the ~a~ Surprise. */, 0, 0);
									__LIB_2__::func_353(__LIB_10__::func_175(&(uParam0->f_566), 0));
								}
								else if (__LIB_10__::func_171(&(uParam0->f_566)))
								{
									__LIB_1__::func_342("SHOP_DLC_PACK6" /* GXT: Part of ~a~. */, 0, 0);
									__LIB_2__::func_353(__LIB_10__::func_175(&(uParam0->f_566), 0));
								}
								else if (__LIB_10__::func_170(&(uParam0->f_566)))
								{
									__LIB_1__::func_342("SHOP_DLC_PACK7" /* GXT: Part of the Halloween Surprise. */, 0, 0);
								}
								else if (__LIB_10__::func_169(&(uParam0->f_566)))
								{
									__LIB_1__::func_342("SHOP_DLC_PACK8", 0, 0);
								}
								else
								{
									__LIB_1__::func_342("SHOP_DLC_PACK2" /* GXT: Part of The ~a~. */, 0, 0);
									__LIB_2__::func_353(__LIB_10__::func_175(&(uParam0->f_566), 1));
								}
							}
						}
					}
					HUD::SHOW_HUD_COMPONENT_THIS_FRAME(3);
					HUD::SHOW_HUD_COMPONENT_THIS_FRAME(4);
					HUD::SHOW_HUD_COMPONENT_THIS_FRAME(5);
					HUD::SHOW_HUD_COMPONENT_THIS_FRAME(13);
					__LIB_25__::func_745(1, *uParam0, 1, 0, 1, -1082130432, 0, 0, -1);
					fVar3 = 0f;
					if (MISC::IS_PC_VERSION())
					{
						if (!__LIB_29__::func_493(uParam0))
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
					GRAPHICS::DRAW_SCALEFORM_MOVIE(uParam0->f_614, (0.113f + fVar17), (0.255f + __LIB_9__::func_927()), Global_23149, 0.5972f, 255, 255, 255, 255, 0);
					GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
					GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
					GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
					GRAPHICS::DRAW_SCALEFORM_MOVIE(uParam0->f_624, ((0.113f + fVar17) + fVar3), (0.255f + __LIB_9__::func_927()), Global_23149, 0.5972f, 255, 255, 255, 255, 0);
					GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
					if (((uParam0->f_525 == 1 || uParam0->f_525 == 2) || uParam0->f_525 == 6) || uParam0->f_525 == 11)
					{
						__LIB_11__::func_373(&uVar16);
						if (MISC::GET_HASH_KEY(&uVar16) == 0)
						{
							if (uParam0->f_494 && !MISC::IS_STRING_NULL_OR_EMPTY(__LIB_10__::func_175(&(uParam0->f_566), 0)))
							{
								if (__LIB_10__::func_174(&(uParam0->f_566)))
								{
									__LIB_1__::func_342("SHOP_DLC_PACK" /* GXT: Part of the ~a~ Pack. */, 0, 0);
									__LIB_2__::func_353(__LIB_10__::func_175(&(uParam0->f_566), 0));
								}
								else if (__LIB_10__::func_173(&(uParam0->f_566)))
								{
									__LIB_1__::func_342("SHOP_DLC_PACK3" /* GXT: Part of the ~a~ Special. */, 0, 0);
									__LIB_2__::func_353(__LIB_10__::func_175(&(uParam0->f_566), 0));
								}
								else if (__LIB_10__::func_172(&(uParam0->f_566)))
								{
									__LIB_1__::func_342("SHOP_DLC_PACK4" /* GXT: Part of the ~a~ Surprise. */, 0, 0);
									__LIB_2__::func_353(__LIB_10__::func_175(&(uParam0->f_566), 0));
								}
								else if (__LIB_10__::func_171(&(uParam0->f_566)))
								{
									__LIB_1__::func_342("SHOP_DLC_PACK6" /* GXT: Part of ~a~. */, 0, 0);
									__LIB_2__::func_353(__LIB_10__::func_175(&(uParam0->f_566), 0));
								}
								else if (__LIB_10__::func_170(&(uParam0->f_566)))
								{
									__LIB_1__::func_342("SHOP_DLC_PACK7" /* GXT: Part of the Halloween Surprise. */, 0, 0);
								}
								else if (__LIB_10__::func_169(&(uParam0->f_566)))
								{
									__LIB_1__::func_342("SHOP_DLC_PACK8", 0, 0);
								}
								else
								{
									__LIB_1__::func_342("SHOP_DLC_PACK2" /* GXT: Part of The ~a~. */, 0, 0);
									__LIB_2__::func_353(__LIB_10__::func_175(&(uParam0->f_566), 1));
								}
							}
						}
					}
					if (__LIB_39__::func_370(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), uParam0->f_525, uParam0->f_116.f_1, &Var18, __LIB_29__::func_528(uParam0->f_523)))
					{
						if (__LIB_29__::func_508(&(Var18.f_1), uParam0->f_525, Var18.f_0) && !func_638(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), &Var18, uParam0))
						{
							StringCopy(&cVar19, "", 16);
							__LIB_10__::func_199(&cVar19);
							if (MISC::GET_HASH_KEY(&cVar19) == 0)
							{
								__LIB_9__::func_27("HAIR_SALE" /* GXT: A sale is active on this item. */, 0, 0);
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
								if (__LIB_7__::func_172(29, 1, 1, &fVar20, &fVar21, 0))
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
					func_301(uParam0);
				}
				else
				{
					PED::RELEASE_PED_PRELOAD_PROP_DATA(PLAYER::PLAYER_PED_ID());
					PED::RELEASE_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID());
				}
				if (!PED::IS_PED_INJURED(uParam0->f_12))
				{
					TASK::CLEAR_PED_TASKS(uParam0->f_12);
					__LIB_37__::func_260(uParam0, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_12, true);
				}
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					__LIB_37__::func_259();
					__LIB_29__::func_538(uParam0);
				}
				__LIB_7__::func_49(1, *uParam0);
				__LIB_34__::func_766(uParam0);
				__LIB_26__::func_428(*uParam0, 0);
				func_122(uParam0);
				__LIB_9__::func_906(1);
				uParam0->f_503.f_19 = 0;
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (!__LIB_26__::func_421(PLAYER::PLAYER_PED_ID()))
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
								__LIB_25__::func_43(uParam0->f_724, 1, -1);
								uParam0->f_724 = -1;
							}
							func_589(PLAYER::PLAYER_PED_ID());
						}
					}
				}
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					HUD::REMOVE_MULTIPLAYER_WALLET_CASH();
					HUD::REMOVE_MULTIPLAYER_BANK_CASH();
				}
				__LIB_41__::func_965(&(uParam0->f_116), 0, 0, 1, 1);
				__LIB_32__::func_500();
				__LIB_42__::func_37(0);
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (__LIB_6__::func_401(1) && __LIB_0__::func_357(PLAYER::PLAYER_ID()))
					{
					}
					else
					{
						func_47(PLAYER::PLAYER_PED_ID(), -1);
					}
				}
				if (*uParam0 != 50 && __LIB_10__::func_482(PLAYER::PLAYER_ID(), uParam0->f_523, 1))
				{
					__LIB_10__::func_558(PLAYER::PLAYER_ID(), uParam0->f_523);
				}
				if (*uParam0 == 50 && __LIB_29__::func_545(PLAYER::PLAYER_ID(), uParam0->f_523, 0))
				{
					__LIB_29__::func_487(PLAYER::PLAYER_ID(), uParam0->f_523);
				}
				if (!Global_78319)
				{
					func_33(PLAYER::PLAYER_PED_ID(), 1);
				}
				if (Global_4535613)
				{
					if (Global_78319)
					{
						__LIB_6__::func_371(-1326764176, __LIB_6__::func_900(1, 1));
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
				__LIB_11__::func_412(&(uParam0->f_236), 300);
				if (((((TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD")) == 7 || uParam0->f_236 < -75) || uParam0->f_236 > 75) || uParam0->f_236.f_1 < -75) || uParam0->f_236.f_1 > 75) || MISC::IS_POSITION_OCCUPIED(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, 1.5f, 0f), 0.2f, false, true, true, false, false, PLAYER::PLAYER_PED_ID(), false))
				{
					__LIB_32__::func_500();
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !PED::IS_PED_INJURED(uParam0->f_12)) && __LIB_11__::func_398(0))
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
						__LIB_34__::func_761();
					}
					uParam0->f_592 = 0;
					uParam0->f_116.f_17 = 0;
					uParam0->f_501 = 0;
					uParam0->f_11 = 5;
				}
			}
			else
			{
				if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !PED::IS_PED_INJURED(uParam0->f_12)) && __LIB_11__::func_398(0))
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
					__LIB_34__::func_761();
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
			__LIB_10__::func_96(&(uParam0->f_51));
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			__LIB_7__::func_49(1, *uParam0);
			__LIB_34__::func_766(uParam0);
			__LIB_26__::func_428(*uParam0, 0);
			func_122(uParam0);
			uParam0->f_503.f_19 = 0;
			func_301(uParam0);
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			}
			__LIB_41__::func_965(&(uParam0->f_116), 1, 1, 1, 1);
			__LIB_9__::func_906(1);
			__LIB_32__::func_500();
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				__LIB_37__::func_259();
				__LIB_29__::func_538(uParam0);
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
				__LIB_37__::func_260(uParam0, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_12, true);
			}
			if (Global_4535613)
			{
				if (Global_78319)
				{
					__LIB_6__::func_371(-1326764176, __LIB_6__::func_900(1, 1));
				}
			}
			__LIB_42__::func_37(0);
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (__LIB_6__::func_401(1) && __LIB_0__::func_357(PLAYER::PLAYER_ID()))
				{
				}
				else
				{
					func_47(PLAYER::PLAYER_PED_ID(), -1);
				}
			}
			if (*uParam0 != 50 && __LIB_10__::func_482(PLAYER::PLAYER_ID(), uParam0->f_523, 1))
			{
				__LIB_10__::func_558(PLAYER::PLAYER_ID(), uParam0->f_523);
			}
			if (*uParam0 == 50 && __LIB_29__::func_545(PLAYER::PLAYER_ID(), uParam0->f_523, 0))
			{
				__LIB_29__::func_487(PLAYER::PLAYER_ID(), uParam0->f_523);
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
	__LIB_11__::func_359(&(uParam0->f_503), 1);
}

void func_33(int iParam0, int iParam1)//Position - 0x71DA
{
	bool bVar0;
	struct<27> Var1;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		bVar0 = __LIB_20__::func_509(iParam0);
		if (__LIB_0__::func_317(bVar0))
		{
			Var1 = 12;
			Var1.f_13 = 12;
			Var1.f_26 = 12;
			Var1.f_39 = 9;
			Var1.f_49 = 9;
			__LIB_39__::func_391(iParam0, &Var1, 1, -1);
			__LIB_0__::func_353(1306, Var1[0], -1);
			__LIB_0__::func_353(1307, Var1[1], -1);
			__LIB_0__::func_353(1308, Var1[2], -1);
			__LIB_0__::func_353(1318, Var1.f_13[0], -1);
			__LIB_0__::func_353(1319, Var1.f_13[1], -1);
			__LIB_0__::func_353(1320, Var1.f_13[2], -1);
			__LIB_0__::func_353(1330, Var1.f_26[0], -1);
			__LIB_0__::func_353(1331, Var1.f_26[1], -1);
			__LIB_0__::func_353(1332, Var1.f_26[2], -1);
			Global_100166[bVar0 /*65*/][0] = Var1[0];
			Global_100166[bVar0 /*65*/][1] = Var1[1];
			Global_100166[bVar0 /*65*/][2] = Var1[2];
			Global_100166[bVar0 /*65*/].f_13[0] = Var1.f_13[0];
			Global_100166[bVar0 /*65*/].f_13[1] = Var1.f_13[1];
			Global_100166[bVar0 /*65*/].f_13[2] = Var1.f_13[2];
			Global_100166[bVar0 /*65*/].f_26[0] = Var1.f_26[0];
			Global_100166[bVar0 /*65*/].f_26[1] = Var1.f_26[1];
			Global_100166[bVar0 /*65*/].f_26[2] = Var1.f_26[2];
			if (!__LIB_6__::func_854(0) || iParam1)
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

void func_47(int iParam0, int iParam1)//Position - 0x809E
{
	struct<65> Var0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		Var0 = 12;
		Var0.f_13 = 12;
		Var0.f_26 = 12;
		Var0.f_39 = 9;
		Var0.f_49 = 9;
		__LIB_39__::func_391(iParam0, &Var0, 1, iParam1);
		__LIB_37__::func_364(iParam0, Var0, iParam1);
	}
}

int func_106(int iParam0, int iParam1, int iParam2)//Position - 0x9A36
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return __LIB_0__::func_534(iParam0, iParam1, iParam2);
}

void func_122(var uParam0)//Position - 0xAA31
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

int func_123(var uParam0)//Position - 0xAA85
{
	int iVar0;
	iVar0 = __LIB_29__::func_481();
	if (uParam0->f_640.f_68 != iVar0)
	{
		if (iVar0 == 0)
		{
			func_278(0);
			func_127(PLAYER::PLAYER_PED_ID(), 1);
			__LIB_9__::func_41(0);
			uParam0->f_640.f_68 = 0;
		}
		return 1;
	}
	return 0;
}

void func_127(int iParam0, int iParam1)//Position - 0xAB1B
{
	bool bVar0;
	int iVar1;
	struct<65> Var2;
	int iVar3;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		bVar0 = __LIB_20__::func_509(iParam0);
		if (__LIB_0__::func_317(bVar0))
		{
			if (bVar0 == 2)
			{
				iVar1 = func_1206(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					__LIB_0__::func_358(bVar0);
					func_137(iParam0, &(Global_113386.f_2363.f_539[bVar0 /*65*/]), 0, 0, 1, 0);
				}
			}
			Var2 = 12;
			Var2.f_13 = 12;
			Var2.f_26 = 12;
			Var2.f_39 = 9;
			Var2.f_49 = 9;
			__LIB_39__::func_391(iParam0, &Var2, 1, -1);
			Global_100166[bVar0 /*65*/] = { Var2 };
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				__LIB_40__::func_731();
			}
			if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != MISC::GET_HASH_KEY("clothes_shop_sp") || (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("lester1")) == 0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("michael4")) == 0))
			{
				if (iParam1 || ((((((!__LIB_0__::func_39(0) && !__LIB_0__::func_39(1)) && !__LIB_0__::func_39(2)) && !__LIB_0__::func_39(3)) && !__LIB_0__::func_39(4)) && !__LIB_0__::func_39(9)) && !__LIB_0__::func_39(10)))
				{
					Global_113386.f_2363.f_539[bVar0 /*65*/] = { Var2 };
					Global_113386.f_2363.f_539.f_2391[bVar0] = __LIB_0__::func_352(iParam0);
					iVar3 = 0;
					while (iVar3 < 12)
					{
						Global_113386.f_2363.f_539.f_204[iVar3 /*4*/][bVar0] = __LIB_6__::func_795(iParam0, __LIB_0__::func_33(iVar3));
						iVar3++;
					}
					iVar3 = 0;
					while (iVar3 < 12)
					{
						Global_113386.f_2363.f_539.f_204[iVar3 /*4*/][bVar0] = __LIB_6__::func_795(iParam0, __LIB_0__::func_33(iVar3));
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

void func_137(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)//Position - 0xB350
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
		bVar0 = __LIB_20__::func_509(iParam0);
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
		if (__LIB_0__::func_317(bVar0))
		{
			Global_113386.f_2363.f_539[bVar0 /*65*/].f_59 = uParam1->f_59;
			Global_113386.f_2363.f_539[bVar0 /*65*/].f_60 = uParam1->f_60;
			Global_113386.f_2363.f_539[bVar0 /*65*/].f_61 = uParam1->f_61;
			if (func_276(iParam0, iVar1, &iVar2, 0))
			{
				func_1193(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
			Global_113386.f_2363.f_539[bVar0 /*65*/].f_62 = uParam1->f_62;
			Global_113386.f_2363.f_539[bVar0 /*65*/].f_63 = uParam1->f_63;
			Global_113386.f_2363.f_539[bVar0 /*65*/].f_64 = uParam1->f_64;
			if (func_274(iParam0, iVar1, &iVar2))
			{
				func_1193(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			bVar4 = func_273(iParam0);
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
			func_140(iParam0, 2, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			if (!bParam2)
			{
				iVar7 = __LIB_0__::func_350(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_140(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			}
			if (!bParam3)
			{
				iVar8 = __LIB_6__::func_766(iParam0, uParam1->f_39[0], uParam1->f_49[0], 0);
				func_140(iParam0, 14, iVar8, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
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

int func_140(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)//Position - 0xB82C
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
			func_263(iVar5, iParam1, iParam2, 1);
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
			uVar14 = { func_260(iVar5, iParam2) };
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
						func_263(iVar5, 10, 0, 1);
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
									func_263(iVar5, iVar0, uVar14[iVar0], 1);
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
								func_140(iParam0, iVar0, uVar14[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (BitTest(Global_78130[1 /*14*/].f_6, 1))
							{
								func_263(iVar5, iVar0, uVar14[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, iVar0, func_255(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					uVar16 = { func_260(iVar5, 0) };
					func_140(iParam0, iVar0, uVar16[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_252(iParam0, 11, uVar14[11], iParam6, 0);
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
				func_263(iVar5, 14, uVar18[iVar1], 1);
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
							func_140(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_263(iVar5, iParam1, iParam2, 1);
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			if (BitTest(Global_78130[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HAIR"), 1))
			{
			}
			else if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 1, joaat("HAIR_SHRINK")))
			{
				func_140(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, iParam1, iParam2, -1) };
			}
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			func_243(iParam0);
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
						func_140(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = __LIB_40__::func_849(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_140(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					iVar27 = func_242(iVar5, iVar24, iVar23, iVar25);
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
							func_140(iParam0, 8, iVar29, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_140(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, iParam1, iParam2, -1) };
								iVar8 = -99;
							}
							else if (iVar30 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								func_140(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_140(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_140(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_140(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_F_Freemode_01"))
							{
								func_140(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				__LIB_31__::func_927(iVar5, iParam2);
				if (!bParam13)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 10));
				}
			}
			func_252(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_242(iVar5, func_255(iParam0, 8, -1), iParam2, func_255(iParam0, 4, -1));
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
				func_183(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar43 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar43, joaat("GLOVES"), 0))
			{
				iVar44 = __LIB_6__::func_795(iParam0, 11);
				iVar45 = __LIB_6__::func_795(iParam0, 4);
				iVar46 = func_242(iVar5, iParam2, iVar44, iVar45);
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
			func_252(iParam0, iParam1, iParam2, iParam6, 0);
			iVar49 = __LIB_6__::func_795(iParam0, 11);
			if (__LIB_6__::func_808(iVar5, iVar49, -1))
			{
				iVar50 = __LIB_6__::func_807(iVar5, iParam2, Global_78130[1 /*14*/].f_4);
				__LIB_31__::func_927(iVar5, iVar50);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_242(iVar5, iParam2, __LIB_6__::func_795(iParam0, 11), __LIB_6__::func_795(iParam0, 4));
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
						func_140(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						func_140(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_242(iVar5, __LIB_6__::func_795(iParam0, 8), __LIB_6__::func_795(iParam0, 11), iParam2);
			}
			iVar59 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar59, joaat("GLOVES"), 0))
			{
				iVar60 = func_242(iVar5, iVar58, iVar57, iParam2);
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
						func_140(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
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
								iVar6 = func_242(iVar5, iVar3, __LIB_6__::func_795(iParam0, 11), __LIB_6__::func_795(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = __LIB_40__::func_849(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_140(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						if (!func_160(iParam0, 9, iVar63))
						{
							func_140(iParam0, 9, iVar63, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_140(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
					{
						func_140(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						func_140(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("MP_F_Freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar65 = func_255(iParam0, 4, -1);
					iVar66 = iParam2;
				}
				else
				{
					iVar65 = iParam2;
					iVar66 = func_255(iParam0, 11, -1);
				}
				if (__LIB_6__::func_802(iVar5, 11, iVar66, -1))
				{
					if (!__LIB_6__::func_801(iVar5, 4, iVar65, -1))
					{
						if (__LIB_6__::func_800(iVar5, 4, iVar65, &uVar67))
						{
							func_140(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (__LIB_6__::func_801(iVar5, 4, iVar65, -1))
				{
					if (__LIB_6__::func_799(iVar5, 4, iVar65, &uVar67))
					{
						func_140(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_140(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_6__::func_758(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_140(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_140(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_6__::func_758(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_140(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_140(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_6__::func_758(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_140(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_140(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_6__::func_758(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_140(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				func_243(iParam0);
				iVar81 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
				iVar82 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
				iVar83 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar81, iVar82);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar83, joaat("FORCE_PROP"), 0))
				{
					iVar3 = __LIB_40__::func_849(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_140(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = __LIB_40__::func_849(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_140(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_141(iParam0, &uVar4))
		{
			func_140(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_140(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar8 != -99)
	{
		func_140(iParam0, 8, iVar8, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_140(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar10 != -1)
	{
		iVar84 = __LIB_0__::func_254(iVar5, func_255(iParam0, 3, -1), iVar10);
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
				func_140(iParam0, 3, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_141(int iParam0, var uParam1)//Position - 0xD6D7
{
	int iVar0;
	int iVar1;
	*uParam1 = func_255(PLAYER::PLAYER_PED_ID(), 2, -1);
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
		if (!func_160(iParam0, iVar1, iVar0))
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

int func_160(int iParam0, int iParam1, int iParam2)//Position - 0x11994
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
		uVar8 = { func_260(iVar0, iParam2) };
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
				if (!func_160(iParam0, iVar4, uVar8[iVar4]))
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
							if (!func_160(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_35__::func_544(iVar0, 14, iVar6, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar5)
									{
										if (func_160(iParam0, 14, iVar6))
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
			if (!func_160(iParam0, 14, uVar11[iVar10]))
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
						return func_160(iParam0, 4, uVar18);
					}
				}
				else if (__LIB_6__::func_799(iVar0, 4, iParam2, &uVar18))
				{
					return func_160(iParam0, 4, uVar18);
				}
			}
			Global_78129 = (Global_78129 - 1);
		}
	}
	return 0;
}

void func_183(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x19105
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
	func_184(iParam0, bParam3, 0, -1);
}

void func_184(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x19152
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
		bVar3 = func_222(iParam0, 0);
		bVar4 = __LIB_31__::func_887(iParam0);
		bVar5 = func_213(iParam0, iParam3);
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
							if (!__LIB_31__::func_925(Var9.f_2, Var9.f_3, iVar10))
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

int func_213(int iParam0, int iParam1)//Position - 0x27FB6
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
				iVar3 = func_255(iParam0, 11, -1);
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
				iVar5 = func_255(iParam0, 11, -1);
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

int func_222(int iParam0, bool bParam1)//Position - 0x28416
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
							iVar2 = __LIB_18__::func_431(joaat("MP_M_Freemode_01"), 11, func_255(iParam0, 11, -1), 0);
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
						iVar3 = func_255(iParam0, 11, -1);
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
						iVar5 = func_255(iParam0, 8, -1);
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
							iVar7 = __LIB_18__::func_431(joaat("MP_F_Freemode_01"), 11, func_255(iParam0, 11, -1), 0);
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
						iVar8 = func_255(iParam0, 11, -1);
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
							iVar10 = __LIB_18__::func_431(joaat("MP_F_Freemode_01"), 11, func_255(iParam0, 11, -1), 0);
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
							iVar11 = __LIB_18__::func_431(joaat("MP_F_Freemode_01"), 11, func_255(iParam0, 11, -1), 0);
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
						iVar12 = func_255(iParam0, 8, -1);
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

int func_242(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x312A2
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
					iVar0 = func_242(iParam0, -99, __LIB_6__::func_807(iParam0, iParam1, 0), iParam3);
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
					iVar0 = func_242(iParam0, -99, __LIB_6__::func_807(iParam0, iParam1, 0), iParam3);
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

void func_243(int iParam0)//Position - 0x325DD
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
		if (!func_248(iParam0, &bVar14, iVar9, iVar10, iVar12) || PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			if (__LIB_12__::func_303(iVar9, 0, 0, &iVar16))
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
			if (__LIB_12__::func_303(iVar9, 1, 0, &iVar19))
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
		if (!func_248(iParam0, &bVar14, iVar9, iVar10, iVar12))
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

int func_248(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x32FA7
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
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAZ_MASK"), 0) && !__LIB_0__::func_709(iVar0, 14, func_255(iParam0, 14, 0), -1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_252(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x3598F
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (func_273(iParam0))
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
				if (((((!__LIB_25__::func_42(iVar0, iParam2, 13) && !__LIB_25__::func_42(iVar0, iParam2, 14)) && !__LIB_25__::func_42(iVar0, iParam2, 15)) && !__LIB_25__::func_42(iVar0, iParam2, 16)) && !__LIB_25__::func_42(iVar0, iParam2, 71)) && !__LIB_25__::func_42(iVar0, iParam2, 72))
				{
					__LIB_31__::func_926(MISC::GET_HASH_KEY("crewLogo"), iParam0);
				}
			}
			iVar2 = __LIB_18__::func_431(iVar0, iParam1, iParam2, iParam4);
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

int func_255(int iParam0, int iParam1, int iParam2)//Position - 0x35B8D
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
				if (func_160(iParam0, iParam1, iVar0))
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
				if (func_160(iParam0, iParam1, iVar1))
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

struct<17> func_260(int iParam0, int iParam1)//Position - 0x36767
{
	int iVar0;
	struct<17> Var1;
	Var1 = 15;
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		Var1[iVar0] = -99;
		iVar0++;
	}
	Var1.f_16 = 0;
	switch (iParam0)
	{
		case joaat("Player_Zero"):
			switch (iParam1)
			{
				case 0:
					if (Global_113386.f_9085.f_99.f_58[120])
					{
						__LIB_0__::func_35(&Var1, -99, -99, 1, 1, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					else
					{
						__LIB_0__::func_35(&Var1, -99, -99, 0, 0, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					break;
				case 1:
					__LIB_0__::func_35(&Var1, -99, -99, 16, 16, 6, 1, 1, 0, 1, -99, 0, 0, 0);
					break;
				case 2:
					__LIB_0__::func_35(&Var1, -99, -99, 36, 21, 6, 1, 5, 0, 0, -99, 0, 0, 8);
					break;
				case 3:
					__LIB_0__::func_35(&Var1, -99, -99, 65, 36, 6, 0, 2, 0, 0, -99, 0, 0, 31);
					break;
				case 4:
					__LIB_0__::func_35(&Var1, -99, -99, 61, 32, 6, 0, 0, 7, 3, -99, 0, 0, 2);
					break;
				case 5:
					__LIB_0__::func_35(&Var1, -99, -99, Global_113386.f_2363.f_539.f_196[0], Global_113386.f_2363.f_539.f_200[0], 6, 3, 0, 0, 0, -99, 0, 0, 3);
					break;
				case 6:
					__LIB_0__::func_35(&Var1, -99, -99, 92, 72, 7, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 7:
					__LIB_0__::func_35(&Var1, -99, -99, 85, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 8:
					__LIB_0__::func_35(&Var1, -99, -99, 170, 80, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 9:
					__LIB_0__::func_35(&Var1, -99, -99, 171, 89, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 10:
					__LIB_0__::func_35(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 4);
					break;
				case 11:
					__LIB_0__::func_35(&Var1, -99, -99, 33, 18, 17, 10, 4, 8, 0, -99, 0, 0, 5);
					break;
				case 12:
					__LIB_0__::func_35(&Var1, -99, -99, 35, 20, 9, 10, 23, 0, 0, -99, 0, 0, 31);
					break;
				case 13:
					__LIB_0__::func_35(&Var1, -99, -99, 69, 40, 13, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 14:
					__LIB_0__::func_35(&Var1, -99, -99, 62, 33, 38, 0, 8, 0, 0, -99, 0, 0, 6);
					break;
				case 15:
					__LIB_0__::func_35(&Var1, -99, -99, 63, 34, 6, 10, 0, 0, 4, -99, 0, 0, 31);
					break;
				case 16:
					__LIB_0__::func_35(&Var1, -99, -99, 174, 93, 18, 0, 18, 0, 0, -99, 0, 0, 31);
					break;
				case 17:
					__LIB_0__::func_35(&Var1, -99, -99, 76, 46, 6, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 18:
					__LIB_0__::func_35(&Var1, -99, -99, 35, 20, 9, 10, 0, 4, 0, -99, 0, 0, 7);
					break;
				case 19:
					__LIB_0__::func_35(&Var1, -99, -99, 64, 35, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 20:
					__LIB_0__::func_35(&Var1, -99, -99, 66, 37, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 21:
					__LIB_0__::func_35(&Var1, -99, -99, 67, 38, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 22:
					__LIB_0__::func_35(&Var1, -99, -99, 68, 39, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 23:
					__LIB_0__::func_35(&Var1, -99, -99, 177, 94, 19, 9, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 24:
					__LIB_0__::func_35(&Var1, -99, -99, 35, 20, 9, 10, 4, 0, 0, -99, 0, 0, 31);
					break;
				case 25:
					__LIB_0__::func_35(&Var1, -99, -99, 97, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 26:
					__LIB_0__::func_35(&Var1, -99, -99, 3, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 27:
					__LIB_0__::func_35(&Var1, -99, -99, 129, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 28:
					__LIB_0__::func_35(&Var1, -99, -99, 170, 80, 6, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				case 29:
					__LIB_0__::func_35(&Var1, -99, -99, 2, 2, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 30:
					__LIB_0__::func_35(&Var1, -99, -99, 161, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 31:
					__LIB_0__::func_35(&Var1, -99, -99, 3, 3, 0, 12, 0, 0, 0, -99, 0, 1, 31);
					break;
				case 32:
					__LIB_0__::func_35(&Var1, -99, -99, 85, 55, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 33:
					__LIB_0__::func_35(&Var1, -99, -99, 86, 4, 20, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 34:
					__LIB_0__::func_35(&Var1, -99, -99, 44, 97, 6, 0, 0, 0, 0, -99, 0, 2, 31);
					break;
				case 35:
					__LIB_0__::func_35(&Var1, -99, -99, 85, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 36:
					__LIB_0__::func_35(&Var1, -99, -99, 4, 4, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 37:
					__LIB_0__::func_35(&Var1, -99, -99, 5, 5, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 38:
					__LIB_0__::func_35(&Var1, -99, -99, 6, 6, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 39:
					__LIB_0__::func_35(&Var1, -99, -99, 7, 7, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 40:
					__LIB_0__::func_35(&Var1, -99, -99, 8, 8, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 41:
					__LIB_0__::func_35(&Var1, -99, -99, 9, 9, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 42:
					__LIB_0__::func_35(&Var1, -99, -99, 10, 10, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 43:
					__LIB_0__::func_35(&Var1, -99, -99, 11, 11, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 44:
					__LIB_0__::func_35(&Var1, -99, -99, 12, 12, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 45:
					__LIB_0__::func_35(&Var1, -99, -99, 13, 13, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 46:
					__LIB_0__::func_35(&Var1, -99, -99, 14, 14, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 47:
					__LIB_0__::func_35(&Var1, -99, -99, 15, 15, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 48:
					__LIB_0__::func_35(&Var1, -99, -99, 91, 71, 14, 13, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 49:
					__LIB_0__::func_35(&Var1, -99, -99, 35, 20, 9, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 50:
					__LIB_0__::func_35(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 9);
					break;
				case 51:
					__LIB_0__::func_35(&Var1, -99, -99, 169, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 52:
					__LIB_0__::func_35(&Var1, -99, -99, 169, 72, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				default:
					__LIB_29__::func_488(&Var1, iParam0, iParam1, 53);
					break;
			}
			break;
		case joaat("Player_One"):
			switch (iParam1)
			{
				case 0:
					__LIB_0__::func_35(&Var1, -99, -99, 73, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				case 1:
					__LIB_0__::func_35(&Var1, -99, -99, 22, 10, 64, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				case 2:
					__LIB_0__::func_35(&Var1, -99, -99, Global_113386.f_2363.f_539.f_196[1], Global_113386.f_2363.f_539.f_200[1], 17, 2, 26, 0, 0, -99, 0, 45, 31);
					break;
				case 3:
					__LIB_0__::func_35(&Var1, -99, -99, 23, 11, 13, 5, 2, 4, 0, -99, 0, 0, 1);
					break;
				case 4:
					__LIB_0__::func_35(&Var1, -99, -99, 23, 11, 34, 5, 26, 0, 0, -99, 0, 0, 2);
					break;
				case 5:
					__LIB_0__::func_35(&Var1, -99, 20, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				case 6:
					__LIB_0__::func_35(&Var1, -99, -99, 40, 13, 14, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 7:
					__LIB_0__::func_35(&Var1, -99, -99, 90, 32, 17, 1, 8, 0, 1, -99, 0, 0, 3);
					break;
				case 8:
					__LIB_0__::func_35(&Var1, -99, -99, 17, 5, 12, 0, 26, 0, 2, -99, 0, 0, 5);
					break;
				case 9:
					__LIB_0__::func_35(&Var1, -99, -99, 16, 4, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				case 10:
					__LIB_0__::func_35(&Var1, -99, -99, 208, 71, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				case 11:
					__LIB_0__::func_35(&Var1, -99, -99, 259, 10, 35, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				case 12:
					__LIB_0__::func_35(&Var1, -99, -99, 18, 6, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				case 13:
					__LIB_0__::func_35(&Var1, -99, -99, 19, 7, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				case 14:
					__LIB_0__::func_35(&Var1, -99, -99, 20, 8, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				case 15:
					__LIB_0__::func_35(&Var1, -99, -99, 21, 9, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				case 16:
					__LIB_0__::func_35(&Var1, -99, -99, 135, 40, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				case 17:
					__LIB_0__::func_35(&Var1, -99, -99, 74, 24, 52, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				case 18:
					__LIB_0__::func_35(&Var1, -99, -99, 176, 53, 26, 5, 26, 0, 0, -99, 0, 41, 31);
					break;
				case 19:
					__LIB_0__::func_35(&Var1, -99, -99, 125, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				case 20:
					__LIB_0__::func_35(&Var1, -99, -99, 162, 24, 36, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				case 21:
					__LIB_0__::func_35(&Var1, -99, -99, 75, 24, 36, 0, 26, 0, 0, -99, 0, 0, 4);
					break;
				case 22:
					__LIB_0__::func_35(&Var1, -99, -99, 227, 53, 25, 0, 27, 0, 0, -99, 0, 25, 31);
					break;
				case 23:
					__LIB_0__::func_35(&Var1, -99, -99, 228, 54, 25, 0, 28, 0, 0, -99, 0, 26, 31);
					break;
				case 24:
					__LIB_0__::func_35(&Var1, -99, -99, 229, 55, 25, 0, 29, 0, 0, -99, 0, 27, 31);
					break;
				case 25:
					__LIB_0__::func_35(&Var1, -99, -99, 230, 56, 25, 0, 30, 0, 0, -99, 0, 28, 31);
					break;
				case 26:
					__LIB_0__::func_35(&Var1, -99, -99, 231, 57, 25, 0, 31, 0, 0, -99, 0, 29, 31);
					break;
				case 27:
					__LIB_0__::func_35(&Var1, -99, -99, 232, 58, 25, 0, 32, 0, 0, -99, 0, 30, 31);
					break;
				case 28:
					__LIB_0__::func_35(&Var1, -99, -99, 233, 59, 25, 0, 33, 0, 0, -99, 0, 31, 31);
					break;
				case 29:
					__LIB_0__::func_35(&Var1, -99, -99, 234, 60, 25, 0, 34, 0, 0, -99, 0, 32, 31);
					break;
				case 30:
					__LIB_0__::func_35(&Var1, -99, -99, 235, 61, 25, 0, 35, 0, 0, -99, 0, 33, 31);
					break;
				case 31:
					__LIB_0__::func_35(&Var1, -99, -99, 236, 62, 25, 0, 36, 0, 0, -99, 0, 34, 31);
					break;
				case 32:
					__LIB_0__::func_35(&Var1, -99, -99, 237, 63, 25, 0, 37, 0, 0, -99, 0, 35, 31);
					break;
				case 33:
					__LIB_0__::func_35(&Var1, -99, -99, 238, 64, 25, 0, 38, 0, 0, -99, 0, 36, 31);
					break;
				case 34:
					__LIB_0__::func_35(&Var1, -99, -99, 239, 65, 25, 0, 39, 0, 0, -99, 0, 37, 31);
					break;
				case 35:
					__LIB_0__::func_35(&Var1, -99, -99, 240, 66, 25, 0, 40, 0, 0, -99, 0, 38, 31);
					break;
				case 36:
					__LIB_0__::func_35(&Var1, -99, -99, 241, 67, 25, 0, 41, 0, 0, -99, 0, 39, 31);
					break;
				case 37:
					__LIB_0__::func_35(&Var1, -99, -99, 242, 68, 25, 0, 42, 0, 0, -99, 0, 40, 31);
					break;
				case 38:
					__LIB_0__::func_35(&Var1, -99, -99, 260, 72, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				case 39:
					__LIB_0__::func_35(&Var1, -99, -99, 125, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				case 40:
					__LIB_0__::func_35(&Var1, -99, -99, 123, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				case 41:
					__LIB_0__::func_35(&Var1, -99, -99, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				case 42:
					__LIB_0__::func_35(&Var1, -99, -99, 89, 22, 15, 6, 26, 0, 0, -99, 0, 0, 31);
					break;
				case 43:
					__LIB_0__::func_35(&Var1, -99, -99, 317, 69, 17, 0, 0, 0, 51, -99, 0, 0, 6);
					break;
				case 44:
					__LIB_0__::func_35(&Var1, -99, -99, 30, 23, 16, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				case 45:
					__LIB_0__::func_35(&Var1, -99, -99, 106, 70, 17, 5, 26, 0, 0, -99, 0, 0, 8);
					break;
				case 46:
					__LIB_0__::func_35(&Var1, -99, -99, 117, 24, 20, 5, 26, 0, 52, -99, 0, 0, 31);
					break;
				default:
					__LIB_29__::func_488(&Var1, iParam0, iParam1, 47);
					break;
			}
			break;
		case joaat("Player_Two"):
			switch (iParam1)
			{
				case 0:
					__LIB_0__::func_35(&Var1, -99, -99, 0, 91, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 1:
					__LIB_0__::func_35(&Var1, -99, -99, 17, 5, 8, 2, 3, 0, 0, -99, 0, 0, 8);
					break;
				case 2:
					__LIB_0__::func_35(&Var1, -99, -99, 43, 8, 12, 3, 5, 0, 0, -99, 0, 0, 1);
					break;
				case 3:
					__LIB_0__::func_35(&Var1, -99, -99, 50, 14, 8, 0, 15, 6, 3, -99, 0, 0, 2);
					break;
				case 4:
					__LIB_0__::func_35(&Var1, -99, -99, Global_113386.f_2363.f_539.f_196[2], Global_113386.f_2363.f_539.f_200[2], 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 5:
					__LIB_0__::func_35(&Var1, -99, -99, 95, 33, 8, 0, 15, 0, 0, -99, 0, 0, 6);
					break;
				case 6:
					__LIB_0__::func_35(&Var1, -99, -99, 49, 13, 10, 4, 6, 0, 0, -99, 0, 0, 3);
					break;
				case 7:
					__LIB_0__::func_35(&Var1, -99, -99, 49, 13, 14, 4, 15, 0, 0, -99, 0, 0, 4);
					break;
				case 8:
					__LIB_0__::func_35(&Var1, -99, -99, 79, 32, 8, 5, 7, 0, 0, -99, 0, 0, 31);
					break;
				case 9:
					__LIB_0__::func_35(&Var1, -99, -99, 53, 17, 11, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 10:
					__LIB_0__::func_35(&Var1, -99, -99, 96, 81, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 11:
					__LIB_0__::func_35(&Var1, -99, -99, 51, 15, 33, 0, 8, 0, 0, -99, 0, 0, 5);
					break;
				case 12:
					__LIB_0__::func_35(&Var1, -99, -99, 0, 93, 29, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				case 13:
					__LIB_0__::func_35(&Var1, -99, -99, 52, 16, 30, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 14:
					__LIB_0__::func_35(&Var1, -99, -99, 241, 92, 16, 0, 12, 0, 0, -99, 0, 0, 31);
					break;
				case 15:
					__LIB_0__::func_35(&Var1, -99, -99, 97, 34, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 16:
					__LIB_0__::func_35(&Var1, -99, -99, 44, 9, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 17:
					__LIB_0__::func_35(&Var1, -99, -99, 45, 10, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 18:
					__LIB_0__::func_35(&Var1, -99, -99, 46, 11, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 19:
					__LIB_0__::func_35(&Var1, -99, -99, 47, 12, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 20:
					__LIB_0__::func_35(&Var1, -99, -99, 161, 53, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 21:
					__LIB_0__::func_35(&Var1, -99, -99, 0, 44, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 22:
					__LIB_0__::func_35(&Var1, -99, -99, 98, 0, 28, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 23:
					__LIB_0__::func_35(&Var1, -99, -99, 27, 0, 31, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 24:
					__LIB_0__::func_35(&Var1, -99, -99, 190, 71, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 25:
					__LIB_0__::func_35(&Var1, -99, -99, 191, 72, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 26:
					__LIB_0__::func_35(&Var1, -99, -99, 192, 73, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 27:
					__LIB_0__::func_35(&Var1, -99, -99, 193, 74, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 28:
					__LIB_0__::func_35(&Var1, -99, -99, 194, 75, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 29:
					__LIB_0__::func_35(&Var1, -99, -99, 195, 76, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 30:
					__LIB_0__::func_35(&Var1, -99, -99, 196, 77, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 31:
					__LIB_0__::func_35(&Var1, -99, -99, 197, 78, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 32:
					__LIB_0__::func_35(&Var1, -99, -99, 198, 79, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 33:
					__LIB_0__::func_35(&Var1, -99, -99, 199, 80, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 34:
					__LIB_0__::func_35(&Var1, -99, -99, 200, 62, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 35:
					__LIB_0__::func_35(&Var1, -99, -99, 201, 63, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 36:
					__LIB_0__::func_35(&Var1, -99, -99, 202, 64, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 37:
					__LIB_0__::func_35(&Var1, -99, -99, 203, 65, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 38:
					__LIB_0__::func_35(&Var1, -99, -99, 204, 66, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 39:
					__LIB_0__::func_35(&Var1, -99, -99, 205, 67, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 40:
					__LIB_0__::func_35(&Var1, -99, -99, 206, 68, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 41:
					__LIB_0__::func_35(&Var1, -99, -99, 2, 43, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 42:
					__LIB_0__::func_35(&Var1, -99, -99, 55, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 43:
					__LIB_0__::func_35(&Var1, -99, -99, 0, 52, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 44:
					__LIB_0__::func_35(&Var1, -99, -99, 70, 30, 32, 6, 15, 0, 0, -99, 0, 0, 31);
					break;
				case 45:
					__LIB_0__::func_35(&Var1, -99, -99, 19, 91, 28, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				case 46:
					__LIB_0__::func_35(&Var1, -99, -99, 0, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				case 47:
					__LIB_0__::func_35(&Var1, -99, -99, 79, 32, 8, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				default:
					__LIB_29__::func_488(&Var1, iParam0, iParam1, 48);
					break;
			}
			break;
		case joaat("MP_M_Freemode_01"):
			switch (iParam1)
			{
				case 0:
					__LIB_0__::func_35(&Var1, -99, -99, 0, 0, 10, -99, 0, -99, -99, 0, 0, 0, 31);
					break;
				case 1:
					__LIB_0__::func_35(&Var1, -99, -99, 1, 127, 38, -99, 2, 0, 0, 0, 0, 62, 0);
					break;
				case 2:
					__LIB_0__::func_35(&Var1, -99, -99, 0, 248, 45, -99, 240, 0, 0, 0, 0, 144, 1);
					break;
				case 3:
					__LIB_0__::func_35(&Var1, -99, -99, 4, 31, 25, -99, 240, 0, 0, 0, 0, 231, 2);
					break;
				case 4:
					__LIB_0__::func_35(&Var1, -99, -99, 1, 66, 10, -99, 21, 0, 0, 0, 0, 123, 3);
					break;
				case 5:
					__LIB_0__::func_35(&Var1, -99, -99, 1, 93, 141, -99, 3, 0, 0, 0, 0, 114, 4);
					break;
				case 6:
					__LIB_0__::func_35(&Var1, -99, -99, 1, 116, 113, -99, 7, 0, 0, 0, 0, 113, 5);
					break;
				case 7:
					__LIB_0__::func_35(&Var1, -99, -99, 1, 61, 136, -99, 27, 0, 0, 0, 0, 61, 6);
					break;
				case 8:
					__LIB_0__::func_35(&Var1, -99, -99, 0, 112, 10, -99, 240, 0, 0, 0, 0, 8, 7);
					break;
				case 9:
					__LIB_0__::func_35(&Var1, -99, -99, 4, 131, 24, -99, 240, 0, 0, 0, 0, 223, 8);
					break;
				case 10:
					__LIB_0__::func_35(&Var1, -99, -99, 1, 209, 188, -99, 208, 0, 0, 0, 0, 64, 9);
					break;
				case 11:
					__LIB_0__::func_35(&Var1, -99, -99, 1, 209, 160, -99, 211, 0, 0, 0, 43, 157, 10);
					break;
				case 12:
					__LIB_0__::func_35(&Var1, -99, -99, 1, 162, 174, -99, 201, 0, 0, 0, 0, 158, 11);
					break;
				case 13:
					__LIB_0__::func_35(&Var1, -99, -99, 1, 4, 240, -99, 34, 0, 0, 0, 0, 97, 12);
					break;
				case 14:
					__LIB_0__::func_35(&Var1, -99, -99, 1, 128, 232, -99, 43, 0, 0, 0, 0, 102, 13);
					break;
				case 15:
					__LIB_0__::func_35(&Var1, -99, -99, 1, 66, 65, -99, 224, 0, 0, 0, 0, 100, 14);
					break;
				case 16:
					__LIB_0__::func_35(&Var1, -99, -99, 1, 65, 172, -99, 202, 0, 0, 0, 0, 64, 15);
					break;
				case 17:
					__LIB_0__::func_35(&Var1, -99, -99, 1, 64, 10, -99, 1, 0, 0, 0, 0, 66, 16);
					break;
				case 18:
					__LIB_0__::func_35(&Var1, -99, -99, 5, 98, 80, -99, 240, 0, 0, 0, 0, 87, 17);
					break;
				case 19:
					__LIB_0__::func_35(&Var1, -99, -99, 5, 192, 96, -99, 240, 0, 0, 0, 0, 80, 18);
					break;
				case 20:
					__LIB_0__::func_35(&Var1, -99, -99, 1, 124, 96, -99, 11, 0, 0, 0, 0, 110, 19);
					break;
				case 21:
					__LIB_0__::func_35(&Var1, -99, -99, 0, 80, 114, -99, 240, 0, 0, 0, 0, 2, 20);
					break;
				case 22:
					__LIB_0__::func_35(&Var1, -99, -99, 6, 43, 112, -99, 82, 0, 0, 0, 0, 48, 21);
					break;
				case 23:
					__LIB_0__::func_35(&Var1, -99, -99, 1, 116, 144, -99, 2, 0, 0, 0, 0, 108, 22);
					break;
				case 24:
					__LIB_0__::func_35(&Var1, -99, -99, 1, 63, 38, -99, 3, 0, 0, 0, 0, 63, 23);
					break;
				case 25:
					__LIB_0__::func_35(&Var1, -99, -99, 2, 64, 10, -99, 240, 0, 0, 0, 0, 41, 24);
					break;
				default:
					__LIB_29__::func_488(&Var1, iParam0, iParam1, 26);
					break;
			}
			break;
		case joaat("MP_F_Freemode_01"):
			switch (iParam1)
			{
				case 0:
					__LIB_0__::func_35(&Var1, -99, -99, 0, 0, 0, -99, 0, -99, -99, 0, -99, 0, 31);
					break;
				case 1:
					__LIB_0__::func_35(&Var1, -99, -99, 5, 136, 241, -99, 47, 0, 0, 0, 0, 21, 31);
					break;
				case 2:
					__LIB_0__::func_35(&Var1, -99, -99, 4, 1, 96, -99, 32, 0, 0, 0, 7, 215, 0);
					break;
				case 3:
					__LIB_0__::func_35(&Var1, -99, -99, 1, 73, 241, -99, 3, 0, 0, 0, 0, 25, 1);
					break;
				case 4:
					__LIB_0__::func_35(&Var1, -99, -99, 2, 88, 217, -99, 32, 0, 0, 0, 0, 33, 2);
					break;
				case 5:
					__LIB_0__::func_35(&Var1, -99, -99, 9, 7, 98, -99, 32, 0, 0, 0, 7, 153, 3);
					break;
				case 6:
					__LIB_0__::func_35(&Var1, -99, -99, 1, 140, 241, -99, 7, 0, 0, 0, 31, 16, 4);
					break;
				case 7:
					__LIB_0__::func_35(&Var1, -99, -99, 4, 139, 112, -99, 32, 0, 0, 0, 49, 78, 5);
					break;
				case 8:
					__LIB_0__::func_35(&Var1, -99, -99, 1, 193, 48, -99, 108, 0, 0, 0, 0, 17, 6);
					break;
				case 9:
					__LIB_0__::func_35(&Var1, -99, -99, 5, 114, 97, -99, 103, 0, 0, 0, 0, 98, 7);
					break;
				case 10:
					__LIB_0__::func_35(&Var1, -99, -99, 9, 134, 239, -99, 32, 0, 0, 0, 2, 144, 8);
					break;
				case 11:
					__LIB_0__::func_35(&Var1, -99, -99, 5, 152, 96, -99, 10, 0, 0, 0, 31, 96, 9);
					break;
				case 12:
					__LIB_0__::func_35(&Var1, -99, -99, 6, 129, 1, -99, 96, 0, 0, 0, 5, 120, 10);
					break;
				case 13:
					__LIB_0__::func_35(&Var1, -99, -99, 5, 0, 0, -99, 10, 0, 0, 0, 0, 130, 31);
					break;
				case 14:
					__LIB_0__::func_35(&Var1, -99, -99, 4, 159, 96, -99, 32, 0, 0, 0, 22, 214, 11);
					break;
				case 15:
					__LIB_0__::func_35(&Var1, -99, -99, 9, 232, 213, -99, 32, 0, 0, 0, 22, 147, 12);
					break;
				case 16:
					__LIB_0__::func_35(&Var1, -99, -99, 2, 8, 98, -99, 32, 0, 0, 0, 33, 39, 13);
					break;
				case 17:
					__LIB_0__::func_35(&Var1, -99, -99, 5, 150, 235, -99, 106, 0, 0, 0, 0, 128, 14);
					break;
				case 18:
					__LIB_0__::func_35(&Var1, -99, -99, 6, 96, 97, -99, 7, 0, 0, 0, 32, 114, 15);
					break;
				case 19:
					__LIB_0__::func_35(&Var1, -99, -99, 4, 48, 64, -99, 32, 0, 0, 0, 0, 89, 16);
					break;
				case 20:
					__LIB_0__::func_35(&Var1, -99, -99, 4, 62, 64, -99, 32, 0, 0, 0, 0, 78, 17);
					break;
				case 21:
					__LIB_0__::func_35(&Var1, -99, -99, 4, 49, 65, -99, 32, 0, 0, 0, 8, 80, 31);
					break;
				case 22:
					__LIB_0__::func_35(&Var1, -99, -99, 3, 20, 16, -99, 32, 0, 0, 0, 0, 49, 18);
					break;
				case 23:
					__LIB_0__::func_35(&Var1, -99, -99, 0, 73, 178, -99, 32, 0, 0, 0, 38, 11, 19);
					break;
				case 24:
					__LIB_0__::func_35(&Var1, -99, -99, 5, 135, 53, -99, 9, 0, 0, 0, 29, 27, 20);
					break;
				case 25:
					__LIB_0__::func_35(&Var1, -99, -99, 7, 233, 176, -99, 120, 0, 0, 0, 11, 160, 21);
					break;
				case 26:
					__LIB_0__::func_35(&Var1, -99, -99, 4, 34, 179, -99, 32, 0, 0, 0, 0, 77, 22);
					break;
				case 27:
					__LIB_0__::func_35(&Var1, -99, -99, 15, 131, 93, -99, 32, 0, 0, 0, 0, 250, 23);
					break;
				default:
					__LIB_29__::func_488(&Var1, iParam0, iParam1, 28);
					break;
			}
			break;
	}
	return Var1;
}

void func_263(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x3880C
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
							func_263(iParam0, __LIB_0__::func_33(iVar4), uVar3, 0);
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
									func_263(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_6__::func_758(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 3), 1);
								}
								else
								{
									func_263(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_6__::func_758(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 4), 1);
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
							func_263(iParam0, 14, iVar8, 0);
						}
						else if (iParam2 >= 75 && iParam2 <= 82)
						{
							iVar8 = (83 + Global_78130[2 /*14*/].f_4);
							func_263(iParam0, 14, iVar8, 0);
						}
					}
					else if (iParam1 == 8)
					{
						if (iParam2 >= 48 && iParam2 <= 63)
						{
							iVar8 = (64 + Global_78130[2 /*14*/].f_4);
							func_263(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 64 && iParam2 <= 79)
						{
							iVar8 = (48 + Global_78130[2 /*14*/].f_4);
							func_263(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 96 && iParam2 <= 111)
						{
							iVar8 = (112 + Global_78130[2 /*14*/].f_4);
							func_263(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 112 && iParam2 <= 127)
						{
							iVar8 = (96 + Global_78130[2 /*14*/].f_4);
							func_263(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 176 && iParam2 <= 191)
						{
							iVar8 = (160 + Global_78130[2 /*14*/].f_4);
							func_263(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 160 && iParam2 <= 175)
						{
							iVar8 = (176 + Global_78130[2 /*14*/].f_4);
							func_263(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 32 && iParam2 <= 47)
						{
							iVar8 = (0 + Global_78130[2 /*14*/].f_4);
							func_263(iParam0, 11, iVar8, 0);
						}
						else if (iParam2 >= 224 && iParam2 <= 239)
						{
							iVar8 = (16 + Global_78130[2 /*14*/].f_4);
							func_263(iParam0, 11, iVar8, 0);
						}
					}
					else if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar8 = (32 + Global_78130[2 /*14*/].f_4);
							func_263(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 16 && iParam2 <= 31)
						{
							iVar8 = (224 + Global_78130[2 /*14*/].f_4);
							func_263(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 220 && iParam2 <= 235)
						{
							switch (iParam2)
							{
								case 220:
									func_263(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_0"), 8, 3), 0);
									func_263(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_0"), 8, 3), 0);
									break;
								case 221:
									func_263(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_1"), 8, 3), 0);
									func_263(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_1"), 8, 3), 0);
									break;
								case 222:
									func_263(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_2"), 8, 3), 0);
									func_263(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_2"), 8, 3), 0);
									break;
								case 223:
									func_263(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_3"), 8, 3), 0);
									func_263(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_3"), 8, 3), 0);
									break;
								case 224:
									func_263(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_4"), 8, 3), 0);
									func_263(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_4"), 8, 3), 0);
									break;
								case 225:
									func_263(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_5"), 8, 3), 0);
									func_263(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_5"), 8, 3), 0);
									break;
								case 226:
									func_263(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_6"), 8, 3), 0);
									func_263(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_6"), 8, 3), 0);
									break;
								case 227:
									func_263(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_7"), 8, 3), 0);
									func_263(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_7"), 8, 3), 0);
									break;
								case 228:
									func_263(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_8"), 8, 3), 0);
									func_263(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_8"), 8, 3), 0);
									break;
								case 229:
									func_263(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_9"), 8, 3), 0);
									func_263(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_9"), 8, 3), 0);
									break;
								case 230:
									func_263(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_10"), 8, 3), 0);
									func_263(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_10"), 8, 3), 0);
									break;
								case 231:
									func_263(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_11"), 8, 3), 0);
									func_263(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_11"), 8, 3), 0);
									break;
								case 232:
									func_263(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_12"), 8, 3), 0);
									func_263(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_12"), 8, 3), 0);
									break;
								case 233:
									func_263(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_13"), 8, 3), 0);
									func_263(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_13"), 8, 3), 0);
									break;
								case 234:
									func_263(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_14"), 8, 3), 0);
									func_263(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_14"), 8, 3), 0);
									break;
								case 235:
									func_263(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_15"), 8, 3), 0);
									func_263(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_15"), 8, 3), 0);
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
									func_263(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_0"), 7, 3), 0);
									func_263(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_0"), 7, 3), 0);
									break;
								case 1:
									func_263(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_1"), 7, 3), 0);
									func_263(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_1"), 7, 3), 0);
									break;
								case 2:
									func_263(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_2"), 7, 3), 0);
									func_263(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_2"), 7, 3), 0);
									break;
								case 3:
									func_263(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_3"), 7, 3), 0);
									func_263(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_3"), 7, 3), 0);
									break;
								case 4:
									func_263(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_4"), 7, 3), 0);
									func_263(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_4"), 7, 3), 0);
									break;
								case 5:
									func_263(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_5"), 7, 3), 0);
									func_263(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_5"), 7, 3), 0);
									break;
								case 6:
									func_263(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_6"), 7, 3), 0);
									func_263(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_6"), 7, 3), 0);
									break;
								case 7:
									func_263(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_7"), 7, 3), 0);
									func_263(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_7"), 7, 3), 0);
									break;
								case 8:
									func_263(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_8"), 7, 3), 0);
									func_263(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_8"), 7, 3), 0);
									break;
								case 9:
									func_263(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_9"), 7, 3), 0);
									func_263(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_9"), 7, 3), 0);
									break;
								case 10:
									func_263(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_10"), 7, 3), 0);
									func_263(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_10"), 7, 3), 0);
									break;
								case 11:
									func_263(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_11"), 7, 3), 0);
									func_263(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_11"), 7, 3), 0);
									break;
								case 12:
									func_263(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_12"), 7, 3), 0);
									func_263(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_12"), 7, 3), 0);
									break;
								case 13:
									func_263(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_13"), 7, 3), 0);
									func_263(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_13"), 7, 3), 0);
									break;
								case 14:
									func_263(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_14"), 7, 3), 0);
									func_263(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_14"), 7, 3), 0);
									break;
								case 15:
									func_263(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_15"), 7, 3), 0);
									func_263(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_15"), 7, 3), 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_78130[2 /*14*/].f_4)
							{
								case 0:
									func_263(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_0"), 7, 3), 0);
									func_263(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_0"), 7, 3), 0);
									break;
								case 1:
									func_263(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_1"), 7, 3), 0);
									func_263(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_1"), 7, 3), 0);
									break;
								case 2:
									func_263(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_2"), 7, 3), 0);
									func_263(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_2"), 7, 3), 0);
									break;
								case 3:
									func_263(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_3"), 7, 3), 0);
									func_263(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_3"), 7, 3), 0);
									break;
								case 4:
									func_263(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_4"), 7, 3), 0);
									func_263(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_4"), 7, 3), 0);
									break;
								case 5:
									func_263(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_5"), 7, 3), 0);
									func_263(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_5"), 7, 3), 0);
									break;
								case 6:
									func_263(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_6"), 7, 3), 0);
									func_263(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_6"), 7, 3), 0);
									break;
								case 7:
									func_263(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_7"), 7, 3), 0);
									func_263(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_7"), 7, 3), 0);
									break;
								case 8:
									func_263(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_8"), 7, 3), 0);
									func_263(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_8"), 7, 3), 0);
									break;
								case 9:
									func_263(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_9"), 7, 3), 0);
									func_263(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_9"), 7, 3), 0);
									break;
								case 10:
									func_263(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_10"), 7, 3), 0);
									func_263(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_10"), 7, 3), 0);
									break;
								case 11:
									func_263(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_11"), 7, 3), 0);
									func_263(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_11"), 7, 3), 0);
									break;
								case 12:
									func_263(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_12"), 7, 3), 0);
									func_263(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_12"), 7, 3), 0);
									break;
								case 13:
									func_263(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_13"), 7, 3), 0);
									func_263(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_13"), 7, 3), 0);
									break;
								case 14:
									func_263(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_14"), 7, 3), 0);
									func_263(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_14"), 7, 3), 0);
									break;
								case 15:
									func_263(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_15"), 7, 3), 0);
									func_263(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_15"), 7, 3), 0);
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
							func_263(iParam0, 8, iVar8, 0);
						}
					}
				}
				Global_78130[2 /*14*/] = { __LIB_35__::func_544(iParam0, iParam1, iParam2, -1) };
				if (iParam1 == 11)
				{
					iVar9 = __LIB_6__::func_811(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_263(iParam0, 8, iVar9, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203)
					{
						switch (iParam2)
						{
							case 199:
								func_263(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_0"), 7, 4), 0);
								break;
							case 200:
								func_263(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_1"), 7, 4), 0);
								break;
							case 201:
								func_263(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_2"), 7, 4), 0);
								break;
							}
					}
				}
				else if (iParam1 == 8)
				{
					iVar9 = __LIB_6__::func_807(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_263(iParam0, 11, iVar9, 0);
					}
				}
			}
		}
	}
}

int func_273(int iParam0)//Position - 0x3D3FD
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
				iVar1 = func_255(iParam0, 11, -1);
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
				iVar3 = func_255(iParam0, 11, -1);
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

int func_274(int iParam0, int iParam1, int iParam2)//Position - 0x3D747
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_1207(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_276(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x3D80E
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_1207(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

void func_278(int iParam0)//Position - 0x3DACE
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
		__LIB_35__::func_4(&Var0, -1);
		func_137(PLAYER::PLAYER_PED_ID(), &Var0, 0, 0, 1, iParam0);
		iVar1 = FILES::GET_HASH_NAME_FOR_COMPONENT(PLAYER::PLAYER_PED_ID(), 1, PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 1), PED::GET_PED_TEXTURE_VARIATION(PLAYER::PLAYER_PED_ID(), 1));
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("SHRINK_HEAD"), 0))
		{
			iVar2 = __LIB_0__::func_534(2100, -1, 0);
			iVar3 = __LIB_0__::func_534(2101, -1, 0);
			iVar4 = __LIB_0__::func_534(2102, -1, 0);
			fVar5 = __LIB_0__::func_424(135, -1);
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
			__LIB_31__::func_910(PLAYER::PLAYER_PED_ID(), -1);
		}
		func_279(0);
		func_184(PLAYER::PLAYER_PED_ID(), 0, 1, -1);
		__LIB_6__::func_371(-1326764176, __LIB_6__::func_900(1, 1));
	}
}

void func_279(int iParam0)//Position - 0x3DC62
{
	struct<14> Var0;
	int iVar1;
	if (func_255(PLAYER::PLAYER_PED_ID(), 14, 0) != -99)
	{
		Var0 = { __LIB_35__::func_544(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), 14, func_255(PLAYER::PLAYER_PED_ID(), 14, 0), -1) };
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

void func_301(var uParam0)//Position - 0x3E92C
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			func_303(uParam0);
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
				func_302(PLAYER::PLAYER_PED_ID(), uParam0->f_553);
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

void func_302(int iParam0, int iParam1)//Position - 0x3EAD3
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
			if (__LIB_12__::func_303(iVar2, iParam1 == 1, iParam1 == 2, &iVar6))
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
				func_140(iParam0, 11, __LIB_0__::func_350(iParam0, Var7.f_3, Var7.f_4, 11), 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 10) == 0 && __LIB_0__::func_257(iVar5, 11, -1))
				{
					if (__LIB_0__::func_257(iVar5, 11, Var7.f_1))
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, iVar3, iVar4, 0);
					}
					else if (__LIB_0__::func_256(iVar5, 10, &iVar9, -1))
					{
						if (__LIB_0__::func_257(iVar9, 11, Var7.f_1))
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

void func_303(var uParam0)//Position - 0x3EE98
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
			if (func_304(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), uParam0->f_544, __LIB_6__::func_795(iVar0, 2)))
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

int func_304(int iParam0, int iParam1, int iParam2)//Position - 0x3EF54
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
				__LIB_35__::func_544(iParam0, 14, iParam1, -1);
				if (Global_2883589 == joaat("CU_XMAS_CLOTHES"))
				{
					return 0;
				}
			}
			if (iParam1 >= 327)
			{
				iVar0 = -1;
				iVar0 = __LIB_0__::func_420(iParam0, iParam1, 14, 3);
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

int func_340(var uParam0)//Position - 0x4385A
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int* iVar7;
	int iVar8;
	int iVar9;
	if (uParam0->f_1)
	{
		if (*uParam0 == 0)
		{
			*uParam0++;
		}
		else if (*uParam0 == 1)
		{
			bVar0 = false;
			bVar1 = false;
			bVar2 = false;
			bVar3 = false;
			if (__LIB_10__::func_118())
			{
				if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
				{
					if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
					{
						iVar4 = 2;
						HUD::SET_WARNING_MESSAGE_WITH_HEADER("GLOBAL_ALERT_DEFAULT" /* GXT: Alert */, "STORE_UNAVAIL" /* GXT: The Store is unavailable right now. */, iVar4, 0, false, -1, 0, 0, true, 0);
						if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
						{
							bVar1 = true;
						}
					}
					else if (!NETWORK::IS_USER_OLD_ENOUGH_TO_ACCESS_STORE())
					{
						iVar5 = 2;
						if (__LIB_0__::func_53())
						{
							NETWORK::NETWORK_CHECK_PRIVILEGES(0, 16384, 1);
							NETWORK::NETWORK_SET_PRIVILEGE_CHECK_RESULT_NOT_NEEDED();
							bVar1 = true;
						}
						else
						{
							HUD::SET_WARNING_MESSAGE_WITH_HEADER("GLOBAL_ALERT_DEFAULT" /* GXT: Alert */, "HUD_PERM" /* GXT: Your profile does not have the correct permissions to access Social Club functionality. */, iVar5, 0, false, -1, 0, 0, true, 0);
						}
						if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
						{
							bVar1 = true;
						}
					}
					else if (!NETWORK::IS_STORE_AVAILABLE_TO_USER())
					{
						iVar6 = 2;
						HUD::SET_WARNING_MESSAGE_WITH_HEADER("GLOBAL_ALERT_DEFAULT" /* GXT: Alert */, "STORE_UNAVAIL" /* GXT: The Store is unavailable right now. */, iVar6, 0, false, -1, 0, 0, true, 0);
						if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
						{
							bVar1 = true;
						}
					}
					else
					{
						bVar0 = true;
					}
				}
				else
				{
					bVar2 = true;
				}
			}
			else
			{
				bVar3 = true;
			}
			if (bVar3)
			{
				*uParam0 = 0;
				uParam0->f_1 = 0;
				uParam0->f_5 = 1;
			}
			else if (bVar2)
			{
				*uParam0 = 3;
			}
			else if (bVar0)
			{
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					Global_2726956 = 1;
					Global_2726957 = 1;
				}
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV", "HUD_AMMO_SHOP_SOUNDSET", true);
				NETWORK::SET_LAST_VIEWED_SHOP_ITEM(MISC::GET_HASH_KEY(&(Global_100493.f_1384)), Global_100493.f_1388, MISC::GET_HASH_KEY(__LIB_9__::func_422(uParam0->f_6, 0, 0)));
				NETWORK::OPEN_COMMERCE_STORE("", "", __LIB_10__::func_378(uParam0->f_6));
				*uParam0++;
			}
			else if (bVar1)
			{
				*uParam0++;
			}
		}
		else if (*uParam0 == 2)
		{
			if (!NETWORK::IS_COMMERCE_STORE_OPEN())
			{
				*uParam0 = 0;
				uParam0->f_1 = 0;
			}
		}
		else if (*uParam0 == 3)
		{
			if (__LIB_26__::func_185(&iVar7, 1))
			{
				if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
				{
					*uParam0 = 4;
				}
				else
				{
					*uParam0 = 2;
				}
			}
		}
		else if (*uParam0 == 4)
		{
			if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
			{
				if (NETWORK::IS_COMMERCE_DATA_FETCH_IN_PROGRESS())
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						Global_2726956 = 1;
						Global_2726957 = 1;
					}
					if (NETWORK::IS_STORE_AVAILABLE_TO_USER())
					{
						NETWORK::SET_LAST_VIEWED_SHOP_ITEM(MISC::GET_HASH_KEY(&(Global_100493.f_1384)), Global_100493.f_1388, MISC::GET_HASH_KEY(__LIB_9__::func_422(uParam0->f_6, 0, 0)));
						NETWORK::OPEN_COMMERCE_STORE("", "", __LIB_10__::func_378(uParam0->f_6));
					}
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
		}
		return 1;
	}
	else if (((uParam0->f_4 && !__LIB_10__::func_118()) && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) || uParam0->f_5)
	{
		uParam0->f_5 = 1;
		iVar8 = 2;
		HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT" /* GXT: Alert */, "STORE_CON_ONL" /* GXT: To access the Store you must have a network connection and be signed in to the Rockstar Games Social Club. */, iVar8, 0, false, -1, 0, 0, true, 0);
		if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
		{
			uParam0->f_4 = __LIB_10__::func_118();
			uParam0->f_5 = 0;
		}
		return 1;
	}
	else if (((uParam0->f_2 && !NETWORK::NETWORK_IS_SIGNED_ONLINE()) && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) || uParam0->f_3)
	{
		uParam0->f_3 = 1;
		iVar9 = 2;
		HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT" /* GXT: Alert */, "STORE_SGN_ONL2" /* GXT: You have been signed out of the Rockstar Games Social Club. */, iVar9, 0, false, -1, 0, 0, true, 0);
		if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
		{
			uParam0->f_2 = NETWORK::NETWORK_IS_SIGNED_ONLINE();
			uParam0->f_3 = 0;
		}
		return 1;
	}
	return 0;
}

int func_368(var uParam0, int iParam1, int iParam2)//Position - 0x45DC1
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	if (iParam2 == 1)
	{
		func_406(&(uParam0->f_485), &Global_4537616, 1, __LIB_29__::func_540(uParam0), -1, &(uParam0->f_716), &(uParam0->f_719));
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
			func_406(&(uParam0->f_485), &Global_4537616, 0, __LIB_29__::func_540(uParam0), -1, &(uParam0->f_716), &(uParam0->f_719));
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
			iVar3 = __LIB_29__::func_503();
			iVar2 = 0;
			while (iVar2 < iVar3)
			{
				if (func_404(iVar2) && !__LIB_37__::func_264(iVar2))
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
			if (__LIB_40__::func_584(iVar4))
			{
				if (func_396(iVar4) && !__LIB_39__::func_365(iVar4))
				{
					return 1;
				}
			}
			iVar4++;
		}
	}
	else if (__LIB_29__::func_531(iParam2))
	{
		iVar5 = 0;
		while (iVar5 < __LIB_29__::func_501(iParam1, iParam2))
		{
			if (func_373(uParam0, iParam1, iParam2, iVar5) && !func_369(uParam0, iParam1, iParam2, iVar5))
			{
				return 1;
			}
			iVar5++;
		}
		return 0;
	}
	return 0;
}

int func_369(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x45F91
{
	struct<12> Var0;
	if (__LIB_39__::func_370(iParam1, iParam2, iParam3, &Var0, __LIB_29__::func_528(uParam0->f_523)))
	{
		if (!func_370(Var0.f_11, 2, -1))
		{
			return 0;
		}
		return 1;
	}
	return 1;
}

int func_370(int iParam0, int iParam1, int iParam2)//Position - 0x45FC8
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
	if (__LIB_37__::func_261(iParam0, iParam1, &iVar2, &uVar1))
	{
		iVar3 = __LIB_0__::func_534(iVar2, iVar0, 0);
		return BitTest(iVar3, uVar1);
	}
	return 0;
}

int func_373(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x4812B
{
	struct<11> Var0;
	char* sVar1;
	struct<14> Var2;
	if (__LIB_39__::func_370(iParam1, iParam2, iParam3, &Var0, __LIB_29__::func_528(uParam0->f_523)))
	{
		if (!func_378(iParam1, iParam2, iParam3, uParam0->f_523))
		{
			return 0;
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && __LIB_4__::func_571())
		{
			__LIB_37__::func_265(&sVar1, iParam2, Var0.f_1, iParam1, 0);
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
				if (!func_374(Var0.f_10))
				{
					return 0;
				}
				return 1;
			}
			else if (Var0.f_5 == 4)
			{
				if (!func_374(Var0.f_10))
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

int func_374(var uParam0)//Position - 0x48225
{
	var uVar0;
	int iVar1;
	if (__LIB_0__::func_703())
	{
		return 0;
	}
	uVar0 = func_375(uParam0);
	iVar1 = uParam0;
	return BitTest(uVar0, __LIB_0__::func_158(iVar1));
}

int func_375(var uParam0)//Position - 0x4824D
{
	int iVar0;
	iVar0 = __LIB_0__::func_534(__LIB_15__::func_534(uParam0), -1, 0);
	return iVar0;
}

int func_378(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x48367
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
						if (__LIB_0__::func_262() && (Global_262145.f_8258 /* Tunable: TOGGLE_ACTIVATE_INDEPENDENCE_PACK */ || __LIB_0__::func_137(3606, -1)))
						{
							return 1;
						}
						return 0;
						break;
					case 23:
					case 24:
					case 25:
					case 26:
						if (__LIB_0__::func_277())
						{
							return 1;
						}
						return 0;
						break;
					case 27:
					case 28:
					case 29:
						if (__LIB_0__::func_276())
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
						if (__LIB_29__::func_500())
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
						if (__LIB_29__::func_499())
						{
							return 1;
						}
						return 0;
						break;
					case 40:
						if (__LIB_29__::func_498())
						{
							return 1;
						}
						return 0;
						break;
					case 41:
					case 42:
						if (__LIB_0__::func_270())
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
					if (__LIB_0__::func_262() && (Global_262145.f_8258 /* Tunable: TOGGLE_ACTIVATE_INDEPENDENCE_PACK */ || __LIB_0__::func_137(3607, -1)))
					{
						return 1;
					}
					return 0;
				}
				else if (iParam2 >= 14 && iParam2 <= 43)
				{
					if (__LIB_29__::func_497())
					{
						if (Global_262145.f_12040 /* Tunable: TURN_ON_HALLOWEEN_FACEPAINT */)
						{
							return 1;
						}
						if (__LIB_39__::func_370(iParam0, iParam1, iParam2, &Var0, 0) && func_381(Var0.f_10))
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
					if (__LIB_29__::func_495())
					{
						if (Global_262145.f_12041 /* Tunable: TURN_ON_GANGOPS_FACEPAINT */)
						{
							return 1;
						}
						if (__LIB_39__::func_370(iParam0, iParam1, iParam2, &Var1, 0) && func_381(Var1.f_10))
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
						if (__LIB_10__::func_99() && ((Global_262145.f_7058 /* Tunable: TURN_ON_VALENTINES_EVENT */ || Global_262145.f_12030 /* Tunable: TURN_ON_VALENTINE_HAIR */) || __LIB_0__::func_137(4246, -1)))
						{
							return 1;
						}
						return 0;
						break;
					case 23:
						if (__LIB_0__::func_262() && (Global_262145.f_8258 /* Tunable: TOGGLE_ACTIVATE_INDEPENDENCE_PACK */ || __LIB_0__::func_137(3606, -1)))
						{
							return 1;
						}
						return 0;
						break;
					case 24:
					case 25:
					case 26:
					case 27:
						if (__LIB_0__::func_277())
						{
							return 1;
						}
						return 0;
						break;
					case 28:
					case 29:
					case 30:
						if (__LIB_0__::func_276())
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
						if (__LIB_29__::func_500())
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
						if (__LIB_29__::func_499())
						{
							return 1;
						}
						return 0;
						break;
					case 42:
						if (__LIB_29__::func_498())
						{
							return 1;
						}
						return 0;
						break;
					case 43:
					case 44:
						if (__LIB_0__::func_270())
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
					if (__LIB_0__::func_262() && (Global_262145.f_8258 /* Tunable: TOGGLE_ACTIVATE_INDEPENDENCE_PACK */ || __LIB_0__::func_137(3607, -1)))
					{
						return 1;
					}
					return 0;
				}
				else if (iParam2 >= 14 && iParam2 <= 43)
				{
					if (__LIB_29__::func_497())
					{
						if (Global_262145.f_12040 /* Tunable: TURN_ON_HALLOWEEN_FACEPAINT */)
						{
							return 1;
						}
						if (__LIB_39__::func_370(iParam0, iParam1, iParam2, &Var2, 0) && func_381(Var2.f_10))
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
					if (__LIB_29__::func_495())
					{
						if (Global_262145.f_12041 /* Tunable: TURN_ON_GANGOPS_FACEPAINT */)
						{
							return 1;
						}
						if (__LIB_39__::func_370(iParam0, iParam1, iParam2, &Var3, 0) && func_381(Var3.f_10))
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

int func_381(var uParam0)//Position - 0x48FEE
{
	var uVar0;
	int iVar1;
	if (__LIB_0__::func_703())
	{
		return 0;
	}
	uVar0 = func_382(uParam0);
	iVar1 = uParam0;
	return BitTest(uVar0, __LIB_0__::func_158(iVar1));
}

int func_382(var uParam0)//Position - 0x49016
{
	int iVar0;
	iVar0 = __LIB_0__::func_534(__LIB_29__::func_496(uParam0), -1, 0);
	return iVar0;
}

int func_396(int iParam0)//Position - 0x49306
{
	return func_374(__LIB_29__::func_506(iParam0));
	return 1;
}

int func_404(int iParam0)//Position - 0x4940E
{
	if (iParam0 >= 19 + 1)
	{
		if (iParam0 >= 27 && iParam0 <= 36)
		{
			return 1;
		}
		return 0;
	}
	return func_374(__LIB_29__::func_507(iParam0));
	return 1;
}

void func_406(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, var uParam5, var uParam6)//Position - 0x4946A
{
	struct<401> Var0;
	Var0 = 125;
	Var0.f_126 = 125;
	Var0.f_253 = 125;
	Var0.f_379 = 10;
	Var0.f_390 = 10;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_410(uParam0, &Var0, __LIB_11__::func_460(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())), 0, iParam4, uParam5, uParam6);
	}
	else if (iParam2 == 1)
	{
		__LIB_39__::func_366(uParam0, &Var0, __LIB_11__::func_460(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())), 0, bParam3);
	}
	else
	{
		__LIB_34__::func_768(uParam0, &Var0, __LIB_11__::func_460(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())), 0, bParam3);
	}
	*uParam1 = { Var0 };
}

void func_410(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5, var uParam6)//Position - 0x49C54
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
			if (!func_414(Var0.f_0, Var0.f_1, 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Var0.f_1, joaat("NIGHT_VISION"), 0))
			{
				iVar5 = __LIB_29__::func_505(&(Var0.f_9));
				if (__LIB_29__::func_504(iParam4, iVar5))
				{
					MISC::SET_BIT(uParam5[(iVar5 / 32)], (iVar5 % 32));
					if (!__LIB_6__::func_778(Var0.f_1, 2, 1, 1, -1))
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
	if (__LIB_29__::func_504(iParam4, iVar5))
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
	if (__LIB_29__::func_504(iParam4, iVar5))
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
	if (__LIB_29__::func_504(iParam4, iVar5))
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
	if (__LIB_29__::func_504(iParam4, iVar5))
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
	if (__LIB_29__::func_504(iParam4, iVar5))
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
	if (__LIB_29__::func_504(iParam4, iVar5))
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
	if (__LIB_29__::func_504(iParam4, iVar5))
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
	if (__LIB_29__::func_504(iParam4, iVar5))
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
	if (__LIB_29__::func_504(iParam4, iVar5))
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
	if (__LIB_29__::func_504(iParam4, iVar5))
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
	if (__LIB_29__::func_504(iParam4, iVar5))
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
	if (__LIB_29__::func_504(iParam4, iVar5))
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
	if (__LIB_29__::func_504(iParam4, iVar5))
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
	if (__LIB_29__::func_504(iParam4, iVar5))
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
	if (__LIB_29__::func_504(iParam4, iVar5))
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
	if (__LIB_29__::func_504(iParam4, iVar5))
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
	if (__LIB_29__::func_504(iParam4, iVar5))
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
	if (__LIB_29__::func_504(iParam4, iVar5))
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
	if (__LIB_29__::func_504(iParam4, iVar5))
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
	if (__LIB_29__::func_504(iParam4, iVar5))
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
	if (__LIB_29__::func_504(iParam4, iVar5))
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
	if (__LIB_29__::func_504(iParam4, iVar5))
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
	if (__LIB_29__::func_504(iParam4, iVar5))
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
	if (__LIB_29__::func_504(iParam4, iVar5))
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
	if (__LIB_29__::func_504(iParam4, iVar5))
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
	if (__LIB_29__::func_504(iParam4, iVar5))
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
	if (__LIB_29__::func_504(iParam4, iVar5))
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
	if (__LIB_29__::func_504(iParam4, iVar5))
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
	if (__LIB_29__::func_504(iParam4, iVar5))
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
	if (__LIB_29__::func_504(iParam4, iVar5))
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
	if (__LIB_29__::func_504(iParam4, iVar5))
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
	if (__LIB_29__::func_504(iParam4, iVar5))
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

int func_414(int iParam0, int iParam1, int iParam2)//Position - 0x4BBBD
{
	switch (iParam0)
	{
		case joaat("CU_SUM2_G9EC_MASKS"):
			if (__LIB_6__::func_778(iParam1, 1, 1, 1, -1))
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
					if (!__LIB_0__::func_137(34399, -1))
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
			if (__LIB_6__::func_778(iParam1, 1, 1, 1, -1))
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
			if (__LIB_6__::func_778(iParam1, 1, 1, 1, -1))
			{
				return 0;
			}
			switch (iParam1)
			{
				case joaat("DLC_MP_SUM2_M_BERD_5_0"):
				case joaat("DLC_MP_SUM2_F_BERD_5_0"):
					if (!__LIB_0__::func_137(34451, -1))
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
					if (!__LIB_0__::func_137(34442, -1))
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
					if (!__LIB_0__::func_137(34423/*func_58*/, -1))
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
			if (__LIB_6__::func_778(iParam1, 1, 1, 1, -1))
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
					if (!__LIB_0__::func_137(34381, -1))
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
					if (!__LIB_0__::func_137(34476/*func_59*/, -1))
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
					if (!__LIB_0__::func_137(34504, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(32295, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(32296, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(32297, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(32298, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(32299, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(32300, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(32301, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(32302, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(32303, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(32304, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(32305, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(32306, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(32288, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(32289, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(32290, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(32291, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(32307, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(32308, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(32309, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(32310, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(32311, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(32316, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(31736, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(31776, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(31777, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(31779, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(31780, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(31781, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(31782, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(31805, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(31806, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(31807, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(31808, -1))
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
					if (((!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(31789, -1)) && !Global_262145.f_32772 /* Tunable: UNLOCK_SPRUNK_AND_ECOLA_BODYSUITS_FOR_PURCHASE */) && !Global_262145.f_32773 /* Tunable: UNLOCK_ECOLA_ITEMS_FOR_PURCHASE */)
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
					if (((!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(31790, -1)) && !Global_262145.f_32772 /* Tunable: UNLOCK_SPRUNK_AND_ECOLA_BODYSUITS_FOR_PURCHASE */) && !Global_262145.f_32774 /* Tunable: UNLOCK_SPRUNK_ITEMS_FOR_PURCHASE */)
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(32275, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(32273, -1))
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
					if ((!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(31785, -1)) && !Global_262145.f_32773 /* Tunable: UNLOCK_ECOLA_ITEMS_FOR_PURCHASE */)
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
					if ((!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(31786, -1)) && !Global_262145.f_32774 /* Tunable: UNLOCK_SPRUNK_ITEMS_FOR_PURCHASE */)
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(31787, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(31788, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(31784, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(31783, -1))
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
					if ((!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(31766, -1)) && !Global_262145.f_32774 /* Tunable: UNLOCK_SPRUNK_ITEMS_FOR_PURCHASE */)
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
					if ((!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(31767, -1)) && !Global_262145.f_32773 /* Tunable: UNLOCK_ECOLA_ITEMS_FOR_PURCHASE */)
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30563, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30564, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30565, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30566, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30572, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30573, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30578, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30579, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30580, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30581, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30582, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30583, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30584, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30585, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30586, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30587, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30588, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30589, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30590, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30591, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30592, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30593, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30594, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30595, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30596, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30597, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30598, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30599, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30600, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30601, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30602, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30603, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30604, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30605, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30606, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30607, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30608, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30609, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30610, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30611, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30612, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30613, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30614, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30615, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30616, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30617, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30618, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30619, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30620, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30621, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30622, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30623, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30624, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30625, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30626, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30627, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30628, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30629, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30630, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30631, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30574, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30567, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30575, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30576, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30577, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30638, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30639, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30640, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30641, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30642, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30643, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30644, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30645, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30646, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30647, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30648, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30649, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30650, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30651, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30652, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30653, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30654, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30655, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30656, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30657, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30658, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30659, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30660, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30661, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30662, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30663, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30664, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30665, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30666, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30667, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30668, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30669, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30670, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30671, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30672, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30673, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30674, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30675, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30676, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30677, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30678, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30679, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30680, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30681, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30682, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30683, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30684, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30685, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30686, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30687, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30688, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30689, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30690, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30691, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30692, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30693, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30240, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30259, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30290, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30291, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30292, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30293, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30294, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(30295, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !(__LIB_0__::func_137(28255, -1) && __LIB_0__::func_137(28254, -1)))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(28254, -1))
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
					if ((!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_425(91, -1)) && !__LIB_0__::func_137(30258, -1))
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
					if (((!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !Global_262145.f_28370 /* Tunable: 1822091832 */) && !(Global_262145.f_28371 /* Tunable: -1806041478 */ && __LIB_25__::func_943(146))) && !__LIB_0__::func_137(28224, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(28172, -1))
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
					if ((!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_425(77, -1)) && !__LIB_0__::func_137(28197, -1))
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
					if ((!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_426(92, -1) >= __LIB_0__::func_238(92, 5, 9)) && !__LIB_0__::func_137(28198, -1))
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
					if ((!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !((__LIB_0__::func_425(77, -1) && __LIB_0__::func_425(78, -1)) && __LIB_0__::func_426(92, -1) >= __LIB_0__::func_238(92, 5, 9))) && !__LIB_0__::func_137(28200, -1))
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
					if ((!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_426(93, -1) >= __LIB_0__::func_238(93, 5, 9)) && !__LIB_0__::func_137(28201, -1))
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
					if ((!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_425(79, -1)) && !__LIB_0__::func_137(28202, -1))
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
					if ((!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_425(80, -1)) && !__LIB_0__::func_137(28203, -1))
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
					if ((!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_426(95, -1) >= __LIB_0__::func_238(95, 5, 9)) && !__LIB_0__::func_137(28205, -1))
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
					if ((!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !((__LIB_0__::func_425(81, -1) && __LIB_0__::func_426(94, -1) >= __LIB_0__::func_238(94, 5, 9)) && __LIB_0__::func_426(95, -1) >= __LIB_0__::func_238(95, 5, 9))) && !__LIB_0__::func_137(28208, -1))
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
					if ((!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_425(82, -1)) && !__LIB_0__::func_137(28209, -1))
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
					if ((!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_425(83, -1)) && !__LIB_0__::func_137(28210, -1))
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
					if ((!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_426(96, -1) >= __LIB_0__::func_238(96, 5, 9)) && !__LIB_0__::func_137(28211, -1))
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
					if ((!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !((__LIB_0__::func_425(82, -1) && __LIB_0__::func_425(83, -1)) && __LIB_0__::func_426(96, -1) >= __LIB_0__::func_238(96, 5, 9))) && !__LIB_0__::func_137(28212, -1))
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
					if ((!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_425(84, -1)) && !__LIB_0__::func_137(28213, -1))
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
					if ((!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_425(85, -1)) && !__LIB_0__::func_137(28214, -1))
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
					if ((!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_426(97, -1) >= __LIB_0__::func_238(97, 5, 9)) && !__LIB_0__::func_137(28215, -1))
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
					if ((!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !((__LIB_0__::func_425(84, -1) && __LIB_0__::func_425(85, -1)) && __LIB_0__::func_426(97, -1) >= __LIB_0__::func_238(97, 5, 9))) && !__LIB_0__::func_137(28216, -1))
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
					if ((!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_425(86, -1)) && !__LIB_0__::func_137(28217, -1))
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
					if ((!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_425(87, -1)) && !__LIB_0__::func_137(28218, -1))
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
					if ((!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_425(88, -1)) && !__LIB_0__::func_137(28219, -1))
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
					if ((!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !((__LIB_0__::func_425(86, -1) && __LIB_0__::func_425(87, -1)) && __LIB_0__::func_425(88, -1))) && !__LIB_0__::func_137(28220, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(28185, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(28188, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(28186, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(28187, -1))
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
					if (!__LIB_6__::func_804(0, 1) && !__LIB_0__::func_137(28222, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(26968, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(26969, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_2__::func_923(PLAYER::PLAYER_ID()))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(27194, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(27193, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(27192, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(27189, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(27190, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(27191, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(27195, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(27196, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(27197, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(27188, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(27186, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(27202, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(27203, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(27204, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(27205, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(27206, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(27207, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(27208, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(27209, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(27210, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(27184, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(27211, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(27185, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(27212, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(27198, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(27187, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(27213, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(27199, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(27200, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(27201, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(28171, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(28173, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(28174, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(28175, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_3__::func_32())
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(25022, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(25023, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(25024, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(25025, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(25026, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(25027, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(25028, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(25019, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(25029, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(25021, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(25018, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(25020, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(25030, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(25031, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(25005, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(25004, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(18121, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(18122, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(18123, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(18124, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(18125, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(18134, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(18135, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(18136, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(18137, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(15417, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(15418, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(15425, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(15405, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(15393, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(15409, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(15396, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(15412, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_421(209, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(15403, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_421(209, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(15389, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_421(209, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(15398, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(15400, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_421(209, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(15408, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_421(209, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(15411, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(15397, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(15413, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(15391, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(15388, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_421(209, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(15401, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(9443, -1))
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
					if (!Global_262145.f_19302 /* Tunable: ENABLE_2016_OUTFITS */ && !__LIB_6__::func_778(joaat("DLC_MP_IE_M_OUTFIT_0"), 1, 1, 1, -1))
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
					if (!Global_262145.f_19302 /* Tunable: ENABLE_2016_OUTFITS */ && !__LIB_6__::func_778(joaat("DLC_MP_IE_M_OUTFIT_1"), 1, 1, 1, -1))
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
					if (!Global_262145.f_19302 /* Tunable: ENABLE_2016_OUTFITS */ && !__LIB_6__::func_778(joaat("DLC_MP_IE_M_OUTFIT_2"), 1, 1, 1, -1))
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
					if (!Global_262145.f_19302 /* Tunable: ENABLE_2016_OUTFITS */ && !__LIB_6__::func_778(joaat("DLC_MP_IE_F_OUTFIT_0"), 1, 1, 1, -1))
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
					if (!Global_262145.f_19302 /* Tunable: ENABLE_2016_OUTFITS */ && !__LIB_6__::func_778(joaat("DLC_MP_IE_F_OUTFIT_1"), 1, 1, 1, -1))
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
					if (!Global_262145.f_19302 /* Tunable: ENABLE_2016_OUTFITS */ && !__LIB_6__::func_778(joaat("DLC_MP_IE_F_OUTFIT_2"), 1, 1, 1, -1))
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
					if ((!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(9386, -1)) && Global_262145.f_17603 /* Tunable: -201556170 */ != 0)
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
					if ((!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(9375, -1)) && !Global_262145.f_17593 /* Tunable: 559860177 */)
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
					if ((!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(9376, -1)) && !Global_262145.f_17594 /* Tunable: -1239730604 */)
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
					if ((!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(9377, -1)) && !Global_262145.f_17595 /* Tunable: -1999951230 */)
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
					if ((!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(9378, -1)) && !Global_262145.f_17596 /* Tunable: 1028164569 */)
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
					if ((!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(9379, -1)) && !Global_262145.f_17597 /* Tunable: 1813059180 */)
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
					if ((!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(9380, -1)) && !Global_262145.f_17598 /* Tunable: -1528114388 */)
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
					if ((!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(9381, -1)) && !Global_262145.f_17599 /* Tunable: -1236322922 */)
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
					if ((!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(9382, -1)) && !Global_262145.f_17600 /* Tunable: 2030112196 */)
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
					if ((!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(9383, -1)) && !Global_262145.f_17601 /* Tunable: 310744591 */)
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
					if ((!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(7595, -1)) && !Global_262145.f_16832 /* Tunable: AVAILABLE_PURCHASE_JUMPSUIT_WHITE */)
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
					if ((!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(7596, -1)) && !Global_262145.f_16833 /* Tunable: AVAILABLE_PURCHASE_JUMPSUIT_BLUE */)
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
					if ((!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(7597, -1)) && !Global_262145.f_16834 /* Tunable: AVAILABLE_PURCHASE_JUMPSUIT_RED */)
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
					if ((!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(7599, -1)) && !Global_262145.f_16836 /* Tunable: AVAILABLE_PURCHASE_JUMPSUIT_BLACK */)
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
					if ((!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(7600, -1)) && !Global_262145.f_16837 /* Tunable: AVAILABLE_PURCHASE_JUMPSUIT_PINK */)
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
					if ((!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(7598, -1)) && !Global_262145.f_16835 /* Tunable: AVAILABLE_PURCHASE_JUMPSUIT_GOLD */)
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
					if ((!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(7601, -1)) && !Global_262145.f_16838 /* Tunable: AVAILABLE_PURCHASE_JUMPSUIT_SILVER */)
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(7482, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(7483, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(7484, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(7485, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(7486, -1))
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
					if ((!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(7487, -1)) && !__LIB_0__::func_137(9441, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(7488, -1))
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
					if ((!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(7489, -1)) && !__LIB_0__::func_137(9442, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(7490, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(7491, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(7492, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(7493, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(7494, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(7495, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(7515, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(7516, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(7517, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(7518, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(7519, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(7520, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(7521, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(7522, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(7523, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(7524, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(7525, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(7526, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(7527, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(7528, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(4247, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(4248, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(4249, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(4250, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(4251, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(4252, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(4253, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(4254, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(4255, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(4256, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(110, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(111, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(112, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(4333, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(4334, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(4335, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(3750, -1))
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
			if (__LIB_9__::func_910())
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !Global_262145.f_12029 /* Tunable: TURN_ON_VALENTINE_MASKS */)
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
			}
			if (((!Global_262145.f_7058 /* Tunable: TURN_ON_VALENTINES_EVENT */ && !__LIB_6__::func_778(iParam1, 1, 1, 1, -1)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam1, joaat("MULTI_DECAL"), iParam2)) && !Global_262145.f_12031 /* Tunable: TURN_ON_VALENTINE_CLOTHING */)
			{
				return 1;
			}
			break;
		case joaat("CU_VAL2_CLOTHES"):
			if ((!Global_262145.f_13393 /* Tunable: TURN_ON_VALENTINE_2016_CLOTHING */ && !__LIB_6__::func_778(iParam1, 1, 1, 1, -1)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam1, joaat("MULTI_DECAL"), iParam2))
			{
				return 1;
			}
			break;
		case joaat("CU_INDI_CLOTHES"):
			switch (iParam1)
			{
				case joaat("DLC_MP_IND_F_PHEAD_6_0"):
				case joaat("DLC_MP_IND_M_PHEAD_6_0"):
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(3594, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(3595, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(3596, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(3597, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(3598, -1))
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
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(3599, -1))
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
					if (((!Global_262145.f_8258 /* Tunable: TOGGLE_ACTIVATE_INDEPENDENCE_PACK */ && !__LIB_6__::func_778(iParam1, 1, 1, 1, -1)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam1, joaat("MULTI_DECAL"), iParam2)) && !__LIB_0__::func_137(3606, -1))
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
					if (!Global_262145.f_12055 /* Tunable: TURN_ON_INDEPENDENCE_MASKS */ && !__LIB_6__::func_778(iParam1, 1, 1, 1, -1))
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
			}
			if ((!Global_262145.f_8258 /* Tunable: TOGGLE_ACTIVATE_INDEPENDENCE_PACK */ && !__LIB_6__::func_778(iParam1, 1, 1, 1, -1)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam1, joaat("MULTI_DECAL"), iParam2))
			{
				return 1;
			}
			break;
		case joaat("CU_LTS_CLOTHES"):
			switch (iParam1)
			{
				case joaat("DLC_MP_LTS_M_BERD_2_0"):
				case joaat("DLC_MP_LTS_F_BERD_2_0"):
					if (!__LIB_6__::func_778(iParam1, 1, 1, 1, -1) && !__LIB_0__::func_137(3616, -1))
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
			if ((!Global_262145.f_12048 /* Tunable: TURN_ON_HALLOWEEN_CLOTHING */ && !__LIB_6__::func_778(iParam1, 1, 1, 1, -1)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam1, joaat("MULTI_DECAL"), iParam2))
			{
				return 1;
			}
			break;
		case joaat("CU_HAL_MASKS"):
			if (!Global_262145.f_12039 /* Tunable: TURN_ON_HALLOWEEN_MASKS */ && !__LIB_6__::func_778(iParam1, 1, 1, 1, -1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_437(var uParam0, int iParam1)//Position - 0x57798
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
	if ((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/)) || __LIB_2__::func_338())
	{
		func_516(iParam1, uParam0);
		__LIB_37__::func_279(uParam0);
		if ((uParam0->f_525 == 5 || uParam0->f_525 == 12) || uParam0->f_525 == 9)
		{
			uParam0->f_710 = 1;
		}
		else
		{
			uParam0->f_710 = 0;
		}
		func_514(iParam1, uParam0->f_525);
		return;
	}
	iVar0 = 0;
	fVar1 = -1f;
	iVar7 = ENTITY::GET_ENTITY_MODEL(iParam1);
	__LIB_11__::func_412(&(uParam0->f_236), 300);
	switch (uParam0->f_525)
	{
		case 5:
			uParam0->f_116.f_15 = 0;
			__LIB_7__::func_287(0, 0, 0, 1);
			if (__LIB_2__::func_157())
			{
				if (Global_4539961 == uParam0->f_116.f_1)
				{
					iVar0 = 1;
				}
				else
				{
					uParam0->f_116.f_1 = Global_4539961;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					__LIB_2__::func_183(uParam0->f_116.f_1, 1, 1);
				}
			}
			if (((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/) || (uParam0->f_236.f_1 < -100 && uParam0->f_236.f_4)) || (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/) && uParam0->f_236.f_8)) || __LIB_10__::func_374(uParam0->f_236.f_8, 0, 0))
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
				while (uParam0->f_116.f_1 >= 0 && !__LIB_29__::func_518(iVar7, __LIB_29__::func_519(uParam0->f_116.f_1), uParam0->f_523))
				{
					uParam0->f_116.f_1 = (uParam0->f_116.f_1 - 1);
				}
				if (!__LIB_29__::func_518(iVar7, __LIB_29__::func_519(uParam0->f_116.f_1), uParam0->f_523))
				{
					uParam0->f_116.f_1 = 6;
				}
				while (uParam0->f_116.f_1 >= 0 && !__LIB_29__::func_518(iVar7, __LIB_29__::func_519(uParam0->f_116.f_1), uParam0->f_523))
				{
					uParam0->f_116.f_1 = (uParam0->f_116.f_1 - 1);
				}
				__LIB_2__::func_183(uParam0->f_116.f_1, 1, 1);
			}
			else if (((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/) || (uParam0->f_236.f_1 > 100 && uParam0->f_236.f_4)) || (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/) && uParam0->f_236.f_9)) || __LIB_10__::func_373(uParam0->f_236.f_9, 0, 0))
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
				while (uParam0->f_116.f_1 <= 6 && !__LIB_29__::func_518(iVar7, __LIB_29__::func_519(uParam0->f_116.f_1), uParam0->f_523))
				{
					uParam0->f_116.f_1++;
				}
				if (!__LIB_29__::func_518(iVar7, __LIB_29__::func_519(uParam0->f_116.f_1), uParam0->f_523))
				{
					uParam0->f_116.f_1 = 0;
				}
				while (uParam0->f_116.f_1 <= 6 && !__LIB_29__::func_518(iVar7, __LIB_29__::func_519(uParam0->f_116.f_1), uParam0->f_523))
				{
					uParam0->f_116.f_1++;
				}
				__LIB_2__::func_183(uParam0->f_116.f_1, 1, 1);
			}
			else if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) || iVar0 == 1)
			{
				iVar0 = 0;
				AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT" /* GXT: Filter List */, "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				uParam0->f_715 = -1;
				uParam0->f_525 = __LIB_29__::func_519(uParam0->f_116.f_1);
				uParam0->f_590 = 1;
				uParam0->f_116.f_1 = 0;
				uParam0->f_638 = 0;
				if (uParam0->f_525 == 9)
				{
					func_514(iParam1, uParam0->f_525);
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
					while (uParam0->f_116.f_1 <= 2 && !__LIB_29__::func_518(iVar7, __LIB_29__::func_517(uParam0->f_116.f_1), uParam0->f_523))
					{
						uParam0->f_116.f_1++;
					}
				}
			}
			break;
		case 12:
			uParam0->f_116.f_15 = 0;
			__LIB_7__::func_287(0, 0, 0, 1);
			if (__LIB_2__::func_157())
			{
				if (Global_4539961 == uParam0->f_116.f_1)
				{
					iVar0 = 1;
				}
				else
				{
					uParam0->f_116.f_1 = Global_4539961;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					__LIB_2__::func_183(uParam0->f_116.f_1, 1, 1);
					uParam0->f_725 = __LIB_3__::func_979();
				}
			}
			if (((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/) || (uParam0->f_236.f_1 < -100 && uParam0->f_236.f_4)) || (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/) && uParam0->f_236.f_8)) || __LIB_10__::func_374(uParam0->f_236.f_8, 0, 0))
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
				while (uParam0->f_116.f_1 >= 0 && !__LIB_29__::func_518(iVar7, __LIB_29__::func_517(uParam0->f_116.f_1), uParam0->f_523))
				{
					uParam0->f_116.f_1 = (uParam0->f_116.f_1 - 1);
				}
				if (!__LIB_29__::func_518(iVar7, __LIB_29__::func_517(uParam0->f_116.f_1), uParam0->f_523))
				{
					uParam0->f_116.f_1 = 2;
				}
				while (uParam0->f_116.f_1 >= 0 && !__LIB_29__::func_518(iVar7, __LIB_29__::func_517(uParam0->f_116.f_1), uParam0->f_523))
				{
					uParam0->f_116.f_1 = (uParam0->f_116.f_1 - 1);
				}
				__LIB_2__::func_183(uParam0->f_116.f_1, 1, 1);
				uParam0->f_725 = __LIB_3__::func_979();
			}
			else if (((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/) || (uParam0->f_236.f_1 > 100 && uParam0->f_236.f_4)) || (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/) && uParam0->f_236.f_9)) || __LIB_10__::func_373(uParam0->f_236.f_9, 0, 0))
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
				while (uParam0->f_116.f_1 <= 2 && !__LIB_29__::func_518(iVar7, __LIB_29__::func_517(uParam0->f_116.f_1), uParam0->f_523))
				{
					uParam0->f_116.f_1++;
				}
				if (!__LIB_29__::func_518(iVar7, __LIB_29__::func_517(uParam0->f_116.f_1), uParam0->f_523))
				{
					uParam0->f_116.f_1 = 0;
				}
				while (uParam0->f_116.f_1 <= 2 && !__LIB_29__::func_518(iVar7, __LIB_29__::func_517(uParam0->f_116.f_1), uParam0->f_523))
				{
					uParam0->f_116.f_1++;
				}
				__LIB_2__::func_183(uParam0->f_116.f_1, 1, 1);
				uParam0->f_725 = __LIB_3__::func_979();
			}
			else if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) || iVar0 == 1)
			{
				iVar0 = 0;
				AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT" /* GXT: Filter List */, "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				uParam0->f_525 = __LIB_29__::func_517(uParam0->f_116.f_1);
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
				if (__LIB_39__::func_370(iVar7, uParam0->f_525, uParam0->f_116.f_1, &Var8, __LIB_29__::func_528(uParam0->f_523)))
				{
					func_504(Var8.f_11, 2, -1);
				}
			}
			uParam0->f_116.f_15 = 0;
			__LIB_7__::func_287(0, 0, 0, 1);
			if (__LIB_2__::func_157())
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
						uParam0->f_595 = __LIB_3__::func_979();
					}
					uParam0->f_492 = !func_373(uParam0, iVar7, uParam0->f_525, uParam0->f_116.f_1);
					uParam0->f_493 = (!uParam0->f_492 && !func_369(uParam0, iVar7, uParam0->f_525, uParam0->f_116.f_1));
					if (__LIB_39__::func_370(iVar7, uParam0->f_525, uParam0->f_116.f_1, &Var9, __LIB_29__::func_528(uParam0->f_523)))
					{
						uParam0->f_494 = __LIB_29__::func_516(iVar7, uParam0->f_525, &Var9);
					}
					else
					{
						uParam0->f_494 = 0;
					}
					func_501(uParam0, iParam1, uParam0->f_525, uParam0->f_116.f_1);
					if (uParam0->f_590)
					{
						uParam0->f_709 = 1;
						func_484(uParam0, iParam1, 0, 0);
						uParam0->f_590 = 0;
					}
					else
					{
						func_474(uParam0, iVar7, 1);
					}
					__LIB_2__::func_183(uParam0->f_116.f_1, 1, 1);
					uParam0->f_725 = __LIB_3__::func_979();
					if (__LIB_39__::func_370(iVar7, uParam0->f_525, uParam0->f_116.f_1, &Var9, __LIB_29__::func_528(uParam0->f_523)))
					{
						uParam0->f_566 = { Var9.f_1 };
					}
					__LIB_41__::func_374(iVar7, uParam0->f_525, uParam0->f_116.f_1, __LIB_29__::func_528(uParam0->f_523));
				}
			}
			if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
			{
				if (__LIB_29__::func_493(uParam0))
				{
					if (HUD::GET_MOUSE_EVENT(uParam0->f_624, &iVar4, &iVar5, &uVar6))
					{
						if (iVar4 == 5)
						{
							if (iVar5 > -1)
							{
								uParam0->f_635 = __LIB_34__::func_770(iVar7, uParam0->f_525, iVar5, uParam0->f_523);
								uParam0->f_709 = 1;
								func_501(uParam0, iParam1, uParam0->f_525, uParam0->f_116.f_1);
								if (uParam0->f_709)
								{
									uParam0->f_709 = 1;
									func_484(uParam0, iParam1, 0, 0);
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
				if (__LIB_39__::func_369(uParam0, iVar7))
				{
					if (HUD::GET_MOUSE_EVENT(uParam0->f_614, &iVar4, &iVar5, &uVar6))
					{
						if (iVar4 == 5)
						{
							if (iVar5 > -1)
							{
								uParam0->f_634 = __LIB_34__::func_770(iVar7, uParam0->f_525, iVar5, uParam0->f_523);
								uParam0->f_709 = 1;
								func_501(uParam0, iParam1, uParam0->f_525, uParam0->f_116.f_1);
								if (uParam0->f_709)
								{
									uParam0->f_709 = 1;
									func_484(uParam0, iParam1, 0, 0);
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
				if (__LIB_39__::func_368(uParam0, iVar7))
				{
					fVar2 = (0.113f - (Global_23149 / 2f));
					fVar3 = (__LIB_9__::func_927() + (0.255f - (0.5972f / 2f)));
					fVar1 = __LIB_34__::func_769(4, fVar2, fVar3, Global_23149, 0.15f, 1f);
					if (fVar1 >= 0f && fVar1 != fLocal_138)
					{
						if (uParam0->f_525 != 6)
						{
							uParam0->f_639 = fVar1;
							uParam0->f_709 = 1;
							func_501(uParam0, iParam1, uParam0->f_525, uParam0->f_116.f_1);
							func_474(uParam0, iVar7, 1);
						}
						AUDIO::PLAY_SOUND_FRONTEND(iLocal_137, "CONTINUOUS_SLIDER", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					}
					else
					{
						if (uParam0->f_709)
						{
							uParam0->f_709 = 1;
							func_484(uParam0, iParam1, 0, 0);
							uParam0->f_590 = 0;
						}
						AUDIO::STOP_SOUND(iLocal_137);
					}
					fLocal_138 = fVar1;
				}
			}
			fVar10 = ((1f - 0.15f) / 20f);
			if (((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/) || (uParam0->f_236.f_1 < -100 && uParam0->f_236.f_4)) || (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/) && uParam0->f_236.f_8)) || __LIB_10__::func_374(uParam0->f_236.f_8, 0, 0))
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
				while (uParam0->f_116.f_1 >= 0 && !func_378(iVar7, uParam0->f_525, uParam0->f_116.f_1, uParam0->f_523))
				{
					uParam0->f_116.f_1 = (uParam0->f_116.f_1 - 1);
				}
				if (!func_378(iVar7, uParam0->f_525, uParam0->f_116.f_1, uParam0->f_523))
				{
					uParam0->f_116.f_1 = (__LIB_29__::func_501(iVar7, uParam0->f_525) - 1);
				}
				while (uParam0->f_116.f_1 >= 0 && !func_378(iVar7, uParam0->f_525, uParam0->f_116.f_1, uParam0->f_523))
				{
					uParam0->f_116.f_1 = (uParam0->f_116.f_1 - 1);
				}
				if (uParam0->f_116.f_1 < 0)
				{
					uParam0->f_116.f_1 = (__LIB_29__::func_501(iVar7, uParam0->f_525) - 1);
				}
				while (uParam0->f_116.f_1 >= 0 && !func_378(iVar7, uParam0->f_525, uParam0->f_116.f_1, uParam0->f_523))
				{
					uParam0->f_116.f_1 = (uParam0->f_116.f_1 - 1);
				}
				if (uParam0->f_493)
				{
					uParam0->f_590 = 1;
					uParam0->f_594 = 1;
					uParam0->f_595 = __LIB_3__::func_979();
				}
				uParam0->f_492 = !func_373(uParam0, iVar7, uParam0->f_525, uParam0->f_116.f_1);
				uParam0->f_493 = (!uParam0->f_492 && !func_369(uParam0, iVar7, uParam0->f_525, uParam0->f_116.f_1));
				if (__LIB_39__::func_370(iVar7, uParam0->f_525, uParam0->f_116.f_1, &Var11, __LIB_29__::func_528(uParam0->f_523)))
				{
					uParam0->f_494 = __LIB_29__::func_516(iVar7, uParam0->f_525, &Var11);
				}
				else
				{
					uParam0->f_494 = 0;
				}
				func_501(uParam0, iParam1, uParam0->f_525, uParam0->f_116.f_1);
				if (uParam0->f_590)
				{
					uParam0->f_709 = 1;
					func_484(uParam0, iParam1, 0, 0);
					uParam0->f_590 = 0;
				}
				else
				{
					func_474(uParam0, iVar7, 1);
				}
				__LIB_2__::func_183(uParam0->f_116.f_1, 1, 1);
				uParam0->f_725 = __LIB_3__::func_979();
				if (__LIB_39__::func_370(iVar7, uParam0->f_525, uParam0->f_116.f_1, &Var11, __LIB_29__::func_528(uParam0->f_523)))
				{
					uParam0->f_566 = { Var11.f_1 };
				}
				__LIB_41__::func_374(iVar7, uParam0->f_525, uParam0->f_116.f_1, __LIB_29__::func_528(uParam0->f_523));
			}
			else if (((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/) || (uParam0->f_236.f_1 > 100 && uParam0->f_236.f_4)) || (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/) && uParam0->f_236.f_9)) || __LIB_10__::func_373(uParam0->f_236.f_9, 0, 0))
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
				while (uParam0->f_116.f_1 <= (__LIB_29__::func_501(iVar7, uParam0->f_525) - 1) && !func_378(iVar7, uParam0->f_525, uParam0->f_116.f_1, uParam0->f_523))
				{
					uParam0->f_116.f_1++;
				}
				if (!func_378(iVar7, uParam0->f_525, uParam0->f_116.f_1, uParam0->f_523))
				{
					uParam0->f_116.f_1 = 0;
				}
				while (uParam0->f_116.f_1 <= (__LIB_29__::func_501(iVar7, uParam0->f_525) - 1) && !func_378(iVar7, uParam0->f_525, uParam0->f_116.f_1, uParam0->f_523))
				{
					uParam0->f_116.f_1++;
				}
				if (uParam0->f_116.f_1 >= __LIB_29__::func_501(iVar7, uParam0->f_525))
				{
					uParam0->f_116.f_1 = 0;
				}
				while (uParam0->f_116.f_1 <= (__LIB_29__::func_501(iVar7, uParam0->f_525) - 1) && !func_378(iVar7, uParam0->f_525, uParam0->f_116.f_1, uParam0->f_523))
				{
					uParam0->f_116.f_1++;
				}
				if (uParam0->f_493)
				{
					uParam0->f_590 = 1;
					uParam0->f_594 = 1;
					uParam0->f_595 = __LIB_3__::func_979();
				}
				uParam0->f_492 = !func_373(uParam0, iVar7, uParam0->f_525, uParam0->f_116.f_1);
				uParam0->f_493 = (!uParam0->f_492 && !func_369(uParam0, iVar7, uParam0->f_525, uParam0->f_116.f_1));
				if (__LIB_39__::func_370(iVar7, uParam0->f_525, uParam0->f_116.f_1, &Var12, __LIB_29__::func_528(uParam0->f_523)))
				{
					uParam0->f_494 = __LIB_29__::func_516(iVar7, uParam0->f_525, &Var12);
				}
				else
				{
					uParam0->f_494 = 0;
				}
				func_501(uParam0, iParam1, uParam0->f_525, uParam0->f_116.f_1);
				if (uParam0->f_590)
				{
					uParam0->f_709 = 1;
					func_484(uParam0, iParam1, 0, 0);
					uParam0->f_590 = 0;
				}
				else
				{
					func_474(uParam0, iVar7, 1);
				}
				__LIB_2__::func_183(uParam0->f_116.f_1, 1, 1);
				uParam0->f_725 = __LIB_3__::func_979();
				if (__LIB_39__::func_370(iVar7, uParam0->f_525, uParam0->f_116.f_1, &Var12, __LIB_29__::func_528(uParam0->f_523)))
				{
					uParam0->f_566 = { Var12.f_1 };
				}
				__LIB_41__::func_374(iVar7, uParam0->f_525, uParam0->f_116.f_1, __LIB_29__::func_528(uParam0->f_523));
			}
			else if ((__LIB_37__::func_267(uParam0, iVar7) && !uParam0->f_525 == 14) && (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 207 /*INPUT_FRONTEND_LT*/) || (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 207 /*INPUT_FRONTEND_LT*/) && uParam0->f_236.f_14)))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				uParam0->f_236.f_14 = 0;
				uParam0->f_236.f_16 = MISC::GET_GAME_TIMER();
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					uParam0->f_236.f_17 = NETWORK::GET_NETWORK_TIME();
				}
				uParam0->f_634 = (uParam0->f_634 - 1);
				while (uParam0->f_634 >= 0 && !__LIB_29__::func_511(uParam0->f_525, uParam0->f_634, uParam0->f_523))
				{
					uParam0->f_634 = (uParam0->f_634 - 1);
				}
				if (!__LIB_29__::func_511(uParam0->f_525, uParam0->f_634, uParam0->f_523))
				{
					uParam0->f_634 = (__LIB_29__::func_510(iVar7, uParam0->f_525) - 1);
				}
				while (uParam0->f_634 >= 0 && !__LIB_29__::func_511(uParam0->f_525, uParam0->f_634, uParam0->f_523))
				{
					uParam0->f_634 = (uParam0->f_634 - 1);
				}
				if (uParam0->f_634 < 0)
				{
					uParam0->f_634 = (__LIB_29__::func_510(iVar7, uParam0->f_525) - 1);
				}
				while (uParam0->f_634 >= 0 && !__LIB_29__::func_511(uParam0->f_525, uParam0->f_634, uParam0->f_523))
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
				func_501(uParam0, iParam1, uParam0->f_525, uParam0->f_116.f_1);
				if (uParam0->f_709)
				{
					uParam0->f_709 = 1;
					func_484(uParam0, iParam1, 0, 0);
					uParam0->f_590 = 0;
				}
			}
			else if ((__LIB_37__::func_267(uParam0, iVar7) && !uParam0->f_525 == 14) && (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 208 /*INPUT_FRONTEND_RT*/) || (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 208 /*INPUT_FRONTEND_RT*/) && uParam0->f_236.f_15)))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				uParam0->f_236.f_15 = 0;
				uParam0->f_236.f_16 = MISC::GET_GAME_TIMER();
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					uParam0->f_236.f_17 = NETWORK::GET_NETWORK_TIME();
				}
				uParam0->f_634++;
				while (uParam0->f_634 <= (__LIB_29__::func_510(iVar7, uParam0->f_525) - 1) && !__LIB_29__::func_511(uParam0->f_525, uParam0->f_634, uParam0->f_523))
				{
					uParam0->f_634++;
				}
				if (!__LIB_29__::func_511(uParam0->f_525, uParam0->f_634, uParam0->f_523))
				{
					uParam0->f_634 = 0;
				}
				while (uParam0->f_634 <= (__LIB_29__::func_510(iVar7, uParam0->f_525) - 1) && !__LIB_29__::func_511(uParam0->f_525, uParam0->f_634, uParam0->f_523))
				{
					uParam0->f_634++;
				}
				if (uParam0->f_634 >= __LIB_29__::func_510(iVar7, uParam0->f_525))
				{
					uParam0->f_634 = 0;
				}
				while (uParam0->f_634 <= (__LIB_29__::func_510(iVar7, uParam0->f_525) - 1) && !__LIB_29__::func_511(uParam0->f_525, uParam0->f_634, uParam0->f_523))
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
				func_501(uParam0, iParam1, uParam0->f_525, uParam0->f_116.f_1);
				if (uParam0->f_709)
				{
					uParam0->f_709 = 1;
					func_484(uParam0, iParam1, 0, 0);
					uParam0->f_590 = 0;
				}
			}
			else if (__LIB_37__::func_267(uParam0, iVar7) && (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 205 /*INPUT_FRONTEND_LB*/) || (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 205 /*INPUT_FRONTEND_LB*/) && uParam0->f_236.f_12)))
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
						while (uParam0->f_635 >= 0 && !__LIB_29__::func_511(uParam0->f_525, uParam0->f_635, uParam0->f_523))
						{
							uParam0->f_635 = (uParam0->f_635 - 1);
						}
						if (!__LIB_29__::func_511(uParam0->f_525, uParam0->f_635, uParam0->f_523))
						{
							uParam0->f_635 = (__LIB_29__::func_510(iVar7, uParam0->f_525) - 1);
						}
						while (uParam0->f_635 >= 0 && !__LIB_29__::func_511(uParam0->f_525, uParam0->f_635, uParam0->f_523))
						{
							uParam0->f_635 = (uParam0->f_635 - 1);
						}
						if (uParam0->f_635 < 0)
						{
							uParam0->f_635 = (__LIB_29__::func_510(iVar7, uParam0->f_525) - 1);
						}
						while (uParam0->f_635 >= 0 && !__LIB_29__::func_511(uParam0->f_525, uParam0->f_635, uParam0->f_523))
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
				func_501(uParam0, iParam1, uParam0->f_525, uParam0->f_116.f_1);
				if (uParam0->f_709)
				{
					uParam0->f_709 = 1;
					func_484(uParam0, iParam1, 0, 0);
					uParam0->f_590 = 0;
				}
			}
			else if (__LIB_37__::func_267(uParam0, iVar7) && (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 206 /*INPUT_FRONTEND_RB*/) || (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 206 /*INPUT_FRONTEND_RB*/) && uParam0->f_236.f_13)))
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
						while (uParam0->f_635 <= (__LIB_29__::func_510(iVar7, uParam0->f_525) - 1) && !__LIB_29__::func_511(uParam0->f_525, uParam0->f_635, uParam0->f_523))
						{
							uParam0->f_635++;
						}
						if (!__LIB_29__::func_511(uParam0->f_525, uParam0->f_635, uParam0->f_523))
						{
							uParam0->f_635 = 0;
						}
						while (uParam0->f_635 <= (__LIB_29__::func_510(iVar7, uParam0->f_525) - 1) && !__LIB_29__::func_511(uParam0->f_525, uParam0->f_635, uParam0->f_523))
						{
							uParam0->f_635++;
						}
						if (uParam0->f_635 >= __LIB_29__::func_510(iVar7, uParam0->f_525))
						{
							uParam0->f_635 = 0;
						}
						while (uParam0->f_635 <= (__LIB_29__::func_510(iVar7, uParam0->f_525) - 1) && !__LIB_29__::func_511(uParam0->f_525, uParam0->f_635, uParam0->f_523))
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
				func_501(uParam0, iParam1, uParam0->f_525, uParam0->f_116.f_1);
				if (uParam0->f_709)
				{
					uParam0->f_709 = 1;
					func_484(uParam0, iParam1, 0, 0);
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
				func_501(uParam0, iParam1, uParam0->f_525, uParam0->f_116.f_1);
				if (uParam0->f_709)
				{
					func_474(uParam0, iVar7, 1);
					uParam0->f_709 = 0;
				}
			}
			else if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) || iVar0 == 1)
			{
				iVar0 = 0;
				AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT" /* GXT: Filter List */, "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				__LIB_39__::func_370(iVar7, uParam0->f_525, uParam0->f_116.f_1, &Var13, __LIB_29__::func_528(uParam0->f_523));
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && __LIB_4__::func_571())
				{
					if (__LIB_18__::func_208(0))
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
				if (func_638(iVar7, &Var13, uParam0))
				{
					switch (uParam0->f_525)
					{
						case 7:
							__LIB_1__::func_342("HAIR_CUR_1", 4000, 0);
							break;
						case 6:
							__LIB_1__::func_342("HAIR_CUR_2", 4000, 0);
							break;
						case 11:
						case 13:
						case 14:
						case 15:
							__LIB_1__::func_342("HAIR_CUR_3", 4000, 0);
							break;
						default:
							__LIB_1__::func_342("HAIR_CUR_9", 4000, 0);
							break;
					}
					uParam0->f_274 = __LIB_34__::func_774(uParam0->f_116.f_1);
				}
				else if (!func_373(uParam0, iVar7, uParam0->f_525, uParam0->f_116.f_1))
				{
					__LIB_1__::func_342("HAIR_LOCK", 4000, 0);
				}
				else if (!__LIB_37__::func_266(Var13.f_0))
				{
					switch (uParam0->f_525)
					{
						case 7:
							__LIB_1__::func_342("HAIR_AFF_1", 4000, 0);
							break;
						case 6:
							__LIB_1__::func_342("HAIR_AFF_2", 4000, 0);
							break;
						case 11:
						case 13:
						case 14:
						case 15:
							__LIB_1__::func_342("HAIR_AFF_3", 4000, 0);
							break;
						default:
							__LIB_1__::func_342("HAIR_AFF_9", 4000, 0);
							break;
					}
					__LIB_9__::func_926(MISC::GET_HASH_KEY(&(Global_100493.f_1384)), Global_100493.f_1388, MISC::GET_HASH_KEY(__LIB_9__::func_422(*uParam0, 0, 0)));
					__LIB_19__::func_159(0, 10, 3);
				}
				else if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && __LIB_4__::func_571()) && !__LIB_32__::func_709(joaat("NET_SHOP_TTYPE_BASKET"), __LIB_29__::func_509(uParam0->f_525, Var13.f_5), __LIB_39__::func_367(uParam0->f_525, uParam0->f_566, 0, __LIB_41__::func_373(uParam0->f_525, uParam0->f_116.f_1, uParam0->f_523, 0)), joaat("NET_SHOP_ACTION_BUY_ITEM"), 1, Var13.f_0, 1, 4, __LIB_34__::func_898(uParam0->f_525, Var13.f_5), 3))
				{
					__LIB_18__::func_226(__LIB_2__::func_345());
					__LIB_1__::func_342("CSHOP_FAIL" /* GXT: Sorry - this item is unavailable. */, 4000, 0);
				}
				else if (((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && __LIB_4__::func_571()) && iVar14) && !__LIB_32__::func_709(joaat("NET_SHOP_TTYPE_BASKET"), __LIB_29__::func_509(iVar15, iVar16), __LIB_39__::func_367(iVar15, Var17, 0, 1), joaat("NET_SHOP_ACTION_BUY_ITEM"), 1, 0, 1, 4, __LIB_34__::func_898(iVar15, iVar16), 3))
				{
					__LIB_18__::func_226(__LIB_2__::func_345());
					__LIB_1__::func_342("CSHOP_FAIL" /* GXT: Sorry - this item is unavailable. */, 4000, 0);
				}
				else if (((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && __LIB_4__::func_571()) && __LIB_18__::func_208(0)) && !__LIB_32__::func_709(joaat("NET_SHOP_TTYPE_BASKET"), __LIB_29__::func_509(uParam0->f_525, Var13.f_5), __LIB_34__::func_898(uParam0->f_525, Var13.f_5), joaat("NET_SHOP_ACTION_SPEND"), 1, 0, 1, 4, joaat("PO_COUPON_HAIRCUT"), 3))
				{
					__LIB_18__::func_226(__LIB_2__::func_345());
					__LIB_1__::func_342("CSHOP_FAIL" /* GXT: Sorry - this item is unavailable. */, 4000, 0);
				}
				else
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && __LIB_4__::func_571())
					{
						uParam0->f_116.f_25 = 1;
						uParam0->f_116.f_26 = 0;
					}
					uParam0->f_116.f_15 = 1;
					func_516(iParam1, uParam0);
				}
			}
			break;
	}
}

void func_474(var uParam0, int iParam1, bool bParam2)//Position - 0x5A702
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
	__LIB_34__::func_776(uParam0);
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
	iVar3 = func_483(iParam1, uParam0->f_525, uParam0->f_634, uParam0->f_523);
	uParam0->f_711 = 0;
	iVar4 = 0;
	while (iVar4 < __LIB_29__::func_510(iParam1, uParam0->f_525))
	{
		if (__LIB_29__::func_511(uParam0->f_525, iVar4, uParam0->f_523))
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
			if (__LIB_37__::func_267(uParam0, iParam1))
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
				iVar3 = func_483(iParam1, uParam0->f_525, uParam0->f_634, uParam0->f_523);
				iVar6 = func_483(iParam1, uParam0->f_525, uParam0->f_635, uParam0->f_523);
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
			uParam0->f_634 = __LIB_34__::func_770(iParam1, uParam0->f_525, iVar3, uParam0->f_523);
			uParam0->f_635 = __LIB_34__::func_770(iParam1, uParam0->f_525, iVar6, uParam0->f_523);
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
			uParam0->f_634 = __LIB_34__::func_770(iParam1, uParam0->f_525, iVar3, uParam0->f_523);
			uParam0->f_635 = __LIB_34__::func_770(iParam1, uParam0->f_525, iVar6, uParam0->f_523);
			uParam0->f_636 = uParam0->f_635;
			break;
		case 11:
			if (__LIB_39__::func_370(iParam1, uParam0->f_525, uParam0->f_116.f_1, &Var7, __LIB_29__::func_528(uParam0->f_523)))
			{
				if (!__LIB_37__::func_267(uParam0, iParam1) || Var7.f_5 != 5)
				{
					sVar1 = "";
					iVar3 = -1;
					uParam0->f_711 = -1;
					if (uParam0->f_116.f_1 == 0)
					{
						sVar0 = "";
						fVar2 = -1f;
					}
					uParam0->f_634 = __LIB_34__::func_770(iParam1, uParam0->f_525, iVar3, uParam0->f_523);
					uParam0->f_635 = __LIB_34__::func_770(iParam1, uParam0->f_525, iVar6, uParam0->f_523);
					uParam0->f_636 = uParam0->f_635;
				}
				else
				{
					uParam0->f_634 = __LIB_34__::func_770(iParam1, uParam0->f_525, iVar3, uParam0->f_523);
					if (uParam0->f_634 == -1)
					{
						uParam0->f_634 = func_482(Var7.f_5, &(uParam0->f_637), -1);
						iVar3 = func_483(iParam1, uParam0->f_525, uParam0->f_634, uParam0->f_523);
					}
				}
			}
			break;
		case 13:
		case 15:
		case 7:
		case 8:
		case 9:
			if (__LIB_39__::func_370(iParam1, uParam0->f_525, uParam0->f_116.f_1, &Var7, __LIB_29__::func_528(uParam0->f_523)))
			{
				if (!__LIB_37__::func_267(uParam0, iParam1))
				{
					sVar0 = "";
					fVar2 = -1f;
					sVar1 = "";
					iVar3 = -1;
					uParam0->f_711 = -1;
				}
				else
				{
					uParam0->f_634 = __LIB_34__::func_770(iParam1, uParam0->f_525, iVar3, uParam0->f_523);
					if (uParam0->f_634 == -1)
					{
						uParam0->f_634 = func_482(Var7.f_5, &(uParam0->f_637), -1);
						iVar3 = func_483(iParam1, uParam0->f_525, uParam0->f_634, uParam0->f_523);
					}
				}
			}
			break;
		default:
			break;
	}
	__LIB_29__::func_513(uParam0);
	if (MISC::IS_PC_VERSION())
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_614, "SET_IS_PC");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_614, "SET_TITLE"))
	{
		__LIB_0__::func_478(sVar0);
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
			iVar12 = __LIB_34__::func_770(iParam1, uParam0->f_525, iVar8, uParam0->f_523);
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
			__LIB_0__::func_478(sVar0);
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
				iVar19 = __LIB_34__::func_770(iParam1, uParam0->f_525, iVar15, uParam0->f_523);
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
		__LIB_4__::func_222(-1);
	}
	if (!__LIB_29__::func_531(uParam0->f_525))
	{
		__LIB_1__::func_345(201, "ITEM_SELECT" /* GXT: Select */, -1, 0);
	}
	else if (uParam0->f_525 == 5 || uParam0->f_525 == 12)
	{
		__LIB_1__::func_345(201, "ITEM_SELECT" /* GXT: Select */, -1, 0);
	}
	else
	{
		__LIB_1__::func_345(201, "ITEM_BUY" /* GXT: Buy */, -1, 0);
	}
	if (uParam0->f_710)
	{
		__LIB_1__::func_345(202, "ITEM_BACK" /* GXT: Back */, -1, 0);
		__LIB_20__::func_38(&uLocal_126);
		__LIB_4__::func_221(21, "ITEM_MOV_CAM" /* GXT: Move Camera */, -1);
		if (!__LIB_29__::func_531(uParam0->f_525))
		{
			__LIB_1__::func_345(iLocal_134, "ITEM_ZOOM" /* GXT: Zoom */, -1, 0);
		}
	}
	else
	{
		__LIB_1__::func_345(202, "ITEM_BACK" /* GXT: Back */, -1, 0);
		__LIB_20__::func_38(&uLocal_126);
		__LIB_4__::func_221(21, "ITEM_MOV_CAM" /* GXT: Move Camera */, -1);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0) || !MISC::IS_STRING_NULL_OR_EMPTY(sVar5))
		{
			if (uParam0->f_638)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
				{
					__LIB_4__::func_221(14, "ITEM_B_OPACITY", -1);
				}
				else if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar5))
				{
					__LIB_1__::func_345(203, "ITEM_X_TINT", -1, 0);
					__LIB_4__::func_221(14, "ITEM_B_HILI", -1);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar5))
				{
					__LIB_4__::func_221(15, "ITEM_T_HCOL", -1);
				}
				else
				{
					__LIB_4__::func_221(15, "ITEM_T_COL", -1);
				}
			}
			else
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
				{
					__LIB_4__::func_221(14, "ITEM_B_OPACITY", -1);
				}
				else if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar5))
				{
					__LIB_1__::func_345(203, "ITEM_X_HILI", -1, 0);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar5))
				{
					__LIB_4__::func_221(15, "ITEM_T_HCOL", -1);
				}
				else
				{
					__LIB_4__::func_221(15, "ITEM_T_COL", -1);
				}
			}
		}
	}
	else
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
		{
			__LIB_4__::func_221(14, "ITEM_B_OPACITY", -1);
		}
		else if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar5))
		{
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar5))
		{
		}
	}
}

int func_482(int iParam0, int iParam1, int iParam2)//Position - 0x5B472
{
	int iVar0;
	int iVar1;
	var uVar2;
	iVar0 = __LIB_0__::func_226(iParam0);
	if (iVar0 == -1)
	{
		*iParam1 = 0;
		return -1;
	}
	iVar1 = __LIB_0__::func_534(iVar0, iParam2, 0);
	__LIB_0__::func_224(iVar1, &uVar2, iParam1);
	return uVar2;
}

int func_483(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x5B4A7
{
	int iVar0;
	int iVar1;
	if (iParam2 == -1)
	{
		return -1;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < __LIB_29__::func_510(iParam0, iParam1))
	{
		if (__LIB_29__::func_511(iParam1, iVar0, iParam3))
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
		return func_483(iParam0, iParam1, iParam2, 0);
	}
	if (iParam1 == 13)
	{
		return 0;
	}
	return -1;
}

void func_484(var uParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x5B51B
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
	func_499(uParam0, 0);
	__LIB_1__::func_193(0, 0);
	__LIB_8__::func_441(*uParam0, 0);
	__LIB_1__::func_318(1, 1, 0, 0, 0);
	__LIB_1__::func_317(1, 2, 1, 1, 1);
	__LIB_1__::func_319(__LIB_29__::func_514(uParam0->f_525, 1));
	uParam0->f_492 = 0;
	uParam0->f_493 = 0;
	uParam0->f_500 = 0;
	iVar2 = ENTITY::GET_ENTITY_MODEL(iParam1);
	if (uParam0->f_709 && iParam3)
	{
		if (!(!uParam0->f_116.f_22 && uParam0->f_116.f_15))
		{
			if (__LIB_39__::func_370(iVar2, uParam0->f_525, uParam0->f_116.f_1, &Var3, __LIB_29__::func_528(uParam0->f_523)))
			{
				if (Var1.f_11 != 0 && func_370(Var1.f_11, 2, -1))
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
						uParam0->f_634 = func_482(Var3.f_5, &(uParam0->f_637), -1);
						uParam0->f_637 = 2;
					}
					else
					{
						uParam0->f_634 = func_482(Var3.f_5, &(uParam0->f_637), -1);
					}
					iVar4 = __LIB_0__::func_225(Var3.f_5);
					iVar5 = __LIB_0__::func_229(Var3.f_5);
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
						uParam0->f_639 = __LIB_0__::func_424(iVar5, -1);
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
			iVar6 = __LIB_6__::func_758(iVar2, joaat("DLC_MP_VAL_F_HAIR0_0"), 2, 4);
			if (iVar6 == __LIB_0__::func_228(385, -1) || __LIB_18__::func_186(iVar6) == __LIB_0__::func_228(385, -1))
			{
				if (__LIB_10__::func_99())
				{
					__LIB_0__::func_521(4246, 1, -1);
				}
			}
		}
	}
	bVar7 = false;
	while (__LIB_39__::func_370(iVar2, uParam0->f_525, iVar0, &Var1, __LIB_29__::func_528(uParam0->f_523)))
	{
		if (func_378(iVar2, uParam0->f_525, iVar0, uParam0->f_523))
		{
			if (func_373(uParam0, iVar2, uParam0->f_525, iVar0) && !func_369(uParam0, iVar2, uParam0->f_525, iVar0))
			{
				__LIB_18__::func_477(iVar0, &(Var1.f_1), 1, 1, 0, 0, 0);
				__LIB_21__::func_66(2, 0);
				if (iVar0 == uParam0->f_116.f_1)
				{
					uParam0->f_493 = 1;
				}
			}
			else if ((func_373(uParam0, iVar2, uParam0->f_525, iVar0) && __LIB_29__::func_508(&(Var1.f_1), uParam0->f_525, Var1.f_0)) && !func_638(iVar2, &Var1, uParam0))
			{
				__LIB_18__::func_477(iVar0, &(Var1.f_1), 1, 1, 0, 0, 0);
				__LIB_21__::func_66(51, 0);
			}
			else
			{
				__LIB_18__::func_477(iVar0, &(Var1.f_1), 0, 1, 0, 0, 0);
			}
			if (iVar0 == uParam0->f_116.f_1)
			{
				uParam0->f_566 = { Var1.f_1 };
			}
			if (func_638(iVar2, &Var1, uParam0))
			{
				bVar7 = true;
				if (bParam2)
				{
					if (!(!uParam0->f_116.f_22 && uParam0->f_116.f_15))
					{
						uParam0->f_116.f_1 = iVar0;
					}
					uParam0->f_494 = __LIB_29__::func_516(iVar2, uParam0->f_525, &Var1);
				}
				__LIB_18__::func_477(iVar0, "", 1, 1, 0, 0, 0);
				if (((uParam0->f_525 == 11 || uParam0->f_525 == 13) || uParam0->f_525 == 14) || uParam0->f_525 == 15)
				{
					__LIB_21__::func_66(20, 0);
				}
				else
				{
					__LIB_21__::func_66(14, 0);
				}
			}
			else if (!func_373(uParam0, iVar2, uParam0->f_525, iVar0))
			{
				__LIB_18__::func_477(iVar0, "", 1, 1, 0, 0, 0);
				__LIB_21__::func_66(15, 0);
				if (iVar0 == uParam0->f_116.f_1)
				{
					uParam0->f_492 = 1;
				}
			}
			else if (Var1.f_0 > 0)
			{
				__LIB_18__::func_477(iVar0, "ITEM_COST" /* GXT: $~1~ */, 1, 1, 0, 0, 0);
				__LIB_32__::func_488(Var1.f_0, 0);
			}
			else
			{
				__LIB_18__::func_477(iVar0, "ITEM_FREE" /* GXT: FREE */, 0, 1, 0, 0, 0);
			}
		}
		iVar0++;
	}
	if (iVar0 == 0)
	{
		__LIB_18__::func_477(0, "HAIR_NONE", 0, 1, 0, 0, 0);
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
					func_501(uParam0, iParam1, uParam0->f_525, uParam0->f_116.f_1);
				}
				else
				{
					uParam0->f_639 = 1f;
					uParam0->f_116.f_1 = 0;
					if (__LIB_39__::func_370(iVar2, uParam0->f_525, uParam0->f_116.f_1, &Var1, __LIB_29__::func_528(uParam0->f_523)))
					{
						if (Var1.f_9 == 0)
						{
							iVar8 = __LIB_0__::func_228(385, -1);
							Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar2, 2, iVar8, -1) };
							if (Global_102961)
							{
								iVar9 = -99;
								if (iVar2 == joaat("MP_M_Freemode_01"))
								{
									iVar9 = __LIB_18__::func_181(iVar8);
								}
								else if (iVar2 == joaat("MP_F_Freemode_01"))
								{
									iVar9 = __LIB_18__::func_186(iVar8);
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
	__LIB_3__::func_981(uParam0->f_725);
	__LIB_2__::func_183(uParam0->f_116.f_1, 1, 1);
	__LIB_41__::func_374(iVar2, uParam0->f_525, uParam0->f_116.f_1, __LIB_29__::func_528(uParam0->f_523));
	if (!__LIB_29__::func_531(uParam0->f_525))
	{
		__LIB_1__::func_345(201, "ITEM_SELECT" /* GXT: Select */, -1, 0);
	}
	else if (uParam0->f_525 == 5 || uParam0->f_525 == 12)
	{
		__LIB_1__::func_345(201, "ITEM_SELECT" /* GXT: Select */, -1, 0);
	}
	else
	{
		__LIB_1__::func_345(201, "ITEM_BUY" /* GXT: Buy */, -1, 0);
	}
	if (uParam0->f_710)
	{
		__LIB_1__::func_345(202, "ITEM_BACK" /* GXT: Back */, -1, 0);
		__LIB_20__::func_38(&uLocal_126);
		__LIB_4__::func_221(21, "ITEM_MOV_CAM" /* GXT: Move Camera */, -1);
		if (!__LIB_29__::func_531(uParam0->f_525))
		{
			__LIB_1__::func_345(iLocal_134, "ITEM_ZOOM" /* GXT: Zoom */, -1, 0);
		}
	}
	else
	{
		__LIB_1__::func_345(202, "ITEM_BACK" /* GXT: Back */, -1, 0);
		__LIB_20__::func_38(&uLocal_126);
		__LIB_4__::func_221(21, "ITEM_MOV_CAM" /* GXT: Move Camera */, -1);
	}
	if (uParam0->f_709)
	{
		func_474(uParam0, iVar2, 1);
		uParam0->f_709 = 0;
	}
}

void func_499(var uParam0, bool bParam1)//Position - 0x5CB2E
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	if (__LIB_20__::func_554(1))
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
		else if (__LIB_29__::func_531(uParam0->f_525))
		{
			if (__LIB_39__::func_370(ENTITY::GET_ENTITY_MODEL(iVar2), uParam0->f_525, uParam0->f_116.f_1, &Var3, __LIB_29__::func_528(uParam0->f_523)))
			{
				if (Var3.f_9 == 0)
				{
					uParam0->f_272 = __LIB_0__::func_228(385, -1);
					if (bParam1)
					{
						uParam0->f_634 = func_106(2153, -1, 0);
						uParam0->f_635 = func_106(2160, -1, 0);
						uParam0->f_636 = uParam0->f_635;
					}
				}
				else if (Var3.f_9 == 1 || Var3.f_9 == 2)
				{
					uParam0->f_273 = __LIB_0__::func_228(__LIB_0__::func_230(Var3.f_5), -1);
					if (bParam1)
					{
						uParam0->f_634 = func_482(Var3.f_5, &(uParam0->f_637), -1);
						uParam0->f_635 = func_500(Var3.f_5, -1);
						uParam0->f_636 = uParam0->f_635;
						uParam0->f_639 = __LIB_0__::func_424(__LIB_0__::func_229(Var3.f_5), -1);
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

int func_500(int iParam0, int iParam1)//Position - 0x5CCEA
{
	int iVar0;
	iVar0 = __LIB_0__::func_225(iParam0);
	if (iVar0 == -1)
	{
		return -1;
	}
	return __LIB_0__::func_534(iVar0, iParam1, 0);
}

void func_501(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x5CD0D
{
	struct<10> Var0;
	__LIB_39__::func_370(ENTITY::GET_ENTITY_MODEL(iParam1), iParam2, iParam3, &Var0, __LIB_29__::func_528(uParam0->f_523));
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
					func_649(iParam1, 4, -1, -1, -1, 0, 1f, 1);
				}
				else if (Var0.f_5 == 4)
				{
					uParam0->f_637 = 0;
					if (__LIB_0__::func_228(__LIB_0__::func_230(5), -1) >= 7)
					{
						func_649(iParam1, 5, -1, -1, -1, 2, 1f, 1);
					}
				}
			}
			__LIB_29__::func_515(Var0.f_5, &(uParam0->f_637));
			func_649(iParam1, Var0.f_5, Var0.f_6, uParam0->f_634, uParam0->f_635, uParam0->f_637, uParam0->f_639, 1);
			break;
		case 2:
			__LIB_29__::func_515(Var0.f_5, &(uParam0->f_637));
			func_649(iParam1, Var0.f_5, Var0.f_6, uParam0->f_634, uParam0->f_635, uParam0->f_637, uParam0->f_639, 1);
			break;
	}
	func_514(iParam1, iParam2);
}

void func_504(int iParam0, int iParam1, int iParam2)//Position - 0x5D03A
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
	if (__LIB_37__::func_261(iParam0, iParam1, &iVar2, &iVar1))
	{
		iVar3 = __LIB_0__::func_534(iVar2, iVar0, 0);
		MISC::SET_BIT(&iVar3, iVar1);
		__LIB_0__::func_427(iVar2, iVar3, iVar0, 1, 0);
	}
}

void func_514(int iParam0, int iParam1)//Position - 0x5D719
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
					iLocal_141 = __LIB_6__::func_795(iParam0, 11);
					func_140(iParam0, 11, __LIB_0__::func_356(ENTITY::GET_ENTITY_MODEL(iParam0), 11, -1), 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_184(iParam0, 0, 0, -1);
					__LIB_31__::func_926(MISC::GET_HASH_KEY("torsoDecal"), iParam0);
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
					if (iVar1 == __LIB_2__::func_253(iParam0, 1))
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, __LIB_2__::func_253(PLAYER::PLAYER_PED_ID(), 0), PED::GET_PED_TEXTURE_VARIATION(PLAYER::PLAYER_PED_ID(), 8), 0);
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
						func_140(iParam0, 11, iLocal_141, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iLocal_141 = -99;
					func_184(iParam0, 0, 0, -1);
				}
			}
		}
	}
}

void func_516(int iParam0, var uParam1)//Position - 0x5DA72
{
	int iVar0;
	int iVar1;
	if (iParam0 == PLAYER::PLAYER_PED_ID())
	{
	}
	else if (iParam0 == Global_4538723)
	{
	}
	iVar0 = __LIB_0__::func_228(385, -1);
	if (iVar0 != -99)
	{
		iVar1 = -99;
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_M_Freemode_01"))
		{
			iVar1 = __LIB_18__::func_181(iVar0);
		}
		else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_F_Freemode_01"))
		{
			iVar1 = __LIB_18__::func_186(iVar0);
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
	__LIB_24__::func_937(iParam0, -1, 0);
}

void func_518(var uParam0, int iParam1)//Position - 0x5DB2D
{
	int iVar0;
	iVar0 = 0;
	__LIB_11__::func_412(&(uParam0->f_236), 300);
	if ((uParam0->f_116.f_1 != -1 && uParam0->f_493) && !uParam0->f_492)
	{
		__LIB_34__::func_771(uParam0->f_116.f_1);
	}
	if (!PED::IS_PED_INJURED(iParam1))
	{
		uParam0->f_116.f_15 = 0;
		__LIB_7__::func_287(0, 0, 0, 1);
		if (__LIB_2__::func_157())
		{
			if (Global_4539961 == uParam0->f_116.f_1)
			{
				iVar0 = 1;
			}
			else
			{
				uParam0->f_116.f_1 = Global_4539961;
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				func_649(iParam1, 4, uParam0->f_116.f_1, uParam0->f_634, 0, 0, 1f, 1);
				if ((uParam0->f_116.f_1 - 1) == -1 || (uParam0->f_116.f_1 - 1) > 15)
				{
					func_649(iParam1, 2, __LIB_0__::func_228(449, __LIB_0__::func_5()), uParam0->f_634, 0, 0, 1f, 1);
				}
				else
				{
					func_649(iParam1, 2, __LIB_0__::func_228(449, __LIB_0__::func_5()), uParam0->f_634, 0, 0, 0f, 1);
				}
				if (uParam0->f_590)
				{
					func_784(uParam0, iParam1);
					uParam0->f_590 = 0;
				}
				else
				{
					__LIB_2__::func_183(uParam0->f_116.f_1, 1, 1);
				}
			}
		}
		if (((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/) || __LIB_10__::func_374(uParam0->f_236.f_8, 0, 0)) || (uParam0->f_236.f_1 < -100 && uParam0->f_236.f_4)) || (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/) && uParam0->f_236.f_8))
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
				while (!__LIB_40__::func_584(uParam0->f_116.f_1))
				{
					uParam0->f_116.f_1 = (uParam0->f_116.f_1 - 1);
				}
			}
			else
			{
				uParam0->f_116.f_1 = (uParam0->f_612 - 1);
				while (!__LIB_40__::func_584(uParam0->f_116.f_1))
				{
					uParam0->f_116.f_1 = (uParam0->f_116.f_1 - 1);
				}
			}
			if (uParam0->f_493)
			{
				uParam0->f_590 = 1;
				uParam0->f_594 = 1;
				uParam0->f_595 = __LIB_3__::func_979();
			}
			uParam0->f_492 = !func_396(uParam0->f_116.f_1);
			uParam0->f_493 = (!uParam0->f_492 && !__LIB_39__::func_365(uParam0->f_116.f_1));
			uParam0->f_494 = 0;
			if (uParam0->f_116.f_1 != -1)
			{
				func_649(iParam1, 4, (uParam0->f_116.f_1 - 1), uParam0->f_634, 0, 0, 1f, 1);
				if ((uParam0->f_116.f_1 - 1) == -1 || (uParam0->f_116.f_1 - 1) > 15)
				{
					func_649(iParam1, 2, __LIB_0__::func_228(449, __LIB_0__::func_5()), uParam0->f_634, 0, 0, 1f, 1);
				}
				else
				{
					func_649(iParam1, 2, __LIB_0__::func_228(449, __LIB_0__::func_5()), uParam0->f_634, 0, 0, 0f, 1);
				}
				if (uParam0->f_590)
				{
					func_784(uParam0, iParam1);
					uParam0->f_590 = 0;
				}
				else
				{
					__LIB_2__::func_183(uParam0->f_116.f_1, 1, 1);
				}
			}
		}
		else if (((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/) || __LIB_10__::func_373(uParam0->f_236.f_9, 0, 0)) || (uParam0->f_236.f_1 > 100 && uParam0->f_236.f_9)) || (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/) && uParam0->f_236.f_9))
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
				while (!__LIB_40__::func_584(uParam0->f_116.f_1))
				{
					uParam0->f_116.f_1++;
				}
				if (!__LIB_40__::func_584(uParam0->f_116.f_1) || uParam0->f_116.f_1 >= uParam0->f_612)
				{
					uParam0->f_116.f_1 = 0;
					while (!__LIB_40__::func_584(uParam0->f_116.f_1))
					{
						uParam0->f_116.f_1++;
					}
				}
			}
			else
			{
				uParam0->f_116.f_1 = 0;
				while (!__LIB_40__::func_584(uParam0->f_116.f_1))
				{
					uParam0->f_116.f_1++;
				}
			}
			if (uParam0->f_493)
			{
				uParam0->f_590 = 1;
				uParam0->f_594 = 1;
				uParam0->f_595 = __LIB_3__::func_979();
			}
			uParam0->f_492 = !func_396(uParam0->f_116.f_1);
			uParam0->f_493 = (!uParam0->f_492 && !__LIB_39__::func_365(uParam0->f_116.f_1));
			uParam0->f_494 = 0;
			if (uParam0->f_116.f_1 != -1)
			{
				func_649(iParam1, 4, (uParam0->f_116.f_1 - 1), uParam0->f_634, 0, 0, 1f, 1);
				if ((uParam0->f_116.f_1 - 1) == -1 || (uParam0->f_116.f_1 - 1) > 15)
				{
					func_649(iParam1, 2, __LIB_0__::func_228(449, __LIB_0__::func_5()), uParam0->f_634, 0, 0, 1f, 1);
				}
				else
				{
					func_649(iParam1, 2, __LIB_0__::func_228(449, __LIB_0__::func_5()), uParam0->f_634, 0, 0, 0f, 1);
				}
				if (uParam0->f_590)
				{
					func_784(uParam0, iParam1);
					uParam0->f_590 = 0;
				}
				else
				{
					__LIB_2__::func_183(uParam0->f_116.f_1, 1, 1);
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
				__LIB_1__::func_342("HAIR_CUR_3", 4000, 0);
				uParam0->f_610 = uParam0->f_116.f_1;
			}
			else if (!func_396(uParam0->f_116.f_1))
			{
				__LIB_1__::func_342("HAIR_LOCK", 4000, 0);
			}
			else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && __LIB_4__::func_571())
			{
				__LIB_18__::func_226(__LIB_2__::func_345());
				__LIB_1__::func_342("CSHOP_FAIL" /* GXT: Sorry - this item is unavailable. */, 4000, 0);
			}
			else if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && __LIB_18__::func_208(0)) && !__LIB_32__::func_709(joaat("NET_SHOP_TTYPE_BASKET"), __LIB_29__::func_509(uParam0->f_525, -1), __LIB_34__::func_898(uParam0->f_525, -1), joaat("NET_SHOP_ACTION_SPEND"), 1, 0, 1, 4, joaat("PO_COUPON_HAIRCUT"), 3))
			{
				__LIB_18__::func_226(__LIB_2__::func_345());
				__LIB_1__::func_342("CSHOP_FAIL" /* GXT: Sorry - this item is unavailable. */, 4000, 0);
			}
			else
			{
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && __LIB_4__::func_571())
				{
					uParam0->f_116.f_25 = 1;
					uParam0->f_116.f_26 = 0;
				}
				func_649(iParam1, 4, (uParam0->f_611 - 1), uParam0->f_634, 0, 0, 1f, 1);
				if ((uParam0->f_611 - 1) == -1 || (uParam0->f_611 - 1) > 15)
				{
					func_649(iParam1, 2, __LIB_0__::func_228(449, __LIB_0__::func_5()), uParam0->f_634, 0, 0, 1f, 1);
				}
				else
				{
					func_649(iParam1, 2, __LIB_0__::func_228(449, __LIB_0__::func_5()), uParam0->f_634, 0, 0, 0f, 1);
				}
				uParam0->f_116.f_15 = 1;
				uParam0->f_610 = uParam0->f_116.f_1;
			}
		}
		else if ((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/)) || __LIB_2__::func_338())
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "CANCEL", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			func_649(iParam1, 4, (uParam0->f_610 - 1), uParam0->f_634, 0, 0, 1f, 1);
			if ((uParam0->f_610 - 1) == -1 || (uParam0->f_610 - 1) > 15)
			{
				func_649(iParam1, 2, __LIB_0__::func_228(449, __LIB_0__::func_5()), uParam0->f_634, 0, 0, 1f, 1);
			}
			else
			{
				func_649(iParam1, 2, __LIB_0__::func_228(449, __LIB_0__::func_5()), uParam0->f_634, 0, 0, 0f, 1);
			}
			uParam0->f_116.f_15 = 0;
			uParam0->f_116.f_23 = 0;
			uParam0->f_116.f_22 = 0;
			if (__LIB_29__::func_533())
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

void func_521(var uParam0, int iParam1)//Position - 0x5E2F5
{
	int iVar0;
	struct<4> Var1;
	struct<4> Var2;
	iVar0 = 0;
	__LIB_11__::func_412(&(uParam0->f_236), 300);
	if ((uParam0->f_116.f_1 != -1 && uParam0->f_493) && !uParam0->f_492)
	{
		__LIB_34__::func_773(__LIB_34__::func_774(uParam0->f_116.f_1));
	}
	if (!PED::IS_PED_INJURED(iParam1))
	{
		uParam0->f_116.f_15 = 0;
		__LIB_7__::func_287(0, 0, 0, 1);
		if (__LIB_2__::func_157())
		{
			if (Global_4539961 == uParam0->f_116.f_1)
			{
				iVar0 = 1;
			}
			else
			{
				uParam0->f_116.f_1 = Global_4539961;
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				uParam0->f_492 = !func_404(uParam0->f_116.f_1);
				uParam0->f_493 = (!uParam0->f_492 && !__LIB_37__::func_264(uParam0->f_116.f_1));
				uParam0->f_494 = 0;
				func_649(iParam1, 1, __LIB_34__::func_774(uParam0->f_116.f_1), uParam0->f_634, 0, 0, uParam0->f_275, 1);
				func_525(uParam0);
				if (uParam0->f_590)
				{
					func_784(uParam0, iParam1);
					uParam0->f_590 = 0;
				}
				else
				{
					__LIB_2__::func_183(uParam0->f_116.f_1, 1, 1);
				}
			}
		}
		if (((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/) || __LIB_10__::func_374(uParam0->f_236.f_8, 0, 0)) || (uParam0->f_236.f_1 < -100 && uParam0->f_236.f_4)) || (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/) && uParam0->f_236.f_8))
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
				while (__LIB_34__::func_772(__LIB_34__::func_774(uParam0->f_116.f_1)) && !__LIB_29__::func_521(__LIB_34__::func_774(uParam0->f_116.f_1)))
				{
					uParam0->f_116.f_1 = (uParam0->f_116.f_1 - 1);
				}
			}
			else
			{
				uParam0->f_116.f_1 = (__LIB_29__::func_503() - 1);
			}
			if (uParam0->f_493)
			{
				uParam0->f_590 = 1;
				uParam0->f_594 = 1;
				uParam0->f_595 = __LIB_3__::func_979();
			}
			uParam0->f_492 = !func_404(__LIB_34__::func_774(uParam0->f_116.f_1));
			uParam0->f_493 = (!uParam0->f_492 && !__LIB_37__::func_264(__LIB_34__::func_774(uParam0->f_116.f_1)));
			StringCopy(&Var1, "HAIR_BEARD", 16);
			StringIntConCat(&Var1, __LIB_34__::func_774(uParam0->f_116.f_1), 16);
			uParam0->f_494 = __LIB_29__::func_520(&Var1, __LIB_34__::func_774(uParam0->f_116.f_1));
			uParam0->f_566 = { Var1 };
			func_649(iParam1, 1, (__LIB_34__::func_774(uParam0->f_116.f_1) - 1), uParam0->f_634, 0, 0, uParam0->f_275, 1);
			func_525(uParam0);
			if (uParam0->f_590)
			{
				func_784(uParam0, iParam1);
				uParam0->f_590 = 0;
			}
			else
			{
				__LIB_2__::func_183(uParam0->f_116.f_1, 1, 1);
			}
		}
		else if (((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/) || __LIB_10__::func_373(uParam0->f_236.f_9, 0, 0)) || (uParam0->f_236.f_1 > 100 && uParam0->f_236.f_4)) || (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/) && uParam0->f_236.f_9))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			uParam0->f_236.f_9 = 0;
			uParam0->f_236.f_4 = 0;
			uParam0->f_236.f_20 = MISC::GET_GAME_TIMER();
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				uParam0->f_236.f_24 = NETWORK::GET_NETWORK_TIME();
			}
			if (uParam0->f_116.f_1 < (__LIB_29__::func_503() - 1))
			{
				uParam0->f_116.f_1++;
				while (__LIB_34__::func_772(__LIB_34__::func_774(uParam0->f_116.f_1)) && !__LIB_29__::func_521(__LIB_34__::func_774(uParam0->f_116.f_1)))
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
				uParam0->f_595 = __LIB_3__::func_979();
			}
			uParam0->f_492 = !func_404(__LIB_34__::func_774(uParam0->f_116.f_1));
			uParam0->f_493 = (!uParam0->f_492 && !__LIB_37__::func_264(__LIB_34__::func_774(uParam0->f_116.f_1)));
			StringCopy(&Var2, "HAIR_BEARD", 16);
			StringIntConCat(&Var2, __LIB_34__::func_774(uParam0->f_116.f_1), 16);
			uParam0->f_494 = __LIB_29__::func_520(&Var2, __LIB_34__::func_774(uParam0->f_116.f_1));
			uParam0->f_566 = { Var2 };
			func_649(iParam1, 1, (__LIB_34__::func_774(uParam0->f_116.f_1) - 1), uParam0->f_634, 0, 0, uParam0->f_275, 1);
			func_525(uParam0);
			if (uParam0->f_590)
			{
				func_784(uParam0, iParam1);
				uParam0->f_590 = 0;
			}
			else
			{
				__LIB_2__::func_183(uParam0->f_116.f_1, 1, 1);
			}
		}
		else if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) || iVar0 == 1)
		{
			iVar0 = 0;
			iLocal_135 = 0;
			AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT" /* GXT: Filter List */, "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			if (__LIB_34__::func_774(uParam0->f_116.f_1) == uParam0->f_273)
			{
				__LIB_1__::func_342("HAIR_CUR_1", 4000, 0);
				uParam0->f_274 = __LIB_34__::func_774(uParam0->f_116.f_1);
			}
			else if (!func_404(__LIB_34__::func_774(uParam0->f_116.f_1)))
			{
				__LIB_1__::func_342("HAIR_LOCK", 4000, 0);
			}
			else if (!__LIB_37__::func_266(uParam0->f_116.f_2))
			{
				__LIB_1__::func_342("HAIR_AFF_1", 4000, 0);
				__LIB_9__::func_926(MISC::GET_HASH_KEY(&(Global_100493.f_1384)), Global_100493.f_1388, MISC::GET_HASH_KEY(__LIB_9__::func_422(*uParam0, 0, 0)));
				__LIB_19__::func_159(0, 10, 3);
			}
			else if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && __LIB_4__::func_571()) && !__LIB_32__::func_709(joaat("NET_SHOP_TTYPE_BASKET"), __LIB_29__::func_509(uParam0->f_525, -1), __LIB_39__::func_367(uParam0->f_525, uParam0->f_566, 0, 0), joaat("NET_SHOP_ACTION_BUY_ITEM"), 1, uParam0->f_116.f_2, 1, 4, __LIB_34__::func_898(uParam0->f_525, -1), 3))
			{
				__LIB_18__::func_226(__LIB_2__::func_345());
				__LIB_1__::func_342("CSHOP_FAIL" /* GXT: Sorry - this item is unavailable. */, 4000, 0);
			}
			else if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && __LIB_18__::func_208(0)) && !__LIB_32__::func_709(joaat("NET_SHOP_TTYPE_BASKET"), __LIB_29__::func_509(uParam0->f_525, -1), joaat("PO_COUPON_HAIRCUT"), joaat("NET_SHOP_ACTION_SPEND"), 1, 0, 1, 4, __LIB_34__::func_898(uParam0->f_525, -1), 3))
			{
				__LIB_18__::func_226(__LIB_2__::func_345());
				__LIB_1__::func_342("CSHOP_FAIL" /* GXT: Sorry - this item is unavailable. */, 4000, 0);
			}
			else
			{
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && __LIB_4__::func_571())
				{
					uParam0->f_116.f_25 = 1;
					uParam0->f_116.f_26 = 0;
				}
				func_649(iParam1, 1, (uParam0->f_273 - 1), uParam0->f_634, 0, 0, uParam0->f_275, 1);
				uParam0->f_116.f_15 = 1;
				uParam0->f_274 = __LIB_34__::func_774(uParam0->f_116.f_1);
			}
		}
		else if ((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/)) || __LIB_2__::func_338())
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "CANCEL", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				func_649(iParam1, 1, (uParam0->f_274 - 1), uParam0->f_634, 0, 0, uParam0->f_275, 1);
			}
			else
			{
				func_649(iParam1, 1, uParam0->f_273 + 1, uParam0->f_634, 0, 0, uParam0->f_275, 1);
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

void func_525(var uParam0)//Position - 0x5EA68
{
	struct<4> Var0;
	if (__LIB_20__::func_554(1))
	{
		StringCopy(&Var0, "HAIR_BEARD", 16);
		StringIntConCat(&Var0, __LIB_34__::func_774(uParam0->f_116.f_1), 16);
		uParam0->f_494 = __LIB_29__::func_520(&Var0, __LIB_34__::func_774(uParam0->f_116.f_1));
		uParam0->f_116.f_2 = func_526(uParam0, __LIB_34__::func_774(uParam0->f_116.f_1), &Var0, 1);
		__LIB_10__::func_88(Var0, uParam0->f_116.f_2, 0, 1, 0, 0);
	}
}

int func_526(var uParam0, int iParam1, char* sParam2, bool bParam3)//Position - 0x5EACE
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
		func_527(uParam0, &iVar0);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && __LIB_4__::func_571())
	{
		iVar0 = NETSHOPPING::NET_GAMESERVER_GET_PRICE(__LIB_39__::func_367(uParam0->f_525, *sParam2, 0, 0), joaat("CATEGORY_BEARD"), true);
	}
	return iVar0;
}

void func_527(var uParam0, int iParam1)//Position - 0x5EE9B
{
	int iVar0;
	iVar0 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (__LIB_40__::func_950())
		{
			iVar0 = (iVar0 + Global_262145.f_132 /* Tunable: SHOP_GOODBOY_DISCOUNT_PERCENT */);
		}
	}
	if (func_529(*uParam0, __LIB_20__::func_728()))
	{
		iVar0 += 100;
	}
	iVar0 = __LIB_0__::func_310(iVar0, 0, 100);
	*iParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*iParam1) * (1f - (SYSTEM::TO_FLOAT(iVar0) / 100f))));
}

int func_529(int iParam0, bool bParam1)//Position - 0x5EF20
{
	switch (bParam1)
	{
		case 0:
			return __LIB_6__::func_837(iParam0, 5, 0);
			break;
		case 1:
			return __LIB_6__::func_837(iParam0, 7, 0);
			break;
		case 2:
			return __LIB_6__::func_837(iParam0, 6, 0);
			break;
	}
	return 0;
}

void func_560(var uParam0, int iParam1)//Position - 0x5F9D8
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	__LIB_11__::func_412(&(uParam0->f_236), 300);
	if (!PED::IS_PED_INJURED(iParam1))
	{
		uParam0->f_116.f_15 = 0;
		iVar0 = ENTITY::GET_ENTITY_MODEL(iParam1);
		if (MISC::IS_PC_VERSION())
		{
			__LIB_7__::func_287(0, 0, 0, 1);
			if (__LIB_2__::func_157())
			{
				if (Global_4539961 == uParam0->f_116.f_1)
				{
					iVar1 = 1;
				}
				else
				{
					uParam0->f_116.f_1 = Global_4539961;
					if (__LIB_29__::func_523(&Global_4537616, 0, uParam0->f_116.f_1))
					{
						if (uParam0->f_493)
						{
							uParam0->f_590 = 1;
							uParam0->f_594 = 1;
							uParam0->f_595 = __LIB_3__::func_979();
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
						func_582(uParam0);
						if (uParam0->f_590)
						{
							func_566(uParam0, iParam1, uParam0->f_493);
							uParam0->f_590 = 0;
						}
						else
						{
							__LIB_2__::func_183(uParam0->f_116.f_1, 1, 1);
						}
					}
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				}
			}
		}
		if ((((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/) || (uParam0->f_236.f_1 < -100 && uParam0->f_236.f_4)) || (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/) && uParam0->f_236.f_8)) || __LIB_10__::func_374(uParam0->f_236.f_8, 0, 0)) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 241 /*INPUT_CURSOR_SCROLL_UP*/))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			uParam0->f_236.f_8 = 0;
			uParam0->f_236.f_4 = 0;
			uParam0->f_236.f_20 = MISC::GET_GAME_TIMER();
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				uParam0->f_236.f_24 = NETWORK::GET_NETWORK_TIME();
			}
			if (__LIB_29__::func_482(&Global_4537616, 0, uParam0->f_116.f_1, &(uParam0->f_116.f_1), 1))
			{
				if (uParam0->f_493)
				{
					uParam0->f_590 = 1;
					uParam0->f_594 = 1;
					uParam0->f_595 = __LIB_3__::func_979();
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
				func_582(uParam0);
				if (uParam0->f_590)
				{
					func_566(uParam0, iParam1, uParam0->f_493);
					uParam0->f_590 = 0;
				}
				else
				{
					__LIB_2__::func_183(uParam0->f_116.f_1, 1, 1);
				}
			}
		}
		else if ((((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/) || (uParam0->f_236.f_1 > 100 && uParam0->f_236.f_4)) || (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/) && uParam0->f_236.f_9)) || __LIB_10__::func_373(uParam0->f_236.f_9, 0, 0)) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 242 /*INPUT_CURSOR_SCROLL_DOWN*/))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			uParam0->f_236.f_9 = 0;
			uParam0->f_236.f_4 = 0;
			uParam0->f_236.f_20 = MISC::GET_GAME_TIMER();
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				uParam0->f_236.f_24 = NETWORK::GET_NETWORK_TIME();
			}
			if (__LIB_34__::func_757(&Global_4537616, 0, uParam0->f_116.f_1, &(uParam0->f_116.f_1), 1))
			{
				if (uParam0->f_493)
				{
					uParam0->f_590 = 1;
					uParam0->f_594 = 1;
					uParam0->f_595 = __LIB_3__::func_979();
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
				func_582(uParam0);
				if (uParam0->f_590)
				{
					func_566(uParam0, iParam1, uParam0->f_493);
					uParam0->f_590 = 0;
				}
				else
				{
					__LIB_2__::func_183(uParam0->f_116.f_1, 1, 1);
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
				__LIB_1__::func_342("HAIR_LOCK", 4000, 0);
			}
			else if (__LIB_29__::func_522(uParam0, uParam0->f_116.f_1))
			{
				if (uParam0->f_494 && !MISC::IS_STRING_NULL_OR_EMPTY(__LIB_10__::func_175(&(uParam0->f_566), 0)))
				{
					__LIB_1__::func_342("HAIR_CUR_2_DLC", 4000, 0);
					__LIB_2__::func_353(__LIB_10__::func_175(&(uParam0->f_566), 0));
				}
				else
				{
					__LIB_1__::func_342("HAIR_CUR_2", 4000, 0);
				}
			}
			else if (!__LIB_37__::func_266(uParam0->f_116.f_2))
			{
				__LIB_1__::func_342("HAIR_AFF_2", 4000, 0);
				__LIB_9__::func_926(MISC::GET_HASH_KEY(&(Global_100493.f_1384)), Global_100493.f_1388, MISC::GET_HASH_KEY(__LIB_9__::func_422(*uParam0, 0, 0)));
				__LIB_19__::func_159(0, 10, 3);
			}
			else if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && __LIB_4__::func_571()) && !__LIB_32__::func_709(joaat("NET_SHOP_TTYPE_BASKET"), __LIB_29__::func_509(uParam0->f_525, -1), __LIB_39__::func_367(uParam0->f_525, uParam0->f_566, 0, 0), joaat("NET_SHOP_ACTION_BUY_ITEM"), 1, uParam0->f_116.f_2, 1, 4, __LIB_34__::func_898(uParam0->f_525, -1), 3))
			{
				__LIB_18__::func_226(__LIB_2__::func_345());
				__LIB_1__::func_342("CSHOP_FAIL" /* GXT: Sorry - this item is unavailable. */, 4000, 0);
			}
			else if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && __LIB_18__::func_208(0)) && !__LIB_32__::func_709(joaat("NET_SHOP_TTYPE_BASKET"), __LIB_29__::func_509(uParam0->f_525, -1), joaat("PO_COUPON_HAIRCUT"), joaat("NET_SHOP_ACTION_SPEND"), 1, 0, 1, 4, __LIB_34__::func_898(uParam0->f_525, -1), 3))
			{
				__LIB_18__::func_226(__LIB_2__::func_345());
				__LIB_1__::func_342("CSHOP_FAIL" /* GXT: Sorry - this item is unavailable. */, 4000, 0);
			}
			else
			{
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && __LIB_4__::func_571())
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
		else if ((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/)) || __LIB_2__::func_338())
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "CANCEL", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			uParam0->f_116.f_15 = 0;
			uParam0->f_116.f_23 = 0;
			uParam0->f_116.f_22 = 0;
			if (__LIB_29__::func_533() || __LIB_29__::func_532())
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
					func_406(&(uParam0->f_485), &Global_4537616, 1, __LIB_29__::func_540(uParam0), -1, &(uParam0->f_716), &(uParam0->f_719));
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

void func_566(var uParam0, int iParam1, int iParam2)//Position - 0x60475
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
	func_499(uParam0, !uParam0->f_594);
	__LIB_1__::func_193(0, 0);
	__LIB_8__::func_441(*uParam0, 0);
	__LIB_1__::func_318(1, 1, 0, 0, 0);
	__LIB_1__::func_317(1, 2, 1, 1, 1);
	if (uParam0->f_525 == 2)
	{
		__LIB_1__::func_319("HAIR_TITLE_1");
	}
	else
	{
		__LIB_1__::func_319("HAIR_TITLE_2");
	}
	uParam0->f_492 = 0;
	uParam0->f_493 = 0;
	uParam0->f_494 = 0;
	uParam0->f_500 = 0;
	if (Global_4537616.f_252 == 0)
	{
		__LIB_18__::func_477(0, "HAIR_NONE", 0, 1, 0, 0, 0);
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
			if (func_569(Global_4537616.f_253[iVar2], &Var1))
			{
				Var7.f_8 = { Var1 };
			}
			if (uParam0->f_116.f_1 == iVar2)
			{
				uParam0->f_566 = { Var7.f_8 };
			}
			if (!BitTest(Var7.f_6, 1))
			{
				__LIB_18__::func_477(iVar2, &(Var7.f_8), 0, 1, 0, 0, 0);
				__LIB_18__::func_477(iVar2, "", 1, 1, 0, 0, 0);
				__LIB_21__::func_66(15, 0);
				if (iVar2 == uParam0->f_116.f_1)
				{
					uParam0->f_492 = 1;
				}
			}
			else if (__LIB_29__::func_522(uParam0, iVar2))
			{
				__LIB_18__::func_477(iVar2, &(Var7.f_8), 0, 1, 0, 0, 0);
				__LIB_18__::func_477(iVar2, "", 1, 1, 0, 0, 0);
				__LIB_21__::func_66(14, 0);
				iVar3 = iVar2;
			}
			else
			{
				if (BitTest(Var7.f_6, 4) || (iParam2 && iVar2 == uParam0->f_116.f_1))
				{
					__LIB_18__::func_477(iVar2, &(Var7.f_8), 1, 1, 0, 0, 0);
					__LIB_21__::func_66(2, 0);
					if (iVar2 == uParam0->f_116.f_1)
					{
						uParam0->f_493 = 1;
					}
				}
				else
				{
					__LIB_18__::func_477(iVar2, &(Var7.f_8), 0, 1, 0, 0, 0);
				}
				iVar4 = func_567(uParam0, &Var7, iVar0, iVar5, 0);
				if (iVar4 > 0)
				{
					__LIB_18__::func_477(iVar2, "ITEM_COST" /* GXT: $~1~ */, 1, 1, 0, 0, 0);
					__LIB_32__::func_488(iVar4, 0);
				}
				else
				{
					__LIB_18__::func_477(iVar2, "ITEM_FREE" /* GXT: FREE */, 0, 1, 0, 0, 0);
				}
			}
			iVar2++;
		}
	}
	if (uParam0->f_594)
	{
		uParam0->f_594 = 0;
		__LIB_3__::func_981(uParam0->f_595);
	}
	else
	{
		uParam0->f_116.f_1 = iVar3;
	}
	__LIB_2__::func_183(uParam0->f_116.f_1, 1, 1);
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
	func_582(uParam0);
	if (uParam0->f_710)
	{
		__LIB_1__::func_345(201, "ITEM_BUY" /* GXT: Buy */, -1, 0);
		__LIB_1__::func_345(202, "ITEM_BACK" /* GXT: Back */, -1, 0);
		__LIB_4__::func_221(21, "ITEM_MOV_CAM" /* GXT: Move Camera */, -1);
		if (!__LIB_29__::func_531(uParam0->f_525))
		{
			__LIB_1__::func_345(iLocal_134, "ITEM_ZOOM" /* GXT: Zoom */, -1, 0);
		}
	}
	else
	{
		__LIB_1__::func_345(201, "ITEM_BUY" /* GXT: Buy */, -1, 0);
		__LIB_1__::func_345(202, "ITEM_BACK" /* GXT: Back */, -1, 0);
		__LIB_4__::func_221(21, "ITEM_MOV_CAM" /* GXT: Move Camera */, -1);
	}
}

int func_567(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x6075A
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
		iVar0 = __LIB_37__::func_268(uParam0, iParam2, iParam3, 1);
	}
	else if (uParam0->f_525 == 2)
	{
		iVar0 = __LIB_37__::func_268(uParam0, iParam2, iParam3, 0);
	}
	if (bParam4)
	{
		func_527(uParam0, &iVar0);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && __LIB_4__::func_571())
	{
		iVar0 = NETSHOPPING::NET_GAMESERVER_GET_PRICE(__LIB_39__::func_367(uParam0->f_525, uParam1->f_8, 0, 0), joaat("CATEGORY_HAIR"), true);
	}
	return iVar0;
}

bool func_569(int iParam0, char* sParam1)//Position - 0x61114
{
	StringCopy(sParam1, "", 16);
	switch (iParam0)
	{
		case 1:
			StringCopy(sParam1, "CSHOP_OVR_0", 16);
			break;
		case 5:
			StringCopy(sParam1, "CSHOP_OVR_1", 16);
			break;
		case 4:
			StringCopy(sParam1, "CSHOP_OVR_2", 16);
			break;
		case 6:
			StringCopy(sParam1, "CSHOP_OVR_3", 16);
			break;
		case 3:
			StringCopy(sParam1, "CSHOP_OVR_4", 16);
			break;
		case 2:
			StringCopy(sParam1, "CSHOP_OVR_5", 16);
			break;
		case 7:
			StringCopy(sParam1, "CSHOP_OVR_6", 16);
			break;
		case 8:
			StringCopy(sParam1, "CSHOP_OVR_7", 16);
			break;
		case 9:
			StringCopy(sParam1, "CSHOP_OVR_8", 16);
			break;
		case 10:
			StringCopy(sParam1, "CSHOP_OVR_9", 16);
			break;
		case 11:
			StringCopy(sParam1, "CSHOP_OVR_10", 16);
			break;
		case 12:
			StringCopy(sParam1, "CSHOP_OVR_11", 16);
			break;
		case 13:
			StringCopy(sParam1, "CSHOP_OVR_12", 16);
			break;
		case 14:
			StringCopy(sParam1, "CSHOP_OVR_13", 16);
			break;
		case 15:
			StringCopy(sParam1, "CSHOP_OVR_14", 16);
			break;
		case 16:
			StringCopy(sParam1, "CSHOP_OVR_15", 16);
			break;
		case 17:
			StringCopy(sParam1, "CSHOP_OVR_16", 16);
			break;
		case 18:
			StringCopy(sParam1, "CSHOP_OVR_17", 16);
			break;
		case 19:
			StringCopy(sParam1, "CSHOP_OVR_18", 16);
			break;
		case 20:
			StringCopy(sParam1, "CSHOP_OVR_19", 16);
			break;
		case 21:
			StringCopy(sParam1, "CSHOP_OVR_20", 16);
			break;
		case 22:
			StringCopy(sParam1, "CSHOP_OVR_21", 16);
			break;
		case 23:
			StringCopy(sParam1, "CSHOP_OVR_22", 16);
			break;
		case 25:
		case 26:
		case 29:
		case 27:
		case 24:
		case 28:
		case 32:
		case 30:
		case 31:
		case 34:
		case 33:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
			StringCopy(sParam1, func_570(__LIB_11__::func_433(iParam0), 0, 0), 16);
			break;
	}
	return MISC::GET_HASH_KEY(sParam1) != 0;
}

char* func_570(int iParam0, bool bParam1, int iParam2)//Position - 0x6132B
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return func_571(iParam0, bParam1, iParam2, 1);
	}
	switch (iParam0)
	{
		case 1:
			if (bParam1)
			{
				return "CSHOP_TITLE1";
			}
			else
			{
				return "CSHOP_ITEM1";
			}
			break;
		case 2:
			if (bParam1)
			{
				return "CSHOP_TITLE36";
			}
			else
			{
				return "CSHOP_ITEM36";
			}
			break;
		case 3:
			if (bParam1)
			{
				return "CSHOP_TITLE49";
			}
			else
			{
				return "CSHOP_ITEM49";
			}
			break;
		case 36:
			if (bParam1)
			{
				return "CSHOP_TITLE37";
			}
			else
			{
				return "CSHOP_ITEM37";
			}
			break;
		case 17:
			if (bParam1)
			{
				return "CSHOP_TITLE2";
			}
			else
			{
				return "CSHOP_ITEM2";
			}
			break;
		case 4:
			if (bParam1)
			{
				return "CSHOP_TITLE79";
			}
			else
			{
				return "CSHOP_ITEM79";
			}
			break;
		case 6:
			if (bParam1)
			{
				return "CSHOP_TITLE80";
			}
			else
			{
				return "CSHOP_ITEM80";
			}
			break;
		case 28:
			if (bParam1)
			{
				return "CSHOP_TITLE46";
			}
			else
			{
				return "CSHOP_ITEM46";
			}
			break;
		case 31:
			if (bParam1)
			{
				return "CSHOP_TITLE78";
			}
			else
			{
				return "CSHOP_ITEM78";
			}
			break;
		case 35:
			if (bParam1)
			{
				return "CSHOP_TITLE81";
			}
			else
			{
				return "CSHOP_ITEM81";
			}
			break;
		case 30:
			if (bParam1)
			{
				return "CSHOP_TITLE50";
			}
			else
			{
				return "CSHOP_ITEM50";
			}
			break;
		case 37:
			if (bParam1)
			{
				return "CSHOP_TITLE82";
			}
			else
			{
				return "CSHOP_ITEM82";
			}
			break;
		case 16:
			if (bParam1)
			{
				return "CSHOP_TITLE5";
			}
			else
			{
				return "CSHOP_ITEM5";
			}
			break;
		case 24:
			if (bParam1)
			{
				return "CSHOP_TITLE4";
			}
			else
			{
				return "CSHOP_ITEM4";
			}
			break;
		case 22:
			if (bParam1)
			{
				return "CSHOP_TITLE72";
			}
			else
			{
				return "CSHOP_ITEM72";
			}
			break;
		case 33:
			if (bParam1)
			{
				return "CSHOP_TITLE73";
			}
			else
			{
				return "CSHOP_ITEM73";
			}
			break;
		case 25:
			if (bParam1)
			{
				return "CSHOP_TITLE51";
			}
			else
			{
				return "CSHOP_ITEM51";
			}
			break;
		case 32:
			if (bParam1)
			{
				return "CSHOP_TITLE3";
			}
			else
			{
				return "CSHOP_ITEM3";
			}
			break;
		case 20:
			if (bParam1)
			{
				return "CSHOP_TITLE8";
			}
			else
			{
				return "CSHOP_ITEM8";
			}
			break;
		case 34:
			if (bParam1)
			{
				return "CSHOP_TITLE45";
			}
			else
			{
				return "CSHOP_ITEM45";
			}
			break;
		case 19:
			if (bParam1)
			{
				return "CSHOP_TITLE38";
			}
			else
			{
				return "CSHOP_ITEM38";
			}
			break;
		case 29:
			if (bParam1)
			{
				return "CSHOP_TITLE47";
			}
			else
			{
				return "CSHOP_ITEM47";
			}
			break;
		case 21:
			if (bParam1)
			{
				return "CSHOP_TITLE39";
			}
			else
			{
				return "CSHOP_ITEM39";
			}
			break;
		case 26:
			if (bParam1)
			{
				return "CSHOP_TITLE48";
			}
			else
			{
				return "CSHOP_ITEM48";
			}
			break;
		case 15:
			if (bParam1)
			{
				return "CSHOP_TITLE40";
			}
			else
			{
				return "CSHOP_ITEM40";
			}
			break;
		case 18:
			if (bParam1)
			{
				return "CSHOP_TITLE41";
			}
			else
			{
				return "CSHOP_ITEM41";
			}
			break;
		case 11:
			if (bParam1)
			{
				return "CSHOP_TITLE42";
			}
			else
			{
				return "CSHOP_ITEM42";
			}
			break;
		case 12:
			if (bParam1)
			{
				return "CSHOP_TITLE42";
			}
			else
			{
				return "CSHOP_ITEM42";
			}
			break;
		case 13:
			if (bParam1)
			{
				return "CSHOP_TITLE70";
			}
			else
			{
				return "CSHOP_ITEM70";
			}
			break;
		case 14:
			if (bParam1)
			{
				return "CSHOP_TITLE71";
			}
			else
			{
				return "CSHOP_ITEM71";
			}
			break;
		case 7:
			if (bParam1)
			{
				return "CSHOP_TITLE74";
			}
			else
			{
				return "CSHOP_ITEM74";
			}
			break;
		case 10:
			if (bParam1)
			{
				return "CSHOP_TITLE125";
			}
			else
			{
				return "CSHOP_ITEM125";
			}
			break;
		case 27:
			if (bParam1)
			{
				return "CSHOP_TITLE126";
			}
			else
			{
				return "CSHOP_ITEM126";
			}
			break;
		case 23:
			if (bParam1)
			{
				return "CSHOP_TITLE4";
			}
			else
			{
				return "CSHOP_ITEM4";
			}
			break;
		case 8:
			if (bParam1)
			{
				return "CSHOP_TITLE127";
			}
			else
			{
				return "CSHOP_ITEM127";
			}
			break;
		case 9:
			if (bParam1)
			{
				return "CSHOP_TITLE128";
			}
			else
			{
				return "CSHOP_ITEM128";
			}
			break;
		case 5:
			if (bParam1)
			{
				return "CSHOP_TITLE2";
			}
			else
			{
				return "CSHOP_ITEM2";
			}
			break;
	}
	return "INVALID_MENU";
}

char* func_571(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x617CE
{
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				if (iParam2 == joaat("CSHOP_TRY_MASK"))
				{
					return "CSHOP_TITLE41";
				}
				else if (iParam2 == joaat("CSHOP_TRY_GEAR"))
				{
					return "CSHOP_TITLE159" /* GXT: HEIST GEAR */;
				}
				else
				{
					return "CSHOP_TITLE0";
				}
			}
			else
			{
				return "CSHOP_ITEM0";
			}
			break;
		case 1:
			if (bParam1)
			{
				return "CSHOP_TITLE1";
			}
			else
			{
				return "CSHOP_ITEM1";
			}
			break;
		case 2:
			if (bParam1)
			{
				return "CSHOP_TITLE114";
			}
			else
			{
				return "CSHOP_ITEM114";
			}
			break;
		case 3:
			if (bParam1)
			{
				return "CSHOP_TITLE113";
			}
			else
			{
				return "CSHOP_ITEM113";
			}
			break;
		case 4:
			if (bParam1)
			{
				return "CSHOP_TITLE113";
			}
			else
			{
				return "CSHOP_ITEM113";
			}
			break;
		case 6:
			if (bParam1)
			{
				return "CSHOP_TITLE2";
			}
			else
			{
				return "CSHOP_ITEM2";
			}
			break;
		case 7:
			if (bParam1)
			{
				return "CSHOP_TITLE46";
			}
			else
			{
				return "CSHOP_ITEM46";
			}
			break;
		case 8:
			if (bParam1)
			{
				return "CSHOP_TITLE92";
			}
			else
			{
				return "CSHOP_ITEM92";
			}
			break;
		case 9:
			if (bParam1)
			{
				return "CSHOP_TITLE111";
			}
			else
			{
				return "CSHOP_ITEM111";
			}
			break;
		case 10:
			if (bParam1)
			{
				return "CSHOP_TITLE93";
			}
			else
			{
				return "CSHOP_ITEM93";
			}
			break;
		case 11:
			if (bParam1)
			{
				return "CSHOP_TITLE3";
			}
			else
			{
				return "CSHOP_ITEM3";
			}
			break;
		case 12:
			if (bParam1)
			{
				return "CSHOP_TITLE4";
			}
			else
			{
				return "CSHOP_ITEM4";
			}
			break;
		case 13:
			if (bParam1)
			{
				return "CSHOP_TITLE5";
			}
			else
			{
				return "CSHOP_ITEM5";
			}
			break;
		case 14:
			if (bParam1)
			{
				return "CSHOP_TITLE6";
			}
			else
			{
				return "CSHOP_ITEM6";
			}
			break;
		case 15:
			if (bParam1)
			{
				return "CSHOP_TITLE7";
			}
			else
			{
				return "CSHOP_ITEM7";
			}
			break;
		case 16:
			if (bParam1)
			{
				return "CSHOP_TITLE8";
			}
			else
			{
				return "CSHOP_ITEM8";
			}
			break;
		case 17:
			if (bParam1)
			{
				return "CSHOP_TITLE9";
			}
			else
			{
				return "CSHOP_ITEM9";
			}
			break;
		case 18:
			if (bParam1)
			{
				return "CSHOP_TITLE10";
			}
			else
			{
				return "CSHOP_ITEM10";
			}
			break;
		case 19:
			if (bParam1)
			{
				return "CSHOP_TITLE11";
			}
			else
			{
				return "CSHOP_ITEM11";
			}
			break;
		case 28:
			if (bParam1)
			{
				return "CSHOP_TITLE12";
			}
			else
			{
				return "CSHOP_ITEM12";
			}
			break;
		case 29:
			if (bParam1)
			{
				return "CSHOP_TITLE76";
			}
			else
			{
				return "CSHOP_ITEM76";
			}
			break;
		case 30:
			if (bParam1)
			{
				return "CSHOP_TITLE13";
			}
			else
			{
				return "CSHOP_ITEM13";
			}
			break;
		case 31:
			if (bParam1)
			{
				return "CSHOP_TITLE14";
			}
			else
			{
				return "CSHOP_ITEM14";
			}
			break;
		case 32:
			if (bParam1)
			{
				return "CSHOP_TITLE15";
			}
			else
			{
				return "CSHOP_ITEM15";
			}
			break;
		case 33:
			if (bParam1)
			{
				return "CSHOP_TITLE16";
			}
			else
			{
				return "CSHOP_ITEM16";
			}
			break;
		case 34:
			if (bParam1)
			{
				return "CSHOP_TITLE94";
			}
			else
			{
				return "CSHOP_ITEM94";
			}
			break;
		case 35:
			if (bParam1)
			{
				return "CSHOP_TITLE17";
			}
			else
			{
				return "CSHOP_ITEM17";
			}
			break;
		case 36:
			if (bParam1)
			{
				return "CSHOP_TITLE96";
			}
			else
			{
				return "CSHOP_ITEM96";
			}
			break;
		case 37:
			if (bParam1)
			{
				return "CSHOP_TITLE95";
			}
			else
			{
				return "CSHOP_ITEM95";
			}
			break;
		case 38:
			if (bParam1)
			{
				return "CSHOP_TITLE18";
			}
			else
			{
				return "CSHOP_ITEM18";
			}
			break;
		case 39:
			if (bParam1)
			{
				return "CSHOP_TITLE19";
			}
			else
			{
				return "CSHOP_ITEM19";
			}
			break;
		case 44:
			if (bParam1)
			{
				return "CSHOP_TITLE21";
			}
			else
			{
				return "CSHOP_ITEM21";
			}
			break;
		case 45:
			if (bParam1)
			{
				return "CSHOP_TITLE77";
			}
			else
			{
				return "CSHOP_ITEM77";
			}
			break;
		case 46:
			if (bParam1)
			{
				return "CSHOP_TITLE22";
			}
			else
			{
				return "CSHOP_ITEM22";
			}
			break;
		case 47:
			if (bParam1)
			{
				return "CSHOP_TITLE90";
			}
			else
			{
				return "CSHOP_ITEM90";
			}
			break;
		case 48:
			if (bParam1)
			{
				return "CSHOP_TITLE91";
			}
			else
			{
				return "CSHOP_ITEM91";
			}
			break;
		case 49:
			if (bParam1)
			{
				return "CSHOP_TITLE23";
			}
			else
			{
				return "CSHOP_ITEM23";
			}
			break;
		case 50:
			if (bParam1)
			{
				return "CSHOP_TITLE24";
			}
			else
			{
				return "CSHOP_ITEM24";
			}
			break;
		case 51:
			if (bParam1)
			{
				return "CSHOP_TITLE25";
			}
			else
			{
				return "CSHOP_ITEM25";
			}
			break;
		case 52:
			if (bParam1)
			{
				return "CSHOP_TITLE27";
			}
			else
			{
				return "CSHOP_ITEM27";
			}
			break;
		case 53:
			if (bParam1)
			{
				return "CSHOP_TITLE28";
			}
			else
			{
				return "CSHOP_ITEM28";
			}
			break;
		case 54:
			if (bParam1)
			{
				return "CSHOP_TITLE29";
			}
			else
			{
				return "CSHOP_ITEM29";
			}
			break;
		case 55:
			if (bParam1)
			{
				return "CSHOP_TITLE75";
			}
			else
			{
				return "CSHOP_ITEM75";
			}
			break;
		case 56:
			if (bParam1)
			{
				return "CSHOP_TITLE30";
			}
			else
			{
				return "CSHOP_ITEM30";
			}
			break;
		case 57:
			if (bParam1)
			{
				return "CSHOP_TITLE31";
			}
			else
			{
				return "CSHOP_ITEM31";
			}
			break;
		case 58:
			if (bParam1)
			{
				return "CSHOP_TITLE32";
			}
			else
			{
				return "CSHOP_ITEM32";
			}
			break;
		case 110:
			if (bParam1)
			{
				return "CSHOP_TITLE112";
			}
			else
			{
				return "CSHOP_ITEM112";
			}
			break;
		case 59:
			if (bParam1)
			{
				return "CSHOP_TITLE33";
			}
			else
			{
				return "CSHOP_ITEM33";
			}
			break;
		case 40:
			if (bParam1)
			{
				return "CSHOP_TITLE34";
			}
			else
			{
				return "CSHOP_ITEM34";
			}
			break;
		case 41:
			if (bParam1)
			{
				return "CSHOP_TITLE35";
			}
			else
			{
				return "CSHOP_ITEM35";
			}
			break;
		case 20:
			if (bParam1)
			{
				return "CSHOP_TITLE52";
			}
			else
			{
				return "CSHOP_ITEM52";
			}
			break;
		case 21:
			if (bParam1)
			{
				return "CSHOP_TITLE53";
			}
			else
			{
				return "CSHOP_ITEM53";
			}
			break;
		case 22:
			if (bParam1)
			{
				return "CSHOP_TITLE54";
			}
			else
			{
				return "CSHOP_ITEM54";
			}
			break;
		case 42:
			if (bParam1)
			{
				return "CSHOP_TITLE55";
			}
			else
			{
				return "CSHOP_ITEM55";
			}
			break;
		case 60:
			if (bParam1)
			{
				return "CSHOP_TITLE56";
			}
			else
			{
				return "CSHOP_ITEM56";
			}
			break;
		case 23:
			if (bParam1)
			{
				return "CSHOP_TITLE57";
			}
			else
			{
				return "CSHOP_ITEM57";
			}
			break;
		case 25:
			if (bParam1)
			{
				return "CSHOP_TITLE129";
			}
			else
			{
				return "CSHOP_ITEM129";
			}
			break;
		case 26:
			if (bParam1)
			{
				return "CSHOP_TITLE50";
			}
			else
			{
				return "CSHOP_ITEM50";
			}
			break;
		case 27:
			if (bParam1)
			{
				return "CSHOP_TITLE130";
			}
			else
			{
				return "CSHOP_ITEM130";
			}
			break;
		case 99:
			if (bParam1)
			{
				return "CSHOP_TITLE49";
			}
			else
			{
				return "CSHOP_ITEM49";
			}
			break;
		case 87:
			if (bParam1)
			{
				return "CSHOP_TITLE60";
			}
			else
			{
				return "CSHOP_ITEM60";
			}
			break;
		case 80:
			if (bParam1)
			{
				return "CSHOP_TITLE83";
			}
			else
			{
				return "CSHOP_ITEM83";
			}
			break;
		case 81:
			if (bParam1)
			{
				return "CSHOP_TITLE84";
			}
			else
			{
				return "CSHOP_ITEM84";
			}
			break;
		case 82:
			if (bParam1)
			{
				return "CSHOP_TITLE85";
			}
			else
			{
				return "CSHOP_ITEM85";
			}
			break;
		case 83:
			if (bParam1)
			{
				return "CSHOP_TITLE86";
			}
			else
			{
				return "CSHOP_ITEM86";
			}
			break;
		case 84:
			if (bParam1)
			{
				return "CSHOP_TITLE87";
			}
			else
			{
				return "CSHOP_ITEM87";
			}
			break;
		case 85:
			if (bParam1)
			{
				return "CSHOP_TITLE88";
			}
			else
			{
				return "CSHOP_ITEM88";
			}
			break;
		case 86:
			if (bParam1)
			{
				return "CSHOP_TITLE89";
			}
			else
			{
				return "CSHOP_ITEM89";
			}
			break;
		case 78:
			if (func_574(iParam0))
			{
				if (bParam1)
				{
					return "CSHOP_CH_TITLE" /* GXT: DIAMOND CASINO HEIST MASKS */;
				}
				else
				{
					return "CSHOP_CH_ITEM" /* GXT: Diamond Casino Heist Masks */;
				}
			}
			if (bParam1)
			{
				return "CSHOP_TITLE41";
			}
			else
			{
				return "CSHOP_ITEM41";
			}
			break;
		case 88:
			if (bParam1)
			{
				return "CSHOP_TITLE115";
			}
			else
			{
				return "CSHOP_ITEM115";
			}
			break;
		case 90:
			if (bParam1)
			{
				return "CSHOP_TITLE116";
			}
			else
			{
				return "CSHOP_ITEM116";
			}
			break;
		case 91:
			if (bParam1)
			{
				return "CSHOP_TITLE117";
			}
			else
			{
				return "CSHOP_ITEM117";
			}
			break;
		case 92:
			if (bParam1)
			{
				return "CSHOP_TITLE81";
			}
			else
			{
				return "CSHOP_ITEM81";
			}
			break;
		case 93:
			if (bParam1)
			{
				return "CSHOP_TITLE119";
			}
			else
			{
				return "CSHOP_ITEM119";
			}
			break;
		case 94:
			if (bParam1)
			{
				return "CSHOP_TITLE120";
			}
			else
			{
				return "CSHOP_ITEM120";
			}
			break;
		case 95:
			if (bParam1)
			{
				return "CSHOP_TITLE121";
			}
			else
			{
				return "CSHOP_ITEM121";
			}
			break;
		case 96:
			if (bParam1)
			{
				return "CSHOP_TITLE122";
			}
			else
			{
				return "CSHOP_ITEM122";
			}
			break;
		case 97:
			if (bParam1)
			{
				return "CSHOP_TITLE123";
			}
			else
			{
				return "CSHOP_ITEM123";
			}
			break;
		case 98:
			if (bParam1)
			{
				return "CSHOP_TITLE124";
			}
			else
			{
				return "CSHOP_ITEM124";
			}
			break;
		case 100:
			if (bParam1)
			{
				return "CSHOP_TITLE59";
			}
			else
			{
				return "CSHOP_ITEM59";
			}
			break;
		case 101:
			if (bParam1)
			{
				return "CSHOP_TITLE61";
			}
			else
			{
				return "CSHOP_ITEM61";
			}
			break;
		case 102:
			if (bParam1)
			{
				return "CSHOP_TITLE62";
			}
			else
			{
				return "CSHOP_ITEM62";
			}
			break;
		case 103:
			if (bParam1)
			{
				return "CSHOP_TITLE63";
			}
			else
			{
				return "CSHOP_ITEM63";
			}
			break;
		case 104:
			if (bParam1)
			{
				return "CSHOP_TITLE64";
			}
			else
			{
				return "CSHOP_ITEM64";
			}
			break;
		case 105:
			if (bParam1)
			{
				return "CSHOP_TITLE65";
			}
			else
			{
				return "CSHOP_ITEM65";
			}
			break;
		case 106:
			if (bParam1)
			{
				return "CSHOP_TITLE66";
			}
			else
			{
				return "CSHOP_ITEM66";
			}
			break;
		case 107:
			if (bParam1)
			{
				return "CSHOP_TITLE67";
			}
			else
			{
				return "CSHOP_ITEM67";
			}
			break;
		case 108:
			if (bParam1)
			{
				return "CSHOP_TITLE68";
			}
			else
			{
				return "CSHOP_ITEM68";
			}
			break;
		case 109:
			if (bParam1)
			{
				return "CSHOP_TITLE69";
			}
			else
			{
				return "CSHOP_ITEM69";
			}
			break;
		case 89:
			if (bParam1)
			{
				return "CSHOP_TITLE74";
			}
			else
			{
				return "CSHOP_ITEM74";
			}
			break;
		case 24:
			if (bParam1)
			{
				return "CSHOP_TITLE37";
			}
			else
			{
				return "CSHOP_ITEM37";
			}
			break;
		case 43:
			if (bParam1)
			{
				return "CSHOP_TITLE38";
			}
			else
			{
				return "CSHOP_ITEM38";
			}
			break;
		case 61:
			if (bParam1)
			{
				return "CSHOP_TITLE40";
			}
			else
			{
				return "CSHOP_ITEM40";
			}
			break;
		case 62:
			if (bParam1)
			{
				return "CSHOP_TITLE97";
			}
			else
			{
				return "CSHOP_ITEM97";
			}
			break;
		case 63:
			if (bParam1)
			{
				return "CSHOP_TITLE98";
			}
			else
			{
				return "CSHOP_ITEM98";
			}
			break;
		case 64:
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (bParam1)
				{
					return "CSHOP_TITLE131";
				}
				else
				{
					return "CSHOP_ITEM131";
				}
			}
			else if (bParam1)
			{
				return "CSHOP_TITLE127";
			}
			else
			{
				return "CSHOP_ITEM127";
			}
			break;
		case 65:
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (bParam1)
				{
					return "CSHOP_TITLE132";
				}
				else
				{
					return "CSHOP_ITEM132";
				}
			}
			else
			{
				if (bParam1)
				{
					return "CSHOP_TITLE128";
				}
				else
				{
					return "CSHOP_ITEM128";
				}
				break;
			}
			break;
		case 66:
			if (bParam1)
			{
				return "CSHOP_TITLE100";
			}
			else
			{
				return "CSHOP_ITEM100";
			}
			break;
		case 67:
			if (bParam1)
			{
				return "CSHOP_TITLE110";
			}
			else
			{
				return "CSHOP_ITEM110";
			}
			break;
		case 68:
			if (bParam1)
			{
				return "CSHOP_TITLE101";
			}
			else
			{
				return "CSHOP_ITEM101";
			}
			break;
		case 69:
			if (bParam1)
			{
				return "CSHOP_TITLE102";
			}
			else
			{
				return "CSHOP_ITEM102";
			}
			break;
		case 70:
			if (bParam1)
			{
				return "CSHOP_TITLE103";
			}
			else
			{
				return "CSHOP_ITEM103";
			}
			break;
		case 71:
			if (bParam1)
			{
				return "CSHOP_TITLE104";
			}
			else
			{
				return "CSHOP_ITEM104";
			}
			break;
		case 72:
			if (bParam1)
			{
				return "CSHOP_TITLE108";
			}
			else
			{
				return "CSHOP_ITEM108";
			}
			break;
		case 73:
			if (bParam1)
			{
				return "CSHOP_TITLE109";
			}
			else
			{
				return "CSHOP_ITEM109";
			}
			break;
		case 74:
			if (bParam1)
			{
				return "CSHOP_TITLE105";
			}
			else
			{
				return "CSHOP_ITEM105";
			}
			break;
		case 75:
			if (bParam1)
			{
				return "CSHOP_TITLE106";
			}
			else
			{
				return "CSHOP_ITEM106";
			}
			break;
		case 76:
			if (bParam1)
			{
				return "CSHOP_TITLE107";
			}
			else
			{
				return "CSHOP_ITEM107";
			}
			break;
		case 77:
			if (bParam1)
			{
				return "CSHOP_TITLE58";
			}
			else
			{
				return "CSHOP_ITEM58";
			}
			break;
		case 79:
			if (bParam1)
			{
				return "CSHOP_TITLE42";
			}
			else
			{
				return "CSHOP_ITEM42";
			}
			break;
		case 111:
			if (bParam1)
			{
				return "CSHOP_TITLE150";
			}
			else
			{
				return "CSHOP_ITEM150";
			}
			break;
		case 112:
			if (bParam1)
			{
				return "CSHOP_TITLE151";
			}
			else
			{
				return "CSHOP_ITEM151";
			}
			break;
		case 113:
			if (bParam1)
			{
				return "CSHOP_TITLE152";
			}
			else
			{
				return "CSHOP_ITEM152";
			}
			break;
		case 114:
			if (bParam1)
			{
				return "CSHOP_TITLE153";
			}
			else
			{
				return "CSHOP_ITEM153";
			}
			break;
		case 115:
			if (bParam1)
			{
				return "CSHOP_TITLE154";
			}
			else
			{
				return "CSHOP_ITEM154";
			}
			break;
		case 116:
			if (bParam1)
			{
				return "CSHOP_TITLE155";
			}
			else
			{
				return "CSHOP_ITEM155";
			}
			break;
		case 117:
			if (bParam1)
			{
				return "CSHOP_TITLE156";
			}
			else
			{
				return "CSHOP_ITEM156";
			}
			break;
		case 119:
			if (bParam1)
			{
				return "CSHOP_TITLE157";
			}
			else
			{
				return "CSHOP_ITEM157";
			}
			break;
		case 118:
			if (bParam1)
			{
				return "CSHOP_TITLE158";
			}
			else
			{
				return "CSHOP_ITEM158";
			}
			break;
		case 120:
			if (bParam1)
			{
				return "CSHOP_TITLE160";
			}
			else
			{
				return "CSHOP_ITEM160";
			}
			break;
		case 124:
			if (bParam1)
			{
				return "CSHOP_TITLE159" /* GXT: HEIST GEAR */;
			}
			else
			{
				return "CSHOP_ITEM159" /* GXT: Heist Gear */;
			}
			break;
		case 122:
			if (bParam1)
			{
				return "CSHOP_TITLE161";
			}
			else
			{
				return "CSHOP_ITEM161";
			}
			break;
		case 121:
			if (bParam1)
			{
				return "CSHOP_TITLE162";
			}
			else
			{
				return "CSHOP_ITEM162";
			}
			break;
		case 123:
			if (bParam1)
			{
				return "CSHOP_TITLE163";
			}
			else
			{
				return "CSHOP_ITEM163";
			}
			break;
		case 125:
			if (bParam1)
			{
				return "CSHOP_TITLE164";
			}
			else
			{
				return "CSHOP_ITEM164";
			}
			break;
		case 126:
			if (bParam1)
			{
				return "CSHOP_TITLE165";
			}
			else
			{
				return "CSHOP_ITEM165";
			}
			break;
		case 127:
			if (bParam1)
			{
				return "CSHOP_TITLE166";
			}
			else
			{
				return "CSHOP_ITEM166";
			}
			break;
		case 128:
			if (bParam1)
			{
				return "CSHOP_TITLE167";
			}
			else
			{
				return "CSHOP_ITEM167";
			}
			break;
		case 129:
			if (bParam1)
			{
				return "CSHOP_TITLE168";
			}
			else
			{
				return "CSHOP_ITEM168";
			}
			break;
		case 130:
			if (bParam1)
			{
				return "CSHOP_TITLE169";
			}
			else
			{
				return "CSHOP_ITEM169";
			}
			break;
		case 131:
			if (bParam1)
			{
				return "CSHOP_TITLE170";
			}
			else
			{
				return "CSHOP_ITEM170";
			}
			break;
		case 132:
			if (bParam1)
			{
				return "CSHOP_TITLE171";
			}
			else
			{
				return "CSHOP_ITEM171";
			}
			break;
		case 133:
			if (bParam1)
			{
				return "CSHOP_TITLE172";
			}
			else
			{
				return "CSHOP_ITEM172";
			}
			break;
		case 134:
			if (bParam1)
			{
				return "CSHOP_TITLE173";
			}
			else
			{
				return "CSHOP_ITEM173";
			}
			break;
		case 135:
			if (bParam1)
			{
				return "CSHOP_TITLE174";
			}
			else
			{
				return "CSHOP_ITEM174";
			}
			break;
		case 136:
			if (bParam1)
			{
				return "CSHOP_TITLE175";
			}
			else
			{
				return "CSHOP_ITEM175";
			}
			break;
		case 137:
			if (bParam1)
			{
				return "CSHOP_TITLE176";
			}
			else
			{
				return "CSHOP_ITEM176";
			}
			break;
		case 138:
			if (bParam1)
			{
				return "CSHOP_TITLE177";
			}
			else
			{
				return "CSHOP_ITEM177";
			}
			break;
		case 139:
			if (bParam1)
			{
				return "CSHOP_TITLE178";
			}
			else
			{
				return "CSHOP_ITEM178";
			}
			break;
		case 140:
			if (bParam1)
			{
				return "CSHOP_TITLE179";
			}
			else
			{
				return "CSHOP_ITEM179";
			}
			break;
		case 141:
			if (bParam1)
			{
				return "CSHOP_TITLE180";
			}
			else
			{
				return "CSHOP_ITEM180";
			}
			break;
		case 142:
			if (bParam1)
			{
				return "CSHOP_TITLE181";
			}
			else
			{
				return "CSHOP_ITEM181";
			}
			break;
		case 143:
			if (bParam1)
			{
				return "CSHOP_TITLE182";
			}
			else
			{
				return "CSHOP_ITEM182";
			}
			break;
		case 144:
			if (bParam1)
			{
				return "CSHOP_TITLE183";
			}
			else
			{
				return "CSHOP_ITEM183";
			}
			break;
		case 145:
			if (bParam1)
			{
				return "CSHOP_TITLE184";
			}
			else
			{
				return "CSHOP_ITEM184";
			}
			break;
		case 146:
			if (bParam1)
			{
				return "CSHOP_TITLE185";
			}
			else
			{
				return "CSHOP_ITEM185";
			}
			break;
		case 147:
			if (bParam1)
			{
				return "CSHOP_TITLE186";
			}
			else
			{
				return "CSHOP_ITEM186";
			}
			break;
		case 148:
			if (bParam1)
			{
				return "CSHOP_TITLE187";
			}
			else
			{
				return "CSHOP_ITEM187";
			}
			break;
		case 149:
			if (bParam1)
			{
				return "CSHOP_TITLE188";
			}
			else
			{
				return "CSHOP_ITEM188";
			}
			break;
		case 150:
			if (bParam1)
			{
				return "CSHOP_TITLE189";
			}
			else
			{
				return "CSHOP_ITEM189";
			}
			break;
		case 151:
			if (bParam1)
			{
				return "CSHOP_TITLE190";
			}
			else
			{
				return "CSHOP_ITEM190";
			}
			break;
		case 152:
			if (bParam1)
			{
				return "CSHOP_TITLE191";
			}
			else
			{
				return "CSHOP_ITEM191";
			}
			break;
		case 153:
			if (bParam1)
			{
				return "CSHOP_TITLE192";
			}
			else
			{
				return "CSHOP_ITEM192";
			}
			break;
		case 154:
			if (bParam1)
			{
				return "CSHOP_TITLE193";
			}
			else
			{
				return "CSHOP_ITEM193";
			}
			break;
		case 155:
			if (bParam1)
			{
				return "CSHOP_TITLE194";
			}
			else
			{
				return "CSHOP_ITEM194";
			}
			break;
		case 156:
			if (bParam1)
			{
				return "CSHOP_TITLE195";
			}
			else
			{
				return "CSHOP_ITEM195";
			}
			break;
		case 157:
			if (bParam1)
			{
				return "CSHOP_TITLE196";
			}
			else
			{
				return "CSHOP_ITEM196";
			}
			break;
		case 158:
			if (bParam1)
			{
				return "CSHOP_TITLE197";
			}
			else
			{
				return "CSHOP_ITEM197";
			}
			break;
		case 159:
			if (bParam1)
			{
				return "CSHOP_TITLE198";
			}
			else
			{
				return "CSHOP_ITEM198";
			}
			break;
		case 5:
			if (bParam1)
			{
				return "CSHOP_TITLE199";
			}
			else
			{
				return "CSHOP_ITEM199";
			}
			break;
		case 160:
			if (bParam1)
			{
				return "CSHOP_TITLE200";
			}
			else
			{
				return "CSHOP_ITEM200";
			}
			break;
		case 165:
			if (bParam1)
			{
				return "CSHOP_TITLE205";
			}
			else
			{
				return "CSHOP_ITEM205";
			}
			break;
		case 166:
			if (bParam1)
			{
				return "CSHOP_TITLE206";
			}
			else
			{
				return "CSHOP_ITEM206";
			}
			break;
		case 167:
			if (bParam1)
			{
				return "CSHOP_TITLE207";
			}
			else
			{
				return "CSHOP_ITEM207";
			}
			break;
		case 168:
			if (bParam1)
			{
				return "CSHOP_TITLE208";
			}
			else
			{
				return "CSHOP_ITEM208";
			}
			break;
		case 169:
			if (bParam1)
			{
				return "CSHOP_TITLE209";
			}
			else
			{
				return "CSHOP_ITEM209";
			}
			break;
		case 170:
			if (bParam1)
			{
				return "CSHOP_TITLE210";
			}
			else
			{
				return "CSHOP_ITEM210";
			}
			break;
		case 161:
			if (bParam1)
			{
				return "CSHOP_TITLE211";
			}
			else
			{
				return "CSHOP_ITEM211";
			}
			break;
		case 171:
			if (bParam1)
			{
				return "CSHOP_TITLE212";
			}
			else
			{
				return "CSHOP_ITEM212";
			}
			break;
		case 172:
			if (bParam1)
			{
				return "CSHOP_TITLE213";
			}
			else
			{
				return "CSHOP_ITEM213";
			}
			break;
		case 173:
			if (bParam1)
			{
				return "CSHOP_TITLE214";
			}
			else
			{
				return "CSHOP_ITEM214";
			}
			break;
		case 174:
			if (bParam1)
			{
				return "CSHOP_TITLE215";
			}
			else
			{
				return "CSHOP_ITEM215";
			}
			break;
		case 175:
			if (bParam1)
			{
				return "CSHOP_TITLE216";
			}
			else
			{
				return "CSHOP_ITEM216";
			}
			break;
		case 176:
			if (bParam1)
			{
				return "CSHOP_TITLE217" /* GXT: OUTFITS: SANTA COSTUMES */;
			}
			else
			{
				return "CSHOP_ITEM217" /* GXT: Outfits: Santa Costumes */;
			}
			break;
		case 177:
			if (bParam1)
			{
				return "CSHOP_TITLE218";
			}
			else
			{
				return "CSHOP_ITEM218";
			}
			break;
		case 178:
			if (bParam1)
			{
				return "CSHOP_TITLE219";
			}
			else
			{
				return "CSHOP_ITEM219";
			}
			break;
		case 179:
			if (bParam1)
			{
				return "CSHOP_TITLE220";
			}
			else
			{
				return "CSHOP_ITEM220";
			}
			break;
		case 180:
			if (bParam1)
			{
				return "CSHOP_TITLE221";
			}
			else
			{
				return "CSHOP_ITEM221";
			}
			break;
		case 181:
			if (bParam1)
			{
				return "CSHOP_TITLE222";
			}
			else
			{
				return "CSHOP_ITEM222";
			}
			break;
		case 182:
			if (bParam1)
			{
				return "CSHOP_TITLE223";
			}
			else
			{
				return "CSHOP_ITEM223";
			}
			break;
		case 183:
			if (bParam1)
			{
				return "CSHOP_TITLE224";
			}
			else
			{
				return "CSHOP_ITEM224";
			}
			break;
		case 184:
			if (bParam1)
			{
				return "CSHOP_TITLE225";
			}
			else
			{
				return "CSHOP_ITEM225";
			}
			break;
		case 185:
			if (bParam1)
			{
				return "CSHOP_TITLE226";
			}
			else
			{
				return "CSHOP_ITEM226";
			}
			break;
		case 186:
			if (bParam1)
			{
				return "CSHOP_TITLE227";
			}
			else
			{
				return "CSHOP_ITEM227";
			}
			break;
		case 187:
			if (bParam1)
			{
				return "CSHOP_TITLE228";
			}
			else
			{
				return "CSHOP_ITEM228";
			}
			break;
		case 188:
			if (bParam1)
			{
				return "CSHOP_TITLE229";
			}
			else
			{
				return "CSHOP_ITEM229";
			}
			break;
	}
	switch (iParam0)
	{
		case 189:
			if (bParam1)
			{
				return "CSHOP_TITLE230";
			}
			else
			{
				return "CSHOP_ITEM230";
			}
			break;
		case 190:
			if (bParam1)
			{
				return "CSHOP_TITLE231";
			}
			else
			{
				return "CSHOP_ITEM231";
			}
			break;
		case 191:
			if (bParam1)
			{
				return "CSHOP_TITLE232";
			}
			else
			{
				return "CSHOP_ITEM232";
			}
			break;
		case 192:
			if (bParam1)
			{
				return "CSHOP_TITLE233";
			}
			else
			{
				return "CSHOP_ITEM233";
			}
			break;
		case 193:
			if (bParam1)
			{
				return "CSHOP_TITLE234";
			}
			else
			{
				return "CSHOP_ITEM234";
			}
			break;
		case 194:
			if (bParam1)
			{
				return "CSHOP_TITLE235";
			}
			else
			{
				return "CSHOP_ITEM235";
			}
			break;
		case 195:
			if (bParam1)
			{
				return "CSHOP_TITLE236";
			}
			else
			{
				return "CSHOP_ITEM236";
			}
			break;
		case 196:
			if (__LIB_1__::func_334(PLAYER::PLAYER_ID()))
			{
				if (bParam1)
				{
					return "CSHOPTITLECA237";
				}
				else
				{
					return "CSHOPITEMCA237";
				}
			}
			else if (bParam1)
			{
				return "CSHOP_TITLE237";
			}
			else
			{
				return "CSHOP_ITEM237";
			}
			break;
		case 197:
			if (bParam1)
			{
				return "CSHOP_TITLE238";
			}
			else
			{
				return "CSHOP_ITEM238";
			}
			break;
		case 198:
			if (bParam1)
			{
				return "CSHOP_TITLE239";
			}
			else
			{
				return "CSHOP_ITEM239";
			}
			break;
		case 199:
			if (bParam1)
			{
				return "CSHOP_TITLE240";
			}
			else
			{
				return "CSHOP_ITEM240";
			}
			break;
		case 200:
			if (bParam1)
			{
				return "CSHOP_TITLE241";
			}
			else
			{
				return "CSHOP_ITEM241";
			}
			break;
		case 201:
			if (bParam1)
			{
				return "CSHOP_TITLE242";
			}
			else
			{
				return "CSHOP_ITEM242";
			}
			break;
		case 202:
			if (bParam1)
			{
				return "CSHOP_TITLE243";
			}
			else
			{
				return "CSHOP_ITEM243";
			}
			break;
		case 203:
			if (bParam1)
			{
				return "CSHOP_TITLE244";
			}
			else
			{
				return "CSHOP_ITEM244";
			}
			break;
		case 204:
			if (bParam1)
			{
				return "CSHOP_TITLE245";
			}
			else
			{
				return "CSHOP_ITEM245";
			}
			break;
		case 205:
			if (bParam1)
			{
				return "CSHOP_TITLE246";
			}
			else
			{
				return "CSHOP_ITEM246";
			}
			break;
		case 206:
			if (bParam1)
			{
				return "CSHOP_TITLE247";
			}
			else
			{
				return "CSHOP_ITEM247";
			}
			break;
		case 207:
			if (bParam1)
			{
				return "CSHOP_TITLE248";
			}
			else
			{
				return "CSHOP_ITEM248";
			}
			break;
		case 210:
			if (bParam1)
			{
				return "CSHOP_TITLE249";
			}
			else
			{
				return "CSHOP_ITEM249";
			}
			break;
		case 209:
			if (bParam1)
			{
				return "CSHOP_TITLE250";
			}
			else
			{
				return "CSHOP_ITEM250";
			}
			break;
		case 208:
			if (bParam1)
			{
				return "CSHOP_TITLE251";
			}
			else
			{
				return "CSHOP_ITEM251";
			}
			break;
		case 211:
			if (bParam1)
			{
				return "CSHOP_TITLE252";
			}
			else
			{
				return "CSHOP_ITEM252";
			}
			break;
		case 212:
			if (bParam1)
			{
				return "CSHOP_TITLE253";
			}
			else
			{
				return "CSHOP_ITEM253";
			}
			break;
		case 213:
			if (bParam1)
			{
				return "CSHOP_TITLE254";
			}
			else
			{
				return "CSHOP_ITEM254";
			}
			break;
		case 214:
			if (bParam1)
			{
				return "CSHOP_TITLE255";
			}
			else
			{
				return "CSHOP_ITEM255";
			}
			break;
		case 215:
			if (bParam1)
			{
				return "CSHOP_TITLE256";
			}
			else
			{
				return "CSHOP_ITEM256";
			}
			break;
		case 216:
			if (bParam1)
			{
				return "CSHOP_TITLE257";
			}
			else
			{
				return "CSHOP_ITEM257";
			}
			break;
		case 217:
			if (bParam1)
			{
				return "CSHOP_TITLE258";
			}
			else
			{
				return "CSHOP_ITEM258";
			}
			break;
		case 218:
			if (bParam1)
			{
				return "CSHOP_TITLE259";
			}
			else
			{
				return "CSHOP_ITEM259";
			}
			break;
		case 219:
			if (bParam1)
			{
				return "CSHOP_TITLE260";
			}
			else
			{
				return "CSHOP_ITEM260";
			}
			break;
		case 220:
			if (bParam1)
			{
				return "CSHOP_TITLE261";
			}
			else
			{
				return "CSHOP_ITEM261";
			}
			break;
		case 221:
			if (bParam1)
			{
				return "CSHOP_TITLE262";
			}
			else
			{
				return "CSHOP_ITEM262";
			}
			break;
		case 222:
			if (bParam1)
			{
				return "CSHOP_TITLE263";
			}
			else
			{
				return "CSHOP_ITEM263";
			}
			break;
		case 223:
			if (bParam1)
			{
				return "CSHOP_TITLE264";
			}
			else
			{
				return "CSHOP_ITEM264";
			}
			break;
		case 224:
			if (bParam1)
			{
				return "CSHOP_TITLE265";
			}
			else
			{
				return "CSHOP_ITEM265";
			}
			break;
		case 225:
			if (bParam1)
			{
				return "CSHOP_TITLE266";
			}
			else
			{
				return "CSHOP_ITEM266";
			}
			break;
		case 226:
			if (bParam1)
			{
				return "CSHOP_TITLE267";
			}
			else
			{
				return "CSHOP_ITEM267";
			}
			break;
		case 227:
			if (bParam1)
			{
				return "CSHOP_TITLE268";
			}
			else
			{
				return "CSHOP_ITEM268";
			}
			break;
		case 228:
			if (bParam1)
			{
				return "CSHOP_TITLE269";
			}
			else
			{
				return "CSHOP_ITEM269";
			}
			break;
		case 229:
			if (bParam1)
			{
				return "CSHOP_TITLE270";
			}
			else
			{
				return "CSHOP_ITEM270";
			}
			break;
		case 230:
			if (bParam1)
			{
				return "CSHOP_TITLE271";
			}
			else
			{
				return "CSHOP_ITEM271";
			}
			break;
		case 231:
			if (bParam1)
			{
				return "CSHOP_TITLE272";
			}
			else
			{
				return "CSHOP_ITEM272";
			}
			break;
		case 232:
			if (bParam1)
			{
				return "CSHOP_TITLE273";
			}
			else
			{
				return "CSHOP_ITEM273";
			}
			break;
		case 233:
			if (bParam1)
			{
				return "CSHOP_TITLE274";
			}
			else
			{
				return "CSHOP_ITEM274";
			}
			break;
		case 234:
			if (bParam1)
			{
				return "CSHOP_TITLE275";
			}
			else
			{
				return "CSHOP_ITEM275";
			}
			break;
		case 235:
			if (bParam1)
			{
				return "CSHOP_TITLE276";
			}
			else
			{
				return "CSHOP_ITEM276";
			}
			break;
		case 236:
			if (bParam1)
			{
				return "CSHOP_TITLE277";
			}
			else
			{
				return "CSHOP_ITEM277";
			}
			break;
		case 237:
			if (bParam1)
			{
				return "CSHOP_TITLE278";
			}
			else
			{
				return "CSHOP_ITEM278";
			}
			break;
		case 238:
			if (bParam1)
			{
				return "CSHOP_TITLE279";
			}
			else
			{
				return "CSHOP_ITEM279";
			}
			break;
		case 239:
			if (bParam1)
			{
				return "CSHOP_TITLE280";
			}
			else
			{
				return "CSHOP_ITEM280";
			}
			break;
		case 247:
			if (bParam1)
			{
				return "CSHOP_TITLE281";
			}
			else
			{
				return "CSHOP_ITEM281" /* GXT: Outfits: Vinewood */;
			}
			break;
		case 248:
			if (bParam1)
			{
				if (__LIB_1__::func_334(PLAYER::PLAYER_ID()) && !bParam3)
				{
					return "CSHOP_TITLE3";
				}
				return "CSHOP_TITLE282";
			}
			else
			{
				if (__LIB_1__::func_334(PLAYER::PLAYER_ID()) && !bParam3)
				{
					return "CSHOP_ITEM3";
				}
				return "CSHOP_ITEM282" /* GXT: Casino T-Shirts */;
			}
			break;
		case 249:
			if (bParam1)
			{
				if (__LIB_1__::func_334(PLAYER::PLAYER_ID()) && !bParam3)
				{
					return "CSHOP_TITLE207";
				}
				return "CSHOP_TITLE283";
			}
			else
			{
				if (__LIB_1__::func_334(PLAYER::PLAYER_ID()) && !bParam3)
				{
					return "CSHOP_ITEM207";
				}
				return "CSHOP_ITEM283" /* GXT: Casino Bomber Jackets */;
			}
			break;
		case 250:
			if (bParam1)
			{
				if (__LIB_1__::func_334(PLAYER::PLAYER_ID()) && !bParam3)
				{
					return "CSHOP_TITLE247";
				}
				return "CSHOP_TITLE284";
			}
			else
			{
				if (__LIB_1__::func_334(PLAYER::PLAYER_ID()) && !bParam3)
				{
					return "CSHOP_ITEM247";
				}
				return "CSHOP_ITEM284" /* GXT: Casino Sports Jackets */;
			}
			break;
		case 251:
			if (bParam1)
			{
				if (__LIB_1__::func_334(PLAYER::PLAYER_ID()) && !bParam3)
				{
					return "CSHOP_TITLE210";
				}
				return "CSHOP_TITLE285";
			}
			else
			{
				if (__LIB_1__::func_334(PLAYER::PLAYER_ID()) && !bParam3)
				{
					return "CSHOP_ITEM210";
				}
				return "CSHOP_ITEM285" /* GXT: Casino Sweaters */;
			}
			break;
		case 252:
			if (bParam1)
			{
				if (__LIB_1__::func_334(PLAYER::PLAYER_ID()) && !bParam3)
				{
					return "CSHOP_TITLE5";
				}
				return "CSHOP_TITLE286";
			}
			else
			{
				if (__LIB_1__::func_334(PLAYER::PLAYER_ID()) && !bParam3)
				{
					return "CSHOP_ITEM5";
				}
				return "CSHOP_ITEM286" /* GXT: Casino Hoodies */;
			}
			break;
		case 253:
			if (bParam1)
			{
				return "CSHOP_TITLE287";
			}
			else
			{
				return "CSHOP_ITEM287" /* GXT: Casino Pants */;
			}
			break;
		case 254:
			if (bParam1)
			{
				return "CSHOP_TITLE288";
			}
			else
			{
				return "CSHOP_ITEM288" /* GXT: Casino Shoes */;
			}
			break;
		case 255:
			if (bParam1)
			{
				if (__LIB_1__::func_334(PLAYER::PLAYER_ID()) && !bParam3)
				{
					return "CSHOP_TITLE40";
				}
				return "CSHOP_TITLE289";
			}
			else
			{
				if (__LIB_1__::func_334(PLAYER::PLAYER_ID()) && !bParam3)
				{
					return "CSHOP_ITEM40";
				}
				return "CSHOP_ITEM289" /* GXT: Casino Hats */;
			}
			break;
		case 163:
			if (bParam1)
			{
				if (__LIB_1__::func_334(PLAYER::PLAYER_ID()) && !bParam3)
				{
					return "CSHOP_TITLE42";
				}
				return "CSHOP_TITLE290";
			}
			else
			{
				if (__LIB_1__::func_334(PLAYER::PLAYER_ID()) && !bParam3)
				{
					return "CSHOP_ITEM42";
				}
				return "CSHOP_ITEM290" /* GXT: Casino Glasses */;
			}
			break;
		case 164:
			if (bParam1)
			{
				return "CSHOP_TITLE291";
			}
			else
			{
				return "CSHOP_ITEM291" /* GXT: Special Glasses */;
			}
			break;
		case 240:
			if (bParam1)
			{
				return "CSHOP_TITLE292";
			}
			else
			{
				return "CSHOP_ITEM292";
			}
			break;
		case 241:
			if (bParam1)
			{
				return "CSHOP_TITLE293";
			}
			else
			{
				return "CSHOP_ITEM293";
			}
			break;
		case 242:
			if (bParam1)
			{
				return "CSHOP_TITLE294";
			}
			else
			{
				return "CSHOP_ITEM294";
			}
			break;
		case 162:
			if (bParam1)
			{
				return "CSHOP_TITLE295";
			}
			else
			{
				return "CSHOP_ITEM295";
			}
			break;
		case 243:
			if (bParam1)
			{
				return "CSHOP_TITLE296";
			}
			else
			{
				return "CSHOP_ITEM296";
			}
			break;
		case 244:
			if (bParam1)
			{
				return "CSHOP_TITLE297";
			}
			else
			{
				return "CSHOP_ITEM297";
			}
			break;
		case 245:
			if (bParam1)
			{
				return "CSHOP_TITLE298";
			}
			else
			{
				return "CSHOP_ITEM298";
			}
			break;
		case 246:
			if (bParam1)
			{
				return "CSHOP_TITLE299";
			}
			else
			{
				return "CSHOP_ITEM299";
			}
			break;
		case 256:
			if (bParam1)
			{
				return "CSHOP_TITLE300";
			}
			else
			{
				return "CSHOP_ITEM300";
			}
			break;
		case 257:
			if (bParam1)
			{
				return "CSHOP_TITLE301";
			}
			else
			{
				return "CSHOP_ITEM301";
			}
			break;
		case 258:
			if (bParam1)
			{
				return "CSHOP_TITLE302";
			}
			else
			{
				return "CSHOP_ITEM302";
			}
			break;
		case 259:
			if (bParam1)
			{
				return "CSHOP_TITLE303";
			}
			else
			{
				return "CSHOP_ITEM303";
			}
			break;
		case 260:
			if (bParam1)
			{
				return "CSHOP_TITLE304";
			}
			else
			{
				return "CSHOP_ITEM304";
			}
			break;
		case 261:
			if (bParam1)
			{
				return "CSHOP_TITLE305";
			}
			else
			{
				return "CSHOP_ITEM305";
			}
			break;
		case 262:
			if (bParam1)
			{
				return "CSHOP_TITLE306";
			}
			else
			{
				return "CSHOP_ITEM306";
			}
			break;
		case 265:
			if (bParam1)
			{
				return "CSHOP_TITLE309";
			}
			else
			{
				return "CSHOP_ITEM309";
			}
			break;
		case 266:
			if (bParam1)
			{
				return "CSHOP_TITLE310";
			}
			else
			{
				return "CSHOP_ITEM310";
			}
			break;
		case 267:
			if (bParam1)
			{
				return "CSHOP_TITLE311";
			}
			else
			{
				return "CSHOP_ITEM311";
			}
			break;
		case 268:
			if (bParam1)
			{
				return "CSHOP_TITLE312";
			}
			else
			{
				return "CSHOP_ITEM312";
			}
			break;
		case 269:
			if (bParam1)
			{
				return "CSHOP_TITLE313";
			}
			else
			{
				return "CSHOP_ITEM313";
			}
			break;
		case 270:
			if (bParam1)
			{
				return "CSHOP_TITLE314";
			}
			else
			{
				return "CSHOP_ITEM314";
			}
			break;
		case 271:
			if (bParam1)
			{
				return "CSHOP_TITLE315";
			}
			else
			{
				return "CSHOP_ITEM315";
			}
			break;
		case 272:
			if (bParam1)
			{
				return "CSHOP_TITLE316";
			}
			else
			{
				return "CSHOP_ITEM316";
			}
			break;
	}
	return "INVALID_MENU";
}

int func_574(int iParam0)//Position - 0x63FA1
{
	if (iParam0 != 78)
	{
		return 0;
	}
	if (__LIB_1__::func_334(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (!__LIB_37__::func_269())
	{
		return 0;
	}
	if (!func_577(PLAYER::PLAYER_ID(), 0))
	{
		return 0;
	}
	if (func_575(0) != 0)
	{
		return 0;
	}
	return 1;
}

int func_575(bool bParam0)//Position - 0x63FFA
{
	if (bParam0)
	{
		return __LIB_0__::func_534(8527, -1, 0);
	}
	return __LIB_11__::func_411(PLAYER::PLAYER_ID());
}

int func_577(int iParam0, bool bParam1)//Position - 0x6403A
{
	int iVar0;
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return func_579(bParam1) != 0;
		}
		else
		{
			return __LIB_3__::func_689(iParam0) != 0;
		}
	}
	return 0;
}

int func_579(bool bParam0)//Position - 0x6408D
{
	if (bParam0)
	{
		return __LIB_0__::func_534(8530, -1, 0);
	}
	return __LIB_3__::func_689(PLAYER::PLAYER_ID());
}

void func_582(var uParam0)//Position - 0x641B5
{
	int iVar0;
	struct<14> Var1;
	if (__LIB_20__::func_554(1))
	{
		iVar0 = ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());
		Stack.Push(iVar0);
		Stack.Push(Global_4537616.f_126[uParam0->f_116.f_1]);
		Stack.Push(Global_4537616[uParam0->f_116.f_1]);
		Stack.Push(-1);
		Call_Loc(uParam0->f_484);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal };
		uParam0->f_116.f_2 = func_567(uParam0, &Var1, iVar0, Global_4537616[uParam0->f_116.f_1], 1);
		__LIB_10__::func_88(Var1.f_8, uParam0->f_116.f_2, 0, 1, 0, 0);
	}
}

void func_584(var uParam0, int iParam1)//Position - 0x64259
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	iVar0 = 0;
	__LIB_11__::func_412(&(uParam0->f_236), 300);
	if (!PED::IS_PED_INJURED(iParam1))
	{
		uParam0->f_116.f_15 = 0;
		__LIB_7__::func_287(0, 0, 0, 1);
		if (__LIB_2__::func_157())
		{
			if (Global_4539961 == uParam0->f_715)
			{
				iVar0 = 1;
			}
			else if (BitTest(uParam0->f_716[(Global_4539961 / 32)], (Global_4539961 % 32)))
			{
				uParam0->f_715 = Global_4539961;
				__LIB_2__::func_183(Global_4539961, 1, 1);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			}
		}
		if (((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/) || (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/) && uParam0->f_236.f_8)) || (uParam0->f_236.f_1 < -100 && uParam0->f_236.f_4)) || __LIB_10__::func_374(uParam0->f_236.f_8, 0, 0))
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
				__LIB_2__::func_183(uParam0->f_715, 1, 1);
			}
		}
		else if (((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/) || (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/) && uParam0->f_236.f_9)) || (uParam0->f_236.f_1 > 100 && uParam0->f_236.f_4)) || __LIB_10__::func_373(uParam0->f_236.f_9, 0, 0))
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
				__LIB_2__::func_183(uParam0->f_715, 1, 1);
			}
		}
		else if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) || iVar0 == 1)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT" /* GXT: Filter List */, "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			uParam0->f_525 = 1;
			uParam0->f_590 = 1;
			func_406(&(uParam0->f_485), &Global_4537616, 1, __LIB_29__::func_540(uParam0), uParam0->f_715, &(uParam0->f_716), &(uParam0->f_719));
		}
		else if ((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/)) || __LIB_2__::func_338())
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "CANCEL", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			uParam0->f_116.f_15 = 0;
			uParam0->f_116.f_23 = 0;
			uParam0->f_116.f_22 = 0;
			if (__LIB_29__::func_533() || __LIB_29__::func_532())
			{
				uParam0->f_525 = 0;
				uParam0->f_116.f_1 = 0;
				uParam0->f_590 = 1;
				func_784(uParam0, iParam1);
			}
			else
			{
				uParam0->f_116.f_31 = 6;
				uParam0->f_116.f_5 = 0;
			}
		}
	}
}

void func_585(var uParam0, int iParam1)//Position - 0x645DF
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	__LIB_11__::func_412(&(uParam0->f_236), 300);
	iVar1 = 0;
	if (__LIB_29__::func_533())
	{
		iVar1++;
	}
	if (__LIB_29__::func_532())
	{
		iVar1++;
	}
	if (!PED::IS_PED_INJURED(iParam1))
	{
		uParam0->f_116.f_15 = 0;
		__LIB_7__::func_287(0, 0, 0, 1);
		if (__LIB_2__::func_157())
		{
			if (Global_4539961 == uParam0->f_116.f_1)
			{
				iVar0 = 1;
			}
			else
			{
				uParam0->f_116.f_1 = Global_4539961;
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				__LIB_2__::func_183(uParam0->f_116.f_1, 1, 1);
			}
		}
		if (((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/) || (uParam0->f_236.f_1 < -100 && uParam0->f_236.f_4)) || (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/) && uParam0->f_236.f_8)) || __LIB_10__::func_374(uParam0->f_236.f_8, 0, 0))
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
			__LIB_2__::func_183(uParam0->f_116.f_1, 1, 1);
		}
		else if (((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/) || (uParam0->f_236.f_1 > 100 && uParam0->f_236.f_4)) || (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/) && uParam0->f_236.f_9)) || __LIB_10__::func_373(uParam0->f_236.f_9, 0, 0))
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
			__LIB_2__::func_183(uParam0->f_116.f_1, 1, 1);
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
				func_406(&(uParam0->f_485), &Global_4537616, 1, __LIB_29__::func_540(uParam0), uParam0->f_715, &(uParam0->f_716), &(uParam0->f_719));
			}
			else if (uParam0->f_116.f_1 == 1)
			{
				if (__LIB_29__::func_533())
				{
					uParam0->f_525 = 2;
					if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						func_406(&(uParam0->f_485), &Global_4537616, 0, __LIB_29__::func_540(uParam0), uParam0->f_715, &(uParam0->f_716), &(uParam0->f_719));
					}
				}
				else if (__LIB_29__::func_532())
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
		else if ((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/)) || __LIB_2__::func_338())
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

void func_589(int iParam0)//Position - 0x64B06
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (Global_78319)
		{
			func_593(&iParam0, -1, 0, 0);
		}
		else
		{
			__LIB_37__::func_270(iParam0);
		}
	}
}

void func_593(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x64C2C
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
	iVar1 = __LIB_0__::func_250(*iParam0);
	bVar2 = func_222(*iParam0, 0);
	bVar3 = __LIB_31__::func_887(*iParam0);
	bVar4 = func_213(*iParam0, -1);
	if (!bParam2)
	{
		if (func_273(*iParam0))
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
		if (__LIB_18__::func_432(iVar5, iParam1))
		{
			if (__LIB_6__::func_785(&Var0, iVar5, iVar1, *iParam0, -1))
			{
				if (__LIB_25__::func_69(*iParam0, &Var0, iVar5, Var0.f_4, Var0.f_8, bVar2, bVar3, bParam2, bVar4))
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
	if (__LIB_18__::func_432(123, -1))
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
				if (__LIB_18__::func_432(iVar9, iParam1))
				{
					if (__LIB_25__::func_69(*iParam0, &(Var8.f_7), iVar9, Var8.f_2, Var8.f_6, bVar2, bVar3, bParam2, bVar4))
					{
						if (!bParam3)
						{
							PED::ADD_PED_DECORATION_FROM_HASHES(*iParam0, Var8.f_2, Var8.f_3);
							__LIB_0__::func_235(*iParam0, Var8.f_2, Var8.f_3);
						}
					}
				}
			}
		}
		iVar6++;
	}
}

void func_595(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x64DF7
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_0__::func_226(iParam0);
	if (iVar0 != -1)
	{
		__LIB_29__::func_515(iParam0, &iParam2);
		iVar1 = __LIB_29__::func_524(iParam1, iParam2);
		__LIB_0__::func_427(iVar0, iVar1, iParam3, bParam4, 0);
	}
}

int func_638(int iParam0, int iParam1, var uParam2)//Position - 0x7D33E
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
			iVar0 = __LIB_0__::func_228(385, -1);
			if ((!Global_102961 || (iParam0 == joaat("MP_M_Freemode_01") && !iVar0 >= 91)) || (iParam0 == joaat("MP_F_Freemode_01") && !iVar0 >= 92))
			{
				if (iVar0 != -99)
				{
					iVar1 = -99;
					if (iParam0 == joaat("MP_M_Freemode_01"))
					{
						iVar1 = __LIB_18__::func_181(iVar0);
					}
					else if (iParam0 == joaat("MP_F_Freemode_01"))
					{
						iVar1 = __LIB_18__::func_186(iVar0);
					}
					if (iVar1 != -99 && iVar0 != iVar1)
					{
						iVar0 = iVar1;
					}
				}
			}
			if (iParam1->f_8 == iVar0)
			{
				if (!__LIB_37__::func_267(uParam2, iParam0))
				{
					return 1;
				}
				if (uParam2->f_634 == __LIB_0__::func_534(2153, -1, 0) && uParam2->f_635 == __LIB_0__::func_534(2160, -1, 0))
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
			iVar3 = __LIB_0__::func_230(iParam1->f_5);
			iVar4 = -99;
			if (iParam1->f_5 == 10)
			{
				if (iVar3 != -1 && __LIB_0__::func_228(iVar3, -1) == 17)
				{
					__LIB_0__::func_353(iVar3, 16, -1);
					iVar4 = 16;
				}
			}
			if (iVar3 != -1 && (iVar2 == __LIB_0__::func_228(iVar3, -1) || iVar2 == iVar4))
			{
				if (iParam1->f_5 == 4 && iVar2 == 255)
				{
					iVar5 = __LIB_0__::func_230(5);
					if (iVar5 != -1)
					{
						if (__LIB_0__::func_228(iVar5, -1) >= 7 && __LIB_0__::func_228(iVar5, -1) < 33)
						{
							return 0;
						}
					}
				}
				if (!__LIB_37__::func_267(uParam2, iParam0))
				{
					return 1;
				}
				iVar6 = func_482(iParam1->f_5, &(uParam2->f_637), -1);
				iVar7 = __LIB_0__::func_225(iParam1->f_5);
				iVar8 = __LIB_0__::func_229(iParam1->f_5);
				if (iVar8 != -1)
				{
					if (uParam2->f_639 != __LIB_0__::func_424(iVar8, -1) && uParam2->f_639 == 0f)
					{
						uParam2->f_639 = __LIB_0__::func_424(iVar8, -1);
					}
				}
				if (((iVar6 == -1 || uParam2->f_634 == iVar6) && (iVar7 == -1 || uParam2->f_635 == __LIB_0__::func_534(iVar7, -1, 0))) && (iVar8 == -1 || uParam2->f_639 == __LIB_0__::func_424(iVar8, -1)))
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
			if (iParam1->f_6 == SYSTEM::ROUND(__LIB_0__::func_424(157, -1)))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_648(int iParam0, float fParam1, int iParam2, bool bParam3)//Position - 0x83777
{
	int iVar0;
	if (__LIB_0__::func_354())
	{
		iVar0 = Global_2866176[iParam0 /*3*/][__LIB_0__::func_330(iParam2)];
		if (iVar0 != 0)
		{
			STATS::STAT_SET_FLOAT(iVar0, fParam1, bParam3);
		}
	}
}

void func_649(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, int iParam7)//Position - 0x837A9
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
		__LIB_29__::func_515(iParam1, &iParam5);
		if (iParam5 == 1)
		{
		}
		PED::SET_PED_HEAD_OVERLAY(iParam0, iParam1, iParam2, fParam6);
		if (iParam5 != 0)
		{
			if (iParam3 == -1)
			{
				iParam3 = func_482(iParam1, &iParam5, -1);
				if ((iParam1 == 5 && iParam2 != -1) && iParam3 == -1)
				{
					iParam3 = 0;
				}
			}
			if (iParam4 == -1)
			{
				iParam4 = func_500(iParam1, -1);
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

void func_669(var uParam0)//Position - 0x83E64
{
	int iVar0;
	struct<12> Var1;
	int iVar2;
	bool bVar3;
	struct<10> Var4;
	if (__LIB_20__::func_554(1))
	{
		if (Global_78319)
		{
			if (uParam0->f_525 == 2)
			{
			}
			else if (uParam0->f_525 == 1)
			{
				func_763(27, 1, -1);
				if (uParam0->f_116.f_2 > 0)
				{
					__LIB_7__::func_57(joaat("MPPLY_INGAMESTORE_MONEYSPENT"), uParam0->f_116.f_2);
				}
				func_758(Global_4537616[uParam0->f_116.f_1]);
				Stack.Push(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()));
				Stack.Push(Global_4537616.f_126[uParam0->f_116.f_1]);
				Stack.Push(Global_4537616[uParam0->f_116.f_1]);
				Stack.Push(1);
				Stack.Push(1);
				Call_Loc(uParam0->f_482);
				iVar0 = MISC::GET_HASH_KEY(&(uParam0->f_566));
				if (((((((((iVar0 == joaat("CLO_IND_H_0_0") || iVar0 == joaat("CLO_IND_H_0_1")) || iVar0 == joaat("CLO_IND_H_0_2")) || iVar0 == joaat("CLO_IND_H_0_3")) || iVar0 == joaat("CLO_IND_H_0_4")) || iVar0 == joaat("CLO_INDF_H_0_0")) || iVar0 == joaat("CLO_INDF_H_0_1")) || iVar0 == joaat("CLO_INDF_H_0_2")) || iVar0 == joaat("CLO_INDF_H_0_3")) || iVar0 == joaat("CLO_INDF_H_0_4"))
				{
					__LIB_0__::func_521(3606, 1, -1);
				}
				else if ((((iVar0 == joaat("CLO_VALF_H_0_0") || iVar0 == joaat("CLO_VALF_H_0_1")) || iVar0 == joaat("CLO_VALF_H_0_2")) || iVar0 == joaat("CLO_VALF_H_0_3")) || iVar0 == joaat("CLO_VALF_H_0_4"))
				{
					__LIB_0__::func_521(4246, 1, -1);
				}
				uParam0->f_501 = 1;
			}
			else if (uParam0->f_525 == 3)
			{
				uParam0->f_501 = 1;
			}
			else if (__LIB_29__::func_531(uParam0->f_525))
			{
				if (__LIB_39__::func_370(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), uParam0->f_525, uParam0->f_116.f_1, &Var1, __LIB_29__::func_528(uParam0->f_523)))
				{
					if (Var1.f_9 == 0)
					{
						func_763(27, 1, -1);
						if (uParam0->f_116.f_2 > 0)
						{
							__LIB_7__::func_57(joaat("MPPLY_INGAMESTORE_MONEYSPENT"), uParam0->f_116.f_2);
						}
						func_758(Global_4537616[uParam0->f_116.f_1]);
						Stack.Push(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()));
						Stack.Push(Global_4537616.f_126[uParam0->f_116.f_1]);
						Stack.Push(Global_4537616[uParam0->f_116.f_1]);
						Stack.Push(1);
						Stack.Push(1);
						Call_Loc(uParam0->f_482);
						if (Var1.f_11 == 1271240597 || Var1.f_11 == -1827014795)
						{
							__LIB_0__::func_521(3606, 1, -1);
						}
						else if (Var1.f_11 == 914374215)
						{
							__LIB_0__::func_521(4246, 1, -1);
						}
						uParam0->f_501 = 1;
					}
					else if (Var1.f_9 == 1 || Var1.f_9 == 2)
					{
						if (((uParam0->f_525 == 11 || uParam0->f_525 == 13) || uParam0->f_525 == 14) || uParam0->f_525 == 15)
						{
							if (Var1.f_11 == 1397114629 || Var1.f_11 == -1384887359)
							{
								__LIB_0__::func_521(3607, 1, -1);
							}
							if (Var1.f_11 == 1034427337 || Var1.f_11 == 689718031)
							{
								__LIB_0__::func_521(4270, 1, -1);
							}
							else if (Var1.f_11 == 773946556 || Var1.f_11 == 1188920977)
							{
								__LIB_0__::func_521(4271, 1, -1);
							}
							else if (Var1.f_11 == 332646433 || Var1.f_11 == 1425414854)
							{
								__LIB_0__::func_521(4272, 1, -1);
							}
							else if (Var1.f_11 == 101002372 || Var1.f_11 == 1680914747)
							{
								__LIB_0__::func_521(4273, 1, -1);
							}
							else if (Var1.f_11 == -259915394 || Var1.f_11 == -1397044638)
							{
								__LIB_0__::func_521(4274, 1, -1);
							}
							else if (Var1.f_11 == -491231765 || Var1.f_11 == -1202658930)
							{
								__LIB_0__::func_521(4275, 1, -1);
							}
							else if (Var1.f_11 == 1624727807 || Var1.f_11 == -2077294849)
							{
								__LIB_0__::func_521(4276, 1, -1);
							}
							else if (Var1.f_11 == 1920336964 || Var1.f_11 == 1871566269)
							{
								__LIB_0__::func_521(4277, 1, -1);
							}
							else if (Var1.f_11 == -1998999285 || Var1.f_11 == -638735717)
							{
								__LIB_0__::func_521(4278, 1, -1);
							}
							else if (Var1.f_11 == -1691200068 || Var1.f_11 == -885912284)
							{
								__LIB_0__::func_521(4279, 1, -1);
							}
							else if (Var1.f_11 == -1249146258 || Var1.f_11 == 911795056)
							{
								__LIB_0__::func_521(4280, 1, -1);
							}
							else if (Var1.f_11 == -942723339 || Var1.f_11 == 680937451)
							{
								__LIB_0__::func_521(4281, 1, -1);
							}
							else if (Var1.f_11 == -693318480 || Var1.f_11 == -1507671294)
							{
								__LIB_0__::func_521(4282, 1, -1);
							}
							else if (Var1.f_11 == -465836082 || Var1.f_11 == -1734596619)
							{
								__LIB_0__::func_521(4283, 1, -1);
							}
							else if (Var1.f_11 == -214792773 || Var1.f_11 == -1832969157)
							{
								__LIB_0__::func_521(4284, 1, -1);
							}
							else if (Var1.f_11 == 209893467 || Var1.f_11 == -53415839)
							{
								__LIB_0__::func_521(4285, 1, -1);
							}
							else if (Var1.f_11 == -163640692 || Var1.f_11 == 646954998)
							{
								__LIB_0__::func_521(4286, 1, -1);
							}
							else if (Var1.f_11 == 2012777989 || Var1.f_11 == -404995440)
							{
								__LIB_0__::func_521(4287, 1, -1);
							}
							else if (Var1.f_11 == 1782084221 || Var1.f_11 == -92411949)
							{
								__LIB_0__::func_521(4288, 1, -1);
							}
							else if (Var1.f_11 == 1532613824 || Var1.f_11 == -894465993)
							{
								__LIB_0__::func_521(4289, 1, -1);
							}
							else if (Var1.f_11 == 1318894406 || Var1.f_11 == 1287195724)
							{
								__LIB_0__::func_521(4290, 1, -1);
							}
							else if (Var1.f_11 == -818529153 || Var1.f_11 == 790876446)
							{
								__LIB_0__::func_521(4291, 1, -1);
							}
							else if (Var1.f_11 == -1578376725 || Var1.f_11 == 1070035557)
							{
								__LIB_0__::func_521(4292, 1, -1);
							}
							else if (Var1.f_11 == -1832828010 || Var1.f_11 == 301242048)
							{
								__LIB_0__::func_521(4293, 1, -1);
							}
							else if (Var1.f_11 == -2072074479 || Var1.f_11 == 1741013601)
							{
								__LIB_0__::func_521(4294, 1, -1);
							}
							else if (Var1.f_11 == 107719401 || Var1.f_11 == 2044421772)
							{
								__LIB_0__::func_521(4295, 1, -1);
							}
							else if (Var1.f_11 == 1090494188 || Var1.f_11 == -1643561644)
							{
								__LIB_0__::func_521(4296, 1, -1);
							}
							else if (Var1.f_11 == -1065738777 || Var1.f_11 == -2018242390)
							{
								__LIB_0__::func_521(4297, 1, -1);
							}
							else if (Var1.f_11 == -841762662 || Var1.f_11 == 561169449)
							{
								__LIB_0__::func_521(4298, 1, -1);
							}
							else if (Var1.f_11 == -1694870808 || Var1.f_11 == 444970575)
							{
								__LIB_0__::func_521(4299, 1, -1);
							}
						}
						if (uParam0->f_525 == 11 && uParam0->f_116.f_1 == 0)
						{
							iVar2 = __LIB_0__::func_230(5);
							if (iVar2 != -1)
							{
								if (__LIB_0__::func_228(iVar2, -1) >= 7 && __LIB_0__::func_228(iVar2, -1) < 33)
								{
									__LIB_0__::func_353(iVar2, 255, -1);
								}
							}
						}
						uParam0->f_501 = 1;
					}
					if (Var1.f_10 != -1)
					{
						func_757(Var1.f_10, 1);
					}
				}
				uParam0->f_501 = 1;
			}
		}
		else
		{
			if (uParam0->f_116.f_2 > 0)
			{
				__LIB_42__::func_569(__LIB_20__::func_728(), __LIB_10__::func_61(*uParam0), uParam0->f_116.f_2);
			}
			bVar3 = __LIB_20__::func_728();
			if (uParam0->f_525 == 1)
			{
				__LIB_37__::func_271();
				if (__LIB_0__::func_573(6, 0))
				{
					if (bVar3 == 1)
					{
						__LIB_9__::func_989(6, 1, 1);
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
		func_671(*uParam0, 1, 4, 0);
		if (__LIB_0__::func_112())
		{
			__LIB_18__::func_226(__LIB_2__::func_345());
		}
		if (uParam0->f_525 == 1)
		{
			uParam0->f_272 = Global_4537616[uParam0->f_116.f_1];
		}
		else if (uParam0->f_525 == 2)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				uParam0->f_273 = __LIB_34__::func_774(uParam0->f_116.f_1);
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
		else if (__LIB_29__::func_531(uParam0->f_525))
		{
			if (__LIB_39__::func_370(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), uParam0->f_525, uParam0->f_116.f_1, &Var4, __LIB_29__::func_528(uParam0->f_523)))
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
		__LIB_0__::func_181(136, 1);
	}
}

void func_671(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x8489A
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	if (bParam1)
	{
		if (!__LIB_6__::func_837(iParam0, 3, 0))
		{
			__LIB_20__::func_271(iParam0, 3, 0);
		}
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			switch (__LIB_0__::func_299(iParam0))
			{
				case 4:
					__LIB_24__::func_943(305, 0, 0);
					break;
				case 1:
					__LIB_24__::func_943(304, 0, 0);
					break;
				case 3:
					__LIB_24__::func_943(308, 0, 0);
					break;
				case 0:
					__LIB_24__::func_943(306, 0, 0);
					break;
				case 2:
					__LIB_24__::func_943(307, 0, 0);
					break;
				}
		}
		if (Global_100493.f_1388 >= 0)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				bVar0 = true;
				if (iParam2 == 4)
				{
					if (__LIB_18__::func_208(0))
					{
						__LIB_18__::func_207(0);
						bVar0 = false;
					}
				}
				if (iParam2 == 6)
				{
					if (__LIB_18__::func_208(1))
					{
						__LIB_18__::func_207(1);
						bVar0 = false;
					}
				}
				if (bVar0)
				{
					bVar1 = MONEY::NETWORK_GET_VC_BANK_BALANCE() > 0;
					bVar2 = MONEY::NETWORK_GET_VC_BANK_BALANCE() < Global_100493.f_1388;
					if ((NETWORK::NETWORK_IS_ACTIVITY_SESSION() && Global_4718592 == 0) || __LIB_7__::func_113(PLAYER::PLAYER_ID()) == 11)
					{
						if (iParam2 == 11)
						{
							MISC::SET_BIT(&Global_1574989, 0);
						}
					}
					if (__LIB_0__::func_112())
					{
						if (__LIB_1__::func_375(__LIB_2__::func_345()) > 0)
						{
							NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(__LIB_1__::func_375(__LIB_2__::func_345()));
						}
					}
					if (iParam0 == 45 && iParam3 == 18)
					{
						func_674(13, -1, -1, MISC::GET_HASH_KEY(&(Global_100493.f_1384)), 1065353216);
						func_674(3, -1, -1, MISC::GET_HASH_KEY(&(Global_100493.f_1384)), 1065353216);
					}
					if (iParam0 == 55 && __LIB_2__::func_102(PLAYER::PLAYER_ID()))
					{
						func_674(31, -1, -1, MISC::GET_HASH_KEY(&(Global_100493.f_1384)), 1065353216);
					}
					if (Global_100493.f_1392)
					{
						MONEY::NETWORK_SPEND_SET_DISCOUNT(true);
					}
					else
					{
						MONEY::NETWORK_SPEND_SET_DISCOUNT(false);
					}
					if (iParam2 == 1 && Global_100493.f_1389 == -61829581)
					{
						MONEY::NETWORK_BUY_ITEM(Global_100493.f_1388, MISC::GET_HASH_KEY(&(Global_100493.f_1384)), 17, Global_100493.f_1390, bVar1, &(Global_100493.f_1384), MISC::GET_HASH_KEY(__LIB_9__::func_422(iParam0, iParam3, 1)), Global_100493.f_1389, Global_100493.f_1391, bVar2);
					}
					else if (((iParam2 == 0 || iParam2 == 7) || iParam2 == 9) || iParam2 == 11)
					{
						MONEY::NETWORK_BUY_ITEM(Global_100493.f_1388, Global_100493.f_1389, iParam2, Global_100493.f_1390, bVar1, &(Global_100493.f_1384), MISC::GET_HASH_KEY(__LIB_9__::func_422(iParam0, iParam3, 1)), Global_100493.f_1389, Global_100493.f_1391, bVar2);
					}
					else if ((((iParam2 == 1 || iParam2 == 2) || iParam2 == 8) || iParam2 == 16) || iParam2 == 15)
					{
						MONEY::NETWORK_BUY_ITEM(Global_100493.f_1388, Global_100493.f_1389, iParam2, Global_100493.f_1390, bVar1, &(Global_100493.f_1384), MISC::GET_HASH_KEY(__LIB_9__::func_422(iParam0, iParam3, 1)), Global_100493.f_1389, Global_100493.f_1391, bVar2);
					}
					else
					{
						MONEY::NETWORK_BUY_ITEM(Global_100493.f_1388, MISC::GET_HASH_KEY(&(Global_100493.f_1384)), iParam2, Global_100493.f_1390, bVar1, &(Global_100493.f_1384), MISC::GET_HASH_KEY(__LIB_9__::func_422(iParam0, iParam3, 1)), Global_100493.f_1389, Global_100493.f_1391, bVar2);
					}
				}
			}
			else if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_100493.f_1384)))
			{
				if (((iParam2 == 0 || iParam2 == 7) || iParam2 == 9) || iParam2 == 11)
				{
					if (Global_100493.f_1388 >= 0)
					{
						STATS::PLAYSTATS_SHOP_ITEM(MISC::GET_HASH_KEY(&(Global_100493.f_1384)), Global_100493.f_1388, MISC::GET_HASH_KEY(__LIB_9__::func_422(iParam0, iParam3, 1)), Global_100493.f_1389, Global_100493.f_1391);
					}
				}
				else if ((((iParam2 == 1 || iParam2 == 2) || iParam2 == 8) || iParam2 == 16) || iParam2 == 15)
				{
					if (Global_100493.f_1388 >= 0)
					{
						STATS::PLAYSTATS_SHOP_ITEM(MISC::GET_HASH_KEY(&(Global_100493.f_1384)), Global_100493.f_1388, MISC::GET_HASH_KEY(__LIB_9__::func_422(iParam0, iParam3, 1)), Global_100493.f_1389, Global_100493.f_1391);
					}
				}
				else if (Global_100493.f_1388 >= 0)
				{
					STATS::PLAYSTATS_SHOP_ITEM(MISC::GET_HASH_KEY(&(Global_100493.f_1384)), Global_100493.f_1388, MISC::GET_HASH_KEY(__LIB_9__::func_422(iParam0, iParam3, 1)), 0, Global_100493.f_1391);
				}
			}
		}
	}
	else if (__LIB_6__::func_837(iParam0, 3, 0))
	{
		__LIB_20__::func_270(iParam0, 3, 0);
	}
}

void func_674(int iParam0, int iParam1, int iParam2, int iParam3, float fParam4)//Position - 0x84DD3
{
	int iVar0;
	if (!__LIB_5__::func_568(iParam0))
	{
		return;
	}
	iVar0 = __LIB_5__::func_567(iParam0, iParam1, iParam2);
	if (iVar0 == -1)
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			if (!__LIB_0__::func_137(32249, -1))
			{
				__LIB_0__::func_521(32249, 1, -1);
				func_675(iVar0, iParam0, iParam3, 1065353216);
			}
			break;
		case 1:
			if (!__LIB_0__::func_137(32250, -1))
			{
				__LIB_0__::func_521(32250, 1, -1);
				func_675(iVar0, iParam0, iParam3, 1065353216);
			}
			break;
		case 2:
			if (!__LIB_0__::func_137(32251, -1))
			{
				__LIB_0__::func_521(32251, 1, -1);
				func_675(iVar0, iParam0, iParam3, 1065353216);
			}
			break;
		case 3:
			if (!__LIB_0__::func_137(32252, -1))
			{
				__LIB_0__::func_521(32252, 1, -1);
				func_675(iVar0, iParam0, iParam3, 1065353216);
			}
			break;
		case 4:
			if (!__LIB_0__::func_137(32253, -1))
			{
				__LIB_0__::func_521(32253, 1, -1);
				func_675(iVar0, iParam0, iParam3, 1065353216);
			}
			break;
		case 5:
			if (!__LIB_0__::func_137(32254, -1))
			{
				__LIB_0__::func_521(32254, 1, -1);
				func_675(iVar0, iParam0, iParam3, 1065353216);
			}
			break;
		case 6:
			if (!__LIB_0__::func_137(32255, -1))
			{
				__LIB_0__::func_521(32255, 1, -1);
				func_675(iVar0, iParam0, iParam3, 1065353216);
			}
			break;
		case 7:
			if (!__LIB_0__::func_137(32256, -1))
			{
				__LIB_0__::func_521(32256, 1, -1);
				func_675(iVar0, iParam0, iParam3, 1065353216);
			}
			break;
		case 8:
			if (!__LIB_0__::func_137(32257, -1))
			{
				__LIB_0__::func_521(32257, 1, -1);
				func_675(iVar0, iParam0, iParam3, 1065353216);
			}
			break;
		case 9:
			if (!__LIB_0__::func_137(32258, -1))
			{
				__LIB_0__::func_521(32258, 1, -1);
				func_675(iVar0, iParam0, iParam3, 1065353216);
			}
			break;
		case 10:
			if (__LIB_0__::func_137(32249, -1))
			{
				if (!__LIB_0__::func_137(32259, -1))
				{
					__LIB_0__::func_521(32259, 1, -1);
					func_675(iVar0, iParam0, iParam3, 1065353216);
				}
			}
			break;
		case 11:
			if (__LIB_0__::func_137(32250, -1))
			{
				if (!__LIB_0__::func_137(32260, -1))
				{
					__LIB_0__::func_521(32260, 1, -1);
					func_675(iVar0, iParam0, iParam3, 1065353216);
				}
			}
			break;
		case 12:
			if (__LIB_0__::func_137(32251, -1))
			{
				if (!__LIB_0__::func_137(32261, -1))
				{
					__LIB_0__::func_521(32261, 1, -1);
					func_675(iVar0, iParam0, iParam3, 1065353216);
				}
			}
			break;
		case 13:
			if (__LIB_0__::func_137(32252, -1))
			{
				if (!__LIB_0__::func_137(32262, -1))
				{
					__LIB_0__::func_521(32262, 1, -1);
					func_675(iVar0, iParam0, iParam3, 1065353216);
				}
			}
			break;
		case 14:
			if (__LIB_0__::func_137(32253, -1))
			{
				if (!__LIB_0__::func_137(32263, -1))
				{
					__LIB_0__::func_521(32263, 1, -1);
					func_675(iVar0, iParam0, iParam3, 1065353216);
				}
			}
			break;
		case 15:
			if (!__LIB_0__::func_137(32264, -1))
			{
				__LIB_0__::func_521(32264, 1, -1);
				func_675(iVar0, iParam0, iParam3, 1065353216);
			}
			break;
		case 16:
			if (__LIB_0__::func_137(32254, -1))
			{
				if (!__LIB_0__::func_137(32265, -1))
				{
					__LIB_0__::func_521(32265, 1, -1);
					func_675(iVar0, iParam0, iParam3, 1065353216);
				}
			}
			break;
		case 17:
			if (__LIB_0__::func_137(32255, -1))
			{
				if (!__LIB_0__::func_137(32266, -1))
				{
					__LIB_0__::func_521(32266, 1, -1);
					func_675(iVar0, iParam0, iParam3, 1065353216);
				}
			}
			break;
		case 18:
			if (__LIB_0__::func_137(32256, -1))
			{
				if (!__LIB_0__::func_137(32267, -1))
				{
					__LIB_0__::func_521(32267, 1, -1);
					func_675(iVar0, iParam0, iParam3, 1065353216);
				}
			}
			break;
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
			func_675(iVar0, iParam0, iParam3, fParam4);
			break;
		case 24:
		case 25:
		case 26:
			func_675(iVar0, iParam0, iParam3, 1065353216);
			break;
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
			func_675(iVar0, iParam0, iParam3, 1065353216);
			break;
		case 32:
		case 33:
		case 34:
		case 35:
			func_675(iVar0, iParam0, iParam3, 1065353216);
			break;
	}
}

void func_675(int iParam0, int iParam1, var uParam2, float fParam3)//Position - 0x8525E
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	if ((((iParam0 <= 0 || PLAYER::PLAYER_ID() == __LIB_0__::func_160()) || Global_262145.f_31078 /* Tunable: -1782032913 */) || __LIB_37__::func_663() >= __LIB_19__::func_89()) || !__LIB_37__::func_662(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (fParam3 != 1f)
	{
		iParam0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iParam0) * fParam3));
	}
	iVar0 = __LIB_37__::func_663();
	iVar1 = __LIB_8__::func_297(iVar0);
	iVar2 = (iVar0 + iParam0);
	iVar3 = __LIB_19__::func_89();
	if (iVar2 > iVar3)
	{
		iVar2 = iVar3;
	}
	bVar4 = false;
	iVar5 = __LIB_8__::func_297(iVar2);
	if (iVar5 > iVar1)
	{
		bVar4 = true;
	}
	__LIB_0__::func_427(9834, iVar2, -1, 1, 0);
	Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_476.f_1 = iVar2;
	Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_476.f_2 = iVar5;
	__LIB_32__::func_505(iParam0, iVar5, bVar4, iParam1, uParam2);
	__LIB_20__::func_593(107, iVar5, -1);
	if (bVar4)
	{
		func_676(iVar1, iVar5);
	}
}

void func_676(int iParam0, int iParam1)//Position - 0x85355
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = iParam0 + 1;
	while (iVar0 <= iParam1)
	{
		__LIB_5__::func_564(&iVar1, &iVar2, iVar0);
		if (__LIB_19__::func_88(iVar1))
		{
			__LIB_26__::func_112(iVar1);
			__LIB_42__::func_798(iVar1, 1);
			__LIB_5__::func_556(iVar1);
		}
		if (__LIB_19__::func_88(iVar2))
		{
			__LIB_26__::func_112(iVar2);
			__LIB_42__::func_798(iVar2, 1);
			__LIB_5__::func_556(iVar2);
		}
		__LIB_39__::func_895(iVar0);
		__LIB_25__::func_407("CCR_INC_TCK" /* GXT: LS Car Meet reputation increased: Level ~1~. */, iVar0, 1);
		iVar0++;
	}
	__LIB_20__::func_535();
}

void func_757(var uParam0, bool bParam1)//Position - 0x92CD5
{
	int iVar0;
	int iVar1;
	iVar0 = func_382(uParam0);
	iVar1 = uParam0;
	if (iVar1 > -1)
	{
		if (bParam1)
		{
			MISC::SET_BIT(&iVar0, __LIB_0__::func_158(iVar1));
		}
		else
		{
			MISC::CLEAR_BIT(&iVar0, __LIB_0__::func_158(iVar1));
		}
		__LIB_0__::func_427(__LIB_29__::func_496(uParam0), iVar0, -1, 1, 0);
	}
}

void func_758(int iParam0)//Position - 0x92D21
{
	__LIB_0__::func_427(753, iParam0, Global_78127, 1, 0);
	__LIB_0__::func_427(2053, iParam0, Global_78127, 1, 0);
	__LIB_6__::func_796(161, 1, -1, 1);
}

void func_763(int iParam0, int iParam1, int iParam2)//Position - 0x92F49
{
	int iVar0;
	iVar0 = __LIB_0__::func_426(iParam0, __LIB_0__::func_330(iParam2));
	iVar0 = (iVar0 + iParam1);
	__LIB_20__::func_593(iParam0, iVar0, iParam2);
}

void func_784(var uParam0, int iParam1)//Position - 0x95295
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
				__LIB_1__::func_193(0, 0);
				__LIB_8__::func_441(*uParam0, 0);
				__LIB_1__::func_318(1, 0, 0, 0, 0);
				__LIB_1__::func_317(1, 1, 1, 1, 1);
				__LIB_1__::func_319("HAIR_TITLE_0");
				uParam0->f_492 = 0;
				uParam0->f_493 = 0;
				uParam0->f_500 = 0;
				if (func_368(uParam0, iVar1, 1))
				{
					__LIB_18__::func_477(0, "HAIR_OPTION_1", 1, 1, 0, 0, 0);
					__LIB_21__::func_66(2, 0);
				}
				else
				{
					__LIB_18__::func_477(0, "HAIR_OPTION_1", 0, 1, 0, 0, 0);
				}
				if (__LIB_29__::func_533())
				{
					if (func_368(uParam0, iVar1, 2))
					{
						__LIB_18__::func_477(1, "HAIR_OPTION_0", 1, 1, 0, 0, 0);
						__LIB_21__::func_66(2, 0);
					}
					else
					{
						__LIB_18__::func_477(1, "HAIR_OPTION_0", 0, 1, 0, 0, 0);
					}
					if (__LIB_29__::func_532())
					{
						if (func_368(uParam0, iVar1, 3))
						{
							__LIB_18__::func_477(2, "HAIR_OPTION_2", 1, 1, 0, 0, 0);
							__LIB_21__::func_66(2, 0);
						}
						else
						{
							__LIB_18__::func_477(2, "HAIR_OPTION_2", 0, 1, 0, 0, 0);
						}
					}
				}
				else if (__LIB_29__::func_532())
				{
					if (func_368(uParam0, iVar1, 3))
					{
						__LIB_18__::func_477(1, "HAIR_OPTION_2", 1, 1, 0, 0, 0);
						__LIB_21__::func_66(2, 0);
					}
					else
					{
						__LIB_18__::func_477(1, "HAIR_OPTION_2", 0, 1, 0, 0, 0);
					}
				}
				__LIB_2__::func_183(uParam0->f_116.f_1, 1, 1);
				if (!__LIB_29__::func_531(uParam0->f_525))
				{
					__LIB_1__::func_345(201, "ITEM_SELECT" /* GXT: Select */, -1, 0);
				}
				else if (uParam0->f_525 == 5 || uParam0->f_525 == 12)
				{
					__LIB_1__::func_345(201, "ITEM_SELECT" /* GXT: Select */, -1, 0);
				}
				else
				{
					__LIB_1__::func_345(201, "ITEM_BUY" /* GXT: Buy */, -1, 0);
				}
				if (uParam0->f_710)
				{
					__LIB_1__::func_345(202, "ITEM_BACK" /* GXT: Back */, -1, 0);
					__LIB_20__::func_38(&uLocal_126);
					__LIB_4__::func_221(21, "ITEM_MOV_CAM" /* GXT: Move Camera */, -1);
					if (!__LIB_29__::func_531(uParam0->f_525))
					{
						__LIB_1__::func_345(iLocal_134, "ITEM_ZOOM" /* GXT: Zoom */, -1, 0);
					}
				}
				else
				{
					__LIB_1__::func_345(202, "ITEM_BACK" /* GXT: Back */, -1, 0);
					__LIB_20__::func_38(&uLocal_126);
					__LIB_4__::func_221(21, "ITEM_MOV_CAM" /* GXT: Move Camera */, -1);
				}
				break;
			case 4:
				__LIB_37__::func_273(uParam0);
				break;
			case 1:
				func_566(uParam0, iParam1, 0);
				break;
			case 2:
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					func_566(uParam0, iParam1, 0);
				}
				else
				{
					func_789(uParam0, !uParam0->f_594);
					func_525(uParam0);
					__LIB_1__::func_193(0, 0);
					__LIB_8__::func_441(*uParam0, 0);
					__LIB_1__::func_318(1, 1, 0, 0, 0);
					__LIB_1__::func_317(1, 2, 1, 1, 1);
					__LIB_1__::func_319("HAIR_TITLE_1");
					uParam0->f_492 = 0;
					uParam0->f_493 = 0;
					uParam0->f_494 = 0;
					uParam0->f_500 = 0;
					iVar4 = __LIB_29__::func_503();
					iVar3 = 0;
					while (iVar3 < iVar4)
					{
						iVar2 = __LIB_34__::func_774(iVar3);
						StringCopy(&Var5, "HAIR_BEARD", 16);
						StringIntConCat(&Var5, iVar2, 16);
						if (__LIB_29__::func_520(&Var5, iVar2))
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
						if (!__LIB_34__::func_772(iVar2) || __LIB_29__::func_521(iVar2))
						{
							if (func_404(iVar2) && !__LIB_37__::func_264(iVar2))
							{
								__LIB_18__::func_477(iVar3, &Var5, 1, 1, 0, 0, 0);
								__LIB_21__::func_66(2, 0);
								if (iVar3 == uParam0->f_116.f_1)
								{
									uParam0->f_493 = 1;
								}
							}
							else
							{
								__LIB_18__::func_477(iVar3, &Var5, 0, 1, 0, 0, 0);
							}
							if (iVar2 == uParam0->f_273)
							{
								__LIB_18__::func_477(iVar3, "", 1, 1, 0, 0, 0);
								__LIB_21__::func_66(14, 0);
							}
							else if (!func_404(iVar2))
							{
								__LIB_18__::func_477(iVar3, "", 1, 1, 0, 0, 0);
								__LIB_21__::func_66(15, 0);
								if (iVar3 == uParam0->f_116.f_1)
								{
									uParam0->f_492 = 1;
								}
							}
							else
							{
								__LIB_18__::func_477(iVar3, "ITEM_COST" /* GXT: $~1~ */, 1, 1, 0, 0, 0);
								__LIB_32__::func_488(func_526(uParam0, iVar2, &Var5, 1), 0);
							}
						}
						iVar3++;
					}
					if (uParam0->f_116.f_1 > iVar4 || uParam0->f_116.f_1 < 0)
					{
						uParam0->f_116.f_1 = 0;
					}
					func_649(iParam1, 1, (__LIB_34__::func_774(uParam0->f_116.f_1) - 1), uParam0->f_634, 0, 0, 1f, 1);
					if (uParam0->f_710)
					{
						__LIB_1__::func_345(201, "ITEM_BUY" /* GXT: Buy */, -1, 0);
						__LIB_1__::func_345(202, "ITEM_BACK" /* GXT: Back */, -1, 0);
						__LIB_20__::func_38(&uLocal_126);
						__LIB_4__::func_221(21, "ITEM_MOV_CAM" /* GXT: Move Camera */, -1);
						if (!__LIB_29__::func_531(uParam0->f_525))
						{
							__LIB_1__::func_345(iLocal_134, "ITEM_ZOOM" /* GXT: Zoom */, -1, 0);
						}
					}
					else
					{
						__LIB_1__::func_345(201, "ITEM_BUY" /* GXT: Buy */, -1, 0);
						__LIB_1__::func_345(202, "ITEM_BACK" /* GXT: Back */, -1, 0);
						__LIB_20__::func_38(&uLocal_126);
						__LIB_4__::func_221(21, "ITEM_MOV_CAM" /* GXT: Move Camera */, -1);
					}
					if (uParam0->f_594)
					{
						uParam0->f_594 = 0;
						__LIB_3__::func_981(uParam0->f_595);
					}
					__LIB_2__::func_183(uParam0->f_116.f_1, 1, 1);
				}
				break;
			case 3:
				__LIB_1__::func_193(0, 0);
				__LIB_8__::func_441(*uParam0, 0);
				__LIB_1__::func_318(1, 1, 0, 0, 0);
				__LIB_1__::func_317(1, 2, 1, 1, 1);
				__LIB_1__::func_319("HAIR_TITLE_3");
				__LIB_37__::func_272(uParam0, !uParam0->f_594);
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
					__LIB_3__::func_981(uParam0->f_595);
				}
				else
				{
					uParam0->f_116.f_1 = uParam0->f_611;
				}
				__LIB_2__::func_183(uParam0->f_116.f_1, 1, 1);
				if (uParam0->f_710)
				{
					__LIB_1__::func_345(201, "ITEM_BUY" /* GXT: Buy */, -1, 0);
					__LIB_1__::func_345(202, "ITEM_BACK" /* GXT: Back */, -1, 0);
					__LIB_20__::func_38(&uLocal_126);
					__LIB_4__::func_221(21, "ITEM_MOV_CAM" /* GXT: Move Camera */, -1);
					if (!__LIB_29__::func_531(uParam0->f_525))
					{
						__LIB_1__::func_345(iLocal_134, "ITEM_ZOOM" /* GXT: Zoom */, -1, 0);
					}
				}
				else
				{
					__LIB_1__::func_345(201, "ITEM_BUY" /* GXT: Buy */, -1, 0);
					__LIB_1__::func_345(202, "ITEM_BACK" /* GXT: Back */, -1, 0);
					__LIB_20__::func_38(&uLocal_126);
					__LIB_4__::func_221(21, "ITEM_MOV_CAM" /* GXT: Move Camera */, -1);
				}
				break;
			case 5:
				func_787(uParam0, iParam1);
				break;
			case 12:
				func_785(uParam0, iParam1);
				break;
			default:
				if (__LIB_29__::func_531(uParam0->f_525))
				{
					uParam0->f_709 = 1;
					func_484(uParam0, iParam1, 1, 1);
				}
				break;
		}
		uParam0->f_589 = 1;
		uParam0->f_590 = 0;
		uParam0->f_709 = 0;
	}
}

void func_785(var uParam0, int iParam1)//Position - 0x958C1
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam1);
	func_499(uParam0, !uParam0->f_590);
	__LIB_1__::func_193(0, 0);
	__LIB_8__::func_441(*uParam0, 0);
	uParam0->f_725 = 0;
	uParam0->f_492 = 0;
	uParam0->f_493 = 0;
	uParam0->f_500 = 0;
	__LIB_1__::func_318(1, 0, 0, 0, 0);
	__LIB_1__::func_317(1, 1, 1, 1, 1);
	__LIB_1__::func_319(__LIB_29__::func_514(12, 1));
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = __LIB_29__::func_517(iVar1);
		if (__LIB_29__::func_518(iVar0, iVar2, uParam0->f_523))
		{
			if (func_368(uParam0, iVar0, iVar2))
			{
				__LIB_18__::func_477(iVar1, __LIB_29__::func_514(iVar2, 0), 1, 1, 0, 0, 0);
				__LIB_21__::func_66(2, 0);
			}
			else if (func_786(uParam0, iVar0, iVar2))
			{
				__LIB_18__::func_477(iVar1, __LIB_29__::func_514(iVar2, 0), 1, 1, 0, 0, 0);
				__LIB_21__::func_66(51, 0);
			}
			else
			{
				__LIB_18__::func_477(iVar1, __LIB_29__::func_514(iVar2, 0), 0, 1, 0, 0, 0);
			}
		}
		iVar1++;
	}
	__LIB_3__::func_981(uParam0->f_725);
	__LIB_2__::func_183(uParam0->f_116.f_1, 1, 1);
	if (!__LIB_29__::func_531(uParam0->f_525))
	{
		__LIB_1__::func_345(201, "ITEM_SELECT" /* GXT: Select */, -1, 0);
	}
	else if (uParam0->f_525 == 5 || uParam0->f_525 == 12)
	{
		__LIB_1__::func_345(201, "ITEM_SELECT" /* GXT: Select */, -1, 0);
	}
	else
	{
		__LIB_1__::func_345(201, "ITEM_BUY" /* GXT: Buy */, -1, 0);
	}
	if (uParam0->f_710)
	{
		__LIB_1__::func_345(202, "ITEM_BACK" /* GXT: Back */, -1, 0);
		__LIB_20__::func_38(&uLocal_126);
		__LIB_4__::func_221(21, "ITEM_MOV_CAM" /* GXT: Move Camera */, -1);
		if (!__LIB_29__::func_531(uParam0->f_525))
		{
			__LIB_1__::func_345(iLocal_134, "ITEM_ZOOM" /* GXT: Zoom */, -1, 0);
		}
	}
	else
	{
		__LIB_1__::func_345(202, "ITEM_BACK" /* GXT: Back */, -1, 0);
		__LIB_20__::func_38(&uLocal_126);
		__LIB_4__::func_221(21, "ITEM_MOV_CAM" /* GXT: Move Camera */, -1);
	}
	__LIB_29__::func_513(uParam0);
}

int func_786(var uParam0, int iParam1, int iParam2)//Position - 0x95A75
{
	struct<2> Var0;
	int iVar1;
	if (__LIB_29__::func_531(iParam2))
	{
		iVar1 = 0;
		while (iVar1 < __LIB_29__::func_501(iParam1, iParam2))
		{
			if (__LIB_39__::func_370(iParam1, iParam2, iVar1, &Var0, __LIB_29__::func_528(uParam0->f_523)))
			{
				if ((func_373(uParam0, iParam1, iParam2, iVar1) && __LIB_29__::func_508(&(Var0.f_1), iParam2, Var0.f_0)) && !func_638(iParam1, &Var0, uParam0))
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

void func_787(var uParam0, int iParam1)//Position - 0x95AF0
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam1);
	func_499(uParam0, !uParam0->f_590);
	__LIB_1__::func_193(0, 0);
	__LIB_8__::func_441(*uParam0, 0);
	__LIB_1__::func_318(1, 0, 0, 0, 0);
	__LIB_1__::func_317(1, 1, 1, 1, 1);
	__LIB_1__::func_319(__LIB_29__::func_514(5, 1));
	uParam0->f_725 = 0;
	uParam0->f_492 = 0;
	uParam0->f_493 = 0;
	uParam0->f_500 = 0;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		iVar2 = __LIB_29__::func_519(iVar1);
		if (__LIB_29__::func_518(iVar0, iVar2, uParam0->f_523))
		{
			bVar3 = false;
			bVar4 = false;
			if (iVar2 == 12)
			{
				if (!bVar3)
				{
					if (__LIB_29__::func_518(iVar0, 13, uParam0->f_523))
					{
						if (func_368(uParam0, iVar0, 13))
						{
							bVar3 = true;
						}
					}
				}
				if (!bVar3)
				{
					if (__LIB_29__::func_518(iVar0, 14, uParam0->f_523))
					{
						if (func_368(uParam0, iVar0, 14))
						{
							bVar3 = true;
						}
					}
				}
				if (!bVar3)
				{
					if (__LIB_29__::func_518(iVar0, 15, uParam0->f_523))
					{
						if (func_368(uParam0, iVar0, 15))
						{
							bVar3 = true;
						}
					}
				}
				if (!bVar3)
				{
					if (!bVar4)
					{
						if (__LIB_29__::func_518(iVar0, 13, uParam0->f_523))
						{
							if (func_786(uParam0, iVar0, 13))
							{
								bVar4 = true;
							}
						}
					}
					if (!bVar4)
					{
						if (__LIB_29__::func_518(iVar0, 14, uParam0->f_523))
						{
							if (func_786(uParam0, iVar0, 14))
							{
								bVar4 = true;
							}
						}
					}
					if (!bVar4)
					{
						if (__LIB_29__::func_518(iVar0, 15, uParam0->f_523))
						{
							if (func_786(uParam0, iVar0, 15))
							{
								bVar4 = true;
							}
						}
					}
				}
			}
			else if (func_368(uParam0, iVar0, iVar2))
			{
				bVar3 = true;
			}
			else if (func_786(uParam0, iVar0, iVar2))
			{
				bVar4 = true;
			}
			if (bVar3)
			{
				__LIB_18__::func_477(iVar1, __LIB_29__::func_514(iVar2, 0), 1, 1, 0, 0, 0);
				__LIB_21__::func_66(2, 0);
			}
			else if (bVar4)
			{
				__LIB_18__::func_477(iVar1, __LIB_29__::func_514(iVar2, 0), 1, 1, 0, 0, 0);
				__LIB_21__::func_66(51, 0);
			}
			else
			{
				__LIB_18__::func_477(iVar1, __LIB_29__::func_514(iVar2, 0), 0, 1, 0, 0, 0);
			}
		}
		iVar1++;
	}
	__LIB_2__::func_183(uParam0->f_116.f_1, 1, 1);
	if (!__LIB_29__::func_531(uParam0->f_525))
	{
		__LIB_1__::func_345(201, "ITEM_SELECT" /* GXT: Select */, -1, 0);
	}
	else if (uParam0->f_525 == 5 || uParam0->f_525 == 12)
	{
		__LIB_1__::func_345(201, "ITEM_SELECT" /* GXT: Select */, -1, 0);
	}
	else
	{
		__LIB_1__::func_345(201, "ITEM_BUY" /* GXT: Buy */, -1, 0);
	}
	if (uParam0->f_710)
	{
		__LIB_1__::func_345(202, "ITEM_BACK" /* GXT: Back */, -1, 0);
		__LIB_20__::func_38(&uLocal_126);
		__LIB_4__::func_221(21, "ITEM_MOV_CAM" /* GXT: Move Camera */, -1);
		if (!__LIB_29__::func_531(uParam0->f_525))
		{
			__LIB_1__::func_345(iLocal_134, "ITEM_ZOOM" /* GXT: Zoom */, -1, 0);
		}
	}
	else
	{
		__LIB_1__::func_345(202, "ITEM_BACK" /* GXT: Back */, -1, 0);
		__LIB_20__::func_38(&uLocal_126);
		__LIB_4__::func_221(21, "ITEM_MOV_CAM" /* GXT: Move Camera */, -1);
	}
	__LIB_29__::func_513(uParam0);
}

void func_789(var uParam0, bool bParam1)//Position - 0x95E01
{
	if (__LIB_20__::func_554(1))
	{
		if (uParam0->f_273 == -1)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				uParam0->f_273 = __LIB_0__::func_228(448, -1) + 1;
				if (uParam0->f_273 == 256)
				{
					uParam0->f_273 = 0;
				}
				uParam0->f_275 = __LIB_0__::func_424(88, -1);
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
			uParam0->f_116.f_1 = __LIB_29__::func_529(uParam0->f_273);
		}
	}
}

void func_817(var uParam0)//Position - 0x975CF
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
	if ((__LIB_20__::func_554(1) && !PED::IS_PED_INJURED(iVar0)) && !PED::IS_PED_INJURED(uParam0->f_12))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_301(uParam0);
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
				if (__LIB_29__::func_533())
				{
					func_649(iVar0, 1, (uParam0->f_273 - 1), uParam0->f_634, 0, 0, uParam0->f_275, 1);
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
			if (__LIB_29__::func_532())
			{
				func_649(iVar0, 4, (uParam0->f_611 - 1), uParam0->f_634, 0, 0, 1f, 1);
				if ((uParam0->f_611 - 1) == -1 || (uParam0->f_611 - 1) > 15)
				{
					func_649(iVar0, 2, __LIB_0__::func_228(449, __LIB_0__::func_5()), uParam0->f_634, 0, 0, 1f, 1);
				}
				else
				{
					func_649(iVar0, 2, __LIB_0__::func_228(449, __LIB_0__::func_5()), uParam0->f_634, 0, 0, 0f, 1);
				}
			}
		}
		if (!Global_78319)
		{
			bVar1 = __LIB_20__::func_728();
			if (__LIB_0__::func_317(bVar1))
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
			func_303(uParam0);
		}
	}
}

void func_818(var uParam0)//Position - 0x977EA
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
	if ((__LIB_20__::func_554(1) && !PED::IS_PED_INJURED(iVar0)) && !PED::IS_PED_INJURED(uParam0->f_12))
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
					__LIB_9__::func_906(1);
					iVar0 = PLAYER::PLAYER_PED_ID();
				}
				__LIB_9__::func_913();
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					HUD::REMOVE_MULTIPLAYER_WALLET_CASH();
					HUD::REMOVE_MULTIPLAYER_BANK_CASH();
				}
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					func_301(uParam0);
				}
				__LIB_41__::func_379(*uParam0, &Var1, &Var2);
				TASK::TASK_PLAY_ANIM_ADVANCED(iVar0, uParam0->f_486, "player_exitchair", Var1, Var2, 1000f, -2f, -1, 37896, 0f, 2, 1);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iVar0, false, false);
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					uParam0->f_530 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(Var1, Var2, 2, false, false, 1f, 0f, 1f);
					NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_530, uParam0->f_486, "player_exitchair", 1000f, -1f, 263, 0, 1000f, 0);
					NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam0->f_530);
					TASK::TASK_PLAY_ANIM_ADVANCED(uParam0->f_12, uParam0->f_486, "keeper_exitchair", Var1, Var2, 1000f, -1000f, -1, 5642, 0f, 2, 1);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uParam0->f_12, false, false);
					__LIB_29__::func_538(uParam0);
					__LIB_42__::func_325(uParam0, 1, 0);
					__LIB_29__::func_537(uParam0, uParam0->f_12, "keeper_exitchair", 5, 4f, -2f);
					__LIB_29__::func_536(uParam0, NETWORK::NET_TO_ENT(Local_66.f_1), __LIB_29__::func_539("keeper_exitchair"), 0, 1148846080, -998637568);
					__LIB_29__::func_535(uParam0);
				}
				else
				{
					__LIB_42__::func_324(uParam0, "keeper_exitchair", 0, 0, 1, -1056964608);
				}
				__LIB_42__::func_323(uParam0, __LIB_37__::func_274(uParam0, 1, ""));
				PED::SET_FORCE_FOOTSTEP_UPDATE(PLAYER::PLAYER_PED_ID(), true);
				if (!Global_78319)
				{
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 240, false);
				}
				uParam0->f_503.f_19 = 0;
				uParam0->f_116.f_5++;
				break;
			case 1:
				if (__LIB_29__::func_540(uParam0))
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
				if (__LIB_29__::func_540(uParam0))
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
						__LIB_37__::func_259();
						__LIB_29__::func_538(uParam0);
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

void func_819(var uParam0)//Position - 0x97C54
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
	if ((__LIB_20__::func_554(1) && !PED::IS_PED_INJURED(iVar2)) && !PED::IS_PED_INJURED(uParam0->f_12))
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
				func_589(iVar2);
				uParam0->f_116.f_5++;
				break;
			case 1:
				if (!Global_78319)
				{
					PED::SET_PED_CONFIG_FLAG(iVar2, 240, true);
				}
				if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(uParam0->f_184.f_13[0 /*3*/], 3f) && !Global_78319)
				{
					__LIB_20__::func_539(uParam0);
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
				__LIB_41__::func_379(*uParam0, &Var3, &Var4);
				MISC::CLEAR_AREA_OF_OBJECTS(ENTITY::GET_ENTITY_COORDS(iVar2, true), 2.75f, 0);
				TASK::TASK_PLAY_ANIM_ADVANCED(iVar2, uParam0->f_486, "player_enterchair", Var3, Var4, 1000f, -1000f, -1, 5642, 0f, 2, 1);
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (__LIB_29__::func_540(uParam0))
					{
						TASK::TASK_PLAY_ANIM_ADVANCED(uParam0->f_12, uParam0->f_486, "keeper_enterchair", Var3, Var4, 1000f, -1000f, -1, 5642, 0f, 2, 1);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uParam0->f_12, false, false);
					}
					__LIB_29__::func_538(uParam0);
					__LIB_42__::func_325(uParam0, 1, 0);
					__LIB_29__::func_537(uParam0, uParam0->f_12, "keeper_enterchair", 69, 1148846080, -998637568);
					__LIB_29__::func_537(uParam0, PLAYER::PLAYER_PED_ID(), "player_enterchair", 64, 1148846080, -998637568);
					__LIB_29__::func_536(uParam0, NETWORK::NET_TO_ENT(Local_66.f_1), __LIB_29__::func_539("keeper_enterchair"), 64, 1148846080, -998637568);
					__LIB_29__::func_535(uParam0);
				}
				else
				{
					__LIB_42__::func_324(uParam0, "keeper_enterchair", 0, 0, 1, -1056964608);
				}
				uParam0->f_503.f_19 = 1;
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					__LIB_20__::func_606(PLAYER::PLAYER_PED_ID(), 0, &iVar0, &uVar1, 1, 145);
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
				if (__LIB_6__::func_779(iVar5, 8, iVar6, -1))
				{
					uParam0->f_546 = iVar6;
				}
				Stack.Push(iVar2);
				Stack.Push(9);
				Stack.Push(-1);
				Call_Loc(uParam0->f_478);
				iVar6 = StackVal;
				if (__LIB_6__::func_779(iVar5, 9, iVar6, -1))
				{
					uParam0->f_547 = iVar6;
				}
				Stack.Push(iVar2);
				Stack.Push(2);
				Stack.Push(-1);
				Call_Loc(uParam0->f_478);
				iVar6 = StackVal;
				if (__LIB_6__::func_779(iVar5, 2, iVar6, -1))
				{
					uParam0->f_548 = iVar6;
				}
				PED::RELEASE_PED_PRELOAD_PROP_DATA(PLAYER::PLAYER_PED_ID());
				PED::RELEASE_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID());
				func_824(uParam0);
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
				__LIB_32__::func_708(iVar2, &(uParam0->f_479));
				if (__LIB_29__::func_483(PLAYER::PLAYER_PED_ID(), &bVar7, &bVar8))
				{
					func_302(iVar2, 0);
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
					if ((iVar5 == joaat("MP_M_Freemode_01") && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_420(iVar5, uParam0->f_550, 7, 3), joaat("PILOT_SUIT"), 0)) || (iVar5 == joaat("MP_F_Freemode_01") && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_420(iVar5, uParam0->f_550, 7, 4), joaat("PILOT_SUIT"), 0)))
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
					__LIB_32__::func_708(PLAYER::PLAYER_PED_ID(), &(uParam0->f_479));
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
					if (__LIB_29__::func_483(PLAYER::PLAYER_PED_ID(), &bVar7, &bVar8))
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
						func_302(PLAYER::PLAYER_PED_ID(), 0);
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
					uParam0->f_724 = __LIB_18__::func_468();
				}
				__LIB_26__::func_190(uParam0, 1077936128);
				__LIB_42__::func_323(uParam0, __LIB_37__::func_274(uParam0, 0, ""));
				PED::SET_FORCE_FOOTSTEP_UPDATE(PLAYER::PLAYER_PED_ID(), true);
				uParam0->f_116.f_5++;
				break;
			case 2:
				if ((ENTITY::HAS_ENTITY_ANIM_FINISHED(iVar2, uParam0->f_486, "player_enterchair", 3) && __LIB_29__::func_534(&(uParam0->f_529), &(uParam0->f_531)) == 1f) && CAM::GET_CAM_ANIM_CURRENT_PHASE(uParam0->f_51[0 /*12*/]) >= 1f)
				{
					__LIB_41__::func_379(*uParam0, &Var3, &Var4);
					sVar10 = __LIB_37__::func_276(uParam0);
					if (__LIB_29__::func_540(uParam0))
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
						if (__LIB_29__::func_540(uParam0))
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
						__LIB_29__::func_538(uParam0);
						__LIB_42__::func_325(uParam0, 0, 1);
						__LIB_29__::func_537(uParam0, uParam0->f_12, "keeper_base", 69, 1148846080, -998637568);
						__LIB_29__::func_536(uParam0, NETWORK::NET_TO_ENT(Local_66.f_1), __LIB_29__::func_539("keeper_base"), 64, 1148846080, -998637568);
						__LIB_29__::func_535(uParam0);
					}
					else
					{
						__LIB_42__::func_324(uParam0, "keeper_base", 0, 1, 0, -1056964608);
					}
					__LIB_41__::func_966(uParam0, 1);
					func_499(uParam0, 0);
					func_789(uParam0, 0);
					if (__LIB_29__::func_533() || __LIB_29__::func_532())
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
							while (uParam0->f_116.f_1 <= 6 && !__LIB_29__::func_518(iVar5, __LIB_29__::func_519(uParam0->f_116.f_1), uParam0->f_523))
							{
								uParam0->f_116.f_1++;
							}
							if (uParam0->f_116.f_1 >= 7)
							{
								uParam0->f_116.f_1 = 0;
							}
						}
						if (__LIB_0__::func_424(157, -1) == 255f)
						{
							fVar11 = SYSTEM::TO_FLOAT(PED::GET_HEAD_BLEND_EYE_COLOR(PLAYER::PLAYER_PED_ID()));
							func_648(157, fVar11, -1, 1);
						}
					}
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						NETWORK::NETWORK_DISABLE_LEAVE_REMOTE_PED_BEHIND(true);
						uParam0->f_502 = 1;
					}
					__LIB_2__::func_185();
					PED::SET_FORCE_FOOTSTEP_UPDATE(PLAYER::PLAYER_PED_ID(), false);
					uParam0->f_116.f_31 = 2;
				}
				break;
			}
	}
}

void func_824(var uParam0)//Position - 0x98651
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		__LIB_39__::func_921(PLAYER::PLAYER_PED_ID(), 14, uParam0->f_544);
		__LIB_39__::func_921(PLAYER::PLAYER_PED_ID(), 14, uParam0->f_545);
		__LIB_39__::func_921(PLAYER::PLAYER_PED_ID(), 14, uParam0->f_546);
		__LIB_39__::func_921(PLAYER::PLAYER_PED_ID(), 14, uParam0->f_547);
		__LIB_39__::func_921(PLAYER::PLAYER_PED_ID(), 14, uParam0->f_548);
	}
}

void func_828(var uParam0, bool bParam1)//Position - 0x98F16
{
	if (__LIB_20__::func_554(1))
	{
		if (uParam0->f_19)
		{
		}
		if (!bParam1)
		{
			if ((!BitTest(Global_103905, 0) && !__LIB_4__::func_532()) || __LIB_4__::func_531())
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			}
			PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
		}
		if (Global_78319)
		{
			func_830(0, 0);
			__LIB_18__::func_465(PLAYER::PLAYER_ID(), 0, 66048, 0);
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				PED::SET_PED_DESIRED_HEADING(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()));
			}
		}
		else
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
		}
		if (Global_78319)
		{
			__LIB_1__::func_167();
		}
	}
}

void func_830(int iParam0, int iParam1)//Position - 0x9900A
{
	if (!__LIB_7__::func_268(PLAYER::PLAYER_ID(), 1, 0) || iParam1)
	{
		if (!__LIB_0__::func_674())
		{
			Global_1574582.f_1 = 1;
			Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_9 = 1;
			if (iParam0 == 1)
			{
				Global_1574582.f_2 = 1;
			}
			__LIB_37__::func_278(7, 0, -1);
		}
	}
}

void func_941(var uParam0)//Position - 0x9B91F
{
	if (__LIB_20__::func_554(1))
	{
		__LIB_41__::func_487(uParam0);
		if (!Global_78319)
		{
			PED::SET_PED_CAN_ARM_IK(PLAYER::PLAYER_PED_ID(), true);
			PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 60, true);
		}
		if (!uParam0->f_8)
		{
			if (uParam0->f_3 != -1)
			{
				__LIB_6__::func_404(&(uParam0->f_3));
			}
			if (__LIB_10__::func_482(PLAYER::PLAYER_ID(), uParam0->f_523, 1) && *uParam0 != 50)
			{
				__LIB_10__::func_558(PLAYER::PLAYER_ID(), uParam0->f_523);
			}
			if (__LIB_29__::func_545(PLAYER::PLAYER_ID(), uParam0->f_523, 0) && *uParam0 == 50)
			{
				__LIB_29__::func_487(PLAYER::PLAYER_ID(), uParam0->f_523);
			}
			__LIB_9__::func_913();
		}
		if (!uParam0->f_7)
		{
			uParam0->f_11 = 1;
		}
	}
}

void func_964(var uParam0)//Position - 0x9D0C9
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
	if (__LIB_20__::func_554(1) && !PED::IS_PED_INJURED(uParam0->f_12))
	{
		if (__LIB_5__::func_743(1) || ((!HUD::IS_PAUSE_MENU_ACTIVE() && __LIB_40__::func_774(*uParam0, 1, 0, -1)) && !__LIB_39__::func_619(*uParam0)))
		{
			if (__LIB_39__::func_363(-1))
			{
				bVar0 = true;
			}
			else if (!__LIB_10__::func_482(PLAYER::PLAYER_ID(), uParam0->f_523, 0) && *uParam0 != 50)
			{
				bVar2 = true;
			}
			else if (!__LIB_29__::func_545(PLAYER::PLAYER_ID(), uParam0->f_523, 0) && *uParam0 == 50)
			{
				bVar2 = true;
			}
			else
			{
				if (uParam0->f_116 == -1 || ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) != uParam0->f_613)
				{
					uParam0->f_613 = ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());
					if (func_973(&(uParam0->f_485), *uParam0, &(uParam0->f_184), &Global_4537616, &(uParam0->f_716), &(uParam0->f_719)))
					{
						__LIB_10__::func_18("GRABBED LOCATE DATA", -1);
						uParam0->f_116 = 0;
					}
					else
					{
						__LIB_10__::func_18("FAILED TO GRAB LOCATE DATA", -1);
						uParam0->f_116 = 99;
					}
				}
				if (uParam0->f_116 == 0)
				{
					if (!bVar3)
					{
						if (__LIB_5__::func_743(1) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), uParam0->f_184.f_13[0 /*3*/], uParam0->f_184.f_13[1 /*3*/], uParam0->f_184.f_26[0], false, true, 0))
						{
							bVar5 = true;
							if (__LIB_29__::func_549(uParam0, 0))
							{
								if (uParam0->f_3 == -1)
								{
									if (__LIB_29__::func_533())
									{
										if (__LIB_29__::func_532())
										{
											sVar7 = "HAIR_BROWSE_MB" /* GXT: Press ~a~ to get a haircut, a beard or to have makeup applied. */;
										}
										else
										{
											sVar7 = "HAIR_BROWSE_B" /* GXT: Press ~a~ to get a haircut or a beard. */;
										}
									}
									else if (__LIB_29__::func_532())
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
									__LIB_7__::func_508(&(uParam0->f_3), 3, sVar7, 0, 0, 0, 0);
								}
								bVar4 = true;
								PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, 51 /*INPUT_CONTEXT*/);
								if (__LIB_2__::func_187(uParam0->f_3, 1) || __LIB_5__::func_743(1))
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
				if (__LIB_7__::func_281(PLAYER::PLAYER_ID()))
				{
					if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() || __LIB_2__::func_161("SHOP_CLOSED" /* GXT: ~a~ is closed. Please come back later. */, __LIB_9__::func_422(*uParam0, 0, 0)))
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
		__LIB_20__::func_35("SHOP_COPS" /* GXT: Lose the Cops. */);
	}
	else if (bVar2)
	{
		if (!__LIB_41__::func_967(uParam0) && *uParam0 != 50)
		{
			__LIB_20__::func_35("HAIR_FTRIG_BUSY" /* GXT: The hairdresser is busy, please wait. */);
		}
	}
	else if (bVar1)
	{
		if (*uParam0 != 50 && !__LIB_0__::func_665(PLAYER::PLAYER_ID()))
		{
			__LIB_20__::func_121("SHOP_CLOSED" /* GXT: ~a~ is closed. Please come back later. */, __LIB_9__::func_422(*uParam0, 0, 0));
		}
	}
	else if (__LIB_0__::func_811(PLAYER::PLAYER_PED_ID()) && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() || __LIB_2__::func_161("SHOP_NONE" /* GXT: ~a~ is unavailable. */, __LIB_9__::func_422(*uParam0, 0, 0)))
		{
			__LIB_20__::func_121("SHOP_JUGG_NONE" /* GXT: ~a~ is unavailable while wearing the Ballistic Equipment. */, __LIB_9__::func_422(*uParam0, 0, 0));
		}
	}
	else if (bVar3)
	{
		if (*uParam0 == 50)
		{
			__LIB_29__::func_543(PLAYER::PLAYER_ID(), uParam0->f_523);
		}
		else
		{
			__LIB_29__::func_544(PLAYER::PLAYER_ID(), uParam0->f_523);
		}
		__LIB_9__::func_913();
		uParam0->f_11 = 4;
		uParam0->f_116.f_31 = 0;
		uParam0->f_723 = MISC::GET_GAME_TIMER();
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			uParam0->f_722 = NETWORK::GET_NETWORK_TIME();
		}
		uParam0->f_714 = -1;
		func_979(uParam0, &(uParam0->f_116));
	}
	else if ((iVar6 == 0 && !Global_78319) && !bVar4)
	{
		__LIB_20__::func_35(__LIB_29__::func_548(uParam0->f_184));
	}
	else
	{
		__LIB_9__::func_913();
		uParam0->f_116.f_19 = 0;
	}
	if (!bVar4 && !__LIB_41__::func_967(uParam0))
	{
		if (uParam0->f_3 != -1)
		{
			__LIB_6__::func_404(&(uParam0->f_3));
		}
	}
	if (!bVar3)
	{
		if (*uParam0 != 50 && __LIB_10__::func_482(PLAYER::PLAYER_ID(), uParam0->f_523, 1))
		{
			__LIB_10__::func_558(PLAYER::PLAYER_ID(), uParam0->f_523);
		}
		if (*uParam0 == 50 && __LIB_29__::func_545(PLAYER::PLAYER_ID(), uParam0->f_523, 0))
		{
			__LIB_29__::func_487(PLAYER::PLAYER_ID(), uParam0->f_523);
		}
		if (uParam0->f_523 == 50 && !bVar5)
		{
			__LIB_29__::func_553(uParam0);
		}
	}
}

bool func_973(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x9D632
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
	iVar6 = MISC::GET_HASH_KEY(__LIB_18__::func_444(iParam1));
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
			func_410(uParam0, uParam3, __LIB_11__::func_460(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())), 0, -1, uParam4, uParam5);
		}
		else
		{
			__LIB_39__::func_366(uParam0, uParam3, __LIB_11__::func_460(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())), 0, 1);
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
			func_410(uParam0, uParam3, __LIB_11__::func_460(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())), 0, -1, uParam4, uParam5);
		}
		else
		{
			__LIB_39__::func_366(uParam0, uParam3, __LIB_11__::func_460(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())), 0, 0);
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
			func_410(uParam0, uParam3, __LIB_11__::func_460(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())), 0, -1, uParam4, uParam5);
		}
		else
		{
			__LIB_39__::func_366(uParam0, uParam3, __LIB_11__::func_460(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())), 0, 1);
		}
	}
	__LIB_35__::func_903(iVar1, iParam1, &(Var0.f_1));
	__LIB_35__::func_903(iVar1, iParam1, &(Var0.f_13[0 /*3*/]));
	__LIB_35__::func_903(iVar1, iParam1, &(Var0.f_13[1 /*3*/]));
	__LIB_35__::func_903(iVar1, iParam1, &(Var0.f_31));
	__LIB_35__::func_903(iVar1, iParam1, &(Var0.f_4));
	__LIB_35__::func_903(iVar1, iParam1, &(Var0.f_42));
	__LIB_38__::func_42(iVar1, iParam1, &(Var0.f_45));
	__LIB_40__::func_587(iParam1, &(Var0.f_39));
	*uParam2 = { Var0 };
	return (uParam3->f_379[0] != 0 || uParam3->f_379[1] != 0);
}

void func_979(var uParam0, var uParam1)//Position - 0x9DE4E
{
	if (uParam0->f_9)
	{
		if (uParam0->f_11 == 4 || (uParam0->f_11 == 2 && uParam1->f_5 > 1))
		{
			__LIB_39__::func_622(*uParam0, 1);
			__LIB_39__::func_616(*uParam0, 1);
			__LIB_0__::func_55();
		}
		else
		{
			__LIB_39__::func_621(*uParam0, 0);
			__LIB_39__::func_616(*uParam0, 0);
		}
	}
}

void func_990(var uParam0)//Position - 0x9E1C0
{
	if (__LIB_29__::func_552(uParam0))
	{
		if (__LIB_20__::func_554(1))
		{
			__LIB_20__::func_271(*uParam0, 20, 1);
			if (__LIB_29__::func_540(uParam0))
			{
				func_1017(uParam0);
			}
			else
			{
				func_992(uParam0);
			}
			__LIB_11__::func_359(&(uParam0->f_503), 1);
		}
	}
	else
	{
		__LIB_20__::func_270(*uParam0, 20, 1);
		__LIB_39__::func_623(*uParam0, 1);
		uParam0->f_11 = 3;
	}
}

void func_992(var uParam0)//Position - 0x9E2A4
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
	if ((__LIB_0__::func_134() || __LIB_26__::func_574(*uParam0)) || SYSTEM::VDIST(uParam0->f_12.f_6, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > 30f)
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
			__LIB_42__::func_523(uParam0);
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
			__LIB_41__::func_379(*uParam0, &Var0, &Var1);
			__LIB_42__::func_324(uParam0, "keeper_tutorial", 1, 0, 0, -1f);
			__LIB_41__::func_379(*uParam0, &Var0, &Var1);
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
				__LIB_0__::func_203(&(uParam0->f_276.f_5), __LIB_9__::func_612("F"), uParam0->f_43, "HairCustomer", 0, 1);
			}
			ENTITY::PLAY_SYNCHRONIZED_MAP_ENTITY_ANIM(__LIB_31__::func_882(*uParam0, 0), 20f, joaat("v_ilev_bs_door"), uParam0->f_529, "DOOR_TUTORIAL", uParam0->f_486, 8f, -8f, 0, 1000f);
			StringCopy(&(uParam0->f_116.f_11), "SHOP_INTRO" /* GXT: Welcome to ~a~. */, 16);
			uParam0->f_116.f_9 = MISC::GET_GAME_TIMER();
			uParam0->f_155.f_28++;
			break;
		case 1:
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			__LIB_8__::func_611(0);
			if (__LIB_39__::func_372(uParam0))
			{
				uParam0->f_155.f_28 = iVar2;
			}
			if (__LIB_20__::func_112(*uParam0, 0))
			{
				__LIB_11__::func_467(*uParam0, &(uParam0->f_116.f_11), 0);
			}
			if (!__LIB_0__::func_75() && (MISC::GET_GAME_TIMER() - uParam0->f_116.f_9) >= 1000)
			{
				__LIB_38__::func_26(&(uParam0->f_276.f_5), "hairdau", "haird_bbye", 4, Global_100492, 0, 0);
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
			__LIB_8__::func_611(0);
			if (__LIB_39__::func_372(uParam0))
			{
				uParam0->f_155.f_28 = iVar2;
			}
			if (__LIB_20__::func_112(*uParam0, 0))
			{
				__LIB_11__::func_467(*uParam0, &(uParam0->f_116.f_11), 0);
			}
			if ((MISC::GET_GAME_TIMER() - uParam0->f_116.f_9) >= 1100)
			{
				uParam0->f_116.f_9 = MISC::GET_GAME_TIMER();
				uParam0->f_155.f_28++;
			}
			break;
		case 3:
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			__LIB_8__::func_611(0);
			if (__LIB_39__::func_372(uParam0))
			{
				uParam0->f_155.f_28 = iVar2;
			}
			if (__LIB_20__::func_112(*uParam0, 0))
			{
				__LIB_11__::func_467(*uParam0, &(uParam0->f_116.f_11), 0);
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
			__LIB_41__::func_377(*uParam0, &(uParam0->f_155));
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
			__LIB_8__::func_611(0);
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
				ENTITY::STOP_SYNCHRONIZED_MAP_ENTITY_ANIM(__LIB_31__::func_882(*uParam0, 0), 20f, joaat("v_ilev_bs_door"), -1000f);
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uParam0->f_528))
			{
				PED::SET_SYNCHRONIZED_SCENE_PHASE(uParam0->f_528, 1f);
			}
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				__LIB_41__::func_377(*uParam0, &(uParam0->f_155));
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), uParam0->f_155[1 /*3*/], true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), uParam0->f_155.f_7[1]);
				}
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uParam0->f_529))
				{
					ENTITY::STOP_SYNCHRONIZED_MAP_ENTITY_ANIM(__LIB_31__::func_882(*uParam0, 0), 20f, joaat("v_ilev_bs_door"), -1000f);
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
					__LIB_29__::func_489(uParam0, 0);
				}
				else
				{
					__LIB_34__::func_777(uParam0, 0);
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
					__LIB_40__::func_587(*uParam0, &(uParam0->f_184.f_39));
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
			func_993(uParam0);
			break;
	}
}

void func_993(var uParam0)//Position - 0x9E9B6
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
	__LIB_32__::func_500();
	HUD::CLEAR_HELP(true);
	__LIB_9__::func_913();
	__LIB_26__::func_428(*uParam0, 0);
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		SYSTEM::WAIT(0);
		if (!CAM::IS_SCREEN_FADING_IN())
		{
			__LIB_10__::func_18("END_SHOP_CUTSCENE - fading in screen", -1);
			CAM::DO_SCREEN_FADE_IN(500);
		}
	}
	iVar0 = 0;
	while (iVar0 < 58)
	{
		if (__LIB_0__::func_299(iVar0) == 0)
		{
			__LIB_32__::func_780(iVar0, 1);
		}
		iVar0++;
	}
	uParam0->f_105 = 0;
	uParam0->f_503.f_19 = 0;
	uParam0->f_592 = 0;
	uParam0->f_490 = 0;
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
}

void func_1017(var uParam0)//Position - 0x9FFDC
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
	if ((__LIB_0__::func_134() || __LIB_26__::func_574(*uParam0)) || SYSTEM::VDIST(uParam0->f_12.f_6, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > 40f)
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
			__LIB_42__::func_523(uParam0);
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
			__LIB_41__::func_379(*uParam0, &Var0, &Var1);
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
			__LIB_42__::func_324(uParam0, "keeper_intro", 1, 0, 0, -1056964608);
			if (!PED::IS_PED_INJURED(uParam0->f_43))
			{
				__LIB_40__::func_587(*uParam0, &(uParam0->f_184.f_39));
				PED::SET_FORCE_FOOTSTEP_UPDATE(uParam0->f_43, true);
				TASK::CLEAR_PED_TASKS(uParam0->f_43);
				TASK::OPEN_SEQUENCE_TASK(&iVar3);
				uParam0->f_489 = "customer_intro";
				TASK::TASK_PLAY_ANIM_ADVANCED(0, uParam0->f_486, uParam0->f_489, Var0, Var1, 1000f, -4f, -1, 1536, 0f, 2, 0);
				TASK::CLOSE_SEQUENCE_TASK(iVar3);
				TASK::TASK_PERFORM_SEQUENCE(uParam0->f_43, iVar3);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uParam0->f_43, false, false);
				TASK::CLEAR_SEQUENCE_TASK(&iVar3);
				__LIB_0__::func_203(&(uParam0->f_276.f_5), __LIB_9__::func_612("F"), uParam0->f_43, "HairCustomer", 0, 1);
			}
			StringCopy(&(uParam0->f_116.f_11), "SHOP_INTRO" /* GXT: Welcome to ~a~. */, 16);
			uParam0->f_116.f_9 = MISC::GET_GAME_TIMER();
			uParam0->f_155.f_28++;
			break;
		case 1:
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			__LIB_8__::func_611(0);
			if (__LIB_39__::func_372(uParam0))
			{
				uParam0->f_155.f_28 = iVar2;
			}
			if (__LIB_20__::func_112(*uParam0, 0))
			{
				__LIB_11__::func_467(*uParam0, &(uParam0->f_116.f_11), 0);
			}
			if (!__LIB_0__::func_75() && (MISC::GET_GAME_TIMER() - uParam0->f_116.f_9) >= 500)
			{
				__LIB_38__::func_26(&(uParam0->f_276.f_5), "hairdau", "haird_hbye", 4, Global_100492, 0, 0);
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
			__LIB_8__::func_611(0);
			if (__LIB_39__::func_372(uParam0))
			{
				uParam0->f_155.f_28 = iVar2;
			}
			if (__LIB_20__::func_112(*uParam0, 0))
			{
				__LIB_11__::func_467(*uParam0, &(uParam0->f_116.f_11), 0);
			}
			if ((MISC::GET_GAME_TIMER() - uParam0->f_116.f_9) >= 1100)
			{
				uParam0->f_116.f_9 = MISC::GET_GAME_TIMER();
				uParam0->f_155.f_28++;
			}
			break;
		case 3:
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			__LIB_8__::func_611(0);
			if (__LIB_39__::func_372(uParam0))
			{
				uParam0->f_155.f_28 = iVar2;
			}
			if (__LIB_20__::func_112(*uParam0, 0))
			{
				__LIB_11__::func_467(*uParam0, &(uParam0->f_116.f_11), 0);
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
			__LIB_8__::func_611(0);
			if (uParam0->f_490 == 1)
			{
				StringCopy(&(uParam0->f_116.f_11), "", 16);
				__LIB_9__::func_913();
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
				__LIB_10__::func_701(PLAYER::PLAYER_PED_ID(), -820.9124f, -187.2931f, 36.5689f, 319.5678f, 0, 1);
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			}
			if (!PED::IS_PED_INJURED(uParam0->f_12))
			{
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					__LIB_29__::func_489(uParam0, 0);
				}
				TASK::CLEAR_PED_TASKS(uParam0->f_12);
				__LIB_34__::func_777(uParam0, 0);
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
			func_993(uParam0);
			break;
	}
}

void func_1021(var uParam0)//Position - 0xA05A5
{
	if (((__LIB_20__::func_554(1) && !__LIB_0__::func_134()) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || __LIB_5__::func_743(1))
	{
		__LIB_41__::func_487(uParam0);
		if (uParam0->f_8 == 1)
		{
			if ((__LIB_29__::func_552(uParam0) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
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

void func_1027(var uParam0)//Position - 0xA07F7
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
			if (__LIB_41__::func_378(uParam0, &(uParam0->f_446), uParam0->f_523))
			{
				uParam0->f_116.f_5++;
			}
			else
			{
				func_1120(uParam0, 0);
			}
			break;
		case 1:
			if (__LIB_10__::func_829(*uParam0))
			{
				uParam0->f_116.f_5++;
			}
			break;
		case 2:
			STREAMING::REQUEST_MODEL(joaat("p_cs_scissors_s"));
			if ((!__LIB_39__::func_518(*uParam0) && !Global_78319) && !__LIB_0__::func_78(uParam0->f_43.f_2, 0f, 0f, 0f, 0))
			{
				uParam0->f_105 = 1;
			}
			else
			{
				uParam0->f_105 = 0;
			}
			if (!uParam0->f_12.f_26)
			{
				__LIB_29__::func_554(&(uParam0->f_12), uParam0->f_12.f_6);
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
					__LIB_29__::func_554(&(uParam0->f_446), uParam0->f_446.f_6);
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
					__LIB_29__::func_554(&(uParam0->f_43), uParam0->f_43.f_2);
					if (__LIB_29__::func_552(uParam0))
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
			if (__LIB_29__::func_552(uParam0))
			{
				if (__LIB_29__::func_540(uParam0))
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
				if (!__LIB_29__::func_542(uParam0))
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
						iVar4 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(__LIB_31__::func_882(*uParam0, 0), __LIB_18__::func_444(*uParam0));
						if (iVar4 == 0)
						{
							__LIB_10__::func_18("Hairdo interior is null..", -1);
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
						__LIB_10__::func_18("Using net shop keeper..", -1);
						__LIB_29__::func_559(&(uParam0->f_12));
						if (!uParam0->f_12.f_27)
						{
							__LIB_10__::func_18("Waiting for shop keeper to be initialised", -1);
							return;
						}
					}
				}
				else
				{
					__LIB_10__::func_18("Creating shop keeper..", -1);
					MISC::CLEAR_AREA(uParam0->f_12.f_6, 2.5f, true, false, false, false);
					Var5 = { uParam0->f_12.f_6 };
					if (__LIB_29__::func_552(uParam0))
					{
						if (!__LIB_29__::func_540(uParam0))
						{
							if (__LIB_41__::func_379(*uParam0, &Var1, &Var2))
							{
								Var5 = { Var1 };
							}
						}
					}
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						if (!__LIB_1__::func_263(&Local_66, 4, uParam0->f_12.f_3, Var5, uParam0->f_12.f_15, 1, 1, 1))
						{
							return;
						}
						if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
						{
							Local_66.f_3 = 1;
						}
						__LIB_29__::func_559(&(uParam0->f_12));
					}
					else
					{
						uParam0->f_12 = PED::CREATE_PED(4, uParam0->f_12.f_3, Var5, uParam0->f_12.f_15, false, false);
					}
					if (__LIB_11__::func_398(0))
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
						else if (__LIB_29__::func_540(uParam0))
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
						if (__LIB_10__::func_486(*uParam0))
						{
							INTERIOR::RETAIN_ENTITY_IN_INTERIOR(uParam0->f_12, INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(__LIB_31__::func_882(*uParam0, 0), __LIB_18__::func_444(*uParam0)));
						}
						ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(uParam0->f_12, true);
						ENTITY::SET_ENTITY_LOD_DIST(uParam0->f_12, 300);
						if (__LIB_29__::func_540(uParam0))
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
					if (__LIB_29__::func_540(uParam0))
					{
						__LIB_0__::func_202(&(uParam0->f_276.f_5), __LIB_9__::func_612("E"));
						__LIB_0__::func_203(&(uParam0->f_276.f_5), __LIB_9__::func_612("E"), uParam0->f_12, "ShopHairStylist", 0, 1);
					}
					else
					{
						__LIB_0__::func_202(&(uParam0->f_276.f_5), __LIB_9__::func_612("D"));
						__LIB_0__::func_203(&(uParam0->f_276.f_5), __LIB_9__::func_612("D"), uParam0->f_12, "ShopBarber", 0, 1);
					}
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_12.f_3);
					uParam0->f_12.f_28 = 0;
					uParam0->f_12.f_26 = 1;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_446) && uParam0->f_446.f_28)
			{
				__LIB_10__::func_18("Creating shop receptionist", -1);
				MISC::CLEAR_AREA(uParam0->f_446.f_6, 2.5f, true, false, false, false);
				uParam0->f_446 = PED::CREATE_PED(5, uParam0->f_446.f_3, uParam0->f_446.f_6, uParam0->f_446.f_15, false, false);
				PED::SET_PED_DEFAULT_COMPONENT_VARIATION(uParam0->f_446);
				if (__LIB_10__::func_486(*uParam0))
				{
					INTERIOR::RETAIN_ENTITY_IN_INTERIOR(uParam0->f_446, INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(__LIB_31__::func_882(*uParam0, 0), __LIB_18__::func_444(*uParam0)));
				}
				ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(uParam0->f_446, true);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_446, 185, true);
				PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(uParam0->f_12, false);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_446.f_3);
				uParam0->f_446.f_28 = 0;
				PED::SET_PED_AS_ENEMY(uParam0->f_446, false);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_446, true);
				uParam0->f_446.f_26 = 1;
				__LIB_0__::func_202(&(uParam0->f_276.f_5), __LIB_9__::func_612("D"));
				__LIB_0__::func_203(&(uParam0->f_276.f_5), __LIB_9__::func_612("D"), uParam0->f_12, "ShopBarberAssistant", 0, 1);
				if (__LIB_29__::func_540(uParam0))
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
				__LIB_10__::func_18("Creating shop customer", -1);
				MISC::CLEAR_AREA(uParam0->f_43.f_2, 2.5f, true, false, false, false);
				uParam0->f_43 = PED::CREATE_PED(4, uParam0->f_43.f_1, uParam0->f_43.f_2, uParam0->f_43.f_5, false, false);
				if (__LIB_29__::func_540(uParam0))
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
				if (__LIB_10__::func_486(*uParam0))
				{
					INTERIOR::RETAIN_ENTITY_IN_INTERIOR(uParam0->f_43, INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(__LIB_31__::func_882(*uParam0, 0), __LIB_18__::func_444(*uParam0)));
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
				if (__LIB_29__::func_540(uParam0) && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
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
					if (__LIB_11__::func_398(0))
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
			if (!__LIB_29__::func_552(uParam0))
			{
				if (__LIB_29__::func_540(uParam0))
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
				if (!__LIB_29__::func_542(uParam0))
				{
					return;
				}
			}
			if (__LIB_29__::func_552(uParam0))
			{
				if (__LIB_29__::func_540(uParam0))
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
					__LIB_42__::func_324(uParam0, sVar8, 0, 0, 0, -1056964608);
				}
				if (!PED::IS_PED_INJURED(uParam0->f_43))
				{
					if (__LIB_41__::func_379(*uParam0, &Var1, &Var2))
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
			__LIB_40__::func_937(*uParam0, 0, 0);
			uParam0->f_116.f_5 = 0;
			uParam0->f_11 = 1;
			break;
	}
}

void func_1056(var uParam0)//Position - 0xA2FD8
{
	int iVar0;
	int iVar1;
	if (!uParam0->f_9)
	{
		__LIB_10__::func_92(&(uParam0->f_276), -1, 1);
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
							__LIB_10__::func_92(&(uParam0->f_276), 0, 2);
							uParam0->f_575 = 1;
						}
					}
					else if ((MISC::GET_GAME_TIMER() - uParam0->f_573) > 0)
					{
						__LIB_10__::func_92(&(uParam0->f_276), 0, 2);
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
	else if (__LIB_10__::func_488(*uParam0) > 30f)
	{
		uParam0->f_575 = 0;
		uParam0->f_576 = 0;
	}
	if (uParam0->f_116.f_19)
	{
		uParam0->f_575 = 1;
		if (uParam0->f_116.f_31 == 1)
		{
			__LIB_10__::func_92(&(uParam0->f_276), -1, 1);
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
						__LIB_10__::func_92(&(uParam0->f_276), 1, 2);
						uParam0->f_579 = 1;
					}
				}
				else if ((MISC::GET_GAME_TIMER() - uParam0->f_577) > 0)
				{
					__LIB_10__::func_92(&(uParam0->f_276), 1, 2);
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
							__LIB_10__::func_92(&(uParam0->f_276), 2, 2);
							uParam0->f_583 = 1;
						}
					}
					else if ((MISC::GET_GAME_TIMER() - uParam0->f_581) > 0)
					{
						__LIB_10__::func_92(&(uParam0->f_276), 2, 2);
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
					__LIB_10__::func_92(&(uParam0->f_276), 3, 2);
					uParam0->f_588 = 0;
				}
			}
			else if ((MISC::GET_GAME_TIMER() - uParam0->f_585) > 0)
			{
				__LIB_10__::func_92(&(uParam0->f_276), 3, 2);
				uParam0->f_588 = 0;
			}
		}
	}
	if (uParam0->f_276 != -1)
	{
		if (!__LIB_41__::func_488(&(uParam0->f_276), *uParam0, 0))
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
					__LIB_10__::func_21(&(uParam0->f_276));
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
				__LIB_10__::func_21(&(uParam0->f_276));
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
					if (__LIB_39__::func_363(-1))
					{
						AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(uParam0->f_12, "SHOP_NO_COPS", "SPEECH_PARAMS_FORCE", iVar1);
					}
					else if (__LIB_7__::func_320(PLAYER::PLAYER_PED_ID()) || (__LIB_6__::func_843(PLAYER::PLAYER_PED_ID()) && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()))
					{
						AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(uParam0->f_12, "SHOP_GREET_UNUSUAL", "SPEECH_PARAMS_FORCE", iVar1);
					}
					else if ((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == joaat("Player_Zero")) && (func_1207(PLAYER::PLAYER_PED_ID(), 12, 8) || func_1207(PLAYER::PLAYER_PED_ID(), 12, 28)))
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
								if (iVar0 != 1 && __LIB_20__::func_728() == 0)
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
			__LIB_10__::func_542(&(uParam0->f_276));
		}
	}
}

void func_1069(var uParam0, var uParam1, int iParam2)//Position - 0xA3B22
{
	bool bVar0;
	int iVar1;
	struct<3> Var2;
	int iVar3;
	if (uParam0->f_11 == 4)
	{
		if (iParam2 == 0)
		{
			PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/);
		}
		PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/);
		PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/);
		PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/);
		PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 189 /*INPUT_FRONTEND_LEFT*/);
		PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 190 /*INPUT_FRONTEND_RIGHT*/);
		if (Global_78579)
		{
			PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/, true);
			PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/, true);
			PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/, true);
			PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/, true);
			PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 189 /*INPUT_FRONTEND_LEFT*/, true);
			PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 190 /*INPUT_FRONTEND_RIGHT*/, true);
		}
	}
	else if (uParam1->f_30)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(uParam1->f_29, 1500)))
			{
				PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/, false);
			}
			else
			{
				uParam1->f_30 = 0;
			}
		}
		else if ((MISC::GET_GAME_TIMER() - uParam1->f_28) < 1500)
		{
			PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/, false);
		}
		else
		{
			uParam1->f_30 = 0;
		}
	}
	if ((((((((((uParam0->f_7 && *uParam0 != 21) && !__LIB_5__::func_722(15f)) && !__LIB_1__::func_697(64)) && !__LIB_39__::func_627(*uParam0)) && !__LIB_39__::func_626(*uParam0)) && !__LIB_20__::func_563(*uParam0)) && !__LIB_0__::func_811(PLAYER::PLAYER_PED_ID())) && !Global_1640732) && !(NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && __LIB_9__::func_375(PLAYER::PLAYER_ID()))) && !__LIB_10__::func_529())
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (__LIB_1__::func_390(PLAYER::PLAYER_ID(), 0) && __LIB_0__::func_299(*uParam0) == 3)
			{
				return;
			}
			if (__LIB_0__::func_299(*uParam0) == 1)
			{
				if (__LIB_1__::func_205(PLAYER::PLAYER_ID()) == 3)
				{
					if (__LIB_1__::func_337(PLAYER::PLAYER_ID()) == 8 || __LIB_1__::func_337(PLAYER::PLAYER_ID()) == 9)
					{
						return;
					}
				}
			}
		}
		bVar0 = true;
		iVar1 = __LIB_10__::func_15(*uParam0, 0);
		if (iVar1 != 226)
		{
			Var2 = { __LIB_0__::func_347(iVar1) };
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var2, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), true) < 1.5f)
			{
				bVar0 = false;
			}
		}
		if (bVar0)
		{
			if (!Global_1957741)
			{
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/, true);
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 102, true);
			}
		}
		if (__LIB_6__::func_837(*uParam0, 30, 1))
		{
			return;
		}
		if (!__LIB_0__::func_527() && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar3, true))
			{
				if (iVar3 != joaat("OBJECT"))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
					{
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
					}
				}
			}
		}
		if (PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
		}
		if (__LIB_0__::func_299(*uParam0) == 3)
		{
			HUD::HUD_SUPPRESS_WEAPON_WHEEL_RESULTS_THIS_FRAME();
		}
		else if (__LIB_0__::func_299(*uParam0) != 5)
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
		}
		if (*uParam0 == 45)
		{
			if ((__LIB_0__::func_341(PLAYER::PLAYER_ID()) || (__LIB_1__::func_105(PLAYER::PLAYER_ID()) && __LIB_6__::func_25() > 0)) || __LIB_0__::func_267(PLAYER::PLAYER_ID()))
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 3f);
			}
			else if (!__LIB_0__::func_280(PLAYER::PLAYER_ID()) && !__LIB_2__::func_102(PLAYER::PLAYER_ID()))
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1.85f);
			}
		}
		else
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1.35f);
		}
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 157 /*INPUT_SELECT_WEAPON_UNARMED*/, false);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 158 /*INPUT_SELECT_WEAPON_MELEE*/, false);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 159 /*INPUT_SELECT_WEAPON_HANDGUN*/, false);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 160 /*INPUT_SELECT_WEAPON_SHOTGUN*/, false);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 161 /*INPUT_SELECT_WEAPON_SMG*/, false);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 162 /*INPUT_SELECT_WEAPON_AUTO_RIFLE*/, false);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 163 /*INPUT_SELECT_WEAPON_SNIPER*/, false);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 164 /*INPUT_SELECT_WEAPON_HEAVY*/, false);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 165 /*INPUT_SELECT_WEAPON_SPECIAL*/, false);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 14 /*INPUT_WEAPON_WHEEL_NEXT*/, false);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 15 /*INPUT_WEAPON_WHEEL_PREV*/, false);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 16 /*INPUT_SELECT_NEXT_WEAPON*/, false);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 17 /*INPUT_SELECT_PREV_WEAPON*/, false);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 53 /*INPUT_WEAPON_SPECIAL*/, false);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 54 /*INPUT_WEAPON_SPECIAL_TWO*/, false);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 140 /*INPUT_MELEE_ATTACK_LIGHT*/, false);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 141 /*INPUT_MELEE_ATTACK_HEAVY*/, false);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 142 /*INPUT_MELEE_ATTACK_ALTERNATE*/, false);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 143 /*INPUT_MELEE_BLOCK*/, false);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 143 /*INPUT_MELEE_BLOCK*/, false);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 47 /*INPUT_DETONATE*/, false);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 38 /*INPUT_PICKUP*/, false);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 69 /*INPUT_VEH_ATTACK*/, false);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 70 /*INPUT_VEH_ATTACK2*/, false);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/, false);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 92 /*INPUT_VEH_PASSENGER_ATTACK*/, false);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 99 /*INPUT_VEH_SELECT_NEXT_WEAPON*/, false);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 115 /*INPUT_VEH_FLY_SELECT_NEXT_WEAPON*/, false);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 46 /*INPUT_TALK*/, false);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/, false);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 36 /*INPUT_DUCK*/, false);
	}
	if (!uParam0->f_7)
	{
		if ((*uParam0 == 28 && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 15.054502f, -1115.2765f, 28.233673f, 18.64721f, -1116.5837f, 30.608673f, 2.1875f, false, true, 0)) || (*uParam0 == 38 && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 813.5249f, -2147.4287f, 27.930632f, 809.9389f, -2147.4417f, 30.177204f, 2.1875f, false, true, 0)))
		{
			if (((!__LIB_5__::func_722(15f) && !__LIB_1__::func_697(64)) && !__LIB_39__::func_627(*uParam0)) && !__LIB_39__::func_626(*uParam0))
			{
				if (*uParam0 == 45)
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1.85f);
				}
				else
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1.35f);
				}
			}
		}
	}
}

void func_1083(var uParam0, var uParam1)//Position - 0xA42C7
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
			if ((__LIB_6__::func_837(*uParam0, 12, 1) || __LIB_6__::func_837(*uParam0, 13, 1)) || __LIB_6__::func_837(*uParam0, 2, 1))
			{
				uParam0->f_108 = 1;
			}
		}
		if (uParam0->f_11 != 6 && !BitTest(Global_100493.f_1393[*uParam0], 11))
		{
			bVar0 = __LIB_10__::func_829(*uParam0);
			if (*uParam0 == 44)
			{
				if (uParam0->f_11 == 0)
				{
					if (uParam1->f_5 == 1)
					{
						if (!__LIB_9__::func_489(*uParam0) && !__LIB_10__::func_829(*uParam0))
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
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && __LIB_0__::func_299(*uParam0) == 4)
					{
						if (uParam0->f_11 == 4)
						{
							__LIB_41__::func_965(uParam1, 0, 0, 0, 0);
							__LIB_9__::func_906(1);
							__LIB_32__::func_500();
						}
					}
					uParam0->f_11 = 6;
				}
			}
			if (uParam0->f_11 == 6)
			{
				__LIB_9__::func_913();
			}
		}
		if (uParam0->f_11 == 6)
		{
			__LIB_41__::func_487(uParam0);
			if (!uParam0->f_1)
			{
				if (uParam0->f_3 != -1)
				{
					__LIB_6__::func_404(&(uParam0->f_3));
				}
				bVar1 = false;
				bVar2 = false;
				bVar3 = false;
				if (uParam0->f_7 || ((__LIB_26__::func_574(*uParam0) && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) && __LIB_0__::func_299(*uParam0) != 4))
				{
					bVar2 = true;
				}
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (((!__LIB_10__::func_549(*uParam0) || !__LIB_6__::func_837(*uParam0, 0, 0)) || __LIB_0__::func_739()) || __LIB_6__::func_936(PLAYER::PLAYER_ID()))
					{
						bVar1 = true;
					}
				}
				else if ((!__LIB_10__::func_548(*uParam0) || !__LIB_6__::func_837(*uParam0, 0, 0)) || __LIB_6__::func_936(PLAYER::PLAYER_ID()))
				{
					bVar1 = true;
				}
				if (!bVar1)
				{
					if ((PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || ((uParam0->f_7 && !uParam0->f_8) && __LIB_0__::func_299(*uParam0) == 3))
					{
						bVar1 = true;
					}
				}
				if (!bVar1)
				{
					if (!uParam0->f_7)
					{
						if (__LIB_6__::func_837(*uParam0, 0, 1) || (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !__LIB_0__::func_299(*uParam0) == 4))
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
							fVar5 = __LIB_10__::func_488(*uParam0);
							if (fVar5 > fVar4)
							{
								bVar1 = true;
							}
						}
					}
					else if (!uParam0->f_8 && __LIB_0__::func_299(*uParam0) == 3)
					{
						bVar1 = true;
					}
				}
				if (__LIB_39__::func_627(*uParam0))
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
					__LIB_9__::func_913();
				}
				else if ((((((!__LIB_10__::func_487(*uParam0) && !__LIB_9__::func_954(*uParam0)) && *uParam0 != 50) && *uParam0 != 51) && *uParam0 != 54) && *uParam0 != 55) && *uParam0 != 57)
				{
					if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() || __LIB_2__::func_161("SHOP_CLOSED" /* GXT: ~a~ is closed. Please come back later. */, __LIB_9__::func_422(*uParam0, 0, 0)))
					{
						if (!__LIB_0__::func_1("VENDHLP" /* GXT: Press ~INPUT_CONTEXT~ to buy a soda for $1. */) && !__LIB_0__::func_665(PLAYER::PLAYER_ID()))
						{
							__LIB_20__::func_121("SHOP_CLOSED" /* GXT: ~a~ is closed. Please come back later. */, __LIB_9__::func_422(*uParam0, 0, 0));
						}
					}
				}
				if (!bVar3)
				{
					if (bVar2)
					{
						if (__LIB_10__::func_792(*uParam0))
						{
							__LIB_40__::func_937(*uParam0, 0, 1);
						}
						__LIB_40__::func_937(*uParam0, 0, 0);
					}
					else
					{
						__LIB_40__::func_937(*uParam0, 1, 0);
					}
				}
			}
			if (__LIB_20__::func_554(1))
			{
				if (Global_100493.f_77[*uParam0])
				{
					if ((uParam0->f_108 && !__LIB_7__::func_268(PLAYER::PLAYER_ID(), 1, 0)) && !__LIB_26__::func_574(*uParam0))
					{
						__LIB_20__::func_748(*uParam0);
					}
				}
				else if ((((((uParam0->f_108 && !__LIB_0__::func_39(11)) && !__LIB_0__::func_39(9)) && !__LIB_0__::func_39(0)) && !__LIB_0__::func_39(3)) && !BitTest(Global_100493.f_1393[*uParam0], 1)) && !BitTest(Global_100493.f_1393[*uParam0], 2))
				{
					if (__LIB_0__::func_299(*uParam0) == 3)
					{
						__LIB_20__::func_748(*uParam0);
					}
					else if (!uParam0->f_7 && __LIB_10__::func_488(*uParam0) > 50f)
					{
						__LIB_20__::func_748(*uParam0);
					}
				}
			}
		}
	}
}

void func_1103(int iParam0)//Position - 0xA521A
{
	bool bVar0;
	bVar0 = false;
	if (iParam0 == 50)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		__LIB_20__::func_271(iParam0, 0, 1);
		__LIB_20__::func_271(iParam0, 0, 1);
		__LIB_20__::func_271(iParam0, 4, 1);
		__LIB_20__::func_270(iParam0, 4, 0);
		Global_100493.f_17 = 1;
	}
}

void func_1120(var uParam0, bool bParam1)//Position - 0xA6243
{
	int iVar0;
	__LIB_26__::func_448(1);
	if (uParam0->f_116.f_19)
	{
		if (__LIB_6__::func_267())
		{
			__LIB_5__::func_729();
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
		__LIB_6__::func_404(&(uParam0->f_3));
	}
	if (__LIB_10__::func_482(PLAYER::PLAYER_ID(), uParam0->f_523, 1) && *uParam0 != 50)
	{
		__LIB_10__::func_558(PLAYER::PLAYER_ID(), uParam0->f_523);
	}
	if (__LIB_29__::func_545(PLAYER::PLAYER_ID(), uParam0->f_523, 0) && *uParam0 == 50)
	{
		__LIB_29__::func_487(PLAYER::PLAYER_ID(), uParam0->f_523);
	}
	__LIB_42__::func_574(uParam0, uParam0->f_523);
	__LIB_10__::func_45(&(uParam0->f_51));
	if (!PED::IS_PED_INJURED(uParam0->f_12))
	{
		if (uParam0->f_10)
		{
			if (__LIB_10__::func_509(uParam0->f_523) || NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
			}
			else
			{
				PED::DELETE_PED(&(uParam0->f_12));
			}
		}
		else if (bParam1)
		{
			if (__LIB_10__::func_509(uParam0->f_523) || NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
			}
			else
			{
				PED::DELETE_PED(&(uParam0->f_12));
			}
		}
		else if (__LIB_10__::func_509(uParam0->f_523) || NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
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
			if (__LIB_11__::func_398(0))
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
	__LIB_29__::func_560(uParam0);
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
	if (__LIB_20__::func_674(uParam0->f_523))
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
	__LIB_34__::func_779(uParam0);
	if (uParam0->f_523 == 50)
	{
		Global_1945920 = -1;
	}
	if (iVar0 == 1)
	{
		if (__LIB_20__::func_554(1))
		{
			func_301(uParam0);
		}
		__LIB_41__::func_965(&(uParam0->f_116), 1, 1, 1, 1);
		CAM::SET_WIDESCREEN_BORDERS(false, 0);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		__LIB_9__::func_906(1);
		__LIB_32__::func_500();
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (Global_262145.f_2463 /* Tunable: IS_SALE_ON_IN_HAIR_SHOP */)
			{
				GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPShops");
			}
		}
		__LIB_7__::func_49(1, *uParam0);
		__LIB_34__::func_766(uParam0);
		__LIB_26__::func_428(*uParam0, 0);
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
		__LIB_11__::func_359(&(uParam0->f_503), 1);
		__LIB_42__::func_37(0);
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
		__LIB_10__::func_18("Resetting script", -1);
		MISC::SET_BIT(&(Global_100493.f_1393[uParam0->f_523]), 11);
	}
	else
	{
		__LIB_10__::func_18("Terminating script", -1);
		MISC::CLEAR_BIT(&(Global_100493.f_1393[uParam0->f_523]), 16);
		SCRIPT::TERMINATE_THIS_THREAD();
	}
}

void func_1130(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, var uParam9, int iParam10, var uParam11, var uParam12)//Position - 0xA6997
{
	bool bVar0;
	bool bVar1;
	bVar0 = !iParam10 == false;
	if ((iParam1 != __LIB_11__::func_460(iParam2) || iParam5 == -99) || uParam0->f_252 >= 124)
	{
		return;
	}
	Global_4537108[uParam0->f_252] = 0;
	bVar1 = true;
	if (__LIB_11__::func_489(iParam8))
	{
		bVar1 = true;
	}
	else if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == MISC::GET_HASH_KEY("wardrobe_sp"))
	{
		Global_78130[1 /*14*/] = { __LIB_35__::func_896(iParam2, iParam6, iParam5, -1) };
		if (!BitTest(Global_78130[1 /*14*/].f_6, 6))
		{
			if (!BitTest(Global_78130[1 /*14*/].f_6, 2))
			{
				bVar1 = false;
			}
			else if (Global_97728 == 1 && !BitTest(Global_113386.f_2363.f_539.f_3816[0 /*166*/][iParam6 /*11*/][(iParam5 / 32)], (iParam5 % 32)))
			{
				bVar1 = false;
			}
		}
	}
	else
	{
		Global_78130[1 /*14*/] = { __LIB_35__::func_896(iParam2, iParam6, iParam5, -1) };
		if (!BitTest(Global_78130[1 /*14*/].f_6, 1))
		{
			bVar1 = false;
		}
	}
	if (iParam8 == 0)
	{
		if (!HUD::DOES_TEXT_LABEL_EXIST(&(Global_78130[1 /*14*/].f_8)))
		{
			bVar1 = false;
		}
	}
	if (bVar1)
	{
		if (iParam3 == iParam4)
		{
			(*uParam0)[uParam0->f_252] = iParam5;
			uParam0->f_126[uParam0->f_252] = iParam6;
			uParam0->f_253[uParam0->f_252] = iParam8;
			Global_4536856[uParam0->f_252] = (Global_78130[1 /*14*/].f_3 * 1000 + Global_78130[1 /*14*/].f_4);
			if (BitTest(Global_78130[1 /*14*/].f_6, 6))
			{
				Global_4537108[uParam0->f_252] = Global_2883588;
			}
			Global_4537360[uParam0->f_252] = bVar0;
			Global_4537486[uParam0->f_252] = iParam10;
			uParam0->f_252++;
		}
		if (!bParam7)
		{
			MISC::SET_BIT(&(uParam0->f_379[(iParam4 / 32)]), (iParam4 % 32));
			if (!BitTest(uParam0->f_390[(iParam4 / 32)], (iParam4 % 32)))
			{
				if ((BitTest(Global_78130[1 /*14*/].f_6, 1) && BitTest(Global_78130[1 /*14*/].f_6, 4)) && !__LIB_11__::func_489(iParam8))
				{
					MISC::SET_BIT(&(uParam0->f_390[(iParam4 / 32)]), (iParam4 % 32));
				}
			}
		}
	}
}

var func_1188(int iParam0, int iParam1, int iParam2)//Position - 0xB9944
{
	Global_78130[1 /*14*/] = { __LIB_35__::func_896(iParam0, iParam1, iParam2, -1) };
	return BitTest(Global_78130[1 /*14*/].f_6, 4);
}

int func_1189(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0xB996C
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
					uVar3 = { func_260(iParam0, iParam2) };
					iVar1 = 0;
					while (iVar1 <= 14)
					{
						if ((uVar3[iVar1] != -99 && iVar1 != 12) && iVar1 != 14)
						{
							if (iVar1 != 13)
							{
								func_1189(iParam0, iVar1, uVar3[iVar1], 1, 1);
								__LIB_38__::func_82(iParam0, iVar1, uVar3[iVar1], 1);
							}
							else
							{
								uVar4 = { __LIB_18__::func_247(iParam0, uVar3[iVar1]) };
								iVar2 = 0;
								while (iVar2 <= 8)
								{
									func_1189(iParam0, 14, uVar4[iVar2], 1, 1);
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
								func_1189(iParam0, 3, iVar5, 1, 0);
							}
							else if (iParam2 >= 227 && iParam2 <= 242)
							{
								iVar5 = (176 + Global_78130[1 /*14*/].f_4);
								func_1189(iParam0, 3, iVar5, 1, 0);
							}
							break;
						case 11:
							if (iParam2 >= 9 && iParam2 <= 24)
							{
								iVar5 = (25 + Global_78130[1 /*14*/].f_4);
								func_1189(iParam0, 11, iVar5, 1, 0);
							}
							else if (iParam2 >= 25 && iParam2 <= 40)
							{
								iVar5 = (9 + Global_78130[1 /*14*/].f_4);
								func_1189(iParam0, 11, iVar5, 1, 0);
							}
							break;
						case 8:
							if (iParam2 >= 27 && iParam2 <= 42)
							{
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_1189(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_1189(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 43 && iParam2 <= 58)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_1189(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_1189(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 59 && iParam2 <= 74)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_1189(iParam0, 8, iVar5, 1, 0);
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_1189(iParam0, 8, iVar5, 1, 0);
							}
							break;
						case 14:
							if (iParam2 >= 64 && iParam2 <= 79)
							{
								iVar5 = (41 + Global_78130[1 /*14*/].f_4);
								func_1189(iParam0, 14, iVar5, 1, 0);
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
								func_1189(iParam0, 4, iVar5, 1, 0);
							}
							break;
						case 12:
							if (iParam2 == 2)
							{
								func_1189(iParam0, 14, 17, 1, 0);
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

int func_1193(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0xB9E34
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
			uVar11 = { func_260(iVar10, iParam2) };
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
										func_1193(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
									func_1193(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_35__::func_896(iVar10, iVar0, func_1206(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_276(iParam0, iVar10, &iVar4, 1))
							{
								func_1193(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { func_260(iVar10, 0) };
						func_1193(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_1193(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__::func_896(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_1193(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__::func_896(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_1193(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__::func_896(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_1193(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__::func_896(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_1193(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
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
						func_1193(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_1193(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_1193(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		if (func_276(iParam0, iVar10, &iVar4, 0))
		{
			func_1193(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_274(iParam0, iVar10, &iVar4))
		{
			func_1193(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_1206(int iParam0, int iParam1, int iParam2)//Position - 0xBC3CA
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
				if (func_1207(iParam0, iParam1, iVar0))
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
				if (func_1207(iParam0, iParam1, iVar1))
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

int func_1207(int iParam0, int iParam1, int iParam2)//Position - 0xBC46B
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
		uVar5 = { func_260(iVar0, iParam2) };
		iVar2 = 0;
		while (iVar2 <= 14)
		{
			if ((uVar5[iVar2] != -99 && iVar2 != 12) && iVar2 != 14)
			{
				if (!func_1207(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_18__::func_247(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_1207(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_35__::func_896(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_1207(iParam0, 14, iVar4))
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
			if (!func_1207(iParam0, 14, uVar8[iVar7]))
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

