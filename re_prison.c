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
	bool bLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<3> Local_53[12];
	int iLocal_54 = 0;
	bool bLocal_55 = 0;
	int iLocal_56 = 0;
	var uLocal_57 = 0;
	bool bLocal_58 = 0;
	int iLocal_59[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_60 = 0;
	bool bLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	struct<7> Local_70 = { 0, 0, 1097859072, 1500, 45, 1103626240, 5 } ;
	var uLocal_71 = 0;
	int* iLocal_72 = NULL;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	int* iLocal_78 = NULL;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 16;
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
	int iLocal_246 = 0;
	int iLocal_247 = 0;
	struct<3> Local_248 = { 0, 0, 0 } ;
	int iLocal_249 = 0;
	int iLocal_250 = 0;
	int iLocal_251 = 0;
	struct<76> Local_252 = { 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10 } ;
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
	int iLocal_263[3] = { 0, 0, 0 };
	int iLocal_264[3] = { 0, 0, 0 };
	int iLocal_265[3] = { 0, 0, 0 };
	float fLocal_266 = 0f;
	bool bLocal_267 = 0;
	int iLocal_268 = 0;
	int iLocal_269 = 0;
	struct<13> Local_270[10];
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
	int iLocal_289 = 0;
	int iLocal_290 = 0;
	int iLocal_291 = 0;
	bool bLocal_292 = 0;
	int iLocal_293 = 0;
	bool bLocal_294 = 0;
	int iLocal_295 = 0;
	var uLocal_296[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_297[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_298 = 0;
	int iLocal_299 = 0;
	var uLocal_300 = 0;
	int iLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	struct<3> Local_305 = { 0, 0, 0 } ;
	int iLocal_306 = 0;
	struct<41> Local_307 = { 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 3, 0, 0, 0, 4 } ;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
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
	fLocal_266 = 0f;
	bLocal_267 = true;
	Local_305 = { 1683.6819f, 2518.867f, 44.5651f };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_89(0);
	}
	iLocal_247 = PLAYER::PLAYER_PED_ID();
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(PLAYER::PLAYER_ID());
	}
	while (true)
	{
		if (ENTITY::IS_ENTITY_DEAD(iLocal_247, false))
		{
			func_89(0);
		}
		func_88();
		Local_248 = { ENTITY::GET_ENTITY_COORDS(iLocal_247, true) };
		switch (iLocal_246)
		{
			case 0:
				func_86();
				iLocal_246 = 1;
				break;
			case 1:
				if (!Global_31968)
				{
					func_85();
					func_84();
					func_83();
					func_81();
					iLocal_246 = 2;
				}
				break;
			case 2:
				if ((((func_80() && func_79()) && func_78()) && func_77()) && func_76())
				{
					iLocal_246 = 3;
				}
				break;
			case 3:
				func_70();
				SYSTEM::WAIT(0);
				func_69();
				SYSTEM::WAIT(0);
				func_66();
				func_65();
				iLocal_246 = 4;
				break;
			case 4:
				if (!Global_31968)
				{
					if (Global_97369)
					{
						func_89(0);
					}
					func_34();
					func_33();
					func_30();
					func_29();
					func_27();
					func_5();
					func_4();
				}
				else if (__LIB_31__::func_996(0))
				{
					func_89(1);
				}
				break;
		}
		SYSTEM::WAIT(0);
	}
}

void func_4()//Position - 0x22C
{
	int iVar0;
	bool bVar1;
	bVar1 = false;
	if (iLocal_51 == 1)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1766.972f, 2409.5964f, 43.55469f, 1826.6466f, 2471.6326f, 56.308628f, 12f, false, true, 0))
			{
				if (!bLocal_55)
				{
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", false, true);
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", true, true);
					iLocal_59[0] = 1;
				}
			}
			else
			{
				iLocal_59[0] = 0;
			}
		}
	}
	else if (iLocal_51 == 2)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1662.3102f, 2391.0603f, 43.51377f, 1761.3618f, 2405.1426f, 56.654724f, 12f, false, true, 0))
			{
				if (!bLocal_55)
				{
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", false, true);
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", true, true);
					iLocal_59[1] = 1;
				}
			}
			else
			{
				iLocal_59[1] = 0;
			}
		}
	}
	else if (iLocal_51 == 3)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1537.3691f, 2465.132f, 43.5756f, 1655.6632f, 2391.8218f, 56.544037f, 12f, false, true, 0))
			{
				if (!bLocal_55)
				{
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", false, true);
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", true, true);
					iLocal_59[2] = 1;
				}
			}
			else
			{
				iLocal_59[2] = 0;
			}
		}
	}
	else if (iLocal_51 == 4)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1529.1527f, 2584.2637f, 43.616802f, 1535.0143f, 2469.2527f, 56.5985f, 12f, false, true, 0))
			{
				if (!bLocal_55)
				{
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", false, true);
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", true, true);
					iLocal_59[3] = 1;
				}
			}
			else
			{
				iLocal_59[3] = 0;
			}
		}
	}
	else if (iLocal_51 == 5)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1565.0453f, 2681.2046f, 43.505524f, 1529.9149f, 2586.4275f, 56.526855f, 12f, false, true, 0))
			{
				if (!bLocal_55)
				{
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", false, true);
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", true, true);
					iLocal_59[4] = 1;
				}
			}
			else
			{
				iLocal_59[4] = 0;
			}
		}
	}
	else if (iLocal_51 == 6)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1645.1686f, 2760.3303f, 43.6705f, 1567.1129f, 2682.9048f, 56.391766f, 12f, false, true, 0))
			{
				if (!bLocal_55)
				{
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", false, true);
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", true, true);
					iLocal_59[5] = 1;
				}
			}
			else
			{
				iLocal_59[5] = 0;
			}
		}
	}
	else if (iLocal_51 == 7)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1772.306f, 2766.3638f, 43.591255f, 1650.228f, 2761.6912f, 56.530285f, 12f, false, true, 0))
			{
				if (!bLocal_55)
				{
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", false, true);
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", true, true);
					iLocal_59[6] = 1;
				}
			}
			else
			{
				iLocal_59[6] = 0;
			}
		}
	}
	else if (iLocal_51 == 8)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1831.4353f, 2623.2573f, 43.466583f, 1851.6586f, 2696.4043f, 56.680935f, 12f, false, true, 0))
			{
				if (!bLocal_55)
				{
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", false, true);
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", true, true);
					iLocal_59[7] = 1;
				}
			}
			else
			{
				iLocal_59[7] = 0;
			}
		}
	}
	else if (iLocal_51 == 9)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1831.4353f, 2623.2573f, 43.466583f, 1851.6586f, 2696.4043f, 56.680935f, 12f, false, true, 0))
			{
				if (!bLocal_55)
				{
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", false, true);
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", true, true);
					iLocal_59[8] = 1;
				}
			}
			else
			{
				iLocal_59[8] = 0;
			}
		}
	}
	else if (iLocal_51 == 10)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1829.468f, 2480.96f, 43.52237f, 1836.9982f, 2566.8564f, 60.35412f, 20.5f, false, true, 0))
			{
				if (!bLocal_55)
				{
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", false, true);
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", true, true);
					iLocal_59[9] = 1;
				}
			}
			else
			{
				iLocal_59[9] = 0;
			}
		}
	}
	iLocal_51++;
	if (iLocal_51 > 10)
	{
		iLocal_51 = 0;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (iLocal_59[iVar0])
			{
				bVar1 = true;
			}
			iVar0++;
		}
		if (!bVar1)
		{
			if (!bLocal_55)
			{
				AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", false, true);
				AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", true, true);
			}
		}
	}
}

