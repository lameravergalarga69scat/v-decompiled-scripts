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
	struct<3> Local_45 = { 0, 0, 0 } ;
	int iLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	int iLocal_50 = 0;
	struct<16> Local_51 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<16> Local_52 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	struct<3> Local_55 = { 0, 0, 0 } ;
	struct<3> Local_56 = { 0, 0, 0 } ;
	float fLocal_57 = 0f;
	var uLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	char* sLocal_65 = NULL;
	float fLocal_66 = 0f;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int* iLocal_71 = NULL;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	float fLocal_74 = 0f;
	struct<3> Local_75 = { 0, 0, 0 } ;
	struct<3> Local_76 = { 0, 0, 0 } ;
	float fLocal_77 = 0f;
	bool bLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	struct<3> Local_81 = { 0, 0, 0 } ;
	int iLocal_82 = 0;
	struct<3> Local_83[5];
	int* iLocal_84 = NULL;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	int* iLocal_87 = NULL;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	int* iLocal_90 = NULL;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	float fLocal_93[5] = { 0f, 0f, 0f, 0f, 0f };
	float fLocal_94 = 0f;
	int iLocal_95 = 0;
	bool bLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	var uLocal_101 = 16;
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
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	int iLocal_266 = 0;
	struct<100> Local_267 = { 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1 } ;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	struct<2> Local_274 = { 0, 5 } ;
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
	var uLocal_290 = 5;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
