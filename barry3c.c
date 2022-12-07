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
	struct<3> Local_22 = { 0, 0, 0 } ;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	var uLocal_35 = 10;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
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
	var uLocal_62 = 0;
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
	struct<61> Local_79 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_80 = 0;
	var uLocal_81 = 0;
	char* sLocal_82 = NULL;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	char[] cLocal_88[8] = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int* iLocal_96 = NULL;
	struct<5> Local_97 = { 0, 0, 0, 0, 0 } ;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int* iLocal_106 = NULL;
	struct<3> Local_107 = { 0, 0, 0 } ;
	struct<3> Local_108 = { 0, 0, 0 } ;
	int iLocal_109 = 0;
	bool bLocal_110 = 0;
	int iLocal_111 = 0;
	struct<3> Local_112 = { 0, 0, 0 } ;
	int iLocal_113[2] = { 0, 0 };
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	struct<7> Local_117[8];
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	var uLocal_121 = 16;
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
	int iLocal_286 = 0;
	int iLocal_287 = 0;
	int iLocal_288 = 0;
	int iLocal_289 = 0;
	int iLocal_290 = 0;
	int iLocal_291 = 0;
	int iLocal_292 = 0;
	int iLocal_293 = 0;
	int iLocal_294 = 0;
	int iLocal_295 = 0;
	int iLocal_296 = 0;
	bool bLocal_297 = 0;
	int iLocal_298 = 0;
	char* sLocal_299 = NULL;
	int iLocal_300 = 0;
	int iLocal_301 = 0;
	char* sLocal_302[4] = { NULL, NULL, NULL, NULL };
	int iLocal_303 = 0;
	int iLocal_304 = 0;
	struct<7> Local_305[2];
	float fLocal_306[2] = { 0f, 0f };
	int iLocal_307 = 0;
	struct<3> Local_308[9];
	int iLocal_309 = 0;
	char* sLocal_310 = NULL;
	struct<3> Local_311 = { 0, 0, 0 } ;
	float fLocal_312 = 0f;
	struct<61> Local_313 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion
void __EntryFunction__()//Position - 0x0
{
	int iVar0;
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
	fLocal_23 = -0.0375f;
	fLocal_24 = 0.17f;
	fLocal_28 = 80f;
	fLocal_29 = 140f;
	fLocal_30 = 180f;
	iLocal_33 = 3;
	uLocal_78 = __LIB_2__::func_108(49);
	Local_107 = { -0.1f, -0.85f, 0.23f };
	Local_108 = { 8f, 0.5f, 0f };
	iLocal_109 = joaat("prop_weed_tub_01");
	iLocal_115 = joaat("towtruck");
	sLocal_299 = "rcm_barry3c";
	Local_79 = { ScriptParam_313 };
	__LIB_20__::func_264(&Local_79);
	__LIB_26__::func_252();
	MISC::SET_MISSION_FLAG(true);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		__LIB_0__::func_135("Force cleanup [TERMINATING]");
		__LIB_38__::func_39(1);
		func_472();
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_79.f_35[0]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_79.f_35[0], false))
		{
			VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Local_79.f_35[0], true, 0);
			__LIB_10__::func_734(&(Local_97.f_4), &(Local_79.f_35[0]));
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_97.f_4, true, 1);
			__LIB_10__::func_728(Local_97.f_4, 0);
		}
	}
	__LIB_10__::func_729(&iLocal_106, &(Local_79.f_41[0]));
	func_455();
	if (ENTITY::DOES_ENTITY_EXIST(Local_79.f_35[1]))
	{
		__LIB_10__::func_734(&(Local_117[6 /*7*/].f_4), &(Local_79.f_35[1]));
	}
	if (__LIB_0__::func_294())
	{
		iVar0 = __LIB_0__::func_315();
		if (Global_94618)
		{
			iVar0++;
		}
		switch (iVar0)
		{
			case 0:
				func_452(1);
				__LIB_32__::func_751(1, 1, 1);
				break;
			case 1:
				func_441(1);
				__LIB_32__::func_751(1, 1, 1);
				break;
			case 2:
				func_440(1);
				__LIB_32__::func_751(1, 1, 1);
				break;
			case 3:
				func_420(1);
				__LIB_32__::func_751(1, 1, 1);
				break;
			default:
				break;
		}
	}
	else if (__LIB_0__::func_2(0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 113.9f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		}
		__LIB_32__::func_751(1, 1, 1);
	}
	while (true)
	{
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("SF_GRTD", 0);
		__LIB_35__::func_898(Local_79.f_9, 0, 0, 0, 0, 0);
		if (iLocal_94 == 13)
		{
			func_382();
		}
		else if (!func_381())
		{
			__LIB_0__::func_371();
			__LIB_40__::func_599(&uLocal_81, &uLocal_121, "BAR3CAU", &sLocal_82, &cLocal_88);
			switch (iLocal_94)
			{
				case 0:
					func_374();
					break;
				case 1:
					func_372();
					break;
				case 2:
					func_371();
					break;
				case 3:
					func_339();
					break;
				case 4:
					func_336();
					break;
				case 5:
					func_334();
					break;
				case 6:
					func_330();
					break;
				case 12:
					func_252();
					break;
				case 7:
					func_51();
					break;
				case 11:
					func_49();
					break;
				case 8:
					func_48();
					break;
				case 9:
					func_19();
					break;
				case 10:
					func_1();
					break;
				}
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x2FE
{
	func_17();
	switch (iLocal_95)
	{
		case 0:
			if (func_16(3) && (!__LIB_0__::func_75() || MISC::GET_PROFILE_SETTING(203) == 0))
			{
				func_12(3);
			}
			func_11(5, 0);
			iLocal_95 = 1;
			func_5(0);
			break;
		case 1:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_97.f_4, Local_305[0 /*7*/][0 /*3*/], Local_305[0 /*7*/][1 /*3*/], fLocal_306[0], false, true, 0))
			{
				iLocal_95 = 2;
			}
			else
			{
				if (func_16(3) && !__LIB_0__::func_75())
				{
					func_12(3);
				}
				if (func_4())
				{
					if (func_2())
					{
						iLocal_94 = 5;
					}
					else
					{
						iLocal_94 = 9;
					}
					iLocal_95 = 0;
				}
				else
				{
					func_5(0);
				}
			}
			break;
		case 2:
			iLocal_94 = 7;
			iLocal_95 = 0;
			break;
	}
}

int func_2()//Position - 0x3CF
{
	if (__LIB_0__::func_121(iLocal_114) && __LIB_0__::func_121(Local_97.f_4))
	{
		if (func_3())
		{
			if (VEHICLE::DOES_CARGOBOB_HAVE_PICK_UP_ROPE(iLocal_114) && VEHICLE::IS_VEHICLE_ATTACHED_TO_CARGOBOB(iLocal_114, Local_97.f_4))
			{
				bLocal_110 = true;
				return 1;
			}
		}
		else if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_114, Local_97.f_4))
		{
			bLocal_110 = true;
			return 1;
		}
	}
	return 0;
}

int func_3()//Position - 0x42B
{
	int iVar0;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iLocal_114);
	if ((iVar0 == joaat("cargobob") || iVar0 == joaat("cargobob2")) || iVar0 == joaat("cargobob3"))
	{
		return 1;
	}
	return 0;
}

int func_4()//Position - 0x467
{
	int iVar0;
	int iVar1;
	bool bVar2;
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_114) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_114, false))
	{
		return 1;
	}
	else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (__LIB_0__::func_121(iVar0))
		{
			iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
			if ((((iVar1 == joaat("towtruck") || iVar1 == joaat("towtruck2")) || iVar1 == joaat("cargobob")) || iVar1 == joaat("cargobob2")) || iVar1 == joaat("cargobob3"))
			{
				bVar2 = false;
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_114))
				{
					if (iLocal_102)
					{
						VEHICLE::REMOVE_VEHICLE_UPSIDEDOWN_CHECK(iLocal_114);
						iLocal_102 = 0;
					}
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_114);
				}
				iLocal_120 = 0;
				while (iLocal_120 <= 7)
				{
					if (__LIB_0__::func_121(Local_117[iLocal_120 /*7*/].f_4) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_117[iLocal_120 /*7*/].f_4, false))
					{
						bVar2 = true;
						Local_117[iLocal_120 /*7*/].f_6 = 1;
						__LIB_10__::func_734(&iLocal_114, &(Local_117[iLocal_120 /*7*/].f_4));
					}
					iLocal_120++;
				}
				if (!bVar2)
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
					iLocal_114 = iVar0;
				}
				VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(iLocal_114);
				iLocal_102 = 1;
				VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iLocal_114, false, 0);
				iLocal_304 = 0;
				return 1;
			}
		}
	}
	return 0;
}