void func_5()//Position - 0x6CC
{
	struct<3> Var0;
	switch (iLocal_50)
	{
		case 0:
			STREAMING::REQUEST_MODEL(joaat("police3"));
			STREAMING::REQUEST_MODEL(joaat("S_M_Y_Cop_01"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("police3")) && STREAMING::HAS_MODEL_LOADED(joaat("S_M_Y_Cop_01")))
			{
				iLocal_50++;
			}
			break;
		case 1:
			iLocal_66 = VEHICLE::CREATE_VEHICLE(joaat("police3"), 1797.7852f, 2599.6965f, 44.5769f, 269.6189f, true, true, false);
			iLocal_68 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_66, 6, joaat("S_M_Y_Cop_01"), -1, true, true);
			func_26(&iLocal_68);
			iLocal_50++;
			break;
		case 2:
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			}
			if ((func_16(iLocal_68, iLocal_66, &Local_70, &uLocal_71, 0, 1, 0, 1, 1) || func_16(iLocal_69, iLocal_67, &Local_70, &uLocal_71, 0, 1, 0, 1, 1)) || (__LIB_0__::func_875(Var0, 4, 20, 0) && !PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID())))
			{
				OBJECT::SET_LOCKED_UNSTREAMED_IN_DOOR_OF_TYPE(joaat("prop_gate_prison_01"), 1845f, 2605f, 45f, false, 0f, 50f, 0f);
				OBJECT::SET_LOCKED_UNSTREAMED_IN_DOOR_OF_TYPE(joaat("prop_gate_prison_01"), 1819.2744f, 2608.5369f, 44.6195f, false, 0f, 50f, 0f);
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_68, false))
				{
					TASK::TASK_COMBAT_PED(iLocal_68, PLAYER::PLAYER_PED_ID(), 0, 16);
				}
				if (!__LIB_1__::func_13(&iLocal_72))
				{
					__LIB_1__::func_362(&iLocal_72);
				}
				iLocal_50++;
			}
			break;
		case 3:
			if (__LIB_1__::func_13(&iLocal_72))
			{
				if (__LIB_2__::func_572(&iLocal_72) > 15f)
				{
					iLocal_67 = VEHICLE::CREATE_VEHICLE(joaat("police3"), 1755.1588f, 2614.4556f, 44.5652f, 179.3394f, true, true, false);
					iLocal_69 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_67, 6, joaat("S_M_Y_Cop_01"), -1, true, true);
					func_26(&iLocal_69);
					TASK::TASK_COMBAT_PED(iLocal_69, PLAYER::PLAYER_PED_ID(), 0, 16);
					iLocal_50++;
				}
				else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					{
						Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
					}
					if (func_7(1818.2367f, 2604.9265f, 44.57381f, Var0, 1125515264))
					{
						func_6();
						iLocal_50 = 0;
					}
				}
			}
			break;
		case 4:
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				}
				if (func_7(1818.2367f, 2604.9265f, 44.57381f, Var0, 1125515264))
				{
					func_6();
					iLocal_50 = 0;
				}
			}
			break;
	}
}

void func_6()//Position - 0x94E
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_66))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_66);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_68))
	{
		PED::DELETE_PED(&iLocal_68);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_67))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_67);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_69))
	{
		PED::DELETE_PED(&iLocal_69);
	}
}

int func_7(struct<3> Param0, struct<3> Param1, float fParam2)//Position - 0x992
{
	if (SYSTEM::VDIST2(Param0, Param1) < (fParam2 * fParam2))
	{
		if (((ENTITY::DOES_ENTITY_EXIST(iLocal_66) && ENTITY::DOES_ENTITY_EXIST(iLocal_68)) && ENTITY::DOES_ENTITY_EXIST(iLocal_67)) && ENTITY::DOES_ENTITY_EXIST(iLocal_69))
		{
			if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_66) || !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_66))
			{
				if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_68) || !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_68))
				{
					if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_67) || !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_67))
					{
						if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_69) || !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_69))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	else if (SYSTEM::VDIST2(Param0, Param1) > 62500f)
	{
		return 1;
	}
	return 0;
}

int func_16(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0x18A6
{
	int iVar0;
	bool bVar1;
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::IS_ENTITY_DEAD(iVar0, false) && !ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (!__LIB_0__::func_703(*uParam2, 1))
		{
			if (__LIB_14__::func_574(iParam0, uParam2))
			{
				*uParam3 = 1;
				return 1;
			}
		}
		if (!__LIB_0__::func_703(*uParam2, 2))
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				*uParam3 = 2;
				return 1;
			}
		}
		if (!__LIB_0__::func_703(*uParam2, 4))
		{
			if (__LIB_14__::func_585(iVar0, iParam0, uParam2, bParam5))
			{
				*uParam3 = 4;
				return 1;
			}
		}
		if (!__LIB_0__::func_703(*uParam2, 8))
		{
			if (__LIB_14__::func_537(iVar0, iParam0, uParam2))
			{
				*uParam3 = 8;
				return 1;
			}
		}
		bVar1 = !__LIB_0__::func_703(*uParam2, 128);
		if (bParam4)
		{
			if (__LIB_39__::func_320(iParam0, iParam1, 1, bParam6, bVar1, 1))
			{
				*uParam3 = 32;
				return 1;
			}
		}
		else if (!__LIB_0__::func_703(*uParam2, 16))
		{
			if (__LIB_39__::func_320(iParam0, iParam1, 0, bParam6, bVar1, bParam8))
			{
				*uParam3 = 16;
				return 1;
			}
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (iParam7 && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, true))
		{
			*uParam3 = 16;
			return 1;
		}
	}
	return 0;
}

void func_26(int iParam0)//Position - 0x1F8C
{
	WEAPON::GIVE_WEAPON_TO_PED(*iParam0, joaat("WEAPON_ASSAULTSHOTGUN"), -1, false, true);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 13, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 0, true);
	PED::SET_PED_TARGET_LOSS_RESPONSE(*iParam0, 1);
	PED::SET_PED_COMBAT_MOVEMENT(*iParam0, 1);
	TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(*iParam0, 0f);
	PED::SET_PED_KEEP_TASK(*iParam0, true);
	PED::SET_PED_ACCURACY(*iParam0, 100);
	PED::SET_PED_COMBAT_RANGE(*iParam0, 2);
	PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 23, false);
	PED::SET_PED_SEEING_RANGE(*iParam0, 1000f);
	PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 1, true);
}

void func_27()//Position - 0x200E
{
	struct<3> Var0;
	struct<3> Var1;
	if (bLocal_294)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_289, false))
		{
			if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_289))
			{
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_289, 101, "PrisonHeli", true);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_290, false))
			{
				Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_290, 0f, 4f, -2f) };
				TASK::TASK_VEHICLE_AIM_AT_COORD(iLocal_290, Var0);
			}
			if (bLocal_292)
			{
				if (!__LIB_40__::func_481())
				{
					bLocal_292 = false;
					VEHICLE::SET_VEHICLE_SEARCHLIGHT(iLocal_289, false, false);
				}
			}
			else if (__LIB_40__::func_481())
			{
				bLocal_292 = true;
				VEHICLE::SET_VEHICLE_SEARCHLIGHT(iLocal_289, true, false);
			}
			if (bLocal_292)
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(iLocal_289, true) };
				if (SYSTEM::VDIST2(Local_248, Var1) < 90000f)
				{
					if (!iLocal_293)
					{
						iLocal_293 = 1;
					}
				}
			}
		}
		else if (HUD::DOES_BLIP_EXIST(iLocal_291))
		{
			HUD::REMOVE_BLIP(&iLocal_291);
		}
	}
}