#endregion
void __EntryFunction__()//Position - 0x0
{
	bool bVar0;
	float fVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
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
	Local_45 = { 500f, 500f, 500f };
	iLocal_60 = -1;
	iLocal_61 = 2050;
	iLocal_62 = -1;
	iLocal_63 = -1;
	sLocal_65 = "CC_SUBSTR" /* GXT: ~INPUT_CONTEXT~ */;
	fLocal_66 = 125f;
	iLocal_67 = 1;
	iLocal_69 = 263;
	fLocal_77 = 4f;
	bLocal_78 = true;
	iLocal_79 = 6;
	iLocal_80 = 18;
	iLocal_82 = -1;
	bLocal_96 = true;
	iLocal_97 = 1;
	Local_56 = { ScriptParam_274.f_1[0 /*3*/] };
	Local_56 = { Local_56 };
	iLocal_54 = iLocal_54;
	Local_52 = { Local_52 };
	bVar0 = false;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(82))
	{
		func_153(1);
	}
	iLocal_53 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	iLocal_59 = 0;
	__LIB_7__::func_204(&Global_112037, 0);
	func_145();
	MISC::SET_THIS_IS_A_TRIGGER_SCRIPT(true);
	if (__LIB_0__::func_517(uLocal_58, 1))
	{
		iLocal_64 = 10;
	}
	else
	{
		iLocal_64 = 9;
	}
	while (!Global_38391)
	{
		SYSTEM::WAIT(0);
	}
	if (!__LIB_0__::func_517(uLocal_58, 8))
	{
		if (!__LIB_6__::func_763(iLocal_64))
		{
			if (__LIB_0__::func_573(0, iLocal_63))
			{
				func_153(0);
			}
			else
			{
				func_153(1);
			}
		}
	}
	if (iLocal_63 != -1)
	{
		if (!__LIB_0__::func_573(0, iLocal_63))
		{
			bLocal_78 = false;
		}
	}
	if (__LIB_0__::func_517(uLocal_58, 8388608))
	{
		func_153(1);
	}
	if (__LIB_0__::func_517(uLocal_58, 524288) && (__LIB_0__::func_569() && !__LIB_0__::func_568()))
	{
		func_153(1);
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME()) > 1 && !__LIB_0__::func_517(uLocal_58, 4194304))
	{
		if (iLocal_69 != 263)
		{
			__LIB_10__::func_604(iLocal_69, 1, 0);
			iLocal_69 = 263;
		}
		__LIB_29__::func_788(10);
	}
	while (true)
	{
		if (!__LIB_0__::func_517(uLocal_58, 268435456))
		{
			fVar1 = 0f;
			if (MISC::GET_GROUND_Z_FOR_3D_COORD(ScriptParam_274.f_1[0 /*3*/], &fVar1, false, false))
			{
				if (fVar1 != 0f)
				{
					ScriptParam_274.f_1[0 /*3*/].f_2 = fVar1;
					__LIB_0__::func_712(&uLocal_58, 268435456);
				}
			}
		}
		iLocal_53 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
		if (__LIB_0__::func_517(uLocal_58, 1048576))
		{
			if (ENTITY::IS_ENTITY_DEAD(iLocal_53, false))
			{
				func_153(1);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_53) && !ENTITY::IS_ENTITY_DEAD(iLocal_53, false))
		{
			Local_55 = { ENTITY::GET_ENTITY_COORDS(iLocal_53, true) };
			fLocal_57 = SYSTEM::VDIST2(Local_55, ScriptParam_274.f_1[0 /*3*/]);
			fLocal_57 = fLocal_57;
			Local_75 = { Local_55 };
			Local_76 = { ScriptParam_274.f_1[0 /*3*/] };
			Local_75.f_2 = 0f;
			Local_76.f_2 = 0f;
			fLocal_74 = SYSTEM::VDIST2(Local_75, Local_76);
			switch (iLocal_59)
			{
				case 0:
					if (__LIB_6__::func_763(iLocal_64) || (__LIB_0__::func_517(uLocal_58, 16) && !__LIB_0__::func_517(uLocal_58, 524288)))
					{
						iLocal_62 = -1;
						func_132();
						__LIB_29__::func_788(1);
					}
					else
					{
						if (fLocal_74 > (fLocal_66 * fLocal_66))
						{
							if (iLocal_69 != 263)
							{
								__LIB_10__::func_604(iLocal_69, 1, 0);
								iLocal_69 = 263;
							}
							__LIB_29__::func_788(10);
						}
						if ((Local_55.f_2 - ScriptParam_274.f_1[0 /*3*/].f_2) > 500f)
						{
						}
					}
					break;
				case 1:
					if (func_130() && fLocal_57 > ((fLocal_77 * 1.5f) * (fLocal_77 * 1.5f)))
					{
						iLocal_67 = iLocal_67;
						__LIB_29__::func_788(3);
					}
					else
					{
						func_132();
					}
					break;
				case 3:
					if (NETWORK::NETWORK_IS_IN_SESSION())
					{
						func_153(1);
						return;
					}
					if (!__LIB_6__::func_763(iLocal_64))
					{
						if (!__LIB_0__::func_517(uLocal_58, 8))
						{
							bVar2 = true;
							if (MISC::ARE_STRINGS_EQUAL(&(Global_100441.f_3), &Local_52))
							{
								Local_52 = { Local_51 };
								bVar2 = false;
							}
							if (bVar2)
							{
								func_153(0);
								break;
							}
						}
					}
					if (!__LIB_0__::func_517(uLocal_58, 4))
					{
						func_119();
						__LIB_0__::func_712(&uLocal_58, 4);
					}
					if (fLocal_74 > (fLocal_66 * fLocal_66) && !Global_100475)
					{
						if (iLocal_69 != 263)
						{
							if (__LIB_0__::func_39(6) && !__LIB_10__::func_861(iLocal_69))
							{
							}
							else
							{
								__LIB_10__::func_604(iLocal_69, 1, 0);
								iLocal_69 = 263;
							}
						}
						__LIB_29__::func_788(10);
					}
					else
					{
						Local_52 = { Local_51 };
						bVar3 = !__LIB_0__::func_517(uLocal_58, 64);
						__LIB_7__::func_204(&uLocal_58, 128);
						if (!func_116(3) && !Global_100475)
						{
							if (__LIB_0__::func_517(uLocal_58, 2097152))
							{
								if ((!__LIB_0__::func_517(uLocal_58, 1) || !ENTITY::DOES_ENTITY_EXIST(__LIB_11__::func_91())) && !Global_100475)
								{
									__LIB_29__::func_788(10);
									break;
								}
							}
						}
						if (__LIB_0__::func_517(uLocal_58, 524288) && (__LIB_0__::func_569() && !__LIB_0__::func_568()))
						{
							func_153(1);
						}
						if (__LIB_29__::func_787())
						{
							func_153(1);
						}
						if ((!__LIB_32__::func_573(6) || Global_112433) || __LIB_29__::func_786())
						{
							bVar3 = false;
						}
						if (!bLocal_78)
						{
							__LIB_6__::func_896(&uLocal_58, 128);
							bVar3 = false;
						}
						if (__LIB_0__::func_517(uLocal_58, 1))
						{
							if (!__LIB_0__::func_109())
							{
								__LIB_6__::func_896(&uLocal_58, 128);
								bVar3 = false;
							}
						}
						if (__LIB_0__::func_104(1))
						{
							bVar3 = false;
						}
						if (Global_78319)
						{
							bVar3 = false;
						}
						if (__LIB_0__::func_200())
						{
							bVar3 = false;
						}
						if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
						{
							bVar3 = false;
						}
						if (__LIB_0__::func_190() || __LIB_0__::func_191(8, -1))
						{
							bVar3 = false;
						}
						if (!PLAYER::CAN_PLAYER_START_MISSION(PLAYER::PLAYER_ID()))
						{
							bVar3 = false;
						}
						if (!PLAYER::IS_PLAYER_SCRIPT_CONTROL_ON(PLAYER::PLAYER_ID()))
						{
							bVar3 = false;
						}
						if (__LIB_0__::func_77(0) || __LIB_0__::func_661())
						{
							bVar3 = false;
						}
						if (bVar3)
						{
							if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_53, ScriptParam_274.f_1[0 /*3*/], fLocal_77, fLocal_77, 2f, false, true, iLocal_67))
							{
								bVar3 = false;
							}
							iVar4 = CLOCK::GET_CLOCK_HOURS();
							if (iLocal_79 > iLocal_80)
							{
								if (iVar4 < iLocal_79 && iVar4 >= iLocal_80)
								{
									__LIB_6__::func_896(&uLocal_58, 128);
									bVar3 = false;
									if (fLocal_57 < ((fLocal_77 * fLocal_77) + 4f))
									{
										if (!__LIB_0__::func_517(uLocal_58, 134217728))
										{
											__LIB_9__::func_777("MG_NA_TIME" /* GXT: This activity is not available at this time of day. Come back between ~1~:00 and ~1~:00 to participate in this activity. */, iLocal_79, iLocal_80);
											__LIB_6__::func_896(&uLocal_58, 134217728);
										}
									}
									else
									{
										__LIB_7__::func_204(&uLocal_58, 134217728);
									}
								}
							}
							else if (iVar4 < iLocal_79 || iVar4 >= iLocal_80)
							{
								__LIB_6__::func_896(&uLocal_58, 128);
								bVar3 = false;
								if (fLocal_57 < ((fLocal_77 * fLocal_77) + 4f))
								{
									if (!__LIB_0__::func_517(uLocal_58, 134217728))
									{
										__LIB_9__::func_777("MG_NA_TIME" /* GXT: This activity is not available at this time of day. Come back between ~1~:00 and ~1~:00 to participate in this activity. */, iLocal_79, iLocal_80);
										__LIB_6__::func_896(&uLocal_58, 134217728);
									}
								}
								else
								{
									__LIB_7__::func_204(&uLocal_58, 134217728);
								}
							}
							if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
							{
								bVar3 = false;
							}
							if (bVar3)
							{
								PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, 51 /*INPUT_CONTEXT*/);
								if (func_94(iLocal_54))
								{
									if (iLocal_60 == -1)
									{
										__LIB_7__::func_316(&iLocal_60, 4, sLocal_65, 0, 0, 0, 0);
										__LIB_6__::func_896(&uLocal_58, 2048);
									}
									else if (!__LIB_0__::func_517(uLocal_58, 2048) || !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
									{
										__LIB_7__::func_249(&iLocal_60);
										__LIB_7__::func_204(&uLocal_58, 2048);
									}
									if (__LIB_2__::func_187(iLocal_60, 1))
									{
										sLocal_65 = sLocal_65;
										__LIB_7__::func_249(&iLocal_60);
										__LIB_7__::func_204(&uLocal_58, 2048);
										SCRIPT::REQUEST_SCRIPT(&Local_52);
										PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 56);
										__LIB_29__::func_788(5);
									}
								}
								else
								{
									sLocal_65 = sLocal_65;
									__LIB_7__::func_249(&iLocal_60);
									__LIB_7__::func_204(&uLocal_58, 2048);
									SCRIPT::REQUEST_SCRIPT(&Local_52);
									PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 56);
									__LIB_29__::func_788(5);
								}
							}
						}
						if (!bVar3)
						{
							if (iLocal_60 != -1)
							{
								__LIB_7__::func_249(&iLocal_60);
								__LIB_7__::func_204(&uLocal_58, 2048);
								HUD::CLEAR_HELP(false);
							}
						}
					}
					func_52();
					break;
				case 5:
					PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, 51 /*INPUT_CONTEXT*/);
					if (SCRIPT::HAS_SCRIPT_LOADED(&Local_52))
					{
						if (iLocal_60 != -1)
						{
							__LIB_7__::func_249(&iLocal_60);
						}
						iVar5 = 2;
						bVar0 = false;
						if (__LIB_0__::func_517(uLocal_58, 1))
						{
							if (__LIB_0__::func_39(6) || __LIB_0__::func_39(7))
							{
								iVar5 = 1;
								bVar0 = true;
							}
						}
						if (iVar5 != 1)
						{
							iVar5 = __LIB_26__::func_296(&iLocal_62, 6, iLocal_64, 0, 0);
						}
						if (iVar5 == 1)
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_54, false))
							{
								ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_54);
							}
							if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
							{
								PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
							}
							__LIB_0__::func_566();
							if (Global_44238)
							{
								__LIB_32__::func_82(PLAYER::PLAYER_PED_ID());
							}
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 56);
							iLocal_50 = func_38();
							__LIB_6__::func_896(&uLocal_58, 2);
							__LIB_29__::func_788(6);
							__LIB_26__::func_455(&iLocal_71);
							if (iLocal_63 != -1)
							{
								__LIB_29__::func_780(iLocal_63);
								__LIB_6__::func_862(__LIB_29__::func_782(iLocal_63), 0, 0);
							}
						}
						else if (iVar5 == 2)
						{
							__LIB_0__::func_371();
						}
						else if (iVar5 == 0)
						{
							__LIB_29__::func_788(10);
						}
					}
					else
					{
						__LIB_0__::func_371();
					}
					break;
				case 6:
					if (__LIB_0__::func_517(Global_112037, 262144))
					{
						__LIB_7__::func_204(&Global_112037, 262144);
						func_29();
					}
					if (__LIB_0__::func_517(uLocal_58, 2097152))
					{
						if (!func_116(3) && !SCRIPT::IS_THREAD_ACTIVE(iLocal_50))
						{
							__LIB_29__::func_788(10);
						}
					}
					if (!SCRIPT::IS_THREAD_ACTIVE(iLocal_50))
					{
						STATS::PLAYSTATS_ODDJOB_DONE(SYSTEM::ROUND((__LIB_19__::func_812(&iLocal_71) * 1000f)), iLocal_63, false);
						__LIB_0__::func_735(&iLocal_71);
						__LIB_7__::func_204(&uLocal_58, 256);
						__LIB_11__::func_683();
						if (bVar0)
						{
							__LIB_7__::func_204(&uLocal_58, 2);
						}
						else if (__LIB_0__::func_517(uLocal_58, 2))
						{
							if (__LIB_0__::func_517(Global_112037, 0))
							{
								__LIB_10__::func_865(&iLocal_62);
								iLocal_62 = -1;
								__LIB_7__::func_204(&uLocal_58, 2);
							}
							else
							{
								__LIB_10__::func_865(&iLocal_62);
								iLocal_62 = -1;
								__LIB_7__::func_204(&uLocal_58, 2);
							}
						}
						__LIB_29__::func_788(0);
						if (iLocal_63 != -1)
						{
							if (__LIB_0__::func_517(Global_112037, 0))
							{
								STATS::PLAYSTATS_MISSION_CHECKPOINT(__LIB_29__::func_782(iLocal_63), 0, Global_100478, 0);
								__LIB_0__::func_47(__LIB_29__::func_782(iLocal_63), 0, Global_100478, 1, 0);
							}
							else
							{
								STATS::PLAYSTATS_MISSION_CHECKPOINT(__LIB_29__::func_782(iLocal_63), 0, Global_100478, 0);
								__LIB_0__::func_47(__LIB_29__::func_782(iLocal_63), 0, Global_100478, 0, 0);
							}
						}
						func_5();
						__LIB_7__::func_204(&Global_112037, 0);
						if (__LIB_0__::func_517(uLocal_58, 16777216))
						{
							func_153(1);
						}
						if (iLocal_63 != -1)
						{
							if (Global_113386.f_9085)
							{
								if (!__LIB_0__::func_573(0, iLocal_63))
								{
									func_153(1);
								}
							}
						}
					}
					__LIB_0__::func_371();
					break;
				case 8:
					__LIB_29__::func_788(0);
					break;
				case 10:
					func_153(1);
					break;
				case 9:
					if (fLocal_74 > (fLocal_66 * fLocal_66))
					{
						if (iLocal_69 != 263)
						{
							__LIB_10__::func_604(iLocal_69, 1, 0);
							iLocal_69 = 263;
						}
						__LIB_29__::func_788(10);
					}
					break;
				case 7:
					func_2();
					if (iLocal_69 != 263)
					{
						__LIB_10__::func_604(iLocal_69, 0, 0);
					}
					if (iLocal_60 != -1)
					{
						__LIB_7__::func_249(&iLocal_60);
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_65))
					{
						if (__LIB_0__::func_1(sLocal_65))
						{
							HUD::CLEAR_HELP(true);
						}
					}
					__LIB_29__::func_788(4);
					break;
				case 4:
					if ((iLocal_68 % 150) == 0)
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (iLocal_70 == 2)
							{
								if (iLocal_70 == 2)
								{
									if (__LIB_6__::func_763(iLocal_64) && __LIB_0__::func_573(0, iLocal_63))
									{
										func_145();
										if (iLocal_69 != 263)
										{
											__LIB_10__::func_604(iLocal_69, 1, 0);
										}
										__LIB_29__::func_788(0);
									}
								}
							}
							else if (iLocal_70 == 0)
							{
								if (fLocal_74 > (fLocal_66 * fLocal_66))
								{
									if (iLocal_69 != 263)
									{
										__LIB_10__::func_604(iLocal_69, 1, 0);
										iLocal_69 = 263;
									}
									__LIB_29__::func_788(10);
								}
							}
							else if (iLocal_70 == 1)
							{
								if (fLocal_74 > ((80f + 5f) * (80f + 5f)))
								{
									func_145();
									if (iLocal_69 != 263)
									{
										__LIB_10__::func_604(iLocal_69, 1, 0);
									}
									__LIB_29__::func_788(0);
								}
							}
						}
						else
						{
							__LIB_10__::func_604(iLocal_69, 1, 0);
						}
					}
					else
					{
						iLocal_68++;
					}
					break;
				}
		}
		SYSTEM::WAIT(0);
	}
}