void func_5(bool bParam0)//Position - 0x598
{
	if (bParam0)
	{
		iLocal_120 = 0;
		while (iLocal_120 <= 7)
		{
			__LIB_0__::func_106(&(Local_117[iLocal_120 /*7*/].f_4));
			iLocal_120++;
		}
	}
	else
	{
		iLocal_120 = 0;
		while (iLocal_120 <= 7)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_117[iLocal_120 /*7*/].f_4))
			{
				if (!__LIB_0__::func_530(PLAYER::PLAYER_PED_ID(), Local_117[iLocal_120 /*7*/], 175f, 1) && __LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_117[iLocal_120 /*7*/].f_4, 1) > 175f)
				{
					__LIB_11__::func_32(&(Local_117[iLocal_120 /*7*/].f_4));
				}
			}
			else if (!Local_117[iLocal_120 /*7*/].f_6 && __LIB_0__::func_530(PLAYER::PLAYER_PED_ID(), Local_117[iLocal_120 /*7*/], 100f, 1))
			{
				Local_117[iLocal_120 /*7*/].f_4 = VEHICLE::CREATE_VEHICLE(joaat("towtruck"), Local_117[iLocal_120 /*7*/], Local_117[iLocal_120 /*7*/].f_3, true, true, false);
				if (iLocal_120 == 6)
				{
					VEHICLE::SET_VEHICLE_COLOURS(Local_117[iLocal_120 /*7*/].f_4, 39, 43);
				}
				else
				{
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_117[iLocal_120 /*7*/].f_4, 0);
				}
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_117[iLocal_120 /*7*/].f_4, 5f);
				VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Local_117[iLocal_120 /*7*/].f_4, false, 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_117[iLocal_120 /*7*/].f_4, true);
			}
			iLocal_120++;
		}
	}
}

void func_11(int iParam0, int iParam1)//Position - 0x844
{
	Local_308[iParam0 /*3*/].f_1 = iParam1;
}

void func_12(int iParam0)//Position - 0x857
{
	if (Local_308[iParam0 /*3*/].f_1 < Local_308[iParam0 /*3*/] || Local_308[iParam0 /*3*/] == -1)
	{
		__LIB_0__::func_210(Local_308[iParam0 /*3*/].f_2, 7500, 1);
		__LIB_10__::func_731(&uLocal_81);
		Local_308[iParam0 /*3*/].f_1++;
	}
}

int func_16(int iParam0)//Position - 0x912
{
	if (Local_308[iParam0 /*3*/].f_1 < Local_308[iParam0 /*3*/] || Local_308[iParam0 /*3*/] == -1)
	{
		return 1;
	}
	return 0;
}

void func_17()//Position - 0x945
{
	if (!iLocal_298)
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_97.f_4, false))
		{
			iLocal_298 = 1;
			bLocal_297 = false;
			iLocal_294 = 0;
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
			func_18();
		}
		else if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_97.f_4, true))
		{
			func_18();
		}
	}
	else
	{
		func_18();
		if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_97.f_4, false))
		{
			if (iLocal_298)
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			}
			iLocal_298 = 0;
			bLocal_297 = false;
		}
		else
		{
			if (!bLocal_297 && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/))
			{
				bLocal_297 = true;
			}
			switch (iLocal_294)
			{
				case 0:
					if (bLocal_297)
					{
						iLocal_294 = 7;
					}
					else
					{
						STREAMING::REQUEST_ANIM_DICT(sLocal_299);
						if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("BARRY3C_IGNITION_FAIL", false, -1) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_299))
						{
							if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(Local_97.f_4, -1, false) == PLAYER::PLAYER_PED_ID())
							{
								iLocal_294 = 1;
							}
						}
					}
					break;
				case 1:
					if (bLocal_297)
					{
						iLocal_294 = 7;
					}
					else if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/))
					{
						iLocal_294 = 2;
					}
					break;
				case 2:
					TASK::OPEN_SEQUENCE_TASK(&iLocal_300);
					TASK::TASK_PLAY_ANIM(0, sLocal_299, "franklinfailingtostartcar_enter", 8f, -8f, 2000, 8, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, sLocal_299, "franklinfailingtostartcar_loop", 8f, -8f, 1500, 9, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, sLocal_299, "franklinfailingtostartcar_exit", 8f, -8f, 766, 8, 0f, false, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_300);
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iLocal_300);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_300);
					iLocal_291 = MISC::GET_GAME_TIMER() + 2000;
					iLocal_294 = 3;
					break;
				case 3:
					if (MISC::GET_GAME_TIMER() > iLocal_291)
					{
						AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_296, "IGNITION_FAIL", Local_97.f_4, "BARRY_03_SOUNDSET", false, 0);
						AUDIO::SET_VARIABLE_ON_SOUND(iLocal_296, "HOLD TIME", 1.5f);
						iLocal_291 = MISC::GET_GAME_TIMER() + 2400;
						iLocal_294 = 4;
					}
					break;
				case 4:
					if (MISC::GET_GAME_TIMER() > iLocal_291)
					{
						if (bLocal_297)
						{
							iLocal_294 = 7;
						}
						else
						{
							iLocal_294 = 1;
						}
					}
					break;
				case 7:
					if (MISC::GET_GAME_TIMER() > iLocal_291 && !TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
					{
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
						TASK::TASK_LEAVE_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_97.f_4, 0);
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					}
					break;
				}
			}
	}
}

void func_18()//Position - 0xB99
{
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 59 /*INPUT_VEH_MOVE_LR*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 69 /*INPUT_VEH_ATTACK*/, true);
}

void func_19()//Position - 0xBB1
{
	struct<3> Var0;
	func_17();
	switch (iLocal_95)
	{
		case 0:
			if (!iLocal_111)
			{
				iLocal_111 = 1;
			}
			__LIB_0__::func_523(&iLocal_96);
			if (__LIB_0__::func_121(iLocal_114))
			{
				iLocal_96 = __LIB_10__::func_727(Local_97.f_4, 1, 5);
				HUD::SET_BLIP_ROUTE(iLocal_96, true);
				if (bLocal_110)
				{
					func_12(7);
				}
				if ((!__LIB_0__::func_75() && iLocal_304) && !PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 74 /*INPUT_VEH_HEADLIGHT*/))
				{
					iLocal_301 = 0;
				}
				iLocal_95 = 1;
			}
			else
			{
				iLocal_94 = 10;
			}
			break;
		case 1:
			func_20();
			if (iLocal_307 && !__LIB_0__::func_121(iLocal_114))
			{
				__LIB_0__::func_523(&iLocal_96);
				HUD::CLEAR_PRINTS();
				iLocal_94 = 10;
				iLocal_95 = 0;
			}
			else if (!func_4())
			{
				iLocal_95 = 2;
			}
			else if (func_2())
			{
				iLocal_95 = 2;
				iLocal_304 = 1;
			}
			else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_97.f_4, Local_305[0 /*7*/][0 /*3*/], Local_305[0 /*7*/][1 /*3*/], fLocal_306[0], false, false, 0) && !ENTITY::IS_ENTITY_IN_AIR(Local_97.f_4))
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(Local_97.f_4, true) };
				if (Var0.f_2 < 6.7f)
				{
					iLocal_94 = 12;
					iLocal_95 = 0;
				}
			}
			break;
		case 2:
			__LIB_0__::func_523(&iLocal_96);
			HUD::CLEAR_PRINTS();
			if (!func_4())
			{
				iLocal_94 = 8;
			}
			else
			{
				iLocal_94 = 5;
			}
			iLocal_95 = 0;
			break;
	}
}

void func_20()//Position - 0xD00
{
	switch (iLocal_301)
	{
		case 0:
			if (iLocal_303 == 3 && func_3())
			{
				iLocal_303 = 0;
			}
			if (func_44())
			{
				if (__LIB_35__::func_536(&uLocal_121, "BAR3CAU", sLocal_302[iLocal_303], 7, 1, 0, 0))
				{
					iLocal_301 = 1;
				}
			}
			else if (__LIB_35__::func_536(&uLocal_121, "BAR3CAU", sLocal_302[iLocal_303], 7, 0, 0, 0))
			{
				iLocal_301 = 1;
			}
			break;
		case 1:
			if (!__LIB_0__::func_75())
			{
				iLocal_303++;
				if (iLocal_303 >= 4)
				{
					iLocal_303 = 0;
				}
				iLocal_301 = 2;
			}
			break;
		case 2:
			break;
	}
}

int func_44()//Position - 0x168D
{
	iLocal_120 = 0;
	while (iLocal_120 <= 8)
	{
		if (__LIB_0__::func_405(Local_308[iLocal_120 /*3*/].f_2, 0, 0))
		{
			return 1;
		}
		iLocal_120++;
	}
	return 0;
}