void func_29()//Position - 0x2104
{
	int iVar0;
	struct<3> Var1;
	if (!Local_307.f_18[0])
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		if (!bLocal_58)
		{
			if (SYSTEM::VDIST2(Var1, Local_305) < 5625f)
			{
				iLocal_306 = 1;
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!PED::IS_PED_INJURED(Local_307.f_27[iVar0]))
		{
			if (!Local_307.f_18[iVar0])
			{
				if (func_16(Local_307.f_27[iVar0], 0, &Local_70, &uLocal_71, 1, 1, 0, 1, 1) || iLocal_306)
				{
					TASK::TASK_COMBAT_PED(Local_307.f_27[iVar0], PLAYER::PLAYER_PED_ID(), 0, 16);
					Local_307.f_18[iVar0] = 1;
				}
			}
			if (!Local_307.f_18[iVar0])
			{
				if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_307.f_27[iVar0]))
				{
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_307.f_27[iVar0], Local_307.f_14[iVar0], 0, 0, -1);
				}
			}
		}
		else if (HUD::DOES_BLIP_EXIST(Local_307.f_36[iVar0]))
		{
			HUD::REMOVE_BLIP(&(Local_307.f_36[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_307.f_31[iVar0]))
		{
			if (PED::IS_PED_INJURED(Local_307.f_31[iVar0]))
			{
				if (HUD::DOES_BLIP_EXIST(Local_307.f_40[iVar0]))
				{
					HUD::REMOVE_BLIP(&(Local_307.f_40[iVar0]));
				}
			}
		}
		iVar0++;
	}
	if (!Local_307.f_22[0])
	{
		if (!PED::IS_PED_INJURED(Local_307.f_31[0]))
		{
			if ((func_16(Local_307.f_31[0], 0, &Local_70, &uLocal_71, 1, 1, 0, 1, 1) || Local_307.f_18[1] == 1) || iLocal_306)
			{
				TASK::CLEAR_PED_TASKS(Local_307.f_31[0]);
				TASK::TASK_COMBAT_PED(Local_307.f_31[0], PLAYER::PLAYER_PED_ID(), 0, 16);
				Local_307.f_22[0] = 1;
			}
		}
	}
	if (!Local_307.f_22[1])
	{
		if (!PED::IS_PED_INJURED(Local_307.f_31[1]))
		{
			if ((func_16(Local_307.f_31[1], 0, &Local_70, &uLocal_71, 0, 1, 0, 1, 1) || Local_307.f_18[1] == 1) || iLocal_306)
			{
				TASK::CLEAR_PED_TASKS(Local_307.f_31[1]);
				TASK::TASK_COMBAT_PED(Local_307.f_31[1], PLAYER::PLAYER_PED_ID(), 0, 16);
				Local_307.f_22[1] = 1;
			}
		}
	}
	if (!Local_307.f_22[2])
	{
		if (!PED::IS_PED_INJURED(Local_307.f_31[2]))
		{
			if ((func_16(Local_307.f_31[2], 0, &Local_70, &uLocal_71, 0, 1, 0, 1, 1) || Local_307.f_18[2] == 1) || iLocal_306)
			{
				TASK::CLEAR_PED_TASKS(Local_307.f_31[2]);
				TASK::TASK_COMBAT_PED(Local_307.f_31[2], PLAYER::PLAYER_PED_ID(), 0, 16);
				Local_307.f_22[2] = 1;
			}
		}
	}
	if (!Local_307.f_22[3])
	{
		if (!PED::IS_PED_INJURED(Local_307.f_31[3]))
		{
			if ((func_16(Local_307.f_31[3], 0, &Local_70, &uLocal_71, 0, 1, 0, 1, 1) || Local_307.f_18[2] == 1) || iLocal_306)
			{
				TASK::CLEAR_PED_TASKS(Local_307.f_31[3]);
				TASK::TASK_COMBAT_PED(Local_307.f_31[3], PLAYER::PLAYER_PED_ID(), 0, 16);
				Local_307.f_22[3] = 1;
			}
		}
	}
	if (!PED::IS_PED_INJURED(Local_307.f_27[1]))
	{
		if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_307.f_27[1]))
		{
			if (!Local_307.f_22[0])
			{
				if (!PED::IS_PED_INJURED(Local_307.f_31[0]))
				{
					TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(Local_307.f_31[0], Local_307.f_27[1], -2f, 0f, 0f, 1f, -1, 0.1f, true);
				}
			}
			if (!Local_307.f_22[1])
			{
				if (!PED::IS_PED_INJURED(Local_307.f_31[1]))
				{
					TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(Local_307.f_31[1], Local_307.f_27[1], -1f, 0f, 0f, 1f, -1, 0.1f, true);
				}
			}
		}
	}
	if (!PED::IS_PED_INJURED(Local_307.f_27[2]))
	{
		if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_307.f_27[2]))
		{
			if (!Local_307.f_22[2])
			{
				if (!PED::IS_PED_INJURED(Local_307.f_31[2]))
				{
					TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(Local_307.f_31[2], Local_307.f_27[2], 1f, 0f, 0f, 1f, -1, 0.1f, true);
				}
			}
			if (!Local_307.f_22[3])
			{
				if (!PED::IS_PED_INJURED(Local_307.f_31[3]))
				{
					TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(Local_307.f_31[3], Local_307.f_27[2], -1f, 0f, 0f, 1f, -1, 0.1f, true);
				}
			}
		}
	}
}

void func_30()//Position - 0x256E
{
	int iVar0;
	struct<3> Var1;
	iLocal_269++;
	if (iLocal_269 >= 30)
	{
		if (!bLocal_58)
		{
			if (__LIB_0__::func_875(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 4, 100, 0))
			{
				iVar0 = 0;
				while (iVar0 < 10)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_252.f_64[iVar0]) && !PED::IS_PED_INJURED(Local_252.f_64[iVar0]))
					{
						if (PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) != -1)
						{
							if (PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 1 || PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
							{
								PED::SET_PED_ACCURACY(Local_252.f_64[iVar0], 10);
								iLocal_268 = 1;
							}
						}
						else if (PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()))
						{
							PED::SET_PED_ACCURACY(Local_252.f_64[iVar0], 10);
							iLocal_268 = 1;
						}
						else
						{
							PED::SET_PED_ACCURACY(Local_252.f_64[iVar0], 100);
							iLocal_268 = 1;
						}
					}
					iVar0++;
				}
			}
			else
			{
				iLocal_268 = 0;
			}
		}
		iLocal_269 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_252.f_64[iVar0]) && !PED::IS_PED_INJURED(Local_252.f_64[iVar0]))
		{
			if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::GET_PLAYER_INDEX(), 0))
			{
				PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::PLAYER_ID());
			}
			if ((((func_16(Local_252.f_64[iVar0], 0, &Local_70, &uLocal_71, 0, 1, 0, 1, 1) || MISC::IS_BULLET_IN_AREA(Local_252[iVar0 /*3*/], 20f, true)) || MISC::IS_SNIPER_BULLET_IN_AREA(Local_252[iVar0 /*3*/] - Vector(20f, 20f, 20f), Local_252[iVar0 /*3*/] + Vector(20f, 20f, 20f))) || iLocal_268) || func_32(&(Local_252.f_64[iVar0])))
			{
				if (!__LIB_0__::isGlobal_43052EqualsValue(5))
				{
					if (PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()))
					{
						if (bLocal_61)
						{
							func_31(iVar0);
						}
					}
					else
					{
						func_31(iVar0);
					}
				}
			}
			else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
			{
				if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_252.f_64[iVar0]))
				{
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_252.f_64[iVar0], Local_252.f_42[iVar0], 0, 0, -1);
					Local_252.f_53[iVar0] = 0;
				}
			}
		}
		else if (HUD::DOES_BLIP_EXIST(Local_252.f_75[iVar0]))
		{
			HUD::REMOVE_BLIP(&(Local_252.f_75[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (((ENTITY::DOES_ENTITY_EXIST(iLocal_264[iVar0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_264[iVar0], false)) && ENTITY::DOES_ENTITY_EXIST(iLocal_263[iVar0])) && !ENTITY::IS_ENTITY_DEAD(iLocal_263[iVar0], false))
		{
			Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_264[iVar0], 0f, 3.5f, -2f) };
			TASK::TASK_VEHICLE_AIM_AT_COORD(iLocal_264[iVar0], Var1);
			VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_263[iVar0], false, false, false);
			if (iLocal_265[iVar0])
			{
				if (!__LIB_40__::func_481())
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_263[iVar0], false))
					{
						iLocal_265[iVar0] = 0;
						VEHICLE::SET_VEHICLE_SEARCHLIGHT(iLocal_263[iVar0], false, false);
					}
				}
			}
			else if (__LIB_40__::func_481())
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_263[iVar0], false))
				{
					iLocal_265[iVar0] = 1;
					VEHICLE::SET_VEHICLE_SEARCHLIGHT(iLocal_263[iVar0], true, false);
				}
			}
		}
		iVar0++;
	}
	if (fLocal_266 > 20f)
	{
		bLocal_267 = false;
	}
	else if (fLocal_266 < -20f)
	{
		bLocal_267 = true;
	}
	if (bLocal_267)
	{
		fLocal_266 = (fLocal_266 + 0.25f);
	}
	else
	{
		fLocal_266 = (fLocal_266 - 0.25f);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_263[0]))
	{
		ENTITY::SET_ENTITY_HEADING(iLocal_263[0], (53f + fLocal_266));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_263[1]))
	{
		ENTITY::SET_ENTITY_HEADING(iLocal_263[1], (13f + fLocal_266));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_263[2]))
	{
		ENTITY::SET_ENTITY_HEADING(iLocal_263[2], (250f + fLocal_266));
	}
}

void func_31(int iParam0)//Position - 0x2949
{
	if (!Local_252.f_53[iParam0])
	{
		TASK::TASK_SHOOT_AT_ENTITY(Local_252.f_64[iParam0], PLAYER::PLAYER_PED_ID(), -1, 0);
		PED::SET_PED_SEEING_RANGE(Local_252.f_64[iParam0], 1000f);
		PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(Local_252.f_64[iParam0]);
		Local_252.f_53[iParam0] = 1;
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
		{
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 3, false);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
		}
	}
}

int func_32(var uParam0)//Position - 0x29B9
{
	struct<3> Var0;
	struct<3> Var1;
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0, false))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true) };
	}
	if (SYSTEM::VDIST2(Var0, Var1) < 100f)
	{
		return 1;
	}
	return 0;
}