void func_2()//Position - 0xB4F
{
	char* sVar0;
	__LIB_29__::func_779(&(Local_267.f_71));
	__LIB_29__::func_779(&(Local_267.f_77));
	__LIB_29__::func_779(&(Local_267.f_99));
	STREAMING::REMOVE_ANIM_DICT("amb@world_human_hang_out_street@male_a@idle_a");
	STREAMING::REMOVE_ANIM_DICT("amb@world_human_hang_out_street@male_b@idle_a");
	STREAMING::REMOVE_ANIM_DICT("amb@world_human_hang_out_street@male_c@idle_a");
	STREAMING::REMOVE_ANIM_DICT("amb@world_human_aa_smoke@male@idle_a");
	STREAMING::REMOVE_ANIM_DICT("random@street_race");
	STREAMING::REMOVE_ANIM_DICT("gestures@m@standing@casual");
	switch (iLocal_82)
	{
		case 0:
			sVar0 = "CanyonCliffs_Start";
			break;
		case 1:
			sVar0 = "RidgeRun_Start";
			break;
		case 3:
			sVar0 = "ValleyTrail_Start";
			break;
		case 4:
			sVar0 = "LakesideSplash_Start";
			break;
		case 5:
			sVar0 = "EcoFriendly_Start";
			break;
		case 2:
			sVar0 = "MinewardSpiral_Start";
			break;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		if (TASK::DOES_SCENARIO_GROUP_EXIST(sVar0))
		{
			if (TASK::IS_SCENARIO_GROUP_ENABLED(sVar0))
			{
				TASK::SET_SCENARIO_GROUP_ENABLED(sVar0, false);
			}
		}
	}
}

void func_5()//Position - 0xC5D
{
	if (__LIB_0__::func_517(Global_113386.f_19016, 1))
	{
		__LIB_7__::func_204(&(Global_113386.f_19016), 1);
		func_18();
		func_8();
		__LIB_0__::func_533();
	}
}

void func_8()//Position - 0xD00
{
	if (Global_113386.f_19016.f_18 < Global_113386.f_19016.f_19[iLocal_82] || Global_113386.f_19016.f_19[iLocal_82] == 0)
	{
		Global_113386.f_19016.f_19[iLocal_82] = Global_113386.f_19016.f_18;
		Global_113386.f_19016.f_18 = 999;
	}
	if (iLocal_82 == Global_113386.f_19016.f_1 || Global_113386.f_19016.f_1 == -1)
	{
		if (Global_113386.f_19016.f_1 != 5)
		{
			Global_113386.f_19016.f_1++;
			switch (Global_113386.f_19016.f_1)
			{
				case 1:
					__LIB_10__::func_604(70, 1, 0);
					__LIB_11__::func_504(70, 1);
					__LIB_10__::func_604(71, 1, 0);
					break;
				case 2:
					__LIB_10__::func_604(70, 1, 0);
					__LIB_11__::func_504(70, 1);
					__LIB_10__::func_604(71, 1, 0);
					__LIB_11__::func_504(71, 1);
					__LIB_10__::func_604(72, 1, 0);
					break;
				case 3:
					__LIB_10__::func_604(70, 1, 0);
					__LIB_11__::func_504(70, 1);
					__LIB_10__::func_604(71, 1, 0);
					__LIB_11__::func_504(71, 1);
					__LIB_10__::func_604(72, 1, 0);
					__LIB_11__::func_504(72, 1);
					__LIB_10__::func_604(73, 1, 0);
					break;
				case 4:
					__LIB_10__::func_604(70, 1, 0);
					__LIB_11__::func_504(70, 1);
					__LIB_10__::func_604(71, 1, 0);
					__LIB_11__::func_504(71, 1);
					__LIB_10__::func_604(72, 1, 0);
					__LIB_11__::func_504(72, 1);
					__LIB_10__::func_604(73, 1, 0);
					__LIB_11__::func_504(73, 1);
					__LIB_10__::func_604(74, 1, 0);
					break;
				case 5:
					__LIB_10__::func_604(70, 1, 0);
					__LIB_11__::func_504(70, 1);
					__LIB_10__::func_604(71, 1, 0);
					__LIB_11__::func_504(71, 1);
					__LIB_10__::func_604(72, 1, 0);
					__LIB_11__::func_504(72, 1);
					__LIB_10__::func_604(73, 1, 0);
					__LIB_11__::func_504(73, 1);
					__LIB_10__::func_604(74, 1, 0);
					__LIB_11__::func_504(74, 1);
					__LIB_10__::func_604(75, 1, 0);
					break;
			}
			__LIB_18__::func_203("OFFR_NEW" /* GXT: New offroad race unlocked at ~BLIP_OFF_ROAD_RACING~ */, 0, 0, -1, 10000, 7, 0, 0, 0);
		}
		else
		{
			__LIB_10__::func_604(70, 1, 0);
			__LIB_11__::func_504(70, 1);
			__LIB_10__::func_604(71, 1, 0);
			__LIB_11__::func_504(71, 1);
			__LIB_10__::func_604(73, 1, 0);
			__LIB_11__::func_504(73, 1);
			__LIB_10__::func_604(74, 1, 0);
			__LIB_11__::func_504(74, 1);
			__LIB_10__::func_604(75, 1, 0);
			__LIB_11__::func_504(75, 1);
			__LIB_10__::func_604(72, 1, 0);
			__LIB_11__::func_504(72, 1);
		}
		switch (Global_113386.f_19016.f_1)
		{
			case 0:
				__LIB_20__::func_576(70);
				__LIB_20__::func_574(71);
				break;
			case 1:
				__LIB_20__::func_576(71);
				__LIB_20__::func_574(72);
				break;
			case 2:
				__LIB_20__::func_576(72);
				__LIB_20__::func_574(73);
				break;
			case 3:
				__LIB_20__::func_576(73);
				__LIB_20__::func_574(74);
				break;
			case 4:
				__LIB_20__::func_576(74);
				__LIB_20__::func_574(75);
				break;
			case 5:
				__LIB_20__::func_576(75);
				break;
			}
	}
}

void func_18()//Position - 0x1551
{
	PED::REMOVE_SCENARIO_BLOCKING_AREAS();
	TASK::RESET_SCENARIO_TYPES_ENABLED();
	switch (iLocal_82)
	{
		case 0:
			PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(-223.42f, 3948.36f, 36.52f, -212.37f, 3818.97f, 37.53f, 50f, 1);
			break;
		case 1:
			PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(-509.12537f, 1987.582f, 205.3305f, -948.5215f, 2752.7415f, 25.351442f, 300f, 1);
			break;
		case 3:
			PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(-1943.822f, 4462.2856f, 0f, -229.07834f, 4227.072f, 50f, 250f, 1);
			break;
		case 4:
			break;
		case 5:
			PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(2242.488f, 2568.146f, -10f, 2242.488f, 1568.146f, 200f, 1000f, 1);
			break;
		case 2:
			PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(2809.9475f, 2993.644f, -9.3564f, 2952.9688f, 2530.636f, 177.1921f, 500f, 1);
			break;
	}
}

int func_29()//Position - 0x1817
{
	func_8();
	return 1;
}