void func_48()//Position - 0x1732
{
	func_17();
	switch (iLocal_95)
	{
		case 0:
			__LIB_0__::func_523(&iLocal_96);
			if (__LIB_0__::func_121(iLocal_114))
			{
				iLocal_96 = __LIB_10__::func_727(iLocal_114, 1, 5);
				HUD::SET_BLIP_ROUTE(iLocal_96, true);
				if (MISC::GET_PROFILE_SETTING(203) == 0 || !__LIB_0__::func_75())
				{
					if (func_3())
					{
						func_12(8);
						iLocal_309 = 0;
					}
					else
					{
						func_12(6);
						iLocal_309 = 0;
					}
				}
				else
				{
					iLocal_309 = 1;
				}
				iLocal_95 = 1;
			}
			else
			{
				iLocal_94 = 10;
			}
			break;
		case 1:
			func_20();
			if (func_4())
			{
				iLocal_95 = 2;
			}
			else if (iLocal_307 && !__LIB_0__::func_121(iLocal_114))
			{
				__LIB_0__::func_523(&iLocal_96);
				HUD::CLEAR_PRINTS();
				iLocal_94 = 10;
				iLocal_95 = 0;
			}
			else if (iLocal_309)
			{
				if (!__LIB_0__::func_75())
				{
					if (func_3())
					{
						func_12(8);
						iLocal_309 = 0;
					}
					else
					{
						func_12(6);
						iLocal_309 = 0;
					}
				}
			}
			break;
		case 2:
			__LIB_0__::func_523(&iLocal_96);
			HUD::CLEAR_PRINTS();
			if (func_4())
			{
				if (func_2())
				{
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
					{
						iLocal_94 = 11;
					}
					else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_97.f_4, Local_305[0 /*7*/][0 /*3*/], Local_305[0 /*7*/][1 /*3*/], fLocal_306[0], false, true, 0))
					{
						iLocal_94 = 6;
					}
					else
					{
						iLocal_94 = 5;
					}
				}
				else
				{
					iLocal_94 = 9;
				}
			}
			iLocal_95 = 0;
			break;
	}
}

void func_49()//Position - 0x188E
{
	func_17();
	switch (iLocal_95)
	{
		case 0:
			__LIB_0__::func_523(&iLocal_96);
			func_12(2);
			iLocal_95 = 1;
			break;
		case 1:
			func_20();
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 1)
			{
				func_50(2);
				iLocal_95 = 2;
			}
			else if (!func_4())
			{
				iLocal_95 = 2;
			}
			else if (!func_2())
			{
				iLocal_95 = 2;
			}
			break;
		case 2:
			HUD::CLEAR_PRINTS();
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_114, false))
			{
				iLocal_94 = 8;
			}
			else if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_114, Local_97.f_4))
			{
				iLocal_94 = 9;
			}
			else
			{
				iLocal_94 = 5;
			}
			iLocal_95 = 0;
			break;
	}
}

void func_50(int iParam0)//Position - 0x1933
{
	HUD::CLEAR_THIS_PRINT(Local_308[iParam0 /*3*/].f_2);
}

void func_51()//Position - 0x1948
{
	func_17();
	switch (iLocal_95)
	{
		case 0:
			__LIB_0__::func_523(&iLocal_96);
			if (func_16(5) && (!__LIB_0__::func_75() || MISC::GET_PROFILE_SETTING(203) == 0))
			{
				func_12(5);
			}
			iLocal_95 = 1;
			break;
		case 1:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_97.f_4, Local_305[1 /*7*/][0 /*3*/], Local_305[1 /*7*/][1 /*3*/], fLocal_306[1], false, true, 0))
			{
				if (!__LIB_0__::func_508(PLAYER::PLAYER_PED_ID(), Local_97.f_4, 150f, 1) && !__LIB_0__::func_75())
				{
					iLocal_95 = 2;
				}
				else if (func_16(5) && !__LIB_0__::func_75())
				{
					func_12(5);
				}
			}
			else
			{
				HUD::CLEAR_PRINTS();
				func_250(0);
				if (func_4())
				{
					if (func_2())
					{
						iLocal_94 = 5;
					}
					else
					{
						iLocal_94 = 9;
					}
				}
				else if (__LIB_0__::func_121(iLocal_114))
				{
					iLocal_94 = 8;
				}
				else
				{
					func_11(3, 0);
					iLocal_94 = 10;
				}
				iLocal_95 = 0;
			}
			break;
		case 2:
			__LIB_0__::func_123(&iLocal_106);
			__LIB_11__::func_32(&(Local_97.f_4));
			func_52();
			break;
	}
}

void func_52()//Position - 0x1A61
{
	func_53(71, 0);
	func_472();
}

void func_53(int iParam0, bool bParam1)//Position - 0x1A74
{
	int iVar0;
	char* sVar1;
	iVar0 = __LIB_18__::func_205();
	if (iVar0 == -1)
	{
		return;
	}
	if (!Global_112473[iVar0 /*10*/].f_4)
	{
		return;
	}
	if (Global_112473[iVar0 /*10*/].f_5)
	{
		return;
	}
	if (Global_112473[iVar0 /*10*/].f_6)
	{
		return;
	}
	__LIB_38__::func_136(iVar0, 0);
	MISC::SET_BIT(&Global_78567, 1);
	if (Global_112473[iVar0 /*10*/].f_9 == -1)
	{
	}
	else
	{
		__LIB_0__::func_56(&(Global_112473[iVar0 /*10*/].f_9));
	}
	if (bParam1)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			PLAYER::START_FIRING_AMNESTY(5000);
		}
	}
	__LIB_32__::func_577(iVar0, 1, 0, 0);
	__LIB_0__::func_46(0, 0);
	MemCopy(&sVar1, {__LIB_0__::func_339(iVar0)}, 4);
	__LIB_0__::func_44(&sVar1, __LIB_26__::func_250());
	func_80();
	if (BitTest(Global_113386.f_10016.f_25, 3))
	{
		__LIB_0__::func_18();
	}
	__LIB_35__::func_897();
	if (iParam0 == 210 || iParam0 == 211)
	{
		__LIB_24__::func_943(iParam0, 406.38f, -1635.86f);
	}
	else if (iParam0 == 111)
	{
		__LIB_24__::func_943(iParam0, 1973.84f, 3814.89f);
	}
	else if (iParam0 != 322)
	{
		__LIB_24__::func_943(iParam0, 0, 0);
	}
	__LIB_0__::func_533();
}

void func_80()//Position - 0x2BFE
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		iVar1 = Global_97810[iVar0];
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !PED::IS_PED_INJURED(iVar1))
		{
			iVar3 = __LIB_18__::func_168(iVar1);
			iVar2 = -99;
			switch (iVar3)
			{
				case 0:
					iVar2 = 112;
					break;
				case 1:
					iVar2 = 158;
					break;
				case 2:
					iVar2 = 154;
					break;
			}
			if (iVar2 != -99)
			{
				if (func_197(iVar1, 14, iVar2))
				{
					func_81(iVar1, 14, iVar2);
				}
				if (Global_113386.f_2363.f_539[iVar3 /*65*/].f_39[2] == iVar2)
				{
					Global_113386.f_2363.f_539[iVar3 /*65*/].f_39[2] = -1;
				}
			}
		}
		iVar0++;
	}
}