void func_33()//Position - 0x2A0D
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) >= 2 || __LIB_0__::func_875(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 4, 150, 0))
		{
			if (AUDIO::PREPARE_ALARM("PRISON_ALARMS"))
			{
				AUDIO::START_ALARM("PRISON_ALARMS", false);
			}
		}
		else
		{
			AUDIO::STOP_ALARM("PRISON_ALARMS", false);
		}
	}
}

void func_34()//Position - 0x2A63
{
	struct<3> Var0;
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1840.2296f, 2471.4897f, 41.941128f, 1840.5532f, 2751.9827f, 54.68177f, 84.25f, false, true, 0))
		{
			__LIB_2__::func_712(&Local_70, 2);
		}
		else
		{
			__LIB_1__::func_330(&Local_70, 2);
		}
	}
	if (iLocal_49 > 20)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			if (PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				if (__LIB_0__::func_875(Var0, 4, 150, 0))
				{
					__LIB_15__::func_955(4, 1);
					if (!__LIB_1__::func_13(&iLocal_78))
					{
						__LIB_1__::func_362(&iLocal_78);
					}
					if (!bLocal_60)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_68) && !ENTITY::IS_ENTITY_DEAD(iLocal_68, false))
						{
							__LIB_0__::func_222(&uLocal_81, 8, iLocal_68, "TANNOY", 0, 1);
							if (__LIB_0__::func_787(&uLocal_81, "FH1AUD", "FH1_TANNOY", 8, 0, 0, 0))
							{
								bLocal_58 = true;
								bLocal_60 = true;
							}
						}
					}
				}
				else
				{
					__LIB_15__::func_955(4, 0);
					if (__LIB_1__::func_13(&iLocal_78))
					{
						__LIB_1__::func_31(&iLocal_78);
					}
					bLocal_58 = false;
				}
			}
			else
			{
				__LIB_15__::func_955(4, 0);
				if (__LIB_1__::func_13(&iLocal_78))
				{
					__LIB_1__::func_31(&iLocal_78);
				}
				bLocal_58 = false;
			}
			if (bLocal_58)
			{
				if (__LIB_1__::func_13(&iLocal_78))
				{
					if (__LIB_2__::func_572(&iLocal_78) > 10f)
					{
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 4)
						{
							PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 4, false);
							PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
							bLocal_61 = true;
							bLocal_58 = false;
							__LIB_15__::func_955(4, 0);
						}
					}
				}
			}
			if (!bLocal_55)
			{
				if (bLocal_60)
				{
					if (!__LIB_0__::func_75())
					{
						if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
						{
							AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", false, true);
							AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_ALARM", true, true);
							bLocal_55 = true;
						}
					}
				}
				else if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", false, true);
					AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_ALARM", true, true);
					bLocal_55 = true;
				}
			}
			if (!bLocal_58)
			{
				if (__LIB_0__::func_875(Var0, 4, 100, 0))
				{
					if (!bLocal_55)
					{
						if (bLocal_60)
						{
							if (!__LIB_0__::func_75())
							{
								AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", false, true);
								AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_ALARM", true, true);
								bLocal_55 = true;
							}
						}
						else
						{
							AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", false, true);
							AUDIO::SET_AMBIENT_ZONE_STATE("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_ALARM", true, true);
							bLocal_55 = true;
						}
					}
					func_35();
				}
			}
			iLocal_49 = 0;
		}
	}
	iLocal_49++;
}

void func_35()//Position - 0x2C84
{
	int iVar0;
	if (!iLocal_54)
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			iLocal_52[iVar0] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(Local_53[iVar0 /*3*/], 10f, 10f, 10f, 0f, false, 7);
			iVar0++;
		}
		iLocal_54 = 1;
	}
}

void func_65()//Position - 0x36D4
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_M_Security_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_M_PrisGuard_01"));
}

void func_66()//Position - 0x36EE
{
	func_68();
	func_67();
}

void func_67()//Position - 0x36FE
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_307.f_27[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Local_307.f_27[iVar0], false))
		{
			WEAPON::GIVE_WEAPON_TO_PED(Local_307.f_27[iVar0], joaat("WEAPON_ASSAULTRIFLE"), -1, true, true);
			ENTITY::SET_ENTITY_LOD_DIST(Local_307.f_27[iVar0], 1000);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_307.f_27[iVar0], joaat("SECURITY_GUARD"));
			PED::SET_PED_IS_AVOIDED_BY_OTHERS(Local_307.f_27[iVar0], false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_307.f_27[iVar0], true);
			if (!PED::IS_PED_INJURED(Local_307.f_27[iVar0]))
			{
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_307.f_27[iVar0], Local_307.f_14[iVar0], 0, 0, -1);
			}
		}
		iVar0++;
	}
}

void func_68()//Position - 0x37B9
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_307.f_27[iVar0]))
		{
			Local_307.f_27[iVar0] = PED::CREATE_PED(6, joaat("S_M_M_PrisGuard_01"), Local_307[iVar0 /*3*/], Local_307.f_10[iVar0], true, true);
			SYSTEM::WAIT(0);
		}
		iVar0++;
	}
	Var1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Local_307[1 /*3*/], Local_307.f_10[1], -2f, 0f, 0f) };
	Var2 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Local_307[1 /*3*/], Local_307.f_10[1], -1f, 0f, 0f) };
	Var3 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Local_307[2 /*3*/], Local_307.f_10[2], 1f, 0f, 0f) };
	Var4 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Local_307[2 /*3*/], Local_307.f_10[2], -1f, 0f, 0f) };
	Local_307.f_31[0] = PED::CREATE_PED(6, joaat("S_M_M_PrisGuard_01"), Var1, Local_307.f_10[1], true, true);
	Local_307.f_31[1] = PED::CREATE_PED(6, joaat("S_M_M_PrisGuard_01"), Var2, Local_307.f_10[1], true, true);
	Local_307.f_31[2] = PED::CREATE_PED(6, joaat("S_M_M_PrisGuard_01"), Var3, Local_307.f_10[2], true, true);
	Local_307.f_31[3] = PED::CREATE_PED(6, joaat("S_M_M_PrisGuard_01"), Var4, Local_307.f_10[2], true, true);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_307.f_31[iVar0]))
		{
			WEAPON::GIVE_WEAPON_TO_PED(Local_307.f_31[iVar0], joaat("WEAPON_ASSAULTRIFLE"), -1, true, true);
			ENTITY::SET_ENTITY_LOD_DIST(Local_307.f_31[iVar0], 500);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_307.f_31[iVar0], joaat("SECURITY_GUARD"));
			PED::SET_PED_STEERS_AROUND_PEDS(Local_307.f_31[iVar0], false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_307.f_31[iVar0], true);
		}
		iVar0++;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_M_PrisGuard_01"));
}

void func_69()//Position - 0x397E
{
	if (bLocal_294)
	{
		iLocal_289 = VEHICLE::CREATE_VEHICLE(joaat("polmav"), 10f, 10f, -30f, 0f, true, true, false);
		VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_289, true, true, false);
		VEHICLE::SET_HELI_BLADES_FULL_SPEED(iLocal_289);
		ENTITY::SET_ENTITY_VELOCITY(iLocal_289, 0f, 0f, 10f);
		ENTITY::SET_ENTITY_LOD_DIST(iLocal_289, 500);
		if (__LIB_40__::func_481())
		{
			bLocal_292 = true;
			VEHICLE::SET_VEHICLE_SEARCHLIGHT(iLocal_289, true, false);
		}
		iLocal_290 = PED::CREATE_PED(6, joaat("S_M_M_PrisGuard_01"), 10f, 10f, -20f, 0f, true, true);
		PED::SET_PED_INTO_VEHICLE(iLocal_290, iLocal_289, -1);
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_289, false))
		{
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_289, 101, "PrisonHeli", true);
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("polmav"));
	}
}

void func_70()//Position - 0x3A36
{
	func_75();
	func_74();
	func_73();
	func_72();
	func_71();
}