int func_38()//Position - 0x1A8D
{
	struct<18> Var0;
	int iVar1;
	int iVar2;
	HUD::CLEAR_HELP(true);
	Var0.f_4 = 5;
	Var0.f_10 = 5;
	Var0.f_0 = iLocal_82;
	Var0.f_1 = { Local_81 };
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Var0.f_4)
	{
		Var0.f_4[iVar1] = Local_267[iVar1 /*14*/];
		Var0.f_10[iVar1] = Local_267[iVar1 /*14*/].f_1;
		iVar1++;
	}
	Var0.f_16 = Local_267.f_83;
	Var0.f_17 = Local_267.f_83.f_1;
	GRAPHICS::ANIMPOSTFX_PLAY("SwitchSceneNeutral", 0, true);
	SYSTEM::WAIT(400);
	iVar2 = SYSTEM::START_NEW_SCRIPT_WITH_ARGS(&Local_51, &Var0, 18, iLocal_61);
	SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&Local_51);
	return iVar2;
}

void func_52()//Position - 0x1FD4
{
	float fVar0;
	fVar0 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_81);
	if (fVar0 < 62500f)
	{
		func_82();
		func_79();
		if (iLocal_97)
		{
			if (fVar0 < 64f)
			{
				func_78();
				iLocal_97 = 0;
			}
		}
		if (fVar0 < 400f)
		{
			func_56();
		}
	}
	if (!iLocal_98)
	{
		if (func_54())
		{
			iLocal_98 = 1;
			__LIB_29__::func_807();
		}
	}
}

int func_54()//Position - 0x204A
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < func_55())
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_267[iVar0 /*14*/]) || !ENTITY::DOES_ENTITY_EXIST(Local_267[iVar0 /*14*/].f_1))
		{
			return 0;
		}
		iVar0++;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_267.f_83) || !ENTITY::DOES_ENTITY_EXIST(Local_267.f_83.f_1))
	{
		return 0;
	}
	return 1;
}

int func_55()//Position - 0x20B2
{
	switch (iLocal_82)
	{
		case 0:
		case 3:
		case 5:
		case 2:
			return 5;
			break;
		case 1:
		case 4:
			return 4;
			break;
	}
	return 0;
}

void func_56()//Position - 0x20F4
{
	int iVar0;
	char* sVar1;
	if (!__LIB_0__::func_736(&iLocal_90))
	{
		__LIB_18__::func_276(&iLocal_90);
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_95) && !ENTITY::IS_ENTITY_DEAD(iLocal_95, false))
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_95))
		{
			return;
		}
	}
	if (__LIB_19__::func_812(&iLocal_90) >= 8f)
	{
		iVar0 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) % 3) + 1;
		if (iVar0 > 0 && iVar0 <= 3)
		{
			if (ENTITY::IS_ENTITY_DEAD(Local_267[(iVar0 - 1) /*14*/], false))
			{
				return;
			}
			switch (iVar0)
			{
				case 1:
					sVar1 = "ORR_GUY1";
					break;
				case 2:
					sVar1 = "ORR_GUY2";
					break;
				case 3:
					sVar1 = "ORR_GUY3";
					break;
			}
			__LIB_37__::func_799(&uLocal_101, "ORRAUD", sVar1, 3, 0, 0, 0);
			__LIB_6__::func_892(&iLocal_90);
		}
	}
}

void func_78()//Position - 0x2A66
{
	int iVar0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !ENTITY::IS_ENTITY_DEAD(Local_267.f_83, false))
	{
		iVar0 = CLOCK::GET_CLOCK_HOURS();
		if (iVar0 <= iLocal_79 && iVar0 >= iLocal_80)
		{
			iLocal_97 = 0;
			return;
		}
		CAM::SET_GAMEPLAY_ENTITY_HINT(Local_267.f_83, 0f, 0f, 0.75f, true, 2000, 2000, 2000, 0);
	}
}

void func_79()//Position - 0x2AC2
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = CLOCK::GET_CLOCK_HOURS();
	if (iVar0 <= iLocal_79 && iVar0 >= iLocal_80)
	{
		iLocal_266 = 0;
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_95, false) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		switch (iLocal_266)
		{
			case 0:
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_95, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < 64f && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iLocal_99 = 0;
					iLocal_100 = 0;
					iLocal_266 = 1;
				}
				break;
			case 1:
				TASK::OPEN_SEQUENCE_TASK(&iVar1);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
				TASK::CLOSE_SEQUENCE_TASK(iVar1);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_95, iVar1);
				TASK::CLEAR_SEQUENCE_TASK(&iVar1);
				iLocal_266 = 2;
				break;
			case 2:
				if ((TASK::GET_SCRIPT_TASK_STATUS(iLocal_95, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1 || PED::IS_PED_FACING_PED(iLocal_95, PLAYER::PLAYER_PED_ID(), 20f)) && !AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_95, PLAYER::PLAYER_PED_ID(), -1);
					if (!iLocal_100)
					{
						__LIB_5__::func_759(iLocal_95, "PRERACE_CHAT", "A_M_Y_RACER_01_WHITE_MINI_01", 11);
					}
					else
					{
						__LIB_5__::func_759(iLocal_95, "PRERACE_TAUNT", "A_M_Y_RACER_01_WHITE_MINI_01", 11);
					}
					iLocal_266 = 3;
				}
				break;
			case 3:
				if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_95))
				{
					__LIB_6__::func_892(&iLocal_87);
					TASK::TASK_PLAY_ANIM(iLocal_95, "random@street_race", "_streetracer_wait_loop", 4f, -4f, -1, 9, 0f, false, false, false);
					iLocal_266 = 4;
				}
				break;
			case 4:
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_95, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > 225f)
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar2);
					TASK::TASK_ACHIEVE_HEADING(0, Local_267.f_83.f_9, 1000);
					TASK::TASK_PLAY_ANIM(0, Local_267.f_83.f_12, Local_267.f_83.f_13, 4f, -8f, -1, 1, 0f, false, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iVar2);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_95, iVar2);
					TASK::CLEAR_SEQUENCE_TASK(&iVar2);
					iLocal_266 = 0;
				}
				if (__LIB_0__::func_736(&iLocal_87))
				{
					if (__LIB_19__::func_812(&iLocal_87) >= 5f && !iLocal_99)
					{
						iLocal_99 = 1;
						iLocal_266 = 1;
					}
					else if (__LIB_19__::func_812(&iLocal_87) >= 10f && !iLocal_100)
					{
						iLocal_100 = 1;
						iLocal_266 = 1;
					}
				}
				break;
			case 5:
				break;
			}
	}
}