int func_81(int iParam0, int iParam1, int iParam2)//Position - 0x2CBF
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	int iVar7;
	if (PED::IS_PED_INJURED(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	Global_78130[1 /*14*/] = { __LIB_35__::func_896(iVar0, iParam1, iParam2, -1) };
	if (!BitTest(Global_78130[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (!func_197(iParam0, iParam1, iParam2))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar2 = { __LIB_18__::func_180(iVar0, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 14)
		{
			if (uVar2[iVar1] != -99)
			{
				func_81(iParam0, iVar1, uVar2[iVar1]);
			}
			iVar1++;
		}
	}
	else if (iParam1 == 13)
	{
		uVar5 = { __LIB_18__::func_247(iVar0, iParam2) };
		iVar3 = 0;
		while (iVar3 <= 8)
		{
			if (!func_81(iParam0, 14, uVar5[iVar3]))
			{
				iVar4 = 0;
			}
			iVar3++;
		}
		return iVar4;
	}
	else if (iParam1 == 14)
	{
		PED::CLEAR_PED_PROP(iParam0, Global_78130[1 /*14*/].f_12);
	}
	else
	{
		uVar6 = { __LIB_18__::func_180(iVar0, 0) };
		Global_78130[1 /*14*/] = { __LIB_35__::func_896(iVar0, iParam1, uVar6[iParam1], -1) };
		if (PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(iParam0, __LIB_0__::func_33(iParam1)) > 0 && PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(iParam0, __LIB_0__::func_33(iParam1), Global_78130[1 /*14*/].f_3) > 0)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iParam1), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, 0);
		}
	}
	if (func_124(iParam0, iVar0, &iVar7, 0))
	{
		func_84(iParam0, 2, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (func_82(iParam0, iVar0, &iVar7))
	{
		func_84(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	return 1;
}

int func_82(int iParam0, int iParam1, int iParam2)//Position - 0x2E7B
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_197(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_84(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x2F42
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
			uVar11 = { __LIB_18__::func_180(iVar10, iParam2) };
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
										func_84(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
									func_84(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_35__::func_896(iVar10, iVar0, func_90(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_124(iParam0, iVar10, &iVar4, 1))
							{
								func_84(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_18__::func_180(iVar10, 0) };
						func_84(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_84(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__::func_896(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_84(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__::func_896(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_84(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__::func_896(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_84(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__::func_896(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_84(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
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
						func_84(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_84(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_84(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		if (func_124(iParam0, iVar10, &iVar4, 0))
		{
			func_84(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_82(iParam0, iVar10, &iVar4))
		{
			func_84(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_90(int iParam0, int iParam1, int iParam2)//Position - 0x3F7F
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
				if (func_197(iParam0, iParam1, iVar0))
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
				if (func_197(iParam0, iParam1, iVar1))
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

int func_124(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xA86A
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_197(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_197(int iParam0, int iParam1, int iParam2)//Position - 0x20C53
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
		uVar5 = { __LIB_18__::func_180(iVar0, iParam2) };
		iVar2 = 0;
		while (iVar2 <= 14)
		{
			if ((uVar5[iVar2] != -99 && iVar2 != 12) && iVar2 != 14)
			{
				if (!func_197(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_18__::func_247(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_197(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_35__::func_896(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_197(iParam0, 14, iVar4))
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
			if (!func_197(iParam0, 14, uVar8[iVar7]))
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

void func_250(bool bParam0)//Position - 0x28066
{
	if (bParam0)
	{
		VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Local_97.f_4, false, 0);
		VEHICLE::SET_VEHICLE_DISABLE_TOWING(Local_97.f_4, true);
	}
	else
	{
		VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Local_97.f_4, true, 0);
		VEHICLE::SET_VEHICLE_DISABLE_TOWING(Local_97.f_4, false);
	}
}

void func_252()//Position - 0x280C0
{
	if (MISC::GET_GAME_TIMER() > iLocal_292)
	{
		if (__LIB_38__::func_30(&uLocal_121, 49, "BAR3CAU", "BAR3C_P1", 9, 1, 0, 0, 0))
		{
			__LIB_42__::func_415(2, "Delivered vehicle", 1, 0, 0, 1);
			iLocal_307 = 1;
			iLocal_94 = 7;
			iLocal_95 = 0;
		}
	}
}

void func_330()//Position - 0x2F26A
{
	func_17();
	switch (iLocal_95)
	{
		case 0:
			__LIB_0__::func_523(&iLocal_96);
			if (!iLocal_290)
			{
				iLocal_293 = MISC::GET_GAME_TIMER();
			}
			iLocal_95 = 1;
			break;
		case 1:
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				iLocal_95 = 2;
			}
			else if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_114, false))
			{
				iLocal_95 = 2;
			}
			else if (func_2())
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_97.f_4, Local_305[0 /*7*/][0 /*3*/], Local_305[0 /*7*/][1 /*3*/], fLocal_306[0], false, true, 0))
				{
					__LIB_0__::func_523(&iLocal_96);
					if (!iLocal_290)
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_293) > 1000)
						{
							__LIB_0__::func_151("B3CTTHA", 15000);
							iLocal_290 = 1;
						}
					}
				}
				else if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_97.f_4, Local_305[1 /*7*/][0 /*3*/], Local_305[1 /*7*/][1 /*3*/], fLocal_306[1], false, true, 0))
				{
					iLocal_94 = 10;
					iLocal_95 = 0;
				}
			}
			else
			{
				iLocal_95 = 2;
			}
			break;
		case 2:
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(true);
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				iLocal_94 = 11;
			}
			else if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_114, false))
			{
				iLocal_94 = 8;
			}
			else if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_114, Local_97.f_4))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_97.f_4, Local_305[1 /*7*/][0 /*3*/], Local_305[1 /*7*/][1 /*3*/], fLocal_306[1], false, true, 0))
				{
					__LIB_0__::func_402(0, -1);
					if (!iLocal_111)
					{
						__LIB_0__::func_498(747);
					}
					func_250(1);
					iLocal_118 = 1;
					if (iLocal_307)
					{
						iLocal_94 = 7;
					}
					else
					{
						iLocal_292 = MISC::GET_GAME_TIMER() + 5000;
						iLocal_94 = 12;
					}
				}
				else
				{
					iLocal_94 = 9;
				}
			}
			iLocal_95 = 0;
			break;
	}
}

void func_334()//Position - 0x2F537
{
	struct<3> Var0;
	func_17();
	switch (iLocal_95)
	{
		case 0:
			__LIB_0__::func_523(&iLocal_96);
			iLocal_96 = __LIB_10__::func_658(Local_112, 5, 1);
			MISC::SET_INSTANCE_PRIORITY_HINT(2);
			if (func_2())
			{
				iLocal_304 = 1;
			}
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 1)
			{
				if (!__LIB_0__::func_75() || MISC::GET_PROFILE_SETTING(203) == 0)
				{
					func_12(1);
					iLocal_309 = 0;
				}
				else
				{
					iLocal_309 = 1;
				}
			}
			iLocal_95 = 1;
			break;
		case 1:
			func_20();
			if (!func_4())
			{
				iLocal_95 = 2;
			}
			else if (!func_2())
			{
				if (func_3())
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_97.f_4, Local_305[1 /*7*/][0 /*3*/], Local_305[1 /*7*/][1 /*3*/], fLocal_306[1], false, false, 0))
					{
						if (!ENTITY::IS_ENTITY_IN_AIR(Local_97.f_4))
						{
							Var0 = { ENTITY::GET_ENTITY_COORDS(Local_97.f_4, true) };
							if (Var0.f_2 < 6.7f)
							{
								__LIB_0__::func_523(&iLocal_96);
								iLocal_94 = 12;
								iLocal_95 = 0;
							}
						}
					}
					else
					{
						iLocal_95 = 2;
					}
				}
				else
				{
					iLocal_95 = 2;
				}
			}
			else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				iLocal_95 = 2;
			}
			else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_97.f_4, Local_305[0 /*7*/][0 /*3*/], Local_305[0 /*7*/][1 /*3*/], fLocal_306[0], true, true, 0))
			{
				iLocal_95 = 2;
			}
			else if (iLocal_309)
			{
				if (!__LIB_0__::func_75())
				{
					iLocal_309 = 0;
					func_12(1);
				}
			}
			break;
		case 2:
			__LIB_0__::func_523(&iLocal_96);
			HUD::CLEAR_PRINTS();
			iLocal_95 = 0;
			if (!func_4())
			{
				iLocal_94 = 8;
			}
			else if (!func_2())
			{
				if (func_3() && ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_97.f_4, Local_305[0 /*7*/][0 /*3*/], Local_305[0 /*7*/][1 /*3*/], fLocal_306[0], false, false, 0))
				{
					if (!ENTITY::IS_ENTITY_IN_AIR(Local_97.f_4))
					{
						Var0 = { ENTITY::GET_ENTITY_COORDS(Local_97.f_4, true) };
						if (Var0.f_2 < 6.7f)
						{
							iLocal_94 = 12;
						}
					}
					else
					{
						iLocal_95 = 2;
					}
				}
				else
				{
					iLocal_94 = 9;
				}
			}
			else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_97.f_4, Local_305[0 /*7*/][0 /*3*/], Local_305[0 /*7*/][1 /*3*/], fLocal_306[0], false, true, 0))
			{
				iLocal_94 = 6;
			}
			else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				iLocal_94 = 11;
			}
			break;
	}
}

void func_336()//Position - 0x2F7A1
{
	func_17();
	switch (iLocal_95)
	{
		case 0:
			MISC::SET_INSTANCE_PRIORITY_HINT(2);
			if (iLocal_118)
			{
				if (!func_4())
				{
					func_12(6);
					__LIB_0__::func_523(&iLocal_96);
					iLocal_96 = __LIB_10__::func_727(iLocal_114, 1, 5);
				}
				else if (func_2())
				{
					func_338(4);
					iLocal_309 = 0;
					__LIB_0__::func_403(748, 0);
					__LIB_42__::func_415(1, "Start of towing stage", 0, 0, 0, 1);
					__LIB_0__::func_523(&iLocal_96);
					iLocal_94 = 5;
					iLocal_95 = 0;
				}
				else
				{
					if (MISC::GET_PROFILE_SETTING(203) == 0 || !__LIB_0__::func_75())
					{
						func_12(4);
						iLocal_309 = 0;
					}
					else
					{
						iLocal_309 = 1;
					}
					if (!HUD::DOES_BLIP_EXIST(iLocal_96))
					{
						iLocal_96 = __LIB_10__::func_727(Local_97.f_4, 1, 5);
					}
					iLocal_95 = 1;
				}
			}
			else if (func_4())
			{
				if (!HUD::DOES_BLIP_EXIST(iLocal_96))
				{
					iLocal_96 = __LIB_10__::func_727(Local_97.f_4, 1, 5);
				}
				iLocal_118 = 1;
			}
			break;
		case 1:
			if (((!iLocal_289 && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -458.11f, -1725.3f, 17.67f, -456.71f, -1701.81f, 22f, 17.5f, false, true, 0)) && !func_2()) && !func_3())
			{
				__LIB_0__::func_151("B3CTTHB", -1);
				iLocal_289 = 1;
			}
			if (func_2())
			{
				__LIB_0__::func_403(748, 0);
				__LIB_42__::func_415(1, "Start of towing stage", 0, 0, 0, 1);
				iLocal_95 = 2;
				iLocal_304 = 1;
			}
			else if (!func_4())
			{
				iLocal_304 = 0;
				iLocal_95 = 2;
			}
			else if (iLocal_309)
			{
				if (!__LIB_0__::func_75())
				{
					func_12(4);
					iLocal_309 = 0;
				}
			}
			break;
		case 2:
			__LIB_0__::func_523(&iLocal_96);
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(true);
			iLocal_95 = 0;
			if (func_4())
			{
				iLocal_94 = 5;
			}
			else
			{
				iLocal_94 = 8;
			}
			break;
	}
}

void func_338(int iParam0)//Position - 0x2F9A6
{
	if (Local_308[iParam0 /*3*/] == -1)
	{
	}
	else
	{
		Local_308[iParam0 /*3*/].f_1 = Local_308[iParam0 /*3*/];
	}
}

void func_339()//Position - 0x2F9CC
{
	switch (iLocal_95)
	{
		case 0:
			func_5(0);
			if (func_4())
			{
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("towtruck"), true);
				func_342();
				if (func_2())
				{
					func_338(4);
					__LIB_0__::func_523(&iLocal_96);
					iLocal_118 = 1;
					iLocal_287 = 1;
					iLocal_94 = 5;
					iLocal_95 = 0;
				}
				else
				{
					func_12(4);
					__LIB_0__::func_523(&iLocal_96);
					iLocal_96 = __LIB_10__::func_727(Local_97.f_4, 1, 5);
					iLocal_118 = 1;
					iLocal_287 = 1;
					iLocal_95 = 1;
				}
			}
			else
			{
				func_17();
				if (!iLocal_286 && (MISC::GET_GAME_TIMER() - iLocal_292) > 8000)
				{
					if (__LIB_35__::func_536(&uLocal_121, "BAR3CAU", "BAR3C_MUTT", 7, 0, 0, 0))
					{
						iLocal_286 = 1;
					}
				}
				else if (!iLocal_287 && (MISC::GET_GAME_TIMER() - iLocal_292) > 120000)
				{
					if (!func_341())
					{
						if (__LIB_35__::func_540(&uLocal_121, 49, "BAR3CAU", "BAR3C_HC", 7, 0, 0, 1))
						{
							iLocal_287 = 1;
						}
					}
				}
				else if (!iLocal_288 && (MISC::GET_GAME_TIMER() - iLocal_292) > 160000)
				{
					if (__LIB_35__::func_536(&uLocal_121, "BAR3CAU", "BAR3C_TOW", 7, 0, 0, 0))
					{
						iLocal_288 = 1;
					}
				}
			}
			break;
		case 1:
			if (iLocal_118)
			{
				if (!func_4())
				{
					func_12(6);
					__LIB_0__::func_523(&iLocal_96);
					iLocal_96 = __LIB_10__::func_727(iLocal_114, 1, 5);
					iLocal_118 = 0;
				}
				else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -417.58f, -1723.81f, 15.42f, -473.6f, -1705.96f, 26.95f, 49f, false, true, 0))
				{
					iLocal_95 = 2;
				}
				else if (func_2())
				{
					iLocal_95 = 2;
				}
			}
			else if (func_4())
			{
				func_50(6);
				__LIB_0__::func_523(&iLocal_96);
				iLocal_96 = __LIB_10__::func_727(Local_97.f_4, 1, 5);
				iLocal_118 = 1;
			}
			func_17();
			break;
		case 2:
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(true);
			iLocal_95 = 0;
			if (func_4())
			{
				if (func_2())
				{
					__LIB_0__::func_403(748, 0);
					__LIB_42__::func_415(1, "Start of towing stage", 0, 0, 0, 1);
					iLocal_94 = 5;
				}
				else
				{
					iLocal_94 = 4;
				}
				iLocal_118 = 1;
			}
			func_17();
			break;
	}
}