void func_71()//Position - 0x3A52
{
	Local_270[0 /*13*/][0 /*3*/] = { 1827.6901f, 2474.1807f, 61.7202f };
	Local_270[0 /*13*/][1 /*3*/] = { 1826.0537f, 2478.9336f, 61.7157f };
	Local_270[0 /*13*/][2 /*3*/] = { 1820.9086f, 2477.5276f, 61.7153f };
	Local_270[0 /*13*/][3 /*3*/] = { 1822.5847f, 2472.1223f, 61.7167f };
	TASK::OPEN_PATROL_ROUTE("miss_Tower_01");
	TASK::ADD_PATROL_ROUTE_NODE(0, "WORLD_HUMAN_GUARD_STAND", Local_270[0 /*13*/][0 /*3*/], 1879.9438f, 2461.988f, 53.5496f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(1, "WORLD_HUMAN_GUARD_STAND", Local_270[0 /*13*/][1 /*3*/], 1831.6309f, 2522.218f, 54.1376f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(2, "WORLD_HUMAN_GUARD_STAND", Local_270[0 /*13*/][2 /*3*/], 1789.0701f, 2490.558f, 54.1381f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(3, "WORLD_HUMAN_GUARD_STAND", Local_270[0 /*13*/][3 /*3*/], 1789.8002f, 2426.876f, 44.7729f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_LINK(0, 1);
	TASK::ADD_PATROL_ROUTE_LINK(1, 2);
	TASK::ADD_PATROL_ROUTE_LINK(2, 3);
	TASK::ADD_PATROL_ROUTE_LINK(3, 0);
	TASK::CLOSE_PATROL_ROUTE();
	TASK::CREATE_PATROL_ROUTE();
	Local_270[1 /*13*/][0 /*3*/] = { 1764.7294f, 2409.1394f, 61.7533f };
	Local_270[1 /*13*/][1 /*3*/] = { 1763.1285f, 2413.9756f, 61.7328f };
	Local_270[1 /*13*/][2 /*3*/] = { 1758.0787f, 2411.984f, 61.7403f };
	Local_270[1 /*13*/][3 /*3*/] = { 1760.2131f, 2406.8271f, 61.7419f };
	TASK::OPEN_PATROL_ROUTE("miss_Tower_02");
	TASK::ADD_PATROL_ROUTE_NODE(0, "WORLD_HUMAN_GUARD_STAND", Local_270[1 /*13*/][0 /*3*/], 1879.9438f, 2461.988f, 53.5496f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(1, "WORLD_HUMAN_GUARD_STAND", Local_270[1 /*13*/][1 /*3*/], 1831.6309f, 2522.218f, 54.1376f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(2, "WORLD_HUMAN_GUARD_STAND", Local_270[1 /*13*/][2 /*3*/], 1789.0701f, 2490.558f, 54.1381f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(3, "WORLD_HUMAN_GUARD_STAND", Local_270[1 /*13*/][3 /*3*/], 1789.8002f, 2426.876f, 44.7729f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_LINK(0, 1);
	TASK::ADD_PATROL_ROUTE_LINK(1, 2);
	TASK::ADD_PATROL_ROUTE_LINK(2, 3);
	TASK::ADD_PATROL_ROUTE_LINK(3, 0);
	TASK::CLOSE_PATROL_ROUTE();
	TASK::CREATE_PATROL_ROUTE();
	Local_270[2 /*13*/][0 /*3*/] = { 1658.8293f, 2390.8882f, 61.7462f };
	Local_270[2 /*13*/][1 /*3*/] = { 1662.5215f, 2394.6921f, 61.7532f };
	Local_270[2 /*13*/][2 /*3*/] = { 1658.8541f, 2398.0615f, 61.7573f };
	Local_270[2 /*13*/][3 /*3*/] = { 1655.15f, 2394.7048f, 61.7429f };
	TASK::OPEN_PATROL_ROUTE("miss_Tower_03");
	TASK::ADD_PATROL_ROUTE_NODE(0, "WORLD_HUMAN_GUARD_STAND", Local_270[2 /*13*/][0 /*3*/], 1655.9081f, 2349.0215f, 55.1775f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(1, "WORLD_HUMAN_GUARD_STAND", Local_270[2 /*13*/][1 /*3*/], 1733.8748f, 2385.5215f, 44.9049f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(2, "WORLD_HUMAN_GUARD_STAND", Local_270[2 /*13*/][2 /*3*/], 1662.2343f, 2446.3574f, 44.5652f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(3, "WORLD_HUMAN_GUARD_STAND", Local_270[2 /*13*/][3 /*3*/], 1524.631f, 2426.997f, 44.6212f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_LINK(0, 1);
	TASK::ADD_PATROL_ROUTE_LINK(1, 2);
	TASK::ADD_PATROL_ROUTE_LINK(2, 3);
	TASK::ADD_PATROL_ROUTE_LINK(3, 0);
	TASK::CLOSE_PATROL_ROUTE();
	TASK::CREATE_PATROL_ROUTE();
	Local_270[3 /*13*/][0 /*3*/] = { 1537.28f, 2468.3381f, 61.7497f };
	Local_270[3 /*13*/][1 /*3*/] = { 1542.1888f, 2465.7556f, 61.7247f };
	Local_270[3 /*13*/][2 /*3*/] = { 1543.8986f, 2470.9707f, 61.7482f };
	Local_270[3 /*13*/][3 /*3*/] = { 1539.1404f, 2473.2637f, 61.7359f };
	TASK::OPEN_PATROL_ROUTE("miss_Tower_04");
	TASK::ADD_PATROL_ROUTE_NODE(0, "WORLD_HUMAN_GUARD_STAND", Local_270[3 /*13*/][0 /*3*/], 1455.0807f, 2432.6418f, 51.3366f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(1, "WORLD_HUMAN_GUARD_STAND", Local_270[3 /*13*/][1 /*3*/], 1576.1744f, 2407.0762f, 44.8143f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(2, "WORLD_HUMAN_GUARD_STAND", Local_270[3 /*13*/][2 /*3*/], 1578.1f, 2486.2266f, 44.5655f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(3, "WORLD_HUMAN_GUARD_STAND", Local_270[3 /*13*/][3 /*3*/], 1512.8368f, 2560.4192f, 44.8417f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_LINK(0, 1);
	TASK::ADD_PATROL_ROUTE_LINK(1, 2);
	TASK::ADD_PATROL_ROUTE_LINK(2, 3);
	TASK::ADD_PATROL_ROUTE_LINK(3, 0);
	TASK::CLOSE_PATROL_ROUTE();
	TASK::CREATE_PATROL_ROUTE();
	Local_270[4 /*13*/][0 /*3*/] = { 1535.0978f, 2581.9187f, 61.7312f };
	Local_270[4 /*13*/][1 /*3*/] = { 1535.1241f, 2581.1006f, 61.7002f };
	Local_270[4 /*13*/][2 /*3*/] = { 1538.325f, 2585.7224f, 61.7251f };
	Local_270[4 /*13*/][3 /*3*/] = { 1534.6793f, 2589.2678f, 61.7123f };
	TASK::OPEN_PATROL_ROUTE("miss_Tower_05");
	TASK::ADD_PATROL_ROUTE_NODE(0, "WORLD_HUMAN_GUARD_STAND", Local_270[4 /*13*/][0 /*3*/], 1484.1997f, 2584.4094f, 51.9283f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(1, "WORLD_HUMAN_GUARD_STAND", Local_270[4 /*13*/][1 /*3*/], 1535.1536f, 2538.9255f, 44.496f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(2, "WORLD_HUMAN_GUARD_STAND", Local_270[4 /*13*/][2 /*3*/], 1570.6615f, 2587.8142f, 44.5655f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(3, "WORLD_HUMAN_GUARD_STAND", Local_270[4 /*13*/][3 /*3*/], 1538.2266f, 2655.5305f, 44.9156f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_LINK(0, 1);
	TASK::ADD_PATROL_ROUTE_LINK(1, 2);
	TASK::ADD_PATROL_ROUTE_LINK(2, 3);
	TASK::ADD_PATROL_ROUTE_LINK(3, 0);
	TASK::CLOSE_PATROL_ROUTE();
	TASK::CREATE_PATROL_ROUTE();
	Local_270[5 /*13*/][0 /*3*/] = { 1566.9205f, 2682.5247f, 61.7716f };
	Local_270[5 /*13*/][1 /*3*/] = { 1567.9268f, 2677.4634f, 61.7741f };
	Local_270[5 /*13*/][2 /*3*/] = { 1572.5742f, 2678.1926f, 61.7702f };
	Local_270[5 /*13*/][3 /*3*/] = { 1572.3588f, 2683.086f, 61.7664f };
	TASK::OPEN_PATROL_ROUTE("miss_Tower_06");
	TASK::ADD_PATROL_ROUTE_NODE(0, "WORLD_HUMAN_GUARD_STAND", Local_270[5 /*13*/][0 /*3*/], 1505.5382f, 2727.2422f, 37.6965f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(1, "WORLD_HUMAN_GUARD_STAND", Local_270[5 /*13*/][1 /*3*/], 1545.9504f, 2632.5242f, 44.7178f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(2, "WORLD_HUMAN_GUARD_STAND", Local_270[5 /*13*/][2 /*3*/], 1599.3546f, 2658.3188f, 44.5652f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(3, "WORLD_HUMAN_GUARD_STAND", Local_270[5 /*13*/][3 /*3*/], 1599.0406f, 2713.3926f, 44.4309f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_LINK(0, 1);
	TASK::ADD_PATROL_ROUTE_LINK(1, 2);
	TASK::ADD_PATROL_ROUTE_LINK(2, 3);
	TASK::ADD_PATROL_ROUTE_LINK(3, 0);
	TASK::CLOSE_PATROL_ROUTE();
	TASK::CREATE_PATROL_ROUTE();
	Local_270[6 /*13*/][0 /*3*/] = { 1648.1042f, 2761.528f, 61.9103f };
	Local_270[6 /*13*/][1 /*3*/] = { 1646.0511f, 2756.6714f, 61.9091f };
	Local_270[6 /*13*/][2 /*3*/] = { 1651.5334f, 2754.6677f, 61.9021f };
	Local_270[6 /*13*/][3 /*3*/] = { 1653.1254f, 2759.3274f, 61.9056f };
	TASK::OPEN_PATROL_ROUTE("miss_Tower_07");
	TASK::ADD_PATROL_ROUTE_NODE(0, "WORLD_HUMAN_GUARD_STAND", Local_270[6 /*13*/][0 /*3*/], 1606.661f, 2815.6726f, 37.9512f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(1, "WORLD_HUMAN_GUARD_STAND", Local_270[6 /*13*/][1 /*3*/], 1602.8872f, 2721.3984f, 44.651f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(2, "WORLD_HUMAN_GUARD_STAND", Local_270[6 /*13*/][2 /*3*/], 1599.3546f, 2658.3188f, 44.5652f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(3, "WORLD_HUMAN_GUARD_STAND", Local_270[6 /*13*/][3 /*3*/], 1719.2246f, 2766.1113f, 44.6846f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_LINK(0, 1);
	TASK::ADD_PATROL_ROUTE_LINK(1, 2);
	TASK::ADD_PATROL_ROUTE_LINK(2, 3);
	TASK::ADD_PATROL_ROUTE_LINK(3, 0);
	TASK::CLOSE_PATROL_ROUTE();
	TASK::CREATE_PATROL_ROUTE();
	Local_270[7 /*13*/][0 /*3*/] = { 1774.523f, 2766.5588f, 61.9143f };
	Local_270[7 /*13*/][1 /*3*/] = { 1769.7677f, 2763.8162f, 61.9248f };
	Local_270[7 /*13*/][2 /*3*/] = { 1772.4415f, 2759.1394f, 61.9193f };
	Local_270[7 /*13*/][3 /*3*/] = { 1776.8927f, 2762.3562f, 61.9258f };
	TASK::OPEN_PATROL_ROUTE("miss_Tower_08");
	TASK::ADD_PATROL_ROUTE_NODE(0, "WORLD_HUMAN_GUARD_STAND", Local_270[7 /*13*/][0 /*3*/], 1783.2037f, 2811.3752f, 44.4414f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(1, "WORLD_HUMAN_GUARD_STAND", Local_270[7 /*13*/][1 /*3*/], 1709.2751f, 2764.4321f, 44.5747f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(2, "WORLD_HUMAN_GUARD_STAND", Local_270[7 /*13*/][2 /*3*/], 1599.3546f, 2658.3188f, 44.5652f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(3, "WORLD_HUMAN_GUARD_STAND", Local_270[7 /*13*/][3 /*3*/], 1822.456f, 2749.1892f, 44.9326f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_LINK(0, 1);
	TASK::ADD_PATROL_ROUTE_LINK(1, 2);
	TASK::ADD_PATROL_ROUTE_LINK(2, 3);
	TASK::ADD_PATROL_ROUTE_LINK(3, 0);
	TASK::CLOSE_PATROL_ROUTE();
	TASK::CREATE_PATROL_ROUTE();
	Local_270[9 /*13*/][0 /*3*/] = { 1824.2876f, 2625.0415f, 61.9749f };
	Local_270[9 /*13*/][1 /*3*/] = { 1820.5237f, 2621.4897f, 61.9951f };
	Local_270[9 /*13*/][2 /*3*/] = { 1820.4141f, 2621.5444f, 61.9908f };
	Local_270[9 /*13*/][3 /*3*/] = { 1823.4504f, 2617.4773f, 61.9829f };
	TASK::OPEN_PATROL_ROUTE("miss_Tower_10");
	TASK::ADD_PATROL_ROUTE_NODE(0, "WORLD_HUMAN_GUARD_STAND", Local_270[9 /*13*/][0 /*3*/], 1606.661f, 2815.6726f, 37.9512f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(1, "WORLD_HUMAN_GUARD_STAND", Local_270[9 /*13*/][1 /*3*/], 1602.8872f, 2721.3984f, 44.651f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(2, "WORLD_HUMAN_GUARD_STAND", Local_270[9 /*13*/][2 /*3*/], 1599.3546f, 2658.3188f, 44.5652f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_NODE(3, "WORLD_HUMAN_GUARD_STAND", Local_270[9 /*13*/][3 /*3*/], 1719.2246f, 2766.1113f, 44.6846f, MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
	TASK::ADD_PATROL_ROUTE_LINK(0, 1);
	TASK::ADD_PATROL_ROUTE_LINK(1, 2);
	TASK::ADD_PATROL_ROUTE_LINK(2, 3);
	TASK::ADD_PATROL_ROUTE_LINK(3, 0);
	TASK::CLOSE_PATROL_ROUTE();
	TASK::CREATE_PATROL_ROUTE();
}

void func_72()//Position - 0x45A0
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_252.f_64[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Local_252.f_64[iVar0], false))
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_252.f_64[iVar0], joaat("SECURITY_GUARD"));
			PED::SET_PED_CONFIG_FLAG(Local_252.f_64[iVar0], 132, true);
			PED::SET_PED_TO_INFORM_RESPECTED_FRIENDS(Local_252.f_64[iVar0], 300f, 10);
			PED::SET_PED_SEEING_RANGE(Local_252.f_64[iVar0], 1000f);
			PED::SET_PED_ID_RANGE(Local_252.f_64[iVar0], 1000f);
			PED::SET_PED_HEARING_RANGE(Local_252.f_64[iVar0], 1000f);
			PED::SET_PED_COMBAT_ABILITY(Local_252.f_64[iVar0], 2);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_252.f_64[iVar0], 13, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_252.f_64[iVar0], 0, false);
			PED::SET_PED_TARGET_LOSS_RESPONSE(Local_252.f_64[iVar0], 1);
			PED::SET_PED_COMBAT_MOVEMENT(Local_252.f_64[iVar0], 1);
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Local_252.f_64[iVar0], 0f);
			PED::SET_PED_KEEP_TASK(Local_252.f_64[iVar0], true);
			PED::SET_PED_ACCURACY(Local_252.f_64[iVar0], 20);
			PED::SET_PED_COMBAT_RANGE(Local_252.f_64[iVar0], 2);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_252.f_64[iVar0], 23, false);
			WEAPON::GIVE_WEAPON_TO_PED(Local_252.f_64[iVar0], joaat("WEAPON_SNIPERRIFLE"), -1, true, true);
			ENTITY::SET_ENTITY_LOD_DIST(Local_252.f_64[iVar0], 1000);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_252.f_64[iVar0], true);
			PED::SET_PED_SEEING_RANGE(Local_252.f_64[iVar0], 1000f);
			if (!PED::IS_PED_INJURED(Local_252.f_64[iVar0]))
			{
				if (iVar0 == 0)
				{
					TASK::TASK_PATROL(Local_252.f_64[iVar0], "miss_Tower_01", 1, false, true);
				}
				else if (iVar0 == 1)
				{
					TASK::TASK_PATROL(Local_252.f_64[iVar0], "miss_Tower_02", 1, false, true);
				}
				else if (iVar0 == 2)
				{
					TASK::TASK_PATROL(Local_252.f_64[iVar0], "miss_Tower_03", 1, false, true);
				}
				else if (iVar0 == 3)
				{
					TASK::TASK_PATROL(Local_252.f_64[iVar0], "miss_Tower_04", 1, false, true);
				}
				else if (iVar0 == 4)
				{
					TASK::TASK_PATROL(Local_252.f_64[iVar0], "miss_Tower_05", 1, false, true);
				}
				else if (iVar0 == 5)
				{
					TASK::TASK_PATROL(Local_252.f_64[iVar0], "miss_Tower_06", 1, false, true);
				}
				else if (iVar0 == 6)
				{
					TASK::TASK_PATROL(Local_252.f_64[iVar0], "miss_Tower_07", 1, false, true);
				}
				else if (iVar0 == 7)
				{
					TASK::TASK_PATROL(Local_252.f_64[iVar0], "miss_Tower_08", 1, false, true);
				}
				else if (iVar0 == 9)
				{
					TASK::TASK_PATROL(Local_252.f_64[iVar0], "miss_Tower_10", 1, false, true);
				}
				else
				{
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_252.f_64[iVar0], Local_252.f_42[iVar0], 0, 0, -1);
				}
			}
		}
		iVar0++;
	}
}

void func_73()//Position - 0x484E
{
	int iVar0;
	if (!CAM::IS_SPHERE_VISIBLE(1823.8451f, 2621.267f, 57f, 0.5f))
	{
		iLocal_263[0] = VEHICLE::CREATE_VEHICLE(joaat("polmav"), 1823.8451f, 2621.267f, 57f, 53f, true, true, false);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_263[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_263[0], false))
		{
			iLocal_264[0] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_263[0], 6, joaat("S_M_M_PrisGuard_01"), -1, true, true);
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iLocal_264[0], false);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_264[0], iLocal_250);
			ENTITY::SET_ENTITY_COLLISION(iLocal_263[0], false, false);
			ENTITY::SET_ENTITY_VISIBLE(iLocal_263[0], false, false);
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iLocal_263[0], false);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_263[0], true);
		}
		SYSTEM::WAIT(0);
	}
	if (!CAM::IS_SPHERE_VISIBLE(1761.4176f, 2410.3784f, 61f, 0.5f))
	{
		iLocal_263[1] = VEHICLE::CREATE_VEHICLE(joaat("polmav"), 1761.4176f, 2410.3784f, 61f, 13f, true, true, false);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_263[1]) && !ENTITY::IS_ENTITY_DEAD(iLocal_263[1], false))
		{
			iLocal_264[1] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_263[1], 6, joaat("S_M_M_PrisGuard_01"), -1, true, true);
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iLocal_264[1], false);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_264[1], iLocal_250);
			ENTITY::SET_ENTITY_COLLISION(iLocal_263[1], false, false);
			ENTITY::SET_ENTITY_VISIBLE(iLocal_263[1], false, false);
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iLocal_263[1], false);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_263[1], true);
		}
		SYSTEM::WAIT(0);
	}
	if (!CAM::IS_SPHERE_VISIBLE(1534.6355f, 2585.162f, 61f, 0.5f))
	{
		iLocal_263[2] = VEHICLE::CREATE_VEHICLE(joaat("polmav"), 1534.6355f, 2585.162f, 61f, 250f, true, true, false);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_263[2]) && !ENTITY::IS_ENTITY_DEAD(iLocal_263[2], false))
		{
			iLocal_264[2] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_263[2], 6, joaat("S_M_M_PrisGuard_01"), -1, true, true);
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iLocal_264[2], false);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_264[2], iLocal_250);
			ENTITY::SET_ENTITY_COLLISION(iLocal_263[2], false, false);
			ENTITY::SET_ENTITY_VISIBLE(iLocal_263[2], false, false);
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iLocal_263[2], false);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_263[2], true);
		}
		SYSTEM::WAIT(0);
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(iLocal_264[iVar0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_264[iVar0], false)) && !ENTITY::IS_ENTITY_DEAD(iLocal_263[iVar0], false))
		{
			if (__LIB_40__::func_481())
			{
				iLocal_265[iVar0] = 1;
				VEHICLE::SET_VEHICLE_SEARCHLIGHT(iLocal_263[iVar0], true, false);
			}
		}
		iVar0++;
	}
}

void func_74()//Position - 0x4B02
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_252.f_64[iVar0]))
		{
			Local_252.f_64[iVar0] = PED::CREATE_PED(6, joaat("S_M_M_PrisGuard_01"), Local_252[iVar0 /*3*/], Local_252.f_31[iVar0], true, true);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_M_PrisGuard_01"));
			SYSTEM::WAIT(0);
		}
		iVar0++;
	}
}

void func_75()//Position - 0x4B63
{
	Local_252[0 /*3*/] = { 1827.6901f, 2474.1807f, 61.7202f };
	Local_252[1 /*3*/] = { 1764.7294f, 2409.1394f, 61.7533f };
	Local_252[2 /*3*/] = { 1658.8293f, 2390.8882f, 61.7462f };
	Local_252[3 /*3*/] = { 1537.28f, 2468.3381f, 61.7497f };
	Local_252[4 /*3*/] = { 1530.493f, 2585.1724f, 61.7001f };
	Local_252[5 /*3*/] = { 1566.9205f, 2682.5247f, 61.7716f };
	Local_252[6 /*3*/] = { 1648.1042f, 2761.528f, 61.9103f };
	Local_252[7 /*3*/] = { 1774.523f, 2766.5588f, 61.9143f };
	Local_252[8 /*3*/] = { 1852.4752f, 2697.6318f, 61.9547f };
	Local_252[9 /*3*/] = { 1824.2876f, 2625.0415f, 61.9749f };
	Local_252.f_31[0] = 248.9733f;
	Local_252.f_31[1] = 45.8793f;
	Local_252.f_31[2] = 186.3656f;
	Local_252.f_31[3] = 313.5206f;
	Local_252.f_31[4] = 95.9574f;
	Local_252.f_31[5] = 289.3531f;
	Local_252.f_31[6] = 13.7511f;
	Local_252.f_31[7] = 0f;
	Local_252.f_31[8] = 208.5786f;
	Local_252.f_31[9] = 280.9389f;
}

int func_76()//Position - 0x4CD3
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		while (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(Local_307.f_14[iVar0]))
		{
			SYSTEM::WAIT(0);
		}
		iVar0++;
	}
	return 1;
}