void func_82()//Position - 0x2EFB
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_267[iVar2 /*14*/].f_1) && ENTITY::DOES_ENTITY_EXIST(Local_267[iVar2 /*14*/]))
		{
			if (func_87(Local_267[iVar2 /*14*/], 1, 0, 0, 0) || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_267[iVar2 /*14*/].f_1, true))
			{
				func_85();
				__LIB_29__::func_800(iLocal_69);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			}
			if (!PED::IS_PED_INJURED(Local_267[iVar2 /*14*/]))
			{
				if (__LIB_0__::func_736(&(Local_83[iVar2 /*3*/])))
				{
					if (__LIB_19__::func_812(&(Local_83[iVar2 /*3*/])) > fLocal_93[iVar2])
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_267[iVar2 /*14*/].f_1, false) && PED::IS_PED_IN_VEHICLE(Local_267[iVar2 /*14*/], Local_267[iVar2 /*14*/].f_1, false))
						{
							iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(250, 500);
							iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(250, 500);
							TASK::OPEN_SEQUENCE_TASK(&iVar3);
							TASK::TASK_VEHICLE_TEMP_ACTION(0, Local_267[iVar2 /*14*/].f_1, 1, iVar0);
							TASK::TASK_VEHICLE_TEMP_ACTION(0, Local_267[iVar2 /*14*/].f_1, 31, iVar1);
							TASK::CLOSE_SEQUENCE_TASK(iVar3);
							if (!PED::IS_PED_INJURED(Local_267[iVar2 /*14*/]))
							{
								TASK::TASK_PERFORM_SEQUENCE(Local_267[iVar2 /*14*/], iVar3);
							}
							TASK::CLEAR_SEQUENCE_TASK(&iVar3);
						}
						__LIB_6__::func_892(&(Local_83[iVar2 /*3*/]));
						fLocal_93[iVar2] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 3f);
					}
				}
				else
				{
					__LIB_18__::func_276(&(Local_83[iVar2 /*3*/]));
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_267[iVar2 /*14*/], false))
			{
				if ((ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), Local_267[iVar2 /*14*/]) && !PED::IS_PED_RAGDOLL(Local_267[iVar2 /*14*/])) && !TASK::IS_PED_GETTING_UP(Local_267[iVar2 /*14*/]))
				{
					Local_267[iVar2 /*14*/].f_11 = 1;
				}
				else if (Local_267[iVar2 /*14*/].f_11)
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar3);
					TASK::TASK_ACHIEVE_HEADING(0, Local_267[iVar2 /*14*/].f_9, 1000);
					TASK::TASK_PLAY_ANIM(0, Local_267[iVar2 /*14*/].f_12, Local_267[iVar2 /*14*/].f_13, 4f, -8f, -1, 1, 0f, false, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iVar3);
					TASK::TASK_PERFORM_SEQUENCE(Local_267[iVar2 /*14*/], iVar3);
					TASK::CLEAR_SEQUENCE_TASK(&iVar3);
					Local_267[iVar2 /*14*/].f_11 = 0;
				}
				if (PED::IS_PED_RAGDOLL(Local_267[iVar2 /*14*/]) || TASK::IS_PED_GETTING_UP(Local_267[iVar2 /*14*/]))
				{
					if (!Local_267[iVar2 /*14*/].f_10 && (PED::IS_PED_RAGDOLL(Local_267[iVar2 /*14*/]) || TASK::IS_PED_GETTING_UP(Local_267[iVar2 /*14*/])))
					{
						Local_267.f_101++;
					}
					Local_267[iVar2 /*14*/].f_10 = 1;
				}
				else if (Local_267[iVar2 /*14*/].f_10)
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar3);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 1000);
					TASK::TASK_PLAY_ANIM(0, "gestures@m@standing@casual", func_83(), 8f, -8f, -1, 0, 0f, false, false, false);
					TASK::TASK_ACHIEVE_HEADING(0, Local_267[iVar2 /*14*/].f_9, 1000);
					TASK::TASK_PLAY_ANIM(0, Local_267[iVar2 /*14*/].f_12, Local_267[iVar2 /*14*/].f_13, 4f, -8f, -1, 1, 0f, false, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iVar3);
					TASK::TASK_PERFORM_SEQUENCE(Local_267[iVar2 /*14*/], iVar3);
					TASK::CLEAR_SEQUENCE_TASK(&iVar3);
					Local_267[iVar2 /*14*/].f_10 = 0;
				}
			}
		}
		iVar2++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_267.f_83.f_1) && ENTITY::DOES_ENTITY_EXIST(Local_267.f_83))
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_267.f_83.f_1, false))
		{
			iLocal_54 = Local_267.f_83.f_1;
		}
		if (func_87(Local_267.f_83, 1, 0, 0, 0))
		{
			func_85();
			__LIB_29__::func_800(iLocal_69);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		}
		if (!PED::IS_PED_INJURED(Local_267.f_83))
		{
			if (__LIB_0__::func_736(&iLocal_84))
			{
				if (__LIB_19__::func_812(&iLocal_84) > fLocal_94)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_267.f_83.f_1, false) && PED::IS_PED_IN_VEHICLE(Local_267.f_83, Local_267.f_83.f_1, false))
					{
						iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(250, 500);
						iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(250, 500);
						TASK::OPEN_SEQUENCE_TASK(&iVar3);
						TASK::TASK_VEHICLE_TEMP_ACTION(0, Local_267.f_83.f_1, 1, iVar0);
						TASK::TASK_VEHICLE_TEMP_ACTION(0, Local_267.f_83.f_1, 31, iVar1);
						TASK::CLOSE_SEQUENCE_TASK(iVar3);
						if (!PED::IS_PED_INJURED(Local_267.f_83))
						{
							TASK::TASK_PERFORM_SEQUENCE(Local_267.f_83, iVar3);
						}
						TASK::CLEAR_SEQUENCE_TASK(&iVar3);
					}
					__LIB_6__::func_892(&iLocal_84);
					fLocal_94 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 3f);
				}
			}
			else
			{
				__LIB_18__::func_276(&iLocal_84);
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_267.f_83, false))
		{
			if ((ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), Local_267.f_83) && !PED::IS_PED_RAGDOLL(Local_267.f_83)) && !TASK::IS_PED_GETTING_UP(Local_267.f_83))
			{
				Local_267.f_83.f_11 = 1;
			}
			else if (Local_267.f_83.f_11)
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar3);
				TASK::TASK_ACHIEVE_HEADING(0, Local_267.f_83.f_9, 1000);
				TASK::TASK_PLAY_ANIM(0, Local_267.f_83.f_12, Local_267.f_83.f_13, 4f, -8f, -1, 1, 0f, false, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iVar3);
				TASK::TASK_PERFORM_SEQUENCE(Local_267.f_83, iVar3);
				TASK::CLEAR_SEQUENCE_TASK(&iVar3);
				Local_267.f_83.f_11 = 0;
			}
			if (PED::IS_PED_RAGDOLL(Local_267.f_83) || TASK::IS_PED_GETTING_UP(Local_267.f_83))
			{
				if (!Local_267.f_83.f_10)
				{
					Local_267.f_101++;
				}
				Local_267.f_83.f_10 = 1;
			}
			else if (Local_267.f_83.f_10)
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar3);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 1000);
				TASK::TASK_PLAY_ANIM(0, "gestures@m@standing@casual", func_83(), 8f, -8f, -1, 0, 0f, false, false, false);
				TASK::TASK_ACHIEVE_HEADING(0, Local_267.f_83.f_9, 1000);
				TASK::TASK_PLAY_ANIM(0, Local_267.f_83.f_12, Local_267.f_83.f_13, 8f, -8f, -1, 0, 0f, false, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iVar3);
				TASK::TASK_PERFORM_SEQUENCE(Local_267.f_83, iVar3);
				TASK::CLEAR_SEQUENCE_TASK(&iVar3);
				iLocal_266 = 4;
				__LIB_6__::func_892(&iLocal_87);
				Local_267.f_83.f_10 = 0;
			}
		}
	}
}

char* func_83()//Position - 0x3499
{
	int iVar0;
	char* sVar1;
	iVar0 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) % 2);
	switch (iVar0)
	{
		case 0:
			sVar1 = "gesture_what_hard";
			break;
		case 1:
		default:
			sVar1 = "gesture_what_soft";
			break;
	}
	return sVar1;
}

void func_85()//Position - 0x3518
{
	int iVar0[10];
	int iVar1;
	int iVar2;
	PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &iVar0, -1);
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < iVar0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar0[iVar2]) && !PED::IS_PED_INJURED(iVar0[iVar2]))
		{
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 4))
			{
				TASK::TASK_SMART_FLEE_PED(iVar0[iVar2], PLAYER::PLAYER_PED_ID(), 100f, -1, false, false);
			}
			else
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar1);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), MISC::GET_RANDOM_INT_IN_RANGE(300, 900));
				TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(iVar1);
				TASK::TASK_PERFORM_SEQUENCE(iVar0[iVar2], iVar1);
				TASK::CLEAR_SEQUENCE_TASK(&iVar1);
			}
		}
		iVar2++;
	}
	switch (Global_113386.f_19016.f_1)
	{
		case 0:
			__LIB_29__::func_785(0);
			break;
		case 1:
			__LIB_29__::func_785(0);
			break;
		case 3:
			__LIB_29__::func_785(0);
			break;
		case 4:
			__LIB_29__::func_785(0);
			break;
		case 5:
			__LIB_29__::func_785(0);
			break;
		case 2:
			__LIB_29__::func_785(0);
			break;
	}
}

int func_87(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x3649
{
	int iVar0;
	struct<3> Var1;
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (Local_267.f_101 >= 3)
	{
		return 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
			if (bParam1)
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), true))
				{
					return 1;
				}
			}
			if (bParam2)
			{
				if (PED::IS_PED_IN_COMBAT(iParam0, iVar0))
				{
					return 1;
				}
			}
			if (bParam4)
			{
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar0, iParam0))
				{
					return 1;
				}
			}
			if (bParam3)
			{
				if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0))
				{
					if (__LIB_10__::func_589(iParam0, 1) < 20f)
					{
						return 1;
					}
				}
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(PED::GET_VEHICLE_PED_IS_IN(iParam0, false), iVar0, true))
				{
					return 1;
				}
			}
			if (PED::IS_PED_FLEEING(iParam0))
			{
				return 1;
			}
			if (WEAPON::IS_PED_ARMED(iVar0, 4))
			{
				if (PED::IS_PED_SHOOTING(iVar0))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(iParam0, ENTITY::GET_ENTITY_COORDS(iVar0, true), 45f, 45f, 45f, false, true, 0))
					{
						return 1;
					}
				}
			}
			if (MISC::IS_BULLET_IN_AREA(Var1, 4f, true))
			{
				return 1;
			}
			if (MISC::IS_PROJECTILE_IN_AREA((Var1.f_0 - 5f), (Var1.f_1 - 5f), (Var1.f_2 - 5f), (Var1.f_0 + 5f), (Var1.f_1 + 5f), (Var1.f_2 + 5f), false))
			{
				return 1;
			}
			if (PED::IS_PED_BEING_JACKED(iParam0))
			{
				if (PED::GET_PEDS_JACKER(iParam0) == iVar0)
				{
					return 1;
				}
			}
			if ((FIRE::IS_EXPLOSION_IN_SPHERE(-1, Var1, 25f) && !FIRE::IS_EXPLOSION_IN_SPHERE(11, Var1, 25f)) && !FIRE::IS_EXPLOSION_IN_SPHERE(13, Var1, 25f))
			{
				return 1;
			}
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iParam0);
		}
		else if (bParam1)
		{
			return 1;
		}
	}
	return 0;
}