int func_341()//Position - 0x2FC19
{
	int iVar0;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true);
		if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("towtruck") || ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("towtruck2"))
		{
			return 1;
		}
	}
	iLocal_120 = 0;
	while (iLocal_120 <= 7)
	{
		if (!Local_117[iLocal_120 /*7*/].f_6 && __LIB_0__::func_530(PLAYER::PLAYER_PED_ID(), Local_117[iLocal_120 /*7*/], 8f, 1))
		{
			return 1;
		}
		iLocal_120++;
	}
	return 0;
}

void func_342()//Position - 0x2FC9B
{
	if (!iLocal_119)
	{
		__LIB_41__::func_636(0f, 0f, 0f, 0f, 0, 145);
		iLocal_119 = 1;
	}
}

void func_371()//Position - 0x35733
{
	switch (iLocal_95)
	{
		case 0:
			iLocal_298 = 0;
			bLocal_297 = false;
			if (__LIB_38__::func_30(&uLocal_121, 49, "BAR3CAU", "BAR3C_NG", 9, 1, 0, 0, 0))
			{
				iLocal_95 = 1;
			}
			break;
		case 1:
			func_5(0);
			func_17();
			if (func_4())
			{
				func_342();
				if (func_2())
				{
					func_338(3);
					func_338(4);
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 1)
					{
						iLocal_94 = 5;
						iLocal_95 = 0;
					}
					else
					{
						iLocal_94 = 11;
						iLocal_95 = 0;
					}
				}
				else
				{
					iLocal_94 = 4;
					iLocal_95 = 0;
					func_338(3);
				}
			}
			else if (!__LIB_0__::func_75())
			{
				iLocal_95 = 2;
			}
			break;
		case 2:
			if (!func_4())
			{
				func_17();
				func_12(3);
				__LIB_0__::func_523(&iLocal_96);
				iLocal_96 = __LIB_10__::func_727(Local_97.f_4, 1, 5);
				iLocal_287 = 0;
				iLocal_292 = MISC::GET_GAME_TIMER();
				iLocal_95 = 0;
				iLocal_94 = 3;
			}
			else
			{
				iLocal_94 = 4;
				iLocal_95 = 0;
				func_338(3);
			}
			break;
	}
}

void func_372()//Position - 0x3581E
{
	switch (iLocal_95)
	{
		case 0:
			__LIB_0__::func_84(500, 1);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
			if (func_4())
			{
				__LIB_0__::func_403(748, 0);
				func_338(3);
				func_338(4);
				VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(Local_97.f_4, false);
				VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_97.f_4, false);
				if (func_2())
				{
					iLocal_95 = 0;
					iLocal_94 = 5;
				}
				else
				{
					iLocal_95 = 0;
					iLocal_94 = 4;
				}
			}
			else
			{
				VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(Local_97.f_4, false);
				VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_97.f_4, false);
				bLocal_297 = false;
				iLocal_294 = 0;
				iLocal_95 = 1;
			}
			break;
		case 1:
			if (((!bLocal_297 && iLocal_294 != 0) && (iLocal_295 > 0 && iLocal_295 < 4)) && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/))
			{
				bLocal_297 = true;
			}
			switch (iLocal_294)
			{
				case 0:
					if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("BARRY3C_IGNITION_FAIL", false, -1) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_299))
					{
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(Local_97.f_4, -1, false) == PLAYER::PLAYER_PED_ID())
						{
							if (!iLocal_103)
							{
								VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(Local_97.f_4);
								iLocal_103 = 1;
							}
							iLocal_295 = 0;
							iLocal_296 = AUDIO::GET_SOUND_ID();
							iLocal_294 = 2;
						}
					}
					break;
				case 2:
					if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(Local_97.f_4, -1, false) == PLAYER::PLAYER_PED_ID() && PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_97.f_4))
					{
						if (iLocal_295 == 3)
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_300);
							TASK::TASK_PLAY_ANIM(0, sLocal_299, "franklinfailingtostartcar_enter", 8f, -8f, 2000, 8, 0f, false, false, false);
							TASK::TASK_PLAY_ANIM(0, sLocal_299, "franklinfailingtostartcar_loop", 8f, -8f, 8000, 9, 0f, false, false, false);
							TASK::TASK_PLAY_ANIM(0, sLocal_299, "franklinfailingtostartcar_exit", 8f, -8f, 766, 8, 0f, false, false, false);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_300);
							TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iLocal_300);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_300);
							iLocal_291 = MISC::GET_GAME_TIMER() + 2000;
							iLocal_294 = 3;
						}
						else if (iLocal_295 == 2)
						{
							if (__LIB_35__::func_536(&uLocal_121, "BAR3CAU", "BAR3C_C1", 7, 0, 0, 0))
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_300);
								TASK::TASK_PLAY_ANIM(0, sLocal_299, "franklinfailingtostartcar_enter", 8f, -8f, 2000, 8, 0f, false, false, false);
								TASK::TASK_PLAY_ANIM(0, sLocal_299, "franklinfailingtostartcar_loop", 8f, -8f, (1200 + iLocal_295 * 250), 9, 0f, false, false, false);
								TASK::TASK_PLAY_ANIM(0, sLocal_299, "franklinfailingtostartcar_exit", 8f, -8f, 766, 8, 0f, false, false, false);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_300);
								TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iLocal_300);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_300);
								iLocal_291 = MISC::GET_GAME_TIMER() + 2000;
								iLocal_294 = 3;
							}
						}
						else
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_300);
							TASK::TASK_PLAY_ANIM(0, sLocal_299, "franklinfailingtostartcar_enter", 8f, -8f, 2000, 8, 0f, false, false, false);
							TASK::TASK_PLAY_ANIM(0, sLocal_299, "franklinfailingtostartcar_loop", 8f, -8f, (1200 + iLocal_295 * 250), 9, 0f, false, false, false);
							TASK::TASK_PLAY_ANIM(0, sLocal_299, "franklinfailingtostartcar_exit", 8f, -8f, 766, 8, 0f, false, false, false);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_300);
							TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iLocal_300);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_300);
							iLocal_291 = MISC::GET_GAME_TIMER() + 2000;
							iLocal_294 = 3;
						}
					}
					break;
				case 3:
					if (MISC::GET_GAME_TIMER() > iLocal_291)
					{
						if (iLocal_295 == 4)
						{
							AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_296, "IGNITION_FAIL", Local_97.f_4, "BARRY_03_SOUNDSET", false, 0);
							AUDIO::SET_VARIABLE_ON_SOUND(iLocal_296, "HOLD TIME", 3f);
							iLocal_291 = MISC::GET_GAME_TIMER() + 9100;
						}
						else
						{
							AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_296, "IGNITION_FAIL", Local_97.f_4, "BARRY_03_SOUNDSET", false, 0);
							AUDIO::SET_VARIABLE_ON_SOUND(iLocal_296, "HOLD TIME", (SYSTEM::TO_FLOAT((1200 + iLocal_295 * 250)) / 1000f));
							iLocal_291 = (MISC::GET_GAME_TIMER() + iLocal_295 * 250) + 1200 + 766;
						}
						iLocal_294 = 4;
					}
					break;
				case 4:
					if (MISC::GET_GAME_TIMER() > iLocal_291)
					{
						if (bLocal_297)
						{
							iLocal_294 = 6;
						}
						else
						{
							iLocal_295++;
							if (iLocal_295 == 4)
							{
								TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), sLocal_299, "franklinfailingtostartcar_slamwheel", 1000f, -8f, 3300, 0, 0f, false, false, false);
								iLocal_291 = MISC::GET_GAME_TIMER() + 330;
								iLocal_294 = 5;
							}
							else
							{
								iLocal_294 = 2;
							}
						}
					}
					break;
				case 5:
					if (MISC::GET_GAME_TIMER() > iLocal_291)
					{
						VEHICLE::START_VEHICLE_HORN(Local_97.f_4, 500, MISC::GET_HASH_KEY("NORMAL"), false);
						iLocal_291 = MISC::GET_GAME_TIMER() + 2000;
						iLocal_294 = 8;
					}
					break;
				case 6:
					if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_97.f_4))
					{
						if (!__LIB_0__::func_75())
						{
							if (__LIB_35__::func_536(&uLocal_121, "BAR3CAU", "BAR3C_C2", 7, 0, 0, 0))
							{
								iLocal_291 = MISC::GET_GAME_TIMER();
								iLocal_294 = 7;
							}
						}
						else
						{
							iLocal_291 = MISC::GET_GAME_TIMER();
							iLocal_294 = 7;
						}
					}
					break;
				case 7:
					if (MISC::GET_GAME_TIMER() > iLocal_291)
					{
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
						TASK::TASK_LEAVE_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_97.f_4, 0);
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
						iLocal_294 = 8;
					}
					break;
				case 8:
					iLocal_291 = MISC::GET_GAME_TIMER();
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					iLocal_95 = 2;
					break;
			}
			break;
		case 2:
			if (!__LIB_0__::func_75() && (MISC::GET_GAME_TIMER() - iLocal_291) > 2500)
			{
				iLocal_95 = 0;
				iLocal_94 = 2;
			}
			break;
	}
}