int func_77()//Position - 0x4D07
{
	if (bLocal_298)
	{
		if (!STREAMING::HAS_MODEL_LOADED(joaat("S_M_Y_Prisoner_01")))
		{
			return 0;
		}
	}
	return 1;
}

int func_78()//Position - 0x4D27
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(Local_252.f_42[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("polmav")))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("S_M_M_PrisGuard_01")))
	{
		return 0;
	}
	return 1;
}

int func_79()//Position - 0x4D7A
{
	if (bLocal_294)
	{
		if (!STREAMING::HAS_MODEL_LOADED(joaat("polmav")))
		{
			return 0;
		}
		if (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "PrisonHeli"))
		{
			return 0;
		}
	}
	return 1;
}

int func_80()//Position - 0x4DAA
{
	if (!STREAMING::HAS_MODEL_LOADED(joaat("S_M_M_Security_01")))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("S_M_M_PrisGuard_01")))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("polmav")))
	{
		return 0;
	}
	return 1;
}

void func_81()//Position - 0x4DE6
{
	int iVar0;
	func_82();
	iVar0 = 0;
	while (iVar0 < 3)
	{
		TASK::REQUEST_WAYPOINT_RECORDING(Local_307.f_14[iVar0]);
		iVar0++;
	}
}

void func_82()//Position - 0x4E11
{
	Local_307[0 /*3*/] = { 1768.6276f, 2538.9705f, 44.4054f };
	Local_307[1 /*3*/] = { 1633.6128f, 2498.849f, 44.4117f };
	Local_307[2 /*3*/] = { 1622.6099f, 2555.6829f, 44.4051f };
	Local_307.f_10[0] = 0f;
	Local_307.f_10[1] = 0f;
	Local_307.f_10[2] = 198.4323f;
	Local_307.f_14[0] = "PatrolGuard02";
	Local_307.f_14[1] = "PatrolGuard03";
	Local_307.f_14[2] = "PatrolGuard04";
}

