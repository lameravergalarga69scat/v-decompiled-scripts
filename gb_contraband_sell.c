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
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
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
	var uLocal_66 = 0;
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
	var uLocal_93 = -1;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	float fLocal_101 = 0f;
	float fLocal_102 = 0f;
	float fLocal_103 = 0f;
	float fLocal_104 = 0f;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	struct<365> Local_118 = { 7200000, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, -1, -1, -1, -1, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 5000, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, -1, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 1, 0 } ;
	var uLocal_119 = 0;
	struct<10> Local_120 = { 0, 0, 1065353216, 1065353216, 1, 0, 0, 0, 0, -1 } ;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = -1;
	var uLocal_130 = -1;
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
	var uLocal_143[2] = { 0, 0 };
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	int iLocal_147 = 0;
	struct<2> Local_148[3];
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	int iLocal_154 = 0;
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	struct<597> Local_157 = { 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 2, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 3, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 10, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, 0, -1, 3, 0, 0, 0, -1082130432, 0, 12, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 10000, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1, 0, -1 } ;
	struct<10> Local_158[4];
	struct<3> Local_159 = { 0, 0, 0 } ;
	struct<3> Local_160 = { 0, 0, 0 } ;
	struct<3> Local_161 = { 0, 0, 0 } ;
	struct<3> Local_162 = { 0, 0, 0 } ;
	bool bLocal_163 = 0;
	var uLocal_164 = 16;
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
	bool bLocal_329 = 0;
	struct<21> Local_330 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	sLocal_18 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	fLocal_101 = 3f;
	fLocal_102 = 0f;
	fLocal_103 = 2f;
	fLocal_104 = 100f;
	iLocal_114 = -1;
	iLocal_115 = -1;
	iLocal_116 = -1;
	iLocal_117 = -1;
	iLocal_155 = -1;
	iLocal_156 = -1;
	Local_159 = { -5f, -5f, 0f };
	Local_160 = { 5f, -5f, 0f };
	Local_161 = { 5f, 5f, 0f };
	Local_162 = { -5f, 5f, 0f };
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 0, 1))
		{
			if (!func_2445(ScriptParam_330))
			{
				func_2376(0, 1);
				func_2296(0);
			}
		}
		else
		{
			func_2296(0);
		}
	}
	else
	{
		func_2376(0, 1);
		func_2296(0);
	}
	bLocal_329 = __LIB_1__::func_501();
	while (true)
	{
		__LIB_0__::func_933();
		if (func_2284(1))
		{
			func_2376(0, 1);
			func_2296(0);
		}
		if (__LIB_0__::func_959())
		{
			func_2376(0, 1);
			func_2296(1);
		}
		func_2275();
		func_2263();
		switch (func_2262(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if (func_2261() == 1)
				{
					if ((((__LIB_1__::func_501() && !func_2260()) && !func_2259(2)) && !func_2258()) && func_2257() > 1)
					{
						func_2218(0);
						if (iLocal_153 == 2 || iLocal_153 == 3)
						{
							if (func_2216())
							{
								func_2215(NETWORK::PARTICIPANT_ID_TO_INT(), 1);
								func_2214();
							}
						}
					}
					else if (func_2216())
					{
						func_2215(NETWORK::PARTICIPANT_ID_TO_INT(), 1);
						func_2214();
					}
				}
				else if (func_2261() == 3)
				{
					func_2215(NETWORK::PARTICIPANT_ID_TO_INT(), 3);
				}
				break;
			case 1:
				if (func_2261() == 1)
				{
					func_515();
				}
				else if (func_2261() == 3)
				{
					func_2215(NETWORK::PARTICIPANT_ID_TO_INT(), 3);
				}
				break;
			case 3:
				func_2296(0);
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			if (__LIB_15__::func_374())
			{
				__LIB_35__::func_475(3);
			}
			switch (func_2261())
			{
				case 0:
					if (func_472())
					{
						__LIB_35__::func_475(1);
					}
					break;
				case 1:
					func_43();
					func_1();
					break;
				case 3:
					break;
				}
		}
	}
}

void func_1()//Position - 0x282
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4[3];
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8[3];
	bool bVar9;
	bool bVar10;
	int iVar11;
	bVar7 = true;
	bVar9 = true;
	bVar10 = false;
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
		{
			iVar5 = iVar0;
			bVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar5);
			iVar6 = PLAYER::GET_PLAYER_PED(bVar3);
			iVar1 = bVar3;
			MISC::SET_BIT(&uLocal_145, iVar0);
			if (__LIB_1__::func_693(bVar3, 0, 1))
			{
				if (Local_158[iVar0 /*10*/] != 3)
				{
					bVar9 = false;
				}
				MISC::SET_BIT(&uLocal_144, iVar1);
				if (ENTITY::IS_ENTITY_DEAD(iVar6, false))
				{
					MISC::SET_BIT(&uLocal_146, iVar1);
				}
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_35[0]))
				{
					if (func_39(0, PLAYER::GET_PLAYER_PED(bVar3)))
					{
						bVar4[0] = bVar3;
						iVar8[0] = 1;
					}
				}
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_35[0]))
				{
					if (func_39(1, PLAYER::GET_PLAYER_PED(bVar3)))
					{
						bVar4[1] = bVar3;
						iVar8[1] = 1;
					}
				}
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_35[0]))
				{
					if (func_39(2, PLAYER::GET_PLAYER_PED(bVar3)))
					{
						bVar4[2] = bVar3;
						iVar8[2] = 1;
					}
				}
				if (!bVar10)
				{
					if (func_38(iVar5, 14))
					{
						if (!BitTest(Local_157.f_586, 0))
						{
							if (func_37(10) || !func_35())
							{
								bVar10 = true;
							}
							else
							{
								MISC::SET_BIT(&(Local_157.f_586), 0);
							}
						}
					}
					else if (func_38(iVar5, 15))
					{
						if (!BitTest(Local_157.f_586, 1))
						{
							if (func_37(11) || !func_35())
							{
								bVar10 = true;
							}
							else
							{
								MISC::SET_BIT(&(Local_157.f_586), 1);
							}
						}
					}
					else if (func_38(iVar5, 16))
					{
						if (!BitTest(Local_157.f_586, 2))
						{
							if (func_37(12) || !func_35())
							{
								bVar10 = true;
							}
							else
							{
								MISC::SET_BIT(&(Local_157.f_586), 2);
							}
						}
					}
				}
				if (!func_38(iVar5, 0))
				{
					bVar7 = false;
				}
				if (!func_37(6))
				{
					if (func_38(iVar5, 2))
					{
						func_34(6);
					}
				}
				if (!func_2259(5))
				{
					if (func_38(iVar5, 17) && Local_158[iVar0 /*10*/].f_7 != __LIB_0__::getMinusOneOrNull())
					{
						func_25(Local_158[iVar0 /*10*/].f_7);
						func_24(5);
					}
				}
				if (!func_23(0))
				{
					if (func_38(iVar5, 8))
					{
						func_34(19);
						func_22(0);
					}
				}
				if (!func_23(1))
				{
					if (func_38(iVar5, 9))
					{
						func_34(20);
						func_22(1);
					}
				}
				if (!func_23(2))
				{
					if (func_38(iVar5, 10))
					{
						func_34(21);
						func_22(2);
					}
				}
				if (!func_37(9))
				{
					if (func_38(iVar5, 4))
					{
						func_34(9);
					}
				}
				if (!func_37(18))
				{
					if (func_38(iVar5, 7))
					{
						iVar11 = func_13();
						if (iVar11 > -1)
						{
							Local_157.f_591 = iVar11;
							func_34(18);
						}
					}
				}
				if (!func_37(22))
				{
					if (func_38(iVar5, 12))
					{
						func_34(22);
					}
				}
				if (!func_2259(0))
				{
					if (func_38(iVar5, 13))
					{
						func_24(0);
					}
				}
				if (!func_2259(6))
				{
					if (func_38(iVar5, 18))
					{
						func_24(6);
					}
				}
				if (func_12())
				{
					bVar2 = false;
					bVar2 = false;
					while (bVar2 < 3)
					{
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_499[bVar2 /*6*/]))
						{
							if (!BitTest(Local_157.f_549, bVar2))
							{
								if (BitTest(Local_158[iVar0 /*10*/].f_8, bVar2))
								{
									MISC::SET_BIT(&(Local_157.f_549), bVar2);
								}
							}
						}
						bVar2++;
					}
				}
				if (func_11())
				{
					bVar2 = false;
					bVar2 = false;
					while (bVar2 < func_9())
					{
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_499[bVar2 /*6*/]))
						{
							if (!BitTest(Local_157.f_550, bVar2))
							{
								if (func_8(bVar2) == 3)
								{
									if (BitTest(Local_158[iVar0 /*10*/].f_9, bVar2))
									{
										MISC::SET_BIT(&(Local_157.f_550), bVar2);
									}
								}
							}
						}
						bVar2++;
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar4[0] != Local_157.f_31[0])
	{
		Local_157.f_31[0] = bVar4[0];
	}
	if (bVar4[1] != Local_157.f_31[1])
	{
		Local_157.f_31[1] = bVar4[1];
	}
	if (bVar4[2] != Local_157.f_31[2])
	{
		Local_157.f_31[2] = bVar4[2];
	}
	if (iVar8[0])
	{
		if (!func_37(10))
		{
			func_3();
			func_34(10);
		}
		if (!func_37(13))
		{
			func_34(13);
		}
	}
	else if (func_37(13))
	{
		func_2(13);
	}
	if (iVar8[1])
	{
		if (!func_37(11))
		{
			func_3();
			func_34(11);
		}
		if (!func_37(14))
		{
			func_34(14);
		}
	}
	else if (func_37(14))
	{
		func_2(14);
	}
	if (iVar8[2])
	{
		if (!func_37(12))
		{
			func_3();
			func_34(12);
		}
		if (!func_37(15))
		{
			func_34(15);
		}
	}
	else if (func_37(15))
	{
		func_2(15);
	}
	if (bVar10)
	{
		func_34(17);
	}
	if (bVar9)
	{
		if (!func_37(16))
		{
			func_34(16);
		}
	}
	if (bVar7)
	{
		if (!func_37(0))
		{
			func_34(0);
		}
	}
	else if (func_37(0))
	{
		func_2(0);
	}
}

void func_2(int iParam0)//Position - 0x7AE
{
	MISC::CLEAR_BIT(&(Local_157.f_1), iParam0);
}

void func_3()//Position - 0x7C1
{
	if (func_6())
	{
		if (!__LIB_0__::func_864(&(Local_157.f_584)))
		{
			__LIB_0__::func_795(&(Local_157.f_584), 0, 0);
		}
	}
}

int func_6()//Position - 0x83B
{
	int iVar0;
	iVar0 = func_7();
	if (func_2257() == 1 && !func_2258())
	{
		iVar0 = 3;
	}
	if (iVar0 == 2 || iVar0 == 3)
	{
		return 1;
	}
	else if (Global_262145.f_16760 /* Tunable: EXEC_HARD_SELL_BLIP_DELAY */ > 0)
	{
		return 1;
	}
	return 0;
}

int func_7()//Position - 0x887
{
	var uVar0;
	uVar0 = Local_157.f_593;
	return uVar0;
}

int func_8(bool bParam0)//Position - 0x899
{
	return Local_157.f_499[bParam0 /*6*/].f_5;
}

int func_9()//Position - 0x8AD
{
	int iVar0;
	iVar0 = 0;
	switch (func_10())
	{
		case 12:
			if (func_37(8))
			{
				iVar0 = 1;
			}
			else
			{
				iVar0 = 2;
			}
			break;
		case 5:
		case 6:
			iVar0 = 2;
			break;
		case 11:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

int func_10()//Position - 0x8FC
{
	return Local_157.f_7;
}

bool func_11()//Position - 0x909
{
	return func_10() == 6;
}

bool func_12()//Position - 0x917
{
	return func_10() == 11;
}

int func_13()//Position - 0x926
{
	bool bVar0;
	bVar0 = false;
	while (bVar0 < func_21())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_35[bVar0]))
		{
			if (__LIB_0__::func_939(Local_157.f_35[bVar0]))
			{
				if (!__LIB_35__::func_491(NETWORK::NET_TO_VEH(Local_157.f_35[bVar0]), Local_157.f_54, 350f))
				{
					if (func_14(bVar0))
					{
						return bVar0;
					}
				}
			}
		}
		bVar0++;
	}
	return -1;
}

int func_14(bool bParam0)//Position - 0x991
{
	switch (bParam0)
	{
		case 0:
			return func_37(13);
		case 1:
			return func_37(14);
		case 2:
			return func_37(15);
		default:
	}
	return 0;
}

int func_21()//Position - 0xD55
{
	switch (Local_157.f_582)
	{
		case 0:
		case 2:
		case 3:
		case 4:
			return 1;
		case 1:
		case 5:
			return 2;
		case 6:
		case 7:
			return 3;
		default:
	}
	return 1;
}

void func_22(bool bParam0)//Position - 0xDA5
{
	switch (bParam0)
	{
		case 0:
			if (!func_37(23))
			{
				func_34(23);
			}
			break;
		case 1:
			if (!func_37(24))
			{
				func_34(24);
			}
			break;
		case 2:
			if (!func_37(25))
			{
				func_34(25);
			}
			break;
	}
}

int func_23(bool bParam0)//Position - 0xDFF
{
	switch (bParam0)
	{
		case 0:
			return func_37(19);
		case 1:
			return func_37(20);
		case 2:
			return func_37(21);
		default:
	}
	return 0;
}

void func_24(int iParam0)//Position - 0xE3C
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	MISC::SET_BIT(&(Local_157.f_2), iParam0);
}

void func_25(var uParam0)//Position - 0xE5A
{
	__LIB_15__::func_576(__LIB_3__::func_206(1, 0), __LIB_1__::func_730(), uParam0);
}

void func_34(int iParam0)//Position - 0xFED
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	MISC::SET_BIT(&(Local_157.f_1), iParam0);
}

bool func_35()//Position - 0x100B
{
	return func_36(func_10());
}

int func_36(int iParam0)//Position - 0x101B
{
	if ((((((iParam0 == 2 || iParam0 == 0) || iParam0 == 3) || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 1)
	{
		return 1;
	}
	return 0;
}

bool func_37(int iParam0)//Position - 0x106B
{
	return BitTest(Local_157.f_1, iParam0);
}

bool func_38(int iParam0, int iParam1)//Position - 0x107B
{
	return BitTest(Local_158[iParam0 /*10*/].f_2, iParam1);
}

int func_39(bool bParam0, int iParam1)//Position - 0x108F
{
	if (func_41(bParam0))
	{
		if (iParam1 == VEHICLE::GET_PED_IN_VEHICLE_SEAT(func_40(bParam0), -1, false))
		{
			return 1;
		}
	}
	return 0;
}

int func_40(bool bParam0)//Position - 0x10B6
{
	int iVar0;
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_157.f_35[bParam0]))
	{
		iVar0 = NETWORK::NET_TO_VEH(Local_157.f_35[bParam0]);
	}
	return iVar0;
}

int func_41(bool bParam0)//Position - 0x10DF
{
	if (ENTITY::DOES_ENTITY_EXIST(func_42(bParam0)) && !ENTITY::IS_ENTITY_DEAD(func_42(bParam0), false))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(func_40(bParam0), false))
		{
			return 1;
		}
	}
	return 0;
}

int func_42(bool bParam0)//Position - 0x1118
{
	int iVar0;
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_157.f_35[bParam0]))
	{
		iVar0 = NETWORK::NET_TO_ENT(Local_157.f_35[bParam0]);
	}
	return iVar0;
}

void func_43()//Position - 0x1141
{
	bool bVar0;
	func_460();
	func_447();
	func_443();
	func_426();
	func_400();
	func_382();
	func_380();
	func_375();
	func_374();
	func_373();
	switch (func_372())
	{
		case 0:
			if (func_344())
			{
				if ((func_277() && func_213()) && func_192())
				{
					Local_157.f_596 = NETWORK::GET_CLOUD_TIME_AS_INT();
					func_191(1);
					STATS::PLAYSTATS_CREATE_MATCH_HISTORY_ID_2(&(Local_157.f_8), &(Local_157.f_9));
				}
			}
			break;
		case 1:
			if (func_190() == 0)
			{
				if (!__LIB_0__::func_864(&(Local_157.f_3)))
				{
					__LIB_0__::func_795(&(Local_157.f_3), 0, 0);
				}
				else if (__LIB_0__::func_937(&(Local_157.f_3), func_188(), 0))
				{
					func_186(1);
				}
				else if (__LIB_0__::func_937(&(Local_157.f_3), 600000, 0))
				{
					if (!func_37(3))
					{
						func_34(3);
					}
				}
				bVar0 = false;
				while (bVar0 < func_21())
				{
					if (func_37(1))
					{
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_35[bVar0]))
						{
							if (!func_41(bVar0) && !func_185(bVar0))
							{
								if (func_190() != 4)
								{
									func_186(4);
									if (Local_157.f_60 == -1)
									{
										Local_157.f_60 = bVar0;
									}
								}
							}
						}
					}
					bVar0++;
				}
				if (func_37(16) && func_190() == 0)
				{
					func_186(6);
				}
				if (func_37(17) && func_190() == 0)
				{
					func_186(5);
				}
			}
			else
			{
				func_191(2);
			}
			func_44();
			break;
		case 2:
			if (func_37(0))
			{
				func_191(3);
			}
			break;
		case 3:
			__LIB_35__::func_475(3);
			break;
	}
}

void func_44()//Position - 0x12E7
{
	bool bVar0;
	struct<31> Var1;
	struct<3> Var2;
	float fVar3;
	int iVar4;
	if (!func_35())
	{
		return;
	}
	Var1.f_4 = 1125515264;
	Var1.f_5 = 1;
	Var1.f_6 = 1;
	Var1.f_8 = 1082130432;
	Var1.f_9 = 1176255488;
	Var1.f_10 = 1;
	Var1.f_13 = 1;
	Var1.f_15 = 2;
	Var1.f_22 = 2;
	Var1.f_25 = 1;
	Var1.f_26 = 1;
	Var1.f_29 = 1123024896;
	Var1.f_30 = 1;
	bVar0 = false;
	while (bVar0 < func_21())
	{
		if (BitTest(Local_157.f_586, bVar0))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(func_40(bVar0), false))
			{
				if (Local_157.f_590 == -1 || Local_157.f_590 == bVar0)
				{
					if (Local_157.f_590 == -1)
					{
						Local_157.f_590 = bVar0;
						Local_157.f_587 = { ENTITY::GET_ENTITY_COORDS(func_40(bVar0), true) };
					}
					Var1.f_0 = 10f;
					Var1.f_1 = 0;
					Var1.f_4 = 100f;
					Var1.f_5 = 0;
					Var1.f_6 = 1;
					Var1.f_12 = 1;
					Var1.f_3 = 0;
					Var2 = { 0f, 0f, 0f };
					fVar3 = 0f;
					iVar4 = ENTITY::GET_ENTITY_MODEL(func_40(bVar0));
					if (func_45(Local_157.f_587, 0f, 0f, 0f, iVar4, 0, &Var2, &fVar3, &Var1))
					{
						ENTITY::SET_ENTITY_COORDS(func_40(bVar0), Var2, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(func_40(bVar0), fVar3);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(func_40(bVar0), 5f);
						Local_157.f_590 = -1;
						MISC::CLEAR_BIT(&(Local_157.f_586), bVar0);
					}
				}
			}
		}
		bVar0++;
	}
}

int func_45(struct<3> Param0, struct<3> Param1, int iParam2, int iParam3, var uParam4, float fParam5, var uParam6)//Position - 0x1467
{
	bool bVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	struct<61> Var5;
	struct<61> Var6;
	bVar0 = false;
	if (uParam6->f_14)
	{
		if (uParam6->f_25)
		{
			uParam6->f_25 = 0;
		}
	}
	if (!__LIB_1__::func_533())
	{
		return 0;
	}
	if (__LIB_1__::func_479() && !Global_2667225.f_680 == MISC::GET_FRAME_COUNT())
	{
		if (!Global_2667225.f_676 == 0)
		{
			Global_2667225.f_676 = 0;
			__LIB_0__::func_854();
			__LIB_0__::func_814();
		}
	}
	if (!SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2667225.f_675)
	{
		if (!Global_2667225.f_676 == 0)
		{
			if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_679) < __LIB_0__::func_853(0))
			{
				return 0;
			}
			else
			{
				Global_2667225.f_676 = 0;
			}
		}
	}
	else
	{
		if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_677) > 30000)
		{
			Global_2667225.f_676 = 0;
		}
		if (!Global_2667225.f_676 == 0)
		{
			if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_679) > __LIB_0__::func_853(1))
			{
				Global_2667225.f_676 = 0;
			}
		}
	}
	if (uParam6->f_6)
	{
		if (func_171(Param0))
		{
			if (__LIB_1__::func_558(&Param0, 1))
			{
			}
		}
	}
	if (!Global_2667225.f_676 == 0)
	{
		if (SYSTEM::VDIST(Global_2667225.f_695, Param0) > 50f)
		{
			return 0;
		}
		if (Global_2667225.f_698 != iParam2)
		{
			return 0;
		}
	}
	PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME((Param0.f_0 - 100f), (Param0.f_1 - 100f), (Param0.f_0 + 100f), (Param0.f_1 + 100f));
	if (Global_2667225.f_676 == 0)
	{
		Global_2667225.f_682 = 0;
		Global_2667225.f_677 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		Global_2667225.f_675 = SCRIPT::GET_ID_OF_THIS_THREAD();
		Global_2667225.f_679 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		Global_2667225.f_695 = { Param0 };
		Global_2667225.f_698 = iParam2;
		Global_2667225.f_681 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		__LIB_0__::func_851();
		__LIB_0__::func_854();
		if (!uParam6->f_27 || (((((((__LIB_42__::func_12(Param0, 1, 1133903872) && !uParam6->f_28) && !Global_2815059.f_924) && !Global_2815059.f_913) && !Global_2815059.f_921) && !Global_2815059.f_925) && !Global_2815059.f_933) && !Global_2815059.f_945))
		{
			__LIB_43__::func_389(Param0, iParam2);
		}
		if (__LIB_43__::func_388(Param0))
		{
			__LIB_43__::func_389(Param0, iParam2);
		}
		Global_2667225.f_676 = 2;
	}
	switch (Global_2667225.f_676)
	{
		case 2:
			if (PATHFIND::ARE_NODES_LOADED_FOR_AREA((Param0.f_0 - 100f), (Param0.f_1 - 100f), (Param0.f_0 + 100f), (Param0.f_1 + 100f)))
			{
				Global_2667225.f_683 = { Param0 };
				Global_2667225.f_686 = 0f;
				if (Global_2815059.f_924)
				{
					fVar2 = 10f;
					fVar3 = 5f;
					fVar4 = 5f;
				}
				else
				{
					fVar2 = 4f;
					fVar3 = 1f;
					fVar4 = 1f;
				}
				if (((uParam6->f_3 && __LIB_41__::func_947(Param0, fVar2, fVar3, fVar4, 1f, 0, 0, 0, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0)) && !uParam6->f_7) && !__LIB_3__::func_391(Param0, *fParam5, iParam2, PLAYER::PLAYER_ID(), 0))
				{
					Global_2667225.f_683 = { Param0 };
					Global_2667225.f_686 = *fParam5;
				}
				else
				{
					Var5.f_6 = 1082130432;
					Var5.f_7 = 1176255488;
					Var5.f_8 = 1;
					Var5.f_10 = 1;
					Var5.f_13 = 1;
					Var5.f_15 = 1;
					Var5.f_16 = 1;
					Var5.f_31 = 1;
					Var5.f_34 = joaat("tailgater");
					Var5.f_38 = 2;
					Var5.f_45 = 2;
					Var5.f_49 = 1123024896;
					Var5.f_53 = 999;
					Var5.f_54 = 1176256410;
					Var5.f_55 = 1;
					Var5.f_56 = 1;
					Var5.f_57 = 1;
					Var5.f_9 = iParam3;
					Var5.f_3 = 7f;
					Var5.f_10 = uParam6->f_5;
					Var5.f_4 = *uParam6;
					Var5.f_13 = uParam6->f_1;
					Var5.f_14 = uParam6->f_2;
					Var5.f_5 = uParam6->f_4;
					Var5.f_15 = uParam6->f_6;
					Var5.f_11 = uParam6->f_7;
					Var5.f_6 = uParam6->f_8;
					Var5.f_7 = uParam6->f_9;
					Var5.f_16 = uParam6->f_10;
					Var5.f_17 = uParam6->f_11;
					Var5 = { Param1 };
					Var5.f_12 = 1;
					Var5.f_34 = iParam2;
					Var5.f_31 = uParam6->f_13;
					if (uParam6->f_32 && Global_2667225.f_682 > 0)
					{
						Var5.f_30 = 0;
						Var5.f_29 = 1;
					}
					else
					{
						Var5.f_30 = uParam6->f_30;
						Var5.f_29 = uParam6->f_31;
					}
					Var5.f_48 = uParam6->f_14;
					Var5.f_56 = uParam6->f_25;
					Var5.f_57 = uParam6->f_26;
					Var5.f_49 = uParam6->f_29;
					Var5.f_59 = uParam6->f_33;
					Var5.f_60 = uParam6->f_34;
					iVar1 = 0;
					while (iVar1 < 2)
					{
						Var5.f_38[iVar1 /*3*/] = { uParam6->f_15[iVar1 /*3*/] };
						Var5.f_45[iVar1] = uParam6->f_22[iVar1];
						iVar1++;
					}
					func_72(&(Global_2667225.f_683), &(Global_2667225.f_686), &Var5);
				}
				__LIB_3__::func_247(Global_2667225.f_683, Global_2667225.f_686, iParam2, &(Global_2667225.f_673));
				Global_2667225.f_671 = 0;
				Global_2667225.f_672 = 0;
				Global_2667225.f_682++;
				Global_2667225.f_678 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				Global_2667225.f_677 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				Global_2667225.f_676 = 3;
			}
			break;
		case 3:
			if (Global_2667225.f_671)
			{
				if (Global_2667225.f_673 == Global_2667225.f_674)
				{
					if (Global_2667225.f_672)
					{
						if (uParam6->f_12 && !uParam6->f_11)
						{
							if (__LIB_2__::func_765(Global_2667225.f_683, Global_2667225.f_686, iParam2, 1, 1036831949))
							{
								Global_2667225.f_676 = 4;
								Global_2667225.f_700 = NETWORK::GET_NETWORK_TIME_ACCURATE();
							}
							else
							{
								bVar0 = true;
							}
						}
						else
						{
							bVar0 = true;
						}
					}
					else
					{
						func_67(Global_2667225.f_683, 0);
						__LIB_0__::func_821(-1);
					}
				}
				else
				{
					Global_2667225.f_671 = 0;
					Global_2667225.f_672 = 0;
				}
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_678) > 3000)
			{
				__LIB_0__::func_821(-1);
			}
			break;
		case 4:
			if (uParam6->f_12 && !uParam6->f_11)
			{
				if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_700) < 10000)
				{
					if (NETWORK::NETWORK_ENTITY_AREA_DOES_EXIST(Global_2667225.f_699))
					{
						if (NETWORK::NETWORK_ENTITY_AREA_HAVE_ALL_REPLIED(Global_2667225.f_699))
						{
							if (!NETWORK::NETWORK_ENTITY_AREA_IS_OCCUPIED(Global_2667225.f_699))
							{
								if (__LIB_3__::func_295(Global_2667225.f_683, Global_2667225.f_686, iParam2, PLAYER::PLAYER_ID(), 0) || __LIB_35__::func_878(Global_2667225.f_683, Global_2667225.f_686, iParam2, 1, 0, 0, 0, 1, 0))
								{
									func_67(Global_2667225.f_683, 0);
									__LIB_0__::func_821(-1);
								}
								else
								{
									bVar0 = true;
								}
							}
							else
							{
								func_67(Global_2667225.f_683, 0);
								__LIB_0__::func_821(-1);
							}
						}
					}
					else
					{
						__LIB_0__::func_821(-1);
					}
				}
				else
				{
					__LIB_0__::func_821(1);
				}
			}
			else
			{
				bVar0 = true;
			}
			break;
		case 5:
			Global_2667225.f_683 = { Param0 };
			Global_2667225.f_686 = 0f;
			Var6.f_6 = 1082130432;
			Var6.f_7 = 1176255488;
			Var6.f_8 = 1;
			Var6.f_10 = 1;
			Var6.f_13 = 1;
			Var6.f_15 = 1;
			Var6.f_16 = 1;
			Var6.f_31 = 1;
			Var6.f_34 = joaat("tailgater");
			Var6.f_38 = 2;
			Var6.f_45 = 2;
			Var6.f_49 = 1123024896;
			Var6.f_53 = 999;
			Var6.f_54 = 1176256410;
			Var6.f_55 = 1;
			Var6.f_56 = 1;
			Var6.f_57 = 1;
			Var6.f_9 = iParam3;
			Var6.f_3 = 3.5f;
			Var6.f_10 = uParam6->f_5;
			Var6.f_4 = *uParam6;
			Var6.f_12 = 1;
			Var6.f_13 = 0;
			Var6.f_15 = uParam6->f_6;
			Var6.f_11 = uParam6->f_7;
			Var6.f_6 = uParam6->f_8;
			Var6.f_7 = uParam6->f_9;
			Var6 = { Param1 };
			Var6.f_34 = iParam2;
			Var6.f_31 = uParam6->f_13;
			Var6.f_30 = 1;
			Var6.f_48 = uParam6->f_14;
			Var6.f_56 = uParam6->f_25;
			Var6.f_57 = uParam6->f_26;
			Var6.f_30 = uParam6->f_30;
			Var6.f_29 = uParam6->f_31;
			Var6.f_59 = uParam6->f_33;
			Var6.f_60 = uParam6->f_34;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				Var6.f_38[iVar1 /*3*/] = { uParam6->f_15[iVar1 /*3*/] };
				Var6.f_45[iVar1] = uParam6->f_22[iVar1];
				iVar1++;
			}
			Var6.f_49 = uParam6->f_29;
			func_72(&(Global_2667225.f_683), &(Global_2667225.f_686), &Var6);
			Global_2667225.f_676 = 6;
			break;
		case 6:
			bVar0 = true;
			break;
	}
	Global_2667225.f_695 = { Param0 };
	Global_2667225.f_698 = iParam2;
	Global_2667225.f_679 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (bVar0)
	{
		Global_2667225.f_516 = 0;
		*uParam4 = { Global_2667225.f_683 };
		*fParam5 = Global_2667225.f_686;
		__LIB_1__::func_527(1);
		return 1;
	}
	return 0;
}

void func_67(struct<3> Param0, int iParam1)//Position - 0x288B
{
	struct<3> Var0;
	if (iParam1 == 0 && __LIB_0__::func_822(Param0, 0.01f))
	{
		return;
	}
	if (iParam1 < 30 && SYSTEM::VMAG(Param0) > 0f)
	{
		Var0 = { Global_2667225.f_2737[iParam1 /*3*/] };
		Global_2667225.f_2737[iParam1 /*3*/] = { Param0 };
		func_67(Var0, iParam1 + 1);
	}
}

void func_72(var uParam0, var uParam1, var uParam2)//Position - 0x2A9D
{
	int iVar0;
	iVar0 = 0;
	if (Global_2667225.f_1754 > 0)
	{
		iVar0 = 0;
		while (func_121(uParam0, uParam1, uParam2) == 0 && iVar0 < 2)
		{
			iVar0++;
		}
		if (iVar0 == 2)
		{
			uParam2->f_33 = 0;
		}
		else
		{
			return;
		}
	}
	iVar0 = 0;
	while (func_73(uParam0, uParam1, uParam2) == 0 && iVar0 < 6)
	{
		iVar0++;
	}
}

int func_73(var uParam0, var uParam1, var uParam2)//Position - 0x2B0C
{
	int iVar0;
	struct<3> Var1;
	float* fVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	float fVar11;
	float fVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	bool bVar16;
	int iVar17;
	bool bVar18;
	int iVar19;
	float fVar20;
	int iVar21;
	int iVar22;
	float fVar23;
	int iVar24;
	struct<3> Var25;
	var uVar26;
	struct<3> Var27;
	float* fVar28;
	bool bVar29;
	iVar0 = 0;
	if (!SYSTEM::VMAG(uParam2->f_35) > 0f)
	{
		uParam2->f_35 = { *uParam0 };
	}
	if (uParam2->f_15)
	{
		if (func_117(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
	}
	if (uParam2->f_51)
	{
		uParam2->f_6 = 9999.9f;
	}
	if (uParam2->f_48)
	{
		if (__LIB_1__::func_572(uParam0, 1))
		{
		}
	}
	if (uParam0->f_2 < -80f)
	{
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
	}
	iVar3 = 0;
	bVar8 = true;
	if (uParam2->f_11)
	{
		iVar3 += 2;
		iVar3++;
		bVar8 = false;
	}
	else if (uParam2->f_10 == 0 || (uParam2->f_33 > 0 && uParam2->f_16))
	{
		iVar3++;
		bVar8 = false;
	}
	iVar3 += 4;
	fVar11 = 3f;
	fVar12 = 5f;
	switch (uParam2->f_33)
	{
		case 0:
			fVar11 = 3f;
			fVar12 = 5f;
			break;
		case 1:
			fVar11 = 2.75f;
			fVar12 = 7.5f;
			break;
		default:
			fVar11 = 2.5f;
			fVar12 = 10f;
			break;
	}
	iVar13 = 0;
	Global_2674786.f_162 = 0;
	Global_2674786.f_163 = 0;
	Global_2674786.f_164 = -99;
	Global_2674786.f_165 = { 0f, 0f, 0f };
	iVar14 = 0;
	while (iVar14 < 40)
	{
		Global_2674786[iVar14 /*3*/] = { 0f, 0f, 0f };
		Global_2674786.f_121[iVar14] = 0f;
		iVar14++;
	}
	iVar15 = 1;
	if (__LIB_1__::func_452(uParam2->f_34) != 0)
	{
		iVar15 = 3;
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
		uParam2->f_18 = 0;
	}
	while (true)
	{
		iVar6 = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID_WITH_HEADING(*uParam0, (iVar0 * iVar15), &fVar2, &iVar7, iVar3, fVar11, fVar12);
		if (PATHFIND::IS_VEHICLE_NODE_ID_VALID(iVar6))
		{
			PATHFIND::GET_VEHICLE_NODE_POSITION(iVar6, &Var1);
			bVar10 = false;
			if (Global_2674786.f_164 == iVar6)
			{
				bVar10 = true;
			}
			Global_2674786.f_165 = { Var1 };
			if (((uParam2->f_10 || uParam2->f_33 > 0) || !PATHFIND::GET_VEHICLE_NODE_IS_SWITCHED_OFF(iVar6)) || PATHFIND::GET_VEHICLE_NODE_IS_GPS_ALLOWED(iVar6))
			{
				PATHFIND::GET_VEHICLE_NODE_PROPERTIES(Var1, &uVar4, &uVar5);
				if (SYSTEM::VDIST(Var1, uParam2->f_35) > uParam2->f_4)
				{
					if (!__LIB_2__::func_784(&Var1, 0))
					{
						if ((uParam2->f_13 || uVar5 & 64 == 0) || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || uVar5 & 16 == 0)
							{
								if ((uVar5 & 128 == 0 && uVar5 & 256 == 0) && uVar5 & 512 == 0)
								{
									if (!__LIB_1__::func_434(Var1))
									{
										Var1 = { __LIB_2__::func_783(Var1, &fVar2, iVar7, uParam2->f_9, *uParam2, bVar8, uParam2->f_11, uParam2->f_34, &bVar9, bVar10, 1, uParam2->f_51, uParam2->f_60) };
										if (SYSTEM::VMAG(Var1) > 0f)
										{
											if (!__LIB_2__::func_990(Var1, 5f))
											{
												if (Var1.f_2 >= (uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
												{
													if (Var1.f_2 <= (uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
													{
														if (__LIB_1__::func_546(Var1, uParam2))
														{
															if ((uParam2->f_48 && !__LIB_1__::func_572(&Var1, 0)) || uParam2->f_48 == 0)
															{
																bVar16 = true;
																if (!bVar10)
																{
																	if (bVar9)
																	{
																		iVar0 = (iVar0 + -1);
																		bVar16 = false;
																	}
																}
																if (SYSTEM::VMAG(Var1) > 0f)
																{
																	if (((uParam2->f_5 > 0f && SYSTEM::VDIST(Var1.f_0, Var1.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f) || uParam2->f_33 >= 2)
																	{
																		if ((uParam2->f_12 && !__LIB_6__::func_445(Var1, fVar2, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12)
																		{
																			if (!uParam2->f_15 || !func_117(uParam2->f_35, &Var1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
																			{
																				if (uParam2->f_8)
																				{
																					iVar17 = uParam2->f_31;
																					bVar18 = true;
																					iVar19 = 1;
																					fVar20 = uParam2->f_49;
																					if (!uParam2->f_55)
																					{
																						iVar17 = 0;
																						bVar18 = false;
																						iVar19 = 0;
																						fVar20 = 1f;
																					}
																					else if (uParam2->f_17)
																					{
																						iVar17 = 0;
																						bVar18 = false;
																						iVar19 = 0;
																						if (uParam2->f_33 == 1)
																						{
																							fVar20 = (fVar20 * 0.375f);
																						}
																					}
																					else
																					{
																						bVar18 = true;
																						iVar19 = 1;
																						if (uParam2->f_28)
																						{
																							if (uParam2->f_33 == 1)
																							{
																								fVar20 = (fVar20 * 0.375f);
																							}
																						}
																					}
																					iVar21 = 0;
																					if (!__LIB_2__::func_989(Var1, fVar2, uParam2->f_34))
																					{
																						if (uParam2->f_3 > 7f)
																						{
																							if (__LIB_41__::func_947(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
																							{
																								iVar21 = 1;
																							}
																						}
																						else if (__LIB_41__::func_947(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !__LIB_35__::func_878(Var1, fVar2, uParam2->f_34, 1, 1, 0, 0, 0, 0))
																						{
																							iVar21 = 1;
																						}
																					}
																					if (iVar21 || uParam2->f_33 >= 2)
																					{
																						if (((uParam2->f_29 || uParam2->f_30) || uParam2->f_52) || uParam2->f_33 >= 2)
																						{
																							fVar23 = 0f;
																							if (uParam2->f_52)
																							{
																								iVar22 = func_82(Var1, uParam2->f_54, &fVar23);
																							}
																							if (!uParam2->f_52 || (uParam2->f_52 && iVar22 <= uParam2->f_53))
																							{
																								if (uParam2->f_52)
																								{
																									if (iVar22 < uParam2->f_53)
																									{
																										iVar14 = 0;
																										while (iVar14 < Global_2674786.f_162)
																										{
																											Global_2674786[iVar14 /*3*/] = { 0f, 0f, 0f };
																											Global_2674786.f_121[iVar14] = 0f;
																											iVar14++;
																										}
																										Global_2674786.f_162 = 0;
																										uParam2->f_53 = iVar22;
																									}
																								}
																								if (uParam2->f_30)
																								{
																									if (Global_2674786.f_162 == 0)
																									{
																										Global_2674786[0 /*3*/] = { Var1 };
																										Global_2674786.f_121[0] = fVar2;
																									}
																									else
																									{
																										iVar14 = 0;
																										while (iVar14 < Global_2674786.f_162 + 1)
																										{
																											if (iVar14 < 40)
																											{
																												if (SYSTEM::VDIST2(Var1, uParam2->f_35) < SYSTEM::VDIST2(Global_2674786[iVar14 /*3*/], uParam2->f_35))
																												{
																													func_81(Var1, fVar2, iVar14);
																													iVar14 = Global_2674786.f_162 + 1;
																												}
																											}
																											iVar14++;
																										}
																									}
																									Global_2674786.f_162++;
																									if (Global_2674786.f_162 >= 5)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2674786.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																								else
																								{
																									Global_2674786[Global_2674786.f_162 /*3*/] = { Var1 };
																									Global_2674786.f_121[Global_2674786.f_162] = fVar2;
																									Global_2674786.f_162++;
																									if (__LIB_1__::func_546(Var1, uParam2))
																									{
																										Global_2674786.f_163++;
																									}
																									if (Global_2674786.f_162 >= 10)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2674786.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																							}
																						}
																						else
																						{
																							*uParam0 = { Var1 };
																							*uParam1 = fVar2;
																							return 1;
																						}
																					}
																					else if (bVar16)
																					{
																						iVar0++;
																					}
																				}
																				else
																				{
																					*uParam0 = { Var1 };
																					*uParam1 = fVar2;
																					return 1;
																				}
																			}
																		}
																		else
																		{
																			iVar13++;
																		}
																	}
																	else
																	{
																		iVar0 = 100;
																	}
																}
															}
															else
															{
																iVar0++;
															}
														}
														else if (!uParam2->f_32)
														{
															iVar0 = 100;
														}
													}
													else
													{
														iVar0++;
													}
												}
												else
												{
													iVar0++;
												}
											}
										}
									}
									else
									{
										iVar0++;
									}
								}
							}
							else
							{
								iVar0++;
							}
						}
						else
						{
							iVar0++;
						}
					}
					else
					{
						iVar13++;
					}
				}
				else
				{
					iVar13++;
				}
			}
			iVar0++;
			if (iVar0 >= (40 + iVar13) || iVar0 >= 100)
			{
				if (Global_2674786.f_162 > 0 && ((uParam2->f_29 || uParam2->f_30) || uParam2->f_33 >= 2))
				{
					if (uParam2->f_30)
					{
						*uParam0 = { Global_2674786[0 /*3*/] };
						*uParam1 = Global_2674786.f_121[0];
						return 1;
					}
					else
					{
						if (Global_2674786.f_163 > 0 && !Global_2674786.f_163 == Global_2674786.f_162)
						{
							func_79(0, uParam2);
						}
						iVar24 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2674786.f_162);
						if (uParam2->f_18 && uParam2->f_30)
						{
							iVar24 = 0;
						}
						Var25 = { Global_2674786[0 /*3*/] };
						uVar26 = Global_2674786.f_121[0];
						Global_2674786[0 /*3*/] = { Global_2674786[iVar24 /*3*/] };
						Global_2674786.f_121[0] = Global_2674786.f_121[iVar24];
						Global_2674786[iVar24 /*3*/] = { Var25 };
						Global_2674786.f_121[iVar24] = uVar26;
						*uParam0 = { Global_2674786[0 /*3*/] };
						*uParam1 = Global_2674786.f_121[0];
						return 1;
					}
				}
				else
				{
					uParam2->f_33++;
					if (uParam2->f_33 < 3)
					{
						return 0;
					}
					else
					{
						__LIB_2__::func_856(iVar13, *uParam0, &iVar0, &Var1, &fVar2, uParam2, bVar8, iVar7, iVar3, fVar11, fVar12, bVar9);
						Var27 = { Var1 };
						fVar28 = fVar2;
						if (!uParam2->f_50)
						{
							bVar29 = true;
						}
						else
						{
							bVar29 = false;
						}
						if (func_117(uParam2->f_35, &Var27, &(uParam2->f_38), &(uParam2->f_45), bVar29, 1) || __LIB_1__::func_572(&Var27, bVar29))
						{
							if (!uParam2->f_50)
							{
								uParam2->f_33 = 0;
								uParam2->f_50 = 1;
								*uParam0 = { Var27 };
								*uParam1 = fVar28;
								uParam2->f_6 = 9999.9f;
								uParam2->f_7 = 9999.9f;
								return 0;
							}
							else
							{
								*uParam0 = { Var27 };
								*uParam1 = fVar28;
								return 1;
							}
						}
						else
						{
							*uParam0 = { Var27 };
							*uParam1 = fVar28;
							return 1;
						}
					}
				}
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 3)
			{
				return 0;
			}
			else
			{
				__LIB_6__::func_448(&Global_1574205, uParam0, uParam1, *uParam0);
				if (uParam2->f_11)
				{
					uParam2->f_27 = 1;
				}
				return 1;
			}
		}
		Global_2674786.f_164 = iVar6;
	}
	return 0;
}

void func_79(int iParam0, var uParam1)//Position - 0x386B
{
	if (!__LIB_1__::func_546(Global_2674786[iParam0 /*3*/], uParam1))
	{
		Global_2674786.f_162 = (Global_2674786.f_162 - 1);
		__LIB_0__::func_824(iParam0);
		if (Global_2674786.f_162 > Global_2674786.f_163)
		{
			func_79(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_79(iParam0 + 1, uParam1);
	}
}

void func_81(struct<3> Param0, float fParam1, int iParam2)//Position - 0x3911
{
	struct<3> Var0;
	var uVar1;
	Var0 = { Global_2674786[iParam2 /*3*/] };
	uVar1 = Global_2674786.f_121[iParam2];
	Global_2674786[iParam2 /*3*/] = { Param0 };
	Global_2674786.f_121[iParam2] = fParam1;
	if (iParam2 <= Global_2674786.f_162 && iParam2 < 39)
	{
		if (SYSTEM::VMAG(Var0) > 0f)
		{
			func_81(Var0, uVar1, iParam2 + 1);
		}
	}
}

int func_82(struct<3> Param0, float fParam1, float fParam2)//Position - 0x397E
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	bool bVar3;
	float fVar4;
	float fVar5;
	fVar4 = 99999.9f;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar3 = iVar0;
		if (func_83(bVar3))
		{
			Var1 = { __LIB_1__::func_694(bVar3) };
			fVar5 = SYSTEM::VDIST(Param0, Var1);
			if (fVar5 < fParam1)
			{
				if (fVar5 < fVar4)
				{
					fVar4 = fVar5;
				}
				iVar2++;
			}
		}
		iVar0++;
	}
	*fParam2 = fVar4;
	return iVar2;
}

int func_83(bool bParam0)//Position - 0x39E6
{
	if (__LIB_1__::func_693(bParam0, 0, 1))
	{
		if (!__LIB_2__::func_154(bParam0))
		{
			if (NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), bParam0))
			{
				if (!PLAYER::GET_PLAYER_TEAM(bParam0) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
				{
					if (__LIB_1__::func_29(PLAYER::PLAYER_ID(), 1, 0))
					{
						if (!__LIB_0__::func_825(PLAYER::GET_PLAYER_TEAM(bParam0), PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()), 0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
				else if (PLAYER::GET_PLAYER_TEAM(bParam0) == -1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
				{
					if (!__LIB_1__::func_29(PLAYER::PLAYER_ID(), 1, 0))
					{
						if (!__LIB_35__::func_492(bParam0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_117(struct<3> Param0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)//Position - 0x52D7
{
	int iVar0;
	bool bVar1;
	if (func_171(Param0))
	{
		if (func_120(uParam1, bParam4, 0, 1, 1))
		{
			if (bParam4)
			{
			}
			return 1;
		}
	}
	if (__LIB_2__::func_766(uParam1, bParam4, 1))
	{
		if (bParam4)
		{
		}
		return 1;
	}
	if (bParam5)
	{
		if (__LIB_0__::func_822(*uParam1, 1056964608))
		{
			return 1;
		}
	}
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		if (SYSTEM::VDIST(*uParam1, *(uParam2[iVar0 /*3*/])) < (*uParam3)[iVar0])
		{
			if (bParam4)
			{
				__LIB_1__::func_450(uParam1, *(uParam2[iVar0 /*3*/]), (*uParam3)[iVar0], 1036831949, 0, 0);
			}
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
		return 1;
	}
	return 0;
}

int func_120(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x5521
{
	int iVar0;
	struct<3> Var1;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_2672169[iVar0 /*17*/].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_2672169[iVar0 /*17*/].f_16))
			{
				if (__LIB_1__::func_528(*uParam0, &(Global_2672169[iVar0 /*17*/]), 1008981770, bParam4, 0))
				{
					if (bParam1)
					{
						if (Global_2672169[iVar0 /*17*/].f_12)
						{
							*uParam0 = { Global_2672169[iVar0 /*17*/].f_13 };
						}
						else
						{
							Var1 = { *uParam0 };
							__LIB_1__::func_566(&Var1, &(Global_2672169[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_120(&Var1, 0, 0, 0, 1))
							{
								Var1 = { *uParam0 };
								__LIB_1__::func_566(&Var1, &(Global_2672169[iVar0 /*17*/]), 1036831949, 1, 0);
							}
							*uParam0 = { Var1 };
						}
					}
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_121(var uParam0, var uParam1, var uParam2)//Position - 0x55FC
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	float fVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	float fVar9;
	bool bVar10;
	int iVar11;
	float fVar12;
	struct<3> Var13;
	var uVar14;
	if (Global_2667225.f_1754 > 0)
	{
		iVar1 = 0;
		iVar2 = 0;
		if (!SYSTEM::VMAG(uParam2->f_35) > 0f)
		{
			uParam2->f_35 = { *uParam0 };
		}
		if (uParam2->f_15)
		{
			if (func_117(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam2->f_48)
		{
			if (__LIB_1__::func_572(uParam0, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam0->f_2 < -80f)
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
		Global_2674786.f_162 = 0;
		Global_2674786.f_163 = 0;
		iVar5 = 0;
		while (iVar5 < 40)
		{
			Global_2674786[iVar5 /*3*/] = { 0f, 0f, 0f };
			Global_2674786.f_121[iVar5] = 0f;
			iVar5++;
		}
		if (uParam2->f_30)
		{
			__LIB_1__::func_454(*uParam0);
		}
		else if (uParam2->f_29)
		{
			__LIB_0__::func_838();
		}
		else
		{
			__LIB_0__::func_837();
		}
		iVar1 = 0;
		while (iVar1 < Global_2667225.f_1754)
		{
			iVar2 = Global_2667225.f_2160[iVar1];
			if (iVar2 > -1 && iVar2 < 101)
			{
				Var3 = { Global_2667225.f_1755[iVar2 /*4*/] };
				fVar4 = Global_2667225.f_1755[iVar2 /*4*/].f_3;
				if (SYSTEM::VMAG(Var3) > 0f)
				{
					if ((uParam2->f_57 && SYSTEM::VDIST(Var3, uParam2->f_35) > uParam2->f_4) || uParam2->f_57 == 0)
					{
						if ((uParam2->f_5 > 0f && SYSTEM::VDIST(Var3.f_0, Var3.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f)
						{
							if ((uParam2->f_12 && !__LIB_6__::func_445(Var3, fVar4, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12)
							{
								if (!uParam2->f_15 || !func_117(uParam2->f_35, &Var3, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
								{
									if (uParam2->f_8)
									{
										iVar6 = uParam2->f_31;
										bVar7 = true;
										iVar8 = 1;
										fVar9 = uParam2->f_49;
										if (!uParam2->f_55)
										{
											iVar6 = 0;
											bVar7 = false;
											iVar8 = 0;
											fVar9 = 1f;
										}
										else if (uParam2->f_17)
										{
											iVar6 = 0;
											bVar7 = false;
											iVar8 = 0;
											if (uParam2->f_33 == 1)
											{
												fVar9 = (fVar9 * 0.375f);
											}
										}
										else
										{
											bVar7 = true;
											iVar8 = 1;
											if (uParam2->f_28)
											{
												if (uParam2->f_33 == 1)
												{
													fVar9 = (fVar9 * 0.375f);
												}
											}
										}
										bVar10 = false;
										if (!__LIB_2__::func_989(Var3, fVar4, uParam2->f_34))
										{
											if (uParam2->f_3 > 7f)
											{
												if (__LIB_41__::func_947(Var3, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
												{
													bVar10 = true;
												}
											}
											else if (__LIB_41__::func_947(Var3, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !__LIB_35__::func_878(Var3, fVar4, uParam2->f_34, 1, 1, 0, 0, uParam2->f_58, 0))
											{
												bVar10 = true;
											}
										}
										if (bVar10)
										{
											if ((uParam2->f_29 || uParam2->f_30) || uParam2->f_52)
											{
												fVar12 = 0f;
												if (uParam2->f_52)
												{
													iVar11 = func_82(Var3, uParam2->f_54, &fVar12);
												}
												if (!uParam2->f_52 || (uParam2->f_52 && iVar11 <= uParam2->f_53))
												{
													if (uParam2->f_52)
													{
														if (iVar11 < uParam2->f_53)
														{
															iVar5 = 0;
															while (iVar5 < Global_2674786.f_162)
															{
																Global_2674786[iVar5 /*3*/] = { 0f, 0f, 0f };
																Global_2674786.f_121[iVar5] = 0f;
																iVar5++;
															}
															Global_2674786.f_162 = 0;
															uParam2->f_53 = iVar11;
														}
													}
													if (uParam2->f_30)
													{
														if (Global_2674786.f_162 == 0)
														{
															Global_2674786[0 /*3*/] = { Var3 };
															Global_2674786.f_121[0] = fVar4;
														}
														else
														{
															iVar5 = 0;
															while (iVar5 < Global_2674786.f_162 + 1)
															{
																if (iVar5 < 40)
																{
																	if (SYSTEM::VDIST2(Var3, uParam2->f_35) < SYSTEM::VDIST2(Global_2674786[iVar5 /*3*/], uParam2->f_35))
																	{
																		func_81(Var3, fVar4, iVar5);
																		iVar5 = Global_2674786.f_162 + 1;
																	}
																}
																iVar5++;
															}
														}
														Global_2674786.f_162++;
														if (Global_2674786.f_162 >= 5)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar1 = Global_2667225.f_1754;
															}
															else if (Global_2674786.f_162 == 40)
															{
																iVar1 = Global_2667225.f_1754;
															}
														}
													}
													else
													{
														Global_2674786[Global_2674786.f_162 /*3*/] = { Var3 };
														Global_2674786.f_121[Global_2674786.f_162] = fVar4;
														Global_2674786.f_162++;
														if (Global_2674786.f_162 >= 10)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar1 = Global_2667225.f_1754;
															}
															else if (Global_2674786.f_162 == 40)
															{
																iVar1 = Global_2667225.f_1754;
															}
														}
													}
												}
											}
											else
											{
												*uParam0 = { Var3 };
												*uParam1 = fVar4;
												return 1;
											}
										}
									}
									else
									{
										*uParam0 = { Var3 };
										*uParam1 = fVar4;
										return 1;
									}
								}
							}
						}
					}
				}
			}
			iVar1++;
		}
		if (Global_2674786.f_162 > 0)
		{
			if (uParam2->f_30)
			{
				*uParam0 = { Global_2674786[0 /*3*/] };
				*uParam1 = Global_2674786.f_121[0];
				return 1;
			}
			else
			{
				if (Global_2674786.f_163 > 0 && !Global_2674786.f_163 == Global_2674786.f_162)
				{
					func_79(0, uParam2);
				}
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2674786.f_162);
				Var13 = { Global_2674786[0 /*3*/] };
				uVar14 = Global_2674786.f_121[0];
				Global_2674786[0 /*3*/] = { Global_2674786[iVar0 /*3*/] };
				Global_2674786.f_121[0] = Global_2674786.f_121[iVar0];
				Global_2674786[iVar0 /*3*/] = { Var13 };
				Global_2674786.f_121[iVar0] = uVar14;
				*uParam0 = { Global_2674786[0 /*3*/] };
				*uParam1 = Global_2674786.f_121[0];
				return 1;
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 2)
			{
				return 0;
			}
			else if (uParam2->f_59 && Global_2667225.f_1754 > 0)
			{
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2667225.f_1754);
				*uParam0 = { Global_2667225.f_1755[iVar0 /*4*/] };
				*uParam1 = Global_2667225.f_1755[iVar0 /*4*/].f_3;
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_171(struct<3> Param0)//Position - 0xEFD2
{
	int iVar0;
	struct<3> Var1;
	if (!Global_2667225.f_515 && !Global_2667225.f_516)
	{
		if (!Global_2667225.f_45.f_317)
		{
			if (!__LIB_4__::func_934(PLAYER::PLAYER_ID(), 1))
			{
				return 1;
			}
			if (!__LIB_1__::func_560(Param0, 1008981770))
			{
				if (!func_120(&Param0, 0, 0, 0, 1))
				{
					return 1;
				}
				else if (func_120(&Param0, 0, 1, 0, 1))
				{
					return 1;
				}
			}
			else
			{
				iVar0 = __LIB_1__::func_559(Param0, 1008981770);
				if (iVar0 > -1)
				{
					Var1 = { __LIB_0__::func_852(&(Global_2667225.f_45[iVar0 /*12*/])) };
					if (!func_120(&Var1, 0, 0, 0, 1))
					{
						if (!func_120(&Param0, 0, 0, 0, 1))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_185(bool bParam0)//Position - 0xF37F
{
	switch (bParam0)
	{
		case 0:
			return func_37(23);
		case 1:
			return func_37(24);
		case 2:
			return func_37(25);
		default:
	}
	return 0;
}

void func_186(int iParam0)//Position - 0xF3BC
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	Local_157.f_6 = iParam0;
}

int func_188()//Position - 0xF434
{
	return func_189();
}

var func_189()//Position - 0xF440
{
	return Global_262145.f_15622 /* Tunable: EXEC_CONTRABAND_SELL_EXPIRY */;
}

int func_190()//Position - 0xF44F
{
	return Local_157.f_6;
}

void func_191(int iParam0)//Position - 0xF45C
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	Local_157.f_5 = iParam0;
}

int func_192()//Position - 0xF476
{
	bool bVar0;
	if (!func_212())
	{
		return 1;
	}
	if (!func_211())
	{
		return 1;
	}
	bVar0 = false;
	while (bVar0 < func_210())
	{
		if (!func_193(bVar0, 1))
		{
			return 0;
		}
		bVar0++;
	}
	return 1;
}

int func_193(bool bParam0, bool bParam1)//Position - 0xF4BB
{
	int iVar0;
	int iVar1;
	if (__LIB_0__::func_799(func_209(bParam0)))
	{
		if (!func_207(bParam0))
		{
			if (func_206(bParam0))
			{
				iVar0 = func_205(bParam0);
				iVar1 = func_204(bParam0);
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iVar0))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iVar0) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(iVar0) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
					{
						if (__LIB_0__::func_953(iVar0))
						{
							if (__LIB_0__::func_930(&(Local_157.f_400[bParam0 /*8*/]), iVar0, 26, func_209(bParam0), iVar1, 1, 1, 1))
							{
								MISC::CLEAR_BIT(&(Local_157.f_547), bParam0);
								Local_157.f_400[bParam0 /*8*/].f_1 = { 0f, 0f, 0f };
								Local_157.f_400[bParam0 /*8*/].f_4 = 0f;
								__LIB_0__::clearF_1Prop(&(Local_157.f_400[bParam0 /*8*/].f_6));
							}
						}
					}
				}
			}
			else if (bParam1)
			{
				if (__LIB_1__::func_672(&(Local_157.f_400[bParam0 /*8*/]), 26, func_209(bParam0), func_200(bParam0), func_199(bParam0), 1, 1, 1))
				{
					MISC::CLEAR_BIT(&(Local_157.f_547), bParam0);
					Local_157.f_400[bParam0 /*8*/].f_1 = { 0f, 0f, 0f };
					Local_157.f_400[bParam0 /*8*/].f_4 = 0f;
					__LIB_0__::clearF_1Prop(&(Local_157.f_400[bParam0 /*8*/].f_6));
					func_194(func_197(bParam0), 75);
				}
			}
		}
		else
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_209(bParam0));
			return 1;
		}
	}
	return 0;
}

void func_194(int iParam0, int iParam1)//Position - 0xF606
{
	int iVar0;
	int iVar1;
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
	PED::SET_PED_DIES_WHEN_INJURED(iParam0, true);
	iVar0 = func_196(-1);
	WEAPON::GIVE_WEAPON_TO_PED(iParam0, iVar0, 9999999, false, true);
	iVar1 = 3;
	PED::SET_PED_COMBAT_MOVEMENT(iParam0, iVar1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 42, false);
	PED::SET_PED_HIGHLY_PERCEPTIVE(iParam0, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 43, true);
	PED::SET_PED_TARGET_LOSS_RESPONSE(iParam0, 1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 146, true);
	PED::SET_PED_ACCURACY(iParam0, iParam1);
	func_195(iParam0);
	PED::SET_PED_KEEP_TASK(iParam0, true);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, Global_1837197);
}

void func_195(int iParam0)//Position - 0xF684
{
	float fVar0;
	int iVar1;
	int iVar2;
	fVar0 = 1f;
	iVar2 = Global_1946100;
	if (Global_1946098 == 1)
	{
		iVar2 = 3;
	}
	if (iVar2 == 2)
	{
		PED::SET_PED_SHOOT_RATE(iParam0, Global_262145.f_16763 /* Tunable: EXEC_SELL_MEDIUM_PED_SHOOT_RATE */);
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 24, false);
		fVar0 = Global_262145.f_16764 /* Tunable: EXEC_SELL_MEDIUM_ENEMY_HEALTH */;
	}
	else if (iVar2 == 3)
	{
		PED::SET_PED_SHOOT_RATE(iParam0, Global_262145.f_16767 /* Tunable: EXEC_SELL_EASY_PED_SHOOT_RATE */);
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 24, false);
		PED::SET_PED_COMBAT_ABILITY(iParam0, 0);
		fVar0 = Global_262145.f_16768 /* Tunable: EXEC_SELL_EASY_ENEMY_HEALTH */;
	}
	iVar1 = SYSTEM::ROUND((100f + (100f * fVar0)));
	if (ENTITY::GET_ENTITY_HEALTH(iParam0) > iVar1)
	{
		ENTITY::SET_ENTITY_MAX_HEALTH(iParam0, iVar1);
		ENTITY::SET_ENTITY_HEALTH(iParam0, iVar1, 0);
	}
}

int func_196(int iParam0)//Position - 0xF727
{
	int iVar0;
	int iVar1;
	iVar0 = joaat("WEAPON_PISTOL");
	if (func_10() == 12)
	{
		iVar0 = joaat("WEAPON_MICROSMG");
	}
	if (func_10() == 13)
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 1000);
		if (iVar1 > 500)
		{
			iVar0 = joaat("WEAPON_MICROSMG");
		}
	}
	if (func_10() == 13)
	{
		iVar0 = joaat("WEAPON_MICROSMG");
	}
	else if (func_10() == 6)
	{
		switch (func_210())
		{
			case 4:
				iVar0 = joaat("WEAPON_PISTOL");
				break;
			case 6:
				if ((iParam0 % 2) == 0)
				{
					iVar0 = joaat("WEAPON_PISTOL");
				}
				else
				{
					iVar0 = joaat("WEAPON_MICROSMG");
				}
				break;
			case 8:
				if ((iParam0 % 2) == 0)
				{
					iVar0 = joaat("WEAPON_MICROSMG");
				}
				else
				{
					iVar0 = joaat("WEAPON_ASSAULTRIFLE");
				}
				break;
			}
	}
	return iVar0;
}

int func_197(bool bParam0)//Position - 0xF7E2
{
	if (func_207(bParam0))
	{
		return NETWORK::NET_TO_PED(Local_157.f_400[bParam0 /*8*/]);
	}
	return 0;
}

float func_199(bool bParam0)//Position - 0xF864
{
	switch (func_10())
	{
		case 9:
			switch (Local_157.f_384)
			{
				case 0:
					switch (bParam0)
					{
						case 0:
							return 173.599f;
						case 1:
							return 12.199f;
						case 2:
							return 130.399f;
						case 3:
							return 310.999f;
						case 4:
							return 228.598f;
						case 5:
							return 199.997f;
						case 6:
							return 173.398f;
						case 7:
							return 196.994f;
						case 8:
							return 162.399f;
						case 9:
							return 134.799f;
						default:
					}
					break;
				case 1:
					switch (bParam0)
					{
						case 0:
							return 259.599f;
						case 1:
							return 210.799f;
						case 2:
							return 264.798f;
						case 3:
							return 289.189f;
						case 4:
							return 30.994f;
						case 5:
							return 74.593f;
						case 6:
							return 332.592f;
						case 7:
							return 233.191f;
						case 8:
							return 177.588f;
						case 9:
							return 166.187f;
						default:
					}
					break;
				case 2:
					switch (bParam0)
					{
						case 0:
							return 221.9998f;
						case 1:
							return 286.398f;
						case 2:
							return 115.597f;
						case 3:
							return 64.9988f;
						case 4:
							return 56.797f;
						case 5:
							return 171.7995f;
						case 6:
							return 113.395f;
						case 7:
							return 1.4f;
						case 8:
							return 23.597f;
						case 9:
							return 34.2f;
						default:
					}
					break;
				case 3:
					switch (bParam0)
					{
						case 0:
							return 272.797f;
						case 1:
							return 270.4f;
						case 2:
							return 198.797f;
						case 3:
							return 26.597f;
						case 4:
							return 151.1986f;
						case 5:
							return 312.7979f;
						case 6:
							return 288.194f;
						case 7:
							return 338.594f;
						case 8:
							return 153.993f;
						case 9:
							return 288.593f;
						default:
					}
					break;
				case 4:
					switch (bParam0)
					{
						case 0:
							return 213.399f;
						case 1:
							return 43.798f;
						case 2:
							return 104.798f;
						case 3:
							return 149.397f;
						case 4:
							return 282.398f;
						case 5:
							return 192.393f;
						case 6:
							return 3.193f;
						case 7:
							return 173.199f;
						case 8:
							return 102.998f;
						case 9:
							return 160.998f;
						default:
					}
					break;
			}
			break;
		case 13:
			switch (Local_157.f_394[0])
			{
				case 0:
					switch (bParam0)
					{
						case 0:
							return 226.197f;
						case 1:
							return 69.999f;
						case 2:
							return 57.6f;
						case 3:
							return 325.999f;
						case 4:
							return 138.995f;
						case 5:
							return 26.994f;
						case 6:
							return 324.193f;
						case 7:
							return 112.592f;
						case 8:
							return 312.19f;
						default:
					}
					break;
				case 1:
					switch (bParam0)
					{
						case 0:
							return 183.597f;
						case 1:
							return 80.797f;
						case 2:
							return 216.796f;
						case 3:
							return 167.996f;
						case 4:
							return 152.395f;
						case 5:
							return 290.792f;
						case 6:
							return 314.794f;
						case 7:
							return 165.592f;
						case 8:
							return 71.392f;
						default:
					}
					break;
				case 2:
					switch (bParam0)
					{
						case 0:
							return 180.5975f;
						case 1:
							return 36.797f;
						case 2:
							return 259.5967f;
						case 3:
							return 130.3964f;
						case 4:
							return 182.4457f;
						case 5:
							return 59.8454f;
						case 6:
							return 66.0453f;
						case 7:
							return 64.0452f;
						case 8:
							return 319.8442f;
						default:
					}
					break;
				case 3:
					switch (bParam0)
					{
						case 0:
							return 123.3997f;
						case 1:
							return 142.1995f;
						case 2:
							return 136.5994f;
						case 3:
							return 99.396f;
						case 4:
							return 61.3977f;
						case 5:
							return 30.1976f;
						case 6:
							return 79.197f;
						case 7:
							return 180.7967f;
						case 8:
							return 38.5959f;
						default:
					}
					break;
				case 4:
					switch (bParam0)
					{
						case 0:
							return 234.4485f;
						case 1:
							return 312.6486f;
						case 2:
							return 330f;
						case 3:
							return 55.0465f;
						case 4:
							return 265.0478f;
						case 5:
							return 349.595f;
						case 6:
							return 23.395f;
						case 7:
							return 286.995f;
						case 8:
							return 359.8465f;
						default:
					}
					break;
			}
			break;
	}
	return 0f;
}

Vector3 func_200(bool bParam0)//Position - 0xFE73
{
	switch (func_10())
	{
		case 9:
			switch (Local_157.f_384)
			{
				case 0:
					switch (bParam0)
					{
						case 0:
							return 1686.565f, 3283.567f, 40.147f;
						case 1:
							return 1686.705f, 3282.48f, 40.146f;
						case 2:
							return 1707.38f, 3285.957f, 40.143f;
						case 3:
							return 1706.214f, 3284.945f, 40.132f;
						case 4:
							return 1705.706f, 3290.164f, 44.399f;
						case 5:
							return 1689.609f, 3277.303f, 40.076f;
						case 6:
							return 1700.036f, 3286.393f, 47.922f;
						case 7:
							return 1698.173f, 3288.865f, 40.147f;
						case 8:
							return 1720.138f, 3285.192f, 43.149f;
						case 9:
							return 1685.802f, 3278.66f, 40.056f;
						default:
					}
					break;
				case 1:
					switch (bParam0)
					{
						case 0:
							return -22.418f, 3038.632f, 39.986f;
						case 1:
							return 0.953f, 3048.67f, 39.686f;
						case 2:
							return -30.788f, 3049.856f, 39.595f;
						case 3:
							return -25.003f, 3034.537f, 43.501f;
						case 4:
							return 1.45f, 3047.88f, 39.67f;
						case 5:
							return -29.428f, 3049.529f, 39.711f;
						case 6:
							return -26.525f, 3041.971f, 39.986f;
						case 7:
							return -17.376f, 3034.479f, 39.974f;
						case 8:
							return -34.036f, 3030.758f, 40.036f;
						case 9:
							return -34.53f, 3017.445f, 39.653f;
						default:
					}
					break;
				case 2:
					switch (bParam0)
					{
						case 0:
							return -2119.4717f, 2615.5295f, -0.0022f;
						case 1:
							return -2077.927f, 2604.631f, 1.035f;
						case 2:
							return -2080.564f, 2603.516f, 1.035f;
						case 3:
							return -2086.7917f, 2625.189f, 2.089f;
						case 4:
							return -2085.976f, 2616.372f, 0.2f;
						case 5:
							return -2097.8813f, 2637.0234f, 1.9161f;
						case 6:
							return -2082.671f, 2609.676f, 2.089f;
						case 7:
							return -2097.8198f, 2635.863f, 1.8648f;
						case 8:
							return -2090.961f, 2638.719f, 2.089f;
						case 9:
							return -2118.6753f, 2614.6155f, 0.2f;
						default:
					}
					break;
				case 3:
					switch (bParam0)
					{
						case 0:
							return 201.773f, 2444.678f, 59.483f;
						case 1:
							return 201.069f, 2434.979f, 59.47f;
						case 2:
							return 194.641f, 2457.049f, 54.709f;
						case 3:
							return 195.564f, 2455.865f, 54.782f;
						case 4:
							return 225.521f, 2447.1328f, 56.33f;
						case 5:
							return 225.092f, 2446.4521f, 56.4106f;
						case 6:
							return 202.803f, 2444.631f, 62.421f;
						case 7:
							return 205.382f, 2477.153f, 54.631f;
						case 8:
							return 211.588f, 2463.634f, 54.958f;
						case 9:
							return 216.219f, 2470.21f, 54.765f;
						default:
					}
					break;
				case 4:
					switch (bParam0)
					{
						case 0:
							return 2108.241f, 2923.977f, 56.432f;
						case 1:
							return 2109.137f, 2922.911f, 56.43f;
						case 2:
							return 2137.334f, 2901.555f, 56.268f;
						case 3:
							return 2112.013f, 2923.713f, 49.932f;
						case 4:
							return 2130.445f, 2917.955f, 46.663f;
						case 5:
							return 2136.251f, 2897.009f, 46.331f;
						case 6:
							return 2136.553f, 2895.294f, 46.241f;
						case 7:
							return 2122.212f, 2887.214f, 46.196f;
						case 8:
							return 2108.959f, 2908.356f, 46.703f;
						case 9:
							return 2139.324f, 2899.315f, 56.267f;
						default:
					}
					break;
			}
			break;
		case 13:
			switch (Local_157.f_394[0])
			{
				case 0:
					switch (bParam0)
					{
						case 0:
							return -106.011f, -2711.141f, 4.997f;
						case 1:
							return -104.058f, -2711.94f, 4.996f;
						case 2:
							return -92.315f, -2759.717f, 5.087f;
						case 3:
							return -93.367f, -2759.866f, 5.087f;
						case 4:
							return -77.449f, -2671.311f, 5.009f;
						case 5:
							return -78.053f, -2672.953f, 5.012f;
						case 6:
							return -100.601f, -2688.139f, 5.001f;
						case 7:
							return -93.626f, -2773.771f, 5.087f;
						case 8:
							return -96.429f, -2697.867f, 5.013f;
						default:
					}
					break;
				case 1:
					switch (bParam0)
					{
						case 0:
							return 884.089f, -2599.981f, 9.116f;
						case 1:
							return 892.923f, -2618.841f, 4.759f;
						case 2:
							return 891.161f, -2617.305f, 4.792f;
						case 3:
							return 885.512f, -2603.554f, 5.107f;
						case 4:
							return 892.079f, -2626.937f, 2.397f;
						case 5:
							return 898.665f, -2600.539f, 9.116f;
						case 6:
							return 891.064f, -2627.698f, 2.174f;
						case 7:
							return 876.353f, -2629.129f, 2.067f;
						case 8:
							return 900.892f, -2600.36f, 9.116f;
						default:
					}
					break;
				case 2:
					switch (bParam0)
					{
						case 0:
							return -501.2358f, -2811.8323f, 5.0004f;
						case 1:
							return -517.3156f, -2820.2407f, 5.0004f;
						case 2:
							return -518.6866f, -2819.4062f, 5.0004f;
						case 3:
							return -522.037f, -2794.3145f, 5.0004f;
						case 4:
							return -524.2614f, -2801.131f, 5.0004f;
						case 5:
							return -524.0466f, -2802.6973f, 5.0004f;
						case 6:
							return -511.3055f, -2808.841f, 5.0004f;
						case 7:
							return -494.5088f, -2834.5796f, 5.0004f;
						case 8:
							return -526.2589f, -2803.0688f, 5.0004f;
						default:
					}
					break;
				case 3:
					switch (bParam0)
					{
						case 0:
							return -707.134f, -1311.7767f, 8.5508f;
						case 1:
							return -696.8458f, -1318.9224f, 7.2005f;
						case 2:
							return -700.508f, -1316.7605f, 4.1019f;
						case 3:
							return -687.0558f, -1335.4413f, 4.1019f;
						case 4:
							return -707.6573f, -1353.5397f, 0.6002f;
						case 5:
							return -708.6399f, -1354.6143f, 0.6002f;
						case 6:
							return -694.9748f, -1331.5516f, 4.1019f;
						case 7:
							return -695.9897f, -1330.669f, 4.1019f;
						case 8:
							return -704.4351f, -1358.1161f, 4.1022f;
						default:
					}
					break;
				case 4:
					switch (bParam0)
					{
						case 0:
							return -456.904f, -2269.3513f, 7.5208f;
						case 1:
							return -457.1874f, -2271.0305f, 7.5208f;
						case 2:
							return -451.85f, -2266.866f, 6.608f;
						case 3:
							return -426.7677f, -2265.7769f, 6.6082f;
						case 4:
							return -454.2534f, -2268.4136f, 6.6082f;
						case 5:
							return -460.84f, -2262.911f, 7.521f;
						case 6:
							return -430.938f, -2273.629f, 6.608f;
						case 7:
							return -432.033f, -2273.013f, 6.608f;
						case 8:
							return -442.2232f, -2264.9783f, 6.6082f;
						default:
					}
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_204(bool bParam0)//Position - 0x108F4
{
	switch (func_10())
	{
		case 13:
			switch (bParam0)
			{
				case 9:
					return -1;
				case 10:
					return 0;
				default:
			}
			break;
		case 12:
			if (!func_37(8))
			{
				switch (bParam0)
				{
					case 0:
					case 2:
						return -1;
					case 1:
					case 3:
						return 0;
					default:
				}
			}
			else
			{
				switch (bParam0)
				{
					case 0:
						return -1;
					case 1:
						return 0;
					case 2:
						return 1;
					case 3:
						return 2;
					}
				default:
			}
			break;
		case 5:
			switch (bParam0)
			{
				case 0:
				case 2:
					return -1;
				case 1:
				case 3:
					return 0;
				default:
			}
			break;
		case 6:
			switch (func_210())
			{
				case 4:
					switch (bParam0)
					{
						case 0:
						case 2:
							return -1;
						case 1:
						case 3:
							return 0;
						default:
					}
					break;
				case 6:
					switch (bParam0)
					{
						case 0:
						case 3:
							return -1;
						case 1:
						case 4:
							return 0;
						case 2:
						case 5:
							return 1;
						default:
					}
					break;
				case 8:
					switch (bParam0)
					{
						case 0:
						case 4:
							return -1;
						case 1:
						case 5:
							return 0;
						case 2:
						case 6:
							return 1;
						case 3:
						case 7:
							return 2;
						default:
					}
					break;
			}
			break;
		case 11:
			switch (bParam0)
			{
				case 0:
				case 4:
				case 8:
					return -1;
				case 1:
				case 5:
				case 9:
					return 0;
				case 2:
				case 6:
				case 10:
					return 1;
				case 3:
				case 7:
				case 11:
					return 2;
				default:
			}
			break;
	}
	return -1;
}

int func_205(bool bParam0)//Position - 0x10B00
{
	switch (func_10())
	{
		case 12:
			if (!func_37(8))
			{
				switch (bParam0)
				{
					case 0:
					case 1:
						return Local_157.f_499[0 /*6*/];
					case 2:
					case 3:
						return Local_157.f_499[1 /*6*/];
					default:
				}
			}
			else
			{
				return Local_157.f_499[0 /*6*/];
			}
			break;
		case 5:
			switch (bParam0)
			{
				case 0:
				case 1:
					return Local_157.f_499[0 /*6*/];
				case 2:
				case 3:
					return Local_157.f_499[1 /*6*/];
				default:
			}
			break;
		case 11:
			switch (bParam0)
			{
				case 0:
				case 1:
				case 2:
				case 3:
					return Local_157.f_499[0 /*6*/];
				case 4:
				case 5:
				case 6:
				case 7:
					return Local_157.f_499[1 /*6*/];
				case 8:
				case 9:
				case 10:
				case 11:
					return Local_157.f_499[2 /*6*/];
				default:
			}
			break;
		case 6:
			switch (func_210())
			{
				case 4:
					switch (bParam0)
					{
						case 0:
						case 1:
							return Local_157.f_499[0 /*6*/];
						case 2:
						case 3:
							return Local_157.f_499[1 /*6*/];
							break;
					}
					break;
				case 6:
					switch (bParam0)
					{
						case 0:
						case 1:
						case 2:
							return Local_157.f_499[0 /*6*/];
						case 3:
						case 4:
						case 5:
							return Local_157.f_499[1 /*6*/];
							break;
					}
					break;
				case 8:
					switch (bParam0)
					{
						case 0:
						case 1:
						case 2:
						case 3:
							return Local_157.f_499[0 /*6*/];
						case 4:
						case 5:
						case 6:
						case 7:
							return Local_157.f_499[1 /*6*/];
							break;
					}
					break;
			}
			break;
	}
	return -1;
}

int func_206(bool bParam0)//Position - 0x10D26
{
	switch (func_10())
	{
		case 13:
			if (bParam0 == 9 || bParam0 == 10)
			{
				return 1;
			}
			break;
		case 12:
		case 5:
		case 11:
		case 6:
			return 1;
	}
	return 0;
}

bool func_207(bool bParam0)//Position - 0x10D74
{
	return NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_400[bParam0 /*8*/]);
}

int func_209(bool bParam0)//Position - 0x10DA8
{
	switch (func_10())
	{
		case 9:
			switch (Local_157.f_384)
			{
				case 0:
					if (bParam0 == 6)
					{
						return joaat("G_F_Y_Lost_01");
					}
					return joaat("G_M_Y_Lost_01");
				case 1:
					return joaat("G_M_Y_Azteca_01");
				case 2:
					return joaat("G_M_Y_Lost_01");
				case 3:
					return joaat("G_M_M_ChiGoon_02");
				case 4:
					return joaat("G_M_Y_Lost_01");
				default:
			}
			break;
		case 13:
			switch (Local_157.f_394[0])
			{
				case 0:
					switch (bParam0)
					{
						case 0:
							return joaat("G_M_M_ArmGoon_01");
						case 1:
							return joaat("G_M_M_ArmGoon_01");
						case 2:
							return joaat("G_M_M_ArmGoon_01");
						case 3:
							return joaat("G_M_M_ArmGoon_01");
						case 4:
							return joaat("G_M_M_ArmGoon_01");
						case 5:
							return joaat("G_M_M_ArmGoon_01");
						case 6:
							return joaat("G_M_M_ArmGoon_01");
						case 7:
							return joaat("G_M_M_ArmGoon_01");
						case 8:
							return joaat("G_M_M_ArmGoon_01");
						default:
					}
					break;
				case 1:
					switch (bParam0)
					{
						case 0:
							return joaat("G_M_Y_MexGoon_02");
						case 1:
							return joaat("G_M_Y_MexGoon_02");
						case 2:
							return joaat("G_M_Y_MexGoon_02");
						case 3:
							return joaat("G_M_Y_MexGoon_02");
						case 4:
							return joaat("G_M_Y_MexGoon_02");
						case 5:
							return joaat("G_M_Y_MexGoon_02");
						case 6:
							return joaat("G_M_Y_MexGoon_02");
						case 7:
							return joaat("G_M_Y_MexGoon_02");
						case 8:
							return joaat("G_M_Y_MexGoon_02");
						default:
					}
					break;
				case 2:
					switch (bParam0)
					{
						case 0:
							return joaat("G_M_M_ArmGoon_01");
						case 1:
							return joaat("G_M_M_ArmGoon_01");
						case 2:
							return joaat("G_M_M_ArmBoss_01");
						case 3:
							return joaat("G_M_M_ArmGoon_01");
						case 4:
							return joaat("G_M_M_ArmGoon_01");
						case 5:
							return joaat("G_M_M_ArmGoon_01");
						case 6:
							return joaat("G_M_M_ArmGoon_01");
						case 7:
							return joaat("G_M_M_ArmGoon_01");
						case 8:
							return joaat("G_M_M_ArmGoon_01");
						default:
					}
					break;
				case 3:
					switch (bParam0)
					{
						case 0:
							return joaat("G_M_Y_Korean_01");
						case 1:
							return joaat("G_M_Y_Korean_01");
						case 2:
							return joaat("G_M_Y_Korean_01");
						case 3:
							return joaat("G_M_Y_Korean_01");
						case 4:
							return joaat("G_M_Y_Korean_01");
						case 5:
							return joaat("G_M_Y_Korean_01");
						case 6:
							return joaat("G_M_Y_Korean_01");
						case 7:
							return joaat("G_M_Y_Korean_01");
						case 8:
							return joaat("G_M_Y_Korean_01");
						default:
					}
					break;
				case 4:
					switch (bParam0)
					{
						case 0:
							return joaat("G_M_Y_Korean_01");
						case 1:
							return joaat("G_M_Y_Korean_01");
						case 2:
							return joaat("G_M_Y_Korean_01");
						case 3:
							return joaat("G_M_Y_Korean_01");
						case 4:
							return joaat("G_M_Y_Korean_01");
						case 5:
							return joaat("G_M_Y_Korean_01");
						case 6:
							return joaat("G_M_Y_Korean_01");
						case 7:
							return joaat("G_M_Y_Korean_01");
						case 8:
							return joaat("G_M_Y_Korean_01");
						default:
					}
					break;
			}
			break;
		case 5:
		case 6:
			return Local_157.f_546;
			break;
		case 11:
			return joaat("S_M_Y_BlackOps_01");
			break;
	}
	return joaat("G_M_M_ArmGoon_01");
}

int func_210()//Position - 0x1112C
{
	switch (func_10())
	{
		case 13:
			return 9;
		case 12:
			return 4;
		case 5:
			return 4;
		case 9:
			return 10;
		case 11:
			return 12;
		case 6:
			switch (SYSTEM::ROUND(Local_157.f_544))
			{
				case 0:
				case 1:
				case 2:
					return 4;
				case 3:
				case 4:
					return 6;
				case 5:
				case 6:
					return 8;
				default:
			}
			break;
	}
	return 0;
}

int func_211()//Position - 0x111C2
{
	switch (func_10())
	{
		case 13:
		case 9:
			return 1;
		default:
	}
	return 0;
}

int func_212()//Position - 0x111E4
{
	if (((((func_10() == 13 || func_10() == 12) || func_10() == 5) || func_10() == 9) || func_10() == 11) || func_10() == 6)
	{
		return 1;
	}
	return 0;
}

int func_213()//Position - 0x1123A
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < func_276())
	{
		if (func_214(iVar0))
		{
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < func_276())
	{
		if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_42[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_214(int iParam0)//Position - 0x1128B
{
	struct<3> Var0;
	float fVar1;
	if (func_272())
	{
		if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_42[iParam0]))
		{
			if (__LIB_0__::func_799(func_271(iParam0)))
			{
				Var0 = { func_270(iParam0) };
				fVar1 = func_268(iParam0);
				if (NETWORK::CAN_REGISTER_MISSION_PEDS(__LIB_30__::func_458(168, -1, -1, -1) + 1))
				{
					if (func_217())
					{
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_39[0]))
						{
							if (__LIB_0__::func_930(&(Local_157.f_42[iParam0]), Local_157.f_39[0], 26, func_271(iParam0), func_216(iParam0), 1, 1, 1))
							{
								ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_PED(Local_157.f_42[iParam0]), true);
								ENTITY::SET_ENTITY_CAN_BE_DAMAGED(NETWORK::NET_TO_PED(Local_157.f_42[iParam0]), false);
								PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_157.f_42[iParam0]), 3, false);
								PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_157.f_42[iParam0]), 229, true);
								PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_157.f_42[iParam0]), 128, false);
								PED::SET_PED_CAN_BE_DRAGGED_OUT(NETWORK::NET_TO_PED(Local_157.f_42[iParam0]), false);
								PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_157.f_42[iParam0]), 398, true);
								PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(NETWORK::NET_TO_PED(Local_157.f_42[iParam0]), 1);
								PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_157.f_42[iParam0]), 512, true);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_157.f_42[iParam0]), Global_1837194);
								PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_157.f_42[iParam0]), true);
								AUDIO::STOP_PED_SPEAKING(NETWORK::NET_TO_PED(Local_157.f_42[iParam0]), true);
								TASK::TASK_STAND_STILL(NETWORK::NET_TO_PED(Local_157.f_42[iParam0]), -1);
								if (func_215())
								{
									PED::SET_TREAT_AS_AMBIENT_PED_FOR_DRIVER_LOCKON(NETWORK::NET_TO_PED(Local_157.f_42[iParam0]), true);
								}
							}
						}
					}
					else if (__LIB_1__::func_672(&(Local_157.f_42[iParam0]), 26, func_271(iParam0), Var0, fVar1, 1, 1, 1))
					{
						ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_PED(Local_157.f_42[iParam0]), true);
						ENTITY::SET_ENTITY_CAN_BE_DAMAGED(NETWORK::NET_TO_PED(Local_157.f_42[iParam0]), false);
						PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_157.f_42[iParam0]), true);
						AUDIO::STOP_PED_SPEAKING(NETWORK::NET_TO_PED(Local_157.f_42[iParam0]), true);
					}
				}
			}
		}
		else
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_215()//Position - 0x114A7
{
	return func_10() == 12;
}

int func_216(int iParam0)//Position - 0x114B6
{
	if (iParam0 == 1)
	{
		return 0;
	}
	return -1;
}

int func_217()//Position - 0x114C9
{
	if (func_218())
	{
		return 0;
	}
	return 1;
}

bool func_218()//Position - 0x114DD
{
	return func_10() == 9;
}

float func_268(int iParam0)//Position - 0x13732
{
	if (func_269())
	{
		switch (iParam0)
		{
			case 0:
				switch (Local_157.f_394[0])
				{
					case 0:
						return 138.3995f;
					case 1:
						return 143.5995f;
					case 2:
						return 72.3994f;
					case 3:
						return 133.7989f;
					case 4:
						return 242.1995f;
					default:
				}
				break;
			case 1:
				switch (Local_157.f_394[0])
				{
					case 0:
						return 138.3995f;
					case 1:
						return 143.5995f;
					case 2:
						return 72.3994f;
					case 3:
						return 133.7989f;
					case 4:
						return 242.1995f;
					default:
				}
				break;
			}
	}
	if (func_215())
	{
		switch (iParam0)
		{
			case 0:
				switch (Local_157.f_394[0])
				{
					case 0:
						return 29.2012f;
					case 1:
						return 293.3999f;
					case 2:
						return 144.6493f;
					case 3:
						return 305.7995f;
					case 4:
						return 265.1998f;
					default:
				}
				break;
			case 1:
				switch (Local_157.f_394[0])
				{
					case 0:
						return 29.2012f;
					case 1:
						return 293.3999f;
					case 2:
						return 144.6493f;
					case 3:
						return 305.7995f;
					case 4:
						return 265.1998f;
					default:
				}
				break;
			}
	}
	return 124.5999f;
}

bool func_269()//Position - 0x138CF
{
	return func_10() == 13;
}

Vector3 func_270(int iParam0)//Position - 0x138DE
{
	if (func_269())
	{
		switch (iParam0)
		{
			case 0:
				switch (Local_157.f_394[0])
				{
					case 0:
						return 1158.1238f, -4352.0537f, 0.2f;
					case 1:
						return 2568.467f, -3494.8367f, 0.2f;
					case 2:
						return -2046.0038f, -4112.6865f, 0.2f;
					case 3:
						return -2804.8018f, -2614.1204f, 0.2f;
					case 4:
						return -414.3029f, -4404.976f, 0.2f;
					default:
				}
				break;
			case 1:
				switch (Local_157.f_394[0])
				{
					case 0:
						return 1157.0403f, -4351.059f, 0.2f;
					case 1:
						return 2567.951f, -3493.595f, 0.2f;
					case 2:
						return -2045.2574f, -4111.6846f, 0.2f;
					case 3:
						return -2804.3555f, -2612.1577f, 0.2f;
					case 4:
						return -412.17f, -4408.4014f, 0.2f;
					default:
				}
				break;
			}
	}
	if (func_215())
	{
		switch (iParam0)
		{
			case 0:
				switch (Local_157.f_394[0])
				{
					case 0:
						return -3017.0398f, -1744.7336f, 0.2f;
					case 1:
						return 362.1313f, -4237.417f, 0.2f;
					case 2:
						return -1186.6818f, -4125.632f, 0.2f;
					case 3:
						return 3186.5198f, -3343.6548f, 0.2f;
					case 4:
						return 2227.898f, -4272.7285f, 0.2f;
					default:
				}
				break;
			case 1:
				switch (Local_157.f_394[0])
				{
					case 0:
						return -3016.5283f, -1745.6162f, 0.2f;
					case 1:
						return 362.1313f, -4237.417f, 0.2f;
					case 2:
						return -1187.4934f, -4126.5317f, 0.2f;
					case 3:
						return 3186.2688f, -3345.1545f, 0.2f;
					case 4:
						return 2228.6106f, -4273.8384f, 0.2f;
					default:
				}
				break;
			}
	}
	return 1678.6343f, 2307.834f, 74.3844f;
}

int func_271(int iParam0)//Position - 0x13B4D
{
	switch (func_10())
	{
		case 12:
		case 13:
			if (iParam0 == 0)
			{
				return joaat("A_M_Y_Beach_03");
			}
			else
			{
				return joaat("A_M_Y_BusiCas_01");
			}
			break;
		case 9:
			switch (Local_157.f_384)
			{
				case 0:
					if (iParam0 == 6)
					{
						return joaat("G_F_Y_Lost_01");
					}
					return joaat("G_M_Y_Lost_01");
				case 1:
					return joaat("G_M_Y_Azteca_01");
				case 2:
					return joaat("G_M_Y_Lost_01");
				case 3:
					return joaat("G_M_M_ChiGoon_02");
				case 4:
					return joaat("G_M_Y_Lost_01");
				default:
			}
			break;
	}
	return joaat("G_M_Y_StrPunk_01");
}

int func_272()//Position - 0x13BF3
{
	if (func_274() || func_273())
	{
		return 1;
	}
	return 0;
}

bool func_273()//Position - 0x13C11
{
	return func_10() == 8;
}

bool func_274()//Position - 0x13C20
{
	return func_275(func_10());
}

int func_275(int iParam0)//Position - 0x13C30
{
	if (iParam0 == 12 || iParam0 == 13)
	{
		return 1;
	}
	return 0;
}

int func_276()//Position - 0x13C50
{
	switch (func_10())
	{
		case 13:
			return 2;
		case 12:
			return 2;
		default:
	}
	return 0;
}

int func_277()//Position - 0x13C76
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	int* iVar3;
	int iVar4;
	int iVar5;
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		Var0 = { __LIB_13__::func_512(Local_157.f_54) };
	}
	if (!func_343())
	{
		func_34(2);
		return 1;
	}
	if (!func_37(2))
	{
		if (func_343() || func_342(Var0, &Var1, &fVar2, &iVar3, 1, 1, 1))
		{
			iVar4 = 0;
			while (iVar4 < func_341())
			{
				if (__LIB_0__::func_799(func_340(iVar4)) && !NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_39[iVar4]))
				{
					if (func_343())
					{
						Var1 = { func_339(iVar4) };
						fVar2 = func_336(iVar4);
					}
					if (NETWORK::CAN_REGISTER_MISSION_VEHICLES(__LIB_41__::func_940(168, -1, 1, -1, -1, -1) + 1))
					{
						if (__LIB_0__::func_957(&(Local_157.f_39[iVar4]), func_340(iVar4), Var1, fVar2, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
						{
							if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
							{
								if (DECORATOR::DECOR_EXIST_ON(NETWORK::NET_TO_ENT(Local_157.f_39[iVar4]), "MPBitset"))
								{
									iVar5 = DECORATOR::DECOR_GET_INT(NETWORK::NET_TO_ENT(Local_157.f_39[iVar4]), "MPBitset");
								}
								MISC::SET_BIT(&iVar5, 10);
								MISC::SET_BIT(&iVar5, 11);
								DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_ENT(Local_157.f_39[iVar4]), "MPBitset", iVar5);
							}
							if (func_274())
							{
								VEHICLE::SET_BOAT_ANCHOR(NETWORK::NET_TO_VEH(Local_157.f_39[iVar4]), true);
							}
							VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON_SYNCED(NETWORK::NET_TO_VEH(Local_157.f_39[iVar4]), false, false);
							VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(NETWORK::NET_TO_ENT(Local_157.f_39[iVar4]), false, 0);
							ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_ENT(Local_157.f_39[iVar4]), true);
							VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(NETWORK::NET_TO_VEH(Local_157.f_39[iVar4]), false);
							ENTITY::SET_ENTITY_CAN_BE_DAMAGED(NETWORK::NET_TO_ENT(Local_157.f_39[iVar4]), false);
							VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_NON_SCRIPT_PLAYERS(NETWORK::NET_TO_VEH(Local_157.f_39[iVar4]), true);
							VEHICLE::SET_DONT_ALLOW_PLAYER_TO_ENTER_VEHICLE_IF_LOCKED_FOR_PLAYER(NETWORK::NET_TO_VEH(Local_157.f_39[iVar4]), true);
							VEHICLE::SET_VEHICLE_CAN_BE_USED_BY_FLEEING_PEDS(NETWORK::NET_TO_VEH(Local_157.f_39[iVar4]), false);
							__LIB_1__::func_477(NETWORK::NET_TO_VEH(Local_157.f_39[iVar4]));
						}
					}
				}
				iVar4++;
			}
			iVar4 = 0;
			while (iVar4 < func_341())
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_39[iVar4]))
				{
					func_34(2);
				}
				iVar4++;
			}
		}
	}
	return func_37(2);
}

float func_336(int iParam0)//Position - 0x17171
{
	if (func_218())
	{
		switch (Local_157.f_384)
		{
			case 0:
				if (iParam0 == 0)
				{
					return 126f;
				}
				return 261.598f;
			case 1:
				if (iParam0 == 0)
				{
					return 73.595f;
				}
				return 210.799f;
			case 2:
				if (iParam0 == 0)
				{
					return 0f;
				}
				return 34.2f;
			case 3:
				if (iParam0 == 0)
				{
					return 133.398f;
				}
				return 341.5993f;
			case 4:
				if (iParam0 == 0)
				{
					return 270.399f;
				}
				return 133.6f;
			}
		default:
	}
	if (func_337())
	{
		return 100.5717f;
	}
	if (func_215())
	{
		switch (Local_157.f_384)
		{
			case 0:
				return 5.6f;
			case 1:
				return 293.3999f;
			case 2:
				return 144.6493f;
			case 3:
				return 305.7995f;
			case 4:
				return 265.1998f;
			}
		default:
	}
	if (func_269())
	{
		switch (Local_157.f_384)
		{
			case 0:
				return 1.2f;
			case 1:
				return 46.2f;
			case 2:
				return 273.199f;
			case 3:
				return 64.2f;
			case 4:
				return 2f;
			}
		default:
	}
	return 114.2482f;
}

bool func_337()//Position - 0x172D3
{
	return func_338(func_10());
}

int func_338(int iParam0)//Position - 0x172E3
{
	if ((((iParam0 == 8 || iParam0 == 7) || iParam0 == 9) || iParam0 == 10) || iParam0 == 11)
	{
		return 1;
	}
	return 0;
}

Vector3 func_339(int iParam0)//Position - 0x17323
{
	switch (func_10())
	{
		case 12:
			switch (Local_157.f_384)
			{
				case 0:
					return -3018.0164f, -1737.7306f, 1.125f;
				case 1:
					return 369.5443f, -4234.714f, 0f;
				case 2:
					return -1190.6208f, -4129.769f, 0f;
				case 3:
					return 3191.5322f, -3339.9143f, 0.75f;
				case 4:
					return 2233.9746f, -4274.4873f, 0f;
				default:
			}
			break;
		case 13:
			switch (Local_157.f_384)
			{
				case 0:
					return 1154.318f, -4355.9707f, 0f;
				case 1:
					return 2564.0803f, -3499.0095f, -0.1876f;
				case 2:
					return -2051.9802f, -4110.346f, 0f;
				case 3:
					return -2808.9983f, -2617.1938f, 0.9375f;
				case 4:
					return -407.7797f, -4408.372f, 0f;
				default:
			}
			break;
		case 9:
			switch (Local_157.f_384)
			{
				case 0:
					if (iParam0 == 0)
					{
						return 1704.879f, 3286.602f, 40.148f;
					}
					return 1689.943f, 3276.071f, 40.045f;
				case 1:
					if (iParam0 == 0)
					{
						return -25.427f, 3043.566f, 40.003f;
					}
					return -0.217f, 3046.414f, 39.661f;
				case 2:
					if (iParam0 == 0)
					{
						return -2095.5056f, 2637.109f, 1.9348f;
					}
					return -2117.1658f, 2616.247f, 0.0221f;
				case 3:
					if (iParam0 == 0)
					{
						return 212.767f, 2467.536f, 54.686f;
					}
					return 223.4591f, 2448.032f, 56.2378f;
				case 4:
					if (iParam0 == 0)
					{
						return 2121.68f, 2889.23f, 46.279f;
					}
					return 2110.948f, 2907.49f, 46.652f;
				default:
			}
			break;
	}
	return -1193.2894f, -2245.7986f, 12.9446f;
}

int func_340(int iParam0)//Position - 0x17547
{
	switch (func_10())
	{
		case 12:
		case 13:
			return joaat("marquis");
		case 9:
			switch (Local_157.f_384)
			{
				case 0:
					if (iParam0 == 0)
					{
						return joaat("gburrito");
					}
					return joaat("daemon");
				case 1:
					if (iParam0 == 0)
					{
						return joaat("sadler");
					}
					return joaat("phoenix");
				case 2:
					return joaat("gburrito");
				case 3:
					return joaat("bison");
				case 4:
					return joaat("gburrito");
				default:
			}
			break;
	}
	return joaat("marquis");
}

int func_341()//Position - 0x175E7
{
	switch (func_10())
	{
		case 12:
			return 1;
		case 13:
			return 1;
		case 9:
			return 2;
		default:
	}
	return 0;
}

int func_342(struct<3> Param0, var* uParam1, float* fParam2, int* iParam3, int iParam4, int iParam5, bool bParam6)//Position - 0x17617
{
	int iVar0;
	while (true)
	{
		if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(Param0, iParam4, uParam1, fParam2, iParam3, 1, 3f, 0f))
		{
			if (__LIB_41__::func_947(*uParam1, 10f, 1f, 1f, 5f, iParam5, bParam6, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
			{
				return 1;
			}
		}
		iParam4++;
		iVar0++;
		if (iVar0 > 75)
		{
			*uParam1 = { Param0 };
			return 0;
		}
	}
	return 0;
}

int func_343()//Position - 0x17689
{
	if (func_274())
	{
		return 1;
	}
	if (func_218())
	{
		return 1;
	}
	return 0;
}

int func_344()//Position - 0x176A8
{
	bool bVar0;
	if (func_37(1))
	{
		return 1;
	}
	bVar0 = false;
	while (bVar0 < func_21())
	{
		if (func_349(bVar0))
		{
		}
		bVar0++;
	}
	bVar0 = false;
	while (bVar0 < func_21())
	{
		if (!ENTITY::DOES_ENTITY_EXIST(func_40(bVar0)))
		{
			return 0;
		}
		bVar0++;
	}
	if (func_337())
	{
		if (func_348() == 2)
		{
			func_345();
			if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_53))
			{
				return 0;
			}
		}
	}
	func_34(1);
	return 1;
}

int func_345()//Position - 0x1772C
{
	struct<3> Var0;
	float fVar1;
	int iVar2;
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_53))
	{
		if (__LIB_0__::func_799(joaat("buzzard")))
		{
			Var0 = { func_347() };
			fVar1 = func_346();
			if (__LIB_0__::func_957(&(Local_157.f_53), joaat("buzzard"), Var0, fVar1, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
			{
				NETWORK::NETWORK_FADE_IN_ENTITY(NETWORK::NET_TO_VEH(Local_157.f_53), true, 1);
				if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
				{
					if (DECORATOR::DECOR_EXIST_ON(NETWORK::NET_TO_VEH(Local_157.f_53), "MPBitset"))
					{
						iVar2 = DECORATOR::DECOR_GET_INT(NETWORK::NET_TO_VEH(Local_157.f_53), "MPBitset");
					}
					MISC::SET_BIT(&iVar2, 10);
					MISC::SET_BIT(&iVar2, 11);
					DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(Local_157.f_53), "MPBitset", iVar2);
				}
				VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(NETWORK::NET_TO_VEH(Local_157.f_53), false, 0);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_NON_SCRIPT_PLAYERS(NETWORK::NET_TO_VEH(Local_157.f_53), true);
				VEHICLE::SET_DONT_ALLOW_PLAYER_TO_ENTER_VEHICLE_IF_LOCKED_FOR_PLAYER(NETWORK::NET_TO_VEH(Local_157.f_53), true);
				VEHICLE::SET_VEHICLE_CAN_BE_USED_BY_FLEEING_PEDS(NETWORK::NET_TO_VEH(Local_157.f_53), false);
			}
		}
	}
	return 0;
}

float func_346()//Position - 0x17815
{
	switch (Local_157.f_394[0])
	{
		case 0:
			return 291.9019f;
		case 1:
			return 38.8973f;
		case 2:
			return 170.3048f;
		case 3:
			return 104.1791f;
		case 4:
			return 6.7766f;
		case 5:
			return 290.7564f;
		case 6:
			return 81.0553f;
		case 7:
			return 210.7148f;
		case 8:
			return 48.5395f;
		case 9:
			return 172.8551f;
		case 10:
			return 227.376f;
		case 11:
			return 109.6783f;
		default:
	}
	return 0f;
}

Vector3 func_347()//Position - 0x178D4
{
	switch (Local_157.f_394[0])
	{
		case 0:
			return -1249.7516f, -2863.0928f, 12.9449f;
		case 1:
			return -1365.3953f, -2587.993f, 12.9449f;
		case 2:
			return -924.1804f, -3067.145f, 12.9444f;
		case 3:
			return -975.8615f, -3410.3418f, 12.8401f;
		case 4:
			return -1819.1344f, -3186.5674f, 12.9444f;
		case 5:
			return -1902.0475f, -3139.1025f, 12.9444f;
		case 6:
			return -1163.0656f, -2256.7888f, 12.9446f;
		case 7:
			return -1694.2175f, -2741.422f, 14.2526f;
		case 8:
			return -999.9483f, -2950.592f, 12.9545f;
		case 9:
			return -1115.8962f, -2946.971f, 12.9451f;
		case 10:
			return -1299.2378f, -2136.7107f, 12.9248f;
		case 11:
			return -1266.9119f, -2471.3618f, 12.9452f;
		default:
	}
	return 0f, 0f, 0f;
}

int func_348()//Position - 0x17A0D
{
	return Local_157.f_582;
}

int func_349(bool bParam0)//Position - 0x17A1B
{
	struct<31> Var0;
	struct<3> Var1;
	int iVar2;
	bool bVar3;
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_35[bParam0]))
	{
		if (func_365(bParam0, &(Local_157.f_25), &(Local_157.f_28)))
		{
			if (func_274())
			{
				Local_157.f_10[bParam0 /*3*/] = { Local_157.f_25 };
				Local_157.f_20[bParam0] = Local_157.f_28;
				MISC::SET_BIT(&(Local_157.f_24), bParam0);
			}
			else if (!__LIB_0__::func_78(Local_157.f_10[bParam0 /*3*/], 0f, 0f, 0f, 0))
			{
				if (bParam0 == 0 || (bParam0 > 0 && BitTest(Local_157.f_24, (bParam0 - 1))))
				{
					if (!BitTest(Local_157.f_24, bParam0))
					{
						if (__LIB_0__::func_799(func_364()))
						{
							Var0.f_4 = 1125515264;
							Var0.f_5 = 1;
							Var0.f_6 = 1;
							Var0.f_8 = 1082130432;
							Var0.f_9 = 1176255488;
							Var0.f_10 = 1;
							Var0.f_13 = 1;
							Var0.f_15 = 2;
							Var0.f_22 = 2;
							Var0.f_25 = 1;
							Var0.f_26 = 1;
							Var0.f_29 = 1123024896;
							Var0.f_30 = 1;
							Var0.f_0 = 0f;
							Var0.f_1 = 0;
							Var0.f_4 = 200f;
							Var0.f_5 = 0;
							if (!func_337())
							{
								Var0.f_6 = 1;
							}
							else
							{
								Var0.f_6 = 0;
							}
							Var0.f_12 = 1;
							Var0.f_3 = 1;
							Var1 = { __LIB_30__::func_419(Local_157.f_25, Local_157.f_28, 20f) };
							if (func_45(Local_157.f_25, Var1, func_364(), 0, &(Local_157.f_10[bParam0 /*3*/]), &(Local_157.f_20[bParam0]), &Var0))
							{
								MISC::SET_BIT(&(Local_157.f_24), bParam0);
							}
						}
					}
				}
			}
		}
		if (__LIB_0__::func_799(func_364()))
		{
			if (NETWORK::CAN_REGISTER_MISSION_VEHICLES(__LIB_41__::func_940(168, -1, 1, -1, -1, -1)))
			{
				if (BitTest(Local_157.f_24, bParam0))
				{
					if (__LIB_0__::func_957(&(Local_157.f_35[bParam0]), func_364(), Local_157.f_10[bParam0 /*3*/], Local_157.f_20[bParam0], 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
					{
						NETWORK::NETWORK_FADE_IN_ENTITY(NETWORK::NET_TO_VEH(Local_157.f_35[bParam0]), true, 1);
						MISC::CLEAR_AREA_OF_VEHICLES(Local_157.f_10[bParam0 /*3*/], 20f, false, false, false, false, false, false, 0);
						if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
						{
							if (DECORATOR::DECOR_EXIST_ON(func_40(bParam0), "MPBitset"))
							{
								iVar2 = DECORATOR::DECOR_GET_INT(func_40(bParam0), "MPBitset");
							}
							MISC::SET_BIT(&iVar2, 10);
							MISC::SET_BIT(&iVar2, 11);
							DECORATOR::DECOR_SET_INT(func_40(bParam0), "MPBitset", iVar2);
						}
						if (!func_6())
						{
							__LIB_35__::func_482(func_40(bParam0), bParam0, -1292453789, 0, 0);
						}
						if (func_274())
						{
							VEHICLE::SET_BOAT_SINKS_WHEN_WRECKED(func_40(bParam0), true);
							VEHICLE::SET_BOAT_ANCHOR(func_40(bParam0), true);
							ENTITY::SET_ENTITY_MAX_HEALTH(func_40(bParam0), Global_262145.f_15628 /* Tunable: EXEC_SELL_TUG_HEALTH */);
							ENTITY::SET_ENTITY_HEALTH(func_40(bParam0), Global_262145.f_15628 /* Tunable: EXEC_SELL_TUG_HEALTH */, 0);
							VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(func_40(bParam0), false);
							VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(func_40(bParam0), false);
							VEHICLE::SET_DISABLE_VEHICLE_PETROL_TANK_FIRES(func_40(bParam0), true);
							if (func_358())
							{
								VEHICLE::MODIFY_VEHICLE_TOP_SPEED(func_40(bParam0), func_357());
							}
							else if (func_215())
							{
								VEHICLE::MODIFY_VEHICLE_TOP_SPEED(func_40(bParam0), Global_262145.f_15638 /* Tunable: EXEC1_SELL_SEATTACKED_TUG_SPEED */);
							}
							else if (func_269())
							{
								VEHICLE::MODIFY_VEHICLE_TOP_SPEED(func_40(bParam0), Global_262145.f_15639 /* Tunable: EXEC_SELL_SEADEFEND_TUG_SPEED */);
							}
						}
						else if (func_337())
						{
							if (func_364() == joaat("cuban800"))
							{
								VEHICLE::SET_VEHICLE_COLOURS(func_40(bParam0), 132, 64);
								VEHICLE::SET_VEHICLE_EXTRA_COLOURS(func_40(bParam0), 111, 156);
							}
							else
							{
								VEHICLE::SET_VEHICLE_COLOURS(func_40(bParam0), 7, 7);
								VEHICLE::SET_VEHICLE_EXTRA_COLOURS(func_40(bParam0), 7, 7);
							}
							ENTITY::SET_ENTITY_MAX_HEALTH(func_40(bParam0), Global_262145.f_15623 /* Tunable: EXEC_SELL_PLANE_HEALTH */);
							ENTITY::SET_ENTITY_HEALTH(func_40(bParam0), Global_262145.f_15623 /* Tunable: EXEC_SELL_PLANE_HEALTH */, 0);
							VEHICLE::SET_VEHICLE_CAN_BREAK(func_40(bParam0), false);
							bVar3 = func_356();
							Local_157.f_385 = func_355(bVar3);
							Local_157.f_386 = func_354(bVar3);
							Local_157.f_387 = func_353(bVar3);
						}
						else
						{
							VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(func_40(bParam0), SYSTEM::TO_FLOAT(Global_262145.f_15627 /* Tunable: EXEC_SELL_BRICKADE_HEALTH */));
							VEHICLE::SET_VEHICLE_BODY_HEALTH(func_40(bParam0), SYSTEM::TO_FLOAT(Global_262145.f_15627 /* Tunable: EXEC_SELL_BRICKADE_HEALTH */));
							VEHICLE::SET_VEHICLE_ENGINE_HEALTH(func_40(bParam0), SYSTEM::TO_FLOAT(Global_262145.f_15627 /* Tunable: EXEC_SELL_BRICKADE_HEALTH */));
							VEHICLE::SET_VEHICLE_COLOURS(func_40(bParam0), 17, 12);
							VEHICLE::SET_VEHICLE_EXTRA_COLOURS(func_40(bParam0), 1, 156);
							if (func_352())
							{
								VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(func_40(bParam0), false);
							}
						}
						VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(func_40(bParam0), false, 0);
						VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_NON_SCRIPT_PLAYERS(func_40(bParam0), true);
						VEHICLE::SET_DONT_ALLOW_PLAYER_TO_ENTER_VEHICLE_IF_LOCKED_FOR_PLAYER(func_40(bParam0), true);
						VEHICLE::SET_VEHICLE_CAN_BE_USED_BY_FLEEING_PEDS(func_40(bParam0), false);
						VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(func_40(bParam0), false);
						if (!func_337())
						{
							VEHICLE::SET_VEHICLE_STRONG(func_40(bParam0), true);
						}
						VEHICLE::SET_VEHICLE_USES_MP_PLAYER_DAMAGE_MULTIPLIER(func_40(bParam0), 0);
						if (func_350())
						{
							VEHICLE::SET_VEHICLE_DAMAGE_SCALE(func_40(bParam0), 0.08f);
						}
						else
						{
							VEHICLE::SET_VEHICLE_DAMAGE_SCALE(func_40(bParam0), 0.2f);
						}
						ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_VEH(Local_157.f_35[bParam0]), true);
						__LIB_1__::func_477(func_40(bParam0));
						Local_157.f_25 = { 0f, 0f, 0f };
						Local_157.f_29 = 0;
						return 1;
					}
				}
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_350()//Position - 0x17F0E
{
	var uVar0;
	var uVar1;
	var uVar2;
	if (func_274())
	{
		if (Global_262145.f_15812 /* Tunable: EXEC_UPGRADES_DISABLE_BOAT_ARMOR */)
		{
			return 0;
		}
		uVar0 = __LIB_35__::func_473();
		if (BitTest(uVar0, 0))
		{
			return 1;
		}
	}
	else if (func_337())
	{
		if (Global_262145.f_15810 /* Tunable: EXEC_UPGRADES_DISABLE_PLANE_ARMOR */)
		{
			return 0;
		}
		uVar1 = __LIB_35__::func_473();
		if (BitTest(uVar1, 2))
		{
			return 1;
		}
	}
	else
	{
		if (Global_262145.f_15811 /* Tunable: EXEC_UPGRADES_DISABLE_TRUCK_ARMOR */)
		{
			return 0;
		}
		uVar2 = __LIB_35__::func_473();
		if (BitTest(uVar2, 4))
		{
			return 1;
		}
	}
	return 0;
}

int func_352()//Position - 0x17F9A
{
	var uVar0;
	if (Global_262145.f_15814 /* Tunable: EXEC_UPGRADES_DISABLE_TRUCK_TIRES */)
	{
		return 0;
	}
	if (!func_337() && !func_274())
	{
		uVar0 = __LIB_35__::func_473();
		if (BitTest(uVar0, 5))
		{
			return 1;
		}
	}
	return 0;
}

var func_353(bool bParam0)//Position - 0x17FD4
{
	if (bParam0)
	{
		return Global_262145.f_15643 /* Tunable: EXEC_UPGRADES_PLANE_JAMMER_RECHARGE_TIME */;
	}
	return Global_262145.f_15625 /* Tunable: EXEC_SELL_JAMMER_RECHARGE */;
}

var func_354(bool bParam0)//Position - 0x17FF2
{
	if (bParam0)
	{
		return Global_262145.f_15644 /* Tunable: EXEC_UPGRADES_PLANE_JAMMER_RECHARGE_DELAY */;
	}
	return Global_262145.f_15626 /* Tunable: EXEC_SELL_JAMMER_DELAY */;
}

var func_355(bool bParam0)//Position - 0x18014
{
	if (bParam0)
	{
		return Global_262145.f_15642 /* Tunable: EXEC_UPGRADES_PLANE_JAMMER_DURATION */;
	}
	return Global_262145.f_15624 /* Tunable: EXEC_SELL_JAMMER_DURATION */;
}

int func_356()//Position - 0x18032
{
	var uVar0;
	if (Global_262145.f_15813 /* Tunable: EXEC_UPGRADES_DISABLE_PLANE_JAMMER */)
	{
		return 0;
	}
	if (func_337())
	{
		uVar0 = __LIB_35__::func_473();
		if (BitTest(uVar0, 3))
		{
			return 1;
		}
	}
	return 0;
}

float func_357()//Position - 0x18061
{
	if (func_274())
	{
		return Global_262145.f_15641 /* Tunable: EXEC_UPGRADES_TUG_UPGRADE_SPEED */;
	}
	return 0f;
}

int func_358()//Position - 0x1807B
{
	var uVar0;
	if (Global_262145.f_15815 /* Tunable: EXEC_UPGRADES_DISABLE_BOAT_SPEED */)
	{
		return 0;
	}
	if (func_274())
	{
		uVar0 = __LIB_35__::func_473();
		if (BitTest(uVar0, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_364()//Position - 0x18208
{
	if (func_337())
	{
		switch (func_348())
		{
			case 0:
			case 1:
			case 7:
				return joaat("cuban800");
			case 2:
				return joaat("titan");
			}
		default:
	}
	if (func_274())
	{
		return joaat("tug");
	}
	return joaat("brickade");
}

int func_365(int iParam0, var uParam1, var uParam2)//Position - 0x1825C
{
	struct<31> Var0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	bool bVar4;
	if (func_35())
	{
		if (iParam0 == 0 || (iParam0 > 0 && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_35[(iParam0 - 1)])))
		{
			if (!__LIB_0__::func_86(*uParam1))
			{
				return 1;
			}
			Var0.f_4 = 1125515264;
			Var0.f_5 = 1;
			Var0.f_6 = 1;
			Var0.f_8 = 1082130432;
			Var0.f_9 = 1176255488;
			Var0.f_10 = 1;
			Var0.f_13 = 1;
			Var0.f_15 = 2;
			Var0.f_22 = 2;
			Var0.f_25 = 1;
			Var0.f_26 = 1;
			Var0.f_29 = 1123024896;
			Var0.f_30 = 1;
			Var0.f_0 = 0f;
			Var0.f_1 = 0;
			Var0.f_4 = 200f;
			Var0.f_6 = 1;
			Var0.f_5 = 0;
			Var0.f_12 = 1;
			Var0.f_3 = 1;
			Var2 = { func_371(iParam0, Local_157.f_29) };
			fVar3 = func_370(iParam0, Local_157.f_29);
			Var1 = { __LIB_30__::func_419(Var2, fVar3, 20f) };
			if (func_45(Var2, Var1, func_364(), 0, &Var2, &fVar3, &Var0))
			{
				*uParam1 = { Var2 };
				*uParam2 = fVar3;
				Local_157.f_10[iParam0 /*3*/] = { *uParam1 };
				Local_157.f_20[iParam0] = *uParam2;
				return 1;
			}
			else
			{
				if (Global_2667225.f_682 > 1)
				{
					if (Global_2667225.f_676 > 2)
					{
						bVar4 = true;
					}
				}
				if (!__LIB_0__::func_86(Global_2667225.f_683))
				{
					if (Global_2667225.f_676 > 2)
					{
						if (!__LIB_0__::func_78(Global_2667225.f_683, Var2, 0))
						{
							bVar4 = true;
						}
					}
				}
				if (bVar4)
				{
					Global_2667225.f_676 = 0;
					__LIB_0__::func_854();
					__LIB_0__::func_814();
					Local_157.f_29++;
					if (Local_157.f_29 > 2)
					{
						*uParam1 = { func_371(iParam0, 0) };
						*uParam2 = func_370(iParam0, 0);
						Local_157.f_10[iParam0 /*3*/] = { *uParam1 };
						Local_157.f_20[iParam0] = *uParam2;
						return 1;
					}
				}
			}
		}
	}
	else if (func_337())
	{
		*uParam1 = { func_369(iParam0) };
		*uParam2 = func_368(iParam0);
		return 1;
	}
	else
	{
		*uParam1 = { func_367() };
		*uParam2 = func_366();
		return 1;
	}
	return 0;
}

float func_366()//Position - 0x18485
{
	if (func_215())
	{
		switch (Local_157.f_394[0])
		{
			case 0:
				return 110.1267f;
			case 1:
				return 93.7369f;
			case 2:
				return 179.0316f;
			case 3:
				return 0.3224f;
			case 4:
				return 183.994f;
			}
		default:
	}
	if (func_269())
	{
		switch (Local_157.f_394[0])
		{
			case 0:
				return 175.892f;
			case 1:
				return 248.6986f;
			case 2:
				return 133.4317f;
			case 3:
				return 137.4506f;
			case 4:
				return 167.3423f;
			}
		default:
	}
	return 0f;
}

Vector3 func_367()//Position - 0x18544
{
	if (func_215())
	{
		switch (Local_157.f_394[0])
		{
			case 0:
				return -808.96f, -1507.2671f, 0f;
			case 1:
				return 87.946f, -2274.0327f, 0f;
			case 2:
				return 421.2115f, -2759.8538f, 0f;
			case 3:
				return 774.3229f, -2884.7217f, 0f;
			case 4:
				return 623.0291f, -3248.27f, 0f;
			}
		default:
	}
	if (func_269())
	{
		switch (Local_157.f_394[0])
		{
			case 0:
				return -114.8788f, -2777.618f, 0f;
			case 1:
				return 880.7318f, -2652.5876f, 0f;
			case 2:
				return -570.7896f, -2778.848f, 0f;
			case 3:
				return -720.5604f, -1347.1882f, 0f;
			case 4:
				return -485.6249f, -2277.072f, 0f;
			}
		default:
	}
	return 0f, 0f, 0f;
}

float func_368(int iParam0)//Position - 0x18641
{
	switch (Local_157.f_582)
	{
		case 0:
		case 1:
		case 7:
			switch (Local_157.f_394[iParam0])
			{
				case 0:
					return 103.3978f;
				case 1:
					return 125.9975f;
				case 2:
					return 91.5969f;
				case 3:
					return 132.3964f;
				case 4:
					return 191.7962f;
				case 5:
					return 15.1962f;
				case 6:
					return 290.1954f;
				case 7:
					return 100.995f;
				case 8:
					return 48.3939f;
				case 9:
					return 104.9941f;
				case 10:
					return 12.7939f;
				case 11:
					return 109.3935f;
				case 12:
					return 63.1932f;
				case 13:
					return 296.993f;
				case 14:
					return 130.9911f;
				case 15:
					return 306.3914f;
				case 16:
					return 9.3913f;
				case 17:
					return 307.7906f;
				case 18:
					return 305.589f;
				case 19:
					return 330.3874f;
				case 20:
					return 117.6098f;
				case 21:
					return 131.1266f;
				case 22:
					return 192.5231f;
				case 23:
					return 125.385f;
				case 24:
					return 195.3724f;
				case 25:
					return 86.6037f;
				case 26:
					return 317.811f;
				case 27:
					return 303.5216f;
				case 28:
					return 242.0844f;
				case 29:
					return 99.0054f;
				default:
			}
			break;
		case 2:
			switch (Local_157.f_394[iParam0])
			{
				case 0:
					return 329.1949f;
				case 1:
					return 60.5958f;
				case 2:
					return 107.7927f;
				case 3:
					return 61.1982f;
				case 4:
					return 330.5976f;
				case 5:
					return 330.5976f;
				case 6:
					return 109.1921f;
				case 7:
					return 213.3918f;
				case 8:
					return 114.7918f;
				case 9:
					return 195.191f;
				case 10:
					return 158.391f;
				case 11:
					return 87.1908f;
				default:
			}
			break;
	}
	return 0f;
}

Vector3 func_369(int iParam0)//Position - 0x188DD
{
	switch (Local_157.f_582)
	{
		case 0:
		case 1:
		case 7:
			switch (Local_157.f_394[iParam0])
			{
				case 0:
					return -968.1948f, -2889.6753f, 12.9599f;
				case 1:
					return -960.1045f, -3067.6252f, 12.9444f;
				case 2:
					return -1067.529f, -3154.7375f, 13.0472f;
				case 3:
					return -930.1005f, -3121.0369f, 12.9444f;
				case 4:
					return -1086.1022f, -2977.5989f, 12.9449f;
				case 5:
					return -1708.2968f, -2959.5718f, 12.9448f;
				case 6:
					return -1227.5731f, -2346.825f, 12.9451f;
				case 7:
					return -1101.4456f, -2400.557f, 12.9451f;
				case 8:
					return -1025.1583f, -2429.9004f, 12.9445f;
				case 9:
					return -979.2667f, -2373.1401f, 12.9445f;
				case 10:
					return -1070.736f, -2478.9067f, 12.9446f;
				case 11:
					return -1297.445f, -2437.8901f, 12.9451f;
				case 12:
					return -1291.2418f, -2303.7087f, 13.0883f;
				case 13:
					return -1097.9617f, -3434.0132f, 12.9451f;
				case 14:
					return -1114.1782f, -2966.9878f, 12.9448f;
				case 15:
					return -1730.1891f, -2946.0002f, 12.9443f;
				case 16:
					return -1677.4768f, -3094.124f, 12.9447f;
				case 17:
					return -1412.5236f, -3248.3083f, 12.9449f;
				case 18:
					return -1514.5017f, -3199.3088f, 12.9449f;
				case 19:
					return -1602.3079f, -3134.281f, 12.9449f;
				case 20:
					return -1275.2009f, -2842.465f, 12.9476f;
				case 21:
					return -1257.4706f, -2804.2083f, 12.9502f;
				case 22:
					return -1387.5234f, -2721.5176f, 12.9449f;
				case 23:
					return -1306.9133f, -2766.7585f, 12.9449f;
				case 24:
					return -1441.1241f, -2764.7546f, 12.9449f;
				case 25:
					return -1396.8431f, -2642.2615f, 12.9449f;
				case 26:
					return -1305.9344f, -3319.5706f, 12.945f;
				case 27:
					return -1180.561f, -3380.7502f, 12.945f;
				case 28:
					return -1749.9797f, -2842.7273f, 14.1329f;
				case 29:
					return -1503.618f, -2733.548f, 12.9449f;
				default:
			}
			break;
		case 2:
			switch (Local_157.f_394[iParam0])
			{
				case 0:
					return -1230.7406f, -2878.4736f, 12.9451f;
				case 1:
					return -1399.5396f, -2559.1582f, 12.9451f;
				case 2:
					return -939.5087f, -3095.1177f, 12.9444f;
				case 3:
					return -1003.699f, -3407.0466f, 12.8401f;
				case 4:
					return -1825.0035f, -3158.9858f, 12.9444f;
				case 5:
					return -1870.778f, -3132.809f, 12.9444f;
				case 6:
					return -1204.3452f, -2252.822f, 12.9445f;
				case 7:
					return -1710.9902f, -2776.27f, 14.1329f;
				case 8:
					return -1000.9476f, -2915.1384f, 12.9488f;
				case 9:
					return -1085.0864f, -2930.1663f, 12.9456f;
				case 10:
					return -1256.4573f, -2150.7021f, 12.9248f;
				case 11:
					return -1300.8739f, -2478.3508f, 12.9452f;
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_370(int iParam0, int iParam1)//Position - 0x18D1F
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					switch (Local_157.f_54)
					{
						case 1:
							return 208.6f;
						case 2:
							return 299.4024f;
						case 3:
							return 0.3993f;
						case 4:
							return 48f;
						case 5:
							return 0f;
						case 6:
							return 315.1989f;
						case 7:
							return 218.9982f;
						case 8:
							return 331.6f;
						case 9:
							return 86.546f;
						case 10:
							return 151.6492f;
						case 11:
							return 315.3995f;
						case 12:
							return 169.0126f;
						case 13:
							return 233.9757f;
						case 14:
							return 270.3038f;
						case 15:
							return 164.4331f;
						case 16:
							return 89.2575f;
						case 17:
							return 1.5266f;
						case 18:
							return 170.6689f;
						case 19:
							return 351.747f;
						case 20:
							return 285.2916f;
						case 21:
							return 306.6468f;
						case 22:
							return 269.4978f;
						default:
					}
					break;
				case 1:
					switch (Local_157.f_54)
					{
						case 1:
							return 270.0406f;
						case 2:
							return 29.429f;
						case 3:
							return 270.2136f;
						case 4:
							return 312.7653f;
						case 5:
							return 279.422f;
						case 6:
							return 44.2798f;
						case 7:
							return 126.2662f;
						case 8:
							return 59.3633f;
						case 9:
							return 44.3454f;
						case 10:
							return 255.4957f;
						case 11:
							return 316.404f;
						case 12:
							return 174.7817f;
						case 13:
							return 54.306f;
						case 14:
							return 180.0455f;
						case 15:
							return 344.4206f;
						case 16:
							return 89.1443f;
						case 17:
							return 91.5654f;
						case 18:
							return 355.3597f;
						case 19:
							return 267.6826f;
						case 20:
							return 354.9587f;
						case 21:
							return 124.9008f;
						case 22:
							return 270.1882f;
						default:
					}
					break;
				case 2:
					switch (Local_157.f_54)
					{
						case 1:
							return 241.2394f;
						case 2:
							return 30.5329f;
						case 3:
							return 268.7542f;
						case 4:
							return 235.685f;
						case 5:
							return 263.4533f;
						case 6:
							return 21.6045f;
						case 7:
							return 38.3122f;
						case 8:
							return 60.0909f;
						case 9:
							return 359.511f;
						case 10:
							return 14.6433f;
						case 11:
							return 315.3233f;
						case 12:
							return 172.1901f;
						case 13:
							return 320.4538f;
						case 14:
							return 179.2461f;
						case 15:
							return 250.3752f;
						case 16:
							return 0.2447f;
						case 17:
							return 261.7306f;
						case 18:
							return 52.3126f;
						case 19:
							return 267.7954f;
						case 20:
							return 89.242f;
						case 21:
							return 44.0817f;
						case 22:
							return 268.8879f;
						default:
					}
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					switch (Local_157.f_54)
					{
						case 1:
							return 209.6f;
						case 2:
							return 298.7994f;
						case 3:
							return 92.9994f;
						case 4:
							return 324.2342f;
						case 5:
							return 3.1991f;
						case 6:
							return 315.3998f;
						case 7:
							return 215.5996f;
						case 8:
							return 330f;
						case 9:
							return 89.5971f;
						case 10:
							return 169.649f;
						case 11:
							return 315.3995f;
						case 12:
							return 173.9054f;
						case 13:
							return 234.8527f;
						case 14:
							return 359.4676f;
						case 15:
							return 165.2123f;
						case 16:
							return 88.0328f;
						case 17:
							return 269.7469f;
						case 18:
							return 81.7539f;
						case 19:
							return 350.7536f;
						case 20:
							return 271.8376f;
						case 21:
							return 295.806f;
						case 22:
							return 268.5489f;
						default:
					}
					break;
				case 1:
					switch (Local_157.f_54)
					{
						case 1:
							return 266.5706f;
						case 2:
							return 34.6929f;
						case 3:
							return 270.4595f;
						case 4:
							return 314.1925f;
						case 5:
							return 262.1631f;
						case 6:
							return 44.2599f;
						case 7:
							return 129.1114f;
						case 8:
							return 59.3746f;
						case 9:
							return 90.6921f;
						case 10:
							return 239.9254f;
						case 11:
							return 314.6845f;
						case 12:
							return 175.8269f;
						case 13:
							return 54.2188f;
						case 14:
							return 179.6606f;
						case 15:
							return 341.9566f;
						case 16:
							return 90.6128f;
						case 17:
							return 89.2581f;
						case 18:
							return 355.3481f;
						case 19:
							return 266.7427f;
						case 20:
							return 356.4481f;
						case 21:
							return 136.6899f;
						case 22:
							return 270.2851f;
						default:
					}
					break;
				case 2:
					switch (Local_157.f_54)
					{
						case 1:
							return 245.33f;
						case 2:
							return 31.3559f;
						case 3:
							return 269.2654f;
						case 4:
							return 235.3301f;
						case 5:
							return 270.3575f;
						case 6:
							return 9.4474f;
						case 7:
							return 38.199f;
						case 8:
							return 60.6946f;
						case 9:
							return 359.8666f;
						case 10:
							return 8.8486f;
						case 11:
							return 322.7813f;
						case 12:
							return 171.8957f;
						case 13:
							return 313.731f;
						case 14:
							return 179.9229f;
						case 15:
							return 248.6389f;
						case 16:
							return 358.9486f;
						case 17:
							return 269.3399f;
						case 18:
							return 51.0447f;
						case 19:
							return 266.7723f;
						case 20:
							return 89.7738f;
						case 21:
							return 25.4218f;
						case 22:
							return 269.0639f;
						default:
					}
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					switch (Local_157.f_54)
					{
						case 1:
							return 209.1995f;
						case 2:
							return 302.7997f;
						case 3:
							return 92.9994f;
						case 4:
							return 325.1249f;
						case 5:
							return 357.3996f;
						case 6:
							return 135.1994f;
						case 7:
							return 308.5542f;
						case 8:
							return 330f;
						case 9:
							return 88.5975f;
						case 10:
							return 200.4493f;
						case 11:
							return 315.3995f;
						case 12:
							return 83.0145f;
						case 13:
							return 245.6889f;
						case 14:
							return 359.5525f;
						case 15:
							return 250.3085f;
						case 16:
							return 180.3578f;
						case 17:
							return 275.278f;
						case 18:
							return 82.4021f;
						case 19:
							return 89.672f;
						case 20:
							return 175.7747f;
						case 21:
							return 298.8189f;
						case 22:
							return 272.5778f;
						default:
					}
					break;
				case 1:
					switch (Local_157.f_54)
					{
						case 1:
							return 239.8358f;
						case 2:
							return 47.7028f;
						case 3:
							return 269.296f;
						case 4:
							return 317.4547f;
						case 5:
							return 261.8835f;
						case 6:
							return 45.2661f;
						case 7:
							return 131.5014f;
						case 8:
							return 59.3505f;
						case 9:
							return 43.3622f;
						case 10:
							return 242.5756f;
						case 11:
							return 314.2681f;
						case 12:
							return 176.731f;
						case 13:
							return 55.0103f;
						case 14:
							return 200.8372f;
						case 15:
							return 68.8202f;
						case 16:
							return 47.4361f;
						case 17:
							return 89.1401f;
						case 18:
							return 354.0209f;
						case 19:
							return 266.7281f;
						case 20:
							return 356.1704f;
						case 21:
							return 144.1817f;
						case 22:
							return 270.3809f;
						default:
					}
					break;
				case 2:
					switch (Local_157.f_54)
					{
						case 1:
							return 259.1305f;
						case 2:
							return 32.29f;
						case 3:
							return 269.3044f;
						case 4:
							return 233.7558f;
						case 5:
							return 274.4951f;
						case 6:
							return 354.4731f;
						case 7:
							return 36.0818f;
						case 8:
							return 60.2114f;
						case 9:
							return 359.9043f;
						case 10:
							return 14.0337f;
						case 11:
							return 335.3627f;
						case 12:
							return 172.7723f;
						case 13:
							return 305.7141f;
						case 14:
							return 90.7033f;
						case 15:
							return 253.9543f;
						case 16:
							return 1.6254f;
						case 17:
							return 265.4617f;
						case 18:
							return 48.5508f;
						case 19:
							return 264.2763f;
						case 20:
							return 88.9135f;
						case 21:
							return 32.2909f;
						case 22:
							return 180.6358f;
						default:
					}
					break;
			}
			break;
	}
	return 269.4978f;
}

Vector3 func_371(int iParam0, int iParam1)//Position - 0x198DE
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					switch (Local_157.f_54)
					{
						case 1:
							return 75.566f, -2540.649f, 5f;
						case 2:
							return -1078.2617f, -1239.8512f, 4.1434f;
						case 3:
							return 883.4796f, -1017.3135f, 31.3352f;
						case 4:
							return 257.9049f, -1957.5347f, 22.0042f;
						case 5:
							return -439.4763f, 178.6946f, 74.2514f;
						case 6:
							return -1100.7379f, -2038.4714f, 12.2665f;
						case 7:
							return -1280.453f, -829.5875f, 16.0992f;
						case 8:
							return -869.777f, -2705.1458f, 12.9452f;
						case 9:
							return 282.588f, -2994.0945f, 4.6682f;
						case 10:
							return 1544.658f, -2177.7598f, 76.3443f;
						case 11:
							return -338.8323f, -2704.0728f, 5.028f;
						case 12:
							return 517.5385f, -645.653f, 23.7512f;
						case 13:
							return -551.9077f, -1766.7131f, 20.7291f;
						case 14:
							return -299.124f, -1326.5293f, 30.3017f;
						case 15:
							return 346.8094f, 337.0167f, 104.1991f;
						case 16:
							return 900.0145f, -1572.7136f, 29.8542f;
						case 17:
							return 786.6585f, -900.3587f, 24.0527f;
						case 18:
							return 1049.0791f, -2171.6245f, 30.6872f;
						case 19:
							return 981.4014f, -2510.991f, 27.302f;
						case 20:
							return -264.0942f, 188.8373f, 84.1883f;
						case 21:
							return 557.2414f, -1960.6893f, 23.8062f;
						case 22:
							return 101.8777f, -2230.1423f, 5.0333f;
						default:
					}
					break;
				case 1:
					switch (Local_157.f_54)
					{
						case 1:
							return 66.5896f, -2544.517f, 5f;
						case 2:
							return -1025.6849f, -1317.3741f, 4.984f;
						case 3:
							return 909.1116f, -1092.3005f, 31.3332f;
						case 4:
							return 270.9639f, -1956.4824f, 22.4214f;
						case 5:
							return -446.1908f, 223.8166f, 82.006f;
						case 6:
							return -1054.0396f, -2049.1978f, 12.216f;
						case 7:
							return -1311.9147f, -790.1375f, 16.9507f;
						case 8:
							return -848.2803f, -2706.4285f, 12.9445f;
						case 9:
							return 267.5522f, -3048.1995f, 5.04f;
						case 10:
							return 1519.3438f, -2185.571f, 76.5866f;
						case 11:
							return -300.4395f, -2638.489f, 5.0418f;
						case 12:
							return 515.6205f, -679.5475f, 24.2445f;
						case 13:
							return -564.9694f, -1732.8549f, 21.3362f;
						case 14:
							return -333.6444f, -1376.2028f, 30.2957f;
						case 15:
							return 369.0242f, 300.1814f, 102.4281f;
						case 16:
							return 980.7197f, -1538.2393f, 29.5977f;
						case 17:
							return 799.59f, -918.3593f, 24.6337f;
						case 18:
							return 1061.2461f, -2198.0764f, 29.6956f;
						case 19:
							return 951.1177f, -2544.4395f, 27.3027f;
						case 20:
							return -216.3499f, 203.5424f, 82.6981f;
						case 21:
							return 570.9869f, -1900.998f, 23.8006f;
						case 22:
							return 131.1389f, -2187.4692f, 4.953f;
						default:
					}
					break;
				case 2:
					switch (Local_157.f_54)
					{
						case 1:
							return 17.2971f, -2548.3972f, 5.0366f;
						case 2:
							return -1111.0074f, -1241.6908f, 1.4219f;
						case 3:
							return 853.504f, -1092.164f, 26.9982f;
						case 4:
							return 253.4216f, -1991.4146f, 19.226f;
						case 5:
							return -420.191f, 230.0672f, 82.4149f;
						case 6:
							return -1083.174f, -2010.8414f, 12.1633f;
						case 7:
							return -1311.0547f, -773.2202f, 18.8163f;
						case 8:
							return -836.7797f, -2704.234f, 12.8121f;
						case 9:
							return 304.8296f, -2998.689f, 4.9774f;
						case 10:
							return 1565.0597f, -2074.2446f, 76.0599f;
						case 11:
							return -337.0353f, -2676.0352f, 5.0441f;
						case 12:
							return 465.3821f, -656.4695f, 26.7156f;
						case 13:
							return -606.8765f, -1729.3707f, 22.3962f;
						case 14:
							return -346.9227f, -1404.3417f, 29.197f;
						case 15:
							return 385.7742f, 253.9456f, 101.9867f;
						case 16:
							return 965.1168f, -1534.5669f, 29.7544f;
						case 17:
							return 753.7557f, -956.1052f, 23.8429f;
						case 18:
							return 1079.304f, -2155.7664f, 30.762f;
						case 19:
							return 973.3874f, -2493.156f, 27.302f;
						case 20:
							return -275.7711f, 133.0159f, 67.5569f;
						case 21:
							return 479.9522f, -1965.0645f, 23.6035f;
						case 22:
							return 207.8649f, -2236.6804f, 5.3571f;
						default:
					}
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					switch (Local_157.f_54)
					{
						case 1:
							return 80.18f, -2534.817f, 5f;
						case 2:
							return -1077.1154f, -1242.0277f, 4.2154f;
						case 3:
							return 917.6459f, -993.7324f, 35.4143f;
						case 4:
							return 256.9997f, -1973.1771f, 20.8855f;
						case 5:
							return -404.2649f, 199.9949f, 81.7681f;
						case 6:
							return -1090.5939f, -2049.7307f, 12.271f;
						case 7:
							return -1271.1072f, -848.6555f, 12.0146f;
						case 8:
							return -892.0394f, -2739.9224f, 12.8285f;
						case 9:
							return 262.0403f, -2999.0247f, 4.7474f;
						case 10:
							return 1548.647f, -2141.337f, 76.448f;
						case 11:
							return -330.3534f, -2695.2747f, 5.0115f;
						case 12:
							return 518.8716f, -629.5131f, 23.7529f;
						case 13:
							return -543.8981f, -1763.5194f, 20.6171f;
						case 14:
							return -263.9384f, -1369.8977f, 30.3f;
						case 15:
							return 348.4588f, 354.0681f, 104.0595f;
						case 16:
							return 927.0326f, -1579.5712f, 29.4263f;
						case 17:
							return 754.1151f, -872.9401f, 24.0701f;
						case 18:
							return 1095.8883f, -2175.6707f, 30.3221f;
						case 19:
							return 979.4924f, -2527.6545f, 27.302f;
						case 20:
							return -248.7708f, 180.1573f, 76.8737f;
						case 21:
							return 536.7711f, -1974.1625f, 23.8071f;
						case 22:
							return 115.9594f, -2230.1365f, 5.0333f;
						default:
					}
					break;
				case 1:
					switch (Local_157.f_54)
					{
						case 1:
							return 51.1315f, -2544.015f, 5.002f;
						case 2:
							return -1013.4612f, -1320.8735f, 4.8685f;
						case 3:
							return 891.0043f, -1092.5378f, 29.375f;
						case 4:
							return 283.8082f, -1944.0859f, 23.3962f;
						case 5:
							return -460.6299f, 227.2324f, 82.1805f;
						case 6:
							return -1043.4208f, -2060.0347f, 12.2542f;
						case 7:
							return -1323.8099f, -799.6187f, 16.7538f;
						case 8:
							return -836.1172f, -2713.632f, 12.9445f;
						case 9:
							return 276.9312f, -3041.2412f, 4.843f;
						case 10:
							return 1501.6151f, -2179.1072f, 76.9969f;
						case 11:
							return -312.4042f, -2651.0168f, 5.0429f;
						case 12:
							return 514.2888f, -695.7411f, 24.1667f;
						case 13:
							return -576.8483f, -1724.3372f, 21.7285f;
						case 14:
							return -339.4656f, -1376.4562f, 30.3116f;
						case 15:
							return 364.1374f, 283.0252f, 102.3552f;
						case 16:
							return 992.5272f, -1533.6869f, 29.745f;
						case 17:
							return 816.9606f, -918.3287f, 24.7227f;
						case 18:
							return 1059.1759f, -2216.8682f, 29.3004f;
						case 19:
							return 933.7609f, -2543.4902f, 27.3027f;
						case 20:
							return -217.0926f, 174.9504f, 75.4322f;
						case 21:
							return 582.6407f, -1890.3635f, 24.2265f;
						case 22:
							return 145.7482f, -2187.3904f, 4.953f;
						default:
					}
					break;
				case 2:
					switch (Local_157.f_54)
					{
						case 1:
							return 29.7453f, -2554.5647f, 5f;
						case 2:
							return -1119.537f, -1227.8463f, 1.4313f;
						case 3:
							return 836.6307f, -1092.5441f, 27.0783f;
						case 4:
							return 265.7728f, -1999.9193f, 18.8226f;
						case 5:
							return -393.0742f, 227.925f, 82.7333f;
						case 6:
							return -1088.0366f, -1993.0771f, 12.1576f;
						case 7:
							return -1325.4265f, -757.1539f, 19.367f;
						case 8:
							return -815.2336f, -2711.911f, 12.812f;
						case 9:
							return 304.6926f, -3012.6223f, 4.9702f;
						case 10:
							return 1568.9565f, -2095.7014f, 76.5195f;
						case 11:
							return -348.3641f, -2688.3452f, 5.0425f;
						case 12:
							return 467.2889f, -640.745f, 27.4996f;
						case 13:
							return -617.1298f, -1740.9594f, 22.6394f;
						case 14:
							return -352.1258f, -1404.4531f, 28.9612f;
						case 15:
							return 368.8197f, 259.9216f, 101.9686f;
						case 16:
							return 975.7991f, -1520.66f, 29.9604f;
						case 17:
							return 751.5151f, -965.7788f, 23.8412f;
						case 18:
							return 1082.6066f, -2150.6833f, 30.5369f;
						case 19:
							return 956.5896f, -2492.5786f, 27.302f;
						case 20:
							return -257.9995f, 133.273f, 68.2289f;
						case 21:
							return 475.7105f, -1978.2484f, 23.6205f;
						case 22:
							return 192.1165f, -2236.2793f, 4.8551f;
						default:
					}
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					switch (Local_157.f_54)
					{
						case 1:
							return 89.799f, -2530.9238f, 5f;
						case 2:
							return -1071.3932f, -1252.4434f, 4.7051f;
						case 3:
							return 899.5668f, -994.5377f, 33.1194f;
						case 4:
							return 241.0012f, -1996.4098f, 18.6848f;
						case 5:
							return -447.0587f, 178.2333f, 74.2037f;
						case 6:
							return -1062.5372f, -2009.4802f, 12.1616f;
						case 7:
							return -1285.7533f, -813.0154f, 16.3218f;
						case 8:
							return -887.17f, -2742.6404f, 12.8285f;
						case 9:
							return 270.8913f, -2989.357f, 4.7132f;
						case 10:
							return 1534.3113f, -2158.243f, 76.6882f;
						case 11:
							return -321.6567f, -2686.351f, 5.0111f;
						case 12:
							return 503.5738f, -624.4263f, 23.8131f;
						case 13:
							return -515.0387f, -1766.265f, 20.374f;
						case 14:
							return -263.8943f, -1385.9792f, 30.3057f;
						case 15:
							return 339.818f, 313.7482f, 103.4573f;
						case 16:
							return 922.7253f, -1538.2245f, 29.8691f;
						case 17:
							return 753.661f, -861.8409f, 24.2223f;
						case 18:
							return 1096.3728f, -2168.761f, 30.2795f;
						case 19:
							return 1024.333f, -2504.33f, 27.3434f;
						case 20:
							return -233.9646f, 210.537f, 84.1244f;
						case 21:
							return 538.3644f, -1984.8577f, 23.751f;
						case 22:
							return 131.7841f, -2230.2332f, 5.0333f;
						default:
					}
					break;
				case 1:
					switch (Local_157.f_54)
					{
						case 1:
							return 35.9444f, -2539.7173f, 5.0024f;
						case 2:
							return -1007.3937f, -1317.224f, 4.9067f;
						case 3:
							return 876.8945f, -1092.5299f, 28.2771f;
						case 4:
							return 295.9134f, -1932.2919f, 24.3064f;
						case 5:
							return -455.1007f, 234.6203f, 82.0244f;
						case 6:
							return -1031.7239f, -2072.0774f, 12.5716f;
						case 7:
							return -1335.5519f, -809.8959f, 16.4896f;
						case 8:
							return -821.3975f, -2722.3535f, 12.9444f;
						case 9:
							return 283.6107f, -3053.8225f, 4.9867f;
						case 10:
							return 1499.0831f, -2185.737f, 76.7263f;
						case 11:
							return -324.779f, -2663.5918f, 5.0445f;
						case 12:
							return 512.3986f, -721.838f, 23.8624f;
						case 13:
							return -591.0884f, -1714.1034f, 22.3323f;
						case 14:
							return -346.9976f, -1370.8627f, 30.3182f;
						case 15:
							return 377.8062f, 288.2171f, 102.1705f;
						case 16:
							return 996.5148f, -1543.246f, 29.8335f;
						case 17:
							return 835.5129f, -918.463f, 24.7448f;
						case 18:
							return 1046.311f, -2211.7773f, 29.1671f;
						case 19:
							return 913.9238f, -2542.3525f, 27.3173f;
						case 20:
							return -218.8107f, 151.816f, 70.3569f;
						case 21:
							return 593.3129f, -1876.0541f, 24.006f;
						case 22:
							return 163.7395f, -2187.2744f, 4.9529f;
						default:
					}
					break;
				case 2:
					switch (Local_157.f_54)
					{
						case 1:
							return 42.259f, -2558.2937f, 5f;
						case 2:
							return -1128.8971f, -1212.1335f, 1.3396f;
						case 3:
							return 819.2865f, -1093.1238f, 27.5717f;
						case 4:
							return 277.0835f, -2007.9565f, 18.7094f;
						case 5:
							return -375.8415f, 228.6617f, 83.2295f;
						case 6:
							return -1087.7556f, -1975.7911f, 12.1524f;
						case 7:
							return -1341.8778f, -751.0708f, 21.4101f;
						case 8:
							return -808.8249f, -2701.3206f, 12.812f;
						case 9:
							return 304.6487f, -3030.2097f, 4.9632f;
						case 10:
							return 1572.7524f, -2073.607f, 75.9901f;
						case 11:
							return -357.2827f, -2703.4287f, 5.0408f;
						case 12:
							return 470.1857f, -620.3571f, 27.4997f;
						case 13:
							return -629.9596f, -1751.4944f, 22.941f;
						case 14:
							return -312.814f, -1415.9194f, 30.0626f;
						case 15:
							return 352.8829f, 266.151f, 101.9626f;
						case 16:
							return 975.6237f, -1502.6373f, 30.2482f;
						case 17:
							return 751.2968f, -971.9805f, 23.8482f;
						case 18:
							return 1083.8596f, -2143.3225f, 30.7745f;
						case 19:
							return 935.8514f, -2489.5571f, 27.3192f;
						case 20:
							return -302.9154f, 133.8862f, 66.9406f;
						case 21:
							return 489.8722f, -1992.8081f, 23.9485f;
						case 22:
							return 182.5244f, -2221.961f, 4.9515f;
						default:
					}
					break;
			}
			break;
	}
	return 131.7841f, -2230.2332f, 5.0333f;
}

int func_372()//Position - 0x1AC4F
{
	return Local_157.f_5;
}

void func_373()//Position - 0x1AC5C
{
	if (__LIB_0__::func_797() == __LIB_0__::getMinusOneOrNull() && func_190() == 0)
	{
		func_186(2);
	}
}

void func_374()//Position - 0x1AC80
{
	bool bVar0;
	int iVar1;
	bVar0 = false;
	while (bVar0 < func_21())
	{
		if (func_185(bVar0))
		{
			iVar1++;
		}
		bVar0++;
	}
	if (Local_157.f_595 != iVar1)
	{
		Local_157.f_595 = iVar1;
	}
}

void func_375()//Position - 0x1ACBF
{
	bool bVar0;
	if (func_6())
	{
		if (!func_2259(3))
		{
			if (__LIB_0__::func_864(&(Local_157.f_584)) && __LIB_0__::func_937(&(Local_157.f_584), func_379(), 0))
			{
				bVar0 = false;
				while (bVar0 < func_21())
				{
					__LIB_35__::func_482(func_40(bVar0), bVar0, -1292453789, 0, 0);
					bVar0++;
				}
				__LIB_35__::func_493();
				func_24(3);
			}
		}
	}
}

int func_379()//Position - 0x1ADE2
{
	int iVar0;
	iVar0 = func_7();
	if (func_2257() == 1 && !func_2258())
	{
		iVar0 = 3;
	}
	switch (iVar0)
	{
		case 2:
			return Global_262145.f_16759 /* Tunable: EXEC_MEDIUM_SELL_BLIP_DELAY */;
		case 3:
			return Global_262145.f_16758 /* Tunable: EXEC_EASY_SELL_BLIP_DELAY */;
		default:
	}
	return Global_262145.f_16760 /* Tunable: EXEC_HARD_SELL_BLIP_DELAY */;
}

void func_380()//Position - 0x1AE34
{
	struct<3> Var0;
	Var0 = { __LIB_13__::func_512(Local_157.f_54) };
	if (!__LIB_0__::func_86(Var0))
	{
		__LIB_30__::func_764(&(Local_157.f_578), Var0, 1, 1103626240);
	}
}

void func_382()//Position - 0x1AEAD
{
	if (func_212() && func_399())
	{
		if (!func_398())
		{
			if (func_396())
			{
				__LIB_0__::func_795(&(Local_157.f_518), 0, 0);
			}
		}
		else if (func_394())
		{
			if (!__LIB_0__::func_864(&(Local_157.f_520)))
			{
				if (func_392() && func_388())
				{
					__LIB_0__::clearF_1Prop(&(Local_157.f_518));
					__LIB_0__::func_795(&(Local_157.f_520), 0, 0);
					func_386();
					if (func_385())
					{
						if (!func_11() && !func_384())
						{
							Local_157.f_591 = MISC::GET_RANDOM_INT_IN_RANGE(0, func_21());
						}
					}
				}
			}
		}
		else if (func_383())
		{
			func_392();
			func_388();
			func_386();
			if (func_385())
			{
				if (!func_11() && !func_384())
				{
					Local_157.f_591 = MISC::GET_RANDOM_INT_IN_RANGE(0, func_21());
				}
			}
		}
	}
}

int func_383()//Position - 0x1AF8A
{
	if (func_12())
	{
		return 1;
	}
	return 0;
}

bool func_384()//Position - 0x1AF9E
{
	return func_10() == 5;
}

int func_385()//Position - 0x1AFAC
{
	switch (func_348())
	{
		case 1:
		case 5:
		case 6:
		case 7:
			return 1;
		default:
	}
	return 0;
}

void func_386()//Position - 0x1AFDA
{
	int iVar0;
	if (func_399())
	{
		switch (func_10())
		{
			case 12:
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
				if (iVar0 < func_387())
				{
					if (!func_37(8))
					{
						func_34(8);
					}
				}
				else if (func_37(8))
				{
					func_2(8);
				}
				break;
			}
	}
}

int func_387()//Position - 0x1B02F
{
	switch (Local_157.f_593)
	{
		case 1:
		case 4:
			return Global_262145.f_16781 /* Tunable: EXEC_SELL_SEAATTACKED_HARD_BUZZARD_CHANCE */;
		case 2:
			return Global_262145.f_16780 /* Tunable: EXEC_SELL_SEAATTACKED_MEDIUM_BUZZARD_CHANCE */;
		case 3:
			return Global_262145.f_16779 /* Tunable: EXEC_SELL_SEAATTACKED_EASY_BUZZARD_CHANCE */;
		default:
	}
	return Global_262145.f_16779 /* Tunable: EXEC_SELL_SEAATTACKED_EASY_BUZZARD_CHANCE */;
}

int func_388()//Position - 0x1B07F
{
	bool bVar0;
	bVar0 = false;
	while (bVar0 < func_210())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_400[bVar0 /*8*/]))
		{
			if ((NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_157.f_400[bVar0 /*8*/]) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_157.f_400[bVar0 /*8*/]) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())) || (NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_157.f_400[bVar0 /*8*/]) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
			{
				if (__LIB_0__::func_953(Local_157.f_400[bVar0 /*8*/]))
				{
					if (!func_11() && !func_384())
					{
						NETWORK::NETWORK_FADE_OUT_ENTITY(NETWORK::NET_TO_ENT(Local_157.f_400[bVar0 /*8*/]), true, true);
						__LIB_1__::func_445(&(Local_157.f_400[bVar0 /*8*/]));
					}
					else
					{
						__LIB_1__::func_387(&(Local_157.f_400[bVar0 /*8*/]));
					}
					func_389(bVar0, 1);
				}
			}
		}
		bVar0++;
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < func_210())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_400[bVar0 /*8*/]))
		{
			return 0;
		}
		bVar0++;
	}
	return 1;
}

void func_389(bool bParam0, int iParam1)//Position - 0x1B184
{
	Local_157.f_400[bParam0 /*8*/].f_5 = iParam1;
}

int func_392()//Position - 0x1B1F7
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < func_9())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_499[iVar0 /*6*/]))
		{
			if ((NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_157.f_499[iVar0 /*6*/]) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_157.f_499[iVar0 /*6*/]) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())) || (NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_157.f_499[iVar0 /*6*/]) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
			{
				if (__LIB_0__::func_953(Local_157.f_499[iVar0 /*6*/]))
				{
					if (!func_11() && !func_384())
					{
						NETWORK::NETWORK_FADE_OUT_ENTITY(NETWORK::NET_TO_ENT(Local_157.f_499[iVar0 /*6*/]), true, true);
					}
					__LIB_1__::func_387(&(Local_157.f_499[iVar0 /*6*/]));
					__LIB_0__::clearF_1Prop(&(Local_157.f_571[iVar0 /*2*/]));
					func_393(iVar0, 1);
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < func_9())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_499[iVar0 /*6*/]))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_393(int iParam0, int iParam1)//Position - 0x1B2F9
{
	Local_157.f_499[iParam0 /*6*/].f_5 = iParam1;
}

int func_394()//Position - 0x1B30F
{
	if (__LIB_0__::func_864(&(Local_157.f_518)))
	{
		if (__LIB_0__::func_937(&(Local_157.f_518), func_395(), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_395()//Position - 0x1B33B
{
	if (Local_157.f_7 == 6)
	{
		return 5000;
	}
	return 10000;
}

int func_396()//Position - 0x1B355
{
	int iVar0;
	iVar0 = 0;
	switch (func_10())
	{
		case 12:
			if (func_37(8))
			{
				if (Local_157.f_499[0 /*6*/].f_5 == 4 || func_397())
				{
					iVar0 = 1;
				}
			}
			else if ((Local_157.f_499[0 /*6*/].f_5 == 4 && Local_157.f_499[1 /*6*/].f_5 == 4) || func_397())
			{
				iVar0 = 1;
			}
			break;
		case 5:
			if ((Local_157.f_499[0 /*6*/].f_5 == 4 && Local_157.f_499[1 /*6*/].f_5 == 4) || func_397())
			{
				iVar0 = 1;
			}
			break;
		case 6:
			if (Local_157.f_56 > 0)
			{
				if (func_397())
				{
					iVar0 = 1;
				}
			}
			break;
		case 11:
			break;
	}
	return iVar0;
}

int func_397()//Position - 0x1B429
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < func_210())
	{
		if (Local_157.f_400[iVar0 /*8*/].f_5 != 18)
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool func_398()//Position - 0x1B45C
{
	return __LIB_0__::func_864(&(Local_157.f_518));
}

int func_399()//Position - 0x1B46E
{
	if (((func_10() == 12 || func_10() == 5) || func_10() == 11) || func_10() == 6)
	{
		return 1;
	}
	return 0;
}

void func_400()//Position - 0x1B4AA
{
	int iVar0;
	bool bVar1;
	if (func_399())
	{
		iVar0 = 0;
		while (iVar0 < func_9())
		{
			switch (func_8(iVar0))
			{
				case 0:
					break;
				case 1:
					if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_499[iVar0 /*6*/]))
					{
						if (func_421())
						{
							if (__LIB_0__::func_864(&(Local_157.f_520)))
							{
								__LIB_0__::clearF_1Prop(&(Local_157.f_520));
							}
							if (__LIB_0__::func_799(func_420()))
							{
								if (func_403(iVar0, func_420()))
								{
									func_393(iVar0, 2);
								}
							}
						}
					}
					break;
				case 2:
					if (func_212())
					{
						bVar1 = false;
						while (bVar1 < func_210())
						{
							if (func_193(bVar1, 0))
							{
							}
							bVar1++;
						}
					}
					if (func_401(iVar0))
					{
						func_393(iVar0, 3);
					}
					break;
				case 3:
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_499[iVar0 /*6*/]))
					{
						if (!VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(Local_157.f_499[iVar0 /*6*/]), false) || ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_157.f_499[iVar0 /*6*/]), false))
						{
							func_393(iVar0, 4);
						}
					}
					break;
				case 4:
					break;
				case 5:
					break;
			}
			iVar0++;
		}
	}
}

int func_401(int iParam0)//Position - 0x1B5DF
{
	int iVar0;
	int iVar1;
	iVar0 = 1;
	switch (func_10())
	{
		case 12:
			if (func_37(8))
			{
				iVar1 = 0;
				while (iVar1 < func_210())
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_400[iVar1 /*8*/]))
					{
						if (!PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_157.f_400[iVar1 /*8*/])))
						{
							if (!__LIB_2__::func_789(NETWORK::NET_TO_PED(Local_157.f_400[iVar1 /*8*/]), NETWORK::NET_TO_VEH(Local_157.f_499[iParam0 /*6*/]), 0))
							{
								iVar0 = 0;
							}
						}
						else
						{
							iVar0 = 0;
						}
					}
					else
					{
						iVar0 = 0;
					}
					iVar1++;
				}
			}
			else if (iParam0 == 0)
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_400[0 /*8*/]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_400[1 /*8*/]))
				{
					if (!__LIB_2__::func_789(NETWORK::NET_TO_PED(Local_157.f_400[0 /*8*/]), NETWORK::NET_TO_VEH(Local_157.f_499[iParam0 /*6*/]), 0) && !__LIB_2__::func_789(NETWORK::NET_TO_PED(Local_157.f_400[1 /*8*/]), NETWORK::NET_TO_VEH(Local_157.f_499[iParam0 /*6*/]), 0))
					{
						iVar0 = 0;
					}
				}
				else
				{
					iVar0 = 0;
				}
			}
			else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_400[2 /*8*/]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_400[3 /*8*/]))
			{
				if (!__LIB_2__::func_789(NETWORK::NET_TO_PED(Local_157.f_400[2 /*8*/]), NETWORK::NET_TO_VEH(Local_157.f_499[iParam0 /*6*/]), 0) && !__LIB_2__::func_789(NETWORK::NET_TO_PED(Local_157.f_400[3 /*8*/]), NETWORK::NET_TO_VEH(Local_157.f_499[iParam0 /*6*/]), 0))
				{
					iVar0 = 0;
				}
			}
			else
			{
				iVar0 = 0;
			}
			break;
		case 5:
			iVar1 = 0;
			while (iVar1 < func_210())
			{
				if (iParam0 == 0)
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_400[0 /*8*/]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_400[1 /*8*/]))
					{
						if (!__LIB_2__::func_789(NETWORK::NET_TO_PED(Local_157.f_400[0 /*8*/]), NETWORK::NET_TO_VEH(Local_157.f_499[iParam0 /*6*/]), 0) || !__LIB_2__::func_789(NETWORK::NET_TO_PED(Local_157.f_400[1 /*8*/]), NETWORK::NET_TO_VEH(Local_157.f_499[iParam0 /*6*/]), 0))
						{
							iVar0 = 0;
						}
					}
					else
					{
						iVar0 = 0;
					}
				}
				else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_400[2 /*8*/]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_400[3 /*8*/]))
				{
					if (!__LIB_2__::func_789(NETWORK::NET_TO_PED(Local_157.f_400[2 /*8*/]), NETWORK::NET_TO_VEH(Local_157.f_499[iParam0 /*6*/]), 0) || !__LIB_2__::func_789(NETWORK::NET_TO_PED(Local_157.f_400[3 /*8*/]), NETWORK::NET_TO_VEH(Local_157.f_499[iParam0 /*6*/]), 0))
					{
						iVar0 = 0;
					}
				}
				else
				{
					iVar0 = 0;
				}
				iVar1++;
			}
			break;
		case 6:
			switch (func_210())
			{
				case 4:
					if (iParam0 == 0)
					{
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_400[0 /*8*/]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_400[1 /*8*/]))
						{
							if (!__LIB_2__::func_789(NETWORK::NET_TO_PED(Local_157.f_400[0 /*8*/]), NETWORK::NET_TO_VEH(Local_157.f_499[iParam0 /*6*/]), 0) || !__LIB_2__::func_789(NETWORK::NET_TO_PED(Local_157.f_400[1 /*8*/]), NETWORK::NET_TO_VEH(Local_157.f_499[iParam0 /*6*/]), 0))
							{
								iVar0 = 0;
							}
						}
						else
						{
							iVar0 = 0;
						}
					}
					else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_400[2 /*8*/]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_400[3 /*8*/]))
					{
						if (!__LIB_2__::func_789(NETWORK::NET_TO_PED(Local_157.f_400[2 /*8*/]), NETWORK::NET_TO_VEH(Local_157.f_499[iParam0 /*6*/]), 0) || !__LIB_2__::func_789(NETWORK::NET_TO_PED(Local_157.f_400[3 /*8*/]), NETWORK::NET_TO_VEH(Local_157.f_499[iParam0 /*6*/]), 0))
						{
							iVar0 = 0;
						}
					}
					else
					{
						iVar0 = 0;
					}
					break;
				case 6:
					if (iParam0 == 0)
					{
						if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_400[0 /*8*/]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_400[1 /*8*/])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_400[2 /*8*/]))
						{
							if ((!__LIB_2__::func_789(NETWORK::NET_TO_PED(Local_157.f_400[0 /*8*/]), NETWORK::NET_TO_VEH(Local_157.f_499[iParam0 /*6*/]), 0) || !__LIB_2__::func_789(NETWORK::NET_TO_PED(Local_157.f_400[1 /*8*/]), NETWORK::NET_TO_VEH(Local_157.f_499[iParam0 /*6*/]), 0)) || !__LIB_2__::func_789(NETWORK::NET_TO_PED(Local_157.f_400[2 /*8*/]), NETWORK::NET_TO_VEH(Local_157.f_499[iParam0 /*6*/]), 0))
							{
								iVar0 = 0;
							}
						}
						else
						{
							iVar0 = 0;
						}
					}
					else if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_400[3 /*8*/]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_400[4 /*8*/])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_400[5 /*8*/]))
					{
						if ((!__LIB_2__::func_789(NETWORK::NET_TO_PED(Local_157.f_400[3 /*8*/]), NETWORK::NET_TO_VEH(Local_157.f_499[iParam0 /*6*/]), 0) || !__LIB_2__::func_789(NETWORK::NET_TO_PED(Local_157.f_400[4 /*8*/]), NETWORK::NET_TO_VEH(Local_157.f_499[iParam0 /*6*/]), 0)) || !__LIB_2__::func_789(NETWORK::NET_TO_PED(Local_157.f_400[5 /*8*/]), NETWORK::NET_TO_VEH(Local_157.f_499[iParam0 /*6*/]), 0))
						{
							iVar0 = 0;
						}
					}
					else
					{
						iVar0 = 0;
					}
					break;
				case 8:
					if (iParam0 == 0)
					{
						if (((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_400[0 /*8*/]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_400[1 /*8*/])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_400[2 /*8*/])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_400[3 /*8*/]))
						{
							if (((!__LIB_2__::func_789(NETWORK::NET_TO_PED(Local_157.f_400[0 /*8*/]), NETWORK::NET_TO_VEH(Local_157.f_499[iParam0 /*6*/]), 0) || !__LIB_2__::func_789(NETWORK::NET_TO_PED(Local_157.f_400[1 /*8*/]), NETWORK::NET_TO_VEH(Local_157.f_499[iParam0 /*6*/]), 0)) || !__LIB_2__::func_789(NETWORK::NET_TO_PED(Local_157.f_400[2 /*8*/]), NETWORK::NET_TO_VEH(Local_157.f_499[iParam0 /*6*/]), 0)) || !__LIB_2__::func_789(NETWORK::NET_TO_PED(Local_157.f_400[3 /*8*/]), NETWORK::NET_TO_VEH(Local_157.f_499[iParam0 /*6*/]), 0))
							{
								iVar0 = 0;
							}
						}
						else
						{
							iVar0 = 0;
						}
					}
					else if (((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_400[4 /*8*/]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_400[5 /*8*/])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_400[6 /*8*/])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_400[7 /*8*/]))
					{
						if (((!__LIB_2__::func_789(NETWORK::NET_TO_PED(Local_157.f_400[4 /*8*/]), NETWORK::NET_TO_VEH(Local_157.f_499[iParam0 /*6*/]), 0) || !__LIB_2__::func_789(NETWORK::NET_TO_PED(Local_157.f_400[5 /*8*/]), NETWORK::NET_TO_VEH(Local_157.f_499[iParam0 /*6*/]), 0)) || !__LIB_2__::func_789(NETWORK::NET_TO_PED(Local_157.f_400[6 /*8*/]), NETWORK::NET_TO_VEH(Local_157.f_499[iParam0 /*6*/]), 0)) || !__LIB_2__::func_789(NETWORK::NET_TO_PED(Local_157.f_400[7 /*8*/]), NETWORK::NET_TO_VEH(Local_157.f_499[iParam0 /*6*/]), 0))
						{
							iVar0 = 0;
						}
					}
					else
					{
						iVar0 = 0;
					}
					break;
			}
			break;
		case 11:
			if (iParam0 == 0)
			{
				if (((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_400[0 /*8*/]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_400[1 /*8*/])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_400[2 /*8*/])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_400[3 /*8*/]))
				{
					if (((!__LIB_2__::func_789(NETWORK::NET_TO_PED(Local_157.f_400[0 /*8*/]), NETWORK::NET_TO_VEH(Local_157.f_499[iParam0 /*6*/]), 0) || !__LIB_2__::func_789(NETWORK::NET_TO_PED(Local_157.f_400[1 /*8*/]), NETWORK::NET_TO_VEH(Local_157.f_499[iParam0 /*6*/]), 0)) || !__LIB_2__::func_789(NETWORK::NET_TO_PED(Local_157.f_400[2 /*8*/]), NETWORK::NET_TO_VEH(Local_157.f_499[iParam0 /*6*/]), 0)) || !__LIB_2__::func_789(NETWORK::NET_TO_PED(Local_157.f_400[3 /*8*/]), NETWORK::NET_TO_VEH(Local_157.f_499[iParam0 /*6*/]), 0))
					{
						iVar0 = 0;
					}
				}
				else
				{
					iVar0 = 0;
				}
			}
			else if (iParam0 == 1)
			{
				if (((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_400[4 /*8*/]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_400[5 /*8*/])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_400[6 /*8*/])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_400[7 /*8*/]))
				{
					if (((!__LIB_2__::func_789(NETWORK::NET_TO_PED(Local_157.f_400[4 /*8*/]), NETWORK::NET_TO_VEH(Local_157.f_499[iParam0 /*6*/]), 0) || !__LIB_2__::func_789(NETWORK::NET_TO_PED(Local_157.f_400[5 /*8*/]), NETWORK::NET_TO_VEH(Local_157.f_499[iParam0 /*6*/]), 0)) || !__LIB_2__::func_789(NETWORK::NET_TO_PED(Local_157.f_400[6 /*8*/]), NETWORK::NET_TO_VEH(Local_157.f_499[iParam0 /*6*/]), 0)) || !__LIB_2__::func_789(NETWORK::NET_TO_PED(Local_157.f_400[7 /*8*/]), NETWORK::NET_TO_VEH(Local_157.f_499[iParam0 /*6*/]), 0))
					{
						iVar0 = 0;
					}
				}
				else
				{
					iVar0 = 0;
				}
			}
			else if (iParam0 == 2)
			{
				if (((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_400[8 /*8*/]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_400[9 /*8*/])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_400[10 /*8*/])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_400[11 /*8*/]))
				{
					if (((!__LIB_2__::func_789(NETWORK::NET_TO_PED(Local_157.f_400[8 /*8*/]), NETWORK::NET_TO_VEH(Local_157.f_499[iParam0 /*6*/]), 0) || !__LIB_2__::func_789(NETWORK::NET_TO_PED(Local_157.f_400[9 /*8*/]), NETWORK::NET_TO_VEH(Local_157.f_499[iParam0 /*6*/]), 0)) || !__LIB_2__::func_789(NETWORK::NET_TO_PED(Local_157.f_400[10 /*8*/]), NETWORK::NET_TO_VEH(Local_157.f_499[iParam0 /*6*/]), 0)) || !__LIB_2__::func_789(NETWORK::NET_TO_PED(Local_157.f_400[11 /*8*/]), NETWORK::NET_TO_VEH(Local_157.f_499[iParam0 /*6*/]), 0))
					{
						iVar0 = 0;
					}
				}
				else
				{
					iVar0 = 0;
				}
			}
			break;
	}
	return iVar0;
}

int func_403(int iParam0, int iParam1)//Position - 0x1C015
{
	float fVar0;
	bool bVar1;
	float fVar2;
	struct<3> Var3;
	struct<31> Var4;
	struct<3> Var5;
	struct<3> Var6;
	float fVar7;
	int iVar8;
	var uVar9;
	bool bVar10;
	float fVar11;
	struct<31> Var12;
	struct<3> Var13;
	switch (func_10())
	{
		case 12:
			if (Local_157.f_522 == -1)
			{
				if (Local_157.f_522.f_6 == -1 || Local_157.f_522.f_6 == iParam0)
				{
					Local_157.f_522.f_6 = iParam0;
					if (__LIB_0__::func_86(Local_157.f_522.f_7))
					{
						if (__LIB_0__::func_86(Local_157.f_522.f_13))
						{
							Local_157.f_522.f_13 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(func_40(0)) };
						}
						else if (func_37(8))
						{
							if (Local_118.f_361 > 5)
							{
								if (Local_118.f_363 == 1)
								{
									Local_118.f_363 = 0;
								}
							}
							func_419(func_40(0), &(Local_157.f_522.f_7), &(Local_157.f_522.f_10));
							if (__LIB_41__::func_947(Local_157.f_522.f_7, 3f, 1065353216, 1065353216, 1084227584, Local_118.f_363, Local_118.f_363, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
							{
								Local_157.f_522.f_7.f_2 = func_418();
							}
							else
							{
								Local_157.f_522.f_7 = { 0f, 0f, 0f };
								if (Local_118.f_361 < 5)
								{
									Local_118.f_361++;
								}
								else
								{
									Local_118.f_362++;
								}
							}
						}
						else
						{
							if (Local_118.f_361 >= 5)
							{
								if (Local_118.f_363 == 1)
								{
									Local_118.f_363 = 0;
								}
								if (Local_118.f_362 >= 5)
								{
									if (!func_37(8))
									{
										func_34(8);
										Local_157.f_522.f_7 = { 0f, 0f, 0f };
										Local_118.f_361 = 0;
										Local_118.f_362 = 0;
									}
								}
								else
								{
									func_415(func_40(0), &(Local_157.f_522.f_7), &(Local_157.f_522.f_10), 1);
								}
							}
							else
							{
								func_415(func_40(0), &(Local_157.f_522.f_7), &(Local_157.f_522.f_10), 0);
							}
							if (WATER::TEST_PROBE_AGAINST_WATER(Local_157.f_522.f_7 + Vector(2f, 0f, 0f), Local_157.f_522.f_7 - Vector(10f, 0f, 0f), &(Local_157.f_522.f_7)))
							{
								if (__LIB_41__::func_947(Local_157.f_522.f_7, 3f, 1065353216, 1065353216, 1084227584, Local_118.f_363, Local_118.f_363, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
								{
									if (__LIB_15__::func_557(Local_157.f_522.f_7))
									{
									}
									else
									{
										Local_157.f_522.f_7 = { 0f, 0f, 0f };
										if (Local_118.f_361 < 5)
										{
											Local_118.f_361++;
										}
										else
										{
											Local_118.f_362++;
										}
									}
								}
								else
								{
									Local_157.f_522.f_7 = { 0f, 0f, 0f };
									if (Local_118.f_361 < 5)
									{
										Local_118.f_361++;
									}
									else
									{
										Local_118.f_362++;
									}
								}
							}
							else
							{
								Local_157.f_522.f_7 = { 0f, 0f, 0f };
								if (Local_118.f_361 < 5)
								{
									Local_118.f_361++;
								}
								else
								{
									Local_118.f_362++;
								}
							}
						}
					}
					else if (__LIB_0__::func_957(&(Local_157.f_499[iParam0 /*6*/]), iParam1, Local_157.f_522.f_7, Local_157.f_522.f_10, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
					{
						func_413(iParam0);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam1);
						Local_157.f_522.f_6 = -1;
						Local_157.f_522.f_7 = { 0f, 0f, 0f };
						Local_157.f_522.f_10 = 0f;
						Local_157.f_522.f_12 = 0;
						Local_157.f_522.f_11 = 0;
						Local_118.f_361 = 0;
						Local_118.f_363 = 1;
						__LIB_0__::func_795(&(Local_157.f_571[iParam0 /*2*/]), 0, 0);
						if (func_37(8))
						{
							Local_157.f_544 = (Local_157.f_544 + 1f);
						}
						else
						{
							Local_157.f_544 = (Local_157.f_544 + 0.5f);
						}
						return 1;
					}
				}
			}
			break;
		case 5:
			if (Local_157.f_522 == -1)
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_35[Local_157.f_591]))
				{
					if (__LIB_0__::func_939(Local_157.f_35[Local_157.f_591]))
					{
						if (Local_157.f_522.f_6 == -1 || Local_157.f_522.f_6 == iParam0)
						{
							Local_157.f_522.f_6 = iParam0;
							if (__LIB_0__::func_86(Local_157.f_522.f_7))
							{
								if (__LIB_0__::func_86(Local_157.f_522.f_13))
								{
									Local_157.f_522.f_13 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(NETWORK::NET_TO_VEH(Local_157.f_35[Local_157.f_591])) };
								}
								else
								{
									if ((Local_157.f_522.f_13.f_2 >= 0f && Local_157.f_522.f_13.f_2 < 90f) || (Local_157.f_522.f_13.f_2 >= 270f && Local_157.f_522.f_13.f_2 < 360f))
									{
										fVar0 = 220f;
									}
									else
									{
										fVar0 = 120f;
									}
									bVar1 = true;
									if (MISC::FIND_SPAWN_POINT_IN_DIRECTION(ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(Local_157.f_35[Local_157.f_591]), true), Local_157.f_522.f_13, fVar0, &(Local_157.f_522.f_7)))
									{
										fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_157.f_522.f_7, ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_157.f_35[Local_157.f_591]), false), true);
										Var3 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(NETWORK::NET_TO_VEH(Local_157.f_35[Local_157.f_591]), Local_157.f_522.f_7) };
										if (fVar2 > 290f)
										{
											bVar1 = false;
										}
										if (!__LIB_41__::func_947(Local_157.f_522.f_7, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 190f, 0, -1, 1, 0, 0, 0, 0, 0))
										{
											bVar1 = false;
										}
										if (MISC::ABSF(Var3.f_0) > 100f)
										{
											bVar1 = false;
										}
										if (!bVar1)
										{
											Local_157.f_522.f_7 = { 0f, 0f, 0f };
										}
										else
										{
											Local_157.f_522.f_10 = __LIB_0__::func_932(Local_157.f_522.f_7, ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(Local_157.f_35[Local_157.f_591]), true));
										}
									}
									else
									{
										func_411(&(Local_157.f_522.f_13));
									}
								}
							}
							if (!__LIB_0__::func_86(Local_157.f_522.f_7))
							{
								if (__LIB_0__::func_957(&(Local_157.f_499[iParam0 /*6*/]), iParam1, Local_157.f_522.f_7, Local_157.f_522.f_10, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
								{
									func_413(iParam0);
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam1);
									Local_157.f_522.f_6 = -1;
									Local_157.f_522.f_7 = { 0f, 0f, 0f };
									Local_157.f_522.f_10 = 0f;
									Local_157.f_522.f_12 = 0;
									Local_157.f_522.f_11 = 0;
									Local_157.f_544 = (Local_157.f_544 + 1f);
									return 1;
								}
							}
						}
					}
				}
			}
			break;
		case 11:
			if (Local_157.f_522 == -1)
			{
				if (Local_157.f_522.f_6 == -1 || Local_157.f_522.f_6 == iParam0)
				{
					Local_157.f_522.f_6 = iParam0;
					if (__LIB_0__::func_86(Local_157.f_522.f_7))
					{
						if (__LIB_0__::func_86(Local_157.f_522.f_16))
						{
							Local_157.f_522.f_16 = { func_410(11, Local_157.f_551[iParam0], Local_157.f_384, 0) };
							Local_157.f_522.f_16.f_2 = (Local_157.f_522.f_16.f_2 + 50f);
						}
						if (!__LIB_0__::func_86(Local_157.f_522.f_16))
						{
							Var4.f_4 = 1125515264;
							Var4.f_5 = 1;
							Var4.f_6 = 1;
							Var4.f_8 = 1082130432;
							Var4.f_9 = 1176255488;
							Var4.f_10 = 1;
							Var4.f_13 = 1;
							Var4.f_15 = 2;
							Var4.f_22 = 2;
							Var4.f_25 = 1;
							Var4.f_26 = 1;
							Var4.f_29 = 1123024896;
							Var4.f_30 = 1;
							Var4.f_0 = 0f;
							Var4.f_1 = 1;
							Var4.f_4 = 50f;
							Var4.f_5 = 0;
							Var4.f_6 = 1;
							Var4.f_12 = 1;
							Var4.f_3 = 1;
							Var6 = { Local_157.f_522.f_16 };
							Var5 = { Local_157.f_522.f_16 };
							if (func_45(Local_157.f_522.f_16, Var5, iParam1, 0, &Var6, &(Local_157.f_522.f_10), &Var4))
							{
								Local_157.f_522.f_7 = { Var6 };
							}
						}
					}
					else if (__LIB_0__::func_957(&(Local_157.f_499[iParam0 /*6*/]), iParam1, Local_157.f_522.f_7, Local_157.f_522.f_10, 1, 1, 1, 1, 0, 1, 0, 0, 0, 0))
					{
						func_413(iParam0);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam1);
						Local_157.f_522.f_6 = -1;
						Local_157.f_522.f_16 = { 0f, 0f, 0f };
						Local_157.f_522.f_7 = { 0f, 0f, 0f };
						Local_157.f_522.f_10 = 0f;
						Local_157.f_522.f_12 = 0;
						Local_157.f_522.f_11 = 0;
						Local_118.f_361 = 0;
						VEHICLE::MODIFY_VEHICLE_TOP_SPEED(NETWORK::NET_TO_VEH(Local_157.f_499[iParam0 /*6*/]), 30f);
						Local_157.f_544 = (Local_157.f_544 + 1f);
						return 1;
					}
				}
			}
			break;
		case 6:
			if (Local_157.f_522 == -1)
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_35[Local_157.f_591]))
				{
					if (__LIB_0__::func_939(Local_157.f_35[Local_157.f_591]))
					{
						if (Local_157.f_522.f_6 == -1 || Local_157.f_522.f_6 == iParam0)
						{
							Local_157.f_522.f_6 = iParam0;
							if (Local_118.f_361 < 50)
							{
								if (__LIB_0__::func_86(Local_157.f_522.f_7))
								{
									iVar8 = func_409(Local_157.f_591);
									fVar7 = func_408(iVar8);
									if (__LIB_0__::func_86(Local_157.f_522.f_13))
									{
										if (iVar8 >= 0)
										{
											Local_157.f_522.f_13 = { func_407(iVar8) };
											uVar9 = func_406(iVar8);
											Local_157.f_522.f_19 = { 0f, 0f, uVar9 };
										}
									}
									if (!__LIB_0__::func_86(Local_157.f_522.f_13))
									{
										bVar10 = true;
										if (MISC::FIND_SPAWN_POINT_IN_DIRECTION(ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(Local_157.f_35[Local_157.f_591]), true), Local_157.f_522.f_13, fVar7, &(Local_157.f_522.f_7)))
										{
											fVar11 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_157.f_522.f_7, ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_157.f_35[Local_157.f_591]), false), true);
											if (fVar11 > 300f)
											{
												bVar10 = false;
											}
											if (!__LIB_41__::func_947(Local_157.f_522.f_7, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
											{
												bVar10 = false;
											}
											if (!bVar10)
											{
												Local_157.f_522.f_7 = { 0f, 0f, 0f };
												Local_157.f_522.f_13 = { 0f, 0f, 0f };
												Local_118.f_361++;
											}
											else
											{
												Local_157.f_522.f_10 = __LIB_0__::func_932(Local_157.f_522.f_7, ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(Local_157.f_35[Local_157.f_591]), true));
											}
										}
										else
										{
											Local_118.f_361++;
											func_411(&(Local_157.f_522.f_19));
											Local_157.f_522.f_13 = { __LIB_3__::func_80(Local_157.f_522.f_19) };
										}
									}
								}
							}
							else
							{
								if (__LIB_0__::func_86(Local_157.f_522.f_16))
								{
									Local_157.f_522.f_16 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_157.f_35[Local_157.f_591]), false) };
								}
								if (!__LIB_0__::func_86(Local_157.f_522.f_16))
								{
									Var12.f_4 = 1125515264;
									Var12.f_5 = 1;
									Var12.f_6 = 1;
									Var12.f_8 = 1082130432;
									Var12.f_9 = 1176255488;
									Var12.f_10 = 1;
									Var12.f_13 = 1;
									Var12.f_15 = 2;
									Var12.f_22 = 2;
									Var12.f_25 = 1;
									Var12.f_26 = 1;
									Var12.f_29 = 1123024896;
									Var12.f_30 = 1;
									if (__LIB_0__::func_490(Local_157.f_522.f_16, -1190.6583f, -2196.3591f, 12.1951f, 50f, 0))
									{
										Local_157.f_522.f_16 = { -962.3659f, -2148.9243f, 7.879f };
										Var12.f_0 = 0f;
										Var12.f_1 = 0;
										Var12.f_4 = 75f;
										Var12.f_5 = 1;
										Var12.f_6 = 1;
										Var12.f_12 = 0;
										Var12.f_3 = 0;
									}
									else
									{
										Var12.f_0 = 100f;
										Var12.f_1 = 0;
										Var12.f_4 = 250f;
										Var12.f_5 = 0;
										Var12.f_6 = 1;
										Var12.f_12 = 0;
										Var12.f_3 = 0;
									}
									Var13 = { Local_157.f_522.f_16 };
									if (func_45(Local_157.f_522.f_16, Var13, iParam1, 0, &(Local_157.f_522.f_7), &(Local_157.f_522.f_10), &Var12))
									{
									}
								}
							}
							if (!__LIB_0__::func_86(Local_157.f_522.f_7))
							{
								if (__LIB_0__::func_957(&(Local_157.f_499[iParam0 /*6*/]), iParam1, Local_157.f_522.f_7, Local_157.f_522.f_10, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
								{
									func_413(iParam0);
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam1);
									Local_157.f_522.f_6 = -1;
									Local_157.f_522.f_7 = { 0f, 0f, 0f };
									Local_157.f_522.f_13 = { 0f, 0f, 0f };
									Local_157.f_522.f_10 = 0f;
									Local_157.f_522.f_12 = 0;
									Local_157.f_522.f_11 = 0;
									Local_157.f_544 = (Local_157.f_544 + 1f);
									Local_118.f_361 = 0;
									MISC::CLEAR_BIT(&(Local_157.f_550), iParam0);
									return 1;
								}
							}
						}
					}
				}
			}
			break;
	}
	return 0;
}

float func_406(int iParam0)//Position - 0x1CD68
{
	float fVar0;
	switch (iParam0)
	{
		case 0:
			fVar0 = 317.5908f;
			break;
		case 1:
			fVar0 = 65.8782f;
			break;
		case 2:
			fVar0 = 79.6437f;
			break;
		case 3:
			fVar0 = 339.162f;
			break;
		case 4:
			fVar0 = 300.5366f;
			break;
		case 5:
			fVar0 = 26.3732f;
			break;
		case 6:
			fVar0 = 12.9312f;
			break;
		case 7:
			fVar0 = 306.5281f;
			break;
		case 8:
			fVar0 = 70.6314f;
			break;
		case 9:
			fVar0 = 199.4232f;
			break;
		case 10:
			fVar0 = 232.5371f;
			break;
		case 11:
			fVar0 = 217.9965f;
			break;
		case 12:
			fVar0 = 97.8555f;
			break;
		case 13:
			fVar0 = 254.7614f;
			break;
		case 14:
			fVar0 = 149.1127f;
			break;
		case 15:
			fVar0 = 299.9396f;
			break;
		case 16:
			fVar0 = 143.5423f;
			break;
		case 17:
			fVar0 = 153.6289f;
			break;
		case 18:
			fVar0 = 327.4365f;
			break;
		case 19:
			fVar0 = 0f;
			break;
	}
	return fVar0;
}

Vector3 func_407(int iParam0)//Position - 0x1CEB5
{
	var uVar0;
	struct<3> Var1;
	uVar0 = func_406(iParam0);
	Var1 = { __LIB_3__::func_80(0f, 0f, uVar0) };
	return Var1;
}

float func_408(int iParam0)//Position - 0x1CED5
{
	float fVar0;
	fVar0 = 225f;
	switch (iParam0)
	{
		case 16:
			fVar0 = 150f;
			break;
		case 19:
			fVar0 = 150f;
			break;
	}
	return fVar0;
}

bool func_409(bool bParam0)//Position - 0x1CF0D
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	struct<3> Var4;
	struct<3> Var5;
	bVar1 = -1;
	fVar2 = 1E+10f;
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_35[bParam0]))
	{
		Var4 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_157.f_35[bParam0]), false) };
		bVar0 = false;
		while (bVar0 < 20)
		{
			Var5 = { func_410(func_10(), bVar0, Local_157.f_384, bParam0) };
			if (!__LIB_0__::func_86(Var5))
			{
				fVar3 = SYSTEM::VDIST2(Var4, Var5);
				if (fVar3 < fVar2)
				{
					fVar2 = fVar3;
					bVar1 = bVar0;
				}
			}
			bVar0++;
		}
	}
	return bVar1;
}

Vector3 func_410(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x1CF9D
{
	struct<3> Var0;
	Var0 = { 0f, 0f, 0f };
	switch (iParam0)
	{
		case 2:
			switch (iParam2)
			{
				case 0:
					switch (bParam1)
					{
						case 0:
							Var0 = { -1299.4523f, 262.6427f, 62.4118f };
							break;
						case 1:
							Var0 = { -695.6533f, 40.4916f, 42.2066f };
							break;
						case 2:
							Var0 = { -423.2495f, -333.4061f, 32.1091f };
							break;
						case 3:
							Var0 = { -811.9092f, -954.7036f, 14.3921f };
							break;
						case 4:
							Var0 = { -1398.5836f, -458.2471f, 33.4826f };
							break;
					}
					break;
				case 1:
					switch (bParam1)
					{
						case 0:
							Var0 = { -369.0282f, -119.8091f, 37.7011f };
							break;
						case 1:
							Var0 = { 191.6113f, 295.0079f, 104.5737f };
							break;
						case 2:
							Var0 = { 46.4537f, -100.893f, 55.2574f };
							break;
						case 3:
							Var0 = { 274.1785f, 6.6766f, 78.2459f };
							break;
						case 4:
							Var0 = { -23.201f, -715.1903f, 31.3893f };
							break;
					}
					break;
				case 2:
					switch (bParam1)
					{
						case 0:
							Var0 = { -585.7718f, -754.8728f, 28.487f };
							break;
						case 1:
							Var0 = { -944.804f, -1526.4298f, 4.0691f };
							break;
						case 2:
							Var0 = { -1192.9956f, -730.683f, 19.8283f };
							break;
						case 3:
							Var0 = { 132.2173f, -1060.2695f, 28.1924f };
							break;
						case 4:
							Var0 = { -832.2669f, -1267.9912f, 4.0004f };
							break;
					}
					break;
				case 3:
					switch (bParam1)
					{
						case 0:
							Var0 = { 332.3376f, -1258.7462f, 30.6282f };
							break;
						case 1:
							Var0 = { 1249.7144f, -344.7008f, 68.0822f };
							break;
						case 2:
							Var0 = { 1240.6886f, -1096.6858f, 37.5253f };
							break;
						case 3:
							Var0 = { 1212.7217f, -1764.7648f, 39.0275f };
							break;
						case 4:
							Var0 = { 1108.7799f, -781.7119f, 57.2627f };
							break;
					}
					break;
				case 4:
					switch (bParam1)
					{
						case 0:
							Var0 = { 186.5039f, -1675.6888f, 28.5411f };
							break;
						case 1:
							Var0 = { -146.6724f, -1421.5548f, 29.8175f };
							break;
						case 2:
							Var0 = { 444.3614f, -1754.7988f, 27.8588f };
							break;
						case 3:
							Var0 = { -297.4062f, -2219.2466f, 8.3765f };
							break;
						case 4:
							Var0 = { 585.7614f, -2808.5112f, 5.0589f };
							break;
					}
					break;
			}
			break;
		case 10:
			switch (iParam2)
			{
				case 0:
					switch (bParam1)
					{
						case 0:
							Var0 = { -449.1798f, 1587.8698f, 358.0182f };
							break;
						case 1:
							Var0 = { -3225.1182f, 1286.5251f, 4.4326f };
							break;
						case 2:
							Var0 = { -1586.6179f, 5206.799f, 3.0067f };
							break;
						case 3:
							Var0 = { 1310.9404f, 4324.8687f, 37.0952f };
							break;
						case 4:
							Var0 = { -2113.7385f, 2836.9211f, 31.8098f };
							break;
					}
					break;
				case 1:
					switch (bParam1)
					{
						case 0:
							Var0 = { 3809.7239f, 4462.7285f, 3.2886f };
							break;
						case 1:
							Var0 = { 2482.5913f, 1592.2926f, 31.7203f };
							break;
						case 2:
							Var0 = { 1233.0326f, 1915.3671f, 76.9579f };
							break;
						case 3:
							Var0 = { 891.9604f, 3580.1948f, 32.3722f };
							break;
						case 4:
							Var0 = { 3521.9387f, 3726.9714f, 35.4464f };
							break;
					}
					break;
				case 2:
					switch (bParam1)
					{
						case 0:
							Var0 = { 2580.5012f, 493.3184f, 107.4995f };
							break;
						case 1:
							Var0 = { 358.391f, 939.3512f, 204.4465f };
							break;
						case 2:
							Var0 = { 410.5613f, 2988.3008f, 39.5277f };
							break;
						case 3:
							Var0 = { 2718.1536f, 4314.578f, 45.8063f };
							break;
						case 4:
							Var0 = { 1681.8484f, 2514.129f, 44.5649f };
							break;
					}
					break;
				case 3:
					switch (bParam1)
					{
						case 0:
							Var0 = { 1883.5526f, -1038.1775f, 77.9114f };
							break;
						case 1:
							Var0 = { 532.6779f, -175.9999f, 53.5182f };
							break;
						case 2:
							Var0 = { -1370.041f, 145.2471f, 55.1749f };
							break;
						case 3:
							Var0 = { -1843.1736f, -1222.6248f, 12.0172f };
							break;
						case 4:
							Var0 = { 496.9435f, -3309.3408f, 5.0699f };
							break;
					}
					break;
				case 4:
					switch (bParam1)
					{
						case 0:
							Var0 = { 737.5259f, 1298.1493f, 359.296f };
							break;
						case 1:
							Var0 = { 855.9249f, -2342.031f, 29.3313f };
							break;
						case 2:
							Var0 = { 2311.147f, -2101.4346f, 4.7593f };
							break;
						case 3:
							Var0 = { 2332.7302f, 2582.8508f, 45.6677f };
							break;
						case 4:
							Var0 = { 2525.849f, -381.3248f, 91.9928f };
							break;
					}
					break;
			}
			break;
		case 1:
			switch (iParam2)
			{
				case 0:
					switch (bParam1)
					{
						case 0:
							Var0 = { -707.0764f, -120.0074f, 36.5922f };
							break;
						case 1:
							Var0 = { -1696.0033f, -443.9459f, 40.2671f };
							break;
						case 2:
							Var0 = { -789.0488f, -402.33f, 34.9388f };
							break;
						case 3:
							Var0 = { -754.5149f, -1061.6315f, 10.95f };
							break;
						case 4:
							Var0 = { -1674.8657f, 404.3879f, 87.9936f };
							break;
					}
					break;
				case 1:
					switch (bParam1)
					{
						case 0:
							Var0 = { 133.3449f, -372.5482f, 42.257f };
							break;
						case 1:
							Var0 = { 932.5692f, -4.6969f, 77.7649f };
							break;
						case 2:
							Var0 = { -133.423f, -26.4075f, 57.1028f };
							break;
						case 3:
							Var0 = { 50.0543f, -913.4272f, 28.8183f };
							break;
						case 4:
							Var0 = { 225.4608f, -29.0171f, 68.7371f };
							break;
					}
					break;
				case 2:
					switch (bParam1)
					{
						case 0:
							Var0 = { -299.8723f, -617.105f, 32.4082f };
							break;
						case 1:
							Var0 = { -549.9492f, -902.8572f, 22.8788f };
							break;
						case 2:
							Var0 = { -15.4556f, -1087.4534f, 25.6721f };
							break;
						case 3:
							Var0 = { -1039.15f, -1592.79f, 3.8447f };
							break;
						case 4:
							Var0 = { -871.0274f, -224.0974f, 38.4019f };
							break;
					}
					break;
				case 3:
					switch (bParam1)
					{
						case 0:
							Var0 = { 318.3301f, -179.1691f, 56.6632f };
							break;
						case 1:
							Var0 = { 164.1423f, -1282.7645f, 28.2341f };
							break;
						case 2:
							Var0 = { 1189.4916f, -1382.9866f, 34.1077f };
							break;
						case 3:
							Var0 = { 1002.1241f, -1856.8547f, 29.8898f };
							break;
						case 4:
							Var0 = { 1153.5549f, -469.6292f, 65.5486f };
							break;
					}
					break;
				case 4:
					switch (bParam1)
					{
						case 0:
							Var0 = { 234.9748f, -1772.6523f, 27.6514f };
							break;
						case 1:
							Var0 = { 429.9525f, -1519.8954f, 28.3023f };
							break;
						case 2:
							Var0 = { 64.8993f, -1416.8972f, 28.3117f };
							break;
						case 3:
							Var0 = { -692.3597f, -2287.1567f, 11.9528f };
							break;
						case 4:
							Var0 = { 662.7217f, -2672.8208f, 5.0812f };
							break;
					}
					break;
			}
			break;
		case 9:
			switch (func_348())
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							Var0 = { 1700.7347f, 3275.5322f, 40.1501f };
							break;
						case 1:
							Var0 = { -12.182f, 3040.162f, 39.806f };
							break;
						case 2:
							Var0 = { -2106.7024f, 2623.1267f, 0.1216f };
							break;
						case 3:
							Var0 = { 214.3879f, 2455.8562f, 55.6948f };
							break;
						case 4:
							Var0 = { 2124.3894f, 2907.4243f, 46.5752f };
							break;
					}
					break;
				case 1:
				case 7:
					switch (bParam3)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									Var0 = { 1700.7347f, 3275.5322f, 40.1501f };
									break;
								case 1:
									Var0 = { -12.182f, 3040.162f, 39.806f };
									break;
								case 2:
									Var0 = { -2106.7024f, 2623.1267f, 0.1216f };
									break;
								case 3:
									Var0 = { 214.3879f, 2455.8562f, 55.6948f };
									break;
								case 4:
									Var0 = { 2124.3894f, 2907.4243f, 46.5752f };
									break;
							}
							break;
						case 1:
							switch (iParam2)
							{
								case 0:
									Var0 = { 1717.1412f, 3263.1536f, 40.1444f };
									break;
								case 1:
									Var0 = { -3.0926f, 3021.231f, 39.6635f };
									break;
								case 2:
									Var0 = { -2116.218f, 2673.7395f, 1.8178f };
									break;
								case 3:
									Var0 = { 217.964f, 2436.037f, 57.85f };
									break;
								case 4:
									Var0 = { 2101.7163f, 2916.3945f, 46.8035f };
									break;
							}
							break;
						case 2:
							switch (iParam2)
							{
								case 0:
									Var0 = { 1693.0361f, 3244.8962f, 39.8872f };
									break;
								case 1:
									Var0 = { 22.1065f, 3048.6826f, 39.9493f };
									break;
								case 2:
									Var0 = { -2108.359f, 2643.3918f, 2.1806f };
									break;
								case 3:
									Var0 = { 229.8819f, 2455.8564f, 54.7963f };
									break;
								case 4:
									Var0 = { 2137.3223f, 2873.3276f, 45.837f };
									break;
							}
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							Var0 = { 1693.0361f, 3244.8962f, 39.8872f };
							break;
						case 1:
							Var0 = { 22.1065f, 3048.6826f, 39.9493f };
							break;
						case 2:
							Var0 = { -2108.359f, 2643.3918f, 2.1806f };
							break;
						case 3:
							Var0 = { 229.8819f, 2455.8564f, 54.7963f };
							break;
						case 4:
							Var0 = { 2137.3223f, 2873.3276f, 45.837f };
							break;
					}
					break;
			}
			break;
		case 8:
		case 7:
		case 11:
			switch (iParam2)
			{
				case 0:
					switch (bParam1)
					{
						case 0:
							Var0 = { -670.0045f, 849.1271f, 224.0524f };
							break;
						case 1:
							Var0 = { -400.403f, 876.396f, 230.2865f };
							break;
						case 2:
							Var0 = { -874.7065f, -25.0867f, 40.7714f };
							break;
						case 3:
							Var0 = { -537.2419f, 615.7321f, 136.7603f };
							break;
						case 4:
							Var0 = { -2174.3716f, -408.0548f, 12.2911f };
							break;
						case 5:
							Var0 = { -1554.3876f, 840.493f, 181.9932f };
							break;
						case 6:
							Var0 = { -1940.9934f, 1787.9861f, 172.0708f };
							break;
						case 7:
							Var0 = { -3015.4749f, 91.9937f, 10.6141f };
							break;
						case 8:
							Var0 = { -3174.3914f, 1108.5411f, 19.8395f };
							break;
						case 9:
							Var0 = { -1731.3015f, -194.1319f, 57.2888f };
							break;
						case 10:
							Var0 = { -2198.402f, 4260.8135f, 47.0475f };
							break;
						case 11:
							Var0 = { -187.4784f, 1554.4452f, 321.2434f };
							break;
						case 12:
							Var0 = { -2015.946f, 597.9245f, 116.7153f };
							break;
						case 13:
							Var0 = { 163.7828f, 474.4106f, 141.2679f };
							break;
						case 14:
							Var0 = { -1609.7881f, -816.7905f, 9.0389f };
							break;
						case 15:
							Var0 = { -36.5543f, 3023.273f, 39.906f };
							break;
						case 16:
							Var0 = { -2817.4788f, 2320.1743f, 1.6076f };
							break;
						case 17:
							Var0 = { -220.7927f, 3662.0562f, 63.4125f };
							break;
						case 18:
							Var0 = { -2512.1626f, 3610.0425f, 12.7256f };
							break;
						case 19:
							Var0 = { -1603.8721f, 3092.4167f, 31.5661f };
							break;
					}
					break;
				case 1:
					switch (bParam1)
					{
						case 0:
							Var0 = { -381.3748f, 282.9188f, 83.8448f };
							break;
						case 1:
							Var0 = { -106.229f, 909.09f, 235.2054f };
							break;
						case 2:
							Var0 = { -59.7287f, 1958.5195f, 189.1861f };
							break;
						case 3:
							Var0 = { 1101.413f, 2122.263f, 52.4739f };
							break;
						case 4:
							Var0 = { 1213.9872f, 2655.7063f, 36.81f };
							break;
						case 5:
							Var0 = { -1513.6312f, 1495.1249f, 114.6609f };
							break;
						case 6:
							Var0 = { 659.1781f, 603.3151f, 128.0561f };
							break;
						case 7:
							Var0 = { 79.8783f, -432.2236f, 36.553f };
							break;
						case 8:
							Var0 = { -285.1832f, 2546.9656f, 73.0644f };
							break;
						case 9:
							Var0 = { -1549.6068f, 118.4193f, 55.6403f };
							break;
						case 10:
							Var0 = { -512.8932f, 1184.8152f, 323.9306f };
							break;
						case 11:
							Var0 = { 2447.034f, 1583.6608f, 31.7203f };
							break;
						case 12:
							Var0 = { 2695.2861f, 2768.6914f, 36.883f };
							break;
						case 13:
							Var0 = { 2100.727f, 2332.2666f, 93.2854f };
							break;
						case 14:
							Var0 = { -877.3867f, -38.4123f, 37.7636f };
							break;
						case 15:
							Var0 = { 1458.1472f, 1113.4032f, 113.334f };
							break;
						case 16:
							Var0 = { -1161.0194f, 933.2432f, 196.7478f };
							break;
						case 17:
							Var0 = { 770.8779f, -233.7807f, 65.1145f };
							break;
						case 18:
							Var0 = { 2178.2253f, 3314.6758f, 45.0137f };
							break;
						case 19:
							Var0 = { 705.1279f, 3121.0967f, 42.8557f };
							break;
					}
					break;
				case 2:
					switch (bParam1)
					{
						case 0:
							Var0 = { 56.9063f, 3715.5032f, 38.7549f };
							break;
						case 1:
							Var0 = { 982.8329f, 3587.8691f, 32.5401f };
							break;
						case 2:
							Var0 = { 1941.305f, 3826.197f, 30.91f };
							break;
						case 3:
							Var0 = { 2932.4353f, 4307.926f, 49.8501f };
							break;
						case 4:
							Var0 = { -2093.3218f, 2623.675f, 0.1029f };
							break;
						case 5:
							Var0 = { -1911.57f, 2047.2981f, 139.7377f };
							break;
						case 6:
							Var0 = { 741.1844f, 2568.981f, 74.6179f };
							break;
						case 7:
							Var0 = { 2333.234f, 2553.3855f, 45.6677f };
							break;
						case 8:
							Var0 = { -299.0912f, 2834.3528f, 56.3827f };
							break;
						case 9:
							Var0 = { -2821.0476f, 1423.3333f, 99.8296f };
							break;
						case 10:
							Var0 = { 1800.9795f, 4611.315f, 36.1828f };
							break;
						case 11:
							Var0 = { 2615.0215f, 3263.9014f, 54.2129f };
							break;
						case 12:
							Var0 = { 1735.6095f, 3039.561f, 60.1301f };
							break;
						case 13:
							Var0 = { 1337.2615f, 4372.085f, 43.3327f };
							break;
						case 14:
							Var0 = { 787.413f, 4199.0054f, 42.0116f };
							break;
						case 15:
							Var0 = { 519.8339f, 3076.2349f, 39.2289f };
							break;
						case 16:
							Var0 = { 1373.7266f, 2172.6624f, 96.7173f };
							break;
						case 17:
							Var0 = { 2484.9785f, 4118.6846f, 37.0647f };
							break;
						case 18:
							Var0 = { 2378.74f, 5052.728f, 45.4446f };
							break;
						case 19:
							Var0 = { -255.3838f, 2194.5513f, 128.7711f };
							break;
					}
					break;
				case 3:
					switch (bParam1)
					{
						case 0:
							Var0 = { 1518.8007f, 785.9623f, 76.4403f };
							break;
						case 1:
							Var0 = { 1581.0769f, 2165.04f, 78.3579f };
							break;
						case 2:
							Var0 = { 2527.6206f, 2632.5574f, 36.9449f };
							break;
						case 3:
							Var0 = { 2709.9963f, 4145.5884f, 42.7586f };
							break;
						case 4:
							Var0 = { 1080.862f, -693.2229f, 56.9129f };
							break;
						case 5:
							Var0 = { 2126.9749f, 4795.901f, 40.1411f };
							break;
						case 6:
							Var0 = { 714.4439f, 4174.8945f, 39.7092f };
							break;
						case 7:
							Var0 = { -200.5495f, 3661.389f, 50.7431f };
							break;
						case 8:
							Var0 = { -589.3684f, 5303.4746f, 69.2145f };
							break;
						case 9:
							Var0 = { -1150.7759f, 4924.217f, 220.44f };
							break;
						case 10:
							Var0 = { 381.9156f, 3559.2659f, 32.7679f };
							break;
						case 11:
							Var0 = { 1752.8813f, 3322.9077f, 40.1889f };
							break;
						case 12:
							Var0 = { 1422.6189f, 4382.7534f, 42.9035f };
							break;
						case 13:
							Var0 = { 1830.3932f, 3834.776f, 32.322f };
							break;
						case 14:
							Var0 = { 1054.4926f, 2669.53f, 38.5525f };
							break;
						case 15:
							Var0 = { 2719.4187f, 3510.7598f, 60.526f };
							break;
						case 16:
							Var0 = { -691.6814f, 5774.155f, 16.331f };
							break;
						case 17:
							Var0 = { 1123.8881f, 3589.8884f, 30.4069f };
							break;
						case 18:
							Var0 = { -89.1929f, 6132.0366f, 29.3863f };
							break;
						case 19:
							Var0 = { 357.4159f, 4442.63f, 61.914f };
							break;
					}
					break;
				case 4:
					switch (bParam1)
					{
						case 0:
							Var0 = { -2531.017f, 2329.048f, 32.0599f };
							break;
						case 1:
							Var0 = { -1114.9017f, 2707.8047f, 22.8413f };
							break;
						case 2:
							Var0 = { 182.5478f, 3056.533f, 42.0161f };
							break;
						case 3:
							Var0 = { 1563.9586f, 3572.5676f, 32.76f };
							break;
						case 4:
							Var0 = { 2530.2039f, 4207.563f, 39.0731f };
							break;
						case 5:
							Var0 = { -1602.4337f, 235.0285f, 58.3189f };
							break;
						case 6:
							Var0 = { -65.4509f, 1895.882f, 195.0575f };
							break;
						case 7:
							Var0 = { 667.8909f, 1279.8309f, 359.296f };
							break;
						case 8:
							Var0 = { 2674.6284f, 1453.6962f, 23.5008f };
							break;
						case 9:
							Var0 = { 2941.7024f, 2781.8252f, 38.5054f };
							break;
						case 10:
							Var0 = { 892.1917f, 3649.8801f, 31.8108f };
							break;
						case 11:
							Var0 = { 1336.44f, 2751.4304f, 50.5583f };
							break;
						case 12:
							Var0 = { 2382.1096f, 3051.2532f, 47.1529f };
							break;
						case 13:
							Var0 = { 1945.1578f, 4623.212f, 39.4508f };
							break;
						case 14:
							Var0 = { -221.1028f, 1006.303f, 231.3454f };
							break;
						case 15:
							Var0 = { -682.4611f, 535.6774f, 109.7483f };
							break;
						case 16:
							Var0 = { 1215.7158f, 1871.8457f, 77.9239f };
							break;
						case 17:
							Var0 = { 2962.1875f, 3482.6863f, 70.3452f };
							break;
						case 18:
							Var0 = { 2131.3706f, 1937.6934f, 92.7868f };
							break;
						case 19:
							Var0 = { -3196.841f, 1307.0767f, 22.8526f };
							break;
					}
					break;
			}
			break;
		case 12:
			switch (iParam2)
			{
				case 0:
					Var0 = { -3006.4512f, -1739.2083f, 0.375f };
					break;
				case 1:
					Var0 = { 362.5889f, -4226.308f, 0f };
					break;
				case 2:
					Var0 = { -1197.3007f, -4122.952f, 0f };
					break;
				case 3:
					Var0 = { 3183.1943f, -3334.239f, 0.7499f };
					break;
				case 4:
					Var0 = { 2231.8628f, -4262.798f, 0f };
					break;
			}
			break;
		case 13:
			switch (iParam2)
			{
				case 0:
					Var0 = { 1141.957f, -4341.8564f, 0f };
					break;
				case 1:
					Var0 = { 2548.9612f, -3486.9917f, 0.375f };
					break;
				case 2:
					Var0 = { -2044.7532f, -4092.9949f, 0f };
					break;
				case 3:
					Var0 = { -2793.705f, -2629.2236f, 0.75f };
					break;
				case 4:
					Var0 = { -401.409f, -4391.101f, 0f };
					break;
			}
			break;
		default:
			switch (bParam3)
			{
				case 0:
					switch (bParam1)
					{
						case 0:
							Var0 = { -1143.777f, -2223.1814f, 12.1958f };
							break;
						case 1:
							Var0 = { -815.8469f, -771.4702f, 20.0395f };
							break;
						case 2:
							Var0 = { -247.3628f, -252.8104f, 35.519f };
							break;
						case 3:
							Var0 = { -20.1711f, -196.9198f, 51.3703f };
							break;
						case 4:
							Var0 = { -1206.2441f, 332.5545f, 69.9894f };
							break;
						case 5:
							Var0 = { -737.7712f, -271.9272f, 35.9486f };
							break;
						case 6:
							Var0 = { -10.6554f, -1032.7806f, 27.9804f };
							break;
						case 7:
							Var0 = { 203.926f, -1469.3774f, 28.1446f };
							break;
						case 8:
							Var0 = { 1242.2141f, -3156.2065f, 4.5283f };
							break;
						case 9:
							Var0 = { -3157.4482f, 1127.8721f, 19.844f };
							break;
						case 10:
							Var0 = { -1805.8086f, -406.731f, 43.6066f };
							break;
						case 11:
							Var0 = { -2091.8076f, -295.2459f, 12.0469f };
							break;
						case 12:
							Var0 = { 1499.6403f, -1888.1902f, 70.8845f };
							break;
						case 13:
							Var0 = { 521.9511f, -2731.8757f, 5.0571f };
							break;
						case 14:
							Var0 = { 620.4022f, 193.6013f, 97.381f };
							break;
						case 15:
							Var0 = { -2190.606f, -414.4555f, 12.1441f };
							break;
						case 16:
							Var0 = { 2528.0896f, -311.8917f, 91.9929f };
							break;
						case 17:
							Var0 = { 1475.0928f, 1140.7708f, 113.3343f };
							break;
						case 18:
							Var0 = { -164.1015f, 976.5763f, 234.9009f };
							break;
						case 19:
							Var0 = { -125.636f, -2244.6597f, 6.8117f };
							break;
					}
					break;
				case 1:
					switch (bParam1)
					{
						case 0:
							Var0 = { -1133.3865f, -2229.2734f, 12.1957f };
							break;
						case 1:
							Var0 = { -834.9979f, -771.7531f, 20.0186f };
							break;
						case 2:
							Var0 = { -242.6335f, -240.8987f, 35.519f };
							break;
						case 3:
							Var0 = { 1.871f, -202.816f, 51.742f };
							break;
						case 4:
							Var0 = { -1208.8444f, 340.3609f, 70.0006f };
							break;
						case 5:
							Var0 = { -727.7335f, -287.528f, 35.9482f };
							break;
						case 6:
							Var0 = { -28.01f, -1030.5559f, 27.8435f };
							break;
						case 7:
							Var0 = { 190.617f, -1454.1287f, 28.1416f };
							break;
						case 8:
							Var0 = { 1242.0881f, -3148.6748f, 4.5282f };
							break;
						case 9:
							Var0 = { -3170.3228f, 1126.0115f, 19.9681f };
							break;
						case 10:
							Var0 = { -1792.4104f, -394.6852f, 44.0166f };
							break;
						case 11:
							Var0 = { -2104.0642f, -294.0901f, 12.0469f };
							break;
						case 12:
							Var0 = { 1458.824f, -1937.2811f, 70.3057f };
							break;
						case 13:
							Var0 = { 529.5776f, -2736.3481f, 5.0569f };
							break;
						case 14:
							Var0 = { 602.5372f, 147.507f, 97.0363f };
							break;
						case 15:
							Var0 = { -2189.2864f, -384.7161f, 12.3121f };
							break;
						case 16:
							Var0 = { 2490.0193f, -332.8641f, 91.9927f };
							break;
						case 17:
							Var0 = { 1481.6548f, 1140.735f, 113.3343f };
							break;
						case 18:
							Var0 = { -130.6895f, 1005.8308f, 234.732f };
							break;
						case 19:
							Var0 = { -125.1937f, -2249.1235f, 6.8117f };
							break;
					}
					break;
				case 2:
					switch (bParam1)
					{
						case 0:
							Var0 = { -1190.6583f, -2196.3591f, 12.1951f };
							break;
						case 1:
							Var0 = { -810.0179f, -747.1166f, 22.3082f };
							break;
						case 2:
							Var0 = { -243.9944f, -218.211f, 35.519f };
							break;
						case 3:
							Var0 = { -47.888f, -188.9245f, 51.1469f };
							break;
						case 4:
							Var0 = { -1194.6648f, 323.0352f, 69.7224f };
							break;
						case 5:
							Var0 = { -703.6254f, -299.056f, 35.6984f };
							break;
						case 6:
							Var0 = { -20.652f, -1017.7872f, 27.9166f };
							break;
						case 7:
							Var0 = { 182.8745f, -1485.7114f, 28.1416f };
							break;
						case 8:
							Var0 = { 1242.4669f, -3142.3396f, 4.5282f };
							break;
						case 9:
							Var0 = { -3183.809f, 1088.8976f, 19.8407f };
							break;
						case 10:
							Var0 = { -1784.5775f, -378.8281f, 43.9675f };
							break;
						case 11:
							Var0 = { -2077.491f, -336.0633f, 12.1576f };
							break;
						case 12:
							Var0 = { 1484.1759f, -1923.2976f, 70.2404f };
							break;
						case 13:
							Var0 = { 492.0316f, -2718.3252f, 5.0576f };
							break;
						case 14:
							Var0 = { 611.6172f, 168.9255f, 97.2794f };
							break;
						case 15:
							Var0 = { -2205.85f, -370.1107f, 12.283f };
							break;
						case 16:
							Var0 = { 2527.8977f, -307.077f, 91.9929f };
							break;
						case 17:
							Var0 = { 1497.4729f, 1130.5264f, 113.3343f };
							break;
						case 18:
							Var0 = { -105.4721f, 1004.1418f, 234.7601f };
							break;
						case 19:
							Var0 = { -125.1227f, -2253.7258f, 6.8117f };
							break;
					}
					break;
			}
			break;
	}
	return Var0;
}

void func_411(var uParam0)//Position - 0x1EF85
{
	Local_157.f_522.f_12++;
	if (Local_157.f_522.f_12 < 5)
	{
		switch (Local_157.f_522.f_12)
		{
			case 1:
			case 2:
				*uParam0 = { *uParam0 + Vector(10f, 0f, 0f) };
				break;
			case 3:
				*uParam0 = { *uParam0 - Vector(30f, 0f, 0f) };
				break;
			case 4:
				*uParam0 = { *uParam0 - Vector(10f, 0f, 0f) };
				break;
		}
		if (uParam0->f_2 > 360f)
		{
			uParam0->f_2 = (uParam0->f_2 - 360f);
		}
	}
	else
	{
		Local_157.f_522.f_12 = 0;
		*uParam0 = { *uParam0 + Vector(20f, 0f, 0f) };
	}
}

void func_413(int iParam0)//Position - 0x1F05A
{
	int iVar0;
	iVar0 = NETWORK::NET_TO_VEH(Local_157.f_499[iParam0 /*6*/]);
	if (!VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(iVar0)))
	{
		VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iVar0, true);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iVar0, false);
	}
	VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(iVar0, true);
	VEHICLE::SET_VEHICLE_ENGINE_ON(iVar0, true, true, false);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_NON_SCRIPT_PLAYERS(iVar0, true);
	VEHICLE::SET_DONT_ALLOW_PLAYER_TO_ENTER_VEHICLE_IF_LOCKED_FOR_PLAYER(iVar0, true);
	if (func_384() || func_11())
	{
		if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("huntley"))
		{
			VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iVar0, 0);
		}
	}
	else if (func_12() || (func_215() && func_37(8)))
	{
		VEHICLE::SET_HELI_BLADES_FULL_SPEED(iVar0);
		ENTITY::SET_ENTITY_DYNAMIC(iVar0, true);
		PHYSICS::ACTIVATE_PHYSICS(iVar0);
		ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iVar0, true);
		if (func_37(8))
		{
			VEHICLE::DISABLE_VEHICLE_WEAPON(true, joaat("VEHICLE_WEAPON_SPACE_ROCKET"), iVar0, 0);
			VEHICLE::DISABLE_VEHICLE_WEAPON(true, joaat("WEAPON_VEHICLE_ROCKET"), iVar0, 0);
		}
	}
}

void func_415(int iParam0, var uParam1, var uParam2, bool bParam3)//Position - 0x1F167
{
	struct<3> Var0;
	if (bParam3)
	{
		*uParam1 = { __LIB_1__::func_406(ENTITY::GET_ENTITY_COORDS(iParam0, true), 50f, (50f * 1.5f), 10f) };
	}
	else
	{
		Var0 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, true), ENTITY::GET_ENTITY_HEADING(iParam0), 0f, 120f, 0f) };
		*uParam1 = { __LIB_1__::func_406(Var0, 25f, 50f, 10f) };
	}
	*uParam2 = __LIB_0__::func_932(*uParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true));
}

float func_418()//Position - 0x1F264
{
	if (func_12())
	{
		return 75f;
	}
	return 75f;
}

void func_419(int iParam0, var uParam1, var uParam2)//Position - 0x1F280
{
	struct<3> Var0;
	float fVar1;
	Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	fVar1 = func_418();
	*uParam1 = { __LIB_1__::func_406(Var0, 100f, 200f, fVar1) };
	uParam1->f_2 = fVar1;
	*uParam2 = __LIB_0__::func_932(*uParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true));
}

int func_420()//Position - 0x1F2C9
{
	switch (func_10())
	{
		case 12:
			if (func_37(8))
			{
				return joaat("buzzard");
			}
			else
			{
				return joaat("seashark");
			}
			break;
		case 5:
		case 6:
			return Local_157.f_545;
			break;
		case 11:
			if (Local_157.f_544 <= 1f)
			{
				return joaat("buzzard");
			}
			else
			{
				return joaat("valkyrie");
			}
			break;
	}
	return 0;
}

int func_421()//Position - 0x1F33F
{
	if (func_190() != 0)
	{
		return 0;
	}
	if (((func_215() || func_384()) || func_12()) || func_11())
	{
		if (Local_157.f_544 >= IntToFloat(func_425()))
		{
			return 0;
		}
	}
	if (__LIB_0__::func_864(&(Local_157.f_520)))
	{
		if (!__LIB_0__::func_937(&(Local_157.f_520), 3000, 0))
		{
			return 0;
		}
	}
	if (func_424())
	{
		if (func_37(9))
		{
			return 1;
		}
	}
	if (func_37(18))
	{
		if (func_384())
		{
			if (__LIB_0__::func_864(&(Local_157.f_518)))
			{
				return 0;
			}
		}
		return 1;
	}
	if (func_12())
	{
		if (Local_157.f_544 < 3f)
		{
			return 1;
		}
	}
	if (func_11())
	{
		if (__LIB_0__::func_864(&(Local_157.f_518)))
		{
			return 0;
		}
		if (Local_157.f_56 >= func_422())
		{
			if (func_385())
			{
				if (!func_2259(1))
				{
					Local_157.f_591 = MISC::GET_RANDOM_INT_IN_RANGE(0, func_21());
					func_24(1);
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_422()//Position - 0x1F44A
{
	switch (Local_157.f_582)
	{
		case 0:
			return func_423();
			break;
		case 1:
			return func_423() * 2;
			break;
		case 2:
			return func_423();
			break;
		case 3:
			return func_423();
			break;
		case 4:
			return func_423();
			break;
		case 5:
			return func_423() * 2;
			break;
		case 6:
		case 7:
			return func_423() * 3;
			break;
	}
	return -1;
}

int func_423()//Position - 0x1F4DA
{
	switch (func_10())
	{
		case 8:
		case 11:
		case 7:
			if (Global_1946098 <= 4)
			{
				return 3;
			}
			else if (Global_1946098 <= 9)
			{
				return 6;
			}
			else
			{
				return 10;
			}
			break;
		case 1:
		case 2:
		case 10:
			return 5;
	}
	return 1;
}

int func_424()//Position - 0x1F53B
{
	if ((func_37(10) || func_37(11)) || func_37(12))
	{
		return 1;
	}
	return 0;
}

int func_425()//Position - 0x1F569
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = Global_1946100;
	if (Global_1946098 == 1)
	{
		iVar1 = 3;
	}
	if (func_215())
	{
		switch (iVar1)
		{
			case 1:
			case 4:
				iVar0 = Global_262145.f_16778 /* Tunable: EXEC_SELL_SEAATTACKED_HARD_ENEMY_WAVES */;
				break;
			case 2:
				iVar0 = Global_262145.f_16777 /* Tunable: EXEC_SELL_SEAATTACKED_MEDIUM_ENEMY_WAVES */;
				break;
			case 3:
				iVar0 = Global_262145.f_16776 /* Tunable: EXEC_SELL_SEAATTACKED_EASY_ENEMY_WAVES */;
				break;
			default:
				iVar0 = Global_262145.f_16778 /* Tunable: EXEC_SELL_SEAATTACKED_HARD_ENEMY_WAVES */;
				break;
			}
	}
	if (func_384())
	{
		switch (iVar1)
		{
			case 1:
			case 4:
				iVar0 = Global_262145.f_16775 /* Tunable: EXEC_SELL_LAND_ATTACKED_HARD_ENEMY_WAVES */ * 2;
				if (iVar0 > 6)
				{
					iVar0 = 6;
				}
				break;
			case 2:
				iVar0 = Global_262145.f_16774 /* Tunable: EXEC_SELL_LAND_ATTACKED_MEDIUM_ENEMY_WAVES */ * 2;
				if (iVar0 > 6)
				{
					iVar0 = 6;
				}
				break;
			case 3:
				iVar0 = Global_262145.f_16773 /* Tunable: EXEC_SELL_LAND_ATTACKED_EASY_ENEMY_WAVES */ * 2;
				if (iVar0 > 6)
				{
					iVar0 = 6;
				}
				break;
			default:
				iVar0 = 6;
				break;
			}
	}
	if (func_12())
	{
		switch (iVar1)
		{
			case 1:
			case 4:
				iVar0 = Global_262145.f_16757 /* Tunable: EXEC_SELL_AIRATTACKED_HARD_HELICOPTERS */;
				if (iVar0 > 3)
				{
					iVar0 = 3;
				}
				break;
			case 2:
				iVar0 = Global_262145.f_16756 /* Tunable: EXEC_SELL_AIRATTACKED_MEDIUM_HELICOPTERS */;
				if (iVar0 > 3)
				{
					iVar0 = 3;
				}
				break;
			case 3:
				iVar0 = Global_262145.f_16755 /* Tunable: EXEC_SELL_AIRATTACKED_EASY_HELICOPTERS */;
				if (iVar0 > 3)
				{
					iVar0 = 3;
				}
				break;
			default:
				iVar0 = 3;
				break;
			}
	}
	if (func_11())
	{
		switch (iVar1)
		{
			case 1:
			case 4:
				iVar0 = Global_262145.f_16772 /* Tunable: EXEC_SELL_LAND_DEFEND_HARD_ENEMY_WAVES */ * 2;
				if (iVar0 > 6)
				{
					iVar0 = 6;
				}
				break;
			case 2:
				iVar0 = Global_262145.f_16771 /* Tunable: EXEC_SELL_LAND_DEFEND_MEDIUM_ENEMY_WAVES */ * 2;
				if (iVar0 > 6)
				{
					iVar0 = 6;
				}
				break;
			case 3:
				iVar0 = Global_262145.f_16770 /* Tunable: EXEC_SELL_LAND_DEFEND_EASY_ENEMY_WAVES */ * 2;
				if (iVar0 > 6)
				{
					iVar0 = 6;
				}
				break;
			default:
				iVar0 = 6;
				break;
			}
	}
	return iVar0;
}

void func_426()//Position - 0x1F72A
{
	bool bVar0;
	var uVar1;
	bool bVar2;
	if (func_212())
	{
		bVar2 = false;
		while (bVar2 < func_210())
		{
			func_441(bVar2);
			switch (func_440(bVar2))
			{
				case 0:
					break;
				case 1:
					if (func_207(bVar2))
					{
						func_389(bVar2, 2);
					}
					break;
				case 2:
					if (func_207(bVar2))
					{
						switch (func_10())
						{
							case 13:
							case 9:
								if (!ENTITY::IS_ENTITY_DEAD(func_439(bVar2), false))
								{
									if (func_37(6))
									{
										func_389(bVar2, func_438(bVar2));
									}
								}
								else
								{
									if (!func_37(6))
									{
										func_34(6);
									}
									func_389(bVar2, 18);
								}
								break;
							case 12:
								if (!ENTITY::IS_ENTITY_DEAD(func_197(bVar2), false))
								{
									func_389(bVar2, func_438(bVar2));
								}
								else
								{
									func_389(bVar2, 18);
								}
								break;
							case 5:
							case 6:
								if (!ENTITY::IS_ENTITY_DEAD(func_197(bVar2), false))
								{
									func_389(bVar2, func_438(bVar2));
								}
								else
								{
									func_389(bVar2, 18);
								}
								break;
							case 11:
								if (!ENTITY::IS_ENTITY_DEAD(func_197(bVar2), false))
								{
									if (BitTest(Local_157.f_549, func_437(bVar2)))
									{
										func_389(bVar2, func_438(bVar2));
									}
								}
								else
								{
									func_389(bVar2, 18);
								}
								break;
							}
					}
					break;
				case 6:
					if (func_207(bVar2))
					{
						if (ENTITY::IS_ENTITY_DEAD(func_439(bVar2), false))
						{
							func_389(bVar2, 18);
						}
						else
						{
							if (func_215() || func_384())
							{
								func_431(bVar2);
							}
							if (BitTest(Local_157.f_548, bVar2))
							{
								func_389(bVar2, 14);
							}
							if (func_12())
							{
								if (func_430() == func_422() || func_372() > 1)
								{
									func_389(bVar2, 12);
								}
							}
						}
					}
					break;
				case 9:
					if (func_207(bVar2))
					{
						if (ENTITY::IS_ENTITY_DEAD(func_439(bVar2), false))
						{
							func_389(bVar2, 18);
						}
						else
						{
							if (func_215() || func_384())
							{
								func_431(bVar2);
							}
							if (func_12())
							{
								if (func_429())
								{
									func_389(bVar2, 13);
								}
							}
							if (BitTest(Local_157.f_548, bVar2))
							{
								func_389(bVar2, 14);
							}
						}
					}
					break;
				case 8:
					if (func_207(bVar2))
					{
						if (ENTITY::IS_ENTITY_DEAD(func_439(bVar2), false))
						{
							func_389(bVar2, 18);
						}
						else
						{
							if ((func_215() || func_384()) || func_12())
							{
								func_431(bVar2);
							}
							if (func_12())
							{
								if (func_430() == func_422() || func_372() > 1)
								{
									func_389(bVar2, 13);
								}
								else if (func_428(bVar2))
								{
									if (func_427(bVar2, &uVar1, 1132068864))
									{
										Local_157.f_591 = uVar1;
										func_389(bVar2, 9);
									}
								}
							}
							if (func_11())
							{
								bVar0 = func_437(bVar2);
								if (bVar0 > -1)
								{
									if (BitTest(Local_157.f_550, bVar0))
									{
										if (PED::IS_PED_IN_ANY_VEHICLE(func_197(bVar2), false))
										{
											func_389(bVar2, 17);
										}
									}
								}
							}
						}
					}
					break;
				case 12:
					break;
				case 13:
					break;
				case 17:
					if (func_11())
					{
						if (func_207(bVar2))
						{
							if (!ENTITY::IS_ENTITY_DEAD(func_439(bVar2), false))
							{
								if (!PED::IS_PED_IN_ANY_VEHICLE(func_197(bVar2), false))
								{
									func_389(bVar2, 8);
								}
							}
						}
					}
					break;
				case 14:
					if (func_207(bVar2))
					{
						if (ENTITY::IS_ENTITY_DEAD(func_439(bVar2), false))
						{
							func_389(bVar2, 18);
						}
						else
						{
							if (func_372() > 1)
							{
								func_389(bVar2, 10);
							}
							func_431(bVar2);
						}
					}
					break;
				case 15:
					break;
				case 16:
					break;
				case 18:
					break;
				case 19:
					break;
			}
			bVar2++;
		}
	}
}

int func_427(bool bParam0, var uParam1, float fParam2)//Position - 0x1FAFF
{
	float fVar0;
	int iVar1;
	fVar0 = (fParam2 * fParam2);
	iVar1 = 0;
	while (iVar1 < func_21())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_35[iVar1]))
		{
			if (__LIB_0__::func_939(Local_157.f_35[iVar1]))
			{
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_157.f_35[iVar1]), -1, false) != 0)
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(Local_157.f_400[bParam0 /*8*/]), false), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_157.f_35[iVar1]), true)) <= fVar0)
					{
						*uParam1 = iVar1;
						return 1;
					}
				}
			}
		}
		iVar1++;
	}
	return 0;
}

int func_428(bool bParam0)//Position - 0x1FB93
{
	if (func_12())
	{
		switch (bParam0)
		{
			case 0:
			case 4:
			case 8:
				return 1;
			}
		default:
	}
	return 0;
}

bool func_429()//Position - 0x1FBC0
{
	return func_430() == func_422();
}

int func_430()//Position - 0x1FBD1
{
	return Local_157.f_56;
}

void func_431(bool bParam0)//Position - 0x1FBDE
{
	float fVar0;
	float fVar1;
	bool bVar2;
	int iVar3;
	struct<3> Var4;
	float fVar5;
	float fVar6;
	fVar0 = func_436();
	fVar1 = func_435();
	iVar3 = func_434(bParam0, &bVar2);
	if (ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		if (!BitTest(Local_157.f_547, bParam0))
		{
			if (__LIB_0__::func_76(func_439(bParam0), iVar3, 1) > fVar0)
			{
				MISC::SET_BIT(&(Local_157.f_547), bParam0);
			}
			else if (__LIB_0__::func_76(func_439(bParam0), iVar3, 1) > fVar1)
			{
				if (!__LIB_0__::func_864(&(Local_157.f_400[bParam0 /*8*/].f_6)))
				{
					__LIB_0__::func_795(&(Local_157.f_400[bParam0 /*8*/].f_6), 0, 0);
				}
				else if (__LIB_0__::func_937(&(Local_157.f_400[bParam0 /*8*/].f_6), func_432(), 0))
				{
					MISC::SET_BIT(&(Local_157.f_547), bParam0);
				}
			}
			else if (__LIB_0__::func_864(&(Local_157.f_400[bParam0 /*8*/].f_6)))
			{
				__LIB_0__::clearF_1Prop(&(Local_157.f_400[bParam0 /*8*/].f_6));
			}
		}
		if (func_384())
		{
			if (!BitTest(Local_157.f_547, bParam0))
			{
				if (!BitTest(Local_157.f_548, bParam0))
				{
					if (Local_157.f_71[bVar2] >= 0)
					{
						Var4 = { func_410(func_10(), Local_157.f_71[bVar2], Local_157.f_384, bVar2) };
						fVar5 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(func_439(bParam0), false), Var4, true);
						if (fVar5 < 100f)
						{
							MISC::SET_BIT(&(Local_157.f_548), bParam0);
						}
					}
				}
			}
		}
		else if (func_12())
		{
			if (!BitTest(Local_157.f_547, bParam0))
			{
				if (!BitTest(Local_157.f_548, bParam0))
				{
					if (func_430() == (func_422() - 1))
					{
						if (Local_157.f_71[bVar2] >= 0)
						{
							Var4 = { func_410(func_10(), Local_157.f_71[bVar2], Local_157.f_384, bVar2) };
							fVar6 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(func_439(bParam0), false), Var4, true);
							if (fVar6 < 100f)
							{
								MISC::SET_BIT(&(Local_157.f_548), bParam0);
							}
						}
					}
				}
			}
		}
	}
}

int func_432()//Position - 0x1FDBA
{
	if (func_12())
	{
		return 100000;
	}
	return 10000;
}

int func_434(bool bParam0, var uParam1)//Position - 0x1FE31
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	fVar1 = 9999.99f;
	iVar3 = -1;
	if (func_385())
	{
		iVar0 = 0;
		while (iVar0 < func_21())
		{
			if (ENTITY::DOES_ENTITY_EXIST(func_40(iVar0)))
			{
				fVar2 = __LIB_0__::func_76(NETWORK::NET_TO_PED(Local_157.f_400[bParam0 /*8*/]), func_40(iVar0), 1);
				if (fVar2 < fVar1)
				{
					fVar1 = fVar2;
					iVar3 = func_40(iVar0);
					*uParam1 = iVar0;
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar3 = func_40(0);
		*uParam1 = 0;
	}
	return iVar3;
}

float func_435()//Position - 0x1FEB0
{
	if (func_12())
	{
		return 1000f;
	}
	return 200f;
}

float func_436()//Position - 0x1FECC
{
	if (func_12())
	{
		return 2000f;
	}
	return 400f;
}

int func_437(bool bParam0)//Position - 0x1FEE8
{
	switch (func_10())
	{
		case 11:
			switch (bParam0)
			{
				case 0:
				case 1:
				case 2:
				case 3:
					return 0;
				case 4:
				case 5:
				case 6:
				case 7:
					return 1;
				case 8:
				case 9:
				case 10:
				case 11:
					return 2;
				default:
			}
			break;
		case 6:
			switch (func_210())
			{
				case 4:
					switch (bParam0)
					{
						case 0:
						case 1:
							return 0;
						case 2:
						case 3:
							return 1;
							break;
					}
					break;
				case 6:
					switch (bParam0)
					{
						case 0:
						case 1:
						case 2:
							return 0;
						case 3:
						case 4:
						case 5:
							return 1;
							break;
					}
					break;
				case 8:
					switch (bParam0)
					{
						case 0:
						case 1:
						case 2:
						case 3:
							return 0;
						case 4:
						case 5:
						case 6:
						case 7:
							return 1;
							break;
					}
					break;
			}
			break;
	}
	return -1;
}

int func_438(bool bParam0)//Position - 0x2004A
{
	var uVar0;
	switch (func_10())
	{
		case 13:
		case 9:
		case 6:
			return 8;
		case 12:
			if (func_37(8))
			{
				switch (bParam0)
				{
					case 0:
						return 9;
					case 1:
					case 2:
					case 3:
						return 8;
					default:
				}
			}
			else
			{
				switch (bParam0)
				{
					case 0:
					case 2:
						return 6;
					case 1:
					case 3:
						return 8;
					}
				default:
			}
			break;
		case 5:
			switch (bParam0)
			{
				case 0:
				case 2:
					return 6;
				case 1:
				case 3:
					return 8;
				default:
			}
			break;
		case 11:
			switch (bParam0)
			{
				case 0:
				case 4:
				case 8:
					if (func_427(bParam0, &uVar0, 600f))
					{
						Local_157.f_591 = uVar0;
						return 9;
					}
					else
					{
						return 8;
					}
					break;
				case 1:
				case 2:
				case 3:
				case 5:
				case 6:
				case 7:
				case 9:
				case 10:
				case 11:
					return 8;
			}
			break;
	}
	return 2;
}

int func_439(bool bParam0)//Position - 0x2018F
{
	if (func_207(bParam0))
	{
		return NETWORK::NET_TO_ENT(Local_157.f_400[bParam0 /*8*/]);
	}
	return 0;
}

int func_440(bool bParam0)//Position - 0x201B2
{
	return Local_157.f_400[bParam0 /*8*/].f_5;
}

void func_441(bool bParam0)//Position - 0x201C6
{
	if (!func_11())
	{
		return;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_400[bParam0 /*8*/]))
	{
		if (__LIB_0__::func_951(Local_157.f_400[bParam0 /*8*/]))
		{
			if (!BitTest(Local_157.f_497, bParam0))
			{
				MISC::SET_BIT(&(Local_157.f_497), bParam0);
				Local_157.f_498++;
			}
		}
		else if (BitTest(Local_157.f_497, bParam0))
		{
			MISC::CLEAR_BIT(&(Local_157.f_497), bParam0);
		}
	}
	else if (BitTest(Local_157.f_497, bParam0))
	{
		MISC::CLEAR_BIT(&(Local_157.f_497), bParam0);
	}
}

void func_443()//Position - 0x20277
{
	bool bVar0;
	bVar0 = false;
	while (bVar0 < func_21())
	{
		if (func_41(bVar0))
		{
			if (!func_37(17))
			{
				if (func_274())
				{
					if (func_445(bVar0))
					{
						if (!ENTITY::IS_ENTITY_IN_WATER(func_40(bVar0)))
						{
							if (!__LIB_0__::func_864(&(Local_157.f_562[bVar0 /*2*/])))
							{
								__LIB_0__::func_795(&(Local_157.f_562[bVar0 /*2*/]), 0, 0);
							}
							else if (__LIB_0__::func_937(&(Local_157.f_562[bVar0 /*2*/]), __LIB_21__::func_122(), 0))
							{
								func_34(17);
							}
						}
						else if (__LIB_0__::func_864(&(Local_157.f_562[bVar0 /*2*/])))
						{
							__LIB_0__::clearF_1Prop(&(Local_157.f_562[bVar0 /*2*/]));
						}
					}
				}
			}
		}
		bVar0++;
	}
}

int func_445(bool bParam0)//Position - 0x20334
{
	if (__LIB_0__::func_724(func_40(bParam0), Local_157.f_10[bParam0 /*3*/], 1) > 10f)
	{
		return 1;
	}
	if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), func_40(bParam0), 1) < 100f)
	{
		return 1;
	}
	switch (bParam0)
	{
		case 0:
			if (func_37(10))
			{
				return 1;
			}
			break;
		case 1:
			if (func_37(11))
			{
				return 1;
			}
			break;
		case 2:
			if (func_37(12))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_447()//Position - 0x203FF
{
	int iVar0;
	bool bVar1;
	int iVar2;
	if (func_385())
	{
		bVar1 = false;
		while (bVar1 < func_21())
		{
			if (ENTITY::DOES_ENTITY_EXIST(func_40(bVar1)) && !func_185(bVar1))
			{
				func_448(func_40(bVar1), bVar1, &iVar0);
				if (Local_157.f_71[bVar1] != iVar0)
				{
					Local_157.f_71[bVar1] = iVar0;
				}
				iVar0 = 0;
			}
			bVar1++;
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(func_40(0)))
	{
		func_448(func_40(0), 0, &iVar2);
		if (Local_157.f_71[0] != iVar2)
		{
			Local_157.f_71[0] = iVar2;
		}
	}
}

void func_448(int iParam0, bool bParam1, var uParam2)//Position - 0x20498
{
	bool bVar0;
	int iVar1;
	struct<3> Var2;
	float fVar3;
	float fVar4;
	int iVar5;
	fVar4 = 10000000f;
	if (!func_429())
	{
		if (func_459())
		{
			iVar1 = func_458(bParam1);
			if (iVar1 < 10)
			{
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_157.f_75[iVar1 /*30*/][bParam1]))
				{
					iVar5 = NETWORK::NET_TO_ENT(Local_157.f_75[iVar1 /*30*/][bParam1]);
				}
			}
		}
		else
		{
			iVar5 = iParam0;
		}
		if (func_457())
		{
			if (Local_157.f_67[bParam1] != -1)
			{
				if (iVar1 >= 4)
				{
					Local_157.f_67[bParam1] = -1;
				}
			}
		}
		bVar0 = false;
		while (bVar0 < 20)
		{
			if (BitTest(Local_157.f_61[bParam1], bVar0) && !func_456(bVar0, bParam1))
			{
				Var2 = { func_410(func_10(), bVar0, Local_157.f_384, bParam1) };
				fVar3 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var2, ENTITY::GET_ENTITY_COORDS(iParam0, false), true);
				if (fVar3 < fVar4)
				{
					fVar4 = fVar3;
					*uParam2 = bVar0;
				}
			}
			bVar0++;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar5) && !ENTITY::IS_ENTITY_DEAD(iVar5, false))
		{
			if (func_218())
			{
				if (func_23(bParam1))
				{
					func_22(bParam1);
				}
			}
			else if (func_452(func_410(func_10(), *uParam2, Local_157.f_384, bParam1), iVar5, 1))
			{
				func_451(*uParam2, bParam1);
				if (func_459() && !func_337())
				{
					AUDIO::PLAY_SOUND_FROM_COORD(-1, "Drop_Package", func_450(bParam1, 0), "DLC_Exec_Land_Multiple_Sounds", true, 0, false);
				}
				if (func_385())
				{
					if (func_458(bParam1) == func_449())
					{
						func_22(bParam1);
					}
				}
				else if (func_429())
				{
					func_22(bParam1);
				}
			}
		}
	}
}

int func_449()//Position - 0x20625
{
	return (func_422() / func_21());
}

Vector3 func_450(bool bParam0, bool bParam1)//Position - 0x20636
{
	struct<3> Var0;
	if (func_41(bParam0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(func_42(bParam0), true) };
	}
	if (bParam1)
	{
		Var0 = { Var0 + Vector(0f, 5f, 5f) };
	}
	return Var0;
}

void func_451(int iParam0, bool bParam1)//Position - 0x2066B
{
	int iVar0;
	if (func_385())
	{
		if (bParam1 == 0)
		{
			Local_157.f_57++;
		}
		else if (bParam1 == 1)
		{
			Local_157.f_58++;
		}
		else
		{
			Local_157.f_59++;
		}
	}
	Local_157.f_56++;
	if (func_337())
	{
		iVar0 = 0;
		while (iVar0 < func_21())
		{
			MISC::CLEAR_BIT(&(Local_157.f_61[iVar0]), iParam0);
			iVar0++;
		}
	}
	else
	{
		MISC::CLEAR_BIT(&(Local_157.f_61[bParam1]), iParam0);
	}
}

int func_452(struct<3> Param0, int iParam1, bool bParam2)//Position - 0x206F9
{
	if (ENTITY::IS_ENTITY_AT_COORD(iParam1, Param0, func_453(bParam2, 0), false, true, 0))
	{
		return 1;
	}
	return 0;
}

Vector3 func_453(bool bParam0, bool bParam1)//Position - 0x2071D
{
	if (func_337())
	{
		if (func_218())
		{
			if (bParam1)
			{
				return (150f * 4f), (150f * 4f), (150f * 1.5f);
			}
			else
			{
				return (150f * 1.5f), (150f * 1.5f), (150f * 1.5f);
			}
		}
		else
		{
			return (150f / 2f), (150f / 2f), (150f * 1.5f);
		}
	}
	else if (func_455() || func_454())
	{
		if (bParam0)
		{
			return (20f * 1.5f), (20f * 1.5f), 3f;
		}
		else
		{
			return (20f * 1.2f), (20f * 1.2f), 3f;
		}
	}
	if (func_274())
	{
		return (3f * 3f), (3f * 3f), (3f * 1.5f);
	}
	return 3f, 3f, 3f;
}

bool func_454()//Position - 0x20804
{
	return func_10() == 2;
}

bool func_455()//Position - 0x20812
{
	return func_10() == 1;
}

int func_456(bool bParam0, int iParam1)//Position - 0x20820
{
	int iVar0;
	if (iParam1 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (bParam0 == Local_157.f_67[iVar0])
			{
				return 1;
			}
			iVar0++;
		}
	}
	else if (bParam0 == Local_157.f_67[iParam1])
	{
		return 1;
	}
	return 0;
}

bool func_457()//Position - 0x20868
{
	return func_10() == 10;
}

int func_458(bool bParam0)//Position - 0x20877
{
	if (func_385())
	{
		switch (bParam0)
		{
			case 0:
				return Local_157.f_57;
			case 1:
				return Local_157.f_58;
			case 2:
				return Local_157.f_59;
			default:
		}
	}
	else
	{
		return Local_157.f_56;
	}
	return 0;
}

int func_459()//Position - 0x208C3
{
	if ((func_337() || (func_455() && func_430() < (func_422() - 1))) || (func_454() && func_430() < (func_422() - 1)))
	{
		return 1;
	}
	return 0;
}

void func_460()//Position - 0x2090B
{
	bool bVar0;
	int iVar1;
	int iVar2;
	if (func_459())
	{
		if (func_470())
		{
			bVar0 = false;
			while (bVar0 < func_21())
			{
				iVar1 = (26 + bVar0);
				iVar2 = iVar1;
				if (func_37(iVar2))
				{
					if (Local_157.f_376[bVar0] < 10)
					{
						switch (Local_157.f_380[bVar0])
						{
							case 0:
								Local_157.f_380[bVar0]++;
								break;
							case 1:
								if (BitTest(Local_157.f_592, bVar0))
								{
									if (func_41(bVar0) && func_464(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(func_42(bVar0), func_469()), func_468(bVar0), bVar0))
									{
										Local_157.f_376[bVar0]++;
										func_2(iVar2);
										Local_157.f_380[bVar0] = 0;
										MISC::CLEAR_BIT(&(Local_157.f_592), bVar0);
									}
								}
								else
								{
									func_2(iVar2);
								}
								break;
							}
						}
				}
				bVar0++;
			}
		}
	}
	func_461();
}

void func_461()//Position - 0x20A04
{
	struct<3> Var0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	iVar5 = 0;
	while (iVar5 < func_21())
	{
		iVar4 = 0;
		while (iVar4 < 10)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_157.f_75[iVar4 /*30*/][iVar5]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_75[iVar4 /*30*/][iVar5]))
			{
				if (__LIB_0__::func_953(Local_157.f_75[iVar4 /*30*/][iVar5]))
				{
					ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_ENT(Local_157.f_75[iVar4 /*30*/][iVar5]), 0, 0f, 0f, 10f, false, false, true, false);
				}
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_157.f_75[iVar4 /*30*/][iVar5]) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_157.f_75[iVar4 /*30*/][iVar5]) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
				{
					if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_157.f_75[iVar4 /*30*/].f_4[iVar5]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_75[iVar4 /*30*/].f_4[iVar5]))
					{
						iVar2 = NETWORK::NET_TO_OBJ(Local_157.f_75[iVar4 /*30*/][iVar5]);
						iVar3 = NETWORK::NET_TO_OBJ(Local_157.f_75[iVar4 /*30*/].f_4[iVar5]);
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_157.f_75[iVar4 /*30*/].f_4[iVar5]) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_157.f_75[iVar4 /*30*/].f_4[iVar5]) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
						{
							if (__LIB_0__::func_953(Local_157.f_75[iVar4 /*30*/][iVar5]) && __LIB_0__::func_953(Local_157.f_75[iVar4 /*30*/].f_4[iVar5]))
							{
								if (!BitTest(Local_157.f_75[iVar4 /*30*/].f_12[iVar5], 2) && !BitTest(Local_158[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_3[iVar5], 2))
								{
									if (BitTest(Local_157.f_75[iVar4 /*30*/].f_12[iVar5], 1) || BitTest(Local_158[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_3[iVar5], 1))
									{
										if (ENTITY::DOES_ENTITY_EXIST(iVar3))
										{
											if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iVar3, "P_cargo_chute_S", "P_cargo_chute_S_crumple", 3))
											{
												MISC::SET_BIT(&(Local_158[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_3[iVar5]), 2);
												__LIB_1__::func_445(&(Local_157.f_75[iVar4 /*30*/].f_4[iVar5]));
												__LIB_1__::func_445(&(Local_157.f_75[iVar4 /*30*/][iVar5]));
												MISC::CLEAR_BIT(&(Local_158[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_3[iVar5]), 0);
												MISC::CLEAR_BIT(&(Local_158[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_3[iVar5]), 1);
												MISC::CLEAR_BIT(&(Local_158[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_3[iVar5]), 2);
											}
										}
									}
								}
								if (!BitTest(Local_157.f_75[iVar4 /*30*/].f_12[iVar5], 1) && !BitTest(Local_158[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_3[iVar5], 1))
								{
									if (BitTest(Local_157.f_75[iVar4 /*30*/].f_12[iVar5], 0) || BitTest(Local_158[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_3[iVar5], 0))
									{
										if (ENTITY::DOES_ENTITY_EXIST(iVar3))
										{
											if (ENTITY::IS_ENTITY_PLAYING_ANIM(iVar3, "P_cargo_chute_S", "P_cargo_chute_S_crumple", 3))
											{
												MISC::SET_BIT(&(Local_158[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_3[iVar5]), 1);
											}
										}
									}
								}
								if (!BitTest(Local_157.f_75[iVar4 /*30*/].f_12[iVar5], 0))
								{
									if (func_462(iVar4, iVar5, iVar2))
									{
										ENTITY::PLAY_ENTITY_ANIM(iVar3, "P_cargo_chute_S_crumple", "P_cargo_chute_S", 1000f, false, false, false, 0f, 0);
										MISC::SET_BIT(&(Local_157.f_75[iVar4 /*30*/].f_12[iVar5]), 0);
										AUDIO::PLAY_SOUND_FROM_ENTITY(Local_118.f_360, "Parachute_Land", iVar3, "DLC_Exec_Air_Drop_Sounds", false, 0);
									}
									else
									{
										PHYSICS::SET_DAMPING(iVar2, 2, 0.0245f);
									}
								}
							}
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iVar2))
					{
						Var0 = { ENTITY::GET_ENTITY_COORDS(iVar2, true) };
						if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &fVar1, false, false))
						{
							if (Var0.f_2 < fVar1 && !ENTITY::IS_ENTITY_IN_WATER(iVar2))
							{
								if (__LIB_0__::func_953(Local_157.f_75[iVar4 /*30*/][iVar5]))
								{
									ENTITY::SET_ENTITY_COORDS(iVar2, Var0.f_0, Var0.f_1, fVar1, true, false, false, true);
								}
							}
						}
					}
					if (func_35())
					{
						if (!__LIB_0__::func_864(&(Local_157.f_75[iVar4 /*30*/].f_23[iVar5 /*2*/])))
						{
							__LIB_0__::func_795(&(Local_157.f_75[iVar4 /*30*/].f_23[iVar5 /*2*/]), 0, 0);
						}
						else if (__LIB_0__::func_937(&(Local_157.f_75[iVar4 /*30*/].f_23[iVar5 /*2*/]), 30000, 0))
						{
							__LIB_1__::func_387(&(Local_157.f_75[iVar4 /*30*/][iVar5]));
						}
					}
				}
			}
			iVar4++;
		}
		iVar5++;
	}
}

int func_462(int iParam0, int iParam1, int iParam2)//Position - 0x20E24
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return 0;
	}
	if (__LIB_0__::func_937(&(Local_157.f_75[iParam0 /*30*/].f_16[iParam1 /*2*/]), 3000, 0))
	{
		if (!ENTITY::IS_ENTITY_IN_AIR(iParam2))
		{
			return 1;
		}
	}
	if (ENTITY::IS_ENTITY_IN_WATER(iParam2))
	{
		return 1;
	}
	if (func_463(iParam2))
	{
		return 1;
	}
	return 0;
}

int func_463(int iParam0)//Position - 0x20E7D
{
	float fVar0;
	fVar0 = ENTITY::GET_ENTITY_PITCH(iParam0);
	if (fVar0 > 10f || fVar0 < -10f)
	{
		return 1;
	}
	fVar0 = ENTITY::GET_ENTITY_ROLL(iParam0);
	if (fVar0 > 10f || fVar0 < -10f)
	{
		return 1;
	}
	return 0;
}

int func_464(struct<3> Param0, float fParam1, bool bParam2)//Position - 0x20ED0
{
	struct<3> Var0;
	struct<3> Var1;
	int iVar2;
	iVar2 = Local_157.f_376[bParam2];
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_157.f_75[iVar2 /*30*/][bParam2]))
	{
		if (NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
		{
			Local_157.f_75[iVar2 /*30*/][bParam2] = NETWORK::OBJ_TO_NET(OBJECT::CREATE_PORTABLE_PICKUP(joaat("PICKUP_PORTABLE_CRATE_UNFIXED_INCAR"), Param0 + Var0, false, func_467()));
			ENTITY::SET_ENTITY_HEADING(NETWORK::NET_TO_OBJ(Local_157.f_75[iVar2 /*30*/][bParam2]), fParam1);
			NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(Local_157.f_75[iVar2 /*30*/][bParam2], true);
			ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_OBJ(Local_157.f_75[iVar2 /*30*/][bParam2]), true);
			OBJECT::SET_OBJECT_FORCE_VEHICLES_TO_AVOID(NETWORK::NET_TO_OBJ(Local_157.f_75[iVar2 /*30*/][bParam2]), true);
			OBJECT::SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(NETWORK::NET_TO_OBJ(Local_157.f_75[iVar2 /*30*/][bParam2]), true);
			ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(NETWORK::NET_TO_OBJ(Local_157.f_75[iVar2 /*30*/][bParam2]), false);
			PHYSICS::ACTIVATE_PHYSICS(NETWORK::NET_TO_OBJ(Local_157.f_75[iVar2 /*30*/][bParam2]));
			ENTITY::SET_ENTITY_VELOCITY(NETWORK::NET_TO_OBJ(Local_157.f_75[iVar2 /*30*/][bParam2]), 0f, 0f, -0.2f);
			OBJECT::PREVENT_COLLECTION_OF_PORTABLE_PICKUP(NETWORK::NET_TO_OBJ(Local_157.f_75[iVar2 /*30*/][bParam2]), true, false);
			ENTITY::SET_ENTITY_LOD_DIST(NETWORK::NET_TO_OBJ(Local_157.f_75[iVar2 /*30*/][bParam2]), 1200);
			if (__LIB_0__::func_864(&(Local_157.f_75[iVar2 /*30*/].f_23[bParam2 /*2*/])))
			{
				__LIB_0__::clearF_1Prop(&(Local_157.f_75[iVar2 /*30*/].f_23[bParam2 /*2*/]));
			}
		}
	}
	if (func_337())
	{
		if (NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_157.f_75[iVar2 /*30*/][bParam2]))
			{
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_157.f_75[iVar2 /*30*/].f_4[bParam2]))
				{
					Var1 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_157.f_75[iVar2 /*30*/][bParam2]), true) };
					if (__LIB_1__::func_671(&(Local_157.f_75[iVar2 /*30*/].f_4[bParam2]), __LIB_30__::func_765(), Var1 + Vector(1f, 0f, 0f), 1, 1, 0, 1, 0, 0, 0))
					{
						ENTITY::ATTACH_ENTITY_TO_ENTITY(NETWORK::NET_TO_OBJ(Local_157.f_75[iVar2 /*30*/].f_4[bParam2]), NETWORK::NET_TO_OBJ(Local_157.f_75[iVar2 /*30*/][bParam2]), 0, 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
						OBJECT::SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(NETWORK::NET_TO_OBJ(Local_157.f_75[iVar2 /*30*/].f_4[bParam2]), true);
						ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(NETWORK::NET_TO_OBJ(Local_157.f_75[iVar2 /*30*/].f_4[bParam2]), false);
						ENTITY::PLAY_ENTITY_ANIM(NETWORK::NET_TO_OBJ(Local_157.f_75[iVar2 /*30*/].f_4[bParam2]), "P_cargo_chute_S_deploy", "P_cargo_chute_S", 1000f, false, false, false, 0f, 0);
						ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(NETWORK::NET_TO_OBJ(Local_157.f_75[iVar2 /*30*/].f_4[bParam2]));
						ENTITY::SET_ENTITY_LOD_DIST(NETWORK::NET_TO_OBJ(Local_157.f_75[iVar2 /*30*/].f_4[bParam2]), 1200);
						__LIB_0__::clearF_1Prop(&(Local_157.f_75[iVar2 /*30*/].f_16[bParam2 /*2*/]));
					}
				}
			}
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_157.f_75[iVar2 /*30*/][bParam2]) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_157.f_75[iVar2 /*30*/].f_4[bParam2]))
			{
				return 1;
			}
		}
	}
	else if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_157.f_75[iVar2 /*30*/][bParam2]))
	{
		return 1;
	}
	return 0;
}

int func_467()//Position - 0x21286
{
	if (func_35())
	{
		return joaat("ex_prop_adv_case_sm");
	}
	else if (func_337())
	{
		return joaat("ex_prop_adv_case_sm_flash");
	}
	return joaat("prop_drug_package");
}

float func_468(bool bParam0)//Position - 0x212B4
{
	float fVar0;
	if (func_41(bParam0))
	{
		fVar0 = ENTITY::GET_ENTITY_HEADING(func_42(bParam0));
	}
	return fVar0;
}

Vector3 func_469()//Position - 0x212D3
{
	if (!func_337())
	{
		return 0f, -6f, -0.32f;
	}
	if (func_348() == 2)
	{
		return 0f, 0f, -5f;
	}
	return 0f, 0f, -2f;
}

int func_470()//Position - 0x2130A
{
	STREAMING::REQUEST_MODEL(func_467());
	STREAMING::REQUEST_MODEL(__LIB_30__::func_765());
	STREAMING::REQUEST_ANIM_DICT(__LIB_30__::func_766());
	if ((STREAMING::HAS_MODEL_LOADED(func_467()) && STREAMING::HAS_MODEL_LOADED(__LIB_30__::func_765())) && STREAMING::HAS_ANIM_DICT_LOADED(__LIB_30__::func_766()))
	{
		return 1;
	}
	return 0;
}

int func_472()//Position - 0x2135F
{
	func_512();
	func_511();
	if ((((func_497() && func_496()) && func_492()) && func_490()) && func_488())
	{
		func_486();
		func_485();
		if (func_477())
		{
			if (func_476())
			{
				func_475();
				if (func_385())
				{
					Local_157.f_591 = MISC::GET_RANDOM_INT_IN_RANGE(0, func_21());
				}
				Local_157.f_30 = PLAYER::PLAYER_ID();
				if (func_474())
				{
					Local_157.f_555 = Global_262145.f_15635 /* Tunable: EXEC_SELL_NODAMAGE_INIT_BONUS */;
				}
				func_473();
				return 1;
			}
		}
	}
	return 0;
}

void func_473()//Position - 0x213F9
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < func_21())
	{
		if (func_35())
		{
			Local_157.f_10[iVar0 /*3*/] = { func_371(iVar0, 0) };
			Local_157.f_20[iVar0] = func_370(iVar0, 0);
		}
		else if (func_337())
		{
			Local_157.f_10[iVar0 /*3*/] = { func_369(iVar0) };
			Local_157.f_20[iVar0] = func_368(iVar0);
		}
		else
		{
			Local_157.f_10[iVar0 /*3*/] = { func_367() };
			Local_157.f_20[iVar0] = func_366();
		}
		if (!__LIB_41__::func_947(Local_157.f_10[iVar0 /*3*/], 4f, 1f, 1f, 1f, 0, 0, 0, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
		{
			MISC::CLEAR_AREA(Local_157.f_10[iVar0 /*3*/], 4f, true, false, false, true);
		}
		iVar0++;
	}
}

bool func_474()//Position - 0x214C3
{
	return func_10() == 3;
}

void func_475()//Position - 0x214D1
{
	int iVar0;
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (func_384())
		{
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
			switch (iVar0)
			{
				case 0:
					Local_157.f_545 = joaat("schafter2");
					Local_157.f_546 = joaat("G_M_M_ArmGoon_01");
					break;
				case 1:
					Local_157.f_545 = joaat("huntley");
					Local_157.f_546 = joaat("G_M_M_MexBoss_01");
					break;
				case 2:
					Local_157.f_545 = joaat("kuruma");
					Local_157.f_546 = joaat("G_M_Y_Korean_01");
					break;
			}
		}
		else if (func_11())
		{
			Local_157.f_545 = joaat("huntley");
			Local_157.f_546 = joaat("G_M_M_MexBoss_01");
		}
	}
}

int func_476()//Position - 0x21576
{
	int iVar0;
	if (!func_12())
	{
		return 1;
	}
	if (Local_157.f_551[0] == -1)
	{
		Local_157.f_551[0] = MISC::GET_RANDOM_INT_IN_RANGE(0, func_423());
	}
	if (Local_157.f_551[1] == -1)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, func_423());
		if (iVar0 != Local_157.f_551[0])
		{
			Local_157.f_551[1] = iVar0;
		}
	}
	if (Local_157.f_551[2] == -1)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, func_423());
		if (iVar0 != Local_157.f_551[0] && iVar0 != Local_157.f_551[1])
		{
			Local_157.f_551[2] = iVar0;
		}
	}
	if ((Local_157.f_551[0] != -1 && Local_157.f_551[1] != -1) && Local_157.f_551[2] != -1)
	{
		return 1;
	}
	return 0;
}

bool func_477()//Position - 0x21650
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	if (((!func_337() && !func_455()) && !func_454()) && !func_274())
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 20);
		iVar2 = 1;
		if (__LIB_35__::func_474(iVar0))
		{
			return 0;
		}
		bVar1 = (iVar0 + Local_157.f_65);
	}
	else if ((func_273() || func_483()) && func_422() < 20)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 20);
		iVar2 = 1;
		bVar1 = iVar0;
	}
	else
	{
		bVar1 = (iVar0 + Local_157.f_65);
	}
	if (bVar1 >= 20)
	{
		bVar1 = false;
	}
	if (func_274())
	{
		bVar1 = false;
	}
	if (func_457())
	{
		if (Local_157.f_582 == 1)
		{
			if (Local_157.f_67[1] == -1)
			{
				Local_157.f_67[1] = ((func_422() / 2) - 1);
			}
			if (Local_157.f_67[0] == -1)
			{
				Local_157.f_67[0] = ((func_422() / 2) - 1);
			}
		}
		else if (Local_157.f_67[0] == -1)
		{
			Local_157.f_67[0] = (func_422() - 1);
		}
	}
	if (func_479(bVar1))
	{
		if (Local_157.f_65 < func_422())
		{
			if (!BitTest(Local_157.f_61[0], bVar1))
			{
				Local_157.f_65++;
				if (iVar2 || bVar1 < func_478())
				{
					iVar3 = 0;
					iVar3 = 0;
					while (iVar3 < func_21())
					{
						MISC::SET_BIT(&(Local_157.f_61[iVar3]), bVar1);
						MISC::SET_BIT(&(Local_157.f_66), bVar1);
						iVar3++;
					}
				}
				if ((!func_455() && !func_337()) && !func_454())
				{
					return 1;
				}
			}
		}
	}
	return Local_157.f_65 == func_422();
}

int func_478()//Position - 0x217F6
{
	if ((func_273() || func_483()) || func_12())
	{
		if (Global_1946098 <= 4)
		{
			return 3;
		}
		else if (Global_1946098 <= 9)
		{
			return 6;
		}
		else
		{
			return 20;
		}
	}
	return 5;
}

int func_479(bool bParam0)//Position - 0x2183E
{
	float fVar0;
	struct<3> Var1;
	bool bVar2;
	if (func_480())
	{
		Var1 = { __LIB_13__::func_512(Local_157.f_54) };
		bVar2 = false;
		while (bVar2 < func_21())
		{
			fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(func_410(func_10(), bParam0, Local_157.f_384, bVar2), Var1, true);
			if (fVar0 >= IntToFloat(Global_262145.f_16034 /* Tunable: EXEC_SELL_MIN_SPAWN_DISTANCE_FROM_OFFICE */))
			{
				return 1;
			}
			bVar2++;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_480()//Position - 0x218A6
{
	if ((((func_482() || func_474()) || func_384()) || func_11()) || func_481())
	{
		return 1;
	}
	return 0;
}

bool func_481()//Position - 0x218E2
{
	return func_10() == 4;
}

bool func_482()//Position - 0x218F0
{
	return func_10() == 0;
}

bool func_483()//Position - 0x218FE
{
	return func_10() == 7;
}

void func_485()//Position - 0x21A5C
{
	if (func_215())
	{
		switch (Local_157.f_394[0])
		{
			case 0:
				Local_157.f_579 = { -1419.8027f, -1540.2639f, 2.0909f };
				break;
			case 1:
				Local_157.f_579 = { -141.5667f, -2711.081f, 6.0002f };
				break;
			case 2:
				Local_157.f_579 = { 215.8467f, -3336.9417f, 5.7982f };
				break;
			case 3:
				Local_157.f_579 = { 1294.1938f, -3217.0327f, 5.9059f };
				break;
			case 4:
				Local_157.f_579 = { 982.3854f, -3343.4568f, 6.0958f };
				break;
			}
	}
	if (func_269())
	{
		switch (Local_157.f_394[0])
		{
			case 0:
				Local_157.f_579 = { 133.834f, -3336.7249f, 6.0218f };
				break;
			case 1:
				Local_157.f_579 = { 1293.4642f, -3126.0784f, 5.906f };
				break;
			case 2:
				Local_157.f_579 = { -761.9681f, -2840.4038f, 13.9415f };
				break;
			case 3:
				Local_157.f_579 = { -1331.2817f, -1693.3656f, 2.1151f };
				break;
			case 4:
				Local_157.f_579 = { -587.2385f, -2362.5408f, 13.8282f };
				break;
			}
	}
}

void func_486()//Position - 0x21BCE
{
	int iVar0;
	int iVar1;
	if (Local_157.f_388 == -1 && func_454())
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10000);
		if (__LIB_15__::func_566(iVar0, 7500, 10000))
		{
			iVar1 = 1;
		}
		else if (__LIB_15__::func_566(iVar0, 5000, 7500))
		{
			iVar1 = 2;
		}
		else if (__LIB_15__::func_566(iVar0, 2500, 5000))
		{
			iVar1 = 3;
		}
		else
		{
			iVar1 = 4;
		}
		Local_157.f_388 = iVar1;
	}
}

int func_488()//Position - 0x21C5D
{
	int iVar0;
	if (!func_37(30))
	{
		if ((func_455() || func_454()) || func_337())
		{
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
			if (func_489(iVar0))
			{
				return 0;
			}
			Local_157.f_384 = iVar0;
			func_34(30);
		}
		else if (func_274())
		{
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
			if (func_489(iVar0))
			{
				return 0;
			}
			Local_157.f_384 = iVar0;
			Local_157.f_394[0] = iVar0;
			func_34(30);
		}
		else
		{
			func_34(30);
			return 1;
		}
	}
	return func_37(30);
}

int func_489(int iParam0)//Position - 0x21CF8
{
	switch (func_10())
	{
		case 11:
			switch (iParam0)
			{
				case 0:
					return Global_262145.f_15736 /* Tunable: EXEC_DISABLE_SELL_AIRATTACKED_1 */;
				case 1:
					return Global_262145.f_15737 /* Tunable: EXEC_DISABLE_SELL_AIRATTACKED_2 */;
				case 2:
					return Global_262145.f_15738 /* Tunable: EXEC_DISABLE_SELL_AIRATTACKED_3 */;
				case 3:
					return Global_262145.f_15739 /* Tunable: EXEC_DISABLE_SELL_AIRATTACKED_4 */;
				case 4:
					return Global_262145.f_15740 /* Tunable: EXEC_DISABLE_SELL_AIRATTACKED_5 */;
				default:
			}
			break;
		case 9:
			switch (iParam0)
			{
				case 0:
					return Global_262145.f_15742 /* Tunable: EXEC_DISABLE_SELL_AIRCLEARAREA_1 */;
				case 1:
					return Global_262145.f_15743 /* Tunable: EXEC_DISABLE_SELL_AIRCLEARAREA_2 */;
				case 2:
					return Global_262145.f_15744 /* Tunable: EXEC_DISABLE_SELL_AIRCLEARAREA_3 */;
				case 3:
					return Global_262145.f_15745 /* Tunable: EXEC_DISABLE_SELL_AIRCLEARAREA_4 */;
				case 4:
					return Global_262145.f_15746 /* Tunable: EXEC_DISABLE_SELL_AIRCLEARAREA_5 */;
				default:
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 0:
					return Global_262145.f_15748 /* Tunable: EXEC_DISABLE_SELL_AIRDROP_1 */;
				case 1:
					return Global_262145.f_15749 /* Tunable: EXEC_DISABLE_SELL_AIRDROP_2 */;
				case 2:
					return Global_262145.f_15750 /* Tunable: EXEC_DISABLE_SELL_AIRDROP_3 */;
				case 3:
					return Global_262145.f_15751 /* Tunable: EXEC_DISABLE_SELL_AIRDROP_4 */;
				case 4:
					return Global_262145.f_15752 /* Tunable: EXEC_DISABLE_SELL_AIRDROP_5 */;
				default:
			}
			break;
		case 10:
			switch (iParam0)
			{
				case 0:
					return Global_262145.f_15755 /* Tunable: EXEC_DISABLE_SELL_AIRRESTRICTED_1 */;
				case 1:
					return Global_262145.f_15756 /* Tunable: EXEC_DISABLE_SELL_AIRRESTRICTED_2 */;
				case 2:
					return Global_262145.f_15757 /* Tunable: EXEC_DISABLE_SELL_AIRRESTRICTED_3 */;
				case 3:
					return Global_262145.f_15758 /* Tunable: EXEC_DISABLE_SELL_AIRRESTRICTED_4 */;
				case 4:
					return Global_262145.f_15759 /* Tunable: EXEC_DISABLE_SELL_AIRRESTRICTED_5 */;
				default:
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return Global_262145.f_15785 /* Tunable: EXEC_DISABLE_SELL_MULTIPLE_1 */;
				case 1:
					return Global_262145.f_15786 /* Tunable: EXEC_DISABLE_SELL_MULTIPLE_2 */;
				case 2:
					return Global_262145.f_15787 /* Tunable: EXEC_DISABLE_SELL_MULTIPLE_3 */;
				case 3:
					return Global_262145.f_15788 /* Tunable: EXEC_DISABLE_SELL_MULTIPLE_4 */;
				case 4:
					return Global_262145.f_15789 /* Tunable: EXEC_DISABLE_SELL_MULTIPLE_5 */;
				default:
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return Global_262145.f_15804 /* Tunable: EXEC_DISABLE_SELL_STING_1 */;
				case 1:
					return Global_262145.f_15805 /* Tunable: EXEC_DISABLE_SELL_STING_2 */;
				case 2:
					return Global_262145.f_15806 /* Tunable: EXEC_DISABLE_SELL_STING_3 */;
				case 3:
					return Global_262145.f_15807 /* Tunable: EXEC_DISABLE_SELL_STING_4 */;
				case 4:
					return Global_262145.f_15808 /* Tunable: EXEC_DISABLE_SELL_STING_5 */;
				default:
			}
			break;
		case 12:
			switch (iParam0)
			{
				case 0:
					return Global_262145.f_15792 /* Tunable: EXEC_DISABLE_SELL_SEAATTACKED_1 */;
				case 1:
					return Global_262145.f_15793 /* Tunable: EXEC_DISABLE_SELL_SEAATTACKED_2 */;
				case 2:
					return Global_262145.f_15794 /* Tunable: EXEC_DISABLE_SELL_SEAATTACKED_3 */;
				case 3:
					return Global_262145.f_15795 /* Tunable: EXEC_DISABLE_SELL_SEAATTACKED_4 */;
				case 4:
					return Global_262145.f_15796 /* Tunable: EXEC_DISABLE_SELL_SEAATTACKED_5 */;
				default:
			}
			break;
		case 13:
			switch (iParam0)
			{
				case 0:
					return Global_262145.f_15798 /* Tunable: EXEC_DISABLE_SELL_SEADEFEND_1 */;
				case 1:
					return Global_262145.f_15799 /* Tunable: EXEC_DISABLE_SELL_SEADEFEND_2 */;
				case 2:
					return Global_262145.f_15800 /* Tunable: EXEC_DISABLE_SELL_SEADEFEND_3 */;
				case 3:
					return Global_262145.f_15801 /* Tunable: EXEC_DISABLE_SELL_SEADEFEND_4 */;
				case 4:
					return Global_262145.f_15802 /* Tunable: EXEC_DISABLE_SELL_SEADEFEND_5 */;
				default:
			}
			break;
	}
	return 0;
}

int func_490()//Position - 0x2200A
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (!func_37(29))
	{
		iVar3 = __LIB_30__::func_768(PLAYER::PLAYER_ID());
		if (func_337())
		{
			switch (func_348())
			{
				case 0:
					iVar0 = iVar3 * 3;
					break;
				case 1:
					iVar0 = iVar3 * 3;
					iVar1 = iVar0 + 1;
					if (iVar0 == iVar1)
					{
						return 0;
					}
					break;
				case 7:
					iVar0 = iVar3 * 3;
					iVar1 = iVar0 + 1;
					iVar2 = iVar1 + 1;
					if ((iVar0 == iVar1 || iVar0 == iVar2) || iVar1 == iVar2)
					{
						return 0;
					}
					break;
				case 2:
					iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 12);
					break;
			}
		}
		else
		{
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
		}
		Local_157.f_394[0] = iVar0;
		Local_157.f_394[1] = iVar1;
		Local_157.f_394[2] = iVar2;
		func_34(29);
	}
	return func_37(29);
}

int func_492()//Position - 0x22127
{
	var uVar0;
	var uVar1;
	if (Local_157.f_582 == -1)
	{
		uVar1 = func_495(func_10(), &uVar0);
		func_494(uVar1);
		func_493(uVar0);
		return 1;
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_493(var uParam0)//Position - 0x2215D
{
	Local_157.f_583 = uParam0;
}

void func_494(var uParam0)//Position - 0x2216D
{
	Local_157.f_582 = uParam0;
}

int func_495(int iParam0, var uParam1)//Position - 0x2217D
{
	int iVar0;
	iVar0 = Global_1946098;
	switch (iParam0)
	{
		case 8:
		case 7:
		case 9:
		case 10:
		case 11:
			if (iVar0 >= 1 && iVar0 < Global_262145.f_15629 /* Tunable: EXEC_SELL_2ND_CUBAN_THRESHOLD */)
			{
				*uParam1 = iVar0;
				return 0;
			}
			else if (iVar0 >= Global_262145.f_15629 /* Tunable: EXEC_SELL_2ND_CUBAN_THRESHOLD */ && iVar0 < Global_262145.f_15630 /* Tunable: EXEC_SELL_TITAN_THRESHOLD */)
			{
				*uParam1 = iVar0;
				return 0;
			}
			*uParam1 = iVar0;
			if (iParam0 == 9)
			{
				return 7;
			}
			return 2;
		case 12:
		case 13:
			*uParam1 = iVar0;
			return 3;
		default:
	}
	if (iVar0 >= 1 && iVar0 < Global_262145.f_15631 /* Tunable: EXEC_SELL_2ND_BRICKADE_THRESHOLD */)
	{
		*uParam1 = iVar0;
		return 4;
	}
	else if (iVar0 >= Global_262145.f_15631 /* Tunable: EXEC_SELL_2ND_BRICKADE_THRESHOLD */ && iVar0 < Global_262145.f_15632 /* Tunable: EXEC_SELL_3RD_BRICKADE_THRESHOLD */)
	{
		*uParam1 = iVar0;
		return 5;
	}
	*uParam1 = iVar0;
	return 6;
	*uParam1 = 1;
	return -1;
}

int func_496()//Position - 0x22275
{
	if (Local_157.f_54 == -1)
	{
		if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_183 == -1)
		{
			Local_157.f_54 = Local_118.f_102;
		}
		else
		{
			Local_157.f_54 = Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_183;
		}
		Local_157.f_55 = func_2257();
		if (Local_157.f_55 <= 0)
		{
			Local_157.f_55 = 1;
			func_24(2);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_497()//Position - 0x222DE
{
	int iVar0;
	if (func_10() == 14)
	{
		if (func_2258())
		{
			iVar0 = func_510();
		}
		else
		{
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 14);
		}
		if ((((!func_508(iVar0) && !func_507(iVar0)) && !func_503(iVar0)) && func_502(iVar0)) && func_501(iVar0))
		{
			Local_157.f_7 = iVar0;
			func_500(iVar0);
			func_498(iVar0);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_498(int iParam0)//Position - 0x2235B
{
	Global_2815059.f_5195.f_368 = func_499(iParam0);
}

int func_499(int iParam0)//Position - 0x22373
{
	if (func_36(iParam0))
	{
		return 0;
	}
	else if (func_338(iParam0))
	{
		return 1;
	}
	else if (func_275(iParam0))
	{
		return 2;
	}
	return -1;
}

void func_500(int iParam0)//Position - 0x223A9
{
	if (Global_2815059.f_5195.f_348[0] == 14)
	{
		Global_2815059.f_5195.f_348[0] = iParam0;
		return;
	}
	else
	{
		Global_2815059.f_5195.f_348[7] = Global_2815059.f_5195.f_348[6];
		Global_2815059.f_5195.f_348[6] = Global_2815059.f_5195.f_348[5];
		Global_2815059.f_5195.f_348[5] = Global_2815059.f_5195.f_348[4];
		Global_2815059.f_5195.f_348[4] = Global_2815059.f_5195.f_348[3];
		Global_2815059.f_5195.f_348[3] = Global_2815059.f_5195.f_348[2];
		Global_2815059.f_5195.f_348[2] = Global_2815059.f_5195.f_348[1];
		Global_2815059.f_5195.f_348[1] = Global_2815059.f_5195.f_348[0];
		Global_2815059.f_5195.f_348[0] = iParam0;
	}
}

bool func_501(int iParam0)//Position - 0x2249D
{
	return Global_2815059.f_5195.f_368 != func_499(iParam0);
}

int func_502(int iParam0)//Position - 0x224B6
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 10:
			return Global_1946098 >= 5;
		default:
	}
	return 1;
}

int func_503(int iParam0)//Position - 0x224E1
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)))
		{
			iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (__LIB_0__::func_796(iVar2))
			{
				if (__LIB_0__::func_492(iVar2) == 168)
				{
					iVar1 = __LIB_0__::func_525(iVar2);
					if (iParam0 == iVar1)
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_507(int iParam0)//Position - 0x225BA
{
	switch (iParam0)
	{
		case 0:
			if (Global_262145.f_15761 /* Tunable: EXEC_DISABLE_SELL_DEFAULT */)
			{
				return 1;
			}
			break;
		case 1:
			if (Global_262145.f_15784 /* Tunable: EXEC_DISABLE_SELL_MULTIPLE */)
			{
				return 1;
			}
			break;
		case 2:
			if (Global_262145.f_15803 /* Tunable: EXEC_DISABLE_SELL_STING */)
			{
				return 1;
			}
			break;
		case 3:
			if (Global_262145.f_15790 /* Tunable: EXEC_DISABLE_SELL_NODAMAGE */)
			{
				return 1;
			}
			break;
		case 4:
			if (Global_262145.f_15809 /* Tunable: EXEC_DISABLE_SELL_TRACKIFY */)
			{
				return 1;
			}
			break;
		case 5:
			if (Global_262145.f_15760 /* Tunable: EXEC_DISABLE_SELL_ATTACKED */)
			{
				return 1;
			}
			break;
		case 6:
			if (Global_262145.f_15762 /* Tunable: EXEC_DISABLE_SELL_DEFEND */)
			{
				return 1;
			}
			break;
		case 7:
			if (Global_262145.f_15753 /* Tunable: EXEC_DISABLE_SELL_AIRFLYLOW */)
			{
				return 1;
			}
			break;
		case 8:
			if (Global_262145.f_15747 /* Tunable: EXEC_DISABLE_SELL_AIRDROP */)
			{
				return 1;
			}
			break;
		case 9:
			if (Global_262145.f_15741 /* Tunable: EXEC_DISABLE_SELL_AIRCLEARAREA */)
			{
				return 1;
			}
			break;
		case 10:
			if (Global_262145.f_15754 /* Tunable: EXEC_DISABLE_SELL_AIRRESTRICTED */)
			{
				return 1;
			}
			break;
		case 11:
			if (Global_262145.f_15735 /* Tunable: EXEC_DISABLE_SELL_AIRATTACKED */)
			{
				return 1;
			}
			break;
		case 12:
			if (Global_262145.f_15791 /* Tunable: EXEC_DISABLE_SELL_SEAATTACKED */)
			{
				return 1;
			}
			break;
		case 13:
			if (Global_262145.f_15797 /* Tunable: EXEC_DISABLE_SELL_SEADEFEND */)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_508(int iParam0)//Position - 0x2270C
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < func_509())
	{
		if (Global_2815059.f_5195.f_348[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_509()//Position - 0x22741
{
	return Global_262145.f_16140 /* Tunable: EXEC_SELL_MISSIONS_HISTORY */;
}

int func_510()//Position - 0x22750
{
	int iVar0;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 8);
	switch (iVar0)
	{
		case 0:
			return 0;
		case 1:
			return 5;
		case 2:
			return 6;
		case 3:
			return 3;
		case 4:
			return 4;
		case 5:
			return 9;
		case 6:
			return 12;
		case 7:
			return 13;
		default:
	}
	return 0;
}

void func_511()//Position - 0x227BC
{
	if (Local_157.f_594 == -1)
	{
		Local_157.f_594 = Global_1946098;
	}
}

void func_512()//Position - 0x227D8
{
	if (Local_157.f_593 == -1)
	{
		Local_157.f_593 = Global_1946100;
	}
}

void func_515()//Position - 0x22824
{
	func_2208();
	func_2202();
	func_2197();
	func_2195();
	func_2194();
	func_2193();
	switch (func_372())
	{
		case 0:
			break;
		case 1:
			if (!func_2192(2))
			{
				func_2170(168, 1, Local_157.f_7, 0);
				__LIB_19__::func_481();
				func_2167(1);
				if (func_337())
				{
					__LIB_1__::func_950();
				}
				if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(210.93f, -2022.58f, 17.65f, 6f, joaat("prop_fnclink_03gate1"), false))
				{
					OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_fnclink_03gate1"), 210.93f, -2022.58f, 17.65f, true, 1f, false);
				}
				func_2165(2);
			}
			else if (!func_2192(3))
			{
				if (__LIB_0__::func_937(&(Local_157.f_3), 10000, 0))
				{
					__LIB_15__::func_577();
					func_2165(3);
				}
			}
			if (__LIB_8__::func_260(PLAYER::PLAYER_ID()) && !func_2192(15))
			{
				Global_1946250.f_3364 = 1;
				func_2165(15);
			}
			else
			{
				if (Global_1946250.f_3364 == 1 || !func_2192(15))
				{
					func_2165(15);
					Global_1946250.f_3364 = 0;
				}
				if (!__LIB_12__::func_495() && !__LIB_0__::func_114())
				{
					if (func_190() == 0)
					{
						if (Global_2703735.f_4.f_10 || func_429())
						{
							if (!func_2192(4))
							{
								__LIB_42__::func_25(-1, 0, 0, -1, 0, 0);
								func_2165(4);
							}
							__LIB_42__::func_23(&(Global_1637407.f_534), &Global_1637407, 28, &(Global_1637407.f_1), &(Global_1637407.f_117), -1, 0, 0);
							func_1836();
							if (!Global_1946250.f_519)
							{
								func_1788(0);
								func_1747(0);
								func_1704();
							}
							HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
							HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
							HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
							func_1698();
							func_1695();
							func_1693();
							func_1692();
							func_1683();
							func_1675();
							func_1672();
							if (func_218())
							{
								func_1671();
							}
							else if (((((func_483() || func_273()) || func_457()) || func_12()) || func_454()) || func_455())
							{
								func_1658();
							}
							if (iLocal_147 > -1)
							{
								if (iLocal_147 == NETWORK::PARTICIPANT_ID_TO_INT())
								{
								}
							}
						}
					}
				}
				else
				{
					__LIB_4__::func_861(24);
					__LIB_3__::func_0();
				}
			}
			break;
		case 2:
			if (func_274())
			{
				if (!__LIB_0__::func_864(&(Local_118.f_364)))
				{
					__LIB_0__::func_795(&(Local_118.f_364), 0, 0);
				}
			}
			if (func_190() != 6)
			{
				if (!BitTest(Global_1943920.f_3, 4))
				{
					MISC::SET_BIT(&(Global_1943920.f_3), 4);
				}
			}
			func_1649();
			func_1648();
			func_1646();
			func_1644();
			if (func_913())
			{
				func_893(0);
				func_890();
				func_881();
				func_1788(1);
				func_1747(1);
				func_530();
				func_525(Local_157.f_54);
				func_518();
			}
			func_516();
			break;
		case 3:
			break;
	}
}

void func_516()//Position - 0x22AE7
{
	bool bVar0;
	bVar0 = false;
	while (bVar0 < func_21())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_35[bVar0]))
		{
			if (ENTITY::DOES_ENTITY_EXIST(func_42(bVar0)))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(func_42(bVar0)))
				{
					if (!ENTITY::IS_ENTITY_DEAD(func_42(bVar0), false))
					{
						__LIB_15__::func_586(func_40(bVar0));
					}
				}
			}
		}
		bVar0++;
	}
}

void func_518()//Position - 0x22B91
{
	if (!func_524(19))
	{
		if (func_523())
		{
			if (func_524(0))
			{
				if (func_190() == 6)
				{
					func_520(func_522(1));
				}
				else
				{
					func_520(func_522(0));
				}
				AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", false);
				AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", false);
			}
		}
		func_519(19);
	}
}

void func_519(int iParam0)//Position - 0x22BE5
{
	int iVar0;
	int iVar1;
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(uLocal_143[iVar0]), iVar1);
}

void func_520(int iParam0)//Position - 0x22C08
{
	if (!func_524(iParam0))
	{
		AUDIO::TRIGGER_MUSIC_EVENT(func_521(iParam0));
		func_519(iParam0);
	}
}

char* func_521(int iParam0)//Position - 0x22C2B
{
	switch (iParam0)
	{
		case 1:
			return "EXEC1_AIR_CLEAR_START";
		case 2:
			return "EXEC1_AIR_CLEAR_LAND";
		case 3:
			return "EXEC1_AIR_CLEAR_SHOOTOUT";
		case 36:
			return "EXEC1_AIR_CLEAR_LEFT_AREA";
		case 4:
			return "EXEC1_AIR_CLEAR_STOP";
		case 5:
			return "EXEC1_AIR_CLEAR_FAIL";
		case 6:
			return "EXEC1_SEA_ATTACK_START";
		case 25:
			return "EXEC1_SEA_ATTACK_FIGHT";
		case 7:
			return "EXEC1_SEA_ATTACK_STOP";
		case 8:
			return "EXEC1_SEA_ATTACK_FAIL";
		case 9:
			return "EXEC1_SEA_DEFEND_START";
		case 10:
			return "EXEC1_SEA_DEFEND_DELIVER";
		case 11:
			return "EXEC1_SEA_DEFEND_STOP";
		case 12:
			return "EXEC1_SEA_DEFEND_FAIL";
		case 13:
			return "EXEC1_DELIVERING_START";
		case 14:
			return "EXEC1_STING_WANTED_SMA";
		case 15:
			return "EXEC1_DELIVERING_SMA";
		case 16:
			return "EXEC1_MP_MUSIC_STOP";
		case 17:
			return "EXEC1_STING_FAIL";
		case 18:
			return "EXEC1_MP_MUSIC_FAIL";
		case 20:
			return "EXEC1_AIR_ATTACK_START";
		case 21:
			return "EXEC1_AIR_ATTACK_ENEMIES";
		case 22:
			return "EXEC1_AIR_ATTACK_DELIVERING";
		case 23:
			return "EXEC1_AIR_ATTACK_STOP";
		case 24:
			return "EXEC1_AIR_ATTACK_FAIL";
		case 26:
			return "EXEC1_LAND_ATTACK_START";
		case 27:
			return "EXEC1_LAND_ATTACK_HOSTILE";
		case 28:
			return "EXEC1_LAND_ATTACK_LOST";
		case 29:
			return "EXEC1_LAND_ATTACK_STOP";
		case 30:
			return "EXEC1_LAND_DEFEND_START";
		case 31:
			return "EXEC1_LAND_DEFEND_ENEMIES";
		case 32:
			return "EXEC1_LAND_DEFEND_STOP";
		case 33:
			return "EXEC1_AIR_FLY_LOW_START";
		case 34:
			return "EXEC1_AIR_FLY_LOW_WANTED";
		case 35:
			return "EXEC1_AIR_FLY_LOW_FLYING";
		default:
	}
	return "";
}

int func_522(bool bParam0)//Position - 0x22E02
{
	if (bParam0)
	{
		switch (func_10())
		{
			case 9:
				return 4;
			case 12:
				return 7;
			case 13:
				return 11;
			case 2:
				return 16;
			case 3:
				return 16;
			case 4:
				return 16;
			case 0:
				return 16;
			case 11:
				return 23;
			case 5:
				return 29;
			case 6:
				return 32;
			case 1:
				return 16;
			case 7:
				return 16;
			default:
		}
	}
	else
	{
		switch (func_10())
		{
			case 9:
				return 5;
			case 12:
				return 8;
			case 13:
				return 12;
			case 2:
				return 17;
			case 3:
				return 18;
			case 4:
				return 18;
			case 0:
				return 18;
			case 11:
				return 24;
			case 5:
				return 18;
			case 6:
				return 18;
			case 1:
				return 18;
			case 7:
				return 16;
			}
		default:
	}
	return 4;
}

int func_523()//Position - 0x22F2A
{
	if (func_10() == 8 || func_10() == 10)
	{
		return 0;
	}
	return 1;
}

bool func_524(int iParam0)//Position - 0x22F4E
{
	int iVar0;
	int iVar1;
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return BitTest(uLocal_143[iVar0], iVar1);
}

void func_525(int iParam0)//Position - 0x22F6E
{
	int iVar0;
	if (__LIB_3__::func_36(iParam0))
	{
		if (!func_2192(7))
		{
			if (func_190() == 6)
			{
				if (__LIB_1__::func_501())
				{
					if (__LIB_7__::func_238(iParam0))
					{
						iVar0 = __LIB_8__::func_418(iParam0);
						Global_2815059.f_5195.f_369[iVar0] = NETWORK::GET_CLOUD_TIME_AS_INT();
						__LIB_1__::func_354(__LIB_30__::func_769(iVar0), Global_2815059.f_5195.f_369[iVar0], -1, 1, 0);
						func_2165(7);
					}
				}
			}
		}
	}
}

void func_530()//Position - 0x230DB
{
	bool bVar0;
	struct<14> Var1;
	if (!func_2192(1))
	{
		if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (func_190() != 0)
			{
				bVar0 = PLAYER::PLAYER_ID();
				if (func_190() == 6)
				{
					bLocal_163 = true;
					Local_120.f_7 = func_2257();
					if (__LIB_1__::func_501() && Global_2869997[__LIB_0__::getGlobal_1574918()] == 0)
					{
						__LIB_1__::func_928(42);
					}
					if (func_474())
					{
						Local_120.f_0 = Local_157.f_555;
						Local_120.f_6 = 1;
					}
				}
				Local_120.f_5 = func_2258();
				Local_120.f_9 = Local_157.f_593;
				func_637(168, bLocal_163, &Local_120, 0);
				if (bLocal_163)
				{
					__LIB_27__::func_500(1, bVar0);
					Var1.f_2 = -977704342;
					Var1.f_10 = bVar0;
					if (__LIB_1__::func_501())
					{
						__LIB_1__::func_634(Var1, __LIB_3__::func_206(0, 1));
					}
				}
				else
				{
					__LIB_35__::func_476();
					__LIB_27__::func_500(1, __LIB_0__::getMinusOneOrNull());
				}
				func_2376(bLocal_163, 0);
				func_2165(1);
			}
		}
	}
	else
	{
		if (!func_2259(0))
		{
			if (__LIB_1__::func_501())
			{
				if (!func_38(NETWORK::PARTICIPANT_ID(), 13))
				{
					if (bLocal_163)
					{
						func_2218(2);
					}
					else if (func_190() == 4)
					{
						func_2218(1);
					}
					else
					{
						Global_2815059.f_5195.f_386 = 0;
						func_633(13);
					}
					if (iLocal_153 == 2)
					{
						Global_2815059.f_5195.f_386 = 0;
						func_633(13);
					}
					if (iLocal_153 == 3)
					{
						Global_2815059.f_5195.f_386 = 0;
						func_633(13);
					}
					if (func_2259(2))
					{
						Global_2815059.f_5195.f_386 = 0;
						func_633(13);
					}
				}
			}
			else if (__LIB_0__::func_797() == __LIB_0__::getMinusOneOrNull())
			{
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					func_24(0);
				}
			}
		}
		if (Global_2703735.f_4.f_10)
		{
			if ((!__LIB_12__::func_495() && !__LIB_0__::func_114()) && !__LIB_30__::func_788(168))
			{
				if (!func_2192(26))
				{
					if (__LIB_30__::func_777())
					{
						switch (func_190())
						{
							case 2:
								HUD::CLEAR_HELP(true);
								break;
							case 3:
								HUD::CLEAR_HELP(true);
								func_570(2, func_190());
								break;
							case 1:
								HUD::CLEAR_HELP(true);
								func_570(2, func_190());
								break;
							case 4:
							case 5:
								HUD::CLEAR_HELP(true);
								func_570(2, func_190());
								break;
							case 6:
								HUD::CLEAR_HELP(true);
								func_570(1, 0);
								break;
						}
						func_2165(26);
					}
				}
			}
		}
	}
	if (__LIB_35__::func_505(&uLocal_134, 1, 0) && func_2259(0))
	{
		func_633(0);
	}
}

void func_570(int iParam0, int iParam1)//Position - 0x2418D
{
	char* sVar0;
	char* sVar1;
	int iVar2;
	if (__LIB_30__::func_777() || iParam0 == 2)
	{
		if (!func_629(iParam0))
		{
			switch (iParam0)
			{
				case 0:
					sVar0 = "GB_SELL_BM_01" /* GXT: SELL SPECIAL CARGO */;
					if (func_337())
					{
						if (func_385())
						{
							sVar1 = "GB_SELL_BM_06b" /* GXT: Enter a plane */;
						}
						else
						{
							sVar1 = "GB_SELL_BM_06" /* GXT: Enter the plane */;
						}
					}
					else if (func_274())
					{
						sVar1 = "GB_SELL_BM_07" /* GXT: Enter the boat */;
					}
					else if (func_385())
					{
						sVar1 = "GB_SELL_BM_02b" /* GXT: Enter a truck */;
					}
					else
					{
						sVar1 = "GB_SELL_BM_02" /* GXT: Enter the truck */;
					}
					iVar2 = 86;
					__LIB_44__::func_86(iVar2, sVar0, sVar1, 1, -1, 2, 1, 0);
					func_627(iParam0);
					break;
				case 1:
					sVar0 = "EXEC_SOLD" /* GXT: SOLD */;
					sVar1 = "GB_SELL_BM_03" /* GXT: You successfully delivered the Special Cargo */;
					iVar2 = 87;
					__LIB_44__::func_86(iVar2, sVar0, sVar1, 1, -1, 2, 1, 0);
					func_627(iParam0);
					break;
				case 2:
					sVar0 = "BIGM_CLOST" /* GXT: SELL SPECIAL CARGO OVER */;
					iVar2 = 89;
					if (__LIB_1__::func_501())
					{
						if (func_2258())
						{
							if (iLocal_155 > 1)
							{
								sVar1 = "GB_SELL_BM_10p" /* GXT: ~1~ Special Items destroyed */;
							}
							else
							{
								sVar1 = "GB_SELL_BM_10" /* GXT: ~1~ Special Item destroyed */;
							}
							if (iLocal_156 > 0)
							{
								__LIB_35__::func_494("GB_SELL_TICK_1" /* GXT: ~1~ out of ~1~ crates returned to the warehouse. */, iLocal_156, func_2257());
							}
							else
							{
								__LIB_3__::func_218("GB_SELL_TICK_3" /* GXT: All Special Items in transit were lost. No Special Items were returned to the warehouse. */, 0);
							}
						}
						else
						{
							if (iParam1 == 4)
							{
								if (iLocal_155 > 1)
								{
									sVar1 = "GB_SELL_BM_08p" /* GXT: ~1~ Special Cargo crates destroyed */;
								}
								else
								{
									sVar1 = "GB_SELL_BM_08" /* GXT: ~1~ Special Cargo crate destroyed */;
								}
							}
							else if (iParam1 == 1 || iParam1 == 5)
							{
								if (iLocal_155 > 1)
								{
									sVar1 = "GB_SELL_BM_09p" /* GXT: ~1~ Special Cargo crates lost */;
								}
								else
								{
									sVar1 = "GB_SELL_BM_09" /* GXT: ~1~ Special Cargo crate lost */;
								}
							}
							else
							{
								sVar1 = "GB_SELL_BM_04" /* GXT: You failed to deliver the Special Cargo */;
							}
							if (iLocal_156 > 0)
							{
								__LIB_35__::func_494("GB_SELL_TICK_1" /* GXT: ~1~ out of ~1~ crates returned to the warehouse. */, iLocal_156, func_2257());
							}
							else
							{
								__LIB_3__::func_218("GB_SELL_TICK_2" /* GXT: All Special Cargo in transit lost. No crates were returned to the warehouse. */, 0);
							}
						}
						if (iLocal_155 > -1)
						{
							func_571(iVar2, iLocal_155, sVar1, sVar0, 1, -1, -1082130432, 2, 0);
						}
					}
					else
					{
						sVar1 = "GB_SELL_BM_04" /* GXT: You failed to deliver the Special Cargo */;
						__LIB_44__::func_86(iVar2, sVar0, sVar1, 1, -1, 2, 1, 0);
					}
					func_627(iParam0);
					break;
				}
			}
	}
}

int func_571(int iParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x24363
{
	struct<80> Var0;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	__LIB_1__::func_264(iParam0, &Var0, iParam1, sParam2, sParam3);
	Var0.f_71 = iParam4;
	Var0.f_6 = iParam5;
	Var0.f_7 = iParam6;
	Var0.f_72 = iParam7;
	if (iParam8 != 0)
	{
		__LIB_1__::func_330(&(Var0.f_69), iParam8);
	}
	return __LIB_43__::func_857(&Var0);
}

void func_627(int iParam0)//Position - 0x259D5
{
	MISC::SET_BIT(&(Local_118.f_2), iParam0);
}

bool func_629(int iParam0)//Position - 0x25A67
{
	return BitTest(Local_118.f_2, iParam0);
}

void func_633(int iParam0)//Position - 0x25B12
{
	MISC::SET_BIT(&(Local_158[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_2), iParam0);
}

void func_637(int iParam0, bool bParam1, var uParam2, bool bParam3)//Position - 0x25C09
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	__LIB_35__::func_775(iParam0, &fVar2, &fVar3);
	if (uParam2->f_6 == 0)
	{
		iVar1 = (iVar1 + uParam2->f_1);
		iVar0 = (iVar0 + *uParam2);
	}
	if (bParam1)
	{
		iVar1 = (iVar1 + __LIB_35__::func_483(iParam0, uParam2->f_13, bParam3));
		if (iParam0 == 233)
		{
			iVar6 = (uParam2->f_10 / uParam2->f_11) * 100;
			iVar1 = ((iVar1 / 100) * iVar6);
		}
		if ((iParam0 == 158 && uParam2->f_21 == 1) && !uParam2->f_22)
		{
			iVar1 = 200;
		}
		iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * fVar3));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * uParam2->f_3));
		iVar0 = (iVar0 + __LIB_15__::func_393(iParam0, bParam3));
		iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * fVar2));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * uParam2->f_2));
	}
	else if ((iParam0 == 185 || iParam0 == 220) || iParam0 == 221)
	{
		iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * fVar3));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * uParam2->f_3));
		iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * fVar2));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * uParam2->f_2));
	}
	if (uParam2->f_18 > -1)
	{
		iVar0 = (iVar0 + uParam2->f_18);
	}
	if (uParam2->f_19 > -1)
	{
		iVar1 = (iVar1 + uParam2->f_19);
	}
	if (__LIB_35__::func_495(iParam0))
	{
		if (bParam1)
		{
			if (Global_262145.f_24496 /* Tunable: -76964080 */)
			{
				if (__LIB_15__::func_392(PLAYER::PLAYER_ID()) <= 0)
				{
					__LIB_19__::func_345();
				}
			}
			else if (__LIB_15__::func_392(PLAYER::PLAYER_ID()) > 0)
			{
				__LIB_19__::func_344();
			}
			else
			{
				__LIB_19__::func_345();
			}
		}
		else
		{
			__LIB_13__::func_356();
		}
	}
	__LIB_42__::func_20(iParam0, bParam1, uParam2, &iVar0, &iVar4);
	__LIB_42__::func_19(iParam0, uParam2, &iVar0, &iVar5);
	__LIB_42__::func_18(iParam0, uParam2, &iVar0, &iVar5);
	__LIB_42__::func_17(iParam0, uParam2, &iVar0, &iVar5, &iVar7);
	__LIB_42__::func_16(iParam0, uParam2, &iVar0, &iVar5);
	if (iParam0 == 168)
	{
		Global_2815059.f_5195.f_387 = iVar4;
	}
	else
	{
		Global_2815059.f_5195.f_387 = iVar5;
	}
	iVar8 = __LIB_1__::func_730();
	if (iVar8 != __LIB_0__::getMinusOneOrNull() && iParam0 != 148)
	{
		if (__LIB_12__::func_486(PLAYER::PLAYER_ID(), 0))
		{
			if (!__LIB_2__::func_61(PLAYER::PLAYER_ID(), iVar8, 1))
			{
				__LIB_43__::func_858(&iVar0, 1);
			}
		}
	}
	__LIB_30__::func_514(iParam0, &iVar9, &iVar10);
	iVar1 = (iVar1 + iVar9);
	iVar0 = (iVar0 + iVar10);
	if (iVar1 > 0)
	{
		Global_1943929.f_10 = iVar1;
		__LIB_1__::func_925();
		func_761(0, PLAYER::PLAYER_PED_ID(), "", joaat("XPTYPE_SKILL"), joaat("XPCATEGORY_COLLECT_CHECKPOINT"), iVar1, 1, -1, 0, 0, 0);
	}
	if (iVar0 > 0)
	{
		Global_1943929.f_9 = iVar0;
		__LIB_36__::func_219(iParam0, iVar0, iVar7, iVar4, iVar5, uParam2);
		__LIB_15__::func_441(iParam0, iVar0);
		if (__LIB_15__::func_381(iParam0))
		{
			if (__LIB_15__::func_380(iParam0) > -1)
			{
				__LIB_1__::func_926(__LIB_15__::func_380(iParam0), iVar0);
			}
		}
		Global_2727753 = iVar0;
		__LIB_0__::func_627(&Global_2725869, 0, 0);
	}
	if (__LIB_0__::func_315(PLAYER::PLAYER_ID()) || __LIB_0__::func_428(PLAYER::PLAYER_ID()))
	{
		__LIB_30__::func_415(iParam0);
	}
	if ((__LIB_12__::func_654(iParam0) || iParam0 == 293) || iParam0 == 291)
	{
		Global_1943947.f_13 = iVar0;
		Global_1943947.f_14 = iVar1;
	}
	if (__LIB_12__::func_499(iParam0))
	{
		Global_1944003.f_13 = iVar0;
		Global_1944003.f_14 = iVar1;
	}
	if (((__LIB_4__::func_740(iParam0) || iParam0 == 297) || iParam0 == 296) || iParam0 == 298)
	{
		Global_1944066.f_12 = iVar0;
		Global_1944066.f_13 = iVar1;
	}
	if (__LIB_1__::func_612(iParam0))
	{
		Global_1944113.f_12 = iVar0;
		Global_1944113.f_13 = iVar1;
	}
	if (__LIB_1__::func_77(iParam0))
	{
		Global_1944167.f_12 = iVar0;
		Global_1944167.f_13 = iVar1;
	}
	if (__LIB_4__::func_78(iParam0))
	{
		if (__LIB_15__::func_326(iParam0))
		{
			Global_1944249.f_12 = iVar0;
			Global_1944249.f_13 = iVar1;
		}
		else if (((__LIB_30__::func_414(iParam0) || iParam0 == 299) || iParam0 == 300) || iParam0 == 301)
		{
			Global_1944303.f_12 = iVar0;
			Global_1944303.f_13 = iVar1;
		}
	}
	if (__LIB_12__::func_747(iParam0))
	{
		Global_1944390.f_12 = iVar0;
		Global_1944390.f_13 = iVar1;
	}
	if (__LIB_4__::func_184(iParam0))
	{
		Global_1944465.f_16 = iVar0;
		Global_1944465.f_17 = iVar1;
	}
	if (__LIB_11__::func_619(iParam0))
	{
		Global_1944552.f_16 = iVar0;
		Global_1944552.f_17 = iVar1;
	}
	if (__LIB_3__::func_691(iParam0) || __LIB_15__::func_310(iParam0))
	{
		Global_1944685.f_15 = iVar0;
		Global_1944685.f_16 = iVar1;
	}
	__LIB_24__::func_406(bParam1, iParam0);
}

int func_761(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)//Position - 0x4EE5C
{
	return func_762(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_762(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)//Position - 0x4EE7E
{
	int iVar0;
	int iVar1;
	iVar0 = func_772(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && BitTest(Global_4718592.f_39, 19))
	{
		return iVar0;
	}
	if (iParam4 == joaat("XPCATEGORY_COMPLETED_SHOWER") || iParam4 == joaat("XPCATEGORY_COMPLETED_ROLLERCOASTER"))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (ENTITY::IS_ENTITY_A_PED(iParam1))
			{
				iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
				__LIB_2__::func_93(PED::GET_PED_BONE_COORDS(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		__LIB_2__::func_775(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

var func_772(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x4F223
{
	var uVar0;
	uVar0 = func_773(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_773(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x4F246
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	iVar2 = __LIB_2__::func_101();
	if (__LIB_1__::func_76(sParam2))
	{
	}
	if (__LIB_0__::func_109())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = __LIB_1__::func_747(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1 /* Tunable: XP_MULTIPLIER */);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = __LIB_1__::func_704(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					__LIB_3__::func_377(0, &iVar1);
					break;
				case 3:
					__LIB_3__::func_377(1, &iVar1);
					break;
				case 1:
					__LIB_2__::func_127(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1957716)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			__LIB_1__::func_746(1165, iVar1, -1);
			if (iParam1 == 0)
			{
				__LIB_1__::func_759((__LIB_1__::func_335(PLAYER::PLAYER_ID()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_36.f_2 != -1)
				{
					__LIB_1__::func_746(1166, iVar1, -1);
				}
				__LIB_2__::func_47(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				__LIB_1__::func_745((__LIB_2__::func_46(PLAYER::PLAYER_ID()) + iVar1));
			}
			else
			{
				__LIB_1__::func_745((__LIB_2__::func_46(PLAYER::PLAYER_ID()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_881()//Position - 0x54AF1
{
	if (func_481())
	{
		if (func_2192(8))
		{
			if (__LIB_0__::func_77(0))
			{
				__LIB_0__::func_366(0);
			}
			else
			{
				__LIB_25__::func_426(0);
				func_882(8);
			}
		}
	}
}

void func_882(int iParam0)//Position - 0x54B24
{
	MISC::CLEAR_BIT(&uLocal_141, iParam0);
}

void func_890()//Position - 0x54CF0
{
	if (iLocal_152 != -1)
	{
		__LIB_3__::func_422(&iLocal_152);
	}
}

void func_893(int iParam0)//Position - 0x54D98
{
	if (func_2192(23) || iParam0)
	{
		if (!__LIB_3__::func_144(PLAYER::PLAYER_ID(), 0, 0))
		{
			func_882(23);
			func_882(24);
			__LIB_2__::func_91();
			__LIB_15__::func_448(0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0);
			__LIB_19__::func_575(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
		}
	}
}

int func_913()//Position - 0x554D0
{
	if (func_274())
	{
		if (func_1643() || func_1642())
		{
			if (func_1641() || func_1642())
			{
				switch (Local_118.f_115)
				{
					case 0:
						if (!CAM::IS_SCREEN_FADED_OUT())
						{
							func_893(1);
							__LIB_34__::func_701(Local_157.f_579, 0f, 100f, 1, 0f, 0, 0, 65f, 1, 1, 0, 1, -1082130432);
							CAM::DO_SCREEN_FADE_OUT(500);
							Local_118.f_115++;
						}
						break;
					case 1:
						if (CAM::IS_SCREEN_FADED_OUT())
						{
							Local_118.f_115++;
						}
						break;
					case 2:
						if (func_915(10, 0, 0, 0, 0, 0, 0, 0, 1, 3000, 1, 1, 0, 0, 0, 0, 1, 0))
						{
							Local_118.f_115++;
						}
						break;
					case 3:
						if (!CAM::IS_SCREEN_FADED_IN())
						{
							CAM::DO_SCREEN_FADE_IN(500);
							Local_118.f_115++;
						}
						else
						{
							Local_118.f_115++;
						}
						break;
					case 4:
						if (CAM::IS_SCREEN_FADED_IN())
						{
							__LIB_1__::func_703();
							func_2165(30);
							return 1;
						}
						break;
				}
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_915(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17)//Position - 0x5565E
{
	float fVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	__LIB_0__::func_189();
	if (__LIB_3__::func_144(PLAYER::PLAYER_ID(), 1, 0))
	{
		if (((bParam4 && __LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 0)) && STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) && Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_230 == 1)
		{
		}
		else if (__LIB_0__::func_628() == 28)
		{
		}
		else
		{
			return 0;
		}
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 150, true);
		if (!Global_2667225.f_702 == iParam0)
		{
			if (bParam15 && Global_2667225.f_702 == 37)
			{
			}
			else if (!Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 == 0)
			{
				if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_703) < __LIB_0__::func_853(0))
				{
					return 0;
				}
				Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 0;
			}
		}
		if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 == 0)
		{
			Global_2667225.f_702 = iParam0;
			Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 2;
			if (bParam2)
			{
				if (!__LIB_3__::func_262())
				{
					bParam2 = false;
				}
			}
			Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 2;
			Global_2667225.f_2478 = 0;
			Global_2667225.f_2479 = 0;
			Global_2667225.f_2477 = 0;
			Global_2667225.f_2878 = 0;
		}
		if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 == 2)
		{
			if (bParam2 || bParam7)
			{
				bVar3 = true;
			}
			if (Global_2667225.f_702 == 11)
			{
				Global_2667225.f_706 = { Global_2676213 };
				Global_2667225.f_709 = Global_2676213.f_5;
				Global_2667225.f_2898 = Global_2676213.f_26;
				Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 3;
			}
			else if (func_1369(&(Global_2667225.f_706), &(Global_2667225.f_709), Global_2667225.f_702, bVar3, iParam3, iParam5, iParam6, iParam8, iParam12, 0, bParam13, iParam17))
			{
				Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 3;
			}
		}
		if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 == 3)
		{
			if (bParam11)
			{
				if (bParam2)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
						__LIB_41__::func_942(&iVar2);
					}
					else
					{
						iVar2 = __LIB_1__::func_640();
						__LIB_42__::func_38(&iVar2);
					}
					if (__LIB_3__::func_262())
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							if (!ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) == Global_2667225.f_45.f_67)
							{
								iVar4 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
								if (iVar4 == Global_2667225.f_45.f_173)
								{
									__LIB_2__::func_930();
								}
								TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
							}
						}
					}
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 4;
					}
					else
					{
						iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
						if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2))
						{
							func_1343(iVar2);
							__LIB_3__::func_308(1);
							Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 6;
						}
						else
						{
							NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iVar2);
						}
					}
				}
				else
				{
					__LIB_3__::func_308(1);
					Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 6;
				}
			}
		}
		if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 == 4)
		{
			if (func_1340())
			{
				if (Global_2667225.f_45.f_65)
				{
					if (func_1123(Global_2667225.f_706, Global_2667225.f_706.f_1, __LIB_3__::func_207(Global_2667225.f_45.f_67), Global_2667225.f_709, 0))
					{
						Global_2667225.f_704 = NETWORK::GET_NETWORK_TIME();
						Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 5;
					}
				}
				else if (__LIB_2__::func_624(Global_2667225.f_45.f_67) || Global_2667225.f_45.f_67 == 0)
				{
					Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 6;
				}
			}
		}
		if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 == 5)
		{
			PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 150, true);
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 6;
				if (Global_2667225.f_45.f_176)
				{
					Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_235 = 1;
				}
				else
				{
					Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_235 = 0;
				}
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_704) > 5000)
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 4;
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_ENTER_VEHICLE")) == 7)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_2667225.f_45.f_173) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_2667225.f_45.f_173, false))
				{
					func_972(PLAYER::PLAYER_PED_ID(), Global_2667225.f_45.f_173, -1, 0);
				}
				else
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
					Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 4;
				}
			}
		}
		if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 == 6)
		{
			Global_2667225.f_703 = NETWORK::GET_NETWORK_TIME();
			if (Global_2667225.f_712)
			{
				Global_2667225.f_705 = NETWORK::GET_NETWORK_TIME();
				Global_2667225.f_712 = 0;
			}
			if (bParam7)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = bParam2;
			}
			if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_705)) >= 350)
			{
				bVar5 = true;
			}
			else
			{
				bVar5 = false;
			}
			if (Global_1836584)
			{
				__LIB_43__::func_399(Global_2667225.f_706);
			}
			if (bParam7 && !Global_2703735.f_910)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (ENTITY::DOES_ENTITY_EXIST(iVar2))
					{
						if ((ENTITY::IS_ENTITY_DEAD(iVar2, false) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false)) || __LIB_0__::func_793(iVar2))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
						}
					}
				}
			}
			if (bVar5)
			{
				if (__LIB_3__::func_276(Global_2667225.f_706, Global_2667225.f_709, bVar1, bParam1, 0, 0, 1, bParam4, bParam16, 1, Global_2667225.f_2898))
				{
					if (bParam15)
					{
						Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 7;
						return 0;
					}
					else
					{
						__LIB_6__::func_444();
					}
				}
			}
		}
		if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 == 7)
		{
			if ((Global_2667225.f_702 == 8 && Global_2667225.f_714.f_507) && Global_2667225.f_2878)
			{
				__LIB_6__::func_444();
			}
			else if (__LIB_3__::func_399(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false)) || __LIB_3__::func_167())
			{
				if (Global_2667225.f_702 == 8 && !Global_2667225.f_2878)
				{
					Global_2667225.f_2878 = 1;
				}
				else
				{
					Global_2667225.f_702 = 37;
				}
				Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 2;
				Global_2667225.f_2478 = 0;
				Global_2667225.f_2479 = 0;
				Global_2667225.f_2477 = 0;
			}
			else
			{
				__LIB_6__::func_444();
			}
		}
		if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 == 10)
		{
			if (SYSTEM::VDIST(Global_2676213, Global_2667225.f_706) > 0.1f)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar2)) || VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iVar2)))
					{
						MISC::GET_GROUND_Z_FOR_3D_COORD(Global_2667225.f_706, Global_2667225.f_706.f_1, Global_2667225.f_706.f_2, &fVar0, false, false);
						if (fVar0 == 0f || (Global_2667225.f_706.f_2 - fVar0) > 1.5f)
						{
							if (SYSTEM::VDIST(Global_2676213, Global_2667225.f_706) > 15f)
							{
								Global_2667225.f_706 = { Global_2676213 };
								if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2))
								{
									ENTITY::SET_ENTITY_COORDS(iVar2, Global_2667225.f_706, Global_2667225.f_706.f_1, (fVar0 + __LIB_2__::func_760(ENTITY::GET_ENTITY_MODEL(iVar2))), true, false, false, true);
									VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar2, 5f);
								}
								Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 11;
							}
							else
							{
								Global_2667225.f_706.f_2 = (Global_2667225.f_706.f_2 + 1f);
							}
						}
						else
						{
							if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2))
							{
								ENTITY::SET_ENTITY_COORDS(iVar2, Global_2667225.f_706, Global_2667225.f_706.f_1, (fVar0 + __LIB_2__::func_760(ENTITY::GET_ENTITY_MODEL(iVar2))), true, false, false, true);
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar2, 5f);
							}
							Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 11;
						}
					}
					else
					{
						Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 11;
					}
				}
				else
				{
					Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 11;
				}
			}
			else
			{
				Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 11;
			}
		}
		if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 == 11)
		{
			if (!bParam14)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_2667225.f_45.f_173) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Global_2667225.f_45.f_173))
				{
					ENTITY::SET_ENTITY_VISIBLE(Global_2667225.f_45.f_173, true, false);
				}
			}
			if (bParam2 || bParam7)
			{
				if (iParam9 > 0)
				{
					__LIB_3__::func_274(iParam9, 0, 0);
				}
			}
			__LIB_3__::func_221(__LIB_1__::func_694(PLAYER::PLAYER_ID()), 0, 0);
			if (ENTITY::DOES_ENTITY_EXIST(Global_2667225.f_45.f_173))
			{
				__LIB_2__::func_930();
			}
			if (!(__LIB_2__::func_624(Global_2667225.f_45.f_67) || Global_2667225.f_45.f_67 == 0) && !Global_2667225.f_490.f_5)
			{
				func_935(0, 0);
			}
			__LIB_3__::func_138(0, 0);
			if (bParam10)
			{
				__LIB_2__::func_610();
			}
			__LIB_1__::func_21();
			__LIB_7__::func_678();
			if (bParam13)
			{
				__LIB_0__::func_854();
			}
			__LIB_0__::func_858();
			return 1;
		}
	}
	else if (!Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 == 0)
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
		__LIB_42__::func_38(&(Global_2667225.f_45.f_173));
		__LIB_0__::func_858();
	}
	Global_2667225.f_703 = NETWORK::GET_NETWORK_TIME();
	return 0;
}

void func_935(int iParam0, bool bParam1)//Position - 0x5669F
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
		Var0.f_2 = (Var0.f_2 + (0.3f * IntToFloat(Global_2667225.f_710)));
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &fVar1, false, false))
		{
			fVar2 = (Var0.f_2 - (fVar1 + 1f));
			if ((MISC::ABSF(fVar2) > 0f && MISC::ABSF(fVar2) < 1f) || iParam0 == 1)
			{
				if (!bParam1)
				{
					if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
					{
						STREAMING::NEW_LOAD_SCENE_STOP();
					}
				}
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var0.f_0, Var0.f_1, fVar1, false, true, false, true);
				Global_2667225.f_710 = 0;
			}
		}
		else if (Global_2667225.f_710 < 3)
		{
			Global_2667225.f_710++;
			func_935(0, 0);
		}
		else
		{
			Global_2667225.f_710 = 0;
		}
	}
}

void func_972(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x57E45
{
	bool bVar0;
	struct<3> Var1;
	struct<3> Var2;
	bVar0 = false;
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam1))
	{
		bVar0 = true;
	}
	if (!__LIB_2__::func_623(iParam0, iParam1, bVar0))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
		Var2 = { ENTITY::GET_ENTITY_COORDS(iParam1, false) };
		if (!SYSTEM::VDIST(Var1, Var2) < 5f || !iParam2 == -1)
		{
			Var2.f_2 = (Var2.f_2 + -4f);
			Var2.f_0 = (Var2.f_0 + -4f);
			Var2.f_1 = (Var2.f_1 + -4f);
			ENTITY::SET_ENTITY_COORDS(iParam0, Var2, false, false, false, true);
		}
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0);
		ENTITY::SET_ENTITY_COLLISION(iParam0, true, false);
		ENTITY::FREEZE_ENTITY_POSITION(iParam0, false);
		PED::SET_PED_CAN_RAGDOLL(PLAYER::PLAYER_PED_ID(), false);
		PED::SET_PED_RESET_FLAG(iParam0, 150, true);
		PED::SET_PED_RESET_FLAG(iParam0, 151, true);
		if (bParam3)
		{
			PED::SET_PED_INTO_VEHICLE(iParam0, iParam1, iParam2);
		}
		else
		{
			TASK::TASK_ENTER_VEHICLE(iParam0, iParam1, -1, iParam2, 2f, 16, 0);
		}
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iParam0, false, false);
		PED::SET_PED_RESET_FLAG(iParam0, 150, true);
		if (Global_1836584)
		{
			if (__LIB_2__::func_918(ENTITY::GET_ENTITY_MODEL(iParam1)))
			{
				func_973(0);
			}
		}
	}
}

void func_973(bool bParam0)//Position - 0x57F4F
{
	struct<14> Var0;
	int iVar1;
	if (!PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
	{
		if (Global_4718592.f_168793 == 0)
		{
			if ((Global_2667225.f_2699 == -99 || Global_2667225.f_2699 == 0) || !__LIB_0__::func_348(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), 14, Global_2667225.f_2699, -1))
			{
				if (!bParam0)
				{
					iVar1 = __LIB_1__::func_360(589, -1, 0);
				}
			}
			else
			{
				iVar1 = Global_2667225.f_2699;
			}
			Var0 = { __LIB_3__::func_310(__LIB_2__::func_82(), 14, iVar1, -1) };
			__LIB_2__::func_620(PLAYER::PLAYER_PED_ID(), 14, iVar1);
			func_974(PLAYER::PLAYER_PED_ID(), 14, iVar1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 1, 0);
			func_974(PLAYER::PLAYER_PED_ID(), 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 1, 0);
		}
		else
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 380, true);
		}
	}
}

int func_974(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)//Position - 0x58028
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
		Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, iParam1, iParam2, -1) };
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
			func_1111(iVar5, iParam1, iParam2, 1);
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
					Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, 10, 0, -1) };
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
						func_1111(iVar5, 10, 0, 1);
					}
				}
				else
				{
					Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, iVar0, uVar14[iVar0], -1) };
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
								Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, 14, uVar15[iVar1], -1) };
								__LIB_0__::func_454(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
								if (BitTest(Global_78130[1 /*14*/].f_6, 1))
								{
									func_1111(iVar5, iVar0, uVar14[iVar0], 1);
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
								func_974(iParam0, iVar0, uVar14[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (BitTest(Global_78130[1 /*14*/].f_6, 1))
							{
								func_1111(iVar5, iVar0, uVar14[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, iVar0, func_1099(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					uVar16 = { __LIB_0__::func_459(iVar5, 0) };
					func_974(iParam0, iVar0, uVar16[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_1092(iParam0, 11, uVar14[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar18 = { __LIB_0__::func_466(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, 14, uVar18[iVar1], -1) };
			__LIB_0__::func_454(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
			if (BitTest(Global_78130[1 /*14*/].f_6, 1))
			{
				func_1111(iVar5, 14, uVar18[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_78128 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = __LIB_5__::func_129(iParam0, iVar5, 14, uVar18[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_974(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_1111(iVar5, iParam1, iParam2, 1);
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			if (BitTest(Global_78130[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HAIR"), 1))
			{
			}
			else if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 1, joaat("HAIR_SHRINK")))
			{
				func_974(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, iParam1, iParam2, -1) };
			}
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			func_1084(iParam0);
		}
		if (iParam5 == 0)
		{
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = __LIB_5__::func_129(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_974(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = __LIB_5__::func_129(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_974(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					iVar27 = func_1080(iVar5, iVar24, iVar23, iVar25);
					if (iVar27 == -99)
					{
						iVar27 = __LIB_5__::func_129(iParam0, iVar5, 11, iVar23, 3, 0);
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
							func_974(iParam0, 8, iVar29, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, iParam1, iParam2, -1) };
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
							iVar30 = __LIB_3__::func_408(iParam0, iParam2);
							iVar31 = __LIB_0__::func_452(iVar5, iVar23, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
							if (iVar31 != -99)
							{
								func_974(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, iParam1, iParam2, -1) };
								iVar8 = -99;
							}
							else if (iVar30 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								func_974(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, iParam1, iParam2, -1) };
							}
							else
							{
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									iVar32 = __LIB_0__::func_279(iVar5, 11, -1);
									Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, 11, iVar32, -1) };
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
								func_974(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, iParam1, iParam2, -1) };
							}
						}
					}
					else
					{
						Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, 11, iVar23, -1) };
						iVar34 = Global_78130[1 /*14*/].f_3;
						Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, 11, iParam2, -1) };
						iVar35 = Global_78130[1 /*14*/].f_3;
						if (iVar34 != iVar35)
						{
							iVar37 = __LIB_3__::func_408(iParam0, iParam2);
							Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, 8, iVar24, -1) };
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
										Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, 11, iVar38, -1) };
										iVar39 = __LIB_0__::func_452(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
									}
								}
								if (iVar5 == joaat("MP_F_Freemode_01") && ((iVar24 == 32 || iVar24 == 33) || iVar24 == 119))
								{
									if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_205(iVar5, iParam2, 11, 4), joaat("JACKET_ONLY"), 0))
									{
										iVar38 = __LIB_0__::func_279(iVar5, 11, -1);
										Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, 11, iVar38, -1) };
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
									Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, 11, iVar38, -1) };
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
								func_974(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_M_Freemode_01"))
							{
								iVar38 = __LIB_0__::func_279(iVar5, 11, -1);
								Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, 11, iVar38, -1) };
								iVar39 = __LIB_0__::func_452(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
								if (iVar39 == -99)
								{
									iVar39 = 240;
								}
								func_974(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_F_Freemode_01"))
							{
								func_974(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				__LIB_3__::func_303(iVar5, iParam2);
				if (!bParam13)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 10));
				}
			}
			func_1092(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_1080(iVar5, func_1099(iParam0, 8, -1), iParam2, func_1099(iParam0, 4, -1));
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
				func_1024(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar43 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar43, joaat("GLOVES"), 0))
			{
				iVar44 = __LIB_0__::func_350(iParam0, 11);
				iVar45 = __LIB_0__::func_350(iParam0, 4);
				iVar46 = func_1080(iVar5, iParam2, iVar44, iVar45);
				if (iVar46 == -99)
				{
					iVar46 = __LIB_5__::func_129(iParam0, iVar5, 11, iVar44, 3, 0);
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
			func_1092(iParam0, iParam1, iParam2, iParam6, 0);
			iVar49 = __LIB_0__::func_350(iParam0, 11);
			if (__LIB_0__::func_280(iVar5, iVar49, -1))
			{
				iVar50 = __LIB_0__::func_357(iVar5, iParam2, Global_78130[1 /*14*/].f_4);
				__LIB_3__::func_303(iVar5, iVar50);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_1080(iVar5, iParam2, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
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
						func_974(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			else if (iVar5 == joaat("MP_F_Freemode_01"))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_205(iVar5, iVar57, 11, 4), joaat("LOW2_OPEN_CHECK"), 0))
				{
					if (!__LIB_0__::func_451(iVar5, iParam2, __LIB_0__::func_357(iVar5, iVar58, 0)))
					{
						func_974(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_1080(iVar5, __LIB_0__::func_350(iParam0, 8), __LIB_0__::func_350(iParam0, 11), iParam2);
			}
			iVar59 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar59, joaat("GLOVES"), 0))
			{
				iVar60 = func_1080(iVar5, iVar58, iVar57, iParam2);
				if (iVar60 == -99)
				{
					iVar60 = __LIB_5__::func_129(iParam0, iVar5, 11, iVar57, 3, 0);
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
					iVar3 = __LIB_5__::func_129(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_974(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
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
								iVar6 = func_1080(iVar5, iVar3, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = __LIB_5__::func_129(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_974(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						if (!func_997(iParam0, 9, iVar63))
						{
							func_974(iParam0, 9, iVar63, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_974(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
					{
						func_974(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						func_974(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("MP_F_Freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar65 = func_1099(iParam0, 4, -1);
					iVar66 = iParam2;
				}
				else
				{
					iVar65 = iParam2;
					iVar66 = func_1099(iParam0, 11, -1);
				}
				if (__LIB_0__::func_240(iVar5, 11, iVar66, -1))
				{
					if (!__LIB_0__::func_239(iVar5, 4, iVar65, -1))
					{
						if (__LIB_0__::func_353(iVar5, 4, iVar65, &uVar67))
						{
							func_974(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (__LIB_0__::func_239(iVar5, 4, iVar65, -1))
				{
					if (__LIB_0__::func_352(iVar5, 4, iVar65, &uVar67))
					{
						func_974(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_974(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_974(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_974(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_974(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_974(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_974(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_974(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_974(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				func_1084(iParam0);
				iVar81 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
				iVar82 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
				iVar83 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar81, iVar82);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar83, joaat("FORCE_PROP"), 0))
				{
					iVar3 = __LIB_5__::func_129(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_974(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = __LIB_5__::func_129(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_974(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_975(iParam0, &uVar4))
		{
			func_974(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_974(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar8 != -99)
	{
		func_974(iParam0, 8, iVar8, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_974(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar10 != -1)
	{
		iVar84 = __LIB_0__::func_282(iVar5, func_1099(iParam0, 3, -1), iVar10);
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
				func_974(iParam0, 3, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_975(int iParam0, var uParam1)//Position - 0x59ED2
{
	int iVar0;
	int iVar1;
	*uParam1 = func_1099(PLAYER::PLAYER_PED_ID(), 2, -1);
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
		if (!func_997(iParam0, iVar1, iVar0))
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

int func_997(int iParam0, int iParam1, int iParam2)//Position - 0x5E1CE
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
	Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar0, iParam1, iParam2, -1) };
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
				if (!func_997(iParam0, iVar4, uVar8[iVar4]))
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
							if (!func_997(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_3__::func_310(iVar0, 14, iVar6, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar5)
									{
										if (func_997(iParam0, 14, iVar6))
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
						Global_78130[2 /*14*/] = { __LIB_3__::func_310(iVar0, iVar4, iVar1, -1) };
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
			if (!func_997(iParam0, 14, uVar11[iVar10]))
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
						return func_997(iParam0, 4, uVar18);
					}
				}
				else if (__LIB_0__::func_352(iVar0, 4, iParam2, &uVar18))
				{
					return func_997(iParam0, 4, uVar18);
				}
			}
			Global_78129 = (Global_78129 - 1);
		}
	}
	return 0;
}

void func_1024(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x65EFD
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
	func_1025(iParam0, bParam3, 0, -1);
}

void func_1025(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x65F4A
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
		bVar3 = func_1058(iParam0, 0);
		bVar4 = __LIB_1__::func_37(iParam0);
		bVar5 = func_1051(iParam0, iParam3);
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
							if (!__LIB_3__::func_228(Var9.f_2, Var9.f_3, iVar10))
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

int func_1051(int iParam0, int iParam1)//Position - 0x74E00
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
				iVar3 = func_1099(iParam0, 11, -1);
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
				iVar5 = func_1099(iParam0, 11, -1);
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

int func_1058(int iParam0, bool bParam1)//Position - 0x7520E
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
							iVar2 = __LIB_2__::func_999(joaat("MP_M_Freemode_01"), 11, func_1099(iParam0, 11, -1), 0);
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
						iVar3 = func_1099(iParam0, 11, -1);
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
						iVar5 = func_1099(iParam0, 8, -1);
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
							iVar7 = __LIB_2__::func_999(joaat("MP_F_Freemode_01"), 11, func_1099(iParam0, 11, -1), 0);
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
						iVar8 = func_1099(iParam0, 11, -1);
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
							iVar10 = __LIB_2__::func_999(joaat("MP_F_Freemode_01"), 11, func_1099(iParam0, 11, -1), 0);
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
							iVar11 = __LIB_2__::func_999(joaat("MP_F_Freemode_01"), 11, func_1099(iParam0, 11, -1), 0);
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
						iVar12 = func_1099(iParam0, 8, -1);
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

int func_1080(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x7EF59
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
					iVar0 = func_1080(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
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
					iVar0 = func_1080(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
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

void func_1084(int iParam0)//Position - 0x80466
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
		if (!func_1089(iParam0, &bVar14, iVar9, iVar10, iVar12) || PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			if (__LIB_0__::func_286(iVar9, 0, 0, &iVar16))
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
			if (__LIB_0__::func_286(iVar9, 1, 0, &iVar19))
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
		if (!func_1089(iParam0, &bVar14, iVar9, iVar10, iVar12))
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

int func_1089(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x80E30
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
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAZ_MASK"), 0) && !__LIB_0__::func_348(iVar0, 14, func_1099(iParam0, 14, 0), -1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_1092(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x8374A
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (func_1094(iParam0))
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
				if (((((!__LIB_3__::func_223(iVar0, iParam2, 13) && !__LIB_3__::func_223(iVar0, iParam2, 14)) && !__LIB_3__::func_223(iVar0, iParam2, 15)) && !__LIB_3__::func_223(iVar0, iParam2, 16)) && !__LIB_3__::func_223(iVar0, iParam2, 71)) && !__LIB_3__::func_223(iVar0, iParam2, 72))
				{
					__LIB_3__::func_222(MISC::GET_HASH_KEY("crewLogo"), iParam0);
				}
			}
			iVar2 = __LIB_2__::func_999(iVar0, iParam1, iParam2, iParam4);
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

int func_1094(int iParam0)//Position - 0x838DB
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
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != __LIB_0__::getMinusOneOrNull() && __LIB_0__::func_287(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar1 = func_1099(iParam0, 11, -1);
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
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != __LIB_0__::getMinusOneOrNull() && __LIB_0__::func_287(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar3 = func_1099(iParam0, 11, -1);
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

int func_1099(int iParam0, int iParam1, int iParam2)//Position - 0x83D44
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
				if (func_997(iParam0, iParam1, iVar0))
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
				if (func_997(iParam0, iParam1, iVar1))
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

void func_1111(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x86CFA
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
		if (Global_78127 != __LIB_0__::getGlobal_1574918() || iParam2 == -99)
		{
			return;
		}
		Global_78130[2 /*14*/] = { __LIB_3__::func_310(iParam0, iParam1, iParam2, -1) };
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
							func_1111(iParam0, __LIB_0__::func_33(iVar4), uVar3, 0);
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
									func_1111(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 3), 1);
								}
								else
								{
									func_1111(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 4), 1);
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
							func_1111(iParam0, 14, iVar8, 0);
						}
						else if (iParam2 >= 75 && iParam2 <= 82)
						{
							iVar8 = (83 + Global_78130[2 /*14*/].f_4);
							func_1111(iParam0, 14, iVar8, 0);
						}
					}
					else if (iParam1 == 8)
					{
						if (iParam2 >= 48 && iParam2 <= 63)
						{
							iVar8 = (64 + Global_78130[2 /*14*/].f_4);
							func_1111(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 64 && iParam2 <= 79)
						{
							iVar8 = (48 + Global_78130[2 /*14*/].f_4);
							func_1111(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 96 && iParam2 <= 111)
						{
							iVar8 = (112 + Global_78130[2 /*14*/].f_4);
							func_1111(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 112 && iParam2 <= 127)
						{
							iVar8 = (96 + Global_78130[2 /*14*/].f_4);
							func_1111(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 176 && iParam2 <= 191)
						{
							iVar8 = (160 + Global_78130[2 /*14*/].f_4);
							func_1111(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 160 && iParam2 <= 175)
						{
							iVar8 = (176 + Global_78130[2 /*14*/].f_4);
							func_1111(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 32 && iParam2 <= 47)
						{
							iVar8 = (0 + Global_78130[2 /*14*/].f_4);
							func_1111(iParam0, 11, iVar8, 0);
						}
						else if (iParam2 >= 224 && iParam2 <= 239)
						{
							iVar8 = (16 + Global_78130[2 /*14*/].f_4);
							func_1111(iParam0, 11, iVar8, 0);
						}
					}
					else if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar8 = (32 + Global_78130[2 /*14*/].f_4);
							func_1111(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 16 && iParam2 <= 31)
						{
							iVar8 = (224 + Global_78130[2 /*14*/].f_4);
							func_1111(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 220 && iParam2 <= 235)
						{
							switch (iParam2)
							{
								case 220:
									func_1111(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_0"), 8, 3), 0);
									func_1111(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_0"), 8, 3), 0);
									break;
								case 221:
									func_1111(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_1"), 8, 3), 0);
									func_1111(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_1"), 8, 3), 0);
									break;
								case 222:
									func_1111(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_2"), 8, 3), 0);
									func_1111(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_2"), 8, 3), 0);
									break;
								case 223:
									func_1111(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_3"), 8, 3), 0);
									func_1111(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_3"), 8, 3), 0);
									break;
								case 224:
									func_1111(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_4"), 8, 3), 0);
									func_1111(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_4"), 8, 3), 0);
									break;
								case 225:
									func_1111(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_5"), 8, 3), 0);
									func_1111(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_5"), 8, 3), 0);
									break;
								case 226:
									func_1111(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_6"), 8, 3), 0);
									func_1111(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_6"), 8, 3), 0);
									break;
								case 227:
									func_1111(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_7"), 8, 3), 0);
									func_1111(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_7"), 8, 3), 0);
									break;
								case 228:
									func_1111(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_8"), 8, 3), 0);
									func_1111(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_8"), 8, 3), 0);
									break;
								case 229:
									func_1111(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_9"), 8, 3), 0);
									func_1111(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_9"), 8, 3), 0);
									break;
								case 230:
									func_1111(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_10"), 8, 3), 0);
									func_1111(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_10"), 8, 3), 0);
									break;
								case 231:
									func_1111(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_11"), 8, 3), 0);
									func_1111(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_11"), 8, 3), 0);
									break;
								case 232:
									func_1111(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_12"), 8, 3), 0);
									func_1111(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_12"), 8, 3), 0);
									break;
								case 233:
									func_1111(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_13"), 8, 3), 0);
									func_1111(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_13"), 8, 3), 0);
									break;
								case 234:
									func_1111(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_14"), 8, 3), 0);
									func_1111(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_14"), 8, 3), 0);
									break;
								case 235:
									func_1111(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_15"), 8, 3), 0);
									func_1111(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_15"), 8, 3), 0);
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
									func_1111(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_0"), 7, 3), 0);
									func_1111(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_0"), 7, 3), 0);
									break;
								case 1:
									func_1111(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_1"), 7, 3), 0);
									func_1111(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_1"), 7, 3), 0);
									break;
								case 2:
									func_1111(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_2"), 7, 3), 0);
									func_1111(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_2"), 7, 3), 0);
									break;
								case 3:
									func_1111(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_3"), 7, 3), 0);
									func_1111(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_3"), 7, 3), 0);
									break;
								case 4:
									func_1111(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_4"), 7, 3), 0);
									func_1111(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_4"), 7, 3), 0);
									break;
								case 5:
									func_1111(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_5"), 7, 3), 0);
									func_1111(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_5"), 7, 3), 0);
									break;
								case 6:
									func_1111(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_6"), 7, 3), 0);
									func_1111(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_6"), 7, 3), 0);
									break;
								case 7:
									func_1111(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_7"), 7, 3), 0);
									func_1111(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_7"), 7, 3), 0);
									break;
								case 8:
									func_1111(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_8"), 7, 3), 0);
									func_1111(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_8"), 7, 3), 0);
									break;
								case 9:
									func_1111(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_9"), 7, 3), 0);
									func_1111(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_9"), 7, 3), 0);
									break;
								case 10:
									func_1111(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_10"), 7, 3), 0);
									func_1111(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_10"), 7, 3), 0);
									break;
								case 11:
									func_1111(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_11"), 7, 3), 0);
									func_1111(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_11"), 7, 3), 0);
									break;
								case 12:
									func_1111(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_12"), 7, 3), 0);
									func_1111(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_12"), 7, 3), 0);
									break;
								case 13:
									func_1111(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_13"), 7, 3), 0);
									func_1111(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_13"), 7, 3), 0);
									break;
								case 14:
									func_1111(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_14"), 7, 3), 0);
									func_1111(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_14"), 7, 3), 0);
									break;
								case 15:
									func_1111(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_15"), 7, 3), 0);
									func_1111(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_15"), 7, 3), 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_78130[2 /*14*/].f_4)
							{
								case 0:
									func_1111(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_0"), 7, 3), 0);
									func_1111(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_0"), 7, 3), 0);
									break;
								case 1:
									func_1111(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_1"), 7, 3), 0);
									func_1111(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_1"), 7, 3), 0);
									break;
								case 2:
									func_1111(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_2"), 7, 3), 0);
									func_1111(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_2"), 7, 3), 0);
									break;
								case 3:
									func_1111(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_3"), 7, 3), 0);
									func_1111(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_3"), 7, 3), 0);
									break;
								case 4:
									func_1111(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_4"), 7, 3), 0);
									func_1111(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_4"), 7, 3), 0);
									break;
								case 5:
									func_1111(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_5"), 7, 3), 0);
									func_1111(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_5"), 7, 3), 0);
									break;
								case 6:
									func_1111(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_6"), 7, 3), 0);
									func_1111(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_6"), 7, 3), 0);
									break;
								case 7:
									func_1111(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_7"), 7, 3), 0);
									func_1111(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_7"), 7, 3), 0);
									break;
								case 8:
									func_1111(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_8"), 7, 3), 0);
									func_1111(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_8"), 7, 3), 0);
									break;
								case 9:
									func_1111(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_9"), 7, 3), 0);
									func_1111(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_9"), 7, 3), 0);
									break;
								case 10:
									func_1111(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_10"), 7, 3), 0);
									func_1111(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_10"), 7, 3), 0);
									break;
								case 11:
									func_1111(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_11"), 7, 3), 0);
									func_1111(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_11"), 7, 3), 0);
									break;
								case 12:
									func_1111(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_12"), 7, 3), 0);
									func_1111(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_12"), 7, 3), 0);
									break;
								case 13:
									func_1111(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_13"), 7, 3), 0);
									func_1111(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_13"), 7, 3), 0);
									break;
								case 14:
									func_1111(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_14"), 7, 3), 0);
									func_1111(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_14"), 7, 3), 0);
									break;
								case 15:
									func_1111(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_15"), 7, 3), 0);
									func_1111(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_15"), 7, 3), 0);
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
							func_1111(iParam0, 8, iVar8, 0);
						}
					}
				}
				Global_78130[2 /*14*/] = { __LIB_3__::func_310(iParam0, iParam1, iParam2, -1) };
				if (iParam1 == 11)
				{
					iVar9 = __LIB_0__::func_358(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_1111(iParam0, 8, iVar9, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203)
					{
						switch (iParam2)
						{
							case 199:
								func_1111(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_0"), 7, 4), 0);
								break;
							case 200:
								func_1111(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_1"), 7, 4), 0);
								break;
							case 201:
								func_1111(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_2"), 7, 4), 0);
								break;
							}
					}
				}
				else if (iParam1 == 8)
				{
					iVar9 = __LIB_0__::func_357(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_1111(iParam0, 11, iVar9, 0);
					}
				}
			}
		}
	}
}

int func_1123(struct<3> Param0, float fParam1, bool bParam2)//Position - 0x882E1
{
	int* iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	if (__LIB_2__::func_154(PLAYER::PLAYER_ID()))
	{
	}
	iVar0 = __LIB_1__::func_640();
	ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
	ENTITY::SET_ENTITY_COLLISION(PLAYER::PLAYER_PED_ID(), true, false);
	PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 150, true);
	Global_2667225.f_45.f_176 = 0;
	bVar3 = false;
	bVar4 = false;
	if (Global_4718592 == 0 && !Global_1574964)
	{
		if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 < 4 && Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 > -1)
		{
			if (BitTest(Global_4718592.f_658[Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 /*22957*/].f_12181, 8))
			{
				bVar4 = true;
				if (!BitTest(Global_4718592.f_658[Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 /*22957*/].f_12181, 10))
				{
					bVar3 = true;
				}
			}
		}
	}
	if (func_1334() && !bVar3)
	{
		if (func_1333())
		{
			if (func_1327(&bVar2))
			{
				if (__LIB_3__::func_173(bVar2))
				{
					if (!bVar4)
					{
						func_972(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(bVar2), false), 0, 0);
						return 1;
					}
					else if (__LIB_2__::func_641() != -1 || BitTest(Global_4718592.f_658[Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 /*22957*/].f_12181, 10))
					{
						__LIB_2__::func_640(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(bVar2), false));
						iVar5 = __LIB_2__::func_639(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(bVar2), false), 1, 0, 0, -3);
						if (VEHICLE::IS_VEHICLE_SEAT_FREE(Global_2667225.f_45.f_173, __LIB_2__::func_641(), false))
						{
							iVar5 = __LIB_2__::func_641();
						}
						func_972(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(bVar2), false), iVar5, 0);
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(bVar2), false), false))
						{
							return 1;
						}
					}
				}
				else
				{
					return 0;
				}
			}
		}
	}
	if (Global_2667225.f_45.f_68)
	{
		if (__LIB_3__::func_379(iVar0))
		{
			if ((__LIB_3__::func_262() && ENTITY::GET_ENTITY_MODEL(iVar0) == Global_2667225.f_45.f_67) || !__LIB_3__::func_262())
			{
				if (!__LIB_35__::func_860(ENTITY::GET_ENTITY_COORDS(iVar0, true), 30f, 1, 1, 0, 0, 0, 0, 0))
				{
					if (bParam2)
					{
						ENTITY::SET_ENTITY_COORDS(iVar0, __LIB_2__::func_770(Global_2667225.f_45.f_69.f_66, Param0), true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(iVar0, fParam1);
					}
					func_1343(iVar0);
					return 1;
				}
			}
		}
	}
	if (Global_1836584 || __LIB_1__::func_141())
	{
		__LIB_42__::func_38(&iVar0);
	}
	if (func_1340())
	{
		__LIB_42__::func_38(&(Global_2667225.f_45.f_173));
		if (__LIB_2__::func_870())
		{
			if (__LIB_1__::func_599(44) && VEHICLE::IS_VEHICLE_DRIVEABLE(__LIB_2__::func_638(), false))
			{
				ENTITY::SET_ENTITY_COORDS(__LIB_2__::func_638(), __LIB_2__::func_770(Global_2667225.f_45.f_69.f_66, Param0), true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(__LIB_2__::func_638(), fParam1);
				func_1298(__LIB_2__::func_638());
				return 1;
			}
			else if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != __LIB_0__::func_878())
			{
				if (__LIB_2__::func_924(__LIB_2__::func_770(Global_2667225.f_45.f_69.f_66, Param0), fParam1, __LIB_1__::func_463(), 1))
				{
					func_1298(__LIB_2__::func_638());
					return 1;
				}
			}
			else if (func_1125(__LIB_2__::func_770(Global_2667225.f_45.f_69.f_66, Param0), fParam1, 1, __LIB_1__::func_463(), 0, 1, 0))
			{
				func_1298(__LIB_2__::func_638());
				return 1;
			}
		}
		else if (__LIB_0__::func_957(&iVar1, Global_2667225.f_45.f_69.f_66, __LIB_2__::func_770(Global_2667225.f_45.f_69.f_66, Param0), fParam1, 0, 1, 1, 0, 1, 1, 0, 0, 0, 0))
		{
			if (Global_2667225.f_45.f_177)
			{
				VEHICLE::SET_VEHICLE_STRONG(NETWORK::NET_TO_VEH(iVar1), true);
			}
			if (Global_2667225.f_45.f_178)
			{
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(NETWORK::NET_TO_VEH(iVar1), false);
			}
			if (Global_2667225.f_45.f_179)
			{
				if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Not_Allow_As_Saved_Veh", 3))
				{
					DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(iVar1), "Not_Allow_As_Saved_Veh", 1);
				}
			}
			if (Global_2667225.f_45.f_180)
			{
				if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
				{
					if (DECORATOR::DECOR_EXIST_ON(NETWORK::NET_TO_VEH(iVar1), "MPBitset"))
					{
						iVar6 = DECORATOR::DECOR_GET_INT(NETWORK::NET_TO_VEH(iVar1), "MPBitset");
					}
					MISC::SET_BIT(&iVar6, 11);
					DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(iVar1), "MPBitset", iVar6);
				}
			}
			if (Global_2667225.f_45.f_183 > -1)
			{
				VEHICLE::SET_VEHICLE_COLOURS(NETWORK::NET_TO_VEH(iVar1), Global_2667225.f_45.f_183, Global_2667225.f_45.f_183);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(NETWORK::NET_TO_VEH(iVar1), Global_2667225.f_45.f_183, Global_2667225.f_45.f_183);
			}
			if (Global_2667225.f_45.f_181)
			{
				__LIB_2__::func_626(NETWORK::NET_TO_VEH(iVar1));
			}
			__LIB_2__::func_625(NETWORK::NET_TO_VEH(iVar1), Global_2667225.f_45.f_69);
			func_1298(NETWORK::NET_TO_VEH(iVar1));
			return 1;
		}
	}
	return 0;
}

int func_1125(struct<3> Param0, float fParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x88910
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	struct<31> Var7;
	struct<31> Var8;
	struct<31> Var9;
	bool bVar10;
	int iVar11;
	if (!__LIB_1__::func_599(8))
	{
		__LIB_1__::func_891(0, 0, 0, 0, 0, 0, 0);
		__LIB_1__::func_653(8);
	}
	if (Global_1585857[iParam3 /*142*/].f_66 == 0)
	{
		return 1;
	}
	if (BitTest(Global_1585857[iParam3 /*142*/].f_103, 6))
	{
		if (!__LIB_1__::func_599(16))
		{
			__LIB_1__::func_653(16);
		}
	}
	__LIB_1__::func_653(31);
	if (!__LIB_2__::func_734())
	{
		if (!__LIB_1__::func_599(0))
		{
			if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(__LIB_2__::func_733(0)))
			{
				if (NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
				{
					if (!__LIB_0__::func_863())
					{
						if (!__LIB_2__::func_923())
						{
							__LIB_7__::func_73(iParam3);
							iVar1 = Global_1585857[iParam3 /*142*/].f_66;
							if (!__LIB_1__::func_814(iVar1) || !__LIB_0__::func_371(iVar1, 1))
							{
								if (!__LIB_0__::func_113(iVar1))
								{
								}
								else
								{
									__LIB_9__::func_527(iParam3, -1);
								}
								return 1;
							}
							else if (__LIB_0__::func_799(iVar1))
							{
								iVar3 = 0;
								if ((NETWORK::GET_CLOUD_TIME_AS_INT() - Global_2703735.f_61.f_69) < 15)
								{
									iVar3 = 1;
								}
								if (__LIB_1__::func_24())
								{
									iVar3 = 1;
								}
								if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME_ACCURATE(), Global_2667225.f_26.f_3) < 15000)
								{
									Global_2667225.f_26.f_3 = NETWORK::GET_NETWORK_TIME_ACCURATE();
									iVar3 = 1;
								}
								if (bParam6)
								{
									iVar3 = 1;
								}
								if (Global_2715699.f_2846.f_148)
								{
									iVar4 = 0;
									iVar3 = 1;
								}
								else
								{
									iVar4 = 1;
								}
								bVar5 = true;
								if (__LIB_3__::func_462(PLAYER::PLAYER_ID()) || (CAM::IS_SCREEN_FADED_OUT() || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()))
								{
									bVar5 = false;
								}
								if (Global_2715699.f_2846.f_148)
								{
									if (BitTest(Global_1585857[iParam3 /*142*/].f_103, 11))
									{
										MISC::CLEAR_BIT(&(Global_1585857[iParam3 /*142*/].f_103), 11);
									}
								}
								bVar6 = false;
								if (bParam5)
								{
									bVar6 = true;
								}
								else if (BitTest(Global_1585857[iParam3 /*142*/].f_103, 11))
								{
									Var7.f_4 = 1125515264;
									Var7.f_5 = 1;
									Var7.f_6 = 1;
									Var7.f_8 = 1082130432;
									Var7.f_9 = 1176255488;
									Var7.f_10 = 1;
									Var7.f_13 = 1;
									Var7.f_15 = 2;
									Var7.f_22 = 2;
									Var7.f_25 = 1;
									Var7.f_26 = 1;
									Var7.f_29 = 1123024896;
									Var7.f_30 = 1;
									Var7.f_4 = 50f;
									Var7.f_5 = 0;
									Var7.f_6 = 0;
									Var7.f_10 = iVar4;
									Var7.f_11 = iVar3;
									Var7.f_12 = 1;
									Var7.f_13 = bVar5;
									Var7.f_14 = 1;
									Var7.f_25 = 0;
									iVar2 = 0;
									while (iVar2 < 2)
									{
										Var7.f_15[iVar2 /*3*/] = { Global_2703735.f_61.f_82[iVar2 /*3*/] };
										Var7.f_22[iVar2] = Global_2703735.f_61.f_89[iVar2];
										iVar2++;
									}
									if (func_45(-145.7451f, -1167.9371f, 24.2819f, 0f, 0f, 0f, iVar1, 1, &Param0, &fParam1, &Var7))
									{
										bVar6 = true;
									}
									else if (func_45(-234.9622f, -1171.113f, 21.8657f, 0f, 0f, 0f, iVar1, 1, &Param0, &fParam1, &Var7))
									{
										bVar6 = true;
									}
								}
								else if (BitTest(Global_1585857[iParam3 /*142*/].f_103, 6))
								{
									if (__LIB_3__::func_225(&Param0, &fParam1))
									{
										bVar6 = true;
									}
								}
								else
								{
									if (bParam4)
									{
										if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Param0)))
										{
											bParam4 = false;
										}
									}
									if (!bParam4)
									{
										Var8.f_4 = 1125515264;
										Var8.f_5 = 1;
										Var8.f_6 = 1;
										Var8.f_8 = 1082130432;
										Var8.f_9 = 1176255488;
										Var8.f_10 = 1;
										Var8.f_13 = 1;
										Var8.f_15 = 2;
										Var8.f_22 = 2;
										Var8.f_25 = 1;
										Var8.f_26 = 1;
										Var8.f_29 = 1123024896;
										Var8.f_30 = 1;
										Var8.f_0 = 10f;
										Var8.f_10 = iVar4;
										Var8.f_11 = iVar3;
										Var8.f_12 = 1;
										Var8.f_13 = bVar5;
										Var8.f_14 = 1;
										Var8.f_25 = 0;
										iVar2 = 0;
										while (iVar2 < 2)
										{
											Var8.f_15[iVar2 /*3*/] = { Global_2703735.f_61.f_82[iVar2 /*3*/] };
											Var8.f_22[iVar2] = Global_2703735.f_61.f_89[iVar2];
											iVar2++;
										}
										if (func_45(Param0, 0f, 0f, 0f, iVar1, 1, &Param0, &fParam1, &Var8))
										{
											bVar6 = true;
										}
									}
									else
									{
										Var9.f_4 = 1125515264;
										Var9.f_5 = 1;
										Var9.f_6 = 1;
										Var9.f_8 = 1082130432;
										Var9.f_9 = 1176255488;
										Var9.f_10 = 1;
										Var9.f_13 = 1;
										Var9.f_15 = 2;
										Var9.f_22 = 2;
										Var9.f_25 = 1;
										Var9.f_26 = 1;
										Var9.f_29 = 1123024896;
										Var9.f_30 = 1;
										Var9.f_3 = bParam4;
										Var9.f_10 = iVar4;
										Var9.f_11 = iVar3;
										Var9.f_12 = 1;
										Var9.f_13 = bVar5;
										Var9.f_14 = 1;
										Var9.f_25 = 0;
										iVar2 = 0;
										while (iVar2 < 2)
										{
											Var9.f_15[iVar2 /*3*/] = { Global_2703735.f_61.f_82[iVar2 /*3*/] };
											Var9.f_22[iVar2] = Global_2703735.f_61.f_89[iVar2];
											iVar2++;
										}
										if (func_45(Param0, 0f, 0f, 0f, iVar1, 1, &Param0, &fParam1, &Var9))
										{
											bVar6 = true;
										}
									}
								}
								if (bVar6)
								{
									MISC::CLEAR_AREA(Param0, 2f, true, false, false, false);
									__LIB_0__::func_957(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_38), iVar1, Param0, fParam1, 0, 1, 0, 0, 1, 1, 0, 0, 0, 0);
									NETWORK::SET_NETWORK_ID_ALWAYS_EXISTS_FOR_PLAYER(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_38, PLAYER::PLAYER_ID(), true);
									iVar0 = NETWORK::NET_TO_VEH(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_38);
									ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iVar0, true);
									VEHICLE::SET_CLEAR_FREEZE_WAITING_ON_COLLISION_ONCE_PLAYER_ENTERS(iVar0, true);
									VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 5f);
									__LIB_20__::func_899(&iVar0, iParam3);
									if ((__LIB_1__::func_629() || __LIB_2__::func_632()) || __LIB_2__::func_631())
									{
										ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
									}
									__LIB_8__::func_248(iVar0, iParam3);
									if (!bVar5)
									{
										NETWORK::NETWORK_FADE_IN_ENTITY(iVar0, true, 1);
									}
									if (BitTest(Global_1585857[iParam3 /*142*/].f_103, 11))
									{
										__LIB_1__::func_653(34);
									}
									else
									{
										__LIB_1__::func_600(34);
									}
									if (iParam3 >= 0 && iParam3 < 363)
									{
										MISC::SET_BIT(&(Global_1585857[iParam3 /*142*/].f_103), 0);
										iVar11 = 0;
										while (iVar11 < 363)
										{
											bVar10 = false;
											if (iVar11 != iParam3)
											{
												if (BitTest(Global_1585857[iVar11 /*142*/].f_103, 11))
												{
													MISC::CLEAR_BIT(&(Global_1585857[iVar11 /*142*/].f_103), 11);
													bVar10 = true;
												}
												if (BitTest(Global_1585857[iVar11 /*142*/].f_103, 0))
												{
													MISC::CLEAR_BIT(&(Global_1585857[iVar11 /*142*/].f_103), 0);
													bVar10 = true;
												}
												if (BitTest(Global_1585857[iVar11 /*142*/].f_103, 6))
												{
													__LIB_11__::func_282(iVar11);
													bVar10 = true;
												}
												if (bVar10)
												{
													__LIB_3__::func_578(iVar11, &(Global_1585857[iVar11 /*142*/]), 1, -1, 0, 0);
												}
											}
											iVar11++;
										}
									}
									if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iVar0, false))
									{
										if (BitTest(Global_2715699.f_5986, 2))
										{
											VEHICLE::LOWER_CONVERTIBLE_ROOF(iVar0, true);
										}
									}
									__LIB_3__::func_578(iParam3, &(Global_1585857[iParam3 /*142*/]), 1, -1, 0, 0);
									__LIB_3__::func_224(iVar0);
									VEHICLE::SET_VEHICLE_DOORS_LOCKED(iVar0, 1);
									if (bParam2)
									{
										STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar1);
									}
									__LIB_1__::func_653(0);
									__LIB_1__::func_653(44);
									__LIB_1__::func_600(10);
									__LIB_1__::func_600(1);
									__LIB_1__::func_600(2);
									__LIB_1__::func_600(9);
									__LIB_1__::func_600(12);
									__LIB_1__::func_600(31);
									__LIB_1__::func_600(32);
									__LIB_1__::func_600(33);
									__LIB_1__::func_600(35);
									__LIB_1__::func_600(37);
									__LIB_1__::func_600(38);
									__LIB_2__::func_627();
									Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_120 = 0;
									return 1;
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

void func_1298(int iParam0)//Position - 0xA2638
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
	{
		if (NETWORK::NETWORK_GET_ENTITY_IS_LOCAL(iParam0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, false, true);
		}
	}
	ENTITY::SET_ENTITY_VISIBLE(iParam0, false, false);
	ENTITY::FREEZE_ENTITY_POSITION(iParam0, true);
	func_1343(iParam0);
	__LIB_2__::func_640(iParam0);
	Global_1585234 = iParam0;
	if (Global_2667225.f_45.f_172)
	{
		__LIB_20__::func_898(iParam0, 1);
	}
	else
	{
		__LIB_8__::func_61(iParam0, __LIB_1__::func_696(PLAYER::PLAYER_ID()));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
	}
	Global_2667225.f_45.f_176 = 1;
}

int func_1327(var uParam0)//Position - 0xA3564
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	if ((((Global_4718592 == 0 && Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 < 4) && Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 > -1) && BitTest(Global_4718592.f_658[Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 /*22957*/].f_12181, 8)) && !Global_1574964)
	{
		if (__LIB_2__::func_644())
		{
			iVar2 = __LIB_2__::func_642(__LIB_2__::func_643());
			if (iVar2 > -1)
			{
				iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar2));
				*uParam0 = iVar3;
			}
			if (*uParam0 != __LIB_0__::getMinusOneOrNull() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(*uParam0))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			if (!BitTest(Global_4718592.f_658[Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 /*22957*/].f_12181, 10))
			{
				return 0;
			}
			iVar0 = 0;
			while (iVar0 <= 5)
			{
				iVar5 = __LIB_2__::func_642(iVar0);
				if (iVar5 > -1)
				{
					iVar6 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar5);
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar6))
					{
						bVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar6);
						if (!__LIB_3__::func_144(bVar7, 0, 0) && !PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(bVar7)))
						{
							*uParam0 = bVar7;
							bVar4 = true;
						}
						else
						{
							iVar0++;
						}
						if (bVar4)
						{
							return 1;
						}
						else
						{
							return 0;
						}
						Jump @555; //curOff = 335
						if (!__LIB_1__::func_837())
						{
							iVar0 = 0;
							while (iVar0 < 32)
							{
								bVar1 = iVar0;
								if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bVar1))
								{
									if (__LIB_1__::func_693(bVar1, 0, 1))
									{
										if (!bVar1 == PLAYER::PLAYER_ID())
										{
											if (PLAYER::GET_PLAYER_TEAM(bVar1) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
											{
												if (NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), bVar1))
												{
													*uParam0 = bVar1;
													return 1;
												}
											}
										}
									}
								}
								iVar0++;
							}
							*uParam0 = -1;
						}
						else
						{
							iVar0 = 0;
							while (iVar0 < 32)
							{
								bVar1 = iVar0;
								if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bVar1))
								{
									if (__LIB_1__::func_693(bVar1, 0, 1))
									{
										if (!bVar1 == PLAYER::PLAYER_ID())
										{
											if (func_1328(bVar1) && PLAYER::GET_PLAYER_TEAM(bVar1) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
											{
												if (NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), bVar1))
												{
													*uParam0 = bVar1;
													return 1;
												}
											}
										}
									}
								}
								iVar0++;
							}
							*uParam0 = -1;
						}
						return 0;
					}
int func_1328(bool bParam0)//Position - 0xA3793
{
	if ((MISC::GET_FRAME_COUNT() % 5) == 0)
	{
	}
	if (!Global_2667225.f_2664 == -1)
	{
		if (BitTest(Global_2667225.f_2665, bParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_1333()//Position - 0xA380C
{
	bool bVar0;
	if (__LIB_1__::func_837())
	{
		if (func_1327(&bVar0))
		{
			if (func_1328(bVar0))
			{
				if (!Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_234)
				{
					return 1;
				}
			}
		}
	}
	else if (__LIB_2__::func_644())
	{
		return 1;
	}
	return 0;
}

int func_1334()//Position - 0xA3851
{
	var uVar0;
	if (__LIB_2__::func_645() || ((((Global_4718592 == 0 && Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 < 4) && Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 > -1) && BitTest(Global_4718592.f_658[Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 /*22957*/].f_12181, 8)) && !Global_1574964))
	{
		if (func_1327(&uVar0))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_1340()//Position - 0xA39C6
{
	bool bVar0;
	var uVar1;
	if (__LIB_3__::func_262())
	{
		if (STREAMING::IS_MODEL_A_VEHICLE(Global_2667225.f_45.f_67))
		{
		}
		if (STREAMING::IS_MODEL_A_VEHICLE(Global_2667225.f_45.f_69.f_66))
		{
		}
		if (func_1334())
		{
			if (func_1333())
			{
				return 1;
			}
		}
		bVar0 = false;
		if (__LIB_2__::func_870())
		{
			Global_2667225.f_45.f_69.f_66 = Global_1585857[__LIB_1__::func_463() /*142*/].f_66;
			bVar0 = true;
		}
		if (!bVar0)
		{
			if (Global_2667225.f_45.f_68)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_2667225.f_2669))
				{
					if (Global_2667225.f_45.f_67 == ENTITY::GET_ENTITY_MODEL(Global_2667225.f_2669) || Global_2667225.f_45.f_67 == 0)
					{
						if (__LIB_2__::func_154(PLAYER::PLAYER_ID()) && !Global_2667225.f_45.f_67 == 0)
						{
							bVar0 = true;
							if (Global_2667225.f_45.f_172)
							{
							}
						}
						else
						{
							Global_2667225.f_45.f_69.f_66 = ENTITY::GET_ENTITY_MODEL(Global_2667225.f_2669);
							__LIB_8__::func_61(Global_2667225.f_2669, __LIB_1__::func_696(PLAYER::PLAYER_ID()));
							bVar0 = true;
						}
					}
				}
			}
		}
		if (Global_2667225.f_45.f_67 == 0 && !bVar0)
		{
			__LIB_2__::func_648();
			VEHICLE::GET_RANDOM_VEHICLE_MODEL_IN_MEMORY(true, &(Global_2667225.f_45.f_69.f_66), &uVar1);
			if (Global_2667225.f_45.f_69.f_66 == 0)
			{
				Global_2667225.f_45.f_69.f_66 = __LIB_2__::func_647();
			}
		}
		else if (!__LIB_2__::func_870())
		{
			if (Global_2667225.f_45.f_172)
			{
				if (!Global_2667225.f_45.f_69.f_66 == Global_2667225.f_45.f_67 && !__LIB_1__::func_663())
				{
					__LIB_2__::func_648();
				}
			}
			else
			{
				Global_2667225.f_45.f_69.f_66 = Global_2667225.f_45.f_67;
			}
		}
		if (!Global_2667225.f_45.f_69.f_66 == 0)
		{
			STREAMING::REQUEST_MODEL(Global_2667225.f_45.f_69.f_66);
			if (STREAMING::HAS_MODEL_LOADED(Global_2667225.f_45.f_69.f_66))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_1343(int iParam0)//Position - 0xA3C48
{
	bool bVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	struct<3> Var5;
	bVar0 = false;
	if (__LIB_2__::func_917(iParam0, &bVar0))
	{
		VEHICLE::SET_VEHICLE_FIXED(iParam0);
		__LIB_2__::func_659(iParam0);
		VEHICLE::SET_VEHICLE_ENGINE_ON(iParam0, true, true, false);
		VEHICLE::SET_VEHICLE_LIGHTS(iParam0, 3);
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		if (VEHICLE::IS_THIS_MODEL_A_CAR(iVar1))
		{
			if (iVar1 == joaat("trophytruck") || iVar1 == joaat("trophytruck2"))
			{
				fVar2 = 2f;
				fVar3 = VEHICLE::GET_VEHICLE_DIRT_LEVEL(iParam0);
				if (fVar3 > fVar2)
				{
					fVar3 = fVar2;
					VEHICLE::SET_VEHICLE_DIRT_LEVEL(iParam0, fVar3);
				}
			}
		}
		if (VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iParam0)) || VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iParam0)))
		{
			VEHICLE::SET_HELI_BLADES_FULL_SPEED(iParam0);
			if (__LIB_10__::func_720(PLAYER::PLAYER_ID()))
			{
				__LIB_10__::func_727(iParam0);
			}
		}
		__LIB_3__::func_208(iParam0);
		if (PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) > -1)
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_TEAM(iParam0, PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()), false);
		}
		if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0, false))
		{
			func_972(PLAYER::PLAYER_PED_ID(), iParam0, -1, 0);
		}
		if (Global_1836584)
		{
			__LIB_2__::func_654(iParam0);
			VEHICLE::SET_VEHICLE_NO_EXPLOSION_DAMAGE_FROM_DRIVER(iParam0, !__LIB_1__::func_141());
			if (iVar1 == joaat("ruiner2"))
			{
				VEHICLE::SET_VEHICLE_WEAPON_CAN_TARGET_OBJECTS(iParam0, true);
			}
			if (iVar1 == joaat("blazer5"))
			{
				if (VEHICLE::GET_HAS_RETRACTABLE_WHEELS(iParam0))
				{
					if (ENTITY::IS_ENTITY_IN_WATER(iParam0) && !VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iParam0))
					{
						VEHICLE::SET_WHEELS_RETRACTED_INSTANTLY(iParam0);
						Global_2667225.f_2890 = 1;
					}
					else
					{
						VEHICLE::SET_WHEELS_EXTENDED_INSTANTLY(iParam0);
						Global_2667225.f_2891 = 1;
					}
				}
			}
			if (Global_2667225.f_2892)
			{
				if (iVar1 == joaat("deluxo"))
				{
					__LIB_2__::func_653(iParam0, 1);
					__LIB_2__::func_652(iParam0, 1);
					VEHICLE::SET_SPECIAL_FLIGHT_MODE_RATIO(iParam0, (0.75f - MISC::GET_FRAME_TIME()));
					VEHICLE::SET_SPECIAL_FLIGHT_MODE_TARGET_RATIO(iParam0, 1f);
					Global_2667225.f_2892 = 0;
				}
				else if (iVar1 == joaat("stromberg") && ENTITY::IS_ENTITY_IN_WATER(iParam0))
				{
					VEHICLE::TRANSFORM_TO_SUBMARINE(iParam0, true);
					Global_2667225.f_2892 = 0;
				}
			}
			if (__LIB_2__::func_651(ENTITY::GET_ENTITY_MODEL(iParam0)))
			{
				if (Global_2667225.f_2894)
				{
					VEHICLE::SET_VEHICLE_FLIGHT_NOZZLE_POSITION_IMMEDIATE(iParam0, 1f);
					VEHICLE::SET_VEHICLE_FLIGHT_NOZZLE_POSITION(iParam0, 1f);
					VEHICLE::SET_VEHICLE_FORWARD_SPEED(iParam0, 0f);
				}
				else
				{
					VEHICLE::SET_VEHICLE_FLIGHT_NOZZLE_POSITION(iParam0, 0f);
					VEHICLE::SET_VEHICLE_FLIGHT_NOZZLE_POSITION_IMMEDIATE(iParam0, 0f);
					VEHICLE::SET_VEHICLE_FLIGHT_NOZZLE_POSITION(iParam0, 0f);
					Global_2667225.f_2895 = 1;
					Global_2667225.f_2896 = MISC::GET_FRAME_COUNT();
					VEHICLE::SET_DISABLE_VERTICAL_FLIGHT_MODE_TRANSITION(iParam0, true);
				}
				VEHICLE::CONTROL_LANDING_GEAR(iParam0, 3);
			}
			if (iVar1 == joaat("submersible") || iVar1 == joaat("submersible2"))
			{
				if (BitTest(Global_4718592.f_26, 25))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iParam0))
					{
						__LIB_2__::func_650(iParam0);
					}
				}
			}
		}
		if (Global_1836588)
		{
			VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(iParam0, false);
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(ENTITY::GET_ENTITY_MODEL(iParam0));
		if (__LIB_0__::func_492(PLAYER::PLAYER_ID()) == 189)
		{
			if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
			{
				if (DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
				{
					iVar4 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
				}
				MISC::SET_BIT(&iVar4, 11);
				DECORATOR::DECOR_SET_INT(iParam0, "MPBitset", iVar4);
			}
		}
		if (BitTest(Global_4718592.f_18, 24) || (__LIB_2__::func_649() && NETWORK::NETWORK_IS_ACTIVITY_SESSION()))
		{
			VEHICLE::SET_BIKE_EASY_TO_LAND(iParam0, true);
		}
	}
	if (bVar0)
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iParam0);
	}
	Global_2667225.f_2692 = { Var5 };
}

int func_1369(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, var uParam5, int iParam6, var uParam7, var uParam8, int iParam9, bool bParam10, int iParam11)//Position - 0xA4B4B
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	float fVar3;
	bVar0 = false;
	bVar1 = false;
	if (!__LIB_0__::func_114())
	{
		if (!__LIB_0__::func_855(PLAYER::PLAYER_ID()) && !Global_2689235[PLAYER::PLAYER_ID() /*453*/] == 10)
		{
			return 0;
		}
	}
	if (!Global_2667225.f_676 == 0 && NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_679) < __LIB_0__::func_853(0))
	{
		Global_2667225.f_680 = MISC::GET_FRAME_COUNT();
		return 0;
	}
	if (bParam10)
	{
		if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			bParam10 = false;
		}
	}
	if (!SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2667225.f_612)
	{
		if (!Global_2667225.f_606 == 0)
		{
			if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_611) < __LIB_0__::func_853(0))
			{
				return 0;
			}
			else
			{
				Global_2667225.f_606 = 0;
			}
		}
	}
	else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_609) > 30000)
	{
		Global_2667225.f_606 = 0;
	}
	if (Global_2667225.f_606 == 0)
	{
		Global_2667225.f_607 = 0;
		Global_2667225.f_608 = 0;
		Global_2667225.f_659 = 0;
		Global_2667225.f_609 = NETWORK::GET_NETWORK_TIME();
		Global_2667225.f_612 = SCRIPT::GET_ID_OF_THIS_THREAD();
		Global_2667225.f_606 = 1;
		Global_2667225.f_611 = NETWORK::GET_NETWORK_TIME();
		Global_2667225.f_2697 = uParam5;
		Global_2667225.f_2735 = 0;
		__LIB_0__::func_851();
		if (bParam10)
		{
			__LIB_0__::func_854();
		}
	}
	switch (Global_2667225.f_606)
	{
		case 1:
			if (func_1377(&(Global_2667225.f_623), iParam2, bParam3, iParam4, iParam6, uParam7, uParam8, iParam11))
			{
				if (Global_2667225.f_489 == 11 || Global_2667225.f_2697)
				{
					bVar0 = true;
				}
				else
				{
					__LIB_3__::func_255(Global_2667225.f_623, &(Global_2667225.f_660), iParam9, Global_2667225.f_489 == 37, iParam11);
					Global_2667225.f_657 = 0;
					Global_2667225.f_658 = 0;
					Global_2667225.f_610 = NETWORK::GET_NETWORK_TIME();
					Global_2667225.f_609 = NETWORK::GET_NETWORK_TIME();
					Global_2667225.f_606 = 2;
				}
			}
			break;
		case 2:
			if (Global_2667225.f_657)
			{
				if (Global_2667225.f_661 == Global_2667225.f_660)
				{
					if (Global_2667225.f_658 && !Global_2667225.f_659 == -1)
					{
						if (((Global_2667225.f_518 && !__LIB_3__::func_254()) && __LIB_3__::func_253(Global_2676213, Global_2676213.f_4, &Var2, 1)) && Global_2667225.f_2735 == 0)
						{
							func_67(Global_2667225.f_623[Global_2667225.f_659 /*3*/], 0);
							__LIB_2__::func_662(-1);
						}
						else if (bParam10)
						{
							if (iParam11 != 0)
							{
								bVar1 = __LIB_2__::func_765(Global_2667225.f_623[Global_2667225.f_659 /*3*/], Global_2667225.f_623.f_16[Global_2667225.f_659], iParam11, 1, 0.5f);
								if (!bVar1)
								{
									bVar0 = true;
								}
							}
							else
							{
								if (bParam3)
								{
									fVar3 = 2f;
								}
								else
								{
									fVar3 = 0.3f;
								}
								bVar1 = __LIB_2__::func_873(Global_2667225.f_623[Global_2667225.f_659 /*3*/], fVar3);
								if (!bVar1)
								{
									bVar0 = true;
								}
							}
							if (bVar1)
							{
								Global_2667225.f_606 = 3;
								Global_2667225.f_700 = NETWORK::GET_NETWORK_TIME_ACCURATE();
							}
						}
						else
						{
							bVar0 = true;
						}
					}
					else
					{
						func_1370(&(Global_2667225.f_623));
						__LIB_2__::func_662(-1);
					}
				}
				else
				{
					Global_2667225.f_657 = 0;
					Global_2667225.f_658 = 0;
					Global_2667225.f_659 = -1;
				}
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_610) > 3000 || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_610) < 0)
			{
				if (Global_2667225.f_608 < 3)
				{
					Global_2667225.f_608++;
					Global_2667225.f_606 = 1;
				}
				else
				{
					Global_2667225.f_606 = 4;
				}
			}
			break;
		case 3:
			if (bParam10)
			{
				if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_700) < 10000)
				{
					if (NETWORK::NETWORK_ENTITY_AREA_DOES_EXIST(Global_2667225.f_699))
					{
						if (NETWORK::NETWORK_ENTITY_AREA_HAVE_ALL_REPLIED(Global_2667225.f_699))
						{
							if (!NETWORK::NETWORK_ENTITY_AREA_IS_OCCUPIED(Global_2667225.f_699))
							{
								bVar0 = true;
							}
							else
							{
								func_67(Global_2667225.f_623[Global_2667225.f_659 /*3*/], 0);
								__LIB_2__::func_662(-1);
							}
						}
					}
					else
					{
						__LIB_2__::func_662(-1);
					}
				}
				else
				{
					__LIB_2__::func_662(1);
				}
			}
			else
			{
				bVar0 = true;
			}
			break;
		case 4:
			if (func_1377(&(Global_2667225.f_623), iParam2, bParam3, iParam4, iParam6, uParam7, uParam8, iParam11))
			{
				Global_2667225.f_606 = 5;
				Global_2667225.f_659 = 0;
			}
			break;
		case 5:
			bVar0 = true;
			break;
	}
	Global_2667225.f_611 = NETWORK::GET_NETWORK_TIME();
	if (bVar0)
	{
		if (Global_2667225.f_489 == 8)
		{
			Global_2667225.f_714.f_503 = Global_2667225.f_714.f_502;
		}
		if (Global_2667225.f_659 == -1)
		{
			Global_2667225.f_659 = 0;
		}
		*uParam0 = { Global_2667225.f_623[Global_2667225.f_659 /*3*/] };
		*uParam1 = Global_2667225.f_623.f_16[Global_2667225.f_659];
		if (Global_2667225.f_45.f_52)
		{
			if (Global_2667225.f_489 == 3 && SYSTEM::VMAG(Global_2667225.f_45.f_49) > 0f)
			{
				if (bParam3)
				{
				}
				else
				{
					Var2 = { Global_2667225.f_45.f_49 - *uParam0 };
					*uParam1 = MISC::GET_HEADING_FROM_VECTOR_2D(Var2.f_0, Var2.f_1);
					if (Global_2667225.f_45.f_53)
					{
						*uParam1 = (*uParam1 + 180f);
					}
					Global_2667225.f_2673 = 1;
				}
			}
		}
		Global_2667225.f_2735 = 0;
		Global_2667225.f_606 = 0;
		__LIB_0__::func_851();
		if (bParam10)
		{
			if (!__LIB_3__::func_139(PLAYER::PLAYER_ID()))
			{
				__LIB_0__::func_854();
			}
		}
		return 1;
	}
	return 0;
}

void func_1370(var uParam0)//Position - 0xA50D3
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_67(*(uParam0[iVar0 /*3*/]), 0);
		iVar0++;
	}
}

int func_1377(var uParam0, int iParam1, bool bParam2, int iParam3, int iParam4, var uParam5, var uParam6, int iParam7)//Position - 0xA54C1
{
	int iVar0;
	int iVar1;
	bool bVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	struct<3> Var13;
	struct<3> Var14;
	int iVar15;
	int iVar16;
	struct<3> Var17;
	struct<34> Var18;
	struct<13> Var19;
	int iVar20;
	struct<3> Var21;
	struct<3> Var22;
	struct<3> Var23;
	struct<3> Var24;
	struct<3> Var25[4];
	var uVar26[4];
	int iVar27[4];
	var uVar28[4];
	float fVar29;
	int iVar30;
	bool bVar31;
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	bool bVar37;
	int iVar38;
	bool bVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	var uVar43;
	struct<4> Var44;
	struct<4> Var45;
	int iVar46;
	int iVar47;
	struct<61> Var48;
	int iVar49;
	bVar2 = false;
	Var18 = 5;
	Var18.f_16 = 5;
	Var18.f_22 = 5;
	Var18.f_28 = 5;
	Var19 = 5;
	Var19.f_6 = 5;
	Var19.f_12 = 5;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!__LIB_1__::func_693(PLAYER::PLAYER_ID(), 0, 0))
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_TUTORIAL_SESSION_CHANGE_PENDING())
	{
		return 0;
	}
	if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_592) > 60000 || !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2667225.f_591)
	{
		Global_2667225.f_587 = 0;
		Global_2667225.f_589 = 0;
		Global_2667225.f_667 = 0;
		Global_2667225.f_668 = 0;
		Global_2667225.f_2478 = 0;
		Global_2667225.f_2479 = 0;
		Global_2667225.f_2477 = 0;
	}
	if (iParam1 == 13 || Global_2667225.f_489 == 13)
	{
		if (!Global_2667225.f_2478)
		{
			if (Global_2667225.f_2477 == 0)
			{
				if (__LIB_35__::func_860(Global_2676213, 150f, 1, 1, 0, 0, 0, 0, 0))
				{
					__LIB_3__::func_261(Global_2676213);
					Global_2667225.f_2479 = 0;
					Global_2667225.f_2476 = NETWORK::GET_NETWORK_TIME();
					Global_2667225.f_2477 = 1;
				}
				else
				{
					Global_2667225.f_2479 = 1;
					Global_2667225.f_2478 = 1;
					Global_2667225.f_2477 = 2;
				}
			}
			if (Global_2667225.f_2477 == 1)
			{
				if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_2476) > 4000 || Global_2667225.f_2479 == 0)
				{
					Global_2667225.f_2478 = 1;
					Global_2667225.f_2477 = 2;
				}
				else if (Global_2667225.f_2479 == 1)
				{
					Global_2667225.f_2478 = 1;
					Global_2667225.f_2477 = 2;
				}
				else
				{
					return 0;
				}
			}
		}
	}
	if (Global_2667225.f_587 == 0)
	{
		__LIB_2__::func_941();
		Global_2667225.f_592 = NETWORK::GET_NETWORK_TIME();
		Global_2667225.f_591 = SCRIPT::GET_ID_OF_THIS_THREAD();
		Global_2667225.f_701 = 0;
		Global_2667225.f_515 = 0;
		Global_2667225.f_520 = { Global_2667225.f_45.f_49 };
		Global_2667225.f_520.f_3 = Global_2667225.f_45.f_55;
		Global_2667225.f_520.f_4 = Global_2667225.f_45.f_58;
		Global_2667225.f_520.f_30 = __LIB_3__::func_406();
		Global_2667225.f_555.f_16 = Global_2667225.f_45.f_312;
		Global_2667225.f_555.f_15 = Global_2667225.f_45.f_65;
		Global_2667225.f_555.f_30 = Global_2667225.f_45.f_182;
		Global_2667225.f_555.f_25 = 0;
		Global_2667225.f_588 = 0;
		Global_2667225.f_520.f_13[1 /*3*/] = { Global_2667225.f_45.f_313 };
		Global_2667225.f_520.f_20[1] = Global_2667225.f_45.f_316;
		Global_2667225.f_555.f_4 = 125f;
		Global_2667225.f_2673 = 0;
		Global_2667225.f_667 = 0;
		Global_2667225.f_668 = 0;
		Global_2667225.f_590 = 0;
		if (!Global_2667225.f_45.f_52)
		{
			Global_2667225.f_45.f_49 = { 0f, 0f, 0f };
		}
		Global_2667225.f_489 = iParam1;
		if (Global_2667225.f_489 == 0 || __LIB_2__::func_40(PLAYER::PLAYER_ID(), 0))
		{
			Global_2667225.f_489 = func_1614();
		}
		if ((Global_2667225.f_45.f_65 && Global_2667225.f_45.f_304) && Global_2667225.f_489 == 16)
		{
			Global_2667225.f_489 = 5;
		}
		Global_2667225.f_2676 = 0;
		Global_2667225.f_596 = 0f;
		Global_2667225.f_45.f_304 = 0;
		if (__LIB_4__::func_934(PLAYER::PLAYER_ID(), 1))
		{
			Global_2667225.f_555.f_17 = 1;
		}
		else
		{
			Global_2667225.f_555.f_17 = 0;
		}
		Global_2667225.f_518 = 0;
		Global_2667225.f_2674 = 0;
		Global_2667225.f_555.f_27 = 0f;
		Global_2667225.f_2898 = 0f;
		if (Global_2667225.f_489 == 10)
		{
			iVar20 = __LIB_3__::func_380(Global_2676213);
			if (!iVar20 == -1)
			{
				if (__LIB_2__::func_867(iVar20))
				{
					Global_2667225.f_2855 = iVar20;
					Global_2667225.f_489 = 29;
				}
			}
		}
		if (Global_2667225.f_489 == 10)
		{
		}
		if (Global_2667225.f_489 == 10)
		{
			if (__LIB_2__::func_698())
			{
				__LIB_1__::func_633();
				Global_2667225.f_714 = 0;
				Global_2667225.f_714.f_507 = 0;
				Global_2667225.f_1753 = 1;
				Global_2667225.f_714.f_518 = SCRIPT::GET_ID_OF_THIS_THREAD();
				__LIB_2__::func_697(-244.901f, -1872.177f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-242.269f, -1874.479f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-239.598f, -1876.816f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-247.704f, -1869.726f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-236.735f, -1879.32f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-250.483f, -1867.467f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-248.407f, -1872.989f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-245.403f, -1875.617f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-242.785f, -1877.907f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-239.945f, -1880.198f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-251.046f, -1870.666f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-248.619f, -1876.538f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-245.901f, -1878.915f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-251.704f, -1873.939f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-243.08f, -1881.227f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-254.677f, -1871.325f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-240.536f, -1883.448f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-249.174f, -1880.18f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-252.283f, -1877.461f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-246.515f, -1882.422f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-243.805f, -1884.522f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-255.306f, -1874.902f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-252.491f, -1881.033f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-249.84f, -1883.351f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-246.886f, -1885.774f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-255.641f, -1878.175f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-244.281f, -1887.739f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-258.593f, -1875.691f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-252.767f, -1884.144f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-255.851f, -1881.482f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-249.88f, -1886.704f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-247.44f, -1888.838f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-258.886f, -1878.827f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-255.952f, -1884.801f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-252.956f, -1887.422f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-259.415f, -1881.773f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-250.369f, -1889.685f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-247.647f, -1892.065f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-262.138f, -1879.391f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-262.407f, -1882.811f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-259.277f, -1885.549f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-256.124f, -1888.094f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-253.225f, -1890.3f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-250.782f, -1892.779f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-259.683f, -1889.221f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-256.577f, -1891.824f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-263.24f, -1886.216f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-253.867f, -1894.197f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-251.258f, -1896.412f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-265.974f, -1883.944f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-262.935f, -1890.089f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-259.884f, -1892.674f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-256.943f, -1895.166f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-254.535f, -1897.206f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-266.469f, -1887.118f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-263.243f, -1893.539f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-260.093f, -1896.223f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-266.754f, -1890.547f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-257.35f, -1898.561f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-254.516f, -1900.976f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-269.729f, -1888.013f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-266.428f, -1894.181f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-263.278f, -1896.865f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-260.367f, -1899.345f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-269.969f, -1891.167f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-257.512f, -1901.782f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-266.696f, -1897.666f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-263.54f, -1900.354f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-260.638f, -1902.827f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-270.469f, -1894.45f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-267.222f, -1901.522f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-270.747f, -1898.559f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-264.211f, -1904.128f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-260.75f, -1907.078f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-274.372f, -1895.47f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-271.19f, -1902.058f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-268.033f, -1904.748f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-264.135f, -1908.07f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-275.113f, -1898.959f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-271.775f, -1906.207f, 26.755f, 320.797f, 1065353216);
				Global_2667225.f_489 = 8;
				bVar39 = true;
			}
		}
		if (Global_2667225.f_489 == 47)
		{
			__LIB_1__::func_633();
			Global_2667225.f_714 = 0;
			Global_2667225.f_714.f_507 = 0;
			Global_2667225.f_1753 = 1;
			Global_2667225.f_714.f_518 = SCRIPT::GET_ID_OF_THIS_THREAD();
			__LIB_2__::func_697(975.7955f, 89.2188f, 79.9907f, 240.1994f, 1065353216);
			__LIB_2__::func_697(974.2166f, 85.8614f, 79.9907f, 240.1994f, 1065353216);
			__LIB_2__::func_697(971.4763f, 91.6587f, 79.9907f, 240.1994f, 1065353216);
			__LIB_2__::func_697(966.8154f, 94.2058f, 79.9907f, 240.1994f, 1065353216);
			__LIB_2__::func_697(963.103f, 96.5164f, 79.9907f, 240.1994f, 1065353216);
			__LIB_2__::func_697(969.834f, 88.5924f, 79.9907f, 240.1994f, 1065353216);
			__LIB_2__::func_697(968.1555f, 85.3428f, 79.9886f, 327.1991f, 1065353216);
			__LIB_2__::func_697(965.324f, 82.3137f, 79.783f, 327.1991f, 1065353216);
			__LIB_2__::func_697(960.2003f, 80.9701f, 79.7694f, 267.1988f, 1065353216);
			__LIB_2__::func_697(953.6874f, 82.8776f, 79.7694f, 243.1988f, 1065353216);
			__LIB_2__::func_697(947.6548f, 86.1658f, 79.7688f, 243.1988f, 1065353216);
			__LIB_2__::func_697(946.0387f, 82.9043f, 79.7687f, 243.1988f, 1065353216);
			__LIB_2__::func_697(944.2261f, 88.6068f, 79.7694f, 243.1988f, 1065353216);
			__LIB_2__::func_697(939.5576f, 94.646f, 78.3392f, 229.9987f, 1065353216);
			__LIB_2__::func_697(935.759f, 96.2394f, 78.2388f, 229.9987f, 1065353216);
			__LIB_2__::func_697(944.3122f, 79.7098f, 79.7572f, 323.1983f, 1065353216);
			__LIB_2__::func_697(941.9835f, 75.9773f, 79.615f, 323.1983f, 1065353216);
			__LIB_2__::func_697(939.4975f, 71.6506f, 79.4041f, 323.1983f, 1065353216);
			__LIB_2__::func_697(936.4024f, 66.9599f, 79.1841f, 323.1983f, 1065353216);
			__LIB_2__::func_697(942.0676f, 92.2227f, 78.9701f, 215.598f, 1065353216);
			__LIB_2__::func_697(927.3275f, 77.3361f, 77.7679f, 321.5972f, 1065353216);
			__LIB_2__::func_697(925.1186f, 73.9533f, 78.0651f, 321.5972f, 1065353216);
			__LIB_2__::func_697(922.8524f, 70.4011f, 78.7589f, 321.5972f, 1065353216);
			__LIB_2__::func_697(920.554f, 66.8094f, 79.4079f, 321.5972f, 1065353216);
			__LIB_2__::func_697(963.9402f, 100.739f, 79.9907f, 148.5968f, 1065353216);
			__LIB_2__::func_697(965.7116f, 103.4286f, 79.9907f, 148.5968f, 1065353216);
			__LIB_2__::func_697(967.3428f, 106.3218f, 79.9907f, 148.5968f, 1065353216);
			__LIB_2__::func_697(969.3038f, 109.405f, 79.9907f, 148.5968f, 1065353216);
			__LIB_2__::func_697(971.3239f, 112.691f, 79.9907f, 148.5968f, 1065353216);
			__LIB_2__::func_697(973.8073f, 116.3687f, 79.9907f, 148.5968f, 1065353216);
			Global_2667225.f_489 = 8;
			bVar39 = true;
		}
		if (Global_2667225.f_489 == 52)
		{
			__LIB_1__::func_633();
			Global_2667225.f_714 = 0;
			Global_2667225.f_714.f_507 = 0;
			Global_2667225.f_1753 = 1;
			Global_2667225.f_714.f_518 = SCRIPT::GET_ID_OF_THIS_THREAD();
			__LIB_2__::func_697(4915.7783f, -4909.681f, 2.3612f, 103.8461f, 1065353216);
			__LIB_2__::func_697(4909.4385f, -4906.013f, 2.3634f, 109.708f, 1065353216);
			__LIB_2__::func_697(4904.6245f, -4901.7183f, 2.3729f, 137.2815f, 1065353216);
			__LIB_2__::func_697(4917.557f, -4913.6855f, 2.3654f, 91.1262f, 1065353216);
			__LIB_2__::func_697(4907.624f, -4916.6104f, 2.3844f, 77.3005f, 1065353216);
			__LIB_2__::func_697(4908.8486f, -4927.182f, 2.3643f, 97.1531f, 1065353216);
			__LIB_2__::func_697(4904.1626f, -4933.243f, 2.3827f, 191.0743f, 1065353216);
			__LIB_2__::func_697(4899.703f, -4939.501f, 2.3622f, 91.3685f, 1065353216);
			__LIB_2__::func_697(4891.084f, -4934.5527f, 2.371f, 6.1066f, 1065353216);
			__LIB_2__::func_697(4895.8794f, -4930.5977f, 2.3695f, 21.2846f, 1065353216);
			__LIB_2__::func_697(4899.386f, -4926.6353f, 2.3645f, 21.563f, 1065353216);
			__LIB_2__::func_697(4894.8906f, -4926.3525f, 2.3615f, 359.2048f, 1065353216);
			__LIB_2__::func_697(4890.1616f, -4923.4365f, 2.3687f, 331.7434f, 1065353216);
			__LIB_2__::func_697(4895.319f, -4919.933f, 2.3677f, 350.2109f, 1065353216);
			__LIB_2__::func_697(4893.8384f, -4915.3374f, 2.3677f, 359.7902f, 1065353216);
			__LIB_2__::func_697(4899.7866f, -4914.1606f, 2.3602f, 27.4791f, 1065353216);
			__LIB_2__::func_697(4902.5293f, -4910.4746f, 2.3611f, 49.2944f, 1065353216);
			__LIB_2__::func_697(4891.711f, -4908.211f, 2.3643f, 323.4907f, 1065353216);
			__LIB_2__::func_697(4885.5215f, -4908.0737f, 2.3678f, 269.5604f, 1065353216);
			__LIB_2__::func_697(4887.267f, -4914.138f, 2.3628f, 310.3737f, 1065353216);
			__LIB_2__::func_697(4877.007f, -4914.598f, 2.2139f, 115.4889f, 1065353216);
			__LIB_2__::func_697(4871.36f, -4908.873f, 1.9205f, 105.6631f, 1065353216);
			__LIB_2__::func_697(4867.8022f, -4916.4653f, 1.5922f, 103.4375f, 1065353216);
			__LIB_2__::func_697(4871.824f, -4926.4834f, 2.0005f, 201.6436f, 1065353216);
			__LIB_2__::func_697(4871.41f, -4929.5703f, 1.9024f, 321.9481f, 1065353216);
			__LIB_2__::func_697(4868.713f, -4935.9365f, 1.4152f, 66.3723f, 1065353216);
			__LIB_2__::func_697(4866.783f, -4942.452f, 1.4781f, 77.1681f, 1065353216);
			__LIB_2__::func_697(4863.705f, -4950.777f, 1.4398f, 58.9161f, 1065353216);
			__LIB_2__::func_697(4859.92f, -4941.887f, 0.5639f, 76.0326f, 1065353216);
			__LIB_2__::func_697(4861.563f, -4927.4663f, 0.3028f, 90.8218f, 1065353216);
			__LIB_2__::func_697(4861.4985f, -4916.6597f, 0.3063f, 87.146f, 1065353216);
			__LIB_2__::func_697(4893.1226f, -4902.395f, 2.4867f, 189.5973f, 1065353216);
			__LIB_2__::func_697(4896.938f, -4903.806f, 2.3717f, 152.5383f, 1065353216);
			__LIB_2__::func_697(4927.5137f, -4907.376f, 2.5188f, 114.7115f, 1065353216);
			Global_2667225.f_489 = 8;
			bVar39 = true;
		}
		switch (Global_2667225.f_489)
		{
			case 57:
				func_1610(&(Global_2667225.f_555), &(Global_2667225.f_555.f_3), 10f);
				bVar2 = true;
				break;
			case 58:
				func_1608(&(Global_2667225.f_555), &(Global_2667225.f_555.f_3), 10f);
				bVar2 = true;
				break;
			case 9:
				func_1607(&Global_1574067, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3), 10f);
				bVar2 = true;
				break;
			case 8:
				if (!Global_2667225.f_1753)
				{
					Global_2667225.f_1753 = 1;
				}
				Var19 = { func_1604(bParam2) };
				iVar0 = 0;
				while (iVar0 < 5)
				{
					if (iVar0 == 0)
					{
						if (Var19[iVar0] > -1)
						{
							Global_2667225.f_555 = { Global_2667225.f_714.f_1[Var19[iVar0] /*5*/] };
							Global_2667225.f_555.f_3 = Global_2667225.f_714.f_1[Var19[iVar0] /*5*/].f_3;
							Global_2667225.f_714.f_502 = Var19[0];
							bVar2 = true;
							iParam4 = 1;
							Var18.f_28[iVar0] = Var19.f_12[iVar0];
						}
						else
						{
							Global_2667225.f_555 = { Global_2667225.f_714.f_1[0 /*5*/] };
							Global_2667225.f_555.f_3 = Global_2667225.f_714.f_1[0 /*5*/].f_3;
							Global_2667225.f_520.f_6 = 1;
							Global_2667225.f_555.f_4 = 150f;
						}
					}
					else if (Var19[iVar0] > -1)
					{
						Var18[iVar0 /*3*/] = { Global_2667225.f_714.f_1[Var19[iVar0] /*5*/] };
						Var18.f_16[iVar0] = Global_2667225.f_714.f_1[Var19[iVar0] /*5*/].f_3;
						Var18.f_28[iVar0] = Var19.f_12[iVar0];
					}
					iVar0++;
				}
				if (bVar39)
				{
					__LIB_2__::func_892();
				}
				break;
			case 7:
				Global_2667225.f_555 = { 23.6269f, -17.1858f, 0.0025f };
				Global_2667225.f_555.f_3 = 0f;
				Global_2667225.f_2697 = 1;
				bVar2 = true;
				break;
			case 12:
				func_1607(&Global_1574100, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3), 1123024896);
				bVar2 = true;
				break;
			case 51:
				__LIB_2__::func_938();
				Global_2667225.f_593 = { Global_2667225.f_512 };
				Var17.f_2 = Global_2667225.f_512.f_2;
				__LIB_2__::func_891(&(Global_2667225.f_512), Global_1574465, Global_1574465.f_1, 0f, Global_1574468, Global_1574471, 1036831949, 1048576000);
				Global_2667225.f_512.f_2 = Var17.f_2;
				if (Global_2667225.f_512.f_2 > 70f)
				{
					Global_2667225.f_512.f_2 = 70f;
				}
				if (Global_2667225.f_512.f_2 < 0f)
				{
					Global_2667225.f_512.f_2 = 0f;
				}
				Var17 = { Global_2667225.f_512 };
				if (Var17.f_2 < 0f)
				{
					Var17.f_2 = 0f;
				}
				Var17.f_2 = (Var17.f_2 + 5f);
				Global_2667225.f_520.f_23 = { 0f, 10000000f, Var17.f_2 };
				Global_2667225.f_520.f_26 = { 0f, -10000000f, 99999.9f };
				Global_2667225.f_520.f_29 = 1E+09f;
				if (__LIB_19__::func_367(PLAYER::PLAYER_ID()))
				{
					Global_2667225.f_596 = Global_2667225.f_45.f_308;
				}
				else
				{
					Global_2667225.f_596 = 30f;
				}
				Global_2667225.f_555 = { Global_2667225.f_512 };
				Global_2667225.f_555.f_18 = { Global_2667225.f_512 };
				Global_2667225.f_555.f_21 = 1;
				Global_2667225.f_520.f_6 = 1;
				Global_2667225.f_555.f_3 = 0f;
				Global_2667225.f_555.f_4 = 0f;
				Global_2667225.f_555.f_7 = 2;
				Global_2667225.f_555.f_8 = { Global_1574465 };
				Global_2667225.f_555.f_11 = { Global_1574468 };
				Global_2667225.f_555.f_14 = Global_1574471;
				Global_2667225.f_555.f_28 = 0;
				Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
				Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
				break;
			case 1:
				Var17 = { Global_2667225.f_512 };
				iVar38 = __LIB_1__::func_557(Var17, 0);
				if (iVar38 > -1)
				{
					if (Global_2672169[iVar38 /*17*/].f_9 == 0)
					{
						__LIB_2__::func_693(&Var17, &(Global_2672169[iVar38 /*17*/]), 135f);
					}
				}
				if (Global_2715699.f_6597)
				{
					Var17 = { Global_2715699.f_6598 };
				}
				if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32 > 0)
				{
					iVar15 = Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32;
					Var17 = { Global_1312193[iVar15 /*1951*/].f_3[0 /*3*/] };
				}
				if (Global_1888188 > -1)
				{
					if (__LIB_1__::func_693(Global_1888188, 0, 1))
					{
						if (func_83(Global_1888188))
						{
							Global_2667225.f_520.f_13[0 /*3*/] = { __LIB_1__::func_694(Global_1888188) };
							if (!__LIB_4__::func_934(PLAYER::PLAYER_ID(), 1))
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(Global_1888188), false))
								{
									Global_2667225.f_520.f_20[0] = 250f;
								}
								else
								{
									Global_2667225.f_520.f_20[0] = 125f;
								}
							}
							else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(Global_1888188), false))
							{
								Global_2667225.f_520.f_20[0] = 125f;
							}
							else
							{
								Global_2667225.f_520.f_20[0] = 75f;
							}
						}
					}
				}
				iVar0 = 0;
				while (iVar0 < 2)
				{
					if (__LIB_0__::func_828(Var17, Global_2667225.f_520.f_13[iVar0 /*3*/], Global_2667225.f_520.f_20[iVar0], 1, 1))
					{
						__LIB_1__::func_450(&Var17, Global_2667225.f_520.f_13[iVar0 /*3*/], Global_2667225.f_520.f_20[iVar0], 1036831949, 0, 0);
					}
					iVar0++;
				}
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var17, Global_2667225.f_520.f_23, Global_2667225.f_520.f_26, Global_2667225.f_520.f_29, false, true))
				{
					__LIB_1__::func_449(&Var17, Global_2667225.f_520.f_23, Global_2667225.f_520.f_26, Global_2667225.f_520.f_29, 1036831949, 0);
				}
				Global_2667225.f_555 = { Var17 };
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				if (Global_2667225.f_45.f_307 > -1f)
				{
					Global_2667225.f_520.f_5 = Global_2667225.f_45.f_307;
				}
				if (__LIB_19__::func_367(PLAYER::PLAYER_ID()))
				{
					Global_2667225.f_596 = Global_2667225.f_45.f_308;
				}
				else
				{
					Global_2667225.f_596 = 40f;
				}
				fVar12 = (Global_2667225.f_520.f_5 - 65f);
				if (fVar12 < 0f)
				{
					fVar12 = 0f;
				}
				if (__LIB_19__::func_367(PLAYER::PLAYER_ID()))
				{
					Global_2667225.f_555.f_4 = (120f + fVar12);
				}
				else
				{
					Global_2667225.f_555.f_4 = (135f + fVar12);
				}
				Global_2667225.f_555.f_4 = ((95f + Global_2667225.f_596) + fVar12);
				if (Global_2667225.f_555.f_4 > 250f)
				{
					Global_2667225.f_555.f_4 = 250f;
				}
				Global_2667225.f_593 = { Global_2667225.f_512 };
				fVar12 = (Global_2667225.f_555.f_4 * 0.5f);
				if (fVar12 < Global_2667225.f_520.f_5)
				{
					fVar12 = Global_2667225.f_520.f_5;
				}
				Var13 = { func_1596(Global_2667225.f_555, fVar12) };
				if (SYSTEM::VMAG(Var13) > 0f)
				{
					Var13.f_2 = Global_2667225.f_555.f_2;
					Var14 = { Global_2667225.f_555 - Var13 };
					Var14 = { Var14 / FtoV(SYSTEM::VMAG(Var14)) };
					Var14 = { Var14 * Vector(fVar12, fVar12, fVar12) };
					Global_2667225.f_555 = { Global_2667225.f_555 + Var14 };
				}
				if (func_1594(&(Global_2667225.f_555), 1))
				{
				}
				if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
				{
					iVar42 = __LIB_2__::func_691(&iVar41);
					if (iVar42 < 17)
					{
						if (BitTest(Global_4718592.f_658[iVar41 /*22957*/].f_7965[iVar42], 12) && (!Global_1574981 || BitTest(Global_4718592.f_658[iVar41 /*22957*/].f_7965[iVar42], 13)))
						{
							iVar40 = 1;
						}
					}
				}
				if (__LIB_3__::func_262() || iVar40)
				{
					Global_2667225.f_555.f_4 = 400f;
					Global_2667225.f_596 = 100f;
					bParam2 = true;
				}
				break;
			case 20:
				if (!PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
				{
					Var14 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				}
				else
				{
					Var14 = { Global_2667225.f_512 };
				}
				Global_2667225.f_593 = { Var14 };
				Global_2667225.f_596 = 125f;
				if (func_1594(&Var14, 1))
				{
				}
				if (Global_1836579)
				{
					if (Global_1836068.f_14 != __LIB_0__::getMinusOneOrNull())
					{
						if (__LIB_1__::func_693(Global_1836068.f_14, 0, 1))
						{
							Global_2667225.f_520.f_13[0 /*3*/] = { __LIB_1__::func_694(Global_1836068.f_14) };
							if (__LIB_3__::func_262())
							{
								Global_2667225.f_520.f_20[0] = 250f;
							}
							else
							{
								Global_2667225.f_520.f_20[0] = 125f;
							}
						}
					}
				}
				iVar0 = 0;
				while (iVar0 < 2)
				{
					if (__LIB_0__::func_828(Var14, Global_2667225.f_520.f_13[iVar0 /*3*/], Global_2667225.f_520.f_20[iVar0], 1, 1))
					{
						__LIB_1__::func_450(&Var14, Global_2667225.f_520.f_13[iVar0 /*3*/], Global_2667225.f_520.f_20[iVar0], 1036831949, 0, 0);
					}
					iVar0++;
				}
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var14, Global_2667225.f_520.f_23, Global_2667225.f_520.f_26, Global_2667225.f_520.f_29, false, true))
				{
					__LIB_1__::func_449(&Var14, Global_2667225.f_520.f_23, Global_2667225.f_520.f_26, Global_2667225.f_520.f_29, 1036831949, 0);
				}
				Global_2667225.f_555 = { Var14 };
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				Global_2667225.f_555.f_4 = 250f;
				if (Global_2667225.f_520.f_3)
				{
					if (!INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Global_2667225.f_512)))
					{
						Global_2667225.f_520.f_3 = 0;
					}
				}
				if (__LIB_3__::func_262())
				{
					Global_2667225.f_555.f_4 = 400f;
					Global_2667225.f_596 = 100f;
					bParam2 = true;
				}
				break;
			case 2:
				Global_2667225.f_555 = { __LIB_3__::func_183() };
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				break;
			case 26:
				if (!PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
				{
					iVar9 = __LIB_2__::func_890(__LIB_1__::func_694(PLAYER::PLAYER_ID()));
				}
				else
				{
					iVar9 = __LIB_2__::func_890(Global_2667225.f_512);
				}
				__LIB_2__::func_690(&(Global_2667225.f_45[iVar9 /*12*/]));
				if (!PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
				{
					Global_2667225.f_555.f_18 = { __LIB_1__::func_694(PLAYER::PLAYER_ID()) };
				}
				else
				{
					Global_2667225.f_555.f_18 = { Global_2667225.f_512 };
				}
				if (__LIB_19__::func_367(PLAYER::PLAYER_ID()))
				{
					Global_2667225.f_596 = Global_2667225.f_45.f_308;
				}
				else
				{
					Global_2667225.f_596 = 40f;
				}
				Global_2667225.f_593 = { Global_2667225.f_555.f_18 };
				Var21 = { Global_2667225.f_555.f_18 };
				switch (Global_2667225.f_45[iVar9 /*12*/].f_10)
				{
					case 0:
						fVar29 = Global_2667225.f_45[iVar9 /*12*/].f_6;
						fVar29 = (fVar29 * 0.5f);
						break;
					case 1:
						fVar29 = SYSTEM::VMAG(Global_2667225.f_45[iVar9 /*12*/] - Global_2667225.f_45[iVar9 /*12*/].f_3);
						fVar29 = (fVar29 * 0.5f);
						fVar29 = (fVar29 * 0.5f);
						break;
					case 2:
						fVar29 = Global_2667225.f_45[iVar9 /*12*/].f_6;
						fVar29 = (fVar29 * 0.5f);
						fVar29 = (fVar29 * 0.5f);
						break;
				}
				if (!__LIB_1__::func_528(Var21, &(Global_2667225.f_45[iVar9 /*12*/]), 1008981770, 0, 0))
				{
					__LIB_3__::func_182(&Var21, &(Global_2667225.f_45[iVar9 /*12*/]), fVar29);
				}
				if (Global_2667225.f_45.f_307 > -1f)
				{
					Global_2667225.f_520.f_5 = Global_2667225.f_45.f_307;
				}
				fVar12 = 1f;
				if (Global_2667225.f_520.f_5 < 200f)
				{
					fVar12 = 1.5f;
				}
				else if (Global_2667225.f_520.f_5 < 300f)
				{
					fVar12 = (1f + (((300f - Global_2667225.f_520.f_5) / 100f) * 0.5f));
				}
				fVar35 = (Global_2667225.f_520.f_5 * fVar12);
				iVar30 = func_82(Var21, fVar35, &uVar43);
				if (iVar30 > 0 || Global_2667225.f_555.f_15)
				{
					if (Global_2667225.f_555.f_15)
					{
						Var21 = { func_1586(Var21, Global_2667225.f_45[iVar9 /*12*/], Global_2667225.f_45[iVar9 /*12*/].f_3, Global_2667225.f_45[iVar9 /*12*/].f_6, Global_2667225.f_45[iVar9 /*12*/].f_10, fVar35, 1, Global_2667225.f_520.f_30, 1, &(Global_2667225.f_555.f_25)) };
						if (!Global_2667225.f_555.f_25)
						{
							Var21 = { func_1586(Var21, Global_2667225.f_45[iVar9 /*12*/], Global_2667225.f_45[iVar9 /*12*/].f_3, Global_2667225.f_45[iVar9 /*12*/].f_6, Global_2667225.f_45[iVar9 /*12*/].f_10, fVar35, 1, Global_2667225.f_520.f_30, 0, &(Global_2667225.f_555.f_25)) };
						}
						Global_2667225.f_596 = 0f;
						fVar36 = 40f;
					}
					else
					{
						bVar31 = false;
						Var22 = { func_1585(Var21, fVar35) };
						Var23 = { func_1584(Var21, fVar35) };
						Var24 = { Var21 - Var22 };
						Var24 = { Var24 / FtoV(SYSTEM::VMAG(Var24)) };
						Var24 = { Var24 * Vector(fVar35, fVar35, fVar35) };
						iVar0 = 0;
						while (iVar0 < 4)
						{
							Var14 = { Var24 };
							__LIB_0__::func_817(&Var14, 0f, 0f, (SYSTEM::TO_FLOAT(iVar0) * 90f));
							Var25[iVar0 /*3*/] = { Var22 + Var14 };
							if (!__LIB_1__::func_528(Var25[iVar0 /*3*/], &(Global_2667225.f_45[iVar9 /*12*/]), 1008981770, 0, 0))
							{
								__LIB_3__::func_182(&(Var25[iVar0 /*3*/]), &(Global_2667225.f_45[iVar9 /*12*/]), 1036831949);
							}
							uVar26[iVar0] = func_82(Var25[iVar0 /*3*/], fVar35, &(uVar28[iVar0]));
							Var14 = { Var22 - Var25[iVar0 /*3*/] };
							if (__LIB_0__::func_158(Var14, Var23) < 0f)
							{
								iVar27[iVar0] = 1;
							}
							else
							{
								iVar27[iVar0] = 0;
							}
							iVar0++;
						}
						iVar0 = 0;
						while (iVar0 < 4)
						{
							if ((uVar26[iVar0] == 0 && iVar27[iVar0] == 0) && !bVar31)
							{
								Var21 = { Var25[iVar0 /*3*/] };
								bVar31 = true;
							}
							iVar0++;
						}
						if (!bVar31)
						{
							iVar0 = 0;
							while (iVar0 < 4)
							{
								if (uVar26[iVar0] == 0 && !bVar31)
								{
									Var21 = { Var25[iVar0 /*3*/] };
									bVar31 = true;
								}
								iVar0++;
							}
						}
						if (!bVar31)
						{
							iVar32 = 999;
							iVar33 = -1;
							iVar0 = 0;
							while (iVar0 < 4)
							{
								if (uVar26[iVar0] < iVar32)
								{
									iVar33 = iVar0;
									fVar34 = uVar28[iVar0];
									iVar32 = uVar26[iVar0];
								}
								else if (uVar26[iVar0] == iVar32)
								{
									if (uVar28[iVar0] > fVar34)
									{
										fVar34 = uVar28[iVar0];
										iVar33 = iVar0;
									}
								}
								iVar0++;
							}
							if (!iVar33 == -1 && iVar32 < iVar30)
							{
								Var21 = { Var25[iVar33 /*3*/] };
								bVar31 = true;
							}
						}
						if (!bVar31)
						{
						}
						else
						{
							Global_2667225.f_596 = 0f;
						}
					}
				}
				Global_2667225.f_555.f_18 = { Var21 };
				Global_2667225.f_555.f_21 = 1;
				Global_2667225.f_520.f_6 = 1;
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				break;
			case 3:
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_2__::func_687());
				__LIB_2__::func_690(&(Global_2667225.f_45[iVar0 /*12*/]));
				if (func_120(&(Global_2667225.f_555), 0, 0, 0, 1))
				{
					Global_2667225.f_515 = 1;
				}
				break;
			case 15:
				if (PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
				{
					Var17 = { Global_2667225.f_512 };
				}
				else
				{
					Var17 = { __LIB_1__::func_694(PLAYER::PLAYER_ID()) };
				}
				if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32 > 0)
				{
					iVar15 = Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32;
					Var17 = { Global_1312193[iVar15 /*1951*/].f_3[0 /*3*/] };
				}
				fVar10 = __LIB_2__::func_686(Var17, &Global_2671974, &iVar7);
				if (__LIB_2__::func_771(0, -1) > 0)
				{
					iVar0 = 0;
					iVar0 = 0;
					while (iVar0 < 29)
					{
						iVar15 = __LIB_2__::func_771(iVar0, -1);
						if (Global_1312193[iVar15 /*1951*/].f_34 == 0 || Global_1312193[iVar15 /*1951*/].f_34 == 3)
						{
							if (fVar11 == 0f || fVar11 > SYSTEM::VDIST(Var17, Global_1312193[iVar15 /*1951*/].f_3[0 /*3*/]))
							{
								fVar11 = SYSTEM::VDIST(Var17, Global_1312193[iVar15 /*1951*/].f_3[0 /*3*/]);
								iVar8 = iVar15;
							}
						}
						else if (fVar11 == 0f)
						{
							fVar11 = 999999.9f;
						}
						iVar0++;
					}
				}
				else
				{
					fVar11 = 999999.9f;
				}
				if (fVar11 < 10000f && fVar11 < fVar10)
				{
					switch (Global_1312193[iVar8 /*1951*/].f_34)
					{
						case 0:
							__LIB_3__::func_394(iVar8, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
							Global_2667225.f_2678 = 0;
							break;
						case 1:
							Global_2667225.f_555 = { Global_1312193[iVar8 /*1951*/].f_1742.f_20 };
							Global_2667225.f_555.f_3 = Global_1312193[iVar8 /*1951*/].f_1742.f_23;
							if (Global_2667225.f_607 == 0)
							{
								Global_2667225.f_2678 = 1;
							}
							Global_2667225.f_2697 = 1;
							break;
					}
					bVar2 = true;
					if (Global_2667225.f_607 == 0)
					{
						Global_2667225.f_2677 = 1;
					}
					Global_2667225.f_2676 = 1;
				}
				else if (fVar10 < fVar11)
				{
					if (iVar7 > -1)
					{
						__LIB_2__::func_690(&(Global_2671974[iVar7 /*12*/]));
					}
					else
					{
						__LIB_2__::func_690(&(Global_2671974[0 /*12*/]));
					}
					Global_2667225.f_2696 = 1;
				}
				Global_2667225.f_701 = 1;
				break;
			case 23:
				if (PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
				{
					Var17 = { Global_2667225.f_512 };
				}
				else
				{
					Var17 = { func_1528(PLAYER::PLAYER_ID()) };
				}
				fVar10 = __LIB_2__::func_686(Var17, &Global_2671974, &iVar7);
				if (iVar7 > -1)
				{
					__LIB_2__::func_690(&(Global_2671974[iVar7 /*12*/]));
				}
				else
				{
					__LIB_2__::func_690(&(Global_2671974[0 /*12*/]));
				}
				Global_2667225.f_2696 = 1;
				Global_2667225.f_701 = 1;
				break;
			case 25:
				Var17 = { Global_2676213 };
				fVar11 = __LIB_2__::func_686(Var17, &Global_2672120, &iVar8);
				if (iVar8 > -1)
				{
					__LIB_2__::func_690(&(Global_2672120[iVar8 /*12*/]));
				}
				else
				{
					__LIB_2__::func_690(&(Global_2672120[0 /*12*/]));
				}
				Global_2667225.f_701 = 1;
				break;
			case 24:
				if (PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
				{
					Var17 = { Global_2667225.f_512 };
				}
				else
				{
					Var17 = { func_1528(PLAYER::PLAYER_ID()) };
				}
				fVar10 = __LIB_2__::func_686(Var17, &Global_2672035, &iVar7);
				if (iVar7 > -1)
				{
					__LIB_2__::func_690(&(Global_2672035[iVar7 /*12*/]));
				}
				else
				{
					__LIB_2__::func_690(&(Global_2672035[0 /*12*/]));
				}
				Global_2667225.f_701 = 1;
				break;
			case 22:
				Var17 = { Global_2676213 };
				fVar10 = __LIB_2__::func_686(Var17, &Global_2671974, &iVar7);
				if (__LIB_2__::func_771(0, -1) > 0)
				{
					iVar0 = 0;
					iVar0 = 0;
					while (iVar0 < 29)
					{
						iVar15 = __LIB_2__::func_771(iVar0, -1);
						if (Global_1312193[iVar15 /*1951*/].f_34 == 0 || Global_1312193[iVar15 /*1951*/].f_34 == 3)
						{
							if (fVar11 == 0f || fVar11 > SYSTEM::VDIST(Var17, Global_1312193[iVar15 /*1951*/].f_3[0 /*3*/]))
							{
								fVar11 = SYSTEM::VDIST(Var17, Global_1312193[iVar15 /*1951*/].f_3[0 /*3*/]);
								iVar8 = iVar15;
							}
						}
						else if (fVar11 == 0f)
						{
							fVar11 = 999999.9f;
						}
						iVar0++;
					}
				}
				else
				{
					fVar11 = 999999.9f;
				}
				if (fVar11 < 10000f && fVar11 < fVar10)
				{
					switch (Global_1312193[iVar8 /*1951*/].f_34)
					{
						case 0:
							__LIB_3__::func_394(iVar8, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
							Global_2667225.f_2678 = 0;
							break;
						case 1:
							if (Global_2667225.f_607 == 0)
							{
								Global_2667225.f_2678 = 1;
							}
							Global_2667225.f_555 = { Global_1312193[iVar8 /*1951*/].f_1742.f_20 };
							Global_2667225.f_555.f_3 = Global_1312193[iVar8 /*1951*/].f_1742.f_23;
							Global_2667225.f_2697 = 1;
							break;
					}
					bVar2 = true;
					if (Global_2667225.f_607 == 0)
					{
						Global_2667225.f_2677 = 1;
					}
					Global_2667225.f_2676 = 1;
				}
				else if (fVar10 < fVar11)
				{
					if (iVar7 > -1)
					{
						__LIB_2__::func_690(&(Global_2671974[iVar7 /*12*/]));
					}
					else
					{
						__LIB_2__::func_690(&(Global_2671974[0 /*12*/]));
					}
					Global_2667225.f_2696 = 1;
				}
				Global_2667225.f_701 = 1;
				break;
			case 17:
				if (Global_2674954 > 0)
				{
					iVar16 = Global_2674954;
				}
				else
				{
					iVar16 = __LIB_3__::func_232();
				}
				Global_2674954 = 0;
				if (!iVar16 > 0)
				{
				}
				iVar15 = iVar16;
				Global_2667225.f_555 = { Global_1312193[iVar15 /*1951*/].f_1742.f_20 };
				Global_2667225.f_555.f_3 = Global_1312193[iVar15 /*1951*/].f_1742.f_23;
				Global_2667225.f_2697 = 1;
				bVar2 = true;
				Global_2667225.f_701 = 1;
				if (Global_2667225.f_607 == 0)
				{
					Global_2667225.f_2678 = 1;
				}
				if (Global_2667225.f_607 == 0)
				{
					Global_2667225.f_2677 = 1;
				}
				Global_2667225.f_2676 = 1;
				break;
			case 18:
				if (Global_2674954 > 0)
				{
					iVar16 = Global_2674954;
				}
				else
				{
					iVar16 = __LIB_3__::func_232();
				}
				Global_2674954 = 0;
				if (iVar16 <= 0)
				{
				}
				iVar15 = iVar16;
				switch (Global_1312193[iVar15 /*1951*/].f_34)
				{
					case 0:
					case 3:
						__LIB_3__::func_394(iVar15, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
						Global_2667225.f_2678 = 0;
						break;
					case 1:
					case 5:
						if (Global_2667225.f_607 == 0)
						{
							Global_2667225.f_2678 = 1;
						}
						Global_2667225.f_555 = { Global_1312193[iVar15 /*1951*/].f_1742.f_20 };
						Global_2667225.f_555.f_3 = Global_1312193[iVar15 /*1951*/].f_1742.f_23;
						Global_2667225.f_2697 = 1;
						break;
				}
				bVar2 = true;
				Global_2667225.f_701 = 1;
				if (Global_2667225.f_607 == 0)
				{
					Global_2667225.f_2677 = 1;
				}
				Global_2667225.f_2676 = 1;
				break;
			case 34:
				if (__LIB_35__::func_504())
				{
					iVar20 = __LIB_1__::func_780(__LIB_0__::func_797());
					if (iVar20 <= 0)
					{
					}
					__LIB_3__::func_259(iVar20, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
					bVar2 = true;
					Global_2667225.f_701 = 1;
				}
				else
				{
					Global_2667225.f_555 = { func_1528(__LIB_0__::func_797()) };
					Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				}
				break;
			case 27:
				iVar20 = __LIB_2__::func_745();
				if (iVar20 <= 0)
				{
				}
				__LIB_3__::func_259(iVar20, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
				bVar2 = true;
				Global_2667225.f_701 = 1;
				break;
			case 29:
				if (Global_2667225.f_2855 < 0)
				{
				}
				__LIB_3__::func_259(Global_2667225.f_2855, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
				bVar2 = true;
				Global_2667225.f_701 = 1;
				break;
			case 30:
				if (Global_2667225.f_2855 < 0)
				{
				}
				__LIB_3__::func_179(0, Global_2667225.f_2855, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3), 1);
				Global_2667225.f_555.f_4 = 150f;
				Global_2667225.f_555.f_7 = 0;
				Global_2667225.f_555.f_8 = { 0f, 0f, 0f };
				Global_2667225.f_555.f_11 = { 0f, 0f, 0f };
				Global_2667225.f_555.f_14 = 0f;
				Global_2667225.f_593 = { Global_2667225.f_555 };
				Global_2667225.f_596 = 12f;
				Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
				Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
				Global_2667225.f_520.f_6 = 1;
				Global_2667225.f_520.f_4 = 1;
				Global_2667225.f_520.f_3 = 0;
				Global_2667225.f_555.f_16 = 1;
				Global_2667225.f_520.f_5 = 5f;
				Global_2667225.f_555.f_22 = 0;
				Global_2667225.f_515 = 0;
				break;
			case 28:
				iVar20 = __LIB_2__::func_745();
				switch (Global_4196263[iVar20 /*2012*/].f_34)
				{
					case 2:
						switch (__LIB_1__::func_670())
						{
							case 4:
								Global_2667225.f_555 = { Global_4196263[iVar20 /*2012*/].f_146.f_82[4 /*102*/] };
								Global_2667225.f_555.f_3 = Global_4196263[iVar20 /*2012*/].f_146.f_82[4 /*102*/].f_3;
								break;
							case 5:
								Global_2667225.f_555 = { Global_4196263[iVar20 /*2012*/].f_146.f_82[1 /*102*/] };
								Global_2667225.f_555.f_3 = Global_4196263[iVar20 /*2012*/].f_146.f_82[1 /*102*/].f_3;
								break;
							default:
								__LIB_3__::func_283(iVar20, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
								break;
						}
						Global_2667225.f_2678 = 0;
						break;
				}
				MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_30), 4);
				bVar2 = true;
				Global_2667225.f_701 = 1;
				if (Global_2667225.f_607 == 0)
				{
					Global_2667225.f_2677 = 1;
				}
				Global_2667225.f_2679 = 1;
				Global_2667225.f_2676 = 1;
				break;
			case 19:
				iVar16 = __LIB_3__::func_232();
				if (iVar16 <= 0)
				{
				}
				if (iVar16 > 128)
				{
					iVar16 = Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_1303;
				}
				if (iVar16 > 128)
				{
					iVar16 = 0;
				}
				iVar15 = iVar16;
				switch (Global_1312193[iVar15 /*1951*/].f_34)
				{
					case 0:
					case 3:
						switch (__LIB_1__::func_670())
						{
							case 4:
								Global_2667225.f_555 = { Global_1312193[iVar15 /*1951*/].f_146.f_82[4 /*102*/] };
								Global_2667225.f_555.f_3 = Global_1312193[iVar15 /*1951*/].f_146.f_82[4 /*102*/].f_3;
								break;
							case 5:
								Global_2667225.f_555 = { Global_1312193[iVar15 /*1951*/].f_146.f_82[1 /*102*/] };
								Global_2667225.f_555.f_3 = Global_1312193[iVar15 /*1951*/].f_146.f_82[1 /*102*/].f_3;
								break;
							default:
								__LIB_3__::func_394(iVar16, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
								break;
						}
						Global_2667225.f_2678 = 0;
						break;
					case 1:
					case 5:
						if (Global_2667225.f_607 == 0)
						{
							Global_2667225.f_2678 = 1;
						}
						Global_2667225.f_555 = { Global_1312193[iVar15 /*1951*/].f_1742.f_20 };
						Global_2667225.f_555.f_3 = Global_1312193[iVar15 /*1951*/].f_1742.f_23;
						Global_2667225.f_2697 = 1;
						break;
				}
				MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_30), 4);
				bVar2 = true;
				Global_2667225.f_701 = 1;
				if (Global_2667225.f_607 == 0)
				{
					Global_2667225.f_2677 = 1;
				}
				Global_2667225.f_2676 = 1;
				break;
			case 35:
				iVar16 = __LIB_2__::func_771(5, -1);
				if (iVar16 <= 0)
				{
				}
				else
				{
					__LIB_2__::func_682(iVar16);
				}
				iVar15 = iVar16;
				switch (__LIB_1__::func_670())
				{
					case 4:
						Global_2667225.f_555 = { Global_1312193[iVar15 /*1951*/].f_146.f_82[4 /*102*/] };
						Global_2667225.f_555.f_3 = Global_1312193[iVar15 /*1951*/].f_146.f_82[4 /*102*/].f_3;
						break;
					case 5:
						__LIB_3__::func_210(iVar15, 612, &Var44, __LIB_2__::func_681(iVar15), 0);
						Global_2667225.f_555 = { Var44 };
						Global_2667225.f_555.f_3 = Var44.f_3.f_2;
						break;
					default:
						__LIB_3__::func_394(iVar16, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
						break;
				}
				bVar2 = true;
				Global_2667225.f_701 = 1;
				if (Global_2667225.f_607 == 0)
				{
					Global_2667225.f_2677 = 1;
				}
				Global_2667225.f_2676 = 1;
				break;
			case 36:
				iVar16 = __LIB_2__::func_771(6, -1);
				if (iVar16 <= 0)
				{
					if (Global_2667225.f_2684 == 0)
					{
					}
				}
				else
				{
					__LIB_2__::func_682(iVar16);
				}
				if (Global_2667225.f_2685 > -1)
				{
					iVar16 = Global_2667225.f_2685;
					Global_2667225.f_2685 = -1;
				}
				iVar15 = iVar16;
				switch (__LIB_1__::func_670())
				{
					case 5:
						__LIB_3__::func_210(iVar15, 612, &Var45, __LIB_2__::func_681(iVar15), 0);
						Global_2667225.f_555 = { Var45 };
						Global_2667225.f_555.f_3 = Var45.f_3.f_2;
						break;
					case 6:
						__LIB_3__::func_210(iVar15, 912, &Var45, __LIB_2__::func_681(iVar15), 0);
						Global_2667225.f_555 = { Var45 };
						Global_2667225.f_555.f_3 = Var45.f_3.f_2;
						break;
					default:
						__LIB_3__::func_394(iVar16, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
						break;
				}
				bVar2 = true;
				Global_2667225.f_701 = 1;
				if (Global_2667225.f_607 == 0)
				{
					Global_2667225.f_2677 = 1;
				}
				Global_2667225.f_2676 = 1;
				break;
			case 39:
			case 40:
			case 41:
			case 42:
			case 43:
			case 44:
			case 45:
			case 46:
			case 48:
			case 49:
			case 50:
			case 54:
			case 55:
			case 56:
			case 59:
				switch (__LIB_1__::func_670())
				{
					case 5:
						if (Global_2667225.f_489 == 39)
						{
							Global_2667225.f_555 = { 959.4153f, -3005.433f, -40.6349f };
							Global_2667225.f_555.f_3 = 288.1089f;
						}
						else if (Global_2667225.f_489 == 40)
						{
							Global_2667225.f_555 = { 905.5001f, -3200.1077f, -98.1879f };
							Global_2667225.f_555.f_3 = 190.2091f;
						}
						else if (Global_2667225.f_489 == 41)
						{
							Global_2667225.f_555 = { -1235.6235f, -2984.2317f, -42.2601f };
							Global_2667225.f_555.f_3 = 189.5472f;
						}
						else if (Global_2667225.f_489 == 42)
						{
							Global_2667225.f_555 = { 368.9986f, 4822.7114f, -59.9797f };
							Global_2667225.f_555.f_3 = 313.7473f;
						}
						else if (Global_2667225.f_489 == 43)
						{
							Global_2667225.f_555 = { -1614.179f, -3019.259f, -75.18f };
							Global_2667225.f_555.f_3 = 135f;
						}
						else if (Global_2667225.f_489 == 44)
						{
							Global_2667225.f_555 = { 208.8848f, 5164.2656f, -89.1985f };
							Global_2667225.f_555.f_3 = 97.78f;
						}
						else if (Global_2667225.f_489 == 46)
						{
							Global_2667225.f_555 = { 970.7293f, 78.29094f, 115.1642f };
							Global_2667225.f_555.f_3 = 236.0848f;
						}
						else if (Global_2667225.f_489 == 48)
						{
							Global_2667225.f_555 = { 2723.0068f, -368.7443f, -56.3809f };
							Global_2667225.f_555.f_3 = 267.6547f;
						}
						else if (Global_2667225.f_489 == 50)
						{
							Global_2667225.f_555 = { 1558.369f, 384.953f, -53.8531f };
							Global_2667225.f_555.f_3 = 0f;
							Global_2815059.f_933 = 1;
						}
						else if (Global_2667225.f_489 == 55)
						{
							Global_2667225.f_555 = { -1360.148f, 144.8f, -95.7f };
							Global_2667225.f_555.f_3 = 90f;
						}
						else if (Global_2667225.f_489 == 56)
						{
							switch (__LIB_0__::func_813(PLAYER::PLAYER_ID()))
							{
								case 1:
									Global_2667225.f_555 = { 387.949f, -69.676f, 112f };
									Global_2667225.f_555.f_3 = 26.279999f;
									break;
								case 2:
									Global_2667225.f_555 = { -1011.61f, -431.12f, 72.4981f };
									Global_2667225.f_555.f_3 = 73.229996f;
									break;
								case 3:
									Global_2667225.f_555 = { -595.463f, -709.173f, 121.642f };
									Global_2667225.f_555.f_3 = 226.13f;
									break;
								case 4:
									Global_2667225.f_555 = { -996.574f, -753.597f, 70.5312f };
									Global_2667225.f_555.f_3 = 136.28f;
									break;
								}
						}
						break;
					case 6:
						if (Global_2667225.f_489 == 43)
						{
							Global_2667225.f_555 = { -1609.1658f, -3016.9788f, -80.0061f };
							Global_2667225.f_555.f_3 = 270f;
						}
						else if (Global_2667225.f_489 == 45)
						{
							Global_2667225.f_555 = { 1105.1066f, 213.3884f, -50.4406f };
							Global_2667225.f_555.f_3 = 180f;
						}
						else if (Global_2667225.f_489 == 46)
						{
							Global_2667225.f_555 = { 978.4244f, 57.9174f, 115.164f };
							Global_2667225.f_555.f_3 = 55f;
						}
						else if (Global_2667225.f_489 == 48)
						{
							Global_2667225.f_555 = { 2723.8425f, -377.4552f, -48.4f };
							Global_2667225.f_555.f_3 = 180f;
						}
						else if (Global_2667225.f_489 == 49)
						{
							Global_2667225.f_555 = { 1542.7819f, 246.4772f, -50.006f };
							Global_2667225.f_555.f_3 = 270f;
						}
						else if (Global_2667225.f_489 == 50)
						{
							Global_2667225.f_555 = { 1558.4023f, 382.5171f, -54.2844f };
							Global_2667225.f_555.f_3 = 180f;
						}
						else if (Global_2667225.f_489 == 55)
						{
							Global_2667225.f_555 = { -1356.4492f, 160.3916f, -100.1943f };
							Global_2667225.f_555.f_3 = 184.3954f;
						}
						else if (Global_2667225.f_489 == 56)
						{
							Global_2667225.f_555 = { 386.225f, -68.459f, 111.39f };
							Global_2667225.f_555.f_3 = -115.2f;
						}
						break;
					case 7:
						if (Global_2667225.f_489 == 43)
						{
						}
						else if (Global_2667225.f_489 == 45)
						{
						}
						else if (Global_2667225.f_489 == 48)
						{
						}
						else if (Global_2667225.f_489 == 49)
						{
						}
						else if (Global_2667225.f_489 == 50)
						{
						}
						else if (Global_2667225.f_489 == 55)
						{
						}
						else if (Global_2667225.f_489 == 56)
						{
						}
						else if (Global_2667225.f_489 == 59)
						{
						}
						break;
					case 4:
						if (Global_2667225.f_489 == 44)
						{
							Global_2667225.f_555 = { 202.819f, 5162.1733f, -88.8851f };
							Global_2667225.f_555.f_3 = 90f;
						}
						break;
					default:
						if (Global_2667225.f_489 == 39)
						{
							iVar46 = __LIB_1__::func_669(__LIB_2__::func_744(PLAYER::PLAYER_ID()));
						}
						else if (Global_2667225.f_489 == 40)
						{
							iVar46 = __LIB_1__::func_656(__LIB_4__::func_566(PLAYER::PLAYER_ID()));
						}
						else if (Global_2667225.f_489 == 41)
						{
							iVar46 = __LIB_1__::func_654(__LIB_1__::func_380(PLAYER::PLAYER_ID()));
						}
						else if (Global_2667225.f_489 == 42)
						{
							iVar46 = __LIB_1__::func_651(__LIB_1__::func_817(PLAYER::PLAYER_ID()));
						}
						else if (Global_2667225.f_489 == 43)
						{
							iVar46 = __LIB_1__::func_639(__LIB_1__::func_642(PLAYER::PLAYER_ID()));
						}
						else if (Global_2667225.f_489 == 44)
						{
							if (Global_2715699.f_6602)
							{
								iVar47 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Global_2715699.f_6603));
								if (iVar47 != __LIB_0__::getMinusOneOrNull())
								{
									iVar46 = __LIB_1__::func_635(__LIB_1__::func_636(iVar47));
								}
							}
							else
							{
								iVar46 = __LIB_1__::func_635(__LIB_1__::func_636(PLAYER::PLAYER_ID()));
							}
						}
						else if (Global_2667225.f_489 == 45)
						{
							iVar46 = 123;
						}
						else if (Global_2667225.f_489 == 46)
						{
							iVar46 = __LIB_1__::func_630(__LIB_1__::func_631(PLAYER::PLAYER_ID()));
						}
						else if (Global_2667225.f_489 == 48)
						{
							iVar46 = __LIB_1__::func_626(__LIB_1__::func_627(PLAYER::PLAYER_ID()));
						}
						else if (Global_2667225.f_489 == 49)
						{
							iVar46 = 146;
						}
						else if (Global_2667225.f_489 == 50)
						{
							Global_2815059.f_933 = 1;
							iVar46 = 147;
						}
						else if (Global_2667225.f_489 == 54)
						{
							iVar46 = 154;
						}
						else if (Global_2667225.f_489 == 55)
						{
							iVar46 = __LIB_1__::func_604(__LIB_1__::func_605(PLAYER::PLAYER_ID()));
						}
						else if (Global_2667225.f_489 == 56)
						{
							iVar46 = __LIB_1__::func_578(__LIB_0__::func_813(PLAYER::PLAYER_ID()));
						}
						else if (Global_2667225.f_489 == 59)
						{
							iVar46 = 148;
						}
						if (iVar46 != -1)
						{
							__LIB_3__::func_405(iVar46, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3), Global_2671449.f_26);
						}
						break;
				}
				bVar2 = true;
				Global_2667225.f_701 = 1;
				if (Global_2667225.f_607 == 0)
				{
					Global_2667225.f_2680 = 1;
					MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318), 28);
				}
				Global_2667225.f_2676 = 1;
				break;
			case 4:
				if (!NETWORK::NETWORK_FIND_LARGEST_BUNCH_OF_PLAYERS(0, &(Global_2667225.f_555)))
				{
					Global_2667225.f_555 = { __LIB_3__::func_177() };
					Global_2667225.f_555 = { __LIB_2__::func_878(Global_2667225.f_555, 50f, 25f) };
				}
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				break;
			case 31:
				if (__LIB_0__::func_796(PLAYER::PLAYER_ID()))
				{
					bVar37 = __LIB_3__::func_258(PLAYER::PLAYER_ID(), 1);
					if (!bVar37 == __LIB_0__::getMinusOneOrNull())
					{
						Global_2667225.f_555 = { func_1528(bVar37) };
					}
					else
					{
						Global_2667225.f_555 = { func_1528(PLAYER::PLAYER_ID()) };
					}
				}
				else
				{
					Global_2667225.f_555 = { func_1528(__LIB_0__::func_797()) };
				}
				Global_2667225.f_555.f_3 = 0f;
				Global_2667225.f_555.f_4 = 50f;
				Global_2667225.f_555.f_7 = 0;
				Global_2667225.f_555.f_8 = { 0f, 0f, 0f };
				Global_2667225.f_555.f_11 = { 0f, 0f, 0f };
				Global_2667225.f_555.f_14 = 0f;
				Global_2667225.f_593 = { Global_2667225.f_555 };
				Global_2667225.f_596 = 2f;
				Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
				Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
				Global_2667225.f_520.f_6 = 0;
				Global_2667225.f_520 = { Global_2667225.f_555 };
				Global_2667225.f_520.f_4 = 1;
				Global_2667225.f_520.f_3 = 0;
				Global_2667225.f_555.f_16 = 1;
				Global_2667225.f_555.f_17 = 1;
				Global_2667225.f_515 = 1;
				break;
			case 33:
				if (__LIB_0__::func_796(PLAYER::PLAYER_ID()))
				{
					bVar37 = __LIB_3__::func_258(PLAYER::PLAYER_ID(), 1);
					if (!bVar37 == __LIB_0__::getMinusOneOrNull())
					{
						Global_2667225.f_555 = { func_1528(bVar37) };
					}
					else
					{
						Global_2667225.f_555 = { func_1528(PLAYER::PLAYER_ID()) };
					}
				}
				else
				{
					Global_2667225.f_555 = { func_1528(__LIB_0__::func_797()) };
				}
				Global_2667225.f_555.f_3 = 0f;
				Global_2667225.f_555.f_4 = 50f;
				Global_2667225.f_555.f_7 = 0;
				Global_2667225.f_555.f_8 = { 0f, 0f, 0f };
				Global_2667225.f_555.f_11 = { 0f, 0f, 0f };
				Global_2667225.f_555.f_14 = 0f;
				Global_2667225.f_593 = { Global_2667225.f_555 };
				Global_2667225.f_596 = 2f;
				Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
				Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
				Global_2667225.f_520.f_6 = 0;
				Global_2667225.f_520 = { Global_2667225.f_555 };
				Global_2667225.f_520.f_4 = 1;
				Global_2667225.f_520.f_3 = 0;
				Global_2667225.f_555.f_16 = 1;
				Global_2667225.f_555.f_17 = 1;
				Global_2667225.f_515 = 1;
				break;
			case 5:
				Global_2667225.f_555 = { __LIB_1__::func_694(PLAYER::PLAYER_ID()) };
				Global_2667225.f_593 = { Global_2667225.f_555 };
				Global_2667225.f_596 = 20f;
				Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
				Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				Global_2667225.f_520.f_6 = 1;
				Global_2667225.f_555.f_4 = 150f;
				break;
			case 37:
				Global_2667225.f_555 = { __LIB_1__::func_694(PLAYER::PLAYER_ID()) };
				Global_2667225.f_593 = { Global_2667225.f_555 };
				Global_2667225.f_596 = 0.01f;
				Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
				Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				Global_2667225.f_520.f_6 = 1;
				Global_2667225.f_555.f_4 = 150f;
				break;
			case 38:
				Global_2667225.f_555 = { func_1528(PLAYER::PLAYER_ID()) };
				Global_2667225.f_593 = { Global_2667225.f_555 };
				Global_2667225.f_596 = 0.01f;
				Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
				Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				Global_2667225.f_520.f_6 = 1;
				Global_2667225.f_555.f_4 = 150f;
				break;
			case 53:
				Global_2667225.f_555 = { func_1528(PLAYER::PLAYER_ID()) };
				Global_2667225.f_555 = { __LIB_3__::func_176(Global_2667225.f_555) };
				Global_2667225.f_593 = { Global_2667225.f_555 };
				Global_2667225.f_596 = 0.01f;
				Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
				Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				Global_2667225.f_520.f_6 = 1;
				Global_2667225.f_555.f_4 = 150f;
				break;
			case 21:
				Global_2667225.f_555 = { __LIB_2__::func_876(__LIB_1__::func_694(PLAYER::PLAYER_ID()), 200f) };
				Global_2667225.f_593 = { Global_2667225.f_555 };
				Global_2667225.f_596 = 0f;
				Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
				Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				Global_2667225.f_520.f_6 = 0;
				Global_2667225.f_555.f_4 = 150f;
				break;
			case 6:
				Global_2667225.f_555 = { __LIB_1__::func_694(PLAYER::PLAYER_ID()) };
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				break;
			case 14:
				if (!Global_2676213.f_10)
				{
				}
				else
				{
					Global_2667225.f_555 = { Global_2676213 };
					Global_2667225.f_555.f_3 = 0f;
					Global_2667225.f_555.f_4 = 0f;
					Global_2667225.f_555.f_7 = 2;
					Global_2667225.f_555.f_8 = { Global_2676213.f_11 };
					Global_2667225.f_555.f_11 = { Global_2676213.f_14 };
					Global_2667225.f_555.f_14 = Global_2676213.f_17;
					Global_2667225.f_593 = { 0f, 0f, 0f };
					Global_2667225.f_596 = 0f;
					Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
					Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
					Global_2667225.f_520.f_6 = Global_2676213.f_22;
					if (SYSTEM::VMAG(Global_2676213.f_18) > 0f)
					{
						Global_2667225.f_520 = { Global_2676213.f_18 };
					}
					else
					{
						Global_2667225.f_520 = { Global_2676213.f_11 + Global_2676213.f_14 / Vector(2f, 2f, 2f) };
					}
					Global_2667225.f_520.f_4 = Global_2676213.f_8;
					Global_2667225.f_520.f_3 = Global_2676213.f_9;
					Global_2667225.f_555.f_16 = Global_2676213.f_7;
					Global_2667225.f_520.f_5 = Global_2676213.f_21;
					Global_2667225.f_555.f_22 = Global_2676213.f_23;
					Global_2667225.f_555.f_26 = Global_2676213.f_25;
					Global_2667225.f_520.f_32 = Global_2676213.f_27;
				}
				break;
			case 10:
				if (Global_2676213.f_10)
				{
				}
				else
				{
					Global_2667225.f_555 = { Global_2676213 };
					Global_2667225.f_555.f_3 = Global_2676213.f_5;
					Global_2667225.f_555.f_4 = Global_2676213.f_4;
					Global_2667225.f_555.f_7 = 0;
					Global_2667225.f_555.f_8 = { 0f, 0f, 0f };
					Global_2667225.f_555.f_11 = { 0f, 0f, 0f };
					Global_2667225.f_555.f_14 = 0f;
					Global_2667225.f_593 = { Global_2667225.f_555 };
					Global_2667225.f_596 = Global_2676213.f_3;
					Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
					Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
					Global_2667225.f_520.f_6 = Global_2676213.f_22;
					if (SYSTEM::VMAG(Global_2676213.f_18) > 0f)
					{
						Global_2667225.f_520 = { Global_2676213.f_18 };
					}
					else
					{
						Global_2667225.f_520 = { Global_2676213 };
					}
					Global_2667225.f_520.f_4 = Global_2676213.f_8;
					Global_2667225.f_520.f_3 = Global_2676213.f_9;
					Global_2667225.f_555.f_16 = Global_2676213.f_7;
					Global_2667225.f_520.f_5 = Global_2676213.f_21;
					Global_2667225.f_555.f_22 = Global_2676213.f_23;
					Global_2667225.f_555.f_26 = Global_2676213.f_25;
					Global_2667225.f_515 = Global_2676213.f_24;
					Global_2667225.f_520.f_32 = Global_2676213.f_27;
				}
				break;
			case 32:
				if (Global_2676213.f_10)
				{
				}
				else
				{
					Global_2667225.f_555 = { Global_2676213 };
					Global_2667225.f_555.f_3 = Global_2676213.f_5;
					Global_2667225.f_555.f_4 = Global_2676213.f_4;
					Global_2667225.f_555.f_7 = 0;
					Global_2667225.f_555.f_8 = { 0f, 0f, 0f };
					Global_2667225.f_555.f_11 = { 0f, 0f, 0f };
					Global_2667225.f_555.f_14 = 0f;
					Global_2667225.f_593 = { Global_2667225.f_555 };
					Global_2667225.f_596 = Global_2676213.f_3;
					Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
					Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
					Global_2667225.f_520.f_6 = Global_2676213.f_22;
					Global_2667225.f_520 = { Global_2676213.f_18 };
					Global_2667225.f_520.f_4 = Global_2676213.f_8;
					Global_2667225.f_520.f_3 = Global_2676213.f_9;
					Global_2667225.f_555.f_16 = Global_2676213.f_7;
					Global_2667225.f_520.f_5 = Global_2676213.f_21;
					Global_2667225.f_555.f_22 = Global_2676213.f_23;
					Global_2667225.f_515 = Global_2676213.f_24;
					Global_2667225.f_555.f_26 = Global_2676213.f_25;
					Global_2667225.f_520.f_32 = Global_2676213.f_27;
					if (__LIB_3__::func_253(Global_2667225.f_555, Global_2667225.f_555.f_4, &(Global_2667225.f_555), 0))
					{
						if (Global_2667225.f_555.f_4 > 50f)
						{
							Global_2667225.f_555.f_4 = 50f;
						}
						Global_2667225.f_593 = { Global_2667225.f_555 };
						Global_2667225.f_596 = 1.5f;
						Global_2667225.f_520.f_5 = 1.5f;
						Global_2667225.f_520.f_6 = 1;
						Global_2667225.f_555.f_16 = 0;
						Global_2667225.f_555.f_17 = 1;
						Global_2667225.f_520 = { Global_2667225.f_555 };
					}
					else
					{
						Global_2667225.f_518 = 1;
					}
				}
				break;
			case 16:
				if (Global_2667225.f_490.f_3 && !__LIB_42__::func_35(Global_2676213))
				{
					Global_2667225.f_555 = { __LIB_43__::func_356() };
					Global_2667225.f_555.f_3 = Global_2676213.f_5;
					Global_2667225.f_555.f_4 = Global_2676213.f_4;
					Global_2667225.f_555.f_27 = Global_2676213.f_26;
					bVar2 = true;
					bParam2 = false;
					Global_2667225.f_2697 = 1;
				}
				else
				{
					Global_2667225.f_555 = { Global_2676213 };
					Global_2667225.f_555.f_3 = Global_2676213.f_5;
					Global_2667225.f_555.f_4 = Global_2676213.f_4;
					Global_2667225.f_555.f_27 = Global_2676213.f_26;
					bVar2 = true;
					bParam2 = false;
					if (!Global_2667225.f_490.f_3)
					{
						Global_2667225.f_2697 = 1;
					}
				}
				break;
			case 11:
				if (Global_2676213.f_10)
				{
				}
				else
				{
					Global_2667225.f_555 = { Global_2676213 };
					Global_2667225.f_555.f_3 = Global_2676213.f_5;
					Global_2667225.f_555.f_4 = Global_2676213.f_4;
					Global_2667225.f_2697 = 1;
					bVar2 = true;
					bParam2 = false;
				}
				break;
			case 13:
				if (Global_2676213.f_10)
				{
				}
				else if (Global_2667225.f_2479 == 1)
				{
					Global_2667225.f_555 = { Global_2676213 };
					Global_2667225.f_555.f_3 = Global_2676213.f_5;
					Global_2667225.f_555.f_4 = Global_2676213.f_4;
					bVar2 = true;
				}
				else
				{
					Global_2667225.f_555 = { Global_2676213 };
					Global_2667225.f_555.f_3 = Global_2676213.f_5;
					Global_2667225.f_555.f_4 = Global_2676213.f_4;
					Global_2667225.f_593 = { Global_2667225.f_555 };
					if (Global_2676213.f_3 < (Global_2676213.f_4 / 2f))
					{
						Global_2667225.f_596 = (Global_2676213.f_4 / 2f);
					}
					else
					{
						Global_2667225.f_596 = Global_2676213.f_3;
					}
					Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
					Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
					Global_2667225.f_555.f_26 = Global_2676213.f_25;
					Global_2667225.f_520.f_6 = 1;
					Global_2667225.f_520.f_32 = Global_2676213.f_27;
				}
				if (func_120(&(Global_2667225.f_555), 0, 0, 0, 1))
				{
					Global_2667225.f_515 = 1;
				}
				break;
		}
		if (SYSTEM::VMAG(Global_2667225.f_520) > 0f)
		{
			Global_2667225.f_2674 = 1;
		}
		if (__LIB_42__::func_10(Global_2667225.f_555, &iVar0))
		{
			Global_2667225.f_515 = 1;
		}
		if (bParam2 && iParam4 == 0)
		{
			if (__LIB_3__::func_406())
			{
				Global_2667225.f_587 = 4;
			}
			else
			{
				if (Global_2667225.f_45.f_309)
				{
					Var17 = { Global_2667225.f_520 };
					if (SYSTEM::VMAG(Var17) == 0f)
					{
						Var17 = { Global_2667225.f_555 };
					}
					if (!__LIB_2__::func_674(Var17))
					{
						Global_2667225.f_555.f_23 = 0;
					}
				}
				Global_2667225.f_555.f_24 = Global_2667225.f_45.f_310;
				Global_2667225.f_587 = 3;
			}
		}
		else if (bVar2)
		{
			Var18[0 /*3*/] = { Global_2667225.f_555 };
			Var18.f_16[0] = Global_2667225.f_555.f_3;
			Global_2667225.f_587 = 0;
			Global_2667225.f_589 = 0;
			Global_2667225.f_667 = 0;
			Global_2667225.f_668 = 0;
			Global_2667225.f_2478 = 0;
			Global_2667225.f_2479 = 0;
			Global_2667225.f_2477 = 0;
			Global_2667225.f_2898 = Global_2667225.f_555.f_27;
			*uParam0 = { Var18 };
			return 1;
		}
		else
		{
			func_1460();
		}
	}
	if (Global_2667225.f_587 == 3)
	{
		if (bParam2)
		{
			switch (Global_2667225.f_555.f_7)
			{
				case 0:
					fVar3 = (Global_2667225.f_555 - Global_2667225.f_555.f_4);
					fVar5 = (Global_2667225.f_555.f_1 - Global_2667225.f_555.f_4);
					fVar4 = (Global_2667225.f_555 + Global_2667225.f_555.f_4);
					fVar6 = (Global_2667225.f_555.f_1 + Global_2667225.f_555.f_4);
					break;
				case 1:
					if (Global_2667225.f_555.f_8 < Global_2667225.f_555.f_11)
					{
						fVar3 = Global_2667225.f_555.f_8;
						fVar4 = Global_2667225.f_555.f_11;
					}
					else
					{
						fVar3 = Global_2667225.f_555.f_11;
						fVar4 = Global_2667225.f_555.f_8;
					}
					if (Global_2667225.f_555.f_8.f_1 < Global_2667225.f_555.f_11.f_1)
					{
						fVar5 = Global_2667225.f_555.f_8.f_1;
						fVar6 = Global_2667225.f_555.f_11.f_1;
					}
					else
					{
						fVar5 = Global_2667225.f_555.f_11.f_1;
						fVar6 = Global_2667225.f_555.f_8.f_1;
					}
					break;
				case 2:
					if (Global_2667225.f_555.f_8 < Global_2667225.f_555.f_11)
					{
						fVar3 = (Global_2667225.f_555.f_8 - (0.5f * Global_2667225.f_555.f_14));
						fVar4 = (Global_2667225.f_555.f_11 + (0.5f * Global_2667225.f_555.f_14));
					}
					else
					{
						fVar3 = (Global_2667225.f_555.f_11 - (0.5f * Global_2667225.f_555.f_14));
						fVar4 = (Global_2667225.f_555.f_8 + (0.5f * Global_2667225.f_555.f_14));
					}
					if (Global_2667225.f_555.f_8.f_1 < Global_2667225.f_555.f_11.f_1)
					{
						fVar5 = (Global_2667225.f_555.f_8.f_1 - (0.5f * Global_2667225.f_555.f_14));
						fVar6 = (Global_2667225.f_555.f_11.f_1 + (0.5f * Global_2667225.f_555.f_14));
					}
					else
					{
						fVar5 = (Global_2667225.f_555.f_11.f_1 - (0.5f * Global_2667225.f_555.f_14));
						fVar6 = (Global_2667225.f_555.f_8.f_1 + (0.5f * Global_2667225.f_555.f_14));
					}
					break;
				}
		}
		PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME(fVar3, fVar5, fVar4, fVar6);
		if (PATHFIND::ARE_NODES_LOADED_FOR_AREA(fVar3, fVar5, fVar4, fVar6))
		{
			if (Global_2667225.f_555.f_21)
			{
				Var18[0 /*3*/] = { Global_2667225.f_555.f_18 };
				Var18.f_16[0] = Global_2667225.f_555.f_3;
			}
			else
			{
				Var18[0 /*3*/] = { Global_2667225.f_555 };
				Var18.f_16[0] = Global_2667225.f_555.f_3;
			}
			Var48.f_6 = 1082130432;
			Var48.f_7 = 1176255488;
			Var48.f_8 = 1;
			Var48.f_10 = 1;
			Var48.f_13 = 1;
			Var48.f_15 = 1;
			Var48.f_16 = 1;
			Var48.f_31 = 1;
			Var48.f_34 = joaat("tailgater");
			Var48.f_38 = 2;
			Var48.f_45 = 2;
			Var48.f_49 = 1123024896;
			Var48.f_53 = 999;
			Var48.f_54 = 1176256410;
			Var48.f_55 = 1;
			Var48.f_56 = 1;
			Var48.f_57 = 1;
			Var48 = { Global_2667225.f_520 };
			Var48.f_4 = Global_2667225.f_596;
			Var48.f_12 = bParam2;
			Var48.f_3 = Global_2667225.f_520.f_5;
			Var48.f_5 = fVar36;
			Var48.f_16 = Global_2667225.f_555.f_23;
			if (Global_2667225.f_555.f_26)
			{
				Var48.f_10 = 0;
			}
			if (Global_2667225.f_520.f_32 > 0f)
			{
				Var48.f_6 = Global_2667225.f_520.f_32;
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iVar49 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar49))
				{
					Var48.f_34 = ENTITY::GET_ENTITY_MODEL(iVar49);
				}
			}
			if (iParam7 != 0)
			{
				Var48.f_34 = iParam7;
			}
			Var48.f_18 = 1;
			switch (Global_2667225.f_555.f_7)
			{
				case 0:
					Var48.f_19 = { Global_2667225.f_555 };
					Var48.f_25 = Global_2667225.f_555.f_4;
					Var48.f_4 = 0f;
					break;
				case 1:
					Var48.f_19 = { Global_2667225.f_555.f_8 };
					Var48.f_22 = { Global_2667225.f_555.f_11 };
					Var48.f_25 = 0f;
					break;
				case 2:
					Var48.f_19 = { Global_2667225.f_555.f_8 };
					Var48.f_22 = { Global_2667225.f_555.f_11 };
					Var48.f_25 = Global_2667225.f_555.f_14;
					break;
			}
			Var48.f_26 = Global_2667225.f_555.f_7;
			if ((__LIB_0__::func_975() && __LIB_3__::func_262()) && func_120(&(Global_2667225.f_512), 0, 0, 0, 1))
			{
				Var48.f_10 = 0;
			}
			Var48.f_9 = uParam5;
			Var48.f_11 = __LIB_3__::func_404();
			if (Global_2667225.f_520.f_6)
			{
				Var48.f_30 = 1;
				Var48.f_29 = 0;
			}
			else
			{
				Var48.f_30 = 0;
				Var48.f_29 = 1;
			}
			if (Global_2667225.f_489 == 3)
			{
				Var48.f_28 = 1;
				Var48.f_29 = 1;
				Var48.f_30 = 0;
			}
			else if (Global_2667225.f_489 == 26)
			{
				Var48.f_28 = 1;
				Var48.f_30 = 1;
				Var48.f_29 = 0;
				Var48.f_32 = 1;
			}
			if (Global_2667225.f_489 == 1)
			{
				Var48.f_7 = 15f;
			}
			if (Global_2667225.f_45.f_311 > 0f)
			{
				Var48.f_7 = Global_2667225.f_45.f_311;
			}
			Var48.f_17 = uParam6;
			Var48.f_55 = Global_2667225.f_555.f_16;
			Var48.f_60 = Global_2667225.f_555.f_30;
			if (__LIB_3__::func_139(PLAYER::PLAYER_ID()))
			{
				Var48.f_58 = 1;
			}
			func_72(&(Var18[0 /*3*/]), &(Var18.f_16[0]), &Var48);
			iVar0 = 0;
			while (iVar0 < 5)
			{
				if (iVar0 < Global_2674786.f_162 && iVar0 > 0)
				{
					Var18[iVar0 /*3*/] = { Global_2674786[iVar0 /*3*/] };
					Var18.f_16[iVar0] = Global_2674786.f_121[iVar0];
				}
				iVar0++;
			}
			if (Var48.f_11 && Var48.f_27)
			{
				Global_2667225.f_45.f_304 = 1;
			}
			else
			{
				Global_2667225.f_45.f_304 = 0;
			}
			Global_2667225.f_590++;
			Global_2667225.f_588 = 3;
			Global_2667225.f_587 = 5;
		}
	}
	if (Global_2667225.f_587 == 4)
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			Var18[iVar0 /*3*/] = { Global_2667225.f_555.f_18 };
			if (((iVar0 == 0 && Global_2667225.f_489 == 26) && Global_2667225.f_555.f_25) && func_1452(&(Var18[iVar0 /*3*/]), __LIB_1__::func_560(Var18[iVar0 /*3*/], 1008981770)))
			{
			}
			else
			{
				switch (Global_2667225.f_555.f_7)
				{
					case 0:
						Var18[iVar0 /*3*/] = { func_1449(Global_2667225.f_555, 0f, 0f, 0f, Global_2667225.f_555.f_4, Global_2667225.f_555.f_7) };
						break;
					case 1:
						Var18[iVar0 /*3*/] = { func_1449(Global_2667225.f_555.f_8, Global_2667225.f_555.f_11, 0f, Global_2667225.f_555.f_7) };
						break;
					case 2:
						Var18[iVar0 /*3*/] = { func_1449(Global_2667225.f_555.f_8, Global_2667225.f_555.f_11, Global_2667225.f_555.f_14, Global_2667225.f_555.f_7) };
						break;
					}
			}
			if (SYSTEM::VMAG(Global_2667225.f_520) > 0f)
			{
				Var17 = { Global_2667225.f_520 - Var18[iVar0 /*3*/] };
				Var18.f_16[iVar0] = MISC::GET_HEADING_FROM_VECTOR_2D(Var17.f_0, Var17.f_1);
			}
			iVar0++;
		}
		Global_2667225.f_45.f_304 = 0;
		Global_2667225.f_590++;
		Global_2667225.f_588 = 4;
		Global_2667225.f_587 = 5;
	}
	if (Global_2667225.f_587 == 5)
	{
		if (Global_2667225.f_489 == 11 && Global_2667225.f_45.f_59 > 0f)
		{
			if (SYSTEM::VDIST(Var18[0 /*3*/], Global_2667225.f_45.f_60) > SYSTEM::VDIST(Global_2676213, Global_2667225.f_45.f_60))
			{
				Var18[0 /*3*/] = { Global_2676213 };
				Var18.f_16[0] = Global_2676213.f_5;
			}
		}
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if ((__LIB_1__::func_410(Global_2667225.f_489) && !__LIB_1__::func_560(Var18[iVar0 /*3*/], 0.01f)) && !__LIB_3__::func_406())
			{
				if (iVar0 == 4 || SYSTEM::VMAG(Var18[iVar0 + 1 /*3*/]) == 0f)
				{
					if ((Global_2667225.f_588 == 4 || Global_2667225.f_588 == 3) && Global_2667225.f_590 < 2)
					{
						Global_2667225.f_587 = Global_2667225.f_588;
						iVar0 = 5;
					}
					else if (Global_2667225.f_555.f_24)
					{
						func_1460();
						return 0;
					}
					else
					{
						__LIB_2__::func_670(&Var18, &iVar0);
					}
				}
			}
			else if ((__LIB_35__::func_860(Var18[iVar0 /*3*/], 3.5f, 1, 1, 0, 0, 0, 0, 0) || __LIB_3__::func_401(Var18[iVar0 /*3*/], 0.5f, PLAYER::PLAYER_ID(), 0, 0)) || Global_2667225.f_45.f_304)
			{
				if (iVar0 == 4 || SYSTEM::VMAG(Var18[iVar0 + 1 /*3*/]) == 0f)
				{
					if ((Global_2667225.f_588 == 4 || Global_2667225.f_588 == 3) && Global_2667225.f_590 < 2)
					{
						Global_2667225.f_587 = Global_2667225.f_588;
						iVar0 = 5;
					}
					else if (Global_2667225.f_555.f_24)
					{
						func_1460();
						return 0;
					}
					else
					{
						__LIB_2__::func_670(&Var18, &iVar0);
					}
				}
			}
			else
			{
				__LIB_2__::func_670(&Var18, &iVar0);
			}
			iVar0++;
		}
	}
	if (Global_2667225.f_587 == 6)
	{
		if (Global_2667225.f_589 == 2 || Global_2667225.f_555.f_16 == 0)
		{
			iVar1 = 0;
		}
		else
		{
			iVar1 = iParam3;
		}
		if (Global_2667225.f_555.f_7 == 0)
		{
			if (Global_2667225.f_520.f_5 > (Global_2667225.f_555.f_4 * 2f))
			{
				Global_2667225.f_520.f_5 = (Global_2667225.f_555.f_4 * 2f);
			}
		}
		Global_2667225.f_555.f_5 = 1;
		Global_2667225.f_555.f_6 = iVar1;
		Global_2667225.f_555.f_15 = Global_2667225.f_45.f_65;
		Global_2667225.f_555.f_30 = Global_2667225.f_45.f_182;
		Global_2667225.f_520.f_8 = 0;
		Global_2667225.f_520.f_9 = __LIB_3__::func_404();
		Global_2667225.f_520.f_10 = 0;
		if (func_1378(&(Global_2667225.f_555), &(Global_2667225.f_520), &Var18))
		{
			Global_2667225.f_511 = 0;
			Global_2667225.f_587 = 2;
		}
	}
	if (Global_2667225.f_587 == 2)
	{
		*uParam0 = { Var18 };
		Global_2667225.f_587 = 0;
		Global_2667225.f_589 = 0;
		Global_2667225.f_667 = 0;
		Global_2667225.f_668 = 0;
		Global_2667225.f_2478 = 0;
		Global_2667225.f_2479 = 0;
		Global_2667225.f_2477 = 0;
		return 1;
	}
	return 0;
}

int func_1378(var uParam0, var uParam1, var uParam2)//Position - 0xAA7B9
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	struct<3> Var6;
	struct<3> Var7;
	struct<3> Var8;
	int iVar9;
	struct<3> Var10;
	struct<3> Var11;
	float fVar12;
	bool bVar13;
	struct<61> Var14;
	bool bVar15;
	bVar13 = false;
	switch (uParam0->f_7)
	{
		case 0:
			if (((!Global_2667225.f_2466 == *uParam0 || !Global_2667225.f_2466.f_1 == uParam0->f_1) || !Global_2667225.f_2466.f_2 == uParam0->f_2) || !Global_2667225.f_2469 == uParam0->f_4)
			{
				bVar13 = true;
			}
			break;
		case 1:
			if (((((!Global_2667225.f_2480 == uParam0->f_8 || !Global_2667225.f_2480.f_1 == uParam0->f_8.f_1) || !Global_2667225.f_2480.f_2 == uParam0->f_8.f_2) || !Global_2667225.f_2483 == uParam0->f_11) || !Global_2667225.f_2483.f_1 == uParam0->f_11.f_1) || !Global_2667225.f_2483.f_2 == uParam0->f_11.f_2)
			{
				bVar13 = true;
			}
			break;
		case 2:
			if ((((((!Global_2667225.f_2480 == uParam0->f_8 || !Global_2667225.f_2480.f_1 == uParam0->f_8.f_1) || !Global_2667225.f_2480.f_2 == uParam0->f_8.f_2) || !Global_2667225.f_2483 == uParam0->f_11) || !Global_2667225.f_2483.f_1 == uParam0->f_11.f_1) || !Global_2667225.f_2483.f_2 == uParam0->f_11.f_2) || !Global_2667225.f_2486 == uParam0->f_14)
			{
				bVar13 = true;
			}
			break;
	}
	if (Global_1574477)
	{
		if (!Global_2667225.f_2487 == uParam0->f_7)
		{
			bVar13 = true;
		}
		if (SCRIPT::IS_THREAD_ACTIVE(Global_2667225.f_2473) && !Global_2667225.f_2473 == SCRIPT::GET_ID_OF_THIS_THREAD())
		{
			bVar13 = true;
		}
	}
	if (bVar13)
	{
		if (Global_2667225.f_2464 == 1)
		{
			if (SCRIPT::IS_THREAD_ACTIVE(Global_2667225.f_2473))
			{
				if (Global_2667225.f_2473 == SCRIPT::GET_ID_OF_THIS_THREAD())
				{
					if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_2470) < __LIB_0__::func_853(0))
					{
						return 0;
					}
				}
				else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_2470) < __LIB_0__::func_853(0))
				{
					return 0;
				}
			}
			NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
			PED::SPAWNPOINTS_CANCEL_SEARCH();
			__LIB_1__::func_442();
		}
		Global_2667225.f_2464 = 0;
	}
	else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_2470) > __LIB_0__::func_853(0))
	{
		Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
		__LIB_2__::func_740();
	}
	switch (uParam0->f_7)
	{
		case 0:
			fVar2 = (*uParam0 - uParam0->f_4);
			fVar3 = (uParam0->f_1 - uParam0->f_4);
			fVar4 = (*uParam0 + uParam0->f_4);
			fVar5 = (uParam0->f_1 + uParam0->f_4);
			break;
		case 1:
			if (uParam0->f_8 < uParam0->f_11)
			{
				fVar2 = uParam0->f_8;
				fVar4 = uParam0->f_11;
			}
			else
			{
				fVar2 = uParam0->f_11;
				fVar4 = uParam0->f_8;
			}
			if (uParam0->f_8.f_1 < uParam0->f_11.f_1)
			{
				fVar3 = uParam0->f_8.f_1;
				fVar5 = uParam0->f_11.f_1;
			}
			else
			{
				fVar3 = uParam0->f_11.f_1;
				fVar5 = uParam0->f_8.f_1;
			}
			break;
		case 2:
			if (uParam0->f_8 < uParam0->f_11)
			{
				fVar2 = (uParam0->f_8 - (0.5f * uParam0->f_14));
				fVar4 = (uParam0->f_11 + (0.5f * uParam0->f_14));
			}
			else
			{
				fVar2 = (uParam0->f_11 - (0.5f * uParam0->f_14));
				fVar4 = (uParam0->f_8 + (0.5f * uParam0->f_14));
			}
			if (uParam0->f_8.f_1 < uParam0->f_11.f_1)
			{
				fVar3 = (uParam0->f_8.f_1 - (0.5f * uParam0->f_14));
				fVar5 = (uParam0->f_11.f_1 + (0.5f * uParam0->f_14));
			}
			else
			{
				fVar3 = (uParam0->f_11.f_1 - (0.5f * uParam0->f_14));
				fVar5 = (uParam0->f_8.f_1 + (0.5f * uParam0->f_14));
			}
			break;
	}
	PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME(fVar2, fVar3, fVar4, fVar5);
	if (uParam0->f_7 == 0)
	{
		Var6 = { *uParam0 };
	}
	else
	{
		Var6 = { uParam0->f_8 + uParam0->f_11 * Vector(0.5f, 0.5f, 0.5f) };
	}
	Var7 = { Var6 + Vector(-0.1f, -0.1f, -0.1f) };
	Var8 = { Var6 + Vector(0.1f, 0.1f, 0.1f) };
	if (!Global_2667225.f_2464)
	{
		NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
		PED::SPAWNPOINTS_CANCEL_SEARCH();
		__LIB_1__::func_442();
		if (uParam1->f_7 && uParam0->f_7 == 0)
		{
			if (SYSTEM::VMAG(*uParam0) > 0f)
			{
				if (__LIB_41__::func_947(*uParam0, 6f, 1f, 1f, 5f, 1, 1, 1, 120f, 0, -1, 1, uParam1->f_5, uParam0->f_17, 0, 0, 0))
				{
					*(uParam2[0 /*3*/]) = { *uParam0 };
					uParam2->f_16[0] = uParam0->f_3;
					return 1;
				}
			}
		}
		if (!PED::SPAWNPOINTS_IS_SEARCH_ACTIVE())
		{
			Global_2667225.f_2487 = uParam0->f_7;
			switch (uParam0->f_7)
			{
				case 0:
					Global_2667225.f_2466 = { *uParam0 };
					Global_2667225.f_2469 = uParam0->f_4;
					break;
				case 1:
					Global_2667225.f_2480 = { uParam0->f_8 };
					Global_2667225.f_2483 = { uParam0->f_11 };
					Global_2667225.f_2486 = 0f;
					Global_2667225.f_2466 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
				case 2:
					Global_2667225.f_2480 = { uParam0->f_8 };
					Global_2667225.f_2483 = { uParam0->f_11 };
					Global_2667225.f_2486 = uParam0->f_14;
					Global_2667225.f_2466 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
			}
			if (!uParam1->f_8 && !uParam1->f_9)
			{
				__LIB_1__::func_436(Var6.f_0, Var6.f_1);
			}
			Global_2667225.f_2465 = 1;
			Global_2667225.f_2464 = 1;
			Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
			Global_2667225.f_2470 = NETWORK::GET_NETWORK_TIME();
			Global_2667225.f_2473 = SCRIPT::GET_ID_OF_THIS_THREAD();
		}
		else
		{
			return 0;
		}
	}
	if (Global_2667225.f_2464)
	{
		if (Global_2667225.f_2465 == 1)
		{
			if (PATHFIND::ARE_NODES_LOADED_FOR_AREA(fVar2, fVar3, fVar4, fVar5) || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_2471) > 5000)
			{
				Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
				if (uParam1->f_8 || uParam1->f_9)
				{
					if (uParam0->f_21)
					{
						*(uParam2[0 /*3*/]) = { uParam0->f_18 };
					}
					else
					{
						*(uParam2[0 /*3*/]) = { Var6 };
					}
					Var14.f_6 = 1082130432;
					Var14.f_7 = 1176255488;
					Var14.f_8 = 1;
					Var14.f_10 = 1;
					Var14.f_13 = 1;
					Var14.f_15 = 1;
					Var14.f_16 = 1;
					Var14.f_31 = 1;
					Var14.f_34 = joaat("tailgater");
					Var14.f_38 = 2;
					Var14.f_45 = 2;
					Var14.f_49 = 1123024896;
					Var14.f_53 = 999;
					Var14.f_54 = 1176256410;
					Var14.f_55 = 1;
					Var14.f_56 = 1;
					Var14.f_57 = 1;
					Var14 = { *uParam1 };
					Var14.f_3 = uParam1->f_5;
					Var14.f_11 = uParam1->f_9;
					Var14.f_18 = 1;
					if (uParam1->f_32 > 0f)
					{
						Var14.f_6 = uParam1->f_32;
					}
					switch (uParam0->f_7)
					{
						case 0:
							Var14.f_19 = { *uParam0 };
							Var14.f_25 = uParam0->f_4;
							break;
						case 1:
							Var14.f_19 = { uParam0->f_8 };
							Var14.f_22 = { uParam0->f_11 };
							Var14.f_25 = 0f;
							break;
						case 2:
							Var14.f_19 = { uParam0->f_8 };
							Var14.f_22 = { uParam0->f_11 };
							Var14.f_25 = uParam0->f_14;
							break;
					}
					Var14.f_26 = uParam0->f_7;
					Var14.f_12 = uParam0->f_15;
					if (uParam0->f_21)
					{
						Var14.f_30 = 1;
						Var14.f_32 = 1;
					}
					iVar9 = 0;
					while (iVar9 < 2)
					{
						Var14.f_38[iVar9 /*3*/] = { uParam1->f_13[iVar9 /*3*/] };
						Var14.f_45[iVar9] = uParam1->f_20[iVar9];
						iVar9++;
					}
					Var14.f_51 = uParam1->f_30;
					Var14.f_55 = uParam0->f_16;
					if (uParam0->f_26)
					{
						Var14.f_10 = 0;
					}
					if (__LIB_1__::func_435(Global_4718592.f_168757))
					{
						Var14.f_9 = 1;
					}
					Var14.f_60 = uParam0->f_30;
					func_72(uParam2[0 /*3*/], &(uParam2->f_16[0]), &Var14);
					if ((uParam1->f_7 && uParam1->f_9) && uParam0->f_7 == 0)
					{
						if (!__LIB_0__::func_828(*(uParam2[0 /*3*/]), *uParam0, uParam0->f_4, 1, 1))
						{
							*(uParam2[0 /*3*/]) = { *uParam0 };
							uParam2->f_16[0] = uParam0->f_3;
						}
					}
					Global_2667225.f_2465 = 9;
				}
				else
				{
					Global_2667225.f_2465 = 2;
				}
			}
		}
		if (Global_2667225.f_2465 == 2)
		{
			if ((PATHFIND::IS_NAVMESH_LOADED_IN_AREA(Var7, Var8) || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_2471) > 15000) || PATHFIND::GET_NUM_NAVMESHES_EXISTING_IN_AREA(Var7, Var8) == 0)
			{
				Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
				if (uParam0->f_5 && !__LIB_2__::func_40(PLAYER::PLAYER_ID(), 0))
				{
					Global_2667225.f_2465 = 3;
				}
				else
				{
					Global_2667225.f_2465 = 4;
				}
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_2475) > 7000)
			{
				__LIB_2__::func_739(Var6.f_0, Var6.f_1);
			}
		}
		if (Global_2667225.f_2465 == 3)
		{
			if (__LIB_1__::func_432() || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_2471) > 10000)
			{
				Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
				Global_2667225.f_2465 = 4;
			}
		}
		if (Global_2667225.f_2465 == 4)
		{
			if (PED::SPAWNPOINTS_IS_SEARCH_ACTIVE())
			{
				NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
				PED::SPAWNPOINTS_CANCEL_SEARCH();
			}
			else
			{
				iVar0 = 0;
				__LIB_2__::func_740();
				if (uParam0->f_5)
				{
					if (SYSTEM::VMAG(*uParam1) == 0f)
					{
						iVar0 += 2;
					}
					if (uParam1->f_3)
					{
						iVar0 += 8;
					}
					iVar0 += 16;
					iVar0 += 32;
					if (!PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
					{
						iVar0 += 64;
						iVar0 += 128;
						iVar0 += 256;
					}
					iVar0 += 2048;
					iVar0 += 512;
					iVar0 += 1024;
					switch (uParam0->f_7)
					{
						case 0:
							if (NETWORK::NETWORK_START_RESPAWN_SEARCH_FOR_PLAYER(PLAYER::PLAYER_ID(), *uParam0, uParam0->f_4, *uParam1, iVar0))
							{
								Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
								Global_2667225.f_2465 = 5;
							}
							break;
						case 1:
							__LIB_2__::func_669(uParam0->f_8, uParam0->f_11, &Var10, &Var11, &fVar12);
							if (NETWORK::NETWORK_START_RESPAWN_SEARCH_IN_ANGLED_AREA_FOR_PLAYER(PLAYER::PLAYER_ID(), Var10, Var11, fVar12, *uParam1, iVar0))
							{
								Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
								Global_2667225.f_2465 = 5;
							}
							break;
						case 2:
							if (NETWORK::NETWORK_START_RESPAWN_SEARCH_IN_ANGLED_AREA_FOR_PLAYER(PLAYER::PLAYER_ID(), uParam0->f_8, uParam0->f_11, uParam0->f_14, *uParam1, iVar0))
							{
								Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
								Global_2667225.f_2465 = 5;
							}
							break;
					}
				}
				else
				{
					if (uParam1->f_3)
					{
						iVar0++;
					}
					iVar0 += 2;
					if (uParam1->f_10)
					{
						iVar0 += 32;
					}
					Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
					Global_2667225.f_2465 = 5;
					switch (uParam0->f_7)
					{
						case 0:
							PED::SPAWNPOINTS_START_SEARCH(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
							break;
						case 1:
							__LIB_2__::func_669(uParam0->f_8, uParam0->f_11, &Var10, &Var11, &fVar12);
							PED::SPAWNPOINTS_START_SEARCH_IN_ANGLED_AREA(Var10, Var11, fVar12, iVar0, 2f, 5000);
							break;
						case 2:
							PED::SPAWNPOINTS_START_SEARCH_IN_ANGLED_AREA(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
							break;
						}
					}
				}
		}
		if (Global_2667225.f_2465 == 5)
		{
			if (func_1388(uParam2, uParam0, uParam1, 0))
			{
				if (Global_2667225.f_2491.f_5)
				{
					Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
					Global_2667225.f_2465 = 6;
				}
				else
				{
					Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
					if (!uParam0->f_5)
					{
						if (!SYSTEM::VMAG(*uParam1) == 0f)
						{
							Var1 = { *uParam1 - *(uParam2[0 /*3*/]) };
							uParam2->f_16[0] = MISC::GET_HEADING_FROM_VECTOR_2D(Var1.f_0, Var1.f_1);
						}
					}
					Global_2667225.f_2465 = 9;
				}
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_2471) > 20000)
			{
				NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
				PED::SPAWNPOINTS_CANCEL_SEARCH();
				Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
				Global_2667225.f_2465 = 8;
			}
		}
		if (Global_2667225.f_2465 == 6)
		{
			iVar0 = 0;
			Global_2667225.f_2491.f_1 = 0;
			if (uParam1->f_3)
			{
				iVar0++;
			}
			else if (uParam0->f_7 == 0)
			{
				if (!__LIB_1__::func_413(uParam0->f_4))
				{
					if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var6)))
					{
						iVar0++;
					}
				}
			}
			else if (!__LIB_1__::func_412(uParam0->f_8, uParam0->f_11, uParam0->f_14))
			{
				if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var6)))
				{
					iVar0++;
				}
			}
			iVar0 += 2;
			if (uParam1->f_10)
			{
				iVar0 += 32;
			}
			if (uParam0->f_15)
			{
				iVar0 += 16;
			}
			Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
			Global_2667225.f_2465 = 7;
			switch (uParam0->f_7)
			{
				case 0:
					PED::SPAWNPOINTS_START_SEARCH(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
					break;
				case 1:
					__LIB_2__::func_669(uParam0->f_8, uParam0->f_11, &Var10, &Var11, &fVar12);
					PED::SPAWNPOINTS_START_SEARCH_IN_ANGLED_AREA(Var10, Var11, fVar12, iVar0, 2f, 5000);
					break;
				case 2:
					PED::SPAWNPOINTS_START_SEARCH_IN_ANGLED_AREA(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
					break;
				}
		}
		if (Global_2667225.f_2465 == 7)
		{
			if (func_1388(uParam2, uParam0, uParam1, 1))
			{
				if (SYSTEM::VMAG(*(uParam2[0 /*3*/])) == 0f)
				{
					iVar9 = 0;
					while (iVar9 < 3)
					{
						if (SYSTEM::VMAG(*(uParam2[0 /*3*/])) == 0f)
						{
							if (!SYSTEM::VMAG(Global_2667225.f_2625[iVar9 /*3*/]) == 0f)
							{
								switch (uParam0->f_7)
								{
									case 0:
										if (__LIB_0__::func_828(Global_2667225.f_2625[iVar9 /*3*/], *uParam0, uParam0->f_4, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2667225.f_2625[iVar9 /*3*/] };
										}
										break;
									case 1:
										if (__LIB_1__::func_453(Global_2667225.f_2625[iVar9 /*3*/], uParam0->f_8, uParam0->f_11, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2667225.f_2625[iVar9 /*3*/] };
										}
										break;
									case 2:
										if (OBJECT::IS_POINT_IN_ANGLED_AREA(Global_2667225.f_2625[iVar9 /*3*/], uParam0->f_8, uParam0->f_11, uParam0->f_14, false, true))
										{
											*(uParam2[0 /*3*/]) = { Global_2667225.f_2625[iVar9 /*3*/] };
										}
										break;
									}
								}
						}
						iVar9++;
					}
					if (SYSTEM::VMAG(*(uParam2[0 /*3*/])) == 0f)
					{
						switch (uParam0->f_7)
						{
							case 0:
								Var1 = { *uParam0 };
								break;
							case 1:
							case 2:
								Var1 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
								break;
						}
						func_1380(&Var1, 0, 1, 1, 0, uParam0, uParam1);
						*(uParam2[0 /*3*/]) = { Var1 };
					}
				}
				Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
				if (!SYSTEM::VMAG(*uParam1) == 0f)
				{
					iVar9 = 0;
					while (iVar9 < 5)
					{
						Var1 = { *uParam1 - *(uParam2[iVar9 /*3*/]) };
						uParam2->f_16[iVar9] = MISC::GET_HEADING_FROM_VECTOR_2D(Var1.f_0, Var1.f_1);
						iVar9++;
					}
				}
				Global_2667225.f_2465 = 9;
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_2471) > 20000)
			{
				Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
				Global_2667225.f_2465 = 8;
			}
		}
		if (Global_2667225.f_2465 == 8)
		{
			if (uParam0->f_5)
			{
				if (__LIB_1__::func_410(Global_2667225.f_489))
				{
				}
			}
			else if (Global_2667225.f_2491.f_2)
			{
				__LIB_1__::func_409(uParam2, &(Global_2667225.f_2491.f_6));
			}
			else
			{
				if (uParam0->f_15)
				{
					bVar15 = false;
				}
				else
				{
					bVar15 = true;
				}
				*(uParam2[0 /*3*/]) = { Global_2667225.f_2466 };
				func_1380(uParam2[0 /*3*/], 0, bVar15, 0, 0, uParam0, uParam1);
			}
			Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
			Global_2667225.f_2465 = 9;
		}
		if (Global_2667225.f_2465 == 9)
		{
			Global_2667225.f_2464 = 0;
			NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
			PED::SPAWNPOINTS_CANCEL_SEARCH();
			__LIB_1__::func_442();
			return 1;
		}
		Global_2667225.f_2470 = NETWORK::GET_NETWORK_TIME();
	}
	return 0;
}

void func_1380(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, var uParam5, var uParam6)//Position - 0xAB801
{
	struct<3> Var0;
	var uVar1;
	struct<61> Var2;
	var uVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	struct<3> Var7;
	struct<3> Var8;
	struct<3> Var9;
	float fVar10;
	Var2.f_6 = 1082130432;
	Var2.f_7 = 1176255488;
	Var2.f_8 = 1;
	Var2.f_10 = 1;
	Var2.f_13 = 1;
	Var2.f_15 = 1;
	Var2.f_16 = 1;
	Var2.f_31 = 1;
	Var2.f_34 = joaat("tailgater");
	Var2.f_38 = 2;
	Var2.f_45 = 2;
	Var2.f_49 = 1123024896;
	Var2.f_53 = 999;
	Var2.f_54 = 1176256410;
	Var2.f_55 = 1;
	Var2.f_56 = 1;
	Var2.f_57 = 1;
	if (bParam1)
	{
		iVar6 = 0;
	}
	else
	{
		iVar6 = 16;
	}
	if (!uParam6->f_3)
	{
		if (uParam5->f_5)
		{
			if (!uParam5->f_22)
			{
				iVar6 += 4;
			}
			else
			{
				switch (uParam5->f_7)
				{
					case 0:
						Var7 = { *uParam5 };
						if (__LIB_1__::func_413(uParam5->f_4) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var7)))
						{
							iVar6 += 4;
						}
						break;
					case 1:
						Var7 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (__LIB_1__::func_412(uParam5->f_8, uParam5->f_11, 0f) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var7)))
						{
							iVar6 += 4;
						}
						break;
					case 2:
						Var7 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (__LIB_1__::func_412(uParam5->f_8, uParam5->f_11, uParam5->f_14) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var7)))
						{
							iVar6 += 4;
						}
						break;
					}
			}
		}
		else
		{
			iVar6 += 4;
		}
	}
	if (func_1382(*uParam0, &Var0, iVar6, iParam3, 1))
	{
	}
	else
	{
		bVar5 = true;
	}
	if (bVar5)
	{
		Var0 = { *uParam0 };
		Var2 = { *uParam6 };
		Var2.f_8 = 1;
		Var2.f_3 = uParam6->f_5;
		if (bParam2)
		{
			Var2.f_10 = 0;
		}
		else
		{
			Var2.f_10 = 1;
		}
		Var2.f_13 = uParam5->f_15;
		Var2.f_15 = iParam3;
		if (uParam6->f_32 > 0f)
		{
			Var2.f_6 = uParam6->f_32;
		}
		if (bParam4)
		{
			Var2.f_18 = 1;
			Var2.f_26 = uParam5->f_7;
			switch (uParam5->f_7)
			{
				case 0:
					Var2.f_19 = { *uParam5 };
					Var2.f_25 = uParam5->f_4;
					break;
				case 1:
					Var2.f_19 = { uParam5->f_8 };
					Var2.f_22 = { uParam5->f_11 };
					Var2.f_25 = 0f;
					break;
				case 2:
					Var2.f_19 = { uParam5->f_8 };
					Var2.f_22 = { uParam5->f_11 };
					Var2.f_25 = uParam5->f_14;
					break;
				}
		}
		iVar4 = 0;
		while (iVar4 < 2)
		{
			Var2.f_38[iVar4 /*3*/] = { uParam6->f_13[iVar4 /*3*/] };
			Var2.f_45[iVar4] = uParam6->f_20[iVar4];
			iVar4++;
		}
		Var2.f_51 = uParam6->f_30;
		Var2.f_55 = uParam5->f_16;
		if (__LIB_2__::func_732(PLAYER::PLAYER_ID(), 0))
		{
			Var2.f_9 = 1;
		}
		Var2.f_60 = uParam5->f_30;
		func_72(&Var0, &uVar1, &Var2);
	}
	if (bParam4)
	{
		switch (uParam5->f_7)
		{
			case 0:
				Var8 = { *uParam5 };
				fVar10 = uParam5->f_4;
				break;
			case 1:
				Var8 = { uParam5->f_8 };
				Var9 = { uParam5->f_11 };
				break;
			case 2:
				Var8 = { uParam5->f_8 };
				Var9 = { uParam5->f_11 };
				fVar10 = uParam5->f_14;
				break;
		}
		if (!__LIB_2__::func_735(Var0, uParam5->f_7, Var8, Var9, fVar10))
		{
			if (func_1382(*uParam0, &Var0, iVar6, iParam3, 0))
			{
				if (!__LIB_2__::func_735(Var0, uParam5->f_7, Var8, Var9, fVar10))
				{
					if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
					{
						Var0 = { Var8 + Var9 * Vector(0.5f, 0.5f, 0.5f) };
					}
					else
					{
						Var0 = { Var8 };
					}
					if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &uVar3, false, false))
					{
						Var0.f_2 = uVar3;
					}
				}
			}
			else if (func_120(uParam0, 1, 1, 1, 1))
			{
				func_1380(uParam0, bParam1, bParam2, iParam3, bParam4, uParam5, uParam6);
			}
			else
			{
				if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
				{
					Var0 = { Var8 + Var9 * Vector(0.5f, 0.5f, 0.5f) };
				}
				else
				{
					Var0 = { Var8 };
				}
				if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &uVar3, false, false))
				{
					Var0.f_2 = uVar3;
				}
			}
		}
	}
	*uParam0 = { Var0 };
	Global_2667225.f_667 = 1;
}

int func_1382(struct<3> Param0, var* uParam1, int iParam2, int iParam3, bool bParam4)//Position - 0xABCE1
{
	if (__LIB_1__::func_411(Param0, uParam1))
	{
		if (func_1383(Param0, uParam1, iParam3, bParam4))
		{
			return 1;
		}
	}
	if (PATHFIND::GET_SAFE_COORD_FOR_PED(Param0, false, uParam1, iParam2))
	{
		if (func_1383(Param0, uParam1, iParam3, bParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_1383(struct<3> Param0, var* uParam1, int iParam2, bool bParam3)//Position - 0xABD3D
{
	float fVar0;
	var uVar1;
	var uVar2;
	fVar0 = SYSTEM::VDIST(Param0, *uParam1);
	if (fVar0 < 40f)
	{
		uVar1 = 2;
		uVar2 = 2;
		if ((iParam2 == 1 && !func_117(Global_2667225.f_512, uParam1, &uVar1, &uVar2, bParam3, 1)) || iParam2 == 0)
		{
			if (!__LIB_2__::func_990(*uParam1, 1056964608))
			{
				if (!__LIB_2__::func_664(uParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_1388(var uParam0, var uParam1, var uParam2, bool bParam3)//Position - 0xAC011
{
	struct<3> Var0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	if (Global_2667225.f_2491.f_1 == 0 && Global_2667225.f_2491 == 0)
	{
		if (uParam1->f_5 && !bParam3)
		{
			switch (NETWORK::NETWORK_QUERY_RESPAWN_RESULTS(&(Global_2667225.f_2491.f_1)))
			{
				case 0:
					func_1434(uParam1, uParam2);
					if (!Global_2667225.f_2491.f_2)
					{
						if (uParam2->f_7 && Global_2667225.f_555.f_7 == 0)
						{
							*(uParam0[0 /*3*/]) = { *uParam1 };
							uParam0->f_16[0] = uParam1->f_3;
							return 1;
						}
						else
						{
							if (uParam1->f_21)
							{
								*(uParam0[0 /*3*/]) = { uParam1->f_18 };
							}
							else
							{
								*(uParam0[0 /*3*/]) = { Global_2667225.f_2466 };
							}
							if (uParam1->f_5 && __LIB_1__::func_410(Global_2667225.f_489))
							{
								if (!Global_2667225.f_2491.f_5)
								{
									Global_2667225.f_2491.f_5 = 1;
								}
								else
								{
									func_1380(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
								}
							}
							else
							{
								func_1380(uParam0[0 /*3*/], 0, 0, 1, 0, uParam1, uParam2);
							}
							uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
							return 1;
						}
					}
					break;
				case 1:
					func_1434(uParam1, uParam2);
					break;
				case 2:
					return 0;
					break;
				case 3:
					return 0;
					break;
			}
		}
		else if (PED::SPAWNPOINTS_IS_SEARCH_ACTIVE())
		{
			if (!PED::SPAWNPOINTS_IS_SEARCH_FAILED())
			{
				if (PED::SPAWNPOINTS_IS_SEARCH_COMPLETE())
				{
					func_1434(uParam1, uParam2);
					Global_2667225.f_2491.f_1 = PED::SPAWNPOINTS_GET_NUM_SEARCH_RESULTS();
				}
				else
				{
					return 0;
				}
			}
			else
			{
				PED::SPAWNPOINTS_CANCEL_SEARCH();
				func_1434(uParam1, uParam2);
				if (!Global_2667225.f_2491.f_2)
				{
					Global_2667225.f_2491.f_5 = 1;
					return 1;
				}
			}
		}
		else
		{
			return 0;
		}
	}
	if (uParam1->f_5)
	{
		func_1431(Global_2667225.f_555, &(Global_2667225.f_2491.f_57), &(Global_2667225.f_2491.f_90));
	}
	if (uParam2->f_7 && !Global_2667225.f_2491.f_4)
	{
		Global_2667225.f_2491.f_4 = 1;
		func_1396(*uParam1, uParam1->f_3, uParam1, uParam2, 1, -1);
	}
	iVar4 = 0;
	if (uParam1->f_5)
	{
		iVar5 = 64;
	}
	else
	{
		iVar5 = 32;
	}
	if (Global_2667225.f_2491.f_1 > 0 || Global_2667225.f_2491 > 0)
	{
		if (uParam1->f_5 || PED::SPAWNPOINTS_IS_SEARCH_ACTIVE())
		{
			iVar2 = 0;
			while (iVar2 < Global_2667225.f_2491.f_1)
			{
				if (iVar4 < iVar5)
				{
					if (iVar2 <= Global_2667225.f_2491.f_3)
					{
						iVar2 = Global_2667225.f_2491.f_3 + 1;
					}
					if (iVar2 > (Global_2667225.f_2491.f_1 - 1))
					{
						iVar2 = (Global_2667225.f_2491.f_1 - 1);
					}
					if (iVar2 < 0)
					{
						iVar2 = 0;
					}
					if (uParam1->f_5 && !bParam3)
					{
						NETWORK::NETWORK_GET_RESPAWN_RESULT(iVar2, &Var0, &fVar1);
						fVar1 = (fVar1 * 57.29578f);
					}
					else
					{
						PED::SPAWNPOINTS_GET_SEARCH_RESULT(iVar2, &Var0, &(Var0.f_1), &(Var0.f_2));
					}
					if (uParam1->f_5 && !bParam3)
					{
						iVar3 = NETWORK::NETWORK_GET_RESPAWN_RESULT_FLAGS(iVar2);
					}
					else
					{
						PED::SPAWNPOINTS_GET_SEARCH_RESULT_FLAGS(iVar2, &iVar3);
					}
					func_1396(Var0, fVar1, uParam1, uParam2, 0, iVar3);
					iVar4++;
					Global_2667225.f_2491.f_3 = iVar2;
				}
				else
				{
					return 0;
				}
				iVar2++;
			}
		}
		else
		{
			iVar2 = Global_2667225.f_2491.f_1;
		}
		if (Global_2667225.f_2491.f_1 == iVar2)
		{
			if (uParam1->f_5 && Global_2667225.f_2889)
			{
				__LIB_2__::func_736(&(Global_2667225.f_2491.f_6[0 /*10*/]), &(Global_2667225.f_2491.f_6[1 /*10*/]), &(Global_2667225.f_2491.f_6[2 /*10*/]));
			}
			if (uParam1->f_5 && __LIB_1__::func_410(Global_2667225.f_489))
			{
				if (Global_2667225.f_2491.f_2)
				{
					__LIB_1__::func_409(uParam0, &(Global_2667225.f_2491.f_6));
					__LIB_1__::func_414(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2667225.f_2466 };
					func_1380(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
					uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
					__LIB_1__::func_414(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else if (Global_2667225.f_2491.f_2)
			{
				__LIB_1__::func_409(uParam0, &(Global_2667225.f_2491.f_6));
				__LIB_1__::func_414(*(uParam0[0 /*3*/]));
				return 1;
			}
			else if (uParam1->f_5)
			{
				iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2667225.f_2491.f_1);
				NETWORK::NETWORK_GET_RESPAWN_RESULT(iVar2, uParam0[0 /*3*/], &(uParam0->f_16[0]));
				if (!__LIB_2__::func_664(uParam0[0 /*3*/], 0))
				{
					uParam0->f_16[0] = (uParam0->f_16[0] * 57.29578f);
					__LIB_1__::func_414(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2667225.f_2466 };
					func_1380(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
					uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
					__LIB_1__::func_414(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else
			{
				*(uParam0[0 /*3*/]) = { Global_2667225.f_2466 };
				func_1380(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
				uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				__LIB_1__::func_414(*(uParam0[0 /*3*/]));
				return 1;
			}
		}
	}
	else
	{
		*(uParam0[0 /*3*/]) = { Global_2667225.f_2466 };
		if (uParam1->f_5 && __LIB_1__::func_410(Global_2667225.f_489))
		{
			if (!Global_2667225.f_2491.f_5)
			{
				Global_2667225.f_2491.f_5 = 1;
			}
			else
			{
				func_1380(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
			}
		}
		else
		{
			if (uParam1->f_15)
			{
				bVar6 = false;
			}
			else
			{
				bVar6 = true;
			}
			func_1380(uParam0[0 /*3*/], 0, bVar6, 0, 0, uParam1, uParam2);
		}
		uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
		__LIB_1__::func_414(*(uParam0[0 /*3*/]));
		return 1;
	}
	return 0;
}

void func_1396(struct<3> Param0, float fParam1, var uParam2, var uParam3, bool bParam4, int iParam5)//Position - 0xAC8D5
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	struct<3> Var12;
	bool bVar13;
	int iVar14;
	struct<3> Var15;
	struct<3> Var16;
	float fVar17;
	int iVar18;
	struct<10> Var19;
	bool bVar20;
	bool bVar21;
	iVar10 = 0;
	iVar8 = 0;
	bVar9 = false;
	if (uParam2->f_5)
	{
		if (Global_2667225.f_489 == 1)
		{
			if (MISC::ABSF((Global_2667225.f_512.f_2 - Param0.f_2)) < 25f)
			{
				iVar8++;
			}
		}
		else
		{
			iVar8++;
		}
	}
	else
	{
		iVar8++;
	}
	if (uParam2->f_5)
	{
		if (__LIB_19__::func_367(PLAYER::PLAYER_ID()))
		{
			if (iParam5 == -1)
			{
				bVar9 = true;
			}
			else if (!iParam5 & 1 == 0)
			{
				bVar9 = true;
			}
		}
		else if (iParam5 == -1)
		{
			iVar8 += 2;
		}
		else if (!iParam5 & 1 == 0)
		{
			iVar8 += 2;
		}
	}
	else
	{
		iVar8 += 2;
	}
	if (uParam2->f_5 && uParam2->f_6)
	{
		if (!__LIB_3__::func_202(Param0, 1084227584, 1123024896, 0))
		{
			iVar8 += 4;
		}
	}
	else
	{
		iVar8 += 4;
	}
	if (uParam2->f_5)
	{
		if (!PED::IS_ANY_HOSTILE_PED_NEAR_POINT(PLAYER::PLAYER_PED_ID(), Param0, 65f))
		{
			iVar8 += 8;
			iVar8 += 16;
		}
		else if (!PED::IS_ANY_HOSTILE_PED_NEAR_POINT(PLAYER::PLAYER_PED_ID(), Param0, 20f))
		{
			iVar8 += 8;
		}
	}
	else
	{
		iVar8 += 8;
		iVar8 += 16;
	}
	if (uParam2->f_5)
	{
		if (!__LIB_35__::func_860(Param0, uParam3->f_5, 1, 1, 1, 1, 1, 1, 0))
		{
			iVar8 += 32;
		}
	}
	else
	{
		iVar8 += 32;
	}
	bVar13 = true;
	iVar11 = 0;
	while (iVar11 < 2)
	{
		if (SYSTEM::VMAG(uParam3->f_13[iVar11 /*3*/]) > 0f)
		{
			if (!SYSTEM::VDIST(Param0, uParam3->f_13[iVar11 /*3*/]) > uParam3->f_20[iVar11])
			{
				bVar13 = false;
			}
		}
		iVar11++;
	}
	if (bVar13)
	{
		if ((SYSTEM::VMAG(uParam3->f_23) > 0f && SYSTEM::VMAG(uParam3->f_26) > 0f) && uParam3->f_29 > 0f)
		{
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, uParam3->f_23, uParam3->f_26, uParam3->f_29, false, true))
			{
				bVar13 = false;
			}
		}
	}
	if (bVar13)
	{
		iVar8 += 256;
	}
	if (uParam2->f_5)
	{
		if (func_1425(Param0, fParam1, uParam2->f_15, __LIB_1__::func_430(1), uParam2->f_16, 0, 1123024896, 1101004800, 1101004800, 1084227584, 1092616192, 0, 0, 0))
		{
			iVar8 += 64;
			iVar8 += 128;
		}
		else
		{
			iVar10 = Global_2667225.f_3;
		}
	}
	else if (!__LIB_3__::func_401(Param0, 25f, PLAYER::PLAYER_ID(), 1, 1))
	{
		if (uParam2->f_15)
		{
			fVar1 = 3.5f;
		}
		else
		{
			fVar1 = 1f;
		}
		if (!__LIB_2__::func_768(Param0, fVar1, 1, 1, 120f, 0, -1, 0f, 1))
		{
			iVar8 += 128;
			iVar8 += 64;
		}
		else if (!__LIB_2__::func_768(Param0, fVar1, 1, 1, 60f, 0, -1, 0f, 1))
		{
			iVar8 += 64;
		}
	}
	if (uParam2->f_5)
	{
		if (!Global_2667225.f_701)
		{
			Var12 = { Global_2667225.f_512 };
			if (Global_2667225.f_489 == 26)
			{
				Var12 = { Global_2667225.f_555.f_18 };
			}
			if (!__LIB_0__::func_822(Param0, 0.5f))
			{
				if (func_171(Var12))
				{
					if (!func_120(&Param0, 0, 0, 0, 1) && !__LIB_2__::func_784(&Param0, 0))
					{
						iVar8 += 512;
					}
				}
				else if (!__LIB_2__::func_784(&Param0, 0))
				{
					iVar8 += 512;
				}
			}
		}
		else
		{
			iVar8 += 512;
		}
	}
	else if (!__LIB_1__::func_428(Param0, 2.5f, 3))
	{
		iVar8 += 512;
	}
	if (uParam2->f_5)
	{
		if (!(__LIB_1__::func_456(PLAYER::PLAYER_ID()) && __LIB_1__::func_872(PLAYER::PLAYER_ID())))
		{
			if (!__LIB_2__::func_668(&Param0, &(Global_2667225.f_2491.f_90), 0, 1065353216))
			{
				iVar8 += 1024;
			}
		}
		else
		{
			iVar8 += 1024;
		}
	}
	else
	{
		iVar8 += 1024;
	}
	if (uParam2->f_5)
	{
		if (!__LIB_1__::func_872(PLAYER::PLAYER_ID()))
		{
			if (!__LIB_1__::func_427(Param0, &(Global_2667225.f_2491.f_57), &(Global_2667225.f_2491.f_90), 1073741824))
			{
				iVar8 += 2048;
			}
		}
		else
		{
			iVar8 += 2048;
		}
	}
	else
	{
		iVar8 += 2048;
	}
	if (__LIB_2__::func_738(Param0))
	{
		if (uParam2->f_5)
		{
			if (__LIB_1__::func_410(Global_2667225.f_489))
			{
				if (__LIB_1__::func_560(Param0, 0.01f))
				{
					iVar8 += 4096;
				}
			}
			else
			{
				iVar8 += 4096;
			}
		}
		else
		{
			iVar8 += 4096;
		}
	}
	if (uParam2->f_5)
	{
		if (__LIB_1__::func_426(Param0))
		{
			iVar8 += 8192;
		}
	}
	else
	{
		iVar8 += 8192;
	}
	if (!Global_2667225.f_45.f_55)
	{
		iVar8 += 16384;
	}
	else if (uParam2->f_5)
	{
		if (!iParam5 & 1 == 0)
		{
			if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Param0)))
			{
				iVar8 += 16384;
			}
		}
	}
	else if (!iParam5 & 2 == 0)
	{
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Param0)))
		{
			iVar8 += 16384;
		}
	}
	if (uParam2->f_5)
	{
		if (!Global_2667225.f_701)
		{
			if (!__LIB_2__::func_766(&Param0, 0, 0))
			{
				iVar8 = (iVar8 + 32768);
			}
		}
		else
		{
			iVar8 = (iVar8 + 32768);
		}
	}
	else
	{
		iVar8 = (iVar8 + 32768);
	}
	if (!__LIB_2__::func_664(&Param0, 0))
	{
		iVar8 = (iVar8 + 65536);
	}
	else
	{
		iVar14 = __LIB_1__::func_559(Param0, 1008981770);
		if (iVar14 > -1)
		{
			__LIB_2__::func_667(Param0, &Var15, &Var16, &fVar17);
			if (!__LIB_2__::func_975(&(Global_2667225.f_45[iVar14 /*12*/]), Var15, Var16, fVar17))
			{
				iVar8 = -1;
			}
		}
		else
		{
			iVar8 = -1;
		}
	}
	if (__LIB_2__::func_990(Param0, 1056964608))
	{
		iVar8 = -1;
	}
	if (uParam3->f_33)
	{
		if (PED::IS_ANY_PED_NEAR_POINT(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), 0.3f))
		{
			iVar8 = -1;
		}
	}
	if (uParam3->f_34)
	{
		if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), 1f))
		{
			iVar8 = -1;
		}
	}
	if (uParam2->f_5)
	{
	}
	else if (__LIB_1__::func_423(Param0, 1, 0, uParam2->f_15, 1060320051, 1086324736, 1065353216, 1088421888))
	{
		iVar8 = 0;
	}
	Var19.f_2 = 1176256410;
	bVar20 = false;
	bVar21 = false;
	if (Global_2667225.f_2889 && uParam2->f_5)
	{
		if (iVar8 > 0)
		{
			if (bParam4)
			{
				uParam3->f_4 = 0;
				bVar4 = false;
			}
			else
			{
				bVar4 = true;
			}
			if (uParam2->f_21)
			{
				fVar0 = func_1403(Param0, uParam2->f_18, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
			}
			else
			{
				fVar0 = func_1403(Param0, Global_2667225.f_2466, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
			}
			if (bVar9)
			{
				fVar0 = (fVar0 * 3f);
			}
			if (__LIB_1__::func_410(Global_2667225.f_489) && iVar8 < 4096)
			{
				Var19.f_2 = __LIB_3__::func_256(Param0);
			}
			fVar7 = func_1401(Param0, 1, 0, 0, 0, 0);
			Var19.f_4 = { Param0 };
			Var19.f_7 = fParam1;
			Var19.f_0 = iVar8;
			Var19.f_1 = fVar0;
			Var19.f_9 = fVar7;
			__LIB_2__::func_665(Var19);
			Global_2667225.f_2491.f_2 = 1;
		}
	}
	else
	{
		iVar18 = 0;
		while (iVar18 < 5)
		{
			if (iVar8 >= Global_2667225.f_2491.f_6[iVar18 /*10*/])
			{
				if (uParam2->f_5)
				{
					if (!bVar20)
					{
						if (bParam4)
						{
							uParam3->f_4 = 0;
							bVar4 = false;
						}
						else
						{
							bVar4 = true;
						}
						if (uParam2->f_21)
						{
							fVar0 = func_1403(Param0, uParam2->f_18, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
						}
						else
						{
							fVar0 = func_1403(Param0, Global_2667225.f_2466, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
						}
						if (bVar9)
						{
							fVar0 = (fVar0 * 3f);
						}
						bVar20 = true;
					}
					if ((__LIB_1__::func_410(Global_2667225.f_489) && iVar8 == Global_2667225.f_2491.f_6[iVar18 /*10*/]) && iVar8 < 4096)
					{
						if (!bVar21)
						{
							fVar2 = __LIB_3__::func_256(Param0);
							bVar21 = true;
						}
						if (fVar2 < Global_2667225.f_2491.f_6[iVar18 /*10*/].f_2)
						{
							Var19.f_4 = { Param0 };
							Var19.f_7 = fParam1;
							Var19.f_0 = iVar8;
							Var19.f_1 = fVar0;
							Var19.f_2 = fVar2;
							func_1399(Var19, iVar18);
							Global_2667225.f_2491.f_2 = 1;
							return;
						}
					}
					else if (iVar8 > Global_2667225.f_2491.f_6[iVar18 /*10*/] || (iVar8 == Global_2667225.f_2491.f_6[iVar18 /*10*/] && fVar0 > Global_2667225.f_2491.f_6[iVar18 /*10*/].f_1))
					{
						Var19.f_4 = { Param0 };
						Var19.f_7 = fParam1;
						Var19.f_0 = iVar8;
						Var19.f_1 = fVar0;
						func_1399(Var19, iVar18);
						Global_2667225.f_2491.f_2 = 1;
						return;
					}
				}
				else
				{
					if (!bVar20)
					{
						if (uParam2->f_15)
						{
							fVar1 = 3.5f;
						}
						else
						{
							fVar1 = 1f;
						}
						fVar5 = __LIB_3__::func_201(Param0, fVar1, 1, 1, 0, -1, 1);
						fVar6 = func_1401(Param0, 1, 1, 1, 1, 0);
						if (fVar5 > 15f && fVar6 > 5f)
						{
							fVar3 = __LIB_1__::func_420(fVar5, 0f, 80f, 160f, 1f, 1.2f);
						}
						else
						{
							fVar3 = __LIB_1__::func_420(fVar6, 0f, 80f, 160f, 0f, 0.2f);
						}
						bVar20 = true;
					}
					if (iVar8 > Global_2667225.f_2491.f_6[iVar18 /*10*/] || (iVar8 == Global_2667225.f_2491.f_6[iVar18 /*10*/] && fVar3 > Global_2667225.f_2491.f_6[iVar18 /*10*/].f_3))
					{
						Var19.f_4 = { Param0 };
						Var19.f_7 = fParam1;
						Var19.f_0 = iVar8;
						Var19.f_3 = fVar3;
						func_1399(Var19, iVar18);
						Global_2667225.f_2491.f_2 = 1;
						return;
					}
				}
			}
			iVar18++;
		}
	}
}

void func_1399(struct<10> Param0, int iParam1)//Position - 0xAD4C8
{
	struct<10> Var0;
	Var0.f_2 = 1176256410;
	Var0 = { Global_2667225.f_2491.f_6[iParam1 /*10*/] };
	Global_2667225.f_2491.f_6[iParam1 /*10*/] = { Param0 };
	if (iParam1 < 4)
	{
		func_1399(Var0, iParam1 + 1);
	}
}

float func_1401(struct<3> Param0, bool bParam1, bool bParam2, int iParam3, bool bParam4, int iParam5)//Position - 0xAD60E
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	struct<3> Var5;
	struct<3> Var6;
	bool bVar7;
	fVar3 = 999999.9f;
	bVar4 = false;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar7 = iVar0;
		if (__LIB_1__::func_693(bVar7, 1, 1) || (iParam5 == 1 && __LIB_1__::func_693(bVar7, 0, 0)))
		{
			if (!bVar7 == PLAYER::PLAYER_ID() || iParam3 == 1)
			{
				bVar4 = false;
				if (bParam1)
				{
					if (func_83(bVar7))
					{
						bVar4 = true;
					}
				}
				if (bParam2)
				{
					if (PLAYER::GET_PLAYER_TEAM(bVar7) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
					{
						if (!PLAYER::GET_PLAYER_TEAM(bVar7) == -1 || !__LIB_4__::func_934(PLAYER::PLAYER_ID(), 1))
						{
							bVar4 = true;
						}
					}
				}
				if (bVar4)
				{
					if (NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), bVar7) || !bParam4)
					{
						if (__LIB_1__::func_908(bVar7))
						{
							Var5 = { __LIB_1__::func_694(bVar7) };
							if (!bVar7 == PLAYER::PLAYER_ID())
							{
								Var6 = { NETWORK::NETWORK_GET_LAST_ENTITY_POS_RECEIVED_OVER_NETWORK(PLAYER::GET_PLAYER_PED(bVar7)) };
							}
							else
							{
								Var6 = { Var5 };
							}
							if (!bParam4)
							{
								if (Var5.f_2 < -100f)
								{
									Var5.f_2 = Param0.f_2;
								}
								if (Var6.f_2 < -100f)
								{
									Var6.f_2 = Param0.f_2;
								}
							}
							fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Var5, true);
							fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Var6, true);
							if (fVar1 < fVar3)
							{
								fVar3 = fVar1;
							}
							if (fVar2 < fVar3)
							{
								fVar3 = fVar2;
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return fVar3;
}

float func_1403(struct<3> Param0, struct<3> Param1, bool bParam2, bool bParam3, bool bParam4, int iParam5, var uParam6)//Position - 0xAD789
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	fVar1 = 1f;
	if (iParam5 > 0)
	{
		fVar1 = (SYSTEM::TO_FLOAT(iParam5) / SYSTEM::TO_FLOAT(8));
	}
	if (bParam2)
	{
		fVar0 = __LIB_1__::func_420(SYSTEM::VDIST(Param0, Param1), 0f, 0f, 200f, 1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.95f));
	}
	*uParam6 = 10000000f;
	fVar4 = func_1401(Param0, 1, 0, 0, 1, 0);
	fVar0 = __LIB_1__::func_420(fVar4, 0f, __LIB_3__::func_403(), __LIB_3__::func_402(), 0f, 0.3f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam6)
	{
		fVar4 = fVar4;
	}
	fVar4 = __LIB_2__::func_737(Param0);
	fVar0 = __LIB_1__::func_420(fVar4, 0f, 0f, 60f, 0.5f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam6)
	{
		fVar4 = fVar4;
	}
	fVar5 = 100f;
	if (PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && !__LIB_4__::func_934(PLAYER::PLAYER_ID(), 1))
	{
		fVar5 = 1f;
	}
	fVar4 = __LIB_3__::func_257(Param0, PLAYER::PLAYER_ID(), 0);
	fVar0 = __LIB_1__::func_420(fVar4, 0f, 0f, fVar5, 0f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam6)
	{
		fVar4 = fVar4;
	}
	if (bParam3)
	{
		if (__LIB_1__::func_421(Param0, &fVar2, &fVar3))
		{
			if (fVar2 < 10f)
			{
				fVar2 = 10f;
			}
			if (fVar3 < 0.5f)
			{
				fVar3 = 0.5f;
			}
			fVar0 = __LIB_1__::func_420(fVar2, 0f, 0f, 200f, 1f, 0.1f);
			fVar0 = (fVar0 + __LIB_1__::func_420(fVar3, 0f, 0f, 6f, 1f, 0.5f));
			fVar0 = (fVar0 * 0.5f);
			fVar1 = (fVar1 * (fVar0 * 0.85f));
		}
	}
	if (bParam4)
	{
		fVar0 = __LIB_1__::func_420(SYSTEM::VDIST(Global_2667225.f_512, Param0), 0f, 100f, 200f, 0.1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.9f));
	}
	return fVar1;
}

int func_1425(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, float fParam7, float fParam8, float fParam9, float fParam10, float fParam11, bool bParam12, bool bParam13)//Position - 0xAE4C9
{
	Global_2667225.f_3 = 0;
	if (!__LIB_3__::func_401(Param0, 0.5f, PLAYER::PLAYER_ID(), 0, 0))
	{
		Global_2667225.f_3++;
		if (bParam3)
		{
			if (__LIB_41__::func_947(Param0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam4, iParam5, fParam6, bParam13, -1, 1, 0, 0, fParam11, bParam12, 0))
			{
				Global_2667225.f_3 = (Global_2667225.f_3 + Global_2667225.f_2);
				if (!__LIB_30__::func_500(Param0, fParam10))
				{
					Global_2667225.f_3++;
					if (!__LIB_2__::func_990(Param0, 1056964608))
					{
						Global_2667225.f_3++;
						return 1;
					}
				}
			}
			else
			{
				Global_2667225.f_3 = (Global_2667225.f_3 + Global_2667225.f_2);
			}
		}
		else if (!bParam2)
		{
			if (__LIB_41__::func_947(Param0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam4, iParam5, fParam6, bParam13, -1, 1, 0, 0, fParam11, bParam12, 0))
			{
				Global_2667225.f_3 = (Global_2667225.f_3 + Global_2667225.f_2);
				if (!__LIB_30__::func_500(Param0, fParam10))
				{
					Global_2667225.f_3++;
					if (!__LIB_3__::func_163(Param0, fParam1, fParam7, fParam8, 1084227584))
					{
						Global_2667225.f_3++;
						if (!__LIB_2__::func_990(Param0, 1056964608))
						{
							Global_2667225.f_3++;
							return 1;
						}
					}
				}
			}
			else
			{
				Global_2667225.f_3 = (Global_2667225.f_3 + Global_2667225.f_2);
			}
		}
		else if (__LIB_41__::func_947(Param0, 6f, 5f, 5f, 5f, 0, bParam4, iParam5, fParam6, bParam13, -1, 1, 0, 0, fParam11, bParam12, 0))
		{
			Global_2667225.f_3 = (Global_2667225.f_3 + Global_2667225.f_2);
			if (!__LIB_30__::func_500(Param0, fParam10))
			{
				Global_2667225.f_3++;
				if (!__LIB_3__::func_163(Param0, fParam1, fParam7, fParam8, fParam9))
				{
					Global_2667225.f_3++;
					if (!__LIB_2__::func_990(Param0, 1056964608))
					{
						Global_2667225.f_3++;
						return 1;
					}
				}
			}
		}
		else
		{
			Global_2667225.f_3 = (Global_2667225.f_3 + Global_2667225.f_2);
		}
	}
	return 0;
}

void func_1431(struct<3> Param0, var uParam1, var uParam2)//Position - 0xAE9D8
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	struct<8> Var4;
	struct<3> Var5;
	struct<3> Var6;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		*(uParam1[iVar0 /*4*/]) = { Var3 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		*(uParam2[iVar0 /*10*/]) = { Var4 };
		iVar0++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1573885)
	{
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (!BitTest(Global_2621865[iVar1 /*26*/].f_12, 11))
			{
				if (SYSTEM::VMAG(*(uParam1[iVar0 /*4*/])) == 0f || SYSTEM::VDIST(Global_2621865[iVar1 /*26*/].f_3, Param0) < SYSTEM::VDIST(*(uParam1[iVar0 /*4*/]), Param0))
				{
					Var3 = { Global_2621865[iVar1 /*26*/].f_3 };
					Var3.f_3 = Global_2621865[iVar1 /*26*/].f_6.f_2;
					func_1433(&Var3, uParam1, iVar0);
					iVar0 = *uParam1;
				}
			}
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 19)
	{
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (SYSTEM::VMAG(*(uParam1[iVar0 /*4*/])) == 0f || SYSTEM::VDIST(Global_262145.f_6292[iVar1 /*3*/], Param0) < SYSTEM::VDIST(*(uParam1[iVar0 /*4*/]), Param0))
			{
				Var3 = { Global_262145.f_6292[iVar1 /*3*/] };
				Var3.f_3 = 3f;
				func_1433(&Var3, uParam1, iVar0);
				iVar0 = *uParam1;
			}
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < 19)
	{
		iVar2 = 0;
		while (iVar2 < 6)
		{
			iVar0 = 0;
			while (iVar0 < *uParam1)
			{
				if (SYSTEM::VMAG(*(uParam1[iVar0 /*4*/])) == 0f || SYSTEM::VDIST(Global_262145.f_6350[iVar1 /*19*/][iVar2 /*3*/], Param0) < SYSTEM::VDIST(*(uParam1[iVar0 /*4*/]), Param0))
				{
					Var3 = { Global_262145.f_6350[iVar1 /*19*/][iVar2 /*3*/] };
					Var3.f_3 = 3f;
					func_1433(&Var3, uParam1, iVar0);
					iVar0 = *uParam1;
				}
				iVar0++;
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1573850)
	{
		iVar0 = 0;
		while (iVar0 < *uParam2)
		{
			Var5 = { Global_1573169[iVar1 /*8*/].f_1 + Global_1573169[iVar1 /*8*/].f_4 * Vector(0.5f, 0.5f, 0.5f) };
			Var6 = { *(uParam2[iVar0 /*10*/]) + (uParam2[iVar0 /*10*/])->f_3 * Vector(0.5f, 0.5f, 0.5f) };
			if (SYSTEM::VMAG(*(uParam2[iVar0 /*10*/])) == 0f || SYSTEM::VDIST(Var5, Param0) < SYSTEM::VDIST(Var6, Param0))
			{
				Var4 = { Global_1573169[iVar1 /*8*/].f_1 };
				Var4.f_3 = { Global_1573169[iVar1 /*8*/].f_4 };
				Var4.f_6 = Global_1573169[iVar1 /*8*/].f_7;
				Var4.f_7 = { Global_2621541[iVar1 /*3*/] };
				func_1432(&Var4, uParam2, iVar0);
				iVar0 = *uParam2;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_1432(var uParam0, var uParam1, int iParam2)//Position - 0xAECF8
{
	Global_2674776 = { *(uParam1[iParam2 /*10*/]) };
	*(uParam1[iParam2 /*10*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_1432(&Global_2674776, uParam1, iParam2 + 1);
	}
}

void func_1433(var uParam0, var uParam1, int iParam2)//Position - 0xAED36
{
	Global_2674772 = { *(uParam1[iParam2 /*4*/]) };
	*(uParam1[iParam2 /*4*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_1433(&Global_2674772, uParam1, iParam2 + 1);
	}
}

void func_1434(var uParam0, var uParam1)//Position - 0xAED70
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	if (Global_2667225.f_2262 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2667225.f_2262)
		{
			if (__LIB_2__::func_851(Global_2667225.f_2263[iVar0 /*4*/], uParam0))
			{
				fVar2 = Global_2667225.f_2263[iVar0 /*4*/].f_3;
				if (SYSTEM::VMAG(*uParam1) > 0.01f)
				{
					Var1 = { *uParam1 - Global_2667225.f_2263[iVar0 /*4*/] };
					fVar2 = MISC::GET_HEADING_FROM_VECTOR_2D(Var1.f_0, Var1.f_1);
				}
				func_1396(Global_2667225.f_2263[iVar0 /*4*/], fVar2, uParam0, uParam1, 0, uParam0->f_28);
				Global_2667225.f_2491++;
			}
			iVar0++;
		}
	}
	if (uParam0->f_5 && Global_2667225.f_2889)
	{
		__LIB_2__::func_736(&(Global_2667225.f_2491.f_6[0 /*10*/]), &(Global_2667225.f_2491.f_6[1 /*10*/]), &(Global_2667225.f_2491.f_6[2 /*10*/]));
	}
}

Vector3 func_1449(struct<3> Param0, struct<3> Param1, float fParam2, int iParam3)//Position - 0xAF151
{
	int iVar0;
	struct<3> Var1;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		switch (iParam3)
		{
			case 0:
				Var1 = { __LIB_2__::func_878(Param0, fParam2, 0) };
				break;
			case 1:
				Var1 = { __LIB_2__::func_671(Param0, Param1) };
				break;
			case 2:
				Var1 = { __LIB_2__::func_875(Param0, Param1, fParam2) };
				break;
		}
		if (func_1452(&Var1, 0))
		{
			return Var1;
		}
		iVar0++;
	}
	return Var1;
}

int func_1452(var uParam0, bool bParam1)//Position - 0xAF292
{
	func_1453(uParam0, bParam1);
	if (__LIB_41__::func_947(*uParam0, 6f, 1f, 1f, 5f, 0, 0, 0, 120f, 0, -1, 1, 0f, 0, 0, 0, 0))
	{
		return 1;
	}
	return 0;
}

void func_1453(var uParam0, bool bParam1)//Position - 0xAF2C9
{
	float fVar0;
	if (!bParam1)
	{
		func_1455(uParam0, 1, 1, 1, 1, 1);
	}
	else
	{
		func_1455(uParam0, 1, 1, 1, 1, 0);
	}
	fVar0 = PATHFIND::GET_APPROX_HEIGHT_FOR_POINT(*uParam0, uParam0->f_1);
	fVar0 = (fVar0 + 100f);
	if (uParam0->f_2 < fVar0)
	{
		uParam0->f_2 = fVar0;
	}
	__LIB_2__::func_672(uParam0);
}

void func_1455(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0xAF39F
{
	if (bParam1)
	{
		if (func_171(Global_2667225.f_512))
		{
			if (func_120(uParam0, 1, 0, 0, bParam5))
			{
			}
		}
	}
	if (bParam2)
	{
		if (__LIB_2__::func_766(uParam0, 1, 0))
		{
		}
	}
	if (bParam3)
	{
		if (__LIB_2__::func_784(uParam0, 1))
		{
		}
	}
	if (bParam4)
	{
		__LIB_3__::func_175(uParam0, 7f, PLAYER::PLAYER_ID(), 0);
	}
	__LIB_2__::func_673(uParam0, 1120403456);
}

void func_1460()//Position - 0xAF5E9
{
	if (!Global_2667225.f_701)
	{
		if (func_171(Global_2667225.f_555))
		{
			if (func_120(&(Global_2667225.f_555), 1, 0, 0, 1))
			{
				Global_2667225.f_520.f_7 = 0;
			}
			if (Global_2667225.f_555.f_2 <= 0f)
			{
				if (func_1594(&(Global_2667225.f_555), 1))
				{
					Global_2667225.f_520.f_7 = 0;
				}
			}
		}
		if (__LIB_2__::func_766(&(Global_2667225.f_555), 1, 0))
		{
			Global_2667225.f_520.f_7 = 0;
		}
		if (__LIB_2__::func_784(&(Global_2667225.f_555), 1))
		{
			Global_2667225.f_520.f_7 = 0;
		}
	}
	if (__LIB_3__::func_406())
	{
		Global_2667225.f_587 = 4;
	}
	else
	{
		Global_2667225.f_2673 = 1;
		Global_2667225.f_587 = 6;
	}
}

Vector3 func_1528(bool bParam0)//Position - 0xB4880
{
	struct<3> Var0;
	if (HUD::DOES_BLIP_EXIST(Global_2678393[bParam0]))
	{
		Var0 = { __LIB_1__::func_722(Global_2678393[bParam0]) };
	}
	else if (HUD::DOES_BLIP_EXIST(Global_2678393.f_33[bParam0]) && !bParam0 == Global_2703735)
	{
		Var0 = { __LIB_1__::func_722(Global_2678393.f_33[bParam0]) };
	}
	if (SYSTEM::VMAG(Var0) > 0f)
	{
		return Var0;
	}
	return func_1529(bParam0);
}

Vector3 func_1529(bool bParam0)//Position - 0xB48F4
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	if (Global_2676198)
	{
		if (__LIB_3__::func_143(bParam0))
		{
			Var1 = { __LIB_3__::func_142(bParam0) };
			if (SYSTEM::VMAG(Var1) > 0f)
			{
				return Var1;
			}
		}
		if (Global_2689235[bParam0 /*453*/].f_71.f_11)
		{
			if (SYSTEM::VMAG(Global_2689235[bParam0 /*453*/].f_71.f_12) > 0f)
			{
				return Global_2689235[bParam0 /*453*/].f_71.f_12;
			}
		}
	}
	if (Global_1853348[bParam0 /*834*/].f_267.f_32 > 0)
	{
		Var1 = { __LIB_2__::func_683(__LIB_2__::func_684(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32)) };
		if (SYSTEM::VMAG(Var1) > 0f)
		{
			return Var1;
		}
	}
	else
	{
		func_1568(__LIB_1__::func_694(bParam0), &iVar0);
		if (iVar0 > 0)
		{
			Var1 = { __LIB_2__::func_683(__LIB_2__::func_684(iVar0)) };
			if (SYSTEM::VMAG(Var1) > 0f)
			{
				return Var1;
			}
		}
	}
	if (__LIB_2__::func_742(bParam0))
	{
		Var1 = { __LIB_35__::func_784(bParam0) };
		if (SYSTEM::VMAG(Var1) > 0f)
		{
			return Var1;
		}
	}
	if (__LIB_3__::func_180(bParam0))
	{
		iVar2 = __LIB_3__::func_141(bParam0);
		if (iVar2 > -1)
		{
			Var1 = { Global_1946250.f_533[iVar2 /*3*/] };
			if (SYSTEM::VMAG(Var1) > 0f)
			{
				return Var1;
			}
		}
	}
	if (!Global_2676198)
	{
		if (__LIB_3__::func_143(bParam0))
		{
			Var1 = { __LIB_3__::func_142(bParam0) };
			if (SYSTEM::VMAG(Var1) > 0f)
			{
				return Var1;
			}
		}
		if (Global_2689235[bParam0 /*453*/].f_71.f_11)
		{
			if (SYSTEM::VMAG(Global_2689235[bParam0 /*453*/].f_71.f_12) > 0f)
			{
				return Global_2689235[bParam0 /*453*/].f_71.f_12;
			}
		}
	}
	return __LIB_1__::func_694(bParam0);
}

void func_1568(struct<3> Param0, var uParam1)//Position - 0xB58AA
{
	int iVar0;
	int iVar1;
	iVar0 = 1;
	iVar1 = 7;
	while (iVar0 <= iVar1)
	{
		if (func_1569(Param0, iVar0, 0))
		{
			*uParam1 = iVar0;
			return;
		}
		iVar0++;
	}
	iVar0 = 34;
	iVar1 = 43;
	while (iVar0 <= iVar1)
	{
		if (func_1569(Param0, iVar0, 0))
		{
			*uParam1 = iVar0;
			return;
		}
		iVar0++;
	}
	iVar0 = 61;
	iVar1 = 65;
	while (iVar0 <= iVar1)
	{
		if (func_1569(Param0, iVar0, 0))
		{
			*uParam1 = iVar0;
			return;
		}
		iVar0++;
	}
	iVar0 = 8;
	if (func_1569(Param0, iVar0, 0))
	{
		if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32 > 0)
		{
			*uParam1 = Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32;
		}
		else if (Global_2666811.f_1 > 0)
		{
			*uParam1 = Global_2666811.f_1;
		}
		else
		{
			*uParam1 = iVar0;
		}
		return;
	}
	iVar0 = 17;
	if (func_1569(Param0, iVar0, 0))
	{
		if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32 > 0)
		{
			*uParam1 = Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32;
		}
		else if (Global_2666811.f_1 > 0)
		{
			*uParam1 = Global_2666811.f_1;
		}
		else
		{
			*uParam1 = iVar0;
		}
		return;
	}
}

int func_1569(struct<3> Param0, int iParam1, float fParam2)//Position - 0xB59EE
{
	int iVar0;
	struct<3> Var1[3];
	struct<3> Var2[3];
	int iVar3;
	if (iParam1 != 999)
	{
		iVar3 = 0;
		while (iVar3 < 3)
		{
			if (Global_1312193[iParam1 /*1951*/].f_146.f_57[iVar3 /*8*/].f_2 > Global_1312193[iParam1 /*1951*/].f_146.f_57[iVar3 /*8*/].f_3.f_2)
			{
				Var1[iVar3 /*3*/] = { Global_1312193[iParam1 /*1951*/].f_146.f_57[iVar3 /*8*/] };
				Var2[iVar3 /*3*/] = { Global_1312193[iParam1 /*1951*/].f_146.f_57[iVar3 /*8*/].f_3 };
			}
			else
			{
				Var1[iVar3 /*3*/] = { Global_1312193[iParam1 /*1951*/].f_146.f_57[iVar3 /*8*/].f_3 };
				Var2[iVar3 /*3*/] = { Global_1312193[iParam1 /*1951*/].f_146.f_57[iVar3 /*8*/] };
			}
			Var1[iVar3 /*3*/].f_2 = (Var1[iVar3 /*3*/].f_2 + fParam2);
			Var2[iVar3 /*3*/].f_2 = (Var2[iVar3 /*3*/].f_2 - fParam2);
			iVar3++;
		}
		if (((Global_1312193[iParam1 /*1951*/].f_146.f_57[0 /*8*/].f_6 != 0f && OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var2[0 /*3*/], Var1[0 /*3*/], Global_1312193[iParam1 /*1951*/].f_146.f_57[0 /*8*/].f_6, false, true)) || (Global_1312193[iParam1 /*1951*/].f_146.f_57[1 /*8*/].f_6 != 0f && OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var2[1 /*3*/], Var1[1 /*3*/], Global_1312193[iParam1 /*1951*/].f_146.f_57[1 /*8*/].f_6, false, true))) || (Global_1312193[iParam1 /*1951*/].f_146.f_57[2 /*8*/].f_6 != 0f && OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var2[2 /*3*/], Var1[2 /*3*/], Global_1312193[iParam1 /*1951*/].f_146.f_57[2 /*8*/].f_6, false, true)))
		{
			return 1;
		}
	}
	else
	{
		iVar0 = 1;
		while (iVar0 <= 7)
		{
			if (func_1569(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 34;
		while (iVar0 <= 43)
		{
			if (func_1569(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 61;
		while (iVar0 <= 65)
		{
			if (func_1569(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 73;
		while (iVar0 <= 76)
		{
			if (func_1569(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 77;
		while (iVar0 <= 82)
		{
			if (func_1569(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 83;
		while (iVar0 <= 85)
		{
			if (func_1569(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 87;
		while (iVar0 <= 90)
		{
			if (func_1569(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 91;
		while (iVar0 <= 102)
		{
			if (func_1569(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 103;
		while (iVar0 <= 113)
		{
			if (func_1569(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		if (func_1569(Param0, 8, fParam2))
		{
			return 1;
		}
		if (func_1569(Param0, 17, fParam2))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_1584(struct<3> Param0, float fParam1)//Position - 0xB87D7
{
	int iVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	int iVar5;
	bool bVar6;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar6 = iVar0;
		if (func_83(bVar6))
		{
			Var2 = { __LIB_1__::func_694(bVar6) };
			if (SYSTEM::VDIST(Param0, Var2) < fParam1 && !ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(bVar6), false))
			{
				fVar1 = ENTITY::GET_ENTITY_HEADING(PLAYER::GET_PLAYER_PED(bVar6));
				Var3 = { 0f, 1f, 0f };
				__LIB_0__::func_817(&Var3, 0f, 0f, fVar1);
				Var4 = { Var4 + Var3 };
				iVar5++;
			}
		}
		iVar0++;
	}
	Var4 = { Var4 / FtoV(SYSTEM::TO_FLOAT(iVar5)) };
	return Var4;
}

Vector3 func_1585(struct<3> Param0, float fParam1)//Position - 0xB8870
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	int iVar3;
	bool bVar4;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar4 = iVar0;
		if (func_83(bVar4))
		{
			Var1 = { __LIB_1__::func_694(bVar4) };
			if (SYSTEM::VDIST(Param0, Var1) < fParam1)
			{
				Var2 = { Var2 + Var1 };
				iVar3++;
			}
		}
		iVar0++;
	}
	Var2 = { Var2 / FtoV(SYSTEM::TO_FLOAT(iVar3)) };
	return Var2;
}

Vector3 func_1586(struct<3> Param0, struct<3> Param1, struct<3> Param2, float fParam3, int iParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, var uParam9)//Position - 0xB88DB
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var4;
	bool bVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	iVar1 = 999;
	fVar6 = 0f;
	Var4 = { Param0 };
	if (bParam8)
	{
		iVar8 = 0;
	}
	else
	{
		iVar8 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 200)
	{
		PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(Param0, iVar0, &Var3, iVar8, 0f, 0f);
		if (bParam7)
		{
			switch (iParam4)
			{
				case 0:
					if (Var3.f_2 < (Param1.f_2 - fParam3))
					{
						Var3.f_2 = Param1.f_2;
					}
					break;
				case 1:
				case 2:
					if (Var3.f_2 < Param1.f_2 && Var3.f_2 < Param2.f_2)
					{
						Var3.f_2 = ((Param1.f_2 + Param2.f_2) * 0.5f);
					}
					break;
				}
		}
		switch (iParam4)
		{
			case 0:
				bVar5 = __LIB_0__::func_828(Var3, Param1, fParam3, 0, 0);
				break;
			case 1:
				bVar5 = __LIB_1__::func_453(Var3, Param1, Param2, 0, 0);
				break;
			case 2:
				bVar5 = OBJECT::IS_POINT_IN_ANGLED_AREA(Var3, Param1, Param2, fParam3, false, true);
				break;
		}
		if (bParam6)
		{
			if (bVar5)
			{
				if (__LIB_2__::func_766(&Var3, 0, 0))
				{
					bVar5 = false;
				}
			}
		}
		if (bVar5)
		{
			*uParam9 = 1;
			iVar2 = func_82(Var3, fParam5, &fVar7);
			if (iVar2 == 0)
			{
				return Var3;
			}
			else if (iVar2 < iVar1)
			{
				fVar6 = fVar7;
				Var4 = { Var3 };
				iVar1 = iVar2;
			}
			else if (iVar2 == iVar1)
			{
				if (fVar7 > fVar6)
				{
					fVar6 = fVar7;
					Var4 = { Var3 };
				}
			}
		}
		iVar0++;
	}
	return Var4;
}

int func_1594(var uParam0, bool bParam1)//Position - 0xB8E95
{
	int iVar0;
	struct<3> Var1;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_2672169[iVar0 /*17*/].f_9 == 1)
		{
			if (__LIB_1__::func_528(*uParam0, &(Global_2672169[iVar0 /*17*/]), 1008981770, 0, 1) && !__LIB_1__::func_528(*uParam0, &(Global_2672169[iVar0 /*17*/]), 1008981770, 0, 0))
			{
				if (bParam1)
				{
					if (Global_2672169[iVar0 /*17*/].f_12)
					{
						*uParam0 = { Global_2672169[iVar0 /*17*/].f_13 };
					}
					else
					{
						Var1 = { *uParam0 };
						Var1.f_2 = __LIB_2__::func_692(&(Global_2672169[iVar0 /*17*/]));
						__LIB_1__::func_566(&Var1, &(Global_2672169[iVar0 /*17*/]), 1036831949, 0, 0);
						if (func_120(&Var1, 0, 0, 0, 1))
						{
							Var1 = { *uParam0 };
							__LIB_1__::func_566(&Var1, &(Global_2672169[iVar0 /*17*/]), 1036831949, 1, 0);
						}
						*uParam0 = { Var1 };
					}
				}
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

Vector3 func_1596(struct<3> Param0, float fParam1)//Position - 0xB8FC6
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var4;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = iVar0;
		if (func_83(bVar1))
		{
			Var3 = { __LIB_1__::func_694(bVar1) };
			Var3.f_2 = Param0.f_2;
			if (SYSTEM::VDIST(Var3, Param0) <= fParam1)
			{
				Var4 = { Var4 + __LIB_1__::func_694(bVar1) };
				iVar2++;
			}
		}
		iVar0++;
	}
	if (iVar2 > 0)
	{
		Var4 = { Var4 / FtoV(SYSTEM::TO_FLOAT(iVar2)) };
	}
	return Var4;
}

struct<18> func_1604(bool bParam0)//Position - 0xB98B0
{
	struct<18> Var0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	float fVar8;
	Var0 = 5;
	Var0.f_6 = 5;
	Var0.f_12 = 5;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		Var0[iVar1] = -1;
		Var0.f_6[iVar1] = -1f;
		iVar1++;
	}
	if (Global_2667225.f_714 == 1)
	{
		Var0[0] = 0;
		Var0.f_6[0] = 1f;
		return Var0;
	}
	iVar2 = 0;
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		iVar2 = 1;
	}
	fVar8 = 0f;
	if (Global_2667225.f_714.f_507)
	{
		fVar8 = 0.001f;
	}
	iVar1 = 0;
	while (iVar1 < Global_2667225.f_714)
	{
		fVar4 = 1f;
		fVar6 = 0f;
		if (Global_2667225.f_2878 && Global_2667225.f_714.f_503 == iVar1)
		{
			fVar4 = fVar8;
			fVar6 = 0.01f;
		}
		else if (Global_2667225.f_714.f_503 == iVar1 && Global_2667225.f_714.f_504)
		{
			fVar4 = fVar8;
			fVar6 = 0.01f;
		}
		else
		{
			if (!Global_2667225.f_714.f_505)
			{
				if (__LIB_1__::func_423(Global_2667225.f_714.f_1[iVar1 /*5*/], 0, 1, bParam0, Global_2667225.f_714.f_512, Global_2667225.f_714.f_513, Global_2667225.f_714.f_510, Global_2667225.f_714.f_511))
				{
					fVar4 = fVar8;
				}
			}
			if (__LIB_0__::func_822(Global_2667225.f_714.f_1[iVar1 /*5*/], 0.1f))
			{
				fVar4 = fVar8;
			}
			if (__LIB_2__::func_768(Global_2667225.f_714.f_1[iVar1 /*5*/], 1f, 0, 0, 100f, 1, -1, 0, 1))
			{
				fVar4 = (fVar4 * 0.94f);
			}
			if (__LIB_2__::func_768(Global_2667225.f_714.f_1[iVar1 /*5*/], 1f, 0, 0, 50f, 1, -1, 0, 1))
			{
				fVar4 = (fVar4 * 0.94f);
			}
			if (__LIB_2__::func_768(Global_2667225.f_714.f_1[iVar1 /*5*/], 1f, 0, 0, 25f, 1, -1, 0, 1))
			{
				fVar4 = (fVar4 * 0.94f);
			}
			if (!Global_2667225.f_714.f_506)
			{
				fVar5 = __LIB_3__::func_257(Global_2667225.f_714.f_1[iVar1 /*5*/], PLAYER::PLAYER_ID(), 0);
				if (fVar5 < 10000f)
				{
					fVar3 = __LIB_1__::func_420(fVar5, Global_2667225.f_714.f_514, -1f, 100f, fVar8, 1f);
					fVar4 = (fVar4 * (fVar3 * 0.91f));
				}
				fVar5 = func_1401(Global_2667225.f_714.f_1[iVar1 /*5*/], 1, 0, 0, 0, iVar2);
				fVar6 = fVar5;
				fVar3 = __LIB_1__::func_420(fVar5, Global_2667225.f_714.f_515, __LIB_3__::func_403(), __LIB_3__::func_402(), fVar8, 0.3f);
				fVar4 = (fVar4 * (fVar3 * 0.91f));
				fVar5 = func_1401(Global_2667225.f_714.f_1[iVar1 /*5*/], 0, 1, 0, 0, iVar2);
				if (fVar5 < 10000f)
				{
					fVar3 = __LIB_1__::func_420(fVar5, Global_2667225.f_714.f_516, 15f, 150f, fVar8, 0.2f);
					fVar4 = (fVar4 * (fVar3 * 0.92f));
				}
				fVar5 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_2667225.f_714.f_1[iVar1 /*5*/], Global_2667225.f_512, true);
				fVar3 = __LIB_1__::func_420(fVar5, 0f, 0f, Global_2667225.f_714.f_517, fVar8, (40f / Global_2667225.f_714.f_517));
				fVar4 = (fVar4 * (fVar3 * 0.93f));
				if (Global_2667225.f_714.f_508)
				{
					fVar5 = __LIB_2__::func_737(Global_2667225.f_714.f_1[iVar1 /*5*/]);
					fVar3 = __LIB_1__::func_420(fVar5, Global_2667225.f_714.f_515, __LIB_3__::func_403(), __LIB_3__::func_402(), fVar8, 0.3f);
					fVar4 = (fVar4 * (fVar3 * 0.95f));
				}
				if (Global_2667225.f_714.f_509)
				{
					fVar5 = __LIB_2__::func_695(Global_2667225.f_714.f_1[iVar1 /*5*/], &Var0);
					fVar3 = __LIB_1__::func_420(fVar5, 0f, 0f, 65f, 0.8f, 1f);
					fVar4 = (fVar4 * (fVar3 * 1f));
				}
			}
			fVar4 = (fVar4 * Global_2667225.f_714.f_1[iVar1 /*5*/].f_4);
		}
		iVar7 = 0;
		while (iVar7 < 5)
		{
			if (fVar4 > 0f || Global_2667225.f_714.f_507)
			{
				if (fVar4 > Var0.f_6[iVar7])
				{
					func_1605(&Var0, iVar1, fVar4, iVar7, fVar6);
					iVar7 = 5;
				}
				else if (fVar4 == Var0.f_6[iVar7])
				{
					if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) > 0)
					{
						func_1605(&Var0, iVar1, fVar4, iVar7, fVar6);
						iVar7 = 5;
					}
				}
			}
			iVar7++;
		}
		iVar1++;
	}
	return Var0;
}

void func_1605(var uParam0, int iParam1, float fParam2, int iParam3, float fParam4)//Position - 0xB9D13
{
	var uVar0;
	var uVar1;
	var uVar2;
	uVar0 = (*uParam0)[iParam3];
	uVar1 = uParam0->f_6[iParam3];
	uVar2 = uParam0->f_12[iParam3];
	(*uParam0)[iParam3] = iParam1;
	uParam0->f_6[iParam3] = fParam2;
	uParam0->f_12[iParam3] = fParam4;
	if (iParam3 < 4)
	{
		func_1605(uParam0, uVar0, uVar1, iParam3 + 1, uVar2);
	}
}

void func_1607(var uParam0, var uParam1, var uParam2, float fParam3)//Position - 0xB9DC0
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, *uParam0);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		iVar1 = (iVar0 + iVar2);
		if (!iVar1 < *uParam0)
		{
			iVar1 = (iVar1 - *uParam0);
		}
		if (func_1425(*(uParam0[iVar1 /*4*/]), (uParam0[iVar1 /*4*/])->f_3, 0, 1, 0, 0, fParam3, 1101004800, 1101004800, 1084227584, 1092616192, 0, 0, 0))
		{
			*uParam1 = { *(uParam0[iVar1 /*4*/]) };
			*uParam2 = (uParam0[iVar1 /*4*/])->f_3;
			return;
		}
		iVar0++;
	}
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, *uParam0);
	*uParam1 = { *(uParam0[iVar0 /*4*/]) };
	*uParam2 = (uParam0[iVar0 /*4*/])->f_3;
}

void func_1608(var uParam0, var uParam1, float fParam2)//Position - 0xB9E6E
{
	var uVar0;
	uVar0 = 11;
	__LIB_2__::func_696(&uVar0);
	func_1607(&uVar0, uParam0, uParam1, fParam2);
}

void func_1610(var uParam0, var uParam1, float fParam2)//Position - 0xBA012
{
	struct<4> Var0[15];
	Var0[0 /*4*/] = { -1690.928f, -1052.085f, 12.5375f };
	Var0[0 /*4*/].f_3 = 46.44f;
	Var0[1 /*4*/] = { -1212.403f, -952.1625f, 1.6625f };
	Var0[1 /*4*/].f_3 = 117.6f;
	Var0[2 /*4*/] = { -1772.089f, -1141.589f, 12.5375f };
	Var0[2 /*4*/].f_3 = 46.44f;
	Var0[3 /*4*/] = { -116.325f, -441.075f, 35.4125f };
	Var0[3 /*4*/].f_3 = -132.84f;
	Var0[4 /*4*/] = { -1157.281f, 927.675f, 197.5375f };
	Var0[4 /*4*/].f_3 = -143.64f;
	Var0[5 /*4*/] = { -82.85f, -880.5125f, 40.0875f };
	Var0[5 /*4*/].f_3 = -66.24f;
	Var0[6 /*4*/] = { 195.7f, -962.1625f, 29.6f };
	Var0[6 /*4*/].f_3 = 115.28f;
	Var0[7 /*4*/] = { -885.4375f, -787.9f, 15.4375f };
	Var0[7 /*4*/].f_3 = 122.34f;
	Var0[8 /*4*/] = { -829.5f, -922.1375f, 16.0125f };
	Var0[8 /*4*/].f_3 = -125.28f;
	Var0[9 /*4*/] = { -1221.905f, -1571.869f, 3.675f };
	Var0[9 /*4*/].f_3 = -106.92f;
	Var0[10 /*4*/] = { -609.65f, -622.3375f, 34.1875f };
	Var0[10 /*4*/].f_3 = -90f;
	Var0[11 /*4*/] = { -894f, -1322.775f, 4.5125f };
	Var0[11 /*4*/].f_3 = -166.32f;
	Var0[12 /*4*/] = { 386.2375f, -1514.243f, 28.7875f };
	Var0[12 /*4*/].f_3 = 119.16f;
	Var0[13 /*4*/] = { -310.9625f, -1627.762f, 31.325f };
	Var0[13 /*4*/].f_3 = -117.72f;
	Var0[14 /*4*/] = { 171.775f, -677.0125f, 42.6375f };
	Var0[14 /*4*/].f_3 = -54.37f;
	func_1607(&Var0, uParam0, uParam1, fParam2);
}

int func_1614()//Position - 0xBA321
{
	int iVar0;
	if (MISC::GET_INDEX_OF_CURRENT_LEVEL() == 5)
	{
		return 7;
	}
	else
	{
		if (!Global_2667225.f_490 == 0)
		{
			if (!SCRIPT::IS_THREAD_ACTIVE(Global_2667225.f_490.f_1))
			{
				if (Global_2667225.f_490 == 8)
				{
					__LIB_2__::func_892();
				}
				Global_2667225.f_490 = 0;
			}
		}
		if (!Global_2667225.f_490 == 0)
		{
			return Global_2667225.f_490;
		}
		else if (__LIB_2__::func_40(PLAYER::PLAYER_ID(), 0))
		{
			return 6;
		}
		else if (Global_2667225.f_45[0 /*12*/].f_9)
		{
			if (__LIB_2__::func_897())
			{
				Global_2667225.f_45.f_54 = 1;
			}
			else
			{
				Global_2667225.f_45.f_54 = 0;
			}
			if (Global_2667225.f_45.f_54)
			{
				return 26;
			}
			else
			{
				return 3;
			}
		}
		else
		{
			if (!Global_2667225.f_24 == 0)
			{
				if (!SCRIPT::IS_THREAD_ACTIVE(Global_2667225.f_24.f_1))
				{
					Global_2667225.f_24 = 0;
				}
			}
			if (!Global_2667225.f_24 == 0)
			{
				return Global_2667225.f_24;
			}
			else
			{
				if (__LIB_0__::func_938(PLAYER::PLAYER_ID()))
				{
					if (__LIB_2__::func_896() && (__LIB_2__::func_940(PLAYER::PLAYER_ID()) || __LIB_2__::func_700(Global_2667225.f_512)))
					{
						return 52;
					}
					else
					{
						return 51;
					}
				}
				if (__LIB_0__::func_974())
				{
					if (func_1624(PLAYER::PLAYER_ID()))
					{
						return 33;
					}
					else
					{
						return 20;
					}
				}
				else if (__LIB_0__::func_975())
				{
					return 20;
				}
				else if ((((((__LIB_12__::func_548(1) && func_1624(PLAYER::PLAYER_ID())) && (__LIB_0__::func_492(PLAYER::PLAYER_ID()) != 157 || (__LIB_0__::func_492(PLAYER::PLAYER_ID()) == 157 && __LIB_0__::func_797() != __LIB_1__::func_730()))) && !__LIB_2__::func_895()) && !__LIB_2__::func_939(PLAYER::PLAYER_ID())) && !__LIB_1__::func_375(1)) && !(__LIB_0__::func_321(PLAYER::PLAYER_ID(), 0) == 0 && func_1621(PLAYER::PLAYER_ID()) == 1))
				{
					if (__LIB_35__::func_504())
					{
						return 34;
					}
					else if (__LIB_7__::func_653(10f))
					{
						return 27;
					}
					else
					{
						iVar0 = __LIB_3__::func_184(PLAYER::PLAYER_ID(), 0);
						if ((__LIB_2__::func_867(iVar0) && __LIB_35__::func_484(iVar0)) && (__LIB_35__::func_502(iVar0) || __LIB_0__::func_796(PLAYER::PLAYER_ID())))
						{
							Global_2667225.f_2855 = iVar0;
							return 29;
						}
						else
						{
							return 31;
						}
					}
				}
				else if (__LIB_7__::func_653(10f))
				{
					return 27;
				}
				else
				{
					iVar0 = __LIB_3__::func_184(PLAYER::PLAYER_ID(), 0);
					if (__LIB_2__::func_867(iVar0) && __LIB_35__::func_484(iVar0))
					{
						Global_2667225.f_2855 = iVar0;
						return 29;
					}
					else
					{
						return 1;
					}
				}
			}
		}
	}
	return 1;
}

int func_1621(bool bParam0)//Position - 0xBA7E1
{
	bool bVar0;
	struct<3> Var1;
	if (__LIB_12__::func_486(bParam0, 0))
	{
		bVar0 = __LIB_2__::func_39(bParam0);
		Var1 = { func_1528(bVar0) };
		return func_120(&Var1, 0, 0, 0, 1);
	}
	return 0;
}

int func_1624(bool bParam0)//Position - 0xBA89F
{
	struct<3> Var0;
	bool bVar1;
	struct<3> Var2;
	bool bVar3;
	struct<3> Var4;
	Var0 = { func_1528(bParam0) };
	if (__LIB_12__::func_486(bParam0, 0))
	{
		bVar1 = __LIB_2__::func_39(bParam0);
		Var2 = { func_1528(bVar1) };
		Var0.f_2 = 0f;
		Var2.f_2 = 0f;
		if (SYSTEM::VDIST2(Var0, Var2) < 250000f)
		{
			return 1;
		}
	}
	else
	{
		bVar3 = __LIB_3__::func_258(bParam0, 1);
		if (!bVar3 == __LIB_0__::getMinusOneOrNull())
		{
			Var4 = { func_1528(bVar3) };
			Var0.f_2 = 0f;
			Var4.f_2 = 0f;
			if (SYSTEM::VDIST2(Var0, Var4) < 250000f)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_1641()//Position - 0xBAD80
{
	struct<3> Var0;
	Var0 = { func_410(func_10(), Local_157.f_71[0], Local_157.f_384, 0) };
	if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), Var0, 0) <= 100f)
	{
		return 1;
	}
	return 0;
}

int func_1642()//Position - 0xBADBE
{
	if (!__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
	{
		return 0;
	}
	if (func_2192(30))
	{
		return 0;
	}
	if (Local_118.f_115 > 0 && Local_118.f_115 < 5)
	{
		return 1;
	}
	return 0;
}

int func_1643()//Position - 0xBADFE
{
	bool bVar0;
	if (func_2192(30))
	{
		return 0;
	}
	if (__LIB_0__::func_864(&(Local_118.f_364)))
	{
		if (__LIB_0__::func_937(&(Local_118.f_364), 2000, 0))
		{
			return 0;
		}
	}
	if (!__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
	{
		return 0;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		return 1;
	}
	bVar0 = false;
	while (bVar0 < func_21())
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_40(bVar0)))
		{
			if (__LIB_2__::func_789(PLAYER::PLAYER_PED_ID(), func_40(bVar0), 1))
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

void func_1644()//Position - 0xBAE8F
{
	if (func_274())
	{
		if (func_2192(30))
		{
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && __LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
			}
		}
		if (func_1643() || func_1642())
		{
			if (!__LIB_0__::func_864(&(Local_118.f_155)))
			{
				if (!func_2192(30))
				{
					if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && __LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
					{
						ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), true);
					}
				}
			}
			else if (__LIB_0__::func_937(&(Local_118.f_155), 5000, 0) || func_2192(30))
			{
				if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && __LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
				{
					ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
				}
			}
		}
		else if (__LIB_0__::func_937(&(Local_118.f_155), 5000, 0) || func_2192(30))
		{
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && __LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
			}
		}
	}
}

void func_1646()//Position - 0xBAFAF
{
	if (__LIB_4__::func_862(27))
	{
		__LIB_4__::func_861(27);
	}
	if (__LIB_4__::func_862(23))
	{
		__LIB_4__::func_861(23);
	}
	if (__LIB_4__::func_862(32))
	{
		__LIB_4__::func_861(32);
	}
	if (((((__LIB_0__::func_1("SCONTRA_HLP8" /* GXT: Press ~INPUT_FRONTEND_RIGHT~ to drop Special Cargo when you are flying above a drop-off. */) || __LIB_0__::func_1("SCONTRA_HLP14" /* GXT: Press ~INPUT_ENTER~ to climb aboard the tug boat. */)) || __LIB_0__::func_1("SCONTRA_HLP6" /* GXT: The Special Cargo ~HUD_COLOUR_BLUE~~BLIP_CONTRABAND~~HUD_COLOUR_WHITE~ has been transferred to the delivery vehicle. Deliver the goods to the drop-off to receive payment. */)) || __LIB_0__::func_1("SCONTRA_HLP6P" /* GXT: The Special Cargo ~HUD_COLOUR_BLUE~~BLIP_CONTRABAND~~HUD_COLOUR_WHITE~ has been transferred to the delivery vehicle. Deliver the goods to the drop-offs to receive payment. */)) || __LIB_0__::func_1("SCONTRA_HLP7" /* GXT: Help deliver the Special Cargo ~HUD_COLOUR_BLUE~~BLIP_CONTRABAND~~HUD_COLOUR_WHITE~ to the drop-off. */)) || __LIB_0__::func_1("SCONTRA_HLP7P" /* GXT: Help deliver the Special Cargo ~HUD_COLOUR_BLUE~~BLIP_CONTRABAND~~HUD_COLOUR_WHITE~ to the drop-offs. */))
	{
		HUD::CLEAR_HELP(true);
	}
}

void func_1648()//Position - 0xBB066
{
	if (Local_118.f_359 != -1)
	{
		AUDIO::STOP_SOUND(Local_118.f_359);
		AUDIO::RELEASE_SOUND_ID(Local_118.f_359);
		Local_118.f_359 = -1;
	}
}

void func_1649()//Position - 0xBB08F
{
	if (BitTest(Local_118.f_6, 1))
	{
		if (iLocal_114 != -1)
		{
			if (!AUDIO::HAS_SOUND_FINISHED(iLocal_114))
			{
				AUDIO::STOP_SOUND(iLocal_114);
				AUDIO::RELEASE_SOUND_ID(iLocal_114);
			}
		}
		MISC::CLEAR_BIT(&(Local_118.f_6), 1);
	}
	if (BitTest(Local_118.f_6, 2))
	{
		if (iLocal_115 != -1)
		{
			AUDIO::RELEASE_SOUND_ID(iLocal_115);
		}
		MISC::CLEAR_BIT(&(Local_118.f_6), 2);
	}
	if (BitTest(Local_118.f_6, 3))
	{
		if (iLocal_116 != -1)
		{
			if (!AUDIO::HAS_SOUND_FINISHED(iLocal_116))
			{
				AUDIO::STOP_SOUND(iLocal_116);
				AUDIO::RELEASE_SOUND_ID(iLocal_116);
			}
		}
		MISC::CLEAR_BIT(&(Local_118.f_6), 3);
	}
	if (BitTest(Local_118.f_6, 0))
	{
		MISC::CLEAR_BIT(&(Local_118.f_6), 0);
	}
}

void func_1658()//Position - 0xBB4EF
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	if (func_459())
	{
		if (!func_429())
		{
			if (func_470())
			{
				bVar0 = false;
				while (bVar0 < func_21())
				{
					if (func_1670(bVar0) && Local_157.f_376[bVar0] < 10)
					{
						if ((func_41(bVar0) && ENTITY::IS_ENTITY_AT_COORD(func_42(bVar0), func_410(func_10(), Local_157.f_71[bVar0], Local_157.f_384, bVar0), func_453(0, 0), false, true, 0)) && (!func_337() || ENTITY::IS_ENTITY_IN_AIR(func_42(bVar0))))
						{
							func_1669();
						}
						else
						{
							func_1648();
						}
					}
					if (func_1667(bVar0, 1) && Local_157.f_376[bVar0] < 10)
					{
						if ((func_41(bVar0) && ENTITY::IS_ENTITY_AT_COORD(func_42(bVar0), func_410(func_10(), Local_157.f_71[bVar0], Local_157.f_384, bVar0), func_453(0, 0), false, true, 0)) && (!func_337() || ENTITY::IS_ENTITY_IN_AIR(func_42(bVar0))))
						{
							iVar2 = 1;
							func_1669();
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 74 /*INPUT_VEH_HEADLIGHT*/, true);
							if (func_337() && !func_1666(0))
							{
								VEHICLE::OPEN_BOMB_BAY_DOORS(func_40(bVar0));
								func_1665(0);
							}
						}
						else
						{
							func_1648();
							if (func_337() && func_1666(0))
							{
								VEHICLE::CLOSE_BOMB_BAY_DOORS(func_40(bVar0));
								func_1664(0);
							}
						}
						bVar3 = (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) != 0 || func_38(NETWORK::PARTICIPANT_ID(), 6));
						if (((func_457() || func_454()) && Local_118.f_101 != -1) && !__LIB_3__::func_417("BYCB_CLY_LSC0" /* GXT: Lose the Cops. */))
						{
							bVar3 = false;
						}
						if (__LIB_3__::func_417("BYCB_CLY_LSC0" /* GXT: Lose the Cops. */))
						{
							bVar3 = true;
						}
						if ((iVar2 && !bVar3) && !BitTest(Local_118.f_108[bVar0], Local_157.f_71[bVar0]))
						{
							iVar1 = 1;
							__LIB_0__::func_151("SCONTRA_CDROP" /* GXT: Press ~INPUT_FRONTEND_RIGHT~ to drop Special Cargo. */, -1);
						}
						else if (__LIB_0__::func_1("SCONTRA_CDROP" /* GXT: Press ~INPUT_FRONTEND_RIGHT~ to drop Special Cargo. */))
						{
							HUD::CLEAR_HELP(true);
						}
						switch (Local_118.f_107)
						{
							case 0:
								if (((iVar1 && PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 190 /*INPUT_FRONTEND_RIGHT*/)) && !BitTest(Local_118.f_108[bVar0], Local_157.f_71[bVar0])) && !bVar3)
								{
									__LIB_35__::func_485(bVar0, Local_157.f_71[bVar0], Local_157.f_596);
									MISC::SET_BIT(&(Local_118.f_108[bVar0]), Local_157.f_71[bVar0]);
									Local_118.f_107++;
								}
								break;
							case 1:
								Local_118.f_107 = 0;
								break;
						}
					}
					else if (!func_1670(bVar0))
					{
						func_1648();
					}
					bVar0++;
				}
			}
		}
		else
		{
			if (__LIB_0__::func_1("SCONTRA_CDROP" /* GXT: Press ~INPUT_FRONTEND_RIGHT~ to drop Special Cargo. */))
			{
				HUD::CLEAR_HELP(true);
			}
			func_1648();
		}
	}
}

void func_1664(int iParam0)//Position - 0xBB8CF
{
	MISC::CLEAR_BIT(&uLocal_142, iParam0);
}

void func_1665(int iParam0)//Position - 0xBB8E0
{
	MISC::SET_BIT(&uLocal_142, iParam0);
}

bool func_1666(int iParam0)//Position - 0xBB8F1
{
	return BitTest(uLocal_142, iParam0);
}

int func_1667(bool bParam0, bool bParam1)//Position - 0xBB8FF
{
	if (func_1668(bParam0, bParam1))
	{
		if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 0, 1))
		{
			if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(func_40(bParam0), -1, false))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_1668(int iParam0, bool bParam1)//Position - 0xBB937
{
	if (!func_41(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_185(iParam0))
		{
			return 0;
		}
	}
	if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_157.f_35[iParam0]), false))
	{
		return 0;
	}
	return 1;
}

void func_1669()//Position - 0xBB97E
{
	if (Local_118.f_359 == -1 && func_337())
	{
		Local_118.f_359 = AUDIO::GET_SOUND_ID();
		AUDIO::PLAY_SOUND_FRONTEND(Local_118.f_359, "Drop_Zone_Alarm", "DLC_Exec_Air_Drop_Sounds", false);
	}
}

int func_1670(bool bParam0)//Position - 0xBB9B4
{
	int iVar0;
	int iVar1;
	if (func_1668(bParam0, 1))
	{
		if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 0, 1))
		{
			iVar1 = 0;
			while (iVar1 < 9)
			{
				iVar0 = iVar1;
				if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(func_40(bParam0), iVar0, false))
				{
					return 1;
				}
				iVar1++;
			}
		}
	}
	return 0;
}

void func_1671()//Position - 0xBBA03
{
	bool bVar0;
	if (!func_2192(10))
	{
		if (func_459())
		{
			bVar0 = false;
			while (bVar0 < func_21())
			{
				if (func_1667(bVar0, 1) && Local_157.f_376[bVar0] < 10)
				{
					if (func_41(bVar0) && ENTITY::IS_ENTITY_AT_COORD(func_42(bVar0), func_410(func_10(), Local_157.f_71[bVar0], Local_157.f_384, bVar0), func_453(1, 0), false, true, 0))
					{
						__LIB_0__::func_151("SCONTRA_CLAND" /* GXT: Land the plane to deliver the Special Cargo. */, -1);
						func_2165(10);
					}
				}
				bVar0++;
			}
		}
	}
}

void func_1672()//Position - 0xBBA97
{
	if ((func_457() || func_483()) || func_454())
	{
		if (func_1674())
		{
			if (PLAYER::GET_MAX_WANTED_LEVEL() > func_1673())
			{
				PLAYER::SET_MAX_WANTED_LEVEL(func_1673());
			}
		}
	}
}

int func_1673()//Position - 0xBBAD4
{
	int iVar0;
	iVar0 = func_7();
	if (func_2257() == 1)
	{
		iVar0 = 3;
	}
	if (func_1674())
	{
		if (iVar0 == 2)
		{
			return Global_262145.f_16765 /* Tunable: EXEC_SELL_MEDIUM_WANTED_RATING_CAP */;
		}
		else if (iVar0 == 3)
		{
			return Global_262145.f_16769 /* Tunable: EXEC_SELL_EASY_WANTED_RATING_CAP */;
		}
	}
	return Global_262145.f_16761 /* Tunable: EXEC_SELL_HARD_WANTED_CAP */;
}

bool func_1674()//Position - 0xBBB1E
{
	int iVar0;
	iVar0 = func_7();
	if (func_2257() == 1)
	{
		iVar0 = 3;
	}
	if (iVar0 == 2)
	{
		return Global_262145.f_16765 /* Tunable: EXEC_SELL_MEDIUM_WANTED_RATING_CAP */ < 5;
	}
	else if (iVar0 == 3)
	{
		return Global_262145.f_16769 /* Tunable: EXEC_SELL_EASY_WANTED_RATING_CAP */ < 5;
	}
	return Global_262145.f_16761 /* Tunable: EXEC_SELL_HARD_WANTED_CAP */ < 5;
}

void func_1675()//Position - 0xBBB67
{
	int iVar0;
	if (func_1682())
	{
		if (func_37(10))
		{
			if (Local_118.f_117 != -1)
			{
				if (func_1681(0, 0))
				{
					if (!func_2192(23))
					{
						__LIB_19__::func_575(1, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
						Local_118.f_118 = 1;
						func_2165(23);
					}
					else
					{
						if (!func_2192(24) || Local_118.f_118)
						{
							__LIB_19__::func_575(1, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
							iVar0 = 0;
							while (iVar0 < 4)
							{
								__LIB_12__::func_17(func_1680(iVar0), 0f, 1065353216);
								iVar0++;
							}
							__LIB_15__::func_448(1, joaat("seashark"), 0, 0, 0, 0, -1, 0, 0, 0, 0, 0);
							Local_118.f_118 = 0;
							Local_118.f_117 = func_1677();
							func_2165(24);
						}
						else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_35[0]))
						{
							if (__LIB_0__::func_121(NETWORK::NET_TO_VEH(Local_157.f_35[0])))
							{
								__LIB_1__::func_959(ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_157.f_35[0]), true), 1, 0);
							}
						}
						if (Local_118.f_117 != func_1677())
						{
							Local_118.f_117 = func_1677();
							func_893(0);
							Local_118.f_118 = 1;
						}
					}
				}
				else
				{
					func_893(0);
				}
			}
			else
			{
				if (Local_118.f_117 != func_1677())
				{
					Local_118.f_117 = func_1677();
				}
				func_893(0);
			}
		}
		else if (func_269() && Local_157.f_384 == 1)
		{
			if (func_1681(0, 1))
			{
				if (!func_2192(23))
				{
					__LIB_19__::func_575(1, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
					func_2165(23);
				}
				else if (!func_2192(24))
				{
					__LIB_12__::func_17(882.938f, -2548.9731f, 27.4119f, 175.2256f, 1065353216);
					__LIB_12__::func_17(890.0646f, -2549.7996f, 27.418f, 174.6591f, 1065353216);
					__LIB_12__::func_17(886.0687f, -2549.9731f, 27.402f, 175.2238f, 1065353216);
					__LIB_12__::func_17(878.1968f, -2549.3467f, 27.42f, 174.658f, 1065353216);
					func_2165(24);
				}
			}
			else
			{
				func_893(0);
			}
		}
	}
}

int func_1677()//Position - 0xBBDF7
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	iVar0 = -1;
	fVar4 = 9999.9f;
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_35[0]))
	{
		if (__LIB_0__::func_121(NETWORK::NET_TO_VEH(Local_157.f_35[0])))
		{
			fVar3 = __LIB_0__::func_724(NETWORK::NET_TO_VEH(Local_157.f_35[0]), func_367(), 1);
			iVar1 = 0;
			while (iVar1 < 3)
			{
				fVar2 = __LIB_0__::func_724(NETWORK::NET_TO_VEH(Local_157.f_35[0]), func_1678(iVar1), 1);
				if (fVar2 < fVar3)
				{
					if (fVar2 < fVar4)
					{
						iVar0 = iVar1;
						fVar4 = fVar2;
					}
				}
				iVar1++;
			}
		}
	}
	return iVar0;
}

Vector3 func_1678(int iParam0)//Position - 0xBBE87
{
	switch (Local_157.f_394[0])
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					if (func_215())
					{
						return -1307.618f, -1887.4006f, 0.9108f;
					}
					else
					{
						return -13.578f, -3222.2014f, 0.2915f;
					}
					break;
				case 1:
					if (func_215())
					{
						return -1809.8356f, -1907.6366f, 1.866f;
					}
					else
					{
						return 286.5461f, -3696.0251f, 1.0871f;
					}
					break;
				case 2:
					if (func_215())
					{
						return -2410.2705f, -1868.3322f, 0.7186f;
					}
					else
					{
						return 718.25f, -4044.6812f, -0.2507f;
					}
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					if (func_215())
					{
						return -576.5449f, -2540.7446f, -0.0635f;
					}
					else
					{
						return 1296.5454f, -2852.7937f, -0.1711f;
					}
					break;
				case 1:
					if (func_215())
					{
						return -499.324f, -3218.8538f, -0.1554f;
					}
					else
					{
						return 1738.3656f, -3044.8193f, 0.0141f;
					}
					break;
				case 2:
					if (func_215())
					{
						return -80.632f, -3717.8167f, -0.0342f;
					}
					else
					{
						return 2136.8665f, -3241.9546f, 0.9711f;
					}
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					if (func_215())
					{
						return 275.5132f, -3472.108f, 0.8235f;
					}
					else
					{
						return -597.775f, -3261.9753f, -0.1605f;
					}
					break;
				case 1:
					if (func_215())
					{
						return -152.29f, -3713.823f, 0.9292f;
					}
					else
					{
						return -862.6807f, -3684.7676f, -0.1702f;
					}
					break;
				case 2:
					if (func_215())
					{
						return -640.2043f, -3922.0105f, 0.1372f;
					}
					else
					{
						return -1399.4392f, -3974.3948f, -0.636f;
					}
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					if (func_215())
					{
						return 1469.9653f, -2852.0378f, 0.3648f;
					}
					else
					{
						return -1376.298f, -1986.7031f, 0.1936f;
					}
					break;
				case 1:
					if (func_215())
					{
						return 2226.2805f, -3027.3801f, -0.4949f;
					}
					else
					{
						return -1920.7928f, -2289.2769f, 0.1088f;
					}
					break;
				case 2:
					if (func_215())
					{
						return 2709.8125f, -3174.3423f, -0.1984f;
					}
					else
					{
						return -2341.8152f, -2455.9001f, 0.705f;
					}
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
					if (func_215())
					{
						return 944.7946f, -3493.8918f, -0.0673f;
					}
					else
					{
						return -651.1104f, -2751.5168f, 0.3129f;
					}
					break;
				case 1:
					if (func_215())
					{
						return 1361.9331f, -3764.207f, 0.1169f;
					}
					else
					{
						return -559.9791f, -3303.8757f, 0.0618f;
					}
					break;
				case 2:
					if (func_215())
					{
						return 1778.4565f, -4014.8352f, -0.2076f;
					}
					else
					{
						return -455.3704f, -3821.3103f, 0.4918f;
					}
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_1680(int iParam0)//Position - 0xBC23F
{
	struct<3> Var0;
	float fVar1;
	int iVar2;
	iVar2 = func_1677();
	switch (Local_157.f_394[0])
	{
		case 0:
			switch (iVar2)
			{
				case 0:
					Var0 = { func_1678(iVar2) };
					if (func_215())
					{
						fVar1 = 85.1204f;
					}
					else
					{
						fVar1 = 205.8345f;
					}
					break;
				case 1:
					Var0 = { func_1678(iVar2) };
					if (func_215())
					{
						fVar1 = 83.2652f;
					}
					else
					{
						fVar1 = 229.5093f;
					}
					break;
				case 2:
					Var0 = { func_1678(iVar2) };
					if (func_215())
					{
						fVar1 = 79.4715f;
					}
					else
					{
						fVar1 = 231.8621f;
					}
					break;
			}
			break;
		case 1:
			switch (iVar2)
			{
				case 0:
					Var0 = { func_1678(iVar2) };
					if (func_215())
					{
						fVar1 = 164.0286f;
					}
					else
					{
						fVar1 = 244.9098f;
					}
					break;
				case 1:
					Var0 = { func_1678(iVar2) };
					if (func_215())
					{
						fVar1 = 222.0656f;
					}
					else
					{
						fVar1 = 245.1893f;
					}
					break;
				case 2:
					Var0 = { func_1678(iVar2) };
					if (func_215())
					{
						fVar1 = 220.0234f;
					}
					else
					{
						fVar1 = 238.331f;
					}
					break;
			}
			break;
		case 2:
			switch (iVar2)
			{
				case 0:
					Var0 = { func_1678(iVar2) };
					if (func_215())
					{
						fVar1 = 115.595f;
					}
					else
					{
						fVar1 = 146.9888f;
					}
					break;
				case 1:
					Var0 = { func_1678(iVar2) };
					if (func_215())
					{
						fVar1 = 106.4185f;
					}
					else
					{
						fVar1 = 107.7055f;
					}
					break;
				case 2:
					Var0 = { func_1678(iVar2) };
					if (func_215())
					{
						fVar1 = 108.8299f;
					}
					else
					{
						fVar1 = 100.9158f;
					}
					break;
			}
			break;
		case 3:
			switch (iVar2)
			{
				case 0:
					Var0 = { func_1678(iVar2) };
					if (func_215())
					{
						fVar1 = 253.3623f;
					}
					else
					{
						fVar1 = 111.0933f;
					}
					break;
				case 1:
					Var0 = { func_1678(iVar2) };
					if (func_215())
					{
						fVar1 = 251.3335f;
					}
					else
					{
						fVar1 = 112.0227f;
					}
					break;
				case 2:
					Var0 = { func_1678(iVar2) };
					if (func_215())
					{
						fVar1 = 249.6449f;
					}
					else
					{
						fVar1 = 104.9417f;
					}
					break;
			}
			break;
		case 4:
			switch (iVar2)
			{
				case 0:
					Var0 = { func_1678(iVar2) };
					if (func_215())
					{
						fVar1 = 237.5991f;
					}
					else
					{
						fVar1 = 191.126f;
					}
					break;
				case 1:
					Var0 = { func_1678(iVar2) };
					if (func_215())
					{
						fVar1 = 240.9615f;
					}
					else
					{
						fVar1 = 187.9669f;
					}
					break;
				case 2:
					Var0 = { func_1678(iVar2) };
					if (func_215())
					{
						fVar1 = 239.5476f;
					}
					else
					{
						fVar1 = 185.1684f;
					}
					break;
			}
			break;
	}
	if (!__LIB_0__::func_86(Var0))
	{
		switch (iParam0)
		{
			case 0:
				return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0, fVar1, Local_159);
			case 1:
				return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0, fVar1, Local_160);
			case 2:
				return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0, fVar1, Local_161);
			case 3:
				return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0, fVar1, Local_162);
			default:
		}
	}
	return 0f, 0f, 0f;
}

int func_1681(int iParam0, bool bParam1)//Position - 0xBC5A9
{
	int iVar0;
	iVar0 = 200;
	if (bParam1)
	{
		iVar0 = 150;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_35[iParam0]))
	{
		if (__LIB_0__::func_121(NETWORK::NET_TO_VEH(Local_157.f_35[iParam0])))
		{
			if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_157.f_35[iParam0]), 0) < IntToFloat(iVar0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_1682()//Position - 0xBC604
{
	if (func_215() || func_269())
	{
		return 1;
	}
	return 0;
}

void func_1683()//Position - 0xBC622
{
	struct<3> Var0;
	struct<3> Var1;
	if (!func_424())
	{
		if (func_274())
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_35[0]))
			{
				Var0 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(func_40(0), true), ENTITY::GET_ENTITY_HEADING(func_40(0)), -5.2f, -2.27f, -0.66f) };
				Var1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(func_40(0), true), ENTITY::GET_ENTITY_HEADING(func_40(0)), 5.2f, -2.27f, -0.66f) };
				if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), Var0, 1) < 3f || __LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), Var1, 1) < 3f)
					{
						if (!BitTest(Local_118.f_5, 1))
						{
							__LIB_0__::func_151("SCONTRA_HLP14" /* GXT: Press ~INPUT_ENTER~ to climb aboard the tug boat. */, -1);
							MISC::SET_BIT(&(Local_118.f_5), 1);
						}
					}
					else
					{
						if (__LIB_0__::func_1("SCONTRA_HLP14" /* GXT: Press ~INPUT_ENTER~ to climb aboard the tug boat. */))
						{
							HUD::CLEAR_HELP(true);
						}
						if (BitTest(Local_118.f_5, 1))
						{
							MISC::CLEAR_BIT(&(Local_118.f_5), 1);
						}
					}
				}
				else
				{
					if (__LIB_0__::func_1("SCONTRA_HLP14" /* GXT: Press ~INPUT_ENTER~ to climb aboard the tug boat. */))
					{
						HUD::CLEAR_HELP(true);
					}
					if (BitTest(Local_118.f_5, 1))
					{
						MISC::CLEAR_BIT(&(Local_118.f_5), 1);
					}
				}
			}
		}
	}
	else if (!BitTest(Local_118.f_5, 2))
	{
		MISC::SET_BIT(&(Local_118.f_5), 2);
		__LIB_1__::func_928(50);
	}
	else if (func_11())
	{
		if (!BitTest(Local_118.f_5, 3))
		{
			if (Local_157.f_544 > 0f)
			{
				if (__LIB_3__::func_446(0, 1, 1, 1))
				{
					__LIB_0__::func_151("SCONTRA_HLPLD" /* GXT: Take out the attacking enemies ~HUD_COLOUR_RED~~BLIP_TEMP_4~~s~ to protect the goods and complete the sale. */, -1);
					MISC::SET_BIT(&(Local_118.f_5), 3);
				}
			}
		}
	}
}

void func_1692()//Position - 0xBC936
{
	if (!BitTest(Local_118.f_4, 0))
	{
		if (__LIB_0__::func_864(&(Local_157.f_3)))
		{
			if (__LIB_0__::func_937(&(Local_157.f_3), 30000, 0))
			{
				if (Local_118.f_0 > 0 && Local_118.f_0 <= 5000)
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "5s", "MP_MISSION_COUNTDOWN_SOUNDSET", false);
					MISC::SET_BIT(&(Local_118.f_4), 0);
				}
			}
		}
	}
}

void func_1693()//Position - 0xBC98F
{
	int iVar0;
	if (func_399())
	{
		switch (func_10())
		{
			case 12:
				if (func_424())
				{
					if (!func_38(NETWORK::PARTICIPANT_ID(), 4))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_157.f_35[0]))
						{
							if (__LIB_0__::func_724(func_40(0), func_367(), 0) >= IntToFloat(__LIB_15__::func_285()))
							{
								func_633(4);
							}
						}
					}
				}
				break;
			case 5:
				iVar0 = 0;
				while (iVar0 < func_21())
				{
					if (!func_38(NETWORK::PARTICIPANT_ID(), 7))
					{
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_35[iVar0]))
						{
							if (__LIB_0__::func_939(Local_157.f_35[iVar0]))
							{
								if (!__LIB_35__::func_491(NETWORK::NET_TO_VEH(Local_157.f_35[iVar0]), Local_157.f_54, 350f))
								{
									func_633(7);
								}
							}
						}
					}
					iVar0++;
				}
				break;
			}
	}
}

void func_1695()//Position - 0xBCA69
{
	bool bVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	bool bVar6;
	float fVar7;
	if (func_212() && !func_38(NETWORK::PARTICIPANT_ID(), 2))
	{
		fVar2 = 30f;
		fVar3 = 50f;
		fVar4 = 100f;
		switch (func_10())
		{
			case 13:
			case 9:
				bVar0 = false;
				while (bVar0 < func_21())
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_35[bVar0]))
					{
						if (func_41(bVar0))
						{
							if (func_10() == 9)
							{
								fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), func_410(func_10(), 0, Local_157.f_384, bVar0), true);
								fVar2 = 120f;
								fVar3 = 150f;
								fVar4 = 200f;
							}
							else if (func_212() && func_269())
							{
								iVar5 = func_1697(0);
								if (iVar5 != -1)
								{
									fVar1 = __LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iVar5, 1);
								}
								else
								{
									fVar1 = __LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), func_40(bVar0), 1);
								}
							}
							else
							{
								fVar1 = __LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), func_40(bVar0), 1);
							}
							if (fVar1 < fVar2 || func_23(bVar0))
							{
								func_633(2);
							}
							else if (fVar1 < fVar3)
							{
								if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
								{
									func_633(2);
								}
							}
							else if (fVar1 < fVar4)
							{
								if (func_269())
								{
									if (!func_38(NETWORK::PARTICIPANT_ID(), 12))
									{
										func_633(12);
									}
								}
								if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) && !WEAPON::IS_PED_CURRENT_WEAPON_SILENCED(PLAYER::PLAYER_PED_ID()))
								{
									func_633(2);
								}
							}
						}
					}
					bVar0++;
				}
				break;
			case 11:
				bVar6 = false;
				while (bVar6 < 3)
				{
					if (!BitTest(Local_158[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_8, bVar6) && !BitTest(Local_157.f_549, bVar6))
					{
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_499[bVar6 /*6*/]))
						{
							if (__LIB_0__::func_939(Local_157.f_499[bVar6 /*6*/]))
							{
								fVar7 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_157.f_499[bVar6 /*6*/]), true), true);
								if ((func_1696(1) && fVar7 < 600f) || fVar7 < 200f)
								{
									MISC::SET_BIT(&(Local_158[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_8), bVar6);
								}
							}
						}
					}
					bVar6++;
				}
				break;
			}
	}
}

int func_1696(bool bParam0)//Position - 0xBCCA3
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < func_21())
	{
		if (func_1668(iVar0, bParam0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_1697(int iParam0)//Position - 0xBCCD0
{
	bool bVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	fVar1 = 9999.99f;
	iVar3 = -1;
	if (func_212())
	{
		bVar0 = false;
		while (bVar0 < func_210())
		{
			if (!PED::IS_PED_INJURED(func_197(bVar0)) || iParam0)
			{
				fVar2 = __LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), func_197(bVar0), 1);
				if (fVar2 < fVar1)
				{
					fVar1 = fVar2;
					iVar3 = func_197(bVar0);
				}
			}
			bVar0++;
		}
	}
	return iVar3;
}

void func_1698()//Position - 0xBCD3B
{
	struct<3> Var0;
	if (func_481())
	{
		if (!func_2192(8))
		{
			if (func_424())
			{
				__LIB_25__::func_426(1);
				__LIB_25__::func_425(1);
				Var0 = { func_410(func_10(), Local_157.f_71[0], Local_157.f_384, 0) };
				__LIB_35__::func_415(0, Var0, 1, 0);
				func_2165(8);
			}
		}
		else
		{
			if (BitTest(Global_2815059.f_1801, 24))
			{
				if (!BitTest(Local_118.f_5, 0))
				{
					if (__LIB_30__::func_421() && !__LIB_0__::func_1("SCONT_GOHP" /* GXT: The Ghost Organization VIP Ability can be used to temporarily hide Special Cargo shipments from other players in session. */))
					{
						__LIB_0__::func_151("SCONTRA_HLP12" /* GXT: Trackify allows you to locate a target in the world. Use the information it provides to track down the buyer. It can be launched from the bottom right of the phone app menu. */, -1);
						MISC::SET_BIT(&(Local_118.f_5), 0);
					}
				}
			}
			if (!func_38(NETWORK::PARTICIPANT_ID(), 18))
			{
				if (func_1700())
				{
					if (func_1699())
					{
						func_633(18);
					}
				}
			}
		}
	}
}

int func_1699()//Position - 0xBCDF6
{
	int iVar0;
	bool bVar1;
	iVar0 = 0;
	bVar1 = false;
	while (bVar1 < func_21())
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_450(bVar1, 0), func_410(func_10(), Local_157.f_71[bVar1], Local_157.f_384, bVar1), true) < 50f)
		{
			iVar0 = 1;
		}
		bVar1++;
	}
	return iVar0;
}

int func_1700()//Position - 0xBCE49
{
	bool bVar0;
	bVar0 = false;
	while (bVar0 < func_21())
	{
		if (func_14(bVar0))
		{
			return 1;
		}
		bVar0++;
	}
	return 0;
}

void func_1704()//Position - 0xBCF77
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	iVar0 = 1;
	Local_118.f_0 = func_1746();
	if ((__LIB_22__::func_298(1) || func_481()) && Local_118.f_0 < func_188())
	{
		if (func_474() && func_424())
		{
			if (Local_157.f_555 > 99999)
			{
				__LIB_1__::func_910();
			}
			else if (Local_157.f_555 > 999)
			{
				__LIB_3__::func_238();
			}
			__LIB_2__::func_131(Local_157.f_555, "SCONTRA_HUD_DMG" /* GXT: DELIVERY BONUS */, -1, 109, 5, 0, "HUD_CASH" /* GXT: $~1~ */, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
		}
		if (__LIB_0__::func_864(&(Local_157.f_391)))
		{
			__LIB_0__::func_795(&(Local_118.f_145), 0, 0);
			__LIB_7__::func_603((20000 - func_1734()), 20000, "SCONTRA_REPAIR" /* GXT: REPAIRING */, 6, -1, 5, -1082130432, -1082130432, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1, 0, -1, 1);
		}
		else if (__LIB_0__::func_864(&(Local_118.f_145)))
		{
			if (__LIB_0__::func_937(&(Local_118.f_145), 22000, 0))
			{
				__LIB_0__::clearF_1Prop(&(Local_118.f_145));
			}
			else
			{
				__LIB_7__::func_603(20000, 20000, "SCONTRA_REPAIR" /* GXT: REPAIRING */, 6, -1, 5, -1082130432, -1082130432, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1, 0, -1, 1);
			}
		}
		if (Local_118.f_0 <= 30000)
		{
			iVar0 = 6;
		}
		if (func_337())
		{
			bVar1 = false;
			bVar2 = false;
			while (bVar2 < func_21())
			{
				if (func_41(bVar2))
				{
					if (func_1730(bVar2))
					{
						bVar1 = true;
					}
				}
				bVar2++;
			}
			if (bVar1)
			{
				func_1725();
			}
			else
			{
				func_1649();
			}
		}
		func_1723();
		if (func_1722())
		{
			__LIB_3__::func_437(func_1720(), func_1719(), "SCONTRA_HUD_SC" /* GXT: DELIVERIES MADE */, -1, 1, 4, 0, 0, 0, 0, 0, 1, 1, 0, 255, 0);
		}
		if (!func_11())
		{
			if (func_218() && func_1715())
			{
				iVar3 = func_1714();
				func_1710(iVar3, iVar3, func_210(), Local_118.f_0, iVar0, 0, "SCONTRA_TIMER" /* GXT: TIME REMAINING */, 1);
			}
			else
			{
				if (func_481() && __LIB_0__::func_77(0))
				{
					__LIB_25__::func_894();
				}
				__LIB_1__::func_350(Local_118.f_0, "SCONTRA_TIMER" /* GXT: TIME REMAINING */, 0, 0, -1, 0, 3, 0, iVar0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
			}
		}
		else if (Local_157.f_56 >= func_422())
		{
			iVar4 = func_1705();
			func_1710(Local_157.f_498, Local_157.f_498, iVar4, Local_118.f_0, iVar0, 0, "SCONTRA_TIMER" /* GXT: TIME REMAINING */, 1);
		}
		else
		{
			__LIB_1__::func_350(Local_118.f_0, "SCONTRA_TIMER" /* GXT: TIME REMAINING */, 0, 0, -1, 0, 3, 0, iVar0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
		}
	}
}

int func_1705()//Position - 0xBD200
{
	int iVar0;
	if (func_11())
	{
		switch (func_425())
		{
			case 2:
				iVar0 = 4;
				break;
			case 4:
				iVar0 = 10;
				break;
			case 6:
				iVar0 = 18;
				break;
			default:
				iVar0 = 18;
				break;
			}
	}
	return iVar0;
}

void func_1710(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, char* sParam6, int iParam7)//Position - 0xBD3E3
{
	struct<8> Var0;
	char* sVar1;
	if (__LIB_2__::func_132(0) == 0)
	{
		return;
	}
	__LIB_1__::func_910();
	__LIB_1__::func_933();
	StringCopy(&Var0, "HUD_TEAM" /* GXT: TEAM */, 64);
	if (bParam5)
	{
		__LIB_2__::func_131(iParam0, &Var0, -1, iParam7, 5, 1, "", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	__LIB_3__::func_437(iParam1, iParam2, "UW_KLL" /* GXT: KILLS */, -1, 1, 4, 0, 0, 0, 0, 1, 1, 1, 0, 255, 0);
	sVar1 = "HUD_COUNTDOWN" /* GXT: EVENT END */;
	if (!__LIB_1__::func_76(sParam6))
	{
		sVar1 = sParam6;
	}
	__LIB_1__::func_350(iParam3, sVar1, 0, 0, -1, 0, 3, 0, iParam4, 0, 0, 0, iParam4, 0, 0, 0, 0, -1);
}

int func_1714()//Position - 0xBD4E3
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < func_210())
	{
		if (Local_157.f_400[iVar1 /*8*/].f_5 == 18)
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1715()//Position - 0xBD519
{
	if ((func_218() && !func_397()) && (func_1717() || (!func_1716() && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), func_410(func_10(), Local_157.f_71[0], Local_157.f_384, 0), true) < 150f)))
	{
		return 1;
	}
	return 0;
}

int func_1716()//Position - 0xBD57B
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < func_21())
	{
		if (func_1667(iVar0, 1))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_1717()//Position - 0xBD5A7
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < func_21())
	{
		if (!func_23(iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_1719()//Position - 0xBD72D
{
	switch (func_10())
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 6:
		case 9:
			return func_21();
		default:
	}
	return func_422();
}

int func_1720()//Position - 0xBD76D
{
	switch (func_10())
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 6:
		case 9:
			return Local_157.f_595;
		case 10:
		case 8:
			return func_1721();
		default:
	}
	return func_430();
}

int func_1721()//Position - 0xBD7C2
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = func_430();
	if (iVar0 == func_422())
	{
		if (!func_457())
		{
			return iVar0;
		}
		else if (func_2192(11))
		{
			return iVar0;
		}
	}
	if (iVar0 > 0)
	{
		iVar1 = 0;
		while (iVar1 < iVar0)
		{
			if (!__LIB_0__::func_864(&(Local_118.f_51[iVar1 /*2*/])))
			{
				__LIB_0__::func_795(&(Local_118.f_51[iVar1 /*2*/]), 0, 0);
			}
			else if (__LIB_0__::func_937(&(Local_118.f_51[iVar1 /*2*/]), Global_262145.f_20332 /* Tunable: -1914271177 */, 0))
			{
				iVar2++;
			}
			iVar1++;
		}
	}
	return iVar2;
}

int func_1722()//Position - 0xBD850
{
	if (((((((((((func_455() || func_483()) || func_454()) || func_12()) || func_273()) || func_457()) || func_474()) || (func_482() && func_385())) || (func_384() && func_385())) || (func_11() && func_385())) || (func_481() && func_385())) || (func_218() && func_385()))
	{
		return 1;
	}
	return 0;
}

void func_1723()//Position - 0xBD8FF
{
	int iVar0;
	int iVar1;
	if (func_6())
	{
		if (__LIB_0__::func_864(&(Local_157.f_584)))
		{
			if (!__LIB_0__::func_937(&(Local_157.f_584), func_379(), 0))
			{
				iVar0 = (func_379() - __LIB_1__::func_724(&(Local_157.f_584), 0, 0));
				if (iVar0 > 10000)
				{
					iVar1 = 1;
				}
				else
				{
					iVar1 = 6;
				}
				if (iVar0 > 0)
				{
					__LIB_1__::func_350(iVar0, "BYCB_GLBPNG" /* GXT: GLOBAL SIGNAL */, 0, 0, -1, 0, 2, 0, iVar1, 0, 0, 0, iVar1, 0, 0, 0, 0, -1);
				}
			}
		}
	}
}

void func_1725()//Position - 0xBD9BC
{
	int iVar0;
	int iVar1;
	iVar1 = 1;
	if (__LIB_0__::func_864(&(Local_118.f_151)))
	{
		if (__LIB_0__::func_937(&(Local_118.f_151), Local_157.f_385, 0))
		{
			if (__LIB_0__::func_937(&(Local_118.f_151), (Local_157.f_385 + Local_157.f_386), 0))
			{
				if (!__LIB_0__::func_937(&(Local_118.f_151), ((Local_157.f_385 + Local_157.f_386) + Local_157.f_387), 0))
				{
					func_1729();
					iVar0 = (__LIB_1__::func_724(&(Local_118.f_151), 0, 0) - (Local_157.f_385 + Local_157.f_386));
					if (IntToFloat(iVar0) < (IntToFloat(Local_157.f_387) * 0.9f))
					{
						iVar1 = 6;
					}
					__LIB_7__::func_603(iVar0, Local_157.f_387, "SCONTRA_RJAM" /* GXT: LOCK-ON JAMMER */, iVar1, -1, 13, -1082130432, -1082130432, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1, 0, -1, 1);
				}
			}
			else
			{
				func_1728();
				iVar1 = 6;
				__LIB_7__::func_603(0, Local_157.f_385, "SCONTRA_RJAM" /* GXT: LOCK-ON JAMMER */, iVar1, -1, 13, -1082130432, -1082130432, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1, 0, -1, 1);
			}
		}
		else
		{
			func_1727();
			iVar0 = (Local_157.f_385 - __LIB_1__::func_724(&(Local_118.f_151), 0, 0));
			if (iVar0 < (Local_157.f_385 / 4))
			{
				iVar1 = 6;
			}
			__LIB_7__::func_603(iVar0, Local_157.f_385, "SCONTRA_RJAM" /* GXT: LOCK-ON JAMMER */, iVar1, -1, 13, -1082130432, -1082130432, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1, 0, -1, 1);
		}
	}
	else
	{
		func_1726();
		__LIB_7__::func_603(Local_157.f_385, Local_157.f_385, "SCONTRA_RJAM" /* GXT: LOCK-ON JAMMER */, iVar1, -1, 13, -1082130432, -1082130432, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1, 0, -1, 1);
	}
}

void func_1726()//Position - 0xBDBA5
{
	if (BitTest(Local_118.f_6, 0))
	{
		func_1649();
		iLocal_117 = AUDIO::GET_SOUND_ID();
		AUDIO::PLAY_SOUND_FRONTEND(iLocal_117, "Charge_Full", "DLC_Exec_Jammer_Sounds", false);
	}
}

void func_1727()//Position - 0xBDBD1
{
	if (!BitTest(Local_118.f_6, 0))
	{
		if (iLocal_117 != -1)
		{
			AUDIO::RELEASE_SOUND_ID(iLocal_117);
		}
		MISC::SET_BIT(&(Local_118.f_6), 0);
	}
	if (!BitTest(Local_118.f_6, 1))
	{
		iLocal_114 = AUDIO::GET_SOUND_ID();
		AUDIO::PLAY_SOUND_FRONTEND(iLocal_114, "Active", "DLC_Exec_Jammer_Sounds", false);
		MISC::SET_BIT(&(Local_118.f_6), 1);
	}
}

void func_1728()//Position - 0xBDC22
{
	if (BitTest(Local_118.f_6, 1))
	{
		AUDIO::STOP_SOUND(iLocal_114);
		AUDIO::RELEASE_SOUND_ID(iLocal_114);
		MISC::CLEAR_BIT(&(Local_118.f_6), 1);
	}
	if (!BitTest(Local_118.f_6, 2))
	{
		iLocal_115 = AUDIO::GET_SOUND_ID();
		AUDIO::PLAY_SOUND_FRONTEND(iLocal_115, "Active_Empty", "DLC_Exec_Jammer_Sounds", false);
		MISC::SET_BIT(&(Local_118.f_6), 2);
	}
}

void func_1729()//Position - 0xBDC72
{
	if (!BitTest(Local_118.f_6, 3))
	{
		iLocal_116 = AUDIO::GET_SOUND_ID();
		AUDIO::PLAY_SOUND_FRONTEND(iLocal_116, "Charging", "DLC_Exec_Jammer_Sounds", false);
		MISC::SET_BIT(&(Local_118.f_6), 3);
	}
}

int func_1730(bool bParam0)//Position - 0xBDCA4
{
	if (func_1667(bParam0, 1) && func_1732(bParam0))
	{
		return 1;
	}
	if (func_1670(bParam0) && func_1731(bParam0) != __LIB_0__::getMinusOneOrNull())
	{
		return 1;
	}
	return 0;
}

int func_1731(bool bParam0)//Position - 0xBDCE3
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (func_14(bParam0))
	{
		iVar0 = 0;
		while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
			{
				iVar1 = iVar0;
				iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar1);
				if (__LIB_1__::func_693(iVar2, 0, 1))
				{
					iVar3 = PLAYER::GET_PLAYER_PED(iVar2);
					if (!PED::IS_PED_INJURED(iVar3))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(iVar3, false))
						{
							if (PED::GET_VEHICLE_PED_IS_IN(iVar3, false) == NETWORK::NET_TO_VEH(Local_157.f_35[bParam0]))
							{
								return iVar2;
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
	return __LIB_0__::getMinusOneOrNull();
}

int func_1732(bool bParam0)//Position - 0xBDD65
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_35[bParam0]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(func_40(bParam0), false))
		{
			iVar1 = 0;
			while (iVar1 < 9)
			{
				iVar0 = iVar1;
				iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(func_40(bParam0), iVar0, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar2))
				{
					return 1;
				}
				iVar1++;
			}
		}
	}
	return 0;
}

int func_1734()//Position - 0xBE058
{
	int iVar0;
	iVar0 = (20000 - MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_157.f_391)));
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	else if (iVar0 > 20000)
	{
		iVar0 = 20000;
	}
	return iVar0;
}

int func_1746()//Position - 0xBE4C5
{
	int iVar0;
	iVar0 = (func_188() - MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_157.f_3)));
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	else if (iVar0 > func_188())
	{
		iVar0 = func_188();
	}
	return iVar0;
}

void func_1747(bool bParam0)//Position - 0xBE502
{
	bool bVar0;
	int iVar1;
	if (!bParam0)
	{
		func_1782();
		func_1776();
		func_1769();
		func_1766();
		if (func_1696(0))
		{
			bVar0 = false;
			while (bVar0 < func_21())
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_35[bVar0]))
				{
					if (func_1765(bVar0))
					{
						func_1758(bVar0);
					}
				}
				bVar0++;
			}
		}
		else if (func_1757())
		{
			func_1758(-1);
		}
		if (func_481())
		{
			if (!func_2192(19) && __LIB_0__::func_1("SCONTRA_HLP2" /* GXT: WARNING: The tracker has pinged a signal map wide. Your Special Cargo shipment is now visible to all players who can destroy it to earn cash, ammo and RP. */))
			{
				iVar1 = 0;
				while (iVar1 < func_21())
				{
					if (HUD::DOES_BLIP_EXIST(Local_118.f_92[iVar1]))
					{
						HUD::SET_BLIP_FLASHES(Local_118.f_92[iVar1], true);
						HUD::SET_BLIP_FLASH_INTERVAL(Local_118.f_92[iVar1], 250);
						HUD::SET_BLIP_FLASH_TIMER(Local_118.f_92[iVar1], 7000);
					}
					iVar1++;
				}
				func_2165(19);
			}
		}
	}
	else
	{
		func_1748();
	}
}

void func_1748()//Position - 0xBE5E5
{
	func_1755();
	func_1754();
	func_1753();
	func_1752();
	func_1749(0);
}

void func_1749(bool bParam0)//Position - 0xBE602
{
	if (bParam0)
	{
		if (HUD::DOES_BLIP_EXIST(Local_118.f_132))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (!HUD::DOES_BLIP_HAVE_GPS_ROUTE(Local_118.f_132))
				{
					HUD::SET_BLIP_ROUTE(Local_118.f_132, true);
				}
			}
			else if (HUD::DOES_BLIP_HAVE_GPS_ROUTE(Local_118.f_132))
			{
				HUD::SET_BLIP_ROUTE(Local_118.f_132, false);
			}
		}
		else
		{
			Local_118.f_132 = HUD::ADD_BLIP_FOR_COORD(func_1751());
		}
	}
	else
	{
		func_1750();
	}
}

void func_1750()//Position - 0xBE668
{
	if (HUD::DOES_BLIP_EXIST(Local_118.f_132))
	{
		HUD::REMOVE_BLIP(&(Local_118.f_132));
	}
}

Vector3 func_1751()//Position - 0xBE683
{
	return -1156.0415f, -2740.3728f, 12.9525f;
}

void func_1752()//Position - 0xBE69A
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (HUD::DOES_BLIP_EXIST(Local_118.f_133[iVar0]))
		{
			HUD::REMOVE_BLIP(&(Local_118.f_133[iVar0]));
		}
		iVar0++;
	}
}

void func_1753()//Position - 0xBE6CF
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (HUD::DOES_BLIP_EXIST(Local_118.f_119[iVar0]))
		{
			HUD::REMOVE_BLIP(&(Local_118.f_119[iVar0]));
		}
		iVar0++;
	}
}

void func_1754()//Position - 0xBE705
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (HUD::DOES_BLIP_EXIST(Local_118.f_9[iVar0]))
		{
			HUD::REMOVE_BLIP(&(Local_118.f_9[iVar0]));
		}
		if (HUD::DOES_BLIP_EXIST(Local_118.f_30[iVar0]))
		{
			HUD::REMOVE_BLIP(&(Local_118.f_30[iVar0]));
		}
		iVar0++;
	}
}

void func_1755()//Position - 0xBE756
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < func_21())
	{
		func_1756(iVar0);
		iVar0++;
	}
}

void func_1756(bool bParam0)//Position - 0xBE779
{
	if (HUD::DOES_BLIP_EXIST(Local_118.f_92[bParam0]))
	{
		HUD::REMOVE_BLIP(&(Local_118.f_92[bParam0]));
	}
}

int func_1757()//Position - 0xBE79C
{
	bool bVar0;
	bVar0 = false;
	while (bVar0 < func_21())
	{
		if (!func_185(bVar0))
		{
			if (!func_14(bVar0))
			{
				return 0;
			}
		}
		bVar0++;
	}
	return 1;
}

void func_1758(bool bParam0)//Position - 0xBE7D2
{
	bool bVar0;
	struct<3> Var1;
	bool bVar2;
	int iVar3;
	int iVar4;
	if (func_481() && !func_2259(6))
	{
		return;
	}
	bVar2 = func_1715();
	bVar0 = false;
	while (bVar0 < 20)
	{
		if (((!func_1764(bVar0, bParam0) || func_1763()) || func_456(bVar0, bParam0)) || bVar2)
		{
			if (HUD::DOES_BLIP_EXIST(Local_118.f_9[bVar0]))
			{
				HUD::REMOVE_BLIP(&(Local_118.f_9[bVar0]));
			}
			if (HUD::DOES_BLIP_EXIST(Local_118.f_30[bVar0]))
			{
				HUD::REMOVE_BLIP(&(Local_118.f_30[bVar0]));
			}
		}
		else
		{
			iVar3 = -1;
			if (func_1696(1))
			{
				iVar3 = func_1762();
			}
			else if (func_1757())
			{
				iVar3 = func_1761(1);
			}
			if (func_1696(1))
			{
				if (iVar3 != -1)
				{
					iVar4 = Local_157.f_71[iVar3];
				}
				if (iVar4 != -1)
				{
					if (HUD::DOES_BLIP_EXIST(Local_118.f_9[iVar4]))
					{
						Var1 = { func_410(func_10(), iVar4, Local_157.f_384, iVar3) };
						if (!__LIB_0__::func_78(Var1, -1143.777f, -2223.1814f, 12.1958f, 0))
						{
							if (!HUD::DOES_BLIP_HAVE_GPS_ROUTE(Local_118.f_9[iVar4]))
							{
								HUD::SET_BLIP_ROUTE(Local_118.f_9[iVar4], true);
							}
						}
						else if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), Var1, 0) >= 100f)
						{
							if (!HUD::DOES_BLIP_HAVE_GPS_ROUTE(Local_118.f_9[iVar4]))
							{
								HUD::SET_BLIP_ROUTE(Local_118.f_9[iVar4], true);
							}
						}
						else if (HUD::DOES_BLIP_HAVE_GPS_ROUTE(Local_118.f_9[iVar4]))
						{
							HUD::SET_BLIP_ROUTE(Local_118.f_9[iVar4], false);
						}
					}
				}
			}
			if (!HUD::DOES_BLIP_EXIST(Local_118.f_9[bVar0]))
			{
				if (bParam0 == -1)
				{
					bParam0 = func_1760(bVar0);
				}
				Var1 = { func_410(func_10(), bVar0, Local_157.f_384, bParam0) };
				Local_118.f_9[bVar0] = HUD::ADD_BLIP_FOR_COORD(Var1);
				if ((func_337() || func_454()) || func_455())
				{
					Local_118.f_30[bVar0] = HUD::ADD_BLIP_FOR_RADIUS(Var1, func_1759());
					HUD::SET_BLIP_COLOUR(Local_118.f_30[bVar0], 5);
					HUD::SET_BLIP_ALPHA(Local_118.f_30[bVar0], 100);
					HUD::SHOW_HEIGHT_ON_BLIP(Local_118.f_30[bVar0], false);
				}
			}
		}
		bVar0++;
	}
}

float func_1759()//Position - 0xBE9FC
{
	if (func_337())
	{
		return 75f;
	}
	return 25f;
}

int func_1760(bool bParam0)//Position - 0xBEA18
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < func_21())
	{
		if (BitTest(Local_157.f_61[iVar0], bParam0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_1761(int iParam0)//Position - 0xBEA4A
{
	bool bVar0;
	float fVar1;
	float fVar2;
	bool bVar3;
	fVar1 = 9999.99f;
	bVar3 = -1;
	if (func_385())
	{
		bVar0 = false;
		while (bVar0 < func_21())
		{
			if (ENTITY::DOES_ENTITY_EXIST(func_40(bVar0)) && !func_185(bVar0))
			{
				fVar2 = __LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), func_40(bVar0), 1);
				if (fVar2 < fVar1)
				{
					if ((iParam0 || !func_14(bVar0)) || func_1667(bVar0, 1))
					{
						fVar1 = fVar2;
						bVar3 = bVar0;
					}
				}
			}
			bVar0++;
		}
	}
	else
	{
		bVar3 = false;
	}
	return bVar3;
}

int func_1762()//Position - 0xBEAD9
{
	int iVar0;
	int iVar1;
	if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			iVar1 = 0;
			while (iVar1 < func_21())
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_35[iVar1]))
				{
					if (iVar0 == NETWORK::NET_TO_VEH(Local_157.f_35[iVar1]))
					{
						return iVar1;
					}
				}
				iVar1++;
			}
		}
	}
	return -1;
}

int func_1763()//Position - 0xBEB42
{
	if (!func_429())
	{
		if (__LIB_3__::func_417("BYCB_CLY_LSC0" /* GXT: Lose the Cops. */))
		{
			return 1;
		}
	}
	return 0;
}

int func_1764(bool bParam0, int iParam1)//Position - 0xBEB63
{
	int iVar0;
	if (iParam1 >= 0)
	{
		return BitTest(Local_157.f_61[iParam1], bParam0);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < func_21())
		{
			if (BitTest(Local_157.f_61[iVar0], bParam0))
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_1765(bool bParam0)//Position - 0xBEBAC
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_35[bParam0]))
	{
		if (__LIB_2__::func_789(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_157.f_35[bParam0]), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_1766()//Position - 0xBEBE2
{
	if (func_337())
	{
		if ((__LIB_35__::func_486() || func_1696(1)) || func_1757())
		{
			func_1749(0);
		}
		else
		{
			func_1749(1);
		}
	}
}

void func_1769()//Position - 0xBF9D3
{
	bool bVar0;
	int iVar1;
	bVar0 = false;
	while (bVar0 < func_21())
	{
		if (func_41(bVar0))
		{
			if (func_1775(bVar0))
			{
				if (!HUD::DOES_BLIP_EXIST(Local_118.f_92[bVar0]))
				{
					Local_118.f_92[bVar0] = HUD::ADD_BLIP_FOR_ENTITY(func_42(bVar0));
					HUD::SET_BLIP_SPRITE(Local_118.f_92[bVar0], __LIB_19__::func_963());
					HUD::SET_BLIP_COLOUR(Local_118.f_92[bVar0], __LIB_3__::func_603(bVar0));
					HUD::SET_BLIP_PRIORITY(Local_118.f_92[bVar0], 12);
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_118.f_92[bVar0], "BYCB_NM" /* GXT: Special Cargo */);
				}
				if (HUD::GET_BLIP_COLOUR(Local_118.f_92[bVar0]) != __LIB_3__::func_603(bVar0))
				{
					HUD::SET_BLIP_COLOUR(Local_118.f_92[bVar0], __LIB_3__::func_603(bVar0));
				}
				if (!Local_118.f_96[bVar0])
				{
					func_1772(bVar0, 0);
				}
				Local_118.f_96[bVar0] = 1;
			}
			else
			{
				func_1756(bVar0);
				if (Local_118.f_96[bVar0])
				{
					if (!__LIB_19__::func_316())
					{
						if (!func_1765(bVar0))
						{
							if (func_14(bVar0))
							{
								func_1772(bVar0, 255);
							}
						}
					}
				}
				Local_118.f_96[bVar0] = 0;
			}
		}
		else
		{
			func_1756(bVar0);
		}
		bVar0++;
	}
	if (!func_1770() && !func_337())
	{
		iVar1 = func_1761(0);
		if (iVar1 > -1)
		{
			if (!func_1757())
			{
				if (Local_118.f_172 != iVar1)
				{
					if (Local_118.f_172 >= 0)
					{
						if (HUD::DOES_BLIP_EXIST(Local_118.f_92[Local_118.f_172]))
						{
							if (HUD::DOES_BLIP_HAVE_GPS_ROUTE(Local_118.f_92[Local_118.f_172]))
							{
								HUD::SET_BLIP_ROUTE(Local_118.f_92[Local_118.f_172], false);
							}
						}
					}
					if (HUD::DOES_BLIP_EXIST(Local_118.f_92[iVar1]))
					{
						if (!HUD::DOES_BLIP_HAVE_GPS_ROUTE(Local_118.f_92[iVar1]))
						{
							HUD::SET_BLIP_ROUTE(Local_118.f_92[iVar1], true);
						}
					}
					Local_118.f_172 = iVar1;
				}
			}
			else if (Local_118.f_172 > -1)
			{
				if (HUD::DOES_BLIP_EXIST(Local_118.f_92[Local_118.f_172]))
				{
					if (HUD::DOES_BLIP_HAVE_GPS_ROUTE(Local_118.f_92[Local_118.f_172]))
					{
						HUD::SET_BLIP_ROUTE(Local_118.f_92[Local_118.f_172], false);
					}
				}
			}
		}
		else if (Local_118.f_172 > -1)
		{
			if (HUD::DOES_BLIP_EXIST(Local_118.f_92[Local_118.f_172]))
			{
				if (HUD::DOES_BLIP_HAVE_GPS_ROUTE(Local_118.f_92[Local_118.f_172]))
				{
					HUD::SET_BLIP_ROUTE(Local_118.f_92[Local_118.f_172], false);
				}
			}
		}
	}
	else if (Local_118.f_172 > -1)
	{
		if (HUD::DOES_BLIP_EXIST(Local_118.f_92[Local_118.f_172]))
		{
			if (HUD::DOES_BLIP_HAVE_GPS_ROUTE(Local_118.f_92[Local_118.f_172]))
			{
				HUD::SET_BLIP_ROUTE(Local_118.f_92[Local_118.f_172], false);
			}
		}
	}
}

int func_1770()//Position - 0xBFC40
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < func_21())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_35[iVar0]))
		{
			if (__LIB_2__::func_789(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_157.f_35[iVar0]), 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_1772(bool bParam0, int iParam1)//Position - 0xBFC9A
{
	int iVar0;
	int iVar1;
	iVar0 = func_1731(bParam0);
	iVar1 = iVar0;
	if ((iVar0 != __LIB_0__::getMinusOneOrNull() && iVar1 != -1) && HUD::DOES_BLIP_EXIST(Global_2678393[iVar1]))
	{
		HUD::SET_BLIP_ALPHA(Global_2678393[iVar1], iParam1);
	}
}

int func_1775(bool bParam0)//Position - 0xBFCF4
{
	if (func_1765(bParam0))
	{
		return 0;
	}
	if (func_429())
	{
		return 0;
	}
	if (func_185(bParam0))
	{
		return 0;
	}
	if (func_1763())
	{
		return 0;
	}
	if (func_14(bParam0))
	{
		if (!__LIB_19__::func_316())
		{
			return 0;
		}
	}
	return 1;
}

void func_1776()//Position - 0xBFD42
{
	int iVar0;
	int iVar1;
	if (func_399())
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_499[iVar0 /*6*/]))
			{
				iVar1 = NETWORK::NET_TO_VEH(Local_157.f_499[iVar0 /*6*/]);
				if (!ENTITY::IS_ENTITY_DEAD(iVar1, false))
				{
					if (func_401(iVar0))
					{
						if (!HUD::DOES_BLIP_EXIST(Local_118.f_133[iVar0]))
						{
							if (func_1781(iVar0))
							{
								Local_118.f_133[iVar0] = HUD::ADD_BLIP_FOR_ENTITY(iVar1);
								if (func_11())
								{
									HUD::SET_BLIP_SPRITE(Local_118.f_133[iVar0], 432);
									HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_118.f_133[iVar0], "DCONTRA_BLP" /* GXT: Enemy */);
								}
								else
								{
									HUD::SET_BLIP_SPRITE(Local_118.f_133[iVar0], func_1779(iVar1));
								}
								__LIB_2__::func_53(&(Local_118.f_133[iVar0]), 6);
							}
						}
					}
					else if (HUD::DOES_BLIP_EXIST(Local_118.f_133[iVar0]))
					{
						HUD::REMOVE_BLIP(&(Local_118.f_133[iVar0]));
					}
				}
				else if (HUD::DOES_BLIP_EXIST(Local_118.f_133[iVar0]))
				{
					HUD::REMOVE_BLIP(&(Local_118.f_133[iVar0]));
				}
			}
			else if (HUD::DOES_BLIP_EXIST(Local_118.f_133[iVar0]))
			{
				HUD::REMOVE_BLIP(&(Local_118.f_133[iVar0]));
			}
			iVar0++;
		}
	}
}

int func_1779(int iParam0)//Position - 0xC00F2
{
	int iVar0;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (VEHICLE::IS_THIS_MODEL_A_BIKE(iVar0))
	{
		return 130;
	}
	if (VEHICLE::IS_THIS_MODEL_A_HELI(iVar0))
	{
		if (func_1780(iParam0))
		{
			return 64;
		}
		else
		{
			return 353;
		}
	}
	if (VEHICLE::IS_THIS_MODEL_A_PLANE(iVar0))
	{
		return 423;
	}
	return 270;
}

int func_1780(int iParam0)//Position - 0xC0142
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < func_21())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_35[iVar0]))
		{
			if (iParam0 == NETWORK::NET_TO_VEH(Local_157.f_35[iVar0]))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_1781(int iParam0)//Position - 0xC0186
{
	if (func_12())
	{
		return BitTest(Local_157.f_549, iParam0);
	}
	return 1;
}

void func_1782()//Position - 0xC01A2
{
	bool bVar0;
	int iVar1;
	if (func_212())
	{
		if (func_1787() || !func_1786())
		{
			bVar0 = false;
			while (bVar0 < func_210())
			{
				if (func_1785(bVar0))
				{
					if (func_207(bVar0))
					{
						if (func_1784(bVar0))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(func_197(bVar0), false))
							{
								iVar1 = PED::GET_VEHICLE_PED_IS_USING(func_197(bVar0));
								if (!func_1783(iVar1))
								{
									if (!HUD::DOES_BLIP_EXIST(Local_118.f_119[bVar0]) || (HUD::DOES_BLIP_EXIST(Local_118.f_119[bVar0]) && HUD::GET_BLIP_SPRITE(Local_118.f_119[bVar0]) != func_1779(iVar1)))
									{
										Local_118.f_119[bVar0] = HUD::ADD_BLIP_FOR_ENTITY(func_197(bVar0));
										HUD::SET_BLIP_SPRITE(Local_118.f_119[bVar0], func_1779(iVar1));
										__LIB_2__::func_53(&(Local_118.f_119[bVar0]), 6);
									}
								}
								else if (HUD::DOES_BLIP_EXIST(Local_118.f_119[bVar0]))
								{
									HUD::REMOVE_BLIP(&(Local_118.f_119[bVar0]));
								}
							}
							else if (!HUD::DOES_BLIP_EXIST(Local_118.f_119[bVar0]) || ((HUD::DOES_BLIP_EXIST(Local_118.f_119[bVar0]) && HUD::GET_BLIP_SPRITE(Local_118.f_119[bVar0]) != 270) && !func_11()))
							{
								if (!HUD::DOES_BLIP_EXIST(Local_118.f_119[bVar0]))
								{
									Local_118.f_119[bVar0] = HUD::ADD_BLIP_FOR_ENTITY(func_197(bVar0));
								}
								if (func_11())
								{
									HUD::SET_BLIP_SPRITE(Local_118.f_119[bVar0], 432);
									HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_118.f_119[bVar0], "DCONTRA_BLP" /* GXT: Enemy */);
								}
								else
								{
									HUD::SET_BLIP_SPRITE(Local_118.f_119[bVar0], 270);
								}
								__LIB_2__::func_53(&(Local_118.f_119[bVar0]), 6);
								HUD::SET_BLIP_SCALE(Local_118.f_119[bVar0], 0.7f);
							}
						}
						else if (HUD::DOES_BLIP_EXIST(Local_118.f_119[bVar0]))
						{
							HUD::REMOVE_BLIP(&(Local_118.f_119[bVar0]));
						}
					}
					else if (HUD::DOES_BLIP_EXIST(Local_118.f_119[bVar0]))
					{
						HUD::REMOVE_BLIP(&(Local_118.f_119[bVar0]));
					}
				}
				bVar0++;
			}
		}
	}
}

int func_1783(int iParam0)//Position - 0xC0399
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_499[iVar0 /*6*/]))
		{
			iVar1 = NETWORK::NET_TO_VEH(Local_157.f_499[iVar0 /*6*/]);
			if (iVar1 == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_1784(bool bParam0)//Position - 0xC03E0
{
	if (PED::IS_PED_INJURED(func_197(bParam0)))
	{
		return 0;
	}
	if (func_269())
	{
		if (func_37(10))
		{
			if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), func_367(), 0) > 100f)
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_1785(int iParam0)//Position - 0xC0424
{
	switch (func_10())
	{
		case 13:
			switch (iParam0)
			{
				case 9:
				case 10:
					return 0;
				default:
			}
			break;
		case 5:
		case 11:
			return 1;
			break;
	}
	return 1;
}

int func_1786()//Position - 0xC0469
{
	if (func_10() == 13 || func_10() == 9)
	{
		return 1;
	}
	return 0;
}

int func_1787()//Position - 0xC048D
{
	if (func_37(6))
	{
		return 1;
	}
	return 0;
}

void func_1788(bool bParam0)//Position - 0xC04A2
{
	bool bVar0;
	bVar0 = false;
	if (!func_11())
	{
		if (func_429() || bParam0)
		{
			bVar0 = true;
		}
	}
	else if (bParam0)
	{
		bVar0 = true;
	}
	else if (func_429())
	{
		if (Local_157.f_544 >= IntToFloat(func_425()))
		{
			if (func_397())
			{
				bVar0 = true;
			}
		}
	}
	if (bVar0)
	{
		if (func_457())
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) != 0)
			{
				if (!__LIB_3__::func_417("BYCB_CLY_LSC0" /* GXT: Lose the Cops. */))
				{
					__LIB_3__::func_198("BYCB_CLY_LSC0" /* GXT: Lose the Cops. */, 0);
				}
			}
			else if (func_1834())
			{
				if (!__LIB_3__::func_417("SCONTRA_VEH_LC" /* GXT: Wait for your Organization to lose the cops. */))
				{
					__LIB_3__::func_198("SCONTRA_VEH_LC" /* GXT: Wait for your Organization to lose the cops. */, 0);
				}
			}
			else
			{
				func_1748();
				__LIB_3__::func_0();
			}
		}
		else
		{
			func_1748();
			__LIB_3__::func_0();
		}
	}
	else
	{
		func_1809();
		if (func_37(10))
		{
			if (__LIB_4__::func_862(23))
			{
				__LIB_4__::func_861(23);
			}
			if (__LIB_4__::func_862(32))
			{
				__LIB_4__::func_861(32);
			}
		}
		else if (!func_2192(25))
		{
			if (!__LIB_1__::func_515())
			{
				if (func_1808())
				{
					__LIB_1__::func_928(32);
				}
				else
				{
					__LIB_1__::func_928(23);
				}
				if (func_1807() && __LIB_0__::func_796(PLAYER::PLAYER_ID()))
				{
					__LIB_1__::func_928(49);
				}
				func_2165(25);
			}
		}
		if (func_1715())
		{
			if (!__LIB_3__::func_417("SCONTRA_AIRCAE" /* GXT: Take out the ~r~enemies. */))
			{
				__LIB_3__::func_198("SCONTRA_AIRCAE" /* GXT: Take out the ~r~enemies. */, 0);
			}
		}
		else if (func_1806())
		{
			if (!__LIB_3__::func_417("BYCB_CLY_LSC0" /* GXT: Lose the Cops. */))
			{
				__LIB_3__::func_198("BYCB_CLY_LSC0" /* GXT: Lose the Cops. */, 0);
			}
		}
		else if (func_1700())
		{
			if ((!Global_2789736 && !__LIB_1__::func_501()) && !__LIB_4__::func_862(28))
			{
				Global_2789736 = 1;
				__LIB_1__::func_928(28);
			}
			if (!func_337())
			{
				func_1802();
			}
			if (func_1716())
			{
				if ((func_273() || func_457()) || func_12())
				{
					if (ENTITY::IS_ENTITY_IN_AIR(func_1801()))
					{
						__LIB_1__::func_928(27);
					}
				}
				if ((((func_457() && Local_157.f_582 == 1) && func_1770()) && func_458(func_1762()) == 5) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
				{
					if (!__LIB_3__::func_417("SCONTRA_DROP_B" /* GXT: Help deliver the ~b~Special Cargo. */))
					{
						__LIB_3__::func_198("SCONTRA_DROP_B" /* GXT: Help deliver the ~b~Special Cargo. */, 0);
					}
				}
				else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) != 0 && func_457())
				{
					if (!__LIB_3__::func_417("BYCB_CLY_LSC0" /* GXT: Lose the Cops. */))
					{
						__LIB_3__::func_198("BYCB_CLY_LSC0" /* GXT: Lose the Cops. */, 0);
					}
				}
				else if (!__LIB_3__::func_417(func_1799(func_1716())))
				{
					__LIB_3__::func_198(func_1799(func_1716()), 0);
				}
			}
			else if (!func_457() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
			{
				if (func_1757())
				{
					if (!__LIB_3__::func_417(func_1799(func_1716())))
					{
						__LIB_19__::func_883(func_1799(func_1716()), "SCONTRA_CTRAS" /* GXT: Special Cargo */, 9, 0);
					}
				}
				else if (!__LIB_3__::func_417(func_1791()))
				{
					__LIB_3__::func_198(func_1791(), 0);
				}
			}
			else if (func_457())
			{
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) != 0)
				{
					if (!__LIB_3__::func_417("BYCB_CLY_LSC0" /* GXT: Lose the Cops. */))
					{
						__LIB_3__::func_198("BYCB_CLY_LSC0" /* GXT: Lose the Cops. */, 0);
					}
				}
			}
		}
		else if (!func_11())
		{
			if (func_1789())
			{
				if (!__LIB_3__::func_417(func_1791()))
				{
					__LIB_3__::func_198(func_1791(), 0);
				}
			}
			else if (!__LIB_3__::func_417(func_1791()))
			{
				__LIB_3__::func_198(func_1791(), 0);
			}
		}
		else if (Local_157.f_56 >= func_422())
		{
			if (!__LIB_3__::func_417("SCONTRA_DEF" /* GXT: Take out the ~r~enemies. */))
			{
				__LIB_3__::func_198("SCONTRA_DEF" /* GXT: Take out the ~r~enemies. */, 0);
			}
		}
		else if (!__LIB_3__::func_417(func_1791()))
		{
			__LIB_3__::func_198(func_1791(), 0);
		}
	}
}

int func_1789()//Position - 0xC082F
{
	if (func_1790() != __LIB_0__::getMinusOneOrNull() && func_1790() != PLAYER::PLAYER_ID())
	{
		return 1;
	}
	return 0;
}

int func_1790()//Position - 0xC0856
{
	int iVar0;
	iVar0 = __LIB_0__::getMinusOneOrNull();
	if (Local_157.f_393 != -1)
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(Local_157.f_393);
	}
	return iVar0;
}

char* func_1791()//Position - 0xC087C
{
	if (func_337())
	{
		if (func_457() && func_1757())
		{
			return "SCONTRA_VEH_LC" /* GXT: Wait for your Organization to lose the cops. */;
		}
		else if (func_385())
		{
			if (__LIB_35__::func_486() || func_424())
			{
				return "SCONTRA_VEH_1b" /* GXT: Enter a ~HUD_COLOUR_BLUE~plane. */;
			}
			else
			{
				return "SCONTRA_DROP_LP" /* GXT: Go to ~y~LSIA ~s~and enter a ~b~plane. */;
			}
		}
		else if (__LIB_35__::func_486() || func_424())
		{
			return "SCONTRA_VEH_1" /* GXT: Enter the ~HUD_COLOUR_BLUE~plane. */;
		}
		else
		{
			return "SCONTRA_DROP_LS" /* GXT: Go to ~y~LSIA ~s~and enter the ~b~plane. */;
		}
	}
	if (func_274())
	{
		return "SCONTRA_VEH_2" /* GXT: Enter the ~HUD_COLOUR_BLUE~boat. */;
	}
	if (func_1792())
	{
		if (func_1789())
		{
			return "SCONTRA_RP_PR" /* GXT: Protect the ~b~vehicle~s~ whilst it is repaired. */;
		}
		else
		{
			return "SCONTRA_VEH_R" /* GXT: Repair the ~HUD_COLOUR_BLUE~truck. */;
		}
	}
	if (func_385())
	{
		return "SCONTRA_VEHb" /* GXT: Enter a ~HUD_COLOUR_BLUE~truck. */;
	}
	return "SCONTRA_VEH" /* GXT: Enter the ~HUD_COLOUR_BLUE~truck. */;
}

bool func_1792()//Position - 0xC093C
{
	return func_37(5);
}

char* func_1799(bool bParam0)//Position - 0xC0ACE
{
	char* sVar0;
	if (bParam0)
	{
		if (func_483())
		{
			if (func_1808())
			{
				sVar0 = "SCONTRA_FLY_DP" /* GXT: Fly low and deliver Special Cargo to the ~y~drop-offs. */;
			}
			else
			{
				sVar0 = "SCONTRA_FLY_D" /* GXT: Fly low and deliver the Special Cargo to the ~y~drop-off. */;
			}
		}
		else if (func_337() || func_274())
		{
			if ((func_457() && func_1770()) && Local_157.f_67[func_1800()] == -1)
			{
				sVar0 = "SCONTRA_DROPR" /* GXT: Deliver the Special Cargo to the ~y~restricted area. */;
			}
			else if (func_1808())
			{
				sVar0 = "SCONTRA_DROP_1P" /* GXT: Deliver the Special Cargo to the ~y~drop-offs. */;
			}
			else
			{
				sVar0 = "SCONTRA_DROP_1" /* GXT: Deliver the Special Cargo to the ~y~drop-off. */;
			}
		}
		else if (func_481() && !func_2259(6))
		{
			sVar0 = "SCONTRA_DROP_T" /* GXT: Use Trackify to search for the drop-off. */;
		}
		else if (func_1808())
		{
			sVar0 = "SCONTRA_DROPP" /* GXT: Deliver the Special Cargo to the ~y~drop-offs. */;
		}
		else
		{
			sVar0 = "SCONTRA_DROP" /* GXT: Deliver the Special Cargo to the ~y~drop-off. */;
		}
	}
	else if (func_481() && !func_2259(6))
	{
		sVar0 = "SCONTRA_HLP_T" /* GXT: Use Trackify to help deliver the ~a~~s~ to the buyer. */;
	}
	else if (func_1808())
	{
		sVar0 = "SCONTRA_HLP_DP" /* GXT: Help deliver the ~a~~s~ to the ~y~drop-offs. */;
	}
	else
	{
		sVar0 = "SCONTRA_HLP_D" /* GXT: Help deliver the ~a~~s~ to the ~y~drop-off. */;
	}
	return sVar0;
}

int func_1800()//Position - 0xC0BC2
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < func_21())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_35[iVar0]))
		{
			if (__LIB_2__::func_789(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_157.f_35[iVar0]), 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_1801()//Position - 0xC0C0E
{
	int iVar0;
	int iVar1;
	if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			iVar1 = 0;
			while (iVar1 < func_21())
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_35[iVar1]))
				{
					if (iVar0 == NETWORK::NET_TO_VEH(Local_157.f_35[iVar1]))
					{
						return iVar0;
					}
				}
				iVar1++;
			}
		}
	}
	return -1;
}

void func_1802()//Position - 0xC0C77
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	HUD::GET_HUD_COLOUR(12, &iVar0, &iVar1, &iVar2, &uVar3);
	if (!func_454() && !func_455())
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_VEHICLE")) != 0 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_VEHICLE")) != 1)
			{
				if (func_1696(1))
				{
					iVar4 = func_1805();
					if (iVar4 >= 0)
					{
						GRAPHICS::DRAW_MARKER(1, func_410(func_10(), Local_157.f_71[iVar4], Local_157.f_384, func_1762()), 0f, 0f, 0f, 0f, 0f, 0f, func_1804(), iVar0, iVar1, iVar2, func_1803(uVar3), false, false, 2, false, 0, 0, false);
					}
				}
			}
		}
	}
}

int func_1803(var uParam0)//Position - 0xC0D30
{
	if (func_337())
	{
		return 25;
	}
	return uParam0;
}

Vector3 func_1804()//Position - 0xC0D46
{
	if (func_337())
	{
		return 150f, 150f, 150f;
	}
	if (func_274())
	{
		return 18f, 18f, 2f;
	}
	return 5f, 5f, 0.5f;
}

int func_1805()//Position - 0xC0D83
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < func_21())
	{
		if (func_1668(iVar0, 1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_1806()//Position - 0xC0DB0
{
	return func_38(NETWORK::PARTICIPANT_ID(), 6);
}

bool func_1807()//Position - 0xC0DC1
{
	return ((func_7() == 2 || func_7() == 3) || func_2257() == 1);
}

bool func_1808()//Position - 0xC0DE7
{
	if (((func_422() == 1 || func_218()) || func_482()) || func_11())
	{
		return 0;
	}
	return func_430() < (func_422() - 1);
}

void func_1809()//Position - 0xC0E25
{
	bool bVar0;
	if (!BitTest(Local_118.f_3, 3))
	{
		if (func_274() || func_337())
		{
			if (!__LIB_1__::func_501() || func_2192(29))
			{
				if (!__LIB_1__::func_515() && !__LIB_0__::func_77(0))
				{
					if (__LIB_3__::func_589(82, "SCONTRA_TXT_21" /* GXT: Hello, as requested the goods have been moved to the specified delivery vehicle. */, 1, 0, 0, 0, 0, 1, 0, 1))
					{
						MISC::SET_BIT(&(Local_118.f_3), 3);
					}
				}
			}
		}
		else
		{
			MISC::SET_BIT(&(Local_118.f_3), 3);
		}
	}
	else
	{
		if (!__LIB_0__::func_796(PLAYER::PLAYER_ID()))
		{
			if (!BitTest(Local_118.f_3, 1))
			{
				if (func_337())
				{
					if (__LIB_3__::func_589(__LIB_35__::func_446(1), "SCONTRA_TXT_20" /* GXT: Suit up: we're making a drop and you're the backup. Keep the CEO and the merchandise safe. */, 1, 0, 0, 0, 0, 1, 0, 1))
					{
						MISC::SET_BIT(&(Local_118.f_3), 1);
					}
				}
				else if (func_385())
				{
					if (__LIB_3__::func_589(__LIB_35__::func_446(1), "SCONTRA_TXT_4P" /* GXT: Your CEO is making a sale. If you want to earn your keep get over there and make sure it goes smoothly. */, 1, 0, 0, 0, 0, 1, 0, 1))
					{
						MISC::SET_BIT(&(Local_118.f_3), 1);
					}
				}
				else if (__LIB_3__::func_589(__LIB_35__::func_446(1), "SCONTRA_TXT_4" /* GXT: The CEO is making a delivery. You know what to do - if anything happens to the goods we lose big. */, 1, 0, 0, 0, 0, 1, 0, 1))
				{
					MISC::SET_BIT(&(Local_118.f_3), 1);
				}
			}
		}
		if (!BitTest(Local_118.f_3, 2))
		{
			switch (func_10())
			{
				case 12:
					if (Local_157.f_544 > 0f)
					{
						if (__LIB_3__::func_589(__LIB_35__::func_446(1), "SCONTRA_TXT_19" /* GXT: Enemies inbound – hold them off until the sale is complete. */, 1, 0, 0, 0, 0, 1, 0, 1))
						{
							MISC::SET_BIT(&(Local_118.f_3), 2);
						}
					}
					break;
				case 13:
					if (func_37(22))
					{
						if (__LIB_3__::func_589(__LIB_35__::func_446(1), "SCONTRA_TXT_18" /* GXT: Someone leaked the location of the boat. You'll need to get rid of them, or grab the boat and get out of there. Your call. */, 1, 0, 0, 0, 0, 1, 0, 1))
						{
							MISC::SET_BIT(&(Local_118.f_3), 2);
						}
					}
					break;
				case 9:
					if (func_1815())
					{
						if (func_397())
						{
							MISC::SET_BIT(&(Local_118.f_3), 2);
						}
						else if (__LIB_3__::func_589(__LIB_35__::func_446(1), "SCONTRA_TXT_13" /* GXT: Some locals are all set up to give you a rough landing. You'll need to deal with them before we can make the sale. */, 1, 0, 0, 0, 0, 1, 0, 1))
						{
							MISC::SET_BIT(&(Local_118.f_3), 2);
						}
					}
					break;
				case 7:
					if (func_1716())
					{
						if (__LIB_3__::func_589(__LIB_35__::func_446(1), "SCONTRA_TXT_11" /* GXT: Law enforcement put out a radar sweep for our team - stay low! */, 1, 0, 0, 0, 0, 1, 0, 1))
						{
							MISC::SET_BIT(&(Local_118.f_3), 2);
						}
					}
					break;
				case 3:
					if (func_424())
					{
						if (__LIB_3__::func_589(__LIB_35__::func_446(1), "SCONTRA_TXT_10" /* GXT: The buyer has put up a bonus on this one. Deliver the Special Cargo in mint condition to receive the most cash. Drive carefully! */, 1, 0, 0, 0, 0, 1, 0, 1))
						{
							MISC::SET_BIT(&(Local_118.f_3), 2);
						}
					}
					break;
				case 4:
					if (func_424())
					{
						if (func_1810())
						{
							if (__LIB_3__::func_589(__LIB_35__::func_446(1), "SCONTRA_TXT_12" /* GXT: The buyer is being extra cautious with this one. They haven't given us their exact location, but pinged a Trackify signal for you to follow. Happy hunting! */, 1, 0, 0, 0, 0, 1, 0, 1))
							{
								MISC::SET_BIT(&(Local_118.f_3), 2);
							}
						}
					}
					break;
				case 6:
					if (Local_157.f_56 >= func_422())
					{
						if (__LIB_3__::func_589(__LIB_35__::func_446(1), "SCONTRA_TXT_14" /* GXT: Stay sharp, I'm seeing hostiles coming in fast. Defend the goods at all costs. */, 1, 0, 0, 0, 0, 1, 0, 1))
						{
							MISC::SET_BIT(&(Local_118.f_3), 2);
						}
					}
					break;
				case 11:
					bVar0 = false;
					while (bVar0 < 3)
					{
						if (BitTest(Local_157.f_549, bVar0))
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_499[bVar0 /*6*/]))
							{
								if (__LIB_0__::func_939(Local_157.f_499[bVar0 /*6*/]))
								{
									if (__LIB_3__::func_589(__LIB_35__::func_446(1), "SCONTRA_TXT_15" /* GXT: We have company, making straight for our... company! Take them out. */, 1, 0, 0, 0, 0, 1, 0, 1))
									{
										MISC::SET_BIT(&(Local_118.f_3), 2);
									}
								}
							}
						}
						bVar0++;
					}
					break;
				case 10:
					if (Local_157.f_67[0] == -1 && func_424())
					{
						if (__LIB_3__::func_589(__LIB_35__::func_446(1), "SCONTRA_TXT_17" /* GXT: Turns out the last drop is over a restricted area. Get ready for heavy resistance - and expect law enforcement. */, 1, 0, 0, 0, 0, 1, 0, 1))
						{
							MISC::SET_BIT(&(Local_118.f_3), 2);
						}
					}
					break;
				case 2:
					if (Local_118.f_101 != -1)
					{
						if (!BitTest(Global_1853348[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*834*/].f_833, 17))
						{
							if (__LIB_3__::func_589(__LIB_35__::func_446(1), "SCONTRA_TXT_8" /* GXT: Law enforcement had eyes on that drop. Lose them before the buyer freaks. */, 1, 0, 0, 0, 0, 1, 0, 1))
							{
								MISC::SET_BIT(&(Local_118.f_3), 2);
							}
						}
						else
						{
							MISC::SET_BIT(&(Local_118.f_3), 2);
						}
					}
					break;
				case 5:
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_499[0 /*6*/]) || NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_499[1 /*6*/]))
					{
						if (__LIB_3__::func_589(__LIB_35__::func_446(1), "SCONTRA_TXT_16" /* GXT: I've seen how these guys operate before. I suggest taking them out – shaking them won't be easy. */, 1, 0, 0, 0, 0, 1, 0, 1))
						{
							MISC::SET_BIT(&(Local_118.f_3), 2);
						}
					}
					break;
				}
			}
	}
}

int func_1810()//Position - 0xC1211
{
	if (func_1813() || func_1811())
	{
		return 1;
	}
	return 0;
}

int func_1811()//Position - 0xC122F
{
	return __LIB_35__::func_487(Local_157.f_30, 0);
}

int func_1813()//Position - 0xC1255
{
	return __LIB_35__::func_477(Local_157.f_30);
}

int func_1815()//Position - 0xC1278
{
	if ((func_37(19) || func_37(20)) || func_37(21))
	{
		return 1;
	}
	return 0;
}

int func_1834()//Position - 0xC244E
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
		{
			iVar2 = iVar0;
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar2);
			if (__LIB_1__::func_693(iVar1, 0, 1))
			{
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(iVar1) != 0)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_1836()//Position - 0xC2505
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	func_1963();
	func_1960();
	func_1958();
	func_1949();
	func_1945();
	func_1943();
	func_1937();
	func_1934();
	func_1852();
	func_1849();
	func_1844();
	switch (func_1843())
	{
		case 0:
			func_570(0, 0);
			func_1842(1);
			break;
		case 1:
			if (func_1700() || func_429())
			{
				func_1842(2);
			}
			break;
		case 2:
			if (func_1717())
			{
				if (func_1841())
				{
					iVar1 = 0;
					while (iVar1 < func_21())
					{
						func_1840(iVar1, 0);
						func_1839(iVar1, 1);
						iVar1++;
					}
					func_1842(3);
					func_520(4);
				}
			}
			else if (func_1700() || func_429())
			{
				if (func_429())
				{
					if (func_457() && !func_2192(11))
					{
						if (!__LIB_0__::func_864(&(Local_118.f_149)))
						{
							__LIB_0__::func_795(&(Local_118.f_149), 0, 0);
							func_1838();
						}
						else if (__LIB_0__::func_937(&(Local_118.f_149), 1000, 0) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
						{
							func_2165(11);
						}
					}
					else if (!func_11())
					{
						if (!func_337() && !func_274())
						{
							iVar2 = 0;
							while (iVar2 < func_21())
							{
								func_1840(iVar2, 0);
								func_1839(iVar2, 1);
								iVar2++;
							}
						}
						func_1837();
						func_1842(3);
					}
					else
					{
						if (!func_2192(22))
						{
							iVar3 = 0;
							while (iVar3 < func_21())
							{
								func_1840(iVar3, 0);
								func_1839(iVar3, 1);
								iVar3++;
							}
							func_2165(22);
						}
						if (Local_157.f_544 >= IntToFloat(func_425()))
						{
							if (func_397())
							{
								func_1837();
								func_1842(3);
							}
						}
					}
				}
				else if (!func_337() && !func_274())
				{
					if (func_1696(0))
					{
						bVar0 = func_1762();
						if (func_185(bVar0))
						{
							func_1840(bVar0, 0);
							func_1839(bVar0, 1);
						}
					}
				}
			}
			else
			{
				func_1842(1);
			}
			break;
		case 3:
			__LIB_4__::func_861(24);
			break;
	}
}

void func_1837()//Position - 0xC2717
{
	if (func_523())
	{
		switch (func_10())
		{
			case 9:
				func_520(4);
				break;
			case 12:
				func_520(7);
				break;
			case 13:
				func_520(11);
				break;
			case 2:
				func_520(16);
				break;
			case 3:
				func_520(16);
				break;
			case 4:
				func_520(16);
				break;
			case 0:
				func_520(16);
				break;
			case 11:
				func_520(23);
				break;
			case 5:
				func_520(29);
				break;
			case 6:
				func_520(32);
				break;
			case 1:
				func_520(16);
				break;
			case 7:
				func_520(16);
				break;
			default:
				func_520(16);
				break;
			}
	}
}

void func_1838()//Position - 0xC27EA
{
	if (((((((__LIB_0__::func_1("SCONTRA_CDROP" /* GXT: Press ~INPUT_FRONTEND_RIGHT~ to drop Special Cargo. */) || __LIB_0__::func_1("SCONTRA_RP_H1" /* GXT: Press ~INPUT_FRONTEND_RIGHT~ to repair the vehicle. */)) || __LIB_0__::func_1("SCONTRA_RP_H2" /* GXT: The vehicle has broken down. Go to the front of the vehicle to repair it. */)) || __LIB_0__::func_1("SCONTRA_HLP11" /* GXT: The cops can detect you at this height. Fly as low to the ground as possible. */)) || __LIB_0__::func_1("SCONTRA_HLP10" /* GXT: As the passenger, you have access to the missile lock-on jammer. Use this to temporarily protect the vehicle from homing missile lock-on. */)) || __LIB_0__::func_1("SCONTRA_HLP9" /* GXT: The missile lock-on jammer is available if you have a passenger. Your passenger can use this to temporarily prevent homing missile lock-on. */)) || __LIB_0__::func_1("SCONTRA_HLP12" /* GXT: Trackify allows you to locate a target in the world. Use the information it provides to track down the buyer. It can be launched from the bottom right of the phone app menu. */)) || __LIB_0__::func_1("SCONTRA_HLP8" /* GXT: Press ~INPUT_FRONTEND_RIGHT~ to drop Special Cargo when you are flying above a drop-off. */))
	{
		HUD::CLEAR_HELP(true);
	}
}

void func_1839(bool bParam0, bool bParam1)//Position - 0xC286C
{
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(func_42(bParam0)))
	{
		if (bParam1)
		{
			if (func_41(bParam0))
			{
				if (VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(func_40(bParam0)) != 2)
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(func_40(bParam0), 2);
				}
			}
		}
		else if (func_41(bParam0))
		{
			if (VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(func_40(bParam0)) != 1)
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(func_40(bParam0), 1);
			}
		}
	}
}

void func_1840(bool bParam0, int iParam1)//Position - 0xC28CD
{
	if ((func_1668(bParam0, 0) && (!func_337() || iParam1)) && !func_274())
	{
		TASK::TASK_LEAVE_VEHICLE(PLAYER::PLAYER_PED_ID(), func_40(bParam0), 0);
	}
}

int func_1841()//Position - 0xC290A
{
	bool bVar0;
	bVar0 = false;
	while (bVar0 < func_210())
	{
		if (func_207(bVar0))
		{
			if (!ENTITY::IS_ENTITY_DEAD(func_197(bVar0), false))
			{
				return 0;
			}
		}
		bVar0++;
	}
	return 1;
}

void func_1842(int iParam0)//Position - 0xC2944
{
	Local_158[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/] = iParam0;
}

int func_1843()//Position - 0xC2957
{
	return Local_158[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/];
}

void func_1844()//Position - 0xC2968
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	if (func_1696(0))
	{
		iVar0 = func_1762();
	}
	else
	{
		iVar0 = func_1761(1);
	}
	if (iVar0 != -1)
	{
		bVar2 = Local_157.f_71[iVar0];
		if (bVar2 != -1)
		{
			if (func_337() && BitTest(Local_157.f_61[iVar0], bVar2))
			{
				func_1846(bVar2, func_410(func_10(), bVar2, Local_157.f_384, iVar0));
			}
			else
			{
				bVar3 = true;
				iVar1 = 0;
				if (!BitTest(Local_157.f_61[iVar0], bVar2))
				{
					iVar1 = 0;
					while (iVar1 < func_21())
					{
						if (BitTest(Local_157.f_61[iVar1], bVar2))
						{
							bVar3 = false;
						}
						iVar1++;
					}
				}
				else
				{
					bVar3 = false;
				}
				if (bVar3)
				{
					func_1845(bVar2);
				}
			}
		}
	}
}

void func_1845(bool bParam0)//Position - 0xC2A20
{
	if (Local_118.f_173[bParam0] != 0)
	{
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_118.f_173[bParam0]))
		{
			GRAPHICS::STOP_PARTICLE_FX_LOOPED(Local_118.f_173[bParam0], false);
		}
	}
}

void func_1846(int iParam0, struct<3> Param1)//Position - 0xC2A50
{
	bool bVar0;
	if (__LIB_35__::func_478())
	{
		if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_118.f_173[iParam0]))
		{
			bVar0 = true;
			GRAPHICS::USE_PARTICLE_FX_ASSET("scr_lowrider");
			Local_118.f_173[iParam0] = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_lowrider_flare", Param1, 0f, 0f, -0.2f, __LIB_19__::func_410(), false, false, false, bVar0);
			GRAPHICS::SET_PARTICLE_FX_LOOPED_COLOUR(Local_118.f_173[iParam0], 0.8f, 0.18f, 0.19f, bVar0);
		}
	}
}

void func_1849()//Position - 0xC2AE8
{
	if (__LIB_1__::func_613(PLAYER::PLAYER_ID()) != 0)
	{
		if (func_1716())
		{
			__LIB_19__::func_288(0);
		}
	}
	else if (!func_1716())
	{
		__LIB_19__::func_288(-1);
	}
}

void func_1852()//Position - 0xC2B59
{
	var uVar0;
	if (__LIB_1__::func_501())
	{
		if (((__LIB_1__::func_864(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())) || NETWORK::IS_PLAYER_IN_CUTSCENE(PLAYER::PLAYER_ID())) || __LIB_9__::func_362())
		{
			return;
		}
		if (!func_2192(28))
		{
			if (__LIB_11__::func_813(1))
			{
				__LIB_0__::func_222(&uLocal_164, 3, 0, "EXECPA_MALE", 0, 1);
			}
			else
			{
				__LIB_0__::func_222(&uLocal_164, 2, 0, "EXECPA_FEMALE", 0, 1);
			}
			func_2165(28);
		}
		else if (!func_2192(29))
		{
			if (__LIB_3__::func_446(0, 1, 0, 1))
			{
				MISC::SET_BIT(&uVar0, 4);
				if (func_1853(&uLocal_164, __LIB_35__::func_446(1), "EXCALAU", func_1930(), uVar0, 0))
				{
					func_2165(29);
				}
			}
		}
	}
}

int func_1853(var uParam0, int iParam1, char* sParam2, char* sParam3, var uParam4, int iParam5)//Position - 0xC2C18
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	if (__LIB_12__::func_771())
	{
		return 0;
	}
	if (__LIB_3__::func_33())
	{
		return 0;
	}
	sVar0 = 0;
	bVar1 = false;
	iVar2 = -99;
	return func_1854(uParam0, iParam1, sParam2, sParam3, 1, iParam5, uParam4, sVar0, bVar1, iVar2, sVar0, sVar0, -1);
}

int func_1854(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, var uParam6, char* sParam7, bool bParam8, int iParam9, char* sParam10, char* sParam11, int iParam12)//Position - 0xC2C5D
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return 0;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam2) > 7)
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		return 0;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam3) > 15)
	{
		return 0;
	}
	iVar0 = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
	iVar1 = __LIB_3__::func_32(sParam2, sParam3);
	iVar2 = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
	{
		iVar2 = MISC::GET_HASH_KEY(sParam7);
	}
	if (__LIB_12__::func_772(iVar0, iVar1, iVar2))
	{
		return 1;
	}
	if (!__LIB_3__::func_421(uParam6))
	{
		return 0;
	}
	if (__LIB_3__::func_585(iVar0, iVar1, iVar2))
	{
		if (__LIB_3__::func_27())
		{
			return 0;
		}
		__LIB_3__::func_26();
		return func_1861(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, uParam6, sParam7, bParam8, iParam9, sParam10, sParam11);
	}
	if (!__LIB_3__::func_7(iParam4))
	{
		return 0;
	}
	__LIB_3__::func_584(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, uParam6);
	return 0;
}

int func_1861(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, var uParam7, char* sParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12)//Position - 0xC2E48
{
	struct<2> Var0;
	__LIB_3__::func_25();
	if (iParam6 == 5)
	{
		iParam6 = 0;
	}
	if (iParam5 == 8)
	{
		return __LIB_3__::func_431(uParam0, sParam3, sParam4);
	}
	if (iParam5 == 4)
	{
		StringCopy(&Var0, "CELL_226" /* GXT: Accept? */, 16);
		return __LIB_3__::func_430(uParam0, iParam1, sParam3, sParam4, &Var0);
	}
	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
		{
			return __LIB_3__::func_431(uParam0, sParam3, sParam4);
		}
		return __LIB_3__::func_433(uParam0, iParam1, sParam3, sParam4, uParam7);
	}
	if (iParam5 == 5)
	{
		return func_1891(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 2)
	{
		return func_1887(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 3)
	{
		return __LIB_41__::func_944(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 6)
	{
		return __LIB_41__::func_943(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	return 0;
}

int func_1887(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)//Position - 0xC3CEF
{
	bool bVar0;
	bVar0 = false;
	return func_1888(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_1888(int iParam0, int iParam1, char* sParam2, bool bParam3, var uParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)//Position - 0xC3D12
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	bVar0 = __LIB_0__::getMinusOneOrNull();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		bVar0 = iParam1;
		sVar2 = PLAYER::GET_PLAYER_NAME(bVar0);
		iVar1 = __LIB_12__::func_562(bVar0);
		if (iVar1 == 0)
		{
			if (NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_1641031.f_40.f_13))
			{
				return 0;
			}
		}
		Global_22666 = iVar1;
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = __LIB_3__::func_413(sParam5, bParam6, &iVar3);
	uVar5 = __LIB_3__::func_419(iParam7, &iVar3);
	iVar6 = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		iVar6++;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
		{
			iVar6++;
		}
	}
	if (MISC::ARE_STRINGS_EQUAL(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (BitTest(uParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (BitTest(uParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
	{
		bVar12 = __LIB_3__::func_587(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = __LIB_3__::func_589(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (BitTest(uParam4, 0))
	{
		__LIB_3__::func_11();
	}
	__LIB_3__::func_16();
	__LIB_3__::func_10();
	__LIB_3__::func_9();
	return 1;
}

int func_1891(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)//Position - 0xC3F1C
{
	bool bVar0;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
	}
	if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	__LIB_3__::func_16();
	bVar0 = true;
	if (func_1888(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		__LIB_3__::func_8(120000);
		return 1;
	}
	return 0;
}

char* func_1930()//Position - 0xC4997
{
	bool bVar0;
	int iVar1;
	bVar0 = !__LIB_11__::func_813(1);
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
	if (func_35())
	{
		if (func_454() || func_455())
		{
			if (bVar0)
			{
				switch (iVar1)
				{
					case 0:
						return "EXCAL_TRU2F";
					case 1:
						return "EXCAL_TRU2F2";
					default:
				}
				return "EXCAL_TRU2F3";
			}
			else
			{
				switch (iVar1)
				{
					case 0:
						return "EXCAL_TRU2M";
					case 1:
						return "EXCAL_TRU2M2";
					default:
				}
				return "EXCAL_TRU2M3";
			}
		}
		else if (func_385())
		{
			if (bVar0)
			{
				switch (iVar1)
				{
					case 0:
						return "EXCAL_SGENF";
					case 1:
						return "EXCAL_SGENF2";
					default:
				}
				return "EXCAL_SGENF3";
			}
			else
			{
				switch (iVar1)
				{
					case 0:
						return "EXCAL_SGENM";
					case 1:
						return "EXCAL_SGENM2";
					default:
				}
				return "EXCAL_SGENM3";
			}
		}
		else if (bVar0)
		{
			switch (iVar1)
			{
				case 0:
					return "EXCAL_TRU1F";
				case 1:
					return "EXCAL_TRU1F2";
				default:
			}
			return "EXCAL_TRU1F3";
		}
		else
		{
			switch (iVar1)
			{
				case 0:
					return "EXCAL_TRU1M";
				case 1:
					return "EXCAL_TRU1M2";
				default:
			}
			return "EXCAL_TRU1M3";
		}
	}
	else if (func_337())
	{
		if (func_218())
		{
			if (func_348() == 7)
			{
				if (bVar0)
				{
					switch (iVar1)
					{
						case 0:
							return "EXCAL_VAGUF";
						case 1:
							return "EXCAL_VAGUF2";
						default:
					}
					return "EXCAL_VAGUF3";
				}
				else
				{
					switch (iVar1)
					{
						case 0:
							return "EXCAL_VAGUM";
						case 1:
							return "EXCAL_VAGUM2";
						default:
					}
					return "EXCAL_VAGUM3";
				}
			}
			else if (func_348() == 1)
			{
				if (bVar0)
				{
					switch (iVar1)
					{
						case 0:
							return "EXCAL_PLAN2F";
						case 1:
							return "EXCAL_PLA2F2";
						default:
					}
					return "EXCAL_PLA2F3";
				}
				else
				{
					switch (iVar1)
					{
						case 0:
							return "EXCAL_PLAN2M";
						case 1:
							return "EXCAL_PLA2M2";
						default:
					}
					return "EXCAL_PLA2M3";
				}
			}
			else if (bVar0)
			{
				switch (iVar1)
				{
					case 0:
						return "EXCAL_PLAN1F";
					case 1:
						return "EXCAL_PLA1F2";
					default:
				}
				return "EXCAL_PLA1F3";
			}
			else
			{
				switch (iVar1)
				{
					case 0:
						return "EXCAL_PLAN1M";
					case 1:
						return "EXCAL_PLA1M2";
					default:
				}
				return "EXCAL_PLA1M3";
			}
		}
		else if (bVar0)
		{
			switch (iVar1)
			{
				case 0:
					return "EXCAL_PLAN3F";
				case 1:
					return "EXCAL_PLA3F2";
				default:
			}
			return "EXCAL_PLA3F3";
		}
		else
		{
			switch (iVar1)
			{
				case 0:
					return "EXCAL_PLAN3M";
				case 1:
					return "EXCAL_PLA3M2";
				default:
			}
			return "EXCAL_PLA3M3";
		}
	}
	else if (bVar0)
	{
		switch (iVar1)
		{
			case 0:
				return "EXCAL_BOATF";
			case 1:
				return "EXCAL_BOATF2";
			default:
		}
		return "EXCAL_BOATF3";
	}
	else
	{
		switch (iVar1)
		{
			case 0:
				return "EXCAL_BOATM";
			case 1:
				return "EXCAL_BOATM2";
			default:
		}
		return "EXCAL_BOATM3";
	}
	return "";
}

void func_1934()//Position - 0xC4DBC
{
	if (func_457())
	{
		if (func_430() == (func_422() - 1))
		{
			if (!func_2192(20))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), func_410(func_10(), Local_157.f_71[0], Local_157.f_384, 0), func_453(0, 0) + Vector(10f, 10f, 10f), false, true, 0))
				{
					__LIB_0__::func_222(&(Local_118.f_194), 3, 0, "ARMT_ANNOUNCER", 0, 1);
					func_2165(20);
				}
			}
			else if (!func_2192(21))
			{
				if (__LIB_3__::func_76(&(Local_118.f_194), "ARMYAUD", func_1936(), 9, 1, 1, 0))
				{
					func_2165(21);
				}
			}
		}
	}
}

char* func_1936()//Position - 0xC4EBC
{
	switch (Local_157.f_384)
	{
		case 0:
			return "ARMY_ANN1";
		case 1:
			return "ARMY_ANN2";
		case 2:
			return "ARMY_ANN3";
		case 3:
			return "ARMY_ANN4";
		case 4:
			return "ARMY_ANN1";
		default:
	}
	return "ARMY_ANN1";
}

void func_1937()//Position - 0xC4F1A
{
	bool bVar0;
	switch (func_10())
	{
		case 7:
			if (func_1716())
			{
				func_520(33);
			}
			if (func_2192(16))
			{
				func_520(34);
				if (func_524(35))
				{
					func_1942(35);
				}
				func_2165(9);
			}
			else if (func_2192(9))
			{
				func_520(35);
				if (func_524(34))
				{
					func_1942(34);
				}
			}
			break;
		case 9:
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), func_410(func_10(), Local_157.f_71[0], Local_157.f_384, 0), true) < 150f && !func_1941())
			{
				func_520(3);
				func_1665(1);
				if (func_524(36))
				{
					func_1942(36);
				}
			}
			else if (func_1666(1) || func_1941())
			{
				func_520(36);
				if (func_524(3))
				{
					func_1942(3);
				}
			}
			bVar0 = func_1761(1);
			if (bVar0 != -1)
			{
				if (func_1667(bVar0, 1))
				{
					if (func_2192(10))
					{
						func_520(2);
					}
					else
					{
						func_520(1);
					}
				}
			}
			break;
		case 1:
			if (func_1716())
			{
				func_520(13);
			}
			break;
		case 6:
			if (func_1716())
			{
				func_520(30);
			}
			if (Local_157.f_544 > 0f)
			{
				func_520(31);
			}
			break;
		case 5:
			if (func_1716())
			{
				func_520(26);
			}
			if (func_37(18))
			{
				func_520(27);
			}
			if (func_1941())
			{
				func_520(28);
			}
			break;
		case 11:
			if (func_1716())
			{
				func_520(20);
			}
			if (Local_157.f_549 != 0)
			{
				func_520(21);
			}
			if (!func_524(22))
			{
				if (func_1940())
				{
					func_520(22);
				}
			}
			break;
		case 12:
			if (func_1716())
			{
				func_520(6);
			}
			if (func_1939())
			{
				func_520(25);
			}
			break;
		case 13:
			if (func_1787())
			{
				if (func_1938() || (func_1770() && __LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), func_367(), 1) > 200f))
				{
					func_520(10);
				}
				else if (ENTITY::DOES_ENTITY_EXIST(func_1697(1)))
				{
					if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), func_1697(1), 1) < 150f)
					{
						func_520(9);
					}
				}
			}
			break;
		case 2:
			if (Local_118.f_101 != -1)
			{
				if (func_2192(14))
				{
					func_520(15);
				}
				else
				{
					func_520(14);
				}
			}
			else if (func_1716())
			{
				func_520(13);
			}
			break;
		case 3:
		case 4:
		case 0:
			if (func_1716())
			{
				func_520(13);
			}
			break;
	}
}

int func_1938()//Position - 0xC51C9
{
	int iVar0;
	int iVar1;
	iVar0 = 1;
	if (func_212())
	{
		iVar1 = 0;
		while (iVar1 < func_210())
		{
			if (ENTITY::DOES_ENTITY_EXIST(NETWORK::NET_TO_PED(Local_157.f_400[iVar1 /*8*/])))
			{
				if (!PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_157.f_400[iVar1 /*8*/])))
				{
					iVar0 = 0;
				}
			}
			iVar1++;
		}
	}
	return iVar0;
}

int func_1939()//Position - 0xC5220
{
	if (Local_157.f_544 > 0f)
	{
		return 1;
	}
	return 0;
}

int func_1940()//Position - 0xC5238
{
	int iVar0;
	if (Local_157.f_544 >= IntToFloat(func_425()))
	{
		iVar0 = 0;
		while (iVar0 < func_9())
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_499[iVar0 /*6*/]))
			{
				return 0;
			}
			iVar0++;
		}
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_1941()//Position - 0xC5281
{
	bool bVar0;
	if (Local_157.f_544 >= IntToFloat(func_425()))
	{
		bVar0 = false;
		while (bVar0 < func_210())
		{
			if (func_207(bVar0) && !PED::IS_PED_INJURED(func_197(bVar0)))
			{
				return 0;
			}
			bVar0++;
		}
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_1942(int iParam0)//Position - 0xC52D2
{
	int iVar0;
	int iVar1;
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(uLocal_143[iVar0]), iVar1);
}

void func_1943()//Position - 0xC52F5
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	iVar0 = 20000;
	if ((func_35() || func_337()) || func_274())
	{
		bVar1 = false;
		while (bVar1 < func_21())
		{
			iVar2 = (14 + bVar1);
			iVar3 = iVar2;
			iVar0 = 20000;
			if (func_35())
			{
				switch (bVar1)
				{
					case 0:
						if (!func_37(10))
						{
							iVar0 = 5000;
						}
						break;
					case 1:
						if (!func_37(11))
						{
							iVar0 = 5000;
						}
						break;
					case 2:
						if (!func_37(12))
						{
							iVar0 = 5000;
						}
						break;
					}
			}
			if (func_41(bVar1))
			{
				if (!func_38(NETWORK::PARTICIPANT_ID(), iVar3))
				{
					if (!BitTest(Local_157.f_586, bVar1))
					{
						if (!func_185(bVar1))
						{
							if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(func_40(bVar1)))
							{
								if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(func_40(bVar1), 0, iVar0))
								{
									bVar4 = true;
								}
								else if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(func_40(bVar1), 1, iVar0))
								{
									bVar4 = true;
								}
								else if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(func_40(bVar1), 2, iVar0))
								{
									bVar4 = true;
								}
								else if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(func_40(bVar1), 3, iVar0))
								{
									bVar4 = true;
								}
								else if (iVar0 == 5000)
								{
									if (!__LIB_0__::func_864(&(Local_157.f_562[bVar1 /*2*/])))
									{
										if (!VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(func_40(bVar1)))
										{
											__LIB_0__::func_795(&(Local_157.f_562[bVar1 /*2*/]), 0, 0);
										}
									}
									else if (!VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(func_40(bVar1)))
									{
										if (__LIB_0__::func_937(&(Local_157.f_562[bVar1 /*2*/]), iVar0, 0))
										{
											bVar4 = true;
										}
									}
									else
									{
										__LIB_0__::clearF_1Prop(&(Local_157.f_562[bVar1 /*2*/]));
									}
								}
							}
						}
					}
					if (bVar4)
					{
						if (func_337())
						{
							NETWORK::NETWORK_EXPLODE_VEHICLE(func_40(bVar1), true, false, -1);
						}
						else
						{
							func_633(iVar3);
						}
					}
				}
				else if (BitTest(Local_157.f_586, bVar1))
				{
					func_1944(iVar3);
				}
			}
			bVar1++;
		}
	}
	if (func_11())
	{
		bVar5 = false;
		while (bVar5 < func_9())
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_499[bVar5 /*6*/]))
			{
				iVar6 = NETWORK::NETWORK_ENTITY_GET_OBJECT_ID(NETWORK::NET_TO_VEH(Local_157.f_499[bVar5 /*6*/]));
				if (Local_118.f_167[bVar5] != iVar6)
				{
					if (BitTest(Local_158[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_9, bVar5))
					{
						MISC::CLEAR_BIT(&(Local_158[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_9), bVar5);
					}
					Local_118.f_167[bVar5] = iVar6;
				}
				if (!BitTest(Local_157.f_550, bVar5))
				{
					if (!BitTest(Local_158[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_9, bVar5))
					{
						if (__LIB_0__::func_939(Local_157.f_499[bVar5 /*6*/]))
						{
							if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(NETWORK::NET_TO_VEH(Local_157.f_499[bVar5 /*6*/]), 0, 20000))
							{
								MISC::SET_BIT(&(Local_158[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_9), bVar5);
							}
							else if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(NETWORK::NET_TO_VEH(Local_157.f_499[bVar5 /*6*/]), 1, 20000))
							{
								MISC::SET_BIT(&(Local_158[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_9), bVar5);
							}
							else if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(NETWORK::NET_TO_VEH(Local_157.f_499[bVar5 /*6*/]), 2, 20000))
							{
								MISC::SET_BIT(&(Local_158[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_9), bVar5);
							}
							else if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(NETWORK::NET_TO_VEH(Local_157.f_499[bVar5 /*6*/]), 3, 20000))
							{
								MISC::SET_BIT(&(Local_158[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_9), bVar5);
							}
						}
					}
				}
			}
			bVar5++;
		}
	}
}

void func_1944(int iParam0)//Position - 0xC562F
{
	MISC::CLEAR_BIT(&(Local_158[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_2), iParam0);
}

void func_1945()//Position - 0xC5648
{
	float fVar0;
	float fVar1;
	bool bVar2;
	int iVar3;
	bVar2 = false;
	if (func_483())
	{
		iVar3 = 0;
		while (iVar3 < func_21())
		{
			if (ENTITY::DOES_ENTITY_EXIST(func_40(iVar3)) && !ENTITY::IS_ENTITY_DEAD(func_40(iVar3), false))
			{
				if (func_1668(iVar3, 1))
				{
					func_1948();
					fVar0 = __LIB_35__::func_479(func_40(iVar3), &fVar1);
					if (Local_118.f_165 != fVar1)
					{
						Local_118.f_165 = fVar1;
					}
					if (Local_118.f_164 != fVar0)
					{
						Local_118.f_164 = fVar0;
					}
					if (Local_118.f_164 > func_1946())
					{
						if (bVar2 == 0)
						{
							bVar2 = true;
						}
						if (func_1667(iVar3, 1))
						{
							if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
							{
								if (func_2192(16))
								{
									func_882(16);
									if (__LIB_0__::func_864(&(Local_118.f_158)))
									{
										__LIB_0__::clearF_1Prop(&(Local_118.f_158));
									}
								}
								if (!func_38(NETWORK::PARTICIPANT_ID(), 11))
								{
									func_633(11);
								}
							}
						}
						else if (func_38(NETWORK::PARTICIPANT_ID(), 11))
						{
							func_1944(11);
						}
					}
					else
					{
						if (func_38(NETWORK::PARTICIPANT_ID(), 11))
						{
							func_1944(11);
						}
						if (bVar2 == 1)
						{
							bVar2 = false;
						}
						if (func_1667(iVar3, 1))
						{
							if (!func_2192(18))
							{
								if (BitTest(Global_2815059.f_1801, 24))
								{
									if (__LIB_3__::func_446(0, 1, 1, 1) && !__LIB_0__::func_1("SCONT_GOHP" /* GXT: The Ghost Organization VIP Ability can be used to temporarily hide Special Cargo shipments from other players in session. */))
									{
										__LIB_1__::func_707("SCONTRA_HLP13" /* GXT: Fly as low as possible to avoid detection by the Cops. */, -1);
										__LIB_16__::func_612(1);
										func_2165(18);
									}
								}
							}
						}
					}
				}
			}
			iVar3++;
		}
		if (bVar2)
		{
			if (!func_2192(17))
			{
				if (!__LIB_0__::func_864(&(Local_118.f_162)) || (__LIB_0__::func_864(&(Local_118.f_162)) && __LIB_0__::func_937(&(Local_118.f_162), 1000, 0)))
				{
					AUDIO::PLAY_SOUND_FRONTEND(Local_118.f_116, "Altitude_Warning_Loop", "DLC_Exec_Fly_Low_Sounds", true);
					func_2165(17);
				}
			}
		}
		else if (func_2192(17))
		{
			__LIB_0__::clearF_1Prop(&(Local_118.f_162));
			__LIB_0__::func_795(&(Local_118.f_162), 0, 0);
			AUDIO::STOP_SOUND(Local_118.f_116);
			func_882(17);
		}
		if (func_38(NETWORK::PARTICIPANT_ID(), 11))
		{
			if (!__LIB_0__::func_1("SCONTRA_HLP11" /* GXT: The cops can detect you at this height. Fly as low to the ground as possible. */))
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					__LIB_0__::func_151("SCONTRA_HLP11" /* GXT: The cops can detect you at this height. Fly as low to the ground as possible. */, -1);
					__LIB_0__::clearF_1Prop(&(Local_118.f_160));
				}
			}
			if (!__LIB_0__::func_864(&(Local_118.f_158)))
			{
				__LIB_0__::func_795(&(Local_118.f_158), 0, 0);
			}
		}
		else
		{
			if (__LIB_0__::func_864(&(Local_118.f_158)))
			{
				__LIB_0__::clearF_1Prop(&(Local_118.f_158));
			}
			if (__LIB_0__::func_1("SCONTRA_HLP11" /* GXT: The cops can detect you at this height. Fly as low to the ground as possible. */))
			{
				if (__LIB_0__::func_937(&(Local_118.f_160), 3000, 0))
				{
					HUD::CLEAR_HELP(true);
				}
			}
		}
	}
}

float func_1946()//Position - 0xC58AE
{
	int iVar0;
	iVar0 = func_7();
	if (func_2257() == 1)
	{
		iVar0 = 3;
	}
	switch (func_348())
	{
		case 0:
		case 1:
		case 7:
			if (iVar0 == 2)
			{
				return SYSTEM::TO_FLOAT(Global_262145.f_16751 /* Tunable: EXEC_SELL_AIRFLYLOW_MEDIUM_RESTRICTION_HEIGHT */);
			}
			else if (iVar0 == 3)
			{
				return SYSTEM::TO_FLOAT(Global_262145.f_16753 /* Tunable: EXEC_SELL_AIRFLYLOW_EASY_RESTRICTION_HEIGHT */);
			}
			else
			{
				return Global_262145.f_15620 /* Tunable: EXEC_SELL_AIRFLYLOW_RESTRICTION_HEIGHT */;
			}
			break;
		case 2:
			if (iVar0 == 2)
			{
				return SYSTEM::TO_FLOAT(Global_262145.f_16752 /* Tunable: EXEC_SELL_AIRFLYLOW_MEDIUM_RESTRICTION_HEIGHT_TITAN */);
			}
			else if (iVar0 == 3)
			{
				return SYSTEM::TO_FLOAT(Global_262145.f_16754 /* Tunable: EXEC_SELL_AIRFLYLOW_EASY_RESTRICTION_HEIGHT_TITAN */);
			}
			else
			{
				return SYSTEM::TO_FLOAT(Global_262145.f_16035 /* Tunable: EXEC_SELL_AIRFLYLOW_RESTRICTION_HEIGHT_TITAN */);
			}
			break;
	}
	return Global_262145.f_15620 /* Tunable: EXEC_SELL_AIRFLYLOW_RESTRICTION_HEIGHT */;
}

void func_1948()//Position - 0xC59AE
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < func_21())
	{
		if (func_1668(iVar0, 1))
		{
			HUD::SET_FAKE_MINIMAP_MAX_ALTIMETER_HEIGHT((Local_118.f_165 + func_1946()), false, 21);
		}
		else if (!func_1696(1))
		{
			HUD::SET_FAKE_MINIMAP_MAX_ALTIMETER_HEIGHT(0f, false, 21);
		}
		iVar0++;
	}
}

void func_1949()//Position - 0xC59F9
{
	int iVar0;
	struct<14> Var1;
	if (func_1957())
	{
		if (func_1696(1))
		{
			if (func_1956())
			{
				iVar0 = func_1762();
				switch (iLocal_151)
				{
					case 0:
						if (iLocal_150 == 0)
						{
							if (BitTest(Global_2815059.f_1801, 25))
							{
								if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
								{
									__LIB_0__::func_151("SCONTRA_HLP10" /* GXT: As the passenger, you have access to the missile lock-on jammer. Use this to temporarily protect the vehicle from homing missile lock-on. */, -1);
									iLocal_150 = 1;
								}
							}
						}
						else if (!__LIB_0__::func_1("SCONTRA_HLP10" /* GXT: As the passenger, you have access to the missile lock-on jammer. Use this to temporarily protect the vehicle from homing missile lock-on. */))
						{
							iLocal_152 = -1;
							__LIB_7__::func_954(&iLocal_152, 3, "SCONTRA_CTXT" /* GXT: Press ~a~ to activate the missile lock-on jammer. */, 0, 0, 0, 0);
							iLocal_151++;
						}
						break;
					case 1:
						if (iLocal_152 != -1)
						{
							if (__LIB_3__::func_113(iLocal_152, 1))
							{
								func_890();
								iLocal_151++;
							}
						}
						break;
					case 2:
						Var1.f_2 = -1022474524;
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_35[iVar0]))
						{
							if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_157.f_35[iVar0]))
							{
								VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON_SYNCED(NETWORK::NET_TO_VEH(Local_157.f_35[iVar0]), false, false);
								func_1952(__LIB_5__::func_190(func_40(iVar0), 1, 0, 0));
								__LIB_1__::func_634(Var1, __LIB_5__::func_190(func_40(iVar0), 1, 0, 0));
								iLocal_151++;
							}
							else
							{
								func_1951(__LIB_4__::func_970(1), 0);
								func_1952(__LIB_5__::func_190(func_40(iVar0), 1, 0, 0));
								__LIB_1__::func_634(Var1, __LIB_5__::func_190(func_40(iVar0), 1, 0, 0));
								iLocal_151++;
							}
						}
						break;
					case 3:
						if (__LIB_0__::func_864(&(Local_118.f_151)))
						{
							if (__LIB_0__::func_937(&(Local_118.f_151), Local_157.f_385, 0))
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_157.f_35[iVar0]))
								{
									VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON_SYNCED(NETWORK::NET_TO_VEH(Local_157.f_35[iVar0]), true, false);
									iLocal_151++;
								}
								else
								{
									func_1951(__LIB_4__::func_970(1), 1);
									iLocal_151++;
								}
							}
						}
						break;
					case 4:
						if (__LIB_0__::func_864(&(Local_118.f_151)))
						{
							if (__LIB_0__::func_937(&(Local_118.f_151), ((Local_157.f_385 + Local_157.f_386) + Local_157.f_387), 0))
							{
								func_1950(__LIB_5__::func_190(func_40(iVar0), 1, 0, 0));
								iLocal_151++;
							}
						}
						break;
					case 5:
						if (!__LIB_0__::func_864(&(Local_118.f_151)))
						{
							iLocal_151 = 0;
						}
						break;
				}
			}
			else
			{
				func_890();
				if (iLocal_149 == 0)
				{
					if (BitTest(Global_2815059.f_1801, 24) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						__LIB_0__::func_151("SCONTRA_HLP9" /* GXT: The missile lock-on jammer is available if you have a passenger. Your passenger can use this to temporarily prevent homing missile lock-on. */, -1);
						iLocal_149 = 1;
					}
				}
			}
		}
		else
		{
			func_890();
		}
	}
	else
	{
		func_890();
	}
}

void func_1950(int iParam0)//Position - 0xC5C6C
{
	struct<2> Var0;
	if (!iParam0 == 0)
	{
		Var0.f_0 = -1001733190;
		Var0.f_1 = PLAYER::PLAYER_ID();
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 2, iParam0);
	}
}

void func_1951(int iParam0, int iParam1)//Position - 0xC5C98
{
	struct<3> Var0;
	if (!iParam0 == 0)
	{
		Var0.f_0 = -2075123925;
		Var0.f_1 = PLAYER::PLAYER_ID();
		Var0.f_2 = iParam1;
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 3, iParam0);
	}
}

void func_1952(int iParam0)//Position - 0xC5CCA
{
	struct<2> Var0;
	if (!iParam0 == 0)
	{
		Var0.f_0 = 1268159669;
		Var0.f_1 = PLAYER::PLAYER_ID();
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 2, iParam0);
	}
}

int func_1956()//Position - 0xC5F6C
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < func_21())
	{
		if (func_1668(iVar0, 1))
		{
			if (func_1670(iVar0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_1957()//Position - 0xC5FA1
{
	if (func_337())
	{
		return 1;
	}
	return 0;
}

void func_1958()//Position - 0xC5FB5
{
	int iVar0;
	int iVar1;
	if (func_218())
	{
		iVar0 = 0;
		while (iVar0 < func_21())
		{
			iVar1 = __LIB_35__::func_480(iVar0);
			if (!func_38(NETWORK::PARTICIPANT_ID(), iVar1))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_35[iVar0]))
				{
					if (func_1667(iVar0, 1))
					{
						if (!ENTITY::IS_ENTITY_IN_AIR(func_42(iVar0)) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(func_42(iVar0), false), func_410(func_10(), Local_157.f_71[iVar0], Local_157.f_384, iVar0), true) < (150f / 2f))
						{
							func_633(iVar1);
						}
					}
				}
			}
			else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_35[iVar0]))
			{
				if (func_1667(iVar0, 0))
				{
					if (ENTITY::GET_ENTITY_SPEED(func_42(iVar0)) < 2f)
					{
						TASK::TASK_LEAVE_VEHICLE(PLAYER::PLAYER_PED_ID(), func_40(iVar0), 0);
						func_1839(iVar0, 1);
					}
				}
			}
			iVar0++;
		}
	}
}

void func_1960()//Position - 0xC60C7
{
	int iVar0;
	if ((((((!func_273() && !func_483()) && !func_218()) && !func_457()) && !func_12()) && !func_455()) && !func_454())
	{
		if (func_1716())
		{
			iVar0 = func_1762();
			if (func_185(iVar0))
			{
				__LIB_0__::func_213(func_40(func_1762()), 1093140480, 1, 1056964608, 0, 1, 0);
			}
		}
	}
}

void func_1963()//Position - 0xC6308
{
	int iVar0;
	iVar0 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	if (func_454() || func_483())
	{
		if (iVar0 == 0)
		{
			if (func_38(NETWORK::PARTICIPANT_ID(), 6))
			{
				func_1944(6);
			}
		}
		else if (!func_38(NETWORK::PARTICIPANT_ID(), 6))
		{
			func_633(6);
		}
	}
	if (func_457())
	{
		if ((Local_118.f_101 == -1 && func_1770()) && func_458(func_1762()) == 5)
		{
			if (iVar0 < Global_262145.f_15621 /* Tunable: EXEC_SELL_AIRRESTRICTED_WANTED_CAP */)
			{
				func_1964(Global_262145.f_15621 /* Tunable: EXEC_SELL_AIRRESTRICTED_WANTED_CAP */);
			}
			Local_118.f_101 = Global_262145.f_15621 /* Tunable: EXEC_SELL_AIRRESTRICTED_WANTED_CAP */;
		}
	}
	else if (func_454())
	{
		if (Local_118.f_101 == -1)
		{
			if (Local_157.f_388 == func_430())
			{
				if (iVar0 < Global_262145.f_15640 /* Tunable: EXEC_SELL_STING_WANTED_CAP */)
				{
					func_1964(Global_262145.f_15640 /* Tunable: EXEC_SELL_STING_WANTED_CAP */);
				}
				Local_118.f_101 = Global_262145.f_15640 /* Tunable: EXEC_SELL_STING_WANTED_CAP */;
				func_882(14);
			}
		}
		else if (!func_2192(14))
		{
			if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1) && Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_230 == 99)
			{
				Local_118.f_157 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
				if (!func_2192(13))
				{
					if (Local_118.f_157 > 0)
					{
						func_2165(13);
					}
				}
				else if (Local_118.f_157 == 0)
				{
					func_2165(14);
				}
			}
		}
	}
	else if ((func_483() && __LIB_0__::func_864(&(Local_118.f_158))) && __LIB_0__::func_937(&(Local_118.f_158), 10000, 0))
	{
		if (iVar0 < Global_262145.f_15619 /* Tunable: EXEC_SELL_AIRFLYLOW_WANTED_CAP */)
		{
			if (!BitTest(Global_1853348[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*834*/].f_833, 17))
			{
				if (!func_2192(16))
				{
					func_1964(Global_262145.f_15619 /* Tunable: EXEC_SELL_AIRFLYLOW_WANTED_CAP */);
					func_2165(16);
				}
			}
		}
	}
	else if (!func_38(NETWORK::PARTICIPANT_ID(), 5))
	{
		if (iVar0 != 0)
		{
			if (!func_38(NETWORK::PARTICIPANT_ID(), 6))
			{
				func_1964(0);
			}
		}
	}
}

void func_1964(int iParam0)//Position - 0xC64D8
{
	int iVar0;
	if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 0, 1))
	{
		if (func_1674())
		{
			iVar0 = func_1673();
			if (iParam0 > iVar0)
			{
				iParam0 = iVar0;
			}
		}
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), iParam0, false);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
	}
}

void func_2165(int iParam0)//Position - 0xCC58A
{
	MISC::SET_BIT(&uLocal_141, iParam0);
}

void func_2167(bool bParam0)//Position - 0xCC6A4
{
	int iVar0;
	if (func_474())
	{
		iVar0 = 0;
		while (iVar0 < func_21())
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_35[iVar0]))
			{
				if (bParam0)
				{
					if (!NETWORK::IS_DAMAGE_TRACKER_ACTIVE_ON_NETWORK_ID(Local_157.f_35[iVar0]))
					{
						NETWORK::ACTIVATE_DAMAGE_TRACKER_ON_NETWORK_ID(Local_157.f_35[iVar0], true);
					}
				}
				else if (NETWORK::IS_DAMAGE_TRACKER_ACTIVE_ON_NETWORK_ID(Local_157.f_35[iVar0]))
				{
					NETWORK::ACTIVATE_DAMAGE_TRACKER_ON_NETWORK_ID(Local_157.f_35[iVar0], false);
				}
			}
			iVar0++;
		}
	}
}

void func_2170(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0xCC747
{
	float fVar0;
	if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_33 != iParam0)
	{
		__LIB_7__::func_945(-1);
		Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_33 = iParam0;
		if (__LIB_7__::func_944() != -1)
		{
			__LIB_7__::func_946(-1);
		}
		if (__LIB_7__::func_943() != -1)
		{
			__LIB_9__::func_357(-1);
		}
		__LIB_15__::func_414(iParam2);
		__LIB_15__::func_620(iParam0);
		if (!__LIB_15__::func_413(iParam0))
		{
			fVar0 = __LIB_15__::func_412(iParam0);
			if (fVar0 != 1f)
			{
				__LIB_2__::func_74(fVar0);
				MISC::SET_BIT(&(Global_1943920.f_3), 1);
			}
		}
		if (!__LIB_15__::func_411(iParam0) || iParam3)
		{
			if (__LIB_15__::func_410(iParam0, iParam2) && iParam3 == 1)
			{
				PLAYER::SET_MAX_WANTED_LEVEL(0);
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
				}
				MISC::SET_BIT(&(Global_1943920.f_3), 0);
			}
			else if (PLAYER::GET_MAX_WANTED_LEVEL() < 5)
			{
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
				PLAYER::SET_MAX_WANTED_LEVEL(5);
			}
		}
		if (__LIB_0__::func_945())
		{
			__LIB_1__::func_966(27);
		}
		if (bParam1)
		{
			if (!__LIB_12__::func_495())
			{
				__LIB_2__::func_135(1);
			}
		}
		if ((((((iParam0 == 159 || iParam0 == 157) || iParam0 == 153) || iParam0 == 154) || iParam0 == 164) || iParam0 == 155) || iParam0 == 171)
		{
			if ((BitTest(Global_2815059.f_4624, 1) || BitTest(Global_2815059.f_4624, 4)) || BitTest(Global_2815059.f_4624, 0))
			{
				__LIB_1__::func_928(6);
			}
			__LIB_15__::func_302();
		}
		if (((iParam0 == 164 || iParam0 == 208) || iParam0 == 250) || iParam0 == 237)
		{
			MISC::ENABLE_DISPATCH_SERVICE(3, false);
			MISC::ENABLE_DISPATCH_SERVICE(5, false);
		}
		if (__LIB_1__::func_15(PLAYER::PLAYER_ID()) && __LIB_0__::func_315(PLAYER::PLAYER_ID()))
		{
			MISC::SET_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1), 8);
		}
		func_2172();
		if (__LIB_15__::func_396(iParam0))
		{
			MISC::ENABLE_DISPATCH_SERVICE(3, false);
			MISC::ENABLE_DISPATCH_SERVICE(5, false);
			MISC::SET_BIT(&(Global_1943920.f_3), 6);
		}
		Global_2815059.f_6745 = 0;
	}
}

void func_2172()//Position - 0xCC9A5
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bVar3 = __LIB_15__::func_454();
	iVar2 = __LIB_2__::func_39(PLAYER::PLAYER_ID());
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
			if (__LIB_2__::func_61(iVar1, iVar2, 1) || __LIB_19__::func_482(iVar1, PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CAN_DAMAGE_PLAYER(PLAYER::PLAYER_ID(), iVar1, bVar3);
				PLAYER::SET_PLAYER_CAN_DAMAGE_PLAYER(iVar1, PLAYER::PLAYER_ID(), bVar3);
			}
		}
		iVar0++;
	}
}

bool func_2192(int iParam0)//Position - 0xCD2CC
{
	return BitTest(uLocal_141, iParam0);
}

void func_2193()//Position - 0xCD2DA
{
	if (__LIB_0__::func_864(&(Local_157.f_584)))
	{
		if (!func_1666(5))
		{
			if (__LIB_0__::func_937(&(Local_157.f_584), (func_379() - 5000), 0))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "5s", "MP_MISSION_COUNTDOWN_SOUNDSET", false);
				func_1665(5);
			}
		}
		if (!func_1666(6))
		{
			if (__LIB_0__::func_937(&(Local_157.f_584), func_379(), 0))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Crates_Blipped", "GTAO_Magnate_Boss_Modes_Soundset", false);
				func_1665(6);
			}
		}
	}
}

void func_2194()//Position - 0xCD353
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < func_21())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_35[iVar0]))
		{
			if (func_41(iVar0))
			{
				VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON(NETWORK::NET_TO_VEH(Local_157.f_35[iVar0]), false, false);
			}
		}
		iVar0++;
	}
}

void func_2195()//Position - 0xCD39C
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < func_21())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_35[iVar0]))
		{
			if (__LIB_12__::func_548(1) && (__LIB_0__::func_797() == Local_157.f_30 || PLAYER::PLAYER_ID() == Local_157.f_30))
			{
				if (func_41(iVar0))
				{
					if (VEHICLE::GET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(func_40(iVar0), PLAYER::PLAYER_ID()))
					{
						VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(func_40(iVar0), PLAYER::PLAYER_ID(), false);
					}
				}
			}
			else if (func_41(iVar0))
			{
				if (!VEHICLE::GET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(func_40(iVar0), PLAYER::PLAYER_ID()))
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(func_40(iVar0), PLAYER::PLAYER_ID(), true);
				}
			}
			if (func_424())
			{
				if (!func_1666(__LIB_35__::func_481(iVar0)))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_157.f_35[iVar0]) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_157.f_35[iVar0]) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
					{
						if (__LIB_0__::func_953(Local_157.f_35[iVar0]))
						{
							ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_VEH(Local_157.f_35[iVar0]), false);
							func_1665(__LIB_35__::func_481(iVar0));
						}
					}
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < func_341())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_39[iVar0]))
		{
			if (__LIB_0__::func_121(NETWORK::NET_TO_VEH(Local_157.f_39[iVar0])))
			{
				if (!VEHICLE::GET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(NETWORK::NET_TO_VEH(Local_157.f_39[iVar0]), PLAYER::PLAYER_ID()))
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(NETWORK::NET_TO_VEH(Local_157.f_39[iVar0]), PLAYER::PLAYER_ID(), true);
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	if (func_11())
	{
		iVar0 = 0;
		while (iVar0 < func_21())
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_35[iVar0]))
			{
				if (__LIB_0__::func_121(NETWORK::NET_TO_VEH(Local_157.f_35[iVar0])))
				{
					if (func_185(iVar0))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_157.f_35[iVar0]) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_157.f_35[iVar0]) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
						{
							if (__LIB_0__::func_953(Local_157.f_35[iVar0]))
							{
								iVar1 = (2 + iVar0);
								if (!func_1666(iVar1))
								{
									func_1665(iVar1);
									ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_VEH(Local_157.f_35[iVar0]), true);
								}
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (func_399())
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < func_9())
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_499[iVar0 /*6*/]))
			{
				if (__LIB_0__::func_121(NETWORK::NET_TO_ENT(Local_157.f_499[iVar0 /*6*/])))
				{
					if (!VEHICLE::GET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(NETWORK::NET_TO_VEH(Local_157.f_499[iVar0 /*6*/]), PLAYER::PLAYER_ID()))
					{
						VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(NETWORK::NET_TO_VEH(Local_157.f_499[iVar0 /*6*/]), PLAYER::PLAYER_ID(), true);
					}
				}
			}
			iVar0++;
		}
	}
}

void func_2197()//Position - 0xCD676
{
	if (!func_2192(31))
	{
		__LIB_1__::func_928(24);
		if (func_424() && func_2201())
		{
			if (__LIB_41__::func_945())
			{
				func_2165(31);
			}
		}
	}
}

int func_2201()//Position - 0xCD927
{
	if (func_6())
	{
		return func_2259(3);
	}
	return 1;
}

void func_2202()//Position - 0xCD93F
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	int iVar3;
	bool bVar4;
	if (func_212())
	{
		bVar4 = false;
		while (bVar4 < func_210())
		{
			switch (func_440(bVar4))
			{
				case 0:
					break;
				case 1:
					break;
				case 2:
					if (func_207(bVar4))
					{
					}
					break;
				case 6:
					if (func_207(bVar4))
					{
						iVar0 = func_197(bVar4);
						if (func_215() || func_384())
						{
							func_2207(bVar4);
						}
						if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(iVar0, joaat("SCRIPT_TASK_VEHICLE_MISSION")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iVar0, joaat("SCRIPT_TASK_VEHICLE_MISSION")) != 0)
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_157.f_400[bVar4 /*8*/]) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_157.f_400[bVar4 /*8*/]) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
								{
									if (__LIB_0__::func_953(Local_157.f_400[bVar4 /*8*/]))
									{
										iVar3 = NETWORK::NET_TO_VEH(func_205(bVar4));
										if (ENTITY::DOES_ENTITY_EXIST(iVar3) && ENTITY::DOES_ENTITY_EXIST(func_40(Local_157.f_591)))
										{
											if (__LIB_0__::func_121(iVar3) && __LIB_0__::func_121(func_40(Local_157.f_591)))
											{
												func_2205(iVar0, func_2206());
												if (func_12())
												{
													TASK::TASK_HELI_MISSION(iVar0, iVar3, func_40(Local_157.f_591), 0, ENTITY::GET_ENTITY_COORDS(func_40(Local_157.f_591), true), 6, 100f, 10f, -1f, 100, 60, -1f, 4224);
												}
												else
												{
													TASK::TASK_VEHICLE_MISSION(iVar0, iVar3, func_40(Local_157.f_591), 7, 50f, 786469, -1f, -1f, true);
												}
											}
										}
									}
								}
							}
							else if (func_215() || func_384())
							{
								if (!PED::IS_PED_DOING_DRIVEBY(iVar0))
								{
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_157.f_400[bVar4 /*8*/]) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_157.f_400[bVar4 /*8*/]) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
									{
										if (__LIB_0__::func_953(Local_157.f_400[bVar4 /*8*/]))
										{
											iVar3 = NETWORK::NET_TO_VEH(func_205(bVar4));
											if (ENTITY::DOES_ENTITY_EXIST(iVar3) && ENTITY::DOES_ENTITY_EXIST(func_40(Local_157.f_591)))
											{
												if (__LIB_0__::func_121(iVar3) && __LIB_0__::func_121(func_40(Local_157.f_591)))
												{
													TASK::TASK_DRIVE_BY(iVar0, 0, func_40(Local_157.f_591), 0f, 0f, 0f, -1f, 30, true, joaat("FIRING_PATTERN_BURST_FIRE_DRIVEBY"));
												}
											}
										}
									}
								}
							}
						}
					}
					break;
				case 9:
					if (func_207(bVar4))
					{
						iVar0 = func_197(bVar4);
						if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(iVar0, joaat("SCRIPT_TASK_VEHICLE_MISSION")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iVar0, joaat("SCRIPT_TASK_VEHICLE_MISSION")) != 0)
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_157.f_400[bVar4 /*8*/]) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_157.f_400[bVar4 /*8*/]) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
								{
									if (__LIB_0__::func_953(Local_157.f_400[bVar4 /*8*/]))
									{
										iVar3 = NETWORK::NET_TO_VEH(func_205(bVar4));
										if (ENTITY::DOES_ENTITY_EXIST(iVar3) && ENTITY::DOES_ENTITY_EXIST(func_40(Local_157.f_591)))
										{
											if (__LIB_0__::func_121(iVar3) && __LIB_0__::func_121(func_40(Local_157.f_591)))
											{
												if (func_215() && func_37(8))
												{
													VEHICLE::DISABLE_VEHICLE_WEAPON(true, joaat("VEHICLE_WEAPON_SPACE_ROCKET"), iVar3, iVar0);
													VEHICLE::DISABLE_VEHICLE_WEAPON(true, joaat("WEAPON_VEHICLE_ROCKET"), iVar3, iVar0);
													WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(iVar0, joaat("VEHICLE_WEAPON_PLAYER_BUZZARD"));
												}
												func_2205(iVar0, func_2206());
												TASK::TASK_HELI_MISSION(iVar0, iVar3, func_40(Local_157.f_591), 0, ENTITY::GET_ENTITY_COORDS(func_40(Local_157.f_591), true), 6, 80f, 30f, -1f, 60, 50, -1f, 4224);
											}
										}
									}
								}
							}
						}
					}
					break;
				case 8:
					if (func_207(bVar4))
					{
						iVar0 = func_197(bVar4);
						if (func_215() || func_384())
						{
							func_2207(bVar4);
						}
						if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
						{
							if (func_269())
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(iVar0, joaat("SCRIPT_TASK_COMBAT_HATED_TARGETS_IN_AREA")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iVar0, joaat("SCRIPT_TASK_COMBAT_HATED_TARGETS_IN_AREA")) != 0)
								{
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_157.f_400[bVar4 /*8*/]) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_157.f_400[bVar4 /*8*/]) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
									{
										if (__LIB_0__::func_953(Local_157.f_400[bVar4 /*8*/]))
										{
											func_2203(iVar0, bVar4, 1, 0, func_2206());
											TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(iVar0, ENTITY::GET_ENTITY_COORDS(iVar0, true), 299.9f, 0);
										}
									}
								}
							}
							else if ((func_384() || func_11()) || func_12())
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(iVar0, joaat("SCRIPT_TASK_COMBAT_HATED_TARGETS_IN_AREA")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iVar0, joaat("SCRIPT_TASK_COMBAT_HATED_TARGETS_IN_AREA")) != 0)
								{
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_157.f_400[bVar4 /*8*/]) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_157.f_400[bVar4 /*8*/]) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
									{
										if (__LIB_0__::func_953(Local_157.f_400[bVar4 /*8*/]))
										{
											func_2203(iVar0, bVar4, 0, 1, func_2206());
											TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(iVar0, ENTITY::GET_ENTITY_COORDS(iVar0, true), 299.9f, 0);
										}
									}
								}
							}
							else if (TASK::GET_SCRIPT_TASK_STATUS(iVar0, joaat("SCRIPT_TASK_COMBAT_HATED_TARGETS_AROUND_PED")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iVar0, joaat("SCRIPT_TASK_COMBAT_HATED_TARGETS_AROUND_PED")) != 0)
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_157.f_400[bVar4 /*8*/]) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_157.f_400[bVar4 /*8*/]) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
								{
									if (__LIB_0__::func_953(Local_157.f_400[bVar4 /*8*/]))
									{
										func_2203(iVar0, bVar4, 1, 1, func_2206());
										TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iVar0, 299.9f, 0);
									}
								}
							}
						}
					}
					break;
				case 17:
					if (func_207(bVar4))
					{
						iVar0 = func_197(bVar4);
						if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(iVar0, joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iVar0, joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 0)
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_157.f_400[bVar4 /*8*/]) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_157.f_400[bVar4 /*8*/]) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
								{
									if (__LIB_0__::func_953(Local_157.f_400[bVar4 /*8*/]))
									{
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
										TASK::TASK_LEAVE_ANY_VEHICLE(iVar0, 0, 0);
									}
								}
							}
						}
					}
					break;
				case 12:
					if (func_207(bVar4))
					{
						iVar0 = func_197(bVar4);
						if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(iVar0, -251125078) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iVar0, -251125078) != 0)
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_157.f_400[bVar4 /*8*/]) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_157.f_400[bVar4 /*8*/]) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
								{
									if (__LIB_0__::func_953(Local_157.f_400[bVar4 /*8*/]))
									{
										TASK::TASK_SMART_FLEE_COORD(iVar0, ENTITY::GET_ENTITY_COORDS(iVar0, true), 10000f, 999999, false, false);
										PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 256, true);
										PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 2, false);
									}
								}
							}
						}
					}
					break;
				case 13:
					if (func_207(bVar4))
					{
						iVar0 = func_197(bVar4);
						if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(iVar0, -251125078) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iVar0, -251125078) != 0)
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_157.f_400[bVar4 /*8*/]) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_157.f_400[bVar4 /*8*/]) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
								{
									if (__LIB_0__::func_953(Local_157.f_400[bVar4 /*8*/]))
									{
										TASK::TASK_SMART_FLEE_COORD(iVar0, ENTITY::GET_ENTITY_COORDS(iVar0, true), 10000f, 999999, false, false);
										PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 256, true);
										PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 2, false);
									}
								}
							}
						}
					}
					break;
				case 14:
					if (func_207(bVar4))
					{
						iVar0 = NETWORK::NET_TO_PED(Local_157.f_400[bVar4 /*8*/]);
						if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(iVar0, -251125078) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iVar0, -251125078) != 0)
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_157.f_400[bVar4 /*8*/]) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_157.f_400[bVar4 /*8*/]) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
								{
									if (__LIB_0__::func_953(Local_157.f_400[bVar4 /*8*/]))
									{
										func_434(bVar4, &iVar2);
										if (iVar2 != -1)
										{
											Var1 = { func_410(func_10(), Local_157.f_71[iVar2], Local_157.f_384, iVar2) };
											if (!__LIB_0__::func_78(Var1, 0f, 0f, 0f, 0))
											{
												PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
												PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 5, false);
												PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 17, true);
												PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 1024, true);
												PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 32768, false);
												TASK::TASK_SMART_FLEE_COORD(iVar0, Var1, 10000f, 999999, false, false);
											}
										}
									}
								}
							}
							func_2207(bVar4);
						}
					}
					break;
				case 15:
					if (func_207(bVar4))
					{
					}
					break;
				case 10:
					if (func_207(bVar4))
					{
						iVar0 = NETWORK::NET_TO_PED(Local_157.f_400[bVar4 /*8*/]);
						if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
						{
							if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_157.f_400[bVar4 /*8*/]) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_157.f_400[bVar4 /*8*/]) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
							{
								if (__LIB_0__::func_953(Local_157.f_400[bVar4 /*8*/]))
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
									PED::SET_PED_KEEP_TASK(iVar0, true);
									PED::SET_PED_DIES_WHEN_INJURED(iVar0, true);
									__LIB_1__::func_387(&(Local_157.f_400[bVar4 /*8*/]));
								}
							}
						}
					}
					break;
				case 16:
					if (func_207(bVar4))
					{
					}
					break;
				case 18:
					break;
				case 19:
					break;
			}
			bVar4++;
		}
	}
}

void func_2203(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)//Position - 0xCE299
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, bParam2);
	PED::SET_PED_DIES_WHEN_INJURED(iParam0, true);
	iVar0 = func_196(bParam1);
	WEAPON::GIVE_WEAPON_TO_PED(iParam0, iVar0, 9999999, true, true);
	iVar1 = func_2204();
	PED::SET_PED_COMBAT_MOVEMENT(iParam0, iVar1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 42, false);
	PED::SET_PED_HIGHLY_PERCEPTIVE(iParam0, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 43, true);
	PED::SET_PED_TARGET_LOSS_RESPONSE(iParam0, 1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 146, true);
	PED::SET_PED_ACCURACY(iParam0, iParam4);
	func_195(iParam0);
	PED::SET_PED_KEEP_TASK(iParam0, true);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, Global_1837197);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 2, bParam3);
	if (func_215())
	{
		PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iParam0, 1);
		if (func_37(8))
		{
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 52, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 86, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 53, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 1, true);
		}
	}
	if ((func_384() || func_11()) || func_12())
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 28, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 50, true);
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(iParam0))
		{
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 64, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 66, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 1, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 53, true);
		}
		else
		{
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 1, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 53, false);
		}
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 57, false);
		PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iParam0, 3);
		PED::SET_PED_DIES_WHEN_INJURED(iParam0, true);
		if (func_12())
		{
			if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(iParam0))
			{
				iVar3 = PED::GET_VEHICLE_PED_IS_IN(iParam0, false);
				iVar2 = ENTITY::GET_ENTITY_MODEL(iVar3);
				if (iVar2 == joaat("valkyrie"))
				{
					if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar3, -1, false) != iParam0)
					{
						PED::SET_PED_FIRING_PATTERN(iParam0, joaat("FIRING_PATTERN_BURST_FIRE_HELI"));
					}
				}
				if (iVar2 == joaat("buzzard"))
				{
					VEHICLE::DISABLE_VEHICLE_WEAPON(true, joaat("VEHICLE_WEAPON_SPACE_ROCKET"), iVar3, iParam0);
					VEHICLE::DISABLE_VEHICLE_WEAPON(true, joaat("WEAPON_VEHICLE_ROCKET"), iVar3, iParam0);
					WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(iParam0, joaat("VEHICLE_WEAPON_PLAYER_BUZZARD"));
				}
			}
		}
		PED::SET_PED_COMBAT_RANGE(iParam0, 2);
		PED::SET_PED_SEEING_RANGE(iParam0, 299f);
	}
	if (func_12())
	{
		fVar4 = Global_262145.f_11826 /* Tunable: URBANW_HOMING_ROCKET_BREAK_LOCK_ANGLE */;
		fVar5 = Global_262145.f_11827 /* Tunable: URBANW_HOMING_ROCKET_BREAK_LOCK_ANGLE_CLOSE */;
		fVar6 = Global_262145.f_11828 /* Tunable: URBANW_HOMING_ROCKET_BREAK_LOCK_CLOSE_DISTANCE */;
		fVar7 = Global_262145.f_11829 /* Tunable: URBANW_HOMING_ROCKET_TURN_RATE_MODIFIER */;
		PED::SET_COMBAT_FLOAT(iParam0, 23, fVar4);
		PED::SET_COMBAT_FLOAT(iParam0, 24, fVar5);
		PED::SET_COMBAT_FLOAT(iParam0, 25, fVar6);
		PED::SET_COMBAT_FLOAT(iParam0, 26, fVar7);
	}
}

int func_2204()//Position - 0xCE4BD
{
	if (func_10() == 13)
	{
		return 1;
	}
	return 2;
}

void func_2205(int iParam0, int iParam1)//Position - 0xCE4D3
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	PED::SET_PED_DIES_WHEN_INJURED(iParam0, true);
	iVar0 = func_196(-1);
	WEAPON::GIVE_WEAPON_TO_PED(iParam0, iVar0, 9999999, true, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 42, false);
	PED::SET_PED_HIGHLY_PERCEPTIVE(iParam0, true);
	PED::SET_PED_TARGET_LOSS_RESPONSE(iParam0, 1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 146, true);
	PED::SET_PED_ACCURACY(iParam0, iParam1);
	func_195(iParam0);
	PED::SET_PED_KEEP_TASK(iParam0, true);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, Global_1837197);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 2, true);
	if ((func_215() || func_384()) || func_11())
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
		PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iParam0, 1);
	}
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 53, true);
	if (func_12())
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
		fVar1 = Global_262145.f_11826 /* Tunable: URBANW_HOMING_ROCKET_BREAK_LOCK_ANGLE */;
		fVar2 = Global_262145.f_11827 /* Tunable: URBANW_HOMING_ROCKET_BREAK_LOCK_ANGLE_CLOSE */;
		fVar3 = Global_262145.f_11828 /* Tunable: URBANW_HOMING_ROCKET_BREAK_LOCK_CLOSE_DISTANCE */;
		fVar4 = Global_262145.f_11829 /* Tunable: URBANW_HOMING_ROCKET_TURN_RATE_MODIFIER */;
		PED::SET_COMBAT_FLOAT(iParam0, 23, fVar1);
		PED::SET_COMBAT_FLOAT(iParam0, 24, fVar2);
		PED::SET_COMBAT_FLOAT(iParam0, 25, fVar3);
		PED::SET_COMBAT_FLOAT(iParam0, 26, fVar4);
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(iParam0))
		{
			iVar5 = PED::GET_VEHICLE_PED_IS_IN(iParam0, false);
			iVar6 = ENTITY::GET_ENTITY_MODEL(iVar5);
			if (iVar6 == joaat("buzzard"))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar5, false))
				{
					VEHICLE::DISABLE_VEHICLE_WEAPON(true, joaat("VEHICLE_WEAPON_SPACE_ROCKET"), iVar5, iParam0);
					VEHICLE::DISABLE_VEHICLE_WEAPON(true, joaat("WEAPON_VEHICLE_ROCKET"), iVar5, iParam0);
					WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(iParam0, joaat("VEHICLE_WEAPON_PLAYER_BUZZARD"));
				}
			}
		}
	}
}

int func_2206()//Position - 0xCE620
{
	int iVar0;
	iVar0 = Global_1946100;
	if (Global_1946098 == 1)
	{
		iVar0 = 3;
	}
	switch (iVar0)
	{
		case 2:
			return Global_262145.f_16762 /* Tunable: EXEC_SELL_MEDIUM_PED_ACCURACY */;
			break;
		case 3:
			return Global_262145.f_16766 /* Tunable: EXEC_SELL_EASY_PED_ACCURACY */;
			break;
	}
	return 35;
}

void func_2207(bool bParam0)//Position - 0xCE668
{
	if (BitTest(Local_157.f_547, bParam0))
	{
		if (func_207(bParam0))
		{
			if (!PED::IS_PED_INJURED(func_197(bParam0)))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_157.f_400[bParam0 /*8*/]) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_157.f_400[bParam0 /*8*/]) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
				{
					if (__LIB_0__::func_953(Local_157.f_400[bParam0 /*8*/]))
					{
						ENTITY::SET_ENTITY_HEALTH(func_439(bParam0), 0, 0);
					}
				}
			}
		}
	}
}

void func_2208()//Position - 0xCE6DF
{
	bool bVar0;
	if (func_2201())
	{
		if (func_37(10))
		{
			bVar0 = func_185(0);
			__LIB_35__::func_499(func_40(0), &(Local_148[0 /*2*/]), 0, bVar0);
		}
		if (func_37(11))
		{
			bVar0 = func_185(1);
			__LIB_35__::func_499(func_40(1), &(Local_148[1 /*2*/]), 1, bVar0);
		}
		if (func_37(12))
		{
			bVar0 = func_185(2);
			__LIB_35__::func_499(func_40(2), &(Local_148[2 /*2*/]), 2, bVar0);
		}
	}
}

void func_2214()//Position - 0xCE8F4
{
	if (!func_524(0))
	{
		if (func_523())
		{
			AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", true);
			AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", true);
		}
		func_519(0);
	}
}

void func_2215(int iParam0, int iParam1)//Position - 0xCE921
{
	Local_158[iParam0 /*10*/].f_1 = iParam1;
}

int func_2216()//Position - 0xCE934
{
	func_2217(1);
	if (func_483())
	{
		Local_118.f_116 = AUDIO::GET_SOUND_ID();
	}
	if (!__LIB_0__::func_796(PLAYER::PLAYER_ID()))
	{
		if (Local_157.f_594 != -1)
		{
			Global_1946098 = Local_157.f_594;
			Global_1946100 = Local_157.f_593;
		}
	}
	Local_158[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_7 = __LIB_0__::getMinusOneOrNull();
	return 1;
}

void func_2217(bool bParam0)//Position - 0xCE98A
{
	if (Local_157.f_545 != 0 && Local_157.f_546 != 0)
	{
		PED::SET_PED_MODEL_IS_SUPPRESSED(Local_157.f_546, bParam0);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_157.f_546, bParam0);
	}
}

void func_2218(int iParam0)//Position - 0xCE9C2
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	if (!func_2259(0))
	{
		if (__LIB_1__::func_501())
		{
			iVar1 = 0;
			iVar3 = func_2257();
			fVar4 = SYSTEM::TO_FLOAT(func_21());
			switch (iParam0)
			{
				case 0:
					if (iVar3 > 1)
					{
						iVar0 = func_2255();
						iLocal_154 = iVar0;
						iVar2 = 1;
					}
					break;
				case 1:
					if (func_190() == 4)
					{
						fVar7 = SYSTEM::TO_FLOAT(iVar3);
						if (Local_157.f_60 == 0)
						{
							fVar5 = SYSTEM::TO_FLOAT(Local_157.f_57);
						}
						else if (Local_157.f_60 == 1)
						{
							fVar5 = SYSTEM::TO_FLOAT(Local_157.f_58);
						}
						else if (Local_157.f_60 == 2)
						{
							fVar5 = SYSTEM::TO_FLOAT(Local_157.f_59);
						}
						else
						{
							fVar5 = SYSTEM::TO_FLOAT(Local_157.f_56);
						}
						fVar6 = SYSTEM::TO_FLOAT(func_422());
						if ((func_455() || func_454()) || (func_337() && !func_218()))
						{
							iVar0 = SYSTEM::FLOOR(((fVar7 / fVar4) * (1f - (fVar5 / fVar6))));
						}
						else
						{
							iVar0 = SYSTEM::FLOOR((fVar7 / fVar4));
						}
						iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_15606 /* Tunable: EXEC_STOCK_REMOVE_AT_FAIL_SELL */));
						iVar0 = (iVar0 - iLocal_154);
						iVar2 = 2;
						if (iVar0 < Global_262145.f_16655 /* Tunable: EXEC_CONTRABAND_MINIMUM_LOST */)
						{
							iVar0 = Global_262145.f_16655 /* Tunable: EXEC_CONTRABAND_MINIMUM_LOST */;
						}
						iLocal_155 = (iVar0 + iLocal_154);
						iLocal_156 = (iVar3 - iLocal_155);
						if (iVar0 > 0)
						{
							__LIB_1__::func_28(144);
						}
					}
					break;
				case 2:
					iVar0 = (iVar3 - iLocal_154);
					iVar1 = Global_2815059.f_5195.f_386;
					iVar2 = 3;
					__LIB_1__::func_28(144);
					break;
			}
			if (iVar0 > __LIB_13__::func_137(Local_157.f_54))
			{
				iVar0 = __LIB_13__::func_137(Local_157.f_54);
			}
			if ((iVar3 - iVar0) <= 0)
			{
				iVar0 = iVar3;
			}
			if (iVar0 > 0)
			{
				func_2219(Local_157.f_54, iVar0, iVar1, iVar2, &iLocal_153, func_2258());
			}
		}
	}
}

void func_2219(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, bool bParam5)//Position - 0xCEB87
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	if (iParam1 <= 0)
	{
		if (iParam1 == 0)
		{
		}
		*uParam4 = 3;
		return;
	}
	if (*uParam4 != 0 && *uParam4 != 1)
	{
		*uParam4 = 0;
	}
	iVar0 = __LIB_13__::func_137(iParam0);
	iVar1 = __LIB_8__::func_418(iParam0);
	if (!__LIB_0__::func_112())
	{
		if (iVar1 >= 0 && iVar0 >= iParam1)
		{
			iVar2 = (__LIB_13__::func_137(iParam0) - iParam1);
			iVar3 = 0;
			if (bParam5)
			{
				iVar3 = iParam1;
			}
			__LIB_35__::func_425(iParam0, iVar1, iVar2, iVar3, 0, 11);
			__LIB_1__::func_364(__LIB_28__::func_723(iVar1), iVar2, -1, 1);
			Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_114[iVar1 /*3*/].f_1 = iVar2;
			if (iVar3 != 0)
			{
				__LIB_35__::func_489(iParam0, iVar3);
				__LIB_35__::func_488(iParam0, iVar3);
			}
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				STATS::STAT_SET_OPEN_SAVETYPE_IN_JOB(10);
			}
			__LIB_1__::func_333(1490700264, 10, 0);
			*uParam4 = 2;
		}
		else
		{
			*uParam4 = 3;
		}
	}
	else if (iVar1 >= 0 && iVar0 >= iParam1)
	{
		iVar4 = (__LIB_13__::func_137(iParam0) - iParam1);
		iVar5 = 0;
		if (bParam5)
		{
			iVar5 = iParam1;
		}
		if (func_2220(iVar1, iParam1, iVar5, iParam2, iParam3, uParam4, Global_2815059.f_5195.f_387))
		{
			if (*uParam4 == 2)
			{
				__LIB_35__::func_425(iParam0, iVar1, iVar4, iVar5, 0, 11);
				__LIB_1__::func_364(__LIB_28__::func_723(iVar1), iVar4, -1, 1);
				Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_114[iVar1 /*3*/].f_1 = iVar4;
				if (iVar5 != 0)
				{
					__LIB_35__::func_488(iParam0, iVar5);
				}
				if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
				{
					STATS::STAT_SET_OPEN_SAVETYPE_IN_JOB(10);
				}
				__LIB_1__::func_333(1490700264, 10, 0);
				*uParam4 = 2;
			}
			else if (*uParam4 == 3)
			{
				*uParam4 = 3;
			}
		}
	}
	else
	{
		*uParam4 = 3;
	}
}

bool func_2220(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5, int iParam6)//Position - 0xCED2E
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (*uParam5 != 0 && *uParam5 != 1)
	{
		*uParam5 = 0;
	}
	switch (*uParam5)
	{
		case 0:
			iVar0 = __LIB_13__::func_499(iParam0);
			iVar1 = __LIB_31__::func_715(0, iParam1, 0, -1);
			iVar2 = __LIB_28__::func_714(iParam0);
			iVar3 = __LIB_28__::func_713(iParam0);
			switch (iParam4)
			{
				case 0:
					iVar4 = joaat("CF_ATTACKED");
					break;
				case 1:
					iVar4 = joaat("CF_MISSION_STARTED");
					break;
				case 2:
					iVar4 = joaat("CF_MISSION_FAILED");
					break;
				case 3:
					iVar4 = joaat("CF_MISSION_PASSED");
					break;
			}
			if (iParam4 == 0 || __LIB_10__::func_695(joaat("NET_SHOP_TTYPE_BASKET"), joaat("CATEGORY_INVENTORY_CONTRABAND_MISSION"), iVar1, joaat("NET_SHOP_ACTION_REMOVE_CONTRABAND"), 1, 0, 1, 4, iVar0, 3))
			{
				if (__LIB_10__::func_695(joaat("NET_SHOP_TTYPE_BASKET"), joaat("CATEGORY_CONTRABAND_QNTY"), iVar2, joaat("NET_SHOP_ACTION_REMOVE_CONTRABAND"), iParam1, 0, 1, 4, 0, 3))
				{
					if (iParam2 == 0 || __LIB_10__::func_695(joaat("NET_SHOP_TTYPE_BASKET"), joaat("CATEGORY_CONTRABAND_QNTY"), iVar3, joaat("NET_SHOP_ACTION_REMOVE_CONTRABAND"), iParam2, 0, 1, 4, 0, 3))
					{
						if (__LIB_10__::func_695(joaat("NET_SHOP_TTYPE_BASKET"), joaat("CATEGORY_CONTRABAND_FLAGS"), iVar4, joaat("NET_SHOP_ACTION_REMOVE_CONTRABAND"), 1, iParam3, 0, 4, iVar2, 3))
						{
							*uParam5 = 1;
						}
						else
						{
							*uParam5 = 3;
						}
					}
					else
					{
						*uParam5 = 3;
					}
				}
				else
				{
					*uParam5 = 3;
				}
			}
			else
			{
				*uParam5 = 3;
			}
			if (*uParam5 == 1 && __LIB_6__::func_360())
			{
			}
			else
			{
				*uParam5 = 3;
				__LIB_1__::func_34(__LIB_3__::func_534());
			}
			break;
		case 1:
			if (__LIB_2__::func_835(__LIB_3__::func_534()))
			{
				if (__LIB_2__::func_834(__LIB_3__::func_534()) == 2)
				{
					if (iParam3 > 0)
					{
						NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(__LIB_1__::func_818(__LIB_3__::func_534()));
						MONEY::NETWORK_EARN_FROM_CONTRABAND(iParam3, iParam6);
					}
					*uParam5 = 2;
					__LIB_1__::func_34(__LIB_3__::func_534());
				}
				else
				{
					*uParam5 = 3;
					__LIB_1__::func_34(__LIB_3__::func_534());
				}
			}
			break;
	}
	return *uParam5 != 1;
}

var func_2255()//Position - 0xD1003
{
	switch (func_348())
	{
		case 0:
		case 4:
			return Global_262145.f_16078 /* Tunable: EXEC_SMALL_SHIPMENT_DISCONNECT_DEPOSIT */;
		case 1:
		case 5:
			return Global_262145.f_16079 /* Tunable: EXEC_MEDIUM_SHIPMENT_DISCONNECT_DEPOSIT */;
		case 2:
		case 6:
		case 7:
			return Global_262145.f_16080 /* Tunable: EXEC_LARGE_SHIPMENT_DISCONNECT_DEPOSIT */;
		case 3:
			if (func_2256() < Global_262145.f_15629 /* Tunable: EXEC_SELL_2ND_CUBAN_THRESHOLD */)
			{
				return Global_262145.f_16078 /* Tunable: EXEC_SMALL_SHIPMENT_DISCONNECT_DEPOSIT */;
			}
			else if (func_2256() > Global_262145.f_15629 /* Tunable: EXEC_SELL_2ND_CUBAN_THRESHOLD */)
			{
				return Global_262145.f_16079 /* Tunable: EXEC_MEDIUM_SHIPMENT_DISCONNECT_DEPOSIT */;
			}
			else
			{
				return Global_262145.f_16080 /* Tunable: EXEC_LARGE_SHIPMENT_DISCONNECT_DEPOSIT */;
			}
			break;
	}
	return Global_262145.f_16078 /* Tunable: EXEC_SMALL_SHIPMENT_DISCONNECT_DEPOSIT */;
}

int func_2256()//Position - 0xD10AC
{
	return Local_157.f_583;
}

int func_2257()//Position - 0xD10BA
{
	return Local_157.f_594;
}

bool func_2258()//Position - 0xD10C8
{
	return func_7() == 4;
}

bool func_2259(int iParam0)//Position - 0xD10D6
{
	return BitTest(Local_157.f_2, iParam0);
}

bool func_2260()//Position - 0xD10E6
{
	return Global_262145.f_16077 /* Tunable: EXEC_DISCONNECT_DEPOSIT_DISABLE */;
}

int func_2261()//Position - 0xD10F5
{
	return Local_157.f_0;
}

int func_2262(int iParam0)//Position - 0xD1100
{
	return Local_158[iParam0 /*10*/].f_1;
}

void func_2263()//Position - 0xD1111
{
	int iVar0;
	int iVar1;
	struct<5> Var2;
	struct<3> Var3;
	struct<4> Var4;
	int iVar5;
	int iVar6;
	int iVar7;
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		switch (iVar1)
		{
			case 174:
				if (SCRIPT::GET_EVENT_DATA(1, iVar0, &Var2, 5))
				{
					switch (Var2.f_0)
					{
						case 1268159669:
							if (!__LIB_0__::func_864(&(Local_118.f_151)))
							{
								__LIB_0__::func_795(&(Local_118.f_151), 0, 0);
							}
							break;
						case -1001733190:
							if (__LIB_0__::func_864(&(Local_118.f_151)))
							{
								__LIB_0__::clearF_1Prop(&(Local_118.f_151));
							}
							break;
						case -1338419719:
							if (Var2.f_4 == Local_157.f_596)
							{
								if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
								{
									if (!func_337() || !BitTest(Local_118.f_112, Var2.f_3))
									{
										iVar5 = (26 + Var2.f_2);
										iVar6 = iVar5;
										func_34(iVar6);
										MISC::SET_BIT(&(Local_157.f_592), Var2.f_2);
										MISC::SET_BIT(&(Local_118.f_112), Var2.f_3);
									}
								}
								if (func_337())
								{
									if (__LIB_1__::func_693(Var2.f_1, 1, 1) && __LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
									{
										if (Var2.f_1 == PLAYER::PLAYER_ID() || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(Var2.f_1), true), true) < 5f)
										{
											func_2274();
										}
									}
								}
							}
							break;
						}
				}
				if (SCRIPT::GET_EVENT_DATA(1, iVar0, &Var3, 3))
				{
					switch (Var3.f_0)
					{
						case -2075123925:
							if (func_1696(1))
							{
								iVar7 = func_1762();
								if (iVar7 != -1)
								{
									if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_35[iVar7]))
									{
										if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_157.f_35[iVar7]))
										{
											VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON_SYNCED(func_40(iVar7), Var3.f_2, false);
										}
									}
								}
							}
							break;
						}
				}
				if (SCRIPT::GET_EVENT_DATA(1, iVar0, &Var4, 6))
				{
					if (Var4.f_0 == -1925643489)
					{
						if (__LIB_2__::func_61(PLAYER::PLAYER_ID(), Var4.f_2, 1))
						{
							if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
							{
								if (!func_2259(4))
								{
									func_2273(Var4.f_3);
									func_24(4);
								}
							}
						}
					}
				}
				break;
			case 186:
				func_2264(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_2264(int iParam0)//Position - 0xD1305
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<10> Var6;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var6, 13))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Var6.f_0))
		{
			if (ENTITY::IS_ENTITY_A_VEHICLE(Var6.f_0))
			{
				iVar3 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Var6.f_0);
				iVar5 = 0;
				while (iVar5 < func_21())
				{
					if (iVar3 == func_40(iVar5))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Var6.f_1))
						{
							if (ENTITY::IS_ENTITY_A_PED(Var6.f_1))
							{
								iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var6.f_1);
								if (PED::IS_PED_A_PLAYER(iVar1))
								{
									iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
									if (!func_38(NETWORK::PARTICIPANT_ID(), 17))
									{
										if (!func_41(iVar5))
										{
											if (func_190() == 0)
											{
												if (!func_185(iVar5))
												{
													Local_158[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_7 = iVar2;
													func_633(17);
												}
											}
										}
									}
								}
								if (iVar1 == PLAYER::PLAYER_PED_ID())
								{
									func_2272();
								}
								else
								{
									func_2269();
								}
							}
							else
							{
								func_2272();
							}
						}
					}
					iVar5++;
				}
			}
			else if (ENTITY::IS_ENTITY_A_PED(Var6.f_0))
			{
				iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var6.f_0);
				if (!func_38(NETWORK::PARTICIPANT_ID(), 5))
				{
					if (func_2267(ENTITY::GET_ENTITY_MODEL(iVar0)))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Var6.f_1))
						{
							if (ENTITY::IS_ENTITY_A_PED(Var6.f_1))
							{
								iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var6.f_1);
								if (iVar1 == PLAYER::PLAYER_PED_ID())
								{
									func_633(5);
								}
							}
						}
					}
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Var6.f_1))
		{
			if (ENTITY::IS_ENTITY_A_VEHICLE(Var6.f_1))
			{
				iVar4 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Var6.f_1);
				iVar5 = 0;
				while (iVar5 < func_21())
				{
					if (iVar4 == func_40(iVar5))
					{
						if (WEAPON::GET_WEAPON_DAMAGE_TYPE(Var6.f_6) == 7 || Var6.f_9)
						{
							func_2272();
							return;
						}
						if (Var6.f_6 == joaat("WEAPON_RAMMED_BY_CAR"))
						{
							func_2272();
							return;
						}
					}
					iVar5++;
				}
			}
			else if (ENTITY::IS_ENTITY_A_PED(Var6.f_1))
			{
				if (PED::IS_PED_A_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var6.f_1)))
				{
					iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var6.f_1));
					if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar2))
					{
						if (func_2265(iVar2, 1))
						{
							if (WEAPON::GET_WEAPON_DAMAGE_TYPE(Var6.f_6) == 7 || Var6.f_9)
							{
								func_2272();
								return;
							}
							if (Var6.f_6 == joaat("WEAPON_RAMMED_BY_CAR"))
							{
								func_2272();
							}
						}
					}
				}
			}
		}
	}
}

int func_2265(int iParam0, bool bParam1)//Position - 0xD1517
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < func_21())
	{
		if (func_2266(iParam0, iVar0, bParam1))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_2266(int iParam0, int iParam1, bool bParam2)//Position - 0xD1546
{
	if (!func_41(iParam1))
	{
		return 0;
	}
	if (bParam2)
	{
		if (func_185(iParam1))
		{
			return 0;
		}
	}
	if (!PED::IS_PED_IN_VEHICLE(PLAYER::GET_PLAYER_PED(iParam0), NETWORK::NET_TO_VEH(Local_157.f_35[iParam1]), false))
	{
		return 0;
	}
	return 1;
}

int func_2267(int iParam0)//Position - 0xD158F
{
	switch (iParam0)
	{
		case joaat("S_M_Y_Cop_01"):
		case joaat("S_F_Y_Cop_01"):
		case joaat("S_M_Y_Swat_01"):
		case joaat("S_M_M_FIBOffice_01"):
		case joaat("S_M_Y_Sheriff_01"):
		case joaat("S_F_Y_Sheriff_01"):
		case joaat("S_M_Y_Ranger_01"):
		case joaat("S_F_Y_Ranger_01"):
		case joaat("S_M_Y_BlackOps_01"):
		case joaat("S_M_M_Armoured_01"):
		case joaat("S_M_Y_Pilot_01"):
			return 1;
			break;
		case joaat("S_M_Y_Marine_03"):
			if (__LIB_1__::func_448(PLAYER::PLAYER_ID()) == 0 || BitTest(Global_2815059.f_4624, 0))
			{
				return 1;
			}
			break;
		case joaat("S_M_Y_Marine_01"):
		case joaat("S_M_Y_Marine_02"):
		case joaat("S_M_M_Marine_01"):
		case joaat("S_M_M_Marine_02"):
			if (BitTest(Global_2815059.f_4624, 0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_2269()//Position - 0xD164D
{
	int iVar0;
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (func_474())
		{
			iVar0 = func_2271();
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())))
			{
				Local_157.f_555 = (Local_157.f_555 - iVar0);
			}
			else
			{
				Local_157.f_555 = (Local_157.f_555 - iVar0);
			}
			func_2270();
			if (Local_157.f_555 < 1)
			{
				Local_157.f_555 = 1;
			}
		}
	}
}

void func_2270()//Position - 0xD16C6
{
	if (!__LIB_0__::func_864(&(Local_118.f_143)))
	{
		__LIB_0__::func_795(&(Local_118.f_143), 0, 0);
	}
	else
	{
		__LIB_0__::func_627(&(Local_118.f_143), 0, 0);
		__LIB_0__::func_795(&(Local_118.f_143), 0, 0);
	}
}

int func_2271()//Position - 0xD16FB
{
	int iVar0;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(Global_262145.f_15636 /* Tunable: EXEC_SELL_NODAMAGE_MIN_VALUE_REDUCTION */, Global_262145.f_15637 /* Tunable: EXEC_SELL_NODAMAGE_MAX_VALUE_REDUCTION */ + 1);
	return iVar0;
}

void func_2272()//Position - 0xD171B
{
	int iVar0;
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (func_474())
		{
			iVar0 = func_2271();
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())))
			{
				Local_157.f_555 = (Local_157.f_555 - iVar0);
			}
			else
			{
				Local_157.f_555 = (Local_157.f_555 - iVar0);
			}
			func_2270();
			if (Local_157.f_555 < 1)
			{
				Local_157.f_555 = 1;
			}
		}
	}
}

void func_2273(int iParam0)//Position - 0xD1794
{
	struct<14> Var0;
	int iVar1;
	int iVar2;
	Var0.f_2 = 922865935;
	Var0.f_10 = iParam0;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar1)))
		{
			if (__LIB_1__::func_693(iParam0, 0, 1))
			{
				if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iParam0))
				{
					MISC::SET_BIT(&iVar2, iVar1);
				}
				else if (!__LIB_2__::func_939(iParam0))
				{
					MISC::SET_BIT(&iVar2, iVar1);
				}
			}
		}
		iVar1++;
	}
	if (iVar2 != 0)
	{
		__LIB_1__::func_634(Var0, iVar2);
	}
}

void func_2274()//Position - 0xD180D
{
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Drop_Package", "DLC_Exec_Air_Drop_Sounds", false);
}

void func_2275()//Position - 0xD1821
{
	int iVar0;
	int iVar1;
	int iVar2;
	iLocal_147 = -1;
	if (BitTest(uLocal_144, PLAYER::PLAYER_ID()))
	{
		if (BitTest(uLocal_145, NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			if (!__LIB_2__::func_154(PLAYER::PLAYER_ID()))
			{
				iLocal_147 = NETWORK::PARTICIPANT_ID_TO_INT();
			}
			else if (__LIB_1__::func_5() && !__LIB_3__::func_155())
			{
				iVar0 = __LIB_2__::func_51();
				if (PED::IS_PED_A_PLAYER(iVar0))
				{
					iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
					if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar1))
					{
						iVar2 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar1);
						iLocal_147 = iVar2;
					}
				}
			}
		}
	}
}

int func_2284(bool bParam0)//Position - 0xD1997
{
	if (!__LIB_1__::func_836(PLAYER::PLAYER_ID(), 3) && func_2291(1))
	{
		return 1;
	}
	if (Global_2815059.f_5195.f_43)
	{
		Global_2815059.f_5195.f_43 = 0;
		return 1;
	}
	if (bParam0)
	{
		if (__LIB_1__::func_730() == __LIB_0__::getMinusOneOrNull() || !__LIB_1__::func_693(__LIB_1__::func_730(), 0, 1))
		{
			return 1;
		}
	}
	if (__LIB_1__::func_836(PLAYER::PLAYER_ID(), 1) && !__LIB_9__::func_704(PLAYER::PLAYER_ID()))
	{
		if (__LIB_30__::func_784())
		{
			return 1;
		}
	}
	return 0;
}

int func_2291(bool bParam0)//Position - 0xD1AD1
{
	bool bVar0;
	if (!__LIB_12__::func_548(1) && __LIB_1__::func_730() != PLAYER::PLAYER_ID())
	{
		bVar0 = false;
		if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_57 != __LIB_0__::getMinusOneOrNull())
		{
			if (__LIB_1__::func_693(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_57, 0, 1))
			{
				if ((Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_24 == 4 || Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_24 == 8) || Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_24 == 6)
				{
					bVar0 = true;
				}
			}
		}
		else if (__LIB_1__::func_726(__LIB_0__::func_492(PLAYER::PLAYER_ID())) == 0 || __LIB_1__::func_726(__LIB_0__::func_492(PLAYER::PLAYER_ID())) == 3)
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (bParam0)
			{
				__LIB_1__::func_928(31);
				if (__LIB_12__::func_654(__LIB_0__::func_492(PLAYER::PLAYER_ID())))
				{
					__LIB_1__::func_928(81);
				}
				if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_57 != __LIB_0__::getMinusOneOrNull() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_57))
				{
					Global_1888322 = __LIB_41__::func_941(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_57, -2, 0, 0, 0);
					if (!__LIB_1__::func_802(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_57))
					{
						__LIB_1__::func_928(88);
					}
				}
				else
				{
					Global_1888322 = 1;
				}
				Global_1888306 = { Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_105 };
			}
			return 1;
		}
	}
	return 0;
}

void func_2296(int iParam0)//Position - 0xD1ECF
{
	int iVar0;
	HUD::SET_FAKE_MINIMAP_MAX_ALTIMETER_HEIGHT(0f, false, 21);
	__LIB_19__::func_288(-1);
	if (iLocal_152 != -1)
	{
		__LIB_3__::func_422(&iLocal_152);
	}
	if (iParam0 && bLocal_329)
	{
		MISC::SET_BIT(&(Global_2815059.f_1802), 1);
	}
	func_2167(0);
	__LIB_4__::func_861(27);
	__LIB_4__::func_861(23);
	__LIB_4__::func_861(32);
	func_1838();
	func_1748();
	func_2375();
	func_2374();
	func_2373();
	func_2372();
	func_1648();
	func_1649();
	func_2371();
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_1674())
		{
			if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_833, 17))
			{
				PLAYER::SET_MAX_WANTED_LEVEL(5);
			}
		}
	}
	if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && __LIB_1__::func_501()) && func_190() != 6)
	{
		__LIB_1__::func_928(35);
	}
	if (func_190() != 0)
	{
		iVar0 = 0;
		while (iVar0 < func_21())
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_35[iVar0]) && !ENTITY::IS_ENTITY_DEAD(func_40(iVar0), false))
			{
				if (func_337())
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(func_42(iVar0)))
					{
						if (ENTITY::IS_ENTITY_IN_AIR(func_42(iVar0)))
						{
							if (func_190() != 6)
							{
								VEHICLE::SET_VEHICLE_ENGINE_ON(func_40(iVar0), false, true, false);
							}
						}
						else
						{
							func_1840(iVar0, 1);
							func_1839(iVar0, 1);
						}
					}
				}
				else if (func_190() != 6 || (func_35() && func_190() == 6))
				{
					if (func_274())
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(func_42(iVar0)))
						{
							VEHICLE::SET_BOAT_SINKS_WHEN_WRECKED(func_40(iVar0), true);
							VEHICLE::SET_VEHICLE_ENGINE_ON(func_40(iVar0), false, true, false);
							VEHICLE::SET_VEHICLE_ENGINE_HEALTH(func_40(iVar0), 0f);
							VEHICLE::SET_BOAT_WRECKED(func_40(iVar0));
						}
					}
					else
					{
						func_1840(iVar0, 0);
						func_1839(iVar0, 1);
					}
				}
			}
			iVar0++;
		}
	}
	func_2370();
	func_2369();
	func_2368();
	func_2367();
	func_2366();
	__LIB_15__::func_417(&(Local_157.f_578), 1);
	func_2364();
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
	}
	func_2217(0);
	if (func_483())
	{
		if (func_2192(17))
		{
			AUDIO::STOP_SOUND(Local_118.f_116);
			func_882(17);
		}
		AUDIO::RELEASE_SOUND_ID(Local_118.f_116);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		Global_1943929.f_2 = Local_157.f_8;
		Global_1943929.f_3 = Local_157.f_9;
		func_2354(func_10(), Local_157.f_384, Local_157.f_583, Local_157.f_54, Local_157.f_55, Local_157.f_66, -1, func_2363(), func_2362(), 1);
	}
	__LIB_20__::func_124(1, 0);
	__LIB_3__::func_0();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_2354(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, var uParam5, int iParam6, var uParam7, var uParam8, int iParam9)//Position - 0xD446F
{
	char* sVar0;
	struct<27> Var1;
	int iVar2;
	struct<28> Var3;
	struct<28> Var4;
	struct<29> Var5;
	sVar0 = SCRIPT::GET_THIS_SCRIPT_NAME();
	iVar2 = __LIB_2__::func_39(PLAYER::PLAYER_ID());
	Var1.f_0 = Global_1943929;
	Var1.f_1 = Global_1943929.f_1;
	Var1.f_4 = Global_1943929.f_4;
	Var1.f_5 = Global_1943929.f_5;
	Var1.f_6 = Global_1943929.f_6;
	Var1.f_7 = Global_1943929.f_7;
	Var1.f_8 = Global_1943929.f_8;
	Var1.f_9 = Global_1943929.f_9;
	Var1.f_10 = Global_1943929.f_10;
	Var1.f_2 = Global_1943929.f_2;
	Var1.f_3 = Global_1943929.f_3;
	Var1.f_11 = iParam3;
	Var1.f_12 = uParam2;
	Var1.f_13 = iParam0;
	Var1.f_14 = __LIB_30__::func_775();
	Var1.f_16 = uParam1;
	Var1.f_17 = __LIB_0__::func_492(PLAYER::PLAYER_ID());
	Var1.f_22 = uParam7;
	Var1.f_23 = uParam8;
	Var1.f_25 = __LIB_35__::func_787(1);
	Var1.f_26 = __LIB_35__::func_787(0);
	if (__LIB_1__::func_501())
	{
		Var1.f_24 = __LIB_1__::func_137(BitTest(Global_1946250.f_4, 4));
	}
	else
	{
		Var1.f_24 = 0;
	}
	if (iVar2 != __LIB_0__::getMinusOneOrNull() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
	{
		Var1.f_18 = iParam4;
		if (iParam3 != -1)
		{
			Var1.f_19 = __LIB_19__::func_947(iVar2, iParam3);
			Var1.f_20 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iParam4) / SYSTEM::TO_FLOAT(__LIB_19__::func_958(iParam3))) * 100f));
			Var1.f_21 = (100 - SYSTEM::ROUND(((SYSTEM::TO_FLOAT(__LIB_30__::func_778(iParam3, iVar2)) / SYSTEM::TO_FLOAT(__LIB_19__::func_958(iParam3))) * 100f)));
		}
		Var1.f_15 = __LIB_20__::func_469(iVar2);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_CONTRABAND_SELL"))
		{
			Var3 = { Var1 };
			Var3.f_27 = uParam5;
			STATS::PLAYSTATS_SELL_CONTRABAND_MISSION(&Var3);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_CONTRABAND_BUY") || MISC::ARE_STRINGS_EQUAL(sVar0, "fm_content_cargo"))
		{
			STATS::PLAYSTATS_BUY_CONTRABAND_MISSION(&Var1);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_CONTRABAND_DEFEND"))
		{
			if (iParam9 == 1)
			{
				Var4 = { Var1 };
				Var4.f_27 = uParam5;
				STATS::PLAYSTATS_DEFEND_CONTRABAND_MISSION(&Var4);
			}
			else
			{
				Var5 = { Var1 };
				Var5.f_27 = uParam5;
				Var5.f_28 = iParam6;
				STATS::PLAYSTATS_RECOVER_CONTRABAND_MISSION(&Var5);
			}
		}
	}
	__LIB_15__::func_588();
}

int func_2362()//Position - 0xD4865
{
	return ((Local_157.f_57 + Local_157.f_58) + Local_157.f_59);
}

int func_2363()//Position - 0xD487E
{
	if (func_190() == 4)
	{
		if (Local_157.f_60 == 0)
		{
			return (func_422() - Local_157.f_57);
		}
		else if (Local_157.f_60 == 1)
		{
			return (func_422() - Local_157.f_58);
		}
		else if (Local_157.f_60 == 2)
		{
			return (func_422() - Local_157.f_59);
		}
		return (func_422() - Local_157.f_56);
	}
	return 0;
}

void func_2364()//Position - 0xD48E4
{
	if (func_481())
	{
		if (func_2192(8))
		{
			__LIB_25__::func_426(0);
			func_882(8);
		}
	}
}

void func_2366()//Position - 0xD4922
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < func_9())
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_420());
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_499[iVar0 /*6*/]))
		{
			iVar1 = NETWORK::NET_TO_ENT(Local_157.f_499[iVar0 /*6*/]);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
				{
					if (__LIB_0__::func_939(Local_157.f_499[iVar0 /*6*/]))
					{
						ENTITY::SET_ENTITY_INVINCIBLE(iVar1, false);
						ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iVar1, true);
					}
					ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar1);
				}
			}
		}
		iVar0++;
	}
}

void func_2367()//Position - 0xD499F
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < func_210())
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_209(iVar0));
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_400[iVar0 /*8*/]))
		{
			iVar1 = NETWORK::NET_TO_ENT(Local_157.f_400[iVar0 /*8*/]);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
				{
					if (!__LIB_0__::func_951(Local_157.f_400[iVar0 /*8*/]))
					{
						ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_PED(Local_157.f_400[iVar0 /*8*/]), false);
						ENTITY::SET_ENTITY_CAN_BE_DAMAGED(NETWORK::NET_TO_PED(Local_157.f_400[iVar0 /*8*/]), true);
					}
					ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar1);
				}
			}
		}
		iVar0++;
	}
}

void func_2368()//Position - 0xD4A37
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < func_276())
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_271(iVar0));
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_42[iVar0]))
		{
			iVar1 = NETWORK::NET_TO_ENT(Local_157.f_42[iVar0]);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
				{
					if (__LIB_0__::func_121(NETWORK::NET_TO_PED(Local_157.f_42[iVar0])))
					{
						ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_PED(Local_157.f_42[iVar0]), false);
						ENTITY::SET_ENTITY_CAN_BE_DAMAGED(NETWORK::NET_TO_PED(Local_157.f_42[iVar0]), true);
					}
					ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar1);
				}
			}
		}
		iVar0++;
	}
}

void func_2369()//Position - 0xD4ACD
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < func_341())
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_340(iVar1));
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_39[iVar1]))
		{
			iVar0 = NETWORK::NET_TO_VEH(Local_157.f_39[iVar1]);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
				{
					ENTITY::SET_ENTITY_INVINCIBLE(iVar0, false);
					VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(iVar0, false);
					ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iVar0, true);
				}
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar0);
			}
		}
		iVar1++;
	}
}

void func_2370()//Position - 0xD4B4C
{
	int iVar0;
	int iVar1;
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_364());
	iVar1 = 0;
	while (iVar1 < func_21())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_157.f_35[iVar1]))
		{
			iVar0 = NETWORK::NET_TO_VEH(Local_157.f_35[iVar1]);
			if (ENTITY::DOES_ENTITY_EXIST(func_42(iVar1)))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(func_42(iVar1)))
				{
					if (!ENTITY::IS_ENTITY_DEAD(func_42(iVar1), false))
					{
						if (!func_337())
						{
							__LIB_0__::func_213(func_40(iVar1), 1093140480, 1, 1056964608, 0, 1, 0);
						}
						__LIB_15__::func_586(func_40(iVar1));
					}
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar0);
				}
			}
		}
		iVar1++;
	}
}

void func_2371()//Position - 0xD4BEA
{
	__LIB_12__::func_565("SCONTRA_TXT_6" /* GXT: The delivery vehicle is ready for moving, boss. Get it safely to the drop location to make the sale. Just be careful, the buyer is jumpy so you'll need to make the drop-off within the time limit. */);
	__LIB_12__::func_565("SCONTRA_TXT_7" /* GXT: The delivery vehicle is ready for moving, boss. Get it safely to the drop location to make the sale. Just be careful, there are multiple drop-offs to make. */);
	__LIB_12__::func_565("SCONTRA_TXT_1" /* GXT: The delivery vehicle is ready for moving, boss. Get it safely to the drop location to make the sale. Just be careful out there as others may try and take your shipment out. */);
	__LIB_12__::func_565("SCONTRA_TXT_4" /* GXT: The CEO is making a delivery. You know what to do - if anything happens to the goods we lose big. */);
	__LIB_12__::func_565("SCONTRA_TXT_8" /* GXT: Law enforcement had eyes on that drop. Lose them before the buyer freaks. */);
	__LIB_12__::func_565("SCONTRA_TXT_10" /* GXT: The buyer has put up a bonus on this one. Deliver the Special Cargo in mint condition to receive the most cash. Drive carefully! */);
	__LIB_12__::func_565("SCONTRA_TXT_11" /* GXT: Law enforcement put out a radar sweep for our team - stay low! */);
	__LIB_12__::func_565("SCONTRA_TXT_12" /* GXT: The buyer is being extra cautious with this one. They haven't given us their exact location, but pinged a Trackify signal for you to follow. Happy hunting! */);
	__LIB_12__::func_565("SCONTRA_TXT_13" /* GXT: Some locals are all set up to give you a rough landing. You'll need to deal with them before we can make the sale. */);
	__LIB_12__::func_565("SCONTRA_TXT_14" /* GXT: Stay sharp, I'm seeing hostiles coming in fast. Defend the goods at all costs. */);
	__LIB_12__::func_565("SCONTRA_TXT_15" /* GXT: We have company, making straight for our... company! Take them out. */);
	__LIB_12__::func_565("SCONTRA_TXT_16" /* GXT: I've seen how these guys operate before. I suggest taking them out – shaking them won't be easy. */);
	__LIB_12__::func_565("SCONTRA_TXT_17" /* GXT: Turns out the last drop is over a restricted area. Get ready for heavy resistance - and expect law enforcement. */);
	__LIB_12__::func_565("SCONTRA_TXT_18" /* GXT: Someone leaked the location of the boat. You'll need to get rid of them, or grab the boat and get out of there. Your call. */);
	__LIB_12__::func_565("SCONTRA_TXT_19" /* GXT: Enemies inbound – hold them off until the sale is complete. */);
}

void func_2372()//Position - 0xD4C79
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar1 = 0;
	while (iVar1 < func_21())
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_157.f_75[iVar0 /*30*/].f_4[iVar1]) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_157.f_75[iVar0 /*30*/].f_4[iVar1]))
			{
				iVar2 = NETWORK::NET_TO_ENT(Local_157.f_75[iVar0 /*30*/].f_4[iVar1]);
				ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar2);
			}
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_157.f_75[iVar0 /*30*/][iVar1]) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_157.f_75[iVar0 /*30*/][iVar1]))
			{
				iVar2 = NETWORK::NET_TO_ENT(Local_157.f_75[iVar0 /*30*/][iVar1]);
				ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar2);
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_2373()//Position - 0xD4D35
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 20)
	{
		func_1845(iVar0);
		iVar0++;
	}
}

void func_2374()//Position - 0xD4D56
{
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_118.f_142))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(Local_118.f_142, false);
	}
}

void func_2375()//Position - 0xD4D72
{
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_118.f_141))
	{
		GRAPHICS::REMOVE_PARTICLE_FX(Local_118.f_141, false);
	}
}

void func_2376(bool bParam0, bool bParam1)//Position - 0xD4D8E
{
	bool bVar0;
	var uVar1;
	if (!func_2192(0))
	{
		uVar1 = func_2444(func_190(), bParam0, bVar0, bParam1);
		__LIB_42__::func_26(bParam0, uVar1, 0, 0, -1, -1, -1, -1, -1, 0, -1, 0);
		func_2165(0);
	}
}

int func_2444(int iParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0xD7345
{
	if (bParam3)
	{
		return 5;
	}
	switch (iParam0)
	{
		case 2:
			return 8;
		case 3:
			return 6;
		case 4:
			return 2;
		case 1:
		case 6:
			if (bParam1)
			{
				return 1;
			}
			else if (bParam2)
			{
				return 7;
			}
			else
			{
				return 2;
			}
			break;
	}
	return 4;
}

int func_2445(struct<21> Param0)//Position - 0xD73A8
{
	int iVar0;
	__LIB_0__::func_935(__LIB_1__::func_32(Param0.f_0), Param0);
	func_2516();
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Local_157.f_551[iVar0] = -1;
		iVar0++;
	}
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(__LIB_43__::func_354(168, -1, -1, -1, -1, -1));
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(__LIB_30__::func_458(168, -1, -1, -1));
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(__LIB_41__::func_940(168, -1, 1, -1, -1, -1));
	__LIB_0__::func_895(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_157, 597, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_158, 41, 0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	Local_118.f_102 = { __LIB_35__::func_394() };
	__LIB_35__::func_793(0, 0, 0);
	return 1;
}

void func_2516()//Position - 0xD99B7
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Local_157.f_67[iVar0] = -1;
		iVar0++;
	}
}