void func_374()//Position - 0x35D67
{
	switch (iLocal_95)
	{
		case 0:
			if (HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
			{
				if (func_4())
				{
					func_342();
					if (__LIB_35__::func_536(&uLocal_121, "BAR3CAU", "BAR3C_C2", 7, 0, 0, 0))
					{
						if (func_2())
						{
							__LIB_0__::func_403(748, 0);
							func_338(3);
							func_338(4);
							iLocal_94 = 5;
							iLocal_95 = 0;
						}
						else
						{
							func_338(3);
							iLocal_94 = 4;
							iLocal_95 = 0;
						}
					}
				}
				else
				{
					iLocal_96 = __LIB_10__::func_727(Local_97.f_4, 1, 5);
					func_12(0);
					iLocal_95 = 1;
					AUDIO::REQUEST_SCRIPT_AUDIO_BANK("BARRY3C_IGNITION_FAIL", false, -1);
				}
			}
			break;
		case 1:
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_97.f_4, false))
			{
				iLocal_95 = 2;
			}
			else if (func_4())
			{
				func_342();
				if (__LIB_35__::func_536(&uLocal_121, "BAR3CAU", "BAR3C_C2", 7, 0, 0, 0))
				{
					if (func_2())
					{
						__LIB_0__::func_403(748, 0);
						func_338(3);
						func_338(4);
						iLocal_94 = 5;
						iLocal_95 = 0;
					}
					else
					{
						func_338(3);
						iLocal_94 = 4;
						iLocal_95 = 0;
					}
				}
			}
			break;
		case 2:
			HUD::CLEAR_PRINTS();
			__LIB_0__::func_523(&iLocal_96);
			iLocal_94 = 1;
			iLocal_95 = 0;
			break;
	}
}

int func_381()//Position - 0x360C5
{
	if (!__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_97.f_4))
	{
		if (ENTITY::IS_ENTITY_DEAD(Local_97.f_4, false))
		{
			sLocal_310 = "B3CVHDEST";
			iLocal_95 = 0;
			iLocal_94 = 13;
			return 1;
		}
		else if (iLocal_103)
		{
			if (VEHICLE::IS_VEHICLE_STUCK_ON_ROOF(Local_97.f_4))
			{
				if (iLocal_100)
				{
					if ((MISC::GET_GAME_TIMER() - iLocal_104) > 7000)
					{
						sLocal_310 = "B3CVHSTUCK";
						iLocal_95 = 0;
						iLocal_94 = 13;
						return 1;
					}
				}
				else
				{
					iLocal_100 = 1;
					iLocal_104 = MISC::GET_GAME_TIMER();
				}
			}
			else
			{
				iLocal_100 = 0;
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_114))
	{
		if (ENTITY::IS_ENTITY_DEAD(iLocal_114, false) && iLocal_307 == 0)
		{
			if (func_3())
			{
				sLocal_310 = "B3CCBDEST";
			}
			else
			{
				sLocal_310 = "B3CTWDEST";
			}
			iLocal_95 = 0;
			iLocal_94 = 13;
			return 1;
		}
		else if (iLocal_102 && iLocal_307 == 0)
		{
			if (VEHICLE::IS_VEHICLE_STUCK_ON_ROOF(iLocal_114))
			{
				if (iLocal_101)
				{
					if ((MISC::GET_GAME_TIMER() - iLocal_105) > 7000)
					{
						if (func_3())
						{
							sLocal_310 = "B3CCBSTUCK";
						}
						else
						{
							sLocal_310 = "B3CTWSTUCK";
						}
						iLocal_95 = 0;
						iLocal_94 = 13;
						return 1;
					}
				}
				else
				{
					iLocal_101 = 1;
					iLocal_105 = MISC::GET_GAME_TIMER();
				}
			}
			else
			{
				iLocal_101 = 0;
			}
		}
	}
	return 0;
}

void func_382()//Position - 0x361F2
{
	switch (iLocal_95)
	{
		case 0:
			__LIB_0__::func_523(&iLocal_96);
			if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_310))
			{
				sLocal_310 = "DEFAULT" /* GXT: _ */;
			}
			if (MISC::ARE_STRINGS_EQUAL(sLocal_310, "DEFAULT" /* GXT: _ */))
			{
				__LIB_38__::func_39(1);
			}
			else
			{
				__LIB_39__::func_861(sLocal_310, 1);
			}
			iLocal_95 = 1;
			break;
		case 1:
			if (__LIB_0__::func_204())
			{
				if ((__LIB_0__::func_121(Local_97.f_4) && __LIB_0__::func_121(iLocal_114)) && ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_97.f_4, iLocal_114))
				{
					VEHICLE::DETACH_VEHICLE_FROM_ANY_TOW_TRUCK(Local_97.f_4);
				}
				func_383();
				func_472();
			}
			break;
	}
}

void func_383()//Position - 0x36288
{
	if (__LIB_0__::func_121(Local_97.f_4))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_97.f_4, false, 1);
	}
	__LIB_0__::func_106(&iLocal_114);
	__LIB_0__::func_106(&(Local_97.f_4));
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("towtruck"), false);
	__LIB_36__::func_664(0);
	__LIB_32__::func_757(&Local_79, 1, 0, 0);
}