void func_83()//Position - 0x4EA1
{
	int iVar0;
	Local_252.f_42[0] = "TowerGuard01";
	Local_252.f_42[1] = "TowerGuard02";
	Local_252.f_42[2] = "TowerGuard03";
	Local_252.f_42[3] = "TowerGuard04";
	Local_252.f_42[4] = "TowerGuard05";
	Local_252.f_42[5] = "TowerGuard06";
	Local_252.f_42[6] = "TowerGuard07";
	Local_252.f_42[7] = "TowerGuard08";
	Local_252.f_42[8] = "TowerGuard09";
	Local_252.f_42[9] = "TowerGuard10";
	iVar0 = 0;
	while (iVar0 < 10)
	{
		TASK::REQUEST_WAYPOINT_RECORDING(Local_252.f_42[iVar0]);
		iVar0++;
	}
	STREAMING::REQUEST_MODEL(joaat("polmav"));
	STREAMING::REQUEST_MODEL(joaat("S_M_M_PrisGuard_01"));
}

void func_84()//Position - 0x4F55
{
	bLocal_294 = false;
	if (__LIB_40__::func_481())
	{
		iLocal_295 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) % 2);
		if (iLocal_295 == 0)
		{
			bLocal_294 = true;
			STREAMING::REQUEST_MODEL(joaat("polmav"));
			VEHICLE::REQUEST_VEHICLE_RECORDING(101, "PrisonHeli");
		}
		else
		{
			bLocal_294 = false;
		}
	}
}