int func_94(int iParam0)//Position - 0x3AEE
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0, false))
	{
		return 0;
	}
	else
	{
		return 1;
	}
	return 1;
}

int func_116(int iParam0)//Position - 0x454C
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		case 1:
			if (__LIB_0__::func_39(6) || __LIB_0__::func_39(7))
			{
				return 1;
			}
			else
			{
				return func_116(3);
			}
			break;
		case 2:
			return 1;
			break;
		case 3:
			if (__LIB_6__::func_763(5))
			{
				if (__LIB_32__::func_573(4))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_119()//Position - 0x4608
{
	int iVar0;
	char* sVar1;
	iVar0 = CLOCK::GET_CLOCK_HOURS();
	if ((iVar0 <= iLocal_79 && iVar0 >= iLocal_80) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) != 0)
	{
		return;
	}
	if (bLocal_96)
	{
		func_129();
		func_128();
		switch (iLocal_82)
		{
			case 0:
				func_127(-1930.38f, 4441.9f, 38.12f, 260.86f, -1933.4417f, 4440.8657f, 37.2504f, 184.125f);
				func_127(-1931.24f, 4440.26f, 38.05f, 257.2117f, -1932.7954f, 4438.275f, 37.402f, 78.7749f);
				func_127(-1935.01f, 4442.57f, 37.48f, 263.59f, -1934.964f, 4438.306f, 37.1741f, 297.2304f);
				func_127(-1935.5f, 4440.32f, 37.48f, 258.09f, -1937.2506f, 4438.761f, 36.9256f, 23.8377f);
				func_127(-1939.63f, 4440.46f, 37.25f, 253.32f, -1938.3187f, 4439.913f, 36.7166f, 250.6112f);
				func_126(-1939.5636f, 4443.3057f, 36.3803f, 262.3551f, -1936.2085f, 4444.125f, 36.8594f, 123.8187f);
				break;
			case 1:
				func_127(-520.2097f, 2010.8163f, 203.6035f, 17.0169f, -517.2971f, 2008.383f, 204.0454f, 2.9896f);
				func_127(-516.9937f, 2013.9797f, 203.5907f, 19.3803f, -517.1741f, 2010.8132f, 203.8412f, 125.7555f);
				func_127(-518.3414f, 2005.4489f, 204.1878f, 20.7231f, -519.0882f, 2013.6492f, 203.3304f, 195.7951f);
				func_127(-514.8247f, 2008.5737f, 204.3629f, 20.2278f, -514.2933f, 2004.9231f, 204.5935f, 126.8655f);
				func_126(-516.1545f, 1999.374f, 204.7715f, 18.7907f, -515.4201f, 2003.6216f, 204.5549f, 1.757f);
				break;
			case 3:
				func_127(-225.41f, 4227.53f, 44.45f, 82.7f, -231.9795f, 4226.31f, 43.8587f, 353.3938f);
				func_127(-233.16f, 4225.81f, 44.29f, 76.66f, -231.3181f, 4229.2505f, 43.8681f, 179.3787f);
				func_127(-233.33f, 4228.89f, 44.35f, 80.88f, -229.4769f, 4226.1016f, 43.8909f, 311.8915f);
				func_127(-229.58f, 4225.21f, 44.34f, 75.78f, -227.6066f, 4228.867f, 43.9069f, 186.6535f);
				func_127(-228.85f, 4227.71f, 44.57f, 83.38f, -226.7015f, 4226.6826f, 43.8597f, 28.0083f);
				func_126(-225.6736f, 4224.5034f, 43.8435f, 77.7579f, -227.2893f, 4224.6987f, 43.8335f, 36.55f);
				break;
			case 4:
				func_127(1608.91f, 3845.06f, 33.94f, 307.24f, 1610.476f, 3839.1633f, 32.9854f, 29.8332f);
				func_127(1606.2f, 3838.41f, 33.62f, 307.44f, 1612.9076f, 3841.4924f, 32.9721f, 78.3f);
				func_127(1610.47f, 3842.26f, 33.61f, 311.44f, 1608.0966f, 3842.6758f, 33.3217f, 198.5355f);
				func_127(1604.49f, 3840.42f, 34.18f, 308.19f, 1608.4274f, 3837.3677f, 32.9989f, 9.9463f);
				func_126(1603.4052f, 3836.324f, 33.1144f, 305.055f, 1605.7883f, 3840.2363f, 33.2826f, 288.7775f);
				break;
			case 5:
				func_127(2046.7721f, 2130.4421f, 91.9486f, 233.1493f, 2036.1232f, 2133.9807f, 92.615f, 260.0519f);
				func_127(2045.3445f, 2126.3523f, 91.9358f, 236.3633f, 2044.4219f, 2128.9607f, 92.088f, 47.8797f);
				func_127(2036.512f, 2137.8071f, 92.6507f, 237.2446f, 2041.778f, 2131.3538f, 92.4544f, 226.7534f);
				func_127(2041.739f, 2134.3242f, 92.4013f, 232.956f, 2039.6033f, 2132.5635f, 92.6648f, 61.0834f);
				func_127(2039.7745f, 2130.025f, 92.5324f, 241.6337f, 2038.7444f, 2134.5232f, 92.6235f, 128.98f);
				func_126(2030.8984f, 2134.1968f, 92.5014f, 249.4471f, 2036.5801f, 2135.382f, 92.605f, 233.2111f);
				break;
			case 2:
				func_127(2992.58f, 2786.28f, 43.21f, 26.81f, 2998.772f, 2777.3918f, 42.1008f, 29.7228f);
				func_127(2995.76f, 2787.72f, 43.26f, 33.42f, 2993.1204f, 2779.783f, 42.3128f, 286.9825f);
				func_127(2994.91f, 2779.79f, 42.73f, 11.43f, 2999.2527f, 2783.97f, 42.5421f, 108.7426f);
				func_127(2999.44f, 2781.11f, 43.11f, 23.89f, 2997.5823f, 2787.4763f, 42.6953f, 157.4885f);
				func_127(3000.06f, 2775.26f, 42.47f, 17.16f, 2994.7188f, 2784.905f, 42.6444f, 213.8879f);
				func_126(2995.525f, 2775.5225f, 41.98f, 4.3249f, 2993.511f, 2776.9482f, 42.0941f, 305.3785f);
				break;
		}
		switch (iLocal_82)
		{
			case 0:
				sVar1 = "CanyonCliffs_Start";
				break;
			case 1:
				sVar1 = "RidgeRun_Start";
				break;
			case 3:
				sVar1 = "ValleyTrail_Start";
				break;
			case 4:
				sVar1 = "LakesideSplash_Start";
				break;
			case 5:
				sVar1 = "EcoFriendly_Start";
				break;
			case 2:
				sVar1 = "MinewardSpiral_Start";
				break;
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			if (TASK::DOES_SCENARIO_GROUP_EXIST(sVar1))
			{
				if (!TASK::IS_SCENARIO_GROUP_ENABLED(sVar1))
				{
					TASK::SET_SCENARIO_GROUP_ENABLED(sVar1, true);
				}
			}
		}
	}
	func_120();
}