void func_420(bool bParam0)//Position - 0x37137
{
	if (bParam0)
	{
		if (__LIB_24__::func_934())
		{
			iLocal_115 = __LIB_9__::func_997();
			if (((iLocal_115 != joaat("towtruck2") && iLocal_115 != joaat("cargobob")) && iLocal_115 != joaat("cargobob2")) && iLocal_115 != joaat("cargobob3"))
			{
				iLocal_115 = joaat("towtruck");
			}
		}
		else
		{
			iLocal_115 = joaat("towtruck");
		}
		if (iLocal_115 == joaat("towtruck") || iLocal_115 == joaat("towtruck2"))
		{
			__LIB_0__::func_370(-1237.9617f, -1035.1941f, 7.2466f, 110f, 1, 0);
		}
		else
		{
			__LIB_0__::func_370(-1074.1339f, -1250.2921f, 4.5293f, 199.5f, 1, 0);
		}
	}
	func_428();
	__LIB_10__::func_732();
	__LIB_0__::func_523(&iLocal_96);
	iLocal_94 = 7;
	iLocal_95 = 0;
	func_338(0);
	func_338(1);
	func_338(2);
	func_338(3);
	func_338(4);
	func_338(5);
	func_338(6);
	func_338(8);
	func_338(7);
	func_338(7);
	func_426(-1151.36f, -1243.57f, 6.52f, 25.18f);
	if (bParam0)
	{
		if (iLocal_115 == joaat("towtruck") || iLocal_115 == joaat("towtruck2"))
		{
			func_423(-1237.9617f, -1035.1941f, 7.2466f, 110f, 0);
		}
		else
		{
			func_423(-1074.1339f, -1250.2921f, 4.5293f, 199.5f, 0);
		}
		while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
		{
			SYSTEM::WAIT(0);
		}
		__LIB_6__::func_775(iLocal_114, -1, 0);
	}
	else if (iLocal_115 == joaat("towtruck") || iLocal_115 == joaat("towtruck2"))
	{
		func_423(-1237.9617f, -1035.1941f, 7.2466f, 110f, 1);
	}
	else
	{
		func_423(-1074.1339f, -1250.2921f, 4.5293f, 199.5f, 1);
	}
	__LIB_0__::func_84(500, 1);
}

void func_423(struct<3> Param0, float fParam1, bool bParam2)//Position - 0x373DD
{
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
	{
		if (bParam2)
		{
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Param0, true, false, false, true);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_114))
	{
		if (iLocal_102)
		{
			VEHICLE::REMOVE_VEHICLE_UPSIDEDOWN_CHECK(iLocal_114);
			iLocal_102 = 0;
		}
		__LIB_11__::func_32(&iLocal_114);
	}
	STREAMING::REQUEST_MODEL(iLocal_115);
	while (!STREAMING::HAS_MODEL_LOADED(iLocal_115))
	{
		SYSTEM::WAIT(0);
	}
	iLocal_114 = VEHICLE::CREATE_VEHICLE(iLocal_115, Param0, fParam1, true, true, false);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_115);
	VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_114, iLocal_116);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_114, 5f);
	if (bParam2)
	{
		__LIB_7__::func_421(PLAYER::PLAYER_PED_ID(), iLocal_114, -1, 0);
	}
	VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(iLocal_114, false);
	VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(iLocal_114, false);
	VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_114, true);
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_114, false))
	{
		VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(iLocal_114);
		iLocal_102 = 1;
	}
}

void func_426(struct<3> Param0, float fParam1)//Position - 0x37521
{
	STREAMING::REQUEST_MODEL(Local_97.f_5);
	if (ENTITY::DOES_ENTITY_EXIST(Local_97.f_4))
	{
		if (iLocal_103)
		{
			VEHICLE::REMOVE_VEHICLE_UPSIDEDOWN_CHECK(Local_97.f_4);
			iLocal_103 = 0;
		}
	}
	while (!STREAMING::HAS_MODEL_LOADED(Local_97.f_5))
	{
		SYSTEM::WAIT(0);
	}
	__LIB_0__::func_123(&iLocal_106);
	__LIB_11__::func_32(&(Local_97.f_4));
	Local_97.f_4 = VEHICLE::CREATE_VEHICLE(Local_97.f_5, Param0, fParam1, true, true, false);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_97.f_5);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_97.f_4, 5f);
	VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(Local_97.f_4, false);
	VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_97.f_4, false);
	VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_97.f_4, 1);
	VEHICLE::SET_VEHICLE_UNDRIVEABLE(Local_97.f_4, true);
	VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_97.f_4, true);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_97.f_4, true, 1);
	if (!ENTITY::IS_ENTITY_DEAD(Local_97.f_4, false))
	{
		VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(Local_97.f_4);
		iLocal_103 = 1;
	}
	iLocal_106 = OBJECT::CREATE_OBJECT(iLocal_109, Param0 + Local_107, true, true, false);
	ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_106, Local_97.f_4, 0, Local_107, Local_108, false, false, false, false, 2, true, 0);
}

void func_428()//Position - 0x37648
{
	HUD::CLEAR_PRINTS();
	HUD::CLEAR_HELP(true);
	if (__LIB_0__::func_75())
	{
		__LIB_6__::func_771();
	}
	__LIB_6__::func_849(0);
}

void func_440(bool bParam0)//Position - 0x3794A
{
	if (bParam0)
	{
		if (__LIB_24__::func_934())
		{
			iLocal_115 = __LIB_9__::func_997();
			if (((iLocal_115 != joaat("towtruck2") && iLocal_115 != joaat("cargobob")) && iLocal_115 != joaat("cargobob2")) && iLocal_115 != joaat("cargobob3"))
			{
				iLocal_115 = joaat("towtruck");
			}
		}
		else
		{
			iLocal_115 = joaat("towtruck");
		}
		if (iLocal_115 == joaat("towtruck") || iLocal_115 == joaat("towtruck2"))
		{
			__LIB_0__::func_370(-1154.2244f, -1234.3102f, 5.7174f, 12.45f, 1, 0);
		}
		else
		{
			__LIB_0__::func_370(-1148.1831f, -1227.005f, 8.4468f, 19.2f, 1, 0);
		}
	}
	func_428();
	__LIB_10__::func_732();
	__LIB_0__::func_523(&iLocal_96);
	if (bParam0 && !Global_94618)
	{
		iLocal_307 = 1;
		iLocal_94 = 7;
	}
	else
	{
		iLocal_307 = 0;
		iLocal_292 = MISC::GET_GAME_TIMER() + 3000;
		iLocal_94 = 12;
	}
	iLocal_95 = 0;
	iLocal_120 = 0;
	while (iLocal_120 <= 7)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_117[iLocal_120 /*7*/].f_4))
		{
			__LIB_11__::func_32(&(Local_117[iLocal_120 /*7*/].f_4));
		}
		iLocal_120++;
	}
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("towtruck"), true);
	iLocal_286 = 1;
	iLocal_287 = 1;
	iLocal_288 = 1;
	func_338(0);
	func_338(1);
	func_11(2, 0);
	func_338(3);
	func_338(4);
	func_11(5, 0);
	func_11(6, 0);
	func_11(8, 0);
	func_11(7, 0);
	func_11(7, 0);
	func_426(-1151.36f, -1243.57f, 6.52f, 25.18f);
	if (bParam0)
	{
		if (iLocal_115 == joaat("towtruck") || iLocal_115 == joaat("towtruck2"))
		{
			func_423(-1154.2244f, -1234.3102f, 5.7174f, 12.45f, 0);
		}
		else
		{
			func_423(-1148.1831f, -1227.005f, 8.4468f, 19.2f, 0);
		}
		while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
		{
			SYSTEM::WAIT(0);
		}
		__LIB_6__::func_775(iLocal_114, -1, 0);
	}
	else if (iLocal_115 == joaat("towtruck") || iLocal_115 == joaat("towtruck2"))
	{
		func_423(-1154.2244f, -1234.3102f, 5.7174f, 12.45f, 1);
	}
	else
	{
		func_423(-1148.1831f, -1227.005f, 8.4468f, 19.2f, 1);
	}
	__LIB_42__::func_415(2, "Delivered vehicle", 1, 0, 0, 1);
}