void func_85()//Position - 0x4F99
{
	STREAMING::REQUEST_MODEL(joaat("S_M_M_Security_01"));
	STREAMING::REQUEST_MODEL(joaat("S_M_M_PrisGuard_01"));
	STREAMING::REQUEST_MODEL(joaat("polmav"));
}

void func_86()//Position - 0x4FBC
{
	iLocal_249 = iLocal_249;
	iLocal_249 = 0;
	func_87();
	func_34();
	Local_70.f_4 = 75;
	Local_70.f_6 = 15;
	OBJECT::SET_LOCKED_UNSTREAMED_IN_DOOR_OF_TYPE(joaat("prop_gate_prison_01"), 1845f, 2605f, 45f, true, 0f, 0f, 0f);
	OBJECT::SET_LOCKED_UNSTREAMED_IN_DOOR_OF_TYPE(joaat("prop_gate_prison_01"), 1819.2744f, 2608.5369f, 44.6195f, true, 0f, 50f, 0f);
	PED::ADD_RELATIONSHIP_GROUP("Prison_Guards", &iLocal_250);
	PED::ADD_RELATIONSHIP_GROUP("Prison_Prisoners", &iLocal_251);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_250, iLocal_251);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_251, iLocal_250);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_250, joaat("COP"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("COP"), iLocal_250);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, joaat("PLAYER"), iLocal_251);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, iLocal_251, joaat("PLAYER"));
}

void func_87()//Position - 0x5080
{
	Local_53[0 /*3*/] = { 1809.8156f, 2482.8772f, 44.4744f };
	Local_53[1 /*3*/] = { 1755.8229f, 2424.904f, 44.4319f };
	Local_53[2 /*3*/] = { 1661.1997f, 2410.0957f, 44.4265f };
	Local_53[3 /*3*/] = { 1555.966f, 2476.4304f, 44.4042f };
	Local_53[4 /*3*/] = { 1549.1406f, 2583.1033f, 44.4225f };
	Local_53[5 /*3*/] = { 1581.1555f, 2671.9739f, 44.481f };
	Local_53[6 /*3*/] = { 1655.4904f, 2743.6897f, 44.4665f };
	Local_53[7 /*3*/] = { 1768.7761f, 2748.527f, 44.4402f };
	Local_53[8 /*3*/] = { 1831.1996f, 2696.0005f, 44.4578f };
	Local_53[9 /*3*/] = { 1803.1215f, 2617.7808f, 44.5082f };
	Local_53[10 /*3*/] = { 1817.221f, 2608.3872f, 44.6204f };
	Local_53[11 /*3*/] = { 1843.8378f, 2608.3606f, 44.6178f };
}

void func_88()//Position - 0x5194
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1879.9559f, 2705.0974f, 52.073414f, 1869.8593f, 2726.7761f, 59.823376f, 24.75f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1833.1132f, 2520.8884f, 52.260857f, 1833.1155f, 2554.4307f, 61.259975f, 15f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1832.742f, 2568.4214f, 48.87375f, 1833.0145f, 2596.5288f, 57.12439f, 27.75f, false, true, 0))
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
			{
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, false);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			}
		}
	}
	if (!iLocal_56)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1917.889f, 2618.476f, -45.677f, 1822.889f, 2618.476f, 45.677f, 195f, false, false, 0))
			{
				if (PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(PLAYER::PLAYER_ID()))
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 4, false);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("PLAYER"), joaat("SECURITY_GUARD"));
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("SECURITY_GUARD"), joaat("PLAYER"));
					iLocal_56 = 1;
				}
				if ((MISC::IS_BULLET_IN_AREA(1874.0724f, 2605.4226f, 44.6723f, 100f, true) && !PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID())) || (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) && !PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(PLAYER::PLAYER_ID())))
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 1, false);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("PLAYER"), joaat("SECURITY_GUARD"));
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("SECURITY_GUARD"), joaat("PLAYER"));
					iLocal_56 = 1;
				}
			}
		}
	}
}

void func_89(bool bParam0)//Position - 0x535D
{
	int iVar0;
	func_95();
	func_94();
	func_93();
	func_92();
	func_91();
	func_90();
	AUDIO::STOP_ALARM("PRISON_ALARMS", true);
	if (iLocal_56)
	{
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, joaat("PLAYER"), joaat("SECURITY_GUARD"));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, joaat("SECURITY_GUARD"), joaat("PLAYER"));
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(iLocal_52[iVar0]))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_52[iVar0]);
		}
		iVar0++;
	}
	OBJECT::SET_LOCKED_UNSTREAMED_IN_DOOR_OF_TYPE(joaat("prop_gate_prison_01"), 1845f, 2605f, 45f, true, 0f, 0f, 0f);
	OBJECT::SET_LOCKED_UNSTREAMED_IN_DOOR_OF_TYPE(joaat("prop_gate_prison_01"), 1819.2744f, 2608.5369f, 44.6195f, true, 0f, 50f, 0f);
	if (bParam0)
	{
		MISC::CLEAR_AREA(1695.1f, 2595.8f, 50f, 1000f, true, false, false, false);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_90()//Position - 0x5433
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_66))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_66);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_68))
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_68);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_67))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_67);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_69))
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_69);
	}
}

void func_91()//Position - 0x5477
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_307.f_27[iVar0]))
		{
			if (HUD::DOES_BLIP_EXIST(Local_307.f_36[iVar0]))
			{
				HUD::REMOVE_BLIP(&(Local_307.f_36[iVar0]));
			}
			if (ENTITY::IS_ENTITY_OCCLUDED(Local_307.f_27[iVar0]))
			{
				PED::DELETE_PED(&(Local_307.f_27[iVar0]));
			}
			else
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_307.f_27[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_307.f_31[iVar0]))
		{
			if (HUD::DOES_BLIP_EXIST(Local_307.f_40[iVar0]))
			{
				HUD::REMOVE_BLIP(&(Local_307.f_40[iVar0]));
			}
			if (ENTITY::IS_ENTITY_OCCLUDED(Local_307.f_31[iVar0]))
			{
				PED::DELETE_PED(&(Local_307.f_31[iVar0]));
			}
			else
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_307.f_31[iVar0]));
			}
		}
		iVar0++;
	}
}

void func_92()//Position - 0x5557
{
	if (HUD::DOES_BLIP_EXIST(iLocal_301))
	{
		HUD::REMOVE_BLIP(&iLocal_301);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_299))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_299);
	}
}

void func_93()//Position - 0x5581
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_296[iVar0]))
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_297[iVar0]))
			{
				HUD::REMOVE_BLIP(&(uLocal_297[iVar0]));
			}
			PED::DELETE_PED(&(uLocal_296[iVar0]));
		}
		iVar0++;
	}
}

void func_94()//Position - 0x55CE
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_263[iVar0]))
		{
			VEHICLE::DELETE_VEHICLE(&(iLocal_263[iVar0]));
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_264[iVar0]))
		{
			PED::DELETE_PED(&(iLocal_264[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_252.f_64[iVar0]))
		{
			if (HUD::DOES_BLIP_EXIST(Local_252.f_75[iVar0]))
			{
				HUD::REMOVE_BLIP(&(Local_252.f_75[iVar0]));
			}
			if (ENTITY::IS_ENTITY_OCCLUDED(Local_252.f_64[iVar0]))
			{
				PED::DELETE_PED(&(Local_252.f_64[iVar0]));
			}
			else
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_252.f_64[iVar0]));
			}
		}
		iVar0++;
	}
}

void func_95()//Position - 0x5687
{
	if (HUD::DOES_BLIP_EXIST(iLocal_291))
	{
		HUD::REMOVE_BLIP(&iLocal_291);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_289))
	{
		if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_289))
		{
			VEHICLE::DELETE_VEHICLE(&iLocal_289);
			PED::DELETE_PED(&iLocal_290);
		}
		else
		{
			__LIB_39__::func_69(&iLocal_289, &iLocal_290);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_289);
		}
	}
}