void func_120()//Position - 0x4CEB
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	char* sVar4;
	int iVar5;
	if (fLocal_74 > 9f)
	{
		iVar5 = 0;
		iVar5 = 0;
		while (iVar5 < Local_267.f_0)
		{
			if (!__LIB_0__::func_86(Local_267[iVar5 /*14*/].f_2))
			{
				Local_267[iVar5 /*14*/].f_1 = VEHICLE::CREATE_VEHICLE(func_124(0), Local_267[iVar5 /*14*/].f_2, Local_267[iVar5 /*14*/].f_5, true, true, false);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_267[iVar5 /*14*/].f_1, 5f);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_267[iVar5 /*14*/].f_1, true);
				if (__LIB_0__::func_86(Local_267[iVar5 /*14*/].f_6))
				{
					Local_267[iVar5 /*14*/] = PED::CREATE_PED_INSIDE_VEHICLE(Local_267[iVar5 /*14*/].f_1, 4, func_123(), -1, true, true);
					VEHICLE::SET_VEHICLE_ENGINE_ON(Local_267[iVar5 /*14*/].f_1, true, false, false);
				}
				else
				{
					Local_267[iVar5 /*14*/] = PED::CREATE_PED(4, func_123(), Local_267[iVar5 /*14*/].f_6, Local_267[iVar5 /*14*/].f_9, true, true);
					iVar1 = iVar5;
					switch (iVar1)
					{
						case 0:
						case 3:
							sVar4 = "idle_a";
							break;
						case 1:
						case 4:
							sVar4 = "idle_b";
							break;
						default:
							sVar4 = "idle_c";
							break;
					}
					iVar2 = iVar5;
					switch (iVar2)
					{
						case 0:
						case 4:
							sVar3 = "amb@world_human_hang_out_street@male_a@idle_a";
							break;
						case 1:
						case 3:
							sVar3 = "amb@world_human_hang_out_street@male_b@idle_a";
							break;
						case 2:
						case 5:
							sVar3 = "amb@world_human_hang_out_street@male_c@idle_a";
							break;
					}
					Local_267[iVar5 /*14*/].f_12 = sVar3;
					Local_267[iVar5 /*14*/].f_13 = sVar4;
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_PAUSE(0, MISC::GET_RANDOM_INT_IN_RANGE(100, 500));
					TASK::TASK_PLAY_ANIM(0, sVar3, sVar4, 8f, -8f, -1, 8193, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f), false, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iVar0);
					TASK::TASK_PERFORM_SEQUENCE(Local_267[iVar5 /*14*/], iVar0);
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
				}
				PED::SET_PED_HELMET(Local_267[iVar5 /*14*/], true);
				PED::GIVE_PED_HELMET(Local_267[iVar5 /*14*/], true, 4096, -1);
			}
			iVar5++;
		}
		Local_267.f_83.f_1 = VEHICLE::CREATE_VEHICLE(func_124(1), Local_267.f_83.f_2, Local_267.f_83.f_5, true, true, false);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_267.f_83.f_1, 5f);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_267.f_83.f_1, true);
		if (__LIB_0__::func_86(Local_267.f_83.f_6))
		{
			Local_267.f_83 = PED::CREATE_PED_INSIDE_VEHICLE(Local_267.f_83.f_1, 4, func_123(), -1, true, true);
			VEHICLE::SET_VEHICLE_ENGINE_ON(Local_267.f_83.f_1, true, false, false);
		}
		else
		{
			Local_267.f_83 = PED::CREATE_PED(4, func_123(), Local_267.f_83.f_6, Local_267.f_83.f_9, true, true);
			iVar1 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) % 3);
			switch (iVar1)
			{
				case 0:
					sVar4 = "idle_a";
					break;
				case 1:
					sVar4 = "idle_b";
					break;
				default:
					sVar4 = "idle_c";
					break;
			}
			Local_267.f_83.f_12 = "amb@world_human_aa_smoke@male@idle_a";
			Local_267.f_83.f_13 = sVar4;
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_STAND_STILL(0, __LIB_0__::func_310((MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) % 1000), 1, 1000));
			TASK::TASK_PLAY_ANIM(0, "amb@world_human_aa_smoke@male@idle_a", sVar4, 8f, -8f, -1, 1, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f), false, false, false);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(Local_267.f_83, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
		}
	}
	else if (fLocal_74 < 225f)
	{
	}
	iLocal_95 = Local_267.f_83;
	if (!ENTITY::IS_ENTITY_DEAD(Local_267[0 /*14*/], false))
	{
		__LIB_0__::func_203(&uLocal_101, 1, Local_267[0 /*14*/], "MALE1", 0, 1);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_267[1 /*14*/], false))
	{
		__LIB_0__::func_203(&uLocal_101, 2, Local_267[1 /*14*/], "MALE2", 0, 1);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_267[2 /*14*/], false))
	{
		__LIB_0__::func_203(&uLocal_101, 3, Local_267[3 /*14*/], "MALE3", 0, 1);
	}
	if (!__LIB_0__::func_736(&iLocal_90))
	{
		__LIB_18__::func_276(&iLocal_90);
	}
	else
	{
		__LIB_6__::func_892(&iLocal_90);
	}
}

int func_123()//Position - 0x517C
{
	return joaat("A_M_Y_MotoX_01");
}

int func_124(bool bParam0)//Position - 0x5189
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Local_267.f_71)
	{
		if (STREAMING::IS_MODEL_A_VEHICLE(Local_267.f_71[iVar1]))
		{
			iVar0++;
		}
		iVar1++;
	}
	if (iLocal_82 == 1)
	{
		if (!bParam0)
		{
			iVar0 = (iVar0 - 1);
		}
	}
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0);
	if (Local_267.f_71[iVar0] == 0)
	{
		if (Local_267.f_71[0] == 0)
		{
			switch (iLocal_82)
			{
				case 0:
					return joaat("sanchez");
					break;
				case 1:
					return joaat("mesa");
					break;
				case 3:
					return joaat("sanchez");
					break;
				case 4:
					return joaat("sanchez");
					break;
				case 5:
					return joaat("mesa");
					break;
				case 2:
					return joaat("sanchez");
					break;
			}
		}
		else
		{
			return Local_267.f_71[0];
		}
	}
	return Local_267.f_71[iVar0];
}

void func_126(struct<3> Param0, float fParam1, struct<3> Param2, float fParam3)//Position - 0x52A5
{
	if (__LIB_0__::func_86(Local_267.f_83.f_2))
	{
		Local_267.f_83.f_2 = { Param0 };
		Local_267.f_83.f_5 = fParam1;
		Local_267.f_83.f_6 = { Param2 };
		Local_267.f_83.f_9 = fParam3;
	}
}

void func_127(struct<3> Param0, float fParam1, struct<3> Param2, float fParam3)//Position - 0x52E9
{
	int iVar0;
	bool bVar1;
	iVar0 = 0;
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < Local_267.f_0)
	{
		if (!bVar1 && __LIB_0__::func_86(Local_267[iVar0 /*14*/].f_2))
		{
			Local_267[iVar0 /*14*/].f_2 = { Param0 };
			Local_267[iVar0 /*14*/].f_5 = fParam1;
			Local_267[iVar0 /*14*/].f_6 = { Param2 };
			Local_267[iVar0 /*14*/].f_9 = fParam3;
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
	}
}

void func_128()//Position - 0x5364
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_267.f_0)
	{
		Local_267[iVar0 /*14*/].f_2 = { 0f, 0f, 0f };
		Local_267[iVar0 /*14*/].f_5 = 0f;
		iVar0++;
	}
	Local_267.f_83.f_2 = { 0f, 0f, 0f };
	Local_267.f_83.f_5 = 0f;
}

void func_129()//Position - 0x53AF
{
	switch (iLocal_82)
	{
		case 0:
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-223.42f, 3948.36f, 36.52f, -212.37f, 3818.97f, 37.53f, 50f, true, false, true);
			MISC::CLEAR_AREA_OF_VEHICLES(-227.43f, 3888.9f, 36.41f, 50f, true, false, false, false, false, false, 0);
			TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_HUMAN_HIKER", false);
			break;
		case 1:
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-509.12537f, 1987.582f, 205.3305f, -948.5215f, 2752.7415f, 25.351442f, 300f, false, false, true);
			break;
		case 3:
			TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_SOLO", false);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1943.822f, 4462.2856f, 0f, -229.07834f, 4227.072f, 50f, 250f, true, false, true);
			MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(-1943.822f, 4462.2856f, 0f, -229.07834f, 4227.072f, 50f, 250f, false, false, false, false, false, 0, 0);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-196.58f, 4217.64f, 50.083f, -202.574f, 4210.926f, 40.0262f, 10f, true, false, true);
			TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_HUMAN_HIKER", false);
			TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_EMPTY", false);
			TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_MOUNTAIN_LION_WANDER", false);
			break;
		case 4:
			TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_SOLO", false);
			TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_EMPTY", true);
			TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_BIKE_OFF_ROAD_RACE", true);
			break;
		case 5:
			TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_BICYCLE_MOUNTAIN", false);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(2242.488f, 2568.146f, -10f, 2242.488f, 1568.146f, 200f, 100f, true, false, true);
			MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(2242.488f, 2568.146f, -10f, 2242.488f, 1568.146f, 200f, 1000f, false, false, false, false, false, 0, 0);
			break;
		case 2:
			TASK::SET_SCENARIO_GROUP_ENABLED("QUARRY", false);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(2809.9475f, 2993.644f, -9.3564f, 2952.9688f, 2530.636f, 177.1921f, 500f, true, false, true);
			MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(2809.9475f, 2993.644f, -9.3564f, 2952.9688f, 2530.636f, 177.1921f, 500f, false, false, false, false, false, 0, 0);
			break;
	}
}