void func_441(bool bParam0)//Position - 0x37B91
{
	if (bParam0)
	{
		if (__LIB_24__::func_934())
		{
			iLocal_115 = __LIB_9__::func_997();
			if (((iLocal_115 != joaat("towtruck2") && iLocal_115 != joaat("cargobob")) && iLocal_115 != joaat("cargobob2")) && iLocal_115 != joaat("cargobob3"))
			{
				iLocal_115 = joaat("towtruck");
			}
		}
		else
		{
			iLocal_115 = joaat("towtruck");
		}
		__LIB_0__::func_370(Local_97, Local_97.f_3, 1, 0);
	}
	if (iLocal_115 == joaat("towtruck"))
	{
		Local_311 = { -462.0807f, -1711.6804f, 17.6454f };
		fLocal_312 = 277.92f;
	}
	else if (iLocal_115 == joaat("towtruck2"))
	{
		Local_311 = { -463.5672f, -1712.2842f, 17.6392f };
		fLocal_312 = 272.29f;
	}
	else if ((iLocal_115 == joaat("cargobob") || iLocal_115 == joaat("cargobob2")) || iLocal_115 == joaat("cargobob3"))
	{
		Local_311 = { -455.4628f, -1712.2817f, 17.642f };
		fLocal_312 = 0.7f;
	}
	if (bParam0)
	{
		__LIB_0__::func_370(Local_311, fLocal_312, 1, 0);
	}
	else if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_97.f_4, false))
	{
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_97, true, false, false, true);
	}
	func_428();
	__LIB_10__::func_732();
	__LIB_0__::func_523(&iLocal_96);
	iLocal_94 = 5;
	iLocal_95 = 0;
	iLocal_120 = 0;
	while (iLocal_120 <= 7)
	{
		__LIB_11__::func_32(&(Local_117[iLocal_120 /*7*/].f_4));
		iLocal_120++;
	}
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("towtruck"), true);
	iLocal_301 = 2;
	iLocal_303 = 0;
	iLocal_286 = 1;
	iLocal_287 = 1;
	iLocal_288 = 1;
	iLocal_307 = 0;
	func_338(0);
	func_11(1, 0);
	func_11(2, 0);
	func_338(3);
	func_338(4);
	func_11(5, 0);
	func_11(6, 0);
	func_11(8, 0);
	func_11(7, 0);
	func_11(7, 0);
	func_426(Local_97, Local_97.f_3);
	if (bParam0)
	{
		func_423(Local_311, fLocal_312, 0);
		if (__LIB_0__::func_121(iLocal_114) && iLocal_115 == joaat("towtruck"))
		{
			VEHICLE::SET_VEHICLE_TOW_TRUCK_ARM_POSITION(iLocal_114, 0f);
		}
		while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
		{
			SYSTEM::WAIT(0);
		}
		__LIB_6__::func_775(iLocal_114, -1, 0);
	}
	else
	{
		func_423(Local_311, fLocal_312, 1);
		if (__LIB_0__::func_121(iLocal_114) && iLocal_115 == joaat("towtruck"))
		{
			VEHICLE::SET_VEHICLE_TOW_TRUCK_ARM_POSITION(iLocal_114, 0f);
		}
	}
	if (iLocal_115 == joaat("towtruck") || iLocal_115 == joaat("towtruck2"))
	{
		while (!func_2())
		{
			SYSTEM::WAIT(0);
		}
	}
	__LIB_42__::func_415(1, "Start of towing stage", 0, 0, 0, 1);
}

void func_452(bool bParam0)//Position - 0x38177
{
	if (bParam0)
	{
		__LIB_0__::func_370(Local_97, Local_97.f_3, 1, 0);
	}
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("towtruck"), false);
	func_428();
	__LIB_10__::func_732();
	__LIB_0__::func_523(&iLocal_96);
	iLocal_94 = 1;
	iLocal_95 = 0;
	bLocal_110 = false;
	iLocal_301 = 2;
	iLocal_303 = 0;
	iLocal_286 = 0;
	iLocal_287 = 0;
	iLocal_288 = 0;
	iLocal_307 = 0;
	func_338(0);
	func_11(1, 0);
	func_11(2, 0);
	func_11(3, 0);
	func_11(4, 0);
	func_11(5, 0);
	func_11(6, 0);
	func_11(7, 0);
	func_11(7, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_114))
	{
		__LIB_11__::func_32(&iLocal_114);
	}
	iLocal_120 = 0;
	while (iLocal_120 <= 7)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_117[iLocal_120 /*7*/].f_4))
		{
			__LIB_11__::func_32(&(Local_117[iLocal_120 /*7*/].f_4));
		}
		Local_117[iLocal_120 /*7*/].f_6 = 0;
		iLocal_120++;
	}
	if (bParam0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_97.f_4))
		{
			func_426(Local_97, Local_97.f_3);
		}
		while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
		{
			SYSTEM::WAIT(0);
		}
		__LIB_6__::func_775(Local_97.f_4, -1, 0);
	}
	else
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_97, true, false, false, true);
		}
		func_426(Local_97, Local_97.f_3);
		PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_97.f_4, -1);
	}
}

void func_455()//Position - 0x38302
{
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.2f);
	PATHFIND::SET_GPS_DISABLED_ZONE(-1188.409f, -1233.0059f, 0f, -1165.7822f, -1214.3778f, 15f);
	HUD::REQUEST_ADDITIONAL_TEXT("BARR3C", 0);
	Local_112 = { -1152.43f, -1238.8237f, 5.9752f };
	iLocal_80 = __LIB_29__::func_772();
	iLocal_113[0] = PED::ADD_SCENARIO_BLOCKING_AREA(-1156.9f, -1274f, 0f, -1141.5f, -1239.6f, 8f, false, true, true, true);
	iLocal_113[1] = PED::ADD_SCENARIO_BLOCKING_AREA(-1177f, -1292f, 0f, -1160f, -1273.3f, 8f, false, true, true, true);
	Local_97.f_5 = joaat("emperor2");
	Local_97 = { -468.9f, -1713.06f, 18.21f };
	Local_97.f_3 = -76.2f;
	Local_117[0 /*7*/] = { func_467(-552.67f, -1698.84f, 18.16f, 205.7f) };
	Local_117[1 /*7*/] = { func_467(-317.14f, -1540.72f, 26.67f, 336.5f) };
	Local_117[2 /*7*/] = { func_467(-104.41f, -1984.91f, 17.02f, 171.6f) };
	Local_117[3 /*7*/] = { func_467(-586.69f, -1774.59f, 21.67f, 145.8f) };
	Local_117[4 /*7*/] = { func_467(-1207.9f, -1334.87f, 3.77f, 204.1f) };
	Local_117[5 /*7*/] = { func_467(-1253.67f, -1210.3f, 6.03f, 10.7f) };
	Local_117[6 /*7*/] = { func_467(-426.56f, -1717.89f, 18.2f, 43.5f) };
	Local_117[7 /*7*/] = { func_467(401.64f, -1633.3f, 28.29f, 231.5f) };
	if (__LIB_0__::func_121(Local_97.f_4))
	{
		VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(Local_97.f_4, false);
		VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_97.f_4, false);
		VEHICLE::SET_VEHICLE_UNDRIVEABLE(Local_97.f_4, true);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_97.f_4, true);
	}
	STREAMING::REQUEST_MODEL(joaat("towtruck"));
	STREAMING::REQUEST_ANIM_DICT(sLocal_299);
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
	{
		__LIB_0__::func_203(&uLocal_121, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	}
	__LIB_0__::func_203(&uLocal_121, 3, 0, "BARRY", 0, 1);
	iLocal_289 = 0;
	func_464();
	sLocal_310 = "DEFAULT" /* GXT: _ */;
	iLocal_303 = 0;
	func_463();
	iLocal_301 = 2;
	Local_305[0 /*7*/][0 /*3*/] = { -1161.11f, -1217.32f, 5.65f };
	Local_305[0 /*7*/][1 /*3*/] = { -1147.86f, -1251.6f, 10.01f };
	fLocal_306[0] = 10.5f;
	Local_305[1 /*7*/][0 /*3*/] = { -1147.14f, -1253.07f, 5.65f };
	Local_305[1 /*7*/][1 /*3*/] = { -1161.97f, -1216.69f, 10.98f };
	fLocal_306[1] = 12f;
	__LIB_24__::func_951(49, 1, 0);
	iLocal_307 = 0;
	PATHFIND::SET_GPS_DISABLED_ZONE(-1132.88f, -1262.01f, 0f, -1102.43f, -1196.58f, 15f);
	__LIB_36__::func_664(1);
}

void func_463()//Position - 0x388D3
{
	sLocal_302[0] = "BAR3C_Z1";
	sLocal_302[1] = "BAR3C_Z2";
	sLocal_302[2] = "BAR3C_Z3";
	sLocal_302[3] = "BAR3C_Z4";
}

void func_464()//Position - 0x38903
{
	Local_308[0 /*3*/] = { __LIB_10__::func_733("B3CENTV", 1) };
	Local_308[1 /*3*/] = { __LIB_10__::func_733("B3CDELV", 1) };
	Local_308[2 /*3*/] = { __LIB_10__::func_733("B3CWAN1", -1) };
	Local_308[3 /*3*/] = { __LIB_10__::func_733("B3CNOGO", 1) };
	Local_308[4 /*3*/] = { __LIB_10__::func_733("B3CREVRS", 1) };
	Local_308[5 /*3*/] = { __LIB_10__::func_733("B3CLEAVE", 1) };
	Local_308[6 /*3*/] = { __LIB_10__::func_733("B3CRTTT", 1) };
	Local_308[7 /*3*/] = { __LIB_10__::func_733("B3CGBTB", 1) };
	Local_308[8 /*3*/] = { __LIB_10__::func_733("B3CRTCB", 1) };
}

struct<7> func_467(struct<3> Param0, float fParam1)//Position - 0x38A5B
{
	struct<7> Var0;
	Var0 = { Param0 };
	Var0.f_3 = fParam1;
	Var0.f_5 = joaat("towtruck");
	Var0.f_6 = 0;
	return Var0;
}

void func_472()//Position - 0x38AE9
{
	if (__LIB_26__::func_257())
	{
	}
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	__LIB_32__::func_757(&Local_79, 1, 0, 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_80, false);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_113[0], false);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_113[1], false);
	PATHFIND::SET_GPS_DISABLED_ZONE(0f, 0f, 0f, 0f, 0f, 0f);
	func_383();
	MISC::SET_INSTANCE_PRIORITY_HINT(0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