bool func_130()//Position - 0x55EB
{
	return ((((((((__LIB_1__::func_8(&(Local_267.f_71)) && __LIB_1__::func_8(&(Local_267.f_77))) && __LIB_1__::func_8(&(Local_267.f_99))) && STREAMING::HAS_ANIM_DICT_LOADED("amb@world_human_hang_out_street@male_a@idle_a")) && STREAMING::HAS_ANIM_DICT_LOADED("amb@world_human_hang_out_street@male_b@idle_a")) && STREAMING::HAS_ANIM_DICT_LOADED("amb@world_human_hang_out_street@male_c@idle_a")) && STREAMING::HAS_ANIM_DICT_LOADED("amb@world_human_aa_smoke@male@idle_a")) && STREAMING::HAS_ANIM_DICT_LOADED("random@street_race")) && STREAMING::HAS_ANIM_DICT_LOADED("gestures@m@standing@casual"));
}

void func_132()//Position - 0x56A7
{
	char cVar0[64];
	__LIB_18__::func_237(&(Local_267.f_77), joaat("A_M_Y_MotoX_01"));
	__LIB_18__::func_237(&(Local_267.f_99), joaat("A_M_Y_MotoX_01"));
	switch (iLocal_82)
	{
		case 0:
			__LIB_18__::func_237(&(Local_267.f_71), joaat("sanchez"));
			__LIB_18__::func_237(&(Local_267.f_71), joaat("blazer"));
			break;
		case 1:
			__LIB_18__::func_237(&(Local_267.f_71), joaat("mesa"));
			__LIB_18__::func_237(&(Local_267.f_71), joaat("bjxl"));
			__LIB_18__::func_237(&(Local_267.f_71), joaat("patriot"));
			__LIB_18__::func_237(&(Local_267.f_71), joaat("dubsta2"));
			__LIB_18__::func_237(&(Local_267.f_71), joaat("bfinjection"));
			break;
		case 3:
			__LIB_18__::func_237(&(Local_267.f_71), joaat("sanchez"));
			__LIB_18__::func_237(&(Local_267.f_71), joaat("blazer"));
			break;
		case 4:
			__LIB_18__::func_237(&(Local_267.f_71), joaat("sanchez"));
			__LIB_18__::func_237(&(Local_267.f_71), joaat("blazer"));
			break;
		case 5:
			__LIB_18__::func_237(&(Local_267.f_71), joaat("mesa"));
			__LIB_18__::func_237(&(Local_267.f_71), joaat("bfinjection"));
			__LIB_18__::func_237(&(Local_267.f_71), joaat("bjxl"));
			__LIB_18__::func_237(&(Local_267.f_71), joaat("sadler"));
			__LIB_18__::func_237(&(Local_267.f_71), joaat("rebel"));
			break;
		case 2:
			__LIB_18__::func_237(&(Local_267.f_71), joaat("sanchez"));
			__LIB_18__::func_237(&(Local_267.f_71), joaat("blazer"));
			break;
	}
	STREAMING::REQUEST_ANIM_DICT("amb@world_human_hang_out_street@male_a@idle_a");
	STREAMING::REQUEST_ANIM_DICT("amb@world_human_hang_out_street@male_b@idle_a");
	STREAMING::REQUEST_ANIM_DICT("amb@world_human_hang_out_street@male_c@idle_a");
	STREAMING::REQUEST_ANIM_DICT("amb@world_human_aa_smoke@male@idle_a");
	STREAMING::REQUEST_ANIM_DICT("random@street_race");
	STREAMING::REQUEST_ANIM_DICT("gestures@m@standing@casual");
	if (iLocal_82 == 0)
	{
		STREAMING::REQUEST_MODEL(joaat("prop_fncwood_14c"));
		STREAMING::REQUEST_MODEL(joaat("prop_fncwood_14e"));
	}
	StringCopy(&cVar0, "offroadrace", 64);
	switch (iLocal_82)
	{
		case 0:
			StringIntConCat(&cVar0, 1, 64);
			break;
		case 1:
			StringIntConCat(&cVar0, 2, 64);
			break;
		case 2:
			StringIntConCat(&cVar0, 6, 64);
			break;
		case 3:
			StringIntConCat(&cVar0, 3, 64);
			break;
		case 4:
			StringIntConCat(&cVar0, 4, 64);
			break;
		case 5:
			StringIntConCat(&cVar0, 5, 64);
			break;
	}
	StringConCat(&cVar0, "car", 64);
	VEHICLE::REQUEST_VEHICLE_RECORDING(1, &cVar0);
	__LIB_1__::func_9(&(Local_267.f_77));
	__LIB_1__::func_9(&(Local_267.f_71));
	__LIB_1__::func_9(&(Local_267.f_99));
}

void func_145()//Position - 0x5D48
{
	StringCopy(&Local_51, "Offroad_Races", 64);
	MISC::SET_THIS_IS_A_TRIGGER_SCRIPT(true);
	fLocal_77 = (6f + 4f);
	iLocal_63 = 4;
	__LIB_6__::func_896(&uLocal_58, 4194304);
	iLocal_61 = 51000;
	iLocal_54 = 0;
	iLocal_79 = 0;
	iLocal_80 = 25;
	iLocal_67 = 0;
	iLocal_82 = func_149(Local_56, &Local_81);
	iLocal_69 = func_148(iLocal_82);
	fLocal_66 = (SYSTEM::TO_FLOAT(__LIB_29__::func_789(iLocal_69)) + 5f);
	if (__LIB_0__::func_573(0, iLocal_63))
	{
		bLocal_96 = true;
	}
	else
	{
		__LIB_29__::func_800(iLocal_69);
		bLocal_96 = false;
	}
	if (iLocal_82 > Global_113386.f_19016.f_1)
	{
		if (__LIB_10__::func_861(func_148(iLocal_82)))
		{
		}
		iLocal_69 = 263;
		__LIB_29__::func_800(iLocal_69);
	}
	if (!__LIB_10__::func_861(func_148(iLocal_82)) && CAM::IS_SCREEN_FADED_IN())
	{
		if (iLocal_69 != 263)
		{
			if (func_146(iLocal_69, 1))
			{
				iLocal_69 = 263;
			}
		}
		__LIB_29__::func_800(iLocal_69);
	}
	if (iLocal_82 == 2)
	{
		iLocal_79 = 20;
		iLocal_80 = 3;
	}
	if (iLocal_82 == 1 || iLocal_82 == 5)
	{
		sLocal_65 = "PLAY_OFFROAD_V" /* GXT: Press ~INPUT_CONTEXT~ to enter an offroad truck race. */;
	}
	else
	{
		sLocal_65 = "PLAY_OFFROAD_M" /* GXT: Press ~INPUT_CONTEXT~ to enter an offroad motorcycle / ATV race. */;
	}
}

int func_146(int iParam0, bool bParam1)//Position - 0x5E44
{
	int iVar0;
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0;
	}
	if (bParam1)
	{
		return BitTest(Global_32338[iVar0 /*23*/].f_11, 15);
	}
	return BitTest(Global_32338[iVar0 /*23*/].f_11, 0);
}

int func_148(int iParam0)//Position - 0x5FAA
{
	switch (iParam0)
	{
		case 0:
			return 70;
		case 1:
			return 71;
		case 3:
			return 73;
		case 4:
			return 74;
		case 5:
			return 75;
		case 2:
			return 72;
		default:
	}
	return 263;
}

int func_149(struct<3> Param0, var uParam1)//Position - 0x5FFE
{
	int iVar0;
	struct<3> Var1[7];
	float fVar2;
	int iVar3;
	float fVar4;
	iVar0 = 0;
	Var1[0 /*3*/] = { __LIB_31__::func_130(0) };
	Var1[1 /*3*/] = { __LIB_31__::func_130(1) };
	Var1[3 /*3*/] = { __LIB_31__::func_130(3) };
	Var1[4 /*3*/] = { __LIB_31__::func_130(4) };
	Var1[5 /*3*/] = { __LIB_31__::func_130(5) };
	Var1[2 /*3*/] = { __LIB_31__::func_130(2) };
	Var1[6 /*3*/] = { __LIB_31__::func_130(6) };
	fVar2 = SYSTEM::VDIST2(Param0, Var1[0 /*3*/]);
	iVar3 = 0;
	fVar4 = 0f;
	iVar3 = 1;
	while (iVar3 <= (7 - 1))
	{
		fVar4 = SYSTEM::VDIST2(Param0, Var1[iVar3 /*3*/]);
		if (fVar4 < fVar2)
		{
			iVar0 = iVar3;
			fVar2 = fVar4;
		}
		iVar3++;
	}
	*uParam1 = { Var1[iVar0 /*3*/] };
	return iVar0;
}

void func_153(bool bParam0)//Position - 0x619B
{
	if (bParam0)
	{
		if (iLocal_69 != 263)
		{
			__LIB_10__::func_604(iLocal_69, 0, 0);
		}
	}
	__LIB_7__::func_249(&iLocal_60);
	if (__LIB_0__::func_517(uLocal_58, 2))
	{
		func_5();
		__LIB_7__::func_204(&uLocal_58, 2);
		__LIB_10__::func_865(&iLocal_62);
	}
	iLocal_62 = -1;
	__LIB_34__::func_840();
	SCRIPT::TERMINATE_THIS_THREAD();
}

